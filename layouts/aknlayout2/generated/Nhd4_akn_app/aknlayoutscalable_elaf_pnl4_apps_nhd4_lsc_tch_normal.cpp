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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000d9d9 };

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
0x0db6,	// (0x0000e78f) Screen

0x0dc2,	// (0x0000e79b) application_window

0x0dfe,	// (0x0000e7d7) area_bottom_pane_ParamLimits

0x0dfe,	// (0x0000e7d7) area_bottom_pane

0x0e37,	// (0x0000e810) area_top_pane_ParamLimits

0x0e37,	// (0x0000e810) area_top_pane

0x9512,	// (0x00016eeb) call_video_uplink_pane_ParamLimits

0x9512,	// (0x00016eeb) call_video_uplink_pane

0x0eac,	// (0x0000e885) main_pane_ParamLimits

0x0eac,	// (0x0000e885) main_pane

0xbf5b,	// (0x00019934) context_pane

0x3eaf,	// (0x00011888) navi_pane

0x3ed7,	// (0x000118b0) popup_cale_events_window_ParamLimits

0x3ed7,	// (0x000118b0) popup_cale_events_window

0xbf6e,	// (0x00019947) popup_mup_playback_window

0x3eef,	// (0x000118c8) signal_pane

0x9cdb,	// (0x000176b4) main_browser_pane

0xaa6f,	// (0x00018448) main_burst_pane

0x3c0f,	// (0x000115e8) main_calc_pane

0xaa6f,	// (0x00018448) main_cale_day_pane

0x9cdb,	// (0x000176b4) main_cale_month_pane

0xaa6f,	// (0x00018448) main_cale_week_pane

0xaa6f,	// (0x00018448) main_call_pane

0x994f,	// (0x00017328) main_call_poc_pane

0xaa6f,	// (0x00018448) main_camera_pane

0xaa6f,	// (0x00018448) main_chi_dic_pane

0xa8fe,	// (0x000182d7) main_clock_pane

0x994f,	// (0x00017328) main_fmradio_pane

0xaa6f,	// (0x00018448) main_graph_messa_pane

0x994f,	// (0x00017328) main_help_pane

0x9cdb,	// (0x000176b4) main_im_pane

0x9baa,	// (0x00017583) main_image_pane_ParamLimits

0x9baa,	// (0x00017583) main_image_pane

0x994f,	// (0x00017328) main_location2_pane

0xaa6f,	// (0x00018448) main_location_pane

0x994f,	// (0x00017328) main_messa_pane

0x994f,	// (0x00017328) main_mp2_pane

0xaa6f,	// (0x00018448) main_mp_pane

0x994f,	// (0x00017328) main_msg_pane

0x994f,	// (0x00017328) main_mup_eq_pane

0x994f,	// (0x00017328) main_mup_pane

0xaa6f,	// (0x00018448) main_notes_pane

0x994f,	// (0x00017328) main_pec_pane

0x994f,	// (0x00017328) main_phob_pane

0x994f,	// (0x00017328) main_pinb_pane

0x994f,	// (0x00017328) main_postcard_pane

0x994f,	// (0x00017328) main_qdial_pane

0xaa6f,	// (0x00018448) main_skin_pane

0x994f,	// (0x00017328) main_smil2_pane

0xaa6f,	// (0x00018448) main_smil_pane

0xaa6f,	// (0x00018448) main_video_pane

0xaa6f,	// (0x00018448) main_video_tele_pane

0x9baa,	// (0x00017583) main_viewer_pane_ParamLimits

0x9baa,	// (0x00017583) main_viewer_pane

0xaa6f,	// (0x00018448) main_vorec_pane

0x3c63,	// (0x0001163c) popup_blid_sat_info_window_ParamLimits

0x3c63,	// (0x0001163c) popup_blid_sat_info_window

0x3cbb,	// (0x00011694) popup_dyc_status_message_window_ParamLimits

0x3cbb,	// (0x00011694) popup_dyc_status_message_window

0x3cd3,	// (0x000116ac) popup_grid_large_graphic_window_ParamLimits

0x3cd3,	// (0x000116ac) popup_grid_large_graphic_window

0x3d89,	// (0x00011762) popup_loc_request_window_ParamLimits

0x3d89,	// (0x00011762) popup_loc_request_window

0x3e87,	// (0x00011860) popup_wml_address_window_ParamLimits

0x3e87,	// (0x00011860) popup_wml_address_window

0x3a49,	// (0x00011422) call_muted_g1

0x3701,	// (0x000110da) popup_call_audio_conf_window_ParamLimits

0x3701,	// (0x000110da) popup_call_audio_conf_window

0x3a5d,	// (0x00011436) popup_call_audio_first_window_ParamLimits

0x3a5d,	// (0x00011436) popup_call_audio_first_window

0x3ad3,	// (0x000114ac) popup_call_audio_in_window_ParamLimits

0x3ad3,	// (0x000114ac) popup_call_audio_in_window

0x3b0f,	// (0x000114e8) popup_call_audio_out_window_ParamLimits

0x3b0f,	// (0x000114e8) popup_call_audio_out_window

0x3b49,	// (0x00011522) popup_call_audio_second_window_ParamLimits

0x3b49,	// (0x00011522) popup_call_audio_second_window

0x3b9f,	// (0x00011578) popup_call_audio_wait_window_ParamLimits

0x3b9f,	// (0x00011578) popup_call_audio_wait_window

0x3bd4,	// (0x000115ad) popup_number_entry_window_ParamLimits

0x3bd4,	// (0x000115ad) popup_number_entry_window

0x953e,	// (0x00016f17) bg_popup_call_pane_cp05_ParamLimits

0x953e,	// (0x00016f17) bg_popup_call_pane_cp05

0x955e,	// (0x00016f37) popup_number_entry_window_t1

0x9571,	// (0x00016f4a) popup_number_entry_window_t2

0x9583,	// (0x00016f5c) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0001cac5) popup_number_entry_window_t

0x9595,	// (0x00016f6e) text_title_cp2

0x95a8,	// (0x00016f81) bg_popup_call_pane_cp_ParamLimits

0x95a8,	// (0x00016f81) bg_popup_call_pane_cp

0x95b6,	// (0x00016f8f) call_thumbnail_pane

0x95be,	// (0x00016f97) popup_call_audio_in_window_g1_ParamLimits

0x95be,	// (0x00016f97) popup_call_audio_in_window_g1

0x95ca,	// (0x00016fa3) popup_call_audio_in_window_g2_ParamLimits

0x95ca,	// (0x00016fa3) popup_call_audio_in_window_g2

0x95d6,	// (0x00016faf) popup_call_audio_in_window_g3_ParamLimits

0x95d6,	// (0x00016faf) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0001cace) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0001cace) popup_call_audio_in_window_g

0x95e2,	// (0x00016fbb) popup_call_audio_in_window_t1_ParamLimits

0x95e2,	// (0x00016fbb) popup_call_audio_in_window_t1

0x95fd,	// (0x00016fd6) popup_call_audio_in_window_t2_ParamLimits

0x95fd,	// (0x00016fd6) popup_call_audio_in_window_t2

0x9618,	// (0x00016ff1) popup_call_audio_in_window_t3_ParamLimits

0x9618,	// (0x00016ff1) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0001cad5) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0001cad5) popup_call_audio_in_window_t

0x95a8,	// (0x00016f81) bg_popup_call_pane_cp01_ParamLimits

0x95a8,	// (0x00016f81) bg_popup_call_pane_cp01

0x95b6,	// (0x00016f8f) call_thumbnail_pane_cp02

0x962b,	// (0x00017004) call_type_pane_cp022

0x9633,	// (0x0001700c) popup_call_audio_out_window_g1_ParamLimits

0x9633,	// (0x0001700c) popup_call_audio_out_window_g1

0x9645,	// (0x0001701e) popup_call_audio_out_window_g2_ParamLimits

0x9645,	// (0x0001701e) popup_call_audio_out_window_g2

0x9651,	// (0x0001702a) popup_call_audio_out_window_g3_ParamLimits

0x9651,	// (0x0001702a) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0001cadc) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0001cadc) popup_call_audio_out_window_g

0x9663,	// (0x0001703c) popup_call_audio_out_window_t1_ParamLimits

0x9663,	// (0x0001703c) popup_call_audio_out_window_t1

0x967b,	// (0x00017054) popup_call_audio_out_window_t2_ParamLimits

0x967b,	// (0x00017054) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0001cae3) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0001cae3) popup_call_audio_out_window_t

0x9690,	// (0x00017069) bg_popup_call_pane_ParamLimits

0x9690,	// (0x00017069) bg_popup_call_pane

0x1057,	// (0x0000ea30) call_thumbnail_pane_cp_ParamLimits

0x1057,	// (0x0000ea30) call_thumbnail_pane_cp

0x9714,	// (0x000170ed) call_type_pane_cp01_ParamLimits

0x9714,	// (0x000170ed) call_type_pane_cp01

0x9758,	// (0x00017131) popup_call_audio_first_window_g1_ParamLimits

0x9758,	// (0x00017131) popup_call_audio_first_window_g1

0x97a4,	// (0x0001717d) popup_call_audio_first_window_g2_ParamLimits

0x97a4,	// (0x0001717d) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0001cae8) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0001cae8) popup_call_audio_first_window_g

0x97e8,	// (0x000171c1) popup_call_audio_first_window_t1_ParamLimits

0x97e8,	// (0x000171c1) popup_call_audio_first_window_t1

0x9894,	// (0x0001726d) popup_call_audio_first_window_t4_ParamLimits

0x9894,	// (0x0001726d) popup_call_audio_first_window_t4

0x9920,	// (0x000172f9) popup_call_audio_first_window_t5_ParamLimits

0x9920,	// (0x000172f9) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0001caed) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0001caed) popup_call_audio_first_window_t

0x994f,	// (0x00017328) bg_popup_call_pane_cp02

0x9959,	// (0x00017332) call_type_pane_cp023

0x9961,	// (0x0001733a) popup_call_audio_wait_window_g1

0x9969,	// (0x00017342) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001caf4) popup_call_audio_wait_window_g

0x9971,	// (0x0001734a) popup_call_audio_wait_window_t3

0x997f,	// (0x00017358) bg_popup_call_pane_cp03_ParamLimits

0x997f,	// (0x00017358) bg_popup_call_pane_cp03

0x99df,	// (0x000173b8) call_thumbnail_pane_cp011_ParamLimits

0x99df,	// (0x000173b8) call_thumbnail_pane_cp011

0x99eb,	// (0x000173c4) call_type_pane_cp034_ParamLimits

0x99eb,	// (0x000173c4) call_type_pane_cp034

0x9a27,	// (0x00017400) popup_call_audio_second_window_g1_ParamLimits

0x9a27,	// (0x00017400) popup_call_audio_second_window_g1

0x9a63,	// (0x0001743c) popup_call_audio_second_window_g2_ParamLimits

0x9a63,	// (0x0001743c) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0001caf9) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0001caf9) popup_call_audio_second_window_g

0x9a9f,	// (0x00017478) popup_call_audio_second_window_t1_ParamLimits

0x9a9f,	// (0x00017478) popup_call_audio_second_window_t1

0x9b20,	// (0x000174f9) popup_call_audio_second_window_t2_ParamLimits

0x9b20,	// (0x000174f9) popup_call_audio_second_window_t2

0x9b56,	// (0x0001752f) popup_call_audio_second_window_t3_ParamLimits

0x9b56,	// (0x0001752f) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0001cafe) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0001cafe) popup_call_audio_second_window_t

0x994f,	// (0x00017328) bg_popup_call_pane_cp04

0x9b8c,	// (0x00017565) list_conf_pane

0x9b94,	// (0x0001756d) popup_call_audio_conf_window_t1

0x9ba2,	// (0x0001757b) call_thumbnail_pane_g1

0x9baa,	// (0x00017583) bg_pinb_pane_ParamLimits

0x9baa,	// (0x00017583) bg_pinb_pane

0x9bb8,	// (0x00017591) find_pinb_pane

0x9bc1,	// (0x0001759a) listscroll_pinb_pane_ParamLimits

0x9bc1,	// (0x0001759a) listscroll_pinb_pane

0x9bd0,	// (0x000175a9) pinb_bg_pane_g1

0x107b,	// (0x0000ea54) pinb_bg_pane_g2

0x1087,	// (0x0000ea60) pinb_bg_pane_g3

0x1093,	// (0x0000ea6c) pinb_bg_pane_g4

0x109f,	// (0x0000ea78) pinb_bg_pane_g5

0x10ab,	// (0x0000ea84) pinb_bg_pane_g6

0x10b6,	// (0x0000ea8f) pinb_bg_pane_g7

0x10c1,	// (0x0000ea9a) pinb_bg_pane_g8

0x10cc,	// (0x0000eaa5) pinb_bg_pane_g9

0x10d6,	// (0x0000eaaf) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0001cb05) pinb_bg_pane_g

0x10eb,	// (0x0000eac4) grid_pinb_pane

0x10f4,	// (0x0000eacd) list_pinb_pane

0x10fd,	// (0x0000ead6) scroll_pane_cp01_ParamLimits

0x10fd,	// (0x0000ead6) scroll_pane_cp01

0x9be2,	// (0x000175bb) find_pinb_pane_g1_ParamLimits

0x9be2,	// (0x000175bb) find_pinb_pane_g1

0x9bfa,	// (0x000175d3) find_pinb_pane_t1

0x9c0c,	// (0x000175e5) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0001cb1f) find_pinb_pane_t

0x9c21,	// (0x000175fa) input_focus_pane_cp01_ParamLimits

0x9c21,	// (0x000175fa) input_focus_pane_cp01

0x110f,	// (0x0000eae8) cell_pinb_pane_ParamLimits

0x110f,	// (0x0000eae8) cell_pinb_pane

0x1141,	// (0x0000eb1a) cell_pinb_pane_g1_ParamLimits

0x1141,	// (0x0000eb1a) cell_pinb_pane_g1

0x1151,	// (0x0000eb2a) cell_pinb_pane_g2_ParamLimits

0x1151,	// (0x0000eb2a) cell_pinb_pane_g2

0x9c2d,	// (0x00017606) cell_pinb_pane_g3_ParamLimits

0x9c2d,	// (0x00017606) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0001cb24) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0001cb24) cell_pinb_pane_g

0x994f,	// (0x00017328) grid_highlight_pane_cp01

0x115d,	// (0x0000eb36) list_pinb_item_pane_ParamLimits

0x115d,	// (0x0000eb36) list_pinb_item_pane

0x994f,	// (0x00017328) list_highlight_pane_cp02

0x9c39,	// (0x00017612) list_pinb_item_pane_g1_ParamLimits

0x9c39,	// (0x00017612) list_pinb_item_pane_g1

0x9c46,	// (0x0001761f) list_pinb_item_pane_g2_ParamLimits

0x9c46,	// (0x0001761f) list_pinb_item_pane_g2

0x1171,	// (0x0000eb4a) list_pinb_item_pane_g3_ParamLimits

0x1171,	// (0x0000eb4a) list_pinb_item_pane_g3

0x9c52,	// (0x0001762b) list_pinb_item_pane_g4_ParamLimits

0x9c52,	// (0x0001762b) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0001cb2b) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0001cb2b) list_pinb_item_pane_g

0x9c5e,	// (0x00017637) list_pinb_item_pane_t1_ParamLimits

0x9c5e,	// (0x00017637) list_pinb_item_pane_t1

0x11a0,	// (0x0000eb79) calc_display_pane

0x11c8,	// (0x0000eba1) calc_paper_pane

0x11eb,	// (0x0000ebc4) grid_calc_pane

0x994f,	// (0x00017328) bg_list_pane_cp01

0x1219,	// (0x0000ebf2) clock_g1

0x1221,	// (0x0000ebfa) clock_g2

0x0001,

0xf15b,	// (0x0001cb34) clock_g

0x1229,	// (0x0000ec02) clock_t1_ParamLimits

0x1229,	// (0x0000ec02) clock_t1

0x123e,	// (0x0000ec17) clock_t2_ParamLimits

0x123e,	// (0x0000ec17) clock_t2

0x1250,	// (0x0000ec29) clock_t3_ParamLimits

0x1250,	// (0x0000ec29) clock_t3

0x1262,	// (0x0000ec3b) clock_t4_ParamLimits

0x1262,	// (0x0000ec3b) clock_t4

0x1274,	// (0x0000ec4d) clock_t5_ParamLimits

0x1274,	// (0x0000ec4d) clock_t5

0x1289,	// (0x0000ec62) clock_t6_ParamLimits

0x1289,	// (0x0000ec62) clock_t6

0x129b,	// (0x0000ec74) clock_t7_ParamLimits

0x129b,	// (0x0000ec74) clock_t7

0x12ad,	// (0x0000ec86) clock_t8_ParamLimits

0x12ad,	// (0x0000ec86) clock_t8

0x12c1,	// (0x0000ec9a) clock_t9_ParamLimits

0x12c1,	// (0x0000ec9a) clock_t9

0x0008,

0xf160,	// (0x0001cb39) clock_t_ParamLimits

0xf160,	// (0x0001cb39) clock_t

0x9c7d,	// (0x00017656) popup_clock_analogue_window_cp02

0x9c7d,	// (0x00017656) popup_clock_digital_window_cp01

0x9c85,	// (0x0001765e) listscroll_help_pane

0x994f,	// (0x00017328) phob_pre_status_pane

0x9c8f,	// (0x00017668) grid_qdial_pane

0x994f,	// (0x00017328) listscroll_mce_pane

0x9c99,	// (0x00017672) bg_notes_pane

0x9ca3,	// (0x0001767c) list_notes_pane

0x12d5,	// (0x0000ecae) scroll_pane_cp06

0x9cad,	// (0x00017686) bg_calc_paper_pane

0x9cc1,	// (0x0001769a) list_calc_pane

0x9cdb,	// (0x000176b4) bg_calc_display_pane

0x12e0,	// (0x0000ecb9) calc_display_pane_t1

0x12f2,	// (0x0000eccb) calc_display_pane_t2

0x9ce7,	// (0x000176c0) calc_display_pane_t3

0x0002,

0xf173,	// (0x0001cb4c) calc_display_pane_t

0x1304,	// (0x0000ecdd) cell_calc_pane_ParamLimits

0x1304,	// (0x0000ecdd) cell_calc_pane

0x9cf9,	// (0x000176d2) bg_calc_paper_pane_g1

0x9d05,	// (0x000176de) bg_calc_paper_pane_g2

0x9d11,	// (0x000176ea) bg_calc_paper_pane_g3

0x9d1d,	// (0x000176f6) bg_calc_paper_pane_g4

0x9d29,	// (0x00017702) bg_calc_paper_pane_g5

0x1339,	// (0x0000ed12) bg_calc_paper_pane_g6

0x1348,	// (0x0000ed21) bg_calc_paper_pane_g7

0x1357,	// (0x0000ed30) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0001cb53) bg_calc_paper_pane_g

0x136a,	// (0x0000ed43) calc_bg_paper_pane_g9

0x137d,	// (0x0000ed56) list_calc_item_pane_ParamLimits

0x137d,	// (0x0000ed56) list_calc_item_pane

0x9d35,	// (0x0001770e) list_calc_item_pane_g1

0x9d42,	// (0x0001771b) list_calc_item_pane_t1_ParamLimits

0x9d42,	// (0x0001771b) list_calc_item_pane_t1

0x1393,	// (0x0000ed6c) list_calc_item_pane_t2_ParamLimits

0x1393,	// (0x0000ed6c) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0001cb64) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0001cb64) list_calc_item_pane_t

0x9d54,	// (0x0001772d) cell_calc_pane_g1

0x9d5e,	// (0x00017737) grid_highlight_pane_cp02

0x9d80,	// (0x00017759) bg_calc_display_pane_g1

0x9d89,	// (0x00017762) bg_calc_display_pane_g2

0x9d93,	// (0x0001776c) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0001cb6e) bg_calc_display_pane_g

0x13c5,	// (0x0000ed9e) cell_qdial_pane_ParamLimits

0x13c5,	// (0x0000ed9e) cell_qdial_pane

0x13d9,	// (0x0000edb2) cell_qdial_pane_g1_ParamLimits

0x13d9,	// (0x0000edb2) cell_qdial_pane_g1

0x13ef,	// (0x0000edc8) cell_qdial_pane_g2_ParamLimits

0x13ef,	// (0x0000edc8) cell_qdial_pane_g2

0x9d9c,	// (0x00017775) cell_qdial_pane_g3_ParamLimits

0x9d9c,	// (0x00017775) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0001cb75) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0001cb75) cell_qdial_pane_g

0x1416,	// (0x0000edef) cell_qdial_pane_t1_ParamLimits

0x1416,	// (0x0000edef) cell_qdial_pane_t1

0x142e,	// (0x0000ee07) cell_qdial_pane_t2_ParamLimits

0x142e,	// (0x0000ee07) cell_qdial_pane_t2

0x1441,	// (0x0000ee1a) cell_qdial_pane_t3_ParamLimits

0x1441,	// (0x0000ee1a) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0001cb7e) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0001cb7e) cell_qdial_pane_t

0x994f,	// (0x00017328) grid_highlight_pane_cp04

0x9da8,	// (0x00017781) thumbnail_qdial_pane_ParamLimits

0x9da8,	// (0x00017781) thumbnail_qdial_pane

0x9e04,	// (0x000177dd) list_help_pane

0x9e0d,	// (0x000177e6) scroll_pane_cp02

0x1454,	// (0x0000ee2d) help_list_pane_t1_ParamLimits

0x1454,	// (0x0000ee2d) help_list_pane_t1

0x9e16,	// (0x000177ef) bg_notes_pane_g2

0x9e1e,	// (0x000177f7) bg_notes_pane_g3

0x9e26,	// (0x000177ff) notes_bg_pane_g1

0x9e2e,	// (0x00017807) notes_bg_pane_g4

0x9e36,	// (0x0001780f) notes_bg_pane_g5

0x9e3e,	// (0x00017817) notes_bg_pane_g6

0x9e46,	// (0x0001781f) notes_bg_pane_g7

0x9e4e,	// (0x00017827) notes_bg_pane_g8

0x9e56,	// (0x0001782f) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0001cb9c) notes_bg_pane_g

0x9e5e,	// (0x00017837) list_notes_text_pane_ParamLimits

0x9e5e,	// (0x00017837) list_notes_text_pane

0x9e75,	// (0x0001784e) list_notes_text_pane_g1

0x9e7e,	// (0x00017857) list_notes_text_pane_t1

0x9cdb,	// (0x000176b4) listscroll_cale_week_pane

0x1491,	// (0x0000ee6a) bg_cale_heading_pane

0x9e9d,	// (0x00017876) bg_cale_pane_cp01

0x14a9,	// (0x0000ee82) cale_week_corner_pane

0x14ba,	// (0x0000ee93) cale_week_day_heading_pane

0x14d2,	// (0x0000eeab) cale_week_scroll_pane_g1

0x14e7,	// (0x0000eec0) cale_week_scroll_pane_g2

0x14f8,	// (0x0000eed1) cale_week_scroll_pane_g3

0x1509,	// (0x0000eee2) cale_week_scroll_pane_g4

0x151a,	// (0x0000eef3) cale_week_scroll_pane_g5

0x152d,	// (0x0000ef06) cale_week_scroll_pane_g6

0x1540,	// (0x0000ef19) cale_week_scroll_pane_g7

0x1553,	// (0x0000ef2c) cale_week_scroll_pane_g8

0x1566,	// (0x0000ef3f) cale_week_scroll_pane_g9

0x1577,	// (0x0000ef50) cale_week_scroll_pane_g10

0x1588,	// (0x0000ef61) cale_week_scroll_pane_g11

0x1599,	// (0x0000ef72) cale_week_scroll_pane_g12

0x15aa,	// (0x0000ef83) cale_week_scroll_pane_g13

0x15bb,	// (0x0000ef94) cale_week_scroll_pane_g14

0x15cc,	// (0x0000efa5) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0001cbab) cale_week_scroll_pane_g

0x15dd,	// (0x0000efb6) cale_week_time_pane

0x15f0,	// (0x0000efc9) grid_cale_week_pane

0x1605,	// (0x0000efde) scroll_pane_cp08

0x161f,	// (0x0000eff8) cell_cale_week_pane_ParamLimits

0x161f,	// (0x0000eff8) cell_cale_week_pane

0x165f,	// (0x0000f038) cale_week_day_heading_pane_t1

0x1673,	// (0x0000f04c) cale_week_day_heading_pane_t2

0x1687,	// (0x0000f060) cale_week_day_heading_pane_t3

0x169b,	// (0x0000f074) cale_week_day_heading_pane_t4

0x16af,	// (0x0000f088) cale_week_day_heading_pane_t5

0x16c3,	// (0x0000f09c) cale_week_day_heading_pane_t6

0x16d9,	// (0x0000f0b2) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0001cbca) cale_week_day_heading_pane_t

0x9ec8,	// (0x000178a1) bg_cale_side_pane

0x16ed,	// (0x0000f0c6) cale_week_time_pane_t1

0x1705,	// (0x0000f0de) cale_week_time_pane_t2

0x171d,	// (0x0000f0f6) cale_week_time_pane_t3

0x1735,	// (0x0000f10e) cale_week_time_pane_t4

0x174d,	// (0x0000f126) cale_week_time_pane_t5

0x1765,	// (0x0000f13e) cale_week_time_pane_t6

0x177d,	// (0x0000f156) cale_week_time_pane_t7

0x1795,	// (0x0000f16e) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0001cbd9) cale_week_time_pane_t

0x17ad,	// (0x0000f186) cell_cale_week_pane_g2

0x17c6,	// (0x0000f19f) cell_cale_week_pane_g3_ParamLimits

0x17c6,	// (0x0000f19f) cell_cale_week_pane_g3

0x9ed6,	// (0x000178af) grid_highlight_pane_cp07

0x9ede,	// (0x000178b7) listscroll_gms_pane

0x9ee8,	// (0x000178c1) grid_gms_pane

0x9ef1,	// (0x000178ca) listscroll_gms_pane_g1

0x9ef9,	// (0x000178d2) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0001cbea) listscroll_gms_pane_g

0x17de,	// (0x0000f1b7) scroll_pane_cp010

0x17e9,	// (0x0000f1c2) cell_gms_pane_ParamLimits

0x17e9,	// (0x0000f1c2) cell_gms_pane

0x17fc,	// (0x0000f1d5) cell_gms_pane_g1

0x9f01,	// (0x000178da) cell_gms_pane_g2

0x9e75,	// (0x0001784e) cell_gms_pane_g3

0x9f09,	// (0x000178e2) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0001cbef) cell_gms_pane_g

0x9f12,	// (0x000178eb) grid_highlight_pane_cp09

0x39f1,	// (0x000113ca) phob_pre_status_pane_g1

0x39f9,	// (0x000113d2) phob_pre_status_pane_g2

0x3a01,	// (0x000113da) phob_pre_status_pane_g3

0x3a09,	// (0x000113e2) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0001cfde) phob_pre_status_pane_g

0x3a1b,	// (0x000113f4) phob_pre_status_pane_t1

0x3a29,	// (0x00011402) phob_pre_status_pane_t2

0x3a39,	// (0x00011412) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0001cfe9) phob_pre_status_pane_t

0x994f,	// (0x00017328) bg_list_pane_cp05

0x9f22,	// (0x000178fb) grid_vorec_pane

0x9f2a,	// (0x00017903) vorec_t1

0x9f38,	// (0x00017911) vorec_t2

0x9f46,	// (0x0001791f) vorec_t3

0x9f54,	// (0x0001792d) vorec_t4

0x9f62,	// (0x0001793b) vorec_t5

0x9f70,	// (0x00017949) vorec_t6

0x0006,

0xf21f,	// (0x0001cbf8) vorec_t

0x9f8c,	// (0x00017965) wait_bar_pane_cp01

0x9f94,	// (0x0001796d) cell_vorec_pane_ParamLimits

0x9f94,	// (0x0001796d) cell_vorec_pane

0x9fa7,	// (0x00017980) cell_vorec_pane_g1

0x994f,	// (0x00017328) grid_highlight_pane_cp05

0x181c,	// (0x0000f1f5) cams_zoom_pane

0x182b,	// (0x0000f204) image_vga_pane

0x1845,	// (0x0000f21e) main_camera_pane_g1

0x1857,	// (0x0000f230) main_camera_pane_g2

0x1869,	// (0x0000f242) main_camera_pane_g3

0x187b,	// (0x0000f254) main_camera_pane_g4

0x188d,	// (0x0000f266) main_camera_pane_g5

0x189f,	// (0x0000f278) main_camera_pane_g6

0x18b1,	// (0x0000f28a) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0001cc07) main_camera_pane_g

0x18c3,	// (0x0000f29c) main_camera_pane_t1

0x18d9,	// (0x0000f2b2) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0001cc18) main_camera_pane_t

0x1915,	// (0x0000f2ee) cams_zoom_pane_cp_ParamLimits

0x1915,	// (0x0000f2ee) cams_zoom_pane_cp

0x193d,	// (0x0000f316) image_cif_pane_ParamLimits

0x193d,	// (0x0000f316) image_cif_pane

0x1978,	// (0x0000f351) image_subqcif_pane

0x1980,	// (0x0000f359) main_video_pane_g1_ParamLimits

0x1980,	// (0x0000f359) main_video_pane_g1

0x19a4,	// (0x0000f37d) main_video_pane_g2_ParamLimits

0x19a4,	// (0x0000f37d) main_video_pane_g2

0x19da,	// (0x0000f3b3) main_video_pane_g3_ParamLimits

0x19da,	// (0x0000f3b3) main_video_pane_g3

0x1a0a,	// (0x0000f3e3) main_video_pane_g4_ParamLimits

0x1a0a,	// (0x0000f3e3) main_video_pane_g4

0x1a3a,	// (0x0000f413) main_video_pane_g5_ParamLimits

0x1a3a,	// (0x0000f413) main_video_pane_g5

0x9fbd,	// (0x00017996) main_video_pane_g6_ParamLimits

0x9fbd,	// (0x00017996) main_video_pane_g6

0x0006,

0xf244,	// (0x0001cc1d) main_video_pane_g_ParamLimits

0xf244,	// (0x0001cc1d) main_video_pane_g

0x1a65,	// (0x0000f43e) main_video_pane_t1_ParamLimits

0x1a65,	// (0x0000f43e) main_video_pane_t1

0x9fd7,	// (0x000179b0) cams_zoom_pane_g1

0x9fe0,	// (0x000179b9) cams_zoom_pane_g2

0x9fe9,	// (0x000179c2) cams_zoom_pane_g3

0x9ff2,	// (0x000179cb) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0001cc2c) cams_zoom_pane_g

0x1ac2,	// (0x0000f49b) grid_cams_pane

0x1adc,	// (0x0000f4b5) linegrid_cams_pane

0x1aef,	// (0x0000f4c8) cell_cams_pane_ParamLimits

0x1aef,	// (0x0000f4c8) cell_cams_pane

0x9ffb,	// (0x000179d4) cams_burst_image_pane

0xa003,	// (0x000179dc) cell_cams_pane_g1

0x994f,	// (0x00017328) grid_highlight_pane_cp03

0x9d54,	// (0x0001772d) mp_bg_pane_g1

0x994f,	// (0x00017328) bg_list_pane_cp03

0xbe33,	// (0x0001980c) bg_mp_pane

0xbe3b,	// (0x00019814) grid_mp_pane

0xbe43,	// (0x0001981c) media_player_g1

0xbe4b,	// (0x00019824) media_player_t1

0xbe59,	// (0x00019832) media_player_t2

0xbe67,	// (0x00019840) media_player_t3

0xbe75,	// (0x0001984e) media_player_t4

0xbe83,	// (0x0001985c) media_player_t5

0xbe91,	// (0x0001986a) media_player_t6

0xbe9f,	// (0x00019878) media_player_t7

0x0006,

0xf5ef,	// (0x0001cfc8) media_player_t

0xbead,	// (0x00019886) wait_bar_pane_cp02

0xf5d4,	// (0x0001cfad) main_usb_pane_t

0x39e8,	// (0x000113c1) cell_mp_pane

0x9d54,	// (0x0001772d) cell_mp_pane_g1

0x994f,	// (0x00017328) grid_highlight_pane_cp06

0xa0c8,	// (0x00017aa1) grid_skin_colour_pane

0xa0d0,	// (0x00017aa9) list_highlight_pane_cp03

0x1b61,	// (0x0000f53a) skin_g1

0xa0d8,	// (0x00017ab1) skin_t1

0xa0e7,	// (0x00017ac0) skin_t2

0x0001,

0xf288,	// (0x0001cc61) skin_t

0x1b69,	// (0x0000f542) cell_skin_colour_pane_ParamLimits

0x1b69,	// (0x0000f542) cell_skin_colour_pane

0xa0f5,	// (0x00017ace) cell_skin_colour_pane_g1

0x1be2,	// (0x0000f5bb) call_video_g1_ParamLimits

0x1be2,	// (0x0000f5bb) call_video_g1

0x1bfe,	// (0x0000f5d7) call_video_g2_ParamLimits

0x1bfe,	// (0x0000f5d7) call_video_g2

0x0001,

0xf28d,	// (0x0001cc66) call_video_g_ParamLimits

0xf28d,	// (0x0001cc66) call_video_g

0x1c50,	// (0x0000f629) call_video_uplink_pane_cp1_ParamLimits

0x1c50,	// (0x0000f629) call_video_uplink_pane_cp1

0xa107,	// (0x00017ae0) call_video_uplink_pane_cp2

0x1cef,	// (0x0000f6c8) video_down_crop_pane_ParamLimits

0x1cef,	// (0x0000f6c8) video_down_crop_pane

0x1dd8,	// (0x0000f7b1) video_down_pane_ParamLimits

0x1dd8,	// (0x0000f7b1) video_down_pane

0xa10f,	// (0x00017ae8) video_down_subqcif_pane_ParamLimits

0xa10f,	// (0x00017ae8) video_down_subqcif_pane

0xa127,	// (0x00017b00) video_down_subqcif_pane_cp_ParamLimits

0xa127,	// (0x00017b00) video_down_subqcif_pane_cp

0xa14b,	// (0x00017b24) im_reading_pane_ParamLimits

0xa14b,	// (0x00017b24) im_reading_pane

0x1ee6,	// (0x0000f8bf) im_writing_pane_ParamLimits

0x1ee6,	// (0x0000f8bf) im_writing_pane

0x1efc,	// (0x0000f8d5) im_reading_pane_t1

0xa165,	// (0x00017b3e) list_im_pane

0xa176,	// (0x00017b4f) scroll_pane_cp07

0x1f38,	// (0x0000f911) im_writing_pane_t1_ParamLimits

0x1f38,	// (0x0000f911) im_writing_pane_t1

0xa18f,	// (0x00017b68) im_writing_pane_t2_ParamLimits

0xa18f,	// (0x00017b68) im_writing_pane_t2

0x0001,

0xf297,	// (0x0001cc70) im_writing_pane_t_ParamLimits

0xf297,	// (0x0001cc70) im_writing_pane_t

0x994f,	// (0x00017328) input_focus_pane_cp04

0x994f,	// (0x00017328) input_focus_pane_cp05

0x1f4d,	// (0x0000f926) list_im_single_pane_ParamLimits

0x1f4d,	// (0x0000f926) list_im_single_pane

0x1f63,	// (0x0000f93c) list_single_im_pane_t1

0x39a8,	// (0x00011381) blid_accuracy_pane

0x39b0,	// (0x00011389) blid_compass_pane

0x39ba,	// (0x00011393) main_location_t1

0x39ca,	// (0x000113a3) main_location_t2

0x39da,	// (0x000113b3) main_location_t3

0x0002,

0xf5fe,	// (0x0001cfd7) main_location_t

0x994f,	// (0x00017328) aid_levels_location

0x9d54,	// (0x0001772d) blid_accuracy_pane_g1

0x9d54,	// (0x0001772d) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0001ccd2) blid_accuracy_pane_g

0xa1d7,	// (0x00017bb0) wml_content_pane

0xa215,	// (0x00017bee) wml_button_pane_ParamLimits

0xa215,	// (0x00017bee) wml_button_pane

0x1f72,	// (0x0000f94b) wml_list_single_large_pane_ParamLimits

0x1f72,	// (0x0000f94b) wml_list_single_large_pane

0x1f89,	// (0x0000f962) wml_list_single_medium_pane_ParamLimits

0x1f89,	// (0x0000f962) wml_list_single_medium_pane

0x1fa1,	// (0x0000f97a) wml_list_single_small_pane_ParamLimits

0x1fa1,	// (0x0000f97a) wml_list_single_small_pane

0xa229,	// (0x00017c02) wml_selection_box_pane_ParamLimits

0xa229,	// (0x00017c02) wml_selection_box_pane

0xa23c,	// (0x00017c15) wml_list_single_pane_t1

0xa24b,	// (0x00017c24) wml_list_single_medium_pane_t1

0xa25a,	// (0x00017c33) wml_list_single_large_pane_t1

0xa269,	// (0x00017c42) input_focus_pane_cp02_ParamLimits

0xa269,	// (0x00017c42) input_focus_pane_cp02

0xa27c,	// (0x00017c55) wml_selection_box_pane_g1

0xa285,	// (0x00017c5e) wml_selection_box_pane_t1_ParamLimits

0xa285,	// (0x00017c5e) wml_selection_box_pane_t1

0x9baa,	// (0x00017583) bg_wml_button_pane_ParamLimits

0x9baa,	// (0x00017583) bg_wml_button_pane

0xa29d,	// (0x00017c76) wml_button_pane_g1

0xa2a5,	// (0x00017c7e) wml_button_pane_t1

0xa29d,	// (0x00017c76) wml_button_bg_pane_g1

0xa2b5,	// (0x00017c8e) wml_button_bg_pane_g2

0xa2bd,	// (0x00017c96) wml_button_bg_pane_g3

0xa2c5,	// (0x00017c9e) wml_button_bg_pane_g4

0xa2cd,	// (0x00017ca6) wml_button_bg_pane_g5

0xa2d5,	// (0x00017cae) wml_button_bg_pane_g6

0xa2dd,	// (0x00017cb6) wml_button_bg_pane_g7

0xa2e5,	// (0x00017cbe) wml_button_bg_pane_g8

0xa2ed,	// (0x00017cc6) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0001cc75) wml_button_bg_pane_g

0x1fbf,	// (0x0000f998) bg_list_pane_cp02

0xa2f5,	// (0x00017cce) mce_header_pane_ParamLimits

0xa2f5,	// (0x00017cce) mce_header_pane

0xa30b,	// (0x00017ce4) mce_icon_pane

0xa30b,	// (0x00017ce4) mce_image_pane

0xa314,	// (0x00017ced) mce_text_pane_ParamLimits

0xa314,	// (0x00017ced) mce_text_pane

0x1fc7,	// (0x0000f9a0) scroll_pane_cp03

0xa20d,	// (0x00017be6) scroll_pane_cp04

0xa327,	// (0x00017d00) scroll_pane_cp05_ParamLimits

0xa327,	// (0x00017d00) scroll_pane_cp05

0x1fd1,	// (0x0000f9aa) mce_header_field_pane_ParamLimits

0x1fd1,	// (0x0000f9aa) mce_header_field_pane

0x1fe8,	// (0x0000f9c1) mce_header_field_pane_2_ParamLimits

0x1fe8,	// (0x0000f9c1) mce_header_field_pane_2

0x1ffe,	// (0x0000f9d7) mce_header_field_pane_3

0x2006,	// (0x0000f9df) list_single_mce_message_pane_ParamLimits

0x2006,	// (0x0000f9df) list_single_mce_message_pane

0x201e,	// (0x0000f9f7) list_single_mce_smart_pane_ParamLimits

0x201e,	// (0x0000f9f7) list_single_mce_smart_pane

0xa333,	// (0x00017d0c) input_focus_pane_cp03

0xa33c,	// (0x00017d15) list_header_data_pane

0x2041,	// (0x0000fa1a) mce_header_field_pane_t1

0x2051,	// (0x0000fa2a) list_single_mce_header_pane_ParamLimits

0x2051,	// (0x0000fa2a) list_single_mce_header_pane

0xa344,	// (0x00017d1d) list_single_mce_header_pane_t1

0xa353,	// (0x00017d2c) list_single_mce_message_pane_g1

0xa35b,	// (0x00017d34) list_single_mce_message_pane_t1

0x2083,	// (0x0000fa5c) bg_cale_heading_pane_cp01_ParamLimits

0x2083,	// (0x0000fa5c) bg_cale_heading_pane_cp01

0xa369,	// (0x00017d42) bg_cale_pane_cp02_ParamLimits

0xa369,	// (0x00017d42) bg_cale_pane_cp02

0x20a6,	// (0x0000fa7f) cale_month_corner_pane

0x20bc,	// (0x0000fa95) cale_month_day_heading_pane_ParamLimits

0x20bc,	// (0x0000fa95) cale_month_day_heading_pane

0x20ef,	// (0x0000fac8) cale_month_pane_g1_ParamLimits

0x20ef,	// (0x0000fac8) cale_month_pane_g1

0x210b,	// (0x0000fae4) cale_month_pane_g2_ParamLimits

0x210b,	// (0x0000fae4) cale_month_pane_g2

0x2126,	// (0x0000faff) cale_month_pane_g3_ParamLimits

0x2126,	// (0x0000faff) cale_month_pane_g3

0x2152,	// (0x0000fb2b) cale_month_pane_g4_ParamLimits

0x2152,	// (0x0000fb2b) cale_month_pane_g4

0x217e,	// (0x0000fb57) cale_month_pane_g5_ParamLimits

0x217e,	// (0x0000fb57) cale_month_pane_g5

0x21b2,	// (0x0000fb8b) cale_month_pane_g6_ParamLimits

0x21b2,	// (0x0000fb8b) cale_month_pane_g6

0x21ee,	// (0x0000fbc7) cale_month_pane_g7_ParamLimits

0x21ee,	// (0x0000fbc7) cale_month_pane_g7

0x222a,	// (0x0000fc03) cale_month_pane_g8_ParamLimits

0x222a,	// (0x0000fc03) cale_month_pane_g8

0x2266,	// (0x0000fc3f) cale_month_pane_g9_ParamLimits

0x2266,	// (0x0000fc3f) cale_month_pane_g9

0x22a0,	// (0x0000fc79) cale_month_pane_g10_ParamLimits

0x22a0,	// (0x0000fc79) cale_month_pane_g10

0x22da,	// (0x0000fcb3) cale_month_pane_g11_ParamLimits

0x22da,	// (0x0000fcb3) cale_month_pane_g11

0x2314,	// (0x0000fced) cale_month_pane_g12_ParamLimits

0x2314,	// (0x0000fced) cale_month_pane_g12

0x234e,	// (0x0000fd27) cale_month_pane_g13_ParamLimits

0x234e,	// (0x0000fd27) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0001cc88) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0001cc88) cale_month_pane_g

0x2388,	// (0x0000fd61) cale_month_week_pane

0x239b,	// (0x0000fd74) grid_cale_month_pane_ParamLimits

0x239b,	// (0x0000fd74) grid_cale_month_pane

0x23c9,	// (0x0000fda2) cale_month_day_heading_pane_t1

0x2427,	// (0x0000fe00) cale_month_day_heading_pane_t2

0x248c,	// (0x0000fe65) cale_month_day_heading_pane_t3

0x24f1,	// (0x0000feca) cale_month_day_heading_pane_t4

0x2556,	// (0x0000ff2f) cale_month_day_heading_pane_t5

0x25cb,	// (0x0000ffa4) cale_month_day_heading_pane_t6

0x2640,	// (0x00010019) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0001cca3) cale_month_day_heading_pane_t

0x9ec8,	// (0x000178a1) bg_cale_side_pane_cp01

0x26b5,	// (0x0001008e) cale_month_week_pane_t1

0x26cc,	// (0x000100a5) cale_month_week_pane_t2

0x26e3,	// (0x000100bc) cale_month_week_pane_t3

0x26fa,	// (0x000100d3) cale_month_week_pane_t4

0x2711,	// (0x000100ea) cale_month_week_pane_t5

0x2728,	// (0x00010101) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0001ccb2) cale_month_week_pane_t

0x273f,	// (0x00010118) cell_cale_month_pane_ParamLimits

0x273f,	// (0x00010118) cell_cale_month_pane

0xa3c8,	// (0x00017da1) cell_cale_month_pane_g1

0x2815,	// (0x000101ee) cell_cale_month_pane_t1_ParamLimits

0x2815,	// (0x000101ee) cell_cale_month_pane_t1

0x9ed6,	// (0x000178af) grid_highlight_pane_cp08

0x9d54,	// (0x0001772d) main_smil_g1

0x2831,	// (0x0001020a) smil_status_pane

0xa3d4,	// (0x00017dad) smil_text_pane

0xbd4b,	// (0x00019724) bg_popup_call3_rect_pane_g8

0xbd53,	// (0x0001972c) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0001cf6b) bg_popup_call3_rect_pane_g

0xbfd5,	// (0x000199ae) smil_status_volume_pane_g1

0xa3de,	// (0x00017db7) smil_status_pane_t1

0xc008,	// (0x000199e1) volume_smil_pane

0xa3f5,	// (0x00017dce) list_smil_text_pane

0x2846,	// (0x0001021f) scroll_pane_cp011

0x2851,	// (0x0001022a) smil_text_list_pane_t1_ParamLimits

0x2851,	// (0x0001022a) smil_text_list_pane_t1

0xa3ff,	// (0x00017dd8) aid_volume_smil_ParamLimits

0xa3ff,	// (0x00017dd8) aid_volume_smil

0x9d54,	// (0x0001772d) smil_volume_pane_g1

0x9d54,	// (0x0001772d) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0001ccd2) smil_volume_pane_g

0x9cdb,	// (0x000176b4) listscroll_cale_day_pane

0xa421,	// (0x00017dfa) bg_cale_pane

0xa439,	// (0x00017e12) list_cale_pane

0xa44a,	// (0x00017e23) scroll_pane_cp09

0xa45b,	// (0x00017e34) cale_bg_pane_g1

0xa463,	// (0x00017e3c) cale_bg_pane_g2

0xa46b,	// (0x00017e44) cale_bg_pane_g3

0xa473,	// (0x00017e4c) cale_bg_pane_g4

0xa47b,	// (0x00017e54) cale_bg_pane_g5

0xa483,	// (0x00017e5c) cale_bg_pane_g6

0xa48b,	// (0x00017e64) cale_bg_pane_g7

0xa493,	// (0x00017e6c) cale_bg_pane_g8

0xa49b,	// (0x00017e74) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0001ccd7) cale_bg_pane_g

0x28a5,	// (0x0001027e) list_cale_time_pane_ParamLimits

0x28a5,	// (0x0001027e) list_cale_time_pane

0x28ba,	// (0x00010293) list_cale_time_pane_g1_ParamLimits

0x28ba,	// (0x00010293) list_cale_time_pane_g1

0xa4a3,	// (0x00017e7c) list_cale_time_pane_g2_ParamLimits

0xa4a3,	// (0x00017e7c) list_cale_time_pane_g2

0x28c6,	// (0x0001029f) list_cale_time_pane_g3_ParamLimits

0x28c6,	// (0x0001029f) list_cale_time_pane_g3

0x28e2,	// (0x000102bb) list_cale_time_pane_g4_ParamLimits

0x28e2,	// (0x000102bb) list_cale_time_pane_g4

0x28f0,	// (0x000102c9) list_cale_time_pane_g5_ParamLimits

0x28f0,	// (0x000102c9) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0001ccea) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0001ccea) list_cale_time_pane_g

0x28fe,	// (0x000102d7) list_cale_time_pane_t1_ParamLimits

0x28fe,	// (0x000102d7) list_cale_time_pane_t1

0x2926,	// (0x000102ff) list_cale_time_pane_t2_ParamLimits

0x2926,	// (0x000102ff) list_cale_time_pane_t2

0x2c53,	// (0x0001062c) aid_blid_cardinal_pane

0x2c91,	// (0x0001066a) compass_pane_t4

0x294e,	// (0x00010327) list_cale_time_pane_t4_ParamLimits

0x294e,	// (0x00010327) list_cale_time_pane_t4

0x2c9f,	// (0x00010678) compass_pane_t5

0x2cad,	// (0x00010686) compass_pane_t6

0x2cbb,	// (0x00010694) compass_pane_t7

0xa9c1,	// (0x0001839a) navi_pane_cc_t1

0xab28,	// (0x00018501) aid_phob_thumbnail_center_pane

0x33bc,	// (0x00010d95) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0001ccf7) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0001ccf7) list_cale_time_pane_t

0x95a8,	// (0x00016f81) bg_popup_window_pane_cp02_ParamLimits

0x95a8,	// (0x00016f81) bg_popup_window_pane_cp02

0xa4bd,	// (0x00017e96) heading_pane_cp01_ParamLimits

0xa4bd,	// (0x00017e96) heading_pane_cp01

0xa4c9,	// (0x00017ea2) loc_req_pane_ParamLimits

0xa4c9,	// (0x00017ea2) loc_req_pane

0xa4d9,	// (0x00017eb2) loc_type_pane_ParamLimits

0xa4d9,	// (0x00017eb2) loc_type_pane

0xa4eb,	// (0x00017ec4) loc_type_pane_t1_ParamLimits

0xa4eb,	// (0x00017ec4) loc_type_pane_t1

0xa4fd,	// (0x00017ed6) loc_type_pane_t2_ParamLimits

0xa4fd,	// (0x00017ed6) loc_type_pane_t2

0xa50f,	// (0x00017ee8) loc_type_pane_t3_ParamLimits

0xa50f,	// (0x00017ee8) loc_type_pane_t3

0x0002,

0xf325,	// (0x0001ccfe) loc_type_pane_t_ParamLimits

0xf325,	// (0x0001ccfe) loc_type_pane_t

0xa521,	// (0x00017efa) list_loc_req_pane

0xa52b,	// (0x00017f04) scroll_pane_cp012

0x2976,	// (0x0001034f) list_single_loc_request_popup_menu_pane_ParamLimits

0x2976,	// (0x0001034f) list_single_loc_request_popup_menu_pane

0xa536,	// (0x00017f0f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa536,	// (0x00017f0f) list_single_loc_request_popup_menu_pane_g1

0xa542,	// (0x00017f1b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa542,	// (0x00017f1b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0001cd05) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0001cd05) list_single_loc_request_popup_menu_pane_g

0xa54e,	// (0x00017f27) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa54e,	// (0x00017f27) list_single_loc_request_popup_menu_pane_t1

0x9baa,	// (0x00017583) bg_popup_window_pane_cp03_ParamLimits

0x9baa,	// (0x00017583) bg_popup_window_pane_cp03

0xa564,	// (0x00017f3d) heading_loc_req_pane_ParamLimits

0xa564,	// (0x00017f3d) heading_loc_req_pane

0x2983,	// (0x0001035c) popup_dyc_status_message_window_g1_ParamLimits

0x2983,	// (0x0001035c) popup_dyc_status_message_window_g1

0x2997,	// (0x00010370) popup_dyc_status_message_window_t1_ParamLimits

0x2997,	// (0x00010370) popup_dyc_status_message_window_t1

0x29ac,	// (0x00010385) popup_dyc_status_message_window_t2_ParamLimits

0x29ac,	// (0x00010385) popup_dyc_status_message_window_t2

0x29c1,	// (0x0001039a) popup_dyc_status_message_window_t3_ParamLimits

0x29c1,	// (0x0001039a) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0001cd0a) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0001cd0a) popup_dyc_status_message_window_t

0x994f,	// (0x00017328) bg_heading_pane_cp01

0xa570,	// (0x00017f49) heading_loc_req_pane_g1

0xa578,	// (0x00017f51) heading_loc_req_pane_g2

0xa580,	// (0x00017f59) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0001cd11) heading_loc_req_pane_g

0xa588,	// (0x00017f61) heading_loc_req_pane_t1

0xa60c,	// (0x00017fe5) bg_popup_sub_pane_cp01_ParamLimits

0xa60c,	// (0x00017fe5) bg_popup_sub_pane_cp01

0xa61a,	// (0x00017ff3) popup_cale_events_window_g1_ParamLimits

0xa61a,	// (0x00017ff3) popup_cale_events_window_g1

0xa63a,	// (0x00018013) popup_cale_events_window_g2_ParamLimits

0xa63a,	// (0x00018013) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0001cd45) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0001cd45) popup_cale_events_window_g

0xa65a,	// (0x00018033) popup_cale_events_window_t1_ParamLimits

0xa65a,	// (0x00018033) popup_cale_events_window_t1

0xa66c,	// (0x00018045) popup_cale_events_window_t2_ParamLimits

0xa66c,	// (0x00018045) popup_cale_events_window_t2

0xa6aa,	// (0x00018083) popup_cale_events_window_t3_ParamLimits

0xa6aa,	// (0x00018083) popup_cale_events_window_t3

0xa6e4,	// (0x000180bd) popup_cale_events_window_t4_ParamLimits

0xa6e4,	// (0x000180bd) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0001cd4a) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0001cd4a) popup_cale_events_window_t

0x2a4f,	// (0x00010428) call_type_pane

0x2a5f,	// (0x00010438) popup_call_status_window_g1

0x2a73,	// (0x0001044c) popup_call_status_window_g2

0x2a87,	// (0x00010460) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0001cd53) popup_call_status_window_g

0xa71a,	// (0x000180f3) call_type_pane_g1

0xa723,	// (0x000180fc) call_type_pane_g2

0x0001,

0xf381,	// (0x0001cd5a) call_type_pane_g

0x994f,	// (0x00017328) bg_popup_sub_pane_cp02

0xa72c,	// (0x00018105) listscroll_popup_wml_pane

0xa734,	// (0x0001810d) list_wml_pane

0xa73e,	// (0x00018117) scroll_pane_cp013

0xa749,	// (0x00018122) list_single_graphic_popup_wml_pane_ParamLimits

0xa749,	// (0x00018122) list_single_graphic_popup_wml_pane

0x9d54,	// (0x0001772d) list_single_graphic_popup_wml_pane_g1

0xa75d,	// (0x00018136) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0001cd5f) list_single_graphic_popup_wml_pane_g

0xa765,	// (0x0001813e) list_single_graphic_popup_wml_pane_t1

0xa77b,	// (0x00018154) aid_call_pane

0x9ba2,	// (0x0001757b) popup_clock_analogue_window_g1

0x9ba2,	// (0x0001757b) popup_clock_analogue_window_g2

0xa783,	// (0x0001815c) popup_clock_analogue_window_g3

0xa783,	// (0x0001815c) popup_clock_analogue_window_g4

0x9d54,	// (0x0001772d) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0001cd64) popup_clock_analogue_window_g

0xa78b,	// (0x00018164) popup_clock_analogue_window_t1

0xa799,	// (0x00018172) clock_digital_number_pane_ParamLimits

0xa799,	// (0x00018172) clock_digital_number_pane

0xa7a5,	// (0x0001817e) clock_digital_number_pane_cp02_ParamLimits

0xa7a5,	// (0x0001817e) clock_digital_number_pane_cp02

0xa7b1,	// (0x0001818a) clock_digital_number_pane_cp03_ParamLimits

0xa7b1,	// (0x0001818a) clock_digital_number_pane_cp03

0xa7bd,	// (0x00018196) clock_digital_number_pane_cp04_ParamLimits

0xa7bd,	// (0x00018196) clock_digital_number_pane_cp04

0xa7c9,	// (0x000181a2) clock_digital_separator_pane_ParamLimits

0xa7c9,	// (0x000181a2) clock_digital_separator_pane

0xa7d5,	// (0x000181ae) popup_clock_digital_window_t1

0x9d54,	// (0x0001772d) clock_digital_number_pane_g1

0x9d54,	// (0x0001772d) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0001ccd2) clock_digital_number_pane_g

0x9d54,	// (0x0001772d) clock_digital_separator_pane_g1

0x9d54,	// (0x0001772d) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0001ccd2) clock_digital_separator_pane_g

0x994f,	// (0x00017328) bg_popup_window_pane_cp04

0xa7f2,	// (0x000181cb) heading_pane_cp03

0xa7fa,	// (0x000181d3) listscroll_popup_gms_pane

0xa802,	// (0x000181db) grid_large_graphic_popup_pane

0xa80c,	// (0x000181e5) listscroll_popup_gms_pane_g1

0xa814,	// (0x000181ed) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0001cd6f) listscroll_popup_gms_pane_g

0xa20d,	// (0x00017be6) scroll_pane_cp014

0xa81c,	// (0x000181f5) cell_large_graphic_popup_pane_ParamLimits

0xa81c,	// (0x000181f5) cell_large_graphic_popup_pane

0xa834,	// (0x0001820d) cell_large_graphic_popup_pane_g1_ParamLimits

0xa834,	// (0x0001820d) cell_large_graphic_popup_pane_g1

0xa840,	// (0x00018219) cell_large_graphic_popup_pane_g2_ParamLimits

0xa840,	// (0x00018219) cell_large_graphic_popup_pane_g2

0xa84c,	// (0x00018225) cell_large_graphic_popup_pane_g3_ParamLimits

0xa84c,	// (0x00018225) cell_large_graphic_popup_pane_g3

0xa859,	// (0x00018232) cell_large_graphic_popup_pane_g4_ParamLimits

0xa859,	// (0x00018232) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0001cd74) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0001cd74) cell_large_graphic_popup_pane_g

0xa869,	// (0x00018242) grid_highlight_pane_cp010

0x9d54,	// (0x0001772d) bg_popup_call_pane_g1

0xa873,	// (0x0001824c) list_single_graphic_popup_conf_pane_ParamLimits

0xa873,	// (0x0001824c) list_single_graphic_popup_conf_pane

0xa885,	// (0x0001825e) list_highlight_pane_cp01

0xa88e,	// (0x00018267) list_single_graphic_popup_conf_pane_g1

0xa896,	// (0x0001826f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0001cd7d) list_single_graphic_popup_conf_pane_g

0xa89e,	// (0x00018277) list_single_graphic_popup_conf_pane_t1

0xa8ac,	// (0x00018285) linegrid_cams_pane_g1

0x2a97,	// (0x00010470) linegrid_cams_pane_g2

0x9e75,	// (0x0001784e) linegrid_cams_pane_g3

0xa8b5,	// (0x0001828e) linegrid_cams_pane_g4

0x2aa0,	// (0x00010479) linegrid_cams_pane_g5

0x2aa9,	// (0x00010482) linegrid_cams_pane_g6

0x9f09,	// (0x000178e2) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0001cd82) linegrid_cams_pane_g

0xa8be,	// (0x00018297) popup_clock_analogue_window

0xa8be,	// (0x00018297) popup_clock_digital_window

0x994f,	// (0x00017328) popup_phob_thumbnail_window

0x9d54,	// (0x0001772d) call_video_uplink_pane_g1

0xa8c7,	// (0x000182a0) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0001cd91) call_video_uplink_pane_g

0x9ed6,	// (0x000178af) video_uplink_pane

0xa8cf,	// (0x000182a8) mce_image_pane_g1

0x2ab4,	// (0x0001048d) mce_image_pane_g2

0x2abc,	// (0x00010495) mce_image_pane_g3

0x2ac4,	// (0x0001049d) mce_image_pane_g4

0x2acc,	// (0x000104a5) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0001cd96) mce_image_pane_g

0xa8d9,	// (0x000182b2) control_top_pane_stacon_cp01_ParamLimits

0xa8d9,	// (0x000182b2) control_top_pane_stacon_cp01

0xa8ed,	// (0x000182c6) uni_indicator_pane_stacon_cp01_ParamLimits

0xa8ed,	// (0x000182c6) uni_indicator_pane_stacon_cp01

0xa8fe,	// (0x000182d7) bg_popup_sub_pane_cp03

0x2ad4,	// (0x000104ad) chi_dic_find_pane

0x2adc,	// (0x000104b5) listscroll_chi_dic_pane

0x2ae5,	// (0x000104be) main_pane_chidic_g1

0x2af8,	// (0x000104d1) chi_dic_find_pane_t1

0xa908,	// (0x000182e1) find_chidic_pane

0xa911,	// (0x000182ea) chi_dic_list_pane_ParamLimits

0xa911,	// (0x000182ea) chi_dic_list_pane

0xa922,	// (0x000182fb) scroll_pane_cp020

0x2b06,	// (0x000104df) find_chidic_pane_t1

0x994f,	// (0x00017328) input_focus_pane_cp06

0x2b15,	// (0x000104ee) list_chi_dic_pane_ParamLimits

0x2b15,	// (0x000104ee) list_chi_dic_pane

0xa92a,	// (0x00018303) list_chi_dic_pane_t1_ParamLimits

0xa92a,	// (0x00018303) list_chi_dic_pane_t1

0x994f,	// (0x00017328) list_highlight_pane_cp020

0xa93d,	// (0x00018316) bg_cale_heading_pane_g1

0x2b29,	// (0x00010502) bg_cale_heading_pane_g2

0x2b31,	// (0x0001050a) bg_cale_heading_pane_g3

0x2b39,	// (0x00010512) bg_cale_heading_pane_g4

0x2b43,	// (0x0001051c) bg_cale_heading_pane_g5

0x2b4d,	// (0x00010526) bg_cale_heading_pane_g6

0x2b55,	// (0x0001052e) bg_cale_heading_pane_g7

0x2b5d,	// (0x00010536) bg_cale_heading_pane_g8

0x2b67,	// (0x00010540) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0001cda1) bg_cale_heading_pane_g

0xa93d,	// (0x00018316) bg_cale_side_pane_g1

0x2b71,	// (0x0001054a) bg_cale_side_pane_g2

0x2b79,	// (0x00010552) bg_cale_side_pane_g3

0x2b81,	// (0x0001055a) bg_cale_side_pane_g4

0x2b89,	// (0x00010562) bg_cale_side_pane_g5

0x2b91,	// (0x0001056a) bg_cale_side_pane_g6

0x2b99,	// (0x00010572) bg_cale_side_pane_g7

0x2ba1,	// (0x0001057a) bg_cale_side_pane_g8

0x2ba9,	// (0x00010582) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0001cdb4) bg_cale_side_pane_g

0x2bb1,	// (0x0001058a) popup_call_status_window_ParamLimits

0x2bb1,	// (0x0001058a) popup_call_status_window

0xa945,	// (0x0001831e) stacon_top_pane

0xa94d,	// (0x00018326) status_pane_ParamLimits

0xa94d,	// (0x00018326) status_pane

0xa962,	// (0x0001833b) status_small_pane

0xa96a,	// (0x00018343) control_pane

0x994f,	// (0x00017328) stacon_bottom_pane

0xa972,	// (0x0001834b) list_single_mce_smart_pane_t1_ParamLimits

0xa972,	// (0x0001834b) list_single_mce_smart_pane_t1

0xa985,	// (0x0001835e) list_single_mce_smart_pane_t2_ParamLimits

0xa985,	// (0x0001835e) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0001cdc7) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0001cdc7) list_single_mce_smart_pane_t

0x2bf8,	// (0x000105d1) compass_pane

0x2c01,	// (0x000105da) main_location2_pane_t1

0x2c15,	// (0x000105ee) main_location2_pane_t2

0x2c29,	// (0x00010602) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0001cdcc) main_location2_pane_t

0xa9a4,	// (0x0001837d) compass_pane_g1_ParamLimits

0xa9a4,	// (0x0001837d) compass_pane_g1

0x2c73,	// (0x0001064c) compass_pane_t1

0x2c82,	// (0x0001065b) compass_pane_t2

0x0005,

0xf3fc,	// (0x0001cdd5) compass_pane_t

0x2cc9,	// (0x000106a2) text_secondary_cp61

0xa9b8,	// (0x00018391) navi_pane_cams_g5

0xa9db,	// (0x000183b4) navi_pane_im_t1

0xa9e9,	// (0x000183c2) navi_pane_mp_g1_ParamLimits

0xa9e9,	// (0x000183c2) navi_pane_mp_g1

0xa9fd,	// (0x000183d6) navi_pane_mp_g2_ParamLimits

0xa9fd,	// (0x000183d6) navi_pane_mp_g2

0xaa09,	// (0x000183e2) navi_pane_mp_g3_ParamLimits

0xaa09,	// (0x000183e2) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0001cde9) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0001cde9) navi_pane_mp_g

0xaa15,	// (0x000183ee) navi_pane_mp_t1

0xaa23,	// (0x000183fc) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0001cdf0) navi_pane_mp_t

0xaa5f,	// (0x00018438) navi_pane_vt_g1

0xaa15,	// (0x000183ee) navi_pane_vt_t1

0xaa67,	// (0x00018440) navi_slider_pane

0xaa6f,	// (0x00018448) zooming_pane

0xaa77,	// (0x00018450) navi_slider_pane_g1

0xaa80,	// (0x00018459) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0001cdf7) navi_slider_pane_g

0xaaad,	// (0x00018486) aid_levels_zoom

0xaab5,	// (0x0001848e) zooming_pane_g1

0xaabd,	// (0x00018496) zooming_pane_g2

0xaabd,	// (0x00018496) zooming_pane_g3

0x0002,

0xf42d,	// (0x0001ce06) zooming_pane_g

0xaac5,	// (0x0001849e) level_10_zoom

0xaace,	// (0x000184a7) level_11_zoom

0xaad7,	// (0x000184b0) level_1_zoom

0xaae0,	// (0x000184b9) level_2_zoom

0xaae9,	// (0x000184c2) level_3_zoom

0xaaf2,	// (0x000184cb) level_4_zoom

0xaafb,	// (0x000184d4) level_5_zoom

0xab04,	// (0x000184dd) level_6_zoom

0xab0d,	// (0x000184e6) level_7_zoom

0xab16,	// (0x000184ef) level_8_zoom

0xab1f,	// (0x000184f8) level_9_zoom

0xab30,	// (0x00018509) popup_phob_thumbnail_window_g1

0xab38,	// (0x00018511) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0001ce0d) popup_phob_thumbnail_window_g

0xbeb5,	// (0x0001988e) level_1_location

0xbebd,	// (0x00019896) level_2_location

0xbec5,	// (0x0001989e) level_3_location

0xbecd,	// (0x000198a6) level_4_location

0xaa6f,	// (0x00018448) level_5_location

0x2df2,	// (0x000107cb) mce_icon_pane_g1

0x2dfa,	// (0x000107d3) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0001ce12) mce_icon_pane_g

0x2e02,	// (0x000107db) main_mup_pane_g1_ParamLimits

0x2e02,	// (0x000107db) main_mup_pane_g1

0x2e18,	// (0x000107f1) main_mup_pane_g2_ParamLimits

0x2e18,	// (0x000107f1) main_mup_pane_g2

0x2e30,	// (0x00010809) main_mup_pane_g3_ParamLimits

0x2e30,	// (0x00010809) main_mup_pane_g3

0x2e48,	// (0x00010821) main_mup_pane_g4_ParamLimits

0x2e48,	// (0x00010821) main_mup_pane_g4

0x2e60,	// (0x00010839) main_mup_pane_g5_ParamLimits

0x2e60,	// (0x00010839) main_mup_pane_g5

0x2e7c,	// (0x00010855) main_mup_pane_g6_ParamLimits

0x2e7c,	// (0x00010855) main_mup_pane_g6

0x2e94,	// (0x0001086d) main_mup_pane_g7_ParamLimits

0x2e94,	// (0x0001086d) main_mup_pane_g7

0x2eac,	// (0x00010885) main_mup_pane_g8_ParamLimits

0x2eac,	// (0x00010885) main_mup_pane_g8

0x2ec4,	// (0x0001089d) main_mup_pane_g9_ParamLimits

0x2ec4,	// (0x0001089d) main_mup_pane_g9

0x2ede,	// (0x000108b7) main_mup_pane_g10_ParamLimits

0x2ede,	// (0x000108b7) main_mup_pane_g10

0x2ef8,	// (0x000108d1) main_mup_pane_g11_ParamLimits

0x2ef8,	// (0x000108d1) main_mup_pane_g11

0x2f0c,	// (0x000108e5) main_mup_pane_g12_ParamLimits

0x2f0c,	// (0x000108e5) main_mup_pane_g12

0x2f22,	// (0x000108fb) main_mup_pane_g13_ParamLimits

0x2f22,	// (0x000108fb) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0001ce17) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0001ce17) main_mup_pane_g

0x2f36,	// (0x0001090f) main_mup_pane_t1_ParamLimits

0x2f36,	// (0x0001090f) main_mup_pane_t1

0x2f50,	// (0x00010929) main_mup_pane_t2_ParamLimits

0x2f50,	// (0x00010929) main_mup_pane_t2

0x2f68,	// (0x00010941) main_mup_pane_t3_ParamLimits

0x2f68,	// (0x00010941) main_mup_pane_t3

0x2f80,	// (0x00010959) main_mup_pane_t4_ParamLimits

0x2f80,	// (0x00010959) main_mup_pane_t4

0x2f9e,	// (0x00010977) main_mup_pane_t5_ParamLimits

0x2f9e,	// (0x00010977) main_mup_pane_t5

0x2fb3,	// (0x0001098c) main_mup_pane_t6_ParamLimits

0x2fb3,	// (0x0001098c) main_mup_pane_t6

0x0005,

0xf459,	// (0x0001ce32) main_mup_pane_t_ParamLimits

0xf459,	// (0x0001ce32) main_mup_pane_t

0x2fc5,	// (0x0001099e) mup_progress_pane_ParamLimits

0x2fc5,	// (0x0001099e) mup_progress_pane

0x2fd1,	// (0x000109aa) mup_visualizer_pane_ParamLimits

0x2fd1,	// (0x000109aa) mup_visualizer_pane

0x3005,	// (0x000109de) mup_volume_pane_ParamLimits

0x3005,	// (0x000109de) mup_volume_pane

0xab40,	// (0x00018519) mup_visualizer_pane_g1_ParamLimits

0xab40,	// (0x00018519) mup_visualizer_pane_g1

0xab40,	// (0x00018519) mup_visualizer_pane_g2_ParamLimits

0xab40,	// (0x00018519) mup_visualizer_pane_g2

0xa9a4,	// (0x0001837d) mup_visualizer_pane_g3_ParamLimits

0xa9a4,	// (0x0001837d) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0001ce3f) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0001ce3f) mup_visualizer_pane_g

0x9d54,	// (0x0001772d) mup_volume_pane_g1

0xab56,	// (0x0001852f) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0001ce46) mup_volume_pane_g

0x9d54,	// (0x0001772d) mup_progress_pane_g1

0xab5f,	// (0x00018538) mup_progress_pane_g2

0xab68,	// (0x00018541) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0001ce4b) mup_progress_pane_g

0x994f,	// (0x00017328) bg_popup_window_pane_cp05

0xab71,	// (0x0001854a) heading_pane_cp02_ParamLimits

0xab71,	// (0x0001854a) heading_pane_cp02

0xab8b,	// (0x00018564) list_popup_blid_pane

0xab93,	// (0x0001856c) list_blid_sat_info_pane_ParamLimits

0xab93,	// (0x0001856c) list_blid_sat_info_pane

0xaba6,	// (0x0001857f) list_blid_sat_info_pane_g1

0xabae,	// (0x00018587) list_blid_sat_info_pane_t1

0x311b,	// (0x00010af4) mup_equalizer_pane_ParamLimits

0x311b,	// (0x00010af4) mup_equalizer_pane

0x3134,	// (0x00010b0d) mup_equalizer_pane_cp1_ParamLimits

0x3134,	// (0x00010b0d) mup_equalizer_pane_cp1

0x3151,	// (0x00010b2a) mup_equalizer_pane_cp2_ParamLimits

0x3151,	// (0x00010b2a) mup_equalizer_pane_cp2

0x316e,	// (0x00010b47) mup_equalizer_pane_cp3_ParamLimits

0x316e,	// (0x00010b47) mup_equalizer_pane_cp3

0x318f,	// (0x00010b68) mup_equalizer_pane_cp4_ParamLimits

0x318f,	// (0x00010b68) mup_equalizer_pane_cp4

0x31b0,	// (0x00010b89) mup_equalizer_pane_cp5

0x31c4,	// (0x00010b9d) mup_equalizer_pane_cp6

0x31d8,	// (0x00010bb1) mup_equalizer_pane_cp7

0xbdd3,	// (0x000197ac) bg_popup_call_poc_act_pane_g9

0xbddb,	// (0x000197b4) bg_popup_call_poc_act_pane_g10

0xbde3,	// (0x000197bc) bg_popup_call_poc_act_pane_g11

0x000a,

0x9baa,	// (0x00017583) mup_scale_pane

0x9d54,	// (0x0001772d) mup_scale_pane_g1

0xabbc,	// (0x00018595) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0001ce67) mup_scale_pane_g

0xabe0,	// (0x000185b9) msg_data_pane

0xabe8,	// (0x000185c1) scroll_pane_cp017

0x31fe,	// (0x00010bd7) bg_list_pane_cp04_ParamLimits

0x31fe,	// (0x00010bd7) bg_list_pane_cp04

0xabf0,	// (0x000185c9) msg_data_pane_g1

0x321e,	// (0x00010bf7) msg_data_pane_g2

0x2abc,	// (0x00010495) msg_data_pane_g3

0x3226,	// (0x00010bff) msg_data_pane_g4

0x322e,	// (0x00010c07) msg_data_pane_g5

0x3236,	// (0x00010c0f) msg_data_pane_g6

0x323e,	// (0x00010c17) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0001ce76) msg_data_pane_g

0x3246,	// (0x00010c1f) msg_text_pane_ParamLimits

0x3246,	// (0x00010c1f) msg_text_pane

0x326f,	// (0x00010c48) qrid_highlight_pane_cp011_ParamLimits

0x326f,	// (0x00010c48) qrid_highlight_pane_cp011

0x994f,	// (0x00017328) msg_body_pane

0x994f,	// (0x00017328) msg_header_pane

0xac01,	// (0x000185da) input_focus_pane_cp07

0x3293,	// (0x00010c6c) msg_header_pane_t1_ParamLimits

0x3293,	// (0x00010c6c) msg_header_pane_t1

0xac16,	// (0x000185ef) msg_header_pane_t2_ParamLimits

0xac16,	// (0x000185ef) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0001ce8a) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0001ce8a) msg_header_pane_t

0xac28,	// (0x00018601) msg_body_pane_g1

0x32a7,	// (0x00010c80) msg_body_pane_t1_ParamLimits

0x32a7,	// (0x00010c80) msg_body_pane_t1

0xac30,	// (0x00018609) msg_body_pane_t2_ParamLimits

0xac30,	// (0x00018609) msg_body_pane_t2

0xac42,	// (0x0001861b) msg_body_pane_t3_ParamLimits

0xac42,	// (0x0001861b) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0001ce8f) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0001ce8f) msg_body_pane_t

0x3312,	// (0x00010ceb) main_viewer_pane_g1_ParamLimits

0x3312,	// (0x00010ceb) main_viewer_pane_g1

0x3320,	// (0x00010cf9) main_viewer_pane_g2_ParamLimits

0x3320,	// (0x00010cf9) main_viewer_pane_g2

0x332e,	// (0x00010d07) main_viewer_pane_g3_ParamLimits

0x332e,	// (0x00010d07) main_viewer_pane_g3

0x333d,	// (0x00010d16) main_viewer_pane_g4_ParamLimits

0x333d,	// (0x00010d16) main_viewer_pane_g4

0xac6c,	// (0x00018645) main_viewer_pane_g5_ParamLimits

0xac6c,	// (0x00018645) main_viewer_pane_g5

0xac6c,	// (0x00018645) main_viewer_pane_g7_ParamLimits

0xac6c,	// (0x00018645) main_viewer_pane_g7

0xac7e,	// (0x00018657) main_viewer_pane_g8_ParamLimits

0xac7e,	// (0x00018657) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0001ce9f) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0001ce9f) main_viewer_pane_g

0xac96,	// (0x0001866f) viewer_content_pane_ParamLimits

0xac96,	// (0x0001866f) viewer_content_pane

0x3379,	// (0x00010d52) main_postcard_pane_g1_ParamLimits

0x3379,	// (0x00010d52) main_postcard_pane_g1

0x338f,	// (0x00010d68) main_postcard_pane_g2_ParamLimits

0x338f,	// (0x00010d68) main_postcard_pane_g2

0x33a5,	// (0x00010d7e) main_postcard_pane_g3_ParamLimits

0x33a5,	// (0x00010d7e) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0001ceb0) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0001ceb0) main_postcard_pane_g

0x33bc,	// (0x00010d95) main_postcard_pane_g4

0xbfe8,	// (0x000199c1) smil_status_volume_pane_g2

0x33ff,	// (0x00010dd8) postcard_pane_ParamLimits

0x33ff,	// (0x00010dd8) postcard_pane

0xaca4,	// (0x0001867d) postcard_pane_g1_ParamLimits

0xaca4,	// (0x0001867d) postcard_pane_g1

0x3441,	// (0x00010e1a) postcard_pane_g2_ParamLimits

0x3441,	// (0x00010e1a) postcard_pane_g2

0x344d,	// (0x00010e26) postcard_pane_g3_ParamLimits

0x344d,	// (0x00010e26) postcard_pane_g3

0xacb2,	// (0x0001868b) postcard_pane_g4_ParamLimits

0xacb2,	// (0x0001868b) postcard_pane_g4

0x3459,	// (0x00010e32) postcard_pane_g5_ParamLimits

0x3459,	// (0x00010e32) postcard_pane_g5

0x346e,	// (0x00010e47) postcard_pane_g6_ParamLimits

0x346e,	// (0x00010e47) postcard_pane_g6

0xaca4,	// (0x0001867d) postcard_pane_g7_ParamLimits

0xaca4,	// (0x0001867d) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0001cebd) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0001cebd) postcard_pane_g

0x3482,	// (0x00010e5b) main_mp2_pane_g1_ParamLimits

0x3482,	// (0x00010e5b) main_mp2_pane_g1

0x348e,	// (0x00010e67) main_mp2_pane_g2_ParamLimits

0x348e,	// (0x00010e67) main_mp2_pane_g2

0x349a,	// (0x00010e73) main_mp2_pane_g3_ParamLimits

0x349a,	// (0x00010e73) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0001cecc) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0001cecc) main_mp2_pane_g

0x34a6,	// (0x00010e7f) main_mp2_pane_t1_ParamLimits

0x34a6,	// (0x00010e7f) main_mp2_pane_t1

0x34bb,	// (0x00010e94) main_mp2_pane_t2_ParamLimits

0x34bb,	// (0x00010e94) main_mp2_pane_t2

0x34cd,	// (0x00010ea6) main_mp2_pane_t3_ParamLimits

0x34cd,	// (0x00010ea6) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0001ced3) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0001ced3) main_mp2_pane_t

0xacc0,	// (0x00018699) pec_content_pane_ParamLimits

0xacc0,	// (0x00018699) pec_content_pane

0xa20d,	// (0x00017be6) scroll_pane_cp015

0xacd2,	// (0x000186ab) pec_attribute_pane_ParamLimits

0xacd2,	// (0x000186ab) pec_attribute_pane

0x34df,	// (0x00010eb8) pec_content_pane_g1_ParamLimits

0x34df,	// (0x00010eb8) pec_content_pane_g1

0xace2,	// (0x000186bb) pec_content_pane_t1_ParamLimits

0xace2,	// (0x000186bb) pec_content_pane_t1

0xacf4,	// (0x000186cd) pec_content_pane_t2_ParamLimits

0xacf4,	// (0x000186cd) pec_content_pane_t2

0x0001,

0xf501,	// (0x0001ceda) pec_content_pane_t_ParamLimits

0xf501,	// (0x0001ceda) pec_content_pane_t

0x34ed,	// (0x00010ec6) list_single_graphic_pane_cp01_ParamLimits

0x34ed,	// (0x00010ec6) list_single_graphic_pane_cp01

0x9baa,	// (0x00017583) bg_popup_sub_pane_cp04

0xad06,	// (0x000186df) popup_mup_playback_window_g1

0xad12,	// (0x000186eb) popup_mup_playback_window_t1

0xad27,	// (0x00018700) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0001cedf) popup_mup_playback_window_t

0xad5e,	// (0x00018737) main_image_pane_g1_ParamLimits

0xad5e,	// (0x00018737) main_image_pane_g1

0xada1,	// (0x0001877a) scroll_pane_cp018_ParamLimits

0xada1,	// (0x0001877a) scroll_pane_cp018

0xadb9,	// (0x00018792) scroll_pane_cp016_ParamLimits

0xadb9,	// (0x00018792) scroll_pane_cp016

0x35bd,	// (0x00010f96) smil2_image_pane_ParamLimits

0x35bd,	// (0x00010f96) smil2_image_pane

0x35f1,	// (0x00010fca) smil2_root_pane_ParamLimits

0x35f1,	// (0x00010fca) smil2_root_pane

0x3629,	// (0x00011002) smil2_text_pane_ParamLimits

0x3629,	// (0x00011002) smil2_text_pane

0x994f,	// (0x00017328) bg_list_pane_cp06

0xadf5,	// (0x000187ce) grid_radio_pane

0x994f,	// (0x00017328) bg_popup_window_pane_cp06

0xadfd,	// (0x000187d6) main_fmradio_pane_t1

0xa7f2,	// (0x000181cb) heading_pane_cp04

0xae0b,	// (0x000187e4) main_fmradio_pane_t2

0xbdeb,	// (0x000197c4) popup_cale_lunar_info_window_g1

0xae19,	// (0x000187f2) main_fmradio_pane_t3

0xbdf3,	// (0x000197cc) popup_cale_lunar_info_window_g2

0xae27,	// (0x00018800) main_fmradio_pane_t4

0x0001,

0xae35,	// (0x0001880e) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0001cfba) popup_cale_lunar_info_window_g

0xf51b,	// (0x0001cef4) main_fmradio_pane_t

0xae43,	// (0x0001881c) wait_bar_pane_cp03

0xae4b,	// (0x00018824) cell_fmradio_pane_ParamLimits

0xae4b,	// (0x00018824) cell_fmradio_pane

0xaca4,	// (0x0001867d) cell_fmradio_pane_g1_ParamLimits

0xaca4,	// (0x0001867d) cell_fmradio_pane_g1

0x994f,	// (0x00017328) grid_highlight_pane_cp011

0xae5e,	// (0x00018837) poc_content_pane_ParamLimits

0xae5e,	// (0x00018837) poc_content_pane

0xae70,	// (0x00018849) scroll_pane_cp019

0x36a9,	// (0x00011082) popup_call_poc_act_window_ParamLimits

0x36a9,	// (0x00011082) popup_call_poc_act_window

0x36cd,	// (0x000110a6) popup_call_poc_inact_window_ParamLimits

0x36cd,	// (0x000110a6) popup_call_poc_inact_window

0xf5b8,	// (0x0001cf91) bg_popup_call_poc_act_pane_g

0xbd5b,	// (0x00019734) bg_popup_call_poc_inact_pane_g1

0xbd63,	// (0x0001973c) bg_popup_call_poc_inact_pane_g2

0xae78,	// (0x00018851) popup_call_poc_act_window_g2

0xbd6b,	// (0x00019744) bg_popup_call_poc_inact_pane_g3

0xbd73,	// (0x0001974c) bg_popup_call_poc_inact_pane_g4

0xbd7b,	// (0x00019754) bg_popup_call_poc_inact_pane_g5

0xae80,	// (0x00018859) popup_call_poc_act_window_t1_ParamLimits

0xae80,	// (0x00018859) popup_call_poc_act_window_t1

0xaea8,	// (0x00018881) popup_call_poc_act_window_t2_ParamLimits

0xaea8,	// (0x00018881) popup_call_poc_act_window_t2

0xaed0,	// (0x000188a9) popup_call_poc_act_window_t3_ParamLimits

0xaed0,	// (0x000188a9) popup_call_poc_act_window_t3

0xaef8,	// (0x000188d1) popup_call_poc_act_window_t4_ParamLimits

0xaef8,	// (0x000188d1) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0001ceff) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0001ceff) popup_call_poc_act_window_t

0xbd83,	// (0x0001975c) bg_popup_call_poc_inact_pane_g6

0xbd8b,	// (0x00019764) bg_popup_call_poc_inact_pane_g7

0xbd93,	// (0x0001976c) bg_popup_call_poc_inact_pane_g8

0xaf0a,	// (0x000188e3) popup_call_poc_inact_window_g2

0xbd9b,	// (0x00019774) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0001cf7e) bg_popup_call_poc_inact_pane_g

0xaf12,	// (0x000188eb) popup_call_poc_inact_window_t1_ParamLimits

0xaf12,	// (0x000188eb) popup_call_poc_inact_window_t1

0xaf27,	// (0x00018900) popup_call_poc_inact_window_t2_ParamLimits

0xaf27,	// (0x00018900) popup_call_poc_inact_window_t2

0xaf3c,	// (0x00018915) popup_call_poc_inact_window_t3_ParamLimits

0xaf3c,	// (0x00018915) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0001cf08) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0001cf08) popup_call_poc_inact_window_t

0xbf5b,	// (0x00019934) context_pane_ParamLimits

0x3eef,	// (0x000118c8) signal_pane_ParamLimits

0xaa6f,	// (0x00018448) main_call2_pane

0xbf49,	// (0x00019922) popup_phob_thumbnail2_window_ParamLimits

0xbf49,	// (0x00019922) popup_phob_thumbnail2_window

0xac54,	// (0x0001862d) aid_hotspot_pointer_arrow_pane

0xac5c,	// (0x00018635) aid_hotspot_pointer_hand_pane

0x3a13,	// (0x000113ec) phob_pre_status_pane_g5

0x181c,	// (0x0000f1f5) cams_zoom_pane_ParamLimits

0x182b,	// (0x0000f204) image_vga_pane_ParamLimits

0x1845,	// (0x0000f21e) main_camera_pane_g1_ParamLimits

0x1857,	// (0x0000f230) main_camera_pane_g2_ParamLimits

0x1869,	// (0x0000f242) main_camera_pane_g3_ParamLimits

0x187b,	// (0x0000f254) main_camera_pane_g4_ParamLimits

0x188d,	// (0x0000f266) main_camera_pane_g5_ParamLimits

0x189f,	// (0x0000f278) main_camera_pane_g6_ParamLimits

0x18b1,	// (0x0000f28a) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0001cc07) main_camera_pane_g_ParamLimits

0x18c3,	// (0x0000f29c) main_camera_pane_t1_ParamLimits

0x18d9,	// (0x0000f2b2) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0001cc18) main_camera_pane_t_ParamLimits

0x9baa,	// (0x00017583) bg_popup_preview_window_pane_cp01_ParamLimits

0x9baa,	// (0x00017583) bg_popup_preview_window_pane_cp01

0xaf51,	// (0x0001892a) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf51,	// (0x0001892a) popup_phob_thumbnail2_window_g1

0x994f,	// (0x00017328) call2_cli_visual_pane

0x3701,	// (0x000110da) popup_call2_audio_conf_window_ParamLimits

0x3701,	// (0x000110da) popup_call2_audio_conf_window

0x3721,	// (0x000110fa) popup_call2_audio_first_window_ParamLimits

0x3721,	// (0x000110fa) popup_call2_audio_first_window

0x37b7,	// (0x00011190) popup_call2_audio_in_window_ParamLimits

0x37b7,	// (0x00011190) popup_call2_audio_in_window

0x37ff,	// (0x000111d8) popup_call2_audio_out_window_ParamLimits

0x37ff,	// (0x000111d8) popup_call2_audio_out_window

0x3869,	// (0x00011242) popup_call2_audio_second_window_ParamLimits

0x3869,	// (0x00011242) popup_call2_audio_second_window

0x38cf,	// (0x000112a8) popup_call2_audio_wait_window_ParamLimits

0x38cf,	// (0x000112a8) popup_call2_audio_wait_window

0x994f,	// (0x00017328) bg_popup_call2_act_pane_cp03

0x9b8c,	// (0x00017565) list_conf_pane_cp

0xaf5d,	// (0x00018936) popup_call2_audio_conf_window_t1

0xaf6b,	// (0x00018944) list_single_graphic_popup_conf2_pane_ParamLimits

0xaf6b,	// (0x00018944) list_single_graphic_popup_conf2_pane

0xa885,	// (0x0001825e) list_highlight_pane_cp04

0xaf7e,	// (0x00018957) list_single_graphic_popup_conf2_pane_g1

0xa896,	// (0x0001826f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0001cf0f) list_single_graphic_popup_conf2_pane_g

0xaf88,	// (0x00018961) list_single_graphic_popup_conf2_pane_t1

0xaf96,	// (0x0001896f) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf96,	// (0x0001896f) bg_popup_call2_act_pane_cp01

0xb020,	// (0x000189f9) call_type_pane_cp05_ParamLimits

0xb020,	// (0x000189f9) call_type_pane_cp05

0xb074,	// (0x00018a4d) popup_call2_audio_second_window_g1_ParamLimits

0xb074,	// (0x00018a4d) popup_call2_audio_second_window_g1

0xb0c8,	// (0x00018aa1) popup_call2_audio_second_window_g2_ParamLimits

0xb0c8,	// (0x00018aa1) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0001cf14) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0001cf14) popup_call2_audio_second_window_g

0xb12d,	// (0x00018b06) popup_call2_audio_second_window_t1_ParamLimits

0xb12d,	// (0x00018b06) popup_call2_audio_second_window_t1

0xb1e8,	// (0x00018bc1) popup_call2_audio_second_window_t2_ParamLimits

0xb1e8,	// (0x00018bc1) popup_call2_audio_second_window_t2

0xb23b,	// (0x00018c14) popup_call2_audio_second_window_t3_ParamLimits

0xb23b,	// (0x00018c14) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0001cf1b) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0001cf1b) popup_call2_audio_second_window_t

0x994f,	// (0x00017328) bg_popup_call2_in_pane_cp02

0x9959,	// (0x00017332) call_type_pane_cp04

0x9961,	// (0x0001733a) popup_call2_audio_wait_window_g1

0x9969,	// (0x00017342) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001caf4) popup_call2_audio_wait_window_g

0x9971,	// (0x0001734a) popup_call2_audio_wait_window_t3

0xb32e,	// (0x00018d07) bg_popup_call2_act_pane_ParamLimits

0xb32e,	// (0x00018d07) bg_popup_call2_act_pane

0xb3ee,	// (0x00018dc7) call_type_pane_cp03_ParamLimits

0xb3ee,	// (0x00018dc7) call_type_pane_cp03

0xb452,	// (0x00018e2b) popup_call2_audio_first_window_g1_ParamLimits

0xb452,	// (0x00018e2b) popup_call2_audio_first_window_g1

0xb4c2,	// (0x00018e9b) popup_call2_audio_first_window_g2_ParamLimits

0xb4c2,	// (0x00018e9b) popup_call2_audio_first_window_g2

0xab40,	// (0x00018519) popup_call2_audio_first_window_g3_ParamLimits

0xab40,	// (0x00018519) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0001cf24) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0001cf24) popup_call2_audio_first_window_g

0xb5a0,	// (0x00018f79) popup_call2_audio_first_window_t1_ParamLimits

0xb5a0,	// (0x00018f79) popup_call2_audio_first_window_t1

0xb6a3,	// (0x0001907c) popup_call2_audio_first_window_t4_ParamLimits

0xb6a3,	// (0x0001907c) popup_call2_audio_first_window_t4

0xb786,	// (0x0001915f) popup_call2_audio_first_window_t5_ParamLimits

0xb786,	// (0x0001915f) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0001cf2f) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0001cf2f) popup_call2_audio_first_window_t

0x9ba2,	// (0x0001757b) bg_popup_call2_act_pane_g1

0xbdfb,	// (0x000197d4) popup_cale_lunar_info_window_t1

0xbe09,	// (0x000197e2) popup_cale_lunar_info_window_t2

0xbe17,	// (0x000197f0) popup_cale_lunar_info_window_t3

0x994f,	// (0x00017328) bg_popup_call2_bubble_pane

0xb887,	// (0x00019260) bg_popup_call2_in_pane_cp01_ParamLimits

0xb887,	// (0x00019260) bg_popup_call2_in_pane_cp01

0x962b,	// (0x00017004) call_type_pane_cp02

0xb8cf,	// (0x000192a8) popup_call2_audio_out_window_g1_ParamLimits

0xb8cf,	// (0x000192a8) popup_call2_audio_out_window_g1

0xb8fb,	// (0x000192d4) popup_call2_audio_out_window_g2_ParamLimits

0xb8fb,	// (0x000192d4) popup_call2_audio_out_window_g2

0xb923,	// (0x000192fc) popup_call2_audio_out_window_g3_ParamLimits

0xb923,	// (0x000192fc) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0001cf38) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0001cf38) popup_call2_audio_out_window_g

0xb95e,	// (0x00019337) popup_call2_audio_out_window_t1_ParamLimits

0xb95e,	// (0x00019337) popup_call2_audio_out_window_t1

0xb9bd,	// (0x00019396) popup_call2_audio_out_window_t2_ParamLimits

0xb9bd,	// (0x00019396) popup_call2_audio_out_window_t2

0xba11,	// (0x000193ea) popup_call2_audio_out_window_t3_ParamLimits

0xba11,	// (0x000193ea) popup_call2_audio_out_window_t3

0xba27,	// (0x00019400) popup_call2_audio_out_window_t4_ParamLimits

0xba27,	// (0x00019400) popup_call2_audio_out_window_t4

0xba3d,	// (0x00019416) popup_call2_audio_out_window_t5_ParamLimits

0xba3d,	// (0x00019416) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0001cf41) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0001cf41) popup_call2_audio_out_window_t

0xbaa1,	// (0x0001947a) bg_popup_call2_in_pane_ParamLimits

0xbaa1,	// (0x0001947a) bg_popup_call2_in_pane

0xbafd,	// (0x000194d6) popup_call2_audio_in_window_g1_ParamLimits

0xbafd,	// (0x000194d6) popup_call2_audio_in_window_g1

0xbb35,	// (0x0001950e) popup_call2_audio_in_window_g2_ParamLimits

0xbb35,	// (0x0001950e) popup_call2_audio_in_window_g2

0xbb6d,	// (0x00019546) popup_call2_audio_in_window_g3_ParamLimits

0xbb6d,	// (0x00019546) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0001cf4e) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0001cf4e) popup_call2_audio_in_window_g

0xbbc5,	// (0x0001959e) popup_call2_audio_in_window_t1_ParamLimits

0xbbc5,	// (0x0001959e) popup_call2_audio_in_window_t1

0xbc45,	// (0x0001961e) popup_call2_audio_in_window_t2_ParamLimits

0xbc45,	// (0x0001961e) popup_call2_audio_in_window_t2

0xbcc5,	// (0x0001969e) popup_call2_audio_in_window_t3_ParamLimits

0xbcc5,	// (0x0001969e) popup_call2_audio_in_window_t3

0xbcdf,	// (0x000196b8) popup_call2_audio_in_window_t4_ParamLimits

0xbcdf,	// (0x000196b8) popup_call2_audio_in_window_t4

0xbcf1,	// (0x000196ca) popup_call2_audio_in_window_t5_ParamLimits

0xbcf1,	// (0x000196ca) popup_call2_audio_in_window_t5

0xbd06,	// (0x000196df) popup_call2_audio_in_window_t6_ParamLimits

0xbd06,	// (0x000196df) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0001cf57) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0001cf57) popup_call2_audio_in_window_t

0x9ba2,	// (0x0001757b) bg_popup_call2_in_pane_g1

0xbe25,	// (0x000197fe) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0001cfbf) popup_cale_lunar_info_window_t

0x9baa,	// (0x00017583) bg_popup_call2_rect_pane_ParamLimits

0x9baa,	// (0x00017583) bg_popup_call2_rect_pane

0x994f,	// (0x00017328) call2_cli_visual_graphic_pane

0x994f,	// (0x00017328) call2_cli_visual_text_pane

0xbffb,	// (0x000199d4) smil_status_volume_pane_g3

0x0002,

0x9d54,	// (0x0001772d) call2_cli_visual_graphic_pane_g1

0x9d54,	// (0x0001772d) call2_cli_visual_graphic_pane_g2

0x9d54,	// (0x0001772d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0001cf64) call2_cli_visual_graphic_pane_g

0xbd1b,	// (0x000196f4) bg_popup_call2_rect_pane_g1

0x9dfc,	// (0x000177d5) bg_popup_call2_rect_pane_g2

0xbd23,	// (0x000196fc) bg_popup_call2_rect_pane_g3

0xbd2b,	// (0x00019704) bg_popup_call2_rect_pane_g4

0xbd33,	// (0x0001970c) bg_popup_call2_rect_pane_g5

0xbd3b,	// (0x00019714) bg_popup_call2_rect_pane_g6

0xbd43,	// (0x0001971c) bg_popup_call2_rect_pane_g7

0xbd4b,	// (0x00019724) bg_popup_call2_rect_pane_g8

0xbd53,	// (0x0001972c) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0001cf6b) bg_popup_call2_rect_pane_g

0xbd5b,	// (0x00019734) bg_popup_call2_bubble_pane_g1

0xbd63,	// (0x0001973c) bg_popup_call2_bubble_pane_g2

0xbd6b,	// (0x00019744) bg_popup_call2_bubble_pane_g3

0xbd73,	// (0x0001974c) bg_popup_call2_bubble_pane_g4

0xbd7b,	// (0x00019754) bg_popup_call2_bubble_pane_g5

0xbd83,	// (0x0001975c) bg_popup_call2_bubble_pane_g6

0xbd8b,	// (0x00019764) bg_popup_call2_bubble_pane_g7

0xbd93,	// (0x0001976c) bg_popup_call2_bubble_pane_g8

0xbd9b,	// (0x00019774) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0001cf7e) bg_popup_call2_bubble_pane_g

0x147e,	// (0x0000ee57) aid_cale_week_size_cell_pane

0x18f1,	// (0x0000f2ca) aid_cams_cif_uncrop_pane_ParamLimits

0x18f1,	// (0x0000f2ca) aid_cams_cif_uncrop_pane

0x1aae,	// (0x0000f487) aid_cams_size_cell_ParamLimits

0x1aae,	// (0x0000f487) aid_cams_size_cell

0x1ac2,	// (0x0000f49b) grid_cams_pane_ParamLimits

0x1adc,	// (0x0000f4b5) linegrid_cams_pane_ParamLimits

0x1c14,	// (0x0000f5ed) call_video_pane_t1

0x1c32,	// (0x0000f60b) call_video_pane_t2

0x0001,

0xf292,	// (0x0001cc6b) call_video_pane_t

0x2065,	// (0x0000fa3e) aid_cale_month_size_cell_pane_ParamLimits

0x2065,	// (0x0000fa3e) aid_cale_month_size_cell_pane

0xf62f,	// (0x0001d008) smil_status_volume_pane_g

0xc008,	// (0x000199e1) volume_smil_pane_ParamLimits

0x94d2,	// (0x00016eab) aid_popup2_width_pane

0x1400,	// (0x0000edd9) cell_qdial_pane_g4_ParamLimits

0x1400,	// (0x0000edd9) cell_qdial_pane_g4

0x2c53,	// (0x0001062c) aid_blid_cardinal_pane_ParamLimits

0x2c5f,	// (0x00010638) aid_blid_destination_pane_ParamLimits

0x2c5f,	// (0x00010638) aid_blid_destination_pane

0x9baa,	// (0x00017583) bg_popup_call_poc_act_pane_ParamLimits

0x9baa,	// (0x00017583) bg_popup_call_poc_act_pane

0x9baa,	// (0x00017583) bg_popup_call_poc_inact_pane_ParamLimits

0x9baa,	// (0x00017583) bg_popup_call_poc_inact_pane

0xbdab,	// (0x00019784) bg_popup_call_poc_act_pane_g1

0xbdb3,	// (0x0001978c) bg_popup_call_poc_act_pane_g2

0xbdbb,	// (0x00019794) bg_popup_call_poc_act_pane_g3

0xbd73,	// (0x0001974c) bg_popup_call_poc_act_pane_g4

0xbd7b,	// (0x00019754) bg_popup_call_poc_act_pane_g5

0xbdc3,	// (0x0001979c) bg_popup_call_poc_act_pane_g6

0xbd8b,	// (0x00019764) bg_popup_call_poc_act_pane_g7

0xbdcb,	// (0x000197a4) bg_popup_call_poc_act_pane_g8

0x994f,	// (0x00017328) main_usb_pane

0xbf24,	// (0x000198fd) popup_cale_lunar_info_window

0x1efc,	// (0x0000f8d5) im_reading_pane_t1_ParamLimits

0xa165,	// (0x00017b3e) list_im_pane_ParamLimits

0xa176,	// (0x00017b4f) scroll_pane_cp07_ParamLimits

0x994f,	// (0x00017328) grid_highlight_pane_cp012

0x9baa,	// (0x00017583) mup_scale_pane_ParamLimits

0xaca4,	// (0x0001867d) main_usb_pane_g1_ParamLimits

0xaca4,	// (0x0001867d) main_usb_pane_g1

0x3926,	// (0x000112ff) main_usb_pane_g2_ParamLimits

0x3926,	// (0x000112ff) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0001cfa8) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0001cfa8) main_usb_pane_g

0x393c,	// (0x00011315) main_usb_pane_t1_ParamLimits

0x393c,	// (0x00011315) main_usb_pane_t1

0x394e,	// (0x00011327) main_usb_pane_t2_ParamLimits

0x394e,	// (0x00011327) main_usb_pane_t2

0x3960,	// (0x00011339) main_usb_pane_t3_ParamLimits

0x3960,	// (0x00011339) main_usb_pane_t3

0x3972,	// (0x0001134b) main_usb_pane_t4_ParamLimits

0x3972,	// (0x0001134b) main_usb_pane_t4

0x3984,	// (0x0001135d) main_usb_pane_t5_ParamLimits

0x3984,	// (0x0001135d) main_usb_pane_t5

0x3996,	// (0x0001136f) main_usb_pane_t6_ParamLimits

0x3996,	// (0x0001136f) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0001cfad) main_usb_pane_t_ParamLimits

0x2bf8,	// (0x000105d1) aid_text_placing

0x2c01,	// (0x000105da) main_location2_pane_t1_ParamLimits

0x2c15,	// (0x000105ee) main_location2_pane_t2_ParamLimits

0x2c29,	// (0x00010602) main_location2_pane_t3_ParamLimits

0x2c3f,	// (0x00010618) main_location2_pane_t4_ParamLimits

0x2c3f,	// (0x00010618) main_location2_pane_t4

0xf3f3,	// (0x0001cdcc) main_location2_pane_t_ParamLimits

0x9bee,	// (0x000175c7) find_pinb_pane_g2_ParamLimits

0x9bee,	// (0x000175c7) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0001cb1a) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0001cb1a) find_pinb_pane_g

0x9bfa,	// (0x000175d3) find_pinb_pane_t1_ParamLimits

0x9c0c,	// (0x000175e5) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0001cb1f) find_pinb_pane_t_ParamLimits

0x994f,	// (0x00017328) main_call3_pane

0x23c9,	// (0x0000fda2) cale_month_day_heading_pane_t1_ParamLimits

0x2427,	// (0x0000fe00) cale_month_day_heading_pane_t2_ParamLimits

0x248c,	// (0x0000fe65) cale_month_day_heading_pane_t3_ParamLimits

0x24f1,	// (0x0000feca) cale_month_day_heading_pane_t4_ParamLimits

0x2556,	// (0x0000ff2f) cale_month_day_heading_pane_t5_ParamLimits

0x25cb,	// (0x0000ffa4) cale_month_day_heading_pane_t6_ParamLimits

0x2640,	// (0x00010019) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0001cca3) cale_month_day_heading_pane_t_ParamLimits

0xa3ec,	// (0x00017dc5) smil_status_volume_pane

0x341d,	// (0x00010df6) postcard_address_pane_ParamLimits

0x341d,	// (0x00010df6) postcard_address_pane

0x342f,	// (0x00010e08) postcard_message_pane_ParamLimits

0x342f,	// (0x00010e08) postcard_message_pane

0x3909,	// (0x000112e2) call2_cli_visual_pane_t1_ParamLimits

0x3909,	// (0x000112e2) call2_cli_visual_pane_t1

0x411d,	// (0x00011af6) postcard_message_pane_t1_ParamLimits

0x411d,	// (0x00011af6) postcard_message_pane_t1

0x4106,	// (0x00011adf) postcard_address_pane_t1_ParamLimits

0x4106,	// (0x00011adf) postcard_address_pane_t1

0x40f2,	// (0x00011acb) popup_call3_audio_in_window_ParamLimits

0x40f2,	// (0x00011acb) popup_call3_audio_in_window

0x3f81,	// (0x0001195a) bg_popup_call3_in_pane_ParamLimits

0x3f81,	// (0x0001195a) bg_popup_call3_in_pane

0x3ff3,	// (0x000119cc) popup_call3_audio_in_window_g1_ParamLimits

0x3ff3,	// (0x000119cc) popup_call3_audio_in_window_g1

0x4013,	// (0x000119ec) popup_call3_audio_in_window_g2_ParamLimits

0x4013,	// (0x000119ec) popup_call3_audio_in_window_g2

0x4033,	// (0x00011a0c) popup_call3_audio_in_window_g3_ParamLimits

0x4033,	// (0x00011a0c) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0001d00f) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0001d00f) popup_call3_audio_in_window_g

0x4064,	// (0x00011a3d) popup_call3_audio_in_window_t1_ParamLimits

0x4064,	// (0x00011a3d) popup_call3_audio_in_window_t1

0x40a2,	// (0x00011a7b) popup_call3_audio_in_window_t2_ParamLimits

0x40a2,	// (0x00011a7b) popup_call3_audio_in_window_t2

0x40e0,	// (0x00011ab9) popup_call3_audio_in_window_t3_ParamLimits

0x40e0,	// (0x00011ab9) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0001d018) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0001d018) popup_call3_audio_in_window_t

0xaa6f,	// (0x00018448) bg_popup_call3_rect_pane

0xbd1b,	// (0x000196f4) bg_popup_call3_rect_pane_g1

0x9dfc,	// (0x000177d5) bg_popup_call3_rect_pane_g2

0xbd23,	// (0x000196fc) bg_popup_call3_rect_pane_g3

0xbd2b,	// (0x00019704) bg_popup_call3_rect_pane_g4

0xbd33,	// (0x0001970c) bg_popup_call3_rect_pane_g5

0xbd3b,	// (0x00019714) bg_popup_call3_rect_pane_g6

0xbd43,	// (0x0001971c) bg_popup_call3_rect_pane_g7

0x301b,	// (0x000109f4) mup_visualizer_osc_pane

0xab4e,	// (0x00018527) mup_visualizer_spec_pane

0x3fb1,	// (0x0001198a) call3_video_qcif_pane_ParamLimits

0x3fb1,	// (0x0001198a) call3_video_qcif_pane

0x3fc2,	// (0x0001199b) call3_video_qcif_uncrop_pane_ParamLimits

0x3fc2,	// (0x0001199b) call3_video_qcif_uncrop_pane

0x3fce,	// (0x000119a7) call3_video_subqcif_pane_ParamLimits

0x3fce,	// (0x000119a7) call3_video_subqcif_pane

0x3fe2,	// (0x000119bb) call3_video_subqcif_uncrop_pane_ParamLimits

0x3fe2,	// (0x000119bb) call3_video_subqcif_uncrop_pane

0x4053,	// (0x00011a2c) popup_call3_audio_in_window_g4_ParamLimits

0x4053,	// (0x00011a2c) popup_call3_audio_in_window_g4

0x3f70,	// (0x00011949) mup_spec_half_pane

0x3f79,	// (0x00011952) mup_spec_half_pane_cp

0xbfbb,	// (0x00019994) mup_osc_middle_pane

0xbfc4,	// (0x0001999d) mup_visualizer_osc_pane_g1

0x3f50,	// (0x00011929) mup_spec_bar_pane_ParamLimits

0x3f50,	// (0x00011929) mup_spec_bar_pane

0xbfa8,	// (0x00019981) mup_spec_bar_pane_g1

0xbfb2,	// (0x0001998b) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001d003) mup_spec_bar_pane_g

0x147e,	// (0x0000ee57) aid_cale_week_size_cell_pane_ParamLimits

0x1491,	// (0x0000ee6a) bg_cale_heading_pane_ParamLimits

0x9e9d,	// (0x00017876) bg_cale_pane_cp01_ParamLimits

0x14a9,	// (0x0000ee82) cale_week_corner_pane_ParamLimits

0x14ba,	// (0x0000ee93) cale_week_day_heading_pane_ParamLimits

0x14d2,	// (0x0000eeab) cale_week_scroll_pane_g1_ParamLimits

0x14e7,	// (0x0000eec0) cale_week_scroll_pane_g2_ParamLimits

0x14f8,	// (0x0000eed1) cale_week_scroll_pane_g3_ParamLimits

0x1509,	// (0x0000eee2) cale_week_scroll_pane_g4_ParamLimits

0x151a,	// (0x0000eef3) cale_week_scroll_pane_g5_ParamLimits

0x152d,	// (0x0000ef06) cale_week_scroll_pane_g6_ParamLimits

0x1540,	// (0x0000ef19) cale_week_scroll_pane_g7_ParamLimits

0x1553,	// (0x0000ef2c) cale_week_scroll_pane_g8_ParamLimits

0x1566,	// (0x0000ef3f) cale_week_scroll_pane_g9_ParamLimits

0x1577,	// (0x0000ef50) cale_week_scroll_pane_g10_ParamLimits

0x1588,	// (0x0000ef61) cale_week_scroll_pane_g11_ParamLimits

0x1599,	// (0x0000ef72) cale_week_scroll_pane_g12_ParamLimits

0x15aa,	// (0x0000ef83) cale_week_scroll_pane_g13_ParamLimits

0x15bb,	// (0x0000ef94) cale_week_scroll_pane_g14_ParamLimits

0x15cc,	// (0x0000efa5) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0001cbab) cale_week_scroll_pane_g_ParamLimits

0x15dd,	// (0x0000efb6) cale_week_time_pane_ParamLimits

0x15f0,	// (0x0000efc9) grid_cale_week_pane_ParamLimits

0x9eb6,	// (0x0001788f) listscroll_cale_week_pane_t1

0x1605,	// (0x0000efde) scroll_pane_cp08_ParamLimits

0x20a6,	// (0x0000fa7f) cale_month_corner_pane_ParamLimits

0xa38c,	// (0x00017d65) cale_month_pane_t1

0x2388,	// (0x0000fd61) cale_month_week_pane_ParamLimits

0x2a5f,	// (0x00010438) popup_call_status_window_g1_ParamLimits

0x2a73,	// (0x0001044c) popup_call_status_window_g2_ParamLimits

0x2a87,	// (0x00010460) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0001cd53) popup_call_status_window_g_ParamLimits

0xa773,	// (0x0001814c) aid_call2_pane

0x3285,	// (0x00010c5e) msg_header_pane_g1

0x341d,	// (0x00010df6) postcard_address2_pane_ParamLimits

0x341d,	// (0x00010df6) postcard_address2_pane

0x342f,	// (0x00010e08) postcard_message2_pane_ParamLimits

0x342f,	// (0x00010e08) postcard_message2_pane

0x3efd,	// (0x000118d6) message2_row_pane_ParamLimits

0x3efd,	// (0x000118d6) message2_row_pane

0x3f1c,	// (0x000118f5) address2_row_pane_ParamLimits

0x3f1c,	// (0x000118f5) address2_row_pane

0xbf76,	// (0x0001994f) postcard_message2_row_pane_g1

0xbf7e,	// (0x00019957) postcard_message2_row_pane_t1

0xbf76,	// (0x0001994f) address2_row_pane_g1

0xbf7e,	// (0x00019957) address2_row_pane_t1

0x9f1a,	// (0x000178f3) aid_size_cell_vorec

0x994f,	// (0x00017328) main_rss_pane

0x3f2f,	// (0x00011908) rss_list_single_pane_ParamLimits

0x3f2f,	// (0x00011908) rss_list_single_pane

0xbf8c,	// (0x00019965) rss_list_single_pane_t1

0xbf9a,	// (0x00019973) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0001cffe) rss_list_single_pane_t

0x994f,	// (0x00017328) main_camera2_pane

0x994f,	// (0x00017328) main_video2_pane

0x4196,	// (0x00011b6f) cams_zoom_pane_cp2_ParamLimits

0x4196,	// (0x00011b6f) cams_zoom_pane_cp2

0x41b6,	// (0x00011b8f) image2_vga_pane_ParamLimits

0x41b6,	// (0x00011b8f) image2_vga_pane

0x4207,	// (0x00011be0) main_camera2_pane_g1_ParamLimits

0x4207,	// (0x00011be0) main_camera2_pane_g1

0x4227,	// (0x00011c00) main_camera2_pane_g2_ParamLimits

0x4227,	// (0x00011c00) main_camera2_pane_g2

0x4247,	// (0x00011c20) main_camera2_pane_g3_ParamLimits

0x4247,	// (0x00011c20) main_camera2_pane_g3

0x4267,	// (0x00011c40) main_camera2_pane_g4_ParamLimits

0x4267,	// (0x00011c40) main_camera2_pane_g4

0x4287,	// (0x00011c60) main_camera2_pane_g5_ParamLimits

0x4287,	// (0x00011c60) main_camera2_pane_g5

0x42a7,	// (0x00011c80) main_camera2_pane_g6_ParamLimits

0x42a7,	// (0x00011c80) main_camera2_pane_g6

0x42c7,	// (0x00011ca0) main_camera2_pane_g7_ParamLimits

0x42c7,	// (0x00011ca0) main_camera2_pane_g7

0x42e7,	// (0x00011cc0) main_camera2_pane_g8_ParamLimits

0x42e7,	// (0x00011cc0) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0001d01f) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0001d01f) main_camera2_pane_g

0x4327,	// (0x00011d00) main_camera2_pane_t1_ParamLimits

0x4327,	// (0x00011d00) main_camera2_pane_t1

0x435c,	// (0x00011d35) main_camera2_pane_t2_ParamLimits

0x435c,	// (0x00011d35) main_camera2_pane_t2

0x4382,	// (0x00011d5b) main_camera2_pane_t3_ParamLimits

0x4382,	// (0x00011d5b) main_camera2_pane_t3

0x43e0,	// (0x00011db9) main_camera2_pane_t4_ParamLimits

0x43e0,	// (0x00011db9) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0001d032) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0001d032) main_camera2_pane_t

0x4472,	// (0x00011e4b) cams_zoom_pane_cp4_ParamLimits

0x4472,	// (0x00011e4b) cams_zoom_pane_cp4

0x4488,	// (0x00011e61) image2_cif_pane_ParamLimits

0x4488,	// (0x00011e61) image2_cif_pane

0x44b3,	// (0x00011e8c) image2_subqcif_pane_ParamLimits

0x44b3,	// (0x00011e8c) image2_subqcif_pane

0x44cd,	// (0x00011ea6) main_video2_pane_g1_ParamLimits

0x44cd,	// (0x00011ea6) main_video2_pane_g1

0x44e7,	// (0x00011ec0) main_video2_pane_g2_ParamLimits

0x44e7,	// (0x00011ec0) main_video2_pane_g2

0x44fd,	// (0x00011ed6) main_video2_pane_g3_ParamLimits

0x44fd,	// (0x00011ed6) main_video2_pane_g3

0x4513,	// (0x00011eec) main_video2_pane_g4_ParamLimits

0x4513,	// (0x00011eec) main_video2_pane_g4

0x4529,	// (0x00011f02) main_video2_pane_g5_ParamLimits

0x4529,	// (0x00011f02) main_video2_pane_g5

0x453f,	// (0x00011f18) main_video2_pane_g6_ParamLimits

0x453f,	// (0x00011f18) main_video2_pane_g6

0x0005,

0xf668,	// (0x0001d041) main_video2_pane_g_ParamLimits

0xf668,	// (0x0001d041) main_video2_pane_g

0x4559,	// (0x00011f32) main_video2_pane_t1_ParamLimits

0x4559,	// (0x00011f32) main_video2_pane_t1

0x457d,	// (0x00011f56) main_video2_pane_t2_ParamLimits

0x457d,	// (0x00011f56) main_video2_pane_t2

0x45cb,	// (0x00011fa4) main_video2_pane_t3_ParamLimits

0x45cb,	// (0x00011fa4) main_video2_pane_t3

0x0002,

0xf675,	// (0x0001d04e) main_video2_pane_t_ParamLimits

0xf675,	// (0x0001d04e) main_video2_pane_t

0x3a53,	// (0x0001142c) call_muted_g2

0x0001,

0xf617,	// (0x0001cff0) call_muted_g

0x994f,	// (0x00017328) main_mup2_pane

0x4613,	// (0x00011fec) main_mup2_pane_g1_ParamLimits

0x4613,	// (0x00011fec) main_mup2_pane_g1

0x461f,	// (0x00011ff8) main_mup2_pane_g2_ParamLimits

0x461f,	// (0x00011ff8) main_mup2_pane_g2

0xc12c,	// (0x00019b05) main_mup_pane_g13_cp1

0xc134,	// (0x00019b0d) mup_volume_pane_cp1

0x463b,	// (0x00012014) main_mup2_pane_g4_ParamLimits

0x463b,	// (0x00012014) main_mup2_pane_g4

0x464d,	// (0x00012026) main_mup2_pane_g5_ParamLimits

0x464d,	// (0x00012026) main_mup2_pane_g5

0x465f,	// (0x00012038) main_mup2_pane_g6_ParamLimits

0x465f,	// (0x00012038) main_mup2_pane_g6

0x4671,	// (0x0001204a) main_mup2_pane_g7_ParamLimits

0x4671,	// (0x0001204a) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0001d055) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0001d055) main_mup2_pane_g

0x4689,	// (0x00012062) main_mup2_pane_t1_ParamLimits

0x4689,	// (0x00012062) main_mup2_pane_t1

0x469f,	// (0x00012078) main_mup2_pane_t2_ParamLimits

0x469f,	// (0x00012078) main_mup2_pane_t2

0x46b5,	// (0x0001208e) main_mup2_pane_t3_ParamLimits

0x46b5,	// (0x0001208e) main_mup2_pane_t3

0x46cb,	// (0x000120a4) main_mup2_pane_t4_ParamLimits

0x46cb,	// (0x000120a4) main_mup2_pane_t4

0x46e3,	// (0x000120bc) main_mup2_pane_t5_ParamLimits

0x46e3,	// (0x000120bc) main_mup2_pane_t5

0x46fb,	// (0x000120d4) main_mup2_pane_t6_ParamLimits

0x46fb,	// (0x000120d4) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0001d064) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0001d064) main_mup2_pane_t

0x472b,	// (0x00012104) mup2_visualizer_pane_ParamLimits

0x472b,	// (0x00012104) mup2_visualizer_pane

0x4759,	// (0x00012132) mup_progress_pane_cp_ParamLimits

0x4759,	// (0x00012132) mup_progress_pane_cp

0xc10e,	// (0x00019ae7) mup_volume_pane_cp_ParamLimits

0xc10e,	// (0x00019ae7) mup_volume_pane_cp

0x476d,	// (0x00012146) mup2_visualizer_pane_g1_ParamLimits

0x476d,	// (0x00012146) mup2_visualizer_pane_g1

0xc04d,	// (0x00019a26) mup2_visualizer_pane_g2_ParamLimits

0xc04d,	// (0x00019a26) mup2_visualizer_pane_g2

0x4784,	// (0x0001215d) mup2_visualizer_pane_g3_ParamLimits

0x4784,	// (0x0001215d) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0001d071) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0001d071) mup2_visualizer_pane_g

0xaded,	// (0x000187c6) aid_size_cell_fmradio

0x3c05,	// (0x000115de) aid_height_parent_landcape

0xa1f4,	// (0x00017bcd) wml_content_pane_cp

0xa1fc,	// (0x00017bd5) wml_tabs_pane

0xa205,	// (0x00017bde) popup_wml_miniature_window

0xa20d,	// (0x00017be6) scroll_pane_cp021

0xa221,	// (0x00017bfa) wml_content_pane_comp8

0x994f,	// (0x00017328) bg_popup_sub_pane_cp05

0xc06b,	// (0x00019a44) popup_wml_miniature_window_g1

0xc073,	// (0x00019a4c) wml_miniature_view_pane

0x4790,	// (0x00012169) aid_size_wml_view

0x4798,	// (0x00012171) wml_miniature_view_pane_g1

0x47a1,	// (0x0001217a) wml_miniature_view_pane_g2

0x47aa,	// (0x00012183) wml_miniature_view_pane_g3

0x47b2,	// (0x0001218b) wml_miniature_view_pane_g4

0x47ba,	// (0x00012193) wml_miniature_view_pane_g5

0x47c2,	// (0x0001219b) wml_miniature_view_pane_g6

0x47ca,	// (0x000121a3) wml_miniature_view_pane_g7

0x47d2,	// (0x000121ab) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0001d078) wml_miniature_view_pane_g

0xc07b,	// (0x00019a54) background_graphic_ParamLimits

0xc07b,	// (0x00019a54) background_graphic

0xc087,	// (0x00019a60) wml_tabs_2_pane

0xc090,	// (0x00019a69) wml_tabs_3_pane_ParamLimits

0xc090,	// (0x00019a69) wml_tabs_3_pane

0xc0a2,	// (0x00019a7b) wml_tabs_4_pane_ParamLimits

0xc0a2,	// (0x00019a7b) wml_tabs_4_pane

0xc0b8,	// (0x00019a91) wml_tabs_5_pane_ParamLimits

0xc0b8,	// (0x00019a91) wml_tabs_5_pane

0xc0d2,	// (0x00019aab) wml_tabs_pane_g2_ParamLimits

0xc0d2,	// (0x00019aab) wml_tabs_pane_g2

0xc0e6,	// (0x00019abf) wml_tabs_pane_g3_ParamLimits

0xc0e6,	// (0x00019abf) wml_tabs_pane_g3

0x47da,	// (0x000121b3) wml_tabs_2_active_pane_ParamLimits

0x47da,	// (0x000121b3) wml_tabs_2_active_pane

0x47ee,	// (0x000121c7) wml_tabs_2_passive_pane_ParamLimits

0x47ee,	// (0x000121c7) wml_tabs_2_passive_pane

0x4802,	// (0x000121db) wml_tabs_3_active_pane_cp_ParamLimits

0x4802,	// (0x000121db) wml_tabs_3_active_pane_cp

0x4817,	// (0x000121f0) wml_tabs_3_passive_pane_ParamLimits

0x4817,	// (0x000121f0) wml_tabs_3_passive_pane

0x482a,	// (0x00012203) wml_tabs_3_passive_pane_cp_ParamLimits

0x482a,	// (0x00012203) wml_tabs_3_passive_pane_cp

0x4841,	// (0x0001221a) tabs_4_active_pane

0x4849,	// (0x00012222) tabs_4_passive_pane

0x4853,	// (0x0001222c) tabs_4_passive_pane_cp

0x485b,	// (0x00012234) tabs_4_passive_pane_cp2

0xbda3,	// (0x0001977c) aid_height_text

0x2fed,	// (0x000109c6) mup_volume_cont_pane_ParamLimits

0x2fed,	// (0x000109c6) mup_volume_cont_pane

0x10e1,	// (0x0000eaba) aid_size_cell_pinb

0x9bda,	// (0x000175b3) aid_size_list_pinb

0x4745,	// (0x0001211e) mup2_volume_cont_pane_ParamLimits

0x4745,	// (0x0001211e) mup2_volume_cont_pane

0xc0fa,	// (0x00019ad3) mup2_volume_cont_pane_g1_ParamLimits

0xc0fa,	// (0x00019ad3) mup2_volume_cont_pane_g1

0x0dce,	// (0x0000e7a7) aid_size_cell_touch_ParamLimits

0x0dce,	// (0x0000e7a7) aid_size_cell_touch

0x0fd0,	// (0x0000e9a9) touch_pane_ParamLimits

0x0fd0,	// (0x0000e9a9) touch_pane

0x94c0,	// (0x00016e99) main_rss2_pane

0xc13c,	// (0x00019b15) listscroll_rss2_pane

0xc145,	// (0x00019b1e) rss2_navigation_pane

0xc14d,	// (0x00019b26) list_rss2_pane

0xa922,	// (0x000182fb) scroll_pane_cp22

0xc155,	// (0x00019b2e) rss2_navigation_pane_g1

0xc15e,	// (0x00019b37) rss2_navigation_pane_g2

0xc166,	// (0x00019b3f) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0001d089) rss2_navigation_pane_g

0xc16e,	// (0x00019b47) rss2_navigation_pane_t1

0x4865,	// (0x0001223e) rss2_list_single_pane_ParamLimits

0x4865,	// (0x0001223e) rss2_list_single_pane

0xc17c,	// (0x00019b55) rss2_list_single_pane_t2

0xc18a,	// (0x00019b63) rss2_list_single_pane_t3_ParamLimits

0xc18a,	// (0x00019b63) rss2_list_single_pane_t3

0xc1a7,	// (0x00019b80) rss2_list_single_pane_t4

0x283c,	// (0x00010215) smil_status_pane_g1

0x9530,	// (0x00016f09) main_image2_pane_ParamLimits

0x9530,	// (0x00016f09) main_image2_pane

0x4307,	// (0x00011ce0) main_camera2_pane_g9_ParamLimits

0x4307,	// (0x00011ce0) main_camera2_pane_g9

0x4435,	// (0x00011e0e) main_camera2_pane_t5_ParamLimits

0x4435,	// (0x00011e0e) main_camera2_pane_t5

0xc01d,	// (0x000199f6) main_camera2_pane_t6_ParamLimits

0xc01d,	// (0x000199f6) main_camera2_pane_t6

0x487d,	// (0x00012256) main_image2_pane_g1_ParamLimits

0x487d,	// (0x00012256) main_image2_pane_g1

0x365f,	// (0x00011038) smil2_video_pane_ParamLimits

0x365f,	// (0x00011038) smil2_video_pane

0x94de,	// (0x00016eb7) aid_zoom_text_primary_cp

0x9526,	// (0x00016eff) popup_preview_fixed_window

0xa15d,	// (0x00017b36) im_reading_pane_g1

0x417e,	// (0x00011b57) cams2_bc_adjust_pane_cp_ParamLimits

0x417e,	// (0x00011b57) cams2_bc_adjust_pane_cp

0x4464,	// (0x00011e3d) cams2_bc_adjust_pane_ParamLimits

0x4464,	// (0x00011e3d) cams2_bc_adjust_pane

0xc1b5,	// (0x00019b8e) cams2_bc_adjust_pane_g1

0xc1bd,	// (0x00019b96) cams2_slider_pane

0xc1c6,	// (0x00019b9f) cams2_slider_pane_g1

0xc1cf,	// (0x00019ba8) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0001d090) cams2_slider_pane_g

0x11a0,	// (0x0000eb79) calc_display_pane_ParamLimits

0x11c8,	// (0x0000eba1) calc_paper_pane_ParamLimits

0x11eb,	// (0x0000ebc4) grid_calc_pane_ParamLimits

0xa7d5,	// (0x000181ae) popup_clock_digital_window_t1_ParamLimits

0xad8a,	// (0x00018763) main_image_pane_t1

0x1182,	// (0x0000eb5b) aid_size_cell_calc_ParamLimits

0x1182,	// (0x0000eb5b) aid_size_cell_calc

0x3c4b,	// (0x00011624) popup_blid_sat_info2_window_ParamLimits

0x3c4b,	// (0x00011624) popup_blid_sat_info2_window

0xc1f1,	// (0x00019bca) aid_size_cell_blid

0xc1f9,	// (0x00019bd2) bg_popup_window_pane_cp07

0xc21c,	// (0x00019bf5) grid_popup_blid_pane

0xc226,	// (0x00019bff) heading_pane_cp05_ParamLimits

0xc226,	// (0x00019bff) heading_pane_cp05

0xc2f0,	// (0x00019cc9) cell_popup_blid_pane_ParamLimits

0xc2f0,	// (0x00019cc9) cell_popup_blid_pane

0xc316,	// (0x00019cef) cell_popup_blid_pane_g1

0xc31e,	// (0x00019cf7) cell_popup_blid_pane_t1

0x4715,	// (0x000120ee) mup2_indicator_pane_ParamLimits

0x4715,	// (0x000120ee) mup2_indicator_pane

0xaa6f,	// (0x00018448) mup2_visualizer_osc_pane

0xc059,	// (0x00019a32) mup2_visualizer_spec_pane_ParamLimits

0xc059,	// (0x00019a32) mup2_visualizer_spec_pane

0x4893,	// (0x0001226c) mup2_spec_half_pane

0x489c,	// (0x00012275) mup2_spec_half_pane_cp

0x48a4,	// (0x0001227d) mup2_spec_bar_pane_ParamLimits

0x48a4,	// (0x0001227d) mup2_spec_bar_pane

0xbfa8,	// (0x00019981) mup2_spec_bar_pane_g1

0xbfb2,	// (0x0001998b) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001d003) mup2_spec_bar_pane_g

0x48c4,	// (0x0001229d) mup2_osc_middle_pane

0xbfc4,	// (0x0001999d) mup2_visualizer_osc_pane_g1

0x955e,	// (0x00016f37) popup_number_entry_window_t1_ParamLimits

0x9571,	// (0x00016f4a) popup_number_entry_window_t2_ParamLimits

0x9583,	// (0x00016f5c) popup_number_entry_window_t3_ParamLimits

0x1022,	// (0x0000e9fb) popup_number_entry_window_t5_ParamLimits

0x1022,	// (0x0000e9fb) popup_number_entry_window_t5

0xf0ec,	// (0x0001cac5) popup_number_entry_window_t_ParamLimits

0x9595,	// (0x00016f6e) text_title_cp2_ParamLimits

0xac64,	// (0x0001863d) aid_hotspot_pointer_text2_pane

0xac8a,	// (0x00018663) main_viewer_pane_g9_ParamLimits

0xac8a,	// (0x00018663) main_viewer_pane_g9

0xa38c,	// (0x00017d65) cale_month_pane_t1_ParamLimits

0xa421,	// (0x00017dfa) bg_cale_pane_ParamLimits

0xa439,	// (0x00017e12) list_cale_pane_ParamLimits

0x9eb6,	// (0x0001788f) listscroll_cale_day_pane_t1

0xa44a,	// (0x00017e23) scroll_pane_cp09_ParamLimits

0x3023,	// (0x000109fc) main_mup_eq_pane_t1_ParamLimits

0x3023,	// (0x000109fc) main_mup_eq_pane_t1

0x303d,	// (0x00010a16) main_mup_eq_pane_t2_ParamLimits

0x303d,	// (0x00010a16) main_mup_eq_pane_t2

0x3057,	// (0x00010a30) main_mup_eq_pane_t3_ParamLimits

0x3057,	// (0x00010a30) main_mup_eq_pane_t3

0x3073,	// (0x00010a4c) main_mup_eq_pane_t4_ParamLimits

0x3073,	// (0x00010a4c) main_mup_eq_pane_t4

0x308f,	// (0x00010a68) main_mup_eq_pane_t5_ParamLimits

0x308f,	// (0x00010a68) main_mup_eq_pane_t5

0x30ab,	// (0x00010a84) main_mup_eq_pane_t6_ParamLimits

0x30ab,	// (0x00010a84) main_mup_eq_pane_t6

0x30bf,	// (0x00010a98) main_mup_eq_pane_t7_ParamLimits

0x30bf,	// (0x00010a98) main_mup_eq_pane_t7

0x30d3,	// (0x00010aac) main_mup_eq_pane_t8_ParamLimits

0x30d3,	// (0x00010aac) main_mup_eq_pane_t8

0x30e7,	// (0x00010ac0) main_mup_eq_pane_t9_ParamLimits

0x30e7,	// (0x00010ac0) main_mup_eq_pane_t9

0x3101,	// (0x00010ada) main_mup_eq_pane_t10_ParamLimits

0x3101,	// (0x00010ada) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0001ce52) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0001ce52) main_mup_eq_pane_t

0x31b0,	// (0x00010b89) mup_equalizer_pane_cp5_ParamLimits

0x31c4,	// (0x00010b9d) mup_equalizer_pane_cp6_ParamLimits

0x31d8,	// (0x00010bb1) mup_equalizer_pane_cp7_ParamLimits

0x94c0,	// (0x00016e99) main_gallery_pane

0xbfcd,	// (0x000199a6) smil2_volume_pane

0xbfd5,	// (0x000199ae) smil_status_volume_pane_g1_ParamLimits

0xbfe8,	// (0x000199c1) smil_status_volume_pane_g2_ParamLimits

0xbffb,	// (0x000199d4) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0001d008) smil_status_volume_pane_g_ParamLimits

0xc1f9,	// (0x00019bd2) bg_popup_window_pane_cp07_ParamLimits

0xc207,	// (0x00019be0) blid_firmament_pane

0x48cd,	// (0x000122a6) aid_size_cell_gallery_ParamLimits

0x48cd,	// (0x000122a6) aid_size_cell_gallery

0x48e3,	// (0x000122bc) grid_gallery_pane_ParamLimits

0x48e3,	// (0x000122bc) grid_gallery_pane

0x48fc,	// (0x000122d5) cell_gallery_pane_ParamLimits

0x48fc,	// (0x000122d5) cell_gallery_pane

0xc32c,	// (0x00019d05) bg_cell_gallery_focus_pane_ParamLimits

0xc32c,	// (0x00019d05) bg_cell_gallery_focus_pane

0xc33e,	// (0x00019d17) cell_gallery_pane_g1_ParamLimits

0xc33e,	// (0x00019d17) cell_gallery_pane_g1

0x4945,	// (0x0001231e) cell_gallery_pane_g2_ParamLimits

0x4945,	// (0x0001231e) cell_gallery_pane_g2

0x4952,	// (0x0001232b) cell_gallery_pane_g3_ParamLimits

0x4952,	// (0x0001232b) cell_gallery_pane_g3

0xc34a,	// (0x00019d23) cell_gallery_pane_g4_ParamLimits

0xc34a,	// (0x00019d23) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0001d0b6) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0001d0b6) cell_gallery_pane_g

0xc356,	// (0x00019d2f) bg_cell_gallery_focus_pane_g1

0xc35e,	// (0x00019d37) bg_cell_gallery_focus_pane_g2

0xc366,	// (0x00019d3f) bg_cell_gallery_focus_pane_g3

0xc36e,	// (0x00019d47) bg_cell_gallery_focus_pane_g4

0xc376,	// (0x00019d4f) bg_cell_gallery_focus_pane_g5

0xc37e,	// (0x00019d57) bg_cell_gallery_focus_pane_g6

0xc386,	// (0x00019d5f) bg_cell_gallery_focus_pane_g7

0xc38e,	// (0x00019d67) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0001d0bf) bg_cell_gallery_focus_pane_g

0xc396,	// (0x00019d6f) aid_firma_cardinal

0xc3aa,	// (0x00019d83) blid_firmament_pane_t1

0xc3c1,	// (0x00019d9a) blid_firmament_pane_t2

0xc3d8,	// (0x00019db1) blid_firmament_pane_t3

0xc3ef,	// (0x00019dc8) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0001d0d0) blid_firmament_pane_t

0xc406,	// (0x00019ddf) blid_sat_info_pane

0xc416,	// (0x00019def) blid_sat_info_pane_g1

0xc416,	// (0x00019def) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0001d0d9) blid_sat_info_pane_g

0xc420,	// (0x00019df9) blid_sat_info_pane_t1

0xc42e,	// (0x00019e07) smil2_volume_content_pane

0xc437,	// (0x00019e10) smil2_volume_pane_g1

0xc43f,	// (0x00019e18) smil2_volume_content_pane_g1

0xc448,	// (0x00019e21) smil2_volume_content_pane_g2

0xc451,	// (0x00019e2a) smil2_volume_content_pane_g3

0xc45a,	// (0x00019e33) smil2_volume_content_pane_g4

0xc463,	// (0x00019e3c) smil2_volume_content_pane_g5

0xc46c,	// (0x00019e45) smil2_volume_content_pane_g6

0xc475,	// (0x00019e4e) smil2_volume_content_pane_g7

0xc47e,	// (0x00019e57) smil2_volume_content_pane_g8

0xc487,	// (0x00019e60) smil2_volume_content_pane_g9

0xc490,	// (0x00019e69) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0001d0de) smil2_volume_content_pane_g

0x165f,	// (0x0000f038) cale_week_day_heading_pane_t1_ParamLimits

0x1673,	// (0x0000f04c) cale_week_day_heading_pane_t2_ParamLimits

0x1687,	// (0x0000f060) cale_week_day_heading_pane_t3_ParamLimits

0x169b,	// (0x0000f074) cale_week_day_heading_pane_t4_ParamLimits

0x16af,	// (0x0000f088) cale_week_day_heading_pane_t5_ParamLimits

0x16c3,	// (0x0000f09c) cale_week_day_heading_pane_t6_ParamLimits

0x16d9,	// (0x0000f0b2) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0001cbca) cale_week_day_heading_pane_t_ParamLimits

0x9ec8,	// (0x000178a1) bg_cale_side_pane_ParamLimits

0x16ed,	// (0x0000f0c6) cale_week_time_pane_t1_ParamLimits

0x1705,	// (0x0000f0de) cale_week_time_pane_t2_ParamLimits

0x171d,	// (0x0000f0f6) cale_week_time_pane_t3_ParamLimits

0x1735,	// (0x0000f10e) cale_week_time_pane_t4_ParamLimits

0x174d,	// (0x0000f126) cale_week_time_pane_t5_ParamLimits

0x1765,	// (0x0000f13e) cale_week_time_pane_t6_ParamLimits

0x177d,	// (0x0000f156) cale_week_time_pane_t7_ParamLimits

0x1795,	// (0x0000f16e) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0001cbd9) cale_week_time_pane_t_ParamLimits

0x17ad,	// (0x0000f186) cell_cale_week_pane_g2_ParamLimits

0x9ec8,	// (0x000178a1) bg_cale_side_pane_cp01_ParamLimits

0x26b5,	// (0x0001008e) cale_month_week_pane_t1_ParamLimits

0x26cc,	// (0x000100a5) cale_month_week_pane_t2_ParamLimits

0x26e3,	// (0x000100bc) cale_month_week_pane_t3_ParamLimits

0x26fa,	// (0x000100d3) cale_month_week_pane_t4_ParamLimits

0x2711,	// (0x000100ea) cale_month_week_pane_t5_ParamLimits

0x2728,	// (0x00010101) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0001ccb2) cale_month_week_pane_t_ParamLimits

0xa3c8,	// (0x00017da1) cell_cale_month_pane_g1_ParamLimits

0x94c0,	// (0x00016e99) main_cale_event_viewer_pane

0x94c0,	// (0x00016e99) listscroll_cale_event_viewer_pane

0xc499,	// (0x00019e72) list_cale_ev_pane

0xc4a1,	// (0x00019e7a) scroll_pane_cp023

0xc4ad,	// (0x00019e86) field_cale_ev_pane_ParamLimits

0xc4ad,	// (0x00019e86) field_cale_ev_pane

0xc4c7,	// (0x00019ea0) field_cale_ev_content_pane_ParamLimits

0xc4c7,	// (0x00019ea0) field_cale_ev_content_pane

0xc4d3,	// (0x00019eac) field_cale_ev_pane_g1_ParamLimits

0xc4d3,	// (0x00019eac) field_cale_ev_pane_g1

0xc4df,	// (0x00019eb8) field_cale_ev_pane_g2_ParamLimits

0xc4df,	// (0x00019eb8) field_cale_ev_pane_g2

0xc4f7,	// (0x00019ed0) field_cale_ev_pane_g3_ParamLimits

0xc4f7,	// (0x00019ed0) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0001d0f3) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0001d0f3) field_cale_ev_pane_g

0xc50f,	// (0x00019ee8) field_cale_ev_pane_t1_ParamLimits

0xc50f,	// (0x00019ee8) field_cale_ev_pane_t1

0xc526,	// (0x00019eff) field_cale_ev_content_pane_t1_ParamLimits

0xc526,	// (0x00019eff) field_cale_ev_content_pane_t1

0xabf8,	// (0x000185d1) bg_button_pane_cp01

0x9cdb,	// (0x000176b4) listscroll_cale_week_pane_ParamLimits

0x1474,	// (0x0000ee4d) popup_toolbar_window_cp01

0x9eb6,	// (0x0001788f) listscroll_cale_week_pane_t1_ParamLimits

0x9cdb,	// (0x000176b4) listscroll_cale_day_pane_ParamLimits

0x289b,	// (0x00010274) popup_toolbar_window_cp02

0x9eb6,	// (0x0001788f) listscroll_cale_day_pane_t1_ParamLimits

0x9cdb,	// (0x000176b4) main_cale_month_pane_ParamLimits

0x3e71,	// (0x0001184a) popup_toolbar_window_cp03_ParamLimits

0x3e71,	// (0x0001184a) popup_toolbar_window_cp03

0x3523,	// (0x00010efc) main_image_pane_g2_ParamLimits

0x3523,	// (0x00010efc) main_image_pane_g2

0x3534,	// (0x00010f0d) main_image_pane_g3_ParamLimits

0x3534,	// (0x00010f0d) main_image_pane_g3

0x0002,

0xf50b,	// (0x0001cee4) main_image_pane_g_ParamLimits

0xf50b,	// (0x0001cee4) main_image_pane_g

0xad8a,	// (0x00018763) main_image_pane_t1_ParamLimits

0x3545,	// (0x00010f1e) main_image_pane_t2_ParamLimits

0x3545,	// (0x00010f1e) main_image_pane_t2

0x3557,	// (0x00010f30) main_image_pane_t3_ParamLimits

0x3557,	// (0x00010f30) main_image_pane_t3

0x357f,	// (0x00010f58) main_image_pane_t4_ParamLimits

0x357f,	// (0x00010f58) main_image_pane_t4

0x0003,

0xf512,	// (0x0001ceeb) main_image_pane_t_ParamLimits

0xf512,	// (0x0001ceeb) main_image_pane_t

0x359f,	// (0x00010f78) popup_image_details_window_cp01

0x35a9,	// (0x00010f82) popup_toobar_trans_pane_cp01_ParamLimits

0x35a9,	// (0x00010f82) popup_toobar_trans_pane_cp01

0x3d22,	// (0x000116fb) popup_image_details_window_ParamLimits

0x3d22,	// (0x000116fb) popup_image_details_window

0xbf2e,	// (0x00019907) popup_image_focus_window

0x4138,	// (0x00011b11) camera2_autofocus_pane_ParamLimits

0x4138,	// (0x00011b11) camera2_autofocus_pane

0x94c0,	// (0x00016e99) bg_popup_sub_pane_cp06

0xc543,	// (0x00019f1c) popup_image_focus_window_g1

0xc54b,	// (0x00019f24) popup_image_focus_window_g2

0xc553,	// (0x00019f2c) popup_image_focus_window_g3

0xc55b,	// (0x00019f34) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0001d0fa) popup_image_focus_window_g

0xc563,	// (0x00019f3c) popup_image_focus_window_t1

0xc571,	// (0x00019f4a) popup_image_focus_window_t2

0xc581,	// (0x00019f5a) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0001d103) popup_image_focus_window_t

0xc58f,	// (0x00019f68) camera2_autofocus_pane_g1

0x9530,	// (0x00016f09) bg_tb_trans_pane_cp01

0xc59d,	// (0x00019f76) popup_image_details_window_g1

0xc5b0,	// (0x00019f89) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0001d115) popup_image_details_window_g

0xc5d9,	// (0x00019fb2) popup_image_details_window_t1

0xc5eb,	// (0x00019fc4) popup_image_details_window_t2

0xc604,	// (0x00019fdd) popup_image_details_window_t3

0xc618,	// (0x00019ff1) popup_image_details_window_t4

0xc633,	// (0x0001a00c) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0001d11c) popup_image_details_window_t

0x9cad,	// (0x00017686) bg_calc_paper_pane_ParamLimits

0x94c0,	// (0x00016e99) grid_highlight_pane_cp013

0x9cc1,	// (0x0001769a) list_calc_pane_ParamLimits

0x9cd3,	// (0x000176ac) scroll_pane_cp024

0x9cdb,	// (0x000176b4) bg_calc_display_pane_ParamLimits

0x12e0,	// (0x0000ecb9) calc_display_pane_t1_ParamLimits

0x12f2,	// (0x0000eccb) calc_display_pane_t2_ParamLimits

0x9ce7,	// (0x000176c0) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0001cb4c) calc_display_pane_t_ParamLimits

0x13ad,	// (0x0000ed86) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0001cb69) cell_calc_pane_g

0x13b6,	// (0x0000ed8f) cell_calc_pane_t1

0x9d5e,	// (0x00017737) grid_highlight_pane_cp02_ParamLimits

0x9d74,	// (0x0001774d) toolbar_button_pane_cp01_ParamLimits

0x9d74,	// (0x0001774d) toolbar_button_pane_cp01

0xadcf,	// (0x000187a8) temp_image_control_pane_ParamLimits

0xadcf,	// (0x000187a8) temp_image_control_pane

0x9530,	// (0x00016f09) main_mp3_pane

0xc64d,	// (0x0001a026) temp_image_control_pane_g1_ParamLimits

0xc64d,	// (0x0001a026) temp_image_control_pane_g1

0xc65b,	// (0x0001a034) temp_image_control_pane_g2_ParamLimits

0xc65b,	// (0x0001a034) temp_image_control_pane_g2

0xc66d,	// (0x0001a046) temp_image_control_pane_g3_ParamLimits

0xc66d,	// (0x0001a046) temp_image_control_pane_g3

0x498f,	// (0x00012368) temp_image_control_pane_g4_ParamLimits

0x498f,	// (0x00012368) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0001d127) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0001d127) temp_image_control_pane_g

0xc64d,	// (0x0001a026) main_mp3_pane_g1

0x49a2,	// (0x0001237b) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0001d130) main_mp3_pane_g

0xc6b0,	// (0x0001a089) main_mp3_pane_t1

0x9fb1,	// (0x0001798a) main_camera_pane_g8_ParamLimits

0x9fb1,	// (0x0001798a) main_camera_pane_g8

0x1a54,	// (0x0000f42d) main_video_pane_g7_ParamLimits

0x1a54,	// (0x0000f42d) main_video_pane_g7

0xc03b,	// (0x00019a14) main_camera2_pane_t7_ParamLimits

0xc03b,	// (0x00019a14) main_camera2_pane_t7

0xa1b4,	// (0x00017b8d) scroll_pane_cp025_ParamLimits

0xa1b4,	// (0x00017b8d) scroll_pane_cp025

0xa1c8,	// (0x00017ba1) scroll_pane_cp026_ParamLimits

0xa1c8,	// (0x00017ba1) scroll_pane_cp026

0xa1d7,	// (0x00017bb0) wml_content_pane_ParamLimits

0x94c0,	// (0x00016e99) main_touch_calib_pane

0x4a6e,	// (0x00012447) main_touch_calib_pane_g1

0x4a7a,	// (0x00012453) main_touch_calib_pane_g2

0x4a86,	// (0x0001245f) main_touch_calib_pane_g3

0x4a92,	// (0x0001246b) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0001d14e) main_touch_calib_pane_g

0x4a9e,	// (0x00012477) main_touch_calib_pane_t1

0x4ab8,	// (0x00012491) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0001d157) main_touch_calib_pane_t

0xa9b0,	// (0x00018389) mup_progress_pane_cp02

0xa9cf,	// (0x000183a8) navi_pane_g1

0xaa31,	// (0x0001840a) navi_pane_mp_t3

0x9530,	// (0x00016f09) main_mp3_pane_ParamLimits

0x3eaf,	// (0x00011888) navi_pane_ParamLimits

0xc64d,	// (0x0001a026) main_mp3_pane_g1_ParamLimits

0x49a2,	// (0x0001237b) main_mp3_pane_g2_ParamLimits

0x49b0,	// (0x00012389) main_mp3_pane_g3_ParamLimits

0x49b0,	// (0x00012389) main_mp3_pane_g3

0x49be,	// (0x00012397) main_mp3_pane_g4_ParamLimits

0x49be,	// (0x00012397) main_mp3_pane_g4

0xc67d,	// (0x0001a056) main_mp3_pane_g5_ParamLimits

0xc67d,	// (0x0001a056) main_mp3_pane_g5

0xc68b,	// (0x0001a064) main_mp3_pane_g6_ParamLimits

0xc68b,	// (0x0001a064) main_mp3_pane_g6

0xc698,	// (0x0001a071) main_mp3_pane_g7_ParamLimits

0xc698,	// (0x0001a071) main_mp3_pane_g7

0xc6a4,	// (0x0001a07d) main_mp3_pane_g8_ParamLimits

0xc6a4,	// (0x0001a07d) main_mp3_pane_g8

0xf757,	// (0x0001d130) main_mp3_pane_g_ParamLimits

0x49cc,	// (0x000123a5) main_mp3_pane_t2

0x49da,	// (0x000123b3) main_mp3_pane_t3

0xc6be,	// (0x0001a097) main_mp3_pane_t4

0xc6cc,	// (0x0001a0a5) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0001d141) main_mp3_pane_t

0xc6da,	// (0x0001a0b3) mup_progress_pane_cp01

0x94de,	// (0x00016eb7) aid_zoom_text_secondary2

0xc499,	// (0x00019e72) list_cale_ev2_pane

0xc4a1,	// (0x00019e7a) scroll_pane_cp023_ParamLimits

0x4b0e,	// (0x000124e7) field_cale_ev2_pane_ParamLimits

0x4b0e,	// (0x000124e7) field_cale_ev2_pane

0x4b34,	// (0x0001250d) field_cale_ev2_pane_g1_ParamLimits

0x4b34,	// (0x0001250d) field_cale_ev2_pane_g1

0x4b40,	// (0x00012519) field_cale_ev2_pane_g2_ParamLimits

0x4b40,	// (0x00012519) field_cale_ev2_pane_g2

0x4b58,	// (0x00012531) field_cale_ev2_pane_g3_ParamLimits

0x4b58,	// (0x00012531) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0001d162) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0001d162) field_cale_ev2_pane_g

0xc6ee,	// (0x0001a0c7) field_cale_ev2_pane_t1_ParamLimits

0xc6ee,	// (0x0001a0c7) field_cale_ev2_pane_t1

0xc705,	// (0x0001a0de) field_cale_ev2_pane_t2_ParamLimits

0xc705,	// (0x0001a0de) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0001d16b) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0001d16b) field_cale_ev2_pane_t

0x33d3,	// (0x00010dac) main_postcard_pane_g5_ParamLimits

0x33d3,	// (0x00010dac) main_postcard_pane_g5

0x33e9,	// (0x00010dc2) main_postcard_pane_g6_ParamLimits

0x33e9,	// (0x00010dc2) main_postcard_pane_g6

0x1804,	// (0x0000f1dd) camera2_autofocus_pane_cp_ParamLimits

0x1804,	// (0x0000f1dd) camera2_autofocus_pane_cp

0x9530,	// (0x00016f09) main_mup3_pane

0x4b90,	// (0x00012569) main_mup3_pane_g1_ParamLimits

0x4b90,	// (0x00012569) main_mup3_pane_g1

0x4bb2,	// (0x0001258b) main_mup3_pane_g2_ParamLimits

0x4bb2,	// (0x0001258b) main_mup3_pane_g2

0x4c33,	// (0x0001260c) main_mup3_pane_g3_ParamLimits

0x4c33,	// (0x0001260c) main_mup3_pane_g3

0x4c75,	// (0x0001264e) main_mup3_pane_g4_ParamLimits

0x4c75,	// (0x0001264e) main_mup3_pane_g4

0x4cb7,	// (0x00012690) main_mup3_pane_g5_ParamLimits

0x4cb7,	// (0x00012690) main_mup3_pane_g5

0x4cfb,	// (0x000126d4) main_mup3_pane_g6_ParamLimits

0x4cfb,	// (0x000126d4) main_mup3_pane_g6

0xc71a,	// (0x0001a0f3) main_mup3_pane_g7_ParamLimits

0xc71a,	// (0x0001a0f3) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0001d17b) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0001d17b) main_mup3_pane_g

0x4d77,	// (0x00012750) main_mup3_pane_t1_ParamLimits

0x4d77,	// (0x00012750) main_mup3_pane_t1

0x4deb,	// (0x000127c4) main_mup3_pane_t2_ParamLimits

0x4deb,	// (0x000127c4) main_mup3_pane_t2

0x4ebf,	// (0x00012898) main_mup3_pane_t4_ParamLimits

0x4ebf,	// (0x00012898) main_mup3_pane_t4

0x4f19,	// (0x000128f2) main_mup3_pane_t5_ParamLimits

0x4f19,	// (0x000128f2) main_mup3_pane_t5

0x4fcd,	// (0x000129a6) main_mup3_pane_t6_ParamLimits

0x4fcd,	// (0x000129a6) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0001d18c) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0001d18c) main_mup3_pane_t

0x5081,	// (0x00012a5a) mup3_progress_pane_ParamLimits

0x5081,	// (0x00012a5a) mup3_progress_pane

0x50fd,	// (0x00012ad6) popup_mup3_control_window_ParamLimits

0x50fd,	// (0x00012ad6) popup_mup3_control_window

0xc728,	// (0x0001a101) popup_mup3_text_window

0x512f,	// (0x00012b08) mup3_progress_pane_t1

0x5146,	// (0x00012b1f) mup3_progress_pane_t2

0xc730,	// (0x0001a109) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0001d199) mup3_progress_pane_t

0xc747,	// (0x0001a120) mup_progress_pane_cp03

0x94c0,	// (0x00016e99) bg_tb_trans_pane_cp04

0x515d,	// (0x00012b36) mup3_volume_pane

0x5165,	// (0x00012b3e) popup_mup3_control_window_g1

0x516e,	// (0x00012b47) mup3_volume_pane_g1

0x5177,	// (0x00012b50) mup3_volume_pane_g2

0x5180,	// (0x00012b59) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0001d1a0) mup3_volume_pane_g

0x94c0,	// (0x00016e99) bg_tb_trans_pane_cp03

0xc757,	// (0x0001a130) popup_mup3_text_window_g1

0xc75f,	// (0x0001a138) popup_mup3_text_window_t1

0x9d35,	// (0x0001770e) list_calc_item_pane_g1_ParamLimits

0xc123,	// (0x00019afc) mup_volume_pane_cp_g1

0x4ad2,	// (0x000124ab) main_touch_calib_pane_t3

0x4ae6,	// (0x000124bf) main_touch_calib_pane_t4

0x4afa,	// (0x000124d3) main_touch_calib_pane_t5

0x94ca,	// (0x00016ea3) aid_cell_size_toolbar2

0x94d2,	// (0x00016eab) aid_popup3_width_pane

0x94de,	// (0x00016eb7) aid_zoom_text_msg_primary

0x9f7e,	// (0x00017957) vorec_t7

0x9cf9,	// (0x000176d2) bg_calc_paper_pane_g1_ParamLimits

0x9d05,	// (0x000176de) bg_calc_paper_pane_g2_ParamLimits

0x9d11,	// (0x000176ea) bg_calc_paper_pane_g3_ParamLimits

0x9d1d,	// (0x000176f6) bg_calc_paper_pane_g4_ParamLimits

0x9d29,	// (0x00017702) bg_calc_paper_pane_g5_ParamLimits

0x1339,	// (0x0000ed12) bg_calc_paper_pane_g6_ParamLimits

0x1348,	// (0x0000ed21) bg_calc_paper_pane_g7_ParamLimits

0x1357,	// (0x0000ed30) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0001cb53) bg_calc_paper_pane_g_ParamLimits

0x136a,	// (0x0000ed43) calc_bg_paper_pane_g9_ParamLimits

0x195e,	// (0x0000f337) image_qvga_pane_ParamLimits

0x195e,	// (0x0000f337) image_qvga_pane

0x9baa,	// (0x00017583) bg_popup_sub_pane_cp04_ParamLimits

0xad06,	// (0x000186df) popup_mup_playback_window_g1_ParamLimits

0xad12,	// (0x000186eb) popup_mup_playback_window_t1_ParamLimits

0xad27,	// (0x00018700) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0001cedf) popup_mup_playback_window_t_ParamLimits

0x462f,	// (0x00012008) main_mup2_pane_g3_ParamLimits

0x462f,	// (0x00012008) main_mup2_pane_g3

0x1cb5,	// (0x0000f68e) popup_toolbar_window_cp04

0xb11c,	// (0x00018af5) popup_call2_audio_second_window_g3_ParamLimits

0xb11c,	// (0x00018af5) popup_call2_audio_second_window_g3

0xb526,	// (0x00018eff) popup_call2_audio_first_window_g4_ParamLimits

0xb526,	// (0x00018eff) popup_call2_audio_first_window_g4

0xbba5,	// (0x0001957e) popup_call2_audio_in_window_g4_ParamLimits

0xbba5,	// (0x0001957e) popup_call2_audio_in_window_g4

0x3505,	// (0x00010ede) aid_area_sk_bg_cut_ParamLimits

0x3505,	// (0x00010ede) aid_area_sk_bg_cut

0xad3c,	// (0x00018715) aid_area_sk_bg_cut_2_ParamLimits

0xad3c,	// (0x00018715) aid_area_sk_bg_cut_2

0x4935,	// (0x0001230e) aid_placing_details_win

0x493d,	// (0x00012316) aid_placing_details_win_2

0xc58f,	// (0x00019f68) camera2_autofocus_pane_g1_ParamLimits

0x0f7b,	// (0x0000e954) popup_fixed_preview_cale_window_ParamLimits

0x0f7b,	// (0x0000e954) popup_fixed_preview_cale_window

0xaa89,	// (0x00018462) navi_slider_pane_g3

0xaa92,	// (0x0001846b) navi_slider_pane_g4

0xaa9b,	// (0x00018474) navi_slider_pane_g5

0xaa89,	// (0x00018462) navi_slider_pane_g6

0xaaa4,	// (0x0001847d) navi_slider_pane_g7

0xabc5,	// (0x0001859e) mup_scale_pane_g3

0xabce,	// (0x000185a7) mup_scale_pane_g4

0xabd7,	// (0x000185b0) mup_scale_pane_g5

0x31ec,	// (0x00010bc5) mup_scale_pane_g6

0x31f5,	// (0x00010bce) mup_scale_pane_g7

0xaa89,	// (0x00018462) cams2_slider_pane_g3

0xc1d8,	// (0x00019bb1) cams2_slider_pane_g4

0xc1e0,	// (0x00019bb9) cams2_slider_pane_g5

0xaa89,	// (0x00018462) cams2_slider_pane_g6

0xc1e8,	// (0x00019bc1) cams2_slider_pane_g7

0xc416,	// (0x00019def) camera2_autofocus_pane_cp_g1

0xc76d,	// (0x0001a146) bg_popup_preview_window_pane_cp02_ParamLimits

0xc76d,	// (0x0001a146) bg_popup_preview_window_pane_cp02

0xc779,	// (0x0001a152) list_fp_cale_pane_ParamLimits

0xc779,	// (0x0001a152) list_fp_cale_pane

0xc785,	// (0x0001a15e) popup_fixed_preview_cale_window_t1_ParamLimits

0xc785,	// (0x0001a15e) popup_fixed_preview_cale_window_t1

0x5189,	// (0x00012b62) popup_fixed_preview_cale_window_t2_ParamLimits

0x5189,	// (0x00012b62) popup_fixed_preview_cale_window_t2

0x519e,	// (0x00012b77) popup_fixed_preview_cale_window_t3_ParamLimits

0x519e,	// (0x00012b77) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0001d1a7) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0001d1a7) popup_fixed_preview_cale_window_t

0x51b3,	// (0x00012b8c) list_single_fp_cale_pane_ParamLimits

0x51b3,	// (0x00012b8c) list_single_fp_cale_pane

0xc7a3,	// (0x0001a17c) list_single_fp_cale_pane_g1_ParamLimits

0xc7a3,	// (0x0001a17c) list_single_fp_cale_pane_g1

0xc7af,	// (0x0001a188) list_single_fp_cale_pane_g2_ParamLimits

0xc7af,	// (0x0001a188) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0001d1ae) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0001d1ae) list_single_fp_cale_pane_g

0xc7c8,	// (0x0001a1a1) list_single_fp_cale_pane_t1_ParamLimits

0xc7c8,	// (0x0001a1a1) list_single_fp_cale_pane_t1

0xc7da,	// (0x0001a1b3) list_single_fp_cale_pane_t2_ParamLimits

0xc7da,	// (0x0001a1b3) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0001d1b5) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0001d1b5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94c0,	// (0x00016e99) main_dialer_pane

0x51cb,	// (0x00012ba4) aid_cell_size_keypad

0x51d5,	// (0x00012bae) dialer_ne_pane

0x51dd,	// (0x00012bb6) grid_dialer_command_1_pane

0x51e5,	// (0x00012bbe) grid_dialer_command_2_pane

0x51ed,	// (0x00012bc6) grid_dialer_keypad_pane

0x51ff,	// (0x00012bd8) bg_popup_call_pane_cp06_ParamLimits

0x51ff,	// (0x00012bd8) bg_popup_call_pane_cp06

0x520b,	// (0x00012be4) dialer_ne_clear_pane_ParamLimits

0x520b,	// (0x00012be4) dialer_ne_clear_pane

0xc80d,	// (0x0001a1e6) dialer_ne_pane_g1

0xc815,	// (0x0001a1ee) dialer_ne_pane_t1_ParamLimits

0xc815,	// (0x0001a1ee) dialer_ne_pane_t1

0x5217,	// (0x00012bf0) dialer_ne_pane_t2_ParamLimits

0x5217,	// (0x00012bf0) dialer_ne_pane_t2

0x5241,	// (0x00012c1a) dialer_ne_pane_t3_ParamLimits

0x5241,	// (0x00012c1a) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0001d1ba) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0001d1ba) dialer_ne_pane_t

0x5271,	// (0x00012c4a) dialer_ne_pane_t3_copy1_ParamLimits

0x5271,	// (0x00012c4a) dialer_ne_pane_t3_copy1

0x52a0,	// (0x00012c79) cell_dialer_keypad_pane_ParamLimits

0x52a0,	// (0x00012c79) cell_dialer_keypad_pane

0x52b7,	// (0x00012c90) cell_dialer_command_1_pane_ParamLimits

0x52b7,	// (0x00012c90) cell_dialer_command_1_pane

0x52cd,	// (0x00012ca6) cell_dialer_command_2_pane_ParamLimits

0x52cd,	// (0x00012ca6) cell_dialer_command_2_pane

0xc827,	// (0x0001a200) bg_button_pane_cp02_ParamLimits

0xc827,	// (0x0001a200) bg_button_pane_cp02

0x52dc,	// (0x00012cb5) cell_dialer_keypad_pane_g1_ParamLimits

0x52dc,	// (0x00012cb5) cell_dialer_keypad_pane_g1

0xc827,	// (0x0001a200) bg_button_pane_cp03_ParamLimits

0xc827,	// (0x0001a200) bg_button_pane_cp03

0x52f1,	// (0x00012cca) cell_dialer_command_1_pane_g1_ParamLimits

0x52f1,	// (0x00012cca) cell_dialer_command_1_pane_g1

0xc833,	// (0x0001a20c) bg_button_pane_cp04

0x5305,	// (0x00012cde) cell_dialer_command_2_pane_g1

0xaa6f,	// (0x00018448) bg_button_pane_cp06

0xc83b,	// (0x0001a214) dialer_ne_clear_pane_g1

0x2d2a,	// (0x00010703) navi_pane_g2

0x2d58,	// (0x00010731) navi_pane_g3

0x0002,

0xf409,	// (0x0001cde2) navi_pane_g

0x2d81,	// (0x0001075a) navi_pane_mv_g2

0x2da8,	// (0x00010781) navi_pane_mv_g5

0x2db0,	// (0x00010789) navi_pane_mv_t1

0x9cdb,	// (0x000176b4) main_clock2_pane

0x5338,	// (0x00012d11) main_clock2_list_pane_ParamLimits

0x5338,	// (0x00012d11) main_clock2_list_pane

0x536e,	// (0x00012d47) main_clock2_pane_t1_ParamLimits

0x536e,	// (0x00012d47) main_clock2_pane_t1

0x53ac,	// (0x00012d85) main_clock2_pane_t2_ParamLimits

0x53ac,	// (0x00012d85) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0001d1c1) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0001d1c1) main_clock2_pane_t

0x5436,	// (0x00012e0f) popup_clock_analogue_window_cp03_ParamLimits

0x5436,	// (0x00012e0f) popup_clock_analogue_window_cp03

0x545d,	// (0x00012e36) popup_clock_digital_window_cp02_ParamLimits

0x545d,	// (0x00012e36) popup_clock_digital_window_cp02

0x54d2,	// (0x00012eab) main_clock2_list_single_pane_ParamLimits

0x54d2,	// (0x00012eab) main_clock2_list_single_pane

0xaa6f,	// (0x00018448) list_highlight_pane_cp05

0xc843,	// (0x0001a21c) main_clock2_list_single_pane_t1

0x1cb5,	// (0x0000f68e) popup_toolbar_window_cp04_ParamLimits

0x495f,	// (0x00012338) camera2_autofocus_pane_g2_ParamLimits

0x495f,	// (0x00012338) camera2_autofocus_pane_g2

0x496b,	// (0x00012344) camera2_autofocus_pane_g3_ParamLimits

0x496b,	// (0x00012344) camera2_autofocus_pane_g3

0x4977,	// (0x00012350) camera2_autofocus_pane_g4_ParamLimits

0x4977,	// (0x00012350) camera2_autofocus_pane_g4

0x4983,	// (0x0001235c) camera2_autofocus_pane_g5_ParamLimits

0x4983,	// (0x0001235c) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0001d10a) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0001d10a) camera2_autofocus_pane_g

0x4b70,	// (0x00012549) camera2_autofocus_pane_cp_g2

0x4b78,	// (0x00012551) camera2_autofocus_pane_cp_g3

0x4b80,	// (0x00012559) camera2_autofocus_pane_cp_g4

0x4b88,	// (0x00012561) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0001d170) camera2_autofocus_pane_cp_g

0x51f7,	// (0x00012bd0) popup_dialer_spcha_window

0x94c0,	// (0x00016e99) bg_popup_sub_pane_cp07

0xc851,	// (0x0001a22a) list_spcha_pane

0xc859,	// (0x0001a232) list_single_spcha_pane_ParamLimits

0xc859,	// (0x0001a232) list_single_spcha_pane

0x94c0,	// (0x00016e99) list_highlight_pane_cp06

0xc86a,	// (0x0001a243) list_single_spcha_pane_t1

0xb94f,	// (0x00019328) popup_call2_audio_out_window_g4_ParamLimits

0xb94f,	// (0x00019328) popup_call2_audio_out_window_g4

0x94c0,	// (0x00016e99) main_imed2_pane

0xbf36,	// (0x0001990f) popup_imed_adjust2_window

0x3d3a,	// (0x00011713) popup_imed_trans_window_ParamLimits

0x3d3a,	// (0x00011713) popup_imed_trans_window

0xc252,	// (0x00019c2b) popup_blid_sat_info2_window_t1

0xc260,	// (0x00019c39) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0001d09f) popup_blid_sat_info2_window_t

0x557c,	// (0x00012f55) aid_size_cell_colour_35

0x559c,	// (0x00012f75) aid_size_cell_colour_112

0x55bc,	// (0x00012f95) aid_size_cell_effect

0xbf0e,	// (0x000198e7) bg_tb_trans_pane_cp02

0xa4bd,	// (0x00017e96) heading_imed_pane

0x55dc,	// (0x00012fb5) listscroll_imed_pane

0xc878,	// (0x0001a251) heading_imed_pane_g1

0xc880,	// (0x0001a259) heading_imed_pane_t1

0xc88e,	// (0x0001a267) grid_imed_colour_35_pane_ParamLimits

0xc88e,	// (0x0001a267) grid_imed_colour_35_pane

0x55e8,	// (0x00012fc1) grid_imed_effect_pane

0xc8a9,	// (0x0001a282) list_imed_aspect_pane

0x55fd,	// (0x00012fd6) scroll_pane_cp027_ParamLimits

0x55fd,	// (0x00012fd6) scroll_pane_cp027

0x560e,	// (0x00012fe7) cell_imed_effect_pane_ParamLimits

0x560e,	// (0x00012fe7) cell_imed_effect_pane

0xc8b1,	// (0x0001a28a) cell_imed_colour_pane_ParamLimits

0xc8b1,	// (0x0001a28a) cell_imed_colour_pane

0xc8f3,	// (0x0001a2cc) cell_imed_colour_pane_g1_ParamLimits

0xc8f3,	// (0x0001a2cc) cell_imed_colour_pane_g1

0xc904,	// (0x0001a2dd) hgihlgiht_grid_pane_cp016_ParamLimits

0xc904,	// (0x0001a2dd) hgihlgiht_grid_pane_cp016

0x5635,	// (0x0001300e) cell_imed_effect_pane_g1

0x563d,	// (0x00013016) grid_highlight_pane_cp017

0x9e5e,	// (0x00017837) list_imed_single_pane_ParamLimits

0x9e5e,	// (0x00017837) list_imed_single_pane

0x94c0,	// (0x00016e99) list_highlight_pane_cp07

0xc915,	// (0x0001a2ee) list_imed_aspect_pane_comp1_t1

0xbf0e,	// (0x000198e7) bg_tb_trans_pane_cp05

0xc937,	// (0x0001a310) popup_imed_adjust2_window_g1

0xc95e,	// (0x0001a337) popup_imed_adjust2_window_t1

0xc976,	// (0x0001a34f) slider_imed_adjust_pane

0xc98a,	// (0x0001a363) slider_imed_adjust_pane_g1

0xc99a,	// (0x0001a373) slider_imed_adjust_pane_g2

0xc9aa,	// (0x0001a383) slider_imed_adjust_pane_g3

0xc9bb,	// (0x0001a394) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0001d1de) slider_imed_adjust_pane_g

0x5646,	// (0x0001301f) aid_size_cell_clipart2

0x5652,	// (0x0001302b) grid_imed_clipart_pane

0xc9cc,	// (0x0001a3a5) scroll_pane_cp031

0x565c,	// (0x00013035) cell_imed_clipart_pane_ParamLimits

0x565c,	// (0x00013035) cell_imed_clipart_pane

0x5683,	// (0x0001305c) cell_imed_clipart_pane_g1

0x94c0,	// (0x00016e99) grid_highlight_pane_cp014

0x534d,	// (0x00012d26) main_clock2_pane_g1_ParamLimits

0x534d,	// (0x00012d26) main_clock2_pane_g1

0x547d,	// (0x00012e56) aid_call2_pane_cp10

0x548f,	// (0x00012e68) aid_call_pane_cp10

0xa9a4,	// (0x0001837d) popup_clock_analogue_window_cp10_g1

0xa9a4,	// (0x0001837d) popup_clock_analogue_window_cp10_g2

0x54a1,	// (0x00012e7a) popup_clock_analogue_window_cp10_g3

0x54a1,	// (0x00012e7a) popup_clock_analogue_window_cp10_g4

0xa9a4,	// (0x0001837d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0001d1cc) popup_clock_analogue_window_cp10_g

0x54b3,	// (0x00012e8c) popup_clock_analogue_window_cp10_t1

0x54e4,	// (0x00012ebd) clock_digital_number_pane_cp10_ParamLimits

0x54e4,	// (0x00012ebd) clock_digital_number_pane_cp10

0x54fc,	// (0x00012ed5) clock_digital_number_pane_cp11_ParamLimits

0x54fc,	// (0x00012ed5) clock_digital_number_pane_cp11

0x5514,	// (0x00012eed) clock_digital_number_pane_cp12_ParamLimits

0x5514,	// (0x00012eed) clock_digital_number_pane_cp12

0x552c,	// (0x00012f05) clock_digital_number_pane_cp13_ParamLimits

0x552c,	// (0x00012f05) clock_digital_number_pane_cp13

0x5544,	// (0x00012f1d) clock_digital_separator_pane_cp10_ParamLimits

0x5544,	// (0x00012f1d) clock_digital_separator_pane_cp10

0x555c,	// (0x00012f35) popup_clock_digital_window_cp02_t1_ParamLimits

0x555c,	// (0x00012f35) popup_clock_digital_window_cp02_t1

0x9ba2,	// (0x0001757b) clock_digital_number_pane_cp10_g1

0x9ba2,	// (0x0001757b) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0001d1e7) clock_digital_number_pane_cp10_g

0x9ba2,	// (0x0001757b) clock_digital_separator_pane_cp10_g1

0x9ba2,	// (0x0001757b) clock_digital_separator_pane_g2_cp10

0xaa3f,	// (0x00018418) navi_pane_vded_g4

0xaa48,	// (0x00018421) navi_pane_vded_g5

0xaa51,	// (0x0001842a) navi_pane_vded_t1

0x94c0,	// (0x00016e99) main_vded_pane

0x568c,	// (0x00013065) main_vded_pane_g1

0x5698,	// (0x00013071) main_vded_pane_g2

0x56a2,	// (0x0001307b) main_vded_pane_g3

0x0002,

0xf813,	// (0x0001d1ec) main_vded_pane_g

0x56ac,	// (0x00013085) main_vded_pane_t1

0x56ba,	// (0x00013093) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0001d1f3) main_vded_pane_t

0x56c8,	// (0x000130a1) vded_slider_pane

0x56d2,	// (0x000130ab) vded_video_pane

0xc9d4,	// (0x0001a3ad) vded_video_pane_g1

0x56dc,	// (0x000130b5) vded_video_pane_g2

0xc416,	// (0x00019def) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0001d1f8) vded_video_pane_g

0xc9de,	// (0x0001a3b7) vded_slider_pane_g1

0xc123,	// (0x00019afc) vded_slider_pane_g2

0xc9e7,	// (0x0001a3c0) vded_slider_pane_g3

0xc9f0,	// (0x0001a3c9) vded_slider_pane_g4

0xc9f9,	// (0x0001a3d2) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0001d1ff) vded_slider_pane_g

0x50e5,	// (0x00012abe) mup3_rocker_pane_ParamLimits

0x50e5,	// (0x00012abe) mup3_rocker_pane

0x56e5,	// (0x000130be) mup3_control_keys_pane_g1

0x56ed,	// (0x000130c6) mup3_control_keys_pane_g2

0x56f5,	// (0x000130ce) mup3_control_keys_pane_g3

0x56fd,	// (0x000130d6) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0001d20a) mup3_control_keys_pane_g

0x0fb2,	// (0x0000e98b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0fb2,	// (0x0000e98b) popup_toolbar2_fixed_window_cp01

0x5119,	// (0x00012af2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5119,	// (0x00012af2) popup_toolbar2_fixed_window_cp02

0xb28e,	// (0x00018c67) popup_call2_audio_second_window_t4_ParamLimits

0xb28e,	// (0x00018c67) popup_call2_audio_second_window_t4

0xb7bc,	// (0x00019195) popup_call2_audio_first_window_t6_ParamLimits

0xb7bc,	// (0x00019195) popup_call2_audio_first_window_t6

0xba52,	// (0x0001942b) popup_call2_audio_out_window_t6_ParamLimits

0xba52,	// (0x0001942b) popup_call2_audio_out_window_t6

0x94c0,	// (0x00016e99) main_vitu_pane

0x570d,	// (0x000130e6) aid_size_cell_itu_ParamLimits

0x570d,	// (0x000130e6) aid_size_cell_itu

0x9530,	// (0x00016f09) bg_popup_window_pane_cp08_ParamLimits

0x9530,	// (0x00016f09) bg_popup_window_pane_cp08

0x5723,	// (0x000130fc) field_vitu_entry_pane_ParamLimits

0x5723,	// (0x000130fc) field_vitu_entry_pane

0x573a,	// (0x00013113) grid_vitu_function_pane_ParamLimits

0x573a,	// (0x00013113) grid_vitu_function_pane

0x5755,	// (0x0001312e) grid_vitu_itu_pane_ParamLimits

0x5755,	// (0x0001312e) grid_vitu_itu_pane

0x5773,	// (0x0001314c) cell_vitu_itu_pane_ParamLimits

0x5773,	// (0x0001314c) cell_vitu_itu_pane

0x5797,	// (0x00013170) cell_vitu_function_pane_ParamLimits

0x5797,	// (0x00013170) cell_vitu_function_pane

0x9530,	// (0x00016f09) bg_popup_sub_pane_cp08_ParamLimits

0x9530,	// (0x00016f09) bg_popup_sub_pane_cp08

0x57b2,	// (0x0001318b) field_vitu_entry_pane_t1_ParamLimits

0x57b2,	// (0x0001318b) field_vitu_entry_pane_t1

0xca1a,	// (0x0001a3f3) field_vitu_entry_pane_t2_ParamLimits

0xca1a,	// (0x0001a3f3) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0001d218) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0001d218) field_vitu_entry_pane_t

0xca37,	// (0x0001a410) bg_button_pane_cp05_ParamLimits

0xca37,	// (0x0001a410) bg_button_pane_cp05

0x57d2,	// (0x000131ab) cell_vitu_itu_pane_g1

0x57ea,	// (0x000131c3) cell_vitu_itu_pane_t1_ParamLimits

0x57ea,	// (0x000131c3) cell_vitu_itu_pane_t1

0x57fc,	// (0x000131d5) cell_vitu_itu_pane_t2_ParamLimits

0x57fc,	// (0x000131d5) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0001d21d) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0001d21d) cell_vitu_itu_pane_t

0xca45,	// (0x0001a41e) bg_button_pane_cp07

0x5831,	// (0x0001320a) cell_vitu_function_pane_g1

0x9c75,	// (0x0001764e) main_calc_pane_g1

0x0df2,	// (0x0000e7cb) aid_visual_content_pane

0x94c0,	// (0x00016e99) main_vradio_pane

0x583a,	// (0x00013213) main_vradio_pane_g1_ParamLimits

0x583a,	// (0x00013213) main_vradio_pane_g1

0xca4f,	// (0x0001a428) main_vradio_pane_g2_ParamLimits

0xca4f,	// (0x0001a428) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0001d224) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0001d224) main_vradio_pane_g

0x5853,	// (0x0001322c) main_vradio_pane_t1_ParamLimits

0x5853,	// (0x0001322c) main_vradio_pane_t1

0x5868,	// (0x00013241) main_vradio_pane_t2_ParamLimits

0x5868,	// (0x00013241) main_vradio_pane_t2

0xca5c,	// (0x0001a435) main_vradio_pane_t3_ParamLimits

0xca5c,	// (0x0001a435) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0001d229) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0001d229) main_vradio_pane_t

0x587d,	// (0x00013256) vradio_rocker_control_pane_ParamLimits

0x587d,	// (0x00013256) vradio_rocker_control_pane

0x588f,	// (0x00013268) vradio_station_info_pane_ParamLimits

0x588f,	// (0x00013268) vradio_station_info_pane

0xca70,	// (0x0001a449) vradio_frequency_info_pane_ParamLimits

0xca70,	// (0x0001a449) vradio_frequency_info_pane

0xc416,	// (0x00019def) vradio_station_info_pane_g1

0xca7f,	// (0x0001a458) vradio_station_info_pane_t1_ParamLimits

0xca7f,	// (0x0001a458) vradio_station_info_pane_t1

0xcaa1,	// (0x0001a47a) vradio_station_info_pane_t2_ParamLimits

0xcaa1,	// (0x0001a47a) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0001d230) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0001d230) vradio_station_info_pane_t

0xcab3,	// (0x0001a48c) vradio_tuning_pane

0xcabb,	// (0x0001a494) vradio_rocker_control_pane_g1

0xcac3,	// (0x0001a49c) vradio_rocker_control_pane_g2

0xcacb,	// (0x0001a4a4) vradio_rocker_control_pane_g3

0xcad3,	// (0x0001a4ac) vradio_rocker_control_pane_g4

0xcadb,	// (0x0001a4b4) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0001d235) vradio_rocker_control_pane_g

0x58a1,	// (0x0001327a) vradio_frequency_info_pane_g1

0xcae3,	// (0x0001a4bc) vradio_frequency_info_pane_t1_ParamLimits

0xcae3,	// (0x0001a4bc) vradio_frequency_info_pane_t1

0x58ab,	// (0x00013284) vradio_tuning_pane_g1

0x58b6,	// (0x0001328f) vradio_tuning_pane_t1

0x94ee,	// (0x00016ec7) area_side_right_pane_ParamLimits

0x94ee,	// (0x00016ec7) area_side_right_pane

0xbed5,	// (0x000198ae) status_small_pane_g1

0xbedd,	// (0x000198b6) status_small_pane_g2

0xbee6,	// (0x000198bf) status_small_pane_g3

0xbeef,	// (0x000198c8) status_small_pane_g4

0x0003,

0xf61c,	// (0x0001cff5) status_small_pane_g

0xbef8,	// (0x000198d1) status_small_pane_t1

0x94c0,	// (0x00016e99) main_video3_pane

0xcaf7,	// (0x0001a4d0) cams_zoom_vslider_pane

0xcaff,	// (0x0001a4d8) image3_wide_pane_ParamLimits

0xcaff,	// (0x0001a4d8) image3_wide_pane

0xcb19,	// (0x0001a4f2) image3_wide_small_pane

0xcb25,	// (0x0001a4fe) main_video3_pane_g1_ParamLimits

0xcb25,	// (0x0001a4fe) main_video3_pane_g1

0xcb41,	// (0x0001a51a) main_video3_pane_g2_ParamLimits

0xcb41,	// (0x0001a51a) main_video3_pane_g2

0x0001,

0xf867,	// (0x0001d240) main_video3_pane_g_ParamLimits

0xf867,	// (0x0001d240) main_video3_pane_g

0xcb5d,	// (0x0001a536) main_video3_pane_t1_ParamLimits

0xcb5d,	// (0x0001a536) main_video3_pane_t1

0xcb88,	// (0x0001a561) main_video3_pane_t2_ParamLimits

0xcb88,	// (0x0001a561) main_video3_pane_t2

0xcbb3,	// (0x0001a58c) main_video3_pane_t3_ParamLimits

0xcbb3,	// (0x0001a58c) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0001d245) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0001d245) main_video3_pane_t

0xcbe0,	// (0x0001a5b9) cams_zoom_vslider_pane_g1

0xcbe9,	// (0x0001a5c2) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0001d24c) cams_zoom_vslider_pane_g

0xcbf1,	// (0x0001a5ca) small_slider_vertical_pane

0xc416,	// (0x00019def) small_slider_vertical_pane_g1

0xc416,	// (0x00019def) small_slider_vertical_pane_g2

0xcbf9,	// (0x0001a5d2) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0001d251) small_slider_vertical_pane_g

0x94c0,	// (0x00016e99) main_hwr_training_pane

0xcc02,	// (0x0001a5db) hwr_training_instruct_pane_ParamLimits

0xcc02,	// (0x0001a5db) hwr_training_instruct_pane

0x58c5,	// (0x0001329e) hwr_training_navi_pane_ParamLimits

0x58c5,	// (0x0001329e) hwr_training_navi_pane

0x58e4,	// (0x000132bd) hwr_training_write_pane_ParamLimits

0x58e4,	// (0x000132bd) hwr_training_write_pane

0x94c0,	// (0x00016e99) bg_frame_shadow_pane

0xcc47,	// (0x0001a620) hwr_training_write_pane_g1

0xcc4f,	// (0x0001a628) hwr_training_write_pane_g2

0xcc57,	// (0x0001a630) hwr_training_write_pane_g3

0xcc5f,	// (0x0001a638) hwr_training_write_pane_g4

0xcc67,	// (0x0001a640) hwr_training_write_pane_g5

0xcc6f,	// (0x0001a648) hwr_training_write_pane_g6

0xcc77,	// (0x0001a650) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0001d258) hwr_training_write_pane_g

0xcc7f,	// (0x0001a658) hwr_training_navi_pane_g1_ParamLimits

0xcc7f,	// (0x0001a658) hwr_training_navi_pane_g1

0xcc91,	// (0x0001a66a) hwr_training_navi_pane_g2_ParamLimits

0xcc91,	// (0x0001a66a) hwr_training_navi_pane_g2

0xcca3,	// (0x0001a67c) hwr_training_navi_pane_g3_ParamLimits

0xcca3,	// (0x0001a67c) hwr_training_navi_pane_g3

0xccb3,	// (0x0001a68c) hwr_training_navi_pane_g4_ParamLimits

0xccb3,	// (0x0001a68c) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0001d267) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0001d267) hwr_training_navi_pane_g

0xccc0,	// (0x0001a699) hwr_training_navi_pane_t1

0x592e,	// (0x00013307) list_single_hwr_training_instruct_pane_ParamLimits

0x592e,	// (0x00013307) list_single_hwr_training_instruct_pane

0xccce,	// (0x0001a6a7) list_single_hwr_training_instruct_pane_t1

0xc356,	// (0x00019d2f) bg_frame_shadow_pane_g1

0xccdd,	// (0x0001a6b6) bg_frame_shadow_pane_g2

0xcce5,	// (0x0001a6be) bg_frame_shadow_pane_g3

0xcced,	// (0x0001a6c6) bg_frame_shadow_pane_g4

0xccf5,	// (0x0001a6ce) bg_frame_shadow_pane_g5

0xccfd,	// (0x0001a6d6) bg_frame_shadow_pane_g6

0xcd05,	// (0x0001a6de) bg_frame_shadow_pane_g7

0x9dd4,	// (0x000177ad) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0001d272) bg_frame_shadow_pane_g

0x94c0,	// (0x00016e99) main_video_tele_dialer_pane

0x594b,	// (0x00013324) aid_size_cell_video_keypad_ParamLimits

0x594b,	// (0x00013324) aid_size_cell_video_keypad

0x5965,	// (0x0001333e) grid_video_dialer_keypad_pane_ParamLimits

0x5965,	// (0x0001333e) grid_video_dialer_keypad_pane

0x59b1,	// (0x0001338a) video_down_pane_cp_ParamLimits

0x59b1,	// (0x0001338a) video_down_pane_cp

0x59e1,	// (0x000133ba) cell_video_dialer_keypad_pane_ParamLimits

0x59e1,	// (0x000133ba) cell_video_dialer_keypad_pane

0xcd0d,	// (0x0001a6e6) bg_button_pane_cp08_ParamLimits

0xcd0d,	// (0x0001a6e6) bg_button_pane_cp08

0x5a03,	// (0x000133dc) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5a03,	// (0x000133dc) cell_video_dialer_keypad_pane_g1

0x50cf,	// (0x00012aa8) mup3_rocker2_pane_ParamLimits

0x50cf,	// (0x00012aa8) mup3_rocker2_pane

0xc416,	// (0x00019def) mup3_rocker2_pane_g1

0x3c23,	// (0x000115fc) main_dialer2_pane

0x94c0,	// (0x00016e99) main_mp4_pane

0xcd21,	// (0x0001a6fa) main_mp4_pane_g1_ParamLimits

0xcd21,	// (0x0001a6fa) main_mp4_pane_g1

0xcd21,	// (0x0001a6fa) main_mp4_pane_g2_ParamLimits

0xcd21,	// (0x0001a6fa) main_mp4_pane_g2

0x5a3e,	// (0x00013417) main_mp4_pane_g3_ParamLimits

0x5a3e,	// (0x00013417) main_mp4_pane_g3

0xcd2f,	// (0x0001a708) main_mp4_pane_g4_ParamLimits

0xcd2f,	// (0x0001a708) main_mp4_pane_g4

0xcd57,	// (0x0001a730) main_mp4_pane_g5_ParamLimits

0xcd57,	// (0x0001a730) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0001d292) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0001d292) main_mp4_pane_g

0xcda7,	// (0x0001a780) main_mp4_pane_t1_ParamLimits

0xcda7,	// (0x0001a780) main_mp4_pane_t1

0xce03,	// (0x0001a7dc) main_mp4_pane_t2_ParamLimits

0xce03,	// (0x0001a7dc) main_mp4_pane_t2

0xce55,	// (0x0001a82e) main_mp4_pane_t3_ParamLimits

0xce55,	// (0x0001a82e) main_mp4_pane_t3

0xce75,	// (0x0001a84e) main_mp4_pane_t4_ParamLimits

0xce75,	// (0x0001a84e) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0001d29f) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0001d29f) main_mp4_pane_t

0xceb9,	// (0x0001a892) mp4_progress_pane_ParamLimits

0xceb9,	// (0x0001a892) mp4_progress_pane

0xcf03,	// (0x0001a8dc) mp4_rocker_pane_ParamLimits

0xcf03,	// (0x0001a8dc) mp4_rocker_pane

0xcf2b,	// (0x0001a904) mp4_progress_pane_t1

0xcf44,	// (0x0001a91d) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0001d2a8) mp4_progress_pane_t

0xcf5d,	// (0x0001a936) mup_progress_pane_cp04

0xc416,	// (0x00019def) mp4_rocker_pane_g1

0x5a7a,	// (0x00013453) aid_cell_size_keypad2_ParamLimits

0x5a7a,	// (0x00013453) aid_cell_size_keypad2

0x5a90,	// (0x00013469) dialer2_ne_pane_ParamLimits

0x5a90,	// (0x00013469) dialer2_ne_pane

0x5aaa,	// (0x00013483) grid_dialer2_keypad_pane_ParamLimits

0x5aaa,	// (0x00013483) grid_dialer2_keypad_pane

0xc1f9,	// (0x00019bd2) bg_popup_call_pane_cp07_ParamLimits

0xc1f9,	// (0x00019bd2) bg_popup_call_pane_cp07

0x5ac8,	// (0x000134a1) dialer2_ne_pane_t1_ParamLimits

0x5ac8,	// (0x000134a1) dialer2_ne_pane_t1

0x5b07,	// (0x000134e0) cell_dialer2_keypad_pane_ParamLimits

0x5b07,	// (0x000134e0) cell_dialer2_keypad_pane

0xcf7b,	// (0x0001a954) bg_button_pane_pane_cp04_ParamLimits

0xcf7b,	// (0x0001a954) bg_button_pane_pane_cp04

0x5b2b,	// (0x00013504) cell_dialer2_keypad_pane_g1_ParamLimits

0x5b2b,	// (0x00013504) cell_dialer2_keypad_pane_g1

0x1b89,	// (0x0000f562) aid_placing_vt_set_content_ParamLimits

0x1b89,	// (0x0000f562) aid_placing_vt_set_content

0x1bb1,	// (0x0000f58a) aid_placing_vt_set_title_ParamLimits

0x1bb1,	// (0x0000f58a) aid_placing_vt_set_title

0x94c0,	// (0x00016e99) main_image3_pane

0x5bf1,	// (0x000135ca) area_side_right_pane_cp01_ParamLimits

0x5bf1,	// (0x000135ca) area_side_right_pane_cp01

0xcd21,	// (0x0001a6fa) main_image3_pane_g1_ParamLimits

0xcd21,	// (0x0001a6fa) main_image3_pane_g1

0x5c08,	// (0x000135e1) main_image3_pane_g2_ParamLimits

0x5c08,	// (0x000135e1) main_image3_pane_g2

0x5c30,	// (0x00013609) main_image3_pane_g3_ParamLimits

0x5c30,	// (0x00013609) main_image3_pane_g3

0x5c5a,	// (0x00013633) main_image3_pane_g4_ParamLimits

0x5c5a,	// (0x00013633) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0001d2b7) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0001d2b7) main_image3_pane_g

0x5c84,	// (0x0001365d) main_image3_pane_t1_ParamLimits

0x5c84,	// (0x0001365d) main_image3_pane_t1

0x5cdc,	// (0x000136b5) main_image3_pane_t2_ParamLimits

0x5cdc,	// (0x000136b5) main_image3_pane_t2

0x5d2e,	// (0x00013707) main_image3_pane_t3_ParamLimits

0x5d2e,	// (0x00013707) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0001d2c0) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0001d2c0) main_image3_pane_t

0x9530,	// (0x00016f09) grid_sctrl_middle_pane_cp01_ParamLimits

0x9530,	// (0x00016f09) grid_sctrl_middle_pane_cp01

0x5db6,	// (0x0001378f) cell_sctrl_middle_pane_cp01_ParamLimits

0x5db6,	// (0x0001378f) cell_sctrl_middle_pane_cp01

0x5dd3,	// (0x000137ac) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5dd3,	// (0x000137ac) cell_sctrl_middle_pane_cp01_g1

0x94c0,	// (0x00016e99) main_call4_pane

0x5de9,	// (0x000137c2) aid_size_button_call4_ParamLimits

0x5de9,	// (0x000137c2) aid_size_button_call4

0x5e1a,	// (0x000137f3) call4_windows_pane_ParamLimits

0x5e1a,	// (0x000137f3) call4_windows_pane

0x5e3a,	// (0x00013813) grid_call4_button_pane_ParamLimits

0x5e3a,	// (0x00013813) grid_call4_button_pane

0xcfb9,	// (0x0001a992) call4_windows_conf_pane

0xcfce,	// (0x0001a9a7) popup_call4_audio_first_window_ParamLimits

0xcfce,	// (0x0001a9a7) popup_call4_audio_first_window

0xd01a,	// (0x0001a9f3) popup_call4_audio_second_window_ParamLimits

0xd01a,	// (0x0001a9f3) popup_call4_audio_second_window

0xd02e,	// (0x0001aa07) popup_call4_audio_wait_window_ParamLimits

0xd02e,	// (0x0001aa07) popup_call4_audio_wait_window

0x5e67,	// (0x00013840) cell_call4_button_pane_ParamLimits

0x5e67,	// (0x00013840) cell_call4_button_pane

0x5e90,	// (0x00013869) bg_button_pane_cp09_ParamLimits

0x5e90,	// (0x00013869) bg_button_pane_cp09

0x5e9c,	// (0x00013875) cell_call4_button_pane_g1_ParamLimits

0x5e9c,	// (0x00013875) cell_call4_button_pane_g1

0x5ec2,	// (0x0001389b) cell_call4_button_pane_t1_ParamLimits

0x5ec2,	// (0x0001389b) cell_call4_button_pane_t1

0xd076,	// (0x0001aa4f) popup_call4_audio_conf_window_ParamLimits

0xd076,	// (0x0001aa4f) popup_call4_audio_conf_window

0x512f,	// (0x00012b08) mup3_progress_pane_t1_ParamLimits

0x5146,	// (0x00012b1f) mup3_progress_pane_t2_ParamLimits

0xc730,	// (0x0001a109) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0001d199) mup3_progress_pane_t_ParamLimits

0xc747,	// (0x0001a120) mup_progress_pane_cp03_ParamLimits

0x5705,	// (0x000130de) mup3_control_keys_pane_g4_copy1

0xcee7,	// (0x0001a8c0) mp4_rocker2_pane_ParamLimits

0xcee7,	// (0x0001a8c0) mp4_rocker2_pane

0xd08a,	// (0x0001aa63) mp4_rocker2_pane_g1

0xd092,	// (0x0001aa6b) mp4_rocker2_pane_g2

0xd09a,	// (0x0001aa73) mp4_rocker2_pane_g3

0xd0a2,	// (0x0001aa7b) mp4_rocker2_pane_g4

0xd0aa,	// (0x0001aa83) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0001d2c9) mp4_rocker2_pane_g

0x94c0,	// (0x00016e99) main_camera4_pane

0x94c0,	// (0x00016e99) main_video4_pane

0x597f,	// (0x00013358) main_video_tele_dialer_pane_t1_ParamLimits

0x597f,	// (0x00013358) main_video_tele_dialer_pane_t1

0x5998,	// (0x00013371) main_video_tele_dialer_pane_t2_ParamLimits

0x5998,	// (0x00013371) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0001d283) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0001d283) main_video_tele_dialer_pane_t

0x5f04,	// (0x000138dd) cam4_autofocus_pane_ParamLimits

0x5f04,	// (0x000138dd) cam4_autofocus_pane

0x5f1a,	// (0x000138f3) cam4_image_uncrop_pane_ParamLimits

0x5f1a,	// (0x000138f3) cam4_image_uncrop_pane

0x5f34,	// (0x0001390d) cam4_indicators_pane_ParamLimits

0x5f34,	// (0x0001390d) cam4_indicators_pane

0x5f5f,	// (0x00013938) main_camera4_pane_g1_ParamLimits

0x5f5f,	// (0x00013938) main_camera4_pane_g1

0x5f72,	// (0x0001394b) main_camera4_pane_g2_ParamLimits

0x5f72,	// (0x0001394b) main_camera4_pane_g2

0x5f85,	// (0x0001395e) main_camera4_pane_g3_ParamLimits

0x5f85,	// (0x0001395e) main_camera4_pane_g3

0x5f98,	// (0x00013971) main_camera4_pane_g4_ParamLimits

0x5f98,	// (0x00013971) main_camera4_pane_g4

0x5fab,	// (0x00013984) main_camera4_pane_g5_ParamLimits

0x5fab,	// (0x00013984) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0001d2d4) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0001d2d4) main_camera4_pane_g

0x5fcf,	// (0x000139a8) main_camera4_pane_t1_ParamLimits

0x5fcf,	// (0x000139a8) main_camera4_pane_t1

0xc67d,	// (0x0001a056) bg_tb_trans_pane_cp06

0xd0d6,	// (0x0001aaaf) cam4_indicators_pane_g1

0xd0e7,	// (0x0001aac0) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0001d2ef) cam4_indicators_pane_g

0xd105,	// (0x0001aade) cam4_indicators_pane_t1

0x6033,	// (0x00013a0c) main_video4_pane_g1_ParamLimits

0x6033,	// (0x00013a0c) main_video4_pane_g1

0x6046,	// (0x00013a1f) main_video4_pane_g2_ParamLimits

0x6046,	// (0x00013a1f) main_video4_pane_g2

0x605a,	// (0x00013a33) main_video4_pane_g3_ParamLimits

0x605a,	// (0x00013a33) main_video4_pane_g3

0x606e,	// (0x00013a47) main_video4_pane_g4_ParamLimits

0x606e,	// (0x00013a47) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0001d2f6) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0001d2f6) main_video4_pane_g

0x6096,	// (0x00013a6f) vid4_indicators_pane_ParamLimits

0x6096,	// (0x00013a6f) vid4_indicators_pane

0x60c8,	// (0x00013aa1) video4_image_uncrop_cif_pane_ParamLimits

0x60c8,	// (0x00013aa1) video4_image_uncrop_cif_pane

0x60e2,	// (0x00013abb) video4_image_uncrop_nhd_pane_ParamLimits

0x60e2,	// (0x00013abb) video4_image_uncrop_nhd_pane

0x5f1a,	// (0x000138f3) video4_image_uncrop_vga_pane_ParamLimits

0x5f1a,	// (0x000138f3) video4_image_uncrop_vga_pane

0xcc24,	// (0x0001a5fd) bg_tb_trans_pane_cp07

0x60f6,	// (0x00013acf) vid4_indicators_pane_g1

0x6103,	// (0x00013adc) vid4_indicators_pane_g2

0x6110,	// (0x00013ae9) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0001d301) vid4_indicators_pane_g

0x6135,	// (0x00013b0e) vid4_indicators_pane_t1

0x6147,	// (0x00013b20) cam4_autofocus_pane_g1

0x614f,	// (0x00013b28) cam4_autofocus_pane_g2

0x6157,	// (0x00013b30) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0001d30c) cam4_autofocus_pane_g

0x615f,	// (0x00013b38) cam4_autofocus_pane_g3_copy1

0x59c5,	// (0x0001339e) video_down_pane_cp_t1

0x59d3,	// (0x000133ac) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0001d288) video_down_pane_cp_t

0x9530,	// (0x00016f09) popup_vitu2_window_ParamLimits

0x9530,	// (0x00016f09) popup_vitu2_window

0x6167,	// (0x00013b40) aid_size_cell2_itu2_ParamLimits

0x6167,	// (0x00013b40) aid_size_cell2_itu2

0x618d,	// (0x00013b66) aid_size_cell_itu2_ParamLimits

0x618d,	// (0x00013b66) aid_size_cell_itu2

0x61e9,	// (0x00013bc2) bg_popup_window_pane_cp09_ParamLimits

0x61e9,	// (0x00013bc2) bg_popup_window_pane_cp09

0x61f7,	// (0x00013bd0) field_vitu2_entry_pane_ParamLimits

0x61f7,	// (0x00013bd0) field_vitu2_entry_pane

0x621d,	// (0x00013bf6) grid_vitu2_function_pane_ParamLimits

0x621d,	// (0x00013bf6) grid_vitu2_function_pane

0x626e,	// (0x00013c47) grid_vitu2_itu_pane_ParamLimits

0x626e,	// (0x00013c47) grid_vitu2_itu_pane

0x62ff,	// (0x00013cd8) cell_vitu2_itu_pane_ParamLimits

0x62ff,	// (0x00013cd8) cell_vitu2_itu_pane

0x6323,	// (0x00013cfc) cell_vitu2_function_pane_ParamLimits

0x6323,	// (0x00013cfc) cell_vitu2_function_pane

0xd12f,	// (0x0001ab08) bg_popup_call_pane_cp08_ParamLimits

0xd12f,	// (0x0001ab08) bg_popup_call_pane_cp08

0xd148,	// (0x0001ab21) field_vitu2_entry_pane_g1

0xd154,	// (0x0001ab2d) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0001d313) field_vitu2_entry_pane_g

0xd16e,	// (0x0001ab47) field_vitu2_entry_pane_t1_ParamLimits

0xd16e,	// (0x0001ab47) field_vitu2_entry_pane_t1

0xd19f,	// (0x0001ab78) field_vitu2_entry_pane_t2_ParamLimits

0xd19f,	// (0x0001ab78) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0001d31a) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0001d31a) field_vitu2_entry_pane_t

0x6362,	// (0x00013d3b) bg_button_pane_cp010_ParamLimits

0x6362,	// (0x00013d3b) bg_button_pane_cp010

0x6370,	// (0x00013d49) cell_vitu2_itu_pane_g1

0x638e,	// (0x00013d67) cell_vitu2_itu_pane_t1_ParamLimits

0x638e,	// (0x00013d67) cell_vitu2_itu_pane_t1

0x63f4,	// (0x00013dcd) cell_vitu2_itu_pane_t2_ParamLimits

0x63f4,	// (0x00013dcd) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0001d324) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0001d324) cell_vitu2_itu_pane_t

0x9530,	// (0x00016f09) bg_button_pane_cp011

0x64d0,	// (0x00013ea9) cell_vitu2_function_pane_g1

0x94c0,	// (0x00016e99) main_myfav_hc_pane

0x5d7e,	// (0x00013757) popup_image3_note_pane_ParamLimits

0x5d7e,	// (0x00013757) popup_image3_note_pane

0x5d9a,	// (0x00013773) popup_image3_tool_bar_pane_ParamLimits

0x5d9a,	// (0x00013773) popup_image3_tool_bar_pane

0x6478,	// (0x00013e51) cell_vitu2_itu_pane_t3_ParamLimits

0x6478,	// (0x00013e51) cell_vitu2_itu_pane_t3

0x94c0,	// (0x00016e99) bg_popup_trans_pane

0xd1c4,	// (0x0001ab9d) grid_image3_tool_bar_pane

0xd1ce,	// (0x0001aba7) bg_popup_trans_pane_g1

0xa2bd,	// (0x00017c96) bg_popup_trans_pane_g2

0xd1d6,	// (0x0001abaf) bg_popup_trans_pane_g3

0xd1de,	// (0x0001abb7) bg_popup_trans_pane_g4

0xd1e6,	// (0x0001abbf) bg_popup_trans_pane_g5

0xd1ee,	// (0x0001abc7) bg_popup_trans_pane_g6

0xd1f6,	// (0x0001abcf) bg_popup_trans_pane_g7

0xd1fe,	// (0x0001abd7) bg_popup_trans_pane_g8

0xa29d,	// (0x00017c76) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0001d32b) bg_popup_trans_pane_g

0xd206,	// (0x0001abdf) cell_image3_tool_bar_pane_ParamLimits

0xd206,	// (0x0001abdf) cell_image3_tool_bar_pane

0xc416,	// (0x00019def) cell_image3_tool_bar_pane_g1

0x94c0,	// (0x00016e99) bg_popup_trans_pane_cp1

0xd21a,	// (0x0001abf3) popup_image3_note_pane_t1

0xd228,	// (0x0001ac01) popup_image3_note_pane_t2

0xd236,	// (0x0001ac0f) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0001d33e) popup_image3_note_pane_t

0xd244,	// (0x0001ac1d) popup_image3_note_pane_t3_copy1

0x64e4,	// (0x00013ebd) bg_myfav_hc_instruction_pane_ParamLimits

0x64e4,	// (0x00013ebd) bg_myfav_hc_instruction_pane

0x64fa,	// (0x00013ed3) cell_myfav_contact_pane_ParamLimits

0x64fa,	// (0x00013ed3) cell_myfav_contact_pane

0x6516,	// (0x00013eef) cell_myfav_contact_pane_cp1_ParamLimits

0x6516,	// (0x00013eef) cell_myfav_contact_pane_cp1

0x652e,	// (0x00013f07) cell_myfav_contact_pane_cp2_ParamLimits

0x652e,	// (0x00013f07) cell_myfav_contact_pane_cp2

0x6546,	// (0x00013f1f) cell_myfav_contact_pane_cp3_ParamLimits

0x6546,	// (0x00013f1f) cell_myfav_contact_pane_cp3

0x655d,	// (0x00013f36) cell_myfav_contact_pane_cp4_ParamLimits

0x655d,	// (0x00013f36) cell_myfav_contact_pane_cp4

0x6575,	// (0x00013f4e) cell_myfav_contact_pane_cp5_ParamLimits

0x6575,	// (0x00013f4e) cell_myfav_contact_pane_cp5

0x6589,	// (0x00013f62) cell_myfav_contact_pane_cp6_ParamLimits

0x6589,	// (0x00013f62) cell_myfav_contact_pane_cp6

0x659f,	// (0x00013f78) cell_myfav_contact_pane_cp7_ParamLimits

0x659f,	// (0x00013f78) cell_myfav_contact_pane_cp7

0xd252,	// (0x0001ac2b) listscroll_gen_pane_cp05

0x65b9,	// (0x00013f92) main_myfav_hc_pane_g1_ParamLimits

0x65b9,	// (0x00013f92) main_myfav_hc_pane_g1

0x65d3,	// (0x00013fac) main_myfav_hc_pane_g2_ParamLimits

0x65d3,	// (0x00013fac) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0001d345) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0001d345) main_myfav_hc_pane_g

0x6605,	// (0x00013fde) main_myfav_hc_pane_t1_ParamLimits

0x6605,	// (0x00013fde) main_myfav_hc_pane_t1

0xd25b,	// (0x0001ac34) main_myfav_hc_pane_t2_ParamLimits

0xd25b,	// (0x0001ac34) main_myfav_hc_pane_t2

0xd26d,	// (0x0001ac46) main_myfav_hc_pane_t3_ParamLimits

0xd26d,	// (0x0001ac46) main_myfav_hc_pane_t3

0x661c,	// (0x00013ff5) main_myfav_hc_pane_t4_ParamLimits

0x661c,	// (0x00013ff5) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0001d34c) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0001d34c) main_myfav_hc_pane_t

0xc416,	// (0x00019def) bg_myfav_hc_instruction_pane_g1

0xd27f,	// (0x0001ac58) cell_myfav_contact_pane_g1_ParamLimits

0xd27f,	// (0x0001ac58) cell_myfav_contact_pane_g1

0xd27f,	// (0x0001ac58) cell_myfav_contact_pane_g2_ParamLimits

0xd27f,	// (0x0001ac58) cell_myfav_contact_pane_g2

0xd28b,	// (0x0001ac64) cell_myfav_contact_pane_g3_ParamLimits

0xd28b,	// (0x0001ac64) cell_myfav_contact_pane_g3

0xc71a,	// (0x0001a0f3) cell_myfav_contact_pane_g4_ParamLimits

0xc71a,	// (0x0001a0f3) cell_myfav_contact_pane_g4

0xd298,	// (0x0001ac71) cell_myfav_contact_pane_g5_ParamLimits

0xd298,	// (0x0001ac71) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0001d357) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0001d357) cell_myfav_contact_pane_g

0x65ed,	// (0x00013fc6) main_myfav_hc_pane_g3_ParamLimits

0x65ed,	// (0x00013fc6) main_myfav_hc_pane_g3

0x0f14,	// (0x0000e8ed) popup_adpt_find_window

0x6644,	// (0x0001401d) afind_page_pane_ParamLimits

0x6644,	// (0x0001401d) afind_page_pane

0x6659,	// (0x00014032) aid_size_cell_afind_ParamLimits

0x6659,	// (0x00014032) aid_size_cell_afind

0x6677,	// (0x00014050) bg_popup_sub_pane_cp09_ParamLimits

0x6677,	// (0x00014050) bg_popup_sub_pane_cp09

0x6684,	// (0x0001405d) find_pane_cp01_ParamLimits

0x6684,	// (0x0001405d) find_pane_cp01

0xd2a4,	// (0x0001ac7d) grid_afind_control_pane_ParamLimits

0xd2a4,	// (0x0001ac7d) grid_afind_control_pane

0x6691,	// (0x0001406a) grid_afind_pane_ParamLimits

0x6691,	// (0x0001406a) grid_afind_pane

0x66b3,	// (0x0001408c) cell_afind_pane_ParamLimits

0x66b3,	// (0x0001408c) cell_afind_pane

0xc416,	// (0x00019def) afind_page_pane_g1

0x6714,	// (0x000140ed) afind_page_pane_g2

0x671d,	// (0x000140f6) afind_page_pane_g3

0x0002,

0xf989,	// (0x0001d362) afind_page_pane_g

0x6726,	// (0x000140ff) afind_page_pane_t1

0xd2b8,	// (0x0001ac91) cell_afind_grid_control_pane_ParamLimits

0xd2b8,	// (0x0001ac91) cell_afind_grid_control_pane

0xcf7b,	// (0x0001a954) bg_button_pane_cp69_ParamLimits

0xcf7b,	// (0x0001a954) bg_button_pane_cp69

0x6746,	// (0x0001411f) cell_afind_pane_g1_ParamLimits

0x6746,	// (0x0001411f) cell_afind_pane_g1

0x6753,	// (0x0001412c) cell_afind_pane_t1_ParamLimits

0x6753,	// (0x0001412c) cell_afind_pane_t1

0x9ffb,	// (0x000179d4) bg_button_pane_cp72

0xd2c7,	// (0x0001aca0) cell_afind_grid_control_pane_g1

0x36e6,	// (0x000110bf) aid_image_placing_area_ParamLimits

0x36e6,	// (0x000110bf) aid_image_placing_area

0xca02,	// (0x0001a3db) field_vitu_entry_pane_g1_ParamLimits

0xca02,	// (0x0001a3db) field_vitu_entry_pane_g1

0xca0e,	// (0x0001a3e7) field_vitu_entry_pane_g2_ParamLimits

0xca0e,	// (0x0001a3e7) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0001d213) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0001d213) field_vitu_entry_pane_g

0x57d2,	// (0x000131ab) cell_vitu_itu_pane_g1_ParamLimits

0x5814,	// (0x000131ed) cell_vitu_itu_pane_t3_ParamLimits

0x5814,	// (0x000131ed) cell_vitu_itu_pane_t3

0xcf2b,	// (0x0001a904) mp4_progress_pane_t1_ParamLimits

0xcf44,	// (0x0001a91d) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0001d2a8) mp4_progress_pane_t_ParamLimits

0xcf5d,	// (0x0001a936) mup_progress_pane_cp04_ParamLimits

0x6630,	// (0x00014009) main_myfav_hc_pane_t5_ParamLimits

0x6630,	// (0x00014009) main_myfav_hc_pane_t5

0x94e6,	// (0x00016ebf) aid_zoom_text_primary

0x0f14,	// (0x0000e8ed) popup_adpt_find_window_ParamLimits

0x9530,	// (0x00016f09) main_cam_set_pane

0x5f4b,	// (0x00013924) cam4_zoom_pane_ParamLimits

0x5f4b,	// (0x00013924) cam4_zoom_pane

0x6765,	// (0x0001413e) main_cam_set_pane_g1_ParamLimits

0x6765,	// (0x0001413e) main_cam_set_pane_g1

0x6773,	// (0x0001414c) main_cam_set_pane_g2_ParamLimits

0x6773,	// (0x0001414c) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0001d369) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0001d369) main_cam_set_pane_g

0x6794,	// (0x0001416d) main_cam_set_pane_t1_ParamLimits

0x6794,	// (0x0001416d) main_cam_set_pane_t1

0x67af,	// (0x00014188) main_cset_listscroll_pane_ParamLimits

0x67af,	// (0x00014188) main_cset_listscroll_pane

0x67cf,	// (0x000141a8) main_cset_slider_pane_ParamLimits

0x67cf,	// (0x000141a8) main_cset_slider_pane

0xd2d8,	// (0x0001acb1) main_cset_list_pane_ParamLimits

0xd2d8,	// (0x0001acb1) main_cset_list_pane

0xd2e8,	// (0x0001acc1) scroll_pane_cp028

0x67f5,	// (0x000141ce) aid_area_touch_slider

0x6811,	// (0x000141ea) cset_slider_pane

0x683b,	// (0x00014214) main_cset_slider_pane_g1

0x6850,	// (0x00014229) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0001d36e) main_cset_slider_pane_g

0xd321,	// (0x0001acfa) main_cset_slider_pane_t1

0x690c,	// (0x000142e5) main_cset_slider_pane_t2

0x6926,	// (0x000142ff) main_cset_slider_pane_t3

0x6940,	// (0x00014319) main_cset_slider_pane_t4

0x695a,	// (0x00014333) main_cset_slider_pane_t5

0x6976,	// (0x0001434f) main_cset_slider_pane_t6

0x698b,	// (0x00014364) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0001d393) main_cset_slider_pane_t

0x6a8f,	// (0x00014468) cset_list_set_pane_ParamLimits

0x6a8f,	// (0x00014468) cset_list_set_pane

0x6aa3,	// (0x0001447c) aid_position_infowindow_above

0x6aab,	// (0x00014484) aid_position_infowindow_below

0x6ab3,	// (0x0001448c) cset_list_set_pane_g1_ParamLimits

0x6ab3,	// (0x0001448c) cset_list_set_pane_g1

0x6abf,	// (0x00014498) cset_list_set_pane_g3_ParamLimits

0x6abf,	// (0x00014498) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0001d3b2) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0001d3b2) cset_list_set_pane_g

0x6ace,	// (0x000144a7) cset_list_set_pane_t1_ParamLimits

0x6ace,	// (0x000144a7) cset_list_set_pane_t1

0x9530,	// (0x00016f09) list_highlight_pane_cp021_ParamLimits

0x9530,	// (0x00016f09) list_highlight_pane_cp021

0xabc5,	// (0x0001859e) cset_slider_pane_g1

0xabd7,	// (0x000185b0) cset_slider_pane_g2

0xabce,	// (0x000185a7) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0001d3b7) cset_slider_pane_g

0xd3c1,	// (0x0001ad9a) aid_area_touch_cam4_zoom

0xd3c9,	// (0x0001ada2) cam4_zoom_cont_pane

0xd3d1,	// (0x0001adaa) cam4_zoom_pane_g1

0xd3d9,	// (0x0001adb2) cam4_zoom_pane_g2

0x6ae3,	// (0x000144bc) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0001d3be) cam4_zoom_pane_g

0xd3e1,	// (0x0001adba) cam4_zoom_cont_pane_g1

0xd3ea,	// (0x0001adc3) cam4_zoom_cont_pane_g2

0xd3f3,	// (0x0001adcc) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0001d3c5) cam4_zoom_cont_pane_g

0x5e07,	// (0x000137e0) call4_image_pane_ParamLimits

0x5e07,	// (0x000137e0) call4_image_pane

0xcfb9,	// (0x0001a992) call4_windows_conf_pane_ParamLimits

0xcff8,	// (0x0001a9d1) popup_call4_audio_in_window_ParamLimits

0xcff8,	// (0x0001a9d1) popup_call4_audio_in_window

0x94c0,	// (0x00016e99) bg_popup_call2_act_pane_cp02

0xd06e,	// (0x0001aa47) call4_list_conf_pane

0xc416,	// (0x00019def) call4_image_pane_g1

0xc416,	// (0x00019def) call4_image_pane_g2

0x0001,

0xf700,	// (0x0001d0d9) call4_image_pane_g

0xd3fc,	// (0x0001add5) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3fc,	// (0x0001add5) list_single_graphic_popup_conf4_pane

0x94c0,	// (0x00016e99) list_highlight_pane_cp022

0xd40f,	// (0x0001ade8) list_single_graphic_popup_conf4_pane_g1

0xa896,	// (0x0001826f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0001d3cc) list_single_graphic_popup_conf4_pane_g

0xd417,	// (0x0001adf0) list_single_graphic_popup_conf4_pane_t1

0x1cd5,	// (0x0000f6ae) popup_vtel_slider_window_ParamLimits

0x1cd5,	// (0x0000f6ae) popup_vtel_slider_window

0xcf69,	// (0x0001a942) dialer2_ne_pane_t2_ParamLimits

0xcf69,	// (0x0001a942) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0001d2ad) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0001d2ad) dialer2_ne_pane_t

0xc1f9,	// (0x00019bd2) bg_popup_sub_pane_cp010_ParamLimits

0xc1f9,	// (0x00019bd2) bg_popup_sub_pane_cp010

0x6aeb,	// (0x000144c4) popup_vtel_slider_window_g1_ParamLimits

0x6aeb,	// (0x000144c4) popup_vtel_slider_window_g1

0x6afe,	// (0x000144d7) popup_vtel_slider_window_g2_ParamLimits

0x6afe,	// (0x000144d7) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0001d3d1) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0001d3d1) popup_vtel_slider_window_g

0x6b54,	// (0x0001452d) vtel_slider_pane_ParamLimits

0x6b54,	// (0x0001452d) vtel_slider_pane

0x6b76,	// (0x0001454f) vtel_slider_pane_g1_ParamLimits

0x6b76,	// (0x0001454f) vtel_slider_pane_g1

0x6b8a,	// (0x00014563) vtel_slider_pane_g2_ParamLimits

0x6b8a,	// (0x00014563) vtel_slider_pane_g2

0x6ba2,	// (0x0001457b) vtel_slider_pane_g3_ParamLimits

0x6ba2,	// (0x0001457b) vtel_slider_pane_g3

0x6b76,	// (0x0001454f) vtel_slider_pane_g4_ParamLimits

0x6b76,	// (0x0001454f) vtel_slider_pane_g4

0x6bb8,	// (0x00014591) vtel_slider_pane_g5_ParamLimits

0x6bb8,	// (0x00014591) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0001d3da) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0001d3da) vtel_slider_pane_g

0x94c0,	// (0x00016e99) main_gallery2_pane

0x61b9,	// (0x00013b92) aid_size_row_itut2_dropdow_list_ParamLimits

0x61b9,	// (0x00013b92) aid_size_row_itut2_dropdow_list

0x6245,	// (0x00013c1e) grid_vitu2_function_top_pane_ParamLimits

0x6245,	// (0x00013c1e) grid_vitu2_function_top_pane

0x62aa,	// (0x00013c83) popup_vitu2_dropdown_list_window_ParamLimits

0x62aa,	// (0x00013c83) popup_vitu2_dropdown_list_window

0x62d3,	// (0x00013cac) popup_vitu2_match_list_window

0x6bce,	// (0x000145a7) cell_vitu2_function_top_pane_ParamLimits

0x6bce,	// (0x000145a7) cell_vitu2_function_top_pane

0x6bec,	// (0x000145c5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6bec,	// (0x000145c5) cell_vitu2_function_top_pane_cp01

0x6c0a,	// (0x000145e3) cell_vitu2_function_top_wide_pane_ParamLimits

0x6c0a,	// (0x000145e3) cell_vitu2_function_top_wide_pane

0x9530,	// (0x00016f09) bg_button_pane_cp012

0x6c28,	// (0x00014601) cell_vitu2_function_top_pane_g1

0xd43b,	// (0x0001ae14) bg_button_pane_cp013_ParamLimits

0xd43b,	// (0x0001ae14) bg_button_pane_cp013

0x6c3c,	// (0x00014615) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6c3c,	// (0x00014615) cell_vitu2_function_top_wide_pane_g1

0x9530,	// (0x00016f09) bg_popup_sub_pane_cp20

0x6c54,	// (0x0001462d) list_vitu2_match_list_pane

0xd1ce,	// (0x0001aba7) bg_popup_sub_pane_cp20_g1

0xd1d6,	// (0x0001abaf) bg_popup_sub_pane_cp20_g2

0xa2bd,	// (0x00017c96) bg_popup_sub_pane_cp20_g3

0xd1de,	// (0x0001abb7) bg_popup_sub_pane_cp20_g4

0xa29d,	// (0x00017c76) bg_popup_sub_pane_cp20_g5

0xd457,	// (0x0001ae30) bg_popup_sub_pane_cp20_g6

0xd1ee,	// (0x0001abc7) bg_popup_sub_pane_cp20_g7

0xd1f6,	// (0x0001abcf) bg_popup_sub_pane_cp20_g8

0xd1fe,	// (0x0001abd7) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0001d3e5) bg_popup_sub_pane_cp20_g

0xd45f,	// (0x0001ae38) list_vitu2_match_list_item_pane_ParamLimits

0xd45f,	// (0x0001ae38) list_vitu2_match_list_item_pane

0xd471,	// (0x0001ae4a) list_vitu2_match_list_item_pane_t1

0x94c0,	// (0x00016e99) bg_popup_sub_pane_cp21

0xa72c,	// (0x00018105) grid_vitu2_dropdown_list_pane

0x6ca7,	// (0x00014680) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ca7,	// (0x00014680) cell_vitu2_dropdown_list_char_pane

0x6cc8,	// (0x000146a1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6cc8,	// (0x000146a1) cell_vitu2_dropdown_list_ctrl_pane

0xd497,	// (0x0001ae70) cell_vitu2_dropdown_list_char_pane_g1

0xd4a0,	// (0x0001ae79) cell_vitu2_dropdown_list_char_pane_g2

0xd4a9,	// (0x0001ae82) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0001d402) cell_vitu2_dropdown_list_char_pane_g

0x6cf4,	// (0x000146cd) cell_vitu2_dropdown_list_char_pane_t1

0x6d02,	// (0x000146db) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6d02,	// (0x000146db) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6d12,	// (0x000146eb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6d12,	// (0x000146eb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6d23,	// (0x000146fc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6d23,	// (0x000146fc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6d33,	// (0x0001470c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6d33,	// (0x0001470c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc67d,	// (0x0001a056) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc67d,	// (0x0001a056) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0001d409) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0001d409) cell_vitu2_dropdown_list_ctrl_pane_g

0x6d4f,	// (0x00014728) aid_size_cell_gallery2_ParamLimits

0x6d4f,	// (0x00014728) aid_size_cell_gallery2

0x6d65,	// (0x0001473e) grid_gallery2_pane_ParamLimits

0x6d65,	// (0x0001473e) grid_gallery2_pane

0x6d79,	// (0x00014752) scroll_pane_cp029_ParamLimits

0x6d79,	// (0x00014752) scroll_pane_cp029

0x6d85,	// (0x0001475e) cell_gallery2_pane_ParamLimits

0x6d85,	// (0x0001475e) cell_gallery2_pane

0xd4b2,	// (0x0001ae8b) cell_gallery2_pane_g2

0x6dbb,	// (0x00014794) cell_gallery2_pane_g3

0xd4bc,	// (0x0001ae95) cell_gallery2_pane_g4

0xd4c4,	// (0x0001ae9d) cell_gallery2_pane_g5

0xaa6f,	// (0x00018448) grid_highlight_pane_cp10

0x62d3,	// (0x00013cac) popup_vitu2_match_list_window_ParamLimits

0x62e8,	// (0x00013cc1) popup_vitu2_query_window_ParamLimits

0x62e8,	// (0x00013cc1) popup_vitu2_query_window

0x94c0,	// (0x00016e99) bg_vitu2_candi_button_pane

0xd497,	// (0x0001ae70) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4a0,	// (0x0001ae79) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4a9,	// (0x0001ae82) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6dc3,	// (0x0001479c) bg_button_pane_cp015

0x6dd7,	// (0x000147b0) bg_button_pane_cp016

0x6dea,	// (0x000147c3) bg_button_pane_cp017

0xbf0e,	// (0x000198e7) bg_popup_sub_pane_cp22

0xd4cc,	// (0x0001aea5) popup_vitu2_query_window_g1

0x6e2f,	// (0x00014808) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0001d414) popup_vitu2_query_window_g

0x6e4e,	// (0x00014827) popup_vitu2_query_window_t1_ParamLimits

0x6e4e,	// (0x00014827) popup_vitu2_query_window_t1

0x6e83,	// (0x0001485c) popup_vitu2_query_window_t2_ParamLimits

0x6e83,	// (0x0001485c) popup_vitu2_query_window_t2

0x6e95,	// (0x0001486e) popup_vitu2_query_window_t3_ParamLimits

0x6e95,	// (0x0001486e) popup_vitu2_query_window_t3

0x6ebd,	// (0x00014896) popup_vitu2_query_window_t4_ParamLimits

0x6ebd,	// (0x00014896) popup_vitu2_query_window_t4

0x6ede,	// (0x000148b7) popup_vitu2_query_window_t5_ParamLimits

0x6ede,	// (0x000148b7) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0001d41b) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0001d41b) popup_vitu2_query_window_t

0xd2d0,	// (0x0001aca9) main_cset_text_pane

0x67f5,	// (0x000141ce) aid_area_touch_slider_ParamLimits

0x6811,	// (0x000141ea) cset_slider_pane_ParamLimits

0x683b,	// (0x00014214) main_cset_slider_pane_g1_ParamLimits

0x6850,	// (0x00014229) main_cset_slider_pane_g2_ParamLimits

0xd2f1,	// (0x0001acca) main_cset_slider_pane_g3_ParamLimits

0xd2f1,	// (0x0001acca) main_cset_slider_pane_g3

0x6865,	// (0x0001423e) main_cset_slider_pane_g4_ParamLimits

0x6865,	// (0x0001423e) main_cset_slider_pane_g4

0x6874,	// (0x0001424d) main_cset_slider_pane_g5_ParamLimits

0x6874,	// (0x0001424d) main_cset_slider_pane_g5

0x6880,	// (0x00014259) main_cset_slider_pane_g6_ParamLimits

0x6880,	// (0x00014259) main_cset_slider_pane_g6

0xf995,	// (0x0001d36e) main_cset_slider_pane_g_ParamLimits

0xd321,	// (0x0001acfa) main_cset_slider_pane_t1_ParamLimits

0x690c,	// (0x000142e5) main_cset_slider_pane_t2_ParamLimits

0x6926,	// (0x000142ff) main_cset_slider_pane_t3_ParamLimits

0x6940,	// (0x00014319) main_cset_slider_pane_t4_ParamLimits

0x695a,	// (0x00014333) main_cset_slider_pane_t5_ParamLimits

0x6976,	// (0x0001434f) main_cset_slider_pane_t6_ParamLimits

0x698b,	// (0x00014364) main_cset_slider_pane_t7_ParamLimits

0x69b5,	// (0x0001438e) main_cset_slider_pane_t8_ParamLimits

0x69b5,	// (0x0001438e) main_cset_slider_pane_t8

0x69dd,	// (0x000143b6) main_cset_slider_pane_t9_ParamLimits

0x69dd,	// (0x000143b6) main_cset_slider_pane_t9

0x6a05,	// (0x000143de) main_cset_slider_pane_t10_ParamLimits

0x6a05,	// (0x000143de) main_cset_slider_pane_t10

0x6a2d,	// (0x00014406) main_cset_slider_pane_t11_ParamLimits

0x6a2d,	// (0x00014406) main_cset_slider_pane_t11

0x6a55,	// (0x0001442e) main_cset_slider_pane_t12_ParamLimits

0x6a55,	// (0x0001442e) main_cset_slider_pane_t12

0x6a72,	// (0x0001444b) main_cset_slider_pane_t13_ParamLimits

0x6a72,	// (0x0001444b) main_cset_slider_pane_t13

0xf9ba,	// (0x0001d393) main_cset_slider_pane_t_ParamLimits

0x94c0,	// (0x00016e99) bg_popup_sub_pane_cp011

0xd4d8,	// (0x0001aeb1) main_cset_text_pane_g1

0xd4e0,	// (0x0001aeb9) main_cset_text_pane_t1

0xd4ee,	// (0x0001aec7) main_cset_text_pane_t2

0xd4fc,	// (0x0001aed5) main_cset_text_pane_t3

0xd50a,	// (0x0001aee3) main_cset_text_pane_t4

0xd518,	// (0x0001aef1) main_cset_text_pane_t5

0xd526,	// (0x0001aeff) main_cset_text_pane_t6

0xd534,	// (0x0001af0d) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0001d42a) main_cset_text_pane_t

0x94c0,	// (0x00016e99) main_cam4_burst_pane

0x94c0,	// (0x00016e99) main_cam5_pane

0x6734,	// (0x0001410d) bg_button_pane_cp019

0x673d,	// (0x00014116) bg_button_pane_cp020

0xd2fd,	// (0x0001acd6) main_cset_slider_pane_g7_ParamLimits

0xd2fd,	// (0x0001acd6) main_cset_slider_pane_g7

0xd309,	// (0x0001ace2) main_cset_slider_pane_g8_ParamLimits

0xd309,	// (0x0001ace2) main_cset_slider_pane_g8

0x6894,	// (0x0001426d) main_cset_slider_pane_g9_ParamLimits

0x6894,	// (0x0001426d) main_cset_slider_pane_g9

0x68a0,	// (0x00014279) main_cset_slider_pane_g10_ParamLimits

0x68a0,	// (0x00014279) main_cset_slider_pane_g10

0x68ac,	// (0x00014285) main_cset_slider_pane_g11_ParamLimits

0x68ac,	// (0x00014285) main_cset_slider_pane_g11

0x68b8,	// (0x00014291) main_cset_slider_pane_g12_ParamLimits

0x68b8,	// (0x00014291) main_cset_slider_pane_g12

0x68c4,	// (0x0001429d) main_cset_slider_pane_g13_ParamLimits

0x68c4,	// (0x0001429d) main_cset_slider_pane_g13

0x68d0,	// (0x000142a9) main_cset_slider_pane_g14_ParamLimits

0x68d0,	// (0x000142a9) main_cset_slider_pane_g14

0x68dc,	// (0x000142b5) main_cset_slider_pane_g15_ParamLimits

0x68dc,	// (0x000142b5) main_cset_slider_pane_g15

0xd34f,	// (0x0001ad28) main_cset_slider_pane_t14_ParamLimits

0xd34f,	// (0x0001ad28) main_cset_slider_pane_t14

0xd388,	// (0x0001ad61) main_cset_slider_pane_t15_ParamLimits

0xd388,	// (0x0001ad61) main_cset_slider_pane_t15

0x6f55,	// (0x0001492e) aid_cam4_burst_size_cell_ParamLimits

0x6f55,	// (0x0001492e) aid_cam4_burst_size_cell

0x6f75,	// (0x0001494e) grid_cam4_burst_pane_ParamLimits

0x6f75,	// (0x0001494e) grid_cam4_burst_pane

0x6fad,	// (0x00014986) linegrid_cam4_burst_pane_ParamLimits

0x6fad,	// (0x00014986) linegrid_cam4_burst_pane

0xd542,	// (0x0001af1b) scroll_pane_cp30_ParamLimits

0xd542,	// (0x0001af1b) scroll_pane_cp30

0x6fd3,	// (0x000149ac) cell_cam4_burst_pane_ParamLimits

0x6fd3,	// (0x000149ac) cell_cam4_burst_pane

0xd54e,	// (0x0001af27) linegrid_cam4_burst_pane_g1_ParamLimits

0xd54e,	// (0x0001af27) linegrid_cam4_burst_pane_g1

0x7020,	// (0x000149f9) linegrid_cam4_burst_pane_g2_ParamLimits

0x7020,	// (0x000149f9) linegrid_cam4_burst_pane_g2

0xd55b,	// (0x0001af34) linegrid_cam4_burst_pane_g3_ParamLimits

0xd55b,	// (0x0001af34) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0001d439) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0001d439) linegrid_cam4_burst_pane_g

0x7031,	// (0x00014a0a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7031,	// (0x00014a0a) linegrid_cam4_burst_pane_g3_copy1

0xd568,	// (0x0001af41) linegrid_cam4_burst_pane_g4_ParamLimits

0xd568,	// (0x0001af41) linegrid_cam4_burst_pane_g4

0x704b,	// (0x00014a24) linegrid_cam4_burst_pane_g5_ParamLimits

0x704b,	// (0x00014a24) linegrid_cam4_burst_pane_g5

0x705c,	// (0x00014a35) linegrid_cam4_burst_pane_g6_ParamLimits

0x705c,	// (0x00014a35) linegrid_cam4_burst_pane_g6

0xd575,	// (0x0001af4e) linegrid_cam4_burst_pane_g7_ParamLimits

0xd575,	// (0x0001af4e) linegrid_cam4_burst_pane_g7

0x7073,	// (0x00014a4c) cell_cam4_burst_pane_g1

0xd58e,	// (0x0001af67) main_cam5_pane_t1_ParamLimits

0xd58e,	// (0x0001af67) main_cam5_pane_t1

0xd5a0,	// (0x0001af79) main_cam5_pane_t2_ParamLimits

0xd5a0,	// (0x0001af79) main_cam5_pane_t2

0xd5b2,	// (0x0001af8b) main_cam5_pane_t3_ParamLimits

0xd5b2,	// (0x0001af8b) main_cam5_pane_t3

0xd5c4,	// (0x0001af9d) main_cam5_pane_t4_ParamLimits

0xd5c4,	// (0x0001af9d) main_cam5_pane_t4

0xd5da,	// (0x0001afb3) main_cam5_pane_t5_ParamLimits

0xd5da,	// (0x0001afb3) main_cam5_pane_t5

0xd5ec,	// (0x0001afc5) main_cam5_pane_t6_ParamLimits

0xd5ec,	// (0x0001afc5) main_cam5_pane_t6

0xd600,	// (0x0001afd9) main_cam5_pane_t7_ParamLimits

0xd600,	// (0x0001afd9) main_cam5_pane_t7

0xd612,	// (0x0001afeb) main_cam5_pane_t8_ParamLimits

0xd612,	// (0x0001afeb) main_cam5_pane_t8

0xd62e,	// (0x0001b007) main_cam5_pane_t9_ParamLimits

0xd62e,	// (0x0001b007) main_cam5_pane_t9

0xd640,	// (0x0001b019) main_cam5_pane_t10_ParamLimits

0xd640,	// (0x0001b019) main_cam5_pane_t10

0xd652,	// (0x0001b02b) main_cam5_pane_t11_ParamLimits

0xd652,	// (0x0001b02b) main_cam5_pane_t11

0xd664,	// (0x0001b03d) main_cam5_pane_t12_ParamLimits

0xd664,	// (0x0001b03d) main_cam5_pane_t12

0xd679,	// (0x0001b052) main_cam5_pane_t13_ParamLimits

0xd679,	// (0x0001b052) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0001d445) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0001d445) main_cam5_pane_t

0x0f96,	// (0x0000e96f) popup_scut_keymap_window_ParamLimits

0x0f96,	// (0x0000e96f) popup_scut_keymap_window

0x7086,	// (0x00014a5f) aid_size_cell_brow_shortcut

0xaa6f,	// (0x00018448) bg_popup_window_pane_cp010

0x7092,	// (0x00014a6b) grid_scut_pane

0x709e,	// (0x00014a77) cell_scut_pane_ParamLimits

0x709e,	// (0x00014a77) cell_scut_pane

0x70b5,	// (0x00014a8e) cell_scut_pane_g1

0xd696,	// (0x0001b06f) cell_scut_pane_t1

0xd6a5,	// (0x0001b07e) cell_scut_pane_t2

0x70be,	// (0x00014a97) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0001d460) cell_scut_pane_t

0x4d0e,	// (0x000126e7) main_mup3_pane_g8_ParamLimits

0x4d0e,	// (0x000126e7) main_mup3_pane_g8

0x61d1,	// (0x00013baa) area_vitu2_query_pane_ParamLimits

0x61d1,	// (0x00013baa) area_vitu2_query_pane

0x6dfd,	// (0x000147d6) input_focus_pane_cp08

0xd6b4,	// (0x0001b08d) area_vitu2_query_pane_g1

0x70cc,	// (0x00014aa5) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0001d467) area_vitu2_query_pane_g

0x70dd,	// (0x00014ab6) area_vitu2_query_pane_t1_ParamLimits

0x70dd,	// (0x00014ab6) area_vitu2_query_pane_t1

0x70f1,	// (0x00014aca) area_vitu2_query_pane_t2_ParamLimits

0x70f1,	// (0x00014aca) area_vitu2_query_pane_t2

0x7105,	// (0x00014ade) area_vitu2_query_pane_t3_ParamLimits

0x7105,	// (0x00014ade) area_vitu2_query_pane_t3

0xd6c0,	// (0x0001b099) area_vitu2_query_pane_t4_ParamLimits

0xd6c0,	// (0x0001b099) area_vitu2_query_pane_t4

0xd6e8,	// (0x0001b0c1) area_vitu2_query_pane_t5_ParamLimits

0xd6e8,	// (0x0001b0c1) area_vitu2_query_pane_t5

0xd710,	// (0x0001b0e9) area_vitu2_query_pane_t6_ParamLimits

0xd710,	// (0x0001b0e9) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0001d46c) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0001d46c) area_vitu2_query_pane_t

0x712d,	// (0x00014b06) bg_button_pane_cp018

0x713b,	// (0x00014b14) bg_button_pane_cp021

0x7147,	// (0x00014b20) bg_button_pane_cp022

0x7158,	// (0x00014b31) input_focus_pane_cp09

0x2cd8,	// (0x000106b1) aid_size_touch_mv_arrow_left

0x2d01,	// (0x000106da) aid_size_touch_mv_arrow_right

0x68f4,	// (0x000142cd) main_cset_slider_pane_g16_ParamLimits

0x68f4,	// (0x000142cd) main_cset_slider_pane_g16

0x6900,	// (0x000142d9) main_cset_slider_pane_g17_ParamLimits

0x6900,	// (0x000142d9) main_cset_slider_pane_g17

0x7073,	// (0x00014a4c) cell_cam4_burst_pane_g1_ParamLimits

0x94c0,	// (0x00016e99) compa_mode_pane

0x6b0e,	// (0x000144e7) popup_vtel_slider_window_g3_ParamLimits

0x6b0e,	// (0x000144e7) popup_vtel_slider_window_g3

0x6b25,	// (0x000144fe) popup_vtel_slider_window_g4_ParamLimits

0x6b25,	// (0x000144fe) popup_vtel_slider_window_g4

0x6b3c,	// (0x00014515) popup_vtel_slider_window_t1_ParamLimits

0x6b3c,	// (0x00014515) popup_vtel_slider_window_t1

0x94c0,	// (0x00016e99) main_cl_pane

0xbf36,	// (0x0001990f) popup_imed_adjust2_window_ParamLimits

0xbf0e,	// (0x000198e7) bg_tb_trans_pane_cp05_ParamLimits

0xc937,	// (0x0001a310) popup_imed_adjust2_window_g1_ParamLimits

0xc946,	// (0x0001a31f) popup_imed_adjust2_window_g2_ParamLimits

0xc946,	// (0x0001a31f) popup_imed_adjust2_window_g2

0xc952,	// (0x0001a32b) popup_imed_adjust2_window_g3_ParamLimits

0xc952,	// (0x0001a32b) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0001d1d7) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0001d1d7) popup_imed_adjust2_window_g

0xc95e,	// (0x0001a337) popup_imed_adjust2_window_t1_ParamLimits

0xc976,	// (0x0001a34f) slider_imed_adjust_pane_ParamLimits

0xc98a,	// (0x0001a363) slider_imed_adjust_pane_g1_ParamLimits

0xc99a,	// (0x0001a373) slider_imed_adjust_pane_g2_ParamLimits

0xc9aa,	// (0x0001a383) slider_imed_adjust_pane_g3_ParamLimits

0xc9bb,	// (0x0001a394) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0001d1de) slider_imed_adjust_pane_g_ParamLimits

0x5eec,	// (0x000138c5) aid_touch_area_cam4_ParamLimits

0x5eec,	// (0x000138c5) aid_touch_area_cam4

0xd0b2,	// (0x0001aa8b) battery_pane_cp01

0x5fbc,	// (0x00013995) main_camera4_pane_g6_ParamLimits

0x5fbc,	// (0x00013995) main_camera4_pane_g6

0x5fe6,	// (0x000139bf) main_camera4_pane_t2_ParamLimits

0x5fe6,	// (0x000139bf) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0001d2e1) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0001d2e1) main_camera4_pane_t

0x601b,	// (0x000139f4) aid_touch_area_vid4_ParamLimits

0x601b,	// (0x000139f4) aid_touch_area_vid4

0x6082,	// (0x00013a5b) main_video4_pane_g5_ParamLimits

0x6082,	// (0x00013a5b) main_video4_pane_g5

0x60ad,	// (0x00013a86) vid4_progress_pane_ParamLimits

0x60ad,	// (0x00013a86) vid4_progress_pane

0xd315,	// (0x0001acee) main_cset_slider_pane_g18_ParamLimits

0xd315,	// (0x0001acee) main_cset_slider_pane_g18

0xd582,	// (0x0001af5b) cell_cam4_burst_pane_g2_ParamLimits

0xd582,	// (0x0001af5b) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0001d440) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0001d440) cell_cam4_burst_pane_g

0x9cdb,	// (0x000176b4) bg_cl_pane_ParamLimits

0x9cdb,	// (0x000176b4) bg_cl_pane

0x7169,	// (0x00014b42) cl_header_pane_ParamLimits

0x7169,	// (0x00014b42) cl_header_pane

0x717d,	// (0x00014b56) cl_listscroll_pane_ParamLimits

0x717d,	// (0x00014b56) cl_listscroll_pane

0xd75c,	// (0x0001b135) bg_cl_pane_g1

0xd764,	// (0x0001b13d) bg_cl_pane_g2

0xd76c,	// (0x0001b145) bg_cl_pane_g3

0xd774,	// (0x0001b14d) bg_cl_pane_g4

0xd77c,	// (0x0001b155) bg_cl_pane_g5

0xd784,	// (0x0001b15d) bg_cl_pane_g6

0xd78c,	// (0x0001b165) bg_cl_pane_g7

0xd794,	// (0x0001b16d) bg_cl_pane_g8

0xd79c,	// (0x0001b175) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0001d47b) bg_cl_pane_g

0x718d,	// (0x00014b66) aid_height_cl_leading_ParamLimits

0x718d,	// (0x00014b66) aid_height_cl_leading

0x7199,	// (0x00014b72) aid_height_cl_text_ParamLimits

0x7199,	// (0x00014b72) aid_height_cl_text

0x9530,	// (0x00016f09) bg_cl_header_pane_ParamLimits

0x9530,	// (0x00016f09) bg_cl_header_pane

0x71b8,	// (0x00014b91) cl_header_pane_g1_ParamLimits

0x71b8,	// (0x00014b91) cl_header_pane_g1

0x71ce,	// (0x00014ba7) cl_header_pane_t1_ParamLimits

0x71ce,	// (0x00014ba7) cl_header_pane_t1

0xd7a4,	// (0x0001b17d) cl_list_pane

0xd2e8,	// (0x0001acc1) hc_scroll_pane_cp01

0xa29d,	// (0x00017c76) bg_cl_header_pane_g1

0xd1ce,	// (0x0001aba7) bg_cl_header_pane_g2

0xa2bd,	// (0x00017c96) bg_cl_header_pane_g3

0xd1de,	// (0x0001abb7) bg_cl_header_pane_g4

0xd1d6,	// (0x0001abaf) bg_cl_header_pane_g5

0xd457,	// (0x0001ae30) bg_cl_header_pane_g6

0xd1f6,	// (0x0001abcf) bg_cl_header_pane_g7

0xd1fe,	// (0x0001abd7) bg_cl_header_pane_g8

0xd1ee,	// (0x0001abc7) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0001d48e) bg_cl_header_pane_g

0x71e7,	// (0x00014bc0) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x71e7,	// (0x00014bc0) hc_cl_list_double_graphic_heading_pane

0x71fb,	// (0x00014bd4) hc_cl_list_single_graphic_pane_ParamLimits

0x71fb,	// (0x00014bd4) hc_cl_list_single_graphic_pane

0x7215,	// (0x00014bee) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7215,	// (0x00014bee) hc_cl_list_single_graphic_pane_g1

0x7221,	// (0x00014bfa) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7221,	// (0x00014bfa) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0001d4a1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0001d4a1) hc_cl_list_single_graphic_pane_g

0x7235,	// (0x00014c0e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7235,	// (0x00014c0e) hc_cl_list_single_graphic_pane_t1

0x7215,	// (0x00014bee) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7215,	// (0x00014bee) hc_cl_list_double_graphic_heading_pane_g1

0x724a,	// (0x00014c23) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x724a,	// (0x00014c23) hc_cl_list_double_graphic_heading_pane_g2

0x725e,	// (0x00014c37) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x725e,	// (0x00014c37) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0001d4a6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0001d4a6) hc_cl_list_double_graphic_heading_pane_g

0x7272,	// (0x00014c4b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7272,	// (0x00014c4b) hc_cl_list_double_graphic_heading_pane_t1

0x7287,	// (0x00014c60) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7287,	// (0x00014c60) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0001d4ad) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0001d4ad) hc_cl_list_double_graphic_heading_pane_t

0xd7b5,	// (0x0001b18e) vid4_progress_pane_g1

0xd7c5,	// (0x0001b19e) vid4_progress_pane_g2

0xd7d5,	// (0x0001b1ae) vid4_progress_pane_g3

0xd0e7,	// (0x0001aac0) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0001d4b2) vid4_progress_pane_g

0xd7e1,	// (0x0001b1ba) vid4_progress_pane_t1

0xd7f6,	// (0x0001b1cf) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0001d4bd) vid4_progress_pane_t

0xd821,	// (0x0001b1fa) wait_bar_pane_cp07

0xc207,	// (0x00019be0) blid_firmament_pane_ParamLimits

0xc24a,	// (0x00019c23) popup_blid_sat_info2_window_g1

0xc26e,	// (0x00019c47) popup_blid_sat_info2_window_t3

0xc27c,	// (0x00019c55) popup_blid_sat_info2_window_t4

0xc28a,	// (0x00019c63) popup_blid_sat_info2_window_t5

0xc298,	// (0x00019c71) popup_blid_sat_info2_window_t6

0xc2a8,	// (0x00019c81) popup_blid_sat_info2_window_t7

0xc2b6,	// (0x00019c8f) popup_blid_sat_info2_window_t8

0xc2c4,	// (0x00019c9d) popup_blid_sat_info2_window_t9

0xc2d2,	// (0x00019cab) popup_blid_sat_info2_window_t10

0xc396,	// (0x00019d6f) aid_firma_cardinal_ParamLimits

0xc3aa,	// (0x00019d83) blid_firmament_pane_t1_ParamLimits

0xc3c1,	// (0x00019d9a) blid_firmament_pane_t2_ParamLimits

0xc3d8,	// (0x00019db1) blid_firmament_pane_t3_ParamLimits

0xc3ef,	// (0x00019dc8) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0001d0d0) blid_firmament_pane_t_ParamLimits

0xc406,	// (0x00019ddf) blid_sat_info_pane_ParamLimits

0x9530,	// (0x00016f09) main_cam_set_pane_ParamLimits

0x557c,	// (0x00012f55) aid_size_cell_colour_35_ParamLimits

0x559c,	// (0x00012f75) aid_size_cell_colour_112_ParamLimits

0x55bc,	// (0x00012f95) aid_size_cell_effect_ParamLimits

0xbf0e,	// (0x000198e7) bg_tb_trans_pane_cp02_ParamLimits

0xa4bd,	// (0x00017e96) heading_imed_pane_ParamLimits

0x55dc,	// (0x00012fb5) listscroll_imed_pane_ParamLimits

0xb538,	// (0x00018f11) popup_call2_audio_first_window_g5_ParamLimits

0xb538,	// (0x00018f11) popup_call2_audio_first_window_g5

0x5b93,	// (0x0001356c) aid_size_touch_image3_arrow_left_ParamLimits

0x5b93,	// (0x0001356c) aid_size_touch_image3_arrow_left

0x5bbf,	// (0x00013598) aid_size_touch_image3_arrow_right_ParamLimits

0x5bbf,	// (0x00013598) aid_size_touch_image3_arrow_right

0xd80c,	// (0x0001b1e5) vid4_progress_pane_t3

0x58ff,	// (0x000132d8) main_hwr_training_symbol_option_pane_ParamLimits

0x58ff,	// (0x000132d8) main_hwr_training_symbol_option_pane

0xcc32,	// (0x0001a60b) popup_hwr_training_preview_window_ParamLimits

0xcc32,	// (0x0001a60b) popup_hwr_training_preview_window

0x591f,	// (0x000132f8) hwr_training_navi_pane_g5_ParamLimits

0x591f,	// (0x000132f8) hwr_training_navi_pane_g5

0xd1bc,	// (0x0001ab95) popup_char_count_window

0x9530,	// (0x00016f09) bg_popup_sub_pane_cp20_ParamLimits

0x6c54,	// (0x0001462d) list_vitu2_match_list_pane_ParamLimits

0x6c63,	// (0x0001463c) vitu2_page_scroll_pane_ParamLimits

0x6c63,	// (0x0001463c) vitu2_page_scroll_pane

0xd88b,	// (0x0001b264) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd88b,	// (0x0001b264) list_single_hwr_training_symbol_option_pane

0xd89e,	// (0x0001b277) list_single_hwr_training_symbol_option_pane_g1

0xd8a6,	// (0x0001b27f) list_single_hwr_training_symbol_option_pane_t1

0xd8b4,	// (0x0001b28d) bg_button_pane_cp023

0xd8bd,	// (0x0001b296) bg_button_pane_cp024

0x729c,	// (0x00014c75) vitu2_page_scroll_pane_g1

0x72a4,	// (0x00014c7d) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0001d4c4) vitu2_page_scroll_pane_g

0x72ac,	// (0x00014c85) vitu2_page_scroll_pane_t1

0xc123,	// (0x00019afc) popup_char_count_window_g1

0xd8f0,	// (0x0001b2c9) popup_char_count_window_g2

0xd8f9,	// (0x0001b2d2) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0001d4c9) popup_char_count_window_g

0xd902,	// (0x0001b2db) popup_char_count_window_t1

0x94c0,	// (0x00016e99) main_vded2_pane

0xc923,	// (0x0001a2fc) aid_size_cell_imed_line

0xc92d,	// (0x0001a306) grid_imed_line_width_pane

0x611d,	// (0x00013af6) vid4_indicators_pane_g4

0xd910,	// (0x0001b2e9) cell_imed_line_width_pane_ParamLimits

0xd910,	// (0x0001b2e9) cell_imed_line_width_pane

0xd924,	// (0x0001b2fd) cell_imed_line_width_pane_g1

0xd92d,	// (0x0001b306) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0001d4d0) cell_imed_line_width_pane_g

0x72bb,	// (0x00014c94) main_vded2_pane_g1_ParamLimits

0x72bb,	// (0x00014c94) main_vded2_pane_g1

0x72d1,	// (0x00014caa) main_vded2_pane_g2_ParamLimits

0x72d1,	// (0x00014caa) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0001d4d5) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0001d4d5) main_vded2_pane_g

0x72e3,	// (0x00014cbc) vded2_slider_pane_ParamLimits

0x72e3,	// (0x00014cbc) vded2_slider_pane

0x72f3,	// (0x00014ccc) aid_size_touch_vded2_end

0x72fd,	// (0x00014cd6) aid_size_touch_vded2_playhead

0xd935,	// (0x0001b30e) aid_size_touch_vded2_start

0xd93d,	// (0x0001b316) vded2_slider_bg_pane

0xd946,	// (0x0001b31f) vded2_slider_pane_g1

0xd94f,	// (0x0001b328) vded2_slider_pane_g2

0x7307,	// (0x00014ce0) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0001d4da) vded2_slider_pane_g

0xd957,	// (0x0001b330) vded2_slider_bg_pane_g1

0xd960,	// (0x0001b339) vded2_slider_bg_pane_g2

0xd969,	// (0x0001b342) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0001d4e1) vded2_slider_bg_pane_g

0x334c,	// (0x00010d25) aid_postcard_touch_down_pane_ParamLimits

0x334c,	// (0x00010d25) aid_postcard_touch_down_pane

0x3362,	// (0x00010d3b) aid_postcard_touch_up_pane_ParamLimits

0x3362,	// (0x00010d3b) aid_postcard_touch_up_pane

0x94c0,	// (0x00016e99) main_blid2_pane

0xbf1c,	// (0x000198f5) popup_blid2_search_window

0x94c0,	// (0x00016e99) blid2_gps_pane

0x94c0,	// (0x00016e99) blid2_navig_pane

0x94c0,	// (0x00016e99) blid2_search_pane

0x94c0,	// (0x00016e99) blid2_tripm_pane

0x7312,	// (0x00014ceb) blid2_search_pane_g1_ParamLimits

0x7312,	// (0x00014ceb) blid2_search_pane_g1

0x732a,	// (0x00014d03) blid2_search_pane_t1_ParamLimits

0x732a,	// (0x00014d03) blid2_search_pane_t1

0x733c,	// (0x00014d15) aid_size_cell_blid2_gps_ParamLimits

0x733c,	// (0x00014d15) aid_size_cell_blid2_gps

0x7354,	// (0x00014d2d) blid2_gps_pane_g1_ParamLimits

0x7354,	// (0x00014d2d) blid2_gps_pane_g1

0x7368,	// (0x00014d41) grid_blid2_satellite_pane_ParamLimits

0x7368,	// (0x00014d41) grid_blid2_satellite_pane

0x7382,	// (0x00014d5b) blid2_navig_pane_g1_ParamLimits

0x7382,	// (0x00014d5b) blid2_navig_pane_g1

0x738e,	// (0x00014d67) blid2_navig_pane_t1_ParamLimits

0x738e,	// (0x00014d67) blid2_navig_pane_t1

0x73a9,	// (0x00014d82) blid2_navig_pane_t2_ParamLimits

0x73a9,	// (0x00014d82) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0001d4e8) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0001d4e8) blid2_navig_pane_t

0x73c4,	// (0x00014d9d) blid2_navig_ring_pane_ParamLimits

0x73c4,	// (0x00014d9d) blid2_navig_ring_pane

0x73dd,	// (0x00014db6) blid2_speed_pane_ParamLimits

0x73dd,	// (0x00014db6) blid2_speed_pane

0x73e9,	// (0x00014dc2) blid2_tripm_pane_g1_ParamLimits

0x73e9,	// (0x00014dc2) blid2_tripm_pane_g1

0x7404,	// (0x00014ddd) blid2_tripm_pane_g2_ParamLimits

0x7404,	// (0x00014ddd) blid2_tripm_pane_g2

0x7418,	// (0x00014df1) blid2_tripm_pane_g3_ParamLimits

0x7418,	// (0x00014df1) blid2_tripm_pane_g3

0x742c,	// (0x00014e05) blid2_tripm_pane_g4_ParamLimits

0x742c,	// (0x00014e05) blid2_tripm_pane_g4

0x7440,	// (0x00014e19) blid2_tripm_pane_g5_ParamLimits

0x7440,	// (0x00014e19) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0001d4ed) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0001d4ed) blid2_tripm_pane_g

0x7466,	// (0x00014e3f) blid2_tripm_pane_t1_ParamLimits

0x7466,	// (0x00014e3f) blid2_tripm_pane_t1

0x7481,	// (0x00014e5a) blid2_tripm_pane_t2_ParamLimits

0x7481,	// (0x00014e5a) blid2_tripm_pane_t2

0x749c,	// (0x00014e75) blid2_tripm_pane_t3_ParamLimits

0x749c,	// (0x00014e75) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0001d4fa) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0001d4fa) blid2_tripm_pane_t

0x74e3,	// (0x00014ebc) cell_blid2_satellite_pane_ParamLimits

0x74e3,	// (0x00014ebc) cell_blid2_satellite_pane

0x7501,	// (0x00014eda) cell_blid2_satellite_pane_g1

0xd972,	// (0x0001b34b) cell_blid2_satellite_pane_t1

0xc416,	// (0x00019def) blid2_speed_pane_g1

0xd980,	// (0x0001b359) blid2_speed_pane_t1

0xd98e,	// (0x0001b367) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0001d503) blid2_speed_pane_t

0xc416,	// (0x00019def) blid2_navig_ring_pane_g1

0x750a,	// (0x00014ee3) blid2_navig_ring_pane_g2

0x7512,	// (0x00014eeb) blid2_navig_ring_pane_g3

0x751a,	// (0x00014ef3) blid2_navig_ring_pane_g4

0x7522,	// (0x00014efb) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0001d508) blid2_navig_ring_pane_g

0x94c0,	// (0x00016e99) bg_popup_window_pane_cp011

0xd99c,	// (0x0001b375) popup_blid2_search_window_g1

0xd9a4,	// (0x0001b37d) popup_blid2_search_window_t1

0xd9b2,	// (0x0001b38b) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0001d513) popup_blid2_search_window_t

0xa1ac,	// (0x00017b85) main_browser_pane_g1

0x9cdb,	// (0x000176b4) main_browser_pane_ParamLimits

0x9530,	// (0x00016f09) bg_button_pane_cp011_ParamLimits

0x64d0,	// (0x00013ea9) cell_vitu2_function_pane_g1_ParamLimits

0xbf0e,	// (0x000198e7) bg_popup_sub_pane_cp22_ParamLimits

0x6dfd,	// (0x000147d6) input_focus_pane_cp08_ParamLimits

0x6e14,	// (0x000147ed) popup_vitu2_query_button_pane_ParamLimits

0x6e14,	// (0x000147ed) popup_vitu2_query_button_pane

0x6e25,	// (0x000147fe) popup_vitu2_query_input_button_pane

0xd4cc,	// (0x0001aea5) popup_vitu2_query_window_g1_ParamLimits

0x6e2f,	// (0x00014808) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0001d414) popup_vitu2_query_window_g_ParamLimits

0x94c0,	// (0x00016e99) bg_button_pane_cp026

0x752a,	// (0x00014f03) popup_vitu2_query_input_button_pane_g1

0x94c0,	// (0x00016e99) bg_button_pane_cp025

0xd9c0,	// (0x0001b399) popup_vitu2_query_button_pane_t1

0x49e8,	// (0x000123c1) main_mp3_pane_t6

0x49f6,	// (0x000123cf) popup_slider_window_cp01

0xd0ce,	// (0x0001aaa7) cam4_battery_pane

0xd127,	// (0x0001ab00) cam4_battery_pane_cp02

0xd7ad,	// (0x0001b186) cam4_battery_pane_cp01

0xd7ad,	// (0x0001b186) cam4_battery_pane_cp03

0xc416,	// (0x00019def) cam4_battery_pane_g1

0xd9ce,	// (0x0001b3a7) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0001d518) cam4_battery_pane_g

0xc2e0,	// (0x00019cb9) popup_blid_sat_info2_window_t11

0x2cd8,	// (0x000106b1) aid_size_touch_mv_arrow_left_ParamLimits

0x2d01,	// (0x000106da) aid_size_touch_mv_arrow_right_ParamLimits

0xa9cf,	// (0x000183a8) navi_pane_g1_ParamLimits

0x2d2a,	// (0x00010703) navi_pane_g2_ParamLimits

0x2d58,	// (0x00010731) navi_pane_g3_ParamLimits

0xf409,	// (0x0001cde2) navi_pane_g_ParamLimits

0x2db0,	// (0x00010789) navi_pane_mv_t1_ParamLimits

0x55e8,	// (0x00012fc1) grid_imed_effect_pane_ParamLimits

0x1bd2,	// (0x0000f5ab) aid_placing_vt_slider_lsc

0xa0fd,	// (0x00017ad6) aid_placing_vt_slider_prt

0x9530,	// (0x00016f09) bg_tb_trans_pane_cp01_ParamLimits

0xc59d,	// (0x00019f76) popup_image_details_window_g1_ParamLimits

0xc5b0,	// (0x00019f89) popup_image_details_window_g2_ParamLimits

0xc5c5,	// (0x00019f9e) popup_image_details_window_g3_ParamLimits

0xc5c5,	// (0x00019f9e) popup_image_details_window_g3

0xf73c,	// (0x0001d115) popup_image_details_window_g_ParamLimits

0xc5d9,	// (0x00019fb2) popup_image_details_window_t1_ParamLimits

0xc5eb,	// (0x00019fc4) popup_image_details_window_t2_ParamLimits

0xc604,	// (0x00019fdd) popup_image_details_window_t3_ParamLimits

0xc618,	// (0x00019ff1) popup_image_details_window_t4_ParamLimits

0xc633,	// (0x0001a00c) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0001d11c) popup_image_details_window_t_ParamLimits

0x71a5,	// (0x00014b7e) cl_header_name_pane_ParamLimits

0x71a5,	// (0x00014b7e) cl_header_name_pane

0x7532,	// (0x00014f0b) cl_header_name_pane_t1_ParamLimits

0x7532,	// (0x00014f0b) cl_header_name_pane_t1

0x7553,	// (0x00014f2c) cl_header_name_pane_t2_ParamLimits

0x7553,	// (0x00014f2c) cl_header_name_pane_t2

0x7595,	// (0x00014f6e) cl_header_name_pane_t3_ParamLimits

0x7595,	// (0x00014f6e) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0001d51d) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0001d51d) cl_header_name_pane_t

0x2d81,	// (0x0001075a) navi_pane_mv_g2_ParamLimits

0xd148,	// (0x0001ab21) field_vitu2_entry_pane_g1_ParamLimits

0xd154,	// (0x0001ab2d) field_vitu2_entry_pane_g2_ParamLimits

0xd160,	// (0x0001ab39) field_vitu2_entry_pane_g3_ParamLimits

0xd160,	// (0x0001ab39) field_vitu2_entry_pane_g3

0xf93a,	// (0x0001d313) field_vitu2_entry_pane_g_ParamLimits

0x6370,	// (0x00013d49) cell_vitu2_itu_pane_g1_ParamLimits

0x6380,	// (0x00013d59) cell_vitu2_itu_pane_g2_ParamLimits

0x6380,	// (0x00013d59) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0001d31f) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0001d31f) cell_vitu2_itu_pane_g

0x9530,	// (0x00016f09) bg_vkb2_func_pane_cp05_ParamLimits

0x9530,	// (0x00016f09) bg_vkb2_func_pane_cp05

0x9530,	// (0x00016f09) bg_vkb2_func_pane_cp03

0x9530,	// (0x00016f09) bg_vkb2_func_pane_cp04

0x9530,	// (0x00016f09) bg_vkb2_func_pane_cp10_ParamLimits

0x9530,	// (0x00016f09) bg_vkb2_func_pane_cp10

0x7147,	// (0x00014b20) bg_vkb2_func_pane_cp08

0x712d,	// (0x00014b06) bg_vkb2_func_pane_cp06

0x713b,	// (0x00014b14) bg_vkb2_func_pane_cp07

0xd8c6,	// (0x0001b29f) bg_vkb2_func_pane_cp11_ParamLimits

0xd8c6,	// (0x0001b29f) bg_vkb2_func_pane_cp11

0xd8db,	// (0x0001b2b4) bg_vkb2_func_pane_cp12_ParamLimits

0xd8db,	// (0x0001b2b4) bg_vkb2_func_pane_cp12

0x94c0,	// (0x00016e99) bg_vkb2_func_pane_cp09

0xd1ce,	// (0x0001aba7) bg_vkb2_func_pane_g1

0xa2bd,	// (0x00017c96) bg_vkb2_func_pane_g2

0xd1d6,	// (0x0001abaf) bg_vkb2_func_pane_g3

0xd1de,	// (0x0001abb7) bg_vkb2_func_pane_g4

0xd457,	// (0x0001ae30) bg_vkb2_func_pane_g5

0xd1f6,	// (0x0001abcf) bg_vkb2_func_pane_g6

0xd1fe,	// (0x0001abd7) bg_vkb2_func_pane_g7

0xd1ee,	// (0x0001abc7) bg_vkb2_func_pane_g8

0xa29d,	// (0x00017c76) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0001d524) bg_vkb2_func_pane_g

0x7454,	// (0x00014e2d) blid2_tripm_pane_g6_ParamLimits

0x7454,	// (0x00014e2d) blid2_tripm_pane_g6

0xcf23,	// (0x0001a8fc) mp4_progress_pane_g1

0x74cf,	// (0x00014ea8) blid2_tripm_values_pane_ParamLimits

0x74cf,	// (0x00014ea8) blid2_tripm_values_pane

0x75c6,	// (0x00014f9f) blid2_tripm_values_pane_t1

0x75d4,	// (0x00014fad) blid2_tripm_values_pane_t2

0x75e2,	// (0x00014fbb) blid2_tripm_values_pane_t3

0x75f0,	// (0x00014fc9) blid2_tripm_values_pane_t4

0x75fe,	// (0x00014fd7) blid2_tripm_values_pane_t5

0x760c,	// (0x00014fe5) blid2_tripm_values_pane_t6

0x761a,	// (0x00014ff3) blid2_tripm_values_pane_t7

0x7628,	// (0x00015001) blid2_tripm_values_pane_t8

0x7636,	// (0x0001500f) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0001d537) blid2_tripm_values_pane_t

0x1c14,	// (0x0000f5ed) call_video_pane_t1_ParamLimits

0x1c32,	// (0x0000f60b) call_video_pane_t2_ParamLimits

0xf292,	// (0x0001cc6b) call_video_pane_t_ParamLimits

0x3285,	// (0x00010c5e) msg_header_pane_g1_ParamLimits

0xac0a,	// (0x000185e3) msg_header_pane_g2_ParamLimits

0xac0a,	// (0x000185e3) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0001ce85) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0001ce85) msg_header_pane_g

0x9cdb,	// (0x000176b4) main_clock2_pane_ParamLimits

0x530d,	// (0x00012ce6) grid_clock2_toolbar_pane_ParamLimits

0x530d,	// (0x00012ce6) grid_clock2_toolbar_pane

0x530d,	// (0x00012ce6) listscroll_clock2_pane_ParamLimits

0x530d,	// (0x00012ce6) listscroll_clock2_pane

0x53ea,	// (0x00012dc3) main_clock2_pane_t3_ParamLimits

0x53ea,	// (0x00012dc3) main_clock2_pane_t3

0x5405,	// (0x00012dde) main_clock2_pane_t4_ParamLimits

0x5405,	// (0x00012dde) main_clock2_pane_t4

0xd9d8,	// (0x0001b3b1) cell_clock2_toolbar_pane

0xd9e0,	// (0x0001b3b9) cell_clock2_toolbar_pane_cp01

0xd9e0,	// (0x0001b3b9) cell_clock2_toolbar_pane_cp02

0xd9e8,	// (0x0001b3c1) cell_clock2_toolbar_pane_cp03

0xd9f0,	// (0x0001b3c9) list_clock2_pane

0xa922,	// (0x000182fb) scroll_pane_cp10

0xd9f8,	// (0x0001b3d1) list_single_clock2_pane_ParamLimits

0xd9f8,	// (0x0001b3d1) list_single_clock2_pane

0xaa6f,	// (0x00018448) list_highlight_pane_cp08

0xda05,	// (0x0001b3de) list_single_clock2_pane_t1

0xda13,	// (0x0001b3ec) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0001d54a) list_single_clock2_pane_t

0x94c0,	// (0x00016e99) bg_button_pane_cp10

0xda21,	// (0x0001b3fa) cell_clock2_toolbar_pane_g1

0x32d8,	// (0x00010cb1) aid_main_viewer_pane_g1_ParamLimits

0x32d8,	// (0x00010cb1) aid_main_viewer_pane_g1

0x32e6,	// (0x00010cbf) aid_main_viewer_pane_g2_ParamLimits

0x32e6,	// (0x00010cbf) aid_main_viewer_pane_g2

0x32f4,	// (0x00010ccd) aid_main_viewer_pane_g3_ParamLimits

0x32f4,	// (0x00010ccd) aid_main_viewer_pane_g3

0x3303,	// (0x00010cdc) aid_main_viewer_pane_g4_ParamLimits

0x3303,	// (0x00010cdc) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0001ce96) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0001ce96) aid_main_viewer_pane_g

0x3c0f,	// (0x000115e8) main_calc_pane_ParamLimits

0x3c23,	// (0x000115fc) main_dialer2_pane_ParamLimits

0x94c0,	// (0x00016e99) main_cam6_pane

0x94c0,	// (0x00016e99) main_vid6_pane

0x5319,	// (0x00012cf2) listscroll_gen_pane_cp06_ParamLimits

0x5319,	// (0x00012cf2) listscroll_gen_pane_cp06

0x5420,	// (0x00012df9) main_clock2_pane_t5_ParamLimits

0x5420,	// (0x00012df9) main_clock2_pane_t5

0x547d,	// (0x00012e56) aid_call2_pane_cp10_ParamLimits

0x548f,	// (0x00012e68) aid_call_pane_cp10_ParamLimits

0xa9a4,	// (0x0001837d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa9a4,	// (0x0001837d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x54a1,	// (0x00012e7a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x54a1,	// (0x00012e7a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa9a4,	// (0x0001837d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0001d1cc) popup_clock_analogue_window_cp10_g_ParamLimits

0x54b3,	// (0x00012e8c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5b40,	// (0x00013519) cell_dialer2_keypad_pane_g2_ParamLimits

0x5b40,	// (0x00013519) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0001d2b2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0001d2b2) cell_dialer2_keypad_pane_g

0x5b5c,	// (0x00013535) cell_dialer2_keypad_pane_t1

0x67e7,	// (0x000141c0) main_cset_text2_pane_ParamLimits

0x67e7,	// (0x000141c0) main_cset_text2_pane

0xd6b4,	// (0x0001b08d) area_vitu2_query_pane_g1_ParamLimits

0x70cc,	// (0x00014aa5) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0001d467) area_vitu2_query_pane_g_ParamLimits

0xd738,	// (0x0001b111) area_vitu2_query_pane_t7_ParamLimits

0xd738,	// (0x0001b111) area_vitu2_query_pane_t7

0x712d,	// (0x00014b06) bg_button_pane_cp018_ParamLimits

0x713b,	// (0x00014b14) bg_button_pane_cp021_ParamLimits

0x7147,	// (0x00014b20) bg_button_pane_cp022_ParamLimits

0x7147,	// (0x00014b20) bg_vkb2_func_pane_cp08_ParamLimits

0x712d,	// (0x00014b06) bg_vkb2_func_pane_cp06_ParamLimits

0x713b,	// (0x00014b14) bg_vkb2_func_pane_cp07_ParamLimits

0x7158,	// (0x00014b31) input_focus_pane_cp09_ParamLimits

0xda29,	// (0x0001b402) cam6_autofocus_pane_ParamLimits

0xda29,	// (0x0001b402) cam6_autofocus_pane

0x7644,	// (0x0001501d) cam6_image_uncrop_pane_ParamLimits

0x7644,	// (0x0001501d) cam6_image_uncrop_pane

0x7653,	// (0x0001502c) cam6_indi_pane_ParamLimits

0x7653,	// (0x0001502c) cam6_indi_pane

0x7669,	// (0x00015042) cam6_mode_pane_ParamLimits

0x7669,	// (0x00015042) cam6_mode_pane

0x767b,	// (0x00015054) cam6_timer_pane_ParamLimits

0x767b,	// (0x00015054) cam6_timer_pane

0x7687,	// (0x00015060) cam6_zoom_pane_ParamLimits

0x7687,	// (0x00015060) cam6_zoom_pane

0x7693,	// (0x0001506c) cam6_mode_pane_g1_ParamLimits

0x7693,	// (0x0001506c) cam6_mode_pane_g1

0x76a3,	// (0x0001507c) cam6_mode_pane_g2_ParamLimits

0x76a3,	// (0x0001507c) cam6_mode_pane_g2

0x76b3,	// (0x0001508c) cam6_mode_pane_g3_ParamLimits

0x76b3,	// (0x0001508c) cam6_mode_pane_g3

0x76c3,	// (0x0001509c) cam6_mode_pane_g4_ParamLimits

0x76c3,	// (0x0001509c) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0001d54f) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0001d54f) cam6_mode_pane_g

0xda37,	// (0x0001b410) bg_tb_trans_pane_cp08_ParamLimits

0xda37,	// (0x0001b410) bg_tb_trans_pane_cp08

0xda45,	// (0x0001b41e) cam6_battery_pane_ParamLimits

0xda45,	// (0x0001b41e) cam6_battery_pane

0xda5b,	// (0x0001b434) cam6_indi_pane_g1_ParamLimits

0xda5b,	// (0x0001b434) cam6_indi_pane_g1

0xda6d,	// (0x0001b446) cam6_indi_pane_g2_ParamLimits

0xda6d,	// (0x0001b446) cam6_indi_pane_g2

0xda7f,	// (0x0001b458) cam6_indi_pane_g3_ParamLimits

0xda7f,	// (0x0001b458) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0001d558) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0001d558) cam6_indi_pane_g

0xda91,	// (0x0001b46a) cam6_indi_pane_t1_ParamLimits

0xda91,	// (0x0001b46a) cam6_indi_pane_t1

0x76d3,	// (0x000150ac) cam6_autofocus_pane_g1

0x76db,	// (0x000150b4) cam6_autofocus_pane_g2

0x76e3,	// (0x000150bc) cam6_autofocus_pane_g3

0x76eb,	// (0x000150c4) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0001d55f) cam6_autofocus_pane_g

0xdab7,	// (0x0001b490) cam6_timer_pane_g1

0xdabf,	// (0x0001b498) cam6_timer_pane_t1

0xdacd,	// (0x0001b4a6) cam6_zoom_cont_pane

0xdad5,	// (0x0001b4ae) cam6_zoom_pane_g1

0xdadd,	// (0x0001b4b6) cam6_zoom_pane_g2

0x76f3,	// (0x000150cc) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0001d568) cam6_zoom_pane_g

0xc416,	// (0x00019def) cam6_battery_pane_g1

0xc416,	// (0x00019def) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0001d0d9) cam6_battery_pane_g

0xdae5,	// (0x0001b4be) cam6_zoom_cont_pane_g1

0xdaee,	// (0x0001b4c7) cam6_zoom_cont_pane_g2

0xdaf7,	// (0x0001b4d0) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0001d56f) cam6_zoom_cont_pane_g

0x7710,	// (0x000150e9) cam6_mode_pane_cp_ParamLimits

0x7710,	// (0x000150e9) cam6_mode_pane_cp

0x7687,	// (0x00015060) cam6_zoom_pane_cp_ParamLimits

0x7687,	// (0x00015060) cam6_zoom_pane_cp

0x7722,	// (0x000150fb) vid6_image_uncrop_cif_pane_ParamLimits

0x7722,	// (0x000150fb) vid6_image_uncrop_cif_pane

0x7732,	// (0x0001510b) vid6_image_uncrop_nhd_pane_ParamLimits

0x7732,	// (0x0001510b) vid6_image_uncrop_nhd_pane

0x7644,	// (0x0001501d) vid6_image_uncrop_vga_pane_ParamLimits

0x7644,	// (0x0001501d) vid6_image_uncrop_vga_pane

0x7741,	// (0x0001511a) vid6_image_uncrop_wvga_pane_ParamLimits

0x7741,	// (0x0001511a) vid6_image_uncrop_wvga_pane

0x7750,	// (0x00015129) vid6_indi_pane_ParamLimits

0x7750,	// (0x00015129) vid6_indi_pane

0xda37,	// (0x0001b410) bg_tb_trans_pane_cp09_ParamLimits

0xda37,	// (0x0001b410) bg_tb_trans_pane_cp09

0xdb0f,	// (0x0001b4e8) cam6_battery_pane_cp_ParamLimits

0xdb0f,	// (0x0001b4e8) cam6_battery_pane_cp

0xdb1b,	// (0x0001b4f4) vid6_indi_pane_g1_ParamLimits

0xdb1b,	// (0x0001b4f4) vid6_indi_pane_g1

0xdb2d,	// (0x0001b506) vid6_indi_pane_g2_ParamLimits

0xdb2d,	// (0x0001b506) vid6_indi_pane_g2

0xdb3f,	// (0x0001b518) vid6_indi_pane_g3_ParamLimits

0xdb3f,	// (0x0001b518) vid6_indi_pane_g3

0xdb54,	// (0x0001b52d) vid6_indi_pane_g4_ParamLimits

0xdb54,	// (0x0001b52d) vid6_indi_pane_g4

0xdb69,	// (0x0001b542) vid6_indi_pane_g5_ParamLimits

0xdb69,	// (0x0001b542) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0001d576) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0001d576) vid6_indi_pane_g

0xdb83,	// (0x0001b55c) vid6_indi_pane_t1_ParamLimits

0xdb83,	// (0x0001b55c) vid6_indi_pane_t1

0xdb99,	// (0x0001b572) vid6_indi_pane_t2_ParamLimits

0xdb99,	// (0x0001b572) vid6_indi_pane_t2

0xdbc1,	// (0x0001b59a) vid6_indi_pane_t3_ParamLimits

0xdbc1,	// (0x0001b59a) vid6_indi_pane_t3

0xdbe9,	// (0x0001b5c2) vid6_indi_pane_t4_ParamLimits

0xdbe9,	// (0x0001b5c2) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0001d581) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0001d581) vid6_indi_pane_t

0xdc0d,	// (0x0001b5e6) wait_bar_pane_cp08

0x7768,	// (0x00015141) main_cset_text2_pane_t1_ParamLimits

0x7768,	// (0x00015141) main_cset_text2_pane_t1

0x76fb,	// (0x000150d4) listscroll_gen_pane_cp06_t1_ParamLimits

0x76fb,	// (0x000150d4) listscroll_gen_pane_cp06_t1

0x94c0,	// (0x00016e99) main_cam6_set_pane

0xc67d,	// (0x0001a056) bg_tb_trans_pane_cp06_ParamLimits

0xd0d6,	// (0x0001aaaf) cam4_indicators_pane_g1_ParamLimits

0xd0e7,	// (0x0001aac0) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0001d2ef) cam4_indicators_pane_g_ParamLimits

0xd105,	// (0x0001aade) cam4_indicators_pane_t1_ParamLimits

0xcc24,	// (0x0001a5fd) bg_tb_trans_pane_cp07_ParamLimits

0x60f6,	// (0x00013acf) vid4_indicators_pane_g1_ParamLimits

0x6103,	// (0x00013adc) vid4_indicators_pane_g2_ParamLimits

0x6110,	// (0x00013ae9) vid4_indicators_pane_g3_ParamLimits

0x611d,	// (0x00013af6) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0001d301) vid4_indicators_pane_g_ParamLimits

0x6135,	// (0x00013b0e) vid4_indicators_pane_t1_ParamLimits

0xd7b5,	// (0x0001b18e) vid4_progress_pane_g1_ParamLimits

0xd7c5,	// (0x0001b19e) vid4_progress_pane_g2_ParamLimits

0xd7d5,	// (0x0001b1ae) vid4_progress_pane_g3_ParamLimits

0xd0e7,	// (0x0001aac0) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0001d4b2) vid4_progress_pane_g_ParamLimits

0xd7e1,	// (0x0001b1ba) vid4_progress_pane_t1_ParamLimits

0xd7f6,	// (0x0001b1cf) vid4_progress_pane_t2_ParamLimits

0xd80c,	// (0x0001b1e5) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0001d4bd) vid4_progress_pane_t_ParamLimits

0xd821,	// (0x0001b1fa) wait_bar_pane_cp07_ParamLimits

0x7788,	// (0x00015161) main_cam6_set_pane_g2_ParamLimits

0x7788,	// (0x00015161) main_cam6_set_pane_g2

0x77ac,	// (0x00015185) main_cset6_listscroll_pane_ParamLimits

0x77ac,	// (0x00015185) main_cset6_listscroll_pane

0x77c8,	// (0x000151a1) main_cset6_slider_pane_ParamLimits

0x77c8,	// (0x000151a1) main_cset6_slider_pane

0x77de,	// (0x000151b7) main_cset6_text2_pane_ParamLimits

0x77de,	// (0x000151b7) main_cset6_text2_pane

0xdc1c,	// (0x0001b5f5) main_cset6_text_pane

0xdc24,	// (0x0001b5fd) main_cset_list_pane_copy1_ParamLimits

0xdc24,	// (0x0001b5fd) main_cset_list_pane_copy1

0xdc34,	// (0x0001b60d) scroll_pane_cp028_copy1

0x77ec,	// (0x000151c5) cset_list_set_pane_copy1

0x77ff,	// (0x000151d8) aid_position_infowindow_above_copy1

0x7807,	// (0x000151e0) aid_position_infowindow_below_copy1

0xdc3d,	// (0x0001b616) cset_list_set_pane_g1_copy1

0xdc45,	// (0x0001b61e) cset_list_set_pane_g3_copy1_ParamLimits

0xdc45,	// (0x0001b61e) cset_list_set_pane_g3_copy1

0xdc54,	// (0x0001b62d) cset_list_set_pane_t1_copy1_ParamLimits

0xdc54,	// (0x0001b62d) cset_list_set_pane_t1_copy1

0x9530,	// (0x00016f09) list_highlight_pane_cp021_copy1_ParamLimits

0x9530,	// (0x00016f09) list_highlight_pane_cp021_copy1

0xdc69,	// (0x0001b642) cset6_slider_pane_ParamLimits

0xdc69,	// (0x0001b642) cset6_slider_pane

0xdc95,	// (0x0001b66e) main_cset6_slider_pane_g1_ParamLimits

0xdc95,	// (0x0001b66e) main_cset6_slider_pane_g1

0x780f,	// (0x000151e8) main_cset6_slider_pane_g2_ParamLimits

0x780f,	// (0x000151e8) main_cset6_slider_pane_g2

0xd2fd,	// (0x0001acd6) main_cset6_slider_pane_g3_ParamLimits

0xd2fd,	// (0x0001acd6) main_cset6_slider_pane_g3

0x68ac,	// (0x00014285) main_cset6_slider_pane_g4_ParamLimits

0x68ac,	// (0x00014285) main_cset6_slider_pane_g4

0x68f4,	// (0x000142cd) main_cset6_slider_pane_g5_ParamLimits

0x68f4,	// (0x000142cd) main_cset6_slider_pane_g5

0xd2fd,	// (0x0001acd6) main_cset6_slider_pane_g7_ParamLimits

0xd2fd,	// (0x0001acd6) main_cset6_slider_pane_g7

0xd309,	// (0x0001ace2) main_cset6_slider_pane_g8_ParamLimits

0xd309,	// (0x0001ace2) main_cset6_slider_pane_g8

0x6894,	// (0x0001426d) main_cset6_slider_pane_g9_ParamLimits

0x6894,	// (0x0001426d) main_cset6_slider_pane_g9

0x68a0,	// (0x00014279) main_cset6_slider_pane_g10_ParamLimits

0x68a0,	// (0x00014279) main_cset6_slider_pane_g10

0x68ac,	// (0x00014285) main_cset6_slider_pane_g11_ParamLimits

0x68ac,	// (0x00014285) main_cset6_slider_pane_g11

0x68b8,	// (0x00014291) main_cset6_slider_pane_g12_ParamLimits

0x68b8,	// (0x00014291) main_cset6_slider_pane_g12

0x68c4,	// (0x0001429d) main_cset6_slider_pane_g13_ParamLimits

0x68c4,	// (0x0001429d) main_cset6_slider_pane_g13

0x68d0,	// (0x000142a9) main_cset6_slider_pane_g14_ParamLimits

0x68d0,	// (0x000142a9) main_cset6_slider_pane_g14

0x7837,	// (0x00015210) main_cset6_slider_pane_g15_ParamLimits

0x7837,	// (0x00015210) main_cset6_slider_pane_g15

0x68f4,	// (0x000142cd) main_cset6_slider_pane_g16_ParamLimits

0x68f4,	// (0x000142cd) main_cset6_slider_pane_g16

0x6900,	// (0x000142d9) main_cset6_slider_pane_g17_ParamLimits

0x6900,	// (0x000142d9) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0001d58a) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0001d58a) main_cset6_slider_pane_g

0xdcbd,	// (0x0001b696) main_cset6_slider_pane_t1_ParamLimits

0xdcbd,	// (0x0001b696) main_cset6_slider_pane_t1

0x784f,	// (0x00015228) main_cset6_slider_pane_t2_ParamLimits

0x784f,	// (0x00015228) main_cset6_slider_pane_t2

0x787a,	// (0x00015253) main_cset6_slider_pane_t3_ParamLimits

0x787a,	// (0x00015253) main_cset6_slider_pane_t3

0x78a5,	// (0x0001527e) main_cset6_slider_pane_t4_ParamLimits

0x78a5,	// (0x0001527e) main_cset6_slider_pane_t4

0x78d0,	// (0x000152a9) main_cset6_slider_pane_t5_ParamLimits

0x78d0,	// (0x000152a9) main_cset6_slider_pane_t5

0xdcfe,	// (0x0001b6d7) main_cset6_slider_pane_t7_ParamLimits

0xdcfe,	// (0x0001b6d7) main_cset6_slider_pane_t7

0x78fb,	// (0x000152d4) main_cset6_slider_pane_t8_ParamLimits

0x78fb,	// (0x000152d4) main_cset6_slider_pane_t8

0x791f,	// (0x000152f8) main_cset6_slider_pane_t9_ParamLimits

0x791f,	// (0x000152f8) main_cset6_slider_pane_t9

0x7943,	// (0x0001531c) main_cset6_slider_pane_t10_ParamLimits

0x7943,	// (0x0001531c) main_cset6_slider_pane_t10

0x7967,	// (0x00015340) main_cset6_slider_pane_t11_ParamLimits

0x7967,	// (0x00015340) main_cset6_slider_pane_t11

0xdd34,	// (0x0001b70d) main_cset6_slider_pane_t14_ParamLimits

0xdd34,	// (0x0001b70d) main_cset6_slider_pane_t14

0xdd6d,	// (0x0001b746) main_cset6_slider_pane_t15_ParamLimits

0xdd6d,	// (0x0001b746) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0001d5af) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0001d5af) main_cset6_slider_pane_t

0xd3e1,	// (0x0001adba) cset_slider_pane_g1_copy1

0xd3ea,	// (0x0001adc3) cset_slider_pane_g2_copy1

0xd3f3,	// (0x0001adcc) cset_slider_pane_g3_copy1

0x94c0,	// (0x00016e99) bg_popup_sub_pane_cp011_copy1

0xd4d8,	// (0x0001aeb1) main_cset_text_pane_g1_copy1

0xd4e0,	// (0x0001aeb9) main_cset_text_pane_t1_copy1

0xd4ee,	// (0x0001aec7) main_cset_text_pane_t2_copy1

0xd4fc,	// (0x0001aed5) main_cset_text_pane_t3_copy1

0xd50a,	// (0x0001aee3) main_cset_text_pane_t4_copy1

0xd518,	// (0x0001aef1) main_cset_text_pane_t5_copy1

0xd526,	// (0x0001aeff) main_cset_text_pane_t6_copy1

0xd534,	// (0x0001af0d) main_cset_text_pane_t7_copy1

0x7768,	// (0x00015141) main_cset_text2_pane_t1_copy1

0x94c0,	// (0x00016e99) main_ncimui_pane

0x3e59,	// (0x00011832) popup_query_ncimui_window_ParamLimits

0x3e59,	// (0x00011832) popup_query_ncimui_window

0xc6e2,	// (0x0001a0bb) field_cale_ev2_pane_g4_ParamLimits

0xc6e2,	// (0x0001a0bb) field_cale_ev2_pane_g4

0x5a18,	// (0x000133f1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5a18,	// (0x000133f1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0001d28d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0001d28d) cell_video_dialer_keypad_pane_g

0x5a30,	// (0x00013409) cell_video_dialer_keypad_pane_t1

0x94c0,	// (0x00016e99) bg_popup_window_pane_cp012

0xa7f2,	// (0x000181cb) heading_pane_cp06

0xde95,	// (0x0001b86e) ncim_query_content_pane

0x94c0,	// (0x00016e99) bg_popup_heading_pane_cp01

0xde9d,	// (0x0001b876) ncim_heading_pane_t1

0xdeab,	// (0x0001b884) ncim_indicator_popup_pane

0xdebd,	// (0x0001b896) ncim_query_button_pane

0xded1,	// (0x0001b8aa) ncim_query_content_pane_t1

0xdee3,	// (0x0001b8bc) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0001d5ee) ncim_query_content_pane_t

0xdf1d,	// (0x0001b8f6) ncim_query_list_pane

0xdf2f,	// (0x0001b908) ncim_query_popup_pane

0xdeab,	// (0x0001b884) ncim_indicator_popup_pane_ParamLimits

0x7a84,	// (0x0001545d) ncim_query_content_pane_g1_ParamLimits

0x7a84,	// (0x0001545d) ncim_query_content_pane_g1

0xded1,	// (0x0001b8aa) ncim_query_content_pane_t1_ParamLimits

0xdee3,	// (0x0001b8bc) ncim_query_content_pane_t2_ParamLimits

0x7a90,	// (0x00015469) ncim_query_content_pane_t3_ParamLimits

0x7a90,	// (0x00015469) ncim_query_content_pane_t3

0x7ab8,	// (0x00015491) ncim_query_content_pane_t4_ParamLimits

0x7ab8,	// (0x00015491) ncim_query_content_pane_t4

0x7ae0,	// (0x000154b9) ncim_query_content_pane_t5_ParamLimits

0x7ae0,	// (0x000154b9) ncim_query_content_pane_t5

0xdef5,	// (0x0001b8ce) ncim_query_content_pane_t6_ParamLimits

0xdef5,	// (0x0001b8ce) ncim_query_content_pane_t6

0xfc15,	// (0x0001d5ee) ncim_query_content_pane_t_ParamLimits

0xdf1d,	// (0x0001b8f6) ncim_query_list_pane_ParamLimits

0xdf2f,	// (0x0001b908) ncim_query_popup_pane_ParamLimits

0xdf43,	// (0x0001b91c) wait_bar_pane_cp04

0x94c0,	// (0x00016e99) input_focus_pane_cp011

0xdf4b,	// (0x0001b924) ncim_query_popup_pane_t1

0xdf59,	// (0x0001b932) ncim_list_query_list_pane_ParamLimits

0xdf59,	// (0x0001b932) ncim_list_query_list_pane

0x94c0,	// (0x00016e99) bg_button_pane_cp027

0xdf6c,	// (0x0001b945) ncim_query_button_pane_g1

0x94c0,	// (0x00016e99) list_highlight_pane_cp012

0xdf76,	// (0x0001b94f) ncim_list_query_list_pane_g1

0xdf7e,	// (0x0001b957) ncim_list_query_list_pane_t1

0xd0f6,	// (0x0001aacf) cam4_indicators_pane_g3_ParamLimits

0xd0f6,	// (0x0001aacf) cam4_indicators_pane_g3

0x6129,	// (0x00013b02) vid4_indicators_pane_g5_ParamLimits

0x6129,	// (0x00013b02) vid4_indicators_pane_g5

0xd0f6,	// (0x0001aacf) vid4_progress_pane_g5_ParamLimits

0xd0f6,	// (0x0001aacf) vid4_progress_pane_g5

0x799d,	// (0x00015376) main_ncimui_pane_g1

0x79f3,	// (0x000153cc) ncimui_group_query_pane_ParamLimits

0x79f3,	// (0x000153cc) ncimui_group_query_pane

0x7a2f,	// (0x00015408) ncimui_list_pane_ParamLimits

0x7a2f,	// (0x00015408) ncimui_list_pane

0x7a50,	// (0x00015429) ncimui_text_pane_ParamLimits

0x7a50,	// (0x00015429) ncimui_text_pane

0x7b08,	// (0x000154e1) ncimui_text_pane_t1_ParamLimits

0x7b08,	// (0x000154e1) ncimui_text_pane_t1

0xdf8c,	// (0x0001b965) ncimui_list_single_graphic_pane_ParamLimits

0xdf8c,	// (0x0001b965) ncimui_list_single_graphic_pane

0x7b26,	// (0x000154ff) ncimui_query_pane_ParamLimits

0x7b26,	// (0x000154ff) ncimui_query_pane

0x94c0,	// (0x00016e99) list_highlight_pane_cp013

0xdf9c,	// (0x0001b975) ncim_list_query_list_pane_t1_copy1

0xdf76,	// (0x0001b94f) ncim_list_single_graphic_pane_g1

0xdfaa,	// (0x0001b983) ncim_query_button_pane_cp01

0xdfb6,	// (0x0001b98f) ncim_query_entry_pane_ParamLimits

0xdfb6,	// (0x0001b98f) ncim_query_entry_pane

0xdfc9,	// (0x0001b9a2) ncimui_query_pane_g1

0xdfd5,	// (0x0001b9ae) ncimui_query_pane_t1_ParamLimits

0xdfd5,	// (0x0001b9ae) ncimui_query_pane_t1

0x9530,	// (0x00016f09) input_focus_pane_cp012

0xdfee,	// (0x0001b9c7) ncim_query_entry_pane_t1

0x9cdb,	// (0x000176b4) main_im_pane_ParamLimits

0x9530,	// (0x00016f09) main_mobtv_pane_ParamLimits

0x9530,	// (0x00016f09) main_mobtv_pane

0x6894,	// (0x0001426d) main_cset6_slider_pane_g18_ParamLimits

0x6894,	// (0x0001426d) main_cset6_slider_pane_g18

0x68c4,	// (0x0001429d) main_cset6_slider_pane_g19_ParamLimits

0x68c4,	// (0x0001429d) main_cset6_slider_pane_g19

0xe000,	// (0x0001b9d9) bg_main_mobtv_pane_ParamLimits

0xe000,	// (0x0001b9d9) bg_main_mobtv_pane

0x7b39,	// (0x00015512) main_mobtv_info_pane

0x7b42,	// (0x0001551b) main_mobtv_loading_pane_ParamLimits

0x7b42,	// (0x0001551b) main_mobtv_loading_pane

0xe00e,	// (0x0001b9e7) main_mobtv_pg_channel_list_pane

0xe018,	// (0x0001b9f1) main_mobtv_pg_hdr_pane

0x7b4f,	// (0x00015528) main_mobtv_programe_curr_pane_ParamLimits

0x7b4f,	// (0x00015528) main_mobtv_programe_curr_pane

0x7b5c,	// (0x00015535) main_mobtv_programe_next_pane_ParamLimits

0x7b5c,	// (0x00015535) main_mobtv_programe_next_pane

0xe021,	// (0x0001b9fa) popup_mobtv_noti_window

0xc416,	// (0x00019def) main_tv_pg_hdr_pane_g1

0xe029,	// (0x0001ba02) main_tv_pg_hdr_pane_g2

0xe031,	// (0x0001ba0a) main_tv_pg_hdr_pane_g3

0xe039,	// (0x0001ba12) main_tv_pg_hdr_pane_g4

0xe041,	// (0x0001ba1a) main_tv_pg_hdr_pane_g5

0xe04b,	// (0x0001ba24) main_tv_pg_hdr_pane_g6

0xe055,	// (0x0001ba2e) main_tv_pg_hdr_pane_g7

0xe05f,	// (0x0001ba38) main_tv_pg_hdr_pane_g8

0xe069,	// (0x0001ba42) main_tv_pg_hdr_pane_g9

0xe073,	// (0x0001ba4c) main_tv_pg_hdr_pane_g10

0xe07d,	// (0x0001ba56) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0001d5fb) main_tv_pg_hdr_pane_g

0xe087,	// (0x0001ba60) main_tv_pg_hdr_pane_t1

0xe095,	// (0x0001ba6e) main_tv_pg_hdr_pane_t2

0xe0a3,	// (0x0001ba7c) main_tv_pg_hdr_pane_t3

0xe0b3,	// (0x0001ba8c) main_tv_pg_hdr_pane_t4

0xe0c3,	// (0x0001ba9c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0001d612) main_tv_pg_hdr_pane_t

0xe0d3,	// (0x0001baac) single_mobtv_pg_channel_pane_ParamLimits

0xe0d3,	// (0x0001baac) single_mobtv_pg_channel_pane

0xe0e5,	// (0x0001babe) single_mobtv_pg_channel_table_pane

0xe0ee,	// (0x0001bac7) single_mobtv_pg_channel_thumb_pane

0xe0f7,	// (0x0001bad0) single_tv_pg_channel_pane_g1

0xe100,	// (0x0001bad9) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0001d61d) single_tv_pg_channel_pane_g

0xc67d,	// (0x0001a056) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc67d,	// (0x0001a056) bg_single_mobtv_pg_channel_thumb_pane

0xe109,	// (0x0001bae2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe109,	// (0x0001bae2) single_mobtv_pg_channel_thumb_pane_g1

0xe117,	// (0x0001baf0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe117,	// (0x0001baf0) single_mobtv_pg_channel_thumb_pane_g2

0xe123,	// (0x0001bafc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe123,	// (0x0001bafc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0001d622) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0001d622) single_mobtv_pg_channel_thumb_pane_g

0xe12f,	// (0x0001bb08) single_mobtv_pg_channel_thumb_pane_t1

0xe13d,	// (0x0001bb16) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0001d629) single_mobtv_pg_channel_thumb_pane_t

0xc416,	// (0x00019def) bg_single_mobtv_pg_channel_table_pane_g1

0xc416,	// (0x00019def) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0001d0d9) bg_single_mobtv_pg_channel_table_pane_g

0xe14b,	// (0x0001bb24) single_mobtv_pg_channel_table_pane_t1

0xe159,	// (0x0001bb32) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0001d62e) single_mobtv_pg_channel_table_pane_t

0x7b71,	// (0x0001554a) main_mobtv_info_pane_g1_ParamLimits

0x7b71,	// (0x0001554a) main_mobtv_info_pane_g1

0x7b8f,	// (0x00015568) main_mobtv_info_pane_t1_ParamLimits

0x7b8f,	// (0x00015568) main_mobtv_info_pane_t1

0x7c07,	// (0x000155e0) main_mobtv_info_pane_t2_ParamLimits

0x7c07,	// (0x000155e0) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0001d638) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0001d638) main_mobtv_info_pane_t

0x7c96,	// (0x0001566f) wait_bar_pane_cp05

0x7ca8,	// (0x00015681) main_mobtv_loading_pane_g1_ParamLimits

0x7ca8,	// (0x00015681) main_mobtv_loading_pane_g1

0x7cbb,	// (0x00015694) main_mobtv_loading_pane_g2_ParamLimits

0x7cbb,	// (0x00015694) main_mobtv_loading_pane_g2

0x7cc7,	// (0x000156a0) main_mobtv_loading_pane_g3_ParamLimits

0x7cc7,	// (0x000156a0) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0001d63f) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0001d63f) main_mobtv_loading_pane_g

0xe167,	// (0x0001bb40) main_mobtv_loading_pane_t1_ParamLimits

0xe167,	// (0x0001bb40) main_mobtv_loading_pane_t1

0xe17f,	// (0x0001bb58) main_mobtv_loading_pane_t2_ParamLimits

0xe17f,	// (0x0001bb58) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0001d646) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0001d646) main_mobtv_loading_pane_t

0x7cda,	// (0x000156b3) wait_bar_pane_cp06_ParamLimits

0x7cda,	// (0x000156b3) wait_bar_pane_cp06

0xe1a3,	// (0x0001bb7c) main_mobtv_programe_curr_pane_t1

0xe1b1,	// (0x0001bb8a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0001d64b) main_mobtv_programe_curr_pane_t

0xe1bf,	// (0x0001bb98) main_mobtv_programe_next_pane_t1

0xe1cd,	// (0x0001bba6) main_mobtv_programe_next_pane_t2

0xe1db,	// (0x0001bbb4) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0001d650) main_mobtv_programe_next_pane_t

0x94c0,	// (0x00016e99) bg_popup_mobtv_noti_window_pane

0xe1e9,	// (0x0001bbc2) popup_mobtv_noti_window_g1

0xe1f1,	// (0x0001bbca) popup_mobtv_noti_window_t1

0xe1ff,	// (0x0001bbd8) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0001d657) popup_mobtv_noti_window_t

0xc416,	// (0x00019def) bg_popup_mobtv_noti_window_pane_g1

0x94c0,	// (0x00016e99) sc_clock_pane

0x94c0,	// (0x00016e99) main_fs_bigclock_pane

0x74b9,	// (0x00014e92) blid2_tripm_pane_t4_ParamLimits

0x74b9,	// (0x00014e92) blid2_tripm_pane_t4

0x7ce9,	// (0x000156c2) sc_clock_pane_g1_ParamLimits

0x7ce9,	// (0x000156c2) sc_clock_pane_g1

0x7cfb,	// (0x000156d4) sc_clock_pane_t1_ParamLimits

0x7cfb,	// (0x000156d4) sc_clock_pane_t1

0x7d1d,	// (0x000156f6) sc_clock_pane_t2_ParamLimits

0x7d1d,	// (0x000156f6) sc_clock_pane_t2

0x7d35,	// (0x0001570e) sc_clock_pane_t3_ParamLimits

0x7d35,	// (0x0001570e) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0001d65c) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0001d65c) sc_clock_pane_t

0x8c20,	// (0x000165f9) main_fs_bigclock_indicator_pane_ParamLimits

0x8c20,	// (0x000165f9) main_fs_bigclock_indicator_pane

0xc64d,	// (0x0001a026) main_fs_bigclock_pane_g1_ParamLimits

0xc64d,	// (0x0001a026) main_fs_bigclock_pane_g1

0x8c2c,	// (0x00016605) main_fs_bigclock_pane_t1_ParamLimits

0x8c2c,	// (0x00016605) main_fs_bigclock_pane_t1

0x8c3e,	// (0x00016617) main_fs_bigclock_pane_t2_ParamLimits

0x8c3e,	// (0x00016617) main_fs_bigclock_pane_t2

0x8c50,	// (0x00016629) main_fs_bigclock_pane_t3_ParamLimits

0x8c50,	// (0x00016629) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x0001d856) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x0001d856) main_fs_bigclock_pane_t

0xecef,	// (0x0001c6c8) main_fs_bigclock_indicator_pane_g1

0xdec5,	// (0x0001b89e) ncim_query_content_pane_g2_ParamLimits

0xdec5,	// (0x0001b89e) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0001d5e9) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0001d5e9) ncim_query_content_pane_g

0x7d4e,	// (0x00015727) sc_clock_pane_t4_ParamLimits

0x7d4e,	// (0x00015727) sc_clock_pane_t4

0x9530,	// (0x00016f09) main_radioblah_pane

0xd03c,	// (0x0001aa15) cell_call4_button_pane_t1_copy1_ParamLimits

0xd03c,	// (0x0001aa15) cell_call4_button_pane_t1_copy1

0x79a5,	// (0x0001537e) main_ncimui_pane_t1_ParamLimits

0x79a5,	// (0x0001537e) main_ncimui_pane_t1

0x79bf,	// (0x00015398) main_ncimui_pane_t2_ParamLimits

0x79bf,	// (0x00015398) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0001d5e2) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0001d5e2) main_ncimui_pane_t

0xe20d,	// (0x0001bbe6) main_radioblah_anim_pane_ParamLimits

0xe20d,	// (0x0001bbe6) main_radioblah_anim_pane

0xe21e,	// (0x0001bbf7) main_radioblah_info_pane_ParamLimits

0xe21e,	// (0x0001bbf7) main_radioblah_info_pane

0xe232,	// (0x0001bc0b) main_radioblah_pane_t1_ParamLimits

0xe232,	// (0x0001bc0b) main_radioblah_pane_t1

0xe24e,	// (0x0001bc27) main_radioblah_pane_t2_ParamLimits

0xe24e,	// (0x0001bc27) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0001d67d) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0001d67d) main_radioblah_pane_t

0x7f1e,	// (0x000158f7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7f1e,	// (0x000158f7) main_radioblah_rocker_ctrl_pane

0xe296,	// (0x0001bc6f) main_radioblah_info_pane_t1_ParamLimits

0xe296,	// (0x0001bc6f) main_radioblah_info_pane_t1

0x7f76,	// (0x0001594f) main_radioblah_info_pane_t2_ParamLimits

0x7f76,	// (0x0001594f) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0001d686) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0001d686) main_radioblah_info_pane_t

0xc416,	// (0x00019def) main_radioblah_rocker_ctrl_pane_g1

0x8028,	// (0x00015a01) main_radioblah_rocker_ctrl_pane_g2

0x8030,	// (0x00015a09) main_radioblah_rocker_ctrl_pane_g3

0x8038,	// (0x00015a11) main_radioblah_rocker_ctrl_pane_g4

0x8040,	// (0x00015a19) main_radioblah_rocker_ctrl_pane_g5

0x8048,	// (0x00015a21) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0001d68f) main_radioblah_rocker_ctrl_pane_g

0x7768,	// (0x00015141) main_cset_text2_pane_t1_copy1_ParamLimits

0xd0c6,	// (0x0001aa9f) cam4_image_uncrop_qvga_pane

0xd11f,	// (0x0001aaf8) vid4_image_uncrop_qcif_pane

0xda29,	// (0x0001b402) cam6_image_uncrop_qvga_pane_ParamLimits

0xda29,	// (0x0001b402) cam6_image_uncrop_qvga_pane

0xdaff,	// (0x0001b4d8) vid6_image_uncrop_qcif_pane_ParamLimits

0xdaff,	// (0x0001b4d8) vid6_image_uncrop_qcif_pane

0x94c0,	// (0x00016e99) bg_popup_preview_window_pane_cp03

0xde77,	// (0x0001b850) list_cset_text2_pane

0xde7f,	// (0x0001b858) main_cset6_text2_pane_g1

0xde87,	// (0x0001b860) main_cset6_text2_pane_t1

0x8050,	// (0x00015a29) list_cset_text2_pane_t1_ParamLimits

0x8050,	// (0x00015a29) list_cset_text2_pane_t1

0x9530,	// (0x00016f09) main_radioblah_pane_ParamLimits

0x7c82,	// (0x0001565b) main_mobtv_info_pane_t3_ParamLimits

0x7c82,	// (0x0001565b) main_mobtv_info_pane_t3

0x7f0c,	// (0x000158e5) main_radioblah_pane_g1

0x7f46,	// (0x0001591f) main_radioblah_info_pane_g1

0x7fcd,	// (0x000159a6) main_radioblah_info_pane_t3_ParamLimits

0x7fcd,	// (0x000159a6) main_radioblah_info_pane_t3

0x27f7,	// (0x000101d0) highlight_cell_cale_month_pane_ParamLimits

0x27f7,	// (0x000101d0) highlight_cell_cale_month_pane

0x94c0,	// (0x00016e99) main_phob_fisheye_pane

0xc797,	// (0x0001a170) scroll_pane_cp0031_ParamLimits

0xc797,	// (0x0001a170) scroll_pane_cp0031

0xdc0d,	// (0x0001b5e6) wait_bar_pane_cp08_ParamLimits

0x77ec,	// (0x000151c5) cset_list_set_pane_copy1_ParamLimits

0xe2d0,	// (0x0001bca9) highlight_cell_cale_month_pane_g1

0x806d,	// (0x00015a46) highlight_cell_cale_month_pane_t1

0xd7a4,	// (0x0001b17d) list_gen_pane_cp01

0xd2e8,	// (0x0001acc1) scroll_pane_01

0xeb89,	// (0x0001c562) list_single_double_fisheye_pane

0xe2d8,	// (0x0001bcb1) list_double_fisheye_pane_g1_ParamLimits

0xe2d8,	// (0x0001bcb1) list_double_fisheye_pane_g1

0xe2e4,	// (0x0001bcbd) list_double_fisheye_pane_g2_ParamLimits

0xe2e4,	// (0x0001bcbd) list_double_fisheye_pane_g2

0x807b,	// (0x00015a54) list_double_fisheye_pane_g3_ParamLimits

0x807b,	// (0x00015a54) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0001d69c) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0001d69c) list_double_fisheye_pane_g

0x8087,	// (0x00015a60) list_double_fisheye_pane_t1_ParamLimits

0x8087,	// (0x00015a60) list_double_fisheye_pane_t1

0x80a2,	// (0x00015a7b) list_double_fisheye_pane_t2_ParamLimits

0x80a2,	// (0x00015a7b) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0001d6a7) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0001d6a7) list_double_fisheye_pane_t

0x94c0,	// (0x00016e99) main_call5_pane

0x7d79,	// (0x00015752) sc_swipe_pane_ParamLimits

0x7d79,	// (0x00015752) sc_swipe_pane

0x80d7,	// (0x00015ab0) call5_image_pane_ParamLimits

0x80d7,	// (0x00015ab0) call5_image_pane

0x80f4,	// (0x00015acd) call5_swipe_1_pane_ParamLimits

0x80f4,	// (0x00015acd) call5_swipe_1_pane

0x8107,	// (0x00015ae0) call5_swipe_2_pane_ParamLimits

0x8107,	// (0x00015ae0) call5_swipe_2_pane

0x8132,	// (0x00015b0b) popup_call5_audio_first_window_ParamLimits

0x8132,	// (0x00015b0b) popup_call5_audio_first_window

0xc67d,	// (0x0001a056) call5_swipe_1_pane_g1_ParamLimits

0xc67d,	// (0x0001a056) call5_swipe_1_pane_g1

0xe315,	// (0x0001bcee) call5_swipe_1_pane_g2_ParamLimits

0xe315,	// (0x0001bcee) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0001d6ac) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0001d6ac) call5_swipe_1_pane_g

0xe321,	// (0x0001bcfa) call5_swipe_1_pane_t1_ParamLimits

0xe321,	// (0x0001bcfa) call5_swipe_1_pane_t1

0xc67d,	// (0x0001a056) call5_swipe_2_pane_g1_ParamLimits

0xc67d,	// (0x0001a056) call5_swipe_2_pane_g1

0xe336,	// (0x0001bd0f) call5_swipe_2_pane_g2_ParamLimits

0xe336,	// (0x0001bd0f) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0001d6b1) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0001d6b1) call5_swipe_2_pane_g

0xe342,	// (0x0001bd1b) call5_swipe_2_pane_t1_ParamLimits

0xe342,	// (0x0001bd1b) call5_swipe_2_pane_t1

0xe357,	// (0x0001bd30) sc_swipe_pane_g1_ParamLimits

0xe357,	// (0x0001bd30) sc_swipe_pane_g1

0xe364,	// (0x0001bd3d) sc_swipe_pane_g2_ParamLimits

0xe364,	// (0x0001bd3d) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0001d6b6) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0001d6b6) sc_swipe_pane_g

0xe370,	// (0x0001bd49) sc_swipe_pane_t1_ParamLimits

0xe370,	// (0x0001bd49) sc_swipe_pane_t1

0x94c0,	// (0x00016e99) main_cmail_launcher_pane

0x8143,	// (0x00015b1c) aid_size_cell_cmail_l_ParamLimits

0x8143,	// (0x00015b1c) aid_size_cell_cmail_l

0x815d,	// (0x00015b36) grid_cmail_l_pane_ParamLimits

0x815d,	// (0x00015b36) grid_cmail_l_pane

0x8178,	// (0x00015b51) cell_cmail_l_pane_ParamLimits

0x8178,	// (0x00015b51) cell_cmail_l_pane

0x819e,	// (0x00015b77) cell_cmail_l_pane_g1_ParamLimits

0x819e,	// (0x00015b77) cell_cmail_l_pane_g1

0x81aa,	// (0x00015b83) cell_cmail_l_pane_t1_ParamLimits

0x81aa,	// (0x00015b83) cell_cmail_l_pane_t1

0xe385,	// (0x0001bd5e) cell_cmail_l_pane_t2_ParamLimits

0xe385,	// (0x0001bd5e) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0001d6bb) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0001d6bb) cell_cmail_l_pane_t

0x9530,	// (0x00016f09) grid_highlight_pane_cp018_ParamLimits

0x9530,	// (0x00016f09) grid_highlight_pane_cp018

0x0e94,	// (0x0000e86d) main2_pane_ParamLimits

0x0e94,	// (0x0000e86d) main2_pane

0x9db4,	// (0x0001778d) popup_sp_fs_action_menu_bg_pane_g1

0x9dbc,	// (0x00017795) popup_sp_fs_action_menu_bg_pane_g2

0x9dc4,	// (0x0001779d) popup_sp_fs_action_menu_bg_pane_g3

0x9dcc,	// (0x000177a5) popup_sp_fs_action_menu_bg_pane_g4

0x9dd4,	// (0x000177ad) popup_sp_fs_action_menu_bg_pane_g5

0x9ddc,	// (0x000177b5) popup_sp_fs_action_menu_bg_pane_g6

0x9de4,	// (0x000177bd) popup_sp_fs_action_menu_bg_pane_g7

0x9dec,	// (0x000177c5) popup_sp_fs_action_menu_bg_pane_g8

0x9df4,	// (0x000177cd) popup_sp_fs_action_menu_bg_pane_g9

0x9dfc,	// (0x000177d5) popup_sp_fs_action_menu_bg_pane_g10

0x9dfc,	// (0x000177d5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0001cb85) popup_sp_fs_action_menu_bg_pane_g

0xa00b,	// (0x000179e4) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x2_t3_g3_g1

0xa017,	// (0x000179f0) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa017,	// (0x000179f0) list_medium_line_x2_t3_g3_g2

0xa023,	// (0x000179fc) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa023,	// (0x000179fc) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0001cc35) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0001cc35) list_medium_line_x2_t3_g3_g

0xa02f,	// (0x00017a08) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa02f,	// (0x00017a08) list_medium_line_x2_t3_g3_t1

0x1b0f,	// (0x0000f4e8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b0f,	// (0x0000f4e8) list_medium_line_x2_t3_g3_t2

0xa044,	// (0x00017a1d) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa044,	// (0x00017a1d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0001cc3c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0001cc3c) list_medium_line_x2_t3_g3_t

0xa00b,	// (0x000179e4) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x2_t3_g2_g1

0xa023,	// (0x000179fc) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa023,	// (0x000179fc) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0001cc43) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0001cc43) list_medium_line_x2_t3_g2_g

0xa059,	// (0x00017a32) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa059,	// (0x00017a32) list_medium_line_x2_t3_g2_t1

0xa06f,	// (0x00017a48) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa06f,	// (0x00017a48) list_medium_line_x2_t3_g2_t2

0xa081,	// (0x00017a5a) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa081,	// (0x00017a5a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0001cc48) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0001cc48) list_medium_line_x2_t3_g2_t

0xa00b,	// (0x000179e4) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x2_t4_g4_g1

0xa09e,	// (0x00017a77) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa09e,	// (0x00017a77) list_medium_line_x2_t4_g4_g2

0xa017,	// (0x000179f0) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa017,	// (0x000179f0) list_medium_line_x2_t4_g4_g3

0xa0aa,	// (0x00017a83) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa0aa,	// (0x00017a83) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0001cc4f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0001cc4f) list_medium_line_x2_t4_g4_g

0x1b23,	// (0x0000f4fc) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1b23,	// (0x0000f4fc) list_medium_line_x2_t4_g4_t1

0x1b3a,	// (0x0000f513) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1b3a,	// (0x0000f513) list_medium_line_x2_t4_g4_t2

0x1b4f,	// (0x0000f528) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1b4f,	// (0x0000f528) list_medium_line_x2_t4_g4_t3

0xa0b6,	// (0x00017a8f) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa0b6,	// (0x00017a8f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0001cc58) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0001cc58) list_medium_line_x2_t4_g4_t

0xa00b,	// (0x000179e4) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x2_t2_g4_g1

0xa09e,	// (0x00017a77) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa09e,	// (0x00017a77) list_medium_line_x2_t2_g4_g2

0xa017,	// (0x000179f0) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa017,	// (0x000179f0) list_medium_line_x2_t2_g4_g3

0xa023,	// (0x000179fc) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa023,	// (0x000179fc) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0001ccbf) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0001ccbf) list_medium_line_x2_t2_g4_g

0xa39e,	// (0x00017d77) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa39e,	// (0x00017d77) list_medium_line_x2_t2_g4_t1

0xa044,	// (0x00017a1d) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa044,	// (0x00017a1d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0001ccc8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0001ccc8) list_medium_line_x2_t2_g4_t

0xa00b,	// (0x000179e4) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x2_t2_g3_g1

0xa017,	// (0x000179f0) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa017,	// (0x000179f0) list_medium_line_x2_t2_g3_g2

0xa023,	// (0x000179fc) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa023,	// (0x000179fc) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0001cc35) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0001cc35) list_medium_line_x2_t2_g3_g

0xa3b3,	// (0x00017d8c) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa3b3,	// (0x00017d8c) list_medium_line_x2_t2_g3_t1

0xa044,	// (0x00017a1d) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa044,	// (0x00017a1d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0001cccd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0001cccd) list_medium_line_x2_t2_g3_t

0x29dd,	// (0x000103b6) main_sp_fs_list_pane_ParamLimits

0x29dd,	// (0x000103b6) main_sp_fs_list_pane

0x29e9,	// (0x000103c2) sp_fs_scroll_pane_ParamLimits

0x29e9,	// (0x000103c2) sp_fs_scroll_pane

0x29f5,	// (0x000103ce) list_medium_line_x2_t3_t1

0x2a05,	// (0x000103de) list_medium_line_x2_t3_t2

0xa597,	// (0x00017f70) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0001cd18) list_medium_line_x2_t3_t

0x2a13,	// (0x000103ec) list_medium_line_x3_t4_t1

0x2a23,	// (0x000103fc) list_medium_line_x3_t4_t2

0xa5a5,	// (0x00017f7e) list_medium_line_x3_t4_t3

0xa597,	// (0x00017f70) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0001cd1f) list_medium_line_x3_t4_t

0x2a31,	// (0x0001040a) list_medium_line_x4_t5_t1

0x2a41,	// (0x0001041a) list_medium_line_x4_t5_t2

0xa5a5,	// (0x00017f7e) list_medium_line_x4_t5_t3

0xa5b3,	// (0x00017f8c) list_medium_line_x4_t5_t4

0xa597,	// (0x00017f70) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0001cd28) list_medium_line_x4_t5_t

0xa00b,	// (0x000179e4) list_medium_line_t4_g4_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_t4_g4_g1

0xa0aa,	// (0x00017a83) list_medium_line_t4_g4_g2_ParamLimits

0xa0aa,	// (0x00017a83) list_medium_line_t4_g4_g2

0xa5c1,	// (0x00017f9a) list_medium_line_t4_g4_g3_ParamLimits

0xa5c1,	// (0x00017f9a) list_medium_line_t4_g4_g3

0xa023,	// (0x000179fc) list_medium_line_t4_g4_g4_ParamLimits

0xa023,	// (0x000179fc) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0001cd33) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0001cd33) list_medium_line_t4_g4_g

0xa5cd,	// (0x00017fa6) list_medium_line_t4_g4_t1_ParamLimits

0xa5cd,	// (0x00017fa6) list_medium_line_t4_g4_t1

0xa5e2,	// (0x00017fbb) list_medium_line_t4_g4_t2_ParamLimits

0xa5e2,	// (0x00017fbb) list_medium_line_t4_g4_t2

0xa5f7,	// (0x00017fd0) list_medium_line_t4_g4_t3_ParamLimits

0xa5f7,	// (0x00017fd0) list_medium_line_t4_g4_t3

0xa044,	// (0x00017a1d) list_medium_line_t4_g4_t4_ParamLimits

0xa044,	// (0x00017a1d) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0001cd3c) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0001cd3c) list_medium_line_t4_g4_t

0x2aed,	// (0x000104c6) chi_dic_find_pane_g1

0x3c37,	// (0x00011610) main_tport_pane

0xd42d,	// (0x0001ae06) list_medium_line_plain_t1

0xd47f,	// (0x0001ae58) list_medium_line_t2_g2_g1_ParamLimits

0xd47f,	// (0x0001ae58) list_medium_line_t2_g2_g1

0xd48b,	// (0x0001ae64) list_medium_line_t2_g2_g2_ParamLimits

0xd48b,	// (0x0001ae64) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0001d3f8) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0001d3f8) list_medium_line_t2_g2_g

0x6c72,	// (0x0001464b) list_medium_line_t2_g2_t1_ParamLimits

0x6c72,	// (0x0001464b) list_medium_line_t2_g2_t1

0x6c8c,	// (0x00014665) list_medium_line_t2_g2_t2_ParamLimits

0x6c8c,	// (0x00014665) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0001d3fd) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0001d3fd) list_medium_line_t2_g2_t

0xd831,	// (0x0001b20a) aid_sp_fs_list_icon_a_sm

0xd839,	// (0x0001b212) aid_sp_fs_list_icon_d

0xd841,	// (0x0001b21a) aid_sp_fs_text_primary

0xd84a,	// (0x0001b223) aid_sp_fs_text_secondary

0xd853,	// (0x0001b22c) list_medium_line

0xd853,	// (0x0001b22c) list_medium_line_g2

0xd853,	// (0x0001b22c) list_medium_line_g3

0xd853,	// (0x0001b22c) list_medium_line_plain

0xd853,	// (0x0001b22c) list_medium_line_plain_t2

0xd853,	// (0x0001b22c) list_medium_line_plain_t3

0xd853,	// (0x0001b22c) list_medium_line_right_icon

0xd853,	// (0x0001b22c) list_medium_line_right_iconx2

0xd853,	// (0x0001b22c) list_medium_line_t2

0xd853,	// (0x0001b22c) list_medium_line_t2_g2

0xd853,	// (0x0001b22c) list_medium_line_t2_g3

0xd853,	// (0x0001b22c) list_medium_line_t2_right_icon

0xd853,	// (0x0001b22c) list_medium_line_t2_right_iconx2

0xd853,	// (0x0001b22c) list_medium_line_t3

0xd853,	// (0x0001b22c) list_medium_line_t3_g2

0xd853,	// (0x0001b22c) list_medium_line_t3_g3

0xd853,	// (0x0001b22c) list_medium_line_t3_right_iconx2

0xd85c,	// (0x0001b235) list_medium_line_t4_g4

0xd865,	// (0x0001b23e) list_medium_line_x2

0xd865,	// (0x0001b23e) list_medium_line_x2_t2_g2

0xd865,	// (0x0001b23e) list_medium_line_x2_t2_g3

0xd865,	// (0x0001b23e) list_medium_line_x2_t2_g4

0xd865,	// (0x0001b23e) list_medium_line_x2_t3

0xd865,	// (0x0001b23e) list_medium_line_x2_t3_g2

0xd865,	// (0x0001b23e) list_medium_line_x2_t3_g3

0xd865,	// (0x0001b23e) list_medium_line_x2_t3_g4

0xd865,	// (0x0001b23e) list_medium_line_x2_t4_g2

0xd865,	// (0x0001b23e) list_medium_line_x2_t4_g4

0xd86e,	// (0x0001b247) list_medium_line_x3

0xd86e,	// (0x0001b247) list_medium_line_x3_t4

0xd86e,	// (0x0001b247) list_medium_line_x3_t4_g4

0xd85c,	// (0x0001b235) list_medium_line_x4_t4

0xd85c,	// (0x0001b235) list_medium_line_x4_t4_g7

0xd85c,	// (0x0001b235) list_medium_line_x4_t5

0xd877,	// (0x0001b250) list_single_fs_dyc_pane_ParamLimits

0xd877,	// (0x0001b250) list_single_fs_dyc_pane

0xa00b,	// (0x000179e4) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x4_t4_g7_g1

0xdda6,	// (0x0001b77f) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdda6,	// (0x0001b77f) list_medium_line_x4_t4_g7_g2

0xddb2,	// (0x0001b78b) list_medium_line_x4_t4_g7_g3_ParamLimits

0xddb2,	// (0x0001b78b) list_medium_line_x4_t4_g7_g3

0xddc1,	// (0x0001b79a) list_medium_line_x4_t4_g7_g4_ParamLimits

0xddc1,	// (0x0001b79a) list_medium_line_x4_t4_g7_g4

0xddcd,	// (0x0001b7a6) list_medium_line_x4_t4_g7_g5_ParamLimits

0xddcd,	// (0x0001b7a6) list_medium_line_x4_t4_g7_g5

0xdddc,	// (0x0001b7b5) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdddc,	// (0x0001b7b5) list_medium_line_x4_t4_g7_g6

0xddeb,	// (0x0001b7c4) list_medium_line_x4_t4_g7_g7_ParamLimits

0xddeb,	// (0x0001b7c4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0001d5c8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0001d5c8) list_medium_line_x4_t4_g7_g

0xddf7,	// (0x0001b7d0) list_medium_line_x4_t4_g7_t1_ParamLimits

0xddf7,	// (0x0001b7d0) list_medium_line_x4_t4_g7_t1

0xde0c,	// (0x0001b7e5) list_medium_line_x4_t4_g7_t2_ParamLimits

0xde0c,	// (0x0001b7e5) list_medium_line_x4_t4_g7_t2

0xde21,	// (0x0001b7fa) list_medium_line_x4_t4_g7_t3_ParamLimits

0xde21,	// (0x0001b7fa) list_medium_line_x4_t4_g7_t3

0xde36,	// (0x0001b80f) list_medium_line_x4_t4_g7_t4_ParamLimits

0xde36,	// (0x0001b80f) list_medium_line_x4_t4_g7_t4

0xde48,	// (0x0001b821) list_medium_line_x4_t4_g7_t5_ParamLimits

0xde48,	// (0x0001b821) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0001d5d7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0001d5d7) list_medium_line_x4_t4_g7_t

0xde5a,	// (0x0001b833) list_single_dyc_row_pane_ParamLimits

0xde5a,	// (0x0001b833) list_single_dyc_row_pane

0x80c4,	// (0x00015a9d) call5_gesture_pane_ParamLimits

0x80c4,	// (0x00015a9d) call5_gesture_pane

0x811a,	// (0x00015af3) call5_windows_pane_ParamLimits

0x811a,	// (0x00015af3) call5_windows_pane

0x81c0,	// (0x00015b99) call5_swipe_1_pane_cp_ParamLimits

0x81c0,	// (0x00015b99) call5_swipe_1_pane_cp

0x81cc,	// (0x00015ba5) call5_swipe_2_pane_cp_ParamLimits

0x81cc,	// (0x00015ba5) call5_swipe_2_pane_cp

0xaa6f,	// (0x00018448) call5_image_pane_cp

0x81d8,	// (0x00015bb1) popup_call5_audio_first_window_cp_ParamLimits

0x81d8,	// (0x00015bb1) popup_call5_audio_first_window_cp

0xe357,	// (0x0001bd30) call5_swipe_1_pane_g1_cp_ParamLimits

0xe357,	// (0x0001bd30) call5_swipe_1_pane_g1_cp

0xe397,	// (0x0001bd70) call5_swipe_1_pane_g2_cp

0xe370,	// (0x0001bd49) call5_swipe_1_pane_t1_cp_ParamLimits

0xe370,	// (0x0001bd49) call5_swipe_1_pane_t1_cp

0xe357,	// (0x0001bd30) call5_swipe_2_pane_g1_cp_ParamLimits

0xe357,	// (0x0001bd30) call5_swipe_2_pane_g1_cp

0xe39f,	// (0x0001bd78) call5_swipe_2_pane_g2_cp

0xe3a7,	// (0x0001bd80) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3a7,	// (0x0001bd80) call5_swipe_2_pane_t1_cp

0x9530,	// (0x00016f09) main_sp_fs_email_pane

0xe3bc,	// (0x0001bd95) main_sp_fs_listscroll_pane_te

0xe3c5,	// (0x0001bd9e) popup_sp_fs_action_menu_pane_ParamLimits

0xe3c5,	// (0x0001bd9e) popup_sp_fs_action_menu_pane

0xc416,	// (0x00019def) bg_sp_fs_ctrlbar_pane_g1

0xe405,	// (0x0001bdde) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe40e,	// (0x0001bde7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe417,	// (0x0001bdf0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc416,	// (0x00019def) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0001d6c0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc1f9,	// (0x00019bd2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc1f9,	// (0x00019bd2) bg_sp_fs_ctrlbar_ddmenu_pane

0xe420,	// (0x0001bdf9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe420,	// (0x0001bdf9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe42c,	// (0x0001be05) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe42c,	// (0x0001be05) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0001d6c9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0001d6c9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe438,	// (0x0001be11) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe438,	// (0x0001be11) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe452,	// (0x0001be2b) list_medium_line_t2_right_icon_g1

0x81e4,	// (0x00015bbd) list_medium_line_t2_right_icon_t1

0x81f4,	// (0x00015bcd) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0001d6ce) list_medium_line_t2_right_icon_t

0xbf0e,	// (0x000198e7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbf0e,	// (0x000198e7) bg_sp_fs_ctrlbar_pane

0x824e,	// (0x00015c27) main_sp_fs_ctrlbar_button_pane_cp01

0x8258,	// (0x00015c31) main_sp_fs_ctrlbar_ddmenu_pane

0xa00b,	// (0x000179e4) main_sp_fs_ctrlbar_pane_g1

0xe492,	// (0x0001be6b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0001d6d3) main_sp_fs_ctrlbar_pane_g

0xe49e,	// (0x0001be77) main_sp_fs_ctrlbar_pane_t1

0x8262,	// (0x00015c3b) main_sp_fs_ctrlbar_pane

0x8286,	// (0x00015c5f) main_sp_fs_listscroll_pane_te_cp01

0x82a6,	// (0x00015c7f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x82a6,	// (0x00015c7f) popup_sp_fs_action_menu_pane_cp01

0x9530,	// (0x00016f09) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9530,	// (0x00016f09) bg_sp_fs_highlight_list_pane_cp01

0xe4b3,	// (0x0001be8c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4b3,	// (0x0001be8c) sp_fs_action_menu_list_gene_pane_g1

0xe4c2,	// (0x0001be9b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4c2,	// (0x0001be9b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0001d6d8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0001d6d8) sp_fs_action_menu_list_gene_pane_g

0xe4cf,	// (0x0001bea8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4cf,	// (0x0001bea8) sp_fs_action_menu_list_gene_pane_t1

0xe4e7,	// (0x0001bec0) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4e7,	// (0x0001bec0) sp_fs_action_menu_list_gene_pane

0xe504,	// (0x0001bedd) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe504,	// (0x0001bedd) popup_sp_fs_action_menu_bg_pane

0xe512,	// (0x0001beeb) sp_fs_action_menu_list_pane_ParamLimits

0xe512,	// (0x0001beeb) sp_fs_action_menu_list_pane

0xe530,	// (0x0001bf09) sp_fs_scroll_pane_cp01_ParamLimits

0xe530,	// (0x0001bf09) sp_fs_scroll_pane_cp01

0x82c0,	// (0x00015c99) list_medium_line_plain_t2_t1

0x82d0,	// (0x00015ca9) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0001d6dd) list_medium_line_plain_t2_t

0x82e0,	// (0x00015cb9) list_medium_line_plain_t3_t1

0x82f0,	// (0x00015cc9) list_medium_line_plain_t3_t2

0x82fe,	// (0x00015cd7) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0001d6e2) list_medium_line_plain_t3_t

0xa00b,	// (0x000179e4) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x2_t2_g2_g1

0xa023,	// (0x000179fc) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa023,	// (0x000179fc) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0001cc43) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0001cc43) list_medium_line_x2_t2_g2_g

0xa5cd,	// (0x00017fa6) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa5cd,	// (0x00017fa6) list_medium_line_x2_t2_g2_t1

0xa044,	// (0x00017a1d) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa044,	// (0x00017a1d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0001d6e9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0001d6e9) list_medium_line_x2_t2_g2_t

0xa00b,	// (0x000179e4) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x2_t4_g2_g1

0xa023,	// (0x000179fc) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa023,	// (0x000179fc) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x0001cc43) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x0001cc43) list_medium_line_x2_t4_g2_g

0x830c,	// (0x00015ce5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x830c,	// (0x00015ce5) list_medium_line_x2_t4_g2_t1

0x8323,	// (0x00015cfc) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8323,	// (0x00015cfc) list_medium_line_x2_t4_g2_t2

0x8338,	// (0x00015d11) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8338,	// (0x00015d11) list_medium_line_x2_t4_g2_t3

0xa044,	// (0x00017a1d) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa044,	// (0x00017a1d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0001d6ee) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0001d6ee) list_medium_line_x2_t4_g2_t

0xe556,	// (0x0001bf2f) list_medium_line_t3_right_iconx2_g1

0xe452,	// (0x0001be2b) list_medium_line_t3_right_iconx2_g2

0x834a,	// (0x00015d23) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0001d6f7) list_medium_line_t3_right_iconx2_g

0x8354,	// (0x00015d2d) list_medium_line_t3_right_iconx2_t1

0x8364,	// (0x00015d3d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0001d6fe) list_medium_line_t3_right_iconx2_t

0xa00b,	// (0x000179e4) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x3_t4_g4_g1

0xa017,	// (0x000179f0) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa017,	// (0x000179f0) list_medium_line_x3_t4_g4_g2

0xa0aa,	// (0x00017a83) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa0aa,	// (0x00017a83) list_medium_line_x3_t4_g4_g3

0xe55e,	// (0x0001bf37) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe55e,	// (0x0001bf37) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0001d703) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0001d703) list_medium_line_x3_t4_g4_g

0x8372,	// (0x00015d4b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8372,	// (0x00015d4b) list_medium_line_x3_t4_g4_t1

0x8389,	// (0x00015d62) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8389,	// (0x00015d62) list_medium_line_x3_t4_g4_t2

0xa5e2,	// (0x00017fbb) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa5e2,	// (0x00017fbb) list_medium_line_x3_t4_g4_t3

0xe56a,	// (0x0001bf43) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe56a,	// (0x0001bf43) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0001d70c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0001d70c) list_medium_line_x3_t4_g4_t

0x83a4,	// (0x00015d7d) list_single_dyc_row_text_pane_t1_ParamLimits

0x83a4,	// (0x00015d7d) list_single_dyc_row_text_pane_t1

0x83ed,	// (0x00015dc6) list_single_dyc_row_text_pane_t2_ParamLimits

0x83ed,	// (0x00015dc6) list_single_dyc_row_text_pane_t2

0xe587,	// (0x0001bf60) list_single_dyc_row_text_pane_t3_ParamLimits

0xe587,	// (0x0001bf60) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0001d715) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0001d715) list_single_dyc_row_text_pane_t

0xe599,	// (0x0001bf72) list_single_dyc_row_pane_g1_ParamLimits

0xe599,	// (0x0001bf72) list_single_dyc_row_pane_g1

0xe5a5,	// (0x0001bf7e) list_single_dyc_row_pane_g2_ParamLimits

0xe5a5,	// (0x0001bf7e) list_single_dyc_row_pane_g2

0xe5b1,	// (0x0001bf8a) list_single_dyc_row_pane_g3_ParamLimits

0xe5b1,	// (0x0001bf8a) list_single_dyc_row_pane_g3

0xe5bd,	// (0x0001bf96) list_single_dyc_row_pane_g4_ParamLimits

0xe5bd,	// (0x0001bf96) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x0001d71c) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x0001d71c) list_single_dyc_row_pane_g

0xe5c9,	// (0x0001bfa2) list_single_dyc_row_text_pane_ParamLimits

0xe5c9,	// (0x0001bfa2) list_single_dyc_row_text_pane

0x94c0,	// (0x00016e99) bg_sp_fs_scroll_pane

0xe5e8,	// (0x0001bfc1) thumb_sp_fs_scroll_pane

0xd47f,	// (0x0001ae58) list_medium_line_g1_ParamLimits

0xd47f,	// (0x0001ae58) list_medium_line_g1

0xe5f1,	// (0x0001bfca) list_medium_line_t1_ParamLimits

0xe5f1,	// (0x0001bfca) list_medium_line_t1

0xa00b,	// (0x000179e4) list_medium_line_x2_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x2_g1

0xa017,	// (0x000179f0) list_medium_line_x2_g2_ParamLimits

0xa017,	// (0x000179f0) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0001d725) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0001d725) list_medium_line_x2_g

0xe606,	// (0x0001bfdf) list_medium_line_x2_t1_ParamLimits

0xe606,	// (0x0001bfdf) list_medium_line_x2_t1

0xa00b,	// (0x000179e4) list_medium_line_x3_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x3_g1

0xa017,	// (0x000179f0) list_medium_line_x3_g2_ParamLimits

0xa017,	// (0x000179f0) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0001d725) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0001d725) list_medium_line_x3_g

0xe606,	// (0x0001bfdf) list_medium_line_x3_t1_ParamLimits

0xe606,	// (0x0001bfdf) list_medium_line_x3_t1

0xe61c,	// (0x0001bff5) thumb_sp_fs_scroll_pane_g1

0xe625,	// (0x0001bffe) thumb_sp_fs_scroll_pane_g2

0xe62e,	// (0x0001c007) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d72a) thumb_sp_fs_scroll_pane_g

0xe61c,	// (0x0001bff5) bg_sp_fs_scroll_pane_g1

0xe625,	// (0x0001bffe) bg_sp_fs_scroll_pane_g2

0xe62e,	// (0x0001c007) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d72a) bg_sp_fs_scroll_pane_g

0xa00b,	// (0x000179e4) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa00b,	// (0x000179e4) list_medium_line_x2_t3_g4_g1

0xa09e,	// (0x00017a77) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa09e,	// (0x00017a77) list_medium_line_x2_t3_g4_g2

0xa017,	// (0x000179f0) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa017,	// (0x000179f0) list_medium_line_x2_t3_g4_g3

0xa023,	// (0x000179fc) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa023,	// (0x000179fc) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0001ccbf) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0001ccbf) list_medium_line_x2_t3_g4_g

0x8447,	// (0x00015e20) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8447,	// (0x00015e20) list_medium_line_x2_t3_g4_t1

0x8461,	// (0x00015e3a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8461,	// (0x00015e3a) list_medium_line_x2_t3_g4_t2

0xa044,	// (0x00017a1d) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa044,	// (0x00017a1d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x0001d731) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x0001d731) list_medium_line_x2_t3_g4_t

0xd47f,	// (0x0001ae58) list_medium_line_g2_g1_ParamLimits

0xd47f,	// (0x0001ae58) list_medium_line_g2_g1

0xd48b,	// (0x0001ae64) list_medium_line_g2_g2_ParamLimits

0xd48b,	// (0x0001ae64) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0001d3f8) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0001d3f8) list_medium_line_g2_g

0xe637,	// (0x0001c010) list_medium_line_g2_t1_ParamLimits

0xe637,	// (0x0001c010) list_medium_line_g2_t1

0xd47f,	// (0x0001ae58) list_medium_line_t3_g2_g1_ParamLimits

0xd47f,	// (0x0001ae58) list_medium_line_t3_g2_g1

0xd48b,	// (0x0001ae64) list_medium_line_t3_g2_g2_ParamLimits

0xd48b,	// (0x0001ae64) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0001d3f8) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0001d3f8) list_medium_line_t3_g2_g

0x847a,	// (0x00015e53) list_medium_line_t3_g2_t1_ParamLimits

0x847a,	// (0x00015e53) list_medium_line_t3_g2_t1

0x8494,	// (0x00015e6d) list_medium_line_t3_g2_t2_ParamLimits

0x8494,	// (0x00015e6d) list_medium_line_t3_g2_t2

0x84a9,	// (0x00015e82) list_medium_line_t3_g2_t3_ParamLimits

0x84a9,	// (0x00015e82) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x0001d738) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x0001d738) list_medium_line_t3_g2_t

0xe452,	// (0x0001be2b) list_medium_line_right_icon_g1

0xe64c,	// (0x0001c025) list_medium_line_right_icon_t1

0xd47f,	// (0x0001ae58) list_medium_line_t2_g1_ParamLimits

0xd47f,	// (0x0001ae58) list_medium_line_t2_g1

0x84c3,	// (0x00015e9c) list_medium_line_t2_t1_ParamLimits

0x84c3,	// (0x00015e9c) list_medium_line_t2_t1

0x84dd,	// (0x00015eb6) list_medium_line_t2_t2_ParamLimits

0x84dd,	// (0x00015eb6) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x0001d73f) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x0001d73f) list_medium_line_t2_t

0xd47f,	// (0x0001ae58) list_medium_line_t3_g1_ParamLimits

0xd47f,	// (0x0001ae58) list_medium_line_t3_g1

0x84f6,	// (0x00015ecf) list_medium_line_t3_t1_ParamLimits

0x84f6,	// (0x00015ecf) list_medium_line_t3_t1

0x850d,	// (0x00015ee6) list_medium_line_t3_t2_ParamLimits

0x850d,	// (0x00015ee6) list_medium_line_t3_t2

0x8522,	// (0x00015efb) list_medium_line_t3_t3_ParamLimits

0x8522,	// (0x00015efb) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x0001d744) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x0001d744) list_medium_line_t3_t

0xd47f,	// (0x0001ae58) list_medium_line_g3_g1_ParamLimits

0xd47f,	// (0x0001ae58) list_medium_line_g3_g1

0xe65a,	// (0x0001c033) list_medium_line_g3_g2_ParamLimits

0xe65a,	// (0x0001c033) list_medium_line_g3_g2

0xd48b,	// (0x0001ae64) list_medium_line_g3_g3_ParamLimits

0xd48b,	// (0x0001ae64) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x0001d74b) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x0001d74b) list_medium_line_g3_g

0xe666,	// (0x0001c03f) list_medium_line_g3_t1_ParamLimits

0xe666,	// (0x0001c03f) list_medium_line_g3_t1

0xd47f,	// (0x0001ae58) list_medium_line_t2_g3_g1_ParamLimits

0xd47f,	// (0x0001ae58) list_medium_line_t2_g3_g1

0xe65a,	// (0x0001c033) list_medium_line_t2_g3_g2_ParamLimits

0xe65a,	// (0x0001c033) list_medium_line_t2_g3_g2

0xd48b,	// (0x0001ae64) list_medium_line_t2_g3_g3_ParamLimits

0xd48b,	// (0x0001ae64) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x0001d74b) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x0001d74b) list_medium_line_t2_g3_g

0x8534,	// (0x00015f0d) list_medium_line_t2_g3_t1_ParamLimits

0x8534,	// (0x00015f0d) list_medium_line_t2_g3_t1

0x854b,	// (0x00015f24) list_medium_line_t2_g3_t2_ParamLimits

0x854b,	// (0x00015f24) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x0001d752) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x0001d752) list_medium_line_t2_g3_t

0xd47f,	// (0x0001ae58) list_medium_line_t3_g3_g1_ParamLimits

0xd47f,	// (0x0001ae58) list_medium_line_t3_g3_g1

0xe65a,	// (0x0001c033) list_medium_line_t3_g3_g2_ParamLimits

0xe65a,	// (0x0001c033) list_medium_line_t3_g3_g2

0xd48b,	// (0x0001ae64) list_medium_line_t3_g3_g3_ParamLimits

0xd48b,	// (0x0001ae64) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x0001d74b) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x0001d74b) list_medium_line_t3_g3_g

0x8566,	// (0x00015f3f) list_medium_line_t3_g3_t1_ParamLimits

0x8566,	// (0x00015f3f) list_medium_line_t3_g3_t1

0x857a,	// (0x00015f53) list_medium_line_t3_g3_t2_ParamLimits

0x857a,	// (0x00015f53) list_medium_line_t3_g3_t2

0x858c,	// (0x00015f65) list_medium_line_t3_g3_t3_ParamLimits

0x858c,	// (0x00015f65) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x0001d757) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x0001d757) list_medium_line_t3_g3_t

0xe556,	// (0x0001bf2f) list_medium_line_right_iconx2_g1

0xe452,	// (0x0001be2b) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d75e) list_medium_line_right_iconx2_g

0xe67b,	// (0x0001c054) list_medium_line_right_iconx2_t1

0xe556,	// (0x0001bf2f) list_medium_line_t2_right_iconx2_g1

0xe452,	// (0x0001be2b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d75e) list_medium_line_t2_right_iconx2_g

0x85a0,	// (0x00015f79) list_medium_line_t2_right_iconx2_t1

0x85b0,	// (0x00015f89) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x0001d763) list_medium_line_t2_right_iconx2_t

0xe689,	// (0x0001c062) list_medium_line_x4_t4_t1

0x85c2,	// (0x00015f9b) list_medium_line_x4_t4_t2

0x85d2,	// (0x00015fab) list_medium_line_x4_t4_t3

0x85e2,	// (0x00015fbb) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x0001d768) list_medium_line_x4_t4_t

0x8635,	// (0x0001600e) tport_appsw_pane_ParamLimits

0x8635,	// (0x0001600e) tport_appsw_pane

0x8646,	// (0x0001601f) tport_contact_pane_ParamLimits

0x8646,	// (0x0001601f) tport_contact_pane

0x865f,	// (0x00016038) tport_listscroll_pane_ParamLimits

0x865f,	// (0x00016038) tport_listscroll_pane

0x867a,	// (0x00016053) cell_tport_appsw_pane_ParamLimits

0x867a,	// (0x00016053) cell_tport_appsw_pane

0xd160,	// (0x0001ab39) tport_appsw_pane_g1_ParamLimits

0xd160,	// (0x0001ab39) tport_appsw_pane_g1

0xe697,	// (0x0001c070) tport_contact_pane_g1

0xe6a0,	// (0x0001c079) tport_contact_pane_t1

0xe6ae,	// (0x0001c087) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x0001d771) tport_contact_pane_t

0xe6bc,	// (0x0001c095) list_tport_pane

0xe6c5,	// (0x0001c09e) scroll_pane_cp_030

0xe6d6,	// (0x0001c0af) cell_tport_appsw_pane_g1

0xe6e6,	// (0x0001c0bf) cell_tport_appsw_pane_t1

0x94c0,	// (0x00016e99) grid_highlight_pane_cp019

0x86ba,	// (0x00016093) list_tport_double_graphic_pane_ParamLimits

0x86ba,	// (0x00016093) list_tport_double_graphic_pane

0x9530,	// (0x00016f09) list_highlight_pane_cp023_ParamLimits

0x9530,	// (0x00016f09) list_highlight_pane_cp023

0x86c7,	// (0x000160a0) list_tport_double_graphic_pane_g1_ParamLimits

0x86c7,	// (0x000160a0) list_tport_double_graphic_pane_g1

0x86d4,	// (0x000160ad) list_tport_double_graphic_pane_t1_ParamLimits

0x86d4,	// (0x000160ad) list_tport_double_graphic_pane_t1

0x86e9,	// (0x000160c2) list_tport_double_graphic_pane_t2_ParamLimits

0x86e9,	// (0x000160c2) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x0001d77d) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x0001d77d) list_tport_double_graphic_pane_t

0x94c0,	// (0x00016e99) main_cale_note_pane

0x6348,	// (0x00013d21) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6348,	// (0x00013d21) cell_vitu2_function_top_wide_pane_cp01

0x7c96,	// (0x0001566f) wait_bar_pane_cp05_ParamLimits

0x94c0,	// (0x00016e99) listscroll_cmail_pane

0xe6fc,	// (0x0001c0d5) list_cmail_pane

0x8705,	// (0x000160de) list_cmail_body_pane

0x871a,	// (0x000160f3) list_single_cmail_header_caption_pane

0x8733,	// (0x0001610c) list_single_cmail_header_detail_pane_ParamLimits

0x8733,	// (0x0001610c) list_single_cmail_header_detail_pane

0x875c,	// (0x00016135) list_single_cmail_header_caption_pane_t1

0x876c,	// (0x00016145) list_single_cmail_header_detail_pane_g1_ParamLimits

0x876c,	// (0x00016145) list_single_cmail_header_detail_pane_g1

0xe71c,	// (0x0001c0f5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe71c,	// (0x0001c0f5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x0001d782) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x0001d782) list_single_cmail_header_detail_pane_g

0xe735,	// (0x0001c10e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe735,	// (0x0001c10e) list_single_cmail_header_detail_pane_t1

0xe767,	// (0x0001c140) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe767,	// (0x0001c140) list_single_cmail_header_editor_pane_bg

0xe779,	// (0x0001c152) list_cmail_body_pane_g1

0xe782,	// (0x0001c15b) list_cmail_body_pane_t1

0xd1ce,	// (0x0001aba7) list_single_cmail_header_editor_pane_bg_g1

0xa2bd,	// (0x00017c96) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1de,	// (0x0001abb7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1d6,	// (0x0001abaf) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd457,	// (0x0001ae30) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1fe,	// (0x0001abd7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1ee,	// (0x0001abc7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1f6,	// (0x0001abcf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa29d,	// (0x00017c76) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x87aa,	// (0x00016183) calenote_gesture_pane_ParamLimits

0x87aa,	// (0x00016183) calenote_gesture_pane

0x87ca,	// (0x000161a3) calenote_window_pane_ParamLimits

0x87ca,	// (0x000161a3) calenote_window_pane

0xe790,	// (0x0001c169) popup_note_window_cp01

0x87e6,	// (0x000161bf) calenote_swipe_1_pane_ParamLimits

0x87e6,	// (0x000161bf) calenote_swipe_1_pane

0x81cc,	// (0x00015ba5) calenote_swipe_2_pane_ParamLimits

0x81cc,	// (0x00015ba5) calenote_swipe_2_pane

0xe357,	// (0x0001bd30) calenote_swipe_1_pane_g1_ParamLimits

0xe357,	// (0x0001bd30) calenote_swipe_1_pane_g1

0xe364,	// (0x0001bd3d) calenote_swipe_1_pane_g2_ParamLimits

0xe364,	// (0x0001bd3d) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0001d6b6) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0001d6b6) calenote_swipe_1_pane_g

0xe7a2,	// (0x0001c17b) calenote_swipe_1_pane_t1_ParamLimits

0xe7a2,	// (0x0001c17b) calenote_swipe_1_pane_t1

0xe357,	// (0x0001bd30) calenote_swipe_2_pane_g1_ParamLimits

0xe357,	// (0x0001bd30) calenote_swipe_2_pane_g1

0xe7c1,	// (0x0001c19a) calenote_swipe_2_pane_g2_ParamLimits

0xe7c1,	// (0x0001c19a) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x0001d78e) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x0001d78e) calenote_swipe_2_pane_g

0xe7cd,	// (0x0001c1a6) calenote_swipe_2_pane_t1_ParamLimits

0xe7cd,	// (0x0001c1a6) calenote_swipe_2_pane_t1

0x94c0,	// (0x00016e99) main_mup_navstr_pane

0x4fdf,	// (0x000129b8) main_mup3_pane_t7_ParamLimits

0x4fdf,	// (0x000129b8) main_mup3_pane_t7

0xcd7f,	// (0x0001a758) main_mp4_pane_g6_ParamLimits

0xcd7f,	// (0x0001a758) main_mp4_pane_g6

0xcfa7,	// (0x0001a980) main_image3_pane_t4_ParamLimits

0xcfa7,	// (0x0001a980) main_image3_pane_t4

0x87fb,	// (0x000161d4) popup_navstr_preview_pane_ParamLimits

0x87fb,	// (0x000161d4) popup_navstr_preview_pane

0x880f,	// (0x000161e8) scroll_navstr_pane_ParamLimits

0x880f,	// (0x000161e8) scroll_navstr_pane

0x94c0,	// (0x00016e99) bg_popup_preview_window_pane_cp04

0xe7f4,	// (0x0001c1cd) popup_navstr_preview_pane_t1

0x8823,	// (0x000161fc) scroll_navstr_pane_g1_ParamLimits

0x8823,	// (0x000161fc) scroll_navstr_pane_g1

0x8837,	// (0x00016210) scroll_navstr_pane_t1_ParamLimits

0x8837,	// (0x00016210) scroll_navstr_pane_t1

0xe799,	// (0x0001c172) bg_button_pane_cp014

0xe799,	// (0x0001c172) bg_button_pane_cp030

0xe2f8,	// (0x0001bcd1) list_double_fisheye_pane_g4_ParamLimits

0xe2f8,	// (0x0001bcd1) list_double_fisheye_pane_g4

0xe304,	// (0x0001bcdd) list_double_fisheye_pane_g5_ParamLimits

0xe304,	// (0x0001bcdd) list_double_fisheye_pane_g5

0xe704,	// (0x0001c0dd) sp_fs_scroll_pane_cp03

0xa00b,	// (0x000179e4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe492,	// (0x0001be6b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0001d6d3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe49e,	// (0x0001be77) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x86fb,	// (0x000160d4) sp_fs_scroll_pane_cp02

0x9e8c,	// (0x00017865) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e8c,	// (0x00017865) popup_sp_fs_calendar_preview_list_single_pane

0x94c0,	// (0x00016e99) main_cam6_pano_pane

0x9530,	// (0x00016f09) main_mup3_pane_ParamLimits

0x94c0,	// (0x00016e99) main_phacti_pane

0x7b69,	// (0x00015542) bg_button_pane_cp11

0x7b83,	// (0x0001555c) main_mobtv_info_pane_g2_ParamLimits

0x7b83,	// (0x0001555c) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0001d633) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0001d633) main_mobtv_info_pane_g

0x7d60,	// (0x00015739) sc_clock_pane_t5_ParamLimits

0x7d60,	// (0x00015739) sc_clock_pane_t5

0x7f0c,	// (0x000158e5) main_radioblah_pane_g1_ParamLimits

0xe266,	// (0x0001bc3f) main_radioblah_pane_t3_ParamLimits

0xe266,	// (0x0001bc3f) main_radioblah_pane_t3

0xe27e,	// (0x0001bc57) main_radioblah_pane_t4_ParamLimits

0xe27e,	// (0x0001bc57) main_radioblah_pane_t4

0x7f34,	// (0x0001590d) main_radioblah_text_pane_ParamLimits

0x7f34,	// (0x0001590d) main_radioblah_text_pane

0x7f46,	// (0x0001591f) main_radioblah_info_pane_g1_ParamLimits

0x7fe1,	// (0x000159ba) main_radioblah_info_pane_t4_ParamLimits

0x7fe1,	// (0x000159ba) main_radioblah_info_pane_t4

0x9530,	// (0x00016f09) main_sp_fs_calendar_pane

0x884d,	// (0x00016226) main_phacti_pane_g1

0x8855,	// (0x0001622e) phacti_note_pane_ParamLimits

0x8855,	// (0x0001622e) phacti_note_pane

0xe80b,	// (0x0001c1e4) phacti_term_pane_ParamLimits

0xe80b,	// (0x0001c1e4) phacti_term_pane

0xe820,	// (0x0001c1f9) phacti_note_pane_t1_ParamLimits

0xe820,	// (0x0001c1f9) phacti_note_pane_t1

0xe837,	// (0x0001c210) phacti_term_pane_g1

0xe83f,	// (0x0001c218) phacti_term_pane_t1_ParamLimits

0xe83f,	// (0x0001c218) phacti_term_pane_t1

0xe869,	// (0x0001c242) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe871,	// (0x0001c24a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x0001d798) popup_sp_fs_calendar_preview_list_single_pane_g

0xe879,	// (0x0001c252) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe879,	// (0x0001c252) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe88f,	// (0x0001c268) aid_popup_sp_fs_bg_corner_pane

0xc416,	// (0x00019def) popup_sp_fs_calendar_preview_bg_pane_g1

0x94c0,	// (0x00016e99) popup_sp_fs_calendar_preview_bg_pane

0xe897,	// (0x0001c270) popup_sp_fs_calendar_preview_list_pane

0x9530,	// (0x00016f09) bg_main_sp_fs_cale_pane_ParamLimits

0x9530,	// (0x00016f09) bg_main_sp_fs_cale_pane

0xe8a8,	// (0x0001c281) listscroll_cale_mrui_pane_ParamLimits

0xe8a8,	// (0x0001c281) listscroll_cale_mrui_pane

0xe8bc,	// (0x0001c295) listscroll_sp_fs_schedule_track_pane

0xe8c5,	// (0x0001c29e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe8c5,	// (0x0001c29e) main_sp_fs_ctrlbar_pane_cp01

0xe8d6,	// (0x0001c2af) main_sp_fs_ribbon_pane

0xe8de,	// (0x0001c2b7) popup_sp_fs_cale_preview_window

0x88b0,	// (0x00016289) list_single_sp_fs_schedule_track_pane_ParamLimits

0x88b0,	// (0x00016289) list_single_sp_fs_schedule_track_pane

0x9530,	// (0x00016f09) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9530,	// (0x00016f09) bg_sp_fs_highlight_list_pane_cp03

0x88c5,	// (0x0001629e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x88c5,	// (0x0001629e) list_single_sp_fs_schedule_track_pane_g1

0x88d1,	// (0x000162aa) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x88d1,	// (0x000162aa) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0001d79d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0001d79d) list_single_sp_fs_schedule_track_pane_g

0x88dd,	// (0x000162b6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x88dd,	// (0x000162b6) list_single_sp_fs_schedule_track_pane_t1

0x88f7,	// (0x000162d0) sp_fs_schedule_track_pane_ParamLimits

0x88f7,	// (0x000162d0) sp_fs_schedule_track_pane

0xe8f0,	// (0x0001c2c9) sp_fs_schedule_track_pane_g1

0xe8f8,	// (0x0001c2d1) sp_fs_schedule_track_pane_g2

0xe900,	// (0x0001c2d9) sp_fs_schedule_track_pane_g3

0xe908,	// (0x0001c2e1) sp_fs_schedule_track_pane_g4

0xe910,	// (0x0001c2e9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0001d7a2) sp_fs_schedule_track_pane_g

0xd1ce,	// (0x0001aba7) bg_sp_fs_schedule_viewer_highlight_g1

0xa2bd,	// (0x00017c96) bg_sp_fs_schedule_viewer_highlight_g2

0xd1d6,	// (0x0001abaf) bg_sp_fs_schedule_viewer_highlight_g3

0xd1de,	// (0x0001abb7) bg_sp_fs_schedule_viewer_highlight_g4

0xd457,	// (0x0001ae30) bg_sp_fs_schedule_viewer_highlight_g5

0xd1ee,	// (0x0001abc7) bg_sp_fs_schedule_viewer_highlight_g6

0xd1f6,	// (0x0001abcf) bg_sp_fs_schedule_viewer_highlight_g7

0xd1fe,	// (0x0001abd7) bg_sp_fs_schedule_viewer_highlight_g8

0xa29d,	// (0x00017c76) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0001d7ad) bg_sp_fs_schedule_viewer_highlight_g

0x94c0,	// (0x00016e99) bg_main_sp_fs_ribbon_pane

0x8908,	// (0x000162e1) main_sp_fs_ribbon_pane_g1

0xe918,	// (0x0001c2f1) main_sp_fs_ribbon_pane_t1

0x8911,	// (0x000162ea) main_sp_fs_ribbon_pane_t2

0xe927,	// (0x0001c300) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0001d7c0) main_sp_fs_ribbon_pane_t

0xe936,	// (0x0001c30f) main_sp_fs_ribbon_scheduler_pane

0xe93e,	// (0x0001c317) bg_main_sp_fs_ribbon_pane_g1

0xe947,	// (0x0001c320) bg_main_sp_fs_ribbon_pane_g2

0xe950,	// (0x0001c329) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x0001d7c7) bg_main_sp_fs_ribbon_pane_g

0xe958,	// (0x0001c331) main_sp_fs_ribbon_scheduler_pane_g1

0xe961,	// (0x0001c33a) main_sp_fs_ribbon_scheduler_pane_g2

0xe96a,	// (0x0001c343) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0001d7ce) main_sp_fs_ribbon_scheduler_pane_g

0xe973,	// (0x0001c34c) list_cale_mrui_pane

0x8920,	// (0x000162f9) sp_fs_scroll_pane_cp07_ParamLimits

0x8920,	// (0x000162f9) sp_fs_scroll_pane_cp07

0x8934,	// (0x0001630d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8934,	// (0x0001630d) bg_sp_fs_schedule_viewer_highlight

0xe97c,	// (0x0001c355) list_single_sp_fs_schedule_track_pane_cp01

0xe984,	// (0x0001c35d) list_sp_fs_schedule_track_pane

0xe98c,	// (0x0001c365) sp_fs_scroll_pane_cp06_ParamLimits

0xe98c,	// (0x0001c365) sp_fs_scroll_pane_cp06

0xc416,	// (0x00019def) bgmain_sp_fs_calendar_pane_g1

0x8944,	// (0x0001631d) list_single_cale_mrui_pane_ParamLimits

0x8944,	// (0x0001631d) list_single_cale_mrui_pane

0xe99e,	// (0x0001c377) list_single_cale_mrui_row_pane_ParamLimits

0xe99e,	// (0x0001c377) list_single_cale_mrui_row_pane

0xe9ab,	// (0x0001c384) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe9ab,	// (0x0001c384) list_single_cale_mrui_row_pane_g1

0xe9e3,	// (0x0001c3bc) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9e3,	// (0x0001c3bc) list_single_cale_mrui_row_pane_t1

0x8966,	// (0x0001633f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8966,	// (0x0001633f) list_single_cale_mrui_row_pane_t2

0xe9f5,	// (0x0001c3ce) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9f5,	// (0x0001c3ce) list_single_cale_mrui_row_pane_t3

0xea24,	// (0x0001c3fd) list_single_cale_mrui_row_pane_t4_ParamLimits

0xea24,	// (0x0001c3fd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0001d7da) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0001d7da) list_single_cale_mrui_row_pane_t

0x89ce,	// (0x000163a7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x89ce,	// (0x000163a7) list_single_cmail_header_editor_pane_bg_cp01

0x89f4,	// (0x000163cd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x89f4,	// (0x000163cd) list_single_cmail_header_editor_pane_bg_cp02

0x8a14,	// (0x000163ed) main_radioblah_text_pane_t1_ParamLimits

0x8a14,	// (0x000163ed) main_radioblah_text_pane_t1

0xea53,	// (0x0001c42c) cam6_indi_pane_cp01

0xea5b,	// (0x0001c434) cam6_mode_pane_cp01

0xea63,	// (0x0001c43c) cam6_pano_pane

0xea6c,	// (0x0001c445) cam6_zoom_pane_cp01

0xea74,	// (0x0001c44d) cam6_pano_image_pane

0xea7f,	// (0x0001c458) cam6_pano_pane_g1

0xe100,	// (0x0001bad9) cam6_pano_pane_g2

0xea88,	// (0x0001c461) cam6_pano_pane_g3

0xea91,	// (0x0001c46a) cam6_pano_pane_g4

0xc9d4,	// (0x0001a3ad) cam6_pano_pane_g5

0xea9a,	// (0x0001c473) cam6_pano_pane_g6

0xeaa4,	// (0x0001c47d) cam6_pano_pane_g7

0xeaac,	// (0x0001c485) cam6_pano_pane_g8

0xeab5,	// (0x0001c48e) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0001d7e3) cam6_pano_pane_g

0x94c0,	// (0x00016e99) main_browser_tag_pane

0xe7ec,	// (0x0001c1c5) grid_navstr_albumart_pane

0xeac0,	// (0x0001c499) cell_navstr_albumart_pane_ParamLimits

0xeac0,	// (0x0001c499) cell_navstr_albumart_pane

0xabf0,	// (0x000185c9) cell_navstr_albumart_pane_g1

0xbd23,	// (0x000196fc) cell_navstr_albumart_pane_g2

0xbd33,	// (0x0001970c) cell_navstr_albumart_pane_g3

0xbd2b,	// (0x00019704) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x0001d7f6) cell_navstr_albumart_pane_g

0x8a2f,	// (0x00016408) bt_list_pane_ParamLimits

0x8a2f,	// (0x00016408) bt_list_pane

0x8a44,	// (0x0001641d) bt_list_pane_t1

0x8a53,	// (0x0001642c) bt_list_pane_t2

0x0001,

0xfe26,	// (0x0001d7ff) bt_list_pane_t

0x94c0,	// (0x00016e99) main_cale_prevew_pane

0x8a62,	// (0x0001643b) popup_cale_preview_window_ParamLimits

0x8a62,	// (0x0001643b) popup_cale_preview_window

0x9530,	// (0x00016f09) bg_popup_preview_window_pane_cp05_ParamLimits

0x9530,	// (0x00016f09) bg_popup_preview_window_pane_cp05

0xeae2,	// (0x0001c4bb) list_cale_preview_pane_ParamLimits

0xeae2,	// (0x0001c4bb) list_cale_preview_pane

0x8a79,	// (0x00016452) list_double_cale_preview_pane_ParamLimits

0x8a79,	// (0x00016452) list_double_cale_preview_pane

0x8a8b,	// (0x00016464) list_single_cale_preview_pane_ParamLimits

0x8a8b,	// (0x00016464) list_single_cale_preview_pane

0x8a9f,	// (0x00016478) list_single_cale_preview_pane_g1

0x8aa7,	// (0x00016480) list_single_cale_preview_pane_t1_ParamLimits

0x8aa7,	// (0x00016480) list_single_cale_preview_pane_t1

0x8abc,	// (0x00016495) list_double_cale_preview_pane_g1

0x8ac4,	// (0x0001649d) list_double_cale_preview_pane_t1_ParamLimits

0x8ac4,	// (0x0001649d) list_double_cale_preview_pane_t1

0x8ad9,	// (0x000164b2) list_double_cale_preview_pane_t2_ParamLimits

0x8ad9,	// (0x000164b2) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0001d804) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0001d804) list_double_cale_preview_pane_t

0x94c0,	// (0x00016e99) main_ezdial_pane

0x9530,	// (0x00016f09) main_sp_fs_email_pane_ParamLimits

0x8206,	// (0x00015bdf) cmail_ddmenu_btn01_pane_ParamLimits

0x8206,	// (0x00015bdf) cmail_ddmenu_btn01_pane

0x8219,	// (0x00015bf2) cmail_ddmenu_btn02_pane_ParamLimits

0x8219,	// (0x00015bf2) cmail_ddmenu_btn02_pane

0x823c,	// (0x00015c15) cmail_ddmenu_btn03_pane_ParamLimits

0x823c,	// (0x00015c15) cmail_ddmenu_btn03_pane

0x8262,	// (0x00015c3b) main_sp_fs_ctrlbar_pane_ParamLimits

0x8286,	// (0x00015c5f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8705,	// (0x000160de) list_cmail_body_pane_ParamLimits

0xe713,	// (0x0001c0ec) bg_button_pane_cp12

0xe728,	// (0x0001c101) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe728,	// (0x0001c101) list_single_cmail_header_detail_pane_g3

0x8784,	// (0x0001615d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8784,	// (0x0001615d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x0001d789) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x0001d789) list_single_cmail_header_detail_pane_t

0xe854,	// (0x0001c22d) phacti_term_pane_t2_ParamLimits

0xe854,	// (0x0001c22d) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x0001d793) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x0001d793) phacti_term_pane_t

0xeaee,	// (0x0001c4c7) aid_size_list_single_double

0x8af1,	// (0x000164ca) popup_ezdial_listscroll_window

0x8b0d,	// (0x000164e6) popup_number_entry_window_cp01

0xaa6f,	// (0x00018448) bg_popup_call_pane_cp09

0xeafa,	// (0x0001c4d3) ezdial_list_pane

0xeb02,	// (0x0001c4db) scroll_pane_cp23

0xbf0e,	// (0x000198e7) bg_button_pane_cp028_ParamLimits

0xbf0e,	// (0x000198e7) bg_button_pane_cp028

0x8b1b,	// (0x000164f4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8b1b,	// (0x000164f4) cmail_ddmenu_btn01_pane_g1

0x8b27,	// (0x00016500) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8b27,	// (0x00016500) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x0001d809) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x0001d809) cmail_ddmenu_btn01_pane_g

0xeb0a,	// (0x0001c4e3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb0a,	// (0x0001c4e3) cmail_ddmenu_btn01_pane_t1

0xbf0e,	// (0x000198e7) bg_button_pane_cp029_ParamLimits

0xbf0e,	// (0x000198e7) bg_button_pane_cp029

0x8b33,	// (0x0001650c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8b33,	// (0x0001650c) cmail_ddmenu_btn02_pane_g1

0x8b4b,	// (0x00016524) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8b4b,	// (0x00016524) cmail_ddmenu_btn02_pane_t1

0x9530,	// (0x00016f09) bg_button_pane_cp031_ParamLimits

0x9530,	// (0x00016f09) bg_button_pane_cp031

0x8b33,	// (0x0001650c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8b33,	// (0x0001650c) cmail_ddmenu_btn03_pane_g1

0x8b4b,	// (0x00016524) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8b4b,	// (0x00016524) cmail_ddmenu_btn03_pane_t1

0x5b5c,	// (0x00013535) cell_dialer2_keypad_pane_t1_ParamLimits

0x5b76,	// (0x0001354f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5b76,	// (0x0001354f) cell_dialer2_keypad_pane_t1_copy1

0x79eb,	// (0x000153c4) ncimui_group_button_pane

0x9530,	// (0x00016f09) main_sp_fs_calendar_pane_ParamLimits

0x871a,	// (0x000160f3) list_single_cmail_header_caption_pane_ParamLimits

0xe89f,	// (0x0001c278) aid_recal_txt_sm_pane

0x94c0,	// (0x00016e99) mian_recal_day_pane

0xe8de,	// (0x0001c2b7) popup_sp_fs_cale_preview_window_ParamLimits

0x94c0,	// (0x00016e99) list_recal_day_pane

0xeb41,	// (0x0001c51a) list_single_recal_day_pane_ParamLimits

0xeb41,	// (0x0001c51a) list_single_recal_day_pane

0xeb53,	// (0x0001c52c) list_single_recal_day_pane_g1_ParamLimits

0xeb53,	// (0x0001c52c) list_single_recal_day_pane_g1

0xeb5f,	// (0x0001c538) list_single_recal_day_pane_g2_ParamLimits

0xeb5f,	// (0x0001c538) list_single_recal_day_pane_g2

0xeb6e,	// (0x0001c547) list_single_recal_day_pane_g3_ParamLimits

0xeb6e,	// (0x0001c547) list_single_recal_day_pane_g3

0x8b6f,	// (0x00016548) list_single_recal_day_pane_g4_ParamLimits

0x8b6f,	// (0x00016548) list_single_recal_day_pane_g4

0xeb7a,	// (0x0001c553) list_single_recal_day_pane_g5_ParamLimits

0xeb7a,	// (0x0001c553) list_single_recal_day_pane_g5

0xeb92,	// (0x0001c56b) list_single_recal_day_pane_g6_ParamLimits

0xeb92,	// (0x0001c56b) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x0001d818) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x0001d818) list_single_recal_day_pane_g

0xeb9e,	// (0x0001c577) list_single_recal_day_pane_t1

0xebac,	// (0x0001c585) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0001d825) list_single_recal_day_pane_t

0x8b82,	// (0x0001655b) ncimui_query_button_pane_ParamLimits

0x8b82,	// (0x0001655b) ncimui_query_button_pane

0x8b92,	// (0x0001656b) ncimui_query_button_pane_t1_ParamLimits

0x8b92,	// (0x0001656b) ncimui_query_button_pane_t1

0xebba,	// (0x0001c593) ncimui_query_button_pane_t2_ParamLimits

0xebba,	// (0x0001c593) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x0001d82a) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x0001d82a) ncimui_query_button_pane_t

0x8ba5,	// (0x0001657e) query_button_pane_ParamLimits

0x8ba5,	// (0x0001657e) query_button_pane

0x94c0,	// (0x00016e99) bg_button_pane_cp0028

0xebcd,	// (0x0001c5a6) query_button_pane_t1

0x3c37,	// (0x00011610) main_tport_pane_ParamLimits

0x85f2,	// (0x00015fcb) bg_popup_window_pane_cp01_ParamLimits

0x85f2,	// (0x00015fcb) bg_popup_window_pane_cp01

0x860c,	// (0x00015fe5) heading_pane_cp08_ParamLimits

0x860c,	// (0x00015fe5) heading_pane_cp08

0x8620,	// (0x00015ff9) heading_pane_cp07_ParamLimits

0x8620,	// (0x00015ff9) heading_pane_cp07

0xe6d6,	// (0x0001c0af) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x0001d776) cell_tport_appsw_pane_g

0x3216,	// (0x00010bef) input_candi_list_open_g1

0xa4b0,	// (0x00017e89) list_cale_time_pane_g6_ParamLimits

0xa4b0,	// (0x00017e89) list_cale_time_pane_g6

0x4a00,	// (0x000123d9) aid_size_touch_calib_1_ParamLimits

0x4a00,	// (0x000123d9) aid_size_touch_calib_1

0x4a0c,	// (0x000123e5) aid_size_touch_calib_2_ParamLimits

0x4a0c,	// (0x000123e5) aid_size_touch_calib_2

0x4a22,	// (0x000123fb) aid_size_touch_calib_3_ParamLimits

0x4a22,	// (0x000123fb) aid_size_touch_calib_3

0x4a40,	// (0x00012419) aid_size_touch_calib_4_ParamLimits

0x4a40,	// (0x00012419) aid_size_touch_calib_4

0x4a56,	// (0x0001242f) main_touch_calib_button_group_pane_ParamLimits

0x4a56,	// (0x0001242f) main_touch_calib_button_group_pane

0x4a6e,	// (0x00012447) main_touch_calib_pane_g1_ParamLimits

0x4a7a,	// (0x00012453) main_touch_calib_pane_g2_ParamLimits

0x4a86,	// (0x0001245f) main_touch_calib_pane_g3_ParamLimits

0x4a92,	// (0x0001246b) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0001d14e) main_touch_calib_pane_g_ParamLimits

0x4a9e,	// (0x00012477) main_touch_calib_pane_t1_ParamLimits

0x4ab8,	// (0x00012491) main_touch_calib_pane_t2_ParamLimits

0x4ad2,	// (0x000124ab) main_touch_calib_pane_t3_ParamLimits

0x4ae6,	// (0x000124bf) main_touch_calib_pane_t4_ParamLimits

0x4afa,	// (0x000124d3) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0001d157) main_touch_calib_pane_t_ParamLimits

0xc7bb,	// (0x0001a194) list_single_fp_cale_pane_g3_ParamLimits

0xc7bb,	// (0x0001a194) list_single_fp_cale_pane_g3

0x9530,	// (0x00016f09) bg_button_pane_cp012_ParamLimits

0x9530,	// (0x00016f09) bg_vkb2_func_pane_cp03_ParamLimits

0x6c28,	// (0x00014601) cell_vitu2_function_top_pane_g1_ParamLimits

0x9530,	// (0x00016f09) bg_vkb2_func_pane_cp04_ParamLimits

0x798b,	// (0x00015364) main_ncimui_button_group_pane_ParamLimits

0x798b,	// (0x00015364) main_ncimui_button_group_pane

0x79d9,	// (0x000153b2) main_ncimui_pane_t3_ParamLimits

0x79d9,	// (0x000153b2) main_ncimui_pane_t3

0xe802,	// (0x0001c1db) phacti_button_group_pane

0xeaee,	// (0x0001c4c7) aid_size_list_single_double_ParamLimits

0x8af1,	// (0x000164ca) popup_ezdial_listscroll_window_ParamLimits

0x8b0d,	// (0x000164e6) popup_number_entry_window_cp01_ParamLimits

0x8bb8,	// (0x00016591) phacti_button_pane_ParamLimits

0x8bb8,	// (0x00016591) phacti_button_pane

0x94c0,	// (0x00016e99) bg_button_pane_cp14

0xebdb,	// (0x0001c5b4) phacti_button_pane_t1

0x8bc9,	// (0x000165a2) main_touch_calib_button_pane_ParamLimits

0x8bc9,	// (0x000165a2) main_touch_calib_button_pane

0x9cdb,	// (0x000176b4) bg_button_pane_cp18_ParamLimits

0x9cdb,	// (0x000176b4) bg_button_pane_cp18

0xebe9,	// (0x0001c5c2) main_touch_calib_button_pane_t1_ParamLimits

0xebe9,	// (0x0001c5c2) main_touch_calib_button_pane_t1

0xebff,	// (0x0001c5d8) main_touch_calib_button_pane_t2_ParamLimits

0xebff,	// (0x0001c5d8) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x0001d82f) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x0001d82f) main_touch_calib_button_pane_t

0x94c0,	// (0x00016e99) cell_ncimui_button_pane

0x94c0,	// (0x00016e99) bg_button_pane_cp032

0xec1d,	// (0x0001c5f6) cell_ncimui_button_pane_t1

0xcf87,	// (0x0001a960) image3_infobar_pane_ParamLimits

0xcf87,	// (0x0001a960) image3_infobar_pane

0x7d8c,	// (0x00015765) fs_bigclock_status_pane_ParamLimits

0x7d8c,	// (0x00015765) fs_bigclock_status_pane

0x7d99,	// (0x00015772) main_fs_bigclock_clock_pane_ParamLimits

0x7d99,	// (0x00015772) main_fs_bigclock_clock_pane

0x7dac,	// (0x00015785) main_fs_bigclock_indi_pane_ParamLimits

0x7dac,	// (0x00015785) main_fs_bigclock_indi_pane

0x7dc7,	// (0x000157a0) main_fs_bigclock_swipe_pane_ParamLimits

0x7dc7,	// (0x000157a0) main_fs_bigclock_swipe_pane

0x94c0,	// (0x00016e99) main_fs_clock_dumped_data

0x7dea,	// (0x000157c3) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7dea,	// (0x000157c3) list_single_fs_bigclock_indicator_pane_g1

0x7e08,	// (0x000157e1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7e08,	// (0x000157e1) list_single_fs_bigclock_indicator_pane_g2

0x7e22,	// (0x000157fb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7e22,	// (0x000157fb) list_single_fs_bigclock_indicator_pane_g3

0x7e3c,	// (0x00015815) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7e3c,	// (0x00015815) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0001d667) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0001d667) list_single_fs_bigclock_indicator_pane_g

0x7e62,	// (0x0001583b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7e62,	// (0x0001583b) list_single_fs_bigclock_indicator_pane_t1

0x7e8a,	// (0x00015863) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7e8a,	// (0x00015863) list_single_fs_bigclock_indicator_pane_t2

0x7eb2,	// (0x0001588b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7eb2,	// (0x0001588b) list_single_fs_bigclock_indicator_pane_t3

0x7eda,	// (0x000158b3) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7eda,	// (0x000158b3) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0001d672) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0001d672) list_single_fs_bigclock_indicator_pane_t

0xec2b,	// (0x0001c604) image3_infobar_fav_pane_ParamLimits

0xec2b,	// (0x0001c604) image3_infobar_fav_pane

0xec3b,	// (0x0001c614) image3_infobar_loc_pane_ParamLimits

0xec3b,	// (0x0001c614) image3_infobar_loc_pane

0xec4f,	// (0x0001c628) image3_infobar_time_pane_ParamLimits

0xec4f,	// (0x0001c628) image3_infobar_time_pane

0xc416,	// (0x00019def) image3_infobar_time_pane_g1

0xec5f,	// (0x0001c638) image3_infobar_time_pane_t1

0xc416,	// (0x00019def) image3_infobar_loc_pane_g1

0xec6d,	// (0x0001c646) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0001d834) image3_infobar_loc_pane_g

0xec75,	// (0x0001c64e) image3_infobar_loc_pane_t1

0xc416,	// (0x00019def) image3_infobar_fav_pane_g1

0xec83,	// (0x0001c65c) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x0001d839) image3_infobar_fav_pane_g

0xec8b,	// (0x0001c664) fs_bigclock_status_battery_pane

0xec94,	// (0x0001c66d) fs_bigclock_status_signal_pane

0xec9d,	// (0x0001c676) fs_bigclock_status_title_pane

0xeca6,	// (0x0001c67f) fs_bigclock_status_signal_pane_g1

0xecaf,	// (0x0001c688) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x0001d83e) fs_bigclock_status_signal_pane_g

0xecb7,	// (0x0001c690) fs_bigclock_status_battery_pane_g1

0xecc0,	// (0x0001c699) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0001d843) fs_bigclock_status_battery_pane_g

0xecc8,	// (0x0001c6a1) fs_bigclock_status_title_pane_t1

0xc416,	// (0x00019def) main_fs_bigclock_clock_pane_g1

0xecd6,	// (0x0001c6af) main_fs_bigclock_clock_pane_g2

0xecd6,	// (0x0001c6af) main_fs_bigclock_clock_pane_g3

0xecd6,	// (0x0001c6af) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x0001d848) main_fs_bigclock_clock_pane_g

0x8bde,	// (0x000165b7) main_fs_bigclock_clock_pane_t1

0x8bec,	// (0x000165c5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x0001d851) main_fs_bigclock_clock_pane_t

0xecde,	// (0x0001c6b7) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecde,	// (0x0001c6b7) list_single_fs_bigclock_indicator_pane

0x8bfb,	// (0x000165d4) list_single_fs_bigclock_pane_ParamLimits

0x8bfb,	// (0x000165d4) list_single_fs_bigclock_pane

0xecf8,	// (0x0001c6d1) main_fs_bigclock_indicator_pane_t1

0xed07,	// (0x0001c6e0) list_single_fs_bigclock_pane_g1

0xed0f,	// (0x0001c6e8) list_single_fs_bigclock_pane_t1

0xc416,	// (0x00019def) main_fs_bigclock_swipe_pane_g1

0xed4f,	// (0x0001c728) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x0001d862) main_fs_bigclock_swipe_pane_g

0xed57,	// (0x0001c730) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed57,	// (0x0001c730) main_fs_bigclock_swipe_pane_t1

0x2a4f,	// (0x00010428) call_type_pane_ParamLimits

0x94c0,	// (0x00016e99) main_btmg_pane

0xe9d7,	// (0x0001c3b0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe9d7,	// (0x0001c3b0) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x0001d7d5) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x0001d7d5) list_single_cale_mrui_row_pane_g

0xeb28,	// (0x0001c501) list_recal_vselct_arw_lo_pane

0xeb30,	// (0x0001c509) list_recal_vselct_arw_up_pane

0xeb38,	// (0x0001c511) list_recal_vselct_pane

0xed74,	// (0x0001c74d) btmg_button_pane

0x8c62,	// (0x0001663b) main_btmg_pane_g1

0x94c0,	// (0x00016e99) bg_button_pane_cp044

0xed7e,	// (0x0001c757) btmg_button_pane_t1

0xbf06,	// (0x000198df) aid_listscroll_gen

0x9530,	// (0x00016f09) main_cntbar_detail_pane

0xe6f4,	// (0x0001c0cd) list_cmail_folder_pane

0xe704,	// (0x0001c0dd) sp_fs_scroll_pane_cp03_ParamLimits

0x871a,	// (0x000160f3) list_single_fs_dyc_pane_cp01_ParamLimits

0x871a,	// (0x000160f3) list_single_fs_dyc_pane_cp01

0xed8c,	// (0x0001c765) aid_size_cmail_indent

0xed95,	// (0x0001c76e) list_single_dyc_row_pane_cp01

0x8c98,	// (0x00016671) cntbar_detail_list_pane_ParamLimits

0x8c98,	// (0x00016671) cntbar_detail_list_pane

0x8ce4,	// (0x000166bd) main_cntbar_detail_cont_pane_ParamLimits

0x8ce4,	// (0x000166bd) main_cntbar_detail_cont_pane

0x29e9,	// (0x000103c2) scroll_pane_cp032_ParamLimits

0x29e9,	// (0x000103c2) scroll_pane_cp032

0x8cf8,	// (0x000166d1) cntbar_detail_list_event_pane_ParamLimits

0x8cf8,	// (0x000166d1) cntbar_detail_list_event_pane

0x8ca8,	// (0x00016681) cntbar_detail_list_shct_pane

0xa30b,	// (0x00017ce4) aid_list_gen

0xed9e,	// (0x0001c777) aid_scroll

0xeda7,	// (0x0001c780) aid_size_touch_scroll_bar

0xefac,	// (0x0001c985) aid_list_double

0xedb0,	// (0x0001c789) aid_list_single

0xedb9,	// (0x0001c792) aid_list_single_lg

0xedc2,	// (0x0001c79b) aid_list_z_g_a_sm

0xedca,	// (0x0001c7a3) aid_list_z_g_d

0xedd2,	// (0x0001c7ab) aid_txt_z_prm

0x8d08,	// (0x000166e1) aid_txt_z_prm_cp01

0x8d16,	// (0x000166ef) aid_txt_z_sec

0x8d24,	// (0x000166fd) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8d24,	// (0x000166fd) main_cntbar_detail_cont_pane_g1

0x8d38,	// (0x00016711) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8d38,	// (0x00016711) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x0001d867) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x0001d867) main_cntbar_detail_cont_pane_g

0xede0,	// (0x0001c7b9) main_cntbar_detail_cont_pane_t1

0xedee,	// (0x0001c7c7) main_cntbar_detail_cont_pane_t2

0xedfc,	// (0x0001c7d5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x0001d86c) main_cntbar_detail_cont_pane_t

0x8d48,	// (0x00016721) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8d48,	// (0x00016721) cell_cntbar_detail_list_shct_pane

0xee0a,	// (0x0001c7e3) cntbar_detail_list_shct_pane_g1

0xee13,	// (0x0001c7ec) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x0001d873) cntbar_detail_list_shct_pane_g

0x8d5c,	// (0x00016735) cntbar_detail_list_event_pane_g1_ParamLimits

0x8d5c,	// (0x00016735) cntbar_detail_list_event_pane_g1

0x8d68,	// (0x00016741) cntbar_detail_list_event_pane_g2_ParamLimits

0x8d68,	// (0x00016741) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x0001d878) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x0001d878) cntbar_detail_list_event_pane_g

0x8dd4,	// (0x000167ad) cntbar_detail_list_event_pane_t1_ParamLimits

0x8dd4,	// (0x000167ad) cntbar_detail_list_event_pane_t1

0x8de9,	// (0x000167c2) cntbar_detail_list_event_pane_t2_ParamLimits

0x8de9,	// (0x000167c2) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x0001d885) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x0001d885) cntbar_detail_list_event_pane_t

0xc416,	// (0x00019def) cell_cntbar_detail_list_shct_pane_g1

0x2da0,	// (0x00010779) navi_pane_mv_g3

0x9530,	// (0x00016f09) main_cntbar_detail_pane_ParamLimits

0x94c0,	// (0x00016e99) main_notif_wgt_pane

0xcd19,	// (0x0001a6f2) aid_tch_main_mp4_pane_g4

0xcf1b,	// (0x0001a8f4) popup_slider_window_cp02

0xeb1f,	// (0x0001c4f8) list_recal_day_event_pane

0x8c6c,	// (0x00016645) cntbar_detail_btn_pane_ParamLimits

0x8c6c,	// (0x00016645) cntbar_detail_btn_pane

0x8c82,	// (0x0001665b) cntbar_detail_btn_pane_cp01_ParamLimits

0x8c82,	// (0x0001665b) cntbar_detail_btn_pane_cp01

0x8ca8,	// (0x00016681) cntbar_detail_list_shct_pane_ParamLimits

0x8cb8,	// (0x00016691) cntbar_detail_pane_g1_ParamLimits

0x8cb8,	// (0x00016691) cntbar_detail_pane_g1

0x8cc8,	// (0x000166a1) cntbar_detail_pane_t1_ParamLimits

0x8cc8,	// (0x000166a1) cntbar_detail_pane_t1

0x8d74,	// (0x0001674d) cntbar_detail_list_event_pane_g3_ParamLimits

0x8d74,	// (0x0001674d) cntbar_detail_list_event_pane_g3

0x8d8c,	// (0x00016765) cntbar_detail_list_event_pane_g4_ParamLimits

0x8d8c,	// (0x00016765) cntbar_detail_list_event_pane_g4

0x8da4,	// (0x0001677d) cntbar_detail_list_event_pane_g5_ParamLimits

0x8da4,	// (0x0001677d) cntbar_detail_list_event_pane_g5

0x8dbc,	// (0x00016795) cntbar_detail_list_event_pane_g6_ParamLimits

0x8dbc,	// (0x00016795) cntbar_detail_list_event_pane_g6

0x8dfe,	// (0x000167d7) cntbar_detail_list_event_pane_t3_ParamLimits

0x8dfe,	// (0x000167d7) cntbar_detail_list_event_pane_t3

0x8e10,	// (0x000167e9) popup_notif_wgt_window_ParamLimits

0x8e10,	// (0x000167e9) popup_notif_wgt_window

0x8e29,	// (0x00016802) popup_submenu_window_cp01_ParamLimits

0x8e29,	// (0x00016802) popup_submenu_window_cp01

0xaa6f,	// (0x00018448) bg_popup_window_pane_cp10

0xee1c,	// (0x0001c7f5) listscroll_notif_wgt_pane

0xee26,	// (0x0001c7ff) list_notif_wgt_window

0xee2f,	// (0x0001c808) scroll_pane_cp033

0xee38,	// (0x0001c811) list_notif_wgt_row_pane_ParamLimits

0xee38,	// (0x0001c811) list_notif_wgt_row_pane

0xee4c,	// (0x0001c825) aid_size_list_notif_wgt_del

0xee55,	// (0x0001c82e) list_notif_wgt_row_pane_g1

0xee5d,	// (0x0001c836) list_notif_wgt_row_pane_g2

0xee65,	// (0x0001c83e) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0001d88c) list_notif_wgt_row_pane_g

0xee6e,	// (0x0001c847) list_notif_wgt_row_pane_t1

0xee7c,	// (0x0001c855) list_notif_wgt_row_pane_t2

0xee8a,	// (0x0001c863) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x0001d893) list_notif_wgt_row_pane_t

0xd497,	// (0x0001ae70) list_recal_day_event_pane_g1

0xee98,	// (0x0001c871) list_recal_day_event_pane_t1

0x94c0,	// (0x00016e99) bg_button_pane_cp045

0xeea7,	// (0x0001c880) cntbar_detail_btn_pane_t1

0xbf0e,	// (0x000198e7) main_callh_pane_ParamLimits

0xbf0e,	// (0x000198e7) main_callh_pane

0x94c0,	// (0x00016e99) main_coverflow0_pane

0x94c0,	// (0x00016e99) main_wgtman_pane

0x7dd5,	// (0x000157ae) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7dd5,	// (0x000157ae) main_fs_bigclock_unlock_btn_pane

0xe6ce,	// (0x0001c0a7) bg_button_pane_cp16

0xe6de,	// (0x0001c0b7) cell_tport_appsw_pane_g3

0x8e3b,	// (0x00016814) cf0_flow_pane_ParamLimits

0x8e3b,	// (0x00016814) cf0_flow_pane

0xeeb5,	// (0x0001c88e) listscroll_cf0_pane

0xeebe,	// (0x0001c897) main_cf0_pane_g1

0x8e50,	// (0x00016829) main_cf0_pane_t1_ParamLimits

0x8e50,	// (0x00016829) main_cf0_pane_t1

0x8e67,	// (0x00016840) main_cf0_pane_t2_ParamLimits

0x8e67,	// (0x00016840) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x0001d89a) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x0001d89a) main_cf0_pane_t

0xeec8,	// (0x0001c8a1) scroll_pane_cp11

0x8e7e,	// (0x00016857) cf0_flow_pane_g1

0x8e86,	// (0x0001685f) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x0001d89f) cf0_flow_pane_g

0x8e8e,	// (0x00016867) cf0_flow_pane_t1

0x94c0,	// (0x00016e99) main_call6_pane

0x94c0,	// (0x00016e99) main_calllock_pane

0x8e9c,	// (0x00016875) call6_btn_grp_pane_ParamLimits

0x8e9c,	// (0x00016875) call6_btn_grp_pane

0x8eb6,	// (0x0001688f) call6_pane_g1_ParamLimits

0x8eb6,	// (0x0001688f) call6_pane_g1

0x8ecb,	// (0x000168a4) popup_call6_1st_window_ParamLimits

0x8ecb,	// (0x000168a4) popup_call6_1st_window

0x8edc,	// (0x000168b5) popup_call6_2nd_window_ParamLimits

0x8edc,	// (0x000168b5) popup_call6_2nd_window

0x8eed,	// (0x000168c6) cell_call6_btn_pane_ParamLimits

0x8eed,	// (0x000168c6) cell_call6_btn_pane

0xaa6f,	// (0x00018448) bg_popup_call2_in_pane_cp03

0xeed3,	// (0x0001c8ac) popup_call6_1st_window_g1

0xeedb,	// (0x0001c8b4) popup_call6_1st_window_g2

0xeee3,	// (0x0001c8bc) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0001d8a4) popup_call6_1st_window_g

0xeeeb,	// (0x0001c8c4) popup_call6_1st_window_t1

0xeefa,	// (0x0001c8d3) popup_call6_1st_window_t2

0xef0a,	// (0x0001c8e3) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0001d8ab) popup_call6_1st_window_t

0xaa6f,	// (0x00018448) bg_popup_call2_in_pane_cp04

0xeed3,	// (0x0001c8ac) popup_call6_2nd_window_g1

0xeedb,	// (0x0001c8b4) popup_call6_2nd_window_g2

0xeee3,	// (0x0001c8bc) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0001d8a4) popup_call6_2nd_window_g

0xeeeb,	// (0x0001c8c4) popup_call6_2nd_window_t1

0x94c0,	// (0x00016e99) bg_button_pane_cp15

0xef1a,	// (0x0001c8f3) cell_call6_btn_pane_g1

0xef23,	// (0x0001c8fc) cell_call6_btn_pane_t1

0x8f01,	// (0x000168da) listscroll_wgtman_pane_ParamLimits

0x8f01,	// (0x000168da) listscroll_wgtman_pane

0x8f24,	// (0x000168fd) wgtman_btn_pane_ParamLimits

0x8f24,	// (0x000168fd) wgtman_btn_pane

0xa922,	// (0x000182fb) aid_scroll_copy1

0xef32,	// (0x0001c90b) list_wgtman_pane

0x8f67,	// (0x00016940) wgtman_btn_pane_g1_ParamLimits

0x8f67,	// (0x00016940) wgtman_btn_pane_g1

0x8f93,	// (0x0001696c) wgtman_btn_pane_t1_ParamLimits

0x8f93,	// (0x0001696c) wgtman_btn_pane_t1

0xef3c,	// (0x0001c915) wgtman_btn_pane_t2_ParamLimits

0xef3c,	// (0x0001c915) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0001d8b2) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0001d8b2) wgtman_btn_pane_t

0x8fd0,	// (0x000169a9) listrow_wgtman_pane_ParamLimits

0x8fd0,	// (0x000169a9) listrow_wgtman_pane

0x8fe3,	// (0x000169bc) listrow_wgtman_pane_g1

0x8fec,	// (0x000169c5) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0001d8b7) listrow_wgtman_pane_g

0x8ff6,	// (0x000169cf) listrow_wgtman_pane_t1

0x9004,	// (0x000169dd) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0001d8bc) listrow_wgtman_pane_t

0x9012,	// (0x000169eb) wait_bar_pane_cp09

0xef53,	// (0x0001c92c) main_calllock_btn_pane

0xef5d,	// (0x0001c936) main_calllock_pane_g1

0x94c0,	// (0x00016e99) bg_button_pane_cp17

0xef68,	// (0x0001c941) main_calllock_btn_pane_g1

0xef71,	// (0x0001c94a) main_calllock_btn_pane_t1

0x94c0,	// (0x00016e99) main_dialer3_pane

0x94c0,	// (0x00016e99) main_fmrd2_pane

0xc416,	// (0x00019def) main_fs_bigclock_unlock_btn_pane_g1

0xef88,	// (0x0001c961) main_fs_bigclock_unlock_btn_pane_t1

0x901a,	// (0x000169f3) area_fmrd2_info_pane_ParamLimits

0x901a,	// (0x000169f3) area_fmrd2_info_pane

0x902b,	// (0x00016a04) area_fmrd2_visual_pane_ParamLimits

0x902b,	// (0x00016a04) area_fmrd2_visual_pane

0x9039,	// (0x00016a12) fmrd2_indi_pane_ParamLimits

0x9039,	// (0x00016a12) fmrd2_indi_pane

0x9046,	// (0x00016a1f) area_fmrd2_visual_pane_g1

0x904e,	// (0x00016a27) area_fmrd2_visual_pane_t1

0x905e,	// (0x00016a37) area_fmrd2_visual_pane_t2

0x906e,	// (0x00016a47) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x0001d8c6) area_fmrd2_visual_pane_t

0x907e,	// (0x00016a57) area_fmrd2_info_pane_g1

0x9086,	// (0x00016a5f) area_fmrd2_info_pane_t1

0x9096,	// (0x00016a6f) area_fmrd2_info_pane_t2

0x90a6,	// (0x00016a7f) area_fmrd2_info_pane_t3

0x90b6,	// (0x00016a8f) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0001d8cd) area_fmrd2_info_pane_t

0x90c4,	// (0x00016a9d) fmrd2_indi_pane_t1

0x90d4,	// (0x00016aad) fmrd2_indi_pane_t2

0x90e4,	// (0x00016abd) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0001d8d6) fmrd2_indi_pane_t

0x7e4b,	// (0x00015824) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7e4b,	// (0x00015824) list_single_fs_bigclock_indicator_pane_g5

0x7eef,	// (0x000158c8) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7eef,	// (0x000158c8) list_single_fs_bigclock_indicator_pane_t5

0x8869,	// (0x00016242) aid_cell_bcale_month_pane_ParamLimits

0x8869,	// (0x00016242) aid_cell_bcale_month_pane

0x887b,	// (0x00016254) bcale_month_pane_ParamLimits

0x887b,	// (0x00016254) bcale_month_pane

0x8895,	// (0x0001626e) bcale_preview_pane_ParamLimits

0x8895,	// (0x0001626e) bcale_preview_pane

0xed0f,	// (0x0001c6e8) list_single_fs_bigclock_pane_t1_ParamLimits

0xed2b,	// (0x0001c704) list_single_fs_bigclock_pane_t2_ParamLimits

0xed2b,	// (0x0001c704) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x0001d85d) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0001d85d) list_single_fs_bigclock_pane_t

0xef80,	// (0x0001c959) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x0001d8c1) main_fs_bigclock_unlock_btn_pane_g

0x90f4,	// (0x00016acd) aid_dia3_key_size_ParamLimits

0x90f4,	// (0x00016acd) aid_dia3_key_size

0x9103,	// (0x00016adc) aid_dia3_listrow_size_ParamLimits

0x9103,	// (0x00016adc) aid_dia3_listrow_size

0x9118,	// (0x00016af1) dia3_keypad_fun_pane_ParamLimits

0x9118,	// (0x00016af1) dia3_keypad_fun_pane

0x9134,	// (0x00016b0d) dia3_keypad_num_pane_ParamLimits

0x9134,	// (0x00016b0d) dia3_keypad_num_pane

0x914f,	// (0x00016b28) dia3_listscroll_pane_ParamLimits

0x914f,	// (0x00016b28) dia3_listscroll_pane

0x9162,	// (0x00016b3b) dia3_numentry_pane_ParamLimits

0x9162,	// (0x00016b3b) dia3_numentry_pane

0xef96,	// (0x0001c96f) dia3_list_pane

0xefa1,	// (0x0001c97a) scroll_pane_cp12

0x94c0,	// (0x00016e99) bg_dia3_numentry_pane

0x9176,	// (0x00016b4f) dia3_numentry_pane_t1

0x9185,	// (0x00016b5e) cell_dia3_key_num_pane

0x918d,	// (0x00016b66) cell_dia3_key0_fun_pane_ParamLimits

0x918d,	// (0x00016b66) cell_dia3_key0_fun_pane

0x91a1,	// (0x00016b7a) cell_dia3_key1_fun_pane_ParamLimits

0x91a1,	// (0x00016b7a) cell_dia3_key1_fun_pane

0x91b9,	// (0x00016b92) dia3_listrow_pane

0xdf6c,	// (0x0001b945) bg_dia3_numentry_pane_g1

0x94c0,	// (0x00016e99) bg_button_pane_cp21

0xefb5,	// (0x0001c98e) cell_dia3_key_num_pane_t1

0xefc3,	// (0x0001c99c) cell_dia3_key_num_pane_t2

0xefd2,	// (0x0001c9ab) cell_dia3_key_num_pane_t3

0xefe1,	// (0x0001c9ba) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0001d8dd) cell_dia3_key_num_pane_t

0x94c0,	// (0x00016e99) bg_button_pane_cp19

0x91cb,	// (0x00016ba4) cell_dia3_key0_fun_pane_g1

0x94c0,	// (0x00016e99) bg_button_pane_cp20

0x91d3,	// (0x00016bac) cell_dia3_key1_fun_pane_g1

0x91db,	// (0x00016bb4) area_left_week_number_pane

0x91e4,	// (0x00016bbd) area_top_day_name_pane

0x91ed,	// (0x00016bc6) frame_month_view_pane

0x91f5,	// (0x00016bce) grid_month_view_pane

0x91ff,	// (0x00016bd8) cell_top_day_name_pane_ParamLimits

0x91ff,	// (0x00016bd8) cell_top_day_name_pane

0x8a8b,	// (0x00016464) cell_area_left_week_number_pane_ParamLimits

0x8a8b,	// (0x00016464) cell_area_left_week_number_pane

0x9215,	// (0x00016bee) cell_month_view_pane_ParamLimits

0x9215,	// (0x00016bee) cell_month_view_pane

0xeff0,	// (0x0001c9c9) frm_month_g1

0x9230,	// (0x00016c09) frm_month_g2

0x9238,	// (0x00016c11) frm_month_g3

0x9240,	// (0x00016c19) frm_month_g4

0x9248,	// (0x00016c21) frm_month_g5

0x9250,	// (0x00016c29) frm_month_g6

0x9258,	// (0x00016c31) frm_month_g7

0xeff9,	// (0x0001c9d2) frm_month_g8

0x9260,	// (0x00016c39) frm_month_g9

0x9269,	// (0x00016c42) frm_month_g10

0x9272,	// (0x00016c4b) frm_month_g11

0x927b,	// (0x00016c54) frm_month_g12

0x9284,	// (0x00016c5d) frm_month_g13

0x928d,	// (0x00016c66) frm_month_g14

0x9296,	// (0x00016c6f) frm_month_g15

0x929f,	// (0x00016c78) frm_month_g16

0x000f,

0xff0d,	// (0x0001d8e6) frm_month_g

0x92a8,	// (0x00016c81) cell_top_day_name_pane_t1

0x92b7,	// (0x00016c90) cell_area_left_week_number_pane_g1

0x92a8,	// (0x00016c81) cell_area_left_week_number_pane_t1

0xc416,	// (0x00019def) cell_month_view_pane_g1

0x92bf,	// (0x00016c98) cell_month_view_pane_t1

0x94c0,	// (0x00016e99) main_fps_pane

0xe45a,	// (0x0001be33) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe45a,	// (0x0001be33) cmail_ddmenu_btn02_pane_cp1

0xe476,	// (0x0001be4f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe476,	// (0x0001be4f) cmail_ddmenu_btn02_pane_cp2

0x8b3f,	// (0x00016518) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8b3f,	// (0x00016518) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x0001d80e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x0001d80e) cmail_ddmenu_btn02_pane_g

0x8b5d,	// (0x00016536) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8b5d,	// (0x00016536) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0001d813) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0001d813) cmail_ddmenu_btn02_pane_t

0x92ce,	// (0x00016ca7) fps_text_pane_ParamLimits

0x92ce,	// (0x00016ca7) fps_text_pane

0x92e5,	// (0x00016cbe) main_fps_pane_g1_ParamLimits

0x92e5,	// (0x00016cbe) main_fps_pane_g1

0x92ff,	// (0x00016cd8) wait_bar_pane_cp010_ParamLimits

0x92ff,	// (0x00016cd8) wait_bar_pane_cp010

0x9310,	// (0x00016ce9) fps_text_pane_t1_ParamLimits

0x9310,	// (0x00016ce9) fps_text_pane_t1

0xf078,	// (0x0001ca51) cam4_image_uncrop_pane_g1

0xf081,	// (0x0001ca5a) cam4_image_uncrop_pane_g2

0x6007,	// (0x000139e0) cam4_image_uncrop_pane_g3

0x6010,	// (0x000139e9) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0001d2e6) cam4_image_uncrop_pane_g

0x91b9,	// (0x00016b92) dia3_listrow_pane_ParamLimits

0x94c0,	// (0x00016e99) main_phob2_pane

0x868b,	// (0x00016064) cell_tport_appsw_pane_cp02_ParamLimits

0x868b,	// (0x00016064) cell_tport_appsw_pane_cp02

0x869f,	// (0x00016078) cell_tport_appsw_pane_cp03_ParamLimits

0x869f,	// (0x00016078) cell_tport_appsw_pane_cp03

0x94c0,	// (0x00016e99) phob2_contact_card_pane

0x94c0,	// (0x00016e99) phob2_listscroll_pane

0xf002,	// (0x0001c9db) phob2_list_pane

0xf00a,	// (0x0001c9e3) scroll_pane_cp034

0x9328,	// (0x00016d01) phob2_cc_data_pane_ParamLimits

0x9328,	// (0x00016d01) phob2_cc_data_pane

0x9347,	// (0x00016d20) phob2_cc_listscroll_pane_ParamLimits

0x9347,	// (0x00016d20) phob2_cc_listscroll_pane

0xd206,	// (0x0001abdf) list_double_large_graphic_phob2_pane_ParamLimits

0xd206,	// (0x0001abdf) list_double_large_graphic_phob2_pane

0x9365,	// (0x00016d3e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9365,	// (0x00016d3e) list_double_large_graphic_phob2_pane_g1

0x9372,	// (0x00016d4b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9372,	// (0x00016d4b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0001d907) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0001d907) list_double_large_graphic_phob2_pane_g

0x937e,	// (0x00016d57) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x937e,	// (0x00016d57) list_double_large_graphic_phob2_pane_t1

0x9393,	// (0x00016d6c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9393,	// (0x00016d6c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0001d90c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0001d90c) list_double_large_graphic_phob2_pane_t

0x94c0,	// (0x00016e99) list_highlight_pane_cp024

0xf012,	// (0x0001c9eb) phob2_cc_button_pane

0x93a5,	// (0x00016d7e) phob2_cc_data_pane_g1_ParamLimits

0x93a5,	// (0x00016d7e) phob2_cc_data_pane_g1

0x93ba,	// (0x00016d93) phob2_cc_data_pane_g2_ParamLimits

0x93ba,	// (0x00016d93) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0001d911) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0001d911) phob2_cc_data_pane_g

0x93cc,	// (0x00016da5) phob2_cc_data_pane_t1_ParamLimits

0x93cc,	// (0x00016da5) phob2_cc_data_pane_t1

0x93e4,	// (0x00016dbd) phob2_cc_data_pane_t2_ParamLimits

0x93e4,	// (0x00016dbd) phob2_cc_data_pane_t2

0x93fc,	// (0x00016dd5) phob2_cc_data_pane_t3_ParamLimits

0x93fc,	// (0x00016dd5) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0001d916) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0001d916) phob2_cc_data_pane_t

0xf01a,	// (0x0001c9f3) phob2_cc_list_pane_ParamLimits

0xf01a,	// (0x0001c9f3) phob2_cc_list_pane

0xd542,	// (0x0001af1b) scroll_pane_cp035_ParamLimits

0xd542,	// (0x0001af1b) scroll_pane_cp035

0x9530,	// (0x00016f09) bg_button_pane_cp033

0xf026,	// (0x0001c9ff) phob2_cc_button_pane_g1

0xf032,	// (0x0001ca0b) phob2_cc_button_pane_t1

0xf047,	// (0x0001ca20) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x0001d91d) phob2_cc_button_pane_t

0x9416,	// (0x00016def) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9416,	// (0x00016def) list_double_large_graphic_phob2_cc_pane

0x942a,	// (0x00016e03) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x942a,	// (0x00016e03) list_double_large_graphic_phob2_cc_pane_g1

0x9436,	// (0x00016e0f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9436,	// (0x00016e0f) list_double_large_graphic_phob2_cc_pane_g2

0x9442,	// (0x00016e1b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9442,	// (0x00016e1b) list_double_large_graphic_phob2_cc_pane_g3

0x944e,	// (0x00016e27) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x944e,	// (0x00016e27) list_double_large_graphic_phob2_cc_pane_g4

0x945a,	// (0x00016e33) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x945a,	// (0x00016e33) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0001d922) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0001d922) list_double_large_graphic_phob2_cc_pane_g

0x9466,	// (0x00016e3f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9466,	// (0x00016e3f) list_double_large_graphic_phob2_cc_pane_t1

0x948f,	// (0x00016e68) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x948f,	// (0x00016e68) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x0001d92d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x0001d92d) list_double_large_graphic_phob2_cc_pane_t

0xf059,	// (0x0001ca32) list_highlight_pane_cp025_ParamLimits

0xf059,	// (0x0001ca32) list_highlight_pane_cp025

0x9530,	// (0x00016f09) bg_button_pane_cp033_ParamLimits

0xf026,	// (0x0001c9ff) phob2_cc_button_pane_g1_ParamLimits

0xf032,	// (0x0001ca0b) phob2_cc_button_pane_t1_ParamLimits

0xf047,	// (0x0001ca20) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x0001d91d) phob2_cc_button_pane_t_ParamLimits

0x0df2,	// (0x0000e7cb) popup_wgtman_window

0xd2e8,	// (0x0001acc1) scroll_pane_cp038

0x8f49,	// (0x00016922) wgtman_btn_pane_cp_01_ParamLimits

0x8f49,	// (0x00016922) wgtman_btn_pane_cp_01

0xf067,	// (0x0001ca40) wgtman_content_pane

0xefac,	// (0x0001c985) wgtman_heading_pane

0x94c0,	// (0x00016e99) bg_heading_pane_cp02

0xf070,	// (0x0001ca49) wgtman_heading_pane_g1

0xf08a,	// (0x0001ca63) wgtman_heading_pane_t1

0xf098,	// (0x0001ca71) scroll_pane_cp036

0xf0a0,	// (0x0001ca79) wgtman_list_pane

0xf0a8,	// (0x0001ca81) wgtman_list_pane_t1_ParamLimits

0xf0a8,	// (0x0001ca81) wgtman_list_pane_t1

0xd0ba,	// (0x0001aa93) cam4_grid_pane

0x6dc3,	// (0x0001479c) bg_button_pane_cp015_ParamLimits

0x6dd7,	// (0x000147b0) bg_button_pane_cp016_ParamLimits

0x6dea,	// (0x000147c3) bg_button_pane_cp017_ParamLimits

0x6e42,	// (0x0001481b) popup_vitu2_query_window_g3_ParamLimits

0x6e42,	// (0x0001481b) popup_vitu2_query_window_g3

0x6eff,	// (0x000148d8) popup_vitu2_query_window_t6_ParamLimits

0x6eff,	// (0x000148d8) popup_vitu2_query_window_t6

0x6f2a,	// (0x00014903) popup_vitu2_query_window_t7_ParamLimits

0x6f2a,	// (0x00014903) popup_vitu2_query_window_t7

0xf078,	// (0x0001ca51) cam4_grid_pane_g1

0xf081,	// (0x0001ca5a) cam4_grid_pane_g2

0xf0ca,	// (0x0001caa3) cam4_grid_pane_g3

0xf0d3,	// (0x0001caac) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0001d932) cam4_grid_pane_g

0x1bd2,	// (0x0000f5ab) aid_placing_vt_slider_lsc_ParamLimits

0x1ecf,	// (0x0000f8a8) vidtel_button_pane_ParamLimits

0x1ecf,	// (0x0000f8a8) vidtel_button_pane

0x94c0,	// (0x00016e99) bg_button_pane_cp034

0x94b8,	// (0x00016e91) vidtel_button_pane_g1

0xf0de,	// (0x0001cab7) vidtel_button_pane_t1

0xd425,	// (0x0001adfe) aid_size_vtel_slider_touch

0xd542,	// (0x0001af1b) scroll_pane_cp039

0xdfaa,	// (0x0001b983) ncim_query_button_pane_cp01_ParamLimits

0xdfc9,	// (0x0001b9a2) ncimui_query_pane_g1_ParamLimits

0x9530,	// (0x00016f09) input_focus_pane_cp012_ParamLimits

0xdfee,	// (0x0001b9c7) ncim_query_entry_pane_t1_ParamLimits

0xd542,	// (0x0001af1b) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
