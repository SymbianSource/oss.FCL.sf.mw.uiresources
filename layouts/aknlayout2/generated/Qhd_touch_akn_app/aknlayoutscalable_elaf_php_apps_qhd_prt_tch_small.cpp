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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0003cf65 };

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
0x2209,	// (0x0003f16e) Screen

0x2215,	// (0x0003f17a) application_window

0x2271,	// (0x0003f1d6) area_bottom_pane_ParamLimits

0x2271,	// (0x0003f1d6) area_bottom_pane

0x22ca,	// (0x0003f22f) area_top_pane_ParamLimits

0x22ca,	// (0x0003f22f) area_top_pane

0x232e,	// (0x0003f293) call_video_uplink_pane_ParamLimits

0x232e,	// (0x0003f293) call_video_uplink_pane

0x236d,	// (0x0003f2d2) main_pane_ParamLimits

0x236d,	// (0x0003f2d2) main_pane

0xc959,	// (0x000498be) context_pane

0x5564,	// (0x000424c9) navi_pane

0x558a,	// (0x000424ef) popup_cale_events_window_ParamLimits

0x558a,	// (0x000424ef) popup_cale_events_window

0xc96c,	// (0x000498d1) popup_mup_playback_window

0x55a2,	// (0x00042507) signal_pane

0xa90b,	// (0x00047870) main_browser_pane

0xaad0,	// (0x00047a35) main_burst_pane

0x53f0,	// (0x00042355) main_calc_pane

0xc93f,	// (0x000498a4) main_cale_day_pane

0x2ab0,	// (0x0003fa15) main_cale_month_pane

0xc93f,	// (0x000498a4) main_cale_week_pane

0xaad0,	// (0x00047a35) main_call_pane

0xa5b7,	// (0x0004751c) main_call_poc_pane

0xaad0,	// (0x00047a35) main_camera_pane

0xaad0,	// (0x00047a35) main_chi_dic_pane

0xb2ca,	// (0x0004822f) main_clock_pane

0xa5b7,	// (0x0004751c) main_fmradio_pane

0xaad0,	// (0x00047a35) main_graph_messa_pane

0xa5b7,	// (0x0004751c) main_help_pane

0xa90b,	// (0x00047870) main_im_pane

0xa846,	// (0x000477ab) main_image_pane_ParamLimits

0xa846,	// (0x000477ab) main_image_pane

0xa5b7,	// (0x0004751c) main_location2_pane

0xaad0,	// (0x00047a35) main_location_pane

0xa846,	// (0x000477ab) main_messa_pane

0xa5b7,	// (0x0004751c) main_mp2_pane

0xaad0,	// (0x00047a35) main_mp_pane

0xa5b7,	// (0x0004751c) main_msg_pane

0xa5b7,	// (0x0004751c) main_mup_eq_pane

0xa5b7,	// (0x0004751c) main_mup_pane

0xa90b,	// (0x00047870) main_notes_pane

0xa5b7,	// (0x0004751c) main_pec_pane

0xa5b7,	// (0x0004751c) main_phob_pane

0xa5b7,	// (0x0004751c) main_pinb_pane

0xa5b7,	// (0x0004751c) main_postcard_pane

0xa5b7,	// (0x0004751c) main_qdial_pane

0xaad0,	// (0x00047a35) main_skin_pane

0xa5b7,	// (0x0004751c) main_smil2_pane

0xaad0,	// (0x00047a35) main_smil_pane

0xaad0,	// (0x00047a35) main_video_pane

0xaad0,	// (0x00047a35) main_video_tele_pane

0xa846,	// (0x000477ab) main_viewer_pane_ParamLimits

0xa846,	// (0x000477ab) main_viewer_pane

0xaad0,	// (0x00047a35) main_vorec_pane

0x542e,	// (0x00042393) popup_blid_sat_info_window_ParamLimits

0x542e,	// (0x00042393) popup_blid_sat_info_window

0x544e,	// (0x000423b3) popup_dyc_status_message_window_ParamLimits

0x544e,	// (0x000423b3) popup_dyc_status_message_window

0x545e,	// (0x000423c3) popup_grid_large_graphic_window_ParamLimits

0x545e,	// (0x000423c3) popup_grid_large_graphic_window

0x54ef,	// (0x00042454) popup_loc_request_window_ParamLimits

0x54ef,	// (0x00042454) popup_loc_request_window

0x553c,	// (0x000424a1) popup_wml_address_window_ParamLimits

0x553c,	// (0x000424a1) popup_wml_address_window

0x52c8,	// (0x0004222d) call_muted_g1

0x4f8a,	// (0x00041eef) popup_call_audio_conf_window_ParamLimits

0x4f8a,	// (0x00041eef) popup_call_audio_conf_window

0x52d8,	// (0x0004223d) popup_call_audio_first_window_ParamLimits

0x52d8,	// (0x0004223d) popup_call_audio_first_window

0x5318,	// (0x0004227d) popup_call_audio_in_window_ParamLimits

0x5318,	// (0x0004227d) popup_call_audio_in_window

0x533c,	// (0x000422a1) popup_call_audio_out_window_ParamLimits

0x533c,	// (0x000422a1) popup_call_audio_out_window

0x535e,	// (0x000422c3) popup_call_audio_second_window_ParamLimits

0x535e,	// (0x000422c3) popup_call_audio_second_window

0x538e,	// (0x000422f3) popup_call_audio_wait_window_ParamLimits

0x538e,	// (0x000422f3) popup_call_audio_wait_window

0x53af,	// (0x00042314) popup_number_entry_window_ParamLimits

0x53af,	// (0x00042314) popup_number_entry_window

0xa1a4,	// (0x00047109) bg_popup_call_pane_cp05_ParamLimits

0xa1a4,	// (0x00047109) bg_popup_call_pane_cp05

0xa1c4,	// (0x00047129) popup_number_entry_window_t1

0xa1d7,	// (0x0004713c) popup_number_entry_window_t2

0xa1e9,	// (0x0004714e) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0004c02b) popup_number_entry_window_t

0xa1fb,	// (0x00047160) text_title_cp2

0xa20e,	// (0x00047173) bg_popup_call_pane_cp_ParamLimits

0xa20e,	// (0x00047173) bg_popup_call_pane_cp

0xa21c,	// (0x00047181) call_thumbnail_pane

0xa224,	// (0x00047189) popup_call_audio_in_window_g1_ParamLimits

0xa224,	// (0x00047189) popup_call_audio_in_window_g1

0xa230,	// (0x00047195) popup_call_audio_in_window_g2_ParamLimits

0xa230,	// (0x00047195) popup_call_audio_in_window_g2

0xa23c,	// (0x000471a1) popup_call_audio_in_window_g3_ParamLimits

0xa23c,	// (0x000471a1) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0004c034) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0004c034) popup_call_audio_in_window_g

0xa248,	// (0x000471ad) popup_call_audio_in_window_t1_ParamLimits

0xa248,	// (0x000471ad) popup_call_audio_in_window_t1

0xa264,	// (0x000471c9) popup_call_audio_in_window_t2_ParamLimits

0xa264,	// (0x000471c9) popup_call_audio_in_window_t2

0xa280,	// (0x000471e5) popup_call_audio_in_window_t3_ParamLimits

0xa280,	// (0x000471e5) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0004c03b) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0004c03b) popup_call_audio_in_window_t

0xa20e,	// (0x00047173) bg_popup_call_pane_cp01_ParamLimits

0xa20e,	// (0x00047173) bg_popup_call_pane_cp01

0xa21c,	// (0x00047181) call_thumbnail_pane_cp02

0xa293,	// (0x000471f8) call_type_pane_cp022

0xa29b,	// (0x00047200) popup_call_audio_out_window_g1_ParamLimits

0xa29b,	// (0x00047200) popup_call_audio_out_window_g1

0xa2ad,	// (0x00047212) popup_call_audio_out_window_g2_ParamLimits

0xa2ad,	// (0x00047212) popup_call_audio_out_window_g2

0xa2b9,	// (0x0004721e) popup_call_audio_out_window_g3_ParamLimits

0xa2b9,	// (0x0004721e) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0004c042) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0004c042) popup_call_audio_out_window_g

0xa2cb,	// (0x00047230) popup_call_audio_out_window_t1_ParamLimits

0xa2cb,	// (0x00047230) popup_call_audio_out_window_t1

0xa2e3,	// (0x00047248) popup_call_audio_out_window_t2_ParamLimits

0xa2e3,	// (0x00047248) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0004c049) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0004c049) popup_call_audio_out_window_t

0xa2f8,	// (0x0004725d) bg_popup_call_pane_ParamLimits

0xa2f8,	// (0x0004725d) bg_popup_call_pane

0x256e,	// (0x0003f4d3) call_thumbnail_pane_cp_ParamLimits

0x256e,	// (0x0003f4d3) call_thumbnail_pane_cp

0xa37c,	// (0x000472e1) call_type_pane_cp01_ParamLimits

0xa37c,	// (0x000472e1) call_type_pane_cp01

0xa3c0,	// (0x00047325) popup_call_audio_first_window_g1_ParamLimits

0xa3c0,	// (0x00047325) popup_call_audio_first_window_g1

0xa40c,	// (0x00047371) popup_call_audio_first_window_g2_ParamLimits

0xa40c,	// (0x00047371) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0004c04e) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0004c04e) popup_call_audio_first_window_g

0xa450,	// (0x000473b5) popup_call_audio_first_window_t1_ParamLimits

0xa450,	// (0x000473b5) popup_call_audio_first_window_t1

0xa4fc,	// (0x00047461) popup_call_audio_first_window_t4_ParamLimits

0xa4fc,	// (0x00047461) popup_call_audio_first_window_t4

0xa588,	// (0x000474ed) popup_call_audio_first_window_t5_ParamLimits

0xa588,	// (0x000474ed) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0004c053) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0004c053) popup_call_audio_first_window_t

0xa5b7,	// (0x0004751c) bg_popup_call_pane_cp02

0xa5c1,	// (0x00047526) call_type_pane_cp023

0xa5c9,	// (0x0004752e) popup_call_audio_wait_window_g1

0xa5d1,	// (0x00047536) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004c05a) popup_call_audio_wait_window_g

0xa5d9,	// (0x0004753e) popup_call_audio_wait_window_t3

0xa5e7,	// (0x0004754c) bg_popup_call_pane_cp03_ParamLimits

0xa5e7,	// (0x0004754c) bg_popup_call_pane_cp03

0xa647,	// (0x000475ac) call_thumbnail_pane_cp011_ParamLimits

0xa647,	// (0x000475ac) call_thumbnail_pane_cp011

0xa653,	// (0x000475b8) call_type_pane_cp034_ParamLimits

0xa653,	// (0x000475b8) call_type_pane_cp034

0xa6c3,	// (0x00047628) popup_call_audio_second_window_g1_ParamLimits

0xa6c3,	// (0x00047628) popup_call_audio_second_window_g1

0xa6ff,	// (0x00047664) popup_call_audio_second_window_g2_ParamLimits

0xa6ff,	// (0x00047664) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0004c05f) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0004c05f) popup_call_audio_second_window_g

0xa73b,	// (0x000476a0) popup_call_audio_second_window_t1_ParamLimits

0xa73b,	// (0x000476a0) popup_call_audio_second_window_t1

0xa7bc,	// (0x00047721) popup_call_audio_second_window_t2_ParamLimits

0xa7bc,	// (0x00047721) popup_call_audio_second_window_t2

0xa7f2,	// (0x00047757) popup_call_audio_second_window_t3_ParamLimits

0xa7f2,	// (0x00047757) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0004c064) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0004c064) popup_call_audio_second_window_t

0xa5b7,	// (0x0004751c) bg_popup_call_pane_cp04

0xa828,	// (0x0004778d) list_conf_pane

0xa830,	// (0x00047795) popup_call_audio_conf_window_t1

0xa83e,	// (0x000477a3) call_thumbnail_pane_g1

0xa846,	// (0x000477ab) bg_pinb_pane_ParamLimits

0xa846,	// (0x000477ab) bg_pinb_pane

0xa854,	// (0x000477b9) find_pinb_pane

0xa85d,	// (0x000477c2) listscroll_pinb_pane_ParamLimits

0xa85d,	// (0x000477c2) listscroll_pinb_pane

0xa86c,	// (0x000477d1) pinb_bg_pane_g1

0x2592,	// (0x0003f4f7) pinb_bg_pane_g2

0x259e,	// (0x0003f503) pinb_bg_pane_g3

0x25aa,	// (0x0003f50f) pinb_bg_pane_g4

0x25b6,	// (0x0003f51b) pinb_bg_pane_g5

0x25c2,	// (0x0003f527) pinb_bg_pane_g6

0x25cd,	// (0x0003f532) pinb_bg_pane_g7

0x25d8,	// (0x0003f53d) pinb_bg_pane_g8

0x25e3,	// (0x0003f548) pinb_bg_pane_g9

0x25ed,	// (0x0003f552) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0004c06b) pinb_bg_pane_g

0x260a,	// (0x0003f56f) grid_pinb_pane

0x2615,	// (0x0003f57a) list_pinb_pane

0x2620,	// (0x0003f585) scroll_pane_cp01_ParamLimits

0x2620,	// (0x0003f585) scroll_pane_cp01

0xa876,	// (0x000477db) find_pinb_pane_g1_ParamLimits

0xa876,	// (0x000477db) find_pinb_pane_g1

0xa88e,	// (0x000477f3) find_pinb_pane_t1

0xa8a0,	// (0x00047805) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0004c085) find_pinb_pane_t

0xa8b5,	// (0x0004781a) input_focus_pane_cp01_ParamLimits

0xa8b5,	// (0x0004781a) input_focus_pane_cp01

0x2632,	// (0x0003f597) cell_pinb_pane_ParamLimits

0x2632,	// (0x0003f597) cell_pinb_pane

0x265a,	// (0x0003f5bf) cell_pinb_pane_g1_ParamLimits

0x265a,	// (0x0003f5bf) cell_pinb_pane_g1

0x266f,	// (0x0003f5d4) cell_pinb_pane_g2_ParamLimits

0x266f,	// (0x0003f5d4) cell_pinb_pane_g2

0xa8c1,	// (0x00047826) cell_pinb_pane_g3_ParamLimits

0xa8c1,	// (0x00047826) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0004c08a) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0004c08a) cell_pinb_pane_g

0xa5b7,	// (0x0004751c) grid_highlight_pane_cp01

0x267b,	// (0x0003f5e0) list_pinb_item_pane_ParamLimits

0x267b,	// (0x0003f5e0) list_pinb_item_pane

0xa5b7,	// (0x0004751c) list_highlight_pane_cp02

0x26a1,	// (0x0003f606) list_pinb_item_pane_g1_ParamLimits

0x26a1,	// (0x0003f606) list_pinb_item_pane_g1

0x26ae,	// (0x0003f613) list_pinb_item_pane_g2_ParamLimits

0x26ae,	// (0x0003f613) list_pinb_item_pane_g2

0x26ba,	// (0x0003f61f) list_pinb_item_pane_g3_ParamLimits

0x26ba,	// (0x0003f61f) list_pinb_item_pane_g3

0x26cb,	// (0x0003f630) list_pinb_item_pane_g4_ParamLimits

0x26cb,	// (0x0003f630) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0004c091) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0004c091) list_pinb_item_pane_g

0x26d7,	// (0x0003f63c) list_pinb_item_pane_t1_ParamLimits

0x26d7,	// (0x0003f63c) list_pinb_item_pane_t1

0x2708,	// (0x0003f66d) calc_display_pane

0x2726,	// (0x0003f68b) calc_paper_pane

0x2742,	// (0x0003f6a7) grid_calc_pane

0xa5b7,	// (0x0004751c) bg_list_pane_cp01

0x276e,	// (0x0003f6d3) clock_g1

0x2776,	// (0x0003f6db) clock_g2

0x0001,

0xf135,	// (0x0004c09a) clock_g

0x2780,	// (0x0003f6e5) clock_t1_ParamLimits

0x2780,	// (0x0003f6e5) clock_t1

0x2795,	// (0x0003f6fa) clock_t2_ParamLimits

0x2795,	// (0x0003f6fa) clock_t2

0x27a7,	// (0x0003f70c) clock_t3_ParamLimits

0x27a7,	// (0x0003f70c) clock_t3

0x27b9,	// (0x0003f71e) clock_t4_ParamLimits

0x27b9,	// (0x0003f71e) clock_t4

0x27cb,	// (0x0003f730) clock_t5_ParamLimits

0x27cb,	// (0x0003f730) clock_t5

0x27e0,	// (0x0003f745) clock_t6_ParamLimits

0x27e0,	// (0x0003f745) clock_t6

0x27f2,	// (0x0003f757) clock_t7_ParamLimits

0x27f2,	// (0x0003f757) clock_t7

0x2804,	// (0x0003f769) clock_t8_ParamLimits

0x2804,	// (0x0003f769) clock_t8

0x281a,	// (0x0003f77f) clock_t9_ParamLimits

0x281a,	// (0x0003f77f) clock_t9

0x0008,

0xf13a,	// (0x0004c09f) clock_t_ParamLimits

0xf13a,	// (0x0004c09f) clock_t

0xa8cd,	// (0x00047832) popup_clock_analogue_window_cp02

0xa8cd,	// (0x00047832) popup_clock_digital_window_cp01

0xa8d5,	// (0x0004783a) listscroll_help_pane

0xa5b7,	// (0x0004751c) phob_pre_status_pane

0xa8df,	// (0x00047844) grid_qdial_pane

0xa846,	// (0x000477ab) listscroll_mce_pane

0xa846,	// (0x000477ab) bg_notes_pane

0xa8e9,	// (0x0004784e) list_notes_pane

0x2830,	// (0x0003f795) scroll_pane_cp06

0xa8f7,	// (0x0004785c) bg_calc_paper_pane

0x283f,	// (0x0003f7a4) list_calc_pane

0xa90b,	// (0x00047870) bg_calc_display_pane

0x2859,	// (0x0003f7be) calc_display_pane_t1

0x286e,	// (0x0003f7d3) calc_display_pane_t2

0x2883,	// (0x0003f7e8) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0004c0b2) calc_display_pane_t

0x2895,	// (0x0003f7fa) cell_calc_pane_ParamLimits

0x2895,	// (0x0003f7fa) cell_calc_pane

0xa917,	// (0x0004787c) bg_calc_paper_pane_g1

0xa923,	// (0x00047888) bg_calc_paper_pane_g2

0xa92f,	// (0x00047894) bg_calc_paper_pane_g3

0xa93b,	// (0x000478a0) bg_calc_paper_pane_g4

0xa947,	// (0x000478ac) bg_calc_paper_pane_g5

0x28c2,	// (0x0003f827) bg_calc_paper_pane_g6

0x28d3,	// (0x0003f838) bg_calc_paper_pane_g7

0x28e4,	// (0x0003f849) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0004c0b9) bg_calc_paper_pane_g

0x28f5,	// (0x0003f85a) calc_bg_paper_pane_g9

0x2906,	// (0x0003f86b) list_calc_item_pane_ParamLimits

0x2906,	// (0x0003f86b) list_calc_item_pane

0xa953,	// (0x000478b8) list_calc_item_pane_g1

0x2932,	// (0x0003f897) list_calc_item_pane_t1_ParamLimits

0x2932,	// (0x0003f897) list_calc_item_pane_t1

0x2944,	// (0x0003f8a9) list_calc_item_pane_t2_ParamLimits

0x2944,	// (0x0003f8a9) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0004c0ca) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0004c0ca) list_calc_item_pane_t

0xa960,	// (0x000478c5) cell_calc_pane_g1

0xa96a,	// (0x000478cf) grid_highlight_pane_cp02

0x2974,	// (0x0003f8d9) bg_calc_display_pane_g1

0x297d,	// (0x0003f8e2) bg_calc_display_pane_g2

0x2987,	// (0x0003f8ec) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0004c0d4) bg_calc_display_pane_g

0x2990,	// (0x0003f8f5) cell_qdial_pane_ParamLimits

0x2990,	// (0x0003f8f5) cell_qdial_pane

0x29a4,	// (0x0003f909) cell_qdial_pane_g1_ParamLimits

0x29a4,	// (0x0003f909) cell_qdial_pane_g1

0x29b1,	// (0x0003f916) cell_qdial_pane_g2_ParamLimits

0x29b1,	// (0x0003f916) cell_qdial_pane_g2

0xa98c,	// (0x000478f1) cell_qdial_pane_g3_ParamLimits

0xa98c,	// (0x000478f1) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0004c0db) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0004c0db) cell_qdial_pane_g

0x29cf,	// (0x0003f934) cell_qdial_pane_t1_ParamLimits

0x29cf,	// (0x0003f934) cell_qdial_pane_t1

0x29e7,	// (0x0003f94c) cell_qdial_pane_t2_ParamLimits

0x29e7,	// (0x0003f94c) cell_qdial_pane_t2

0x29fa,	// (0x0003f95f) cell_qdial_pane_t3_ParamLimits

0x29fa,	// (0x0003f95f) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0004c0e4) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0004c0e4) cell_qdial_pane_t

0xa5b7,	// (0x0004751c) grid_highlight_pane_cp04

0xa998,	// (0x000478fd) thumbnail_qdial_pane_ParamLimits

0xa998,	// (0x000478fd) thumbnail_qdial_pane

0xa9f4,	// (0x00047959) list_help_pane

0xa9fd,	// (0x00047962) scroll_pane_cp02

0x2a0d,	// (0x0003f972) help_list_pane_t1_ParamLimits

0x2a0d,	// (0x0003f972) help_list_pane_t1

0x2a40,	// (0x0003f9a5) bg_notes_pane_g2

0x2a48,	// (0x0003f9ad) bg_notes_pane_g3

0x2a50,	// (0x0003f9b5) notes_bg_pane_g1

0x2a58,	// (0x0003f9bd) notes_bg_pane_g4

0x2a60,	// (0x0003f9c5) notes_bg_pane_g5

0x2a68,	// (0x0003f9cd) notes_bg_pane_g6

0x2a70,	// (0x0003f9d5) notes_bg_pane_g7

0x2a78,	// (0x0003f9dd) notes_bg_pane_g8

0x2a80,	// (0x0003f9e5) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0004c102) notes_bg_pane_g

0x2a88,	// (0x0003f9ed) list_notes_text_pane_ParamLimits

0x2a88,	// (0x0003f9ed) list_notes_text_pane

0xaa06,	// (0x0004796b) list_notes_text_pane_g1

0x0e57,	// (0x0003ddbc) list_notes_text_pane_t1

0x2ab0,	// (0x0003fa15) listscroll_cale_week_pane

0x2ad5,	// (0x0003fa3a) bg_cale_heading_pane

0xaa29,	// (0x0004798e) bg_cale_pane_cp01

0x2af5,	// (0x0003fa5a) cale_week_corner_pane

0x2b0f,	// (0x0003fa74) cale_week_day_heading_pane

0x2b2f,	// (0x0003fa94) cale_week_scroll_pane_g1

0x2b4a,	// (0x0003faaf) cale_week_scroll_pane_g2

0x2b5d,	// (0x0003fac2) cale_week_scroll_pane_g3

0x2b70,	// (0x0003fad5) cale_week_scroll_pane_g4

0x2b83,	// (0x0003fae8) cale_week_scroll_pane_g5

0x2b96,	// (0x0003fafb) cale_week_scroll_pane_g6

0x2ba9,	// (0x0003fb0e) cale_week_scroll_pane_g7

0x2bbe,	// (0x0003fb23) cale_week_scroll_pane_g8

0x2bd3,	// (0x0003fb38) cale_week_scroll_pane_g9

0x2be6,	// (0x0003fb4b) cale_week_scroll_pane_g10

0x2bf9,	// (0x0003fb5e) cale_week_scroll_pane_g11

0x2c0c,	// (0x0003fb71) cale_week_scroll_pane_g12

0x2c23,	// (0x0003fb88) cale_week_scroll_pane_g13

0x2c3e,	// (0x0003fba3) cale_week_scroll_pane_g14

0x2c59,	// (0x0003fbbe) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0004c111) cale_week_scroll_pane_g

0x2c89,	// (0x0003fbee) cale_week_time_pane

0x2c9e,	// (0x0003fc03) grid_cale_week_pane

0xaa58,	// (0x000479bd) scroll_pane_cp08

0x2cbd,	// (0x0003fc22) cell_cale_week_pane_ParamLimits

0x2cbd,	// (0x0003fc22) cell_cale_week_pane

0x2d1f,	// (0x0003fc84) cale_week_day_heading_pane_t1

0x2d3a,	// (0x0003fc9f) cale_week_day_heading_pane_t2

0x2d55,	// (0x0003fcba) cale_week_day_heading_pane_t3

0x2d70,	// (0x0003fcd5) cale_week_day_heading_pane_t4

0x2d8b,	// (0x0003fcf0) cale_week_day_heading_pane_t5

0x2da6,	// (0x0003fd0b) cale_week_day_heading_pane_t6

0x2dc1,	// (0x0003fd26) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0004c132) cale_week_day_heading_pane_t

0xaa75,	// (0x000479da) bg_cale_side_pane

0x2ddc,	// (0x0003fd41) cale_week_time_pane_t1

0x2df6,	// (0x0003fd5b) cale_week_time_pane_t2

0x2e10,	// (0x0003fd75) cale_week_time_pane_t3

0x2e2a,	// (0x0003fd8f) cale_week_time_pane_t4

0x2e44,	// (0x0003fda9) cale_week_time_pane_t5

0x2e5e,	// (0x0003fdc3) cale_week_time_pane_t6

0x2e7c,	// (0x0003fde1) cale_week_time_pane_t7

0x2e9e,	// (0x0003fe03) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0004c141) cale_week_time_pane_t

0x2ec2,	// (0x0003fe27) cell_cale_week_pane_g2

0x2ee6,	// (0x0003fe4b) cell_cale_week_pane_g3_ParamLimits

0x2ee6,	// (0x0003fe4b) cell_cale_week_pane_g3

0xaa83,	// (0x000479e8) grid_highlight_pane_cp07

0xaa8b,	// (0x000479f0) listscroll_gms_pane

0xaa95,	// (0x000479fa) grid_gms_pane

0xaa9e,	// (0x00047a03) listscroll_gms_pane_g1

0xaaa6,	// (0x00047a0b) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0004c152) listscroll_gms_pane_g

0x2efe,	// (0x0003fe63) scroll_pane_cp010

0x2f09,	// (0x0003fe6e) cell_gms_pane_ParamLimits

0x2f09,	// (0x0003fe6e) cell_gms_pane

0x2f1c,	// (0x0003fe81) cell_gms_pane_g1

0xaaae,	// (0x00047a13) cell_gms_pane_g2

0xaab6,	// (0x00047a1b) cell_gms_pane_g3

0xaabf,	// (0x00047a24) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0004c157) cell_gms_pane_g

0xaac8,	// (0x00047a2d) grid_highlight_pane_cp09

0x5270,	// (0x000421d5) phob_pre_status_pane_g1

0x5278,	// (0x000421dd) phob_pre_status_pane_g2

0x5280,	// (0x000421e5) phob_pre_status_pane_g3

0x5288,	// (0x000421ed) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0004c542) phob_pre_status_pane_g

0x5298,	// (0x000421fd) phob_pre_status_pane_t1

0x52a8,	// (0x0004220d) phob_pre_status_pane_t2

0x52b8,	// (0x0004221d) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0004c54d) phob_pre_status_pane_t

0xaad0,	// (0x00047a35) bg_list_pane_cp05

0x2f2c,	// (0x0003fe91) grid_vorec_pane

0x2f36,	// (0x0003fe9b) vorec_t1

0x2f44,	// (0x0003fea9) vorec_t2

0x2f52,	// (0x0003feb7) vorec_t3

0x2f60,	// (0x0003fec5) vorec_t4

0xa142,	// (0x000470a7) vorec_t5

0xa150,	// (0x000470b5) vorec_t6

0x0004,

0xf1fb,	// (0x0004c160) vorec_t

0xa15e,	// (0x000470c3) wait_bar_pane_cp01

0x2f7c,	// (0x0003fee1) cell_vorec_pane_ParamLimits

0x2f7c,	// (0x0003fee1) cell_vorec_pane

0x2f8f,	// (0x0003fef4) cell_vorec_pane_g1

0xa5b7,	// (0x0004751c) grid_highlight_pane_cp05

0x2fa9,	// (0x0003ff0e) cams_zoom_pane

0x2fb5,	// (0x0003ff1a) image_vga_pane

0x2fc4,	// (0x0003ff29) main_camera_pane_g1

0x2fd2,	// (0x0003ff37) main_camera_pane_g2

0x2fde,	// (0x0003ff43) main_camera_pane_g3

0x2fea,	// (0x0003ff4f) main_camera_pane_g4

0x2ff6,	// (0x0003ff5b) main_camera_pane_g5

0x3002,	// (0x0003ff67) main_camera_pane_g6

0x300e,	// (0x0003ff73) main_camera_pane_g7

0x0007,

0xf206,	// (0x0004c16b) main_camera_pane_g

0x301a,	// (0x0003ff7f) main_camera_pane_t1

0x302c,	// (0x0003ff91) main_camera_pane_t2

0x0001,

0xf217,	// (0x0004c17c) main_camera_pane_t

0x304d,	// (0x0003ffb2) cams_zoom_pane_cp_ParamLimits

0x304d,	// (0x0003ffb2) cams_zoom_pane_cp

0x3071,	// (0x0003ffd6) image_cif_pane_ParamLimits

0x3071,	// (0x0003ffd6) image_cif_pane

0x308f,	// (0x0003fff4) image_subqcif_pane

0x3097,	// (0x0003fffc) main_video_pane_g1_ParamLimits

0x3097,	// (0x0003fffc) main_video_pane_g1

0x30b7,	// (0x0004001c) main_video_pane_g2_ParamLimits

0x30b7,	// (0x0004001c) main_video_pane_g2

0x30e7,	// (0x0004004c) main_video_pane_g3_ParamLimits

0x30e7,	// (0x0004004c) main_video_pane_g3

0x3110,	// (0x00040075) main_video_pane_g4_ParamLimits

0x3110,	// (0x00040075) main_video_pane_g4

0x3139,	// (0x0004009e) main_video_pane_g5_ParamLimits

0x3139,	// (0x0004009e) main_video_pane_g5

0xaae4,	// (0x00047a49) main_video_pane_g6_ParamLimits

0xaae4,	// (0x00047a49) main_video_pane_g6

0x0006,

0xf21c,	// (0x0004c181) main_video_pane_g_ParamLimits

0xf21c,	// (0x0004c181) main_video_pane_g

0x315b,	// (0x000400c0) main_video_pane_t1_ParamLimits

0x315b,	// (0x000400c0) main_video_pane_t1

0xaafe,	// (0x00047a63) cams_zoom_pane_g1

0xab07,	// (0x00047a6c) cams_zoom_pane_g2

0xab10,	// (0x00047a75) cams_zoom_pane_g3

0xab19,	// (0x00047a7e) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0004c190) cams_zoom_pane_g

0x31a5,	// (0x0004010a) grid_cams_pane

0x31b3,	// (0x00040118) linegrid_cams_pane

0x31c1,	// (0x00040126) cell_cams_pane_ParamLimits

0x31c1,	// (0x00040126) cell_cams_pane

0xab22,	// (0x00047a87) cams_burst_image_pane

0xab2a,	// (0x00047a8f) cell_cams_pane_g1

0xa5b7,	// (0x0004751c) grid_highlight_pane_cp03

0xa960,	// (0x000478c5) mp_bg_pane_g1

0xa5b7,	// (0x0004751c) bg_list_pane_cp03

0xc864,	// (0x000497c9) bg_mp_pane

0xc86c,	// (0x000497d1) grid_mp_pane

0xc874,	// (0x000497d9) media_player_g1

0xc87c,	// (0x000497e1) media_player_t1

0xc88a,	// (0x000497ef) media_player_t2

0xc898,	// (0x000497fd) media_player_t3

0xc8a6,	// (0x0004980b) media_player_t4

0xc8b4,	// (0x00049819) media_player_t5

0xc8c2,	// (0x00049827) media_player_t6

0xc8d0,	// (0x00049835) media_player_t7

0x0006,

0xf5c7,	// (0x0004c52c) media_player_t

0xc8de,	// (0x00049843) wait_bar_pane_cp02

0xf5ac,	// (0x0004c511) main_usb_pane_t

0x5267,	// (0x000421cc) cell_mp_pane

0xa960,	// (0x000478c5) cell_mp_pane_g1

0xa5b7,	// (0x0004751c) grid_highlight_pane_cp06

0xab32,	// (0x00047a97) grid_skin_colour_pane

0xab3a,	// (0x00047a9f) list_highlight_pane_cp03

0x31d4,	// (0x00040139) skin_g1

0xab42,	// (0x00047aa7) skin_t1

0xab51,	// (0x00047ab6) skin_t2

0x0001,

0xf260,	// (0x0004c1c5) skin_t

0x31de,	// (0x00040143) cell_skin_colour_pane_ParamLimits

0x31de,	// (0x00040143) cell_skin_colour_pane

0xab5f,	// (0x00047ac4) cell_skin_colour_pane_g1

0x3262,	// (0x000401c7) call_video_g1_ParamLimits

0x3262,	// (0x000401c7) call_video_g1

0x3272,	// (0x000401d7) call_video_g2_ParamLimits

0x3272,	// (0x000401d7) call_video_g2

0x0001,

0xf265,	// (0x0004c1ca) call_video_g_ParamLimits

0xf265,	// (0x0004c1ca) call_video_g

0x32cc,	// (0x00040231) call_video_uplink_pane_cp1_ParamLimits

0x32cc,	// (0x00040231) call_video_uplink_pane_cp1

0xab71,	// (0x00047ad6) call_video_uplink_pane_cp2

0x3398,	// (0x000402fd) video_down_crop_pane_ParamLimits

0x3398,	// (0x000402fd) video_down_crop_pane

0x3496,	// (0x000403fb) video_down_pane_ParamLimits

0x3496,	// (0x000403fb) video_down_pane

0xab79,	// (0x00047ade) video_down_subqcif_pane_ParamLimits

0xab79,	// (0x00047ade) video_down_subqcif_pane

0xab91,	// (0x00047af6) video_down_subqcif_pane_cp_ParamLimits

0xab91,	// (0x00047af6) video_down_subqcif_pane_cp

0xabc0,	// (0x00047b25) im_reading_pane_ParamLimits

0xabc0,	// (0x00047b25) im_reading_pane

0x35b6,	// (0x0004051b) im_writing_pane_ParamLimits

0x35b6,	// (0x0004051b) im_writing_pane

0x35d4,	// (0x00040539) im_reading_pane_t1

0xabda,	// (0x00047b3f) list_im_pane

0xabeb,	// (0x00047b50) scroll_pane_cp07

0x3628,	// (0x0004058d) im_writing_pane_t1_ParamLimits

0x3628,	// (0x0004058d) im_writing_pane_t1

0xac04,	// (0x00047b69) im_writing_pane_t2_ParamLimits

0xac04,	// (0x00047b69) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0004c1d4) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0004c1d4) im_writing_pane_t

0xa5b7,	// (0x0004751c) input_focus_pane_cp04

0xa5b7,	// (0x0004751c) input_focus_pane_cp05

0x363d,	// (0x000405a2) list_im_single_pane_ParamLimits

0x363d,	// (0x000405a2) list_im_single_pane

0x3661,	// (0x000405c6) list_single_im_pane_t1

0x522b,	// (0x00042190) blid_accuracy_pane

0x5233,	// (0x00042198) blid_compass_pane

0x523d,	// (0x000421a2) main_location_t1

0x524b,	// (0x000421b0) main_location_t2

0x5259,	// (0x000421be) main_location_t3

0x0002,

0xf5d6,	// (0x0004c53b) main_location_t

0xa5b7,	// (0x0004751c) aid_levels_location

0xa960,	// (0x000478c5) blid_accuracy_pane_g1

0xa960,	// (0x000478c5) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0004c236) blid_accuracy_pane_g

0xac4c,	// (0x00047bb1) wml_content_pane

0xac8a,	// (0x00047bef) wml_button_pane_ParamLimits

0xac8a,	// (0x00047bef) wml_button_pane

0x3670,	// (0x000405d5) wml_list_single_large_pane_ParamLimits

0x3670,	// (0x000405d5) wml_list_single_large_pane

0x369a,	// (0x000405ff) wml_list_single_medium_pane_ParamLimits

0x369a,	// (0x000405ff) wml_list_single_medium_pane

0x36cb,	// (0x00040630) wml_list_single_small_pane_ParamLimits

0x36cb,	// (0x00040630) wml_list_single_small_pane

0xac9e,	// (0x00047c03) wml_selection_box_pane_ParamLimits

0xac9e,	// (0x00047c03) wml_selection_box_pane

0xacb1,	// (0x00047c16) wml_list_single_pane_t1

0xacc0,	// (0x00047c25) wml_list_single_medium_pane_t1

0xaccf,	// (0x00047c34) wml_list_single_large_pane_t1

0xacde,	// (0x00047c43) input_focus_pane_cp02_ParamLimits

0xacde,	// (0x00047c43) input_focus_pane_cp02

0xacf1,	// (0x00047c56) wml_selection_box_pane_g1

0xacfa,	// (0x00047c5f) wml_selection_box_pane_t1_ParamLimits

0xacfa,	// (0x00047c5f) wml_selection_box_pane_t1

0xa846,	// (0x000477ab) bg_wml_button_pane_ParamLimits

0xa846,	// (0x000477ab) bg_wml_button_pane

0xad12,	// (0x00047c77) wml_button_pane_g1

0xad1a,	// (0x00047c7f) wml_button_pane_t1

0xad12,	// (0x00047c77) wml_button_bg_pane_g1

0xad2a,	// (0x00047c8f) wml_button_bg_pane_g2

0xad32,	// (0x00047c97) wml_button_bg_pane_g3

0xad3a,	// (0x00047c9f) wml_button_bg_pane_g4

0xad42,	// (0x00047ca7) wml_button_bg_pane_g5

0xad4a,	// (0x00047caf) wml_button_bg_pane_g6

0xad52,	// (0x00047cb7) wml_button_bg_pane_g7

0xad5a,	// (0x00047cbf) wml_button_bg_pane_g8

0xad62,	// (0x00047cc7) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0004c1d9) wml_button_bg_pane_g

0x3705,	// (0x0004066a) bg_list_pane_cp02

0xad6a,	// (0x00047ccf) mce_header_pane_ParamLimits

0xad6a,	// (0x00047ccf) mce_header_pane

0xad80,	// (0x00047ce5) mce_icon_pane

0xad80,	// (0x00047ce5) mce_image_pane

0xad89,	// (0x00047cee) mce_text_pane_ParamLimits

0xad89,	// (0x00047cee) mce_text_pane

0x370f,	// (0x00040674) scroll_pane_cp03

0xac82,	// (0x00047be7) scroll_pane_cp04

0xad9c,	// (0x00047d01) scroll_pane_cp05_ParamLimits

0xad9c,	// (0x00047d01) scroll_pane_cp05

0x3719,	// (0x0004067e) mce_header_field_pane_ParamLimits

0x3719,	// (0x0004067e) mce_header_field_pane

0x3739,	// (0x0004069e) mce_header_field_pane_2_ParamLimits

0x3739,	// (0x0004069e) mce_header_field_pane_2

0x374f,	// (0x000406b4) mce_header_field_pane_3

0x3757,	// (0x000406bc) list_single_mce_message_pane_ParamLimits

0x3757,	// (0x000406bc) list_single_mce_message_pane

0x3782,	// (0x000406e7) list_single_mce_smart_pane_ParamLimits

0x3782,	// (0x000406e7) list_single_mce_smart_pane

0xada8,	// (0x00047d0d) input_focus_pane_cp03

0xadb1,	// (0x00047d16) list_header_data_pane

0x37b8,	// (0x0004071d) mce_header_field_pane_t1

0x37c6,	// (0x0004072b) list_single_mce_header_pane_ParamLimits

0x37c6,	// (0x0004072b) list_single_mce_header_pane

0xadb9,	// (0x00047d1e) list_single_mce_header_pane_t1

0xadc8,	// (0x00047d2d) list_single_mce_message_pane_g1

0xadd0,	// (0x00047d35) list_single_mce_message_pane_t1

0x3818,	// (0x0004077d) bg_cale_heading_pane_cp01_ParamLimits

0x3818,	// (0x0004077d) bg_cale_heading_pane_cp01

0xadde,	// (0x00047d43) bg_cale_pane_cp02_ParamLimits

0xadde,	// (0x00047d43) bg_cale_pane_cp02

0x3866,	// (0x000407cb) cale_month_corner_pane

0x3885,	// (0x000407ea) cale_month_day_heading_pane_ParamLimits

0x3885,	// (0x000407ea) cale_month_day_heading_pane

0x38eb,	// (0x00040850) cale_month_pane_g1_ParamLimits

0x38eb,	// (0x00040850) cale_month_pane_g1

0x392e,	// (0x00040893) cale_month_pane_g2_ParamLimits

0x392e,	// (0x00040893) cale_month_pane_g2

0x3966,	// (0x000408cb) cale_month_pane_g3_ParamLimits

0x3966,	// (0x000408cb) cale_month_pane_g3

0x39b2,	// (0x00040917) cale_month_pane_g4_ParamLimits

0x39b2,	// (0x00040917) cale_month_pane_g4

0x39fe,	// (0x00040963) cale_month_pane_g5_ParamLimits

0x39fe,	// (0x00040963) cale_month_pane_g5

0x3a4a,	// (0x000409af) cale_month_pane_g6_ParamLimits

0x3a4a,	// (0x000409af) cale_month_pane_g6

0x3a96,	// (0x000409fb) cale_month_pane_g7_ParamLimits

0x3a96,	// (0x000409fb) cale_month_pane_g7

0x3afa,	// (0x00040a5f) cale_month_pane_g8_ParamLimits

0x3afa,	// (0x00040a5f) cale_month_pane_g8

0x3b5e,	// (0x00040ac3) cale_month_pane_g9_ParamLimits

0x3b5e,	// (0x00040ac3) cale_month_pane_g9

0x3bbc,	// (0x00040b21) cale_month_pane_g10_ParamLimits

0x3bbc,	// (0x00040b21) cale_month_pane_g10

0x3c18,	// (0x00040b7d) cale_month_pane_g11_ParamLimits

0x3c18,	// (0x00040b7d) cale_month_pane_g11

0x3c6c,	// (0x00040bd1) cale_month_pane_g12_ParamLimits

0x3c6c,	// (0x00040bd1) cale_month_pane_g12

0x3cc2,	// (0x00040c27) cale_month_pane_g13_ParamLimits

0x3cc2,	// (0x00040c27) cale_month_pane_g13

0x000c,

0xf287,	// (0x0004c1ec) cale_month_pane_g_ParamLimits

0xf287,	// (0x0004c1ec) cale_month_pane_g

0x3d18,	// (0x00040c7d) cale_month_week_pane

0x3d3c,	// (0x00040ca1) grid_cale_month_pane_ParamLimits

0x3d3c,	// (0x00040ca1) grid_cale_month_pane

0x3d95,	// (0x00040cfa) cale_month_day_heading_pane_t1

0x3e1b,	// (0x00040d80) cale_month_day_heading_pane_t2

0x3e94,	// (0x00040df9) cale_month_day_heading_pane_t3

0x3f0d,	// (0x00040e72) cale_month_day_heading_pane_t4

0x3f86,	// (0x00040eeb) cale_month_day_heading_pane_t5

0x3fff,	// (0x00040f64) cale_month_day_heading_pane_t6

0x4078,	// (0x00040fdd) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0004c207) cale_month_day_heading_pane_t

0xaa75,	// (0x000479da) bg_cale_side_pane_cp01

0x4109,	// (0x0004106e) cale_month_week_pane_t1

0x4122,	// (0x00041087) cale_month_week_pane_t2

0x413b,	// (0x000410a0) cale_month_week_pane_t3

0x4154,	// (0x000410b9) cale_month_week_pane_t4

0x416d,	// (0x000410d2) cale_month_week_pane_t5

0x418e,	// (0x000410f3) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0004c216) cale_month_week_pane_t

0x41af,	// (0x00041114) cell_cale_month_pane_ParamLimits

0x41af,	// (0x00041114) cell_cale_month_pane

0x42d1,	// (0x00041236) cell_cale_month_pane_g1

0x42dd,	// (0x00041242) cell_cale_month_pane_t1_ParamLimits

0x42dd,	// (0x00041242) cell_cale_month_pane_t1

0xaa83,	// (0x000479e8) grid_highlight_pane_cp08

0xa960,	// (0x000478c5) main_smil_g1

0x4309,	// (0x0004126e) smil_status_pane

0xae1d,	// (0x00047d82) smil_text_pane

0xc784,	// (0x000496e9) bg_popup_call3_rect_pane_g8

0xc78c,	// (0x000496f1) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0004c4cf) bg_popup_call3_rect_pane_g

0xc9d3,	// (0x00049938) smil_status_volume_pane_g1

0xae27,	// (0x00047d8c) smil_status_pane_t1

0x5655,	// (0x000425ba) volume_smil_pane

0xae3e,	// (0x00047da3) list_smil_text_pane

0x431c,	// (0x00041281) scroll_pane_cp011

0x4327,	// (0x0004128c) smil_text_list_pane_t1_ParamLimits

0x4327,	// (0x0004128c) smil_text_list_pane_t1

0x439f,	// (0x00041304) aid_volume_smil_ParamLimits

0x439f,	// (0x00041304) aid_volume_smil

0xa960,	// (0x000478c5) smil_volume_pane_g1

0xa960,	// (0x000478c5) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0004c236) smil_volume_pane_g

0x2ab0,	// (0x0003fa15) listscroll_cale_day_pane

0xae48,	// (0x00047dad) bg_cale_pane

0xae60,	// (0x00047dc5) list_cale_pane

0xae83,	// (0x00047de8) scroll_pane_cp09

0xae94,	// (0x00047df9) cale_bg_pane_g1

0xae9c,	// (0x00047e01) cale_bg_pane_g2

0xaea4,	// (0x00047e09) cale_bg_pane_g3

0xaeac,	// (0x00047e11) cale_bg_pane_g4

0xaeb4,	// (0x00047e19) cale_bg_pane_g5

0xaebc,	// (0x00047e21) cale_bg_pane_g6

0xaec4,	// (0x00047e29) cale_bg_pane_g7

0xaecc,	// (0x00047e31) cale_bg_pane_g8

0xaed4,	// (0x00047e39) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0004c23b) cale_bg_pane_g

0x43c9,	// (0x0004132e) list_cale_time_pane_ParamLimits

0x43c9,	// (0x0004132e) list_cale_time_pane

0xaedc,	// (0x00047e41) list_cale_time_pane_g1_ParamLimits

0xaedc,	// (0x00047e41) list_cale_time_pane_g1

0xaee8,	// (0x00047e4d) list_cale_time_pane_g2_ParamLimits

0xaee8,	// (0x00047e4d) list_cale_time_pane_g2

0x43eb,	// (0x00041350) list_cale_time_pane_g3_ParamLimits

0x43eb,	// (0x00041350) list_cale_time_pane_g3

0x43f9,	// (0x0004135e) list_cale_time_pane_g4_ParamLimits

0x43f9,	// (0x0004135e) list_cale_time_pane_g4

0x4407,	// (0x0004136c) list_cale_time_pane_g5_ParamLimits

0x4407,	// (0x0004136c) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0004c24e) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0004c24e) list_cale_time_pane_g

0xaf02,	// (0x00047e67) list_cale_time_pane_t1_ParamLimits

0xaf02,	// (0x00047e67) list_cale_time_pane_t1

0xaf2a,	// (0x00047e8f) list_cale_time_pane_t2_ParamLimits

0xaf2a,	// (0x00047e8f) list_cale_time_pane_t2

0x46ce,	// (0x00041633) aid_blid_cardinal_pane

0x4710,	// (0x00041675) compass_pane_t4

0xaf52,	// (0x00047eb7) list_cale_time_pane_t4_ParamLimits

0xaf52,	// (0x00047eb7) list_cale_time_pane_t4

0x471e,	// (0x00041683) compass_pane_t5

0x472e,	// (0x00041693) compass_pane_t6

0x473c,	// (0x000416a1) compass_pane_t7

0xb40f,	// (0x00048374) navi_pane_cc_t1

0xb5fa,	// (0x0004855f) aid_phob_thumbnail_center_pane

0x4d31,	// (0x00041c96) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0004c25b) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0004c25b) list_cale_time_pane_t

0xa20e,	// (0x00047173) bg_popup_window_pane_cp02_ParamLimits

0xa20e,	// (0x00047173) bg_popup_window_pane_cp02

0xaf7a,	// (0x00047edf) heading_pane_cp01_ParamLimits

0xaf7a,	// (0x00047edf) heading_pane_cp01

0xaf86,	// (0x00047eeb) loc_req_pane_ParamLimits

0xaf86,	// (0x00047eeb) loc_req_pane

0xaf96,	// (0x00047efb) loc_type_pane_ParamLimits

0xaf96,	// (0x00047efb) loc_type_pane

0xafa8,	// (0x00047f0d) loc_type_pane_t1_ParamLimits

0xafa8,	// (0x00047f0d) loc_type_pane_t1

0xafba,	// (0x00047f1f) loc_type_pane_t2_ParamLimits

0xafba,	// (0x00047f1f) loc_type_pane_t2

0xafcc,	// (0x00047f31) loc_type_pane_t3_ParamLimits

0xafcc,	// (0x00047f31) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0004c262) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0004c262) loc_type_pane_t

0xafde,	// (0x00047f43) list_loc_req_pane

0xafe8,	// (0x00047f4d) scroll_pane_cp012

0x4415,	// (0x0004137a) list_single_loc_request_popup_menu_pane_ParamLimits

0x4415,	// (0x0004137a) list_single_loc_request_popup_menu_pane

0xaff3,	// (0x00047f58) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaff3,	// (0x00047f58) list_single_loc_request_popup_menu_pane_g1

0xafff,	// (0x00047f64) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafff,	// (0x00047f64) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0004c269) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0004c269) list_single_loc_request_popup_menu_pane_g

0xb00b,	// (0x00047f70) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb00b,	// (0x00047f70) list_single_loc_request_popup_menu_pane_t1

0x4427,	// (0x0004138c) bg_popup_window_pane_cp03_ParamLimits

0x4427,	// (0x0004138c) bg_popup_window_pane_cp03

0x4435,	// (0x0004139a) heading_loc_req_pane_ParamLimits

0x4435,	// (0x0004139a) heading_loc_req_pane

0x4441,	// (0x000413a6) popup_dyc_status_message_window_g1_ParamLimits

0x4441,	// (0x000413a6) popup_dyc_status_message_window_g1

0x444d,	// (0x000413b2) popup_dyc_status_message_window_t1_ParamLimits

0x444d,	// (0x000413b2) popup_dyc_status_message_window_t1

0x445f,	// (0x000413c4) popup_dyc_status_message_window_t2_ParamLimits

0x445f,	// (0x000413c4) popup_dyc_status_message_window_t2

0x4471,	// (0x000413d6) popup_dyc_status_message_window_t3_ParamLimits

0x4471,	// (0x000413d6) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0004c26e) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0004c26e) popup_dyc_status_message_window_t

0xa5b7,	// (0x0004751c) bg_heading_pane_cp01

0xb021,	// (0x00047f86) heading_loc_req_pane_g1

0xb029,	// (0x00047f8e) heading_loc_req_pane_g2

0xb031,	// (0x00047f96) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0004c275) heading_loc_req_pane_g

0xb039,	// (0x00047f9e) heading_loc_req_pane_t1

0xb048,	// (0x00047fad) bg_popup_sub_pane_cp01_ParamLimits

0xb048,	// (0x00047fad) bg_popup_sub_pane_cp01

0xb056,	// (0x00047fbb) popup_cale_events_window_g1_ParamLimits

0xb056,	// (0x00047fbb) popup_cale_events_window_g1

0xb076,	// (0x00047fdb) popup_cale_events_window_g2_ParamLimits

0xb076,	// (0x00047fdb) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0004c2a9) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0004c2a9) popup_cale_events_window_g

0xb0b0,	// (0x00048015) popup_cale_events_window_t1_ParamLimits

0xb0b0,	// (0x00048015) popup_cale_events_window_t1

0xb0c2,	// (0x00048027) popup_cale_events_window_t2_ParamLimits

0xb0c2,	// (0x00048027) popup_cale_events_window_t2

0xb100,	// (0x00048065) popup_cale_events_window_t3_ParamLimits

0xb100,	// (0x00048065) popup_cale_events_window_t3

0xb13a,	// (0x0004809f) popup_cale_events_window_t4_ParamLimits

0xb13a,	// (0x0004809f) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0004c2ae) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0004c2ae) popup_cale_events_window_t

0x449b,	// (0x00041400) call_type_pane

0xb592,	// (0x000484f7) popup_call_status_window_g1

0x44a7,	// (0x0004140c) popup_call_status_window_g2

0x44b3,	// (0x00041418) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0004c2b7) popup_call_status_window_g

0xb170,	// (0x000480d5) call_type_pane_g1

0xb179,	// (0x000480de) call_type_pane_g2

0x0001,

0xf359,	// (0x0004c2be) call_type_pane_g

0xa5b7,	// (0x0004751c) bg_popup_sub_pane_cp02

0xb182,	// (0x000480e7) listscroll_popup_wml_pane

0xb18a,	// (0x000480ef) list_wml_pane

0xb194,	// (0x000480f9) scroll_pane_cp013

0xb19f,	// (0x00048104) list_single_graphic_popup_wml_pane_ParamLimits

0xb19f,	// (0x00048104) list_single_graphic_popup_wml_pane

0xa960,	// (0x000478c5) list_single_graphic_popup_wml_pane_g1

0xb1b3,	// (0x00048118) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0004c2c3) list_single_graphic_popup_wml_pane_g

0xb1bb,	// (0x00048120) list_single_graphic_popup_wml_pane_t1

0xb1d1,	// (0x00048136) aid_call_pane

0xa83e,	// (0x000477a3) popup_clock_analogue_window_g1

0xa83e,	// (0x000477a3) popup_clock_analogue_window_g2

0x44bf,	// (0x00041424) popup_clock_analogue_window_g3

0x44bf,	// (0x00041424) popup_clock_analogue_window_g4

0xa960,	// (0x000478c5) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0004c2c8) popup_clock_analogue_window_g

0x44c7,	// (0x0004142c) popup_clock_analogue_window_t1

0x44d5,	// (0x0004143a) clock_digital_number_pane_ParamLimits

0x44d5,	// (0x0004143a) clock_digital_number_pane

0x44e1,	// (0x00041446) clock_digital_number_pane_cp02_ParamLimits

0x44e1,	// (0x00041446) clock_digital_number_pane_cp02

0x44ed,	// (0x00041452) clock_digital_number_pane_cp03_ParamLimits

0x44ed,	// (0x00041452) clock_digital_number_pane_cp03

0x44f9,	// (0x0004145e) clock_digital_number_pane_cp04_ParamLimits

0x44f9,	// (0x0004145e) clock_digital_number_pane_cp04

0x4509,	// (0x0004146e) clock_digital_separator_pane_ParamLimits

0x4509,	// (0x0004146e) clock_digital_separator_pane

0x4515,	// (0x0004147a) popup_clock_digital_window_t1

0xa960,	// (0x000478c5) clock_digital_number_pane_g1

0xa960,	// (0x000478c5) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0004c236) clock_digital_number_pane_g

0xa960,	// (0x000478c5) clock_digital_separator_pane_g1

0xa960,	// (0x000478c5) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0004c236) clock_digital_separator_pane_g

0xa5b7,	// (0x0004751c) bg_popup_window_pane_cp04

0xb1d9,	// (0x0004813e) heading_pane_cp03

0xb1e1,	// (0x00048146) listscroll_popup_gms_pane

0xb1e9,	// (0x0004814e) grid_large_graphic_popup_pane

0xb1f3,	// (0x00048158) listscroll_popup_gms_pane_g1

0xb1fb,	// (0x00048160) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0004c2d3) listscroll_popup_gms_pane_g

0xac82,	// (0x00047be7) scroll_pane_cp014

0x4532,	// (0x00041497) cell_large_graphic_popup_pane_ParamLimits

0x4532,	// (0x00041497) cell_large_graphic_popup_pane

0x454a,	// (0x000414af) cell_large_graphic_popup_pane_g1_ParamLimits

0x454a,	// (0x000414af) cell_large_graphic_popup_pane_g1

0xb203,	// (0x00048168) cell_large_graphic_popup_pane_g2_ParamLimits

0xb203,	// (0x00048168) cell_large_graphic_popup_pane_g2

0xb20f,	// (0x00048174) cell_large_graphic_popup_pane_g3_ParamLimits

0xb20f,	// (0x00048174) cell_large_graphic_popup_pane_g3

0xb21c,	// (0x00048181) cell_large_graphic_popup_pane_g4_ParamLimits

0xb21c,	// (0x00048181) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0004c2d8) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0004c2d8) cell_large_graphic_popup_pane_g

0xb22c,	// (0x00048191) grid_highlight_pane_cp010

0xa960,	// (0x000478c5) bg_popup_call_pane_g1

0xb236,	// (0x0004819b) list_single_graphic_popup_conf_pane_ParamLimits

0xb236,	// (0x0004819b) list_single_graphic_popup_conf_pane

0xb249,	// (0x000481ae) list_highlight_pane_cp01

0xb252,	// (0x000481b7) list_single_graphic_popup_conf_pane_g1

0xb25a,	// (0x000481bf) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0004c2e1) list_single_graphic_popup_conf_pane_g

0xb262,	// (0x000481c7) list_single_graphic_popup_conf_pane_t1

0xb270,	// (0x000481d5) linegrid_cams_pane_g1

0x4556,	// (0x000414bb) linegrid_cams_pane_g2

0xaab6,	// (0x00047a1b) linegrid_cams_pane_g3

0xb279,	// (0x000481de) linegrid_cams_pane_g4

0x455f,	// (0x000414c4) linegrid_cams_pane_g5

0x4568,	// (0x000414cd) linegrid_cams_pane_g6

0xaabf,	// (0x00047a24) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0004c2e6) linegrid_cams_pane_g

0xb282,	// (0x000481e7) popup_clock_analogue_window

0xb282,	// (0x000481e7) popup_clock_digital_window

0xa5b7,	// (0x0004751c) popup_phob_thumbnail_window

0xa960,	// (0x000478c5) call_video_uplink_pane_g1

0xb28b,	// (0x000481f0) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0004c2f5) call_video_uplink_pane_g

0xb293,	// (0x000481f8) video_uplink_pane

0xb29b,	// (0x00048200) mce_image_pane_g1

0x4571,	// (0x000414d6) mce_image_pane_g2

0x457b,	// (0x000414e0) mce_image_pane_g3

0x4583,	// (0x000414e8) mce_image_pane_g4

0x458b,	// (0x000414f0) mce_image_pane_g5

0x0004,

0xf395,	// (0x0004c2fa) mce_image_pane_g

0xb2a5,	// (0x0004820a) control_top_pane_stacon_cp01_ParamLimits

0xb2a5,	// (0x0004820a) control_top_pane_stacon_cp01

0xb2b9,	// (0x0004821e) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2b9,	// (0x0004821e) uni_indicator_pane_stacon_cp01

0xb2ca,	// (0x0004822f) bg_popup_sub_pane_cp03

0xb2d4,	// (0x00048239) chi_dic_find_pane

0x4593,	// (0x000414f8) listscroll_chi_dic_pane

0xb2dc,	// (0x00048241) main_pane_chidic_g1

0xb2e4,	// (0x00048249) chi_dic_find_pane_t1

0xb2f2,	// (0x00048257) find_chidic_pane

0xb2fb,	// (0x00048260) chi_dic_list_pane_ParamLimits

0xb2fb,	// (0x00048260) chi_dic_list_pane

0xb30c,	// (0x00048271) scroll_pane_cp020

0xb314,	// (0x00048279) find_chidic_pane_t1

0xa5b7,	// (0x0004751c) input_focus_pane_cp06

0x45a7,	// (0x0004150c) list_chi_dic_pane_ParamLimits

0x45a7,	// (0x0004150c) list_chi_dic_pane

0x45c1,	// (0x00041526) list_chi_dic_pane_t1_ParamLimits

0x45c1,	// (0x00041526) list_chi_dic_pane_t1

0xa5b7,	// (0x0004751c) list_highlight_pane_cp020

0xb323,	// (0x00048288) bg_cale_heading_pane_g1

0x45d4,	// (0x00041539) bg_cale_heading_pane_g2

0x45dc,	// (0x00041541) bg_cale_heading_pane_g3

0x45e4,	// (0x00041549) bg_cale_heading_pane_g4

0x45ee,	// (0x00041553) bg_cale_heading_pane_g5

0x45f8,	// (0x0004155d) bg_cale_heading_pane_g6

0x4600,	// (0x00041565) bg_cale_heading_pane_g7

0x4608,	// (0x0004156d) bg_cale_heading_pane_g8

0x4612,	// (0x00041577) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0004c305) bg_cale_heading_pane_g

0xb323,	// (0x00048288) bg_cale_side_pane_g1

0x461c,	// (0x00041581) bg_cale_side_pane_g2

0x4626,	// (0x0004158b) bg_cale_side_pane_g3

0x4630,	// (0x00041595) bg_cale_side_pane_g4

0x463a,	// (0x0004159f) bg_cale_side_pane_g5

0x4644,	// (0x000415a9) bg_cale_side_pane_g6

0x464e,	// (0x000415b3) bg_cale_side_pane_g7

0x4658,	// (0x000415bd) bg_cale_side_pane_g8

0x4660,	// (0x000415c5) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0004c318) bg_cale_side_pane_g

0x4668,	// (0x000415cd) popup_call_status_window_ParamLimits

0x4668,	// (0x000415cd) popup_call_status_window

0xb32b,	// (0x00048290) stacon_top_pane

0xb333,	// (0x00048298) status_pane_ParamLimits

0xb333,	// (0x00048298) status_pane

0xb348,	// (0x000482ad) status_small_pane

0xb350,	// (0x000482b5) control_pane

0xa5b7,	// (0x0004751c) stacon_bottom_pane

0xb358,	// (0x000482bd) list_single_mce_smart_pane_t1_ParamLimits

0xb358,	// (0x000482bd) list_single_mce_smart_pane_t1

0xb36b,	// (0x000482d0) list_single_mce_smart_pane_t2_ParamLimits

0xb36b,	// (0x000482d0) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0004c32b) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0004c32b) list_single_mce_smart_pane_t

0x4674,	// (0x000415d9) compass_pane

0x4680,	// (0x000415e5) main_location2_pane_t1

0x4694,	// (0x000415f9) main_location2_pane_t2

0x46a8,	// (0x0004160d) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0004c330) main_location2_pane_t

0xb38a,	// (0x000482ef) compass_pane_g1_ParamLimits

0xb38a,	// (0x000482ef) compass_pane_g1

0x46f2,	// (0x00041657) compass_pane_t1

0x4701,	// (0x00041666) compass_pane_t2

0x0005,

0xf3d4,	// (0x0004c339) compass_pane_t

0x474c,	// (0x000416b1) text_secondary_cp61

0xb406,	// (0x0004836b) navi_pane_cams_g5

0xb482,	// (0x000483e7) navi_pane_im_t1

0xb490,	// (0x000483f5) navi_pane_mp_g1_ParamLimits

0xb490,	// (0x000483f5) navi_pane_mp_g1

0xb4a4,	// (0x00048409) navi_pane_mp_g2_ParamLimits

0xb4a4,	// (0x00048409) navi_pane_mp_g2

0xb4b0,	// (0x00048415) navi_pane_mp_g3_ParamLimits

0xb4b0,	// (0x00048415) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0004c34d) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0004c34d) navi_pane_mp_g

0xb4bc,	// (0x00048421) navi_pane_mp_t1

0xb4ca,	// (0x0004842f) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0004c354) navi_pane_mp_t

0xb535,	// (0x0004849a) navi_pane_vt_g1

0xb4bc,	// (0x00048421) navi_pane_vt_t1

0xb53d,	// (0x000484a2) navi_slider_pane

0xaad0,	// (0x00047a35) zooming_pane

0xb54d,	// (0x000484b2) navi_slider_pane_g1

0x4787,	// (0x000416ec) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0004c35b) navi_slider_pane_g

0xb571,	// (0x000484d6) aid_levels_zoom

0xb579,	// (0x000484de) zooming_pane_g1

0xb581,	// (0x000484e6) zooming_pane_g2

0xb581,	// (0x000484e6) zooming_pane_g3

0x0002,

0xf405,	// (0x0004c36a) zooming_pane_g

0xb589,	// (0x000484ee) level_10_zoom

0xb5a0,	// (0x00048505) level_11_zoom

0xb5a9,	// (0x0004850e) level_1_zoom

0xb5b2,	// (0x00048517) level_2_zoom

0xb5bb,	// (0x00048520) level_3_zoom

0xb5c4,	// (0x00048529) level_4_zoom

0xb5cd,	// (0x00048532) level_5_zoom

0xb5d6,	// (0x0004853b) level_6_zoom

0xb5df,	// (0x00048544) level_7_zoom

0xb5e8,	// (0x0004854d) level_8_zoom

0xb5f1,	// (0x00048556) level_9_zoom

0xb602,	// (0x00048567) popup_phob_thumbnail_window_g1

0xb60a,	// (0x0004856f) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0004c371) popup_phob_thumbnail_window_g

0xc8e6,	// (0x0004984b) level_1_location

0xc8ee,	// (0x00049853) level_2_location

0xc8f6,	// (0x0004985b) level_3_location

0xc8fe,	// (0x00049863) level_4_location

0xaad0,	// (0x00047a35) level_5_location

0x4799,	// (0x000416fe) mce_icon_pane_g1

0x47a1,	// (0x00041706) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0004c376) mce_icon_pane_g

0x47a9,	// (0x0004170e) main_mup_pane_g1_ParamLimits

0x47a9,	// (0x0004170e) main_mup_pane_g1

0x47c1,	// (0x00041726) main_mup_pane_g2_ParamLimits

0x47c1,	// (0x00041726) main_mup_pane_g2

0x47dd,	// (0x00041742) main_mup_pane_g3_ParamLimits

0x47dd,	// (0x00041742) main_mup_pane_g3

0x47f9,	// (0x0004175e) main_mup_pane_g4_ParamLimits

0x47f9,	// (0x0004175e) main_mup_pane_g4

0x4815,	// (0x0004177a) main_mup_pane_g5_ParamLimits

0x4815,	// (0x0004177a) main_mup_pane_g5

0x4836,	// (0x0004179b) main_mup_pane_g6_ParamLimits

0x4836,	// (0x0004179b) main_mup_pane_g6

0x4852,	// (0x000417b7) main_mup_pane_g7_ParamLimits

0x4852,	// (0x000417b7) main_mup_pane_g7

0x486e,	// (0x000417d3) main_mup_pane_g8_ParamLimits

0x486e,	// (0x000417d3) main_mup_pane_g8

0x488e,	// (0x000417f3) main_mup_pane_g9_ParamLimits

0x488e,	// (0x000417f3) main_mup_pane_g9

0x48ad,	// (0x00041812) main_mup_pane_g10_ParamLimits

0x48ad,	// (0x00041812) main_mup_pane_g10

0x48cc,	// (0x00041831) main_mup_pane_g11_ParamLimits

0x48cc,	// (0x00041831) main_mup_pane_g11

0x48e4,	// (0x00041849) main_mup_pane_g12_ParamLimits

0x48e4,	// (0x00041849) main_mup_pane_g12

0x48f2,	// (0x00041857) main_mup_pane_g13_ParamLimits

0x48f2,	// (0x00041857) main_mup_pane_g13

0x000c,

0xf416,	// (0x0004c37b) main_mup_pane_g_ParamLimits

0xf416,	// (0x0004c37b) main_mup_pane_g

0x4908,	// (0x0004186d) main_mup_pane_t1_ParamLimits

0x4908,	// (0x0004186d) main_mup_pane_t1

0x4925,	// (0x0004188a) main_mup_pane_t2_ParamLimits

0x4925,	// (0x0004188a) main_mup_pane_t2

0x493f,	// (0x000418a4) main_mup_pane_t3_ParamLimits

0x493f,	// (0x000418a4) main_mup_pane_t3

0x4959,	// (0x000418be) main_mup_pane_t4_ParamLimits

0x4959,	// (0x000418be) main_mup_pane_t4

0x496b,	// (0x000418d0) main_mup_pane_t5_ParamLimits

0x496b,	// (0x000418d0) main_mup_pane_t5

0x497d,	// (0x000418e2) main_mup_pane_t6_ParamLimits

0x497d,	// (0x000418e2) main_mup_pane_t6

0x0005,

0xf431,	// (0x0004c396) main_mup_pane_t_ParamLimits

0xf431,	// (0x0004c396) main_mup_pane_t

0x4993,	// (0x000418f8) mup_progress_pane_ParamLimits

0x4993,	// (0x000418f8) mup_progress_pane

0x499f,	// (0x00041904) mup_visualizer_pane_ParamLimits

0x499f,	// (0x00041904) mup_visualizer_pane

0x49d9,	// (0x0004193e) mup_volume_pane_ParamLimits

0x49d9,	// (0x0004193e) mup_volume_pane

0xb592,	// (0x000484f7) mup_visualizer_pane_g1_ParamLimits

0xb592,	// (0x000484f7) mup_visualizer_pane_g1

0xb592,	// (0x000484f7) mup_visualizer_pane_g2_ParamLimits

0xb592,	// (0x000484f7) mup_visualizer_pane_g2

0xb38a,	// (0x000482ef) mup_visualizer_pane_g3_ParamLimits

0xb38a,	// (0x000482ef) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0004c3a3) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0004c3a3) mup_visualizer_pane_g

0xa960,	// (0x000478c5) mup_volume_pane_g1

0xb61a,	// (0x0004857f) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0004c3aa) mup_volume_pane_g

0xa960,	// (0x000478c5) mup_progress_pane_g1

0xb623,	// (0x00048588) mup_progress_pane_g2

0xb62c,	// (0x00048591) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0004c3af) mup_progress_pane_g

0xa5b7,	// (0x0004751c) bg_popup_window_pane_cp05

0xb635,	// (0x0004859a) heading_pane_cp02_ParamLimits

0xb635,	// (0x0004859a) heading_pane_cp02

0xb64f,	// (0x000485b4) list_popup_blid_pane

0xb657,	// (0x000485bc) list_blid_sat_info_pane_ParamLimits

0xb657,	// (0x000485bc) list_blid_sat_info_pane

0xb66a,	// (0x000485cf) list_blid_sat_info_pane_g1

0xb672,	// (0x000485d7) list_blid_sat_info_pane_t1

0x4ae6,	// (0x00041a4b) mup_equalizer_pane_ParamLimits

0x4ae6,	// (0x00041a4b) mup_equalizer_pane

0x4b07,	// (0x00041a6c) mup_equalizer_pane_cp1_ParamLimits

0x4b07,	// (0x00041a6c) mup_equalizer_pane_cp1

0x4b28,	// (0x00041a8d) mup_equalizer_pane_cp2_ParamLimits

0x4b28,	// (0x00041a8d) mup_equalizer_pane_cp2

0x4b49,	// (0x00041aae) mup_equalizer_pane_cp3_ParamLimits

0x4b49,	// (0x00041aae) mup_equalizer_pane_cp3

0x4b6a,	// (0x00041acf) mup_equalizer_pane_cp4_ParamLimits

0x4b6a,	// (0x00041acf) mup_equalizer_pane_cp4

0x4b8b,	// (0x00041af0) mup_equalizer_pane_cp5

0x4ba1,	// (0x00041b06) mup_equalizer_pane_cp6

0x4bb9,	// (0x00041b1e) mup_equalizer_pane_cp7

0xc804,	// (0x00049769) bg_popup_call_poc_act_pane_g9

0xc80c,	// (0x00049771) bg_popup_call_poc_act_pane_g10

0xc814,	// (0x00049779) bg_popup_call_poc_act_pane_g11

0x000a,

0xa846,	// (0x000477ab) mup_scale_pane

0xa960,	// (0x000478c5) mup_scale_pane_g1

0xb680,	// (0x000485e5) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0004c3cb) mup_scale_pane_g

0xb6a4,	// (0x00048609) msg_data_pane

0xb6ac,	// (0x00048611) scroll_pane_cp017

0x1072,	// (0x0003dfd7) bg_list_pane_cp04_ParamLimits

0x1072,	// (0x0003dfd7) bg_list_pane_cp04

0xb6b4,	// (0x00048619) msg_data_pane_g1

0x4be3,	// (0x00041b48) msg_data_pane_g2

0x4bed,	// (0x00041b52) msg_data_pane_g3

0x4bf5,	// (0x00041b5a) msg_data_pane_g4

0x4bfd,	// (0x00041b62) msg_data_pane_g5

0x4c05,	// (0x00041b6a) msg_data_pane_g6

0x4c0d,	// (0x00041b72) msg_data_pane_g7

0x0006,

0xf475,	// (0x0004c3da) msg_data_pane_g

0x1096,	// (0x0003dffb) msg_text_pane_ParamLimits

0x1096,	// (0x0003dffb) msg_text_pane

0x4c15,	// (0x00041b7a) qrid_highlight_pane_cp011_ParamLimits

0x4c15,	// (0x00041b7a) qrid_highlight_pane_cp011

0xa5b7,	// (0x0004751c) msg_body_pane

0xa5b7,	// (0x0004751c) msg_header_pane

0xb6c5,	// (0x0004862a) input_focus_pane_cp07

0x10f3,	// (0x0003e058) msg_header_pane_t1_ParamLimits

0x10f3,	// (0x0003e058) msg_header_pane_t1

0x1105,	// (0x0003e06a) msg_header_pane_t2_ParamLimits

0x1105,	// (0x0003e06a) msg_header_pane_t2

0x0001,

0xf489,	// (0x0004c3ee) msg_header_pane_t_ParamLimits

0xf489,	// (0x0004c3ee) msg_header_pane_t

0xb6da,	// (0x0004863f) msg_body_pane_g1

0x1117,	// (0x0003e07c) msg_body_pane_t1_ParamLimits

0x1117,	// (0x0003e07c) msg_body_pane_t1

0x1148,	// (0x0003e0ad) msg_body_pane_t2_ParamLimits

0x1148,	// (0x0003e0ad) msg_body_pane_t2

0x115a,	// (0x0003e0bf) msg_body_pane_t3_ParamLimits

0x115a,	// (0x0003e0bf) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0004c3f3) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0004c3f3) msg_body_pane_t

0x4c81,	// (0x00041be6) main_viewer_pane_g1_ParamLimits

0x4c81,	// (0x00041be6) main_viewer_pane_g1

0x4c8d,	// (0x00041bf2) main_viewer_pane_g2_ParamLimits

0x4c8d,	// (0x00041bf2) main_viewer_pane_g2

0x4c99,	// (0x00041bfe) main_viewer_pane_g3_ParamLimits

0x4c99,	// (0x00041bfe) main_viewer_pane_g3

0x4caa,	// (0x00041c0f) main_viewer_pane_g4_ParamLimits

0x4caa,	// (0x00041c0f) main_viewer_pane_g4

0x4cbb,	// (0x00041c20) main_viewer_pane_g5_ParamLimits

0x4cbb,	// (0x00041c20) main_viewer_pane_g5

0x4cbb,	// (0x00041c20) main_viewer_pane_g7_ParamLimits

0x4cbb,	// (0x00041c20) main_viewer_pane_g7

0x4ccd,	// (0x00041c32) main_viewer_pane_g8_ParamLimits

0x4ccd,	// (0x00041c32) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0004c403) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0004c403) main_viewer_pane_g

0xb6e2,	// (0x00048647) viewer_content_pane_ParamLimits

0xb6e2,	// (0x00048647) viewer_content_pane

0x4d05,	// (0x00041c6a) main_postcard_pane_g1_ParamLimits

0x4d05,	// (0x00041c6a) main_postcard_pane_g1

0x4d13,	// (0x00041c78) main_postcard_pane_g2_ParamLimits

0x4d13,	// (0x00041c78) main_postcard_pane_g2

0x4d21,	// (0x00041c86) main_postcard_pane_g3_ParamLimits

0x4d21,	// (0x00041c86) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0004c414) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0004c414) main_postcard_pane_g

0x4d31,	// (0x00041c96) main_postcard_pane_g4

0xc9e6,	// (0x0004994b) smil_status_volume_pane_g2

0x4d5d,	// (0x00041cc2) postcard_pane_ParamLimits

0x4d5d,	// (0x00041cc2) postcard_pane

0xb592,	// (0x000484f7) postcard_pane_g1_ParamLimits

0xb592,	// (0x000484f7) postcard_pane_g1

0x4d8f,	// (0x00041cf4) postcard_pane_g2_ParamLimits

0x4d8f,	// (0x00041cf4) postcard_pane_g2

0x4d9b,	// (0x00041d00) postcard_pane_g3_ParamLimits

0x4d9b,	// (0x00041d00) postcard_pane_g3

0xb6f0,	// (0x00048655) postcard_pane_g4_ParamLimits

0xb6f0,	// (0x00048655) postcard_pane_g4

0x4da7,	// (0x00041d0c) postcard_pane_g5_ParamLimits

0x4da7,	// (0x00041d0c) postcard_pane_g5

0x4db3,	// (0x00041d18) postcard_pane_g6_ParamLimits

0x4db3,	// (0x00041d18) postcard_pane_g6

0xb6fe,	// (0x00048663) postcard_pane_g7_ParamLimits

0xb6fe,	// (0x00048663) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0004c421) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0004c421) postcard_pane_g

0x4dbf,	// (0x00041d24) main_mp2_pane_g1_ParamLimits

0x4dbf,	// (0x00041d24) main_mp2_pane_g1

0x4dcb,	// (0x00041d30) main_mp2_pane_g2_ParamLimits

0x4dcb,	// (0x00041d30) main_mp2_pane_g2

0x4dd7,	// (0x00041d3c) main_mp2_pane_g3_ParamLimits

0x4dd7,	// (0x00041d3c) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0004c430) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0004c430) main_mp2_pane_g

0x4de3,	// (0x00041d48) main_mp2_pane_t1_ParamLimits

0x4de3,	// (0x00041d48) main_mp2_pane_t1

0x4dfa,	// (0x00041d5f) main_mp2_pane_t2_ParamLimits

0x4dfa,	// (0x00041d5f) main_mp2_pane_t2

0x4e0e,	// (0x00041d73) main_mp2_pane_t3_ParamLimits

0x4e0e,	// (0x00041d73) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0004c437) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0004c437) main_mp2_pane_t

0xb70c,	// (0x00048671) pec_content_pane_ParamLimits

0xb70c,	// (0x00048671) pec_content_pane

0xac82,	// (0x00047be7) scroll_pane_cp015

0xb71e,	// (0x00048683) pec_attribute_pane_ParamLimits

0xb71e,	// (0x00048683) pec_attribute_pane

0x4e20,	// (0x00041d85) pec_content_pane_g1_ParamLimits

0x4e20,	// (0x00041d85) pec_content_pane_g1

0xb72e,	// (0x00048693) pec_content_pane_t1_ParamLimits

0xb72e,	// (0x00048693) pec_content_pane_t1

0xb740,	// (0x000486a5) pec_content_pane_t2_ParamLimits

0xb740,	// (0x000486a5) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0004c43e) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0004c43e) pec_content_pane_t

0x4e2c,	// (0x00041d91) list_single_graphic_pane_cp01_ParamLimits

0x4e2c,	// (0x00041d91) list_single_graphic_pane_cp01

0xa846,	// (0x000477ab) bg_popup_sub_pane_cp04

0xb752,	// (0x000486b7) popup_mup_playback_window_g1

0xb75e,	// (0x000486c3) popup_mup_playback_window_t1

0xb773,	// (0x000486d8) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0004c443) popup_mup_playback_window_t

0xb7aa,	// (0x0004870f) main_image_pane_g1_ParamLimits

0xb7aa,	// (0x0004870f) main_image_pane_g1

0xb7ed,	// (0x00048752) scroll_pane_cp018_ParamLimits

0xb7ed,	// (0x00048752) scroll_pane_cp018

0xb805,	// (0x0004876a) scroll_pane_cp016_ParamLimits

0xb805,	// (0x0004876a) scroll_pane_cp016

0x4ec5,	// (0x00041e2a) smil2_image_pane_ParamLimits

0x4ec5,	// (0x00041e2a) smil2_image_pane

0x4ef5,	// (0x00041e5a) smil2_root_pane_ParamLimits

0x4ef5,	// (0x00041e5a) smil2_root_pane

0x4f21,	// (0x00041e86) smil2_text_pane_ParamLimits

0x4f21,	// (0x00041e86) smil2_text_pane

0xa5b7,	// (0x0004751c) bg_list_pane_cp06

0xb841,	// (0x000487a6) grid_radio_pane

0xa5b7,	// (0x0004751c) bg_popup_window_pane_cp06

0xb849,	// (0x000487ae) main_fmradio_pane_t1

0xb1d9,	// (0x0004813e) heading_pane_cp04

0xb857,	// (0x000487bc) main_fmradio_pane_t2

0xc81c,	// (0x00049781) popup_cale_lunar_info_window_g1

0xb865,	// (0x000487ca) main_fmradio_pane_t3

0xc824,	// (0x00049789) popup_cale_lunar_info_window_g2

0xb873,	// (0x000487d8) main_fmradio_pane_t4

0x0001,

0xb881,	// (0x000487e6) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0004c51e) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0004c458) main_fmradio_pane_t

0xb88f,	// (0x000487f4) wait_bar_pane_cp03

0xb897,	// (0x000487fc) cell_fmradio_pane_ParamLimits

0xb897,	// (0x000487fc) cell_fmradio_pane

0xb6fe,	// (0x00048663) cell_fmradio_pane_g1_ParamLimits

0xb6fe,	// (0x00048663) cell_fmradio_pane_g1

0xa5b7,	// (0x0004751c) grid_highlight_pane_cp011

0xb8aa,	// (0x0004880f) poc_content_pane_ParamLimits

0xb8aa,	// (0x0004880f) poc_content_pane

0xb8bc,	// (0x00048821) scroll_pane_cp019

0x4f61,	// (0x00041ec6) popup_call_poc_act_window_ParamLimits

0x4f61,	// (0x00041ec6) popup_call_poc_act_window

0x4f6e,	// (0x00041ed3) popup_call_poc_inact_window_ParamLimits

0x4f6e,	// (0x00041ed3) popup_call_poc_inact_window

0xf590,	// (0x0004c4f5) bg_popup_call_poc_act_pane_g

0xc794,	// (0x000496f9) bg_popup_call_poc_inact_pane_g1

0xc79c,	// (0x00049701) bg_popup_call_poc_inact_pane_g2

0xb8c4,	// (0x00048829) popup_call_poc_act_window_g2

0xc7a4,	// (0x00049709) bg_popup_call_poc_inact_pane_g3

0xc7ac,	// (0x00049711) bg_popup_call_poc_inact_pane_g4

0xc7b4,	// (0x00049719) bg_popup_call_poc_inact_pane_g5

0xb8cc,	// (0x00048831) popup_call_poc_act_window_t1_ParamLimits

0xb8cc,	// (0x00048831) popup_call_poc_act_window_t1

0xb8f4,	// (0x00048859) popup_call_poc_act_window_t2_ParamLimits

0xb8f4,	// (0x00048859) popup_call_poc_act_window_t2

0xb91c,	// (0x00048881) popup_call_poc_act_window_t3_ParamLimits

0xb91c,	// (0x00048881) popup_call_poc_act_window_t3

0xb944,	// (0x000488a9) popup_call_poc_act_window_t4_ParamLimits

0xb944,	// (0x000488a9) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0004c463) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0004c463) popup_call_poc_act_window_t

0xc7bc,	// (0x00049721) bg_popup_call_poc_inact_pane_g6

0xc7c4,	// (0x00049729) bg_popup_call_poc_inact_pane_g7

0xc7cc,	// (0x00049731) bg_popup_call_poc_inact_pane_g8

0xb956,	// (0x000488bb) popup_call_poc_inact_window_g2

0xc7d4,	// (0x00049739) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0004c4e2) bg_popup_call_poc_inact_pane_g

0xb95e,	// (0x000488c3) popup_call_poc_inact_window_t1_ParamLimits

0xb95e,	// (0x000488c3) popup_call_poc_inact_window_t1

0xb973,	// (0x000488d8) popup_call_poc_inact_window_t2_ParamLimits

0xb973,	// (0x000488d8) popup_call_poc_inact_window_t2

0xb988,	// (0x000488ed) popup_call_poc_inact_window_t3_ParamLimits

0xb988,	// (0x000488ed) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0004c46c) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0004c46c) popup_call_poc_inact_window_t

0xc959,	// (0x000498be) context_pane_ParamLimits

0x55a2,	// (0x00042507) signal_pane_ParamLimits

0xaad0,	// (0x00047a35) main_call2_pane

0x5515,	// (0x0004247a) popup_phob_thumbnail2_window_ParamLimits

0x5515,	// (0x0004247a) popup_phob_thumbnail2_window

0x4c2f,	// (0x00041b94) aid_hotspot_pointer_arrow_pane

0x4c37,	// (0x00041b9c) aid_hotspot_pointer_hand_pane

0x5290,	// (0x000421f5) phob_pre_status_pane_g5

0x2fa9,	// (0x0003ff0e) cams_zoom_pane_ParamLimits

0x2fb5,	// (0x0003ff1a) image_vga_pane_ParamLimits

0x2fc4,	// (0x0003ff29) main_camera_pane_g1_ParamLimits

0x2fd2,	// (0x0003ff37) main_camera_pane_g2_ParamLimits

0x2fde,	// (0x0003ff43) main_camera_pane_g3_ParamLimits

0x2fea,	// (0x0003ff4f) main_camera_pane_g4_ParamLimits

0x2ff6,	// (0x0003ff5b) main_camera_pane_g5_ParamLimits

0x3002,	// (0x0003ff67) main_camera_pane_g6_ParamLimits

0x300e,	// (0x0003ff73) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0004c16b) main_camera_pane_g_ParamLimits

0x301a,	// (0x0003ff7f) main_camera_pane_t1_ParamLimits

0x302c,	// (0x0003ff91) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0004c17c) main_camera_pane_t_ParamLimits

0xa846,	// (0x000477ab) bg_popup_preview_window_pane_cp01_ParamLimits

0xa846,	// (0x000477ab) bg_popup_preview_window_pane_cp01

0xb99d,	// (0x00048902) popup_phob_thumbnail2_window_g1_ParamLimits

0xb99d,	// (0x00048902) popup_phob_thumbnail2_window_g1

0xa5b7,	// (0x0004751c) call2_cli_visual_pane

0x4f8a,	// (0x00041eef) popup_call2_audio_conf_window_ParamLimits

0x4f8a,	// (0x00041eef) popup_call2_audio_conf_window

0x4f9f,	// (0x00041f04) popup_call2_audio_first_window_ParamLimits

0x4f9f,	// (0x00041f04) popup_call2_audio_first_window

0x503d,	// (0x00041fa2) popup_call2_audio_in_window_ParamLimits

0x503d,	// (0x00041fa2) popup_call2_audio_in_window

0x507f,	// (0x00041fe4) popup_call2_audio_out_window_ParamLimits

0x507f,	// (0x00041fe4) popup_call2_audio_out_window

0x50e1,	// (0x00042046) popup_call2_audio_second_window_ParamLimits

0x50e1,	// (0x00042046) popup_call2_audio_second_window

0x513f,	// (0x000420a4) popup_call2_audio_wait_window_ParamLimits

0x513f,	// (0x000420a4) popup_call2_audio_wait_window

0xa5b7,	// (0x0004751c) bg_popup_call2_act_pane_cp03

0xa828,	// (0x0004778d) list_conf_pane_cp

0xb9a9,	// (0x0004890e) popup_call2_audio_conf_window_t1

0xb236,	// (0x0004819b) list_single_graphic_popup_conf2_pane_ParamLimits

0xb236,	// (0x0004819b) list_single_graphic_popup_conf2_pane

0xb249,	// (0x000481ae) list_highlight_pane_cp04

0xb9b7,	// (0x0004891c) list_single_graphic_popup_conf2_pane_g1

0xb25a,	// (0x000481bf) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0004c473) list_single_graphic_popup_conf2_pane_g

0xb9c1,	// (0x00048926) list_single_graphic_popup_conf2_pane_t1

0xb9cf,	// (0x00048934) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9cf,	// (0x00048934) bg_popup_call2_act_pane_cp01

0xba59,	// (0x000489be) call_type_pane_cp05_ParamLimits

0xba59,	// (0x000489be) call_type_pane_cp05

0xbaad,	// (0x00048a12) popup_call2_audio_second_window_g1_ParamLimits

0xbaad,	// (0x00048a12) popup_call2_audio_second_window_g1

0xbb01,	// (0x00048a66) popup_call2_audio_second_window_g2_ParamLimits

0xbb01,	// (0x00048a66) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0004c478) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0004c478) popup_call2_audio_second_window_g

0xbb66,	// (0x00048acb) popup_call2_audio_second_window_t1_ParamLimits

0xbb66,	// (0x00048acb) popup_call2_audio_second_window_t1

0xbc21,	// (0x00048b86) popup_call2_audio_second_window_t2_ParamLimits

0xbc21,	// (0x00048b86) popup_call2_audio_second_window_t2

0xbc74,	// (0x00048bd9) popup_call2_audio_second_window_t3_ParamLimits

0xbc74,	// (0x00048bd9) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0004c47f) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0004c47f) popup_call2_audio_second_window_t

0xa5b7,	// (0x0004751c) bg_popup_call2_in_pane_cp02

0xa5c1,	// (0x00047526) call_type_pane_cp04

0xa5c9,	// (0x0004752e) popup_call2_audio_wait_window_g1

0xa5d1,	// (0x00047536) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0004c05a) popup_call2_audio_wait_window_g

0xa5d9,	// (0x0004753e) popup_call2_audio_wait_window_t3

0xbd67,	// (0x00048ccc) bg_popup_call2_act_pane_ParamLimits

0xbd67,	// (0x00048ccc) bg_popup_call2_act_pane

0xbe27,	// (0x00048d8c) call_type_pane_cp03_ParamLimits

0xbe27,	// (0x00048d8c) call_type_pane_cp03

0xbe8b,	// (0x00048df0) popup_call2_audio_first_window_g1_ParamLimits

0xbe8b,	// (0x00048df0) popup_call2_audio_first_window_g1

0xbefb,	// (0x00048e60) popup_call2_audio_first_window_g2_ParamLimits

0xbefb,	// (0x00048e60) popup_call2_audio_first_window_g2

0xb592,	// (0x000484f7) popup_call2_audio_first_window_g3_ParamLimits

0xb592,	// (0x000484f7) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0004c488) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0004c488) popup_call2_audio_first_window_g

0xbfd9,	// (0x00048f3e) popup_call2_audio_first_window_t1_ParamLimits

0xbfd9,	// (0x00048f3e) popup_call2_audio_first_window_t1

0xc0dc,	// (0x00049041) popup_call2_audio_first_window_t4_ParamLimits

0xc0dc,	// (0x00049041) popup_call2_audio_first_window_t4

0xc1bf,	// (0x00049124) popup_call2_audio_first_window_t5_ParamLimits

0xc1bf,	// (0x00049124) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0004c493) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0004c493) popup_call2_audio_first_window_t

0xa83e,	// (0x000477a3) bg_popup_call2_act_pane_g1

0xc82c,	// (0x00049791) popup_cale_lunar_info_window_t1

0xc83a,	// (0x0004979f) popup_cale_lunar_info_window_t2

0xc848,	// (0x000497ad) popup_cale_lunar_info_window_t3

0xa5b7,	// (0x0004751c) bg_popup_call2_bubble_pane

0xc2c0,	// (0x00049225) bg_popup_call2_in_pane_cp01_ParamLimits

0xc2c0,	// (0x00049225) bg_popup_call2_in_pane_cp01

0xa293,	// (0x000471f8) call_type_pane_cp02

0xc308,	// (0x0004926d) popup_call2_audio_out_window_g1_ParamLimits

0xc308,	// (0x0004926d) popup_call2_audio_out_window_g1

0xc334,	// (0x00049299) popup_call2_audio_out_window_g2_ParamLimits

0xc334,	// (0x00049299) popup_call2_audio_out_window_g2

0xc35c,	// (0x000492c1) popup_call2_audio_out_window_g3_ParamLimits

0xc35c,	// (0x000492c1) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0004c49c) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0004c49c) popup_call2_audio_out_window_g

0xc397,	// (0x000492fc) popup_call2_audio_out_window_t1_ParamLimits

0xc397,	// (0x000492fc) popup_call2_audio_out_window_t1

0xc3f6,	// (0x0004935b) popup_call2_audio_out_window_t2_ParamLimits

0xc3f6,	// (0x0004935b) popup_call2_audio_out_window_t2

0xc44a,	// (0x000493af) popup_call2_audio_out_window_t3_ParamLimits

0xc44a,	// (0x000493af) popup_call2_audio_out_window_t3

0xc460,	// (0x000493c5) popup_call2_audio_out_window_t4_ParamLimits

0xc460,	// (0x000493c5) popup_call2_audio_out_window_t4

0xc476,	// (0x000493db) popup_call2_audio_out_window_t5_ParamLimits

0xc476,	// (0x000493db) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0004c4a5) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0004c4a5) popup_call2_audio_out_window_t

0xc4da,	// (0x0004943f) bg_popup_call2_in_pane_ParamLimits

0xc4da,	// (0x0004943f) bg_popup_call2_in_pane

0xc536,	// (0x0004949b) popup_call2_audio_in_window_g1_ParamLimits

0xc536,	// (0x0004949b) popup_call2_audio_in_window_g1

0xc56e,	// (0x000494d3) popup_call2_audio_in_window_g2_ParamLimits

0xc56e,	// (0x000494d3) popup_call2_audio_in_window_g2

0xc5a6,	// (0x0004950b) popup_call2_audio_in_window_g3_ParamLimits

0xc5a6,	// (0x0004950b) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0004c4b2) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0004c4b2) popup_call2_audio_in_window_g

0xc5fe,	// (0x00049563) popup_call2_audio_in_window_t1_ParamLimits

0xc5fe,	// (0x00049563) popup_call2_audio_in_window_t1

0xc67e,	// (0x000495e3) popup_call2_audio_in_window_t2_ParamLimits

0xc67e,	// (0x000495e3) popup_call2_audio_in_window_t2

0xc6fe,	// (0x00049663) popup_call2_audio_in_window_t3_ParamLimits

0xc6fe,	// (0x00049663) popup_call2_audio_in_window_t3

0xc718,	// (0x0004967d) popup_call2_audio_in_window_t4_ParamLimits

0xc718,	// (0x0004967d) popup_call2_audio_in_window_t4

0xc72a,	// (0x0004968f) popup_call2_audio_in_window_t5_ParamLimits

0xc72a,	// (0x0004968f) popup_call2_audio_in_window_t5

0xc73f,	// (0x000496a4) popup_call2_audio_in_window_t6_ParamLimits

0xc73f,	// (0x000496a4) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0004c4bb) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0004c4bb) popup_call2_audio_in_window_t

0xa83e,	// (0x000477a3) bg_popup_call2_in_pane_g1

0xc856,	// (0x000497bb) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0004c523) popup_cale_lunar_info_window_t

0xa846,	// (0x000477ab) bg_popup_call2_rect_pane_ParamLimits

0xa846,	// (0x000477ab) bg_popup_call2_rect_pane

0xa5b7,	// (0x0004751c) call2_cli_visual_graphic_pane

0xa5b7,	// (0x0004751c) call2_cli_visual_text_pane

0x5648,	// (0x000425ad) smil_status_volume_pane_g3

0x0002,

0xa960,	// (0x000478c5) call2_cli_visual_graphic_pane_g1

0xa960,	// (0x000478c5) call2_cli_visual_graphic_pane_g2

0xa960,	// (0x000478c5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0004c4c8) call2_cli_visual_graphic_pane_g

0xc754,	// (0x000496b9) bg_popup_call2_rect_pane_g1

0xa9ec,	// (0x00047951) bg_popup_call2_rect_pane_g2

0xc75c,	// (0x000496c1) bg_popup_call2_rect_pane_g3

0xc764,	// (0x000496c9) bg_popup_call2_rect_pane_g4

0xc76c,	// (0x000496d1) bg_popup_call2_rect_pane_g5

0xc774,	// (0x000496d9) bg_popup_call2_rect_pane_g6

0xc77c,	// (0x000496e1) bg_popup_call2_rect_pane_g7

0xc784,	// (0x000496e9) bg_popup_call2_rect_pane_g8

0xc78c,	// (0x000496f1) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0004c4cf) bg_popup_call2_rect_pane_g

0xc794,	// (0x000496f9) bg_popup_call2_bubble_pane_g1

0xc79c,	// (0x00049701) bg_popup_call2_bubble_pane_g2

0xc7a4,	// (0x00049709) bg_popup_call2_bubble_pane_g3

0xc7ac,	// (0x00049711) bg_popup_call2_bubble_pane_g4

0xc7b4,	// (0x00049719) bg_popup_call2_bubble_pane_g5

0xc7bc,	// (0x00049721) bg_popup_call2_bubble_pane_g6

0xc7c4,	// (0x00049729) bg_popup_call2_bubble_pane_g7

0xc7cc,	// (0x00049731) bg_popup_call2_bubble_pane_g8

0xc7d4,	// (0x00049739) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0004c4e2) bg_popup_call2_bubble_pane_g

0x2ac0,	// (0x0003fa25) aid_cale_week_size_cell_pane

0x303e,	// (0x0003ffa3) aid_cams_cif_uncrop_pane_ParamLimits

0x303e,	// (0x0003ffa3) aid_cams_cif_uncrop_pane

0x3199,	// (0x000400fe) aid_cams_size_cell_ParamLimits

0x3199,	// (0x000400fe) aid_cams_size_cell

0x31a5,	// (0x0004010a) grid_cams_pane_ParamLimits

0x31b3,	// (0x00040118) linegrid_cams_pane_ParamLimits

0x328a,	// (0x000401ef) call_video_pane_t1

0x32ab,	// (0x00040210) call_video_pane_t2

0x0001,

0xf26a,	// (0x0004c1cf) call_video_pane_t

0x37f2,	// (0x00040757) aid_cale_month_size_cell_pane_ParamLimits

0x37f2,	// (0x00040757) aid_cale_month_size_cell_pane

0xf607,	// (0x0004c56c) smil_status_volume_pane_g

0x5655,	// (0x000425ba) volume_smil_pane_ParamLimits

0x2229,	// (0x0003f18e) aid_popup2_width_pane

0x29c2,	// (0x0003f927) cell_qdial_pane_g4_ParamLimits

0x29c2,	// (0x0003f927) cell_qdial_pane_g4

0x46ce,	// (0x00041633) aid_blid_cardinal_pane_ParamLimits

0x46de,	// (0x00041643) aid_blid_destination_pane_ParamLimits

0x46de,	// (0x00041643) aid_blid_destination_pane

0xa846,	// (0x000477ab) bg_popup_call_poc_act_pane_ParamLimits

0xa846,	// (0x000477ab) bg_popup_call_poc_act_pane

0xa846,	// (0x000477ab) bg_popup_call_poc_inact_pane_ParamLimits

0xa846,	// (0x000477ab) bg_popup_call_poc_inact_pane

0xc7dc,	// (0x00049741) bg_popup_call_poc_act_pane_g1

0xc7e4,	// (0x00049749) bg_popup_call_poc_act_pane_g2

0xc7ec,	// (0x00049751) bg_popup_call_poc_act_pane_g3

0xc7ac,	// (0x00049711) bg_popup_call_poc_act_pane_g4

0xc7b4,	// (0x00049719) bg_popup_call_poc_act_pane_g5

0xc7f4,	// (0x00049759) bg_popup_call_poc_act_pane_g6

0xc7c4,	// (0x00049729) bg_popup_call_poc_act_pane_g7

0xc7fc,	// (0x00049761) bg_popup_call_poc_act_pane_g8

0xa5b7,	// (0x0004751c) main_usb_pane

0x5444,	// (0x000423a9) popup_cale_lunar_info_window

0x35d4,	// (0x00040539) im_reading_pane_t1_ParamLimits

0xabda,	// (0x00047b3f) list_im_pane_ParamLimits

0xabeb,	// (0x00047b50) scroll_pane_cp07_ParamLimits

0xa5b7,	// (0x0004751c) grid_highlight_pane_cp012

0xa846,	// (0x000477ab) mup_scale_pane_ParamLimits

0xb592,	// (0x000484f7) main_usb_pane_g1_ParamLimits

0xb592,	// (0x000484f7) main_usb_pane_g1

0x51b3,	// (0x00042118) main_usb_pane_g2_ParamLimits

0x51b3,	// (0x00042118) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0004c50c) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0004c50c) main_usb_pane_g

0x51bf,	// (0x00042124) main_usb_pane_t1_ParamLimits

0x51bf,	// (0x00042124) main_usb_pane_t1

0x51d1,	// (0x00042136) main_usb_pane_t2_ParamLimits

0x51d1,	// (0x00042136) main_usb_pane_t2

0x51e3,	// (0x00042148) main_usb_pane_t3_ParamLimits

0x51e3,	// (0x00042148) main_usb_pane_t3

0x51f5,	// (0x0004215a) main_usb_pane_t4_ParamLimits

0x51f5,	// (0x0004215a) main_usb_pane_t4

0x5207,	// (0x0004216c) main_usb_pane_t5_ParamLimits

0x5207,	// (0x0004216c) main_usb_pane_t5

0x5219,	// (0x0004217e) main_usb_pane_t6_ParamLimits

0x5219,	// (0x0004217e) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0004c511) main_usb_pane_t_ParamLimits

0x4674,	// (0x000415d9) aid_text_placing

0x4680,	// (0x000415e5) main_location2_pane_t1_ParamLimits

0x4694,	// (0x000415f9) main_location2_pane_t2_ParamLimits

0x46a8,	// (0x0004160d) main_location2_pane_t3_ParamLimits

0x46bc,	// (0x00041621) main_location2_pane_t4_ParamLimits

0x46bc,	// (0x00041621) main_location2_pane_t4

0xf3cb,	// (0x0004c330) main_location2_pane_t_ParamLimits

0xa882,	// (0x000477e7) find_pinb_pane_g2_ParamLimits

0xa882,	// (0x000477e7) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0004c080) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0004c080) find_pinb_pane_g

0xa88e,	// (0x000477f3) find_pinb_pane_t1_ParamLimits

0xa8a0,	// (0x00047805) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0004c085) find_pinb_pane_t_ParamLimits

0xa5b7,	// (0x0004751c) main_call3_pane

0x3d95,	// (0x00040cfa) cale_month_day_heading_pane_t1_ParamLimits

0x3e1b,	// (0x00040d80) cale_month_day_heading_pane_t2_ParamLimits

0x3e94,	// (0x00040df9) cale_month_day_heading_pane_t3_ParamLimits

0x3f0d,	// (0x00040e72) cale_month_day_heading_pane_t4_ParamLimits

0x3f86,	// (0x00040eeb) cale_month_day_heading_pane_t5_ParamLimits

0x3fff,	// (0x00040f64) cale_month_day_heading_pane_t6_ParamLimits

0x4078,	// (0x00040fdd) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0004c207) cale_month_day_heading_pane_t_ParamLimits

0xae35,	// (0x00047d9a) smil_status_volume_pane

0x4d77,	// (0x00041cdc) postcard_address_pane_ParamLimits

0x4d77,	// (0x00041cdc) postcard_address_pane

0x4d83,	// (0x00041ce8) postcard_message_pane_ParamLimits

0x4d83,	// (0x00041ce8) postcard_message_pane

0x517e,	// (0x000420e3) call2_cli_visual_pane_t1_ParamLimits

0x517e,	// (0x000420e3) call2_cli_visual_pane_t1

0x57ac,	// (0x00042711) postcard_message_pane_t1_ParamLimits

0x57ac,	// (0x00042711) postcard_message_pane_t1

0x5795,	// (0x000426fa) postcard_address_pane_t1_ParamLimits

0x5795,	// (0x000426fa) postcard_address_pane_t1

0x5786,	// (0x000426eb) popup_call3_audio_in_window_ParamLimits

0x5786,	// (0x000426eb) popup_call3_audio_in_window

0x566a,	// (0x000425cf) bg_popup_call3_in_pane_ParamLimits

0x566a,	// (0x000425cf) bg_popup_call3_in_pane

0x56cc,	// (0x00042631) popup_call3_audio_in_window_g1_ParamLimits

0x56cc,	// (0x00042631) popup_call3_audio_in_window_g1

0x56e4,	// (0x00042649) popup_call3_audio_in_window_g2_ParamLimits

0x56e4,	// (0x00042649) popup_call3_audio_in_window_g2

0x56fc,	// (0x00042661) popup_call3_audio_in_window_g3_ParamLimits

0x56fc,	// (0x00042661) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0004c573) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0004c573) popup_call3_audio_in_window_g

0x5724,	// (0x00042689) popup_call3_audio_in_window_t1_ParamLimits

0x5724,	// (0x00042689) popup_call3_audio_in_window_t1

0x574c,	// (0x000426b1) popup_call3_audio_in_window_t2_ParamLimits

0x574c,	// (0x000426b1) popup_call3_audio_in_window_t2

0x5774,	// (0x000426d9) popup_call3_audio_in_window_t3_ParamLimits

0x5774,	// (0x000426d9) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0004c57c) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0004c57c) popup_call3_audio_in_window_t

0xaad0,	// (0x00047a35) bg_popup_call3_rect_pane

0xc754,	// (0x000496b9) bg_popup_call3_rect_pane_g1

0xa9ec,	// (0x00047951) bg_popup_call3_rect_pane_g2

0xc75c,	// (0x000496c1) bg_popup_call3_rect_pane_g3

0xc764,	// (0x000496c9) bg_popup_call3_rect_pane_g4

0xc76c,	// (0x000496d1) bg_popup_call3_rect_pane_g5

0xc774,	// (0x000496d9) bg_popup_call3_rect_pane_g6

0xc77c,	// (0x000496e1) bg_popup_call3_rect_pane_g7

0x49f4,	// (0x00041959) mup_visualizer_osc_pane

0xb612,	// (0x00048577) mup_visualizer_spec_pane

0x568a,	// (0x000425ef) call3_video_qcif_pane_ParamLimits

0x568a,	// (0x000425ef) call3_video_qcif_pane

0x569c,	// (0x00042601) call3_video_qcif_uncrop_pane_ParamLimits

0x569c,	// (0x00042601) call3_video_qcif_uncrop_pane

0x56aa,	// (0x0004260f) call3_video_subqcif_pane_ParamLimits

0x56aa,	// (0x0004260f) call3_video_subqcif_pane

0x56bc,	// (0x00042621) call3_video_subqcif_uncrop_pane_ParamLimits

0x56bc,	// (0x00042621) call3_video_subqcif_uncrop_pane

0x5714,	// (0x00042679) popup_call3_audio_in_window_g4_ParamLimits

0x5714,	// (0x00042679) popup_call3_audio_in_window_g4

0x5637,	// (0x0004259c) mup_spec_half_pane

0x5640,	// (0x000425a5) mup_spec_half_pane_cp

0xc9b9,	// (0x0004991e) mup_osc_middle_pane

0xc9c2,	// (0x00049927) mup_visualizer_osc_pane_g1

0x5618,	// (0x0004257d) mup_spec_bar_pane_ParamLimits

0x5618,	// (0x0004257d) mup_spec_bar_pane

0xc9a6,	// (0x0004990b) mup_spec_bar_pane_g1

0xc9b0,	// (0x00049915) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0004c567) mup_spec_bar_pane_g

0x2ac0,	// (0x0003fa25) aid_cale_week_size_cell_pane_ParamLimits

0x2ad5,	// (0x0003fa3a) bg_cale_heading_pane_ParamLimits

0xaa29,	// (0x0004798e) bg_cale_pane_cp01_ParamLimits

0x2af5,	// (0x0003fa5a) cale_week_corner_pane_ParamLimits

0x2b0f,	// (0x0003fa74) cale_week_day_heading_pane_ParamLimits

0x2b2f,	// (0x0003fa94) cale_week_scroll_pane_g1_ParamLimits

0x2b4a,	// (0x0003faaf) cale_week_scroll_pane_g2_ParamLimits

0x2b5d,	// (0x0003fac2) cale_week_scroll_pane_g3_ParamLimits

0x2b70,	// (0x0003fad5) cale_week_scroll_pane_g4_ParamLimits

0x2b83,	// (0x0003fae8) cale_week_scroll_pane_g5_ParamLimits

0x2b96,	// (0x0003fafb) cale_week_scroll_pane_g6_ParamLimits

0x2ba9,	// (0x0003fb0e) cale_week_scroll_pane_g7_ParamLimits

0x2bbe,	// (0x0003fb23) cale_week_scroll_pane_g8_ParamLimits

0x2bd3,	// (0x0003fb38) cale_week_scroll_pane_g9_ParamLimits

0x2be6,	// (0x0003fb4b) cale_week_scroll_pane_g10_ParamLimits

0x2bf9,	// (0x0003fb5e) cale_week_scroll_pane_g11_ParamLimits

0x2c0c,	// (0x0003fb71) cale_week_scroll_pane_g12_ParamLimits

0x2c23,	// (0x0003fb88) cale_week_scroll_pane_g13_ParamLimits

0x2c3e,	// (0x0003fba3) cale_week_scroll_pane_g14_ParamLimits

0x2c59,	// (0x0003fbbe) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0004c111) cale_week_scroll_pane_g_ParamLimits

0x2c89,	// (0x0003fbee) cale_week_time_pane_ParamLimits

0x2c9e,	// (0x0003fc03) grid_cale_week_pane_ParamLimits

0xaa46,	// (0x000479ab) listscroll_cale_week_pane_t1

0xaa58,	// (0x000479bd) scroll_pane_cp08_ParamLimits

0x3866,	// (0x000407cb) cale_month_corner_pane_ParamLimits

0xae0b,	// (0x00047d70) cale_month_pane_t1

0x3d18,	// (0x00040c7d) cale_month_week_pane_ParamLimits

0xb592,	// (0x000484f7) popup_call_status_window_g1_ParamLimits

0x44a7,	// (0x0004140c) popup_call_status_window_g2_ParamLimits

0x44b3,	// (0x00041418) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0004c2b7) popup_call_status_window_g_ParamLimits

0xb1c9,	// (0x0004812e) aid_call2_pane

0x10e7,	// (0x0003e04c) msg_header_pane_g1

0x4d77,	// (0x00041cdc) postcard_address2_pane_ParamLimits

0x4d77,	// (0x00041cdc) postcard_address2_pane

0x4d83,	// (0x00041ce8) postcard_message2_pane_ParamLimits

0x4d83,	// (0x00041ce8) postcard_message2_pane

0x55b0,	// (0x00042515) message2_row_pane_ParamLimits

0x55b0,	// (0x00042515) message2_row_pane

0x55cb,	// (0x00042530) address2_row_pane_ParamLimits

0x55cb,	// (0x00042530) address2_row_pane

0xc974,	// (0x000498d9) postcard_message2_row_pane_g1

0xc97c,	// (0x000498e1) postcard_message2_row_pane_t1

0xc974,	// (0x000498d9) address2_row_pane_g1

0xc97c,	// (0x000498e1) address2_row_pane_t1

0x2f24,	// (0x0003fe89) aid_size_cell_vorec

0xa5b7,	// (0x0004751c) main_rss_pane

0x55de,	// (0x00042543) rss_list_single_pane_ParamLimits

0x55de,	// (0x00042543) rss_list_single_pane

0xc98a,	// (0x000498ef) rss_list_single_pane_t1

0xc998,	// (0x000498fd) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0004c562) rss_list_single_pane_t

0xa5b7,	// (0x0004751c) main_camera2_pane

0xa5b7,	// (0x0004751c) main_video2_pane

0x5810,	// (0x00042775) cams_zoom_pane_cp2_ParamLimits

0x5810,	// (0x00042775) cams_zoom_pane_cp2

0x581c,	// (0x00042781) image2_vga_pane_ParamLimits

0x581c,	// (0x00042781) image2_vga_pane

0x582b,	// (0x00042790) main_camera2_pane_g1_ParamLimits

0x582b,	// (0x00042790) main_camera2_pane_g1

0x5837,	// (0x0004279c) main_camera2_pane_g2_ParamLimits

0x5837,	// (0x0004279c) main_camera2_pane_g2

0x5843,	// (0x000427a8) main_camera2_pane_g3_ParamLimits

0x5843,	// (0x000427a8) main_camera2_pane_g3

0x584f,	// (0x000427b4) main_camera2_pane_g4_ParamLimits

0x584f,	// (0x000427b4) main_camera2_pane_g4

0x585b,	// (0x000427c0) main_camera2_pane_g5_ParamLimits

0x585b,	// (0x000427c0) main_camera2_pane_g5

0x5867,	// (0x000427cc) main_camera2_pane_g6_ParamLimits

0x5867,	// (0x000427cc) main_camera2_pane_g6

0x5873,	// (0x000427d8) main_camera2_pane_g7_ParamLimits

0x5873,	// (0x000427d8) main_camera2_pane_g7

0x587f,	// (0x000427e4) main_camera2_pane_g8_ParamLimits

0x587f,	// (0x000427e4) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0004c583) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0004c583) main_camera2_pane_g

0x5897,	// (0x000427fc) main_camera2_pane_t1_ParamLimits

0x5897,	// (0x000427fc) main_camera2_pane_t1

0x58a9,	// (0x0004280e) main_camera2_pane_t2_ParamLimits

0x58a9,	// (0x0004280e) main_camera2_pane_t2

0x58bb,	// (0x00042820) main_camera2_pane_t3_ParamLimits

0x58bb,	// (0x00042820) main_camera2_pane_t3

0x58cd,	// (0x00042832) main_camera2_pane_t4_ParamLimits

0x58cd,	// (0x00042832) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0004c596) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0004c596) main_camera2_pane_t

0x592f,	// (0x00042894) cams_zoom_pane_cp4_ParamLimits

0x592f,	// (0x00042894) cams_zoom_pane_cp4

0x593f,	// (0x000428a4) image2_cif_pane_ParamLimits

0x593f,	// (0x000428a4) image2_cif_pane

0x5954,	// (0x000428b9) image2_subqcif_pane_ParamLimits

0x5954,	// (0x000428b9) image2_subqcif_pane

0x5963,	// (0x000428c8) main_video2_pane_g1_ParamLimits

0x5963,	// (0x000428c8) main_video2_pane_g1

0x5975,	// (0x000428da) main_video2_pane_g2_ParamLimits

0x5975,	// (0x000428da) main_video2_pane_g2

0x5985,	// (0x000428ea) main_video2_pane_g3_ParamLimits

0x5985,	// (0x000428ea) main_video2_pane_g3

0x5995,	// (0x000428fa) main_video2_pane_g4_ParamLimits

0x5995,	// (0x000428fa) main_video2_pane_g4

0x59a5,	// (0x0004290a) main_video2_pane_g5_ParamLimits

0x59a5,	// (0x0004290a) main_video2_pane_g5

0x59b5,	// (0x0004291a) main_video2_pane_g6_ParamLimits

0x59b5,	// (0x0004291a) main_video2_pane_g6

0x0005,

0xf640,	// (0x0004c5a5) main_video2_pane_g_ParamLimits

0xf640,	// (0x0004c5a5) main_video2_pane_g

0x59c7,	// (0x0004292c) main_video2_pane_t1_ParamLimits

0x59c7,	// (0x0004292c) main_video2_pane_t1

0x59e1,	// (0x00042946) main_video2_pane_t2_ParamLimits

0x59e1,	// (0x00042946) main_video2_pane_t2

0x5a07,	// (0x0004296c) main_video2_pane_t3_ParamLimits

0x5a07,	// (0x0004296c) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0004c5b2) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0004c5b2) main_video2_pane_t

0x52d0,	// (0x00042235) call_muted_g2

0x0001,

0xf5ef,	// (0x0004c554) call_muted_g

0xa5b7,	// (0x0004751c) main_mup2_pane

0xc9f9,	// (0x0004995e) main_mup2_pane_g1_ParamLimits

0xc9f9,	// (0x0004995e) main_mup2_pane_g1

0x5a2d,	// (0x00042992) main_mup2_pane_g2_ParamLimits

0x5a2d,	// (0x00042992) main_mup2_pane_g2

0x5caf,	// (0x00042c14) main_mup_pane_g13_cp1

0x5cb7,	// (0x00042c1c) mup_volume_pane_cp1

0x5a4d,	// (0x000429b2) main_mup2_pane_g4_ParamLimits

0x5a4d,	// (0x000429b2) main_mup2_pane_g4

0x5a62,	// (0x000429c7) main_mup2_pane_g5_ParamLimits

0x5a62,	// (0x000429c7) main_mup2_pane_g5

0x5a77,	// (0x000429dc) main_mup2_pane_g6_ParamLimits

0x5a77,	// (0x000429dc) main_mup2_pane_g6

0x5a8c,	// (0x000429f1) main_mup2_pane_g7_ParamLimits

0x5a8c,	// (0x000429f1) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0004c5b9) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0004c5b9) main_mup2_pane_g

0x5aa8,	// (0x00042a0d) main_mup2_pane_t1_ParamLimits

0x5aa8,	// (0x00042a0d) main_mup2_pane_t1

0x5abf,	// (0x00042a24) main_mup2_pane_t2_ParamLimits

0x5abf,	// (0x00042a24) main_mup2_pane_t2

0x5ad6,	// (0x00042a3b) main_mup2_pane_t3_ParamLimits

0x5ad6,	// (0x00042a3b) main_mup2_pane_t3

0x5aed,	// (0x00042a52) main_mup2_pane_t4_ParamLimits

0x5aed,	// (0x00042a52) main_mup2_pane_t4

0x5b07,	// (0x00042a6c) main_mup2_pane_t5_ParamLimits

0x5b07,	// (0x00042a6c) main_mup2_pane_t5

0x5b21,	// (0x00042a86) main_mup2_pane_t6_ParamLimits

0x5b21,	// (0x00042a86) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0004c5c8) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0004c5c8) main_mup2_pane_t

0x5b59,	// (0x00042abe) mup2_visualizer_pane_ParamLimits

0x5b59,	// (0x00042abe) mup2_visualizer_pane

0x5b8f,	// (0x00042af4) mup_progress_pane_cp_ParamLimits

0x5b8f,	// (0x00042af4) mup_progress_pane_cp

0x5c9a,	// (0x00042bff) mup_volume_pane_cp_ParamLimits

0x5c9a,	// (0x00042bff) mup_volume_pane_cp

0x5ba6,	// (0x00042b0b) mup2_visualizer_pane_g1_ParamLimits

0x5ba6,	// (0x00042b0b) mup2_visualizer_pane_g1

0xca05,	// (0x0004996a) mup2_visualizer_pane_g2_ParamLimits

0xca05,	// (0x0004996a) mup2_visualizer_pane_g2

0x5bbb,	// (0x00042b20) mup2_visualizer_pane_g3_ParamLimits

0x5bbb,	// (0x00042b20) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0004c5d5) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0004c5d5) mup2_visualizer_pane_g

0xb839,	// (0x0004879e) aid_size_cell_fmradio

0x53e6,	// (0x0004234b) aid_height_parent_landcape

0xac69,	// (0x00047bce) wml_content_pane_cp

0xac71,	// (0x00047bd6) wml_tabs_pane

0xac7a,	// (0x00047bdf) popup_wml_miniature_window

0xac82,	// (0x00047be7) scroll_pane_cp021

0xac96,	// (0x00047bfb) wml_content_pane_comp8

0xa5b7,	// (0x0004751c) bg_popup_sub_pane_cp05

0xca23,	// (0x00049988) popup_wml_miniature_window_g1

0xca2b,	// (0x00049990) wml_miniature_view_pane

0x5bc9,	// (0x00042b2e) aid_size_wml_view

0x5bd1,	// (0x00042b36) wml_miniature_view_pane_g1

0x5bda,	// (0x00042b3f) wml_miniature_view_pane_g2

0x5be3,	// (0x00042b48) wml_miniature_view_pane_g3

0x5beb,	// (0x00042b50) wml_miniature_view_pane_g4

0x5bf3,	// (0x00042b58) wml_miniature_view_pane_g5

0x5bfb,	// (0x00042b60) wml_miniature_view_pane_g6

0x5c03,	// (0x00042b68) wml_miniature_view_pane_g7

0x5c0b,	// (0x00042b70) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0004c5dc) wml_miniature_view_pane_g

0xc9f9,	// (0x0004995e) background_graphic_ParamLimits

0xc9f9,	// (0x0004995e) background_graphic

0xca33,	// (0x00049998) wml_tabs_2_pane

0xca3c,	// (0x000499a1) wml_tabs_3_pane_ParamLimits

0xca3c,	// (0x000499a1) wml_tabs_3_pane

0xca4e,	// (0x000499b3) wml_tabs_4_pane_ParamLimits

0xca4e,	// (0x000499b3) wml_tabs_4_pane

0xca64,	// (0x000499c9) wml_tabs_5_pane_ParamLimits

0xca64,	// (0x000499c9) wml_tabs_5_pane

0xca7e,	// (0x000499e3) wml_tabs_pane_g2_ParamLimits

0xca7e,	// (0x000499e3) wml_tabs_pane_g2

0xca92,	// (0x000499f7) wml_tabs_pane_g3_ParamLimits

0xca92,	// (0x000499f7) wml_tabs_pane_g3

0x5c13,	// (0x00042b78) wml_tabs_2_active_pane_ParamLimits

0x5c13,	// (0x00042b78) wml_tabs_2_active_pane

0x5c23,	// (0x00042b88) wml_tabs_2_passive_pane_ParamLimits

0x5c23,	// (0x00042b88) wml_tabs_2_passive_pane

0x5c33,	// (0x00042b98) wml_tabs_3_active_pane_cp_ParamLimits

0x5c33,	// (0x00042b98) wml_tabs_3_active_pane_cp

0x5c44,	// (0x00042ba9) wml_tabs_3_passive_pane_ParamLimits

0x5c44,	// (0x00042ba9) wml_tabs_3_passive_pane

0x5c55,	// (0x00042bba) wml_tabs_3_passive_pane_cp_ParamLimits

0x5c55,	// (0x00042bba) wml_tabs_3_passive_pane_cp

0x5c66,	// (0x00042bcb) tabs_4_active_pane

0x5c6e,	// (0x00042bd3) tabs_4_passive_pane

0x5c76,	// (0x00042bdb) tabs_4_passive_pane_cp

0x5c7e,	// (0x00042be3) tabs_4_passive_pane_cp2

0x51ab,	// (0x00042110) aid_height_text

0x49c1,	// (0x00041926) mup_volume_cont_pane_ParamLimits

0x49c1,	// (0x00041926) mup_volume_cont_pane

0x25f8,	// (0x0003f55d) aid_size_cell_pinb

0x2602,	// (0x0003f567) aid_size_list_pinb

0x5b78,	// (0x00042add) mup2_volume_cont_pane_ParamLimits

0x5b78,	// (0x00042add) mup2_volume_cont_pane

0x5c86,	// (0x00042beb) mup2_volume_cont_pane_g1_ParamLimits

0x5c86,	// (0x00042beb) mup2_volume_cont_pane_g1

0x2235,	// (0x0003f19a) aid_size_cell_touch_ParamLimits

0x2235,	// (0x0003f19a) aid_size_cell_touch

0x24de,	// (0x0003f443) touch_pane_ParamLimits

0x24de,	// (0x0003f443) touch_pane

0xa19a,	// (0x000470ff) main_rss2_pane

0xcaaf,	// (0x00049a14) listscroll_rss2_pane

0xcab8,	// (0x00049a1d) rss2_navigation_pane

0xcac0,	// (0x00049a25) list_rss2_pane

0xb30c,	// (0x00048271) scroll_pane_cp22

0xcac8,	// (0x00049a2d) rss2_navigation_pane_g1

0xcad1,	// (0x00049a36) rss2_navigation_pane_g2

0xcad9,	// (0x00049a3e) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0004c5ed) rss2_navigation_pane_g

0xcae1,	// (0x00049a46) rss2_navigation_pane_t1

0x5cbf,	// (0x00042c24) rss2_list_single_pane_ParamLimits

0x5cbf,	// (0x00042c24) rss2_list_single_pane

0xcaef,	// (0x00049a54) rss2_list_single_pane_t2

0xcafd,	// (0x00049a62) rss2_list_single_pane_t3_ParamLimits

0xcafd,	// (0x00049a62) rss2_list_single_pane_t3

0xcb1a,	// (0x00049a7f) rss2_list_single_pane_t4

0x4314,	// (0x00041279) smil_status_pane_g1

0xb096,	// (0x00047ffb) main_image2_pane_ParamLimits

0xb096,	// (0x00047ffb) main_image2_pane

0x588b,	// (0x000427f0) main_camera2_pane_g9_ParamLimits

0x588b,	// (0x000427f0) main_camera2_pane_g9

0x58df,	// (0x00042844) main_camera2_pane_t5_ParamLimits

0x58df,	// (0x00042844) main_camera2_pane_t5

0x58f1,	// (0x00042856) main_camera2_pane_t6_ParamLimits

0x58f1,	// (0x00042856) main_camera2_pane_t6

0x5cf0,	// (0x00042c55) main_image2_pane_g1_ParamLimits

0x5cf0,	// (0x00042c55) main_image2_pane_g1

0x4f4b,	// (0x00041eb0) smil2_video_pane_ParamLimits

0x4f4b,	// (0x00041eb0) smil2_video_pane

0x0e4f,	// (0x0003ddb4) aid_zoom_text_primary_cp

0x2487,	// (0x0003f3ec) popup_preview_fixed_window

0xabd2,	// (0x00047b37) im_reading_pane_g1

0x57d5,	// (0x0004273a) cams2_bc_adjust_pane_cp_ParamLimits

0x57d5,	// (0x0004273a) cams2_bc_adjust_pane_cp

0x5921,	// (0x00042886) cams2_bc_adjust_pane_ParamLimits

0x5921,	// (0x00042886) cams2_bc_adjust_pane

0x5cfc,	// (0x00042c61) cams2_bc_adjust_pane_g1

0x5d04,	// (0x00042c69) cams2_slider_pane

0x5d0d,	// (0x00042c72) cams2_slider_pane_g1

0x5d16,	// (0x00042c7b) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0004c5f4) cams2_slider_pane_g

0x2708,	// (0x0003f66d) calc_display_pane_ParamLimits

0x2726,	// (0x0003f68b) calc_paper_pane_ParamLimits

0x2742,	// (0x0003f6a7) grid_calc_pane_ParamLimits

0x4515,	// (0x0004147a) popup_clock_digital_window_t1_ParamLimits

0xb7d6,	// (0x0004873b) main_image_pane_t1

0x26ee,	// (0x0003f653) aid_size_cell_calc_ParamLimits

0x26ee,	// (0x0003f653) aid_size_cell_calc

0x5420,	// (0x00042385) popup_blid_sat_info2_window_ParamLimits

0x5420,	// (0x00042385) popup_blid_sat_info2_window

0xcb30,	// (0x00049a95) aid_size_cell_blid

0xcb38,	// (0x00049a9d) bg_popup_window_pane_cp07

0xcb5b,	// (0x00049ac0) grid_popup_blid_pane

0xcb65,	// (0x00049aca) heading_pane_cp05_ParamLimits

0xcb65,	// (0x00049aca) heading_pane_cp05

0xcc2f,	// (0x00049b94) cell_popup_blid_pane_ParamLimits

0xcc2f,	// (0x00049b94) cell_popup_blid_pane

0xcc53,	// (0x00049bb8) cell_popup_blid_pane_g1

0xcc5b,	// (0x00049bc0) cell_popup_blid_pane_t1

0x5b3e,	// (0x00042aa3) mup2_indicator_pane_ParamLimits

0x5b3e,	// (0x00042aa3) mup2_indicator_pane

0xaad0,	// (0x00047a35) mup2_visualizer_osc_pane

0xca11,	// (0x00049976) mup2_visualizer_spec_pane_ParamLimits

0xca11,	// (0x00049976) mup2_visualizer_spec_pane

0x5d30,	// (0x00042c95) mup2_spec_half_pane

0x5d39,	// (0x00042c9e) mup2_spec_half_pane_cp

0x5d43,	// (0x00042ca8) mup2_spec_bar_pane_ParamLimits

0x5d43,	// (0x00042ca8) mup2_spec_bar_pane

0xc9a6,	// (0x0004990b) mup2_spec_bar_pane_g1

0xc9b0,	// (0x00049915) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0004c567) mup2_spec_bar_pane_g

0x5d62,	// (0x00042cc7) mup2_osc_middle_pane

0xc9c2,	// (0x00049927) mup2_visualizer_osc_pane_g1

0xa1c4,	// (0x00047129) popup_number_entry_window_t1_ParamLimits

0xa1d7,	// (0x0004713c) popup_number_entry_window_t2_ParamLimits

0xa1e9,	// (0x0004714e) popup_number_entry_window_t3_ParamLimits

0x2535,	// (0x0003f49a) popup_number_entry_window_t5_ParamLimits

0x2535,	// (0x0003f49a) popup_number_entry_window_t5

0xf0c6,	// (0x0004c02b) popup_number_entry_window_t_ParamLimits

0xa1fb,	// (0x00047160) text_title_cp2_ParamLimits

0x4c3f,	// (0x00041ba4) aid_hotspot_pointer_text2_pane

0x4cd9,	// (0x00041c3e) main_viewer_pane_g9_ParamLimits

0x4cd9,	// (0x00041c3e) main_viewer_pane_g9

0xae0b,	// (0x00047d70) cale_month_pane_t1_ParamLimits

0xae48,	// (0x00047dad) bg_cale_pane_ParamLimits

0xae60,	// (0x00047dc5) list_cale_pane_ParamLimits

0xae71,	// (0x00047dd6) listscroll_cale_day_pane_t1

0xae83,	// (0x00047de8) scroll_pane_cp09_ParamLimits

0x49fc,	// (0x00041961) main_mup_eq_pane_t1_ParamLimits

0x49fc,	// (0x00041961) main_mup_eq_pane_t1

0x4a16,	// (0x0004197b) main_mup_eq_pane_t2_ParamLimits

0x4a16,	// (0x0004197b) main_mup_eq_pane_t2

0x4a30,	// (0x00041995) main_mup_eq_pane_t3_ParamLimits

0x4a30,	// (0x00041995) main_mup_eq_pane_t3

0x4a48,	// (0x000419ad) main_mup_eq_pane_t4_ParamLimits

0x4a48,	// (0x000419ad) main_mup_eq_pane_t4

0x4a60,	// (0x000419c5) main_mup_eq_pane_t5_ParamLimits

0x4a60,	// (0x000419c5) main_mup_eq_pane_t5

0x4a78,	// (0x000419dd) main_mup_eq_pane_t6_ParamLimits

0x4a78,	// (0x000419dd) main_mup_eq_pane_t6

0x4a8c,	// (0x000419f1) main_mup_eq_pane_t7_ParamLimits

0x4a8c,	// (0x000419f1) main_mup_eq_pane_t7

0x4aa0,	// (0x00041a05) main_mup_eq_pane_t8_ParamLimits

0x4aa0,	// (0x00041a05) main_mup_eq_pane_t8

0x4ab6,	// (0x00041a1b) main_mup_eq_pane_t9_ParamLimits

0x4ab6,	// (0x00041a1b) main_mup_eq_pane_t9

0x4ace,	// (0x00041a33) main_mup_eq_pane_t10_ParamLimits

0x4ace,	// (0x00041a33) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0004c3b6) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0004c3b6) main_mup_eq_pane_t

0x4b8b,	// (0x00041af0) mup_equalizer_pane_cp5_ParamLimits

0x4ba1,	// (0x00041b06) mup_equalizer_pane_cp6_ParamLimits

0x4bb9,	// (0x00041b1e) mup_equalizer_pane_cp7_ParamLimits

0xa19a,	// (0x000470ff) main_gallery_pane

0xc9cb,	// (0x00049930) smil2_volume_pane

0xc9d3,	// (0x00049938) smil_status_volume_pane_g1_ParamLimits

0xc9e6,	// (0x0004994b) smil_status_volume_pane_g2_ParamLimits

0x5648,	// (0x000425ad) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0004c56c) smil_status_volume_pane_g_ParamLimits

0xcb38,	// (0x00049a9d) bg_popup_window_pane_cp07_ParamLimits

0xcb46,	// (0x00049aab) blid_firmament_pane

0x5d6b,	// (0x00042cd0) aid_size_cell_gallery_ParamLimits

0x5d6b,	// (0x00042cd0) aid_size_cell_gallery

0x5d79,	// (0x00042cde) grid_gallery_pane_ParamLimits

0x5d79,	// (0x00042cde) grid_gallery_pane

0x5d89,	// (0x00042cee) cell_gallery_pane_ParamLimits

0x5d89,	// (0x00042cee) cell_gallery_pane

0xcc69,	// (0x00049bce) bg_cell_gallery_focus_pane_ParamLimits

0xcc69,	// (0x00049bce) bg_cell_gallery_focus_pane

0xcc7b,	// (0x00049be0) cell_gallery_pane_g1_ParamLimits

0xcc7b,	// (0x00049be0) cell_gallery_pane_g1

0x5dd7,	// (0x00042d3c) cell_gallery_pane_g2_ParamLimits

0x5dd7,	// (0x00042d3c) cell_gallery_pane_g2

0x5de4,	// (0x00042d49) cell_gallery_pane_g3_ParamLimits

0x5de4,	// (0x00042d49) cell_gallery_pane_g3

0xcc87,	// (0x00049bec) cell_gallery_pane_g4_ParamLimits

0xcc87,	// (0x00049bec) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0004c61a) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0004c61a) cell_gallery_pane_g

0xcc93,	// (0x00049bf8) bg_cell_gallery_focus_pane_g1

0xcc9b,	// (0x00049c00) bg_cell_gallery_focus_pane_g2

0xcca3,	// (0x00049c08) bg_cell_gallery_focus_pane_g3

0xccab,	// (0x00049c10) bg_cell_gallery_focus_pane_g4

0xccb3,	// (0x00049c18) bg_cell_gallery_focus_pane_g5

0xccbb,	// (0x00049c20) bg_cell_gallery_focus_pane_g6

0xccc3,	// (0x00049c28) bg_cell_gallery_focus_pane_g7

0xcccb,	// (0x00049c30) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0004c623) bg_cell_gallery_focus_pane_g

0xccd3,	// (0x00049c38) aid_firma_cardinal

0xcce7,	// (0x00049c4c) blid_firmament_pane_t1

0xccfe,	// (0x00049c63) blid_firmament_pane_t2

0xcd15,	// (0x00049c7a) blid_firmament_pane_t3

0xcd2c,	// (0x00049c91) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0004c634) blid_firmament_pane_t

0xcd43,	// (0x00049ca8) blid_sat_info_pane

0xcd53,	// (0x00049cb8) blid_sat_info_pane_g1

0xcd53,	// (0x00049cb8) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0004c63d) blid_sat_info_pane_g

0xcd5d,	// (0x00049cc2) blid_sat_info_pane_t1

0xcd6b,	// (0x00049cd0) smil2_volume_content_pane

0xcd74,	// (0x00049cd9) smil2_volume_pane_g1

0xabb7,	// (0x00047b1c) smil2_volume_content_pane_g1

0xcd7c,	// (0x00049ce1) smil2_volume_content_pane_g2

0xcd85,	// (0x00049cea) smil2_volume_content_pane_g3

0xcd8e,	// (0x00049cf3) smil2_volume_content_pane_g4

0xcd97,	// (0x00049cfc) smil2_volume_content_pane_g5

0xcda0,	// (0x00049d05) smil2_volume_content_pane_g6

0xcda9,	// (0x00049d0e) smil2_volume_content_pane_g7

0xcdb2,	// (0x00049d17) smil2_volume_content_pane_g8

0xcdbb,	// (0x00049d20) smil2_volume_content_pane_g9

0xcdc4,	// (0x00049d29) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0004c642) smil2_volume_content_pane_g

0x2d1f,	// (0x0003fc84) cale_week_day_heading_pane_t1_ParamLimits

0x2d3a,	// (0x0003fc9f) cale_week_day_heading_pane_t2_ParamLimits

0x2d55,	// (0x0003fcba) cale_week_day_heading_pane_t3_ParamLimits

0x2d70,	// (0x0003fcd5) cale_week_day_heading_pane_t4_ParamLimits

0x2d8b,	// (0x0003fcf0) cale_week_day_heading_pane_t5_ParamLimits

0x2da6,	// (0x0003fd0b) cale_week_day_heading_pane_t6_ParamLimits

0x2dc1,	// (0x0003fd26) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0004c132) cale_week_day_heading_pane_t_ParamLimits

0xaa75,	// (0x000479da) bg_cale_side_pane_ParamLimits

0x2ddc,	// (0x0003fd41) cale_week_time_pane_t1_ParamLimits

0x2df6,	// (0x0003fd5b) cale_week_time_pane_t2_ParamLimits

0x2e10,	// (0x0003fd75) cale_week_time_pane_t3_ParamLimits

0x2e2a,	// (0x0003fd8f) cale_week_time_pane_t4_ParamLimits

0x2e44,	// (0x0003fda9) cale_week_time_pane_t5_ParamLimits

0x2e5e,	// (0x0003fdc3) cale_week_time_pane_t6_ParamLimits

0x2e7c,	// (0x0003fde1) cale_week_time_pane_t7_ParamLimits

0x2e9e,	// (0x0003fe03) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0004c141) cale_week_time_pane_t_ParamLimits

0x2ec2,	// (0x0003fe27) cell_cale_week_pane_g2_ParamLimits

0xaa75,	// (0x000479da) bg_cale_side_pane_cp01_ParamLimits

0x4109,	// (0x0004106e) cale_month_week_pane_t1_ParamLimits

0x4122,	// (0x00041087) cale_month_week_pane_t2_ParamLimits

0x413b,	// (0x000410a0) cale_month_week_pane_t3_ParamLimits

0x4154,	// (0x000410b9) cale_month_week_pane_t4_ParamLimits

0x416d,	// (0x000410d2) cale_month_week_pane_t5_ParamLimits

0x418e,	// (0x000410f3) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0004c216) cale_month_week_pane_t_ParamLimits

0x42d1,	// (0x00041236) cell_cale_month_pane_g1_ParamLimits

0xa19a,	// (0x000470ff) main_cale_event_viewer_pane

0xa19a,	// (0x000470ff) listscroll_cale_event_viewer_pane

0xcdcd,	// (0x00049d32) list_cale_ev_pane

0xcdd5,	// (0x00049d3a) scroll_pane_cp023

0xcde1,	// (0x00049d46) field_cale_ev_pane_ParamLimits

0xcde1,	// (0x00049d46) field_cale_ev_pane

0xcdff,	// (0x00049d64) field_cale_ev_content_pane_ParamLimits

0xcdff,	// (0x00049d64) field_cale_ev_content_pane

0xce0b,	// (0x00049d70) field_cale_ev_pane_g1_ParamLimits

0xce0b,	// (0x00049d70) field_cale_ev_pane_g1

0xce17,	// (0x00049d7c) field_cale_ev_pane_g2_ParamLimits

0xce17,	// (0x00049d7c) field_cale_ev_pane_g2

0xce2f,	// (0x00049d94) field_cale_ev_pane_g3_ParamLimits

0xce2f,	// (0x00049d94) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0004c657) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0004c657) field_cale_ev_pane_g

0xce47,	// (0x00049dac) field_cale_ev_pane_t1_ParamLimits

0xce47,	// (0x00049dac) field_cale_ev_pane_t1

0xce5e,	// (0x00049dc3) field_cale_ev_content_pane_t1_ParamLimits

0xce5e,	// (0x00049dc3) field_cale_ev_content_pane_t1

0xb6bc,	// (0x00048621) bg_button_pane_cp01

0x2ab0,	// (0x0003fa15) listscroll_cale_week_pane_ParamLimits

0xaa20,	// (0x00047985) popup_toolbar_window_cp01

0xaa46,	// (0x000479ab) listscroll_cale_week_pane_t1_ParamLimits

0x2ab0,	// (0x0003fa15) listscroll_cale_day_pane_ParamLimits

0xaa20,	// (0x00047985) popup_toolbar_window_cp02

0xae71,	// (0x00047dd6) listscroll_cale_day_pane_t1_ParamLimits

0x2ab0,	// (0x0003fa15) main_cale_month_pane_ParamLimits

0x5527,	// (0x0004248c) popup_toolbar_window_cp03_ParamLimits

0x5527,	// (0x0004248c) popup_toolbar_window_cp03

0x4e61,	// (0x00041dc6) main_image_pane_g2_ParamLimits

0x4e61,	// (0x00041dc6) main_image_pane_g2

0x4e6d,	// (0x00041dd2) main_image_pane_g3_ParamLimits

0x4e6d,	// (0x00041dd2) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0004c448) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0004c448) main_image_pane_g

0xb7d6,	// (0x0004873b) main_image_pane_t1_ParamLimits

0x4e79,	// (0x00041dde) main_image_pane_t2_ParamLimits

0x4e79,	// (0x00041dde) main_image_pane_t2

0x4e8b,	// (0x00041df0) main_image_pane_t3_ParamLimits

0x4e8b,	// (0x00041df0) main_image_pane_t3

0x4e9d,	// (0x00041e02) main_image_pane_t4_ParamLimits

0x4e9d,	// (0x00041e02) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0004c44f) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0004c44f) main_image_pane_t

0x4eaf,	// (0x00041e14) popup_image_details_window_cp01

0x4eb9,	// (0x00041e1e) popup_toobar_trans_pane_cp01_ParamLimits

0x4eb9,	// (0x00041e1e) popup_toobar_trans_pane_cp01

0x5477,	// (0x000423dc) popup_image_details_window_ParamLimits

0x5477,	// (0x000423dc) popup_image_details_window

0x5485,	// (0x000423ea) popup_image_focus_window

0x57c7,	// (0x0004272c) camera2_autofocus_pane_ParamLimits

0x57c7,	// (0x0004272c) camera2_autofocus_pane

0xa19a,	// (0x000470ff) bg_popup_sub_pane_cp06

0xce7c,	// (0x00049de1) popup_image_focus_window_g1

0xce84,	// (0x00049de9) popup_image_focus_window_g2

0xce8c,	// (0x00049df1) popup_image_focus_window_g3

0xce94,	// (0x00049df9) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0004c65e) popup_image_focus_window_g

0xce9c,	// (0x00049e01) popup_image_focus_window_t1

0xceaa,	// (0x00049e0f) popup_image_focus_window_t2

0xceba,	// (0x00049e1f) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0004c667) popup_image_focus_window_t

0xcec8,	// (0x00049e2d) camera2_autofocus_pane_g1

0xb096,	// (0x00047ffb) bg_tb_trans_pane_cp01

0xced6,	// (0x00049e3b) popup_image_details_window_g1

0xcee9,	// (0x00049e4e) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0004c679) popup_image_details_window_g

0xcf12,	// (0x00049e77) popup_image_details_window_t1

0xcf24,	// (0x00049e89) popup_image_details_window_t2

0xcf3d,	// (0x00049ea2) popup_image_details_window_t3

0xcf51,	// (0x00049eb6) popup_image_details_window_t4

0xcf6c,	// (0x00049ed1) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0004c680) popup_image_details_window_t

0xa8f7,	// (0x0004785c) bg_calc_paper_pane_ParamLimits

0xa19a,	// (0x000470ff) grid_highlight_pane_cp013

0x283f,	// (0x0003f7a4) list_calc_pane_ParamLimits

0x2851,	// (0x0003f7b6) scroll_pane_cp024

0xa90b,	// (0x00047870) bg_calc_display_pane_ParamLimits

0x2859,	// (0x0003f7be) calc_display_pane_t1_ParamLimits

0x286e,	// (0x0003f7d3) calc_display_pane_t2_ParamLimits

0x2883,	// (0x0003f7e8) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0004c0b2) calc_display_pane_t_ParamLimits

0x295c,	// (0x0003f8c1) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0004c0cf) cell_calc_pane_g

0x2965,	// (0x0003f8ca) cell_calc_pane_t1

0xa96a,	// (0x000478cf) grid_highlight_pane_cp02_ParamLimits

0xa980,	// (0x000478e5) toolbar_button_pane_cp01_ParamLimits

0xa980,	// (0x000478e5) toolbar_button_pane_cp01

0xb81b,	// (0x00048780) temp_image_control_pane_ParamLimits

0xb81b,	// (0x00048780) temp_image_control_pane

0xb096,	// (0x00047ffb) main_mp3_pane

0xcf86,	// (0x00049eeb) temp_image_control_pane_g1_ParamLimits

0xcf86,	// (0x00049eeb) temp_image_control_pane_g1

0xcf94,	// (0x00049ef9) temp_image_control_pane_g2_ParamLimits

0xcf94,	// (0x00049ef9) temp_image_control_pane_g2

0xcfa6,	// (0x00049f0b) temp_image_control_pane_g3_ParamLimits

0xcfa6,	// (0x00049f0b) temp_image_control_pane_g3

0x5e21,	// (0x00042d86) temp_image_control_pane_g4_ParamLimits

0x5e21,	// (0x00042d86) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0004c68b) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0004c68b) temp_image_control_pane_g

0xcf86,	// (0x00049eeb) main_mp3_pane_g1

0x5e32,	// (0x00042d97) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0004c694) main_mp3_pane_g

0xcfe9,	// (0x00049f4e) main_mp3_pane_t1

0xaad8,	// (0x00047a3d) main_camera_pane_g8_ParamLimits

0xaad8,	// (0x00047a3d) main_camera_pane_g8

0x314f,	// (0x000400b4) main_video_pane_g7_ParamLimits

0x314f,	// (0x000400b4) main_video_pane_g7

0x590f,	// (0x00042874) main_camera2_pane_t7_ParamLimits

0x590f,	// (0x00042874) main_camera2_pane_t7

0xac29,	// (0x00047b8e) scroll_pane_cp025_ParamLimits

0xac29,	// (0x00047b8e) scroll_pane_cp025

0xac3d,	// (0x00047ba2) scroll_pane_cp026_ParamLimits

0xac3d,	// (0x00047ba2) scroll_pane_cp026

0xac4c,	// (0x00047bb1) wml_content_pane_ParamLimits

0xa19a,	// (0x000470ff) main_touch_calib_pane

0x5ed6,	// (0x00042e3b) main_touch_calib_pane_g1

0x5ee2,	// (0x00042e47) main_touch_calib_pane_g2

0x5eee,	// (0x00042e53) main_touch_calib_pane_g3

0x5efa,	// (0x00042e5f) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0004c6b2) main_touch_calib_pane_g

0x5f06,	// (0x00042e6b) main_touch_calib_pane_t1

0x5f1f,	// (0x00042e84) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0004c6bb) main_touch_calib_pane_t

0xb3e8,	// (0x0004834d) mup_progress_pane_cp02

0xb41d,	// (0x00048382) navi_pane_g1

0xb4d8,	// (0x0004843d) navi_pane_mp_t3

0xb096,	// (0x00047ffb) main_mp3_pane_ParamLimits

0x5564,	// (0x000424c9) navi_pane_ParamLimits

0xcf86,	// (0x00049eeb) main_mp3_pane_g1_ParamLimits

0x5e32,	// (0x00042d97) main_mp3_pane_g2_ParamLimits

0x5e3e,	// (0x00042da3) main_mp3_pane_g3_ParamLimits

0x5e3e,	// (0x00042da3) main_mp3_pane_g3

0x5e4a,	// (0x00042daf) main_mp3_pane_g4_ParamLimits

0x5e4a,	// (0x00042daf) main_mp3_pane_g4

0xcfb6,	// (0x00049f1b) main_mp3_pane_g5_ParamLimits

0xcfb6,	// (0x00049f1b) main_mp3_pane_g5

0xcfc4,	// (0x00049f29) main_mp3_pane_g6_ParamLimits

0xcfc4,	// (0x00049f29) main_mp3_pane_g6

0xcfd1,	// (0x00049f36) main_mp3_pane_g7_ParamLimits

0xcfd1,	// (0x00049f36) main_mp3_pane_g7

0xcfdd,	// (0x00049f42) main_mp3_pane_g8_ParamLimits

0xcfdd,	// (0x00049f42) main_mp3_pane_g8

0xf72f,	// (0x0004c694) main_mp3_pane_g_ParamLimits

0x5e56,	// (0x00042dbb) main_mp3_pane_t2

0x5e66,	// (0x00042dcb) main_mp3_pane_t3

0xcff7,	// (0x00049f5c) main_mp3_pane_t4

0xd005,	// (0x00049f6a) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0004c6a5) main_mp3_pane_t

0xd013,	// (0x00049f78) mup_progress_pane_cp01

0x0e4f,	// (0x0003ddb4) aid_zoom_text_secondary2

0xcdcd,	// (0x00049d32) list_cale_ev2_pane

0xcdd5,	// (0x00049d3a) scroll_pane_cp023_ParamLimits

0x5f7a,	// (0x00042edf) field_cale_ev2_pane_ParamLimits

0x5f7a,	// (0x00042edf) field_cale_ev2_pane

0x116c,	// (0x0003e0d1) field_cale_ev2_pane_g1_ParamLimits

0x116c,	// (0x0003e0d1) field_cale_ev2_pane_g1

0x1178,	// (0x0003e0dd) field_cale_ev2_pane_g2_ParamLimits

0x1178,	// (0x0003e0dd) field_cale_ev2_pane_g2

0x1190,	// (0x0003e0f5) field_cale_ev2_pane_g3_ParamLimits

0x1190,	// (0x0003e0f5) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0004c6c6) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0004c6c6) field_cale_ev2_pane_g

0x11b4,	// (0x0003e119) field_cale_ev2_pane_t1_ParamLimits

0x11b4,	// (0x0003e119) field_cale_ev2_pane_t1

0x11cb,	// (0x0003e130) field_cale_ev2_pane_t2_ParamLimits

0x11cb,	// (0x0003e130) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0004c6cf) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0004c6cf) field_cale_ev2_pane_t

0x4d41,	// (0x00041ca6) main_postcard_pane_g5_ParamLimits

0x4d41,	// (0x00041ca6) main_postcard_pane_g5

0x4d4f,	// (0x00041cb4) main_postcard_pane_g6_ParamLimits

0x4d4f,	// (0x00041cb4) main_postcard_pane_g6

0x2f99,	// (0x0003fefe) camera2_autofocus_pane_cp_ParamLimits

0x2f99,	// (0x0003fefe) camera2_autofocus_pane_cp

0xb096,	// (0x00047ffb) main_mup3_pane

0x5fc2,	// (0x00042f27) main_mup3_pane_g1_ParamLimits

0x5fc2,	// (0x00042f27) main_mup3_pane_g1

0x5fe3,	// (0x00042f48) main_mup3_pane_g2_ParamLimits

0x5fe3,	// (0x00042f48) main_mup3_pane_g2

0x605b,	// (0x00042fc0) main_mup3_pane_g3_ParamLimits

0x605b,	// (0x00042fc0) main_mup3_pane_g3

0x609e,	// (0x00043003) main_mup3_pane_g4_ParamLimits

0x609e,	// (0x00043003) main_mup3_pane_g4

0x60e1,	// (0x00043046) main_mup3_pane_g5_ParamLimits

0x60e1,	// (0x00043046) main_mup3_pane_g5

0x6124,	// (0x00043089) main_mup3_pane_g6_ParamLimits

0x6124,	// (0x00043089) main_mup3_pane_g6

0xd03b,	// (0x00049fa0) main_mup3_pane_g7_ParamLimits

0xd03b,	// (0x00049fa0) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0004c6df) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0004c6df) main_mup3_pane_g

0x619a,	// (0x000430ff) main_mup3_pane_t1_ParamLimits

0x619a,	// (0x000430ff) main_mup3_pane_t1

0x6209,	// (0x0004316e) main_mup3_pane_t2_ParamLimits

0x6209,	// (0x0004316e) main_mup3_pane_t2

0x62d2,	// (0x00043237) main_mup3_pane_t4_ParamLimits

0x62d2,	// (0x00043237) main_mup3_pane_t4

0x6320,	// (0x00043285) main_mup3_pane_t5_ParamLimits

0x6320,	// (0x00043285) main_mup3_pane_t5

0x63d0,	// (0x00043335) main_mup3_pane_t6_ParamLimits

0x63d0,	// (0x00043335) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0004c6f0) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0004c6f0) main_mup3_pane_t

0x647c,	// (0x000433e1) mup3_progress_pane_ParamLimits

0x647c,	// (0x000433e1) mup3_progress_pane

0x64fa,	// (0x0004345f) popup_mup3_control_window_ParamLimits

0x64fa,	// (0x0004345f) popup_mup3_control_window

0xd049,	// (0x00049fae) popup_mup3_text_window

0x6513,	// (0x00043478) mup3_progress_pane_t1

0x6532,	// (0x00043497) mup3_progress_pane_t2

0xd051,	// (0x00049fb6) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0004c6fd) mup3_progress_pane_t

0xd06e,	// (0x00049fd3) mup_progress_pane_cp03

0xa19a,	// (0x000470ff) bg_tb_trans_pane_cp04

0x6551,	// (0x000434b6) mup3_volume_pane

0x6559,	// (0x000434be) popup_mup3_control_window_g1

0x6562,	// (0x000434c7) mup3_volume_pane_g1

0x656b,	// (0x000434d0) mup3_volume_pane_g2

0x6574,	// (0x000434d9) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0004c704) mup3_volume_pane_g

0xa19a,	// (0x000470ff) bg_tb_trans_pane_cp03

0xd07e,	// (0x00049fe3) popup_mup3_text_window_g1

0xd086,	// (0x00049feb) popup_mup3_text_window_t1

0xa953,	// (0x000478b8) list_calc_item_pane_g1_ParamLimits

0xcaa6,	// (0x00049a0b) mup_volume_pane_cp_g1

0x5f38,	// (0x00042e9d) main_touch_calib_pane_t3

0x5f4e,	// (0x00042eb3) main_touch_calib_pane_t4

0x5f64,	// (0x00042ec9) main_touch_calib_pane_t5

0x2221,	// (0x0003f186) aid_cell_size_toolbar2

0x2229,	// (0x0003f18e) aid_popup3_width_pane

0x0e47,	// (0x0003ddac) aid_zoom_text_msg_primary

0x2f6e,	// (0x0003fed3) vorec_t7

0xa917,	// (0x0004787c) bg_calc_paper_pane_g1_ParamLimits

0xa923,	// (0x00047888) bg_calc_paper_pane_g2_ParamLimits

0xa92f,	// (0x00047894) bg_calc_paper_pane_g3_ParamLimits

0xa93b,	// (0x000478a0) bg_calc_paper_pane_g4_ParamLimits

0xa947,	// (0x000478ac) bg_calc_paper_pane_g5_ParamLimits

0x28c2,	// (0x0003f827) bg_calc_paper_pane_g6_ParamLimits

0x28d3,	// (0x0003f838) bg_calc_paper_pane_g7_ParamLimits

0x28e4,	// (0x0003f849) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0004c0b9) bg_calc_paper_pane_g_ParamLimits

0x28f5,	// (0x0003f85a) calc_bg_paper_pane_g9_ParamLimits

0x3080,	// (0x0003ffe5) image_qvga_pane_ParamLimits

0x3080,	// (0x0003ffe5) image_qvga_pane

0xa846,	// (0x000477ab) bg_popup_sub_pane_cp04_ParamLimits

0xb752,	// (0x000486b7) popup_mup_playback_window_g1_ParamLimits

0xb75e,	// (0x000486c3) popup_mup_playback_window_t1_ParamLimits

0xb773,	// (0x000486d8) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0004c443) popup_mup_playback_window_t_ParamLimits

0x5a3e,	// (0x000429a3) main_mup2_pane_g3_ParamLimits

0x5a3e,	// (0x000429a3) main_mup2_pane_g3

0x3338,	// (0x0004029d) popup_toolbar_window_cp04

0xbb55,	// (0x00048aba) popup_call2_audio_second_window_g3_ParamLimits

0xbb55,	// (0x00048aba) popup_call2_audio_second_window_g3

0xbf5f,	// (0x00048ec4) popup_call2_audio_first_window_g4_ParamLimits

0xbf5f,	// (0x00048ec4) popup_call2_audio_first_window_g4

0xc5de,	// (0x00049543) popup_call2_audio_in_window_g4_ParamLimits

0xc5de,	// (0x00049543) popup_call2_audio_in_window_g4

0x4e54,	// (0x00041db9) aid_area_sk_bg_cut_ParamLimits

0x4e54,	// (0x00041db9) aid_area_sk_bg_cut

0xb788,	// (0x000486ed) aid_area_sk_bg_cut_2_ParamLimits

0xb788,	// (0x000486ed) aid_area_sk_bg_cut_2

0x5dc7,	// (0x00042d2c) aid_placing_details_win

0x5dcf,	// (0x00042d34) aid_placing_details_win_2

0xcec8,	// (0x00049e2d) camera2_autofocus_pane_g1_ParamLimits

0x2478,	// (0x0003f3dd) popup_fixed_preview_cale_window_ParamLimits

0x2478,	// (0x0003f3dd) popup_fixed_preview_cale_window

0xb556,	// (0x000484bb) navi_slider_pane_g3

0xb55f,	// (0x000484c4) navi_slider_pane_g4

0xb568,	// (0x000484cd) navi_slider_pane_g5

0xb556,	// (0x000484bb) navi_slider_pane_g6

0x4790,	// (0x000416f5) navi_slider_pane_g7

0xb689,	// (0x000485ee) mup_scale_pane_g3

0xb692,	// (0x000485f7) mup_scale_pane_g4

0xb69b,	// (0x00048600) mup_scale_pane_g5

0x4bd1,	// (0x00041b36) mup_scale_pane_g6

0x4bda,	// (0x00041b3f) mup_scale_pane_g7

0xb556,	// (0x000484bb) cams2_slider_pane_g3

0xcb28,	// (0x00049a8d) cams2_slider_pane_g4

0x5d1f,	// (0x00042c84) cams2_slider_pane_g5

0xb556,	// (0x000484bb) cams2_slider_pane_g6

0x5d27,	// (0x00042c8c) cams2_slider_pane_g7

0xcd53,	// (0x00049cb8) camera2_autofocus_pane_cp_g1

0xc93f,	// (0x000498a4) bg_popup_preview_window_pane_cp02_ParamLimits

0xc93f,	// (0x000498a4) bg_popup_preview_window_pane_cp02

0xd094,	// (0x00049ff9) list_fp_cale_pane_ParamLimits

0xd094,	// (0x00049ff9) list_fp_cale_pane

0xd0a0,	// (0x0004a005) popup_fixed_preview_cale_window_t1_ParamLimits

0xd0a0,	// (0x0004a005) popup_fixed_preview_cale_window_t1

0x657d,	// (0x000434e2) popup_fixed_preview_cale_window_t2_ParamLimits

0x657d,	// (0x000434e2) popup_fixed_preview_cale_window_t2

0x6592,	// (0x000434f7) popup_fixed_preview_cale_window_t3_ParamLimits

0x6592,	// (0x000434f7) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0004c70b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0004c70b) popup_fixed_preview_cale_window_t

0x65a7,	// (0x0004350c) list_single_fp_cale_pane_ParamLimits

0x65a7,	// (0x0004350c) list_single_fp_cale_pane

0xd0be,	// (0x0004a023) list_single_fp_cale_pane_g1_ParamLimits

0xd0be,	// (0x0004a023) list_single_fp_cale_pane_g1

0xd0ca,	// (0x0004a02f) list_single_fp_cale_pane_g2_ParamLimits

0xd0ca,	// (0x0004a02f) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0004c712) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0004c712) list_single_fp_cale_pane_g

0xd0e3,	// (0x0004a048) list_single_fp_cale_pane_t1_ParamLimits

0xd0e3,	// (0x0004a048) list_single_fp_cale_pane_t1

0xd0f5,	// (0x0004a05a) list_single_fp_cale_pane_t2_ParamLimits

0xd0f5,	// (0x0004a05a) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0004c719) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0004c719) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa19a,	// (0x000470ff) main_dialer_pane

0x65ba,	// (0x0004351f) aid_cell_size_keypad

0x65c4,	// (0x00043529) dialer_ne_pane

0x65ce,	// (0x00043533) grid_dialer_command_1_pane

0x65d6,	// (0x0004353b) grid_dialer_command_2_pane

0x65de,	// (0x00043543) grid_dialer_keypad_pane

0x65f0,	// (0x00043555) bg_popup_call_pane_cp06_ParamLimits

0x65f0,	// (0x00043555) bg_popup_call_pane_cp06

0x65fc,	// (0x00043561) dialer_ne_clear_pane_ParamLimits

0x65fc,	// (0x00043561) dialer_ne_clear_pane

0xd128,	// (0x0004a08d) dialer_ne_pane_g1

0xd130,	// (0x0004a095) dialer_ne_pane_t1_ParamLimits

0xd130,	// (0x0004a095) dialer_ne_pane_t1

0x6608,	// (0x0004356d) dialer_ne_pane_t2_ParamLimits

0x6608,	// (0x0004356d) dialer_ne_pane_t2

0x6625,	// (0x0004358a) dialer_ne_pane_t3_ParamLimits

0x6625,	// (0x0004358a) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0004c71e) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0004c71e) dialer_ne_pane_t

0x6649,	// (0x000435ae) dialer_ne_pane_t3_copy1_ParamLimits

0x6649,	// (0x000435ae) dialer_ne_pane_t3_copy1

0x666d,	// (0x000435d2) cell_dialer_keypad_pane_ParamLimits

0x666d,	// (0x000435d2) cell_dialer_keypad_pane

0x6684,	// (0x000435e9) cell_dialer_command_1_pane_ParamLimits

0x6684,	// (0x000435e9) cell_dialer_command_1_pane

0x669a,	// (0x000435ff) cell_dialer_command_2_pane_ParamLimits

0x669a,	// (0x000435ff) cell_dialer_command_2_pane

0xd142,	// (0x0004a0a7) bg_button_pane_cp02_ParamLimits

0xd142,	// (0x0004a0a7) bg_button_pane_cp02

0x66a9,	// (0x0004360e) cell_dialer_keypad_pane_g1_ParamLimits

0x66a9,	// (0x0004360e) cell_dialer_keypad_pane_g1

0xd142,	// (0x0004a0a7) bg_button_pane_cp03_ParamLimits

0xd142,	// (0x0004a0a7) bg_button_pane_cp03

0x66be,	// (0x00043623) cell_dialer_command_1_pane_g1_ParamLimits

0x66be,	// (0x00043623) cell_dialer_command_1_pane_g1

0xd14e,	// (0x0004a0b3) bg_button_pane_cp04

0x66d2,	// (0x00043637) cell_dialer_command_2_pane_g1

0xaad0,	// (0x00047a35) bg_button_pane_cp06

0xd156,	// (0x0004a0bb) dialer_ne_clear_pane_g1

0xb429,	// (0x0004838e) navi_pane_g2

0xb457,	// (0x000483bc) navi_pane_g3

0x0002,

0xf3e1,	// (0x0004c346) navi_pane_g

0xb4e6,	// (0x0004844b) navi_pane_mv_g2

0xb50d,	// (0x00048472) navi_pane_mv_g5

0x475b,	// (0x000416c0) navi_pane_mv_t1

0xa90b,	// (0x00047870) main_clock2_pane

0xdfd6,	// (0x0004af3b) main_clock2_list_pane_ParamLimits

0xdfd6,	// (0x0004af3b) main_clock2_list_pane

0x672e,	// (0x00043693) main_clock2_pane_t1_ParamLimits

0x672e,	// (0x00043693) main_clock2_pane_t1

0x675c,	// (0x000436c1) main_clock2_pane_t2_ParamLimits

0x675c,	// (0x000436c1) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0004c72a) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0004c72a) main_clock2_pane_t

0x67c1,	// (0x00043726) popup_clock_analogue_window_cp03_ParamLimits

0x67c1,	// (0x00043726) popup_clock_analogue_window_cp03

0x67df,	// (0x00043744) popup_clock_digital_window_cp02_ParamLimits

0x67df,	// (0x00043744) popup_clock_digital_window_cp02

0x6854,	// (0x000437b9) main_clock2_list_single_pane_ParamLimits

0x6854,	// (0x000437b9) main_clock2_list_single_pane

0xaad0,	// (0x00047a35) list_highlight_pane_cp05

0xd194,	// (0x0004a0f9) main_clock2_list_single_pane_t1

0x3338,	// (0x0004029d) popup_toolbar_window_cp04_ParamLimits

0x5df1,	// (0x00042d56) camera2_autofocus_pane_g2_ParamLimits

0x5df1,	// (0x00042d56) camera2_autofocus_pane_g2

0x5dfd,	// (0x00042d62) camera2_autofocus_pane_g3_ParamLimits

0x5dfd,	// (0x00042d62) camera2_autofocus_pane_g3

0x5e09,	// (0x00042d6e) camera2_autofocus_pane_g4_ParamLimits

0x5e09,	// (0x00042d6e) camera2_autofocus_pane_g4

0x5e15,	// (0x00042d7a) camera2_autofocus_pane_g5_ParamLimits

0x5e15,	// (0x00042d7a) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0004c66e) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0004c66e) camera2_autofocus_pane_g

0xd01b,	// (0x00049f80) camera2_autofocus_pane_cp_g2

0xd023,	// (0x00049f88) camera2_autofocus_pane_cp_g3

0xd02b,	// (0x00049f90) camera2_autofocus_pane_cp_g4

0xd033,	// (0x00049f98) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0004c6d4) camera2_autofocus_pane_cp_g

0x65e8,	// (0x0004354d) popup_dialer_spcha_window

0xa19a,	// (0x000470ff) bg_popup_sub_pane_cp07

0xd1a2,	// (0x0004a107) list_spcha_pane

0xd1aa,	// (0x0004a10f) list_single_spcha_pane_ParamLimits

0xd1aa,	// (0x0004a10f) list_single_spcha_pane

0xa19a,	// (0x000470ff) list_highlight_pane_cp06

0xd1bb,	// (0x0004a120) list_single_spcha_pane_t1

0xc388,	// (0x000492ed) popup_call2_audio_out_window_g4_ParamLimits

0xc388,	// (0x000492ed) popup_call2_audio_out_window_g4

0xa19a,	// (0x000470ff) main_imed2_pane

0x548d,	// (0x000423f2) popup_imed_adjust2_window

0x54a0,	// (0x00042405) popup_imed_trans_window_ParamLimits

0x54a0,	// (0x00042405) popup_imed_trans_window

0xcb91,	// (0x00049af6) popup_blid_sat_info2_window_t1

0xcb9f,	// (0x00049b04) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0004c603) popup_blid_sat_info2_window_t

0x6909,	// (0x0004386e) aid_size_cell_colour_35

0x6923,	// (0x00043888) aid_size_cell_colour_112

0x693a,	// (0x0004389f) aid_size_cell_effect

0xb096,	// (0x00047ffb) bg_tb_trans_pane_cp02

0xb0a4,	// (0x00048009) heading_imed_pane

0x6954,	// (0x000438b9) listscroll_imed_pane

0xd1c9,	// (0x0004a12e) heading_imed_pane_g1

0xd1d1,	// (0x0004a136) heading_imed_pane_t1

0xd1df,	// (0x0004a144) grid_imed_colour_35_pane_ParamLimits

0xd1df,	// (0x0004a144) grid_imed_colour_35_pane

0x6960,	// (0x000438c5) grid_imed_effect_pane

0xd1f6,	// (0x0004a15b) list_imed_aspect_pane

0x6970,	// (0x000438d5) scroll_pane_cp027_ParamLimits

0x6970,	// (0x000438d5) scroll_pane_cp027

0x697c,	// (0x000438e1) cell_imed_effect_pane_ParamLimits

0x697c,	// (0x000438e1) cell_imed_effect_pane

0xd1fe,	// (0x0004a163) cell_imed_colour_pane_ParamLimits

0xd1fe,	// (0x0004a163) cell_imed_colour_pane

0xd240,	// (0x0004a1a5) cell_imed_colour_pane_g1_ParamLimits

0xd240,	// (0x0004a1a5) cell_imed_colour_pane_g1

0xd251,	// (0x0004a1b6) hgihlgiht_grid_pane_cp016_ParamLimits

0xd251,	// (0x0004a1b6) hgihlgiht_grid_pane_cp016

0x6994,	// (0x000438f9) cell_imed_effect_pane_g1

0x699c,	// (0x00043901) grid_highlight_pane_cp017

0xd262,	// (0x0004a1c7) list_imed_single_pane_ParamLimits

0xd262,	// (0x0004a1c7) list_imed_single_pane

0xa19a,	// (0x000470ff) list_highlight_pane_cp07

0xd277,	// (0x0004a1dc) list_imed_aspect_pane_comp1_t1

0xc94b,	// (0x000498b0) bg_tb_trans_pane_cp05

0xd299,	// (0x0004a1fe) popup_imed_adjust2_window_g1

0xd2c0,	// (0x0004a225) popup_imed_adjust2_window_t1

0xd2d8,	// (0x0004a23d) slider_imed_adjust_pane

0xd2ec,	// (0x0004a251) slider_imed_adjust_pane_g1

0xd2fc,	// (0x0004a261) slider_imed_adjust_pane_g2

0xd30c,	// (0x0004a271) slider_imed_adjust_pane_g3

0xd31d,	// (0x0004a282) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0004c747) slider_imed_adjust_pane_g

0x69a5,	// (0x0004390a) aid_size_cell_clipart2

0x69b1,	// (0x00043916) grid_imed_clipart_pane

0xd32e,	// (0x0004a293) scroll_pane_cp031

0x69bb,	// (0x00043920) cell_imed_clipart_pane_ParamLimits

0x69bb,	// (0x00043920) cell_imed_clipart_pane

0x69dd,	// (0x00043942) cell_imed_clipart_pane_g1

0xa19a,	// (0x000470ff) grid_highlight_pane_cp014

0x6710,	// (0x00043675) main_clock2_pane_g1_ParamLimits

0x6710,	// (0x00043675) main_clock2_pane_g1

0x67fb,	// (0x00043760) aid_call2_pane_cp10

0x680d,	// (0x00043772) aid_call_pane_cp10

0xb38a,	// (0x000482ef) popup_clock_analogue_window_cp10_g1

0xb38a,	// (0x000482ef) popup_clock_analogue_window_cp10_g2

0x681f,	// (0x00043784) popup_clock_analogue_window_cp10_g3

0x681f,	// (0x00043784) popup_clock_analogue_window_cp10_g4

0xb38a,	// (0x000482ef) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0004c735) popup_clock_analogue_window_cp10_g

0x6835,	// (0x0004379a) popup_clock_analogue_window_cp10_t1

0x6866,	// (0x000437cb) clock_digital_number_pane_cp10_ParamLimits

0x6866,	// (0x000437cb) clock_digital_number_pane_cp10

0x6880,	// (0x000437e5) clock_digital_number_pane_cp11_ParamLimits

0x6880,	// (0x000437e5) clock_digital_number_pane_cp11

0x689a,	// (0x000437ff) clock_digital_number_pane_cp12_ParamLimits

0x689a,	// (0x000437ff) clock_digital_number_pane_cp12

0x68b4,	// (0x00043819) clock_digital_number_pane_cp13_ParamLimits

0x68b4,	// (0x00043819) clock_digital_number_pane_cp13

0x68ce,	// (0x00043833) clock_digital_separator_pane_cp10_ParamLimits

0x68ce,	// (0x00043833) clock_digital_separator_pane_cp10

0x68e8,	// (0x0004384d) popup_clock_digital_window_cp02_t1_ParamLimits

0x68e8,	// (0x0004384d) popup_clock_digital_window_cp02_t1

0xa83e,	// (0x000477a3) clock_digital_number_pane_cp10_g1

0xa83e,	// (0x000477a3) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0004c750) clock_digital_number_pane_cp10_g

0xa83e,	// (0x000477a3) clock_digital_separator_pane_cp10_g1

0xa83e,	// (0x000477a3) clock_digital_separator_pane_g2_cp10

0xb515,	// (0x0004847a) navi_pane_vded_g4

0xb51e,	// (0x00048483) navi_pane_vded_g5

0xb527,	// (0x0004848c) navi_pane_vded_t1

0xa19a,	// (0x000470ff) main_vded_pane

0x69e6,	// (0x0004394b) main_vded_pane_g1

0x69f2,	// (0x00043957) main_vded_pane_g2

0x69fc,	// (0x00043961) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0004c755) main_vded_pane_g

0x6a06,	// (0x0004396b) main_vded_pane_t1

0x6a14,	// (0x00043979) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0004c75c) main_vded_pane_t

0x6a22,	// (0x00043987) vded_slider_pane

0x6a2c,	// (0x00043991) vded_video_pane

0xd336,	// (0x0004a29b) vded_video_pane_g1

0x6a36,	// (0x0004399b) vded_video_pane_g2

0xcd53,	// (0x00049cb8) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0004c761) vded_video_pane_g

0xd340,	// (0x0004a2a5) vded_slider_pane_g1

0xcaa6,	// (0x00049a0b) vded_slider_pane_g2

0xd349,	// (0x0004a2ae) vded_slider_pane_g3

0xd352,	// (0x0004a2b7) vded_slider_pane_g4

0xd35b,	// (0x0004a2c0) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0004c768) vded_slider_pane_g

0x64ec,	// (0x00043451) mup3_rocker_pane_ParamLimits

0x64ec,	// (0x00043451) mup3_rocker_pane

0x6a3f,	// (0x000439a4) mup3_control_keys_pane_g1

0x6a47,	// (0x000439ac) mup3_control_keys_pane_g2

0x6a4f,	// (0x000439b4) mup3_control_keys_pane_g3

0x6a57,	// (0x000439bc) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0004c773) mup3_control_keys_pane_g

0x24a0,	// (0x0003f405) popup_toolbar2_fixed_window_cp01_ParamLimits

0x24a0,	// (0x0003f405) popup_toolbar2_fixed_window_cp01

0x6506,	// (0x0004346b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6506,	// (0x0004346b) popup_toolbar2_fixed_window_cp02

0xbcc7,	// (0x00048c2c) popup_call2_audio_second_window_t4_ParamLimits

0xbcc7,	// (0x00048c2c) popup_call2_audio_second_window_t4

0xc1f5,	// (0x0004915a) popup_call2_audio_first_window_t6_ParamLimits

0xc1f5,	// (0x0004915a) popup_call2_audio_first_window_t6

0xc48b,	// (0x000493f0) popup_call2_audio_out_window_t6_ParamLimits

0xc48b,	// (0x000493f0) popup_call2_audio_out_window_t6

0xa19a,	// (0x000470ff) main_vitu_pane

0x6a67,	// (0x000439cc) aid_size_cell_itu_ParamLimits

0x6a67,	// (0x000439cc) aid_size_cell_itu

0xdfd6,	// (0x0004af3b) bg_popup_window_pane_cp08_ParamLimits

0xdfd6,	// (0x0004af3b) bg_popup_window_pane_cp08

0x6a75,	// (0x000439da) field_vitu_entry_pane_ParamLimits

0x6a75,	// (0x000439da) field_vitu_entry_pane

0x6a84,	// (0x000439e9) grid_vitu_function_pane_ParamLimits

0x6a84,	// (0x000439e9) grid_vitu_function_pane

0x6a94,	// (0x000439f9) grid_vitu_itu_pane_ParamLimits

0x6a94,	// (0x000439f9) grid_vitu_itu_pane

0x6aa4,	// (0x00043a09) cell_vitu_itu_pane_ParamLimits

0x6aa4,	// (0x00043a09) cell_vitu_itu_pane

0x6ab9,	// (0x00043a1e) cell_vitu_function_pane_ParamLimits

0x6ab9,	// (0x00043a1e) cell_vitu_function_pane

0xb096,	// (0x00047ffb) bg_popup_sub_pane_cp08_ParamLimits

0xb096,	// (0x00047ffb) bg_popup_sub_pane_cp08

0x6acb,	// (0x00043a30) field_vitu_entry_pane_t1_ParamLimits

0x6acb,	// (0x00043a30) field_vitu_entry_pane_t1

0xd37c,	// (0x0004a2e1) field_vitu_entry_pane_t2_ParamLimits

0xd37c,	// (0x0004a2e1) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0004c781) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0004c781) field_vitu_entry_pane_t

0xd399,	// (0x0004a2fe) bg_button_pane_cp05_ParamLimits

0xd399,	// (0x0004a2fe) bg_button_pane_cp05

0x6ae7,	// (0x00043a4c) cell_vitu_itu_pane_g1

0x6aff,	// (0x00043a64) cell_vitu_itu_pane_t1_ParamLimits

0x6aff,	// (0x00043a64) cell_vitu_itu_pane_t1

0x6b11,	// (0x00043a76) cell_vitu_itu_pane_t2_ParamLimits

0x6b11,	// (0x00043a76) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0004c786) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0004c786) cell_vitu_itu_pane_t

0xd3a7,	// (0x0004a30c) bg_button_pane_cp07

0x6b46,	// (0x00043aab) cell_vitu_function_pane_g1

0x2766,	// (0x0003f6cb) main_calc_pane_g1

0x225d,	// (0x0003f1c2) aid_visual_content_pane

0xa19a,	// (0x000470ff) main_vradio_pane

0x6b4f,	// (0x00043ab4) main_vradio_pane_g1_ParamLimits

0x6b4f,	// (0x00043ab4) main_vradio_pane_g1

0xd3b1,	// (0x0004a316) main_vradio_pane_g2_ParamLimits

0xd3b1,	// (0x0004a316) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0004c78d) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0004c78d) main_vradio_pane_g

0x6b5f,	// (0x00043ac4) main_vradio_pane_t1_ParamLimits

0x6b5f,	// (0x00043ac4) main_vradio_pane_t1

0x6b71,	// (0x00043ad6) main_vradio_pane_t2_ParamLimits

0x6b71,	// (0x00043ad6) main_vradio_pane_t2

0xd3be,	// (0x0004a323) main_vradio_pane_t3_ParamLimits

0xd3be,	// (0x0004a323) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0004c792) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0004c792) main_vradio_pane_t

0x6b83,	// (0x00043ae8) vradio_rocker_control_pane_ParamLimits

0x6b83,	// (0x00043ae8) vradio_rocker_control_pane

0x6b8f,	// (0x00043af4) vradio_station_info_pane_ParamLimits

0x6b8f,	// (0x00043af4) vradio_station_info_pane

0xd3d2,	// (0x0004a337) vradio_frequency_info_pane_ParamLimits

0xd3d2,	// (0x0004a337) vradio_frequency_info_pane

0xcd53,	// (0x00049cb8) vradio_station_info_pane_g1

0xd3e1,	// (0x0004a346) vradio_station_info_pane_t1_ParamLimits

0xd3e1,	// (0x0004a346) vradio_station_info_pane_t1

0xd403,	// (0x0004a368) vradio_station_info_pane_t2_ParamLimits

0xd403,	// (0x0004a368) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0004c799) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0004c799) vradio_station_info_pane_t

0xd415,	// (0x0004a37a) vradio_tuning_pane

0xd41d,	// (0x0004a382) vradio_rocker_control_pane_g1

0xd425,	// (0x0004a38a) vradio_rocker_control_pane_g2

0xd42d,	// (0x0004a392) vradio_rocker_control_pane_g3

0xd435,	// (0x0004a39a) vradio_rocker_control_pane_g4

0xd43d,	// (0x0004a3a2) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0004c79e) vradio_rocker_control_pane_g

0x6b9e,	// (0x00043b03) vradio_frequency_info_pane_g1

0xd445,	// (0x0004a3aa) vradio_frequency_info_pane_t1_ParamLimits

0xd445,	// (0x0004a3aa) vradio_frequency_info_pane_t1

0x6ba8,	// (0x00043b0d) vradio_tuning_pane_g1

0x6bb1,	// (0x00043b16) vradio_tuning_pane_t1

0x22a6,	// (0x0003f20b) area_side_right_pane_ParamLimits

0x22a6,	// (0x0003f20b) area_side_right_pane

0xc906,	// (0x0004986b) status_small_pane_g1

0xc90e,	// (0x00049873) status_small_pane_g2

0xc917,	// (0x0004987c) status_small_pane_g3

0xc920,	// (0x00049885) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0004c559) status_small_pane_g

0xc929,	// (0x0004988e) status_small_pane_t1

0xa19a,	// (0x000470ff) main_video3_pane

0xd459,	// (0x0004a3be) cams_zoom_vslider_pane

0xd461,	// (0x0004a3c6) image3_wide_pane_ParamLimits

0xd461,	// (0x0004a3c6) image3_wide_pane

0xd47b,	// (0x0004a3e0) image3_wide_small_pane

0xd487,	// (0x0004a3ec) main_video3_pane_g1_ParamLimits

0xd487,	// (0x0004a3ec) main_video3_pane_g1

0xd4a3,	// (0x0004a408) main_video3_pane_g2_ParamLimits

0xd4a3,	// (0x0004a408) main_video3_pane_g2

0x0001,

0xf844,	// (0x0004c7a9) main_video3_pane_g_ParamLimits

0xf844,	// (0x0004c7a9) main_video3_pane_g

0xd4bf,	// (0x0004a424) main_video3_pane_t1_ParamLimits

0xd4bf,	// (0x0004a424) main_video3_pane_t1

0xd4ea,	// (0x0004a44f) main_video3_pane_t2_ParamLimits

0xd4ea,	// (0x0004a44f) main_video3_pane_t2

0xd515,	// (0x0004a47a) main_video3_pane_t3_ParamLimits

0xd515,	// (0x0004a47a) main_video3_pane_t3

0x0002,

0xf849,	// (0x0004c7ae) main_video3_pane_t_ParamLimits

0xf849,	// (0x0004c7ae) main_video3_pane_t

0xd542,	// (0x0004a4a7) cams_zoom_vslider_pane_g1

0xd54b,	// (0x0004a4b0) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0004c7b5) cams_zoom_vslider_pane_g

0xd553,	// (0x0004a4b8) small_slider_vertical_pane

0xcd53,	// (0x00049cb8) small_slider_vertical_pane_g1

0xcd53,	// (0x00049cb8) small_slider_vertical_pane_g2

0xd55b,	// (0x0004a4c0) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0004c7ba) small_slider_vertical_pane_g

0xa19a,	// (0x000470ff) main_hwr_training_pane

0xd564,	// (0x0004a4c9) hwr_training_instruct_pane_ParamLimits

0xd564,	// (0x0004a4c9) hwr_training_instruct_pane

0x6bc0,	// (0x00043b25) hwr_training_navi_pane_ParamLimits

0x6bc0,	// (0x00043b25) hwr_training_navi_pane

0x6bda,	// (0x00043b3f) hwr_training_write_pane_ParamLimits

0x6bda,	// (0x00043b3f) hwr_training_write_pane

0xa19a,	// (0x000470ff) bg_frame_shadow_pane

0xd59b,	// (0x0004a500) hwr_training_write_pane_g1

0xd5a3,	// (0x0004a508) hwr_training_write_pane_g2

0xd5ab,	// (0x0004a510) hwr_training_write_pane_g3

0xd5b3,	// (0x0004a518) hwr_training_write_pane_g4

0xd5bb,	// (0x0004a520) hwr_training_write_pane_g5

0xd5c3,	// (0x0004a528) hwr_training_write_pane_g6

0xd5cb,	// (0x0004a530) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0004c7c1) hwr_training_write_pane_g

0x6c12,	// (0x00043b77) hwr_training_navi_pane_g1_ParamLimits

0x6c12,	// (0x00043b77) hwr_training_navi_pane_g1

0x6c24,	// (0x00043b89) hwr_training_navi_pane_g2_ParamLimits

0x6c24,	// (0x00043b89) hwr_training_navi_pane_g2

0x6c36,	// (0x00043b9b) hwr_training_navi_pane_g3_ParamLimits

0x6c36,	// (0x00043b9b) hwr_training_navi_pane_g3

0x6c46,	// (0x00043bab) hwr_training_navi_pane_g4_ParamLimits

0x6c46,	// (0x00043bab) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0004c7d0) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0004c7d0) hwr_training_navi_pane_g

0x6c60,	// (0x00043bc5) hwr_training_navi_pane_t1

0x6c6e,	// (0x00043bd3) list_single_hwr_training_instruct_pane_ParamLimits

0x6c6e,	// (0x00043bd3) list_single_hwr_training_instruct_pane

0xd5d3,	// (0x0004a538) list_single_hwr_training_instruct_pane_t1

0xcc93,	// (0x00049bf8) bg_frame_shadow_pane_g1

0xd5e2,	// (0x0004a547) bg_frame_shadow_pane_g2

0xd5ea,	// (0x0004a54f) bg_frame_shadow_pane_g3

0xd5f2,	// (0x0004a557) bg_frame_shadow_pane_g4

0xd5fa,	// (0x0004a55f) bg_frame_shadow_pane_g5

0xd602,	// (0x0004a567) bg_frame_shadow_pane_g6

0xd60a,	// (0x0004a56f) bg_frame_shadow_pane_g7

0xa9c4,	// (0x00047929) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0004c7db) bg_frame_shadow_pane_g

0xa19a,	// (0x000470ff) main_video_tele_dialer_pane

0x6c93,	// (0x00043bf8) aid_size_cell_video_keypad_ParamLimits

0x6c93,	// (0x00043bf8) aid_size_cell_video_keypad

0x6ca3,	// (0x00043c08) grid_video_dialer_keypad_pane_ParamLimits

0x6ca3,	// (0x00043c08) grid_video_dialer_keypad_pane

0x6cd7,	// (0x00043c3c) video_down_pane_cp_ParamLimits

0x6cd7,	// (0x00043c3c) video_down_pane_cp

0x6d01,	// (0x00043c66) cell_video_dialer_keypad_pane_ParamLimits

0x6d01,	// (0x00043c66) cell_video_dialer_keypad_pane

0xd612,	// (0x0004a577) bg_button_pane_cp08_ParamLimits

0xd612,	// (0x0004a577) bg_button_pane_cp08

0x6d16,	// (0x00043c7b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6d16,	// (0x00043c7b) cell_video_dialer_keypad_pane_g1

0x64e0,	// (0x00043445) mup3_rocker2_pane_ParamLimits

0x64e0,	// (0x00043445) mup3_rocker2_pane

0xcd53,	// (0x00049cb8) mup3_rocker2_pane_g1

0x53fd,	// (0x00042362) main_dialer2_pane

0xa19a,	// (0x000470ff) main_mp4_pane

0x6d6b,	// (0x00043cd0) main_mp4_pane_g1_ParamLimits

0x6d6b,	// (0x00043cd0) main_mp4_pane_g1

0x6d79,	// (0x00043cde) main_mp4_pane_g2_ParamLimits

0x6d79,	// (0x00043cde) main_mp4_pane_g2

0x6d87,	// (0x00043cec) main_mp4_pane_g3_ParamLimits

0x6d87,	// (0x00043cec) main_mp4_pane_g3

0x6dcc,	// (0x00043d31) main_mp4_pane_g4_ParamLimits

0x6dcc,	// (0x00043d31) main_mp4_pane_g4

0x6dfa,	// (0x00043d5f) main_mp4_pane_g5_ParamLimits

0x6dfa,	// (0x00043d5f) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0004c7fb) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0004c7fb) main_mp4_pane_g

0x6e6e,	// (0x00043dd3) main_mp4_pane_t1_ParamLimits

0x6e6e,	// (0x00043dd3) main_mp4_pane_t1

0x6eca,	// (0x00043e2f) main_mp4_pane_t2_ParamLimits

0x6eca,	// (0x00043e2f) main_mp4_pane_t2

0xd61e,	// (0x0004a583) main_mp4_pane_t3_ParamLimits

0xd61e,	// (0x0004a583) main_mp4_pane_t3

0x6f1c,	// (0x00043e81) main_mp4_pane_t4_ParamLimits

0x6f1c,	// (0x00043e81) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004c80c) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004c80c) main_mp4_pane_t

0x6f60,	// (0x00043ec5) mp4_progress_pane_ParamLimits

0x6f60,	// (0x00043ec5) mp4_progress_pane

0x6faa,	// (0x00043f0f) mp4_rocker_pane_ParamLimits

0x6faa,	// (0x00043f0f) mp4_rocker_pane

0xd64c,	// (0x0004a5b1) mp4_progress_pane_t1

0xd665,	// (0x0004a5ca) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004c815) mp4_progress_pane_t

0xd67e,	// (0x0004a5e3) mup_progress_pane_cp04

0xcd53,	// (0x00049cb8) mp4_rocker_pane_g1

0x6fca,	// (0x00043f2f) aid_cell_size_keypad2_ParamLimits

0x6fca,	// (0x00043f2f) aid_cell_size_keypad2

0x6fda,	// (0x00043f3f) dialer2_ne_pane_ParamLimits

0x6fda,	// (0x00043f3f) dialer2_ne_pane

0x6fe8,	// (0x00043f4d) grid_dialer2_keypad_pane_ParamLimits

0x6fe8,	// (0x00043f4d) grid_dialer2_keypad_pane

0xdc89,	// (0x0004abee) bg_popup_call_pane_cp07_ParamLimits

0xdc89,	// (0x0004abee) bg_popup_call_pane_cp07

0x6ff8,	// (0x00043f5d) dialer2_ne_pane_t1_ParamLimits

0x6ff8,	// (0x00043f5d) dialer2_ne_pane_t1

0x701d,	// (0x00043f82) cell_dialer2_keypad_pane_ParamLimits

0x701d,	// (0x00043f82) cell_dialer2_keypad_pane

0xd6a3,	// (0x0004a608) bg_button_pane_pane_cp04_ParamLimits

0xd6a3,	// (0x0004a608) bg_button_pane_pane_cp04

0x7032,	// (0x00043f97) cell_dialer2_keypad_pane_g1_ParamLimits

0x7032,	// (0x00043f97) cell_dialer2_keypad_pane_g1

0x31fa,	// (0x0004015f) aid_placing_vt_set_content_ParamLimits

0x31fa,	// (0x0004015f) aid_placing_vt_set_content

0x3226,	// (0x0004018b) aid_placing_vt_set_title_ParamLimits

0x3226,	// (0x0004018b) aid_placing_vt_set_title

0xa19a,	// (0x000470ff) main_image3_pane

0x70cc,	// (0x00044031) area_side_right_pane_cp01_ParamLimits

0x70cc,	// (0x00044031) area_side_right_pane_cp01

0xa68f,	// (0x000475f4) main_image3_pane_g1_ParamLimits

0xa68f,	// (0x000475f4) main_image3_pane_g1

0x70f9,	// (0x0004405e) main_image3_pane_g2_ParamLimits

0x70f9,	// (0x0004405e) main_image3_pane_g2

0x7112,	// (0x00044077) main_image3_pane_g3_ParamLimits

0x7112,	// (0x00044077) main_image3_pane_g3

0x712b,	// (0x00044090) main_image3_pane_g4_ParamLimits

0x712b,	// (0x00044090) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004c824) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004c824) main_image3_pane_g

0x7144,	// (0x000440a9) main_image3_pane_t1_ParamLimits

0x7144,	// (0x000440a9) main_image3_pane_t1

0x7169,	// (0x000440ce) main_image3_pane_t2_ParamLimits

0x7169,	// (0x000440ce) main_image3_pane_t2

0x7188,	// (0x000440ed) main_image3_pane_t3_ParamLimits

0x7188,	// (0x000440ed) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004c82d) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004c82d) main_image3_pane_t

0xdfd6,	// (0x0004af3b) grid_sctrl_middle_pane_cp01_ParamLimits

0xdfd6,	// (0x0004af3b) grid_sctrl_middle_pane_cp01

0x71e9,	// (0x0004414e) cell_sctrl_middle_pane_cp01_ParamLimits

0x71e9,	// (0x0004414e) cell_sctrl_middle_pane_cp01

0x71fa,	// (0x0004415f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x71fa,	// (0x0004415f) cell_sctrl_middle_pane_cp01_g1

0xa19a,	// (0x000470ff) main_call4_pane

0x7207,	// (0x0004416c) aid_size_button_call4_ParamLimits

0x7207,	// (0x0004416c) aid_size_button_call4

0x723d,	// (0x000441a2) call4_windows_pane_ParamLimits

0x723d,	// (0x000441a2) call4_windows_pane

0x7252,	// (0x000441b7) grid_call4_button_pane_ParamLimits

0x7252,	// (0x000441b7) grid_call4_button_pane

0x7280,	// (0x000441e5) call4_windows_conf_pane

0x7297,	// (0x000441fc) popup_call4_audio_first_window_ParamLimits

0x7297,	// (0x000441fc) popup_call4_audio_first_window

0x72e7,	// (0x0004424c) popup_call4_audio_second_window_ParamLimits

0x72e7,	// (0x0004424c) popup_call4_audio_second_window

0x7300,	// (0x00044265) popup_call4_audio_wait_window_ParamLimits

0x7300,	// (0x00044265) popup_call4_audio_wait_window

0x730e,	// (0x00044273) cell_call4_button_pane_ParamLimits

0x730e,	// (0x00044273) cell_call4_button_pane

0x7331,	// (0x00044296) bg_button_pane_cp09_ParamLimits

0x7331,	// (0x00044296) bg_button_pane_cp09

0x733d,	// (0x000442a2) cell_call4_button_pane_g1_ParamLimits

0x733d,	// (0x000442a2) cell_call4_button_pane_g1

0x734a,	// (0x000442af) cell_call4_button_pane_t1_ParamLimits

0x734a,	// (0x000442af) cell_call4_button_pane_t1

0xd6b7,	// (0x0004a61c) popup_call4_audio_conf_window_ParamLimits

0xd6b7,	// (0x0004a61c) popup_call4_audio_conf_window

0x6513,	// (0x00043478) mup3_progress_pane_t1_ParamLimits

0x6532,	// (0x00043497) mup3_progress_pane_t2_ParamLimits

0xd051,	// (0x00049fb6) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0004c6fd) mup3_progress_pane_t_ParamLimits

0xd06e,	// (0x00049fd3) mup_progress_pane_cp03_ParamLimits

0x6a5f,	// (0x000439c4) mup3_control_keys_pane_g4_copy1

0x6f8e,	// (0x00043ef3) mp4_rocker2_pane_ParamLimits

0x6f8e,	// (0x00043ef3) mp4_rocker2_pane

0xd6cb,	// (0x0004a630) mp4_rocker2_pane_g1

0xd6d3,	// (0x0004a638) mp4_rocker2_pane_g2

0x738e,	// (0x000442f3) mp4_rocker2_pane_g3

0x7396,	// (0x000442fb) mp4_rocker2_pane_g4

0x739e,	// (0x00044303) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004c836) mp4_rocker2_pane_g

0xa19a,	// (0x000470ff) main_camera4_pane

0xa19a,	// (0x000470ff) main_video4_pane

0x6cb3,	// (0x00043c18) main_video_tele_dialer_pane_t1_ParamLimits

0x6cb3,	// (0x00043c18) main_video_tele_dialer_pane_t1

0x6cc5,	// (0x00043c2a) main_video_tele_dialer_pane_t2_ParamLimits

0x6cc5,	// (0x00043c2a) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0004c7ec) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0004c7ec) main_video_tele_dialer_pane_t

0x73be,	// (0x00044323) cam4_autofocus_pane_ParamLimits

0x73be,	// (0x00044323) cam4_autofocus_pane

0x73d8,	// (0x0004433d) cam4_image_uncrop_pane_ParamLimits

0x73d8,	// (0x0004433d) cam4_image_uncrop_pane

0x73ef,	// (0x00044354) cam4_indicators_pane_ParamLimits

0x73ef,	// (0x00044354) cam4_indicators_pane

0x740b,	// (0x00044370) main_camera4_pane_g1_ParamLimits

0x740b,	// (0x00044370) main_camera4_pane_g1

0x7417,	// (0x0004437c) main_camera4_pane_g2_ParamLimits

0x7417,	// (0x0004437c) main_camera4_pane_g2

0x7417,	// (0x0004437c) main_camera4_pane_g3_ParamLimits

0x7417,	// (0x0004437c) main_camera4_pane_g3

0x7423,	// (0x00044388) main_camera4_pane_g4_ParamLimits

0x7423,	// (0x00044388) main_camera4_pane_g4

0x742f,	// (0x00044394) main_camera4_pane_g5_ParamLimits

0x742f,	// (0x00044394) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004c841) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004c841) main_camera4_pane_g

0x7449,	// (0x000443ae) main_camera4_pane_t1_ParamLimits

0x7449,	// (0x000443ae) main_camera4_pane_t1

0xcfb6,	// (0x00049f1b) bg_tb_trans_pane_cp06

0x7499,	// (0x000443fe) cam4_indicators_pane_g1

0x74aa,	// (0x0004440f) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004c85c) cam4_indicators_pane_g

0x74c8,	// (0x0004442d) cam4_indicators_pane_t1

0x74f2,	// (0x00044457) main_video4_pane_g1_ParamLimits

0x74f2,	// (0x00044457) main_video4_pane_g1

0x74fe,	// (0x00044463) main_video4_pane_g2_ParamLimits

0x74fe,	// (0x00044463) main_video4_pane_g2

0x750a,	// (0x0004446f) main_video4_pane_g3_ParamLimits

0x750a,	// (0x0004446f) main_video4_pane_g3

0x7516,	// (0x0004447b) main_video4_pane_g4_ParamLimits

0x7516,	// (0x0004447b) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004c863) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004c863) main_video4_pane_g

0x7536,	// (0x0004449b) vid4_indicators_pane_ParamLimits

0x7536,	// (0x0004449b) vid4_indicators_pane

0x7555,	// (0x000444ba) video4_image_uncrop_cif_pane_ParamLimits

0x7555,	// (0x000444ba) video4_image_uncrop_cif_pane

0x7564,	// (0x000444c9) video4_image_uncrop_nhd_pane_ParamLimits

0x7564,	// (0x000444c9) video4_image_uncrop_nhd_pane

0x73d8,	// (0x0004433d) video4_image_uncrop_vga_pane_ParamLimits

0x73d8,	// (0x0004433d) video4_image_uncrop_vga_pane

0xb096,	// (0x00047ffb) bg_tb_trans_pane_cp07

0x757b,	// (0x000444e0) vid4_indicators_pane_g1

0x758f,	// (0x000444f4) vid4_indicators_pane_g2

0x75a3,	// (0x00044508) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004c86e) vid4_indicators_pane_g

0x75d2,	// (0x00044537) vid4_indicators_pane_t1

0x75e9,	// (0x0004454e) cam4_autofocus_pane_g1

0x75f1,	// (0x00044556) cam4_autofocus_pane_g2

0x75f9,	// (0x0004455e) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004c879) cam4_autofocus_pane_g

0x7601,	// (0x00044566) cam4_autofocus_pane_g3_copy1

0x6ce5,	// (0x00043c4a) video_down_pane_cp_t1

0x6cf3,	// (0x00043c58) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0004c7f1) video_down_pane_cp_t

0xdfd6,	// (0x0004af3b) popup_vitu2_window_ParamLimits

0xdfd6,	// (0x0004af3b) popup_vitu2_window

0x7609,	// (0x0004456e) aid_size_cell2_itu2_ParamLimits

0x7609,	// (0x0004456e) aid_size_cell2_itu2

0x762b,	// (0x00044590) aid_size_cell_itu2_ParamLimits

0x762b,	// (0x00044590) aid_size_cell_itu2

0xdc89,	// (0x0004abee) bg_popup_window_pane_cp09_ParamLimits

0xdc89,	// (0x0004abee) bg_popup_window_pane_cp09

0x766f,	// (0x000445d4) field_vitu2_entry_pane_ParamLimits

0x766f,	// (0x000445d4) field_vitu2_entry_pane

0x768f,	// (0x000445f4) grid_vitu2_function_pane_ParamLimits

0x768f,	// (0x000445f4) grid_vitu2_function_pane

0x76d3,	// (0x00044638) grid_vitu2_itu_pane_ParamLimits

0x76d3,	// (0x00044638) grid_vitu2_itu_pane

0x774f,	// (0x000446b4) cell_vitu2_itu_pane_ParamLimits

0x774f,	// (0x000446b4) cell_vitu2_itu_pane

0x7768,	// (0x000446cd) cell_vitu2_function_pane_ParamLimits

0x7768,	// (0x000446cd) cell_vitu2_function_pane

0xd6db,	// (0x0004a640) bg_popup_call_pane_cp08_ParamLimits

0xd6db,	// (0x0004a640) bg_popup_call_pane_cp08

0xd6f2,	// (0x0004a657) field_vitu2_entry_pane_g1

0xd6fe,	// (0x0004a663) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004c880) field_vitu2_entry_pane_g

0x11e0,	// (0x0003e145) field_vitu2_entry_pane_t1_ParamLimits

0x11e0,	// (0x0003e145) field_vitu2_entry_pane_t1

0x1212,	// (0x0003e177) field_vitu2_entry_pane_t2_ParamLimits

0x1212,	// (0x0003e177) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004c887) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004c887) field_vitu2_entry_pane_t

0x77a9,	// (0x0004470e) bg_button_pane_cp010_ParamLimits

0x77a9,	// (0x0004470e) bg_button_pane_cp010

0x77b7,	// (0x0004471c) cell_vitu2_itu_pane_g1

0x77d7,	// (0x0004473c) cell_vitu2_itu_pane_t1_ParamLimits

0x77d7,	// (0x0004473c) cell_vitu2_itu_pane_t1

0x122f,	// (0x0003e194) cell_vitu2_itu_pane_t2_ParamLimits

0x122f,	// (0x0003e194) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004c891) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004c891) cell_vitu2_itu_pane_t

0xb096,	// (0x00047ffb) bg_button_pane_cp011

0x7823,	// (0x00044788) cell_vitu2_function_pane_g1

0xa19a,	// (0x000470ff) main_myfav_hc_pane

0x71ca,	// (0x0004412f) popup_image3_note_pane_ParamLimits

0x71ca,	// (0x0004412f) popup_image3_note_pane

0x71d8,	// (0x0004413d) popup_image3_tool_bar_pane_ParamLimits

0x71d8,	// (0x0004413d) popup_image3_tool_bar_pane

0x12a5,	// (0x0003e20a) cell_vitu2_itu_pane_t3_ParamLimits

0x12a5,	// (0x0003e20a) cell_vitu2_itu_pane_t3

0xa19a,	// (0x000470ff) bg_popup_trans_pane

0xd720,	// (0x0004a685) grid_image3_tool_bar_pane

0xd72a,	// (0x0004a68f) bg_popup_trans_pane_g1

0xad32,	// (0x00047c97) bg_popup_trans_pane_g2

0xd732,	// (0x0004a697) bg_popup_trans_pane_g3

0xd73a,	// (0x0004a69f) bg_popup_trans_pane_g4

0xd742,	// (0x0004a6a7) bg_popup_trans_pane_g5

0xd74a,	// (0x0004a6af) bg_popup_trans_pane_g6

0xd752,	// (0x0004a6b7) bg_popup_trans_pane_g7

0xd75a,	// (0x0004a6bf) bg_popup_trans_pane_g8

0xad12,	// (0x00047c77) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004c898) bg_popup_trans_pane_g

0xd762,	// (0x0004a6c7) cell_image3_tool_bar_pane_ParamLimits

0xd762,	// (0x0004a6c7) cell_image3_tool_bar_pane

0xcd53,	// (0x00049cb8) cell_image3_tool_bar_pane_g1

0xa19a,	// (0x000470ff) bg_popup_trans_pane_cp1

0xd776,	// (0x0004a6db) popup_image3_note_pane_t1

0xd784,	// (0x0004a6e9) popup_image3_note_pane_t2

0xd792,	// (0x0004a6f7) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004c8ab) popup_image3_note_pane_t

0xd7a0,	// (0x0004a705) popup_image3_note_pane_t3_copy1

0x7837,	// (0x0004479c) bg_myfav_hc_instruction_pane_ParamLimits

0x7837,	// (0x0004479c) bg_myfav_hc_instruction_pane

0x784f,	// (0x000447b4) cell_myfav_contact_pane_ParamLimits

0x784f,	// (0x000447b4) cell_myfav_contact_pane

0x7869,	// (0x000447ce) cell_myfav_contact_pane_cp1_ParamLimits

0x7869,	// (0x000447ce) cell_myfav_contact_pane_cp1

0x7881,	// (0x000447e6) cell_myfav_contact_pane_cp2_ParamLimits

0x7881,	// (0x000447e6) cell_myfav_contact_pane_cp2

0x7899,	// (0x000447fe) cell_myfav_contact_pane_cp3_ParamLimits

0x7899,	// (0x000447fe) cell_myfav_contact_pane_cp3

0x78b0,	// (0x00044815) cell_myfav_contact_pane_cp4_ParamLimits

0x78b0,	// (0x00044815) cell_myfav_contact_pane_cp4

0x78c6,	// (0x0004482b) cell_myfav_contact_pane_cp5_ParamLimits

0x78c6,	// (0x0004482b) cell_myfav_contact_pane_cp5

0x78da,	// (0x0004483f) cell_myfav_contact_pane_cp6_ParamLimits

0x78da,	// (0x0004483f) cell_myfav_contact_pane_cp6

0x78ee,	// (0x00044853) cell_myfav_contact_pane_cp7_ParamLimits

0x78ee,	// (0x00044853) cell_myfav_contact_pane_cp7

0xd7ae,	// (0x0004a713) listscroll_gen_pane_cp05

0x7906,	// (0x0004486b) main_myfav_hc_pane_g1_ParamLimits

0x7906,	// (0x0004486b) main_myfav_hc_pane_g1

0x791c,	// (0x00044881) main_myfav_hc_pane_g2_ParamLimits

0x791c,	// (0x00044881) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004c8b2) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004c8b2) main_myfav_hc_pane_g

0x794a,	// (0x000448af) main_myfav_hc_pane_t1_ParamLimits

0x794a,	// (0x000448af) main_myfav_hc_pane_t1

0xd7b7,	// (0x0004a71c) main_myfav_hc_pane_t2_ParamLimits

0xd7b7,	// (0x0004a71c) main_myfav_hc_pane_t2

0xd7c9,	// (0x0004a72e) main_myfav_hc_pane_t3_ParamLimits

0xd7c9,	// (0x0004a72e) main_myfav_hc_pane_t3

0x7961,	// (0x000448c6) main_myfav_hc_pane_t4_ParamLimits

0x7961,	// (0x000448c6) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004c8b9) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004c8b9) main_myfav_hc_pane_t

0xcd53,	// (0x00049cb8) bg_myfav_hc_instruction_pane_g1

0xd7db,	// (0x0004a740) cell_myfav_contact_pane_g1_ParamLimits

0xd7db,	// (0x0004a740) cell_myfav_contact_pane_g1

0xd7db,	// (0x0004a740) cell_myfav_contact_pane_g2_ParamLimits

0xd7db,	// (0x0004a740) cell_myfav_contact_pane_g2

0xd7e7,	// (0x0004a74c) cell_myfav_contact_pane_g3_ParamLimits

0xd7e7,	// (0x0004a74c) cell_myfav_contact_pane_g3

0xd03b,	// (0x00049fa0) cell_myfav_contact_pane_g4_ParamLimits

0xd03b,	// (0x00049fa0) cell_myfav_contact_pane_g4

0xd7f4,	// (0x0004a759) cell_myfav_contact_pane_g5_ParamLimits

0xd7f4,	// (0x0004a759) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004c8c4) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004c8c4) cell_myfav_contact_pane_g

0x7932,	// (0x00044897) main_myfav_hc_pane_g3_ParamLimits

0x7932,	// (0x00044897) main_myfav_hc_pane_g3

0x23db,	// (0x0003f340) popup_adpt_find_window

0x798b,	// (0x000448f0) afind_page_pane_ParamLimits

0x798b,	// (0x000448f0) afind_page_pane

0x7998,	// (0x000448fd) aid_size_cell_afind_ParamLimits

0x7998,	// (0x000448fd) aid_size_cell_afind

0x79b2,	// (0x00044917) bg_popup_sub_pane_cp09_ParamLimits

0x79b2,	// (0x00044917) bg_popup_sub_pane_cp09

0x79bf,	// (0x00044924) find_pane_cp01_ParamLimits

0x79bf,	// (0x00044924) find_pane_cp01

0xd800,	// (0x0004a765) grid_afind_control_pane_ParamLimits

0xd800,	// (0x0004a765) grid_afind_control_pane

0x79cc,	// (0x00044931) grid_afind_pane_ParamLimits

0x79cc,	// (0x00044931) grid_afind_pane

0x79e8,	// (0x0004494d) cell_afind_pane_ParamLimits

0x79e8,	// (0x0004494d) cell_afind_pane

0xcd53,	// (0x00049cb8) afind_page_pane_g1

0x7a30,	// (0x00044995) afind_page_pane_g2

0x7a39,	// (0x0004499e) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004c8cf) afind_page_pane_g

0x7a42,	// (0x000449a7) afind_page_pane_t1

0xd814,	// (0x0004a779) cell_afind_grid_control_pane_ParamLimits

0xd814,	// (0x0004a779) cell_afind_grid_control_pane

0xd6a3,	// (0x0004a608) bg_button_pane_cp69_ParamLimits

0xd6a3,	// (0x0004a608) bg_button_pane_cp69

0x7a62,	// (0x000449c7) cell_afind_pane_g1_ParamLimits

0x7a62,	// (0x000449c7) cell_afind_pane_g1

0x7a6f,	// (0x000449d4) cell_afind_pane_t1_ParamLimits

0x7a6f,	// (0x000449d4) cell_afind_pane_t1

0xab22,	// (0x00047a87) bg_button_pane_cp72

0xd823,	// (0x0004a788) cell_afind_grid_control_pane_g1

0x4f7b,	// (0x00041ee0) aid_image_placing_area_ParamLimits

0x4f7b,	// (0x00041ee0) aid_image_placing_area

0xd364,	// (0x0004a2c9) field_vitu_entry_pane_g1_ParamLimits

0xd364,	// (0x0004a2c9) field_vitu_entry_pane_g1

0xd370,	// (0x0004a2d5) field_vitu_entry_pane_g2_ParamLimits

0xd370,	// (0x0004a2d5) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0004c77c) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0004c77c) field_vitu_entry_pane_g

0x6ae7,	// (0x00043a4c) cell_vitu_itu_pane_g1_ParamLimits

0x6b29,	// (0x00043a8e) cell_vitu_itu_pane_t3_ParamLimits

0x6b29,	// (0x00043a8e) cell_vitu_itu_pane_t3

0xd64c,	// (0x0004a5b1) mp4_progress_pane_t1_ParamLimits

0xd665,	// (0x0004a5ca) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004c815) mp4_progress_pane_t_ParamLimits

0xd67e,	// (0x0004a5e3) mup_progress_pane_cp04_ParamLimits

0x7975,	// (0x000448da) main_myfav_hc_pane_t5_ParamLimits

0x7975,	// (0x000448da) main_myfav_hc_pane_t5

0x2269,	// (0x0003f1ce) aid_zoom_text_primary

0x23db,	// (0x0003f340) popup_adpt_find_window_ParamLimits

0xb096,	// (0x00047ffb) main_cam_set_pane

0x73fd,	// (0x00044362) cam4_zoom_pane_ParamLimits

0x73fd,	// (0x00044362) cam4_zoom_pane

0x7a81,	// (0x000449e6) main_cam_set_pane_g1_ParamLimits

0x7a81,	// (0x000449e6) main_cam_set_pane_g1

0x7a8f,	// (0x000449f4) main_cam_set_pane_g2_ParamLimits

0x7a8f,	// (0x000449f4) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004c8d6) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004c8d6) main_cam_set_pane_g

0x7a9b,	// (0x00044a00) main_cam_set_pane_t1_ParamLimits

0x7a9b,	// (0x00044a00) main_cam_set_pane_t1

0x7ab7,	// (0x00044a1c) main_cset_listscroll_pane_ParamLimits

0x7ab7,	// (0x00044a1c) main_cset_listscroll_pane

0x7ae2,	// (0x00044a47) main_cset_slider_pane_ParamLimits

0x7ae2,	// (0x00044a47) main_cset_slider_pane

0xd834,	// (0x0004a799) main_cset_list_pane_ParamLimits

0xd834,	// (0x0004a799) main_cset_list_pane

0xd844,	// (0x0004a7a9) scroll_pane_cp028

0x7b01,	// (0x00044a66) aid_area_touch_slider

0x7b1d,	// (0x00044a82) cset_slider_pane

0x7b47,	// (0x00044aac) main_cset_slider_pane_g1

0x7b5c,	// (0x00044ac1) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004c8db) main_cset_slider_pane_g

0xd87d,	// (0x0004a7e2) main_cset_slider_pane_t1

0x7c1e,	// (0x00044b83) main_cset_slider_pane_t2

0x7c38,	// (0x00044b9d) main_cset_slider_pane_t3

0x7c52,	// (0x00044bb7) main_cset_slider_pane_t4

0x7c6c,	// (0x00044bd1) main_cset_slider_pane_t5

0x7c8a,	// (0x00044bef) main_cset_slider_pane_t6

0x7ca1,	// (0x00044c06) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004c900) main_cset_slider_pane_t

0x7dad,	// (0x00044d12) cset_list_set_pane_ParamLimits

0x7dad,	// (0x00044d12) cset_list_set_pane

0x7dc3,	// (0x00044d28) aid_position_infowindow_above

0x7dcb,	// (0x00044d30) aid_position_infowindow_below

0x12f7,	// (0x0003e25c) cset_list_set_pane_g1_ParamLimits

0x12f7,	// (0x0003e25c) cset_list_set_pane_g1

0x1303,	// (0x0003e268) cset_list_set_pane_g3_ParamLimits

0x1303,	// (0x0003e268) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004c91f) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004c91f) cset_list_set_pane_g

0x1312,	// (0x0003e277) cset_list_set_pane_t1_ParamLimits

0x1312,	// (0x0003e277) cset_list_set_pane_t1

0xb096,	// (0x00047ffb) list_highlight_pane_cp021_ParamLimits

0xb096,	// (0x00047ffb) list_highlight_pane_cp021

0xb689,	// (0x000485ee) cset_slider_pane_g1

0xb69b,	// (0x00048600) cset_slider_pane_g2

0xb692,	// (0x000485f7) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004c924) cset_slider_pane_g

0x7dd3,	// (0x00044d38) aid_area_touch_cam4_zoom

0x7ddb,	// (0x00044d40) cam4_zoom_cont_pane

0x7de3,	// (0x00044d48) cam4_zoom_pane_g1

0x7deb,	// (0x00044d50) cam4_zoom_pane_g2

0x7df3,	// (0x00044d58) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004c92b) cam4_zoom_pane_g

0xdfe4,	// (0x0004af49) cam4_zoom_cont_pane_g1

0xdfed,	// (0x0004af52) cam4_zoom_cont_pane_g2

0xdff6,	// (0x0004af5b) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004c932) cam4_zoom_cont_pane_g

0x7221,	// (0x00044186) call4_image_pane_ParamLimits

0x7221,	// (0x00044186) call4_image_pane

0x7280,	// (0x000441e5) call4_windows_conf_pane_ParamLimits

0x72c5,	// (0x0004422a) popup_call4_audio_in_window_ParamLimits

0x72c5,	// (0x0004422a) popup_call4_audio_in_window

0xa19a,	// (0x000470ff) bg_popup_call2_act_pane_cp02

0xd6af,	// (0x0004a614) call4_list_conf_pane

0xcd53,	// (0x00049cb8) call4_image_pane_g1

0xcd53,	// (0x00049cb8) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0004c63d) call4_image_pane_g

0xd93b,	// (0x0004a8a0) list_single_graphic_popup_conf4_pane_ParamLimits

0xd93b,	// (0x0004a8a0) list_single_graphic_popup_conf4_pane

0xa19a,	// (0x000470ff) list_highlight_pane_cp022

0xd94e,	// (0x0004a8b3) list_single_graphic_popup_conf4_pane_g1

0xb25a,	// (0x000481bf) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004c939) list_single_graphic_popup_conf4_pane_g

0xd956,	// (0x0004a8bb) list_single_graphic_popup_conf4_pane_t1

0x338a,	// (0x000402ef) popup_vtel_slider_window_ParamLimits

0x338a,	// (0x000402ef) popup_vtel_slider_window

0xd691,	// (0x0004a5f6) dialer2_ne_pane_t2_ParamLimits

0xd691,	// (0x0004a5f6) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004c81a) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004c81a) dialer2_ne_pane_t

0xb096,	// (0x00047ffb) bg_popup_sub_pane_cp010_ParamLimits

0xb096,	// (0x00047ffb) bg_popup_sub_pane_cp010

0x7dfb,	// (0x00044d60) popup_vtel_slider_window_g1_ParamLimits

0x7dfb,	// (0x00044d60) popup_vtel_slider_window_g1

0x7e07,	// (0x00044d6c) popup_vtel_slider_window_g2_ParamLimits

0x7e07,	// (0x00044d6c) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004c93e) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004c93e) popup_vtel_slider_window_g

0x7e4f,	// (0x00044db4) vtel_slider_pane_ParamLimits

0x7e4f,	// (0x00044db4) vtel_slider_pane

0x7e5e,	// (0x00044dc3) vtel_slider_pane_g1_ParamLimits

0x7e5e,	// (0x00044dc3) vtel_slider_pane_g1

0x7e6b,	// (0x00044dd0) vtel_slider_pane_g2_ParamLimits

0x7e6b,	// (0x00044dd0) vtel_slider_pane_g2

0x7e78,	// (0x00044ddd) vtel_slider_pane_g3_ParamLimits

0x7e78,	// (0x00044ddd) vtel_slider_pane_g3

0x7e5e,	// (0x00044dc3) vtel_slider_pane_g4_ParamLimits

0x7e5e,	// (0x00044dc3) vtel_slider_pane_g4

0x7e85,	// (0x00044dea) vtel_slider_pane_g5_ParamLimits

0x7e85,	// (0x00044dea) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004c947) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004c947) vtel_slider_pane_g

0xb096,	// (0x00047ffb) main_gallery2_pane

0x7651,	// (0x000445b6) aid_size_row_itut2_dropdow_list_ParamLimits

0x7651,	// (0x000445b6) aid_size_row_itut2_dropdow_list

0x76b1,	// (0x00044616) grid_vitu2_function_top_pane_ParamLimits

0x76b1,	// (0x00044616) grid_vitu2_function_top_pane

0x770b,	// (0x00044670) popup_vitu2_dropdown_list_window_ParamLimits

0x770b,	// (0x00044670) popup_vitu2_dropdown_list_window

0x772b,	// (0x00044690) popup_vitu2_match_list_window

0x7e92,	// (0x00044df7) cell_vitu2_function_top_pane_ParamLimits

0x7e92,	// (0x00044df7) cell_vitu2_function_top_pane

0x7eac,	// (0x00044e11) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7eac,	// (0x00044e11) cell_vitu2_function_top_pane_cp01

0x7ec8,	// (0x00044e2d) cell_vitu2_function_top_wide_pane_ParamLimits

0x7ec8,	// (0x00044e2d) cell_vitu2_function_top_wide_pane

0xb096,	// (0x00047ffb) bg_button_pane_cp012

0x7ee4,	// (0x00044e49) cell_vitu2_function_top_pane_g1

0x7ef8,	// (0x00044e5d) bg_button_pane_cp013_ParamLimits

0x7ef8,	// (0x00044e5d) bg_button_pane_cp013

0x7f14,	// (0x00044e79) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7f14,	// (0x00044e79) cell_vitu2_function_top_wide_pane_g1

0xdfd6,	// (0x0004af3b) bg_popup_sub_pane_cp20

0x7f2c,	// (0x00044e91) list_vitu2_match_list_pane

0xd72a,	// (0x0004a68f) bg_popup_sub_pane_cp20_g1

0xd732,	// (0x0004a697) bg_popup_sub_pane_cp20_g2

0xad32,	// (0x00047c97) bg_popup_sub_pane_cp20_g3

0xd73a,	// (0x0004a69f) bg_popup_sub_pane_cp20_g4

0xad12,	// (0x00047c77) bg_popup_sub_pane_cp20_g5

0xd96c,	// (0x0004a8d1) bg_popup_sub_pane_cp20_g6

0xd74a,	// (0x0004a6af) bg_popup_sub_pane_cp20_g7

0xd752,	// (0x0004a6b7) bg_popup_sub_pane_cp20_g8

0xd75a,	// (0x0004a6bf) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004c952) bg_popup_sub_pane_cp20_g

0x7f44,	// (0x00044ea9) list_vitu2_match_list_item_pane_ParamLimits

0x7f44,	// (0x00044ea9) list_vitu2_match_list_item_pane

0x7f56,	// (0x00044ebb) list_vitu2_match_list_item_pane_t1

0xa19a,	// (0x000470ff) bg_popup_sub_pane_cp21

0xb182,	// (0x000480e7) grid_vitu2_dropdown_list_pane

0x7f64,	// (0x00044ec9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f64,	// (0x00044ec9) cell_vitu2_dropdown_list_char_pane

0x7f85,	// (0x00044eea) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7f85,	// (0x00044eea) cell_vitu2_dropdown_list_ctrl_pane

0xd974,	// (0x0004a8d9) cell_vitu2_dropdown_list_char_pane_g1

0xd97d,	// (0x0004a8e2) cell_vitu2_dropdown_list_char_pane_g2

0xd986,	// (0x0004a8eb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x0a1e,	// (0x0003d983) cell_vitu2_dropdown_list_char_pane_g

0x7fb1,	// (0x00044f16) cell_vitu2_dropdown_list_char_pane_t1

0x7fbf,	// (0x00044f24) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7fbf,	// (0x00044f24) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7fcf,	// (0x00044f34) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7fcf,	// (0x00044f34) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7fe0,	// (0x00044f45) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7fe0,	// (0x00044f45) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7ff0,	// (0x00044f55) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7ff0,	// (0x00044f55) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcfb6,	// (0x00049f1b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcfb6,	// (0x00049f1b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0a,	// (0x0004c96f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0a,	// (0x0004c96f) cell_vitu2_dropdown_list_ctrl_pane_g

0x800c,	// (0x00044f71) aid_size_cell_gallery2_ParamLimits

0x800c,	// (0x00044f71) aid_size_cell_gallery2

0x8026,	// (0x00044f8b) grid_gallery2_pane_ParamLimits

0x8026,	// (0x00044f8b) grid_gallery2_pane

0x803d,	// (0x00044fa2) scroll_pane_cp029_ParamLimits

0x803d,	// (0x00044fa2) scroll_pane_cp029

0x804d,	// (0x00044fb2) cell_gallery2_pane_ParamLimits

0x804d,	// (0x00044fb2) cell_gallery2_pane

0xd98f,	// (0x0004a8f4) cell_gallery2_pane_g2

0xeab4,	// (0x0004ba19) cell_gallery2_pane_g3

0xd997,	// (0x0004a8fc) cell_gallery2_pane_g4

0xd99f,	// (0x0004a904) cell_gallery2_pane_g5

0xaad0,	// (0x00047a35) grid_highlight_pane_cp10

0x772b,	// (0x00044690) popup_vitu2_match_list_window_ParamLimits

0x773f,	// (0x000446a4) popup_vitu2_query_window_ParamLimits

0x773f,	// (0x000446a4) popup_vitu2_query_window

0xa19a,	// (0x000470ff) bg_vitu2_candi_button_pane

0xd974,	// (0x0004a8d9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd97d,	// (0x0004a8e2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd986,	// (0x0004a8eb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x137d,	// (0x0003e2e2) bg_button_pane_cp015

0x80a2,	// (0x00045007) bg_button_pane_cp016

0x80b5,	// (0x0004501a) bg_button_pane_cp017

0xc94b,	// (0x000498b0) bg_popup_sub_pane_cp22

0xd9a7,	// (0x0004a90c) popup_vitu2_query_window_g1

0x13b0,	// (0x0003e315) popup_vitu2_query_window_g2

0x0002,

0xfa15,	// (0x0004c97a) popup_vitu2_query_window_g

0x13cd,	// (0x0003e332) popup_vitu2_query_window_t1_ParamLimits

0x13cd,	// (0x0003e332) popup_vitu2_query_window_t1

0x1400,	// (0x0003e365) popup_vitu2_query_window_t2_ParamLimits

0x1400,	// (0x0003e365) popup_vitu2_query_window_t2

0x1412,	// (0x0003e377) popup_vitu2_query_window_t3_ParamLimits

0x1412,	// (0x0003e377) popup_vitu2_query_window_t3

0x80d9,	// (0x0004503e) popup_vitu2_query_window_t4_ParamLimits

0x80d9,	// (0x0004503e) popup_vitu2_query_window_t4

0x80fa,	// (0x0004505f) popup_vitu2_query_window_t5_ParamLimits

0x80fa,	// (0x0004505f) popup_vitu2_query_window_t5

0x0006,

0xfa1c,	// (0x0004c981) popup_vitu2_query_window_t_ParamLimits

0xfa1c,	// (0x0004c981) popup_vitu2_query_window_t

0xd82c,	// (0x0004a791) main_cset_text_pane

0x7b01,	// (0x00044a66) aid_area_touch_slider_ParamLimits

0x7b1d,	// (0x00044a82) cset_slider_pane_ParamLimits

0x7b47,	// (0x00044aac) main_cset_slider_pane_g1_ParamLimits

0x7b5c,	// (0x00044ac1) main_cset_slider_pane_g2_ParamLimits

0xd84d,	// (0x0004a7b2) main_cset_slider_pane_g3_ParamLimits

0xd84d,	// (0x0004a7b2) main_cset_slider_pane_g3

0x7b71,	// (0x00044ad6) main_cset_slider_pane_g4_ParamLimits

0x7b71,	// (0x00044ad6) main_cset_slider_pane_g4

0x7b80,	// (0x00044ae5) main_cset_slider_pane_g5_ParamLimits

0x7b80,	// (0x00044ae5) main_cset_slider_pane_g5

0x7b8e,	// (0x00044af3) main_cset_slider_pane_g6_ParamLimits

0x7b8e,	// (0x00044af3) main_cset_slider_pane_g6

0xf976,	// (0x0004c8db) main_cset_slider_pane_g_ParamLimits

0xd87d,	// (0x0004a7e2) main_cset_slider_pane_t1_ParamLimits

0x7c1e,	// (0x00044b83) main_cset_slider_pane_t2_ParamLimits

0x7c38,	// (0x00044b9d) main_cset_slider_pane_t3_ParamLimits

0x7c52,	// (0x00044bb7) main_cset_slider_pane_t4_ParamLimits

0x7c6c,	// (0x00044bd1) main_cset_slider_pane_t5_ParamLimits

0x7c8a,	// (0x00044bef) main_cset_slider_pane_t6_ParamLimits

0x7ca1,	// (0x00044c06) main_cset_slider_pane_t7_ParamLimits

0x7ccf,	// (0x00044c34) main_cset_slider_pane_t8_ParamLimits

0x7ccf,	// (0x00044c34) main_cset_slider_pane_t8

0x7cf7,	// (0x00044c5c) main_cset_slider_pane_t9_ParamLimits

0x7cf7,	// (0x00044c5c) main_cset_slider_pane_t9

0x7d1f,	// (0x00044c84) main_cset_slider_pane_t10_ParamLimits

0x7d1f,	// (0x00044c84) main_cset_slider_pane_t10

0x7d47,	// (0x00044cac) main_cset_slider_pane_t11_ParamLimits

0x7d47,	// (0x00044cac) main_cset_slider_pane_t11

0x7d71,	// (0x00044cd6) main_cset_slider_pane_t12_ParamLimits

0x7d71,	// (0x00044cd6) main_cset_slider_pane_t12

0x7d8e,	// (0x00044cf3) main_cset_slider_pane_t13_ParamLimits

0x7d8e,	// (0x00044cf3) main_cset_slider_pane_t13

0xf99b,	// (0x0004c900) main_cset_slider_pane_t_ParamLimits

0xa19a,	// (0x000470ff) bg_popup_sub_pane_cp011

0xd9b3,	// (0x0004a918) main_cset_text_pane_g1

0xd9bb,	// (0x0004a920) main_cset_text_pane_t1

0xd9c9,	// (0x0004a92e) main_cset_text_pane_t2

0xd9d7,	// (0x0004a93c) main_cset_text_pane_t3

0xd9e5,	// (0x0004a94a) main_cset_text_pane_t4

0xd9f3,	// (0x0004a958) main_cset_text_pane_t5

0xda01,	// (0x0004a966) main_cset_text_pane_t6

0xda0f,	// (0x0004a974) main_cset_text_pane_t7

0x0006,

0xfa2b,	// (0x0004c990) main_cset_text_pane_t

0xa19a,	// (0x000470ff) main_cam4_burst_pane

0xa19a,	// (0x000470ff) main_cam5_pane

0x7a50,	// (0x000449b5) bg_button_pane_cp019

0x7a59,	// (0x000449be) bg_button_pane_cp020

0xd859,	// (0x0004a7be) main_cset_slider_pane_g7_ParamLimits

0xd859,	// (0x0004a7be) main_cset_slider_pane_g7

0xd865,	// (0x0004a7ca) main_cset_slider_pane_g8_ParamLimits

0xd865,	// (0x0004a7ca) main_cset_slider_pane_g8

0x7ba2,	// (0x00044b07) main_cset_slider_pane_g9_ParamLimits

0x7ba2,	// (0x00044b07) main_cset_slider_pane_g9

0x7bae,	// (0x00044b13) main_cset_slider_pane_g10_ParamLimits

0x7bae,	// (0x00044b13) main_cset_slider_pane_g10

0x7bba,	// (0x00044b1f) main_cset_slider_pane_g11_ParamLimits

0x7bba,	// (0x00044b1f) main_cset_slider_pane_g11

0x7bc6,	// (0x00044b2b) main_cset_slider_pane_g12_ParamLimits

0x7bc6,	// (0x00044b2b) main_cset_slider_pane_g12

0x7bd2,	// (0x00044b37) main_cset_slider_pane_g13_ParamLimits

0x7bd2,	// (0x00044b37) main_cset_slider_pane_g13

0x7bde,	// (0x00044b43) main_cset_slider_pane_g14_ParamLimits

0x7bde,	// (0x00044b43) main_cset_slider_pane_g14

0x7bea,	// (0x00044b4f) main_cset_slider_pane_g15_ParamLimits

0x7bea,	// (0x00044b4f) main_cset_slider_pane_g15

0xd8ab,	// (0x0004a810) main_cset_slider_pane_t14_ParamLimits

0xd8ab,	// (0x0004a810) main_cset_slider_pane_t14

0xd8e4,	// (0x0004a849) main_cset_slider_pane_t15_ParamLimits

0xd8e4,	// (0x0004a849) main_cset_slider_pane_t15

0x811b,	// (0x00045080) aid_cam4_burst_size_cell_ParamLimits

0x811b,	// (0x00045080) aid_cam4_burst_size_cell

0x8137,	// (0x0004509c) grid_cam4_burst_pane_ParamLimits

0x8137,	// (0x0004509c) grid_cam4_burst_pane

0x8167,	// (0x000450cc) linegrid_cam4_burst_pane_ParamLimits

0x8167,	// (0x000450cc) linegrid_cam4_burst_pane

0x8187,	// (0x000450ec) scroll_pane_cp30_ParamLimits

0x8187,	// (0x000450ec) scroll_pane_cp30

0x8193,	// (0x000450f8) cell_cam4_burst_pane_ParamLimits

0x8193,	// (0x000450f8) cell_cam4_burst_pane

0xda1d,	// (0x0004a982) linegrid_cam4_burst_pane_g1_ParamLimits

0xda1d,	// (0x0004a982) linegrid_cam4_burst_pane_g1

0x81cf,	// (0x00045134) linegrid_cam4_burst_pane_g2_ParamLimits

0x81cf,	// (0x00045134) linegrid_cam4_burst_pane_g2

0xda2a,	// (0x0004a98f) linegrid_cam4_burst_pane_g3_ParamLimits

0xda2a,	// (0x0004a98f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3a,	// (0x0004c99f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3a,	// (0x0004c99f) linegrid_cam4_burst_pane_g

0x81e0,	// (0x00045145) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x81e0,	// (0x00045145) linegrid_cam4_burst_pane_g3_copy1

0xda37,	// (0x0004a99c) linegrid_cam4_burst_pane_g4_ParamLimits

0xda37,	// (0x0004a99c) linegrid_cam4_burst_pane_g4

0x81fa,	// (0x0004515f) linegrid_cam4_burst_pane_g5_ParamLimits

0x81fa,	// (0x0004515f) linegrid_cam4_burst_pane_g5

0x820b,	// (0x00045170) linegrid_cam4_burst_pane_g6_ParamLimits

0x820b,	// (0x00045170) linegrid_cam4_burst_pane_g6

0xda44,	// (0x0004a9a9) linegrid_cam4_burst_pane_g7_ParamLimits

0xda44,	// (0x0004a9a9) linegrid_cam4_burst_pane_g7

0x821c,	// (0x00045181) cell_cam4_burst_pane_g1

0xda5d,	// (0x0004a9c2) main_cam5_pane_t1_ParamLimits

0xda5d,	// (0x0004a9c2) main_cam5_pane_t1

0xda6f,	// (0x0004a9d4) main_cam5_pane_t2_ParamLimits

0xda6f,	// (0x0004a9d4) main_cam5_pane_t2

0xda81,	// (0x0004a9e6) main_cam5_pane_t3_ParamLimits

0xda81,	// (0x0004a9e6) main_cam5_pane_t3

0xda93,	// (0x0004a9f8) main_cam5_pane_t4_ParamLimits

0xda93,	// (0x0004a9f8) main_cam5_pane_t4

0xdaab,	// (0x0004aa10) main_cam5_pane_t5_ParamLimits

0xdaab,	// (0x0004aa10) main_cam5_pane_t5

0xdabf,	// (0x0004aa24) main_cam5_pane_t6_ParamLimits

0xdabf,	// (0x0004aa24) main_cam5_pane_t6

0xdad3,	// (0x0004aa38) main_cam5_pane_t7_ParamLimits

0xdad3,	// (0x0004aa38) main_cam5_pane_t7

0xdae5,	// (0x0004aa4a) main_cam5_pane_t8_ParamLimits

0xdae5,	// (0x0004aa4a) main_cam5_pane_t8

0xdb01,	// (0x0004aa66) main_cam5_pane_t9_ParamLimits

0xdb01,	// (0x0004aa66) main_cam5_pane_t9

0xdb13,	// (0x0004aa78) main_cam5_pane_t10_ParamLimits

0xdb13,	// (0x0004aa78) main_cam5_pane_t10

0xdb25,	// (0x0004aa8a) main_cam5_pane_t11_ParamLimits

0xdb25,	// (0x0004aa8a) main_cam5_pane_t11

0xdb37,	// (0x0004aa9c) main_cam5_pane_t12_ParamLimits

0xdb37,	// (0x0004aa9c) main_cam5_pane_t12

0xdb4c,	// (0x0004aab1) main_cam5_pane_t13_ParamLimits

0xdb4c,	// (0x0004aab1) main_cam5_pane_t13

0x000c,

0xfa46,	// (0x0004c9ab) main_cam5_pane_t_ParamLimits

0xfa46,	// (0x0004c9ab) main_cam5_pane_t

0x2491,	// (0x0003f3f6) popup_scut_keymap_window_ParamLimits

0x2491,	// (0x0003f3f6) popup_scut_keymap_window

0x822f,	// (0x00045194) aid_size_cell_brow_shortcut

0xaad0,	// (0x00047a35) bg_popup_window_pane_cp010

0x823b,	// (0x000451a0) grid_scut_pane

0x8247,	// (0x000451ac) cell_scut_pane_ParamLimits

0x8247,	// (0x000451ac) cell_scut_pane

0x825e,	// (0x000451c3) cell_scut_pane_g1

0xdb69,	// (0x0004aace) cell_scut_pane_t1

0xdb78,	// (0x0004aadd) cell_scut_pane_t2

0x8267,	// (0x000451cc) cell_scut_pane_t3

0x0002,

0xfa61,	// (0x0004c9c6) cell_scut_pane_t

0x6132,	// (0x00043097) main_mup3_pane_g8_ParamLimits

0x6132,	// (0x00043097) main_mup3_pane_g8

0x765f,	// (0x000445c4) area_vitu2_query_pane_ParamLimits

0x765f,	// (0x000445c4) area_vitu2_query_pane

0x138f,	// (0x0003e2f4) input_focus_pane_cp08

0xdb87,	// (0x0004aaec) area_vitu2_query_pane_g1

0x1490,	// (0x0003e3f5) area_vitu2_query_pane_g2

0x0001,

0xfa68,	// (0x0004c9cd) area_vitu2_query_pane_g

0x8275,	// (0x000451da) area_vitu2_query_pane_t1_ParamLimits

0x8275,	// (0x000451da) area_vitu2_query_pane_t1

0x8289,	// (0x000451ee) area_vitu2_query_pane_t2_ParamLimits

0x8289,	// (0x000451ee) area_vitu2_query_pane_t2

0x14a1,	// (0x0003e406) area_vitu2_query_pane_t3_ParamLimits

0x14a1,	// (0x0003e406) area_vitu2_query_pane_t3

0x14c9,	// (0x0003e42e) area_vitu2_query_pane_t4_ParamLimits

0x14c9,	// (0x0003e42e) area_vitu2_query_pane_t4

0x14f1,	// (0x0003e456) area_vitu2_query_pane_t5_ParamLimits

0x14f1,	// (0x0003e456) area_vitu2_query_pane_t5

0x1519,	// (0x0003e47e) area_vitu2_query_pane_t6_ParamLimits

0x1519,	// (0x0003e47e) area_vitu2_query_pane_t6

0x0006,

0xfa6d,	// (0x0004c9d2) area_vitu2_query_pane_t_ParamLimits

0xfa6d,	// (0x0004c9d2) area_vitu2_query_pane_t

0x829d,	// (0x00045202) bg_button_pane_cp018

0x82ab,	// (0x00045210) bg_button_pane_cp021

0x1565,	// (0x0003e4ca) bg_button_pane_cp022

0x1576,	// (0x0003e4db) input_focus_pane_cp09

0xb396,	// (0x000482fb) aid_size_touch_mv_arrow_left

0xb3bf,	// (0x00048324) aid_size_touch_mv_arrow_right

0x7c02,	// (0x00044b67) main_cset_slider_pane_g16_ParamLimits

0x7c02,	// (0x00044b67) main_cset_slider_pane_g16

0x7c10,	// (0x00044b75) main_cset_slider_pane_g17_ParamLimits

0x7c10,	// (0x00044b75) main_cset_slider_pane_g17

0x821c,	// (0x00045181) cell_cam4_burst_pane_g1_ParamLimits

0xa19a,	// (0x000470ff) compa_mode_pane

0x7e13,	// (0x00044d78) popup_vtel_slider_window_g3_ParamLimits

0x7e13,	// (0x00044d78) popup_vtel_slider_window_g3

0x7e27,	// (0x00044d8c) popup_vtel_slider_window_g4_ParamLimits

0x7e27,	// (0x00044d8c) popup_vtel_slider_window_g4

0x7e3b,	// (0x00044da0) popup_vtel_slider_window_t1_ParamLimits

0x7e3b,	// (0x00044da0) popup_vtel_slider_window_t1

0xa19a,	// (0x000470ff) main_cl_pane

0x548d,	// (0x000423f2) popup_imed_adjust2_window_ParamLimits

0xc94b,	// (0x000498b0) bg_tb_trans_pane_cp05_ParamLimits

0xd299,	// (0x0004a1fe) popup_imed_adjust2_window_g1_ParamLimits

0xd2a8,	// (0x0004a20d) popup_imed_adjust2_window_g2_ParamLimits

0xd2a8,	// (0x0004a20d) popup_imed_adjust2_window_g2

0xd2b4,	// (0x0004a219) popup_imed_adjust2_window_g3_ParamLimits

0xd2b4,	// (0x0004a219) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0004c740) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0004c740) popup_imed_adjust2_window_g

0xd2c0,	// (0x0004a225) popup_imed_adjust2_window_t1_ParamLimits

0xd2d8,	// (0x0004a23d) slider_imed_adjust_pane_ParamLimits

0xd2ec,	// (0x0004a251) slider_imed_adjust_pane_g1_ParamLimits

0xd2fc,	// (0x0004a261) slider_imed_adjust_pane_g2_ParamLimits

0xd30c,	// (0x0004a271) slider_imed_adjust_pane_g3_ParamLimits

0xd31d,	// (0x0004a282) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0004c747) slider_imed_adjust_pane_g_ParamLimits

0x73a6,	// (0x0004430b) aid_touch_area_cam4_ParamLimits

0x73a6,	// (0x0004430b) aid_touch_area_cam4

0x73b6,	// (0x0004431b) battery_pane_cp01

0x743d,	// (0x000443a2) main_camera4_pane_g6_ParamLimits

0x743d,	// (0x000443a2) main_camera4_pane_g6

0x745b,	// (0x000443c0) main_camera4_pane_t2_ParamLimits

0x745b,	// (0x000443c0) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004c84e) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004c84e) main_camera4_pane_t

0x74e2,	// (0x00044447) aid_touch_area_vid4_ParamLimits

0x74e2,	// (0x00044447) aid_touch_area_vid4

0x7522,	// (0x00044487) main_video4_pane_g5_ParamLimits

0x7522,	// (0x00044487) main_video4_pane_g5

0x7546,	// (0x000444ab) vid4_progress_pane_ParamLimits

0x7546,	// (0x000444ab) vid4_progress_pane

0xd871,	// (0x0004a7d6) main_cset_slider_pane_g18_ParamLimits

0xd871,	// (0x0004a7d6) main_cset_slider_pane_g18

0xda51,	// (0x0004a9b6) cell_cam4_burst_pane_g2_ParamLimits

0xda51,	// (0x0004a9b6) cell_cam4_burst_pane_g2

0x0001,

0xfa41,	// (0x0004c9a6) cell_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004c9a6) cell_cam4_burst_pane_g

0x82b7,	// (0x0004521c) bg_cl_pane_ParamLimits

0x82b7,	// (0x0004521c) bg_cl_pane

0x82c3,	// (0x00045228) cl_header_pane_ParamLimits

0x82c3,	// (0x00045228) cl_header_pane

0x82cf,	// (0x00045234) cl_listscroll_pane_ParamLimits

0x82cf,	// (0x00045234) cl_listscroll_pane

0xdb93,	// (0x0004aaf8) bg_cl_pane_g1

0xdb9b,	// (0x0004ab00) bg_cl_pane_g2

0xdba3,	// (0x0004ab08) bg_cl_pane_g3

0xdbab,	// (0x0004ab10) bg_cl_pane_g4

0xdbb3,	// (0x0004ab18) bg_cl_pane_g5

0xdbbb,	// (0x0004ab20) bg_cl_pane_g6

0xdbc3,	// (0x0004ab28) bg_cl_pane_g7

0xdbcb,	// (0x0004ab30) bg_cl_pane_g8

0xdbd3,	// (0x0004ab38) bg_cl_pane_g9

0x0008,

0xfa7c,	// (0x0004c9e1) bg_cl_pane_g

0x82db,	// (0x00045240) aid_height_cl_leading_ParamLimits

0x82db,	// (0x00045240) aid_height_cl_leading

0x82e7,	// (0x0004524c) aid_height_cl_text_ParamLimits

0x82e7,	// (0x0004524c) aid_height_cl_text

0xdfd6,	// (0x0004af3b) bg_cl_header_pane_ParamLimits

0xdfd6,	// (0x0004af3b) bg_cl_header_pane

0x82ff,	// (0x00045264) cl_header_pane_g1_ParamLimits

0x82ff,	// (0x00045264) cl_header_pane_g1

0x830c,	// (0x00045271) cl_header_pane_t1_ParamLimits

0x830c,	// (0x00045271) cl_header_pane_t1

0xdbdb,	// (0x0004ab40) cl_list_pane

0xd844,	// (0x0004a7a9) hc_scroll_pane_cp01

0xad12,	// (0x00047c77) bg_cl_header_pane_g1

0xd72a,	// (0x0004a68f) bg_cl_header_pane_g2

0xad32,	// (0x00047c97) bg_cl_header_pane_g3

0xd73a,	// (0x0004a69f) bg_cl_header_pane_g4

0xd732,	// (0x0004a697) bg_cl_header_pane_g5

0xd96c,	// (0x0004a8d1) bg_cl_header_pane_g6

0xd752,	// (0x0004a6b7) bg_cl_header_pane_g7

0xd75a,	// (0x0004a6bf) bg_cl_header_pane_g8

0xd74a,	// (0x0004a6af) bg_cl_header_pane_g9

0x0008,

0xfa8f,	// (0x0004c9f4) bg_cl_header_pane_g

0x831e,	// (0x00045283) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x831e,	// (0x00045283) hc_cl_list_double_graphic_heading_pane

0x832f,	// (0x00045294) hc_cl_list_single_graphic_pane_ParamLimits

0x832f,	// (0x00045294) hc_cl_list_single_graphic_pane

0x8348,	// (0x000452ad) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8348,	// (0x000452ad) hc_cl_list_single_graphic_pane_g1

0x8354,	// (0x000452b9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8354,	// (0x000452b9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa2,	// (0x0004ca07) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa2,	// (0x0004ca07) hc_cl_list_single_graphic_pane_g

0x8368,	// (0x000452cd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8368,	// (0x000452cd) hc_cl_list_single_graphic_pane_t1

0x8348,	// (0x000452ad) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8348,	// (0x000452ad) hc_cl_list_double_graphic_heading_pane_g1

0x837d,	// (0x000452e2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x837d,	// (0x000452e2) hc_cl_list_double_graphic_heading_pane_g2

0x8391,	// (0x000452f6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8391,	// (0x000452f6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaa7,	// (0x0004ca0c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaa7,	// (0x0004ca0c) hc_cl_list_double_graphic_heading_pane_g

0x83a5,	// (0x0004530a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x83a5,	// (0x0004530a) hc_cl_list_double_graphic_heading_pane_t1

0x83ba,	// (0x0004531f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x83ba,	// (0x0004531f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaae,	// (0x0004ca13) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaae,	// (0x0004ca13) hc_cl_list_double_graphic_heading_pane_t

0x83d7,	// (0x0004533c) vid4_progress_pane_g1

0x83e7,	// (0x0004534c) vid4_progress_pane_g2

0x83f7,	// (0x0004535c) vid4_progress_pane_g3

0x8409,	// (0x0004536e) vid4_progress_pane_g4

0x0004,

0xfab3,	// (0x0004ca18) vid4_progress_pane_g

0x8421,	// (0x00045386) vid4_progress_pane_t1

0x8437,	// (0x0004539c) vid4_progress_pane_t2

0x0002,

0xfabe,	// (0x0004ca23) vid4_progress_pane_t

0x8461,	// (0x000453c6) wait_bar_pane_cp07

0xcb46,	// (0x00049aab) blid_firmament_pane_ParamLimits

0xcb89,	// (0x00049aee) popup_blid_sat_info2_window_g1

0xcbad,	// (0x00049b12) popup_blid_sat_info2_window_t3

0xcbbb,	// (0x00049b20) popup_blid_sat_info2_window_t4

0xcbc9,	// (0x00049b2e) popup_blid_sat_info2_window_t5

0xcbd7,	// (0x00049b3c) popup_blid_sat_info2_window_t6

0xcbe7,	// (0x00049b4c) popup_blid_sat_info2_window_t7

0xcbf5,	// (0x00049b5a) popup_blid_sat_info2_window_t8

0xcc03,	// (0x00049b68) popup_blid_sat_info2_window_t9

0xcc11,	// (0x00049b76) popup_blid_sat_info2_window_t10

0xccd3,	// (0x00049c38) aid_firma_cardinal_ParamLimits

0xcce7,	// (0x00049c4c) blid_firmament_pane_t1_ParamLimits

0xccfe,	// (0x00049c63) blid_firmament_pane_t2_ParamLimits

0xcd15,	// (0x00049c7a) blid_firmament_pane_t3_ParamLimits

0xcd2c,	// (0x00049c91) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0004c634) blid_firmament_pane_t_ParamLimits

0xcd43,	// (0x00049ca8) blid_sat_info_pane_ParamLimits

0xb096,	// (0x00047ffb) main_cam_set_pane_ParamLimits

0x6909,	// (0x0004386e) aid_size_cell_colour_35_ParamLimits

0x6923,	// (0x00043888) aid_size_cell_colour_112_ParamLimits

0x693a,	// (0x0004389f) aid_size_cell_effect_ParamLimits

0xb096,	// (0x00047ffb) bg_tb_trans_pane_cp02_ParamLimits

0xb0a4,	// (0x00048009) heading_imed_pane_ParamLimits

0x6954,	// (0x000438b9) listscroll_imed_pane_ParamLimits

0xbf71,	// (0x00048ed6) popup_call2_audio_first_window_g5_ParamLimits

0xbf71,	// (0x00048ed6) popup_call2_audio_first_window_g5

0x709a,	// (0x00043fff) aid_size_touch_image3_arrow_left_ParamLimits

0x709a,	// (0x00043fff) aid_size_touch_image3_arrow_left

0x70b0,	// (0x00044015) aid_size_touch_image3_arrow_right_ParamLimits

0x70b0,	// (0x00044015) aid_size_touch_image3_arrow_right

0x844c,	// (0x000453b1) vid4_progress_pane_t3

0x6bf2,	// (0x00043b57) main_hwr_training_symbol_option_pane_ParamLimits

0x6bf2,	// (0x00043b57) main_hwr_training_symbol_option_pane

0xd586,	// (0x0004a4eb) popup_hwr_training_preview_window_ParamLimits

0xd586,	// (0x0004a4eb) popup_hwr_training_preview_window

0x6c53,	// (0x00043bb8) hwr_training_navi_pane_g5_ParamLimits

0x6c53,	// (0x00043bb8) hwr_training_navi_pane_g5

0xd718,	// (0x0004a67d) popup_char_count_window

0xdfd6,	// (0x0004af3b) bg_popup_sub_pane_cp20_ParamLimits

0x7f2c,	// (0x00044e91) list_vitu2_match_list_pane_ParamLimits

0x7f38,	// (0x00044e9d) vitu2_page_scroll_pane_ParamLimits

0x7f38,	// (0x00044e9d) vitu2_page_scroll_pane

0xdbe4,	// (0x0004ab49) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbe4,	// (0x0004ab49) list_single_hwr_training_symbol_option_pane

0xdbf7,	// (0x0004ab5c) list_single_hwr_training_symbol_option_pane_g1

0xdbff,	// (0x0004ab64) list_single_hwr_training_symbol_option_pane_t1

0xdc0d,	// (0x0004ab72) bg_button_pane_cp023

0xdc16,	// (0x0004ab7b) bg_button_pane_cp024

0x8486,	// (0x000453eb) vitu2_page_scroll_pane_g1

0x848e,	// (0x000453f3) vitu2_page_scroll_pane_g2

0x0001,

0xfac5,	// (0x0004ca2a) vitu2_page_scroll_pane_g

0x8496,	// (0x000453fb) vitu2_page_scroll_pane_t1

0xcaa6,	// (0x00049a0b) popup_char_count_window_g1

0xdc49,	// (0x0004abae) popup_char_count_window_g2

0xdc52,	// (0x0004abb7) popup_char_count_window_g3

0x0002,

0xfaca,	// (0x0004ca2f) popup_char_count_window_g

0xdc5b,	// (0x0004abc0) popup_char_count_window_t1

0xa19a,	// (0x000470ff) main_vded2_pane

0xd285,	// (0x0004a1ea) aid_size_cell_imed_line

0xd28f,	// (0x0004a1f4) grid_imed_line_width_pane

0x75b4,	// (0x00044519) vid4_indicators_pane_g4

0xdc69,	// (0x0004abce) cell_imed_line_width_pane_ParamLimits

0xdc69,	// (0x0004abce) cell_imed_line_width_pane

0xdc97,	// (0x0004abfc) cell_imed_line_width_pane_g1

0xd91d,	// (0x0004a882) cell_imed_line_width_pane_g2

0x0001,

0xfad1,	// (0x0004ca36) cell_imed_line_width_pane_g

0x84a5,	// (0x0004540a) main_vded2_pane_g1_ParamLimits

0x84a5,	// (0x0004540a) main_vded2_pane_g1

0x84b2,	// (0x00045417) main_vded2_pane_g2_ParamLimits

0x84b2,	// (0x00045417) main_vded2_pane_g2

0x0001,

0xfad6,	// (0x0004ca3b) main_vded2_pane_g_ParamLimits

0xfad6,	// (0x0004ca3b) main_vded2_pane_g

0x84c0,	// (0x00045425) vded2_slider_pane_ParamLimits

0x84c0,	// (0x00045425) vded2_slider_pane

0x84cd,	// (0x00045432) aid_size_touch_vded2_end

0x84d7,	// (0x0004543c) aid_size_touch_vded2_playhead

0xdca0,	// (0x0004ac05) aid_size_touch_vded2_start

0xdca8,	// (0x0004ac0d) vded2_slider_bg_pane

0xdcb1,	// (0x0004ac16) vded2_slider_pane_g1

0xdcba,	// (0x0004ac1f) vded2_slider_pane_g2

0x84df,	// (0x00045444) vded2_slider_pane_g3

0x0002,

0xfadb,	// (0x0004ca40) vded2_slider_pane_g

0xdcc2,	// (0x0004ac27) vded2_slider_bg_pane_g1

0xdccb,	// (0x0004ac30) vded2_slider_bg_pane_g2

0xdcd4,	// (0x0004ac39) vded2_slider_bg_pane_g3

0x0002,

0xfae2,	// (0x0004ca47) vded2_slider_bg_pane_g

0x4ce5,	// (0x00041c4a) aid_postcard_touch_down_pane_ParamLimits

0x4ce5,	// (0x00041c4a) aid_postcard_touch_down_pane

0x4cf5,	// (0x00041c5a) aid_postcard_touch_up_pane_ParamLimits

0x4cf5,	// (0x00041c5a) aid_postcard_touch_up_pane

0xa19a,	// (0x000470ff) main_blid2_pane

0x5418,	// (0x0004237d) popup_blid2_search_window

0xa19a,	// (0x000470ff) blid2_gps_pane

0xa19a,	// (0x000470ff) blid2_navig_pane

0xa19a,	// (0x000470ff) blid2_search_pane

0xa19a,	// (0x000470ff) blid2_tripm_pane

0x84e8,	// (0x0004544d) blid2_search_pane_g1_ParamLimits

0x84e8,	// (0x0004544d) blid2_search_pane_g1

0x84f8,	// (0x0004545d) blid2_search_pane_t1_ParamLimits

0x84f8,	// (0x0004545d) blid2_search_pane_t1

0x850a,	// (0x0004546f) aid_size_cell_blid2_gps_ParamLimits

0x850a,	// (0x0004546f) aid_size_cell_blid2_gps

0x851a,	// (0x0004547f) blid2_gps_pane_g1_ParamLimits

0x851a,	// (0x0004547f) blid2_gps_pane_g1

0x8526,	// (0x0004548b) grid_blid2_satellite_pane_ParamLimits

0x8526,	// (0x0004548b) grid_blid2_satellite_pane

0x8536,	// (0x0004549b) blid2_navig_pane_g1_ParamLimits

0x8536,	// (0x0004549b) blid2_navig_pane_g1

0x8542,	// (0x000454a7) blid2_navig_pane_t1_ParamLimits

0x8542,	// (0x000454a7) blid2_navig_pane_t1

0x8554,	// (0x000454b9) blid2_navig_pane_t2_ParamLimits

0x8554,	// (0x000454b9) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0004ca4e) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0004ca4e) blid2_navig_pane_t

0x8566,	// (0x000454cb) blid2_navig_ring_pane_ParamLimits

0x8566,	// (0x000454cb) blid2_navig_ring_pane

0x8576,	// (0x000454db) blid2_speed_pane_ParamLimits

0x8576,	// (0x000454db) blid2_speed_pane

0x8582,	// (0x000454e7) blid2_tripm_pane_g1_ParamLimits

0x8582,	// (0x000454e7) blid2_tripm_pane_g1

0x8592,	// (0x000454f7) blid2_tripm_pane_g2_ParamLimits

0x8592,	// (0x000454f7) blid2_tripm_pane_g2

0x859e,	// (0x00045503) blid2_tripm_pane_g3_ParamLimits

0x859e,	// (0x00045503) blid2_tripm_pane_g3

0x85aa,	// (0x0004550f) blid2_tripm_pane_g4_ParamLimits

0x85aa,	// (0x0004550f) blid2_tripm_pane_g4

0x85b6,	// (0x0004551b) blid2_tripm_pane_g5_ParamLimits

0x85b6,	// (0x0004551b) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0004ca53) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0004ca53) blid2_tripm_pane_g

0x85d2,	// (0x00045537) blid2_tripm_pane_t1_ParamLimits

0x85d2,	// (0x00045537) blid2_tripm_pane_t1

0x85e6,	// (0x0004554b) blid2_tripm_pane_t2_ParamLimits

0x85e6,	// (0x0004554b) blid2_tripm_pane_t2

0x85f8,	// (0x0004555d) blid2_tripm_pane_t3_ParamLimits

0x85f8,	// (0x0004555d) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0004ca60) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0004ca60) blid2_tripm_pane_t

0x862a,	// (0x0004558f) cell_blid2_satellite_pane_ParamLimits

0x862a,	// (0x0004558f) cell_blid2_satellite_pane

0x8644,	// (0x000455a9) cell_blid2_satellite_pane_g1

0xdcdd,	// (0x0004ac42) cell_blid2_satellite_pane_t1

0xcd53,	// (0x00049cb8) blid2_speed_pane_g1

0xdceb,	// (0x0004ac50) blid2_speed_pane_t1

0xdcf9,	// (0x0004ac5e) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0004ca69) blid2_speed_pane_t

0xcd53,	// (0x00049cb8) blid2_navig_ring_pane_g1

0x864d,	// (0x000455b2) blid2_navig_ring_pane_g2

0x8655,	// (0x000455ba) blid2_navig_ring_pane_g3

0x865d,	// (0x000455c2) blid2_navig_ring_pane_g4

0x8665,	// (0x000455ca) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0004ca6e) blid2_navig_ring_pane_g

0xa19a,	// (0x000470ff) bg_popup_window_pane_cp011

0xdd07,	// (0x0004ac6c) popup_blid2_search_window_g1

0xdd0f,	// (0x0004ac74) popup_blid2_search_window_t1

0xdd1d,	// (0x0004ac82) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0004ca79) popup_blid2_search_window_t

0xac21,	// (0x00047b86) main_browser_pane_g1

0xa90b,	// (0x00047870) main_browser_pane_ParamLimits

0xb096,	// (0x00047ffb) bg_button_pane_cp011_ParamLimits

0x7823,	// (0x00044788) cell_vitu2_function_pane_g1_ParamLimits

0xc94b,	// (0x000498b0) bg_popup_sub_pane_cp22_ParamLimits

0x138f,	// (0x0003e2f4) input_focus_pane_cp08_ParamLimits

0x80c8,	// (0x0004502d) popup_vitu2_query_button_pane_ParamLimits

0x80c8,	// (0x0004502d) popup_vitu2_query_button_pane

0x13a6,	// (0x0003e30b) popup_vitu2_query_input_button_pane

0xd9a7,	// (0x0004a90c) popup_vitu2_query_window_g1_ParamLimits

0x13b0,	// (0x0003e315) popup_vitu2_query_window_g2_ParamLimits

0xfa15,	// (0x0004c97a) popup_vitu2_query_window_g_ParamLimits

0xa19a,	// (0x000470ff) bg_button_pane_cp026

0x866d,	// (0x000455d2) popup_vitu2_query_input_button_pane_g1

0xa19a,	// (0x000470ff) bg_button_pane_cp025

0xdd2b,	// (0x0004ac90) popup_vitu2_query_button_pane_t1

0x5e76,	// (0x00042ddb) main_mp3_pane_t6

0x5e86,	// (0x00042deb) popup_slider_window_cp01

0x7491,	// (0x000443f6) cam4_battery_pane

0x7571,	// (0x000444d6) cam4_battery_pane_cp02

0x83cf,	// (0x00045334) cam4_battery_pane_cp01

0x83cf,	// (0x00045334) cam4_battery_pane_cp03

0xcd53,	// (0x00049cb8) cam4_battery_pane_g1

0xd925,	// (0x0004a88a) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0004ca7e) cam4_battery_pane_g

0xcc1f,	// (0x00049b84) popup_blid_sat_info2_window_t11

0xb396,	// (0x000482fb) aid_size_touch_mv_arrow_left_ParamLimits

0xb3bf,	// (0x00048324) aid_size_touch_mv_arrow_right_ParamLimits

0xb41d,	// (0x00048382) navi_pane_g1_ParamLimits

0xb429,	// (0x0004838e) navi_pane_g2_ParamLimits

0xb457,	// (0x000483bc) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0004c346) navi_pane_g_ParamLimits

0x475b,	// (0x000416c0) navi_pane_mv_t1_ParamLimits

0x6960,	// (0x000438c5) grid_imed_effect_pane_ParamLimits

0x324a,	// (0x000401af) aid_placing_vt_slider_lsc

0xab67,	// (0x00047acc) aid_placing_vt_slider_prt

0xb096,	// (0x00047ffb) bg_tb_trans_pane_cp01_ParamLimits

0xced6,	// (0x00049e3b) popup_image_details_window_g1_ParamLimits

0xcee9,	// (0x00049e4e) popup_image_details_window_g2_ParamLimits

0xcefe,	// (0x00049e63) popup_image_details_window_g3_ParamLimits

0xcefe,	// (0x00049e63) popup_image_details_window_g3

0xf714,	// (0x0004c679) popup_image_details_window_g_ParamLimits

0xcf12,	// (0x00049e77) popup_image_details_window_t1_ParamLimits

0xcf24,	// (0x00049e89) popup_image_details_window_t2_ParamLimits

0xcf3d,	// (0x00049ea2) popup_image_details_window_t3_ParamLimits

0xcf51,	// (0x00049eb6) popup_image_details_window_t4_ParamLimits

0xcf6c,	// (0x00049ed1) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0004c680) popup_image_details_window_t_ParamLimits

0x82f3,	// (0x00045258) cl_header_name_pane_ParamLimits

0x82f3,	// (0x00045258) cl_header_name_pane

0x8675,	// (0x000455da) cl_header_name_pane_t1_ParamLimits

0x8675,	// (0x000455da) cl_header_name_pane_t1

0x868c,	// (0x000455f1) cl_header_name_pane_t2_ParamLimits

0x868c,	// (0x000455f1) cl_header_name_pane_t2

0x86b6,	// (0x0004561b) cl_header_name_pane_t3_ParamLimits

0x86b6,	// (0x0004561b) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0004ca83) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0004ca83) cl_header_name_pane_t

0xb4e6,	// (0x0004844b) navi_pane_mv_g2_ParamLimits

0xd6f2,	// (0x0004a657) field_vitu2_entry_pane_g1_ParamLimits

0xd6fe,	// (0x0004a663) field_vitu2_entry_pane_g2_ParamLimits

0xd70a,	// (0x0004a66f) field_vitu2_entry_pane_g3_ParamLimits

0xd70a,	// (0x0004a66f) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004c880) field_vitu2_entry_pane_g_ParamLimits

0x77b7,	// (0x0004471c) cell_vitu2_itu_pane_g1_ParamLimits

0x77c9,	// (0x0004472e) cell_vitu2_itu_pane_g2_ParamLimits

0x77c9,	// (0x0004472e) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004c88c) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004c88c) cell_vitu2_itu_pane_g

0xb096,	// (0x00047ffb) bg_vkb2_func_pane_cp05_ParamLimits

0xb096,	// (0x00047ffb) bg_vkb2_func_pane_cp05

0xb096,	// (0x00047ffb) bg_vkb2_func_pane_cp03

0xb096,	// (0x00047ffb) bg_vkb2_func_pane_cp04

0xb096,	// (0x00047ffb) bg_vkb2_func_pane_cp10_ParamLimits

0xb096,	// (0x00047ffb) bg_vkb2_func_pane_cp10

0x1565,	// (0x0003e4ca) bg_vkb2_func_pane_cp08

0x829d,	// (0x00045202) bg_vkb2_func_pane_cp06

0x82ab,	// (0x00045210) bg_vkb2_func_pane_cp07

0xdc1f,	// (0x0004ab84) bg_vkb2_func_pane_cp11_ParamLimits

0xdc1f,	// (0x0004ab84) bg_vkb2_func_pane_cp11

0xdc34,	// (0x0004ab99) bg_vkb2_func_pane_cp12_ParamLimits

0xdc34,	// (0x0004ab99) bg_vkb2_func_pane_cp12

0xa19a,	// (0x000470ff) bg_vkb2_func_pane_cp09

0xd72a,	// (0x0004a68f) bg_vkb2_func_pane_g1

0xad32,	// (0x00047c97) bg_vkb2_func_pane_g2

0xd732,	// (0x0004a697) bg_vkb2_func_pane_g3

0xd73a,	// (0x0004a69f) bg_vkb2_func_pane_g4

0xd96c,	// (0x0004a8d1) bg_vkb2_func_pane_g5

0xd752,	// (0x0004a6b7) bg_vkb2_func_pane_g6

0xd75a,	// (0x0004a6bf) bg_vkb2_func_pane_g7

0xd74a,	// (0x0004a6af) bg_vkb2_func_pane_g8

0xad12,	// (0x00047c77) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0004ca8a) bg_vkb2_func_pane_g

0x85c4,	// (0x00045529) blid2_tripm_pane_g6_ParamLimits

0x85c4,	// (0x00045529) blid2_tripm_pane_g6

0xd644,	// (0x0004a5a9) mp4_progress_pane_g1

0x861e,	// (0x00045583) blid2_tripm_values_pane_ParamLimits

0x861e,	// (0x00045583) blid2_tripm_values_pane

0x86db,	// (0x00045640) blid2_tripm_values_pane_t1

0x86e9,	// (0x0004564e) blid2_tripm_values_pane_t2

0x86f7,	// (0x0004565c) blid2_tripm_values_pane_t3

0x8705,	// (0x0004566a) blid2_tripm_values_pane_t4

0x8713,	// (0x00045678) blid2_tripm_values_pane_t5

0x8721,	// (0x00045686) blid2_tripm_values_pane_t6

0x872f,	// (0x00045694) blid2_tripm_values_pane_t7

0x873d,	// (0x000456a2) blid2_tripm_values_pane_t8

0x874b,	// (0x000456b0) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0004ca9d) blid2_tripm_values_pane_t

0x328a,	// (0x000401ef) call_video_pane_t1_ParamLimits

0x32ab,	// (0x00040210) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0004c1cf) call_video_pane_t_ParamLimits

0x10e7,	// (0x0003e04c) msg_header_pane_g1_ParamLimits

0xb6ce,	// (0x00048633) msg_header_pane_g2_ParamLimits

0xb6ce,	// (0x00048633) msg_header_pane_g2

0x0001,

0xf484,	// (0x0004c3e9) msg_header_pane_g_ParamLimits

0xf484,	// (0x0004c3e9) msg_header_pane_g

0xa90b,	// (0x00047870) main_clock2_pane_ParamLimits

0x66da,	// (0x0004363f) grid_clock2_toolbar_pane_ParamLimits

0x66da,	// (0x0004363f) grid_clock2_toolbar_pane

0x66da,	// (0x0004363f) listscroll_clock2_pane_ParamLimits

0x66da,	// (0x0004363f) listscroll_clock2_pane

0x678a,	// (0x000436ef) main_clock2_pane_t3_ParamLimits

0x678a,	// (0x000436ef) main_clock2_pane_t3

0x679c,	// (0x00043701) main_clock2_pane_t4_ParamLimits

0x679c,	// (0x00043701) main_clock2_pane_t4

0xdd39,	// (0x0004ac9e) cell_clock2_toolbar_pane

0xdd41,	// (0x0004aca6) cell_clock2_toolbar_pane_cp01

0xdd41,	// (0x0004aca6) cell_clock2_toolbar_pane_cp02

0xdd49,	// (0x0004acae) cell_clock2_toolbar_pane_cp03

0xdd51,	// (0x0004acb6) list_clock2_pane

0xb30c,	// (0x00048271) scroll_pane_cp10

0xdd59,	// (0x0004acbe) list_single_clock2_pane_ParamLimits

0xdd59,	// (0x0004acbe) list_single_clock2_pane

0xaad0,	// (0x00047a35) list_highlight_pane_cp08

0xdd66,	// (0x0004accb) list_single_clock2_pane_t1

0xdd74,	// (0x0004acd9) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0004cab0) list_single_clock2_pane_t

0xa19a,	// (0x000470ff) bg_button_pane_cp10

0xdd82,	// (0x0004ace7) cell_clock2_toolbar_pane_g1

0x4c47,	// (0x00041bac) aid_main_viewer_pane_g1_ParamLimits

0x4c47,	// (0x00041bac) aid_main_viewer_pane_g1

0x4c53,	// (0x00041bb8) aid_main_viewer_pane_g2_ParamLimits

0x4c53,	// (0x00041bb8) aid_main_viewer_pane_g2

0x4c5f,	// (0x00041bc4) aid_main_viewer_pane_g3_ParamLimits

0x4c5f,	// (0x00041bc4) aid_main_viewer_pane_g3

0x4c70,	// (0x00041bd5) aid_main_viewer_pane_g4_ParamLimits

0x4c70,	// (0x00041bd5) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0004c3fa) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0004c3fa) aid_main_viewer_pane_g

0x53f0,	// (0x00042355) main_calc_pane_ParamLimits

0x53fd,	// (0x00042362) main_dialer2_pane_ParamLimits

0xa19a,	// (0x000470ff) main_cam6_pane

0xa19a,	// (0x000470ff) main_vid6_pane

0x66e6,	// (0x0004364b) listscroll_gen_pane_cp06_ParamLimits

0x66e6,	// (0x0004364b) listscroll_gen_pane_cp06

0x67ae,	// (0x00043713) main_clock2_pane_t5_ParamLimits

0x67ae,	// (0x00043713) main_clock2_pane_t5

0x67fb,	// (0x00043760) aid_call2_pane_cp10_ParamLimits

0x680d,	// (0x00043772) aid_call_pane_cp10_ParamLimits

0xb38a,	// (0x000482ef) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb38a,	// (0x000482ef) popup_clock_analogue_window_cp10_g2_ParamLimits

0x681f,	// (0x00043784) popup_clock_analogue_window_cp10_g3_ParamLimits

0x681f,	// (0x00043784) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb38a,	// (0x000482ef) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0004c735) popup_clock_analogue_window_cp10_g_ParamLimits

0x6835,	// (0x0004379a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7047,	// (0x00043fac) cell_dialer2_keypad_pane_g2_ParamLimits

0x7047,	// (0x00043fac) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004c81f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004c81f) cell_dialer2_keypad_pane_g

0x7063,	// (0x00043fc8) cell_dialer2_keypad_pane_t1

0x7aee,	// (0x00044a53) main_cset_text2_pane_ParamLimits

0x7aee,	// (0x00044a53) main_cset_text2_pane

0xdb87,	// (0x0004aaec) area_vitu2_query_pane_g1_ParamLimits

0x1490,	// (0x0003e3f5) area_vitu2_query_pane_g2_ParamLimits

0xfa68,	// (0x0004c9cd) area_vitu2_query_pane_g_ParamLimits

0x1541,	// (0x0003e4a6) area_vitu2_query_pane_t7_ParamLimits

0x1541,	// (0x0003e4a6) area_vitu2_query_pane_t7

0x829d,	// (0x00045202) bg_button_pane_cp018_ParamLimits

0x82ab,	// (0x00045210) bg_button_pane_cp021_ParamLimits

0x1565,	// (0x0003e4ca) bg_button_pane_cp022_ParamLimits

0x1565,	// (0x0003e4ca) bg_vkb2_func_pane_cp08_ParamLimits

0x829d,	// (0x00045202) bg_vkb2_func_pane_cp06_ParamLimits

0x82ab,	// (0x00045210) bg_vkb2_func_pane_cp07_ParamLimits

0x1576,	// (0x0003e4db) input_focus_pane_cp09_ParamLimits

0x8759,	// (0x000456be) cam6_autofocus_pane_ParamLimits

0x8759,	// (0x000456be) cam6_autofocus_pane

0x877b,	// (0x000456e0) cam6_image_uncrop_pane_ParamLimits

0x877b,	// (0x000456e0) cam6_image_uncrop_pane

0x87a8,	// (0x0004570d) cam6_indi_pane_ParamLimits

0x87a8,	// (0x0004570d) cam6_indi_pane

0x87c2,	// (0x00045727) cam6_mode_pane_ParamLimits

0x87c2,	// (0x00045727) cam6_mode_pane

0x87d6,	// (0x0004573b) cam6_timer_pane_ParamLimits

0x87d6,	// (0x0004573b) cam6_timer_pane

0x87e2,	// (0x00045747) cam6_zoom_pane_ParamLimits

0x87e2,	// (0x00045747) cam6_zoom_pane

0x87fa,	// (0x0004575f) cam6_mode_pane_g1_ParamLimits

0x87fa,	// (0x0004575f) cam6_mode_pane_g1

0x8806,	// (0x0004576b) cam6_mode_pane_g2_ParamLimits

0x8806,	// (0x0004576b) cam6_mode_pane_g2

0x8812,	// (0x00045777) cam6_mode_pane_g3_ParamLimits

0x8812,	// (0x00045777) cam6_mode_pane_g3

0x881e,	// (0x00045783) cam6_mode_pane_g4_ParamLimits

0x881e,	// (0x00045783) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0004cab5) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0004cab5) cam6_mode_pane_g

0xdc89,	// (0x0004abee) bg_tb_trans_pane_cp08_ParamLimits

0xdc89,	// (0x0004abee) bg_tb_trans_pane_cp08

0xdd8a,	// (0x0004acef) cam6_battery_pane_ParamLimits

0xdd8a,	// (0x0004acef) cam6_battery_pane

0xdda0,	// (0x0004ad05) cam6_indi_pane_g1_ParamLimits

0xdda0,	// (0x0004ad05) cam6_indi_pane_g1

0xddb2,	// (0x0004ad17) cam6_indi_pane_g2_ParamLimits

0xddb2,	// (0x0004ad17) cam6_indi_pane_g2

0xddc4,	// (0x0004ad29) cam6_indi_pane_g3_ParamLimits

0xddc4,	// (0x0004ad29) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0004cabe) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0004cabe) cam6_indi_pane_g

0xddd6,	// (0x0004ad3b) cam6_indi_pane_t1_ParamLimits

0xddd6,	// (0x0004ad3b) cam6_indi_pane_t1

0x75e9,	// (0x0004454e) cam6_autofocus_pane_g1

0x75f1,	// (0x00044556) cam6_autofocus_pane_g2

0x75f9,	// (0x0004455e) cam6_autofocus_pane_g3

0x7601,	// (0x00044566) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0004cac5) cam6_autofocus_pane_g

0xddfc,	// (0x0004ad61) cam6_timer_pane_g1

0xde04,	// (0x0004ad69) cam6_timer_pane_t1

0xde12,	// (0x0004ad77) cam6_zoom_cont_pane

0xde1a,	// (0x0004ad7f) cam6_zoom_pane_g1

0xde22,	// (0x0004ad87) cam6_zoom_pane_g2

0x882a,	// (0x0004578f) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0004cace) cam6_zoom_pane_g

0xcd53,	// (0x00049cb8) cam6_battery_pane_g1

0xcd53,	// (0x00049cb8) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0004c63d) cam6_battery_pane_g

0xde2a,	// (0x0004ad8f) cam6_zoom_cont_pane_g1

0xde33,	// (0x0004ad98) cam6_zoom_cont_pane_g2

0xde3c,	// (0x0004ada1) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0004cad5) cam6_zoom_cont_pane_g

0x8847,	// (0x000457ac) cam6_mode_pane_cp_ParamLimits

0x8847,	// (0x000457ac) cam6_mode_pane_cp

0x87e2,	// (0x00045747) cam6_zoom_pane_cp_ParamLimits

0x87e2,	// (0x00045747) cam6_zoom_pane_cp

0x885b,	// (0x000457c0) vid6_image_uncrop_cif_pane_ParamLimits

0x885b,	// (0x000457c0) vid6_image_uncrop_cif_pane

0x8887,	// (0x000457ec) vid6_image_uncrop_nhd_pane_ParamLimits

0x8887,	// (0x000457ec) vid6_image_uncrop_nhd_pane

0x877b,	// (0x000456e0) vid6_image_uncrop_vga_pane_ParamLimits

0x877b,	// (0x000456e0) vid6_image_uncrop_vga_pane

0x88a4,	// (0x00045809) vid6_image_uncrop_wvga_pane_ParamLimits

0x88a4,	// (0x00045809) vid6_image_uncrop_wvga_pane

0x88c1,	// (0x00045826) vid6_indi_pane_ParamLimits

0x88c1,	// (0x00045826) vid6_indi_pane

0xdc89,	// (0x0004abee) bg_tb_trans_pane_cp09_ParamLimits

0xdc89,	// (0x0004abee) bg_tb_trans_pane_cp09

0xde54,	// (0x0004adb9) cam6_battery_pane_cp_ParamLimits

0xde54,	// (0x0004adb9) cam6_battery_pane_cp

0xde60,	// (0x0004adc5) vid6_indi_pane_g1_ParamLimits

0xde60,	// (0x0004adc5) vid6_indi_pane_g1

0xde72,	// (0x0004add7) vid6_indi_pane_g2_ParamLimits

0xde72,	// (0x0004add7) vid6_indi_pane_g2

0xde84,	// (0x0004ade9) vid6_indi_pane_g3_ParamLimits

0xde84,	// (0x0004ade9) vid6_indi_pane_g3

0xde99,	// (0x0004adfe) vid6_indi_pane_g4_ParamLimits

0xde99,	// (0x0004adfe) vid6_indi_pane_g4

0xdeae,	// (0x0004ae13) vid6_indi_pane_g5_ParamLimits

0xdeae,	// (0x0004ae13) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0004cadc) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0004cadc) vid6_indi_pane_g

0xdec8,	// (0x0004ae2d) vid6_indi_pane_t1_ParamLimits

0xdec8,	// (0x0004ae2d) vid6_indi_pane_t1

0xdede,	// (0x0004ae43) vid6_indi_pane_t2_ParamLimits

0xdede,	// (0x0004ae43) vid6_indi_pane_t2

0xdf06,	// (0x0004ae6b) vid6_indi_pane_t3_ParamLimits

0xdf06,	// (0x0004ae6b) vid6_indi_pane_t3

0xdf2e,	// (0x0004ae93) vid6_indi_pane_t4_ParamLimits

0xdf2e,	// (0x0004ae93) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0004cae7) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0004cae7) vid6_indi_pane_t

0xdf52,	// (0x0004aeb7) wait_bar_pane_cp08

0x88e6,	// (0x0004584b) main_cset_text2_pane_t1_ParamLimits

0x88e6,	// (0x0004584b) main_cset_text2_pane_t1

0x8832,	// (0x00045797) listscroll_gen_pane_cp06_t1_ParamLimits

0x8832,	// (0x00045797) listscroll_gen_pane_cp06_t1

0xa19a,	// (0x000470ff) main_cam6_set_pane

0xcfb6,	// (0x00049f1b) bg_tb_trans_pane_cp06_ParamLimits

0x7499,	// (0x000443fe) cam4_indicators_pane_g1_ParamLimits

0x74aa,	// (0x0004440f) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004c85c) cam4_indicators_pane_g_ParamLimits

0x74c8,	// (0x0004442d) cam4_indicators_pane_t1_ParamLimits

0xb096,	// (0x00047ffb) bg_tb_trans_pane_cp07_ParamLimits

0x757b,	// (0x000444e0) vid4_indicators_pane_g1_ParamLimits

0x758f,	// (0x000444f4) vid4_indicators_pane_g2_ParamLimits

0x75a3,	// (0x00044508) vid4_indicators_pane_g3_ParamLimits

0x75b4,	// (0x00044519) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004c86e) vid4_indicators_pane_g_ParamLimits

0x75d2,	// (0x00044537) vid4_indicators_pane_t1_ParamLimits

0x83d7,	// (0x0004533c) vid4_progress_pane_g1_ParamLimits

0x83e7,	// (0x0004534c) vid4_progress_pane_g2_ParamLimits

0x83f7,	// (0x0004535c) vid4_progress_pane_g3_ParamLimits

0x8409,	// (0x0004536e) vid4_progress_pane_g4_ParamLimits

0xfab3,	// (0x0004ca18) vid4_progress_pane_g_ParamLimits

0x8421,	// (0x00045386) vid4_progress_pane_t1_ParamLimits

0x8437,	// (0x0004539c) vid4_progress_pane_t2_ParamLimits

0x844c,	// (0x000453b1) vid4_progress_pane_t3_ParamLimits

0xfabe,	// (0x0004ca23) vid4_progress_pane_t_ParamLimits

0x8461,	// (0x000453c6) wait_bar_pane_cp07_ParamLimits

0x8919,	// (0x0004587e) main_cam6_set_pane_g2_ParamLimits

0x8919,	// (0x0004587e) main_cam6_set_pane_g2

0x8925,	// (0x0004588a) main_cset6_listscroll_pane_ParamLimits

0x8925,	// (0x0004588a) main_cset6_listscroll_pane

0x8950,	// (0x000458b5) main_cset6_slider_pane_ParamLimits

0x8950,	// (0x000458b5) main_cset6_slider_pane

0x895c,	// (0x000458c1) main_cset6_text2_pane_ParamLimits

0x895c,	// (0x000458c1) main_cset6_text2_pane

0xdf61,	// (0x0004aec6) main_cset6_text_pane

0xdf69,	// (0x0004aece) main_cset_list_pane_copy1_ParamLimits

0xdf69,	// (0x0004aece) main_cset_list_pane_copy1

0xdf79,	// (0x0004aede) scroll_pane_cp028_copy1

0x896f,	// (0x000458d4) cset_list_set_pane_copy1

0x8982,	// (0x000458e7) aid_position_infowindow_above_copy1

0x898a,	// (0x000458ef) aid_position_infowindow_below_copy1

0x15c6,	// (0x0003e52b) cset_list_set_pane_g1_copy1

0x1303,	// (0x0003e268) cset_list_set_pane_g3_copy1_ParamLimits

0x1303,	// (0x0003e268) cset_list_set_pane_g3_copy1

0x1312,	// (0x0003e277) cset_list_set_pane_t1_copy1_ParamLimits

0x1312,	// (0x0003e277) cset_list_set_pane_t1_copy1

0xb096,	// (0x00047ffb) list_highlight_pane_cp021_copy1_ParamLimits

0xb096,	// (0x00047ffb) list_highlight_pane_cp021_copy1

0xdf82,	// (0x0004aee7) cset6_slider_pane_ParamLimits

0xdf82,	// (0x0004aee7) cset6_slider_pane

0xdfae,	// (0x0004af13) main_cset6_slider_pane_g1_ParamLimits

0xdfae,	// (0x0004af13) main_cset6_slider_pane_g1

0x8992,	// (0x000458f7) main_cset6_slider_pane_g2_ParamLimits

0x8992,	// (0x000458f7) main_cset6_slider_pane_g2

0xdfff,	// (0x0004af64) main_cset6_slider_pane_g3_ParamLimits

0xdfff,	// (0x0004af64) main_cset6_slider_pane_g3

0x89ba,	// (0x0004591f) main_cset6_slider_pane_g4_ParamLimits

0x89ba,	// (0x0004591f) main_cset6_slider_pane_g4

0x89c6,	// (0x0004592b) main_cset6_slider_pane_g5_ParamLimits

0x89c6,	// (0x0004592b) main_cset6_slider_pane_g5

0xd859,	// (0x0004a7be) main_cset6_slider_pane_g7_ParamLimits

0xd859,	// (0x0004a7be) main_cset6_slider_pane_g7

0xd865,	// (0x0004a7ca) main_cset6_slider_pane_g8_ParamLimits

0xd865,	// (0x0004a7ca) main_cset6_slider_pane_g8

0x89d4,	// (0x00045939) main_cset6_slider_pane_g9_ParamLimits

0x89d4,	// (0x00045939) main_cset6_slider_pane_g9

0x89e0,	// (0x00045945) main_cset6_slider_pane_g10_ParamLimits

0x89e0,	// (0x00045945) main_cset6_slider_pane_g10

0x89ec,	// (0x00045951) main_cset6_slider_pane_g11_ParamLimits

0x89ec,	// (0x00045951) main_cset6_slider_pane_g11

0x89f8,	// (0x0004595d) main_cset6_slider_pane_g12_ParamLimits

0x89f8,	// (0x0004595d) main_cset6_slider_pane_g12

0x8a04,	// (0x00045969) main_cset6_slider_pane_g13_ParamLimits

0x8a04,	// (0x00045969) main_cset6_slider_pane_g13

0x8a10,	// (0x00045975) main_cset6_slider_pane_g14_ParamLimits

0x8a10,	// (0x00045975) main_cset6_slider_pane_g14

0x8a1c,	// (0x00045981) main_cset6_slider_pane_g15_ParamLimits

0x8a1c,	// (0x00045981) main_cset6_slider_pane_g15

0x8a34,	// (0x00045999) main_cset6_slider_pane_g16_ParamLimits

0x8a34,	// (0x00045999) main_cset6_slider_pane_g16

0x8a42,	// (0x000459a7) main_cset6_slider_pane_g17_ParamLimits

0x8a42,	// (0x000459a7) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0004caf0) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0004caf0) main_cset6_slider_pane_g

0xe00b,	// (0x0004af70) main_cset6_slider_pane_t1_ParamLimits

0xe00b,	// (0x0004af70) main_cset6_slider_pane_t1

0x8a68,	// (0x000459cd) main_cset6_slider_pane_t2_ParamLimits

0x8a68,	// (0x000459cd) main_cset6_slider_pane_t2

0x8a93,	// (0x000459f8) main_cset6_slider_pane_t3_ParamLimits

0x8a93,	// (0x000459f8) main_cset6_slider_pane_t3

0x8abe,	// (0x00045a23) main_cset6_slider_pane_t4_ParamLimits

0x8abe,	// (0x00045a23) main_cset6_slider_pane_t4

0x8ae9,	// (0x00045a4e) main_cset6_slider_pane_t5_ParamLimits

0x8ae9,	// (0x00045a4e) main_cset6_slider_pane_t5

0xe04c,	// (0x0004afb1) main_cset6_slider_pane_t7_ParamLimits

0xe04c,	// (0x0004afb1) main_cset6_slider_pane_t7

0x8b16,	// (0x00045a7b) main_cset6_slider_pane_t8_ParamLimits

0x8b16,	// (0x00045a7b) main_cset6_slider_pane_t8

0x8b3a,	// (0x00045a9f) main_cset6_slider_pane_t9_ParamLimits

0x8b3a,	// (0x00045a9f) main_cset6_slider_pane_t9

0x8b5e,	// (0x00045ac3) main_cset6_slider_pane_t10_ParamLimits

0x8b5e,	// (0x00045ac3) main_cset6_slider_pane_t10

0x8b82,	// (0x00045ae7) main_cset6_slider_pane_t11_ParamLimits

0x8b82,	// (0x00045ae7) main_cset6_slider_pane_t11

0xe082,	// (0x0004afe7) main_cset6_slider_pane_t14_ParamLimits

0xe082,	// (0x0004afe7) main_cset6_slider_pane_t14

0xe0bb,	// (0x0004b020) main_cset6_slider_pane_t15_ParamLimits

0xe0bb,	// (0x0004b020) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0004cb15) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0004cb15) main_cset6_slider_pane_t

0xdfe4,	// (0x0004af49) cset_slider_pane_g1_copy1

0xdfed,	// (0x0004af52) cset_slider_pane_g2_copy1

0xdff6,	// (0x0004af5b) cset_slider_pane_g3_copy1

0xa19a,	// (0x000470ff) bg_popup_sub_pane_cp011_copy1

0xe0f4,	// (0x0004b059) main_cset_text_pane_g1_copy1

0xd9bb,	// (0x0004a920) main_cset_text_pane_t1_copy1

0xd9c9,	// (0x0004a92e) main_cset_text_pane_t2_copy1

0xd9d7,	// (0x0004a93c) main_cset_text_pane_t3_copy1

0xd9e5,	// (0x0004a94a) main_cset_text_pane_t4_copy1

0xd9f3,	// (0x0004a958) main_cset_text_pane_t5_copy1

0xe0fc,	// (0x0004b061) main_cset_text_pane_t6_copy1

0xe10a,	// (0x0004b06f) main_cset_text_pane_t7_copy1

0x8ba6,	// (0x00045b0b) main_cset_text2_pane_t1_copy1

0xb096,	// (0x00047ffb) main_ncimui_pane

0x544e,	// (0x000423b3) popup_query_ncimui_window_ParamLimits

0x544e,	// (0x000423b3) popup_query_ncimui_window

0x11a8,	// (0x0003e10d) field_cale_ev2_pane_g4_ParamLimits

0x11a8,	// (0x0003e10d) field_cale_ev2_pane_g4

0x6d27,	// (0x00043c8c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6d27,	// (0x00043c8c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0004c7f6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0004c7f6) cell_video_dialer_keypad_pane_g

0x6d3f,	// (0x00043ca4) cell_video_dialer_keypad_pane_t1

0xa19a,	// (0x000470ff) bg_popup_window_pane_cp012

0xb1d9,	// (0x0004813e) heading_pane_cp06

0xe136,	// (0x0004b09b) ncim_query_content_pane

0xa19a,	// (0x000470ff) bg_popup_heading_pane_cp01

0xe13e,	// (0x0004b0a3) ncim_heading_pane_t1

0xe14c,	// (0x0004b0b1) ncim_indicator_popup_pane

0xe15e,	// (0x0004b0c3) ncim_query_button_pane

0xe172,	// (0x0004b0d7) ncim_query_content_pane_t1

0xe184,	// (0x0004b0e9) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0004cb59) ncim_query_content_pane_t

0xe1be,	// (0x0004b123) ncim_query_list_pane

0xe1d0,	// (0x0004b135) ncim_query_popup_pane

0xe14c,	// (0x0004b0b1) ncim_indicator_popup_pane_ParamLimits

0x8cf9,	// (0x00045c5e) ncim_query_content_pane_g1_ParamLimits

0x8cf9,	// (0x00045c5e) ncim_query_content_pane_g1

0xe172,	// (0x0004b0d7) ncim_query_content_pane_t1_ParamLimits

0xe184,	// (0x0004b0e9) ncim_query_content_pane_t2_ParamLimits

0x8d05,	// (0x00045c6a) ncim_query_content_pane_t3_ParamLimits

0x8d05,	// (0x00045c6a) ncim_query_content_pane_t3

0x8d22,	// (0x00045c87) ncim_query_content_pane_t4_ParamLimits

0x8d22,	// (0x00045c87) ncim_query_content_pane_t4

0x8d3f,	// (0x00045ca4) ncim_query_content_pane_t5_ParamLimits

0x8d3f,	// (0x00045ca4) ncim_query_content_pane_t5

0xe196,	// (0x0004b0fb) ncim_query_content_pane_t6_ParamLimits

0xe196,	// (0x0004b0fb) ncim_query_content_pane_t6

0xfbf4,	// (0x0004cb59) ncim_query_content_pane_t_ParamLimits

0xe1be,	// (0x0004b123) ncim_query_list_pane_ParamLimits

0xe1d0,	// (0x0004b135) ncim_query_popup_pane_ParamLimits

0xe1e4,	// (0x0004b149) wait_bar_pane_cp04

0xa19a,	// (0x000470ff) input_focus_pane_cp011

0xe1ec,	// (0x0004b151) ncim_query_popup_pane_t1

0xe1fa,	// (0x0004b15f) ncim_list_query_list_pane_ParamLimits

0xe1fa,	// (0x0004b15f) ncim_list_query_list_pane

0xa19a,	// (0x000470ff) bg_button_pane_cp027

0xe207,	// (0x0004b16c) ncim_query_button_pane_g1

0xa19a,	// (0x000470ff) list_highlight_pane_cp012

0xe211,	// (0x0004b176) ncim_list_query_list_pane_g1

0xe219,	// (0x0004b17e) ncim_list_query_list_pane_t1

0x74b9,	// (0x0004441e) cam4_indicators_pane_g3_ParamLimits

0x74b9,	// (0x0004441e) cam4_indicators_pane_g3

0x75c0,	// (0x00044525) vid4_indicators_pane_g5_ParamLimits

0x75c0,	// (0x00044525) vid4_indicators_pane_g5

0x8415,	// (0x0004537a) vid4_progress_pane_g5_ParamLimits

0x8415,	// (0x0004537a) vid4_progress_pane_g5

0x8be5,	// (0x00045b4a) main_ncimui_pane_g1

0x8c4d,	// (0x00045bb2) ncimui_group_query_pane_ParamLimits

0x8c4d,	// (0x00045bb2) ncimui_group_query_pane

0x8c95,	// (0x00045bfa) ncimui_list_pane_ParamLimits

0x8c95,	// (0x00045bfa) ncimui_list_pane

0x8cbc,	// (0x00045c21) ncimui_text_pane_ParamLimits

0x8cbc,	// (0x00045c21) ncimui_text_pane

0x8d5c,	// (0x00045cc1) ncimui_text_pane_t1_ParamLimits

0x8d5c,	// (0x00045cc1) ncimui_text_pane_t1

0xe227,	// (0x0004b18c) ncimui_list_single_graphic_pane_ParamLimits

0xe227,	// (0x0004b18c) ncimui_list_single_graphic_pane

0x8d7b,	// (0x00045ce0) ncimui_query_pane_ParamLimits

0x8d7b,	// (0x00045ce0) ncimui_query_pane

0xa19a,	// (0x000470ff) list_highlight_pane_cp013

0xe237,	// (0x0004b19c) ncim_list_query_list_pane_t1_copy1

0xe211,	// (0x0004b176) ncim_list_single_graphic_pane_g1

0x8d8e,	// (0x00045cf3) ncim_query_button_pane_cp01

0x8d9a,	// (0x00045cff) ncim_query_entry_pane_ParamLimits

0x8d9a,	// (0x00045cff) ncim_query_entry_pane

0x8dad,	// (0x00045d12) ncimui_query_pane_g1

0x8db9,	// (0x00045d1e) ncimui_query_pane_t1_ParamLimits

0x8db9,	// (0x00045d1e) ncimui_query_pane_t1

0xb096,	// (0x00047ffb) input_focus_pane_cp012

0xe245,	// (0x0004b1aa) ncim_query_entry_pane_t1

0xa90b,	// (0x00047870) main_im_pane_ParamLimits

0xb096,	// (0x00047ffb) main_mobtv_pane_ParamLimits

0xb096,	// (0x00047ffb) main_mobtv_pane

0x8a50,	// (0x000459b5) main_cset6_slider_pane_g18_ParamLimits

0x8a50,	// (0x000459b5) main_cset6_slider_pane_g18

0x8a5c,	// (0x000459c1) main_cset6_slider_pane_g19_ParamLimits

0x8a5c,	// (0x000459c1) main_cset6_slider_pane_g19

0xd70a,	// (0x0004a66f) bg_main_mobtv_pane_ParamLimits

0xd70a,	// (0x0004a66f) bg_main_mobtv_pane

0x8dd2,	// (0x00045d37) main_mobtv_info_pane

0x8ddd,	// (0x00045d42) main_mobtv_loading_pane_ParamLimits

0x8ddd,	// (0x00045d42) main_mobtv_loading_pane

0xe257,	// (0x0004b1bc) main_mobtv_pg_channel_list_pane

0xe261,	// (0x0004b1c6) main_mobtv_pg_hdr_pane

0x8dea,	// (0x00045d4f) main_mobtv_programe_curr_pane_ParamLimits

0x8dea,	// (0x00045d4f) main_mobtv_programe_curr_pane

0x8df7,	// (0x00045d5c) main_mobtv_programe_next_pane_ParamLimits

0x8df7,	// (0x00045d5c) main_mobtv_programe_next_pane

0xe26a,	// (0x0004b1cf) popup_mobtv_noti_window

0xcd53,	// (0x00049cb8) main_tv_pg_hdr_pane_g1

0xe272,	// (0x0004b1d7) main_tv_pg_hdr_pane_g2

0xe27a,	// (0x0004b1df) main_tv_pg_hdr_pane_g3

0xe282,	// (0x0004b1e7) main_tv_pg_hdr_pane_g4

0xe28a,	// (0x0004b1ef) main_tv_pg_hdr_pane_g5

0xe294,	// (0x0004b1f9) main_tv_pg_hdr_pane_g6

0xe29e,	// (0x0004b203) main_tv_pg_hdr_pane_g7

0xe2a8,	// (0x0004b20d) main_tv_pg_hdr_pane_g8

0xe2b2,	// (0x0004b217) main_tv_pg_hdr_pane_g9

0xe2bc,	// (0x0004b221) main_tv_pg_hdr_pane_g10

0xe2c6,	// (0x0004b22b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0004cb66) main_tv_pg_hdr_pane_g

0xe2d0,	// (0x0004b235) main_tv_pg_hdr_pane_t1

0xe2de,	// (0x0004b243) main_tv_pg_hdr_pane_t2

0xe2ec,	// (0x0004b251) main_tv_pg_hdr_pane_t3

0xe2fc,	// (0x0004b261) main_tv_pg_hdr_pane_t4

0xe31e,	// (0x0004b283) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0004cb7d) main_tv_pg_hdr_pane_t

0xe32e,	// (0x0004b293) single_mobtv_pg_channel_pane_ParamLimits

0xe32e,	// (0x0004b293) single_mobtv_pg_channel_pane

0xe340,	// (0x0004b2a5) single_mobtv_pg_channel_table_pane

0xe349,	// (0x0004b2ae) single_mobtv_pg_channel_thumb_pane

0xe352,	// (0x0004b2b7) single_tv_pg_channel_pane_g1

0xe35b,	// (0x0004b2c0) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0004cb88) single_tv_pg_channel_pane_g

0xcfb6,	// (0x00049f1b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfb6,	// (0x00049f1b) bg_single_mobtv_pg_channel_thumb_pane

0xe364,	// (0x0004b2c9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe364,	// (0x0004b2c9) single_mobtv_pg_channel_thumb_pane_g1

0xe372,	// (0x0004b2d7) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe372,	// (0x0004b2d7) single_mobtv_pg_channel_thumb_pane_g2

0xe37e,	// (0x0004b2e3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe37e,	// (0x0004b2e3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0004cb8d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0004cb8d) single_mobtv_pg_channel_thumb_pane_g

0xe38a,	// (0x0004b2ef) single_mobtv_pg_channel_thumb_pane_t1

0xe398,	// (0x0004b2fd) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0004cb94) single_mobtv_pg_channel_thumb_pane_t

0xcd53,	// (0x00049cb8) bg_single_mobtv_pg_channel_table_pane_g1

0xcd53,	// (0x00049cb8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0004c63d) bg_single_mobtv_pg_channel_table_pane_g

0xe3a6,	// (0x0004b30b) single_mobtv_pg_channel_table_pane_t1

0xe3b4,	// (0x0004b319) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0004cb99) single_mobtv_pg_channel_table_pane_t

0x8e0c,	// (0x00045d71) main_mobtv_info_pane_g1_ParamLimits

0x8e0c,	// (0x00045d71) main_mobtv_info_pane_g1

0x8e28,	// (0x00045d8d) main_mobtv_info_pane_t1_ParamLimits

0x8e28,	// (0x00045d8d) main_mobtv_info_pane_t1

0x8ea0,	// (0x00045e05) main_mobtv_info_pane_t2_ParamLimits

0x8ea0,	// (0x00045e05) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0004cba3) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0004cba3) main_mobtv_info_pane_t

0x8f2f,	// (0x00045e94) wait_bar_pane_cp05

0x8f41,	// (0x00045ea6) main_mobtv_loading_pane_g1_ParamLimits

0x8f41,	// (0x00045ea6) main_mobtv_loading_pane_g1

0x8f4f,	// (0x00045eb4) main_mobtv_loading_pane_g2_ParamLimits

0x8f4f,	// (0x00045eb4) main_mobtv_loading_pane_g2

0x8f5b,	// (0x00045ec0) main_mobtv_loading_pane_g3_ParamLimits

0x8f5b,	// (0x00045ec0) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0004cbaa) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0004cbaa) main_mobtv_loading_pane_g

0xe3c2,	// (0x0004b327) main_mobtv_loading_pane_t1_ParamLimits

0xe3c2,	// (0x0004b327) main_mobtv_loading_pane_t1

0xe3da,	// (0x0004b33f) main_mobtv_loading_pane_t2_ParamLimits

0xe3da,	// (0x0004b33f) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0004cbb1) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0004cbb1) main_mobtv_loading_pane_t

0x8f69,	// (0x00045ece) wait_bar_pane_cp06_ParamLimits

0x8f69,	// (0x00045ece) wait_bar_pane_cp06

0xe3fe,	// (0x0004b363) main_mobtv_programe_curr_pane_t1

0xe40c,	// (0x0004b371) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0004cbb6) main_mobtv_programe_curr_pane_t

0xe41a,	// (0x0004b37f) main_mobtv_programe_next_pane_t1

0xe428,	// (0x0004b38d) main_mobtv_programe_next_pane_t2

0xe436,	// (0x0004b39b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0004cbbb) main_mobtv_programe_next_pane_t

0xa19a,	// (0x000470ff) bg_popup_mobtv_noti_window_pane

0xe444,	// (0x0004b3a9) popup_mobtv_noti_window_g1

0xe44c,	// (0x0004b3b1) popup_mobtv_noti_window_t1

0xe45a,	// (0x0004b3bf) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0004cbc2) popup_mobtv_noti_window_t

0xcd53,	// (0x00049cb8) bg_popup_mobtv_noti_window_pane_g1

0xa19a,	// (0x000470ff) sc_clock_pane

0xa19a,	// (0x000470ff) main_fs_bigclock_pane

0x860c,	// (0x00045571) blid2_tripm_pane_t4_ParamLimits

0x860c,	// (0x00045571) blid2_tripm_pane_t4

0x8f75,	// (0x00045eda) sc_clock_pane_g1_ParamLimits

0x8f75,	// (0x00045eda) sc_clock_pane_g1

0x8f83,	// (0x00045ee8) sc_clock_pane_t1_ParamLimits

0x8f83,	// (0x00045ee8) sc_clock_pane_t1

0x8f96,	// (0x00045efb) sc_clock_pane_t2_ParamLimits

0x8f96,	// (0x00045efb) sc_clock_pane_t2

0x8fa8,	// (0x00045f0d) sc_clock_pane_t3_ParamLimits

0x8fa8,	// (0x00045f0d) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0004cbc7) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0004cbc7) sc_clock_pane_t

0x981a,	// (0x0004677f) main_fs_bigclock_indicator_pane_ParamLimits

0x981a,	// (0x0004677f) main_fs_bigclock_indicator_pane

0x902b,	// (0x00045f90) main_fs_bigclock_pane_g1_ParamLimits

0x902b,	// (0x00045f90) main_fs_bigclock_pane_g1

0x9826,	// (0x0004678b) main_fs_bigclock_pane_t1_ParamLimits

0x9826,	// (0x0004678b) main_fs_bigclock_pane_t1

0x9838,	// (0x0004679d) main_fs_bigclock_pane_t2_ParamLimits

0x9838,	// (0x0004679d) main_fs_bigclock_pane_t2

0x984c,	// (0x000467b1) main_fs_bigclock_pane_t3_ParamLimits

0x984c,	// (0x000467b1) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0004cdd1) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0004cdd1) main_fs_bigclock_pane_t

0xecb2,	// (0x0004bc17) main_fs_bigclock_indicator_pane_g1

0xe166,	// (0x0004b0cb) ncim_query_content_pane_g2_ParamLimits

0xe166,	// (0x0004b0cb) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0004cb54) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0004cb54) ncim_query_content_pane_g

0x8fbc,	// (0x00045f21) sc_clock_pane_t4_ParamLimits

0x8fbc,	// (0x00045f21) sc_clock_pane_t4

0xb096,	// (0x00047ffb) main_radioblah_pane

0x735c,	// (0x000442c1) cell_call4_button_pane_t1_copy1_ParamLimits

0x735c,	// (0x000442c1) cell_call4_button_pane_t1_copy1

0x8bff,	// (0x00045b64) main_ncimui_pane_t1_ParamLimits

0x8bff,	// (0x00045b64) main_ncimui_pane_t1

0x8c19,	// (0x00045b7e) main_ncimui_pane_t2_ParamLimits

0x8c19,	// (0x00045b7e) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0004cb4d) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0004cb4d) main_ncimui_pane_t

0xe59f,	// (0x0004b504) main_radioblah_anim_pane_ParamLimits

0xe59f,	// (0x0004b504) main_radioblah_anim_pane

0xe5b0,	// (0x0004b515) main_radioblah_info_pane_ParamLimits

0xe5b0,	// (0x0004b515) main_radioblah_info_pane

0xe5c4,	// (0x0004b529) main_radioblah_pane_t1_ParamLimits

0xe5c4,	// (0x0004b529) main_radioblah_pane_t1

0xe5e0,	// (0x0004b545) main_radioblah_pane_t2_ParamLimits

0xe5e0,	// (0x0004b545) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0004cbe8) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0004cbe8) main_radioblah_pane_t

0x9081,	// (0x00045fe6) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9081,	// (0x00045fe6) main_radioblah_rocker_ctrl_pane

0xe628,	// (0x0004b58d) main_radioblah_info_pane_t1_ParamLimits

0xe628,	// (0x0004b58d) main_radioblah_info_pane_t1

0x90c6,	// (0x0004602b) main_radioblah_info_pane_t2_ParamLimits

0x90c6,	// (0x0004602b) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0004cbf1) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0004cbf1) main_radioblah_info_pane_t

0xcd53,	// (0x00049cb8) main_radioblah_rocker_ctrl_pane_g1

0x9176,	// (0x000460db) main_radioblah_rocker_ctrl_pane_g2

0x917e,	// (0x000460e3) main_radioblah_rocker_ctrl_pane_g3

0x9186,	// (0x000460eb) main_radioblah_rocker_ctrl_pane_g4

0x918e,	// (0x000460f3) main_radioblah_rocker_ctrl_pane_g5

0x9196,	// (0x000460fb) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0004cbfa) main_radioblah_rocker_ctrl_pane_g

0x8ba6,	// (0x00045b0b) main_cset_text2_pane_t1_copy1_ParamLimits

0x73e7,	// (0x0004434c) cam4_image_uncrop_qvga_pane

0x752e,	// (0x00044493) vid4_image_uncrop_qcif_pane

0x879a,	// (0x000456ff) cam6_image_uncrop_qvga_pane_ParamLimits

0x879a,	// (0x000456ff) cam6_image_uncrop_qvga_pane

0xde44,	// (0x0004ada9) vid6_image_uncrop_qcif_pane_ParamLimits

0xde44,	// (0x0004ada9) vid6_image_uncrop_qcif_pane

0xa19a,	// (0x000470ff) bg_popup_preview_window_pane_cp03

0xe118,	// (0x0004b07d) list_cset_text2_pane

0xe120,	// (0x0004b085) main_cset6_text2_pane_g1

0xe128,	// (0x0004b08d) main_cset6_text2_pane_t1

0x919e,	// (0x00046103) list_cset_text2_pane_t1_ParamLimits

0x919e,	// (0x00046103) list_cset_text2_pane_t1

0xb096,	// (0x00047ffb) main_radioblah_pane_ParamLimits

0x8f1b,	// (0x00045e80) main_mobtv_info_pane_t3_ParamLimits

0x8f1b,	// (0x00045e80) main_mobtv_info_pane_t3

0x906f,	// (0x00045fd4) main_radioblah_pane_g1

0x909a,	// (0x00045fff) main_radioblah_info_pane_g1

0x911b,	// (0x00046080) main_radioblah_info_pane_t3_ParamLimits

0x911b,	// (0x00046080) main_radioblah_info_pane_t3

0x42ab,	// (0x00041210) highlight_cell_cale_month_pane_ParamLimits

0x42ab,	// (0x00041210) highlight_cell_cale_month_pane

0xa19a,	// (0x000470ff) main_phob_fisheye_pane

0xd0b2,	// (0x0004a017) scroll_pane_cp0031_ParamLimits

0xd0b2,	// (0x0004a017) scroll_pane_cp0031

0xdf52,	// (0x0004aeb7) wait_bar_pane_cp08_ParamLimits

0x896f,	// (0x000458d4) cset_list_set_pane_copy1_ParamLimits

0xe662,	// (0x0004b5c7) highlight_cell_cale_month_pane_g1

0x91bb,	// (0x00046120) highlight_cell_cale_month_pane_t1

0xdbdb,	// (0x0004ab40) list_gen_pane_cp01

0xd844,	// (0x0004a7a9) scroll_pane_01

0x91c9,	// (0x0004612e) list_single_double_fisheye_pane

0x16a6,	// (0x0003e60b) list_double_fisheye_pane_g1_ParamLimits

0x16a6,	// (0x0003e60b) list_double_fisheye_pane_g1

0x16b2,	// (0x0003e617) list_double_fisheye_pane_g2_ParamLimits

0x16b2,	// (0x0003e617) list_double_fisheye_pane_g2

0x91d2,	// (0x00046137) list_double_fisheye_pane_g3_ParamLimits

0x91d2,	// (0x00046137) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0004cc07) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0004cc07) list_double_fisheye_pane_g

0x16e3,	// (0x0003e648) list_double_fisheye_pane_t1_ParamLimits

0x16e3,	// (0x0003e648) list_double_fisheye_pane_t1

0x16fe,	// (0x0003e663) list_double_fisheye_pane_t2_ParamLimits

0x16fe,	// (0x0003e663) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0004cc12) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0004cc12) list_double_fisheye_pane_t

0xa19a,	// (0x000470ff) main_call5_pane

0x8fe2,	// (0x00045f47) sc_swipe_pane_ParamLimits

0x8fe2,	// (0x00045f47) sc_swipe_pane

0x91ea,	// (0x0004614f) call5_image_pane_ParamLimits

0x91ea,	// (0x0004614f) call5_image_pane

0x91fa,	// (0x0004615f) call5_swipe_1_pane_ParamLimits

0x91fa,	// (0x0004615f) call5_swipe_1_pane

0x9206,	// (0x0004616b) call5_swipe_2_pane_ParamLimits

0x9206,	// (0x0004616b) call5_swipe_2_pane

0x9220,	// (0x00046185) popup_call5_audio_first_window_ParamLimits

0x9220,	// (0x00046185) popup_call5_audio_first_window

0xcfb6,	// (0x00049f1b) call5_swipe_1_pane_g1_ParamLimits

0xcfb6,	// (0x00049f1b) call5_swipe_1_pane_g1

0xe66a,	// (0x0004b5cf) call5_swipe_1_pane_g2_ParamLimits

0xe66a,	// (0x0004b5cf) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0004cc17) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0004cc17) call5_swipe_1_pane_g

0xe676,	// (0x0004b5db) call5_swipe_1_pane_t1_ParamLimits

0xe676,	// (0x0004b5db) call5_swipe_1_pane_t1

0xcfb6,	// (0x00049f1b) call5_swipe_2_pane_g1_ParamLimits

0xcfb6,	// (0x00049f1b) call5_swipe_2_pane_g1

0xe68b,	// (0x0004b5f0) call5_swipe_2_pane_g2_ParamLimits

0xe68b,	// (0x0004b5f0) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0004cc1c) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0004cc1c) call5_swipe_2_pane_g

0xe697,	// (0x0004b5fc) call5_swipe_2_pane_t1_ParamLimits

0xe697,	// (0x0004b5fc) call5_swipe_2_pane_t1

0xe6ac,	// (0x0004b611) sc_swipe_pane_g1_ParamLimits

0xe6ac,	// (0x0004b611) sc_swipe_pane_g1

0xe6b9,	// (0x0004b61e) sc_swipe_pane_g2_ParamLimits

0xe6b9,	// (0x0004b61e) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0004cc21) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0004cc21) sc_swipe_pane_g

0xe6c5,	// (0x0004b62a) sc_swipe_pane_t1_ParamLimits

0xe6c5,	// (0x0004b62a) sc_swipe_pane_t1

0xa19a,	// (0x000470ff) main_cmail_launcher_pane

0x922e,	// (0x00046193) aid_size_cell_cmail_l_ParamLimits

0x922e,	// (0x00046193) aid_size_cell_cmail_l

0x923c,	// (0x000461a1) grid_cmail_l_pane_ParamLimits

0x923c,	// (0x000461a1) grid_cmail_l_pane

0x924c,	// (0x000461b1) cell_cmail_l_pane_ParamLimits

0x924c,	// (0x000461b1) cell_cmail_l_pane

0xe6da,	// (0x0004b63f) cell_cmail_l_pane_g1_ParamLimits

0xe6da,	// (0x0004b63f) cell_cmail_l_pane_g1

0xe6e6,	// (0x0004b64b) cell_cmail_l_pane_t1_ParamLimits

0xe6e6,	// (0x0004b64b) cell_cmail_l_pane_t1

0xe6fc,	// (0x0004b661) cell_cmail_l_pane_t2_ParamLimits

0xe6fc,	// (0x0004b661) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0004cc26) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0004cc26) cell_cmail_l_pane_t

0xb096,	// (0x00047ffb) grid_highlight_pane_cp018_ParamLimits

0xb096,	// (0x00047ffb) grid_highlight_pane_cp018

0x2342,	// (0x0003f2a7) main2_pane_ParamLimits

0x2342,	// (0x0003f2a7) main2_pane

0xa9a4,	// (0x00047909) popup_sp_fs_action_menu_bg_pane_g1

0xa9ac,	// (0x00047911) popup_sp_fs_action_menu_bg_pane_g2

0xa9b4,	// (0x00047919) popup_sp_fs_action_menu_bg_pane_g3

0xa9bc,	// (0x00047921) popup_sp_fs_action_menu_bg_pane_g4

0xa9c4,	// (0x00047929) popup_sp_fs_action_menu_bg_pane_g5

0xa9cc,	// (0x00047931) popup_sp_fs_action_menu_bg_pane_g6

0xa9d4,	// (0x00047939) popup_sp_fs_action_menu_bg_pane_g7

0xa9dc,	// (0x00047941) popup_sp_fs_action_menu_bg_pane_g8

0xa9e4,	// (0x00047949) popup_sp_fs_action_menu_bg_pane_g9

0xa9ec,	// (0x00047951) popup_sp_fs_action_menu_bg_pane_g10

0xa9ec,	// (0x00047951) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0004c0eb) popup_sp_fs_action_menu_bg_pane_g

0x0e65,	// (0x0003ddca) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x2_t3_g3_g1

0x0e71,	// (0x0003ddd6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0e71,	// (0x0003ddd6) list_medium_line_x2_t3_g3_g2

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0004c199) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0004c199) list_medium_line_x2_t3_g3_g

0x0e89,	// (0x0003ddee) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0e89,	// (0x0003ddee) list_medium_line_x2_t3_g3_t1

0x0e9e,	// (0x0003de03) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0e9e,	// (0x0003de03) list_medium_line_x2_t3_g3_t2

0x0eb0,	// (0x0003de15) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0eb0,	// (0x0003de15) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0004c1a0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0004c1a0) list_medium_line_x2_t3_g3_t

0x0e65,	// (0x0003ddca) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x2_t3_g2_g1

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0004c1a7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0004c1a7) list_medium_line_x2_t3_g2_g

0x0ec5,	// (0x0003de2a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0ec5,	// (0x0003de2a) list_medium_line_x2_t3_g2_t1

0x0edb,	// (0x0003de40) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0edb,	// (0x0003de40) list_medium_line_x2_t3_g2_t2

0x0eed,	// (0x0003de52) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0eed,	// (0x0003de52) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0004c1ac) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0004c1ac) list_medium_line_x2_t3_g2_t

0x0e65,	// (0x0003ddca) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x2_t4_g4_g1

0x0f0a,	// (0x0003de6f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0f0a,	// (0x0003de6f) list_medium_line_x2_t4_g4_g2

0x0e71,	// (0x0003ddd6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0e71,	// (0x0003ddd6) list_medium_line_x2_t4_g4_g3

0x0f16,	// (0x0003de7b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0f16,	// (0x0003de7b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0004c1b3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0004c1b3) list_medium_line_x2_t4_g4_g

0x0f22,	// (0x0003de87) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0f22,	// (0x0003de87) list_medium_line_x2_t4_g4_t1

0x0f3c,	// (0x0003dea1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0f3c,	// (0x0003dea1) list_medium_line_x2_t4_g4_t2

0x0f52,	// (0x0003deb7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0f52,	// (0x0003deb7) list_medium_line_x2_t4_g4_t3

0x0f67,	// (0x0003decc) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0f67,	// (0x0003decc) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0004c1bc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0004c1bc) list_medium_line_x2_t4_g4_t

0x0e65,	// (0x0003ddca) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x2_t2_g4_g1

0x0f0a,	// (0x0003de6f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0f0a,	// (0x0003de6f) list_medium_line_x2_t2_g4_g2

0x0e71,	// (0x0003ddd6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0e71,	// (0x0003ddd6) list_medium_line_x2_t2_g4_g3

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0004c223) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0004c223) list_medium_line_x2_t2_g4_g

0x0f79,	// (0x0003dede) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0f79,	// (0x0003dede) list_medium_line_x2_t2_g4_t1

0x0eb0,	// (0x0003de15) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0eb0,	// (0x0003de15) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0004c22c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0004c22c) list_medium_line_x2_t2_g4_t

0x0e65,	// (0x0003ddca) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x2_t2_g3_g1

0x0e71,	// (0x0003ddd6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0e71,	// (0x0003ddd6) list_medium_line_x2_t2_g3_g2

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0004c199) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0004c199) list_medium_line_x2_t2_g3_g

0x0f8e,	// (0x0003def3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0f8e,	// (0x0003def3) list_medium_line_x2_t2_g3_t1

0x0eb0,	// (0x0003de15) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0eb0,	// (0x0003de15) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0004c231) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0004c231) list_medium_line_x2_t2_g3_t

0x4483,	// (0x000413e8) main_sp_fs_list_pane_ParamLimits

0x4483,	// (0x000413e8) main_sp_fs_list_pane

0x448f,	// (0x000413f4) sp_fs_scroll_pane_ParamLimits

0x448f,	// (0x000413f4) sp_fs_scroll_pane

0x0fa3,	// (0x0003df08) list_medium_line_x2_t3_t1

0x0fb3,	// (0x0003df18) list_medium_line_x2_t3_t2

0x0fc1,	// (0x0003df26) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0004c27c) list_medium_line_x2_t3_t

0x0fcf,	// (0x0003df34) list_medium_line_x3_t4_t1

0x0fdf,	// (0x0003df44) list_medium_line_x3_t4_t2

0x0fed,	// (0x0003df52) list_medium_line_x3_t4_t3

0x0fc1,	// (0x0003df26) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0004c283) list_medium_line_x3_t4_t

0x0ffb,	// (0x0003df60) list_medium_line_x4_t5_t1

0x100b,	// (0x0003df70) list_medium_line_x4_t5_t2

0x0fed,	// (0x0003df52) list_medium_line_x4_t5_t3

0x1019,	// (0x0003df7e) list_medium_line_x4_t5_t4

0x0fc1,	// (0x0003df26) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0004c28c) list_medium_line_x4_t5_t

0x0e65,	// (0x0003ddca) list_medium_line_t4_g4_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_t4_g4_g1

0x0f16,	// (0x0003de7b) list_medium_line_t4_g4_g2_ParamLimits

0x0f16,	// (0x0003de7b) list_medium_line_t4_g4_g2

0x1027,	// (0x0003df8c) list_medium_line_t4_g4_g3_ParamLimits

0x1027,	// (0x0003df8c) list_medium_line_t4_g4_g3

0x0e7d,	// (0x0003dde2) list_medium_line_t4_g4_g4_ParamLimits

0x0e7d,	// (0x0003dde2) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0004c297) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0004c297) list_medium_line_t4_g4_g

0x1033,	// (0x0003df98) list_medium_line_t4_g4_t1_ParamLimits

0x1033,	// (0x0003df98) list_medium_line_t4_g4_t1

0x1048,	// (0x0003dfad) list_medium_line_t4_g4_t2_ParamLimits

0x1048,	// (0x0003dfad) list_medium_line_t4_g4_t2

0x105d,	// (0x0003dfc2) list_medium_line_t4_g4_t3_ParamLimits

0x105d,	// (0x0003dfc2) list_medium_line_t4_g4_t3

0x0eb0,	// (0x0003de15) list_medium_line_t4_g4_t4_ParamLimits

0x0eb0,	// (0x0003de15) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0004c2a0) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0004c2a0) list_medium_line_t4_g4_t

0x459c,	// (0x00041501) chi_dic_find_pane_g1

0x540b,	// (0x00042370) main_tport_pane

0x1327,	// (0x0003e28c) list_medium_line_plain_t1

0x1335,	// (0x0003e29a) list_medium_line_t2_g2_g1_ParamLimits

0x1335,	// (0x0003e29a) list_medium_line_t2_g2_g1

0x1341,	// (0x0003e2a6) list_medium_line_t2_g2_g2_ParamLimits

0x1341,	// (0x0003e2a6) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004c965) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004c965) list_medium_line_t2_g2_g

0x134d,	// (0x0003e2b2) list_medium_line_t2_g2_t1_ParamLimits

0x134d,	// (0x0003e2b2) list_medium_line_t2_g2_t1

0x1367,	// (0x0003e2cc) list_medium_line_t2_g2_t2_ParamLimits

0x1367,	// (0x0003e2cc) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004c96a) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004c96a) list_medium_line_t2_g2_t

0x1587,	// (0x0003e4ec) aid_sp_fs_list_icon_a_sm

0x158f,	// (0x0003e4f4) aid_sp_fs_list_icon_d

0x1597,	// (0x0003e4fc) aid_sp_fs_text_primary

0xe8b0,	// (0x0004b815) aid_sp_fs_text_secondary

0x8474,	// (0x000453d9) list_medium_line

0x8474,	// (0x000453d9) list_medium_line_g2

0x8474,	// (0x000453d9) list_medium_line_g3

0x8474,	// (0x000453d9) list_medium_line_plain

0x8474,	// (0x000453d9) list_medium_line_plain_t2

0x8474,	// (0x000453d9) list_medium_line_plain_t3

0x8474,	// (0x000453d9) list_medium_line_right_icon

0x8474,	// (0x000453d9) list_medium_line_right_iconx2

0x8474,	// (0x000453d9) list_medium_line_t2

0x8474,	// (0x000453d9) list_medium_line_t2_g2

0x8474,	// (0x000453d9) list_medium_line_t2_g3

0x8474,	// (0x000453d9) list_medium_line_t2_right_icon

0x8474,	// (0x000453d9) list_medium_line_t2_right_iconx2

0x8474,	// (0x000453d9) list_medium_line_t3

0x8474,	// (0x000453d9) list_medium_line_t3_g2

0x8474,	// (0x000453d9) list_medium_line_t3_g3

0x8474,	// (0x000453d9) list_medium_line_t3_right_iconx2

0x15a0,	// (0x0003e505) list_medium_line_t4_g4

0x847d,	// (0x000453e2) list_medium_line_x2

0x847d,	// (0x000453e2) list_medium_line_x2_t2_g2

0x847d,	// (0x000453e2) list_medium_line_x2_t2_g3

0x847d,	// (0x000453e2) list_medium_line_x2_t2_g4

0x847d,	// (0x000453e2) list_medium_line_x2_t3

0x847d,	// (0x000453e2) list_medium_line_x2_t3_g2

0x847d,	// (0x000453e2) list_medium_line_x2_t3_g3

0x847d,	// (0x000453e2) list_medium_line_x2_t3_g4

0x847d,	// (0x000453e2) list_medium_line_x2_t4_g2

0x847d,	// (0x000453e2) list_medium_line_x2_t4_g4

0x15a9,	// (0x0003e50e) list_medium_line_x3

0x15a9,	// (0x0003e50e) list_medium_line_x3_t4

0x15a9,	// (0x0003e50e) list_medium_line_x3_t4_g4

0x15a0,	// (0x0003e505) list_medium_line_x4_t4

0x15a0,	// (0x0003e505) list_medium_line_x4_t4_g7

0x15a0,	// (0x0003e505) list_medium_line_x4_t5

0x15b2,	// (0x0003e517) list_single_fs_dyc_pane_ParamLimits

0x15b2,	// (0x0003e517) list_single_fs_dyc_pane

0x0e65,	// (0x0003ddca) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x4_t4_g7_g1

0x15ce,	// (0x0003e533) list_medium_line_x4_t4_g7_g2_ParamLimits

0x15ce,	// (0x0003e533) list_medium_line_x4_t4_g7_g2

0x15da,	// (0x0003e53f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x15da,	// (0x0003e53f) list_medium_line_x4_t4_g7_g3

0x15e9,	// (0x0003e54e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x15e9,	// (0x0003e54e) list_medium_line_x4_t4_g7_g4

0x15f5,	// (0x0003e55a) list_medium_line_x4_t4_g7_g5_ParamLimits

0x15f5,	// (0x0003e55a) list_medium_line_x4_t4_g7_g5

0x1604,	// (0x0003e569) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1604,	// (0x0003e569) list_medium_line_x4_t4_g7_g6

0x1613,	// (0x0003e578) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1613,	// (0x0003e578) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0004cb2e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0004cb2e) list_medium_line_x4_t4_g7_g

0x161f,	// (0x0003e584) list_medium_line_x4_t4_g7_t1_ParamLimits

0x161f,	// (0x0003e584) list_medium_line_x4_t4_g7_t1

0x1634,	// (0x0003e599) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1634,	// (0x0003e599) list_medium_line_x4_t4_g7_t2

0x1649,	// (0x0003e5ae) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1649,	// (0x0003e5ae) list_medium_line_x4_t4_g7_t3

0x165e,	// (0x0003e5c3) list_medium_line_x4_t4_g7_t4_ParamLimits

0x165e,	// (0x0003e5c3) list_medium_line_x4_t4_g7_t4

0x1670,	// (0x0003e5d5) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1670,	// (0x0003e5d5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0004cb3d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0004cb3d) list_medium_line_x4_t4_g7_t

0x1682,	// (0x0003e5e7) list_single_dyc_row_pane_ParamLimits

0x1682,	// (0x0003e5e7) list_single_dyc_row_pane

0x91de,	// (0x00046143) call5_gesture_pane_ParamLimits

0x91de,	// (0x00046143) call5_gesture_pane

0x9212,	// (0x00046177) call5_windows_pane_ParamLimits

0x9212,	// (0x00046177) call5_windows_pane

0x9265,	// (0x000461ca) call5_swipe_1_pane_cp_ParamLimits

0x9265,	// (0x000461ca) call5_swipe_1_pane_cp

0x9271,	// (0x000461d6) call5_swipe_2_pane_cp_ParamLimits

0x9271,	// (0x000461d6) call5_swipe_2_pane_cp

0xaad0,	// (0x00047a35) call5_image_pane_cp

0x927d,	// (0x000461e2) popup_call5_audio_first_window_cp_ParamLimits

0x927d,	// (0x000461e2) popup_call5_audio_first_window_cp

0xe6ac,	// (0x0004b611) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6ac,	// (0x0004b611) call5_swipe_1_pane_g1_cp

0xe719,	// (0x0004b67e) call5_swipe_1_pane_g2_cp

0xe6c5,	// (0x0004b62a) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6c5,	// (0x0004b62a) call5_swipe_1_pane_t1_cp

0xe6ac,	// (0x0004b611) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6ac,	// (0x0004b611) call5_swipe_2_pane_g1_cp

0xe721,	// (0x0004b686) call5_swipe_2_pane_g2_cp

0xe729,	// (0x0004b68e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe729,	// (0x0004b68e) call5_swipe_2_pane_t1_cp

0xb096,	// (0x00047ffb) main_sp_fs_email_pane

0xe73e,	// (0x0004b6a3) main_sp_fs_listscroll_pane_te

0x1720,	// (0x0003e685) popup_sp_fs_action_menu_pane_ParamLimits

0x1720,	// (0x0003e685) popup_sp_fs_action_menu_pane

0xcd53,	// (0x00049cb8) bg_sp_fs_ctrlbar_pane_g1

0xe747,	// (0x0004b6ac) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe750,	// (0x0004b6b5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe759,	// (0x0004b6be) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd53,	// (0x00049cb8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0004cc2b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb38,	// (0x00049a9d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb38,	// (0x00049a9d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe762,	// (0x0004b6c7) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe762,	// (0x0004b6c7) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe76e,	// (0x0004b6d3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe76e,	// (0x0004b6d3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0004cc34) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0004cc34) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe77a,	// (0x0004b6df) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe77a,	// (0x0004b6df) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1762,	// (0x0003e6c7) list_medium_line_t2_right_icon_g1

0x176a,	// (0x0003e6cf) list_medium_line_t2_right_icon_t1

0x177a,	// (0x0003e6df) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0004cc39) list_medium_line_t2_right_icon_t

0xc94b,	// (0x000498b0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc94b,	// (0x000498b0) bg_sp_fs_ctrlbar_pane

0x92e2,	// (0x00046247) main_sp_fs_ctrlbar_button_pane_cp01

0x92ea,	// (0x0004624f) main_sp_fs_ctrlbar_ddmenu_pane

0xe7cc,	// (0x0004b731) main_sp_fs_ctrlbar_pane_g1

0xe7d8,	// (0x0004b73d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0004cc3e) main_sp_fs_ctrlbar_pane_g

0xe7e4,	// (0x0004b749) main_sp_fs_ctrlbar_pane_t1

0x92f4,	// (0x00046259) main_sp_fs_ctrlbar_pane

0x930a,	// (0x0004626f) main_sp_fs_listscroll_pane_te_cp01

0x1788,	// (0x0003e6ed) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1788,	// (0x0003e6ed) popup_sp_fs_action_menu_pane_cp01

0xb096,	// (0x00047ffb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb096,	// (0x00047ffb) bg_sp_fs_highlight_list_pane_cp01

0x17b2,	// (0x0003e717) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x17b2,	// (0x0003e717) sp_fs_action_menu_list_gene_pane_g1

0xe814,	// (0x0004b779) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe814,	// (0x0004b779) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0004cc48) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0004cc48) sp_fs_action_menu_list_gene_pane_g

0x17c1,	// (0x0003e726) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x17c1,	// (0x0003e726) sp_fs_action_menu_list_gene_pane_t1

0x17d9,	// (0x0003e73e) sp_fs_action_menu_list_gene_pane_ParamLimits

0x17d9,	// (0x0003e73e) sp_fs_action_menu_list_gene_pane

0xe821,	// (0x0004b786) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe821,	// (0x0004b786) popup_sp_fs_action_menu_bg_pane

0x17f8,	// (0x0003e75d) sp_fs_action_menu_list_pane_ParamLimits

0x17f8,	// (0x0003e75d) sp_fs_action_menu_list_pane

0xa69d,	// (0x00047602) sp_fs_scroll_pane_cp01_ParamLimits

0xa69d,	// (0x00047602) sp_fs_scroll_pane_cp01

0x1818,	// (0x0003e77d) list_medium_line_plain_t2_t1

0x1828,	// (0x0003e78d) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0004cc4d) list_medium_line_plain_t2_t

0x1836,	// (0x0003e79b) list_medium_line_plain_t3_t1

0x1846,	// (0x0003e7ab) list_medium_line_plain_t3_t2

0x1854,	// (0x0003e7b9) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0004cc52) list_medium_line_plain_t3_t

0x0e65,	// (0x0003ddca) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x2_t2_g2_g1

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0004c1a7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0004c1a7) list_medium_line_x2_t2_g2_g

0x1033,	// (0x0003df98) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1033,	// (0x0003df98) list_medium_line_x2_t2_g2_t1

0x0eb0,	// (0x0003de15) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0eb0,	// (0x0003de15) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0004cc59) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0004cc59) list_medium_line_x2_t2_g2_t

0x0e65,	// (0x0003ddca) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x2_t4_g2_g1

0x1862,	// (0x0003e7c7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1862,	// (0x0003e7c7) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0004cc5e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0004cc5e) list_medium_line_x2_t4_g2_g

0x1874,	// (0x0003e7d9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1874,	// (0x0003e7d9) list_medium_line_x2_t4_g2_t1

0x188e,	// (0x0003e7f3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x188e,	// (0x0003e7f3) list_medium_line_x2_t4_g2_t2

0x18a4,	// (0x0003e809) list_medium_line_x2_t4_g2_t3_ParamLimits

0x18a4,	// (0x0003e809) list_medium_line_x2_t4_g2_t3

0x0eb0,	// (0x0003de15) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0eb0,	// (0x0003de15) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0004cc63) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0004cc63) list_medium_line_x2_t4_g2_t

0x18b9,	// (0x0003e81e) list_medium_line_t3_right_iconx2_g1

0x1762,	// (0x0003e6c7) list_medium_line_t3_right_iconx2_g2

0x18c1,	// (0x0003e826) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0004cc6c) list_medium_line_t3_right_iconx2_g

0x18c9,	// (0x0003e82e) list_medium_line_t3_right_iconx2_t1

0x18d9,	// (0x0003e83e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0004cc73) list_medium_line_t3_right_iconx2_t

0x0e65,	// (0x0003ddca) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x3_t4_g4_g1

0x0e71,	// (0x0003ddd6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0e71,	// (0x0003ddd6) list_medium_line_x3_t4_g4_g2

0x0f16,	// (0x0003de7b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0f16,	// (0x0003de7b) list_medium_line_x3_t4_g4_g3

0x18e7,	// (0x0003e84c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x18e7,	// (0x0003e84c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0004cc78) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0004cc78) list_medium_line_x3_t4_g4_g

0x18f3,	// (0x0003e858) list_medium_line_x3_t4_g4_t1_ParamLimits

0x18f3,	// (0x0003e858) list_medium_line_x3_t4_g4_t1

0x190a,	// (0x0003e86f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x190a,	// (0x0003e86f) list_medium_line_x3_t4_g4_t2

0x1048,	// (0x0003dfad) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1048,	// (0x0003dfad) list_medium_line_x3_t4_g4_t3

0x191f,	// (0x0003e884) list_medium_line_x3_t4_g4_t4_ParamLimits

0x191f,	// (0x0003e884) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0004cc81) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0004cc81) list_medium_line_x3_t4_g4_t

0x193c,	// (0x0003e8a1) list_single_dyc_row_text_pane_t1_ParamLimits

0x193c,	// (0x0003e8a1) list_single_dyc_row_text_pane_t1

0x1973,	// (0x0003e8d8) list_single_dyc_row_text_pane_t2_ParamLimits

0x1973,	// (0x0003e8d8) list_single_dyc_row_text_pane_t2

0x19e9,	// (0x0003e94e) list_single_dyc_row_text_pane_t3_ParamLimits

0x19e9,	// (0x0003e94e) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0004cc8a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0004cc8a) list_single_dyc_row_text_pane_t

0x1aba,	// (0x0003ea1f) list_single_dyc_row_pane_g1_ParamLimits

0x1aba,	// (0x0003ea1f) list_single_dyc_row_pane_g1

0x1ac6,	// (0x0003ea2b) list_single_dyc_row_pane_g2_ParamLimits

0x1ac6,	// (0x0003ea2b) list_single_dyc_row_pane_g2

0x1ad2,	// (0x0003ea37) list_single_dyc_row_pane_g3_ParamLimits

0x1ad2,	// (0x0003ea37) list_single_dyc_row_pane_g3

0x1ade,	// (0x0003ea43) list_single_dyc_row_pane_g4_ParamLimits

0x1ade,	// (0x0003ea43) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0004cc97) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0004cc97) list_single_dyc_row_pane_g

0x1aea,	// (0x0003ea4f) list_single_dyc_row_text_pane_ParamLimits

0x1aea,	// (0x0003ea4f) list_single_dyc_row_text_pane

0xa19a,	// (0x000470ff) bg_sp_fs_scroll_pane

0xe82f,	// (0x0004b794) thumb_sp_fs_scroll_pane

0x1335,	// (0x0003e29a) list_medium_line_g1_ParamLimits

0x1335,	// (0x0003e29a) list_medium_line_g1

0x1b09,	// (0x0003ea6e) list_medium_line_t1_ParamLimits

0x1b09,	// (0x0003ea6e) list_medium_line_t1

0x0e65,	// (0x0003ddca) list_medium_line_x2_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x2_g1

0x0e71,	// (0x0003ddd6) list_medium_line_x2_g2_ParamLimits

0x0e71,	// (0x0003ddd6) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0004cca0) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0004cca0) list_medium_line_x2_g

0x1b1e,	// (0x0003ea83) list_medium_line_x2_t1_ParamLimits

0x1b1e,	// (0x0003ea83) list_medium_line_x2_t1

0x0e65,	// (0x0003ddca) list_medium_line_x3_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x3_g1

0x0e71,	// (0x0003ddd6) list_medium_line_x3_g2_ParamLimits

0x0e71,	// (0x0003ddd6) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0004cca0) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0004cca0) list_medium_line_x3_g

0x1b1e,	// (0x0003ea83) list_medium_line_x3_t1_ParamLimits

0x1b1e,	// (0x0003ea83) list_medium_line_x3_t1

0xe838,	// (0x0004b79d) thumb_sp_fs_scroll_pane_g1

0xe841,	// (0x0004b7a6) thumb_sp_fs_scroll_pane_g2

0xe84a,	// (0x0004b7af) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004cca5) thumb_sp_fs_scroll_pane_g

0xe838,	// (0x0004b79d) bg_sp_fs_scroll_pane_g1

0xe841,	// (0x0004b7a6) bg_sp_fs_scroll_pane_g2

0xe84a,	// (0x0004b7af) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0004cca5) bg_sp_fs_scroll_pane_g

0x0e65,	// (0x0003ddca) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0e65,	// (0x0003ddca) list_medium_line_x2_t3_g4_g1

0x0f0a,	// (0x0003de6f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0f0a,	// (0x0003de6f) list_medium_line_x2_t3_g4_g2

0x0e71,	// (0x0003ddd6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0e71,	// (0x0003ddd6) list_medium_line_x2_t3_g4_g3

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0e7d,	// (0x0003dde2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0004c223) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0004c223) list_medium_line_x2_t3_g4_g

0x1b34,	// (0x0003ea99) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1b34,	// (0x0003ea99) list_medium_line_x2_t3_g4_t1

0x1b4a,	// (0x0003eaaf) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1b4a,	// (0x0003eaaf) list_medium_line_x2_t3_g4_t2

0x0eb0,	// (0x0003de15) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0eb0,	// (0x0003de15) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0004ccac) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0004ccac) list_medium_line_x2_t3_g4_t

0x1335,	// (0x0003e29a) list_medium_line_g2_g1_ParamLimits

0x1335,	// (0x0003e29a) list_medium_line_g2_g1

0x1341,	// (0x0003e2a6) list_medium_line_g2_g2_ParamLimits

0x1341,	// (0x0003e2a6) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004c965) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004c965) list_medium_line_g2_g

0x1b64,	// (0x0003eac9) list_medium_line_g2_t1_ParamLimits

0x1b64,	// (0x0003eac9) list_medium_line_g2_t1

0x1335,	// (0x0003e29a) list_medium_line_t3_g2_g1_ParamLimits

0x1335,	// (0x0003e29a) list_medium_line_t3_g2_g1

0x1341,	// (0x0003e2a6) list_medium_line_t3_g2_g2_ParamLimits

0x1341,	// (0x0003e2a6) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004c965) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004c965) list_medium_line_t3_g2_g

0x1b79,	// (0x0003eade) list_medium_line_t3_g2_t1_ParamLimits

0x1b79,	// (0x0003eade) list_medium_line_t3_g2_t1

0x1b93,	// (0x0003eaf8) list_medium_line_t3_g2_t2_ParamLimits

0x1b93,	// (0x0003eaf8) list_medium_line_t3_g2_t2

0x1ba9,	// (0x0003eb0e) list_medium_line_t3_g2_t3_ParamLimits

0x1ba9,	// (0x0003eb0e) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0004ccb3) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0004ccb3) list_medium_line_t3_g2_t

0x1762,	// (0x0003e6c7) list_medium_line_right_icon_g1

0x1bbf,	// (0x0003eb24) list_medium_line_right_icon_t1

0x1335,	// (0x0003e29a) list_medium_line_t2_g1_ParamLimits

0x1335,	// (0x0003e29a) list_medium_line_t2_g1

0x1bcd,	// (0x0003eb32) list_medium_line_t2_t1_ParamLimits

0x1bcd,	// (0x0003eb32) list_medium_line_t2_t1

0x1be7,	// (0x0003eb4c) list_medium_line_t2_t2_ParamLimits

0x1be7,	// (0x0003eb4c) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0004ccba) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0004ccba) list_medium_line_t2_t

0x1335,	// (0x0003e29a) list_medium_line_t3_g1_ParamLimits

0x1335,	// (0x0003e29a) list_medium_line_t3_g1

0x1bfc,	// (0x0003eb61) list_medium_line_t3_t1_ParamLimits

0x1bfc,	// (0x0003eb61) list_medium_line_t3_t1

0x1c16,	// (0x0003eb7b) list_medium_line_t3_t2_ParamLimits

0x1c16,	// (0x0003eb7b) list_medium_line_t3_t2

0x1c2c,	// (0x0003eb91) list_medium_line_t3_t3_ParamLimits

0x1c2c,	// (0x0003eb91) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0004ccbf) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0004ccbf) list_medium_line_t3_t

0x1335,	// (0x0003e29a) list_medium_line_g3_g1_ParamLimits

0x1335,	// (0x0003e29a) list_medium_line_g3_g1

0x1c41,	// (0x0003eba6) list_medium_line_g3_g2_ParamLimits

0x1c41,	// (0x0003eba6) list_medium_line_g3_g2

0x1341,	// (0x0003e2a6) list_medium_line_g3_g3_ParamLimits

0x1341,	// (0x0003e2a6) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0004ccc6) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0004ccc6) list_medium_line_g3_g

0x1c4d,	// (0x0003ebb2) list_medium_line_g3_t1_ParamLimits

0x1c4d,	// (0x0003ebb2) list_medium_line_g3_t1

0x1335,	// (0x0003e29a) list_medium_line_t2_g3_g1_ParamLimits

0x1335,	// (0x0003e29a) list_medium_line_t2_g3_g1

0x1c41,	// (0x0003eba6) list_medium_line_t2_g3_g2_ParamLimits

0x1c41,	// (0x0003eba6) list_medium_line_t2_g3_g2

0x1341,	// (0x0003e2a6) list_medium_line_t2_g3_g3_ParamLimits

0x1341,	// (0x0003e2a6) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0004ccc6) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0004ccc6) list_medium_line_t2_g3_g

0x1c62,	// (0x0003ebc7) list_medium_line_t2_g3_t1_ParamLimits

0x1c62,	// (0x0003ebc7) list_medium_line_t2_g3_t1

0x1c7c,	// (0x0003ebe1) list_medium_line_t2_g3_t2_ParamLimits

0x1c7c,	// (0x0003ebe1) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0004cccd) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0004cccd) list_medium_line_t2_g3_t

0x1335,	// (0x0003e29a) list_medium_line_t3_g3_g1_ParamLimits

0x1335,	// (0x0003e29a) list_medium_line_t3_g3_g1

0x1c41,	// (0x0003eba6) list_medium_line_t3_g3_g2_ParamLimits

0x1c41,	// (0x0003eba6) list_medium_line_t3_g3_g2

0x1341,	// (0x0003e2a6) list_medium_line_t3_g3_g3_ParamLimits

0x1341,	// (0x0003e2a6) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0004ccc6) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0004ccc6) list_medium_line_t3_g3_g

0x1c92,	// (0x0003ebf7) list_medium_line_t3_g3_t1_ParamLimits

0x1c92,	// (0x0003ebf7) list_medium_line_t3_g3_t1

0x1cab,	// (0x0003ec10) list_medium_line_t3_g3_t2_ParamLimits

0x1cab,	// (0x0003ec10) list_medium_line_t3_g3_t2

0x1cc1,	// (0x0003ec26) list_medium_line_t3_g3_t3_ParamLimits

0x1cc1,	// (0x0003ec26) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0004ccd2) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0004ccd2) list_medium_line_t3_g3_t

0x18b9,	// (0x0003e81e) list_medium_line_right_iconx2_g1

0x1762,	// (0x0003e6c7) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004ccd9) list_medium_line_right_iconx2_g

0x1cd7,	// (0x0003ec3c) list_medium_line_right_iconx2_t1

0x18b9,	// (0x0003e81e) list_medium_line_t2_right_iconx2_g1

0x1762,	// (0x0003e6c7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0004ccd9) list_medium_line_t2_right_iconx2_g

0x1ce5,	// (0x0003ec4a) list_medium_line_t2_right_iconx2_t1

0x1cf5,	// (0x0003ec5a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0004ccde) list_medium_line_t2_right_iconx2_t

0x1d03,	// (0x0003ec68) list_medium_line_x4_t4_t1

0x1d11,	// (0x0003ec76) list_medium_line_x4_t4_t2

0x1d21,	// (0x0003ec86) list_medium_line_x4_t4_t3

0x1d31,	// (0x0003ec96) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0004cce3) list_medium_line_x4_t4_t

0x9345,	// (0x000462aa) tport_appsw_pane_ParamLimits

0x9345,	// (0x000462aa) tport_appsw_pane

0x9353,	// (0x000462b8) tport_contact_pane_ParamLimits

0x9353,	// (0x000462b8) tport_contact_pane

0x9363,	// (0x000462c8) tport_listscroll_pane_ParamLimits

0x9363,	// (0x000462c8) tport_listscroll_pane

0x9373,	// (0x000462d8) cell_tport_appsw_pane_ParamLimits

0x9373,	// (0x000462d8) cell_tport_appsw_pane

0xd03b,	// (0x00049fa0) tport_appsw_pane_g1_ParamLimits

0xd03b,	// (0x00049fa0) tport_appsw_pane_g1

0xe853,	// (0x0004b7b8) tport_contact_pane_g1

0xe1ec,	// (0x0004b151) tport_contact_pane_t1

0xe85c,	// (0x0004b7c1) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0004ccec) tport_contact_pane_t

0xe86a,	// (0x0004b7cf) list_tport_pane

0xe873,	// (0x0004b7d8) scroll_pane_cp_030

0x93a6,	// (0x0004630b) cell_tport_appsw_pane_g1

0x93b6,	// (0x0004631b) cell_tport_appsw_pane_t1

0x93c4,	// (0x00046329) grid_highlight_pane_cp019

0x93cc,	// (0x00046331) list_tport_double_graphic_pane_ParamLimits

0x93cc,	// (0x00046331) list_tport_double_graphic_pane

0xb096,	// (0x00047ffb) list_highlight_pane_cp023_ParamLimits

0xb096,	// (0x00047ffb) list_highlight_pane_cp023

0x93dd,	// (0x00046342) list_tport_double_graphic_pane_g1_ParamLimits

0x93dd,	// (0x00046342) list_tport_double_graphic_pane_g1

0x93ea,	// (0x0004634f) list_tport_double_graphic_pane_t1_ParamLimits

0x93ea,	// (0x0004634f) list_tport_double_graphic_pane_t1

0x93ff,	// (0x00046364) list_tport_double_graphic_pane_t2_ParamLimits

0x93ff,	// (0x00046364) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0004ccf8) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0004ccf8) list_tport_double_graphic_pane_t

0xa19a,	// (0x000470ff) main_cale_note_pane

0x778f,	// (0x000446f4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x778f,	// (0x000446f4) cell_vitu2_function_top_wide_pane_cp01

0x8f2f,	// (0x00045e94) wait_bar_pane_cp05_ParamLimits

0xb096,	// (0x00047ffb) listscroll_cmail_pane

0xe87c,	// (0x0004b7e1) list_cmail_pane

0x9411,	// (0x00046376) list_cmail_body_pane

0x9438,	// (0x0004639d) list_single_cmail_header_caption_pane

0x9463,	// (0x000463c8) list_single_cmail_header_detail_pane_ParamLimits

0x9463,	// (0x000463c8) list_single_cmail_header_detail_pane

0xe88c,	// (0x0004b7f1) list_single_cmail_header_caption_pane_t1

0x1d41,	// (0x0003eca6) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1d41,	// (0x0003eca6) list_single_cmail_header_detail_pane_g1

0x1d57,	// (0x0003ecbc) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1d57,	// (0x0003ecbc) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0004ccfd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0004ccfd) list_single_cmail_header_detail_pane_g

0x1d63,	// (0x0003ecc8) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1d63,	// (0x0003ecc8) list_single_cmail_header_detail_pane_t1

0x1dc3,	// (0x0003ed28) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1dc3,	// (0x0003ed28) list_single_cmail_header_editor_pane_bg

0xe35b,	// (0x0004b2c0) list_cmail_body_pane_g1

0xe8b9,	// (0x0004b81e) list_cmail_body_pane_t1

0xd72a,	// (0x0004a68f) list_single_cmail_header_editor_pane_bg_g1

0xad32,	// (0x00047c97) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd73a,	// (0x0004a69f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd732,	// (0x0004a697) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd96c,	// (0x0004a8d1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd75a,	// (0x0004a6bf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd74a,	// (0x0004a6af) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd752,	// (0x0004a6b7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad12,	// (0x00047c77) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9499,	// (0x000463fe) calenote_gesture_pane_ParamLimits

0x9499,	// (0x000463fe) calenote_gesture_pane

0x94b3,	// (0x00046418) calenote_window_pane_ParamLimits

0x94b3,	// (0x00046418) calenote_window_pane

0xe8c7,	// (0x0004b82c) popup_note_window_cp01

0x94cb,	// (0x00046430) calenote_swipe_1_pane_ParamLimits

0x94cb,	// (0x00046430) calenote_swipe_1_pane

0x9271,	// (0x000461d6) calenote_swipe_2_pane_ParamLimits

0x9271,	// (0x000461d6) calenote_swipe_2_pane

0xe6ac,	// (0x0004b611) calenote_swipe_1_pane_g1_ParamLimits

0xe6ac,	// (0x0004b611) calenote_swipe_1_pane_g1

0xe6b9,	// (0x0004b61e) calenote_swipe_1_pane_g2_ParamLimits

0xe6b9,	// (0x0004b61e) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0004cc21) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0004cc21) calenote_swipe_1_pane_g

0xe8d9,	// (0x0004b83e) calenote_swipe_1_pane_t1_ParamLimits

0xe8d9,	// (0x0004b83e) calenote_swipe_1_pane_t1

0xe6ac,	// (0x0004b611) calenote_swipe_2_pane_g1_ParamLimits

0xe6ac,	// (0x0004b611) calenote_swipe_2_pane_g1

0xe8f8,	// (0x0004b85d) calenote_swipe_2_pane_g2_ParamLimits

0xe8f8,	// (0x0004b85d) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0004cd09) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0004cd09) calenote_swipe_2_pane_g

0xe904,	// (0x0004b869) calenote_swipe_2_pane_t1_ParamLimits

0xe904,	// (0x0004b869) calenote_swipe_2_pane_t1

0xa19a,	// (0x000470ff) main_mup_navstr_pane

0x63e2,	// (0x00043347) main_mup3_pane_t7_ParamLimits

0x63e2,	// (0x00043347) main_mup3_pane_t7

0x6e28,	// (0x00043d8d) main_mp4_pane_g6_ParamLimits

0x6e28,	// (0x00043d8d) main_mp4_pane_g6

0x71b8,	// (0x0004411d) main_image3_pane_t4_ParamLimits

0x71b8,	// (0x0004411d) main_image3_pane_t4

0x94de,	// (0x00046443) popup_navstr_preview_pane_ParamLimits

0x94de,	// (0x00046443) popup_navstr_preview_pane

0x94ea,	// (0x0004644f) scroll_navstr_pane_ParamLimits

0x94ea,	// (0x0004644f) scroll_navstr_pane

0xa19a,	// (0x000470ff) bg_popup_preview_window_pane_cp04

0xe92b,	// (0x0004b890) popup_navstr_preview_pane_t1

0x94f6,	// (0x0004645b) scroll_navstr_pane_g1_ParamLimits

0x94f6,	// (0x0004645b) scroll_navstr_pane_g1

0x9503,	// (0x00046468) scroll_navstr_pane_t1_ParamLimits

0x9503,	// (0x00046468) scroll_navstr_pane_t1

0xe8d0,	// (0x0004b835) bg_button_pane_cp014

0xe8d0,	// (0x0004b835) bg_button_pane_cp030

0x16c6,	// (0x0003e62b) list_double_fisheye_pane_g4_ParamLimits

0x16c6,	// (0x0003e62b) list_double_fisheye_pane_g4

0x16d2,	// (0x0003e637) list_double_fisheye_pane_g5_ParamLimits

0x16d2,	// (0x0003e637) list_double_fisheye_pane_g5

0xd92f,	// (0x0004a894) sp_fs_scroll_pane_cp03

0xe7cc,	// (0x0004b731) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7d8,	// (0x0004b73d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0004cc3e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7e4,	// (0x0004b749) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe884,	// (0x0004b7e9) sp_fs_scroll_pane_cp02

0xaa0f,	// (0x00047974) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa0f,	// (0x00047974) popup_sp_fs_calendar_preview_list_single_pane

0xa19a,	// (0x000470ff) main_cam6_pano_pane

0xb096,	// (0x00047ffb) main_mup3_pane_ParamLimits

0xa19a,	// (0x000470ff) main_phacti_pane

0x8e04,	// (0x00045d69) bg_button_pane_cp11

0x8e1c,	// (0x00045d81) main_mobtv_info_pane_g2_ParamLimits

0x8e1c,	// (0x00045d81) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0004cb9e) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0004cb9e) main_mobtv_info_pane_g

0x8fce,	// (0x00045f33) sc_clock_pane_t5_ParamLimits

0x8fce,	// (0x00045f33) sc_clock_pane_t5

0x906f,	// (0x00045fd4) main_radioblah_pane_g1_ParamLimits

0xe5f8,	// (0x0004b55d) main_radioblah_pane_t3_ParamLimits

0xe5f8,	// (0x0004b55d) main_radioblah_pane_t3

0xe610,	// (0x0004b575) main_radioblah_pane_t4_ParamLimits

0xe610,	// (0x0004b575) main_radioblah_pane_t4

0x908d,	// (0x00045ff2) main_radioblah_text_pane_ParamLimits

0x908d,	// (0x00045ff2) main_radioblah_text_pane

0x909a,	// (0x00045fff) main_radioblah_info_pane_g1_ParamLimits

0x912f,	// (0x00046094) main_radioblah_info_pane_t4_ParamLimits

0x912f,	// (0x00046094) main_radioblah_info_pane_t4

0xb096,	// (0x00047ffb) main_sp_fs_calendar_pane

0x9515,	// (0x0004647a) main_phacti_pane_g1

0x951d,	// (0x00046482) phacti_note_pane_ParamLimits

0x951d,	// (0x00046482) phacti_note_pane

0xe942,	// (0x0004b8a7) phacti_term_pane_ParamLimits

0xe942,	// (0x0004b8a7) phacti_term_pane

0xe957,	// (0x0004b8bc) phacti_note_pane_t1_ParamLimits

0xe957,	// (0x0004b8bc) phacti_note_pane_t1

0x1dda,	// (0x0003ed3f) phacti_term_pane_g1

0x1de2,	// (0x0003ed47) phacti_term_pane_t1_ParamLimits

0x1de2,	// (0x0003ed47) phacti_term_pane_t1

0xe96e,	// (0x0004b8d3) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaaae,	// (0x00047a13) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0004cd13) popup_sp_fs_calendar_preview_list_single_pane_g

0xe976,	// (0x0004b8db) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe976,	// (0x0004b8db) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe98c,	// (0x0004b8f1) aid_popup_sp_fs_bg_corner_pane

0xcd53,	// (0x00049cb8) popup_sp_fs_calendar_preview_bg_pane_g1

0xa19a,	// (0x000470ff) popup_sp_fs_calendar_preview_bg_pane

0xe994,	// (0x0004b8f9) popup_sp_fs_calendar_preview_list_pane

0xc94b,	// (0x000498b0) bg_main_sp_fs_cale_pane_ParamLimits

0xc94b,	// (0x000498b0) bg_main_sp_fs_cale_pane

0x1e15,	// (0x0003ed7a) listscroll_cale_mrui_pane_ParamLimits

0x1e15,	// (0x0003ed7a) listscroll_cale_mrui_pane

0x1e2a,	// (0x0003ed8f) listscroll_sp_fs_schedule_track_pane

0x1e33,	// (0x0003ed98) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1e33,	// (0x0003ed98) main_sp_fs_ctrlbar_pane_cp01

0xe99c,	// (0x0004b901) main_sp_fs_ribbon_pane

0x1e46,	// (0x0003edab) popup_sp_fs_cale_preview_window

0x9580,	// (0x000464e5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9580,	// (0x000464e5) list_single_sp_fs_schedule_track_pane

0xdfd6,	// (0x0004af3b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdfd6,	// (0x0004af3b) bg_sp_fs_highlight_list_pane_cp03

0x95a2,	// (0x00046507) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x95a2,	// (0x00046507) list_single_sp_fs_schedule_track_pane_g1

0x95ae,	// (0x00046513) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x95ae,	// (0x00046513) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0004cd18) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0004cd18) list_single_sp_fs_schedule_track_pane_g

0x95ba,	// (0x0004651f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x95ba,	// (0x0004651f) list_single_sp_fs_schedule_track_pane_t1

0x95d2,	// (0x00046537) sp_fs_schedule_track_pane_ParamLimits

0x95d2,	// (0x00046537) sp_fs_schedule_track_pane

0xe9a4,	// (0x0004b909) sp_fs_schedule_track_pane_g1

0xe9ac,	// (0x0004b911) sp_fs_schedule_track_pane_g2

0xe9b4,	// (0x0004b919) sp_fs_schedule_track_pane_g3

0xe9bc,	// (0x0004b921) sp_fs_schedule_track_pane_g4

0xe9c4,	// (0x0004b929) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0004cd1d) sp_fs_schedule_track_pane_g

0xd72a,	// (0x0004a68f) bg_sp_fs_schedule_viewer_highlight_g1

0xad32,	// (0x00047c97) bg_sp_fs_schedule_viewer_highlight_g2

0xd732,	// (0x0004a697) bg_sp_fs_schedule_viewer_highlight_g3

0xd73a,	// (0x0004a69f) bg_sp_fs_schedule_viewer_highlight_g4

0xd96c,	// (0x0004a8d1) bg_sp_fs_schedule_viewer_highlight_g5

0xd74a,	// (0x0004a6af) bg_sp_fs_schedule_viewer_highlight_g6

0xd752,	// (0x0004a6b7) bg_sp_fs_schedule_viewer_highlight_g7

0xd75a,	// (0x0004a6bf) bg_sp_fs_schedule_viewer_highlight_g8

0xad12,	// (0x00047c77) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0004cd28) bg_sp_fs_schedule_viewer_highlight_g

0xa19a,	// (0x000470ff) bg_main_sp_fs_ribbon_pane

0x95e2,	// (0x00046547) main_sp_fs_ribbon_pane_g1

0xe9cc,	// (0x0004b931) main_sp_fs_ribbon_pane_t1

0x95eb,	// (0x00046550) main_sp_fs_ribbon_pane_t2

0xe9db,	// (0x0004b940) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0004cd3b) main_sp_fs_ribbon_pane_t

0xe9ea,	// (0x0004b94f) main_sp_fs_ribbon_scheduler_pane

0xe9f2,	// (0x0004b957) bg_main_sp_fs_ribbon_pane_g1

0xe9fb,	// (0x0004b960) bg_main_sp_fs_ribbon_pane_g2

0xea04,	// (0x0004b969) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0004cd42) bg_main_sp_fs_ribbon_pane_g

0xea0c,	// (0x0004b971) main_sp_fs_ribbon_scheduler_pane_g1

0xea15,	// (0x0004b97a) main_sp_fs_ribbon_scheduler_pane_g2

0xea1e,	// (0x0004b983) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0004cd49) main_sp_fs_ribbon_scheduler_pane_g

0xea27,	// (0x0004b98c) list_cale_mrui_pane

0x95fa,	// (0x0004655f) sp_fs_scroll_pane_cp07_ParamLimits

0x95fa,	// (0x0004655f) sp_fs_scroll_pane_cp07

0x9616,	// (0x0004657b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9616,	// (0x0004657b) bg_sp_fs_schedule_viewer_highlight

0xea34,	// (0x0004b999) list_single_sp_fs_schedule_track_pane_cp01

0xea3c,	// (0x0004b9a1) list_sp_fs_schedule_track_pane

0xea44,	// (0x0004b9a9) sp_fs_scroll_pane_cp06_ParamLimits

0xea44,	// (0x0004b9a9) sp_fs_scroll_pane_cp06

0xcd53,	// (0x00049cb8) bgmain_sp_fs_calendar_pane_g1

0x1e58,	// (0x0003edbd) list_single_cale_mrui_pane_ParamLimits

0x1e58,	// (0x0003edbd) list_single_cale_mrui_pane

0x1e86,	// (0x0003edeb) list_single_cale_mrui_row_pane_ParamLimits

0x1e86,	// (0x0003edeb) list_single_cale_mrui_row_pane

0x1e93,	// (0x0003edf8) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1e93,	// (0x0003edf8) list_single_cale_mrui_row_pane_g1

0x1ecb,	// (0x0003ee30) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1ecb,	// (0x0003ee30) list_single_cale_mrui_row_pane_t1

0x1edd,	// (0x0003ee42) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1edd,	// (0x0003ee42) list_single_cale_mrui_row_pane_t2

0x1f43,	// (0x0003eea8) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1f43,	// (0x0003eea8) list_single_cale_mrui_row_pane_t3

0x1f72,	// (0x0003eed7) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1f72,	// (0x0003eed7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0004cd57) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0004cd57) list_single_cale_mrui_row_pane_t

0x1fa1,	// (0x0003ef06) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1fa1,	// (0x0003ef06) list_single_cmail_header_editor_pane_bg_cp01

0x1fc1,	// (0x0003ef26) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1fc1,	// (0x0003ef26) list_single_cmail_header_editor_pane_bg_cp02

0x9623,	// (0x00046588) main_radioblah_text_pane_t1_ParamLimits

0x9623,	// (0x00046588) main_radioblah_text_pane_t1

0xea63,	// (0x0004b9c8) cam6_indi_pane_cp01

0xea6b,	// (0x0004b9d0) cam6_mode_pane_cp01

0xea73,	// (0x0004b9d8) cam6_pano_pane

0xea7c,	// (0x0004b9e1) cam6_zoom_pane_cp01

0xea84,	// (0x0004b9e9) cam6_pano_image_pane

0xea8f,	// (0x0004b9f4) cam6_pano_pane_g1

0xe35b,	// (0x0004b2c0) cam6_pano_pane_g2

0xea98,	// (0x0004b9fd) cam6_pano_pane_g3

0xeaa1,	// (0x0004ba06) cam6_pano_pane_g4

0xd336,	// (0x0004a29b) cam6_pano_pane_g5

0xeaaa,	// (0x0004ba0f) cam6_pano_pane_g6

0xeab4,	// (0x0004ba19) cam6_pano_pane_g7

0xeabc,	// (0x0004ba21) cam6_pano_pane_g8

0xeac5,	// (0x0004ba2a) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0004cd60) cam6_pano_pane_g

0xa19a,	// (0x000470ff) main_browser_tag_pane

0xe923,	// (0x0004b888) grid_navstr_albumart_pane

0xead0,	// (0x0004ba35) cell_navstr_albumart_pane_ParamLimits

0xead0,	// (0x0004ba35) cell_navstr_albumart_pane

0xeaf0,	// (0x0004ba55) cell_navstr_albumart_pane_g1

0xc75c,	// (0x000496c1) cell_navstr_albumart_pane_g2

0xc76c,	// (0x000496d1) cell_navstr_albumart_pane_g3

0xc764,	// (0x000496c9) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0004cd73) cell_navstr_albumart_pane_g

0x963e,	// (0x000465a3) bt_list_pane_ParamLimits

0x963e,	// (0x000465a3) bt_list_pane

0x965e,	// (0x000465c3) bt_list_pane_t1

0x966d,	// (0x000465d2) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0004cd7c) bt_list_pane_t

0xa19a,	// (0x000470ff) main_cale_prevew_pane

0x967c,	// (0x000465e1) popup_cale_preview_window_ParamLimits

0x967c,	// (0x000465e1) popup_cale_preview_window

0xb096,	// (0x00047ffb) bg_popup_preview_window_pane_cp05_ParamLimits

0xb096,	// (0x00047ffb) bg_popup_preview_window_pane_cp05

0xeaf8,	// (0x0004ba5d) list_cale_preview_pane_ParamLimits

0xeaf8,	// (0x0004ba5d) list_cale_preview_pane

0x9695,	// (0x000465fa) list_double_cale_preview_pane_ParamLimits

0x9695,	// (0x000465fa) list_double_cale_preview_pane

0x96a7,	// (0x0004660c) list_single_cale_preview_pane_ParamLimits

0x96a7,	// (0x0004660c) list_single_cale_preview_pane

0x96bd,	// (0x00046622) list_single_cale_preview_pane_g1

0x96c5,	// (0x0004662a) list_single_cale_preview_pane_t1_ParamLimits

0x96c5,	// (0x0004662a) list_single_cale_preview_pane_t1

0x96da,	// (0x0004663f) list_double_cale_preview_pane_g1

0x96e2,	// (0x00046647) list_double_cale_preview_pane_t1_ParamLimits

0x96e2,	// (0x00046647) list_double_cale_preview_pane_t1

0x96f7,	// (0x0004665c) list_double_cale_preview_pane_t2_ParamLimits

0x96f7,	// (0x0004665c) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0004cd81) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0004cd81) list_double_cale_preview_pane_t

0xa19a,	// (0x000470ff) main_ezdial_pane

0xb096,	// (0x00047ffb) main_sp_fs_email_pane_ParamLimits

0x928b,	// (0x000461f0) cmail_ddmenu_btn01_pane_ParamLimits

0x928b,	// (0x000461f0) cmail_ddmenu_btn01_pane

0x92a8,	// (0x0004620d) cmail_ddmenu_btn02_pane_ParamLimits

0x92a8,	// (0x0004620d) cmail_ddmenu_btn02_pane

0x92c6,	// (0x0004622b) cmail_ddmenu_btn03_pane_ParamLimits

0x92c6,	// (0x0004622b) cmail_ddmenu_btn03_pane

0x92f4,	// (0x00046259) main_sp_fs_ctrlbar_pane_ParamLimits

0x930a,	// (0x0004626f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9411,	// (0x00046376) list_cmail_body_pane_ParamLimits

0xe89a,	// (0x0004b7ff) bg_button_pane_cp12

0xe8a3,	// (0x0004b808) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8a3,	// (0x0004b808) list_single_cmail_header_detail_pane_g3

0x1d9f,	// (0x0003ed04) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1d9f,	// (0x0003ed04) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0004cd04) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0004cd04) list_single_cmail_header_detail_pane_t

0x1df7,	// (0x0003ed5c) phacti_term_pane_t2_ParamLimits

0x1df7,	// (0x0003ed5c) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0004cd0e) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0004cd0e) phacti_term_pane_t

0xeb04,	// (0x0004ba69) aid_size_list_single_double

0x970f,	// (0x00046674) popup_ezdial_listscroll_window

0x9730,	// (0x00046695) popup_number_entry_window_cp01

0xaad0,	// (0x00047a35) bg_popup_call_pane_cp09

0xeb10,	// (0x0004ba75) ezdial_list_pane

0xeb18,	// (0x0004ba7d) scroll_pane_cp23

0xcb38,	// (0x00049a9d) bg_button_pane_cp028_ParamLimits

0xcb38,	// (0x00049a9d) bg_button_pane_cp028

0x973e,	// (0x000466a3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x973e,	// (0x000466a3) cmail_ddmenu_btn01_pane_g1

0x974e,	// (0x000466b3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x974e,	// (0x000466b3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0004cd86) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0004cd86) cmail_ddmenu_btn01_pane_g

0xeb20,	// (0x0004ba85) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb20,	// (0x0004ba85) cmail_ddmenu_btn01_pane_t1

0xc94b,	// (0x000498b0) bg_button_pane_cp029_ParamLimits

0xc94b,	// (0x000498b0) bg_button_pane_cp029

0x974e,	// (0x000466b3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x974e,	// (0x000466b3) cmail_ddmenu_btn02_pane_g1

0x9766,	// (0x000466cb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9766,	// (0x000466cb) cmail_ddmenu_btn02_pane_t1

0xdfd6,	// (0x0004af3b) bg_button_pane_cp031_ParamLimits

0xdfd6,	// (0x0004af3b) bg_button_pane_cp031

0x974e,	// (0x000466b3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x974e,	// (0x000466b3) cmail_ddmenu_btn03_pane_g1

0x9766,	// (0x000466cb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9766,	// (0x000466cb) cmail_ddmenu_btn03_pane_t1

0x7063,	// (0x00043fc8) cell_dialer2_keypad_pane_t1_ParamLimits

0x707d,	// (0x00043fe2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x707d,	// (0x00043fe2) cell_dialer2_keypad_pane_t1_copy1

0x8c45,	// (0x00045baa) ncimui_group_button_pane

0xb096,	// (0x00047ffb) main_sp_fs_calendar_pane_ParamLimits

0x9438,	// (0x0004639d) list_single_cmail_header_caption_pane_ParamLimits

0x1e0c,	// (0x0003ed71) aid_recal_txt_sm_pane

0xa19a,	// (0x000470ff) mian_recal_day_pane

0x1e46,	// (0x0003edab) popup_sp_fs_cale_preview_window_ParamLimits

0xeb35,	// (0x0004ba9a) list_recal_day_pane

0x1ff8,	// (0x0003ef5d) list_single_recal_day_pane_ParamLimits

0x1ff8,	// (0x0003ef5d) list_single_recal_day_pane

0xeb5c,	// (0x0004bac1) list_single_recal_day_pane_g1_ParamLimits

0xeb5c,	// (0x0004bac1) list_single_recal_day_pane_g1

0x200a,	// (0x0003ef6f) list_single_recal_day_pane_g2_ParamLimits

0x200a,	// (0x0003ef6f) list_single_recal_day_pane_g2

0x2016,	// (0x0003ef7b) list_single_recal_day_pane_g3_ParamLimits

0x2016,	// (0x0003ef7b) list_single_recal_day_pane_g3

0x2022,	// (0x0003ef87) list_single_recal_day_pane_g4_ParamLimits

0x2022,	// (0x0003ef87) list_single_recal_day_pane_g4

0x2030,	// (0x0003ef95) list_single_recal_day_pane_g5_ParamLimits

0x2030,	// (0x0003ef95) list_single_recal_day_pane_g5

0x2046,	// (0x0003efab) list_single_recal_day_pane_g6_ParamLimits

0x2046,	// (0x0003efab) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0004cd95) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0004cd95) list_single_recal_day_pane_g

0x205a,	// (0x0003efbf) list_single_recal_day_pane_t1

0x206c,	// (0x0003efd1) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0004cda0) list_single_recal_day_pane_t

0x978a,	// (0x000466ef) ncimui_query_button_pane_ParamLimits

0x978a,	// (0x000466ef) ncimui_query_button_pane

0x979a,	// (0x000466ff) ncimui_query_button_pane_t1_ParamLimits

0x979a,	// (0x000466ff) ncimui_query_button_pane_t1

0xeb68,	// (0x0004bacd) ncimui_query_button_pane_t2_ParamLimits

0xeb68,	// (0x0004bacd) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0004cda5) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0004cda5) ncimui_query_button_pane_t

0x97ad,	// (0x00046712) query_button_pane_ParamLimits

0x97ad,	// (0x00046712) query_button_pane

0xa19a,	// (0x000470ff) bg_button_pane_cp0028

0xeb7b,	// (0x0004bae0) query_button_pane_t1

0x540b,	// (0x00042370) main_tport_pane_ParamLimits

0x931b,	// (0x00046280) bg_popup_window_pane_cp01_ParamLimits

0x931b,	// (0x00046280) bg_popup_window_pane_cp01

0x9329,	// (0x0004628e) heading_pane_cp08_ParamLimits

0x9329,	// (0x0004628e) heading_pane_cp08

0x9337,	// (0x0004629c) heading_pane_cp07_ParamLimits

0x9337,	// (0x0004629c) heading_pane_cp07

0x93a6,	// (0x0004630b) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0004ccf1) cell_tport_appsw_pane_g

0x108e,	// (0x0003dff3) input_candi_list_open_g1

0xaef5,	// (0x00047e5a) list_cale_time_pane_g6_ParamLimits

0xaef5,	// (0x00047e5a) list_cale_time_pane_g6

0x5e90,	// (0x00042df5) aid_size_touch_calib_1_ParamLimits

0x5e90,	// (0x00042df5) aid_size_touch_calib_1

0x5e9c,	// (0x00042e01) aid_size_touch_calib_2_ParamLimits

0x5e9c,	// (0x00042e01) aid_size_touch_calib_2

0x5eaa,	// (0x00042e0f) aid_size_touch_calib_3_ParamLimits

0x5eaa,	// (0x00042e0f) aid_size_touch_calib_3

0x5eba,	// (0x00042e1f) aid_size_touch_calib_4_ParamLimits

0x5eba,	// (0x00042e1f) aid_size_touch_calib_4

0x5ec8,	// (0x00042e2d) main_touch_calib_button_group_pane_ParamLimits

0x5ec8,	// (0x00042e2d) main_touch_calib_button_group_pane

0x5ed6,	// (0x00042e3b) main_touch_calib_pane_g1_ParamLimits

0x5ee2,	// (0x00042e47) main_touch_calib_pane_g2_ParamLimits

0x5eee,	// (0x00042e53) main_touch_calib_pane_g3_ParamLimits

0x5efa,	// (0x00042e5f) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0004c6b2) main_touch_calib_pane_g_ParamLimits

0x5f06,	// (0x00042e6b) main_touch_calib_pane_t1_ParamLimits

0x5f1f,	// (0x00042e84) main_touch_calib_pane_t2_ParamLimits

0x5f38,	// (0x00042e9d) main_touch_calib_pane_t3_ParamLimits

0x5f4e,	// (0x00042eb3) main_touch_calib_pane_t4_ParamLimits

0x5f64,	// (0x00042ec9) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0004c6bb) main_touch_calib_pane_t_ParamLimits

0xd0d6,	// (0x0004a03b) list_single_fp_cale_pane_g3_ParamLimits

0xd0d6,	// (0x0004a03b) list_single_fp_cale_pane_g3

0xb096,	// (0x00047ffb) bg_button_pane_cp012_ParamLimits

0xb096,	// (0x00047ffb) bg_vkb2_func_pane_cp03_ParamLimits

0x7ee4,	// (0x00044e49) cell_vitu2_function_top_pane_g1_ParamLimits

0xb096,	// (0x00047ffb) bg_vkb2_func_pane_cp04_ParamLimits

0x8bcd,	// (0x00045b32) main_ncimui_button_group_pane_ParamLimits

0x8bcd,	// (0x00045b32) main_ncimui_button_group_pane

0x8c33,	// (0x00045b98) main_ncimui_pane_t3_ParamLimits

0x8c33,	// (0x00045b98) main_ncimui_pane_t3

0xe939,	// (0x0004b89e) phacti_button_group_pane

0xeb04,	// (0x0004ba69) aid_size_list_single_double_ParamLimits

0x970f,	// (0x00046674) popup_ezdial_listscroll_window_ParamLimits

0x9730,	// (0x00046695) popup_number_entry_window_cp01_ParamLimits

0x97ba,	// (0x0004671f) phacti_button_pane_ParamLimits

0x97ba,	// (0x0004671f) phacti_button_pane

0xa19a,	// (0x000470ff) bg_button_pane_cp14

0xeb89,	// (0x0004baee) phacti_button_pane_t1

0x97cb,	// (0x00046730) main_touch_calib_button_pane_ParamLimits

0x97cb,	// (0x00046730) main_touch_calib_button_pane

0xa90b,	// (0x00047870) bg_button_pane_cp18_ParamLimits

0xa90b,	// (0x00047870) bg_button_pane_cp18

0xeb97,	// (0x0004bafc) main_touch_calib_button_pane_t1_ParamLimits

0xeb97,	// (0x0004bafc) main_touch_calib_button_pane_t1

0xebad,	// (0x0004bb12) main_touch_calib_button_pane_t2_ParamLimits

0xebad,	// (0x0004bb12) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0004cdaa) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0004cdaa) main_touch_calib_button_pane_t

0xa19a,	// (0x000470ff) cell_ncimui_button_pane

0xa19a,	// (0x000470ff) bg_button_pane_cp032

0xebcb,	// (0x0004bb30) cell_ncimui_button_pane_t1

0x70d9,	// (0x0004403e) image3_infobar_pane_ParamLimits

0x70d9,	// (0x0004403e) image3_infobar_pane

0x8ff0,	// (0x00045f55) fs_bigclock_status_pane_ParamLimits

0x8ff0,	// (0x00045f55) fs_bigclock_status_pane

0x8ffd,	// (0x00045f62) main_fs_bigclock_clock_pane_ParamLimits

0x8ffd,	// (0x00045f62) main_fs_bigclock_clock_pane

0x9011,	// (0x00045f76) main_fs_bigclock_indi_pane_ParamLimits

0x9011,	// (0x00045f76) main_fs_bigclock_indi_pane

0x9039,	// (0x00045f9e) main_fs_bigclock_swipe_pane_ParamLimits

0x9039,	// (0x00045f9e) main_fs_bigclock_swipe_pane

0xa19a,	// (0x000470ff) main_fs_clock_dumped_data

0xe468,	// (0x0004b3cd) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe468,	// (0x0004b3cd) list_single_fs_bigclock_indicator_pane_g1

0xe483,	// (0x0004b3e8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe483,	// (0x0004b3e8) list_single_fs_bigclock_indicator_pane_g2

0xe49d,	// (0x0004b402) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe49d,	// (0x0004b402) list_single_fs_bigclock_indicator_pane_g3

0xe4b7,	// (0x0004b41c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4b7,	// (0x0004b41c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0004cbd2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0004cbd2) list_single_fs_bigclock_indicator_pane_g

0xe4e2,	// (0x0004b447) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4e2,	// (0x0004b447) list_single_fs_bigclock_indicator_pane_t1

0xe50a,	// (0x0004b46f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe50a,	// (0x0004b46f) list_single_fs_bigclock_indicator_pane_t2

0xe532,	// (0x0004b497) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe532,	// (0x0004b497) list_single_fs_bigclock_indicator_pane_t3

0xe55a,	// (0x0004b4bf) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe55a,	// (0x0004b4bf) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0004cbdd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0004cbdd) list_single_fs_bigclock_indicator_pane_t

0xebd9,	// (0x0004bb3e) image3_infobar_fav_pane_ParamLimits

0xebd9,	// (0x0004bb3e) image3_infobar_fav_pane

0xebe9,	// (0x0004bb4e) image3_infobar_loc_pane_ParamLimits

0xebe9,	// (0x0004bb4e) image3_infobar_loc_pane

0xebfd,	// (0x0004bb62) image3_infobar_time_pane_ParamLimits

0xebfd,	// (0x0004bb62) image3_infobar_time_pane

0xcd53,	// (0x00049cb8) image3_infobar_time_pane_g1

0xec0d,	// (0x0004bb72) image3_infobar_time_pane_t1

0xcd53,	// (0x00049cb8) image3_infobar_loc_pane_g1

0xec1b,	// (0x0004bb80) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0004cdaf) image3_infobar_loc_pane_g

0xec23,	// (0x0004bb88) image3_infobar_loc_pane_t1

0xcd53,	// (0x00049cb8) image3_infobar_fav_pane_g1

0xec31,	// (0x0004bb96) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0004cdb4) image3_infobar_fav_pane_g

0xec39,	// (0x0004bb9e) fs_bigclock_status_battery_pane

0xec42,	// (0x0004bba7) fs_bigclock_status_signal_pane

0xec4b,	// (0x0004bbb0) fs_bigclock_status_title_pane

0xec54,	// (0x0004bbb9) fs_bigclock_status_signal_pane_g1

0xec5d,	// (0x0004bbc2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0004cdb9) fs_bigclock_status_signal_pane_g

0xec65,	// (0x0004bbca) fs_bigclock_status_battery_pane_g1

0xec6e,	// (0x0004bbd3) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0004cdbe) fs_bigclock_status_battery_pane_g

0xec76,	// (0x0004bbdb) fs_bigclock_status_title_pane_t1

0x97db,	// (0x00046740) main_fs_bigclock_clock_pane_g1

0x97db,	// (0x00046740) main_fs_bigclock_clock_pane_g2

0x97e8,	// (0x0004674d) main_fs_bigclock_clock_pane_g3

0x97e8,	// (0x0004674d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0004cdc3) main_fs_bigclock_clock_pane_g

0x97f4,	// (0x00046759) main_fs_bigclock_clock_pane_t1

0x9807,	// (0x0004676c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0004cdcc) main_fs_bigclock_clock_pane_t

0xec84,	// (0x0004bbe9) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec84,	// (0x0004bbe9) list_single_fs_bigclock_indicator_pane

0xec95,	// (0x0004bbfa) list_single_fs_bigclock_pane_ParamLimits

0xec95,	// (0x0004bbfa) list_single_fs_bigclock_pane

0xecbb,	// (0x0004bc20) main_fs_bigclock_indicator_pane_t1

0xecca,	// (0x0004bc2f) list_single_fs_bigclock_pane_g1

0xecd2,	// (0x0004bc37) list_single_fs_bigclock_pane_t1

0xcd53,	// (0x00049cb8) main_fs_bigclock_swipe_pane_g1

0xed15,	// (0x0004bc7a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0004cddd) main_fs_bigclock_swipe_pane_g

0xed1d,	// (0x0004bc82) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed1d,	// (0x0004bc82) main_fs_bigclock_swipe_pane_t1

0x449b,	// (0x00041400) call_type_pane_ParamLimits

0xa19a,	// (0x000470ff) main_btmg_pane

0x1ebf,	// (0x0003ee24) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1ebf,	// (0x0003ee24) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0004cd50) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0004cd50) list_single_cale_mrui_row_pane_g

0x1fe7,	// (0x0003ef4c) list_recal_vselct_arw_lo_pane

0xeb54,	// (0x0004bab9) list_recal_vselct_arw_up_pane

0x1fef,	// (0x0003ef54) list_recal_vselct_pane

0x985e,	// (0x000467c3) btmg_button_pane

0x986a,	// (0x000467cf) main_btmg_pane_g1

0xa19a,	// (0x000470ff) bg_button_pane_cp044

0xed3a,	// (0x0004bc9f) btmg_button_pane_t1

0xc937,	// (0x0004989c) aid_listscroll_gen

0xb096,	// (0x00047ffb) main_cntbar_detail_pane

0xe87c,	// (0x0004b7e1) list_cmail_folder_pane

0xd92f,	// (0x0004a894) sp_fs_scroll_pane_cp03_ParamLimits

0x207e,	// (0x0003efe3) list_single_fs_dyc_pane_cp01_ParamLimits

0x207e,	// (0x0003efe3) list_single_fs_dyc_pane_cp01

0xed48,	// (0x0004bcad) aid_size_cmail_indent

0x20aa,	// (0x0003f00f) list_single_dyc_row_pane_cp01

0x9892,	// (0x000467f7) cntbar_detail_list_pane_ParamLimits

0x9892,	// (0x000467f7) cntbar_detail_list_pane

0x98cc,	// (0x00046831) main_cntbar_detail_cont_pane_ParamLimits

0x98cc,	// (0x00046831) main_cntbar_detail_cont_pane

0x448f,	// (0x000413f4) scroll_pane_cp032_ParamLimits

0x448f,	// (0x000413f4) scroll_pane_cp032

0x98d8,	// (0x0004683d) cntbar_detail_list_event_pane_ParamLimits

0x98d8,	// (0x0004683d) cntbar_detail_list_event_pane

0x989e,	// (0x00046803) cntbar_detail_list_shct_pane

0xad80,	// (0x00047ce5) aid_list_gen

0xed51,	// (0x0004bcb6) aid_scroll

0xed5a,	// (0x0004bcbf) aid_size_touch_scroll_bar

0x847d,	// (0x000453e2) aid_list_double

0x20b3,	// (0x0003f018) aid_list_single

0x8474,	// (0x000453d9) aid_list_single_lg

0x20bc,	// (0x0003f021) aid_list_z_g_a_sm

0x20c4,	// (0x0003f029) aid_list_z_g_d

0x20cc,	// (0x0003f031) aid_txt_z_prm

0x20da,	// (0x0003f03f) aid_txt_z_prm_cp01

0x20e8,	// (0x0003f04d) aid_txt_z_sec

0x98ec,	// (0x00046851) main_cntbar_detail_cont_pane_g1_ParamLimits

0x98ec,	// (0x00046851) main_cntbar_detail_cont_pane_g1

0x98f9,	// (0x0004685e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x98f9,	// (0x0004685e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0004cde2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0004cde2) main_cntbar_detail_cont_pane_g

0xed63,	// (0x0004bcc8) main_cntbar_detail_cont_pane_t1

0xed71,	// (0x0004bcd6) main_cntbar_detail_cont_pane_t2

0xed7f,	// (0x0004bce4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0004cde7) main_cntbar_detail_cont_pane_t

0x9905,	// (0x0004686a) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9905,	// (0x0004686a) cell_cntbar_detail_list_shct_pane

0xed8d,	// (0x0004bcf2) cntbar_detail_list_shct_pane_g1

0xed96,	// (0x0004bcfb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0004cdee) cntbar_detail_list_shct_pane_g

0x9919,	// (0x0004687e) cntbar_detail_list_event_pane_g1_ParamLimits

0x9919,	// (0x0004687e) cntbar_detail_list_event_pane_g1

0x9925,	// (0x0004688a) cntbar_detail_list_event_pane_g2_ParamLimits

0x9925,	// (0x0004688a) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0004cdf3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0004cdf3) cntbar_detail_list_event_pane_g

0x9991,	// (0x000468f6) cntbar_detail_list_event_pane_t1_ParamLimits

0x9991,	// (0x000468f6) cntbar_detail_list_event_pane_t1

0x99a6,	// (0x0004690b) cntbar_detail_list_event_pane_t2_ParamLimits

0x99a6,	// (0x0004690b) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0004ce00) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0004ce00) cntbar_detail_list_event_pane_t

0xcd53,	// (0x00049cb8) cell_cntbar_detail_list_shct_pane_g1

0xb505,	// (0x0004846a) navi_pane_mv_g3

0xb096,	// (0x00047ffb) main_cntbar_detail_pane_ParamLimits

0xa19a,	// (0x000470ff) main_notif_wgt_pane

0x6d63,	// (0x00043cc8) aid_tch_main_mp4_pane_g4

0x6fc2,	// (0x00043f27) popup_slider_window_cp02

0x1fdd,	// (0x0003ef42) list_recal_day_event_pane

0x9872,	// (0x000467d7) cntbar_detail_btn_pane_ParamLimits

0x9872,	// (0x000467d7) cntbar_detail_btn_pane

0x9882,	// (0x000467e7) cntbar_detail_btn_pane_cp01_ParamLimits

0x9882,	// (0x000467e7) cntbar_detail_btn_pane_cp01

0x989e,	// (0x00046803) cntbar_detail_list_shct_pane_ParamLimits

0x98aa,	// (0x0004680f) cntbar_detail_pane_g1_ParamLimits

0x98aa,	// (0x0004680f) cntbar_detail_pane_g1

0x98b6,	// (0x0004681b) cntbar_detail_pane_t1_ParamLimits

0x98b6,	// (0x0004681b) cntbar_detail_pane_t1

0x9931,	// (0x00046896) cntbar_detail_list_event_pane_g3_ParamLimits

0x9931,	// (0x00046896) cntbar_detail_list_event_pane_g3

0x9949,	// (0x000468ae) cntbar_detail_list_event_pane_g4_ParamLimits

0x9949,	// (0x000468ae) cntbar_detail_list_event_pane_g4

0x9961,	// (0x000468c6) cntbar_detail_list_event_pane_g5_ParamLimits

0x9961,	// (0x000468c6) cntbar_detail_list_event_pane_g5

0x9979,	// (0x000468de) cntbar_detail_list_event_pane_g6_ParamLimits

0x9979,	// (0x000468de) cntbar_detail_list_event_pane_g6

0x99bb,	// (0x00046920) cntbar_detail_list_event_pane_t3_ParamLimits

0x99bb,	// (0x00046920) cntbar_detail_list_event_pane_t3

0x99cd,	// (0x00046932) popup_notif_wgt_window_ParamLimits

0x99cd,	// (0x00046932) popup_notif_wgt_window

0x99dd,	// (0x00046942) popup_submenu_window_cp01_ParamLimits

0x99dd,	// (0x00046942) popup_submenu_window_cp01

0xaad0,	// (0x00047a35) bg_popup_window_pane_cp10

0xed9f,	// (0x0004bd04) listscroll_notif_wgt_pane

0xedb1,	// (0x0004bd16) list_notif_wgt_window

0xedba,	// (0x0004bd1f) scroll_pane_cp033

0x99ef,	// (0x00046954) list_notif_wgt_row_pane_ParamLimits

0x99ef,	// (0x00046954) list_notif_wgt_row_pane

0xedc3,	// (0x0004bd28) aid_size_list_notif_wgt_del

0xedd0,	// (0x0004bd35) list_notif_wgt_row_pane_g1

0xeddc,	// (0x0004bd41) list_notif_wgt_row_pane_g2

0xedeb,	// (0x0004bd50) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0004ce07) list_notif_wgt_row_pane_g

0xedf8,	// (0x0004bd5d) list_notif_wgt_row_pane_t1

0xee0e,	// (0x0004bd73) list_notif_wgt_row_pane_t2

0xee20,	// (0x0004bd85) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0004ce0e) list_notif_wgt_row_pane_t

0xd974,	// (0x0004a8d9) list_recal_day_event_pane_g1

0xee32,	// (0x0004bd97) list_recal_day_event_pane_t1

0xa19a,	// (0x000470ff) bg_button_pane_cp045

0x9a01,	// (0x00046966) cntbar_detail_btn_pane_t1

0xc94b,	// (0x000498b0) main_callh_pane_ParamLimits

0xc94b,	// (0x000498b0) main_callh_pane

0xa19a,	// (0x000470ff) main_coverflow0_pane

0xa19a,	// (0x000470ff) main_wgtman_pane

0x9051,	// (0x00045fb6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9051,	// (0x00045fb6) main_fs_bigclock_unlock_btn_pane

0x939e,	// (0x00046303) bg_button_pane_cp16

0x93ae,	// (0x00046313) cell_tport_appsw_pane_g3

0x9a0f,	// (0x00046974) cf0_flow_pane_ParamLimits

0x9a0f,	// (0x00046974) cf0_flow_pane

0xee41,	// (0x0004bda6) listscroll_cf0_pane

0xee4c,	// (0x0004bdb1) main_cf0_pane_g1

0x9a1e,	// (0x00046983) main_cf0_pane_t1_ParamLimits

0x9a1e,	// (0x00046983) main_cf0_pane_t1

0x9a32,	// (0x00046997) main_cf0_pane_t2_ParamLimits

0x9a32,	// (0x00046997) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0004ce1a) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0004ce1a) main_cf0_pane_t

0xee5e,	// (0x0004bdc3) scroll_pane_cp11

0x9a46,	// (0x000469ab) cf0_flow_pane_g1

0x9a4e,	// (0x000469b3) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0004ce1f) cf0_flow_pane_g

0x9a56,	// (0x000469bb) cf0_flow_pane_t1

0xa19a,	// (0x000470ff) main_call6_pane

0xa19a,	// (0x000470ff) main_calllock_pane

0x9a64,	// (0x000469c9) call6_btn_grp_pane_ParamLimits

0x9a64,	// (0x000469c9) call6_btn_grp_pane

0x9a73,	// (0x000469d8) call6_pane_g1_ParamLimits

0x9a73,	// (0x000469d8) call6_pane_g1

0x9a83,	// (0x000469e8) popup_call6_1st_window_ParamLimits

0x9a83,	// (0x000469e8) popup_call6_1st_window

0x9a91,	// (0x000469f6) popup_call6_2nd_window_ParamLimits

0x9a91,	// (0x000469f6) popup_call6_2nd_window

0x9a9f,	// (0x00046a04) cell_call6_btn_pane_ParamLimits

0x9a9f,	// (0x00046a04) cell_call6_btn_pane

0xaad0,	// (0x00047a35) bg_popup_call2_in_pane_cp03

0xee69,	// (0x0004bdce) popup_call6_1st_window_g1

0xee71,	// (0x0004bdd6) popup_call6_1st_window_g2

0xee79,	// (0x0004bdde) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0004ce24) popup_call6_1st_window_g

0xee81,	// (0x0004bde6) popup_call6_1st_window_t1

0xee90,	// (0x0004bdf5) popup_call6_1st_window_t2

0xee9e,	// (0x0004be03) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0004ce2b) popup_call6_1st_window_t

0xaad0,	// (0x00047a35) bg_popup_call2_in_pane_cp04

0xee69,	// (0x0004bdce) popup_call6_2nd_window_g1

0xee71,	// (0x0004bdd6) popup_call6_2nd_window_g2

0xee79,	// (0x0004bdde) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0004ce24) popup_call6_2nd_window_g

0xee81,	// (0x0004bde6) popup_call6_2nd_window_t1

0xa19a,	// (0x000470ff) bg_button_pane_cp15

0xeee3,	// (0x0004be48) cell_call6_btn_pane_g1

0x9aae,	// (0x00046a13) cell_call6_btn_pane_t1

0x9abd,	// (0x00046a22) listscroll_wgtman_pane_ParamLimits

0x9abd,	// (0x00046a22) listscroll_wgtman_pane

0x9ad9,	// (0x00046a3e) wgtman_btn_pane_ParamLimits

0x9ad9,	// (0x00046a3e) wgtman_btn_pane

0xb30c,	// (0x00048271) aid_scroll_copy1

0xeeac,	// (0x0004be11) list_wgtman_pane

0x9b0e,	// (0x00046a73) wgtman_btn_pane_g1_ParamLimits

0x9b0e,	// (0x00046a73) wgtman_btn_pane_g1

0x9b36,	// (0x00046a9b) wgtman_btn_pane_t1_ParamLimits

0x9b36,	// (0x00046a9b) wgtman_btn_pane_t1

0xeeb6,	// (0x0004be1b) wgtman_btn_pane_t2_ParamLimits

0xeeb6,	// (0x0004be1b) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0004ce32) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0004ce32) wgtman_btn_pane_t

0x9b6d,	// (0x00046ad2) listrow_wgtman_pane_ParamLimits

0x9b6d,	// (0x00046ad2) listrow_wgtman_pane

0x9b88,	// (0x00046aed) listrow_wgtman_pane_g1

0x9b95,	// (0x00046afa) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0004ce37) listrow_wgtman_pane_g

0x20f6,	// (0x0003f05b) listrow_wgtman_pane_t1

0x210e,	// (0x0003f073) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0004ce3c) listrow_wgtman_pane_t

0x2134,	// (0x0003f099) wait_bar_pane_cp09

0xeecd,	// (0x0004be32) main_calllock_btn_pane

0xeed7,	// (0x0004be3c) main_calllock_pane_g1

0xa19a,	// (0x000470ff) bg_button_pane_cp17

0xeee3,	// (0x0004be48) main_calllock_btn_pane_g1

0xeeec,	// (0x0004be51) main_calllock_btn_pane_t1

0xa19a,	// (0x000470ff) main_dialer3_pane

0xa19a,	// (0x000470ff) main_fmrd2_pane

0xcd53,	// (0x00049cb8) main_fs_bigclock_unlock_btn_pane_g1

0x9bbb,	// (0x00046b20) main_fs_bigclock_unlock_btn_pane_t1

0x9bc9,	// (0x00046b2e) area_fmrd2_info_pane_ParamLimits

0x9bc9,	// (0x00046b2e) area_fmrd2_info_pane

0x9bd7,	// (0x00046b3c) area_fmrd2_visual_pane_ParamLimits

0x9bd7,	// (0x00046b3c) area_fmrd2_visual_pane

0x9be5,	// (0x00046b4a) fmrd2_indi_pane_ParamLimits

0x9be5,	// (0x00046b4a) fmrd2_indi_pane

0x9bf2,	// (0x00046b57) area_fmrd2_visual_pane_g1

0x9bfa,	// (0x00046b5f) area_fmrd2_visual_pane_t1

0x9c0a,	// (0x00046b6f) area_fmrd2_visual_pane_t2

0x9c1a,	// (0x00046b7f) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0004ce46) area_fmrd2_visual_pane_t

0x9c2a,	// (0x00046b8f) area_fmrd2_info_pane_g1

0x9c32,	// (0x00046b97) area_fmrd2_info_pane_t1

0x9c42,	// (0x00046ba7) area_fmrd2_info_pane_t2

0x9c52,	// (0x00046bb7) area_fmrd2_info_pane_t3

0x9c62,	// (0x00046bc7) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0004ce4d) area_fmrd2_info_pane_t

0x9c70,	// (0x00046bd5) fmrd2_indi_pane_t1

0x9c80,	// (0x00046be5) fmrd2_indi_pane_t2

0x9c90,	// (0x00046bf5) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0004ce56) fmrd2_indi_pane_t

0xe4c6,	// (0x0004b42b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4c6,	// (0x0004b42b) list_single_fs_bigclock_indicator_pane_g5

0xe577,	// (0x0004b4dc) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe577,	// (0x0004b4dc) list_single_fs_bigclock_indicator_pane_t5

0x9533,	// (0x00046498) aid_cell_bcale_month_pane_ParamLimits

0x9533,	// (0x00046498) aid_cell_bcale_month_pane

0x9551,	// (0x000464b6) bcale_month_pane_ParamLimits

0x9551,	// (0x000464b6) bcale_month_pane

0x956f,	// (0x000464d4) bcale_preview_pane_ParamLimits

0x956f,	// (0x000464d4) bcale_preview_pane

0xecd2,	// (0x0004bc37) list_single_fs_bigclock_pane_t1_ParamLimits

0xecf1,	// (0x0004bc56) list_single_fs_bigclock_pane_t2_ParamLimits

0xecf1,	// (0x0004bc56) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0004cdd8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004cdd8) list_single_fs_bigclock_pane_t

0x9bb3,	// (0x00046b18) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0004ce41) main_fs_bigclock_unlock_btn_pane_g

0x9c9e,	// (0x00046c03) aid_dia3_key_size_ParamLimits

0x9c9e,	// (0x00046c03) aid_dia3_key_size

0x9caa,	// (0x00046c0f) aid_dia3_listrow_size_ParamLimits

0x9caa,	// (0x00046c0f) aid_dia3_listrow_size

0x9cba,	// (0x00046c1f) dia3_keypad_fun_pane_ParamLimits

0x9cba,	// (0x00046c1f) dia3_keypad_fun_pane

0x9ccc,	// (0x00046c31) dia3_keypad_num_pane_ParamLimits

0x9ccc,	// (0x00046c31) dia3_keypad_num_pane

0x9cde,	// (0x00046c43) dia3_listscroll_pane_ParamLimits

0x9cde,	// (0x00046c43) dia3_listscroll_pane

0x9cec,	// (0x00046c51) dia3_numentry_pane_ParamLimits

0x9cec,	// (0x00046c51) dia3_numentry_pane

0xeefb,	// (0x0004be60) dia3_list_pane

0xef06,	// (0x0004be6b) scroll_pane_cp12

0xa19a,	// (0x000470ff) bg_dia3_numentry_pane

0x9cfa,	// (0x00046c5f) dia3_numentry_pane_t1

0x9d09,	// (0x00046c6e) cell_dia3_key_num_pane

0x9d11,	// (0x00046c76) cell_dia3_key0_fun_pane_ParamLimits

0x9d11,	// (0x00046c76) cell_dia3_key0_fun_pane

0x9d1e,	// (0x00046c83) cell_dia3_key1_fun_pane_ParamLimits

0x9d1e,	// (0x00046c83) cell_dia3_key1_fun_pane

0x9d2b,	// (0x00046c90) dia3_listrow_pane

0xe207,	// (0x0004b16c) bg_dia3_numentry_pane_g1

0xa19a,	// (0x000470ff) bg_button_pane_cp21

0xef11,	// (0x0004be76) cell_dia3_key_num_pane_t1

0xef1f,	// (0x0004be84) cell_dia3_key_num_pane_t2

0xef2e,	// (0x0004be93) cell_dia3_key_num_pane_t3

0xef3d,	// (0x0004bea2) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0004ce5d) cell_dia3_key_num_pane_t

0xa19a,	// (0x000470ff) bg_button_pane_cp19

0x9d38,	// (0x00046c9d) cell_dia3_key0_fun_pane_g1

0xa19a,	// (0x000470ff) bg_button_pane_cp20

0x9d40,	// (0x00046ca5) cell_dia3_key1_fun_pane_g1

0x9d48,	// (0x00046cad) area_left_week_number_pane

0x9d5b,	// (0x00046cc0) area_top_day_name_pane

0x9d69,	// (0x00046cce) frame_month_view_pane

0xef4c,	// (0x0004beb1) grid_month_view_pane

0x9d7e,	// (0x00046ce3) cell_top_day_name_pane_ParamLimits

0x9d7e,	// (0x00046ce3) cell_top_day_name_pane

0x9d98,	// (0x00046cfd) cell_area_left_week_number_pane_ParamLimits

0x9d98,	// (0x00046cfd) cell_area_left_week_number_pane

0x9dbb,	// (0x00046d20) cell_month_view_pane_ParamLimits

0x9dbb,	// (0x00046d20) cell_month_view_pane

0xef5a,	// (0x0004bebf) frm_month_g1

0x9de7,	// (0x00046d4c) frm_month_g2

0x9df8,	// (0x00046d5d) frm_month_g3

0x9e09,	// (0x00046d6e) frm_month_g4

0x9e1a,	// (0x00046d7f) frm_month_g5

0x9e2d,	// (0x00046d92) frm_month_g6

0x9e40,	// (0x00046da5) frm_month_g7

0xef67,	// (0x0004becc) frm_month_g8

0x9e53,	// (0x00046db8) frm_month_g9

0x9e60,	// (0x00046dc5) frm_month_g10

0x9e6d,	// (0x00046dd2) frm_month_g11

0x9e7a,	// (0x00046ddf) frm_month_g12

0x9e87,	// (0x00046dec) frm_month_g13

0x9e94,	// (0x00046df9) frm_month_g14

0x9ea3,	// (0x00046e08) frm_month_g15

0x9eb2,	// (0x00046e17) frm_month_g16

0x000f,

0xff01,	// (0x0004ce66) frm_month_g

0xef74,	// (0x0004bed9) cell_top_day_name_pane_t1

0x9ec1,	// (0x00046e26) cell_area_left_week_number_pane_g1

0x9ed0,	// (0x00046e35) cell_area_left_week_number_pane_t1

0xcfb6,	// (0x00049f1b) cell_month_view_pane_g1

0x9ee6,	// (0x00046e4b) cell_month_view_pane_t1

0xa19a,	// (0x000470ff) main_fps_pane

0xe794,	// (0x0004b6f9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe794,	// (0x0004b6f9) cmail_ddmenu_btn02_pane_cp1

0xe7b0,	// (0x0004b715) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7b0,	// (0x0004b715) cmail_ddmenu_btn02_pane_cp2

0x975a,	// (0x000466bf) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x975a,	// (0x000466bf) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0004cd8b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0004cd8b) cmail_ddmenu_btn02_pane_g

0x9778,	// (0x000466dd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9778,	// (0x000466dd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0004cd90) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0004cd90) cmail_ddmenu_btn02_pane_t

0x9efc,	// (0x00046e61) fps_text_pane_ParamLimits

0x9efc,	// (0x00046e61) fps_text_pane

0x9f09,	// (0x00046e6e) main_fps_pane_g1_ParamLimits

0x9f09,	// (0x00046e6e) main_fps_pane_g1

0x9f17,	// (0x00046e7c) wait_bar_pane_cp010_ParamLimits

0x9f17,	// (0x00046e7c) wait_bar_pane_cp010

0x9f23,	// (0x00046e88) fps_text_pane_t1_ParamLimits

0x9f23,	// (0x00046e88) fps_text_pane_t1

0x746d,	// (0x000443d2) cam4_image_uncrop_pane_g1

0x7476,	// (0x000443db) cam4_image_uncrop_pane_g2

0x747f,	// (0x000443e4) cam4_image_uncrop_pane_g3

0x7488,	// (0x000443ed) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004c853) cam4_image_uncrop_pane_g

0x9d2b,	// (0x00046c90) dia3_listrow_pane_ParamLimits

0xa19a,	// (0x000470ff) main_phob2_pane

0x9380,	// (0x000462e5) cell_tport_appsw_pane_cp02_ParamLimits

0x9380,	// (0x000462e5) cell_tport_appsw_pane_cp02

0x938f,	// (0x000462f4) cell_tport_appsw_pane_cp03_ParamLimits

0x938f,	// (0x000462f4) cell_tport_appsw_pane_cp03

0xa19a,	// (0x000470ff) phob2_contact_card_pane

0xa19a,	// (0x000470ff) phob2_listscroll_pane

0xef87,	// (0x0004beec) phob2_list_pane

0xef8f,	// (0x0004bef4) scroll_pane_cp034

0x9f3c,	// (0x00046ea1) phob2_cc_data_pane_ParamLimits

0x9f3c,	// (0x00046ea1) phob2_cc_data_pane

0x9f56,	// (0x00046ebb) phob2_cc_listscroll_pane_ParamLimits

0x9f56,	// (0x00046ebb) phob2_cc_listscroll_pane

0x9b6d,	// (0x00046ad2) list_double_large_graphic_phob2_pane_ParamLimits

0x9b6d,	// (0x00046ad2) list_double_large_graphic_phob2_pane

0x9f70,	// (0x00046ed5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9f70,	// (0x00046ed5) list_double_large_graphic_phob2_pane_g1

0x2146,	// (0x0003f0ab) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2146,	// (0x0003f0ab) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0004ce87) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0004ce87) list_double_large_graphic_phob2_pane_g

0x2152,	// (0x0003f0b7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2152,	// (0x0003f0b7) list_double_large_graphic_phob2_pane_t1

0x2167,	// (0x0003f0cc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2167,	// (0x0003f0cc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0004ce8c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0004ce8c) list_double_large_graphic_phob2_pane_t

0xa19a,	// (0x000470ff) list_highlight_pane_cp024

0x9f86,	// (0x00046eeb) phob2_cc_button_pane

0x9f8e,	// (0x00046ef3) phob2_cc_data_pane_g1_ParamLimits

0x9f8e,	// (0x00046ef3) phob2_cc_data_pane_g1

0x9f9a,	// (0x00046eff) phob2_cc_data_pane_g2_ParamLimits

0x9f9a,	// (0x00046eff) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0004ce91) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0004ce91) phob2_cc_data_pane_g

0x9fa6,	// (0x00046f0b) phob2_cc_data_pane_t1_ParamLimits

0x9fa6,	// (0x00046f0b) phob2_cc_data_pane_t1

0x9fb8,	// (0x00046f1d) phob2_cc_data_pane_t2_ParamLimits

0x9fb8,	// (0x00046f1d) phob2_cc_data_pane_t2

0x9fca,	// (0x00046f2f) phob2_cc_data_pane_t3_ParamLimits

0x9fca,	// (0x00046f2f) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0004ce96) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0004ce96) phob2_cc_data_pane_t

0xef97,	// (0x0004befc) phob2_cc_list_pane_ParamLimits

0xef97,	// (0x0004befc) phob2_cc_list_pane

0xdc7d,	// (0x0004abe2) scroll_pane_cp035_ParamLimits

0xdc7d,	// (0x0004abe2) scroll_pane_cp035

0xb096,	// (0x00047ffb) bg_button_pane_cp033

0xefa3,	// (0x0004bf08) phob2_cc_button_pane_g1

0xefaf,	// (0x0004bf14) phob2_cc_button_pane_t1

0xefc4,	// (0x0004bf29) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0004ce9d) phob2_cc_button_pane_t

0x9fdc,	// (0x00046f41) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9fdc,	// (0x00046f41) list_double_large_graphic_phob2_cc_pane

0xa04a,	// (0x00046faf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa04a,	// (0x00046faf) list_double_large_graphic_phob2_cc_pane_g1

0x2179,	// (0x0003f0de) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x2179,	// (0x0003f0de) list_double_large_graphic_phob2_cc_pane_g2

0x2185,	// (0x0003f0ea) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x2185,	// (0x0003f0ea) list_double_large_graphic_phob2_cc_pane_g3

0x2191,	// (0x0003f0f6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x2191,	// (0x0003f0f6) list_double_large_graphic_phob2_cc_pane_g4

0x219d,	// (0x0003f102) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x219d,	// (0x0003f102) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0004cea2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0004cea2) list_double_large_graphic_phob2_cc_pane_g

0x21a9,	// (0x0003f10e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x21a9,	// (0x0003f10e) list_double_large_graphic_phob2_cc_pane_t1

0x21d2,	// (0x0003f137) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x21d2,	// (0x0003f137) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0004cead) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0004cead) list_double_large_graphic_phob2_cc_pane_t

0xefd6,	// (0x0004bf3b) list_highlight_pane_cp025_ParamLimits

0xefd6,	// (0x0004bf3b) list_highlight_pane_cp025

0xb096,	// (0x00047ffb) bg_button_pane_cp033_ParamLimits

0xefa3,	// (0x0004bf08) phob2_cc_button_pane_g1_ParamLimits

0xefaf,	// (0x0004bf14) phob2_cc_button_pane_t1_ParamLimits

0xefc4,	// (0x0004bf29) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0004ce9d) phob2_cc_button_pane_t_ParamLimits

0x24d2,	// (0x0003f437) popup_wgtman_window

0xd844,	// (0x0004a7a9) scroll_pane_cp038

0x9af6,	// (0x00046a5b) wgtman_btn_pane_cp_01_ParamLimits

0x9af6,	// (0x00046a5b) wgtman_btn_pane_cp_01

0xefe4,	// (0x0004bf49) wgtman_content_pane

0xefed,	// (0x0004bf52) wgtman_heading_pane

0xa19a,	// (0x000470ff) bg_heading_pane_cp02

0xeff6,	// (0x0004bf5b) wgtman_heading_pane_g1

0xeffe,	// (0x0004bf63) wgtman_heading_pane_t1

0xf00c,	// (0x0004bf71) scroll_pane_cp036

0xf014,	// (0x0004bf79) wgtman_list_pane

0xf01c,	// (0x0004bf81) wgtman_list_pane_t1_ParamLimits

0xf01c,	// (0x0004bf81) wgtman_list_pane_t1

0x73cc,	// (0x00044331) cam4_grid_pane

0x137d,	// (0x0003e2e2) bg_button_pane_cp015_ParamLimits

0x80a2,	// (0x00045007) bg_button_pane_cp016_ParamLimits

0x80b5,	// (0x0004501a) bg_button_pane_cp017_ParamLimits

0x13c1,	// (0x0003e326) popup_vitu2_query_window_g3_ParamLimits

0x13c1,	// (0x0003e326) popup_vitu2_query_window_g3

0x143a,	// (0x0003e39f) popup_vitu2_query_window_t6_ParamLimits

0x143a,	// (0x0003e39f) popup_vitu2_query_window_t6

0x1465,	// (0x0003e3ca) popup_vitu2_query_window_t7_ParamLimits

0x1465,	// (0x0003e3ca) popup_vitu2_query_window_t7

0xe30c,	// (0x0004b271) cam4_grid_pane_g1

0xe315,	// (0x0004b27a) cam4_grid_pane_g2

0xf036,	// (0x0004bf9b) cam4_grid_pane_g3

0xf03f,	// (0x0004bfa4) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0004ceb2) cam4_grid_pane_g

0x324a,	// (0x000401af) aid_placing_vt_slider_lsc_ParamLimits

0x3596,	// (0x000404fb) vidtel_button_pane_ParamLimits

0x3596,	// (0x000404fb) vidtel_button_pane

0xa19a,	// (0x000470ff) bg_button_pane_cp034

0xf04a,	// (0x0004bfaf) vidtel_button_pane_g1

0xf052,	// (0x0004bfb7) vidtel_button_pane_t1

0xd964,	// (0x0004a8c9) aid_size_vtel_slider_touch

0xdc7d,	// (0x0004abe2) scroll_pane_cp039

0x8d8e,	// (0x00045cf3) ncim_query_button_pane_cp01_ParamLimits

0x8dad,	// (0x00045d12) ncimui_query_pane_g1_ParamLimits

0xb096,	// (0x00047ffb) input_focus_pane_cp012_ParamLimits

0xe245,	// (0x0004b1aa) ncim_query_entry_pane_t1_ParamLimits

0xdc7d,	// (0x0004abe2) scroll_pane_cp039_ParamLimits

0xb3f0,	// (0x00048355) navi_pane_bcale_mc_g1

0xb3f8,	// (0x0004835d) navi_pane_bcale_mc_t1

0xe7f9,	// (0x0004b75e) main_sp_fs_email_pane_g1

0xe805,	// (0x0004b76a) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0004cc43) main_sp_fs_email_pane_g

0xea56,	// (0x0004b9bb) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea56,	// (0x0004b9bb) list_single_cale_mrui_row_pane_g3

0x203c,	// (0x0003efa1) list_single_recal_day_pane_g5_event_pane

0x2052,	// (0x0003efb7) list_single_recal_day_pane_g7

0xf068,	// (0x0004bfcd) list_recal_day_event_pane_cp01

0xf071,	// (0x0004bfd6) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0004bfde) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0004bfe6) list_recal_vselct_pane_cp01

0xd974,	// (0x0004a8d9) list_recal_day_event_pane_cp01_g1

0x21fb,	// (0x0003f160) list_recal_day_event_pane_cp01_t1

0x205a,	// (0x0003efbf) list_single_recal_day_pane_t1_ParamLimits

0x206c,	// (0x0003efd1) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0004cda0) list_single_recal_day_pane_t_ParamLimits

0xa846,	// (0x000477ab) bg_notes_pane_ParamLimits

0xa8e9,	// (0x0004784e) list_notes_pane_ParamLimits

0x2830,	// (0x0003f795) scroll_pane_cp06_ParamLimits

0xa90b,	// (0x00047870) main_notes_pane_ParamLimits

0xa19a,	// (0x000470ff) main_welc_pane

0xa05b,	// (0x00046fc0) main_welc_body_pane_ParamLimits

0xa05b,	// (0x00046fc0) main_welc_body_pane

0xa075,	// (0x00046fda) main_welc_opti_pane_ParamLimits

0xa075,	// (0x00046fda) main_welc_opti_pane

0xa0a8,	// (0x0004700d) main_welc_pane_t1_ParamLimits

0xa0a8,	// (0x0004700d) main_welc_pane_t1

0xa0c2,	// (0x00047027) main_welc_body_row_pane_ParamLimits

0xa0c2,	// (0x00047027) main_welc_body_row_pane

0xdfd6,	// (0x0004af3b) main_welc_opti_row_pane_ParamLimits

0xdfd6,	// (0x0004af3b) main_welc_opti_row_pane

0xf08b,	// (0x0004bff0) main_welc_opti_row_pane_g1

0xa0e7,	// (0x0004704c) main_welc_opti_row_pane_t1

0xf093,	// (0x0004bff8) main_welc_body_row_pane_t1

0xeda9,	// (0x0004bd0e) popup_notif_wgt_heading_pane

0xedc3,	// (0x0004bd28) aid_size_list_notif_wgt_del_ParamLimits

0xedd0,	// (0x0004bd35) list_notif_wgt_row_pane_g1_ParamLimits

0xeddc,	// (0x0004bd41) list_notif_wgt_row_pane_g2_ParamLimits

0xedeb,	// (0x0004bd50) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0004ce07) list_notif_wgt_row_pane_g_ParamLimits

0xedf8,	// (0x0004bd5d) list_notif_wgt_row_pane_t1_ParamLimits

0xee0e,	// (0x0004bd73) list_notif_wgt_row_pane_t2_ParamLimits

0xee20,	// (0x0004bd85) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0004ce0e) list_notif_wgt_row_pane_t_ParamLimits

0x9b88,	// (0x00046aed) listrow_wgtman_pane_g1_ParamLimits

0x9b95,	// (0x00046afa) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0004ce37) listrow_wgtman_pane_g_ParamLimits

0x20f6,	// (0x0003f05b) listrow_wgtman_pane_t1_ParamLimits

0x210e,	// (0x0003f073) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0004ce3c) listrow_wgtman_pane_t_ParamLimits

0x2134,	// (0x0003f099) wait_bar_pane_cp09_ParamLimits

0xa19a,	// (0x000470ff) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0004c007) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0004c00f) popup_notif_wgt_heading_pane_t1

0xa19a,	// (0x000470ff) main_vids_pane

0xa19a,	// (0x000470ff) vids_listscroll_pane

0xa0f6,	// (0x0004705b) scroll_pane_cp040

0xa19a,	// (0x000470ff) vids_list_pane

0xa101,	// (0x00047066) vids_list_double_pane_ParamLimits

0xa101,	// (0x00047066) vids_list_double_pane

0xa11b,	// (0x00047080) vids_list_double_pane_g1

0xa124,	// (0x00047089) vids_list_double_pane_t1

0xa134,	// (0x00047099) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0004cec0) vids_list_double_pane_t

0xb096,	// (0x00047ffb) main_ncimui_pane_ParamLimits

0x8be5,	// (0x00045b4a) main_ncimui_pane_g1_ParamLimits

0x8bf1,	// (0x00045b56) main_ncimui_pane_g2_ParamLimits

0x8bf1,	// (0x00045b56) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0004cb48) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0004cb48) main_ncimui_pane_g

0xa08e,	// (0x00046ff3) main_welc_pane_g1_ParamLimits

0xa08e,	// (0x00046ff3) main_welc_pane_g1

0xa09a,	// (0x00046fff) main_welc_pane_g2_ParamLimits

0xa09a,	// (0x00046fff) main_welc_pane_g2

0x0001,

0xff56,	// (0x0004cebb) main_welc_pane_g_ParamLimits

0xff56,	// (0x0004cebb) main_welc_pane_g

0xa846,	// (0x000477ab) listscroll_mce_pane_ParamLimits

0xb545,	// (0x000484aa) wait_bar_pane_cp10

0xc93f,	// (0x000498a4) main_cale_day_pane_ParamLimits

0xc93f,	// (0x000498a4) main_cale_week_pane_ParamLimits

0xa846,	// (0x000477ab) main_messa_pane_ParamLimits

0x6704,	// (0x00043669) main_clock2_btn_pane_ParamLimits

0x6704,	// (0x00043669) main_clock2_btn_pane

0xd15e,	// (0x0004a0c3) main_clock2_btn_pane_cp01_ParamLimits

0xd15e,	// (0x0004a0c3) main_clock2_btn_pane_cp01

0xea27,	// (0x0004b98c) list_cale_mrui_pane_ParamLimits

0xee56,	// (0x0004bdbb) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0004ce15) main_cf0_pane_g

0x9d48,	// (0x00046cad) area_left_week_number_pane_ParamLimits

0x9d5b,	// (0x00046cc0) area_top_day_name_pane_ParamLimits

0x9d69,	// (0x00046cce) frame_month_view_pane_ParamLimits

0xef4c,	// (0x0004beb1) grid_month_view_pane_ParamLimits

0xef5a,	// (0x0004bebf) frm_month_g1_ParamLimits

0x9de7,	// (0x00046d4c) frm_month_g2_ParamLimits

0x9df8,	// (0x00046d5d) frm_month_g3_ParamLimits

0x9e09,	// (0x00046d6e) frm_month_g4_ParamLimits

0x9e1a,	// (0x00046d7f) frm_month_g5_ParamLimits

0x9e2d,	// (0x00046d92) frm_month_g6_ParamLimits

0x9e40,	// (0x00046da5) frm_month_g7_ParamLimits

0xef67,	// (0x0004becc) frm_month_g8_ParamLimits

0x9e53,	// (0x00046db8) frm_month_g9_ParamLimits

0x9e60,	// (0x00046dc5) frm_month_g10_ParamLimits

0x9e6d,	// (0x00046dd2) frm_month_g11_ParamLimits

0x9e7a,	// (0x00046ddf) frm_month_g12_ParamLimits

0x9e87,	// (0x00046dec) frm_month_g13_ParamLimits

0x9e94,	// (0x00046df9) frm_month_g14_ParamLimits

0x9ea3,	// (0x00046e08) frm_month_g15_ParamLimits

0x9eb2,	// (0x00046e17) frm_month_g16_ParamLimits

0xff01,	// (0x0004ce66) frm_month_g_ParamLimits

0xef74,	// (0x0004bed9) cell_top_day_name_pane_t1_ParamLimits

0x9ec1,	// (0x00046e26) cell_area_left_week_number_pane_g1_ParamLimits

0x9ed0,	// (0x00046e35) cell_area_left_week_number_pane_t1_ParamLimits

0xcfb6,	// (0x00049f1b) cell_month_view_pane_g1_ParamLimits

0x9ee6,	// (0x00046e4b) cell_month_view_pane_t1_ParamLimits

0xa83e,	// (0x000477a3) main_clock2_btn_pane_g1

0xf0b8,	// (0x0004c01d) main_clock2_btn_pane_t1

0xb096,	// (0x00047ffb) listscroll_cmail_pane_ParamLimits

0xe7f9,	// (0x0004b75e) main_sp_fs_email_pane_g1_ParamLimits

0xe805,	// (0x0004b76a) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0004cc43) main_sp_fs_email_pane_g_ParamLimits

0xeb35,	// (0x0004ba9a) list_recal_day_pane_ParamLimits

0xeb46,	// (0x0004baab) mian_recal_day_pane_t1

0x19fb,	// (0x0003e960) list_single_dyc_row_text_pane_t4_ParamLimits

0x19fb,	// (0x0003e960) list_single_dyc_row_text_pane_t4

0x1a32,	// (0x0003e997) list_single_dyc_row_text_pane_t5_ParamLimits

0x1a32,	// (0x0003e997) list_single_dyc_row_text_pane_t5

0x1aa8,	// (0x0003ea0d) list_single_dyc_row_text_pane_t6_ParamLimits

0x1aa8,	// (0x0003ea0d) list_single_dyc_row_text_pane_t6

0x43c1,	// (0x00041326) aid_mgn_list_cale_time_pane

0xb096,	// (0x00047ffb) main_gallery2_pane_ParamLimits

0xd174,	// (0x0004a0d9) main_clock2_pane_cp01_t1

0xd184,	// (0x0004a0e9) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0004c725) main_clock2_pane_cp01_t

0x2c74,	// (0x0003fbd9) cale_week_scroll_pane_g16_ParamLimits

0x2c74,	// (0x0003fbd9) cale_week_scroll_pane_g16

0xaad0,	// (0x00047a35) vorec_slider_pane

0xf052,	// (0x0004bfb7) vidtel_button_pane_t1_ParamLimits

0x97db,	// (0x00046740) main_fs_bigclock_clock_pane_g1_ParamLimits

0x97db,	// (0x00046740) main_fs_bigclock_clock_pane_g2_ParamLimits

0x97e8,	// (0x0004674d) main_fs_bigclock_clock_pane_g3_ParamLimits

0x97e8,	// (0x0004674d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe5e,	// (0x0004cdc3) main_fs_bigclock_clock_pane_g_ParamLimits

0x97f4,	// (0x00046759) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9807,	// (0x0004676c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe67,	// (0x0004cdcc) main_fs_bigclock_clock_pane_t_ParamLimits

0x5fa3,	// (0x00042f08) main_mup3_lyrics_pane_ParamLimits

0x5fa3,	// (0x00042f08) main_mup3_lyrics_pane

0xa168,	// (0x000470cd) main_mup3_lyrics_pane_t1_ParamLimits

0xa168,	// (0x000470cd) main_mup3_lyrics_pane_t1

0x6d4d,	// (0x00043cb2) aid_main_mp4_pane_t1_area

0x6d57,	// (0x00043cbc) aid_main_mp4_pane_t2_area

0x6e56,	// (0x00043dbb) main_mp4_pane_g7_ParamLimits

0x6e56,	// (0x00043dbb) main_mp4_pane_g7

0x6e62,	// (0x00043dc7) main_mp4_pane_g8_ParamLimits

0x6e62,	// (0x00043dc7) main_mp4_pane_g8

0x7274,	// (0x000441d9) aid_call6_pane_g1_size

0xa01e,	// (0x00046f83) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa01e,	// (0x00046f83) list_double_large_graphic_phob2_other_pane

0xae94,	// (0x00047df9) list_double_large_graphic_phob2_other_pane_g1

0xa19a,	// (0x000470ff) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
