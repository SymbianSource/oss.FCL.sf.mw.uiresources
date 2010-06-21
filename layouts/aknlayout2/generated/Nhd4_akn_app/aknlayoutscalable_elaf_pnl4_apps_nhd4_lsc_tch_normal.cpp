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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000eebb };

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
0x037d,	// (0x0000f238) Screen

0x0389,	// (0x0000f244) application_window

0x03c5,	// (0x0000f280) area_bottom_pane_ParamLimits

0x03c5,	// (0x0000f280) area_bottom_pane

0x03fe,	// (0x0000f2b9) area_top_pane_ParamLimits

0x03fe,	// (0x0000f2b9) area_top_pane

0x94dc,	// (0x00018397) call_video_uplink_pane_ParamLimits

0x94dc,	// (0x00018397) call_video_uplink_pane

0x048c,	// (0x0000f347) main_pane_ParamLimits

0x048c,	// (0x0000f347) main_pane

0xbeb2,	// (0x0001ad6d) context_pane

0x37f2,	// (0x000126ad) navi_pane

0x3824,	// (0x000126df) popup_cale_events_window_ParamLimits

0x3824,	// (0x000126df) popup_cale_events_window

0xbec5,	// (0x0001ad80) popup_mup_playback_window

0x383c,	// (0x000126f7) signal_pane

0x9c69,	// (0x00018b24) main_browser_pane

0x9ecf,	// (0x00018d8a) main_burst_pane

0x355a,	// (0x00012415) main_calc_pane

0xbe44,	// (0x0001acff) main_cale_day_pane

0x0a9d,	// (0x0000f958) main_cale_month_pane

0xbe44,	// (0x0001acff) main_cale_week_pane

0x9ecf,	// (0x00018d8a) main_call_pane

0x991b,	// (0x000187d6) main_call_poc_pane

0x9ecf,	// (0x00018d8a) main_camera_pane

0x9ecf,	// (0x00018d8a) main_chi_dic_pane

0xa759,	// (0x00019614) main_clock_pane

0x991b,	// (0x000187d6) main_fmradio_pane

0x9ecf,	// (0x00018d8a) main_graph_messa_pane

0x991b,	// (0x000187d6) main_help_pane

0x9c69,	// (0x00018b24) main_im_pane

0x9b76,	// (0x00018a31) main_image_pane_ParamLimits

0x9b76,	// (0x00018a31) main_image_pane

0x991b,	// (0x000187d6) main_location2_pane

0x9ecf,	// (0x00018d8a) main_location_pane

0x9b76,	// (0x00018a31) main_messa_pane

0x991b,	// (0x000187d6) main_mp2_pane

0x9ecf,	// (0x00018d8a) main_mp_pane

0x991b,	// (0x000187d6) main_msg_pane

0x991b,	// (0x000187d6) main_mup_eq_pane

0x991b,	// (0x000187d6) main_mup_pane

0x9c69,	// (0x00018b24) main_notes_pane

0x991b,	// (0x000187d6) main_pec_pane

0x991b,	// (0x000187d6) main_phob_pane

0x991b,	// (0x000187d6) main_pinb_pane

0x991b,	// (0x000187d6) main_postcard_pane

0x991b,	// (0x000187d6) main_qdial_pane

0x9ecf,	// (0x00018d8a) main_skin_pane

0x991b,	// (0x000187d6) main_smil2_pane

0x9ecf,	// (0x00018d8a) main_smil_pane

0x9ecf,	// (0x00018d8a) main_video_pane

0x9ecf,	// (0x00018d8a) main_video_tele_pane

0x9b76,	// (0x00018a31) main_viewer_pane_ParamLimits

0x9b76,	// (0x00018a31) main_viewer_pane

0x9ecf,	// (0x00018d8a) main_vorec_pane

0x35ae,	// (0x00012469) popup_blid_sat_info_window_ParamLimits

0x35ae,	// (0x00012469) popup_blid_sat_info_window

0x3606,	// (0x000124c1) popup_dyc_status_message_window_ParamLimits

0x3606,	// (0x000124c1) popup_dyc_status_message_window

0x361e,	// (0x000124d9) popup_grid_large_graphic_window_ParamLimits

0x361e,	// (0x000124d9) popup_grid_large_graphic_window

0x36ce,	// (0x00012589) popup_loc_request_window_ParamLimits

0x36ce,	// (0x00012589) popup_loc_request_window

0x37ca,	// (0x00012685) popup_wml_address_window_ParamLimits

0x37ca,	// (0x00012685) popup_wml_address_window

0x3394,	// (0x0001224f) call_muted_g1

0x3048,	// (0x00011f03) popup_call_audio_conf_window_ParamLimits

0x3048,	// (0x00011f03) popup_call_audio_conf_window

0x33a8,	// (0x00012263) popup_call_audio_first_window_ParamLimits

0x33a8,	// (0x00012263) popup_call_audio_first_window

0x341e,	// (0x000122d9) popup_call_audio_in_window_ParamLimits

0x341e,	// (0x000122d9) popup_call_audio_in_window

0x345a,	// (0x00012315) popup_call_audio_out_window_ParamLimits

0x345a,	// (0x00012315) popup_call_audio_out_window

0x3494,	// (0x0001234f) popup_call_audio_second_window_ParamLimits

0x3494,	// (0x0001234f) popup_call_audio_second_window

0x34ea,	// (0x000123a5) popup_call_audio_wait_window_ParamLimits

0x34ea,	// (0x000123a5) popup_call_audio_wait_window

0x351f,	// (0x000123da) popup_number_entry_window_ParamLimits

0x351f,	// (0x000123da) popup_number_entry_window

0x9508,	// (0x000183c3) bg_popup_call_pane_cp05_ParamLimits

0x9508,	// (0x000183c3) bg_popup_call_pane_cp05

0x9528,	// (0x000183e3) popup_number_entry_window_t1

0x953b,	// (0x000183f6) popup_number_entry_window_t2

0x954d,	// (0x00018408) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0001df81) popup_number_entry_window_t

0x955f,	// (0x0001841a) text_title_cp2

0x9572,	// (0x0001842d) bg_popup_call_pane_cp_ParamLimits

0x9572,	// (0x0001842d) bg_popup_call_pane_cp

0x9580,	// (0x0001843b) call_thumbnail_pane

0x9588,	// (0x00018443) popup_call_audio_in_window_g1_ParamLimits

0x9588,	// (0x00018443) popup_call_audio_in_window_g1

0x9594,	// (0x0001844f) popup_call_audio_in_window_g2_ParamLimits

0x9594,	// (0x0001844f) popup_call_audio_in_window_g2

0x95a0,	// (0x0001845b) popup_call_audio_in_window_g3_ParamLimits

0x95a0,	// (0x0001845b) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0001df8a) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0001df8a) popup_call_audio_in_window_g

0x95ac,	// (0x00018467) popup_call_audio_in_window_t1_ParamLimits

0x95ac,	// (0x00018467) popup_call_audio_in_window_t1

0x95c8,	// (0x00018483) popup_call_audio_in_window_t2_ParamLimits

0x95c8,	// (0x00018483) popup_call_audio_in_window_t2

0x95e4,	// (0x0001849f) popup_call_audio_in_window_t3_ParamLimits

0x95e4,	// (0x0001849f) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0001df91) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0001df91) popup_call_audio_in_window_t

0x9572,	// (0x0001842d) bg_popup_call_pane_cp01_ParamLimits

0x9572,	// (0x0001842d) bg_popup_call_pane_cp01

0x9580,	// (0x0001843b) call_thumbnail_pane_cp02

0x95f7,	// (0x000184b2) call_type_pane_cp022

0x95ff,	// (0x000184ba) popup_call_audio_out_window_g1_ParamLimits

0x95ff,	// (0x000184ba) popup_call_audio_out_window_g1

0x9611,	// (0x000184cc) popup_call_audio_out_window_g2_ParamLimits

0x9611,	// (0x000184cc) popup_call_audio_out_window_g2

0x961d,	// (0x000184d8) popup_call_audio_out_window_g3_ParamLimits

0x961d,	// (0x000184d8) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0001df98) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0001df98) popup_call_audio_out_window_g

0x962f,	// (0x000184ea) popup_call_audio_out_window_t1_ParamLimits

0x962f,	// (0x000184ea) popup_call_audio_out_window_t1

0x9647,	// (0x00018502) popup_call_audio_out_window_t2_ParamLimits

0x9647,	// (0x00018502) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0001df9f) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0001df9f) popup_call_audio_out_window_t

0x965c,	// (0x00018517) bg_popup_call_pane_ParamLimits

0x965c,	// (0x00018517) bg_popup_call_pane

0x0649,	// (0x0000f504) call_thumbnail_pane_cp_ParamLimits

0x0649,	// (0x0000f504) call_thumbnail_pane_cp

0x96e0,	// (0x0001859b) call_type_pane_cp01_ParamLimits

0x96e0,	// (0x0001859b) call_type_pane_cp01

0x9724,	// (0x000185df) popup_call_audio_first_window_g1_ParamLimits

0x9724,	// (0x000185df) popup_call_audio_first_window_g1

0x9770,	// (0x0001862b) popup_call_audio_first_window_g2_ParamLimits

0x9770,	// (0x0001862b) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0001dfa4) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0001dfa4) popup_call_audio_first_window_g

0x97b4,	// (0x0001866f) popup_call_audio_first_window_t1_ParamLimits

0x97b4,	// (0x0001866f) popup_call_audio_first_window_t1

0x9860,	// (0x0001871b) popup_call_audio_first_window_t4_ParamLimits

0x9860,	// (0x0001871b) popup_call_audio_first_window_t4

0x98ec,	// (0x000187a7) popup_call_audio_first_window_t5_ParamLimits

0x98ec,	// (0x000187a7) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0001dfa9) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0001dfa9) popup_call_audio_first_window_t

0x991b,	// (0x000187d6) bg_popup_call_pane_cp02

0x9925,	// (0x000187e0) call_type_pane_cp023

0x992d,	// (0x000187e8) popup_call_audio_wait_window_g1

0x9935,	// (0x000187f0) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001dfb0) popup_call_audio_wait_window_g

0x993d,	// (0x000187f8) popup_call_audio_wait_window_t3

0x994b,	// (0x00018806) bg_popup_call_pane_cp03_ParamLimits

0x994b,	// (0x00018806) bg_popup_call_pane_cp03

0x99ab,	// (0x00018866) call_thumbnail_pane_cp011_ParamLimits

0x99ab,	// (0x00018866) call_thumbnail_pane_cp011

0x99b7,	// (0x00018872) call_type_pane_cp034_ParamLimits

0x99b7,	// (0x00018872) call_type_pane_cp034

0x99f3,	// (0x000188ae) popup_call_audio_second_window_g1_ParamLimits

0x99f3,	// (0x000188ae) popup_call_audio_second_window_g1

0x9a2f,	// (0x000188ea) popup_call_audio_second_window_g2_ParamLimits

0x9a2f,	// (0x000188ea) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0001dfb5) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0001dfb5) popup_call_audio_second_window_g

0x9a6b,	// (0x00018926) popup_call_audio_second_window_t1_ParamLimits

0x9a6b,	// (0x00018926) popup_call_audio_second_window_t1

0x9aec,	// (0x000189a7) popup_call_audio_second_window_t2_ParamLimits

0x9aec,	// (0x000189a7) popup_call_audio_second_window_t2

0x9b22,	// (0x000189dd) popup_call_audio_second_window_t3_ParamLimits

0x9b22,	// (0x000189dd) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0001dfba) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0001dfba) popup_call_audio_second_window_t

0x991b,	// (0x000187d6) bg_popup_call_pane_cp04

0x9b58,	// (0x00018a13) list_conf_pane

0x9b60,	// (0x00018a1b) popup_call_audio_conf_window_t1

0x9b6e,	// (0x00018a29) call_thumbnail_pane_g1

0x9b76,	// (0x00018a31) bg_pinb_pane_ParamLimits

0x9b76,	// (0x00018a31) bg_pinb_pane

0x9b84,	// (0x00018a3f) find_pinb_pane

0x9b8d,	// (0x00018a48) listscroll_pinb_pane_ParamLimits

0x9b8d,	// (0x00018a48) listscroll_pinb_pane

0x9b9c,	// (0x00018a57) pinb_bg_pane_g1

0x066d,	// (0x0000f528) pinb_bg_pane_g2

0x0679,	// (0x0000f534) pinb_bg_pane_g3

0x0685,	// (0x0000f540) pinb_bg_pane_g4

0x0691,	// (0x0000f54c) pinb_bg_pane_g5

0x069d,	// (0x0000f558) pinb_bg_pane_g6

0x06a8,	// (0x0000f563) pinb_bg_pane_g7

0x06b3,	// (0x0000f56e) pinb_bg_pane_g8

0x06be,	// (0x0000f579) pinb_bg_pane_g9

0x06c8,	// (0x0000f583) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0001dfc1) pinb_bg_pane_g

0x06e5,	// (0x0000f5a0) grid_pinb_pane

0x06ee,	// (0x0000f5a9) list_pinb_pane

0x06f7,	// (0x0000f5b2) scroll_pane_cp01_ParamLimits

0x06f7,	// (0x0000f5b2) scroll_pane_cp01

0x9ba6,	// (0x00018a61) find_pinb_pane_g1_ParamLimits

0x9ba6,	// (0x00018a61) find_pinb_pane_g1

0x9bbe,	// (0x00018a79) find_pinb_pane_t1

0x9bd0,	// (0x00018a8b) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0001dfdb) find_pinb_pane_t

0x9be5,	// (0x00018aa0) input_focus_pane_cp01_ParamLimits

0x9be5,	// (0x00018aa0) input_focus_pane_cp01

0x0709,	// (0x0000f5c4) cell_pinb_pane_ParamLimits

0x0709,	// (0x0000f5c4) cell_pinb_pane

0x0734,	// (0x0000f5ef) cell_pinb_pane_g1_ParamLimits

0x0734,	// (0x0000f5ef) cell_pinb_pane_g1

0x9bf1,	// (0x00018aac) cell_pinb_pane_g2_ParamLimits

0x9bf1,	// (0x00018aac) cell_pinb_pane_g2

0x9bfd,	// (0x00018ab8) cell_pinb_pane_g3_ParamLimits

0x9bfd,	// (0x00018ab8) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0001dfe0) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0001dfe0) cell_pinb_pane_g

0x991b,	// (0x000187d6) grid_highlight_pane_cp01

0x0747,	// (0x0000f602) list_pinb_item_pane_ParamLimits

0x0747,	// (0x0000f602) list_pinb_item_pane

0x991b,	// (0x000187d6) list_highlight_pane_cp02

0x075a,	// (0x0000f615) list_pinb_item_pane_g1_ParamLimits

0x075a,	// (0x0000f615) list_pinb_item_pane_g1

0x0767,	// (0x0000f622) list_pinb_item_pane_g2_ParamLimits

0x0767,	// (0x0000f622) list_pinb_item_pane_g2

0x0773,	// (0x0000f62e) list_pinb_item_pane_g3_ParamLimits

0x0773,	// (0x0000f62e) list_pinb_item_pane_g3

0x0784,	// (0x0000f63f) list_pinb_item_pane_g4_ParamLimits

0x0784,	// (0x0000f63f) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0001dfe7) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0001dfe7) list_pinb_item_pane_g

0x0790,	// (0x0000f64b) list_pinb_item_pane_t1_ParamLimits

0x0790,	// (0x0000f64b) list_pinb_item_pane_t1

0x07c5,	// (0x0000f680) calc_display_pane

0x07ea,	// (0x0000f6a5) calc_paper_pane

0x080d,	// (0x0000f6c8) grid_calc_pane

0x991b,	// (0x000187d6) bg_list_pane_cp01

0x083b,	// (0x0000f6f6) clock_g1

0x0843,	// (0x0000f6fe) clock_g2

0x0001,

0xf135,	// (0x0001dff0) clock_g

0x084b,	// (0x0000f706) clock_t1_ParamLimits

0x084b,	// (0x0000f706) clock_t1

0x0860,	// (0x0000f71b) clock_t2_ParamLimits

0x0860,	// (0x0000f71b) clock_t2

0x0872,	// (0x0000f72d) clock_t3_ParamLimits

0x0872,	// (0x0000f72d) clock_t3

0x0884,	// (0x0000f73f) clock_t4_ParamLimits

0x0884,	// (0x0000f73f) clock_t4

0x0896,	// (0x0000f751) clock_t5_ParamLimits

0x0896,	// (0x0000f751) clock_t5

0x08ab,	// (0x0000f766) clock_t6_ParamLimits

0x08ab,	// (0x0000f766) clock_t6

0x08bd,	// (0x0000f778) clock_t7_ParamLimits

0x08bd,	// (0x0000f778) clock_t7

0x08cf,	// (0x0000f78a) clock_t8_ParamLimits

0x08cf,	// (0x0000f78a) clock_t8

0x08e3,	// (0x0000f79e) clock_t9_ParamLimits

0x08e3,	// (0x0000f79e) clock_t9

0x0008,

0xf13a,	// (0x0001dff5) clock_t_ParamLimits

0xf13a,	// (0x0001dff5) clock_t

0x9c11,	// (0x00018acc) popup_clock_analogue_window_cp02

0x9c11,	// (0x00018acc) popup_clock_digital_window_cp01

0x9c19,	// (0x00018ad4) listscroll_help_pane

0x991b,	// (0x000187d6) phob_pre_status_pane

0x9c23,	// (0x00018ade) grid_qdial_pane

0x9b76,	// (0x00018a31) listscroll_mce_pane

0x9b76,	// (0x00018a31) bg_notes_pane

0x9c2d,	// (0x00018ae8) list_notes_pane

0x08f7,	// (0x0000f7b2) scroll_pane_cp06

0x9c3b,	// (0x00018af6) bg_calc_paper_pane

0x9c4f,	// (0x00018b0a) list_calc_pane

0x9c69,	// (0x00018b24) bg_calc_display_pane

0x090b,	// (0x0000f7c6) calc_display_pane_t1

0x091d,	// (0x0000f7d8) calc_display_pane_t2

0x9c75,	// (0x00018b30) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0001e008) calc_display_pane_t

0x092f,	// (0x0000f7ea) cell_calc_pane_ParamLimits

0x092f,	// (0x0000f7ea) cell_calc_pane

0x9c87,	// (0x00018b42) bg_calc_paper_pane_g1

0x9c93,	// (0x00018b4e) bg_calc_paper_pane_g2

0x9c9f,	// (0x00018b5a) bg_calc_paper_pane_g3

0x9cab,	// (0x00018b66) bg_calc_paper_pane_g4

0x9cb7,	// (0x00018b72) bg_calc_paper_pane_g5

0x0964,	// (0x0000f81f) bg_calc_paper_pane_g6

0x0973,	// (0x0000f82e) bg_calc_paper_pane_g7

0x0982,	// (0x0000f83d) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0001e00f) bg_calc_paper_pane_g

0x0995,	// (0x0000f850) calc_bg_paper_pane_g9

0x09a8,	// (0x0000f863) list_calc_item_pane_ParamLimits

0x09a8,	// (0x0000f863) list_calc_item_pane

0x9cc3,	// (0x00018b7e) list_calc_item_pane_g1

0x9cd0,	// (0x00018b8b) list_calc_item_pane_t1_ParamLimits

0x9cd0,	// (0x00018b8b) list_calc_item_pane_t1

0x09bd,	// (0x0000f878) list_calc_item_pane_t2_ParamLimits

0x09bd,	// (0x0000f878) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0001e020) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0001e020) list_calc_item_pane_t

0x9ce2,	// (0x00018b9d) cell_calc_pane_g1

0x9cec,	// (0x00018ba7) grid_highlight_pane_cp02

0x9d0e,	// (0x00018bc9) bg_calc_display_pane_g1

0x09ef,	// (0x0000f8aa) bg_calc_display_pane_g2

0xd233,	// (0x0001c0ee) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0001e02a) bg_calc_display_pane_g

0x09f9,	// (0x0000f8b4) cell_qdial_pane_ParamLimits

0x09f9,	// (0x0000f8b4) cell_qdial_pane

0x0a0d,	// (0x0000f8c8) cell_qdial_pane_g1_ParamLimits

0x0a0d,	// (0x0000f8c8) cell_qdial_pane_g1

0x0a23,	// (0x0000f8de) cell_qdial_pane_g2_ParamLimits

0x0a23,	// (0x0000f8de) cell_qdial_pane_g2

0x9d17,	// (0x00018bd2) cell_qdial_pane_g3_ParamLimits

0x9d17,	// (0x00018bd2) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0001e031) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0001e031) cell_qdial_pane_g

0x0a49,	// (0x0000f904) cell_qdial_pane_t1_ParamLimits

0x0a49,	// (0x0000f904) cell_qdial_pane_t1

0x0a61,	// (0x0000f91c) cell_qdial_pane_t2_ParamLimits

0x0a61,	// (0x0000f91c) cell_qdial_pane_t2

0x0a74,	// (0x0000f92f) cell_qdial_pane_t3_ParamLimits

0x0a74,	// (0x0000f92f) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0001e03a) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0001e03a) cell_qdial_pane_t

0x991b,	// (0x000187d6) grid_highlight_pane_cp04

0x9d23,	// (0x00018bde) thumbnail_qdial_pane_ParamLimits

0x9d23,	// (0x00018bde) thumbnail_qdial_pane

0x9d7f,	// (0x00018c3a) list_help_pane

0x9d88,	// (0x00018c43) scroll_pane_cp02

0x9d91,	// (0x00018c4c) help_list_pane_t1_ParamLimits

0x9d91,	// (0x00018c4c) help_list_pane_t1

0x9daf,	// (0x00018c6a) bg_notes_pane_g2

0x9db7,	// (0x00018c72) bg_notes_pane_g3

0x9dbf,	// (0x00018c7a) notes_bg_pane_g1

0x9dc7,	// (0x00018c82) notes_bg_pane_g4

0x9dcf,	// (0x00018c8a) notes_bg_pane_g5

0x9dd7,	// (0x00018c92) notes_bg_pane_g6

0x9ddf,	// (0x00018c9a) notes_bg_pane_g7

0x9de7,	// (0x00018ca2) notes_bg_pane_g8

0x9def,	// (0x00018caa) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0001e058) notes_bg_pane_g

0x0a87,	// (0x0000f942) list_notes_text_pane_ParamLimits

0x0a87,	// (0x0000f942) list_notes_text_pane

0x9df7,	// (0x00018cb2) list_notes_text_pane_g1

0x9e00,	// (0x00018cbb) list_notes_text_pane_t1

0x0a9d,	// (0x0000f958) listscroll_cale_week_pane

0x0ac9,	// (0x0000f984) bg_cale_heading_pane

0x9e28,	// (0x00018ce3) bg_cale_pane_cp01

0x0ae1,	// (0x0000f99c) cale_week_corner_pane

0x0b00,	// (0x0000f9bb) cale_week_day_heading_pane

0x0b1d,	// (0x0000f9d8) cale_week_scroll_pane_g1

0x0b30,	// (0x0000f9eb) cale_week_scroll_pane_g2

0x0b48,	// (0x0000fa03) cale_week_scroll_pane_g3

0x0b60,	// (0x0000fa1b) cale_week_scroll_pane_g4

0x0b78,	// (0x0000fa33) cale_week_scroll_pane_g5

0x0b98,	// (0x0000fa53) cale_week_scroll_pane_g6

0x0bb8,	// (0x0000fa73) cale_week_scroll_pane_g7

0x0bd8,	// (0x0000fa93) cale_week_scroll_pane_g8

0x0bfc,	// (0x0000fab7) cale_week_scroll_pane_g9

0x0c14,	// (0x0000facf) cale_week_scroll_pane_g10

0x0c2c,	// (0x0000fae7) cale_week_scroll_pane_g11

0x0c44,	// (0x0000faff) cale_week_scroll_pane_g12

0x0c5c,	// (0x0000fb17) cale_week_scroll_pane_g13

0x0c5c,	// (0x0000fb17) cale_week_scroll_pane_g14

0x0c5c,	// (0x0000fb17) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0001e067) cale_week_scroll_pane_g

0x0c98,	// (0x0000fb53) cale_week_time_pane

0x0cbc,	// (0x0000fb77) grid_cale_week_pane

0x9e57,	// (0x00018d12) scroll_pane_cp08

0x0ce2,	// (0x0000fb9d) cell_cale_week_pane_ParamLimits

0x0ce2,	// (0x0000fb9d) cell_cale_week_pane

0x0d70,	// (0x0000fc2b) cale_week_day_heading_pane_t1

0x0d9a,	// (0x0000fc55) cale_week_day_heading_pane_t2

0x0dc9,	// (0x0000fc84) cale_week_day_heading_pane_t3

0x0df8,	// (0x0000fcb3) cale_week_day_heading_pane_t4

0x0e27,	// (0x0000fce2) cale_week_day_heading_pane_t5

0x0e5e,	// (0x0000fd19) cale_week_day_heading_pane_t6

0x0e95,	// (0x0000fd50) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0001e088) cale_week_day_heading_pane_t

0x9e74,	// (0x00018d2f) bg_cale_side_pane

0x0ebf,	// (0x0000fd7a) cale_week_time_pane_t1

0x0ed9,	// (0x0000fd94) cale_week_time_pane_t2

0x0ef3,	// (0x0000fdae) cale_week_time_pane_t3

0x0f0d,	// (0x0000fdc8) cale_week_time_pane_t4

0x0f27,	// (0x0000fde2) cale_week_time_pane_t5

0x0f41,	// (0x0000fdfc) cale_week_time_pane_t6

0x0f5b,	// (0x0000fe16) cale_week_time_pane_t7

0x0f75,	// (0x0000fe30) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0001e097) cale_week_time_pane_t

0x0f95,	// (0x0000fe50) cell_cale_week_pane_g2

0x0fb9,	// (0x0000fe74) cell_cale_week_pane_g3_ParamLimits

0x0fb9,	// (0x0000fe74) cell_cale_week_pane_g3

0x9e82,	// (0x00018d3d) grid_highlight_pane_cp07

0x9e8a,	// (0x00018d45) listscroll_gms_pane

0x9e94,	// (0x00018d4f) grid_gms_pane

0x9e9d,	// (0x00018d58) listscroll_gms_pane_g1

0x9ea5,	// (0x00018d60) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0001e0a8) listscroll_gms_pane_g

0x0fd1,	// (0x0000fe8c) scroll_pane_cp010

0x0fdc,	// (0x0000fe97) cell_gms_pane_ParamLimits

0x0fdc,	// (0x0000fe97) cell_gms_pane

0x0fee,	// (0x0000fea9) cell_gms_pane_g1

0x9ead,	// (0x00018d68) cell_gms_pane_g2

0x9eb5,	// (0x00018d70) cell_gms_pane_g3

0x9ebe,	// (0x00018d79) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0001e0ad) cell_gms_pane_g

0x9ec7,	// (0x00018d82) grid_highlight_pane_cp09

0x333e,	// (0x000121f9) phob_pre_status_pane_g1

0x3346,	// (0x00012201) phob_pre_status_pane_g2

0x334e,	// (0x00012209) phob_pre_status_pane_g3

0x3356,	// (0x00012211) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x0001e4ab) phob_pre_status_pane_g

0x3366,	// (0x00012221) phob_pre_status_pane_t1

0x3374,	// (0x0001222f) phob_pre_status_pane_t2

0x3384,	// (0x0001223f) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x0001e4b6) phob_pre_status_pane_t

0x9ecf,	// (0x00018d8a) bg_list_pane_cp05

0x0ffe,	// (0x0000feb9) grid_vorec_pane

0x1006,	// (0x0000fec1) vorec_t1

0x1014,	// (0x0000fecf) vorec_t2

0x1022,	// (0x0000fedd) vorec_t3

0x1030,	// (0x0000feeb) vorec_t4

0x9448,	// (0x00018303) vorec_t5

0x9456,	// (0x00018311) vorec_t6

0x0004,

0xf1fb,	// (0x0001e0b6) vorec_t

0x9464,	// (0x0001831f) wait_bar_pane_cp01

0x104c,	// (0x0000ff07) cell_vorec_pane_ParamLimits

0x104c,	// (0x0000ff07) cell_vorec_pane

0x9ed7,	// (0x00018d92) cell_vorec_pane_g1

0x991b,	// (0x000187d6) grid_highlight_pane_cp05

0x1077,	// (0x0000ff32) cams_zoom_pane

0x1086,	// (0x0000ff41) image_vga_pane

0x10a0,	// (0x0000ff5b) main_camera_pane_g1

0x10b2,	// (0x0000ff6d) main_camera_pane_g2

0x10c2,	// (0x0000ff7d) main_camera_pane_g3

0x10d2,	// (0x0000ff8d) main_camera_pane_g4

0x10e2,	// (0x0000ff9d) main_camera_pane_g5

0x10f2,	// (0x0000ffad) main_camera_pane_g6

0x1102,	// (0x0000ffbd) main_camera_pane_g7

0x0007,

0xf206,	// (0x0001e0c1) main_camera_pane_g

0x1112,	// (0x0000ffcd) main_camera_pane_t1

0x1128,	// (0x0000ffe3) main_camera_pane_t2

0x0001,

0xf217,	// (0x0001e0d2) main_camera_pane_t

0x1162,	// (0x0001001d) cams_zoom_pane_cp_ParamLimits

0x1162,	// (0x0001001d) cams_zoom_pane_cp

0x118a,	// (0x00010045) image_cif_pane_ParamLimits

0x118a,	// (0x00010045) image_cif_pane

0x11c5,	// (0x00010080) image_subqcif_pane

0x11cd,	// (0x00010088) main_video_pane_g1_ParamLimits

0x11cd,	// (0x00010088) main_video_pane_g1

0x11f1,	// (0x000100ac) main_video_pane_g2_ParamLimits

0x11f1,	// (0x000100ac) main_video_pane_g2

0x1225,	// (0x000100e0) main_video_pane_g3_ParamLimits

0x1225,	// (0x000100e0) main_video_pane_g3

0x1253,	// (0x0001010e) main_video_pane_g4_ParamLimits

0x1253,	// (0x0001010e) main_video_pane_g4

0x1281,	// (0x0001013c) main_video_pane_g5_ParamLimits

0x1281,	// (0x0001013c) main_video_pane_g5

0x9eed,	// (0x00018da8) main_video_pane_g6_ParamLimits

0x9eed,	// (0x00018da8) main_video_pane_g6

0x0006,

0xf21c,	// (0x0001e0d7) main_video_pane_g_ParamLimits

0xf21c,	// (0x0001e0d7) main_video_pane_g

0x12aa,	// (0x00010165) main_video_pane_t1_ParamLimits

0x12aa,	// (0x00010165) main_video_pane_t1

0x9f07,	// (0x00018dc2) cams_zoom_pane_g1

0x9f10,	// (0x00018dcb) cams_zoom_pane_g2

0x9f19,	// (0x00018dd4) cams_zoom_pane_g3

0x9f22,	// (0x00018ddd) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0001e0e6) cams_zoom_pane_g

0x1307,	// (0x000101c2) grid_cams_pane

0x1321,	// (0x000101dc) linegrid_cams_pane

0x1334,	// (0x000101ef) cell_cams_pane_ParamLimits

0x1334,	// (0x000101ef) cell_cams_pane

0x9f2b,	// (0x00018de6) cams_burst_image_pane

0x9f33,	// (0x00018dee) cell_cams_pane_g1

0x991b,	// (0x000187d6) grid_highlight_pane_cp03

0x9ce2,	// (0x00018b9d) mp_bg_pane_g1

0x991b,	// (0x000187d6) bg_list_pane_cp03

0xbd69,	// (0x0001ac24) bg_mp_pane

0xbd71,	// (0x0001ac2c) grid_mp_pane

0xbd79,	// (0x0001ac34) media_player_g1

0xbd81,	// (0x0001ac3c) media_player_t1

0xbd8f,	// (0x0001ac4a) media_player_t2

0xbd9d,	// (0x0001ac58) media_player_t3

0xbdab,	// (0x0001ac66) media_player_t4

0xbdb9,	// (0x0001ac74) media_player_t5

0xbdc7,	// (0x0001ac82) media_player_t6

0xbdd5,	// (0x0001ac90) media_player_t7

0x0006,

0xf5da,	// (0x0001e495) media_player_t

0xbde3,	// (0x0001ac9e) wait_bar_pane_cp02

0xf5bf,	// (0x0001e47a) main_usb_pane_t

0x3335,	// (0x000121f0) cell_mp_pane

0x9ce2,	// (0x00018b9d) cell_mp_pane_g1

0x991b,	// (0x000187d6) grid_highlight_pane_cp06

0x9f3b,	// (0x00018df6) grid_skin_colour_pane

0x9f43,	// (0x00018dfe) list_highlight_pane_cp03

0x146b,	// (0x00010326) skin_g1

0x9f4b,	// (0x00018e06) skin_t1

0x9f5a,	// (0x00018e15) skin_t2

0x0001,

0xf260,	// (0x0001e11b) skin_t

0x1473,	// (0x0001032e) cell_skin_colour_pane_ParamLimits

0x1473,	// (0x0001032e) cell_skin_colour_pane

0x9f68,	// (0x00018e23) cell_skin_colour_pane_g1

0x14ec,	// (0x000103a7) call_video_g1_ParamLimits

0x14ec,	// (0x000103a7) call_video_g1

0x1508,	// (0x000103c3) call_video_g2_ParamLimits

0x1508,	// (0x000103c3) call_video_g2

0x0001,

0xf265,	// (0x0001e120) call_video_g_ParamLimits

0xf265,	// (0x0001e120) call_video_g

0x155a,	// (0x00010415) call_video_uplink_pane_cp1_ParamLimits

0x155a,	// (0x00010415) call_video_uplink_pane_cp1

0x9f7a,	// (0x00018e35) call_video_uplink_pane_cp2

0x15f9,	// (0x000104b4) video_down_crop_pane_ParamLimits

0x15f9,	// (0x000104b4) video_down_crop_pane

0x16e2,	// (0x0001059d) video_down_pane_ParamLimits

0x16e2,	// (0x0001059d) video_down_pane

0x9f82,	// (0x00018e3d) video_down_subqcif_pane_ParamLimits

0x9f82,	// (0x00018e3d) video_down_subqcif_pane

0x9f9a,	// (0x00018e55) video_down_subqcif_pane_cp_ParamLimits

0x9f9a,	// (0x00018e55) video_down_subqcif_pane_cp

0x9fc0,	// (0x00018e7b) im_reading_pane_ParamLimits

0x9fc0,	// (0x00018e7b) im_reading_pane

0x17f2,	// (0x000106ad) im_writing_pane_ParamLimits

0x17f2,	// (0x000106ad) im_writing_pane

0x1808,	// (0x000106c3) im_reading_pane_t1

0x9fda,	// (0x00018e95) list_im_pane

0x9feb,	// (0x00018ea6) scroll_pane_cp07

0x1842,	// (0x000106fd) im_writing_pane_t1_ParamLimits

0x1842,	// (0x000106fd) im_writing_pane_t1

0xa004,	// (0x00018ebf) im_writing_pane_t2_ParamLimits

0xa004,	// (0x00018ebf) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0001e12a) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0001e12a) im_writing_pane_t

0x991b,	// (0x000187d6) input_focus_pane_cp04

0x991b,	// (0x000187d6) input_focus_pane_cp05

0x1857,	// (0x00010712) list_im_single_pane_ParamLimits

0x1857,	// (0x00010712) list_im_single_pane

0x186c,	// (0x00010727) list_single_im_pane_t1

0x32f5,	// (0x000121b0) blid_accuracy_pane

0x32fd,	// (0x000121b8) blid_compass_pane

0x3307,	// (0x000121c2) main_location_t1

0x3317,	// (0x000121d2) main_location_t2

0x3327,	// (0x000121e2) main_location_t3

0x0002,

0xf5e9,	// (0x0001e4a4) main_location_t

0x991b,	// (0x000187d6) aid_levels_location

0x9ce2,	// (0x00018b9d) blid_accuracy_pane_g1

0x9ce2,	// (0x00018b9d) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0001e18c) blid_accuracy_pane_g

0xa04c,	// (0x00018f07) wml_content_pane

0xa08a,	// (0x00018f45) wml_button_pane_ParamLimits

0xa08a,	// (0x00018f45) wml_button_pane

0x187b,	// (0x00010736) wml_list_single_large_pane_ParamLimits

0x187b,	// (0x00010736) wml_list_single_large_pane

0x1890,	// (0x0001074b) wml_list_single_medium_pane_ParamLimits

0x1890,	// (0x0001074b) wml_list_single_medium_pane

0x18a7,	// (0x00010762) wml_list_single_small_pane_ParamLimits

0x18a7,	// (0x00010762) wml_list_single_small_pane

0xa09e,	// (0x00018f59) wml_selection_box_pane_ParamLimits

0xa09e,	// (0x00018f59) wml_selection_box_pane

0xa0b1,	// (0x00018f6c) wml_list_single_pane_t1

0xa0c0,	// (0x00018f7b) wml_list_single_medium_pane_t1

0xa0cf,	// (0x00018f8a) wml_list_single_large_pane_t1

0xa0de,	// (0x00018f99) input_focus_pane_cp02_ParamLimits

0xa0de,	// (0x00018f99) input_focus_pane_cp02

0xa0f1,	// (0x00018fac) wml_selection_box_pane_g1

0xa0fa,	// (0x00018fb5) wml_selection_box_pane_t1_ParamLimits

0xa0fa,	// (0x00018fb5) wml_selection_box_pane_t1

0x9b76,	// (0x00018a31) bg_wml_button_pane_ParamLimits

0x9b76,	// (0x00018a31) bg_wml_button_pane

0xa112,	// (0x00018fcd) wml_button_pane_g1

0xa11a,	// (0x00018fd5) wml_button_pane_t1

0xa112,	// (0x00018fcd) wml_button_bg_pane_g1

0xa12a,	// (0x00018fe5) wml_button_bg_pane_g2

0xa132,	// (0x00018fed) wml_button_bg_pane_g3

0xa13a,	// (0x00018ff5) wml_button_bg_pane_g4

0xa142,	// (0x00018ffd) wml_button_bg_pane_g5

0xa14a,	// (0x00019005) wml_button_bg_pane_g6

0xa152,	// (0x0001900d) wml_button_bg_pane_g7

0xa15a,	// (0x00019015) wml_button_bg_pane_g8

0xa162,	// (0x0001901d) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0001e12f) wml_button_bg_pane_g

0x18c0,	// (0x0001077b) bg_list_pane_cp02

0xa16a,	// (0x00019025) mce_header_pane_ParamLimits

0xa16a,	// (0x00019025) mce_header_pane

0xa180,	// (0x0001903b) mce_icon_pane

0xa180,	// (0x0001903b) mce_image_pane

0xa189,	// (0x00019044) mce_text_pane_ParamLimits

0xa189,	// (0x00019044) mce_text_pane

0x18c8,	// (0x00010783) scroll_pane_cp03

0xa082,	// (0x00018f3d) scroll_pane_cp04

0xa19c,	// (0x00019057) scroll_pane_cp05_ParamLimits

0xa19c,	// (0x00019057) scroll_pane_cp05

0x18d2,	// (0x0001078d) mce_header_field_pane_ParamLimits

0x18d2,	// (0x0001078d) mce_header_field_pane

0x18e9,	// (0x000107a4) mce_header_field_pane_2_ParamLimits

0x18e9,	// (0x000107a4) mce_header_field_pane_2

0x18ff,	// (0x000107ba) mce_header_field_pane_3

0x1907,	// (0x000107c2) list_single_mce_message_pane_ParamLimits

0x1907,	// (0x000107c2) list_single_mce_message_pane

0x191d,	// (0x000107d8) list_single_mce_smart_pane_ParamLimits

0x191d,	// (0x000107d8) list_single_mce_smart_pane

0xa1a8,	// (0x00019063) input_focus_pane_cp03

0xa1b1,	// (0x0001906c) list_header_data_pane

0x193e,	// (0x000107f9) mce_header_field_pane_t1

0x194e,	// (0x00010809) list_single_mce_header_pane_ParamLimits

0x194e,	// (0x00010809) list_single_mce_header_pane

0xa1b9,	// (0x00019074) list_single_mce_header_pane_t1

0xa1c8,	// (0x00019083) list_single_mce_message_pane_g1

0xa1d0,	// (0x0001908b) list_single_mce_message_pane_t1

0x1988,	// (0x00010843) bg_cale_heading_pane_cp01_ParamLimits

0x1988,	// (0x00010843) bg_cale_heading_pane_cp01

0xa1de,	// (0x00019099) bg_cale_pane_cp02_ParamLimits

0xa1de,	// (0x00019099) bg_cale_pane_cp02

0x19c2,	// (0x0001087d) cale_month_corner_pane

0x19e1,	// (0x0001089c) cale_month_day_heading_pane_ParamLimits

0x19e1,	// (0x0001089c) cale_month_day_heading_pane

0x1a33,	// (0x000108ee) cale_month_pane_g1_ParamLimits

0x1a33,	// (0x000108ee) cale_month_pane_g1

0x1a62,	// (0x0001091d) cale_month_pane_g2_ParamLimits

0x1a62,	// (0x0001091d) cale_month_pane_g2

0x1a92,	// (0x0001094d) cale_month_pane_g3_ParamLimits

0x1a92,	// (0x0001094d) cale_month_pane_g3

0x1ace,	// (0x00010989) cale_month_pane_g4_ParamLimits

0x1ace,	// (0x00010989) cale_month_pane_g4

0x1b0a,	// (0x000109c5) cale_month_pane_g5_ParamLimits

0x1b0a,	// (0x000109c5) cale_month_pane_g5

0x1b52,	// (0x00010a0d) cale_month_pane_g6_ParamLimits

0x1b52,	// (0x00010a0d) cale_month_pane_g6

0x1b9e,	// (0x00010a59) cale_month_pane_g7_ParamLimits

0x1b9e,	// (0x00010a59) cale_month_pane_g7

0x1bee,	// (0x00010aa9) cale_month_pane_g8_ParamLimits

0x1bee,	// (0x00010aa9) cale_month_pane_g8

0x1c42,	// (0x00010afd) cale_month_pane_g9_ParamLimits

0x1c42,	// (0x00010afd) cale_month_pane_g9

0x1c94,	// (0x00010b4f) cale_month_pane_g10_ParamLimits

0x1c94,	// (0x00010b4f) cale_month_pane_g10

0x1ce6,	// (0x00010ba1) cale_month_pane_g11_ParamLimits

0x1ce6,	// (0x00010ba1) cale_month_pane_g11

0x1d38,	// (0x00010bf3) cale_month_pane_g12_ParamLimits

0x1d38,	// (0x00010bf3) cale_month_pane_g12

0x1d8a,	// (0x00010c45) cale_month_pane_g13_ParamLimits

0x1d8a,	// (0x00010c45) cale_month_pane_g13

0x000c,

0xf287,	// (0x0001e142) cale_month_pane_g_ParamLimits

0xf287,	// (0x0001e142) cale_month_pane_g

0x1ddc,	// (0x00010c97) cale_month_week_pane

0x1e00,	// (0x00010cbb) grid_cale_month_pane_ParamLimits

0x1e00,	// (0x00010cbb) grid_cale_month_pane

0x1e49,	// (0x00010d04) cale_month_day_heading_pane_t1

0x1e8b,	// (0x00010d46) cale_month_day_heading_pane_t2

0x1ec0,	// (0x00010d7b) cale_month_day_heading_pane_t3

0x1ef5,	// (0x00010db0) cale_month_day_heading_pane_t4

0x1f32,	// (0x00010ded) cale_month_day_heading_pane_t5

0x1f77,	// (0x00010e32) cale_month_day_heading_pane_t6

0x1fbc,	// (0x00010e77) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0001e15d) cale_month_day_heading_pane_t

0x9e74,	// (0x00018d2f) bg_cale_side_pane_cp01

0x2009,	// (0x00010ec4) cale_month_week_pane_t1

0x2022,	// (0x00010edd) cale_month_week_pane_t2

0x203b,	// (0x00010ef6) cale_month_week_pane_t3

0x2054,	// (0x00010f0f) cale_month_week_pane_t4

0x206d,	// (0x00010f28) cale_month_week_pane_t5

0x2086,	// (0x00010f41) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0001e16c) cale_month_week_pane_t

0x209f,	// (0x00010f5a) cell_cale_month_pane_ParamLimits

0x209f,	// (0x00010f5a) cell_cale_month_pane

0xa21d,	// (0x000190d8) cell_cale_month_pane_g1

0x21f7,	// (0x000110b2) cell_cale_month_pane_t1_ParamLimits

0x21f7,	// (0x000110b2) cell_cale_month_pane_t1

0x9e82,	// (0x00018d3d) grid_highlight_pane_cp08

0x9ce2,	// (0x00018b9d) main_smil_g1

0x2223,	// (0x000110de) smil_status_pane

0xa229,	// (0x000190e4) smil_text_pane

0xbc49,	// (0x0001ab04) bg_popup_call3_rect_pane_g8

0xbc51,	// (0x0001ab0c) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0001e425) bg_popup_call3_rect_pane_g

0xbf2c,	// (0x0001ade7) smil_status_volume_pane_g1

0xa233,	// (0x000190ee) smil_status_pane_t1

0xbf5f,	// (0x0001ae1a) volume_smil_pane

0xa24a,	// (0x00019105) list_smil_text_pane

0x2238,	// (0x000110f3) scroll_pane_cp011

0x2243,	// (0x000110fe) smil_text_list_pane_t1_ParamLimits

0x2243,	// (0x000110fe) smil_text_list_pane_t1

0xa254,	// (0x0001910f) aid_volume_smil_ParamLimits

0xa254,	// (0x0001910f) aid_volume_smil

0x9ce2,	// (0x00018b9d) smil_volume_pane_g1

0x9ce2,	// (0x00018b9d) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0001e18c) smil_volume_pane_g

0x0a9d,	// (0x0000f958) listscroll_cale_day_pane

0xa276,	// (0x00019131) bg_cale_pane

0xa28e,	// (0x00019149) list_cale_pane

0xa2b1,	// (0x0001916c) scroll_pane_cp09

0xa2c2,	// (0x0001917d) cale_bg_pane_g1

0xa2ca,	// (0x00019185) cale_bg_pane_g2

0xa2d2,	// (0x0001918d) cale_bg_pane_g3

0xa2da,	// (0x00019195) cale_bg_pane_g4

0xa2e2,	// (0x0001919d) cale_bg_pane_g5

0xa2ea,	// (0x000191a5) cale_bg_pane_g6

0xa2f2,	// (0x000191ad) cale_bg_pane_g7

0xa2fa,	// (0x000191b5) cale_bg_pane_g8

0xa302,	// (0x000191bd) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0001e191) cale_bg_pane_g

0x228f,	// (0x0001114a) list_cale_time_pane_ParamLimits

0x228f,	// (0x0001114a) list_cale_time_pane

0xa30a,	// (0x000191c5) list_cale_time_pane_g1_ParamLimits

0xa30a,	// (0x000191c5) list_cale_time_pane_g1

0xa316,	// (0x000191d1) list_cale_time_pane_g2_ParamLimits

0xa316,	// (0x000191d1) list_cale_time_pane_g2

0x22a5,	// (0x00011160) list_cale_time_pane_g3_ParamLimits

0x22a5,	// (0x00011160) list_cale_time_pane_g3

0x22b3,	// (0x0001116e) list_cale_time_pane_g4_ParamLimits

0x22b3,	// (0x0001116e) list_cale_time_pane_g4

0x22c1,	// (0x0001117c) list_cale_time_pane_g5_ParamLimits

0x22c1,	// (0x0001117c) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0001e1a4) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0001e1a4) list_cale_time_pane_g

0xa330,	// (0x000191eb) list_cale_time_pane_t1_ParamLimits

0xa330,	// (0x000191eb) list_cale_time_pane_t1

0xa358,	// (0x00019213) list_cale_time_pane_t2_ParamLimits

0xa358,	// (0x00019213) list_cale_time_pane_t2

0x2643,	// (0x000114fe) aid_blid_cardinal_pane

0x2681,	// (0x0001153c) compass_pane_t4

0xa380,	// (0x0001923b) list_cale_time_pane_t4_ParamLimits

0xa380,	// (0x0001923b) list_cale_time_pane_t4

0x268f,	// (0x0001154a) compass_pane_t5

0x269d,	// (0x00011558) compass_pane_t6

0x26ab,	// (0x00011566) compass_pane_t7

0xa873,	// (0x0001972e) navi_pane_cc_t1

0xaa62,	// (0x0001991d) aid_phob_thumbnail_center_pane

0x2d0b,	// (0x00011bc6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0001e1b1) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0001e1b1) list_cale_time_pane_t

0x9572,	// (0x0001842d) bg_popup_window_pane_cp02_ParamLimits

0x9572,	// (0x0001842d) bg_popup_window_pane_cp02

0xa3a8,	// (0x00019263) heading_pane_cp01_ParamLimits

0xa3a8,	// (0x00019263) heading_pane_cp01

0xa3b4,	// (0x0001926f) loc_req_pane_ParamLimits

0xa3b4,	// (0x0001926f) loc_req_pane

0xa3c4,	// (0x0001927f) loc_type_pane_ParamLimits

0xa3c4,	// (0x0001927f) loc_type_pane

0xa3d6,	// (0x00019291) loc_type_pane_t1_ParamLimits

0xa3d6,	// (0x00019291) loc_type_pane_t1

0xa3e8,	// (0x000192a3) loc_type_pane_t2_ParamLimits

0xa3e8,	// (0x000192a3) loc_type_pane_t2

0xa3fa,	// (0x000192b5) loc_type_pane_t3_ParamLimits

0xa3fa,	// (0x000192b5) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0001e1b8) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0001e1b8) loc_type_pane_t

0xa40c,	// (0x000192c7) list_loc_req_pane

0xa416,	// (0x000192d1) scroll_pane_cp012

0x22cf,	// (0x0001118a) list_single_loc_request_popup_menu_pane_ParamLimits

0x22cf,	// (0x0001118a) list_single_loc_request_popup_menu_pane

0xa421,	// (0x000192dc) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa421,	// (0x000192dc) list_single_loc_request_popup_menu_pane_g1

0xa42d,	// (0x000192e8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa42d,	// (0x000192e8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0001e1bf) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0001e1bf) list_single_loc_request_popup_menu_pane_g

0xa439,	// (0x000192f4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa439,	// (0x000192f4) list_single_loc_request_popup_menu_pane_t1

0x9b76,	// (0x00018a31) bg_popup_window_pane_cp03_ParamLimits

0x9b76,	// (0x00018a31) bg_popup_window_pane_cp03

0xa44f,	// (0x0001930a) heading_loc_req_pane_ParamLimits

0xa44f,	// (0x0001930a) heading_loc_req_pane

0x22dc,	// (0x00011197) popup_dyc_status_message_window_g1_ParamLimits

0x22dc,	// (0x00011197) popup_dyc_status_message_window_g1

0x22f0,	// (0x000111ab) popup_dyc_status_message_window_t1_ParamLimits

0x22f0,	// (0x000111ab) popup_dyc_status_message_window_t1

0x2305,	// (0x000111c0) popup_dyc_status_message_window_t2_ParamLimits

0x2305,	// (0x000111c0) popup_dyc_status_message_window_t2

0x231a,	// (0x000111d5) popup_dyc_status_message_window_t3_ParamLimits

0x231a,	// (0x000111d5) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0001e1c4) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0001e1c4) popup_dyc_status_message_window_t

0x991b,	// (0x000187d6) bg_heading_pane_cp01

0xa45b,	// (0x00019316) heading_loc_req_pane_g1

0xa463,	// (0x0001931e) heading_loc_req_pane_g2

0xa46b,	// (0x00019326) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0001e1cb) heading_loc_req_pane_g

0xa473,	// (0x0001932e) heading_loc_req_pane_t1

0xa482,	// (0x0001933d) bg_popup_sub_pane_cp01_ParamLimits

0xa482,	// (0x0001933d) bg_popup_sub_pane_cp01

0xa490,	// (0x0001934b) popup_cale_events_window_g1_ParamLimits

0xa490,	// (0x0001934b) popup_cale_events_window_g1

0xa4b0,	// (0x0001936b) popup_cale_events_window_g2_ParamLimits

0xa4b0,	// (0x0001936b) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0001e1ff) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0001e1ff) popup_cale_events_window_g

0xa4d0,	// (0x0001938b) popup_cale_events_window_t1_ParamLimits

0xa4d0,	// (0x0001938b) popup_cale_events_window_t1

0xa4e2,	// (0x0001939d) popup_cale_events_window_t2_ParamLimits

0xa4e2,	// (0x0001939d) popup_cale_events_window_t2

0xa520,	// (0x000193db) popup_cale_events_window_t3_ParamLimits

0xa520,	// (0x000193db) popup_cale_events_window_t3

0xa55a,	// (0x00019415) popup_cale_events_window_t4_ParamLimits

0xa55a,	// (0x00019415) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0001e204) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0001e204) popup_cale_events_window_t

0x2413,	// (0x000112ce) call_type_pane

0x2423,	// (0x000112de) popup_call_status_window_g1

0x2437,	// (0x000112f2) popup_call_status_window_g2

0x244b,	// (0x00011306) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0001e20d) popup_call_status_window_g

0xa590,	// (0x0001944b) call_type_pane_g1

0xa599,	// (0x00019454) call_type_pane_g2

0x0001,

0xf359,	// (0x0001e214) call_type_pane_g

0x991b,	// (0x000187d6) bg_popup_sub_pane_cp02

0xa5a2,	// (0x0001945d) listscroll_popup_wml_pane

0xa5aa,	// (0x00019465) list_wml_pane

0xa5b4,	// (0x0001946f) scroll_pane_cp013

0xa5bf,	// (0x0001947a) list_single_graphic_popup_wml_pane_ParamLimits

0xa5bf,	// (0x0001947a) list_single_graphic_popup_wml_pane

0x9ce2,	// (0x00018b9d) list_single_graphic_popup_wml_pane_g1

0xa5d3,	// (0x0001948e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0001e219) list_single_graphic_popup_wml_pane_g

0xa5db,	// (0x00019496) list_single_graphic_popup_wml_pane_t1

0xa5f1,	// (0x000194ac) aid_call_pane

0x9b6e,	// (0x00018a29) popup_clock_analogue_window_g1

0x9b6e,	// (0x00018a29) popup_clock_analogue_window_g2

0xa5f9,	// (0x000194b4) popup_clock_analogue_window_g3

0xa5f9,	// (0x000194b4) popup_clock_analogue_window_g4

0x9ce2,	// (0x00018b9d) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0001e21e) popup_clock_analogue_window_g

0xa601,	// (0x000194bc) popup_clock_analogue_window_t1

0xa60f,	// (0x000194ca) clock_digital_number_pane_ParamLimits

0xa60f,	// (0x000194ca) clock_digital_number_pane

0xa61b,	// (0x000194d6) clock_digital_number_pane_cp02_ParamLimits

0xa61b,	// (0x000194d6) clock_digital_number_pane_cp02

0xa627,	// (0x000194e2) clock_digital_number_pane_cp03_ParamLimits

0xa627,	// (0x000194e2) clock_digital_number_pane_cp03

0xa633,	// (0x000194ee) clock_digital_number_pane_cp04_ParamLimits

0xa633,	// (0x000194ee) clock_digital_number_pane_cp04

0xa63f,	// (0x000194fa) clock_digital_separator_pane_ParamLimits

0xa63f,	// (0x000194fa) clock_digital_separator_pane

0xa64b,	// (0x00019506) popup_clock_digital_window_t1

0x9ce2,	// (0x00018b9d) clock_digital_number_pane_g1

0x9ce2,	// (0x00018b9d) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0001e18c) clock_digital_number_pane_g

0x9ce2,	// (0x00018b9d) clock_digital_separator_pane_g1

0x9ce2,	// (0x00018b9d) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0001e18c) clock_digital_separator_pane_g

0x991b,	// (0x000187d6) bg_popup_window_pane_cp04

0xa668,	// (0x00019523) heading_pane_cp03

0xa670,	// (0x0001952b) listscroll_popup_gms_pane

0xa678,	// (0x00019533) grid_large_graphic_popup_pane

0xa682,	// (0x0001953d) listscroll_popup_gms_pane_g1

0xa68a,	// (0x00019545) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0001e229) listscroll_popup_gms_pane_g

0xa082,	// (0x00018f3d) scroll_pane_cp014

0x245a,	// (0x00011315) cell_large_graphic_popup_pane_ParamLimits

0x245a,	// (0x00011315) cell_large_graphic_popup_pane

0x2472,	// (0x0001132d) cell_large_graphic_popup_pane_g1_ParamLimits

0x2472,	// (0x0001132d) cell_large_graphic_popup_pane_g1

0xa692,	// (0x0001954d) cell_large_graphic_popup_pane_g2_ParamLimits

0xa692,	// (0x0001954d) cell_large_graphic_popup_pane_g2

0xa69e,	// (0x00019559) cell_large_graphic_popup_pane_g3_ParamLimits

0xa69e,	// (0x00019559) cell_large_graphic_popup_pane_g3

0xa6ab,	// (0x00019566) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6ab,	// (0x00019566) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0001e22e) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0001e22e) cell_large_graphic_popup_pane_g

0xa6bb,	// (0x00019576) grid_highlight_pane_cp010

0x9ce2,	// (0x00018b9d) bg_popup_call_pane_g1

0xa6c5,	// (0x00019580) list_single_graphic_popup_conf_pane_ParamLimits

0xa6c5,	// (0x00019580) list_single_graphic_popup_conf_pane

0xa6d8,	// (0x00019593) list_highlight_pane_cp01

0xa6e1,	// (0x0001959c) list_single_graphic_popup_conf_pane_g1

0xa6e9,	// (0x000195a4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0001e237) list_single_graphic_popup_conf_pane_g

0xa6f1,	// (0x000195ac) list_single_graphic_popup_conf_pane_t1

0xa6ff,	// (0x000195ba) linegrid_cams_pane_g1

0x247e,	// (0x00011339) linegrid_cams_pane_g2

0x9eb5,	// (0x00018d70) linegrid_cams_pane_g3

0xa708,	// (0x000195c3) linegrid_cams_pane_g4

0x2487,	// (0x00011342) linegrid_cams_pane_g5

0x2490,	// (0x0001134b) linegrid_cams_pane_g6

0x9ebe,	// (0x00018d79) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0001e23c) linegrid_cams_pane_g

0xa711,	// (0x000195cc) popup_clock_analogue_window

0xa711,	// (0x000195cc) popup_clock_digital_window

0x991b,	// (0x000187d6) popup_phob_thumbnail_window

0x9ce2,	// (0x00018b9d) call_video_uplink_pane_g1

0xa71a,	// (0x000195d5) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0001e24b) call_video_uplink_pane_g

0xa722,	// (0x000195dd) video_uplink_pane

0xa72a,	// (0x000195e5) mce_image_pane_g1

0x249b,	// (0x00011356) mce_image_pane_g2

0x24a3,	// (0x0001135e) mce_image_pane_g3

0x24ab,	// (0x00011366) mce_image_pane_g4

0x24b5,	// (0x00011370) mce_image_pane_g5

0x0004,

0xf395,	// (0x0001e250) mce_image_pane_g

0xa734,	// (0x000195ef) control_top_pane_stacon_cp01_ParamLimits

0xa734,	// (0x000195ef) control_top_pane_stacon_cp01

0xa748,	// (0x00019603) uni_indicator_pane_stacon_cp01_ParamLimits

0xa748,	// (0x00019603) uni_indicator_pane_stacon_cp01

0xa759,	// (0x00019614) bg_popup_sub_pane_cp03

0x24bd,	// (0x00011378) chi_dic_find_pane

0x24c5,	// (0x00011380) listscroll_chi_dic_pane

0x24ce,	// (0x00011389) main_pane_chidic_g1

0x24e1,	// (0x0001139c) chi_dic_find_pane_t1

0xa763,	// (0x0001961e) find_chidic_pane

0xa76c,	// (0x00019627) chi_dic_list_pane_ParamLimits

0xa76c,	// (0x00019627) chi_dic_list_pane

0xa77d,	// (0x00019638) scroll_pane_cp020

0x24ef,	// (0x000113aa) find_chidic_pane_t1

0x991b,	// (0x000187d6) input_focus_pane_cp06

0x24fe,	// (0x000113b9) list_chi_dic_pane_ParamLimits

0x24fe,	// (0x000113b9) list_chi_dic_pane

0x2510,	// (0x000113cb) list_chi_dic_pane_t1_ParamLimits

0x2510,	// (0x000113cb) list_chi_dic_pane_t1

0x991b,	// (0x000187d6) list_highlight_pane_cp020

0xa785,	// (0x00019640) bg_cale_heading_pane_g1

0x2523,	// (0x000113de) bg_cale_heading_pane_g2

0x252b,	// (0x000113e6) bg_cale_heading_pane_g3

0x2533,	// (0x000113ee) bg_cale_heading_pane_g4

0x253d,	// (0x000113f8) bg_cale_heading_pane_g5

0x2547,	// (0x00011402) bg_cale_heading_pane_g6

0x254f,	// (0x0001140a) bg_cale_heading_pane_g7

0x2557,	// (0x00011412) bg_cale_heading_pane_g8

0x2561,	// (0x0001141c) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0001e25b) bg_cale_heading_pane_g

0xa785,	// (0x00019640) bg_cale_side_pane_g1

0x256b,	// (0x00011426) bg_cale_side_pane_g2

0x2573,	// (0x0001142e) bg_cale_side_pane_g3

0x257b,	// (0x00011436) bg_cale_side_pane_g4

0x2583,	// (0x0001143e) bg_cale_side_pane_g5

0x258b,	// (0x00011446) bg_cale_side_pane_g6

0x2593,	// (0x0001144e) bg_cale_side_pane_g7

0x259b,	// (0x00011456) bg_cale_side_pane_g8

0x25a3,	// (0x0001145e) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0001e26e) bg_cale_side_pane_g

0x25ab,	// (0x00011466) popup_call_status_window_ParamLimits

0x25ab,	// (0x00011466) popup_call_status_window

0xa78d,	// (0x00019648) stacon_top_pane

0xa795,	// (0x00019650) status_pane_ParamLimits

0xa795,	// (0x00019650) status_pane

0xa7aa,	// (0x00019665) status_small_pane

0xa7b2,	// (0x0001966d) control_pane

0x991b,	// (0x000187d6) stacon_bottom_pane

0xa7ba,	// (0x00019675) list_single_mce_smart_pane_t1_ParamLimits

0xa7ba,	// (0x00019675) list_single_mce_smart_pane_t1

0xa7cd,	// (0x00019688) list_single_mce_smart_pane_t2_ParamLimits

0xa7cd,	// (0x00019688) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0001e281) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0001e281) list_single_mce_smart_pane_t

0x25f2,	// (0x000114ad) compass_pane

0x25fb,	// (0x000114b6) main_location2_pane_t1

0x260d,	// (0x000114c8) main_location2_pane_t2

0x261f,	// (0x000114da) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0001e286) main_location2_pane_t

0xa7ec,	// (0x000196a7) compass_pane_g1_ParamLimits

0xa7ec,	// (0x000196a7) compass_pane_g1

0x2663,	// (0x0001151e) compass_pane_t1

0x2672,	// (0x0001152d) compass_pane_t2

0x0005,

0xf3d4,	// (0x0001e28f) compass_pane_t

0x26b9,	// (0x00011574) text_secondary_cp61

0xa86a,	// (0x00019725) navi_pane_cams_g5

0xa8e6,	// (0x000197a1) navi_pane_im_t1

0xa8f4,	// (0x000197af) navi_pane_mp_g1_ParamLimits

0xa8f4,	// (0x000197af) navi_pane_mp_g1

0xa908,	// (0x000197c3) navi_pane_mp_g2_ParamLimits

0xa908,	// (0x000197c3) navi_pane_mp_g2

0xa914,	// (0x000197cf) navi_pane_mp_g3_ParamLimits

0xa914,	// (0x000197cf) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0001e2a3) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0001e2a3) navi_pane_mp_g

0xa920,	// (0x000197db) navi_pane_mp_t1

0xa92e,	// (0x000197e9) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0001e2aa) navi_pane_mp_t

0xa999,	// (0x00019854) navi_pane_vt_g1

0xa920,	// (0x000197db) navi_pane_vt_t1

0xa9a1,	// (0x0001985c) navi_slider_pane

0x9ecf,	// (0x00018d8a) zooming_pane

0xa9b1,	// (0x0001986c) navi_slider_pane_g1

0xa9ba,	// (0x00019875) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0001e2b1) navi_slider_pane_g

0xa9e7,	// (0x000198a2) aid_levels_zoom

0xa9ef,	// (0x000198aa) zooming_pane_g1

0xa9f7,	// (0x000198b2) zooming_pane_g2

0xa9f7,	// (0x000198b2) zooming_pane_g3

0x0002,

0xf405,	// (0x0001e2c0) zooming_pane_g

0xa9ff,	// (0x000198ba) level_10_zoom

0xaa08,	// (0x000198c3) level_11_zoom

0xaa11,	// (0x000198cc) level_1_zoom

0xaa1a,	// (0x000198d5) level_2_zoom

0xaa23,	// (0x000198de) level_3_zoom

0xaa2c,	// (0x000198e7) level_4_zoom

0xaa35,	// (0x000198f0) level_5_zoom

0xaa3e,	// (0x000198f9) level_6_zoom

0xaa47,	// (0x00019902) level_7_zoom

0xaa50,	// (0x0001990b) level_8_zoom

0xaa59,	// (0x00019914) level_9_zoom

0xaa6a,	// (0x00019925) popup_phob_thumbnail_window_g1

0xaa72,	// (0x0001992d) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0001e2c7) popup_phob_thumbnail_window_g

0xbdeb,	// (0x0001aca6) level_1_location

0xbdf3,	// (0x0001acae) level_2_location

0xbdfb,	// (0x0001acb6) level_3_location

0xbe03,	// (0x0001acbe) level_4_location

0x9ecf,	// (0x00018d8a) level_5_location

0x270a,	// (0x000115c5) mce_icon_pane_g1

0x2714,	// (0x000115cf) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0001e2cc) mce_icon_pane_g

0x271c,	// (0x000115d7) main_mup_pane_g1_ParamLimits

0x271c,	// (0x000115d7) main_mup_pane_g1

0x2732,	// (0x000115ed) main_mup_pane_g2_ParamLimits

0x2732,	// (0x000115ed) main_mup_pane_g2

0x2744,	// (0x000115ff) main_mup_pane_g3_ParamLimits

0x2744,	// (0x000115ff) main_mup_pane_g3

0x2756,	// (0x00011611) main_mup_pane_g4_ParamLimits

0x2756,	// (0x00011611) main_mup_pane_g4

0x276e,	// (0x00011629) main_mup_pane_g5_ParamLimits

0x276e,	// (0x00011629) main_mup_pane_g5

0x278a,	// (0x00011645) main_mup_pane_g6_ParamLimits

0x278a,	// (0x00011645) main_mup_pane_g6

0x27a2,	// (0x0001165d) main_mup_pane_g7_ParamLimits

0x27a2,	// (0x0001165d) main_mup_pane_g7

0x27ba,	// (0x00011675) main_mup_pane_g8_ParamLimits

0x27ba,	// (0x00011675) main_mup_pane_g8

0x27d2,	// (0x0001168d) main_mup_pane_g9_ParamLimits

0x27d2,	// (0x0001168d) main_mup_pane_g9

0x27ec,	// (0x000116a7) main_mup_pane_g10_ParamLimits

0x27ec,	// (0x000116a7) main_mup_pane_g10

0x2806,	// (0x000116c1) main_mup_pane_g11_ParamLimits

0x2806,	// (0x000116c1) main_mup_pane_g11

0x281a,	// (0x000116d5) main_mup_pane_g12_ParamLimits

0x281a,	// (0x000116d5) main_mup_pane_g12

0x2830,	// (0x000116eb) main_mup_pane_g13_ParamLimits

0x2830,	// (0x000116eb) main_mup_pane_g13

0x000c,

0xf416,	// (0x0001e2d1) main_mup_pane_g_ParamLimits

0xf416,	// (0x0001e2d1) main_mup_pane_g

0x2844,	// (0x000116ff) main_mup_pane_t1_ParamLimits

0x2844,	// (0x000116ff) main_mup_pane_t1

0x285e,	// (0x00011719) main_mup_pane_t2_ParamLimits

0x285e,	// (0x00011719) main_mup_pane_t2

0x2876,	// (0x00011731) main_mup_pane_t3_ParamLimits

0x2876,	// (0x00011731) main_mup_pane_t3

0x288e,	// (0x00011749) main_mup_pane_t4_ParamLimits

0x288e,	// (0x00011749) main_mup_pane_t4

0x28ac,	// (0x00011767) main_mup_pane_t5_ParamLimits

0x28ac,	// (0x00011767) main_mup_pane_t5

0x28c1,	// (0x0001177c) main_mup_pane_t6_ParamLimits

0x28c1,	// (0x0001177c) main_mup_pane_t6

0x0005,

0xf431,	// (0x0001e2ec) main_mup_pane_t_ParamLimits

0xf431,	// (0x0001e2ec) main_mup_pane_t

0x28d3,	// (0x0001178e) mup_progress_pane_ParamLimits

0x28d3,	// (0x0001178e) mup_progress_pane

0x28df,	// (0x0001179a) mup_visualizer_pane_ParamLimits

0x28df,	// (0x0001179a) mup_visualizer_pane

0x2913,	// (0x000117ce) mup_volume_pane_ParamLimits

0x2913,	// (0x000117ce) mup_volume_pane

0xaa7a,	// (0x00019935) mup_visualizer_pane_g1_ParamLimits

0xaa7a,	// (0x00019935) mup_visualizer_pane_g1

0xaa7a,	// (0x00019935) mup_visualizer_pane_g2_ParamLimits

0xaa7a,	// (0x00019935) mup_visualizer_pane_g2

0xa7ec,	// (0x000196a7) mup_visualizer_pane_g3_ParamLimits

0xa7ec,	// (0x000196a7) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0001e2f9) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0001e2f9) mup_visualizer_pane_g

0x9ce2,	// (0x00018b9d) mup_volume_pane_g1

0xaa90,	// (0x0001994b) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0001e300) mup_volume_pane_g

0x9ce2,	// (0x00018b9d) mup_progress_pane_g1

0xaa99,	// (0x00019954) mup_progress_pane_g2

0xaaa2,	// (0x0001995d) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0001e305) mup_progress_pane_g

0x991b,	// (0x000187d6) bg_popup_window_pane_cp05

0xaaab,	// (0x00019966) heading_pane_cp02_ParamLimits

0xaaab,	// (0x00019966) heading_pane_cp02

0xaac5,	// (0x00019980) list_popup_blid_pane

0xaacd,	// (0x00019988) list_blid_sat_info_pane_ParamLimits

0xaacd,	// (0x00019988) list_blid_sat_info_pane

0xaae0,	// (0x0001999b) list_blid_sat_info_pane_g1

0xaae8,	// (0x000199a3) list_blid_sat_info_pane_t1

0x2a29,	// (0x000118e4) mup_equalizer_pane_ParamLimits

0x2a29,	// (0x000118e4) mup_equalizer_pane

0x2a42,	// (0x000118fd) mup_equalizer_pane_cp1_ParamLimits

0x2a42,	// (0x000118fd) mup_equalizer_pane_cp1

0x2a5f,	// (0x0001191a) mup_equalizer_pane_cp2_ParamLimits

0x2a5f,	// (0x0001191a) mup_equalizer_pane_cp2

0x2a7c,	// (0x00011937) mup_equalizer_pane_cp3_ParamLimits

0x2a7c,	// (0x00011937) mup_equalizer_pane_cp3

0x2a9d,	// (0x00011958) mup_equalizer_pane_cp4_ParamLimits

0x2a9d,	// (0x00011958) mup_equalizer_pane_cp4

0x2abe,	// (0x00011979) mup_equalizer_pane_cp5

0x2ad2,	// (0x0001198d) mup_equalizer_pane_cp6

0x2ae6,	// (0x000119a1) mup_equalizer_pane_cp7

0xbcc9,	// (0x0001ab84) bg_popup_call_poc_act_pane_g9

0xbcd1,	// (0x0001ab8c) bg_popup_call_poc_act_pane_g10

0xbcd9,	// (0x0001ab94) bg_popup_call_poc_act_pane_g11

0x000a,

0x9b76,	// (0x00018a31) mup_scale_pane

0x9ce2,	// (0x00018b9d) mup_scale_pane_g1

0xaaf6,	// (0x000199b1) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0001e321) mup_scale_pane_g

0xab1a,	// (0x000199d5) msg_data_pane

0xab22,	// (0x000199dd) scroll_pane_cp017

0x2b0c,	// (0x000119c7) bg_list_pane_cp04_ParamLimits

0x2b0c,	// (0x000119c7) bg_list_pane_cp04

0xab2a,	// (0x000199e5) msg_data_pane_g1

0x2b2c,	// (0x000119e7) msg_data_pane_g2

0x2b34,	// (0x000119ef) msg_data_pane_g3

0x2b3c,	// (0x000119f7) msg_data_pane_g4

0x2b44,	// (0x000119ff) msg_data_pane_g5

0x2b4c,	// (0x00011a07) msg_data_pane_g6

0x2b54,	// (0x00011a0f) msg_data_pane_g7

0x0006,

0xf475,	// (0x0001e330) msg_data_pane_g

0x2b5c,	// (0x00011a17) msg_text_pane_ParamLimits

0x2b5c,	// (0x00011a17) msg_text_pane

0x2b8a,	// (0x00011a45) qrid_highlight_pane_cp011_ParamLimits

0x2b8a,	// (0x00011a45) qrid_highlight_pane_cp011

0x991b,	// (0x000187d6) msg_body_pane

0x991b,	// (0x000187d6) msg_header_pane

0xab3b,	// (0x000199f6) input_focus_pane_cp07

0x2bae,	// (0x00011a69) msg_header_pane_t1_ParamLimits

0x2bae,	// (0x00011a69) msg_header_pane_t1

0x2bc0,	// (0x00011a7b) msg_header_pane_t2_ParamLimits

0x2bc0,	// (0x00011a7b) msg_header_pane_t2

0x0001,

0xf489,	// (0x0001e344) msg_header_pane_t_ParamLimits

0xf489,	// (0x0001e344) msg_header_pane_t

0xab50,	// (0x00019a0b) msg_body_pane_g1

0x2bd2,	// (0x00011a8d) msg_body_pane_t1_ParamLimits

0x2bd2,	// (0x00011a8d) msg_body_pane_t1

0x2c03,	// (0x00011abe) msg_body_pane_t2_ParamLimits

0x2c03,	// (0x00011abe) msg_body_pane_t2

0x2c15,	// (0x00011ad0) msg_body_pane_t3_ParamLimits

0x2c15,	// (0x00011ad0) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0001e349) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0001e349) msg_body_pane_t

0x2c61,	// (0x00011b1c) main_viewer_pane_g1_ParamLimits

0x2c61,	// (0x00011b1c) main_viewer_pane_g1

0x2c6f,	// (0x00011b2a) main_viewer_pane_g2_ParamLimits

0x2c6f,	// (0x00011b2a) main_viewer_pane_g2

0x2c7d,	// (0x00011b38) main_viewer_pane_g3_ParamLimits

0x2c7d,	// (0x00011b38) main_viewer_pane_g3

0x2c8c,	// (0x00011b47) main_viewer_pane_g4_ParamLimits

0x2c8c,	// (0x00011b47) main_viewer_pane_g4

0xab70,	// (0x00019a2b) main_viewer_pane_g5_ParamLimits

0xab70,	// (0x00019a2b) main_viewer_pane_g5

0xab70,	// (0x00019a2b) main_viewer_pane_g7_ParamLimits

0xab70,	// (0x00019a2b) main_viewer_pane_g7

0xab82,	// (0x00019a3d) main_viewer_pane_g8_ParamLimits

0xab82,	// (0x00019a3d) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0001e359) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0001e359) main_viewer_pane_g

0xab9a,	// (0x00019a55) viewer_content_pane_ParamLimits

0xab9a,	// (0x00019a55) viewer_content_pane

0x2cc8,	// (0x00011b83) main_postcard_pane_g1_ParamLimits

0x2cc8,	// (0x00011b83) main_postcard_pane_g1

0x2cde,	// (0x00011b99) main_postcard_pane_g2_ParamLimits

0x2cde,	// (0x00011b99) main_postcard_pane_g2

0x2cf4,	// (0x00011baf) main_postcard_pane_g3_ParamLimits

0x2cf4,	// (0x00011baf) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0001e36a) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0001e36a) main_postcard_pane_g

0x2d0b,	// (0x00011bc6) main_postcard_pane_g4

0xbf3f,	// (0x0001adfa) smil_status_volume_pane_g2

0x2d4e,	// (0x00011c09) postcard_pane_ParamLimits

0x2d4e,	// (0x00011c09) postcard_pane

0xaba8,	// (0x00019a63) postcard_pane_g1_ParamLimits

0xaba8,	// (0x00019a63) postcard_pane_g1

0x2d90,	// (0x00011c4b) postcard_pane_g2_ParamLimits

0x2d90,	// (0x00011c4b) postcard_pane_g2

0x2d9c,	// (0x00011c57) postcard_pane_g3_ParamLimits

0x2d9c,	// (0x00011c57) postcard_pane_g3

0xabb6,	// (0x00019a71) postcard_pane_g4_ParamLimits

0xabb6,	// (0x00019a71) postcard_pane_g4

0x2da8,	// (0x00011c63) postcard_pane_g5_ParamLimits

0x2da8,	// (0x00011c63) postcard_pane_g5

0x2dbd,	// (0x00011c78) postcard_pane_g6_ParamLimits

0x2dbd,	// (0x00011c78) postcard_pane_g6

0xaba8,	// (0x00019a63) postcard_pane_g7_ParamLimits

0xaba8,	// (0x00019a63) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0001e377) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0001e377) postcard_pane_g

0x2dd1,	// (0x00011c8c) main_mp2_pane_g1_ParamLimits

0x2dd1,	// (0x00011c8c) main_mp2_pane_g1

0x2ddd,	// (0x00011c98) main_mp2_pane_g2_ParamLimits

0x2ddd,	// (0x00011c98) main_mp2_pane_g2

0x2de9,	// (0x00011ca4) main_mp2_pane_g3_ParamLimits

0x2de9,	// (0x00011ca4) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0001e386) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0001e386) main_mp2_pane_g

0x2df5,	// (0x00011cb0) main_mp2_pane_t1_ParamLimits

0x2df5,	// (0x00011cb0) main_mp2_pane_t1

0x2e0a,	// (0x00011cc5) main_mp2_pane_t2_ParamLimits

0x2e0a,	// (0x00011cc5) main_mp2_pane_t2

0x2e1c,	// (0x00011cd7) main_mp2_pane_t3_ParamLimits

0x2e1c,	// (0x00011cd7) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0001e38d) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0001e38d) main_mp2_pane_t

0xabc4,	// (0x00019a7f) pec_content_pane_ParamLimits

0xabc4,	// (0x00019a7f) pec_content_pane

0xa082,	// (0x00018f3d) scroll_pane_cp015

0xabd6,	// (0x00019a91) pec_attribute_pane_ParamLimits

0xabd6,	// (0x00019a91) pec_attribute_pane

0x2e2e,	// (0x00011ce9) pec_content_pane_g1_ParamLimits

0x2e2e,	// (0x00011ce9) pec_content_pane_g1

0xabe6,	// (0x00019aa1) pec_content_pane_t1_ParamLimits

0xabe6,	// (0x00019aa1) pec_content_pane_t1

0xabf8,	// (0x00019ab3) pec_content_pane_t2_ParamLimits

0xabf8,	// (0x00019ab3) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0001e394) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0001e394) pec_content_pane_t

0x2e3a,	// (0x00011cf5) list_single_graphic_pane_cp01_ParamLimits

0x2e3a,	// (0x00011cf5) list_single_graphic_pane_cp01

0x9b76,	// (0x00018a31) bg_popup_sub_pane_cp04

0xac0a,	// (0x00019ac5) popup_mup_playback_window_g1

0xac16,	// (0x00019ad1) popup_mup_playback_window_t1

0xac2b,	// (0x00019ae6) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0001e399) popup_mup_playback_window_t

0xac62,	// (0x00019b1d) main_image_pane_g1_ParamLimits

0xac62,	// (0x00019b1d) main_image_pane_g1

0xaca5,	// (0x00019b60) scroll_pane_cp018_ParamLimits

0xaca5,	// (0x00019b60) scroll_pane_cp018

0xacbd,	// (0x00019b78) scroll_pane_cp016_ParamLimits

0xacbd,	// (0x00019b78) scroll_pane_cp016

0x2f08,	// (0x00011dc3) smil2_image_pane_ParamLimits

0x2f08,	// (0x00011dc3) smil2_image_pane

0x2f38,	// (0x00011df3) smil2_root_pane_ParamLimits

0x2f38,	// (0x00011df3) smil2_root_pane

0x2f70,	// (0x00011e2b) smil2_text_pane_ParamLimits

0x2f70,	// (0x00011e2b) smil2_text_pane

0x991b,	// (0x000187d6) bg_list_pane_cp06

0xacf9,	// (0x00019bb4) grid_radio_pane

0x991b,	// (0x000187d6) bg_popup_window_pane_cp06

0xad01,	// (0x00019bbc) main_fmradio_pane_t1

0xa668,	// (0x00019523) heading_pane_cp04

0xad0f,	// (0x00019bca) main_fmradio_pane_t2

0xbd21,	// (0x0001abdc) popup_cale_lunar_info_window_g1

0xad1d,	// (0x00019bd8) main_fmradio_pane_t3

0xbd29,	// (0x0001abe4) popup_cale_lunar_info_window_g2

0xad2b,	// (0x00019be6) main_fmradio_pane_t4

0x0001,

0xad39,	// (0x00019bf4) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x0001e487) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0001e3ae) main_fmradio_pane_t

0xad47,	// (0x00019c02) wait_bar_pane_cp03

0xad4f,	// (0x00019c0a) cell_fmradio_pane_ParamLimits

0xad4f,	// (0x00019c0a) cell_fmradio_pane

0xaba8,	// (0x00019a63) cell_fmradio_pane_g1_ParamLimits

0xaba8,	// (0x00019a63) cell_fmradio_pane_g1

0x991b,	// (0x000187d6) grid_highlight_pane_cp011

0xad62,	// (0x00019c1d) poc_content_pane_ParamLimits

0xad62,	// (0x00019c1d) poc_content_pane

0xad74,	// (0x00019c2f) scroll_pane_cp019

0x2ff0,	// (0x00011eab) popup_call_poc_act_window_ParamLimits

0x2ff0,	// (0x00011eab) popup_call_poc_act_window

0x3014,	// (0x00011ecf) popup_call_poc_inact_window_ParamLimits

0x3014,	// (0x00011ecf) popup_call_poc_inact_window

0xf590,	// (0x0001e44b) bg_popup_call_poc_act_pane_g

0xbce1,	// (0x0001ab9c) bg_popup_call_poc_inact_pane_g1

0xbce9,	// (0x0001aba4) bg_popup_call_poc_inact_pane_g2

0xad7c,	// (0x00019c37) popup_call_poc_act_window_g2

0xbcf1,	// (0x0001abac) bg_popup_call_poc_inact_pane_g3

0xbc71,	// (0x0001ab2c) bg_popup_call_poc_inact_pane_g4

0xbcf9,	// (0x0001abb4) bg_popup_call_poc_inact_pane_g5

0xad84,	// (0x00019c3f) popup_call_poc_act_window_t1_ParamLimits

0xad84,	// (0x00019c3f) popup_call_poc_act_window_t1

0xadac,	// (0x00019c67) popup_call_poc_act_window_t2_ParamLimits

0xadac,	// (0x00019c67) popup_call_poc_act_window_t2

0xadd4,	// (0x00019c8f) popup_call_poc_act_window_t3_ParamLimits

0xadd4,	// (0x00019c8f) popup_call_poc_act_window_t3

0xadfc,	// (0x00019cb7) popup_call_poc_act_window_t4_ParamLimits

0xadfc,	// (0x00019cb7) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0001e3b9) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0001e3b9) popup_call_poc_act_window_t

0xbd01,	// (0x0001abbc) bg_popup_call_poc_inact_pane_g6

0xbd09,	// (0x0001abc4) bg_popup_call_poc_inact_pane_g7

0xbd11,	// (0x0001abcc) bg_popup_call_poc_inact_pane_g8

0xae0e,	// (0x00019cc9) popup_call_poc_inact_window_g2

0xbd19,	// (0x0001abd4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x0001e462) bg_popup_call_poc_inact_pane_g

0xae16,	// (0x00019cd1) popup_call_poc_inact_window_t1_ParamLimits

0xae16,	// (0x00019cd1) popup_call_poc_inact_window_t1

0xae2b,	// (0x00019ce6) popup_call_poc_inact_window_t2_ParamLimits

0xae2b,	// (0x00019ce6) popup_call_poc_inact_window_t2

0xae40,	// (0x00019cfb) popup_call_poc_inact_window_t3_ParamLimits

0xae40,	// (0x00019cfb) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0001e3c2) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0001e3c2) popup_call_poc_inact_window_t

0xbeb2,	// (0x0001ad6d) context_pane_ParamLimits

0x383c,	// (0x000126f7) signal_pane_ParamLimits

0x9ecf,	// (0x00018d8a) main_call2_pane

0xbe8b,	// (0x0001ad46) popup_phob_thumbnail2_window_ParamLimits

0xbe8b,	// (0x0001ad46) popup_phob_thumbnail2_window

0xab58,	// (0x00019a13) aid_hotspot_pointer_arrow_pane

0xab60,	// (0x00019a1b) aid_hotspot_pointer_hand_pane

0x335e,	// (0x00012219) phob_pre_status_pane_g5

0x1077,	// (0x0000ff32) cams_zoom_pane_ParamLimits

0x1086,	// (0x0000ff41) image_vga_pane_ParamLimits

0x10a0,	// (0x0000ff5b) main_camera_pane_g1_ParamLimits

0x10b2,	// (0x0000ff6d) main_camera_pane_g2_ParamLimits

0x10c2,	// (0x0000ff7d) main_camera_pane_g3_ParamLimits

0x10d2,	// (0x0000ff8d) main_camera_pane_g4_ParamLimits

0x10e2,	// (0x0000ff9d) main_camera_pane_g5_ParamLimits

0x10f2,	// (0x0000ffad) main_camera_pane_g6_ParamLimits

0x1102,	// (0x0000ffbd) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0001e0c1) main_camera_pane_g_ParamLimits

0x1112,	// (0x0000ffcd) main_camera_pane_t1_ParamLimits

0x1128,	// (0x0000ffe3) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0001e0d2) main_camera_pane_t_ParamLimits

0x9b76,	// (0x00018a31) bg_popup_preview_window_pane_cp01_ParamLimits

0x9b76,	// (0x00018a31) bg_popup_preview_window_pane_cp01

0xae55,	// (0x00019d10) popup_phob_thumbnail2_window_g1_ParamLimits

0xae55,	// (0x00019d10) popup_phob_thumbnail2_window_g1

0x991b,	// (0x000187d6) call2_cli_visual_pane

0x3048,	// (0x00011f03) popup_call2_audio_conf_window_ParamLimits

0x3048,	// (0x00011f03) popup_call2_audio_conf_window

0x3068,	// (0x00011f23) popup_call2_audio_first_window_ParamLimits

0x3068,	// (0x00011f23) popup_call2_audio_first_window

0x30fe,	// (0x00011fb9) popup_call2_audio_in_window_ParamLimits

0x30fe,	// (0x00011fb9) popup_call2_audio_in_window

0x3146,	// (0x00012001) popup_call2_audio_out_window_ParamLimits

0x3146,	// (0x00012001) popup_call2_audio_out_window

0x31b0,	// (0x0001206b) popup_call2_audio_second_window_ParamLimits

0x31b0,	// (0x0001206b) popup_call2_audio_second_window

0x3216,	// (0x000120d1) popup_call2_audio_wait_window_ParamLimits

0x3216,	// (0x000120d1) popup_call2_audio_wait_window

0x991b,	// (0x000187d6) bg_popup_call2_act_pane_cp03

0x9b58,	// (0x00018a13) list_conf_pane_cp

0xae61,	// (0x00019d1c) popup_call2_audio_conf_window_t1

0xae6f,	// (0x00019d2a) list_single_graphic_popup_conf2_pane_ParamLimits

0xae6f,	// (0x00019d2a) list_single_graphic_popup_conf2_pane

0xa6d8,	// (0x00019593) list_highlight_pane_cp04

0xae82,	// (0x00019d3d) list_single_graphic_popup_conf2_pane_g1

0xa6e9,	// (0x000195a4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0001e3c9) list_single_graphic_popup_conf2_pane_g

0xae8c,	// (0x00019d47) list_single_graphic_popup_conf2_pane_t1

0xae9a,	// (0x00019d55) bg_popup_call2_act_pane_cp01_ParamLimits

0xae9a,	// (0x00019d55) bg_popup_call2_act_pane_cp01

0xaf24,	// (0x00019ddf) call_type_pane_cp05_ParamLimits

0xaf24,	// (0x00019ddf) call_type_pane_cp05

0xaf78,	// (0x00019e33) popup_call2_audio_second_window_g1_ParamLimits

0xaf78,	// (0x00019e33) popup_call2_audio_second_window_g1

0xafcc,	// (0x00019e87) popup_call2_audio_second_window_g2_ParamLimits

0xafcc,	// (0x00019e87) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0001e3ce) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0001e3ce) popup_call2_audio_second_window_g

0xb031,	// (0x00019eec) popup_call2_audio_second_window_t1_ParamLimits

0xb031,	// (0x00019eec) popup_call2_audio_second_window_t1

0xb0ec,	// (0x00019fa7) popup_call2_audio_second_window_t2_ParamLimits

0xb0ec,	// (0x00019fa7) popup_call2_audio_second_window_t2

0xb13f,	// (0x00019ffa) popup_call2_audio_second_window_t3_ParamLimits

0xb13f,	// (0x00019ffa) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0001e3d5) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0001e3d5) popup_call2_audio_second_window_t

0x991b,	// (0x000187d6) bg_popup_call2_in_pane_cp02

0x9925,	// (0x000187e0) call_type_pane_cp04

0x992d,	// (0x000187e8) popup_call2_audio_wait_window_g1

0x9935,	// (0x000187f0) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001dfb0) popup_call2_audio_wait_window_g

0x993d,	// (0x000187f8) popup_call2_audio_wait_window_t3

0xb232,	// (0x0001a0ed) bg_popup_call2_act_pane_ParamLimits

0xb232,	// (0x0001a0ed) bg_popup_call2_act_pane

0xb2f2,	// (0x0001a1ad) call_type_pane_cp03_ParamLimits

0xb2f2,	// (0x0001a1ad) call_type_pane_cp03

0xb356,	// (0x0001a211) popup_call2_audio_first_window_g1_ParamLimits

0xb356,	// (0x0001a211) popup_call2_audio_first_window_g1

0xb3c6,	// (0x0001a281) popup_call2_audio_first_window_g2_ParamLimits

0xb3c6,	// (0x0001a281) popup_call2_audio_first_window_g2

0xaa7a,	// (0x00019935) popup_call2_audio_first_window_g3_ParamLimits

0xaa7a,	// (0x00019935) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0001e3de) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0001e3de) popup_call2_audio_first_window_g

0xb4a4,	// (0x0001a35f) popup_call2_audio_first_window_t1_ParamLimits

0xb4a4,	// (0x0001a35f) popup_call2_audio_first_window_t1

0xb5a7,	// (0x0001a462) popup_call2_audio_first_window_t4_ParamLimits

0xb5a7,	// (0x0001a462) popup_call2_audio_first_window_t4

0xb68a,	// (0x0001a545) popup_call2_audio_first_window_t5_ParamLimits

0xb68a,	// (0x0001a545) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0001e3e9) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0001e3e9) popup_call2_audio_first_window_t

0x9b6e,	// (0x00018a29) bg_popup_call2_act_pane_g1

0xbd31,	// (0x0001abec) popup_cale_lunar_info_window_t1

0xbd3f,	// (0x0001abfa) popup_cale_lunar_info_window_t2

0xbd4d,	// (0x0001ac08) popup_cale_lunar_info_window_t3

0x991b,	// (0x000187d6) bg_popup_call2_bubble_pane

0xb78b,	// (0x0001a646) bg_popup_call2_in_pane_cp01_ParamLimits

0xb78b,	// (0x0001a646) bg_popup_call2_in_pane_cp01

0x95f7,	// (0x000184b2) call_type_pane_cp02

0xb7d3,	// (0x0001a68e) popup_call2_audio_out_window_g1_ParamLimits

0xb7d3,	// (0x0001a68e) popup_call2_audio_out_window_g1

0xb7ff,	// (0x0001a6ba) popup_call2_audio_out_window_g2_ParamLimits

0xb7ff,	// (0x0001a6ba) popup_call2_audio_out_window_g2

0xb827,	// (0x0001a6e2) popup_call2_audio_out_window_g3_ParamLimits

0xb827,	// (0x0001a6e2) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0001e3f2) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0001e3f2) popup_call2_audio_out_window_g

0xb862,	// (0x0001a71d) popup_call2_audio_out_window_t1_ParamLimits

0xb862,	// (0x0001a71d) popup_call2_audio_out_window_t1

0xb8c1,	// (0x0001a77c) popup_call2_audio_out_window_t2_ParamLimits

0xb8c1,	// (0x0001a77c) popup_call2_audio_out_window_t2

0xb915,	// (0x0001a7d0) popup_call2_audio_out_window_t3_ParamLimits

0xb915,	// (0x0001a7d0) popup_call2_audio_out_window_t3

0xb92b,	// (0x0001a7e6) popup_call2_audio_out_window_t4_ParamLimits

0xb92b,	// (0x0001a7e6) popup_call2_audio_out_window_t4

0xb941,	// (0x0001a7fc) popup_call2_audio_out_window_t5_ParamLimits

0xb941,	// (0x0001a7fc) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0001e3fb) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0001e3fb) popup_call2_audio_out_window_t

0xb9a5,	// (0x0001a860) bg_popup_call2_in_pane_ParamLimits

0xb9a5,	// (0x0001a860) bg_popup_call2_in_pane

0xba01,	// (0x0001a8bc) popup_call2_audio_in_window_g1_ParamLimits

0xba01,	// (0x0001a8bc) popup_call2_audio_in_window_g1

0xba39,	// (0x0001a8f4) popup_call2_audio_in_window_g2_ParamLimits

0xba39,	// (0x0001a8f4) popup_call2_audio_in_window_g2

0xba71,	// (0x0001a92c) popup_call2_audio_in_window_g3_ParamLimits

0xba71,	// (0x0001a92c) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0001e408) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0001e408) popup_call2_audio_in_window_g

0xbac9,	// (0x0001a984) popup_call2_audio_in_window_t1_ParamLimits

0xbac9,	// (0x0001a984) popup_call2_audio_in_window_t1

0xbb49,	// (0x0001aa04) popup_call2_audio_in_window_t2_ParamLimits

0xbb49,	// (0x0001aa04) popup_call2_audio_in_window_t2

0xbbc9,	// (0x0001aa84) popup_call2_audio_in_window_t3_ParamLimits

0xbbc9,	// (0x0001aa84) popup_call2_audio_in_window_t3

0xbbe3,	// (0x0001aa9e) popup_call2_audio_in_window_t4_ParamLimits

0xbbe3,	// (0x0001aa9e) popup_call2_audio_in_window_t4

0xbbf5,	// (0x0001aab0) popup_call2_audio_in_window_t5_ParamLimits

0xbbf5,	// (0x0001aab0) popup_call2_audio_in_window_t5

0xbc07,	// (0x0001aac2) popup_call2_audio_in_window_t6_ParamLimits

0xbc07,	// (0x0001aac2) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0001e411) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0001e411) popup_call2_audio_in_window_t

0x9b6e,	// (0x00018a29) bg_popup_call2_in_pane_g1

0xbd5b,	// (0x0001ac16) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x0001e48c) popup_cale_lunar_info_window_t

0x9b76,	// (0x00018a31) bg_popup_call2_rect_pane_ParamLimits

0x9b76,	// (0x00018a31) bg_popup_call2_rect_pane

0x991b,	// (0x000187d6) call2_cli_visual_graphic_pane

0x991b,	// (0x000187d6) call2_cli_visual_text_pane

0xbf52,	// (0x0001ae0d) smil_status_volume_pane_g3

0x0002,

0x9ce2,	// (0x00018b9d) call2_cli_visual_graphic_pane_g1

0x9ce2,	// (0x00018b9d) call2_cli_visual_graphic_pane_g2

0x9ce2,	// (0x00018b9d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0001e41e) call2_cli_visual_graphic_pane_g

0xbc19,	// (0x0001aad4) bg_popup_call2_rect_pane_g1

0x9d77,	// (0x00018c32) bg_popup_call2_rect_pane_g2

0xbc21,	// (0x0001aadc) bg_popup_call2_rect_pane_g3

0xbc29,	// (0x0001aae4) bg_popup_call2_rect_pane_g4

0xbc31,	// (0x0001aaec) bg_popup_call2_rect_pane_g5

0xbc39,	// (0x0001aaf4) bg_popup_call2_rect_pane_g6

0xbc41,	// (0x0001aafc) bg_popup_call2_rect_pane_g7

0xbc49,	// (0x0001ab04) bg_popup_call2_rect_pane_g8

0xbc51,	// (0x0001ab0c) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0001e425) bg_popup_call2_rect_pane_g

0xbc59,	// (0x0001ab14) bg_popup_call2_bubble_pane_g1

0xbc61,	// (0x0001ab1c) bg_popup_call2_bubble_pane_g2

0xbc69,	// (0x0001ab24) bg_popup_call2_bubble_pane_g3

0xbc71,	// (0x0001ab2c) bg_popup_call2_bubble_pane_g4

0xbc79,	// (0x0001ab34) bg_popup_call2_bubble_pane_g5

0xbc81,	// (0x0001ab3c) bg_popup_call2_bubble_pane_g6

0xbc89,	// (0x0001ab44) bg_popup_call2_bubble_pane_g7

0xbc91,	// (0x0001ab4c) bg_popup_call2_bubble_pane_g8

0xbc99,	// (0x0001ab54) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0001e438) bg_popup_call2_bubble_pane_g

0x0aaf,	// (0x0000f96a) aid_cale_week_size_cell_pane

0x113e,	// (0x0000fff9) aid_cams_cif_uncrop_pane_ParamLimits

0x113e,	// (0x0000fff9) aid_cams_cif_uncrop_pane

0x12f3,	// (0x000101ae) aid_cams_size_cell_ParamLimits

0x12f3,	// (0x000101ae) aid_cams_size_cell

0x1307,	// (0x000101c2) grid_cams_pane_ParamLimits

0x1321,	// (0x000101dc) linegrid_cams_pane_ParamLimits

0x151e,	// (0x000103d9) call_video_pane_t1

0x153c,	// (0x000103f7) call_video_pane_t2

0x0001,

0xf26a,	// (0x0001e125) call_video_pane_t

0x1962,	// (0x0001081d) aid_cale_month_size_cell_pane_ParamLimits

0x1962,	// (0x0001081d) aid_cale_month_size_cell_pane

0xf61a,	// (0x0001e4d5) smil_status_volume_pane_g

0xbf5f,	// (0x0001ae1a) volume_smil_pane_ParamLimits

0x949c,	// (0x00018357) aid_popup2_width_pane

0x0a33,	// (0x0000f8ee) cell_qdial_pane_g4_ParamLimits

0x0a33,	// (0x0000f8ee) cell_qdial_pane_g4

0x2643,	// (0x000114fe) aid_blid_cardinal_pane_ParamLimits

0x264f,	// (0x0001150a) aid_blid_destination_pane_ParamLimits

0x264f,	// (0x0001150a) aid_blid_destination_pane

0x9b76,	// (0x00018a31) bg_popup_call_poc_act_pane_ParamLimits

0x9b76,	// (0x00018a31) bg_popup_call_poc_act_pane

0x9b76,	// (0x00018a31) bg_popup_call_poc_inact_pane_ParamLimits

0x9b76,	// (0x00018a31) bg_popup_call_poc_inact_pane

0xbca1,	// (0x0001ab5c) bg_popup_call_poc_act_pane_g1

0xbca9,	// (0x0001ab64) bg_popup_call_poc_act_pane_g2

0xbcb1,	// (0x0001ab6c) bg_popup_call_poc_act_pane_g3

0xbc71,	// (0x0001ab2c) bg_popup_call_poc_act_pane_g4

0xbc79,	// (0x0001ab34) bg_popup_call_poc_act_pane_g5

0xbcb9,	// (0x0001ab74) bg_popup_call_poc_act_pane_g6

0xbc89,	// (0x0001ab44) bg_popup_call_poc_act_pane_g7

0xbcc1,	// (0x0001ab7c) bg_popup_call_poc_act_pane_g8

0x991b,	// (0x000187d6) main_usb_pane

0xbe66,	// (0x0001ad21) popup_cale_lunar_info_window

0x1808,	// (0x000106c3) im_reading_pane_t1_ParamLimits

0x9fda,	// (0x00018e95) list_im_pane_ParamLimits

0x9feb,	// (0x00018ea6) scroll_pane_cp07_ParamLimits

0x991b,	// (0x000187d6) grid_highlight_pane_cp012

0x9b76,	// (0x00018a31) mup_scale_pane_ParamLimits

0xaba8,	// (0x00019a63) main_usb_pane_g1_ParamLimits

0xaba8,	// (0x00019a63) main_usb_pane_g1

0x3273,	// (0x0001212e) main_usb_pane_g2_ParamLimits

0x3273,	// (0x0001212e) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x0001e475) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x0001e475) main_usb_pane_g

0x3289,	// (0x00012144) main_usb_pane_t1_ParamLimits

0x3289,	// (0x00012144) main_usb_pane_t1

0x329b,	// (0x00012156) main_usb_pane_t2_ParamLimits

0x329b,	// (0x00012156) main_usb_pane_t2

0x32ad,	// (0x00012168) main_usb_pane_t3_ParamLimits

0x32ad,	// (0x00012168) main_usb_pane_t3

0x32bf,	// (0x0001217a) main_usb_pane_t4_ParamLimits

0x32bf,	// (0x0001217a) main_usb_pane_t4

0x32d1,	// (0x0001218c) main_usb_pane_t5_ParamLimits

0x32d1,	// (0x0001218c) main_usb_pane_t5

0x32e3,	// (0x0001219e) main_usb_pane_t6_ParamLimits

0x32e3,	// (0x0001219e) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x0001e47a) main_usb_pane_t_ParamLimits

0x25f2,	// (0x000114ad) aid_text_placing

0x25fb,	// (0x000114b6) main_location2_pane_t1_ParamLimits

0x260d,	// (0x000114c8) main_location2_pane_t2_ParamLimits

0x261f,	// (0x000114da) main_location2_pane_t3_ParamLimits

0x2631,	// (0x000114ec) main_location2_pane_t4_ParamLimits

0x2631,	// (0x000114ec) main_location2_pane_t4

0xf3cb,	// (0x0001e286) main_location2_pane_t_ParamLimits

0x9bb2,	// (0x00018a6d) find_pinb_pane_g2_ParamLimits

0x9bb2,	// (0x00018a6d) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0001dfd6) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0001dfd6) find_pinb_pane_g

0x9bbe,	// (0x00018a79) find_pinb_pane_t1_ParamLimits

0x9bd0,	// (0x00018a8b) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0001dfdb) find_pinb_pane_t_ParamLimits

0x991b,	// (0x000187d6) main_call3_pane

0x1e49,	// (0x00010d04) cale_month_day_heading_pane_t1_ParamLimits

0x1e8b,	// (0x00010d46) cale_month_day_heading_pane_t2_ParamLimits

0x1ec0,	// (0x00010d7b) cale_month_day_heading_pane_t3_ParamLimits

0x1ef5,	// (0x00010db0) cale_month_day_heading_pane_t4_ParamLimits

0x1f32,	// (0x00010ded) cale_month_day_heading_pane_t5_ParamLimits

0x1f77,	// (0x00010e32) cale_month_day_heading_pane_t6_ParamLimits

0x1fbc,	// (0x00010e77) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0001e15d) cale_month_day_heading_pane_t_ParamLimits

0xa241,	// (0x000190fc) smil_status_volume_pane

0x2d6c,	// (0x00011c27) postcard_address_pane_ParamLimits

0x2d6c,	// (0x00011c27) postcard_address_pane

0x2d7e,	// (0x00011c39) postcard_message_pane_ParamLimits

0x2d7e,	// (0x00011c39) postcard_message_pane

0x3250,	// (0x0001210b) call2_cli_visual_pane_t1_ParamLimits

0x3250,	// (0x0001210b) call2_cli_visual_pane_t1

0x3a6b,	// (0x00012926) postcard_message_pane_t1_ParamLimits

0x3a6b,	// (0x00012926) postcard_message_pane_t1

0x3a54,	// (0x0001290f) postcard_address_pane_t1_ParamLimits

0x3a54,	// (0x0001290f) postcard_address_pane_t1

0x3a40,	// (0x000128fb) popup_call3_audio_in_window_ParamLimits

0x3a40,	// (0x000128fb) popup_call3_audio_in_window

0x38cb,	// (0x00012786) bg_popup_call3_in_pane_ParamLimits

0x38cb,	// (0x00012786) bg_popup_call3_in_pane

0x3941,	// (0x000127fc) popup_call3_audio_in_window_g1_ParamLimits

0x3941,	// (0x000127fc) popup_call3_audio_in_window_g1

0x3961,	// (0x0001281c) popup_call3_audio_in_window_g2_ParamLimits

0x3961,	// (0x0001281c) popup_call3_audio_in_window_g2

0x3981,	// (0x0001283c) popup_call3_audio_in_window_g3_ParamLimits

0x3981,	// (0x0001283c) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x0001e4dc) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x0001e4dc) popup_call3_audio_in_window_g

0x39b2,	// (0x0001286d) popup_call3_audio_in_window_t1_ParamLimits

0x39b2,	// (0x0001286d) popup_call3_audio_in_window_t1

0x39f0,	// (0x000128ab) popup_call3_audio_in_window_t2_ParamLimits

0x39f0,	// (0x000128ab) popup_call3_audio_in_window_t2

0x3a2e,	// (0x000128e9) popup_call3_audio_in_window_t3_ParamLimits

0x3a2e,	// (0x000128e9) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x0001e4e5) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x0001e4e5) popup_call3_audio_in_window_t

0x9ecf,	// (0x00018d8a) bg_popup_call3_rect_pane

0xbc19,	// (0x0001aad4) bg_popup_call3_rect_pane_g1

0x9d77,	// (0x00018c32) bg_popup_call3_rect_pane_g2

0xbc21,	// (0x0001aadc) bg_popup_call3_rect_pane_g3

0xbc29,	// (0x0001aae4) bg_popup_call3_rect_pane_g4

0xbc31,	// (0x0001aaec) bg_popup_call3_rect_pane_g5

0xbc39,	// (0x0001aaf4) bg_popup_call3_rect_pane_g6

0xbc41,	// (0x0001aafc) bg_popup_call3_rect_pane_g7

0x2929,	// (0x000117e4) mup_visualizer_osc_pane

0xaa88,	// (0x00019943) mup_visualizer_spec_pane

0x38fb,	// (0x000127b6) call3_video_qcif_pane_ParamLimits

0x38fb,	// (0x000127b6) call3_video_qcif_pane

0x390e,	// (0x000127c9) call3_video_qcif_uncrop_pane_ParamLimits

0x390e,	// (0x000127c9) call3_video_qcif_uncrop_pane

0x391c,	// (0x000127d7) call3_video_subqcif_pane_ParamLimits

0x391c,	// (0x000127d7) call3_video_subqcif_pane

0x3930,	// (0x000127eb) call3_video_subqcif_uncrop_pane_ParamLimits

0x3930,	// (0x000127eb) call3_video_subqcif_uncrop_pane

0x39a1,	// (0x0001285c) popup_call3_audio_in_window_g4_ParamLimits

0x39a1,	// (0x0001285c) popup_call3_audio_in_window_g4

0x38ba,	// (0x00012775) mup_spec_half_pane

0x38c3,	// (0x0001277e) mup_spec_half_pane_cp

0xbf12,	// (0x0001adcd) mup_osc_middle_pane

0xbf1b,	// (0x0001add6) mup_visualizer_osc_pane_g1

0x389a,	// (0x00012755) mup_spec_bar_pane_ParamLimits

0x389a,	// (0x00012755) mup_spec_bar_pane

0xbeff,	// (0x0001adba) mup_spec_bar_pane_g1

0xbf09,	// (0x0001adc4) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0001e4d0) mup_spec_bar_pane_g

0x0aaf,	// (0x0000f96a) aid_cale_week_size_cell_pane_ParamLimits

0x0ac9,	// (0x0000f984) bg_cale_heading_pane_ParamLimits

0x9e28,	// (0x00018ce3) bg_cale_pane_cp01_ParamLimits

0x0ae1,	// (0x0000f99c) cale_week_corner_pane_ParamLimits

0x0b00,	// (0x0000f9bb) cale_week_day_heading_pane_ParamLimits

0x0b1d,	// (0x0000f9d8) cale_week_scroll_pane_g1_ParamLimits

0x0b30,	// (0x0000f9eb) cale_week_scroll_pane_g2_ParamLimits

0x0b48,	// (0x0000fa03) cale_week_scroll_pane_g3_ParamLimits

0x0b60,	// (0x0000fa1b) cale_week_scroll_pane_g4_ParamLimits

0x0b78,	// (0x0000fa33) cale_week_scroll_pane_g5_ParamLimits

0x0b98,	// (0x0000fa53) cale_week_scroll_pane_g6_ParamLimits

0x0bb8,	// (0x0000fa73) cale_week_scroll_pane_g7_ParamLimits

0x0bd8,	// (0x0000fa93) cale_week_scroll_pane_g8_ParamLimits

0x0bfc,	// (0x0000fab7) cale_week_scroll_pane_g9_ParamLimits

0x0c14,	// (0x0000facf) cale_week_scroll_pane_g10_ParamLimits

0x0c2c,	// (0x0000fae7) cale_week_scroll_pane_g11_ParamLimits

0x0c44,	// (0x0000faff) cale_week_scroll_pane_g12_ParamLimits

0x0c5c,	// (0x0000fb17) cale_week_scroll_pane_g13_ParamLimits

0x0c5c,	// (0x0000fb17) cale_week_scroll_pane_g14_ParamLimits

0x0c5c,	// (0x0000fb17) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0001e067) cale_week_scroll_pane_g_ParamLimits

0x0c98,	// (0x0000fb53) cale_week_time_pane_ParamLimits

0x0cbc,	// (0x0000fb77) grid_cale_week_pane_ParamLimits

0x9e45,	// (0x00018d00) listscroll_cale_week_pane_t1

0x9e57,	// (0x00018d12) scroll_pane_cp08_ParamLimits

0x19c2,	// (0x0001087d) cale_month_corner_pane_ParamLimits

0xa20b,	// (0x000190c6) cale_month_pane_t1

0x1ddc,	// (0x00010c97) cale_month_week_pane_ParamLimits

0x2423,	// (0x000112de) popup_call_status_window_g1_ParamLimits

0x2437,	// (0x000112f2) popup_call_status_window_g2_ParamLimits

0x244b,	// (0x00011306) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0001e20d) popup_call_status_window_g_ParamLimits

0xa5e9,	// (0x000194a4) aid_call2_pane

0x2ba0,	// (0x00011a5b) msg_header_pane_g1

0x2d6c,	// (0x00011c27) postcard_address2_pane_ParamLimits

0x2d6c,	// (0x00011c27) postcard_address2_pane

0x2d7e,	// (0x00011c39) postcard_message2_pane_ParamLimits

0x2d7e,	// (0x00011c39) postcard_message2_pane

0x384a,	// (0x00012705) message2_row_pane_ParamLimits

0x384a,	// (0x00012705) message2_row_pane

0x3867,	// (0x00012722) address2_row_pane_ParamLimits

0x3867,	// (0x00012722) address2_row_pane

0xbecd,	// (0x0001ad88) postcard_message2_row_pane_g1

0xbed5,	// (0x0001ad90) postcard_message2_row_pane_t1

0xbecd,	// (0x0001ad88) address2_row_pane_g1

0xbed5,	// (0x0001ad90) address2_row_pane_t1

0x0ff6,	// (0x0000feb1) aid_size_cell_vorec

0x991b,	// (0x000187d6) main_rss_pane

0x387a,	// (0x00012735) rss_list_single_pane_ParamLimits

0x387a,	// (0x00012735) rss_list_single_pane

0xbee3,	// (0x0001ad9e) rss_list_single_pane_t1

0xbef1,	// (0x0001adac) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x0001e4cb) rss_list_single_pane_t

0x991b,	// (0x000187d6) main_camera2_pane

0x991b,	// (0x000187d6) main_video2_pane

0x3ae4,	// (0x0001299f) cams_zoom_pane_cp2_ParamLimits

0x3ae4,	// (0x0001299f) cams_zoom_pane_cp2

0x3b04,	// (0x000129bf) image2_vga_pane_ParamLimits

0x3b04,	// (0x000129bf) image2_vga_pane

0x3b55,	// (0x00012a10) main_camera2_pane_g1_ParamLimits

0x3b55,	// (0x00012a10) main_camera2_pane_g1

0x3b75,	// (0x00012a30) main_camera2_pane_g2_ParamLimits

0x3b75,	// (0x00012a30) main_camera2_pane_g2

0x3b95,	// (0x00012a50) main_camera2_pane_g3_ParamLimits

0x3b95,	// (0x00012a50) main_camera2_pane_g3

0x3bb5,	// (0x00012a70) main_camera2_pane_g4_ParamLimits

0x3bb5,	// (0x00012a70) main_camera2_pane_g4

0x3bd5,	// (0x00012a90) main_camera2_pane_g5_ParamLimits

0x3bd5,	// (0x00012a90) main_camera2_pane_g5

0x3bf5,	// (0x00012ab0) main_camera2_pane_g6_ParamLimits

0x3bf5,	// (0x00012ab0) main_camera2_pane_g6

0x3c15,	// (0x00012ad0) main_camera2_pane_g7_ParamLimits

0x3c15,	// (0x00012ad0) main_camera2_pane_g7

0x3c35,	// (0x00012af0) main_camera2_pane_g8_ParamLimits

0x3c35,	// (0x00012af0) main_camera2_pane_g8

0x0008,

0xf631,	// (0x0001e4ec) main_camera2_pane_g_ParamLimits

0xf631,	// (0x0001e4ec) main_camera2_pane_g

0x3c75,	// (0x00012b30) main_camera2_pane_t1_ParamLimits

0x3c75,	// (0x00012b30) main_camera2_pane_t1

0x3caa,	// (0x00012b65) main_camera2_pane_t2_ParamLimits

0x3caa,	// (0x00012b65) main_camera2_pane_t2

0x3cd0,	// (0x00012b8b) main_camera2_pane_t3_ParamLimits

0x3cd0,	// (0x00012b8b) main_camera2_pane_t3

0x3d2e,	// (0x00012be9) main_camera2_pane_t4_ParamLimits

0x3d2e,	// (0x00012be9) main_camera2_pane_t4

0x0006,

0xf644,	// (0x0001e4ff) main_camera2_pane_t_ParamLimits

0xf644,	// (0x0001e4ff) main_camera2_pane_t

0x3dc0,	// (0x00012c7b) cams_zoom_pane_cp4_ParamLimits

0x3dc0,	// (0x00012c7b) cams_zoom_pane_cp4

0x3dd6,	// (0x00012c91) image2_cif_pane_ParamLimits

0x3dd6,	// (0x00012c91) image2_cif_pane

0x3e01,	// (0x00012cbc) image2_subqcif_pane_ParamLimits

0x3e01,	// (0x00012cbc) image2_subqcif_pane

0x3e1b,	// (0x00012cd6) main_video2_pane_g1_ParamLimits

0x3e1b,	// (0x00012cd6) main_video2_pane_g1

0x3e35,	// (0x00012cf0) main_video2_pane_g2_ParamLimits

0x3e35,	// (0x00012cf0) main_video2_pane_g2

0x3e4b,	// (0x00012d06) main_video2_pane_g3_ParamLimits

0x3e4b,	// (0x00012d06) main_video2_pane_g3

0x3e61,	// (0x00012d1c) main_video2_pane_g4_ParamLimits

0x3e61,	// (0x00012d1c) main_video2_pane_g4

0x3e77,	// (0x00012d32) main_video2_pane_g5_ParamLimits

0x3e77,	// (0x00012d32) main_video2_pane_g5

0x3e8d,	// (0x00012d48) main_video2_pane_g6_ParamLimits

0x3e8d,	// (0x00012d48) main_video2_pane_g6

0x0005,

0xf653,	// (0x0001e50e) main_video2_pane_g_ParamLimits

0xf653,	// (0x0001e50e) main_video2_pane_g

0x3ea7,	// (0x00012d62) main_video2_pane_t1_ParamLimits

0x3ea7,	// (0x00012d62) main_video2_pane_t1

0x3ecb,	// (0x00012d86) main_video2_pane_t2_ParamLimits

0x3ecb,	// (0x00012d86) main_video2_pane_t2

0x3f19,	// (0x00012dd4) main_video2_pane_t3_ParamLimits

0x3f19,	// (0x00012dd4) main_video2_pane_t3

0x0002,

0xf660,	// (0x0001e51b) main_video2_pane_t_ParamLimits

0xf660,	// (0x0001e51b) main_video2_pane_t

0x339e,	// (0x00012259) call_muted_g2

0x0001,

0xf602,	// (0x0001e4bd) call_muted_g

0x991b,	// (0x000187d6) main_mup2_pane

0x3f61,	// (0x00012e1c) main_mup2_pane_g1_ParamLimits

0x3f61,	// (0x00012e1c) main_mup2_pane_g1

0x3f6d,	// (0x00012e28) main_mup2_pane_g2_ParamLimits

0x3f6d,	// (0x00012e28) main_mup2_pane_g2

0xc083,	// (0x0001af3e) main_mup_pane_g13_cp1

0xc08b,	// (0x0001af46) mup_volume_pane_cp1

0x3f89,	// (0x00012e44) main_mup2_pane_g4_ParamLimits

0x3f89,	// (0x00012e44) main_mup2_pane_g4

0x3f9b,	// (0x00012e56) main_mup2_pane_g5_ParamLimits

0x3f9b,	// (0x00012e56) main_mup2_pane_g5

0x3fad,	// (0x00012e68) main_mup2_pane_g6_ParamLimits

0x3fad,	// (0x00012e68) main_mup2_pane_g6

0x3fbf,	// (0x00012e7a) main_mup2_pane_g7_ParamLimits

0x3fbf,	// (0x00012e7a) main_mup2_pane_g7

0x0006,

0xf667,	// (0x0001e522) main_mup2_pane_g_ParamLimits

0xf667,	// (0x0001e522) main_mup2_pane_g

0x3fd7,	// (0x00012e92) main_mup2_pane_t1_ParamLimits

0x3fd7,	// (0x00012e92) main_mup2_pane_t1

0x3fed,	// (0x00012ea8) main_mup2_pane_t2_ParamLimits

0x3fed,	// (0x00012ea8) main_mup2_pane_t2

0x4003,	// (0x00012ebe) main_mup2_pane_t3_ParamLimits

0x4003,	// (0x00012ebe) main_mup2_pane_t3

0x4019,	// (0x00012ed4) main_mup2_pane_t4_ParamLimits

0x4019,	// (0x00012ed4) main_mup2_pane_t4

0x4031,	// (0x00012eec) main_mup2_pane_t5_ParamLimits

0x4031,	// (0x00012eec) main_mup2_pane_t5

0x4049,	// (0x00012f04) main_mup2_pane_t6_ParamLimits

0x4049,	// (0x00012f04) main_mup2_pane_t6

0x0005,

0xf676,	// (0x0001e531) main_mup2_pane_t_ParamLimits

0xf676,	// (0x0001e531) main_mup2_pane_t

0x4079,	// (0x00012f34) mup2_visualizer_pane_ParamLimits

0x4079,	// (0x00012f34) mup2_visualizer_pane

0x40a7,	// (0x00012f62) mup_progress_pane_cp_ParamLimits

0x40a7,	// (0x00012f62) mup_progress_pane_cp

0xc065,	// (0x0001af20) mup_volume_pane_cp_ParamLimits

0xc065,	// (0x0001af20) mup_volume_pane_cp

0x40bb,	// (0x00012f76) mup2_visualizer_pane_g1_ParamLimits

0x40bb,	// (0x00012f76) mup2_visualizer_pane_g1

0xbfa4,	// (0x0001ae5f) mup2_visualizer_pane_g2_ParamLimits

0xbfa4,	// (0x0001ae5f) mup2_visualizer_pane_g2

0x40d2,	// (0x00012f8d) mup2_visualizer_pane_g3_ParamLimits

0x40d2,	// (0x00012f8d) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x0001e53e) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x0001e53e) mup2_visualizer_pane_g

0xacf1,	// (0x00019bac) aid_size_cell_fmradio

0x3550,	// (0x0001240b) aid_height_parent_landcape

0xa069,	// (0x00018f24) wml_content_pane_cp

0xa071,	// (0x00018f2c) wml_tabs_pane

0xa07a,	// (0x00018f35) popup_wml_miniature_window

0xa082,	// (0x00018f3d) scroll_pane_cp021

0xa096,	// (0x00018f51) wml_content_pane_comp8

0x991b,	// (0x000187d6) bg_popup_sub_pane_cp05

0xbfc2,	// (0x0001ae7d) popup_wml_miniature_window_g1

0xbfca,	// (0x0001ae85) wml_miniature_view_pane

0x40de,	// (0x00012f99) aid_size_wml_view

0x40e6,	// (0x00012fa1) wml_miniature_view_pane_g1

0x40ef,	// (0x00012faa) wml_miniature_view_pane_g2

0x40f8,	// (0x00012fb3) wml_miniature_view_pane_g3

0x4100,	// (0x00012fbb) wml_miniature_view_pane_g4

0x4108,	// (0x00012fc3) wml_miniature_view_pane_g5

0x4110,	// (0x00012fcb) wml_miniature_view_pane_g6

0x4118,	// (0x00012fd3) wml_miniature_view_pane_g7

0x4120,	// (0x00012fdb) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x0001e545) wml_miniature_view_pane_g

0xbfd2,	// (0x0001ae8d) background_graphic_ParamLimits

0xbfd2,	// (0x0001ae8d) background_graphic

0xbfde,	// (0x0001ae99) wml_tabs_2_pane

0xbfe7,	// (0x0001aea2) wml_tabs_3_pane_ParamLimits

0xbfe7,	// (0x0001aea2) wml_tabs_3_pane

0xbff9,	// (0x0001aeb4) wml_tabs_4_pane_ParamLimits

0xbff9,	// (0x0001aeb4) wml_tabs_4_pane

0xc00f,	// (0x0001aeca) wml_tabs_5_pane_ParamLimits

0xc00f,	// (0x0001aeca) wml_tabs_5_pane

0xc029,	// (0x0001aee4) wml_tabs_pane_g2_ParamLimits

0xc029,	// (0x0001aee4) wml_tabs_pane_g2

0xc03d,	// (0x0001aef8) wml_tabs_pane_g3_ParamLimits

0xc03d,	// (0x0001aef8) wml_tabs_pane_g3

0x4128,	// (0x00012fe3) wml_tabs_2_active_pane_ParamLimits

0x4128,	// (0x00012fe3) wml_tabs_2_active_pane

0x413c,	// (0x00012ff7) wml_tabs_2_passive_pane_ParamLimits

0x413c,	// (0x00012ff7) wml_tabs_2_passive_pane

0x4150,	// (0x0001300b) wml_tabs_3_active_pane_cp_ParamLimits

0x4150,	// (0x0001300b) wml_tabs_3_active_pane_cp

0x4165,	// (0x00013020) wml_tabs_3_passive_pane_ParamLimits

0x4165,	// (0x00013020) wml_tabs_3_passive_pane

0x4178,	// (0x00013033) wml_tabs_3_passive_pane_cp_ParamLimits

0x4178,	// (0x00013033) wml_tabs_3_passive_pane_cp

0x418f,	// (0x0001304a) tabs_4_active_pane

0x4197,	// (0x00013052) tabs_4_passive_pane

0x41a1,	// (0x0001305c) tabs_4_passive_pane_cp

0x41a9,	// (0x00013064) tabs_4_passive_pane_cp2

0x326b,	// (0x00012126) aid_height_text

0x28fb,	// (0x000117b6) mup_volume_cont_pane_ParamLimits

0x28fb,	// (0x000117b6) mup_volume_cont_pane

0x06d3,	// (0x0000f58e) aid_size_cell_pinb

0x06dd,	// (0x0000f598) aid_size_list_pinb

0x4093,	// (0x00012f4e) mup2_volume_cont_pane_ParamLimits

0x4093,	// (0x00012f4e) mup2_volume_cont_pane

0xc051,	// (0x0001af0c) mup2_volume_cont_pane_g1_ParamLimits

0xc051,	// (0x0001af0c) mup2_volume_cont_pane_g1

0x0395,	// (0x0000f250) aid_size_cell_touch_ParamLimits

0x0395,	// (0x0000f250) aid_size_cell_touch

0x05c2,	// (0x0000f47d) touch_pane_ParamLimits

0x05c2,	// (0x0000f47d) touch_pane

0x948a,	// (0x00018345) main_rss2_pane

0xc093,	// (0x0001af4e) listscroll_rss2_pane

0xc09c,	// (0x0001af57) rss2_navigation_pane

0xc0a4,	// (0x0001af5f) list_rss2_pane

0xa77d,	// (0x00019638) scroll_pane_cp22

0xc0ac,	// (0x0001af67) rss2_navigation_pane_g1

0xc0b5,	// (0x0001af70) rss2_navigation_pane_g2

0xc0bd,	// (0x0001af78) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x0001e556) rss2_navigation_pane_g

0xc0c5,	// (0x0001af80) rss2_navigation_pane_t1

0x41b3,	// (0x0001306e) rss2_list_single_pane_ParamLimits

0x41b3,	// (0x0001306e) rss2_list_single_pane

0xc0d3,	// (0x0001af8e) rss2_list_single_pane_t2

0xc0e1,	// (0x0001af9c) rss2_list_single_pane_t3_ParamLimits

0xc0e1,	// (0x0001af9c) rss2_list_single_pane_t3

0xc0fe,	// (0x0001afb9) rss2_list_single_pane_t4

0x222e,	// (0x000110e9) smil_status_pane_g1

0x94fa,	// (0x000183b5) main_image2_pane_ParamLimits

0x94fa,	// (0x000183b5) main_image2_pane

0x3c55,	// (0x00012b10) main_camera2_pane_g9_ParamLimits

0x3c55,	// (0x00012b10) main_camera2_pane_g9

0x3d83,	// (0x00012c3e) main_camera2_pane_t5_ParamLimits

0x3d83,	// (0x00012c3e) main_camera2_pane_t5

0xbf74,	// (0x0001ae2f) main_camera2_pane_t6_ParamLimits

0xbf74,	// (0x0001ae2f) main_camera2_pane_t6

0x41c9,	// (0x00013084) main_image2_pane_g1_ParamLimits

0x41c9,	// (0x00013084) main_image2_pane_g1

0x2fa6,	// (0x00011e61) smil2_video_pane_ParamLimits

0x2fa6,	// (0x00011e61) smil2_video_pane

0x94a8,	// (0x00018363) aid_zoom_text_primary_cp

0x94f0,	// (0x000183ab) popup_preview_fixed_window

0x9fd2,	// (0x00018e8d) im_reading_pane_g1

0x3acc,	// (0x00012987) cams2_bc_adjust_pane_cp_ParamLimits

0x3acc,	// (0x00012987) cams2_bc_adjust_pane_cp

0x3db2,	// (0x00012c6d) cams2_bc_adjust_pane_ParamLimits

0x3db2,	// (0x00012c6d) cams2_bc_adjust_pane

0xc10c,	// (0x0001afc7) cams2_bc_adjust_pane_g1

0xc114,	// (0x0001afcf) cams2_slider_pane

0xc11d,	// (0x0001afd8) cams2_slider_pane_g1

0xc126,	// (0x0001afe1) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x0001e55d) cams2_slider_pane_g

0x07c5,	// (0x0000f680) calc_display_pane_ParamLimits

0x07ea,	// (0x0000f6a5) calc_paper_pane_ParamLimits

0x080d,	// (0x0000f6c8) grid_calc_pane_ParamLimits

0xa64b,	// (0x00019506) popup_clock_digital_window_t1_ParamLimits

0xac8e,	// (0x00019b49) main_image_pane_t1

0x07a7,	// (0x0000f662) aid_size_cell_calc_ParamLimits

0x07a7,	// (0x0000f662) aid_size_cell_calc

0x3596,	// (0x00012451) popup_blid_sat_info2_window_ParamLimits

0x3596,	// (0x00012451) popup_blid_sat_info2_window

0xc148,	// (0x0001b003) aid_size_cell_blid

0xc150,	// (0x0001b00b) bg_popup_window_pane_cp07

0xc173,	// (0x0001b02e) grid_popup_blid_pane

0xc17d,	// (0x0001b038) heading_pane_cp05_ParamLimits

0xc17d,	// (0x0001b038) heading_pane_cp05

0xc247,	// (0x0001b102) cell_popup_blid_pane_ParamLimits

0xc247,	// (0x0001b102) cell_popup_blid_pane

0xc26b,	// (0x0001b126) cell_popup_blid_pane_g1

0xc273,	// (0x0001b12e) cell_popup_blid_pane_t1

0x4063,	// (0x00012f1e) mup2_indicator_pane_ParamLimits

0x4063,	// (0x00012f1e) mup2_indicator_pane

0x9ecf,	// (0x00018d8a) mup2_visualizer_osc_pane

0xbfb0,	// (0x0001ae6b) mup2_visualizer_spec_pane_ParamLimits

0xbfb0,	// (0x0001ae6b) mup2_visualizer_spec_pane

0x41df,	// (0x0001309a) mup2_spec_half_pane

0x41e8,	// (0x000130a3) mup2_spec_half_pane_cp

0x41f0,	// (0x000130ab) mup2_spec_bar_pane_ParamLimits

0x41f0,	// (0x000130ab) mup2_spec_bar_pane

0xbeff,	// (0x0001adba) mup2_spec_bar_pane_g1

0xbf09,	// (0x0001adc4) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0001e4d0) mup2_spec_bar_pane_g

0x4210,	// (0x000130cb) mup2_osc_middle_pane

0xbf1b,	// (0x0001add6) mup2_visualizer_osc_pane_g1

0x9528,	// (0x000183e3) popup_number_entry_window_t1_ParamLimits

0x953b,	// (0x000183f6) popup_number_entry_window_t2_ParamLimits

0x954d,	// (0x00018408) popup_number_entry_window_t3_ParamLimits

0x0614,	// (0x0000f4cf) popup_number_entry_window_t5_ParamLimits

0x0614,	// (0x0000f4cf) popup_number_entry_window_t5

0xf0c6,	// (0x0001df81) popup_number_entry_window_t_ParamLimits

0x955f,	// (0x0001841a) text_title_cp2_ParamLimits

0xab68,	// (0x00019a23) aid_hotspot_pointer_text2_pane

0xab8e,	// (0x00019a49) main_viewer_pane_g9_ParamLimits

0xab8e,	// (0x00019a49) main_viewer_pane_g9

0xa20b,	// (0x000190c6) cale_month_pane_t1_ParamLimits

0xa276,	// (0x00019131) bg_cale_pane_ParamLimits

0xa28e,	// (0x00019149) list_cale_pane_ParamLimits

0xa29f,	// (0x0001915a) listscroll_cale_day_pane_t1

0xa2b1,	// (0x0001916c) scroll_pane_cp09_ParamLimits

0x2931,	// (0x000117ec) main_mup_eq_pane_t1_ParamLimits

0x2931,	// (0x000117ec) main_mup_eq_pane_t1

0x294b,	// (0x00011806) main_mup_eq_pane_t2_ParamLimits

0x294b,	// (0x00011806) main_mup_eq_pane_t2

0x2965,	// (0x00011820) main_mup_eq_pane_t3_ParamLimits

0x2965,	// (0x00011820) main_mup_eq_pane_t3

0x2981,	// (0x0001183c) main_mup_eq_pane_t4_ParamLimits

0x2981,	// (0x0001183c) main_mup_eq_pane_t4

0x299d,	// (0x00011858) main_mup_eq_pane_t5_ParamLimits

0x299d,	// (0x00011858) main_mup_eq_pane_t5

0x29b9,	// (0x00011874) main_mup_eq_pane_t6_ParamLimits

0x29b9,	// (0x00011874) main_mup_eq_pane_t6

0x29cd,	// (0x00011888) main_mup_eq_pane_t7_ParamLimits

0x29cd,	// (0x00011888) main_mup_eq_pane_t7

0x29e1,	// (0x0001189c) main_mup_eq_pane_t8_ParamLimits

0x29e1,	// (0x0001189c) main_mup_eq_pane_t8

0x29f5,	// (0x000118b0) main_mup_eq_pane_t9_ParamLimits

0x29f5,	// (0x000118b0) main_mup_eq_pane_t9

0x2a0f,	// (0x000118ca) main_mup_eq_pane_t10_ParamLimits

0x2a0f,	// (0x000118ca) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0001e30c) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0001e30c) main_mup_eq_pane_t

0x2abe,	// (0x00011979) mup_equalizer_pane_cp5_ParamLimits

0x2ad2,	// (0x0001198d) mup_equalizer_pane_cp6_ParamLimits

0x2ae6,	// (0x000119a1) mup_equalizer_pane_cp7_ParamLimits

0x948a,	// (0x00018345) main_gallery_pane

0xbf24,	// (0x0001addf) smil2_volume_pane

0xbf2c,	// (0x0001ade7) smil_status_volume_pane_g1_ParamLimits

0xbf3f,	// (0x0001adfa) smil_status_volume_pane_g2_ParamLimits

0xbf52,	// (0x0001ae0d) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x0001e4d5) smil_status_volume_pane_g_ParamLimits

0xc150,	// (0x0001b00b) bg_popup_window_pane_cp07_ParamLimits

0xc15e,	// (0x0001b019) blid_firmament_pane

0x4219,	// (0x000130d4) aid_size_cell_gallery_ParamLimits

0x4219,	// (0x000130d4) aid_size_cell_gallery

0x422f,	// (0x000130ea) grid_gallery_pane_ParamLimits

0x422f,	// (0x000130ea) grid_gallery_pane

0x4248,	// (0x00013103) cell_gallery_pane_ParamLimits

0x4248,	// (0x00013103) cell_gallery_pane

0xc281,	// (0x0001b13c) bg_cell_gallery_focus_pane_ParamLimits

0xc281,	// (0x0001b13c) bg_cell_gallery_focus_pane

0xc293,	// (0x0001b14e) cell_gallery_pane_g1_ParamLimits

0xc293,	// (0x0001b14e) cell_gallery_pane_g1

0x4291,	// (0x0001314c) cell_gallery_pane_g2_ParamLimits

0x4291,	// (0x0001314c) cell_gallery_pane_g2

0x429e,	// (0x00013159) cell_gallery_pane_g3_ParamLimits

0x429e,	// (0x00013159) cell_gallery_pane_g3

0xc29f,	// (0x0001b15a) cell_gallery_pane_g4_ParamLimits

0xc29f,	// (0x0001b15a) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x0001e583) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x0001e583) cell_gallery_pane_g

0xc2ab,	// (0x0001b166) bg_cell_gallery_focus_pane_g1

0xc2b3,	// (0x0001b16e) bg_cell_gallery_focus_pane_g2

0xc2bb,	// (0x0001b176) bg_cell_gallery_focus_pane_g3

0xc2c3,	// (0x0001b17e) bg_cell_gallery_focus_pane_g4

0xc2cb,	// (0x0001b186) bg_cell_gallery_focus_pane_g5

0xc2d3,	// (0x0001b18e) bg_cell_gallery_focus_pane_g6

0xc2db,	// (0x0001b196) bg_cell_gallery_focus_pane_g7

0xc2e3,	// (0x0001b19e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x0001e58c) bg_cell_gallery_focus_pane_g

0xc2eb,	// (0x0001b1a6) aid_firma_cardinal

0xc2ff,	// (0x0001b1ba) blid_firmament_pane_t1

0xc316,	// (0x0001b1d1) blid_firmament_pane_t2

0xc32d,	// (0x0001b1e8) blid_firmament_pane_t3

0xc344,	// (0x0001b1ff) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x0001e59d) blid_firmament_pane_t

0xc35b,	// (0x0001b216) blid_sat_info_pane

0xc36b,	// (0x0001b226) blid_sat_info_pane_g1

0xc36b,	// (0x0001b226) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0001e5a6) blid_sat_info_pane_g

0xc375,	// (0x0001b230) blid_sat_info_pane_t1

0xc383,	// (0x0001b23e) smil2_volume_content_pane

0xc38c,	// (0x0001b247) smil2_volume_pane_g1

0x9d0e,	// (0x00018bc9) smil2_volume_content_pane_g1

0xc394,	// (0x0001b24f) smil2_volume_content_pane_g2

0xc39d,	// (0x0001b258) smil2_volume_content_pane_g3

0xc3a6,	// (0x0001b261) smil2_volume_content_pane_g4

0xc3af,	// (0x0001b26a) smil2_volume_content_pane_g5

0xc3b8,	// (0x0001b273) smil2_volume_content_pane_g6

0xc3c1,	// (0x0001b27c) smil2_volume_content_pane_g7

0xc3ca,	// (0x0001b285) smil2_volume_content_pane_g8

0xc3d3,	// (0x0001b28e) smil2_volume_content_pane_g9

0xc3dc,	// (0x0001b297) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x0001e5ab) smil2_volume_content_pane_g

0x0d70,	// (0x0000fc2b) cale_week_day_heading_pane_t1_ParamLimits

0x0d9a,	// (0x0000fc55) cale_week_day_heading_pane_t2_ParamLimits

0x0dc9,	// (0x0000fc84) cale_week_day_heading_pane_t3_ParamLimits

0x0df8,	// (0x0000fcb3) cale_week_day_heading_pane_t4_ParamLimits

0x0e27,	// (0x0000fce2) cale_week_day_heading_pane_t5_ParamLimits

0x0e5e,	// (0x0000fd19) cale_week_day_heading_pane_t6_ParamLimits

0x0e95,	// (0x0000fd50) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0001e088) cale_week_day_heading_pane_t_ParamLimits

0x9e74,	// (0x00018d2f) bg_cale_side_pane_ParamLimits

0x0ebf,	// (0x0000fd7a) cale_week_time_pane_t1_ParamLimits

0x0ed9,	// (0x0000fd94) cale_week_time_pane_t2_ParamLimits

0x0ef3,	// (0x0000fdae) cale_week_time_pane_t3_ParamLimits

0x0f0d,	// (0x0000fdc8) cale_week_time_pane_t4_ParamLimits

0x0f27,	// (0x0000fde2) cale_week_time_pane_t5_ParamLimits

0x0f41,	// (0x0000fdfc) cale_week_time_pane_t6_ParamLimits

0x0f5b,	// (0x0000fe16) cale_week_time_pane_t7_ParamLimits

0x0f75,	// (0x0000fe30) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0001e097) cale_week_time_pane_t_ParamLimits

0x0f95,	// (0x0000fe50) cell_cale_week_pane_g2_ParamLimits

0x9e74,	// (0x00018d2f) bg_cale_side_pane_cp01_ParamLimits

0x2009,	// (0x00010ec4) cale_month_week_pane_t1_ParamLimits

0x2022,	// (0x00010edd) cale_month_week_pane_t2_ParamLimits

0x203b,	// (0x00010ef6) cale_month_week_pane_t3_ParamLimits

0x2054,	// (0x00010f0f) cale_month_week_pane_t4_ParamLimits

0x206d,	// (0x00010f28) cale_month_week_pane_t5_ParamLimits

0x2086,	// (0x00010f41) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0001e16c) cale_month_week_pane_t_ParamLimits

0xa21d,	// (0x000190d8) cell_cale_month_pane_g1_ParamLimits

0x948a,	// (0x00018345) main_cale_event_viewer_pane

0x948a,	// (0x00018345) listscroll_cale_event_viewer_pane

0xc3e5,	// (0x0001b2a0) list_cale_ev_pane

0xc3ed,	// (0x0001b2a8) scroll_pane_cp023

0xc3f9,	// (0x0001b2b4) field_cale_ev_pane_ParamLimits

0xc3f9,	// (0x0001b2b4) field_cale_ev_pane

0xc417,	// (0x0001b2d2) field_cale_ev_content_pane_ParamLimits

0xc417,	// (0x0001b2d2) field_cale_ev_content_pane

0xc423,	// (0x0001b2de) field_cale_ev_pane_g1_ParamLimits

0xc423,	// (0x0001b2de) field_cale_ev_pane_g1

0xc42f,	// (0x0001b2ea) field_cale_ev_pane_g2_ParamLimits

0xc42f,	// (0x0001b2ea) field_cale_ev_pane_g2

0xc447,	// (0x0001b302) field_cale_ev_pane_g3_ParamLimits

0xc447,	// (0x0001b302) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x0001e5c0) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x0001e5c0) field_cale_ev_pane_g

0xc45f,	// (0x0001b31a) field_cale_ev_pane_t1_ParamLimits

0xc45f,	// (0x0001b31a) field_cale_ev_pane_t1

0x9d91,	// (0x00018c4c) field_cale_ev_content_pane_t1_ParamLimits

0x9d91,	// (0x00018c4c) field_cale_ev_content_pane_t1

0xab32,	// (0x000199ed) bg_button_pane_cp01

0x0a9d,	// (0x0000f958) listscroll_cale_week_pane_ParamLimits

0x9e1f,	// (0x00018cda) popup_toolbar_window_cp01

0x9e45,	// (0x00018d00) listscroll_cale_week_pane_t1_ParamLimits

0x0a9d,	// (0x0000f958) listscroll_cale_day_pane_ParamLimits

0x9e1f,	// (0x00018cda) popup_toolbar_window_cp02

0xa29f,	// (0x0001915a) listscroll_cale_day_pane_t1_ParamLimits

0x0a9d,	// (0x0000f958) main_cale_month_pane_ParamLimits

0xbe9d,	// (0x0001ad58) popup_toolbar_window_cp03_ParamLimits

0xbe9d,	// (0x0001ad58) popup_toolbar_window_cp03

0x2e6e,	// (0x00011d29) main_image_pane_g2_ParamLimits

0x2e6e,	// (0x00011d29) main_image_pane_g2

0x2e7f,	// (0x00011d3a) main_image_pane_g3_ParamLimits

0x2e7f,	// (0x00011d3a) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0001e39e) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0001e39e) main_image_pane_g

0xac8e,	// (0x00019b49) main_image_pane_t1_ParamLimits

0x2e90,	// (0x00011d4b) main_image_pane_t2_ParamLimits

0x2e90,	// (0x00011d4b) main_image_pane_t2

0x2ea2,	// (0x00011d5d) main_image_pane_t3_ParamLimits

0x2ea2,	// (0x00011d5d) main_image_pane_t3

0x2eca,	// (0x00011d85) main_image_pane_t4_ParamLimits

0x2eca,	// (0x00011d85) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0001e3a5) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0001e3a5) main_image_pane_t

0x2eea,	// (0x00011da5) popup_image_details_window_cp01

0x2ef4,	// (0x00011daf) popup_toobar_trans_pane_cp01_ParamLimits

0x2ef4,	// (0x00011daf) popup_toobar_trans_pane_cp01

0x3667,	// (0x00012522) popup_image_details_window_ParamLimits

0x3667,	// (0x00012522) popup_image_details_window

0xbe70,	// (0x0001ad2b) popup_image_focus_window

0x3a86,	// (0x00012941) camera2_autofocus_pane_ParamLimits

0x3a86,	// (0x00012941) camera2_autofocus_pane

0x948a,	// (0x00018345) bg_popup_sub_pane_cp06

0xc476,	// (0x0001b331) popup_image_focus_window_g1

0xc47e,	// (0x0001b339) popup_image_focus_window_g2

0xc486,	// (0x0001b341) popup_image_focus_window_g3

0xc48e,	// (0x0001b349) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0001e5c7) popup_image_focus_window_g

0xc496,	// (0x0001b351) popup_image_focus_window_t1

0xc4a4,	// (0x0001b35f) popup_image_focus_window_t2

0xc4b4,	// (0x0001b36f) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x0001e5d0) popup_image_focus_window_t

0xc4c2,	// (0x0001b37d) camera2_autofocus_pane_g1

0x94fa,	// (0x000183b5) bg_tb_trans_pane_cp01

0xc4d0,	// (0x0001b38b) popup_image_details_window_g1

0xc4e3,	// (0x0001b39e) popup_image_details_window_g2

0x0002,

0xf727,	// (0x0001e5e2) popup_image_details_window_g

0xc50c,	// (0x0001b3c7) popup_image_details_window_t1

0xc51e,	// (0x0001b3d9) popup_image_details_window_t2

0xc537,	// (0x0001b3f2) popup_image_details_window_t3

0xc54b,	// (0x0001b406) popup_image_details_window_t4

0xc566,	// (0x0001b421) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x0001e5e9) popup_image_details_window_t

0x9c3b,	// (0x00018af6) bg_calc_paper_pane_ParamLimits

0x948a,	// (0x00018345) grid_highlight_pane_cp013

0x9c4f,	// (0x00018b0a) list_calc_pane_ParamLimits

0x9c61,	// (0x00018b1c) scroll_pane_cp024

0x9c69,	// (0x00018b24) bg_calc_display_pane_ParamLimits

0x090b,	// (0x0000f7c6) calc_display_pane_t1_ParamLimits

0x091d,	// (0x0000f7d8) calc_display_pane_t2_ParamLimits

0x9c75,	// (0x00018b30) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0001e008) calc_display_pane_t_ParamLimits

0x09d7,	// (0x0000f892) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0001e025) cell_calc_pane_g

0x09e0,	// (0x0000f89b) cell_calc_pane_t1

0x9cec,	// (0x00018ba7) grid_highlight_pane_cp02_ParamLimits

0x9d02,	// (0x00018bbd) toolbar_button_pane_cp01_ParamLimits

0x9d02,	// (0x00018bbd) toolbar_button_pane_cp01

0xacd3,	// (0x00019b8e) temp_image_control_pane_ParamLimits

0xacd3,	// (0x00019b8e) temp_image_control_pane

0x94fa,	// (0x000183b5) main_mp3_pane

0xc580,	// (0x0001b43b) temp_image_control_pane_g1_ParamLimits

0xc580,	// (0x0001b43b) temp_image_control_pane_g1

0xc58e,	// (0x0001b449) temp_image_control_pane_g2_ParamLimits

0xc58e,	// (0x0001b449) temp_image_control_pane_g2

0xc5a0,	// (0x0001b45b) temp_image_control_pane_g3_ParamLimits

0xc5a0,	// (0x0001b45b) temp_image_control_pane_g3

0x42db,	// (0x00013196) temp_image_control_pane_g4_ParamLimits

0x42db,	// (0x00013196) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x0001e5f4) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x0001e5f4) temp_image_control_pane_g

0xc580,	// (0x0001b43b) main_mp3_pane_g1

0x42ee,	// (0x000131a9) main_mp3_pane_g2

0x0007,

0xf742,	// (0x0001e5fd) main_mp3_pane_g

0xc5e3,	// (0x0001b49e) main_mp3_pane_t1

0x9ee1,	// (0x00018d9c) main_camera_pane_g8_ParamLimits

0x9ee1,	// (0x00018d9c) main_camera_pane_g8

0x1299,	// (0x00010154) main_video_pane_g7_ParamLimits

0x1299,	// (0x00010154) main_video_pane_g7

0xbf92,	// (0x0001ae4d) main_camera2_pane_t7_ParamLimits

0xbf92,	// (0x0001ae4d) main_camera2_pane_t7

0xa029,	// (0x00018ee4) scroll_pane_cp025_ParamLimits

0xa029,	// (0x00018ee4) scroll_pane_cp025

0xa03d,	// (0x00018ef8) scroll_pane_cp026_ParamLimits

0xa03d,	// (0x00018ef8) scroll_pane_cp026

0xa04c,	// (0x00018f07) wml_content_pane_ParamLimits

0x948a,	// (0x00018345) main_touch_calib_pane

0x43c2,	// (0x0001327d) main_touch_calib_pane_g1

0x43d4,	// (0x0001328f) main_touch_calib_pane_g2

0x43e6,	// (0x000132a1) main_touch_calib_pane_g3

0x43f8,	// (0x000132b3) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x0001e61b) main_touch_calib_pane_g

0x440a,	// (0x000132c5) main_touch_calib_pane_t1

0x4424,	// (0x000132df) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x0001e624) main_touch_calib_pane_t

0xa84c,	// (0x00019707) mup_progress_pane_cp02

0xa881,	// (0x0001973c) navi_pane_g1

0xa93c,	// (0x000197f7) navi_pane_mp_t3

0x94fa,	// (0x000183b5) main_mp3_pane_ParamLimits

0x37f2,	// (0x000126ad) navi_pane_ParamLimits

0xc580,	// (0x0001b43b) main_mp3_pane_g1_ParamLimits

0x42ee,	// (0x000131a9) main_mp3_pane_g2_ParamLimits

0x42fc,	// (0x000131b7) main_mp3_pane_g3_ParamLimits

0x42fc,	// (0x000131b7) main_mp3_pane_g3

0x430a,	// (0x000131c5) main_mp3_pane_g4_ParamLimits

0x430a,	// (0x000131c5) main_mp3_pane_g4

0xc5b0,	// (0x0001b46b) main_mp3_pane_g5_ParamLimits

0xc5b0,	// (0x0001b46b) main_mp3_pane_g5

0xc5be,	// (0x0001b479) main_mp3_pane_g6_ParamLimits

0xc5be,	// (0x0001b479) main_mp3_pane_g6

0xc5cb,	// (0x0001b486) main_mp3_pane_g7_ParamLimits

0xc5cb,	// (0x0001b486) main_mp3_pane_g7

0xc5d7,	// (0x0001b492) main_mp3_pane_g8_ParamLimits

0xc5d7,	// (0x0001b492) main_mp3_pane_g8

0xf742,	// (0x0001e5fd) main_mp3_pane_g_ParamLimits

0x4316,	// (0x000131d1) main_mp3_pane_t2

0x4324,	// (0x000131df) main_mp3_pane_t3

0xc5f1,	// (0x0001b4ac) main_mp3_pane_t4

0xc5ff,	// (0x0001b4ba) main_mp3_pane_t5

0x0005,

0xf753,	// (0x0001e60e) main_mp3_pane_t

0xc60d,	// (0x0001b4c8) mup_progress_pane_cp01

0x94a8,	// (0x00018363) aid_zoom_text_secondary2

0xc3e5,	// (0x0001b2a0) list_cale_ev2_pane

0xc3ed,	// (0x0001b2a8) scroll_pane_cp023_ParamLimits

0x447a,	// (0x00013335) field_cale_ev2_pane_ParamLimits

0x447a,	// (0x00013335) field_cale_ev2_pane

0xc615,	// (0x0001b4d0) field_cale_ev2_pane_g1_ParamLimits

0xc615,	// (0x0001b4d0) field_cale_ev2_pane_g1

0xc621,	// (0x0001b4dc) field_cale_ev2_pane_g2_ParamLimits

0xc621,	// (0x0001b4dc) field_cale_ev2_pane_g2

0xc639,	// (0x0001b4f4) field_cale_ev2_pane_g3_ParamLimits

0xc639,	// (0x0001b4f4) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x0001e62f) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x0001e62f) field_cale_ev2_pane_g

0xc65d,	// (0x0001b518) field_cale_ev2_pane_t1_ParamLimits

0xc65d,	// (0x0001b518) field_cale_ev2_pane_t1

0xc674,	// (0x0001b52f) field_cale_ev2_pane_t2_ParamLimits

0xc674,	// (0x0001b52f) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x0001e638) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x0001e638) field_cale_ev2_pane_t

0x2d22,	// (0x00011bdd) main_postcard_pane_g5_ParamLimits

0x2d22,	// (0x00011bdd) main_postcard_pane_g5

0x2d38,	// (0x00011bf3) main_postcard_pane_g6_ParamLimits

0x2d38,	// (0x00011bf3) main_postcard_pane_g6

0x105f,	// (0x0000ff1a) camera2_autofocus_pane_cp_ParamLimits

0x105f,	// (0x0000ff1a) camera2_autofocus_pane_cp

0x94fa,	// (0x000183b5) main_mup3_pane

0x44df,	// (0x0001339a) main_mup3_pane_g1_ParamLimits

0x44df,	// (0x0001339a) main_mup3_pane_g1

0x4501,	// (0x000133bc) main_mup3_pane_g2_ParamLimits

0x4501,	// (0x000133bc) main_mup3_pane_g2

0x4581,	// (0x0001343c) main_mup3_pane_g3_ParamLimits

0x4581,	// (0x0001343c) main_mup3_pane_g3

0x45c7,	// (0x00013482) main_mup3_pane_g4_ParamLimits

0x45c7,	// (0x00013482) main_mup3_pane_g4

0x460d,	// (0x000134c8) main_mup3_pane_g5_ParamLimits

0x460d,	// (0x000134c8) main_mup3_pane_g5

0x4653,	// (0x0001350e) main_mup3_pane_g6_ParamLimits

0x4653,	// (0x0001350e) main_mup3_pane_g6

0xc689,	// (0x0001b544) main_mup3_pane_g7_ParamLimits

0xc689,	// (0x0001b544) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x0001e648) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x0001e648) main_mup3_pane_g

0x46d1,	// (0x0001358c) main_mup3_pane_t1_ParamLimits

0x46d1,	// (0x0001358c) main_mup3_pane_t1

0x4745,	// (0x00013600) main_mup3_pane_t2_ParamLimits

0x4745,	// (0x00013600) main_mup3_pane_t2

0x4819,	// (0x000136d4) main_mup3_pane_t4_ParamLimits

0x4819,	// (0x000136d4) main_mup3_pane_t4

0x486f,	// (0x0001372a) main_mup3_pane_t5_ParamLimits

0x486f,	// (0x0001372a) main_mup3_pane_t5

0x492b,	// (0x000137e6) main_mup3_pane_t6_ParamLimits

0x492b,	// (0x000137e6) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x0001e659) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x0001e659) main_mup3_pane_t

0x49e3,	// (0x0001389e) mup3_progress_pane_ParamLimits

0x49e3,	// (0x0001389e) mup3_progress_pane

0x4a6f,	// (0x0001392a) popup_mup3_control_window_ParamLimits

0x4a6f,	// (0x0001392a) popup_mup3_control_window

0xc697,	// (0x0001b552) popup_mup3_text_window

0x4aa1,	// (0x0001395c) mup3_progress_pane_t1

0x4ac0,	// (0x0001397b) mup3_progress_pane_t2

0xc69f,	// (0x0001b55a) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x0001e666) mup3_progress_pane_t

0xc6bc,	// (0x0001b577) mup_progress_pane_cp03

0x948a,	// (0x00018345) bg_tb_trans_pane_cp04

0x4adf,	// (0x0001399a) mup3_volume_pane

0x4ae7,	// (0x000139a2) popup_mup3_control_window_g1

0x4af0,	// (0x000139ab) mup3_volume_pane_g1

0x4af9,	// (0x000139b4) mup3_volume_pane_g2

0x4b02,	// (0x000139bd) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x0001e66d) mup3_volume_pane_g

0x948a,	// (0x00018345) bg_tb_trans_pane_cp03

0xc6cc,	// (0x0001b587) popup_mup3_text_window_g1

0xc6d4,	// (0x0001b58f) popup_mup3_text_window_t1

0x9cc3,	// (0x00018b7e) list_calc_item_pane_g1_ParamLimits

0xc07a,	// (0x0001af35) mup_volume_pane_cp_g1

0x443e,	// (0x000132f9) main_touch_calib_pane_t3

0x4452,	// (0x0001330d) main_touch_calib_pane_t4

0x4466,	// (0x00013321) main_touch_calib_pane_t5

0x9494,	// (0x0001834f) aid_cell_size_toolbar2

0x949c,	// (0x00018357) aid_popup3_width_pane

0x94a8,	// (0x00018363) aid_zoom_text_msg_primary

0x103e,	// (0x0000fef9) vorec_t7

0x9c87,	// (0x00018b42) bg_calc_paper_pane_g1_ParamLimits

0x9c93,	// (0x00018b4e) bg_calc_paper_pane_g2_ParamLimits

0x9c9f,	// (0x00018b5a) bg_calc_paper_pane_g3_ParamLimits

0x9cab,	// (0x00018b66) bg_calc_paper_pane_g4_ParamLimits

0x9cb7,	// (0x00018b72) bg_calc_paper_pane_g5_ParamLimits

0x0964,	// (0x0000f81f) bg_calc_paper_pane_g6_ParamLimits

0x0973,	// (0x0000f82e) bg_calc_paper_pane_g7_ParamLimits

0x0982,	// (0x0000f83d) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0001e00f) bg_calc_paper_pane_g_ParamLimits

0x0995,	// (0x0000f850) calc_bg_paper_pane_g9_ParamLimits

0x11ab,	// (0x00010066) image_qvga_pane_ParamLimits

0x11ab,	// (0x00010066) image_qvga_pane

0x9b76,	// (0x00018a31) bg_popup_sub_pane_cp04_ParamLimits

0xac0a,	// (0x00019ac5) popup_mup_playback_window_g1_ParamLimits

0xac16,	// (0x00019ad1) popup_mup_playback_window_t1_ParamLimits

0xac2b,	// (0x00019ae6) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0001e399) popup_mup_playback_window_t_ParamLimits

0x3f7d,	// (0x00012e38) main_mup2_pane_g3_ParamLimits

0x3f7d,	// (0x00012e38) main_mup2_pane_g3

0x15bf,	// (0x0001047a) popup_toolbar_window_cp04

0xb020,	// (0x00019edb) popup_call2_audio_second_window_g3_ParamLimits

0xb020,	// (0x00019edb) popup_call2_audio_second_window_g3

0xb42a,	// (0x0001a2e5) popup_call2_audio_first_window_g4_ParamLimits

0xb42a,	// (0x0001a2e5) popup_call2_audio_first_window_g4

0xbaa9,	// (0x0001a964) popup_call2_audio_in_window_g4_ParamLimits

0xbaa9,	// (0x0001a964) popup_call2_audio_in_window_g4

0x2e50,	// (0x00011d0b) aid_area_sk_bg_cut_ParamLimits

0x2e50,	// (0x00011d0b) aid_area_sk_bg_cut

0xac40,	// (0x00019afb) aid_area_sk_bg_cut_2_ParamLimits

0xac40,	// (0x00019afb) aid_area_sk_bg_cut_2

0x4281,	// (0x0001313c) aid_placing_details_win

0x4289,	// (0x00013144) aid_placing_details_win_2

0xc4c2,	// (0x0001b37d) camera2_autofocus_pane_g1_ParamLimits

0x055b,	// (0x0000f416) popup_fixed_preview_cale_window_ParamLimits

0x055b,	// (0x0000f416) popup_fixed_preview_cale_window

0xa9c3,	// (0x0001987e) navi_slider_pane_g3

0xa9cc,	// (0x00019887) navi_slider_pane_g4

0xa9d5,	// (0x00019890) navi_slider_pane_g5

0xa9c3,	// (0x0001987e) navi_slider_pane_g6

0xa9de,	// (0x00019899) navi_slider_pane_g7

0xaaff,	// (0x000199ba) mup_scale_pane_g3

0xab08,	// (0x000199c3) mup_scale_pane_g4

0xab11,	// (0x000199cc) mup_scale_pane_g5

0x2afa,	// (0x000119b5) mup_scale_pane_g6

0x2b03,	// (0x000119be) mup_scale_pane_g7

0xa9c3,	// (0x0001987e) cams2_slider_pane_g3

0xc12f,	// (0x0001afea) cams2_slider_pane_g4

0xc137,	// (0x0001aff2) cams2_slider_pane_g5

0xa9c3,	// (0x0001987e) cams2_slider_pane_g6

0xc13f,	// (0x0001affa) cams2_slider_pane_g7

0xc36b,	// (0x0001b226) camera2_autofocus_pane_cp_g1

0xbe44,	// (0x0001acff) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe44,	// (0x0001acff) bg_popup_preview_window_pane_cp02

0xc6e2,	// (0x0001b59d) list_fp_cale_pane_ParamLimits

0xc6e2,	// (0x0001b59d) list_fp_cale_pane

0xc6ee,	// (0x0001b5a9) popup_fixed_preview_cale_window_t1_ParamLimits

0xc6ee,	// (0x0001b5a9) popup_fixed_preview_cale_window_t1

0x4b0b,	// (0x000139c6) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b0b,	// (0x000139c6) popup_fixed_preview_cale_window_t2

0x4b20,	// (0x000139db) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b20,	// (0x000139db) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0001e674) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0001e674) popup_fixed_preview_cale_window_t

0x4b35,	// (0x000139f0) list_single_fp_cale_pane_ParamLimits

0x4b35,	// (0x000139f0) list_single_fp_cale_pane

0xc70c,	// (0x0001b5c7) list_single_fp_cale_pane_g1_ParamLimits

0xc70c,	// (0x0001b5c7) list_single_fp_cale_pane_g1

0xc718,	// (0x0001b5d3) list_single_fp_cale_pane_g2_ParamLimits

0xc718,	// (0x0001b5d3) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x0001e67b) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x0001e67b) list_single_fp_cale_pane_g

0xc731,	// (0x0001b5ec) list_single_fp_cale_pane_t1_ParamLimits

0xc731,	// (0x0001b5ec) list_single_fp_cale_pane_t1

0xc743,	// (0x0001b5fe) list_single_fp_cale_pane_t2_ParamLimits

0xc743,	// (0x0001b5fe) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x0001e682) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x0001e682) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x948a,	// (0x00018345) main_dialer_pane

0x4b4b,	// (0x00013a06) aid_cell_size_keypad

0x4b55,	// (0x00013a10) dialer_ne_pane

0x4b5d,	// (0x00013a18) grid_dialer_command_1_pane

0x4b65,	// (0x00013a20) grid_dialer_command_2_pane

0x4b6d,	// (0x00013a28) grid_dialer_keypad_pane

0x4b7f,	// (0x00013a3a) bg_popup_call_pane_cp06_ParamLimits

0x4b7f,	// (0x00013a3a) bg_popup_call_pane_cp06

0x4b8b,	// (0x00013a46) dialer_ne_clear_pane_ParamLimits

0x4b8b,	// (0x00013a46) dialer_ne_clear_pane

0xc776,	// (0x0001b631) dialer_ne_pane_g1

0xc77e,	// (0x0001b639) dialer_ne_pane_t1_ParamLimits

0xc77e,	// (0x0001b639) dialer_ne_pane_t1

0x4b97,	// (0x00013a52) dialer_ne_pane_t2_ParamLimits

0x4b97,	// (0x00013a52) dialer_ne_pane_t2

0x4bc1,	// (0x00013a7c) dialer_ne_pane_t3_ParamLimits

0x4bc1,	// (0x00013a7c) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0001e687) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0001e687) dialer_ne_pane_t

0x4bf1,	// (0x00013aac) dialer_ne_pane_t3_copy1_ParamLimits

0x4bf1,	// (0x00013aac) dialer_ne_pane_t3_copy1

0x4c20,	// (0x00013adb) cell_dialer_keypad_pane_ParamLimits

0x4c20,	// (0x00013adb) cell_dialer_keypad_pane

0x4c37,	// (0x00013af2) cell_dialer_command_1_pane_ParamLimits

0x4c37,	// (0x00013af2) cell_dialer_command_1_pane

0x4c4d,	// (0x00013b08) cell_dialer_command_2_pane_ParamLimits

0x4c4d,	// (0x00013b08) cell_dialer_command_2_pane

0xc790,	// (0x0001b64b) bg_button_pane_cp02_ParamLimits

0xc790,	// (0x0001b64b) bg_button_pane_cp02

0x4c5c,	// (0x00013b17) cell_dialer_keypad_pane_g1_ParamLimits

0x4c5c,	// (0x00013b17) cell_dialer_keypad_pane_g1

0xc790,	// (0x0001b64b) bg_button_pane_cp03_ParamLimits

0xc790,	// (0x0001b64b) bg_button_pane_cp03

0x4c70,	// (0x00013b2b) cell_dialer_command_1_pane_g1_ParamLimits

0x4c70,	// (0x00013b2b) cell_dialer_command_1_pane_g1

0xc79c,	// (0x0001b657) bg_button_pane_cp04

0x4c84,	// (0x00013b3f) cell_dialer_command_2_pane_g1

0x9ecf,	// (0x00018d8a) bg_button_pane_cp06

0xc7a4,	// (0x0001b65f) dialer_ne_clear_pane_g1

0xa88d,	// (0x00019748) navi_pane_g2

0xa8bb,	// (0x00019776) navi_pane_g3

0x0002,

0xf3e1,	// (0x0001e29c) navi_pane_g

0xa94a,	// (0x00019805) navi_pane_mv_g2

0xa971,	// (0x0001982c) navi_pane_mv_g5

0x26c8,	// (0x00011583) navi_pane_mv_t1

0x9c69,	// (0x00018b24) main_clock2_pane

0x94fa,	// (0x000183b5) main_clock2_list_pane_ParamLimits

0x94fa,	// (0x000183b5) main_clock2_list_pane

0x4cf5,	// (0x00013bb0) main_clock2_pane_t1_ParamLimits

0x4cf5,	// (0x00013bb0) main_clock2_pane_t1

0x4d30,	// (0x00013beb) main_clock2_pane_t2_ParamLimits

0x4d30,	// (0x00013beb) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x0001e693) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x0001e693) main_clock2_pane_t

0x4dd0,	// (0x00013c8b) popup_clock_analogue_window_cp03_ParamLimits

0x4dd0,	// (0x00013c8b) popup_clock_analogue_window_cp03

0x4df5,	// (0x00013cb0) popup_clock_digital_window_cp02_ParamLimits

0x4df5,	// (0x00013cb0) popup_clock_digital_window_cp02

0x4e6e,	// (0x00013d29) main_clock2_list_single_pane_ParamLimits

0x4e6e,	// (0x00013d29) main_clock2_list_single_pane

0x9ecf,	// (0x00018d8a) list_highlight_pane_cp05

0xc7de,	// (0x0001b699) main_clock2_list_single_pane_t1

0x15bf,	// (0x0001047a) popup_toolbar_window_cp04_ParamLimits

0x42ab,	// (0x00013166) camera2_autofocus_pane_g2_ParamLimits

0x42ab,	// (0x00013166) camera2_autofocus_pane_g2

0x42b7,	// (0x00013172) camera2_autofocus_pane_g3_ParamLimits

0x42b7,	// (0x00013172) camera2_autofocus_pane_g3

0x42c3,	// (0x0001317e) camera2_autofocus_pane_g4_ParamLimits

0x42c3,	// (0x0001317e) camera2_autofocus_pane_g4

0x42cf,	// (0x0001318a) camera2_autofocus_pane_g5_ParamLimits

0x42cf,	// (0x0001318a) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0001e5d7) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0001e5d7) camera2_autofocus_pane_g

0x449b,	// (0x00013356) camera2_autofocus_pane_cp_g2

0x44a3,	// (0x0001335e) camera2_autofocus_pane_cp_g3

0x44ab,	// (0x00013366) camera2_autofocus_pane_cp_g4

0x44b3,	// (0x0001336e) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x0001e63d) camera2_autofocus_pane_cp_g

0x4b77,	// (0x00013a32) popup_dialer_spcha_window

0x948a,	// (0x00018345) bg_popup_sub_pane_cp07

0xc7ec,	// (0x0001b6a7) list_spcha_pane

0xc7f4,	// (0x0001b6af) list_single_spcha_pane_ParamLimits

0xc7f4,	// (0x0001b6af) list_single_spcha_pane

0x948a,	// (0x00018345) list_highlight_pane_cp06

0xc805,	// (0x0001b6c0) list_single_spcha_pane_t1

0xb853,	// (0x0001a70e) popup_call2_audio_out_window_g4_ParamLimits

0xb853,	// (0x0001a70e) popup_call2_audio_out_window_g4

0x948a,	// (0x00018345) main_imed2_pane

0xbe78,	// (0x0001ad33) popup_imed_adjust2_window

0x367f,	// (0x0001253a) popup_imed_trans_window_ParamLimits

0x367f,	// (0x0001253a) popup_imed_trans_window

0xc1a9,	// (0x0001b064) popup_blid_sat_info2_window_t1

0xc1b7,	// (0x0001b072) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x0001e56c) popup_blid_sat_info2_window_t

0x4f1f,	// (0x00013dda) aid_size_cell_colour_35

0x4f3f,	// (0x00013dfa) aid_size_cell_colour_112

0x4f5f,	// (0x00013e1a) aid_size_cell_effect

0xbe50,	// (0x0001ad0b) bg_tb_trans_pane_cp02

0xa3a8,	// (0x00019263) heading_imed_pane

0x4f7f,	// (0x00013e3a) listscroll_imed_pane

0xc813,	// (0x0001b6ce) heading_imed_pane_g1

0xc81b,	// (0x0001b6d6) heading_imed_pane_t1

0xc829,	// (0x0001b6e4) grid_imed_colour_35_pane_ParamLimits

0xc829,	// (0x0001b6e4) grid_imed_colour_35_pane

0x4f8b,	// (0x00013e46) grid_imed_effect_pane

0xc841,	// (0x0001b6fc) list_imed_aspect_pane

0x4fa1,	// (0x00013e5c) scroll_pane_cp027_ParamLimits

0x4fa1,	// (0x00013e5c) scroll_pane_cp027

0x4fb2,	// (0x00013e6d) cell_imed_effect_pane_ParamLimits

0x4fb2,	// (0x00013e6d) cell_imed_effect_pane

0xc849,	// (0x0001b704) cell_imed_colour_pane_ParamLimits

0xc849,	// (0x0001b704) cell_imed_colour_pane

0xc88b,	// (0x0001b746) cell_imed_colour_pane_g1_ParamLimits

0xc88b,	// (0x0001b746) cell_imed_colour_pane_g1

0xc89c,	// (0x0001b757) hgihlgiht_grid_pane_cp016_ParamLimits

0xc89c,	// (0x0001b757) hgihlgiht_grid_pane_cp016

0x4fd9,	// (0x00013e94) cell_imed_effect_pane_g1

0x4fe1,	// (0x00013e9c) grid_highlight_pane_cp017

0xc8ad,	// (0x0001b768) list_imed_single_pane_ParamLimits

0xc8ad,	// (0x0001b768) list_imed_single_pane

0x948a,	// (0x00018345) list_highlight_pane_cp07

0xc8c2,	// (0x0001b77d) list_imed_aspect_pane_comp1_t1

0xbe50,	// (0x0001ad0b) bg_tb_trans_pane_cp05

0xc8e4,	// (0x0001b79f) popup_imed_adjust2_window_g1

0xc90b,	// (0x0001b7c6) popup_imed_adjust2_window_t1

0xc923,	// (0x0001b7de) slider_imed_adjust_pane

0xc937,	// (0x0001b7f2) slider_imed_adjust_pane_g1

0xc947,	// (0x0001b802) slider_imed_adjust_pane_g2

0xc957,	// (0x0001b812) slider_imed_adjust_pane_g3

0xc968,	// (0x0001b823) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x0001e6b0) slider_imed_adjust_pane_g

0x4fea,	// (0x00013ea5) aid_size_cell_clipart2

0x4ff6,	// (0x00013eb1) grid_imed_clipart_pane

0xc979,	// (0x0001b834) scroll_pane_cp031

0x5000,	// (0x00013ebb) cell_imed_clipart_pane_ParamLimits

0x5000,	// (0x00013ebb) cell_imed_clipart_pane

0x5022,	// (0x00013edd) cell_imed_clipart_pane_g1

0x948a,	// (0x00018345) grid_highlight_pane_cp014

0x4cd1,	// (0x00013b8c) main_clock2_pane_g1_ParamLimits

0x4cd1,	// (0x00013b8c) main_clock2_pane_g1

0x4e15,	// (0x00013cd0) aid_call2_pane_cp10

0x4e27,	// (0x00013ce2) aid_call_pane_cp10

0xa7ec,	// (0x000196a7) popup_clock_analogue_window_cp10_g1

0xa7ec,	// (0x000196a7) popup_clock_analogue_window_cp10_g2

0x4e39,	// (0x00013cf4) popup_clock_analogue_window_cp10_g3

0x4e39,	// (0x00013cf4) popup_clock_analogue_window_cp10_g4

0xa7ec,	// (0x000196a7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x0001e69e) popup_clock_analogue_window_cp10_g

0x4e4f,	// (0x00013d0a) popup_clock_analogue_window_cp10_t1

0x4e80,	// (0x00013d3b) clock_digital_number_pane_cp10_ParamLimits

0x4e80,	// (0x00013d3b) clock_digital_number_pane_cp10

0x4e98,	// (0x00013d53) clock_digital_number_pane_cp11_ParamLimits

0x4e98,	// (0x00013d53) clock_digital_number_pane_cp11

0x4eb0,	// (0x00013d6b) clock_digital_number_pane_cp12_ParamLimits

0x4eb0,	// (0x00013d6b) clock_digital_number_pane_cp12

0x4eca,	// (0x00013d85) clock_digital_number_pane_cp13_ParamLimits

0x4eca,	// (0x00013d85) clock_digital_number_pane_cp13

0x4ee4,	// (0x00013d9f) clock_digital_separator_pane_cp10_ParamLimits

0x4ee4,	// (0x00013d9f) clock_digital_separator_pane_cp10

0x4efe,	// (0x00013db9) popup_clock_digital_window_cp02_t1_ParamLimits

0x4efe,	// (0x00013db9) popup_clock_digital_window_cp02_t1

0x9b6e,	// (0x00018a29) clock_digital_number_pane_cp10_g1

0x9b6e,	// (0x00018a29) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x0001e6b9) clock_digital_number_pane_cp10_g

0x9b6e,	// (0x00018a29) clock_digital_separator_pane_cp10_g1

0x9b6e,	// (0x00018a29) clock_digital_separator_pane_g2_cp10

0xa979,	// (0x00019834) navi_pane_vded_g4

0xa982,	// (0x0001983d) navi_pane_vded_g5

0xa98b,	// (0x00019846) navi_pane_vded_t1

0x948a,	// (0x00018345) main_vded_pane

0x502b,	// (0x00013ee6) main_vded_pane_g1

0x5035,	// (0x00013ef0) main_vded_pane_g2

0x503f,	// (0x00013efa) main_vded_pane_g3

0x0002,

0xf803,	// (0x0001e6be) main_vded_pane_g

0x5049,	// (0x00013f04) main_vded_pane_t1

0x5057,	// (0x00013f12) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0001e6c5) main_vded_pane_t

0x5065,	// (0x00013f20) vded_slider_pane

0x506d,	// (0x00013f28) vded_video_pane

0xc981,	// (0x0001b83c) vded_video_pane_g1

0x5075,	// (0x00013f30) vded_video_pane_g2

0xc36b,	// (0x0001b226) vded_video_pane_g3

0x0002,

0xf80f,	// (0x0001e6ca) vded_video_pane_g

0xc98b,	// (0x0001b846) vded_slider_pane_g1

0xc07a,	// (0x0001af35) vded_slider_pane_g2

0xc994,	// (0x0001b84f) vded_slider_pane_g3

0xc99d,	// (0x0001b858) vded_slider_pane_g4

0xc9a6,	// (0x0001b861) vded_slider_pane_g5

0x0004,

0xf816,	// (0x0001e6d1) vded_slider_pane_g

0x4a57,	// (0x00013912) mup3_rocker_pane_ParamLimits

0x4a57,	// (0x00013912) mup3_rocker_pane

0x507e,	// (0x00013f39) mup3_control_keys_pane_g1

0x5086,	// (0x00013f41) mup3_control_keys_pane_g2

0x508e,	// (0x00013f49) mup3_control_keys_pane_g3

0x5096,	// (0x00013f51) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x0001e6dc) mup3_control_keys_pane_g

0x0592,	// (0x0000f44d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0592,	// (0x0000f44d) popup_toolbar2_fixed_window_cp01

0x4a8b,	// (0x00013946) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4a8b,	// (0x00013946) popup_toolbar2_fixed_window_cp02

0xb192,	// (0x0001a04d) popup_call2_audio_second_window_t4_ParamLimits

0xb192,	// (0x0001a04d) popup_call2_audio_second_window_t4

0xb6c0,	// (0x0001a57b) popup_call2_audio_first_window_t6_ParamLimits

0xb6c0,	// (0x0001a57b) popup_call2_audio_first_window_t6

0xb956,	// (0x0001a811) popup_call2_audio_out_window_t6_ParamLimits

0xb956,	// (0x0001a811) popup_call2_audio_out_window_t6

0x948a,	// (0x00018345) main_vitu_pane

0x50a6,	// (0x00013f61) aid_size_cell_itu_ParamLimits

0x50a6,	// (0x00013f61) aid_size_cell_itu

0x94fa,	// (0x000183b5) bg_popup_window_pane_cp08_ParamLimits

0x94fa,	// (0x000183b5) bg_popup_window_pane_cp08

0x50bc,	// (0x00013f77) field_vitu_entry_pane_ParamLimits

0x50bc,	// (0x00013f77) field_vitu_entry_pane

0x50d4,	// (0x00013f8f) grid_vitu_function_pane_ParamLimits

0x50d4,	// (0x00013f8f) grid_vitu_function_pane

0x50ef,	// (0x00013faa) grid_vitu_itu_pane_ParamLimits

0x50ef,	// (0x00013faa) grid_vitu_itu_pane

0x510d,	// (0x00013fc8) cell_vitu_itu_pane_ParamLimits

0x510d,	// (0x00013fc8) cell_vitu_itu_pane

0x512f,	// (0x00013fea) cell_vitu_function_pane_ParamLimits

0x512f,	// (0x00013fea) cell_vitu_function_pane

0x94fa,	// (0x000183b5) bg_popup_sub_pane_cp08_ParamLimits

0x94fa,	// (0x000183b5) bg_popup_sub_pane_cp08

0x5148,	// (0x00014003) field_vitu_entry_pane_t1_ParamLimits

0x5148,	// (0x00014003) field_vitu_entry_pane_t1

0xc9c7,	// (0x0001b882) field_vitu_entry_pane_t2_ParamLimits

0xc9c7,	// (0x0001b882) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x0001e6ea) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x0001e6ea) field_vitu_entry_pane_t

0xc9e4,	// (0x0001b89f) bg_button_pane_cp05_ParamLimits

0xc9e4,	// (0x0001b89f) bg_button_pane_cp05

0x5167,	// (0x00014022) cell_vitu_itu_pane_g1

0x517f,	// (0x0001403a) cell_vitu_itu_pane_t1_ParamLimits

0x517f,	// (0x0001403a) cell_vitu_itu_pane_t1

0x5191,	// (0x0001404c) cell_vitu_itu_pane_t2_ParamLimits

0x5191,	// (0x0001404c) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x0001e6ef) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x0001e6ef) cell_vitu_itu_pane_t

0xc9f2,	// (0x0001b8ad) bg_button_pane_cp07

0x51c6,	// (0x00014081) cell_vitu_function_pane_g1

0x9c09,	// (0x00018ac4) main_calc_pane_g1

0x03b9,	// (0x0000f274) aid_visual_content_pane

0x948a,	// (0x00018345) main_vradio_pane

0x51cf,	// (0x0001408a) main_vradio_pane_g1_ParamLimits

0x51cf,	// (0x0001408a) main_vradio_pane_g1

0xc9fc,	// (0x0001b8b7) main_vradio_pane_g2_ParamLimits

0xc9fc,	// (0x0001b8b7) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x0001e6f6) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x0001e6f6) main_vradio_pane_g

0x51e8,	// (0x000140a3) main_vradio_pane_t1_ParamLimits

0x51e8,	// (0x000140a3) main_vradio_pane_t1

0x51fd,	// (0x000140b8) main_vradio_pane_t2_ParamLimits

0x51fd,	// (0x000140b8) main_vradio_pane_t2

0xca09,	// (0x0001b8c4) main_vradio_pane_t3_ParamLimits

0xca09,	// (0x0001b8c4) main_vradio_pane_t3

0x0002,

0xf840,	// (0x0001e6fb) main_vradio_pane_t_ParamLimits

0xf840,	// (0x0001e6fb) main_vradio_pane_t

0x5212,	// (0x000140cd) vradio_rocker_control_pane_ParamLimits

0x5212,	// (0x000140cd) vradio_rocker_control_pane

0x5224,	// (0x000140df) vradio_station_info_pane_ParamLimits

0x5224,	// (0x000140df) vradio_station_info_pane

0xca1d,	// (0x0001b8d8) vradio_frequency_info_pane_ParamLimits

0xca1d,	// (0x0001b8d8) vradio_frequency_info_pane

0xc36b,	// (0x0001b226) vradio_station_info_pane_g1

0xca2c,	// (0x0001b8e7) vradio_station_info_pane_t1_ParamLimits

0xca2c,	// (0x0001b8e7) vradio_station_info_pane_t1

0xca4e,	// (0x0001b909) vradio_station_info_pane_t2_ParamLimits

0xca4e,	// (0x0001b909) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x0001e702) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x0001e702) vradio_station_info_pane_t

0xca60,	// (0x0001b91b) vradio_tuning_pane

0xca68,	// (0x0001b923) vradio_rocker_control_pane_g1

0xca70,	// (0x0001b92b) vradio_rocker_control_pane_g2

0xca78,	// (0x0001b933) vradio_rocker_control_pane_g3

0xca80,	// (0x0001b93b) vradio_rocker_control_pane_g4

0xca88,	// (0x0001b943) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x0001e707) vradio_rocker_control_pane_g

0x5236,	// (0x000140f1) vradio_frequency_info_pane_g1

0xca90,	// (0x0001b94b) vradio_frequency_info_pane_t1_ParamLimits

0xca90,	// (0x0001b94b) vradio_frequency_info_pane_t1

0x5240,	// (0x000140fb) vradio_tuning_pane_g1

0x524b,	// (0x00014106) vradio_tuning_pane_t1

0x94b8,	// (0x00018373) area_side_right_pane_ParamLimits

0x94b8,	// (0x00018373) area_side_right_pane

0xbe0b,	// (0x0001acc6) status_small_pane_g1

0xbe13,	// (0x0001acce) status_small_pane_g2

0xbe1c,	// (0x0001acd7) status_small_pane_g3

0xbe25,	// (0x0001ace0) status_small_pane_g4

0x0003,

0xf607,	// (0x0001e4c2) status_small_pane_g

0xbe2e,	// (0x0001ace9) status_small_pane_t1

0x948a,	// (0x00018345) main_video3_pane

0xcaa4,	// (0x0001b95f) cams_zoom_vslider_pane

0xcaac,	// (0x0001b967) image3_wide_pane_ParamLimits

0xcaac,	// (0x0001b967) image3_wide_pane

0xcac6,	// (0x0001b981) image3_wide_small_pane

0xcad2,	// (0x0001b98d) main_video3_pane_g1_ParamLimits

0xcad2,	// (0x0001b98d) main_video3_pane_g1

0xcaee,	// (0x0001b9a9) main_video3_pane_g2_ParamLimits

0xcaee,	// (0x0001b9a9) main_video3_pane_g2

0x0001,

0xf857,	// (0x0001e712) main_video3_pane_g_ParamLimits

0xf857,	// (0x0001e712) main_video3_pane_g

0xcb0a,	// (0x0001b9c5) main_video3_pane_t1_ParamLimits

0xcb0a,	// (0x0001b9c5) main_video3_pane_t1

0xcb35,	// (0x0001b9f0) main_video3_pane_t2_ParamLimits

0xcb35,	// (0x0001b9f0) main_video3_pane_t2

0xcb60,	// (0x0001ba1b) main_video3_pane_t3_ParamLimits

0xcb60,	// (0x0001ba1b) main_video3_pane_t3

0x0002,

0xf85c,	// (0x0001e717) main_video3_pane_t_ParamLimits

0xf85c,	// (0x0001e717) main_video3_pane_t

0xcb8d,	// (0x0001ba48) cams_zoom_vslider_pane_g1

0xcb96,	// (0x0001ba51) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x0001e71e) cams_zoom_vslider_pane_g

0xcb9e,	// (0x0001ba59) small_slider_vertical_pane

0xc36b,	// (0x0001b226) small_slider_vertical_pane_g1

0xc36b,	// (0x0001b226) small_slider_vertical_pane_g2

0xcba6,	// (0x0001ba61) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x0001e723) small_slider_vertical_pane_g

0x948a,	// (0x00018345) main_hwr_training_pane

0xcbaf,	// (0x0001ba6a) hwr_training_instruct_pane_ParamLimits

0xcbaf,	// (0x0001ba6a) hwr_training_instruct_pane

0x525a,	// (0x00014115) hwr_training_navi_pane_ParamLimits

0x525a,	// (0x00014115) hwr_training_navi_pane

0x5279,	// (0x00014134) hwr_training_write_pane_ParamLimits

0x5279,	// (0x00014134) hwr_training_write_pane

0x948a,	// (0x00018345) bg_frame_shadow_pane

0xcbe6,	// (0x0001baa1) hwr_training_write_pane_g1

0xcbee,	// (0x0001baa9) hwr_training_write_pane_g2

0xcbf6,	// (0x0001bab1) hwr_training_write_pane_g3

0xcbfe,	// (0x0001bab9) hwr_training_write_pane_g4

0xcc06,	// (0x0001bac1) hwr_training_write_pane_g5

0xcc0e,	// (0x0001bac9) hwr_training_write_pane_g6

0xcc16,	// (0x0001bad1) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x0001e72a) hwr_training_write_pane_g

0xcc1e,	// (0x0001bad9) hwr_training_navi_pane_g1_ParamLimits

0xcc1e,	// (0x0001bad9) hwr_training_navi_pane_g1

0xcc30,	// (0x0001baeb) hwr_training_navi_pane_g2_ParamLimits

0xcc30,	// (0x0001baeb) hwr_training_navi_pane_g2

0xcc42,	// (0x0001bafd) hwr_training_navi_pane_g3_ParamLimits

0xcc42,	// (0x0001bafd) hwr_training_navi_pane_g3

0xcc52,	// (0x0001bb0d) hwr_training_navi_pane_g4_ParamLimits

0xcc52,	// (0x0001bb0d) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x0001e739) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x0001e739) hwr_training_navi_pane_g

0xcc5f,	// (0x0001bb1a) hwr_training_navi_pane_t1

0x52c3,	// (0x0001417e) list_single_hwr_training_instruct_pane_ParamLimits

0x52c3,	// (0x0001417e) list_single_hwr_training_instruct_pane

0xcc6d,	// (0x0001bb28) list_single_hwr_training_instruct_pane_t1

0xc2ab,	// (0x0001b166) bg_frame_shadow_pane_g1

0xcc7c,	// (0x0001bb37) bg_frame_shadow_pane_g2

0xcc84,	// (0x0001bb3f) bg_frame_shadow_pane_g3

0xcc8c,	// (0x0001bb47) bg_frame_shadow_pane_g4

0xcc94,	// (0x0001bb4f) bg_frame_shadow_pane_g5

0xcc9c,	// (0x0001bb57) bg_frame_shadow_pane_g6

0xcca4,	// (0x0001bb5f) bg_frame_shadow_pane_g7

0x9d4f,	// (0x00018c0a) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x0001e744) bg_frame_shadow_pane_g

0x948a,	// (0x00018345) main_video_tele_dialer_pane

0x52d9,	// (0x00014194) aid_size_cell_video_keypad_ParamLimits

0x52d9,	// (0x00014194) aid_size_cell_video_keypad

0x52f3,	// (0x000141ae) grid_video_dialer_keypad_pane_ParamLimits

0x52f3,	// (0x000141ae) grid_video_dialer_keypad_pane

0x5341,	// (0x000141fc) video_down_pane_cp_ParamLimits

0x5341,	// (0x000141fc) video_down_pane_cp

0x5373,	// (0x0001422e) cell_video_dialer_keypad_pane_ParamLimits

0x5373,	// (0x0001422e) cell_video_dialer_keypad_pane

0xccac,	// (0x0001bb67) bg_button_pane_cp08_ParamLimits

0xccac,	// (0x0001bb67) bg_button_pane_cp08

0x5395,	// (0x00014250) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5395,	// (0x00014250) cell_video_dialer_keypad_pane_g1

0x4a41,	// (0x000138fc) mup3_rocker2_pane_ParamLimits

0x4a41,	// (0x000138fc) mup3_rocker2_pane

0xc36b,	// (0x0001b226) mup3_rocker2_pane_g1

0x356e,	// (0x00012429) main_dialer2_pane

0x948a,	// (0x00018345) main_mp4_pane

0xccd6,	// (0x0001bb91) main_mp4_pane_g1_ParamLimits

0xccd6,	// (0x0001bb91) main_mp4_pane_g1

0xccd6,	// (0x0001bb91) main_mp4_pane_g2_ParamLimits

0xccd6,	// (0x0001bb91) main_mp4_pane_g2

0x53cf,	// (0x0001428a) main_mp4_pane_g3_ParamLimits

0x53cf,	// (0x0001428a) main_mp4_pane_g3

0xcce4,	// (0x0001bb9f) main_mp4_pane_g4_ParamLimits

0xcce4,	// (0x0001bb9f) main_mp4_pane_g4

0xcd12,	// (0x0001bbcd) main_mp4_pane_g5_ParamLimits

0xcd12,	// (0x0001bbcd) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x0001e764) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x0001e764) main_mp4_pane_g

0xcd86,	// (0x0001bc41) main_mp4_pane_t1_ParamLimits

0xcd86,	// (0x0001bc41) main_mp4_pane_t1

0xcde2,	// (0x0001bc9d) main_mp4_pane_t2_ParamLimits

0xcde2,	// (0x0001bc9d) main_mp4_pane_t2

0xce34,	// (0x0001bcef) main_mp4_pane_t3_ParamLimits

0xce34,	// (0x0001bcef) main_mp4_pane_t3

0xce5a,	// (0x0001bd15) main_mp4_pane_t4_ParamLimits

0xce5a,	// (0x0001bd15) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0001e775) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0001e775) main_mp4_pane_t

0xce9e,	// (0x0001bd59) mp4_progress_pane_ParamLimits

0xce9e,	// (0x0001bd59) mp4_progress_pane

0xcee8,	// (0x0001bda3) mp4_rocker_pane_ParamLimits

0xcee8,	// (0x0001bda3) mp4_rocker_pane

0xcf10,	// (0x0001bdcb) mp4_progress_pane_t1

0xcf29,	// (0x0001bde4) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0001e77e) mp4_progress_pane_t

0xcf42,	// (0x0001bdfd) mup_progress_pane_cp04

0xc36b,	// (0x0001b226) mp4_rocker_pane_g1

0x540b,	// (0x000142c6) aid_cell_size_keypad2_ParamLimits

0x540b,	// (0x000142c6) aid_cell_size_keypad2

0x5421,	// (0x000142dc) dialer2_ne_pane_ParamLimits

0x5421,	// (0x000142dc) dialer2_ne_pane

0x543b,	// (0x000142f6) grid_dialer2_keypad_pane_ParamLimits

0x543b,	// (0x000142f6) grid_dialer2_keypad_pane

0xc150,	// (0x0001b00b) bg_popup_call_pane_cp07_ParamLimits

0xc150,	// (0x0001b00b) bg_popup_call_pane_cp07

0x5457,	// (0x00014312) dialer2_ne_pane_t1_ParamLimits

0x5457,	// (0x00014312) dialer2_ne_pane_t1

0x5493,	// (0x0001434e) cell_dialer2_keypad_pane_ParamLimits

0x5493,	// (0x0001434e) cell_dialer2_keypad_pane

0xcf67,	// (0x0001be22) bg_button_pane_pane_cp04_ParamLimits

0xcf67,	// (0x0001be22) bg_button_pane_pane_cp04

0x54b5,	// (0x00014370) cell_dialer2_keypad_pane_g1_ParamLimits

0x54b5,	// (0x00014370) cell_dialer2_keypad_pane_g1

0x1493,	// (0x0001034e) aid_placing_vt_set_content_ParamLimits

0x1493,	// (0x0001034e) aid_placing_vt_set_content

0x14bb,	// (0x00010376) aid_placing_vt_set_title_ParamLimits

0x14bb,	// (0x00010376) aid_placing_vt_set_title

0x948a,	// (0x00018345) main_image3_pane

0x557b,	// (0x00014436) area_side_right_pane_cp01_ParamLimits

0x557b,	// (0x00014436) area_side_right_pane_cp01

0xccd6,	// (0x0001bb91) main_image3_pane_g1_ParamLimits

0xccd6,	// (0x0001bb91) main_image3_pane_g1

0x5592,	// (0x0001444d) main_image3_pane_g2_ParamLimits

0x5592,	// (0x0001444d) main_image3_pane_g2

0x55ba,	// (0x00014475) main_image3_pane_g3_ParamLimits

0x55ba,	// (0x00014475) main_image3_pane_g3

0x55e4,	// (0x0001449f) main_image3_pane_g4_ParamLimits

0x55e4,	// (0x0001449f) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0001e78d) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0001e78d) main_image3_pane_g

0x560e,	// (0x000144c9) main_image3_pane_t1_ParamLimits

0x560e,	// (0x000144c9) main_image3_pane_t1

0x5666,	// (0x00014521) main_image3_pane_t2_ParamLimits

0x5666,	// (0x00014521) main_image3_pane_t2

0x56b8,	// (0x00014573) main_image3_pane_t3_ParamLimits

0x56b8,	// (0x00014573) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0001e796) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0001e796) main_image3_pane_t

0x94fa,	// (0x000183b5) grid_sctrl_middle_pane_cp01_ParamLimits

0x94fa,	// (0x000183b5) grid_sctrl_middle_pane_cp01

0x5740,	// (0x000145fb) cell_sctrl_middle_pane_cp01_ParamLimits

0x5740,	// (0x000145fb) cell_sctrl_middle_pane_cp01

0x575d,	// (0x00014618) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x575d,	// (0x00014618) cell_sctrl_middle_pane_cp01_g1

0x948a,	// (0x00018345) main_call4_pane

0x5773,	// (0x0001462e) aid_size_button_call4_ParamLimits

0x5773,	// (0x0001462e) aid_size_button_call4

0x57a6,	// (0x00014661) call4_windows_pane_ParamLimits

0x57a6,	// (0x00014661) call4_windows_pane

0x57c5,	// (0x00014680) grid_call4_button_pane_ParamLimits

0x57c5,	// (0x00014680) grid_call4_button_pane

0x57f8,	// (0x000146b3) call4_windows_conf_pane

0x580f,	// (0x000146ca) popup_call4_audio_first_window_ParamLimits

0x580f,	// (0x000146ca) popup_call4_audio_first_window

0x585f,	// (0x0001471a) popup_call4_audio_second_window_ParamLimits

0x585f,	// (0x0001471a) popup_call4_audio_second_window

0x5876,	// (0x00014731) popup_call4_audio_wait_window_ParamLimits

0x5876,	// (0x00014731) popup_call4_audio_wait_window

0x5884,	// (0x0001473f) cell_call4_button_pane_ParamLimits

0x5884,	// (0x0001473f) cell_call4_button_pane

0x58a9,	// (0x00014764) bg_button_pane_cp09_ParamLimits

0x58a9,	// (0x00014764) bg_button_pane_cp09

0x58b5,	// (0x00014770) cell_call4_button_pane_g1_ParamLimits

0x58b5,	// (0x00014770) cell_call4_button_pane_g1

0x58db,	// (0x00014796) cell_call4_button_pane_t1_ParamLimits

0x58db,	// (0x00014796) cell_call4_button_pane_t1

0xcfdf,	// (0x0001be9a) popup_call4_audio_conf_window_ParamLimits

0xcfdf,	// (0x0001be9a) popup_call4_audio_conf_window

0x4aa1,	// (0x0001395c) mup3_progress_pane_t1_ParamLimits

0x4ac0,	// (0x0001397b) mup3_progress_pane_t2_ParamLimits

0xc69f,	// (0x0001b55a) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x0001e666) mup3_progress_pane_t_ParamLimits

0xc6bc,	// (0x0001b577) mup_progress_pane_cp03_ParamLimits

0x509e,	// (0x00013f59) mup3_control_keys_pane_g4_copy1

0xcecc,	// (0x0001bd87) mp4_rocker2_pane_ParamLimits

0xcecc,	// (0x0001bd87) mp4_rocker2_pane

0xcff3,	// (0x0001beae) mp4_rocker2_pane_g1

0xcffb,	// (0x0001beb6) mp4_rocker2_pane_g2

0xd003,	// (0x0001bebe) mp4_rocker2_pane_g3

0xd00b,	// (0x0001bec6) mp4_rocker2_pane_g4

0xd013,	// (0x0001bece) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0001e79f) mp4_rocker2_pane_g

0x948a,	// (0x00018345) main_camera4_pane

0x948a,	// (0x00018345) main_video4_pane

0x530f,	// (0x000141ca) main_video_tele_dialer_pane_t1_ParamLimits

0x530f,	// (0x000141ca) main_video_tele_dialer_pane_t1

0x5328,	// (0x000141e3) main_video_tele_dialer_pane_t2_ParamLimits

0x5328,	// (0x000141e3) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x0001e755) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x0001e755) main_video_tele_dialer_pane_t

0x591d,	// (0x000147d8) cam4_autofocus_pane_ParamLimits

0x591d,	// (0x000147d8) cam4_autofocus_pane

0x5933,	// (0x000147ee) cam4_image_uncrop_pane_ParamLimits

0x5933,	// (0x000147ee) cam4_image_uncrop_pane

0x594d,	// (0x00014808) cam4_indicators_pane_ParamLimits

0x594d,	// (0x00014808) cam4_indicators_pane

0x5978,	// (0x00014833) main_camera4_pane_g1_ParamLimits

0x5978,	// (0x00014833) main_camera4_pane_g1

0x598a,	// (0x00014845) main_camera4_pane_g2_ParamLimits

0x598a,	// (0x00014845) main_camera4_pane_g2

0x599d,	// (0x00014858) main_camera4_pane_g3_ParamLimits

0x599d,	// (0x00014858) main_camera4_pane_g3

0x59b0,	// (0x0001486b) main_camera4_pane_g4_ParamLimits

0x59b0,	// (0x0001486b) main_camera4_pane_g4

0x59c3,	// (0x0001487e) main_camera4_pane_g5_ParamLimits

0x59c3,	// (0x0001487e) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0001e7aa) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0001e7aa) main_camera4_pane_g

0x59e7,	// (0x000148a2) main_camera4_pane_t1_ParamLimits

0x59e7,	// (0x000148a2) main_camera4_pane_t1

0xc5b0,	// (0x0001b46b) bg_tb_trans_pane_cp06

0xd03f,	// (0x0001befa) cam4_indicators_pane_g1

0xd050,	// (0x0001bf0b) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0001e7c5) cam4_indicators_pane_g

0xd068,	// (0x0001bf23) cam4_indicators_pane_t1

0x5a4b,	// (0x00014906) main_video4_pane_g1_ParamLimits

0x5a4b,	// (0x00014906) main_video4_pane_g1

0x5a5a,	// (0x00014915) main_video4_pane_g2_ParamLimits

0x5a5a,	// (0x00014915) main_video4_pane_g2

0x5a69,	// (0x00014924) main_video4_pane_g3_ParamLimits

0x5a69,	// (0x00014924) main_video4_pane_g3

0x5a78,	// (0x00014933) main_video4_pane_g4_ParamLimits

0x5a78,	// (0x00014933) main_video4_pane_g4

0x0004,

0xf911,	// (0x0001e7cc) main_video4_pane_g_ParamLimits

0xf911,	// (0x0001e7cc) main_video4_pane_g

0x5a96,	// (0x00014951) vid4_indicators_pane_ParamLimits

0x5a96,	// (0x00014951) vid4_indicators_pane

0x5ac4,	// (0x0001497f) video4_image_uncrop_cif_pane_ParamLimits

0x5ac4,	// (0x0001497f) video4_image_uncrop_cif_pane

0x5ade,	// (0x00014999) video4_image_uncrop_nhd_pane_ParamLimits

0x5ade,	// (0x00014999) video4_image_uncrop_nhd_pane

0x5933,	// (0x000147ee) video4_image_uncrop_vga_pane_ParamLimits

0x5933,	// (0x000147ee) video4_image_uncrop_vga_pane

0x94fa,	// (0x000183b5) bg_tb_trans_pane_cp07

0xd092,	// (0x0001bf4d) vid4_indicators_pane_g1

0xd0a6,	// (0x0001bf61) vid4_indicators_pane_g2

0xd0ba,	// (0x0001bf75) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0001e7d7) vid4_indicators_pane_g

0xd0e7,	// (0x0001bfa2) vid4_indicators_pane_t1

0x5af2,	// (0x000149ad) cam4_autofocus_pane_g1

0x5afa,	// (0x000149b5) cam4_autofocus_pane_g2

0x5b02,	// (0x000149bd) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0001e7e2) cam4_autofocus_pane_g

0x5b0a,	// (0x000149c5) cam4_autofocus_pane_g3_copy1

0x5357,	// (0x00014212) video_down_pane_cp_t1

0x5365,	// (0x00014220) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x0001e75a) video_down_pane_cp_t

0x94fa,	// (0x000183b5) popup_vitu2_window_ParamLimits

0x94fa,	// (0x000183b5) popup_vitu2_window

0x5b12,	// (0x000149cd) aid_size_cell2_itu2_ParamLimits

0x5b12,	// (0x000149cd) aid_size_cell2_itu2

0x5b38,	// (0x000149f3) aid_size_cell_itu2_ParamLimits

0x5b38,	// (0x000149f3) aid_size_cell_itu2

0x5b94,	// (0x00014a4f) bg_popup_window_pane_cp09_ParamLimits

0x5b94,	// (0x00014a4f) bg_popup_window_pane_cp09

0x5ba2,	// (0x00014a5d) field_vitu2_entry_pane_ParamLimits

0x5ba2,	// (0x00014a5d) field_vitu2_entry_pane

0x5bc8,	// (0x00014a83) grid_vitu2_function_pane_ParamLimits

0x5bc8,	// (0x00014a83) grid_vitu2_function_pane

0x5c19,	// (0x00014ad4) grid_vitu2_itu_pane_ParamLimits

0x5c19,	// (0x00014ad4) grid_vitu2_itu_pane

0x5caf,	// (0x00014b6a) cell_vitu2_itu_pane_ParamLimits

0x5caf,	// (0x00014b6a) cell_vitu2_itu_pane

0x5cdb,	// (0x00014b96) cell_vitu2_function_pane_ParamLimits

0x5cdb,	// (0x00014b96) cell_vitu2_function_pane

0xd0fe,	// (0x0001bfb9) bg_popup_call_pane_cp08_ParamLimits

0xd0fe,	// (0x0001bfb9) bg_popup_call_pane_cp08

0xd115,	// (0x0001bfd0) field_vitu2_entry_pane_g1

0xd121,	// (0x0001bfdc) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0001e7e9) field_vitu2_entry_pane_g

0x5d1a,	// (0x00014bd5) field_vitu2_entry_pane_t1_ParamLimits

0x5d1a,	// (0x00014bd5) field_vitu2_entry_pane_t1

0xd13b,	// (0x0001bff6) field_vitu2_entry_pane_t2_ParamLimits

0xd13b,	// (0x0001bff6) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0001e7f0) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0001e7f0) field_vitu2_entry_pane_t

0x5d49,	// (0x00014c04) bg_button_pane_cp010_ParamLimits

0x5d49,	// (0x00014c04) bg_button_pane_cp010

0xd160,	// (0x0001c01b) cell_vitu2_itu_pane_g1

0x5d65,	// (0x00014c20) cell_vitu2_itu_pane_t1_ParamLimits

0x5d65,	// (0x00014c20) cell_vitu2_itu_pane_t1

0x5dc3,	// (0x00014c7e) cell_vitu2_itu_pane_t2_ParamLimits

0x5dc3,	// (0x00014c7e) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0001e7fa) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0001e7fa) cell_vitu2_itu_pane_t

0x94fa,	// (0x000183b5) bg_button_pane_cp011

0x5eaf,	// (0x00014d6a) cell_vitu2_function_pane_g1

0x948a,	// (0x00018345) main_myfav_hc_pane

0x5708,	// (0x000145c3) popup_image3_note_pane_ParamLimits

0x5708,	// (0x000145c3) popup_image3_note_pane

0x5724,	// (0x000145df) popup_image3_tool_bar_pane_ParamLimits

0x5724,	// (0x000145df) popup_image3_tool_bar_pane

0x5e51,	// (0x00014d0c) cell_vitu2_itu_pane_t3_ParamLimits

0x5e51,	// (0x00014d0c) cell_vitu2_itu_pane_t3

0x948a,	// (0x00018345) bg_popup_trans_pane

0xd172,	// (0x0001c02d) grid_image3_tool_bar_pane

0xd17c,	// (0x0001c037) bg_popup_trans_pane_g1

0xa132,	// (0x00018fed) bg_popup_trans_pane_g2

0xd184,	// (0x0001c03f) bg_popup_trans_pane_g3

0xd18c,	// (0x0001c047) bg_popup_trans_pane_g4

0xd194,	// (0x0001c04f) bg_popup_trans_pane_g5

0xd19c,	// (0x0001c057) bg_popup_trans_pane_g6

0xd1a4,	// (0x0001c05f) bg_popup_trans_pane_g7

0xd1ac,	// (0x0001c067) bg_popup_trans_pane_g8

0xa112,	// (0x00018fcd) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0001e801) bg_popup_trans_pane_g

0xd1b4,	// (0x0001c06f) cell_image3_tool_bar_pane_ParamLimits

0xd1b4,	// (0x0001c06f) cell_image3_tool_bar_pane

0xc36b,	// (0x0001b226) cell_image3_tool_bar_pane_g1

0x948a,	// (0x00018345) bg_popup_trans_pane_cp1

0xd1c8,	// (0x0001c083) popup_image3_note_pane_t1

0xd1d6,	// (0x0001c091) popup_image3_note_pane_t2

0xd1e4,	// (0x0001c09f) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0001e814) popup_image3_note_pane_t

0xd1f2,	// (0x0001c0ad) popup_image3_note_pane_t3_copy1

0x5ec3,	// (0x00014d7e) bg_myfav_hc_instruction_pane_ParamLimits

0x5ec3,	// (0x00014d7e) bg_myfav_hc_instruction_pane

0x5ed7,	// (0x00014d92) cell_myfav_contact_pane_ParamLimits

0x5ed7,	// (0x00014d92) cell_myfav_contact_pane

0x5ef5,	// (0x00014db0) cell_myfav_contact_pane_cp1_ParamLimits

0x5ef5,	// (0x00014db0) cell_myfav_contact_pane_cp1

0x5f0d,	// (0x00014dc8) cell_myfav_contact_pane_cp2_ParamLimits

0x5f0d,	// (0x00014dc8) cell_myfav_contact_pane_cp2

0x5f25,	// (0x00014de0) cell_myfav_contact_pane_cp3_ParamLimits

0x5f25,	// (0x00014de0) cell_myfav_contact_pane_cp3

0x5f3c,	// (0x00014df7) cell_myfav_contact_pane_cp4_ParamLimits

0x5f3c,	// (0x00014df7) cell_myfav_contact_pane_cp4

0x5f54,	// (0x00014e0f) cell_myfav_contact_pane_cp5_ParamLimits

0x5f54,	// (0x00014e0f) cell_myfav_contact_pane_cp5

0x5f68,	// (0x00014e23) cell_myfav_contact_pane_cp6_ParamLimits

0x5f68,	// (0x00014e23) cell_myfav_contact_pane_cp6

0x5f7e,	// (0x00014e39) cell_myfav_contact_pane_cp7_ParamLimits

0x5f7e,	// (0x00014e39) cell_myfav_contact_pane_cp7

0xd200,	// (0x0001c0bb) listscroll_gen_pane_cp05

0x5f98,	// (0x00014e53) main_myfav_hc_pane_g1_ParamLimits

0x5f98,	// (0x00014e53) main_myfav_hc_pane_g1

0x5fb2,	// (0x00014e6d) main_myfav_hc_pane_g2_ParamLimits

0x5fb2,	// (0x00014e6d) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0001e81b) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0001e81b) main_myfav_hc_pane_g

0x5fe4,	// (0x00014e9f) main_myfav_hc_pane_t1_ParamLimits

0x5fe4,	// (0x00014e9f) main_myfav_hc_pane_t1

0xd248,	// (0x0001c103) main_myfav_hc_pane_t2_ParamLimits

0xd248,	// (0x0001c103) main_myfav_hc_pane_t2

0xd25a,	// (0x0001c115) main_myfav_hc_pane_t3_ParamLimits

0xd25a,	// (0x0001c115) main_myfav_hc_pane_t3

0x5ffb,	// (0x00014eb6) main_myfav_hc_pane_t4_ParamLimits

0x5ffb,	// (0x00014eb6) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0001e822) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0001e822) main_myfav_hc_pane_t

0xc36b,	// (0x0001b226) bg_myfav_hc_instruction_pane_g1

0xd26c,	// (0x0001c127) cell_myfav_contact_pane_g1_ParamLimits

0xd26c,	// (0x0001c127) cell_myfav_contact_pane_g1

0xd26c,	// (0x0001c127) cell_myfav_contact_pane_g2_ParamLimits

0xd26c,	// (0x0001c127) cell_myfav_contact_pane_g2

0xd278,	// (0x0001c133) cell_myfav_contact_pane_g3_ParamLimits

0xd278,	// (0x0001c133) cell_myfav_contact_pane_g3

0xc689,	// (0x0001b544) cell_myfav_contact_pane_g4_ParamLimits

0xc689,	// (0x0001b544) cell_myfav_contact_pane_g4

0xd285,	// (0x0001c140) cell_myfav_contact_pane_g5_ParamLimits

0xd285,	// (0x0001c140) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0001e82d) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0001e82d) cell_myfav_contact_pane_g

0x5fcc,	// (0x00014e87) main_myfav_hc_pane_g3_ParamLimits

0x5fcc,	// (0x00014e87) main_myfav_hc_pane_g3

0x04f4,	// (0x0000f3af) popup_adpt_find_window

0x6023,	// (0x00014ede) afind_page_pane_ParamLimits

0x6023,	// (0x00014ede) afind_page_pane

0x6038,	// (0x00014ef3) aid_size_cell_afind_ParamLimits

0x6038,	// (0x00014ef3) aid_size_cell_afind

0x6056,	// (0x00014f11) bg_popup_sub_pane_cp09_ParamLimits

0x6056,	// (0x00014f11) bg_popup_sub_pane_cp09

0x6063,	// (0x00014f1e) find_pane_cp01_ParamLimits

0x6063,	// (0x00014f1e) find_pane_cp01

0xd291,	// (0x0001c14c) grid_afind_control_pane_ParamLimits

0xd291,	// (0x0001c14c) grid_afind_control_pane

0x6070,	// (0x00014f2b) grid_afind_pane_ParamLimits

0x6070,	// (0x00014f2b) grid_afind_pane

0x608f,	// (0x00014f4a) cell_afind_pane_ParamLimits

0x608f,	// (0x00014f4a) cell_afind_pane

0xc36b,	// (0x0001b226) afind_page_pane_g1

0x60f6,	// (0x00014fb1) afind_page_pane_g2

0x60ff,	// (0x00014fba) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0001e838) afind_page_pane_g

0x6108,	// (0x00014fc3) afind_page_pane_t1

0xd2a5,	// (0x0001c160) cell_afind_grid_control_pane_ParamLimits

0xd2a5,	// (0x0001c160) cell_afind_grid_control_pane

0xcf67,	// (0x0001be22) bg_button_pane_cp69_ParamLimits

0xcf67,	// (0x0001be22) bg_button_pane_cp69

0x6128,	// (0x00014fe3) cell_afind_pane_g1_ParamLimits

0x6128,	// (0x00014fe3) cell_afind_pane_g1

0x6135,	// (0x00014ff0) cell_afind_pane_t1_ParamLimits

0x6135,	// (0x00014ff0) cell_afind_pane_t1

0x9f2b,	// (0x00018de6) bg_button_pane_cp72

0xd2b4,	// (0x0001c16f) cell_afind_grid_control_pane_g1

0x302d,	// (0x00011ee8) aid_image_placing_area_ParamLimits

0x302d,	// (0x00011ee8) aid_image_placing_area

0xc9af,	// (0x0001b86a) field_vitu_entry_pane_g1_ParamLimits

0xc9af,	// (0x0001b86a) field_vitu_entry_pane_g1

0xc9bb,	// (0x0001b876) field_vitu_entry_pane_g2_ParamLimits

0xc9bb,	// (0x0001b876) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x0001e6e5) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x0001e6e5) field_vitu_entry_pane_g

0x5167,	// (0x00014022) cell_vitu_itu_pane_g1_ParamLimits

0x51a9,	// (0x00014064) cell_vitu_itu_pane_t3_ParamLimits

0x51a9,	// (0x00014064) cell_vitu_itu_pane_t3

0xcf10,	// (0x0001bdcb) mp4_progress_pane_t1_ParamLimits

0xcf29,	// (0x0001bde4) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0001e77e) mp4_progress_pane_t_ParamLimits

0xcf42,	// (0x0001bdfd) mup_progress_pane_cp04_ParamLimits

0x600f,	// (0x00014eca) main_myfav_hc_pane_t5_ParamLimits

0x600f,	// (0x00014eca) main_myfav_hc_pane_t5

0x94b0,	// (0x0001836b) aid_zoom_text_primary

0x04f4,	// (0x0000f3af) popup_adpt_find_window_ParamLimits

0x94fa,	// (0x000183b5) main_cam_set_pane

0x5964,	// (0x0001481f) cam4_zoom_pane_ParamLimits

0x5964,	// (0x0001481f) cam4_zoom_pane

0x6147,	// (0x00015002) main_cam_set_pane_g1_ParamLimits

0x6147,	// (0x00015002) main_cam_set_pane_g1

0x6155,	// (0x00015010) main_cam_set_pane_g2_ParamLimits

0x6155,	// (0x00015010) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0001e83f) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0001e83f) main_cam_set_pane_g

0x6176,	// (0x00015031) main_cam_set_pane_t1_ParamLimits

0x6176,	// (0x00015031) main_cam_set_pane_t1

0x6191,	// (0x0001504c) main_cset_listscroll_pane_ParamLimits

0x6191,	// (0x0001504c) main_cset_listscroll_pane

0x61b1,	// (0x0001506c) main_cset_slider_pane_ParamLimits

0x61b1,	// (0x0001506c) main_cset_slider_pane

0xd2c5,	// (0x0001c180) main_cset_list_pane_ParamLimits

0xd2c5,	// (0x0001c180) main_cset_list_pane

0xd2d5,	// (0x0001c190) scroll_pane_cp028

0x61d7,	// (0x00015092) aid_area_touch_slider

0x61f3,	// (0x000150ae) cset_slider_pane

0x621d,	// (0x000150d8) main_cset_slider_pane_g1

0x6232,	// (0x000150ed) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0001e844) main_cset_slider_pane_g

0xd326,	// (0x0001c1e1) main_cset_slider_pane_t1

0x62d6,	// (0x00015191) main_cset_slider_pane_t2

0x62f0,	// (0x000151ab) main_cset_slider_pane_t3

0x630a,	// (0x000151c5) main_cset_slider_pane_t4

0x6324,	// (0x000151df) main_cset_slider_pane_t5

0x633e,	// (0x000151f9) main_cset_slider_pane_t6

0x6353,	// (0x0001520e) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0001e869) main_cset_slider_pane_t

0x6457,	// (0x00015312) cset_list_set_pane_ParamLimits

0x6457,	// (0x00015312) cset_list_set_pane

0x6469,	// (0x00015324) aid_position_infowindow_above

0x6471,	// (0x0001532c) aid_position_infowindow_below

0x6479,	// (0x00015334) cset_list_set_pane_g1_ParamLimits

0x6479,	// (0x00015334) cset_list_set_pane_g1

0x6485,	// (0x00015340) cset_list_set_pane_g3_ParamLimits

0x6485,	// (0x00015340) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0001e888) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0001e888) cset_list_set_pane_g

0x6494,	// (0x0001534f) cset_list_set_pane_t1_ParamLimits

0x6494,	// (0x0001534f) cset_list_set_pane_t1

0x94fa,	// (0x000183b5) list_highlight_pane_cp021_ParamLimits

0x94fa,	// (0x000183b5) list_highlight_pane_cp021

0xaaff,	// (0x000199ba) cset_slider_pane_g1

0xab11,	// (0x000199cc) cset_slider_pane_g2

0xab08,	// (0x000199c3) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0001e88d) cset_slider_pane_g

0xd3c6,	// (0x0001c281) aid_area_touch_cam4_zoom

0xd3ce,	// (0x0001c289) cam4_zoom_cont_pane

0xd3d6,	// (0x0001c291) cam4_zoom_pane_g1

0xd3de,	// (0x0001c299) cam4_zoom_pane_g2

0x64a9,	// (0x00015364) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0001e894) cam4_zoom_pane_g

0xcba6,	// (0x0001ba61) cam4_zoom_cont_pane_g1

0xd3e6,	// (0x0001c2a1) cam4_zoom_cont_pane_g2

0xd3ef,	// (0x0001c2aa) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0001e89b) cam4_zoom_cont_pane_g

0x5791,	// (0x0001464c) call4_image_pane_ParamLimits

0x5791,	// (0x0001464c) call4_image_pane

0x57f8,	// (0x000146b3) call4_windows_conf_pane_ParamLimits

0x583d,	// (0x000146f8) popup_call4_audio_in_window_ParamLimits

0x583d,	// (0x000146f8) popup_call4_audio_in_window

0x948a,	// (0x00018345) bg_popup_call2_act_pane_cp02

0xcfd7,	// (0x0001be92) call4_list_conf_pane

0xc36b,	// (0x0001b226) call4_image_pane_g1

0xc36b,	// (0x0001b226) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0001e5a6) call4_image_pane_g

0xd3f8,	// (0x0001c2b3) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3f8,	// (0x0001c2b3) list_single_graphic_popup_conf4_pane

0x948a,	// (0x00018345) list_highlight_pane_cp022

0xd40b,	// (0x0001c2c6) list_single_graphic_popup_conf4_pane_g1

0xa6e9,	// (0x000195a4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0001e8a2) list_single_graphic_popup_conf4_pane_g

0xd413,	// (0x0001c2ce) list_single_graphic_popup_conf4_pane_t1

0x15df,	// (0x0001049a) popup_vtel_slider_window_ParamLimits

0x15df,	// (0x0001049a) popup_vtel_slider_window

0xcf55,	// (0x0001be10) dialer2_ne_pane_t2_ParamLimits

0xcf55,	// (0x0001be10) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0001e783) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0001e783) dialer2_ne_pane_t

0xc150,	// (0x0001b00b) bg_popup_sub_pane_cp010_ParamLimits

0xc150,	// (0x0001b00b) bg_popup_sub_pane_cp010

0x64b1,	// (0x0001536c) popup_vtel_slider_window_g1_ParamLimits

0x64b1,	// (0x0001536c) popup_vtel_slider_window_g1

0x64c4,	// (0x0001537f) popup_vtel_slider_window_g2_ParamLimits

0x64c4,	// (0x0001537f) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0001e8a7) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0001e8a7) popup_vtel_slider_window_g

0x651a,	// (0x000153d5) vtel_slider_pane_ParamLimits

0x651a,	// (0x000153d5) vtel_slider_pane

0x653c,	// (0x000153f7) vtel_slider_pane_g1_ParamLimits

0x653c,	// (0x000153f7) vtel_slider_pane_g1

0x6550,	// (0x0001540b) vtel_slider_pane_g2_ParamLimits

0x6550,	// (0x0001540b) vtel_slider_pane_g2

0x6568,	// (0x00015423) vtel_slider_pane_g3_ParamLimits

0x6568,	// (0x00015423) vtel_slider_pane_g3

0x653c,	// (0x000153f7) vtel_slider_pane_g4_ParamLimits

0x653c,	// (0x000153f7) vtel_slider_pane_g4

0x657e,	// (0x00015439) vtel_slider_pane_g5_ParamLimits

0x657e,	// (0x00015439) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0001e8b0) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0001e8b0) vtel_slider_pane_g

0x94fa,	// (0x000183b5) main_gallery2_pane

0x5b64,	// (0x00014a1f) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b64,	// (0x00014a1f) aid_size_row_itut2_dropdow_list

0x5bf0,	// (0x00014aab) grid_vitu2_function_top_pane_ParamLimits

0x5bf0,	// (0x00014aab) grid_vitu2_function_top_pane

0x5c5a,	// (0x00014b15) popup_vitu2_dropdown_list_window_ParamLimits

0x5c5a,	// (0x00014b15) popup_vitu2_dropdown_list_window

0x5c83,	// (0x00014b3e) popup_vitu2_match_list_window

0x6594,	// (0x0001544f) cell_vitu2_function_top_pane_ParamLimits

0x6594,	// (0x0001544f) cell_vitu2_function_top_pane

0x65ac,	// (0x00015467) cell_vitu2_function_top_pane_cp01_ParamLimits

0x65ac,	// (0x00015467) cell_vitu2_function_top_pane_cp01

0x65c8,	// (0x00015483) cell_vitu2_function_top_wide_pane_ParamLimits

0x65c8,	// (0x00015483) cell_vitu2_function_top_wide_pane

0x94fa,	// (0x000183b5) bg_button_pane_cp012

0x65e4,	// (0x0001549f) cell_vitu2_function_top_pane_g1

0xd437,	// (0x0001c2f2) bg_button_pane_cp013_ParamLimits

0xd437,	// (0x0001c2f2) bg_button_pane_cp013

0x65f8,	// (0x000154b3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65f8,	// (0x000154b3) cell_vitu2_function_top_wide_pane_g1

0x94fa,	// (0x000183b5) bg_popup_sub_pane_cp20

0x6610,	// (0x000154cb) list_vitu2_match_list_pane

0xd17c,	// (0x0001c037) bg_popup_sub_pane_cp20_g1

0xd184,	// (0x0001c03f) bg_popup_sub_pane_cp20_g2

0xa132,	// (0x00018fed) bg_popup_sub_pane_cp20_g3

0xd18c,	// (0x0001c047) bg_popup_sub_pane_cp20_g4

0xa112,	// (0x00018fcd) bg_popup_sub_pane_cp20_g5

0xd453,	// (0x0001c30e) bg_popup_sub_pane_cp20_g6

0xd19c,	// (0x0001c057) bg_popup_sub_pane_cp20_g7

0xd1a4,	// (0x0001c05f) bg_popup_sub_pane_cp20_g8

0xd1ac,	// (0x0001c067) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0001e8bb) bg_popup_sub_pane_cp20_g

0xd45b,	// (0x0001c316) list_vitu2_match_list_item_pane_ParamLimits

0xd45b,	// (0x0001c316) list_vitu2_match_list_item_pane

0xd46d,	// (0x0001c328) list_vitu2_match_list_item_pane_t1

0x948a,	// (0x00018345) bg_popup_sub_pane_cp21

0xa5a2,	// (0x0001945d) grid_vitu2_dropdown_list_pane

0x667e,	// (0x00015539) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x667e,	// (0x00015539) cell_vitu2_dropdown_list_char_pane

0x669f,	// (0x0001555a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x669f,	// (0x0001555a) cell_vitu2_dropdown_list_ctrl_pane

0xd47b,	// (0x0001c336) cell_vitu2_dropdown_list_char_pane_g1

0xd484,	// (0x0001c33f) cell_vitu2_dropdown_list_char_pane_g2

0xd48d,	// (0x0001c348) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0001e8d8) cell_vitu2_dropdown_list_char_pane_g

0x66cb,	// (0x00015586) cell_vitu2_dropdown_list_char_pane_t1

0x66d9,	// (0x00015594) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x66d9,	// (0x00015594) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66e6,	// (0x000155a1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66e6,	// (0x000155a1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66f3,	// (0x000155ae) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66f3,	// (0x000155ae) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6700,	// (0x000155bb) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6700,	// (0x000155bb) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc5b0,	// (0x0001b46b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc5b0,	// (0x0001b46b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0001e8df) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0001e8df) cell_vitu2_dropdown_list_ctrl_pane_g

0x671c,	// (0x000155d7) aid_size_cell_gallery2_ParamLimits

0x671c,	// (0x000155d7) aid_size_cell_gallery2

0x673a,	// (0x000155f5) grid_gallery2_pane_ParamLimits

0x673a,	// (0x000155f5) grid_gallery2_pane

0x6754,	// (0x0001560f) scroll_pane_cp029_ParamLimits

0x6754,	// (0x0001560f) scroll_pane_cp029

0x6765,	// (0x00015620) cell_gallery2_pane_ParamLimits

0x6765,	// (0x00015620) cell_gallery2_pane

0xd496,	// (0x0001c351) cell_gallery2_pane_g2

0x67c4,	// (0x0001567f) cell_gallery2_pane_g3

0xd49e,	// (0x0001c359) cell_gallery2_pane_g4

0xd4a6,	// (0x0001c361) cell_gallery2_pane_g5

0x9ecf,	// (0x00018d8a) grid_highlight_pane_cp10

0x5c83,	// (0x00014b3e) popup_vitu2_match_list_window_ParamLimits

0x5c98,	// (0x00014b53) popup_vitu2_query_window_ParamLimits

0x5c98,	// (0x00014b53) popup_vitu2_query_window

0x948a,	// (0x00018345) bg_vitu2_candi_button_pane

0xd47b,	// (0x0001c336) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd484,	// (0x0001c33f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd48d,	// (0x0001c348) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x67cc,	// (0x00015687) bg_button_pane_cp015

0x67e0,	// (0x0001569b) bg_button_pane_cp016

0x67f3,	// (0x000156ae) bg_button_pane_cp017

0xbe50,	// (0x0001ad0b) bg_popup_sub_pane_cp22

0xd4ae,	// (0x0001c369) popup_vitu2_query_window_g1

0x6838,	// (0x000156f3) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0001e8ea) popup_vitu2_query_window_g

0x6857,	// (0x00015712) popup_vitu2_query_window_t1_ParamLimits

0x6857,	// (0x00015712) popup_vitu2_query_window_t1

0x688c,	// (0x00015747) popup_vitu2_query_window_t2_ParamLimits

0x688c,	// (0x00015747) popup_vitu2_query_window_t2

0x689e,	// (0x00015759) popup_vitu2_query_window_t3_ParamLimits

0x689e,	// (0x00015759) popup_vitu2_query_window_t3

0x68c6,	// (0x00015781) popup_vitu2_query_window_t4_ParamLimits

0x68c6,	// (0x00015781) popup_vitu2_query_window_t4

0x68e7,	// (0x000157a2) popup_vitu2_query_window_t5_ParamLimits

0x68e7,	// (0x000157a2) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0001e8f1) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0001e8f1) popup_vitu2_query_window_t

0xd2bd,	// (0x0001c178) main_cset_text_pane

0x61d7,	// (0x00015092) aid_area_touch_slider_ParamLimits

0x61f3,	// (0x000150ae) cset_slider_pane_ParamLimits

0x621d,	// (0x000150d8) main_cset_slider_pane_g1_ParamLimits

0x6232,	// (0x000150ed) main_cset_slider_pane_g2_ParamLimits

0xd2de,	// (0x0001c199) main_cset_slider_pane_g3_ParamLimits

0xd2de,	// (0x0001c199) main_cset_slider_pane_g3

0x6247,	// (0x00015102) main_cset_slider_pane_g4_ParamLimits

0x6247,	// (0x00015102) main_cset_slider_pane_g4

0x6256,	// (0x00015111) main_cset_slider_pane_g5_ParamLimits

0x6256,	// (0x00015111) main_cset_slider_pane_g5

0x6262,	// (0x0001511d) main_cset_slider_pane_g6_ParamLimits

0x6262,	// (0x0001511d) main_cset_slider_pane_g6

0xf989,	// (0x0001e844) main_cset_slider_pane_g_ParamLimits

0xd326,	// (0x0001c1e1) main_cset_slider_pane_t1_ParamLimits

0x62d6,	// (0x00015191) main_cset_slider_pane_t2_ParamLimits

0x62f0,	// (0x000151ab) main_cset_slider_pane_t3_ParamLimits

0x630a,	// (0x000151c5) main_cset_slider_pane_t4_ParamLimits

0x6324,	// (0x000151df) main_cset_slider_pane_t5_ParamLimits

0x633e,	// (0x000151f9) main_cset_slider_pane_t6_ParamLimits

0x6353,	// (0x0001520e) main_cset_slider_pane_t7_ParamLimits

0x637d,	// (0x00015238) main_cset_slider_pane_t8_ParamLimits

0x637d,	// (0x00015238) main_cset_slider_pane_t8

0x63a5,	// (0x00015260) main_cset_slider_pane_t9_ParamLimits

0x63a5,	// (0x00015260) main_cset_slider_pane_t9

0x63cd,	// (0x00015288) main_cset_slider_pane_t10_ParamLimits

0x63cd,	// (0x00015288) main_cset_slider_pane_t10

0x63f5,	// (0x000152b0) main_cset_slider_pane_t11_ParamLimits

0x63f5,	// (0x000152b0) main_cset_slider_pane_t11

0x641d,	// (0x000152d8) main_cset_slider_pane_t12_ParamLimits

0x641d,	// (0x000152d8) main_cset_slider_pane_t12

0x643a,	// (0x000152f5) main_cset_slider_pane_t13_ParamLimits

0x643a,	// (0x000152f5) main_cset_slider_pane_t13

0xf9ae,	// (0x0001e869) main_cset_slider_pane_t_ParamLimits

0x948a,	// (0x00018345) bg_popup_sub_pane_cp011

0xd4ba,	// (0x0001c375) main_cset_text_pane_g1

0xd4c2,	// (0x0001c37d) main_cset_text_pane_t1

0xd4d0,	// (0x0001c38b) main_cset_text_pane_t2

0xd4de,	// (0x0001c399) main_cset_text_pane_t3

0xd4ec,	// (0x0001c3a7) main_cset_text_pane_t4

0xd4fa,	// (0x0001c3b5) main_cset_text_pane_t5

0xd508,	// (0x0001c3c3) main_cset_text_pane_t6

0xd516,	// (0x0001c3d1) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0001e900) main_cset_text_pane_t

0x948a,	// (0x00018345) main_cam4_burst_pane

0x948a,	// (0x00018345) main_cam5_pane

0x6116,	// (0x00014fd1) bg_button_pane_cp019

0x611f,	// (0x00014fda) bg_button_pane_cp020

0xd2ea,	// (0x0001c1a5) main_cset_slider_pane_g7_ParamLimits

0xd2ea,	// (0x0001c1a5) main_cset_slider_pane_g7

0xd2f6,	// (0x0001c1b1) main_cset_slider_pane_g8_ParamLimits

0xd2f6,	// (0x0001c1b1) main_cset_slider_pane_g8

0x6276,	// (0x00015131) main_cset_slider_pane_g9_ParamLimits

0x6276,	// (0x00015131) main_cset_slider_pane_g9

0x6282,	// (0x0001513d) main_cset_slider_pane_g10_ParamLimits

0x6282,	// (0x0001513d) main_cset_slider_pane_g10

0x628e,	// (0x00015149) main_cset_slider_pane_g11_ParamLimits

0x628e,	// (0x00015149) main_cset_slider_pane_g11

0x629a,	// (0x00015155) main_cset_slider_pane_g12_ParamLimits

0x629a,	// (0x00015155) main_cset_slider_pane_g12

0x62a6,	// (0x00015161) main_cset_slider_pane_g13_ParamLimits

0x62a6,	// (0x00015161) main_cset_slider_pane_g13

0x62b2,	// (0x0001516d) main_cset_slider_pane_g14_ParamLimits

0x62b2,	// (0x0001516d) main_cset_slider_pane_g14

0x62be,	// (0x00015179) main_cset_slider_pane_g15_ParamLimits

0x62be,	// (0x00015179) main_cset_slider_pane_g15

0xd354,	// (0x0001c20f) main_cset_slider_pane_t14_ParamLimits

0xd354,	// (0x0001c20f) main_cset_slider_pane_t14

0xd38d,	// (0x0001c248) main_cset_slider_pane_t15_ParamLimits

0xd38d,	// (0x0001c248) main_cset_slider_pane_t15

0x695e,	// (0x00015819) aid_cam4_burst_size_cell_ParamLimits

0x695e,	// (0x00015819) aid_cam4_burst_size_cell

0x697e,	// (0x00015839) grid_cam4_burst_pane_ParamLimits

0x697e,	// (0x00015839) grid_cam4_burst_pane

0x69b6,	// (0x00015871) linegrid_cam4_burst_pane_ParamLimits

0x69b6,	// (0x00015871) linegrid_cam4_burst_pane

0xd524,	// (0x0001c3df) scroll_pane_cp30_ParamLimits

0xd524,	// (0x0001c3df) scroll_pane_cp30

0x69da,	// (0x00015895) cell_cam4_burst_pane_ParamLimits

0x69da,	// (0x00015895) cell_cam4_burst_pane

0xd530,	// (0x0001c3eb) linegrid_cam4_burst_pane_g1_ParamLimits

0xd530,	// (0x0001c3eb) linegrid_cam4_burst_pane_g1

0x6a27,	// (0x000158e2) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a27,	// (0x000158e2) linegrid_cam4_burst_pane_g2

0xd53d,	// (0x0001c3f8) linegrid_cam4_burst_pane_g3_ParamLimits

0xd53d,	// (0x0001c3f8) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0001e90f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0001e90f) linegrid_cam4_burst_pane_g

0x6a38,	// (0x000158f3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a38,	// (0x000158f3) linegrid_cam4_burst_pane_g3_copy1

0xd54a,	// (0x0001c405) linegrid_cam4_burst_pane_g4_ParamLimits

0xd54a,	// (0x0001c405) linegrid_cam4_burst_pane_g4

0x6a52,	// (0x0001590d) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a52,	// (0x0001590d) linegrid_cam4_burst_pane_g5

0x6a63,	// (0x0001591e) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a63,	// (0x0001591e) linegrid_cam4_burst_pane_g6

0xd557,	// (0x0001c412) linegrid_cam4_burst_pane_g7_ParamLimits

0xd557,	// (0x0001c412) linegrid_cam4_burst_pane_g7

0x6a7a,	// (0x00015935) cell_cam4_burst_pane_g1

0xd570,	// (0x0001c42b) main_cam5_pane_t1_ParamLimits

0xd570,	// (0x0001c42b) main_cam5_pane_t1

0xd582,	// (0x0001c43d) main_cam5_pane_t2_ParamLimits

0xd582,	// (0x0001c43d) main_cam5_pane_t2

0xd594,	// (0x0001c44f) main_cam5_pane_t3_ParamLimits

0xd594,	// (0x0001c44f) main_cam5_pane_t3

0xd5a6,	// (0x0001c461) main_cam5_pane_t4_ParamLimits

0xd5a6,	// (0x0001c461) main_cam5_pane_t4

0xd5be,	// (0x0001c479) main_cam5_pane_t5_ParamLimits

0xd5be,	// (0x0001c479) main_cam5_pane_t5

0xd5d2,	// (0x0001c48d) main_cam5_pane_t6_ParamLimits

0xd5d2,	// (0x0001c48d) main_cam5_pane_t6

0xd5e6,	// (0x0001c4a1) main_cam5_pane_t7_ParamLimits

0xd5e6,	// (0x0001c4a1) main_cam5_pane_t7

0xd5f8,	// (0x0001c4b3) main_cam5_pane_t8_ParamLimits

0xd5f8,	// (0x0001c4b3) main_cam5_pane_t8

0xd614,	// (0x0001c4cf) main_cam5_pane_t9_ParamLimits

0xd614,	// (0x0001c4cf) main_cam5_pane_t9

0xd626,	// (0x0001c4e1) main_cam5_pane_t10_ParamLimits

0xd626,	// (0x0001c4e1) main_cam5_pane_t10

0xd638,	// (0x0001c4f3) main_cam5_pane_t11_ParamLimits

0xd638,	// (0x0001c4f3) main_cam5_pane_t11

0xd64a,	// (0x0001c505) main_cam5_pane_t12_ParamLimits

0xd64a,	// (0x0001c505) main_cam5_pane_t12

0xd65f,	// (0x0001c51a) main_cam5_pane_t13_ParamLimits

0xd65f,	// (0x0001c51a) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0001e91b) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0001e91b) main_cam5_pane_t

0x0576,	// (0x0000f431) popup_scut_keymap_window_ParamLimits

0x0576,	// (0x0000f431) popup_scut_keymap_window

0x6a8d,	// (0x00015948) aid_size_cell_brow_shortcut

0x9ecf,	// (0x00018d8a) bg_popup_window_pane_cp010

0x6a99,	// (0x00015954) grid_scut_pane

0x6aa5,	// (0x00015960) cell_scut_pane_ParamLimits

0x6aa5,	// (0x00015960) cell_scut_pane

0x6abc,	// (0x00015977) cell_scut_pane_g1

0xd67c,	// (0x0001c537) cell_scut_pane_t1

0xd68b,	// (0x0001c546) cell_scut_pane_t2

0x6ac5,	// (0x00015980) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0001e936) cell_scut_pane_t

0x4664,	// (0x0001351f) main_mup3_pane_g8_ParamLimits

0x4664,	// (0x0001351f) main_mup3_pane_g8

0x5b7c,	// (0x00014a37) area_vitu2_query_pane_ParamLimits

0x5b7c,	// (0x00014a37) area_vitu2_query_pane

0x6806,	// (0x000156c1) input_focus_pane_cp08

0xd69a,	// (0x0001c555) area_vitu2_query_pane_g1

0x6ad3,	// (0x0001598e) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0001e93d) area_vitu2_query_pane_g

0x6ae4,	// (0x0001599f) area_vitu2_query_pane_t1_ParamLimits

0x6ae4,	// (0x0001599f) area_vitu2_query_pane_t1

0x6af8,	// (0x000159b3) area_vitu2_query_pane_t2_ParamLimits

0x6af8,	// (0x000159b3) area_vitu2_query_pane_t2

0x6b0c,	// (0x000159c7) area_vitu2_query_pane_t3_ParamLimits

0x6b0c,	// (0x000159c7) area_vitu2_query_pane_t3

0xd6a6,	// (0x0001c561) area_vitu2_query_pane_t4_ParamLimits

0xd6a6,	// (0x0001c561) area_vitu2_query_pane_t4

0xd6ce,	// (0x0001c589) area_vitu2_query_pane_t5_ParamLimits

0xd6ce,	// (0x0001c589) area_vitu2_query_pane_t5

0xd6f6,	// (0x0001c5b1) area_vitu2_query_pane_t6_ParamLimits

0xd6f6,	// (0x0001c5b1) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0001e942) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0001e942) area_vitu2_query_pane_t

0x6b34,	// (0x000159ef) bg_button_pane_cp018

0x6b42,	// (0x000159fd) bg_button_pane_cp021

0x6b4e,	// (0x00015a09) bg_button_pane_cp022

0x6b5f,	// (0x00015a1a) input_focus_pane_cp09

0xa7f8,	// (0x000196b3) aid_size_touch_mv_arrow_left

0xa823,	// (0x000196de) aid_size_touch_mv_arrow_right

0xd302,	// (0x0001c1bd) main_cset_slider_pane_g16_ParamLimits

0xd302,	// (0x0001c1bd) main_cset_slider_pane_g16

0xd30e,	// (0x0001c1c9) main_cset_slider_pane_g17_ParamLimits

0xd30e,	// (0x0001c1c9) main_cset_slider_pane_g17

0x6a7a,	// (0x00015935) cell_cam4_burst_pane_g1_ParamLimits

0x948a,	// (0x00018345) compa_mode_pane

0x64d4,	// (0x0001538f) popup_vtel_slider_window_g3_ParamLimits

0x64d4,	// (0x0001538f) popup_vtel_slider_window_g3

0x64eb,	// (0x000153a6) popup_vtel_slider_window_g4_ParamLimits

0x64eb,	// (0x000153a6) popup_vtel_slider_window_g4

0x6502,	// (0x000153bd) popup_vtel_slider_window_t1_ParamLimits

0x6502,	// (0x000153bd) popup_vtel_slider_window_t1

0x948a,	// (0x00018345) main_cl_pane

0xbe78,	// (0x0001ad33) popup_imed_adjust2_window_ParamLimits

0xbe50,	// (0x0001ad0b) bg_tb_trans_pane_cp05_ParamLimits

0xc8e4,	// (0x0001b79f) popup_imed_adjust2_window_g1_ParamLimits

0xc8f3,	// (0x0001b7ae) popup_imed_adjust2_window_g2_ParamLimits

0xc8f3,	// (0x0001b7ae) popup_imed_adjust2_window_g2

0xc8ff,	// (0x0001b7ba) popup_imed_adjust2_window_g3_ParamLimits

0xc8ff,	// (0x0001b7ba) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x0001e6a9) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x0001e6a9) popup_imed_adjust2_window_g

0xc90b,	// (0x0001b7c6) popup_imed_adjust2_window_t1_ParamLimits

0xc923,	// (0x0001b7de) slider_imed_adjust_pane_ParamLimits

0xc937,	// (0x0001b7f2) slider_imed_adjust_pane_g1_ParamLimits

0xc947,	// (0x0001b802) slider_imed_adjust_pane_g2_ParamLimits

0xc957,	// (0x0001b812) slider_imed_adjust_pane_g3_ParamLimits

0xc968,	// (0x0001b823) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x0001e6b0) slider_imed_adjust_pane_g_ParamLimits

0x5905,	// (0x000147c0) aid_touch_area_cam4_ParamLimits

0x5905,	// (0x000147c0) aid_touch_area_cam4

0xd01b,	// (0x0001bed6) battery_pane_cp01

0x59d4,	// (0x0001488f) main_camera4_pane_g6_ParamLimits

0x59d4,	// (0x0001488f) main_camera4_pane_g6

0x59fe,	// (0x000148b9) main_camera4_pane_t2_ParamLimits

0x59fe,	// (0x000148b9) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0001e7b7) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0001e7b7) main_camera4_pane_t

0x5a33,	// (0x000148ee) aid_touch_area_vid4_ParamLimits

0x5a33,	// (0x000148ee) aid_touch_area_vid4

0x5a87,	// (0x00014942) main_video4_pane_g5_ParamLimits

0x5a87,	// (0x00014942) main_video4_pane_g5

0x5aac,	// (0x00014967) vid4_progress_pane_ParamLimits

0x5aac,	// (0x00014967) vid4_progress_pane

0xd31a,	// (0x0001c1d5) main_cset_slider_pane_g18_ParamLimits

0xd31a,	// (0x0001c1d5) main_cset_slider_pane_g18

0xd564,	// (0x0001c41f) cell_cam4_burst_pane_g2_ParamLimits

0xd564,	// (0x0001c41f) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0001e916) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0001e916) cell_cam4_burst_pane_g

0x9c69,	// (0x00018b24) bg_cl_pane_ParamLimits

0x9c69,	// (0x00018b24) bg_cl_pane

0x6b70,	// (0x00015a2b) cl_header_pane_ParamLimits

0x6b70,	// (0x00015a2b) cl_header_pane

0x6b84,	// (0x00015a3f) cl_listscroll_pane_ParamLimits

0x6b84,	// (0x00015a3f) cl_listscroll_pane

0xd742,	// (0x0001c5fd) bg_cl_pane_g1

0xd74a,	// (0x0001c605) bg_cl_pane_g2

0xd752,	// (0x0001c60d) bg_cl_pane_g3

0xd75a,	// (0x0001c615) bg_cl_pane_g4

0xd762,	// (0x0001c61d) bg_cl_pane_g5

0xd76a,	// (0x0001c625) bg_cl_pane_g6

0xd772,	// (0x0001c62d) bg_cl_pane_g7

0xd77a,	// (0x0001c635) bg_cl_pane_g8

0xd782,	// (0x0001c63d) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0001e951) bg_cl_pane_g

0x6b94,	// (0x00015a4f) aid_height_cl_leading_ParamLimits

0x6b94,	// (0x00015a4f) aid_height_cl_leading

0x6ba0,	// (0x00015a5b) aid_height_cl_text_ParamLimits

0x6ba0,	// (0x00015a5b) aid_height_cl_text

0x94fa,	// (0x000183b5) bg_cl_header_pane_ParamLimits

0x94fa,	// (0x000183b5) bg_cl_header_pane

0x6bbf,	// (0x00015a7a) cl_header_pane_g1_ParamLimits

0x6bbf,	// (0x00015a7a) cl_header_pane_g1

0x6bd5,	// (0x00015a90) cl_header_pane_t1_ParamLimits

0x6bd5,	// (0x00015a90) cl_header_pane_t1

0xd78a,	// (0x0001c645) cl_list_pane

0xd2d5,	// (0x0001c190) hc_scroll_pane_cp01

0xa112,	// (0x00018fcd) bg_cl_header_pane_g1

0xd17c,	// (0x0001c037) bg_cl_header_pane_g2

0xa132,	// (0x00018fed) bg_cl_header_pane_g3

0xd18c,	// (0x0001c047) bg_cl_header_pane_g4

0xd184,	// (0x0001c03f) bg_cl_header_pane_g5

0xd453,	// (0x0001c30e) bg_cl_header_pane_g6

0xd1a4,	// (0x0001c05f) bg_cl_header_pane_g7

0xd1ac,	// (0x0001c067) bg_cl_header_pane_g8

0xd19c,	// (0x0001c057) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0001e964) bg_cl_header_pane_g

0x6bee,	// (0x00015aa9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6bee,	// (0x00015aa9) hc_cl_list_double_graphic_heading_pane

0x6bff,	// (0x00015aba) hc_cl_list_single_graphic_pane_ParamLimits

0x6bff,	// (0x00015aba) hc_cl_list_single_graphic_pane

0x6c18,	// (0x00015ad3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c18,	// (0x00015ad3) hc_cl_list_single_graphic_pane_g1

0x6c24,	// (0x00015adf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c24,	// (0x00015adf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0001e977) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0001e977) hc_cl_list_single_graphic_pane_g

0x6c38,	// (0x00015af3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c38,	// (0x00015af3) hc_cl_list_single_graphic_pane_t1

0x6c18,	// (0x00015ad3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c18,	// (0x00015ad3) hc_cl_list_double_graphic_heading_pane_g1

0x6c4d,	// (0x00015b08) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c4d,	// (0x00015b08) hc_cl_list_double_graphic_heading_pane_g2

0x6c61,	// (0x00015b1c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c61,	// (0x00015b1c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0001e97c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0001e97c) hc_cl_list_double_graphic_heading_pane_g

0x6c75,	// (0x00015b30) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c75,	// (0x00015b30) hc_cl_list_double_graphic_heading_pane_t1

0x6c8a,	// (0x00015b45) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c8a,	// (0x00015b45) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0001e983) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0001e983) hc_cl_list_double_graphic_heading_pane_t

0xd79b,	// (0x0001c656) vid4_progress_pane_g1

0xd7ab,	// (0x0001c666) vid4_progress_pane_g2

0x6c9f,	// (0x00015b5a) vid4_progress_pane_g3

0xd7bb,	// (0x0001c676) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0001e988) vid4_progress_pane_g

0x6cb1,	// (0x00015b6c) vid4_progress_pane_t1

0xd7d3,	// (0x0001c68e) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0001e993) vid4_progress_pane_t

0x6cc7,	// (0x00015b82) wait_bar_pane_cp07

0xc15e,	// (0x0001b019) blid_firmament_pane_ParamLimits

0xc1a1,	// (0x0001b05c) popup_blid_sat_info2_window_g1

0xc1c5,	// (0x0001b080) popup_blid_sat_info2_window_t3

0xc1d3,	// (0x0001b08e) popup_blid_sat_info2_window_t4

0xc1e1,	// (0x0001b09c) popup_blid_sat_info2_window_t5

0xc1ef,	// (0x0001b0aa) popup_blid_sat_info2_window_t6

0xc1ff,	// (0x0001b0ba) popup_blid_sat_info2_window_t7

0xc20d,	// (0x0001b0c8) popup_blid_sat_info2_window_t8

0xc21b,	// (0x0001b0d6) popup_blid_sat_info2_window_t9

0xc229,	// (0x0001b0e4) popup_blid_sat_info2_window_t10

0xc2eb,	// (0x0001b1a6) aid_firma_cardinal_ParamLimits

0xc2ff,	// (0x0001b1ba) blid_firmament_pane_t1_ParamLimits

0xc316,	// (0x0001b1d1) blid_firmament_pane_t2_ParamLimits

0xc32d,	// (0x0001b1e8) blid_firmament_pane_t3_ParamLimits

0xc344,	// (0x0001b1ff) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x0001e59d) blid_firmament_pane_t_ParamLimits

0xc35b,	// (0x0001b216) blid_sat_info_pane_ParamLimits

0x94fa,	// (0x000183b5) main_cam_set_pane_ParamLimits

0x4f1f,	// (0x00013dda) aid_size_cell_colour_35_ParamLimits

0x4f3f,	// (0x00013dfa) aid_size_cell_colour_112_ParamLimits

0x4f5f,	// (0x00013e1a) aid_size_cell_effect_ParamLimits

0xbe50,	// (0x0001ad0b) bg_tb_trans_pane_cp02_ParamLimits

0xa3a8,	// (0x00019263) heading_imed_pane_ParamLimits

0x4f7f,	// (0x00013e3a) listscroll_imed_pane_ParamLimits

0xb43c,	// (0x0001a2f7) popup_call2_audio_first_window_g5_ParamLimits

0xb43c,	// (0x0001a2f7) popup_call2_audio_first_window_g5

0x551d,	// (0x000143d8) aid_size_touch_image3_arrow_left_ParamLimits

0x551d,	// (0x000143d8) aid_size_touch_image3_arrow_left

0x5549,	// (0x00014404) aid_size_touch_image3_arrow_right_ParamLimits

0x5549,	// (0x00014404) aid_size_touch_image3_arrow_right

0xd7e8,	// (0x0001c6a3) vid4_progress_pane_t3

0x5294,	// (0x0001414f) main_hwr_training_symbol_option_pane_ParamLimits

0x5294,	// (0x0001414f) main_hwr_training_symbol_option_pane

0xcbd1,	// (0x0001ba8c) popup_hwr_training_preview_window_ParamLimits

0xcbd1,	// (0x0001ba8c) popup_hwr_training_preview_window

0x52b4,	// (0x0001416f) hwr_training_navi_pane_g5_ParamLimits

0x52b4,	// (0x0001416f) hwr_training_navi_pane_g5

0xd158,	// (0x0001c013) popup_char_count_window

0x94fa,	// (0x000183b5) bg_popup_sub_pane_cp20_ParamLimits

0x6610,	// (0x000154cb) list_vitu2_match_list_pane_ParamLimits

0x661f,	// (0x000154da) vitu2_page_scroll_pane_ParamLimits

0x661f,	// (0x000154da) vitu2_page_scroll_pane

0xd820,	// (0x0001c6db) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd820,	// (0x0001c6db) list_single_hwr_training_symbol_option_pane

0xd833,	// (0x0001c6ee) list_single_hwr_training_symbol_option_pane_g1

0xd83b,	// (0x0001c6f6) list_single_hwr_training_symbol_option_pane_t1

0xd849,	// (0x0001c704) bg_button_pane_cp023

0xd852,	// (0x0001c70d) bg_button_pane_cp024

0x6d10,	// (0x00015bcb) vitu2_page_scroll_pane_g1

0x6d18,	// (0x00015bd3) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0001e99a) vitu2_page_scroll_pane_g

0x6d20,	// (0x00015bdb) vitu2_page_scroll_pane_t1

0x9d0e,	// (0x00018bc9) popup_char_count_window_g1

0xd885,	// (0x0001c740) popup_char_count_window_g2

0xd233,	// (0x0001c0ee) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0001e99f) popup_char_count_window_g

0xd88e,	// (0x0001c749) popup_char_count_window_t1

0x948a,	// (0x00018345) main_vded2_pane

0xc8d0,	// (0x0001b78b) aid_size_cell_imed_line

0xc8da,	// (0x0001b795) grid_imed_line_width_pane

0xd0cb,	// (0x0001bf86) vid4_indicators_pane_g4

0xd89c,	// (0x0001c757) cell_imed_line_width_pane_ParamLimits

0xd89c,	// (0x0001c757) cell_imed_line_width_pane

0xd8b0,	// (0x0001c76b) cell_imed_line_width_pane_g1

0xd8b9,	// (0x0001c774) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0001e9a6) cell_imed_line_width_pane_g

0x6d2f,	// (0x00015bea) main_vded2_pane_g1_ParamLimits

0x6d2f,	// (0x00015bea) main_vded2_pane_g1

0x6d45,	// (0x00015c00) main_vded2_pane_g2_ParamLimits

0x6d45,	// (0x00015c00) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0001e9ab) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0001e9ab) main_vded2_pane_g

0x6d57,	// (0x00015c12) vded2_slider_pane_ParamLimits

0x6d57,	// (0x00015c12) vded2_slider_pane

0x6d67,	// (0x00015c22) aid_size_touch_vded2_end

0x6d71,	// (0x00015c2c) aid_size_touch_vded2_playhead

0xd8c1,	// (0x0001c77c) aid_size_touch_vded2_start

0xd8c9,	// (0x0001c784) vded2_slider_bg_pane

0xd8d2,	// (0x0001c78d) vded2_slider_pane_g1

0xd8db,	// (0x0001c796) vded2_slider_pane_g2

0x6d7b,	// (0x00015c36) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0001e9b0) vded2_slider_pane_g

0xd8e3,	// (0x0001c79e) vded2_slider_bg_pane_g1

0xd8ec,	// (0x0001c7a7) vded2_slider_bg_pane_g2

0xd8f5,	// (0x0001c7b0) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0001e9b7) vded2_slider_bg_pane_g

0x2c9b,	// (0x00011b56) aid_postcard_touch_down_pane_ParamLimits

0x2c9b,	// (0x00011b56) aid_postcard_touch_down_pane

0x2cb1,	// (0x00011b6c) aid_postcard_touch_up_pane_ParamLimits

0x2cb1,	// (0x00011b6c) aid_postcard_touch_up_pane

0x948a,	// (0x00018345) main_blid2_pane

0xbe5e,	// (0x0001ad19) popup_blid2_search_window

0x948a,	// (0x00018345) blid2_gps_pane

0x948a,	// (0x00018345) blid2_navig_pane

0x948a,	// (0x00018345) blid2_search_pane

0x948a,	// (0x00018345) blid2_tripm_pane

0x6d86,	// (0x00015c41) blid2_search_pane_g1_ParamLimits

0x6d86,	// (0x00015c41) blid2_search_pane_g1

0x6d9e,	// (0x00015c59) blid2_search_pane_t1_ParamLimits

0x6d9e,	// (0x00015c59) blid2_search_pane_t1

0x6db0,	// (0x00015c6b) aid_size_cell_blid2_gps_ParamLimits

0x6db0,	// (0x00015c6b) aid_size_cell_blid2_gps

0x6dc8,	// (0x00015c83) blid2_gps_pane_g1_ParamLimits

0x6dc8,	// (0x00015c83) blid2_gps_pane_g1

0x6ddc,	// (0x00015c97) grid_blid2_satellite_pane_ParamLimits

0x6ddc,	// (0x00015c97) grid_blid2_satellite_pane

0x6df6,	// (0x00015cb1) blid2_navig_pane_g1_ParamLimits

0x6df6,	// (0x00015cb1) blid2_navig_pane_g1

0x6e02,	// (0x00015cbd) blid2_navig_pane_t1_ParamLimits

0x6e02,	// (0x00015cbd) blid2_navig_pane_t1

0x6e1d,	// (0x00015cd8) blid2_navig_pane_t2_ParamLimits

0x6e1d,	// (0x00015cd8) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0001e9be) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0001e9be) blid2_navig_pane_t

0x6e38,	// (0x00015cf3) blid2_navig_ring_pane_ParamLimits

0x6e38,	// (0x00015cf3) blid2_navig_ring_pane

0x6e51,	// (0x00015d0c) blid2_speed_pane_ParamLimits

0x6e51,	// (0x00015d0c) blid2_speed_pane

0x6e5d,	// (0x00015d18) blid2_tripm_pane_g1_ParamLimits

0x6e5d,	// (0x00015d18) blid2_tripm_pane_g1

0x6e78,	// (0x00015d33) blid2_tripm_pane_g2_ParamLimits

0x6e78,	// (0x00015d33) blid2_tripm_pane_g2

0x6e8c,	// (0x00015d47) blid2_tripm_pane_g3_ParamLimits

0x6e8c,	// (0x00015d47) blid2_tripm_pane_g3

0x6ea0,	// (0x00015d5b) blid2_tripm_pane_g4_ParamLimits

0x6ea0,	// (0x00015d5b) blid2_tripm_pane_g4

0x6eb4,	// (0x00015d6f) blid2_tripm_pane_g5_ParamLimits

0x6eb4,	// (0x00015d6f) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0001e9c3) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0001e9c3) blid2_tripm_pane_g

0x6eda,	// (0x00015d95) blid2_tripm_pane_t1_ParamLimits

0x6eda,	// (0x00015d95) blid2_tripm_pane_t1

0x6ef5,	// (0x00015db0) blid2_tripm_pane_t2_ParamLimits

0x6ef5,	// (0x00015db0) blid2_tripm_pane_t2

0x6f0e,	// (0x00015dc9) blid2_tripm_pane_t3_ParamLimits

0x6f0e,	// (0x00015dc9) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0001e9d0) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0001e9d0) blid2_tripm_pane_t

0x6f55,	// (0x00015e10) cell_blid2_satellite_pane_ParamLimits

0x6f55,	// (0x00015e10) cell_blid2_satellite_pane

0x6f73,	// (0x00015e2e) cell_blid2_satellite_pane_g1

0xd8fe,	// (0x0001c7b9) cell_blid2_satellite_pane_t1

0xc36b,	// (0x0001b226) blid2_speed_pane_g1

0xd90c,	// (0x0001c7c7) blid2_speed_pane_t1

0xd91a,	// (0x0001c7d5) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0001e9d9) blid2_speed_pane_t

0xc36b,	// (0x0001b226) blid2_navig_ring_pane_g1

0x6f7c,	// (0x00015e37) blid2_navig_ring_pane_g2

0x6f84,	// (0x00015e3f) blid2_navig_ring_pane_g3

0x6f8c,	// (0x00015e47) blid2_navig_ring_pane_g4

0x6f94,	// (0x00015e4f) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0001e9de) blid2_navig_ring_pane_g

0x948a,	// (0x00018345) bg_popup_window_pane_cp011

0xd928,	// (0x0001c7e3) popup_blid2_search_window_g1

0xd930,	// (0x0001c7eb) popup_blid2_search_window_t1

0xd93e,	// (0x0001c7f9) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0001e9e9) popup_blid2_search_window_t

0xa021,	// (0x00018edc) main_browser_pane_g1

0x9c69,	// (0x00018b24) main_browser_pane_ParamLimits

0x94fa,	// (0x000183b5) bg_button_pane_cp011_ParamLimits

0x5eaf,	// (0x00014d6a) cell_vitu2_function_pane_g1_ParamLimits

0xbe50,	// (0x0001ad0b) bg_popup_sub_pane_cp22_ParamLimits

0x6806,	// (0x000156c1) input_focus_pane_cp08_ParamLimits

0x681d,	// (0x000156d8) popup_vitu2_query_button_pane_ParamLimits

0x681d,	// (0x000156d8) popup_vitu2_query_button_pane

0x682e,	// (0x000156e9) popup_vitu2_query_input_button_pane

0xd4ae,	// (0x0001c369) popup_vitu2_query_window_g1_ParamLimits

0x6838,	// (0x000156f3) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0001e8ea) popup_vitu2_query_window_g_ParamLimits

0x948a,	// (0x00018345) bg_button_pane_cp026

0x6f9c,	// (0x00015e57) popup_vitu2_query_input_button_pane_g1

0x948a,	// (0x00018345) bg_button_pane_cp025

0xd94c,	// (0x0001c807) popup_vitu2_query_button_pane_t1

0x4332,	// (0x000131ed) main_mp3_pane_t6

0x4340,	// (0x000131fb) popup_slider_window_cp01

0xd037,	// (0x0001bef2) cam4_battery_pane

0xd08a,	// (0x0001bf45) cam4_battery_pane_cp02

0xd793,	// (0x0001c64e) cam4_battery_pane_cp01

0xd793,	// (0x0001c64e) cam4_battery_pane_cp03

0xc36b,	// (0x0001b226) cam4_battery_pane_g1

0xd95a,	// (0x0001c815) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0001e9ee) cam4_battery_pane_g

0xc237,	// (0x0001b0f2) popup_blid_sat_info2_window_t11

0xa7f8,	// (0x000196b3) aid_size_touch_mv_arrow_left_ParamLimits

0xa823,	// (0x000196de) aid_size_touch_mv_arrow_right_ParamLimits

0xa881,	// (0x0001973c) navi_pane_g1_ParamLimits

0xa88d,	// (0x00019748) navi_pane_g2_ParamLimits

0xa8bb,	// (0x00019776) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0001e29c) navi_pane_g_ParamLimits

0x26c8,	// (0x00011583) navi_pane_mv_t1_ParamLimits

0x4f8b,	// (0x00013e46) grid_imed_effect_pane_ParamLimits

0x14dc,	// (0x00010397) aid_placing_vt_slider_lsc

0x9f70,	// (0x00018e2b) aid_placing_vt_slider_prt

0x94fa,	// (0x000183b5) bg_tb_trans_pane_cp01_ParamLimits

0xc4d0,	// (0x0001b38b) popup_image_details_window_g1_ParamLimits

0xc4e3,	// (0x0001b39e) popup_image_details_window_g2_ParamLimits

0xc4f8,	// (0x0001b3b3) popup_image_details_window_g3_ParamLimits

0xc4f8,	// (0x0001b3b3) popup_image_details_window_g3

0xf727,	// (0x0001e5e2) popup_image_details_window_g_ParamLimits

0xc50c,	// (0x0001b3c7) popup_image_details_window_t1_ParamLimits

0xc51e,	// (0x0001b3d9) popup_image_details_window_t2_ParamLimits

0xc537,	// (0x0001b3f2) popup_image_details_window_t3_ParamLimits

0xc54b,	// (0x0001b406) popup_image_details_window_t4_ParamLimits

0xc566,	// (0x0001b421) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x0001e5e9) popup_image_details_window_t_ParamLimits

0x6bac,	// (0x00015a67) cl_header_name_pane_ParamLimits

0x6bac,	// (0x00015a67) cl_header_name_pane

0x6fa4,	// (0x00015e5f) cl_header_name_pane_t1_ParamLimits

0x6fa4,	// (0x00015e5f) cl_header_name_pane_t1

0x6fc5,	// (0x00015e80) cl_header_name_pane_t2_ParamLimits

0x6fc5,	// (0x00015e80) cl_header_name_pane_t2

0x7007,	// (0x00015ec2) cl_header_name_pane_t3_ParamLimits

0x7007,	// (0x00015ec2) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0001e9f3) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0001e9f3) cl_header_name_pane_t

0xa94a,	// (0x00019805) navi_pane_mv_g2_ParamLimits

0xd115,	// (0x0001bfd0) field_vitu2_entry_pane_g1_ParamLimits

0xd121,	// (0x0001bfdc) field_vitu2_entry_pane_g2_ParamLimits

0xd12d,	// (0x0001bfe8) field_vitu2_entry_pane_g3_ParamLimits

0xd12d,	// (0x0001bfe8) field_vitu2_entry_pane_g3

0xf92e,	// (0x0001e7e9) field_vitu2_entry_pane_g_ParamLimits

0xd160,	// (0x0001c01b) cell_vitu2_itu_pane_g1_ParamLimits

0x5d57,	// (0x00014c12) cell_vitu2_itu_pane_g2_ParamLimits

0x5d57,	// (0x00014c12) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0001e7f5) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0001e7f5) cell_vitu2_itu_pane_g

0x94fa,	// (0x000183b5) bg_vkb2_func_pane_cp05_ParamLimits

0x94fa,	// (0x000183b5) bg_vkb2_func_pane_cp05

0x94fa,	// (0x000183b5) bg_vkb2_func_pane_cp03

0x94fa,	// (0x000183b5) bg_vkb2_func_pane_cp04

0x94fa,	// (0x000183b5) bg_vkb2_func_pane_cp10_ParamLimits

0x94fa,	// (0x000183b5) bg_vkb2_func_pane_cp10

0x6b4e,	// (0x00015a09) bg_vkb2_func_pane_cp08

0x6b34,	// (0x000159ef) bg_vkb2_func_pane_cp06

0x6b42,	// (0x000159fd) bg_vkb2_func_pane_cp07

0xd85b,	// (0x0001c716) bg_vkb2_func_pane_cp11_ParamLimits

0xd85b,	// (0x0001c716) bg_vkb2_func_pane_cp11

0xd870,	// (0x0001c72b) bg_vkb2_func_pane_cp12_ParamLimits

0xd870,	// (0x0001c72b) bg_vkb2_func_pane_cp12

0x948a,	// (0x00018345) bg_vkb2_func_pane_cp09

0xd17c,	// (0x0001c037) bg_vkb2_func_pane_g1

0xa132,	// (0x00018fed) bg_vkb2_func_pane_g2

0xd184,	// (0x0001c03f) bg_vkb2_func_pane_g3

0xd18c,	// (0x0001c047) bg_vkb2_func_pane_g4

0xd453,	// (0x0001c30e) bg_vkb2_func_pane_g5

0xd1a4,	// (0x0001c05f) bg_vkb2_func_pane_g6

0xd1ac,	// (0x0001c067) bg_vkb2_func_pane_g7

0xd19c,	// (0x0001c057) bg_vkb2_func_pane_g8

0xa112,	// (0x00018fcd) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0001e9fa) bg_vkb2_func_pane_g

0x6ec8,	// (0x00015d83) blid2_tripm_pane_g6_ParamLimits

0x6ec8,	// (0x00015d83) blid2_tripm_pane_g6

0xcf08,	// (0x0001bdc3) mp4_progress_pane_g1

0x6f41,	// (0x00015dfc) blid2_tripm_values_pane_ParamLimits

0x6f41,	// (0x00015dfc) blid2_tripm_values_pane

0x7038,	// (0x00015ef3) blid2_tripm_values_pane_t1

0x7046,	// (0x00015f01) blid2_tripm_values_pane_t2

0x7054,	// (0x00015f0f) blid2_tripm_values_pane_t3

0x7062,	// (0x00015f1d) blid2_tripm_values_pane_t4

0x7070,	// (0x00015f2b) blid2_tripm_values_pane_t5

0x707e,	// (0x00015f39) blid2_tripm_values_pane_t6

0x708c,	// (0x00015f47) blid2_tripm_values_pane_t7

0x709a,	// (0x00015f55) blid2_tripm_values_pane_t8

0x70a8,	// (0x00015f63) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0001ea0d) blid2_tripm_values_pane_t

0x151e,	// (0x000103d9) call_video_pane_t1_ParamLimits

0x153c,	// (0x000103f7) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0001e125) call_video_pane_t_ParamLimits

0x2ba0,	// (0x00011a5b) msg_header_pane_g1_ParamLimits

0xab44,	// (0x000199ff) msg_header_pane_g2_ParamLimits

0xab44,	// (0x000199ff) msg_header_pane_g2

0x0001,

0xf484,	// (0x0001e33f) msg_header_pane_g_ParamLimits

0xf484,	// (0x0001e33f) msg_header_pane_g

0x9c69,	// (0x00018b24) main_clock2_pane_ParamLimits

0x4c8c,	// (0x00013b47) grid_clock2_toolbar_pane_ParamLimits

0x4c8c,	// (0x00013b47) grid_clock2_toolbar_pane

0x4c8c,	// (0x00013b47) listscroll_clock2_pane_ParamLimits

0x4c8c,	// (0x00013b47) listscroll_clock2_pane

0x4d70,	// (0x00013c2b) main_clock2_pane_t3_ParamLimits

0x4d70,	// (0x00013c2b) main_clock2_pane_t3

0x4d94,	// (0x00013c4f) main_clock2_pane_t4_ParamLimits

0x4d94,	// (0x00013c4f) main_clock2_pane_t4

0xd964,	// (0x0001c81f) cell_clock2_toolbar_pane

0xd96c,	// (0x0001c827) cell_clock2_toolbar_pane_cp01

0xd96c,	// (0x0001c827) cell_clock2_toolbar_pane_cp02

0xd974,	// (0x0001c82f) cell_clock2_toolbar_pane_cp03

0xd97c,	// (0x0001c837) list_clock2_pane

0xa77d,	// (0x00019638) scroll_pane_cp10

0xd984,	// (0x0001c83f) list_single_clock2_pane_ParamLimits

0xd984,	// (0x0001c83f) list_single_clock2_pane

0x9ecf,	// (0x00018d8a) list_highlight_pane_cp08

0xd991,	// (0x0001c84c) list_single_clock2_pane_t1

0xd99f,	// (0x0001c85a) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0001ea20) list_single_clock2_pane_t

0x948a,	// (0x00018345) bg_button_pane_cp10

0xd9ad,	// (0x0001c868) cell_clock2_toolbar_pane_g1

0x2c27,	// (0x00011ae2) aid_main_viewer_pane_g1_ParamLimits

0x2c27,	// (0x00011ae2) aid_main_viewer_pane_g1

0x2c35,	// (0x00011af0) aid_main_viewer_pane_g2_ParamLimits

0x2c35,	// (0x00011af0) aid_main_viewer_pane_g2

0x2c43,	// (0x00011afe) aid_main_viewer_pane_g3_ParamLimits

0x2c43,	// (0x00011afe) aid_main_viewer_pane_g3

0x2c52,	// (0x00011b0d) aid_main_viewer_pane_g4_ParamLimits

0x2c52,	// (0x00011b0d) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0001e350) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0001e350) aid_main_viewer_pane_g

0x355a,	// (0x00012415) main_calc_pane_ParamLimits

0x356e,	// (0x00012429) main_dialer2_pane_ParamLimits

0x948a,	// (0x00018345) main_cam6_pane

0x948a,	// (0x00018345) main_vid6_pane

0x4c98,	// (0x00013b53) listscroll_gen_pane_cp06_ParamLimits

0x4c98,	// (0x00013b53) listscroll_gen_pane_cp06

0x4db7,	// (0x00013c72) main_clock2_pane_t5_ParamLimits

0x4db7,	// (0x00013c72) main_clock2_pane_t5

0x4e15,	// (0x00013cd0) aid_call2_pane_cp10_ParamLimits

0x4e27,	// (0x00013ce2) aid_call_pane_cp10_ParamLimits

0xa7ec,	// (0x000196a7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa7ec,	// (0x000196a7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4e39,	// (0x00013cf4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4e39,	// (0x00013cf4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa7ec,	// (0x000196a7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x0001e69e) popup_clock_analogue_window_cp10_g_ParamLimits

0x4e4f,	// (0x00013d0a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x54ca,	// (0x00014385) cell_dialer2_keypad_pane_g2_ParamLimits

0x54ca,	// (0x00014385) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0001e788) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0001e788) cell_dialer2_keypad_pane_g

0x54e6,	// (0x000143a1) cell_dialer2_keypad_pane_t1

0x61c9,	// (0x00015084) main_cset_text2_pane_ParamLimits

0x61c9,	// (0x00015084) main_cset_text2_pane

0xd69a,	// (0x0001c555) area_vitu2_query_pane_g1_ParamLimits

0x6ad3,	// (0x0001598e) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0001e93d) area_vitu2_query_pane_g_ParamLimits

0xd71e,	// (0x0001c5d9) area_vitu2_query_pane_t7_ParamLimits

0xd71e,	// (0x0001c5d9) area_vitu2_query_pane_t7

0x6b34,	// (0x000159ef) bg_button_pane_cp018_ParamLimits

0x6b42,	// (0x000159fd) bg_button_pane_cp021_ParamLimits

0x6b4e,	// (0x00015a09) bg_button_pane_cp022_ParamLimits

0x6b4e,	// (0x00015a09) bg_vkb2_func_pane_cp08_ParamLimits

0x6b34,	// (0x000159ef) bg_vkb2_func_pane_cp06_ParamLimits

0x6b42,	// (0x000159fd) bg_vkb2_func_pane_cp07_ParamLimits

0x6b5f,	// (0x00015a1a) input_focus_pane_cp09_ParamLimits

0xd9b5,	// (0x0001c870) cam6_autofocus_pane_ParamLimits

0xd9b5,	// (0x0001c870) cam6_autofocus_pane

0x70b6,	// (0x00015f71) cam6_image_uncrop_pane_ParamLimits

0x70b6,	// (0x00015f71) cam6_image_uncrop_pane

0x70c5,	// (0x00015f80) cam6_indi_pane_ParamLimits

0x70c5,	// (0x00015f80) cam6_indi_pane

0x70db,	// (0x00015f96) cam6_mode_pane_ParamLimits

0x70db,	// (0x00015f96) cam6_mode_pane

0x70ed,	// (0x00015fa8) cam6_timer_pane_ParamLimits

0x70ed,	// (0x00015fa8) cam6_timer_pane

0x70fd,	// (0x00015fb8) cam6_zoom_pane_ParamLimits

0x70fd,	// (0x00015fb8) cam6_zoom_pane

0x7109,	// (0x00015fc4) cam6_mode_pane_g1_ParamLimits

0x7109,	// (0x00015fc4) cam6_mode_pane_g1

0x7119,	// (0x00015fd4) cam6_mode_pane_g2_ParamLimits

0x7119,	// (0x00015fd4) cam6_mode_pane_g2

0x7129,	// (0x00015fe4) cam6_mode_pane_g3_ParamLimits

0x7129,	// (0x00015fe4) cam6_mode_pane_g3

0x7139,	// (0x00015ff4) cam6_mode_pane_g4_ParamLimits

0x7139,	// (0x00015ff4) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0001ea25) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0001ea25) cam6_mode_pane_g

0xd209,	// (0x0001c0c4) bg_tb_trans_pane_cp08_ParamLimits

0xd209,	// (0x0001c0c4) bg_tb_trans_pane_cp08

0xd9c3,	// (0x0001c87e) cam6_battery_pane_ParamLimits

0xd9c3,	// (0x0001c87e) cam6_battery_pane

0xd9d9,	// (0x0001c894) cam6_indi_pane_g1_ParamLimits

0xd9d9,	// (0x0001c894) cam6_indi_pane_g1

0xd9eb,	// (0x0001c8a6) cam6_indi_pane_g2_ParamLimits

0xd9eb,	// (0x0001c8a6) cam6_indi_pane_g2

0xd9fd,	// (0x0001c8b8) cam6_indi_pane_g3_ParamLimits

0xd9fd,	// (0x0001c8b8) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0001ea2e) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0001ea2e) cam6_indi_pane_g

0xda0f,	// (0x0001c8ca) cam6_indi_pane_t1_ParamLimits

0xda0f,	// (0x0001c8ca) cam6_indi_pane_t1

0x7149,	// (0x00016004) cam6_autofocus_pane_g1

0x7151,	// (0x0001600c) cam6_autofocus_pane_g2

0x7159,	// (0x00016014) cam6_autofocus_pane_g3

0x7161,	// (0x0001601c) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0001ea35) cam6_autofocus_pane_g

0xda35,	// (0x0001c8f0) cam6_timer_pane_g1

0xda3d,	// (0x0001c8f8) cam6_timer_pane_t1

0xda4b,	// (0x0001c906) cam6_zoom_cont_pane

0xda53,	// (0x0001c90e) cam6_zoom_pane_g1

0xda5b,	// (0x0001c916) cam6_zoom_pane_g2

0x7169,	// (0x00016024) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0001ea3e) cam6_zoom_pane_g

0xc36b,	// (0x0001b226) cam6_battery_pane_g1

0xc36b,	// (0x0001b226) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0001e5a6) cam6_battery_pane_g

0xda63,	// (0x0001c91e) cam6_zoom_cont_pane_g1

0xda6c,	// (0x0001c927) cam6_zoom_cont_pane_g2

0xda75,	// (0x0001c930) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0001ea45) cam6_zoom_cont_pane_g

0x7186,	// (0x00016041) cam6_mode_pane_cp_ParamLimits

0x7186,	// (0x00016041) cam6_mode_pane_cp

0x70fd,	// (0x00015fb8) cam6_zoom_pane_cp_ParamLimits

0x70fd,	// (0x00015fb8) cam6_zoom_pane_cp

0x7198,	// (0x00016053) vid6_image_uncrop_cif_pane_ParamLimits

0x7198,	// (0x00016053) vid6_image_uncrop_cif_pane

0x71a8,	// (0x00016063) vid6_image_uncrop_nhd_pane_ParamLimits

0x71a8,	// (0x00016063) vid6_image_uncrop_nhd_pane

0x70b6,	// (0x00015f71) vid6_image_uncrop_vga_pane_ParamLimits

0x70b6,	// (0x00015f71) vid6_image_uncrop_vga_pane

0x71b7,	// (0x00016072) vid6_image_uncrop_wvga_pane_ParamLimits

0x71b7,	// (0x00016072) vid6_image_uncrop_wvga_pane

0x71c6,	// (0x00016081) vid6_indi_pane_ParamLimits

0x71c6,	// (0x00016081) vid6_indi_pane

0xd209,	// (0x0001c0c4) bg_tb_trans_pane_cp09_ParamLimits

0xd209,	// (0x0001c0c4) bg_tb_trans_pane_cp09

0xda8d,	// (0x0001c948) cam6_battery_pane_cp_ParamLimits

0xda8d,	// (0x0001c948) cam6_battery_pane_cp

0xda99,	// (0x0001c954) vid6_indi_pane_g1_ParamLimits

0xda99,	// (0x0001c954) vid6_indi_pane_g1

0xdaab,	// (0x0001c966) vid6_indi_pane_g2_ParamLimits

0xdaab,	// (0x0001c966) vid6_indi_pane_g2

0xdabd,	// (0x0001c978) vid6_indi_pane_g3_ParamLimits

0xdabd,	// (0x0001c978) vid6_indi_pane_g3

0xdad2,	// (0x0001c98d) vid6_indi_pane_g4_ParamLimits

0xdad2,	// (0x0001c98d) vid6_indi_pane_g4

0xdae7,	// (0x0001c9a2) vid6_indi_pane_g5_ParamLimits

0xdae7,	// (0x0001c9a2) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0001ea4c) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0001ea4c) vid6_indi_pane_g

0xdb01,	// (0x0001c9bc) vid6_indi_pane_t1_ParamLimits

0xdb01,	// (0x0001c9bc) vid6_indi_pane_t1

0xdb17,	// (0x0001c9d2) vid6_indi_pane_t2_ParamLimits

0xdb17,	// (0x0001c9d2) vid6_indi_pane_t2

0xdb3f,	// (0x0001c9fa) vid6_indi_pane_t3_ParamLimits

0xdb3f,	// (0x0001c9fa) vid6_indi_pane_t3

0xdb67,	// (0x0001ca22) vid6_indi_pane_t4_ParamLimits

0xdb67,	// (0x0001ca22) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0001ea57) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0001ea57) vid6_indi_pane_t

0xdb8b,	// (0x0001ca46) wait_bar_pane_cp08

0x71de,	// (0x00016099) main_cset_text2_pane_t1_ParamLimits

0x71de,	// (0x00016099) main_cset_text2_pane_t1

0x7171,	// (0x0001602c) listscroll_gen_pane_cp06_t1_ParamLimits

0x7171,	// (0x0001602c) listscroll_gen_pane_cp06_t1

0x948a,	// (0x00018345) main_cam6_set_pane

0xc5b0,	// (0x0001b46b) bg_tb_trans_pane_cp06_ParamLimits

0xd03f,	// (0x0001befa) cam4_indicators_pane_g1_ParamLimits

0xd050,	// (0x0001bf0b) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0001e7c5) cam4_indicators_pane_g_ParamLimits

0xd068,	// (0x0001bf23) cam4_indicators_pane_t1_ParamLimits

0x94fa,	// (0x000183b5) bg_tb_trans_pane_cp07_ParamLimits

0xd092,	// (0x0001bf4d) vid4_indicators_pane_g1_ParamLimits

0xd0a6,	// (0x0001bf61) vid4_indicators_pane_g2_ParamLimits

0xd0ba,	// (0x0001bf75) vid4_indicators_pane_g3_ParamLimits

0xd0cb,	// (0x0001bf86) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0001e7d7) vid4_indicators_pane_g_ParamLimits

0xd0e7,	// (0x0001bfa2) vid4_indicators_pane_t1_ParamLimits

0xd79b,	// (0x0001c656) vid4_progress_pane_g1_ParamLimits

0xd7ab,	// (0x0001c666) vid4_progress_pane_g2_ParamLimits

0x6c9f,	// (0x00015b5a) vid4_progress_pane_g3_ParamLimits

0xd7bb,	// (0x0001c676) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0001e988) vid4_progress_pane_g_ParamLimits

0x6cb1,	// (0x00015b6c) vid4_progress_pane_t1_ParamLimits

0xd7d3,	// (0x0001c68e) vid4_progress_pane_t2_ParamLimits

0xd7e8,	// (0x0001c6a3) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0001e993) vid4_progress_pane_t_ParamLimits

0x6cc7,	// (0x00015b82) wait_bar_pane_cp07_ParamLimits

0x71fc,	// (0x000160b7) main_cam6_set_pane_g2_ParamLimits

0x71fc,	// (0x000160b7) main_cam6_set_pane_g2

0x7220,	// (0x000160db) main_cset6_listscroll_pane_ParamLimits

0x7220,	// (0x000160db) main_cset6_listscroll_pane

0x723c,	// (0x000160f7) main_cset6_slider_pane_ParamLimits

0x723c,	// (0x000160f7) main_cset6_slider_pane

0x7252,	// (0x0001610d) main_cset6_text2_pane_ParamLimits

0x7252,	// (0x0001610d) main_cset6_text2_pane

0xdb9a,	// (0x0001ca55) main_cset6_text_pane

0xdba2,	// (0x0001ca5d) main_cset_list_pane_copy1_ParamLimits

0xdba2,	// (0x0001ca5d) main_cset_list_pane_copy1

0xdbb2,	// (0x0001ca6d) scroll_pane_cp028_copy1

0x7260,	// (0x0001611b) cset_list_set_pane_copy1

0x7272,	// (0x0001612d) aid_position_infowindow_above_copy1

0x727a,	// (0x00016135) aid_position_infowindow_below_copy1

0xdbbb,	// (0x0001ca76) cset_list_set_pane_g1_copy1

0xdbc3,	// (0x0001ca7e) cset_list_set_pane_g3_copy1_ParamLimits

0xdbc3,	// (0x0001ca7e) cset_list_set_pane_g3_copy1

0xdbd2,	// (0x0001ca8d) cset_list_set_pane_t1_copy1_ParamLimits

0xdbd2,	// (0x0001ca8d) cset_list_set_pane_t1_copy1

0x94fa,	// (0x000183b5) list_highlight_pane_cp021_copy1_ParamLimits

0x94fa,	// (0x000183b5) list_highlight_pane_cp021_copy1

0xdbe7,	// (0x0001caa2) cset6_slider_pane_ParamLimits

0xdbe7,	// (0x0001caa2) cset6_slider_pane

0xdc13,	// (0x0001cace) main_cset6_slider_pane_g1_ParamLimits

0xdc13,	// (0x0001cace) main_cset6_slider_pane_g1

0x7282,	// (0x0001613d) main_cset6_slider_pane_g2_ParamLimits

0x7282,	// (0x0001613d) main_cset6_slider_pane_g2

0xdc3b,	// (0x0001caf6) main_cset6_slider_pane_g3_ParamLimits

0xdc3b,	// (0x0001caf6) main_cset6_slider_pane_g3

0x72aa,	// (0x00016165) main_cset6_slider_pane_g4_ParamLimits

0x72aa,	// (0x00016165) main_cset6_slider_pane_g4

0xdc47,	// (0x0001cb02) main_cset6_slider_pane_g5_ParamLimits

0xdc47,	// (0x0001cb02) main_cset6_slider_pane_g5

0xd2ea,	// (0x0001c1a5) main_cset6_slider_pane_g7_ParamLimits

0xd2ea,	// (0x0001c1a5) main_cset6_slider_pane_g7

0xd2f6,	// (0x0001c1b1) main_cset6_slider_pane_g8_ParamLimits

0xd2f6,	// (0x0001c1b1) main_cset6_slider_pane_g8

0x6276,	// (0x00015131) main_cset6_slider_pane_g9_ParamLimits

0x6276,	// (0x00015131) main_cset6_slider_pane_g9

0x6282,	// (0x0001513d) main_cset6_slider_pane_g10_ParamLimits

0x6282,	// (0x0001513d) main_cset6_slider_pane_g10

0x628e,	// (0x00015149) main_cset6_slider_pane_g11_ParamLimits

0x628e,	// (0x00015149) main_cset6_slider_pane_g11

0x629a,	// (0x00015155) main_cset6_slider_pane_g12_ParamLimits

0x629a,	// (0x00015155) main_cset6_slider_pane_g12

0x62a6,	// (0x00015161) main_cset6_slider_pane_g13_ParamLimits

0x62a6,	// (0x00015161) main_cset6_slider_pane_g13

0x62b2,	// (0x0001516d) main_cset6_slider_pane_g14_ParamLimits

0x62b2,	// (0x0001516d) main_cset6_slider_pane_g14

0x72b6,	// (0x00016171) main_cset6_slider_pane_g15_ParamLimits

0x72b6,	// (0x00016171) main_cset6_slider_pane_g15

0xd302,	// (0x0001c1bd) main_cset6_slider_pane_g16_ParamLimits

0xd302,	// (0x0001c1bd) main_cset6_slider_pane_g16

0xd30e,	// (0x0001c1c9) main_cset6_slider_pane_g17_ParamLimits

0xd30e,	// (0x0001c1c9) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0001ea60) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0001ea60) main_cset6_slider_pane_g

0xdc53,	// (0x0001cb0e) main_cset6_slider_pane_t1_ParamLimits

0xdc53,	// (0x0001cb0e) main_cset6_slider_pane_t1

0x72e6,	// (0x000161a1) main_cset6_slider_pane_t2_ParamLimits

0x72e6,	// (0x000161a1) main_cset6_slider_pane_t2

0x7311,	// (0x000161cc) main_cset6_slider_pane_t3_ParamLimits

0x7311,	// (0x000161cc) main_cset6_slider_pane_t3

0x733c,	// (0x000161f7) main_cset6_slider_pane_t4_ParamLimits

0x733c,	// (0x000161f7) main_cset6_slider_pane_t4

0x7367,	// (0x00016222) main_cset6_slider_pane_t5_ParamLimits

0x7367,	// (0x00016222) main_cset6_slider_pane_t5

0xdc94,	// (0x0001cb4f) main_cset6_slider_pane_t7_ParamLimits

0xdc94,	// (0x0001cb4f) main_cset6_slider_pane_t7

0x7392,	// (0x0001624d) main_cset6_slider_pane_t8_ParamLimits

0x7392,	// (0x0001624d) main_cset6_slider_pane_t8

0x73b6,	// (0x00016271) main_cset6_slider_pane_t9_ParamLimits

0x73b6,	// (0x00016271) main_cset6_slider_pane_t9

0x73da,	// (0x00016295) main_cset6_slider_pane_t10_ParamLimits

0x73da,	// (0x00016295) main_cset6_slider_pane_t10

0x73fe,	// (0x000162b9) main_cset6_slider_pane_t11_ParamLimits

0x73fe,	// (0x000162b9) main_cset6_slider_pane_t11

0xdcca,	// (0x0001cb85) main_cset6_slider_pane_t14_ParamLimits

0xdcca,	// (0x0001cb85) main_cset6_slider_pane_t14

0xdd03,	// (0x0001cbbe) main_cset6_slider_pane_t15_ParamLimits

0xdd03,	// (0x0001cbbe) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0001ea85) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0001ea85) main_cset6_slider_pane_t

0xcba6,	// (0x0001ba61) cset_slider_pane_g1_copy1

0xd3e6,	// (0x0001c2a1) cset_slider_pane_g2_copy1

0xd3ef,	// (0x0001c2aa) cset_slider_pane_g3_copy1

0x948a,	// (0x00018345) bg_popup_sub_pane_cp011_copy1

0xdd3c,	// (0x0001cbf7) main_cset_text_pane_g1_copy1

0xd4c2,	// (0x0001c37d) main_cset_text_pane_t1_copy1

0xd4d0,	// (0x0001c38b) main_cset_text_pane_t2_copy1

0xd4de,	// (0x0001c399) main_cset_text_pane_t3_copy1

0xd4ec,	// (0x0001c3a7) main_cset_text_pane_t4_copy1

0xd4fa,	// (0x0001c3b5) main_cset_text_pane_t5_copy1

0xdd44,	// (0x0001cbff) main_cset_text_pane_t6_copy1

0xdd52,	// (0x0001cc0d) main_cset_text_pane_t7_copy1

0x71de,	// (0x00016099) main_cset_text2_pane_t1_copy1

0x94fa,	// (0x000183b5) main_ncimui_pane

0x37b2,	// (0x0001266d) popup_query_ncimui_window_ParamLimits

0x37b2,	// (0x0001266d) popup_query_ncimui_window

0xc651,	// (0x0001b50c) field_cale_ev2_pane_g4_ParamLimits

0xc651,	// (0x0001b50c) field_cale_ev2_pane_g4

0x53a9,	// (0x00014264) cell_video_dialer_keypad_pane_g2_ParamLimits

0x53a9,	// (0x00014264) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x0001e75f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x0001e75f) cell_video_dialer_keypad_pane_g

0x53c1,	// (0x0001427c) cell_video_dialer_keypad_pane_t1

0x948a,	// (0x00018345) bg_popup_window_pane_cp012

0xa668,	// (0x00019523) heading_pane_cp06

0xdd7e,	// (0x0001cc39) ncim_query_content_pane

0x948a,	// (0x00018345) bg_popup_heading_pane_cp01

0xdd86,	// (0x0001cc41) ncim_heading_pane_t1

0xdd94,	// (0x0001cc4f) ncim_indicator_popup_pane

0xdda6,	// (0x0001cc61) ncim_query_button_pane

0xddba,	// (0x0001cc75) ncim_query_content_pane_t1

0xddcc,	// (0x0001cc87) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0001eac9) ncim_query_content_pane_t

0xde06,	// (0x0001ccc1) ncim_query_list_pane

0xde18,	// (0x0001ccd3) ncim_query_popup_pane

0xdd94,	// (0x0001cc4f) ncim_indicator_popup_pane_ParamLimits

0x7621,	// (0x000164dc) ncim_query_content_pane_g1_ParamLimits

0x7621,	// (0x000164dc) ncim_query_content_pane_g1

0xddba,	// (0x0001cc75) ncim_query_content_pane_t1_ParamLimits

0xddcc,	// (0x0001cc87) ncim_query_content_pane_t2_ParamLimits

0x762d,	// (0x000164e8) ncim_query_content_pane_t3_ParamLimits

0x762d,	// (0x000164e8) ncim_query_content_pane_t3

0x7655,	// (0x00016510) ncim_query_content_pane_t4_ParamLimits

0x7655,	// (0x00016510) ncim_query_content_pane_t4

0x767d,	// (0x00016538) ncim_query_content_pane_t5_ParamLimits

0x767d,	// (0x00016538) ncim_query_content_pane_t5

0xddde,	// (0x0001cc99) ncim_query_content_pane_t6_ParamLimits

0xddde,	// (0x0001cc99) ncim_query_content_pane_t6

0xfc0e,	// (0x0001eac9) ncim_query_content_pane_t_ParamLimits

0xde06,	// (0x0001ccc1) ncim_query_list_pane_ParamLimits

0xde18,	// (0x0001ccd3) ncim_query_popup_pane_ParamLimits

0xde2c,	// (0x0001cce7) wait_bar_pane_cp04

0x948a,	// (0x00018345) input_focus_pane_cp011

0xde34,	// (0x0001ccef) ncim_query_popup_pane_t1

0xde42,	// (0x0001ccfd) ncim_list_query_list_pane_ParamLimits

0xde42,	// (0x0001ccfd) ncim_list_query_list_pane

0x948a,	// (0x00018345) bg_button_pane_cp027

0xde4f,	// (0x0001cd0a) ncim_query_button_pane_g1

0x948a,	// (0x00018345) list_highlight_pane_cp012

0xde59,	// (0x0001cd14) ncim_list_query_list_pane_g1

0xde61,	// (0x0001cd1c) ncim_list_query_list_pane_t1

0xd05c,	// (0x0001bf17) cam4_indicators_pane_g3_ParamLimits

0xd05c,	// (0x0001bf17) cam4_indicators_pane_g3

0xd0d7,	// (0x0001bf92) vid4_indicators_pane_g5_ParamLimits

0xd0d7,	// (0x0001bf92) vid4_indicators_pane_g5

0xd7c7,	// (0x0001c682) vid4_progress_pane_g5_ParamLimits

0xd7c7,	// (0x0001c682) vid4_progress_pane_g5

0x750c,	// (0x000163c7) main_ncimui_pane_g1

0x7575,	// (0x00016430) ncimui_group_query_pane_ParamLimits

0x7575,	// (0x00016430) ncimui_group_query_pane

0x75bd,	// (0x00016478) ncimui_list_pane_ParamLimits

0x75bd,	// (0x00016478) ncimui_list_pane

0x75e4,	// (0x0001649f) ncimui_text_pane_ParamLimits

0x75e4,	// (0x0001649f) ncimui_text_pane

0x76a5,	// (0x00016560) ncimui_text_pane_t1_ParamLimits

0x76a5,	// (0x00016560) ncimui_text_pane_t1

0xde6f,	// (0x0001cd2a) ncimui_list_single_graphic_pane_ParamLimits

0xde6f,	// (0x0001cd2a) ncimui_list_single_graphic_pane

0x76c3,	// (0x0001657e) ncimui_query_pane_ParamLimits

0x76c3,	// (0x0001657e) ncimui_query_pane

0x948a,	// (0x00018345) list_highlight_pane_cp013

0xde7f,	// (0x0001cd3a) ncim_list_query_list_pane_t1_copy1

0xde8d,	// (0x0001cd48) ncim_list_single_graphic_pane_g1

0x76d6,	// (0x00016591) ncim_query_button_pane_cp01

0x76e2,	// (0x0001659d) ncim_query_entry_pane_ParamLimits

0x76e2,	// (0x0001659d) ncim_query_entry_pane

0x76f5,	// (0x000165b0) ncimui_query_pane_g1

0x7701,	// (0x000165bc) ncimui_query_pane_t1_ParamLimits

0x7701,	// (0x000165bc) ncimui_query_pane_t1

0x94fa,	// (0x000183b5) input_focus_pane_cp012

0xde95,	// (0x0001cd50) ncim_query_entry_pane_t1

0x9c69,	// (0x00018b24) main_im_pane_ParamLimits

0x94fa,	// (0x000183b5) main_mobtv_pane_ParamLimits

0x94fa,	// (0x000183b5) main_mobtv_pane

0x72ce,	// (0x00016189) main_cset6_slider_pane_g18_ParamLimits

0x72ce,	// (0x00016189) main_cset6_slider_pane_g18

0x72da,	// (0x00016195) main_cset6_slider_pane_g19_ParamLimits

0x72da,	// (0x00016195) main_cset6_slider_pane_g19

0xd217,	// (0x0001c0d2) bg_main_mobtv_pane_ParamLimits

0xd217,	// (0x0001c0d2) bg_main_mobtv_pane

0x771a,	// (0x000165d5) main_mobtv_info_pane

0x7723,	// (0x000165de) main_mobtv_loading_pane_ParamLimits

0x7723,	// (0x000165de) main_mobtv_loading_pane

0xdea7,	// (0x0001cd62) main_mobtv_pg_channel_list_pane

0xdeb1,	// (0x0001cd6c) main_mobtv_pg_hdr_pane

0x7730,	// (0x000165eb) main_mobtv_programe_curr_pane_ParamLimits

0x7730,	// (0x000165eb) main_mobtv_programe_curr_pane

0x773d,	// (0x000165f8) main_mobtv_programe_next_pane_ParamLimits

0x773d,	// (0x000165f8) main_mobtv_programe_next_pane

0xdeba,	// (0x0001cd75) popup_mobtv_noti_window

0xc36b,	// (0x0001b226) main_tv_pg_hdr_pane_g1

0xdec2,	// (0x0001cd7d) main_tv_pg_hdr_pane_g2

0xdeca,	// (0x0001cd85) main_tv_pg_hdr_pane_g3

0xded2,	// (0x0001cd8d) main_tv_pg_hdr_pane_g4

0xdeda,	// (0x0001cd95) main_tv_pg_hdr_pane_g5

0xdee4,	// (0x0001cd9f) main_tv_pg_hdr_pane_g6

0xdeee,	// (0x0001cda9) main_tv_pg_hdr_pane_g7

0xdef8,	// (0x0001cdb3) main_tv_pg_hdr_pane_g8

0xdf02,	// (0x0001cdbd) main_tv_pg_hdr_pane_g9

0xdf0c,	// (0x0001cdc7) main_tv_pg_hdr_pane_g10

0xdf16,	// (0x0001cdd1) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0001ead6) main_tv_pg_hdr_pane_g

0xdf20,	// (0x0001cddb) main_tv_pg_hdr_pane_t1

0xdf2e,	// (0x0001cde9) main_tv_pg_hdr_pane_t2

0xdf3c,	// (0x0001cdf7) main_tv_pg_hdr_pane_t3

0xdf4c,	// (0x0001ce07) main_tv_pg_hdr_pane_t4

0xdf5c,	// (0x0001ce17) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0001eaed) main_tv_pg_hdr_pane_t

0xdf6c,	// (0x0001ce27) single_mobtv_pg_channel_pane_ParamLimits

0xdf6c,	// (0x0001ce27) single_mobtv_pg_channel_pane

0xdf7e,	// (0x0001ce39) single_mobtv_pg_channel_table_pane

0xa241,	// (0x000190fc) single_mobtv_pg_channel_thumb_pane

0xdf87,	// (0x0001ce42) single_tv_pg_channel_pane_g1

0xdf90,	// (0x0001ce4b) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0001eaf8) single_tv_pg_channel_pane_g

0xc5b0,	// (0x0001b46b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc5b0,	// (0x0001b46b) bg_single_mobtv_pg_channel_thumb_pane

0xdf99,	// (0x0001ce54) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf99,	// (0x0001ce54) single_mobtv_pg_channel_thumb_pane_g1

0xdfa7,	// (0x0001ce62) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfa7,	// (0x0001ce62) single_mobtv_pg_channel_thumb_pane_g2

0xdfb3,	// (0x0001ce6e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfb3,	// (0x0001ce6e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0001eafd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0001eafd) single_mobtv_pg_channel_thumb_pane_g

0xdfbf,	// (0x0001ce7a) single_mobtv_pg_channel_thumb_pane_t1

0xdfcd,	// (0x0001ce88) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0001eb04) single_mobtv_pg_channel_thumb_pane_t

0xc36b,	// (0x0001b226) bg_single_mobtv_pg_channel_table_pane_g1

0xc36b,	// (0x0001b226) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0001e5a6) bg_single_mobtv_pg_channel_table_pane_g

0xdfdb,	// (0x0001ce96) single_mobtv_pg_channel_table_pane_t1

0xdfe9,	// (0x0001cea4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0001eb09) single_mobtv_pg_channel_table_pane_t

0x7752,	// (0x0001660d) main_mobtv_info_pane_g1_ParamLimits

0x7752,	// (0x0001660d) main_mobtv_info_pane_g1

0x7770,	// (0x0001662b) main_mobtv_info_pane_t1_ParamLimits

0x7770,	// (0x0001662b) main_mobtv_info_pane_t1

0x77e8,	// (0x000166a3) main_mobtv_info_pane_t2_ParamLimits

0x77e8,	// (0x000166a3) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0001eb13) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0001eb13) main_mobtv_info_pane_t

0x7877,	// (0x00016732) wait_bar_pane_cp05

0x7889,	// (0x00016744) main_mobtv_loading_pane_g1_ParamLimits

0x7889,	// (0x00016744) main_mobtv_loading_pane_g1

0x789c,	// (0x00016757) main_mobtv_loading_pane_g2_ParamLimits

0x789c,	// (0x00016757) main_mobtv_loading_pane_g2

0x78a8,	// (0x00016763) main_mobtv_loading_pane_g3_ParamLimits

0x78a8,	// (0x00016763) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0001eb1a) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0001eb1a) main_mobtv_loading_pane_g

0xdff7,	// (0x0001ceb2) main_mobtv_loading_pane_t1_ParamLimits

0xdff7,	// (0x0001ceb2) main_mobtv_loading_pane_t1

0xe00f,	// (0x0001ceca) main_mobtv_loading_pane_t2_ParamLimits

0xe00f,	// (0x0001ceca) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0001eb21) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0001eb21) main_mobtv_loading_pane_t

0x78bb,	// (0x00016776) wait_bar_pane_cp06_ParamLimits

0x78bb,	// (0x00016776) wait_bar_pane_cp06

0xe033,	// (0x0001ceee) main_mobtv_programe_curr_pane_t1

0xe041,	// (0x0001cefc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0001eb26) main_mobtv_programe_curr_pane_t

0xe04f,	// (0x0001cf0a) main_mobtv_programe_next_pane_t1

0xe05d,	// (0x0001cf18) main_mobtv_programe_next_pane_t2

0xe06b,	// (0x0001cf26) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0001eb2b) main_mobtv_programe_next_pane_t

0x948a,	// (0x00018345) bg_popup_mobtv_noti_window_pane

0xe079,	// (0x0001cf34) popup_mobtv_noti_window_g1

0xe081,	// (0x0001cf3c) popup_mobtv_noti_window_t1

0xe08f,	// (0x0001cf4a) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0001eb32) popup_mobtv_noti_window_t

0xc36b,	// (0x0001b226) bg_popup_mobtv_noti_window_pane_g1

0x948a,	// (0x00018345) sc_clock_pane

0x948a,	// (0x00018345) main_fs_bigclock_pane

0x6f2b,	// (0x00015de6) blid2_tripm_pane_t4_ParamLimits

0x6f2b,	// (0x00015de6) blid2_tripm_pane_t4

0x78ca,	// (0x00016785) sc_clock_pane_g1_ParamLimits

0x78ca,	// (0x00016785) sc_clock_pane_g1

0x78dc,	// (0x00016797) sc_clock_pane_t1_ParamLimits

0x78dc,	// (0x00016797) sc_clock_pane_t1

0x78fe,	// (0x000167b9) sc_clock_pane_t2_ParamLimits

0x78fe,	// (0x000167b9) sc_clock_pane_t2

0x7916,	// (0x000167d1) sc_clock_pane_t3_ParamLimits

0x7916,	// (0x000167d1) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0001eb37) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0001eb37) sc_clock_pane_t

0x8906,	// (0x000177c1) main_fs_bigclock_indicator_pane_ParamLimits

0x8906,	// (0x000177c1) main_fs_bigclock_indicator_pane

0x79bc,	// (0x00016877) main_fs_bigclock_pane_g1_ParamLimits

0x79bc,	// (0x00016877) main_fs_bigclock_pane_g1

0x8912,	// (0x000177cd) main_fs_bigclock_pane_t1_ParamLimits

0x8912,	// (0x000177cd) main_fs_bigclock_pane_t1

0x8924,	// (0x000177df) main_fs_bigclock_pane_t2_ParamLimits

0x8924,	// (0x000177df) main_fs_bigclock_pane_t2

0x8938,	// (0x000177f3) main_fs_bigclock_pane_t3_ParamLimits

0x8938,	// (0x000177f3) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x0001ed3c) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0001ed3c) main_fs_bigclock_pane_t

0xec9a,	// (0x0001db55) main_fs_bigclock_indicator_pane_g1

0xddae,	// (0x0001cc69) ncim_query_content_pane_g2_ParamLimits

0xddae,	// (0x0001cc69) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0001eac4) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0001eac4) ncim_query_content_pane_g

0x792f,	// (0x000167ea) sc_clock_pane_t4_ParamLimits

0x792f,	// (0x000167ea) sc_clock_pane_t4

0x94fa,	// (0x000183b5) main_radioblah_pane

0xcfa5,	// (0x0001be60) cell_call4_button_pane_t1_copy1_ParamLimits

0xcfa5,	// (0x0001be60) cell_call4_button_pane_t1_copy1

0x7524,	// (0x000163df) main_ncimui_pane_t1_ParamLimits

0x7524,	// (0x000163df) main_ncimui_pane_t1

0x753e,	// (0x000163f9) main_ncimui_pane_t2_ParamLimits

0x753e,	// (0x000163f9) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0001eabd) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0001eabd) main_ncimui_pane_t

0xe1d5,	// (0x0001d090) main_radioblah_anim_pane_ParamLimits

0xe1d5,	// (0x0001d090) main_radioblah_anim_pane

0xe1e6,	// (0x0001d0a1) main_radioblah_info_pane_ParamLimits

0xe1e6,	// (0x0001d0a1) main_radioblah_info_pane

0xe1fa,	// (0x0001d0b5) main_radioblah_pane_t1_ParamLimits

0xe1fa,	// (0x0001d0b5) main_radioblah_pane_t1

0xe216,	// (0x0001d0d1) main_radioblah_pane_t2_ParamLimits

0xe216,	// (0x0001d0d1) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0001eb58) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0001eb58) main_radioblah_pane_t

0x7a1b,	// (0x000168d6) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a1b,	// (0x000168d6) main_radioblah_rocker_ctrl_pane

0xe25e,	// (0x0001d119) main_radioblah_info_pane_t1_ParamLimits

0xe25e,	// (0x0001d119) main_radioblah_info_pane_t1

0x7a73,	// (0x0001692e) main_radioblah_info_pane_t2_ParamLimits

0x7a73,	// (0x0001692e) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0001eb61) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0001eb61) main_radioblah_info_pane_t

0xc36b,	// (0x0001b226) main_radioblah_rocker_ctrl_pane_g1

0x7b23,	// (0x000169de) main_radioblah_rocker_ctrl_pane_g2

0x7b2b,	// (0x000169e6) main_radioblah_rocker_ctrl_pane_g3

0x7b33,	// (0x000169ee) main_radioblah_rocker_ctrl_pane_g4

0x7b3b,	// (0x000169f6) main_radioblah_rocker_ctrl_pane_g5

0x7b43,	// (0x000169fe) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0001eb6a) main_radioblah_rocker_ctrl_pane_g

0x71de,	// (0x00016099) main_cset_text2_pane_t1_copy1_ParamLimits

0xd02f,	// (0x0001beea) cam4_image_uncrop_qvga_pane

0xd082,	// (0x0001bf3d) vid4_image_uncrop_qcif_pane

0xd9b5,	// (0x0001c870) cam6_image_uncrop_qvga_pane_ParamLimits

0xd9b5,	// (0x0001c870) cam6_image_uncrop_qvga_pane

0xda7d,	// (0x0001c938) vid6_image_uncrop_qcif_pane_ParamLimits

0xda7d,	// (0x0001c938) vid6_image_uncrop_qcif_pane

0x948a,	// (0x00018345) bg_popup_preview_window_pane_cp03

0xdd60,	// (0x0001cc1b) list_cset_text2_pane

0xdd68,	// (0x0001cc23) main_cset6_text2_pane_g1

0xdd70,	// (0x0001cc2b) main_cset6_text2_pane_t1

0xea3c,	// (0x0001d8f7) list_cset_text2_pane_t1_ParamLimits

0xea3c,	// (0x0001d8f7) list_cset_text2_pane_t1

0x94fa,	// (0x000183b5) main_radioblah_pane_ParamLimits

0x7863,	// (0x0001671e) main_mobtv_info_pane_t3_ParamLimits

0x7863,	// (0x0001671e) main_mobtv_info_pane_t3

0x7a09,	// (0x000168c4) main_radioblah_pane_g1

0x7a43,	// (0x000168fe) main_radioblah_info_pane_g1

0x7ac8,	// (0x00016983) main_radioblah_info_pane_t3_ParamLimits

0x7ac8,	// (0x00016983) main_radioblah_info_pane_t3

0x21a7,	// (0x00011062) highlight_cell_cale_month_pane_ParamLimits

0x21a7,	// (0x00011062) highlight_cell_cale_month_pane

0x948a,	// (0x00018345) main_phob_fisheye_pane

0xc700,	// (0x0001b5bb) scroll_pane_cp0031_ParamLimits

0xc700,	// (0x0001b5bb) scroll_pane_cp0031

0xdb8b,	// (0x0001ca46) wait_bar_pane_cp08_ParamLimits

0x7260,	// (0x0001611b) cset_list_set_pane_copy1_ParamLimits

0xe298,	// (0x0001d153) highlight_cell_cale_month_pane_g1

0x7b4b,	// (0x00016a06) highlight_cell_cale_month_pane_t1

0xd78a,	// (0x0001c645) list_gen_pane_cp01

0xd2d5,	// (0x0001c190) scroll_pane_01

0x7b59,	// (0x00016a14) list_single_double_fisheye_pane

0x7b62,	// (0x00016a1d) list_double_fisheye_pane_g1_ParamLimits

0x7b62,	// (0x00016a1d) list_double_fisheye_pane_g1

0x7b6e,	// (0x00016a29) list_double_fisheye_pane_g2_ParamLimits

0x7b6e,	// (0x00016a29) list_double_fisheye_pane_g2

0x7b82,	// (0x00016a3d) list_double_fisheye_pane_g3_ParamLimits

0x7b82,	// (0x00016a3d) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0001eb77) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0001eb77) list_double_fisheye_pane_g

0x7bab,	// (0x00016a66) list_double_fisheye_pane_t1_ParamLimits

0x7bab,	// (0x00016a66) list_double_fisheye_pane_t1

0x7bc6,	// (0x00016a81) list_double_fisheye_pane_t2_ParamLimits

0x7bc6,	// (0x00016a81) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0001eb82) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0001eb82) list_double_fisheye_pane_t

0x948a,	// (0x00018345) main_call5_pane

0x795a,	// (0x00016815) sc_swipe_pane_ParamLimits

0x795a,	// (0x00016815) sc_swipe_pane

0x7bfb,	// (0x00016ab6) call5_image_pane_ParamLimits

0x7bfb,	// (0x00016ab6) call5_image_pane

0x7c18,	// (0x00016ad3) call5_swipe_1_pane_ParamLimits

0x7c18,	// (0x00016ad3) call5_swipe_1_pane

0x7c2b,	// (0x00016ae6) call5_swipe_2_pane_ParamLimits

0x7c2b,	// (0x00016ae6) call5_swipe_2_pane

0x7c56,	// (0x00016b11) popup_call5_audio_first_window_ParamLimits

0x7c56,	// (0x00016b11) popup_call5_audio_first_window

0xc5b0,	// (0x0001b46b) call5_swipe_1_pane_g1_ParamLimits

0xc5b0,	// (0x0001b46b) call5_swipe_1_pane_g1

0xe2a0,	// (0x0001d15b) call5_swipe_1_pane_g2_ParamLimits

0xe2a0,	// (0x0001d15b) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0001eb87) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0001eb87) call5_swipe_1_pane_g

0xe2ac,	// (0x0001d167) call5_swipe_1_pane_t1_ParamLimits

0xe2ac,	// (0x0001d167) call5_swipe_1_pane_t1

0xc5b0,	// (0x0001b46b) call5_swipe_2_pane_g1_ParamLimits

0xc5b0,	// (0x0001b46b) call5_swipe_2_pane_g1

0xe2c1,	// (0x0001d17c) call5_swipe_2_pane_g2_ParamLimits

0xe2c1,	// (0x0001d17c) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0001eb8c) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0001eb8c) call5_swipe_2_pane_g

0xe2cd,	// (0x0001d188) call5_swipe_2_pane_t1_ParamLimits

0xe2cd,	// (0x0001d188) call5_swipe_2_pane_t1

0xe2e2,	// (0x0001d19d) sc_swipe_pane_g1_ParamLimits

0xe2e2,	// (0x0001d19d) sc_swipe_pane_g1

0xe2ef,	// (0x0001d1aa) sc_swipe_pane_g2_ParamLimits

0xe2ef,	// (0x0001d1aa) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0001eb91) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0001eb91) sc_swipe_pane_g

0xe2fb,	// (0x0001d1b6) sc_swipe_pane_t1_ParamLimits

0xe2fb,	// (0x0001d1b6) sc_swipe_pane_t1

0x948a,	// (0x00018345) main_cmail_launcher_pane

0x7c67,	// (0x00016b22) aid_size_cell_cmail_l_ParamLimits

0x7c67,	// (0x00016b22) aid_size_cell_cmail_l

0x7c75,	// (0x00016b30) grid_cmail_l_pane_ParamLimits

0x7c75,	// (0x00016b30) grid_cmail_l_pane

0x7c8f,	// (0x00016b4a) cell_cmail_l_pane_ParamLimits

0x7c8f,	// (0x00016b4a) cell_cmail_l_pane

0xe310,	// (0x0001d1cb) cell_cmail_l_pane_g1_ParamLimits

0xe310,	// (0x0001d1cb) cell_cmail_l_pane_g1

0xe31c,	// (0x0001d1d7) cell_cmail_l_pane_t1_ParamLimits

0xe31c,	// (0x0001d1d7) cell_cmail_l_pane_t1

0xe332,	// (0x0001d1ed) cell_cmail_l_pane_t2_ParamLimits

0xe332,	// (0x0001d1ed) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0001eb96) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0001eb96) cell_cmail_l_pane_t

0x94fa,	// (0x000183b5) grid_highlight_pane_cp018_ParamLimits

0x94fa,	// (0x000183b5) grid_highlight_pane_cp018

0x045b,	// (0x0000f316) main2_pane_ParamLimits

0x045b,	// (0x0000f316) main2_pane

0x9d2f,	// (0x00018bea) popup_sp_fs_action_menu_bg_pane_g1

0x9d37,	// (0x00018bf2) popup_sp_fs_action_menu_bg_pane_g2

0x9d3f,	// (0x00018bfa) popup_sp_fs_action_menu_bg_pane_g3

0x9d47,	// (0x00018c02) popup_sp_fs_action_menu_bg_pane_g4

0x9d4f,	// (0x00018c0a) popup_sp_fs_action_menu_bg_pane_g5

0x9d57,	// (0x00018c12) popup_sp_fs_action_menu_bg_pane_g6

0x9d5f,	// (0x00018c1a) popup_sp_fs_action_menu_bg_pane_g7

0x9d67,	// (0x00018c22) popup_sp_fs_action_menu_bg_pane_g8

0x9d6f,	// (0x00018c2a) popup_sp_fs_action_menu_bg_pane_g9

0x9d77,	// (0x00018c32) popup_sp_fs_action_menu_bg_pane_g10

0x9d77,	// (0x00018c32) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0001e041) popup_sp_fs_action_menu_bg_pane_g

0x1354,	// (0x0001020f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x2_t3_g3_g1

0x1360,	// (0x0001021b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1360,	// (0x0001021b) list_medium_line_x2_t3_g3_g2

0x136c,	// (0x00010227) list_medium_line_x2_t3_g3_g3_ParamLimits

0x136c,	// (0x00010227) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0001e0ef) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0001e0ef) list_medium_line_x2_t3_g3_g

0x1378,	// (0x00010233) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1378,	// (0x00010233) list_medium_line_x2_t3_g3_t1

0x138d,	// (0x00010248) list_medium_line_x2_t3_g3_t2_ParamLimits

0x138d,	// (0x00010248) list_medium_line_x2_t3_g3_t2

0x13a1,	// (0x0001025c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x13a1,	// (0x0001025c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0001e0f6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0001e0f6) list_medium_line_x2_t3_g3_t

0x1354,	// (0x0001020f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x2_t3_g2_g1

0x136c,	// (0x00010227) list_medium_line_x2_t3_g2_g2_ParamLimits

0x136c,	// (0x00010227) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0001e0fd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0001e0fd) list_medium_line_x2_t3_g2_g

0x13b6,	// (0x00010271) list_medium_line_x2_t3_g2_t1_ParamLimits

0x13b6,	// (0x00010271) list_medium_line_x2_t3_g2_t1

0x13cc,	// (0x00010287) list_medium_line_x2_t3_g2_t2_ParamLimits

0x13cc,	// (0x00010287) list_medium_line_x2_t3_g2_t2

0x13de,	// (0x00010299) list_medium_line_x2_t3_g2_t3_ParamLimits

0x13de,	// (0x00010299) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0001e102) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0001e102) list_medium_line_x2_t3_g2_t

0x1354,	// (0x0001020f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x2_t4_g4_g1

0x13fc,	// (0x000102b7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x13fc,	// (0x000102b7) list_medium_line_x2_t4_g4_g2

0x1360,	// (0x0001021b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1360,	// (0x0001021b) list_medium_line_x2_t4_g4_g3

0x1408,	// (0x000102c3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1408,	// (0x000102c3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0001e109) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0001e109) list_medium_line_x2_t4_g4_g

0x1414,	// (0x000102cf) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1414,	// (0x000102cf) list_medium_line_x2_t4_g4_t1

0x142e,	// (0x000102e9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x142e,	// (0x000102e9) list_medium_line_x2_t4_g4_t2

0x1444,	// (0x000102ff) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1444,	// (0x000102ff) list_medium_line_x2_t4_g4_t3

0x1459,	// (0x00010314) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1459,	// (0x00010314) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0001e112) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0001e112) list_medium_line_x2_t4_g4_t

0x1354,	// (0x0001020f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x2_t2_g4_g1

0x13fc,	// (0x000102b7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x13fc,	// (0x000102b7) list_medium_line_x2_t2_g4_g2

0x1360,	// (0x0001021b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1360,	// (0x0001021b) list_medium_line_x2_t2_g4_g3

0x136c,	// (0x00010227) list_medium_line_x2_t2_g4_g4_ParamLimits

0x136c,	// (0x00010227) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0001e179) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0001e179) list_medium_line_x2_t2_g4_g

0x21cd,	// (0x00011088) list_medium_line_x2_t2_g4_t1_ParamLimits

0x21cd,	// (0x00011088) list_medium_line_x2_t2_g4_t1

0x13a1,	// (0x0001025c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x13a1,	// (0x0001025c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0001e182) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0001e182) list_medium_line_x2_t2_g4_t

0x1354,	// (0x0001020f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x2_t2_g3_g1

0x1360,	// (0x0001021b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1360,	// (0x0001021b) list_medium_line_x2_t2_g3_g2

0x136c,	// (0x00010227) list_medium_line_x2_t2_g3_g3_ParamLimits

0x136c,	// (0x00010227) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0001e0ef) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0001e0ef) list_medium_line_x2_t2_g3_g

0x21e2,	// (0x0001109d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x21e2,	// (0x0001109d) list_medium_line_x2_t2_g3_t1

0x13a1,	// (0x0001025c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x13a1,	// (0x0001025c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0001e187) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0001e187) list_medium_line_x2_t2_g3_t

0x2336,	// (0x000111f1) main_sp_fs_list_pane_ParamLimits

0x2336,	// (0x000111f1) main_sp_fs_list_pane

0xd23c,	// (0x0001c0f7) sp_fs_scroll_pane_ParamLimits

0xd23c,	// (0x0001c0f7) sp_fs_scroll_pane

0x2342,	// (0x000111fd) list_medium_line_x2_t3_t1

0x2352,	// (0x0001120d) list_medium_line_x2_t3_t2

0x2360,	// (0x0001121b) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0001e1d2) list_medium_line_x2_t3_t

0x236e,	// (0x00011229) list_medium_line_x3_t4_t1

0x237e,	// (0x00011239) list_medium_line_x3_t4_t2

0x238c,	// (0x00011247) list_medium_line_x3_t4_t3

0x2360,	// (0x0001121b) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0001e1d9) list_medium_line_x3_t4_t

0x239a,	// (0x00011255) list_medium_line_x4_t5_t1

0x23aa,	// (0x00011265) list_medium_line_x4_t5_t2

0x238c,	// (0x00011247) list_medium_line_x4_t5_t3

0x23b8,	// (0x00011273) list_medium_line_x4_t5_t4

0x2360,	// (0x0001121b) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0001e1e2) list_medium_line_x4_t5_t

0x1354,	// (0x0001020f) list_medium_line_t4_g4_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_t4_g4_g1

0x1408,	// (0x000102c3) list_medium_line_t4_g4_g2_ParamLimits

0x1408,	// (0x000102c3) list_medium_line_t4_g4_g2

0x23c6,	// (0x00011281) list_medium_line_t4_g4_g3_ParamLimits

0x23c6,	// (0x00011281) list_medium_line_t4_g4_g3

0x136c,	// (0x00010227) list_medium_line_t4_g4_g4_ParamLimits

0x136c,	// (0x00010227) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0001e1ed) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0001e1ed) list_medium_line_t4_g4_g

0x23d2,	// (0x0001128d) list_medium_line_t4_g4_t1_ParamLimits

0x23d2,	// (0x0001128d) list_medium_line_t4_g4_t1

0x23e7,	// (0x000112a2) list_medium_line_t4_g4_t2_ParamLimits

0x23e7,	// (0x000112a2) list_medium_line_t4_g4_t2

0x23fd,	// (0x000112b8) list_medium_line_t4_g4_t3_ParamLimits

0x23fd,	// (0x000112b8) list_medium_line_t4_g4_t3

0x13a1,	// (0x0001025c) list_medium_line_t4_g4_t4_ParamLimits

0x13a1,	// (0x0001025c) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0001e1f6) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0001e1f6) list_medium_line_t4_g4_t

0x24d6,	// (0x00011391) chi_dic_find_pane_g1

0x3582,	// (0x0001243d) main_tport_pane

0xd429,	// (0x0001c2e4) list_medium_line_plain_t1

0x662e,	// (0x000154e9) list_medium_line_t2_g2_g1_ParamLimits

0x662e,	// (0x000154e9) list_medium_line_t2_g2_g1

0x663a,	// (0x000154f5) list_medium_line_t2_g2_g2_ParamLimits

0x663a,	// (0x000154f5) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0001e8ce) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0001e8ce) list_medium_line_t2_g2_g

0x6646,	// (0x00015501) list_medium_line_t2_g2_t1_ParamLimits

0x6646,	// (0x00015501) list_medium_line_t2_g2_t1

0x6660,	// (0x0001551b) list_medium_line_t2_g2_t2_ParamLimits

0x6660,	// (0x0001551b) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0001e8d3) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0001e8d3) list_medium_line_t2_g2_t

0xd7fe,	// (0x0001c6b9) aid_sp_fs_list_icon_a_sm

0xd806,	// (0x0001c6c1) aid_sp_fs_list_icon_d

0xd80e,	// (0x0001c6c9) aid_sp_fs_text_primary

0xd817,	// (0x0001c6d2) aid_sp_fs_text_secondary

0x6cd8,	// (0x00015b93) list_medium_line

0x6cd8,	// (0x00015b93) list_medium_line_g2

0x6cd8,	// (0x00015b93) list_medium_line_g3

0x6cd8,	// (0x00015b93) list_medium_line_plain

0x6cd8,	// (0x00015b93) list_medium_line_plain_t2

0x6cd8,	// (0x00015b93) list_medium_line_plain_t3

0x6cd8,	// (0x00015b93) list_medium_line_right_icon

0x6cd8,	// (0x00015b93) list_medium_line_right_iconx2

0x6cd8,	// (0x00015b93) list_medium_line_t2

0x6cd8,	// (0x00015b93) list_medium_line_t2_g2

0x6cd8,	// (0x00015b93) list_medium_line_t2_g3

0x6cd8,	// (0x00015b93) list_medium_line_t2_right_icon

0x6cd8,	// (0x00015b93) list_medium_line_t2_right_iconx2

0x6cd8,	// (0x00015b93) list_medium_line_t3

0x6cd8,	// (0x00015b93) list_medium_line_t3_g2

0x6cd8,	// (0x00015b93) list_medium_line_t3_g3

0x6cd8,	// (0x00015b93) list_medium_line_t3_right_iconx2

0x6ce1,	// (0x00015b9c) list_medium_line_t4_g4

0x6cea,	// (0x00015ba5) list_medium_line_x2

0x6cea,	// (0x00015ba5) list_medium_line_x2_t2_g2

0x6cea,	// (0x00015ba5) list_medium_line_x2_t2_g3

0x6cea,	// (0x00015ba5) list_medium_line_x2_t2_g4

0x6cea,	// (0x00015ba5) list_medium_line_x2_t3

0x6cea,	// (0x00015ba5) list_medium_line_x2_t3_g2

0x6cea,	// (0x00015ba5) list_medium_line_x2_t3_g3

0x6cea,	// (0x00015ba5) list_medium_line_x2_t3_g4

0x6cea,	// (0x00015ba5) list_medium_line_x2_t4_g2

0x6cea,	// (0x00015ba5) list_medium_line_x2_t4_g4

0x6cf3,	// (0x00015bae) list_medium_line_x3

0x6cf3,	// (0x00015bae) list_medium_line_x3_t4

0x6cf3,	// (0x00015bae) list_medium_line_x3_t4_g4

0x6ce1,	// (0x00015b9c) list_medium_line_x4_t4

0x6ce1,	// (0x00015b9c) list_medium_line_x4_t4_g7

0x6ce1,	// (0x00015b9c) list_medium_line_x4_t5

0x6cfc,	// (0x00015bb7) list_single_fs_dyc_pane_ParamLimits

0x6cfc,	// (0x00015bb7) list_single_fs_dyc_pane

0x1354,	// (0x0001020f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x4_t4_g7_g1

0x7422,	// (0x000162dd) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7422,	// (0x000162dd) list_medium_line_x4_t4_g7_g2

0x742e,	// (0x000162e9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x742e,	// (0x000162e9) list_medium_line_x4_t4_g7_g3

0x743d,	// (0x000162f8) list_medium_line_x4_t4_g7_g4_ParamLimits

0x743d,	// (0x000162f8) list_medium_line_x4_t4_g7_g4

0x7449,	// (0x00016304) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7449,	// (0x00016304) list_medium_line_x4_t4_g7_g5

0x7458,	// (0x00016313) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7458,	// (0x00016313) list_medium_line_x4_t4_g7_g6

0x7467,	// (0x00016322) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7467,	// (0x00016322) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0001ea9e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0001ea9e) list_medium_line_x4_t4_g7_g

0x7473,	// (0x0001632e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7473,	// (0x0001632e) list_medium_line_x4_t4_g7_t1

0x7488,	// (0x00016343) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7488,	// (0x00016343) list_medium_line_x4_t4_g7_t2

0x749d,	// (0x00016358) list_medium_line_x4_t4_g7_t3_ParamLimits

0x749d,	// (0x00016358) list_medium_line_x4_t4_g7_t3

0x74b2,	// (0x0001636d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74b2,	// (0x0001636d) list_medium_line_x4_t4_g7_t4

0x74c4,	// (0x0001637f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x74c4,	// (0x0001637f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0001eaad) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0001eaad) list_medium_line_x4_t4_g7_t

0x74d6,	// (0x00016391) list_single_dyc_row_pane_ParamLimits

0x74d6,	// (0x00016391) list_single_dyc_row_pane

0x7be8,	// (0x00016aa3) call5_gesture_pane_ParamLimits

0x7be8,	// (0x00016aa3) call5_gesture_pane

0x7c3e,	// (0x00016af9) call5_windows_pane_ParamLimits

0x7c3e,	// (0x00016af9) call5_windows_pane

0x7ca9,	// (0x00016b64) call5_swipe_1_pane_cp_ParamLimits

0x7ca9,	// (0x00016b64) call5_swipe_1_pane_cp

0x7cb5,	// (0x00016b70) call5_swipe_2_pane_cp_ParamLimits

0x7cb5,	// (0x00016b70) call5_swipe_2_pane_cp

0x9ecf,	// (0x00018d8a) call5_image_pane_cp

0x7cc1,	// (0x00016b7c) popup_call5_audio_first_window_cp_ParamLimits

0x7cc1,	// (0x00016b7c) popup_call5_audio_first_window_cp

0xe2e2,	// (0x0001d19d) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2e2,	// (0x0001d19d) call5_swipe_1_pane_g1_cp

0xe34f,	// (0x0001d20a) call5_swipe_1_pane_g2_cp

0xe2fb,	// (0x0001d1b6) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2fb,	// (0x0001d1b6) call5_swipe_1_pane_t1_cp

0xe2e2,	// (0x0001d19d) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2e2,	// (0x0001d19d) call5_swipe_2_pane_g1_cp

0xe357,	// (0x0001d212) call5_swipe_2_pane_g2_cp

0xe35f,	// (0x0001d21a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe35f,	// (0x0001d21a) call5_swipe_2_pane_t1_cp

0x94fa,	// (0x000183b5) main_sp_fs_email_pane

0xe374,	// (0x0001d22f) main_sp_fs_listscroll_pane_te

0x7ccf,	// (0x00016b8a) popup_sp_fs_action_menu_pane_ParamLimits

0x7ccf,	// (0x00016b8a) popup_sp_fs_action_menu_pane

0xc36b,	// (0x0001b226) bg_sp_fs_ctrlbar_pane_g1

0xe37d,	// (0x0001d238) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe386,	// (0x0001d241) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe38f,	// (0x0001d24a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc36b,	// (0x0001b226) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0001eb9b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc150,	// (0x0001b00b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc150,	// (0x0001b00b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe398,	// (0x0001d253) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe398,	// (0x0001d253) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3a4,	// (0x0001d25f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3a4,	// (0x0001d25f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0001eba4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0001eba4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3b0,	// (0x0001d26b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3b0,	// (0x0001d26b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d13,	// (0x00016bce) list_medium_line_t2_right_icon_g1

0x7d1b,	// (0x00016bd6) list_medium_line_t2_right_icon_t1

0x7d2b,	// (0x00016be6) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0001eba9) list_medium_line_t2_right_icon_t

0xbe50,	// (0x0001ad0b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbe50,	// (0x0001ad0b) bg_sp_fs_ctrlbar_pane

0x7d85,	// (0x00016c40) main_sp_fs_ctrlbar_button_pane_cp01

0x7d8f,	// (0x00016c4a) main_sp_fs_ctrlbar_ddmenu_pane

0xe402,	// (0x0001d2bd) main_sp_fs_ctrlbar_pane_g1

0xe40e,	// (0x0001d2c9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0001ebae) main_sp_fs_ctrlbar_pane_g

0xe41a,	// (0x0001d2d5) main_sp_fs_ctrlbar_pane_t1

0x7d99,	// (0x00016c54) main_sp_fs_ctrlbar_pane

0x7dbd,	// (0x00016c78) main_sp_fs_listscroll_pane_te_cp01

0x7ddd,	// (0x00016c98) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7ddd,	// (0x00016c98) popup_sp_fs_action_menu_pane_cp01

0x94fa,	// (0x000183b5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x94fa,	// (0x000183b5) bg_sp_fs_highlight_list_pane_cp01

0xe44a,	// (0x0001d305) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe44a,	// (0x0001d305) sp_fs_action_menu_list_gene_pane_g1

0xe459,	// (0x0001d314) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe459,	// (0x0001d314) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0001ebb8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0001ebb8) sp_fs_action_menu_list_gene_pane_g

0xe466,	// (0x0001d321) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe466,	// (0x0001d321) sp_fs_action_menu_list_gene_pane_t1

0xe47e,	// (0x0001d339) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe47e,	// (0x0001d339) sp_fs_action_menu_list_gene_pane

0xe49d,	// (0x0001d358) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe49d,	// (0x0001d358) popup_sp_fs_action_menu_bg_pane

0xe4ab,	// (0x0001d366) sp_fs_action_menu_list_pane_ParamLimits

0xe4ab,	// (0x0001d366) sp_fs_action_menu_list_pane

0x7e0d,	// (0x00016cc8) sp_fs_scroll_pane_cp01_ParamLimits

0x7e0d,	// (0x00016cc8) sp_fs_scroll_pane_cp01

0x7e33,	// (0x00016cee) list_medium_line_plain_t2_t1

0x7e43,	// (0x00016cfe) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0001ebbd) list_medium_line_plain_t2_t

0x7e53,	// (0x00016d0e) list_medium_line_plain_t3_t1

0x7e63,	// (0x00016d1e) list_medium_line_plain_t3_t2

0x7e71,	// (0x00016d2c) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0001ebc2) list_medium_line_plain_t3_t

0x1354,	// (0x0001020f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x2_t2_g2_g1

0x136c,	// (0x00010227) list_medium_line_x2_t2_g2_g2_ParamLimits

0x136c,	// (0x00010227) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0001e0fd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0001e0fd) list_medium_line_x2_t2_g2_g

0x23d2,	// (0x0001128d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x23d2,	// (0x0001128d) list_medium_line_x2_t2_g2_t1

0x13a1,	// (0x0001025c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x13a1,	// (0x0001025c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0001ebc9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0001ebc9) list_medium_line_x2_t2_g2_t

0x1354,	// (0x0001020f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x2_t4_g2_g1

0x136c,	// (0x00010227) list_medium_line_x2_t4_g2_g2_ParamLimits

0x136c,	// (0x00010227) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x0001e0fd) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x0001e0fd) list_medium_line_x2_t4_g2_g

0x7e7f,	// (0x00016d3a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e7f,	// (0x00016d3a) list_medium_line_x2_t4_g2_t1

0x7e99,	// (0x00016d54) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e99,	// (0x00016d54) list_medium_line_x2_t4_g2_t2

0x7eaf,	// (0x00016d6a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7eaf,	// (0x00016d6a) list_medium_line_x2_t4_g2_t3

0x13a1,	// (0x0001025c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x13a1,	// (0x0001025c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0001ebce) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0001ebce) list_medium_line_x2_t4_g2_t

0x7ec4,	// (0x00016d7f) list_medium_line_t3_right_iconx2_g1

0x7d13,	// (0x00016bce) list_medium_line_t3_right_iconx2_g2

0x7ecc,	// (0x00016d87) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0001ebd7) list_medium_line_t3_right_iconx2_g

0x7ed6,	// (0x00016d91) list_medium_line_t3_right_iconx2_t1

0x7ee6,	// (0x00016da1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0001ebde) list_medium_line_t3_right_iconx2_t

0x1354,	// (0x0001020f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x3_t4_g4_g1

0x1360,	// (0x0001021b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1360,	// (0x0001021b) list_medium_line_x3_t4_g4_g2

0x1408,	// (0x000102c3) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1408,	// (0x000102c3) list_medium_line_x3_t4_g4_g3

0x7ef4,	// (0x00016daf) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7ef4,	// (0x00016daf) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0001ebe3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0001ebe3) list_medium_line_x3_t4_g4_g

0x7f00,	// (0x00016dbb) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f00,	// (0x00016dbb) list_medium_line_x3_t4_g4_t1

0x7f17,	// (0x00016dd2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f17,	// (0x00016dd2) list_medium_line_x3_t4_g4_t2

0x7f32,	// (0x00016ded) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7f32,	// (0x00016ded) list_medium_line_x3_t4_g4_t3

0x7f47,	// (0x00016e02) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f47,	// (0x00016e02) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0001ebec) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0001ebec) list_medium_line_x3_t4_g4_t

0x7f64,	// (0x00016e1f) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f64,	// (0x00016e1f) list_single_dyc_row_text_pane_t1

0x7fad,	// (0x00016e68) list_single_dyc_row_text_pane_t2_ParamLimits

0x7fad,	// (0x00016e68) list_single_dyc_row_text_pane_t2

0xe4cb,	// (0x0001d386) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4cb,	// (0x0001d386) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x0001ebf5) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0001ebf5) list_single_dyc_row_text_pane_t

0xe4ef,	// (0x0001d3aa) list_single_dyc_row_pane_g1_ParamLimits

0xe4ef,	// (0x0001d3aa) list_single_dyc_row_pane_g1

0xe4fb,	// (0x0001d3b6) list_single_dyc_row_pane_g2_ParamLimits

0xe4fb,	// (0x0001d3b6) list_single_dyc_row_pane_g2

0xe507,	// (0x0001d3c2) list_single_dyc_row_pane_g3_ParamLimits

0xe507,	// (0x0001d3c2) list_single_dyc_row_pane_g3

0xe513,	// (0x0001d3ce) list_single_dyc_row_pane_g4_ParamLimits

0xe513,	// (0x0001d3ce) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x0001ec02) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x0001ec02) list_single_dyc_row_pane_g

0xe51f,	// (0x0001d3da) list_single_dyc_row_text_pane_ParamLimits

0xe51f,	// (0x0001d3da) list_single_dyc_row_text_pane

0x948a,	// (0x00018345) bg_sp_fs_scroll_pane

0xe53e,	// (0x0001d3f9) thumb_sp_fs_scroll_pane

0x662e,	// (0x000154e9) list_medium_line_g1_ParamLimits

0x662e,	// (0x000154e9) list_medium_line_g1

0xe547,	// (0x0001d402) list_medium_line_t1_ParamLimits

0xe547,	// (0x0001d402) list_medium_line_t1

0x1354,	// (0x0001020f) list_medium_line_x2_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x2_g1

0x1360,	// (0x0001021b) list_medium_line_x2_g2_ParamLimits

0x1360,	// (0x0001021b) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x0001ec0b) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x0001ec0b) list_medium_line_x2_g

0xe55c,	// (0x0001d417) list_medium_line_x2_t1_ParamLimits

0xe55c,	// (0x0001d417) list_medium_line_x2_t1

0x1354,	// (0x0001020f) list_medium_line_x3_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x3_g1

0x1360,	// (0x0001021b) list_medium_line_x3_g2_ParamLimits

0x1360,	// (0x0001021b) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x0001ec0b) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x0001ec0b) list_medium_line_x3_g

0xe55c,	// (0x0001d417) list_medium_line_x3_t1_ParamLimits

0xe55c,	// (0x0001d417) list_medium_line_x3_t1

0xe572,	// (0x0001d42d) thumb_sp_fs_scroll_pane_g1

0xe57b,	// (0x0001d436) thumb_sp_fs_scroll_pane_g2

0xe584,	// (0x0001d43f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001ec10) thumb_sp_fs_scroll_pane_g

0xe572,	// (0x0001d42d) bg_sp_fs_scroll_pane_g1

0xe57b,	// (0x0001d436) bg_sp_fs_scroll_pane_g2

0xe584,	// (0x0001d43f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001ec10) bg_sp_fs_scroll_pane_g

0x1354,	// (0x0001020f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1354,	// (0x0001020f) list_medium_line_x2_t3_g4_g1

0x13fc,	// (0x000102b7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x13fc,	// (0x000102b7) list_medium_line_x2_t3_g4_g2

0x1360,	// (0x0001021b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1360,	// (0x0001021b) list_medium_line_x2_t3_g4_g3

0x136c,	// (0x00010227) list_medium_line_x2_t3_g4_g4_ParamLimits

0x136c,	// (0x00010227) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0001e179) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0001e179) list_medium_line_x2_t3_g4_g

0x80e2,	// (0x00016f9d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80e2,	// (0x00016f9d) list_medium_line_x2_t3_g4_t1

0x80fc,	// (0x00016fb7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80fc,	// (0x00016fb7) list_medium_line_x2_t3_g4_t2

0x13a1,	// (0x0001025c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x13a1,	// (0x0001025c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x0001ec17) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x0001ec17) list_medium_line_x2_t3_g4_t

0x662e,	// (0x000154e9) list_medium_line_g2_g1_ParamLimits

0x662e,	// (0x000154e9) list_medium_line_g2_g1

0x663a,	// (0x000154f5) list_medium_line_g2_g2_ParamLimits

0x663a,	// (0x000154f5) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0001e8ce) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0001e8ce) list_medium_line_g2_g

0xe58d,	// (0x0001d448) list_medium_line_g2_t1_ParamLimits

0xe58d,	// (0x0001d448) list_medium_line_g2_t1

0x662e,	// (0x000154e9) list_medium_line_t3_g2_g1_ParamLimits

0x662e,	// (0x000154e9) list_medium_line_t3_g2_g1

0x663a,	// (0x000154f5) list_medium_line_t3_g2_g2_ParamLimits

0x663a,	// (0x000154f5) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0001e8ce) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0001e8ce) list_medium_line_t3_g2_g

0x8116,	// (0x00016fd1) list_medium_line_t3_g2_t1_ParamLimits

0x8116,	// (0x00016fd1) list_medium_line_t3_g2_t1

0x8130,	// (0x00016feb) list_medium_line_t3_g2_t2_ParamLimits

0x8130,	// (0x00016feb) list_medium_line_t3_g2_t2

0x8146,	// (0x00017001) list_medium_line_t3_g2_t3_ParamLimits

0x8146,	// (0x00017001) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x0001ec1e) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x0001ec1e) list_medium_line_t3_g2_t

0x7d13,	// (0x00016bce) list_medium_line_right_icon_g1

0xe5a2,	// (0x0001d45d) list_medium_line_right_icon_t1

0x662e,	// (0x000154e9) list_medium_line_t2_g1_ParamLimits

0x662e,	// (0x000154e9) list_medium_line_t2_g1

0x8160,	// (0x0001701b) list_medium_line_t2_t1_ParamLimits

0x8160,	// (0x0001701b) list_medium_line_t2_t1

0x817a,	// (0x00017035) list_medium_line_t2_t2_ParamLimits

0x817a,	// (0x00017035) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x0001ec25) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x0001ec25) list_medium_line_t2_t

0x662e,	// (0x000154e9) list_medium_line_t3_g1_ParamLimits

0x662e,	// (0x000154e9) list_medium_line_t3_g1

0x8193,	// (0x0001704e) list_medium_line_t3_t1_ParamLimits

0x8193,	// (0x0001704e) list_medium_line_t3_t1

0x81ad,	// (0x00017068) list_medium_line_t3_t2_ParamLimits

0x81ad,	// (0x00017068) list_medium_line_t3_t2

0x81c3,	// (0x0001707e) list_medium_line_t3_t3_ParamLimits

0x81c3,	// (0x0001707e) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x0001ec2a) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x0001ec2a) list_medium_line_t3_t

0x662e,	// (0x000154e9) list_medium_line_g3_g1_ParamLimits

0x662e,	// (0x000154e9) list_medium_line_g3_g1

0x81d8,	// (0x00017093) list_medium_line_g3_g2_ParamLimits

0x81d8,	// (0x00017093) list_medium_line_g3_g2

0x663a,	// (0x000154f5) list_medium_line_g3_g3_ParamLimits

0x663a,	// (0x000154f5) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x0001ec31) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x0001ec31) list_medium_line_g3_g

0xe5b0,	// (0x0001d46b) list_medium_line_g3_t1_ParamLimits

0xe5b0,	// (0x0001d46b) list_medium_line_g3_t1

0x662e,	// (0x000154e9) list_medium_line_t2_g3_g1_ParamLimits

0x662e,	// (0x000154e9) list_medium_line_t2_g3_g1

0x81d8,	// (0x00017093) list_medium_line_t2_g3_g2_ParamLimits

0x81d8,	// (0x00017093) list_medium_line_t2_g3_g2

0x663a,	// (0x000154f5) list_medium_line_t2_g3_g3_ParamLimits

0x663a,	// (0x000154f5) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x0001ec31) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x0001ec31) list_medium_line_t2_g3_g

0x81e4,	// (0x0001709f) list_medium_line_t2_g3_t1_ParamLimits

0x81e4,	// (0x0001709f) list_medium_line_t2_g3_t1

0x81fe,	// (0x000170b9) list_medium_line_t2_g3_t2_ParamLimits

0x81fe,	// (0x000170b9) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x0001ec38) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x0001ec38) list_medium_line_t2_g3_t

0x662e,	// (0x000154e9) list_medium_line_t3_g3_g1_ParamLimits

0x662e,	// (0x000154e9) list_medium_line_t3_g3_g1

0x81d8,	// (0x00017093) list_medium_line_t3_g3_g2_ParamLimits

0x81d8,	// (0x00017093) list_medium_line_t3_g3_g2

0x663a,	// (0x000154f5) list_medium_line_t3_g3_g3_ParamLimits

0x663a,	// (0x000154f5) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x0001ec31) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x0001ec31) list_medium_line_t3_g3_g

0x821c,	// (0x000170d7) list_medium_line_t3_g3_t1_ParamLimits

0x821c,	// (0x000170d7) list_medium_line_t3_g3_t1

0x8235,	// (0x000170f0) list_medium_line_t3_g3_t2_ParamLimits

0x8235,	// (0x000170f0) list_medium_line_t3_g3_t2

0x824b,	// (0x00017106) list_medium_line_t3_g3_t3_ParamLimits

0x824b,	// (0x00017106) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x0001ec3d) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x0001ec3d) list_medium_line_t3_g3_t

0x7ec4,	// (0x00016d7f) list_medium_line_right_iconx2_g1

0x7d13,	// (0x00016bce) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001ec44) list_medium_line_right_iconx2_g

0xe5c5,	// (0x0001d480) list_medium_line_right_iconx2_t1

0x7ec4,	// (0x00016d7f) list_medium_line_t2_right_iconx2_g1

0x7d13,	// (0x00016bce) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001ec44) list_medium_line_t2_right_iconx2_g

0x8265,	// (0x00017120) list_medium_line_t2_right_iconx2_t1

0x8275,	// (0x00017130) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x0001ec49) list_medium_line_t2_right_iconx2_t

0x8287,	// (0x00017142) list_medium_line_x4_t4_t1

0x8295,	// (0x00017150) list_medium_line_x4_t4_t2

0x82a5,	// (0x00017160) list_medium_line_x4_t4_t3

0x82b5,	// (0x00017170) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x0001ec4e) list_medium_line_x4_t4_t

0x8308,	// (0x000171c3) tport_appsw_pane_ParamLimits

0x8308,	// (0x000171c3) tport_appsw_pane

0x8320,	// (0x000171db) tport_contact_pane_ParamLimits

0x8320,	// (0x000171db) tport_contact_pane

0x8338,	// (0x000171f3) tport_listscroll_pane_ParamLimits

0x8338,	// (0x000171f3) tport_listscroll_pane

0x8352,	// (0x0001720d) cell_tport_appsw_pane_ParamLimits

0x8352,	// (0x0001720d) cell_tport_appsw_pane

0xd12d,	// (0x0001bfe8) tport_appsw_pane_g1_ParamLimits

0xd12d,	// (0x0001bfe8) tport_appsw_pane_g1

0xe5d3,	// (0x0001d48e) tport_contact_pane_g1

0xe5dc,	// (0x0001d497) tport_contact_pane_t1

0xe5ea,	// (0x0001d4a5) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x0001ec57) tport_contact_pane_t

0xe5f8,	// (0x0001d4b3) list_tport_pane

0xe601,	// (0x0001d4bc) scroll_pane_cp_030

0x839a,	// (0x00017255) cell_tport_appsw_pane_g1

0x83aa,	// (0x00017265) cell_tport_appsw_pane_t1

0x83b8,	// (0x00017273) grid_highlight_pane_cp019

0x83c0,	// (0x0001727b) list_tport_double_graphic_pane_ParamLimits

0x83c0,	// (0x0001727b) list_tport_double_graphic_pane

0x94fa,	// (0x000183b5) list_highlight_pane_cp023_ParamLimits

0x94fa,	// (0x000183b5) list_highlight_pane_cp023

0x83cd,	// (0x00017288) list_tport_double_graphic_pane_g1_ParamLimits

0x83cd,	// (0x00017288) list_tport_double_graphic_pane_g1

0x83da,	// (0x00017295) list_tport_double_graphic_pane_t1_ParamLimits

0x83da,	// (0x00017295) list_tport_double_graphic_pane_t1

0x83ef,	// (0x000172aa) list_tport_double_graphic_pane_t2_ParamLimits

0x83ef,	// (0x000172aa) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x0001ec63) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x0001ec63) list_tport_double_graphic_pane_t

0x948a,	// (0x00018345) main_cale_note_pane

0x5d00,	// (0x00014bbb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d00,	// (0x00014bbb) cell_vitu2_function_top_wide_pane_cp01

0x7877,	// (0x00016732) wait_bar_pane_cp05_ParamLimits

0x94fa,	// (0x000183b5) listscroll_cmail_pane

0xe60a,	// (0x0001d4c5) list_cmail_pane

0x8401,	// (0x000172bc) list_cmail_body_pane

0x8416,	// (0x000172d1) list_single_cmail_header_caption_pane

0x842d,	// (0x000172e8) list_single_cmail_header_detail_pane_ParamLimits

0x842d,	// (0x000172e8) list_single_cmail_header_detail_pane

0xe61a,	// (0x0001d4d5) list_single_cmail_header_caption_pane_t1

0x8457,	// (0x00017312) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8457,	// (0x00017312) list_single_cmail_header_detail_pane_g1

0xe631,	// (0x0001d4ec) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe631,	// (0x0001d4ec) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x0001ec68) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x0001ec68) list_single_cmail_header_detail_pane_g

0xe64a,	// (0x0001d505) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe64a,	// (0x0001d505) list_single_cmail_header_detail_pane_t1

0xe6aa,	// (0x0001d565) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6aa,	// (0x0001d565) list_single_cmail_header_editor_pane_bg

0xdf90,	// (0x0001ce4b) list_cmail_body_pane_g1

0xe6c1,	// (0x0001d57c) list_cmail_body_pane_t1

0xd17c,	// (0x0001c037) list_single_cmail_header_editor_pane_bg_g1

0xa132,	// (0x00018fed) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd18c,	// (0x0001c047) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd184,	// (0x0001c03f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd453,	// (0x0001c30e) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1ac,	// (0x0001c067) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd19c,	// (0x0001c057) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1a4,	// (0x0001c05f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa112,	// (0x00018fcd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x846f,	// (0x0001732a) calenote_gesture_pane_ParamLimits

0x846f,	// (0x0001732a) calenote_gesture_pane

0x848f,	// (0x0001734a) calenote_window_pane_ParamLimits

0x848f,	// (0x0001734a) calenote_window_pane

0xe6cf,	// (0x0001d58a) popup_note_window_cp01

0x84ab,	// (0x00017366) calenote_swipe_1_pane_ParamLimits

0x84ab,	// (0x00017366) calenote_swipe_1_pane

0x7cb5,	// (0x00016b70) calenote_swipe_2_pane_ParamLimits

0x7cb5,	// (0x00016b70) calenote_swipe_2_pane

0xe2e2,	// (0x0001d19d) calenote_swipe_1_pane_g1_ParamLimits

0xe2e2,	// (0x0001d19d) calenote_swipe_1_pane_g1

0xe2ef,	// (0x0001d1aa) calenote_swipe_1_pane_g2_ParamLimits

0xe2ef,	// (0x0001d1aa) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0001eb91) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0001eb91) calenote_swipe_1_pane_g

0xe6e1,	// (0x0001d59c) calenote_swipe_1_pane_t1_ParamLimits

0xe6e1,	// (0x0001d59c) calenote_swipe_1_pane_t1

0xe2e2,	// (0x0001d19d) calenote_swipe_2_pane_g1_ParamLimits

0xe2e2,	// (0x0001d19d) calenote_swipe_2_pane_g1

0xe700,	// (0x0001d5bb) calenote_swipe_2_pane_g2_ParamLimits

0xe700,	// (0x0001d5bb) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x0001ec74) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x0001ec74) calenote_swipe_2_pane_g

0xe70c,	// (0x0001d5c7) calenote_swipe_2_pane_t1_ParamLimits

0xe70c,	// (0x0001d5c7) calenote_swipe_2_pane_t1

0x948a,	// (0x00018345) main_mup_navstr_pane

0x493d,	// (0x000137f8) main_mup3_pane_t7_ParamLimits

0x493d,	// (0x000137f8) main_mup3_pane_t7

0xcd40,	// (0x0001bbfb) main_mp4_pane_g6_ParamLimits

0xcd40,	// (0x0001bbfb) main_mp4_pane_g6

0xcf93,	// (0x0001be4e) main_image3_pane_t4_ParamLimits

0xcf93,	// (0x0001be4e) main_image3_pane_t4

0x84c0,	// (0x0001737b) popup_navstr_preview_pane_ParamLimits

0x84c0,	// (0x0001737b) popup_navstr_preview_pane

0x84d4,	// (0x0001738f) scroll_navstr_pane_ParamLimits

0x84d4,	// (0x0001738f) scroll_navstr_pane

0x948a,	// (0x00018345) bg_popup_preview_window_pane_cp04

0xe733,	// (0x0001d5ee) popup_navstr_preview_pane_t1

0x84e8,	// (0x000173a3) scroll_navstr_pane_g1_ParamLimits

0x84e8,	// (0x000173a3) scroll_navstr_pane_g1

0x84fc,	// (0x000173b7) scroll_navstr_pane_t1_ParamLimits

0x84fc,	// (0x000173b7) scroll_navstr_pane_t1

0xe6d8,	// (0x0001d593) bg_button_pane_cp014

0xe6d8,	// (0x0001d593) bg_button_pane_cp030

0x7b8e,	// (0x00016a49) list_double_fisheye_pane_g4_ParamLimits

0x7b8e,	// (0x00016a49) list_double_fisheye_pane_g4

0x7b9a,	// (0x00016a55) list_double_fisheye_pane_g5_ParamLimits

0x7b9a,	// (0x00016a55) list_double_fisheye_pane_g5

0xd23c,	// (0x0001c0f7) sp_fs_scroll_pane_cp03

0xe402,	// (0x0001d2bd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe40e,	// (0x0001d2c9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0001ebae) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe41a,	// (0x0001d2d5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe612,	// (0x0001d4cd) sp_fs_scroll_pane_cp02

0x9e0e,	// (0x00018cc9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e0e,	// (0x00018cc9) popup_sp_fs_calendar_preview_list_single_pane

0x948a,	// (0x00018345) main_cam6_pano_pane

0x94fa,	// (0x000183b5) main_mup3_pane_ParamLimits

0x948a,	// (0x00018345) main_phacti_pane

0x774a,	// (0x00016605) bg_button_pane_cp11

0x7764,	// (0x0001661f) main_mobtv_info_pane_g2_ParamLimits

0x7764,	// (0x0001661f) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0001eb0e) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0001eb0e) main_mobtv_info_pane_g

0x7941,	// (0x000167fc) sc_clock_pane_t5_ParamLimits

0x7941,	// (0x000167fc) sc_clock_pane_t5

0x7a09,	// (0x000168c4) main_radioblah_pane_g1_ParamLimits

0xe22e,	// (0x0001d0e9) main_radioblah_pane_t3_ParamLimits

0xe22e,	// (0x0001d0e9) main_radioblah_pane_t3

0xe246,	// (0x0001d101) main_radioblah_pane_t4_ParamLimits

0xe246,	// (0x0001d101) main_radioblah_pane_t4

0x7a31,	// (0x000168ec) main_radioblah_text_pane_ParamLimits

0x7a31,	// (0x000168ec) main_radioblah_text_pane

0x7a43,	// (0x000168fe) main_radioblah_info_pane_g1_ParamLimits

0x7adc,	// (0x00016997) main_radioblah_info_pane_t4_ParamLimits

0x7adc,	// (0x00016997) main_radioblah_info_pane_t4

0x94fa,	// (0x000183b5) main_sp_fs_calendar_pane

0x8513,	// (0x000173ce) main_phacti_pane_g1

0x851b,	// (0x000173d6) phacti_note_pane_ParamLimits

0x851b,	// (0x000173d6) phacti_note_pane

0xe74a,	// (0x0001d605) phacti_term_pane_ParamLimits

0xe74a,	// (0x0001d605) phacti_term_pane

0xe75f,	// (0x0001d61a) phacti_note_pane_t1_ParamLimits

0xe75f,	// (0x0001d61a) phacti_note_pane_t1

0xe776,	// (0x0001d631) phacti_term_pane_g1

0xe77e,	// (0x0001d639) phacti_term_pane_t1_ParamLimits

0xe77e,	// (0x0001d639) phacti_term_pane_t1

0xe7a8,	// (0x0001d663) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7b0,	// (0x0001d66b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x0001ec7e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7b8,	// (0x0001d673) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7b8,	// (0x0001d673) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7ce,	// (0x0001d689) aid_popup_sp_fs_bg_corner_pane

0xc36b,	// (0x0001b226) popup_sp_fs_calendar_preview_bg_pane_g1

0x948a,	// (0x00018345) popup_sp_fs_calendar_preview_bg_pane

0x11dd,	// (0x00010098) popup_sp_fs_calendar_preview_list_pane

0xbe50,	// (0x0001ad0b) bg_main_sp_fs_cale_pane_ParamLimits

0xbe50,	// (0x0001ad0b) bg_main_sp_fs_cale_pane

0xe7df,	// (0x0001d69a) listscroll_cale_mrui_pane_ParamLimits

0xe7df,	// (0x0001d69a) listscroll_cale_mrui_pane

0xd200,	// (0x0001c0bb) listscroll_sp_fs_schedule_track_pane

0xe7f4,	// (0x0001d6af) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7f4,	// (0x0001d6af) main_sp_fs_ctrlbar_pane_cp01

0xe807,	// (0x0001d6c2) main_sp_fs_ribbon_pane

0xe80f,	// (0x0001d6ca) popup_sp_fs_cale_preview_window

0x8590,	// (0x0001744b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8590,	// (0x0001744b) list_single_sp_fs_schedule_track_pane

0x94fa,	// (0x000183b5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x94fa,	// (0x000183b5) bg_sp_fs_highlight_list_pane_cp03

0x85a4,	// (0x0001745f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85a4,	// (0x0001745f) list_single_sp_fs_schedule_track_pane_g1

0x85b0,	// (0x0001746b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85b0,	// (0x0001746b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x0001ec83) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x0001ec83) list_single_sp_fs_schedule_track_pane_g

0x85bc,	// (0x00017477) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85bc,	// (0x00017477) list_single_sp_fs_schedule_track_pane_t1

0x85d6,	// (0x00017491) sp_fs_schedule_track_pane_ParamLimits

0x85d6,	// (0x00017491) sp_fs_schedule_track_pane

0xe821,	// (0x0001d6dc) sp_fs_schedule_track_pane_g1

0xe829,	// (0x0001d6e4) sp_fs_schedule_track_pane_g2

0xe831,	// (0x0001d6ec) sp_fs_schedule_track_pane_g3

0xe839,	// (0x0001d6f4) sp_fs_schedule_track_pane_g4

0xe841,	// (0x0001d6fc) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x0001ec88) sp_fs_schedule_track_pane_g

0xd17c,	// (0x0001c037) bg_sp_fs_schedule_viewer_highlight_g1

0xa132,	// (0x00018fed) bg_sp_fs_schedule_viewer_highlight_g2

0xd184,	// (0x0001c03f) bg_sp_fs_schedule_viewer_highlight_g3

0xd18c,	// (0x0001c047) bg_sp_fs_schedule_viewer_highlight_g4

0xd453,	// (0x0001c30e) bg_sp_fs_schedule_viewer_highlight_g5

0xd19c,	// (0x0001c057) bg_sp_fs_schedule_viewer_highlight_g6

0xd1a4,	// (0x0001c05f) bg_sp_fs_schedule_viewer_highlight_g7

0xd1ac,	// (0x0001c067) bg_sp_fs_schedule_viewer_highlight_g8

0xa112,	// (0x00018fcd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x0001ec93) bg_sp_fs_schedule_viewer_highlight_g

0x948a,	// (0x00018345) bg_main_sp_fs_ribbon_pane

0x85e7,	// (0x000174a2) main_sp_fs_ribbon_pane_g1

0xe849,	// (0x0001d704) main_sp_fs_ribbon_pane_t1

0x85f0,	// (0x000174ab) main_sp_fs_ribbon_pane_t2

0xe858,	// (0x0001d713) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x0001eca6) main_sp_fs_ribbon_pane_t

0xe867,	// (0x0001d722) main_sp_fs_ribbon_scheduler_pane

0xe86f,	// (0x0001d72a) bg_main_sp_fs_ribbon_pane_g1

0xe878,	// (0x0001d733) bg_main_sp_fs_ribbon_pane_g2

0xe881,	// (0x0001d73c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x0001ecad) bg_main_sp_fs_ribbon_pane_g

0xe889,	// (0x0001d744) main_sp_fs_ribbon_scheduler_pane_g1

0xe892,	// (0x0001d74d) main_sp_fs_ribbon_scheduler_pane_g2

0xe89b,	// (0x0001d756) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x0001ecb4) main_sp_fs_ribbon_scheduler_pane_g

0xe8a4,	// (0x0001d75f) list_cale_mrui_pane

0x85ff,	// (0x000174ba) sp_fs_scroll_pane_cp07_ParamLimits

0x85ff,	// (0x000174ba) sp_fs_scroll_pane_cp07

0x861b,	// (0x000174d6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x861b,	// (0x000174d6) bg_sp_fs_schedule_viewer_highlight

0xe8b1,	// (0x0001d76c) list_single_sp_fs_schedule_track_pane_cp01

0xe8b9,	// (0x0001d774) list_sp_fs_schedule_track_pane

0xe8c1,	// (0x0001d77c) sp_fs_scroll_pane_cp06_ParamLimits

0xe8c1,	// (0x0001d77c) sp_fs_scroll_pane_cp06

0xc36b,	// (0x0001b226) bgmain_sp_fs_calendar_pane_g1

0x862b,	// (0x000174e6) list_single_cale_mrui_pane_ParamLimits

0x862b,	// (0x000174e6) list_single_cale_mrui_pane

0xe8d3,	// (0x0001d78e) list_single_cale_mrui_row_pane_ParamLimits

0xe8d3,	// (0x0001d78e) list_single_cale_mrui_row_pane

0xe8e0,	// (0x0001d79b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8e0,	// (0x0001d79b) list_single_cale_mrui_row_pane_g1

0xe925,	// (0x0001d7e0) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe925,	// (0x0001d7e0) list_single_cale_mrui_row_pane_t1

0x864c,	// (0x00017507) list_single_cale_mrui_row_pane_t2_ParamLimits

0x864c,	// (0x00017507) list_single_cale_mrui_row_pane_t2

0xe937,	// (0x0001d7f2) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe937,	// (0x0001d7f2) list_single_cale_mrui_row_pane_t3

0xe966,	// (0x0001d821) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe966,	// (0x0001d821) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x0001ecc2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x0001ecc2) list_single_cale_mrui_row_pane_t

0x86b4,	// (0x0001756f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86b4,	// (0x0001756f) list_single_cmail_header_editor_pane_bg_cp01

0x86da,	// (0x00017595) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x86da,	// (0x00017595) list_single_cmail_header_editor_pane_bg_cp02

0x86fa,	// (0x000175b5) main_radioblah_text_pane_t1_ParamLimits

0x86fa,	// (0x000175b5) main_radioblah_text_pane_t1

0xe995,	// (0x0001d850) cam6_indi_pane_cp01

0xe99d,	// (0x0001d858) cam6_mode_pane_cp01

0xe9a5,	// (0x0001d860) cam6_pano_pane

0xe9ae,	// (0x0001d869) cam6_zoom_pane_cp01

0xe9b6,	// (0x0001d871) cam6_pano_image_pane

0xe9c1,	// (0x0001d87c) cam6_pano_pane_g1

0xdf90,	// (0x0001ce4b) cam6_pano_pane_g2

0xe9ca,	// (0x0001d885) cam6_pano_pane_g3

0xe9d3,	// (0x0001d88e) cam6_pano_pane_g4

0xc981,	// (0x0001b83c) cam6_pano_pane_g5

0xe9dc,	// (0x0001d897) cam6_pano_pane_g6

0xe9e6,	// (0x0001d8a1) cam6_pano_pane_g7

0xe9ee,	// (0x0001d8a9) cam6_pano_pane_g8

0xe9f7,	// (0x0001d8b2) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x0001eccb) cam6_pano_pane_g

0x948a,	// (0x00018345) main_browser_tag_pane

0xe72b,	// (0x0001d5e6) grid_navstr_albumart_pane

0xea02,	// (0x0001d8bd) cell_navstr_albumart_pane_ParamLimits

0xea02,	// (0x0001d8bd) cell_navstr_albumart_pane

0xea22,	// (0x0001d8dd) cell_navstr_albumart_pane_g1

0xbc21,	// (0x0001aadc) cell_navstr_albumart_pane_g2

0xbc31,	// (0x0001aaec) cell_navstr_albumart_pane_g3

0xbc29,	// (0x0001aae4) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x0001ecde) cell_navstr_albumart_pane_g

0x8715,	// (0x000175d0) bt_list_pane_ParamLimits

0x8715,	// (0x000175d0) bt_list_pane

0x8729,	// (0x000175e4) bt_list_pane_t1

0x8738,	// (0x000175f3) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x0001ece7) bt_list_pane_t

0x948a,	// (0x00018345) main_cale_prevew_pane

0x8747,	// (0x00017602) popup_cale_preview_window_ParamLimits

0x8747,	// (0x00017602) popup_cale_preview_window

0x94fa,	// (0x000183b5) bg_popup_preview_window_pane_cp05_ParamLimits

0x94fa,	// (0x000183b5) bg_popup_preview_window_pane_cp05

0xea57,	// (0x0001d912) list_cale_preview_pane_ParamLimits

0xea57,	// (0x0001d912) list_cale_preview_pane

0x8760,	// (0x0001761b) list_double_cale_preview_pane_ParamLimits

0x8760,	// (0x0001761b) list_double_cale_preview_pane

0xd1b4,	// (0x0001c06f) list_single_cale_preview_pane_ParamLimits

0xd1b4,	// (0x0001c06f) list_single_cale_preview_pane

0x8772,	// (0x0001762d) list_single_cale_preview_pane_g1

0x877a,	// (0x00017635) list_single_cale_preview_pane_t1_ParamLimits

0x877a,	// (0x00017635) list_single_cale_preview_pane_t1

0x878f,	// (0x0001764a) list_double_cale_preview_pane_g1

0x8797,	// (0x00017652) list_double_cale_preview_pane_t1_ParamLimits

0x8797,	// (0x00017652) list_double_cale_preview_pane_t1

0x87ac,	// (0x00017667) list_double_cale_preview_pane_t2_ParamLimits

0x87ac,	// (0x00017667) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x0001ecec) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x0001ecec) list_double_cale_preview_pane_t

0x948a,	// (0x00018345) main_ezdial_pane

0x94fa,	// (0x000183b5) main_sp_fs_email_pane_ParamLimits

0x7d3d,	// (0x00016bf8) cmail_ddmenu_btn01_pane_ParamLimits

0x7d3d,	// (0x00016bf8) cmail_ddmenu_btn01_pane

0x7d50,	// (0x00016c0b) cmail_ddmenu_btn02_pane_ParamLimits

0x7d50,	// (0x00016c0b) cmail_ddmenu_btn02_pane

0x7d73,	// (0x00016c2e) cmail_ddmenu_btn03_pane_ParamLimits

0x7d73,	// (0x00016c2e) cmail_ddmenu_btn03_pane

0x7d99,	// (0x00016c54) main_sp_fs_ctrlbar_pane_ParamLimits

0x7dbd,	// (0x00016c78) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8401,	// (0x000172bc) list_cmail_body_pane_ParamLimits

0xe628,	// (0x0001d4e3) bg_button_pane_cp12

0xe63d,	// (0x0001d4f8) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe63d,	// (0x0001d4f8) list_single_cmail_header_detail_pane_g3

0xe686,	// (0x0001d541) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe686,	// (0x0001d541) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x0001ec6f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x0001ec6f) list_single_cmail_header_detail_pane_t

0xe793,	// (0x0001d64e) phacti_term_pane_t2_ParamLimits

0xe793,	// (0x0001d64e) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x0001ec79) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x0001ec79) phacti_term_pane_t

0xea63,	// (0x0001d91e) aid_size_list_single_double

0x87c4,	// (0x0001767f) popup_ezdial_listscroll_window

0x87e0,	// (0x0001769b) popup_number_entry_window_cp01

0x9ecf,	// (0x00018d8a) bg_popup_call_pane_cp09

0xea6f,	// (0x0001d92a) ezdial_list_pane

0xea77,	// (0x0001d932) scroll_pane_cp23

0xbe50,	// (0x0001ad0b) bg_button_pane_cp028_ParamLimits

0xbe50,	// (0x0001ad0b) bg_button_pane_cp028

0x87ee,	// (0x000176a9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x87ee,	// (0x000176a9) cmail_ddmenu_btn01_pane_g1

0x87fa,	// (0x000176b5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x87fa,	// (0x000176b5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x0001ecf1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x0001ecf1) cmail_ddmenu_btn01_pane_g

0xea7f,	// (0x0001d93a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea7f,	// (0x0001d93a) cmail_ddmenu_btn01_pane_t1

0xbe50,	// (0x0001ad0b) bg_button_pane_cp029_ParamLimits

0xbe50,	// (0x0001ad0b) bg_button_pane_cp029

0x8806,	// (0x000176c1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8806,	// (0x000176c1) cmail_ddmenu_btn02_pane_g1

0x881e,	// (0x000176d9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x881e,	// (0x000176d9) cmail_ddmenu_btn02_pane_t1

0x94fa,	// (0x000183b5) bg_button_pane_cp031_ParamLimits

0x94fa,	// (0x000183b5) bg_button_pane_cp031

0x8806,	// (0x000176c1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8806,	// (0x000176c1) cmail_ddmenu_btn03_pane_g1

0x881e,	// (0x000176d9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x881e,	// (0x000176d9) cmail_ddmenu_btn03_pane_t1

0x54e6,	// (0x000143a1) cell_dialer2_keypad_pane_t1_ParamLimits

0x5500,	// (0x000143bb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5500,	// (0x000143bb) cell_dialer2_keypad_pane_t1_copy1

0x756d,	// (0x00016428) ncimui_group_button_pane

0x94fa,	// (0x000183b5) main_sp_fs_calendar_pane_ParamLimits

0x8416,	// (0x000172d1) list_single_cmail_header_caption_pane_ParamLimits

0xe7d6,	// (0x0001d691) aid_recal_txt_sm_pane

0x948a,	// (0x00018345) mian_recal_day_pane

0xe80f,	// (0x0001d6ca) popup_sp_fs_cale_preview_window_ParamLimits

0xea94,	// (0x0001d94f) list_recal_day_pane

0xead6,	// (0x0001d991) list_single_recal_day_pane_ParamLimits

0xead6,	// (0x0001d991) list_single_recal_day_pane

0xeae8,	// (0x0001d9a3) list_single_recal_day_pane_g1_ParamLimits

0xeae8,	// (0x0001d9a3) list_single_recal_day_pane_g1

0xeaf4,	// (0x0001d9af) list_single_recal_day_pane_g2_ParamLimits

0xeaf4,	// (0x0001d9af) list_single_recal_day_pane_g2

0xeb00,	// (0x0001d9bb) list_single_recal_day_pane_g3_ParamLimits

0xeb00,	// (0x0001d9bb) list_single_recal_day_pane_g3

0x8842,	// (0x000176fd) list_single_recal_day_pane_g4_ParamLimits

0x8842,	// (0x000176fd) list_single_recal_day_pane_g4

0xeb0c,	// (0x0001d9c7) list_single_recal_day_pane_g5_ParamLimits

0xeb0c,	// (0x0001d9c7) list_single_recal_day_pane_g5

0xeb18,	// (0x0001d9d3) list_single_recal_day_pane_g6_ParamLimits

0xeb18,	// (0x0001d9d3) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x0001ed00) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x0001ed00) list_single_recal_day_pane_g

0xeb2c,	// (0x0001d9e7) list_single_recal_day_pane_t1

0xeb3e,	// (0x0001d9f9) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x0001ed0b) list_single_recal_day_pane_t

0x885a,	// (0x00017715) ncimui_query_button_pane_ParamLimits

0x885a,	// (0x00017715) ncimui_query_button_pane

0x886a,	// (0x00017725) ncimui_query_button_pane_t1_ParamLimits

0x886a,	// (0x00017725) ncimui_query_button_pane_t1

0xeb50,	// (0x0001da0b) ncimui_query_button_pane_t2_ParamLimits

0xeb50,	// (0x0001da0b) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x0001ed10) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x0001ed10) ncimui_query_button_pane_t

0x887d,	// (0x00017738) query_button_pane_ParamLimits

0x887d,	// (0x00017738) query_button_pane

0x948a,	// (0x00018345) bg_button_pane_cp0028

0xeb63,	// (0x0001da1e) query_button_pane_t1

0x3582,	// (0x0001243d) main_tport_pane_ParamLimits

0x82c5,	// (0x00017180) bg_popup_window_pane_cp01_ParamLimits

0x82c5,	// (0x00017180) bg_popup_window_pane_cp01

0x82e0,	// (0x0001719b) heading_pane_cp08_ParamLimits

0x82e0,	// (0x0001719b) heading_pane_cp08

0x82f3,	// (0x000171ae) heading_pane_cp07_ParamLimits

0x82f3,	// (0x000171ae) heading_pane_cp07

0x839a,	// (0x00017255) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x0001ec5c) cell_tport_appsw_pane_g

0x2b24,	// (0x000119df) input_candi_list_open_g1

0xa323,	// (0x000191de) list_cale_time_pane_g6_ParamLimits

0xa323,	// (0x000191de) list_cale_time_pane_g6

0x434a,	// (0x00013205) aid_size_touch_calib_1_ParamLimits

0x434a,	// (0x00013205) aid_size_touch_calib_1

0x435c,	// (0x00013217) aid_size_touch_calib_2_ParamLimits

0x435c,	// (0x00013217) aid_size_touch_calib_2

0x4374,	// (0x0001322f) aid_size_touch_calib_3_ParamLimits

0x4374,	// (0x0001322f) aid_size_touch_calib_3

0x4392,	// (0x0001324d) aid_size_touch_calib_4_ParamLimits

0x4392,	// (0x0001324d) aid_size_touch_calib_4

0x43aa,	// (0x00013265) main_touch_calib_button_group_pane_ParamLimits

0x43aa,	// (0x00013265) main_touch_calib_button_group_pane

0x43c2,	// (0x0001327d) main_touch_calib_pane_g1_ParamLimits

0x43d4,	// (0x0001328f) main_touch_calib_pane_g2_ParamLimits

0x43e6,	// (0x000132a1) main_touch_calib_pane_g3_ParamLimits

0x43f8,	// (0x000132b3) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x0001e61b) main_touch_calib_pane_g_ParamLimits

0x440a,	// (0x000132c5) main_touch_calib_pane_t1_ParamLimits

0x4424,	// (0x000132df) main_touch_calib_pane_t2_ParamLimits

0x443e,	// (0x000132f9) main_touch_calib_pane_t3_ParamLimits

0x4452,	// (0x0001330d) main_touch_calib_pane_t4_ParamLimits

0x4466,	// (0x00013321) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x0001e624) main_touch_calib_pane_t_ParamLimits

0xc724,	// (0x0001b5df) list_single_fp_cale_pane_g3_ParamLimits

0xc724,	// (0x0001b5df) list_single_fp_cale_pane_g3

0x94fa,	// (0x000183b5) bg_button_pane_cp012_ParamLimits

0x94fa,	// (0x000183b5) bg_vkb2_func_pane_cp03_ParamLimits

0x65e4,	// (0x0001549f) cell_vitu2_function_top_pane_g1_ParamLimits

0x94fa,	// (0x000183b5) bg_vkb2_func_pane_cp04_ParamLimits

0x74f8,	// (0x000163b3) main_ncimui_button_group_pane_ParamLimits

0x74f8,	// (0x000163b3) main_ncimui_button_group_pane

0x7558,	// (0x00016413) main_ncimui_pane_t3_ParamLimits

0x7558,	// (0x00016413) main_ncimui_pane_t3

0xe741,	// (0x0001d5fc) phacti_button_group_pane

0xea63,	// (0x0001d91e) aid_size_list_single_double_ParamLimits

0x87c4,	// (0x0001767f) popup_ezdial_listscroll_window_ParamLimits

0x87e0,	// (0x0001769b) popup_number_entry_window_cp01_ParamLimits

0x8890,	// (0x0001774b) phacti_button_pane_ParamLimits

0x8890,	// (0x0001774b) phacti_button_pane

0x948a,	// (0x00018345) bg_button_pane_cp14

0xeb71,	// (0x0001da2c) phacti_button_pane_t1

0x88a1,	// (0x0001775c) main_touch_calib_button_pane_ParamLimits

0x88a1,	// (0x0001775c) main_touch_calib_button_pane

0x9c69,	// (0x00018b24) bg_button_pane_cp18_ParamLimits

0x9c69,	// (0x00018b24) bg_button_pane_cp18

0xeb7f,	// (0x0001da3a) main_touch_calib_button_pane_t1_ParamLimits

0xeb7f,	// (0x0001da3a) main_touch_calib_button_pane_t1

0xeb95,	// (0x0001da50) main_touch_calib_button_pane_t2_ParamLimits

0xeb95,	// (0x0001da50) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x0001ed15) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x0001ed15) main_touch_calib_button_pane_t

0x948a,	// (0x00018345) cell_ncimui_button_pane

0x948a,	// (0x00018345) bg_button_pane_cp032

0xebb3,	// (0x0001da6e) cell_ncimui_button_pane_t1

0xcf73,	// (0x0001be2e) image3_infobar_pane_ParamLimits

0xcf73,	// (0x0001be2e) image3_infobar_pane

0x796d,	// (0x00016828) fs_bigclock_status_pane_ParamLimits

0x796d,	// (0x00016828) fs_bigclock_status_pane

0x797a,	// (0x00016835) main_fs_bigclock_clock_pane_ParamLimits

0x797a,	// (0x00016835) main_fs_bigclock_clock_pane

0x7998,	// (0x00016853) main_fs_bigclock_indi_pane_ParamLimits

0x7998,	// (0x00016853) main_fs_bigclock_indi_pane

0x79ca,	// (0x00016885) main_fs_bigclock_swipe_pane_ParamLimits

0x79ca,	// (0x00016885) main_fs_bigclock_swipe_pane

0x948a,	// (0x00018345) main_fs_clock_dumped_data

0xe09d,	// (0x0001cf58) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe09d,	// (0x0001cf58) list_single_fs_bigclock_indicator_pane_g1

0xe0b9,	// (0x0001cf74) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0b9,	// (0x0001cf74) list_single_fs_bigclock_indicator_pane_g2

0xe0d3,	// (0x0001cf8e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0d3,	// (0x0001cf8e) list_single_fs_bigclock_indicator_pane_g3

0xe0ed,	// (0x0001cfa8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0ed,	// (0x0001cfa8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0001eb42) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0001eb42) list_single_fs_bigclock_indicator_pane_g

0xe118,	// (0x0001cfd3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe118,	// (0x0001cfd3) list_single_fs_bigclock_indicator_pane_t1

0xe140,	// (0x0001cffb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe140,	// (0x0001cffb) list_single_fs_bigclock_indicator_pane_t2

0xe168,	// (0x0001d023) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe168,	// (0x0001d023) list_single_fs_bigclock_indicator_pane_t3

0xe190,	// (0x0001d04b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe190,	// (0x0001d04b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0001eb4d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0001eb4d) list_single_fs_bigclock_indicator_pane_t

0xebc1,	// (0x0001da7c) image3_infobar_fav_pane_ParamLimits

0xebc1,	// (0x0001da7c) image3_infobar_fav_pane

0xebd1,	// (0x0001da8c) image3_infobar_loc_pane_ParamLimits

0xebd1,	// (0x0001da8c) image3_infobar_loc_pane

0xebe5,	// (0x0001daa0) image3_infobar_time_pane_ParamLimits

0xebe5,	// (0x0001daa0) image3_infobar_time_pane

0xc36b,	// (0x0001b226) image3_infobar_time_pane_g1

0xebf5,	// (0x0001dab0) image3_infobar_time_pane_t1

0xc36b,	// (0x0001b226) image3_infobar_loc_pane_g1

0xec03,	// (0x0001dabe) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x0001ed1a) image3_infobar_loc_pane_g

0xec0b,	// (0x0001dac6) image3_infobar_loc_pane_t1

0xc36b,	// (0x0001b226) image3_infobar_fav_pane_g1

0xec19,	// (0x0001dad4) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x0001ed1f) image3_infobar_fav_pane_g

0xec21,	// (0x0001dadc) fs_bigclock_status_battery_pane

0xec2a,	// (0x0001dae5) fs_bigclock_status_signal_pane

0xec33,	// (0x0001daee) fs_bigclock_status_title_pane

0xec3c,	// (0x0001daf7) fs_bigclock_status_signal_pane_g1

0xec45,	// (0x0001db00) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x0001ed24) fs_bigclock_status_signal_pane_g

0xec4d,	// (0x0001db08) fs_bigclock_status_battery_pane_g1

0xec56,	// (0x0001db11) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x0001ed29) fs_bigclock_status_battery_pane_g

0xec5e,	// (0x0001db19) fs_bigclock_status_title_pane_t1

0x88b6,	// (0x00017771) main_fs_bigclock_clock_pane_g1

0x88b6,	// (0x00017771) main_fs_bigclock_clock_pane_g2

0x88c7,	// (0x00017782) main_fs_bigclock_clock_pane_g3

0x88c7,	// (0x00017782) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x0001ed2e) main_fs_bigclock_clock_pane_g

0x88da,	// (0x00017795) main_fs_bigclock_clock_pane_t1

0x88f0,	// (0x000177ab) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x0001ed37) main_fs_bigclock_clock_pane_t

0xec6c,	// (0x0001db27) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec6c,	// (0x0001db27) list_single_fs_bigclock_indicator_pane

0xec7d,	// (0x0001db38) list_single_fs_bigclock_pane_ParamLimits

0xec7d,	// (0x0001db38) list_single_fs_bigclock_pane

0xeca3,	// (0x0001db5e) main_fs_bigclock_indicator_pane_t1

0xecb2,	// (0x0001db6d) list_single_fs_bigclock_pane_g1

0xecba,	// (0x0001db75) list_single_fs_bigclock_pane_t1

0xc36b,	// (0x0001b226) main_fs_bigclock_swipe_pane_g1

0xecfd,	// (0x0001dbb8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8d,	// (0x0001ed48) main_fs_bigclock_swipe_pane_g

0xed05,	// (0x0001dbc0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed05,	// (0x0001dbc0) main_fs_bigclock_swipe_pane_t1

0x2413,	// (0x000112ce) call_type_pane_ParamLimits

0x948a,	// (0x00018345) main_btmg_pane

0xe90c,	// (0x0001d7c7) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe90c,	// (0x0001d7c7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x0001ecbb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x0001ecbb) list_single_cale_mrui_row_pane_g

0xeabd,	// (0x0001d978) list_recal_vselct_arw_lo_pane

0xeac5,	// (0x0001d980) list_recal_vselct_arw_up_pane

0xeacd,	// (0x0001d988) list_recal_vselct_pane

0x894a,	// (0x00017805) btmg_button_pane

0x8954,	// (0x0001780f) main_btmg_pane_g1

0x948a,	// (0x00018345) bg_button_pane_cp044

0xed22,	// (0x0001dbdd) btmg_button_pane_t1

0xbe3c,	// (0x0001acf7) aid_listscroll_gen

0x94fa,	// (0x000183b5) main_cntbar_detail_pane

0xe60a,	// (0x0001d4c5) list_cmail_folder_pane

0xd23c,	// (0x0001c0f7) sp_fs_scroll_pane_cp03_ParamLimits

0x895e,	// (0x00017819) list_single_fs_dyc_pane_cp01_ParamLimits

0x895e,	// (0x00017819) list_single_fs_dyc_pane_cp01

0xed30,	// (0x0001dbeb) aid_size_cmail_indent

0xed39,	// (0x0001dbf4) list_single_dyc_row_pane_cp01

0x89a7,	// (0x00017862) cntbar_detail_list_pane_ParamLimits

0x89a7,	// (0x00017862) cntbar_detail_list_pane

0x89f3,	// (0x000178ae) main_cntbar_detail_cont_pane_ParamLimits

0x89f3,	// (0x000178ae) main_cntbar_detail_cont_pane

0xd23c,	// (0x0001c0f7) scroll_pane_cp032_ParamLimits

0xd23c,	// (0x0001c0f7) scroll_pane_cp032

0x8a07,	// (0x000178c2) cntbar_detail_list_event_pane_ParamLimits

0x8a07,	// (0x000178c2) cntbar_detail_list_event_pane

0x89b7,	// (0x00017872) cntbar_detail_list_shct_pane

0xa180,	// (0x0001903b) aid_list_gen

0xed42,	// (0x0001dbfd) aid_scroll

0xed4b,	// (0x0001dc06) aid_size_touch_scroll_bar

0x6cea,	// (0x00015ba5) aid_list_double

0x6cd8,	// (0x00015b93) aid_list_single

0x6cd8,	// (0x00015b93) aid_list_single_lg

0x8a17,	// (0x000178d2) aid_list_z_g_a_sm

0x8a1f,	// (0x000178da) aid_list_z_g_d

0x8a27,	// (0x000178e2) aid_txt_z_prm

0x8a35,	// (0x000178f0) aid_txt_z_prm_cp01

0x8a43,	// (0x000178fe) aid_txt_z_sec

0x8a51,	// (0x0001790c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a51,	// (0x0001790c) main_cntbar_detail_cont_pane_g1

0x8a65,	// (0x00017920) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a65,	// (0x00017920) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x0001ed4d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x0001ed4d) main_cntbar_detail_cont_pane_g

0xed54,	// (0x0001dc0f) main_cntbar_detail_cont_pane_t1

0xed62,	// (0x0001dc1d) main_cntbar_detail_cont_pane_t2

0xed70,	// (0x0001dc2b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe97,	// (0x0001ed52) main_cntbar_detail_cont_pane_t

0x8a75,	// (0x00017930) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8a75,	// (0x00017930) cell_cntbar_detail_list_shct_pane

0xed7e,	// (0x0001dc39) cntbar_detail_list_shct_pane_g1

0xed87,	// (0x0001dc42) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9e,	// (0x0001ed59) cntbar_detail_list_shct_pane_g

0x8a89,	// (0x00017944) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a89,	// (0x00017944) cntbar_detail_list_event_pane_g1

0x8a95,	// (0x00017950) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a95,	// (0x00017950) cntbar_detail_list_event_pane_g2

0x0005,

0xfea3,	// (0x0001ed5e) cntbar_detail_list_event_pane_g_ParamLimits

0xfea3,	// (0x0001ed5e) cntbar_detail_list_event_pane_g

0x8b01,	// (0x000179bc) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b01,	// (0x000179bc) cntbar_detail_list_event_pane_t1

0x8b16,	// (0x000179d1) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b16,	// (0x000179d1) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb0,	// (0x0001ed6b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb0,	// (0x0001ed6b) cntbar_detail_list_event_pane_t

0xc36b,	// (0x0001b226) cell_cntbar_detail_list_shct_pane_g1

0xa969,	// (0x00019824) navi_pane_mv_g3

0x94fa,	// (0x000183b5) main_cntbar_detail_pane_ParamLimits

0x948a,	// (0x00018345) main_notif_wgt_pane

0xccce,	// (0x0001bb89) aid_tch_main_mp4_pane_g4

0xcf00,	// (0x0001bdbb) popup_slider_window_cp02

0xeab3,	// (0x0001d96e) list_recal_day_event_pane

0x8975,	// (0x00017830) cntbar_detail_btn_pane_ParamLimits

0x8975,	// (0x00017830) cntbar_detail_btn_pane

0x898e,	// (0x00017849) cntbar_detail_btn_pane_cp01_ParamLimits

0x898e,	// (0x00017849) cntbar_detail_btn_pane_cp01

0x89b7,	// (0x00017872) cntbar_detail_list_shct_pane_ParamLimits

0x89c7,	// (0x00017882) cntbar_detail_pane_g1_ParamLimits

0x89c7,	// (0x00017882) cntbar_detail_pane_g1

0x89d7,	// (0x00017892) cntbar_detail_pane_t1_ParamLimits

0x89d7,	// (0x00017892) cntbar_detail_pane_t1

0x8aa1,	// (0x0001795c) cntbar_detail_list_event_pane_g3_ParamLimits

0x8aa1,	// (0x0001795c) cntbar_detail_list_event_pane_g3

0x8ab9,	// (0x00017974) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ab9,	// (0x00017974) cntbar_detail_list_event_pane_g4

0x8ad1,	// (0x0001798c) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ad1,	// (0x0001798c) cntbar_detail_list_event_pane_g5

0x8ae9,	// (0x000179a4) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ae9,	// (0x000179a4) cntbar_detail_list_event_pane_g6

0x8b2b,	// (0x000179e6) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b2b,	// (0x000179e6) cntbar_detail_list_event_pane_t3

0x8b3d,	// (0x000179f8) popup_notif_wgt_window_ParamLimits

0x8b3d,	// (0x000179f8) popup_notif_wgt_window

0x8b56,	// (0x00017a11) popup_submenu_window_cp01_ParamLimits

0x8b56,	// (0x00017a11) popup_submenu_window_cp01

0x9ecf,	// (0x00018d8a) bg_popup_window_pane_cp10

0xed90,	// (0x0001dc4b) listscroll_notif_wgt_pane

0xeda2,	// (0x0001dc5d) list_notif_wgt_window

0xedab,	// (0x0001dc66) scroll_pane_cp033

0x8b68,	// (0x00017a23) list_notif_wgt_row_pane_ParamLimits

0x8b68,	// (0x00017a23) list_notif_wgt_row_pane

0xedb4,	// (0x0001dc6f) aid_size_list_notif_wgt_del

0xedc1,	// (0x0001dc7c) list_notif_wgt_row_pane_g1

0xedcd,	// (0x0001dc88) list_notif_wgt_row_pane_g2

0xeddc,	// (0x0001dc97) list_notif_wgt_row_pane_g3

0x0002,

0xfeb7,	// (0x0001ed72) list_notif_wgt_row_pane_g

0xede9,	// (0x0001dca4) list_notif_wgt_row_pane_t1

0xedff,	// (0x0001dcba) list_notif_wgt_row_pane_t2

0xee11,	// (0x0001dccc) list_notif_wgt_row_pane_t3

0x0002,

0xfebe,	// (0x0001ed79) list_notif_wgt_row_pane_t

0xd47b,	// (0x0001c336) list_recal_day_event_pane_g1

0xee23,	// (0x0001dcde) list_recal_day_event_pane_t1

0x948a,	// (0x00018345) bg_button_pane_cp045

0x8b78,	// (0x00017a33) cntbar_detail_btn_pane_t1

0xbe50,	// (0x0001ad0b) main_callh_pane_ParamLimits

0xbe50,	// (0x0001ad0b) main_callh_pane

0x948a,	// (0x00018345) main_coverflow0_pane

0x948a,	// (0x00018345) main_wgtman_pane

0x79e2,	// (0x0001689d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79e2,	// (0x0001689d) main_fs_bigclock_unlock_btn_pane

0x8392,	// (0x0001724d) bg_button_pane_cp16

0x83a2,	// (0x0001725d) cell_tport_appsw_pane_g3

0x8b86,	// (0x00017a41) cf0_flow_pane_ParamLimits

0x8b86,	// (0x00017a41) cf0_flow_pane

0xee32,	// (0x0001dced) listscroll_cf0_pane

0xee3d,	// (0x0001dcf8) main_cf0_pane_g1

0x8b9b,	// (0x00017a56) main_cf0_pane_t1_ParamLimits

0x8b9b,	// (0x00017a56) main_cf0_pane_t1

0x8bb2,	// (0x00017a6d) main_cf0_pane_t2_ParamLimits

0x8bb2,	// (0x00017a6d) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0001ed85) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0001ed85) main_cf0_pane_t

0xee4f,	// (0x0001dd0a) scroll_pane_cp11

0x8bc9,	// (0x00017a84) cf0_flow_pane_g1

0x8bd1,	// (0x00017a8c) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0001ed8a) cf0_flow_pane_g

0x8bd9,	// (0x00017a94) cf0_flow_pane_t1

0x948a,	// (0x00018345) main_call6_pane

0x948a,	// (0x00018345) main_calllock_pane

0x8be7,	// (0x00017aa2) call6_btn_grp_pane_ParamLimits

0x8be7,	// (0x00017aa2) call6_btn_grp_pane

0x8c01,	// (0x00017abc) call6_pane_g1_ParamLimits

0x8c01,	// (0x00017abc) call6_pane_g1

0x8c17,	// (0x00017ad2) popup_call6_1st_window_ParamLimits

0x8c17,	// (0x00017ad2) popup_call6_1st_window

0x8c28,	// (0x00017ae3) popup_call6_2nd_window_ParamLimits

0x8c28,	// (0x00017ae3) popup_call6_2nd_window

0x8c39,	// (0x00017af4) cell_call6_btn_pane_ParamLimits

0x8c39,	// (0x00017af4) cell_call6_btn_pane

0x9ecf,	// (0x00018d8a) bg_popup_call2_in_pane_cp03

0xee5a,	// (0x0001dd15) popup_call6_1st_window_g1

0xee62,	// (0x0001dd1d) popup_call6_1st_window_g2

0xee6a,	// (0x0001dd25) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0001ed8f) popup_call6_1st_window_g

0xee72,	// (0x0001dd2d) popup_call6_1st_window_t1

0xee81,	// (0x0001dd3c) popup_call6_1st_window_t2

0xee8f,	// (0x0001dd4a) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x0001ed96) popup_call6_1st_window_t

0x9ecf,	// (0x00018d8a) bg_popup_call2_in_pane_cp04

0xee5a,	// (0x0001dd15) popup_call6_2nd_window_g1

0xee62,	// (0x0001dd1d) popup_call6_2nd_window_g2

0xee6a,	// (0x0001dd25) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0001ed8f) popup_call6_2nd_window_g

0xee72,	// (0x0001dd2d) popup_call6_2nd_window_t1

0x948a,	// (0x00018345) bg_button_pane_cp15

0xee9d,	// (0x0001dd58) cell_call6_btn_pane_g1

0xeea6,	// (0x0001dd61) cell_call6_btn_pane_t1

0x8c4d,	// (0x00017b08) listscroll_wgtman_pane_ParamLimits

0x8c4d,	// (0x00017b08) listscroll_wgtman_pane

0x8c6e,	// (0x00017b29) wgtman_btn_pane_ParamLimits

0x8c6e,	// (0x00017b29) wgtman_btn_pane

0xa77d,	// (0x00019638) aid_scroll_copy1

0xeeb5,	// (0x0001dd70) list_wgtman_pane

0x8cb1,	// (0x00017b6c) wgtman_btn_pane_g1_ParamLimits

0x8cb1,	// (0x00017b6c) wgtman_btn_pane_g1

0x8cdd,	// (0x00017b98) wgtman_btn_pane_t1_ParamLimits

0x8cdd,	// (0x00017b98) wgtman_btn_pane_t1

0xeebf,	// (0x0001dd7a) wgtman_btn_pane_t2_ParamLimits

0xeebf,	// (0x0001dd7a) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0001ed9d) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0001ed9d) wgtman_btn_pane_t

0x8d1a,	// (0x00017bd5) listrow_wgtman_pane_ParamLimits

0x8d1a,	// (0x00017bd5) listrow_wgtman_pane

0x8d2c,	// (0x00017be7) listrow_wgtman_pane_g1

0x8d39,	// (0x00017bf4) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x0001eda2) listrow_wgtman_pane_g

0x8d57,	// (0x00017c12) listrow_wgtman_pane_t1

0x8d6f,	// (0x00017c2a) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x0001eda7) listrow_wgtman_pane_t

0x8d95,	// (0x00017c50) wait_bar_pane_cp09

0xeed6,	// (0x0001dd91) main_calllock_btn_pane

0xeee0,	// (0x0001dd9b) main_calllock_pane_g1

0x948a,	// (0x00018345) bg_button_pane_cp17

0xee9d,	// (0x0001dd58) main_calllock_btn_pane_g1

0xeeec,	// (0x0001dda7) main_calllock_btn_pane_t1

0x948a,	// (0x00018345) main_dialer3_pane

0x948a,	// (0x00018345) main_fmrd2_pane

0xc36b,	// (0x0001b226) main_fs_bigclock_unlock_btn_pane_g1

0x8daf,	// (0x00017c6a) main_fs_bigclock_unlock_btn_pane_t1

0x8dbd,	// (0x00017c78) area_fmrd2_info_pane_ParamLimits

0x8dbd,	// (0x00017c78) area_fmrd2_info_pane

0x8dce,	// (0x00017c89) area_fmrd2_visual_pane_ParamLimits

0x8dce,	// (0x00017c89) area_fmrd2_visual_pane

0x8ddc,	// (0x00017c97) fmrd2_indi_pane_ParamLimits

0x8ddc,	// (0x00017c97) fmrd2_indi_pane

0x8de9,	// (0x00017ca4) area_fmrd2_visual_pane_g1

0x8df1,	// (0x00017cac) area_fmrd2_visual_pane_t1

0x8e01,	// (0x00017cbc) area_fmrd2_visual_pane_t2

0x8e11,	// (0x00017ccc) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x0001edb1) area_fmrd2_visual_pane_t

0x8e21,	// (0x00017cdc) area_fmrd2_info_pane_g1

0x8e29,	// (0x00017ce4) area_fmrd2_info_pane_t1

0x8e39,	// (0x00017cf4) area_fmrd2_info_pane_t2

0x8e49,	// (0x00017d04) area_fmrd2_info_pane_t3

0x8e59,	// (0x00017d14) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x0001edb8) area_fmrd2_info_pane_t

0x8e67,	// (0x00017d22) fmrd2_indi_pane_t1

0x8e77,	// (0x00017d32) fmrd2_indi_pane_t2

0x8e87,	// (0x00017d42) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x0001edc1) fmrd2_indi_pane_t

0xe0fc,	// (0x0001cfb7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0fc,	// (0x0001cfb7) list_single_fs_bigclock_indicator_pane_g5

0xe1ad,	// (0x0001d068) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1ad,	// (0x0001d068) list_single_fs_bigclock_indicator_pane_t5

0x852f,	// (0x000173ea) aid_cell_bcale_month_pane_ParamLimits

0x852f,	// (0x000173ea) aid_cell_bcale_month_pane

0x854d,	// (0x00017408) bcale_month_pane_ParamLimits

0x854d,	// (0x00017408) bcale_month_pane

0x8571,	// (0x0001742c) bcale_preview_pane_ParamLimits

0x8571,	// (0x0001742c) bcale_preview_pane

0xecba,	// (0x0001db75) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd9,	// (0x0001db94) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd9,	// (0x0001db94) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x0001ed43) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x0001ed43) list_single_fs_bigclock_pane_t

0x8da7,	// (0x00017c62) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0001edac) main_fs_bigclock_unlock_btn_pane_g

0x8e97,	// (0x00017d52) aid_dia3_key_size_ParamLimits

0x8e97,	// (0x00017d52) aid_dia3_key_size

0x8ea6,	// (0x00017d61) aid_dia3_listrow_size_ParamLimits

0x8ea6,	// (0x00017d61) aid_dia3_listrow_size

0x8ebb,	// (0x00017d76) dia3_keypad_fun_pane_ParamLimits

0x8ebb,	// (0x00017d76) dia3_keypad_fun_pane

0x8ed7,	// (0x00017d92) dia3_keypad_num_pane_ParamLimits

0x8ed7,	// (0x00017d92) dia3_keypad_num_pane

0x8ef2,	// (0x00017dad) dia3_listscroll_pane_ParamLimits

0x8ef2,	// (0x00017dad) dia3_listscroll_pane

0x8f05,	// (0x00017dc0) dia3_numentry_pane_ParamLimits

0x8f05,	// (0x00017dc0) dia3_numentry_pane

0xeefb,	// (0x0001ddb6) dia3_list_pane

0xef06,	// (0x0001ddc1) scroll_pane_cp12

0x948a,	// (0x00018345) bg_dia3_numentry_pane

0x8f19,	// (0x00017dd4) dia3_numentry_pane_t1

0x8f28,	// (0x00017de3) cell_dia3_key_num_pane

0x8f30,	// (0x00017deb) cell_dia3_key0_fun_pane_ParamLimits

0x8f30,	// (0x00017deb) cell_dia3_key0_fun_pane

0x8f44,	// (0x00017dff) cell_dia3_key1_fun_pane_ParamLimits

0x8f44,	// (0x00017dff) cell_dia3_key1_fun_pane

0x8f5c,	// (0x00017e17) dia3_listrow_pane

0xde4f,	// (0x0001cd0a) bg_dia3_numentry_pane_g1

0x948a,	// (0x00018345) bg_button_pane_cp21

0xef11,	// (0x0001ddcc) cell_dia3_key_num_pane_t1

0xef1f,	// (0x0001ddda) cell_dia3_key_num_pane_t2

0xef2e,	// (0x0001dde9) cell_dia3_key_num_pane_t3

0xef3d,	// (0x0001ddf8) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x0001edc8) cell_dia3_key_num_pane_t

0x948a,	// (0x00018345) bg_button_pane_cp19

0x8f6e,	// (0x00017e29) cell_dia3_key0_fun_pane_g1

0x948a,	// (0x00018345) bg_button_pane_cp20

0x8f76,	// (0x00017e31) cell_dia3_key1_fun_pane_g1

0x8f7e,	// (0x00017e39) area_left_week_number_pane

0x8f8a,	// (0x00017e45) area_top_day_name_pane

0x8f9d,	// (0x00017e58) frame_month_view_pane

0xef4c,	// (0x0001de07) grid_month_view_pane

0x8fb0,	// (0x00017e6b) cell_top_day_name_pane_ParamLimits

0x8fb0,	// (0x00017e6b) cell_top_day_name_pane

0x8fdd,	// (0x00017e98) cell_area_left_week_number_pane_ParamLimits

0x8fdd,	// (0x00017e98) cell_area_left_week_number_pane

0x8ff1,	// (0x00017eac) cell_month_view_pane_ParamLimits

0x8ff1,	// (0x00017eac) cell_month_view_pane

0xef5a,	// (0x0001de15) frm_month_g1

0x901e,	// (0x00017ed9) frm_month_g2

0x9031,	// (0x00017eec) frm_month_g3

0x9044,	// (0x00017eff) frm_month_g4

0x9057,	// (0x00017f12) frm_month_g5

0x906a,	// (0x00017f25) frm_month_g6

0x907d,	// (0x00017f38) frm_month_g7

0xef67,	// (0x0001de22) frm_month_g8

0x9090,	// (0x00017f4b) frm_month_g9

0x90a0,	// (0x00017f5b) frm_month_g10

0x90b0,	// (0x00017f6b) frm_month_g11

0x90c0,	// (0x00017f7b) frm_month_g12

0x90d2,	// (0x00017f8d) frm_month_g13

0x90e4,	// (0x00017f9f) frm_month_g14

0x90f8,	// (0x00017fb3) frm_month_g15

0x910c,	// (0x00017fc7) frm_month_g16

0x000f,

0xff16,	// (0x0001edd1) frm_month_g

0xef74,	// (0x0001de2f) cell_top_day_name_pane_t1

0x9120,	// (0x00017fdb) cell_area_left_week_number_pane_g1

0x912c,	// (0x00017fe7) cell_area_left_week_number_pane_t1

0xc5b0,	// (0x0001b46b) cell_month_view_pane_g1

0x913f,	// (0x00017ffa) cell_month_view_pane_t1

0x948a,	// (0x00018345) main_fps_pane

0xe3ca,	// (0x0001d285) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3ca,	// (0x0001d285) cmail_ddmenu_btn02_pane_cp1

0xe3e6,	// (0x0001d2a1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3e6,	// (0x0001d2a1) cmail_ddmenu_btn02_pane_cp2

0x8812,	// (0x000176cd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8812,	// (0x000176cd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x0001ecf6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x0001ecf6) cmail_ddmenu_btn02_pane_g

0x8830,	// (0x000176eb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8830,	// (0x000176eb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x0001ecfb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x0001ecfb) cmail_ddmenu_btn02_pane_t

0x9152,	// (0x0001800d) fps_text_pane_ParamLimits

0x9152,	// (0x0001800d) fps_text_pane

0x9169,	// (0x00018024) main_fps_pane_g1_ParamLimits

0x9169,	// (0x00018024) main_fps_pane_g1

0x9183,	// (0x0001803e) wait_bar_pane_cp010_ParamLimits

0x9183,	// (0x0001803e) wait_bar_pane_cp010

0x9194,	// (0x0001804f) fps_text_pane_t1_ParamLimits

0x9194,	// (0x0001804f) fps_text_pane_t1

0xea2a,	// (0x0001d8e5) cam4_image_uncrop_pane_g1

0xea33,	// (0x0001d8ee) cam4_image_uncrop_pane_g2

0x5a1f,	// (0x000148da) cam4_image_uncrop_pane_g3

0x5a28,	// (0x000148e3) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0001e7bc) cam4_image_uncrop_pane_g

0x8f5c,	// (0x00017e17) dia3_listrow_pane_ParamLimits

0x948a,	// (0x00018345) main_phob2_pane

0x8363,	// (0x0001721e) cell_tport_appsw_pane_cp02_ParamLimits

0x8363,	// (0x0001721e) cell_tport_appsw_pane_cp02

0x8377,	// (0x00017232) cell_tport_appsw_pane_cp03_ParamLimits

0x8377,	// (0x00017232) cell_tport_appsw_pane_cp03

0x948a,	// (0x00018345) phob2_contact_card_pane

0x948a,	// (0x00018345) phob2_listscroll_pane

0xef87,	// (0x0001de42) phob2_list_pane

0xef8f,	// (0x0001de4a) scroll_pane_cp034

0x91ac,	// (0x00018067) phob2_cc_data_pane_ParamLimits

0x91ac,	// (0x00018067) phob2_cc_data_pane

0x91cb,	// (0x00018086) phob2_cc_listscroll_pane_ParamLimits

0x91cb,	// (0x00018086) phob2_cc_listscroll_pane

0x8d1a,	// (0x00017bd5) list_double_large_graphic_phob2_pane_ParamLimits

0x8d1a,	// (0x00017bd5) list_double_large_graphic_phob2_pane

0x91e9,	// (0x000180a4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x91e9,	// (0x000180a4) list_double_large_graphic_phob2_pane_g1

0x91ff,	// (0x000180ba) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x91ff,	// (0x000180ba) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x0001edf2) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x0001edf2) list_double_large_graphic_phob2_pane_g

0x920b,	// (0x000180c6) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x920b,	// (0x000180c6) list_double_large_graphic_phob2_pane_t1

0x9221,	// (0x000180dc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9221,	// (0x000180dc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x0001edf7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x0001edf7) list_double_large_graphic_phob2_pane_t

0x948a,	// (0x00018345) list_highlight_pane_cp024

0x9236,	// (0x000180f1) phob2_cc_button_pane

0x923e,	// (0x000180f9) phob2_cc_data_pane_g1_ParamLimits

0x923e,	// (0x000180f9) phob2_cc_data_pane_g1

0x9253,	// (0x0001810e) phob2_cc_data_pane_g2_ParamLimits

0x9253,	// (0x0001810e) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x0001edfc) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x0001edfc) phob2_cc_data_pane_g

0x9263,	// (0x0001811e) phob2_cc_data_pane_t1_ParamLimits

0x9263,	// (0x0001811e) phob2_cc_data_pane_t1

0x927b,	// (0x00018136) phob2_cc_data_pane_t2_ParamLimits

0x927b,	// (0x00018136) phob2_cc_data_pane_t2

0x9293,	// (0x0001814e) phob2_cc_data_pane_t3_ParamLimits

0x9293,	// (0x0001814e) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x0001ee01) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x0001ee01) phob2_cc_data_pane_t

0xef97,	// (0x0001de52) phob2_cc_list_pane_ParamLimits

0xef97,	// (0x0001de52) phob2_cc_list_pane

0xd524,	// (0x0001c3df) scroll_pane_cp035_ParamLimits

0xd524,	// (0x0001c3df) scroll_pane_cp035

0x94fa,	// (0x000183b5) bg_button_pane_cp033

0xefa3,	// (0x0001de5e) phob2_cc_button_pane_g1

0xefaf,	// (0x0001de6a) phob2_cc_button_pane_t1

0xefc4,	// (0x0001de7f) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x0001ee08) phob2_cc_button_pane_t

0x92ab,	// (0x00018166) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92ab,	// (0x00018166) list_double_large_graphic_phob2_cc_pane

0x92dd,	// (0x00018198) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92dd,	// (0x00018198) list_double_large_graphic_phob2_cc_pane_g1

0xefd6,	// (0x0001de91) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xefd6,	// (0x0001de91) list_double_large_graphic_phob2_cc_pane_g2

0x92e9,	// (0x000181a4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x92e9,	// (0x000181a4) list_double_large_graphic_phob2_cc_pane_g3

0x92f5,	// (0x000181b0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x92f5,	// (0x000181b0) list_double_large_graphic_phob2_cc_pane_g4

0x9301,	// (0x000181bc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9301,	// (0x000181bc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x0001ee0d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x0001ee0d) list_double_large_graphic_phob2_cc_pane_g

0x930d,	// (0x000181c8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x930d,	// (0x000181c8) list_double_large_graphic_phob2_cc_pane_t1

0x9336,	// (0x000181f1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9336,	// (0x000181f1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x0001ee18) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x0001ee18) list_double_large_graphic_phob2_cc_pane_t

0xefe2,	// (0x0001de9d) list_highlight_pane_cp025_ParamLimits

0xefe2,	// (0x0001de9d) list_highlight_pane_cp025

0x94fa,	// (0x000183b5) bg_button_pane_cp033_ParamLimits

0xefa3,	// (0x0001de5e) phob2_cc_button_pane_g1_ParamLimits

0xefaf,	// (0x0001de6a) phob2_cc_button_pane_t1_ParamLimits

0xefc4,	// (0x0001de7f) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x0001ee08) phob2_cc_button_pane_t_ParamLimits

0x05b6,	// (0x0000f471) popup_wgtman_window

0xd2d5,	// (0x0001c190) scroll_pane_cp038

0x8c93,	// (0x00017b4e) wgtman_btn_pane_cp_01_ParamLimits

0x8c93,	// (0x00017b4e) wgtman_btn_pane_cp_01

0xeff0,	// (0x0001deab) wgtman_content_pane

0xeff9,	// (0x0001deb4) wgtman_heading_pane

0x948a,	// (0x00018345) bg_heading_pane_cp02

0xf002,	// (0x0001debd) wgtman_heading_pane_g1

0xf00a,	// (0x0001dec5) wgtman_heading_pane_t1

0xf018,	// (0x0001ded3) scroll_pane_cp036

0xf020,	// (0x0001dedb) wgtman_list_pane

0xea3c,	// (0x0001d8f7) wgtman_list_pane_t1_ParamLimits

0xea3c,	// (0x0001d8f7) wgtman_list_pane_t1

0xd023,	// (0x0001bede) cam4_grid_pane

0x67cc,	// (0x00015687) bg_button_pane_cp015_ParamLimits

0x67e0,	// (0x0001569b) bg_button_pane_cp016_ParamLimits

0x67f3,	// (0x000156ae) bg_button_pane_cp017_ParamLimits

0x684b,	// (0x00015706) popup_vitu2_query_window_g3_ParamLimits

0x684b,	// (0x00015706) popup_vitu2_query_window_g3

0x6908,	// (0x000157c3) popup_vitu2_query_window_t6_ParamLimits

0x6908,	// (0x000157c3) popup_vitu2_query_window_t6

0x6933,	// (0x000157ee) popup_vitu2_query_window_t7_ParamLimits

0x6933,	// (0x000157ee) popup_vitu2_query_window_t7

0xea2a,	// (0x0001d8e5) cam4_grid_pane_g1

0xea33,	// (0x0001d8ee) cam4_grid_pane_g2

0xf028,	// (0x0001dee3) cam4_grid_pane_g3

0xf031,	// (0x0001deec) cam4_grid_pane_g4

0x0003,

0xff62,	// (0x0001ee1d) cam4_grid_pane_g

0x14dc,	// (0x00010397) aid_placing_vt_slider_lsc_ParamLimits

0x17d9,	// (0x00010694) vidtel_button_pane_ParamLimits

0x17d9,	// (0x00010694) vidtel_button_pane

0x948a,	// (0x00018345) bg_button_pane_cp034

0xf03c,	// (0x0001def7) vidtel_button_pane_g1

0xf044,	// (0x0001deff) vidtel_button_pane_t1

0xd421,	// (0x0001c2dc) aid_size_vtel_slider_touch

0xd524,	// (0x0001c3df) scroll_pane_cp039

0x76d6,	// (0x00016591) ncim_query_button_pane_cp01_ParamLimits

0x76f5,	// (0x000165b0) ncimui_query_pane_g1_ParamLimits

0x94fa,	// (0x000183b5) input_focus_pane_cp012_ParamLimits

0xde95,	// (0x0001cd50) ncim_query_entry_pane_t1_ParamLimits

0xd524,	// (0x0001c3df) scroll_pane_cp039_ParamLimits

0xa854,	// (0x0001970f) navi_pane_bcale_mc_g1

0xa85c,	// (0x00019717) navi_pane_bcale_mc_t1

0xe42f,	// (0x0001d2ea) main_sp_fs_email_pane_g1

0xe43b,	// (0x0001d2f6) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0001ebb3) main_sp_fs_email_pane_g

0xe918,	// (0x0001d7d3) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe918,	// (0x0001d7d3) list_single_cale_mrui_row_pane_g3

0x8850,	// (0x0001770b) list_single_recal_day_pane_g5_event_pane

0xeb24,	// (0x0001d9df) list_single_recal_day_pane_g7

0xf05a,	// (0x0001df15) list_recal_day_event_pane_cp01

0xf063,	// (0x0001df1e) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0001df26) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0001df2e) list_recal_vselct_pane_cp01

0xd47b,	// (0x0001c336) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0001df38) list_recal_day_event_pane_cp01_t1

0xeb2c,	// (0x0001d9e7) list_single_recal_day_pane_t1_ParamLimits

0xeb3e,	// (0x0001d9f9) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x0001ed0b) list_single_recal_day_pane_t_ParamLimits

0x9b76,	// (0x00018a31) bg_notes_pane_ParamLimits

0x9c2d,	// (0x00018ae8) list_notes_pane_ParamLimits

0x08f7,	// (0x0000f7b2) scroll_pane_cp06_ParamLimits

0x9c69,	// (0x00018b24) main_notes_pane_ParamLimits

0x948a,	// (0x00018345) main_welc_pane

0x935f,	// (0x0001821a) main_welc_body_pane_ParamLimits

0x935f,	// (0x0001821a) main_welc_body_pane

0x937c,	// (0x00018237) main_welc_opti_pane_ParamLimits

0x937c,	// (0x00018237) main_welc_opti_pane

0x93c1,	// (0x0001827c) main_welc_pane_t1_ParamLimits

0x93c1,	// (0x0001827c) main_welc_pane_t1

0x93df,	// (0x0001829a) main_welc_body_row_pane_ParamLimits

0x93df,	// (0x0001829a) main_welc_body_row_pane

0xd225,	// (0x0001c0e0) main_welc_opti_row_pane_ParamLimits

0xd225,	// (0x0001c0e0) main_welc_opti_row_pane

0xf08b,	// (0x0001df46) main_welc_opti_row_pane_g1

0x93f4,	// (0x000182af) main_welc_opti_row_pane_t1

0xf093,	// (0x0001df4e) main_welc_body_row_pane_t1

0xed9a,	// (0x0001dc55) popup_notif_wgt_heading_pane

0xedb4,	// (0x0001dc6f) aid_size_list_notif_wgt_del_ParamLimits

0xedc1,	// (0x0001dc7c) list_notif_wgt_row_pane_g1_ParamLimits

0xedcd,	// (0x0001dc88) list_notif_wgt_row_pane_g2_ParamLimits

0xeddc,	// (0x0001dc97) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb7,	// (0x0001ed72) list_notif_wgt_row_pane_g_ParamLimits

0xede9,	// (0x0001dca4) list_notif_wgt_row_pane_t1_ParamLimits

0xedff,	// (0x0001dcba) list_notif_wgt_row_pane_t2_ParamLimits

0xee11,	// (0x0001dccc) list_notif_wgt_row_pane_t3_ParamLimits

0xfebe,	// (0x0001ed79) list_notif_wgt_row_pane_t_ParamLimits

0x8d2c,	// (0x00017be7) listrow_wgtman_pane_g1_ParamLimits

0x8d39,	// (0x00017bf4) listrow_wgtman_pane_g2_ParamLimits

0xfee7,	// (0x0001eda2) listrow_wgtman_pane_g_ParamLimits

0x8d57,	// (0x00017c12) listrow_wgtman_pane_t1_ParamLimits

0x8d6f,	// (0x00017c2a) listrow_wgtman_pane_t2_ParamLimits

0xfeec,	// (0x0001eda7) listrow_wgtman_pane_t_ParamLimits

0x8d95,	// (0x00017c50) wait_bar_pane_cp09_ParamLimits

0x948a,	// (0x00018345) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0001df5d) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0001df65) popup_notif_wgt_heading_pane_t1

0x948a,	// (0x00018345) main_vids_pane

0x948a,	// (0x00018345) vids_listscroll_pane

0x9403,	// (0x000182be) scroll_pane_cp040

0x948a,	// (0x00018345) vids_list_pane

0x940e,	// (0x000182c9) vids_list_double_pane_ParamLimits

0x940e,	// (0x000182c9) vids_list_double_pane

0x941f,	// (0x000182da) vids_list_double_pane_g1

0x9428,	// (0x000182e3) vids_list_double_pane_t1

0x9438,	// (0x000182f3) vids_list_double_pane_t2

0x0001,

0xff70,	// (0x0001ee2b) vids_list_double_pane_t

0x94fa,	// (0x000183b5) main_ncimui_pane_ParamLimits

0x750c,	// (0x000163c7) main_ncimui_pane_g1_ParamLimits

0x7518,	// (0x000163d3) main_ncimui_pane_g2_ParamLimits

0x7518,	// (0x000163d3) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0001eab8) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0001eab8) main_ncimui_pane_g

0x9397,	// (0x00018252) main_welc_pane_g1_ParamLimits

0x9397,	// (0x00018252) main_welc_pane_g1

0x93ac,	// (0x00018267) main_welc_pane_g2_ParamLimits

0x93ac,	// (0x00018267) main_welc_pane_g2

0x0001,

0xff6b,	// (0x0001ee26) main_welc_pane_g_ParamLimits

0xff6b,	// (0x0001ee26) main_welc_pane_g

0x9b76,	// (0x00018a31) listscroll_mce_pane_ParamLimits

0xa9a9,	// (0x00019864) wait_bar_pane_cp10

0xbe44,	// (0x0001acff) main_cale_day_pane_ParamLimits

0xbe44,	// (0x0001acff) main_cale_week_pane_ParamLimits

0x9b76,	// (0x00018a31) main_messa_pane_ParamLimits

0x4cbd,	// (0x00013b78) main_clock2_btn_pane_ParamLimits

0x4cbd,	// (0x00013b78) main_clock2_btn_pane

0xc7ac,	// (0x0001b667) main_clock2_btn_pane_cp01_ParamLimits

0xc7ac,	// (0x0001b667) main_clock2_btn_pane_cp01

0xe8a4,	// (0x0001d75f) list_cale_mrui_pane_ParamLimits

0xee47,	// (0x0001dd02) main_cf0_pane_g2

0x0001,

0xfec5,	// (0x0001ed80) main_cf0_pane_g

0x8f7e,	// (0x00017e39) area_left_week_number_pane_ParamLimits

0x8f8a,	// (0x00017e45) area_top_day_name_pane_ParamLimits

0x8f9d,	// (0x00017e58) frame_month_view_pane_ParamLimits

0xef4c,	// (0x0001de07) grid_month_view_pane_ParamLimits

0xef5a,	// (0x0001de15) frm_month_g1_ParamLimits

0x901e,	// (0x00017ed9) frm_month_g2_ParamLimits

0x9031,	// (0x00017eec) frm_month_g3_ParamLimits

0x9044,	// (0x00017eff) frm_month_g4_ParamLimits

0x9057,	// (0x00017f12) frm_month_g5_ParamLimits

0x906a,	// (0x00017f25) frm_month_g6_ParamLimits

0x907d,	// (0x00017f38) frm_month_g7_ParamLimits

0xef67,	// (0x0001de22) frm_month_g8_ParamLimits

0x9090,	// (0x00017f4b) frm_month_g9_ParamLimits

0x90a0,	// (0x00017f5b) frm_month_g10_ParamLimits

0x90b0,	// (0x00017f6b) frm_month_g11_ParamLimits

0x90c0,	// (0x00017f7b) frm_month_g12_ParamLimits

0x90d2,	// (0x00017f8d) frm_month_g13_ParamLimits

0x90e4,	// (0x00017f9f) frm_month_g14_ParamLimits

0x90f8,	// (0x00017fb3) frm_month_g15_ParamLimits

0x910c,	// (0x00017fc7) frm_month_g16_ParamLimits

0xff16,	// (0x0001edd1) frm_month_g_ParamLimits

0xef74,	// (0x0001de2f) cell_top_day_name_pane_t1_ParamLimits

0x9120,	// (0x00017fdb) cell_area_left_week_number_pane_g1_ParamLimits

0x912c,	// (0x00017fe7) cell_area_left_week_number_pane_t1_ParamLimits

0xc5b0,	// (0x0001b46b) cell_month_view_pane_g1_ParamLimits

0x913f,	// (0x00017ffa) cell_month_view_pane_t1_ParamLimits

0x9b6e,	// (0x00018a29) main_clock2_btn_pane_g1

0xf0b8,	// (0x0001df73) main_clock2_btn_pane_t1

0x94fa,	// (0x000183b5) listscroll_cmail_pane_ParamLimits

0xe42f,	// (0x0001d2ea) main_sp_fs_email_pane_g1_ParamLimits

0xe43b,	// (0x0001d2f6) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0001ebb3) main_sp_fs_email_pane_g_ParamLimits

0xea94,	// (0x0001d94f) list_recal_day_pane_ParamLimits

0xeaa5,	// (0x0001d960) mian_recal_day_pane_t1

0x8023,	// (0x00016ede) list_single_dyc_row_text_pane_t4_ParamLimits

0x8023,	// (0x00016ede) list_single_dyc_row_text_pane_t4

0x806c,	// (0x00016f27) list_single_dyc_row_text_pane_t5_ParamLimits

0x806c,	// (0x00016f27) list_single_dyc_row_text_pane_t5

0xe4dd,	// (0x0001d398) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4dd,	// (0x0001d398) list_single_dyc_row_text_pane_t6

0x2287,	// (0x00011142) aid_mgn_list_cale_time_pane

0x94fa,	// (0x000183b5) main_gallery2_pane_ParamLimits

0xc7c2,	// (0x0001b67d) main_clock2_pane_cp01_t1

0xc7d0,	// (0x0001b68b) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x0001e68e) main_clock2_pane_cp01_t

0x0c74,	// (0x0000fb2f) cale_week_scroll_pane_g16_ParamLimits

0x0c74,	// (0x0000fb2f) cale_week_scroll_pane_g16

0x9ecf,	// (0x00018d8a) vorec_slider_pane

0xf044,	// (0x0001deff) vidtel_button_pane_t1_ParamLimits

0x88b6,	// (0x00017771) main_fs_bigclock_clock_pane_g1_ParamLimits

0x88b6,	// (0x00017771) main_fs_bigclock_clock_pane_g2_ParamLimits

0x88c7,	// (0x00017782) main_fs_bigclock_clock_pane_g3_ParamLimits

0x88c7,	// (0x00017782) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe73,	// (0x0001ed2e) main_fs_bigclock_clock_pane_g_ParamLimits

0x88da,	// (0x00017795) main_fs_bigclock_clock_pane_t1_ParamLimits

0x88f0,	// (0x000177ab) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe7c,	// (0x0001ed37) main_fs_bigclock_clock_pane_t_ParamLimits

0x44bb,	// (0x00013376) main_mup3_lyrics_pane_ParamLimits

0x44bb,	// (0x00013376) main_mup3_lyrics_pane

0x946e,	// (0x00018329) main_mup3_lyrics_pane_t1_ParamLimits

0x946e,	// (0x00018329) main_mup3_lyrics_pane_t1

0xccb8,	// (0x0001bb73) aid_main_mp4_pane_t1_area

0xccc2,	// (0x0001bb7d) aid_main_mp4_pane_t2_area

0xcd6e,	// (0x0001bc29) main_mp4_pane_g7_ParamLimits

0xcd6e,	// (0x0001bc29) main_mp4_pane_g7

0xcd7a,	// (0x0001bc35) main_mp4_pane_g8_ParamLimits

0xcd7a,	// (0x0001bc35) main_mp4_pane_g8

0x57ee,	// (0x000146a9) aid_call6_pane_g1_size

0x92c6,	// (0x00018181) list_double_large_graphic_phob2_other_pane_ParamLimits

0x92c6,	// (0x00018181) list_double_large_graphic_phob2_other_pane

0xa785,	// (0x00019640) list_double_large_graphic_phob2_other_pane_g1

0x948a,	// (0x00018345) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
