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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00016941 };

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
0x8280,	// (0x0001ebc1) Screen

0x828c,	// (0x0001ebcd) application_window

0x82cc,	// (0x0001ec0d) area_bottom_pane_ParamLimits

0x82cc,	// (0x0001ec0d) area_bottom_pane

0x8301,	// (0x0001ec42) area_top_pane_ParamLimits

0x8301,	// (0x0001ec42) area_top_pane

0x0414,	// (0x00016d55) call_video_uplink_pane_ParamLimits

0x0414,	// (0x00016d55) call_video_uplink_pane

0x838e,	// (0x0001eccf) main_pane_ParamLimits

0x838e,	// (0x0001eccf) main_pane

0x2e44,	// (0x00019785) context_pane

0xafab,	// (0x000218ec) navi_pane

0xafcb,	// (0x0002190c) popup_cale_events_window_ParamLimits

0xafcb,	// (0x0002190c) popup_cale_events_window

0x2e57,	// (0x00019798) popup_mup_playback_window

0xafe3,	// (0x00021924) signal_pane

0x0ba7,	// (0x000174e8) main_browser_pane

0x193a,	// (0x0001827b) main_burst_pane

0xae75,	// (0x000217b6) main_calc_pane

0x193a,	// (0x0001827b) main_cale_day_pane

0x0ba7,	// (0x000174e8) main_cale_month_pane

0x193a,	// (0x0001827b) main_cale_week_pane

0x193a,	// (0x0001827b) main_call_pane

0x0853,	// (0x00017194) main_call_poc_pane

0x193a,	// (0x0001827b) main_camera_pane

0x193a,	// (0x0001827b) main_chi_dic_pane

0x17bf,	// (0x00018100) main_clock_pane

0x0853,	// (0x00017194) main_fmradio_pane

0x193a,	// (0x0001827b) main_graph_messa_pane

0x0853,	// (0x00017194) main_help_pane

0x0ba7,	// (0x000174e8) main_im_pane

0x0aae,	// (0x000173ef) main_image_pane_ParamLimits

0x0aae,	// (0x000173ef) main_image_pane

0x0853,	// (0x00017194) main_location2_pane

0x193a,	// (0x0001827b) main_location_pane

0x0853,	// (0x00017194) main_messa_pane

0x0853,	// (0x00017194) main_mp2_pane

0x193a,	// (0x0001827b) main_mp_pane

0x0853,	// (0x00017194) main_msg_pane

0x0853,	// (0x00017194) main_mup_eq_pane

0x0853,	// (0x00017194) main_mup_pane

0x193a,	// (0x0001827b) main_notes_pane

0x0853,	// (0x00017194) main_pec_pane

0x0853,	// (0x00017194) main_phob_pane

0x0853,	// (0x00017194) main_pinb_pane

0x0853,	// (0x00017194) main_postcard_pane

0x0853,	// (0x00017194) main_qdial_pane

0x193a,	// (0x0001827b) main_skin_pane

0x0853,	// (0x00017194) main_smil2_pane

0x193a,	// (0x0001827b) main_smil_pane

0x193a,	// (0x0001827b) main_video_pane

0x193a,	// (0x0001827b) main_video_tele_pane

0x0aae,	// (0x000173ef) main_viewer_pane_ParamLimits

0x0aae,	// (0x000173ef) main_viewer_pane

0x193a,	// (0x0001827b) main_vorec_pane

0xaeab,	// (0x000217ec) popup_blid_sat_info_window_ParamLimits

0xaeab,	// (0x000217ec) popup_blid_sat_info_window

0xaec1,	// (0x00021802) popup_dyc_status_message_window_ParamLimits

0xaec1,	// (0x00021802) popup_dyc_status_message_window

0xaed1,	// (0x00021812) popup_grid_large_graphic_window_ParamLimits

0xaed1,	// (0x00021812) popup_grid_large_graphic_window

0xaf47,	// (0x00021888) popup_loc_request_window_ParamLimits

0xaf47,	// (0x00021888) popup_loc_request_window

0xaf83,	// (0x000218c4) popup_wml_address_window_ParamLimits

0xaf83,	// (0x000218c4) popup_wml_address_window

0xad4d,	// (0x0002168e) call_muted_g1

0xaa0f,	// (0x00021350) popup_call_audio_conf_window_ParamLimits

0xaa0f,	// (0x00021350) popup_call_audio_conf_window

0xad5d,	// (0x0002169e) popup_call_audio_first_window_ParamLimits

0xad5d,	// (0x0002169e) popup_call_audio_first_window

0xad9d,	// (0x000216de) popup_call_audio_in_window_ParamLimits

0xad9d,	// (0x000216de) popup_call_audio_in_window

0xadc1,	// (0x00021702) popup_call_audio_out_window_ParamLimits

0xadc1,	// (0x00021702) popup_call_audio_out_window

0xade3,	// (0x00021724) popup_call_audio_second_window_ParamLimits

0xade3,	// (0x00021724) popup_call_audio_second_window

0xae13,	// (0x00021754) popup_call_audio_wait_window_ParamLimits

0xae13,	// (0x00021754) popup_call_audio_wait_window

0xae34,	// (0x00021775) popup_number_entry_window_ParamLimits

0xae34,	// (0x00021775) popup_number_entry_window

0x0440,	// (0x00016d81) bg_popup_call_pane_cp05_ParamLimits

0x0440,	// (0x00016d81) bg_popup_call_pane_cp05

0x0460,	// (0x00016da1) popup_number_entry_window_t1

0x0473,	// (0x00016db4) popup_number_entry_window_t2

0x0485,	// (0x00016dc6) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00025a2d) popup_number_entry_window_t

0x0497,	// (0x00016dd8) text_title_cp2

0x04aa,	// (0x00016deb) bg_popup_call_pane_cp_ParamLimits

0x04aa,	// (0x00016deb) bg_popup_call_pane_cp

0x04b8,	// (0x00016df9) call_thumbnail_pane

0x04c0,	// (0x00016e01) popup_call_audio_in_window_g1_ParamLimits

0x04c0,	// (0x00016e01) popup_call_audio_in_window_g1

0x04cc,	// (0x00016e0d) popup_call_audio_in_window_g2_ParamLimits

0x04cc,	// (0x00016e0d) popup_call_audio_in_window_g2

0x04d8,	// (0x00016e19) popup_call_audio_in_window_g3_ParamLimits

0x04d8,	// (0x00016e19) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00025a36) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00025a36) popup_call_audio_in_window_g

0x04e4,	// (0x00016e25) popup_call_audio_in_window_t1_ParamLimits

0x04e4,	// (0x00016e25) popup_call_audio_in_window_t1

0x0500,	// (0x00016e41) popup_call_audio_in_window_t2_ParamLimits

0x0500,	// (0x00016e41) popup_call_audio_in_window_t2

0x051c,	// (0x00016e5d) popup_call_audio_in_window_t3_ParamLimits

0x051c,	// (0x00016e5d) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00025a3d) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00025a3d) popup_call_audio_in_window_t

0x04aa,	// (0x00016deb) bg_popup_call_pane_cp01_ParamLimits

0x04aa,	// (0x00016deb) bg_popup_call_pane_cp01

0x04b8,	// (0x00016df9) call_thumbnail_pane_cp02

0x052f,	// (0x00016e70) call_type_pane_cp022

0x0537,	// (0x00016e78) popup_call_audio_out_window_g1_ParamLimits

0x0537,	// (0x00016e78) popup_call_audio_out_window_g1

0x0549,	// (0x00016e8a) popup_call_audio_out_window_g2_ParamLimits

0x0549,	// (0x00016e8a) popup_call_audio_out_window_g2

0x0555,	// (0x00016e96) popup_call_audio_out_window_g3_ParamLimits

0x0555,	// (0x00016e96) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00025a44) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00025a44) popup_call_audio_out_window_g

0x0567,	// (0x00016ea8) popup_call_audio_out_window_t1_ParamLimits

0x0567,	// (0x00016ea8) popup_call_audio_out_window_t1

0x057f,	// (0x00016ec0) popup_call_audio_out_window_t2_ParamLimits

0x057f,	// (0x00016ec0) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00025a4b) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00025a4b) popup_call_audio_out_window_t

0x0594,	// (0x00016ed5) bg_popup_call_pane_ParamLimits

0x0594,	// (0x00016ed5) bg_popup_call_pane

0x856f,	// (0x0001eeb0) call_thumbnail_pane_cp_ParamLimits

0x856f,	// (0x0001eeb0) call_thumbnail_pane_cp

0x0618,	// (0x00016f59) call_type_pane_cp01_ParamLimits

0x0618,	// (0x00016f59) call_type_pane_cp01

0x065c,	// (0x00016f9d) popup_call_audio_first_window_g1_ParamLimits

0x065c,	// (0x00016f9d) popup_call_audio_first_window_g1

0x06a8,	// (0x00016fe9) popup_call_audio_first_window_g2_ParamLimits

0x06a8,	// (0x00016fe9) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00025a50) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00025a50) popup_call_audio_first_window_g

0x06ec,	// (0x0001702d) popup_call_audio_first_window_t1_ParamLimits

0x06ec,	// (0x0001702d) popup_call_audio_first_window_t1

0x0798,	// (0x000170d9) popup_call_audio_first_window_t4_ParamLimits

0x0798,	// (0x000170d9) popup_call_audio_first_window_t4

0x0824,	// (0x00017165) popup_call_audio_first_window_t5_ParamLimits

0x0824,	// (0x00017165) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00025a55) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00025a55) popup_call_audio_first_window_t

0x0853,	// (0x00017194) bg_popup_call_pane_cp02

0x085d,	// (0x0001719e) call_type_pane_cp023

0x0865,	// (0x000171a6) popup_call_audio_wait_window_g1

0x086d,	// (0x000171ae) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00025a5c) popup_call_audio_wait_window_g

0x0875,	// (0x000171b6) popup_call_audio_wait_window_t3

0x0883,	// (0x000171c4) bg_popup_call_pane_cp03_ParamLimits

0x0883,	// (0x000171c4) bg_popup_call_pane_cp03

0x08e3,	// (0x00017224) call_thumbnail_pane_cp011_ParamLimits

0x08e3,	// (0x00017224) call_thumbnail_pane_cp011

0x08ef,	// (0x00017230) call_type_pane_cp034_ParamLimits

0x08ef,	// (0x00017230) call_type_pane_cp034

0x092b,	// (0x0001726c) popup_call_audio_second_window_g1_ParamLimits

0x092b,	// (0x0001726c) popup_call_audio_second_window_g1

0x0967,	// (0x000172a8) popup_call_audio_second_window_g2_ParamLimits

0x0967,	// (0x000172a8) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00025a61) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00025a61) popup_call_audio_second_window_g

0x09a3,	// (0x000172e4) popup_call_audio_second_window_t1_ParamLimits

0x09a3,	// (0x000172e4) popup_call_audio_second_window_t1

0x0a24,	// (0x00017365) popup_call_audio_second_window_t2_ParamLimits

0x0a24,	// (0x00017365) popup_call_audio_second_window_t2

0x0a5a,	// (0x0001739b) popup_call_audio_second_window_t3_ParamLimits

0x0a5a,	// (0x0001739b) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00025a66) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00025a66) popup_call_audio_second_window_t

0x0853,	// (0x00017194) bg_popup_call_pane_cp04

0x0a90,	// (0x000173d1) list_conf_pane

0x0a98,	// (0x000173d9) popup_call_audio_conf_window_t1

0x0aa6,	// (0x000173e7) call_thumbnail_pane_g1

0x0aae,	// (0x000173ef) bg_pinb_pane_ParamLimits

0x0aae,	// (0x000173ef) bg_pinb_pane

0x0abc,	// (0x000173fd) find_pinb_pane

0x0ac5,	// (0x00017406) listscroll_pinb_pane_ParamLimits

0x0ac5,	// (0x00017406) listscroll_pinb_pane

0x0ad4,	// (0x00017415) pinb_bg_pane_g1

0x8593,	// (0x0001eed4) pinb_bg_pane_g2

0x859f,	// (0x0001eee0) pinb_bg_pane_g3

0x85ab,	// (0x0001eeec) pinb_bg_pane_g4

0x85b7,	// (0x0001eef8) pinb_bg_pane_g5

0x85c3,	// (0x0001ef04) pinb_bg_pane_g6

0x85ce,	// (0x0001ef0f) pinb_bg_pane_g7

0x85d9,	// (0x0001ef1a) pinb_bg_pane_g8

0x85e4,	// (0x0001ef25) pinb_bg_pane_g9

0x85ee,	// (0x0001ef2f) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00025a6d) pinb_bg_pane_g

0x860b,	// (0x0001ef4c) grid_pinb_pane

0x8616,	// (0x0001ef57) list_pinb_pane

0x8621,	// (0x0001ef62) scroll_pane_cp01_ParamLimits

0x8621,	// (0x0001ef62) scroll_pane_cp01

0x0ade,	// (0x0001741f) find_pinb_pane_g1_ParamLimits

0x0ade,	// (0x0001741f) find_pinb_pane_g1

0x0af6,	// (0x00017437) find_pinb_pane_t1

0x0b08,	// (0x00017449) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00025a87) find_pinb_pane_t

0x0b1d,	// (0x0001745e) input_focus_pane_cp01_ParamLimits

0x0b1d,	// (0x0001745e) input_focus_pane_cp01

0x8633,	// (0x0001ef74) cell_pinb_pane_ParamLimits

0x8633,	// (0x0001ef74) cell_pinb_pane

0x8658,	// (0x0001ef99) cell_pinb_pane_g1_ParamLimits

0x8658,	// (0x0001ef99) cell_pinb_pane_g1

0x866d,	// (0x0001efae) cell_pinb_pane_g2_ParamLimits

0x866d,	// (0x0001efae) cell_pinb_pane_g2

0x0b29,	// (0x0001746a) cell_pinb_pane_g3_ParamLimits

0x0b29,	// (0x0001746a) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00025a8c) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00025a8c) cell_pinb_pane_g

0x0853,	// (0x00017194) grid_highlight_pane_cp01

0x8679,	// (0x0001efba) list_pinb_item_pane_ParamLimits

0x8679,	// (0x0001efba) list_pinb_item_pane

0x0853,	// (0x00017194) list_highlight_pane_cp02

0x8699,	// (0x0001efda) list_pinb_item_pane_g1_ParamLimits

0x8699,	// (0x0001efda) list_pinb_item_pane_g1

0x0b35,	// (0x00017476) list_pinb_item_pane_g2_ParamLimits

0x0b35,	// (0x00017476) list_pinb_item_pane_g2

0x86a6,	// (0x0001efe7) list_pinb_item_pane_g3_ParamLimits

0x86a6,	// (0x0001efe7) list_pinb_item_pane_g3

0x86b7,	// (0x0001eff8) list_pinb_item_pane_g4_ParamLimits

0x86b7,	// (0x0001eff8) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00025a93) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00025a93) list_pinb_item_pane_g

0x86c3,	// (0x0001f004) list_pinb_item_pane_t1_ParamLimits

0x86c3,	// (0x0001f004) list_pinb_item_pane_t1

0x6e84,	// (0x0001d7c5) calc_display_pane

0x6ea2,	// (0x0001d7e3) calc_paper_pane

0x6ebe,	// (0x0001d7ff) grid_calc_pane

0x0853,	// (0x00017194) bg_list_pane_cp01

0x86da,	// (0x0001f01b) clock_g1

0x86e2,	// (0x0001f023) clock_g2

0x0001,

0xf15b,	// (0x00025a9c) clock_g

0x86ec,	// (0x0001f02d) clock_t1_ParamLimits

0x86ec,	// (0x0001f02d) clock_t1

0x8701,	// (0x0001f042) clock_t2_ParamLimits

0x8701,	// (0x0001f042) clock_t2

0x8713,	// (0x0001f054) clock_t3_ParamLimits

0x8713,	// (0x0001f054) clock_t3

0x8725,	// (0x0001f066) clock_t4_ParamLimits

0x8725,	// (0x0001f066) clock_t4

0x8737,	// (0x0001f078) clock_t5_ParamLimits

0x8737,	// (0x0001f078) clock_t5

0x874c,	// (0x0001f08d) clock_t6_ParamLimits

0x874c,	// (0x0001f08d) clock_t6

0x875e,	// (0x0001f09f) clock_t7_ParamLimits

0x875e,	// (0x0001f09f) clock_t7

0x8770,	// (0x0001f0b1) clock_t8_ParamLimits

0x8770,	// (0x0001f0b1) clock_t8

0x8786,	// (0x0001f0c7) clock_t9_ParamLimits

0x8786,	// (0x0001f0c7) clock_t9

0x0008,

0xf160,	// (0x00025aa1) clock_t_ParamLimits

0xf160,	// (0x00025aa1) clock_t

0x0b49,	// (0x0001748a) popup_clock_analogue_window_cp02

0x0b49,	// (0x0001748a) popup_clock_digital_window_cp01

0x0b51,	// (0x00017492) listscroll_help_pane

0x0853,	// (0x00017194) phob_pre_status_pane

0x0b5b,	// (0x0001749c) grid_qdial_pane

0x0853,	// (0x00017194) listscroll_mce_pane

0x0b65,	// (0x000174a6) bg_notes_pane

0x0b6f,	// (0x000174b0) list_notes_pane

0x879c,	// (0x0001f0dd) scroll_pane_cp06

0x0b79,	// (0x000174ba) bg_calc_paper_pane

0x6ef2,	// (0x0001d833) list_calc_pane

0x0ba7,	// (0x000174e8) bg_calc_display_pane

0x6f0c,	// (0x0001d84d) calc_display_pane_t1

0x6f21,	// (0x0001d862) calc_display_pane_t2

0x6f36,	// (0x0001d877) calc_display_pane_t3

0x0002,

0xf173,	// (0x00025ab4) calc_display_pane_t

0x6f48,	// (0x0001d889) cell_calc_pane_ParamLimits

0x6f48,	// (0x0001d889) cell_calc_pane

0x0bc5,	// (0x00017506) bg_calc_paper_pane_g1

0x0bdd,	// (0x0001751e) bg_calc_paper_pane_g2

0x0bd1,	// (0x00017512) bg_calc_paper_pane_g3

0x0bf5,	// (0x00017536) bg_calc_paper_pane_g4

0x0be9,	// (0x0001752a) bg_calc_paper_pane_g5

0x87a7,	// (0x0001f0e8) bg_calc_paper_pane_g6

0x87b8,	// (0x0001f0f9) bg_calc_paper_pane_g7

0x87c9,	// (0x0001f10a) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00025abb) bg_calc_paper_pane_g

0x87da,	// (0x0001f11b) calc_bg_paper_pane_g9

0x87eb,	// (0x0001f12c) list_calc_item_pane_ParamLimits

0x87eb,	// (0x0001f12c) list_calc_item_pane

0x0c01,	// (0x00017542) list_calc_item_pane_g1

0x6f75,	// (0x0001d8b6) list_calc_item_pane_t1_ParamLimits

0x6f75,	// (0x0001d8b6) list_calc_item_pane_t1

0x6f87,	// (0x0001d8c8) list_calc_item_pane_t2_ParamLimits

0x6f87,	// (0x0001d8c8) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00025acc) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00025acc) list_calc_item_pane_t

0x0c20,	// (0x00017561) cell_calc_pane_g1

0x0c2a,	// (0x0001756b) grid_highlight_pane_cp02

0x881a,	// (0x0001f15b) bg_calc_display_pane_g1

0x6fb7,	// (0x0001d8f8) bg_calc_display_pane_g2

0x3326,	// (0x00019c67) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00025ad6) bg_calc_display_pane_g

0x6fc1,	// (0x0001d902) cell_qdial_pane_ParamLimits

0x6fc1,	// (0x0001d902) cell_qdial_pane

0x8823,	// (0x0001f164) cell_qdial_pane_g1_ParamLimits

0x8823,	// (0x0001f164) cell_qdial_pane_g1

0x8830,	// (0x0001f171) cell_qdial_pane_g2_ParamLimits

0x8830,	// (0x0001f171) cell_qdial_pane_g2

0x0c4c,	// (0x0001758d) cell_qdial_pane_g3_ParamLimits

0x0c4c,	// (0x0001758d) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00025add) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00025add) cell_qdial_pane_g

0x884e,	// (0x0001f18f) cell_qdial_pane_t1_ParamLimits

0x884e,	// (0x0001f18f) cell_qdial_pane_t1

0x8866,	// (0x0001f1a7) cell_qdial_pane_t2_ParamLimits

0x8866,	// (0x0001f1a7) cell_qdial_pane_t2

0x8879,	// (0x0001f1ba) cell_qdial_pane_t3_ParamLimits

0x8879,	// (0x0001f1ba) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00025ae6) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00025ae6) cell_qdial_pane_t

0x0853,	// (0x00017194) grid_highlight_pane_cp04

0x0c58,	// (0x00017599) thumbnail_qdial_pane_ParamLimits

0x0c58,	// (0x00017599) thumbnail_qdial_pane

0x0cb4,	// (0x000175f5) list_help_pane

0x0cbd,	// (0x000175fe) scroll_pane_cp02

0x888c,	// (0x0001f1cd) help_list_pane_t1_ParamLimits

0x888c,	// (0x0001f1cd) help_list_pane_t1

0x6fd5,	// (0x0001d916) bg_notes_pane_g2

0x6fdd,	// (0x0001d91e) bg_notes_pane_g3

0x6fe5,	// (0x0001d926) notes_bg_pane_g1

0x6fed,	// (0x0001d92e) notes_bg_pane_g4

0x6ff5,	// (0x0001d936) notes_bg_pane_g5

0x6ffd,	// (0x0001d93e) notes_bg_pane_g6

0x7005,	// (0x0001d946) notes_bg_pane_g7

0x700d,	// (0x0001d94e) notes_bg_pane_g8

0x7015,	// (0x0001d956) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00025b04) notes_bg_pane_g

0x88bf,	// (0x0001f200) list_notes_text_pane_ParamLimits

0x88bf,	// (0x0001f200) list_notes_text_pane

0x0d0e,	// (0x0001764f) list_notes_text_pane_g1

0x88e4,	// (0x0001f225) list_notes_text_pane_t1

0x0ba7,	// (0x000174e8) listscroll_cale_week_pane

0x890f,	// (0x0001f250) bg_cale_heading_pane

0x0d28,	// (0x00017669) bg_cale_pane_cp01

0x892b,	// (0x0001f26c) cale_week_corner_pane

0x8941,	// (0x0001f282) cale_week_day_heading_pane

0x895d,	// (0x0001f29e) cale_week_scroll_pane_g1

0x8976,	// (0x0001f2b7) cale_week_scroll_pane_g2

0x8987,	// (0x0001f2c8) cale_week_scroll_pane_g3

0x8998,	// (0x0001f2d9) cale_week_scroll_pane_g4

0x89a9,	// (0x0001f2ea) cale_week_scroll_pane_g5

0x89ba,	// (0x0001f2fb) cale_week_scroll_pane_g6

0x89cb,	// (0x0001f30c) cale_week_scroll_pane_g7

0x89de,	// (0x0001f31f) cale_week_scroll_pane_g8

0x89f1,	// (0x0001f332) cale_week_scroll_pane_g9

0x8a02,	// (0x0001f343) cale_week_scroll_pane_g10

0x8a13,	// (0x0001f354) cale_week_scroll_pane_g11

0x8a24,	// (0x0001f365) cale_week_scroll_pane_g12

0x8a35,	// (0x0001f376) cale_week_scroll_pane_g13

0x8a4e,	// (0x0001f38f) cale_week_scroll_pane_g14

0x8a67,	// (0x0001f3a8) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00025b13) cale_week_scroll_pane_g

0x8a80,	// (0x0001f3c1) cale_week_time_pane

0x8a93,	// (0x0001f3d4) grid_cale_week_pane

0x8ab0,	// (0x0001f3f1) scroll_pane_cp08

0x8aca,	// (0x0001f40b) cell_cale_week_pane_ParamLimits

0x8aca,	// (0x0001f40b) cell_cale_week_pane

0x8b16,	// (0x0001f457) cale_week_day_heading_pane_t1

0x8b2f,	// (0x0001f470) cale_week_day_heading_pane_t2

0x8b48,	// (0x0001f489) cale_week_day_heading_pane_t3

0x8b61,	// (0x0001f4a2) cale_week_day_heading_pane_t4

0x8b7a,	// (0x0001f4bb) cale_week_day_heading_pane_t5

0x8b93,	// (0x0001f4d4) cale_week_day_heading_pane_t6

0x8bac,	// (0x0001f4ed) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00025b32) cale_week_day_heading_pane_t

0x0d53,	// (0x00017694) bg_cale_side_pane

0x701d,	// (0x0001d95e) cale_week_time_pane_t1

0x7035,	// (0x0001d976) cale_week_time_pane_t2

0x704d,	// (0x0001d98e) cale_week_time_pane_t3

0x7065,	// (0x0001d9a6) cale_week_time_pane_t4

0x707d,	// (0x0001d9be) cale_week_time_pane_t5

0x7095,	// (0x0001d9d6) cale_week_time_pane_t6

0x70ad,	// (0x0001d9ee) cale_week_time_pane_t7

0x70cd,	// (0x0001da0e) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00025b41) cale_week_time_pane_t

0x8bc5,	// (0x0001f506) cell_cale_week_pane_g2

0x8bd6,	// (0x0001f517) cell_cale_week_pane_g3_ParamLimits

0x8bd6,	// (0x0001f517) cell_cale_week_pane_g3

0x0d61,	// (0x000176a2) grid_highlight_pane_cp07

0x0d69,	// (0x000176aa) listscroll_gms_pane

0x0d73,	// (0x000176b4) grid_gms_pane

0x0d7c,	// (0x000176bd) listscroll_gms_pane_g1

0x0d84,	// (0x000176c5) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00025b52) listscroll_gms_pane_g

0x8bee,	// (0x0001f52f) scroll_pane_cp010

0x8bf9,	// (0x0001f53a) cell_gms_pane_ParamLimits

0x8bf9,	// (0x0001f53a) cell_gms_pane

0x8c0c,	// (0x0001f54d) cell_gms_pane_g1

0x0d8c,	// (0x000176cd) cell_gms_pane_g2

0x0d94,	// (0x000176d5) cell_gms_pane_g3

0x0d9d,	// (0x000176de) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00025b57) cell_gms_pane_g

0x0da6,	// (0x000176e7) grid_highlight_pane_cp09

0xacf5,	// (0x00021636) phob_pre_status_pane_g1

0xacfd,	// (0x0002163e) phob_pre_status_pane_g2

0xad05,	// (0x00021646) phob_pre_status_pane_g3

0xad0d,	// (0x0002164e) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00025f46) phob_pre_status_pane_g

0xad1d,	// (0x0002165e) phob_pre_status_pane_t1

0xad2d,	// (0x0002166e) phob_pre_status_pane_t2

0xad3d,	// (0x0002167e) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00025f51) phob_pre_status_pane_t

0x0853,	// (0x00017194) bg_list_pane_cp05

0x70f5,	// (0x0001da36) grid_vorec_pane

0x70ff,	// (0x0001da40) vorec_t1

0x710d,	// (0x0001da4e) vorec_t2

0x711b,	// (0x0001da5c) vorec_t3

0x7129,	// (0x0001da6a) vorec_t4

0x7137,	// (0x0001da78) vorec_t5

0x7145,	// (0x0001da86) vorec_t6

0x0006,

0xf21f,	// (0x00025b60) vorec_t

0x7161,	// (0x0001daa2) wait_bar_pane_cp01

0x8c14,	// (0x0001f555) cell_vorec_pane_ParamLimits

0x8c14,	// (0x0001f555) cell_vorec_pane

0x0e18,	// (0x00017759) cell_vorec_pane_g1

0x0853,	// (0x00017194) grid_highlight_pane_cp05

0x8c37,	// (0x0001f578) cams_zoom_pane

0x8c43,	// (0x0001f584) image_vga_pane

0x8c52,	// (0x0001f593) main_camera_pane_g1

0x8c60,	// (0x0001f5a1) main_camera_pane_g2

0x8c6c,	// (0x0001f5ad) main_camera_pane_g3

0x8c78,	// (0x0001f5b9) main_camera_pane_g4

0x8c84,	// (0x0001f5c5) main_camera_pane_g5

0x8c90,	// (0x0001f5d1) main_camera_pane_g6

0x8c9c,	// (0x0001f5dd) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00025b6f) main_camera_pane_g

0x8ca8,	// (0x0001f5e9) main_camera_pane_t1

0x8cba,	// (0x0001f5fb) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00025b80) main_camera_pane_t

0x8cdb,	// (0x0001f61c) cams_zoom_pane_cp_ParamLimits

0x8cdb,	// (0x0001f61c) cams_zoom_pane_cp

0x8cff,	// (0x0001f640) image_cif_pane_ParamLimits

0x8cff,	// (0x0001f640) image_cif_pane

0x8d1d,	// (0x0001f65e) image_subqcif_pane

0x8d25,	// (0x0001f666) main_video_pane_g1_ParamLimits

0x8d25,	// (0x0001f666) main_video_pane_g1

0x8d45,	// (0x0001f686) main_video_pane_g2_ParamLimits

0x8d45,	// (0x0001f686) main_video_pane_g2

0x8d75,	// (0x0001f6b6) main_video_pane_g3_ParamLimits

0x8d75,	// (0x0001f6b6) main_video_pane_g3

0x8d9e,	// (0x0001f6df) main_video_pane_g4_ParamLimits

0x8d9e,	// (0x0001f6df) main_video_pane_g4

0x8dc7,	// (0x0001f708) main_video_pane_g5_ParamLimits

0x8dc7,	// (0x0001f708) main_video_pane_g5

0x0e2e,	// (0x0001776f) main_video_pane_g6_ParamLimits

0x0e2e,	// (0x0001776f) main_video_pane_g6

0x0006,

0xf244,	// (0x00025b85) main_video_pane_g_ParamLimits

0xf244,	// (0x00025b85) main_video_pane_g

0x8deb,	// (0x0001f72c) main_video_pane_t1_ParamLimits

0x8deb,	// (0x0001f72c) main_video_pane_t1

0x0e48,	// (0x00017789) cams_zoom_pane_g1

0x0e51,	// (0x00017792) cams_zoom_pane_g2

0x0e5a,	// (0x0001779b) cams_zoom_pane_g3

0x0e63,	// (0x000177a4) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00025b94) cams_zoom_pane_g

0x8e35,	// (0x0001f776) grid_cams_pane

0x8e43,	// (0x0001f784) linegrid_cams_pane

0x8e51,	// (0x0001f792) cell_cams_pane_ParamLimits

0x8e51,	// (0x0001f792) cell_cams_pane

0x0e6c,	// (0x000177ad) cams_burst_image_pane

0x0e74,	// (0x000177b5) cell_cams_pane_g1

0x0853,	// (0x00017194) grid_highlight_pane_cp03

0x0c20,	// (0x00017561) mp_bg_pane_g1

0x0853,	// (0x00017194) bg_list_pane_cp03

0x2d1c,	// (0x0001965d) bg_mp_pane

0x2d24,	// (0x00019665) grid_mp_pane

0x2d2c,	// (0x0001966d) media_player_g1

0x2d34,	// (0x00019675) media_player_t1

0x2d42,	// (0x00019683) media_player_t2

0x2d50,	// (0x00019691) media_player_t3

0x2d5e,	// (0x0001969f) media_player_t4

0x2d6c,	// (0x000196ad) media_player_t5

0x2d7a,	// (0x000196bb) media_player_t6

0x2d88,	// (0x000196c9) media_player_t7

0x0006,

0xf5ef,	// (0x00025f30) media_player_t

0x2d96,	// (0x000196d7) wait_bar_pane_cp02

0xf5d4,	// (0x00025f15) main_usb_pane_t

0xacec,	// (0x0002162d) cell_mp_pane

0x0c20,	// (0x00017561) cell_mp_pane_g1

0x0853,	// (0x00017194) grid_highlight_pane_cp06

0x0f1c,	// (0x0001785d) grid_skin_colour_pane

0x0f24,	// (0x00017865) list_highlight_pane_cp03

0x8ebb,	// (0x0001f7fc) skin_g1

0x0f2c,	// (0x0001786d) skin_t1

0x0f3b,	// (0x0001787c) skin_t2

0x0001,

0xf288,	// (0x00025bc9) skin_t

0x8ec5,	// (0x0001f806) cell_skin_colour_pane_ParamLimits

0x8ec5,	// (0x0001f806) cell_skin_colour_pane

0x0f49,	// (0x0001788a) cell_skin_colour_pane_g1

0x8f47,	// (0x0001f888) call_video_g1_ParamLimits

0x8f47,	// (0x0001f888) call_video_g1

0x8f57,	// (0x0001f898) call_video_g2_ParamLimits

0x8f57,	// (0x0001f898) call_video_g2

0x0001,

0xf28d,	// (0x00025bce) call_video_g_ParamLimits

0xf28d,	// (0x00025bce) call_video_g

0x8fb1,	// (0x0001f8f2) call_video_uplink_pane_cp1_ParamLimits

0x8fb1,	// (0x0001f8f2) call_video_uplink_pane_cp1

0x0f5b,	// (0x0001789c) call_video_uplink_pane_cp2

0x907d,	// (0x0001f9be) video_down_crop_pane_ParamLimits

0x907d,	// (0x0001f9be) video_down_crop_pane

0x917b,	// (0x0001fabc) video_down_pane_ParamLimits

0x917b,	// (0x0001fabc) video_down_pane

0x0f63,	// (0x000178a4) video_down_subqcif_pane_ParamLimits

0x0f63,	// (0x000178a4) video_down_subqcif_pane

0x0f7b,	// (0x000178bc) video_down_subqcif_pane_cp_ParamLimits

0x0f7b,	// (0x000178bc) video_down_subqcif_pane_cp

0x0f9f,	// (0x000178e0) im_reading_pane_ParamLimits

0x0f9f,	// (0x000178e0) im_reading_pane

0x929d,	// (0x0001fbde) im_writing_pane_ParamLimits

0x929d,	// (0x0001fbde) im_writing_pane

0x92bb,	// (0x0001fbfc) im_reading_pane_t1

0x0fb9,	// (0x000178fa) list_im_pane

0x0fca,	// (0x0001790b) scroll_pane_cp07

0x930f,	// (0x0001fc50) im_writing_pane_t1_ParamLimits

0x930f,	// (0x0001fc50) im_writing_pane_t1

0x0fe3,	// (0x00017924) im_writing_pane_t2_ParamLimits

0x0fe3,	// (0x00017924) im_writing_pane_t2

0x0001,

0xf297,	// (0x00025bd8) im_writing_pane_t_ParamLimits

0xf297,	// (0x00025bd8) im_writing_pane_t

0x0853,	// (0x00017194) input_focus_pane_cp04

0x0853,	// (0x00017194) input_focus_pane_cp05

0x9324,	// (0x0001fc65) list_im_single_pane_ParamLimits

0x9324,	// (0x0001fc65) list_im_single_pane

0x9348,	// (0x0001fc89) list_single_im_pane_t1

0xacb0,	// (0x000215f1) blid_accuracy_pane

0xacb8,	// (0x000215f9) blid_compass_pane

0xacc2,	// (0x00021603) main_location_t1

0xacd0,	// (0x00021611) main_location_t2

0xacde,	// (0x0002161f) main_location_t3

0x0002,

0xf5fe,	// (0x00025f3f) main_location_t

0x0853,	// (0x00017194) aid_levels_location

0x0c20,	// (0x00017561) blid_accuracy_pane_g1

0x0c20,	// (0x00017561) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00025c3a) blid_accuracy_pane_g

0x102b,	// (0x0001796c) wml_content_pane

0x1069,	// (0x000179aa) wml_button_pane_ParamLimits

0x1069,	// (0x000179aa) wml_button_pane

0x9357,	// (0x0001fc98) wml_list_single_large_pane_ParamLimits

0x9357,	// (0x0001fc98) wml_list_single_large_pane

0x9381,	// (0x0001fcc2) wml_list_single_medium_pane_ParamLimits

0x9381,	// (0x0001fcc2) wml_list_single_medium_pane

0x93b2,	// (0x0001fcf3) wml_list_single_small_pane_ParamLimits

0x93b2,	// (0x0001fcf3) wml_list_single_small_pane

0x107d,	// (0x000179be) wml_selection_box_pane_ParamLimits

0x107d,	// (0x000179be) wml_selection_box_pane

0x1090,	// (0x000179d1) wml_list_single_pane_t1

0x109f,	// (0x000179e0) wml_list_single_medium_pane_t1

0x10ae,	// (0x000179ef) wml_list_single_large_pane_t1

0x10bd,	// (0x000179fe) input_focus_pane_cp02_ParamLimits

0x10bd,	// (0x000179fe) input_focus_pane_cp02

0x10d0,	// (0x00017a11) wml_selection_box_pane_g1

0x10d9,	// (0x00017a1a) wml_selection_box_pane_t1_ParamLimits

0x10d9,	// (0x00017a1a) wml_selection_box_pane_t1

0x0aae,	// (0x000173ef) bg_wml_button_pane_ParamLimits

0x0aae,	// (0x000173ef) bg_wml_button_pane

0x10f1,	// (0x00017a32) wml_button_pane_g1

0x10f9,	// (0x00017a3a) wml_button_pane_t1

0x10f1,	// (0x00017a32) wml_button_bg_pane_g1

0x1109,	// (0x00017a4a) wml_button_bg_pane_g2

0x1111,	// (0x00017a52) wml_button_bg_pane_g3

0x1119,	// (0x00017a5a) wml_button_bg_pane_g4

0x1121,	// (0x00017a62) wml_button_bg_pane_g5

0x1129,	// (0x00017a6a) wml_button_bg_pane_g6

0x1131,	// (0x00017a72) wml_button_bg_pane_g7

0x1139,	// (0x00017a7a) wml_button_bg_pane_g8

0x1141,	// (0x00017a82) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00025bdd) wml_button_bg_pane_g

0x93ec,	// (0x0001fd2d) bg_list_pane_cp02

0x1149,	// (0x00017a8a) mce_header_pane_ParamLimits

0x1149,	// (0x00017a8a) mce_header_pane

0x115f,	// (0x00017aa0) mce_icon_pane

0x115f,	// (0x00017aa0) mce_image_pane

0x1168,	// (0x00017aa9) mce_text_pane_ParamLimits

0x1168,	// (0x00017aa9) mce_text_pane

0x93f6,	// (0x0001fd37) scroll_pane_cp03

0x1061,	// (0x000179a2) scroll_pane_cp04

0x117b,	// (0x00017abc) scroll_pane_cp05_ParamLimits

0x117b,	// (0x00017abc) scroll_pane_cp05

0x9400,	// (0x0001fd41) mce_header_field_pane_ParamLimits

0x9400,	// (0x0001fd41) mce_header_field_pane

0x9420,	// (0x0001fd61) mce_header_field_pane_2_ParamLimits

0x9420,	// (0x0001fd61) mce_header_field_pane_2

0x9436,	// (0x0001fd77) mce_header_field_pane_3

0x943e,	// (0x0001fd7f) list_single_mce_message_pane_ParamLimits

0x943e,	// (0x0001fd7f) list_single_mce_message_pane

0x9463,	// (0x0001fda4) list_single_mce_smart_pane_ParamLimits

0x9463,	// (0x0001fda4) list_single_mce_smart_pane

0x1187,	// (0x00017ac8) input_focus_pane_cp03

0x1190,	// (0x00017ad1) list_header_data_pane

0x9493,	// (0x0001fdd4) mce_header_field_pane_t1

0x94a1,	// (0x0001fde2) list_single_mce_header_pane_ParamLimits

0x94a1,	// (0x0001fde2) list_single_mce_header_pane

0x1198,	// (0x00017ad9) list_single_mce_header_pane_t1

0x11a7,	// (0x00017ae8) list_single_mce_message_pane_g1

0x11af,	// (0x00017af0) list_single_mce_message_pane_t1

0x94e5,	// (0x0001fe26) bg_cale_heading_pane_cp01_ParamLimits

0x94e5,	// (0x0001fe26) bg_cale_heading_pane_cp01

0x11bd,	// (0x00017afe) bg_cale_pane_cp02_ParamLimits

0x11bd,	// (0x00017afe) bg_cale_pane_cp02

0x9518,	// (0x0001fe59) cale_month_corner_pane

0x952e,	// (0x0001fe6f) cale_month_day_heading_pane_ParamLimits

0x952e,	// (0x0001fe6f) cale_month_day_heading_pane

0x9571,	// (0x0001feb2) cale_month_pane_g1_ParamLimits

0x9571,	// (0x0001feb2) cale_month_pane_g1

0x959d,	// (0x0001fede) cale_month_pane_g2_ParamLimits

0x959d,	// (0x0001fede) cale_month_pane_g2

0x95c0,	// (0x0001ff01) cale_month_pane_g3_ParamLimits

0x95c0,	// (0x0001ff01) cale_month_pane_g3

0x95fc,	// (0x0001ff3d) cale_month_pane_g4_ParamLimits

0x95fc,	// (0x0001ff3d) cale_month_pane_g4

0x9638,	// (0x0001ff79) cale_month_pane_g5_ParamLimits

0x9638,	// (0x0001ff79) cale_month_pane_g5

0x9674,	// (0x0001ffb5) cale_month_pane_g6_ParamLimits

0x9674,	// (0x0001ffb5) cale_month_pane_g6

0x96b0,	// (0x0001fff1) cale_month_pane_g7_ParamLimits

0x96b0,	// (0x0001fff1) cale_month_pane_g7

0x96fc,	// (0x0002003d) cale_month_pane_g8_ParamLimits

0x96fc,	// (0x0002003d) cale_month_pane_g8

0x9748,	// (0x00020089) cale_month_pane_g9_ParamLimits

0x9748,	// (0x00020089) cale_month_pane_g9

0x978e,	// (0x000200cf) cale_month_pane_g10_ParamLimits

0x978e,	// (0x000200cf) cale_month_pane_g10

0x97c8,	// (0x00020109) cale_month_pane_g11_ParamLimits

0x97c8,	// (0x00020109) cale_month_pane_g11

0x9806,	// (0x00020147) cale_month_pane_g12_ParamLimits

0x9806,	// (0x00020147) cale_month_pane_g12

0x9844,	// (0x00020185) cale_month_pane_g13_ParamLimits

0x9844,	// (0x00020185) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00025bf0) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00025bf0) cale_month_pane_g

0x9882,	// (0x000201c3) cale_month_week_pane

0x9895,	// (0x000201d6) grid_cale_month_pane_ParamLimits

0x9895,	// (0x000201d6) grid_cale_month_pane

0x98d3,	// (0x00020214) cale_month_day_heading_pane_t1

0x9931,	// (0x00020272) cale_month_day_heading_pane_t2

0x9996,	// (0x000202d7) cale_month_day_heading_pane_t3

0x99fb,	// (0x0002033c) cale_month_day_heading_pane_t4

0x9a60,	// (0x000203a1) cale_month_day_heading_pane_t5

0x9ac5,	// (0x00020406) cale_month_day_heading_pane_t6

0x9b2a,	// (0x0002046b) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00025c0b) cale_month_day_heading_pane_t

0x0d53,	// (0x00017694) bg_cale_side_pane_cp01

0x9b9f,	// (0x000204e0) cale_month_week_pane_t1

0x9bb6,	// (0x000204f7) cale_month_week_pane_t2

0x9bcd,	// (0x0002050e) cale_month_week_pane_t3

0x9be4,	// (0x00020525) cale_month_week_pane_t4

0x9bfb,	// (0x0002053c) cale_month_week_pane_t5

0x9c16,	// (0x00020557) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00025c1a) cale_month_week_pane_t

0x9c35,	// (0x00020576) cell_cale_month_pane_ParamLimits

0x9c35,	// (0x00020576) cell_cale_month_pane

0x7169,	// (0x0001daaa) cell_cale_month_pane_g1

0x7175,	// (0x0001dab6) cell_cale_month_pane_t1_ParamLimits

0x7175,	// (0x0001dab6) cell_cale_month_pane_t1

0x0d61,	// (0x000176a2) grid_highlight_pane_cp08

0x0c20,	// (0x00017561) main_smil_g1

0x9cfb,	// (0x0002063c) smil_status_pane

0x1228,	// (0x00017b69) smil_text_pane

0x2c3c,	// (0x0001957d) bg_popup_call3_rect_pane_g8

0x2c44,	// (0x00019585) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00025ed3) bg_popup_call3_rect_pane_g

0x2ed1,	// (0x00019812) smil_status_volume_pane_g1

0x1232,	// (0x00017b73) smil_status_pane_t1

0x72ab,	// (0x0001dbec) volume_smil_pane

0x1249,	// (0x00017b8a) list_smil_text_pane

0x9d0e,	// (0x0002064f) scroll_pane_cp011

0x9d19,	// (0x0002065a) smil_text_list_pane_t1_ParamLimits

0x9d19,	// (0x0002065a) smil_text_list_pane_t1

0x7191,	// (0x0001dad2) aid_volume_smil_ParamLimits

0x7191,	// (0x0001dad2) aid_volume_smil

0x0c20,	// (0x00017561) smil_volume_pane_g1

0x0c20,	// (0x00017561) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00025c3a) smil_volume_pane_g

0x0ba7,	// (0x000174e8) listscroll_cale_day_pane

0x1275,	// (0x00017bb6) bg_cale_pane

0x128d,	// (0x00017bce) list_cale_pane

0x129e,	// (0x00017bdf) scroll_pane_cp09

0x12af,	// (0x00017bf0) cale_bg_pane_g1

0x12b7,	// (0x00017bf8) cale_bg_pane_g2

0x12bf,	// (0x00017c00) cale_bg_pane_g3

0x12c7,	// (0x00017c08) cale_bg_pane_g4

0x12cf,	// (0x00017c10) cale_bg_pane_g5

0x12d7,	// (0x00017c18) cale_bg_pane_g6

0x12df,	// (0x00017c20) cale_bg_pane_g7

0x12e7,	// (0x00017c28) cale_bg_pane_g8

0x12ef,	// (0x00017c30) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00025c3f) cale_bg_pane_g

0x9d91,	// (0x000206d2) list_cale_time_pane_ParamLimits

0x9d91,	// (0x000206d2) list_cale_time_pane

0x12f7,	// (0x00017c38) list_cale_time_pane_g1_ParamLimits

0x12f7,	// (0x00017c38) list_cale_time_pane_g1

0x1303,	// (0x00017c44) list_cale_time_pane_g2_ParamLimits

0x1303,	// (0x00017c44) list_cale_time_pane_g2

0x9dad,	// (0x000206ee) list_cale_time_pane_g3_ParamLimits

0x9dad,	// (0x000206ee) list_cale_time_pane_g3

0x9dbb,	// (0x000206fc) list_cale_time_pane_g4_ParamLimits

0x9dbb,	// (0x000206fc) list_cale_time_pane_g4

0x9dc9,	// (0x0002070a) list_cale_time_pane_g5_ParamLimits

0x9dc9,	// (0x0002070a) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00025c52) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00025c52) list_cale_time_pane_g

0x131d,	// (0x00017c5e) list_cale_time_pane_t1_ParamLimits

0x131d,	// (0x00017c5e) list_cale_time_pane_t1

0x1345,	// (0x00017c86) list_cale_time_pane_t2_ParamLimits

0x1345,	// (0x00017c86) list_cale_time_pane_t2

0xa087,	// (0x000209c8) aid_blid_cardinal_pane

0xa0c9,	// (0x00020a0a) compass_pane_t4

0x136d,	// (0x00017cae) list_cale_time_pane_t4_ParamLimits

0x136d,	// (0x00017cae) list_cale_time_pane_t4

0xa0d7,	// (0x00020a18) compass_pane_t5

0xa0e7,	// (0x00020a28) compass_pane_t6

0xa0f5,	// (0x00020a36) compass_pane_t7

0x188c,	// (0x000181cd) navi_pane_cc_t1

0x19f3,	// (0x00018334) aid_phob_thumbnail_center_pane

0xa7b6,	// (0x000210f7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00025c5f) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00025c5f) list_cale_time_pane_t

0x04aa,	// (0x00016deb) bg_popup_window_pane_cp02_ParamLimits

0x04aa,	// (0x00016deb) bg_popup_window_pane_cp02

0x1395,	// (0x00017cd6) heading_pane_cp01_ParamLimits

0x1395,	// (0x00017cd6) heading_pane_cp01

0x13a1,	// (0x00017ce2) loc_req_pane_ParamLimits

0x13a1,	// (0x00017ce2) loc_req_pane

0x13b1,	// (0x00017cf2) loc_type_pane_ParamLimits

0x13b1,	// (0x00017cf2) loc_type_pane

0x13c3,	// (0x00017d04) loc_type_pane_t1_ParamLimits

0x13c3,	// (0x00017d04) loc_type_pane_t1

0x13d5,	// (0x00017d16) loc_type_pane_t2_ParamLimits

0x13d5,	// (0x00017d16) loc_type_pane_t2

0x13e7,	// (0x00017d28) loc_type_pane_t3_ParamLimits

0x13e7,	// (0x00017d28) loc_type_pane_t3

0x0002,

0xf325,	// (0x00025c66) loc_type_pane_t_ParamLimits

0xf325,	// (0x00025c66) loc_type_pane_t

0x13f9,	// (0x00017d3a) list_loc_req_pane

0x1403,	// (0x00017d44) scroll_pane_cp012

0x9dd7,	// (0x00020718) list_single_loc_request_popup_menu_pane_ParamLimits

0x9dd7,	// (0x00020718) list_single_loc_request_popup_menu_pane

0x140e,	// (0x00017d4f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x140e,	// (0x00017d4f) list_single_loc_request_popup_menu_pane_g1

0x141a,	// (0x00017d5b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x141a,	// (0x00017d5b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00025c6d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00025c6d) list_single_loc_request_popup_menu_pane_g

0x1426,	// (0x00017d67) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1426,	// (0x00017d67) list_single_loc_request_popup_menu_pane_t1

0x9de9,	// (0x0002072a) bg_popup_window_pane_cp03_ParamLimits

0x9de9,	// (0x0002072a) bg_popup_window_pane_cp03

0x9df7,	// (0x00020738) heading_loc_req_pane_ParamLimits

0x9df7,	// (0x00020738) heading_loc_req_pane

0x9e03,	// (0x00020744) popup_dyc_status_message_window_g1_ParamLimits

0x9e03,	// (0x00020744) popup_dyc_status_message_window_g1

0x9e0f,	// (0x00020750) popup_dyc_status_message_window_t1_ParamLimits

0x9e0f,	// (0x00020750) popup_dyc_status_message_window_t1

0x9e21,	// (0x00020762) popup_dyc_status_message_window_t2_ParamLimits

0x9e21,	// (0x00020762) popup_dyc_status_message_window_t2

0x9e33,	// (0x00020774) popup_dyc_status_message_window_t3_ParamLimits

0x9e33,	// (0x00020774) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00025c72) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00025c72) popup_dyc_status_message_window_t

0x0853,	// (0x00017194) bg_heading_pane_cp01

0x1448,	// (0x00017d89) heading_loc_req_pane_g1

0x1450,	// (0x00017d91) heading_loc_req_pane_g2

0x1458,	// (0x00017d99) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00025c79) heading_loc_req_pane_g

0x1460,	// (0x00017da1) heading_loc_req_pane_t1

0x14e4,	// (0x00017e25) bg_popup_sub_pane_cp01_ParamLimits

0x14e4,	// (0x00017e25) bg_popup_sub_pane_cp01

0x14f2,	// (0x00017e33) popup_cale_events_window_g1_ParamLimits

0x14f2,	// (0x00017e33) popup_cale_events_window_g1

0x1512,	// (0x00017e53) popup_cale_events_window_g2_ParamLimits

0x1512,	// (0x00017e53) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00025cad) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00025cad) popup_cale_events_window_g

0x1532,	// (0x00017e73) popup_cale_events_window_t1_ParamLimits

0x1532,	// (0x00017e73) popup_cale_events_window_t1

0x1544,	// (0x00017e85) popup_cale_events_window_t2_ParamLimits

0x1544,	// (0x00017e85) popup_cale_events_window_t2

0x1582,	// (0x00017ec3) popup_cale_events_window_t3_ParamLimits

0x1582,	// (0x00017ec3) popup_cale_events_window_t3

0x15bc,	// (0x00017efd) popup_cale_events_window_t4_ParamLimits

0x15bc,	// (0x00017efd) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00025cb2) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00025cb2) popup_cale_events_window_t

0x9eb7,	// (0x000207f8) call_type_pane

0x1a0b,	// (0x0001834c) popup_call_status_window_g1

0x9ec3,	// (0x00020804) popup_call_status_window_g2

0x9ecf,	// (0x00020810) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00025cbb) popup_call_status_window_g

0x15f2,	// (0x00017f33) call_type_pane_g1

0x15fb,	// (0x00017f3c) call_type_pane_g2

0x0001,

0xf381,	// (0x00025cc2) call_type_pane_g

0x0853,	// (0x00017194) bg_popup_sub_pane_cp02

0x1604,	// (0x00017f45) listscroll_popup_wml_pane

0x160c,	// (0x00017f4d) list_wml_pane

0x1616,	// (0x00017f57) scroll_pane_cp013

0x1621,	// (0x00017f62) list_single_graphic_popup_wml_pane_ParamLimits

0x1621,	// (0x00017f62) list_single_graphic_popup_wml_pane

0x0c20,	// (0x00017561) list_single_graphic_popup_wml_pane_g1

0x1635,	// (0x00017f76) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00025cc7) list_single_graphic_popup_wml_pane_g

0x163d,	// (0x00017f7e) list_single_graphic_popup_wml_pane_t1

0x164b,	// (0x00017f8c) aid_call_pane

0x0aa6,	// (0x000173e7) popup_clock_analogue_window_g1

0x0aa6,	// (0x000173e7) popup_clock_analogue_window_g2

0x71b3,	// (0x0001daf4) popup_clock_analogue_window_g3

0x71b3,	// (0x0001daf4) popup_clock_analogue_window_g4

0x0c20,	// (0x00017561) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00025ccc) popup_clock_analogue_window_g

0x71bb,	// (0x0001dafc) popup_clock_analogue_window_t1

0x71c9,	// (0x0001db0a) clock_digital_number_pane_ParamLimits

0x71c9,	// (0x0001db0a) clock_digital_number_pane

0x71d5,	// (0x0001db16) clock_digital_number_pane_cp02_ParamLimits

0x71d5,	// (0x0001db16) clock_digital_number_pane_cp02

0x71e1,	// (0x0001db22) clock_digital_number_pane_cp03_ParamLimits

0x71e1,	// (0x0001db22) clock_digital_number_pane_cp03

0x71ed,	// (0x0001db2e) clock_digital_number_pane_cp04_ParamLimits

0x71ed,	// (0x0001db2e) clock_digital_number_pane_cp04

0x71fd,	// (0x0001db3e) clock_digital_separator_pane_ParamLimits

0x71fd,	// (0x0001db3e) clock_digital_separator_pane

0x7209,	// (0x0001db4a) popup_clock_digital_window_t1

0x0c20,	// (0x00017561) clock_digital_number_pane_g1

0x0c20,	// (0x00017561) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00025c3a) clock_digital_number_pane_g

0x0c20,	// (0x00017561) clock_digital_separator_pane_g1

0x0c20,	// (0x00017561) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00025c3a) clock_digital_separator_pane_g

0x0853,	// (0x00017194) bg_popup_window_pane_cp04

0x16ce,	// (0x0001800f) heading_pane_cp03

0x16d6,	// (0x00018017) listscroll_popup_gms_pane

0x16de,	// (0x0001801f) grid_large_graphic_popup_pane

0x16e8,	// (0x00018029) listscroll_popup_gms_pane_g1

0x16f0,	// (0x00018031) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00025cd7) listscroll_popup_gms_pane_g

0x1061,	// (0x000179a2) scroll_pane_cp014

0x9edb,	// (0x0002081c) cell_large_graphic_popup_pane_ParamLimits

0x9edb,	// (0x0002081c) cell_large_graphic_popup_pane

0x9ef3,	// (0x00020834) cell_large_graphic_popup_pane_g1_ParamLimits

0x9ef3,	// (0x00020834) cell_large_graphic_popup_pane_g1

0x16f8,	// (0x00018039) cell_large_graphic_popup_pane_g2_ParamLimits

0x16f8,	// (0x00018039) cell_large_graphic_popup_pane_g2

0x1704,	// (0x00018045) cell_large_graphic_popup_pane_g3_ParamLimits

0x1704,	// (0x00018045) cell_large_graphic_popup_pane_g3

0x1711,	// (0x00018052) cell_large_graphic_popup_pane_g4_ParamLimits

0x1711,	// (0x00018052) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00025cdc) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00025cdc) cell_large_graphic_popup_pane_g

0x1721,	// (0x00018062) grid_highlight_pane_cp010

0x0c20,	// (0x00017561) bg_popup_call_pane_g1

0x172b,	// (0x0001806c) list_single_graphic_popup_conf_pane_ParamLimits

0x172b,	// (0x0001806c) list_single_graphic_popup_conf_pane

0x173e,	// (0x0001807f) list_highlight_pane_cp01

0x1747,	// (0x00018088) list_single_graphic_popup_conf_pane_g1

0x174f,	// (0x00018090) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00025ce5) list_single_graphic_popup_conf_pane_g

0x1757,	// (0x00018098) list_single_graphic_popup_conf_pane_t1

0x1765,	// (0x000180a6) linegrid_cams_pane_g1

0x9eff,	// (0x00020840) linegrid_cams_pane_g2

0x0d94,	// (0x000176d5) linegrid_cams_pane_g3

0x176e,	// (0x000180af) linegrid_cams_pane_g4

0x9f08,	// (0x00020849) linegrid_cams_pane_g5

0x9f11,	// (0x00020852) linegrid_cams_pane_g6

0x0d9d,	// (0x000176de) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00025cea) linegrid_cams_pane_g

0x1777,	// (0x000180b8) popup_clock_analogue_window

0x1777,	// (0x000180b8) popup_clock_digital_window

0x0853,	// (0x00017194) popup_phob_thumbnail_window

0x0c20,	// (0x00017561) call_video_uplink_pane_g1

0x1780,	// (0x000180c1) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00025cf9) call_video_uplink_pane_g

0x1788,	// (0x000180c9) video_uplink_pane

0x1790,	// (0x000180d1) mce_image_pane_g1

0x9f1a,	// (0x0002085b) mce_image_pane_g2

0x9f24,	// (0x00020865) mce_image_pane_g3

0x9f2c,	// (0x0002086d) mce_image_pane_g4

0x9f34,	// (0x00020875) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00025cfe) mce_image_pane_g

0x179a,	// (0x000180db) control_top_pane_stacon_cp01_ParamLimits

0x179a,	// (0x000180db) control_top_pane_stacon_cp01

0x17ae,	// (0x000180ef) uni_indicator_pane_stacon_cp01_ParamLimits

0x17ae,	// (0x000180ef) uni_indicator_pane_stacon_cp01

0x17bf,	// (0x00018100) bg_popup_sub_pane_cp03

0x9f3c,	// (0x0002087d) chi_dic_find_pane

0x9f44,	// (0x00020885) listscroll_chi_dic_pane

0x9f4d,	// (0x0002088e) main_pane_chidic_g1

0x17c9,	// (0x0001810a) chi_dic_find_pane_t1

0x17d7,	// (0x00018118) find_chidic_pane

0x17e0,	// (0x00018121) chi_dic_list_pane_ParamLimits

0x17e0,	// (0x00018121) chi_dic_list_pane

0x17f1,	// (0x00018132) scroll_pane_cp020

0x17f9,	// (0x0001813a) find_chidic_pane_t1

0x0853,	// (0x00017194) input_focus_pane_cp06

0x9f60,	// (0x000208a1) list_chi_dic_pane_ParamLimits

0x9f60,	// (0x000208a1) list_chi_dic_pane

0x9f7a,	// (0x000208bb) list_chi_dic_pane_t1_ParamLimits

0x9f7a,	// (0x000208bb) list_chi_dic_pane_t1

0x0853,	// (0x00017194) list_highlight_pane_cp020

0x1808,	// (0x00018149) bg_cale_heading_pane_g1

0x9f8d,	// (0x000208ce) bg_cale_heading_pane_g2

0x9f95,	// (0x000208d6) bg_cale_heading_pane_g3

0x9f9d,	// (0x000208de) bg_cale_heading_pane_g4

0x9fa7,	// (0x000208e8) bg_cale_heading_pane_g5

0x9fb1,	// (0x000208f2) bg_cale_heading_pane_g6

0x9fb9,	// (0x000208fa) bg_cale_heading_pane_g7

0x9fc1,	// (0x00020902) bg_cale_heading_pane_g8

0x9fcb,	// (0x0002090c) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00025d09) bg_cale_heading_pane_g

0x1808,	// (0x00018149) bg_cale_side_pane_g1

0x9fd5,	// (0x00020916) bg_cale_side_pane_g2

0x9fdf,	// (0x00020920) bg_cale_side_pane_g3

0x9fe9,	// (0x0002092a) bg_cale_side_pane_g4

0x9ff3,	// (0x00020934) bg_cale_side_pane_g5

0x9ffd,	// (0x0002093e) bg_cale_side_pane_g6

0xa007,	// (0x00020948) bg_cale_side_pane_g7

0xa011,	// (0x00020952) bg_cale_side_pane_g8

0xa019,	// (0x0002095a) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00025d1c) bg_cale_side_pane_g

0xa021,	// (0x00020962) popup_call_status_window_ParamLimits

0xa021,	// (0x00020962) popup_call_status_window

0x1810,	// (0x00018151) stacon_top_pane

0x1818,	// (0x00018159) status_pane_ParamLimits

0x1818,	// (0x00018159) status_pane

0x182d,	// (0x0001816e) status_small_pane

0x1835,	// (0x00018176) control_pane

0x0853,	// (0x00017194) stacon_bottom_pane

0x183d,	// (0x0001817e) list_single_mce_smart_pane_t1_ParamLimits

0x183d,	// (0x0001817e) list_single_mce_smart_pane_t1

0x1850,	// (0x00018191) list_single_mce_smart_pane_t2_ParamLimits

0x1850,	// (0x00018191) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00025d2f) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00025d2f) list_single_mce_smart_pane_t

0xa02d,	// (0x0002096e) compass_pane

0xa039,	// (0x0002097a) main_location2_pane_t1

0xa04d,	// (0x0002098e) main_location2_pane_t2

0xa061,	// (0x000209a2) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00025d34) main_location2_pane_t

0x186f,	// (0x000181b0) compass_pane_g1_ParamLimits

0x186f,	// (0x000181b0) compass_pane_g1

0xa0ab,	// (0x000209ec) compass_pane_t1

0xa0ba,	// (0x000209fb) compass_pane_t2

0x0005,

0xf3fc,	// (0x00025d3d) compass_pane_t

0xa105,	// (0x00020a46) text_secondary_cp61

0x1883,	// (0x000181c4) navi_pane_cams_g5

0x18a6,	// (0x000181e7) navi_pane_im_t1

0x18b4,	// (0x000181f5) navi_pane_mp_g1_ParamLimits

0x18b4,	// (0x000181f5) navi_pane_mp_g1

0x18c8,	// (0x00018209) navi_pane_mp_g2_ParamLimits

0x18c8,	// (0x00018209) navi_pane_mp_g2

0x18d4,	// (0x00018215) navi_pane_mp_g3_ParamLimits

0x18d4,	// (0x00018215) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00025d51) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00025d51) navi_pane_mp_g

0x18e0,	// (0x00018221) navi_pane_mp_t1

0x18ee,	// (0x0001822f) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00025d58) navi_pane_mp_t

0x192a,	// (0x0001826b) navi_pane_vt_g1

0x18e0,	// (0x00018221) navi_pane_vt_t1

0x1932,	// (0x00018273) navi_slider_pane

0x193a,	// (0x0001827b) zooming_pane

0x1942,	// (0x00018283) navi_slider_pane_g1

0x7226,	// (0x0001db67) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00025d5f) navi_slider_pane_g

0x1978,	// (0x000182b9) aid_levels_zoom

0x1980,	// (0x000182c1) zooming_pane_g1

0x1988,	// (0x000182c9) zooming_pane_g2

0x1988,	// (0x000182c9) zooming_pane_g3

0x0002,

0xf42d,	// (0x00025d6e) zooming_pane_g

0x1990,	// (0x000182d1) level_10_zoom

0x1999,	// (0x000182da) level_11_zoom

0x19a2,	// (0x000182e3) level_1_zoom

0x19ab,	// (0x000182ec) level_2_zoom

0x19b4,	// (0x000182f5) level_3_zoom

0x19bd,	// (0x000182fe) level_4_zoom

0x19c6,	// (0x00018307) level_5_zoom

0x19cf,	// (0x00018310) level_6_zoom

0x19d8,	// (0x00018319) level_7_zoom

0x19e1,	// (0x00018322) level_8_zoom

0x19ea,	// (0x0001832b) level_9_zoom

0x19fb,	// (0x0001833c) popup_phob_thumbnail_window_g1

0x1a03,	// (0x00018344) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00025d75) popup_phob_thumbnail_window_g

0x2d9e,	// (0x000196df) level_1_location

0x2da6,	// (0x000196e7) level_2_location

0x2dae,	// (0x000196ef) level_3_location

0x2db6,	// (0x000196f7) level_4_location

0x193a,	// (0x0001827b) level_5_location

0xa21a,	// (0x00020b5b) mce_icon_pane_g1

0xa222,	// (0x00020b63) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00025d7a) mce_icon_pane_g

0xa22a,	// (0x00020b6b) main_mup_pane_g1_ParamLimits

0xa22a,	// (0x00020b6b) main_mup_pane_g1

0xa242,	// (0x00020b83) main_mup_pane_g2_ParamLimits

0xa242,	// (0x00020b83) main_mup_pane_g2

0xa25e,	// (0x00020b9f) main_mup_pane_g3_ParamLimits

0xa25e,	// (0x00020b9f) main_mup_pane_g3

0xa27a,	// (0x00020bbb) main_mup_pane_g4_ParamLimits

0xa27a,	// (0x00020bbb) main_mup_pane_g4

0xa296,	// (0x00020bd7) main_mup_pane_g5_ParamLimits

0xa296,	// (0x00020bd7) main_mup_pane_g5

0xa2b7,	// (0x00020bf8) main_mup_pane_g6_ParamLimits

0xa2b7,	// (0x00020bf8) main_mup_pane_g6

0xa2d3,	// (0x00020c14) main_mup_pane_g7_ParamLimits

0xa2d3,	// (0x00020c14) main_mup_pane_g7

0xa2ef,	// (0x00020c30) main_mup_pane_g8_ParamLimits

0xa2ef,	// (0x00020c30) main_mup_pane_g8

0xa30f,	// (0x00020c50) main_mup_pane_g9_ParamLimits

0xa30f,	// (0x00020c50) main_mup_pane_g9

0xa32e,	// (0x00020c6f) main_mup_pane_g10_ParamLimits

0xa32e,	// (0x00020c6f) main_mup_pane_g10

0xa34d,	// (0x00020c8e) main_mup_pane_g11_ParamLimits

0xa34d,	// (0x00020c8e) main_mup_pane_g11

0xa365,	// (0x00020ca6) main_mup_pane_g12_ParamLimits

0xa365,	// (0x00020ca6) main_mup_pane_g12

0xa373,	// (0x00020cb4) main_mup_pane_g13_ParamLimits

0xa373,	// (0x00020cb4) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00025d7f) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00025d7f) main_mup_pane_g

0xa389,	// (0x00020cca) main_mup_pane_t1_ParamLimits

0xa389,	// (0x00020cca) main_mup_pane_t1

0xa3a6,	// (0x00020ce7) main_mup_pane_t2_ParamLimits

0xa3a6,	// (0x00020ce7) main_mup_pane_t2

0xa3c0,	// (0x00020d01) main_mup_pane_t3_ParamLimits

0xa3c0,	// (0x00020d01) main_mup_pane_t3

0xa3da,	// (0x00020d1b) main_mup_pane_t4_ParamLimits

0xa3da,	// (0x00020d1b) main_mup_pane_t4

0xa3ec,	// (0x00020d2d) main_mup_pane_t5_ParamLimits

0xa3ec,	// (0x00020d2d) main_mup_pane_t5

0xa3fe,	// (0x00020d3f) main_mup_pane_t6_ParamLimits

0xa3fe,	// (0x00020d3f) main_mup_pane_t6

0x0005,

0xf459,	// (0x00025d9a) main_mup_pane_t_ParamLimits

0xf459,	// (0x00025d9a) main_mup_pane_t

0xa414,	// (0x00020d55) mup_progress_pane_ParamLimits

0xa414,	// (0x00020d55) mup_progress_pane

0xa420,	// (0x00020d61) mup_visualizer_pane_ParamLimits

0xa420,	// (0x00020d61) mup_visualizer_pane

0xa45a,	// (0x00020d9b) mup_volume_pane_ParamLimits

0xa45a,	// (0x00020d9b) mup_volume_pane

0x1a0b,	// (0x0001834c) mup_visualizer_pane_g1_ParamLimits

0x1a0b,	// (0x0001834c) mup_visualizer_pane_g1

0x1a0b,	// (0x0001834c) mup_visualizer_pane_g2_ParamLimits

0x1a0b,	// (0x0001834c) mup_visualizer_pane_g2

0x186f,	// (0x000181b0) mup_visualizer_pane_g3_ParamLimits

0x186f,	// (0x000181b0) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00025da7) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00025da7) mup_visualizer_pane_g

0x0c20,	// (0x00017561) mup_volume_pane_g1

0x1a21,	// (0x00018362) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00025dae) mup_volume_pane_g

0x0c20,	// (0x00017561) mup_progress_pane_g1

0x1a2a,	// (0x0001836b) mup_progress_pane_g2

0x1a33,	// (0x00018374) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00025db3) mup_progress_pane_g

0x0853,	// (0x00017194) bg_popup_window_pane_cp05

0x1a3c,	// (0x0001837d) heading_pane_cp02_ParamLimits

0x1a3c,	// (0x0001837d) heading_pane_cp02

0x1a56,	// (0x00018397) list_popup_blid_pane

0x1a5e,	// (0x0001839f) list_blid_sat_info_pane_ParamLimits

0x1a5e,	// (0x0001839f) list_blid_sat_info_pane

0x1a71,	// (0x000183b2) list_blid_sat_info_pane_g1

0x1a79,	// (0x000183ba) list_blid_sat_info_pane_t1

0xa567,	// (0x00020ea8) mup_equalizer_pane_ParamLimits

0xa567,	// (0x00020ea8) mup_equalizer_pane

0xa588,	// (0x00020ec9) mup_equalizer_pane_cp1_ParamLimits

0xa588,	// (0x00020ec9) mup_equalizer_pane_cp1

0xa5a9,	// (0x00020eea) mup_equalizer_pane_cp2_ParamLimits

0xa5a9,	// (0x00020eea) mup_equalizer_pane_cp2

0xa5ca,	// (0x00020f0b) mup_equalizer_pane_cp3_ParamLimits

0xa5ca,	// (0x00020f0b) mup_equalizer_pane_cp3

0xa5eb,	// (0x00020f2c) mup_equalizer_pane_cp4_ParamLimits

0xa5eb,	// (0x00020f2c) mup_equalizer_pane_cp4

0xa60c,	// (0x00020f4d) mup_equalizer_pane_cp5

0xa622,	// (0x00020f63) mup_equalizer_pane_cp6

0xa63a,	// (0x00020f7b) mup_equalizer_pane_cp7

0x2cbc,	// (0x000195fd) bg_popup_call_poc_act_pane_g9

0x2cc4,	// (0x00019605) bg_popup_call_poc_act_pane_g10

0x2ccc,	// (0x0001960d) bg_popup_call_poc_act_pane_g11

0x000a,

0x0aae,	// (0x000173ef) mup_scale_pane

0x0c20,	// (0x00017561) mup_scale_pane_g1

0x1a87,	// (0x000183c8) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00025dcf) mup_scale_pane_g

0x1aab,	// (0x000183ec) msg_data_pane

0x1ab3,	// (0x000183f4) scroll_pane_cp017

0xa664,	// (0x00020fa5) bg_list_pane_cp04_ParamLimits

0xa664,	// (0x00020fa5) bg_list_pane_cp04

0x1ac3,	// (0x00018404) msg_data_pane_g1

0xa680,	// (0x00020fc1) msg_data_pane_g2

0xa68a,	// (0x00020fcb) msg_data_pane_g3

0xa692,	// (0x00020fd3) msg_data_pane_g4

0xa69a,	// (0x00020fdb) msg_data_pane_g5

0xa6a2,	// (0x00020fe3) msg_data_pane_g6

0xa6aa,	// (0x00020feb) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00025dde) msg_data_pane_g

0xa6b2,	// (0x00020ff3) msg_text_pane_ParamLimits

0xa6b2,	// (0x00020ff3) msg_text_pane

0xa6ee,	// (0x0002102f) qrid_highlight_pane_cp011_ParamLimits

0xa6ee,	// (0x0002102f) qrid_highlight_pane_cp011

0x0853,	// (0x00017194) msg_body_pane

0x0853,	// (0x00017194) msg_header_pane

0x1ad4,	// (0x00018415) input_focus_pane_cp07

0xa714,	// (0x00021055) msg_header_pane_t1_ParamLimits

0xa714,	// (0x00021055) msg_header_pane_t1

0x1ae9,	// (0x0001842a) msg_header_pane_t2_ParamLimits

0x1ae9,	// (0x0001842a) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00025df2) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00025df2) msg_header_pane_t

0x1afb,	// (0x0001843c) msg_body_pane_g1

0x1b03,	// (0x00018444) msg_body_pane_t1_ParamLimits

0x1b03,	// (0x00018444) msg_body_pane_t1

0x1b34,	// (0x00018475) msg_body_pane_t2_ParamLimits

0x1b34,	// (0x00018475) msg_body_pane_t2

0x1b46,	// (0x00018487) msg_body_pane_t3_ParamLimits

0x1b46,	// (0x00018487) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00025df7) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00025df7) msg_body_pane_t

0x7268,	// (0x0001dba9) main_viewer_pane_g1_ParamLimits

0x7268,	// (0x0001dba9) main_viewer_pane_g1

0x7274,	// (0x0001dbb5) main_viewer_pane_g2_ParamLimits

0x7274,	// (0x0001dbb5) main_viewer_pane_g2

0xa748,	// (0x00021089) main_viewer_pane_g3_ParamLimits

0xa748,	// (0x00021089) main_viewer_pane_g3

0xa759,	// (0x0002109a) main_viewer_pane_g4_ParamLimits

0xa759,	// (0x0002109a) main_viewer_pane_g4

0x7280,	// (0x0001dbc1) main_viewer_pane_g5_ParamLimits

0x7280,	// (0x0001dbc1) main_viewer_pane_g5

0x7280,	// (0x0001dbc1) main_viewer_pane_g7_ParamLimits

0x7280,	// (0x0001dbc1) main_viewer_pane_g7

0x140e,	// (0x00017d4f) main_viewer_pane_g8_ParamLimits

0x140e,	// (0x00017d4f) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00025e07) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00025e07) main_viewer_pane_g

0x1b9a,	// (0x000184db) viewer_content_pane_ParamLimits

0x1b9a,	// (0x000184db) viewer_content_pane

0xa78a,	// (0x000210cb) main_postcard_pane_g1_ParamLimits

0xa78a,	// (0x000210cb) main_postcard_pane_g1

0xa798,	// (0x000210d9) main_postcard_pane_g2_ParamLimits

0xa798,	// (0x000210d9) main_postcard_pane_g2

0xa7a6,	// (0x000210e7) main_postcard_pane_g3_ParamLimits

0xa7a6,	// (0x000210e7) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00025e18) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00025e18) main_postcard_pane_g

0xa7b6,	// (0x000210f7) main_postcard_pane_g4

0x2ebe,	// (0x000197ff) smil_status_volume_pane_g2

0xa7e2,	// (0x00021123) postcard_pane_ParamLimits

0xa7e2,	// (0x00021123) postcard_pane

0x1a0b,	// (0x0001834c) postcard_pane_g1_ParamLimits

0x1a0b,	// (0x0001834c) postcard_pane_g1

0xa814,	// (0x00021155) postcard_pane_g2_ParamLimits

0xa814,	// (0x00021155) postcard_pane_g2

0xa820,	// (0x00021161) postcard_pane_g3_ParamLimits

0xa820,	// (0x00021161) postcard_pane_g3

0x1bb6,	// (0x000184f7) postcard_pane_g4_ParamLimits

0x1bb6,	// (0x000184f7) postcard_pane_g4

0xa82c,	// (0x0002116d) postcard_pane_g5_ParamLimits

0xa82c,	// (0x0002116d) postcard_pane_g5

0xa838,	// (0x00021179) postcard_pane_g6_ParamLimits

0xa838,	// (0x00021179) postcard_pane_g6

0x1ba8,	// (0x000184e9) postcard_pane_g7_ParamLimits

0x1ba8,	// (0x000184e9) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00025e25) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00025e25) postcard_pane_g

0xa844,	// (0x00021185) main_mp2_pane_g1_ParamLimits

0xa844,	// (0x00021185) main_mp2_pane_g1

0xa850,	// (0x00021191) main_mp2_pane_g2_ParamLimits

0xa850,	// (0x00021191) main_mp2_pane_g2

0xa85c,	// (0x0002119d) main_mp2_pane_g3_ParamLimits

0xa85c,	// (0x0002119d) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00025e34) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00025e34) main_mp2_pane_g

0xa868,	// (0x000211a9) main_mp2_pane_t1_ParamLimits

0xa868,	// (0x000211a9) main_mp2_pane_t1

0xa87f,	// (0x000211c0) main_mp2_pane_t2_ParamLimits

0xa87f,	// (0x000211c0) main_mp2_pane_t2

0xa893,	// (0x000211d4) main_mp2_pane_t3_ParamLimits

0xa893,	// (0x000211d4) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00025e3b) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00025e3b) main_mp2_pane_t

0x1bc4,	// (0x00018505) pec_content_pane_ParamLimits

0x1bc4,	// (0x00018505) pec_content_pane

0x1061,	// (0x000179a2) scroll_pane_cp015

0x1bd6,	// (0x00018517) pec_attribute_pane_ParamLimits

0x1bd6,	// (0x00018517) pec_attribute_pane

0xa8a5,	// (0x000211e6) pec_content_pane_g1_ParamLimits

0xa8a5,	// (0x000211e6) pec_content_pane_g1

0x1be6,	// (0x00018527) pec_content_pane_t1_ParamLimits

0x1be6,	// (0x00018527) pec_content_pane_t1

0x1bf8,	// (0x00018539) pec_content_pane_t2_ParamLimits

0x1bf8,	// (0x00018539) pec_content_pane_t2

0x0001,

0xf501,	// (0x00025e42) pec_content_pane_t_ParamLimits

0xf501,	// (0x00025e42) pec_content_pane_t

0xa8b1,	// (0x000211f2) list_single_graphic_pane_cp01_ParamLimits

0xa8b1,	// (0x000211f2) list_single_graphic_pane_cp01

0x0aae,	// (0x000173ef) bg_popup_sub_pane_cp04

0x1c0a,	// (0x0001854b) popup_mup_playback_window_g1

0x1c16,	// (0x00018557) popup_mup_playback_window_t1

0x1c2b,	// (0x0001856c) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00025e47) popup_mup_playback_window_t

0x1c62,	// (0x000185a3) main_image_pane_g1_ParamLimits

0x1c62,	// (0x000185a3) main_image_pane_g1

0x1ca5,	// (0x000185e6) scroll_pane_cp018_ParamLimits

0x1ca5,	// (0x000185e6) scroll_pane_cp018

0x1cbd,	// (0x000185fe) scroll_pane_cp016_ParamLimits

0x1cbd,	// (0x000185fe) scroll_pane_cp016

0xa94a,	// (0x0002128b) smil2_image_pane_ParamLimits

0xa94a,	// (0x0002128b) smil2_image_pane

0xa97a,	// (0x000212bb) smil2_root_pane_ParamLimits

0xa97a,	// (0x000212bb) smil2_root_pane

0xa9a6,	// (0x000212e7) smil2_text_pane_ParamLimits

0xa9a6,	// (0x000212e7) smil2_text_pane

0x0853,	// (0x00017194) bg_list_pane_cp06

0x1cf9,	// (0x0001863a) grid_radio_pane

0x0853,	// (0x00017194) bg_popup_window_pane_cp06

0x1d01,	// (0x00018642) main_fmradio_pane_t1

0x16ce,	// (0x0001800f) heading_pane_cp04

0x1d0f,	// (0x00018650) main_fmradio_pane_t2

0x2cd4,	// (0x00019615) popup_cale_lunar_info_window_g1

0x1d1d,	// (0x0001865e) main_fmradio_pane_t3

0x2cdc,	// (0x0001961d) popup_cale_lunar_info_window_g2

0x1d2b,	// (0x0001866c) main_fmradio_pane_t4

0x0001,

0x1d39,	// (0x0001867a) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00025f22) popup_cale_lunar_info_window_g

0xf51b,	// (0x00025e5c) main_fmradio_pane_t

0x1d47,	// (0x00018688) wait_bar_pane_cp03

0x1d4f,	// (0x00018690) cell_fmradio_pane_ParamLimits

0x1d4f,	// (0x00018690) cell_fmradio_pane

0x1ba8,	// (0x000184e9) cell_fmradio_pane_g1_ParamLimits

0x1ba8,	// (0x000184e9) cell_fmradio_pane_g1

0x0853,	// (0x00017194) grid_highlight_pane_cp011

0x1d62,	// (0x000186a3) poc_content_pane_ParamLimits

0x1d62,	// (0x000186a3) poc_content_pane

0x1d74,	// (0x000186b5) scroll_pane_cp019

0xa9e6,	// (0x00021327) popup_call_poc_act_window_ParamLimits

0xa9e6,	// (0x00021327) popup_call_poc_act_window

0xa9f3,	// (0x00021334) popup_call_poc_inact_window_ParamLimits

0xa9f3,	// (0x00021334) popup_call_poc_inact_window

0xf5b8,	// (0x00025ef9) bg_popup_call_poc_act_pane_g

0x2c4c,	// (0x0001958d) bg_popup_call_poc_inact_pane_g1

0x2c54,	// (0x00019595) bg_popup_call_poc_inact_pane_g2

0x1d7c,	// (0x000186bd) popup_call_poc_act_window_g2

0x2c5c,	// (0x0001959d) bg_popup_call_poc_inact_pane_g3

0x2c64,	// (0x000195a5) bg_popup_call_poc_inact_pane_g4

0x2c6c,	// (0x000195ad) bg_popup_call_poc_inact_pane_g5

0x1d84,	// (0x000186c5) popup_call_poc_act_window_t1_ParamLimits

0x1d84,	// (0x000186c5) popup_call_poc_act_window_t1

0x1dac,	// (0x000186ed) popup_call_poc_act_window_t2_ParamLimits

0x1dac,	// (0x000186ed) popup_call_poc_act_window_t2

0x1dd4,	// (0x00018715) popup_call_poc_act_window_t3_ParamLimits

0x1dd4,	// (0x00018715) popup_call_poc_act_window_t3

0x1dfc,	// (0x0001873d) popup_call_poc_act_window_t4_ParamLimits

0x1dfc,	// (0x0001873d) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00025e67) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00025e67) popup_call_poc_act_window_t

0x2c74,	// (0x000195b5) bg_popup_call_poc_inact_pane_g6

0x2c7c,	// (0x000195bd) bg_popup_call_poc_inact_pane_g7

0x2c84,	// (0x000195c5) bg_popup_call_poc_inact_pane_g8

0x1e0e,	// (0x0001874f) popup_call_poc_inact_window_g2

0x2c8c,	// (0x000195cd) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00025ee6) bg_popup_call_poc_inact_pane_g

0x1e16,	// (0x00018757) popup_call_poc_inact_window_t1_ParamLimits

0x1e16,	// (0x00018757) popup_call_poc_inact_window_t1

0x1e2b,	// (0x0001876c) popup_call_poc_inact_window_t2_ParamLimits

0x1e2b,	// (0x0001876c) popup_call_poc_inact_window_t2

0x1e40,	// (0x00018781) popup_call_poc_inact_window_t3_ParamLimits

0x1e40,	// (0x00018781) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00025e70) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00025e70) popup_call_poc_inact_window_t

0x2e44,	// (0x00019785) context_pane_ParamLimits

0xafe3,	// (0x00021924) signal_pane_ParamLimits

0x193a,	// (0x0001827b) main_call2_pane

0x2e32,	// (0x00019773) popup_phob_thumbnail2_window_ParamLimits

0x2e32,	// (0x00019773) popup_phob_thumbnail2_window

0x7238,	// (0x0001db79) aid_hotspot_pointer_arrow_pane

0x7240,	// (0x0001db81) aid_hotspot_pointer_hand_pane

0xad15,	// (0x00021656) phob_pre_status_pane_g5

0x8c37,	// (0x0001f578) cams_zoom_pane_ParamLimits

0x8c43,	// (0x0001f584) image_vga_pane_ParamLimits

0x8c52,	// (0x0001f593) main_camera_pane_g1_ParamLimits

0x8c60,	// (0x0001f5a1) main_camera_pane_g2_ParamLimits

0x8c6c,	// (0x0001f5ad) main_camera_pane_g3_ParamLimits

0x8c78,	// (0x0001f5b9) main_camera_pane_g4_ParamLimits

0x8c84,	// (0x0001f5c5) main_camera_pane_g5_ParamLimits

0x8c90,	// (0x0001f5d1) main_camera_pane_g6_ParamLimits

0x8c9c,	// (0x0001f5dd) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00025b6f) main_camera_pane_g_ParamLimits

0x8ca8,	// (0x0001f5e9) main_camera_pane_t1_ParamLimits

0x8cba,	// (0x0001f5fb) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00025b80) main_camera_pane_t_ParamLimits

0x0aae,	// (0x000173ef) bg_popup_preview_window_pane_cp01_ParamLimits

0x0aae,	// (0x000173ef) bg_popup_preview_window_pane_cp01

0x1e55,	// (0x00018796) popup_phob_thumbnail2_window_g1_ParamLimits

0x1e55,	// (0x00018796) popup_phob_thumbnail2_window_g1

0x0853,	// (0x00017194) call2_cli_visual_pane

0xaa0f,	// (0x00021350) popup_call2_audio_conf_window_ParamLimits

0xaa0f,	// (0x00021350) popup_call2_audio_conf_window

0xaa24,	// (0x00021365) popup_call2_audio_first_window_ParamLimits

0xaa24,	// (0x00021365) popup_call2_audio_first_window

0xaac2,	// (0x00021403) popup_call2_audio_in_window_ParamLimits

0xaac2,	// (0x00021403) popup_call2_audio_in_window

0xab04,	// (0x00021445) popup_call2_audio_out_window_ParamLimits

0xab04,	// (0x00021445) popup_call2_audio_out_window

0xab66,	// (0x000214a7) popup_call2_audio_second_window_ParamLimits

0xab66,	// (0x000214a7) popup_call2_audio_second_window

0xabc4,	// (0x00021505) popup_call2_audio_wait_window_ParamLimits

0xabc4,	// (0x00021505) popup_call2_audio_wait_window

0x0853,	// (0x00017194) bg_popup_call2_act_pane_cp03

0x0a90,	// (0x000173d1) list_conf_pane_cp

0x1e61,	// (0x000187a2) popup_call2_audio_conf_window_t1

0x172b,	// (0x0001806c) list_single_graphic_popup_conf2_pane_ParamLimits

0x172b,	// (0x0001806c) list_single_graphic_popup_conf2_pane

0x173e,	// (0x0001807f) list_highlight_pane_cp04

0x1e6f,	// (0x000187b0) list_single_graphic_popup_conf2_pane_g1

0x174f,	// (0x00018090) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00025e77) list_single_graphic_popup_conf2_pane_g

0x1e79,	// (0x000187ba) list_single_graphic_popup_conf2_pane_t1

0x1e87,	// (0x000187c8) bg_popup_call2_act_pane_cp01_ParamLimits

0x1e87,	// (0x000187c8) bg_popup_call2_act_pane_cp01

0x1f11,	// (0x00018852) call_type_pane_cp05_ParamLimits

0x1f11,	// (0x00018852) call_type_pane_cp05

0x1f65,	// (0x000188a6) popup_call2_audio_second_window_g1_ParamLimits

0x1f65,	// (0x000188a6) popup_call2_audio_second_window_g1

0x1fb9,	// (0x000188fa) popup_call2_audio_second_window_g2_ParamLimits

0x1fb9,	// (0x000188fa) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00025e7c) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00025e7c) popup_call2_audio_second_window_g

0x201e,	// (0x0001895f) popup_call2_audio_second_window_t1_ParamLimits

0x201e,	// (0x0001895f) popup_call2_audio_second_window_t1

0x20d9,	// (0x00018a1a) popup_call2_audio_second_window_t2_ParamLimits

0x20d9,	// (0x00018a1a) popup_call2_audio_second_window_t2

0x212c,	// (0x00018a6d) popup_call2_audio_second_window_t3_ParamLimits

0x212c,	// (0x00018a6d) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00025e83) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00025e83) popup_call2_audio_second_window_t

0x0853,	// (0x00017194) bg_popup_call2_in_pane_cp02

0x085d,	// (0x0001719e) call_type_pane_cp04

0x0865,	// (0x000171a6) popup_call2_audio_wait_window_g1

0x086d,	// (0x000171ae) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00025a5c) popup_call2_audio_wait_window_g

0x0875,	// (0x000171b6) popup_call2_audio_wait_window_t3

0x221f,	// (0x00018b60) bg_popup_call2_act_pane_ParamLimits

0x221f,	// (0x00018b60) bg_popup_call2_act_pane

0x22df,	// (0x00018c20) call_type_pane_cp03_ParamLimits

0x22df,	// (0x00018c20) call_type_pane_cp03

0x2343,	// (0x00018c84) popup_call2_audio_first_window_g1_ParamLimits

0x2343,	// (0x00018c84) popup_call2_audio_first_window_g1

0x23b3,	// (0x00018cf4) popup_call2_audio_first_window_g2_ParamLimits

0x23b3,	// (0x00018cf4) popup_call2_audio_first_window_g2

0x1a0b,	// (0x0001834c) popup_call2_audio_first_window_g3_ParamLimits

0x1a0b,	// (0x0001834c) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00025e8c) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00025e8c) popup_call2_audio_first_window_g

0x2491,	// (0x00018dd2) popup_call2_audio_first_window_t1_ParamLimits

0x2491,	// (0x00018dd2) popup_call2_audio_first_window_t1

0x2594,	// (0x00018ed5) popup_call2_audio_first_window_t4_ParamLimits

0x2594,	// (0x00018ed5) popup_call2_audio_first_window_t4

0x2677,	// (0x00018fb8) popup_call2_audio_first_window_t5_ParamLimits

0x2677,	// (0x00018fb8) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00025e97) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00025e97) popup_call2_audio_first_window_t

0x0aa6,	// (0x000173e7) bg_popup_call2_act_pane_g1

0x2ce4,	// (0x00019625) popup_cale_lunar_info_window_t1

0x2cf2,	// (0x00019633) popup_cale_lunar_info_window_t2

0x2d00,	// (0x00019641) popup_cale_lunar_info_window_t3

0x0853,	// (0x00017194) bg_popup_call2_bubble_pane

0x2778,	// (0x000190b9) bg_popup_call2_in_pane_cp01_ParamLimits

0x2778,	// (0x000190b9) bg_popup_call2_in_pane_cp01

0x052f,	// (0x00016e70) call_type_pane_cp02

0x27c0,	// (0x00019101) popup_call2_audio_out_window_g1_ParamLimits

0x27c0,	// (0x00019101) popup_call2_audio_out_window_g1

0x27ec,	// (0x0001912d) popup_call2_audio_out_window_g2_ParamLimits

0x27ec,	// (0x0001912d) popup_call2_audio_out_window_g2

0x2814,	// (0x00019155) popup_call2_audio_out_window_g3_ParamLimits

0x2814,	// (0x00019155) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00025ea0) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00025ea0) popup_call2_audio_out_window_g

0x284f,	// (0x00019190) popup_call2_audio_out_window_t1_ParamLimits

0x284f,	// (0x00019190) popup_call2_audio_out_window_t1

0x28ae,	// (0x000191ef) popup_call2_audio_out_window_t2_ParamLimits

0x28ae,	// (0x000191ef) popup_call2_audio_out_window_t2

0x2902,	// (0x00019243) popup_call2_audio_out_window_t3_ParamLimits

0x2902,	// (0x00019243) popup_call2_audio_out_window_t3

0x2918,	// (0x00019259) popup_call2_audio_out_window_t4_ParamLimits

0x2918,	// (0x00019259) popup_call2_audio_out_window_t4

0x292e,	// (0x0001926f) popup_call2_audio_out_window_t5_ParamLimits

0x292e,	// (0x0001926f) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00025ea9) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00025ea9) popup_call2_audio_out_window_t

0x2992,	// (0x000192d3) bg_popup_call2_in_pane_ParamLimits

0x2992,	// (0x000192d3) bg_popup_call2_in_pane

0x29ee,	// (0x0001932f) popup_call2_audio_in_window_g1_ParamLimits

0x29ee,	// (0x0001932f) popup_call2_audio_in_window_g1

0x2a26,	// (0x00019367) popup_call2_audio_in_window_g2_ParamLimits

0x2a26,	// (0x00019367) popup_call2_audio_in_window_g2

0x2a5e,	// (0x0001939f) popup_call2_audio_in_window_g3_ParamLimits

0x2a5e,	// (0x0001939f) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00025eb6) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00025eb6) popup_call2_audio_in_window_g

0x2ab6,	// (0x000193f7) popup_call2_audio_in_window_t1_ParamLimits

0x2ab6,	// (0x000193f7) popup_call2_audio_in_window_t1

0x2b36,	// (0x00019477) popup_call2_audio_in_window_t2_ParamLimits

0x2b36,	// (0x00019477) popup_call2_audio_in_window_t2

0x2bb6,	// (0x000194f7) popup_call2_audio_in_window_t3_ParamLimits

0x2bb6,	// (0x000194f7) popup_call2_audio_in_window_t3

0x2bd0,	// (0x00019511) popup_call2_audio_in_window_t4_ParamLimits

0x2bd0,	// (0x00019511) popup_call2_audio_in_window_t4

0x2be2,	// (0x00019523) popup_call2_audio_in_window_t5_ParamLimits

0x2be2,	// (0x00019523) popup_call2_audio_in_window_t5

0x2bf7,	// (0x00019538) popup_call2_audio_in_window_t6_ParamLimits

0x2bf7,	// (0x00019538) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00025ebf) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00025ebf) popup_call2_audio_in_window_t

0x0aa6,	// (0x000173e7) bg_popup_call2_in_pane_g1

0x2d0e,	// (0x0001964f) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00025f27) popup_cale_lunar_info_window_t

0x0aae,	// (0x000173ef) bg_popup_call2_rect_pane_ParamLimits

0x0aae,	// (0x000173ef) bg_popup_call2_rect_pane

0x0853,	// (0x00017194) call2_cli_visual_graphic_pane

0x0853,	// (0x00017194) call2_cli_visual_text_pane

0x729e,	// (0x0001dbdf) smil_status_volume_pane_g3

0x0002,

0x0c20,	// (0x00017561) call2_cli_visual_graphic_pane_g1

0x0c20,	// (0x00017561) call2_cli_visual_graphic_pane_g2

0x0c20,	// (0x00017561) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00025ecc) call2_cli_visual_graphic_pane_g

0x2c0c,	// (0x0001954d) bg_popup_call2_rect_pane_g1

0x0cac,	// (0x000175ed) bg_popup_call2_rect_pane_g2

0x2c14,	// (0x00019555) bg_popup_call2_rect_pane_g3

0x2c1c,	// (0x0001955d) bg_popup_call2_rect_pane_g4

0x2c24,	// (0x00019565) bg_popup_call2_rect_pane_g5

0x2c2c,	// (0x0001956d) bg_popup_call2_rect_pane_g6

0x2c34,	// (0x00019575) bg_popup_call2_rect_pane_g7

0x2c3c,	// (0x0001957d) bg_popup_call2_rect_pane_g8

0x2c44,	// (0x00019585) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00025ed3) bg_popup_call2_rect_pane_g

0x2c4c,	// (0x0001958d) bg_popup_call2_bubble_pane_g1

0x2c54,	// (0x00019595) bg_popup_call2_bubble_pane_g2

0x2c5c,	// (0x0001959d) bg_popup_call2_bubble_pane_g3

0x2c64,	// (0x000195a5) bg_popup_call2_bubble_pane_g4

0x2c6c,	// (0x000195ad) bg_popup_call2_bubble_pane_g5

0x2c74,	// (0x000195b5) bg_popup_call2_bubble_pane_g6

0x2c7c,	// (0x000195bd) bg_popup_call2_bubble_pane_g7

0x2c84,	// (0x000195c5) bg_popup_call2_bubble_pane_g8

0x2c8c,	// (0x000195cd) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00025ee6) bg_popup_call2_bubble_pane_g

0x88fc,	// (0x0001f23d) aid_cale_week_size_cell_pane

0x8ccc,	// (0x0001f60d) aid_cams_cif_uncrop_pane_ParamLimits

0x8ccc,	// (0x0001f60d) aid_cams_cif_uncrop_pane

0x8e29,	// (0x0001f76a) aid_cams_size_cell_ParamLimits

0x8e29,	// (0x0001f76a) aid_cams_size_cell

0x8e35,	// (0x0001f776) grid_cams_pane_ParamLimits

0x8e43,	// (0x0001f784) linegrid_cams_pane_ParamLimits

0x8f6f,	// (0x0001f8b0) call_video_pane_t1

0x8f90,	// (0x0001f8d1) call_video_pane_t2

0x0001,

0xf292,	// (0x00025bd3) call_video_pane_t

0x94c7,	// (0x0001fe08) aid_cale_month_size_cell_pane_ParamLimits

0x94c7,	// (0x0001fe08) aid_cale_month_size_cell_pane

0xf62f,	// (0x00025f70) smil_status_volume_pane_g

0x72ab,	// (0x0001dbec) volume_smil_pane_ParamLimits

0x03d4,	// (0x00016d15) aid_popup2_width_pane

0x8841,	// (0x0001f182) cell_qdial_pane_g4_ParamLimits

0x8841,	// (0x0001f182) cell_qdial_pane_g4

0xa087,	// (0x000209c8) aid_blid_cardinal_pane_ParamLimits

0xa097,	// (0x000209d8) aid_blid_destination_pane_ParamLimits

0xa097,	// (0x000209d8) aid_blid_destination_pane

0x0aae,	// (0x000173ef) bg_popup_call_poc_act_pane_ParamLimits

0x0aae,	// (0x000173ef) bg_popup_call_poc_act_pane

0x0aae,	// (0x000173ef) bg_popup_call_poc_inact_pane_ParamLimits

0x0aae,	// (0x000173ef) bg_popup_call_poc_inact_pane

0x2c94,	// (0x000195d5) bg_popup_call_poc_act_pane_g1

0x2c9c,	// (0x000195dd) bg_popup_call_poc_act_pane_g2

0x2ca4,	// (0x000195e5) bg_popup_call_poc_act_pane_g3

0x2c64,	// (0x000195a5) bg_popup_call_poc_act_pane_g4

0x2c6c,	// (0x000195ad) bg_popup_call_poc_act_pane_g5

0x2cac,	// (0x000195ed) bg_popup_call_poc_act_pane_g6

0x2c7c,	// (0x000195bd) bg_popup_call_poc_act_pane_g7

0x2cb4,	// (0x000195f5) bg_popup_call_poc_act_pane_g8

0x0853,	// (0x00017194) main_usb_pane

0x2e0d,	// (0x0001974e) popup_cale_lunar_info_window

0x92bb,	// (0x0001fbfc) im_reading_pane_t1_ParamLimits

0x0fb9,	// (0x000178fa) list_im_pane_ParamLimits

0x0fca,	// (0x0001790b) scroll_pane_cp07_ParamLimits

0x0853,	// (0x00017194) grid_highlight_pane_cp012

0x0aae,	// (0x000173ef) mup_scale_pane_ParamLimits

0x1a0b,	// (0x0001834c) main_usb_pane_g1_ParamLimits

0x1a0b,	// (0x0001834c) main_usb_pane_g1

0xac38,	// (0x00021579) main_usb_pane_g2_ParamLimits

0xac38,	// (0x00021579) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00025f10) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00025f10) main_usb_pane_g

0xac44,	// (0x00021585) main_usb_pane_t1_ParamLimits

0xac44,	// (0x00021585) main_usb_pane_t1

0xac56,	// (0x00021597) main_usb_pane_t2_ParamLimits

0xac56,	// (0x00021597) main_usb_pane_t2

0xac68,	// (0x000215a9) main_usb_pane_t3_ParamLimits

0xac68,	// (0x000215a9) main_usb_pane_t3

0xac7a,	// (0x000215bb) main_usb_pane_t4_ParamLimits

0xac7a,	// (0x000215bb) main_usb_pane_t4

0xac8c,	// (0x000215cd) main_usb_pane_t5_ParamLimits

0xac8c,	// (0x000215cd) main_usb_pane_t5

0xac9e,	// (0x000215df) main_usb_pane_t6_ParamLimits

0xac9e,	// (0x000215df) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00025f15) main_usb_pane_t_ParamLimits

0xa02d,	// (0x0002096e) aid_text_placing

0xa039,	// (0x0002097a) main_location2_pane_t1_ParamLimits

0xa04d,	// (0x0002098e) main_location2_pane_t2_ParamLimits

0xa061,	// (0x000209a2) main_location2_pane_t3_ParamLimits

0xa075,	// (0x000209b6) main_location2_pane_t4_ParamLimits

0xa075,	// (0x000209b6) main_location2_pane_t4

0xf3f3,	// (0x00025d34) main_location2_pane_t_ParamLimits

0x0aea,	// (0x0001742b) find_pinb_pane_g2_ParamLimits

0x0aea,	// (0x0001742b) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00025a82) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00025a82) find_pinb_pane_g

0x0af6,	// (0x00017437) find_pinb_pane_t1_ParamLimits

0x0b08,	// (0x00017449) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00025a87) find_pinb_pane_t_ParamLimits

0x0853,	// (0x00017194) main_call3_pane

0x98d3,	// (0x00020214) cale_month_day_heading_pane_t1_ParamLimits

0x9931,	// (0x00020272) cale_month_day_heading_pane_t2_ParamLimits

0x9996,	// (0x000202d7) cale_month_day_heading_pane_t3_ParamLimits

0x99fb,	// (0x0002033c) cale_month_day_heading_pane_t4_ParamLimits

0x9a60,	// (0x000203a1) cale_month_day_heading_pane_t5_ParamLimits

0x9ac5,	// (0x00020406) cale_month_day_heading_pane_t6_ParamLimits

0x9b2a,	// (0x0002046b) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00025c0b) cale_month_day_heading_pane_t_ParamLimits

0x1240,	// (0x00017b81) smil_status_volume_pane

0xa7fc,	// (0x0002113d) postcard_address_pane_ParamLimits

0xa7fc,	// (0x0002113d) postcard_address_pane

0xa808,	// (0x00021149) postcard_message_pane_ParamLimits

0xa808,	// (0x00021149) postcard_message_pane

0xac03,	// (0x00021544) call2_cli_visual_pane_t1_ParamLimits

0xac03,	// (0x00021544) call2_cli_visual_pane_t1

0xb1cb,	// (0x00021b0c) postcard_message_pane_t1_ParamLimits

0xb1cb,	// (0x00021b0c) postcard_message_pane_t1

0xb1b4,	// (0x00021af5) postcard_address_pane_t1_ParamLimits

0xb1b4,	// (0x00021af5) postcard_address_pane_t1

0xb1a5,	// (0x00021ae6) popup_call3_audio_in_window_ParamLimits

0xb1a5,	// (0x00021ae6) popup_call3_audio_in_window

0xb089,	// (0x000219ca) bg_popup_call3_in_pane_ParamLimits

0xb089,	// (0x000219ca) bg_popup_call3_in_pane

0xb0eb,	// (0x00021a2c) popup_call3_audio_in_window_g1_ParamLimits

0xb0eb,	// (0x00021a2c) popup_call3_audio_in_window_g1

0xb103,	// (0x00021a44) popup_call3_audio_in_window_g2_ParamLimits

0xb103,	// (0x00021a44) popup_call3_audio_in_window_g2

0xb11b,	// (0x00021a5c) popup_call3_audio_in_window_g3_ParamLimits

0xb11b,	// (0x00021a5c) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00025f77) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00025f77) popup_call3_audio_in_window_g

0xb143,	// (0x00021a84) popup_call3_audio_in_window_t1_ParamLimits

0xb143,	// (0x00021a84) popup_call3_audio_in_window_t1

0xb16b,	// (0x00021aac) popup_call3_audio_in_window_t2_ParamLimits

0xb16b,	// (0x00021aac) popup_call3_audio_in_window_t2

0xb193,	// (0x00021ad4) popup_call3_audio_in_window_t3_ParamLimits

0xb193,	// (0x00021ad4) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00025f80) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00025f80) popup_call3_audio_in_window_t

0x193a,	// (0x0001827b) bg_popup_call3_rect_pane

0x2c0c,	// (0x0001954d) bg_popup_call3_rect_pane_g1

0x0cac,	// (0x000175ed) bg_popup_call3_rect_pane_g2

0x2c14,	// (0x00019555) bg_popup_call3_rect_pane_g3

0x2c1c,	// (0x0001955d) bg_popup_call3_rect_pane_g4

0x2c24,	// (0x00019565) bg_popup_call3_rect_pane_g5

0x2c2c,	// (0x0001956d) bg_popup_call3_rect_pane_g6

0x2c34,	// (0x00019575) bg_popup_call3_rect_pane_g7

0xa475,	// (0x00020db6) mup_visualizer_osc_pane

0x1a19,	// (0x0001835a) mup_visualizer_spec_pane

0xb0a9,	// (0x000219ea) call3_video_qcif_pane_ParamLimits

0xb0a9,	// (0x000219ea) call3_video_qcif_pane

0xb0bb,	// (0x000219fc) call3_video_qcif_uncrop_pane_ParamLimits

0xb0bb,	// (0x000219fc) call3_video_qcif_uncrop_pane

0xb0c9,	// (0x00021a0a) call3_video_subqcif_pane_ParamLimits

0xb0c9,	// (0x00021a0a) call3_video_subqcif_pane

0xb0db,	// (0x00021a1c) call3_video_subqcif_uncrop_pane_ParamLimits

0xb0db,	// (0x00021a1c) call3_video_subqcif_uncrop_pane

0xb133,	// (0x00021a74) popup_call3_audio_in_window_g4_ParamLimits

0xb133,	// (0x00021a74) popup_call3_audio_in_window_g4

0xb078,	// (0x000219b9) mup_spec_half_pane

0xb081,	// (0x000219c2) mup_spec_half_pane_cp

0x2ea4,	// (0x000197e5) mup_osc_middle_pane

0x2ead,	// (0x000197ee) mup_visualizer_osc_pane_g1

0xb059,	// (0x0002199a) mup_spec_bar_pane_ParamLimits

0xb059,	// (0x0002199a) mup_spec_bar_pane

0x2e91,	// (0x000197d2) mup_spec_bar_pane_g1

0x2e9b,	// (0x000197dc) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00025f6b) mup_spec_bar_pane_g

0x88fc,	// (0x0001f23d) aid_cale_week_size_cell_pane_ParamLimits

0x890f,	// (0x0001f250) bg_cale_heading_pane_ParamLimits

0x0d28,	// (0x00017669) bg_cale_pane_cp01_ParamLimits

0x892b,	// (0x0001f26c) cale_week_corner_pane_ParamLimits

0x8941,	// (0x0001f282) cale_week_day_heading_pane_ParamLimits

0x895d,	// (0x0001f29e) cale_week_scroll_pane_g1_ParamLimits

0x8976,	// (0x0001f2b7) cale_week_scroll_pane_g2_ParamLimits

0x8987,	// (0x0001f2c8) cale_week_scroll_pane_g3_ParamLimits

0x8998,	// (0x0001f2d9) cale_week_scroll_pane_g4_ParamLimits

0x89a9,	// (0x0001f2ea) cale_week_scroll_pane_g5_ParamLimits

0x89ba,	// (0x0001f2fb) cale_week_scroll_pane_g6_ParamLimits

0x89cb,	// (0x0001f30c) cale_week_scroll_pane_g7_ParamLimits

0x89de,	// (0x0001f31f) cale_week_scroll_pane_g8_ParamLimits

0x89f1,	// (0x0001f332) cale_week_scroll_pane_g9_ParamLimits

0x8a02,	// (0x0001f343) cale_week_scroll_pane_g10_ParamLimits

0x8a13,	// (0x0001f354) cale_week_scroll_pane_g11_ParamLimits

0x8a24,	// (0x0001f365) cale_week_scroll_pane_g12_ParamLimits

0x8a35,	// (0x0001f376) cale_week_scroll_pane_g13_ParamLimits

0x8a4e,	// (0x0001f38f) cale_week_scroll_pane_g14_ParamLimits

0x8a67,	// (0x0001f3a8) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00025b13) cale_week_scroll_pane_g_ParamLimits

0x8a80,	// (0x0001f3c1) cale_week_time_pane_ParamLimits

0x8a93,	// (0x0001f3d4) grid_cale_week_pane_ParamLimits

0x0d41,	// (0x00017682) listscroll_cale_week_pane_t1

0x8ab0,	// (0x0001f3f1) scroll_pane_cp08_ParamLimits

0x9518,	// (0x0001fe59) cale_month_corner_pane_ParamLimits

0x11e0,	// (0x00017b21) cale_month_pane_t1

0x9882,	// (0x000201c3) cale_month_week_pane_ParamLimits

0x1a0b,	// (0x0001834c) popup_call_status_window_g1_ParamLimits

0x9ec3,	// (0x00020804) popup_call_status_window_g2_ParamLimits

0x9ecf,	// (0x00020810) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00025cbb) popup_call_status_window_g_ParamLimits

0x1653,	// (0x00017f94) aid_call2_pane

0xa708,	// (0x00021049) msg_header_pane_g1

0xa7fc,	// (0x0002113d) postcard_address2_pane_ParamLimits

0xa7fc,	// (0x0002113d) postcard_address2_pane

0xa808,	// (0x00021149) postcard_message2_pane_ParamLimits

0xa808,	// (0x00021149) postcard_message2_pane

0xaff1,	// (0x00021932) message2_row_pane_ParamLimits

0xaff1,	// (0x00021932) message2_row_pane

0xb00c,	// (0x0002194d) address2_row_pane_ParamLimits

0xb00c,	// (0x0002194d) address2_row_pane

0x2e5f,	// (0x000197a0) postcard_message2_row_pane_g1

0x2e67,	// (0x000197a8) postcard_message2_row_pane_t1

0x2e5f,	// (0x000197a0) address2_row_pane_g1

0x2e67,	// (0x000197a8) address2_row_pane_t1

0x70ed,	// (0x0001da2e) aid_size_cell_vorec

0x0853,	// (0x00017194) main_rss_pane

0xb01f,	// (0x00021960) rss_list_single_pane_ParamLimits

0xb01f,	// (0x00021960) rss_list_single_pane

0x2e75,	// (0x000197b6) rss_list_single_pane_t1

0x2e83,	// (0x000197c4) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00025f66) rss_list_single_pane_t

0x0853,	// (0x00017194) main_camera2_pane

0x0853,	// (0x00017194) main_video2_pane

0x7309,	// (0x0001dc4a) cams_zoom_pane_cp2_ParamLimits

0x7309,	// (0x0001dc4a) cams_zoom_pane_cp2

0x7315,	// (0x0001dc56) image2_vga_pane_ParamLimits

0x7315,	// (0x0001dc56) image2_vga_pane

0x7324,	// (0x0001dc65) main_camera2_pane_g1_ParamLimits

0x7324,	// (0x0001dc65) main_camera2_pane_g1

0x7330,	// (0x0001dc71) main_camera2_pane_g2_ParamLimits

0x7330,	// (0x0001dc71) main_camera2_pane_g2

0x733c,	// (0x0001dc7d) main_camera2_pane_g3_ParamLimits

0x733c,	// (0x0001dc7d) main_camera2_pane_g3

0x7348,	// (0x0001dc89) main_camera2_pane_g4_ParamLimits

0x7348,	// (0x0001dc89) main_camera2_pane_g4

0x7354,	// (0x0001dc95) main_camera2_pane_g5_ParamLimits

0x7354,	// (0x0001dc95) main_camera2_pane_g5

0x7360,	// (0x0001dca1) main_camera2_pane_g6_ParamLimits

0x7360,	// (0x0001dca1) main_camera2_pane_g6

0x736c,	// (0x0001dcad) main_camera2_pane_g7_ParamLimits

0x736c,	// (0x0001dcad) main_camera2_pane_g7

0x7378,	// (0x0001dcb9) main_camera2_pane_g8_ParamLimits

0x7378,	// (0x0001dcb9) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00025f87) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00025f87) main_camera2_pane_g

0x7390,	// (0x0001dcd1) main_camera2_pane_t1_ParamLimits

0x7390,	// (0x0001dcd1) main_camera2_pane_t1

0x73a2,	// (0x0001dce3) main_camera2_pane_t2_ParamLimits

0x73a2,	// (0x0001dce3) main_camera2_pane_t2

0x73b4,	// (0x0001dcf5) main_camera2_pane_t3_ParamLimits

0x73b4,	// (0x0001dcf5) main_camera2_pane_t3

0x73c6,	// (0x0001dd07) main_camera2_pane_t4_ParamLimits

0x73c6,	// (0x0001dd07) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00025f9a) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00025f9a) main_camera2_pane_t

0x7428,	// (0x0001dd69) cams_zoom_pane_cp4_ParamLimits

0x7428,	// (0x0001dd69) cams_zoom_pane_cp4

0x7438,	// (0x0001dd79) image2_cif_pane_ParamLimits

0x7438,	// (0x0001dd79) image2_cif_pane

0x744d,	// (0x0001dd8e) image2_subqcif_pane_ParamLimits

0x744d,	// (0x0001dd8e) image2_subqcif_pane

0x745c,	// (0x0001dd9d) main_video2_pane_g1_ParamLimits

0x745c,	// (0x0001dd9d) main_video2_pane_g1

0x746e,	// (0x0001ddaf) main_video2_pane_g2_ParamLimits

0x746e,	// (0x0001ddaf) main_video2_pane_g2

0x747e,	// (0x0001ddbf) main_video2_pane_g3_ParamLimits

0x747e,	// (0x0001ddbf) main_video2_pane_g3

0x748e,	// (0x0001ddcf) main_video2_pane_g4_ParamLimits

0x748e,	// (0x0001ddcf) main_video2_pane_g4

0x749e,	// (0x0001dddf) main_video2_pane_g5_ParamLimits

0x749e,	// (0x0001dddf) main_video2_pane_g5

0x74ae,	// (0x0001ddef) main_video2_pane_g6_ParamLimits

0x74ae,	// (0x0001ddef) main_video2_pane_g6

0x0005,

0xf668,	// (0x00025fa9) main_video2_pane_g_ParamLimits

0xf668,	// (0x00025fa9) main_video2_pane_g

0x74c0,	// (0x0001de01) main_video2_pane_t1_ParamLimits

0x74c0,	// (0x0001de01) main_video2_pane_t1

0x74da,	// (0x0001de1b) main_video2_pane_t2_ParamLimits

0x74da,	// (0x0001de1b) main_video2_pane_t2

0x7500,	// (0x0001de41) main_video2_pane_t3_ParamLimits

0x7500,	// (0x0001de41) main_video2_pane_t3

0x0002,

0xf675,	// (0x00025fb6) main_video2_pane_t_ParamLimits

0xf675,	// (0x00025fb6) main_video2_pane_t

0xad55,	// (0x00021696) call_muted_g2

0x0001,

0xf617,	// (0x00025f58) call_muted_g

0x0853,	// (0x00017194) main_mup2_pane

0x2f64,	// (0x000198a5) main_mup2_pane_g1_ParamLimits

0x2f64,	// (0x000198a5) main_mup2_pane_g1

0xb1e6,	// (0x00021b27) main_mup2_pane_g2_ParamLimits

0xb1e6,	// (0x00021b27) main_mup2_pane_g2

0x754f,	// (0x0001de90) main_mup_pane_g13_cp1

0x7557,	// (0x0001de98) mup_volume_pane_cp1

0xb206,	// (0x00021b47) main_mup2_pane_g4_ParamLimits

0xb206,	// (0x00021b47) main_mup2_pane_g4

0xb21b,	// (0x00021b5c) main_mup2_pane_g5_ParamLimits

0xb21b,	// (0x00021b5c) main_mup2_pane_g5

0xb230,	// (0x00021b71) main_mup2_pane_g6_ParamLimits

0xb230,	// (0x00021b71) main_mup2_pane_g6

0xb245,	// (0x00021b86) main_mup2_pane_g7_ParamLimits

0xb245,	// (0x00021b86) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00025fbd) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00025fbd) main_mup2_pane_g

0xb261,	// (0x00021ba2) main_mup2_pane_t1_ParamLimits

0xb261,	// (0x00021ba2) main_mup2_pane_t1

0xb278,	// (0x00021bb9) main_mup2_pane_t2_ParamLimits

0xb278,	// (0x00021bb9) main_mup2_pane_t2

0xb28f,	// (0x00021bd0) main_mup2_pane_t3_ParamLimits

0xb28f,	// (0x00021bd0) main_mup2_pane_t3

0xb2a6,	// (0x00021be7) main_mup2_pane_t4_ParamLimits

0xb2a6,	// (0x00021be7) main_mup2_pane_t4

0xb2c0,	// (0x00021c01) main_mup2_pane_t5_ParamLimits

0xb2c0,	// (0x00021c01) main_mup2_pane_t5

0xb2da,	// (0x00021c1b) main_mup2_pane_t6_ParamLimits

0xb2da,	// (0x00021c1b) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00025fcc) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00025fcc) main_mup2_pane_t

0xb312,	// (0x00021c53) mup2_visualizer_pane_ParamLimits

0xb312,	// (0x00021c53) mup2_visualizer_pane

0xb348,	// (0x00021c89) mup_progress_pane_cp_ParamLimits

0xb348,	// (0x00021c89) mup_progress_pane_cp

0x753a,	// (0x0001de7b) mup_volume_pane_cp_ParamLimits

0x753a,	// (0x0001de7b) mup_volume_pane_cp

0xb35f,	// (0x00021ca0) mup2_visualizer_pane_g1_ParamLimits

0xb35f,	// (0x00021ca0) mup2_visualizer_pane_g1

0x2f36,	// (0x00019877) mup2_visualizer_pane_g2_ParamLimits

0x2f36,	// (0x00019877) mup2_visualizer_pane_g2

0xb374,	// (0x00021cb5) mup2_visualizer_pane_g3_ParamLimits

0xb374,	// (0x00021cb5) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00025fd9) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00025fd9) mup2_visualizer_pane_g

0x1cf1,	// (0x00018632) aid_size_cell_fmradio

0xae6b,	// (0x000217ac) aid_height_parent_landcape

0x1048,	// (0x00017989) wml_content_pane_cp

0x1050,	// (0x00017991) wml_tabs_pane

0x1059,	// (0x0001799a) popup_wml_miniature_window

0x1061,	// (0x000179a2) scroll_pane_cp021

0x1075,	// (0x000179b6) wml_content_pane_comp8

0x0853,	// (0x00017194) bg_popup_sub_pane_cp05

0x2f54,	// (0x00019895) popup_wml_miniature_window_g1

0x2f5c,	// (0x0001989d) wml_miniature_view_pane

0xb382,	// (0x00021cc3) aid_size_wml_view

0xb38a,	// (0x00021ccb) wml_miniature_view_pane_g1

0xb393,	// (0x00021cd4) wml_miniature_view_pane_g2

0xb39c,	// (0x00021cdd) wml_miniature_view_pane_g3

0xb3a4,	// (0x00021ce5) wml_miniature_view_pane_g4

0xb3ac,	// (0x00021ced) wml_miniature_view_pane_g5

0xb3b4,	// (0x00021cf5) wml_miniature_view_pane_g6

0xb3bc,	// (0x00021cfd) wml_miniature_view_pane_g7

0xb3c4,	// (0x00021d05) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00025fe0) wml_miniature_view_pane_g

0x2f64,	// (0x000198a5) background_graphic_ParamLimits

0x2f64,	// (0x000198a5) background_graphic

0x2f70,	// (0x000198b1) wml_tabs_2_pane

0x2f79,	// (0x000198ba) wml_tabs_3_pane_ParamLimits

0x2f79,	// (0x000198ba) wml_tabs_3_pane

0x2f8b,	// (0x000198cc) wml_tabs_4_pane_ParamLimits

0x2f8b,	// (0x000198cc) wml_tabs_4_pane

0x2fa1,	// (0x000198e2) wml_tabs_5_pane_ParamLimits

0x2fa1,	// (0x000198e2) wml_tabs_5_pane

0x2fbb,	// (0x000198fc) wml_tabs_pane_g2_ParamLimits

0x2fbb,	// (0x000198fc) wml_tabs_pane_g2

0x2fcf,	// (0x00019910) wml_tabs_pane_g3_ParamLimits

0x2fcf,	// (0x00019910) wml_tabs_pane_g3

0xb3cc,	// (0x00021d0d) wml_tabs_2_active_pane_ParamLimits

0xb3cc,	// (0x00021d0d) wml_tabs_2_active_pane

0xb3dc,	// (0x00021d1d) wml_tabs_2_passive_pane_ParamLimits

0xb3dc,	// (0x00021d1d) wml_tabs_2_passive_pane

0xb3ec,	// (0x00021d2d) wml_tabs_3_active_pane_cp_ParamLimits

0xb3ec,	// (0x00021d2d) wml_tabs_3_active_pane_cp

0xb3fd,	// (0x00021d3e) wml_tabs_3_passive_pane_ParamLimits

0xb3fd,	// (0x00021d3e) wml_tabs_3_passive_pane

0xb40e,	// (0x00021d4f) wml_tabs_3_passive_pane_cp_ParamLimits

0xb40e,	// (0x00021d4f) wml_tabs_3_passive_pane_cp

0xb41f,	// (0x00021d60) tabs_4_active_pane

0xb427,	// (0x00021d68) tabs_4_passive_pane

0xb42f,	// (0x00021d70) tabs_4_passive_pane_cp

0xb437,	// (0x00021d78) tabs_4_passive_pane_cp2

0xac30,	// (0x00021571) aid_height_text

0xa442,	// (0x00020d83) mup_volume_cont_pane_ParamLimits

0xa442,	// (0x00020d83) mup_volume_cont_pane

0x85f9,	// (0x0001ef3a) aid_size_cell_pinb

0x8603,	// (0x0001ef44) aid_size_list_pinb

0xb331,	// (0x00021c72) mup2_volume_cont_pane_ParamLimits

0xb331,	// (0x00021c72) mup2_volume_cont_pane

0x7526,	// (0x0001de67) mup2_volume_cont_pane_g1_ParamLimits

0x7526,	// (0x0001de67) mup2_volume_cont_pane_g1

0x8298,	// (0x0001ebd9) aid_size_cell_touch_ParamLimits

0x8298,	// (0x0001ebd9) aid_size_cell_touch

0x84df,	// (0x0001ee20) touch_pane_ParamLimits

0x84df,	// (0x0001ee20) touch_pane

0x03c2,	// (0x00016d03) main_rss2_pane

0x3025,	// (0x00019966) listscroll_rss2_pane

0x302e,	// (0x0001996f) rss2_navigation_pane

0x3036,	// (0x00019977) list_rss2_pane

0x17f1,	// (0x00018132) scroll_pane_cp22

0x303e,	// (0x0001997f) rss2_navigation_pane_g1

0x3047,	// (0x00019988) rss2_navigation_pane_g2

0x304f,	// (0x00019990) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00025ff1) rss2_navigation_pane_g

0x3057,	// (0x00019998) rss2_navigation_pane_t1

0xb43f,	// (0x00021d80) rss2_list_single_pane_ParamLimits

0xb43f,	// (0x00021d80) rss2_list_single_pane

0x3065,	// (0x000199a6) rss2_list_single_pane_t2

0x3073,	// (0x000199b4) rss2_list_single_pane_t3_ParamLimits

0x3073,	// (0x000199b4) rss2_list_single_pane_t3

0x3090,	// (0x000199d1) rss2_list_single_pane_t4

0x9d06,	// (0x00020647) smil_status_pane_g1

0x0432,	// (0x00016d73) main_image2_pane_ParamLimits

0x0432,	// (0x00016d73) main_image2_pane

0x7384,	// (0x0001dcc5) main_camera2_pane_g9_ParamLimits

0x7384,	// (0x0001dcc5) main_camera2_pane_g9

0x73d8,	// (0x0001dd19) main_camera2_pane_t5_ParamLimits

0x73d8,	// (0x0001dd19) main_camera2_pane_t5

0x73ea,	// (0x0001dd2b) main_camera2_pane_t6_ParamLimits

0x73ea,	// (0x0001dd2b) main_camera2_pane_t6

0xb470,	// (0x00021db1) main_image2_pane_g1_ParamLimits

0xb470,	// (0x00021db1) main_image2_pane_g1

0xa9d0,	// (0x00021311) smil2_video_pane_ParamLimits

0xa9d0,	// (0x00021311) smil2_video_pane

0x03e0,	// (0x00016d21) aid_zoom_text_primary_cp

0x0428,	// (0x00016d69) popup_preview_fixed_window

0x0fb1,	// (0x000178f2) im_reading_pane_g1

0x72ce,	// (0x0001dc0f) cams2_bc_adjust_pane_cp_ParamLimits

0x72ce,	// (0x0001dc0f) cams2_bc_adjust_pane_cp

0x741a,	// (0x0001dd5b) cams2_bc_adjust_pane_ParamLimits

0x741a,	// (0x0001dd5b) cams2_bc_adjust_pane

0x4861,	// (0x0001b1a2) cams2_bc_adjust_pane_g1

0x755f,	// (0x0001dea0) cams2_slider_pane

0x7568,	// (0x0001dea9) cams2_slider_pane_g1

0x7571,	// (0x0001deb2) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00025ff8) cams2_slider_pane_g

0x6e84,	// (0x0001d7c5) calc_display_pane_ParamLimits

0x6ea2,	// (0x0001d7e3) calc_paper_pane_ParamLimits

0x6ebe,	// (0x0001d7ff) grid_calc_pane_ParamLimits

0x7209,	// (0x0001db4a) popup_clock_digital_window_t1_ParamLimits

0x1c8e,	// (0x000185cf) main_image_pane_t1

0x6e6a,	// (0x0001d7ab) aid_size_cell_calc_ParamLimits

0x6e6a,	// (0x0001d7ab) aid_size_cell_calc

0xae9d,	// (0x000217de) popup_blid_sat_info2_window_ParamLimits

0xae9d,	// (0x000217de) popup_blid_sat_info2_window

0x30da,	// (0x00019a1b) aid_size_cell_blid

0x30e2,	// (0x00019a23) bg_popup_window_pane_cp07

0x3105,	// (0x00019a46) grid_popup_blid_pane

0x310f,	// (0x00019a50) heading_pane_cp05_ParamLimits

0x310f,	// (0x00019a50) heading_pane_cp05

0x31d9,	// (0x00019b1a) cell_popup_blid_pane_ParamLimits

0x31d9,	// (0x00019b1a) cell_popup_blid_pane

0x31fd,	// (0x00019b3e) cell_popup_blid_pane_g1

0x3205,	// (0x00019b46) cell_popup_blid_pane_t1

0xb2f7,	// (0x00021c38) mup2_indicator_pane_ParamLimits

0xb2f7,	// (0x00021c38) mup2_indicator_pane

0x193a,	// (0x0001827b) mup2_visualizer_osc_pane

0x2f42,	// (0x00019883) mup2_visualizer_spec_pane_ParamLimits

0x2f42,	// (0x00019883) mup2_visualizer_spec_pane

0xb47c,	// (0x00021dbd) mup2_spec_half_pane

0xb485,	// (0x00021dc6) mup2_spec_half_pane_cp

0xb48f,	// (0x00021dd0) mup2_spec_bar_pane_ParamLimits

0xb48f,	// (0x00021dd0) mup2_spec_bar_pane

0x2e91,	// (0x000197d2) mup2_spec_bar_pane_g1

0x2e9b,	// (0x000197dc) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00025f6b) mup2_spec_bar_pane_g

0xb4ae,	// (0x00021def) mup2_osc_middle_pane

0x2ead,	// (0x000197ee) mup2_visualizer_osc_pane_g1

0x0460,	// (0x00016da1) popup_number_entry_window_t1_ParamLimits

0x0473,	// (0x00016db4) popup_number_entry_window_t2_ParamLimits

0x0485,	// (0x00016dc6) popup_number_entry_window_t3_ParamLimits

0x8536,	// (0x0001ee77) popup_number_entry_window_t5_ParamLimits

0x8536,	// (0x0001ee77) popup_number_entry_window_t5

0xf0ec,	// (0x00025a2d) popup_number_entry_window_t_ParamLimits

0x0497,	// (0x00016dd8) text_title_cp2_ParamLimits

0x7248,	// (0x0001db89) aid_hotspot_pointer_text2_pane

0x7292,	// (0x0001dbd3) main_viewer_pane_g9_ParamLimits

0x7292,	// (0x0001dbd3) main_viewer_pane_g9

0x11e0,	// (0x00017b21) cale_month_pane_t1_ParamLimits

0x1275,	// (0x00017bb6) bg_cale_pane_ParamLimits

0x128d,	// (0x00017bce) list_cale_pane_ParamLimits

0x0d41,	// (0x00017682) listscroll_cale_day_pane_t1

0x129e,	// (0x00017bdf) scroll_pane_cp09_ParamLimits

0xa47d,	// (0x00020dbe) main_mup_eq_pane_t1_ParamLimits

0xa47d,	// (0x00020dbe) main_mup_eq_pane_t1

0xa497,	// (0x00020dd8) main_mup_eq_pane_t2_ParamLimits

0xa497,	// (0x00020dd8) main_mup_eq_pane_t2

0xa4b1,	// (0x00020df2) main_mup_eq_pane_t3_ParamLimits

0xa4b1,	// (0x00020df2) main_mup_eq_pane_t3

0xa4c9,	// (0x00020e0a) main_mup_eq_pane_t4_ParamLimits

0xa4c9,	// (0x00020e0a) main_mup_eq_pane_t4

0xa4e1,	// (0x00020e22) main_mup_eq_pane_t5_ParamLimits

0xa4e1,	// (0x00020e22) main_mup_eq_pane_t5

0xa4f9,	// (0x00020e3a) main_mup_eq_pane_t6_ParamLimits

0xa4f9,	// (0x00020e3a) main_mup_eq_pane_t6

0xa50d,	// (0x00020e4e) main_mup_eq_pane_t7_ParamLimits

0xa50d,	// (0x00020e4e) main_mup_eq_pane_t7

0xa521,	// (0x00020e62) main_mup_eq_pane_t8_ParamLimits

0xa521,	// (0x00020e62) main_mup_eq_pane_t8

0xa537,	// (0x00020e78) main_mup_eq_pane_t9_ParamLimits

0xa537,	// (0x00020e78) main_mup_eq_pane_t9

0xa54f,	// (0x00020e90) main_mup_eq_pane_t10_ParamLimits

0xa54f,	// (0x00020e90) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00025dba) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00025dba) main_mup_eq_pane_t

0xa60c,	// (0x00020f4d) mup_equalizer_pane_cp5_ParamLimits

0xa622,	// (0x00020f63) mup_equalizer_pane_cp6_ParamLimits

0xa63a,	// (0x00020f7b) mup_equalizer_pane_cp7_ParamLimits

0x03c2,	// (0x00016d03) main_gallery_pane

0x2eb6,	// (0x000197f7) smil2_volume_pane

0x2ed1,	// (0x00019812) smil_status_volume_pane_g1_ParamLimits

0x2ebe,	// (0x000197ff) smil_status_volume_pane_g2_ParamLimits

0x729e,	// (0x0001dbdf) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00025f70) smil_status_volume_pane_g_ParamLimits

0x30e2,	// (0x00019a23) bg_popup_window_pane_cp07_ParamLimits

0x30f0,	// (0x00019a31) blid_firmament_pane

0xb4b7,	// (0x00021df8) aid_size_cell_gallery_ParamLimits

0xb4b7,	// (0x00021df8) aid_size_cell_gallery

0xb4c5,	// (0x00021e06) grid_gallery_pane_ParamLimits

0xb4c5,	// (0x00021e06) grid_gallery_pane

0xb4d5,	// (0x00021e16) cell_gallery_pane_ParamLimits

0xb4d5,	// (0x00021e16) cell_gallery_pane

0x3213,	// (0x00019b54) bg_cell_gallery_focus_pane_ParamLimits

0x3213,	// (0x00019b54) bg_cell_gallery_focus_pane

0x3225,	// (0x00019b66) cell_gallery_pane_g1_ParamLimits

0x3225,	// (0x00019b66) cell_gallery_pane_g1

0xb523,	// (0x00021e64) cell_gallery_pane_g2_ParamLimits

0xb523,	// (0x00021e64) cell_gallery_pane_g2

0xb530,	// (0x00021e71) cell_gallery_pane_g3_ParamLimits

0xb530,	// (0x00021e71) cell_gallery_pane_g3

0x3231,	// (0x00019b72) cell_gallery_pane_g4_ParamLimits

0x3231,	// (0x00019b72) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0002601e) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0002601e) cell_gallery_pane_g

0x323d,	// (0x00019b7e) bg_cell_gallery_focus_pane_g1

0x3245,	// (0x00019b86) bg_cell_gallery_focus_pane_g2

0x324d,	// (0x00019b8e) bg_cell_gallery_focus_pane_g3

0x3255,	// (0x00019b96) bg_cell_gallery_focus_pane_g4

0x325d,	// (0x00019b9e) bg_cell_gallery_focus_pane_g5

0x3265,	// (0x00019ba6) bg_cell_gallery_focus_pane_g6

0x326d,	// (0x00019bae) bg_cell_gallery_focus_pane_g7

0x3275,	// (0x00019bb6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00026027) bg_cell_gallery_focus_pane_g

0x327d,	// (0x00019bbe) aid_firma_cardinal

0x3291,	// (0x00019bd2) blid_firmament_pane_t1

0x32a8,	// (0x00019be9) blid_firmament_pane_t2

0x32bf,	// (0x00019c00) blid_firmament_pane_t3

0x32d6,	// (0x00019c17) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00026038) blid_firmament_pane_t

0x32ed,	// (0x00019c2e) blid_sat_info_pane

0x32fd,	// (0x00019c3e) blid_sat_info_pane_g1

0x32fd,	// (0x00019c3e) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00026041) blid_sat_info_pane_g

0x3307,	// (0x00019c48) blid_sat_info_pane_t1

0x3315,	// (0x00019c56) smil2_volume_content_pane

0x331e,	// (0x00019c5f) smil2_volume_pane_g1

0x3326,	// (0x00019c67) smil2_volume_content_pane_g1

0x332f,	// (0x00019c70) smil2_volume_content_pane_g2

0x3338,	// (0x00019c79) smil2_volume_content_pane_g3

0x3341,	// (0x00019c82) smil2_volume_content_pane_g4

0x334a,	// (0x00019c8b) smil2_volume_content_pane_g5

0x3353,	// (0x00019c94) smil2_volume_content_pane_g6

0x335c,	// (0x00019c9d) smil2_volume_content_pane_g7

0x3365,	// (0x00019ca6) smil2_volume_content_pane_g8

0x336e,	// (0x00019caf) smil2_volume_content_pane_g9

0x3377,	// (0x00019cb8) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00026046) smil2_volume_content_pane_g

0x8b16,	// (0x0001f457) cale_week_day_heading_pane_t1_ParamLimits

0x8b2f,	// (0x0001f470) cale_week_day_heading_pane_t2_ParamLimits

0x8b48,	// (0x0001f489) cale_week_day_heading_pane_t3_ParamLimits

0x8b61,	// (0x0001f4a2) cale_week_day_heading_pane_t4_ParamLimits

0x8b7a,	// (0x0001f4bb) cale_week_day_heading_pane_t5_ParamLimits

0x8b93,	// (0x0001f4d4) cale_week_day_heading_pane_t6_ParamLimits

0x8bac,	// (0x0001f4ed) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00025b32) cale_week_day_heading_pane_t_ParamLimits

0x0d53,	// (0x00017694) bg_cale_side_pane_ParamLimits

0x701d,	// (0x0001d95e) cale_week_time_pane_t1_ParamLimits

0x7035,	// (0x0001d976) cale_week_time_pane_t2_ParamLimits

0x704d,	// (0x0001d98e) cale_week_time_pane_t3_ParamLimits

0x7065,	// (0x0001d9a6) cale_week_time_pane_t4_ParamLimits

0x707d,	// (0x0001d9be) cale_week_time_pane_t5_ParamLimits

0x7095,	// (0x0001d9d6) cale_week_time_pane_t6_ParamLimits

0x70ad,	// (0x0001d9ee) cale_week_time_pane_t7_ParamLimits

0x70cd,	// (0x0001da0e) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00025b41) cale_week_time_pane_t_ParamLimits

0x8bc5,	// (0x0001f506) cell_cale_week_pane_g2_ParamLimits

0x0d53,	// (0x00017694) bg_cale_side_pane_cp01_ParamLimits

0x9b9f,	// (0x000204e0) cale_month_week_pane_t1_ParamLimits

0x9bb6,	// (0x000204f7) cale_month_week_pane_t2_ParamLimits

0x9bcd,	// (0x0002050e) cale_month_week_pane_t3_ParamLimits

0x9be4,	// (0x00020525) cale_month_week_pane_t4_ParamLimits

0x9bfb,	// (0x0002053c) cale_month_week_pane_t5_ParamLimits

0x9c16,	// (0x00020557) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00025c1a) cale_month_week_pane_t_ParamLimits

0x7169,	// (0x0001daaa) cell_cale_month_pane_g1_ParamLimits

0x03c2,	// (0x00016d03) main_cale_event_viewer_pane

0x03c2,	// (0x00016d03) listscroll_cale_event_viewer_pane

0x3380,	// (0x00019cc1) list_cale_ev_pane

0x3388,	// (0x00019cc9) scroll_pane_cp023

0x3394,	// (0x00019cd5) field_cale_ev_pane_ParamLimits

0x3394,	// (0x00019cd5) field_cale_ev_pane

0x33b2,	// (0x00019cf3) field_cale_ev_content_pane_ParamLimits

0x33b2,	// (0x00019cf3) field_cale_ev_content_pane

0x33be,	// (0x00019cff) field_cale_ev_pane_g1_ParamLimits

0x33be,	// (0x00019cff) field_cale_ev_pane_g1

0x33ca,	// (0x00019d0b) field_cale_ev_pane_g2_ParamLimits

0x33ca,	// (0x00019d0b) field_cale_ev_pane_g2

0x33e2,	// (0x00019d23) field_cale_ev_pane_g3_ParamLimits

0x33e2,	// (0x00019d23) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0002605b) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0002605b) field_cale_ev_pane_g

0x33fa,	// (0x00019d3b) field_cale_ev_pane_t1_ParamLimits

0x33fa,	// (0x00019d3b) field_cale_ev_pane_t1

0x3411,	// (0x00019d52) field_cale_ev_content_pane_t1_ParamLimits

0x3411,	// (0x00019d52) field_cale_ev_content_pane_t1

0x1acb,	// (0x0001840c) bg_button_pane_cp01

0x0ba7,	// (0x000174e8) listscroll_cale_week_pane_ParamLimits

0x88f2,	// (0x0001f233) popup_toolbar_window_cp01

0x0d41,	// (0x00017682) listscroll_cale_week_pane_t1_ParamLimits

0x0ba7,	// (0x000174e8) listscroll_cale_day_pane_ParamLimits

0x88f2,	// (0x0001f233) popup_toolbar_window_cp02

0x0d41,	// (0x00017682) listscroll_cale_day_pane_t1_ParamLimits

0x0ba7,	// (0x000174e8) main_cale_month_pane_ParamLimits

0xaf6d,	// (0x000218ae) popup_toolbar_window_cp03_ParamLimits

0xaf6d,	// (0x000218ae) popup_toolbar_window_cp03

0xa8e6,	// (0x00021227) main_image_pane_g2_ParamLimits

0xa8e6,	// (0x00021227) main_image_pane_g2

0xa8f2,	// (0x00021233) main_image_pane_g3_ParamLimits

0xa8f2,	// (0x00021233) main_image_pane_g3

0x0002,

0xf50b,	// (0x00025e4c) main_image_pane_g_ParamLimits

0xf50b,	// (0x00025e4c) main_image_pane_g

0x1c8e,	// (0x000185cf) main_image_pane_t1_ParamLimits

0xa8fe,	// (0x0002123f) main_image_pane_t2_ParamLimits

0xa8fe,	// (0x0002123f) main_image_pane_t2

0xa910,	// (0x00021251) main_image_pane_t3_ParamLimits

0xa910,	// (0x00021251) main_image_pane_t3

0xa922,	// (0x00021263) main_image_pane_t4_ParamLimits

0xa922,	// (0x00021263) main_image_pane_t4

0x0003,

0xf512,	// (0x00025e53) main_image_pane_t_ParamLimits

0xf512,	// (0x00025e53) main_image_pane_t

0xa934,	// (0x00021275) popup_image_details_window_cp01

0xa93e,	// (0x0002127f) popup_toobar_trans_pane_cp01_ParamLimits

0xa93e,	// (0x0002127f) popup_toobar_trans_pane_cp01

0xaeea,	// (0x0002182b) popup_image_details_window_ParamLimits

0xaeea,	// (0x0002182b) popup_image_details_window

0x2e17,	// (0x00019758) popup_image_focus_window

0x72c0,	// (0x0001dc01) camera2_autofocus_pane_ParamLimits

0x72c0,	// (0x0001dc01) camera2_autofocus_pane

0x03c2,	// (0x00016d03) bg_popup_sub_pane_cp06

0x342f,	// (0x00019d70) popup_image_focus_window_g1

0x3437,	// (0x00019d78) popup_image_focus_window_g2

0x343f,	// (0x00019d80) popup_image_focus_window_g3

0x3447,	// (0x00019d88) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00026062) popup_image_focus_window_g

0x344f,	// (0x00019d90) popup_image_focus_window_t1

0x345d,	// (0x00019d9e) popup_image_focus_window_t2

0x346d,	// (0x00019dae) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0002606b) popup_image_focus_window_t

0x347b,	// (0x00019dbc) camera2_autofocus_pane_g1

0x0432,	// (0x00016d73) bg_tb_trans_pane_cp01

0x3489,	// (0x00019dca) popup_image_details_window_g1

0x349c,	// (0x00019ddd) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0002607d) popup_image_details_window_g

0x34c5,	// (0x00019e06) popup_image_details_window_t1

0x34d7,	// (0x00019e18) popup_image_details_window_t2

0x34f0,	// (0x00019e31) popup_image_details_window_t3

0x3504,	// (0x00019e45) popup_image_details_window_t4

0x351f,	// (0x00019e60) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00026084) popup_image_details_window_t

0x0b79,	// (0x000174ba) bg_calc_paper_pane_ParamLimits

0x6ee8,	// (0x0001d829) grid_highlight_pane_cp013

0x6ef2,	// (0x0001d833) list_calc_pane_ParamLimits

0x6f04,	// (0x0001d845) scroll_pane_cp024

0x0ba7,	// (0x000174e8) bg_calc_display_pane_ParamLimits

0x6f0c,	// (0x0001d84d) calc_display_pane_t1_ParamLimits

0x6f21,	// (0x0001d862) calc_display_pane_t2_ParamLimits

0x6f36,	// (0x0001d877) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00025ab4) calc_display_pane_t_ParamLimits

0x6f9f,	// (0x0001d8e0) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00025ad1) cell_calc_pane_g

0x6fa8,	// (0x0001d8e9) cell_calc_pane_t1

0x0c2a,	// (0x0001756b) grid_highlight_pane_cp02_ParamLimits

0x0c40,	// (0x00017581) toolbar_button_pane_cp01_ParamLimits

0x0c40,	// (0x00017581) toolbar_button_pane_cp01

0x1cd3,	// (0x00018614) temp_image_control_pane_ParamLimits

0x1cd3,	// (0x00018614) temp_image_control_pane

0x0432,	// (0x00016d73) main_mp3_pane

0x3539,	// (0x00019e7a) temp_image_control_pane_g1_ParamLimits

0x3539,	// (0x00019e7a) temp_image_control_pane_g1

0x3547,	// (0x00019e88) temp_image_control_pane_g2_ParamLimits

0x3547,	// (0x00019e88) temp_image_control_pane_g2

0x3559,	// (0x00019e9a) temp_image_control_pane_g3_ParamLimits

0x3559,	// (0x00019e9a) temp_image_control_pane_g3

0xb56d,	// (0x00021eae) temp_image_control_pane_g4_ParamLimits

0xb56d,	// (0x00021eae) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0002608f) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0002608f) temp_image_control_pane_g

0x3539,	// (0x00019e7a) main_mp3_pane_g1

0xb57e,	// (0x00021ebf) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00026098) main_mp3_pane_g

0x359c,	// (0x00019edd) main_mp3_pane_t1

0x0e22,	// (0x00017763) main_camera_pane_g8_ParamLimits

0x0e22,	// (0x00017763) main_camera_pane_g8

0x8ddf,	// (0x0001f720) main_video_pane_g7_ParamLimits

0x8ddf,	// (0x0001f720) main_video_pane_g7

0x7408,	// (0x0001dd49) main_camera2_pane_t7_ParamLimits

0x7408,	// (0x0001dd49) main_camera2_pane_t7

0x1008,	// (0x00017949) scroll_pane_cp025_ParamLimits

0x1008,	// (0x00017949) scroll_pane_cp025

0x101c,	// (0x0001795d) scroll_pane_cp026_ParamLimits

0x101c,	// (0x0001795d) scroll_pane_cp026

0x102b,	// (0x0001796c) wml_content_pane_ParamLimits

0x03c2,	// (0x00016d03) main_touch_calib_pane

0xb622,	// (0x00021f63) main_touch_calib_pane_g1

0xb62e,	// (0x00021f6f) main_touch_calib_pane_g2

0xb63a,	// (0x00021f7b) main_touch_calib_pane_g3

0xb646,	// (0x00021f87) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x000260b6) main_touch_calib_pane_g

0xb652,	// (0x00021f93) main_touch_calib_pane_t1

0xb669,	// (0x00021faa) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x000260bf) main_touch_calib_pane_t

0x187b,	// (0x000181bc) mup_progress_pane_cp02

0x189a,	// (0x000181db) navi_pane_g1

0x18fc,	// (0x0001823d) navi_pane_mp_t3

0x0432,	// (0x00016d73) main_mp3_pane_ParamLimits

0xafab,	// (0x000218ec) navi_pane_ParamLimits

0x3539,	// (0x00019e7a) main_mp3_pane_g1_ParamLimits

0xb57e,	// (0x00021ebf) main_mp3_pane_g2_ParamLimits

0xb58a,	// (0x00021ecb) main_mp3_pane_g3_ParamLimits

0xb58a,	// (0x00021ecb) main_mp3_pane_g3

0xb596,	// (0x00021ed7) main_mp3_pane_g4_ParamLimits

0xb596,	// (0x00021ed7) main_mp3_pane_g4

0x3569,	// (0x00019eaa) main_mp3_pane_g5_ParamLimits

0x3569,	// (0x00019eaa) main_mp3_pane_g5

0x3577,	// (0x00019eb8) main_mp3_pane_g6_ParamLimits

0x3577,	// (0x00019eb8) main_mp3_pane_g6

0x3584,	// (0x00019ec5) main_mp3_pane_g7_ParamLimits

0x3584,	// (0x00019ec5) main_mp3_pane_g7

0x3590,	// (0x00019ed1) main_mp3_pane_g8_ParamLimits

0x3590,	// (0x00019ed1) main_mp3_pane_g8

0xf757,	// (0x00026098) main_mp3_pane_g_ParamLimits

0xb5a2,	// (0x00021ee3) main_mp3_pane_t2

0xb5b2,	// (0x00021ef3) main_mp3_pane_t3

0x35aa,	// (0x00019eeb) main_mp3_pane_t4

0x35b8,	// (0x00019ef9) main_mp3_pane_t5

0x0005,

0xf768,	// (0x000260a9) main_mp3_pane_t

0x35c6,	// (0x00019f07) mup_progress_pane_cp01

0x03e0,	// (0x00016d21) aid_zoom_text_secondary2

0x3380,	// (0x00019cc1) list_cale_ev2_pane

0x3388,	// (0x00019cc9) scroll_pane_cp023_ParamLimits

0xb6be,	// (0x00021fff) field_cale_ev2_pane_ParamLimits

0xb6be,	// (0x00021fff) field_cale_ev2_pane

0xb6e7,	// (0x00022028) field_cale_ev2_pane_g1_ParamLimits

0xb6e7,	// (0x00022028) field_cale_ev2_pane_g1

0xb6f3,	// (0x00022034) field_cale_ev2_pane_g2_ParamLimits

0xb6f3,	// (0x00022034) field_cale_ev2_pane_g2

0xb70b,	// (0x0002204c) field_cale_ev2_pane_g3_ParamLimits

0xb70b,	// (0x0002204c) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x000260ca) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x000260ca) field_cale_ev2_pane_g

0xb723,	// (0x00022064) field_cale_ev2_pane_t1_ParamLimits

0xb723,	// (0x00022064) field_cale_ev2_pane_t1

0xb73a,	// (0x0002207b) field_cale_ev2_pane_t2_ParamLimits

0xb73a,	// (0x0002207b) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x000260d3) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x000260d3) field_cale_ev2_pane_t

0xa7c6,	// (0x00021107) main_postcard_pane_g5_ParamLimits

0xa7c6,	// (0x00021107) main_postcard_pane_g5

0xa7d4,	// (0x00021115) main_postcard_pane_g6_ParamLimits

0xa7d4,	// (0x00021115) main_postcard_pane_g6

0x8c27,	// (0x0001f568) camera2_autofocus_pane_cp_ParamLimits

0x8c27,	// (0x0001f568) camera2_autofocus_pane_cp

0x0432,	// (0x00016d73) main_mup3_pane

0xb76f,	// (0x000220b0) main_mup3_pane_g1_ParamLimits

0xb76f,	// (0x000220b0) main_mup3_pane_g1

0xb790,	// (0x000220d1) main_mup3_pane_g2_ParamLimits

0xb790,	// (0x000220d1) main_mup3_pane_g2

0xb808,	// (0x00022149) main_mup3_pane_g3_ParamLimits

0xb808,	// (0x00022149) main_mup3_pane_g3

0xb847,	// (0x00022188) main_mup3_pane_g4_ParamLimits

0xb847,	// (0x00022188) main_mup3_pane_g4

0xb886,	// (0x000221c7) main_mup3_pane_g5_ParamLimits

0xb886,	// (0x000221c7) main_mup3_pane_g5

0xb8c5,	// (0x00022206) main_mup3_pane_g6_ParamLimits

0xb8c5,	// (0x00022206) main_mup3_pane_g6

0x35da,	// (0x00019f1b) main_mup3_pane_g7_ParamLimits

0x35da,	// (0x00019f1b) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x000260e3) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x000260e3) main_mup3_pane_g

0xb937,	// (0x00022278) main_mup3_pane_t1_ParamLimits

0xb937,	// (0x00022278) main_mup3_pane_t1

0xb9a2,	// (0x000222e3) main_mup3_pane_t2_ParamLimits

0xb9a2,	// (0x000222e3) main_mup3_pane_t2

0xba67,	// (0x000223a8) main_mup3_pane_t4_ParamLimits

0xba67,	// (0x000223a8) main_mup3_pane_t4

0xbab5,	// (0x000223f6) main_mup3_pane_t5_ParamLimits

0xbab5,	// (0x000223f6) main_mup3_pane_t5

0xbb5d,	// (0x0002249e) main_mup3_pane_t6_ParamLimits

0xbb5d,	// (0x0002249e) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x000260f4) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x000260f4) main_mup3_pane_t

0xbc05,	// (0x00022546) mup3_progress_pane_ParamLimits

0xbc05,	// (0x00022546) mup3_progress_pane

0xbc70,	// (0x000225b1) popup_mup3_control_window_ParamLimits

0xbc70,	// (0x000225b1) popup_mup3_control_window

0x35e8,	// (0x00019f29) popup_mup3_text_window

0xbc89,	// (0x000225ca) mup3_progress_pane_t1

0xbca0,	// (0x000225e1) mup3_progress_pane_t2

0x35f0,	// (0x00019f31) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00026101) mup3_progress_pane_t

0x3607,	// (0x00019f48) mup_progress_pane_cp03

0x03c2,	// (0x00016d03) bg_tb_trans_pane_cp04

0xbcb7,	// (0x000225f8) mup3_volume_pane

0xbcbf,	// (0x00022600) popup_mup3_control_window_g1

0xbcc8,	// (0x00022609) mup3_volume_pane_g1

0xbcd1,	// (0x00022612) mup3_volume_pane_g2

0xbcda,	// (0x0002261b) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00026108) mup3_volume_pane_g

0x03c2,	// (0x00016d03) bg_tb_trans_pane_cp03

0x3617,	// (0x00019f58) popup_mup3_text_window_g1

0x361f,	// (0x00019f60) popup_mup3_text_window_t1

0x0c01,	// (0x00017542) list_calc_item_pane_g1_ParamLimits

0x300c,	// (0x0001994d) mup_volume_pane_cp_g1

0xb680,	// (0x00021fc1) main_touch_calib_pane_t3

0xb694,	// (0x00021fd5) main_touch_calib_pane_t4

0xb6a8,	// (0x00021fe9) main_touch_calib_pane_t5

0x03cc,	// (0x00016d0d) aid_cell_size_toolbar2

0x03d4,	// (0x00016d15) aid_popup3_width_pane

0x03e0,	// (0x00016d21) aid_zoom_text_msg_primary

0x7153,	// (0x0001da94) vorec_t7

0x0bc5,	// (0x00017506) bg_calc_paper_pane_g1_ParamLimits

0x0bdd,	// (0x0001751e) bg_calc_paper_pane_g2_ParamLimits

0x0bd1,	// (0x00017512) bg_calc_paper_pane_g3_ParamLimits

0x0bf5,	// (0x00017536) bg_calc_paper_pane_g4_ParamLimits

0x0be9,	// (0x0001752a) bg_calc_paper_pane_g5_ParamLimits

0x87a7,	// (0x0001f0e8) bg_calc_paper_pane_g6_ParamLimits

0x87b8,	// (0x0001f0f9) bg_calc_paper_pane_g7_ParamLimits

0x87c9,	// (0x0001f10a) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00025abb) bg_calc_paper_pane_g_ParamLimits

0x87da,	// (0x0001f11b) calc_bg_paper_pane_g9_ParamLimits

0x8d0e,	// (0x0001f64f) image_qvga_pane_ParamLimits

0x8d0e,	// (0x0001f64f) image_qvga_pane

0x0aae,	// (0x000173ef) bg_popup_sub_pane_cp04_ParamLimits

0x1c0a,	// (0x0001854b) popup_mup_playback_window_g1_ParamLimits

0x1c16,	// (0x00018557) popup_mup_playback_window_t1_ParamLimits

0x1c2b,	// (0x0001856c) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00025e47) popup_mup_playback_window_t_ParamLimits

0xb1f7,	// (0x00021b38) main_mup2_pane_g3_ParamLimits

0xb1f7,	// (0x00021b38) main_mup2_pane_g3

0x901d,	// (0x0001f95e) popup_toolbar_window_cp04

0x200d,	// (0x0001894e) popup_call2_audio_second_window_g3_ParamLimits

0x200d,	// (0x0001894e) popup_call2_audio_second_window_g3

0x2417,	// (0x00018d58) popup_call2_audio_first_window_g4_ParamLimits

0x2417,	// (0x00018d58) popup_call2_audio_first_window_g4

0x2a96,	// (0x000193d7) popup_call2_audio_in_window_g4_ParamLimits

0x2a96,	// (0x000193d7) popup_call2_audio_in_window_g4

0xa8d9,	// (0x0002121a) aid_area_sk_bg_cut_ParamLimits

0xa8d9,	// (0x0002121a) aid_area_sk_bg_cut

0x1c40,	// (0x00018581) aid_area_sk_bg_cut_2_ParamLimits

0x1c40,	// (0x00018581) aid_area_sk_bg_cut_2

0xb513,	// (0x00021e54) aid_placing_details_win

0xb51b,	// (0x00021e5c) aid_placing_details_win_2

0x347b,	// (0x00019dbc) camera2_autofocus_pane_g1_ParamLimits

0x8499,	// (0x0001edda) popup_fixed_preview_cale_window_ParamLimits

0x8499,	// (0x0001edda) popup_fixed_preview_cale_window

0x1966,	// (0x000182a7) navi_slider_pane_g3

0x195d,	// (0x0001829e) navi_slider_pane_g4

0x1954,	// (0x00018295) navi_slider_pane_g5

0x1966,	// (0x000182a7) navi_slider_pane_g6

0x722f,	// (0x0001db70) navi_slider_pane_g7

0x1a90,	// (0x000183d1) mup_scale_pane_g3

0x1a99,	// (0x000183da) mup_scale_pane_g4

0x1aa2,	// (0x000183e3) mup_scale_pane_g5

0xa652,	// (0x00020f93) mup_scale_pane_g6

0xa65b,	// (0x00020f9c) mup_scale_pane_g7

0x1966,	// (0x000182a7) cams2_slider_pane_g3

0x30c1,	// (0x00019a02) cams2_slider_pane_g4

0x757a,	// (0x0001debb) cams2_slider_pane_g5

0x1966,	// (0x000182a7) cams2_slider_pane_g6

0x7582,	// (0x0001dec3) cams2_slider_pane_g7

0x32fd,	// (0x00019c3e) camera2_autofocus_pane_cp_g1

0x362d,	// (0x00019f6e) bg_popup_preview_window_pane_cp02_ParamLimits

0x362d,	// (0x00019f6e) bg_popup_preview_window_pane_cp02

0x3639,	// (0x00019f7a) list_fp_cale_pane_ParamLimits

0x3639,	// (0x00019f7a) list_fp_cale_pane

0x3645,	// (0x00019f86) popup_fixed_preview_cale_window_t1_ParamLimits

0x3645,	// (0x00019f86) popup_fixed_preview_cale_window_t1

0xbce3,	// (0x00022624) popup_fixed_preview_cale_window_t2_ParamLimits

0xbce3,	// (0x00022624) popup_fixed_preview_cale_window_t2

0xbcf8,	// (0x00022639) popup_fixed_preview_cale_window_t3_ParamLimits

0xbcf8,	// (0x00022639) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0002610f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0002610f) popup_fixed_preview_cale_window_t

0xbd0d,	// (0x0002264e) list_single_fp_cale_pane_ParamLimits

0xbd0d,	// (0x0002264e) list_single_fp_cale_pane

0x3663,	// (0x00019fa4) list_single_fp_cale_pane_g1_ParamLimits

0x3663,	// (0x00019fa4) list_single_fp_cale_pane_g1

0x366f,	// (0x00019fb0) list_single_fp_cale_pane_g2_ParamLimits

0x366f,	// (0x00019fb0) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x00026116) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x00026116) list_single_fp_cale_pane_g

0x3688,	// (0x00019fc9) list_single_fp_cale_pane_t1_ParamLimits

0x3688,	// (0x00019fc9) list_single_fp_cale_pane_t1

0x369a,	// (0x00019fdb) list_single_fp_cale_pane_t2_ParamLimits

0x369a,	// (0x00019fdb) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0002611d) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0002611d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x03c2,	// (0x00016d03) main_dialer_pane

0xbd1f,	// (0x00022660) aid_cell_size_keypad

0xbd29,	// (0x0002266a) dialer_ne_pane

0xbd33,	// (0x00022674) grid_dialer_command_1_pane

0xbd3b,	// (0x0002267c) grid_dialer_command_2_pane

0xbd43,	// (0x00022684) grid_dialer_keypad_pane

0xbd55,	// (0x00022696) bg_popup_call_pane_cp06_ParamLimits

0xbd55,	// (0x00022696) bg_popup_call_pane_cp06

0xbd61,	// (0x000226a2) dialer_ne_clear_pane_ParamLimits

0xbd61,	// (0x000226a2) dialer_ne_clear_pane

0x36cd,	// (0x0001a00e) dialer_ne_pane_g1

0x36d5,	// (0x0001a016) dialer_ne_pane_t1_ParamLimits

0x36d5,	// (0x0001a016) dialer_ne_pane_t1

0xbd6d,	// (0x000226ae) dialer_ne_pane_t2_ParamLimits

0xbd6d,	// (0x000226ae) dialer_ne_pane_t2

0xbd8a,	// (0x000226cb) dialer_ne_pane_t3_ParamLimits

0xbd8a,	// (0x000226cb) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00026122) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00026122) dialer_ne_pane_t

0xbdae,	// (0x000226ef) dialer_ne_pane_t3_copy1_ParamLimits

0xbdae,	// (0x000226ef) dialer_ne_pane_t3_copy1

0xbdd2,	// (0x00022713) cell_dialer_keypad_pane_ParamLimits

0xbdd2,	// (0x00022713) cell_dialer_keypad_pane

0xbde9,	// (0x0002272a) cell_dialer_command_1_pane_ParamLimits

0xbde9,	// (0x0002272a) cell_dialer_command_1_pane

0xbdff,	// (0x00022740) cell_dialer_command_2_pane_ParamLimits

0xbdff,	// (0x00022740) cell_dialer_command_2_pane

0x36e7,	// (0x0001a028) bg_button_pane_cp02_ParamLimits

0x36e7,	// (0x0001a028) bg_button_pane_cp02

0xbe0e,	// (0x0002274f) cell_dialer_keypad_pane_g1_ParamLimits

0xbe0e,	// (0x0002274f) cell_dialer_keypad_pane_g1

0x36e7,	// (0x0001a028) bg_button_pane_cp03_ParamLimits

0x36e7,	// (0x0001a028) bg_button_pane_cp03

0xbe23,	// (0x00022764) cell_dialer_command_1_pane_g1_ParamLimits

0xbe23,	// (0x00022764) cell_dialer_command_1_pane_g1

0x36f3,	// (0x0001a034) bg_button_pane_cp04

0xbe37,	// (0x00022778) cell_dialer_command_2_pane_g1

0x193a,	// (0x0001827b) bg_button_pane_cp06

0x36fb,	// (0x0001a03c) dialer_ne_clear_pane_g1

0xa166,	// (0x00020aa7) navi_pane_g2

0xa194,	// (0x00020ad5) navi_pane_g3

0x0002,

0xf409,	// (0x00025d4a) navi_pane_g

0xa1bf,	// (0x00020b00) navi_pane_mv_g2

0xa1e6,	// (0x00020b27) navi_pane_mv_g5

0xa1ee,	// (0x00020b2f) navi_pane_mv_t1

0x0ba7,	// (0x000174e8) main_clock2_pane

0xbe66,	// (0x000227a7) main_clock2_list_pane_ParamLimits

0xbe66,	// (0x000227a7) main_clock2_list_pane

0xbe8e,	// (0x000227cf) main_clock2_pane_t1_ParamLimits

0xbe8e,	// (0x000227cf) main_clock2_pane_t1

0xbebc,	// (0x000227fd) main_clock2_pane_t2_ParamLimits

0xbebc,	// (0x000227fd) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00026129) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00026129) main_clock2_pane_t

0xbf23,	// (0x00022864) popup_clock_analogue_window_cp03_ParamLimits

0xbf23,	// (0x00022864) popup_clock_analogue_window_cp03

0xbf41,	// (0x00022882) popup_clock_digital_window_cp02_ParamLimits

0xbf41,	// (0x00022882) popup_clock_digital_window_cp02

0xbfae,	// (0x000228ef) main_clock2_list_single_pane_ParamLimits

0xbfae,	// (0x000228ef) main_clock2_list_single_pane

0x193a,	// (0x0001827b) list_highlight_pane_cp05

0x3703,	// (0x0001a044) main_clock2_list_single_pane_t1

0x901d,	// (0x0001f95e) popup_toolbar_window_cp04_ParamLimits

0xb53d,	// (0x00021e7e) camera2_autofocus_pane_g2_ParamLimits

0xb53d,	// (0x00021e7e) camera2_autofocus_pane_g2

0xb549,	// (0x00021e8a) camera2_autofocus_pane_g3_ParamLimits

0xb549,	// (0x00021e8a) camera2_autofocus_pane_g3

0xb555,	// (0x00021e96) camera2_autofocus_pane_g4_ParamLimits

0xb555,	// (0x00021e96) camera2_autofocus_pane_g4

0xb561,	// (0x00021ea2) camera2_autofocus_pane_g5_ParamLimits

0xb561,	// (0x00021ea2) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00026072) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00026072) camera2_autofocus_pane_g

0xb74f,	// (0x00022090) camera2_autofocus_pane_cp_g2

0xb757,	// (0x00022098) camera2_autofocus_pane_cp_g3

0xb75f,	// (0x000220a0) camera2_autofocus_pane_cp_g4

0xb767,	// (0x000220a8) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x000260d8) camera2_autofocus_pane_cp_g

0xbd4d,	// (0x0002268e) popup_dialer_spcha_window

0x03c2,	// (0x00016d03) bg_popup_sub_pane_cp07

0x3711,	// (0x0001a052) list_spcha_pane

0x3719,	// (0x0001a05a) list_single_spcha_pane_ParamLimits

0x3719,	// (0x0001a05a) list_single_spcha_pane

0x03c2,	// (0x00016d03) list_highlight_pane_cp06

0x372a,	// (0x0001a06b) list_single_spcha_pane_t1

0x2840,	// (0x00019181) popup_call2_audio_out_window_g4_ParamLimits

0x2840,	// (0x00019181) popup_call2_audio_out_window_g4

0x03c2,	// (0x00016d03) main_imed2_pane

0x2e1f,	// (0x00019760) popup_imed_adjust2_window

0xaef8,	// (0x00021839) popup_imed_trans_window_ParamLimits

0xaef8,	// (0x00021839) popup_imed_trans_window

0x313b,	// (0x00019a7c) popup_blid_sat_info2_window_t1

0x3149,	// (0x00019a8a) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00026007) popup_blid_sat_info2_window_t

0xbfe0,	// (0x00022921) aid_size_cell_colour_35

0xbffa,	// (0x0002293b) aid_size_cell_colour_112

0xc011,	// (0x00022952) aid_size_cell_effect

0x0432,	// (0x00016d73) bg_tb_trans_pane_cp02

0x143c,	// (0x00017d7d) heading_imed_pane

0xc02b,	// (0x0002296c) listscroll_imed_pane

0x3738,	// (0x0001a079) heading_imed_pane_g1

0x3740,	// (0x0001a081) heading_imed_pane_t1

0x374e,	// (0x0001a08f) grid_imed_colour_35_pane_ParamLimits

0x374e,	// (0x0001a08f) grid_imed_colour_35_pane

0xc037,	// (0x00022978) grid_imed_effect_pane

0x3765,	// (0x0001a0a6) list_imed_aspect_pane

0xc047,	// (0x00022988) scroll_pane_cp027_ParamLimits

0xc047,	// (0x00022988) scroll_pane_cp027

0xc053,	// (0x00022994) cell_imed_effect_pane_ParamLimits

0xc053,	// (0x00022994) cell_imed_effect_pane

0x376d,	// (0x0001a0ae) cell_imed_colour_pane_ParamLimits

0x376d,	// (0x0001a0ae) cell_imed_colour_pane

0x37af,	// (0x0001a0f0) cell_imed_colour_pane_g1_ParamLimits

0x37af,	// (0x0001a0f0) cell_imed_colour_pane_g1

0x37c0,	// (0x0001a101) hgihlgiht_grid_pane_cp016_ParamLimits

0x37c0,	// (0x0001a101) hgihlgiht_grid_pane_cp016

0xc06b,	// (0x000229ac) cell_imed_effect_pane_g1

0xc073,	// (0x000229b4) grid_highlight_pane_cp017

0x37d1,	// (0x0001a112) list_imed_single_pane_ParamLimits

0x37d1,	// (0x0001a112) list_imed_single_pane

0x03c2,	// (0x00016d03) list_highlight_pane_cp07

0x37e6,	// (0x0001a127) list_imed_aspect_pane_comp1_t1

0x2df7,	// (0x00019738) bg_tb_trans_pane_cp05

0x3808,	// (0x0001a149) popup_imed_adjust2_window_g1

0x382f,	// (0x0001a170) popup_imed_adjust2_window_t1

0x3847,	// (0x0001a188) slider_imed_adjust_pane

0x385b,	// (0x0001a19c) slider_imed_adjust_pane_g1

0x386b,	// (0x0001a1ac) slider_imed_adjust_pane_g2

0x387b,	// (0x0001a1bc) slider_imed_adjust_pane_g3

0x388c,	// (0x0001a1cd) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x00026146) slider_imed_adjust_pane_g

0xc07c,	// (0x000229bd) aid_size_cell_clipart2

0xc088,	// (0x000229c9) grid_imed_clipart_pane

0x389d,	// (0x0001a1de) scroll_pane_cp031

0xc092,	// (0x000229d3) cell_imed_clipart_pane_ParamLimits

0xc092,	// (0x000229d3) cell_imed_clipart_pane

0xc0b4,	// (0x000229f5) cell_imed_clipart_pane_g1

0x03c2,	// (0x00016d03) grid_highlight_pane_cp014

0xbe72,	// (0x000227b3) main_clock2_pane_g1_ParamLimits

0xbe72,	// (0x000227b3) main_clock2_pane_g1

0xbf59,	// (0x0002289a) aid_call2_pane_cp10

0xbf6b,	// (0x000228ac) aid_call_pane_cp10

0x186f,	// (0x000181b0) popup_clock_analogue_window_cp10_g1

0x186f,	// (0x000181b0) popup_clock_analogue_window_cp10_g2

0xbf7d,	// (0x000228be) popup_clock_analogue_window_cp10_g3

0xbf7d,	// (0x000228be) popup_clock_analogue_window_cp10_g4

0x186f,	// (0x000181b0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00026134) popup_clock_analogue_window_cp10_g

0xbf8f,	// (0x000228d0) popup_clock_analogue_window_cp10_t1

0x758b,	// (0x0001decc) clock_digital_number_pane_cp10_ParamLimits

0x758b,	// (0x0001decc) clock_digital_number_pane_cp10

0x75a3,	// (0x0001dee4) clock_digital_number_pane_cp11_ParamLimits

0x75a3,	// (0x0001dee4) clock_digital_number_pane_cp11

0x75bb,	// (0x0001defc) clock_digital_number_pane_cp12_ParamLimits

0x75bb,	// (0x0001defc) clock_digital_number_pane_cp12

0x75d3,	// (0x0001df14) clock_digital_number_pane_cp13_ParamLimits

0x75d3,	// (0x0001df14) clock_digital_number_pane_cp13

0x75eb,	// (0x0001df2c) clock_digital_separator_pane_cp10_ParamLimits

0x75eb,	// (0x0001df2c) clock_digital_separator_pane_cp10

0xbfc0,	// (0x00022901) popup_clock_digital_window_cp02_t1_ParamLimits

0xbfc0,	// (0x00022901) popup_clock_digital_window_cp02_t1

0x0aa6,	// (0x000173e7) clock_digital_number_pane_cp10_g1

0x0aa6,	// (0x000173e7) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0002614f) clock_digital_number_pane_cp10_g

0x0aa6,	// (0x000173e7) clock_digital_separator_pane_cp10_g1

0x0aa6,	// (0x000173e7) clock_digital_separator_pane_g2_cp10

0x190a,	// (0x0001824b) navi_pane_vded_g4

0x1913,	// (0x00018254) navi_pane_vded_g5

0x191c,	// (0x0001825d) navi_pane_vded_t1

0x03c2,	// (0x00016d03) main_vded_pane

0xc0bd,	// (0x000229fe) main_vded_pane_g1

0xc0c9,	// (0x00022a0a) main_vded_pane_g2

0xc0d3,	// (0x00022a14) main_vded_pane_g3

0x0002,

0xf813,	// (0x00026154) main_vded_pane_g

0xc0dd,	// (0x00022a1e) main_vded_pane_t1

0xc0eb,	// (0x00022a2c) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0002615b) main_vded_pane_t

0xc0f9,	// (0x00022a3a) vded_slider_pane

0xc103,	// (0x00022a44) vded_video_pane

0x38a5,	// (0x0001a1e6) vded_video_pane_g1

0xc10d,	// (0x00022a4e) vded_video_pane_g2

0x32fd,	// (0x00019c3e) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00026160) vded_video_pane_g

0x38af,	// (0x0001a1f0) vded_slider_pane_g1

0x300c,	// (0x0001994d) vded_slider_pane_g2

0x38b8,	// (0x0001a1f9) vded_slider_pane_g3

0x38c1,	// (0x0001a202) vded_slider_pane_g4

0x38ca,	// (0x0001a20b) vded_slider_pane_g5

0x0004,

0xf826,	// (0x00026167) vded_slider_pane_g

0xbc62,	// (0x000225a3) mup3_rocker_pane_ParamLimits

0xbc62,	// (0x000225a3) mup3_rocker_pane

0xc116,	// (0x00022a57) mup3_control_keys_pane_g1

0xc11e,	// (0x00022a5f) mup3_control_keys_pane_g2

0xc126,	// (0x00022a67) mup3_control_keys_pane_g3

0xc12e,	// (0x00022a6f) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00026172) mup3_control_keys_pane_g

0x84b7,	// (0x0001edf8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x84b7,	// (0x0001edf8) popup_toolbar2_fixed_window_cp01

0xbc7c,	// (0x000225bd) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbc7c,	// (0x000225bd) popup_toolbar2_fixed_window_cp02

0x217f,	// (0x00018ac0) popup_call2_audio_second_window_t4_ParamLimits

0x217f,	// (0x00018ac0) popup_call2_audio_second_window_t4

0x26ad,	// (0x00018fee) popup_call2_audio_first_window_t6_ParamLimits

0x26ad,	// (0x00018fee) popup_call2_audio_first_window_t6

0x2943,	// (0x00019284) popup_call2_audio_out_window_t6_ParamLimits

0x2943,	// (0x00019284) popup_call2_audio_out_window_t6

0x03c2,	// (0x00016d03) main_vitu_pane

0xc13e,	// (0x00022a7f) aid_size_cell_itu_ParamLimits

0xc13e,	// (0x00022a7f) aid_size_cell_itu

0x3ac2,	// (0x0001a403) bg_popup_window_pane_cp08_ParamLimits

0x3ac2,	// (0x0001a403) bg_popup_window_pane_cp08

0xc14c,	// (0x00022a8d) field_vitu_entry_pane_ParamLimits

0xc14c,	// (0x00022a8d) field_vitu_entry_pane

0xc15b,	// (0x00022a9c) grid_vitu_function_pane_ParamLimits

0xc15b,	// (0x00022a9c) grid_vitu_function_pane

0xc16b,	// (0x00022aac) grid_vitu_itu_pane_ParamLimits

0xc16b,	// (0x00022aac) grid_vitu_itu_pane

0xc17b,	// (0x00022abc) cell_vitu_itu_pane_ParamLimits

0xc17b,	// (0x00022abc) cell_vitu_itu_pane

0xc190,	// (0x00022ad1) cell_vitu_function_pane_ParamLimits

0xc190,	// (0x00022ad1) cell_vitu_function_pane

0x0432,	// (0x00016d73) bg_popup_sub_pane_cp08_ParamLimits

0x0432,	// (0x00016d73) bg_popup_sub_pane_cp08

0xc1a2,	// (0x00022ae3) field_vitu_entry_pane_t1_ParamLimits

0xc1a2,	// (0x00022ae3) field_vitu_entry_pane_t1

0x38eb,	// (0x0001a22c) field_vitu_entry_pane_t2_ParamLimits

0x38eb,	// (0x0001a22c) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00026180) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00026180) field_vitu_entry_pane_t

0x3908,	// (0x0001a249) bg_button_pane_cp05_ParamLimits

0x3908,	// (0x0001a249) bg_button_pane_cp05

0xc1bd,	// (0x00022afe) cell_vitu_itu_pane_g1

0xc1d5,	// (0x00022b16) cell_vitu_itu_pane_t1_ParamLimits

0xc1d5,	// (0x00022b16) cell_vitu_itu_pane_t1

0xc1e7,	// (0x00022b28) cell_vitu_itu_pane_t2_ParamLimits

0xc1e7,	// (0x00022b28) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00026185) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00026185) cell_vitu_itu_pane_t

0x3916,	// (0x0001a257) bg_button_pane_cp07

0xc21c,	// (0x00022b5d) cell_vitu_function_pane_g1

0x6ee0,	// (0x0001d821) main_calc_pane_g1

0x82c0,	// (0x0001ec01) aid_visual_content_pane

0x03c2,	// (0x00016d03) main_vradio_pane

0xc225,	// (0x00022b66) main_vradio_pane_g1_ParamLimits

0xc225,	// (0x00022b66) main_vradio_pane_g1

0x3920,	// (0x0001a261) main_vradio_pane_g2_ParamLimits

0x3920,	// (0x0001a261) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0002618c) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0002618c) main_vradio_pane_g

0xc235,	// (0x00022b76) main_vradio_pane_t1_ParamLimits

0xc235,	// (0x00022b76) main_vradio_pane_t1

0xc247,	// (0x00022b88) main_vradio_pane_t2_ParamLimits

0xc247,	// (0x00022b88) main_vradio_pane_t2

0x392d,	// (0x0001a26e) main_vradio_pane_t3_ParamLimits

0x392d,	// (0x0001a26e) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00026191) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00026191) main_vradio_pane_t

0xc259,	// (0x00022b9a) vradio_rocker_control_pane_ParamLimits

0xc259,	// (0x00022b9a) vradio_rocker_control_pane

0xc265,	// (0x00022ba6) vradio_station_info_pane_ParamLimits

0xc265,	// (0x00022ba6) vradio_station_info_pane

0x3941,	// (0x0001a282) vradio_frequency_info_pane_ParamLimits

0x3941,	// (0x0001a282) vradio_frequency_info_pane

0x32fd,	// (0x00019c3e) vradio_station_info_pane_g1

0x3950,	// (0x0001a291) vradio_station_info_pane_t1_ParamLimits

0x3950,	// (0x0001a291) vradio_station_info_pane_t1

0x3972,	// (0x0001a2b3) vradio_station_info_pane_t2_ParamLimits

0x3972,	// (0x0001a2b3) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00026198) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00026198) vradio_station_info_pane_t

0x3984,	// (0x0001a2c5) vradio_tuning_pane

0x398c,	// (0x0001a2cd) vradio_rocker_control_pane_g1

0x3994,	// (0x0001a2d5) vradio_rocker_control_pane_g2

0x399c,	// (0x0001a2dd) vradio_rocker_control_pane_g3

0x39a4,	// (0x0001a2e5) vradio_rocker_control_pane_g4

0x39ac,	// (0x0001a2ed) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0002619d) vradio_rocker_control_pane_g

0xc274,	// (0x00022bb5) vradio_frequency_info_pane_g1

0x39b4,	// (0x0001a2f5) vradio_frequency_info_pane_t1_ParamLimits

0x39b4,	// (0x0001a2f5) vradio_frequency_info_pane_t1

0xc27e,	// (0x00022bbf) vradio_tuning_pane_g1

0xc287,	// (0x00022bc8) vradio_tuning_pane_t1

0x03f0,	// (0x00016d31) area_side_right_pane_ParamLimits

0x03f0,	// (0x00016d31) area_side_right_pane

0x2dbe,	// (0x000196ff) status_small_pane_g1

0x2dc6,	// (0x00019707) status_small_pane_g2

0x2dcf,	// (0x00019710) status_small_pane_g3

0x2dd8,	// (0x00019719) status_small_pane_g4

0x0003,

0xf61c,	// (0x00025f5d) status_small_pane_g

0x2de1,	// (0x00019722) status_small_pane_t1

0x03c2,	// (0x00016d03) main_video3_pane

0x39c8,	// (0x0001a309) cams_zoom_vslider_pane

0x39d0,	// (0x0001a311) image3_wide_pane_ParamLimits

0x39d0,	// (0x0001a311) image3_wide_pane

0x39ea,	// (0x0001a32b) image3_wide_small_pane

0x39f6,	// (0x0001a337) main_video3_pane_g1_ParamLimits

0x39f6,	// (0x0001a337) main_video3_pane_g1

0x3a12,	// (0x0001a353) main_video3_pane_g2_ParamLimits

0x3a12,	// (0x0001a353) main_video3_pane_g2

0x0001,

0xf867,	// (0x000261a8) main_video3_pane_g_ParamLimits

0xf867,	// (0x000261a8) main_video3_pane_g

0x3a2e,	// (0x0001a36f) main_video3_pane_t1_ParamLimits

0x3a2e,	// (0x0001a36f) main_video3_pane_t1

0x3a59,	// (0x0001a39a) main_video3_pane_t2_ParamLimits

0x3a59,	// (0x0001a39a) main_video3_pane_t2

0x3a84,	// (0x0001a3c5) main_video3_pane_t3_ParamLimits

0x3a84,	// (0x0001a3c5) main_video3_pane_t3

0x0002,

0xf86c,	// (0x000261ad) main_video3_pane_t_ParamLimits

0xf86c,	// (0x000261ad) main_video3_pane_t

0x3ab1,	// (0x0001a3f2) cams_zoom_vslider_pane_g1

0x3aba,	// (0x0001a3fb) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x000261b4) cams_zoom_vslider_pane_g

0x3ad0,	// (0x0001a411) small_slider_vertical_pane

0x32fd,	// (0x00019c3e) small_slider_vertical_pane_g1

0x32fd,	// (0x00019c3e) small_slider_vertical_pane_g2

0x3ad8,	// (0x0001a419) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x000261b9) small_slider_vertical_pane_g

0x03c2,	// (0x00016d03) main_hwr_training_pane

0x3ae1,	// (0x0001a422) hwr_training_instruct_pane_ParamLimits

0x3ae1,	// (0x0001a422) hwr_training_instruct_pane

0xc296,	// (0x00022bd7) hwr_training_navi_pane_ParamLimits

0xc296,	// (0x00022bd7) hwr_training_navi_pane

0xc2b0,	// (0x00022bf1) hwr_training_write_pane_ParamLimits

0xc2b0,	// (0x00022bf1) hwr_training_write_pane

0x03c2,	// (0x00016d03) bg_frame_shadow_pane

0x3b18,	// (0x0001a459) hwr_training_write_pane_g1

0x3b20,	// (0x0001a461) hwr_training_write_pane_g2

0x3b28,	// (0x0001a469) hwr_training_write_pane_g3

0x3b30,	// (0x0001a471) hwr_training_write_pane_g4

0x3b38,	// (0x0001a479) hwr_training_write_pane_g5

0x3b40,	// (0x0001a481) hwr_training_write_pane_g6

0x3b48,	// (0x0001a489) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x000261c0) hwr_training_write_pane_g

0x7603,	// (0x0001df44) hwr_training_navi_pane_g1_ParamLimits

0x7603,	// (0x0001df44) hwr_training_navi_pane_g1

0x7615,	// (0x0001df56) hwr_training_navi_pane_g2_ParamLimits

0x7615,	// (0x0001df56) hwr_training_navi_pane_g2

0x7627,	// (0x0001df68) hwr_training_navi_pane_g3_ParamLimits

0x7627,	// (0x0001df68) hwr_training_navi_pane_g3

0x7637,	// (0x0001df78) hwr_training_navi_pane_g4_ParamLimits

0x7637,	// (0x0001df78) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x000261cf) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x000261cf) hwr_training_navi_pane_g

0x7651,	// (0x0001df92) hwr_training_navi_pane_t1

0xc2e8,	// (0x00022c29) list_single_hwr_training_instruct_pane_ParamLimits

0xc2e8,	// (0x00022c29) list_single_hwr_training_instruct_pane

0x3b9f,	// (0x0001a4e0) list_single_hwr_training_instruct_pane_t1

0x323d,	// (0x00019b7e) bg_frame_shadow_pane_g1

0x3bae,	// (0x0001a4ef) bg_frame_shadow_pane_g2

0x3bb6,	// (0x0001a4f7) bg_frame_shadow_pane_g3

0x3bbe,	// (0x0001a4ff) bg_frame_shadow_pane_g4

0x3bc6,	// (0x0001a507) bg_frame_shadow_pane_g5

0x3bce,	// (0x0001a50f) bg_frame_shadow_pane_g6

0x3bd6,	// (0x0001a517) bg_frame_shadow_pane_g7

0x0c84,	// (0x000175c5) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x000261da) bg_frame_shadow_pane_g

0x03c2,	// (0x00016d03) main_video_tele_dialer_pane

0x765f,	// (0x0001dfa0) aid_size_cell_video_keypad_ParamLimits

0x765f,	// (0x0001dfa0) aid_size_cell_video_keypad

0x766f,	// (0x0001dfb0) grid_video_dialer_keypad_pane_ParamLimits

0x766f,	// (0x0001dfb0) grid_video_dialer_keypad_pane

0x767d,	// (0x0001dfbe) video_down_pane_cp_ParamLimits

0x767d,	// (0x0001dfbe) video_down_pane_cp

0x7689,	// (0x0001dfca) cell_video_dialer_keypad_pane_ParamLimits

0x7689,	// (0x0001dfca) cell_video_dialer_keypad_pane

0x3bfa,	// (0x0001a53b) bg_button_pane_cp08_ParamLimits

0x3bfa,	// (0x0001a53b) bg_button_pane_cp08

0xc331,	// (0x00022c72) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc331,	// (0x00022c72) cell_video_dialer_keypad_pane_g1

0xbc56,	// (0x00022597) mup3_rocker2_pane_ParamLimits

0xbc56,	// (0x00022597) mup3_rocker2_pane

0x32fd,	// (0x00019c3e) mup3_rocker2_pane_g1

0xae82,	// (0x000217c3) main_dialer2_pane

0x03c2,	// (0x00016d03) main_mp4_pane

0x76a6,	// (0x0001dfe7) main_mp4_pane_g1_ParamLimits

0x76a6,	// (0x0001dfe7) main_mp4_pane_g1

0x76b4,	// (0x0001dff5) main_mp4_pane_g2_ParamLimits

0x76b4,	// (0x0001dff5) main_mp4_pane_g2

0x76c2,	// (0x0001e003) main_mp4_pane_g3_ParamLimits

0x76c2,	// (0x0001e003) main_mp4_pane_g3

0x7707,	// (0x0001e048) main_mp4_pane_g4_ParamLimits

0x7707,	// (0x0001e048) main_mp4_pane_g4

0x772f,	// (0x0001e070) main_mp4_pane_g5_ParamLimits

0x772f,	// (0x0001e070) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x000261fa) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x000261fa) main_mp4_pane_g

0x777f,	// (0x0001e0c0) main_mp4_pane_t1_ParamLimits

0x777f,	// (0x0001e0c0) main_mp4_pane_t1

0x77db,	// (0x0001e11c) main_mp4_pane_t2_ParamLimits

0x77db,	// (0x0001e11c) main_mp4_pane_t2

0x3d42,	// (0x0001a683) main_mp4_pane_t3_ParamLimits

0x3d42,	// (0x0001a683) main_mp4_pane_t3

0x782d,	// (0x0001e16e) main_mp4_pane_t4_ParamLimits

0x782d,	// (0x0001e16e) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00026207) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00026207) main_mp4_pane_t

0x7871,	// (0x0001e1b2) mp4_progress_pane_ParamLimits

0x7871,	// (0x0001e1b2) mp4_progress_pane

0x78bb,	// (0x0001e1fc) mp4_rocker_pane_ParamLimits

0x78bb,	// (0x0001e1fc) mp4_rocker_pane

0x3e18,	// (0x0001a759) mp4_progress_pane_t1

0x3e31,	// (0x0001a772) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00026210) mp4_progress_pane_t

0x3e4a,	// (0x0001a78b) mup_progress_pane_cp04

0x4902,	// (0x0001b243) mp4_rocker_pane_g1

0x78db,	// (0x0001e21c) aid_cell_size_keypad2_ParamLimits

0x78db,	// (0x0001e21c) aid_cell_size_keypad2

0x78eb,	// (0x0001e22c) dialer2_ne_pane_ParamLimits

0x78eb,	// (0x0001e22c) dialer2_ne_pane

0x78f9,	// (0x0001e23a) grid_dialer2_keypad_pane_ParamLimits

0x78f9,	// (0x0001e23a) grid_dialer2_keypad_pane

0x496b,	// (0x0001b2ac) bg_popup_call_pane_cp07_ParamLimits

0x496b,	// (0x0001b2ac) bg_popup_call_pane_cp07

0xc36b,	// (0x00022cac) dialer2_ne_pane_t1_ParamLimits

0xc36b,	// (0x00022cac) dialer2_ne_pane_t1

0x7909,	// (0x0001e24a) cell_dialer2_keypad_pane_ParamLimits

0x7909,	// (0x0001e24a) cell_dialer2_keypad_pane

0x3e68,	// (0x0001a7a9) bg_button_pane_pane_cp04_ParamLimits

0x3e68,	// (0x0001a7a9) bg_button_pane_pane_cp04

0xc390,	// (0x00022cd1) cell_dialer2_keypad_pane_g1_ParamLimits

0xc390,	// (0x00022cd1) cell_dialer2_keypad_pane_g1

0x8ee1,	// (0x0001f822) aid_placing_vt_set_content_ParamLimits

0x8ee1,	// (0x0001f822) aid_placing_vt_set_content

0x8f0b,	// (0x0001f84c) aid_placing_vt_set_title_ParamLimits

0x8f0b,	// (0x0001f84c) aid_placing_vt_set_title

0x03c2,	// (0x00016d03) main_image3_pane

0x7950,	// (0x0001e291) area_side_right_pane_cp01_ParamLimits

0x7950,	// (0x0001e291) area_side_right_pane_cp01

0x797d,	// (0x0001e2be) main_image3_pane_g1_ParamLimits

0x797d,	// (0x0001e2be) main_image3_pane_g1

0x798b,	// (0x0001e2cc) main_image3_pane_g2_ParamLimits

0x798b,	// (0x0001e2cc) main_image3_pane_g2

0x79a4,	// (0x0001e2e5) main_image3_pane_g3_ParamLimits

0x79a4,	// (0x0001e2e5) main_image3_pane_g3

0x79bd,	// (0x0001e2fe) main_image3_pane_g4_ParamLimits

0x79bd,	// (0x0001e2fe) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0002621f) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0002621f) main_image3_pane_g

0x79d6,	// (0x0001e317) main_image3_pane_t1_ParamLimits

0x79d6,	// (0x0001e317) main_image3_pane_t1

0x79fb,	// (0x0001e33c) main_image3_pane_t2_ParamLimits

0x79fb,	// (0x0001e33c) main_image3_pane_t2

0x7a1a,	// (0x0001e35b) main_image3_pane_t3_ParamLimits

0x7a1a,	// (0x0001e35b) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00026228) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00026228) main_image3_pane_t

0x3ac2,	// (0x0001a403) grid_sctrl_middle_pane_cp01_ParamLimits

0x3ac2,	// (0x0001a403) grid_sctrl_middle_pane_cp01

0xc3f8,	// (0x00022d39) cell_sctrl_middle_pane_cp01_ParamLimits

0xc3f8,	// (0x00022d39) cell_sctrl_middle_pane_cp01

0xc409,	// (0x00022d4a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc409,	// (0x00022d4a) cell_sctrl_middle_pane_cp01_g1

0x03c2,	// (0x00016d03) main_call4_pane

0xc416,	// (0x00022d57) aid_size_button_call4_ParamLimits

0xc416,	// (0x00022d57) aid_size_button_call4

0xc446,	// (0x00022d87) call4_windows_pane_ParamLimits

0xc446,	// (0x00022d87) call4_windows_pane

0xc460,	// (0x00022da1) grid_call4_button_pane_ParamLimits

0xc460,	// (0x00022da1) grid_call4_button_pane

0x3ea6,	// (0x0001a7e7) call4_windows_conf_pane

0x3ebd,	// (0x0001a7fe) popup_call4_audio_first_window_ParamLimits

0x3ebd,	// (0x0001a7fe) popup_call4_audio_first_window

0x3f09,	// (0x0001a84a) popup_call4_audio_second_window_ParamLimits

0x3f09,	// (0x0001a84a) popup_call4_audio_second_window

0x3f1d,	// (0x0001a85e) popup_call4_audio_wait_window_ParamLimits

0x3f1d,	// (0x0001a85e) popup_call4_audio_wait_window

0xc484,	// (0x00022dc5) cell_call4_button_pane_ParamLimits

0xc484,	// (0x00022dc5) cell_call4_button_pane

0xc4a9,	// (0x00022dea) bg_button_pane_cp09_ParamLimits

0xc4a9,	// (0x00022dea) bg_button_pane_cp09

0xc4b5,	// (0x00022df6) cell_call4_button_pane_g1_ParamLimits

0xc4b5,	// (0x00022df6) cell_call4_button_pane_g1

0xc4c2,	// (0x00022e03) cell_call4_button_pane_t1_ParamLimits

0xc4c2,	// (0x00022e03) cell_call4_button_pane_t1

0x3f65,	// (0x0001a8a6) popup_call4_audio_conf_window_ParamLimits

0x3f65,	// (0x0001a8a6) popup_call4_audio_conf_window

0xbc89,	// (0x000225ca) mup3_progress_pane_t1_ParamLimits

0xbca0,	// (0x000225e1) mup3_progress_pane_t2_ParamLimits

0x35f0,	// (0x00019f31) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00026101) mup3_progress_pane_t_ParamLimits

0x3607,	// (0x00019f48) mup_progress_pane_cp03_ParamLimits

0xc136,	// (0x00022a77) mup3_control_keys_pane_g4_copy1

0x789f,	// (0x0001e1e0) mp4_rocker2_pane_ParamLimits

0x789f,	// (0x0001e1e0) mp4_rocker2_pane

0x3f81,	// (0x0001a8c2) mp4_rocker2_pane_g1

0x3f79,	// (0x0001a8ba) mp4_rocker2_pane_g2

0x7a7b,	// (0x0001e3bc) mp4_rocker2_pane_g3

0x7a83,	// (0x0001e3c4) mp4_rocker2_pane_g4

0x7a8b,	// (0x0001e3cc) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00026231) mp4_rocker2_pane_g

0x03c2,	// (0x00016d03) main_camera4_pane

0x03c2,	// (0x00016d03) main_video4_pane

0xc30d,	// (0x00022c4e) main_video_tele_dialer_pane_t1_ParamLimits

0xc30d,	// (0x00022c4e) main_video_tele_dialer_pane_t1

0xc31f,	// (0x00022c60) main_video_tele_dialer_pane_t2_ParamLimits

0xc31f,	// (0x00022c60) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x000261eb) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x000261eb) main_video_tele_dialer_pane_t

0x7aab,	// (0x0001e3ec) cam4_autofocus_pane_ParamLimits

0x7aab,	// (0x0001e3ec) cam4_autofocus_pane

0x7ac5,	// (0x0001e406) cam4_image_uncrop_pane_ParamLimits

0x7ac5,	// (0x0001e406) cam4_image_uncrop_pane

0x7adc,	// (0x0001e41d) cam4_indicators_pane_ParamLimits

0x7adc,	// (0x0001e41d) cam4_indicators_pane

0x7af8,	// (0x0001e439) main_camera4_pane_g1_ParamLimits

0x7af8,	// (0x0001e439) main_camera4_pane_g1

0x7b04,	// (0x0001e445) main_camera4_pane_g2_ParamLimits

0x7b04,	// (0x0001e445) main_camera4_pane_g2

0x7b04,	// (0x0001e445) main_camera4_pane_g3_ParamLimits

0x7b04,	// (0x0001e445) main_camera4_pane_g3

0x7b10,	// (0x0001e451) main_camera4_pane_g4_ParamLimits

0x7b10,	// (0x0001e451) main_camera4_pane_g4

0x7b1c,	// (0x0001e45d) main_camera4_pane_g5_ParamLimits

0x7b1c,	// (0x0001e45d) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0002623c) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0002623c) main_camera4_pane_g

0x7b36,	// (0x0001e477) main_camera4_pane_t1_ParamLimits

0x7b36,	// (0x0001e477) main_camera4_pane_t1

0x7b5a,	// (0x0001e49b) bg_tb_trans_pane_cp06

0x7b70,	// (0x0001e4b1) cam4_indicators_pane_g1

0x7b81,	// (0x0001e4c2) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x00026257) cam4_indicators_pane_g

0x7b9f,	// (0x0001e4e0) cam4_indicators_pane_t1

0x7bc9,	// (0x0001e50a) main_video4_pane_g1_ParamLimits

0x7bc9,	// (0x0001e50a) main_video4_pane_g1

0x7bd5,	// (0x0001e516) main_video4_pane_g2_ParamLimits

0x7bd5,	// (0x0001e516) main_video4_pane_g2

0x7be1,	// (0x0001e522) main_video4_pane_g3_ParamLimits

0x7be1,	// (0x0001e522) main_video4_pane_g3

0x7bed,	// (0x0001e52e) main_video4_pane_g4_ParamLimits

0x7bed,	// (0x0001e52e) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0002625e) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0002625e) main_video4_pane_g

0x7c0d,	// (0x0001e54e) vid4_indicators_pane_ParamLimits

0x7c0d,	// (0x0001e54e) vid4_indicators_pane

0x7c2b,	// (0x0001e56c) video4_image_uncrop_cif_pane_ParamLimits

0x7c2b,	// (0x0001e56c) video4_image_uncrop_cif_pane

0x7c3a,	// (0x0001e57b) video4_image_uncrop_nhd_pane_ParamLimits

0x7c3a,	// (0x0001e57b) video4_image_uncrop_nhd_pane

0x7ac5,	// (0x0001e406) video4_image_uncrop_vga_pane_ParamLimits

0x7ac5,	// (0x0001e406) video4_image_uncrop_vga_pane

0x7c47,	// (0x0001e588) bg_tb_trans_pane_cp07

0x7c5f,	// (0x0001e5a0) vid4_indicators_pane_g1

0x7c70,	// (0x0001e5b1) vid4_indicators_pane_g2

0x7c81,	// (0x0001e5c2) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00026269) vid4_indicators_pane_g

0x7cae,	// (0x0001e5ef) vid4_indicators_pane_t1

0xc4f8,	// (0x00022e39) cam4_autofocus_pane_g1

0xc500,	// (0x00022e41) cam4_autofocus_pane_g2

0xc508,	// (0x00022e49) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00026274) cam4_autofocus_pane_g

0xc510,	// (0x00022e51) cam4_autofocus_pane_g3_copy1

0x3bde,	// (0x0001a51f) video_down_pane_cp_t1

0x3bec,	// (0x0001a52d) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x000261f0) video_down_pane_cp_t

0x3ac2,	// (0x0001a403) popup_vitu2_window_ParamLimits

0x3ac2,	// (0x0001a403) popup_vitu2_window

0x7cc7,	// (0x0001e608) aid_size_cell2_itu2_ParamLimits

0x7cc7,	// (0x0001e608) aid_size_cell2_itu2

0x7ce9,	// (0x0001e62a) aid_size_cell_itu2_ParamLimits

0x7ce9,	// (0x0001e62a) aid_size_cell_itu2

0x7d2d,	// (0x0001e66e) bg_popup_window_pane_cp09_ParamLimits

0x7d2d,	// (0x0001e66e) bg_popup_window_pane_cp09

0x7d3b,	// (0x0001e67c) field_vitu2_entry_pane_ParamLimits

0x7d3b,	// (0x0001e67c) field_vitu2_entry_pane

0x7d5b,	// (0x0001e69c) grid_vitu2_function_pane_ParamLimits

0x7d5b,	// (0x0001e69c) grid_vitu2_function_pane

0x7d9f,	// (0x0001e6e0) grid_vitu2_itu_pane_ParamLimits

0x7d9f,	// (0x0001e6e0) grid_vitu2_itu_pane

0x7e17,	// (0x0001e758) cell_vitu2_itu_pane_ParamLimits

0x7e17,	// (0x0001e758) cell_vitu2_itu_pane

0x7e2c,	// (0x0001e76d) cell_vitu2_function_pane_ParamLimits

0x7e2c,	// (0x0001e76d) cell_vitu2_function_pane

0x4020,	// (0x0001a961) bg_popup_call_pane_cp08_ParamLimits

0x4020,	// (0x0001a961) bg_popup_call_pane_cp08

0x4039,	// (0x0001a97a) field_vitu2_entry_pane_g1

0x4045,	// (0x0001a986) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0002627b) field_vitu2_entry_pane_g

0x405f,	// (0x0001a9a0) field_vitu2_entry_pane_t1_ParamLimits

0x405f,	// (0x0001a9a0) field_vitu2_entry_pane_t1

0x408e,	// (0x0001a9cf) field_vitu2_entry_pane_t2_ParamLimits

0x408e,	// (0x0001a9cf) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00026282) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00026282) field_vitu2_entry_pane_t

0x7e6b,	// (0x0001e7ac) bg_button_pane_cp010_ParamLimits

0x7e6b,	// (0x0001e7ac) bg_button_pane_cp010

0x7e79,	// (0x0001e7ba) cell_vitu2_itu_pane_g1

0x7e97,	// (0x0001e7d8) cell_vitu2_itu_pane_t1_ParamLimits

0x7e97,	// (0x0001e7d8) cell_vitu2_itu_pane_t1

0x7ee9,	// (0x0001e82a) cell_vitu2_itu_pane_t2_ParamLimits

0x7ee9,	// (0x0001e82a) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0002628c) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0002628c) cell_vitu2_itu_pane_t

0x7c47,	// (0x0001e588) bg_button_pane_cp011

0x7fa4,	// (0x0001e8e5) cell_vitu2_function_pane_g1

0x03c2,	// (0x00016d03) main_myfav_hc_pane

0x7a5c,	// (0x0001e39d) popup_image3_note_pane_ParamLimits

0x7a5c,	// (0x0001e39d) popup_image3_note_pane

0x7a6a,	// (0x0001e3ab) popup_image3_tool_bar_pane_ParamLimits

0x7a6a,	// (0x0001e3ab) popup_image3_tool_bar_pane

0x7f57,	// (0x0001e898) cell_vitu2_itu_pane_t3_ParamLimits

0x7f57,	// (0x0001e898) cell_vitu2_itu_pane_t3

0x03c2,	// (0x00016d03) bg_popup_trans_pane

0x40b3,	// (0x0001a9f4) grid_image3_tool_bar_pane

0x40bd,	// (0x0001a9fe) bg_popup_trans_pane_g1

0x1111,	// (0x00017a52) bg_popup_trans_pane_g2

0x40c5,	// (0x0001aa06) bg_popup_trans_pane_g3

0x40cd,	// (0x0001aa0e) bg_popup_trans_pane_g4

0x40d5,	// (0x0001aa16) bg_popup_trans_pane_g5

0x40dd,	// (0x0001aa1e) bg_popup_trans_pane_g6

0x40e5,	// (0x0001aa26) bg_popup_trans_pane_g7

0x40ed,	// (0x0001aa2e) bg_popup_trans_pane_g8

0x10f1,	// (0x00017a32) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00026293) bg_popup_trans_pane_g

0x40f5,	// (0x0001aa36) cell_image3_tool_bar_pane_ParamLimits

0x40f5,	// (0x0001aa36) cell_image3_tool_bar_pane

0x32fd,	// (0x00019c3e) cell_image3_tool_bar_pane_g1

0x03c2,	// (0x00016d03) bg_popup_trans_pane_cp1

0x4109,	// (0x0001aa4a) popup_image3_note_pane_t1

0x4117,	// (0x0001aa58) popup_image3_note_pane_t2

0x4125,	// (0x0001aa66) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x000262a6) popup_image3_note_pane_t

0x4133,	// (0x0001aa74) popup_image3_note_pane_t3_copy1

0xc518,	// (0x00022e59) bg_myfav_hc_instruction_pane_ParamLimits

0xc518,	// (0x00022e59) bg_myfav_hc_instruction_pane

0xc530,	// (0x00022e71) cell_myfav_contact_pane_ParamLimits

0xc530,	// (0x00022e71) cell_myfav_contact_pane

0xc54a,	// (0x00022e8b) cell_myfav_contact_pane_cp1_ParamLimits

0xc54a,	// (0x00022e8b) cell_myfav_contact_pane_cp1

0xc562,	// (0x00022ea3) cell_myfav_contact_pane_cp2_ParamLimits

0xc562,	// (0x00022ea3) cell_myfav_contact_pane_cp2

0xc57a,	// (0x00022ebb) cell_myfav_contact_pane_cp3_ParamLimits

0xc57a,	// (0x00022ebb) cell_myfav_contact_pane_cp3

0xc591,	// (0x00022ed2) cell_myfav_contact_pane_cp4_ParamLimits

0xc591,	// (0x00022ed2) cell_myfav_contact_pane_cp4

0xc5a7,	// (0x00022ee8) cell_myfav_contact_pane_cp5_ParamLimits

0xc5a7,	// (0x00022ee8) cell_myfav_contact_pane_cp5

0xc5bb,	// (0x00022efc) cell_myfav_contact_pane_cp6_ParamLimits

0xc5bb,	// (0x00022efc) cell_myfav_contact_pane_cp6

0xc5cf,	// (0x00022f10) cell_myfav_contact_pane_cp7_ParamLimits

0xc5cf,	// (0x00022f10) cell_myfav_contact_pane_cp7

0x4141,	// (0x0001aa82) listscroll_gen_pane_cp05

0xc5e7,	// (0x00022f28) main_myfav_hc_pane_g1_ParamLimits

0xc5e7,	// (0x00022f28) main_myfav_hc_pane_g1

0xc5fd,	// (0x00022f3e) main_myfav_hc_pane_g2_ParamLimits

0xc5fd,	// (0x00022f3e) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x000262ad) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x000262ad) main_myfav_hc_pane_g

0xc62b,	// (0x00022f6c) main_myfav_hc_pane_t1_ParamLimits

0xc62b,	// (0x00022f6c) main_myfav_hc_pane_t1

0x414a,	// (0x0001aa8b) main_myfav_hc_pane_t2_ParamLimits

0x414a,	// (0x0001aa8b) main_myfav_hc_pane_t2

0x415c,	// (0x0001aa9d) main_myfav_hc_pane_t3_ParamLimits

0x415c,	// (0x0001aa9d) main_myfav_hc_pane_t3

0xc642,	// (0x00022f83) main_myfav_hc_pane_t4_ParamLimits

0xc642,	// (0x00022f83) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x000262b4) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x000262b4) main_myfav_hc_pane_t

0x32fd,	// (0x00019c3e) bg_myfav_hc_instruction_pane_g1

0x416e,	// (0x0001aaaf) cell_myfav_contact_pane_g1_ParamLimits

0x416e,	// (0x0001aaaf) cell_myfav_contact_pane_g1

0x416e,	// (0x0001aaaf) cell_myfav_contact_pane_g2_ParamLimits

0x416e,	// (0x0001aaaf) cell_myfav_contact_pane_g2

0x417a,	// (0x0001aabb) cell_myfav_contact_pane_g3_ParamLimits

0x417a,	// (0x0001aabb) cell_myfav_contact_pane_g3

0x35da,	// (0x00019f1b) cell_myfav_contact_pane_g4_ParamLimits

0x35da,	// (0x00019f1b) cell_myfav_contact_pane_g4

0x4187,	// (0x0001aac8) cell_myfav_contact_pane_g5_ParamLimits

0x4187,	// (0x0001aac8) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x000262bf) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x000262bf) cell_myfav_contact_pane_g

0xc613,	// (0x00022f54) main_myfav_hc_pane_g3_ParamLimits

0xc613,	// (0x00022f54) main_myfav_hc_pane_g3

0x83fc,	// (0x0001ed3d) popup_adpt_find_window

0xc66c,	// (0x00022fad) afind_page_pane_ParamLimits

0xc66c,	// (0x00022fad) afind_page_pane

0xc679,	// (0x00022fba) aid_size_cell_afind_ParamLimits

0xc679,	// (0x00022fba) aid_size_cell_afind

0xc693,	// (0x00022fd4) bg_popup_sub_pane_cp09_ParamLimits

0xc693,	// (0x00022fd4) bg_popup_sub_pane_cp09

0xc6a0,	// (0x00022fe1) find_pane_cp01_ParamLimits

0xc6a0,	// (0x00022fe1) find_pane_cp01

0x4193,	// (0x0001aad4) grid_afind_control_pane_ParamLimits

0x4193,	// (0x0001aad4) grid_afind_control_pane

0xc6ad,	// (0x00022fee) grid_afind_pane_ParamLimits

0xc6ad,	// (0x00022fee) grid_afind_pane

0xc6c9,	// (0x0002300a) cell_afind_pane_ParamLimits

0xc6c9,	// (0x0002300a) cell_afind_pane

0x32fd,	// (0x00019c3e) afind_page_pane_g1

0xc711,	// (0x00023052) afind_page_pane_g2

0xc71a,	// (0x0002305b) afind_page_pane_g3

0x0002,

0xf989,	// (0x000262ca) afind_page_pane_g

0xc723,	// (0x00023064) afind_page_pane_t1

0x41a7,	// (0x0001aae8) cell_afind_grid_control_pane_ParamLimits

0x41a7,	// (0x0001aae8) cell_afind_grid_control_pane

0x3e68,	// (0x0001a7a9) bg_button_pane_cp69_ParamLimits

0x3e68,	// (0x0001a7a9) bg_button_pane_cp69

0xc743,	// (0x00023084) cell_afind_pane_g1_ParamLimits

0xc743,	// (0x00023084) cell_afind_pane_g1

0xc750,	// (0x00023091) cell_afind_pane_t1_ParamLimits

0xc750,	// (0x00023091) cell_afind_pane_t1

0x0e6c,	// (0x000177ad) bg_button_pane_cp72

0x41b6,	// (0x0001aaf7) cell_afind_grid_control_pane_g1

0xaa00,	// (0x00021341) aid_image_placing_area_ParamLimits

0xaa00,	// (0x00021341) aid_image_placing_area

0x38d3,	// (0x0001a214) field_vitu_entry_pane_g1_ParamLimits

0x38d3,	// (0x0001a214) field_vitu_entry_pane_g1

0x38df,	// (0x0001a220) field_vitu_entry_pane_g2_ParamLimits

0x38df,	// (0x0001a220) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0002617b) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0002617b) field_vitu_entry_pane_g

0xc1bd,	// (0x00022afe) cell_vitu_itu_pane_g1_ParamLimits

0xc1ff,	// (0x00022b40) cell_vitu_itu_pane_t3_ParamLimits

0xc1ff,	// (0x00022b40) cell_vitu_itu_pane_t3

0x3e18,	// (0x0001a759) mp4_progress_pane_t1_ParamLimits

0x3e31,	// (0x0001a772) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00026210) mp4_progress_pane_t_ParamLimits

0x3e4a,	// (0x0001a78b) mup_progress_pane_cp04_ParamLimits

0xc656,	// (0x00022f97) main_myfav_hc_pane_t5_ParamLimits

0xc656,	// (0x00022f97) main_myfav_hc_pane_t5

0x03e8,	// (0x00016d29) aid_zoom_text_primary

0x83fc,	// (0x0001ed3d) popup_adpt_find_window_ParamLimits

0x0432,	// (0x00016d73) main_cam_set_pane

0x7aea,	// (0x0001e42b) cam4_zoom_pane_ParamLimits

0x7aea,	// (0x0001e42b) cam4_zoom_pane

0xc762,	// (0x000230a3) main_cam_set_pane_g1_ParamLimits

0xc762,	// (0x000230a3) main_cam_set_pane_g1

0xc770,	// (0x000230b1) main_cam_set_pane_g2_ParamLimits

0xc770,	// (0x000230b1) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x000262d1) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x000262d1) main_cam_set_pane_g

0xc77c,	// (0x000230bd) main_cam_set_pane_t1_ParamLimits

0xc77c,	// (0x000230bd) main_cam_set_pane_t1

0xc798,	// (0x000230d9) main_cset_listscroll_pane_ParamLimits

0xc798,	// (0x000230d9) main_cset_listscroll_pane

0xc7c3,	// (0x00023104) main_cset_slider_pane_ParamLimits

0xc7c3,	// (0x00023104) main_cset_slider_pane

0x41c7,	// (0x0001ab08) main_cset_list_pane_ParamLimits

0x41c7,	// (0x0001ab08) main_cset_list_pane

0x41d7,	// (0x0001ab18) scroll_pane_cp028

0xc7e2,	// (0x00023123) aid_area_touch_slider

0xc7fe,	// (0x0002313f) cset_slider_pane

0xc828,	// (0x00023169) main_cset_slider_pane_g1

0xc83d,	// (0x0002317e) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x000262d6) main_cset_slider_pane_g

0x4210,	// (0x0001ab51) main_cset_slider_pane_t1

0xc8ff,	// (0x00023240) main_cset_slider_pane_t2

0xc919,	// (0x0002325a) main_cset_slider_pane_t3

0xc933,	// (0x00023274) main_cset_slider_pane_t4

0xc94d,	// (0x0002328e) main_cset_slider_pane_t5

0xc96b,	// (0x000232ac) main_cset_slider_pane_t6

0xc982,	// (0x000232c3) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x000262fb) main_cset_slider_pane_t

0xca8e,	// (0x000233cf) cset_list_set_pane_ParamLimits

0xca8e,	// (0x000233cf) cset_list_set_pane

0xcaa4,	// (0x000233e5) aid_position_infowindow_above

0xcaac,	// (0x000233ed) aid_position_infowindow_below

0xcab4,	// (0x000233f5) cset_list_set_pane_g1_ParamLimits

0xcab4,	// (0x000233f5) cset_list_set_pane_g1

0x42b0,	// (0x0001abf1) cset_list_set_pane_g3_ParamLimits

0x42b0,	// (0x0001abf1) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0002631a) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0002631a) cset_list_set_pane_g

0x42bf,	// (0x0001ac00) cset_list_set_pane_t1_ParamLimits

0x42bf,	// (0x0001ac00) cset_list_set_pane_t1

0x0432,	// (0x00016d73) list_highlight_pane_cp021_ParamLimits

0x0432,	// (0x00016d73) list_highlight_pane_cp021

0x1a90,	// (0x000183d1) cset_slider_pane_g1

0x1aa2,	// (0x000183e3) cset_slider_pane_g2

0x1a99,	// (0x000183da) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0002631f) cset_slider_pane_g

0x7fb8,	// (0x0001e8f9) aid_area_touch_cam4_zoom

0x7fc0,	// (0x0001e901) cam4_zoom_cont_pane

0x7fc8,	// (0x0001e909) cam4_zoom_pane_g1

0x7fd0,	// (0x0001e911) cam4_zoom_pane_g2

0x7fd8,	// (0x0001e919) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00026326) cam4_zoom_pane_g

0x7fe0,	// (0x0001e921) cam4_zoom_cont_pane_g1

0x7fe9,	// (0x0001e92a) cam4_zoom_cont_pane_g2

0x7ff2,	// (0x0001e933) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0002632d) cam4_zoom_cont_pane_g

0xc430,	// (0x00022d71) call4_image_pane_ParamLimits

0xc430,	// (0x00022d71) call4_image_pane

0x3ea6,	// (0x0001a7e7) call4_windows_conf_pane_ParamLimits

0x3ee7,	// (0x0001a828) popup_call4_audio_in_window_ParamLimits

0x3ee7,	// (0x0001a828) popup_call4_audio_in_window

0x03c2,	// (0x00016d03) bg_popup_call2_act_pane_cp02

0x3f5d,	// (0x0001a89e) call4_list_conf_pane

0x32fd,	// (0x00019c3e) call4_image_pane_g1

0x32fd,	// (0x00019c3e) call4_image_pane_g2

0x0001,

0xf700,	// (0x00026041) call4_image_pane_g

0x430f,	// (0x0001ac50) list_single_graphic_popup_conf4_pane_ParamLimits

0x430f,	// (0x0001ac50) list_single_graphic_popup_conf4_pane

0x03c2,	// (0x00016d03) list_highlight_pane_cp022

0x4322,	// (0x0001ac63) list_single_graphic_popup_conf4_pane_g1

0x174f,	// (0x00018090) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00026334) list_single_graphic_popup_conf4_pane_g

0x432a,	// (0x0001ac6b) list_single_graphic_popup_conf4_pane_t1

0x906f,	// (0x0001f9b0) popup_vtel_slider_window_ParamLimits

0x906f,	// (0x0001f9b0) popup_vtel_slider_window

0x3e56,	// (0x0001a797) dialer2_ne_pane_t2_ParamLimits

0x3e56,	// (0x0001a797) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00026215) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00026215) dialer2_ne_pane_t

0x0432,	// (0x00016d73) bg_popup_sub_pane_cp010_ParamLimits

0x0432,	// (0x00016d73) bg_popup_sub_pane_cp010

0xcac0,	// (0x00023401) popup_vtel_slider_window_g1_ParamLimits

0xcac0,	// (0x00023401) popup_vtel_slider_window_g1

0xcacc,	// (0x0002340d) popup_vtel_slider_window_g2_ParamLimits

0xcacc,	// (0x0002340d) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00026339) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00026339) popup_vtel_slider_window_g

0xcb14,	// (0x00023455) vtel_slider_pane_ParamLimits

0xcb14,	// (0x00023455) vtel_slider_pane

0xcb23,	// (0x00023464) vtel_slider_pane_g1_ParamLimits

0xcb23,	// (0x00023464) vtel_slider_pane_g1

0xcb30,	// (0x00023471) vtel_slider_pane_g2_ParamLimits

0xcb30,	// (0x00023471) vtel_slider_pane_g2

0xcb3d,	// (0x0002347e) vtel_slider_pane_g3_ParamLimits

0xcb3d,	// (0x0002347e) vtel_slider_pane_g3

0xcb23,	// (0x00023464) vtel_slider_pane_g4_ParamLimits

0xcb23,	// (0x00023464) vtel_slider_pane_g4

0xcb4a,	// (0x0002348b) vtel_slider_pane_g5_ParamLimits

0xcb4a,	// (0x0002348b) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00026342) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00026342) vtel_slider_pane_g

0x03c2,	// (0x00016d03) main_gallery2_pane

0x7d0f,	// (0x0001e650) aid_size_row_itut2_dropdow_list_ParamLimits

0x7d0f,	// (0x0001e650) aid_size_row_itut2_dropdow_list

0x7d7d,	// (0x0001e6be) grid_vitu2_function_top_pane_ParamLimits

0x7d7d,	// (0x0001e6be) grid_vitu2_function_top_pane

0x7dd3,	// (0x0001e714) popup_vitu2_dropdown_list_window_ParamLimits

0x7dd3,	// (0x0001e714) popup_vitu2_dropdown_list_window

0x7df3,	// (0x0001e734) popup_vitu2_match_list_window

0x7ffb,	// (0x0001e93c) cell_vitu2_function_top_pane_ParamLimits

0x7ffb,	// (0x0001e93c) cell_vitu2_function_top_pane

0x801b,	// (0x0001e95c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x801b,	// (0x0001e95c) cell_vitu2_function_top_pane_cp01

0x8039,	// (0x0001e97a) cell_vitu2_function_top_wide_pane_ParamLimits

0x8039,	// (0x0001e97a) cell_vitu2_function_top_wide_pane

0x7c47,	// (0x0001e588) bg_button_pane_cp012

0x8057,	// (0x0001e998) cell_vitu2_function_top_pane_g1

0x8066,	// (0x0001e9a7) bg_button_pane_cp013_ParamLimits

0x8066,	// (0x0001e9a7) bg_button_pane_cp013

0xcb57,	// (0x00023498) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcb57,	// (0x00023498) cell_vitu2_function_top_wide_pane_g1

0x8082,	// (0x0001e9c3) bg_popup_sub_pane_cp20

0x8090,	// (0x0001e9d1) list_vitu2_match_list_pane

0x40bd,	// (0x0001a9fe) bg_popup_sub_pane_cp20_g1

0x40c5,	// (0x0001aa06) bg_popup_sub_pane_cp20_g2

0x1111,	// (0x00017a52) bg_popup_sub_pane_cp20_g3

0x40cd,	// (0x0001aa0e) bg_popup_sub_pane_cp20_g4

0x10f1,	// (0x00017a32) bg_popup_sub_pane_cp20_g5

0x436a,	// (0x0001acab) bg_popup_sub_pane_cp20_g6

0x40dd,	// (0x0001aa1e) bg_popup_sub_pane_cp20_g7

0x40e5,	// (0x0001aa26) bg_popup_sub_pane_cp20_g8

0x40ed,	// (0x0001aa2e) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0002634d) bg_popup_sub_pane_cp20_g

0x80a8,	// (0x0001e9e9) list_vitu2_match_list_item_pane_ParamLimits

0x80a8,	// (0x0001e9e9) list_vitu2_match_list_item_pane

0x80ba,	// (0x0001e9fb) list_vitu2_match_list_item_pane_t1

0x6ee8,	// (0x0001d829) bg_popup_sub_pane_cp21

0x80c8,	// (0x0001ea09) grid_vitu2_dropdown_list_pane

0x80d0,	// (0x0001ea11) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x80d0,	// (0x0001ea11) cell_vitu2_dropdown_list_char_pane

0x80f1,	// (0x0001ea32) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x80f1,	// (0x0001ea32) cell_vitu2_dropdown_list_ctrl_pane

0x43bc,	// (0x0001acfd) cell_vitu2_dropdown_list_char_pane_g1

0x43b3,	// (0x0001acf4) cell_vitu2_dropdown_list_char_pane_g2

0x43aa,	// (0x0001aceb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0002636a) cell_vitu2_dropdown_list_char_pane_g

0x811d,	// (0x0001ea5e) cell_vitu2_dropdown_list_char_pane_t1

0xcb9e,	// (0x000234df) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcb9e,	// (0x000234df) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcbae,	// (0x000234ef) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcbae,	// (0x000234ef) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcbbf,	// (0x00023500) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcbbf,	// (0x00023500) cell_vitu2_dropdown_list_ctrl_pane_g3

0x812b,	// (0x0001ea6c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x812b,	// (0x0001ea6c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7b5a,	// (0x0001e49b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7b5a,	// (0x0001e49b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00026371) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00026371) cell_vitu2_dropdown_list_ctrl_pane_g

0xcbcf,	// (0x00023510) aid_size_cell_gallery2_ParamLimits

0xcbcf,	// (0x00023510) aid_size_cell_gallery2

0xcbdd,	// (0x0002351e) grid_gallery2_pane_ParamLimits

0xcbdd,	// (0x0002351e) grid_gallery2_pane

0xcbec,	// (0x0002352d) scroll_pane_cp029_ParamLimits

0xcbec,	// (0x0002352d) scroll_pane_cp029

0xcbf8,	// (0x00023539) cell_gallery2_pane_ParamLimits

0xcbf8,	// (0x00023539) cell_gallery2_pane

0x43c5,	// (0x0001ad06) cell_gallery2_pane_g2

0x511b,	// (0x0001ba5c) cell_gallery2_pane_g3

0x43cf,	// (0x0001ad10) cell_gallery2_pane_g4

0x43d7,	// (0x0001ad18) cell_gallery2_pane_g5

0x193a,	// (0x0001827b) grid_highlight_pane_cp10

0x7df3,	// (0x0001e734) popup_vitu2_match_list_window_ParamLimits

0x7e07,	// (0x0001e748) popup_vitu2_query_window_ParamLimits

0x7e07,	// (0x0001e748) popup_vitu2_query_window

0x6ee8,	// (0x0001d829) bg_vitu2_candi_button_pane

0x43bc,	// (0x0001acfd) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x43b3,	// (0x0001acf4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x43aa,	// (0x0001aceb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcc26,	// (0x00023567) bg_button_pane_cp015

0xcc38,	// (0x00023579) bg_button_pane_cp016

0xcc4b,	// (0x0002358c) bg_button_pane_cp017

0x2df7,	// (0x00019738) bg_popup_sub_pane_cp22

0x43df,	// (0x0001ad20) popup_vitu2_query_window_g1

0xcc90,	// (0x000235d1) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0002637c) popup_vitu2_query_window_g

0xccad,	// (0x000235ee) popup_vitu2_query_window_t1_ParamLimits

0xccad,	// (0x000235ee) popup_vitu2_query_window_t1

0xcce0,	// (0x00023621) popup_vitu2_query_window_t2_ParamLimits

0xcce0,	// (0x00023621) popup_vitu2_query_window_t2

0xccf2,	// (0x00023633) popup_vitu2_query_window_t3_ParamLimits

0xccf2,	// (0x00023633) popup_vitu2_query_window_t3

0xcd1a,	// (0x0002365b) popup_vitu2_query_window_t4_ParamLimits

0xcd1a,	// (0x0002365b) popup_vitu2_query_window_t4

0xcd3b,	// (0x0002367c) popup_vitu2_query_window_t5_ParamLimits

0xcd3b,	// (0x0002367c) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00026383) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00026383) popup_vitu2_query_window_t

0x41bf,	// (0x0001ab00) main_cset_text_pane

0xc7e2,	// (0x00023123) aid_area_touch_slider_ParamLimits

0xc7fe,	// (0x0002313f) cset_slider_pane_ParamLimits

0xc828,	// (0x00023169) main_cset_slider_pane_g1_ParamLimits

0xc83d,	// (0x0002317e) main_cset_slider_pane_g2_ParamLimits

0x41e0,	// (0x0001ab21) main_cset_slider_pane_g3_ParamLimits

0x41e0,	// (0x0001ab21) main_cset_slider_pane_g3

0xc852,	// (0x00023193) main_cset_slider_pane_g4_ParamLimits

0xc852,	// (0x00023193) main_cset_slider_pane_g4

0xc861,	// (0x000231a2) main_cset_slider_pane_g5_ParamLimits

0xc861,	// (0x000231a2) main_cset_slider_pane_g5

0xc86f,	// (0x000231b0) main_cset_slider_pane_g6_ParamLimits

0xc86f,	// (0x000231b0) main_cset_slider_pane_g6

0xf995,	// (0x000262d6) main_cset_slider_pane_g_ParamLimits

0x4210,	// (0x0001ab51) main_cset_slider_pane_t1_ParamLimits

0xc8ff,	// (0x00023240) main_cset_slider_pane_t2_ParamLimits

0xc919,	// (0x0002325a) main_cset_slider_pane_t3_ParamLimits

0xc933,	// (0x00023274) main_cset_slider_pane_t4_ParamLimits

0xc94d,	// (0x0002328e) main_cset_slider_pane_t5_ParamLimits

0xc96b,	// (0x000232ac) main_cset_slider_pane_t6_ParamLimits

0xc982,	// (0x000232c3) main_cset_slider_pane_t7_ParamLimits

0xc9b0,	// (0x000232f1) main_cset_slider_pane_t8_ParamLimits

0xc9b0,	// (0x000232f1) main_cset_slider_pane_t8

0xc9d8,	// (0x00023319) main_cset_slider_pane_t9_ParamLimits

0xc9d8,	// (0x00023319) main_cset_slider_pane_t9

0xca00,	// (0x00023341) main_cset_slider_pane_t10_ParamLimits

0xca00,	// (0x00023341) main_cset_slider_pane_t10

0xca28,	// (0x00023369) main_cset_slider_pane_t11_ParamLimits

0xca28,	// (0x00023369) main_cset_slider_pane_t11

0xca52,	// (0x00023393) main_cset_slider_pane_t12_ParamLimits

0xca52,	// (0x00023393) main_cset_slider_pane_t12

0xca6f,	// (0x000233b0) main_cset_slider_pane_t13_ParamLimits

0xca6f,	// (0x000233b0) main_cset_slider_pane_t13

0xf9ba,	// (0x000262fb) main_cset_slider_pane_t_ParamLimits

0x03c2,	// (0x00016d03) bg_popup_sub_pane_cp011

0x43eb,	// (0x0001ad2c) main_cset_text_pane_g1

0x43f3,	// (0x0001ad34) main_cset_text_pane_t1

0x4401,	// (0x0001ad42) main_cset_text_pane_t2

0x440f,	// (0x0001ad50) main_cset_text_pane_t3

0x441d,	// (0x0001ad5e) main_cset_text_pane_t4

0x442b,	// (0x0001ad6c) main_cset_text_pane_t5

0x4439,	// (0x0001ad7a) main_cset_text_pane_t6

0x4447,	// (0x0001ad88) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00026392) main_cset_text_pane_t

0x03c2,	// (0x00016d03) main_cam4_burst_pane

0x03c2,	// (0x00016d03) main_cam5_pane

0xc731,	// (0x00023072) bg_button_pane_cp019

0xc73a,	// (0x0002307b) bg_button_pane_cp020

0x41ec,	// (0x0001ab2d) main_cset_slider_pane_g7_ParamLimits

0x41ec,	// (0x0001ab2d) main_cset_slider_pane_g7

0x41f8,	// (0x0001ab39) main_cset_slider_pane_g8_ParamLimits

0x41f8,	// (0x0001ab39) main_cset_slider_pane_g8

0xc883,	// (0x000231c4) main_cset_slider_pane_g9_ParamLimits

0xc883,	// (0x000231c4) main_cset_slider_pane_g9

0xc88f,	// (0x000231d0) main_cset_slider_pane_g10_ParamLimits

0xc88f,	// (0x000231d0) main_cset_slider_pane_g10

0xc89b,	// (0x000231dc) main_cset_slider_pane_g11_ParamLimits

0xc89b,	// (0x000231dc) main_cset_slider_pane_g11

0xc8a7,	// (0x000231e8) main_cset_slider_pane_g12_ParamLimits

0xc8a7,	// (0x000231e8) main_cset_slider_pane_g12

0xc8b3,	// (0x000231f4) main_cset_slider_pane_g13_ParamLimits

0xc8b3,	// (0x000231f4) main_cset_slider_pane_g13

0xc8bf,	// (0x00023200) main_cset_slider_pane_g14_ParamLimits

0xc8bf,	// (0x00023200) main_cset_slider_pane_g14

0xc8cb,	// (0x0002320c) main_cset_slider_pane_g15_ParamLimits

0xc8cb,	// (0x0002320c) main_cset_slider_pane_g15

0x423e,	// (0x0001ab7f) main_cset_slider_pane_t14_ParamLimits

0x423e,	// (0x0001ab7f) main_cset_slider_pane_t14

0x4277,	// (0x0001abb8) main_cset_slider_pane_t15_ParamLimits

0x4277,	// (0x0001abb8) main_cset_slider_pane_t15

0xcdb2,	// (0x000236f3) aid_cam4_burst_size_cell_ParamLimits

0xcdb2,	// (0x000236f3) aid_cam4_burst_size_cell

0xcdce,	// (0x0002370f) grid_cam4_burst_pane_ParamLimits

0xcdce,	// (0x0002370f) grid_cam4_burst_pane

0xcdfe,	// (0x0002373f) linegrid_cam4_burst_pane_ParamLimits

0xcdfe,	// (0x0002373f) linegrid_cam4_burst_pane

0xce1e,	// (0x0002375f) scroll_pane_cp30_ParamLimits

0xce1e,	// (0x0002375f) scroll_pane_cp30

0xce2a,	// (0x0002376b) cell_cam4_burst_pane_ParamLimits

0xce2a,	// (0x0002376b) cell_cam4_burst_pane

0x4461,	// (0x0001ada2) linegrid_cam4_burst_pane_g1_ParamLimits

0x4461,	// (0x0001ada2) linegrid_cam4_burst_pane_g1

0xce66,	// (0x000237a7) linegrid_cam4_burst_pane_g2_ParamLimits

0xce66,	// (0x000237a7) linegrid_cam4_burst_pane_g2

0x446e,	// (0x0001adaf) linegrid_cam4_burst_pane_g3_ParamLimits

0x446e,	// (0x0001adaf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x000263a1) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x000263a1) linegrid_cam4_burst_pane_g

0xce77,	// (0x000237b8) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xce77,	// (0x000237b8) linegrid_cam4_burst_pane_g3_copy1

0x447b,	// (0x0001adbc) linegrid_cam4_burst_pane_g4_ParamLimits

0x447b,	// (0x0001adbc) linegrid_cam4_burst_pane_g4

0xce91,	// (0x000237d2) linegrid_cam4_burst_pane_g5_ParamLimits

0xce91,	// (0x000237d2) linegrid_cam4_burst_pane_g5

0xcea2,	// (0x000237e3) linegrid_cam4_burst_pane_g6_ParamLimits

0xcea2,	// (0x000237e3) linegrid_cam4_burst_pane_g6

0x4488,	// (0x0001adc9) linegrid_cam4_burst_pane_g7_ParamLimits

0x4488,	// (0x0001adc9) linegrid_cam4_burst_pane_g7

0xceb3,	// (0x000237f4) cell_cam4_burst_pane_g1

0x44a1,	// (0x0001ade2) main_cam5_pane_t1_ParamLimits

0x44a1,	// (0x0001ade2) main_cam5_pane_t1

0x44b3,	// (0x0001adf4) main_cam5_pane_t2_ParamLimits

0x44b3,	// (0x0001adf4) main_cam5_pane_t2

0x44c5,	// (0x0001ae06) main_cam5_pane_t3_ParamLimits

0x44c5,	// (0x0001ae06) main_cam5_pane_t3

0x44d7,	// (0x0001ae18) main_cam5_pane_t4_ParamLimits

0x44d7,	// (0x0001ae18) main_cam5_pane_t4

0x44ef,	// (0x0001ae30) main_cam5_pane_t5_ParamLimits

0x44ef,	// (0x0001ae30) main_cam5_pane_t5

0x4503,	// (0x0001ae44) main_cam5_pane_t6_ParamLimits

0x4503,	// (0x0001ae44) main_cam5_pane_t6

0x4517,	// (0x0001ae58) main_cam5_pane_t7_ParamLimits

0x4517,	// (0x0001ae58) main_cam5_pane_t7

0x4529,	// (0x0001ae6a) main_cam5_pane_t8_ParamLimits

0x4529,	// (0x0001ae6a) main_cam5_pane_t8

0x4545,	// (0x0001ae86) main_cam5_pane_t9_ParamLimits

0x4545,	// (0x0001ae86) main_cam5_pane_t9

0x4557,	// (0x0001ae98) main_cam5_pane_t10_ParamLimits

0x4557,	// (0x0001ae98) main_cam5_pane_t10

0x4569,	// (0x0001aeaa) main_cam5_pane_t11_ParamLimits

0x4569,	// (0x0001aeaa) main_cam5_pane_t11

0x457b,	// (0x0001aebc) main_cam5_pane_t12_ParamLimits

0x457b,	// (0x0001aebc) main_cam5_pane_t12

0x4590,	// (0x0001aed1) main_cam5_pane_t13_ParamLimits

0x4590,	// (0x0001aed1) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x000263ad) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x000263ad) main_cam5_pane_t

0x84a8,	// (0x0001ede9) popup_scut_keymap_window_ParamLimits

0x84a8,	// (0x0001ede9) popup_scut_keymap_window

0xcec6,	// (0x00023807) aid_size_cell_brow_shortcut

0x193a,	// (0x0001827b) bg_popup_window_pane_cp010

0xced2,	// (0x00023813) grid_scut_pane

0xcede,	// (0x0002381f) cell_scut_pane_ParamLimits

0xcede,	// (0x0002381f) cell_scut_pane

0xcef5,	// (0x00023836) cell_scut_pane_g1

0x45ad,	// (0x0001aeee) cell_scut_pane_t1

0x45bc,	// (0x0001aefd) cell_scut_pane_t2

0xcefe,	// (0x0002383f) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x000263c8) cell_scut_pane_t

0xb8d3,	// (0x00022214) main_mup3_pane_g8_ParamLimits

0xb8d3,	// (0x00022214) main_mup3_pane_g8

0x7d1d,	// (0x0001e65e) area_vitu2_query_pane_ParamLimits

0x7d1d,	// (0x0001e65e) area_vitu2_query_pane

0xcc5e,	// (0x0002359f) input_focus_pane_cp08

0x45cb,	// (0x0001af0c) area_vitu2_query_pane_g1

0xcf0c,	// (0x0002384d) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x000263cf) area_vitu2_query_pane_g

0xcf1d,	// (0x0002385e) area_vitu2_query_pane_t1_ParamLimits

0xcf1d,	// (0x0002385e) area_vitu2_query_pane_t1

0xcf31,	// (0x00023872) area_vitu2_query_pane_t2_ParamLimits

0xcf31,	// (0x00023872) area_vitu2_query_pane_t2

0xcf45,	// (0x00023886) area_vitu2_query_pane_t3_ParamLimits

0xcf45,	// (0x00023886) area_vitu2_query_pane_t3

0x45d7,	// (0x0001af18) area_vitu2_query_pane_t4_ParamLimits

0x45d7,	// (0x0001af18) area_vitu2_query_pane_t4

0x45ff,	// (0x0001af40) area_vitu2_query_pane_t5_ParamLimits

0x45ff,	// (0x0001af40) area_vitu2_query_pane_t5

0x4627,	// (0x0001af68) area_vitu2_query_pane_t6_ParamLimits

0x4627,	// (0x0001af68) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x000263d4) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x000263d4) area_vitu2_query_pane_t

0xcf6d,	// (0x000238ae) bg_button_pane_cp018

0xcf7b,	// (0x000238bc) bg_button_pane_cp021

0xcf87,	// (0x000238c8) bg_button_pane_cp022

0xcf98,	// (0x000238d9) input_focus_pane_cp09

0xa114,	// (0x00020a55) aid_size_touch_mv_arrow_left

0xa13d,	// (0x00020a7e) aid_size_touch_mv_arrow_right

0xc8e3,	// (0x00023224) main_cset_slider_pane_g16_ParamLimits

0xc8e3,	// (0x00023224) main_cset_slider_pane_g16

0xc8f1,	// (0x00023232) main_cset_slider_pane_g17_ParamLimits

0xc8f1,	// (0x00023232) main_cset_slider_pane_g17

0xceb3,	// (0x000237f4) cell_cam4_burst_pane_g1_ParamLimits

0x03c2,	// (0x00016d03) compa_mode_pane

0xcad8,	// (0x00023419) popup_vtel_slider_window_g3_ParamLimits

0xcad8,	// (0x00023419) popup_vtel_slider_window_g3

0xcaec,	// (0x0002342d) popup_vtel_slider_window_g4_ParamLimits

0xcaec,	// (0x0002342d) popup_vtel_slider_window_g4

0xcb00,	// (0x00023441) popup_vtel_slider_window_t1_ParamLimits

0xcb00,	// (0x00023441) popup_vtel_slider_window_t1

0x03c2,	// (0x00016d03) main_cl_pane

0x2e1f,	// (0x00019760) popup_imed_adjust2_window_ParamLimits

0x2df7,	// (0x00019738) bg_tb_trans_pane_cp05_ParamLimits

0x3808,	// (0x0001a149) popup_imed_adjust2_window_g1_ParamLimits

0x3817,	// (0x0001a158) popup_imed_adjust2_window_g2_ParamLimits

0x3817,	// (0x0001a158) popup_imed_adjust2_window_g2

0x3823,	// (0x0001a164) popup_imed_adjust2_window_g3_ParamLimits

0x3823,	// (0x0001a164) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0002613f) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0002613f) popup_imed_adjust2_window_g

0x382f,	// (0x0001a170) popup_imed_adjust2_window_t1_ParamLimits

0x3847,	// (0x0001a188) slider_imed_adjust_pane_ParamLimits

0x385b,	// (0x0001a19c) slider_imed_adjust_pane_g1_ParamLimits

0x386b,	// (0x0001a1ac) slider_imed_adjust_pane_g2_ParamLimits

0x387b,	// (0x0001a1bc) slider_imed_adjust_pane_g3_ParamLimits

0x388c,	// (0x0001a1cd) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x00026146) slider_imed_adjust_pane_g_ParamLimits

0x7a93,	// (0x0001e3d4) aid_touch_area_cam4_ParamLimits

0x7a93,	// (0x0001e3d4) aid_touch_area_cam4

0x7aa3,	// (0x0001e3e4) battery_pane_cp01

0x7b2a,	// (0x0001e46b) main_camera4_pane_g6_ParamLimits

0x7b2a,	// (0x0001e46b) main_camera4_pane_g6

0x7b48,	// (0x0001e489) main_camera4_pane_t2_ParamLimits

0x7b48,	// (0x0001e489) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00026249) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00026249) main_camera4_pane_t

0x7bb9,	// (0x0001e4fa) aid_touch_area_vid4_ParamLimits

0x7bb9,	// (0x0001e4fa) aid_touch_area_vid4

0x7bf9,	// (0x0001e53a) main_video4_pane_g5_ParamLimits

0x7bf9,	// (0x0001e53a) main_video4_pane_g5

0x7c1b,	// (0x0001e55c) vid4_progress_pane_ParamLimits

0x7c1b,	// (0x0001e55c) vid4_progress_pane

0x4204,	// (0x0001ab45) main_cset_slider_pane_g18_ParamLimits

0x4204,	// (0x0001ab45) main_cset_slider_pane_g18

0x4495,	// (0x0001add6) cell_cam4_burst_pane_g2_ParamLimits

0x4495,	// (0x0001add6) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x000263a8) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x000263a8) cell_cam4_burst_pane_g

0xcfa9,	// (0x000238ea) bg_cl_pane_ParamLimits

0xcfa9,	// (0x000238ea) bg_cl_pane

0xcfb5,	// (0x000238f6) cl_header_pane_ParamLimits

0xcfb5,	// (0x000238f6) cl_header_pane

0xcfc1,	// (0x00023902) cl_listscroll_pane_ParamLimits

0xcfc1,	// (0x00023902) cl_listscroll_pane

0x4673,	// (0x0001afb4) bg_cl_pane_g1

0x467b,	// (0x0001afbc) bg_cl_pane_g2

0x4683,	// (0x0001afc4) bg_cl_pane_g3

0x468b,	// (0x0001afcc) bg_cl_pane_g4

0x4693,	// (0x0001afd4) bg_cl_pane_g5

0x469b,	// (0x0001afdc) bg_cl_pane_g6

0x46a3,	// (0x0001afe4) bg_cl_pane_g7

0x46ab,	// (0x0001afec) bg_cl_pane_g8

0x46b3,	// (0x0001aff4) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x000263e3) bg_cl_pane_g

0xcfcd,	// (0x0002390e) aid_height_cl_leading_ParamLimits

0xcfcd,	// (0x0002390e) aid_height_cl_leading

0xcfd9,	// (0x0002391a) aid_height_cl_text_ParamLimits

0xcfd9,	// (0x0002391a) aid_height_cl_text

0x3ac2,	// (0x0001a403) bg_cl_header_pane_ParamLimits

0x3ac2,	// (0x0001a403) bg_cl_header_pane

0xcff1,	// (0x00023932) cl_header_pane_g1_ParamLimits

0xcff1,	// (0x00023932) cl_header_pane_g1

0xcffe,	// (0x0002393f) cl_header_pane_t1_ParamLimits

0xcffe,	// (0x0002393f) cl_header_pane_t1

0x46bb,	// (0x0001affc) cl_list_pane

0x41d7,	// (0x0001ab18) hc_scroll_pane_cp01

0x10f1,	// (0x00017a32) bg_cl_header_pane_g1

0x40bd,	// (0x0001a9fe) bg_cl_header_pane_g2

0x1111,	// (0x00017a52) bg_cl_header_pane_g3

0x40cd,	// (0x0001aa0e) bg_cl_header_pane_g4

0x40c5,	// (0x0001aa06) bg_cl_header_pane_g5

0x436a,	// (0x0001acab) bg_cl_header_pane_g6

0x40e5,	// (0x0001aa26) bg_cl_header_pane_g7

0x40ed,	// (0x0001aa2e) bg_cl_header_pane_g8

0x40dd,	// (0x0001aa1e) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x000263f6) bg_cl_header_pane_g

0xd010,	// (0x00023951) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd010,	// (0x00023951) hc_cl_list_double_graphic_heading_pane

0xd021,	// (0x00023962) hc_cl_list_single_graphic_pane_ParamLimits

0xd021,	// (0x00023962) hc_cl_list_single_graphic_pane

0xd03a,	// (0x0002397b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd03a,	// (0x0002397b) hc_cl_list_single_graphic_pane_g1

0xd046,	// (0x00023987) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd046,	// (0x00023987) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00026409) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00026409) hc_cl_list_single_graphic_pane_g

0xd05a,	// (0x0002399b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd05a,	// (0x0002399b) hc_cl_list_single_graphic_pane_t1

0xd03a,	// (0x0002397b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd03a,	// (0x0002397b) hc_cl_list_double_graphic_heading_pane_g1

0xd06f,	// (0x000239b0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd06f,	// (0x000239b0) hc_cl_list_double_graphic_heading_pane_g2

0xd083,	// (0x000239c4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd083,	// (0x000239c4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0002640e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0002640e) hc_cl_list_double_graphic_heading_pane_g

0xd097,	// (0x000239d8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd097,	// (0x000239d8) hc_cl_list_double_graphic_heading_pane_t1

0xd0ac,	// (0x000239ed) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd0ac,	// (0x000239ed) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00026415) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00026415) hc_cl_list_double_graphic_heading_pane_t

0x814f,	// (0x0001ea90) vid4_progress_pane_g1

0x815f,	// (0x0001eaa0) vid4_progress_pane_g2

0x140e,	// (0x00017d4f) vid4_progress_pane_g3

0x816f,	// (0x0001eab0) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0002641a) vid4_progress_pane_g

0x818d,	// (0x0001eace) vid4_progress_pane_t1

0x81a2,	// (0x0001eae3) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00026425) vid4_progress_pane_t

0x81cd,	// (0x0001eb0e) wait_bar_pane_cp07

0x30f0,	// (0x00019a31) blid_firmament_pane_ParamLimits

0x3133,	// (0x00019a74) popup_blid_sat_info2_window_g1

0x3157,	// (0x00019a98) popup_blid_sat_info2_window_t3

0x3165,	// (0x00019aa6) popup_blid_sat_info2_window_t4

0x3173,	// (0x00019ab4) popup_blid_sat_info2_window_t5

0x3181,	// (0x00019ac2) popup_blid_sat_info2_window_t6

0x3191,	// (0x00019ad2) popup_blid_sat_info2_window_t7

0x319f,	// (0x00019ae0) popup_blid_sat_info2_window_t8

0x31ad,	// (0x00019aee) popup_blid_sat_info2_window_t9

0x31bb,	// (0x00019afc) popup_blid_sat_info2_window_t10

0x327d,	// (0x00019bbe) aid_firma_cardinal_ParamLimits

0x3291,	// (0x00019bd2) blid_firmament_pane_t1_ParamLimits

0x32a8,	// (0x00019be9) blid_firmament_pane_t2_ParamLimits

0x32bf,	// (0x00019c00) blid_firmament_pane_t3_ParamLimits

0x32d6,	// (0x00019c17) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00026038) blid_firmament_pane_t_ParamLimits

0x32ed,	// (0x00019c2e) blid_sat_info_pane_ParamLimits

0x0432,	// (0x00016d73) main_cam_set_pane_ParamLimits

0xbfe0,	// (0x00022921) aid_size_cell_colour_35_ParamLimits

0xbffa,	// (0x0002293b) aid_size_cell_colour_112_ParamLimits

0xc011,	// (0x00022952) aid_size_cell_effect_ParamLimits

0x0432,	// (0x00016d73) bg_tb_trans_pane_cp02_ParamLimits

0x143c,	// (0x00017d7d) heading_imed_pane_ParamLimits

0xc02b,	// (0x0002296c) listscroll_imed_pane_ParamLimits

0x2429,	// (0x00018d6a) popup_call2_audio_first_window_g5_ParamLimits

0x2429,	// (0x00018d6a) popup_call2_audio_first_window_g5

0x791e,	// (0x0001e25f) aid_size_touch_image3_arrow_left_ParamLimits

0x791e,	// (0x0001e25f) aid_size_touch_image3_arrow_left

0x7934,	// (0x0001e275) aid_size_touch_image3_arrow_right_ParamLimits

0x7934,	// (0x0001e275) aid_size_touch_image3_arrow_right

0x81b8,	// (0x0001eaf9) vid4_progress_pane_t3

0xc2c8,	// (0x00022c09) main_hwr_training_symbol_option_pane_ParamLimits

0xc2c8,	// (0x00022c09) main_hwr_training_symbol_option_pane

0x3b03,	// (0x0001a444) popup_hwr_training_preview_window_ParamLimits

0x3b03,	// (0x0001a444) popup_hwr_training_preview_window

0x7644,	// (0x0001df85) hwr_training_navi_pane_g5_ParamLimits

0x7644,	// (0x0001df85) hwr_training_navi_pane_g5

0x40ab,	// (0x0001a9ec) popup_char_count_window

0x8082,	// (0x0001e9c3) bg_popup_sub_pane_cp20_ParamLimits

0x8090,	// (0x0001e9d1) list_vitu2_match_list_pane_ParamLimits

0x809c,	// (0x0001e9dd) vitu2_page_scroll_pane_ParamLimits

0x809c,	// (0x0001e9dd) vitu2_page_scroll_pane

0x47b6,	// (0x0001b0f7) list_single_hwr_training_symbol_option_pane_ParamLimits

0x47b6,	// (0x0001b0f7) list_single_hwr_training_symbol_option_pane

0x47c9,	// (0x0001b10a) list_single_hwr_training_symbol_option_pane_g1

0x47d1,	// (0x0001b112) list_single_hwr_training_symbol_option_pane_t1

0x47df,	// (0x0001b120) bg_button_pane_cp023

0x47e8,	// (0x0001b129) bg_button_pane_cp024

0xd0c1,	// (0x00023a02) vitu2_page_scroll_pane_g1

0xd0c9,	// (0x00023a0a) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0002642c) vitu2_page_scroll_pane_g

0xd0d1,	// (0x00023a12) vitu2_page_scroll_pane_t1

0x481b,	// (0x0001b15c) popup_char_count_window_g1

0x4824,	// (0x0001b165) popup_char_count_window_g2

0x482d,	// (0x0001b16e) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00026431) popup_char_count_window_g

0x4836,	// (0x0001b177) popup_char_count_window_t1

0x03c2,	// (0x00016d03) main_vded2_pane

0x37f4,	// (0x0001a135) aid_size_cell_imed_line

0x37fe,	// (0x0001a13f) grid_imed_line_width_pane

0x7c92,	// (0x0001e5d3) vid4_indicators_pane_g4

0x4844,	// (0x0001b185) cell_imed_line_width_pane_ParamLimits

0x4844,	// (0x0001b185) cell_imed_line_width_pane

0x4858,	// (0x0001b199) cell_imed_line_width_pane_g1

0x4861,	// (0x0001b1a2) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00026438) cell_imed_line_width_pane_g

0xd0e0,	// (0x00023a21) main_vded2_pane_g1_ParamLimits

0xd0e0,	// (0x00023a21) main_vded2_pane_g1

0xd0ed,	// (0x00023a2e) main_vded2_pane_g2_ParamLimits

0xd0ed,	// (0x00023a2e) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0002643d) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0002643d) main_vded2_pane_g

0xd0fb,	// (0x00023a3c) vded2_slider_pane_ParamLimits

0xd0fb,	// (0x00023a3c) vded2_slider_pane

0xd108,	// (0x00023a49) aid_size_touch_vded2_end

0xd112,	// (0x00023a53) aid_size_touch_vded2_playhead

0x4869,	// (0x0001b1aa) aid_size_touch_vded2_start

0x4871,	// (0x0001b1b2) vded2_slider_bg_pane

0x487a,	// (0x0001b1bb) vded2_slider_pane_g1

0x4883,	// (0x0001b1c4) vded2_slider_pane_g2

0xd11a,	// (0x00023a5b) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00026442) vded2_slider_pane_g

0x488b,	// (0x0001b1cc) vded2_slider_bg_pane_g1

0x4894,	// (0x0001b1d5) vded2_slider_bg_pane_g2

0x489d,	// (0x0001b1de) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x00026449) vded2_slider_bg_pane_g

0xa76a,	// (0x000210ab) aid_postcard_touch_down_pane_ParamLimits

0xa76a,	// (0x000210ab) aid_postcard_touch_down_pane

0xa77a,	// (0x000210bb) aid_postcard_touch_up_pane_ParamLimits

0xa77a,	// (0x000210bb) aid_postcard_touch_up_pane

0x03c2,	// (0x00016d03) main_blid2_pane

0x2e05,	// (0x00019746) popup_blid2_search_window

0x03c2,	// (0x00016d03) blid2_gps_pane

0x03c2,	// (0x00016d03) blid2_navig_pane

0x03c2,	// (0x00016d03) blid2_search_pane

0x03c2,	// (0x00016d03) blid2_tripm_pane

0xd123,	// (0x00023a64) blid2_search_pane_g1_ParamLimits

0xd123,	// (0x00023a64) blid2_search_pane_g1

0xd133,	// (0x00023a74) blid2_search_pane_t1_ParamLimits

0xd133,	// (0x00023a74) blid2_search_pane_t1

0xd145,	// (0x00023a86) aid_size_cell_blid2_gps_ParamLimits

0xd145,	// (0x00023a86) aid_size_cell_blid2_gps

0xd155,	// (0x00023a96) blid2_gps_pane_g1_ParamLimits

0xd155,	// (0x00023a96) blid2_gps_pane_g1

0xd161,	// (0x00023aa2) grid_blid2_satellite_pane_ParamLimits

0xd161,	// (0x00023aa2) grid_blid2_satellite_pane

0xd171,	// (0x00023ab2) blid2_navig_pane_g1_ParamLimits

0xd171,	// (0x00023ab2) blid2_navig_pane_g1

0xd17d,	// (0x00023abe) blid2_navig_pane_t1_ParamLimits

0xd17d,	// (0x00023abe) blid2_navig_pane_t1

0xd18f,	// (0x00023ad0) blid2_navig_pane_t2_ParamLimits

0xd18f,	// (0x00023ad0) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00026450) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00026450) blid2_navig_pane_t

0xd1a1,	// (0x00023ae2) blid2_navig_ring_pane_ParamLimits

0xd1a1,	// (0x00023ae2) blid2_navig_ring_pane

0xd1b1,	// (0x00023af2) blid2_speed_pane_ParamLimits

0xd1b1,	// (0x00023af2) blid2_speed_pane

0xd1bd,	// (0x00023afe) blid2_tripm_pane_g1_ParamLimits

0xd1bd,	// (0x00023afe) blid2_tripm_pane_g1

0xd1cd,	// (0x00023b0e) blid2_tripm_pane_g2_ParamLimits

0xd1cd,	// (0x00023b0e) blid2_tripm_pane_g2

0xd1d9,	// (0x00023b1a) blid2_tripm_pane_g3_ParamLimits

0xd1d9,	// (0x00023b1a) blid2_tripm_pane_g3

0xd1e5,	// (0x00023b26) blid2_tripm_pane_g4_ParamLimits

0xd1e5,	// (0x00023b26) blid2_tripm_pane_g4

0xd1f1,	// (0x00023b32) blid2_tripm_pane_g5_ParamLimits

0xd1f1,	// (0x00023b32) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x00026455) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x00026455) blid2_tripm_pane_g

0xd20d,	// (0x00023b4e) blid2_tripm_pane_t1_ParamLimits

0xd20d,	// (0x00023b4e) blid2_tripm_pane_t1

0xd221,	// (0x00023b62) blid2_tripm_pane_t2_ParamLimits

0xd221,	// (0x00023b62) blid2_tripm_pane_t2

0xd233,	// (0x00023b74) blid2_tripm_pane_t3_ParamLimits

0xd233,	// (0x00023b74) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x00026462) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x00026462) blid2_tripm_pane_t

0xd265,	// (0x00023ba6) cell_blid2_satellite_pane_ParamLimits

0xd265,	// (0x00023ba6) cell_blid2_satellite_pane

0xd27f,	// (0x00023bc0) cell_blid2_satellite_pane_g1

0x48a6,	// (0x0001b1e7) cell_blid2_satellite_pane_t1

0x32fd,	// (0x00019c3e) blid2_speed_pane_g1

0x48b4,	// (0x0001b1f5) blid2_speed_pane_t1

0x48c2,	// (0x0001b203) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0002646b) blid2_speed_pane_t

0x32fd,	// (0x00019c3e) blid2_navig_ring_pane_g1

0xd288,	// (0x00023bc9) blid2_navig_ring_pane_g2

0xd290,	// (0x00023bd1) blid2_navig_ring_pane_g3

0xd298,	// (0x00023bd9) blid2_navig_ring_pane_g4

0xd2a0,	// (0x00023be1) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x00026470) blid2_navig_ring_pane_g

0x03c2,	// (0x00016d03) bg_popup_window_pane_cp011

0x48d0,	// (0x0001b211) popup_blid2_search_window_g1

0x48d8,	// (0x0001b219) popup_blid2_search_window_t1

0x48e6,	// (0x0001b227) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0002647b) popup_blid2_search_window_t

0x1000,	// (0x00017941) main_browser_pane_g1

0x0ba7,	// (0x000174e8) main_browser_pane_ParamLimits

0x7c47,	// (0x0001e588) bg_button_pane_cp011_ParamLimits

0x7fa4,	// (0x0001e8e5) cell_vitu2_function_pane_g1_ParamLimits

0x2df7,	// (0x00019738) bg_popup_sub_pane_cp22_ParamLimits

0xcc5e,	// (0x0002359f) input_focus_pane_cp08_ParamLimits

0xcc75,	// (0x000235b6) popup_vitu2_query_button_pane_ParamLimits

0xcc75,	// (0x000235b6) popup_vitu2_query_button_pane

0xcc86,	// (0x000235c7) popup_vitu2_query_input_button_pane

0x43df,	// (0x0001ad20) popup_vitu2_query_window_g1_ParamLimits

0xcc90,	// (0x000235d1) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0002637c) popup_vitu2_query_window_g_ParamLimits

0x03c2,	// (0x00016d03) bg_button_pane_cp026

0xd2a8,	// (0x00023be9) popup_vitu2_query_input_button_pane_g1

0x03c2,	// (0x00016d03) bg_button_pane_cp025

0x48f4,	// (0x0001b235) popup_vitu2_query_button_pane_t1

0xb5c2,	// (0x00021f03) main_mp3_pane_t6

0xb5d2,	// (0x00021f13) popup_slider_window_cp01

0x7b68,	// (0x0001e4a9) cam4_battery_pane

0x7c55,	// (0x0001e596) cam4_battery_pane_cp02

0x8147,	// (0x0001ea88) cam4_battery_pane_cp01

0x8147,	// (0x0001ea88) cam4_battery_pane_cp03

0x4902,	// (0x0001b243) cam4_battery_pane_g1

0x32fd,	// (0x00019c3e) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00026480) cam4_battery_pane_g

0x31c9,	// (0x00019b0a) popup_blid_sat_info2_window_t11

0xa114,	// (0x00020a55) aid_size_touch_mv_arrow_left_ParamLimits

0xa13d,	// (0x00020a7e) aid_size_touch_mv_arrow_right_ParamLimits

0x189a,	// (0x000181db) navi_pane_g1_ParamLimits

0xa166,	// (0x00020aa7) navi_pane_g2_ParamLimits

0xa194,	// (0x00020ad5) navi_pane_g3_ParamLimits

0xf409,	// (0x00025d4a) navi_pane_g_ParamLimits

0xa1ee,	// (0x00020b2f) navi_pane_mv_t1_ParamLimits

0xc037,	// (0x00022978) grid_imed_effect_pane_ParamLimits

0x8f2f,	// (0x0001f870) aid_placing_vt_slider_lsc

0x0f51,	// (0x00017892) aid_placing_vt_slider_prt

0x0432,	// (0x00016d73) bg_tb_trans_pane_cp01_ParamLimits

0x3489,	// (0x00019dca) popup_image_details_window_g1_ParamLimits

0x349c,	// (0x00019ddd) popup_image_details_window_g2_ParamLimits

0x34b1,	// (0x00019df2) popup_image_details_window_g3_ParamLimits

0x34b1,	// (0x00019df2) popup_image_details_window_g3

0xf73c,	// (0x0002607d) popup_image_details_window_g_ParamLimits

0x34c5,	// (0x00019e06) popup_image_details_window_t1_ParamLimits

0x34d7,	// (0x00019e18) popup_image_details_window_t2_ParamLimits

0x34f0,	// (0x00019e31) popup_image_details_window_t3_ParamLimits

0x3504,	// (0x00019e45) popup_image_details_window_t4_ParamLimits

0x351f,	// (0x00019e60) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00026084) popup_image_details_window_t_ParamLimits

0xcfe5,	// (0x00023926) cl_header_name_pane_ParamLimits

0xcfe5,	// (0x00023926) cl_header_name_pane

0xd2b0,	// (0x00023bf1) cl_header_name_pane_t1_ParamLimits

0xd2b0,	// (0x00023bf1) cl_header_name_pane_t1

0xd2c7,	// (0x00023c08) cl_header_name_pane_t2_ParamLimits

0xd2c7,	// (0x00023c08) cl_header_name_pane_t2

0xd2f1,	// (0x00023c32) cl_header_name_pane_t3_ParamLimits

0xd2f1,	// (0x00023c32) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x00026485) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x00026485) cl_header_name_pane_t

0xa1bf,	// (0x00020b00) navi_pane_mv_g2_ParamLimits

0x4039,	// (0x0001a97a) field_vitu2_entry_pane_g1_ParamLimits

0x4045,	// (0x0001a986) field_vitu2_entry_pane_g2_ParamLimits

0x4051,	// (0x0001a992) field_vitu2_entry_pane_g3_ParamLimits

0x4051,	// (0x0001a992) field_vitu2_entry_pane_g3

0xf93a,	// (0x0002627b) field_vitu2_entry_pane_g_ParamLimits

0x7e79,	// (0x0001e7ba) cell_vitu2_itu_pane_g1_ParamLimits

0x7e89,	// (0x0001e7ca) cell_vitu2_itu_pane_g2_ParamLimits

0x7e89,	// (0x0001e7ca) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00026287) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00026287) cell_vitu2_itu_pane_g

0x7c47,	// (0x0001e588) bg_vkb2_func_pane_cp05_ParamLimits

0x7c47,	// (0x0001e588) bg_vkb2_func_pane_cp05

0x7c47,	// (0x0001e588) bg_vkb2_func_pane_cp03

0x7c47,	// (0x0001e588) bg_vkb2_func_pane_cp04

0x7c47,	// (0x0001e588) bg_vkb2_func_pane_cp10_ParamLimits

0x7c47,	// (0x0001e588) bg_vkb2_func_pane_cp10

0xcf87,	// (0x000238c8) bg_vkb2_func_pane_cp08

0xcf6d,	// (0x000238ae) bg_vkb2_func_pane_cp06

0xcf7b,	// (0x000238bc) bg_vkb2_func_pane_cp07

0x47f1,	// (0x0001b132) bg_vkb2_func_pane_cp11_ParamLimits

0x47f1,	// (0x0001b132) bg_vkb2_func_pane_cp11

0x4806,	// (0x0001b147) bg_vkb2_func_pane_cp12_ParamLimits

0x4806,	// (0x0001b147) bg_vkb2_func_pane_cp12

0x03c2,	// (0x00016d03) bg_vkb2_func_pane_cp09

0x40bd,	// (0x0001a9fe) bg_vkb2_func_pane_g1

0x1111,	// (0x00017a52) bg_vkb2_func_pane_g2

0x40c5,	// (0x0001aa06) bg_vkb2_func_pane_g3

0x40cd,	// (0x0001aa0e) bg_vkb2_func_pane_g4

0x436a,	// (0x0001acab) bg_vkb2_func_pane_g5

0x40e5,	// (0x0001aa26) bg_vkb2_func_pane_g6

0x40ed,	// (0x0001aa2e) bg_vkb2_func_pane_g7

0x40dd,	// (0x0001aa1e) bg_vkb2_func_pane_g8

0x10f1,	// (0x00017a32) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0002648c) bg_vkb2_func_pane_g

0xd1ff,	// (0x00023b40) blid2_tripm_pane_g6_ParamLimits

0xd1ff,	// (0x00023b40) blid2_tripm_pane_g6

0x3e10,	// (0x0001a751) mp4_progress_pane_g1

0xd259,	// (0x00023b9a) blid2_tripm_values_pane_ParamLimits

0xd259,	// (0x00023b9a) blid2_tripm_values_pane

0xd316,	// (0x00023c57) blid2_tripm_values_pane_t1

0xd324,	// (0x00023c65) blid2_tripm_values_pane_t2

0xd332,	// (0x00023c73) blid2_tripm_values_pane_t3

0xd340,	// (0x00023c81) blid2_tripm_values_pane_t4

0xd34e,	// (0x00023c8f) blid2_tripm_values_pane_t5

0xd35c,	// (0x00023c9d) blid2_tripm_values_pane_t6

0xd36a,	// (0x00023cab) blid2_tripm_values_pane_t7

0xd378,	// (0x00023cb9) blid2_tripm_values_pane_t8

0xd386,	// (0x00023cc7) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0002649f) blid2_tripm_values_pane_t

0x8f6f,	// (0x0001f8b0) call_video_pane_t1_ParamLimits

0x8f90,	// (0x0001f8d1) call_video_pane_t2_ParamLimits

0xf292,	// (0x00025bd3) call_video_pane_t_ParamLimits

0xa708,	// (0x00021049) msg_header_pane_g1_ParamLimits

0x1add,	// (0x0001841e) msg_header_pane_g2_ParamLimits

0x1add,	// (0x0001841e) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00025ded) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00025ded) msg_header_pane_g

0x0ba7,	// (0x000174e8) main_clock2_pane_ParamLimits

0xbe3f,	// (0x00022780) grid_clock2_toolbar_pane_ParamLimits

0xbe3f,	// (0x00022780) grid_clock2_toolbar_pane

0xbe3f,	// (0x00022780) listscroll_clock2_pane_ParamLimits

0xbe3f,	// (0x00022780) listscroll_clock2_pane

0xbeec,	// (0x0002282d) main_clock2_pane_t3_ParamLimits

0xbeec,	// (0x0002282d) main_clock2_pane_t3

0xbefe,	// (0x0002283f) main_clock2_pane_t4_ParamLimits

0xbefe,	// (0x0002283f) main_clock2_pane_t4

0x490c,	// (0x0001b24d) cell_clock2_toolbar_pane

0x4914,	// (0x0001b255) cell_clock2_toolbar_pane_cp01

0x4914,	// (0x0001b255) cell_clock2_toolbar_pane_cp02

0x491c,	// (0x0001b25d) cell_clock2_toolbar_pane_cp03

0x4924,	// (0x0001b265) list_clock2_pane

0x17f1,	// (0x00018132) scroll_pane_cp10

0x492c,	// (0x0001b26d) list_single_clock2_pane_ParamLimits

0x492c,	// (0x0001b26d) list_single_clock2_pane

0x193a,	// (0x0001827b) list_highlight_pane_cp08

0x4939,	// (0x0001b27a) list_single_clock2_pane_t1

0x4947,	// (0x0001b288) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x000264b2) list_single_clock2_pane_t

0x03c2,	// (0x00016d03) bg_button_pane_cp10

0x4955,	// (0x0001b296) cell_clock2_toolbar_pane_g1

0x7250,	// (0x0001db91) aid_main_viewer_pane_g1_ParamLimits

0x7250,	// (0x0001db91) aid_main_viewer_pane_g1

0x725c,	// (0x0001db9d) aid_main_viewer_pane_g2_ParamLimits

0x725c,	// (0x0001db9d) aid_main_viewer_pane_g2

0xa726,	// (0x00021067) aid_main_viewer_pane_g3_ParamLimits

0xa726,	// (0x00021067) aid_main_viewer_pane_g3

0xa737,	// (0x00021078) aid_main_viewer_pane_g4_ParamLimits

0xa737,	// (0x00021078) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00025dfe) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00025dfe) aid_main_viewer_pane_g

0xae75,	// (0x000217b6) main_calc_pane_ParamLimits

0xae82,	// (0x000217c3) main_dialer2_pane_ParamLimits

0x03c2,	// (0x00016d03) main_cam6_pane

0x03c2,	// (0x00016d03) main_vid6_pane

0xbe4b,	// (0x0002278c) listscroll_gen_pane_cp06_ParamLimits

0xbe4b,	// (0x0002278c) listscroll_gen_pane_cp06

0xbf10,	// (0x00022851) main_clock2_pane_t5_ParamLimits

0xbf10,	// (0x00022851) main_clock2_pane_t5

0xbf59,	// (0x0002289a) aid_call2_pane_cp10_ParamLimits

0xbf6b,	// (0x000228ac) aid_call_pane_cp10_ParamLimits

0x186f,	// (0x000181b0) popup_clock_analogue_window_cp10_g1_ParamLimits

0x186f,	// (0x000181b0) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbf7d,	// (0x000228be) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbf7d,	// (0x000228be) popup_clock_analogue_window_cp10_g4_ParamLimits

0x186f,	// (0x000181b0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00026134) popup_clock_analogue_window_cp10_g_ParamLimits

0xbf8f,	// (0x000228d0) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc3a5,	// (0x00022ce6) cell_dialer2_keypad_pane_g2_ParamLimits

0xc3a5,	// (0x00022ce6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0002621a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0002621a) cell_dialer2_keypad_pane_g

0xc3c1,	// (0x00022d02) cell_dialer2_keypad_pane_t1

0xc7cf,	// (0x00023110) main_cset_text2_pane_ParamLimits

0xc7cf,	// (0x00023110) main_cset_text2_pane

0x45cb,	// (0x0001af0c) area_vitu2_query_pane_g1_ParamLimits

0xcf0c,	// (0x0002384d) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x000263cf) area_vitu2_query_pane_g_ParamLimits

0x464f,	// (0x0001af90) area_vitu2_query_pane_t7_ParamLimits

0x464f,	// (0x0001af90) area_vitu2_query_pane_t7

0xcf6d,	// (0x000238ae) bg_button_pane_cp018_ParamLimits

0xcf7b,	// (0x000238bc) bg_button_pane_cp021_ParamLimits

0xcf87,	// (0x000238c8) bg_button_pane_cp022_ParamLimits

0xcf87,	// (0x000238c8) bg_vkb2_func_pane_cp08_ParamLimits

0xcf6d,	// (0x000238ae) bg_vkb2_func_pane_cp06_ParamLimits

0xcf7b,	// (0x000238bc) bg_vkb2_func_pane_cp07_ParamLimits

0xcf98,	// (0x000238d9) input_focus_pane_cp09_ParamLimits

0x81df,	// (0x0001eb20) cam6_autofocus_pane_ParamLimits

0x81df,	// (0x0001eb20) cam6_autofocus_pane

0x8201,	// (0x0001eb42) cam6_image_uncrop_pane_ParamLimits

0x8201,	// (0x0001eb42) cam6_image_uncrop_pane

0x822e,	// (0x0001eb6f) cam6_indi_pane_ParamLimits

0x822e,	// (0x0001eb6f) cam6_indi_pane

0x8248,	// (0x0001eb89) cam6_mode_pane_ParamLimits

0x8248,	// (0x0001eb89) cam6_mode_pane

0x825c,	// (0x0001eb9d) cam6_timer_pane_ParamLimits

0x825c,	// (0x0001eb9d) cam6_timer_pane

0x8268,	// (0x0001eba9) cam6_zoom_pane_ParamLimits

0x8268,	// (0x0001eba9) cam6_zoom_pane

0xd394,	// (0x00023cd5) cam6_mode_pane_g1_ParamLimits

0xd394,	// (0x00023cd5) cam6_mode_pane_g1

0xd3a0,	// (0x00023ce1) cam6_mode_pane_g2_ParamLimits

0xd3a0,	// (0x00023ce1) cam6_mode_pane_g2

0xd3ac,	// (0x00023ced) cam6_mode_pane_g3_ParamLimits

0xd3ac,	// (0x00023ced) cam6_mode_pane_g3

0xd3b8,	// (0x00023cf9) cam6_mode_pane_g4_ParamLimits

0xd3b8,	// (0x00023cf9) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x000264b7) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x000264b7) cam6_mode_pane_g

0x496b,	// (0x0001b2ac) bg_tb_trans_pane_cp08_ParamLimits

0x496b,	// (0x0001b2ac) bg_tb_trans_pane_cp08

0x4979,	// (0x0001b2ba) cam6_battery_pane_ParamLimits

0x4979,	// (0x0001b2ba) cam6_battery_pane

0x498f,	// (0x0001b2d0) cam6_indi_pane_g1_ParamLimits

0x498f,	// (0x0001b2d0) cam6_indi_pane_g1

0x49a1,	// (0x0001b2e2) cam6_indi_pane_g2_ParamLimits

0x49a1,	// (0x0001b2e2) cam6_indi_pane_g2

0x49b3,	// (0x0001b2f4) cam6_indi_pane_g3_ParamLimits

0x49b3,	// (0x0001b2f4) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x000264c0) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x000264c0) cam6_indi_pane_g

0x49c5,	// (0x0001b306) cam6_indi_pane_t1_ParamLimits

0x49c5,	// (0x0001b306) cam6_indi_pane_t1

0xc500,	// (0x00022e41) cam6_autofocus_pane_g1

0xc4f8,	// (0x00022e39) cam6_autofocus_pane_g2

0xc510,	// (0x00022e51) cam6_autofocus_pane_g3

0xc508,	// (0x00022e49) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x000264c7) cam6_autofocus_pane_g

0x49eb,	// (0x0001b32c) cam6_timer_pane_g1

0x49f3,	// (0x0001b334) cam6_timer_pane_t1

0x4a01,	// (0x0001b342) cam6_zoom_cont_pane

0x4a09,	// (0x0001b34a) cam6_zoom_pane_g1

0x4a11,	// (0x0001b352) cam6_zoom_pane_g2

0xd3c4,	// (0x00023d05) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x000264d0) cam6_zoom_pane_g

0x32fd,	// (0x00019c3e) cam6_battery_pane_g1

0x32fd,	// (0x00019c3e) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00026041) cam6_battery_pane_g

0x4a19,	// (0x0001b35a) cam6_zoom_cont_pane_g1

0x4a22,	// (0x0001b363) cam6_zoom_cont_pane_g2

0x4a2b,	// (0x0001b36c) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x000264d7) cam6_zoom_cont_pane_g

0xd3e1,	// (0x00023d22) cam6_mode_pane_cp_ParamLimits

0xd3e1,	// (0x00023d22) cam6_mode_pane_cp

0xd3f5,	// (0x00023d36) cam6_zoom_pane_cp_ParamLimits

0xd3f5,	// (0x00023d36) cam6_zoom_pane_cp

0xd40d,	// (0x00023d4e) vid6_image_uncrop_cif_pane_ParamLimits

0xd40d,	// (0x00023d4e) vid6_image_uncrop_cif_pane

0xd439,	// (0x00023d7a) vid6_image_uncrop_nhd_pane_ParamLimits

0xd439,	// (0x00023d7a) vid6_image_uncrop_nhd_pane

0xd456,	// (0x00023d97) vid6_image_uncrop_vga_pane_ParamLimits

0xd456,	// (0x00023d97) vid6_image_uncrop_vga_pane

0xd475,	// (0x00023db6) vid6_image_uncrop_wvga_pane_ParamLimits

0xd475,	// (0x00023db6) vid6_image_uncrop_wvga_pane

0xd492,	// (0x00023dd3) vid6_indi_pane_ParamLimits

0xd492,	// (0x00023dd3) vid6_indi_pane

0x496b,	// (0x0001b2ac) bg_tb_trans_pane_cp09_ParamLimits

0x496b,	// (0x0001b2ac) bg_tb_trans_pane_cp09

0x4a43,	// (0x0001b384) cam6_battery_pane_cp_ParamLimits

0x4a43,	// (0x0001b384) cam6_battery_pane_cp

0x4a4f,	// (0x0001b390) vid6_indi_pane_g1_ParamLimits

0x4a4f,	// (0x0001b390) vid6_indi_pane_g1

0x4a61,	// (0x0001b3a2) vid6_indi_pane_g2_ParamLimits

0x4a61,	// (0x0001b3a2) vid6_indi_pane_g2

0x4a73,	// (0x0001b3b4) vid6_indi_pane_g3_ParamLimits

0x4a73,	// (0x0001b3b4) vid6_indi_pane_g3

0x4a88,	// (0x0001b3c9) vid6_indi_pane_g4_ParamLimits

0x4a88,	// (0x0001b3c9) vid6_indi_pane_g4

0x4a9d,	// (0x0001b3de) vid6_indi_pane_g5_ParamLimits

0x4a9d,	// (0x0001b3de) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x000264de) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x000264de) vid6_indi_pane_g

0x4ab7,	// (0x0001b3f8) vid6_indi_pane_t1_ParamLimits

0x4ab7,	// (0x0001b3f8) vid6_indi_pane_t1

0x4acd,	// (0x0001b40e) vid6_indi_pane_t2_ParamLimits

0x4acd,	// (0x0001b40e) vid6_indi_pane_t2

0x4af5,	// (0x0001b436) vid6_indi_pane_t3_ParamLimits

0x4af5,	// (0x0001b436) vid6_indi_pane_t3

0x4b1d,	// (0x0001b45e) vid6_indi_pane_t4_ParamLimits

0x4b1d,	// (0x0001b45e) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x000264e9) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x000264e9) vid6_indi_pane_t

0x4b41,	// (0x0001b482) wait_bar_pane_cp08

0xd4b7,	// (0x00023df8) main_cset_text2_pane_t1_ParamLimits

0xd4b7,	// (0x00023df8) main_cset_text2_pane_t1

0xd3cc,	// (0x00023d0d) listscroll_gen_pane_cp06_t1_ParamLimits

0xd3cc,	// (0x00023d0d) listscroll_gen_pane_cp06_t1

0x03c2,	// (0x00016d03) main_cam6_set_pane

0x7b5a,	// (0x0001e49b) bg_tb_trans_pane_cp06_ParamLimits

0x7b70,	// (0x0001e4b1) cam4_indicators_pane_g1_ParamLimits

0x7b81,	// (0x0001e4c2) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x00026257) cam4_indicators_pane_g_ParamLimits

0x7b9f,	// (0x0001e4e0) cam4_indicators_pane_t1_ParamLimits

0x7c47,	// (0x0001e588) bg_tb_trans_pane_cp07_ParamLimits

0x7c5f,	// (0x0001e5a0) vid4_indicators_pane_g1_ParamLimits

0x7c70,	// (0x0001e5b1) vid4_indicators_pane_g2_ParamLimits

0x7c81,	// (0x0001e5c2) vid4_indicators_pane_g3_ParamLimits

0x7c92,	// (0x0001e5d3) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00026269) vid4_indicators_pane_g_ParamLimits

0x7cae,	// (0x0001e5ef) vid4_indicators_pane_t1_ParamLimits

0x814f,	// (0x0001ea90) vid4_progress_pane_g1_ParamLimits

0x815f,	// (0x0001eaa0) vid4_progress_pane_g2_ParamLimits

0x140e,	// (0x00017d4f) vid4_progress_pane_g3_ParamLimits

0x816f,	// (0x0001eab0) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0002641a) vid4_progress_pane_g_ParamLimits

0x818d,	// (0x0001eace) vid4_progress_pane_t1_ParamLimits

0x81a2,	// (0x0001eae3) vid4_progress_pane_t2_ParamLimits

0x81b8,	// (0x0001eaf9) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00026425) vid4_progress_pane_t_ParamLimits

0x81cd,	// (0x0001eb0e) wait_bar_pane_cp07_ParamLimits

0xd4ea,	// (0x00023e2b) main_cam6_set_pane_g2_ParamLimits

0xd4ea,	// (0x00023e2b) main_cam6_set_pane_g2

0xd4f6,	// (0x00023e37) main_cset6_listscroll_pane_ParamLimits

0xd4f6,	// (0x00023e37) main_cset6_listscroll_pane

0xd521,	// (0x00023e62) main_cset6_slider_pane_ParamLimits

0xd521,	// (0x00023e62) main_cset6_slider_pane

0xd52d,	// (0x00023e6e) main_cset6_text2_pane_ParamLimits

0xd52d,	// (0x00023e6e) main_cset6_text2_pane

0x4b50,	// (0x0001b491) main_cset6_text_pane

0x4b58,	// (0x0001b499) main_cset_list_pane_copy1_ParamLimits

0x4b58,	// (0x0001b499) main_cset_list_pane_copy1

0x4b68,	// (0x0001b4a9) scroll_pane_cp028_copy1

0xd540,	// (0x00023e81) cset_list_set_pane_copy1

0xd553,	// (0x00023e94) aid_position_infowindow_above_copy1

0xd55b,	// (0x00023e9c) aid_position_infowindow_below_copy1

0xd563,	// (0x00023ea4) cset_list_set_pane_g1_copy1

0x42b0,	// (0x0001abf1) cset_list_set_pane_g3_copy1_ParamLimits

0x42b0,	// (0x0001abf1) cset_list_set_pane_g3_copy1

0x42bf,	// (0x0001ac00) cset_list_set_pane_t1_copy1_ParamLimits

0x42bf,	// (0x0001ac00) cset_list_set_pane_t1_copy1

0x0432,	// (0x00016d73) list_highlight_pane_cp021_copy1_ParamLimits

0x0432,	// (0x00016d73) list_highlight_pane_cp021_copy1

0x4b71,	// (0x0001b4b2) cset6_slider_pane_ParamLimits

0x4b71,	// (0x0001b4b2) cset6_slider_pane

0x4b9d,	// (0x0001b4de) main_cset6_slider_pane_g1_ParamLimits

0x4b9d,	// (0x0001b4de) main_cset6_slider_pane_g1

0xd56b,	// (0x00023eac) main_cset6_slider_pane_g2_ParamLimits

0xd56b,	// (0x00023eac) main_cset6_slider_pane_g2

0x4bc5,	// (0x0001b506) main_cset6_slider_pane_g3_ParamLimits

0x4bc5,	// (0x0001b506) main_cset6_slider_pane_g3

0xd593,	// (0x00023ed4) main_cset6_slider_pane_g4_ParamLimits

0xd593,	// (0x00023ed4) main_cset6_slider_pane_g4

0xd59f,	// (0x00023ee0) main_cset6_slider_pane_g5_ParamLimits

0xd59f,	// (0x00023ee0) main_cset6_slider_pane_g5

0x41ec,	// (0x0001ab2d) main_cset6_slider_pane_g7_ParamLimits

0x41ec,	// (0x0001ab2d) main_cset6_slider_pane_g7

0x41f8,	// (0x0001ab39) main_cset6_slider_pane_g8_ParamLimits

0x41f8,	// (0x0001ab39) main_cset6_slider_pane_g8

0xd5ad,	// (0x00023eee) main_cset6_slider_pane_g9_ParamLimits

0xd5ad,	// (0x00023eee) main_cset6_slider_pane_g9

0xd5b9,	// (0x00023efa) main_cset6_slider_pane_g10_ParamLimits

0xd5b9,	// (0x00023efa) main_cset6_slider_pane_g10

0xd5c5,	// (0x00023f06) main_cset6_slider_pane_g11_ParamLimits

0xd5c5,	// (0x00023f06) main_cset6_slider_pane_g11

0xd5d1,	// (0x00023f12) main_cset6_slider_pane_g12_ParamLimits

0xd5d1,	// (0x00023f12) main_cset6_slider_pane_g12

0xd5dd,	// (0x00023f1e) main_cset6_slider_pane_g13_ParamLimits

0xd5dd,	// (0x00023f1e) main_cset6_slider_pane_g13

0xd5e9,	// (0x00023f2a) main_cset6_slider_pane_g14_ParamLimits

0xd5e9,	// (0x00023f2a) main_cset6_slider_pane_g14

0xd5f5,	// (0x00023f36) main_cset6_slider_pane_g15_ParamLimits

0xd5f5,	// (0x00023f36) main_cset6_slider_pane_g15

0xd60d,	// (0x00023f4e) main_cset6_slider_pane_g16_ParamLimits

0xd60d,	// (0x00023f4e) main_cset6_slider_pane_g16

0xd61b,	// (0x00023f5c) main_cset6_slider_pane_g17_ParamLimits

0xd61b,	// (0x00023f5c) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x000264f2) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x000264f2) main_cset6_slider_pane_g

0x4bd1,	// (0x0001b512) main_cset6_slider_pane_t1_ParamLimits

0x4bd1,	// (0x0001b512) main_cset6_slider_pane_t1

0xd641,	// (0x00023f82) main_cset6_slider_pane_t2_ParamLimits

0xd641,	// (0x00023f82) main_cset6_slider_pane_t2

0xd66c,	// (0x00023fad) main_cset6_slider_pane_t3_ParamLimits

0xd66c,	// (0x00023fad) main_cset6_slider_pane_t3

0xd697,	// (0x00023fd8) main_cset6_slider_pane_t4_ParamLimits

0xd697,	// (0x00023fd8) main_cset6_slider_pane_t4

0xd6c2,	// (0x00024003) main_cset6_slider_pane_t5_ParamLimits

0xd6c2,	// (0x00024003) main_cset6_slider_pane_t5

0x4c12,	// (0x0001b553) main_cset6_slider_pane_t7_ParamLimits

0x4c12,	// (0x0001b553) main_cset6_slider_pane_t7

0xd6ef,	// (0x00024030) main_cset6_slider_pane_t8_ParamLimits

0xd6ef,	// (0x00024030) main_cset6_slider_pane_t8

0xd713,	// (0x00024054) main_cset6_slider_pane_t9_ParamLimits

0xd713,	// (0x00024054) main_cset6_slider_pane_t9

0xd737,	// (0x00024078) main_cset6_slider_pane_t10_ParamLimits

0xd737,	// (0x00024078) main_cset6_slider_pane_t10

0xd75b,	// (0x0002409c) main_cset6_slider_pane_t11_ParamLimits

0xd75b,	// (0x0002409c) main_cset6_slider_pane_t11

0x4c48,	// (0x0001b589) main_cset6_slider_pane_t14_ParamLimits

0x4c48,	// (0x0001b589) main_cset6_slider_pane_t14

0x4c81,	// (0x0001b5c2) main_cset6_slider_pane_t15_ParamLimits

0x4c81,	// (0x0001b5c2) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x00026517) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x00026517) main_cset6_slider_pane_t

0x42f4,	// (0x0001ac35) cset_slider_pane_g1_copy1

0x42fd,	// (0x0001ac3e) cset_slider_pane_g2_copy1

0x4306,	// (0x0001ac47) cset_slider_pane_g3_copy1

0x03c2,	// (0x00016d03) bg_popup_sub_pane_cp011_copy1

0x43eb,	// (0x0001ad2c) main_cset_text_pane_g1_copy1

0x43f3,	// (0x0001ad34) main_cset_text_pane_t1_copy1

0x4401,	// (0x0001ad42) main_cset_text_pane_t2_copy1

0x440f,	// (0x0001ad50) main_cset_text_pane_t3_copy1

0x441d,	// (0x0001ad5e) main_cset_text_pane_t4_copy1

0x442b,	// (0x0001ad6c) main_cset_text_pane_t5_copy1

0x4439,	// (0x0001ad7a) main_cset_text_pane_t6_copy1

0x4447,	// (0x0001ad88) main_cset_text_pane_t7_copy1

0xd77f,	// (0x000240c0) main_cset_text2_pane_t1_copy1

0x03c2,	// (0x00016d03) main_ncimui_pane

0xaec1,	// (0x00021802) popup_query_ncimui_window_ParamLimits

0xaec1,	// (0x00021802) popup_query_ncimui_window

0x35ce,	// (0x00019f0f) field_cale_ev2_pane_g4_ParamLimits

0x35ce,	// (0x00019f0f) field_cale_ev2_pane_g4

0xc345,	// (0x00022c86) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc345,	// (0x00022c86) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x000261f5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x000261f5) cell_video_dialer_keypad_pane_g

0xc35d,	// (0x00022c9e) cell_video_dialer_keypad_pane_t1

0x03c2,	// (0x00016d03) bg_popup_window_pane_cp012

0x16ce,	// (0x0001800f) heading_pane_cp06

0x4da9,	// (0x0001b6ea) ncim_query_content_pane

0x03c2,	// (0x00016d03) bg_popup_heading_pane_cp01

0x4db1,	// (0x0001b6f2) ncim_heading_pane_t1

0x4dbf,	// (0x0001b700) ncim_indicator_popup_pane

0x4dd1,	// (0x0001b712) ncim_query_button_pane

0x4de5,	// (0x0001b726) ncim_query_content_pane_t1

0x4df7,	// (0x0001b738) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x00026556) ncim_query_content_pane_t

0x4e31,	// (0x0001b772) ncim_query_list_pane

0x4e43,	// (0x0001b784) ncim_query_popup_pane

0x4dbf,	// (0x0001b700) ncim_indicator_popup_pane_ParamLimits

0xd8a1,	// (0x000241e2) ncim_query_content_pane_g1_ParamLimits

0xd8a1,	// (0x000241e2) ncim_query_content_pane_g1

0x4de5,	// (0x0001b726) ncim_query_content_pane_t1_ParamLimits

0x4df7,	// (0x0001b738) ncim_query_content_pane_t2_ParamLimits

0xd8ad,	// (0x000241ee) ncim_query_content_pane_t3_ParamLimits

0xd8ad,	// (0x000241ee) ncim_query_content_pane_t3

0xd8ca,	// (0x0002420b) ncim_query_content_pane_t4_ParamLimits

0xd8ca,	// (0x0002420b) ncim_query_content_pane_t4

0xd8e7,	// (0x00024228) ncim_query_content_pane_t5_ParamLimits

0xd8e7,	// (0x00024228) ncim_query_content_pane_t5

0x4e09,	// (0x0001b74a) ncim_query_content_pane_t6_ParamLimits

0x4e09,	// (0x0001b74a) ncim_query_content_pane_t6

0xfc15,	// (0x00026556) ncim_query_content_pane_t_ParamLimits

0x4e31,	// (0x0001b772) ncim_query_list_pane_ParamLimits

0x4e43,	// (0x0001b784) ncim_query_popup_pane_ParamLimits

0x4e57,	// (0x0001b798) wait_bar_pane_cp04

0x03c2,	// (0x00016d03) input_focus_pane_cp011

0x4e5f,	// (0x0001b7a0) ncim_query_popup_pane_t1

0x4e6d,	// (0x0001b7ae) ncim_list_query_list_pane_ParamLimits

0x4e6d,	// (0x0001b7ae) ncim_list_query_list_pane

0x03c2,	// (0x00016d03) bg_button_pane_cp027

0x4e7a,	// (0x0001b7bb) ncim_query_button_pane_g1

0x03c2,	// (0x00016d03) list_highlight_pane_cp012

0x4e84,	// (0x0001b7c5) ncim_list_query_list_pane_g1

0x4e8c,	// (0x0001b7cd) ncim_list_query_list_pane_t1

0x7b90,	// (0x0001e4d1) cam4_indicators_pane_g3_ParamLimits

0x7b90,	// (0x0001e4d1) cam4_indicators_pane_g3

0x7c9e,	// (0x0001e5df) vid4_indicators_pane_g5_ParamLimits

0x7c9e,	// (0x0001e5df) vid4_indicators_pane_g5

0x817e,	// (0x0001eabf) vid4_progress_pane_g5_ParamLimits

0x817e,	// (0x0001eabf) vid4_progress_pane_g5

0xd7ba,	// (0x000240fb) main_ncimui_pane_g1

0xd810,	// (0x00024151) ncimui_group_query_pane_ParamLimits

0xd810,	// (0x00024151) ncimui_group_query_pane

0xd84c,	// (0x0002418d) ncimui_list_pane_ParamLimits

0xd84c,	// (0x0002418d) ncimui_list_pane

0xd86d,	// (0x000241ae) ncimui_text_pane_ParamLimits

0xd86d,	// (0x000241ae) ncimui_text_pane

0xd904,	// (0x00024245) ncimui_text_pane_t1_ParamLimits

0xd904,	// (0x00024245) ncimui_text_pane_t1

0x4e9a,	// (0x0001b7db) ncimui_list_single_graphic_pane_ParamLimits

0x4e9a,	// (0x0001b7db) ncimui_list_single_graphic_pane

0xd923,	// (0x00024264) ncimui_query_pane_ParamLimits

0xd923,	// (0x00024264) ncimui_query_pane

0x03c2,	// (0x00016d03) list_highlight_pane_cp013

0x4eaa,	// (0x0001b7eb) ncim_list_query_list_pane_t1_copy1

0x4e84,	// (0x0001b7c5) ncim_list_single_graphic_pane_g1

0x4eb8,	// (0x0001b7f9) ncim_query_button_pane_cp01

0x4ec4,	// (0x0001b805) ncim_query_entry_pane_ParamLimits

0x4ec4,	// (0x0001b805) ncim_query_entry_pane

0x4ed7,	// (0x0001b818) ncimui_query_pane_g1

0x4ee3,	// (0x0001b824) ncimui_query_pane_t1_ParamLimits

0x4ee3,	// (0x0001b824) ncimui_query_pane_t1

0x0432,	// (0x00016d73) input_focus_pane_cp012

0x4efc,	// (0x0001b83d) ncim_query_entry_pane_t1

0x0ba7,	// (0x000174e8) main_im_pane_ParamLimits

0x0432,	// (0x00016d73) main_mobtv_pane_ParamLimits

0x0432,	// (0x00016d73) main_mobtv_pane

0xd629,	// (0x00023f6a) main_cset6_slider_pane_g18_ParamLimits

0xd629,	// (0x00023f6a) main_cset6_slider_pane_g18

0xd635,	// (0x00023f76) main_cset6_slider_pane_g19_ParamLimits

0xd635,	// (0x00023f76) main_cset6_slider_pane_g19

0x4051,	// (0x0001a992) bg_main_mobtv_pane_ParamLimits

0x4051,	// (0x0001a992) bg_main_mobtv_pane

0xd936,	// (0x00024277) main_mobtv_info_pane

0xd941,	// (0x00024282) main_mobtv_loading_pane_ParamLimits

0xd941,	// (0x00024282) main_mobtv_loading_pane

0x4f1c,	// (0x0001b85d) main_mobtv_pg_channel_list_pane

0x4f26,	// (0x0001b867) main_mobtv_pg_hdr_pane

0xd94e,	// (0x0002428f) main_mobtv_programe_curr_pane_ParamLimits

0xd94e,	// (0x0002428f) main_mobtv_programe_curr_pane

0xd95b,	// (0x0002429c) main_mobtv_programe_next_pane_ParamLimits

0xd95b,	// (0x0002429c) main_mobtv_programe_next_pane

0x4f2f,	// (0x0001b870) popup_mobtv_noti_window

0x32fd,	// (0x00019c3e) main_tv_pg_hdr_pane_g1

0x4f37,	// (0x0001b878) main_tv_pg_hdr_pane_g2

0x4f3f,	// (0x0001b880) main_tv_pg_hdr_pane_g3

0x4f47,	// (0x0001b888) main_tv_pg_hdr_pane_g4

0x4f4f,	// (0x0001b890) main_tv_pg_hdr_pane_g5

0x4f59,	// (0x0001b89a) main_tv_pg_hdr_pane_g6

0x4f63,	// (0x0001b8a4) main_tv_pg_hdr_pane_g7

0x4f6d,	// (0x0001b8ae) main_tv_pg_hdr_pane_g8

0x4f77,	// (0x0001b8b8) main_tv_pg_hdr_pane_g9

0x4f81,	// (0x0001b8c2) main_tv_pg_hdr_pane_g10

0x4f8b,	// (0x0001b8cc) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00026563) main_tv_pg_hdr_pane_g

0x4f95,	// (0x0001b8d6) main_tv_pg_hdr_pane_t1

0x4fa3,	// (0x0001b8e4) main_tv_pg_hdr_pane_t2

0x4fb1,	// (0x0001b8f2) main_tv_pg_hdr_pane_t3

0x4fc1,	// (0x0001b902) main_tv_pg_hdr_pane_t4

0x4fd1,	// (0x0001b912) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0002657a) main_tv_pg_hdr_pane_t

0x4fe1,	// (0x0001b922) single_mobtv_pg_channel_pane_ParamLimits

0x4fe1,	// (0x0001b922) single_mobtv_pg_channel_pane

0x4ff3,	// (0x0001b934) single_mobtv_pg_channel_table_pane

0x4ffc,	// (0x0001b93d) single_mobtv_pg_channel_thumb_pane

0x5005,	// (0x0001b946) single_tv_pg_channel_pane_g1

0x500e,	// (0x0001b94f) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x00026585) single_tv_pg_channel_pane_g

0x3569,	// (0x00019eaa) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3569,	// (0x00019eaa) bg_single_mobtv_pg_channel_thumb_pane

0x5017,	// (0x0001b958) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x5017,	// (0x0001b958) single_mobtv_pg_channel_thumb_pane_g1

0x5025,	// (0x0001b966) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x5025,	// (0x0001b966) single_mobtv_pg_channel_thumb_pane_g2

0x5031,	// (0x0001b972) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x5031,	// (0x0001b972) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0002658a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0002658a) single_mobtv_pg_channel_thumb_pane_g

0x503d,	// (0x0001b97e) single_mobtv_pg_channel_thumb_pane_t1

0x504b,	// (0x0001b98c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x00026591) single_mobtv_pg_channel_thumb_pane_t

0x32fd,	// (0x00019c3e) bg_single_mobtv_pg_channel_table_pane_g1

0x32fd,	// (0x00019c3e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00026041) bg_single_mobtv_pg_channel_table_pane_g

0x5059,	// (0x0001b99a) single_mobtv_pg_channel_table_pane_t1

0x5067,	// (0x0001b9a8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x00026596) single_mobtv_pg_channel_table_pane_t

0xd970,	// (0x000242b1) main_mobtv_info_pane_g1_ParamLimits

0xd970,	// (0x000242b1) main_mobtv_info_pane_g1

0xd98c,	// (0x000242cd) main_mobtv_info_pane_t1_ParamLimits

0xd98c,	// (0x000242cd) main_mobtv_info_pane_t1

0xda04,	// (0x00024345) main_mobtv_info_pane_t2_ParamLimits

0xda04,	// (0x00024345) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x000265a0) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x000265a0) main_mobtv_info_pane_t

0xda93,	// (0x000243d4) wait_bar_pane_cp05

0xdaa5,	// (0x000243e6) main_mobtv_loading_pane_g1_ParamLimits

0xdaa5,	// (0x000243e6) main_mobtv_loading_pane_g1

0xdab3,	// (0x000243f4) main_mobtv_loading_pane_g2_ParamLimits

0xdab3,	// (0x000243f4) main_mobtv_loading_pane_g2

0xdabf,	// (0x00024400) main_mobtv_loading_pane_g3_ParamLimits

0xdabf,	// (0x00024400) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x000265a7) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x000265a7) main_mobtv_loading_pane_g

0x5075,	// (0x0001b9b6) main_mobtv_loading_pane_t1_ParamLimits

0x5075,	// (0x0001b9b6) main_mobtv_loading_pane_t1

0x508d,	// (0x0001b9ce) main_mobtv_loading_pane_t2_ParamLimits

0x508d,	// (0x0001b9ce) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x000265ae) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x000265ae) main_mobtv_loading_pane_t

0xdacd,	// (0x0002440e) wait_bar_pane_cp06_ParamLimits

0xdacd,	// (0x0002440e) wait_bar_pane_cp06

0x50b1,	// (0x0001b9f2) main_mobtv_programe_curr_pane_t1

0x50bf,	// (0x0001ba00) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x000265b3) main_mobtv_programe_curr_pane_t

0x50cd,	// (0x0001ba0e) main_mobtv_programe_next_pane_t1

0x50db,	// (0x0001ba1c) main_mobtv_programe_next_pane_t2

0x50e9,	// (0x0001ba2a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x000265b8) main_mobtv_programe_next_pane_t

0x03c2,	// (0x00016d03) bg_popup_mobtv_noti_window_pane

0x50f7,	// (0x0001ba38) popup_mobtv_noti_window_g1

0x50ff,	// (0x0001ba40) popup_mobtv_noti_window_t1

0x510d,	// (0x0001ba4e) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x000265bf) popup_mobtv_noti_window_t

0x32fd,	// (0x00019c3e) bg_popup_mobtv_noti_window_pane_g1

0x03c2,	// (0x00016d03) sc_clock_pane

0x03c2,	// (0x00016d03) main_fs_bigclock_pane

0xd247,	// (0x00023b88) blid2_tripm_pane_t4_ParamLimits

0xd247,	// (0x00023b88) blid2_tripm_pane_t4

0xdad9,	// (0x0002441a) sc_clock_pane_g1_ParamLimits

0xdad9,	// (0x0002441a) sc_clock_pane_g1

0xdae7,	// (0x00024428) sc_clock_pane_t1_ParamLimits

0xdae7,	// (0x00024428) sc_clock_pane_t1

0xdafa,	// (0x0002443b) sc_clock_pane_t2_ParamLimits

0xdafa,	// (0x0002443b) sc_clock_pane_t2

0xdb0c,	// (0x0002444d) sc_clock_pane_t3_ParamLimits

0xdb0c,	// (0x0002444d) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x000265c4) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x000265c4) sc_clock_pane_t

0xe920,	// (0x00025261) main_fs_bigclock_indicator_pane_ParamLimits

0xe920,	// (0x00025261) main_fs_bigclock_indicator_pane

0xdbaa,	// (0x000244eb) main_fs_bigclock_pane_g1_ParamLimits

0xdbaa,	// (0x000244eb) main_fs_bigclock_pane_g1

0xe92c,	// (0x0002526d) main_fs_bigclock_pane_t1_ParamLimits

0xe92c,	// (0x0002526d) main_fs_bigclock_pane_t1

0xe93e,	// (0x0002527f) main_fs_bigclock_pane_t2_ParamLimits

0xe93e,	// (0x0002527f) main_fs_bigclock_pane_t2

0xe952,	// (0x00025293) main_fs_bigclock_pane_t3_ParamLimits

0xe952,	// (0x00025293) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x000267be) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x000267be) main_fs_bigclock_pane_t

0x5bf5,	// (0x0001c536) main_fs_bigclock_indicator_pane_g1

0x4dd9,	// (0x0001b71a) ncim_query_content_pane_g2_ParamLimits

0x4dd9,	// (0x0001b71a) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00026551) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00026551) ncim_query_content_pane_g

0xdb20,	// (0x00024461) sc_clock_pane_t4_ParamLimits

0xdb20,	// (0x00024461) sc_clock_pane_t4

0x0432,	// (0x00016d73) main_radioblah_pane

0x3f2b,	// (0x0001a86c) cell_call4_button_pane_t1_copy1_ParamLimits

0x3f2b,	// (0x0001a86c) cell_call4_button_pane_t1_copy1

0xd7c2,	// (0x00024103) main_ncimui_pane_t1_ParamLimits

0xd7c2,	// (0x00024103) main_ncimui_pane_t1

0xd7dc,	// (0x0002411d) main_ncimui_pane_t2_ParamLimits

0xd7dc,	// (0x0002411d) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0002654a) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0002654a) main_ncimui_pane_t

0x5123,	// (0x0001ba64) main_radioblah_anim_pane_ParamLimits

0x5123,	// (0x0001ba64) main_radioblah_anim_pane

0x5134,	// (0x0001ba75) main_radioblah_info_pane_ParamLimits

0x5134,	// (0x0001ba75) main_radioblah_info_pane

0x5148,	// (0x0001ba89) main_radioblah_pane_t1_ParamLimits

0x5148,	// (0x0001ba89) main_radioblah_pane_t1

0x5164,	// (0x0001baa5) main_radioblah_pane_t2_ParamLimits

0x5164,	// (0x0001baa5) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x000265e5) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x000265e5) main_radioblah_pane_t

0xdd23,	// (0x00024664) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdd23,	// (0x00024664) main_radioblah_rocker_ctrl_pane

0x51ac,	// (0x0001baed) main_radioblah_info_pane_t1_ParamLimits

0x51ac,	// (0x0001baed) main_radioblah_info_pane_t1

0xdd68,	// (0x000246a9) main_radioblah_info_pane_t2_ParamLimits

0xdd68,	// (0x000246a9) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x000265ee) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x000265ee) main_radioblah_info_pane_t

0x32fd,	// (0x00019c3e) main_radioblah_rocker_ctrl_pane_g1

0xde18,	// (0x00024759) main_radioblah_rocker_ctrl_pane_g2

0xde20,	// (0x00024761) main_radioblah_rocker_ctrl_pane_g3

0xde28,	// (0x00024769) main_radioblah_rocker_ctrl_pane_g4

0xde30,	// (0x00024771) main_radioblah_rocker_ctrl_pane_g5

0xde38,	// (0x00024779) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x000265f7) main_radioblah_rocker_ctrl_pane_g

0xd77f,	// (0x000240c0) main_cset_text2_pane_t1_copy1_ParamLimits

0x7ad4,	// (0x0001e415) cam4_image_uncrop_qvga_pane

0x7c05,	// (0x0001e546) vid4_image_uncrop_qcif_pane

0x8220,	// (0x0001eb61) cam6_image_uncrop_qvga_pane_ParamLimits

0x8220,	// (0x0001eb61) cam6_image_uncrop_qvga_pane

0x4a33,	// (0x0001b374) vid6_image_uncrop_qcif_pane_ParamLimits

0x4a33,	// (0x0001b374) vid6_image_uncrop_qcif_pane

0x03c2,	// (0x00016d03) bg_popup_preview_window_pane_cp03

0x4d8b,	// (0x0001b6cc) list_cset_text2_pane

0x4d93,	// (0x0001b6d4) main_cset6_text2_pane_g1

0x4d9b,	// (0x0001b6dc) main_cset6_text2_pane_t1

0x5a72,	// (0x0001c3b3) list_cset_text2_pane_t1_ParamLimits

0x5a72,	// (0x0001c3b3) list_cset_text2_pane_t1

0x0432,	// (0x00016d73) main_radioblah_pane_ParamLimits

0xda7f,	// (0x000243c0) main_mobtv_info_pane_t3_ParamLimits

0xda7f,	// (0x000243c0) main_mobtv_info_pane_t3

0xdd11,	// (0x00024652) main_radioblah_pane_g1

0xdd3c,	// (0x0002467d) main_radioblah_info_pane_g1

0xddbd,	// (0x000246fe) main_radioblah_info_pane_t3_ParamLimits

0xddbd,	// (0x000246fe) main_radioblah_info_pane_t3

0x9cdd,	// (0x0002061e) highlight_cell_cale_month_pane_ParamLimits

0x9cdd,	// (0x0002061e) highlight_cell_cale_month_pane

0x03c2,	// (0x00016d03) main_phob_fisheye_pane

0x3657,	// (0x00019f98) scroll_pane_cp0031_ParamLimits

0x3657,	// (0x00019f98) scroll_pane_cp0031

0x4b41,	// (0x0001b482) wait_bar_pane_cp08_ParamLimits

0xd540,	// (0x00023e81) cset_list_set_pane_copy1_ParamLimits

0x51e6,	// (0x0001bb27) highlight_cell_cale_month_pane_g1

0xde40,	// (0x00024781) highlight_cell_cale_month_pane_t1

0x46bb,	// (0x0001affc) list_gen_pane_cp01

0x41d7,	// (0x0001ab18) scroll_pane_01

0xde4e,	// (0x0002478f) list_single_double_fisheye_pane

0xde57,	// (0x00024798) list_double_fisheye_pane_g1_ParamLimits

0xde57,	// (0x00024798) list_double_fisheye_pane_g1

0xde63,	// (0x000247a4) list_double_fisheye_pane_g2_ParamLimits

0xde63,	// (0x000247a4) list_double_fisheye_pane_g2

0xde77,	// (0x000247b8) list_double_fisheye_pane_g3_ParamLimits

0xde77,	// (0x000247b8) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00026604) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00026604) list_double_fisheye_pane_g

0xdea0,	// (0x000247e1) list_double_fisheye_pane_t1_ParamLimits

0xdea0,	// (0x000247e1) list_double_fisheye_pane_t1

0xdebb,	// (0x000247fc) list_double_fisheye_pane_t2_ParamLimits

0xdebb,	// (0x000247fc) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0002660f) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0002660f) list_double_fisheye_pane_t

0x03c2,	// (0x00016d03) main_call5_pane

0xdb46,	// (0x00024487) sc_swipe_pane_ParamLimits

0xdb46,	// (0x00024487) sc_swipe_pane

0xdee9,	// (0x0002482a) call5_image_pane_ParamLimits

0xdee9,	// (0x0002482a) call5_image_pane

0xdef9,	// (0x0002483a) call5_swipe_1_pane_ParamLimits

0xdef9,	// (0x0002483a) call5_swipe_1_pane

0xdf05,	// (0x00024846) call5_swipe_2_pane_ParamLimits

0xdf05,	// (0x00024846) call5_swipe_2_pane

0xdf1f,	// (0x00024860) popup_call5_audio_first_window_ParamLimits

0xdf1f,	// (0x00024860) popup_call5_audio_first_window

0x3569,	// (0x00019eaa) call5_swipe_1_pane_g1_ParamLimits

0x3569,	// (0x00019eaa) call5_swipe_1_pane_g1

0x51ee,	// (0x0001bb2f) call5_swipe_1_pane_g2_ParamLimits

0x51ee,	// (0x0001bb2f) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00026614) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00026614) call5_swipe_1_pane_g

0x51fa,	// (0x0001bb3b) call5_swipe_1_pane_t1_ParamLimits

0x51fa,	// (0x0001bb3b) call5_swipe_1_pane_t1

0x3569,	// (0x00019eaa) call5_swipe_2_pane_g1_ParamLimits

0x3569,	// (0x00019eaa) call5_swipe_2_pane_g1

0x520f,	// (0x0001bb50) call5_swipe_2_pane_g2_ParamLimits

0x520f,	// (0x0001bb50) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x00026619) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x00026619) call5_swipe_2_pane_g

0x521b,	// (0x0001bb5c) call5_swipe_2_pane_t1_ParamLimits

0x521b,	// (0x0001bb5c) call5_swipe_2_pane_t1

0x5230,	// (0x0001bb71) sc_swipe_pane_g1_ParamLimits

0x5230,	// (0x0001bb71) sc_swipe_pane_g1

0x523d,	// (0x0001bb7e) sc_swipe_pane_g2_ParamLimits

0x523d,	// (0x0001bb7e) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0002661e) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0002661e) sc_swipe_pane_g

0x5249,	// (0x0001bb8a) sc_swipe_pane_t1_ParamLimits

0x5249,	// (0x0001bb8a) sc_swipe_pane_t1

0x03c2,	// (0x00016d03) main_cmail_launcher_pane

0xdf2d,	// (0x0002486e) aid_size_cell_cmail_l_ParamLimits

0xdf2d,	// (0x0002486e) aid_size_cell_cmail_l

0xdf3d,	// (0x0002487e) grid_cmail_l_pane_ParamLimits

0xdf3d,	// (0x0002487e) grid_cmail_l_pane

0xdf4d,	// (0x0002488e) cell_cmail_l_pane_ParamLimits

0xdf4d,	// (0x0002488e) cell_cmail_l_pane

0xdf61,	// (0x000248a2) cell_cmail_l_pane_g1_ParamLimits

0xdf61,	// (0x000248a2) cell_cmail_l_pane_g1

0xdf6d,	// (0x000248ae) cell_cmail_l_pane_t1_ParamLimits

0xdf6d,	// (0x000248ae) cell_cmail_l_pane_t1

0x525e,	// (0x0001bb9f) cell_cmail_l_pane_t2_ParamLimits

0x525e,	// (0x0001bb9f) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00026623) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00026623) cell_cmail_l_pane_t

0x0432,	// (0x00016d73) grid_highlight_pane_cp018_ParamLimits

0x0432,	// (0x00016d73) grid_highlight_pane_cp018

0x8365,	// (0x0001eca6) main2_pane_ParamLimits

0x8365,	// (0x0001eca6) main2_pane

0x0c64,	// (0x000175a5) popup_sp_fs_action_menu_bg_pane_g1

0x0c6c,	// (0x000175ad) popup_sp_fs_action_menu_bg_pane_g2

0x0c74,	// (0x000175b5) popup_sp_fs_action_menu_bg_pane_g3

0x0c7c,	// (0x000175bd) popup_sp_fs_action_menu_bg_pane_g4

0x0c84,	// (0x000175c5) popup_sp_fs_action_menu_bg_pane_g5

0x0c8c,	// (0x000175cd) popup_sp_fs_action_menu_bg_pane_g6

0x0c94,	// (0x000175d5) popup_sp_fs_action_menu_bg_pane_g7

0x0c9c,	// (0x000175dd) popup_sp_fs_action_menu_bg_pane_g8

0x0ca4,	// (0x000175e5) popup_sp_fs_action_menu_bg_pane_g9

0x0cac,	// (0x000175ed) popup_sp_fs_action_menu_bg_pane_g10

0x0cac,	// (0x000175ed) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00025aed) popup_sp_fs_action_menu_bg_pane_g

0x0e7c,	// (0x000177bd) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x2_t3_g3_g1

0x0e88,	// (0x000177c9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0e88,	// (0x000177c9) list_medium_line_x2_t3_g3_g2

0x0e94,	// (0x000177d5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0e94,	// (0x000177d5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00025b9d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00025b9d) list_medium_line_x2_t3_g3_g

0x0ea0,	// (0x000177e1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ea0,	// (0x000177e1) list_medium_line_x2_t3_g3_t1

0x8e64,	// (0x0001f7a5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8e64,	// (0x0001f7a5) list_medium_line_x2_t3_g3_t2

0x0eb5,	// (0x000177f6) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0eb5,	// (0x000177f6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00025ba4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00025ba4) list_medium_line_x2_t3_g3_t

0x0e7c,	// (0x000177bd) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x2_t3_g2_g1

0x0e94,	// (0x000177d5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0e94,	// (0x000177d5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00025bab) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00025bab) list_medium_line_x2_t3_g2_g

0x0eca,	// (0x0001780b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0eca,	// (0x0001780b) list_medium_line_x2_t3_g2_t1

0x0ee0,	// (0x00017821) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0ee0,	// (0x00017821) list_medium_line_x2_t3_g2_t2

0x0eb5,	// (0x000177f6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0eb5,	// (0x000177f6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00025bb0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00025bb0) list_medium_line_x2_t3_g2_t

0x0e7c,	// (0x000177bd) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x2_t4_g4_g1

0x0ef2,	// (0x00017833) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0ef2,	// (0x00017833) list_medium_line_x2_t4_g4_g2

0x0e88,	// (0x000177c9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0e88,	// (0x000177c9) list_medium_line_x2_t4_g4_g3

0x0efe,	// (0x0001783f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0efe,	// (0x0001783f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00025bb7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00025bb7) list_medium_line_x2_t4_g4_g

0x8e76,	// (0x0001f7b7) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8e76,	// (0x0001f7b7) list_medium_line_x2_t4_g4_t1

0x8e90,	// (0x0001f7d1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8e90,	// (0x0001f7d1) list_medium_line_x2_t4_g4_t2

0x8ea6,	// (0x0001f7e7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8ea6,	// (0x0001f7e7) list_medium_line_x2_t4_g4_t3

0x0f0a,	// (0x0001784b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0f0a,	// (0x0001784b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00025bc0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00025bc0) list_medium_line_x2_t4_g4_t

0x0e7c,	// (0x000177bd) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x2_t2_g4_g1

0x0ef2,	// (0x00017833) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0ef2,	// (0x00017833) list_medium_line_x2_t2_g4_g2

0x0e88,	// (0x000177c9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0e88,	// (0x000177c9) list_medium_line_x2_t2_g4_g3

0x0e94,	// (0x000177d5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0e94,	// (0x000177d5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00025c27) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00025c27) list_medium_line_x2_t2_g4_g

0x11f2,	// (0x00017b33) list_medium_line_x2_t2_g4_t1_ParamLimits

0x11f2,	// (0x00017b33) list_medium_line_x2_t2_g4_t1

0x0eb5,	// (0x000177f6) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0eb5,	// (0x000177f6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00025c30) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00025c30) list_medium_line_x2_t2_g4_t

0x0e7c,	// (0x000177bd) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x2_t2_g3_g1

0x0e88,	// (0x000177c9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0e88,	// (0x000177c9) list_medium_line_x2_t2_g3_g2

0x0e94,	// (0x000177d5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0e94,	// (0x000177d5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00025b9d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00025b9d) list_medium_line_x2_t2_g3_g

0x1207,	// (0x00017b48) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1207,	// (0x00017b48) list_medium_line_x2_t2_g3_t1

0x0eb5,	// (0x000177f6) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0eb5,	// (0x000177f6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00025c35) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00025c35) list_medium_line_x2_t2_g3_t

0x9e45,	// (0x00020786) main_sp_fs_list_pane_ParamLimits

0x9e45,	// (0x00020786) main_sp_fs_list_pane

0x9e51,	// (0x00020792) sp_fs_scroll_pane_ParamLimits

0x9e51,	// (0x00020792) sp_fs_scroll_pane

0x9e5d,	// (0x0002079e) list_medium_line_x2_t3_t1

0x9e6d,	// (0x000207ae) list_medium_line_x2_t3_t2

0x146f,	// (0x00017db0) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00025c80) list_medium_line_x2_t3_t

0x9e7b,	// (0x000207bc) list_medium_line_x3_t4_t1

0x9e8b,	// (0x000207cc) list_medium_line_x3_t4_t2

0x147d,	// (0x00017dbe) list_medium_line_x3_t4_t3

0x146f,	// (0x00017db0) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00025c87) list_medium_line_x3_t4_t

0x9e99,	// (0x000207da) list_medium_line_x4_t5_t1

0x9ea9,	// (0x000207ea) list_medium_line_x4_t5_t2

0x147d,	// (0x00017dbe) list_medium_line_x4_t5_t3

0x148b,	// (0x00017dcc) list_medium_line_x4_t5_t4

0x146f,	// (0x00017db0) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00025c90) list_medium_line_x4_t5_t

0x0e7c,	// (0x000177bd) list_medium_line_t4_g4_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_t4_g4_g1

0x0efe,	// (0x0001783f) list_medium_line_t4_g4_g2_ParamLimits

0x0efe,	// (0x0001783f) list_medium_line_t4_g4_g2

0x1499,	// (0x00017dda) list_medium_line_t4_g4_g3_ParamLimits

0x1499,	// (0x00017dda) list_medium_line_t4_g4_g3

0x0e94,	// (0x000177d5) list_medium_line_t4_g4_g4_ParamLimits

0x0e94,	// (0x000177d5) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00025c9b) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00025c9b) list_medium_line_t4_g4_g

0x14a5,	// (0x00017de6) list_medium_line_t4_g4_t1_ParamLimits

0x14a5,	// (0x00017de6) list_medium_line_t4_g4_t1

0x14ba,	// (0x00017dfb) list_medium_line_t4_g4_t2_ParamLimits

0x14ba,	// (0x00017dfb) list_medium_line_t4_g4_t2

0x14cf,	// (0x00017e10) list_medium_line_t4_g4_t3_ParamLimits

0x14cf,	// (0x00017e10) list_medium_line_t4_g4_t3

0x0eb5,	// (0x000177f6) list_medium_line_t4_g4_t4_ParamLimits

0x0eb5,	// (0x000177f6) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00025ca4) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00025ca4) list_medium_line_t4_g4_t

0x9f55,	// (0x00020896) chi_dic_find_pane_g1

0xae90,	// (0x000217d1) main_tport_pane

0x4340,	// (0x0001ac81) list_medium_line_plain_t1

0x4392,	// (0x0001acd3) list_medium_line_t2_g2_g1_ParamLimits

0x4392,	// (0x0001acd3) list_medium_line_t2_g2_g1

0x439e,	// (0x0001acdf) list_medium_line_t2_g2_g2_ParamLimits

0x439e,	// (0x0001acdf) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00026360) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00026360) list_medium_line_t2_g2_g

0xcb6f,	// (0x000234b0) list_medium_line_t2_g2_t1_ParamLimits

0xcb6f,	// (0x000234b0) list_medium_line_t2_g2_t1

0xcb89,	// (0x000234ca) list_medium_line_t2_g2_t2_ParamLimits

0xcb89,	// (0x000234ca) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x00026365) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x00026365) list_medium_line_t2_g2_t

0x475c,	// (0x0001b09d) aid_sp_fs_list_icon_a_sm

0x4764,	// (0x0001b0a5) aid_sp_fs_list_icon_d

0x476c,	// (0x0001b0ad) aid_sp_fs_text_primary

0x4775,	// (0x0001b0b6) aid_sp_fs_text_secondary

0x477e,	// (0x0001b0bf) list_medium_line

0x477e,	// (0x0001b0bf) list_medium_line_g2

0x477e,	// (0x0001b0bf) list_medium_line_g3

0x477e,	// (0x0001b0bf) list_medium_line_plain

0x477e,	// (0x0001b0bf) list_medium_line_plain_t2

0x477e,	// (0x0001b0bf) list_medium_line_plain_t3

0x477e,	// (0x0001b0bf) list_medium_line_right_icon

0x477e,	// (0x0001b0bf) list_medium_line_right_iconx2

0x477e,	// (0x0001b0bf) list_medium_line_t2

0x477e,	// (0x0001b0bf) list_medium_line_t2_g2

0x477e,	// (0x0001b0bf) list_medium_line_t2_g3

0x477e,	// (0x0001b0bf) list_medium_line_t2_right_icon

0x477e,	// (0x0001b0bf) list_medium_line_t2_right_iconx2

0x477e,	// (0x0001b0bf) list_medium_line_t3

0x477e,	// (0x0001b0bf) list_medium_line_t3_g2

0x477e,	// (0x0001b0bf) list_medium_line_t3_g3

0x477e,	// (0x0001b0bf) list_medium_line_t3_right_iconx2

0x4787,	// (0x0001b0c8) list_medium_line_t4_g4

0x4790,	// (0x0001b0d1) list_medium_line_x2

0x4790,	// (0x0001b0d1) list_medium_line_x2_t2_g2

0x4790,	// (0x0001b0d1) list_medium_line_x2_t2_g3

0x4790,	// (0x0001b0d1) list_medium_line_x2_t2_g4

0x4790,	// (0x0001b0d1) list_medium_line_x2_t3

0x4790,	// (0x0001b0d1) list_medium_line_x2_t3_g2

0x4790,	// (0x0001b0d1) list_medium_line_x2_t3_g3

0x4790,	// (0x0001b0d1) list_medium_line_x2_t3_g4

0x4790,	// (0x0001b0d1) list_medium_line_x2_t4_g2

0x4790,	// (0x0001b0d1) list_medium_line_x2_t4_g4

0x4799,	// (0x0001b0da) list_medium_line_x3

0x4799,	// (0x0001b0da) list_medium_line_x3_t4

0x4799,	// (0x0001b0da) list_medium_line_x3_t4_g4

0x4787,	// (0x0001b0c8) list_medium_line_x4_t4

0x4787,	// (0x0001b0c8) list_medium_line_x4_t4_g7

0x4787,	// (0x0001b0c8) list_medium_line_x4_t5

0x47a2,	// (0x0001b0e3) list_single_fs_dyc_pane_ParamLimits

0x47a2,	// (0x0001b0e3) list_single_fs_dyc_pane

0x0e7c,	// (0x000177bd) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x4_t4_g7_g1

0x4cba,	// (0x0001b5fb) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4cba,	// (0x0001b5fb) list_medium_line_x4_t4_g7_g2

0x4cc6,	// (0x0001b607) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4cc6,	// (0x0001b607) list_medium_line_x4_t4_g7_g3

0x4cd5,	// (0x0001b616) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4cd5,	// (0x0001b616) list_medium_line_x4_t4_g7_g4

0x4ce1,	// (0x0001b622) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4ce1,	// (0x0001b622) list_medium_line_x4_t4_g7_g5

0x4cf0,	// (0x0001b631) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4cf0,	// (0x0001b631) list_medium_line_x4_t4_g7_g6

0x4cff,	// (0x0001b640) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4cff,	// (0x0001b640) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00026530) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00026530) list_medium_line_x4_t4_g7_g

0x4d0b,	// (0x0001b64c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4d0b,	// (0x0001b64c) list_medium_line_x4_t4_g7_t1

0x4d20,	// (0x0001b661) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4d20,	// (0x0001b661) list_medium_line_x4_t4_g7_t2

0x4d35,	// (0x0001b676) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4d35,	// (0x0001b676) list_medium_line_x4_t4_g7_t3

0x4d4a,	// (0x0001b68b) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4d4a,	// (0x0001b68b) list_medium_line_x4_t4_g7_t4

0x4d5c,	// (0x0001b69d) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4d5c,	// (0x0001b69d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0002653f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0002653f) list_medium_line_x4_t4_g7_t

0x4d6e,	// (0x0001b6af) list_single_dyc_row_pane_ParamLimits

0x4d6e,	// (0x0001b6af) list_single_dyc_row_pane

0xdedd,	// (0x0002481e) call5_gesture_pane_ParamLimits

0xdedd,	// (0x0002481e) call5_gesture_pane

0xdf11,	// (0x00024852) call5_windows_pane_ParamLimits

0xdf11,	// (0x00024852) call5_windows_pane

0xdf83,	// (0x000248c4) call5_swipe_1_pane_cp_ParamLimits

0xdf83,	// (0x000248c4) call5_swipe_1_pane_cp

0xdf8f,	// (0x000248d0) call5_swipe_2_pane_cp_ParamLimits

0xdf8f,	// (0x000248d0) call5_swipe_2_pane_cp

0x193a,	// (0x0001827b) call5_image_pane_cp

0xdf9b,	// (0x000248dc) popup_call5_audio_first_window_cp_ParamLimits

0xdf9b,	// (0x000248dc) popup_call5_audio_first_window_cp

0x5230,	// (0x0001bb71) call5_swipe_1_pane_g1_cp_ParamLimits

0x5230,	// (0x0001bb71) call5_swipe_1_pane_g1_cp

0x5270,	// (0x0001bbb1) call5_swipe_1_pane_g2_cp

0x5249,	// (0x0001bb8a) call5_swipe_1_pane_t1_cp_ParamLimits

0x5249,	// (0x0001bb8a) call5_swipe_1_pane_t1_cp

0x5230,	// (0x0001bb71) call5_swipe_2_pane_g1_cp_ParamLimits

0x5230,	// (0x0001bb71) call5_swipe_2_pane_g1_cp

0x5278,	// (0x0001bbb9) call5_swipe_2_pane_g2_cp

0x5280,	// (0x0001bbc1) call5_swipe_2_pane_t1_cp_ParamLimits

0x5280,	// (0x0001bbc1) call5_swipe_2_pane_t1_cp

0x0432,	// (0x00016d73) main_sp_fs_email_pane

0x5295,	// (0x0001bbd6) main_sp_fs_listscroll_pane_te

0x529e,	// (0x0001bbdf) popup_sp_fs_action_menu_pane_ParamLimits

0x529e,	// (0x0001bbdf) popup_sp_fs_action_menu_pane

0x32fd,	// (0x00019c3e) bg_sp_fs_ctrlbar_pane_g1

0x52e2,	// (0x0001bc23) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x52eb,	// (0x0001bc2c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x52f4,	// (0x0001bc35) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x32fd,	// (0x00019c3e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x00026628) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x30e2,	// (0x00019a23) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x30e2,	// (0x00019a23) bg_sp_fs_ctrlbar_ddmenu_pane

0x52fd,	// (0x0001bc3e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x52fd,	// (0x0001bc3e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5309,	// (0x0001bc4a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5309,	// (0x0001bc4a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00026631) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00026631) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5315,	// (0x0001bc56) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5315,	// (0x0001bc56) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x532f,	// (0x0001bc70) list_medium_line_t2_right_icon_g1

0xdfa9,	// (0x000248ea) list_medium_line_t2_right_icon_t1

0xdfb9,	// (0x000248fa) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x00026636) list_medium_line_t2_right_icon_t

0x2df7,	// (0x00019738) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2df7,	// (0x00019738) bg_sp_fs_ctrlbar_pane

0xe01e,	// (0x0002495f) main_sp_fs_ctrlbar_button_pane_cp01

0xe026,	// (0x00024967) main_sp_fs_ctrlbar_ddmenu_pane

0x536f,	// (0x0001bcb0) main_sp_fs_ctrlbar_pane_g1

0x537b,	// (0x0001bcbc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0002663b) main_sp_fs_ctrlbar_pane_g

0x5387,	// (0x0001bcc8) main_sp_fs_ctrlbar_pane_t1

0xe030,	// (0x00024971) main_sp_fs_ctrlbar_pane

0xe04c,	// (0x0002498d) main_sp_fs_listscroll_pane_te_cp01

0xe05d,	// (0x0002499e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xe05d,	// (0x0002499e) popup_sp_fs_action_menu_pane_cp01

0x0432,	// (0x00016d73) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0432,	// (0x00016d73) bg_sp_fs_highlight_list_pane_cp01

0x539c,	// (0x0001bcdd) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x539c,	// (0x0001bcdd) sp_fs_action_menu_list_gene_pane_g1

0x53ab,	// (0x0001bcec) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x53ab,	// (0x0001bcec) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00026640) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00026640) sp_fs_action_menu_list_gene_pane_g

0x53b8,	// (0x0001bcf9) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x53b8,	// (0x0001bcf9) sp_fs_action_menu_list_gene_pane_t1

0x53d0,	// (0x0001bd11) sp_fs_action_menu_list_gene_pane_ParamLimits

0x53d0,	// (0x0001bd11) sp_fs_action_menu_list_gene_pane

0x53f1,	// (0x0001bd32) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x53f1,	// (0x0001bd32) popup_sp_fs_action_menu_bg_pane

0x53ff,	// (0x0001bd40) sp_fs_action_menu_list_pane_ParamLimits

0x53ff,	// (0x0001bd40) sp_fs_action_menu_list_pane

0x5421,	// (0x0001bd62) sp_fs_scroll_pane_cp01_ParamLimits

0x5421,	// (0x0001bd62) sp_fs_scroll_pane_cp01

0xe075,	// (0x000249b6) list_medium_line_plain_t2_t1

0xe085,	// (0x000249c6) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00026645) list_medium_line_plain_t2_t

0xe093,	// (0x000249d4) list_medium_line_plain_t3_t1

0xe0a3,	// (0x000249e4) list_medium_line_plain_t3_t2

0xe0b1,	// (0x000249f2) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0002664a) list_medium_line_plain_t3_t

0x0e7c,	// (0x000177bd) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x2_t2_g2_g1

0x0e94,	// (0x000177d5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0e94,	// (0x000177d5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00025bab) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00025bab) list_medium_line_x2_t2_g2_g

0x14a5,	// (0x00017de6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x14a5,	// (0x00017de6) list_medium_line_x2_t2_g2_t1

0x0eb5,	// (0x000177f6) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0eb5,	// (0x000177f6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00026651) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00026651) list_medium_line_x2_t2_g2_t

0x0e7c,	// (0x000177bd) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x2_t4_g2_g1

0x0e94,	// (0x000177d5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0e94,	// (0x000177d5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x00025bab) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x00025bab) list_medium_line_x2_t4_g2_g

0xe0bf,	// (0x00024a00) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe0bf,	// (0x00024a00) list_medium_line_x2_t4_g2_t1

0xe0d9,	// (0x00024a1a) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe0d9,	// (0x00024a1a) list_medium_line_x2_t4_g2_t2

0xe0ee,	// (0x00024a2f) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe0ee,	// (0x00024a2f) list_medium_line_x2_t4_g2_t3

0x0eb5,	// (0x000177f6) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0eb5,	// (0x000177f6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x00026656) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x00026656) list_medium_line_x2_t4_g2_t

0x5447,	// (0x0001bd88) list_medium_line_t3_right_iconx2_g1

0x532f,	// (0x0001bc70) list_medium_line_t3_right_iconx2_g2

0xe103,	// (0x00024a44) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0002665f) list_medium_line_t3_right_iconx2_g

0xe10b,	// (0x00024a4c) list_medium_line_t3_right_iconx2_t1

0xe11b,	// (0x00024a5c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00026666) list_medium_line_t3_right_iconx2_t

0x0e7c,	// (0x000177bd) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x3_t4_g4_g1

0x0e88,	// (0x000177c9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0e88,	// (0x000177c9) list_medium_line_x3_t4_g4_g2

0x0efe,	// (0x0001783f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0efe,	// (0x0001783f) list_medium_line_x3_t4_g4_g3

0x544f,	// (0x0001bd90) list_medium_line_x3_t4_g4_g4_ParamLimits

0x544f,	// (0x0001bd90) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0002666b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0002666b) list_medium_line_x3_t4_g4_g

0xe129,	// (0x00024a6a) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe129,	// (0x00024a6a) list_medium_line_x3_t4_g4_t1

0xe140,	// (0x00024a81) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe140,	// (0x00024a81) list_medium_line_x3_t4_g4_t2

0x14ba,	// (0x00017dfb) list_medium_line_x3_t4_g4_t3_ParamLimits

0x14ba,	// (0x00017dfb) list_medium_line_x3_t4_g4_t3

0x545b,	// (0x0001bd9c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x545b,	// (0x0001bd9c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00026674) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00026674) list_medium_line_x3_t4_g4_t

0xe155,	// (0x00024a96) list_single_dyc_row_text_pane_t1_ParamLimits

0xe155,	// (0x00024a96) list_single_dyc_row_text_pane_t1

0xe18c,	// (0x00024acd) list_single_dyc_row_text_pane_t2_ParamLimits

0xe18c,	// (0x00024acd) list_single_dyc_row_text_pane_t2

0x5478,	// (0x0001bdb9) list_single_dyc_row_text_pane_t3_ParamLimits

0x5478,	// (0x0001bdb9) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0002667d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0002667d) list_single_dyc_row_text_pane_t

0x548a,	// (0x0001bdcb) list_single_dyc_row_pane_g1_ParamLimits

0x548a,	// (0x0001bdcb) list_single_dyc_row_pane_g1

0x5496,	// (0x0001bdd7) list_single_dyc_row_pane_g2_ParamLimits

0x5496,	// (0x0001bdd7) list_single_dyc_row_pane_g2

0x54a2,	// (0x0001bde3) list_single_dyc_row_pane_g3_ParamLimits

0x54a2,	// (0x0001bde3) list_single_dyc_row_pane_g3

0x54ae,	// (0x0001bdef) list_single_dyc_row_pane_g4_ParamLimits

0x54ae,	// (0x0001bdef) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00026684) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00026684) list_single_dyc_row_pane_g

0x54ba,	// (0x0001bdfb) list_single_dyc_row_text_pane_ParamLimits

0x54ba,	// (0x0001bdfb) list_single_dyc_row_text_pane

0x03c2,	// (0x00016d03) bg_sp_fs_scroll_pane

0x54d9,	// (0x0001be1a) thumb_sp_fs_scroll_pane

0x4392,	// (0x0001acd3) list_medium_line_g1_ParamLimits

0x4392,	// (0x0001acd3) list_medium_line_g1

0x54e2,	// (0x0001be23) list_medium_line_t1_ParamLimits

0x54e2,	// (0x0001be23) list_medium_line_t1

0x0e7c,	// (0x000177bd) list_medium_line_x2_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x2_g1

0x0e88,	// (0x000177c9) list_medium_line_x2_g2_ParamLimits

0x0e88,	// (0x000177c9) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0002668d) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0002668d) list_medium_line_x2_g

0x54f7,	// (0x0001be38) list_medium_line_x2_t1_ParamLimits

0x54f7,	// (0x0001be38) list_medium_line_x2_t1

0x0e7c,	// (0x000177bd) list_medium_line_x3_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x3_g1

0x0e88,	// (0x000177c9) list_medium_line_x3_g2_ParamLimits

0x0e88,	// (0x000177c9) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0002668d) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0002668d) list_medium_line_x3_g

0x54f7,	// (0x0001be38) list_medium_line_x3_t1_ParamLimits

0x54f7,	// (0x0001be38) list_medium_line_x3_t1

0x550d,	// (0x0001be4e) thumb_sp_fs_scroll_pane_g1

0x5516,	// (0x0001be57) thumb_sp_fs_scroll_pane_g2

0x551f,	// (0x0001be60) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00026692) thumb_sp_fs_scroll_pane_g

0x550d,	// (0x0001be4e) bg_sp_fs_scroll_pane_g1

0x5516,	// (0x0001be57) bg_sp_fs_scroll_pane_g2

0x551f,	// (0x0001be60) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00026692) bg_sp_fs_scroll_pane_g

0x0e7c,	// (0x000177bd) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0e7c,	// (0x000177bd) list_medium_line_x2_t3_g4_g1

0x0ef2,	// (0x00017833) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0ef2,	// (0x00017833) list_medium_line_x2_t3_g4_g2

0x0e88,	// (0x000177c9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0e88,	// (0x000177c9) list_medium_line_x2_t3_g4_g3

0x0e94,	// (0x000177d5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0e94,	// (0x000177d5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00025c27) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00025c27) list_medium_line_x2_t3_g4_g

0xe1e6,	// (0x00024b27) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe1e6,	// (0x00024b27) list_medium_line_x2_t3_g4_t1

0xe1fc,	// (0x00024b3d) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe1fc,	// (0x00024b3d) list_medium_line_x2_t3_g4_t2

0x0eb5,	// (0x000177f6) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0eb5,	// (0x000177f6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00026699) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00026699) list_medium_line_x2_t3_g4_t

0x4392,	// (0x0001acd3) list_medium_line_g2_g1_ParamLimits

0x4392,	// (0x0001acd3) list_medium_line_g2_g1

0x439e,	// (0x0001acdf) list_medium_line_g2_g2_ParamLimits

0x439e,	// (0x0001acdf) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00026360) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00026360) list_medium_line_g2_g

0x5528,	// (0x0001be69) list_medium_line_g2_t1_ParamLimits

0x5528,	// (0x0001be69) list_medium_line_g2_t1

0x4392,	// (0x0001acd3) list_medium_line_t3_g2_g1_ParamLimits

0x4392,	// (0x0001acd3) list_medium_line_t3_g2_g1

0x439e,	// (0x0001acdf) list_medium_line_t3_g2_g2_ParamLimits

0x439e,	// (0x0001acdf) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00026360) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00026360) list_medium_line_t3_g2_g

0xe216,	// (0x00024b57) list_medium_line_t3_g2_t1_ParamLimits

0xe216,	// (0x00024b57) list_medium_line_t3_g2_t1

0xe22d,	// (0x00024b6e) list_medium_line_t3_g2_t2_ParamLimits

0xe22d,	// (0x00024b6e) list_medium_line_t3_g2_t2

0xe242,	// (0x00024b83) list_medium_line_t3_g2_t3_ParamLimits

0xe242,	// (0x00024b83) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x000266a0) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x000266a0) list_medium_line_t3_g2_t

0x532f,	// (0x0001bc70) list_medium_line_right_icon_g1

0x553d,	// (0x0001be7e) list_medium_line_right_icon_t1

0x4392,	// (0x0001acd3) list_medium_line_t2_g1_ParamLimits

0x4392,	// (0x0001acd3) list_medium_line_t2_g1

0xe257,	// (0x00024b98) list_medium_line_t2_t1_ParamLimits

0xe257,	// (0x00024b98) list_medium_line_t2_t1

0xe271,	// (0x00024bb2) list_medium_line_t2_t2_ParamLimits

0xe271,	// (0x00024bb2) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x000266a7) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x000266a7) list_medium_line_t2_t

0x4392,	// (0x0001acd3) list_medium_line_t3_g1_ParamLimits

0x4392,	// (0x0001acd3) list_medium_line_t3_g1

0xe286,	// (0x00024bc7) list_medium_line_t3_t1_ParamLimits

0xe286,	// (0x00024bc7) list_medium_line_t3_t1

0xe2a0,	// (0x00024be1) list_medium_line_t3_t2_ParamLimits

0xe2a0,	// (0x00024be1) list_medium_line_t3_t2

0xe2b5,	// (0x00024bf6) list_medium_line_t3_t3_ParamLimits

0xe2b5,	// (0x00024bf6) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x000266ac) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x000266ac) list_medium_line_t3_t

0x4392,	// (0x0001acd3) list_medium_line_g3_g1_ParamLimits

0x4392,	// (0x0001acd3) list_medium_line_g3_g1

0x554b,	// (0x0001be8c) list_medium_line_g3_g2_ParamLimits

0x554b,	// (0x0001be8c) list_medium_line_g3_g2

0x439e,	// (0x0001acdf) list_medium_line_g3_g3_ParamLimits

0x439e,	// (0x0001acdf) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x000266b3) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x000266b3) list_medium_line_g3_g

0x5557,	// (0x0001be98) list_medium_line_g3_t1_ParamLimits

0x5557,	// (0x0001be98) list_medium_line_g3_t1

0x4392,	// (0x0001acd3) list_medium_line_t2_g3_g1_ParamLimits

0x4392,	// (0x0001acd3) list_medium_line_t2_g3_g1

0x554b,	// (0x0001be8c) list_medium_line_t2_g3_g2_ParamLimits

0x554b,	// (0x0001be8c) list_medium_line_t2_g3_g2

0x439e,	// (0x0001acdf) list_medium_line_t2_g3_g3_ParamLimits

0x439e,	// (0x0001acdf) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x000266b3) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x000266b3) list_medium_line_t2_g3_g

0xe2ca,	// (0x00024c0b) list_medium_line_t2_g3_t1_ParamLimits

0xe2ca,	// (0x00024c0b) list_medium_line_t2_g3_t1

0xe2e4,	// (0x00024c25) list_medium_line_t2_g3_t2_ParamLimits

0xe2e4,	// (0x00024c25) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x000266ba) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x000266ba) list_medium_line_t2_g3_t

0x4392,	// (0x0001acd3) list_medium_line_t3_g3_g1_ParamLimits

0x4392,	// (0x0001acd3) list_medium_line_t3_g3_g1

0x554b,	// (0x0001be8c) list_medium_line_t3_g3_g2_ParamLimits

0x554b,	// (0x0001be8c) list_medium_line_t3_g3_g2

0x439e,	// (0x0001acdf) list_medium_line_t3_g3_g3_ParamLimits

0x439e,	// (0x0001acdf) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x000266b3) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x000266b3) list_medium_line_t3_g3_g

0xe2f9,	// (0x00024c3a) list_medium_line_t3_g3_t1_ParamLimits

0xe2f9,	// (0x00024c3a) list_medium_line_t3_g3_t1

0xe30d,	// (0x00024c4e) list_medium_line_t3_g3_t2_ParamLimits

0xe30d,	// (0x00024c4e) list_medium_line_t3_g3_t2

0xe31f,	// (0x00024c60) list_medium_line_t3_g3_t3_ParamLimits

0xe31f,	// (0x00024c60) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x000266bf) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x000266bf) list_medium_line_t3_g3_t

0x5447,	// (0x0001bd88) list_medium_line_right_iconx2_g1

0x532f,	// (0x0001bc70) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x000266c6) list_medium_line_right_iconx2_g

0x556c,	// (0x0001bead) list_medium_line_right_iconx2_t1

0x5447,	// (0x0001bd88) list_medium_line_t2_right_iconx2_g1

0x532f,	// (0x0001bc70) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x000266c6) list_medium_line_t2_right_iconx2_g

0xe331,	// (0x00024c72) list_medium_line_t2_right_iconx2_t1

0xe341,	// (0x00024c82) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x000266cb) list_medium_line_t2_right_iconx2_t

0x557a,	// (0x0001bebb) list_medium_line_x4_t4_t1

0xe34f,	// (0x00024c90) list_medium_line_x4_t4_t2

0xe35f,	// (0x00024ca0) list_medium_line_x4_t4_t3

0xe36f,	// (0x00024cb0) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x000266d0) list_medium_line_x4_t4_t

0xe3a8,	// (0x00024ce9) tport_appsw_pane_ParamLimits

0xe3a8,	// (0x00024ce9) tport_appsw_pane

0xe3b4,	// (0x00024cf5) tport_contact_pane_ParamLimits

0xe3b4,	// (0x00024cf5) tport_contact_pane

0xe3c4,	// (0x00024d05) tport_listscroll_pane_ParamLimits

0xe3c4,	// (0x00024d05) tport_listscroll_pane

0xe3d4,	// (0x00024d15) cell_tport_appsw_pane_ParamLimits

0xe3d4,	// (0x00024d15) cell_tport_appsw_pane

0x35da,	// (0x00019f1b) tport_appsw_pane_g1_ParamLimits

0x35da,	// (0x00019f1b) tport_appsw_pane_g1

0x5588,	// (0x0001bec9) tport_contact_pane_g1

0x4e5f,	// (0x0001b7a0) tport_contact_pane_t1

0x5591,	// (0x0001bed2) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x000266d9) tport_contact_pane_t

0x559f,	// (0x0001bee0) list_tport_pane

0x55a8,	// (0x0001bee9) scroll_pane_cp_030

0x55b9,	// (0x0001befa) cell_tport_appsw_pane_g1

0x55c9,	// (0x0001bf0a) cell_tport_appsw_pane_t1

0x03c2,	// (0x00016d03) grid_highlight_pane_cp019

0xe3ff,	// (0x00024d40) list_tport_double_graphic_pane_ParamLimits

0xe3ff,	// (0x00024d40) list_tport_double_graphic_pane

0x0432,	// (0x00016d73) list_highlight_pane_cp023_ParamLimits

0x0432,	// (0x00016d73) list_highlight_pane_cp023

0xe411,	// (0x00024d52) list_tport_double_graphic_pane_g1_ParamLimits

0xe411,	// (0x00024d52) list_tport_double_graphic_pane_g1

0xe41e,	// (0x00024d5f) list_tport_double_graphic_pane_t1_ParamLimits

0xe41e,	// (0x00024d5f) list_tport_double_graphic_pane_t1

0xe433,	// (0x00024d74) list_tport_double_graphic_pane_t2_ParamLimits

0xe433,	// (0x00024d74) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x000266e5) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x000266e5) list_tport_double_graphic_pane_t

0x03c2,	// (0x00016d03) main_cale_note_pane

0x7e51,	// (0x0001e792) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7e51,	// (0x0001e792) cell_vitu2_function_top_wide_pane_cp01

0xda93,	// (0x000243d4) wait_bar_pane_cp05_ParamLimits

0x03c2,	// (0x00016d03) listscroll_cmail_pane

0x55df,	// (0x0001bf20) list_cmail_pane

0xe44f,	// (0x00024d90) list_cmail_body_pane

0xe46c,	// (0x00024dad) list_single_cmail_header_caption_pane

0xe491,	// (0x00024dd2) list_single_cmail_header_detail_pane_ParamLimits

0xe491,	// (0x00024dd2) list_single_cmail_header_detail_pane

0xe4c4,	// (0x00024e05) list_single_cmail_header_caption_pane_t1

0xe4d2,	// (0x00024e13) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe4d2,	// (0x00024e13) list_single_cmail_header_detail_pane_g1

0x5600,	// (0x0001bf41) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5600,	// (0x0001bf41) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x000266ea) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x000266ea) list_single_cmail_header_detail_pane_g

0x5619,	// (0x0001bf5a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5619,	// (0x0001bf5a) list_single_cmail_header_detail_pane_t1

0x564f,	// (0x0001bf90) list_single_cmail_header_editor_pane_bg_ParamLimits

0x564f,	// (0x0001bf90) list_single_cmail_header_editor_pane_bg

0x500e,	// (0x0001b94f) list_cmail_body_pane_g1

0x5661,	// (0x0001bfa2) list_cmail_body_pane_t1

0x40bd,	// (0x0001a9fe) list_single_cmail_header_editor_pane_bg_g1

0x1111,	// (0x00017a52) list_single_cmail_header_editor_pane_bg_g1_copy1

0x40cd,	// (0x0001aa0e) list_single_cmail_header_editor_pane_bg_g1_copy2

0x40c5,	// (0x0001aa06) list_single_cmail_header_editor_pane_bg_g1_copy3

0x436a,	// (0x0001acab) list_single_cmail_header_editor_pane_bg_g1_copy4

0x40ed,	// (0x0001aa2e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x40dd,	// (0x0001aa1e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x40e5,	// (0x0001aa26) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x10f1,	// (0x00017a32) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe50c,	// (0x00024e4d) calenote_gesture_pane_ParamLimits

0xe50c,	// (0x00024e4d) calenote_gesture_pane

0xe526,	// (0x00024e67) calenote_window_pane_ParamLimits

0xe526,	// (0x00024e67) calenote_window_pane

0x566f,	// (0x0001bfb0) popup_note_window_cp01

0xe53e,	// (0x00024e7f) calenote_swipe_1_pane_ParamLimits

0xe53e,	// (0x00024e7f) calenote_swipe_1_pane

0xdf8f,	// (0x000248d0) calenote_swipe_2_pane_ParamLimits

0xdf8f,	// (0x000248d0) calenote_swipe_2_pane

0x5230,	// (0x0001bb71) calenote_swipe_1_pane_g1_ParamLimits

0x5230,	// (0x0001bb71) calenote_swipe_1_pane_g1

0x523d,	// (0x0001bb7e) calenote_swipe_1_pane_g2_ParamLimits

0x523d,	// (0x0001bb7e) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0002661e) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0002661e) calenote_swipe_1_pane_g

0x5681,	// (0x0001bfc2) calenote_swipe_1_pane_t1_ParamLimits

0x5681,	// (0x0001bfc2) calenote_swipe_1_pane_t1

0x5230,	// (0x0001bb71) calenote_swipe_2_pane_g1_ParamLimits

0x5230,	// (0x0001bb71) calenote_swipe_2_pane_g1

0x56a0,	// (0x0001bfe1) calenote_swipe_2_pane_g2_ParamLimits

0x56a0,	// (0x0001bfe1) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x000266f6) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x000266f6) calenote_swipe_2_pane_g

0x56ac,	// (0x0001bfed) calenote_swipe_2_pane_t1_ParamLimits

0x56ac,	// (0x0001bfed) calenote_swipe_2_pane_t1

0x03c2,	// (0x00016d03) main_mup_navstr_pane

0xbb6f,	// (0x000224b0) main_mup3_pane_t7_ParamLimits

0xbb6f,	// (0x000224b0) main_mup3_pane_t7

0x7757,	// (0x0001e098) main_mp4_pane_g6_ParamLimits

0x7757,	// (0x0001e098) main_mp4_pane_g6

0x7a4a,	// (0x0001e38b) main_image3_pane_t4_ParamLimits

0x7a4a,	// (0x0001e38b) main_image3_pane_t4

0xe551,	// (0x00024e92) popup_navstr_preview_pane_ParamLimits

0xe551,	// (0x00024e92) popup_navstr_preview_pane

0xe55d,	// (0x00024e9e) scroll_navstr_pane_ParamLimits

0xe55d,	// (0x00024e9e) scroll_navstr_pane

0x03c2,	// (0x00016d03) bg_popup_preview_window_pane_cp04

0x56d3,	// (0x0001c014) popup_navstr_preview_pane_t1

0xe569,	// (0x00024eaa) scroll_navstr_pane_g1_ParamLimits

0xe569,	// (0x00024eaa) scroll_navstr_pane_g1

0xe576,	// (0x00024eb7) scroll_navstr_pane_t1_ParamLimits

0xe576,	// (0x00024eb7) scroll_navstr_pane_t1

0x5678,	// (0x0001bfb9) bg_button_pane_cp014

0x5678,	// (0x0001bfb9) bg_button_pane_cp030

0xde83,	// (0x000247c4) list_double_fisheye_pane_g4_ParamLimits

0xde83,	// (0x000247c4) list_double_fisheye_pane_g4

0xde8f,	// (0x000247d0) list_double_fisheye_pane_g5_ParamLimits

0xde8f,	// (0x000247d0) list_double_fisheye_pane_g5

0x55e7,	// (0x0001bf28) sp_fs_scroll_pane_cp03

0x536f,	// (0x0001bcb0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x537b,	// (0x0001bcbc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0002663b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5387,	// (0x0001bcc8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe445,	// (0x00024d86) sp_fs_scroll_pane_cp02

0x0d17,	// (0x00017658) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0d17,	// (0x00017658) popup_sp_fs_calendar_preview_list_single_pane

0x03c2,	// (0x00016d03) main_cam6_pano_pane

0x0432,	// (0x00016d73) main_mup3_pane_ParamLimits

0x03c2,	// (0x00016d03) main_phacti_pane

0xd968,	// (0x000242a9) bg_button_pane_cp11

0xd980,	// (0x000242c1) main_mobtv_info_pane_g2_ParamLimits

0xd980,	// (0x000242c1) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0002659b) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0002659b) main_mobtv_info_pane_g

0xdb32,	// (0x00024473) sc_clock_pane_t5_ParamLimits

0xdb32,	// (0x00024473) sc_clock_pane_t5

0xdd11,	// (0x00024652) main_radioblah_pane_g1_ParamLimits

0x517c,	// (0x0001babd) main_radioblah_pane_t3_ParamLimits

0x517c,	// (0x0001babd) main_radioblah_pane_t3

0x5194,	// (0x0001bad5) main_radioblah_pane_t4_ParamLimits

0x5194,	// (0x0001bad5) main_radioblah_pane_t4

0xdd2f,	// (0x00024670) main_radioblah_text_pane_ParamLimits

0xdd2f,	// (0x00024670) main_radioblah_text_pane

0xdd3c,	// (0x0002467d) main_radioblah_info_pane_g1_ParamLimits

0xddd1,	// (0x00024712) main_radioblah_info_pane_t4_ParamLimits

0xddd1,	// (0x00024712) main_radioblah_info_pane_t4

0x0432,	// (0x00016d73) main_sp_fs_calendar_pane

0xe588,	// (0x00024ec9) main_phacti_pane_g1

0xe590,	// (0x00024ed1) phacti_note_pane_ParamLimits

0xe590,	// (0x00024ed1) phacti_note_pane

0x56ea,	// (0x0001c02b) phacti_term_pane_ParamLimits

0x56ea,	// (0x0001c02b) phacti_term_pane

0x56ff,	// (0x0001c040) phacti_note_pane_t1_ParamLimits

0x56ff,	// (0x0001c040) phacti_note_pane_t1

0x5716,	// (0x0001c057) phacti_term_pane_g1

0x571e,	// (0x0001c05f) phacti_term_pane_t1_ParamLimits

0x571e,	// (0x0001c05f) phacti_term_pane_t1

0x5748,	// (0x0001c089) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0e74,	// (0x000177b5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00026700) popup_sp_fs_calendar_preview_list_single_pane_g

0x5750,	// (0x0001c091) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x5750,	// (0x0001c091) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5765,	// (0x0001c0a6) aid_popup_sp_fs_bg_corner_pane

0x32fd,	// (0x00019c3e) popup_sp_fs_calendar_preview_bg_pane_g1

0x03c2,	// (0x00016d03) popup_sp_fs_calendar_preview_bg_pane

0x576d,	// (0x0001c0ae) popup_sp_fs_calendar_preview_list_pane

0x0432,	// (0x00016d73) bg_main_sp_fs_cale_pane_ParamLimits

0x0432,	// (0x00016d73) bg_main_sp_fs_cale_pane

0x577e,	// (0x0001c0bf) listscroll_cale_mrui_pane_ParamLimits

0x577e,	// (0x0001c0bf) listscroll_cale_mrui_pane

0x5792,	// (0x0001c0d3) listscroll_sp_fs_schedule_track_pane

0x579b,	// (0x0001c0dc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x579b,	// (0x0001c0dc) main_sp_fs_ctrlbar_pane_cp01

0x57ac,	// (0x0001c0ed) main_sp_fs_ribbon_pane

0x57b4,	// (0x0001c0f5) popup_sp_fs_cale_preview_window

0xe5cf,	// (0x00024f10) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe5cf,	// (0x00024f10) list_single_sp_fs_schedule_track_pane

0x3ac2,	// (0x0001a403) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3ac2,	// (0x0001a403) bg_sp_fs_highlight_list_pane_cp03

0xe5e8,	// (0x00024f29) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe5e8,	// (0x00024f29) list_single_sp_fs_schedule_track_pane_g1

0xe5f4,	// (0x00024f35) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe5f4,	// (0x00024f35) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x00026705) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x00026705) list_single_sp_fs_schedule_track_pane_g

0xe600,	// (0x00024f41) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe600,	// (0x00024f41) list_single_sp_fs_schedule_track_pane_t1

0xe618,	// (0x00024f59) sp_fs_schedule_track_pane_ParamLimits

0xe618,	// (0x00024f59) sp_fs_schedule_track_pane

0x57c6,	// (0x0001c107) sp_fs_schedule_track_pane_g1

0x57ce,	// (0x0001c10f) sp_fs_schedule_track_pane_g2

0x57d6,	// (0x0001c117) sp_fs_schedule_track_pane_g3

0x57de,	// (0x0001c11f) sp_fs_schedule_track_pane_g4

0x57e6,	// (0x0001c127) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0002670a) sp_fs_schedule_track_pane_g

0x40bd,	// (0x0001a9fe) bg_sp_fs_schedule_viewer_highlight_g1

0x1111,	// (0x00017a52) bg_sp_fs_schedule_viewer_highlight_g2

0x40c5,	// (0x0001aa06) bg_sp_fs_schedule_viewer_highlight_g3

0x40cd,	// (0x0001aa0e) bg_sp_fs_schedule_viewer_highlight_g4

0x436a,	// (0x0001acab) bg_sp_fs_schedule_viewer_highlight_g5

0x40dd,	// (0x0001aa1e) bg_sp_fs_schedule_viewer_highlight_g6

0x40e5,	// (0x0001aa26) bg_sp_fs_schedule_viewer_highlight_g7

0x40ed,	// (0x0001aa2e) bg_sp_fs_schedule_viewer_highlight_g8

0x10f1,	// (0x00017a32) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00026715) bg_sp_fs_schedule_viewer_highlight_g

0x03c2,	// (0x00016d03) bg_main_sp_fs_ribbon_pane

0xe628,	// (0x00024f69) main_sp_fs_ribbon_pane_g1

0x57ee,	// (0x0001c12f) main_sp_fs_ribbon_pane_t1

0xe631,	// (0x00024f72) main_sp_fs_ribbon_pane_t2

0x57fd,	// (0x0001c13e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00026728) main_sp_fs_ribbon_pane_t

0x580c,	// (0x0001c14d) main_sp_fs_ribbon_scheduler_pane

0x5814,	// (0x0001c155) bg_main_sp_fs_ribbon_pane_g1

0x581d,	// (0x0001c15e) bg_main_sp_fs_ribbon_pane_g2

0x5826,	// (0x0001c167) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x0002672f) bg_main_sp_fs_ribbon_pane_g

0x582e,	// (0x0001c16f) main_sp_fs_ribbon_scheduler_pane_g1

0x5837,	// (0x0001c178) main_sp_fs_ribbon_scheduler_pane_g2

0x5840,	// (0x0001c181) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00026736) main_sp_fs_ribbon_scheduler_pane_g

0x5849,	// (0x0001c18a) list_cale_mrui_pane

0xe640,	// (0x00024f81) sp_fs_scroll_pane_cp07_ParamLimits

0xe640,	// (0x00024f81) sp_fs_scroll_pane_cp07

0xe656,	// (0x00024f97) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe656,	// (0x00024f97) bg_sp_fs_schedule_viewer_highlight

0x5852,	// (0x0001c193) list_single_sp_fs_schedule_track_pane_cp01

0x585a,	// (0x0001c19b) list_sp_fs_schedule_track_pane

0x5862,	// (0x0001c1a3) sp_fs_scroll_pane_cp06_ParamLimits

0x5862,	// (0x0001c1a3) sp_fs_scroll_pane_cp06

0x32fd,	// (0x00019c3e) bgmain_sp_fs_calendar_pane_g1

0xe663,	// (0x00024fa4) list_single_cale_mrui_pane_ParamLimits

0xe663,	// (0x00024fa4) list_single_cale_mrui_pane

0x5874,	// (0x0001c1b5) list_single_cale_mrui_row_pane_ParamLimits

0x5874,	// (0x0001c1b5) list_single_cale_mrui_row_pane

0x5881,	// (0x0001c1c2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5881,	// (0x0001c1c2) list_single_cale_mrui_row_pane_g1

0x58b9,	// (0x0001c1fa) list_single_cale_mrui_row_pane_t1_ParamLimits

0x58b9,	// (0x0001c1fa) list_single_cale_mrui_row_pane_t1

0xe688,	// (0x00024fc9) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe688,	// (0x00024fc9) list_single_cale_mrui_row_pane_t2

0x58cb,	// (0x0001c20c) list_single_cale_mrui_row_pane_t3_ParamLimits

0x58cb,	// (0x0001c20c) list_single_cale_mrui_row_pane_t3

0x58fa,	// (0x0001c23b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x58fa,	// (0x0001c23b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x00026742) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x00026742) list_single_cale_mrui_row_pane_t

0xe6ee,	// (0x0002502f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe6ee,	// (0x0002502f) list_single_cmail_header_editor_pane_bg_cp01

0xe70e,	// (0x0002504f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe70e,	// (0x0002504f) list_single_cmail_header_editor_pane_bg_cp02

0xe72a,	// (0x0002506b) main_radioblah_text_pane_t1_ParamLimits

0xe72a,	// (0x0002506b) main_radioblah_text_pane_t1

0x5929,	// (0x0001c26a) cam6_indi_pane_cp01

0x5931,	// (0x0001c272) cam6_mode_pane_cp01

0x5939,	// (0x0001c27a) cam6_pano_pane

0x5942,	// (0x0001c283) cam6_zoom_pane_cp01

0x594a,	// (0x0001c28b) cam6_pano_image_pane

0x5955,	// (0x0001c296) cam6_pano_pane_g1

0x500e,	// (0x0001b94f) cam6_pano_pane_g2

0x595e,	// (0x0001c29f) cam6_pano_pane_g3

0x5967,	// (0x0001c2a8) cam6_pano_pane_g4

0x38a5,	// (0x0001a1e6) cam6_pano_pane_g5

0x5970,	// (0x0001c2b1) cam6_pano_pane_g6

0x511b,	// (0x0001ba5c) cam6_pano_pane_g7

0x597a,	// (0x0001c2bb) cam6_pano_pane_g8

0x5983,	// (0x0001c2c4) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0002674b) cam6_pano_pane_g

0x03c2,	// (0x00016d03) main_browser_tag_pane

0x56cb,	// (0x0001c00c) grid_navstr_albumart_pane

0x598e,	// (0x0001c2cf) cell_navstr_albumart_pane_ParamLimits

0x598e,	// (0x0001c2cf) cell_navstr_albumart_pane

0x59b1,	// (0x0001c2f2) cell_navstr_albumart_pane_g1

0x2c14,	// (0x00019555) cell_navstr_albumart_pane_g2

0x2c24,	// (0x00019565) cell_navstr_albumart_pane_g3

0x2c1c,	// (0x0001955d) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x0002675e) cell_navstr_albumart_pane_g

0xe745,	// (0x00025086) bt_list_pane_ParamLimits

0xe745,	// (0x00025086) bt_list_pane

0xe765,	// (0x000250a6) bt_list_pane_t1

0xe774,	// (0x000250b5) bt_list_pane_t2

0x0001,

0xfe26,	// (0x00026767) bt_list_pane_t

0x03c2,	// (0x00016d03) main_cale_prevew_pane

0xe783,	// (0x000250c4) popup_cale_preview_window_ParamLimits

0xe783,	// (0x000250c4) popup_cale_preview_window

0x0432,	// (0x00016d73) bg_popup_preview_window_pane_cp05_ParamLimits

0x0432,	// (0x00016d73) bg_popup_preview_window_pane_cp05

0x59b9,	// (0x0001c2fa) list_cale_preview_pane_ParamLimits

0x59b9,	// (0x0001c2fa) list_cale_preview_pane

0x5a60,	// (0x0001c3a1) list_double_cale_preview_pane_ParamLimits

0x5a60,	// (0x0001c3a1) list_double_cale_preview_pane

0xe79c,	// (0x000250dd) list_single_cale_preview_pane_ParamLimits

0xe79c,	// (0x000250dd) list_single_cale_preview_pane

0xe7b2,	// (0x000250f3) list_single_cale_preview_pane_g1

0xe7ba,	// (0x000250fb) list_single_cale_preview_pane_t1_ParamLimits

0xe7ba,	// (0x000250fb) list_single_cale_preview_pane_t1

0xe7cf,	// (0x00025110) list_double_cale_preview_pane_g1

0xe7d7,	// (0x00025118) list_double_cale_preview_pane_t1_ParamLimits

0xe7d7,	// (0x00025118) list_double_cale_preview_pane_t1

0xe7ec,	// (0x0002512d) list_double_cale_preview_pane_t2_ParamLimits

0xe7ec,	// (0x0002512d) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0002676c) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0002676c) list_double_cale_preview_pane_t

0x03c2,	// (0x00016d03) main_ezdial_pane

0x0432,	// (0x00016d73) main_sp_fs_email_pane_ParamLimits

0xdfc7,	// (0x00024908) cmail_ddmenu_btn01_pane_ParamLimits

0xdfc7,	// (0x00024908) cmail_ddmenu_btn01_pane

0xdfe4,	// (0x00024925) cmail_ddmenu_btn02_pane_ParamLimits

0xdfe4,	// (0x00024925) cmail_ddmenu_btn02_pane

0xe002,	// (0x00024943) cmail_ddmenu_btn03_pane_ParamLimits

0xe002,	// (0x00024943) cmail_ddmenu_btn03_pane

0xe030,	// (0x00024971) main_sp_fs_ctrlbar_pane_ParamLimits

0xe04c,	// (0x0002498d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe44f,	// (0x00024d90) list_cmail_body_pane_ParamLimits

0x55f7,	// (0x0001bf38) bg_button_pane_cp12

0x560c,	// (0x0001bf4d) list_single_cmail_header_detail_pane_g3_ParamLimits

0x560c,	// (0x0001bf4d) list_single_cmail_header_detail_pane_g3

0xe4e8,	// (0x00024e29) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe4e8,	// (0x00024e29) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x000266f1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x000266f1) list_single_cmail_header_detail_pane_t

0x5733,	// (0x0001c074) phacti_term_pane_t2_ParamLimits

0x5733,	// (0x0001c074) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x000266fb) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x000266fb) phacti_term_pane_t

0x59c5,	// (0x0001c306) aid_size_list_single_double

0xe804,	// (0x00025145) popup_ezdial_listscroll_window

0xe824,	// (0x00025165) popup_number_entry_window_cp01

0x193a,	// (0x0001827b) bg_popup_call_pane_cp09

0x59d1,	// (0x0001c312) ezdial_list_pane

0x59d9,	// (0x0001c31a) scroll_pane_cp23

0x30e2,	// (0x00019a23) bg_button_pane_cp028_ParamLimits

0x30e2,	// (0x00019a23) bg_button_pane_cp028

0xe832,	// (0x00025173) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe832,	// (0x00025173) cmail_ddmenu_btn01_pane_g1

0xe842,	// (0x00025183) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe842,	// (0x00025183) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x00026771) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x00026771) cmail_ddmenu_btn01_pane_g

0x59e1,	// (0x0001c322) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x59e1,	// (0x0001c322) cmail_ddmenu_btn01_pane_t1

0x2df7,	// (0x00019738) bg_button_pane_cp029_ParamLimits

0x2df7,	// (0x00019738) bg_button_pane_cp029

0xe842,	// (0x00025183) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe842,	// (0x00025183) cmail_ddmenu_btn02_pane_g1

0xe85a,	// (0x0002519b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe85a,	// (0x0002519b) cmail_ddmenu_btn02_pane_t1

0x3ac2,	// (0x0001a403) bg_button_pane_cp031_ParamLimits

0x3ac2,	// (0x0001a403) bg_button_pane_cp031

0xe842,	// (0x00025183) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe842,	// (0x00025183) cmail_ddmenu_btn03_pane_g1

0xe85a,	// (0x0002519b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe85a,	// (0x0002519b) cmail_ddmenu_btn03_pane_t1

0xc3c1,	// (0x00022d02) cell_dialer2_keypad_pane_t1_ParamLimits

0xc3db,	// (0x00022d1c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc3db,	// (0x00022d1c) cell_dialer2_keypad_pane_t1_copy1

0xd808,	// (0x00024149) ncimui_group_button_pane

0x0432,	// (0x00016d73) main_sp_fs_calendar_pane_ParamLimits

0xe46c,	// (0x00024dad) list_single_cmail_header_caption_pane_ParamLimits

0x5775,	// (0x0001c0b6) aid_recal_txt_sm_pane

0x03c2,	// (0x00016d03) mian_recal_day_pane

0x57b4,	// (0x0001c0f5) popup_sp_fs_cale_preview_window_ParamLimits

0x03c2,	// (0x00016d03) list_recal_day_pane

0x5a18,	// (0x0001c359) list_single_recal_day_pane_ParamLimits

0x5a18,	// (0x0001c359) list_single_recal_day_pane

0x5a2a,	// (0x0001c36b) list_single_recal_day_pane_g1_ParamLimits

0x5a2a,	// (0x0001c36b) list_single_recal_day_pane_g1

0x5a36,	// (0x0001c377) list_single_recal_day_pane_g2_ParamLimits

0x5a36,	// (0x0001c377) list_single_recal_day_pane_g2

0x5a45,	// (0x0001c386) list_single_recal_day_pane_g3_ParamLimits

0x5a45,	// (0x0001c386) list_single_recal_day_pane_g3

0xe87e,	// (0x000251bf) list_single_recal_day_pane_g4_ParamLimits

0xe87e,	// (0x000251bf) list_single_recal_day_pane_g4

0x5a51,	// (0x0001c392) list_single_recal_day_pane_g5_ParamLimits

0x5a51,	// (0x0001c392) list_single_recal_day_pane_g5

0x5a98,	// (0x0001c3d9) list_single_recal_day_pane_g6_ParamLimits

0x5a98,	// (0x0001c3d9) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x00026780) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x00026780) list_single_recal_day_pane_g

0x5aa4,	// (0x0001c3e5) list_single_recal_day_pane_t1

0x5ab2,	// (0x0001c3f3) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0002678d) list_single_recal_day_pane_t

0xe891,	// (0x000251d2) ncimui_query_button_pane_ParamLimits

0xe891,	// (0x000251d2) ncimui_query_button_pane

0xe8a1,	// (0x000251e2) ncimui_query_button_pane_t1_ParamLimits

0xe8a1,	// (0x000251e2) ncimui_query_button_pane_t1

0x5ac0,	// (0x0001c401) ncimui_query_button_pane_t2_ParamLimits

0x5ac0,	// (0x0001c401) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00026792) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00026792) ncimui_query_button_pane_t

0xe8b4,	// (0x000251f5) query_button_pane_ParamLimits

0xe8b4,	// (0x000251f5) query_button_pane

0x03c2,	// (0x00016d03) bg_button_pane_cp0028

0x5ad3,	// (0x0001c414) query_button_pane_t1

0xae90,	// (0x000217d1) main_tport_pane_ParamLimits

0xe37f,	// (0x00024cc0) bg_popup_window_pane_cp01_ParamLimits

0xe37f,	// (0x00024cc0) bg_popup_window_pane_cp01

0xe38c,	// (0x00024ccd) heading_pane_cp08_ParamLimits

0xe38c,	// (0x00024ccd) heading_pane_cp08

0xe39a,	// (0x00024cdb) heading_pane_cp07_ParamLimits

0xe39a,	// (0x00024cdb) heading_pane_cp07

0x55b9,	// (0x0001befa) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x000266de) cell_tport_appsw_pane_g

0x1abb,	// (0x000183fc) input_candi_list_open_g1

0x1310,	// (0x00017c51) list_cale_time_pane_g6_ParamLimits

0x1310,	// (0x00017c51) list_cale_time_pane_g6

0xb5dc,	// (0x00021f1d) aid_size_touch_calib_1_ParamLimits

0xb5dc,	// (0x00021f1d) aid_size_touch_calib_1

0xb5e8,	// (0x00021f29) aid_size_touch_calib_2_ParamLimits

0xb5e8,	// (0x00021f29) aid_size_touch_calib_2

0xb5f6,	// (0x00021f37) aid_size_touch_calib_3_ParamLimits

0xb5f6,	// (0x00021f37) aid_size_touch_calib_3

0xb606,	// (0x00021f47) aid_size_touch_calib_4_ParamLimits

0xb606,	// (0x00021f47) aid_size_touch_calib_4

0xb614,	// (0x00021f55) main_touch_calib_button_group_pane_ParamLimits

0xb614,	// (0x00021f55) main_touch_calib_button_group_pane

0xb622,	// (0x00021f63) main_touch_calib_pane_g1_ParamLimits

0xb62e,	// (0x00021f6f) main_touch_calib_pane_g2_ParamLimits

0xb63a,	// (0x00021f7b) main_touch_calib_pane_g3_ParamLimits

0xb646,	// (0x00021f87) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x000260b6) main_touch_calib_pane_g_ParamLimits

0xb652,	// (0x00021f93) main_touch_calib_pane_t1_ParamLimits

0xb669,	// (0x00021faa) main_touch_calib_pane_t2_ParamLimits

0xb680,	// (0x00021fc1) main_touch_calib_pane_t3_ParamLimits

0xb694,	// (0x00021fd5) main_touch_calib_pane_t4_ParamLimits

0xb6a8,	// (0x00021fe9) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x000260bf) main_touch_calib_pane_t_ParamLimits

0x367b,	// (0x00019fbc) list_single_fp_cale_pane_g3_ParamLimits

0x367b,	// (0x00019fbc) list_single_fp_cale_pane_g3

0x7c47,	// (0x0001e588) bg_button_pane_cp012_ParamLimits

0x7c47,	// (0x0001e588) bg_vkb2_func_pane_cp03_ParamLimits

0x8057,	// (0x0001e998) cell_vitu2_function_top_pane_g1_ParamLimits

0x7c47,	// (0x0001e588) bg_vkb2_func_pane_cp04_ParamLimits

0xd7a6,	// (0x000240e7) main_ncimui_button_group_pane_ParamLimits

0xd7a6,	// (0x000240e7) main_ncimui_button_group_pane

0xd7f6,	// (0x00024137) main_ncimui_pane_t3_ParamLimits

0xd7f6,	// (0x00024137) main_ncimui_pane_t3

0x56e1,	// (0x0001c022) phacti_button_group_pane

0x59c5,	// (0x0001c306) aid_size_list_single_double_ParamLimits

0xe804,	// (0x00025145) popup_ezdial_listscroll_window_ParamLimits

0xe824,	// (0x00025165) popup_number_entry_window_cp01_ParamLimits

0xe8c1,	// (0x00025202) phacti_button_pane_ParamLimits

0xe8c1,	// (0x00025202) phacti_button_pane

0x03c2,	// (0x00016d03) bg_button_pane_cp14

0x5ae1,	// (0x0001c422) phacti_button_pane_t1

0xe8d2,	// (0x00025213) main_touch_calib_button_pane_ParamLimits

0xe8d2,	// (0x00025213) main_touch_calib_button_pane

0x0ba7,	// (0x000174e8) bg_button_pane_cp18_ParamLimits

0x0ba7,	// (0x000174e8) bg_button_pane_cp18

0x5aef,	// (0x0001c430) main_touch_calib_button_pane_t1_ParamLimits

0x5aef,	// (0x0001c430) main_touch_calib_button_pane_t1

0x5b05,	// (0x0001c446) main_touch_calib_button_pane_t2_ParamLimits

0x5b05,	// (0x0001c446) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00026797) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00026797) main_touch_calib_button_pane_t

0x03c2,	// (0x00016d03) cell_ncimui_button_pane

0x03c2,	// (0x00016d03) bg_button_pane_cp032

0x5b23,	// (0x0001c464) cell_ncimui_button_pane_t1

0x795d,	// (0x0001e29e) image3_infobar_pane_ParamLimits

0x795d,	// (0x0001e29e) image3_infobar_pane

0xdb54,	// (0x00024495) fs_bigclock_status_pane_ParamLimits

0xdb54,	// (0x00024495) fs_bigclock_status_pane

0xdb61,	// (0x000244a2) main_fs_bigclock_clock_pane_ParamLimits

0xdb61,	// (0x000244a2) main_fs_bigclock_clock_pane

0xdb85,	// (0x000244c6) main_fs_bigclock_indi_pane_ParamLimits

0xdb85,	// (0x000244c6) main_fs_bigclock_indi_pane

0xdbb8,	// (0x000244f9) main_fs_bigclock_swipe_pane_ParamLimits

0xdbb8,	// (0x000244f9) main_fs_bigclock_swipe_pane

0x03c2,	// (0x00016d03) main_fs_clock_dumped_data

0xdbea,	// (0x0002452b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdbea,	// (0x0002452b) list_single_fs_bigclock_indicator_pane_g1

0xdc0b,	// (0x0002454c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdc0b,	// (0x0002454c) list_single_fs_bigclock_indicator_pane_g2

0xdc25,	// (0x00024566) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdc25,	// (0x00024566) list_single_fs_bigclock_indicator_pane_g3

0xdc3f,	// (0x00024580) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdc3f,	// (0x00024580) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x000265cf) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x000265cf) list_single_fs_bigclock_indicator_pane_g

0xdc65,	// (0x000245a6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdc65,	// (0x000245a6) list_single_fs_bigclock_indicator_pane_t1

0xdc8d,	// (0x000245ce) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdc8d,	// (0x000245ce) list_single_fs_bigclock_indicator_pane_t2

0xdcb5,	// (0x000245f6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdcb5,	// (0x000245f6) list_single_fs_bigclock_indicator_pane_t3

0xdcdd,	// (0x0002461e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdcdd,	// (0x0002461e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x000265da) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x000265da) list_single_fs_bigclock_indicator_pane_t

0x5b31,	// (0x0001c472) image3_infobar_fav_pane_ParamLimits

0x5b31,	// (0x0001c472) image3_infobar_fav_pane

0x5b41,	// (0x0001c482) image3_infobar_loc_pane_ParamLimits

0x5b41,	// (0x0001c482) image3_infobar_loc_pane

0x5b55,	// (0x0001c496) image3_infobar_time_pane_ParamLimits

0x5b55,	// (0x0001c496) image3_infobar_time_pane

0x32fd,	// (0x00019c3e) image3_infobar_time_pane_g1

0x5b65,	// (0x0001c4a6) image3_infobar_time_pane_t1

0x32fd,	// (0x00019c3e) image3_infobar_loc_pane_g1

0x5b73,	// (0x0001c4b4) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0002679c) image3_infobar_loc_pane_g

0x5b7b,	// (0x0001c4bc) image3_infobar_loc_pane_t1

0x32fd,	// (0x00019c3e) image3_infobar_fav_pane_g1

0x5b89,	// (0x0001c4ca) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x000267a1) image3_infobar_fav_pane_g

0x5b91,	// (0x0001c4d2) fs_bigclock_status_battery_pane

0x5b9a,	// (0x0001c4db) fs_bigclock_status_signal_pane

0x5ba3,	// (0x0001c4e4) fs_bigclock_status_title_pane

0x5bac,	// (0x0001c4ed) fs_bigclock_status_signal_pane_g1

0x5bb5,	// (0x0001c4f6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x000267a6) fs_bigclock_status_signal_pane_g

0x5bbd,	// (0x0001c4fe) fs_bigclock_status_battery_pane_g1

0x5bc6,	// (0x0001c507) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x000267ab) fs_bigclock_status_battery_pane_g

0x5bce,	// (0x0001c50f) fs_bigclock_status_title_pane_t1

0x32fd,	// (0x00019c3e) main_fs_bigclock_clock_pane_g1

0x5bdc,	// (0x0001c51d) main_fs_bigclock_clock_pane_g2

0x5bdc,	// (0x0001c51d) main_fs_bigclock_clock_pane_g3

0x5bdc,	// (0x0001c51d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x000267b0) main_fs_bigclock_clock_pane_g

0xe8e4,	// (0x00025225) main_fs_bigclock_clock_pane_t1

0xe8f2,	// (0x00025233) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x000267b9) main_fs_bigclock_clock_pane_t

0x5be4,	// (0x0001c525) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5be4,	// (0x0001c525) list_single_fs_bigclock_indicator_pane

0xe901,	// (0x00025242) list_single_fs_bigclock_pane_ParamLimits

0xe901,	// (0x00025242) list_single_fs_bigclock_pane

0x5bfe,	// (0x0001c53f) main_fs_bigclock_indicator_pane_t1

0x5c0d,	// (0x0001c54e) list_single_fs_bigclock_pane_g1

0x5c15,	// (0x0001c556) list_single_fs_bigclock_pane_t1

0x32fd,	// (0x00019c3e) main_fs_bigclock_swipe_pane_g1

0x5c55,	// (0x0001c596) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x000267ca) main_fs_bigclock_swipe_pane_g

0x5c5d,	// (0x0001c59e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5c5d,	// (0x0001c59e) main_fs_bigclock_swipe_pane_t1

0x9eb7,	// (0x000207f8) call_type_pane_ParamLimits

0x03c2,	// (0x00016d03) main_btmg_pane

0x58ad,	// (0x0001c1ee) list_single_cale_mrui_row_pane_g2_ParamLimits

0x58ad,	// (0x0001c1ee) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x0002673d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x0002673d) list_single_cale_mrui_row_pane_g

0x59ff,	// (0x0001c340) list_recal_vselct_arw_lo_pane

0x5a07,	// (0x0001c348) list_recal_vselct_arw_up_pane

0x5a0f,	// (0x0001c350) list_recal_vselct_pane

0x5c7a,	// (0x0001c5bb) btmg_button_pane

0xe964,	// (0x000252a5) main_btmg_pane_g1

0x03c2,	// (0x00016d03) bg_button_pane_cp044

0x5c84,	// (0x0001c5c5) btmg_button_pane_t1

0x2def,	// (0x00019730) aid_listscroll_gen

0x0432,	// (0x00016d73) main_cntbar_detail_pane

0x55d7,	// (0x0001bf18) list_cmail_folder_pane

0x55e7,	// (0x0001bf28) sp_fs_scroll_pane_cp03_ParamLimits

0xe46c,	// (0x00024dad) list_single_fs_dyc_pane_cp01_ParamLimits

0xe46c,	// (0x00024dad) list_single_fs_dyc_pane_cp01

0x5c92,	// (0x0001c5d3) aid_size_cmail_indent

0x5c9b,	// (0x0001c5dc) list_single_dyc_row_pane_cp01

0xe98c,	// (0x000252cd) cntbar_detail_list_pane_ParamLimits

0xe98c,	// (0x000252cd) cntbar_detail_list_pane

0xe9c6,	// (0x00025307) main_cntbar_detail_cont_pane_ParamLimits

0xe9c6,	// (0x00025307) main_cntbar_detail_cont_pane

0x9e51,	// (0x00020792) scroll_pane_cp032_ParamLimits

0x9e51,	// (0x00020792) scroll_pane_cp032

0xe9d2,	// (0x00025313) cntbar_detail_list_event_pane_ParamLimits

0xe9d2,	// (0x00025313) cntbar_detail_list_event_pane

0xe998,	// (0x000252d9) cntbar_detail_list_shct_pane

0x115f,	// (0x00017aa0) aid_list_gen

0x5ca4,	// (0x0001c5e5) aid_scroll

0x5cad,	// (0x0001c5ee) aid_size_touch_scroll_bar

0x5a8f,	// (0x0001c3d0) aid_list_double

0x5cb6,	// (0x0001c5f7) aid_list_single

0xe9e6,	// (0x00025327) aid_list_single_lg

0x5cbf,	// (0x0001c600) aid_list_z_g_a_sm

0x5cc7,	// (0x0001c608) aid_list_z_g_d

0x5ccf,	// (0x0001c610) aid_txt_z_prm

0xe9ef,	// (0x00025330) aid_txt_z_prm_cp01

0xe9fd,	// (0x0002533e) aid_txt_z_sec

0xea0b,	// (0x0002534c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xea0b,	// (0x0002534c) main_cntbar_detail_cont_pane_g1

0xea18,	// (0x00025359) main_cntbar_detail_cont_pane_g2_ParamLimits

0xea18,	// (0x00025359) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x000267cf) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x000267cf) main_cntbar_detail_cont_pane_g

0x5cdd,	// (0x0001c61e) main_cntbar_detail_cont_pane_t1

0x5ceb,	// (0x0001c62c) main_cntbar_detail_cont_pane_t2

0x5cf9,	// (0x0001c63a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x000267d4) main_cntbar_detail_cont_pane_t

0xea24,	// (0x00025365) cell_cntbar_detail_list_shct_pane_ParamLimits

0xea24,	// (0x00025365) cell_cntbar_detail_list_shct_pane

0x5d07,	// (0x0001c648) cntbar_detail_list_shct_pane_g1

0x5d10,	// (0x0001c651) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x000267db) cntbar_detail_list_shct_pane_g

0xea38,	// (0x00025379) cntbar_detail_list_event_pane_g1_ParamLimits

0xea38,	// (0x00025379) cntbar_detail_list_event_pane_g1

0xea44,	// (0x00025385) cntbar_detail_list_event_pane_g2_ParamLimits

0xea44,	// (0x00025385) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x000267e0) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x000267e0) cntbar_detail_list_event_pane_g

0xeab0,	// (0x000253f1) cntbar_detail_list_event_pane_t1_ParamLimits

0xeab0,	// (0x000253f1) cntbar_detail_list_event_pane_t1

0xeac5,	// (0x00025406) cntbar_detail_list_event_pane_t2_ParamLimits

0xeac5,	// (0x00025406) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x000267ed) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x000267ed) cntbar_detail_list_event_pane_t

0x32fd,	// (0x00019c3e) cell_cntbar_detail_list_shct_pane_g1

0xa1de,	// (0x00020b1f) navi_pane_mv_g3

0x0432,	// (0x00016d73) main_cntbar_detail_pane_ParamLimits

0x03c2,	// (0x00016d03) main_notif_wgt_pane

0x769e,	// (0x0001dfdf) aid_tch_main_mp4_pane_g4

0x78d3,	// (0x0001e214) popup_slider_window_cp02

0x59f6,	// (0x0001c337) list_recal_day_event_pane

0xe96c,	// (0x000252ad) cntbar_detail_btn_pane_ParamLimits

0xe96c,	// (0x000252ad) cntbar_detail_btn_pane

0xe97c,	// (0x000252bd) cntbar_detail_btn_pane_cp01_ParamLimits

0xe97c,	// (0x000252bd) cntbar_detail_btn_pane_cp01

0xe998,	// (0x000252d9) cntbar_detail_list_shct_pane_ParamLimits

0xe9a4,	// (0x000252e5) cntbar_detail_pane_g1_ParamLimits

0xe9a4,	// (0x000252e5) cntbar_detail_pane_g1

0xe9b0,	// (0x000252f1) cntbar_detail_pane_t1_ParamLimits

0xe9b0,	// (0x000252f1) cntbar_detail_pane_t1

0xea50,	// (0x00025391) cntbar_detail_list_event_pane_g3_ParamLimits

0xea50,	// (0x00025391) cntbar_detail_list_event_pane_g3

0xea68,	// (0x000253a9) cntbar_detail_list_event_pane_g4_ParamLimits

0xea68,	// (0x000253a9) cntbar_detail_list_event_pane_g4

0xea80,	// (0x000253c1) cntbar_detail_list_event_pane_g5_ParamLimits

0xea80,	// (0x000253c1) cntbar_detail_list_event_pane_g5

0xea98,	// (0x000253d9) cntbar_detail_list_event_pane_g6_ParamLimits

0xea98,	// (0x000253d9) cntbar_detail_list_event_pane_g6

0xeada,	// (0x0002541b) cntbar_detail_list_event_pane_t3_ParamLimits

0xeada,	// (0x0002541b) cntbar_detail_list_event_pane_t3

0xeaec,	// (0x0002542d) popup_notif_wgt_window_ParamLimits

0xeaec,	// (0x0002542d) popup_notif_wgt_window

0xeafc,	// (0x0002543d) popup_submenu_window_cp01_ParamLimits

0xeafc,	// (0x0002543d) popup_submenu_window_cp01

0x193a,	// (0x0001827b) bg_popup_window_pane_cp10

0x5d19,	// (0x0001c65a) listscroll_notif_wgt_pane

0x5d23,	// (0x0001c664) list_notif_wgt_window

0x5d2c,	// (0x0001c66d) scroll_pane_cp033

0x5a60,	// (0x0001c3a1) list_notif_wgt_row_pane_ParamLimits

0x5a60,	// (0x0001c3a1) list_notif_wgt_row_pane

0x5d35,	// (0x0001c676) aid_size_list_notif_wgt_del

0x5d3e,	// (0x0001c67f) list_notif_wgt_row_pane_g1

0x5d46,	// (0x0001c687) list_notif_wgt_row_pane_g2

0x5d4e,	// (0x0001c68f) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x000267f4) list_notif_wgt_row_pane_g

0x5d57,	// (0x0001c698) list_notif_wgt_row_pane_t1

0x5d65,	// (0x0001c6a6) list_notif_wgt_row_pane_t2

0x5d73,	// (0x0001c6b4) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x000267fb) list_notif_wgt_row_pane_t

0x43aa,	// (0x0001aceb) list_recal_day_event_pane_g1

0x5d81,	// (0x0001c6c2) list_recal_day_event_pane_t1

0x03c2,	// (0x00016d03) bg_button_pane_cp045

0x5d90,	// (0x0001c6d1) cntbar_detail_btn_pane_t1

0x2df7,	// (0x00019738) main_callh_pane_ParamLimits

0x2df7,	// (0x00019738) main_callh_pane

0x03c2,	// (0x00016d03) main_coverflow0_pane

0x03c2,	// (0x00016d03) main_wgtman_pane

0xdbd0,	// (0x00024511) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdbd0,	// (0x00024511) main_fs_bigclock_unlock_btn_pane

0x55b1,	// (0x0001bef2) bg_button_pane_cp16

0x55c1,	// (0x0001bf02) cell_tport_appsw_pane_g3

0xeb0a,	// (0x0002544b) cf0_flow_pane_ParamLimits

0xeb0a,	// (0x0002544b) cf0_flow_pane

0x5d9e,	// (0x0001c6df) listscroll_cf0_pane

0x5da7,	// (0x0001c6e8) main_cf0_pane_g1

0xeb19,	// (0x0002545a) main_cf0_pane_t1_ParamLimits

0xeb19,	// (0x0002545a) main_cf0_pane_t1

0xeb2d,	// (0x0002546e) main_cf0_pane_t2_ParamLimits

0xeb2d,	// (0x0002546e) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00026802) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00026802) main_cf0_pane_t

0x5db1,	// (0x0001c6f2) scroll_pane_cp11

0xeb41,	// (0x00025482) cf0_flow_pane_g1

0xeb49,	// (0x0002548a) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00026807) cf0_flow_pane_g

0xeb51,	// (0x00025492) cf0_flow_pane_t1

0x03c2,	// (0x00016d03) main_call6_pane

0x03c2,	// (0x00016d03) main_calllock_pane

0xeb5f,	// (0x000254a0) call6_btn_grp_pane_ParamLimits

0xeb5f,	// (0x000254a0) call6_btn_grp_pane

0xeb6e,	// (0x000254af) call6_pane_g1_ParamLimits

0xeb6e,	// (0x000254af) call6_pane_g1

0xeb7d,	// (0x000254be) popup_call6_1st_window_ParamLimits

0xeb7d,	// (0x000254be) popup_call6_1st_window

0xeb8b,	// (0x000254cc) popup_call6_2nd_window_ParamLimits

0xeb8b,	// (0x000254cc) popup_call6_2nd_window

0xeb99,	// (0x000254da) cell_call6_btn_pane_ParamLimits

0xeb99,	// (0x000254da) cell_call6_btn_pane

0x193a,	// (0x0001827b) bg_popup_call2_in_pane_cp03

0x5dbc,	// (0x0001c6fd) popup_call6_1st_window_g1

0x5dc4,	// (0x0001c705) popup_call6_1st_window_g2

0x5dcc,	// (0x0001c70d) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0002680c) popup_call6_1st_window_g

0x5dd4,	// (0x0001c715) popup_call6_1st_window_t1

0x5de3,	// (0x0001c724) popup_call6_1st_window_t2

0x5df3,	// (0x0001c734) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00026813) popup_call6_1st_window_t

0x193a,	// (0x0001827b) bg_popup_call2_in_pane_cp04

0x5dbc,	// (0x0001c6fd) popup_call6_2nd_window_g1

0x5dc4,	// (0x0001c705) popup_call6_2nd_window_g2

0x5dcc,	// (0x0001c70d) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0002680c) popup_call6_2nd_window_g

0x5dd4,	// (0x0001c715) popup_call6_2nd_window_t1

0x03c2,	// (0x00016d03) bg_button_pane_cp15

0x5e03,	// (0x0001c744) cell_call6_btn_pane_g1

0x5e0c,	// (0x0001c74d) cell_call6_btn_pane_t1

0xeba8,	// (0x000254e9) listscroll_wgtman_pane_ParamLimits

0xeba8,	// (0x000254e9) listscroll_wgtman_pane

0xebc6,	// (0x00025507) wgtman_btn_pane_ParamLimits

0xebc6,	// (0x00025507) wgtman_btn_pane

0x17f1,	// (0x00018132) aid_scroll_copy1

0x5e1b,	// (0x0001c75c) list_wgtman_pane

0xebfb,	// (0x0002553c) wgtman_btn_pane_g1_ParamLimits

0xebfb,	// (0x0002553c) wgtman_btn_pane_g1

0xec23,	// (0x00025564) wgtman_btn_pane_t1_ParamLimits

0xec23,	// (0x00025564) wgtman_btn_pane_t1

0x5e25,	// (0x0001c766) wgtman_btn_pane_t2_ParamLimits

0x5e25,	// (0x0001c766) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0002681a) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0002681a) wgtman_btn_pane_t

0xec5a,	// (0x0002559b) listrow_wgtman_pane_ParamLimits

0xec5a,	// (0x0002559b) listrow_wgtman_pane

0xec75,	// (0x000255b6) listrow_wgtman_pane_g1

0xec7e,	// (0x000255bf) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0002681f) listrow_wgtman_pane_g

0xec88,	// (0x000255c9) listrow_wgtman_pane_t1

0xec96,	// (0x000255d7) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00026824) listrow_wgtman_pane_t

0xeca4,	// (0x000255e5) wait_bar_pane_cp09

0x5e3c,	// (0x0001c77d) main_calllock_btn_pane

0x5e46,	// (0x0001c787) main_calllock_pane_g1

0x03c2,	// (0x00016d03) bg_button_pane_cp17

0x5e52,	// (0x0001c793) main_calllock_btn_pane_g1

0x5e5b,	// (0x0001c79c) main_calllock_btn_pane_t1

0x03c2,	// (0x00016d03) main_dialer3_pane

0x03c2,	// (0x00016d03) main_fmrd2_pane

0x32fd,	// (0x00019c3e) main_fs_bigclock_unlock_btn_pane_g1

0x5e72,	// (0x0001c7b3) main_fs_bigclock_unlock_btn_pane_t1

0xecac,	// (0x000255ed) area_fmrd2_info_pane_ParamLimits

0xecac,	// (0x000255ed) area_fmrd2_info_pane

0xecba,	// (0x000255fb) area_fmrd2_visual_pane_ParamLimits

0xecba,	// (0x000255fb) area_fmrd2_visual_pane

0xecc8,	// (0x00025609) fmrd2_indi_pane_ParamLimits

0xecc8,	// (0x00025609) fmrd2_indi_pane

0xecd5,	// (0x00025616) area_fmrd2_visual_pane_g1

0xecdd,	// (0x0002561e) area_fmrd2_visual_pane_t1

0xeced,	// (0x0002562e) area_fmrd2_visual_pane_t2

0xecfd,	// (0x0002563e) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x0002682e) area_fmrd2_visual_pane_t

0xed0d,	// (0x0002564e) area_fmrd2_info_pane_g1

0xed15,	// (0x00025656) area_fmrd2_info_pane_t1

0xed25,	// (0x00025666) area_fmrd2_info_pane_t2

0xed35,	// (0x00025676) area_fmrd2_info_pane_t3

0xed45,	// (0x00025686) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00026835) area_fmrd2_info_pane_t

0xed53,	// (0x00025694) fmrd2_indi_pane_t1

0xed63,	// (0x000256a4) fmrd2_indi_pane_t2

0xed73,	// (0x000256b4) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0002683e) fmrd2_indi_pane_t

0xdc4e,	// (0x0002458f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdc4e,	// (0x0002458f) list_single_fs_bigclock_indicator_pane_g5

0xdcf2,	// (0x00024633) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdcf2,	// (0x00024633) list_single_fs_bigclock_indicator_pane_t5

0xe5a6,	// (0x00024ee7) aid_cell_bcale_month_pane_ParamLimits

0xe5a6,	// (0x00024ee7) aid_cell_bcale_month_pane

0xe5b2,	// (0x00024ef3) bcale_month_pane_ParamLimits

0xe5b2,	// (0x00024ef3) bcale_month_pane

0xe5c0,	// (0x00024f01) bcale_preview_pane_ParamLimits

0xe5c0,	// (0x00024f01) bcale_preview_pane

0x5c15,	// (0x0001c556) list_single_fs_bigclock_pane_t1_ParamLimits

0x5c31,	// (0x0001c572) list_single_fs_bigclock_pane_t2_ParamLimits

0x5c31,	// (0x0001c572) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x000267c5) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x000267c5) list_single_fs_bigclock_pane_t

0x5e6a,	// (0x0001c7ab) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00026829) main_fs_bigclock_unlock_btn_pane_g

0xed81,	// (0x000256c2) aid_dia3_key_size_ParamLimits

0xed81,	// (0x000256c2) aid_dia3_key_size

0xed8d,	// (0x000256ce) aid_dia3_listrow_size_ParamLimits

0xed8d,	// (0x000256ce) aid_dia3_listrow_size

0xed9d,	// (0x000256de) dia3_keypad_fun_pane_ParamLimits

0xed9d,	// (0x000256de) dia3_keypad_fun_pane

0xedaf,	// (0x000256f0) dia3_keypad_num_pane_ParamLimits

0xedaf,	// (0x000256f0) dia3_keypad_num_pane

0xedc1,	// (0x00025702) dia3_listscroll_pane_ParamLimits

0xedc1,	// (0x00025702) dia3_listscroll_pane

0xedcf,	// (0x00025710) dia3_numentry_pane_ParamLimits

0xedcf,	// (0x00025710) dia3_numentry_pane

0x5e80,	// (0x0001c7c1) dia3_list_pane

0x5e8b,	// (0x0001c7cc) scroll_pane_cp12

0x03c2,	// (0x00016d03) bg_dia3_numentry_pane

0xeddd,	// (0x0002571e) dia3_numentry_pane_t1

0xedec,	// (0x0002572d) cell_dia3_key_num_pane

0xedf4,	// (0x00025735) cell_dia3_key0_fun_pane_ParamLimits

0xedf4,	// (0x00025735) cell_dia3_key0_fun_pane

0xee01,	// (0x00025742) cell_dia3_key1_fun_pane_ParamLimits

0xee01,	// (0x00025742) cell_dia3_key1_fun_pane

0xee0e,	// (0x0002574f) dia3_listrow_pane

0x4e7a,	// (0x0001b7bb) bg_dia3_numentry_pane_g1

0x03c2,	// (0x00016d03) bg_button_pane_cp21

0x5e96,	// (0x0001c7d7) cell_dia3_key_num_pane_t1

0x5ea4,	// (0x0001c7e5) cell_dia3_key_num_pane_t2

0x5eb3,	// (0x0001c7f4) cell_dia3_key_num_pane_t3

0x5ec2,	// (0x0001c803) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00026845) cell_dia3_key_num_pane_t

0x03c2,	// (0x00016d03) bg_button_pane_cp19

0xee1b,	// (0x0002575c) cell_dia3_key0_fun_pane_g1

0x03c2,	// (0x00016d03) bg_button_pane_cp20

0xee23,	// (0x00025764) cell_dia3_key1_fun_pane_g1

0xee2b,	// (0x0002576c) area_left_week_number_pane

0xee34,	// (0x00025775) area_top_day_name_pane

0xee3d,	// (0x0002577e) frame_month_view_pane

0xee47,	// (0x00025788) grid_month_view_pane

0xee51,	// (0x00025792) cell_top_day_name_pane_ParamLimits

0xee51,	// (0x00025792) cell_top_day_name_pane

0xee6b,	// (0x000257ac) cell_area_left_week_number_pane_ParamLimits

0xee6b,	// (0x000257ac) cell_area_left_week_number_pane

0xee7f,	// (0x000257c0) cell_month_view_pane_ParamLimits

0xee7f,	// (0x000257c0) cell_month_view_pane

0x5ed1,	// (0x0001c812) frm_month_g1

0xee9c,	// (0x000257dd) frm_month_g2

0xeea6,	// (0x000257e7) frm_month_g3

0xeeb0,	// (0x000257f1) frm_month_g4

0xeeba,	// (0x000257fb) frm_month_g5

0xeec4,	// (0x00025805) frm_month_g6

0xeece,	// (0x0002580f) frm_month_g7

0x5eda,	// (0x0001c81b) frm_month_g8

0xeed8,	// (0x00025819) frm_month_g9

0xeee1,	// (0x00025822) frm_month_g10

0xeeea,	// (0x0002582b) frm_month_g11

0xeef3,	// (0x00025834) frm_month_g12

0xeefc,	// (0x0002583d) frm_month_g13

0xef05,	// (0x00025846) frm_month_g14

0xef0e,	// (0x0002584f) frm_month_g15

0xef19,	// (0x0002585a) frm_month_g16

0x000f,

0xff0d,	// (0x0002684e) frm_month_g

0xef24,	// (0x00025865) cell_top_day_name_pane_t1

0xef33,	// (0x00025874) cell_area_left_week_number_pane_g1

0xef24,	// (0x00025865) cell_area_left_week_number_pane_t1

0x32fd,	// (0x00019c3e) cell_month_view_pane_g1

0xef3b,	// (0x0002587c) cell_month_view_pane_t1

0x03c2,	// (0x00016d03) main_fps_pane

0x5337,	// (0x0001bc78) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5337,	// (0x0001bc78) cmail_ddmenu_btn02_pane_cp1

0x5353,	// (0x0001bc94) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5353,	// (0x0001bc94) cmail_ddmenu_btn02_pane_cp2

0xe84e,	// (0x0002518f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe84e,	// (0x0002518f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x00026776) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x00026776) cmail_ddmenu_btn02_pane_g

0xe86c,	// (0x000251ad) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe86c,	// (0x000251ad) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0002677b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0002677b) cmail_ddmenu_btn02_pane_t

0xef4a,	// (0x0002588b) fps_text_pane_ParamLimits

0xef4a,	// (0x0002588b) fps_text_pane

0xef57,	// (0x00025898) main_fps_pane_g1_ParamLimits

0xef57,	// (0x00025898) main_fps_pane_g1

0xef65,	// (0x000258a6) wait_bar_pane_cp010_ParamLimits

0xef65,	// (0x000258a6) wait_bar_pane_cp010

0xef71,	// (0x000258b2) fps_text_pane_t1_ParamLimits

0xef71,	// (0x000258b2) fps_text_pane_t1

0xc4d4,	// (0x00022e15) cam4_image_uncrop_pane_g1

0xc4dd,	// (0x00022e1e) cam4_image_uncrop_pane_g2

0xc4e6,	// (0x00022e27) cam4_image_uncrop_pane_g3

0xc4ef,	// (0x00022e30) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0002624e) cam4_image_uncrop_pane_g

0xee0e,	// (0x0002574f) dia3_listrow_pane_ParamLimits

0x03c2,	// (0x00016d03) main_phob2_pane

0xe3e1,	// (0x00024d22) cell_tport_appsw_pane_cp02_ParamLimits

0xe3e1,	// (0x00024d22) cell_tport_appsw_pane_cp02

0xe3f0,	// (0x00024d31) cell_tport_appsw_pane_cp03_ParamLimits

0xe3f0,	// (0x00024d31) cell_tport_appsw_pane_cp03

0x03c2,	// (0x00016d03) phob2_contact_card_pane

0x03c2,	// (0x00016d03) phob2_listscroll_pane

0x5ee3,	// (0x0001c824) phob2_list_pane

0x5eeb,	// (0x0001c82c) scroll_pane_cp034

0xef8a,	// (0x000258cb) phob2_cc_data_pane_ParamLimits

0xef8a,	// (0x000258cb) phob2_cc_data_pane

0xefa4,	// (0x000258e5) phob2_cc_listscroll_pane_ParamLimits

0xefa4,	// (0x000258e5) phob2_cc_listscroll_pane

0xefbe,	// (0x000258ff) list_double_large_graphic_phob2_pane_ParamLimits

0xefbe,	// (0x000258ff) list_double_large_graphic_phob2_pane

0x5ef3,	// (0x0001c834) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x5ef3,	// (0x0001c834) list_double_large_graphic_phob2_pane_g1

0x5f00,	// (0x0001c841) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5f00,	// (0x0001c841) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0002686f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0002686f) list_double_large_graphic_phob2_pane_g

0x5f0c,	// (0x0001c84d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x5f0c,	// (0x0001c84d) list_double_large_graphic_phob2_pane_t1

0x5f21,	// (0x0001c862) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x5f21,	// (0x0001c862) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00026874) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00026874) list_double_large_graphic_phob2_pane_t

0x03c2,	// (0x00016d03) list_highlight_pane_cp024

0x5f33,	// (0x0001c874) phob2_cc_button_pane

0xefdc,	// (0x0002591d) phob2_cc_data_pane_g1_ParamLimits

0xefdc,	// (0x0002591d) phob2_cc_data_pane_g1

0xefe8,	// (0x00025929) phob2_cc_data_pane_g2_ParamLimits

0xefe8,	// (0x00025929) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00026879) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00026879) phob2_cc_data_pane_g

0xeff4,	// (0x00025935) phob2_cc_data_pane_t1_ParamLimits

0xeff4,	// (0x00025935) phob2_cc_data_pane_t1

0xf006,	// (0x00025947) phob2_cc_data_pane_t2_ParamLimits

0xf006,	// (0x00025947) phob2_cc_data_pane_t2

0xf018,	// (0x00025959) phob2_cc_data_pane_t3_ParamLimits

0xf018,	// (0x00025959) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0002687e) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0002687e) phob2_cc_data_pane_t

0x5f3b,	// (0x0001c87c) phob2_cc_list_pane_ParamLimits

0x5f3b,	// (0x0001c87c) phob2_cc_list_pane

0x4455,	// (0x0001ad96) scroll_pane_cp035_ParamLimits

0x4455,	// (0x0001ad96) scroll_pane_cp035

0x0432,	// (0x00016d73) bg_button_pane_cp033

0x5f47,	// (0x0001c888) phob2_cc_button_pane_g1

0x5f53,	// (0x0001c894) phob2_cc_button_pane_t1

0x5f68,	// (0x0001c8a9) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00026885) phob2_cc_button_pane_t

0xf02a,	// (0x0002596b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xf02a,	// (0x0002596b) list_double_large_graphic_phob2_cc_pane

0xf051,	// (0x00025992) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf051,	// (0x00025992) list_double_large_graphic_phob2_cc_pane_g1

0xf062,	// (0x000259a3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf062,	// (0x000259a3) list_double_large_graphic_phob2_cc_pane_g2

0xf06e,	// (0x000259af) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf06e,	// (0x000259af) list_double_large_graphic_phob2_cc_pane_g3

0xf07a,	// (0x000259bb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf07a,	// (0x000259bb) list_double_large_graphic_phob2_cc_pane_g4

0xf086,	// (0x000259c7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf086,	// (0x000259c7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0002688a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0002688a) list_double_large_graphic_phob2_cc_pane_g

0xf092,	// (0x000259d3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf092,	// (0x000259d3) list_double_large_graphic_phob2_cc_pane_t1

0xf0bb,	// (0x000259fc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf0bb,	// (0x000259fc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00026895) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00026895) list_double_large_graphic_phob2_cc_pane_t

0x5f7a,	// (0x0001c8bb) list_highlight_pane_cp025_ParamLimits

0x5f7a,	// (0x0001c8bb) list_highlight_pane_cp025

0x0432,	// (0x00016d73) bg_button_pane_cp033_ParamLimits

0x5f47,	// (0x0001c888) phob2_cc_button_pane_g1_ParamLimits

0x5f53,	// (0x0001c894) phob2_cc_button_pane_t1_ParamLimits

0x5f68,	// (0x0001c8a9) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00026885) phob2_cc_button_pane_t_ParamLimits

0x82c0,	// (0x0001ec01) popup_wgtman_window

0x41d7,	// (0x0001ab18) scroll_pane_cp038

0xebe3,	// (0x00025524) wgtman_btn_pane_cp_01_ParamLimits

0xebe3,	// (0x00025524) wgtman_btn_pane_cp_01

0x5f88,	// (0x0001c8c9) wgtman_content_pane

0x5f91,	// (0x0001c8d2) wgtman_heading_pane

0x03c2,	// (0x00016d03) bg_heading_pane_cp02

0x5f9a,	// (0x0001c8db) wgtman_heading_pane_g1

0x5fa2,	// (0x0001c8e3) wgtman_heading_pane_t1

0x5fc2,	// (0x0001c903) scroll_pane_cp036

0x5fca,	// (0x0001c90b) wgtman_list_pane

0x5a72,	// (0x0001c3b3) wgtman_list_pane_t1_ParamLimits

0x5a72,	// (0x0001c3b3) wgtman_list_pane_t1

0x7ab9,	// (0x0001e3fa) cam4_grid_pane

0xcc26,	// (0x00023567) bg_button_pane_cp015_ParamLimits

0xcc38,	// (0x00023579) bg_button_pane_cp016_ParamLimits

0xcc4b,	// (0x0002358c) bg_button_pane_cp017_ParamLimits

0xcca1,	// (0x000235e2) popup_vitu2_query_window_g3_ParamLimits

0xcca1,	// (0x000235e2) popup_vitu2_query_window_g3

0xcd5c,	// (0x0002369d) popup_vitu2_query_window_t6_ParamLimits

0xcd5c,	// (0x0002369d) popup_vitu2_query_window_t6

0xcd87,	// (0x000236c8) popup_vitu2_query_window_t7_ParamLimits

0xcd87,	// (0x000236c8) popup_vitu2_query_window_t7

0x5fb0,	// (0x0001c8f1) cam4_grid_pane_g1

0x5fb9,	// (0x0001c8fa) cam4_grid_pane_g2

0x5fd2,	// (0x0001c913) cam4_grid_pane_g3

0x5fdb,	// (0x0001c91c) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0002689a) cam4_grid_pane_g

0x8f2f,	// (0x0001f870) aid_placing_vt_slider_lsc_ParamLimits

0x927b,	// (0x0001fbbc) vidtel_button_pane_ParamLimits

0x927b,	// (0x0001fbbc) vidtel_button_pane

0x03c2,	// (0x00016d03) bg_button_pane_cp034

0xf0e4,	// (0x00025a25) vidtel_button_pane_g1

0x5fe6,	// (0x0001c927) vidtel_button_pane_t1

0x4338,	// (0x0001ac79) aid_size_vtel_slider_touch

0x4455,	// (0x0001ad96) scroll_pane_cp039

0x4eb8,	// (0x0001b7f9) ncim_query_button_pane_cp01_ParamLimits

0x4ed7,	// (0x0001b818) ncimui_query_pane_g1_ParamLimits

0x0432,	// (0x00016d73) input_focus_pane_cp012_ParamLimits

0x4efc,	// (0x0001b83d) ncim_query_entry_pane_t1_ParamLimits

0x4455,	// (0x0001ad96) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
