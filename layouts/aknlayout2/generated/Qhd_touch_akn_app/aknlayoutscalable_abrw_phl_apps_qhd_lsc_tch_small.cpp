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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00059ae7 };

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
0x0de1,	// (0x0005a8c8) Screen

0x0ded,	// (0x0005a8d4) application_window

0x0e5f,	// (0x0005a946) area_bottom_pane_ParamLimits

0x0e5f,	// (0x0005a946) area_bottom_pane

0x0ebc,	// (0x0005a9a3) area_top_pane_ParamLimits

0x0ebc,	// (0x0005a9a3) area_top_pane

0x9a25,	// (0x0006350c) call_video_uplink_pane_ParamLimits

0x9a25,	// (0x0006350c) call_video_uplink_pane

0x0f31,	// (0x0005aa18) main_pane_ParamLimits

0x0f31,	// (0x0005aa18) main_pane

0xe5ce,	// (0x000680b5) context_pane

0x4126,	// (0x0005dc0d) navi_pane

0x414e,	// (0x0005dc35) popup_cale_events_window_ParamLimits

0x414e,	// (0x0005dc35) popup_cale_events_window

0xe5e1,	// (0x000680c8) popup_mup_playback_window

0x4166,	// (0x0005dc4d) signal_pane

0xa1c2,	// (0x00063ca9) main_browser_pane

0xae16,	// (0x000648fd) main_burst_pane

0x3e78,	// (0x0005d95f) main_calc_pane

0xae16,	// (0x000648fd) main_cale_day_pane

0xa1c2,	// (0x00063ca9) main_cale_month_pane

0xae16,	// (0x000648fd) main_cale_week_pane

0xae16,	// (0x000648fd) main_call_pane

0x9e64,	// (0x0006394b) main_call_poc_pane

0xae16,	// (0x000648fd) main_camera_pane

0xae16,	// (0x000648fd) main_chi_dic_pane

0xac9b,	// (0x00064782) main_clock_pane

0x9e64,	// (0x0006394b) main_fmradio_pane

0xae16,	// (0x000648fd) main_graph_messa_pane

0x9e64,	// (0x0006394b) main_help_pane

0xa1c2,	// (0x00063ca9) main_im_pane

0xa0bf,	// (0x00063ba6) main_image_pane_ParamLimits

0xa0bf,	// (0x00063ba6) main_image_pane

0x9e64,	// (0x0006394b) main_location2_pane

0xae16,	// (0x000648fd) main_location_pane

0x9e64,	// (0x0006394b) main_messa_pane

0x9e64,	// (0x0006394b) main_mp2_pane

0xae16,	// (0x000648fd) main_mp_pane

0x9e64,	// (0x0006394b) main_msg_pane

0x9e64,	// (0x0006394b) main_mup_eq_pane

0x9e64,	// (0x0006394b) main_mup_pane

0xae16,	// (0x000648fd) main_notes_pane

0x9e64,	// (0x0006394b) main_pec_pane

0x9e64,	// (0x0006394b) main_phob_pane

0x9e64,	// (0x0006394b) main_pinb_pane

0x9e64,	// (0x0006394b) main_postcard_pane

0x9e64,	// (0x0006394b) main_qdial_pane

0xae16,	// (0x000648fd) main_skin_pane

0x9e64,	// (0x0006394b) main_smil2_pane

0xae16,	// (0x000648fd) main_smil_pane

0xae16,	// (0x000648fd) main_video_pane

0xae16,	// (0x000648fd) main_video_tele_pane

0xa0bf,	// (0x00063ba6) main_viewer_pane_ParamLimits

0xa0bf,	// (0x00063ba6) main_viewer_pane

0xae16,	// (0x000648fd) main_vorec_pane

0x3ecc,	// (0x0005d9b3) popup_blid_sat_info_window_ParamLimits

0x3ecc,	// (0x0005d9b3) popup_blid_sat_info_window

0x3f24,	// (0x0005da0b) popup_dyc_status_message_window_ParamLimits

0x3f24,	// (0x0005da0b) popup_dyc_status_message_window

0x3f3e,	// (0x0005da25) popup_grid_large_graphic_window_ParamLimits

0x3f3e,	// (0x0005da25) popup_grid_large_graphic_window

0x3ffa,	// (0x0005dae1) popup_loc_request_window_ParamLimits

0x3ffa,	// (0x0005dae1) popup_loc_request_window

0x40fe,	// (0x0005dbe5) popup_wml_address_window_ParamLimits

0x40fe,	// (0x0005dbe5) popup_wml_address_window

0x3cb2,	// (0x0005d799) call_muted_g1

0x3967,	// (0x0005d44e) popup_call_audio_conf_window_ParamLimits

0x3967,	// (0x0005d44e) popup_call_audio_conf_window

0x3cc6,	// (0x0005d7ad) popup_call_audio_first_window_ParamLimits

0x3cc6,	// (0x0005d7ad) popup_call_audio_first_window

0x3d3c,	// (0x0005d823) popup_call_audio_in_window_ParamLimits

0x3d3c,	// (0x0005d823) popup_call_audio_in_window

0x3d78,	// (0x0005d85f) popup_call_audio_out_window_ParamLimits

0x3d78,	// (0x0005d85f) popup_call_audio_out_window

0x3db2,	// (0x0005d899) popup_call_audio_second_window_ParamLimits

0x3db2,	// (0x0005d899) popup_call_audio_second_window

0x3e08,	// (0x0005d8ef) popup_call_audio_wait_window_ParamLimits

0x3e08,	// (0x0005d8ef) popup_call_audio_wait_window

0x3e3d,	// (0x0005d924) popup_number_entry_window_ParamLimits

0x3e3d,	// (0x0005d924) popup_number_entry_window

0x9a51,	// (0x00063538) bg_popup_call_pane_cp05_ParamLimits

0x9a51,	// (0x00063538) bg_popup_call_pane_cp05

0x9a71,	// (0x00063558) popup_number_entry_window_t1

0x9a84,	// (0x0006356b) popup_number_entry_window_t2

0x9a96,	// (0x0006357d) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00068bd3) popup_number_entry_window_t

0x9aa8,	// (0x0006358f) text_title_cp2

0x9abb,	// (0x000635a2) bg_popup_call_pane_cp_ParamLimits

0x9abb,	// (0x000635a2) bg_popup_call_pane_cp

0x9ac9,	// (0x000635b0) call_thumbnail_pane

0x9ad1,	// (0x000635b8) popup_call_audio_in_window_g1_ParamLimits

0x9ad1,	// (0x000635b8) popup_call_audio_in_window_g1

0x9add,	// (0x000635c4) popup_call_audio_in_window_g2_ParamLimits

0x9add,	// (0x000635c4) popup_call_audio_in_window_g2

0x9ae9,	// (0x000635d0) popup_call_audio_in_window_g3_ParamLimits

0x9ae9,	// (0x000635d0) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00068bdc) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00068bdc) popup_call_audio_in_window_g

0x9af5,	// (0x000635dc) popup_call_audio_in_window_t1_ParamLimits

0x9af5,	// (0x000635dc) popup_call_audio_in_window_t1

0x9b11,	// (0x000635f8) popup_call_audio_in_window_t2_ParamLimits

0x9b11,	// (0x000635f8) popup_call_audio_in_window_t2

0x9b2d,	// (0x00063614) popup_call_audio_in_window_t3_ParamLimits

0x9b2d,	// (0x00063614) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00068be3) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00068be3) popup_call_audio_in_window_t

0x9abb,	// (0x000635a2) bg_popup_call_pane_cp01_ParamLimits

0x9abb,	// (0x000635a2) bg_popup_call_pane_cp01

0x9ac9,	// (0x000635b0) call_thumbnail_pane_cp02

0x9b40,	// (0x00063627) call_type_pane_cp022

0x9b48,	// (0x0006362f) popup_call_audio_out_window_g1_ParamLimits

0x9b48,	// (0x0006362f) popup_call_audio_out_window_g1

0x9b5a,	// (0x00063641) popup_call_audio_out_window_g2_ParamLimits

0x9b5a,	// (0x00063641) popup_call_audio_out_window_g2

0x9b66,	// (0x0006364d) popup_call_audio_out_window_g3_ParamLimits

0x9b66,	// (0x0006364d) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00068bea) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00068bea) popup_call_audio_out_window_g

0x9b78,	// (0x0006365f) popup_call_audio_out_window_t1_ParamLimits

0x9b78,	// (0x0006365f) popup_call_audio_out_window_t1

0x9b90,	// (0x00063677) popup_call_audio_out_window_t2_ParamLimits

0x9b90,	// (0x00063677) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00068bf1) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00068bf1) popup_call_audio_out_window_t

0x9ba5,	// (0x0006368c) bg_popup_call_pane_ParamLimits

0x9ba5,	// (0x0006368c) bg_popup_call_pane

0x10db,	// (0x0005abc2) call_thumbnail_pane_cp_ParamLimits

0x10db,	// (0x0005abc2) call_thumbnail_pane_cp

0x9c29,	// (0x00063710) call_type_pane_cp01_ParamLimits

0x9c29,	// (0x00063710) call_type_pane_cp01

0x9c6d,	// (0x00063754) popup_call_audio_first_window_g1_ParamLimits

0x9c6d,	// (0x00063754) popup_call_audio_first_window_g1

0x9cb9,	// (0x000637a0) popup_call_audio_first_window_g2_ParamLimits

0x9cb9,	// (0x000637a0) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00068bf6) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00068bf6) popup_call_audio_first_window_g

0x9cfd,	// (0x000637e4) popup_call_audio_first_window_t1_ParamLimits

0x9cfd,	// (0x000637e4) popup_call_audio_first_window_t1

0x9da9,	// (0x00063890) popup_call_audio_first_window_t4_ParamLimits

0x9da9,	// (0x00063890) popup_call_audio_first_window_t4

0x9e35,	// (0x0006391c) popup_call_audio_first_window_t5_ParamLimits

0x9e35,	// (0x0006391c) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00068bfb) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00068bfb) popup_call_audio_first_window_t

0x9e64,	// (0x0006394b) bg_popup_call_pane_cp02

0x9e6e,	// (0x00063955) call_type_pane_cp023

0x9e76,	// (0x0006395d) popup_call_audio_wait_window_g1

0x9e7e,	// (0x00063965) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00068c02) popup_call_audio_wait_window_g

0x9e86,	// (0x0006396d) popup_call_audio_wait_window_t3

0x9e94,	// (0x0006397b) bg_popup_call_pane_cp03_ParamLimits

0x9e94,	// (0x0006397b) bg_popup_call_pane_cp03

0x9ef4,	// (0x000639db) call_thumbnail_pane_cp011_ParamLimits

0x9ef4,	// (0x000639db) call_thumbnail_pane_cp011

0x9f00,	// (0x000639e7) call_type_pane_cp034_ParamLimits

0x9f00,	// (0x000639e7) call_type_pane_cp034

0x9f3c,	// (0x00063a23) popup_call_audio_second_window_g1_ParamLimits

0x9f3c,	// (0x00063a23) popup_call_audio_second_window_g1

0x9f78,	// (0x00063a5f) popup_call_audio_second_window_g2_ParamLimits

0x9f78,	// (0x00063a5f) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00068c07) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00068c07) popup_call_audio_second_window_g

0x9fb4,	// (0x00063a9b) popup_call_audio_second_window_t1_ParamLimits

0x9fb4,	// (0x00063a9b) popup_call_audio_second_window_t1

0xa035,	// (0x00063b1c) popup_call_audio_second_window_t2_ParamLimits

0xa035,	// (0x00063b1c) popup_call_audio_second_window_t2

0xa06b,	// (0x00063b52) popup_call_audio_second_window_t3_ParamLimits

0xa06b,	// (0x00063b52) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00068c0c) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00068c0c) popup_call_audio_second_window_t

0x9e64,	// (0x0006394b) bg_popup_call_pane_cp04

0xa0a1,	// (0x00063b88) list_conf_pane

0xa0a9,	// (0x00063b90) popup_call_audio_conf_window_t1

0xa0b7,	// (0x00063b9e) call_thumbnail_pane_g1

0xa0bf,	// (0x00063ba6) bg_pinb_pane_ParamLimits

0xa0bf,	// (0x00063ba6) bg_pinb_pane

0xa0cd,	// (0x00063bb4) find_pinb_pane

0xa0d6,	// (0x00063bbd) listscroll_pinb_pane_ParamLimits

0xa0d6,	// (0x00063bbd) listscroll_pinb_pane

0xa0e5,	// (0x00063bcc) pinb_bg_pane_g1

0x10ff,	// (0x0005abe6) pinb_bg_pane_g2

0x110b,	// (0x0005abf2) pinb_bg_pane_g3

0x1117,	// (0x0005abfe) pinb_bg_pane_g4

0x1123,	// (0x0005ac0a) pinb_bg_pane_g5

0x112f,	// (0x0005ac16) pinb_bg_pane_g6

0x113a,	// (0x0005ac21) pinb_bg_pane_g7

0x1145,	// (0x0005ac2c) pinb_bg_pane_g8

0x1150,	// (0x0005ac37) pinb_bg_pane_g9

0x115a,	// (0x0005ac41) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00068c13) pinb_bg_pane_g

0x1177,	// (0x0005ac5e) grid_pinb_pane

0x1180,	// (0x0005ac67) list_pinb_pane

0x1189,	// (0x0005ac70) scroll_pane_cp01_ParamLimits

0x1189,	// (0x0005ac70) scroll_pane_cp01

0xa0ef,	// (0x00063bd6) find_pinb_pane_g1_ParamLimits

0xa0ef,	// (0x00063bd6) find_pinb_pane_g1

0xa107,	// (0x00063bee) find_pinb_pane_t1

0xa119,	// (0x00063c00) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00068c2d) find_pinb_pane_t

0xa12e,	// (0x00063c15) input_focus_pane_cp01_ParamLimits

0xa12e,	// (0x00063c15) input_focus_pane_cp01

0x119b,	// (0x0005ac82) cell_pinb_pane_ParamLimits

0x119b,	// (0x0005ac82) cell_pinb_pane

0x11c4,	// (0x0005acab) cell_pinb_pane_g1_ParamLimits

0x11c4,	// (0x0005acab) cell_pinb_pane_g1

0x11d4,	// (0x0005acbb) cell_pinb_pane_g2_ParamLimits

0x11d4,	// (0x0005acbb) cell_pinb_pane_g2

0xa13a,	// (0x00063c21) cell_pinb_pane_g3_ParamLimits

0xa13a,	// (0x00063c21) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00068c32) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00068c32) cell_pinb_pane_g

0x9e64,	// (0x0006394b) grid_highlight_pane_cp01

0x11e0,	// (0x0005acc7) list_pinb_item_pane_ParamLimits

0x11e0,	// (0x0005acc7) list_pinb_item_pane

0x9e64,	// (0x0006394b) list_highlight_pane_cp02

0x11f2,	// (0x0005acd9) list_pinb_item_pane_g1_ParamLimits

0x11f2,	// (0x0005acd9) list_pinb_item_pane_g1

0xa146,	// (0x00063c2d) list_pinb_item_pane_g2_ParamLimits

0xa146,	// (0x00063c2d) list_pinb_item_pane_g2

0x11ff,	// (0x0005ace6) list_pinb_item_pane_g3_ParamLimits

0x11ff,	// (0x0005ace6) list_pinb_item_pane_g3

0x1210,	// (0x0005acf7) list_pinb_item_pane_g4_ParamLimits

0x1210,	// (0x0005acf7) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00068c39) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00068c39) list_pinb_item_pane_g

0x121c,	// (0x0005ad03) list_pinb_item_pane_t1_ParamLimits

0x121c,	// (0x0005ad03) list_pinb_item_pane_t1

0x1251,	// (0x0005ad38) calc_display_pane

0x1279,	// (0x0005ad60) calc_paper_pane

0x129c,	// (0x0005ad83) grid_calc_pane

0x9e64,	// (0x0006394b) bg_list_pane_cp01

0x12c6,	// (0x0005adad) clock_g1

0x12ce,	// (0x0005adb5) clock_g2

0x0001,

0xf15b,	// (0x00068c42) clock_g

0x12d6,	// (0x0005adbd) clock_t1_ParamLimits

0x12d6,	// (0x0005adbd) clock_t1

0x12eb,	// (0x0005add2) clock_t2_ParamLimits

0x12eb,	// (0x0005add2) clock_t2

0x12fd,	// (0x0005ade4) clock_t3_ParamLimits

0x12fd,	// (0x0005ade4) clock_t3

0x130f,	// (0x0005adf6) clock_t4_ParamLimits

0x130f,	// (0x0005adf6) clock_t4

0x1321,	// (0x0005ae08) clock_t5_ParamLimits

0x1321,	// (0x0005ae08) clock_t5

0x1336,	// (0x0005ae1d) clock_t6_ParamLimits

0x1336,	// (0x0005ae1d) clock_t6

0x1348,	// (0x0005ae2f) clock_t7_ParamLimits

0x1348,	// (0x0005ae2f) clock_t7

0x135a,	// (0x0005ae41) clock_t8_ParamLimits

0x135a,	// (0x0005ae41) clock_t8

0x136e,	// (0x0005ae55) clock_t9_ParamLimits

0x136e,	// (0x0005ae55) clock_t9

0x0008,

0xf160,	// (0x00068c47) clock_t_ParamLimits

0xf160,	// (0x00068c47) clock_t

0xa15a,	// (0x00063c41) popup_clock_analogue_window_cp02

0xa15a,	// (0x00063c41) popup_clock_digital_window_cp01

0xa162,	// (0x00063c49) listscroll_help_pane

0x9e64,	// (0x0006394b) phob_pre_status_pane

0xa16c,	// (0x00063c53) grid_qdial_pane

0x9e64,	// (0x0006394b) listscroll_mce_pane

0xa176,	// (0x00063c5d) bg_notes_pane

0xa180,	// (0x00063c67) list_notes_pane

0x1382,	// (0x0005ae69) scroll_pane_cp06

0xa18a,	// (0x00063c71) bg_calc_paper_pane

0xa1a8,	// (0x00063c8f) list_calc_pane

0xa1c2,	// (0x00063ca9) bg_calc_display_pane

0x138d,	// (0x0005ae74) calc_display_pane_t1

0x139f,	// (0x0005ae86) calc_display_pane_t2

0xa1ce,	// (0x00063cb5) calc_display_pane_t3

0x0002,

0xf173,	// (0x00068c5a) calc_display_pane_t

0x13b1,	// (0x0005ae98) cell_calc_pane_ParamLimits

0x13b1,	// (0x0005ae98) cell_calc_pane

0xa1e0,	// (0x00063cc7) bg_calc_paper_pane_g1

0xa1ec,	// (0x00063cd3) bg_calc_paper_pane_g2

0xa1f8,	// (0x00063cdf) bg_calc_paper_pane_g3

0xa204,	// (0x00063ceb) bg_calc_paper_pane_g4

0xa210,	// (0x00063cf7) bg_calc_paper_pane_g5

0x13e6,	// (0x0005aecd) bg_calc_paper_pane_g6

0x13f5,	// (0x0005aedc) bg_calc_paper_pane_g7

0x1404,	// (0x0005aeeb) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00068c61) bg_calc_paper_pane_g

0x1417,	// (0x0005aefe) calc_bg_paper_pane_g9

0x142a,	// (0x0005af11) list_calc_item_pane_ParamLimits

0x142a,	// (0x0005af11) list_calc_item_pane

0xa21c,	// (0x00063d03) list_calc_item_pane_g1

0xa229,	// (0x00063d10) list_calc_item_pane_t1_ParamLimits

0xa229,	// (0x00063d10) list_calc_item_pane_t1

0x143d,	// (0x0005af24) list_calc_item_pane_t2_ParamLimits

0x143d,	// (0x0005af24) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00068c72) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00068c72) list_calc_item_pane_t

0xa23b,	// (0x00063d22) cell_calc_pane_g1

0xa245,	// (0x00063d2c) grid_highlight_pane_cp02

0x146f,	// (0x0005af56) bg_calc_display_pane_g1

0x1478,	// (0x0005af5f) bg_calc_display_pane_g2

0x1482,	// (0x0005af69) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00068c7c) bg_calc_display_pane_g

0x148b,	// (0x0005af72) cell_qdial_pane_ParamLimits

0x148b,	// (0x0005af72) cell_qdial_pane

0x149f,	// (0x0005af86) cell_qdial_pane_g1_ParamLimits

0x149f,	// (0x0005af86) cell_qdial_pane_g1

0x14b5,	// (0x0005af9c) cell_qdial_pane_g2_ParamLimits

0x14b5,	// (0x0005af9c) cell_qdial_pane_g2

0xa267,	// (0x00063d4e) cell_qdial_pane_g3_ParamLimits

0xa267,	// (0x00063d4e) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00068c83) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00068c83) cell_qdial_pane_g

0x14dc,	// (0x0005afc3) cell_qdial_pane_t1_ParamLimits

0x14dc,	// (0x0005afc3) cell_qdial_pane_t1

0x14f4,	// (0x0005afdb) cell_qdial_pane_t2_ParamLimits

0x14f4,	// (0x0005afdb) cell_qdial_pane_t2

0x1507,	// (0x0005afee) cell_qdial_pane_t3_ParamLimits

0x1507,	// (0x0005afee) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00068c8c) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00068c8c) cell_qdial_pane_t

0x9e64,	// (0x0006394b) grid_highlight_pane_cp04

0xa273,	// (0x00063d5a) thumbnail_qdial_pane_ParamLimits

0xa273,	// (0x00063d5a) thumbnail_qdial_pane

0xa2cf,	// (0x00063db6) list_help_pane

0xa2d8,	// (0x00063dbf) scroll_pane_cp02

0x151a,	// (0x0005b001) help_list_pane_t1_ParamLimits

0x151a,	// (0x0005b001) help_list_pane_t1

0xa2e1,	// (0x00063dc8) bg_notes_pane_g2

0xa2e9,	// (0x00063dd0) bg_notes_pane_g3

0xa2f1,	// (0x00063dd8) notes_bg_pane_g1

0xa2f9,	// (0x00063de0) notes_bg_pane_g4

0xa301,	// (0x00063de8) notes_bg_pane_g5

0xa309,	// (0x00063df0) notes_bg_pane_g6

0xa311,	// (0x00063df8) notes_bg_pane_g7

0xa319,	// (0x00063e00) notes_bg_pane_g8

0xa321,	// (0x00063e08) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00068caa) notes_bg_pane_g

0x1537,	// (0x0005b01e) list_notes_text_pane_ParamLimits

0x1537,	// (0x0005b01e) list_notes_text_pane

0xa329,	// (0x00063e10) list_notes_text_pane_g1

0x154c,	// (0x0005b033) list_notes_text_pane_t1

0xa1c2,	// (0x00063ca9) listscroll_cale_week_pane

0x1577,	// (0x0005b05e) bg_cale_heading_pane

0xa343,	// (0x00063e2a) bg_cale_pane_cp01

0x158b,	// (0x0005b072) cale_week_corner_pane

0x15a1,	// (0x0005b088) cale_week_day_heading_pane

0x15b5,	// (0x0005b09c) cale_week_scroll_pane_g1

0x15c6,	// (0x0005b0ad) cale_week_scroll_pane_g2

0x15d7,	// (0x0005b0be) cale_week_scroll_pane_g3

0x15e8,	// (0x0005b0cf) cale_week_scroll_pane_g4

0x15f9,	// (0x0005b0e0) cale_week_scroll_pane_g5

0x160c,	// (0x0005b0f3) cale_week_scroll_pane_g6

0x161f,	// (0x0005b106) cale_week_scroll_pane_g7

0x1632,	// (0x0005b119) cale_week_scroll_pane_g8

0x1645,	// (0x0005b12c) cale_week_scroll_pane_g9

0x1656,	// (0x0005b13d) cale_week_scroll_pane_g10

0x1667,	// (0x0005b14e) cale_week_scroll_pane_g11

0x1678,	// (0x0005b15f) cale_week_scroll_pane_g12

0x1689,	// (0x0005b170) cale_week_scroll_pane_g13

0x169a,	// (0x0005b181) cale_week_scroll_pane_g14

0x16ab,	// (0x0005b192) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00068cb9) cale_week_scroll_pane_g

0x16bc,	// (0x0005b1a3) cale_week_time_pane

0x16cf,	// (0x0005b1b6) grid_cale_week_pane

0x16e4,	// (0x0005b1cb) scroll_pane_cp08

0x16fe,	// (0x0005b1e5) cell_cale_week_pane_ParamLimits

0x16fe,	// (0x0005b1e5) cell_cale_week_pane

0x173e,	// (0x0005b225) cale_week_day_heading_pane_t1

0x176b,	// (0x0005b252) cale_week_day_heading_pane_t2

0x1798,	// (0x0005b27f) cale_week_day_heading_pane_t3

0x17c5,	// (0x0005b2ac) cale_week_day_heading_pane_t4

0x17f2,	// (0x0005b2d9) cale_week_day_heading_pane_t5

0x181f,	// (0x0005b306) cale_week_day_heading_pane_t6

0x184e,	// (0x0005b335) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00068cd8) cale_week_day_heading_pane_t

0xa36e,	// (0x00063e55) bg_cale_side_pane

0x187b,	// (0x0005b362) cale_week_time_pane_t1

0x1893,	// (0x0005b37a) cale_week_time_pane_t2

0x18ab,	// (0x0005b392) cale_week_time_pane_t3

0x18c3,	// (0x0005b3aa) cale_week_time_pane_t4

0x18db,	// (0x0005b3c2) cale_week_time_pane_t5

0x18f3,	// (0x0005b3da) cale_week_time_pane_t6

0x190b,	// (0x0005b3f2) cale_week_time_pane_t7

0x1923,	// (0x0005b40a) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00068ce7) cale_week_time_pane_t

0x193b,	// (0x0005b422) cell_cale_week_pane_g2

0x1954,	// (0x0005b43b) cell_cale_week_pane_g3_ParamLimits

0x1954,	// (0x0005b43b) cell_cale_week_pane_g3

0xa37c,	// (0x00063e63) grid_highlight_pane_cp07

0xa384,	// (0x00063e6b) listscroll_gms_pane

0xa38e,	// (0x00063e75) grid_gms_pane

0xa397,	// (0x00063e7e) listscroll_gms_pane_g1

0xa39f,	// (0x00063e86) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00068cf8) listscroll_gms_pane_g

0x196c,	// (0x0005b453) scroll_pane_cp010

0x1977,	// (0x0005b45e) cell_gms_pane_ParamLimits

0x1977,	// (0x0005b45e) cell_gms_pane

0x198a,	// (0x0005b471) cell_gms_pane_g1

0xa3a7,	// (0x00063e8e) cell_gms_pane_g2

0xa3af,	// (0x00063e96) cell_gms_pane_g3

0xa3b8,	// (0x00063e9f) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00068cfd) cell_gms_pane_g

0xa3c1,	// (0x00063ea8) grid_highlight_pane_cp09

0x3c5c,	// (0x0005d743) phob_pre_status_pane_g1

0x3c64,	// (0x0005d74b) phob_pre_status_pane_g2

0x3c6c,	// (0x0005d753) phob_pre_status_pane_g3

0x3c74,	// (0x0005d75b) phob_pre_status_pane_g4

0x0004,

0xf589,	// (0x00069070) phob_pre_status_pane_g

0x3c84,	// (0x0005d76b) phob_pre_status_pane_t1

0x3c92,	// (0x0005d779) phob_pre_status_pane_t2

0x3ca2,	// (0x0005d789) phob_pre_status_pane_t3

0x0002,

0xf594,	// (0x0006907b) phob_pre_status_pane_t

0x9e64,	// (0x0006394b) bg_list_pane_cp05

0x199a,	// (0x0005b481) grid_vorec_pane

0xa3c9,	// (0x00063eb0) vorec_t1

0xa3d7,	// (0x00063ebe) vorec_t2

0xa3e5,	// (0x00063ecc) vorec_t3

0xa3f3,	// (0x00063eda) vorec_t4

0xa401,	// (0x00063ee8) vorec_t5

0xa40f,	// (0x00063ef6) vorec_t6

0x0006,

0xf21f,	// (0x00068d06) vorec_t

0xa42b,	// (0x00063f12) wait_bar_pane_cp01

0x19a2,	// (0x0005b489) cell_vorec_pane_ParamLimits

0x19a2,	// (0x0005b489) cell_vorec_pane

0xa433,	// (0x00063f1a) cell_vorec_pane_g1

0x9e64,	// (0x0006394b) grid_highlight_pane_cp05

0x19cd,	// (0x0005b4b4) cams_zoom_pane

0x19dc,	// (0x0005b4c3) image_vga_pane

0x19f6,	// (0x0005b4dd) main_camera_pane_g1

0x1a08,	// (0x0005b4ef) main_camera_pane_g2

0x1a18,	// (0x0005b4ff) main_camera_pane_g3

0x1a28,	// (0x0005b50f) main_camera_pane_g4

0x1a38,	// (0x0005b51f) main_camera_pane_g5

0x1a48,	// (0x0005b52f) main_camera_pane_g6

0x1a5a,	// (0x0005b541) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00068d15) main_camera_pane_g

0x1a6a,	// (0x0005b551) main_camera_pane_t1

0x1a80,	// (0x0005b567) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00068d26) main_camera_pane_t

0x1aba,	// (0x0005b5a1) cams_zoom_pane_cp_ParamLimits

0x1aba,	// (0x0005b5a1) cams_zoom_pane_cp

0x1ae2,	// (0x0005b5c9) image_cif_pane_ParamLimits

0x1ae2,	// (0x0005b5c9) image_cif_pane

0x1b1d,	// (0x0005b604) image_subqcif_pane

0x1b25,	// (0x0005b60c) main_video_pane_g1_ParamLimits

0x1b25,	// (0x0005b60c) main_video_pane_g1

0x1b49,	// (0x0005b630) main_video_pane_g2_ParamLimits

0x1b49,	// (0x0005b630) main_video_pane_g2

0x1b7d,	// (0x0005b664) main_video_pane_g3_ParamLimits

0x1b7d,	// (0x0005b664) main_video_pane_g3

0x1bab,	// (0x0005b692) main_video_pane_g4_ParamLimits

0x1bab,	// (0x0005b692) main_video_pane_g4

0x1bd9,	// (0x0005b6c0) main_video_pane_g5_ParamLimits

0x1bd9,	// (0x0005b6c0) main_video_pane_g5

0xa449,	// (0x00063f30) main_video_pane_g6_ParamLimits

0xa449,	// (0x00063f30) main_video_pane_g6

0x0006,

0xf244,	// (0x00068d2b) main_video_pane_g_ParamLimits

0xf244,	// (0x00068d2b) main_video_pane_g

0x1c06,	// (0x0005b6ed) main_video_pane_t1_ParamLimits

0x1c06,	// (0x0005b6ed) main_video_pane_t1

0xa463,	// (0x00063f4a) cams_zoom_pane_g1

0xa46c,	// (0x00063f53) cams_zoom_pane_g2

0xa475,	// (0x00063f5c) cams_zoom_pane_g3

0xa47e,	// (0x00063f65) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00068d3a) cams_zoom_pane_g

0x1c63,	// (0x0005b74a) grid_cams_pane

0x1c7d,	// (0x0005b764) linegrid_cams_pane

0x1c91,	// (0x0005b778) cell_cams_pane_ParamLimits

0x1c91,	// (0x0005b778) cell_cams_pane

0xa487,	// (0x00063f6e) cams_burst_image_pane

0xa48f,	// (0x00063f76) cell_cams_pane_g1

0x9e64,	// (0x0006394b) grid_highlight_pane_cp03

0xa23b,	// (0x00063d22) mp_bg_pane_g1

0x9e64,	// (0x0006394b) bg_list_pane_cp03

0xe4a6,	// (0x00067f8d) bg_mp_pane

0xe4ae,	// (0x00067f95) grid_mp_pane

0xe4b6,	// (0x00067f9d) media_player_g1

0xe4be,	// (0x00067fa5) media_player_t1

0xe4cc,	// (0x00067fb3) media_player_t2

0xe4da,	// (0x00067fc1) media_player_t3

0xe4e8,	// (0x00067fcf) media_player_t4

0xe4f6,	// (0x00067fdd) media_player_t5

0xe504,	// (0x00067feb) media_player_t6

0xe512,	// (0x00067ff9) media_player_t7

0x0006,

0x038d,	// (0x00059e74) media_player_t

0xe520,	// (0x00068007) wait_bar_pane_cp02

0xf575,	// (0x0006905c) main_usb_pane_t

0x3c53,	// (0x0005d73a) cell_mp_pane

0xa23b,	// (0x00063d22) cell_mp_pane_g1

0x9e64,	// (0x0006394b) grid_highlight_pane_cp06

0xa497,	// (0x00063f7e) grid_skin_colour_pane

0xa49f,	// (0x00063f86) list_highlight_pane_cp03

0x1daa,	// (0x0005b891) skin_g1

0xa4a7,	// (0x00063f8e) skin_t1

0xa4b6,	// (0x00063f9d) skin_t2

0x0001,

0xf288,	// (0x00068d6f) skin_t

0x1db2,	// (0x0005b899) cell_skin_colour_pane_ParamLimits

0x1db2,	// (0x0005b899) cell_skin_colour_pane

0xa4c4,	// (0x00063fab) cell_skin_colour_pane_g1

0x1e29,	// (0x0005b910) call_video_g1_ParamLimits

0x1e29,	// (0x0005b910) call_video_g1

0x1e45,	// (0x0005b92c) call_video_g2_ParamLimits

0x1e45,	// (0x0005b92c) call_video_g2

0x0001,

0xf28d,	// (0x00068d74) call_video_g_ParamLimits

0xf28d,	// (0x00068d74) call_video_g

0x1e97,	// (0x0005b97e) call_video_uplink_pane_cp1_ParamLimits

0x1e97,	// (0x0005b97e) call_video_uplink_pane_cp1

0xa4d6,	// (0x00063fbd) call_video_uplink_pane_cp2

0x1f36,	// (0x0005ba1d) video_down_crop_pane_ParamLimits

0x1f36,	// (0x0005ba1d) video_down_crop_pane

0x202d,	// (0x0005bb14) video_down_pane_ParamLimits

0x202d,	// (0x0005bb14) video_down_pane

0xa4de,	// (0x00063fc5) video_down_subqcif_pane_ParamLimits

0xa4de,	// (0x00063fc5) video_down_subqcif_pane

0xa4f6,	// (0x00063fdd) video_down_subqcif_pane_cp_ParamLimits

0xa4f6,	// (0x00063fdd) video_down_subqcif_pane_cp

0xa51a,	// (0x00064001) im_reading_pane_ParamLimits

0xa51a,	// (0x00064001) im_reading_pane

0x213b,	// (0x0005bc22) im_writing_pane_ParamLimits

0x213b,	// (0x0005bc22) im_writing_pane

0x2151,	// (0x0005bc38) im_reading_pane_t1

0xa534,	// (0x0006401b) list_im_pane

0xa545,	// (0x0006402c) scroll_pane_cp07

0x218a,	// (0x0005bc71) im_writing_pane_t1_ParamLimits

0x218a,	// (0x0005bc71) im_writing_pane_t1

0xa55e,	// (0x00064045) im_writing_pane_t2_ParamLimits

0xa55e,	// (0x00064045) im_writing_pane_t2

0x0001,

0xf297,	// (0x00068d7e) im_writing_pane_t_ParamLimits

0xf297,	// (0x00068d7e) im_writing_pane_t

0x9e64,	// (0x0006394b) input_focus_pane_cp04

0x9e64,	// (0x0006394b) input_focus_pane_cp05

0x219f,	// (0x0005bc86) list_im_single_pane_ParamLimits

0x219f,	// (0x0005bc86) list_im_single_pane

0x21b3,	// (0x0005bc9a) list_single_im_pane_t1

0x3c13,	// (0x0005d6fa) blid_accuracy_pane

0x3c1b,	// (0x0005d702) blid_compass_pane

0x3c25,	// (0x0005d70c) main_location_t1

0x3c35,	// (0x0005d71c) main_location_t2

0x3c45,	// (0x0005d72c) main_location_t3

0x0002,

0xf582,	// (0x00069069) main_location_t

0x9e64,	// (0x0006394b) aid_levels_location

0xa23b,	// (0x00063d22) blid_accuracy_pane_g1

0xa23b,	// (0x00063d22) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00068de0) blid_accuracy_pane_g

0xa5a6,	// (0x0006408d) wml_content_pane

0xa5e4,	// (0x000640cb) wml_button_pane_ParamLimits

0xa5e4,	// (0x000640cb) wml_button_pane

0x21c2,	// (0x0005bca9) wml_list_single_large_pane_ParamLimits

0x21c2,	// (0x0005bca9) wml_list_single_large_pane

0x21d7,	// (0x0005bcbe) wml_list_single_medium_pane_ParamLimits

0x21d7,	// (0x0005bcbe) wml_list_single_medium_pane

0x21ed,	// (0x0005bcd4) wml_list_single_small_pane_ParamLimits

0x21ed,	// (0x0005bcd4) wml_list_single_small_pane

0xa5f8,	// (0x000640df) wml_selection_box_pane_ParamLimits

0xa5f8,	// (0x000640df) wml_selection_box_pane

0xa60b,	// (0x000640f2) wml_list_single_pane_t1

0xa61a,	// (0x00064101) wml_list_single_medium_pane_t1

0xa629,	// (0x00064110) wml_list_single_large_pane_t1

0xa638,	// (0x0006411f) input_focus_pane_cp02_ParamLimits

0xa638,	// (0x0006411f) input_focus_pane_cp02

0xa64b,	// (0x00064132) wml_selection_box_pane_g1

0xa654,	// (0x0006413b) wml_selection_box_pane_t1_ParamLimits

0xa654,	// (0x0006413b) wml_selection_box_pane_t1

0xa0bf,	// (0x00063ba6) bg_wml_button_pane_ParamLimits

0xa0bf,	// (0x00063ba6) bg_wml_button_pane

0xa66c,	// (0x00064153) wml_button_pane_g1

0xa674,	// (0x0006415b) wml_button_pane_t1

0xa66c,	// (0x00064153) wml_button_bg_pane_g1

0xa684,	// (0x0006416b) wml_button_bg_pane_g2

0xa68c,	// (0x00064173) wml_button_bg_pane_g3

0xa694,	// (0x0006417b) wml_button_bg_pane_g4

0xa69c,	// (0x00064183) wml_button_bg_pane_g5

0xa6a4,	// (0x0006418b) wml_button_bg_pane_g6

0xa6ac,	// (0x00064193) wml_button_bg_pane_g7

0xa6b4,	// (0x0006419b) wml_button_bg_pane_g8

0xa6bc,	// (0x000641a3) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00068d83) wml_button_bg_pane_g

0x2205,	// (0x0005bcec) bg_list_pane_cp02

0xa6c4,	// (0x000641ab) mce_header_pane_ParamLimits

0xa6c4,	// (0x000641ab) mce_header_pane

0xa6da,	// (0x000641c1) mce_icon_pane

0xa6da,	// (0x000641c1) mce_image_pane

0xa6e3,	// (0x000641ca) mce_text_pane_ParamLimits

0xa6e3,	// (0x000641ca) mce_text_pane

0x220d,	// (0x0005bcf4) scroll_pane_cp03

0xa5dc,	// (0x000640c3) scroll_pane_cp04

0xa6f6,	// (0x000641dd) scroll_pane_cp05_ParamLimits

0xa6f6,	// (0x000641dd) scroll_pane_cp05

0x2217,	// (0x0005bcfe) mce_header_field_pane_ParamLimits

0x2217,	// (0x0005bcfe) mce_header_field_pane

0x222e,	// (0x0005bd15) mce_header_field_pane_2_ParamLimits

0x222e,	// (0x0005bd15) mce_header_field_pane_2

0x2244,	// (0x0005bd2b) mce_header_field_pane_3

0x224c,	// (0x0005bd33) list_single_mce_message_pane_ParamLimits

0x224c,	// (0x0005bd33) list_single_mce_message_pane

0x2261,	// (0x0005bd48) list_single_mce_smart_pane_ParamLimits

0x2261,	// (0x0005bd48) list_single_mce_smart_pane

0xa702,	// (0x000641e9) input_focus_pane_cp03

0xa70b,	// (0x000641f2) list_header_data_pane

0x2281,	// (0x0005bd68) mce_header_field_pane_t1

0x2291,	// (0x0005bd78) list_single_mce_header_pane_ParamLimits

0x2291,	// (0x0005bd78) list_single_mce_header_pane

0xa713,	// (0x000641fa) list_single_mce_header_pane_t1

0xa722,	// (0x00064209) list_single_mce_message_pane_g1

0xa72a,	// (0x00064211) list_single_mce_message_pane_t1

0x22c3,	// (0x0005bdaa) bg_cale_heading_pane_cp01_ParamLimits

0x22c3,	// (0x0005bdaa) bg_cale_heading_pane_cp01

0xa738,	// (0x0006421f) bg_cale_pane_cp02_ParamLimits

0xa738,	// (0x0006421f) bg_cale_pane_cp02

0x22e6,	// (0x0005bdcd) cale_month_corner_pane

0x22fc,	// (0x0005bde3) cale_month_day_heading_pane_ParamLimits

0x22fc,	// (0x0005bde3) cale_month_day_heading_pane

0x232f,	// (0x0005be16) cale_month_pane_g1_ParamLimits

0x232f,	// (0x0005be16) cale_month_pane_g1

0x234b,	// (0x0005be32) cale_month_pane_g2_ParamLimits

0x234b,	// (0x0005be32) cale_month_pane_g2

0x2366,	// (0x0005be4d) cale_month_pane_g3_ParamLimits

0x2366,	// (0x0005be4d) cale_month_pane_g3

0x2392,	// (0x0005be79) cale_month_pane_g4_ParamLimits

0x2392,	// (0x0005be79) cale_month_pane_g4

0x23be,	// (0x0005bea5) cale_month_pane_g5_ParamLimits

0x23be,	// (0x0005bea5) cale_month_pane_g5

0x23f2,	// (0x0005bed9) cale_month_pane_g6_ParamLimits

0x23f2,	// (0x0005bed9) cale_month_pane_g6

0x242e,	// (0x0005bf15) cale_month_pane_g7_ParamLimits

0x242e,	// (0x0005bf15) cale_month_pane_g7

0x246a,	// (0x0005bf51) cale_month_pane_g8_ParamLimits

0x246a,	// (0x0005bf51) cale_month_pane_g8

0x24a6,	// (0x0005bf8d) cale_month_pane_g9_ParamLimits

0x24a6,	// (0x0005bf8d) cale_month_pane_g9

0x24e0,	// (0x0005bfc7) cale_month_pane_g10_ParamLimits

0x24e0,	// (0x0005bfc7) cale_month_pane_g10

0x251a,	// (0x0005c001) cale_month_pane_g11_ParamLimits

0x251a,	// (0x0005c001) cale_month_pane_g11

0x2554,	// (0x0005c03b) cale_month_pane_g12_ParamLimits

0x2554,	// (0x0005c03b) cale_month_pane_g12

0x258e,	// (0x0005c075) cale_month_pane_g13_ParamLimits

0x258e,	// (0x0005c075) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00068d96) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00068d96) cale_month_pane_g

0x25c8,	// (0x0005c0af) cale_month_week_pane

0x25db,	// (0x0005c0c2) grid_cale_month_pane_ParamLimits

0x25db,	// (0x0005c0c2) grid_cale_month_pane

0x2609,	// (0x0005c0f0) cale_month_day_heading_pane_t1

0x2667,	// (0x0005c14e) cale_month_day_heading_pane_t2

0x26cc,	// (0x0005c1b3) cale_month_day_heading_pane_t3

0x2731,	// (0x0005c218) cale_month_day_heading_pane_t4

0x2796,	// (0x0005c27d) cale_month_day_heading_pane_t5

0x280b,	// (0x0005c2f2) cale_month_day_heading_pane_t6

0x2880,	// (0x0005c367) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00068db1) cale_month_day_heading_pane_t

0xa36e,	// (0x00063e55) bg_cale_side_pane_cp01

0x28f5,	// (0x0005c3dc) cale_month_week_pane_t1

0x290c,	// (0x0005c3f3) cale_month_week_pane_t2

0x2923,	// (0x0005c40a) cale_month_week_pane_t3

0x293a,	// (0x0005c421) cale_month_week_pane_t4

0x2951,	// (0x0005c438) cale_month_week_pane_t5

0x2968,	// (0x0005c44f) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00068dc0) cale_month_week_pane_t

0x297f,	// (0x0005c466) cell_cale_month_pane_ParamLimits

0x297f,	// (0x0005c466) cell_cale_month_pane

0xa76d,	// (0x00064254) cell_cale_month_pane_g1

0x2a7f,	// (0x0005c566) cell_cale_month_pane_t1_ParamLimits

0x2a7f,	// (0x0005c566) cell_cale_month_pane_t1

0xa37c,	// (0x00063e63) grid_highlight_pane_cp08

0xa23b,	// (0x00063d22) main_smil_g1

0x2a9b,	// (0x0005c582) smil_status_pane

0xa779,	// (0x00064260) smil_text_pane

0xe3c6,	// (0x00067ead) bg_popup_call3_rect_pane_g8

0xe3ce,	// (0x00067eb5) bg_popup_call3_rect_pane_g9

0x0008,

0xf55d,	// (0x00069044) bg_popup_call3_rect_pane_g

0xe648,	// (0x0006812f) smil_status_volume_pane_g1

0xa783,	// (0x0006426a) smil_status_pane_t1

0xb547,	// (0x0006502e) volume_smil_pane

0xa79a,	// (0x00064281) list_smil_text_pane

0x2aae,	// (0x0005c595) scroll_pane_cp011

0x2ab9,	// (0x0005c5a0) smil_text_list_pane_t1_ParamLimits

0x2ab9,	// (0x0005c5a0) smil_text_list_pane_t1

0xa7a4,	// (0x0006428b) aid_volume_smil_ParamLimits

0xa7a4,	// (0x0006428b) aid_volume_smil

0xa23b,	// (0x00063d22) smil_volume_pane_g1

0xa23b,	// (0x00063d22) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00068de0) smil_volume_pane_g

0xa1c2,	// (0x00063ca9) listscroll_cale_day_pane

0xa7c6,	// (0x000642ad) bg_cale_pane

0xa7de,	// (0x000642c5) list_cale_pane

0xa7ef,	// (0x000642d6) scroll_pane_cp09

0xa800,	// (0x000642e7) cale_bg_pane_g1

0xa808,	// (0x000642ef) cale_bg_pane_g2

0xa810,	// (0x000642f7) cale_bg_pane_g3

0xa818,	// (0x000642ff) cale_bg_pane_g4

0xa820,	// (0x00064307) cale_bg_pane_g5

0xa828,	// (0x0006430f) cale_bg_pane_g6

0xa830,	// (0x00064317) cale_bg_pane_g7

0xa838,	// (0x0006431f) cale_bg_pane_g8

0xa840,	// (0x00064327) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00068de5) cale_bg_pane_g

0x19a2,	// (0x0005b489) list_cale_time_pane_ParamLimits

0x19a2,	// (0x0005b489) list_cale_time_pane

0xa848,	// (0x0006432f) list_cale_time_pane_g1_ParamLimits

0xa848,	// (0x0006432f) list_cale_time_pane_g1

0xa854,	// (0x0006433b) list_cale_time_pane_g2_ParamLimits

0xa854,	// (0x0006433b) list_cale_time_pane_g2

0x2aff,	// (0x0005c5e6) list_cale_time_pane_g3_ParamLimits

0x2aff,	// (0x0005c5e6) list_cale_time_pane_g3

0x2b0d,	// (0x0005c5f4) list_cale_time_pane_g4_ParamLimits

0x2b0d,	// (0x0005c5f4) list_cale_time_pane_g4

0x2b1b,	// (0x0005c602) list_cale_time_pane_g5_ParamLimits

0x2b1b,	// (0x0005c602) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00068df8) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00068df8) list_cale_time_pane_g

0xa86e,	// (0x00064355) list_cale_time_pane_t1_ParamLimits

0xa86e,	// (0x00064355) list_cale_time_pane_t1

0xa896,	// (0x0006437d) list_cale_time_pane_t2_ParamLimits

0xa896,	// (0x0006437d) list_cale_time_pane_t2

0x2e8c,	// (0x0005c973) aid_blid_cardinal_pane

0x2eca,	// (0x0005c9b1) compass_pane_t4

0xa8be,	// (0x000643a5) list_cale_time_pane_t4_ParamLimits

0xa8be,	// (0x000643a5) list_cale_time_pane_t4

0x2ed8,	// (0x0005c9bf) compass_pane_t5

0x2ee6,	// (0x0005c9cd) compass_pane_t6

0x2ef4,	// (0x0005c9db) compass_pane_t7

0xad68,	// (0x0006484f) navi_pane_cc_t1

0xaecf,	// (0x000649b6) aid_phob_thumbnail_center_pane

0x362b,	// (0x0005d112) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00068e05) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00068e05) list_cale_time_pane_t

0x9abb,	// (0x000635a2) bg_popup_window_pane_cp02_ParamLimits

0x9abb,	// (0x000635a2) bg_popup_window_pane_cp02

0xa8e6,	// (0x000643cd) heading_pane_cp01_ParamLimits

0xa8e6,	// (0x000643cd) heading_pane_cp01

0xa8f2,	// (0x000643d9) loc_req_pane_ParamLimits

0xa8f2,	// (0x000643d9) loc_req_pane

0xa902,	// (0x000643e9) loc_type_pane_ParamLimits

0xa902,	// (0x000643e9) loc_type_pane

0xa914,	// (0x000643fb) loc_type_pane_t1_ParamLimits

0xa914,	// (0x000643fb) loc_type_pane_t1

0xa926,	// (0x0006440d) loc_type_pane_t2_ParamLimits

0xa926,	// (0x0006440d) loc_type_pane_t2

0xa938,	// (0x0006441f) loc_type_pane_t3_ParamLimits

0xa938,	// (0x0006441f) loc_type_pane_t3

0x0002,

0xf325,	// (0x00068e0c) loc_type_pane_t_ParamLimits

0xf325,	// (0x00068e0c) loc_type_pane_t

0xa94a,	// (0x00064431) list_loc_req_pane

0xa954,	// (0x0006443b) scroll_pane_cp012

0x2b29,	// (0x0005c610) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b29,	// (0x0005c610) list_single_loc_request_popup_menu_pane

0xa95f,	// (0x00064446) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa95f,	// (0x00064446) list_single_loc_request_popup_menu_pane_g1

0xa96b,	// (0x00064452) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa96b,	// (0x00064452) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00068e13) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00068e13) list_single_loc_request_popup_menu_pane_g

0xa977,	// (0x0006445e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa977,	// (0x0006445e) list_single_loc_request_popup_menu_pane_t1

0xa0bf,	// (0x00063ba6) bg_popup_window_pane_cp03_ParamLimits

0xa0bf,	// (0x00063ba6) bg_popup_window_pane_cp03

0xa98d,	// (0x00064474) heading_loc_req_pane_ParamLimits

0xa98d,	// (0x00064474) heading_loc_req_pane

0x2b36,	// (0x0005c61d) popup_dyc_status_message_window_g1_ParamLimits

0x2b36,	// (0x0005c61d) popup_dyc_status_message_window_g1

0x2b4a,	// (0x0005c631) popup_dyc_status_message_window_t1_ParamLimits

0x2b4a,	// (0x0005c631) popup_dyc_status_message_window_t1

0x2b5f,	// (0x0005c646) popup_dyc_status_message_window_t2_ParamLimits

0x2b5f,	// (0x0005c646) popup_dyc_status_message_window_t2

0x2b74,	// (0x0005c65b) popup_dyc_status_message_window_t3_ParamLimits

0x2b74,	// (0x0005c65b) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00068e18) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00068e18) popup_dyc_status_message_window_t

0x9e64,	// (0x0006394b) bg_heading_pane_cp01

0xa999,	// (0x00064480) heading_loc_req_pane_g1

0xa9a1,	// (0x00064488) heading_loc_req_pane_g2

0xa9a9,	// (0x00064490) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00068e1f) heading_loc_req_pane_g

0xa9b1,	// (0x00064498) heading_loc_req_pane_t1

0xa9c0,	// (0x000644a7) bg_popup_sub_pane_cp01_ParamLimits

0xa9c0,	// (0x000644a7) bg_popup_sub_pane_cp01

0xa9ce,	// (0x000644b5) popup_cale_events_window_g1_ParamLimits

0xa9ce,	// (0x000644b5) popup_cale_events_window_g1

0xa9ee,	// (0x000644d5) popup_cale_events_window_g2_ParamLimits

0xa9ee,	// (0x000644d5) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00068e53) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00068e53) popup_cale_events_window_g

0xaa0e,	// (0x000644f5) popup_cale_events_window_t1_ParamLimits

0xaa0e,	// (0x000644f5) popup_cale_events_window_t1

0xaa20,	// (0x00064507) popup_cale_events_window_t2_ParamLimits

0xaa20,	// (0x00064507) popup_cale_events_window_t2

0xaa5e,	// (0x00064545) popup_cale_events_window_t3_ParamLimits

0xaa5e,	// (0x00064545) popup_cale_events_window_t3

0xaa98,	// (0x0006457f) popup_cale_events_window_t4_ParamLimits

0xaa98,	// (0x0006457f) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00068e58) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00068e58) popup_cale_events_window_t

0x2c77,	// (0x0005c75e) call_type_pane

0x2c87,	// (0x0005c76e) popup_call_status_window_g1

0x2c9b,	// (0x0005c782) popup_call_status_window_g2

0x2caf,	// (0x0005c796) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00068e61) popup_call_status_window_g

0xaace,	// (0x000645b5) call_type_pane_g1

0xaad7,	// (0x000645be) call_type_pane_g2

0x0001,

0xf381,	// (0x00068e68) call_type_pane_g

0x9e64,	// (0x0006394b) bg_popup_sub_pane_cp02

0xaae0,	// (0x000645c7) listscroll_popup_wml_pane

0xaae8,	// (0x000645cf) list_wml_pane

0xaaf2,	// (0x000645d9) scroll_pane_cp013

0xaafd,	// (0x000645e4) list_single_graphic_popup_wml_pane_ParamLimits

0xaafd,	// (0x000645e4) list_single_graphic_popup_wml_pane

0xa23b,	// (0x00063d22) list_single_graphic_popup_wml_pane_g1

0xab11,	// (0x000645f8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00068e6d) list_single_graphic_popup_wml_pane_g

0xab19,	// (0x00064600) list_single_graphic_popup_wml_pane_t1

0xab2f,	// (0x00064616) aid_call_pane

0xa0b7,	// (0x00063b9e) popup_clock_analogue_window_g1

0xa0b7,	// (0x00063b9e) popup_clock_analogue_window_g2

0xab37,	// (0x0006461e) popup_clock_analogue_window_g3

0xab37,	// (0x0006461e) popup_clock_analogue_window_g4

0xa23b,	// (0x00063d22) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00068e72) popup_clock_analogue_window_g

0xab3f,	// (0x00064626) popup_clock_analogue_window_t1

0xab4d,	// (0x00064634) clock_digital_number_pane_ParamLimits

0xab4d,	// (0x00064634) clock_digital_number_pane

0xab59,	// (0x00064640) clock_digital_number_pane_cp02_ParamLimits

0xab59,	// (0x00064640) clock_digital_number_pane_cp02

0xab65,	// (0x0006464c) clock_digital_number_pane_cp03_ParamLimits

0xab65,	// (0x0006464c) clock_digital_number_pane_cp03

0xab71,	// (0x00064658) clock_digital_number_pane_cp04_ParamLimits

0xab71,	// (0x00064658) clock_digital_number_pane_cp04

0xab81,	// (0x00064668) clock_digital_separator_pane_ParamLimits

0xab81,	// (0x00064668) clock_digital_separator_pane

0xab8d,	// (0x00064674) popup_clock_digital_window_t1

0xa23b,	// (0x00063d22) clock_digital_number_pane_g1

0xa23b,	// (0x00063d22) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00068de0) clock_digital_number_pane_g

0xa23b,	// (0x00063d22) clock_digital_separator_pane_g1

0xa23b,	// (0x00063d22) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00068de0) clock_digital_separator_pane_g

0x9e64,	// (0x0006394b) bg_popup_window_pane_cp04

0xabaa,	// (0x00064691) heading_pane_cp03

0xabb2,	// (0x00064699) listscroll_popup_gms_pane

0xabba,	// (0x000646a1) grid_large_graphic_popup_pane

0xabc4,	// (0x000646ab) listscroll_popup_gms_pane_g1

0xabcc,	// (0x000646b3) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00068e7d) listscroll_popup_gms_pane_g

0xa5dc,	// (0x000640c3) scroll_pane_cp014

0x2cbe,	// (0x0005c7a5) cell_large_graphic_popup_pane_ParamLimits

0x2cbe,	// (0x0005c7a5) cell_large_graphic_popup_pane

0x2cd6,	// (0x0005c7bd) cell_large_graphic_popup_pane_g1_ParamLimits

0x2cd6,	// (0x0005c7bd) cell_large_graphic_popup_pane_g1

0xabd4,	// (0x000646bb) cell_large_graphic_popup_pane_g2_ParamLimits

0xabd4,	// (0x000646bb) cell_large_graphic_popup_pane_g2

0xabe0,	// (0x000646c7) cell_large_graphic_popup_pane_g3_ParamLimits

0xabe0,	// (0x000646c7) cell_large_graphic_popup_pane_g3

0xabed,	// (0x000646d4) cell_large_graphic_popup_pane_g4_ParamLimits

0xabed,	// (0x000646d4) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00068e82) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00068e82) cell_large_graphic_popup_pane_g

0xabfd,	// (0x000646e4) grid_highlight_pane_cp010

0xa23b,	// (0x00063d22) bg_popup_call_pane_g1

0xac07,	// (0x000646ee) list_single_graphic_popup_conf_pane_ParamLimits

0xac07,	// (0x000646ee) list_single_graphic_popup_conf_pane

0xac1a,	// (0x00064701) list_highlight_pane_cp01

0xac23,	// (0x0006470a) list_single_graphic_popup_conf_pane_g1

0xac2b,	// (0x00064712) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00068e8b) list_single_graphic_popup_conf_pane_g

0xac33,	// (0x0006471a) list_single_graphic_popup_conf_pane_t1

0xac41,	// (0x00064728) linegrid_cams_pane_g1

0x2ce2,	// (0x0005c7c9) linegrid_cams_pane_g2

0xa3af,	// (0x00063e96) linegrid_cams_pane_g3

0xac4a,	// (0x00064731) linegrid_cams_pane_g4

0x2ceb,	// (0x0005c7d2) linegrid_cams_pane_g5

0x2cf4,	// (0x0005c7db) linegrid_cams_pane_g6

0xa3b8,	// (0x00063e9f) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00068e90) linegrid_cams_pane_g

0xac53,	// (0x0006473a) popup_clock_analogue_window

0xac53,	// (0x0006473a) popup_clock_digital_window

0x9e64,	// (0x0006394b) popup_phob_thumbnail_window

0xa23b,	// (0x00063d22) call_video_uplink_pane_g1

0xac5c,	// (0x00064743) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00068e9f) call_video_uplink_pane_g

0xac64,	// (0x0006474b) video_uplink_pane

0xac6c,	// (0x00064753) mce_image_pane_g1

0x2cff,	// (0x0005c7e6) mce_image_pane_g2

0x2d09,	// (0x0005c7f0) mce_image_pane_g3

0x2d11,	// (0x0005c7f8) mce_image_pane_g4

0x2d19,	// (0x0005c800) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00068ea4) mce_image_pane_g

0xac76,	// (0x0006475d) control_top_pane_stacon_cp01_ParamLimits

0xac76,	// (0x0006475d) control_top_pane_stacon_cp01

0xac8a,	// (0x00064771) uni_indicator_pane_stacon_cp01_ParamLimits

0xac8a,	// (0x00064771) uni_indicator_pane_stacon_cp01

0xac9b,	// (0x00064782) bg_popup_sub_pane_cp03

0x2d21,	// (0x0005c808) chi_dic_find_pane

0x2d29,	// (0x0005c810) listscroll_chi_dic_pane

0x2d32,	// (0x0005c819) main_pane_chidic_g1

0xaca5,	// (0x0006478c) chi_dic_find_pane_t1

0xacb3,	// (0x0006479a) find_chidic_pane

0xacbc,	// (0x000647a3) chi_dic_list_pane_ParamLimits

0xacbc,	// (0x000647a3) chi_dic_list_pane

0xaccd,	// (0x000647b4) scroll_pane_cp020

0xacd5,	// (0x000647bc) find_chidic_pane_t1

0x9e64,	// (0x0006394b) input_focus_pane_cp06

0x2d45,	// (0x0005c82c) list_chi_dic_pane_ParamLimits

0x2d45,	// (0x0005c82c) list_chi_dic_pane

0x2d57,	// (0x0005c83e) list_chi_dic_pane_t1_ParamLimits

0x2d57,	// (0x0005c83e) list_chi_dic_pane_t1

0x9e64,	// (0x0006394b) list_highlight_pane_cp020

0xace4,	// (0x000647cb) bg_cale_heading_pane_g1

0x2d6a,	// (0x0005c851) bg_cale_heading_pane_g2

0x2d72,	// (0x0005c859) bg_cale_heading_pane_g3

0x2d7a,	// (0x0005c861) bg_cale_heading_pane_g4

0x2d84,	// (0x0005c86b) bg_cale_heading_pane_g5

0x2d8e,	// (0x0005c875) bg_cale_heading_pane_g6

0x2d96,	// (0x0005c87d) bg_cale_heading_pane_g7

0x2d9e,	// (0x0005c885) bg_cale_heading_pane_g8

0x2da8,	// (0x0005c88f) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00068eaf) bg_cale_heading_pane_g

0xace4,	// (0x000647cb) bg_cale_side_pane_g1

0x2db2,	// (0x0005c899) bg_cale_side_pane_g2

0x2dba,	// (0x0005c8a1) bg_cale_side_pane_g3

0x2dc2,	// (0x0005c8a9) bg_cale_side_pane_g4

0x2dca,	// (0x0005c8b1) bg_cale_side_pane_g5

0x2dd2,	// (0x0005c8b9) bg_cale_side_pane_g6

0x2dda,	// (0x0005c8c1) bg_cale_side_pane_g7

0x2de2,	// (0x0005c8c9) bg_cale_side_pane_g8

0x2dea,	// (0x0005c8d1) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00068ec2) bg_cale_side_pane_g

0x2df2,	// (0x0005c8d9) popup_call_status_window_ParamLimits

0x2df2,	// (0x0005c8d9) popup_call_status_window

0xacec,	// (0x000647d3) stacon_top_pane

0xacf4,	// (0x000647db) status_pane_ParamLimits

0xacf4,	// (0x000647db) status_pane

0xad09,	// (0x000647f0) status_small_pane

0xad11,	// (0x000647f8) control_pane

0x9e64,	// (0x0006394b) stacon_bottom_pane

0xad19,	// (0x00064800) list_single_mce_smart_pane_t1_ParamLimits

0xad19,	// (0x00064800) list_single_mce_smart_pane_t1

0xad2c,	// (0x00064813) list_single_mce_smart_pane_t2_ParamLimits

0xad2c,	// (0x00064813) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00068ed5) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00068ed5) list_single_mce_smart_pane_t

0x2e3b,	// (0x0005c922) compass_pane

0x2e44,	// (0x0005c92b) main_location2_pane_t1

0x2e56,	// (0x0005c93d) main_location2_pane_t2

0x2e68,	// (0x0005c94f) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00068eda) main_location2_pane_t

0xad4b,	// (0x00064832) compass_pane_g1_ParamLimits

0xad4b,	// (0x00064832) compass_pane_g1

0x2eac,	// (0x0005c993) compass_pane_t1

0x2ebb,	// (0x0005c9a2) compass_pane_t2

0x0005,

0xf3fc,	// (0x00068ee3) compass_pane_t

0x2f02,	// (0x0005c9e9) text_secondary_cp61

0xad5f,	// (0x00064846) navi_pane_cams_g5

0xad82,	// (0x00064869) navi_pane_im_t1

0xad90,	// (0x00064877) navi_pane_mp_g1_ParamLimits

0xad90,	// (0x00064877) navi_pane_mp_g1

0xada4,	// (0x0006488b) navi_pane_mp_g2_ParamLimits

0xada4,	// (0x0006488b) navi_pane_mp_g2

0xadb0,	// (0x00064897) navi_pane_mp_g3_ParamLimits

0xadb0,	// (0x00064897) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00068ef7) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00068ef7) navi_pane_mp_g

0xadbc,	// (0x000648a3) navi_pane_mp_t1

0xadca,	// (0x000648b1) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00068efe) navi_pane_mp_t

0xae06,	// (0x000648ed) navi_pane_vt_g1

0xadbc,	// (0x000648a3) navi_pane_vt_t1

0xae0e,	// (0x000648f5) navi_slider_pane

0xae16,	// (0x000648fd) zooming_pane

0xae1e,	// (0x00064905) navi_slider_pane_g1

0xae27,	// (0x0006490e) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00068f05) navi_slider_pane_g

0xae54,	// (0x0006493b) aid_levels_zoom

0xae5c,	// (0x00064943) zooming_pane_g1

0xae64,	// (0x0006494b) zooming_pane_g2

0xae64,	// (0x0006494b) zooming_pane_g3

0x0002,

0xf42d,	// (0x00068f14) zooming_pane_g

0xae6c,	// (0x00064953) level_10_zoom

0xae75,	// (0x0006495c) level_11_zoom

0xae7e,	// (0x00064965) level_1_zoom

0xae87,	// (0x0006496e) level_2_zoom

0xae90,	// (0x00064977) level_3_zoom

0xae99,	// (0x00064980) level_4_zoom

0xaea2,	// (0x00064989) level_5_zoom

0xaeab,	// (0x00064992) level_6_zoom

0xaeb4,	// (0x0006499b) level_7_zoom

0xaebd,	// (0x000649a4) level_8_zoom

0xaec6,	// (0x000649ad) level_9_zoom

0xaed7,	// (0x000649be) popup_phob_thumbnail_window_g1

0xaedf,	// (0x000649c6) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00068f1b) popup_phob_thumbnail_window_g

0xe528,	// (0x0006800f) level_1_location

0xe530,	// (0x00068017) level_2_location

0xe538,	// (0x0006801f) level_3_location

0xe540,	// (0x00068027) level_4_location

0xae16,	// (0x000648fd) level_5_location

0x3027,	// (0x0005cb0e) mce_icon_pane_g1

0x302f,	// (0x0005cb16) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00068f20) mce_icon_pane_g

0x3037,	// (0x0005cb1e) main_mup_pane_g1_ParamLimits

0x3037,	// (0x0005cb1e) main_mup_pane_g1

0x304d,	// (0x0005cb34) main_mup_pane_g2_ParamLimits

0x304d,	// (0x0005cb34) main_mup_pane_g2

0x3065,	// (0x0005cb4c) main_mup_pane_g3_ParamLimits

0x3065,	// (0x0005cb4c) main_mup_pane_g3

0x307d,	// (0x0005cb64) main_mup_pane_g4_ParamLimits

0x307d,	// (0x0005cb64) main_mup_pane_g4

0x3095,	// (0x0005cb7c) main_mup_pane_g5_ParamLimits

0x3095,	// (0x0005cb7c) main_mup_pane_g5

0x30b1,	// (0x0005cb98) main_mup_pane_g6_ParamLimits

0x30b1,	// (0x0005cb98) main_mup_pane_g6

0x30c9,	// (0x0005cbb0) main_mup_pane_g7_ParamLimits

0x30c9,	// (0x0005cbb0) main_mup_pane_g7

0x30e1,	// (0x0005cbc8) main_mup_pane_g8_ParamLimits

0x30e1,	// (0x0005cbc8) main_mup_pane_g8

0x30fb,	// (0x0005cbe2) main_mup_pane_g9_ParamLimits

0x30fb,	// (0x0005cbe2) main_mup_pane_g9

0x3115,	// (0x0005cbfc) main_mup_pane_g10_ParamLimits

0x3115,	// (0x0005cbfc) main_mup_pane_g10

0x312f,	// (0x0005cc16) main_mup_pane_g11_ParamLimits

0x312f,	// (0x0005cc16) main_mup_pane_g11

0x3143,	// (0x0005cc2a) main_mup_pane_g12_ParamLimits

0x3143,	// (0x0005cc2a) main_mup_pane_g12

0x3159,	// (0x0005cc40) main_mup_pane_g13_ParamLimits

0x3159,	// (0x0005cc40) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00068f25) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00068f25) main_mup_pane_g

0x316d,	// (0x0005cc54) main_mup_pane_t1_ParamLimits

0x316d,	// (0x0005cc54) main_mup_pane_t1

0x3187,	// (0x0005cc6e) main_mup_pane_t2_ParamLimits

0x3187,	// (0x0005cc6e) main_mup_pane_t2

0x319f,	// (0x0005cc86) main_mup_pane_t3_ParamLimits

0x319f,	// (0x0005cc86) main_mup_pane_t3

0x31b7,	// (0x0005cc9e) main_mup_pane_t4_ParamLimits

0x31b7,	// (0x0005cc9e) main_mup_pane_t4

0x31d5,	// (0x0005ccbc) main_mup_pane_t5_ParamLimits

0x31d5,	// (0x0005ccbc) main_mup_pane_t5

0x31ea,	// (0x0005ccd1) main_mup_pane_t6_ParamLimits

0x31ea,	// (0x0005ccd1) main_mup_pane_t6

0x0005,

0xf459,	// (0x00068f40) main_mup_pane_t_ParamLimits

0xf459,	// (0x00068f40) main_mup_pane_t

0x31fc,	// (0x0005cce3) mup_progress_pane_ParamLimits

0x31fc,	// (0x0005cce3) mup_progress_pane

0x3208,	// (0x0005ccef) mup_visualizer_pane_ParamLimits

0x3208,	// (0x0005ccef) mup_visualizer_pane

0x3238,	// (0x0005cd1f) mup_volume_pane_ParamLimits

0x3238,	// (0x0005cd1f) mup_volume_pane

0xaee7,	// (0x000649ce) mup_visualizer_pane_g1_ParamLimits

0xaee7,	// (0x000649ce) mup_visualizer_pane_g1

0xaee7,	// (0x000649ce) mup_visualizer_pane_g2_ParamLimits

0xaee7,	// (0x000649ce) mup_visualizer_pane_g2

0xad4b,	// (0x00064832) mup_visualizer_pane_g3_ParamLimits

0xad4b,	// (0x00064832) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00068f4d) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00068f4d) mup_visualizer_pane_g

0xa23b,	// (0x00063d22) mup_volume_pane_g1

0xaefd,	// (0x000649e4) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00068f54) mup_volume_pane_g

0xa23b,	// (0x00063d22) mup_progress_pane_g1

0xaf06,	// (0x000649ed) mup_progress_pane_g2

0xaf0f,	// (0x000649f6) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00068f59) mup_progress_pane_g

0x9e64,	// (0x0006394b) bg_popup_window_pane_cp05

0xaf18,	// (0x000649ff) heading_pane_cp02_ParamLimits

0xaf18,	// (0x000649ff) heading_pane_cp02

0xaf32,	// (0x00064a19) list_popup_blid_pane

0xaf3a,	// (0x00064a21) list_blid_sat_info_pane_ParamLimits

0xaf3a,	// (0x00064a21) list_blid_sat_info_pane

0xaf4d,	// (0x00064a34) list_blid_sat_info_pane_g1

0xaf55,	// (0x00064a3c) list_blid_sat_info_pane_t1

0x334e,	// (0x0005ce35) mup_equalizer_pane_ParamLimits

0x334e,	// (0x0005ce35) mup_equalizer_pane

0x3367,	// (0x0005ce4e) mup_equalizer_pane_cp1_ParamLimits

0x3367,	// (0x0005ce4e) mup_equalizer_pane_cp1

0x3384,	// (0x0005ce6b) mup_equalizer_pane_cp2_ParamLimits

0x3384,	// (0x0005ce6b) mup_equalizer_pane_cp2

0x33a1,	// (0x0005ce88) mup_equalizer_pane_cp3_ParamLimits

0x33a1,	// (0x0005ce88) mup_equalizer_pane_cp3

0x33c2,	// (0x0005cea9) mup_equalizer_pane_cp4_ParamLimits

0x33c2,	// (0x0005cea9) mup_equalizer_pane_cp4

0x33e3,	// (0x0005ceca) mup_equalizer_pane_cp5

0x33f7,	// (0x0005cede) mup_equalizer_pane_cp6

0x340b,	// (0x0005cef2) mup_equalizer_pane_cp7

0xe446,	// (0x00067f2d) bg_popup_call_poc_act_pane_g9

0xe44e,	// (0x00067f35) bg_popup_call_poc_act_pane_g10

0xe456,	// (0x00067f3d) bg_popup_call_poc_act_pane_g11

0x000a,

0xa0bf,	// (0x00063ba6) mup_scale_pane

0xa23b,	// (0x00063d22) mup_scale_pane_g1

0xaf63,	// (0x00064a4a) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00068f75) mup_scale_pane_g

0xaf87,	// (0x00064a6e) msg_data_pane

0xaf8f,	// (0x00064a76) scroll_pane_cp017

0x3431,	// (0x0005cf18) bg_list_pane_cp04_ParamLimits

0x3431,	// (0x0005cf18) bg_list_pane_cp04

0xaf97,	// (0x00064a7e) msg_data_pane_g1

0x3451,	// (0x0005cf38) msg_data_pane_g2

0x345b,	// (0x0005cf42) msg_data_pane_g3

0x3463,	// (0x0005cf4a) msg_data_pane_g4

0x346b,	// (0x0005cf52) msg_data_pane_g5

0x3473,	// (0x0005cf5a) msg_data_pane_g6

0x347b,	// (0x0005cf62) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00068f84) msg_data_pane_g

0x3483,	// (0x0005cf6a) msg_text_pane_ParamLimits

0x3483,	// (0x0005cf6a) msg_text_pane

0x34a8,	// (0x0005cf8f) qrid_highlight_pane_cp011_ParamLimits

0x34a8,	// (0x0005cf8f) qrid_highlight_pane_cp011

0x9e64,	// (0x0006394b) msg_body_pane

0x9e64,	// (0x0006394b) msg_header_pane

0xafa8,	// (0x00064a8f) input_focus_pane_cp07

0x34cc,	// (0x0005cfb3) msg_header_pane_t1_ParamLimits

0x34cc,	// (0x0005cfb3) msg_header_pane_t1

0x34e0,	// (0x0005cfc7) msg_header_pane_t2_ParamLimits

0x34e0,	// (0x0005cfc7) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00068f98) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00068f98) msg_header_pane_t

0xafbd,	// (0x00064aa4) msg_body_pane_g1

0x34f2,	// (0x0005cfd9) msg_body_pane_t1_ParamLimits

0x34f2,	// (0x0005cfd9) msg_body_pane_t1

0x3523,	// (0x0005d00a) msg_body_pane_t2_ParamLimits

0x3523,	// (0x0005d00a) msg_body_pane_t2

0x3535,	// (0x0005d01c) msg_body_pane_t3_ParamLimits

0x3535,	// (0x0005d01c) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00068f9d) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00068f9d) msg_body_pane_t

0x3581,	// (0x0005d068) main_viewer_pane_g1_ParamLimits

0x3581,	// (0x0005d068) main_viewer_pane_g1

0x358f,	// (0x0005d076) main_viewer_pane_g2_ParamLimits

0x358f,	// (0x0005d076) main_viewer_pane_g2

0x359d,	// (0x0005d084) main_viewer_pane_g3_ParamLimits

0x359d,	// (0x0005d084) main_viewer_pane_g3

0x35ac,	// (0x0005d093) main_viewer_pane_g4_ParamLimits

0x35ac,	// (0x0005d093) main_viewer_pane_g4

0xafdd,	// (0x00064ac4) main_viewer_pane_g5_ParamLimits

0xafdd,	// (0x00064ac4) main_viewer_pane_g5

0xafdd,	// (0x00064ac4) main_viewer_pane_g7_ParamLimits

0xafdd,	// (0x00064ac4) main_viewer_pane_g7

0xa95f,	// (0x00064446) main_viewer_pane_g8_ParamLimits

0xa95f,	// (0x00064446) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00068fad) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00068fad) main_viewer_pane_g

0xaffb,	// (0x00064ae2) viewer_content_pane_ParamLimits

0xaffb,	// (0x00064ae2) viewer_content_pane

0x35e8,	// (0x0005d0cf) main_postcard_pane_g1_ParamLimits

0x35e8,	// (0x0005d0cf) main_postcard_pane_g1

0x35fe,	// (0x0005d0e5) main_postcard_pane_g2_ParamLimits

0x35fe,	// (0x0005d0e5) main_postcard_pane_g2

0x3614,	// (0x0005d0fb) main_postcard_pane_g3_ParamLimits

0x3614,	// (0x0005d0fb) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00068fbe) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00068fbe) main_postcard_pane_g

0x362b,	// (0x0005d112) main_postcard_pane_g4

0xe65b,	// (0x00068142) smil_status_volume_pane_g2

0x366e,	// (0x0005d155) postcard_pane_ParamLimits

0x366e,	// (0x0005d155) postcard_pane

0xb009,	// (0x00064af0) postcard_pane_g1_ParamLimits

0xb009,	// (0x00064af0) postcard_pane_g1

0x36b0,	// (0x0005d197) postcard_pane_g2_ParamLimits

0x36b0,	// (0x0005d197) postcard_pane_g2

0x36bc,	// (0x0005d1a3) postcard_pane_g3_ParamLimits

0x36bc,	// (0x0005d1a3) postcard_pane_g3

0xb017,	// (0x00064afe) postcard_pane_g4_ParamLimits

0xb017,	// (0x00064afe) postcard_pane_g4

0x36c8,	// (0x0005d1af) postcard_pane_g5_ParamLimits

0x36c8,	// (0x0005d1af) postcard_pane_g5

0x36dd,	// (0x0005d1c4) postcard_pane_g6_ParamLimits

0x36dd,	// (0x0005d1c4) postcard_pane_g6

0xb009,	// (0x00064af0) postcard_pane_g7_ParamLimits

0xb009,	// (0x00064af0) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00068fcb) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00068fcb) postcard_pane_g

0x36f1,	// (0x0005d1d8) main_mp2_pane_g1_ParamLimits

0x36f1,	// (0x0005d1d8) main_mp2_pane_g1

0x36fd,	// (0x0005d1e4) main_mp2_pane_g2_ParamLimits

0x36fd,	// (0x0005d1e4) main_mp2_pane_g2

0x3709,	// (0x0005d1f0) main_mp2_pane_g3_ParamLimits

0x3709,	// (0x0005d1f0) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00068fda) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00068fda) main_mp2_pane_g

0x3715,	// (0x0005d1fc) main_mp2_pane_t1_ParamLimits

0x3715,	// (0x0005d1fc) main_mp2_pane_t1

0x372a,	// (0x0005d211) main_mp2_pane_t2_ParamLimits

0x372a,	// (0x0005d211) main_mp2_pane_t2

0x373c,	// (0x0005d223) main_mp2_pane_t3_ParamLimits

0x373c,	// (0x0005d223) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00068fe1) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00068fe1) main_mp2_pane_t

0xb025,	// (0x00064b0c) pec_content_pane_ParamLimits

0xb025,	// (0x00064b0c) pec_content_pane

0xa5dc,	// (0x000640c3) scroll_pane_cp015

0xb037,	// (0x00064b1e) pec_attribute_pane_ParamLimits

0xb037,	// (0x00064b1e) pec_attribute_pane

0x374e,	// (0x0005d235) pec_content_pane_g1_ParamLimits

0x374e,	// (0x0005d235) pec_content_pane_g1

0xb047,	// (0x00064b2e) pec_content_pane_t1_ParamLimits

0xb047,	// (0x00064b2e) pec_content_pane_t1

0xb059,	// (0x00064b40) pec_content_pane_t2_ParamLimits

0xb059,	// (0x00064b40) pec_content_pane_t2

0x0001,

0xf501,	// (0x00068fe8) pec_content_pane_t_ParamLimits

0xf501,	// (0x00068fe8) pec_content_pane_t

0x375a,	// (0x0005d241) list_single_graphic_pane_cp01_ParamLimits

0x375a,	// (0x0005d241) list_single_graphic_pane_cp01

0xa0bf,	// (0x00063ba6) bg_popup_sub_pane_cp04

0xb06b,	// (0x00064b52) popup_mup_playback_window_g1

0xb077,	// (0x00064b5e) popup_mup_playback_window_t1

0xb08c,	// (0x00064b73) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00068fed) popup_mup_playback_window_t

0xb0c3,	// (0x00064baa) main_image_pane_g1_ParamLimits

0xb0c3,	// (0x00064baa) main_image_pane_g1

0xb106,	// (0x00064bed) scroll_pane_cp018_ParamLimits

0xb106,	// (0x00064bed) scroll_pane_cp018

0xb11e,	// (0x00064c05) scroll_pane_cp016_ParamLimits

0xb11e,	// (0x00064c05) scroll_pane_cp016

0x3827,	// (0x0005d30e) smil2_image_pane_ParamLimits

0x3827,	// (0x0005d30e) smil2_image_pane

0x3857,	// (0x0005d33e) smil2_root_pane_ParamLimits

0x3857,	// (0x0005d33e) smil2_root_pane

0x388f,	// (0x0005d376) smil2_text_pane_ParamLimits

0x388f,	// (0x0005d376) smil2_text_pane

0x9e64,	// (0x0006394b) bg_list_pane_cp06

0xb15a,	// (0x00064c41) grid_radio_pane

0x9e64,	// (0x0006394b) bg_popup_window_pane_cp06

0xb162,	// (0x00064c49) main_fmradio_pane_t1

0xabaa,	// (0x00064691) heading_pane_cp04

0xb170,	// (0x00064c57) main_fmradio_pane_t2

0xe45e,	// (0x00067f45) popup_cale_lunar_info_window_g1

0xb17e,	// (0x00064c65) main_fmradio_pane_t3

0xe466,	// (0x00067f4d) popup_cale_lunar_info_window_g2

0xb18c,	// (0x00064c73) main_fmradio_pane_t4

0x0001,

0xb19a,	// (0x00064c81) main_fmradio_pane_t5

0x0004,

0x037f,	// (0x00059e66) popup_cale_lunar_info_window_g

0xf51b,	// (0x00069002) main_fmradio_pane_t

0xb1a8,	// (0x00064c8f) wait_bar_pane_cp03

0xb1b0,	// (0x00064c97) cell_fmradio_pane_ParamLimits

0xb1b0,	// (0x00064c97) cell_fmradio_pane

0xb009,	// (0x00064af0) cell_fmradio_pane_g1_ParamLimits

0xb009,	// (0x00064af0) cell_fmradio_pane_g1

0x9e64,	// (0x0006394b) grid_highlight_pane_cp011

0xb1c3,	// (0x00064caa) poc_content_pane_ParamLimits

0xb1c3,	// (0x00064caa) poc_content_pane

0xb1d5,	// (0x00064cbc) scroll_pane_cp019

0x390f,	// (0x0005d3f6) popup_call_poc_act_window_ParamLimits

0x390f,	// (0x0005d3f6) popup_call_poc_act_window

0x3933,	// (0x0005d41a) popup_call_poc_inact_window_ParamLimits

0x3933,	// (0x0005d41a) popup_call_poc_inact_window

0x0356,	// (0x00059e3d) bg_popup_call_poc_act_pane_g

0xe3d6,	// (0x00067ebd) bg_popup_call_poc_inact_pane_g1

0xe3de,	// (0x00067ec5) bg_popup_call_poc_inact_pane_g2

0xb1dd,	// (0x00064cc4) popup_call_poc_act_window_g2

0xe3e6,	// (0x00067ecd) bg_popup_call_poc_inact_pane_g3

0xe3ee,	// (0x00067ed5) bg_popup_call_poc_inact_pane_g4

0xe3f6,	// (0x00067edd) bg_popup_call_poc_inact_pane_g5

0xb1e5,	// (0x00064ccc) popup_call_poc_act_window_t1_ParamLimits

0xb1e5,	// (0x00064ccc) popup_call_poc_act_window_t1

0xb20d,	// (0x00064cf4) popup_call_poc_act_window_t2_ParamLimits

0xb20d,	// (0x00064cf4) popup_call_poc_act_window_t2

0xb235,	// (0x00064d1c) popup_call_poc_act_window_t3_ParamLimits

0xb235,	// (0x00064d1c) popup_call_poc_act_window_t3

0xb25d,	// (0x00064d44) popup_call_poc_act_window_t4_ParamLimits

0xb25d,	// (0x00064d44) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0006900d) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0006900d) popup_call_poc_act_window_t

0xe3fe,	// (0x00067ee5) bg_popup_call_poc_inact_pane_g6

0xe406,	// (0x00067eed) bg_popup_call_poc_inact_pane_g7

0xe40e,	// (0x00067ef5) bg_popup_call_poc_inact_pane_g8

0xb26f,	// (0x00064d56) popup_call_poc_inact_window_g2

0xe416,	// (0x00067efd) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0343,	// (0x00059e2a) bg_popup_call_poc_inact_pane_g

0xb277,	// (0x00064d5e) popup_call_poc_inact_window_t1_ParamLimits

0xb277,	// (0x00064d5e) popup_call_poc_inact_window_t1

0xb28c,	// (0x00064d73) popup_call_poc_inact_window_t2_ParamLimits

0xb28c,	// (0x00064d73) popup_call_poc_inact_window_t2

0xb2a1,	// (0x00064d88) popup_call_poc_inact_window_t3_ParamLimits

0xb2a1,	// (0x00064d88) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00069016) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00069016) popup_call_poc_inact_window_t

0xe5ce,	// (0x000680b5) context_pane_ParamLimits

0x4166,	// (0x0005dc4d) signal_pane_ParamLimits

0xae16,	// (0x000648fd) main_call2_pane

0xe5bc,	// (0x000680a3) popup_phob_thumbnail2_window_ParamLimits

0xe5bc,	// (0x000680a3) popup_phob_thumbnail2_window

0xafc5,	// (0x00064aac) aid_hotspot_pointer_arrow_pane

0xafcd,	// (0x00064ab4) aid_hotspot_pointer_hand_pane

0x3c7c,	// (0x0005d763) phob_pre_status_pane_g5

0x19cd,	// (0x0005b4b4) cams_zoom_pane_ParamLimits

0x19dc,	// (0x0005b4c3) image_vga_pane_ParamLimits

0x19f6,	// (0x0005b4dd) main_camera_pane_g1_ParamLimits

0x1a08,	// (0x0005b4ef) main_camera_pane_g2_ParamLimits

0x1a18,	// (0x0005b4ff) main_camera_pane_g3_ParamLimits

0x1a28,	// (0x0005b50f) main_camera_pane_g4_ParamLimits

0x1a38,	// (0x0005b51f) main_camera_pane_g5_ParamLimits

0x1a48,	// (0x0005b52f) main_camera_pane_g6_ParamLimits

0x1a5a,	// (0x0005b541) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00068d15) main_camera_pane_g_ParamLimits

0x1a6a,	// (0x0005b551) main_camera_pane_t1_ParamLimits

0x1a80,	// (0x0005b567) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00068d26) main_camera_pane_t_ParamLimits

0xa0bf,	// (0x00063ba6) bg_popup_preview_window_pane_cp01_ParamLimits

0xa0bf,	// (0x00063ba6) bg_popup_preview_window_pane_cp01

0xb2b6,	// (0x00064d9d) popup_phob_thumbnail2_window_g1_ParamLimits

0xb2b6,	// (0x00064d9d) popup_phob_thumbnail2_window_g1

0x9e64,	// (0x0006394b) call2_cli_visual_pane

0x3967,	// (0x0005d44e) popup_call2_audio_conf_window_ParamLimits

0x3967,	// (0x0005d44e) popup_call2_audio_conf_window

0x3987,	// (0x0005d46e) popup_call2_audio_first_window_ParamLimits

0x3987,	// (0x0005d46e) popup_call2_audio_first_window

0x3a1d,	// (0x0005d504) popup_call2_audio_in_window_ParamLimits

0x3a1d,	// (0x0005d504) popup_call2_audio_in_window

0x3a65,	// (0x0005d54c) popup_call2_audio_out_window_ParamLimits

0x3a65,	// (0x0005d54c) popup_call2_audio_out_window

0x3acf,	// (0x0005d5b6) popup_call2_audio_second_window_ParamLimits

0x3acf,	// (0x0005d5b6) popup_call2_audio_second_window

0x3b35,	// (0x0005d61c) popup_call2_audio_wait_window_ParamLimits

0x3b35,	// (0x0005d61c) popup_call2_audio_wait_window

0x9e64,	// (0x0006394b) bg_popup_call2_act_pane_cp03

0xa0a1,	// (0x00063b88) list_conf_pane_cp

0xb2c2,	// (0x00064da9) popup_call2_audio_conf_window_t1

0xac07,	// (0x000646ee) list_single_graphic_popup_conf2_pane_ParamLimits

0xac07,	// (0x000646ee) list_single_graphic_popup_conf2_pane

0xac1a,	// (0x00064701) list_highlight_pane_cp04

0xb2d0,	// (0x00064db7) list_single_graphic_popup_conf2_pane_g1

0xac2b,	// (0x00064712) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0006901d) list_single_graphic_popup_conf2_pane_g

0xb2da,	// (0x00064dc1) list_single_graphic_popup_conf2_pane_t1

0xb2e8,	// (0x00064dcf) bg_popup_call2_act_pane_cp01_ParamLimits

0xb2e8,	// (0x00064dcf) bg_popup_call2_act_pane_cp01

0xb372,	// (0x00064e59) call_type_pane_cp05_ParamLimits

0xb372,	// (0x00064e59) call_type_pane_cp05

0xb3c6,	// (0x00064ead) popup_call2_audio_second_window_g1_ParamLimits

0xb3c6,	// (0x00064ead) popup_call2_audio_second_window_g1

0xb41a,	// (0x00064f01) popup_call2_audio_second_window_g2_ParamLimits

0xb41a,	// (0x00064f01) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00069022) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00069022) popup_call2_audio_second_window_g

0xb47f,	// (0x00064f66) popup_call2_audio_second_window_t1_ParamLimits

0xb47f,	// (0x00064f66) popup_call2_audio_second_window_t1

0xd85a,	// (0x00067341) popup_call2_audio_second_window_t2_ParamLimits

0xd85a,	// (0x00067341) popup_call2_audio_second_window_t2

0xd8ad,	// (0x00067394) popup_call2_audio_second_window_t3_ParamLimits

0xd8ad,	// (0x00067394) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00069029) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00069029) popup_call2_audio_second_window_t

0x9e64,	// (0x0006394b) bg_popup_call2_in_pane_cp02

0x9e6e,	// (0x00063955) call_type_pane_cp04

0x9e76,	// (0x0006395d) popup_call2_audio_wait_window_g1

0x9e7e,	// (0x00063965) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00068c02) popup_call2_audio_wait_window_g

0x9e86,	// (0x0006396d) popup_call2_audio_wait_window_t3

0xd9a0,	// (0x00067487) bg_popup_call2_act_pane_ParamLimits

0xd9a0,	// (0x00067487) bg_popup_call2_act_pane

0xda69,	// (0x00067550) call_type_pane_cp03_ParamLimits

0xda69,	// (0x00067550) call_type_pane_cp03

0xdacd,	// (0x000675b4) popup_call2_audio_first_window_g1_ParamLimits

0xdacd,	// (0x000675b4) popup_call2_audio_first_window_g1

0xdb3d,	// (0x00067624) popup_call2_audio_first_window_g2_ParamLimits

0xdb3d,	// (0x00067624) popup_call2_audio_first_window_g2

0xaee7,	// (0x000649ce) popup_call2_audio_first_window_g3_ParamLimits

0xaee7,	// (0x000649ce) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00069032) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00069032) popup_call2_audio_first_window_g

0xdc1b,	// (0x00067702) popup_call2_audio_first_window_t1_ParamLimits

0xdc1b,	// (0x00067702) popup_call2_audio_first_window_t1

0xdd1e,	// (0x00067805) popup_call2_audio_first_window_t4_ParamLimits

0xdd1e,	// (0x00067805) popup_call2_audio_first_window_t4

0xde01,	// (0x000678e8) popup_call2_audio_first_window_t5_ParamLimits

0xde01,	// (0x000678e8) popup_call2_audio_first_window_t5

0x0003,

0x02f4,	// (0x00059ddb) popup_call2_audio_first_window_t_ParamLimits

0x02f4,	// (0x00059ddb) popup_call2_audio_first_window_t

0xa0b7,	// (0x00063b9e) bg_popup_call2_act_pane_g1

0xe46e,	// (0x00067f55) popup_cale_lunar_info_window_t1

0xe47c,	// (0x00067f63) popup_cale_lunar_info_window_t2

0xe48a,	// (0x00067f71) popup_cale_lunar_info_window_t3

0x9e64,	// (0x0006394b) bg_popup_call2_bubble_pane

0xdf02,	// (0x000679e9) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf02,	// (0x000679e9) bg_popup_call2_in_pane_cp01

0x9b40,	// (0x00063627) call_type_pane_cp02

0xdf4a,	// (0x00067a31) popup_call2_audio_out_window_g1_ParamLimits

0xdf4a,	// (0x00067a31) popup_call2_audio_out_window_g1

0xdf76,	// (0x00067a5d) popup_call2_audio_out_window_g2_ParamLimits

0xdf76,	// (0x00067a5d) popup_call2_audio_out_window_g2

0xdf9e,	// (0x00067a85) popup_call2_audio_out_window_g3_ParamLimits

0xdf9e,	// (0x00067a85) popup_call2_audio_out_window_g3

0x0003,

0x02fd,	// (0x00059de4) popup_call2_audio_out_window_g_ParamLimits

0x02fd,	// (0x00059de4) popup_call2_audio_out_window_g

0xdfd9,	// (0x00067ac0) popup_call2_audio_out_window_t1_ParamLimits

0xdfd9,	// (0x00067ac0) popup_call2_audio_out_window_t1

0xe038,	// (0x00067b1f) popup_call2_audio_out_window_t2_ParamLimits

0xe038,	// (0x00067b1f) popup_call2_audio_out_window_t2

0xe08c,	// (0x00067b73) popup_call2_audio_out_window_t3_ParamLimits

0xe08c,	// (0x00067b73) popup_call2_audio_out_window_t3

0xe0a2,	// (0x00067b89) popup_call2_audio_out_window_t4_ParamLimits

0xe0a2,	// (0x00067b89) popup_call2_audio_out_window_t4

0xe0b8,	// (0x00067b9f) popup_call2_audio_out_window_t5_ParamLimits

0xe0b8,	// (0x00067b9f) popup_call2_audio_out_window_t5

0x0005,

0x0306,	// (0x00059ded) popup_call2_audio_out_window_t_ParamLimits

0x0306,	// (0x00059ded) popup_call2_audio_out_window_t

0xe11c,	// (0x00067c03) bg_popup_call2_in_pane_ParamLimits

0xe11c,	// (0x00067c03) bg_popup_call2_in_pane

0xe178,	// (0x00067c5f) popup_call2_audio_in_window_g1_ParamLimits

0xe178,	// (0x00067c5f) popup_call2_audio_in_window_g1

0xe1b0,	// (0x00067c97) popup_call2_audio_in_window_g2_ParamLimits

0xe1b0,	// (0x00067c97) popup_call2_audio_in_window_g2

0xe1e8,	// (0x00067ccf) popup_call2_audio_in_window_g3_ParamLimits

0xe1e8,	// (0x00067ccf) popup_call2_audio_in_window_g3

0x0003,

0x0313,	// (0x00059dfa) popup_call2_audio_in_window_g_ParamLimits

0x0313,	// (0x00059dfa) popup_call2_audio_in_window_g

0xe240,	// (0x00067d27) popup_call2_audio_in_window_t1_ParamLimits

0xe240,	// (0x00067d27) popup_call2_audio_in_window_t1

0xe2c0,	// (0x00067da7) popup_call2_audio_in_window_t2_ParamLimits

0xe2c0,	// (0x00067da7) popup_call2_audio_in_window_t2

0xe340,	// (0x00067e27) popup_call2_audio_in_window_t3_ParamLimits

0xe340,	// (0x00067e27) popup_call2_audio_in_window_t3

0xe35a,	// (0x00067e41) popup_call2_audio_in_window_t4_ParamLimits

0xe35a,	// (0x00067e41) popup_call2_audio_in_window_t4

0xe36c,	// (0x00067e53) popup_call2_audio_in_window_t5_ParamLimits

0xe36c,	// (0x00067e53) popup_call2_audio_in_window_t5

0xe381,	// (0x00067e68) popup_call2_audio_in_window_t6_ParamLimits

0xe381,	// (0x00067e68) popup_call2_audio_in_window_t6

0x0005,

0x031c,	// (0x00059e03) popup_call2_audio_in_window_t_ParamLimits

0x031c,	// (0x00059e03) popup_call2_audio_in_window_t

0xa0b7,	// (0x00063b9e) bg_popup_call2_in_pane_g1

0xe498,	// (0x00067f7f) popup_cale_lunar_info_window_t4

0x0003,

0x0384,	// (0x00059e6b) popup_cale_lunar_info_window_t

0xa0bf,	// (0x00063ba6) bg_popup_call2_rect_pane_ParamLimits

0xa0bf,	// (0x00063ba6) bg_popup_call2_rect_pane

0x9e64,	// (0x0006394b) call2_cli_visual_graphic_pane

0x9e64,	// (0x0006394b) call2_cli_visual_text_pane

0xb53a,	// (0x00065021) smil_status_volume_pane_g3

0x0002,

0xa23b,	// (0x00063d22) call2_cli_visual_graphic_pane_g1

0xa23b,	// (0x00063d22) call2_cli_visual_graphic_pane_g2

0xa23b,	// (0x00063d22) call2_cli_visual_graphic_pane_g3

0x0002,

0xf556,	// (0x0006903d) call2_cli_visual_graphic_pane_g

0xe396,	// (0x00067e7d) bg_popup_call2_rect_pane_g1

0xa2c7,	// (0x00063dae) bg_popup_call2_rect_pane_g2

0xe39e,	// (0x00067e85) bg_popup_call2_rect_pane_g3

0xe3a6,	// (0x00067e8d) bg_popup_call2_rect_pane_g4

0xe3ae,	// (0x00067e95) bg_popup_call2_rect_pane_g5

0xe3b6,	// (0x00067e9d) bg_popup_call2_rect_pane_g6

0xe3be,	// (0x00067ea5) bg_popup_call2_rect_pane_g7

0xe3c6,	// (0x00067ead) bg_popup_call2_rect_pane_g8

0xe3ce,	// (0x00067eb5) bg_popup_call2_rect_pane_g9

0x0008,

0xf55d,	// (0x00069044) bg_popup_call2_rect_pane_g

0xe3d6,	// (0x00067ebd) bg_popup_call2_bubble_pane_g1

0xe3de,	// (0x00067ec5) bg_popup_call2_bubble_pane_g2

0xe3e6,	// (0x00067ecd) bg_popup_call2_bubble_pane_g3

0xe3ee,	// (0x00067ed5) bg_popup_call2_bubble_pane_g4

0xe3f6,	// (0x00067edd) bg_popup_call2_bubble_pane_g5

0xe3fe,	// (0x00067ee5) bg_popup_call2_bubble_pane_g6

0xe406,	// (0x00067eed) bg_popup_call2_bubble_pane_g7

0xe40e,	// (0x00067ef5) bg_popup_call2_bubble_pane_g8

0xe416,	// (0x00067efd) bg_popup_call2_bubble_pane_g9

0x0008,

0x0343,	// (0x00059e2a) bg_popup_call2_bubble_pane_g

0x1564,	// (0x0005b04b) aid_cale_week_size_cell_pane

0x1a96,	// (0x0005b57d) aid_cams_cif_uncrop_pane_ParamLimits

0x1a96,	// (0x0005b57d) aid_cams_cif_uncrop_pane

0x1c4f,	// (0x0005b736) aid_cams_size_cell_ParamLimits

0x1c4f,	// (0x0005b736) aid_cams_size_cell

0x1c63,	// (0x0005b74a) grid_cams_pane_ParamLimits

0x1c7d,	// (0x0005b764) linegrid_cams_pane_ParamLimits

0x1e5b,	// (0x0005b942) call_video_pane_t1

0x1e79,	// (0x0005b960) call_video_pane_t2

0x0001,

0xf292,	// (0x00068d79) call_video_pane_t

0x22a5,	// (0x0005bd8c) aid_cale_month_size_cell_pane_ParamLimits

0x22a5,	// (0x0005bd8c) aid_cale_month_size_cell_pane

0xf5a0,	// (0x00069087) smil_status_volume_pane_g

0xb547,	// (0x0006502e) volume_smil_pane_ParamLimits

0x0e0b,	// (0x0005a8f2) aid_popup2_width_pane

0x14c6,	// (0x0005afad) cell_qdial_pane_g4_ParamLimits

0x14c6,	// (0x0005afad) cell_qdial_pane_g4

0x2e8c,	// (0x0005c973) aid_blid_cardinal_pane_ParamLimits

0x2e98,	// (0x0005c97f) aid_blid_destination_pane_ParamLimits

0x2e98,	// (0x0005c97f) aid_blid_destination_pane

0xa0bf,	// (0x00063ba6) bg_popup_call_poc_act_pane_ParamLimits

0xa0bf,	// (0x00063ba6) bg_popup_call_poc_act_pane

0xa0bf,	// (0x00063ba6) bg_popup_call_poc_inact_pane_ParamLimits

0xa0bf,	// (0x00063ba6) bg_popup_call_poc_inact_pane

0xe41e,	// (0x00067f05) bg_popup_call_poc_act_pane_g1

0xe426,	// (0x00067f0d) bg_popup_call_poc_act_pane_g2

0xe42e,	// (0x00067f15) bg_popup_call_poc_act_pane_g3

0xe3ee,	// (0x00067ed5) bg_popup_call_poc_act_pane_g4

0xe3f6,	// (0x00067edd) bg_popup_call_poc_act_pane_g5

0xe436,	// (0x00067f1d) bg_popup_call_poc_act_pane_g6

0xe406,	// (0x00067eed) bg_popup_call_poc_act_pane_g7

0xe43e,	// (0x00067f25) bg_popup_call_poc_act_pane_g8

0x9e64,	// (0x0006394b) main_usb_pane

0xe597,	// (0x0006807e) popup_cale_lunar_info_window

0x2151,	// (0x0005bc38) im_reading_pane_t1_ParamLimits

0xa534,	// (0x0006401b) list_im_pane_ParamLimits

0xa545,	// (0x0006402c) scroll_pane_cp07_ParamLimits

0x9e64,	// (0x0006394b) grid_highlight_pane_cp012

0xa0bf,	// (0x00063ba6) mup_scale_pane_ParamLimits

0xb009,	// (0x00064af0) main_usb_pane_g1_ParamLimits

0xb009,	// (0x00064af0) main_usb_pane_g1

0x3b91,	// (0x0005d678) main_usb_pane_g2_ParamLimits

0x3b91,	// (0x0005d678) main_usb_pane_g2

0x0001,

0xf570,	// (0x00069057) main_usb_pane_g_ParamLimits

0xf570,	// (0x00069057) main_usb_pane_g

0x3ba7,	// (0x0005d68e) main_usb_pane_t1_ParamLimits

0x3ba7,	// (0x0005d68e) main_usb_pane_t1

0x3bb9,	// (0x0005d6a0) main_usb_pane_t2_ParamLimits

0x3bb9,	// (0x0005d6a0) main_usb_pane_t2

0x3bcb,	// (0x0005d6b2) main_usb_pane_t3_ParamLimits

0x3bcb,	// (0x0005d6b2) main_usb_pane_t3

0x3bdd,	// (0x0005d6c4) main_usb_pane_t4_ParamLimits

0x3bdd,	// (0x0005d6c4) main_usb_pane_t4

0x3bef,	// (0x0005d6d6) main_usb_pane_t5_ParamLimits

0x3bef,	// (0x0005d6d6) main_usb_pane_t5

0x3c01,	// (0x0005d6e8) main_usb_pane_t6_ParamLimits

0x3c01,	// (0x0005d6e8) main_usb_pane_t6

0x0005,

0xf575,	// (0x0006905c) main_usb_pane_t_ParamLimits

0x2e3b,	// (0x0005c922) aid_text_placing

0x2e44,	// (0x0005c92b) main_location2_pane_t1_ParamLimits

0x2e56,	// (0x0005c93d) main_location2_pane_t2_ParamLimits

0x2e68,	// (0x0005c94f) main_location2_pane_t3_ParamLimits

0x2e7a,	// (0x0005c961) main_location2_pane_t4_ParamLimits

0x2e7a,	// (0x0005c961) main_location2_pane_t4

0xf3f3,	// (0x00068eda) main_location2_pane_t_ParamLimits

0xa0fb,	// (0x00063be2) find_pinb_pane_g2_ParamLimits

0xa0fb,	// (0x00063be2) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00068c28) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00068c28) find_pinb_pane_g

0xa107,	// (0x00063bee) find_pinb_pane_t1_ParamLimits

0xa119,	// (0x00063c00) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00068c2d) find_pinb_pane_t_ParamLimits

0x9e64,	// (0x0006394b) main_call3_pane

0x2609,	// (0x0005c0f0) cale_month_day_heading_pane_t1_ParamLimits

0x2667,	// (0x0005c14e) cale_month_day_heading_pane_t2_ParamLimits

0x26cc,	// (0x0005c1b3) cale_month_day_heading_pane_t3_ParamLimits

0x2731,	// (0x0005c218) cale_month_day_heading_pane_t4_ParamLimits

0x2796,	// (0x0005c27d) cale_month_day_heading_pane_t5_ParamLimits

0x280b,	// (0x0005c2f2) cale_month_day_heading_pane_t6_ParamLimits

0x2880,	// (0x0005c367) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00068db1) cale_month_day_heading_pane_t_ParamLimits

0xa791,	// (0x00064278) smil_status_volume_pane

0x368c,	// (0x0005d173) postcard_address_pane_ParamLimits

0x368c,	// (0x0005d173) postcard_address_pane

0x369e,	// (0x0005d185) postcard_message_pane_ParamLimits

0x369e,	// (0x0005d185) postcard_message_pane

0x3b6f,	// (0x0005d656) call2_cli_visual_pane_t1_ParamLimits

0x3b6f,	// (0x0005d656) call2_cli_visual_pane_t1

0x4393,	// (0x0005de7a) postcard_message_pane_t1_ParamLimits

0x4393,	// (0x0005de7a) postcard_message_pane_t1

0x437c,	// (0x0005de63) postcard_address_pane_t1_ParamLimits

0x437c,	// (0x0005de63) postcard_address_pane_t1

0x4368,	// (0x0005de4f) popup_call3_audio_in_window_ParamLimits

0x4368,	// (0x0005de4f) popup_call3_audio_in_window

0x41f3,	// (0x0005dcda) bg_popup_call3_in_pane_ParamLimits

0x41f3,	// (0x0005dcda) bg_popup_call3_in_pane

0x4269,	// (0x0005dd50) popup_call3_audio_in_window_g1_ParamLimits

0x4269,	// (0x0005dd50) popup_call3_audio_in_window_g1

0x4289,	// (0x0005dd70) popup_call3_audio_in_window_g2_ParamLimits

0x4289,	// (0x0005dd70) popup_call3_audio_in_window_g2

0x42a9,	// (0x0005dd90) popup_call3_audio_in_window_g3_ParamLimits

0x42a9,	// (0x0005dd90) popup_call3_audio_in_window_g3

0x0003,

0xf5a7,	// (0x0006908e) popup_call3_audio_in_window_g_ParamLimits

0xf5a7,	// (0x0006908e) popup_call3_audio_in_window_g

0x42da,	// (0x0005ddc1) popup_call3_audio_in_window_t1_ParamLimits

0x42da,	// (0x0005ddc1) popup_call3_audio_in_window_t1

0x4318,	// (0x0005ddff) popup_call3_audio_in_window_t2_ParamLimits

0x4318,	// (0x0005ddff) popup_call3_audio_in_window_t2

0x4356,	// (0x0005de3d) popup_call3_audio_in_window_t3_ParamLimits

0x4356,	// (0x0005de3d) popup_call3_audio_in_window_t3

0x0002,

0xf5b0,	// (0x00069097) popup_call3_audio_in_window_t_ParamLimits

0xf5b0,	// (0x00069097) popup_call3_audio_in_window_t

0xae16,	// (0x000648fd) bg_popup_call3_rect_pane

0xe396,	// (0x00067e7d) bg_popup_call3_rect_pane_g1

0xa2c7,	// (0x00063dae) bg_popup_call3_rect_pane_g2

0xe39e,	// (0x00067e85) bg_popup_call3_rect_pane_g3

0xe3a6,	// (0x00067e8d) bg_popup_call3_rect_pane_g4

0xe3ae,	// (0x00067e95) bg_popup_call3_rect_pane_g5

0xe3b6,	// (0x00067e9d) bg_popup_call3_rect_pane_g6

0xe3be,	// (0x00067ea5) bg_popup_call3_rect_pane_g7

0x324e,	// (0x0005cd35) mup_visualizer_osc_pane

0xaef5,	// (0x000649dc) mup_visualizer_spec_pane

0x4223,	// (0x0005dd0a) call3_video_qcif_pane_ParamLimits

0x4223,	// (0x0005dd0a) call3_video_qcif_pane

0x4236,	// (0x0005dd1d) call3_video_qcif_uncrop_pane_ParamLimits

0x4236,	// (0x0005dd1d) call3_video_qcif_uncrop_pane

0x4244,	// (0x0005dd2b) call3_video_subqcif_pane_ParamLimits

0x4244,	// (0x0005dd2b) call3_video_subqcif_pane

0x4258,	// (0x0005dd3f) call3_video_subqcif_uncrop_pane_ParamLimits

0x4258,	// (0x0005dd3f) call3_video_subqcif_uncrop_pane

0x42c9,	// (0x0005ddb0) popup_call3_audio_in_window_g4_ParamLimits

0x42c9,	// (0x0005ddb0) popup_call3_audio_in_window_g4

0x41e2,	// (0x0005dcc9) mup_spec_half_pane

0x41eb,	// (0x0005dcd2) mup_spec_half_pane_cp

0xe62e,	// (0x00068115) mup_osc_middle_pane

0xe637,	// (0x0006811e) mup_visualizer_osc_pane_g1

0x41c2,	// (0x0005dca9) mup_spec_bar_pane_ParamLimits

0x41c2,	// (0x0005dca9) mup_spec_bar_pane

0xe61b,	// (0x00068102) mup_spec_bar_pane_g1

0xe625,	// (0x0006810c) mup_spec_bar_pane_g2

0x0001,

0x03c8,	// (0x00059eaf) mup_spec_bar_pane_g

0x1564,	// (0x0005b04b) aid_cale_week_size_cell_pane_ParamLimits

0x1577,	// (0x0005b05e) bg_cale_heading_pane_ParamLimits

0xa343,	// (0x00063e2a) bg_cale_pane_cp01_ParamLimits

0x158b,	// (0x0005b072) cale_week_corner_pane_ParamLimits

0x15a1,	// (0x0005b088) cale_week_day_heading_pane_ParamLimits

0x15b5,	// (0x0005b09c) cale_week_scroll_pane_g1_ParamLimits

0x15c6,	// (0x0005b0ad) cale_week_scroll_pane_g2_ParamLimits

0x15d7,	// (0x0005b0be) cale_week_scroll_pane_g3_ParamLimits

0x15e8,	// (0x0005b0cf) cale_week_scroll_pane_g4_ParamLimits

0x15f9,	// (0x0005b0e0) cale_week_scroll_pane_g5_ParamLimits

0x160c,	// (0x0005b0f3) cale_week_scroll_pane_g6_ParamLimits

0x161f,	// (0x0005b106) cale_week_scroll_pane_g7_ParamLimits

0x1632,	// (0x0005b119) cale_week_scroll_pane_g8_ParamLimits

0x1645,	// (0x0005b12c) cale_week_scroll_pane_g9_ParamLimits

0x1656,	// (0x0005b13d) cale_week_scroll_pane_g10_ParamLimits

0x1667,	// (0x0005b14e) cale_week_scroll_pane_g11_ParamLimits

0x1678,	// (0x0005b15f) cale_week_scroll_pane_g12_ParamLimits

0x1689,	// (0x0005b170) cale_week_scroll_pane_g13_ParamLimits

0x169a,	// (0x0005b181) cale_week_scroll_pane_g14_ParamLimits

0x16ab,	// (0x0005b192) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00068cb9) cale_week_scroll_pane_g_ParamLimits

0x16bc,	// (0x0005b1a3) cale_week_time_pane_ParamLimits

0x16cf,	// (0x0005b1b6) grid_cale_week_pane_ParamLimits

0xa35c,	// (0x00063e43) listscroll_cale_week_pane_t1

0x16e4,	// (0x0005b1cb) scroll_pane_cp08_ParamLimits

0x22e6,	// (0x0005bdcd) cale_month_corner_pane_ParamLimits

0xa75b,	// (0x00064242) cale_month_pane_t1

0x25c8,	// (0x0005c0af) cale_month_week_pane_ParamLimits

0x2c87,	// (0x0005c76e) popup_call_status_window_g1_ParamLimits

0x2c9b,	// (0x0005c782) popup_call_status_window_g2_ParamLimits

0x2caf,	// (0x0005c796) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00068e61) popup_call_status_window_g_ParamLimits

0xab27,	// (0x0006460e) aid_call2_pane

0x34be,	// (0x0005cfa5) msg_header_pane_g1

0x368c,	// (0x0005d173) postcard_address2_pane_ParamLimits

0x368c,	// (0x0005d173) postcard_address2_pane

0x369e,	// (0x0005d185) postcard_message2_pane_ParamLimits

0x369e,	// (0x0005d185) postcard_message2_pane

0x4174,	// (0x0005dc5b) message2_row_pane_ParamLimits

0x4174,	// (0x0005dc5b) message2_row_pane

0x4190,	// (0x0005dc77) address2_row_pane_ParamLimits

0x4190,	// (0x0005dc77) address2_row_pane

0xe5e9,	// (0x000680d0) postcard_message2_row_pane_g1

0xe5f1,	// (0x000680d8) postcard_message2_row_pane_t1

0xe5e9,	// (0x000680d0) address2_row_pane_g1

0xe5f1,	// (0x000680d8) address2_row_pane_t1

0x1992,	// (0x0005b479) aid_size_cell_vorec

0x9e64,	// (0x0006394b) main_rss_pane

0x41a3,	// (0x0005dc8a) rss_list_single_pane_ParamLimits

0x41a3,	// (0x0005dc8a) rss_list_single_pane

0xe5ff,	// (0x000680e6) rss_list_single_pane_t1

0xe60d,	// (0x000680f4) rss_list_single_pane_t2

0x0001,

0x03c3,	// (0x00059eaa) rss_list_single_pane_t

0x9e64,	// (0x0006394b) main_camera2_pane

0x9e64,	// (0x0006394b) main_video2_pane

0x440c,	// (0x0005def3) cams_zoom_pane_cp2_ParamLimits

0x440c,	// (0x0005def3) cams_zoom_pane_cp2

0x442c,	// (0x0005df13) image2_vga_pane_ParamLimits

0x442c,	// (0x0005df13) image2_vga_pane

0x447d,	// (0x0005df64) main_camera2_pane_g1_ParamLimits

0x447d,	// (0x0005df64) main_camera2_pane_g1

0x449d,	// (0x0005df84) main_camera2_pane_g2_ParamLimits

0x449d,	// (0x0005df84) main_camera2_pane_g2

0x44bd,	// (0x0005dfa4) main_camera2_pane_g3_ParamLimits

0x44bd,	// (0x0005dfa4) main_camera2_pane_g3

0x44dd,	// (0x0005dfc4) main_camera2_pane_g4_ParamLimits

0x44dd,	// (0x0005dfc4) main_camera2_pane_g4

0x44fd,	// (0x0005dfe4) main_camera2_pane_g5_ParamLimits

0x44fd,	// (0x0005dfe4) main_camera2_pane_g5

0x451d,	// (0x0005e004) main_camera2_pane_g6_ParamLimits

0x451d,	// (0x0005e004) main_camera2_pane_g6

0x453d,	// (0x0005e024) main_camera2_pane_g7_ParamLimits

0x453d,	// (0x0005e024) main_camera2_pane_g7

0x455d,	// (0x0005e044) main_camera2_pane_g8_ParamLimits

0x455d,	// (0x0005e044) main_camera2_pane_g8

0x0008,

0xf5b7,	// (0x0006909e) main_camera2_pane_g_ParamLimits

0xf5b7,	// (0x0006909e) main_camera2_pane_g

0x459d,	// (0x0005e084) main_camera2_pane_t1_ParamLimits

0x459d,	// (0x0005e084) main_camera2_pane_t1

0x45d2,	// (0x0005e0b9) main_camera2_pane_t2_ParamLimits

0x45d2,	// (0x0005e0b9) main_camera2_pane_t2

0x45f8,	// (0x0005e0df) main_camera2_pane_t3_ParamLimits

0x45f8,	// (0x0005e0df) main_camera2_pane_t3

0x4656,	// (0x0005e13d) main_camera2_pane_t4_ParamLimits

0x4656,	// (0x0005e13d) main_camera2_pane_t4

0x0006,

0xf5ca,	// (0x000690b1) main_camera2_pane_t_ParamLimits

0xf5ca,	// (0x000690b1) main_camera2_pane_t

0x46e8,	// (0x0005e1cf) cams_zoom_pane_cp4_ParamLimits

0x46e8,	// (0x0005e1cf) cams_zoom_pane_cp4

0x46fe,	// (0x0005e1e5) image2_cif_pane_ParamLimits

0x46fe,	// (0x0005e1e5) image2_cif_pane

0x4729,	// (0x0005e210) image2_subqcif_pane_ParamLimits

0x4729,	// (0x0005e210) image2_subqcif_pane

0x4743,	// (0x0005e22a) main_video2_pane_g1_ParamLimits

0x4743,	// (0x0005e22a) main_video2_pane_g1

0x475d,	// (0x0005e244) main_video2_pane_g2_ParamLimits

0x475d,	// (0x0005e244) main_video2_pane_g2

0x4773,	// (0x0005e25a) main_video2_pane_g3_ParamLimits

0x4773,	// (0x0005e25a) main_video2_pane_g3

0x4789,	// (0x0005e270) main_video2_pane_g4_ParamLimits

0x4789,	// (0x0005e270) main_video2_pane_g4

0x479f,	// (0x0005e286) main_video2_pane_g5_ParamLimits

0x479f,	// (0x0005e286) main_video2_pane_g5

0x47b5,	// (0x0005e29c) main_video2_pane_g6_ParamLimits

0x47b5,	// (0x0005e29c) main_video2_pane_g6

0x0005,

0xf5d9,	// (0x000690c0) main_video2_pane_g_ParamLimits

0xf5d9,	// (0x000690c0) main_video2_pane_g

0x47cf,	// (0x0005e2b6) main_video2_pane_t1_ParamLimits

0x47cf,	// (0x0005e2b6) main_video2_pane_t1

0x47f3,	// (0x0005e2da) main_video2_pane_t2_ParamLimits

0x47f3,	// (0x0005e2da) main_video2_pane_t2

0x4841,	// (0x0005e328) main_video2_pane_t3_ParamLimits

0x4841,	// (0x0005e328) main_video2_pane_t3

0x0002,

0xf5e6,	// (0x000690cd) main_video2_pane_t_ParamLimits

0xf5e6,	// (0x000690cd) main_video2_pane_t

0x3cbc,	// (0x0005d7a3) call_muted_g2

0x0001,

0xf59b,	// (0x00069082) call_muted_g

0x9e64,	// (0x0006394b) main_mup2_pane

0x4885,	// (0x0005e36c) main_mup2_pane_g1_ParamLimits

0x4885,	// (0x0005e36c) main_mup2_pane_g1

0x4891,	// (0x0005e378) main_mup2_pane_g2_ParamLimits

0x4891,	// (0x0005e378) main_mup2_pane_g2

0xb5b5,	// (0x0006509c) main_mup_pane_g13_cp1

0xb5bd,	// (0x000650a4) mup_volume_pane_cp1

0x48ad,	// (0x0005e394) main_mup2_pane_g4_ParamLimits

0x48ad,	// (0x0005e394) main_mup2_pane_g4

0x48bf,	// (0x0005e3a6) main_mup2_pane_g5_ParamLimits

0x48bf,	// (0x0005e3a6) main_mup2_pane_g5

0x48d1,	// (0x0005e3b8) main_mup2_pane_g6_ParamLimits

0x48d1,	// (0x0005e3b8) main_mup2_pane_g6

0x48e3,	// (0x0005e3ca) main_mup2_pane_g7_ParamLimits

0x48e3,	// (0x0005e3ca) main_mup2_pane_g7

0x0006,

0xf5ed,	// (0x000690d4) main_mup2_pane_g_ParamLimits

0xf5ed,	// (0x000690d4) main_mup2_pane_g

0x48fb,	// (0x0005e3e2) main_mup2_pane_t1_ParamLimits

0x48fb,	// (0x0005e3e2) main_mup2_pane_t1

0x4911,	// (0x0005e3f8) main_mup2_pane_t2_ParamLimits

0x4911,	// (0x0005e3f8) main_mup2_pane_t2

0x4927,	// (0x0005e40e) main_mup2_pane_t3_ParamLimits

0x4927,	// (0x0005e40e) main_mup2_pane_t3

0x493d,	// (0x0005e424) main_mup2_pane_t4_ParamLimits

0x493d,	// (0x0005e424) main_mup2_pane_t4

0x4955,	// (0x0005e43c) main_mup2_pane_t5_ParamLimits

0x4955,	// (0x0005e43c) main_mup2_pane_t5

0x496d,	// (0x0005e454) main_mup2_pane_t6_ParamLimits

0x496d,	// (0x0005e454) main_mup2_pane_t6

0x0005,

0xf5fc,	// (0x000690e3) main_mup2_pane_t_ParamLimits

0xf5fc,	// (0x000690e3) main_mup2_pane_t

0x499d,	// (0x0005e484) mup2_visualizer_pane_ParamLimits

0x499d,	// (0x0005e484) mup2_visualizer_pane

0x49cb,	// (0x0005e4b2) mup_progress_pane_cp_ParamLimits

0x49cb,	// (0x0005e4b2) mup_progress_pane_cp

0xb5a0,	// (0x00065087) mup_volume_pane_cp_ParamLimits

0xb5a0,	// (0x00065087) mup_volume_pane_cp

0x49df,	// (0x0005e4c6) mup2_visualizer_pane_g1_ParamLimits

0x49df,	// (0x0005e4c6) mup2_visualizer_pane_g1

0xe66e,	// (0x00068155) mup2_visualizer_pane_g2_ParamLimits

0xe66e,	// (0x00068155) mup2_visualizer_pane_g2

0x49f6,	// (0x0005e4dd) mup2_visualizer_pane_g3_ParamLimits

0x49f6,	// (0x0005e4dd) mup2_visualizer_pane_g3

0x0002,

0xf609,	// (0x000690f0) mup2_visualizer_pane_g_ParamLimits

0xf609,	// (0x000690f0) mup2_visualizer_pane_g

0xb152,	// (0x00064c39) aid_size_cell_fmradio

0x3e6e,	// (0x0005d955) aid_height_parent_landcape

0xa5c3,	// (0x000640aa) wml_content_pane_cp

0xa5cb,	// (0x000640b2) wml_tabs_pane

0xa5d4,	// (0x000640bb) popup_wml_miniature_window

0xa5dc,	// (0x000640c3) scroll_pane_cp021

0xa5f0,	// (0x000640d7) wml_content_pane_comp8

0x9e64,	// (0x0006394b) bg_popup_sub_pane_cp05

0xe68c,	// (0x00068173) popup_wml_miniature_window_g1

0xe694,	// (0x0006817b) wml_miniature_view_pane

0x4a02,	// (0x0005e4e9) aid_size_wml_view

0x4a0a,	// (0x0005e4f1) wml_miniature_view_pane_g1

0x4a13,	// (0x0005e4fa) wml_miniature_view_pane_g2

0x4a1c,	// (0x0005e503) wml_miniature_view_pane_g3

0x4a24,	// (0x0005e50b) wml_miniature_view_pane_g4

0x4a2c,	// (0x0005e513) wml_miniature_view_pane_g5

0x4a34,	// (0x0005e51b) wml_miniature_view_pane_g6

0x4a3c,	// (0x0005e523) wml_miniature_view_pane_g7

0x4a44,	// (0x0005e52b) wml_miniature_view_pane_g8

0x0007,

0xf610,	// (0x000690f7) wml_miniature_view_pane_g

0xe69c,	// (0x00068183) background_graphic_ParamLimits

0xe69c,	// (0x00068183) background_graphic

0xe6a8,	// (0x0006818f) wml_tabs_2_pane

0xe6b1,	// (0x00068198) wml_tabs_3_pane_ParamLimits

0xe6b1,	// (0x00068198) wml_tabs_3_pane

0xe6c3,	// (0x000681aa) wml_tabs_4_pane_ParamLimits

0xe6c3,	// (0x000681aa) wml_tabs_4_pane

0xe6d9,	// (0x000681c0) wml_tabs_5_pane_ParamLimits

0xe6d9,	// (0x000681c0) wml_tabs_5_pane

0xe6f3,	// (0x000681da) wml_tabs_pane_g2_ParamLimits

0xe6f3,	// (0x000681da) wml_tabs_pane_g2

0xe707,	// (0x000681ee) wml_tabs_pane_g3_ParamLimits

0xe707,	// (0x000681ee) wml_tabs_pane_g3

0x4a4c,	// (0x0005e533) wml_tabs_2_active_pane_ParamLimits

0x4a4c,	// (0x0005e533) wml_tabs_2_active_pane

0x4a60,	// (0x0005e547) wml_tabs_2_passive_pane_ParamLimits

0x4a60,	// (0x0005e547) wml_tabs_2_passive_pane

0x4a74,	// (0x0005e55b) wml_tabs_3_active_pane_cp_ParamLimits

0x4a74,	// (0x0005e55b) wml_tabs_3_active_pane_cp

0x4a89,	// (0x0005e570) wml_tabs_3_passive_pane_ParamLimits

0x4a89,	// (0x0005e570) wml_tabs_3_passive_pane

0x4a9c,	// (0x0005e583) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a9c,	// (0x0005e583) wml_tabs_3_passive_pane_cp

0x4ab3,	// (0x0005e59a) tabs_4_active_pane

0x4abb,	// (0x0005e5a2) tabs_4_passive_pane

0x4ac5,	// (0x0005e5ac) tabs_4_passive_pane_cp

0x4acd,	// (0x0005e5b4) tabs_4_passive_pane_cp2

0x3b89,	// (0x0005d670) aid_height_text

0x3224,	// (0x0005cd0b) mup_volume_cont_pane_ParamLimits

0x3224,	// (0x0005cd0b) mup_volume_cont_pane

0x1165,	// (0x0005ac4c) aid_size_cell_pinb

0x116f,	// (0x0005ac56) aid_size_list_pinb

0x49b7,	// (0x0005e49e) mup2_volume_cont_pane_ParamLimits

0x49b7,	// (0x0005e49e) mup2_volume_cont_pane

0xb58c,	// (0x00065073) mup2_volume_cont_pane_g1_ParamLimits

0xb58c,	// (0x00065073) mup2_volume_cont_pane_g1

0x0e17,	// (0x0005a8fe) aid_size_cell_touch_ParamLimits

0x0e17,	// (0x0005a8fe) aid_size_cell_touch

0x1055,	// (0x0005ab3c) touch_pane_ParamLimits

0x1055,	// (0x0005ab3c) touch_pane

0x0df9,	// (0x0005a8e0) main_rss2_pane

0xe724,	// (0x0006820b) listscroll_rss2_pane

0xe72d,	// (0x00068214) rss2_navigation_pane

0xe735,	// (0x0006821c) list_rss2_pane

0xaccd,	// (0x000647b4) scroll_pane_cp22

0xe73d,	// (0x00068224) rss2_navigation_pane_g1

0xe746,	// (0x0006822d) rss2_navigation_pane_g2

0xe74e,	// (0x00068235) rss2_navigation_pane_g3

0x0002,

0x044e,	// (0x00059f35) rss2_navigation_pane_g

0xe756,	// (0x0006823d) rss2_navigation_pane_t1

0x4ad7,	// (0x0005e5be) rss2_list_single_pane_ParamLimits

0x4ad7,	// (0x0005e5be) rss2_list_single_pane

0xe764,	// (0x0006824b) rss2_list_single_pane_t2

0xe772,	// (0x00068259) rss2_list_single_pane_t3_ParamLimits

0xe772,	// (0x00068259) rss2_list_single_pane_t3

0xe78f,	// (0x00068276) rss2_list_single_pane_t4

0x2aa4,	// (0x0005c58b) smil_status_pane_g1

0x9a43,	// (0x0006352a) main_image2_pane_ParamLimits

0x9a43,	// (0x0006352a) main_image2_pane

0x457d,	// (0x0005e064) main_camera2_pane_g9_ParamLimits

0x457d,	// (0x0005e064) main_camera2_pane_g9

0x46ab,	// (0x0005e192) main_camera2_pane_t5_ParamLimits

0x46ab,	// (0x0005e192) main_camera2_pane_t5

0xb55c,	// (0x00065043) main_camera2_pane_t6_ParamLimits

0xb55c,	// (0x00065043) main_camera2_pane_t6

0x4aec,	// (0x0005e5d3) main_image2_pane_g1_ParamLimits

0x4aec,	// (0x0005e5d3) main_image2_pane_g1

0x38c5,	// (0x0005d3ac) smil2_video_pane_ParamLimits

0x38c5,	// (0x0005d3ac) smil2_video_pane

0x0e57,	// (0x0005a93e) aid_zoom_text_primary_cp

0x9a39,	// (0x00063520) popup_preview_fixed_window

0xa52c,	// (0x00064013) im_reading_pane_g1

0x43f4,	// (0x0005dedb) cams2_bc_adjust_pane_cp_ParamLimits

0x43f4,	// (0x0005dedb) cams2_bc_adjust_pane_cp

0x46da,	// (0x0005e1c1) cams2_bc_adjust_pane_ParamLimits

0x46da,	// (0x0005e1c1) cams2_bc_adjust_pane

0xf03a,	// (0x00068b21) cams2_bc_adjust_pane_g1

0xb5c5,	// (0x000650ac) cams2_slider_pane

0xb5ce,	// (0x000650b5) cams2_slider_pane_g1

0xb5d7,	// (0x000650be) cams2_slider_pane_g2

0x0006,

0xf621,	// (0x00069108) cams2_slider_pane_g

0x1251,	// (0x0005ad38) calc_display_pane_ParamLimits

0x1279,	// (0x0005ad60) calc_paper_pane_ParamLimits

0x129c,	// (0x0005ad83) grid_calc_pane_ParamLimits

0xab8d,	// (0x00064674) popup_clock_digital_window_t1_ParamLimits

0xb0ef,	// (0x00064bd6) main_image_pane_t1

0x1233,	// (0x0005ad1a) aid_size_cell_calc_ParamLimits

0x1233,	// (0x0005ad1a) aid_size_cell_calc

0x3eb4,	// (0x0005d99b) popup_blid_sat_info2_window_ParamLimits

0x3eb4,	// (0x0005d99b) popup_blid_sat_info2_window

0xe7a5,	// (0x0006828c) aid_size_cell_blid

0xe7ad,	// (0x00068294) bg_popup_window_pane_cp07

0xe7d0,	// (0x000682b7) grid_popup_blid_pane

0xe7da,	// (0x000682c1) heading_pane_cp05_ParamLimits

0xe7da,	// (0x000682c1) heading_pane_cp05

0xe8a4,	// (0x0006838b) cell_popup_blid_pane_ParamLimits

0xe8a4,	// (0x0006838b) cell_popup_blid_pane

0xe8c8,	// (0x000683af) cell_popup_blid_pane_g1

0xe8d0,	// (0x000683b7) cell_popup_blid_pane_t1

0x4987,	// (0x0005e46e) mup2_indicator_pane_ParamLimits

0x4987,	// (0x0005e46e) mup2_indicator_pane

0xae16,	// (0x000648fd) mup2_visualizer_osc_pane

0xe67a,	// (0x00068161) mup2_visualizer_spec_pane_ParamLimits

0xe67a,	// (0x00068161) mup2_visualizer_spec_pane

0x4b02,	// (0x0005e5e9) mup2_spec_half_pane

0x4b0b,	// (0x0005e5f2) mup2_spec_half_pane_cp

0x4b13,	// (0x0005e5fa) mup2_spec_bar_pane_ParamLimits

0x4b13,	// (0x0005e5fa) mup2_spec_bar_pane

0xe61b,	// (0x00068102) mup2_spec_bar_pane_g1

0xe625,	// (0x0006810c) mup2_spec_bar_pane_g2

0x0001,

0x03c8,	// (0x00059eaf) mup2_spec_bar_pane_g

0x4b33,	// (0x0005e61a) mup2_osc_middle_pane

0xe637,	// (0x0006811e) mup2_visualizer_osc_pane_g1

0x9a71,	// (0x00063558) popup_number_entry_window_t1_ParamLimits

0x9a84,	// (0x0006356b) popup_number_entry_window_t2_ParamLimits

0x9a96,	// (0x0006357d) popup_number_entry_window_t3_ParamLimits

0x10a7,	// (0x0005ab8e) popup_number_entry_window_t5_ParamLimits

0x10a7,	// (0x0005ab8e) popup_number_entry_window_t5

0xf0ec,	// (0x00068bd3) popup_number_entry_window_t_ParamLimits

0x9aa8,	// (0x0006358f) text_title_cp2_ParamLimits

0xafd5,	// (0x00064abc) aid_hotspot_pointer_text2_pane

0xafef,	// (0x00064ad6) main_viewer_pane_g9_ParamLimits

0xafef,	// (0x00064ad6) main_viewer_pane_g9

0xa75b,	// (0x00064242) cale_month_pane_t1_ParamLimits

0xa7c6,	// (0x000642ad) bg_cale_pane_ParamLimits

0xa7de,	// (0x000642c5) list_cale_pane_ParamLimits

0xa35c,	// (0x00063e43) listscroll_cale_day_pane_t1

0xa7ef,	// (0x000642d6) scroll_pane_cp09_ParamLimits

0x3256,	// (0x0005cd3d) main_mup_eq_pane_t1_ParamLimits

0x3256,	// (0x0005cd3d) main_mup_eq_pane_t1

0x3270,	// (0x0005cd57) main_mup_eq_pane_t2_ParamLimits

0x3270,	// (0x0005cd57) main_mup_eq_pane_t2

0x328a,	// (0x0005cd71) main_mup_eq_pane_t3_ParamLimits

0x328a,	// (0x0005cd71) main_mup_eq_pane_t3

0x32a6,	// (0x0005cd8d) main_mup_eq_pane_t4_ParamLimits

0x32a6,	// (0x0005cd8d) main_mup_eq_pane_t4

0x32c2,	// (0x0005cda9) main_mup_eq_pane_t5_ParamLimits

0x32c2,	// (0x0005cda9) main_mup_eq_pane_t5

0x32de,	// (0x0005cdc5) main_mup_eq_pane_t6_ParamLimits

0x32de,	// (0x0005cdc5) main_mup_eq_pane_t6

0x32f2,	// (0x0005cdd9) main_mup_eq_pane_t7_ParamLimits

0x32f2,	// (0x0005cdd9) main_mup_eq_pane_t7

0x3306,	// (0x0005cded) main_mup_eq_pane_t8_ParamLimits

0x3306,	// (0x0005cded) main_mup_eq_pane_t8

0x331a,	// (0x0005ce01) main_mup_eq_pane_t9_ParamLimits

0x331a,	// (0x0005ce01) main_mup_eq_pane_t9

0x3334,	// (0x0005ce1b) main_mup_eq_pane_t10_ParamLimits

0x3334,	// (0x0005ce1b) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00068f60) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00068f60) main_mup_eq_pane_t

0x33e3,	// (0x0005ceca) mup_equalizer_pane_cp5_ParamLimits

0x33f7,	// (0x0005cede) mup_equalizer_pane_cp6_ParamLimits

0x340b,	// (0x0005cef2) mup_equalizer_pane_cp7_ParamLimits

0x0df9,	// (0x0005a8e0) main_gallery_pane

0xe640,	// (0x00068127) smil2_volume_pane

0xe648,	// (0x0006812f) smil_status_volume_pane_g1_ParamLimits

0xe65b,	// (0x00068142) smil_status_volume_pane_g2_ParamLimits

0xb53a,	// (0x00065021) smil_status_volume_pane_g3_ParamLimits

0xf5a0,	// (0x00069087) smil_status_volume_pane_g_ParamLimits

0xe7ad,	// (0x00068294) bg_popup_window_pane_cp07_ParamLimits

0xe7bb,	// (0x000682a2) blid_firmament_pane

0x4b3c,	// (0x0005e623) aid_size_cell_gallery_ParamLimits

0x4b3c,	// (0x0005e623) aid_size_cell_gallery

0x4b52,	// (0x0005e639) grid_gallery_pane_ParamLimits

0x4b52,	// (0x0005e639) grid_gallery_pane

0x4b6b,	// (0x0005e652) cell_gallery_pane_ParamLimits

0x4b6b,	// (0x0005e652) cell_gallery_pane

0xe8de,	// (0x000683c5) bg_cell_gallery_focus_pane_ParamLimits

0xe8de,	// (0x000683c5) bg_cell_gallery_focus_pane

0xe8f0,	// (0x000683d7) cell_gallery_pane_g1_ParamLimits

0xe8f0,	// (0x000683d7) cell_gallery_pane_g1

0x4bb4,	// (0x0005e69b) cell_gallery_pane_g2_ParamLimits

0x4bb4,	// (0x0005e69b) cell_gallery_pane_g2

0x4bc1,	// (0x0005e6a8) cell_gallery_pane_g3_ParamLimits

0x4bc1,	// (0x0005e6a8) cell_gallery_pane_g3

0xe8fc,	// (0x000683e3) cell_gallery_pane_g4_ParamLimits

0xe8fc,	// (0x000683e3) cell_gallery_pane_g4

0x0003,

0xf630,	// (0x00069117) cell_gallery_pane_g_ParamLimits

0xf630,	// (0x00069117) cell_gallery_pane_g

0xe908,	// (0x000683ef) bg_cell_gallery_focus_pane_g1

0xe910,	// (0x000683f7) bg_cell_gallery_focus_pane_g2

0xe918,	// (0x000683ff) bg_cell_gallery_focus_pane_g3

0xe920,	// (0x00068407) bg_cell_gallery_focus_pane_g4

0xe928,	// (0x0006840f) bg_cell_gallery_focus_pane_g5

0xe930,	// (0x00068417) bg_cell_gallery_focus_pane_g6

0xe938,	// (0x0006841f) bg_cell_gallery_focus_pane_g7

0xe940,	// (0x00068427) bg_cell_gallery_focus_pane_g8

0x0007,

0x0484,	// (0x00059f6b) bg_cell_gallery_focus_pane_g

0xe948,	// (0x0006842f) aid_firma_cardinal

0xe95c,	// (0x00068443) blid_firmament_pane_t1

0xe973,	// (0x0006845a) blid_firmament_pane_t2

0xe98a,	// (0x00068471) blid_firmament_pane_t3

0xe9a1,	// (0x00068488) blid_firmament_pane_t4

0x0003,

0x0495,	// (0x00059f7c) blid_firmament_pane_t

0xe9b8,	// (0x0006849f) blid_sat_info_pane

0xe9c8,	// (0x000684af) blid_sat_info_pane_g1

0xe9c8,	// (0x000684af) blid_sat_info_pane_g2

0x0001,

0x049e,	// (0x00059f85) blid_sat_info_pane_g

0xe9d2,	// (0x000684b9) blid_sat_info_pane_t1

0xe9e0,	// (0x000684c7) smil2_volume_content_pane

0xe9e9,	// (0x000684d0) smil2_volume_pane_g1

0xda60,	// (0x00067547) smil2_volume_content_pane_g1

0xe9f1,	// (0x000684d8) smil2_volume_content_pane_g2

0xe9fa,	// (0x000684e1) smil2_volume_content_pane_g3

0xea03,	// (0x000684ea) smil2_volume_content_pane_g4

0xea0c,	// (0x000684f3) smil2_volume_content_pane_g5

0xea15,	// (0x000684fc) smil2_volume_content_pane_g6

0xea1e,	// (0x00068505) smil2_volume_content_pane_g7

0xea27,	// (0x0006850e) smil2_volume_content_pane_g8

0xea30,	// (0x00068517) smil2_volume_content_pane_g9

0xea39,	// (0x00068520) smil2_volume_content_pane_g10

0x0009,

0xf639,	// (0x00069120) smil2_volume_content_pane_g

0x173e,	// (0x0005b225) cale_week_day_heading_pane_t1_ParamLimits

0x176b,	// (0x0005b252) cale_week_day_heading_pane_t2_ParamLimits

0x1798,	// (0x0005b27f) cale_week_day_heading_pane_t3_ParamLimits

0x17c5,	// (0x0005b2ac) cale_week_day_heading_pane_t4_ParamLimits

0x17f2,	// (0x0005b2d9) cale_week_day_heading_pane_t5_ParamLimits

0x181f,	// (0x0005b306) cale_week_day_heading_pane_t6_ParamLimits

0x184e,	// (0x0005b335) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00068cd8) cale_week_day_heading_pane_t_ParamLimits

0xa36e,	// (0x00063e55) bg_cale_side_pane_ParamLimits

0x187b,	// (0x0005b362) cale_week_time_pane_t1_ParamLimits

0x1893,	// (0x0005b37a) cale_week_time_pane_t2_ParamLimits

0x18ab,	// (0x0005b392) cale_week_time_pane_t3_ParamLimits

0x18c3,	// (0x0005b3aa) cale_week_time_pane_t4_ParamLimits

0x18db,	// (0x0005b3c2) cale_week_time_pane_t5_ParamLimits

0x18f3,	// (0x0005b3da) cale_week_time_pane_t6_ParamLimits

0x190b,	// (0x0005b3f2) cale_week_time_pane_t7_ParamLimits

0x1923,	// (0x0005b40a) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00068ce7) cale_week_time_pane_t_ParamLimits

0x193b,	// (0x0005b422) cell_cale_week_pane_g2_ParamLimits

0xa36e,	// (0x00063e55) bg_cale_side_pane_cp01_ParamLimits

0x28f5,	// (0x0005c3dc) cale_month_week_pane_t1_ParamLimits

0x290c,	// (0x0005c3f3) cale_month_week_pane_t2_ParamLimits

0x2923,	// (0x0005c40a) cale_month_week_pane_t3_ParamLimits

0x293a,	// (0x0005c421) cale_month_week_pane_t4_ParamLimits

0x2951,	// (0x0005c438) cale_month_week_pane_t5_ParamLimits

0x2968,	// (0x0005c44f) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00068dc0) cale_month_week_pane_t_ParamLimits

0xa76d,	// (0x00064254) cell_cale_month_pane_g1_ParamLimits

0x0df9,	// (0x0005a8e0) main_cale_event_viewer_pane

0x0df9,	// (0x0005a8e0) listscroll_cale_event_viewer_pane

0xea42,	// (0x00068529) list_cale_ev_pane

0xea4a,	// (0x00068531) scroll_pane_cp023

0xea56,	// (0x0006853d) field_cale_ev_pane_ParamLimits

0xea56,	// (0x0006853d) field_cale_ev_pane

0xea74,	// (0x0006855b) field_cale_ev_content_pane_ParamLimits

0xea74,	// (0x0006855b) field_cale_ev_content_pane

0xea80,	// (0x00068567) field_cale_ev_pane_g1_ParamLimits

0xea80,	// (0x00068567) field_cale_ev_pane_g1

0xea8c,	// (0x00068573) field_cale_ev_pane_g2_ParamLimits

0xea8c,	// (0x00068573) field_cale_ev_pane_g2

0xeaa4,	// (0x0006858b) field_cale_ev_pane_g3_ParamLimits

0xeaa4,	// (0x0006858b) field_cale_ev_pane_g3

0x0002,

0x04b8,	// (0x00059f9f) field_cale_ev_pane_g_ParamLimits

0x04b8,	// (0x00059f9f) field_cale_ev_pane_g

0xeabc,	// (0x000685a3) field_cale_ev_pane_t1_ParamLimits

0xeabc,	// (0x000685a3) field_cale_ev_pane_t1

0xead3,	// (0x000685ba) field_cale_ev_content_pane_t1_ParamLimits

0xead3,	// (0x000685ba) field_cale_ev_content_pane_t1

0xaf9f,	// (0x00064a86) bg_button_pane_cp01

0xa1c2,	// (0x00063ca9) listscroll_cale_week_pane_ParamLimits

0x155a,	// (0x0005b041) popup_toolbar_window_cp01

0xa35c,	// (0x00063e43) listscroll_cale_week_pane_t1_ParamLimits

0xa1c2,	// (0x00063ca9) listscroll_cale_day_pane_ParamLimits

0x2af5,	// (0x0005c5dc) popup_toolbar_window_cp02

0xa35c,	// (0x00063e43) listscroll_cale_day_pane_t1_ParamLimits

0xa1c2,	// (0x00063ca9) main_cale_month_pane_ParamLimits

0x40e8,	// (0x0005dbcf) popup_toolbar_window_cp03_ParamLimits

0x40e8,	// (0x0005dbcf) popup_toolbar_window_cp03

0x378d,	// (0x0005d274) main_image_pane_g2_ParamLimits

0x378d,	// (0x0005d274) main_image_pane_g2

0x379e,	// (0x0005d285) main_image_pane_g3_ParamLimits

0x379e,	// (0x0005d285) main_image_pane_g3

0x0002,

0xf50b,	// (0x00068ff2) main_image_pane_g_ParamLimits

0xf50b,	// (0x00068ff2) main_image_pane_g

0xb0ef,	// (0x00064bd6) main_image_pane_t1_ParamLimits

0x37af,	// (0x0005d296) main_image_pane_t2_ParamLimits

0x37af,	// (0x0005d296) main_image_pane_t2

0x37c1,	// (0x0005d2a8) main_image_pane_t3_ParamLimits

0x37c1,	// (0x0005d2a8) main_image_pane_t3

0x37e9,	// (0x0005d2d0) main_image_pane_t4_ParamLimits

0x37e9,	// (0x0005d2d0) main_image_pane_t4

0x0003,

0xf512,	// (0x00068ff9) main_image_pane_t_ParamLimits

0xf512,	// (0x00068ff9) main_image_pane_t

0x3809,	// (0x0005d2f0) popup_image_details_window_cp01

0x3813,	// (0x0005d2fa) popup_toobar_trans_pane_cp01_ParamLimits

0x3813,	// (0x0005d2fa) popup_toobar_trans_pane_cp01

0x3f93,	// (0x0005da7a) popup_image_details_window_ParamLimits

0x3f93,	// (0x0005da7a) popup_image_details_window

0xe5a1,	// (0x00068088) popup_image_focus_window

0x43ae,	// (0x0005de95) camera2_autofocus_pane_ParamLimits

0x43ae,	// (0x0005de95) camera2_autofocus_pane

0x0df9,	// (0x0005a8e0) bg_popup_sub_pane_cp06

0xeaf1,	// (0x000685d8) popup_image_focus_window_g1

0xeaf9,	// (0x000685e0) popup_image_focus_window_g2

0xeb01,	// (0x000685e8) popup_image_focus_window_g3

0xeb09,	// (0x000685f0) popup_image_focus_window_g4

0x0003,

0x04bf,	// (0x00059fa6) popup_image_focus_window_g

0xeb11,	// (0x000685f8) popup_image_focus_window_t1

0xeb1f,	// (0x00068606) popup_image_focus_window_t2

0xeb2f,	// (0x00068616) popup_image_focus_window_t3

0x0002,

0x04c8,	// (0x00059faf) popup_image_focus_window_t

0xeb3d,	// (0x00068624) camera2_autofocus_pane_g1

0x9a43,	// (0x0006352a) bg_tb_trans_pane_cp01

0xeb4b,	// (0x00068632) popup_image_details_window_g1

0xeb5e,	// (0x00068645) popup_image_details_window_g2

0x0002,

0x04da,	// (0x00059fc1) popup_image_details_window_g

0xeb87,	// (0x0006866e) popup_image_details_window_t1

0xeb99,	// (0x00068680) popup_image_details_window_t2

0xebb2,	// (0x00068699) popup_image_details_window_t3

0xebc6,	// (0x000686ad) popup_image_details_window_t4

0xebe1,	// (0x000686c8) popup_image_details_window_t5

0x0004,

0x04e1,	// (0x00059fc8) popup_image_details_window_t

0xa18a,	// (0x00063c71) bg_calc_paper_pane_ParamLimits

0xa19e,	// (0x00063c85) grid_highlight_pane_cp013

0xa1a8,	// (0x00063c8f) list_calc_pane_ParamLimits

0xa1ba,	// (0x00063ca1) scroll_pane_cp024

0xa1c2,	// (0x00063ca9) bg_calc_display_pane_ParamLimits

0x138d,	// (0x0005ae74) calc_display_pane_t1_ParamLimits

0x139f,	// (0x0005ae86) calc_display_pane_t2_ParamLimits

0xa1ce,	// (0x00063cb5) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00068c5a) calc_display_pane_t_ParamLimits

0x1457,	// (0x0005af3e) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00068c77) cell_calc_pane_g

0x1460,	// (0x0005af47) cell_calc_pane_t1

0xa245,	// (0x00063d2c) grid_highlight_pane_cp02_ParamLimits

0xa25b,	// (0x00063d42) toolbar_button_pane_cp01_ParamLimits

0xa25b,	// (0x00063d42) toolbar_button_pane_cp01

0xb134,	// (0x00064c1b) temp_image_control_pane_ParamLimits

0xb134,	// (0x00064c1b) temp_image_control_pane

0x9a43,	// (0x0006352a) main_mp3_pane

0xebfb,	// (0x000686e2) temp_image_control_pane_g1_ParamLimits

0xebfb,	// (0x000686e2) temp_image_control_pane_g1

0xec09,	// (0x000686f0) temp_image_control_pane_g2_ParamLimits

0xec09,	// (0x000686f0) temp_image_control_pane_g2

0xec1b,	// (0x00068702) temp_image_control_pane_g3_ParamLimits

0xec1b,	// (0x00068702) temp_image_control_pane_g3

0x4bfe,	// (0x0005e6e5) temp_image_control_pane_g4_ParamLimits

0x4bfe,	// (0x0005e6e5) temp_image_control_pane_g4

0x0003,

0xf659,	// (0x00069140) temp_image_control_pane_g_ParamLimits

0xf659,	// (0x00069140) temp_image_control_pane_g

0xebfb,	// (0x000686e2) main_mp3_pane_g1

0x4c11,	// (0x0005e6f8) main_mp3_pane_g2

0x0007,

0xf662,	// (0x00069149) main_mp3_pane_g

0xec5e,	// (0x00068745) main_mp3_pane_t1

0xa43d,	// (0x00063f24) main_camera_pane_g8_ParamLimits

0xa43d,	// (0x00063f24) main_camera_pane_g8

0x1bf5,	// (0x0005b6dc) main_video_pane_g7_ParamLimits

0x1bf5,	// (0x0005b6dc) main_video_pane_g7

0xb57a,	// (0x00065061) main_camera2_pane_t7_ParamLimits

0xb57a,	// (0x00065061) main_camera2_pane_t7

0xa583,	// (0x0006406a) scroll_pane_cp025_ParamLimits

0xa583,	// (0x0006406a) scroll_pane_cp025

0xa597,	// (0x0006407e) scroll_pane_cp026_ParamLimits

0xa597,	// (0x0006407e) scroll_pane_cp026

0xa5a6,	// (0x0006408d) wml_content_pane_ParamLimits

0x0df9,	// (0x0005a8e0) main_touch_calib_pane

0x4cdb,	// (0x0005e7c2) main_touch_calib_pane_g1

0x4ce7,	// (0x0005e7ce) main_touch_calib_pane_g2

0x4cf3,	// (0x0005e7da) main_touch_calib_pane_g3

0x4cff,	// (0x0005e7e6) main_touch_calib_pane_g4

0x0003,

0xf680,	// (0x00069167) main_touch_calib_pane_g

0x4d0b,	// (0x0005e7f2) main_touch_calib_pane_t1

0x4d25,	// (0x0005e80c) main_touch_calib_pane_t2

0x0004,

0xf689,	// (0x00069170) main_touch_calib_pane_t

0xad57,	// (0x0006483e) mup_progress_pane_cp02

0xad76,	// (0x0006485d) navi_pane_g1

0xadd8,	// (0x000648bf) navi_pane_mp_t3

0x9a43,	// (0x0006352a) main_mp3_pane_ParamLimits

0x4126,	// (0x0005dc0d) navi_pane_ParamLimits

0xebfb,	// (0x000686e2) main_mp3_pane_g1_ParamLimits

0x4c11,	// (0x0005e6f8) main_mp3_pane_g2_ParamLimits

0x4c1f,	// (0x0005e706) main_mp3_pane_g3_ParamLimits

0x4c1f,	// (0x0005e706) main_mp3_pane_g3

0x4c2d,	// (0x0005e714) main_mp3_pane_g4_ParamLimits

0x4c2d,	// (0x0005e714) main_mp3_pane_g4

0xec2b,	// (0x00068712) main_mp3_pane_g5_ParamLimits

0xec2b,	// (0x00068712) main_mp3_pane_g5

0xec39,	// (0x00068720) main_mp3_pane_g6_ParamLimits

0xec39,	// (0x00068720) main_mp3_pane_g6

0xec46,	// (0x0006872d) main_mp3_pane_g7_ParamLimits

0xec46,	// (0x0006872d) main_mp3_pane_g7

0xec52,	// (0x00068739) main_mp3_pane_g8_ParamLimits

0xec52,	// (0x00068739) main_mp3_pane_g8

0xf662,	// (0x00069149) main_mp3_pane_g_ParamLimits

0x4c39,	// (0x0005e720) main_mp3_pane_t2

0x4c47,	// (0x0005e72e) main_mp3_pane_t3

0xec6c,	// (0x00068753) main_mp3_pane_t4

0xec7a,	// (0x00068761) main_mp3_pane_t5

0x0005,

0xf673,	// (0x0006915a) main_mp3_pane_t

0xec88,	// (0x0006876f) mup_progress_pane_cp01

0x0e57,	// (0x0005a93e) aid_zoom_text_secondary2

0xea42,	// (0x00068529) list_cale_ev2_pane

0xea4a,	// (0x00068531) scroll_pane_cp023_ParamLimits

0x4d7b,	// (0x0005e862) field_cale_ev2_pane_ParamLimits

0x4d7b,	// (0x0005e862) field_cale_ev2_pane

0x4d9b,	// (0x0005e882) field_cale_ev2_pane_g1_ParamLimits

0x4d9b,	// (0x0005e882) field_cale_ev2_pane_g1

0x4da7,	// (0x0005e88e) field_cale_ev2_pane_g2_ParamLimits

0x4da7,	// (0x0005e88e) field_cale_ev2_pane_g2

0x4dbf,	// (0x0005e8a6) field_cale_ev2_pane_g3_ParamLimits

0x4dbf,	// (0x0005e8a6) field_cale_ev2_pane_g3

0x0003,

0xf694,	// (0x0006917b) field_cale_ev2_pane_g_ParamLimits

0xf694,	// (0x0006917b) field_cale_ev2_pane_g

0x4de3,	// (0x0005e8ca) field_cale_ev2_pane_t1_ParamLimits

0x4de3,	// (0x0005e8ca) field_cale_ev2_pane_t1

0x4dfa,	// (0x0005e8e1) field_cale_ev2_pane_t2_ParamLimits

0x4dfa,	// (0x0005e8e1) field_cale_ev2_pane_t2

0x0001,

0xf69d,	// (0x00069184) field_cale_ev2_pane_t_ParamLimits

0xf69d,	// (0x00069184) field_cale_ev2_pane_t

0x3642,	// (0x0005d129) main_postcard_pane_g5_ParamLimits

0x3642,	// (0x0005d129) main_postcard_pane_g5

0x3658,	// (0x0005d13f) main_postcard_pane_g6_ParamLimits

0x3658,	// (0x0005d13f) main_postcard_pane_g6

0x19b5,	// (0x0005b49c) camera2_autofocus_pane_cp_ParamLimits

0x19b5,	// (0x0005b49c) camera2_autofocus_pane_cp

0x9a43,	// (0x0006352a) main_mup3_pane

0x4e2f,	// (0x0005e916) main_mup3_pane_g1_ParamLimits

0x4e2f,	// (0x0005e916) main_mup3_pane_g1

0x4e51,	// (0x0005e938) main_mup3_pane_g2_ParamLimits

0x4e51,	// (0x0005e938) main_mup3_pane_g2

0x4ecf,	// (0x0005e9b6) main_mup3_pane_g3_ParamLimits

0x4ecf,	// (0x0005e9b6) main_mup3_pane_g3

0x4f11,	// (0x0005e9f8) main_mup3_pane_g4_ParamLimits

0x4f11,	// (0x0005e9f8) main_mup3_pane_g4

0x4f53,	// (0x0005ea3a) main_mup3_pane_g5_ParamLimits

0x4f53,	// (0x0005ea3a) main_mup3_pane_g5

0x4f95,	// (0x0005ea7c) main_mup3_pane_g6_ParamLimits

0x4f95,	// (0x0005ea7c) main_mup3_pane_g6

0xec90,	// (0x00068777) main_mup3_pane_g7_ParamLimits

0xec90,	// (0x00068777) main_mup3_pane_g7

0x0007,

0xf6ad,	// (0x00069194) main_mup3_pane_g_ParamLimits

0xf6ad,	// (0x00069194) main_mup3_pane_g

0x500f,	// (0x0005eaf6) main_mup3_pane_t1_ParamLimits

0x500f,	// (0x0005eaf6) main_mup3_pane_t1

0x507f,	// (0x0005eb66) main_mup3_pane_t2_ParamLimits

0x507f,	// (0x0005eb66) main_mup3_pane_t2

0x514f,	// (0x0005ec36) main_mup3_pane_t4_ParamLimits

0x514f,	// (0x0005ec36) main_mup3_pane_t4

0x51a5,	// (0x0005ec8c) main_mup3_pane_t5_ParamLimits

0x51a5,	// (0x0005ec8c) main_mup3_pane_t5

0x5259,	// (0x0005ed40) main_mup3_pane_t6_ParamLimits

0x5259,	// (0x0005ed40) main_mup3_pane_t6

0x0005,

0xf6be,	// (0x000691a5) main_mup3_pane_t_ParamLimits

0xf6be,	// (0x000691a5) main_mup3_pane_t

0x530d,	// (0x0005edf4) mup3_progress_pane_ParamLimits

0x530d,	// (0x0005edf4) mup3_progress_pane

0x538f,	// (0x0005ee76) popup_mup3_control_window_ParamLimits

0x538f,	// (0x0005ee76) popup_mup3_control_window

0xec9e,	// (0x00068785) popup_mup3_text_window

0x53c1,	// (0x0005eea8) mup3_progress_pane_t1

0x53d8,	// (0x0005eebf) mup3_progress_pane_t2

0xeca6,	// (0x0006878d) mup3_progress_pane_t3

0x0002,

0xf6cb,	// (0x000691b2) mup3_progress_pane_t

0xecbd,	// (0x000687a4) mup_progress_pane_cp03

0x0df9,	// (0x0005a8e0) bg_tb_trans_pane_cp04

0x53ef,	// (0x0005eed6) mup3_volume_pane

0x53f7,	// (0x0005eede) popup_mup3_control_window_g1

0x5400,	// (0x0005eee7) mup3_volume_pane_g1

0x5409,	// (0x0005eef0) mup3_volume_pane_g2

0x5412,	// (0x0005eef9) mup3_volume_pane_g3

0x0002,

0xf6d2,	// (0x000691b9) mup3_volume_pane_g

0x0df9,	// (0x0005a8e0) bg_tb_trans_pane_cp03

0xeccd,	// (0x000687b4) popup_mup3_text_window_g1

0xecd5,	// (0x000687bc) popup_mup3_text_window_t1

0xa21c,	// (0x00063d03) list_calc_item_pane_g1_ParamLimits

0xe71b,	// (0x00068202) mup_volume_pane_cp_g1

0x4d3f,	// (0x0005e826) main_touch_calib_pane_t3

0x4d53,	// (0x0005e83a) main_touch_calib_pane_t4

0x4d67,	// (0x0005e84e) main_touch_calib_pane_t5

0x0e03,	// (0x0005a8ea) aid_cell_size_toolbar2

0x0e0b,	// (0x0005a8f2) aid_popup3_width_pane

0x0e47,	// (0x0005a92e) aid_zoom_text_msg_primary

0xa41d,	// (0x00063f04) vorec_t7

0xa1e0,	// (0x00063cc7) bg_calc_paper_pane_g1_ParamLimits

0xa1ec,	// (0x00063cd3) bg_calc_paper_pane_g2_ParamLimits

0xa1f8,	// (0x00063cdf) bg_calc_paper_pane_g3_ParamLimits

0xa204,	// (0x00063ceb) bg_calc_paper_pane_g4_ParamLimits

0xa210,	// (0x00063cf7) bg_calc_paper_pane_g5_ParamLimits

0x13e6,	// (0x0005aecd) bg_calc_paper_pane_g6_ParamLimits

0x13f5,	// (0x0005aedc) bg_calc_paper_pane_g7_ParamLimits

0x1404,	// (0x0005aeeb) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00068c61) bg_calc_paper_pane_g_ParamLimits

0x1417,	// (0x0005aefe) calc_bg_paper_pane_g9_ParamLimits

0x1b03,	// (0x0005b5ea) image_qvga_pane_ParamLimits

0x1b03,	// (0x0005b5ea) image_qvga_pane

0xa0bf,	// (0x00063ba6) bg_popup_sub_pane_cp04_ParamLimits

0xb06b,	// (0x00064b52) popup_mup_playback_window_g1_ParamLimits

0xb077,	// (0x00064b5e) popup_mup_playback_window_t1_ParamLimits

0xb08c,	// (0x00064b73) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00068fed) popup_mup_playback_window_t_ParamLimits

0x48a1,	// (0x0005e388) main_mup2_pane_g3_ParamLimits

0x48a1,	// (0x0005e388) main_mup2_pane_g3

0x1efc,	// (0x0005b9e3) popup_toolbar_window_cp04

0xb46e,	// (0x00064f55) popup_call2_audio_second_window_g3_ParamLimits

0xb46e,	// (0x00064f55) popup_call2_audio_second_window_g3

0xdba1,	// (0x00067688) popup_call2_audio_first_window_g4_ParamLimits

0xdba1,	// (0x00067688) popup_call2_audio_first_window_g4

0xe220,	// (0x00067d07) popup_call2_audio_in_window_g4_ParamLimits

0xe220,	// (0x00067d07) popup_call2_audio_in_window_g4

0x376f,	// (0x0005d256) aid_area_sk_bg_cut_ParamLimits

0x376f,	// (0x0005d256) aid_area_sk_bg_cut

0xb0a1,	// (0x00064b88) aid_area_sk_bg_cut_2_ParamLimits

0xb0a1,	// (0x00064b88) aid_area_sk_bg_cut_2

0x4ba4,	// (0x0005e68b) aid_placing_details_win

0x4bac,	// (0x0005e693) aid_placing_details_win_2

0xeb3d,	// (0x00068624) camera2_autofocus_pane_g1_ParamLimits

0x1000,	// (0x0005aae7) popup_fixed_preview_cale_window_ParamLimits

0x1000,	// (0x0005aae7) popup_fixed_preview_cale_window

0xae30,	// (0x00064917) navi_slider_pane_g3

0xae39,	// (0x00064920) navi_slider_pane_g4

0xae42,	// (0x00064929) navi_slider_pane_g5

0xae30,	// (0x00064917) navi_slider_pane_g6

0xae4b,	// (0x00064932) navi_slider_pane_g7

0xaf6c,	// (0x00064a53) mup_scale_pane_g3

0xaf75,	// (0x00064a5c) mup_scale_pane_g4

0xaf7e,	// (0x00064a65) mup_scale_pane_g5

0x341f,	// (0x0005cf06) mup_scale_pane_g6

0x3428,	// (0x0005cf0f) mup_scale_pane_g7

0xae30,	// (0x00064917) cams2_slider_pane_g3

0xe79d,	// (0x00068284) cams2_slider_pane_g4

0xb5e0,	// (0x000650c7) cams2_slider_pane_g5

0xae30,	// (0x00064917) cams2_slider_pane_g6

0xb5e8,	// (0x000650cf) cams2_slider_pane_g7

0xe9c8,	// (0x000684af) camera2_autofocus_pane_cp_g1

0xece3,	// (0x000687ca) bg_popup_preview_window_pane_cp02_ParamLimits

0xece3,	// (0x000687ca) bg_popup_preview_window_pane_cp02

0xecef,	// (0x000687d6) list_fp_cale_pane_ParamLimits

0xecef,	// (0x000687d6) list_fp_cale_pane

0xecfb,	// (0x000687e2) popup_fixed_preview_cale_window_t1_ParamLimits

0xecfb,	// (0x000687e2) popup_fixed_preview_cale_window_t1

0x541b,	// (0x0005ef02) popup_fixed_preview_cale_window_t2_ParamLimits

0x541b,	// (0x0005ef02) popup_fixed_preview_cale_window_t2

0x5430,	// (0x0005ef17) popup_fixed_preview_cale_window_t3_ParamLimits

0x5430,	// (0x0005ef17) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d9,	// (0x000691c0) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d9,	// (0x000691c0) popup_fixed_preview_cale_window_t

0x5445,	// (0x0005ef2c) list_single_fp_cale_pane_ParamLimits

0x5445,	// (0x0005ef2c) list_single_fp_cale_pane

0xed19,	// (0x00068800) list_single_fp_cale_pane_g1_ParamLimits

0xed19,	// (0x00068800) list_single_fp_cale_pane_g1

0xed25,	// (0x0006880c) list_single_fp_cale_pane_g2_ParamLimits

0xed25,	// (0x0006880c) list_single_fp_cale_pane_g2

0x0002,

0x0573,	// (0x0005a05a) list_single_fp_cale_pane_g_ParamLimits

0x0573,	// (0x0005a05a) list_single_fp_cale_pane_g

0xed3e,	// (0x00068825) list_single_fp_cale_pane_t1_ParamLimits

0xed3e,	// (0x00068825) list_single_fp_cale_pane_t1

0xed50,	// (0x00068837) list_single_fp_cale_pane_t2_ParamLimits

0xed50,	// (0x00068837) list_single_fp_cale_pane_t2

0x0001,

0x057a,	// (0x0005a061) list_single_fp_cale_pane_t_ParamLimits

0x057a,	// (0x0005a061) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0df9,	// (0x0005a8e0) main_dialer_pane

0x545a,	// (0x0005ef41) aid_cell_size_keypad

0x5464,	// (0x0005ef4b) dialer_ne_pane

0x546c,	// (0x0005ef53) grid_dialer_command_1_pane

0x5474,	// (0x0005ef5b) grid_dialer_command_2_pane

0x547c,	// (0x0005ef63) grid_dialer_keypad_pane

0x548e,	// (0x0005ef75) bg_popup_call_pane_cp06_ParamLimits

0x548e,	// (0x0005ef75) bg_popup_call_pane_cp06

0x549a,	// (0x0005ef81) dialer_ne_clear_pane_ParamLimits

0x549a,	// (0x0005ef81) dialer_ne_clear_pane

0xed83,	// (0x0006886a) dialer_ne_pane_g1

0xed8b,	// (0x00068872) dialer_ne_pane_t1_ParamLimits

0xed8b,	// (0x00068872) dialer_ne_pane_t1

0x54a6,	// (0x0005ef8d) dialer_ne_pane_t2_ParamLimits

0x54a6,	// (0x0005ef8d) dialer_ne_pane_t2

0x54d0,	// (0x0005efb7) dialer_ne_pane_t3_ParamLimits

0x54d0,	// (0x0005efb7) dialer_ne_pane_t3

0x0002,

0xf6e0,	// (0x000691c7) dialer_ne_pane_t_ParamLimits

0xf6e0,	// (0x000691c7) dialer_ne_pane_t

0x5500,	// (0x0005efe7) dialer_ne_pane_t3_copy1_ParamLimits

0x5500,	// (0x0005efe7) dialer_ne_pane_t3_copy1

0x552f,	// (0x0005f016) cell_dialer_keypad_pane_ParamLimits

0x552f,	// (0x0005f016) cell_dialer_keypad_pane

0x5546,	// (0x0005f02d) cell_dialer_command_1_pane_ParamLimits

0x5546,	// (0x0005f02d) cell_dialer_command_1_pane

0x555c,	// (0x0005f043) cell_dialer_command_2_pane_ParamLimits

0x555c,	// (0x0005f043) cell_dialer_command_2_pane

0xed9d,	// (0x00068884) bg_button_pane_cp02_ParamLimits

0xed9d,	// (0x00068884) bg_button_pane_cp02

0x556b,	// (0x0005f052) cell_dialer_keypad_pane_g1_ParamLimits

0x556b,	// (0x0005f052) cell_dialer_keypad_pane_g1

0xed9d,	// (0x00068884) bg_button_pane_cp03_ParamLimits

0xed9d,	// (0x00068884) bg_button_pane_cp03

0x557f,	// (0x0005f066) cell_dialer_command_1_pane_g1_ParamLimits

0x557f,	// (0x0005f066) cell_dialer_command_1_pane_g1

0xeda9,	// (0x00068890) bg_button_pane_cp04

0x5593,	// (0x0005f07a) cell_dialer_command_2_pane_g1

0xae16,	// (0x000648fd) bg_button_pane_cp06

0xedb1,	// (0x00068898) dialer_ne_clear_pane_g1

0x2f63,	// (0x0005ca4a) navi_pane_g2

0x2f91,	// (0x0005ca78) navi_pane_g3

0x0002,

0xf409,	// (0x00068ef0) navi_pane_g

0x2fba,	// (0x0005caa1) navi_pane_mv_g2

0x2fe1,	// (0x0005cac8) navi_pane_mv_g5

0x2fe9,	// (0x0005cad0) navi_pane_mv_t1

0xa1c2,	// (0x00063ca9) main_clock2_pane

0x55c7,	// (0x0005f0ae) main_clock2_list_pane_ParamLimits

0x55c7,	// (0x0005f0ae) main_clock2_list_pane

0x55fd,	// (0x0005f0e4) main_clock2_pane_t1_ParamLimits

0x55fd,	// (0x0005f0e4) main_clock2_pane_t1

0x5639,	// (0x0005f120) main_clock2_pane_t2_ParamLimits

0x5639,	// (0x0005f120) main_clock2_pane_t2

0x0004,

0xf6e7,	// (0x000691ce) main_clock2_pane_t_ParamLimits

0xf6e7,	// (0x000691ce) main_clock2_pane_t

0x56c3,	// (0x0005f1aa) popup_clock_analogue_window_cp03_ParamLimits

0x56c3,	// (0x0005f1aa) popup_clock_analogue_window_cp03

0x56e8,	// (0x0005f1cf) popup_clock_digital_window_cp02_ParamLimits

0x56e8,	// (0x0005f1cf) popup_clock_digital_window_cp02

0x5759,	// (0x0005f240) main_clock2_list_single_pane_ParamLimits

0x5759,	// (0x0005f240) main_clock2_list_single_pane

0xae16,	// (0x000648fd) list_highlight_pane_cp05

0xedb9,	// (0x000688a0) main_clock2_list_single_pane_t1

0x1efc,	// (0x0005b9e3) popup_toolbar_window_cp04_ParamLimits

0x4bce,	// (0x0005e6b5) camera2_autofocus_pane_g2_ParamLimits

0x4bce,	// (0x0005e6b5) camera2_autofocus_pane_g2

0x4bda,	// (0x0005e6c1) camera2_autofocus_pane_g3_ParamLimits

0x4bda,	// (0x0005e6c1) camera2_autofocus_pane_g3

0x4be6,	// (0x0005e6cd) camera2_autofocus_pane_g4_ParamLimits

0x4be6,	// (0x0005e6cd) camera2_autofocus_pane_g4

0x4bf2,	// (0x0005e6d9) camera2_autofocus_pane_g5_ParamLimits

0x4bf2,	// (0x0005e6d9) camera2_autofocus_pane_g5

0x0004,

0xf64e,	// (0x00069135) camera2_autofocus_pane_g_ParamLimits

0xf64e,	// (0x00069135) camera2_autofocus_pane_g

0x4e0f,	// (0x0005e8f6) camera2_autofocus_pane_cp_g2

0x4e17,	// (0x0005e8fe) camera2_autofocus_pane_cp_g3

0x4e1f,	// (0x0005e906) camera2_autofocus_pane_cp_g4

0x4e27,	// (0x0005e90e) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a2,	// (0x00069189) camera2_autofocus_pane_cp_g

0x5486,	// (0x0005ef6d) popup_dialer_spcha_window

0x0df9,	// (0x0005a8e0) bg_popup_sub_pane_cp07

0xedc7,	// (0x000688ae) list_spcha_pane

0xedcf,	// (0x000688b6) list_single_spcha_pane_ParamLimits

0xedcf,	// (0x000688b6) list_single_spcha_pane

0x0df9,	// (0x0005a8e0) list_highlight_pane_cp06

0xede0,	// (0x000688c7) list_single_spcha_pane_t1

0xdfca,	// (0x00067ab1) popup_call2_audio_out_window_g4_ParamLimits

0xdfca,	// (0x00067ab1) popup_call2_audio_out_window_g4

0x0df9,	// (0x0005a8e0) main_imed2_pane

0xe5a9,	// (0x00068090) popup_imed_adjust2_window

0x3fab,	// (0x0005da92) popup_imed_trans_window_ParamLimits

0x3fab,	// (0x0005da92) popup_imed_trans_window

0xe806,	// (0x000682ed) popup_blid_sat_info2_window_t1

0xe814,	// (0x000682fb) popup_blid_sat_info2_window_t2

0x000a,

0x0464,	// (0x00059f4b) popup_blid_sat_info2_window_t

0x5803,	// (0x0005f2ea) aid_size_cell_colour_35

0x5823,	// (0x0005f30a) aid_size_cell_colour_112

0x5843,	// (0x0005f32a) aid_size_cell_effect

0xe581,	// (0x00068068) bg_tb_trans_pane_cp02

0xa8e6,	// (0x000643cd) heading_imed_pane

0x5863,	// (0x0005f34a) listscroll_imed_pane

0xedee,	// (0x000688d5) heading_imed_pane_g1

0xedf6,	// (0x000688dd) heading_imed_pane_t1

0xee04,	// (0x000688eb) grid_imed_colour_35_pane_ParamLimits

0xee04,	// (0x000688eb) grid_imed_colour_35_pane

0x586f,	// (0x0005f356) grid_imed_effect_pane

0xee1b,	// (0x00068902) list_imed_aspect_pane

0x5885,	// (0x0005f36c) scroll_pane_cp027_ParamLimits

0x5885,	// (0x0005f36c) scroll_pane_cp027

0x5896,	// (0x0005f37d) cell_imed_effect_pane_ParamLimits

0x5896,	// (0x0005f37d) cell_imed_effect_pane

0xee23,	// (0x0006890a) cell_imed_colour_pane_ParamLimits

0xee23,	// (0x0006890a) cell_imed_colour_pane

0xee65,	// (0x0006894c) cell_imed_colour_pane_g1_ParamLimits

0xee65,	// (0x0006894c) cell_imed_colour_pane_g1

0xee76,	// (0x0006895d) hgihlgiht_grid_pane_cp016_ParamLimits

0xee76,	// (0x0006895d) hgihlgiht_grid_pane_cp016

0x58bd,	// (0x0005f3a4) cell_imed_effect_pane_g1

0x58c5,	// (0x0005f3ac) grid_highlight_pane_cp017

0xee87,	// (0x0006896e) list_imed_single_pane_ParamLimits

0xee87,	// (0x0006896e) list_imed_single_pane

0x0df9,	// (0x0005a8e0) list_highlight_pane_cp07

0xee9c,	// (0x00068983) list_imed_aspect_pane_comp1_t1

0xe581,	// (0x00068068) bg_tb_trans_pane_cp05

0xeebe,	// (0x000689a5) popup_imed_adjust2_window_g1

0xeee5,	// (0x000689cc) popup_imed_adjust2_window_t1

0xeefd,	// (0x000689e4) slider_imed_adjust_pane

0xef11,	// (0x000689f8) slider_imed_adjust_pane_g1

0xef21,	// (0x00068a08) slider_imed_adjust_pane_g2

0xef31,	// (0x00068a18) slider_imed_adjust_pane_g3

0xef42,	// (0x00068a29) slider_imed_adjust_pane_g4

0x0003,

0x05a3,	// (0x0005a08a) slider_imed_adjust_pane_g

0x58ce,	// (0x0005f3b5) aid_size_cell_clipart2

0x58da,	// (0x0005f3c1) grid_imed_clipart_pane

0xef53,	// (0x00068a3a) scroll_pane_cp031

0x58e4,	// (0x0005f3cb) cell_imed_clipart_pane_ParamLimits

0x58e4,	// (0x0005f3cb) cell_imed_clipart_pane

0x5906,	// (0x0005f3ed) cell_imed_clipart_pane_g1

0x0df9,	// (0x0005a8e0) grid_highlight_pane_cp014

0x55dc,	// (0x0005f0c3) main_clock2_pane_g1_ParamLimits

0x55dc,	// (0x0005f0c3) main_clock2_pane_g1

0x5704,	// (0x0005f1eb) aid_call2_pane_cp10

0x5716,	// (0x0005f1fd) aid_call_pane_cp10

0xad4b,	// (0x00064832) popup_clock_analogue_window_cp10_g1

0xad4b,	// (0x00064832) popup_clock_analogue_window_cp10_g2

0x5728,	// (0x0005f20f) popup_clock_analogue_window_cp10_g3

0x5728,	// (0x0005f20f) popup_clock_analogue_window_cp10_g4

0xad4b,	// (0x00064832) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6f2,	// (0x000691d9) popup_clock_analogue_window_cp10_g

0x573a,	// (0x0005f221) popup_clock_analogue_window_cp10_t1

0x576b,	// (0x0005f252) clock_digital_number_pane_cp10_ParamLimits

0x576b,	// (0x0005f252) clock_digital_number_pane_cp10

0x5783,	// (0x0005f26a) clock_digital_number_pane_cp11_ParamLimits

0x5783,	// (0x0005f26a) clock_digital_number_pane_cp11

0x579b,	// (0x0005f282) clock_digital_number_pane_cp12_ParamLimits

0x579b,	// (0x0005f282) clock_digital_number_pane_cp12

0x57b3,	// (0x0005f29a) clock_digital_number_pane_cp13_ParamLimits

0x57b3,	// (0x0005f29a) clock_digital_number_pane_cp13

0x57cb,	// (0x0005f2b2) clock_digital_separator_pane_cp10_ParamLimits

0x57cb,	// (0x0005f2b2) clock_digital_separator_pane_cp10

0x57e3,	// (0x0005f2ca) popup_clock_digital_window_cp02_t1_ParamLimits

0x57e3,	// (0x0005f2ca) popup_clock_digital_window_cp02_t1

0xa0b7,	// (0x00063b9e) clock_digital_number_pane_cp10_g1

0xa0b7,	// (0x00063b9e) clock_digital_number_pane_cp10_g2

0x0001,

0xf6fd,	// (0x000691e4) clock_digital_number_pane_cp10_g

0xa0b7,	// (0x00063b9e) clock_digital_separator_pane_cp10_g1

0xa0b7,	// (0x00063b9e) clock_digital_separator_pane_g2_cp10

0xade6,	// (0x000648cd) navi_pane_vded_g4

0xadef,	// (0x000648d6) navi_pane_vded_g5

0xadf8,	// (0x000648df) navi_pane_vded_t1

0x0df9,	// (0x0005a8e0) main_vded_pane

0x590f,	// (0x0005f3f6) main_vded_pane_g1

0x5919,	// (0x0005f400) main_vded_pane_g2

0x5923,	// (0x0005f40a) main_vded_pane_g3

0x0002,

0xf702,	// (0x000691e9) main_vded_pane_g

0x592d,	// (0x0005f414) main_vded_pane_t1

0x593b,	// (0x0005f422) main_vded_pane_t2

0x0001,

0xf709,	// (0x000691f0) main_vded_pane_t

0x5949,	// (0x0005f430) vded_slider_pane

0x5951,	// (0x0005f438) vded_video_pane

0xef5b,	// (0x00068a42) vded_video_pane_g1

0x5959,	// (0x0005f440) vded_video_pane_g2

0xe9c8,	// (0x000684af) vded_video_pane_g3

0x0002,

0xf70e,	// (0x000691f5) vded_video_pane_g

0xef65,	// (0x00068a4c) vded_slider_pane_g1

0xe71b,	// (0x00068202) vded_slider_pane_g2

0xef6e,	// (0x00068a55) vded_slider_pane_g3

0xef77,	// (0x00068a5e) vded_slider_pane_g4

0xef80,	// (0x00068a67) vded_slider_pane_g5

0x0004,

0x05c4,	// (0x0005a0ab) vded_slider_pane_g

0x5377,	// (0x0005ee5e) mup3_rocker_pane_ParamLimits

0x5377,	// (0x0005ee5e) mup3_rocker_pane

0x5962,	// (0x0005f449) mup3_control_keys_pane_g1

0x596a,	// (0x0005f451) mup3_control_keys_pane_g2

0x5972,	// (0x0005f459) mup3_control_keys_pane_g3

0x597a,	// (0x0005f461) mup3_control_keys_pane_g4

0x0003,

0xf715,	// (0x000691fc) mup3_control_keys_pane_g

0x1037,	// (0x0005ab1e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1037,	// (0x0005ab1e) popup_toolbar2_fixed_window_cp01

0x53ab,	// (0x0005ee92) popup_toolbar2_fixed_window_cp02_ParamLimits

0x53ab,	// (0x0005ee92) popup_toolbar2_fixed_window_cp02

0xd900,	// (0x000673e7) popup_call2_audio_second_window_t4_ParamLimits

0xd900,	// (0x000673e7) popup_call2_audio_second_window_t4

0xde37,	// (0x0006791e) popup_call2_audio_first_window_t6_ParamLimits

0xde37,	// (0x0006791e) popup_call2_audio_first_window_t6

0xe0cd,	// (0x00067bb4) popup_call2_audio_out_window_t6_ParamLimits

0xe0cd,	// (0x00067bb4) popup_call2_audio_out_window_t6

0x0df9,	// (0x0005a8e0) main_vitu_pane

0x598a,	// (0x0005f471) aid_size_cell_itu_ParamLimits

0x598a,	// (0x0005f471) aid_size_cell_itu

0x9a43,	// (0x0006352a) bg_popup_window_pane_cp08_ParamLimits

0x9a43,	// (0x0006352a) bg_popup_window_pane_cp08

0x59a0,	// (0x0005f487) field_vitu_entry_pane_ParamLimits

0x59a0,	// (0x0005f487) field_vitu_entry_pane

0x59b7,	// (0x0005f49e) grid_vitu_function_pane_ParamLimits

0x59b7,	// (0x0005f49e) grid_vitu_function_pane

0x59d2,	// (0x0005f4b9) grid_vitu_itu_pane_ParamLimits

0x59d2,	// (0x0005f4b9) grid_vitu_itu_pane

0x59f0,	// (0x0005f4d7) cell_vitu_itu_pane_ParamLimits

0x59f0,	// (0x0005f4d7) cell_vitu_itu_pane

0x5a12,	// (0x0005f4f9) cell_vitu_function_pane_ParamLimits

0x5a12,	// (0x0005f4f9) cell_vitu_function_pane

0x9a43,	// (0x0006352a) bg_popup_sub_pane_cp08_ParamLimits

0x9a43,	// (0x0006352a) bg_popup_sub_pane_cp08

0x5a2b,	// (0x0005f512) field_vitu_entry_pane_t1_ParamLimits

0x5a2b,	// (0x0005f512) field_vitu_entry_pane_t1

0xefa1,	// (0x00068a88) field_vitu_entry_pane_t2_ParamLimits

0xefa1,	// (0x00068a88) field_vitu_entry_pane_t2

0x0001,

0xf71e,	// (0x00069205) field_vitu_entry_pane_t_ParamLimits

0xf71e,	// (0x00069205) field_vitu_entry_pane_t

0xefbe,	// (0x00068aa5) bg_button_pane_cp05_ParamLimits

0xefbe,	// (0x00068aa5) bg_button_pane_cp05

0x5a49,	// (0x0005f530) cell_vitu_itu_pane_g1

0x5a61,	// (0x0005f548) cell_vitu_itu_pane_t1_ParamLimits

0x5a61,	// (0x0005f548) cell_vitu_itu_pane_t1

0x5a73,	// (0x0005f55a) cell_vitu_itu_pane_t2_ParamLimits

0x5a73,	// (0x0005f55a) cell_vitu_itu_pane_t2

0x0002,

0xf723,	// (0x0006920a) cell_vitu_itu_pane_t_ParamLimits

0xf723,	// (0x0006920a) cell_vitu_itu_pane_t

0xefcc,	// (0x00068ab3) bg_button_pane_cp07

0x5aa8,	// (0x0005f58f) cell_vitu_function_pane_g1

0xa152,	// (0x00063c39) main_calc_pane_g1

0x0e3b,	// (0x0005a922) aid_visual_content_pane

0x0df9,	// (0x0005a8e0) main_vradio_pane

0x5ab1,	// (0x0005f598) main_vradio_pane_g1_ParamLimits

0x5ab1,	// (0x0005f598) main_vradio_pane_g1

0xefd6,	// (0x00068abd) main_vradio_pane_g2_ParamLimits

0xefd6,	// (0x00068abd) main_vradio_pane_g2

0x0001,

0xf72a,	// (0x00069211) main_vradio_pane_g_ParamLimits

0xf72a,	// (0x00069211) main_vradio_pane_g

0x5aca,	// (0x0005f5b1) main_vradio_pane_t1_ParamLimits

0x5aca,	// (0x0005f5b1) main_vradio_pane_t1

0x5adf,	// (0x0005f5c6) main_vradio_pane_t2_ParamLimits

0x5adf,	// (0x0005f5c6) main_vradio_pane_t2

0xefe3,	// (0x00068aca) main_vradio_pane_t3_ParamLimits

0xefe3,	// (0x00068aca) main_vradio_pane_t3

0x0002,

0xf72f,	// (0x00069216) main_vradio_pane_t_ParamLimits

0xf72f,	// (0x00069216) main_vradio_pane_t

0x5af4,	// (0x0005f5db) vradio_rocker_control_pane_ParamLimits

0x5af4,	// (0x0005f5db) vradio_rocker_control_pane

0x5b06,	// (0x0005f5ed) vradio_station_info_pane_ParamLimits

0x5b06,	// (0x0005f5ed) vradio_station_info_pane

0xeff7,	// (0x00068ade) vradio_frequency_info_pane_ParamLimits

0xeff7,	// (0x00068ade) vradio_frequency_info_pane

0xe9c8,	// (0x000684af) vradio_station_info_pane_g1

0xf006,	// (0x00068aed) vradio_station_info_pane_t1_ParamLimits

0xf006,	// (0x00068aed) vradio_station_info_pane_t1

0xf028,	// (0x00068b0f) vradio_station_info_pane_t2_ParamLimits

0xf028,	// (0x00068b0f) vradio_station_info_pane_t2

0x0001,

0x05f5,	// (0x0005a0dc) vradio_station_info_pane_t_ParamLimits

0x05f5,	// (0x0005a0dc) vradio_station_info_pane_t

0xf042,	// (0x00068b29) vradio_tuning_pane

0xf04a,	// (0x00068b31) vradio_rocker_control_pane_g1

0xf052,	// (0x00068b39) vradio_rocker_control_pane_g2

0xf05a,	// (0x00068b41) vradio_rocker_control_pane_g3

0xf062,	// (0x00068b49) vradio_rocker_control_pane_g4

0xf06a,	// (0x00068b51) vradio_rocker_control_pane_g5

0x0004,

0xf736,	// (0x0006921d) vradio_rocker_control_pane_g

0x5b18,	// (0x0005f5ff) vradio_frequency_info_pane_g1

0xf072,	// (0x00068b59) vradio_frequency_info_pane_t1_ParamLimits

0xf072,	// (0x00068b59) vradio_frequency_info_pane_t1

0x5b22,	// (0x0005f609) vradio_tuning_pane_g1

0x5b2d,	// (0x0005f614) vradio_tuning_pane_t1

0x0e98,	// (0x0005a97f) area_side_right_pane_ParamLimits

0x0e98,	// (0x0005a97f) area_side_right_pane

0xe548,	// (0x0006802f) status_small_pane_g1

0xe550,	// (0x00068037) status_small_pane_g2

0xe559,	// (0x00068040) status_small_pane_g3

0xe562,	// (0x00068049) status_small_pane_g4

0x0003,

0x03ba,	// (0x00059ea1) status_small_pane_g

0xe56b,	// (0x00068052) status_small_pane_t1

0x0df9,	// (0x0005a8e0) main_video3_pane

0xf086,	// (0x00068b6d) cams_zoom_vslider_pane

0xf08e,	// (0x00068b75) image3_wide_pane_ParamLimits

0xf08e,	// (0x00068b75) image3_wide_pane

0xf0a8,	// (0x00068b8f) image3_wide_small_pane

0xf0b4,	// (0x00068b9b) main_video3_pane_g1_ParamLimits

0xf0b4,	// (0x00068b9b) main_video3_pane_g1

0xf0d0,	// (0x00068bb7) main_video3_pane_g2_ParamLimits

0xf0d0,	// (0x00068bb7) main_video3_pane_g2

0x0001,

0xf741,	// (0x00069228) main_video3_pane_g_ParamLimits

0xf741,	// (0x00069228) main_video3_pane_g

0x5b3c,	// (0x0005f623) main_video3_pane_t1_ParamLimits

0x5b3c,	// (0x0005f623) main_video3_pane_t1

0x5b67,	// (0x0005f64e) main_video3_pane_t2_ParamLimits

0x5b67,	// (0x0005f64e) main_video3_pane_t2

0x5b92,	// (0x0005f679) main_video3_pane_t3_ParamLimits

0x5b92,	// (0x0005f679) main_video3_pane_t3

0x0002,

0xf746,	// (0x0006922d) main_video3_pane_t_ParamLimits

0xf746,	// (0x0006922d) main_video3_pane_t

0x5bbf,	// (0x0005f6a6) cams_zoom_vslider_pane_g1

0x5bc8,	// (0x0005f6af) cams_zoom_vslider_pane_g2

0x0001,

0xf74d,	// (0x00069234) cams_zoom_vslider_pane_g

0x5bd0,	// (0x0005f6b7) small_slider_vertical_pane

0xe9c8,	// (0x000684af) small_slider_vertical_pane_g1

0xe9c8,	// (0x000684af) small_slider_vertical_pane_g2

0x5bd8,	// (0x0005f6bf) small_slider_vertical_pane_g3

0x0002,

0xf752,	// (0x00069239) small_slider_vertical_pane_g

0x0df9,	// (0x0005a8e0) main_hwr_training_pane

0x5be1,	// (0x0005f6c8) hwr_training_instruct_pane_ParamLimits

0x5be1,	// (0x0005f6c8) hwr_training_instruct_pane

0x5c03,	// (0x0005f6ea) hwr_training_navi_pane_ParamLimits

0x5c03,	// (0x0005f6ea) hwr_training_navi_pane

0x5c22,	// (0x0005f709) hwr_training_write_pane_ParamLimits

0x5c22,	// (0x0005f709) hwr_training_write_pane

0x0df9,	// (0x0005a8e0) bg_frame_shadow_pane

0x5c72,	// (0x0005f759) hwr_training_write_pane_g1

0x5c7a,	// (0x0005f761) hwr_training_write_pane_g2

0x5c82,	// (0x0005f769) hwr_training_write_pane_g3

0x5c8a,	// (0x0005f771) hwr_training_write_pane_g4

0x5c92,	// (0x0005f779) hwr_training_write_pane_g5

0x5c9a,	// (0x0005f781) hwr_training_write_pane_g6

0x5ca2,	// (0x0005f789) hwr_training_write_pane_g7

0x0006,

0xf759,	// (0x00069240) hwr_training_write_pane_g

0xd409,	// (0x00066ef0) hwr_training_navi_pane_g1_ParamLimits

0xd409,	// (0x00066ef0) hwr_training_navi_pane_g1

0xd41b,	// (0x00066f02) hwr_training_navi_pane_g2_ParamLimits

0xd41b,	// (0x00066f02) hwr_training_navi_pane_g2

0xd42d,	// (0x00066f14) hwr_training_navi_pane_g3_ParamLimits

0xd42d,	// (0x00066f14) hwr_training_navi_pane_g3

0xd43d,	// (0x00066f24) hwr_training_navi_pane_g4_ParamLimits

0xd43d,	// (0x00066f24) hwr_training_navi_pane_g4

0x0004,

0xf768,	// (0x0006924f) hwr_training_navi_pane_g_ParamLimits

0xf768,	// (0x0006924f) hwr_training_navi_pane_g

0xd44a,	// (0x00066f31) hwr_training_navi_pane_t1

0x5cb7,	// (0x0005f79e) list_single_hwr_training_instruct_pane_ParamLimits

0x5cb7,	// (0x0005f79e) list_single_hwr_training_instruct_pane

0x5ccc,	// (0x0005f7b3) list_single_hwr_training_instruct_pane_t1

0xe908,	// (0x000683ef) bg_frame_shadow_pane_g1

0x5cdb,	// (0x0005f7c2) bg_frame_shadow_pane_g2

0x5ce3,	// (0x0005f7ca) bg_frame_shadow_pane_g3

0x5ceb,	// (0x0005f7d2) bg_frame_shadow_pane_g4

0x5cf3,	// (0x0005f7da) bg_frame_shadow_pane_g5

0x5cfb,	// (0x0005f7e2) bg_frame_shadow_pane_g6

0x5d03,	// (0x0005f7ea) bg_frame_shadow_pane_g7

0xa29f,	// (0x00063d86) bg_frame_shadow_pane_g8

0x0007,

0xf773,	// (0x0006925a) bg_frame_shadow_pane_g

0x0df9,	// (0x0005a8e0) main_video_tele_dialer_pane

0x5d0b,	// (0x0005f7f2) aid_size_cell_video_keypad_ParamLimits

0x5d0b,	// (0x0005f7f2) aid_size_cell_video_keypad

0x5d25,	// (0x0005f80c) grid_video_dialer_keypad_pane_ParamLimits

0x5d25,	// (0x0005f80c) grid_video_dialer_keypad_pane

0x5d6f,	// (0x0005f856) video_down_pane_cp_ParamLimits

0x5d6f,	// (0x0005f856) video_down_pane_cp

0x5d9b,	// (0x0005f882) cell_video_dialer_keypad_pane_ParamLimits

0x5d9b,	// (0x0005f882) cell_video_dialer_keypad_pane

0x5dbd,	// (0x0005f8a4) bg_button_pane_cp08_ParamLimits

0x5dbd,	// (0x0005f8a4) bg_button_pane_cp08

0x5dc9,	// (0x0005f8b0) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5dc9,	// (0x0005f8b0) cell_video_dialer_keypad_pane_g1

0x5361,	// (0x0005ee48) mup3_rocker2_pane_ParamLimits

0x5361,	// (0x0005ee48) mup3_rocker2_pane

0xe9c8,	// (0x000684af) mup3_rocker2_pane_g1

0x3e8c,	// (0x0005d973) main_dialer2_pane

0x0df9,	// (0x0005a8e0) main_mp4_pane

0xd460,	// (0x00066f47) main_mp4_pane_g1_ParamLimits

0xd460,	// (0x00066f47) main_mp4_pane_g1

0xd460,	// (0x00066f47) main_mp4_pane_g2_ParamLimits

0xd460,	// (0x00066f47) main_mp4_pane_g2

0x5e03,	// (0x0005f8ea) main_mp4_pane_g3_ParamLimits

0x5e03,	// (0x0005f8ea) main_mp4_pane_g3

0xd46e,	// (0x00066f55) main_mp4_pane_g4_ParamLimits

0xd46e,	// (0x00066f55) main_mp4_pane_g4

0xd496,	// (0x00066f7d) main_mp4_pane_g5_ParamLimits

0xd496,	// (0x00066f7d) main_mp4_pane_g5

0x0005,

0xf793,	// (0x0006927a) main_mp4_pane_g_ParamLimits

0xf793,	// (0x0006927a) main_mp4_pane_g

0xd4e6,	// (0x00066fcd) main_mp4_pane_t1_ParamLimits

0xd4e6,	// (0x00066fcd) main_mp4_pane_t1

0xd542,	// (0x00067029) main_mp4_pane_t2_ParamLimits

0xd542,	// (0x00067029) main_mp4_pane_t2

0x5e3f,	// (0x0005f926) main_mp4_pane_t3_ParamLimits

0x5e3f,	// (0x0005f926) main_mp4_pane_t3

0xd594,	// (0x0006707b) main_mp4_pane_t4_ParamLimits

0xd594,	// (0x0006707b) main_mp4_pane_t4

0x0003,

0xf7a0,	// (0x00069287) main_mp4_pane_t_ParamLimits

0xf7a0,	// (0x00069287) main_mp4_pane_t

0xd5d8,	// (0x000670bf) mp4_progress_pane_ParamLimits

0xd5d8,	// (0x000670bf) mp4_progress_pane

0xd622,	// (0x00067109) mp4_rocker_pane_ParamLimits

0xd622,	// (0x00067109) mp4_rocker_pane

0x5e67,	// (0x0005f94e) mp4_progress_pane_t1

0x5e80,	// (0x0005f967) mp4_progress_pane_t2

0x0001,

0xf7a9,	// (0x00069290) mp4_progress_pane_t

0x5e99,	// (0x0005f980) mup_progress_pane_cp04

0xb5f1,	// (0x000650d8) mp4_rocker_pane_g1

0x5ea5,	// (0x0005f98c) aid_cell_size_keypad2_ParamLimits

0x5ea5,	// (0x0005f98c) aid_cell_size_keypad2

0x5ebb,	// (0x0005f9a2) dialer2_ne_pane_ParamLimits

0x5ebb,	// (0x0005f9a2) dialer2_ne_pane

0x5ed5,	// (0x0005f9bc) grid_dialer2_keypad_pane_ParamLimits

0x5ed5,	// (0x0005f9bc) grid_dialer2_keypad_pane

0xe7ad,	// (0x00068294) bg_popup_call_pane_cp07_ParamLimits

0xe7ad,	// (0x00068294) bg_popup_call_pane_cp07

0x5ef1,	// (0x0005f9d8) dialer2_ne_pane_t1_ParamLimits

0x5ef1,	// (0x0005f9d8) dialer2_ne_pane_t1

0x5f3e,	// (0x0005fa25) cell_dialer2_keypad_pane_ParamLimits

0x5f3e,	// (0x0005fa25) cell_dialer2_keypad_pane

0x5f60,	// (0x0005fa47) bg_button_pane_pane_cp04_ParamLimits

0x5f60,	// (0x0005fa47) bg_button_pane_pane_cp04

0x5f6c,	// (0x0005fa53) cell_dialer2_keypad_pane_g1_ParamLimits

0x5f6c,	// (0x0005fa53) cell_dialer2_keypad_pane_g1

0x1dd2,	// (0x0005b8b9) aid_placing_vt_set_content_ParamLimits

0x1dd2,	// (0x0005b8b9) aid_placing_vt_set_content

0x1df8,	// (0x0005b8df) aid_placing_vt_set_title_ParamLimits

0x1df8,	// (0x0005b8df) aid_placing_vt_set_title

0x0df9,	// (0x0005a8e0) main_image3_pane

0x6032,	// (0x0005fb19) area_side_right_pane_cp01_ParamLimits

0x6032,	// (0x0005fb19) area_side_right_pane_cp01

0xd460,	// (0x00066f47) main_image3_pane_g1_ParamLimits

0xd460,	// (0x00066f47) main_image3_pane_g1

0x6049,	// (0x0005fb30) main_image3_pane_g2_ParamLimits

0x6049,	// (0x0005fb30) main_image3_pane_g2

0x6071,	// (0x0005fb58) main_image3_pane_g3_ParamLimits

0x6071,	// (0x0005fb58) main_image3_pane_g3

0x609b,	// (0x0005fb82) main_image3_pane_g4_ParamLimits

0x609b,	// (0x0005fb82) main_image3_pane_g4

0x0003,

0xf7b8,	// (0x0006929f) main_image3_pane_g_ParamLimits

0xf7b8,	// (0x0006929f) main_image3_pane_g

0x60c5,	// (0x0005fbac) main_image3_pane_t1_ParamLimits

0x60c5,	// (0x0005fbac) main_image3_pane_t1

0x611d,	// (0x0005fc04) main_image3_pane_t2_ParamLimits

0x611d,	// (0x0005fc04) main_image3_pane_t2

0x616f,	// (0x0005fc56) main_image3_pane_t3_ParamLimits

0x616f,	// (0x0005fc56) main_image3_pane_t3

0x0003,

0xf7c1,	// (0x000692a8) main_image3_pane_t_ParamLimits

0xf7c1,	// (0x000692a8) main_image3_pane_t

0x9a43,	// (0x0006352a) grid_sctrl_middle_pane_cp01_ParamLimits

0x9a43,	// (0x0006352a) grid_sctrl_middle_pane_cp01

0x61f7,	// (0x0005fcde) cell_sctrl_middle_pane_cp01_ParamLimits

0x61f7,	// (0x0005fcde) cell_sctrl_middle_pane_cp01

0x6214,	// (0x0005fcfb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6214,	// (0x0005fcfb) cell_sctrl_middle_pane_cp01_g1

0x0df9,	// (0x0005a8e0) main_call4_pane

0x622a,	// (0x0005fd11) aid_size_button_call4_ParamLimits

0x622a,	// (0x0005fd11) aid_size_button_call4

0x625b,	// (0x0005fd42) call4_windows_pane_ParamLimits

0x625b,	// (0x0005fd42) call4_windows_pane

0x627b,	// (0x0005fd62) grid_call4_button_pane_ParamLimits

0x627b,	// (0x0005fd62) grid_call4_button_pane

0x62a8,	// (0x0005fd8f) call4_windows_conf_pane

0x62bf,	// (0x0005fda6) popup_call4_audio_first_window_ParamLimits

0x62bf,	// (0x0005fda6) popup_call4_audio_first_window

0x630b,	// (0x0005fdf2) popup_call4_audio_second_window_ParamLimits

0x630b,	// (0x0005fdf2) popup_call4_audio_second_window

0x631f,	// (0x0005fe06) popup_call4_audio_wait_window_ParamLimits

0x631f,	// (0x0005fe06) popup_call4_audio_wait_window

0x632d,	// (0x0005fe14) cell_call4_button_pane_ParamLimits

0x632d,	// (0x0005fe14) cell_call4_button_pane

0x6356,	// (0x0005fe3d) bg_button_pane_cp09_ParamLimits

0x6356,	// (0x0005fe3d) bg_button_pane_cp09

0x6362,	// (0x0005fe49) cell_call4_button_pane_g1_ParamLimits

0x6362,	// (0x0005fe49) cell_call4_button_pane_g1

0x6388,	// (0x0005fe6f) cell_call4_button_pane_t1_ParamLimits

0x6388,	// (0x0005fe6f) cell_call4_button_pane_t1

0x63e8,	// (0x0005fecf) popup_call4_audio_conf_window_ParamLimits

0x63e8,	// (0x0005fecf) popup_call4_audio_conf_window

0x53c1,	// (0x0005eea8) mup3_progress_pane_t1_ParamLimits

0x53d8,	// (0x0005eebf) mup3_progress_pane_t2_ParamLimits

0xeca6,	// (0x0006878d) mup3_progress_pane_t3_ParamLimits

0xf6cb,	// (0x000691b2) mup3_progress_pane_t_ParamLimits

0xecbd,	// (0x000687a4) mup_progress_pane_cp03_ParamLimits

0x5982,	// (0x0005f469) mup3_control_keys_pane_g4_copy1

0xd606,	// (0x000670ed) mp4_rocker2_pane_ParamLimits

0xd606,	// (0x000670ed) mp4_rocker2_pane

0x63fc,	// (0x0005fee3) mp4_rocker2_pane_g1

0x6404,	// (0x0005feeb) mp4_rocker2_pane_g2

0xd674,	// (0x0006715b) mp4_rocker2_pane_g3

0xd67c,	// (0x00067163) mp4_rocker2_pane_g4

0xd684,	// (0x0006716b) mp4_rocker2_pane_g5

0x0004,

0xf7ca,	// (0x000692b1) mp4_rocker2_pane_g

0x0df9,	// (0x0005a8e0) main_camera4_pane

0x0df9,	// (0x0005a8e0) main_video4_pane

0x5d3d,	// (0x0005f824) main_video_tele_dialer_pane_t1_ParamLimits

0x5d3d,	// (0x0005f824) main_video_tele_dialer_pane_t1

0x5d56,	// (0x0005f83d) main_video_tele_dialer_pane_t2_ParamLimits

0x5d56,	// (0x0005f83d) main_video_tele_dialer_pane_t2

0x0001,

0xf784,	// (0x0006926b) main_video_tele_dialer_pane_t_ParamLimits

0xf784,	// (0x0006926b) main_video_tele_dialer_pane_t

0x6424,	// (0x0005ff0b) cam4_autofocus_pane_ParamLimits

0x6424,	// (0x0005ff0b) cam4_autofocus_pane

0x643a,	// (0x0005ff21) cam4_image_uncrop_pane_ParamLimits

0x643a,	// (0x0005ff21) cam4_image_uncrop_pane

0x6454,	// (0x0005ff3b) cam4_indicators_pane_ParamLimits

0x6454,	// (0x0005ff3b) cam4_indicators_pane

0x647f,	// (0x0005ff66) main_camera4_pane_g1_ParamLimits

0x647f,	// (0x0005ff66) main_camera4_pane_g1

0x6492,	// (0x0005ff79) main_camera4_pane_g2_ParamLimits

0x6492,	// (0x0005ff79) main_camera4_pane_g2

0x64a5,	// (0x0005ff8c) main_camera4_pane_g3_ParamLimits

0x64a5,	// (0x0005ff8c) main_camera4_pane_g3

0x64b8,	// (0x0005ff9f) main_camera4_pane_g4_ParamLimits

0x64b8,	// (0x0005ff9f) main_camera4_pane_g4

0x64cb,	// (0x0005ffb2) main_camera4_pane_g5_ParamLimits

0x64cb,	// (0x0005ffb2) main_camera4_pane_g5

0x0005,

0xf7d5,	// (0x000692bc) main_camera4_pane_g_ParamLimits

0xf7d5,	// (0x000692bc) main_camera4_pane_g

0x64ef,	// (0x0005ffd6) main_camera4_pane_t1_ParamLimits

0x64ef,	// (0x0005ffd6) main_camera4_pane_t1

0xd6a8,	// (0x0006718f) bg_tb_trans_pane_cp06

0xd6be,	// (0x000671a5) cam4_indicators_pane_g1

0xd6cf,	// (0x000671b6) cam4_indicators_pane_g2

0x0002,

0xf7f0,	// (0x000692d7) cam4_indicators_pane_g

0xd6ed,	// (0x000671d4) cam4_indicators_pane_t1

0x6565,	// (0x0006004c) main_video4_pane_g1_ParamLimits

0x6565,	// (0x0006004c) main_video4_pane_g1

0x6578,	// (0x0006005f) main_video4_pane_g2_ParamLimits

0x6578,	// (0x0006005f) main_video4_pane_g2

0x658c,	// (0x00060073) main_video4_pane_g3_ParamLimits

0x658c,	// (0x00060073) main_video4_pane_g3

0x65a0,	// (0x00060087) main_video4_pane_g4_ParamLimits

0x65a0,	// (0x00060087) main_video4_pane_g4

0x0004,

0xf7f7,	// (0x000692de) main_video4_pane_g_ParamLimits

0xf7f7,	// (0x000692de) main_video4_pane_g

0x65c8,	// (0x000600af) vid4_indicators_pane_ParamLimits

0x65c8,	// (0x000600af) vid4_indicators_pane

0x65f8,	// (0x000600df) video4_image_uncrop_cif_pane_ParamLimits

0x65f8,	// (0x000600df) video4_image_uncrop_cif_pane

0x6612,	// (0x000600f9) video4_image_uncrop_nhd_pane_ParamLimits

0x6612,	// (0x000600f9) video4_image_uncrop_nhd_pane

0x643a,	// (0x0005ff21) video4_image_uncrop_vga_pane_ParamLimits

0x643a,	// (0x0005ff21) video4_image_uncrop_vga_pane

0xd70f,	// (0x000671f6) bg_tb_trans_pane_cp07

0x6626,	// (0x0006010d) vid4_indicators_pane_g1

0x6633,	// (0x0006011a) vid4_indicators_pane_g2

0x6640,	// (0x00060127) vid4_indicators_pane_g3

0x0004,

0xf802,	// (0x000692e9) vid4_indicators_pane_g

0x6665,	// (0x0006014c) vid4_indicators_pane_t1

0x6677,	// (0x0006015e) cam4_autofocus_pane_g1

0x667f,	// (0x00060166) cam4_autofocus_pane_g2

0x6687,	// (0x0006016e) cam4_autofocus_pane_g3

0x0002,

0xf80d,	// (0x000692f4) cam4_autofocus_pane_g

0x668f,	// (0x00060176) cam4_autofocus_pane_g3_copy1

0x5d7f,	// (0x0005f866) video_down_pane_cp_t1

0x5d8d,	// (0x0005f874) video_down_pane_cp_t2

0x0001,

0xf789,	// (0x00069270) video_down_pane_cp_t

0x9a43,	// (0x0006352a) popup_vitu2_window_ParamLimits

0x9a43,	// (0x0006352a) popup_vitu2_window

0x6697,	// (0x0006017e) aid_size_cell2_itu2_ParamLimits

0x6697,	// (0x0006017e) aid_size_cell2_itu2

0x66bd,	// (0x000601a4) aid_size_cell_itu2_ParamLimits

0x66bd,	// (0x000601a4) aid_size_cell_itu2

0x6719,	// (0x00060200) bg_popup_window_pane_cp09_ParamLimits

0x6719,	// (0x00060200) bg_popup_window_pane_cp09

0x6727,	// (0x0006020e) field_vitu2_entry_pane_ParamLimits

0x6727,	// (0x0006020e) field_vitu2_entry_pane

0x674d,	// (0x00060234) grid_vitu2_function_pane_ParamLimits

0x674d,	// (0x00060234) grid_vitu2_function_pane

0x679e,	// (0x00060285) grid_vitu2_itu_pane_ParamLimits

0x679e,	// (0x00060285) grid_vitu2_itu_pane

0x6831,	// (0x00060318) cell_vitu2_itu_pane_ParamLimits

0x6831,	// (0x00060318) cell_vitu2_itu_pane

0x6855,	// (0x0006033c) cell_vitu2_function_pane_ParamLimits

0x6855,	// (0x0006033c) cell_vitu2_function_pane

0x6894,	// (0x0006037b) bg_popup_call_pane_cp08_ParamLimits

0x6894,	// (0x0006037b) bg_popup_call_pane_cp08

0x68ad,	// (0x00060394) field_vitu2_entry_pane_g1

0x68b9,	// (0x000603a0) field_vitu2_entry_pane_g2

0x0002,

0xf814,	// (0x000692fb) field_vitu2_entry_pane_g

0x68d3,	// (0x000603ba) field_vitu2_entry_pane_t1_ParamLimits

0x68d3,	// (0x000603ba) field_vitu2_entry_pane_t1

0x6902,	// (0x000603e9) field_vitu2_entry_pane_t2_ParamLimits

0x6902,	// (0x000603e9) field_vitu2_entry_pane_t2

0x0001,

0xf81b,	// (0x00069302) field_vitu2_entry_pane_t_ParamLimits

0xf81b,	// (0x00069302) field_vitu2_entry_pane_t

0x6927,	// (0x0006040e) bg_button_pane_cp010_ParamLimits

0x6927,	// (0x0006040e) bg_button_pane_cp010

0x6935,	// (0x0006041c) cell_vitu2_itu_pane_g1

0x6953,	// (0x0006043a) cell_vitu2_itu_pane_t1_ParamLimits

0x6953,	// (0x0006043a) cell_vitu2_itu_pane_t1

0x0d05,	// (0x0005a7ec) cell_vitu2_itu_pane_t2_ParamLimits

0x0d05,	// (0x0005a7ec) cell_vitu2_itu_pane_t2

0x0002,

0xf825,	// (0x0006930c) cell_vitu2_itu_pane_t_ParamLimits

0xf825,	// (0x0006930c) cell_vitu2_itu_pane_t

0xd727,	// (0x0006720e) bg_button_pane_cp011

0x69b9,	// (0x000604a0) cell_vitu2_function_pane_g1

0x0df9,	// (0x0005a8e0) main_myfav_hc_pane

0x61bf,	// (0x0005fca6) popup_image3_note_pane_ParamLimits

0x61bf,	// (0x0005fca6) popup_image3_note_pane

0x61db,	// (0x0005fcc2) popup_image3_tool_bar_pane_ParamLimits

0x61db,	// (0x0005fcc2) popup_image3_tool_bar_pane

0x0d89,	// (0x0005a870) cell_vitu2_itu_pane_t3_ParamLimits

0x0d89,	// (0x0005a870) cell_vitu2_itu_pane_t3

0x0df9,	// (0x0005a8e0) bg_popup_trans_pane

0xb5fb,	// (0x000650e2) grid_image3_tool_bar_pane

0xb605,	// (0x000650ec) bg_popup_trans_pane_g1

0xa68c,	// (0x00064173) bg_popup_trans_pane_g2

0xb60d,	// (0x000650f4) bg_popup_trans_pane_g3

0xb615,	// (0x000650fc) bg_popup_trans_pane_g4

0xb61d,	// (0x00065104) bg_popup_trans_pane_g5

0xb625,	// (0x0006510c) bg_popup_trans_pane_g6

0xb62d,	// (0x00065114) bg_popup_trans_pane_g7

0xb635,	// (0x0006511c) bg_popup_trans_pane_g8

0xa66c,	// (0x00064153) bg_popup_trans_pane_g9

0x0008,

0xf82c,	// (0x00069313) bg_popup_trans_pane_g

0xb63d,	// (0x00065124) cell_image3_tool_bar_pane_ParamLimits

0xb63d,	// (0x00065124) cell_image3_tool_bar_pane

0xe9c8,	// (0x000684af) cell_image3_tool_bar_pane_g1

0x0df9,	// (0x0005a8e0) bg_popup_trans_pane_cp1

0xb651,	// (0x00065138) popup_image3_note_pane_t1

0xb65f,	// (0x00065146) popup_image3_note_pane_t2

0xb66d,	// (0x00065154) popup_image3_note_pane_t3

0x0002,

0xf83f,	// (0x00069326) popup_image3_note_pane_t

0xb67b,	// (0x00065162) popup_image3_note_pane_t3_copy1

0x69cd,	// (0x000604b4) bg_myfav_hc_instruction_pane_ParamLimits

0x69cd,	// (0x000604b4) bg_myfav_hc_instruction_pane

0x69e1,	// (0x000604c8) cell_myfav_contact_pane_ParamLimits

0x69e1,	// (0x000604c8) cell_myfav_contact_pane

0x69ff,	// (0x000604e6) cell_myfav_contact_pane_cp1_ParamLimits

0x69ff,	// (0x000604e6) cell_myfav_contact_pane_cp1

0x6a17,	// (0x000604fe) cell_myfav_contact_pane_cp2_ParamLimits

0x6a17,	// (0x000604fe) cell_myfav_contact_pane_cp2

0x6a2f,	// (0x00060516) cell_myfav_contact_pane_cp3_ParamLimits

0x6a2f,	// (0x00060516) cell_myfav_contact_pane_cp3

0x6a46,	// (0x0006052d) cell_myfav_contact_pane_cp4_ParamLimits

0x6a46,	// (0x0006052d) cell_myfav_contact_pane_cp4

0x6a5e,	// (0x00060545) cell_myfav_contact_pane_cp5_ParamLimits

0x6a5e,	// (0x00060545) cell_myfav_contact_pane_cp5

0x6a72,	// (0x00060559) cell_myfav_contact_pane_cp6_ParamLimits

0x6a72,	// (0x00060559) cell_myfav_contact_pane_cp6

0x6a88,	// (0x0006056f) cell_myfav_contact_pane_cp7_ParamLimits

0x6a88,	// (0x0006056f) cell_myfav_contact_pane_cp7

0xb689,	// (0x00065170) listscroll_gen_pane_cp05

0x6aa2,	// (0x00060589) main_myfav_hc_pane_g1_ParamLimits

0x6aa2,	// (0x00060589) main_myfav_hc_pane_g1

0x6abc,	// (0x000605a3) main_myfav_hc_pane_g2_ParamLimits

0x6abc,	// (0x000605a3) main_myfav_hc_pane_g2

0x0002,

0xf846,	// (0x0006932d) main_myfav_hc_pane_g_ParamLimits

0xf846,	// (0x0006932d) main_myfav_hc_pane_g

0x6aee,	// (0x000605d5) main_myfav_hc_pane_t1_ParamLimits

0x6aee,	// (0x000605d5) main_myfav_hc_pane_t1

0xb692,	// (0x00065179) main_myfav_hc_pane_t2_ParamLimits

0xb692,	// (0x00065179) main_myfav_hc_pane_t2

0xb6a4,	// (0x0006518b) main_myfav_hc_pane_t3_ParamLimits

0xb6a4,	// (0x0006518b) main_myfav_hc_pane_t3

0x6b05,	// (0x000605ec) main_myfav_hc_pane_t4_ParamLimits

0x6b05,	// (0x000605ec) main_myfav_hc_pane_t4

0x0004,

0xf84d,	// (0x00069334) main_myfav_hc_pane_t_ParamLimits

0xf84d,	// (0x00069334) main_myfav_hc_pane_t

0xe9c8,	// (0x000684af) bg_myfav_hc_instruction_pane_g1

0xb6b6,	// (0x0006519d) cell_myfav_contact_pane_g1_ParamLimits

0xb6b6,	// (0x0006519d) cell_myfav_contact_pane_g1

0xb6b6,	// (0x0006519d) cell_myfav_contact_pane_g2_ParamLimits

0xb6b6,	// (0x0006519d) cell_myfav_contact_pane_g2

0xb6c2,	// (0x000651a9) cell_myfav_contact_pane_g3_ParamLimits

0xb6c2,	// (0x000651a9) cell_myfav_contact_pane_g3

0xec90,	// (0x00068777) cell_myfav_contact_pane_g4_ParamLimits

0xec90,	// (0x00068777) cell_myfav_contact_pane_g4

0xb6cf,	// (0x000651b6) cell_myfav_contact_pane_g5_ParamLimits

0xb6cf,	// (0x000651b6) cell_myfav_contact_pane_g5

0x0004,

0xf858,	// (0x0006933f) cell_myfav_contact_pane_g_ParamLimits

0xf858,	// (0x0006933f) cell_myfav_contact_pane_g

0x6ad6,	// (0x000605bd) main_myfav_hc_pane_g3_ParamLimits

0x6ad6,	// (0x000605bd) main_myfav_hc_pane_g3

0x0f99,	// (0x0005aa80) popup_adpt_find_window

0x6b2d,	// (0x00060614) afind_page_pane_ParamLimits

0x6b2d,	// (0x00060614) afind_page_pane

0x6b42,	// (0x00060629) aid_size_cell_afind_ParamLimits

0x6b42,	// (0x00060629) aid_size_cell_afind

0x6b60,	// (0x00060647) bg_popup_sub_pane_cp09_ParamLimits

0x6b60,	// (0x00060647) bg_popup_sub_pane_cp09

0x6b6d,	// (0x00060654) find_pane_cp01_ParamLimits

0x6b6d,	// (0x00060654) find_pane_cp01

0xb6db,	// (0x000651c2) grid_afind_control_pane_ParamLimits

0xb6db,	// (0x000651c2) grid_afind_control_pane

0x6b7a,	// (0x00060661) grid_afind_pane_ParamLimits

0x6b7a,	// (0x00060661) grid_afind_pane

0x6b9c,	// (0x00060683) cell_afind_pane_ParamLimits

0x6b9c,	// (0x00060683) cell_afind_pane

0xe9c8,	// (0x000684af) afind_page_pane_g1

0x6bfd,	// (0x000606e4) afind_page_pane_g2

0x6c06,	// (0x000606ed) afind_page_pane_g3

0x0002,

0xf863,	// (0x0006934a) afind_page_pane_g

0x6c0f,	// (0x000606f6) afind_page_pane_t1

0xb6ef,	// (0x000651d6) cell_afind_grid_control_pane_ParamLimits

0xb6ef,	// (0x000651d6) cell_afind_grid_control_pane

0x5f60,	// (0x0005fa47) bg_button_pane_cp69_ParamLimits

0x5f60,	// (0x0005fa47) bg_button_pane_cp69

0x6c2f,	// (0x00060716) cell_afind_pane_g1_ParamLimits

0x6c2f,	// (0x00060716) cell_afind_pane_g1

0x6c3c,	// (0x00060723) cell_afind_pane_t1_ParamLimits

0x6c3c,	// (0x00060723) cell_afind_pane_t1

0xa487,	// (0x00063f6e) bg_button_pane_cp72

0xb6fe,	// (0x000651e5) cell_afind_grid_control_pane_g1

0x394c,	// (0x0005d433) aid_image_placing_area_ParamLimits

0x394c,	// (0x0005d433) aid_image_placing_area

0xef89,	// (0x00068a70) field_vitu_entry_pane_g1_ParamLimits

0xef89,	// (0x00068a70) field_vitu_entry_pane_g1

0xef95,	// (0x00068a7c) field_vitu_entry_pane_g2_ParamLimits

0xef95,	// (0x00068a7c) field_vitu_entry_pane_g2

0x0001,

0x05d8,	// (0x0005a0bf) field_vitu_entry_pane_g_ParamLimits

0x05d8,	// (0x0005a0bf) field_vitu_entry_pane_g

0x5a49,	// (0x0005f530) cell_vitu_itu_pane_g1_ParamLimits

0x5a8b,	// (0x0005f572) cell_vitu_itu_pane_t3_ParamLimits

0x5a8b,	// (0x0005f572) cell_vitu_itu_pane_t3

0x5e67,	// (0x0005f94e) mp4_progress_pane_t1_ParamLimits

0x5e80,	// (0x0005f967) mp4_progress_pane_t2_ParamLimits

0xf7a9,	// (0x00069290) mp4_progress_pane_t_ParamLimits

0x5e99,	// (0x0005f980) mup_progress_pane_cp04_ParamLimits

0x6b19,	// (0x00060600) main_myfav_hc_pane_t5_ParamLimits

0x6b19,	// (0x00060600) main_myfav_hc_pane_t5

0x0e4f,	// (0x0005a936) aid_zoom_text_primary

0x0f99,	// (0x0005aa80) popup_adpt_find_window_ParamLimits

0x9a43,	// (0x0006352a) main_cam_set_pane

0x646b,	// (0x0005ff52) cam4_zoom_pane_ParamLimits

0x646b,	// (0x0005ff52) cam4_zoom_pane

0x6c4e,	// (0x00060735) main_cam_set_pane_g1_ParamLimits

0x6c4e,	// (0x00060735) main_cam_set_pane_g1

0x6c5c,	// (0x00060743) main_cam_set_pane_g2_ParamLimits

0x6c5c,	// (0x00060743) main_cam_set_pane_g2

0x0001,

0xf86a,	// (0x00069351) main_cam_set_pane_g_ParamLimits

0xf86a,	// (0x00069351) main_cam_set_pane_g

0x6c7d,	// (0x00060764) main_cam_set_pane_t1_ParamLimits

0x6c7d,	// (0x00060764) main_cam_set_pane_t1

0x6c98,	// (0x0006077f) main_cset_listscroll_pane_ParamLimits

0x6c98,	// (0x0006077f) main_cset_listscroll_pane

0x6cb8,	// (0x0006079f) main_cset_slider_pane_ParamLimits

0x6cb8,	// (0x0006079f) main_cset_slider_pane

0xb70f,	// (0x000651f6) main_cset_list_pane_ParamLimits

0xb70f,	// (0x000651f6) main_cset_list_pane

0xb71f,	// (0x00065206) scroll_pane_cp028

0x6cde,	// (0x000607c5) aid_area_touch_slider

0x6cfa,	// (0x000607e1) cset_slider_pane

0x6d24,	// (0x0006080b) main_cset_slider_pane_g1

0x6d39,	// (0x00060820) main_cset_slider_pane_g2

0x0011,

0xf86f,	// (0x00069356) main_cset_slider_pane_g

0xb758,	// (0x0006523f) main_cset_slider_pane_t1

0x6df5,	// (0x000608dc) main_cset_slider_pane_t2

0x6e0f,	// (0x000608f6) main_cset_slider_pane_t3

0x6e29,	// (0x00060910) main_cset_slider_pane_t4

0x6e43,	// (0x0006092a) main_cset_slider_pane_t5

0x6e5d,	// (0x00060944) main_cset_slider_pane_t6

0x6e72,	// (0x00060959) main_cset_slider_pane_t7

0x000e,

0xf894,	// (0x0006937b) main_cset_slider_pane_t

0x6f76,	// (0x00060a5d) cset_list_set_pane_ParamLimits

0x6f76,	// (0x00060a5d) cset_list_set_pane

0x6f88,	// (0x00060a6f) aid_position_infowindow_above

0x6f90,	// (0x00060a77) aid_position_infowindow_below

0xb7f8,	// (0x000652df) cset_list_set_pane_g1_ParamLimits

0xb7f8,	// (0x000652df) cset_list_set_pane_g1

0xb804,	// (0x000652eb) cset_list_set_pane_g3_ParamLimits

0xb804,	// (0x000652eb) cset_list_set_pane_g3

0x0001,

0xf8b3,	// (0x0006939a) cset_list_set_pane_g_ParamLimits

0xf8b3,	// (0x0006939a) cset_list_set_pane_g

0x6f98,	// (0x00060a7f) cset_list_set_pane_t1_ParamLimits

0x6f98,	// (0x00060a7f) cset_list_set_pane_t1

0x9a43,	// (0x0006352a) list_highlight_pane_cp021_ParamLimits

0x9a43,	// (0x0006352a) list_highlight_pane_cp021

0xaf6c,	// (0x00064a53) cset_slider_pane_g1

0xaf7e,	// (0x00064a65) cset_slider_pane_g2

0xaf75,	// (0x00064a5c) cset_slider_pane_g3

0x0002,

0xf8b8,	// (0x0006939f) cset_slider_pane_g

0xd735,	// (0x0006721c) aid_area_touch_cam4_zoom

0xd73d,	// (0x00067224) cam4_zoom_cont_pane

0xd745,	// (0x0006722c) cam4_zoom_pane_g1

0xd74d,	// (0x00067234) cam4_zoom_pane_g2

0x6fad,	// (0x00060a94) cam4_zoom_pane_g3

0x0002,

0xf8bf,	// (0x000693a6) cam4_zoom_pane_g

0xd755,	// (0x0006723c) cam4_zoom_cont_pane_g1

0xd75e,	// (0x00067245) cam4_zoom_cont_pane_g2

0xd767,	// (0x0006724e) cam4_zoom_cont_pane_g3

0x0002,

0xf8c6,	// (0x000693ad) cam4_zoom_cont_pane_g

0x6248,	// (0x0005fd2f) call4_image_pane_ParamLimits

0x6248,	// (0x0005fd2f) call4_image_pane

0x62a8,	// (0x0005fd8f) call4_windows_conf_pane_ParamLimits

0x62e9,	// (0x0005fdd0) popup_call4_audio_in_window_ParamLimits

0x62e9,	// (0x0005fdd0) popup_call4_audio_in_window

0x0df9,	// (0x0005a8e0) bg_popup_call2_act_pane_cp02

0x63e0,	// (0x0005fec7) call4_list_conf_pane

0xe9c8,	// (0x000684af) call4_image_pane_g1

0xe9c8,	// (0x000684af) call4_image_pane_g2

0x0001,

0x049e,	// (0x00059f85) call4_image_pane_g

0xb813,	// (0x000652fa) list_single_graphic_popup_conf4_pane_ParamLimits

0xb813,	// (0x000652fa) list_single_graphic_popup_conf4_pane

0x0df9,	// (0x0005a8e0) list_highlight_pane_cp022

0xb826,	// (0x0006530d) list_single_graphic_popup_conf4_pane_g1

0xac2b,	// (0x00064712) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8cd,	// (0x000693b4) list_single_graphic_popup_conf4_pane_g

0xb82e,	// (0x00065315) list_single_graphic_popup_conf4_pane_t1

0x1f1c,	// (0x0005ba03) popup_vtel_slider_window_ParamLimits

0x1f1c,	// (0x0005ba03) popup_vtel_slider_window

0x5f2c,	// (0x0005fa13) dialer2_ne_pane_t2_ParamLimits

0x5f2c,	// (0x0005fa13) dialer2_ne_pane_t2

0x0001,

0xf7ae,	// (0x00069295) dialer2_ne_pane_t_ParamLimits

0xf7ae,	// (0x00069295) dialer2_ne_pane_t

0xe7ad,	// (0x00068294) bg_popup_sub_pane_cp010_ParamLimits

0xe7ad,	// (0x00068294) bg_popup_sub_pane_cp010

0x6fb5,	// (0x00060a9c) popup_vtel_slider_window_g1_ParamLimits

0x6fb5,	// (0x00060a9c) popup_vtel_slider_window_g1

0x6fc8,	// (0x00060aaf) popup_vtel_slider_window_g2_ParamLimits

0x6fc8,	// (0x00060aaf) popup_vtel_slider_window_g2

0x0003,

0xf8d2,	// (0x000693b9) popup_vtel_slider_window_g_ParamLimits

0xf8d2,	// (0x000693b9) popup_vtel_slider_window_g

0x701e,	// (0x00060b05) vtel_slider_pane_ParamLimits

0x701e,	// (0x00060b05) vtel_slider_pane

0x7040,	// (0x00060b27) vtel_slider_pane_g1_ParamLimits

0x7040,	// (0x00060b27) vtel_slider_pane_g1

0x7054,	// (0x00060b3b) vtel_slider_pane_g2_ParamLimits

0x7054,	// (0x00060b3b) vtel_slider_pane_g2

0x706c,	// (0x00060b53) vtel_slider_pane_g3_ParamLimits

0x706c,	// (0x00060b53) vtel_slider_pane_g3

0x7040,	// (0x00060b27) vtel_slider_pane_g4_ParamLimits

0x7040,	// (0x00060b27) vtel_slider_pane_g4

0x7082,	// (0x00060b69) vtel_slider_pane_g5_ParamLimits

0x7082,	// (0x00060b69) vtel_slider_pane_g5

0x0004,

0xf8db,	// (0x000693c2) vtel_slider_pane_g_ParamLimits

0xf8db,	// (0x000693c2) vtel_slider_pane_g

0x0df9,	// (0x0005a8e0) main_gallery2_pane

0x66e9,	// (0x000601d0) aid_size_row_itut2_dropdow_list_ParamLimits

0x66e9,	// (0x000601d0) aid_size_row_itut2_dropdow_list

0x6775,	// (0x0006025c) grid_vitu2_function_top_pane_ParamLimits

0x6775,	// (0x0006025c) grid_vitu2_function_top_pane

0x67da,	// (0x000602c1) popup_vitu2_dropdown_list_window_ParamLimits

0x67da,	// (0x000602c1) popup_vitu2_dropdown_list_window

0x6803,	// (0x000602ea) popup_vitu2_match_list_window

0x7098,	// (0x00060b7f) cell_vitu2_function_top_pane_ParamLimits

0x7098,	// (0x00060b7f) cell_vitu2_function_top_pane

0x70b6,	// (0x00060b9d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x70b6,	// (0x00060b9d) cell_vitu2_function_top_pane_cp01

0x70d4,	// (0x00060bbb) cell_vitu2_function_top_wide_pane_ParamLimits

0x70d4,	// (0x00060bbb) cell_vitu2_function_top_wide_pane

0xd727,	// (0x0006720e) bg_button_pane_cp012

0x70f2,	// (0x00060bd9) cell_vitu2_function_top_pane_g1

0xd770,	// (0x00067257) bg_button_pane_cp013_ParamLimits

0xd770,	// (0x00067257) bg_button_pane_cp013

0x7106,	// (0x00060bed) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7106,	// (0x00060bed) cell_vitu2_function_top_wide_pane_g1

0xd727,	// (0x0006720e) bg_popup_sub_pane_cp20

0x711e,	// (0x00060c05) list_vitu2_match_list_pane

0xb605,	// (0x000650ec) bg_popup_sub_pane_cp20_g1

0xb60d,	// (0x000650f4) bg_popup_sub_pane_cp20_g2

0xa68c,	// (0x00064173) bg_popup_sub_pane_cp20_g3

0xb615,	// (0x000650fc) bg_popup_sub_pane_cp20_g4

0xa66c,	// (0x00064153) bg_popup_sub_pane_cp20_g5

0xb852,	// (0x00065339) bg_popup_sub_pane_cp20_g6

0xb625,	// (0x0006510c) bg_popup_sub_pane_cp20_g7

0xb62d,	// (0x00065114) bg_popup_sub_pane_cp20_g8

0xb635,	// (0x0006511c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8e6,	// (0x000693cd) bg_popup_sub_pane_cp20_g

0xd78c,	// (0x00067273) list_vitu2_match_list_item_pane_ParamLimits

0xd78c,	// (0x00067273) list_vitu2_match_list_item_pane

0xd79e,	// (0x00067285) list_vitu2_match_list_item_pane_t1

0xa19e,	// (0x00063c85) bg_popup_sub_pane_cp21

0xd7ac,	// (0x00067293) grid_vitu2_dropdown_list_pane

0x7171,	// (0x00060c58) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7171,	// (0x00060c58) cell_vitu2_dropdown_list_char_pane

0x7192,	// (0x00060c79) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7192,	// (0x00060c79) cell_vitu2_dropdown_list_ctrl_pane

0xb872,	// (0x00065359) cell_vitu2_dropdown_list_char_pane_g1

0xb87b,	// (0x00065362) cell_vitu2_dropdown_list_char_pane_g2

0xb884,	// (0x0006536b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf903,	// (0x000693ea) cell_vitu2_dropdown_list_char_pane_g

0x71be,	// (0x00060ca5) cell_vitu2_dropdown_list_char_pane_t1

0x71cc,	// (0x00060cb3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71cc,	// (0x00060cb3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x71d9,	// (0x00060cc0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x71d9,	// (0x00060cc0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x71e6,	// (0x00060ccd) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x71e6,	// (0x00060ccd) cell_vitu2_dropdown_list_ctrl_pane_g3

0x71f3,	// (0x00060cda) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x71f3,	// (0x00060cda) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd6a8,	// (0x0006718f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd6a8,	// (0x0006718f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf90a,	// (0x000693f1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf90a,	// (0x000693f1) cell_vitu2_dropdown_list_ctrl_pane_g

0x720f,	// (0x00060cf6) aid_size_cell_gallery2_ParamLimits

0x720f,	// (0x00060cf6) aid_size_cell_gallery2

0x7225,	// (0x00060d0c) grid_gallery2_pane_ParamLimits

0x7225,	// (0x00060d0c) grid_gallery2_pane

0x7239,	// (0x00060d20) scroll_pane_cp029_ParamLimits

0x7239,	// (0x00060d20) scroll_pane_cp029

0x7245,	// (0x00060d2c) cell_gallery2_pane_ParamLimits

0x7245,	// (0x00060d2c) cell_gallery2_pane

0xb88d,	// (0x00065374) cell_gallery2_pane_g2

0x727b,	// (0x00060d62) cell_gallery2_pane_g3

0xb897,	// (0x0006537e) cell_gallery2_pane_g4

0xb89f,	// (0x00065386) cell_gallery2_pane_g5

0xae16,	// (0x000648fd) grid_highlight_pane_cp10

0x6803,	// (0x000602ea) popup_vitu2_match_list_window_ParamLimits

0x681a,	// (0x00060301) popup_vitu2_query_window_ParamLimits

0x681a,	// (0x00060301) popup_vitu2_query_window

0xa19e,	// (0x00063c85) bg_vitu2_candi_button_pane

0xb872,	// (0x00065359) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb87b,	// (0x00065362) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb884,	// (0x0006536b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7283,	// (0x00060d6a) bg_button_pane_cp015

0x7295,	// (0x00060d7c) bg_button_pane_cp016

0x72a8,	// (0x00060d8f) bg_button_pane_cp017

0xe581,	// (0x00068068) bg_popup_sub_pane_cp22

0xb8a7,	// (0x0006538e) popup_vitu2_query_window_g1

0x72ed,	// (0x00060dd4) popup_vitu2_query_window_g2

0x0002,

0xf915,	// (0x000693fc) popup_vitu2_query_window_g

0x730c,	// (0x00060df3) popup_vitu2_query_window_t1_ParamLimits

0x730c,	// (0x00060df3) popup_vitu2_query_window_t1

0x7341,	// (0x00060e28) popup_vitu2_query_window_t2_ParamLimits

0x7341,	// (0x00060e28) popup_vitu2_query_window_t2

0x7353,	// (0x00060e3a) popup_vitu2_query_window_t3_ParamLimits

0x7353,	// (0x00060e3a) popup_vitu2_query_window_t3

0x737b,	// (0x00060e62) popup_vitu2_query_window_t4_ParamLimits

0x737b,	// (0x00060e62) popup_vitu2_query_window_t4

0x739c,	// (0x00060e83) popup_vitu2_query_window_t5_ParamLimits

0x739c,	// (0x00060e83) popup_vitu2_query_window_t5

0x0006,

0xf91c,	// (0x00069403) popup_vitu2_query_window_t_ParamLimits

0xf91c,	// (0x00069403) popup_vitu2_query_window_t

0xb707,	// (0x000651ee) main_cset_text_pane

0x6cde,	// (0x000607c5) aid_area_touch_slider_ParamLimits

0x6cfa,	// (0x000607e1) cset_slider_pane_ParamLimits

0x6d24,	// (0x0006080b) main_cset_slider_pane_g1_ParamLimits

0x6d39,	// (0x00060820) main_cset_slider_pane_g2_ParamLimits

0xb728,	// (0x0006520f) main_cset_slider_pane_g3_ParamLimits

0xb728,	// (0x0006520f) main_cset_slider_pane_g3

0x6d4e,	// (0x00060835) main_cset_slider_pane_g4_ParamLimits

0x6d4e,	// (0x00060835) main_cset_slider_pane_g4

0x6d5d,	// (0x00060844) main_cset_slider_pane_g5_ParamLimits

0x6d5d,	// (0x00060844) main_cset_slider_pane_g5

0x6d69,	// (0x00060850) main_cset_slider_pane_g6_ParamLimits

0x6d69,	// (0x00060850) main_cset_slider_pane_g6

0xf86f,	// (0x00069356) main_cset_slider_pane_g_ParamLimits

0xb758,	// (0x0006523f) main_cset_slider_pane_t1_ParamLimits

0x6df5,	// (0x000608dc) main_cset_slider_pane_t2_ParamLimits

0x6e0f,	// (0x000608f6) main_cset_slider_pane_t3_ParamLimits

0x6e29,	// (0x00060910) main_cset_slider_pane_t4_ParamLimits

0x6e43,	// (0x0006092a) main_cset_slider_pane_t5_ParamLimits

0x6e5d,	// (0x00060944) main_cset_slider_pane_t6_ParamLimits

0x6e72,	// (0x00060959) main_cset_slider_pane_t7_ParamLimits

0x6e9c,	// (0x00060983) main_cset_slider_pane_t8_ParamLimits

0x6e9c,	// (0x00060983) main_cset_slider_pane_t8

0x6ec4,	// (0x000609ab) main_cset_slider_pane_t9_ParamLimits

0x6ec4,	// (0x000609ab) main_cset_slider_pane_t9

0x6eec,	// (0x000609d3) main_cset_slider_pane_t10_ParamLimits

0x6eec,	// (0x000609d3) main_cset_slider_pane_t10

0x6f14,	// (0x000609fb) main_cset_slider_pane_t11_ParamLimits

0x6f14,	// (0x000609fb) main_cset_slider_pane_t11

0x6f3c,	// (0x00060a23) main_cset_slider_pane_t12_ParamLimits

0x6f3c,	// (0x00060a23) main_cset_slider_pane_t12

0x6f59,	// (0x00060a40) main_cset_slider_pane_t13_ParamLimits

0x6f59,	// (0x00060a40) main_cset_slider_pane_t13

0xf894,	// (0x0006937b) main_cset_slider_pane_t_ParamLimits

0x0df9,	// (0x0005a8e0) bg_popup_sub_pane_cp011

0xb8b3,	// (0x0006539a) main_cset_text_pane_g1

0xb8bb,	// (0x000653a2) main_cset_text_pane_t1

0xb8c9,	// (0x000653b0) main_cset_text_pane_t2

0xb8d7,	// (0x000653be) main_cset_text_pane_t3

0xb8e5,	// (0x000653cc) main_cset_text_pane_t4

0xb8f3,	// (0x000653da) main_cset_text_pane_t5

0xb901,	// (0x000653e8) main_cset_text_pane_t6

0xb90f,	// (0x000653f6) main_cset_text_pane_t7

0x0006,

0xf92b,	// (0x00069412) main_cset_text_pane_t

0x0df9,	// (0x0005a8e0) main_cam4_burst_pane

0x0df9,	// (0x0005a8e0) main_cam5_pane

0x6c1d,	// (0x00060704) bg_button_pane_cp019

0x6c26,	// (0x0006070d) bg_button_pane_cp020

0xb734,	// (0x0006521b) main_cset_slider_pane_g7_ParamLimits

0xb734,	// (0x0006521b) main_cset_slider_pane_g7

0xb740,	// (0x00065227) main_cset_slider_pane_g8_ParamLimits

0xb740,	// (0x00065227) main_cset_slider_pane_g8

0x6d7d,	// (0x00060864) main_cset_slider_pane_g9_ParamLimits

0x6d7d,	// (0x00060864) main_cset_slider_pane_g9

0x6d89,	// (0x00060870) main_cset_slider_pane_g10_ParamLimits

0x6d89,	// (0x00060870) main_cset_slider_pane_g10

0x6d95,	// (0x0006087c) main_cset_slider_pane_g11_ParamLimits

0x6d95,	// (0x0006087c) main_cset_slider_pane_g11

0x6da1,	// (0x00060888) main_cset_slider_pane_g12_ParamLimits

0x6da1,	// (0x00060888) main_cset_slider_pane_g12

0x6dad,	// (0x00060894) main_cset_slider_pane_g13_ParamLimits

0x6dad,	// (0x00060894) main_cset_slider_pane_g13

0x6db9,	// (0x000608a0) main_cset_slider_pane_g14_ParamLimits

0x6db9,	// (0x000608a0) main_cset_slider_pane_g14

0x6dc5,	// (0x000608ac) main_cset_slider_pane_g15_ParamLimits

0x6dc5,	// (0x000608ac) main_cset_slider_pane_g15

0xb786,	// (0x0006526d) main_cset_slider_pane_t14_ParamLimits

0xb786,	// (0x0006526d) main_cset_slider_pane_t14

0xb7bf,	// (0x000652a6) main_cset_slider_pane_t15_ParamLimits

0xb7bf,	// (0x000652a6) main_cset_slider_pane_t15

0x7413,	// (0x00060efa) aid_cam4_burst_size_cell_ParamLimits

0x7413,	// (0x00060efa) aid_cam4_burst_size_cell

0x7433,	// (0x00060f1a) grid_cam4_burst_pane_ParamLimits

0x7433,	// (0x00060f1a) grid_cam4_burst_pane

0x746b,	// (0x00060f52) linegrid_cam4_burst_pane_ParamLimits

0x746b,	// (0x00060f52) linegrid_cam4_burst_pane

0xb91d,	// (0x00065404) scroll_pane_cp30_ParamLimits

0xb91d,	// (0x00065404) scroll_pane_cp30

0x748f,	// (0x00060f76) cell_cam4_burst_pane_ParamLimits

0x748f,	// (0x00060f76) cell_cam4_burst_pane

0xb929,	// (0x00065410) linegrid_cam4_burst_pane_g1_ParamLimits

0xb929,	// (0x00065410) linegrid_cam4_burst_pane_g1

0x74dc,	// (0x00060fc3) linegrid_cam4_burst_pane_g2_ParamLimits

0x74dc,	// (0x00060fc3) linegrid_cam4_burst_pane_g2

0xb936,	// (0x0006541d) linegrid_cam4_burst_pane_g3_ParamLimits

0xb936,	// (0x0006541d) linegrid_cam4_burst_pane_g3

0x0002,

0xf93a,	// (0x00069421) linegrid_cam4_burst_pane_g_ParamLimits

0xf93a,	// (0x00069421) linegrid_cam4_burst_pane_g

0x74ed,	// (0x00060fd4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x74ed,	// (0x00060fd4) linegrid_cam4_burst_pane_g3_copy1

0xb943,	// (0x0006542a) linegrid_cam4_burst_pane_g4_ParamLimits

0xb943,	// (0x0006542a) linegrid_cam4_burst_pane_g4

0x7507,	// (0x00060fee) linegrid_cam4_burst_pane_g5_ParamLimits

0x7507,	// (0x00060fee) linegrid_cam4_burst_pane_g5

0x7518,	// (0x00060fff) linegrid_cam4_burst_pane_g6_ParamLimits

0x7518,	// (0x00060fff) linegrid_cam4_burst_pane_g6

0xb950,	// (0x00065437) linegrid_cam4_burst_pane_g7_ParamLimits

0xb950,	// (0x00065437) linegrid_cam4_burst_pane_g7

0x752f,	// (0x00061016) cell_cam4_burst_pane_g1

0xb969,	// (0x00065450) main_cam5_pane_t1_ParamLimits

0xb969,	// (0x00065450) main_cam5_pane_t1

0xb97b,	// (0x00065462) main_cam5_pane_t2_ParamLimits

0xb97b,	// (0x00065462) main_cam5_pane_t2

0xb98d,	// (0x00065474) main_cam5_pane_t3_ParamLimits

0xb98d,	// (0x00065474) main_cam5_pane_t3

0xb99f,	// (0x00065486) main_cam5_pane_t4_ParamLimits

0xb99f,	// (0x00065486) main_cam5_pane_t4

0xb9b7,	// (0x0006549e) main_cam5_pane_t5_ParamLimits

0xb9b7,	// (0x0006549e) main_cam5_pane_t5

0xb9cb,	// (0x000654b2) main_cam5_pane_t6_ParamLimits

0xb9cb,	// (0x000654b2) main_cam5_pane_t6

0xb9df,	// (0x000654c6) main_cam5_pane_t7_ParamLimits

0xb9df,	// (0x000654c6) main_cam5_pane_t7

0xb9f1,	// (0x000654d8) main_cam5_pane_t8_ParamLimits

0xb9f1,	// (0x000654d8) main_cam5_pane_t8

0xba0d,	// (0x000654f4) main_cam5_pane_t9_ParamLimits

0xba0d,	// (0x000654f4) main_cam5_pane_t9

0xba1f,	// (0x00065506) main_cam5_pane_t10_ParamLimits

0xba1f,	// (0x00065506) main_cam5_pane_t10

0xba31,	// (0x00065518) main_cam5_pane_t11_ParamLimits

0xba31,	// (0x00065518) main_cam5_pane_t11

0xba43,	// (0x0006552a) main_cam5_pane_t12_ParamLimits

0xba43,	// (0x0006552a) main_cam5_pane_t12

0xba58,	// (0x0006553f) main_cam5_pane_t13_ParamLimits

0xba58,	// (0x0006553f) main_cam5_pane_t13

0x000c,

0xf946,	// (0x0006942d) main_cam5_pane_t_ParamLimits

0xf946,	// (0x0006942d) main_cam5_pane_t

0x101b,	// (0x0005ab02) popup_scut_keymap_window_ParamLimits

0x101b,	// (0x0005ab02) popup_scut_keymap_window

0x7542,	// (0x00061029) aid_size_cell_brow_shortcut

0xae16,	// (0x000648fd) bg_popup_window_pane_cp010

0x754e,	// (0x00061035) grid_scut_pane

0x755a,	// (0x00061041) cell_scut_pane_ParamLimits

0x755a,	// (0x00061041) cell_scut_pane

0x7571,	// (0x00061058) cell_scut_pane_g1

0xba75,	// (0x0006555c) cell_scut_pane_t1

0xba84,	// (0x0006556b) cell_scut_pane_t2

0x757a,	// (0x00061061) cell_scut_pane_t3

0x0002,

0xf961,	// (0x00069448) cell_scut_pane_t

0x4fa6,	// (0x0005ea8d) main_mup3_pane_g8_ParamLimits

0x4fa6,	// (0x0005ea8d) main_mup3_pane_g8

0x6701,	// (0x000601e8) area_vitu2_query_pane_ParamLimits

0x6701,	// (0x000601e8) area_vitu2_query_pane

0x72bb,	// (0x00060da2) input_focus_pane_cp08

0xba93,	// (0x0006557a) area_vitu2_query_pane_g1

0x7588,	// (0x0006106f) area_vitu2_query_pane_g2

0x0001,

0xf968,	// (0x0006944f) area_vitu2_query_pane_g

0x7599,	// (0x00061080) area_vitu2_query_pane_t1_ParamLimits

0x7599,	// (0x00061080) area_vitu2_query_pane_t1

0x75ad,	// (0x00061094) area_vitu2_query_pane_t2_ParamLimits

0x75ad,	// (0x00061094) area_vitu2_query_pane_t2

0x75c1,	// (0x000610a8) area_vitu2_query_pane_t3_ParamLimits

0x75c1,	// (0x000610a8) area_vitu2_query_pane_t3

0xba9f,	// (0x00065586) area_vitu2_query_pane_t4_ParamLimits

0xba9f,	// (0x00065586) area_vitu2_query_pane_t4

0xbac7,	// (0x000655ae) area_vitu2_query_pane_t5_ParamLimits

0xbac7,	// (0x000655ae) area_vitu2_query_pane_t5

0xbaef,	// (0x000655d6) area_vitu2_query_pane_t6_ParamLimits

0xbaef,	// (0x000655d6) area_vitu2_query_pane_t6

0x0006,

0xf96d,	// (0x00069454) area_vitu2_query_pane_t_ParamLimits

0xf96d,	// (0x00069454) area_vitu2_query_pane_t

0x75e9,	// (0x000610d0) bg_button_pane_cp018

0x75f7,	// (0x000610de) bg_button_pane_cp021

0x7603,	// (0x000610ea) bg_button_pane_cp022

0x7612,	// (0x000610f9) input_focus_pane_cp09

0x2f11,	// (0x0005c9f8) aid_size_touch_mv_arrow_left

0x2f3a,	// (0x0005ca21) aid_size_touch_mv_arrow_right

0x6ddd,	// (0x000608c4) main_cset_slider_pane_g16_ParamLimits

0x6ddd,	// (0x000608c4) main_cset_slider_pane_g16

0x6de9,	// (0x000608d0) main_cset_slider_pane_g17_ParamLimits

0x6de9,	// (0x000608d0) main_cset_slider_pane_g17

0x752f,	// (0x00061016) cell_cam4_burst_pane_g1_ParamLimits

0x0df9,	// (0x0005a8e0) compa_mode_pane

0x6fd8,	// (0x00060abf) popup_vtel_slider_window_g3_ParamLimits

0x6fd8,	// (0x00060abf) popup_vtel_slider_window_g3

0x6fef,	// (0x00060ad6) popup_vtel_slider_window_g4_ParamLimits

0x6fef,	// (0x00060ad6) popup_vtel_slider_window_g4

0x7006,	// (0x00060aed) popup_vtel_slider_window_t1_ParamLimits

0x7006,	// (0x00060aed) popup_vtel_slider_window_t1

0x0df9,	// (0x0005a8e0) main_cl_pane

0xe5a9,	// (0x00068090) popup_imed_adjust2_window_ParamLimits

0xe581,	// (0x00068068) bg_tb_trans_pane_cp05_ParamLimits

0xeebe,	// (0x000689a5) popup_imed_adjust2_window_g1_ParamLimits

0xeecd,	// (0x000689b4) popup_imed_adjust2_window_g2_ParamLimits

0xeecd,	// (0x000689b4) popup_imed_adjust2_window_g2

0xeed9,	// (0x000689c0) popup_imed_adjust2_window_g3_ParamLimits

0xeed9,	// (0x000689c0) popup_imed_adjust2_window_g3

0x0002,

0x059c,	// (0x0005a083) popup_imed_adjust2_window_g_ParamLimits

0x059c,	// (0x0005a083) popup_imed_adjust2_window_g

0xeee5,	// (0x000689cc) popup_imed_adjust2_window_t1_ParamLimits

0xeefd,	// (0x000689e4) slider_imed_adjust_pane_ParamLimits

0xef11,	// (0x000689f8) slider_imed_adjust_pane_g1_ParamLimits

0xef21,	// (0x00068a08) slider_imed_adjust_pane_g2_ParamLimits

0xef31,	// (0x00068a18) slider_imed_adjust_pane_g3_ParamLimits

0xef42,	// (0x00068a29) slider_imed_adjust_pane_g4_ParamLimits

0x05a3,	// (0x0005a08a) slider_imed_adjust_pane_g_ParamLimits

0x640c,	// (0x0005fef3) aid_touch_area_cam4_ParamLimits

0x640c,	// (0x0005fef3) aid_touch_area_cam4

0xd68c,	// (0x00067173) battery_pane_cp01

0x64dc,	// (0x0005ffc3) main_camera4_pane_g6_ParamLimits

0x64dc,	// (0x0005ffc3) main_camera4_pane_g6

0x6506,	// (0x0005ffed) main_camera4_pane_t2_ParamLimits

0x6506,	// (0x0005ffed) main_camera4_pane_t2

0x0001,

0xf7e2,	// (0x000692c9) main_camera4_pane_t_ParamLimits

0xf7e2,	// (0x000692c9) main_camera4_pane_t

0x654d,	// (0x00060034) aid_touch_area_vid4_ParamLimits

0x654d,	// (0x00060034) aid_touch_area_vid4

0x65b4,	// (0x0006009b) main_video4_pane_g5_ParamLimits

0x65b4,	// (0x0006009b) main_video4_pane_g5

0x65df,	// (0x000600c6) vid4_progress_pane_ParamLimits

0x65df,	// (0x000600c6) vid4_progress_pane

0xb74c,	// (0x00065233) main_cset_slider_pane_g18_ParamLimits

0xb74c,	// (0x00065233) main_cset_slider_pane_g18

0xb95d,	// (0x00065444) cell_cam4_burst_pane_g2_ParamLimits

0xb95d,	// (0x00065444) cell_cam4_burst_pane_g2

0x0001,

0xf941,	// (0x00069428) cell_cam4_burst_pane_g_ParamLimits

0xf941,	// (0x00069428) cell_cam4_burst_pane_g

0xa1c2,	// (0x00063ca9) bg_cl_pane_ParamLimits

0xa1c2,	// (0x00063ca9) bg_cl_pane

0x7621,	// (0x00061108) cl_header_pane_ParamLimits

0x7621,	// (0x00061108) cl_header_pane

0x7635,	// (0x0006111c) cl_listscroll_pane_ParamLimits

0x7635,	// (0x0006111c) cl_listscroll_pane

0xbb3b,	// (0x00065622) bg_cl_pane_g1

0xbb43,	// (0x0006562a) bg_cl_pane_g2

0xbb4b,	// (0x00065632) bg_cl_pane_g3

0xbb53,	// (0x0006563a) bg_cl_pane_g4

0xbb5b,	// (0x00065642) bg_cl_pane_g5

0xbb63,	// (0x0006564a) bg_cl_pane_g6

0xbb6b,	// (0x00065652) bg_cl_pane_g7

0xbb73,	// (0x0006565a) bg_cl_pane_g8

0xbb7b,	// (0x00065662) bg_cl_pane_g9

0x0008,

0xf97c,	// (0x00069463) bg_cl_pane_g

0x7645,	// (0x0006112c) aid_height_cl_leading_ParamLimits

0x7645,	// (0x0006112c) aid_height_cl_leading

0x7651,	// (0x00061138) aid_height_cl_text_ParamLimits

0x7651,	// (0x00061138) aid_height_cl_text

0x9a43,	// (0x0006352a) bg_cl_header_pane_ParamLimits

0x9a43,	// (0x0006352a) bg_cl_header_pane

0x7670,	// (0x00061157) cl_header_pane_g1_ParamLimits

0x7670,	// (0x00061157) cl_header_pane_g1

0x7686,	// (0x0006116d) cl_header_pane_t1_ParamLimits

0x7686,	// (0x0006116d) cl_header_pane_t1

0xbb83,	// (0x0006566a) cl_list_pane

0xb71f,	// (0x00065206) hc_scroll_pane_cp01

0xa66c,	// (0x00064153) bg_cl_header_pane_g1

0xb605,	// (0x000650ec) bg_cl_header_pane_g2

0xa68c,	// (0x00064173) bg_cl_header_pane_g3

0xb615,	// (0x000650fc) bg_cl_header_pane_g4

0xb60d,	// (0x000650f4) bg_cl_header_pane_g5

0xb852,	// (0x00065339) bg_cl_header_pane_g6

0xb62d,	// (0x00065114) bg_cl_header_pane_g7

0xb635,	// (0x0006511c) bg_cl_header_pane_g8

0xb625,	// (0x0006510c) bg_cl_header_pane_g9

0x0008,

0xf98f,	// (0x00069476) bg_cl_header_pane_g

0x769f,	// (0x00061186) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x769f,	// (0x00061186) hc_cl_list_double_graphic_heading_pane

0x76b0,	// (0x00061197) hc_cl_list_single_graphic_pane_ParamLimits

0x76b0,	// (0x00061197) hc_cl_list_single_graphic_pane

0x76c6,	// (0x000611ad) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x76c6,	// (0x000611ad) hc_cl_list_single_graphic_pane_g1

0x76d2,	// (0x000611b9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76d2,	// (0x000611b9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9a2,	// (0x00069489) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9a2,	// (0x00069489) hc_cl_list_single_graphic_pane_g

0x76e6,	// (0x000611cd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76e6,	// (0x000611cd) hc_cl_list_single_graphic_pane_t1

0x76c6,	// (0x000611ad) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x76c6,	// (0x000611ad) hc_cl_list_double_graphic_heading_pane_g1

0x76fb,	// (0x000611e2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76fb,	// (0x000611e2) hc_cl_list_double_graphic_heading_pane_g2

0x770f,	// (0x000611f6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x770f,	// (0x000611f6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9a7,	// (0x0006948e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9a7,	// (0x0006948e) hc_cl_list_double_graphic_heading_pane_g

0x7723,	// (0x0006120a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7723,	// (0x0006120a) hc_cl_list_double_graphic_heading_pane_t1

0x7738,	// (0x0006121f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7738,	// (0x0006121f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9ae,	// (0x00069495) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9ae,	// (0x00069495) hc_cl_list_double_graphic_heading_pane_t

0xd7bc,	// (0x000672a3) vid4_progress_pane_g1

0xd7cc,	// (0x000672b3) vid4_progress_pane_g2

0xa95f,	// (0x00064446) vid4_progress_pane_g3

0xd7dc,	// (0x000672c3) vid4_progress_pane_g4

0x0004,

0xf9b3,	// (0x0006949a) vid4_progress_pane_g

0xd7fa,	// (0x000672e1) vid4_progress_pane_t1

0xd80f,	// (0x000672f6) vid4_progress_pane_t2

0x0002,

0xf9be,	// (0x000694a5) vid4_progress_pane_t

0xd83a,	// (0x00067321) wait_bar_pane_cp07

0xe7bb,	// (0x000682a2) blid_firmament_pane_ParamLimits

0xe7fe,	// (0x000682e5) popup_blid_sat_info2_window_g1

0xe822,	// (0x00068309) popup_blid_sat_info2_window_t3

0xe830,	// (0x00068317) popup_blid_sat_info2_window_t4

0xe83e,	// (0x00068325) popup_blid_sat_info2_window_t5

0xe84c,	// (0x00068333) popup_blid_sat_info2_window_t6

0xe85c,	// (0x00068343) popup_blid_sat_info2_window_t7

0xe86a,	// (0x00068351) popup_blid_sat_info2_window_t8

0xe878,	// (0x0006835f) popup_blid_sat_info2_window_t9

0xe886,	// (0x0006836d) popup_blid_sat_info2_window_t10

0xe948,	// (0x0006842f) aid_firma_cardinal_ParamLimits

0xe95c,	// (0x00068443) blid_firmament_pane_t1_ParamLimits

0xe973,	// (0x0006845a) blid_firmament_pane_t2_ParamLimits

0xe98a,	// (0x00068471) blid_firmament_pane_t3_ParamLimits

0xe9a1,	// (0x00068488) blid_firmament_pane_t4_ParamLimits

0x0495,	// (0x00059f7c) blid_firmament_pane_t_ParamLimits

0xe9b8,	// (0x0006849f) blid_sat_info_pane_ParamLimits

0x9a43,	// (0x0006352a) main_cam_set_pane_ParamLimits

0x5803,	// (0x0005f2ea) aid_size_cell_colour_35_ParamLimits

0x5823,	// (0x0005f30a) aid_size_cell_colour_112_ParamLimits

0x5843,	// (0x0005f32a) aid_size_cell_effect_ParamLimits

0xe581,	// (0x00068068) bg_tb_trans_pane_cp02_ParamLimits

0xa8e6,	// (0x000643cd) heading_imed_pane_ParamLimits

0x5863,	// (0x0005f34a) listscroll_imed_pane_ParamLimits

0xdbb3,	// (0x0006769a) popup_call2_audio_first_window_g5_ParamLimits

0xdbb3,	// (0x0006769a) popup_call2_audio_first_window_g5

0x5fd4,	// (0x0005fabb) aid_size_touch_image3_arrow_left_ParamLimits

0x5fd4,	// (0x0005fabb) aid_size_touch_image3_arrow_left

0x6000,	// (0x0005fae7) aid_size_touch_image3_arrow_right_ParamLimits

0x6000,	// (0x0005fae7) aid_size_touch_image3_arrow_right

0xd825,	// (0x0006730c) vid4_progress_pane_t3

0x5c3d,	// (0x0005f724) main_hwr_training_symbol_option_pane_ParamLimits

0x5c3d,	// (0x0005f724) main_hwr_training_symbol_option_pane

0x5c5d,	// (0x0005f744) popup_hwr_training_preview_window_ParamLimits

0x5c5d,	// (0x0005f744) popup_hwr_training_preview_window

0x5caa,	// (0x0005f791) hwr_training_navi_pane_g5_ParamLimits

0x5caa,	// (0x0005f791) hwr_training_navi_pane_g5

0x691f,	// (0x00060406) popup_char_count_window

0xd727,	// (0x0006720e) bg_popup_sub_pane_cp20_ParamLimits

0x711e,	// (0x00060c05) list_vitu2_match_list_pane_ParamLimits

0x712d,	// (0x00060c14) vitu2_page_scroll_pane_ParamLimits

0x712d,	// (0x00060c14) vitu2_page_scroll_pane

0xbbe6,	// (0x000656cd) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbbe6,	// (0x000656cd) list_single_hwr_training_symbol_option_pane

0xbbf9,	// (0x000656e0) list_single_hwr_training_symbol_option_pane_g1

0xbc01,	// (0x000656e8) list_single_hwr_training_symbol_option_pane_t1

0xbc0f,	// (0x000656f6) bg_button_pane_cp023

0xbc18,	// (0x000656ff) bg_button_pane_cp024

0x774d,	// (0x00061234) vitu2_page_scroll_pane_g1

0x7755,	// (0x0006123c) vitu2_page_scroll_pane_g2

0x0001,

0xf9c5,	// (0x000694ac) vitu2_page_scroll_pane_g

0x775d,	// (0x00061244) vitu2_page_scroll_pane_t1

0xbc4b,	// (0x00065732) popup_char_count_window_g1

0xbc54,	// (0x0006573b) popup_char_count_window_g2

0xbc5d,	// (0x00065744) popup_char_count_window_g3

0x0002,

0xf9ca,	// (0x000694b1) popup_char_count_window_g

0xbc66,	// (0x0006574d) popup_char_count_window_t1

0x0df9,	// (0x0005a8e0) main_vded2_pane

0xeeaa,	// (0x00068991) aid_size_cell_imed_line

0xeeb4,	// (0x0006899b) grid_imed_line_width_pane

0x664d,	// (0x00060134) vid4_indicators_pane_g4

0xbc74,	// (0x0006575b) cell_imed_line_width_pane_ParamLimits

0xbc74,	// (0x0006575b) cell_imed_line_width_pane

0xbc88,	// (0x0006576f) cell_imed_line_width_pane_g1

0xf03a,	// (0x00068b21) cell_imed_line_width_pane_g2

0x0001,

0xf9d1,	// (0x000694b8) cell_imed_line_width_pane_g

0x776c,	// (0x00061253) main_vded2_pane_g1_ParamLimits

0x776c,	// (0x00061253) main_vded2_pane_g1

0x7782,	// (0x00061269) main_vded2_pane_g2_ParamLimits

0x7782,	// (0x00061269) main_vded2_pane_g2

0x0001,

0xf9d6,	// (0x000694bd) main_vded2_pane_g_ParamLimits

0xf9d6,	// (0x000694bd) main_vded2_pane_g

0x7794,	// (0x0006127b) vded2_slider_pane_ParamLimits

0x7794,	// (0x0006127b) vded2_slider_pane

0x77a4,	// (0x0006128b) aid_size_touch_vded2_end

0x77ae,	// (0x00061295) aid_size_touch_vded2_playhead

0xbc91,	// (0x00065778) aid_size_touch_vded2_start

0xbc99,	// (0x00065780) vded2_slider_bg_pane

0xbca2,	// (0x00065789) vded2_slider_pane_g1

0xbcab,	// (0x00065792) vded2_slider_pane_g2

0x77b8,	// (0x0006129f) vded2_slider_pane_g3

0x0002,

0xf9db,	// (0x000694c2) vded2_slider_pane_g

0xbcb3,	// (0x0006579a) vded2_slider_bg_pane_g1

0xbcbc,	// (0x000657a3) vded2_slider_bg_pane_g2

0xbcc5,	// (0x000657ac) vded2_slider_bg_pane_g3

0x0002,

0xf9e2,	// (0x000694c9) vded2_slider_bg_pane_g

0x35bb,	// (0x0005d0a2) aid_postcard_touch_down_pane_ParamLimits

0x35bb,	// (0x0005d0a2) aid_postcard_touch_down_pane

0x35d1,	// (0x0005d0b8) aid_postcard_touch_up_pane_ParamLimits

0x35d1,	// (0x0005d0b8) aid_postcard_touch_up_pane

0x0df9,	// (0x0005a8e0) main_blid2_pane

0xe58f,	// (0x00068076) popup_blid2_search_window

0x0df9,	// (0x0005a8e0) blid2_gps_pane

0x0df9,	// (0x0005a8e0) blid2_navig_pane

0x0df9,	// (0x0005a8e0) blid2_search_pane

0x0df9,	// (0x0005a8e0) blid2_tripm_pane

0x77c3,	// (0x000612aa) blid2_search_pane_g1_ParamLimits

0x77c3,	// (0x000612aa) blid2_search_pane_g1

0x77dd,	// (0x000612c4) blid2_search_pane_t1_ParamLimits

0x77dd,	// (0x000612c4) blid2_search_pane_t1

0x77ef,	// (0x000612d6) aid_size_cell_blid2_gps_ParamLimits

0x77ef,	// (0x000612d6) aid_size_cell_blid2_gps

0x7807,	// (0x000612ee) blid2_gps_pane_g1_ParamLimits

0x7807,	// (0x000612ee) blid2_gps_pane_g1

0x781b,	// (0x00061302) grid_blid2_satellite_pane_ParamLimits

0x781b,	// (0x00061302) grid_blid2_satellite_pane

0x7835,	// (0x0006131c) blid2_navig_pane_g1_ParamLimits

0x7835,	// (0x0006131c) blid2_navig_pane_g1

0x7841,	// (0x00061328) blid2_navig_pane_t1_ParamLimits

0x7841,	// (0x00061328) blid2_navig_pane_t1

0x785c,	// (0x00061343) blid2_navig_pane_t2_ParamLimits

0x785c,	// (0x00061343) blid2_navig_pane_t2

0x0001,

0xf9e9,	// (0x000694d0) blid2_navig_pane_t_ParamLimits

0xf9e9,	// (0x000694d0) blid2_navig_pane_t

0x7877,	// (0x0006135e) blid2_navig_ring_pane_ParamLimits

0x7877,	// (0x0006135e) blid2_navig_ring_pane

0x7890,	// (0x00061377) blid2_speed_pane_ParamLimits

0x7890,	// (0x00061377) blid2_speed_pane

0x789c,	// (0x00061383) blid2_tripm_pane_g1_ParamLimits

0x789c,	// (0x00061383) blid2_tripm_pane_g1

0x78b5,	// (0x0006139c) blid2_tripm_pane_g2_ParamLimits

0x78b5,	// (0x0006139c) blid2_tripm_pane_g2

0x78c9,	// (0x000613b0) blid2_tripm_pane_g3_ParamLimits

0x78c9,	// (0x000613b0) blid2_tripm_pane_g3

0x78dd,	// (0x000613c4) blid2_tripm_pane_g4_ParamLimits

0x78dd,	// (0x000613c4) blid2_tripm_pane_g4

0x78f1,	// (0x000613d8) blid2_tripm_pane_g5_ParamLimits

0x78f1,	// (0x000613d8) blid2_tripm_pane_g5

0x0005,

0xf9ee,	// (0x000694d5) blid2_tripm_pane_g_ParamLimits

0xf9ee,	// (0x000694d5) blid2_tripm_pane_g

0x7917,	// (0x000613fe) blid2_tripm_pane_t1_ParamLimits

0x7917,	// (0x000613fe) blid2_tripm_pane_t1

0x7932,	// (0x00061419) blid2_tripm_pane_t2_ParamLimits

0x7932,	// (0x00061419) blid2_tripm_pane_t2

0x794b,	// (0x00061432) blid2_tripm_pane_t3_ParamLimits

0x794b,	// (0x00061432) blid2_tripm_pane_t3

0x0003,

0xf9fb,	// (0x000694e2) blid2_tripm_pane_t_ParamLimits

0xf9fb,	// (0x000694e2) blid2_tripm_pane_t

0x7992,	// (0x00061479) cell_blid2_satellite_pane_ParamLimits

0x7992,	// (0x00061479) cell_blid2_satellite_pane

0x79b0,	// (0x00061497) cell_blid2_satellite_pane_g1

0xbcce,	// (0x000657b5) cell_blid2_satellite_pane_t1

0xe9c8,	// (0x000684af) blid2_speed_pane_g1

0xbcdc,	// (0x000657c3) blid2_speed_pane_t1

0xbcea,	// (0x000657d1) blid2_speed_pane_t2

0x0001,

0xfa04,	// (0x000694eb) blid2_speed_pane_t

0xe9c8,	// (0x000684af) blid2_navig_ring_pane_g1

0x79b9,	// (0x000614a0) blid2_navig_ring_pane_g2

0x79c1,	// (0x000614a8) blid2_navig_ring_pane_g3

0x79c9,	// (0x000614b0) blid2_navig_ring_pane_g4

0x79d1,	// (0x000614b8) blid2_navig_ring_pane_g5

0x0004,

0xfa09,	// (0x000694f0) blid2_navig_ring_pane_g

0x0df9,	// (0x0005a8e0) bg_popup_window_pane_cp011

0xbcf8,	// (0x000657df) popup_blid2_search_window_g1

0xbd00,	// (0x000657e7) popup_blid2_search_window_t1

0xbd0e,	// (0x000657f5) popup_blid2_search_window_t2

0x0001,

0xfa14,	// (0x000694fb) popup_blid2_search_window_t

0xa57b,	// (0x00064062) main_browser_pane_g1

0xa1c2,	// (0x00063ca9) main_browser_pane_ParamLimits

0xd727,	// (0x0006720e) bg_button_pane_cp011_ParamLimits

0x69b9,	// (0x000604a0) cell_vitu2_function_pane_g1_ParamLimits

0xe581,	// (0x00068068) bg_popup_sub_pane_cp22_ParamLimits

0x72bb,	// (0x00060da2) input_focus_pane_cp08_ParamLimits

0x72d2,	// (0x00060db9) popup_vitu2_query_button_pane_ParamLimits

0x72d2,	// (0x00060db9) popup_vitu2_query_button_pane

0x72e3,	// (0x00060dca) popup_vitu2_query_input_button_pane

0xb8a7,	// (0x0006538e) popup_vitu2_query_window_g1_ParamLimits

0x72ed,	// (0x00060dd4) popup_vitu2_query_window_g2_ParamLimits

0xf915,	// (0x000693fc) popup_vitu2_query_window_g_ParamLimits

0x0df9,	// (0x0005a8e0) bg_button_pane_cp026

0x79d9,	// (0x000614c0) popup_vitu2_query_input_button_pane_g1

0x0df9,	// (0x0005a8e0) bg_button_pane_cp025

0xbd1c,	// (0x00065803) popup_vitu2_query_button_pane_t1

0x4c55,	// (0x0005e73c) main_mp3_pane_t6

0x4c63,	// (0x0005e74a) popup_slider_window_cp01

0xd6b6,	// (0x0006719d) cam4_battery_pane

0xd71d,	// (0x00067204) cam4_battery_pane_cp02

0xd7b4,	// (0x0006729b) cam4_battery_pane_cp01

0xd7b4,	// (0x0006729b) cam4_battery_pane_cp03

0xb5f1,	// (0x000650d8) cam4_battery_pane_g1

0xe9c8,	// (0x000684af) cam4_battery_pane_g2

0x0001,

0xfa19,	// (0x00069500) cam4_battery_pane_g

0xe894,	// (0x0006837b) popup_blid_sat_info2_window_t11

0x2f11,	// (0x0005c9f8) aid_size_touch_mv_arrow_left_ParamLimits

0x2f3a,	// (0x0005ca21) aid_size_touch_mv_arrow_right_ParamLimits

0xad76,	// (0x0006485d) navi_pane_g1_ParamLimits

0x2f63,	// (0x0005ca4a) navi_pane_g2_ParamLimits

0x2f91,	// (0x0005ca78) navi_pane_g3_ParamLimits

0xf409,	// (0x00068ef0) navi_pane_g_ParamLimits

0x2fe9,	// (0x0005cad0) navi_pane_mv_t1_ParamLimits

0x586f,	// (0x0005f356) grid_imed_effect_pane_ParamLimits

0x1e19,	// (0x0005b900) aid_placing_vt_slider_lsc

0xa4cc,	// (0x00063fb3) aid_placing_vt_slider_prt

0x9a43,	// (0x0006352a) bg_tb_trans_pane_cp01_ParamLimits

0xeb4b,	// (0x00068632) popup_image_details_window_g1_ParamLimits

0xeb5e,	// (0x00068645) popup_image_details_window_g2_ParamLimits

0xeb73,	// (0x0006865a) popup_image_details_window_g3_ParamLimits

0xeb73,	// (0x0006865a) popup_image_details_window_g3

0x04da,	// (0x00059fc1) popup_image_details_window_g_ParamLimits

0xeb87,	// (0x0006866e) popup_image_details_window_t1_ParamLimits

0xeb99,	// (0x00068680) popup_image_details_window_t2_ParamLimits

0xebb2,	// (0x00068699) popup_image_details_window_t3_ParamLimits

0xebc6,	// (0x000686ad) popup_image_details_window_t4_ParamLimits

0xebe1,	// (0x000686c8) popup_image_details_window_t5_ParamLimits

0x04e1,	// (0x00059fc8) popup_image_details_window_t_ParamLimits

0x765d,	// (0x00061144) cl_header_name_pane_ParamLimits

0x765d,	// (0x00061144) cl_header_name_pane

0x79e1,	// (0x000614c8) cl_header_name_pane_t1_ParamLimits

0x79e1,	// (0x000614c8) cl_header_name_pane_t1

0x7a02,	// (0x000614e9) cl_header_name_pane_t2_ParamLimits

0x7a02,	// (0x000614e9) cl_header_name_pane_t2

0x7a44,	// (0x0006152b) cl_header_name_pane_t3_ParamLimits

0x7a44,	// (0x0006152b) cl_header_name_pane_t3

0x0002,

0xfa1e,	// (0x00069505) cl_header_name_pane_t_ParamLimits

0xfa1e,	// (0x00069505) cl_header_name_pane_t

0x2fba,	// (0x0005caa1) navi_pane_mv_g2_ParamLimits

0x68ad,	// (0x00060394) field_vitu2_entry_pane_g1_ParamLimits

0x68b9,	// (0x000603a0) field_vitu2_entry_pane_g2_ParamLimits

0x68c5,	// (0x000603ac) field_vitu2_entry_pane_g3_ParamLimits

0x68c5,	// (0x000603ac) field_vitu2_entry_pane_g3

0xf814,	// (0x000692fb) field_vitu2_entry_pane_g_ParamLimits

0x6935,	// (0x0006041c) cell_vitu2_itu_pane_g1_ParamLimits

0x6945,	// (0x0006042c) cell_vitu2_itu_pane_g2_ParamLimits

0x6945,	// (0x0006042c) cell_vitu2_itu_pane_g2

0x0001,

0xf820,	// (0x00069307) cell_vitu2_itu_pane_g_ParamLimits

0xf820,	// (0x00069307) cell_vitu2_itu_pane_g

0xd727,	// (0x0006720e) bg_vkb2_func_pane_cp05_ParamLimits

0xd727,	// (0x0006720e) bg_vkb2_func_pane_cp05

0xd727,	// (0x0006720e) bg_vkb2_func_pane_cp03

0xd727,	// (0x0006720e) bg_vkb2_func_pane_cp04

0xd727,	// (0x0006720e) bg_vkb2_func_pane_cp10_ParamLimits

0xd727,	// (0x0006720e) bg_vkb2_func_pane_cp10

0x7603,	// (0x000610ea) bg_vkb2_func_pane_cp08

0x75e9,	// (0x000610d0) bg_vkb2_func_pane_cp06

0x75f7,	// (0x000610de) bg_vkb2_func_pane_cp07

0xbc21,	// (0x00065708) bg_vkb2_func_pane_cp11_ParamLimits

0xbc21,	// (0x00065708) bg_vkb2_func_pane_cp11

0xbc36,	// (0x0006571d) bg_vkb2_func_pane_cp12_ParamLimits

0xbc36,	// (0x0006571d) bg_vkb2_func_pane_cp12

0x0df9,	// (0x0005a8e0) bg_vkb2_func_pane_cp09

0xb605,	// (0x000650ec) bg_vkb2_func_pane_g1

0xa68c,	// (0x00064173) bg_vkb2_func_pane_g2

0xb60d,	// (0x000650f4) bg_vkb2_func_pane_g3

0xb615,	// (0x000650fc) bg_vkb2_func_pane_g4

0xb852,	// (0x00065339) bg_vkb2_func_pane_g5

0xb62d,	// (0x00065114) bg_vkb2_func_pane_g6

0xb635,	// (0x0006511c) bg_vkb2_func_pane_g7

0xb625,	// (0x0006510c) bg_vkb2_func_pane_g8

0xa66c,	// (0x00064153) bg_vkb2_func_pane_g9

0x0008,

0xfa25,	// (0x0006950c) bg_vkb2_func_pane_g

0x7905,	// (0x000613ec) blid2_tripm_pane_g6_ParamLimits

0x7905,	// (0x000613ec) blid2_tripm_pane_g6

0x5e5f,	// (0x0005f946) mp4_progress_pane_g1

0x797e,	// (0x00061465) blid2_tripm_values_pane_ParamLimits

0x797e,	// (0x00061465) blid2_tripm_values_pane

0x7a75,	// (0x0006155c) blid2_tripm_values_pane_t1

0x7a83,	// (0x0006156a) blid2_tripm_values_pane_t2

0x7a91,	// (0x00061578) blid2_tripm_values_pane_t3

0x7a9f,	// (0x00061586) blid2_tripm_values_pane_t4

0x7aad,	// (0x00061594) blid2_tripm_values_pane_t5

0x7abb,	// (0x000615a2) blid2_tripm_values_pane_t6

0x7ac9,	// (0x000615b0) blid2_tripm_values_pane_t7

0x7ad7,	// (0x000615be) blid2_tripm_values_pane_t8

0x7ae5,	// (0x000615cc) blid2_tripm_values_pane_t9

0x0008,

0xfa38,	// (0x0006951f) blid2_tripm_values_pane_t

0x1e5b,	// (0x0005b942) call_video_pane_t1_ParamLimits

0x1e79,	// (0x0005b960) call_video_pane_t2_ParamLimits

0xf292,	// (0x00068d79) call_video_pane_t_ParamLimits

0x34be,	// (0x0005cfa5) msg_header_pane_g1_ParamLimits

0xafb1,	// (0x00064a98) msg_header_pane_g2_ParamLimits

0xafb1,	// (0x00064a98) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00068f93) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00068f93) msg_header_pane_g

0xa1c2,	// (0x00063ca9) main_clock2_pane_ParamLimits

0x559b,	// (0x0005f082) grid_clock2_toolbar_pane_ParamLimits

0x559b,	// (0x0005f082) grid_clock2_toolbar_pane

0x559b,	// (0x0005f082) listscroll_clock2_pane_ParamLimits

0x559b,	// (0x0005f082) listscroll_clock2_pane

0x5677,	// (0x0005f15e) main_clock2_pane_t3_ParamLimits

0x5677,	// (0x0005f15e) main_clock2_pane_t3

0x5692,	// (0x0005f179) main_clock2_pane_t4_ParamLimits

0x5692,	// (0x0005f179) main_clock2_pane_t4

0xbd2a,	// (0x00065811) cell_clock2_toolbar_pane

0xbd32,	// (0x00065819) cell_clock2_toolbar_pane_cp01

0xbd32,	// (0x00065819) cell_clock2_toolbar_pane_cp02

0xbd3a,	// (0x00065821) cell_clock2_toolbar_pane_cp03

0xbd42,	// (0x00065829) list_clock2_pane

0xaccd,	// (0x000647b4) scroll_pane_cp10

0xbd4a,	// (0x00065831) list_single_clock2_pane_ParamLimits

0xbd4a,	// (0x00065831) list_single_clock2_pane

0xae16,	// (0x000648fd) list_highlight_pane_cp08

0xbd57,	// (0x0006583e) list_single_clock2_pane_t1

0xbd65,	// (0x0006584c) list_single_clock2_pane_t2

0x0001,

0xfa4b,	// (0x00069532) list_single_clock2_pane_t

0x0df9,	// (0x0005a8e0) bg_button_pane_cp10

0xbd73,	// (0x0006585a) cell_clock2_toolbar_pane_g1

0x3547,	// (0x0005d02e) aid_main_viewer_pane_g1_ParamLimits

0x3547,	// (0x0005d02e) aid_main_viewer_pane_g1

0x3555,	// (0x0005d03c) aid_main_viewer_pane_g2_ParamLimits

0x3555,	// (0x0005d03c) aid_main_viewer_pane_g2

0x3563,	// (0x0005d04a) aid_main_viewer_pane_g3_ParamLimits

0x3563,	// (0x0005d04a) aid_main_viewer_pane_g3

0x3572,	// (0x0005d059) aid_main_viewer_pane_g4_ParamLimits

0x3572,	// (0x0005d059) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00068fa4) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00068fa4) aid_main_viewer_pane_g

0x3e78,	// (0x0005d95f) main_calc_pane_ParamLimits

0x3e8c,	// (0x0005d973) main_dialer2_pane_ParamLimits

0x0df9,	// (0x0005a8e0) main_cam6_pane

0x0df9,	// (0x0005a8e0) main_vid6_pane

0x55a7,	// (0x0005f08e) listscroll_gen_pane_cp06_ParamLimits

0x55a7,	// (0x0005f08e) listscroll_gen_pane_cp06

0x56ad,	// (0x0005f194) main_clock2_pane_t5_ParamLimits

0x56ad,	// (0x0005f194) main_clock2_pane_t5

0x5704,	// (0x0005f1eb) aid_call2_pane_cp10_ParamLimits

0x5716,	// (0x0005f1fd) aid_call_pane_cp10_ParamLimits

0xad4b,	// (0x00064832) popup_clock_analogue_window_cp10_g1_ParamLimits

0xad4b,	// (0x00064832) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5728,	// (0x0005f20f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5728,	// (0x0005f20f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xad4b,	// (0x00064832) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6f2,	// (0x000691d9) popup_clock_analogue_window_cp10_g_ParamLimits

0x573a,	// (0x0005f221) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5f81,	// (0x0005fa68) cell_dialer2_keypad_pane_g2_ParamLimits

0x5f81,	// (0x0005fa68) cell_dialer2_keypad_pane_g2

0x0001,

0xf7b3,	// (0x0006929a) cell_dialer2_keypad_pane_g_ParamLimits

0xf7b3,	// (0x0006929a) cell_dialer2_keypad_pane_g

0x5f9d,	// (0x0005fa84) cell_dialer2_keypad_pane_t1

0x6cd0,	// (0x000607b7) main_cset_text2_pane_ParamLimits

0x6cd0,	// (0x000607b7) main_cset_text2_pane

0xba93,	// (0x0006557a) area_vitu2_query_pane_g1_ParamLimits

0x7588,	// (0x0006106f) area_vitu2_query_pane_g2_ParamLimits

0xf968,	// (0x0006944f) area_vitu2_query_pane_g_ParamLimits

0xbb17,	// (0x000655fe) area_vitu2_query_pane_t7_ParamLimits

0xbb17,	// (0x000655fe) area_vitu2_query_pane_t7

0x75e9,	// (0x000610d0) bg_button_pane_cp018_ParamLimits

0x75f7,	// (0x000610de) bg_button_pane_cp021_ParamLimits

0x7603,	// (0x000610ea) bg_button_pane_cp022_ParamLimits

0x7603,	// (0x000610ea) bg_vkb2_func_pane_cp08_ParamLimits

0x75e9,	// (0x000610d0) bg_vkb2_func_pane_cp06_ParamLimits

0x75f7,	// (0x000610de) bg_vkb2_func_pane_cp07_ParamLimits

0x7612,	// (0x000610f9) input_focus_pane_cp09_ParamLimits

0xd84c,	// (0x00067333) cam6_autofocus_pane_ParamLimits

0xd84c,	// (0x00067333) cam6_autofocus_pane

0x7af3,	// (0x000615da) cam6_image_uncrop_pane_ParamLimits

0x7af3,	// (0x000615da) cam6_image_uncrop_pane

0x7b02,	// (0x000615e9) cam6_indi_pane_ParamLimits

0x7b02,	// (0x000615e9) cam6_indi_pane

0x7b18,	// (0x000615ff) cam6_mode_pane_ParamLimits

0x7b18,	// (0x000615ff) cam6_mode_pane

0x7b2a,	// (0x00061611) cam6_timer_pane_ParamLimits

0x7b2a,	// (0x00061611) cam6_timer_pane

0x7b36,	// (0x0006161d) cam6_zoom_pane_ParamLimits

0x7b36,	// (0x0006161d) cam6_zoom_pane

0x7b42,	// (0x00061629) cam6_mode_pane_g1_ParamLimits

0x7b42,	// (0x00061629) cam6_mode_pane_g1

0x7b52,	// (0x00061639) cam6_mode_pane_g2_ParamLimits

0x7b52,	// (0x00061639) cam6_mode_pane_g2

0x7b62,	// (0x00061649) cam6_mode_pane_g3_ParamLimits

0x7b62,	// (0x00061649) cam6_mode_pane_g3

0x7b72,	// (0x00061659) cam6_mode_pane_g4_ParamLimits

0x7b72,	// (0x00061659) cam6_mode_pane_g4

0x0003,

0xfa50,	// (0x00069537) cam6_mode_pane_g_ParamLimits

0xfa50,	// (0x00069537) cam6_mode_pane_g

0xbd7b,	// (0x00065862) bg_tb_trans_pane_cp08_ParamLimits

0xbd7b,	// (0x00065862) bg_tb_trans_pane_cp08

0xbd89,	// (0x00065870) cam6_battery_pane_ParamLimits

0xbd89,	// (0x00065870) cam6_battery_pane

0xbd9f,	// (0x00065886) cam6_indi_pane_g1_ParamLimits

0xbd9f,	// (0x00065886) cam6_indi_pane_g1

0xbdb1,	// (0x00065898) cam6_indi_pane_g2_ParamLimits

0xbdb1,	// (0x00065898) cam6_indi_pane_g2

0xbdc3,	// (0x000658aa) cam6_indi_pane_g3_ParamLimits

0xbdc3,	// (0x000658aa) cam6_indi_pane_g3

0x0002,

0xfa59,	// (0x00069540) cam6_indi_pane_g_ParamLimits

0xfa59,	// (0x00069540) cam6_indi_pane_g

0xbdd5,	// (0x000658bc) cam6_indi_pane_t1_ParamLimits

0xbdd5,	// (0x000658bc) cam6_indi_pane_t1

0x7b82,	// (0x00061669) cam6_autofocus_pane_g1

0x7b8a,	// (0x00061671) cam6_autofocus_pane_g2

0x7b92,	// (0x00061679) cam6_autofocus_pane_g3

0x7b9a,	// (0x00061681) cam6_autofocus_pane_g4

0x0003,

0xfa60,	// (0x00069547) cam6_autofocus_pane_g

0xbdfb,	// (0x000658e2) cam6_timer_pane_g1

0xbe03,	// (0x000658ea) cam6_timer_pane_t1

0xbe11,	// (0x000658f8) cam6_zoom_cont_pane

0xbe19,	// (0x00065900) cam6_zoom_pane_g1

0xbe21,	// (0x00065908) cam6_zoom_pane_g2

0x7ba2,	// (0x00061689) cam6_zoom_pane_g3

0x0002,

0xfa69,	// (0x00069550) cam6_zoom_pane_g

0xe9c8,	// (0x000684af) cam6_battery_pane_g1

0xe9c8,	// (0x000684af) cam6_battery_pane_g2

0x0001,

0x049e,	// (0x00059f85) cam6_battery_pane_g

0xbe29,	// (0x00065910) cam6_zoom_cont_pane_g1

0xbe32,	// (0x00065919) cam6_zoom_cont_pane_g2

0xbe3b,	// (0x00065922) cam6_zoom_cont_pane_g3

0x0002,

0xfa70,	// (0x00069557) cam6_zoom_cont_pane_g

0x7bbf,	// (0x000616a6) cam6_mode_pane_cp_ParamLimits

0x7bbf,	// (0x000616a6) cam6_mode_pane_cp

0x7bd1,	// (0x000616b8) cam6_zoom_pane_cp_ParamLimits

0x7bd1,	// (0x000616b8) cam6_zoom_pane_cp

0x7bdd,	// (0x000616c4) vid6_image_uncrop_cif_pane_ParamLimits

0x7bdd,	// (0x000616c4) vid6_image_uncrop_cif_pane

0x7bed,	// (0x000616d4) vid6_image_uncrop_nhd_pane_ParamLimits

0x7bed,	// (0x000616d4) vid6_image_uncrop_nhd_pane

0x7bfc,	// (0x000616e3) vid6_image_uncrop_vga_pane_ParamLimits

0x7bfc,	// (0x000616e3) vid6_image_uncrop_vga_pane

0x7c0b,	// (0x000616f2) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c0b,	// (0x000616f2) vid6_image_uncrop_wvga_pane

0x7c1a,	// (0x00061701) vid6_indi_pane_ParamLimits

0x7c1a,	// (0x00061701) vid6_indi_pane

0xbd7b,	// (0x00065862) bg_tb_trans_pane_cp09_ParamLimits

0xbd7b,	// (0x00065862) bg_tb_trans_pane_cp09

0xbe53,	// (0x0006593a) cam6_battery_pane_cp_ParamLimits

0xbe53,	// (0x0006593a) cam6_battery_pane_cp

0xbe5f,	// (0x00065946) vid6_indi_pane_g1_ParamLimits

0xbe5f,	// (0x00065946) vid6_indi_pane_g1

0xbe71,	// (0x00065958) vid6_indi_pane_g2_ParamLimits

0xbe71,	// (0x00065958) vid6_indi_pane_g2

0xbe83,	// (0x0006596a) vid6_indi_pane_g3_ParamLimits

0xbe83,	// (0x0006596a) vid6_indi_pane_g3

0xbe98,	// (0x0006597f) vid6_indi_pane_g4_ParamLimits

0xbe98,	// (0x0006597f) vid6_indi_pane_g4

0xbead,	// (0x00065994) vid6_indi_pane_g5_ParamLimits

0xbead,	// (0x00065994) vid6_indi_pane_g5

0x0004,

0xfa77,	// (0x0006955e) vid6_indi_pane_g_ParamLimits

0xfa77,	// (0x0006955e) vid6_indi_pane_g

0xbec7,	// (0x000659ae) vid6_indi_pane_t1_ParamLimits

0xbec7,	// (0x000659ae) vid6_indi_pane_t1

0xbedd,	// (0x000659c4) vid6_indi_pane_t2_ParamLimits

0xbedd,	// (0x000659c4) vid6_indi_pane_t2

0xbf05,	// (0x000659ec) vid6_indi_pane_t3_ParamLimits

0xbf05,	// (0x000659ec) vid6_indi_pane_t3

0xbf2d,	// (0x00065a14) vid6_indi_pane_t4_ParamLimits

0xbf2d,	// (0x00065a14) vid6_indi_pane_t4

0x0003,

0xfa82,	// (0x00069569) vid6_indi_pane_t_ParamLimits

0xfa82,	// (0x00069569) vid6_indi_pane_t

0xbf51,	// (0x00065a38) wait_bar_pane_cp08

0x7c32,	// (0x00061719) main_cset_text2_pane_t1_ParamLimits

0x7c32,	// (0x00061719) main_cset_text2_pane_t1

0x7baa,	// (0x00061691) listscroll_gen_pane_cp06_t1_ParamLimits

0x7baa,	// (0x00061691) listscroll_gen_pane_cp06_t1

0x0df9,	// (0x0005a8e0) main_cam6_set_pane

0xd6a8,	// (0x0006718f) bg_tb_trans_pane_cp06_ParamLimits

0xd6be,	// (0x000671a5) cam4_indicators_pane_g1_ParamLimits

0xd6cf,	// (0x000671b6) cam4_indicators_pane_g2_ParamLimits

0xf7f0,	// (0x000692d7) cam4_indicators_pane_g_ParamLimits

0xd6ed,	// (0x000671d4) cam4_indicators_pane_t1_ParamLimits

0xd70f,	// (0x000671f6) bg_tb_trans_pane_cp07_ParamLimits

0x6626,	// (0x0006010d) vid4_indicators_pane_g1_ParamLimits

0x6633,	// (0x0006011a) vid4_indicators_pane_g2_ParamLimits

0x6640,	// (0x00060127) vid4_indicators_pane_g3_ParamLimits

0x664d,	// (0x00060134) vid4_indicators_pane_g4_ParamLimits

0xf802,	// (0x000692e9) vid4_indicators_pane_g_ParamLimits

0x6665,	// (0x0006014c) vid4_indicators_pane_t1_ParamLimits

0xd7bc,	// (0x000672a3) vid4_progress_pane_g1_ParamLimits

0xd7cc,	// (0x000672b3) vid4_progress_pane_g2_ParamLimits

0xa95f,	// (0x00064446) vid4_progress_pane_g3_ParamLimits

0xd7dc,	// (0x000672c3) vid4_progress_pane_g4_ParamLimits

0xf9b3,	// (0x0006949a) vid4_progress_pane_g_ParamLimits

0xd7fa,	// (0x000672e1) vid4_progress_pane_t1_ParamLimits

0xd80f,	// (0x000672f6) vid4_progress_pane_t2_ParamLimits

0xd825,	// (0x0006730c) vid4_progress_pane_t3_ParamLimits

0xf9be,	// (0x000694a5) vid4_progress_pane_t_ParamLimits

0xd83a,	// (0x00067321) wait_bar_pane_cp07_ParamLimits

0x7c4f,	// (0x00061736) main_cam6_set_pane_g2_ParamLimits

0x7c4f,	// (0x00061736) main_cam6_set_pane_g2

0x7c73,	// (0x0006175a) main_cset6_listscroll_pane_ParamLimits

0x7c73,	// (0x0006175a) main_cset6_listscroll_pane

0x7c93,	// (0x0006177a) main_cset6_slider_pane_ParamLimits

0x7c93,	// (0x0006177a) main_cset6_slider_pane

0x7ca9,	// (0x00061790) main_cset6_text2_pane_ParamLimits

0x7ca9,	// (0x00061790) main_cset6_text2_pane

0xbf60,	// (0x00065a47) main_cset6_text_pane

0xbf68,	// (0x00065a4f) main_cset_list_pane_copy1_ParamLimits

0xbf68,	// (0x00065a4f) main_cset_list_pane_copy1

0xbf78,	// (0x00065a5f) scroll_pane_cp028_copy1

0x7cb7,	// (0x0006179e) cset_list_set_pane_copy1

0x7cc8,	// (0x000617af) aid_position_infowindow_above_copy1

0x7cd0,	// (0x000617b7) aid_position_infowindow_below_copy1

0x7cd8,	// (0x000617bf) cset_list_set_pane_g1_copy1

0x7ce0,	// (0x000617c7) cset_list_set_pane_g3_copy1_ParamLimits

0x7ce0,	// (0x000617c7) cset_list_set_pane_g3_copy1

0x7cef,	// (0x000617d6) cset_list_set_pane_t1_copy1_ParamLimits

0x7cef,	// (0x000617d6) cset_list_set_pane_t1_copy1

0x9a43,	// (0x0006352a) list_highlight_pane_cp021_copy1_ParamLimits

0x9a43,	// (0x0006352a) list_highlight_pane_cp021_copy1

0xbf81,	// (0x00065a68) cset6_slider_pane_ParamLimits

0xbf81,	// (0x00065a68) cset6_slider_pane

0xbfad,	// (0x00065a94) main_cset6_slider_pane_g1_ParamLimits

0xbfad,	// (0x00065a94) main_cset6_slider_pane_g1

0x7d04,	// (0x000617eb) main_cset6_slider_pane_g2_ParamLimits

0x7d04,	// (0x000617eb) main_cset6_slider_pane_g2

0xbfd5,	// (0x00065abc) main_cset6_slider_pane_g3_ParamLimits

0xbfd5,	// (0x00065abc) main_cset6_slider_pane_g3

0x7d2c,	// (0x00061813) main_cset6_slider_pane_g4_ParamLimits

0x7d2c,	// (0x00061813) main_cset6_slider_pane_g4

0x7d38,	// (0x0006181f) main_cset6_slider_pane_g5_ParamLimits

0x7d38,	// (0x0006181f) main_cset6_slider_pane_g5

0xb734,	// (0x0006521b) main_cset6_slider_pane_g7_ParamLimits

0xb734,	// (0x0006521b) main_cset6_slider_pane_g7

0xb740,	// (0x00065227) main_cset6_slider_pane_g8_ParamLimits

0xb740,	// (0x00065227) main_cset6_slider_pane_g8

0x6d7d,	// (0x00060864) main_cset6_slider_pane_g9_ParamLimits

0x6d7d,	// (0x00060864) main_cset6_slider_pane_g9

0x6d89,	// (0x00060870) main_cset6_slider_pane_g10_ParamLimits

0x6d89,	// (0x00060870) main_cset6_slider_pane_g10

0x6d95,	// (0x0006087c) main_cset6_slider_pane_g11_ParamLimits

0x6d95,	// (0x0006087c) main_cset6_slider_pane_g11

0x6da1,	// (0x00060888) main_cset6_slider_pane_g12_ParamLimits

0x6da1,	// (0x00060888) main_cset6_slider_pane_g12

0x6dad,	// (0x00060894) main_cset6_slider_pane_g13_ParamLimits

0x6dad,	// (0x00060894) main_cset6_slider_pane_g13

0x6db9,	// (0x000608a0) main_cset6_slider_pane_g14_ParamLimits

0x6db9,	// (0x000608a0) main_cset6_slider_pane_g14

0x7d44,	// (0x0006182b) main_cset6_slider_pane_g15_ParamLimits

0x7d44,	// (0x0006182b) main_cset6_slider_pane_g15

0x6ddd,	// (0x000608c4) main_cset6_slider_pane_g16_ParamLimits

0x6ddd,	// (0x000608c4) main_cset6_slider_pane_g16

0x6de9,	// (0x000608d0) main_cset6_slider_pane_g17_ParamLimits

0x6de9,	// (0x000608d0) main_cset6_slider_pane_g17

0x0011,

0xfa8b,	// (0x00069572) main_cset6_slider_pane_g_ParamLimits

0xfa8b,	// (0x00069572) main_cset6_slider_pane_g

0xbfe1,	// (0x00065ac8) main_cset6_slider_pane_t1_ParamLimits

0xbfe1,	// (0x00065ac8) main_cset6_slider_pane_t1

0x7d74,	// (0x0006185b) main_cset6_slider_pane_t2_ParamLimits

0x7d74,	// (0x0006185b) main_cset6_slider_pane_t2

0x7d9f,	// (0x00061886) main_cset6_slider_pane_t3_ParamLimits

0x7d9f,	// (0x00061886) main_cset6_slider_pane_t3

0x7dca,	// (0x000618b1) main_cset6_slider_pane_t4_ParamLimits

0x7dca,	// (0x000618b1) main_cset6_slider_pane_t4

0x7df5,	// (0x000618dc) main_cset6_slider_pane_t5_ParamLimits

0x7df5,	// (0x000618dc) main_cset6_slider_pane_t5

0xc022,	// (0x00065b09) main_cset6_slider_pane_t7_ParamLimits

0xc022,	// (0x00065b09) main_cset6_slider_pane_t7

0x7e20,	// (0x00061907) main_cset6_slider_pane_t8_ParamLimits

0x7e20,	// (0x00061907) main_cset6_slider_pane_t8

0x7e44,	// (0x0006192b) main_cset6_slider_pane_t9_ParamLimits

0x7e44,	// (0x0006192b) main_cset6_slider_pane_t9

0x7e68,	// (0x0006194f) main_cset6_slider_pane_t10_ParamLimits

0x7e68,	// (0x0006194f) main_cset6_slider_pane_t10

0x7e8c,	// (0x00061973) main_cset6_slider_pane_t11_ParamLimits

0x7e8c,	// (0x00061973) main_cset6_slider_pane_t11

0xc058,	// (0x00065b3f) main_cset6_slider_pane_t14_ParamLimits

0xc058,	// (0x00065b3f) main_cset6_slider_pane_t14

0xc091,	// (0x00065b78) main_cset6_slider_pane_t15_ParamLimits

0xc091,	// (0x00065b78) main_cset6_slider_pane_t15

0x000b,

0xfab0,	// (0x00069597) main_cset6_slider_pane_t_ParamLimits

0xfab0,	// (0x00069597) main_cset6_slider_pane_t

0xc0ca,	// (0x00065bb1) cset_slider_pane_g1_copy1

0xc0d3,	// (0x00065bba) cset_slider_pane_g2_copy1

0xc0dc,	// (0x00065bc3) cset_slider_pane_g3_copy1

0x0df9,	// (0x0005a8e0) bg_popup_sub_pane_cp011_copy1

0xb8b3,	// (0x0006539a) main_cset_text_pane_g1_copy1

0xb8bb,	// (0x000653a2) main_cset_text_pane_t1_copy1

0xb8c9,	// (0x000653b0) main_cset_text_pane_t2_copy1

0xb8d7,	// (0x000653be) main_cset_text_pane_t3_copy1

0xb8e5,	// (0x000653cc) main_cset_text_pane_t4_copy1

0xb8f3,	// (0x000653da) main_cset_text_pane_t5_copy1

0xb901,	// (0x000653e8) main_cset_text_pane_t6_copy1

0xb90f,	// (0x000653f6) main_cset_text_pane_t7_copy1

0x7eb0,	// (0x00061997) main_cset_text2_pane_t1_copy1

0x0df9,	// (0x0005a8e0) main_ncimui_pane

0x40ce,	// (0x0005dbb5) popup_query_ncimui_window_ParamLimits

0x40ce,	// (0x0005dbb5) popup_query_ncimui_window

0x4dd7,	// (0x0005e8be) field_cale_ev2_pane_g4_ParamLimits

0x4dd7,	// (0x0005e8be) field_cale_ev2_pane_g4

0x5ddd,	// (0x0005f8c4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ddd,	// (0x0005f8c4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf78e,	// (0x00069275) cell_video_dialer_keypad_pane_g_ParamLimits

0xf78e,	// (0x00069275) cell_video_dialer_keypad_pane_g

0x5df5,	// (0x0005f8dc) cell_video_dialer_keypad_pane_t1

0x0df9,	// (0x0005a8e0) bg_popup_window_pane_cp012

0xabaa,	// (0x00064691) heading_pane_cp06

0xc1d4,	// (0x00065cbb) ncim_query_content_pane

0x0df9,	// (0x0005a8e0) bg_popup_heading_pane_cp01

0xc1dc,	// (0x00065cc3) ncim_heading_pane_t1

0xc1ea,	// (0x00065cd1) ncim_indicator_popup_pane

0xc1fc,	// (0x00065ce3) ncim_query_button_pane

0xc210,	// (0x00065cf7) ncim_query_content_pane_t1

0xc222,	// (0x00065d09) ncim_query_content_pane_t2

0x0005,

0xfaef,	// (0x000695d6) ncim_query_content_pane_t

0xc25c,	// (0x00065d43) ncim_query_list_pane

0xc26e,	// (0x00065d55) ncim_query_popup_pane

0xc1ea,	// (0x00065cd1) ncim_indicator_popup_pane_ParamLimits

0x7fc5,	// (0x00061aac) ncim_query_content_pane_g1_ParamLimits

0x7fc5,	// (0x00061aac) ncim_query_content_pane_g1

0xc210,	// (0x00065cf7) ncim_query_content_pane_t1_ParamLimits

0xc222,	// (0x00065d09) ncim_query_content_pane_t2_ParamLimits

0x7fd1,	// (0x00061ab8) ncim_query_content_pane_t3_ParamLimits

0x7fd1,	// (0x00061ab8) ncim_query_content_pane_t3

0x7ff9,	// (0x00061ae0) ncim_query_content_pane_t4_ParamLimits

0x7ff9,	// (0x00061ae0) ncim_query_content_pane_t4

0x8021,	// (0x00061b08) ncim_query_content_pane_t5_ParamLimits

0x8021,	// (0x00061b08) ncim_query_content_pane_t5

0xc234,	// (0x00065d1b) ncim_query_content_pane_t6_ParamLimits

0xc234,	// (0x00065d1b) ncim_query_content_pane_t6

0xfaef,	// (0x000695d6) ncim_query_content_pane_t_ParamLimits

0xc25c,	// (0x00065d43) ncim_query_list_pane_ParamLimits

0xc26e,	// (0x00065d55) ncim_query_popup_pane_ParamLimits

0xc282,	// (0x00065d69) wait_bar_pane_cp04

0x0df9,	// (0x0005a8e0) input_focus_pane_cp011

0xc28a,	// (0x00065d71) ncim_query_popup_pane_t1

0xc298,	// (0x00065d7f) ncim_list_query_list_pane_ParamLimits

0xc298,	// (0x00065d7f) ncim_list_query_list_pane

0x0df9,	// (0x0005a8e0) bg_button_pane_cp027

0xc2a5,	// (0x00065d8c) ncim_query_button_pane_g1

0x0df9,	// (0x0005a8e0) list_highlight_pane_cp012

0xc2af,	// (0x00065d96) ncim_list_query_list_pane_g1

0xc2b7,	// (0x00065d9e) ncim_list_query_list_pane_t1

0xd6de,	// (0x000671c5) cam4_indicators_pane_g3_ParamLimits

0xd6de,	// (0x000671c5) cam4_indicators_pane_g3

0x6659,	// (0x00060140) vid4_indicators_pane_g5_ParamLimits

0x6659,	// (0x00060140) vid4_indicators_pane_g5

0xd7eb,	// (0x000672d2) vid4_progress_pane_g5_ParamLimits

0xd7eb,	// (0x000672d2) vid4_progress_pane_g5

0x7ede,	// (0x000619c5) main_ncimui_pane_g1

0x7f34,	// (0x00061a1b) ncimui_group_query_pane_ParamLimits

0x7f34,	// (0x00061a1b) ncimui_group_query_pane

0x7f70,	// (0x00061a57) ncimui_list_pane_ParamLimits

0x7f70,	// (0x00061a57) ncimui_list_pane

0x7f91,	// (0x00061a78) ncimui_text_pane_ParamLimits

0x7f91,	// (0x00061a78) ncimui_text_pane

0x8049,	// (0x00061b30) ncimui_text_pane_t1_ParamLimits

0x8049,	// (0x00061b30) ncimui_text_pane_t1

0xc2c5,	// (0x00065dac) ncimui_list_single_graphic_pane_ParamLimits

0xc2c5,	// (0x00065dac) ncimui_list_single_graphic_pane

0x8067,	// (0x00061b4e) ncimui_query_pane_ParamLimits

0x8067,	// (0x00061b4e) ncimui_query_pane

0x0df9,	// (0x0005a8e0) list_highlight_pane_cp013

0xc2d5,	// (0x00065dbc) ncim_list_query_list_pane_t1_copy1

0xc2af,	// (0x00065d96) ncim_list_single_graphic_pane_g1

0xc2e3,	// (0x00065dca) ncim_query_button_pane_cp01

0xc2ef,	// (0x00065dd6) ncim_query_entry_pane_ParamLimits

0xc2ef,	// (0x00065dd6) ncim_query_entry_pane

0xc302,	// (0x00065de9) ncimui_query_pane_g1

0xc30e,	// (0x00065df5) ncimui_query_pane_t1_ParamLimits

0xc30e,	// (0x00065df5) ncimui_query_pane_t1

0x9a43,	// (0x0006352a) input_focus_pane_cp012

0xc327,	// (0x00065e0e) ncim_query_entry_pane_t1

0xa1c2,	// (0x00063ca9) main_im_pane_ParamLimits

0x9a43,	// (0x0006352a) main_mobtv_pane_ParamLimits

0x9a43,	// (0x0006352a) main_mobtv_pane

0x7d5c,	// (0x00061843) main_cset6_slider_pane_g18_ParamLimits

0x7d5c,	// (0x00061843) main_cset6_slider_pane_g18

0x7d68,	// (0x0006184f) main_cset6_slider_pane_g19_ParamLimits

0x7d68,	// (0x0006184f) main_cset6_slider_pane_g19

0xc339,	// (0x00065e20) bg_main_mobtv_pane_ParamLimits

0xc339,	// (0x00065e20) bg_main_mobtv_pane

0x807a,	// (0x00061b61) main_mobtv_info_pane

0x8083,	// (0x00061b6a) main_mobtv_loading_pane_ParamLimits

0x8083,	// (0x00061b6a) main_mobtv_loading_pane

0xc347,	// (0x00065e2e) main_mobtv_pg_channel_list_pane

0xc351,	// (0x00065e38) main_mobtv_pg_hdr_pane

0x8090,	// (0x00061b77) main_mobtv_programe_curr_pane_ParamLimits

0x8090,	// (0x00061b77) main_mobtv_programe_curr_pane

0x809d,	// (0x00061b84) main_mobtv_programe_next_pane_ParamLimits

0x809d,	// (0x00061b84) main_mobtv_programe_next_pane

0xc35a,	// (0x00065e41) popup_mobtv_noti_window

0xe9c8,	// (0x000684af) main_tv_pg_hdr_pane_g1

0xc362,	// (0x00065e49) main_tv_pg_hdr_pane_g2

0xc36a,	// (0x00065e51) main_tv_pg_hdr_pane_g3

0xc372,	// (0x00065e59) main_tv_pg_hdr_pane_g4

0xc37a,	// (0x00065e61) main_tv_pg_hdr_pane_g5

0xc384,	// (0x00065e6b) main_tv_pg_hdr_pane_g6

0xc38e,	// (0x00065e75) main_tv_pg_hdr_pane_g7

0xc398,	// (0x00065e7f) main_tv_pg_hdr_pane_g8

0xc3a2,	// (0x00065e89) main_tv_pg_hdr_pane_g9

0xc3ac,	// (0x00065e93) main_tv_pg_hdr_pane_g10

0xc3b6,	// (0x00065e9d) main_tv_pg_hdr_pane_g11

0x000a,

0xfafc,	// (0x000695e3) main_tv_pg_hdr_pane_g

0xc3c0,	// (0x00065ea7) main_tv_pg_hdr_pane_t1

0xc3ce,	// (0x00065eb5) main_tv_pg_hdr_pane_t2

0xc3dc,	// (0x00065ec3) main_tv_pg_hdr_pane_t3

0xc3ec,	// (0x00065ed3) main_tv_pg_hdr_pane_t4

0xc3fc,	// (0x00065ee3) main_tv_pg_hdr_pane_t5

0x0004,

0xfb13,	// (0x000695fa) main_tv_pg_hdr_pane_t

0xc40c,	// (0x00065ef3) single_mobtv_pg_channel_pane_ParamLimits

0xc40c,	// (0x00065ef3) single_mobtv_pg_channel_pane

0xc41e,	// (0x00065f05) single_mobtv_pg_channel_table_pane

0xc427,	// (0x00065f0e) single_mobtv_pg_channel_thumb_pane

0xc430,	// (0x00065f17) single_tv_pg_channel_pane_g1

0xc439,	// (0x00065f20) single_tv_pg_channel_pane_g2

0x0001,

0xfb1e,	// (0x00069605) single_tv_pg_channel_pane_g

0xec2b,	// (0x00068712) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xec2b,	// (0x00068712) bg_single_mobtv_pg_channel_thumb_pane

0xc442,	// (0x00065f29) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc442,	// (0x00065f29) single_mobtv_pg_channel_thumb_pane_g1

0xc450,	// (0x00065f37) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc450,	// (0x00065f37) single_mobtv_pg_channel_thumb_pane_g2

0xc45c,	// (0x00065f43) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc45c,	// (0x00065f43) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb23,	// (0x0006960a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb23,	// (0x0006960a) single_mobtv_pg_channel_thumb_pane_g

0xc468,	// (0x00065f4f) single_mobtv_pg_channel_thumb_pane_t1

0xc476,	// (0x00065f5d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb2a,	// (0x00069611) single_mobtv_pg_channel_thumb_pane_t

0xe9c8,	// (0x000684af) bg_single_mobtv_pg_channel_table_pane_g1

0xe9c8,	// (0x000684af) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x049e,	// (0x00059f85) bg_single_mobtv_pg_channel_table_pane_g

0xc484,	// (0x00065f6b) single_mobtv_pg_channel_table_pane_t1

0xc492,	// (0x00065f79) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb2f,	// (0x00069616) single_mobtv_pg_channel_table_pane_t

0x80b2,	// (0x00061b99) main_mobtv_info_pane_g1_ParamLimits

0x80b2,	// (0x00061b99) main_mobtv_info_pane_g1

0x80d0,	// (0x00061bb7) main_mobtv_info_pane_t1_ParamLimits

0x80d0,	// (0x00061bb7) main_mobtv_info_pane_t1

0x8148,	// (0x00061c2f) main_mobtv_info_pane_t2_ParamLimits

0x8148,	// (0x00061c2f) main_mobtv_info_pane_t2

0x0002,

0xfb39,	// (0x00069620) main_mobtv_info_pane_t_ParamLimits

0xfb39,	// (0x00069620) main_mobtv_info_pane_t

0x81d7,	// (0x00061cbe) wait_bar_pane_cp05

0x81e9,	// (0x00061cd0) main_mobtv_loading_pane_g1_ParamLimits

0x81e9,	// (0x00061cd0) main_mobtv_loading_pane_g1

0x81fc,	// (0x00061ce3) main_mobtv_loading_pane_g2_ParamLimits

0x81fc,	// (0x00061ce3) main_mobtv_loading_pane_g2

0x8208,	// (0x00061cef) main_mobtv_loading_pane_g3_ParamLimits

0x8208,	// (0x00061cef) main_mobtv_loading_pane_g3

0x0002,

0xfb40,	// (0x00069627) main_mobtv_loading_pane_g_ParamLimits

0xfb40,	// (0x00069627) main_mobtv_loading_pane_g

0xc4a0,	// (0x00065f87) main_mobtv_loading_pane_t1_ParamLimits

0xc4a0,	// (0x00065f87) main_mobtv_loading_pane_t1

0xc4b8,	// (0x00065f9f) main_mobtv_loading_pane_t2_ParamLimits

0xc4b8,	// (0x00065f9f) main_mobtv_loading_pane_t2

0x0001,

0xfb47,	// (0x0006962e) main_mobtv_loading_pane_t_ParamLimits

0xfb47,	// (0x0006962e) main_mobtv_loading_pane_t

0x821b,	// (0x00061d02) wait_bar_pane_cp06_ParamLimits

0x821b,	// (0x00061d02) wait_bar_pane_cp06

0xc4dc,	// (0x00065fc3) main_mobtv_programe_curr_pane_t1

0xc4ea,	// (0x00065fd1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb4c,	// (0x00069633) main_mobtv_programe_curr_pane_t

0xc4f8,	// (0x00065fdf) main_mobtv_programe_next_pane_t1

0xc506,	// (0x00065fed) main_mobtv_programe_next_pane_t2

0xc514,	// (0x00065ffb) main_mobtv_programe_next_pane_t3

0x0002,

0xfb51,	// (0x00069638) main_mobtv_programe_next_pane_t

0x0df9,	// (0x0005a8e0) bg_popup_mobtv_noti_window_pane

0xc522,	// (0x00066009) popup_mobtv_noti_window_g1

0xc52a,	// (0x00066011) popup_mobtv_noti_window_t1

0xc538,	// (0x0006601f) popup_mobtv_noti_window_t2

0x0001,

0xfb58,	// (0x0006963f) popup_mobtv_noti_window_t

0xe9c8,	// (0x000684af) bg_popup_mobtv_noti_window_pane_g1

0x0df9,	// (0x0005a8e0) sc_clock_pane

0x0df9,	// (0x0005a8e0) main_fs_bigclock_pane

0x7968,	// (0x0006144f) blid2_tripm_pane_t4_ParamLimits

0x7968,	// (0x0006144f) blid2_tripm_pane_t4

0x822a,	// (0x00061d11) sc_clock_pane_g1_ParamLimits

0x822a,	// (0x00061d11) sc_clock_pane_g1

0x823c,	// (0x00061d23) sc_clock_pane_t1_ParamLimits

0x823c,	// (0x00061d23) sc_clock_pane_t1

0x825e,	// (0x00061d45) sc_clock_pane_t2_ParamLimits

0x825e,	// (0x00061d45) sc_clock_pane_t2

0x8276,	// (0x00061d5d) sc_clock_pane_t3_ParamLimits

0x8276,	// (0x00061d5d) sc_clock_pane_t3

0x0004,

0xfb5d,	// (0x00069644) sc_clock_pane_t_ParamLimits

0xfb5d,	// (0x00069644) sc_clock_pane_t

0x917a,	// (0x00062c61) main_fs_bigclock_indicator_pane_ParamLimits

0x917a,	// (0x00062c61) main_fs_bigclock_indicator_pane

0xebfb,	// (0x000686e2) main_fs_bigclock_pane_g1_ParamLimits

0xebfb,	// (0x000686e2) main_fs_bigclock_pane_g1

0x9186,	// (0x00062c6d) main_fs_bigclock_pane_t1_ParamLimits

0x9186,	// (0x00062c6d) main_fs_bigclock_pane_t1

0x9198,	// (0x00062c7f) main_fs_bigclock_pane_t2_ParamLimits

0x9198,	// (0x00062c7f) main_fs_bigclock_pane_t2

0x91ac,	// (0x00062c93) main_fs_bigclock_pane_t3_ParamLimits

0x91ac,	// (0x00062c93) main_fs_bigclock_pane_t3

0x0002,

0xfd5c,	// (0x00069843) main_fs_bigclock_pane_t_ParamLimits

0xfd5c,	// (0x00069843) main_fs_bigclock_pane_t

0xcfed,	// (0x00066ad4) main_fs_bigclock_indicator_pane_g1

0xc204,	// (0x00065ceb) ncim_query_content_pane_g2_ParamLimits

0xc204,	// (0x00065ceb) ncim_query_content_pane_g2

0x0001,

0xfaea,	// (0x000695d1) ncim_query_content_pane_g_ParamLimits

0xfaea,	// (0x000695d1) ncim_query_content_pane_g

0x828f,	// (0x00061d76) sc_clock_pane_t4_ParamLimits

0x828f,	// (0x00061d76) sc_clock_pane_t4

0x9a43,	// (0x0006352a) main_radioblah_pane

0x63ae,	// (0x0005fe95) cell_call4_button_pane_t1_copy1_ParamLimits

0x63ae,	// (0x0005fe95) cell_call4_button_pane_t1_copy1

0x7ee6,	// (0x000619cd) main_ncimui_pane_t1_ParamLimits

0x7ee6,	// (0x000619cd) main_ncimui_pane_t1

0x7f00,	// (0x000619e7) main_ncimui_pane_t2_ParamLimits

0x7f00,	// (0x000619e7) main_ncimui_pane_t2

0x0002,

0xfae3,	// (0x000695ca) main_ncimui_pane_t_ParamLimits

0xfae3,	// (0x000695ca) main_ncimui_pane_t

0xc546,	// (0x0006602d) main_radioblah_anim_pane_ParamLimits

0xc546,	// (0x0006602d) main_radioblah_anim_pane

0xc557,	// (0x0006603e) main_radioblah_info_pane_ParamLimits

0xc557,	// (0x0006603e) main_radioblah_info_pane

0xc56b,	// (0x00066052) main_radioblah_pane_t1_ParamLimits

0xc56b,	// (0x00066052) main_radioblah_pane_t1

0xc587,	// (0x0006606e) main_radioblah_pane_t2_ParamLimits

0xc587,	// (0x0006606e) main_radioblah_pane_t2

0x0003,

0xfb7e,	// (0x00069665) main_radioblah_pane_t_ParamLimits

0xfb7e,	// (0x00069665) main_radioblah_pane_t

0x845b,	// (0x00061f42) main_radioblah_rocker_ctrl_pane_ParamLimits

0x845b,	// (0x00061f42) main_radioblah_rocker_ctrl_pane

0xc5cf,	// (0x000660b6) main_radioblah_info_pane_t1_ParamLimits

0xc5cf,	// (0x000660b6) main_radioblah_info_pane_t1

0x84b3,	// (0x00061f9a) main_radioblah_info_pane_t2_ParamLimits

0x84b3,	// (0x00061f9a) main_radioblah_info_pane_t2

0x0003,

0xfb87,	// (0x0006966e) main_radioblah_info_pane_t_ParamLimits

0xfb87,	// (0x0006966e) main_radioblah_info_pane_t

0xe9c8,	// (0x000684af) main_radioblah_rocker_ctrl_pane_g1

0x8563,	// (0x0006204a) main_radioblah_rocker_ctrl_pane_g2

0x856b,	// (0x00062052) main_radioblah_rocker_ctrl_pane_g3

0x8573,	// (0x0006205a) main_radioblah_rocker_ctrl_pane_g4

0x857b,	// (0x00062062) main_radioblah_rocker_ctrl_pane_g5

0x8583,	// (0x0006206a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb90,	// (0x00069677) main_radioblah_rocker_ctrl_pane_g

0x7eb0,	// (0x00061997) main_cset_text2_pane_t1_copy1_ParamLimits

0xd6a0,	// (0x00067187) cam4_image_uncrop_qvga_pane

0xd707,	// (0x000671ee) vid4_image_uncrop_qcif_pane

0xd84c,	// (0x00067333) cam6_image_uncrop_qvga_pane_ParamLimits

0xd84c,	// (0x00067333) cam6_image_uncrop_qvga_pane

0xbe43,	// (0x0006592a) vid6_image_uncrop_qcif_pane_ParamLimits

0xbe43,	// (0x0006592a) vid6_image_uncrop_qcif_pane

0x0df9,	// (0x0005a8e0) bg_popup_preview_window_pane_cp03

0xc1b6,	// (0x00065c9d) list_cset_text2_pane

0xc1be,	// (0x00065ca5) main_cset6_text2_pane_g1

0xc1c6,	// (0x00065cad) main_cset6_text2_pane_t1

0x858b,	// (0x00062072) list_cset_text2_pane_t1_ParamLimits

0x858b,	// (0x00062072) list_cset_text2_pane_t1

0x9a43,	// (0x0006352a) main_radioblah_pane_ParamLimits

0x81c3,	// (0x00061caa) main_mobtv_info_pane_t3_ParamLimits

0x81c3,	// (0x00061caa) main_mobtv_info_pane_t3

0x8449,	// (0x00061f30) main_radioblah_pane_g1

0x8483,	// (0x00061f6a) main_radioblah_info_pane_g1

0x8508,	// (0x00061fef) main_radioblah_info_pane_t3_ParamLimits

0x8508,	// (0x00061fef) main_radioblah_info_pane_t3

0x2a37,	// (0x0005c51e) highlight_cell_cale_month_pane_ParamLimits

0x2a37,	// (0x0005c51e) highlight_cell_cale_month_pane

0x0df9,	// (0x0005a8e0) main_phob_fisheye_pane

0xed0d,	// (0x000687f4) scroll_pane_cp0031_ParamLimits

0xed0d,	// (0x000687f4) scroll_pane_cp0031

0xbf51,	// (0x00065a38) wait_bar_pane_cp08_ParamLimits

0x7cb7,	// (0x0006179e) cset_list_set_pane_copy1_ParamLimits

0xc609,	// (0x000660f0) highlight_cell_cale_month_pane_g1

0x85a4,	// (0x0006208b) highlight_cell_cale_month_pane_t1

0xbb83,	// (0x0006566a) list_gen_pane_cp01

0xb71f,	// (0x00065206) scroll_pane_01

0xc611,	// (0x000660f8) list_single_double_fisheye_pane

0x85b2,	// (0x00062099) list_double_fisheye_pane_g1_ParamLimits

0x85b2,	// (0x00062099) list_double_fisheye_pane_g1

0x85be,	// (0x000620a5) list_double_fisheye_pane_g2_ParamLimits

0x85be,	// (0x000620a5) list_double_fisheye_pane_g2

0x85d2,	// (0x000620b9) list_double_fisheye_pane_g3_ParamLimits

0x85d2,	// (0x000620b9) list_double_fisheye_pane_g3

0x0004,

0xfb9d,	// (0x00069684) list_double_fisheye_pane_g_ParamLimits

0xfb9d,	// (0x00069684) list_double_fisheye_pane_g

0x85fb,	// (0x000620e2) list_double_fisheye_pane_t1_ParamLimits

0x85fb,	// (0x000620e2) list_double_fisheye_pane_t1

0x8616,	// (0x000620fd) list_double_fisheye_pane_t2_ParamLimits

0x8616,	// (0x000620fd) list_double_fisheye_pane_t2

0x0001,

0xfba8,	// (0x0006968f) list_double_fisheye_pane_t_ParamLimits

0xfba8,	// (0x0006968f) list_double_fisheye_pane_t

0x0df9,	// (0x0005a8e0) main_call5_pane

0x82ba,	// (0x00061da1) sc_swipe_pane_ParamLimits

0x82ba,	// (0x00061da1) sc_swipe_pane

0x864b,	// (0x00062132) call5_image_pane_ParamLimits

0x864b,	// (0x00062132) call5_image_pane

0x8668,	// (0x0006214f) call5_swipe_1_pane_ParamLimits

0x8668,	// (0x0006214f) call5_swipe_1_pane

0x867b,	// (0x00062162) call5_swipe_2_pane_ParamLimits

0x867b,	// (0x00062162) call5_swipe_2_pane

0x86a6,	// (0x0006218d) popup_call5_audio_first_window_ParamLimits

0x86a6,	// (0x0006218d) popup_call5_audio_first_window

0xec2b,	// (0x00068712) call5_swipe_1_pane_g1_ParamLimits

0xec2b,	// (0x00068712) call5_swipe_1_pane_g1

0xc61a,	// (0x00066101) call5_swipe_1_pane_g2_ParamLimits

0xc61a,	// (0x00066101) call5_swipe_1_pane_g2

0x0001,

0xfbad,	// (0x00069694) call5_swipe_1_pane_g_ParamLimits

0xfbad,	// (0x00069694) call5_swipe_1_pane_g

0xc626,	// (0x0006610d) call5_swipe_1_pane_t1_ParamLimits

0xc626,	// (0x0006610d) call5_swipe_1_pane_t1

0xec2b,	// (0x00068712) call5_swipe_2_pane_g1_ParamLimits

0xec2b,	// (0x00068712) call5_swipe_2_pane_g1

0xc63b,	// (0x00066122) call5_swipe_2_pane_g2_ParamLimits

0xc63b,	// (0x00066122) call5_swipe_2_pane_g2

0x0001,

0xfbb2,	// (0x00069699) call5_swipe_2_pane_g_ParamLimits

0xfbb2,	// (0x00069699) call5_swipe_2_pane_g

0xc647,	// (0x0006612e) call5_swipe_2_pane_t1_ParamLimits

0xc647,	// (0x0006612e) call5_swipe_2_pane_t1

0xc65c,	// (0x00066143) sc_swipe_pane_g1_ParamLimits

0xc65c,	// (0x00066143) sc_swipe_pane_g1

0xc669,	// (0x00066150) sc_swipe_pane_g2_ParamLimits

0xc669,	// (0x00066150) sc_swipe_pane_g2

0x0001,

0xfbb7,	// (0x0006969e) sc_swipe_pane_g_ParamLimits

0xfbb7,	// (0x0006969e) sc_swipe_pane_g

0xc675,	// (0x0006615c) sc_swipe_pane_t1_ParamLimits

0xc675,	// (0x0006615c) sc_swipe_pane_t1

0x0df9,	// (0x0005a8e0) main_cmail_launcher_pane

0x86b7,	// (0x0006219e) aid_size_cell_cmail_l_ParamLimits

0x86b7,	// (0x0006219e) aid_size_cell_cmail_l

0x86d1,	// (0x000621b8) grid_cmail_l_pane_ParamLimits

0x86d1,	// (0x000621b8) grid_cmail_l_pane

0x86ec,	// (0x000621d3) cell_cmail_l_pane_ParamLimits

0x86ec,	// (0x000621d3) cell_cmail_l_pane

0x8712,	// (0x000621f9) cell_cmail_l_pane_g1_ParamLimits

0x8712,	// (0x000621f9) cell_cmail_l_pane_g1

0x871e,	// (0x00062205) cell_cmail_l_pane_t1_ParamLimits

0x871e,	// (0x00062205) cell_cmail_l_pane_t1

0xc68a,	// (0x00066171) cell_cmail_l_pane_t2_ParamLimits

0xc68a,	// (0x00066171) cell_cmail_l_pane_t2

0x0001,

0xfbbc,	// (0x000696a3) cell_cmail_l_pane_t_ParamLimits

0xfbbc,	// (0x000696a3) cell_cmail_l_pane_t

0x9a43,	// (0x0006352a) grid_highlight_pane_cp018_ParamLimits

0x9a43,	// (0x0006352a) grid_highlight_pane_cp018

0x0f19,	// (0x0005aa00) main2_pane_ParamLimits

0x0f19,	// (0x0005aa00) main2_pane

0xa27f,	// (0x00063d66) popup_sp_fs_action_menu_bg_pane_g1

0xa287,	// (0x00063d6e) popup_sp_fs_action_menu_bg_pane_g2

0xa28f,	// (0x00063d76) popup_sp_fs_action_menu_bg_pane_g3

0xa297,	// (0x00063d7e) popup_sp_fs_action_menu_bg_pane_g4

0xa29f,	// (0x00063d86) popup_sp_fs_action_menu_bg_pane_g5

0xa2a7,	// (0x00063d8e) popup_sp_fs_action_menu_bg_pane_g6

0xa2af,	// (0x00063d96) popup_sp_fs_action_menu_bg_pane_g7

0xa2b7,	// (0x00063d9e) popup_sp_fs_action_menu_bg_pane_g8

0xa2bf,	// (0x00063da6) popup_sp_fs_action_menu_bg_pane_g9

0xa2c7,	// (0x00063dae) popup_sp_fs_action_menu_bg_pane_g10

0xa2c7,	// (0x00063dae) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00068c93) popup_sp_fs_action_menu_bg_pane_g

0x1cb1,	// (0x0005b798) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x2_t3_g3_g1

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_t3_g3_g2

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00068d43) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00068d43) list_medium_line_x2_t3_g3_g

0x1cd5,	// (0x0005b7bc) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1cd5,	// (0x0005b7bc) list_medium_line_x2_t3_g3_t1

0x1cea,	// (0x0005b7d1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1cea,	// (0x0005b7d1) list_medium_line_x2_t3_g3_t2

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00068d4a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00068d4a) list_medium_line_x2_t3_g3_t

0x1cb1,	// (0x0005b798) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x2_t3_g2_g1

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00068d51) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00068d51) list_medium_line_x2_t3_g2_g

0x1d13,	// (0x0005b7fa) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1d13,	// (0x0005b7fa) list_medium_line_x2_t3_g2_t1

0x1d29,	// (0x0005b810) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1d29,	// (0x0005b810) list_medium_line_x2_t3_g2_t2

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00068d56) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00068d56) list_medium_line_x2_t3_g2_t

0x1cb1,	// (0x0005b798) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x2_t4_g4_g1

0x1d3b,	// (0x0005b822) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1d3b,	// (0x0005b822) list_medium_line_x2_t4_g4_g2

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_t4_g4_g3

0x1d47,	// (0x0005b82e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d47,	// (0x0005b82e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00068d5d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00068d5d) list_medium_line_x2_t4_g4_g

0x1d53,	// (0x0005b83a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1d53,	// (0x0005b83a) list_medium_line_x2_t4_g4_t1

0x1d6d,	// (0x0005b854) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1d6d,	// (0x0005b854) list_medium_line_x2_t4_g4_t2

0x1d83,	// (0x0005b86a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d83,	// (0x0005b86a) list_medium_line_x2_t4_g4_t3

0x1d98,	// (0x0005b87f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d98,	// (0x0005b87f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00068d66) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00068d66) list_medium_line_x2_t4_g4_t

0x1cb1,	// (0x0005b798) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x2_t2_g4_g1

0x1d3b,	// (0x0005b822) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1d3b,	// (0x0005b822) list_medium_line_x2_t2_g4_g2

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_t2_g4_g3

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00068dcd) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00068dcd) list_medium_line_x2_t2_g4_g

0x2a55,	// (0x0005c53c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2a55,	// (0x0005c53c) list_medium_line_x2_t2_g4_t1

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00068dd6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00068dd6) list_medium_line_x2_t2_g4_t

0x1cb1,	// (0x0005b798) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x2_t2_g3_g1

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_t2_g3_g2

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00068d43) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00068d43) list_medium_line_x2_t2_g3_g

0x2a6a,	// (0x0005c551) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2a6a,	// (0x0005c551) list_medium_line_x2_t2_g3_t1

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00068ddb) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00068ddb) list_medium_line_x2_t2_g3_t

0x2b90,	// (0x0005c677) main_sp_fs_list_pane_ParamLimits

0x2b90,	// (0x0005c677) main_sp_fs_list_pane

0x2b9c,	// (0x0005c683) sp_fs_scroll_pane_ParamLimits

0x2b9c,	// (0x0005c683) sp_fs_scroll_pane

0x2ba8,	// (0x0005c68f) list_medium_line_x2_t3_t1

0x2bb8,	// (0x0005c69f) list_medium_line_x2_t3_t2

0x2bc6,	// (0x0005c6ad) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00068e26) list_medium_line_x2_t3_t

0x2bd4,	// (0x0005c6bb) list_medium_line_x3_t4_t1

0x2be4,	// (0x0005c6cb) list_medium_line_x3_t4_t2

0x2bf2,	// (0x0005c6d9) list_medium_line_x3_t4_t3

0x2bc6,	// (0x0005c6ad) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00068e2d) list_medium_line_x3_t4_t

0x2c00,	// (0x0005c6e7) list_medium_line_x4_t5_t1

0x2c10,	// (0x0005c6f7) list_medium_line_x4_t5_t2

0x2bf2,	// (0x0005c6d9) list_medium_line_x4_t5_t3

0x2c1e,	// (0x0005c705) list_medium_line_x4_t5_t4

0x2bc6,	// (0x0005c6ad) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00068e36) list_medium_line_x4_t5_t

0x1cb1,	// (0x0005b798) list_medium_line_t4_g4_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_t4_g4_g1

0x1d47,	// (0x0005b82e) list_medium_line_t4_g4_g2_ParamLimits

0x1d47,	// (0x0005b82e) list_medium_line_t4_g4_g2

0x2c2c,	// (0x0005c713) list_medium_line_t4_g4_g3_ParamLimits

0x2c2c,	// (0x0005c713) list_medium_line_t4_g4_g3

0x1cc9,	// (0x0005b7b0) list_medium_line_t4_g4_g4_ParamLimits

0x1cc9,	// (0x0005b7b0) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00068e41) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00068e41) list_medium_line_t4_g4_g

0x2c38,	// (0x0005c71f) list_medium_line_t4_g4_t1_ParamLimits

0x2c38,	// (0x0005c71f) list_medium_line_t4_g4_t1

0x2c4d,	// (0x0005c734) list_medium_line_t4_g4_t2_ParamLimits

0x2c4d,	// (0x0005c734) list_medium_line_t4_g4_t2

0x2c62,	// (0x0005c749) list_medium_line_t4_g4_t3_ParamLimits

0x2c62,	// (0x0005c749) list_medium_line_t4_g4_t3

0x1cfe,	// (0x0005b7e5) list_medium_line_t4_g4_t4_ParamLimits

0x1cfe,	// (0x0005b7e5) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00068e4a) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00068e4a) list_medium_line_t4_g4_t

0x2d3a,	// (0x0005c821) chi_dic_find_pane_g1

0x3ea0,	// (0x0005d987) main_tport_pane

0xb844,	// (0x0006532b) list_medium_line_plain_t1

0xb85a,	// (0x00065341) list_medium_line_t2_g2_g1_ParamLimits

0xb85a,	// (0x00065341) list_medium_line_t2_g2_g1

0xb866,	// (0x0006534d) list_medium_line_t2_g2_g2_ParamLimits

0xb866,	// (0x0006534d) list_medium_line_t2_g2_g2

0x0001,

0xf8f9,	// (0x000693e0) list_medium_line_t2_g2_g_ParamLimits

0xf8f9,	// (0x000693e0) list_medium_line_t2_g2_g

0x713c,	// (0x00060c23) list_medium_line_t2_g2_t1_ParamLimits

0x713c,	// (0x00060c23) list_medium_line_t2_g2_t1

0x7156,	// (0x00060c3d) list_medium_line_t2_g2_t2_ParamLimits

0x7156,	// (0x00060c3d) list_medium_line_t2_g2_t2

0x0001,

0xf8fe,	// (0x000693e5) list_medium_line_t2_g2_t_ParamLimits

0xf8fe,	// (0x000693e5) list_medium_line_t2_g2_t

0xbb8c,	// (0x00065673) aid_sp_fs_list_icon_a_sm

0xbb94,	// (0x0006567b) aid_sp_fs_list_icon_d

0xbb9c,	// (0x00065683) aid_sp_fs_text_primary

0xbba5,	// (0x0006568c) aid_sp_fs_text_secondary

0xbbae,	// (0x00065695) list_medium_line

0xbbae,	// (0x00065695) list_medium_line_g2

0xbbae,	// (0x00065695) list_medium_line_g3

0xbbae,	// (0x00065695) list_medium_line_plain

0xbbae,	// (0x00065695) list_medium_line_plain_t2

0xbbae,	// (0x00065695) list_medium_line_plain_t3

0xbbae,	// (0x00065695) list_medium_line_right_icon

0xbbae,	// (0x00065695) list_medium_line_right_iconx2

0xbbae,	// (0x00065695) list_medium_line_t2

0xbbae,	// (0x00065695) list_medium_line_t2_g2

0xbbae,	// (0x00065695) list_medium_line_t2_g3

0xbbae,	// (0x00065695) list_medium_line_t2_right_icon

0xbbae,	// (0x00065695) list_medium_line_t2_right_iconx2

0xbbae,	// (0x00065695) list_medium_line_t3

0xbbae,	// (0x00065695) list_medium_line_t3_g2

0xbbae,	// (0x00065695) list_medium_line_t3_g3

0xbbae,	// (0x00065695) list_medium_line_t3_right_iconx2

0xbbb7,	// (0x0006569e) list_medium_line_t4_g4

0xbbc0,	// (0x000656a7) list_medium_line_x2

0xbbc0,	// (0x000656a7) list_medium_line_x2_t2_g2

0xbbc0,	// (0x000656a7) list_medium_line_x2_t2_g3

0xbbc0,	// (0x000656a7) list_medium_line_x2_t2_g4

0xbbc0,	// (0x000656a7) list_medium_line_x2_t3

0xbbc0,	// (0x000656a7) list_medium_line_x2_t3_g2

0xbbc0,	// (0x000656a7) list_medium_line_x2_t3_g3

0xbbc0,	// (0x000656a7) list_medium_line_x2_t3_g4

0xbbc0,	// (0x000656a7) list_medium_line_x2_t4_g2

0xbbc0,	// (0x000656a7) list_medium_line_x2_t4_g4

0xbbc9,	// (0x000656b0) list_medium_line_x3

0xbbc9,	// (0x000656b0) list_medium_line_x3_t4

0xbbc9,	// (0x000656b0) list_medium_line_x3_t4_g4

0xbbb7,	// (0x0006569e) list_medium_line_x4_t4

0xbbb7,	// (0x0006569e) list_medium_line_x4_t4_g7

0xbbb7,	// (0x0006569e) list_medium_line_x4_t5

0xbbd2,	// (0x000656b9) list_single_fs_dyc_pane_ParamLimits

0xbbd2,	// (0x000656b9) list_single_fs_dyc_pane

0x1cb1,	// (0x0005b798) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x4_t4_g7_g1

0xc0e5,	// (0x00065bcc) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc0e5,	// (0x00065bcc) list_medium_line_x4_t4_g7_g2

0xc0f1,	// (0x00065bd8) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc0f1,	// (0x00065bd8) list_medium_line_x4_t4_g7_g3

0xc100,	// (0x00065be7) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc100,	// (0x00065be7) list_medium_line_x4_t4_g7_g4

0xc10c,	// (0x00065bf3) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc10c,	// (0x00065bf3) list_medium_line_x4_t4_g7_g5

0xc11b,	// (0x00065c02) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc11b,	// (0x00065c02) list_medium_line_x4_t4_g7_g6

0xc12a,	// (0x00065c11) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc12a,	// (0x00065c11) list_medium_line_x4_t4_g7_g7

0x0006,

0xfac9,	// (0x000695b0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfac9,	// (0x000695b0) list_medium_line_x4_t4_g7_g

0xc136,	// (0x00065c1d) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc136,	// (0x00065c1d) list_medium_line_x4_t4_g7_t1

0xc14b,	// (0x00065c32) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc14b,	// (0x00065c32) list_medium_line_x4_t4_g7_t2

0xc160,	// (0x00065c47) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc160,	// (0x00065c47) list_medium_line_x4_t4_g7_t3

0xc175,	// (0x00065c5c) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc175,	// (0x00065c5c) list_medium_line_x4_t4_g7_t4

0xc187,	// (0x00065c6e) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc187,	// (0x00065c6e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfad8,	// (0x000695bf) list_medium_line_x4_t4_g7_t_ParamLimits

0xfad8,	// (0x000695bf) list_medium_line_x4_t4_g7_t

0xc199,	// (0x00065c80) list_single_dyc_row_pane_ParamLimits

0xc199,	// (0x00065c80) list_single_dyc_row_pane

0x8638,	// (0x0006211f) call5_gesture_pane_ParamLimits

0x8638,	// (0x0006211f) call5_gesture_pane

0x868e,	// (0x00062175) call5_windows_pane_ParamLimits

0x868e,	// (0x00062175) call5_windows_pane

0x8734,	// (0x0006221b) call5_swipe_1_pane_cp_ParamLimits

0x8734,	// (0x0006221b) call5_swipe_1_pane_cp

0x8740,	// (0x00062227) call5_swipe_2_pane_cp_ParamLimits

0x8740,	// (0x00062227) call5_swipe_2_pane_cp

0xae16,	// (0x000648fd) call5_image_pane_cp

0x874c,	// (0x00062233) popup_call5_audio_first_window_cp_ParamLimits

0x874c,	// (0x00062233) popup_call5_audio_first_window_cp

0xc65c,	// (0x00066143) call5_swipe_1_pane_g1_cp_ParamLimits

0xc65c,	// (0x00066143) call5_swipe_1_pane_g1_cp

0xc69c,	// (0x00066183) call5_swipe_1_pane_g2_cp

0xc675,	// (0x0006615c) call5_swipe_1_pane_t1_cp_ParamLimits

0xc675,	// (0x0006615c) call5_swipe_1_pane_t1_cp

0xc65c,	// (0x00066143) call5_swipe_2_pane_g1_cp_ParamLimits

0xc65c,	// (0x00066143) call5_swipe_2_pane_g1_cp

0xc6a4,	// (0x0006618b) call5_swipe_2_pane_g2_cp

0xc6ac,	// (0x00066193) call5_swipe_2_pane_t1_cp_ParamLimits

0xc6ac,	// (0x00066193) call5_swipe_2_pane_t1_cp

0x9a43,	// (0x0006352a) main_sp_fs_email_pane

0xc6c1,	// (0x000661a8) main_sp_fs_listscroll_pane_te

0xc6ca,	// (0x000661b1) popup_sp_fs_action_menu_pane_ParamLimits

0xc6ca,	// (0x000661b1) popup_sp_fs_action_menu_pane

0xe9c8,	// (0x000684af) bg_sp_fs_ctrlbar_pane_g1

0xc70e,	// (0x000661f5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc717,	// (0x000661fe) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc720,	// (0x00066207) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe9c8,	// (0x000684af) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbc1,	// (0x000696a8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe7ad,	// (0x00068294) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe7ad,	// (0x00068294) bg_sp_fs_ctrlbar_ddmenu_pane

0xc729,	// (0x00066210) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc729,	// (0x00066210) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc735,	// (0x0006621c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc735,	// (0x0006621c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbca,	// (0x000696b1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbca,	// (0x000696b1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc741,	// (0x00066228) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc741,	// (0x00066228) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc75b,	// (0x00066242) list_medium_line_t2_right_icon_g1

0x875a,	// (0x00062241) list_medium_line_t2_right_icon_t1

0x876a,	// (0x00062251) list_medium_line_t2_right_icon_t2

0x0001,

0xfbcf,	// (0x000696b6) list_medium_line_t2_right_icon_t

0xe581,	// (0x00068068) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe581,	// (0x00068068) bg_sp_fs_ctrlbar_pane

0x87c4,	// (0x000622ab) main_sp_fs_ctrlbar_button_pane_cp01

0x87ce,	// (0x000622b5) main_sp_fs_ctrlbar_ddmenu_pane

0xc79b,	// (0x00066282) main_sp_fs_ctrlbar_pane_g1

0xc7a7,	// (0x0006628e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfbd4,	// (0x000696bb) main_sp_fs_ctrlbar_pane_g

0xc7b3,	// (0x0006629a) main_sp_fs_ctrlbar_pane_t1

0x87d8,	// (0x000622bf) main_sp_fs_ctrlbar_pane

0x87fc,	// (0x000622e3) main_sp_fs_listscroll_pane_te_cp01

0x881c,	// (0x00062303) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x881c,	// (0x00062303) popup_sp_fs_action_menu_pane_cp01

0x9a43,	// (0x0006352a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9a43,	// (0x0006352a) bg_sp_fs_highlight_list_pane_cp01

0xc7c8,	// (0x000662af) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc7c8,	// (0x000662af) sp_fs_action_menu_list_gene_pane_g1

0xc7d7,	// (0x000662be) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc7d7,	// (0x000662be) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbd9,	// (0x000696c0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbd9,	// (0x000696c0) sp_fs_action_menu_list_gene_pane_g

0xc7e4,	// (0x000662cb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc7e4,	// (0x000662cb) sp_fs_action_menu_list_gene_pane_t1

0xc7fc,	// (0x000662e3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc7fc,	// (0x000662e3) sp_fs_action_menu_list_gene_pane

0xc81b,	// (0x00066302) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc81b,	// (0x00066302) popup_sp_fs_action_menu_bg_pane

0xc829,	// (0x00066310) sp_fs_action_menu_list_pane_ParamLimits

0xc829,	// (0x00066310) sp_fs_action_menu_list_pane

0xc849,	// (0x00066330) sp_fs_scroll_pane_cp01_ParamLimits

0xc849,	// (0x00066330) sp_fs_scroll_pane_cp01

0x8836,	// (0x0006231d) list_medium_line_plain_t2_t1

0x8846,	// (0x0006232d) list_medium_line_plain_t2_t2

0x0001,

0xfbde,	// (0x000696c5) list_medium_line_plain_t2_t

0x8856,	// (0x0006233d) list_medium_line_plain_t3_t1

0x8866,	// (0x0006234d) list_medium_line_plain_t3_t2

0x8874,	// (0x0006235b) list_medium_line_plain_t3_t3

0x0002,

0xfbe3,	// (0x000696ca) list_medium_line_plain_t3_t

0x1cb1,	// (0x0005b798) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x2_t2_g2_g1

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00068d51) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00068d51) list_medium_line_x2_t2_g2_g

0x2c38,	// (0x0005c71f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2c38,	// (0x0005c71f) list_medium_line_x2_t2_g2_t1

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t2_g2_t2

0x0001,

0xfbea,	// (0x000696d1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfbea,	// (0x000696d1) list_medium_line_x2_t2_g2_t

0x1cb1,	// (0x0005b798) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x2_t4_g2_g1

0xc86f,	// (0x00066356) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc86f,	// (0x00066356) list_medium_line_x2_t4_g2_g2

0x0001,

0xfbef,	// (0x000696d6) list_medium_line_x2_t4_g2_g_ParamLimits

0xfbef,	// (0x000696d6) list_medium_line_x2_t4_g2_g

0x8882,	// (0x00062369) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8882,	// (0x00062369) list_medium_line_x2_t4_g2_t1

0x8899,	// (0x00062380) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8899,	// (0x00062380) list_medium_line_x2_t4_g2_t2

0x88ae,	// (0x00062395) list_medium_line_x2_t4_g2_t3_ParamLimits

0x88ae,	// (0x00062395) list_medium_line_x2_t4_g2_t3

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t4_g2_t4

0x0003,

0xfbf4,	// (0x000696db) list_medium_line_x2_t4_g2_t_ParamLimits

0xfbf4,	// (0x000696db) list_medium_line_x2_t4_g2_t

0xc881,	// (0x00066368) list_medium_line_t3_right_iconx2_g1

0xc75b,	// (0x00066242) list_medium_line_t3_right_iconx2_g2

0x88c0,	// (0x000623a7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfbfd,	// (0x000696e4) list_medium_line_t3_right_iconx2_g

0x88ca,	// (0x000623b1) list_medium_line_t3_right_iconx2_t1

0x88da,	// (0x000623c1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc04,	// (0x000696eb) list_medium_line_t3_right_iconx2_t

0x1cb1,	// (0x0005b798) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x3_t4_g4_g1

0x1cbd,	// (0x0005b7a4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1cbd,	// (0x0005b7a4) list_medium_line_x3_t4_g4_g2

0x1d47,	// (0x0005b82e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1d47,	// (0x0005b82e) list_medium_line_x3_t4_g4_g3

0xc889,	// (0x00066370) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc889,	// (0x00066370) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc09,	// (0x000696f0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc09,	// (0x000696f0) list_medium_line_x3_t4_g4_g

0x88e8,	// (0x000623cf) list_medium_line_x3_t4_g4_t1_ParamLimits

0x88e8,	// (0x000623cf) list_medium_line_x3_t4_g4_t1

0x88ff,	// (0x000623e6) list_medium_line_x3_t4_g4_t2_ParamLimits

0x88ff,	// (0x000623e6) list_medium_line_x3_t4_g4_t2

0x2c4d,	// (0x0005c734) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2c4d,	// (0x0005c734) list_medium_line_x3_t4_g4_t3

0xc895,	// (0x0006637c) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc895,	// (0x0006637c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc12,	// (0x000696f9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc12,	// (0x000696f9) list_medium_line_x3_t4_g4_t

0x891a,	// (0x00062401) list_single_dyc_row_text_pane_t1_ParamLimits

0x891a,	// (0x00062401) list_single_dyc_row_text_pane_t1

0x8963,	// (0x0006244a) list_single_dyc_row_text_pane_t2_ParamLimits

0x8963,	// (0x0006244a) list_single_dyc_row_text_pane_t2

0xc8b2,	// (0x00066399) list_single_dyc_row_text_pane_t3_ParamLimits

0xc8b2,	// (0x00066399) list_single_dyc_row_text_pane_t3

0x0002,

0xfc1b,	// (0x00069702) list_single_dyc_row_text_pane_t_ParamLimits

0xfc1b,	// (0x00069702) list_single_dyc_row_text_pane_t

0xc8c4,	// (0x000663ab) list_single_dyc_row_pane_g1_ParamLimits

0xc8c4,	// (0x000663ab) list_single_dyc_row_pane_g1

0xc8d0,	// (0x000663b7) list_single_dyc_row_pane_g2_ParamLimits

0xc8d0,	// (0x000663b7) list_single_dyc_row_pane_g2

0xc8dc,	// (0x000663c3) list_single_dyc_row_pane_g3_ParamLimits

0xc8dc,	// (0x000663c3) list_single_dyc_row_pane_g3

0xc8e8,	// (0x000663cf) list_single_dyc_row_pane_g4_ParamLimits

0xc8e8,	// (0x000663cf) list_single_dyc_row_pane_g4

0x0003,

0xfc22,	// (0x00069709) list_single_dyc_row_pane_g_ParamLimits

0xfc22,	// (0x00069709) list_single_dyc_row_pane_g

0xc8f4,	// (0x000663db) list_single_dyc_row_text_pane_ParamLimits

0xc8f4,	// (0x000663db) list_single_dyc_row_text_pane

0x0df9,	// (0x0005a8e0) bg_sp_fs_scroll_pane

0xc913,	// (0x000663fa) thumb_sp_fs_scroll_pane

0xb85a,	// (0x00065341) list_medium_line_g1_ParamLimits

0xb85a,	// (0x00065341) list_medium_line_g1

0xc91c,	// (0x00066403) list_medium_line_t1_ParamLimits

0xc91c,	// (0x00066403) list_medium_line_t1

0x1cb1,	// (0x0005b798) list_medium_line_x2_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x2_g1

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_g2_ParamLimits

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_g2

0x0001,

0xfc2b,	// (0x00069712) list_medium_line_x2_g_ParamLimits

0xfc2b,	// (0x00069712) list_medium_line_x2_g

0xc931,	// (0x00066418) list_medium_line_x2_t1_ParamLimits

0xc931,	// (0x00066418) list_medium_line_x2_t1

0x1cb1,	// (0x0005b798) list_medium_line_x3_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x3_g1

0x1cbd,	// (0x0005b7a4) list_medium_line_x3_g2_ParamLimits

0x1cbd,	// (0x0005b7a4) list_medium_line_x3_g2

0x0001,

0xfc2b,	// (0x00069712) list_medium_line_x3_g_ParamLimits

0xfc2b,	// (0x00069712) list_medium_line_x3_g

0xc931,	// (0x00066418) list_medium_line_x3_t1_ParamLimits

0xc931,	// (0x00066418) list_medium_line_x3_t1

0xc947,	// (0x0006642e) thumb_sp_fs_scroll_pane_g1

0xc950,	// (0x00066437) thumb_sp_fs_scroll_pane_g2

0xc959,	// (0x00066440) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc30,	// (0x00069717) thumb_sp_fs_scroll_pane_g

0xc947,	// (0x0006642e) bg_sp_fs_scroll_pane_g1

0xc950,	// (0x00066437) bg_sp_fs_scroll_pane_g2

0xc959,	// (0x00066440) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc30,	// (0x00069717) bg_sp_fs_scroll_pane_g

0x1cb1,	// (0x0005b798) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1cb1,	// (0x0005b798) list_medium_line_x2_t3_g4_g1

0x1d3b,	// (0x0005b822) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1d3b,	// (0x0005b822) list_medium_line_x2_t3_g4_g2

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1cbd,	// (0x0005b7a4) list_medium_line_x2_t3_g4_g3

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1cc9,	// (0x0005b7b0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00068dcd) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00068dcd) list_medium_line_x2_t3_g4_g

0x89bd,	// (0x000624a4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89bd,	// (0x000624a4) list_medium_line_x2_t3_g4_t1

0x89d7,	// (0x000624be) list_medium_line_x2_t3_g4_t2_ParamLimits

0x89d7,	// (0x000624be) list_medium_line_x2_t3_g4_t2

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1cfe,	// (0x0005b7e5) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc37,	// (0x0006971e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc37,	// (0x0006971e) list_medium_line_x2_t3_g4_t

0xb85a,	// (0x00065341) list_medium_line_g2_g1_ParamLimits

0xb85a,	// (0x00065341) list_medium_line_g2_g1

0xb866,	// (0x0006534d) list_medium_line_g2_g2_ParamLimits

0xb866,	// (0x0006534d) list_medium_line_g2_g2

0x0001,

0xf8f9,	// (0x000693e0) list_medium_line_g2_g_ParamLimits

0xf8f9,	// (0x000693e0) list_medium_line_g2_g

0xc962,	// (0x00066449) list_medium_line_g2_t1_ParamLimits

0xc962,	// (0x00066449) list_medium_line_g2_t1

0xb85a,	// (0x00065341) list_medium_line_t3_g2_g1_ParamLimits

0xb85a,	// (0x00065341) list_medium_line_t3_g2_g1

0xb866,	// (0x0006534d) list_medium_line_t3_g2_g2_ParamLimits

0xb866,	// (0x0006534d) list_medium_line_t3_g2_g2

0x0001,

0xf8f9,	// (0x000693e0) list_medium_line_t3_g2_g_ParamLimits

0xf8f9,	// (0x000693e0) list_medium_line_t3_g2_g

0x89f1,	// (0x000624d8) list_medium_line_t3_g2_t1_ParamLimits

0x89f1,	// (0x000624d8) list_medium_line_t3_g2_t1

0x8a0b,	// (0x000624f2) list_medium_line_t3_g2_t2_ParamLimits

0x8a0b,	// (0x000624f2) list_medium_line_t3_g2_t2

0x8a20,	// (0x00062507) list_medium_line_t3_g2_t3_ParamLimits

0x8a20,	// (0x00062507) list_medium_line_t3_g2_t3

0x0002,

0xfc3e,	// (0x00069725) list_medium_line_t3_g2_t_ParamLimits

0xfc3e,	// (0x00069725) list_medium_line_t3_g2_t

0xc75b,	// (0x00066242) list_medium_line_right_icon_g1

0xc977,	// (0x0006645e) list_medium_line_right_icon_t1

0xb85a,	// (0x00065341) list_medium_line_t2_g1_ParamLimits

0xb85a,	// (0x00065341) list_medium_line_t2_g1

0x8a3a,	// (0x00062521) list_medium_line_t2_t1_ParamLimits

0x8a3a,	// (0x00062521) list_medium_line_t2_t1

0x8a54,	// (0x0006253b) list_medium_line_t2_t2_ParamLimits

0x8a54,	// (0x0006253b) list_medium_line_t2_t2

0x0001,

0xfc45,	// (0x0006972c) list_medium_line_t2_t_ParamLimits

0xfc45,	// (0x0006972c) list_medium_line_t2_t

0xb85a,	// (0x00065341) list_medium_line_t3_g1_ParamLimits

0xb85a,	// (0x00065341) list_medium_line_t3_g1

0x8a6d,	// (0x00062554) list_medium_line_t3_t1_ParamLimits

0x8a6d,	// (0x00062554) list_medium_line_t3_t1

0x8a84,	// (0x0006256b) list_medium_line_t3_t2_ParamLimits

0x8a84,	// (0x0006256b) list_medium_line_t3_t2

0x8a99,	// (0x00062580) list_medium_line_t3_t3_ParamLimits

0x8a99,	// (0x00062580) list_medium_line_t3_t3

0x0002,

0xfc4a,	// (0x00069731) list_medium_line_t3_t_ParamLimits

0xfc4a,	// (0x00069731) list_medium_line_t3_t

0xb85a,	// (0x00065341) list_medium_line_g3_g1_ParamLimits

0xb85a,	// (0x00065341) list_medium_line_g3_g1

0xc985,	// (0x0006646c) list_medium_line_g3_g2_ParamLimits

0xc985,	// (0x0006646c) list_medium_line_g3_g2

0xb866,	// (0x0006534d) list_medium_line_g3_g3_ParamLimits

0xb866,	// (0x0006534d) list_medium_line_g3_g3

0x0002,

0xfc51,	// (0x00069738) list_medium_line_g3_g_ParamLimits

0xfc51,	// (0x00069738) list_medium_line_g3_g

0xc991,	// (0x00066478) list_medium_line_g3_t1_ParamLimits

0xc991,	// (0x00066478) list_medium_line_g3_t1

0xb85a,	// (0x00065341) list_medium_line_t2_g3_g1_ParamLimits

0xb85a,	// (0x00065341) list_medium_line_t2_g3_g1

0xc985,	// (0x0006646c) list_medium_line_t2_g3_g2_ParamLimits

0xc985,	// (0x0006646c) list_medium_line_t2_g3_g2

0xb866,	// (0x0006534d) list_medium_line_t2_g3_g3_ParamLimits

0xb866,	// (0x0006534d) list_medium_line_t2_g3_g3

0x0002,

0xfc51,	// (0x00069738) list_medium_line_t2_g3_g_ParamLimits

0xfc51,	// (0x00069738) list_medium_line_t2_g3_g

0x8aab,	// (0x00062592) list_medium_line_t2_g3_t1_ParamLimits

0x8aab,	// (0x00062592) list_medium_line_t2_g3_t1

0x8ac5,	// (0x000625ac) list_medium_line_t2_g3_t2_ParamLimits

0x8ac5,	// (0x000625ac) list_medium_line_t2_g3_t2

0x0001,

0xfc58,	// (0x0006973f) list_medium_line_t2_g3_t_ParamLimits

0xfc58,	// (0x0006973f) list_medium_line_t2_g3_t

0xb85a,	// (0x00065341) list_medium_line_t3_g3_g1_ParamLimits

0xb85a,	// (0x00065341) list_medium_line_t3_g3_g1

0xc985,	// (0x0006646c) list_medium_line_t3_g3_g2_ParamLimits

0xc985,	// (0x0006646c) list_medium_line_t3_g3_g2

0xb866,	// (0x0006534d) list_medium_line_t3_g3_g3_ParamLimits

0xb866,	// (0x0006534d) list_medium_line_t3_g3_g3

0x0002,

0xfc51,	// (0x00069738) list_medium_line_t3_g3_g_ParamLimits

0xfc51,	// (0x00069738) list_medium_line_t3_g3_g

0x8ae0,	// (0x000625c7) list_medium_line_t3_g3_t1_ParamLimits

0x8ae0,	// (0x000625c7) list_medium_line_t3_g3_t1

0x8af4,	// (0x000625db) list_medium_line_t3_g3_t2_ParamLimits

0x8af4,	// (0x000625db) list_medium_line_t3_g3_t2

0x8b06,	// (0x000625ed) list_medium_line_t3_g3_t3_ParamLimits

0x8b06,	// (0x000625ed) list_medium_line_t3_g3_t3

0x0002,

0xfc5d,	// (0x00069744) list_medium_line_t3_g3_t_ParamLimits

0xfc5d,	// (0x00069744) list_medium_line_t3_g3_t

0xc881,	// (0x00066368) list_medium_line_right_iconx2_g1

0xc75b,	// (0x00066242) list_medium_line_right_iconx2_g2

0x0001,

0xfc64,	// (0x0006974b) list_medium_line_right_iconx2_g

0xc9a6,	// (0x0006648d) list_medium_line_right_iconx2_t1

0xc881,	// (0x00066368) list_medium_line_t2_right_iconx2_g1

0xc75b,	// (0x00066242) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfc64,	// (0x0006974b) list_medium_line_t2_right_iconx2_g

0x8b1a,	// (0x00062601) list_medium_line_t2_right_iconx2_t1

0x8b2a,	// (0x00062611) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc69,	// (0x00069750) list_medium_line_t2_right_iconx2_t

0xc9b4,	// (0x0006649b) list_medium_line_x4_t4_t1

0x8b3c,	// (0x00062623) list_medium_line_x4_t4_t2

0x8b4c,	// (0x00062633) list_medium_line_x4_t4_t3

0x8b5c,	// (0x00062643) list_medium_line_x4_t4_t4

0x0003,

0xfc6e,	// (0x00069755) list_medium_line_x4_t4_t

0x8baf,	// (0x00062696) tport_appsw_pane_ParamLimits

0x8baf,	// (0x00062696) tport_appsw_pane

0x8bc0,	// (0x000626a7) tport_contact_pane_ParamLimits

0x8bc0,	// (0x000626a7) tport_contact_pane

0x8bd9,	// (0x000626c0) tport_listscroll_pane_ParamLimits

0x8bd9,	// (0x000626c0) tport_listscroll_pane

0x8bf4,	// (0x000626db) cell_tport_appsw_pane_ParamLimits

0x8bf4,	// (0x000626db) cell_tport_appsw_pane

0x68c5,	// (0x000603ac) tport_appsw_pane_g1_ParamLimits

0x68c5,	// (0x000603ac) tport_appsw_pane_g1

0xc9c2,	// (0x000664a9) tport_contact_pane_g1

0xc28a,	// (0x00065d71) tport_contact_pane_t1

0xc9cb,	// (0x000664b2) tport_contact_pane_t2

0x0001,

0xfc77,	// (0x0006975e) tport_contact_pane_t

0xc9d9,	// (0x000664c0) list_tport_pane

0xc9e2,	// (0x000664c9) scroll_pane_cp_030

0xc9f3,	// (0x000664da) cell_tport_appsw_pane_g1

0xca03,	// (0x000664ea) cell_tport_appsw_pane_t1

0x0df9,	// (0x0005a8e0) grid_highlight_pane_cp019

0x8c34,	// (0x0006271b) list_tport_double_graphic_pane_ParamLimits

0x8c34,	// (0x0006271b) list_tport_double_graphic_pane

0x9a43,	// (0x0006352a) list_highlight_pane_cp023_ParamLimits

0x9a43,	// (0x0006352a) list_highlight_pane_cp023

0x8c41,	// (0x00062728) list_tport_double_graphic_pane_g1_ParamLimits

0x8c41,	// (0x00062728) list_tport_double_graphic_pane_g1

0x8c4e,	// (0x00062735) list_tport_double_graphic_pane_t1_ParamLimits

0x8c4e,	// (0x00062735) list_tport_double_graphic_pane_t1

0x8c63,	// (0x0006274a) list_tport_double_graphic_pane_t2_ParamLimits

0x8c63,	// (0x0006274a) list_tport_double_graphic_pane_t2

0x0001,

0xfc83,	// (0x0006976a) list_tport_double_graphic_pane_t_ParamLimits

0xfc83,	// (0x0006976a) list_tport_double_graphic_pane_t

0x0df9,	// (0x0005a8e0) main_cale_note_pane

0x687a,	// (0x00060361) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x687a,	// (0x00060361) cell_vitu2_function_top_wide_pane_cp01

0x81d7,	// (0x00061cbe) wait_bar_pane_cp05_ParamLimits

0x0df9,	// (0x0005a8e0) listscroll_cmail_pane

0xca19,	// (0x00066500) list_cmail_pane

0xb813,	// (0x000652fa) list_cmail_body_pane

0x8c7f,	// (0x00062766) list_single_cmail_header_caption_pane

0x8c95,	// (0x0006277c) list_single_cmail_header_detail_pane_ParamLimits

0x8c95,	// (0x0006277c) list_single_cmail_header_detail_pane

0x8cbe,	// (0x000627a5) list_single_cmail_header_caption_pane_t1

0x8cce,	// (0x000627b5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8cce,	// (0x000627b5) list_single_cmail_header_detail_pane_g1

0xca3a,	// (0x00066521) list_single_cmail_header_detail_pane_g2_ParamLimits

0xca3a,	// (0x00066521) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc88,	// (0x0006976f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc88,	// (0x0006976f) list_single_cmail_header_detail_pane_g

0xca53,	// (0x0006653a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xca53,	// (0x0006653a) list_single_cmail_header_detail_pane_t1

0xca89,	// (0x00066570) list_single_cmail_header_editor_pane_bg_ParamLimits

0xca89,	// (0x00066570) list_single_cmail_header_editor_pane_bg

0xc439,	// (0x00065f20) list_cmail_body_pane_g1

0xca9b,	// (0x00066582) list_cmail_body_pane_t1

0xb605,	// (0x000650ec) list_single_cmail_header_editor_pane_bg_g1

0xa68c,	// (0x00064173) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb615,	// (0x000650fc) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb60d,	// (0x000650f4) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb852,	// (0x00065339) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb635,	// (0x0006511c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb625,	// (0x0006510c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb62d,	// (0x00065114) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa66c,	// (0x00064153) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d0c,	// (0x000627f3) calenote_gesture_pane_ParamLimits

0x8d0c,	// (0x000627f3) calenote_gesture_pane

0x8d2c,	// (0x00062813) calenote_window_pane_ParamLimits

0x8d2c,	// (0x00062813) calenote_window_pane

0xcaa9,	// (0x00066590) popup_note_window_cp01

0x8d48,	// (0x0006282f) calenote_swipe_1_pane_ParamLimits

0x8d48,	// (0x0006282f) calenote_swipe_1_pane

0x8740,	// (0x00062227) calenote_swipe_2_pane_ParamLimits

0x8740,	// (0x00062227) calenote_swipe_2_pane

0xc65c,	// (0x00066143) calenote_swipe_1_pane_g1_ParamLimits

0xc65c,	// (0x00066143) calenote_swipe_1_pane_g1

0xc669,	// (0x00066150) calenote_swipe_1_pane_g2_ParamLimits

0xc669,	// (0x00066150) calenote_swipe_1_pane_g2

0x0001,

0xfbb7,	// (0x0006969e) calenote_swipe_1_pane_g_ParamLimits

0xfbb7,	// (0x0006969e) calenote_swipe_1_pane_g

0xcabb,	// (0x000665a2) calenote_swipe_1_pane_t1_ParamLimits

0xcabb,	// (0x000665a2) calenote_swipe_1_pane_t1

0xc65c,	// (0x00066143) calenote_swipe_2_pane_g1_ParamLimits

0xc65c,	// (0x00066143) calenote_swipe_2_pane_g1

0xcada,	// (0x000665c1) calenote_swipe_2_pane_g2_ParamLimits

0xcada,	// (0x000665c1) calenote_swipe_2_pane_g2

0x0001,

0xfc94,	// (0x0006977b) calenote_swipe_2_pane_g_ParamLimits

0xfc94,	// (0x0006977b) calenote_swipe_2_pane_g

0xcae6,	// (0x000665cd) calenote_swipe_2_pane_t1_ParamLimits

0xcae6,	// (0x000665cd) calenote_swipe_2_pane_t1

0x0df9,	// (0x0005a8e0) main_mup_navstr_pane

0x526b,	// (0x0005ed52) main_mup3_pane_t7_ParamLimits

0x526b,	// (0x0005ed52) main_mup3_pane_t7

0xd4be,	// (0x00066fa5) main_mp4_pane_g6_ParamLimits

0xd4be,	// (0x00066fa5) main_mp4_pane_g6

0xd662,	// (0x00067149) main_image3_pane_t4_ParamLimits

0xd662,	// (0x00067149) main_image3_pane_t4

0x8d5d,	// (0x00062844) popup_navstr_preview_pane_ParamLimits

0x8d5d,	// (0x00062844) popup_navstr_preview_pane

0x8d71,	// (0x00062858) scroll_navstr_pane_ParamLimits

0x8d71,	// (0x00062858) scroll_navstr_pane

0x0df9,	// (0x0005a8e0) bg_popup_preview_window_pane_cp04

0xcb0d,	// (0x000665f4) popup_navstr_preview_pane_t1

0x8d85,	// (0x0006286c) scroll_navstr_pane_g1_ParamLimits

0x8d85,	// (0x0006286c) scroll_navstr_pane_g1

0x8d99,	// (0x00062880) scroll_navstr_pane_t1_ParamLimits

0x8d99,	// (0x00062880) scroll_navstr_pane_t1

0xcab2,	// (0x00066599) bg_button_pane_cp014

0xcab2,	// (0x00066599) bg_button_pane_cp030

0x85de,	// (0x000620c5) list_double_fisheye_pane_g4_ParamLimits

0x85de,	// (0x000620c5) list_double_fisheye_pane_g4

0x85ea,	// (0x000620d1) list_double_fisheye_pane_g5_ParamLimits

0x85ea,	// (0x000620d1) list_double_fisheye_pane_g5

0xca21,	// (0x00066508) sp_fs_scroll_pane_cp03

0xc79b,	// (0x00066282) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc7a7,	// (0x0006628e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbd4,	// (0x000696bb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc7b3,	// (0x0006629a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8c75,	// (0x0006275c) sp_fs_scroll_pane_cp02

0xa332,	// (0x00063e19) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa332,	// (0x00063e19) popup_sp_fs_calendar_preview_list_single_pane

0x0df9,	// (0x0005a8e0) main_cam6_pano_pane

0x9a43,	// (0x0006352a) main_mup3_pane_ParamLimits

0x0df9,	// (0x0005a8e0) main_phacti_pane

0x80aa,	// (0x00061b91) bg_button_pane_cp11

0x80c4,	// (0x00061bab) main_mobtv_info_pane_g2_ParamLimits

0x80c4,	// (0x00061bab) main_mobtv_info_pane_g2

0x0001,

0xfb34,	// (0x0006961b) main_mobtv_info_pane_g_ParamLimits

0xfb34,	// (0x0006961b) main_mobtv_info_pane_g

0x82a1,	// (0x00061d88) sc_clock_pane_t5_ParamLimits

0x82a1,	// (0x00061d88) sc_clock_pane_t5

0x8449,	// (0x00061f30) main_radioblah_pane_g1_ParamLimits

0xc59f,	// (0x00066086) main_radioblah_pane_t3_ParamLimits

0xc59f,	// (0x00066086) main_radioblah_pane_t3

0xc5b7,	// (0x0006609e) main_radioblah_pane_t4_ParamLimits

0xc5b7,	// (0x0006609e) main_radioblah_pane_t4

0x8471,	// (0x00061f58) main_radioblah_text_pane_ParamLimits

0x8471,	// (0x00061f58) main_radioblah_text_pane

0x8483,	// (0x00061f6a) main_radioblah_info_pane_g1_ParamLimits

0x851c,	// (0x00062003) main_radioblah_info_pane_t4_ParamLimits

0x851c,	// (0x00062003) main_radioblah_info_pane_t4

0x9a43,	// (0x0006352a) main_sp_fs_calendar_pane

0x8db0,	// (0x00062897) main_phacti_pane_g1

0x8db8,	// (0x0006289f) phacti_note_pane_ParamLimits

0x8db8,	// (0x0006289f) phacti_note_pane

0xcb24,	// (0x0006660b) phacti_term_pane_ParamLimits

0xcb24,	// (0x0006660b) phacti_term_pane

0xcb39,	// (0x00066620) phacti_note_pane_t1_ParamLimits

0xcb39,	// (0x00066620) phacti_note_pane_t1

0xcb50,	// (0x00066637) phacti_term_pane_g1

0xcb58,	// (0x0006663f) phacti_term_pane_t1_ParamLimits

0xcb58,	// (0x0006663f) phacti_term_pane_t1

0xcb82,	// (0x00066669) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa48f,	// (0x00063f76) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc9e,	// (0x00069785) popup_sp_fs_calendar_preview_list_single_pane_g

0xcb8a,	// (0x00066671) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcb8a,	// (0x00066671) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcb9f,	// (0x00066686) aid_popup_sp_fs_bg_corner_pane

0xe9c8,	// (0x000684af) popup_sp_fs_calendar_preview_bg_pane_g1

0x0df9,	// (0x0005a8e0) popup_sp_fs_calendar_preview_bg_pane

0xcba7,	// (0x0006668e) popup_sp_fs_calendar_preview_list_pane

0x9a43,	// (0x0006352a) bg_main_sp_fs_cale_pane_ParamLimits

0x9a43,	// (0x0006352a) bg_main_sp_fs_cale_pane

0xcbaf,	// (0x00066696) listscroll_cale_mrui_pane_ParamLimits

0xcbaf,	// (0x00066696) listscroll_cale_mrui_pane

0xcbc3,	// (0x000666aa) listscroll_sp_fs_schedule_track_pane

0xcbcc,	// (0x000666b3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcbcc,	// (0x000666b3) main_sp_fs_ctrlbar_pane_cp01

0xcbdd,	// (0x000666c4) main_sp_fs_ribbon_pane

0xcbe5,	// (0x000666cc) popup_sp_fs_cale_preview_window

0x8e0f,	// (0x000628f6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e0f,	// (0x000628f6) list_single_sp_fs_schedule_track_pane

0x9a43,	// (0x0006352a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9a43,	// (0x0006352a) bg_sp_fs_highlight_list_pane_cp03

0x8e21,	// (0x00062908) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e21,	// (0x00062908) list_single_sp_fs_schedule_track_pane_g1

0x8e2d,	// (0x00062914) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e2d,	// (0x00062914) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca3,	// (0x0006978a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca3,	// (0x0006978a) list_single_sp_fs_schedule_track_pane_g

0x8e39,	// (0x00062920) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e39,	// (0x00062920) list_single_sp_fs_schedule_track_pane_t1

0x8e53,	// (0x0006293a) sp_fs_schedule_track_pane_ParamLimits

0x8e53,	// (0x0006293a) sp_fs_schedule_track_pane

0xcbf7,	// (0x000666de) sp_fs_schedule_track_pane_g1

0xcbff,	// (0x000666e6) sp_fs_schedule_track_pane_g2

0xcc07,	// (0x000666ee) sp_fs_schedule_track_pane_g3

0xcc0f,	// (0x000666f6) sp_fs_schedule_track_pane_g4

0xcc17,	// (0x000666fe) sp_fs_schedule_track_pane_g5

0x0004,

0xfca8,	// (0x0006978f) sp_fs_schedule_track_pane_g

0xb605,	// (0x000650ec) bg_sp_fs_schedule_viewer_highlight_g1

0xa68c,	// (0x00064173) bg_sp_fs_schedule_viewer_highlight_g2

0xb60d,	// (0x000650f4) bg_sp_fs_schedule_viewer_highlight_g3

0xb615,	// (0x000650fc) bg_sp_fs_schedule_viewer_highlight_g4

0xb852,	// (0x00065339) bg_sp_fs_schedule_viewer_highlight_g5

0xb625,	// (0x0006510c) bg_sp_fs_schedule_viewer_highlight_g6

0xb62d,	// (0x00065114) bg_sp_fs_schedule_viewer_highlight_g7

0xb635,	// (0x0006511c) bg_sp_fs_schedule_viewer_highlight_g8

0xa66c,	// (0x00064153) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb3,	// (0x0006979a) bg_sp_fs_schedule_viewer_highlight_g

0x0df9,	// (0x0005a8e0) bg_main_sp_fs_ribbon_pane

0x8e64,	// (0x0006294b) main_sp_fs_ribbon_pane_g1

0xcc1f,	// (0x00066706) main_sp_fs_ribbon_pane_t1

0x8e6d,	// (0x00062954) main_sp_fs_ribbon_pane_t2

0xcc2e,	// (0x00066715) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc6,	// (0x000697ad) main_sp_fs_ribbon_pane_t

0xcc3d,	// (0x00066724) main_sp_fs_ribbon_scheduler_pane

0xcc45,	// (0x0006672c) bg_main_sp_fs_ribbon_pane_g1

0xcc4e,	// (0x00066735) bg_main_sp_fs_ribbon_pane_g2

0xcc57,	// (0x0006673e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfccd,	// (0x000697b4) bg_main_sp_fs_ribbon_pane_g

0xcc5f,	// (0x00066746) main_sp_fs_ribbon_scheduler_pane_g1

0xcc68,	// (0x0006674f) main_sp_fs_ribbon_scheduler_pane_g2

0xcc71,	// (0x00066758) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcd4,	// (0x000697bb) main_sp_fs_ribbon_scheduler_pane_g

0xcc7a,	// (0x00066761) list_cale_mrui_pane

0x8e7c,	// (0x00062963) sp_fs_scroll_pane_cp07_ParamLimits

0x8e7c,	// (0x00062963) sp_fs_scroll_pane_cp07

0x8e90,	// (0x00062977) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e90,	// (0x00062977) bg_sp_fs_schedule_viewer_highlight

0xcc83,	// (0x0006676a) list_single_sp_fs_schedule_track_pane_cp01

0xcc8b,	// (0x00066772) list_sp_fs_schedule_track_pane

0xcc93,	// (0x0006677a) sp_fs_scroll_pane_cp06_ParamLimits

0xcc93,	// (0x0006677a) sp_fs_scroll_pane_cp06

0xe9c8,	// (0x000684af) bgmain_sp_fs_calendar_pane_g1

0x8ea0,	// (0x00062987) list_single_cale_mrui_pane_ParamLimits

0x8ea0,	// (0x00062987) list_single_cale_mrui_pane

0xcca5,	// (0x0006678c) list_single_cale_mrui_row_pane_ParamLimits

0xcca5,	// (0x0006678c) list_single_cale_mrui_row_pane

0xccb2,	// (0x00066799) list_single_cale_mrui_row_pane_g1_ParamLimits

0xccb2,	// (0x00066799) list_single_cale_mrui_row_pane_g1

0xccea,	// (0x000667d1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xccea,	// (0x000667d1) list_single_cale_mrui_row_pane_t1

0x8ec0,	// (0x000629a7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8ec0,	// (0x000629a7) list_single_cale_mrui_row_pane_t2

0xccfc,	// (0x000667e3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xccfc,	// (0x000667e3) list_single_cale_mrui_row_pane_t3

0xcd2b,	// (0x00066812) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcd2b,	// (0x00066812) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce0,	// (0x000697c7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce0,	// (0x000697c7) list_single_cale_mrui_row_pane_t

0x8f28,	// (0x00062a0f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f28,	// (0x00062a0f) list_single_cmail_header_editor_pane_bg_cp01

0x8f4e,	// (0x00062a35) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f4e,	// (0x00062a35) list_single_cmail_header_editor_pane_bg_cp02

0x8f6e,	// (0x00062a55) main_radioblah_text_pane_t1_ParamLimits

0x8f6e,	// (0x00062a55) main_radioblah_text_pane_t1

0xcd5a,	// (0x00066841) cam6_indi_pane_cp01

0xcd62,	// (0x00066849) cam6_mode_pane_cp01

0xcd6a,	// (0x00066851) cam6_pano_pane

0xcd73,	// (0x0006685a) cam6_zoom_pane_cp01

0xcd7b,	// (0x00066862) cam6_pano_image_pane

0xcd86,	// (0x0006686d) cam6_pano_pane_g1

0xc439,	// (0x00065f20) cam6_pano_pane_g2

0xcd8f,	// (0x00066876) cam6_pano_pane_g3

0xcd98,	// (0x0006687f) cam6_pano_pane_g4

0xef5b,	// (0x00068a42) cam6_pano_pane_g5

0xcda1,	// (0x00066888) cam6_pano_pane_g6

0xcdab,	// (0x00066892) cam6_pano_pane_g7

0xcdb3,	// (0x0006689a) cam6_pano_pane_g8

0xcdbc,	// (0x000668a3) cam6_pano_pane_g9

0x0008,

0xfce9,	// (0x000697d0) cam6_pano_pane_g

0x0df9,	// (0x0005a8e0) main_browser_tag_pane

0xcb05,	// (0x000665ec) grid_navstr_albumart_pane

0xcdc7,	// (0x000668ae) cell_navstr_albumart_pane_ParamLimits

0xcdc7,	// (0x000668ae) cell_navstr_albumart_pane

0xcdea,	// (0x000668d1) cell_navstr_albumart_pane_g1

0xe39e,	// (0x00067e85) cell_navstr_albumart_pane_g2

0xe3ae,	// (0x00067e95) cell_navstr_albumart_pane_g3

0xe3a6,	// (0x00067e8d) cell_navstr_albumart_pane_g4

0x0003,

0xfcfc,	// (0x000697e3) cell_navstr_albumart_pane_g

0x8f88,	// (0x00062a6f) bt_list_pane_ParamLimits

0x8f88,	// (0x00062a6f) bt_list_pane

0x8f9c,	// (0x00062a83) bt_list_pane_t1

0x8fab,	// (0x00062a92) bt_list_pane_t2

0x0001,

0xfd05,	// (0x000697ec) bt_list_pane_t

0x0df9,	// (0x0005a8e0) main_cale_prevew_pane

0x8fba,	// (0x00062aa1) popup_cale_preview_window_ParamLimits

0x8fba,	// (0x00062aa1) popup_cale_preview_window

0x9a43,	// (0x0006352a) bg_popup_preview_window_pane_cp05_ParamLimits

0x9a43,	// (0x0006352a) bg_popup_preview_window_pane_cp05

0xcdf2,	// (0x000668d9) list_cale_preview_pane_ParamLimits

0xcdf2,	// (0x000668d9) list_cale_preview_pane

0x8fd5,	// (0x00062abc) list_double_cale_preview_pane_ParamLimits

0x8fd5,	// (0x00062abc) list_double_cale_preview_pane

0x8fe7,	// (0x00062ace) list_single_cale_preview_pane_ParamLimits

0x8fe7,	// (0x00062ace) list_single_cale_preview_pane

0x8ffd,	// (0x00062ae4) list_single_cale_preview_pane_g1

0x9005,	// (0x00062aec) list_single_cale_preview_pane_t1_ParamLimits

0x9005,	// (0x00062aec) list_single_cale_preview_pane_t1

0x901a,	// (0x00062b01) list_double_cale_preview_pane_g1

0x9022,	// (0x00062b09) list_double_cale_preview_pane_t1_ParamLimits

0x9022,	// (0x00062b09) list_double_cale_preview_pane_t1

0x9037,	// (0x00062b1e) list_double_cale_preview_pane_t2_ParamLimits

0x9037,	// (0x00062b1e) list_double_cale_preview_pane_t2

0x0001,

0xfd0a,	// (0x000697f1) list_double_cale_preview_pane_t_ParamLimits

0xfd0a,	// (0x000697f1) list_double_cale_preview_pane_t

0x0df9,	// (0x0005a8e0) main_ezdial_pane

0x9a43,	// (0x0006352a) main_sp_fs_email_pane_ParamLimits

0x877c,	// (0x00062263) cmail_ddmenu_btn01_pane_ParamLimits

0x877c,	// (0x00062263) cmail_ddmenu_btn01_pane

0x878f,	// (0x00062276) cmail_ddmenu_btn02_pane_ParamLimits

0x878f,	// (0x00062276) cmail_ddmenu_btn02_pane

0x87b2,	// (0x00062299) cmail_ddmenu_btn03_pane_ParamLimits

0x87b2,	// (0x00062299) cmail_ddmenu_btn03_pane

0x87d8,	// (0x000622bf) main_sp_fs_ctrlbar_pane_ParamLimits

0x87fc,	// (0x000622e3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb813,	// (0x000652fa) list_cmail_body_pane_ParamLimits

0xca31,	// (0x00066518) bg_button_pane_cp12

0xca46,	// (0x0006652d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xca46,	// (0x0006652d) list_single_cmail_header_detail_pane_g3

0x8ce6,	// (0x000627cd) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8ce6,	// (0x000627cd) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc8f,	// (0x00069776) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc8f,	// (0x00069776) list_single_cmail_header_detail_pane_t

0xcb6d,	// (0x00066654) phacti_term_pane_t2_ParamLimits

0xcb6d,	// (0x00066654) phacti_term_pane_t2

0x0001,

0xfc99,	// (0x00069780) phacti_term_pane_t_ParamLimits

0xfc99,	// (0x00069780) phacti_term_pane_t

0xcdfe,	// (0x000668e5) aid_size_list_single_double

0x904f,	// (0x00062b36) popup_ezdial_listscroll_window

0x906b,	// (0x00062b52) popup_number_entry_window_cp01

0xae16,	// (0x000648fd) bg_popup_call_pane_cp09

0xce0a,	// (0x000668f1) ezdial_list_pane

0xce12,	// (0x000668f9) scroll_pane_cp23

0xe581,	// (0x00068068) bg_button_pane_cp028_ParamLimits

0xe581,	// (0x00068068) bg_button_pane_cp028

0x9079,	// (0x00062b60) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9079,	// (0x00062b60) cmail_ddmenu_btn01_pane_g1

0x9085,	// (0x00062b6c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9085,	// (0x00062b6c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd0f,	// (0x000697f6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd0f,	// (0x000697f6) cmail_ddmenu_btn01_pane_g

0xce1a,	// (0x00066901) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xce1a,	// (0x00066901) cmail_ddmenu_btn01_pane_t1

0xe581,	// (0x00068068) bg_button_pane_cp029_ParamLimits

0xe581,	// (0x00068068) bg_button_pane_cp029

0x9091,	// (0x00062b78) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9091,	// (0x00062b78) cmail_ddmenu_btn02_pane_g1

0x90a9,	// (0x00062b90) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x90a9,	// (0x00062b90) cmail_ddmenu_btn02_pane_t1

0x9a43,	// (0x0006352a) bg_button_pane_cp031_ParamLimits

0x9a43,	// (0x0006352a) bg_button_pane_cp031

0x9091,	// (0x00062b78) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9091,	// (0x00062b78) cmail_ddmenu_btn03_pane_g1

0x90a9,	// (0x00062b90) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x90a9,	// (0x00062b90) cmail_ddmenu_btn03_pane_t1

0x5f9d,	// (0x0005fa84) cell_dialer2_keypad_pane_t1_ParamLimits

0x5fb7,	// (0x0005fa9e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5fb7,	// (0x0005fa9e) cell_dialer2_keypad_pane_t1_copy1

0x7f2c,	// (0x00061a13) ncimui_group_button_pane

0x9a43,	// (0x0006352a) main_sp_fs_calendar_pane_ParamLimits

0x8c7f,	// (0x00062766) list_single_cmail_header_caption_pane_ParamLimits

0xbba5,	// (0x0006568c) aid_recal_txt_sm_pane

0x0df9,	// (0x0005a8e0) mian_recal_day_pane

0xcbe5,	// (0x000666cc) popup_sp_fs_cale_preview_window_ParamLimits

0x0df9,	// (0x0005a8e0) list_recal_day_pane

0xce48,	// (0x0006692f) list_single_recal_day_pane_ParamLimits

0xce48,	// (0x0006692f) list_single_recal_day_pane

0xce5a,	// (0x00066941) list_single_recal_day_pane_g1_ParamLimits

0xce5a,	// (0x00066941) list_single_recal_day_pane_g1

0xce66,	// (0x0006694d) list_single_recal_day_pane_g2_ParamLimits

0xce66,	// (0x0006694d) list_single_recal_day_pane_g2

0xce75,	// (0x0006695c) list_single_recal_day_pane_g3_ParamLimits

0xce75,	// (0x0006695c) list_single_recal_day_pane_g3

0x90cd,	// (0x00062bb4) list_single_recal_day_pane_g4_ParamLimits

0x90cd,	// (0x00062bb4) list_single_recal_day_pane_g4

0xce81,	// (0x00066968) list_single_recal_day_pane_g5_ParamLimits

0xce81,	// (0x00066968) list_single_recal_day_pane_g5

0xce90,	// (0x00066977) list_single_recal_day_pane_g6_ParamLimits

0xce90,	// (0x00066977) list_single_recal_day_pane_g6

0x0005,

0xfd1e,	// (0x00069805) list_single_recal_day_pane_g_ParamLimits

0xfd1e,	// (0x00069805) list_single_recal_day_pane_g

0xce9c,	// (0x00066983) list_single_recal_day_pane_t1

0xceaa,	// (0x00066991) list_single_recal_day_pane_t2

0x0001,

0xfd2b,	// (0x00069812) list_single_recal_day_pane_t

0x90e0,	// (0x00062bc7) ncimui_query_button_pane_ParamLimits

0x90e0,	// (0x00062bc7) ncimui_query_button_pane

0x90f0,	// (0x00062bd7) ncimui_query_button_pane_t1_ParamLimits

0x90f0,	// (0x00062bd7) ncimui_query_button_pane_t1

0xceb8,	// (0x0006699f) ncimui_query_button_pane_t2_ParamLimits

0xceb8,	// (0x0006699f) ncimui_query_button_pane_t2

0x0001,

0xfd30,	// (0x00069817) ncimui_query_button_pane_t_ParamLimits

0xfd30,	// (0x00069817) ncimui_query_button_pane_t

0x9103,	// (0x00062bea) query_button_pane_ParamLimits

0x9103,	// (0x00062bea) query_button_pane

0x0df9,	// (0x0005a8e0) bg_button_pane_cp0028

0xcecb,	// (0x000669b2) query_button_pane_t1

0x3ea0,	// (0x0005d987) main_tport_pane_ParamLimits

0x8b6c,	// (0x00062653) bg_popup_window_pane_cp01_ParamLimits

0x8b6c,	// (0x00062653) bg_popup_window_pane_cp01

0x8b86,	// (0x0006266d) heading_pane_cp08_ParamLimits

0x8b86,	// (0x0006266d) heading_pane_cp08

0x8b9a,	// (0x00062681) heading_pane_cp07_ParamLimits

0x8b9a,	// (0x00062681) heading_pane_cp07

0xc9f3,	// (0x000664da) cell_tport_appsw_pane_g2

0x0002,

0xfc7c,	// (0x00069763) cell_tport_appsw_pane_g

0x3449,	// (0x0005cf30) input_candi_list_open_g1

0xa861,	// (0x00064348) list_cale_time_pane_g6_ParamLimits

0xa861,	// (0x00064348) list_cale_time_pane_g6

0x4c6d,	// (0x0005e754) aid_size_touch_calib_1_ParamLimits

0x4c6d,	// (0x0005e754) aid_size_touch_calib_1

0x4c79,	// (0x0005e760) aid_size_touch_calib_2_ParamLimits

0x4c79,	// (0x0005e760) aid_size_touch_calib_2

0x4c8f,	// (0x0005e776) aid_size_touch_calib_3_ParamLimits

0x4c8f,	// (0x0005e776) aid_size_touch_calib_3

0x4cad,	// (0x0005e794) aid_size_touch_calib_4_ParamLimits

0x4cad,	// (0x0005e794) aid_size_touch_calib_4

0x4cc3,	// (0x0005e7aa) main_touch_calib_button_group_pane_ParamLimits

0x4cc3,	// (0x0005e7aa) main_touch_calib_button_group_pane

0x4cdb,	// (0x0005e7c2) main_touch_calib_pane_g1_ParamLimits

0x4ce7,	// (0x0005e7ce) main_touch_calib_pane_g2_ParamLimits

0x4cf3,	// (0x0005e7da) main_touch_calib_pane_g3_ParamLimits

0x4cff,	// (0x0005e7e6) main_touch_calib_pane_g4_ParamLimits

0xf680,	// (0x00069167) main_touch_calib_pane_g_ParamLimits

0x4d0b,	// (0x0005e7f2) main_touch_calib_pane_t1_ParamLimits

0x4d25,	// (0x0005e80c) main_touch_calib_pane_t2_ParamLimits

0x4d3f,	// (0x0005e826) main_touch_calib_pane_t3_ParamLimits

0x4d53,	// (0x0005e83a) main_touch_calib_pane_t4_ParamLimits

0x4d67,	// (0x0005e84e) main_touch_calib_pane_t5_ParamLimits

0xf689,	// (0x00069170) main_touch_calib_pane_t_ParamLimits

0xed31,	// (0x00068818) list_single_fp_cale_pane_g3_ParamLimits

0xed31,	// (0x00068818) list_single_fp_cale_pane_g3

0xd727,	// (0x0006720e) bg_button_pane_cp012_ParamLimits

0xd727,	// (0x0006720e) bg_vkb2_func_pane_cp03_ParamLimits

0x70f2,	// (0x00060bd9) cell_vitu2_function_top_pane_g1_ParamLimits

0xd727,	// (0x0006720e) bg_vkb2_func_pane_cp04_ParamLimits

0x7ecc,	// (0x000619b3) main_ncimui_button_group_pane_ParamLimits

0x7ecc,	// (0x000619b3) main_ncimui_button_group_pane

0x7f1a,	// (0x00061a01) main_ncimui_pane_t3_ParamLimits

0x7f1a,	// (0x00061a01) main_ncimui_pane_t3

0xcb1b,	// (0x00066602) phacti_button_group_pane

0xcdfe,	// (0x000668e5) aid_size_list_single_double_ParamLimits

0x904f,	// (0x00062b36) popup_ezdial_listscroll_window_ParamLimits

0x906b,	// (0x00062b52) popup_number_entry_window_cp01_ParamLimits

0x9116,	// (0x00062bfd) phacti_button_pane_ParamLimits

0x9116,	// (0x00062bfd) phacti_button_pane

0x0df9,	// (0x0005a8e0) bg_button_pane_cp14

0xced9,	// (0x000669c0) phacti_button_pane_t1

0x9127,	// (0x00062c0e) main_touch_calib_button_pane_ParamLimits

0x9127,	// (0x00062c0e) main_touch_calib_button_pane

0xa1c2,	// (0x00063ca9) bg_button_pane_cp18_ParamLimits

0xa1c2,	// (0x00063ca9) bg_button_pane_cp18

0xcee7,	// (0x000669ce) main_touch_calib_button_pane_t1_ParamLimits

0xcee7,	// (0x000669ce) main_touch_calib_button_pane_t1

0xcefd,	// (0x000669e4) main_touch_calib_button_pane_t2_ParamLimits

0xcefd,	// (0x000669e4) main_touch_calib_button_pane_t2

0x0001,

0xfd35,	// (0x0006981c) main_touch_calib_button_pane_t_ParamLimits

0xfd35,	// (0x0006981c) main_touch_calib_button_pane_t

0x0df9,	// (0x0005a8e0) cell_ncimui_button_pane

0x0df9,	// (0x0005a8e0) bg_button_pane_cp032

0xcf1b,	// (0x00066a02) cell_ncimui_button_pane_t1

0xd642,	// (0x00067129) image3_infobar_pane_ParamLimits

0xd642,	// (0x00067129) image3_infobar_pane

0x82cd,	// (0x00061db4) fs_bigclock_status_pane_ParamLimits

0x82cd,	// (0x00061db4) fs_bigclock_status_pane

0x82da,	// (0x00061dc1) main_fs_bigclock_clock_pane_ParamLimits

0x82da,	// (0x00061dc1) main_fs_bigclock_clock_pane

0x82ed,	// (0x00061dd4) main_fs_bigclock_indi_pane_ParamLimits

0x82ed,	// (0x00061dd4) main_fs_bigclock_indi_pane

0x8308,	// (0x00061def) main_fs_bigclock_swipe_pane_ParamLimits

0x8308,	// (0x00061def) main_fs_bigclock_swipe_pane

0x0df9,	// (0x0005a8e0) main_fs_clock_dumped_data

0x8329,	// (0x00061e10) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8329,	// (0x00061e10) list_single_fs_bigclock_indicator_pane_g1

0x8345,	// (0x00061e2c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8345,	// (0x00061e2c) list_single_fs_bigclock_indicator_pane_g2

0x835f,	// (0x00061e46) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x835f,	// (0x00061e46) list_single_fs_bigclock_indicator_pane_g3

0x8379,	// (0x00061e60) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8379,	// (0x00061e60) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb68,	// (0x0006964f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb68,	// (0x0006964f) list_single_fs_bigclock_indicator_pane_g

0x839f,	// (0x00061e86) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x839f,	// (0x00061e86) list_single_fs_bigclock_indicator_pane_t1

0x83c7,	// (0x00061eae) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x83c7,	// (0x00061eae) list_single_fs_bigclock_indicator_pane_t2

0x83ef,	// (0x00061ed6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x83ef,	// (0x00061ed6) list_single_fs_bigclock_indicator_pane_t3

0x8417,	// (0x00061efe) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8417,	// (0x00061efe) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb73,	// (0x0006965a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb73,	// (0x0006965a) list_single_fs_bigclock_indicator_pane_t

0xcf29,	// (0x00066a10) image3_infobar_fav_pane_ParamLimits

0xcf29,	// (0x00066a10) image3_infobar_fav_pane

0xcf39,	// (0x00066a20) image3_infobar_loc_pane_ParamLimits

0xcf39,	// (0x00066a20) image3_infobar_loc_pane

0xcf4d,	// (0x00066a34) image3_infobar_time_pane_ParamLimits

0xcf4d,	// (0x00066a34) image3_infobar_time_pane

0xe9c8,	// (0x000684af) image3_infobar_time_pane_g1

0xcf5d,	// (0x00066a44) image3_infobar_time_pane_t1

0xe9c8,	// (0x000684af) image3_infobar_loc_pane_g1

0xcf6b,	// (0x00066a52) image3_infobar_loc_pane_g2

0x0001,

0xfd3a,	// (0x00069821) image3_infobar_loc_pane_g

0xcf73,	// (0x00066a5a) image3_infobar_loc_pane_t1

0xe9c8,	// (0x000684af) image3_infobar_fav_pane_g1

0xcf81,	// (0x00066a68) image3_infobar_fav_pane_g2

0x0001,

0xfd3f,	// (0x00069826) image3_infobar_fav_pane_g

0xcf89,	// (0x00066a70) fs_bigclock_status_battery_pane

0xcf92,	// (0x00066a79) fs_bigclock_status_signal_pane

0xcf9b,	// (0x00066a82) fs_bigclock_status_title_pane

0xcfa4,	// (0x00066a8b) fs_bigclock_status_signal_pane_g1

0xcfad,	// (0x00066a94) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd44,	// (0x0006982b) fs_bigclock_status_signal_pane_g

0xcfb5,	// (0x00066a9c) fs_bigclock_status_battery_pane_g1

0xcfbe,	// (0x00066aa5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd49,	// (0x00069830) fs_bigclock_status_battery_pane_g

0xcfc6,	// (0x00066aad) fs_bigclock_status_title_pane_t1

0xe9c8,	// (0x000684af) main_fs_bigclock_clock_pane_g1

0xcfd4,	// (0x00066abb) main_fs_bigclock_clock_pane_g2

0xcfd4,	// (0x00066abb) main_fs_bigclock_clock_pane_g3

0xcfd4,	// (0x00066abb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd4e,	// (0x00069835) main_fs_bigclock_clock_pane_g

0x913c,	// (0x00062c23) main_fs_bigclock_clock_pane_t1

0x914a,	// (0x00062c31) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd57,	// (0x0006983e) main_fs_bigclock_clock_pane_t

0xcfdc,	// (0x00066ac3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xcfdc,	// (0x00066ac3) list_single_fs_bigclock_indicator_pane

0x9159,	// (0x00062c40) list_single_fs_bigclock_pane_ParamLimits

0x9159,	// (0x00062c40) list_single_fs_bigclock_pane

0xcff6,	// (0x00066add) main_fs_bigclock_indicator_pane_t1

0xd005,	// (0x00066aec) list_single_fs_bigclock_pane_g1

0xd00d,	// (0x00066af4) list_single_fs_bigclock_pane_t1

0xe9c8,	// (0x000684af) main_fs_bigclock_swipe_pane_g1

0xd04d,	// (0x00066b34) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd68,	// (0x0006984f) main_fs_bigclock_swipe_pane_g

0xd055,	// (0x00066b3c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd055,	// (0x00066b3c) main_fs_bigclock_swipe_pane_t1

0x2c77,	// (0x0005c75e) call_type_pane_ParamLimits

0x0df9,	// (0x0005a8e0) main_btmg_pane

0xccde,	// (0x000667c5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xccde,	// (0x000667c5) list_single_cale_mrui_row_pane_g2

0x0001,

0xfcdb,	// (0x000697c2) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcdb,	// (0x000697c2) list_single_cale_mrui_row_pane_g

0xce38,	// (0x0006691f) list_recal_vselct_arw_lo_pane

0xce40,	// (0x00066927) list_recal_vselct_arw_up_pane

0xbb9c,	// (0x00065683) list_recal_vselct_pane

0xd072,	// (0x00066b59) btmg_button_pane

0x91be,	// (0x00062ca5) main_btmg_pane_g1

0x0df9,	// (0x0005a8e0) bg_button_pane_cp044

0xd07c,	// (0x00066b63) btmg_button_pane_t1

0xe579,	// (0x00068060) aid_listscroll_gen

0x9a43,	// (0x0006352a) main_cntbar_detail_pane

0xca11,	// (0x000664f8) list_cmail_folder_pane

0xca21,	// (0x00066508) sp_fs_scroll_pane_cp03_ParamLimits

0x91c8,	// (0x00062caf) list_single_fs_dyc_pane_cp01_ParamLimits

0x91c8,	// (0x00062caf) list_single_fs_dyc_pane_cp01

0xd08a,	// (0x00066b71) aid_size_cmail_indent

0xd093,	// (0x00066b7a) list_single_dyc_row_pane_cp01

0x920a,	// (0x00062cf1) cntbar_detail_list_pane_ParamLimits

0x920a,	// (0x00062cf1) cntbar_detail_list_pane

0x9256,	// (0x00062d3d) main_cntbar_detail_cont_pane_ParamLimits

0x9256,	// (0x00062d3d) main_cntbar_detail_cont_pane

0x2b9c,	// (0x0005c683) scroll_pane_cp032_ParamLimits

0x2b9c,	// (0x0005c683) scroll_pane_cp032

0x926a,	// (0x00062d51) cntbar_detail_list_event_pane_ParamLimits

0x926a,	// (0x00062d51) cntbar_detail_list_event_pane

0x921a,	// (0x00062d01) cntbar_detail_list_shct_pane

0xa6da,	// (0x000641c1) aid_list_gen

0xd09c,	// (0x00066b83) aid_scroll

0xd0a5,	// (0x00066b8c) aid_size_touch_scroll_bar

0x927a,	// (0x00062d61) aid_list_double

0xd0ae,	// (0x00066b95) aid_list_single

0x9283,	// (0x00062d6a) aid_list_single_lg

0xd0b7,	// (0x00066b9e) aid_list_z_g_a_sm

0xd0bf,	// (0x00066ba6) aid_list_z_g_d

0xd0c7,	// (0x00066bae) aid_txt_z_prm

0x928c,	// (0x00062d73) aid_txt_z_prm_cp01

0x929a,	// (0x00062d81) aid_txt_z_sec

0x92a8,	// (0x00062d8f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92a8,	// (0x00062d8f) main_cntbar_detail_cont_pane_g1

0x92bc,	// (0x00062da3) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92bc,	// (0x00062da3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd6d,	// (0x00069854) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd6d,	// (0x00069854) main_cntbar_detail_cont_pane_g

0xd0d5,	// (0x00066bbc) main_cntbar_detail_cont_pane_t1

0xd0e3,	// (0x00066bca) main_cntbar_detail_cont_pane_t2

0xd0f1,	// (0x00066bd8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd72,	// (0x00069859) main_cntbar_detail_cont_pane_t

0x92cc,	// (0x00062db3) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92cc,	// (0x00062db3) cell_cntbar_detail_list_shct_pane

0xd0ff,	// (0x00066be6) cntbar_detail_list_shct_pane_g1

0xd108,	// (0x00066bef) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd79,	// (0x00069860) cntbar_detail_list_shct_pane_g

0x92e0,	// (0x00062dc7) cntbar_detail_list_event_pane_g1_ParamLimits

0x92e0,	// (0x00062dc7) cntbar_detail_list_event_pane_g1

0x92ec,	// (0x00062dd3) cntbar_detail_list_event_pane_g2_ParamLimits

0x92ec,	// (0x00062dd3) cntbar_detail_list_event_pane_g2

0x0005,

0xfd7e,	// (0x00069865) cntbar_detail_list_event_pane_g_ParamLimits

0xfd7e,	// (0x00069865) cntbar_detail_list_event_pane_g

0x9358,	// (0x00062e3f) cntbar_detail_list_event_pane_t1_ParamLimits

0x9358,	// (0x00062e3f) cntbar_detail_list_event_pane_t1

0x936d,	// (0x00062e54) cntbar_detail_list_event_pane_t2_ParamLimits

0x936d,	// (0x00062e54) cntbar_detail_list_event_pane_t2

0x0002,

0xfd8b,	// (0x00069872) cntbar_detail_list_event_pane_t_ParamLimits

0xfd8b,	// (0x00069872) cntbar_detail_list_event_pane_t

0xe9c8,	// (0x000684af) cell_cntbar_detail_list_shct_pane_g1

0x2fd9,	// (0x0005cac0) navi_pane_mv_g3

0x9a43,	// (0x0006352a) main_cntbar_detail_pane_ParamLimits

0x0df9,	// (0x0005a8e0) main_notif_wgt_pane

0xd458,	// (0x00066f3f) aid_tch_main_mp4_pane_g4

0xd63a,	// (0x00067121) popup_slider_window_cp02

0xce2f,	// (0x00066916) list_recal_day_event_pane

0x91de,	// (0x00062cc5) cntbar_detail_btn_pane_ParamLimits

0x91de,	// (0x00062cc5) cntbar_detail_btn_pane

0x91f4,	// (0x00062cdb) cntbar_detail_btn_pane_cp01_ParamLimits

0x91f4,	// (0x00062cdb) cntbar_detail_btn_pane_cp01

0x921a,	// (0x00062d01) cntbar_detail_list_shct_pane_ParamLimits

0x922a,	// (0x00062d11) cntbar_detail_pane_g1_ParamLimits

0x922a,	// (0x00062d11) cntbar_detail_pane_g1

0x923a,	// (0x00062d21) cntbar_detail_pane_t1_ParamLimits

0x923a,	// (0x00062d21) cntbar_detail_pane_t1

0x92f8,	// (0x00062ddf) cntbar_detail_list_event_pane_g3_ParamLimits

0x92f8,	// (0x00062ddf) cntbar_detail_list_event_pane_g3

0x9310,	// (0x00062df7) cntbar_detail_list_event_pane_g4_ParamLimits

0x9310,	// (0x00062df7) cntbar_detail_list_event_pane_g4

0x9328,	// (0x00062e0f) cntbar_detail_list_event_pane_g5_ParamLimits

0x9328,	// (0x00062e0f) cntbar_detail_list_event_pane_g5

0x9340,	// (0x00062e27) cntbar_detail_list_event_pane_g6_ParamLimits

0x9340,	// (0x00062e27) cntbar_detail_list_event_pane_g6

0x9382,	// (0x00062e69) cntbar_detail_list_event_pane_t3_ParamLimits

0x9382,	// (0x00062e69) cntbar_detail_list_event_pane_t3

0x9394,	// (0x00062e7b) popup_notif_wgt_window_ParamLimits

0x9394,	// (0x00062e7b) popup_notif_wgt_window

0x93ad,	// (0x00062e94) popup_submenu_window_cp01_ParamLimits

0x93ad,	// (0x00062e94) popup_submenu_window_cp01

0xae16,	// (0x000648fd) bg_popup_window_pane_cp10

0xd111,	// (0x00066bf8) listscroll_notif_wgt_pane

0xd11b,	// (0x00066c02) list_notif_wgt_window

0xd124,	// (0x00066c0b) scroll_pane_cp033

0xd12d,	// (0x00066c14) list_notif_wgt_row_pane_ParamLimits

0xd12d,	// (0x00066c14) list_notif_wgt_row_pane

0xd13f,	// (0x00066c26) aid_size_list_notif_wgt_del

0xd148,	// (0x00066c2f) list_notif_wgt_row_pane_g1

0xd150,	// (0x00066c37) list_notif_wgt_row_pane_g2

0xd158,	// (0x00066c3f) list_notif_wgt_row_pane_g3

0x0002,

0xfd92,	// (0x00069879) list_notif_wgt_row_pane_g

0xd161,	// (0x00066c48) list_notif_wgt_row_pane_t1

0xd16f,	// (0x00066c56) list_notif_wgt_row_pane_t2

0xd17d,	// (0x00066c64) list_notif_wgt_row_pane_t3

0x0002,

0xfd99,	// (0x00069880) list_notif_wgt_row_pane_t

0xb884,	// (0x0006536b) list_recal_day_event_pane_g1

0xd18b,	// (0x00066c72) list_recal_day_event_pane_t1

0x0df9,	// (0x0005a8e0) bg_button_pane_cp045

0xd19a,	// (0x00066c81) cntbar_detail_btn_pane_t1

0xe581,	// (0x00068068) main_callh_pane_ParamLimits

0xe581,	// (0x00068068) main_callh_pane

0x0df9,	// (0x0005a8e0) main_coverflow0_pane

0x0df9,	// (0x0005a8e0) main_wgtman_pane

0x8316,	// (0x00061dfd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8316,	// (0x00061dfd) main_fs_bigclock_unlock_btn_pane

0xc9eb,	// (0x000664d2) bg_button_pane_cp16

0xc9fb,	// (0x000664e2) cell_tport_appsw_pane_g3

0x93bf,	// (0x00062ea6) cf0_flow_pane_ParamLimits

0x93bf,	// (0x00062ea6) cf0_flow_pane

0xd1a8,	// (0x00066c8f) listscroll_cf0_pane

0xd1b1,	// (0x00066c98) main_cf0_pane_g1

0x93d4,	// (0x00062ebb) main_cf0_pane_t1_ParamLimits

0x93d4,	// (0x00062ebb) main_cf0_pane_t1

0x93eb,	// (0x00062ed2) main_cf0_pane_t2_ParamLimits

0x93eb,	// (0x00062ed2) main_cf0_pane_t2

0x0001,

0xfda0,	// (0x00069887) main_cf0_pane_t_ParamLimits

0xfda0,	// (0x00069887) main_cf0_pane_t

0xd1bb,	// (0x00066ca2) scroll_pane_cp11

0x9402,	// (0x00062ee9) cf0_flow_pane_g1

0x940a,	// (0x00062ef1) cf0_flow_pane_g2

0x0001,

0xfda5,	// (0x0006988c) cf0_flow_pane_g

0x9412,	// (0x00062ef9) cf0_flow_pane_t1

0x0df9,	// (0x0005a8e0) main_call6_pane

0x0df9,	// (0x0005a8e0) main_calllock_pane

0x9420,	// (0x00062f07) call6_btn_grp_pane_ParamLimits

0x9420,	// (0x00062f07) call6_btn_grp_pane

0x943a,	// (0x00062f21) call6_pane_g1_ParamLimits

0x943a,	// (0x00062f21) call6_pane_g1

0x944f,	// (0x00062f36) popup_call6_1st_window_ParamLimits

0x944f,	// (0x00062f36) popup_call6_1st_window

0x9460,	// (0x00062f47) popup_call6_2nd_window_ParamLimits

0x9460,	// (0x00062f47) popup_call6_2nd_window

0x9471,	// (0x00062f58) cell_call6_btn_pane_ParamLimits

0x9471,	// (0x00062f58) cell_call6_btn_pane

0xae16,	// (0x000648fd) bg_popup_call2_in_pane_cp03

0xd1c6,	// (0x00066cad) popup_call6_1st_window_g1

0xd1ce,	// (0x00066cb5) popup_call6_1st_window_g2

0xd1d6,	// (0x00066cbd) popup_call6_1st_window_g3

0x0002,

0xfdaa,	// (0x00069891) popup_call6_1st_window_g

0xd1de,	// (0x00066cc5) popup_call6_1st_window_t1

0xd1ed,	// (0x00066cd4) popup_call6_1st_window_t2

0xd1fd,	// (0x00066ce4) popup_call6_1st_window_t3

0x0002,

0xfdb1,	// (0x00069898) popup_call6_1st_window_t

0xae16,	// (0x000648fd) bg_popup_call2_in_pane_cp04

0xd1c6,	// (0x00066cad) popup_call6_2nd_window_g1

0xd1ce,	// (0x00066cb5) popup_call6_2nd_window_g2

0xd1d6,	// (0x00066cbd) popup_call6_2nd_window_g3

0x0002,

0xfdaa,	// (0x00069891) popup_call6_2nd_window_g

0xd1de,	// (0x00066cc5) popup_call6_2nd_window_t1

0x0df9,	// (0x0005a8e0) bg_button_pane_cp15

0xd20d,	// (0x00066cf4) cell_call6_btn_pane_g1

0xd216,	// (0x00066cfd) cell_call6_btn_pane_t1

0x9485,	// (0x00062f6c) listscroll_wgtman_pane_ParamLimits

0x9485,	// (0x00062f6c) listscroll_wgtman_pane

0x94a8,	// (0x00062f8f) wgtman_btn_pane_ParamLimits

0x94a8,	// (0x00062f8f) wgtman_btn_pane

0xaccd,	// (0x000647b4) aid_scroll_copy1

0xd225,	// (0x00066d0c) list_wgtman_pane

0x94eb,	// (0x00062fd2) wgtman_btn_pane_g1_ParamLimits

0x94eb,	// (0x00062fd2) wgtman_btn_pane_g1

0x9517,	// (0x00062ffe) wgtman_btn_pane_t1_ParamLimits

0x9517,	// (0x00062ffe) wgtman_btn_pane_t1

0xd22f,	// (0x00066d16) wgtman_btn_pane_t2_ParamLimits

0xd22f,	// (0x00066d16) wgtman_btn_pane_t2

0x0001,

0xfdb8,	// (0x0006989f) wgtman_btn_pane_t_ParamLimits

0xfdb8,	// (0x0006989f) wgtman_btn_pane_t

0x9554,	// (0x0006303b) listrow_wgtman_pane_ParamLimits

0x9554,	// (0x0006303b) listrow_wgtman_pane

0x9566,	// (0x0006304d) listrow_wgtman_pane_g1

0x956f,	// (0x00063056) listrow_wgtman_pane_g2

0x0001,

0xfdbd,	// (0x000698a4) listrow_wgtman_pane_g

0x9579,	// (0x00063060) listrow_wgtman_pane_t1

0x9587,	// (0x0006306e) listrow_wgtman_pane_t2

0x0001,

0xfdc2,	// (0x000698a9) listrow_wgtman_pane_t

0x9595,	// (0x0006307c) wait_bar_pane_cp09

0xd246,	// (0x00066d2d) main_calllock_btn_pane

0xd250,	// (0x00066d37) main_calllock_pane_g1

0x0df9,	// (0x0005a8e0) bg_button_pane_cp17

0xd25c,	// (0x00066d43) main_calllock_btn_pane_g1

0xd265,	// (0x00066d4c) main_calllock_btn_pane_t1

0x0df9,	// (0x0005a8e0) main_dialer3_pane

0x0df9,	// (0x0005a8e0) main_fmrd2_pane

0xe9c8,	// (0x000684af) main_fs_bigclock_unlock_btn_pane_g1

0xd27c,	// (0x00066d63) main_fs_bigclock_unlock_btn_pane_t1

0x959d,	// (0x00063084) area_fmrd2_info_pane_ParamLimits

0x959d,	// (0x00063084) area_fmrd2_info_pane

0x95ae,	// (0x00063095) area_fmrd2_visual_pane_ParamLimits

0x95ae,	// (0x00063095) area_fmrd2_visual_pane

0x95bc,	// (0x000630a3) fmrd2_indi_pane_ParamLimits

0x95bc,	// (0x000630a3) fmrd2_indi_pane

0x95c9,	// (0x000630b0) area_fmrd2_visual_pane_g1

0x95d1,	// (0x000630b8) area_fmrd2_visual_pane_t1

0x95e1,	// (0x000630c8) area_fmrd2_visual_pane_t2

0x95f1,	// (0x000630d8) area_fmrd2_visual_pane_t3

0x0002,

0xfdcc,	// (0x000698b3) area_fmrd2_visual_pane_t

0x9601,	// (0x000630e8) area_fmrd2_info_pane_g1

0x9609,	// (0x000630f0) area_fmrd2_info_pane_t1

0x9619,	// (0x00063100) area_fmrd2_info_pane_t2

0x9629,	// (0x00063110) area_fmrd2_info_pane_t3

0x9639,	// (0x00063120) area_fmrd2_info_pane_t4

0x0003,

0xfdd3,	// (0x000698ba) area_fmrd2_info_pane_t

0x9647,	// (0x0006312e) fmrd2_indi_pane_t1

0x9657,	// (0x0006313e) fmrd2_indi_pane_t2

0x9667,	// (0x0006314e) fmrd2_indi_pane_t3

0x0002,

0xfddc,	// (0x000698c3) fmrd2_indi_pane_t

0x8388,	// (0x00061e6f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8388,	// (0x00061e6f) list_single_fs_bigclock_indicator_pane_g5

0x842c,	// (0x00061f13) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x842c,	// (0x00061f13) list_single_fs_bigclock_indicator_pane_t5

0x8dcc,	// (0x000628b3) aid_cell_bcale_month_pane_ParamLimits

0x8dcc,	// (0x000628b3) aid_cell_bcale_month_pane

0x8dde,	// (0x000628c5) bcale_month_pane_ParamLimits

0x8dde,	// (0x000628c5) bcale_month_pane

0x8df6,	// (0x000628dd) bcale_preview_pane_ParamLimits

0x8df6,	// (0x000628dd) bcale_preview_pane

0xd00d,	// (0x00066af4) list_single_fs_bigclock_pane_t1_ParamLimits

0xd029,	// (0x00066b10) list_single_fs_bigclock_pane_t2_ParamLimits

0xd029,	// (0x00066b10) list_single_fs_bigclock_pane_t2

0x0001,

0xfd63,	// (0x0006984a) list_single_fs_bigclock_pane_t_ParamLimits

0xfd63,	// (0x0006984a) list_single_fs_bigclock_pane_t

0xd274,	// (0x00066d5b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc7,	// (0x000698ae) main_fs_bigclock_unlock_btn_pane_g

0x9677,	// (0x0006315e) aid_dia3_key_size_ParamLimits

0x9677,	// (0x0006315e) aid_dia3_key_size

0x9686,	// (0x0006316d) aid_dia3_listrow_size_ParamLimits

0x9686,	// (0x0006316d) aid_dia3_listrow_size

0x969b,	// (0x00063182) dia3_keypad_fun_pane_ParamLimits

0x969b,	// (0x00063182) dia3_keypad_fun_pane

0x96b7,	// (0x0006319e) dia3_keypad_num_pane_ParamLimits

0x96b7,	// (0x0006319e) dia3_keypad_num_pane

0x96d2,	// (0x000631b9) dia3_listscroll_pane_ParamLimits

0x96d2,	// (0x000631b9) dia3_listscroll_pane

0x96e5,	// (0x000631cc) dia3_numentry_pane_ParamLimits

0x96e5,	// (0x000631cc) dia3_numentry_pane

0xd28a,	// (0x00066d71) dia3_list_pane

0xd295,	// (0x00066d7c) scroll_pane_cp12

0x0df9,	// (0x0005a8e0) bg_dia3_numentry_pane

0x96f9,	// (0x000631e0) dia3_numentry_pane_t1

0x9708,	// (0x000631ef) cell_dia3_key_num_pane

0x9710,	// (0x000631f7) cell_dia3_key0_fun_pane_ParamLimits

0x9710,	// (0x000631f7) cell_dia3_key0_fun_pane

0x9724,	// (0x0006320b) cell_dia3_key1_fun_pane_ParamLimits

0x9724,	// (0x0006320b) cell_dia3_key1_fun_pane

0x973c,	// (0x00063223) dia3_listrow_pane

0xc2a5,	// (0x00065d8c) bg_dia3_numentry_pane_g1

0x0df9,	// (0x0005a8e0) bg_button_pane_cp21

0xd2a0,	// (0x00066d87) cell_dia3_key_num_pane_t1

0xd2ae,	// (0x00066d95) cell_dia3_key_num_pane_t2

0xd2bd,	// (0x00066da4) cell_dia3_key_num_pane_t3

0xd2cc,	// (0x00066db3) cell_dia3_key_num_pane_t4

0x0003,

0xfde3,	// (0x000698ca) cell_dia3_key_num_pane_t

0x0df9,	// (0x0005a8e0) bg_button_pane_cp19

0x974e,	// (0x00063235) cell_dia3_key0_fun_pane_g1

0x0df9,	// (0x0005a8e0) bg_button_pane_cp20

0x9756,	// (0x0006323d) cell_dia3_key1_fun_pane_g1

0x975e,	// (0x00063245) area_left_week_number_pane

0x9767,	// (0x0006324e) area_top_day_name_pane

0x9770,	// (0x00063257) frame_month_view_pane

0x9778,	// (0x0006325f) grid_month_view_pane

0x9782,	// (0x00063269) cell_top_day_name_pane_ParamLimits

0x9782,	// (0x00063269) cell_top_day_name_pane

0x9798,	// (0x0006327f) cell_area_left_week_number_pane_ParamLimits

0x9798,	// (0x0006327f) cell_area_left_week_number_pane

0x97ac,	// (0x00063293) cell_month_view_pane_ParamLimits

0x97ac,	// (0x00063293) cell_month_view_pane

0xd2db,	// (0x00066dc2) frm_month_g1

0x97c7,	// (0x000632ae) frm_month_g2

0x97cf,	// (0x000632b6) frm_month_g3

0x97d7,	// (0x000632be) frm_month_g4

0x97df,	// (0x000632c6) frm_month_g5

0x97e7,	// (0x000632ce) frm_month_g6

0x97ef,	// (0x000632d6) frm_month_g7

0xd2e4,	// (0x00066dcb) frm_month_g8

0x97f7,	// (0x000632de) frm_month_g9

0x9800,	// (0x000632e7) frm_month_g10

0x9809,	// (0x000632f0) frm_month_g11

0x9812,	// (0x000632f9) frm_month_g12

0x981b,	// (0x00063302) frm_month_g13

0x9824,	// (0x0006330b) frm_month_g14

0x982d,	// (0x00063314) frm_month_g15

0x9836,	// (0x0006331d) frm_month_g16

0x000f,

0xfdec,	// (0x000698d3) frm_month_g

0x983f,	// (0x00063326) cell_top_day_name_pane_t1

0x984e,	// (0x00063335) cell_area_left_week_number_pane_g1

0x983f,	// (0x00063326) cell_area_left_week_number_pane_t1

0xe9c8,	// (0x000684af) cell_month_view_pane_g1

0x9856,	// (0x0006333d) cell_month_view_pane_t1

0x0df9,	// (0x0005a8e0) main_fps_pane

0xc763,	// (0x0006624a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc763,	// (0x0006624a) cmail_ddmenu_btn02_pane_cp1

0xc77f,	// (0x00066266) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc77f,	// (0x00066266) cmail_ddmenu_btn02_pane_cp2

0x909d,	// (0x00062b84) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x909d,	// (0x00062b84) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd14,	// (0x000697fb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd14,	// (0x000697fb) cmail_ddmenu_btn02_pane_g

0x90bb,	// (0x00062ba2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x90bb,	// (0x00062ba2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd19,	// (0x00069800) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd19,	// (0x00069800) cmail_ddmenu_btn02_pane_t

0x9865,	// (0x0006334c) fps_text_pane_ParamLimits

0x9865,	// (0x0006334c) fps_text_pane

0x987c,	// (0x00063363) main_fps_pane_g1_ParamLimits

0x987c,	// (0x00063363) main_fps_pane_g1

0x9896,	// (0x0006337d) wait_bar_pane_cp010_ParamLimits

0x9896,	// (0x0006337d) wait_bar_pane_cp010

0x98a7,	// (0x0006338e) fps_text_pane_t1_ParamLimits

0x98a7,	// (0x0006338e) fps_text_pane_t1

0x6527,	// (0x0006000e) cam4_image_uncrop_pane_g1

0x6530,	// (0x00060017) cam4_image_uncrop_pane_g2

0x6539,	// (0x00060020) cam4_image_uncrop_pane_g3

0x6542,	// (0x00060029) cam4_image_uncrop_pane_g4

0x0003,

0xf7e7,	// (0x000692ce) cam4_image_uncrop_pane_g

0x973c,	// (0x00063223) dia3_listrow_pane_ParamLimits

0x0df9,	// (0x0005a8e0) main_phob2_pane

0x8c05,	// (0x000626ec) cell_tport_appsw_pane_cp02_ParamLimits

0x8c05,	// (0x000626ec) cell_tport_appsw_pane_cp02

0x8c19,	// (0x00062700) cell_tport_appsw_pane_cp03_ParamLimits

0x8c19,	// (0x00062700) cell_tport_appsw_pane_cp03

0x0df9,	// (0x0005a8e0) phob2_contact_card_pane

0x0df9,	// (0x0005a8e0) phob2_listscroll_pane

0xd2ed,	// (0x00066dd4) phob2_list_pane

0xd2f5,	// (0x00066ddc) scroll_pane_cp034

0x98bf,	// (0x000633a6) phob2_cc_data_pane_ParamLimits

0x98bf,	// (0x000633a6) phob2_cc_data_pane

0x98de,	// (0x000633c5) phob2_cc_listscroll_pane_ParamLimits

0x98de,	// (0x000633c5) phob2_cc_listscroll_pane

0x98fc,	// (0x000633e3) list_double_large_graphic_phob2_pane_ParamLimits

0x98fc,	// (0x000633e3) list_double_large_graphic_phob2_pane

0xd2fd,	// (0x00066de4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd2fd,	// (0x00066de4) list_double_large_graphic_phob2_pane_g1

0xd30a,	// (0x00066df1) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd30a,	// (0x00066df1) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe0d,	// (0x000698f4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe0d,	// (0x000698f4) list_double_large_graphic_phob2_pane_g

0xd316,	// (0x00066dfd) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd316,	// (0x00066dfd) list_double_large_graphic_phob2_pane_t1

0xd32b,	// (0x00066e12) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd32b,	// (0x00066e12) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe12,	// (0x000698f9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe12,	// (0x000698f9) list_double_large_graphic_phob2_pane_t

0x0df9,	// (0x0005a8e0) list_highlight_pane_cp024

0xd33d,	// (0x00066e24) phob2_cc_button_pane

0x990e,	// (0x000633f5) phob2_cc_data_pane_g1_ParamLimits

0x990e,	// (0x000633f5) phob2_cc_data_pane_g1

0x9923,	// (0x0006340a) phob2_cc_data_pane_g2_ParamLimits

0x9923,	// (0x0006340a) phob2_cc_data_pane_g2

0x0001,

0xfe17,	// (0x000698fe) phob2_cc_data_pane_g_ParamLimits

0xfe17,	// (0x000698fe) phob2_cc_data_pane_g

0x9935,	// (0x0006341c) phob2_cc_data_pane_t1_ParamLimits

0x9935,	// (0x0006341c) phob2_cc_data_pane_t1

0x994d,	// (0x00063434) phob2_cc_data_pane_t2_ParamLimits

0x994d,	// (0x00063434) phob2_cc_data_pane_t2

0x9965,	// (0x0006344c) phob2_cc_data_pane_t3_ParamLimits

0x9965,	// (0x0006344c) phob2_cc_data_pane_t3

0x0002,

0xfe1c,	// (0x00069903) phob2_cc_data_pane_t_ParamLimits

0xfe1c,	// (0x00069903) phob2_cc_data_pane_t

0xd345,	// (0x00066e2c) phob2_cc_list_pane_ParamLimits

0xd345,	// (0x00066e2c) phob2_cc_list_pane

0xb91d,	// (0x00065404) scroll_pane_cp035_ParamLimits

0xb91d,	// (0x00065404) scroll_pane_cp035

0x9a43,	// (0x0006352a) bg_button_pane_cp033

0xd351,	// (0x00066e38) phob2_cc_button_pane_g1

0xd35d,	// (0x00066e44) phob2_cc_button_pane_t1

0xd372,	// (0x00066e59) phob2_cc_button_pane_t2

0x0001,

0xfe23,	// (0x0006990a) phob2_cc_button_pane_t

0x997d,	// (0x00063464) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x997d,	// (0x00063464) list_double_large_graphic_phob2_cc_pane

0x998f,	// (0x00063476) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x998f,	// (0x00063476) list_double_large_graphic_phob2_cc_pane_g1

0x999b,	// (0x00063482) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x999b,	// (0x00063482) list_double_large_graphic_phob2_cc_pane_g2

0x99a7,	// (0x0006348e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99a7,	// (0x0006348e) list_double_large_graphic_phob2_cc_pane_g3

0x99b3,	// (0x0006349a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99b3,	// (0x0006349a) list_double_large_graphic_phob2_cc_pane_g4

0x99bf,	// (0x000634a6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x99bf,	// (0x000634a6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe28,	// (0x0006990f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe28,	// (0x0006990f) list_double_large_graphic_phob2_cc_pane_g

0x99cb,	// (0x000634b2) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x99cb,	// (0x000634b2) list_double_large_graphic_phob2_cc_pane_t1

0x99f4,	// (0x000634db) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x99f4,	// (0x000634db) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe33,	// (0x0006991a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe33,	// (0x0006991a) list_double_large_graphic_phob2_cc_pane_t

0xd384,	// (0x00066e6b) list_highlight_pane_cp025_ParamLimits

0xd384,	// (0x00066e6b) list_highlight_pane_cp025

0x9a43,	// (0x0006352a) bg_button_pane_cp033_ParamLimits

0xd351,	// (0x00066e38) phob2_cc_button_pane_g1_ParamLimits

0xd35d,	// (0x00066e44) phob2_cc_button_pane_t1_ParamLimits

0xd372,	// (0x00066e59) phob2_cc_button_pane_t2_ParamLimits

0xfe23,	// (0x0006990a) phob2_cc_button_pane_t_ParamLimits

0x0e3b,	// (0x0005a922) popup_wgtman_window

0xb71f,	// (0x00065206) scroll_pane_cp038

0x94cd,	// (0x00062fb4) wgtman_btn_pane_cp_01_ParamLimits

0x94cd,	// (0x00062fb4) wgtman_btn_pane_cp_01

0xd392,	// (0x00066e79) wgtman_content_pane

0xd39b,	// (0x00066e82) wgtman_heading_pane

0x0df9,	// (0x0005a8e0) bg_heading_pane_cp02

0xd3a4,	// (0x00066e8b) wgtman_heading_pane_g1

0xd3ac,	// (0x00066e93) wgtman_heading_pane_t1

0xd3ba,	// (0x00066ea1) scroll_pane_cp036

0xd3c2,	// (0x00066ea9) wgtman_list_pane

0xd3ca,	// (0x00066eb1) wgtman_list_pane_t1_ParamLimits

0xd3ca,	// (0x00066eb1) wgtman_list_pane_t1

0xd694,	// (0x0006717b) cam4_grid_pane

0x7283,	// (0x00060d6a) bg_button_pane_cp015_ParamLimits

0x7295,	// (0x00060d7c) bg_button_pane_cp016_ParamLimits

0x72a8,	// (0x00060d8f) bg_button_pane_cp017_ParamLimits

0x7300,	// (0x00060de7) popup_vitu2_query_window_g3_ParamLimits

0x7300,	// (0x00060de7) popup_vitu2_query_window_g3

0x73bd,	// (0x00060ea4) popup_vitu2_query_window_t6_ParamLimits

0x73bd,	// (0x00060ea4) popup_vitu2_query_window_t6

0x73e8,	// (0x00060ecf) popup_vitu2_query_window_t7_ParamLimits

0x73e8,	// (0x00060ecf) popup_vitu2_query_window_t7

0x6527,	// (0x0006000e) cam4_grid_pane_g1

0x6530,	// (0x00060017) cam4_grid_pane_g2

0xd3e7,	// (0x00066ece) cam4_grid_pane_g3

0xd3f0,	// (0x00066ed7) cam4_grid_pane_g4

0x0003,

0xfe38,	// (0x0006991f) cam4_grid_pane_g

0x1e19,	// (0x0005b900) aid_placing_vt_slider_lsc_ParamLimits

0x2124,	// (0x0005bc0b) vidtel_button_pane_ParamLimits

0x2124,	// (0x0005bc0b) vidtel_button_pane

0x0df9,	// (0x0005a8e0) bg_button_pane_cp034

0x9a1d,	// (0x00063504) vidtel_button_pane_g1

0xd3fb,	// (0x00066ee2) vidtel_button_pane_t1

0xb83c,	// (0x00065323) aid_size_vtel_slider_touch

0xb91d,	// (0x00065404) scroll_pane_cp039

0xc2e3,	// (0x00065dca) ncim_query_button_pane_cp01_ParamLimits

0xc302,	// (0x00065de9) ncimui_query_pane_g1_ParamLimits

0x9a43,	// (0x0006352a) input_focus_pane_cp012_ParamLimits

0xc327,	// (0x00065e0e) ncim_query_entry_pane_t1_ParamLimits

0xb91d,	// (0x00065404) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
