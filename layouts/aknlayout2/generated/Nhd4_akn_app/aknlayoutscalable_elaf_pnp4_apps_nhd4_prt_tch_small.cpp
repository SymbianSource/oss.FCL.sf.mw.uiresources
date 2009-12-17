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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002e9f0 };

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
0x6664,	// (0x00035054) Screen

0x6670,	// (0x00035060) application_window

0x66b0,	// (0x000350a0) area_bottom_pane_ParamLimits

0x66b0,	// (0x000350a0) area_bottom_pane

0x66e5,	// (0x000350d5) area_top_pane_ParamLimits

0x66e5,	// (0x000350d5) area_top_pane

0xddd5,	// (0x0003c7c5) call_video_uplink_pane_ParamLimits

0xddd5,	// (0x0003c7c5) call_video_uplink_pane

0x6773,	// (0x00035163) main_pane_ParamLimits

0x6773,	// (0x00035163) main_pane

0x196e,	// (0x0003035e) context_pane

0x9578,	// (0x00037f68) navi_pane

0x9598,	// (0x00037f88) popup_cale_events_window_ParamLimits

0x9598,	// (0x00037f88) popup_cale_events_window

0x1981,	// (0x00030371) popup_mup_playback_window

0x95b0,	// (0x00037fa0) signal_pane

0xe56e,	// (0x0003cf5e) main_browser_pane

0xeffe,	// (0x0003d9ee) main_burst_pane

0x944e,	// (0x00037e3e) main_calc_pane

0xeffe,	// (0x0003d9ee) main_cale_day_pane

0xe56e,	// (0x0003cf5e) main_cale_month_pane

0xeffe,	// (0x0003d9ee) main_cale_week_pane

0xeffe,	// (0x0003d9ee) main_call_pane

0xe204,	// (0x0003cbf4) main_call_poc_pane

0xeffe,	// (0x0003d9ee) main_camera_pane

0xeffe,	// (0x0003d9ee) main_chi_dic_pane

0xee8d,	// (0x0003d87d) main_clock_pane

0xe204,	// (0x0003cbf4) main_fmradio_pane

0xeffe,	// (0x0003d9ee) main_graph_messa_pane

0xe204,	// (0x0003cbf4) main_help_pane

0xe56e,	// (0x0003cf5e) main_im_pane

0xe45f,	// (0x0003ce4f) main_image_pane_ParamLimits

0xe45f,	// (0x0003ce4f) main_image_pane

0xe204,	// (0x0003cbf4) main_location2_pane

0xeffe,	// (0x0003d9ee) main_location_pane

0xe204,	// (0x0003cbf4) main_messa_pane

0xe204,	// (0x0003cbf4) main_mp2_pane

0xeffe,	// (0x0003d9ee) main_mp_pane

0xe204,	// (0x0003cbf4) main_msg_pane

0xe204,	// (0x0003cbf4) main_mup_eq_pane

0xe204,	// (0x0003cbf4) main_mup_pane

0xeffe,	// (0x0003d9ee) main_notes_pane

0xe204,	// (0x0003cbf4) main_pec_pane

0xe204,	// (0x0003cbf4) main_phob_pane

0xe204,	// (0x0003cbf4) main_pinb_pane

0xe204,	// (0x0003cbf4) main_postcard_pane

0xe204,	// (0x0003cbf4) main_qdial_pane

0xeffe,	// (0x0003d9ee) main_skin_pane

0xe204,	// (0x0003cbf4) main_smil2_pane

0xeffe,	// (0x0003d9ee) main_smil_pane

0xeffe,	// (0x0003d9ee) main_video_pane

0xeffe,	// (0x0003d9ee) main_video_tele_pane

0xe45f,	// (0x0003ce4f) main_viewer_pane_ParamLimits

0xe45f,	// (0x0003ce4f) main_viewer_pane

0xeffe,	// (0x0003d9ee) main_vorec_pane

0x9484,	// (0x00037e74) popup_blid_sat_info_window_ParamLimits

0x9484,	// (0x00037e74) popup_blid_sat_info_window

0x949a,	// (0x00037e8a) popup_dyc_status_message_window_ParamLimits

0x949a,	// (0x00037e8a) popup_dyc_status_message_window

0x94a8,	// (0x00037e98) popup_grid_large_graphic_window_ParamLimits

0x94a8,	// (0x00037e98) popup_grid_large_graphic_window

0x951c,	// (0x00037f0c) popup_loc_request_window_ParamLimits

0x951c,	// (0x00037f0c) popup_loc_request_window

0x9550,	// (0x00037f40) popup_wml_address_window_ParamLimits

0x9550,	// (0x00037f40) popup_wml_address_window

0x9326,	// (0x00037d16) call_muted_g1

0x8fdd,	// (0x000379cd) popup_call_audio_conf_window_ParamLimits

0x8fdd,	// (0x000379cd) popup_call_audio_conf_window

0x9336,	// (0x00037d26) popup_call_audio_first_window_ParamLimits

0x9336,	// (0x00037d26) popup_call_audio_first_window

0x9376,	// (0x00037d66) popup_call_audio_in_window_ParamLimits

0x9376,	// (0x00037d66) popup_call_audio_in_window

0x939a,	// (0x00037d8a) popup_call_audio_out_window_ParamLimits

0x939a,	// (0x00037d8a) popup_call_audio_out_window

0x93bc,	// (0x00037dac) popup_call_audio_second_window_ParamLimits

0x93bc,	// (0x00037dac) popup_call_audio_second_window

0x93ec,	// (0x00037ddc) popup_call_audio_wait_window_ParamLimits

0x93ec,	// (0x00037ddc) popup_call_audio_wait_window

0x940d,	// (0x00037dfd) popup_number_entry_window_ParamLimits

0x940d,	// (0x00037dfd) popup_number_entry_window

0xddf3,	// (0x0003c7e3) bg_popup_call_pane_cp05_ParamLimits

0xddf3,	// (0x0003c7e3) bg_popup_call_pane_cp05

0xde13,	// (0x0003c803) popup_number_entry_window_t1

0xde26,	// (0x0003c816) popup_number_entry_window_t2

0xde38,	// (0x0003c828) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0003db1f) popup_number_entry_window_t

0xde4a,	// (0x0003c83a) text_title_cp2

0xde5d,	// (0x0003c84d) bg_popup_call_pane_cp_ParamLimits

0xde5d,	// (0x0003c84d) bg_popup_call_pane_cp

0xde6b,	// (0x0003c85b) call_thumbnail_pane

0xde73,	// (0x0003c863) popup_call_audio_in_window_g1_ParamLimits

0xde73,	// (0x0003c863) popup_call_audio_in_window_g1

0xde7f,	// (0x0003c86f) popup_call_audio_in_window_g2_ParamLimits

0xde7f,	// (0x0003c86f) popup_call_audio_in_window_g2

0xde8b,	// (0x0003c87b) popup_call_audio_in_window_g3_ParamLimits

0xde8b,	// (0x0003c87b) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0003db28) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0003db28) popup_call_audio_in_window_g

0xde97,	// (0x0003c887) popup_call_audio_in_window_t1_ParamLimits

0xde97,	// (0x0003c887) popup_call_audio_in_window_t1

0xdeb2,	// (0x0003c8a2) popup_call_audio_in_window_t2_ParamLimits

0xdeb2,	// (0x0003c8a2) popup_call_audio_in_window_t2

0xdecd,	// (0x0003c8bd) popup_call_audio_in_window_t3_ParamLimits

0xdecd,	// (0x0003c8bd) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0003db2f) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0003db2f) popup_call_audio_in_window_t

0xde5d,	// (0x0003c84d) bg_popup_call_pane_cp01_ParamLimits

0xde5d,	// (0x0003c84d) bg_popup_call_pane_cp01

0xde6b,	// (0x0003c85b) call_thumbnail_pane_cp02

0xdee0,	// (0x0003c8d0) call_type_pane_cp022

0xdee8,	// (0x0003c8d8) popup_call_audio_out_window_g1_ParamLimits

0xdee8,	// (0x0003c8d8) popup_call_audio_out_window_g1

0xdefa,	// (0x0003c8ea) popup_call_audio_out_window_g2_ParamLimits

0xdefa,	// (0x0003c8ea) popup_call_audio_out_window_g2

0xdf06,	// (0x0003c8f6) popup_call_audio_out_window_g3_ParamLimits

0xdf06,	// (0x0003c8f6) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0003db36) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0003db36) popup_call_audio_out_window_g

0xdf18,	// (0x0003c908) popup_call_audio_out_window_t1_ParamLimits

0xdf18,	// (0x0003c908) popup_call_audio_out_window_t1

0xdf30,	// (0x0003c920) popup_call_audio_out_window_t2_ParamLimits

0xdf30,	// (0x0003c920) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0003db3d) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0003db3d) popup_call_audio_out_window_t

0xdf45,	// (0x0003c935) bg_popup_call_pane_ParamLimits

0xdf45,	// (0x0003c935) bg_popup_call_pane

0x696d,	// (0x0003535d) call_thumbnail_pane_cp_ParamLimits

0x696d,	// (0x0003535d) call_thumbnail_pane_cp

0xdfc9,	// (0x0003c9b9) call_type_pane_cp01_ParamLimits

0xdfc9,	// (0x0003c9b9) call_type_pane_cp01

0xe00d,	// (0x0003c9fd) popup_call_audio_first_window_g1_ParamLimits

0xe00d,	// (0x0003c9fd) popup_call_audio_first_window_g1

0xe059,	// (0x0003ca49) popup_call_audio_first_window_g2_ParamLimits

0xe059,	// (0x0003ca49) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0003db42) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0003db42) popup_call_audio_first_window_g

0xe09d,	// (0x0003ca8d) popup_call_audio_first_window_t1_ParamLimits

0xe09d,	// (0x0003ca8d) popup_call_audio_first_window_t1

0xe149,	// (0x0003cb39) popup_call_audio_first_window_t4_ParamLimits

0xe149,	// (0x0003cb39) popup_call_audio_first_window_t4

0xe1d5,	// (0x0003cbc5) popup_call_audio_first_window_t5_ParamLimits

0xe1d5,	// (0x0003cbc5) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0003db47) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0003db47) popup_call_audio_first_window_t

0xe204,	// (0x0003cbf4) bg_popup_call_pane_cp02

0xe20e,	// (0x0003cbfe) call_type_pane_cp023

0xe216,	// (0x0003cc06) popup_call_audio_wait_window_g1

0xe21e,	// (0x0003cc0e) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0003db4e) popup_call_audio_wait_window_g

0xe226,	// (0x0003cc16) popup_call_audio_wait_window_t3

0xe234,	// (0x0003cc24) bg_popup_call_pane_cp03_ParamLimits

0xe234,	// (0x0003cc24) bg_popup_call_pane_cp03

0xe294,	// (0x0003cc84) call_thumbnail_pane_cp011_ParamLimits

0xe294,	// (0x0003cc84) call_thumbnail_pane_cp011

0xe2a0,	// (0x0003cc90) call_type_pane_cp034_ParamLimits

0xe2a0,	// (0x0003cc90) call_type_pane_cp034

0xe2dc,	// (0x0003cccc) popup_call_audio_second_window_g1_ParamLimits

0xe2dc,	// (0x0003cccc) popup_call_audio_second_window_g1

0xe318,	// (0x0003cd08) popup_call_audio_second_window_g2_ParamLimits

0xe318,	// (0x0003cd08) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0003db53) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0003db53) popup_call_audio_second_window_g

0xe354,	// (0x0003cd44) popup_call_audio_second_window_t1_ParamLimits

0xe354,	// (0x0003cd44) popup_call_audio_second_window_t1

0xe3d5,	// (0x0003cdc5) popup_call_audio_second_window_t2_ParamLimits

0xe3d5,	// (0x0003cdc5) popup_call_audio_second_window_t2

0xe40b,	// (0x0003cdfb) popup_call_audio_second_window_t3_ParamLimits

0xe40b,	// (0x0003cdfb) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0003db58) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0003db58) popup_call_audio_second_window_t

0xe204,	// (0x0003cbf4) bg_popup_call_pane_cp04

0xe441,	// (0x0003ce31) list_conf_pane

0xe449,	// (0x0003ce39) popup_call_audio_conf_window_t1

0xe457,	// (0x0003ce47) call_thumbnail_pane_g1

0xe45f,	// (0x0003ce4f) bg_pinb_pane_ParamLimits

0xe45f,	// (0x0003ce4f) bg_pinb_pane

0xe46d,	// (0x0003ce5d) find_pinb_pane

0xe476,	// (0x0003ce66) listscroll_pinb_pane_ParamLimits

0xe476,	// (0x0003ce66) listscroll_pinb_pane

0xe485,	// (0x0003ce75) pinb_bg_pane_g1

0x6991,	// (0x00035381) pinb_bg_pane_g2

0x699d,	// (0x0003538d) pinb_bg_pane_g3

0x69a9,	// (0x00035399) pinb_bg_pane_g4

0x69b5,	// (0x000353a5) pinb_bg_pane_g5

0x69c1,	// (0x000353b1) pinb_bg_pane_g6

0x69cc,	// (0x000353bc) pinb_bg_pane_g7

0x69d7,	// (0x000353c7) pinb_bg_pane_g8

0x69e2,	// (0x000353d2) pinb_bg_pane_g9

0x69ec,	// (0x000353dc) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0003db5f) pinb_bg_pane_g

0x6a01,	// (0x000353f1) grid_pinb_pane

0x6a0c,	// (0x000353fc) list_pinb_pane

0x6a17,	// (0x00035407) scroll_pane_cp01_ParamLimits

0x6a17,	// (0x00035407) scroll_pane_cp01

0xe497,	// (0x0003ce87) find_pinb_pane_g1_ParamLimits

0xe497,	// (0x0003ce87) find_pinb_pane_g1

0xe4af,	// (0x0003ce9f) find_pinb_pane_t1

0xe4c1,	// (0x0003ceb1) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0003db79) find_pinb_pane_t

0xe4d6,	// (0x0003cec6) input_focus_pane_cp01_ParamLimits

0xe4d6,	// (0x0003cec6) input_focus_pane_cp01

0x6a29,	// (0x00035419) cell_pinb_pane_ParamLimits

0x6a29,	// (0x00035419) cell_pinb_pane

0x6a57,	// (0x00035447) cell_pinb_pane_g1_ParamLimits

0x6a57,	// (0x00035447) cell_pinb_pane_g1

0x6a6c,	// (0x0003545c) cell_pinb_pane_g2_ParamLimits

0x6a6c,	// (0x0003545c) cell_pinb_pane_g2

0xe4e2,	// (0x0003ced2) cell_pinb_pane_g3_ParamLimits

0xe4e2,	// (0x0003ced2) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0003db7e) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0003db7e) cell_pinb_pane_g

0xe204,	// (0x0003cbf4) grid_highlight_pane_cp01

0x6a78,	// (0x00035468) list_pinb_item_pane_ParamLimits

0x6a78,	// (0x00035468) list_pinb_item_pane

0xe204,	// (0x0003cbf4) list_highlight_pane_cp02

0xe4ee,	// (0x0003cede) list_pinb_item_pane_g1_ParamLimits

0xe4ee,	// (0x0003cede) list_pinb_item_pane_g1

0xe4fb,	// (0x0003ceeb) list_pinb_item_pane_g2_ParamLimits

0xe4fb,	// (0x0003ceeb) list_pinb_item_pane_g2

0x6aa2,	// (0x00035492) list_pinb_item_pane_g3_ParamLimits

0x6aa2,	// (0x00035492) list_pinb_item_pane_g3

0xe507,	// (0x0003cef7) list_pinb_item_pane_g4_ParamLimits

0xe507,	// (0x0003cef7) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0003db85) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0003db85) list_pinb_item_pane_g

0xe513,	// (0x0003cf03) list_pinb_item_pane_t1_ParamLimits

0xe513,	// (0x0003cf03) list_pinb_item_pane_t1

0x6acd,	// (0x000354bd) calc_display_pane

0x6aeb,	// (0x000354db) calc_paper_pane

0x6b07,	// (0x000354f7) grid_calc_pane

0xe204,	// (0x0003cbf4) bg_list_pane_cp01

0x6b33,	// (0x00035523) clock_g1

0x6b3b,	// (0x0003552b) clock_g2

0x0001,

0xf19e,	// (0x0003db8e) clock_g

0x6b45,	// (0x00035535) clock_t1_ParamLimits

0x6b45,	// (0x00035535) clock_t1

0x6b5a,	// (0x0003554a) clock_t2_ParamLimits

0x6b5a,	// (0x0003554a) clock_t2

0x6b6c,	// (0x0003555c) clock_t3_ParamLimits

0x6b6c,	// (0x0003555c) clock_t3

0x6b7e,	// (0x0003556e) clock_t4_ParamLimits

0x6b7e,	// (0x0003556e) clock_t4

0x6b90,	// (0x00035580) clock_t5_ParamLimits

0x6b90,	// (0x00035580) clock_t5

0x6ba5,	// (0x00035595) clock_t6_ParamLimits

0x6ba5,	// (0x00035595) clock_t6

0x6bb7,	// (0x000355a7) clock_t7_ParamLimits

0x6bb7,	// (0x000355a7) clock_t7

0x6bc9,	// (0x000355b9) clock_t8_ParamLimits

0x6bc9,	// (0x000355b9) clock_t8

0x6bdf,	// (0x000355cf) clock_t9_ParamLimits

0x6bdf,	// (0x000355cf) clock_t9

0x0008,

0xf1a3,	// (0x0003db93) clock_t_ParamLimits

0xf1a3,	// (0x0003db93) clock_t

0xe52a,	// (0x0003cf1a) popup_clock_analogue_window_cp02

0xe52a,	// (0x0003cf1a) popup_clock_digital_window_cp01

0xe532,	// (0x0003cf22) listscroll_help_pane

0xe204,	// (0x0003cbf4) phob_pre_status_pane

0xe53c,	// (0x0003cf2c) grid_qdial_pane

0xe204,	// (0x0003cbf4) listscroll_mce_pane

0xe546,	// (0x0003cf36) bg_notes_pane

0xe550,	// (0x0003cf40) list_notes_pane

0x6bf5,	// (0x000355e5) scroll_pane_cp06

0xe55a,	// (0x0003cf4a) bg_calc_paper_pane

0x6c00,	// (0x000355f0) list_calc_pane

0xe56e,	// (0x0003cf5e) bg_calc_display_pane

0x6c1a,	// (0x0003560a) calc_display_pane_t1

0x6c2f,	// (0x0003561f) calc_display_pane_t2

0x6c44,	// (0x00035634) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0003dba6) calc_display_pane_t

0x6c56,	// (0x00035646) cell_calc_pane_ParamLimits

0x6c56,	// (0x00035646) cell_calc_pane

0xe57a,	// (0x0003cf6a) bg_calc_paper_pane_g1

0xe586,	// (0x0003cf76) bg_calc_paper_pane_g2

0xe592,	// (0x0003cf82) bg_calc_paper_pane_g3

0xe59e,	// (0x0003cf8e) bg_calc_paper_pane_g4

0xe5aa,	// (0x0003cf9a) bg_calc_paper_pane_g5

0x6c83,	// (0x00035673) bg_calc_paper_pane_g6

0x6c94,	// (0x00035684) bg_calc_paper_pane_g7

0x6ca5,	// (0x00035695) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0003dbad) bg_calc_paper_pane_g

0x6cb6,	// (0x000356a6) calc_bg_paper_pane_g9

0x6cc7,	// (0x000356b7) list_calc_item_pane_ParamLimits

0x6cc7,	// (0x000356b7) list_calc_item_pane

0xe5b6,	// (0x0003cfa6) list_calc_item_pane_g1

0x6d01,	// (0x000356f1) list_calc_item_pane_t1_ParamLimits

0x6d01,	// (0x000356f1) list_calc_item_pane_t1

0x6d13,	// (0x00035703) list_calc_item_pane_t2_ParamLimits

0x6d13,	// (0x00035703) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x0003dbbe) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x0003dbbe) list_calc_item_pane_t

0xe5c3,	// (0x0003cfb3) cell_calc_pane_g1

0xe5cd,	// (0x0003cfbd) grid_highlight_pane_cp02

0xe5ef,	// (0x0003cfdf) bg_calc_display_pane_g1

0x6d43,	// (0x00035733) bg_calc_display_pane_g2

0xe5f8,	// (0x0003cfe8) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0003dbc8) bg_calc_display_pane_g

0x6d4d,	// (0x0003573d) cell_qdial_pane_ParamLimits

0x6d4d,	// (0x0003573d) cell_qdial_pane

0x6d61,	// (0x00035751) cell_qdial_pane_g1_ParamLimits

0x6d61,	// (0x00035751) cell_qdial_pane_g1

0x6d6e,	// (0x0003575e) cell_qdial_pane_g2_ParamLimits

0x6d6e,	// (0x0003575e) cell_qdial_pane_g2

0xe601,	// (0x0003cff1) cell_qdial_pane_g3_ParamLimits

0xe601,	// (0x0003cff1) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x0003dbcf) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x0003dbcf) cell_qdial_pane_g

0x6d8c,	// (0x0003577c) cell_qdial_pane_t1_ParamLimits

0x6d8c,	// (0x0003577c) cell_qdial_pane_t1

0x6da4,	// (0x00035794) cell_qdial_pane_t2_ParamLimits

0x6da4,	// (0x00035794) cell_qdial_pane_t2

0x6db7,	// (0x000357a7) cell_qdial_pane_t3_ParamLimits

0x6db7,	// (0x000357a7) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0003dbd8) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0003dbd8) cell_qdial_pane_t

0xe204,	// (0x0003cbf4) grid_highlight_pane_cp04

0xe60d,	// (0x0003cffd) thumbnail_qdial_pane_ParamLimits

0xe60d,	// (0x0003cffd) thumbnail_qdial_pane

0xe669,	// (0x0003d059) list_help_pane

0xe672,	// (0x0003d062) scroll_pane_cp02

0x6dca,	// (0x000357ba) help_list_pane_t1_ParamLimits

0x6dca,	// (0x000357ba) help_list_pane_t1

0x6e08,	// (0x000357f8) bg_notes_pane_g2

0x6e10,	// (0x00035800) bg_notes_pane_g3

0x6e18,	// (0x00035808) notes_bg_pane_g1

0x6e20,	// (0x00035810) notes_bg_pane_g4

0x6e28,	// (0x00035818) notes_bg_pane_g5

0x6e30,	// (0x00035820) notes_bg_pane_g6

0x6e38,	// (0x00035828) notes_bg_pane_g7

0x6e40,	// (0x00035830) notes_bg_pane_g8

0x6e48,	// (0x00035838) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0003dbf6) notes_bg_pane_g

0x6e50,	// (0x00035840) list_notes_text_pane_ParamLimits

0x6e50,	// (0x00035840) list_notes_text_pane

0xe67b,	// (0x0003d06b) list_notes_text_pane_g1

0x55ef,	// (0x00033fdf) list_notes_text_pane_t1

0xe56e,	// (0x0003cf5e) listscroll_cale_week_pane

0x6e9d,	// (0x0003588d) bg_cale_heading_pane

0xe695,	// (0x0003d085) bg_cale_pane_cp01

0x6eb1,	// (0x000358a1) cale_week_corner_pane

0x6ec2,	// (0x000358b2) cale_week_day_heading_pane

0x6ed6,	// (0x000358c6) cale_week_scroll_pane_g1

0x6ee7,	// (0x000358d7) cale_week_scroll_pane_g2

0x6ef8,	// (0x000358e8) cale_week_scroll_pane_g3

0x6f09,	// (0x000358f9) cale_week_scroll_pane_g4

0x6f1a,	// (0x0003590a) cale_week_scroll_pane_g5

0x6f2b,	// (0x0003591b) cale_week_scroll_pane_g6

0x6f3c,	// (0x0003592c) cale_week_scroll_pane_g7

0x6f4f,	// (0x0003593f) cale_week_scroll_pane_g8

0x6f62,	// (0x00035952) cale_week_scroll_pane_g9

0x6f73,	// (0x00035963) cale_week_scroll_pane_g10

0x6f84,	// (0x00035974) cale_week_scroll_pane_g11

0x6f95,	// (0x00035985) cale_week_scroll_pane_g12

0x6fa6,	// (0x00035996) cale_week_scroll_pane_g13

0x6fb7,	// (0x000359a7) cale_week_scroll_pane_g14

0x6fc8,	// (0x000359b8) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0003dc05) cale_week_scroll_pane_g

0x6fd9,	// (0x000359c9) cale_week_time_pane

0x6fec,	// (0x000359dc) grid_cale_week_pane

0x7001,	// (0x000359f1) scroll_pane_cp08

0x701b,	// (0x00035a0b) cell_cale_week_pane_ParamLimits

0x701b,	// (0x00035a0b) cell_cale_week_pane

0x7057,	// (0x00035a47) cale_week_day_heading_pane_t1

0x706b,	// (0x00035a5b) cale_week_day_heading_pane_t2

0x707f,	// (0x00035a6f) cale_week_day_heading_pane_t3

0x7093,	// (0x00035a83) cale_week_day_heading_pane_t4

0x70a7,	// (0x00035a97) cale_week_day_heading_pane_t5

0x70bb,	// (0x00035aab) cale_week_day_heading_pane_t6

0x70cf,	// (0x00035abf) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0003dc24) cale_week_day_heading_pane_t

0xe6c0,	// (0x0003d0b0) bg_cale_side_pane

0x70e3,	// (0x00035ad3) cale_week_time_pane_t1

0x70fb,	// (0x00035aeb) cale_week_time_pane_t2

0x7113,	// (0x00035b03) cale_week_time_pane_t3

0x712b,	// (0x00035b1b) cale_week_time_pane_t4

0x7143,	// (0x00035b33) cale_week_time_pane_t5

0x715b,	// (0x00035b4b) cale_week_time_pane_t6

0x7173,	// (0x00035b63) cale_week_time_pane_t7

0x718b,	// (0x00035b7b) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0003dc33) cale_week_time_pane_t

0x71a3,	// (0x00035b93) cell_cale_week_pane_g2

0x71bc,	// (0x00035bac) cell_cale_week_pane_g3_ParamLimits

0x71bc,	// (0x00035bac) cell_cale_week_pane_g3

0xe6ce,	// (0x0003d0be) grid_highlight_pane_cp07

0xe6d6,	// (0x0003d0c6) listscroll_gms_pane

0xe6e0,	// (0x0003d0d0) grid_gms_pane

0xe6e9,	// (0x0003d0d9) listscroll_gms_pane_g1

0xe6f1,	// (0x0003d0e1) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0003dc44) listscroll_gms_pane_g

0x71d4,	// (0x00035bc4) scroll_pane_cp010

0x71df,	// (0x00035bcf) cell_gms_pane_ParamLimits

0x71df,	// (0x00035bcf) cell_gms_pane

0x71f1,	// (0x00035be1) cell_gms_pane_g1

0xe6f9,	// (0x0003d0e9) cell_gms_pane_g2

0xe67b,	// (0x0003d06b) cell_gms_pane_g3

0xe701,	// (0x0003d0f1) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0003dc49) cell_gms_pane_g

0xe70a,	// (0x0003d0fa) grid_highlight_pane_cp09

0x92ce,	// (0x00037cbe) phob_pre_status_pane_g1

0x92d6,	// (0x00037cc6) phob_pre_status_pane_g2

0x92de,	// (0x00037cce) phob_pre_status_pane_g3

0x92e6,	// (0x00037cd6) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x0003e038) phob_pre_status_pane_g

0x92f6,	// (0x00037ce6) phob_pre_status_pane_t1

0x9306,	// (0x00037cf6) phob_pre_status_pane_t2

0x9316,	// (0x00037d06) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x0003e043) phob_pre_status_pane_t

0xe204,	// (0x0003cbf4) bg_list_pane_cp05

0x7201,	// (0x00035bf1) grid_vorec_pane

0x7209,	// (0x00035bf9) vorec_t1

0x7217,	// (0x00035c07) vorec_t2

0x7225,	// (0x00035c15) vorec_t3

0x7233,	// (0x00035c23) vorec_t4

0x7241,	// (0x00035c31) vorec_t5

0x724f,	// (0x00035c3f) vorec_t6

0x0006,

0xf262,	// (0x0003dc52) vorec_t

0x726b,	// (0x00035c5b) wait_bar_pane_cp01

0xe712,	// (0x0003d102) cell_vorec_pane_ParamLimits

0xe712,	// (0x0003d102) cell_vorec_pane

0xe725,	// (0x0003d115) cell_vorec_pane_g1

0xe204,	// (0x0003cbf4) grid_highlight_pane_cp05

0x7283,	// (0x00035c73) cams_zoom_pane

0x728f,	// (0x00035c7f) image_vga_pane

0x729e,	// (0x00035c8e) main_camera_pane_g1

0x72ac,	// (0x00035c9c) main_camera_pane_g2

0x72ba,	// (0x00035caa) main_camera_pane_g3

0x72c6,	// (0x00035cb6) main_camera_pane_g4

0x72d2,	// (0x00035cc2) main_camera_pane_g5

0x72de,	// (0x00035cce) main_camera_pane_g6

0x72ea,	// (0x00035cda) main_camera_pane_g7

0x0007,

0xf271,	// (0x0003dc61) main_camera_pane_g

0x72f6,	// (0x00035ce6) main_camera_pane_t1

0x7308,	// (0x00035cf8) main_camera_pane_t2

0x0001,

0xf282,	// (0x0003dc72) main_camera_pane_t

0x7329,	// (0x00035d19) cams_zoom_pane_cp_ParamLimits

0x7329,	// (0x00035d19) cams_zoom_pane_cp

0x734d,	// (0x00035d3d) image_cif_pane_ParamLimits

0x734d,	// (0x00035d3d) image_cif_pane

0x736b,	// (0x00035d5b) image_subqcif_pane

0x7373,	// (0x00035d63) main_video_pane_g1_ParamLimits

0x7373,	// (0x00035d63) main_video_pane_g1

0x7393,	// (0x00035d83) main_video_pane_g2_ParamLimits

0x7393,	// (0x00035d83) main_video_pane_g2

0x73c5,	// (0x00035db5) main_video_pane_g3_ParamLimits

0x73c5,	// (0x00035db5) main_video_pane_g3

0x73f0,	// (0x00035de0) main_video_pane_g4_ParamLimits

0x73f0,	// (0x00035de0) main_video_pane_g4

0x741b,	// (0x00035e0b) main_video_pane_g5_ParamLimits

0x741b,	// (0x00035e0b) main_video_pane_g5

0xe73b,	// (0x0003d12b) main_video_pane_g6_ParamLimits

0xe73b,	// (0x0003d12b) main_video_pane_g6

0x0006,

0xf287,	// (0x0003dc77) main_video_pane_g_ParamLimits

0xf287,	// (0x0003dc77) main_video_pane_g

0x743f,	// (0x00035e2f) main_video_pane_t1_ParamLimits

0x743f,	// (0x00035e2f) main_video_pane_t1

0xe755,	// (0x0003d145) cams_zoom_pane_g1

0xe75e,	// (0x0003d14e) cams_zoom_pane_g2

0xe767,	// (0x0003d157) cams_zoom_pane_g3

0xe770,	// (0x0003d160) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0003dc86) cams_zoom_pane_g

0x7489,	// (0x00035e79) grid_cams_pane

0x7497,	// (0x00035e87) linegrid_cams_pane

0x74a5,	// (0x00035e95) cell_cams_pane_ParamLimits

0x74a5,	// (0x00035e95) cell_cams_pane

0xe779,	// (0x0003d169) cams_burst_image_pane

0xe781,	// (0x0003d171) cell_cams_pane_g1

0xe204,	// (0x0003cbf4) grid_highlight_pane_cp03

0xe5c3,	// (0x0003cfb3) mp_bg_pane_g1

0xe204,	// (0x0003cbf4) bg_list_pane_cp03

0x1846,	// (0x00030236) bg_mp_pane

0x184e,	// (0x0003023e) grid_mp_pane

0x1856,	// (0x00030246) media_player_g1

0x185e,	// (0x0003024e) media_player_t1

0x186c,	// (0x0003025c) media_player_t2

0x187a,	// (0x0003026a) media_player_t3

0x1888,	// (0x00030278) media_player_t4

0x1896,	// (0x00030286) media_player_t5

0x18a4,	// (0x00030294) media_player_t6

0x18b2,	// (0x000302a2) media_player_t7

0x0006,

0xf632,	// (0x0003e022) media_player_t

0x18c0,	// (0x000302b0) wait_bar_pane_cp02

0xf617,	// (0x0003e007) main_usb_pane_t

0x92c5,	// (0x00037cb5) cell_mp_pane

0xe5c3,	// (0x0003cfb3) cell_mp_pane_g1

0xe204,	// (0x0003cbf4) grid_highlight_pane_cp06

0xe789,	// (0x0003d179) grid_skin_colour_pane

0xe791,	// (0x0003d181) list_highlight_pane_cp03

0x74b8,	// (0x00035ea8) skin_g1

0xe799,	// (0x0003d189) skin_t1

0xe7a8,	// (0x0003d198) skin_t2

0x0001,

0xf2cb,	// (0x0003dcbb) skin_t

0x74c2,	// (0x00035eb2) cell_skin_colour_pane_ParamLimits

0x74c2,	// (0x00035eb2) cell_skin_colour_pane

0xe7b6,	// (0x0003d1a6) cell_skin_colour_pane_g1

0x7519,	// (0x00035f09) call_video_g1_ParamLimits

0x7519,	// (0x00035f09) call_video_g1

0x7529,	// (0x00035f19) call_video_g2_ParamLimits

0x7529,	// (0x00035f19) call_video_g2

0x0001,

0xf2d0,	// (0x0003dcc0) call_video_g_ParamLimits

0xf2d0,	// (0x0003dcc0) call_video_g

0x7569,	// (0x00035f59) call_video_uplink_pane_cp1_ParamLimits

0x7569,	// (0x00035f59) call_video_uplink_pane_cp1

0xe7d0,	// (0x0003d1c0) call_video_uplink_pane_cp2

0x7615,	// (0x00036005) video_down_crop_pane_ParamLimits

0x7615,	// (0x00036005) video_down_crop_pane

0x76ed,	// (0x000360dd) video_down_pane_ParamLimits

0x76ed,	// (0x000360dd) video_down_pane

0xe7d8,	// (0x0003d1c8) video_down_subqcif_pane_ParamLimits

0xe7d8,	// (0x0003d1c8) video_down_subqcif_pane

0xe7f0,	// (0x0003d1e0) video_down_subqcif_pane_cp_ParamLimits

0xe7f0,	// (0x0003d1e0) video_down_subqcif_pane_cp

0xe814,	// (0x0003d204) im_reading_pane_ParamLimits

0xe814,	// (0x0003d204) im_reading_pane

0x77cf,	// (0x000361bf) im_writing_pane_ParamLimits

0x77cf,	// (0x000361bf) im_writing_pane

0x77ed,	// (0x000361dd) im_reading_pane_t1

0xe82e,	// (0x0003d21e) list_im_pane

0xe83f,	// (0x0003d22f) scroll_pane_cp07

0x784d,	// (0x0003623d) im_writing_pane_t1_ParamLimits

0x784d,	// (0x0003623d) im_writing_pane_t1

0xe858,	// (0x0003d248) im_writing_pane_t2_ParamLimits

0xe858,	// (0x0003d248) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0003dcca) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0003dcca) im_writing_pane_t

0xe204,	// (0x0003cbf4) input_focus_pane_cp04

0xe204,	// (0x0003cbf4) input_focus_pane_cp05

0x785f,	// (0x0003624f) list_im_single_pane_ParamLimits

0x785f,	// (0x0003624f) list_im_single_pane

0x788b,	// (0x0003627b) list_single_im_pane_t1

0x9289,	// (0x00037c79) blid_accuracy_pane

0x9291,	// (0x00037c81) blid_compass_pane

0x929b,	// (0x00037c8b) main_location_t1

0x92a9,	// (0x00037c99) main_location_t2

0x92b7,	// (0x00037ca7) main_location_t3

0x0002,

0xf641,	// (0x0003e031) main_location_t

0xe204,	// (0x0003cbf4) aid_levels_location

0xe5c3,	// (0x0003cfb3) blid_accuracy_pane_g1

0xe5c3,	// (0x0003cfb3) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x0003dd2c) blid_accuracy_pane_g

0xe8a0,	// (0x0003d290) wml_content_pane

0xe8de,	// (0x0003d2ce) wml_button_pane_ParamLimits

0xe8de,	// (0x0003d2ce) wml_button_pane

0x789a,	// (0x0003628a) wml_list_single_large_pane_ParamLimits

0x789a,	// (0x0003628a) wml_list_single_large_pane

0x78cc,	// (0x000362bc) wml_list_single_medium_pane_ParamLimits

0x78cc,	// (0x000362bc) wml_list_single_medium_pane

0x7905,	// (0x000362f5) wml_list_single_small_pane_ParamLimits

0x7905,	// (0x000362f5) wml_list_single_small_pane

0xe8f2,	// (0x0003d2e2) wml_selection_box_pane_ParamLimits

0xe8f2,	// (0x0003d2e2) wml_selection_box_pane

0xe905,	// (0x0003d2f5) wml_list_single_pane_t1

0xe914,	// (0x0003d304) wml_list_single_medium_pane_t1

0xe923,	// (0x0003d313) wml_list_single_large_pane_t1

0xe932,	// (0x0003d322) input_focus_pane_cp02_ParamLimits

0xe932,	// (0x0003d322) input_focus_pane_cp02

0xe945,	// (0x0003d335) wml_selection_box_pane_g1

0xe94e,	// (0x0003d33e) wml_selection_box_pane_t1_ParamLimits

0xe94e,	// (0x0003d33e) wml_selection_box_pane_t1

0xe45f,	// (0x0003ce4f) bg_wml_button_pane_ParamLimits

0xe45f,	// (0x0003ce4f) bg_wml_button_pane

0xe966,	// (0x0003d356) wml_button_pane_g1

0xe96e,	// (0x0003d35e) wml_button_pane_t1

0xe966,	// (0x0003d356) wml_button_bg_pane_g1

0xe97e,	// (0x0003d36e) wml_button_bg_pane_g2

0xe986,	// (0x0003d376) wml_button_bg_pane_g3

0xe98e,	// (0x0003d37e) wml_button_bg_pane_g4

0xe996,	// (0x0003d386) wml_button_bg_pane_g5

0xe99e,	// (0x0003d38e) wml_button_bg_pane_g6

0xe9a6,	// (0x0003d396) wml_button_bg_pane_g7

0xe9ae,	// (0x0003d39e) wml_button_bg_pane_g8

0xe9b6,	// (0x0003d3a6) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x0003dccf) wml_button_bg_pane_g

0x794d,	// (0x0003633d) bg_list_pane_cp02

0xe9be,	// (0x0003d3ae) mce_header_pane_ParamLimits

0xe9be,	// (0x0003d3ae) mce_header_pane

0xe9d4,	// (0x0003d3c4) mce_icon_pane

0xe9d4,	// (0x0003d3c4) mce_image_pane

0xe9dd,	// (0x0003d3cd) mce_text_pane_ParamLimits

0xe9dd,	// (0x0003d3cd) mce_text_pane

0x7957,	// (0x00036347) scroll_pane_cp03

0xe8d6,	// (0x0003d2c6) scroll_pane_cp04

0xe9f0,	// (0x0003d3e0) scroll_pane_cp05_ParamLimits

0xe9f0,	// (0x0003d3e0) scroll_pane_cp05

0x7961,	// (0x00036351) mce_header_field_pane_ParamLimits

0x7961,	// (0x00036351) mce_header_field_pane

0x7981,	// (0x00036371) mce_header_field_pane_2_ParamLimits

0x7981,	// (0x00036371) mce_header_field_pane_2

0x7997,	// (0x00036387) mce_header_field_pane_3

0x799f,	// (0x0003638f) list_single_mce_message_pane_ParamLimits

0x799f,	// (0x0003638f) list_single_mce_message_pane

0x79cf,	// (0x000363bf) list_single_mce_smart_pane_ParamLimits

0x79cf,	// (0x000363bf) list_single_mce_smart_pane

0xe9fc,	// (0x0003d3ec) input_focus_pane_cp03

0xea05,	// (0x0003d3f5) list_header_data_pane

0x7a0a,	// (0x000363fa) mce_header_field_pane_t1

0x7a1a,	// (0x0003640a) list_single_mce_header_pane_ParamLimits

0x7a1a,	// (0x0003640a) list_single_mce_header_pane

0xea0d,	// (0x0003d3fd) list_single_mce_header_pane_t1

0xea1c,	// (0x0003d40c) list_single_mce_message_pane_g1

0xea24,	// (0x0003d414) list_single_mce_message_pane_t1

0x7a6c,	// (0x0003645c) bg_cale_heading_pane_cp01_ParamLimits

0x7a6c,	// (0x0003645c) bg_cale_heading_pane_cp01

0xea32,	// (0x0003d422) bg_cale_pane_cp02_ParamLimits

0xea32,	// (0x0003d422) bg_cale_pane_cp02

0x7a8f,	// (0x0003647f) cale_month_corner_pane

0x7aa5,	// (0x00036495) cale_month_day_heading_pane_ParamLimits

0x7aa5,	// (0x00036495) cale_month_day_heading_pane

0x7ad8,	// (0x000364c8) cale_month_pane_g1_ParamLimits

0x7ad8,	// (0x000364c8) cale_month_pane_g1

0x7af4,	// (0x000364e4) cale_month_pane_g2_ParamLimits

0x7af4,	// (0x000364e4) cale_month_pane_g2

0x7b0f,	// (0x000364ff) cale_month_pane_g3_ParamLimits

0x7b0f,	// (0x000364ff) cale_month_pane_g3

0x7b3b,	// (0x0003652b) cale_month_pane_g4_ParamLimits

0x7b3b,	// (0x0003652b) cale_month_pane_g4

0x7b67,	// (0x00036557) cale_month_pane_g5_ParamLimits

0x7b67,	// (0x00036557) cale_month_pane_g5

0x7b93,	// (0x00036583) cale_month_pane_g6_ParamLimits

0x7b93,	// (0x00036583) cale_month_pane_g6

0x7bbf,	// (0x000365af) cale_month_pane_g7_ParamLimits

0x7bbf,	// (0x000365af) cale_month_pane_g7

0x7bfb,	// (0x000365eb) cale_month_pane_g8_ParamLimits

0x7bfb,	// (0x000365eb) cale_month_pane_g8

0x7c37,	// (0x00036627) cale_month_pane_g9_ParamLimits

0x7c37,	// (0x00036627) cale_month_pane_g9

0x7c71,	// (0x00036661) cale_month_pane_g10_ParamLimits

0x7c71,	// (0x00036661) cale_month_pane_g10

0x7cab,	// (0x0003669b) cale_month_pane_g11_ParamLimits

0x7cab,	// (0x0003669b) cale_month_pane_g11

0x7ce5,	// (0x000366d5) cale_month_pane_g12_ParamLimits

0x7ce5,	// (0x000366d5) cale_month_pane_g12

0x7d1f,	// (0x0003670f) cale_month_pane_g13_ParamLimits

0x7d1f,	// (0x0003670f) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0003dce2) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0003dce2) cale_month_pane_g

0x7d59,	// (0x00036749) cale_month_week_pane

0x7d6c,	// (0x0003675c) grid_cale_month_pane_ParamLimits

0x7d6c,	// (0x0003675c) grid_cale_month_pane

0x7d9a,	// (0x0003678a) cale_month_day_heading_pane_t1

0x7df8,	// (0x000367e8) cale_month_day_heading_pane_t2

0x7e5d,	// (0x0003684d) cale_month_day_heading_pane_t3

0x7ec2,	// (0x000368b2) cale_month_day_heading_pane_t4

0x7f27,	// (0x00036917) cale_month_day_heading_pane_t5

0x7f8c,	// (0x0003697c) cale_month_day_heading_pane_t6

0x7ff9,	// (0x000369e9) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x0003dcfd) cale_month_day_heading_pane_t

0xe6c0,	// (0x0003d0b0) bg_cale_side_pane_cp01

0x806e,	// (0x00036a5e) cale_month_week_pane_t1

0x8085,	// (0x00036a75) cale_month_week_pane_t2

0x809c,	// (0x00036a8c) cale_month_week_pane_t3

0x80b3,	// (0x00036aa3) cale_month_week_pane_t4

0x80ca,	// (0x00036aba) cale_month_week_pane_t5

0x80e1,	// (0x00036ad1) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x0003dd0c) cale_month_week_pane_t

0x80f8,	// (0x00036ae8) cell_cale_month_pane_ParamLimits

0x80f8,	// (0x00036ae8) cell_cale_month_pane

0x81ae,	// (0x00036b9e) cell_cale_month_pane_g1

0x81ba,	// (0x00036baa) cell_cale_month_pane_t1_ParamLimits

0x81ba,	// (0x00036baa) cell_cale_month_pane_t1

0xe6ce,	// (0x0003d0be) grid_highlight_pane_cp08

0xe5c3,	// (0x0003cfb3) main_smil_g1

0x81d6,	// (0x00036bc6) smil_status_pane

0xea67,	// (0x0003d457) smil_text_pane

0x1766,	// (0x00030156) bg_popup_call3_rect_pane_g8

0x176e,	// (0x0003015e) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x0003dfc5) bg_popup_call3_rect_pane_g

0x19fb,	// (0x000303eb) smil_status_volume_pane_g1

0xea71,	// (0x0003d461) smil_status_pane_t1

0x966d,	// (0x0003805d) volume_smil_pane

0xea88,	// (0x0003d478) list_smil_text_pane

0x81e9,	// (0x00036bd9) scroll_pane_cp011

0x81f4,	// (0x00036be4) smil_text_list_pane_t1_ParamLimits

0x81f4,	// (0x00036be4) smil_text_list_pane_t1

0x829f,	// (0x00036c8f) aid_volume_smil_ParamLimits

0x829f,	// (0x00036c8f) aid_volume_smil

0xe5c3,	// (0x0003cfb3) smil_volume_pane_g1

0xe5c3,	// (0x0003cfb3) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x0003dd2c) smil_volume_pane_g

0xe56e,	// (0x0003cf5e) listscroll_cale_day_pane

0xea92,	// (0x0003d482) bg_cale_pane

0xeaaa,	// (0x0003d49a) list_cale_pane

0xeabb,	// (0x0003d4ab) scroll_pane_cp09

0xeacc,	// (0x0003d4bc) cale_bg_pane_g1

0xead4,	// (0x0003d4c4) cale_bg_pane_g2

0xeadc,	// (0x0003d4cc) cale_bg_pane_g3

0xeae4,	// (0x0003d4d4) cale_bg_pane_g4

0xeaec,	// (0x0003d4dc) cale_bg_pane_g5

0xeaf4,	// (0x0003d4e4) cale_bg_pane_g6

0xeafc,	// (0x0003d4ec) cale_bg_pane_g7

0xeb04,	// (0x0003d4f4) cale_bg_pane_g8

0xeb0c,	// (0x0003d4fc) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0003dd31) cale_bg_pane_g

0x82c1,	// (0x00036cb1) list_cale_time_pane_ParamLimits

0x82c1,	// (0x00036cb1) list_cale_time_pane

0x82e2,	// (0x00036cd2) list_cale_time_pane_g1_ParamLimits

0x82e2,	// (0x00036cd2) list_cale_time_pane_g1

0xeb14,	// (0x0003d504) list_cale_time_pane_g2_ParamLimits

0xeb14,	// (0x0003d504) list_cale_time_pane_g2

0x82ee,	// (0x00036cde) list_cale_time_pane_g3_ParamLimits

0x82ee,	// (0x00036cde) list_cale_time_pane_g3

0x830a,	// (0x00036cfa) list_cale_time_pane_g4_ParamLimits

0x830a,	// (0x00036cfa) list_cale_time_pane_g4

0x8318,	// (0x00036d08) list_cale_time_pane_g5_ParamLimits

0x8318,	// (0x00036d08) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0003dd44) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0003dd44) list_cale_time_pane_g

0x8326,	// (0x00036d16) list_cale_time_pane_t1_ParamLimits

0x8326,	// (0x00036d16) list_cale_time_pane_t1

0x834e,	// (0x00036d3e) list_cale_time_pane_t2_ParamLimits

0x834e,	// (0x00036d3e) list_cale_time_pane_t2

0x8642,	// (0x00037032) aid_blid_cardinal_pane

0x8684,	// (0x00037074) compass_pane_t4

0x8376,	// (0x00036d66) list_cale_time_pane_t4_ParamLimits

0x8376,	// (0x00036d66) list_cale_time_pane_t4

0x8692,	// (0x00037082) compass_pane_t5

0x86a2,	// (0x00037092) compass_pane_t6

0x86b0,	// (0x000370a0) compass_pane_t7

0xef50,	// (0x0003d940) navi_pane_cc_t1

0xf0a5,	// (0x0003da95) aid_phob_thumbnail_center_pane

0x8d77,	// (0x00037767) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0003dd51) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0003dd51) list_cale_time_pane_t

0xde5d,	// (0x0003c84d) bg_popup_window_pane_cp02_ParamLimits

0xde5d,	// (0x0003c84d) bg_popup_window_pane_cp02

0xeb2e,	// (0x0003d51e) heading_pane_cp01_ParamLimits

0xeb2e,	// (0x0003d51e) heading_pane_cp01

0xeb3a,	// (0x0003d52a) loc_req_pane_ParamLimits

0xeb3a,	// (0x0003d52a) loc_req_pane

0xeb4a,	// (0x0003d53a) loc_type_pane_ParamLimits

0xeb4a,	// (0x0003d53a) loc_type_pane

0xeb5c,	// (0x0003d54c) loc_type_pane_t1_ParamLimits

0xeb5c,	// (0x0003d54c) loc_type_pane_t1

0xeb6e,	// (0x0003d55e) loc_type_pane_t2_ParamLimits

0xeb6e,	// (0x0003d55e) loc_type_pane_t2

0xeb80,	// (0x0003d570) loc_type_pane_t3_ParamLimits

0xeb80,	// (0x0003d570) loc_type_pane_t3

0x0002,

0xf368,	// (0x0003dd58) loc_type_pane_t_ParamLimits

0xf368,	// (0x0003dd58) loc_type_pane_t

0xeb92,	// (0x0003d582) list_loc_req_pane

0xeb9c,	// (0x0003d58c) scroll_pane_cp012

0x839e,	// (0x00036d8e) list_single_loc_request_popup_menu_pane_ParamLimits

0x839e,	// (0x00036d8e) list_single_loc_request_popup_menu_pane

0xeba7,	// (0x0003d597) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xeba7,	// (0x0003d597) list_single_loc_request_popup_menu_pane_g1

0xebb3,	// (0x0003d5a3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xebb3,	// (0x0003d5a3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x0003dd5f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x0003dd5f) list_single_loc_request_popup_menu_pane_g

0xebbf,	// (0x0003d5af) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xebbf,	// (0x0003d5af) list_single_loc_request_popup_menu_pane_t1

0x83b0,	// (0x00036da0) bg_popup_window_pane_cp03_ParamLimits

0x83b0,	// (0x00036da0) bg_popup_window_pane_cp03

0x83be,	// (0x00036dae) heading_loc_req_pane_ParamLimits

0x83be,	// (0x00036dae) heading_loc_req_pane

0x83ca,	// (0x00036dba) popup_dyc_status_message_window_g1_ParamLimits

0x83ca,	// (0x00036dba) popup_dyc_status_message_window_g1

0x83d6,	// (0x00036dc6) popup_dyc_status_message_window_t1_ParamLimits

0x83d6,	// (0x00036dc6) popup_dyc_status_message_window_t1

0x83e8,	// (0x00036dd8) popup_dyc_status_message_window_t2_ParamLimits

0x83e8,	// (0x00036dd8) popup_dyc_status_message_window_t2

0x83fa,	// (0x00036dea) popup_dyc_status_message_window_t3_ParamLimits

0x83fa,	// (0x00036dea) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0003dd64) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0003dd64) popup_dyc_status_message_window_t

0xe204,	// (0x0003cbf4) bg_heading_pane_cp01

0xebd5,	// (0x0003d5c5) heading_loc_req_pane_g1

0xebdd,	// (0x0003d5cd) heading_loc_req_pane_g2

0xebe5,	// (0x0003d5d5) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0003dd6b) heading_loc_req_pane_g

0xebed,	// (0x0003d5dd) heading_loc_req_pane_t1

0xebfc,	// (0x0003d5ec) bg_popup_sub_pane_cp01_ParamLimits

0xebfc,	// (0x0003d5ec) bg_popup_sub_pane_cp01

0xec0a,	// (0x0003d5fa) popup_cale_events_window_g1_ParamLimits

0xec0a,	// (0x0003d5fa) popup_cale_events_window_g1

0xec2a,	// (0x0003d61a) popup_cale_events_window_g2_ParamLimits

0xec2a,	// (0x0003d61a) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x0003dd9f) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x0003dd9f) popup_cale_events_window_g

0xec4a,	// (0x0003d63a) popup_cale_events_window_t1_ParamLimits

0xec4a,	// (0x0003d63a) popup_cale_events_window_t1

0xec5c,	// (0x0003d64c) popup_cale_events_window_t2_ParamLimits

0xec5c,	// (0x0003d64c) popup_cale_events_window_t2

0xec9a,	// (0x0003d68a) popup_cale_events_window_t3_ParamLimits

0xec9a,	// (0x0003d68a) popup_cale_events_window_t3

0xecd4,	// (0x0003d6c4) popup_cale_events_window_t4_ParamLimits

0xecd4,	// (0x0003d6c4) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x0003dda4) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x0003dda4) popup_cale_events_window_t

0x8424,	// (0x00036e14) call_type_pane

0xed0a,	// (0x0003d6fa) popup_call_status_window_g1

0x8430,	// (0x00036e20) popup_call_status_window_g2

0x843c,	// (0x00036e2c) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x0003ddad) popup_call_status_window_g

0xed18,	// (0x0003d708) call_type_pane_g1

0xed21,	// (0x0003d711) call_type_pane_g2

0x0001,

0xf3c4,	// (0x0003ddb4) call_type_pane_g

0xe204,	// (0x0003cbf4) bg_popup_sub_pane_cp02

0xed2a,	// (0x0003d71a) listscroll_popup_wml_pane

0xed32,	// (0x0003d722) list_wml_pane

0xed3c,	// (0x0003d72c) scroll_pane_cp013

0xed47,	// (0x0003d737) list_single_graphic_popup_wml_pane_ParamLimits

0xed47,	// (0x0003d737) list_single_graphic_popup_wml_pane

0xe5c3,	// (0x0003cfb3) list_single_graphic_popup_wml_pane_g1

0xed5b,	// (0x0003d74b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0003ddb9) list_single_graphic_popup_wml_pane_g

0xed63,	// (0x0003d753) list_single_graphic_popup_wml_pane_t1

0xed79,	// (0x0003d769) aid_call_pane

0xe457,	// (0x0003ce47) popup_clock_analogue_window_g1

0xe457,	// (0x0003ce47) popup_clock_analogue_window_g2

0x8448,	// (0x00036e38) popup_clock_analogue_window_g3

0x8448,	// (0x00036e38) popup_clock_analogue_window_g4

0xe5c3,	// (0x0003cfb3) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x0003ddbe) popup_clock_analogue_window_g

0x8450,	// (0x00036e40) popup_clock_analogue_window_t1

0x845e,	// (0x00036e4e) clock_digital_number_pane_ParamLimits

0x845e,	// (0x00036e4e) clock_digital_number_pane

0x846a,	// (0x00036e5a) clock_digital_number_pane_cp02_ParamLimits

0x846a,	// (0x00036e5a) clock_digital_number_pane_cp02

0x8476,	// (0x00036e66) clock_digital_number_pane_cp03_ParamLimits

0x8476,	// (0x00036e66) clock_digital_number_pane_cp03

0x8482,	// (0x00036e72) clock_digital_number_pane_cp04_ParamLimits

0x8482,	// (0x00036e72) clock_digital_number_pane_cp04

0x848e,	// (0x00036e7e) clock_digital_separator_pane_ParamLimits

0x848e,	// (0x00036e7e) clock_digital_separator_pane

0x849a,	// (0x00036e8a) popup_clock_digital_window_t1

0xe5c3,	// (0x0003cfb3) clock_digital_number_pane_g1

0xe5c3,	// (0x0003cfb3) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x0003dd2c) clock_digital_number_pane_g

0xe5c3,	// (0x0003cfb3) clock_digital_separator_pane_g1

0xe5c3,	// (0x0003cfb3) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x0003dd2c) clock_digital_separator_pane_g

0xe204,	// (0x0003cbf4) bg_popup_window_pane_cp04

0xed81,	// (0x0003d771) heading_pane_cp03

0xed89,	// (0x0003d779) listscroll_popup_gms_pane

0xed91,	// (0x0003d781) grid_large_graphic_popup_pane

0xed9b,	// (0x0003d78b) listscroll_popup_gms_pane_g1

0xeda3,	// (0x0003d793) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0003ddc9) listscroll_popup_gms_pane_g

0xe8d6,	// (0x0003d2c6) scroll_pane_cp014

0xedab,	// (0x0003d79b) cell_large_graphic_popup_pane_ParamLimits

0xedab,	// (0x0003d79b) cell_large_graphic_popup_pane

0xedc3,	// (0x0003d7b3) cell_large_graphic_popup_pane_g1_ParamLimits

0xedc3,	// (0x0003d7b3) cell_large_graphic_popup_pane_g1

0xedcf,	// (0x0003d7bf) cell_large_graphic_popup_pane_g2_ParamLimits

0xedcf,	// (0x0003d7bf) cell_large_graphic_popup_pane_g2

0xeddb,	// (0x0003d7cb) cell_large_graphic_popup_pane_g3_ParamLimits

0xeddb,	// (0x0003d7cb) cell_large_graphic_popup_pane_g3

0xede8,	// (0x0003d7d8) cell_large_graphic_popup_pane_g4_ParamLimits

0xede8,	// (0x0003d7d8) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x0003ddce) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x0003ddce) cell_large_graphic_popup_pane_g

0xedf8,	// (0x0003d7e8) grid_highlight_pane_cp010

0xe5c3,	// (0x0003cfb3) bg_popup_call_pane_g1

0xee02,	// (0x0003d7f2) list_single_graphic_popup_conf_pane_ParamLimits

0xee02,	// (0x0003d7f2) list_single_graphic_popup_conf_pane

0xee14,	// (0x0003d804) list_highlight_pane_cp01

0xee1d,	// (0x0003d80d) list_single_graphic_popup_conf_pane_g1

0xee25,	// (0x0003d815) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0003ddd7) list_single_graphic_popup_conf_pane_g

0xee2d,	// (0x0003d81d) list_single_graphic_popup_conf_pane_t1

0xee3b,	// (0x0003d82b) linegrid_cams_pane_g1

0x84b7,	// (0x00036ea7) linegrid_cams_pane_g2

0xe67b,	// (0x0003d06b) linegrid_cams_pane_g3

0xee44,	// (0x0003d834) linegrid_cams_pane_g4

0x84c0,	// (0x00036eb0) linegrid_cams_pane_g5

0x84c9,	// (0x00036eb9) linegrid_cams_pane_g6

0xe701,	// (0x0003d0f1) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x0003dddc) linegrid_cams_pane_g

0xee4d,	// (0x0003d83d) popup_clock_analogue_window

0xee4d,	// (0x0003d83d) popup_clock_digital_window

0xe204,	// (0x0003cbf4) popup_phob_thumbnail_window

0xe5c3,	// (0x0003cfb3) call_video_uplink_pane_g1

0xee56,	// (0x0003d846) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0003ddeb) call_video_uplink_pane_g

0xe6ce,	// (0x0003d0be) video_uplink_pane

0xee5e,	// (0x0003d84e) mce_image_pane_g1

0x84d2,	// (0x00036ec2) mce_image_pane_g2

0x84da,	// (0x00036eca) mce_image_pane_g3

0x84e2,	// (0x00036ed2) mce_image_pane_g4

0x84ea,	// (0x00036eda) mce_image_pane_g5

0x0004,

0xf400,	// (0x0003ddf0) mce_image_pane_g

0xee68,	// (0x0003d858) control_top_pane_stacon_cp01_ParamLimits

0xee68,	// (0x0003d858) control_top_pane_stacon_cp01

0xee7c,	// (0x0003d86c) uni_indicator_pane_stacon_cp01_ParamLimits

0xee7c,	// (0x0003d86c) uni_indicator_pane_stacon_cp01

0xee8d,	// (0x0003d87d) bg_popup_sub_pane_cp03

0x84f2,	// (0x00036ee2) chi_dic_find_pane

0x84fa,	// (0x00036eea) listscroll_chi_dic_pane

0x8503,	// (0x00036ef3) main_pane_chidic_g1

0x8516,	// (0x00036f06) chi_dic_find_pane_t1

0xee97,	// (0x0003d887) find_chidic_pane

0xeea0,	// (0x0003d890) chi_dic_list_pane_ParamLimits

0xeea0,	// (0x0003d890) chi_dic_list_pane

0xeeb1,	// (0x0003d8a1) scroll_pane_cp020

0x8524,	// (0x00036f14) find_chidic_pane_t1

0xe204,	// (0x0003cbf4) input_focus_pane_cp06

0x8533,	// (0x00036f23) list_chi_dic_pane_ParamLimits

0x8533,	// (0x00036f23) list_chi_dic_pane

0xeeb9,	// (0x0003d8a9) list_chi_dic_pane_t1_ParamLimits

0xeeb9,	// (0x0003d8a9) list_chi_dic_pane_t1

0xe204,	// (0x0003cbf4) list_highlight_pane_cp020

0xeecc,	// (0x0003d8bc) bg_cale_heading_pane_g1

0x8554,	// (0x00036f44) bg_cale_heading_pane_g2

0x855c,	// (0x00036f4c) bg_cale_heading_pane_g3

0x8564,	// (0x00036f54) bg_cale_heading_pane_g4

0x856e,	// (0x00036f5e) bg_cale_heading_pane_g5

0x8578,	// (0x00036f68) bg_cale_heading_pane_g6

0x8580,	// (0x00036f70) bg_cale_heading_pane_g7

0x8588,	// (0x00036f78) bg_cale_heading_pane_g8

0x8592,	// (0x00036f82) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x0003ddfb) bg_cale_heading_pane_g

0xeecc,	// (0x0003d8bc) bg_cale_side_pane_g1

0x859c,	// (0x00036f8c) bg_cale_side_pane_g2

0x85a4,	// (0x00036f94) bg_cale_side_pane_g3

0x85ac,	// (0x00036f9c) bg_cale_side_pane_g4

0x85b4,	// (0x00036fa4) bg_cale_side_pane_g5

0x85bc,	// (0x00036fac) bg_cale_side_pane_g6

0x85c4,	// (0x00036fb4) bg_cale_side_pane_g7

0x85cc,	// (0x00036fbc) bg_cale_side_pane_g8

0x85d4,	// (0x00036fc4) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x0003de0e) bg_cale_side_pane_g

0x85dc,	// (0x00036fcc) popup_call_status_window_ParamLimits

0x85dc,	// (0x00036fcc) popup_call_status_window

0xeed4,	// (0x0003d8c4) stacon_top_pane

0xeedc,	// (0x0003d8cc) status_pane_ParamLimits

0xeedc,	// (0x0003d8cc) status_pane

0xeef1,	// (0x0003d8e1) status_small_pane

0xeef9,	// (0x0003d8e9) control_pane

0xe204,	// (0x0003cbf4) stacon_bottom_pane

0xef01,	// (0x0003d8f1) list_single_mce_smart_pane_t1_ParamLimits

0xef01,	// (0x0003d8f1) list_single_mce_smart_pane_t1

0xef14,	// (0x0003d904) list_single_mce_smart_pane_t2_ParamLimits

0xef14,	// (0x0003d904) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0003de21) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0003de21) list_single_mce_smart_pane_t

0x85e8,	// (0x00036fd8) compass_pane

0x85f4,	// (0x00036fe4) main_location2_pane_t1

0x8608,	// (0x00036ff8) main_location2_pane_t2

0x861c,	// (0x0003700c) main_location2_pane_t3

0x0003,

0xf436,	// (0x0003de26) main_location2_pane_t

0xef33,	// (0x0003d923) compass_pane_g1_ParamLimits

0xef33,	// (0x0003d923) compass_pane_g1

0x8666,	// (0x00037056) compass_pane_t1

0x8675,	// (0x00037065) compass_pane_t2

0x0005,

0xf43f,	// (0x0003de2f) compass_pane_t

0x86c0,	// (0x000370b0) text_secondary_cp61

0xef47,	// (0x0003d937) navi_pane_cams_g5

0xef6a,	// (0x0003d95a) navi_pane_im_t1

0xef78,	// (0x0003d968) navi_pane_mp_g1_ParamLimits

0xef78,	// (0x0003d968) navi_pane_mp_g1

0xef8c,	// (0x0003d97c) navi_pane_mp_g2_ParamLimits

0xef8c,	// (0x0003d97c) navi_pane_mp_g2

0xef98,	// (0x0003d988) navi_pane_mp_g3_ParamLimits

0xef98,	// (0x0003d988) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0003de43) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0003de43) navi_pane_mp_g

0xefa4,	// (0x0003d994) navi_pane_mp_t1

0xefb2,	// (0x0003d9a2) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x0003de4a) navi_pane_mp_t

0xefee,	// (0x0003d9de) navi_pane_vt_g1

0xefa4,	// (0x0003d994) navi_pane_vt_t1

0xeff6,	// (0x0003d9e6) navi_slider_pane

0xeffe,	// (0x0003d9ee) zooming_pane

0xf006,	// (0x0003d9f6) navi_slider_pane_g1

0x87d7,	// (0x000371c7) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0003de51) navi_slider_pane_g

0xf02a,	// (0x0003da1a) aid_levels_zoom

0xf032,	// (0x0003da22) zooming_pane_g1

0xf03a,	// (0x0003da2a) zooming_pane_g2

0xf03a,	// (0x0003da2a) zooming_pane_g3

0x0002,

0xf470,	// (0x0003de60) zooming_pane_g

0xf042,	// (0x0003da32) level_10_zoom

0xf04b,	// (0x0003da3b) level_11_zoom

0xf054,	// (0x0003da44) level_1_zoom

0xf05d,	// (0x0003da4d) level_2_zoom

0xf066,	// (0x0003da56) level_3_zoom

0xf06f,	// (0x0003da5f) level_4_zoom

0xf078,	// (0x0003da68) level_5_zoom

0xf081,	// (0x0003da71) level_6_zoom

0xf08a,	// (0x0003da7a) level_7_zoom

0xf093,	// (0x0003da83) level_8_zoom

0xf09c,	// (0x0003da8c) level_9_zoom

0xf0ad,	// (0x0003da9d) popup_phob_thumbnail_window_g1

0xf0b5,	// (0x0003daa5) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0003de67) popup_phob_thumbnail_window_g

0x18c8,	// (0x000302b8) level_1_location

0x18d0,	// (0x000302c0) level_2_location

0x18d8,	// (0x000302c8) level_3_location

0x18e0,	// (0x000302d0) level_4_location

0xeffe,	// (0x0003d9ee) level_5_location

0x87e9,	// (0x000371d9) mce_icon_pane_g1

0x87f1,	// (0x000371e1) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x0003de6c) mce_icon_pane_g

0x87f9,	// (0x000371e9) main_mup_pane_g1_ParamLimits

0x87f9,	// (0x000371e9) main_mup_pane_g1

0x8811,	// (0x00037201) main_mup_pane_g2_ParamLimits

0x8811,	// (0x00037201) main_mup_pane_g2

0x882d,	// (0x0003721d) main_mup_pane_g3_ParamLimits

0x882d,	// (0x0003721d) main_mup_pane_g3

0x8849,	// (0x00037239) main_mup_pane_g4_ParamLimits

0x8849,	// (0x00037239) main_mup_pane_g4

0x8865,	// (0x00037255) main_mup_pane_g5_ParamLimits

0x8865,	// (0x00037255) main_mup_pane_g5

0x8886,	// (0x00037276) main_mup_pane_g6_ParamLimits

0x8886,	// (0x00037276) main_mup_pane_g6

0x88a2,	// (0x00037292) main_mup_pane_g7_ParamLimits

0x88a2,	// (0x00037292) main_mup_pane_g7

0x88be,	// (0x000372ae) main_mup_pane_g8_ParamLimits

0x88be,	// (0x000372ae) main_mup_pane_g8

0x88da,	// (0x000372ca) main_mup_pane_g9_ParamLimits

0x88da,	// (0x000372ca) main_mup_pane_g9

0x88f9,	// (0x000372e9) main_mup_pane_g10_ParamLimits

0x88f9,	// (0x000372e9) main_mup_pane_g10

0x8918,	// (0x00037308) main_mup_pane_g11_ParamLimits

0x8918,	// (0x00037308) main_mup_pane_g11

0x8930,	// (0x00037320) main_mup_pane_g12_ParamLimits

0x8930,	// (0x00037320) main_mup_pane_g12

0x893e,	// (0x0003732e) main_mup_pane_g13_ParamLimits

0x893e,	// (0x0003732e) main_mup_pane_g13

0x000c,

0xf481,	// (0x0003de71) main_mup_pane_g_ParamLimits

0xf481,	// (0x0003de71) main_mup_pane_g

0x8954,	// (0x00037344) main_mup_pane_t1_ParamLimits

0x8954,	// (0x00037344) main_mup_pane_t1

0x8971,	// (0x00037361) main_mup_pane_t2_ParamLimits

0x8971,	// (0x00037361) main_mup_pane_t2

0x898b,	// (0x0003737b) main_mup_pane_t3_ParamLimits

0x898b,	// (0x0003737b) main_mup_pane_t3

0x89a5,	// (0x00037395) main_mup_pane_t4_ParamLimits

0x89a5,	// (0x00037395) main_mup_pane_t4

0x89b7,	// (0x000373a7) main_mup_pane_t5_ParamLimits

0x89b7,	// (0x000373a7) main_mup_pane_t5

0x89c9,	// (0x000373b9) main_mup_pane_t6_ParamLimits

0x89c9,	// (0x000373b9) main_mup_pane_t6

0x0005,

0xf49c,	// (0x0003de8c) main_mup_pane_t_ParamLimits

0xf49c,	// (0x0003de8c) main_mup_pane_t

0x89df,	// (0x000373cf) mup_progress_pane_ParamLimits

0x89df,	// (0x000373cf) mup_progress_pane

0x89eb,	// (0x000373db) mup_visualizer_pane_ParamLimits

0x89eb,	// (0x000373db) mup_visualizer_pane

0x8a29,	// (0x00037419) mup_volume_pane_ParamLimits

0x8a29,	// (0x00037419) mup_volume_pane

0xed0a,	// (0x0003d6fa) mup_visualizer_pane_g1_ParamLimits

0xed0a,	// (0x0003d6fa) mup_visualizer_pane_g1

0xed0a,	// (0x0003d6fa) mup_visualizer_pane_g2_ParamLimits

0xed0a,	// (0x0003d6fa) mup_visualizer_pane_g2

0xef33,	// (0x0003d923) mup_visualizer_pane_g3_ParamLimits

0xef33,	// (0x0003d923) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0003de99) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0003de99) mup_visualizer_pane_g

0xe5c3,	// (0x0003cfb3) mup_volume_pane_g1

0xf0c5,	// (0x0003dab5) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x0003dea0) mup_volume_pane_g

0xe5c3,	// (0x0003cfb3) mup_progress_pane_g1

0xf0ce,	// (0x0003dabe) mup_progress_pane_g2

0xf0d7,	// (0x0003dac7) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x0003dea5) mup_progress_pane_g

0xe204,	// (0x0003cbf4) bg_popup_window_pane_cp05

0xf0e0,	// (0x0003dad0) heading_pane_cp02_ParamLimits

0xf0e0,	// (0x0003dad0) heading_pane_cp02

0xf0fa,	// (0x0003daea) list_popup_blid_pane

0xf102,	// (0x0003daf2) list_blid_sat_info_pane_ParamLimits

0xf102,	// (0x0003daf2) list_blid_sat_info_pane

0x05c1,	// (0x0002efb1) list_blid_sat_info_pane_g1

0x05c9,	// (0x0002efb9) list_blid_sat_info_pane_t1

0x8b34,	// (0x00037524) mup_equalizer_pane_ParamLimits

0x8b34,	// (0x00037524) mup_equalizer_pane

0x8b55,	// (0x00037545) mup_equalizer_pane_cp1_ParamLimits

0x8b55,	// (0x00037545) mup_equalizer_pane_cp1

0x8b76,	// (0x00037566) mup_equalizer_pane_cp2_ParamLimits

0x8b76,	// (0x00037566) mup_equalizer_pane_cp2

0x8b97,	// (0x00037587) mup_equalizer_pane_cp3_ParamLimits

0x8b97,	// (0x00037587) mup_equalizer_pane_cp3

0x8bb8,	// (0x000375a8) mup_equalizer_pane_cp4_ParamLimits

0x8bb8,	// (0x000375a8) mup_equalizer_pane_cp4

0x8bd9,	// (0x000375c9) mup_equalizer_pane_cp5

0x8bef,	// (0x000375df) mup_equalizer_pane_cp6

0x8c07,	// (0x000375f7) mup_equalizer_pane_cp7

0x17e6,	// (0x000301d6) bg_popup_call_poc_act_pane_g9

0x17ee,	// (0x000301de) bg_popup_call_poc_act_pane_g10

0x17f6,	// (0x000301e6) bg_popup_call_poc_act_pane_g11

0x000a,

0xe45f,	// (0x0003ce4f) mup_scale_pane

0xe5c3,	// (0x0003cfb3) mup_scale_pane_g1

0x05d7,	// (0x0002efc7) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x0003dec1) mup_scale_pane_g

0x05fb,	// (0x0002efeb) msg_data_pane

0x0603,	// (0x0002eff3) scroll_pane_cp017

0x57e8,	// (0x000341d8) bg_list_pane_cp04_ParamLimits

0x57e8,	// (0x000341d8) bg_list_pane_cp04

0x060b,	// (0x0002effb) msg_data_pane_g1

0x8c31,	// (0x00037621) msg_data_pane_g2

0x84da,	// (0x00036eca) msg_data_pane_g3

0x8c39,	// (0x00037629) msg_data_pane_g4

0x8c41,	// (0x00037631) msg_data_pane_g5

0x8c49,	// (0x00037639) msg_data_pane_g6

0x8c51,	// (0x00037641) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x0003ded0) msg_data_pane_g

0x5808,	// (0x000341f8) msg_text_pane_ParamLimits

0x5808,	// (0x000341f8) msg_text_pane

0x8c59,	// (0x00037649) qrid_highlight_pane_cp011_ParamLimits

0x8c59,	// (0x00037649) qrid_highlight_pane_cp011

0xe204,	// (0x0003cbf4) msg_body_pane

0xe204,	// (0x0003cbf4) msg_header_pane

0x061c,	// (0x0002f00c) input_focus_pane_cp07

0x5869,	// (0x00034259) msg_header_pane_t1_ParamLimits

0x5869,	// (0x00034259) msg_header_pane_t1

0x587d,	// (0x0003426d) msg_header_pane_t2_ParamLimits

0x587d,	// (0x0003426d) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x0003dee4) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x0003dee4) msg_header_pane_t

0x0643,	// (0x0002f033) msg_body_pane_g1

0x588f,	// (0x0003427f) msg_body_pane_t1_ParamLimits

0x588f,	// (0x0003427f) msg_body_pane_t1

0x58c0,	// (0x000342b0) msg_body_pane_t2_ParamLimits

0x58c0,	// (0x000342b0) msg_body_pane_t2

0x58d2,	// (0x000342c2) msg_body_pane_t3_ParamLimits

0x58d2,	// (0x000342c2) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0003dee9) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0003dee9) msg_body_pane_t

0x8cc7,	// (0x000376b7) main_viewer_pane_g1_ParamLimits

0x8cc7,	// (0x000376b7) main_viewer_pane_g1

0x8cd3,	// (0x000376c3) main_viewer_pane_g2_ParamLimits

0x8cd3,	// (0x000376c3) main_viewer_pane_g2

0x8cdf,	// (0x000376cf) main_viewer_pane_g3_ParamLimits

0x8cdf,	// (0x000376cf) main_viewer_pane_g3

0x8cf0,	// (0x000376e0) main_viewer_pane_g4_ParamLimits

0x8cf0,	// (0x000376e0) main_viewer_pane_g4

0x8d01,	// (0x000376f1) main_viewer_pane_g5_ParamLimits

0x8d01,	// (0x000376f1) main_viewer_pane_g5

0x8d01,	// (0x000376f1) main_viewer_pane_g7_ParamLimits

0x8d01,	// (0x000376f1) main_viewer_pane_g7

0x8d13,	// (0x00037703) main_viewer_pane_g8_ParamLimits

0x8d13,	// (0x00037703) main_viewer_pane_g8

0x0007,

0xf509,	// (0x0003def9) main_viewer_pane_g_ParamLimits

0xf509,	// (0x0003def9) main_viewer_pane_g

0x06b1,	// (0x0002f0a1) viewer_content_pane_ParamLimits

0x06b1,	// (0x0002f0a1) viewer_content_pane

0x8d4b,	// (0x0003773b) main_postcard_pane_g1_ParamLimits

0x8d4b,	// (0x0003773b) main_postcard_pane_g1

0x8d59,	// (0x00037749) main_postcard_pane_g2_ParamLimits

0x8d59,	// (0x00037749) main_postcard_pane_g2

0x8d67,	// (0x00037757) main_postcard_pane_g3_ParamLimits

0x8d67,	// (0x00037757) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x0003df0a) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x0003df0a) main_postcard_pane_g

0x8d77,	// (0x00037767) main_postcard_pane_g4

0x19e8,	// (0x000303d8) smil_status_volume_pane_g2

0x8da3,	// (0x00037793) postcard_pane_ParamLimits

0x8da3,	// (0x00037793) postcard_pane

0xed0a,	// (0x0003d6fa) postcard_pane_g1_ParamLimits

0xed0a,	// (0x0003d6fa) postcard_pane_g1

0x8dd5,	// (0x000377c5) postcard_pane_g2_ParamLimits

0x8dd5,	// (0x000377c5) postcard_pane_g2

0x8de1,	// (0x000377d1) postcard_pane_g3_ParamLimits

0x8de1,	// (0x000377d1) postcard_pane_g3

0x06cd,	// (0x0002f0bd) postcard_pane_g4_ParamLimits

0x06cd,	// (0x0002f0bd) postcard_pane_g4

0x8ded,	// (0x000377dd) postcard_pane_g5_ParamLimits

0x8ded,	// (0x000377dd) postcard_pane_g5

0x8df9,	// (0x000377e9) postcard_pane_g6_ParamLimits

0x8df9,	// (0x000377e9) postcard_pane_g6

0x06bf,	// (0x0002f0af) postcard_pane_g7_ParamLimits

0x06bf,	// (0x0002f0af) postcard_pane_g7

0x0006,

0xf527,	// (0x0003df17) postcard_pane_g_ParamLimits

0xf527,	// (0x0003df17) postcard_pane_g

0x8e05,	// (0x000377f5) main_mp2_pane_g1_ParamLimits

0x8e05,	// (0x000377f5) main_mp2_pane_g1

0x8e11,	// (0x00037801) main_mp2_pane_g2_ParamLimits

0x8e11,	// (0x00037801) main_mp2_pane_g2

0x8e1d,	// (0x0003780d) main_mp2_pane_g3_ParamLimits

0x8e1d,	// (0x0003780d) main_mp2_pane_g3

0x0002,

0xf536,	// (0x0003df26) main_mp2_pane_g_ParamLimits

0xf536,	// (0x0003df26) main_mp2_pane_g

0x8e29,	// (0x00037819) main_mp2_pane_t1_ParamLimits

0x8e29,	// (0x00037819) main_mp2_pane_t1

0x8e40,	// (0x00037830) main_mp2_pane_t2_ParamLimits

0x8e40,	// (0x00037830) main_mp2_pane_t2

0x8e52,	// (0x00037842) main_mp2_pane_t3_ParamLimits

0x8e52,	// (0x00037842) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x0003df2d) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x0003df2d) main_mp2_pane_t

0x06db,	// (0x0002f0cb) pec_content_pane_ParamLimits

0x06db,	// (0x0002f0cb) pec_content_pane

0xe8d6,	// (0x0003d2c6) scroll_pane_cp015

0x06ed,	// (0x0002f0dd) pec_attribute_pane_ParamLimits

0x06ed,	// (0x0002f0dd) pec_attribute_pane

0x8e64,	// (0x00037854) pec_content_pane_g1_ParamLimits

0x8e64,	// (0x00037854) pec_content_pane_g1

0x06fd,	// (0x0002f0ed) pec_content_pane_t1_ParamLimits

0x06fd,	// (0x0002f0ed) pec_content_pane_t1

0x070f,	// (0x0002f0ff) pec_content_pane_t2_ParamLimits

0x070f,	// (0x0002f0ff) pec_content_pane_t2

0x0001,

0xf544,	// (0x0003df34) pec_content_pane_t_ParamLimits

0xf544,	// (0x0003df34) pec_content_pane_t

0x8e70,	// (0x00037860) list_single_graphic_pane_cp01_ParamLimits

0x8e70,	// (0x00037860) list_single_graphic_pane_cp01

0xe45f,	// (0x0003ce4f) bg_popup_sub_pane_cp04

0x0721,	// (0x0002f111) popup_mup_playback_window_g1

0x072d,	// (0x0002f11d) popup_mup_playback_window_t1

0x0742,	// (0x0002f132) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x0003df39) popup_mup_playback_window_t

0x0779,	// (0x0002f169) main_image_pane_g1_ParamLimits

0x0779,	// (0x0002f169) main_image_pane_g1

0x07bc,	// (0x0002f1ac) scroll_pane_cp018_ParamLimits

0x07bc,	// (0x0002f1ac) scroll_pane_cp018

0x07d4,	// (0x0002f1c4) scroll_pane_cp016_ParamLimits

0x07d4,	// (0x0002f1c4) scroll_pane_cp016

0x8f14,	// (0x00037904) smil2_image_pane_ParamLimits

0x8f14,	// (0x00037904) smil2_image_pane

0x8f48,	// (0x00037938) smil2_root_pane_ParamLimits

0x8f48,	// (0x00037938) smil2_root_pane

0x8f74,	// (0x00037964) smil2_text_pane_ParamLimits

0x8f74,	// (0x00037964) smil2_text_pane

0xe204,	// (0x0003cbf4) bg_list_pane_cp06

0x0810,	// (0x0002f200) grid_radio_pane

0xe204,	// (0x0003cbf4) bg_popup_window_pane_cp06

0x0818,	// (0x0002f208) main_fmradio_pane_t1

0xed81,	// (0x0003d771) heading_pane_cp04

0x0826,	// (0x0002f216) main_fmradio_pane_t2

0x17fe,	// (0x000301ee) popup_cale_lunar_info_window_g1

0x0834,	// (0x0002f224) main_fmradio_pane_t3

0x1806,	// (0x000301f6) popup_cale_lunar_info_window_g2

0x0842,	// (0x0002f232) main_fmradio_pane_t4

0x0001,

0x0850,	// (0x0002f240) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x0003e014) popup_cale_lunar_info_window_g

0xf55e,	// (0x0003df4e) main_fmradio_pane_t

0x085e,	// (0x0002f24e) wait_bar_pane_cp03

0x0866,	// (0x0002f256) cell_fmradio_pane_ParamLimits

0x0866,	// (0x0002f256) cell_fmradio_pane

0x06bf,	// (0x0002f0af) cell_fmradio_pane_g1_ParamLimits

0x06bf,	// (0x0002f0af) cell_fmradio_pane_g1

0xe204,	// (0x0003cbf4) grid_highlight_pane_cp011

0x0879,	// (0x0002f269) poc_content_pane_ParamLimits

0x0879,	// (0x0002f269) poc_content_pane

0x088b,	// (0x0002f27b) scroll_pane_cp019

0x8fb4,	// (0x000379a4) popup_call_poc_act_window_ParamLimits

0x8fb4,	// (0x000379a4) popup_call_poc_act_window

0x8fc1,	// (0x000379b1) popup_call_poc_inact_window_ParamLimits

0x8fc1,	// (0x000379b1) popup_call_poc_inact_window

0xf5fb,	// (0x0003dfeb) bg_popup_call_poc_act_pane_g

0x1776,	// (0x00030166) bg_popup_call_poc_inact_pane_g1

0x177e,	// (0x0003016e) bg_popup_call_poc_inact_pane_g2

0x0893,	// (0x0002f283) popup_call_poc_act_window_g2

0x1786,	// (0x00030176) bg_popup_call_poc_inact_pane_g3

0x178e,	// (0x0003017e) bg_popup_call_poc_inact_pane_g4

0x1796,	// (0x00030186) bg_popup_call_poc_inact_pane_g5

0x089b,	// (0x0002f28b) popup_call_poc_act_window_t1_ParamLimits

0x089b,	// (0x0002f28b) popup_call_poc_act_window_t1

0x08c3,	// (0x0002f2b3) popup_call_poc_act_window_t2_ParamLimits

0x08c3,	// (0x0002f2b3) popup_call_poc_act_window_t2

0x08eb,	// (0x0002f2db) popup_call_poc_act_window_t3_ParamLimits

0x08eb,	// (0x0002f2db) popup_call_poc_act_window_t3

0x0913,	// (0x0002f303) popup_call_poc_act_window_t4_ParamLimits

0x0913,	// (0x0002f303) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0003df59) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0003df59) popup_call_poc_act_window_t

0x179e,	// (0x0003018e) bg_popup_call_poc_inact_pane_g6

0x17a6,	// (0x00030196) bg_popup_call_poc_inact_pane_g7

0x17ae,	// (0x0003019e) bg_popup_call_poc_inact_pane_g8

0x0925,	// (0x0002f315) popup_call_poc_inact_window_g2

0x17b6,	// (0x000301a6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x0003dfd8) bg_popup_call_poc_inact_pane_g

0x092d,	// (0x0002f31d) popup_call_poc_inact_window_t1_ParamLimits

0x092d,	// (0x0002f31d) popup_call_poc_inact_window_t1

0x0942,	// (0x0002f332) popup_call_poc_inact_window_t2_ParamLimits

0x0942,	// (0x0002f332) popup_call_poc_inact_window_t2

0x0957,	// (0x0002f347) popup_call_poc_inact_window_t3_ParamLimits

0x0957,	// (0x0002f347) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x0003df62) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x0003df62) popup_call_poc_inact_window_t

0x196e,	// (0x0003035e) context_pane_ParamLimits

0x95b0,	// (0x00037fa0) signal_pane_ParamLimits

0xeffe,	// (0x0003d9ee) main_call2_pane

0x195c,	// (0x0003034c) popup_phob_thumbnail2_window_ParamLimits

0x195c,	// (0x0003034c) popup_phob_thumbnail2_window

0x8c75,	// (0x00037665) aid_hotspot_pointer_arrow_pane

0x8c7d,	// (0x0003766d) aid_hotspot_pointer_hand_pane

0x92ee,	// (0x00037cde) phob_pre_status_pane_g5

0x7283,	// (0x00035c73) cams_zoom_pane_ParamLimits

0x728f,	// (0x00035c7f) image_vga_pane_ParamLimits

0x729e,	// (0x00035c8e) main_camera_pane_g1_ParamLimits

0x72ac,	// (0x00035c9c) main_camera_pane_g2_ParamLimits

0x72ba,	// (0x00035caa) main_camera_pane_g3_ParamLimits

0x72c6,	// (0x00035cb6) main_camera_pane_g4_ParamLimits

0x72d2,	// (0x00035cc2) main_camera_pane_g5_ParamLimits

0x72de,	// (0x00035cce) main_camera_pane_g6_ParamLimits

0x72ea,	// (0x00035cda) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0003dc61) main_camera_pane_g_ParamLimits

0x72f6,	// (0x00035ce6) main_camera_pane_t1_ParamLimits

0x7308,	// (0x00035cf8) main_camera_pane_t2_ParamLimits

0xf282,	// (0x0003dc72) main_camera_pane_t_ParamLimits

0xe45f,	// (0x0003ce4f) bg_popup_preview_window_pane_cp01_ParamLimits

0xe45f,	// (0x0003ce4f) bg_popup_preview_window_pane_cp01

0x096c,	// (0x0002f35c) popup_phob_thumbnail2_window_g1_ParamLimits

0x096c,	// (0x0002f35c) popup_phob_thumbnail2_window_g1

0xe204,	// (0x0003cbf4) call2_cli_visual_pane

0x8fdd,	// (0x000379cd) popup_call2_audio_conf_window_ParamLimits

0x8fdd,	// (0x000379cd) popup_call2_audio_conf_window

0x8ff2,	// (0x000379e2) popup_call2_audio_first_window_ParamLimits

0x8ff2,	// (0x000379e2) popup_call2_audio_first_window

0x9090,	// (0x00037a80) popup_call2_audio_in_window_ParamLimits

0x9090,	// (0x00037a80) popup_call2_audio_in_window

0x90d2,	// (0x00037ac2) popup_call2_audio_out_window_ParamLimits

0x90d2,	// (0x00037ac2) popup_call2_audio_out_window

0x9134,	// (0x00037b24) popup_call2_audio_second_window_ParamLimits

0x9134,	// (0x00037b24) popup_call2_audio_second_window

0x9192,	// (0x00037b82) popup_call2_audio_wait_window_ParamLimits

0x9192,	// (0x00037b82) popup_call2_audio_wait_window

0xe204,	// (0x0003cbf4) bg_popup_call2_act_pane_cp03

0xe441,	// (0x0003ce31) list_conf_pane_cp

0x0978,	// (0x0002f368) popup_call2_audio_conf_window_t1

0x0986,	// (0x0002f376) list_single_graphic_popup_conf2_pane_ParamLimits

0x0986,	// (0x0002f376) list_single_graphic_popup_conf2_pane

0xee14,	// (0x0003d804) list_highlight_pane_cp04

0x0999,	// (0x0002f389) list_single_graphic_popup_conf2_pane_g1

0xee25,	// (0x0003d815) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0003df69) list_single_graphic_popup_conf2_pane_g

0x09a3,	// (0x0002f393) list_single_graphic_popup_conf2_pane_t1

0x09b1,	// (0x0002f3a1) bg_popup_call2_act_pane_cp01_ParamLimits

0x09b1,	// (0x0002f3a1) bg_popup_call2_act_pane_cp01

0x0a3b,	// (0x0002f42b) call_type_pane_cp05_ParamLimits

0x0a3b,	// (0x0002f42b) call_type_pane_cp05

0x0a8f,	// (0x0002f47f) popup_call2_audio_second_window_g1_ParamLimits

0x0a8f,	// (0x0002f47f) popup_call2_audio_second_window_g1

0x0ae3,	// (0x0002f4d3) popup_call2_audio_second_window_g2_ParamLimits

0x0ae3,	// (0x0002f4d3) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x0003df6e) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x0003df6e) popup_call2_audio_second_window_g

0x0b48,	// (0x0002f538) popup_call2_audio_second_window_t1_ParamLimits

0x0b48,	// (0x0002f538) popup_call2_audio_second_window_t1

0x0c03,	// (0x0002f5f3) popup_call2_audio_second_window_t2_ParamLimits

0x0c03,	// (0x0002f5f3) popup_call2_audio_second_window_t2

0x0c56,	// (0x0002f646) popup_call2_audio_second_window_t3_ParamLimits

0x0c56,	// (0x0002f646) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x0003df75) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x0003df75) popup_call2_audio_second_window_t

0xe204,	// (0x0003cbf4) bg_popup_call2_in_pane_cp02

0xe20e,	// (0x0003cbfe) call_type_pane_cp04

0xe216,	// (0x0003cc06) popup_call2_audio_wait_window_g1

0xe21e,	// (0x0003cc0e) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0003db4e) popup_call2_audio_wait_window_g

0xe226,	// (0x0003cc16) popup_call2_audio_wait_window_t3

0x0d49,	// (0x0002f739) bg_popup_call2_act_pane_ParamLimits

0x0d49,	// (0x0002f739) bg_popup_call2_act_pane

0x0e09,	// (0x0002f7f9) call_type_pane_cp03_ParamLimits

0x0e09,	// (0x0002f7f9) call_type_pane_cp03

0x0e6d,	// (0x0002f85d) popup_call2_audio_first_window_g1_ParamLimits

0x0e6d,	// (0x0002f85d) popup_call2_audio_first_window_g1

0x0edd,	// (0x0002f8cd) popup_call2_audio_first_window_g2_ParamLimits

0x0edd,	// (0x0002f8cd) popup_call2_audio_first_window_g2

0xed0a,	// (0x0003d6fa) popup_call2_audio_first_window_g3_ParamLimits

0xed0a,	// (0x0003d6fa) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x0003df7e) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x0003df7e) popup_call2_audio_first_window_g

0x0fbb,	// (0x0002f9ab) popup_call2_audio_first_window_t1_ParamLimits

0x0fbb,	// (0x0002f9ab) popup_call2_audio_first_window_t1

0x10be,	// (0x0002faae) popup_call2_audio_first_window_t4_ParamLimits

0x10be,	// (0x0002faae) popup_call2_audio_first_window_t4

0x11a1,	// (0x0002fb91) popup_call2_audio_first_window_t5_ParamLimits

0x11a1,	// (0x0002fb91) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0003df89) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0003df89) popup_call2_audio_first_window_t

0xe457,	// (0x0003ce47) bg_popup_call2_act_pane_g1

0x180e,	// (0x000301fe) popup_cale_lunar_info_window_t1

0x181c,	// (0x0003020c) popup_cale_lunar_info_window_t2

0x182a,	// (0x0003021a) popup_cale_lunar_info_window_t3

0xe204,	// (0x0003cbf4) bg_popup_call2_bubble_pane

0x12a2,	// (0x0002fc92) bg_popup_call2_in_pane_cp01_ParamLimits

0x12a2,	// (0x0002fc92) bg_popup_call2_in_pane_cp01

0xdee0,	// (0x0003c8d0) call_type_pane_cp02

0x12ea,	// (0x0002fcda) popup_call2_audio_out_window_g1_ParamLimits

0x12ea,	// (0x0002fcda) popup_call2_audio_out_window_g1

0x1316,	// (0x0002fd06) popup_call2_audio_out_window_g2_ParamLimits

0x1316,	// (0x0002fd06) popup_call2_audio_out_window_g2

0x133e,	// (0x0002fd2e) popup_call2_audio_out_window_g3_ParamLimits

0x133e,	// (0x0002fd2e) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x0003df92) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x0003df92) popup_call2_audio_out_window_g

0x1379,	// (0x0002fd69) popup_call2_audio_out_window_t1_ParamLimits

0x1379,	// (0x0002fd69) popup_call2_audio_out_window_t1

0x13d8,	// (0x0002fdc8) popup_call2_audio_out_window_t2_ParamLimits

0x13d8,	// (0x0002fdc8) popup_call2_audio_out_window_t2

0x142c,	// (0x0002fe1c) popup_call2_audio_out_window_t3_ParamLimits

0x142c,	// (0x0002fe1c) popup_call2_audio_out_window_t3

0x1442,	// (0x0002fe32) popup_call2_audio_out_window_t4_ParamLimits

0x1442,	// (0x0002fe32) popup_call2_audio_out_window_t4

0x1458,	// (0x0002fe48) popup_call2_audio_out_window_t5_ParamLimits

0x1458,	// (0x0002fe48) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0003df9b) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0003df9b) popup_call2_audio_out_window_t

0x14bc,	// (0x0002feac) bg_popup_call2_in_pane_ParamLimits

0x14bc,	// (0x0002feac) bg_popup_call2_in_pane

0x1518,	// (0x0002ff08) popup_call2_audio_in_window_g1_ParamLimits

0x1518,	// (0x0002ff08) popup_call2_audio_in_window_g1

0x1550,	// (0x0002ff40) popup_call2_audio_in_window_g2_ParamLimits

0x1550,	// (0x0002ff40) popup_call2_audio_in_window_g2

0x1588,	// (0x0002ff78) popup_call2_audio_in_window_g3_ParamLimits

0x1588,	// (0x0002ff78) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0003dfa8) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0003dfa8) popup_call2_audio_in_window_g

0x15e0,	// (0x0002ffd0) popup_call2_audio_in_window_t1_ParamLimits

0x15e0,	// (0x0002ffd0) popup_call2_audio_in_window_t1

0x1660,	// (0x00030050) popup_call2_audio_in_window_t2_ParamLimits

0x1660,	// (0x00030050) popup_call2_audio_in_window_t2

0x16e0,	// (0x000300d0) popup_call2_audio_in_window_t3_ParamLimits

0x16e0,	// (0x000300d0) popup_call2_audio_in_window_t3

0x16fa,	// (0x000300ea) popup_call2_audio_in_window_t4_ParamLimits

0x16fa,	// (0x000300ea) popup_call2_audio_in_window_t4

0x170c,	// (0x000300fc) popup_call2_audio_in_window_t5_ParamLimits

0x170c,	// (0x000300fc) popup_call2_audio_in_window_t5

0x1721,	// (0x00030111) popup_call2_audio_in_window_t6_ParamLimits

0x1721,	// (0x00030111) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x0003dfb1) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x0003dfb1) popup_call2_audio_in_window_t

0xe457,	// (0x0003ce47) bg_popup_call2_in_pane_g1

0x1838,	// (0x00030228) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x0003e019) popup_cale_lunar_info_window_t

0xe45f,	// (0x0003ce4f) bg_popup_call2_rect_pane_ParamLimits

0xe45f,	// (0x0003ce4f) bg_popup_call2_rect_pane

0xe204,	// (0x0003cbf4) call2_cli_visual_graphic_pane

0xe204,	// (0x0003cbf4) call2_cli_visual_text_pane

0x9660,	// (0x00038050) smil_status_volume_pane_g3

0x0002,

0xe5c3,	// (0x0003cfb3) call2_cli_visual_graphic_pane_g1

0xe5c3,	// (0x0003cfb3) call2_cli_visual_graphic_pane_g2

0xe5c3,	// (0x0003cfb3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x0003dfbe) call2_cli_visual_graphic_pane_g

0x1736,	// (0x00030126) bg_popup_call2_rect_pane_g1

0xe661,	// (0x0003d051) bg_popup_call2_rect_pane_g2

0x173e,	// (0x0003012e) bg_popup_call2_rect_pane_g3

0x1746,	// (0x00030136) bg_popup_call2_rect_pane_g4

0x174e,	// (0x0003013e) bg_popup_call2_rect_pane_g5

0x1756,	// (0x00030146) bg_popup_call2_rect_pane_g6

0x175e,	// (0x0003014e) bg_popup_call2_rect_pane_g7

0x1766,	// (0x00030156) bg_popup_call2_rect_pane_g8

0x176e,	// (0x0003015e) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x0003dfc5) bg_popup_call2_rect_pane_g

0x1776,	// (0x00030166) bg_popup_call2_bubble_pane_g1

0x177e,	// (0x0003016e) bg_popup_call2_bubble_pane_g2

0x1786,	// (0x00030176) bg_popup_call2_bubble_pane_g3

0x178e,	// (0x0003017e) bg_popup_call2_bubble_pane_g4

0x1796,	// (0x00030186) bg_popup_call2_bubble_pane_g5

0x179e,	// (0x0003018e) bg_popup_call2_bubble_pane_g6

0x17a6,	// (0x00030196) bg_popup_call2_bubble_pane_g7

0x17ae,	// (0x0003019e) bg_popup_call2_bubble_pane_g8

0x17b6,	// (0x000301a6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0003dfd8) bg_popup_call2_bubble_pane_g

0x6e8a,	// (0x0003587a) aid_cale_week_size_cell_pane

0x731a,	// (0x00035d0a) aid_cams_cif_uncrop_pane_ParamLimits

0x731a,	// (0x00035d0a) aid_cams_cif_uncrop_pane

0x747d,	// (0x00035e6d) aid_cams_size_cell_ParamLimits

0x747d,	// (0x00035e6d) aid_cams_size_cell

0x7489,	// (0x00035e79) grid_cams_pane_ParamLimits

0x7497,	// (0x00035e87) linegrid_cams_pane_ParamLimits

0x7535,	// (0x00035f25) call_video_pane_t1

0x754f,	// (0x00035f3f) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0003dcc5) call_video_pane_t

0x7a4e,	// (0x0003643e) aid_cale_month_size_cell_pane_ParamLimits

0x7a4e,	// (0x0003643e) aid_cale_month_size_cell_pane

0xf672,	// (0x0003e062) smil_status_volume_pane_g

0x966d,	// (0x0003805d) volume_smil_pane_ParamLimits

0xdd9d,	// (0x0003c78d) aid_popup2_width_pane

0x6d7f,	// (0x0003576f) cell_qdial_pane_g4_ParamLimits

0x6d7f,	// (0x0003576f) cell_qdial_pane_g4

0x8642,	// (0x00037032) aid_blid_cardinal_pane_ParamLimits

0x8652,	// (0x00037042) aid_blid_destination_pane_ParamLimits

0x8652,	// (0x00037042) aid_blid_destination_pane

0xe45f,	// (0x0003ce4f) bg_popup_call_poc_act_pane_ParamLimits

0xe45f,	// (0x0003ce4f) bg_popup_call_poc_act_pane

0xe45f,	// (0x0003ce4f) bg_popup_call_poc_inact_pane_ParamLimits

0xe45f,	// (0x0003ce4f) bg_popup_call_poc_inact_pane

0x17be,	// (0x000301ae) bg_popup_call_poc_act_pane_g1

0x17c6,	// (0x000301b6) bg_popup_call_poc_act_pane_g2

0x17ce,	// (0x000301be) bg_popup_call_poc_act_pane_g3

0x178e,	// (0x0003017e) bg_popup_call_poc_act_pane_g4

0x1796,	// (0x00030186) bg_popup_call_poc_act_pane_g5

0x17d6,	// (0x000301c6) bg_popup_call_poc_act_pane_g6

0x17a6,	// (0x00030196) bg_popup_call_poc_act_pane_g7

0x17de,	// (0x000301ce) bg_popup_call_poc_act_pane_g8

0xe204,	// (0x0003cbf4) main_usb_pane

0x1937,	// (0x00030327) popup_cale_lunar_info_window

0x77ed,	// (0x000361dd) im_reading_pane_t1_ParamLimits

0xe82e,	// (0x0003d21e) list_im_pane_ParamLimits

0xe83f,	// (0x0003d22f) scroll_pane_cp07_ParamLimits

0xe204,	// (0x0003cbf4) grid_highlight_pane_cp012

0xe45f,	// (0x0003ce4f) mup_scale_pane_ParamLimits

0xed0a,	// (0x0003d6fa) main_usb_pane_g1_ParamLimits

0xed0a,	// (0x0003d6fa) main_usb_pane_g1

0x9211,	// (0x00037c01) main_usb_pane_g2_ParamLimits

0x9211,	// (0x00037c01) main_usb_pane_g2

0x0001,

0xf612,	// (0x0003e002) main_usb_pane_g_ParamLimits

0xf612,	// (0x0003e002) main_usb_pane_g

0x921d,	// (0x00037c0d) main_usb_pane_t1_ParamLimits

0x921d,	// (0x00037c0d) main_usb_pane_t1

0x922f,	// (0x00037c1f) main_usb_pane_t2_ParamLimits

0x922f,	// (0x00037c1f) main_usb_pane_t2

0x9241,	// (0x00037c31) main_usb_pane_t3_ParamLimits

0x9241,	// (0x00037c31) main_usb_pane_t3

0x9253,	// (0x00037c43) main_usb_pane_t4_ParamLimits

0x9253,	// (0x00037c43) main_usb_pane_t4

0x9265,	// (0x00037c55) main_usb_pane_t5_ParamLimits

0x9265,	// (0x00037c55) main_usb_pane_t5

0x9277,	// (0x00037c67) main_usb_pane_t6_ParamLimits

0x9277,	// (0x00037c67) main_usb_pane_t6

0x0005,

0xf617,	// (0x0003e007) main_usb_pane_t_ParamLimits

0x85e8,	// (0x00036fd8) aid_text_placing

0x85f4,	// (0x00036fe4) main_location2_pane_t1_ParamLimits

0x8608,	// (0x00036ff8) main_location2_pane_t2_ParamLimits

0x861c,	// (0x0003700c) main_location2_pane_t3_ParamLimits

0x8630,	// (0x00037020) main_location2_pane_t4_ParamLimits

0x8630,	// (0x00037020) main_location2_pane_t4

0xf436,	// (0x0003de26) main_location2_pane_t_ParamLimits

0xe4a3,	// (0x0003ce93) find_pinb_pane_g2_ParamLimits

0xe4a3,	// (0x0003ce93) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0003db74) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0003db74) find_pinb_pane_g

0xe4af,	// (0x0003ce9f) find_pinb_pane_t1_ParamLimits

0xe4c1,	// (0x0003ceb1) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0003db79) find_pinb_pane_t_ParamLimits

0xe204,	// (0x0003cbf4) main_call3_pane

0x7d9a,	// (0x0003678a) cale_month_day_heading_pane_t1_ParamLimits

0x7df8,	// (0x000367e8) cale_month_day_heading_pane_t2_ParamLimits

0x7e5d,	// (0x0003684d) cale_month_day_heading_pane_t3_ParamLimits

0x7ec2,	// (0x000368b2) cale_month_day_heading_pane_t4_ParamLimits

0x7f27,	// (0x00036917) cale_month_day_heading_pane_t5_ParamLimits

0x7f8c,	// (0x0003697c) cale_month_day_heading_pane_t6_ParamLimits

0x7ff9,	// (0x000369e9) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x0003dcfd) cale_month_day_heading_pane_t_ParamLimits

0xea7f,	// (0x0003d46f) smil_status_volume_pane

0x8dbd,	// (0x000377ad) postcard_address_pane_ParamLimits

0x8dbd,	// (0x000377ad) postcard_address_pane

0x8dc9,	// (0x000377b9) postcard_message_pane_ParamLimits

0x8dc9,	// (0x000377b9) postcard_message_pane

0x91d1,	// (0x00037bc1) call2_cli_visual_pane_t1_ParamLimits

0x91d1,	// (0x00037bc1) call2_cli_visual_pane_t1

0x97c0,	// (0x000381b0) postcard_message_pane_t1_ParamLimits

0x97c0,	// (0x000381b0) postcard_message_pane_t1

0x97a9,	// (0x00038199) postcard_address_pane_t1_ParamLimits

0x97a9,	// (0x00038199) postcard_address_pane_t1

0x979a,	// (0x0003818a) popup_call3_audio_in_window_ParamLimits

0x979a,	// (0x0003818a) popup_call3_audio_in_window

0x9682,	// (0x00038072) bg_popup_call3_in_pane_ParamLimits

0x9682,	// (0x00038072) bg_popup_call3_in_pane

0x96e0,	// (0x000380d0) popup_call3_audio_in_window_g1_ParamLimits

0x96e0,	// (0x000380d0) popup_call3_audio_in_window_g1

0x96f8,	// (0x000380e8) popup_call3_audio_in_window_g2_ParamLimits

0x96f8,	// (0x000380e8) popup_call3_audio_in_window_g2

0x9710,	// (0x00038100) popup_call3_audio_in_window_g3_ParamLimits

0x9710,	// (0x00038100) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x0003e069) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x0003e069) popup_call3_audio_in_window_g

0x9738,	// (0x00038128) popup_call3_audio_in_window_t1_ParamLimits

0x9738,	// (0x00038128) popup_call3_audio_in_window_t1

0x9760,	// (0x00038150) popup_call3_audio_in_window_t2_ParamLimits

0x9760,	// (0x00038150) popup_call3_audio_in_window_t2

0x9788,	// (0x00038178) popup_call3_audio_in_window_t3_ParamLimits

0x9788,	// (0x00038178) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x0003e072) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x0003e072) popup_call3_audio_in_window_t

0xeffe,	// (0x0003d9ee) bg_popup_call3_rect_pane

0x1736,	// (0x00030126) bg_popup_call3_rect_pane_g1

0xe661,	// (0x0003d051) bg_popup_call3_rect_pane_g2

0x173e,	// (0x0003012e) bg_popup_call3_rect_pane_g3

0x1746,	// (0x00030136) bg_popup_call3_rect_pane_g4

0x174e,	// (0x0003013e) bg_popup_call3_rect_pane_g5

0x1756,	// (0x00030146) bg_popup_call3_rect_pane_g6

0x175e,	// (0x0003014e) bg_popup_call3_rect_pane_g7

0x8a44,	// (0x00037434) mup_visualizer_osc_pane

0xf0bd,	// (0x0003daad) mup_visualizer_spec_pane

0x96a2,	// (0x00038092) call3_video_qcif_pane_ParamLimits

0x96a2,	// (0x00038092) call3_video_qcif_pane

0x96b2,	// (0x000380a2) call3_video_qcif_uncrop_pane_ParamLimits

0x96b2,	// (0x000380a2) call3_video_qcif_uncrop_pane

0x96be,	// (0x000380ae) call3_video_subqcif_pane_ParamLimits

0x96be,	// (0x000380ae) call3_video_subqcif_pane

0x96d0,	// (0x000380c0) call3_video_subqcif_uncrop_pane_ParamLimits

0x96d0,	// (0x000380c0) call3_video_subqcif_uncrop_pane

0x9728,	// (0x00038118) popup_call3_audio_in_window_g4_ParamLimits

0x9728,	// (0x00038118) popup_call3_audio_in_window_g4

0x964f,	// (0x0003803f) mup_spec_half_pane

0x9658,	// (0x00038048) mup_spec_half_pane_cp

0x19ce,	// (0x000303be) mup_osc_middle_pane

0x19d7,	// (0x000303c7) mup_visualizer_osc_pane_g1

0x9630,	// (0x00038020) mup_spec_bar_pane_ParamLimits

0x9630,	// (0x00038020) mup_spec_bar_pane

0x19bb,	// (0x000303ab) mup_spec_bar_pane_g1

0x19c5,	// (0x000303b5) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0003e05d) mup_spec_bar_pane_g

0x6e8a,	// (0x0003587a) aid_cale_week_size_cell_pane_ParamLimits

0x6e9d,	// (0x0003588d) bg_cale_heading_pane_ParamLimits

0xe695,	// (0x0003d085) bg_cale_pane_cp01_ParamLimits

0x6eb1,	// (0x000358a1) cale_week_corner_pane_ParamLimits

0x6ec2,	// (0x000358b2) cale_week_day_heading_pane_ParamLimits

0x6ed6,	// (0x000358c6) cale_week_scroll_pane_g1_ParamLimits

0x6ee7,	// (0x000358d7) cale_week_scroll_pane_g2_ParamLimits

0x6ef8,	// (0x000358e8) cale_week_scroll_pane_g3_ParamLimits

0x6f09,	// (0x000358f9) cale_week_scroll_pane_g4_ParamLimits

0x6f1a,	// (0x0003590a) cale_week_scroll_pane_g5_ParamLimits

0x6f2b,	// (0x0003591b) cale_week_scroll_pane_g6_ParamLimits

0x6f3c,	// (0x0003592c) cale_week_scroll_pane_g7_ParamLimits

0x6f4f,	// (0x0003593f) cale_week_scroll_pane_g8_ParamLimits

0x6f62,	// (0x00035952) cale_week_scroll_pane_g9_ParamLimits

0x6f73,	// (0x00035963) cale_week_scroll_pane_g10_ParamLimits

0x6f84,	// (0x00035974) cale_week_scroll_pane_g11_ParamLimits

0x6f95,	// (0x00035985) cale_week_scroll_pane_g12_ParamLimits

0x6fa6,	// (0x00035996) cale_week_scroll_pane_g13_ParamLimits

0x6fb7,	// (0x000359a7) cale_week_scroll_pane_g14_ParamLimits

0x6fc8,	// (0x000359b8) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0003dc05) cale_week_scroll_pane_g_ParamLimits

0x6fd9,	// (0x000359c9) cale_week_time_pane_ParamLimits

0x6fec,	// (0x000359dc) grid_cale_week_pane_ParamLimits

0xe6ae,	// (0x0003d09e) listscroll_cale_week_pane_t1

0x7001,	// (0x000359f1) scroll_pane_cp08_ParamLimits

0x7a8f,	// (0x0003647f) cale_month_corner_pane_ParamLimits

0xea55,	// (0x0003d445) cale_month_pane_t1

0x7d59,	// (0x00036749) cale_month_week_pane_ParamLimits

0xed0a,	// (0x0003d6fa) popup_call_status_window_g1_ParamLimits

0x8430,	// (0x00036e20) popup_call_status_window_g2_ParamLimits

0x843c,	// (0x00036e2c) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x0003ddad) popup_call_status_window_g_ParamLimits

0xed71,	// (0x0003d761) aid_call2_pane

0x585b,	// (0x0003424b) msg_header_pane_g1

0x8dbd,	// (0x000377ad) postcard_address2_pane_ParamLimits

0x8dbd,	// (0x000377ad) postcard_address2_pane

0x8dc9,	// (0x000377b9) postcard_message2_pane_ParamLimits

0x8dc9,	// (0x000377b9) postcard_message2_pane

0x95be,	// (0x00037fae) message2_row_pane_ParamLimits

0x95be,	// (0x00037fae) message2_row_pane

0x95db,	// (0x00037fcb) address2_row_pane_ParamLimits

0x95db,	// (0x00037fcb) address2_row_pane

0x1989,	// (0x00030379) postcard_message2_row_pane_g1

0x1991,	// (0x00030381) postcard_message2_row_pane_t1

0x1989,	// (0x00030379) address2_row_pane_g1

0x1991,	// (0x00030381) address2_row_pane_t1

0x71f9,	// (0x00035be9) aid_size_cell_vorec

0xe204,	// (0x0003cbf4) main_rss_pane

0x95ee,	// (0x00037fde) rss_list_single_pane_ParamLimits

0x95ee,	// (0x00037fde) rss_list_single_pane

0x199f,	// (0x0003038f) rss_list_single_pane_t1

0x19ad,	// (0x0003039d) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x0003e058) rss_list_single_pane_t

0xe204,	// (0x0003cbf4) main_camera2_pane

0xe204,	// (0x0003cbf4) main_video2_pane

0x9824,	// (0x00038214) cams_zoom_pane_cp2_ParamLimits

0x9824,	// (0x00038214) cams_zoom_pane_cp2

0x9830,	// (0x00038220) image2_vga_pane_ParamLimits

0x9830,	// (0x00038220) image2_vga_pane

0x983f,	// (0x0003822f) main_camera2_pane_g1_ParamLimits

0x983f,	// (0x0003822f) main_camera2_pane_g1

0x984b,	// (0x0003823b) main_camera2_pane_g2_ParamLimits

0x984b,	// (0x0003823b) main_camera2_pane_g2

0x9857,	// (0x00038247) main_camera2_pane_g3_ParamLimits

0x9857,	// (0x00038247) main_camera2_pane_g3

0x9863,	// (0x00038253) main_camera2_pane_g4_ParamLimits

0x9863,	// (0x00038253) main_camera2_pane_g4

0x986f,	// (0x0003825f) main_camera2_pane_g5_ParamLimits

0x986f,	// (0x0003825f) main_camera2_pane_g5

0x987b,	// (0x0003826b) main_camera2_pane_g6_ParamLimits

0x987b,	// (0x0003826b) main_camera2_pane_g6

0x9887,	// (0x00038277) main_camera2_pane_g7_ParamLimits

0x9887,	// (0x00038277) main_camera2_pane_g7

0x9893,	// (0x00038283) main_camera2_pane_g8_ParamLimits

0x9893,	// (0x00038283) main_camera2_pane_g8

0x0008,

0xf689,	// (0x0003e079) main_camera2_pane_g_ParamLimits

0xf689,	// (0x0003e079) main_camera2_pane_g

0x98ab,	// (0x0003829b) main_camera2_pane_t1_ParamLimits

0x98ab,	// (0x0003829b) main_camera2_pane_t1

0x98bd,	// (0x000382ad) main_camera2_pane_t2_ParamLimits

0x98bd,	// (0x000382ad) main_camera2_pane_t2

0x98cf,	// (0x000382bf) main_camera2_pane_t3_ParamLimits

0x98cf,	// (0x000382bf) main_camera2_pane_t3

0x98e1,	// (0x000382d1) main_camera2_pane_t4_ParamLimits

0x98e1,	// (0x000382d1) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x0003e08c) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x0003e08c) main_camera2_pane_t

0x9943,	// (0x00038333) cams_zoom_pane_cp4_ParamLimits

0x9943,	// (0x00038333) cams_zoom_pane_cp4

0x9953,	// (0x00038343) image2_cif_pane_ParamLimits

0x9953,	// (0x00038343) image2_cif_pane

0x9968,	// (0x00038358) image2_subqcif_pane_ParamLimits

0x9968,	// (0x00038358) image2_subqcif_pane

0x9977,	// (0x00038367) main_video2_pane_g1_ParamLimits

0x9977,	// (0x00038367) main_video2_pane_g1

0x9989,	// (0x00038379) main_video2_pane_g2_ParamLimits

0x9989,	// (0x00038379) main_video2_pane_g2

0x9999,	// (0x00038389) main_video2_pane_g3_ParamLimits

0x9999,	// (0x00038389) main_video2_pane_g3

0x99a9,	// (0x00038399) main_video2_pane_g4_ParamLimits

0x99a9,	// (0x00038399) main_video2_pane_g4

0x99b9,	// (0x000383a9) main_video2_pane_g5_ParamLimits

0x99b9,	// (0x000383a9) main_video2_pane_g5

0x99c9,	// (0x000383b9) main_video2_pane_g6_ParamLimits

0x99c9,	// (0x000383b9) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x0003e09b) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x0003e09b) main_video2_pane_g

0x99db,	// (0x000383cb) main_video2_pane_t1_ParamLimits

0x99db,	// (0x000383cb) main_video2_pane_t1

0x99f5,	// (0x000383e5) main_video2_pane_t2_ParamLimits

0x99f5,	// (0x000383e5) main_video2_pane_t2

0x9a1b,	// (0x0003840b) main_video2_pane_t3_ParamLimits

0x9a1b,	// (0x0003840b) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x0003e0a8) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x0003e0a8) main_video2_pane_t

0x932e,	// (0x00037d1e) call_muted_g2

0x0001,

0xf65a,	// (0x0003e04a) call_muted_g

0xe204,	// (0x0003cbf4) main_mup2_pane

0x1a8e,	// (0x0003047e) main_mup2_pane_g1_ParamLimits

0x1a8e,	// (0x0003047e) main_mup2_pane_g1

0x9a41,	// (0x00038431) main_mup2_pane_g2_ParamLimits

0x9a41,	// (0x00038431) main_mup2_pane_g2

0x9cc3,	// (0x000386b3) main_mup_pane_g13_cp1

0x9ccb,	// (0x000386bb) mup_volume_pane_cp1

0x9a61,	// (0x00038451) main_mup2_pane_g4_ParamLimits

0x9a61,	// (0x00038451) main_mup2_pane_g4

0x9a76,	// (0x00038466) main_mup2_pane_g5_ParamLimits

0x9a76,	// (0x00038466) main_mup2_pane_g5

0x9a8b,	// (0x0003847b) main_mup2_pane_g6_ParamLimits

0x9a8b,	// (0x0003847b) main_mup2_pane_g6

0x9aa0,	// (0x00038490) main_mup2_pane_g7_ParamLimits

0x9aa0,	// (0x00038490) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x0003e0af) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x0003e0af) main_mup2_pane_g

0x9abc,	// (0x000384ac) main_mup2_pane_t1_ParamLimits

0x9abc,	// (0x000384ac) main_mup2_pane_t1

0x9ad3,	// (0x000384c3) main_mup2_pane_t2_ParamLimits

0x9ad3,	// (0x000384c3) main_mup2_pane_t2

0x9aea,	// (0x000384da) main_mup2_pane_t3_ParamLimits

0x9aea,	// (0x000384da) main_mup2_pane_t3

0x9b01,	// (0x000384f1) main_mup2_pane_t4_ParamLimits

0x9b01,	// (0x000384f1) main_mup2_pane_t4

0x9b1b,	// (0x0003850b) main_mup2_pane_t5_ParamLimits

0x9b1b,	// (0x0003850b) main_mup2_pane_t5

0x9b35,	// (0x00038525) main_mup2_pane_t6_ParamLimits

0x9b35,	// (0x00038525) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x0003e0be) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x0003e0be) main_mup2_pane_t

0x9b6d,	// (0x0003855d) mup2_visualizer_pane_ParamLimits

0x9b6d,	// (0x0003855d) mup2_visualizer_pane

0x9ba3,	// (0x00038593) mup_progress_pane_cp_ParamLimits

0x9ba3,	// (0x00038593) mup_progress_pane_cp

0x9cae,	// (0x0003869e) mup_volume_pane_cp_ParamLimits

0x9cae,	// (0x0003869e) mup_volume_pane_cp

0x9bba,	// (0x000385aa) mup2_visualizer_pane_g1_ParamLimits

0x9bba,	// (0x000385aa) mup2_visualizer_pane_g1

0x1a60,	// (0x00030450) mup2_visualizer_pane_g2_ParamLimits

0x1a60,	// (0x00030450) mup2_visualizer_pane_g2

0x9bcf,	// (0x000385bf) mup2_visualizer_pane_g3_ParamLimits

0x9bcf,	// (0x000385bf) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x0003e0cb) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x0003e0cb) mup2_visualizer_pane_g

0x0808,	// (0x0002f1f8) aid_size_cell_fmradio

0x9444,	// (0x00037e34) aid_height_parent_landcape

0xe8bd,	// (0x0003d2ad) wml_content_pane_cp

0xe8c5,	// (0x0003d2b5) wml_tabs_pane

0xe8ce,	// (0x0003d2be) popup_wml_miniature_window

0xe8d6,	// (0x0003d2c6) scroll_pane_cp021

0xe8ea,	// (0x0003d2da) wml_content_pane_comp8

0xe204,	// (0x0003cbf4) bg_popup_sub_pane_cp05

0x1a7e,	// (0x0003046e) popup_wml_miniature_window_g1

0x1a86,	// (0x00030476) wml_miniature_view_pane

0x9bdd,	// (0x000385cd) aid_size_wml_view

0x9be5,	// (0x000385d5) wml_miniature_view_pane_g1

0x9bee,	// (0x000385de) wml_miniature_view_pane_g2

0x9bf7,	// (0x000385e7) wml_miniature_view_pane_g3

0x9bff,	// (0x000385ef) wml_miniature_view_pane_g4

0x9c07,	// (0x000385f7) wml_miniature_view_pane_g5

0x9c0f,	// (0x000385ff) wml_miniature_view_pane_g6

0x9c17,	// (0x00038607) wml_miniature_view_pane_g7

0x9c1f,	// (0x0003860f) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x0003e0d2) wml_miniature_view_pane_g

0x1a8e,	// (0x0003047e) background_graphic_ParamLimits

0x1a8e,	// (0x0003047e) background_graphic

0x1a9a,	// (0x0003048a) wml_tabs_2_pane

0x1aa3,	// (0x00030493) wml_tabs_3_pane_ParamLimits

0x1aa3,	// (0x00030493) wml_tabs_3_pane

0x1ab5,	// (0x000304a5) wml_tabs_4_pane_ParamLimits

0x1ab5,	// (0x000304a5) wml_tabs_4_pane

0x1acb,	// (0x000304bb) wml_tabs_5_pane_ParamLimits

0x1acb,	// (0x000304bb) wml_tabs_5_pane

0x1ae5,	// (0x000304d5) wml_tabs_pane_g2_ParamLimits

0x1ae5,	// (0x000304d5) wml_tabs_pane_g2

0x1af9,	// (0x000304e9) wml_tabs_pane_g3_ParamLimits

0x1af9,	// (0x000304e9) wml_tabs_pane_g3

0x9c27,	// (0x00038617) wml_tabs_2_active_pane_ParamLimits

0x9c27,	// (0x00038617) wml_tabs_2_active_pane

0x9c37,	// (0x00038627) wml_tabs_2_passive_pane_ParamLimits

0x9c37,	// (0x00038627) wml_tabs_2_passive_pane

0x9c47,	// (0x00038637) wml_tabs_3_active_pane_cp_ParamLimits

0x9c47,	// (0x00038637) wml_tabs_3_active_pane_cp

0x9c58,	// (0x00038648) wml_tabs_3_passive_pane_ParamLimits

0x9c58,	// (0x00038648) wml_tabs_3_passive_pane

0x9c69,	// (0x00038659) wml_tabs_3_passive_pane_cp_ParamLimits

0x9c69,	// (0x00038659) wml_tabs_3_passive_pane_cp

0x9c7a,	// (0x0003866a) tabs_4_active_pane

0x9c82,	// (0x00038672) tabs_4_passive_pane

0x9c8a,	// (0x0003867a) tabs_4_passive_pane_cp

0x9c92,	// (0x00038682) tabs_4_passive_pane_cp2

0x9209,	// (0x00037bf9) aid_height_text

0x8a0d,	// (0x000373fd) mup_volume_cont_pane_ParamLimits

0x8a0d,	// (0x000373fd) mup_volume_cont_pane

0x69f7,	// (0x000353e7) aid_size_cell_pinb

0xe48f,	// (0x0003ce7f) aid_size_list_pinb

0x9b8c,	// (0x0003857c) mup2_volume_cont_pane_ParamLimits

0x9b8c,	// (0x0003857c) mup2_volume_cont_pane

0x9c9a,	// (0x0003868a) mup2_volume_cont_pane_g1_ParamLimits

0x9c9a,	// (0x0003868a) mup2_volume_cont_pane_g1

0x667c,	// (0x0003506c) aid_size_cell_touch_ParamLimits

0x667c,	// (0x0003506c) aid_size_cell_touch

0x68d7,	// (0x000352c7) touch_pane_ParamLimits

0x68d7,	// (0x000352c7) touch_pane

0xdd8b,	// (0x0003c77b) main_rss2_pane

0x1b4f,	// (0x0003053f) listscroll_rss2_pane

0x1b58,	// (0x00030548) rss2_navigation_pane

0x1b60,	// (0x00030550) list_rss2_pane

0xeeb1,	// (0x0003d8a1) scroll_pane_cp22

0x1b68,	// (0x00030558) rss2_navigation_pane_g1

0x1b71,	// (0x00030561) rss2_navigation_pane_g2

0x1b79,	// (0x00030569) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x0003e0e3) rss2_navigation_pane_g

0x1b81,	// (0x00030571) rss2_navigation_pane_t1

0x9cd3,	// (0x000386c3) rss2_list_single_pane_ParamLimits

0x9cd3,	// (0x000386c3) rss2_list_single_pane

0x1b8f,	// (0x0003057f) rss2_list_single_pane_t2

0x1b9d,	// (0x0003058d) rss2_list_single_pane_t3_ParamLimits

0x1b9d,	// (0x0003058d) rss2_list_single_pane_t3

0x1bba,	// (0x000305aa) rss2_list_single_pane_t4

0x81e1,	// (0x00036bd1) smil_status_pane_g1

0xf115,	// (0x0003db05) main_image2_pane_ParamLimits

0xf115,	// (0x0003db05) main_image2_pane

0x989f,	// (0x0003828f) main_camera2_pane_g9_ParamLimits

0x989f,	// (0x0003828f) main_camera2_pane_g9

0x98f3,	// (0x000382e3) main_camera2_pane_t5_ParamLimits

0x98f3,	// (0x000382e3) main_camera2_pane_t5

0x9905,	// (0x000382f5) main_camera2_pane_t6_ParamLimits

0x9905,	// (0x000382f5) main_camera2_pane_t6

0x9d0f,	// (0x000386ff) main_image2_pane_g1_ParamLimits

0x9d0f,	// (0x000386ff) main_image2_pane_g1

0x8f9e,	// (0x0003798e) smil2_video_pane_ParamLimits

0x8f9e,	// (0x0003798e) smil2_video_pane

0x55e7,	// (0x00033fd7) aid_zoom_text_primary_cp

0xdde9,	// (0x0003c7d9) popup_preview_fixed_window

0xe826,	// (0x0003d216) im_reading_pane_g1

0x97e9,	// (0x000381d9) cams2_bc_adjust_pane_cp_ParamLimits

0x97e9,	// (0x000381d9) cams2_bc_adjust_pane_cp

0x9935,	// (0x00038325) cams2_bc_adjust_pane_ParamLimits

0x9935,	// (0x00038325) cams2_bc_adjust_pane

0x9d1b,	// (0x0003870b) cams2_bc_adjust_pane_g1

0x9d23,	// (0x00038713) cams2_slider_pane

0x9d2c,	// (0x0003871c) cams2_slider_pane_g1

0x9d35,	// (0x00038725) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x0003e0ea) cams2_slider_pane_g

0x6acd,	// (0x000354bd) calc_display_pane_ParamLimits

0x6aeb,	// (0x000354db) calc_paper_pane_ParamLimits

0x6b07,	// (0x000354f7) grid_calc_pane_ParamLimits

0x849a,	// (0x00036e8a) popup_clock_digital_window_t1_ParamLimits

0x07a5,	// (0x0002f195) main_image_pane_t1

0x6ab3,	// (0x000354a3) aid_size_cell_calc_ParamLimits

0x6ab3,	// (0x000354a3) aid_size_cell_calc

0x9476,	// (0x00037e66) popup_blid_sat_info2_window_ParamLimits

0x9476,	// (0x00037e66) popup_blid_sat_info2_window

0x1c04,	// (0x000305f4) aid_size_cell_blid

0x1c0c,	// (0x000305fc) bg_popup_window_pane_cp07

0x1c2f,	// (0x0003061f) grid_popup_blid_pane

0x1c39,	// (0x00030629) heading_pane_cp05_ParamLimits

0x1c39,	// (0x00030629) heading_pane_cp05

0x1d03,	// (0x000306f3) cell_popup_blid_pane_ParamLimits

0x1d03,	// (0x000306f3) cell_popup_blid_pane

0x1d29,	// (0x00030719) cell_popup_blid_pane_g1

0x1d31,	// (0x00030721) cell_popup_blid_pane_t1

0x9b52,	// (0x00038542) mup2_indicator_pane_ParamLimits

0x9b52,	// (0x00038542) mup2_indicator_pane

0xeffe,	// (0x0003d9ee) mup2_visualizer_osc_pane

0x1a6c,	// (0x0003045c) mup2_visualizer_spec_pane_ParamLimits

0x1a6c,	// (0x0003045c) mup2_visualizer_spec_pane

0x9d4f,	// (0x0003873f) mup2_spec_half_pane

0x9d58,	// (0x00038748) mup2_spec_half_pane_cp

0x9d62,	// (0x00038752) mup2_spec_bar_pane_ParamLimits

0x9d62,	// (0x00038752) mup2_spec_bar_pane

0x19bb,	// (0x000303ab) mup2_spec_bar_pane_g1

0x19c5,	// (0x000303b5) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x0003e05d) mup2_spec_bar_pane_g

0x9d81,	// (0x00038771) mup2_osc_middle_pane

0x19d7,	// (0x000303c7) mup2_visualizer_osc_pane_g1

0xde13,	// (0x0003c803) popup_number_entry_window_t1_ParamLimits

0xde26,	// (0x0003c816) popup_number_entry_window_t2_ParamLimits

0xde38,	// (0x0003c828) popup_number_entry_window_t3_ParamLimits

0x692e,	// (0x0003531e) popup_number_entry_window_t5_ParamLimits

0x692e,	// (0x0003531e) popup_number_entry_window_t5

0xf12f,	// (0x0003db1f) popup_number_entry_window_t_ParamLimits

0xde4a,	// (0x0003c83a) text_title_cp2_ParamLimits

0x8c85,	// (0x00037675) aid_hotspot_pointer_text2_pane

0x8d1f,	// (0x0003770f) main_viewer_pane_g9_ParamLimits

0x8d1f,	// (0x0003770f) main_viewer_pane_g9

0xea55,	// (0x0003d445) cale_month_pane_t1_ParamLimits

0xea92,	// (0x0003d482) bg_cale_pane_ParamLimits

0xeaaa,	// (0x0003d49a) list_cale_pane_ParamLimits

0xe6ae,	// (0x0003d09e) listscroll_cale_day_pane_t1

0xeabb,	// (0x0003d4ab) scroll_pane_cp09_ParamLimits

0x8a4c,	// (0x0003743c) main_mup_eq_pane_t1_ParamLimits

0x8a4c,	// (0x0003743c) main_mup_eq_pane_t1

0x8a66,	// (0x00037456) main_mup_eq_pane_t2_ParamLimits

0x8a66,	// (0x00037456) main_mup_eq_pane_t2

0x8a7e,	// (0x0003746e) main_mup_eq_pane_t3_ParamLimits

0x8a7e,	// (0x0003746e) main_mup_eq_pane_t3

0x8a96,	// (0x00037486) main_mup_eq_pane_t4_ParamLimits

0x8a96,	// (0x00037486) main_mup_eq_pane_t4

0x8aae,	// (0x0003749e) main_mup_eq_pane_t5_ParamLimits

0x8aae,	// (0x0003749e) main_mup_eq_pane_t5

0x8ac6,	// (0x000374b6) main_mup_eq_pane_t6_ParamLimits

0x8ac6,	// (0x000374b6) main_mup_eq_pane_t6

0x8ada,	// (0x000374ca) main_mup_eq_pane_t7_ParamLimits

0x8ada,	// (0x000374ca) main_mup_eq_pane_t7

0x8aee,	// (0x000374de) main_mup_eq_pane_t8_ParamLimits

0x8aee,	// (0x000374de) main_mup_eq_pane_t8

0x8b04,	// (0x000374f4) main_mup_eq_pane_t9_ParamLimits

0x8b04,	// (0x000374f4) main_mup_eq_pane_t9

0x8b1c,	// (0x0003750c) main_mup_eq_pane_t10_ParamLimits

0x8b1c,	// (0x0003750c) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x0003deac) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x0003deac) main_mup_eq_pane_t

0x8bd9,	// (0x000375c9) mup_equalizer_pane_cp5_ParamLimits

0x8bef,	// (0x000375df) mup_equalizer_pane_cp6_ParamLimits

0x8c07,	// (0x000375f7) mup_equalizer_pane_cp7_ParamLimits

0xdd8b,	// (0x0003c77b) main_gallery_pane

0x19e0,	// (0x000303d0) smil2_volume_pane

0x19fb,	// (0x000303eb) smil_status_volume_pane_g1_ParamLimits

0x19e8,	// (0x000303d8) smil_status_volume_pane_g2_ParamLimits

0x9660,	// (0x00038050) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x0003e062) smil_status_volume_pane_g_ParamLimits

0x1c0c,	// (0x000305fc) bg_popup_window_pane_cp07_ParamLimits

0x1c1a,	// (0x0003060a) blid_firmament_pane

0x9d8a,	// (0x0003877a) aid_size_cell_gallery_ParamLimits

0x9d8a,	// (0x0003877a) aid_size_cell_gallery

0x9d98,	// (0x00038788) grid_gallery_pane_ParamLimits

0x9d98,	// (0x00038788) grid_gallery_pane

0x9da8,	// (0x00038798) cell_gallery_pane_ParamLimits

0x9da8,	// (0x00038798) cell_gallery_pane

0x1d3f,	// (0x0003072f) bg_cell_gallery_focus_pane_ParamLimits

0x1d3f,	// (0x0003072f) bg_cell_gallery_focus_pane

0x1d51,	// (0x00030741) cell_gallery_pane_g1_ParamLimits

0x1d51,	// (0x00030741) cell_gallery_pane_g1

0x9df6,	// (0x000387e6) cell_gallery_pane_g2_ParamLimits

0x9df6,	// (0x000387e6) cell_gallery_pane_g2

0x9e03,	// (0x000387f3) cell_gallery_pane_g3_ParamLimits

0x9e03,	// (0x000387f3) cell_gallery_pane_g3

0x1d5d,	// (0x0003074d) cell_gallery_pane_g4_ParamLimits

0x1d5d,	// (0x0003074d) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x0003e110) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x0003e110) cell_gallery_pane_g

0x1d69,	// (0x00030759) bg_cell_gallery_focus_pane_g1

0x1d71,	// (0x00030761) bg_cell_gallery_focus_pane_g2

0x1d79,	// (0x00030769) bg_cell_gallery_focus_pane_g3

0x1d81,	// (0x00030771) bg_cell_gallery_focus_pane_g4

0x1d89,	// (0x00030779) bg_cell_gallery_focus_pane_g5

0x1d91,	// (0x00030781) bg_cell_gallery_focus_pane_g6

0x1d99,	// (0x00030789) bg_cell_gallery_focus_pane_g7

0x1da1,	// (0x00030791) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x0003e119) bg_cell_gallery_focus_pane_g

0x1da9,	// (0x00030799) aid_firma_cardinal

0x1dbd,	// (0x000307ad) blid_firmament_pane_t1

0x1dd4,	// (0x000307c4) blid_firmament_pane_t2

0x1deb,	// (0x000307db) blid_firmament_pane_t3

0x1e02,	// (0x000307f2) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x0003e12a) blid_firmament_pane_t

0x1e19,	// (0x00030809) blid_sat_info_pane

0x1e29,	// (0x00030819) blid_sat_info_pane_g1

0x1e29,	// (0x00030819) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x0003e133) blid_sat_info_pane_g

0x1e33,	// (0x00030823) blid_sat_info_pane_t1

0x1e41,	// (0x00030831) smil2_volume_content_pane

0x1e4a,	// (0x0003083a) smil2_volume_pane_g1

0x1e52,	// (0x00030842) smil2_volume_content_pane_g1

0x1e5b,	// (0x0003084b) smil2_volume_content_pane_g2

0x1e64,	// (0x00030854) smil2_volume_content_pane_g3

0x1e6d,	// (0x0003085d) smil2_volume_content_pane_g4

0x1e76,	// (0x00030866) smil2_volume_content_pane_g5

0x1e7f,	// (0x0003086f) smil2_volume_content_pane_g6

0x1e88,	// (0x00030878) smil2_volume_content_pane_g7

0x1e91,	// (0x00030881) smil2_volume_content_pane_g8

0x1e9a,	// (0x0003088a) smil2_volume_content_pane_g9

0x1ea3,	// (0x00030893) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x0003e138) smil2_volume_content_pane_g

0x7057,	// (0x00035a47) cale_week_day_heading_pane_t1_ParamLimits

0x706b,	// (0x00035a5b) cale_week_day_heading_pane_t2_ParamLimits

0x707f,	// (0x00035a6f) cale_week_day_heading_pane_t3_ParamLimits

0x7093,	// (0x00035a83) cale_week_day_heading_pane_t4_ParamLimits

0x70a7,	// (0x00035a97) cale_week_day_heading_pane_t5_ParamLimits

0x70bb,	// (0x00035aab) cale_week_day_heading_pane_t6_ParamLimits

0x70cf,	// (0x00035abf) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0003dc24) cale_week_day_heading_pane_t_ParamLimits

0xe6c0,	// (0x0003d0b0) bg_cale_side_pane_ParamLimits

0x70e3,	// (0x00035ad3) cale_week_time_pane_t1_ParamLimits

0x70fb,	// (0x00035aeb) cale_week_time_pane_t2_ParamLimits

0x7113,	// (0x00035b03) cale_week_time_pane_t3_ParamLimits

0x712b,	// (0x00035b1b) cale_week_time_pane_t4_ParamLimits

0x7143,	// (0x00035b33) cale_week_time_pane_t5_ParamLimits

0x715b,	// (0x00035b4b) cale_week_time_pane_t6_ParamLimits

0x7173,	// (0x00035b63) cale_week_time_pane_t7_ParamLimits

0x718b,	// (0x00035b7b) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0003dc33) cale_week_time_pane_t_ParamLimits

0x71a3,	// (0x00035b93) cell_cale_week_pane_g2_ParamLimits

0xe6c0,	// (0x0003d0b0) bg_cale_side_pane_cp01_ParamLimits

0x806e,	// (0x00036a5e) cale_month_week_pane_t1_ParamLimits

0x8085,	// (0x00036a75) cale_month_week_pane_t2_ParamLimits

0x809c,	// (0x00036a8c) cale_month_week_pane_t3_ParamLimits

0x80b3,	// (0x00036aa3) cale_month_week_pane_t4_ParamLimits

0x80ca,	// (0x00036aba) cale_month_week_pane_t5_ParamLimits

0x80e1,	// (0x00036ad1) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x0003dd0c) cale_month_week_pane_t_ParamLimits

0x81ae,	// (0x00036b9e) cell_cale_month_pane_g1_ParamLimits

0xdd8b,	// (0x0003c77b) main_cale_event_viewer_pane

0xdd8b,	// (0x0003c77b) listscroll_cale_event_viewer_pane

0x1eac,	// (0x0003089c) list_cale_ev_pane

0x1eb4,	// (0x000308a4) scroll_pane_cp023

0x1ec0,	// (0x000308b0) field_cale_ev_pane_ParamLimits

0x1ec0,	// (0x000308b0) field_cale_ev_pane

0x1eda,	// (0x000308ca) field_cale_ev_content_pane_ParamLimits

0x1eda,	// (0x000308ca) field_cale_ev_content_pane

0x1ee6,	// (0x000308d6) field_cale_ev_pane_g1_ParamLimits

0x1ee6,	// (0x000308d6) field_cale_ev_pane_g1

0x1ef2,	// (0x000308e2) field_cale_ev_pane_g2_ParamLimits

0x1ef2,	// (0x000308e2) field_cale_ev_pane_g2

0x1f0a,	// (0x000308fa) field_cale_ev_pane_g3_ParamLimits

0x1f0a,	// (0x000308fa) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x0003e14d) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x0003e14d) field_cale_ev_pane_g

0x1f22,	// (0x00030912) field_cale_ev_pane_t1_ParamLimits

0x1f22,	// (0x00030912) field_cale_ev_pane_t1

0x1f39,	// (0x00030929) field_cale_ev_content_pane_t1_ParamLimits

0x1f39,	// (0x00030929) field_cale_ev_content_pane_t1

0x0613,	// (0x0002f003) bg_button_pane_cp01

0xe56e,	// (0x0003cf5e) listscroll_cale_week_pane_ParamLimits

0x6e80,	// (0x00035870) popup_toolbar_window_cp01

0xe6ae,	// (0x0003d09e) listscroll_cale_week_pane_t1_ParamLimits

0xe56e,	// (0x0003cf5e) listscroll_cale_day_pane_ParamLimits

0x6e80,	// (0x00035870) popup_toolbar_window_cp02

0xe6ae,	// (0x0003d09e) listscroll_cale_day_pane_t1_ParamLimits

0xe56e,	// (0x0003cf5e) main_cale_month_pane_ParamLimits

0x953a,	// (0x00037f2a) popup_toolbar_window_cp03_ParamLimits

0x953a,	// (0x00037f2a) popup_toolbar_window_cp03

0x8eb0,	// (0x000378a0) main_image_pane_g2_ParamLimits

0x8eb0,	// (0x000378a0) main_image_pane_g2

0x8ebc,	// (0x000378ac) main_image_pane_g3_ParamLimits

0x8ebc,	// (0x000378ac) main_image_pane_g3

0x0002,

0xf54e,	// (0x0003df3e) main_image_pane_g_ParamLimits

0xf54e,	// (0x0003df3e) main_image_pane_g

0x07a5,	// (0x0002f195) main_image_pane_t1_ParamLimits

0x8ec8,	// (0x000378b8) main_image_pane_t2_ParamLimits

0x8ec8,	// (0x000378b8) main_image_pane_t2

0x8eda,	// (0x000378ca) main_image_pane_t3_ParamLimits

0x8eda,	// (0x000378ca) main_image_pane_t3

0x8eec,	// (0x000378dc) main_image_pane_t4_ParamLimits

0x8eec,	// (0x000378dc) main_image_pane_t4

0x0003,

0xf555,	// (0x0003df45) main_image_pane_t_ParamLimits

0xf555,	// (0x0003df45) main_image_pane_t

0x8efe,	// (0x000378ee) popup_image_details_window_cp01

0x8f08,	// (0x000378f8) popup_toobar_trans_pane_cp01_ParamLimits

0x8f08,	// (0x000378f8) popup_toobar_trans_pane_cp01

0x94bf,	// (0x00037eaf) popup_image_details_window_ParamLimits

0x94bf,	// (0x00037eaf) popup_image_details_window

0x1941,	// (0x00030331) popup_image_focus_window

0x97db,	// (0x000381cb) camera2_autofocus_pane_ParamLimits

0x97db,	// (0x000381cb) camera2_autofocus_pane

0xdd8b,	// (0x0003c77b) bg_popup_sub_pane_cp06

0x1f56,	// (0x00030946) popup_image_focus_window_g1

0x1f5e,	// (0x0003094e) popup_image_focus_window_g2

0x1f66,	// (0x00030956) popup_image_focus_window_g3

0x1f6e,	// (0x0003095e) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x0003e154) popup_image_focus_window_g

0x1f76,	// (0x00030966) popup_image_focus_window_t1

0x1f84,	// (0x00030974) popup_image_focus_window_t2

0x1f94,	// (0x00030984) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x0003e15d) popup_image_focus_window_t

0x1fa2,	// (0x00030992) camera2_autofocus_pane_g1

0xf115,	// (0x0003db05) bg_tb_trans_pane_cp01

0x1fb0,	// (0x000309a0) popup_image_details_window_g1

0x1fc3,	// (0x000309b3) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x0003e16f) popup_image_details_window_g

0x1fec,	// (0x000309dc) popup_image_details_window_t1

0x1ffe,	// (0x000309ee) popup_image_details_window_t2

0x2017,	// (0x00030a07) popup_image_details_window_t3

0x202b,	// (0x00030a1b) popup_image_details_window_t4

0x2046,	// (0x00030a36) popup_image_details_window_t5

0x0004,

0xf786,	// (0x0003e176) popup_image_details_window_t

0xe55a,	// (0x0003cf4a) bg_calc_paper_pane_ParamLimits

0xdd8b,	// (0x0003c77b) grid_highlight_pane_cp013

0x6c00,	// (0x000355f0) list_calc_pane_ParamLimits

0x6c12,	// (0x00035602) scroll_pane_cp024

0xe56e,	// (0x0003cf5e) bg_calc_display_pane_ParamLimits

0x6c1a,	// (0x0003560a) calc_display_pane_t1_ParamLimits

0x6c2f,	// (0x0003561f) calc_display_pane_t2_ParamLimits

0x6c44,	// (0x00035634) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0003dba6) calc_display_pane_t_ParamLimits

0x6d2b,	// (0x0003571b) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0003dbc3) cell_calc_pane_g

0x6d34,	// (0x00035724) cell_calc_pane_t1

0xe5cd,	// (0x0003cfbd) grid_highlight_pane_cp02_ParamLimits

0xe5e3,	// (0x0003cfd3) toolbar_button_pane_cp01_ParamLimits

0xe5e3,	// (0x0003cfd3) toolbar_button_pane_cp01

0x07ea,	// (0x0002f1da) temp_image_control_pane_ParamLimits

0x07ea,	// (0x0002f1da) temp_image_control_pane

0xf115,	// (0x0003db05) main_mp3_pane

0x2060,	// (0x00030a50) temp_image_control_pane_g1_ParamLimits

0x2060,	// (0x00030a50) temp_image_control_pane_g1

0x206e,	// (0x00030a5e) temp_image_control_pane_g2_ParamLimits

0x206e,	// (0x00030a5e) temp_image_control_pane_g2

0x2080,	// (0x00030a70) temp_image_control_pane_g3_ParamLimits

0x2080,	// (0x00030a70) temp_image_control_pane_g3

0x9e40,	// (0x00038830) temp_image_control_pane_g4_ParamLimits

0x9e40,	// (0x00038830) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x0003e181) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x0003e181) temp_image_control_pane_g

0x2060,	// (0x00030a50) main_mp3_pane_g1

0x9e51,	// (0x00038841) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x0003e18a) main_mp3_pane_g

0x20c3,	// (0x00030ab3) main_mp3_pane_t1

0xe72f,	// (0x0003d11f) main_camera_pane_g8_ParamLimits

0xe72f,	// (0x0003d11f) main_camera_pane_g8

0x7433,	// (0x00035e23) main_video_pane_g7_ParamLimits

0x7433,	// (0x00035e23) main_video_pane_g7

0x9923,	// (0x00038313) main_camera2_pane_t7_ParamLimits

0x9923,	// (0x00038313) main_camera2_pane_t7

0xe87d,	// (0x0003d26d) scroll_pane_cp025_ParamLimits

0xe87d,	// (0x0003d26d) scroll_pane_cp025

0xe891,	// (0x0003d281) scroll_pane_cp026_ParamLimits

0xe891,	// (0x0003d281) scroll_pane_cp026

0xe8a0,	// (0x0003d290) wml_content_pane_ParamLimits

0xdd8b,	// (0x0003c77b) main_touch_calib_pane

0x9ef5,	// (0x000388e5) main_touch_calib_pane_g1

0x9f01,	// (0x000388f1) main_touch_calib_pane_g2

0x9f0d,	// (0x000388fd) main_touch_calib_pane_g3

0x9f19,	// (0x00038909) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x0003e1a8) main_touch_calib_pane_g

0x9f25,	// (0x00038915) main_touch_calib_pane_t1

0x9f3c,	// (0x0003892c) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x0003e1b1) main_touch_calib_pane_t

0xef3f,	// (0x0003d92f) mup_progress_pane_cp02

0xef5e,	// (0x0003d94e) navi_pane_g1

0xefc0,	// (0x0003d9b0) navi_pane_mp_t3

0xf115,	// (0x0003db05) main_mp3_pane_ParamLimits

0x9578,	// (0x00037f68) navi_pane_ParamLimits

0x2060,	// (0x00030a50) main_mp3_pane_g1_ParamLimits

0x9e51,	// (0x00038841) main_mp3_pane_g2_ParamLimits

0x9e5d,	// (0x0003884d) main_mp3_pane_g3_ParamLimits

0x9e5d,	// (0x0003884d) main_mp3_pane_g3

0x9e69,	// (0x00038859) main_mp3_pane_g4_ParamLimits

0x9e69,	// (0x00038859) main_mp3_pane_g4

0x2090,	// (0x00030a80) main_mp3_pane_g5_ParamLimits

0x2090,	// (0x00030a80) main_mp3_pane_g5

0x209e,	// (0x00030a8e) main_mp3_pane_g6_ParamLimits

0x209e,	// (0x00030a8e) main_mp3_pane_g6

0x20ab,	// (0x00030a9b) main_mp3_pane_g7_ParamLimits

0x20ab,	// (0x00030a9b) main_mp3_pane_g7

0x20b7,	// (0x00030aa7) main_mp3_pane_g8_ParamLimits

0x20b7,	// (0x00030aa7) main_mp3_pane_g8

0xf79a,	// (0x0003e18a) main_mp3_pane_g_ParamLimits

0x9e75,	// (0x00038865) main_mp3_pane_t2

0x9e85,	// (0x00038875) main_mp3_pane_t3

0x20d1,	// (0x00030ac1) main_mp3_pane_t4

0x20df,	// (0x00030acf) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x0003e19b) main_mp3_pane_t

0x20ed,	// (0x00030add) mup_progress_pane_cp01

0x55e7,	// (0x00033fd7) aid_zoom_text_secondary2

0x1eac,	// (0x0003089c) list_cale_ev2_pane

0x1eb4,	// (0x000308a4) scroll_pane_cp023_ParamLimits

0x9f8f,	// (0x0003897f) field_cale_ev2_pane_ParamLimits

0x9f8f,	// (0x0003897f) field_cale_ev2_pane

0x58e4,	// (0x000342d4) field_cale_ev2_pane_g1_ParamLimits

0x58e4,	// (0x000342d4) field_cale_ev2_pane_g1

0x58f0,	// (0x000342e0) field_cale_ev2_pane_g2_ParamLimits

0x58f0,	// (0x000342e0) field_cale_ev2_pane_g2

0x5908,	// (0x000342f8) field_cale_ev2_pane_g3_ParamLimits

0x5908,	// (0x000342f8) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x0003e1bc) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x0003e1bc) field_cale_ev2_pane_g

0x592c,	// (0x0003431c) field_cale_ev2_pane_t1_ParamLimits

0x592c,	// (0x0003431c) field_cale_ev2_pane_t1

0x5943,	// (0x00034333) field_cale_ev2_pane_t2_ParamLimits

0x5943,	// (0x00034333) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x0003e1c5) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x0003e1c5) field_cale_ev2_pane_t

0x8d87,	// (0x00037777) main_postcard_pane_g5_ParamLimits

0x8d87,	// (0x00037777) main_postcard_pane_g5

0x8d95,	// (0x00037785) main_postcard_pane_g6_ParamLimits

0x8d95,	// (0x00037785) main_postcard_pane_g6

0x7273,	// (0x00035c63) camera2_autofocus_pane_cp_ParamLimits

0x7273,	// (0x00035c63) camera2_autofocus_pane_cp

0xf115,	// (0x0003db05) main_mup3_pane

0x9fe3,	// (0x000389d3) main_mup3_pane_g1_ParamLimits

0x9fe3,	// (0x000389d3) main_mup3_pane_g1

0xa004,	// (0x000389f4) main_mup3_pane_g2_ParamLimits

0xa004,	// (0x000389f4) main_mup3_pane_g2

0xa07f,	// (0x00038a6f) main_mup3_pane_g3_ParamLimits

0xa07f,	// (0x00038a6f) main_mup3_pane_g3

0xa0be,	// (0x00038aae) main_mup3_pane_g4_ParamLimits

0xa0be,	// (0x00038aae) main_mup3_pane_g4

0xa0fd,	// (0x00038aed) main_mup3_pane_g5_ParamLimits

0xa0fd,	// (0x00038aed) main_mup3_pane_g5

0xa13e,	// (0x00038b2e) main_mup3_pane_g6_ParamLimits

0xa13e,	// (0x00038b2e) main_mup3_pane_g6

0x212d,	// (0x00030b1d) main_mup3_pane_g7_ParamLimits

0x212d,	// (0x00030b1d) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x0003e1d5) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x0003e1d5) main_mup3_pane_g

0xa1b0,	// (0x00038ba0) main_mup3_pane_t1_ParamLimits

0xa1b0,	// (0x00038ba0) main_mup3_pane_t1

0xa21f,	// (0x00038c0f) main_mup3_pane_t2_ParamLimits

0xa21f,	// (0x00038c0f) main_mup3_pane_t2

0xa2e8,	// (0x00038cd8) main_mup3_pane_t4_ParamLimits

0xa2e8,	// (0x00038cd8) main_mup3_pane_t4

0xa33a,	// (0x00038d2a) main_mup3_pane_t5_ParamLimits

0xa33a,	// (0x00038d2a) main_mup3_pane_t5

0xa3e2,	// (0x00038dd2) main_mup3_pane_t6_ParamLimits

0xa3e2,	// (0x00038dd2) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x0003e1e6) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x0003e1e6) main_mup3_pane_t

0xa48a,	// (0x00038e7a) mup3_progress_pane_ParamLimits

0xa48a,	// (0x00038e7a) mup3_progress_pane

0xa4ef,	// (0x00038edf) popup_mup3_control_window_ParamLimits

0xa4ef,	// (0x00038edf) popup_mup3_control_window

0x213b,	// (0x00030b2b) popup_mup3_text_window

0xa508,	// (0x00038ef8) mup3_progress_pane_t1

0xa51f,	// (0x00038f0f) mup3_progress_pane_t2

0x2143,	// (0x00030b33) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x0003e1f3) mup3_progress_pane_t

0x215a,	// (0x00030b4a) mup_progress_pane_cp03

0xdd8b,	// (0x0003c77b) bg_tb_trans_pane_cp04

0xa536,	// (0x00038f26) mup3_volume_pane

0xa53e,	// (0x00038f2e) popup_mup3_control_window_g1

0xa547,	// (0x00038f37) mup3_volume_pane_g1

0xa550,	// (0x00038f40) mup3_volume_pane_g2

0xa559,	// (0x00038f49) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x0003e1fa) mup3_volume_pane_g

0xdd8b,	// (0x0003c77b) bg_tb_trans_pane_cp03

0x216a,	// (0x00030b5a) popup_mup3_text_window_g1

0x2172,	// (0x00030b62) popup_mup3_text_window_t1

0xe5b6,	// (0x0003cfa6) list_calc_item_pane_g1_ParamLimits

0x1b36,	// (0x00030526) mup_volume_pane_cp_g1

0x9f53,	// (0x00038943) main_touch_calib_pane_t3

0x9f67,	// (0x00038957) main_touch_calib_pane_t4

0x9f7b,	// (0x0003896b) main_touch_calib_pane_t5

0xdd95,	// (0x0003c785) aid_cell_size_toolbar2

0xdd9d,	// (0x0003c78d) aid_popup3_width_pane

0x55df,	// (0x00033fcf) aid_zoom_text_msg_primary

0x725d,	// (0x00035c4d) vorec_t7

0xe57a,	// (0x0003cf6a) bg_calc_paper_pane_g1_ParamLimits

0xe586,	// (0x0003cf76) bg_calc_paper_pane_g2_ParamLimits

0xe592,	// (0x0003cf82) bg_calc_paper_pane_g3_ParamLimits

0xe59e,	// (0x0003cf8e) bg_calc_paper_pane_g4_ParamLimits

0xe5aa,	// (0x0003cf9a) bg_calc_paper_pane_g5_ParamLimits

0x6c83,	// (0x00035673) bg_calc_paper_pane_g6_ParamLimits

0x6c94,	// (0x00035684) bg_calc_paper_pane_g7_ParamLimits

0x6ca5,	// (0x00035695) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0003dbad) bg_calc_paper_pane_g_ParamLimits

0x6cb6,	// (0x000356a6) calc_bg_paper_pane_g9_ParamLimits

0x735c,	// (0x00035d4c) image_qvga_pane_ParamLimits

0x735c,	// (0x00035d4c) image_qvga_pane

0xe45f,	// (0x0003ce4f) bg_popup_sub_pane_cp04_ParamLimits

0x0721,	// (0x0002f111) popup_mup_playback_window_g1_ParamLimits

0x072d,	// (0x0002f11d) popup_mup_playback_window_t1_ParamLimits

0x0742,	// (0x0002f132) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x0003df39) popup_mup_playback_window_t_ParamLimits

0x9a52,	// (0x00038442) main_mup2_pane_g3_ParamLimits

0x9a52,	// (0x00038442) main_mup2_pane_g3

0x75b5,	// (0x00035fa5) popup_toolbar_window_cp04

0x0b37,	// (0x0002f527) popup_call2_audio_second_window_g3_ParamLimits

0x0b37,	// (0x0002f527) popup_call2_audio_second_window_g3

0x0f41,	// (0x0002f931) popup_call2_audio_first_window_g4_ParamLimits

0x0f41,	// (0x0002f931) popup_call2_audio_first_window_g4

0x15c0,	// (0x0002ffb0) popup_call2_audio_in_window_g4_ParamLimits

0x15c0,	// (0x0002ffb0) popup_call2_audio_in_window_g4

0x8ea3,	// (0x00037893) aid_area_sk_bg_cut_ParamLimits

0x8ea3,	// (0x00037893) aid_area_sk_bg_cut

0x0757,	// (0x0002f147) aid_area_sk_bg_cut_2_ParamLimits

0x0757,	// (0x0002f147) aid_area_sk_bg_cut_2

0x9de6,	// (0x000387d6) aid_placing_details_win

0x9dee,	// (0x000387de) aid_placing_details_win_2

0x1fa2,	// (0x00030992) camera2_autofocus_pane_g1_ParamLimits

0x6883,	// (0x00035273) popup_fixed_preview_cale_window_ParamLimits

0x6883,	// (0x00035273) popup_fixed_preview_cale_window

0xf00f,	// (0x0003d9ff) navi_slider_pane_g3

0xf018,	// (0x0003da08) navi_slider_pane_g4

0xf021,	// (0x0003da11) navi_slider_pane_g5

0xf00f,	// (0x0003d9ff) navi_slider_pane_g6

0x87e0,	// (0x000371d0) navi_slider_pane_g7

0x05e0,	// (0x0002efd0) mup_scale_pane_g3

0x05e9,	// (0x0002efd9) mup_scale_pane_g4

0x05f2,	// (0x0002efe2) mup_scale_pane_g5

0x8c1f,	// (0x0003760f) mup_scale_pane_g6

0x8c28,	// (0x00037618) mup_scale_pane_g7

0xf00f,	// (0x0003d9ff) cams2_slider_pane_g3

0x1beb,	// (0x000305db) cams2_slider_pane_g4

0x9d3e,	// (0x0003872e) cams2_slider_pane_g5

0xf00f,	// (0x0003d9ff) cams2_slider_pane_g6

0x9d46,	// (0x00038736) cams2_slider_pane_g7

0x1e29,	// (0x00030819) camera2_autofocus_pane_cp_g1

0x2180,	// (0x00030b70) bg_popup_preview_window_pane_cp02_ParamLimits

0x2180,	// (0x00030b70) bg_popup_preview_window_pane_cp02

0x218c,	// (0x00030b7c) list_fp_cale_pane_ParamLimits

0x218c,	// (0x00030b7c) list_fp_cale_pane

0x2198,	// (0x00030b88) popup_fixed_preview_cale_window_t1_ParamLimits

0x2198,	// (0x00030b88) popup_fixed_preview_cale_window_t1

0xa562,	// (0x00038f52) popup_fixed_preview_cale_window_t2_ParamLimits

0xa562,	// (0x00038f52) popup_fixed_preview_cale_window_t2

0xa577,	// (0x00038f67) popup_fixed_preview_cale_window_t3_ParamLimits

0xa577,	// (0x00038f67) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x0003e201) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x0003e201) popup_fixed_preview_cale_window_t

0xa58c,	// (0x00038f7c) list_single_fp_cale_pane_ParamLimits

0xa58c,	// (0x00038f7c) list_single_fp_cale_pane

0x21b6,	// (0x00030ba6) list_single_fp_cale_pane_g1_ParamLimits

0x21b6,	// (0x00030ba6) list_single_fp_cale_pane_g1

0x21c2,	// (0x00030bb2) list_single_fp_cale_pane_g2_ParamLimits

0x21c2,	// (0x00030bb2) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x0003e208) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x0003e208) list_single_fp_cale_pane_g

0x21db,	// (0x00030bcb) list_single_fp_cale_pane_t1_ParamLimits

0x21db,	// (0x00030bcb) list_single_fp_cale_pane_t1

0x21ed,	// (0x00030bdd) list_single_fp_cale_pane_t2_ParamLimits

0x21ed,	// (0x00030bdd) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x0003e20f) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x0003e20f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdd8b,	// (0x0003c77b) main_dialer_pane

0xa5a0,	// (0x00038f90) aid_cell_size_keypad

0xa5aa,	// (0x00038f9a) dialer_ne_pane

0xa5b4,	// (0x00038fa4) grid_dialer_command_1_pane

0xa5bc,	// (0x00038fac) grid_dialer_command_2_pane

0xa5c4,	// (0x00038fb4) grid_dialer_keypad_pane

0xa5d8,	// (0x00038fc8) bg_popup_call_pane_cp06_ParamLimits

0xa5d8,	// (0x00038fc8) bg_popup_call_pane_cp06

0xa5e4,	// (0x00038fd4) dialer_ne_clear_pane_ParamLimits

0xa5e4,	// (0x00038fd4) dialer_ne_clear_pane

0x2220,	// (0x00030c10) dialer_ne_pane_g1

0x2228,	// (0x00030c18) dialer_ne_pane_t1_ParamLimits

0x2228,	// (0x00030c18) dialer_ne_pane_t1

0xa5f0,	// (0x00038fe0) dialer_ne_pane_t2_ParamLimits

0xa5f0,	// (0x00038fe0) dialer_ne_pane_t2

0xa60d,	// (0x00038ffd) dialer_ne_pane_t3_ParamLimits

0xa60d,	// (0x00038ffd) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0003e214) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0003e214) dialer_ne_pane_t

0xa631,	// (0x00039021) dialer_ne_pane_t3_copy1_ParamLimits

0xa631,	// (0x00039021) dialer_ne_pane_t3_copy1

0xa655,	// (0x00039045) cell_dialer_keypad_pane_ParamLimits

0xa655,	// (0x00039045) cell_dialer_keypad_pane

0xa66c,	// (0x0003905c) cell_dialer_command_1_pane_ParamLimits

0xa66c,	// (0x0003905c) cell_dialer_command_1_pane

0xa682,	// (0x00039072) cell_dialer_command_2_pane_ParamLimits

0xa682,	// (0x00039072) cell_dialer_command_2_pane

0x223a,	// (0x00030c2a) bg_button_pane_cp02_ParamLimits

0x223a,	// (0x00030c2a) bg_button_pane_cp02

0xa691,	// (0x00039081) cell_dialer_keypad_pane_g1_ParamLimits

0xa691,	// (0x00039081) cell_dialer_keypad_pane_g1

0x223a,	// (0x00030c2a) bg_button_pane_cp03_ParamLimits

0x223a,	// (0x00030c2a) bg_button_pane_cp03

0xa6a6,	// (0x00039096) cell_dialer_command_1_pane_g1_ParamLimits

0xa6a6,	// (0x00039096) cell_dialer_command_1_pane_g1

0x2246,	// (0x00030c36) bg_button_pane_cp04

0xa6b9,	// (0x000390a9) cell_dialer_command_2_pane_g1

0xeffe,	// (0x0003d9ee) bg_button_pane_cp06

0x224e,	// (0x00030c3e) dialer_ne_clear_pane_g1

0x8723,	// (0x00037113) navi_pane_g2

0x8751,	// (0x00037141) navi_pane_g3

0x0002,

0xf44c,	// (0x0003de3c) navi_pane_g

0x877c,	// (0x0003716c) navi_pane_mv_g2

0x87a3,	// (0x00037193) navi_pane_mv_g5

0x87ab,	// (0x0003719b) navi_pane_mv_t1

0xe56e,	// (0x0003cf5e) main_clock2_pane

0xa6e7,	// (0x000390d7) main_clock2_list_pane_ParamLimits

0xa6e7,	// (0x000390d7) main_clock2_list_pane

0xa70f,	// (0x000390ff) main_clock2_pane_t1_ParamLimits

0xa70f,	// (0x000390ff) main_clock2_pane_t1

0xa73f,	// (0x0003912f) main_clock2_pane_t2_ParamLimits

0xa73f,	// (0x0003912f) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x0003e21b) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x0003e21b) main_clock2_pane_t

0xa7a6,	// (0x00039196) popup_clock_analogue_window_cp03_ParamLimits

0xa7a6,	// (0x00039196) popup_clock_analogue_window_cp03

0xa7c6,	// (0x000391b6) popup_clock_digital_window_cp02_ParamLimits

0xa7c6,	// (0x000391b6) popup_clock_digital_window_cp02

0xa83b,	// (0x0003922b) main_clock2_list_single_pane_ParamLimits

0xa83b,	// (0x0003922b) main_clock2_list_single_pane

0xeffe,	// (0x0003d9ee) list_highlight_pane_cp05

0x2256,	// (0x00030c46) main_clock2_list_single_pane_t1

0x75b5,	// (0x00035fa5) popup_toolbar_window_cp04_ParamLimits

0x9e10,	// (0x00038800) camera2_autofocus_pane_g2_ParamLimits

0x9e10,	// (0x00038800) camera2_autofocus_pane_g2

0x9e1c,	// (0x0003880c) camera2_autofocus_pane_g3_ParamLimits

0x9e1c,	// (0x0003880c) camera2_autofocus_pane_g3

0x9e28,	// (0x00038818) camera2_autofocus_pane_g4_ParamLimits

0x9e28,	// (0x00038818) camera2_autofocus_pane_g4

0x9e34,	// (0x00038824) camera2_autofocus_pane_g5_ParamLimits

0x9e34,	// (0x00038824) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x0003e164) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x0003e164) camera2_autofocus_pane_g

0x9fc3,	// (0x000389b3) camera2_autofocus_pane_cp_g2

0x9fcb,	// (0x000389bb) camera2_autofocus_pane_cp_g3

0x9fd3,	// (0x000389c3) camera2_autofocus_pane_cp_g4

0x9fdb,	// (0x000389cb) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x0003e1ca) camera2_autofocus_pane_cp_g

0xa5d0,	// (0x00038fc0) popup_dialer_spcha_window

0xdd8b,	// (0x0003c77b) bg_popup_sub_pane_cp07

0x2264,	// (0x00030c54) list_spcha_pane

0x226c,	// (0x00030c5c) list_single_spcha_pane_ParamLimits

0x226c,	// (0x00030c5c) list_single_spcha_pane

0xdd8b,	// (0x0003c77b) list_highlight_pane_cp06

0x227d,	// (0x00030c6d) list_single_spcha_pane_t1

0x136a,	// (0x0002fd5a) popup_call2_audio_out_window_g4_ParamLimits

0x136a,	// (0x0002fd5a) popup_call2_audio_out_window_g4

0xdd8b,	// (0x0003c77b) main_imed2_pane

0x1949,	// (0x00030339) popup_imed_adjust2_window

0x94cd,	// (0x00037ebd) popup_imed_trans_window_ParamLimits

0x94cd,	// (0x00037ebd) popup_imed_trans_window

0x1c65,	// (0x00030655) popup_blid_sat_info2_window_t1

0x1c73,	// (0x00030663) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x0003e0f9) popup_blid_sat_info2_window_t

0xa8e5,	// (0x000392d5) aid_size_cell_colour_35

0xa8ff,	// (0x000392ef) aid_size_cell_colour_112

0xa916,	// (0x00039306) aid_size_cell_effect

0xf115,	// (0x0003db05) bg_tb_trans_pane_cp02

0x0534,	// (0x0002ef24) heading_imed_pane

0xa930,	// (0x00039320) listscroll_imed_pane

0x228b,	// (0x00030c7b) heading_imed_pane_g1

0x2293,	// (0x00030c83) heading_imed_pane_t1

0x22a1,	// (0x00030c91) grid_imed_colour_35_pane_ParamLimits

0x22a1,	// (0x00030c91) grid_imed_colour_35_pane

0xa93c,	// (0x0003932c) grid_imed_effect_pane

0x22bc,	// (0x00030cac) list_imed_aspect_pane

0xa94c,	// (0x0003933c) scroll_pane_cp027_ParamLimits

0xa94c,	// (0x0003933c) scroll_pane_cp027

0xa958,	// (0x00039348) cell_imed_effect_pane_ParamLimits

0xa958,	// (0x00039348) cell_imed_effect_pane

0x22c4,	// (0x00030cb4) cell_imed_colour_pane_ParamLimits

0x22c4,	// (0x00030cb4) cell_imed_colour_pane

0x2306,	// (0x00030cf6) cell_imed_colour_pane_g1_ParamLimits

0x2306,	// (0x00030cf6) cell_imed_colour_pane_g1

0x2317,	// (0x00030d07) hgihlgiht_grid_pane_cp016_ParamLimits

0x2317,	// (0x00030d07) hgihlgiht_grid_pane_cp016

0xa970,	// (0x00039360) cell_imed_effect_pane_g1

0xa978,	// (0x00039368) grid_highlight_pane_cp017

0x0475,	// (0x0002ee65) list_imed_single_pane_ParamLimits

0x0475,	// (0x0002ee65) list_imed_single_pane

0xdd8b,	// (0x0003c77b) list_highlight_pane_cp07

0x2328,	// (0x00030d18) list_imed_aspect_pane_comp1_t1

0x1921,	// (0x00030311) bg_tb_trans_pane_cp05

0x234a,	// (0x00030d3a) popup_imed_adjust2_window_g1

0x2371,	// (0x00030d61) popup_imed_adjust2_window_t1

0x2389,	// (0x00030d79) slider_imed_adjust_pane

0x239d,	// (0x00030d8d) slider_imed_adjust_pane_g1

0x23ad,	// (0x00030d9d) slider_imed_adjust_pane_g2

0x23bd,	// (0x00030dad) slider_imed_adjust_pane_g3

0x23ce,	// (0x00030dbe) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x0003e238) slider_imed_adjust_pane_g

0xa981,	// (0x00039371) aid_size_cell_clipart2

0xa98d,	// (0x0003937d) grid_imed_clipart_pane

0x23df,	// (0x00030dcf) scroll_pane_cp031

0xa997,	// (0x00039387) cell_imed_clipart_pane_ParamLimits

0xa997,	// (0x00039387) cell_imed_clipart_pane

0xa9be,	// (0x000393ae) cell_imed_clipart_pane_g1

0xdd8b,	// (0x0003c77b) grid_highlight_pane_cp014

0xa6f3,	// (0x000390e3) main_clock2_pane_g1_ParamLimits

0xa6f3,	// (0x000390e3) main_clock2_pane_g1

0xa7e2,	// (0x000391d2) aid_call2_pane_cp10

0xa7f4,	// (0x000391e4) aid_call_pane_cp10

0xef33,	// (0x0003d923) popup_clock_analogue_window_cp10_g1

0xef33,	// (0x0003d923) popup_clock_analogue_window_cp10_g2

0xa806,	// (0x000391f6) popup_clock_analogue_window_cp10_g3

0xa806,	// (0x000391f6) popup_clock_analogue_window_cp10_g4

0xef33,	// (0x0003d923) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0003e226) popup_clock_analogue_window_cp10_g

0xa81c,	// (0x0003920c) popup_clock_analogue_window_cp10_t1

0xa84d,	// (0x0003923d) clock_digital_number_pane_cp10_ParamLimits

0xa84d,	// (0x0003923d) clock_digital_number_pane_cp10

0xa865,	// (0x00039255) clock_digital_number_pane_cp11_ParamLimits

0xa865,	// (0x00039255) clock_digital_number_pane_cp11

0xa87d,	// (0x0003926d) clock_digital_number_pane_cp12_ParamLimits

0xa87d,	// (0x0003926d) clock_digital_number_pane_cp12

0xa895,	// (0x00039285) clock_digital_number_pane_cp13_ParamLimits

0xa895,	// (0x00039285) clock_digital_number_pane_cp13

0xa8ad,	// (0x0003929d) clock_digital_separator_pane_cp10_ParamLimits

0xa8ad,	// (0x0003929d) clock_digital_separator_pane_cp10

0xa8c5,	// (0x000392b5) popup_clock_digital_window_cp02_t1_ParamLimits

0xa8c5,	// (0x000392b5) popup_clock_digital_window_cp02_t1

0xe457,	// (0x0003ce47) clock_digital_number_pane_cp10_g1

0xe457,	// (0x0003ce47) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x0003e241) clock_digital_number_pane_cp10_g

0xe457,	// (0x0003ce47) clock_digital_separator_pane_cp10_g1

0xe457,	// (0x0003ce47) clock_digital_separator_pane_g2_cp10

0xefce,	// (0x0003d9be) navi_pane_vded_g4

0xefd7,	// (0x0003d9c7) navi_pane_vded_g5

0xefe0,	// (0x0003d9d0) navi_pane_vded_t1

0xdd8b,	// (0x0003c77b) main_vded_pane

0xa9c7,	// (0x000393b7) main_vded_pane_g1

0xa9d3,	// (0x000393c3) main_vded_pane_g2

0xa9dd,	// (0x000393cd) main_vded_pane_g3

0x0002,

0xf856,	// (0x0003e246) main_vded_pane_g

0xa9e7,	// (0x000393d7) main_vded_pane_t1

0xa9f5,	// (0x000393e5) main_vded_pane_t2

0x0001,

0xf85d,	// (0x0003e24d) main_vded_pane_t

0xaa03,	// (0x000393f3) vded_slider_pane

0xaa0d,	// (0x000393fd) vded_video_pane

0x23e7,	// (0x00030dd7) vded_video_pane_g1

0xaa17,	// (0x00039407) vded_video_pane_g2

0x1e29,	// (0x00030819) vded_video_pane_g3

0x0002,

0xf862,	// (0x0003e252) vded_video_pane_g

0x23f1,	// (0x00030de1) vded_slider_pane_g1

0x1b36,	// (0x00030526) vded_slider_pane_g2

0x23fa,	// (0x00030dea) vded_slider_pane_g3

0x2403,	// (0x00030df3) vded_slider_pane_g4

0x240c,	// (0x00030dfc) vded_slider_pane_g5

0x0004,

0xf869,	// (0x0003e259) vded_slider_pane_g

0xa4e1,	// (0x00038ed1) mup3_rocker_pane_ParamLimits

0xa4e1,	// (0x00038ed1) mup3_rocker_pane

0xaa20,	// (0x00039410) mup3_control_keys_pane_g1

0xaa28,	// (0x00039418) mup3_control_keys_pane_g2

0xaa30,	// (0x00039420) mup3_control_keys_pane_g3

0xaa38,	// (0x00039428) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0003e264) mup3_control_keys_pane_g

0x68a1,	// (0x00035291) popup_toolbar2_fixed_window_cp01_ParamLimits

0x68a1,	// (0x00035291) popup_toolbar2_fixed_window_cp01

0xa4fb,	// (0x00038eeb) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa4fb,	// (0x00038eeb) popup_toolbar2_fixed_window_cp02

0x0ca9,	// (0x0002f699) popup_call2_audio_second_window_t4_ParamLimits

0x0ca9,	// (0x0002f699) popup_call2_audio_second_window_t4

0x11d7,	// (0x0002fbc7) popup_call2_audio_first_window_t6_ParamLimits

0x11d7,	// (0x0002fbc7) popup_call2_audio_first_window_t6

0x146d,	// (0x0002fe5d) popup_call2_audio_out_window_t6_ParamLimits

0x146d,	// (0x0002fe5d) popup_call2_audio_out_window_t6

0xdd8b,	// (0x0003c77b) main_vitu_pane

0xaa48,	// (0x00039438) aid_size_cell_itu_ParamLimits

0xaa48,	// (0x00039438) aid_size_cell_itu

0x68c9,	// (0x000352b9) bg_popup_window_pane_cp08_ParamLimits

0x68c9,	// (0x000352b9) bg_popup_window_pane_cp08

0xaa56,	// (0x00039446) field_vitu_entry_pane_ParamLimits

0xaa56,	// (0x00039446) field_vitu_entry_pane

0xaa65,	// (0x00039455) grid_vitu_function_pane_ParamLimits

0xaa65,	// (0x00039455) grid_vitu_function_pane

0xaa75,	// (0x00039465) grid_vitu_itu_pane_ParamLimits

0xaa75,	// (0x00039465) grid_vitu_itu_pane

0xaa85,	// (0x00039475) cell_vitu_itu_pane_ParamLimits

0xaa85,	// (0x00039475) cell_vitu_itu_pane

0xaa9a,	// (0x0003948a) cell_vitu_function_pane_ParamLimits

0xaa9a,	// (0x0003948a) cell_vitu_function_pane

0xf115,	// (0x0003db05) bg_popup_sub_pane_cp08_ParamLimits

0xf115,	// (0x0003db05) bg_popup_sub_pane_cp08

0xaaae,	// (0x0003949e) field_vitu_entry_pane_t1_ParamLimits

0xaaae,	// (0x0003949e) field_vitu_entry_pane_t1

0x242d,	// (0x00030e1d) field_vitu_entry_pane_t2_ParamLimits

0x242d,	// (0x00030e1d) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0003e272) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0003e272) field_vitu_entry_pane_t

0x244a,	// (0x00030e3a) bg_button_pane_cp05_ParamLimits

0x244a,	// (0x00030e3a) bg_button_pane_cp05

0xaacb,	// (0x000394bb) cell_vitu_itu_pane_g1

0xaae3,	// (0x000394d3) cell_vitu_itu_pane_t1_ParamLimits

0xaae3,	// (0x000394d3) cell_vitu_itu_pane_t1

0xaaf5,	// (0x000394e5) cell_vitu_itu_pane_t2_ParamLimits

0xaaf5,	// (0x000394e5) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0003e277) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0003e277) cell_vitu_itu_pane_t

0x2458,	// (0x00030e48) bg_button_pane_cp07

0xab2a,	// (0x0003951a) cell_vitu_function_pane_g1

0x6b2b,	// (0x0003551b) main_calc_pane_g1

0x66a4,	// (0x00035094) aid_visual_content_pane

0xdd8b,	// (0x0003c77b) main_vradio_pane

0xab33,	// (0x00039523) main_vradio_pane_g1_ParamLimits

0xab33,	// (0x00039523) main_vradio_pane_g1

0x2462,	// (0x00030e52) main_vradio_pane_g2_ParamLimits

0x2462,	// (0x00030e52) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x0003e27e) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x0003e27e) main_vradio_pane_g

0xab43,	// (0x00039533) main_vradio_pane_t1_ParamLimits

0xab43,	// (0x00039533) main_vradio_pane_t1

0xab55,	// (0x00039545) main_vradio_pane_t2_ParamLimits

0xab55,	// (0x00039545) main_vradio_pane_t2

0x246f,	// (0x00030e5f) main_vradio_pane_t3_ParamLimits

0x246f,	// (0x00030e5f) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0003e283) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0003e283) main_vradio_pane_t

0xab67,	// (0x00039557) vradio_rocker_control_pane_ParamLimits

0xab67,	// (0x00039557) vradio_rocker_control_pane

0xab73,	// (0x00039563) vradio_station_info_pane_ParamLimits

0xab73,	// (0x00039563) vradio_station_info_pane

0x2483,	// (0x00030e73) vradio_frequency_info_pane_ParamLimits

0x2483,	// (0x00030e73) vradio_frequency_info_pane

0x1e29,	// (0x00030819) vradio_station_info_pane_g1

0x2492,	// (0x00030e82) vradio_station_info_pane_t1_ParamLimits

0x2492,	// (0x00030e82) vradio_station_info_pane_t1

0x24b4,	// (0x00030ea4) vradio_station_info_pane_t2_ParamLimits

0x24b4,	// (0x00030ea4) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x0003e28a) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x0003e28a) vradio_station_info_pane_t

0x24c6,	// (0x00030eb6) vradio_tuning_pane

0x24ce,	// (0x00030ebe) vradio_rocker_control_pane_g1

0x24d6,	// (0x00030ec6) vradio_rocker_control_pane_g2

0x24de,	// (0x00030ece) vradio_rocker_control_pane_g3

0x24e6,	// (0x00030ed6) vradio_rocker_control_pane_g4

0x24ee,	// (0x00030ede) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x0003e28f) vradio_rocker_control_pane_g

0xab82,	// (0x00039572) vradio_frequency_info_pane_g1

0x24f6,	// (0x00030ee6) vradio_frequency_info_pane_t1_ParamLimits

0x24f6,	// (0x00030ee6) vradio_frequency_info_pane_t1

0xab8c,	// (0x0003957c) vradio_tuning_pane_g1

0xab95,	// (0x00039585) vradio_tuning_pane_t1

0xddb1,	// (0x0003c7a1) area_side_right_pane_ParamLimits

0xddb1,	// (0x0003c7a1) area_side_right_pane

0x18e8,	// (0x000302d8) status_small_pane_g1

0x18f0,	// (0x000302e0) status_small_pane_g2

0x18f9,	// (0x000302e9) status_small_pane_g3

0x1902,	// (0x000302f2) status_small_pane_g4

0x0003,

0xf65f,	// (0x0003e04f) status_small_pane_g

0x190b,	// (0x000302fb) status_small_pane_t1

0xdd8b,	// (0x0003c77b) main_video3_pane

0x250a,	// (0x00030efa) cams_zoom_vslider_pane

0x2512,	// (0x00030f02) image3_wide_pane_ParamLimits

0x2512,	// (0x00030f02) image3_wide_pane

0x252c,	// (0x00030f1c) image3_wide_small_pane

0x2538,	// (0x00030f28) main_video3_pane_g1_ParamLimits

0x2538,	// (0x00030f28) main_video3_pane_g1

0x2554,	// (0x00030f44) main_video3_pane_g2_ParamLimits

0x2554,	// (0x00030f44) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x0003e29a) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x0003e29a) main_video3_pane_g

0x2570,	// (0x00030f60) main_video3_pane_t1_ParamLimits

0x2570,	// (0x00030f60) main_video3_pane_t1

0x259b,	// (0x00030f8b) main_video3_pane_t2_ParamLimits

0x259b,	// (0x00030f8b) main_video3_pane_t2

0x25c6,	// (0x00030fb6) main_video3_pane_t3_ParamLimits

0x25c6,	// (0x00030fb6) main_video3_pane_t3

0x0002,

0xf8af,	// (0x0003e29f) main_video3_pane_t_ParamLimits

0xf8af,	// (0x0003e29f) main_video3_pane_t

0x25f3,	// (0x00030fe3) cams_zoom_vslider_pane_g1

0x25fc,	// (0x00030fec) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x0003e2a6) cams_zoom_vslider_pane_g

0x2604,	// (0x00030ff4) small_slider_vertical_pane

0x1e29,	// (0x00030819) small_slider_vertical_pane_g1

0x1e29,	// (0x00030819) small_slider_vertical_pane_g2

0x260c,	// (0x00030ffc) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x0003e2ab) small_slider_vertical_pane_g

0xdd8b,	// (0x0003c77b) main_hwr_training_pane

0x2615,	// (0x00031005) hwr_training_instruct_pane_ParamLimits

0x2615,	// (0x00031005) hwr_training_instruct_pane

0xaba4,	// (0x00039594) hwr_training_navi_pane_ParamLimits

0xaba4,	// (0x00039594) hwr_training_navi_pane

0xabbe,	// (0x000395ae) hwr_training_write_pane_ParamLimits

0xabbe,	// (0x000395ae) hwr_training_write_pane

0xdd8b,	// (0x0003c77b) bg_frame_shadow_pane

0x264c,	// (0x0003103c) hwr_training_write_pane_g1

0x2654,	// (0x00031044) hwr_training_write_pane_g2

0x265c,	// (0x0003104c) hwr_training_write_pane_g3

0x2664,	// (0x00031054) hwr_training_write_pane_g4

0x266c,	// (0x0003105c) hwr_training_write_pane_g5

0x2674,	// (0x00031064) hwr_training_write_pane_g6

0x267c,	// (0x0003106c) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x0003e2b2) hwr_training_write_pane_g

0xabf6,	// (0x000395e6) hwr_training_navi_pane_g1_ParamLimits

0xabf6,	// (0x000395e6) hwr_training_navi_pane_g1

0xac08,	// (0x000395f8) hwr_training_navi_pane_g2_ParamLimits

0xac08,	// (0x000395f8) hwr_training_navi_pane_g2

0xac1a,	// (0x0003960a) hwr_training_navi_pane_g3_ParamLimits

0xac1a,	// (0x0003960a) hwr_training_navi_pane_g3

0xac2a,	// (0x0003961a) hwr_training_navi_pane_g4_ParamLimits

0xac2a,	// (0x0003961a) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x0003e2c1) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x0003e2c1) hwr_training_navi_pane_g

0xac44,	// (0x00039634) hwr_training_navi_pane_t1

0xac52,	// (0x00039642) list_single_hwr_training_instruct_pane_ParamLimits

0xac52,	// (0x00039642) list_single_hwr_training_instruct_pane

0x26d3,	// (0x000310c3) list_single_hwr_training_instruct_pane_t1

0x1d69,	// (0x00030759) bg_frame_shadow_pane_g1

0x26e2,	// (0x000310d2) bg_frame_shadow_pane_g2

0x26ea,	// (0x000310da) bg_frame_shadow_pane_g3

0x26f2,	// (0x000310e2) bg_frame_shadow_pane_g4

0x26fa,	// (0x000310ea) bg_frame_shadow_pane_g5

0x2702,	// (0x000310f2) bg_frame_shadow_pane_g6

0x270a,	// (0x000310fa) bg_frame_shadow_pane_g7

0xe639,	// (0x0003d029) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x0003e2cc) bg_frame_shadow_pane_g

0xdd8b,	// (0x0003c77b) main_video_tele_dialer_pane

0xac88,	// (0x00039678) aid_size_cell_video_keypad_ParamLimits

0xac88,	// (0x00039678) aid_size_cell_video_keypad

0xac98,	// (0x00039688) grid_video_dialer_keypad_pane_ParamLimits

0xac98,	// (0x00039688) grid_video_dialer_keypad_pane

0xaccc,	// (0x000396bc) video_down_pane_cp_ParamLimits

0xaccc,	// (0x000396bc) video_down_pane_cp

0xacf6,	// (0x000396e6) cell_video_dialer_keypad_pane_ParamLimits

0xacf6,	// (0x000396e6) cell_video_dialer_keypad_pane

0x2712,	// (0x00031102) bg_button_pane_cp08_ParamLimits

0x2712,	// (0x00031102) bg_button_pane_cp08

0xad0b,	// (0x000396fb) cell_video_dialer_keypad_pane_g1_ParamLimits

0xad0b,	// (0x000396fb) cell_video_dialer_keypad_pane_g1

0xa4d5,	// (0x00038ec5) mup3_rocker2_pane_ParamLimits

0xa4d5,	// (0x00038ec5) mup3_rocker2_pane

0x1e29,	// (0x00030819) mup3_rocker2_pane_g1

0x945b,	// (0x00037e4b) main_dialer2_pane

0xdd8b,	// (0x0003c77b) main_mp4_pane

0xad4a,	// (0x0003973a) main_mp4_pane_g1_ParamLimits

0xad4a,	// (0x0003973a) main_mp4_pane_g1

0xad58,	// (0x00039748) main_mp4_pane_g2_ParamLimits

0xad58,	// (0x00039748) main_mp4_pane_g2

0xad66,	// (0x00039756) main_mp4_pane_g3_ParamLimits

0xad66,	// (0x00039756) main_mp4_pane_g3

0xadab,	// (0x0003979b) main_mp4_pane_g4_ParamLimits

0xadab,	// (0x0003979b) main_mp4_pane_g4

0xadc5,	// (0x000397b5) main_mp4_pane_g5_ParamLimits

0xadc5,	// (0x000397b5) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x0003e2ec) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x0003e2ec) main_mp4_pane_g

0xadf9,	// (0x000397e9) main_mp4_pane_t1_ParamLimits

0xadf9,	// (0x000397e9) main_mp4_pane_t1

0xae55,	// (0x00039845) main_mp4_pane_t2_ParamLimits

0xae55,	// (0x00039845) main_mp4_pane_t2

0x2830,	// (0x00031220) main_mp4_pane_t3_ParamLimits

0x2830,	// (0x00031220) main_mp4_pane_t3

0xaea7,	// (0x00039897) main_mp4_pane_t4_ParamLimits

0xaea7,	// (0x00039897) main_mp4_pane_t4

0x0003,

0xf909,	// (0x0003e2f9) main_mp4_pane_t_ParamLimits

0xf909,	// (0x0003e2f9) main_mp4_pane_t

0xaeeb,	// (0x000398db) mp4_progress_pane_ParamLimits

0xaeeb,	// (0x000398db) mp4_progress_pane

0xaf35,	// (0x00039925) mp4_rocker_pane_ParamLimits

0xaf35,	// (0x00039925) mp4_rocker_pane

0x2906,	// (0x000312f6) mp4_progress_pane_t1

0x291f,	// (0x0003130f) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0003e302) mp4_progress_pane_t

0x2938,	// (0x00031328) mup_progress_pane_cp04

0x1e29,	// (0x00030819) mp4_rocker_pane_g1

0xaf55,	// (0x00039945) aid_cell_size_keypad2_ParamLimits

0xaf55,	// (0x00039945) aid_cell_size_keypad2

0xaf65,	// (0x00039955) dialer2_ne_pane_ParamLimits

0xaf65,	// (0x00039955) dialer2_ne_pane

0xaf73,	// (0x00039963) grid_dialer2_keypad_pane_ParamLimits

0xaf73,	// (0x00039963) grid_dialer2_keypad_pane

0x33db,	// (0x00031dcb) bg_popup_call_pane_cp07_ParamLimits

0x33db,	// (0x00031dcb) bg_popup_call_pane_cp07

0xaf83,	// (0x00039973) dialer2_ne_pane_t1_ParamLimits

0xaf83,	// (0x00039973) dialer2_ne_pane_t1

0xafa8,	// (0x00039998) cell_dialer2_keypad_pane_ParamLimits

0xafa8,	// (0x00039998) cell_dialer2_keypad_pane

0x2960,	// (0x00031350) bg_button_pane_pane_cp04_ParamLimits

0x2960,	// (0x00031350) bg_button_pane_pane_cp04

0xafbf,	// (0x000399af) cell_dialer2_keypad_pane_g1_ParamLimits

0xafbf,	// (0x000399af) cell_dialer2_keypad_pane_g1

0x74de,	// (0x00035ece) aid_placing_vt_set_content_ParamLimits

0x74de,	// (0x00035ece) aid_placing_vt_set_content

0x74fe,	// (0x00035eee) aid_placing_vt_set_title_ParamLimits

0x74fe,	// (0x00035eee) aid_placing_vt_set_title

0xdd8b,	// (0x0003c77b) main_image3_pane

0xb059,	// (0x00039a49) area_side_right_pane_cp01_ParamLimits

0xb059,	// (0x00039a49) area_side_right_pane_cp01

0x399f,	// (0x0003238f) main_image3_pane_g1_ParamLimits

0x399f,	// (0x0003238f) main_image3_pane_g1

0xb086,	// (0x00039a76) main_image3_pane_g2_ParamLimits

0xb086,	// (0x00039a76) main_image3_pane_g2

0xb09f,	// (0x00039a8f) main_image3_pane_g3_ParamLimits

0xb09f,	// (0x00039a8f) main_image3_pane_g3

0xb0b8,	// (0x00039aa8) main_image3_pane_g4_ParamLimits

0xb0b8,	// (0x00039aa8) main_image3_pane_g4

0x0003,

0xf921,	// (0x0003e311) main_image3_pane_g_ParamLimits

0xf921,	// (0x0003e311) main_image3_pane_g

0xb0d1,	// (0x00039ac1) main_image3_pane_t1_ParamLimits

0xb0d1,	// (0x00039ac1) main_image3_pane_t1

0xb0f6,	// (0x00039ae6) main_image3_pane_t2_ParamLimits

0xb0f6,	// (0x00039ae6) main_image3_pane_t2

0xb115,	// (0x00039b05) main_image3_pane_t3_ParamLimits

0xb115,	// (0x00039b05) main_image3_pane_t3

0x0003,

0xf92a,	// (0x0003e31a) main_image3_pane_t_ParamLimits

0xf92a,	// (0x0003e31a) main_image3_pane_t

0x68c9,	// (0x000352b9) grid_sctrl_middle_pane_cp01_ParamLimits

0x68c9,	// (0x000352b9) grid_sctrl_middle_pane_cp01

0xb176,	// (0x00039b66) cell_sctrl_middle_pane_cp01_ParamLimits

0xb176,	// (0x00039b66) cell_sctrl_middle_pane_cp01

0xb187,	// (0x00039b77) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb187,	// (0x00039b77) cell_sctrl_middle_pane_cp01_g1

0xdd8b,	// (0x0003c77b) main_call4_pane

0xb194,	// (0x00039b84) aid_size_button_call4_ParamLimits

0xb194,	// (0x00039b84) aid_size_button_call4

0xb1c4,	// (0x00039bb4) call4_windows_pane_ParamLimits

0xb1c4,	// (0x00039bb4) call4_windows_pane

0xb1de,	// (0x00039bce) grid_call4_button_pane_ParamLimits

0xb1de,	// (0x00039bce) grid_call4_button_pane

0x299e,	// (0x0003138e) call4_windows_conf_pane

0x29b3,	// (0x000313a3) popup_call4_audio_first_window_ParamLimits

0x29b3,	// (0x000313a3) popup_call4_audio_first_window

0x29ff,	// (0x000313ef) popup_call4_audio_second_window_ParamLimits

0x29ff,	// (0x000313ef) popup_call4_audio_second_window

0x2a13,	// (0x00031403) popup_call4_audio_wait_window_ParamLimits

0x2a13,	// (0x00031403) popup_call4_audio_wait_window

0xb202,	// (0x00039bf2) cell_call4_button_pane_ParamLimits

0xb202,	// (0x00039bf2) cell_call4_button_pane

0xb227,	// (0x00039c17) bg_button_pane_cp09_ParamLimits

0xb227,	// (0x00039c17) bg_button_pane_cp09

0xb233,	// (0x00039c23) cell_call4_button_pane_g1_ParamLimits

0xb233,	// (0x00039c23) cell_call4_button_pane_g1

0xb240,	// (0x00039c30) cell_call4_button_pane_t1_ParamLimits

0xb240,	// (0x00039c30) cell_call4_button_pane_t1

0x2a5b,	// (0x0003144b) popup_call4_audio_conf_window_ParamLimits

0x2a5b,	// (0x0003144b) popup_call4_audio_conf_window

0xa508,	// (0x00038ef8) mup3_progress_pane_t1_ParamLimits

0xa51f,	// (0x00038f0f) mup3_progress_pane_t2_ParamLimits

0x2143,	// (0x00030b33) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x0003e1f3) mup3_progress_pane_t_ParamLimits

0x215a,	// (0x00030b4a) mup_progress_pane_cp03_ParamLimits

0xaa40,	// (0x00039430) mup3_control_keys_pane_g4_copy1

0xaf19,	// (0x00039909) mp4_rocker2_pane_ParamLimits

0xaf19,	// (0x00039909) mp4_rocker2_pane

0x2a77,	// (0x00031467) mp4_rocker2_pane_g1

0x2a6f,	// (0x0003145f) mp4_rocker2_pane_g2

0xb252,	// (0x00039c42) mp4_rocker2_pane_g3

0xb25a,	// (0x00039c4a) mp4_rocker2_pane_g4

0xb262,	// (0x00039c52) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0003e323) mp4_rocker2_pane_g

0xdd8b,	// (0x0003c77b) main_camera4_pane

0xdd8b,	// (0x0003c77b) main_video4_pane

0xaca8,	// (0x00039698) main_video_tele_dialer_pane_t1_ParamLimits

0xaca8,	// (0x00039698) main_video_tele_dialer_pane_t1

0xacba,	// (0x000396aa) main_video_tele_dialer_pane_t2_ParamLimits

0xacba,	// (0x000396aa) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x0003e2dd) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x0003e2dd) main_video_tele_dialer_pane_t

0xb282,	// (0x00039c72) cam4_autofocus_pane_ParamLimits

0xb282,	// (0x00039c72) cam4_autofocus_pane

0xb290,	// (0x00039c80) cam4_image_uncrop_pane_ParamLimits

0xb290,	// (0x00039c80) cam4_image_uncrop_pane

0xb2a7,	// (0x00039c97) cam4_indicators_pane_ParamLimits

0xb2a7,	// (0x00039c97) cam4_indicators_pane

0xb2c3,	// (0x00039cb3) main_camera4_pane_g1_ParamLimits

0xb2c3,	// (0x00039cb3) main_camera4_pane_g1

0xb2cf,	// (0x00039cbf) main_camera4_pane_g2_ParamLimits

0xb2cf,	// (0x00039cbf) main_camera4_pane_g2

0xb2db,	// (0x00039ccb) main_camera4_pane_g3_ParamLimits

0xb2db,	// (0x00039ccb) main_camera4_pane_g3

0xb2e7,	// (0x00039cd7) main_camera4_pane_g4_ParamLimits

0xb2e7,	// (0x00039cd7) main_camera4_pane_g4

0xb2f3,	// (0x00039ce3) main_camera4_pane_g5_ParamLimits

0xb2f3,	// (0x00039ce3) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x0003e32e) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x0003e32e) main_camera4_pane_g

0xb30d,	// (0x00039cfd) main_camera4_pane_t1_ParamLimits

0xb30d,	// (0x00039cfd) main_camera4_pane_t1

0x2090,	// (0x00030a80) bg_tb_trans_pane_cp06

0xb339,	// (0x00039d29) cam4_indicators_pane_g1

0xb346,	// (0x00039d36) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x0003e340) cam4_indicators_pane_g

0xb366,	// (0x00039d56) cam4_indicators_pane_t1

0xb390,	// (0x00039d80) main_video4_pane_g1_ParamLimits

0xb390,	// (0x00039d80) main_video4_pane_g1

0xb39c,	// (0x00039d8c) main_video4_pane_g2_ParamLimits

0xb39c,	// (0x00039d8c) main_video4_pane_g2

0xb3a8,	// (0x00039d98) main_video4_pane_g3_ParamLimits

0xb3a8,	// (0x00039d98) main_video4_pane_g3

0xb3b4,	// (0x00039da4) main_video4_pane_g4_ParamLimits

0xb3b4,	// (0x00039da4) main_video4_pane_g4

0x0004,

0xf957,	// (0x0003e347) main_video4_pane_g_ParamLimits

0xf957,	// (0x0003e347) main_video4_pane_g

0xb3d4,	// (0x00039dc4) vid4_indicators_pane_ParamLimits

0xb3d4,	// (0x00039dc4) vid4_indicators_pane

0xb3f2,	// (0x00039de2) video4_image_uncrop_cif_pane_ParamLimits

0xb3f2,	// (0x00039de2) video4_image_uncrop_cif_pane

0xb401,	// (0x00039df1) video4_image_uncrop_nhd_pane_ParamLimits

0xb401,	// (0x00039df1) video4_image_uncrop_nhd_pane

0xb290,	// (0x00039c80) video4_image_uncrop_vga_pane_ParamLimits

0xb290,	// (0x00039c80) video4_image_uncrop_vga_pane

0xf115,	// (0x0003db05) bg_tb_trans_pane_cp07

0xb339,	// (0x00039d29) vid4_indicators_pane_g1

0xb416,	// (0x00039e06) vid4_indicators_pane_g2

0xb423,	// (0x00039e13) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0003e352) vid4_indicators_pane_g

0xb450,	// (0x00039e40) vid4_indicators_pane_t1

0xb46a,	// (0x00039e5a) cam4_autofocus_pane_g1

0xb472,	// (0x00039e62) cam4_autofocus_pane_g2

0xb47a,	// (0x00039e6a) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x0003e35d) cam4_autofocus_pane_g

0xb482,	// (0x00039e72) cam4_autofocus_pane_g3_copy1

0xacda,	// (0x000396ca) video_down_pane_cp_t1

0xace8,	// (0x000396d8) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x0003e2e2) video_down_pane_cp_t

0x68c9,	// (0x000352b9) popup_vitu2_window_ParamLimits

0x68c9,	// (0x000352b9) popup_vitu2_window

0xb48a,	// (0x00039e7a) aid_size_cell2_itu2_ParamLimits

0xb48a,	// (0x00039e7a) aid_size_cell2_itu2

0xb4ac,	// (0x00039e9c) aid_size_cell_itu2_ParamLimits

0xb4ac,	// (0x00039e9c) aid_size_cell_itu2

0x33db,	// (0x00031dcb) bg_popup_window_pane_cp09_ParamLimits

0x33db,	// (0x00031dcb) bg_popup_window_pane_cp09

0xb4f0,	// (0x00039ee0) field_vitu2_entry_pane_ParamLimits

0xb4f0,	// (0x00039ee0) field_vitu2_entry_pane

0xb510,	// (0x00039f00) grid_vitu2_function_pane_ParamLimits

0xb510,	// (0x00039f00) grid_vitu2_function_pane

0xb554,	// (0x00039f44) grid_vitu2_itu_pane_ParamLimits

0xb554,	// (0x00039f44) grid_vitu2_itu_pane

0xb5ca,	// (0x00039fba) cell_vitu2_itu_pane_ParamLimits

0xb5ca,	// (0x00039fba) cell_vitu2_itu_pane

0xb5df,	// (0x00039fcf) cell_vitu2_function_pane_ParamLimits

0xb5df,	// (0x00039fcf) cell_vitu2_function_pane

0x2acd,	// (0x000314bd) bg_popup_call_pane_cp08_ParamLimits

0x2acd,	// (0x000314bd) bg_popup_call_pane_cp08

0x2ae6,	// (0x000314d6) field_vitu2_entry_pane_g1

0x2af2,	// (0x000314e2) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0003e364) field_vitu2_entry_pane_g

0x5958,	// (0x00034348) field_vitu2_entry_pane_t1_ParamLimits

0x5958,	// (0x00034348) field_vitu2_entry_pane_t1

0x5978,	// (0x00034368) field_vitu2_entry_pane_t2_ParamLimits

0x5978,	// (0x00034368) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x0003e36b) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x0003e36b) field_vitu2_entry_pane_t

0xb620,	// (0x0003a010) bg_button_pane_cp010_ParamLimits

0xb620,	// (0x0003a010) bg_button_pane_cp010

0xb62e,	// (0x0003a01e) cell_vitu2_itu_pane_g1

0xb64c,	// (0x0003a03c) cell_vitu2_itu_pane_t1_ParamLimits

0xb64c,	// (0x0003a03c) cell_vitu2_itu_pane_t1

0x5995,	// (0x00034385) cell_vitu2_itu_pane_t2_ParamLimits

0x5995,	// (0x00034385) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0003e375) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0003e375) cell_vitu2_itu_pane_t

0xf115,	// (0x0003db05) bg_button_pane_cp011

0xb69e,	// (0x0003a08e) cell_vitu2_function_pane_g1

0xdd8b,	// (0x0003c77b) main_myfav_hc_pane

0xb157,	// (0x00039b47) popup_image3_note_pane_ParamLimits

0xb157,	// (0x00039b47) popup_image3_note_pane

0xb165,	// (0x00039b55) popup_image3_tool_bar_pane_ParamLimits

0xb165,	// (0x00039b55) popup_image3_tool_bar_pane

0x5a03,	// (0x000343f3) cell_vitu2_itu_pane_t3_ParamLimits

0x5a03,	// (0x000343f3) cell_vitu2_itu_pane_t3

0xdd8b,	// (0x0003c77b) bg_popup_trans_pane

0x2b5e,	// (0x0003154e) grid_image3_tool_bar_pane

0x2b68,	// (0x00031558) bg_popup_trans_pane_g1

0xe986,	// (0x0003d376) bg_popup_trans_pane_g2

0x2b70,	// (0x00031560) bg_popup_trans_pane_g3

0x2b78,	// (0x00031568) bg_popup_trans_pane_g4

0x2b80,	// (0x00031570) bg_popup_trans_pane_g5

0x2b88,	// (0x00031578) bg_popup_trans_pane_g6

0x2b90,	// (0x00031580) bg_popup_trans_pane_g7

0x2b98,	// (0x00031588) bg_popup_trans_pane_g8

0xe966,	// (0x0003d356) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x0003e37c) bg_popup_trans_pane_g

0x2ba0,	// (0x00031590) cell_image3_tool_bar_pane_ParamLimits

0x2ba0,	// (0x00031590) cell_image3_tool_bar_pane

0x1e29,	// (0x00030819) cell_image3_tool_bar_pane_g1

0xdd8b,	// (0x0003c77b) bg_popup_trans_pane_cp1

0x2bb4,	// (0x000315a4) popup_image3_note_pane_t1

0x2bc2,	// (0x000315b2) popup_image3_note_pane_t2

0x2bd0,	// (0x000315c0) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x0003e38f) popup_image3_note_pane_t

0x2bde,	// (0x000315ce) popup_image3_note_pane_t3_copy1

0xb6b2,	// (0x0003a0a2) bg_myfav_hc_instruction_pane_ParamLimits

0xb6b2,	// (0x0003a0a2) bg_myfav_hc_instruction_pane

0xb6ca,	// (0x0003a0ba) cell_myfav_contact_pane_ParamLimits

0xb6ca,	// (0x0003a0ba) cell_myfav_contact_pane

0xb6e4,	// (0x0003a0d4) cell_myfav_contact_pane_cp1_ParamLimits

0xb6e4,	// (0x0003a0d4) cell_myfav_contact_pane_cp1

0xb6fc,	// (0x0003a0ec) cell_myfav_contact_pane_cp2_ParamLimits

0xb6fc,	// (0x0003a0ec) cell_myfav_contact_pane_cp2

0xb714,	// (0x0003a104) cell_myfav_contact_pane_cp3_ParamLimits

0xb714,	// (0x0003a104) cell_myfav_contact_pane_cp3

0xb72b,	// (0x0003a11b) cell_myfav_contact_pane_cp4_ParamLimits

0xb72b,	// (0x0003a11b) cell_myfav_contact_pane_cp4

0xb741,	// (0x0003a131) cell_myfav_contact_pane_cp5_ParamLimits

0xb741,	// (0x0003a131) cell_myfav_contact_pane_cp5

0xb755,	// (0x0003a145) cell_myfav_contact_pane_cp6_ParamLimits

0xb755,	// (0x0003a145) cell_myfav_contact_pane_cp6

0xb769,	// (0x0003a159) cell_myfav_contact_pane_cp7_ParamLimits

0xb769,	// (0x0003a159) cell_myfav_contact_pane_cp7

0x2bec,	// (0x000315dc) listscroll_gen_pane_cp05

0xb781,	// (0x0003a171) main_myfav_hc_pane_g1_ParamLimits

0xb781,	// (0x0003a171) main_myfav_hc_pane_g1

0xb799,	// (0x0003a189) main_myfav_hc_pane_g2_ParamLimits

0xb799,	// (0x0003a189) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0003e396) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0003e396) main_myfav_hc_pane_g

0xb7c9,	// (0x0003a1b9) main_myfav_hc_pane_t1_ParamLimits

0xb7c9,	// (0x0003a1b9) main_myfav_hc_pane_t1

0x2bf5,	// (0x000315e5) main_myfav_hc_pane_t2_ParamLimits

0x2bf5,	// (0x000315e5) main_myfav_hc_pane_t2

0x2c07,	// (0x000315f7) main_myfav_hc_pane_t3_ParamLimits

0x2c07,	// (0x000315f7) main_myfav_hc_pane_t3

0xb7e0,	// (0x0003a1d0) main_myfav_hc_pane_t4_ParamLimits

0xb7e0,	// (0x0003a1d0) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x0003e39d) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x0003e39d) main_myfav_hc_pane_t

0x1e29,	// (0x00030819) bg_myfav_hc_instruction_pane_g1

0x2c19,	// (0x00031609) cell_myfav_contact_pane_g1_ParamLimits

0x2c19,	// (0x00031609) cell_myfav_contact_pane_g1

0x2c19,	// (0x00031609) cell_myfav_contact_pane_g2_ParamLimits

0x2c19,	// (0x00031609) cell_myfav_contact_pane_g2

0x2c25,	// (0x00031615) cell_myfav_contact_pane_g3_ParamLimits

0x2c25,	// (0x00031615) cell_myfav_contact_pane_g3

0x212d,	// (0x00030b1d) cell_myfav_contact_pane_g4_ParamLimits

0x212d,	// (0x00030b1d) cell_myfav_contact_pane_g4

0x2c32,	// (0x00031622) cell_myfav_contact_pane_g5_ParamLimits

0x2c32,	// (0x00031622) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x0003e3a8) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x0003e3a8) cell_myfav_contact_pane_g

0xb7b1,	// (0x0003a1a1) main_myfav_hc_pane_g3_ParamLimits

0xb7b1,	// (0x0003a1a1) main_myfav_hc_pane_g3

0x67e5,	// (0x000351d5) popup_adpt_find_window

0xb80a,	// (0x0003a1fa) afind_page_pane_ParamLimits

0xb80a,	// (0x0003a1fa) afind_page_pane

0xb817,	// (0x0003a207) aid_size_cell_afind_ParamLimits

0xb817,	// (0x0003a207) aid_size_cell_afind

0xb831,	// (0x0003a221) bg_popup_sub_pane_cp09_ParamLimits

0xb831,	// (0x0003a221) bg_popup_sub_pane_cp09

0xb83e,	// (0x0003a22e) find_pane_cp01_ParamLimits

0xb83e,	// (0x0003a22e) find_pane_cp01

0x2c3e,	// (0x0003162e) grid_afind_control_pane_ParamLimits

0x2c3e,	// (0x0003162e) grid_afind_control_pane

0xb84b,	// (0x0003a23b) grid_afind_pane_ParamLimits

0xb84b,	// (0x0003a23b) grid_afind_pane

0xb867,	// (0x0003a257) cell_afind_pane_ParamLimits

0xb867,	// (0x0003a257) cell_afind_pane

0x1e29,	// (0x00030819) afind_page_pane_g1

0xb8af,	// (0x0003a29f) afind_page_pane_g2

0xb8b8,	// (0x0003a2a8) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x0003e3b3) afind_page_pane_g

0xb8c1,	// (0x0003a2b1) afind_page_pane_t1

0x2c52,	// (0x00031642) cell_afind_grid_control_pane_ParamLimits

0x2c52,	// (0x00031642) cell_afind_grid_control_pane

0x2960,	// (0x00031350) bg_button_pane_cp69_ParamLimits

0x2960,	// (0x00031350) bg_button_pane_cp69

0xb8d8,	// (0x0003a2c8) cell_afind_pane_g1_ParamLimits

0xb8d8,	// (0x0003a2c8) cell_afind_pane_g1

0xb8e5,	// (0x0003a2d5) cell_afind_pane_t1_ParamLimits

0xb8e5,	// (0x0003a2d5) cell_afind_pane_t1

0xe779,	// (0x0003d169) bg_button_pane_cp72

0x2c61,	// (0x00031651) cell_afind_grid_control_pane_g1

0x8fce,	// (0x000379be) aid_image_placing_area_ParamLimits

0x8fce,	// (0x000379be) aid_image_placing_area

0x2415,	// (0x00030e05) field_vitu_entry_pane_g1_ParamLimits

0x2415,	// (0x00030e05) field_vitu_entry_pane_g1

0x2421,	// (0x00030e11) field_vitu_entry_pane_g2_ParamLimits

0x2421,	// (0x00030e11) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x0003e26d) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x0003e26d) field_vitu_entry_pane_g

0xaacb,	// (0x000394bb) cell_vitu_itu_pane_g1_ParamLimits

0xab0d,	// (0x000394fd) cell_vitu_itu_pane_t3_ParamLimits

0xab0d,	// (0x000394fd) cell_vitu_itu_pane_t3

0x2906,	// (0x000312f6) mp4_progress_pane_t1_ParamLimits

0x291f,	// (0x0003130f) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0003e302) mp4_progress_pane_t_ParamLimits

0x2938,	// (0x00031328) mup_progress_pane_cp04_ParamLimits

0xb7f4,	// (0x0003a1e4) main_myfav_hc_pane_t5_ParamLimits

0xb7f4,	// (0x0003a1e4) main_myfav_hc_pane_t5

0xdda9,	// (0x0003c799) aid_zoom_text_primary

0x67e5,	// (0x000351d5) popup_adpt_find_window_ParamLimits

0xf115,	// (0x0003db05) main_cam_set_pane

0xb2b5,	// (0x00039ca5) cam4_zoom_pane_ParamLimits

0xb2b5,	// (0x00039ca5) cam4_zoom_pane

0xb8f7,	// (0x0003a2e7) main_cam_set_pane_g1_ParamLimits

0xb8f7,	// (0x0003a2e7) main_cam_set_pane_g1

0xb905,	// (0x0003a2f5) main_cam_set_pane_g2_ParamLimits

0xb905,	// (0x0003a2f5) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x0003e3ba) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x0003e3ba) main_cam_set_pane_g

0xb911,	// (0x0003a301) main_cam_set_pane_t1_ParamLimits

0xb911,	// (0x0003a301) main_cam_set_pane_t1

0xb92d,	// (0x0003a31d) main_cset_listscroll_pane_ParamLimits

0xb92d,	// (0x0003a31d) main_cset_listscroll_pane

0xb95a,	// (0x0003a34a) main_cset_slider_pane_ParamLimits

0xb95a,	// (0x0003a34a) main_cset_slider_pane

0x2c72,	// (0x00031662) main_cset_list_pane_ParamLimits

0x2c72,	// (0x00031662) main_cset_list_pane

0x2c82,	// (0x00031672) scroll_pane_cp028

0xb979,	// (0x0003a369) aid_area_touch_slider

0xb995,	// (0x0003a385) cset_slider_pane

0xb9bf,	// (0x0003a3af) main_cset_slider_pane_g1

0xb9d4,	// (0x0003a3c4) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x0003e3bf) main_cset_slider_pane_g

0x2cbb,	// (0x000316ab) main_cset_slider_pane_t1

0xba9c,	// (0x0003a48c) main_cset_slider_pane_t2

0xbab6,	// (0x0003a4a6) main_cset_slider_pane_t3

0xbad0,	// (0x0003a4c0) main_cset_slider_pane_t4

0xbaee,	// (0x0003a4de) main_cset_slider_pane_t5

0xbb10,	// (0x0003a500) main_cset_slider_pane_t6

0xbb27,	// (0x0003a517) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x0003e3e4) main_cset_slider_pane_t

0xbc35,	// (0x0003a625) cset_list_set_pane_ParamLimits

0xbc35,	// (0x0003a625) cset_list_set_pane

0xbc52,	// (0x0003a642) aid_position_infowindow_above

0xbc5a,	// (0x0003a64a) aid_position_infowindow_below

0x5a50,	// (0x00034440) cset_list_set_pane_g1_ParamLimits

0x5a50,	// (0x00034440) cset_list_set_pane_g1

0x5a5c,	// (0x0003444c) cset_list_set_pane_g3_ParamLimits

0x5a5c,	// (0x0003444c) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0003e403) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0003e403) cset_list_set_pane_g

0x5a6b,	// (0x0003445b) cset_list_set_pane_t1_ParamLimits

0x5a6b,	// (0x0003445b) cset_list_set_pane_t1

0xf115,	// (0x0003db05) list_highlight_pane_cp021_ParamLimits

0xf115,	// (0x0003db05) list_highlight_pane_cp021

0x05e0,	// (0x0002efd0) cset_slider_pane_g1

0x05f2,	// (0x0002efe2) cset_slider_pane_g2

0x05e9,	// (0x0002efd9) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x0003e408) cset_slider_pane_g

0xbc62,	// (0x0003a652) aid_area_touch_cam4_zoom

0xbc6a,	// (0x0003a65a) cam4_zoom_cont_pane

0xbc72,	// (0x0003a662) cam4_zoom_pane_g1

0xbc7a,	// (0x0003a66a) cam4_zoom_pane_g2

0xbc82,	// (0x0003a672) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x0003e40f) cam4_zoom_pane_g

0x374a,	// (0x0003213a) cam4_zoom_cont_pane_g1

0x3753,	// (0x00032143) cam4_zoom_cont_pane_g2

0x375c,	// (0x0003214c) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0003e416) cam4_zoom_cont_pane_g

0xb1ae,	// (0x00039b9e) call4_image_pane_ParamLimits

0xb1ae,	// (0x00039b9e) call4_image_pane

0x299e,	// (0x0003138e) call4_windows_conf_pane_ParamLimits

0x29dd,	// (0x000313cd) popup_call4_audio_in_window_ParamLimits

0x29dd,	// (0x000313cd) popup_call4_audio_in_window

0xdd8b,	// (0x0003c77b) bg_popup_call2_act_pane_cp02

0x2a53,	// (0x00031443) call4_list_conf_pane

0x1e29,	// (0x00030819) call4_image_pane_g1

0x1e29,	// (0x00030819) call4_image_pane_g2

0x0001,

0xf743,	// (0x0003e133) call4_image_pane_g

0x2d96,	// (0x00031786) list_single_graphic_popup_conf4_pane_ParamLimits

0x2d96,	// (0x00031786) list_single_graphic_popup_conf4_pane

0xdd8b,	// (0x0003c77b) list_highlight_pane_cp022

0x2da9,	// (0x00031799) list_single_graphic_popup_conf4_pane_g1

0xee25,	// (0x0003d815) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x0003e41d) list_single_graphic_popup_conf4_pane_g

0x2db1,	// (0x000317a1) list_single_graphic_popup_conf4_pane_t1

0x7607,	// (0x00035ff7) popup_vtel_slider_window_ParamLimits

0x7607,	// (0x00035ff7) popup_vtel_slider_window

0x294e,	// (0x0003133e) dialer2_ne_pane_t2_ParamLimits

0x294e,	// (0x0003133e) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0003e307) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0003e307) dialer2_ne_pane_t

0xf115,	// (0x0003db05) bg_popup_sub_pane_cp010_ParamLimits

0xf115,	// (0x0003db05) bg_popup_sub_pane_cp010

0xbc8a,	// (0x0003a67a) popup_vtel_slider_window_g1_ParamLimits

0xbc8a,	// (0x0003a67a) popup_vtel_slider_window_g1

0xbc96,	// (0x0003a686) popup_vtel_slider_window_g2_ParamLimits

0xbc96,	// (0x0003a686) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0003e422) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0003e422) popup_vtel_slider_window_g

0xbcde,	// (0x0003a6ce) vtel_slider_pane_ParamLimits

0xbcde,	// (0x0003a6ce) vtel_slider_pane

0xbced,	// (0x0003a6dd) vtel_slider_pane_g1_ParamLimits

0xbced,	// (0x0003a6dd) vtel_slider_pane_g1

0xbcfa,	// (0x0003a6ea) vtel_slider_pane_g2_ParamLimits

0xbcfa,	// (0x0003a6ea) vtel_slider_pane_g2

0xbd07,	// (0x0003a6f7) vtel_slider_pane_g3_ParamLimits

0xbd07,	// (0x0003a6f7) vtel_slider_pane_g3

0xbced,	// (0x0003a6dd) vtel_slider_pane_g4_ParamLimits

0xbced,	// (0x0003a6dd) vtel_slider_pane_g4

0xbd14,	// (0x0003a704) vtel_slider_pane_g5_ParamLimits

0xbd14,	// (0x0003a704) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x0003e42b) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x0003e42b) vtel_slider_pane_g

0xdd8b,	// (0x0003c77b) main_gallery2_pane

0xb4d2,	// (0x00039ec2) aid_size_row_itut2_dropdow_list_ParamLimits

0xb4d2,	// (0x00039ec2) aid_size_row_itut2_dropdow_list

0xb532,	// (0x00039f22) grid_vitu2_function_top_pane_ParamLimits

0xb532,	// (0x00039f22) grid_vitu2_function_top_pane

0xb588,	// (0x00039f78) popup_vitu2_dropdown_list_window_ParamLimits

0xb588,	// (0x00039f78) popup_vitu2_dropdown_list_window

0xb5a8,	// (0x00039f98) popup_vitu2_match_list_window

0xbd21,	// (0x0003a711) cell_vitu2_function_top_pane_ParamLimits

0xbd21,	// (0x0003a711) cell_vitu2_function_top_pane

0xbd41,	// (0x0003a731) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbd41,	// (0x0003a731) cell_vitu2_function_top_pane_cp01

0xbd5f,	// (0x0003a74f) cell_vitu2_function_top_wide_pane_ParamLimits

0xbd5f,	// (0x0003a74f) cell_vitu2_function_top_wide_pane

0xf115,	// (0x0003db05) bg_button_pane_cp012

0xbd7d,	// (0x0003a76d) cell_vitu2_function_top_pane_g1

0xbd8c,	// (0x0003a77c) bg_button_pane_cp013_ParamLimits

0xbd8c,	// (0x0003a77c) bg_button_pane_cp013

0xbda8,	// (0x0003a798) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xbda8,	// (0x0003a798) cell_vitu2_function_top_wide_pane_g1

0x68c9,	// (0x000352b9) bg_popup_sub_pane_cp20

0xbdc0,	// (0x0003a7b0) list_vitu2_match_list_pane

0x2b68,	// (0x00031558) bg_popup_sub_pane_cp20_g1

0x2b70,	// (0x00031560) bg_popup_sub_pane_cp20_g2

0xe986,	// (0x0003d376) bg_popup_sub_pane_cp20_g3

0x2b78,	// (0x00031568) bg_popup_sub_pane_cp20_g4

0xe966,	// (0x0003d356) bg_popup_sub_pane_cp20_g5

0x2de9,	// (0x000317d9) bg_popup_sub_pane_cp20_g6

0x2b88,	// (0x00031578) bg_popup_sub_pane_cp20_g7

0x2b90,	// (0x00031580) bg_popup_sub_pane_cp20_g8

0x2b98,	// (0x00031588) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0003e436) bg_popup_sub_pane_cp20_g

0xbdd8,	// (0x0003a7c8) list_vitu2_match_list_item_pane_ParamLimits

0xbdd8,	// (0x0003a7c8) list_vitu2_match_list_item_pane

0xbdea,	// (0x0003a7da) list_vitu2_match_list_item_pane_t1

0xdd8b,	// (0x0003c77b) bg_popup_sub_pane_cp21

0xed2a,	// (0x0003d71a) grid_vitu2_dropdown_list_pane

0xbdf8,	// (0x0003a7e8) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xbdf8,	// (0x0003a7e8) cell_vitu2_dropdown_list_char_pane

0xbe19,	// (0x0003a809) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xbe19,	// (0x0003a809) cell_vitu2_dropdown_list_ctrl_pane

0x2e43,	// (0x00031833) cell_vitu2_dropdown_list_char_pane_g1

0x2e3a,	// (0x0003182a) cell_vitu2_dropdown_list_char_pane_g2

0x2e31,	// (0x00031821) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0003e453) cell_vitu2_dropdown_list_char_pane_g

0xbe45,	// (0x0003a835) cell_vitu2_dropdown_list_char_pane_t1

0xbe53,	// (0x0003a843) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xbe53,	// (0x0003a843) cell_vitu2_dropdown_list_ctrl_pane_g1

0xbe63,	// (0x0003a853) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xbe63,	// (0x0003a853) cell_vitu2_dropdown_list_ctrl_pane_g2

0xbe74,	// (0x0003a864) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xbe74,	// (0x0003a864) cell_vitu2_dropdown_list_ctrl_pane_g3

0xbe84,	// (0x0003a874) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xbe84,	// (0x0003a874) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2090,	// (0x00030a80) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2090,	// (0x00030a80) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x0003e45a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x0003e45a) cell_vitu2_dropdown_list_ctrl_pane_g

0xbea0,	// (0x0003a890) aid_size_cell_gallery2_ParamLimits

0xbea0,	// (0x0003a890) aid_size_cell_gallery2

0xbeae,	// (0x0003a89e) grid_gallery2_pane_ParamLimits

0xbeae,	// (0x0003a89e) grid_gallery2_pane

0xbebd,	// (0x0003a8ad) scroll_pane_cp029_ParamLimits

0xbebd,	// (0x0003a8ad) scroll_pane_cp029

0xbec9,	// (0x0003a8b9) cell_gallery2_pane_ParamLimits

0xbec9,	// (0x0003a8b9) cell_gallery2_pane

0x2e5a,	// (0x0003184a) cell_gallery2_pane_g2

0xbefa,	// (0x0003a8ea) cell_gallery2_pane_g3

0x2e64,	// (0x00031854) cell_gallery2_pane_g4

0x2e6c,	// (0x0003185c) cell_gallery2_pane_g5

0xeffe,	// (0x0003d9ee) grid_highlight_pane_cp10

0xb5a8,	// (0x00039f98) popup_vitu2_match_list_window_ParamLimits

0xb5ba,	// (0x00039faa) popup_vitu2_query_window_ParamLimits

0xb5ba,	// (0x00039faa) popup_vitu2_query_window

0xdd8b,	// (0x0003c77b) bg_vitu2_candi_button_pane

0x2e43,	// (0x00031833) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2e3a,	// (0x0003182a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2e31,	// (0x00031821) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5ad5,	// (0x000344c5) bg_button_pane_cp015

0xbf02,	// (0x0003a8f2) bg_button_pane_cp016

0xbf0c,	// (0x0003a8fc) bg_button_pane_cp017

0xf115,	// (0x0003db05) bg_popup_sub_pane_cp22

0x2e74,	// (0x00031864) popup_vitu2_query_window_g1

0x5aec,	// (0x000344dc) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0003e465) popup_vitu2_query_window_g

0x5afa,	// (0x000344ea) popup_vitu2_query_window_t1_ParamLimits

0x5afa,	// (0x000344ea) popup_vitu2_query_window_t1

0x5b22,	// (0x00034512) popup_vitu2_query_window_t2_ParamLimits

0x5b22,	// (0x00034512) popup_vitu2_query_window_t2

0x5b34,	// (0x00034524) popup_vitu2_query_window_t3_ParamLimits

0x5b34,	// (0x00034524) popup_vitu2_query_window_t3

0xbf27,	// (0x0003a917) popup_vitu2_query_window_t4_ParamLimits

0xbf27,	// (0x0003a917) popup_vitu2_query_window_t4

0xbf3b,	// (0x0003a92b) popup_vitu2_query_window_t5_ParamLimits

0xbf3b,	// (0x0003a92b) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x0003e46a) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x0003e46a) popup_vitu2_query_window_t

0x2c6a,	// (0x0003165a) main_cset_text_pane

0xb979,	// (0x0003a369) aid_area_touch_slider_ParamLimits

0xb995,	// (0x0003a385) cset_slider_pane_ParamLimits

0xb9bf,	// (0x0003a3af) main_cset_slider_pane_g1_ParamLimits

0xb9d4,	// (0x0003a3c4) main_cset_slider_pane_g2_ParamLimits

0x2c8b,	// (0x0003167b) main_cset_slider_pane_g3_ParamLimits

0x2c8b,	// (0x0003167b) main_cset_slider_pane_g3

0xb9e9,	// (0x0003a3d9) main_cset_slider_pane_g4_ParamLimits

0xb9e9,	// (0x0003a3d9) main_cset_slider_pane_g4

0xb9f8,	// (0x0003a3e8) main_cset_slider_pane_g5_ParamLimits

0xb9f8,	// (0x0003a3e8) main_cset_slider_pane_g5

0xba06,	// (0x0003a3f6) main_cset_slider_pane_g6_ParamLimits

0xba06,	// (0x0003a3f6) main_cset_slider_pane_g6

0xf9cf,	// (0x0003e3bf) main_cset_slider_pane_g_ParamLimits

0x2cbb,	// (0x000316ab) main_cset_slider_pane_t1_ParamLimits

0xba9c,	// (0x0003a48c) main_cset_slider_pane_t2_ParamLimits

0xbab6,	// (0x0003a4a6) main_cset_slider_pane_t3_ParamLimits

0xbad0,	// (0x0003a4c0) main_cset_slider_pane_t4_ParamLimits

0xbaee,	// (0x0003a4de) main_cset_slider_pane_t5_ParamLimits

0xbb10,	// (0x0003a500) main_cset_slider_pane_t6_ParamLimits

0xbb27,	// (0x0003a517) main_cset_slider_pane_t7_ParamLimits

0xbb55,	// (0x0003a545) main_cset_slider_pane_t8_ParamLimits

0xbb55,	// (0x0003a545) main_cset_slider_pane_t8

0xbb7d,	// (0x0003a56d) main_cset_slider_pane_t9_ParamLimits

0xbb7d,	// (0x0003a56d) main_cset_slider_pane_t9

0xbba5,	// (0x0003a595) main_cset_slider_pane_t10_ParamLimits

0xbba5,	// (0x0003a595) main_cset_slider_pane_t10

0xbbcd,	// (0x0003a5bd) main_cset_slider_pane_t11_ParamLimits

0xbbcd,	// (0x0003a5bd) main_cset_slider_pane_t11

0xbbf7,	// (0x0003a5e7) main_cset_slider_pane_t12_ParamLimits

0xbbf7,	// (0x0003a5e7) main_cset_slider_pane_t12

0xbc16,	// (0x0003a606) main_cset_slider_pane_t13_ParamLimits

0xbc16,	// (0x0003a606) main_cset_slider_pane_t13

0xf9f4,	// (0x0003e3e4) main_cset_slider_pane_t_ParamLimits

0xdd8b,	// (0x0003c77b) bg_popup_sub_pane_cp011

0x2e80,	// (0x00031870) main_cset_text_pane_g1

0x2e88,	// (0x00031878) main_cset_text_pane_t1

0x2e96,	// (0x00031886) main_cset_text_pane_t2

0x2ea4,	// (0x00031894) main_cset_text_pane_t3

0x2eb2,	// (0x000318a2) main_cset_text_pane_t4

0x2ec0,	// (0x000318b0) main_cset_text_pane_t5

0x2ece,	// (0x000318be) main_cset_text_pane_t6

0x2edc,	// (0x000318cc) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0003e475) main_cset_text_pane_t

0xdd8b,	// (0x0003c77b) main_cam4_burst_pane

0xdd8b,	// (0x0003c77b) main_cam5_pane

0xea7f,	// (0x0003d46f) bg_button_pane_cp019

0xb8cf,	// (0x0003a2bf) bg_button_pane_cp020

0x2c97,	// (0x00031687) main_cset_slider_pane_g7_ParamLimits

0x2c97,	// (0x00031687) main_cset_slider_pane_g7

0x2ca3,	// (0x00031693) main_cset_slider_pane_g8_ParamLimits

0x2ca3,	// (0x00031693) main_cset_slider_pane_g8

0xba1c,	// (0x0003a40c) main_cset_slider_pane_g9_ParamLimits

0xba1c,	// (0x0003a40c) main_cset_slider_pane_g9

0xba28,	// (0x0003a418) main_cset_slider_pane_g10_ParamLimits

0xba28,	// (0x0003a418) main_cset_slider_pane_g10

0xba34,	// (0x0003a424) main_cset_slider_pane_g11_ParamLimits

0xba34,	// (0x0003a424) main_cset_slider_pane_g11

0xba40,	// (0x0003a430) main_cset_slider_pane_g12_ParamLimits

0xba40,	// (0x0003a430) main_cset_slider_pane_g12

0xba4c,	// (0x0003a43c) main_cset_slider_pane_g13_ParamLimits

0xba4c,	// (0x0003a43c) main_cset_slider_pane_g13

0xba5a,	// (0x0003a44a) main_cset_slider_pane_g14_ParamLimits

0xba5a,	// (0x0003a44a) main_cset_slider_pane_g14

0xba68,	// (0x0003a458) main_cset_slider_pane_g15_ParamLimits

0xba68,	// (0x0003a458) main_cset_slider_pane_g15

0x2ce9,	// (0x000316d9) main_cset_slider_pane_t14_ParamLimits

0x2ce9,	// (0x000316d9) main_cset_slider_pane_t14

0x2d22,	// (0x00031712) main_cset_slider_pane_t15_ParamLimits

0x2d22,	// (0x00031712) main_cset_slider_pane_t15

0xbf4f,	// (0x0003a93f) aid_cam4_burst_size_cell_ParamLimits

0xbf4f,	// (0x0003a93f) aid_cam4_burst_size_cell

0xbf6b,	// (0x0003a95b) grid_cam4_burst_pane_ParamLimits

0xbf6b,	// (0x0003a95b) grid_cam4_burst_pane

0xbf9b,	// (0x0003a98b) linegrid_cam4_burst_pane_ParamLimits

0xbf9b,	// (0x0003a98b) linegrid_cam4_burst_pane

0xbfbd,	// (0x0003a9ad) scroll_pane_cp30_ParamLimits

0xbfbd,	// (0x0003a9ad) scroll_pane_cp30

0xbfc9,	// (0x0003a9b9) cell_cam4_burst_pane_ParamLimits

0xbfc9,	// (0x0003a9b9) cell_cam4_burst_pane

0x2eea,	// (0x000318da) linegrid_cam4_burst_pane_g1_ParamLimits

0x2eea,	// (0x000318da) linegrid_cam4_burst_pane_g1

0xc005,	// (0x0003a9f5) linegrid_cam4_burst_pane_g2_ParamLimits

0xc005,	// (0x0003a9f5) linegrid_cam4_burst_pane_g2

0x2ef7,	// (0x000318e7) linegrid_cam4_burst_pane_g3_ParamLimits

0x2ef7,	// (0x000318e7) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0003e484) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0003e484) linegrid_cam4_burst_pane_g

0xc016,	// (0x0003aa06) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc016,	// (0x0003aa06) linegrid_cam4_burst_pane_g3_copy1

0x2f04,	// (0x000318f4) linegrid_cam4_burst_pane_g4_ParamLimits

0x2f04,	// (0x000318f4) linegrid_cam4_burst_pane_g4

0xc030,	// (0x0003aa20) linegrid_cam4_burst_pane_g5_ParamLimits

0xc030,	// (0x0003aa20) linegrid_cam4_burst_pane_g5

0xc041,	// (0x0003aa31) linegrid_cam4_burst_pane_g6_ParamLimits

0xc041,	// (0x0003aa31) linegrid_cam4_burst_pane_g6

0x2f11,	// (0x00031901) linegrid_cam4_burst_pane_g7_ParamLimits

0x2f11,	// (0x00031901) linegrid_cam4_burst_pane_g7

0xc052,	// (0x0003aa42) cell_cam4_burst_pane_g1

0x2f2a,	// (0x0003191a) main_cam5_pane_t1_ParamLimits

0x2f2a,	// (0x0003191a) main_cam5_pane_t1

0x2f3c,	// (0x0003192c) main_cam5_pane_t2_ParamLimits

0x2f3c,	// (0x0003192c) main_cam5_pane_t2

0x2f4e,	// (0x0003193e) main_cam5_pane_t3_ParamLimits

0x2f4e,	// (0x0003193e) main_cam5_pane_t3

0x2f60,	// (0x00031950) main_cam5_pane_t4_ParamLimits

0x2f60,	// (0x00031950) main_cam5_pane_t4

0x2f76,	// (0x00031966) main_cam5_pane_t5_ParamLimits

0x2f76,	// (0x00031966) main_cam5_pane_t5

0x2f88,	// (0x00031978) main_cam5_pane_t6_ParamLimits

0x2f88,	// (0x00031978) main_cam5_pane_t6

0x2f9c,	// (0x0003198c) main_cam5_pane_t7_ParamLimits

0x2f9c,	// (0x0003198c) main_cam5_pane_t7

0x2fae,	// (0x0003199e) main_cam5_pane_t8_ParamLimits

0x2fae,	// (0x0003199e) main_cam5_pane_t8

0x2fca,	// (0x000319ba) main_cam5_pane_t9_ParamLimits

0x2fca,	// (0x000319ba) main_cam5_pane_t9

0x2fdc,	// (0x000319cc) main_cam5_pane_t10_ParamLimits

0x2fdc,	// (0x000319cc) main_cam5_pane_t10

0x2fee,	// (0x000319de) main_cam5_pane_t11_ParamLimits

0x2fee,	// (0x000319de) main_cam5_pane_t11

0x3000,	// (0x000319f0) main_cam5_pane_t12_ParamLimits

0x3000,	// (0x000319f0) main_cam5_pane_t12

0x3015,	// (0x00031a05) main_cam5_pane_t13_ParamLimits

0x3015,	// (0x00031a05) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x0003e490) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x0003e490) main_cam5_pane_t

0x6892,	// (0x00035282) popup_scut_keymap_window_ParamLimits

0x6892,	// (0x00035282) popup_scut_keymap_window

0xc065,	// (0x0003aa55) aid_size_cell_brow_shortcut

0xeffe,	// (0x0003d9ee) bg_popup_window_pane_cp010

0xc071,	// (0x0003aa61) grid_scut_pane

0xc07d,	// (0x0003aa6d) cell_scut_pane_ParamLimits

0xc07d,	// (0x0003aa6d) cell_scut_pane

0xc094,	// (0x0003aa84) cell_scut_pane_g1

0x3032,	// (0x00031a22) cell_scut_pane_t1

0x3041,	// (0x00031a31) cell_scut_pane_t2

0xc09d,	// (0x0003aa8d) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x0003e4ab) cell_scut_pane_t

0xa14c,	// (0x00038b3c) main_mup3_pane_g8_ParamLimits

0xa14c,	// (0x00038b3c) main_mup3_pane_g8

0xb4e0,	// (0x00039ed0) area_vitu2_query_pane_ParamLimits

0xb4e0,	// (0x00039ed0) area_vitu2_query_pane

0x5adf,	// (0x000344cf) input_focus_pane_cp08

0x3050,	// (0x00031a40) area_vitu2_query_pane_g1

0x5b5c,	// (0x0003454c) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x0003e4b2) area_vitu2_query_pane_g

0xc0ab,	// (0x0003aa9b) area_vitu2_query_pane_t1_ParamLimits

0xc0ab,	// (0x0003aa9b) area_vitu2_query_pane_t1

0xc0bf,	// (0x0003aaaf) area_vitu2_query_pane_t2_ParamLimits

0xc0bf,	// (0x0003aaaf) area_vitu2_query_pane_t2

0x5b6d,	// (0x0003455d) area_vitu2_query_pane_t3_ParamLimits

0x5b6d,	// (0x0003455d) area_vitu2_query_pane_t3

0x5b95,	// (0x00034585) area_vitu2_query_pane_t4_ParamLimits

0x5b95,	// (0x00034585) area_vitu2_query_pane_t4

0x5bbd,	// (0x000345ad) area_vitu2_query_pane_t5_ParamLimits

0x5bbd,	// (0x000345ad) area_vitu2_query_pane_t5

0x5be5,	// (0x000345d5) area_vitu2_query_pane_t6_ParamLimits

0x5be5,	// (0x000345d5) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x0003e4b7) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x0003e4b7) area_vitu2_query_pane_t

0xc0d3,	// (0x0003aac3) bg_button_pane_cp018

0xc0e1,	// (0x0003aad1) bg_button_pane_cp021

0x5c31,	// (0x00034621) bg_button_pane_cp022

0x5c42,	// (0x00034632) input_focus_pane_cp09

0x86cf,	// (0x000370bf) aid_size_touch_mv_arrow_left

0x86fa,	// (0x000370ea) aid_size_touch_mv_arrow_right

0xba80,	// (0x0003a470) main_cset_slider_pane_g16_ParamLimits

0xba80,	// (0x0003a470) main_cset_slider_pane_g16

0xba8e,	// (0x0003a47e) main_cset_slider_pane_g17_ParamLimits

0xba8e,	// (0x0003a47e) main_cset_slider_pane_g17

0xc052,	// (0x0003aa42) cell_cam4_burst_pane_g1_ParamLimits

0xdd8b,	// (0x0003c77b) compa_mode_pane

0xbca2,	// (0x0003a692) popup_vtel_slider_window_g3_ParamLimits

0xbca2,	// (0x0003a692) popup_vtel_slider_window_g3

0xbcb6,	// (0x0003a6a6) popup_vtel_slider_window_g4_ParamLimits

0xbcb6,	// (0x0003a6a6) popup_vtel_slider_window_g4

0xbcca,	// (0x0003a6ba) popup_vtel_slider_window_t1_ParamLimits

0xbcca,	// (0x0003a6ba) popup_vtel_slider_window_t1

0xdd8b,	// (0x0003c77b) main_cl_pane

0x1949,	// (0x00030339) popup_imed_adjust2_window_ParamLimits

0x1921,	// (0x00030311) bg_tb_trans_pane_cp05_ParamLimits

0x234a,	// (0x00030d3a) popup_imed_adjust2_window_g1_ParamLimits

0x2359,	// (0x00030d49) popup_imed_adjust2_window_g2_ParamLimits

0x2359,	// (0x00030d49) popup_imed_adjust2_window_g2

0x2365,	// (0x00030d55) popup_imed_adjust2_window_g3_ParamLimits

0x2365,	// (0x00030d55) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x0003e231) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x0003e231) popup_imed_adjust2_window_g

0x2371,	// (0x00030d61) popup_imed_adjust2_window_t1_ParamLimits

0x2389,	// (0x00030d79) slider_imed_adjust_pane_ParamLimits

0x239d,	// (0x00030d8d) slider_imed_adjust_pane_g1_ParamLimits

0x23ad,	// (0x00030d9d) slider_imed_adjust_pane_g2_ParamLimits

0x23bd,	// (0x00030dad) slider_imed_adjust_pane_g3_ParamLimits

0x23ce,	// (0x00030dbe) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x0003e238) slider_imed_adjust_pane_g_ParamLimits

0xb26a,	// (0x00039c5a) aid_touch_area_cam4_ParamLimits

0xb26a,	// (0x00039c5a) aid_touch_area_cam4

0xb27a,	// (0x00039c6a) battery_pane_cp01

0xb301,	// (0x00039cf1) main_camera4_pane_g6_ParamLimits

0xb301,	// (0x00039cf1) main_camera4_pane_g6

0xb31f,	// (0x00039d0f) main_camera4_pane_t2_ParamLimits

0xb31f,	// (0x00039d0f) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x0003e33b) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x0003e33b) main_camera4_pane_t

0xb380,	// (0x00039d70) aid_touch_area_vid4_ParamLimits

0xb380,	// (0x00039d70) aid_touch_area_vid4

0xb3c0,	// (0x00039db0) main_video4_pane_g5_ParamLimits

0xb3c0,	// (0x00039db0) main_video4_pane_g5

0xb3e2,	// (0x00039dd2) vid4_progress_pane_ParamLimits

0xb3e2,	// (0x00039dd2) vid4_progress_pane

0x2caf,	// (0x0003169f) main_cset_slider_pane_g18_ParamLimits

0x2caf,	// (0x0003169f) main_cset_slider_pane_g18

0x2f1e,	// (0x0003190e) cell_cam4_burst_pane_g2_ParamLimits

0x2f1e,	// (0x0003190e) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x0003e48b) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x0003e48b) cell_cam4_burst_pane_g

0xc0ed,	// (0x0003aadd) bg_cl_pane_ParamLimits

0xc0ed,	// (0x0003aadd) bg_cl_pane

0xc0f9,	// (0x0003aae9) cl_header_pane_ParamLimits

0xc0f9,	// (0x0003aae9) cl_header_pane

0xc105,	// (0x0003aaf5) cl_listscroll_pane_ParamLimits

0xc105,	// (0x0003aaf5) cl_listscroll_pane

0x30f8,	// (0x00031ae8) bg_cl_pane_g1

0x3100,	// (0x00031af0) bg_cl_pane_g2

0x3108,	// (0x00031af8) bg_cl_pane_g3

0x3110,	// (0x00031b00) bg_cl_pane_g4

0x3118,	// (0x00031b08) bg_cl_pane_g5

0x3120,	// (0x00031b10) bg_cl_pane_g6

0x3128,	// (0x00031b18) bg_cl_pane_g7

0x3130,	// (0x00031b20) bg_cl_pane_g8

0x3138,	// (0x00031b28) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0003e4c6) bg_cl_pane_g

0xc111,	// (0x0003ab01) aid_height_cl_leading_ParamLimits

0xc111,	// (0x0003ab01) aid_height_cl_leading

0xc11d,	// (0x0003ab0d) aid_height_cl_text_ParamLimits

0xc11d,	// (0x0003ab0d) aid_height_cl_text

0x68c9,	// (0x000352b9) bg_cl_header_pane_ParamLimits

0x68c9,	// (0x000352b9) bg_cl_header_pane

0xc135,	// (0x0003ab25) cl_header_pane_g1_ParamLimits

0xc135,	// (0x0003ab25) cl_header_pane_g1

0xc142,	// (0x0003ab32) cl_header_pane_t1_ParamLimits

0xc142,	// (0x0003ab32) cl_header_pane_t1

0x3140,	// (0x00031b30) cl_list_pane

0x2c82,	// (0x00031672) hc_scroll_pane_cp01

0xe966,	// (0x0003d356) bg_cl_header_pane_g1

0x2b68,	// (0x00031558) bg_cl_header_pane_g2

0xe986,	// (0x0003d376) bg_cl_header_pane_g3

0x2b78,	// (0x00031568) bg_cl_header_pane_g4

0x2b70,	// (0x00031560) bg_cl_header_pane_g5

0x2de9,	// (0x000317d9) bg_cl_header_pane_g6

0x2b90,	// (0x00031580) bg_cl_header_pane_g7

0x2b98,	// (0x00031588) bg_cl_header_pane_g8

0x2b88,	// (0x00031578) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x0003e4d9) bg_cl_header_pane_g

0xc154,	// (0x0003ab44) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc154,	// (0x0003ab44) hc_cl_list_double_graphic_heading_pane

0xc16b,	// (0x0003ab5b) hc_cl_list_single_graphic_pane_ParamLimits

0xc16b,	// (0x0003ab5b) hc_cl_list_single_graphic_pane

0xc18b,	// (0x0003ab7b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc18b,	// (0x0003ab7b) hc_cl_list_single_graphic_pane_g1

0xc197,	// (0x0003ab87) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc197,	// (0x0003ab87) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x0003e4ec) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x0003e4ec) hc_cl_list_single_graphic_pane_g

0xc1ab,	// (0x0003ab9b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc1ab,	// (0x0003ab9b) hc_cl_list_single_graphic_pane_t1

0xc18b,	// (0x0003ab7b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc18b,	// (0x0003ab7b) hc_cl_list_double_graphic_heading_pane_g1

0xc1c0,	// (0x0003abb0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc1c0,	// (0x0003abb0) hc_cl_list_double_graphic_heading_pane_g2

0xc1d4,	// (0x0003abc4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc1d4,	// (0x0003abc4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0003e4f1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0003e4f1) hc_cl_list_double_graphic_heading_pane_g

0xc1e8,	// (0x0003abd8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc1e8,	// (0x0003abd8) hc_cl_list_double_graphic_heading_pane_t1

0xc1fd,	// (0x0003abed) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc1fd,	// (0x0003abed) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x0003e4f8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x0003e4f8) hc_cl_list_double_graphic_heading_pane_t

0xc222,	// (0x0003ac12) vid4_progress_pane_g1

0xc22e,	// (0x0003ac1e) vid4_progress_pane_g2

0xc23a,	// (0x0003ac2a) vid4_progress_pane_g3

0xc249,	// (0x0003ac39) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x0003e4fd) vid4_progress_pane_g

0xc267,	// (0x0003ac57) vid4_progress_pane_t1

0xc27d,	// (0x0003ac6d) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x0003e508) vid4_progress_pane_t

0xc2a8,	// (0x0003ac98) wait_bar_pane_cp07

0x1c1a,	// (0x0003060a) blid_firmament_pane_ParamLimits

0x1c5d,	// (0x0003064d) popup_blid_sat_info2_window_g1

0x1c81,	// (0x00030671) popup_blid_sat_info2_window_t3

0x1c8f,	// (0x0003067f) popup_blid_sat_info2_window_t4

0x1c9d,	// (0x0003068d) popup_blid_sat_info2_window_t5

0x1cab,	// (0x0003069b) popup_blid_sat_info2_window_t6

0x1cbb,	// (0x000306ab) popup_blid_sat_info2_window_t7

0x1cc9,	// (0x000306b9) popup_blid_sat_info2_window_t8

0x1cd7,	// (0x000306c7) popup_blid_sat_info2_window_t9

0x1ce5,	// (0x000306d5) popup_blid_sat_info2_window_t10

0x1da9,	// (0x00030799) aid_firma_cardinal_ParamLimits

0x1dbd,	// (0x000307ad) blid_firmament_pane_t1_ParamLimits

0x1dd4,	// (0x000307c4) blid_firmament_pane_t2_ParamLimits

0x1deb,	// (0x000307db) blid_firmament_pane_t3_ParamLimits

0x1e02,	// (0x000307f2) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x0003e12a) blid_firmament_pane_t_ParamLimits

0x1e19,	// (0x00030809) blid_sat_info_pane_ParamLimits

0xf115,	// (0x0003db05) main_cam_set_pane_ParamLimits

0xa8e5,	// (0x000392d5) aid_size_cell_colour_35_ParamLimits

0xa8ff,	// (0x000392ef) aid_size_cell_colour_112_ParamLimits

0xa916,	// (0x00039306) aid_size_cell_effect_ParamLimits

0xf115,	// (0x0003db05) bg_tb_trans_pane_cp02_ParamLimits

0x0534,	// (0x0002ef24) heading_imed_pane_ParamLimits

0xa930,	// (0x00039320) listscroll_imed_pane_ParamLimits

0x0f53,	// (0x0002f943) popup_call2_audio_first_window_g5_ParamLimits

0x0f53,	// (0x0002f943) popup_call2_audio_first_window_g5

0xb027,	// (0x00039a17) aid_size_touch_image3_arrow_left_ParamLimits

0xb027,	// (0x00039a17) aid_size_touch_image3_arrow_left

0xb03d,	// (0x00039a2d) aid_size_touch_image3_arrow_right_ParamLimits

0xb03d,	// (0x00039a2d) aid_size_touch_image3_arrow_right

0xc293,	// (0x0003ac83) vid4_progress_pane_t3

0xabd6,	// (0x000395c6) main_hwr_training_symbol_option_pane_ParamLimits

0xabd6,	// (0x000395c6) main_hwr_training_symbol_option_pane

0x2637,	// (0x00031027) popup_hwr_training_preview_window_ParamLimits

0x2637,	// (0x00031027) popup_hwr_training_preview_window

0xac37,	// (0x00039627) hwr_training_navi_pane_g5_ParamLimits

0xac37,	// (0x00039627) hwr_training_navi_pane_g5

0x2b48,	// (0x00031538) popup_char_count_window

0x68c9,	// (0x000352b9) bg_popup_sub_pane_cp20_ParamLimits

0xbdc0,	// (0x0003a7b0) list_vitu2_match_list_pane_ParamLimits

0xbdcc,	// (0x0003a7bc) vitu2_page_scroll_pane_ParamLimits

0xbdcc,	// (0x0003a7bc) vitu2_page_scroll_pane

0x3241,	// (0x00031c31) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3241,	// (0x00031c31) list_single_hwr_training_symbol_option_pane

0x3254,	// (0x00031c44) list_single_hwr_training_symbol_option_pane_g1

0x325c,	// (0x00031c4c) list_single_hwr_training_symbol_option_pane_t1

0x326a,	// (0x00031c5a) bg_button_pane_cp023

0x3273,	// (0x00031c63) bg_button_pane_cp024

0xc2b8,	// (0x0003aca8) vitu2_page_scroll_pane_g1

0xc2c0,	// (0x0003acb0) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x0003e50f) vitu2_page_scroll_pane_g

0xc2c8,	// (0x0003acb8) vitu2_page_scroll_pane_t1

0x1b36,	// (0x00030526) popup_char_count_window_g1

0x32a6,	// (0x00031c96) popup_char_count_window_g2

0x32af,	// (0x00031c9f) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0003e514) popup_char_count_window_g

0x32b8,	// (0x00031ca8) popup_char_count_window_t1

0xdd8b,	// (0x0003c77b) main_vded2_pane

0x2336,	// (0x00030d26) aid_size_cell_imed_line

0x2340,	// (0x00030d30) grid_imed_line_width_pane

0xb434,	// (0x00039e24) vid4_indicators_pane_g4

0x32c6,	// (0x00031cb6) cell_imed_line_width_pane_ParamLimits

0x32c6,	// (0x00031cb6) cell_imed_line_width_pane

0x32da,	// (0x00031cca) cell_imed_line_width_pane_g1

0x1bc8,	// (0x000305b8) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x0003e51b) cell_imed_line_width_pane_g

0xc2d7,	// (0x0003acc7) main_vded2_pane_g1_ParamLimits

0xc2d7,	// (0x0003acc7) main_vded2_pane_g1

0xc2e4,	// (0x0003acd4) main_vded2_pane_g2_ParamLimits

0xc2e4,	// (0x0003acd4) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x0003e520) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x0003e520) main_vded2_pane_g

0xc2f2,	// (0x0003ace2) vded2_slider_pane_ParamLimits

0xc2f2,	// (0x0003ace2) vded2_slider_pane

0xc2ff,	// (0x0003acef) aid_size_touch_vded2_end

0xc309,	// (0x0003acf9) aid_size_touch_vded2_playhead

0x32e3,	// (0x00031cd3) aid_size_touch_vded2_start

0x32eb,	// (0x00031cdb) vded2_slider_bg_pane

0x32f4,	// (0x00031ce4) vded2_slider_pane_g1

0x32fd,	// (0x00031ced) vded2_slider_pane_g2

0xc311,	// (0x0003ad01) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0003e525) vded2_slider_pane_g

0x3305,	// (0x00031cf5) vded2_slider_bg_pane_g1

0x330e,	// (0x00031cfe) vded2_slider_bg_pane_g2

0x3317,	// (0x00031d07) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x0003e52c) vded2_slider_bg_pane_g

0x8d2b,	// (0x0003771b) aid_postcard_touch_down_pane_ParamLimits

0x8d2b,	// (0x0003771b) aid_postcard_touch_down_pane

0x8d3b,	// (0x0003772b) aid_postcard_touch_up_pane_ParamLimits

0x8d3b,	// (0x0003772b) aid_postcard_touch_up_pane

0xdd8b,	// (0x0003c77b) main_blid2_pane

0x192f,	// (0x0003031f) popup_blid2_search_window

0xdd8b,	// (0x0003c77b) blid2_gps_pane

0xdd8b,	// (0x0003c77b) blid2_navig_pane

0xdd8b,	// (0x0003c77b) blid2_search_pane

0xdd8b,	// (0x0003c77b) blid2_tripm_pane

0xc31a,	// (0x0003ad0a) blid2_search_pane_g1_ParamLimits

0xc31a,	// (0x0003ad0a) blid2_search_pane_g1

0xc32a,	// (0x0003ad1a) blid2_search_pane_t1_ParamLimits

0xc32a,	// (0x0003ad1a) blid2_search_pane_t1

0xc33c,	// (0x0003ad2c) aid_size_cell_blid2_gps_ParamLimits

0xc33c,	// (0x0003ad2c) aid_size_cell_blid2_gps

0xc34c,	// (0x0003ad3c) blid2_gps_pane_g1_ParamLimits

0xc34c,	// (0x0003ad3c) blid2_gps_pane_g1

0xc358,	// (0x0003ad48) grid_blid2_satellite_pane_ParamLimits

0xc358,	// (0x0003ad48) grid_blid2_satellite_pane

0xc368,	// (0x0003ad58) blid2_navig_pane_g1_ParamLimits

0xc368,	// (0x0003ad58) blid2_navig_pane_g1

0xc374,	// (0x0003ad64) blid2_navig_pane_t1_ParamLimits

0xc374,	// (0x0003ad64) blid2_navig_pane_t1

0xc386,	// (0x0003ad76) blid2_navig_pane_t2_ParamLimits

0xc386,	// (0x0003ad76) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0003e533) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0003e533) blid2_navig_pane_t

0xc398,	// (0x0003ad88) blid2_navig_ring_pane_ParamLimits

0xc398,	// (0x0003ad88) blid2_navig_ring_pane

0xc3a8,	// (0x0003ad98) blid2_speed_pane_ParamLimits

0xc3a8,	// (0x0003ad98) blid2_speed_pane

0xc3b4,	// (0x0003ada4) blid2_tripm_pane_g1_ParamLimits

0xc3b4,	// (0x0003ada4) blid2_tripm_pane_g1

0xc3c4,	// (0x0003adb4) blid2_tripm_pane_g2_ParamLimits

0xc3c4,	// (0x0003adb4) blid2_tripm_pane_g2

0xc3d0,	// (0x0003adc0) blid2_tripm_pane_g3_ParamLimits

0xc3d0,	// (0x0003adc0) blid2_tripm_pane_g3

0xc3dc,	// (0x0003adcc) blid2_tripm_pane_g4_ParamLimits

0xc3dc,	// (0x0003adcc) blid2_tripm_pane_g4

0xc3e8,	// (0x0003add8) blid2_tripm_pane_g5_ParamLimits

0xc3e8,	// (0x0003add8) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x0003e538) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x0003e538) blid2_tripm_pane_g

0xc404,	// (0x0003adf4) blid2_tripm_pane_t1_ParamLimits

0xc404,	// (0x0003adf4) blid2_tripm_pane_t1

0xc418,	// (0x0003ae08) blid2_tripm_pane_t2_ParamLimits

0xc418,	// (0x0003ae08) blid2_tripm_pane_t2

0xc42c,	// (0x0003ae1c) blid2_tripm_pane_t3_ParamLimits

0xc42c,	// (0x0003ae1c) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0003e545) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0003e545) blid2_tripm_pane_t

0xc45e,	// (0x0003ae4e) cell_blid2_satellite_pane_ParamLimits

0xc45e,	// (0x0003ae4e) cell_blid2_satellite_pane

0xc478,	// (0x0003ae68) cell_blid2_satellite_pane_g1

0x3320,	// (0x00031d10) cell_blid2_satellite_pane_t1

0x1e29,	// (0x00030819) blid2_speed_pane_g1

0x332e,	// (0x00031d1e) blid2_speed_pane_t1

0x333c,	// (0x00031d2c) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x0003e54e) blid2_speed_pane_t

0x1e29,	// (0x00030819) blid2_navig_ring_pane_g1

0xc481,	// (0x0003ae71) blid2_navig_ring_pane_g2

0xc489,	// (0x0003ae79) blid2_navig_ring_pane_g3

0xc491,	// (0x0003ae81) blid2_navig_ring_pane_g4

0xc499,	// (0x0003ae89) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0003e553) blid2_navig_ring_pane_g

0xdd8b,	// (0x0003c77b) bg_popup_window_pane_cp011

0x334a,	// (0x00031d3a) popup_blid2_search_window_g1

0x3352,	// (0x00031d42) popup_blid2_search_window_t1

0x3360,	// (0x00031d50) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x0003e55e) popup_blid2_search_window_t

0xe875,	// (0x0003d265) main_browser_pane_g1

0xe56e,	// (0x0003cf5e) main_browser_pane_ParamLimits

0xf115,	// (0x0003db05) bg_button_pane_cp011_ParamLimits

0xb69e,	// (0x0003a08e) cell_vitu2_function_pane_g1_ParamLimits

0xf115,	// (0x0003db05) bg_popup_sub_pane_cp22_ParamLimits

0x5adf,	// (0x000344cf) input_focus_pane_cp08_ParamLimits

0xbf16,	// (0x0003a906) popup_vitu2_query_button_pane_ParamLimits

0xbf16,	// (0x0003a906) popup_vitu2_query_button_pane

0x5ad5,	// (0x000344c5) popup_vitu2_query_input_button_pane

0x2e74,	// (0x00031864) popup_vitu2_query_window_g1_ParamLimits

0x5aec,	// (0x000344dc) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0003e465) popup_vitu2_query_window_g_ParamLimits

0xdd8b,	// (0x0003c77b) bg_button_pane_cp026

0xc4a1,	// (0x0003ae91) popup_vitu2_query_input_button_pane_g1

0xdd8b,	// (0x0003c77b) bg_button_pane_cp025

0x336e,	// (0x00031d5e) popup_vitu2_query_button_pane_t1

0x9e95,	// (0x00038885) main_mp3_pane_t6

0x9ea5,	// (0x00038895) popup_slider_window_cp01

0xb331,	// (0x00039d21) cam4_battery_pane

0xb40e,	// (0x00039dfe) cam4_battery_pane_cp02

0xc212,	// (0x0003ac02) cam4_battery_pane_cp01

0xc21a,	// (0x0003ac0a) cam4_battery_pane_cp03

0x1e29,	// (0x00030819) cam4_battery_pane_g1

0x2944,	// (0x00031334) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0003e563) cam4_battery_pane_g

0x1cf3,	// (0x000306e3) popup_blid_sat_info2_window_t11

0x86cf,	// (0x000370bf) aid_size_touch_mv_arrow_left_ParamLimits

0x86fa,	// (0x000370ea) aid_size_touch_mv_arrow_right_ParamLimits

0xef5e,	// (0x0003d94e) navi_pane_g1_ParamLimits

0x8723,	// (0x00037113) navi_pane_g2_ParamLimits

0x8751,	// (0x00037141) navi_pane_g3_ParamLimits

0xf44c,	// (0x0003de3c) navi_pane_g_ParamLimits

0x87ab,	// (0x0003719b) navi_pane_mv_t1_ParamLimits

0xa93c,	// (0x0003932c) grid_imed_effect_pane_ParamLimits

0xe7be,	// (0x0003d1ae) aid_placing_vt_slider_lsc

0xe7c6,	// (0x0003d1b6) aid_placing_vt_slider_prt

0xf115,	// (0x0003db05) bg_tb_trans_pane_cp01_ParamLimits

0x1fb0,	// (0x000309a0) popup_image_details_window_g1_ParamLimits

0x1fc3,	// (0x000309b3) popup_image_details_window_g2_ParamLimits

0x1fd8,	// (0x000309c8) popup_image_details_window_g3_ParamLimits

0x1fd8,	// (0x000309c8) popup_image_details_window_g3

0xf77f,	// (0x0003e16f) popup_image_details_window_g_ParamLimits

0x1fec,	// (0x000309dc) popup_image_details_window_t1_ParamLimits

0x1ffe,	// (0x000309ee) popup_image_details_window_t2_ParamLimits

0x2017,	// (0x00030a07) popup_image_details_window_t3_ParamLimits

0x202b,	// (0x00030a1b) popup_image_details_window_t4_ParamLimits

0x2046,	// (0x00030a36) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x0003e176) popup_image_details_window_t_ParamLimits

0xc129,	// (0x0003ab19) cl_header_name_pane_ParamLimits

0xc129,	// (0x0003ab19) cl_header_name_pane

0xc4a9,	// (0x0003ae99) cl_header_name_pane_t1_ParamLimits

0xc4a9,	// (0x0003ae99) cl_header_name_pane_t1

0xc4c0,	// (0x0003aeb0) cl_header_name_pane_t2_ParamLimits

0xc4c0,	// (0x0003aeb0) cl_header_name_pane_t2

0xc4ea,	// (0x0003aeda) cl_header_name_pane_t3_ParamLimits

0xc4ea,	// (0x0003aeda) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x0003e568) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x0003e568) cl_header_name_pane_t

0x877c,	// (0x0003716c) navi_pane_mv_g2_ParamLimits

0x2ae6,	// (0x000314d6) field_vitu2_entry_pane_g1_ParamLimits

0x2af2,	// (0x000314e2) field_vitu2_entry_pane_g2_ParamLimits

0x2afe,	// (0x000314ee) field_vitu2_entry_pane_g3_ParamLimits

0x2afe,	// (0x000314ee) field_vitu2_entry_pane_g3

0xf974,	// (0x0003e364) field_vitu2_entry_pane_g_ParamLimits

0xb62e,	// (0x0003a01e) cell_vitu2_itu_pane_g1_ParamLimits

0xb63e,	// (0x0003a02e) cell_vitu2_itu_pane_g2_ParamLimits

0xb63e,	// (0x0003a02e) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x0003e370) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x0003e370) cell_vitu2_itu_pane_g

0xf115,	// (0x0003db05) bg_vkb2_func_pane_cp05_ParamLimits

0xf115,	// (0x0003db05) bg_vkb2_func_pane_cp05

0xf115,	// (0x0003db05) bg_vkb2_func_pane_cp03

0xf115,	// (0x0003db05) bg_vkb2_func_pane_cp04

0xf115,	// (0x0003db05) bg_vkb2_func_pane_cp10_ParamLimits

0xf115,	// (0x0003db05) bg_vkb2_func_pane_cp10

0x5c31,	// (0x00034621) bg_vkb2_func_pane_cp08

0xc0d3,	// (0x0003aac3) bg_vkb2_func_pane_cp06

0xc0e1,	// (0x0003aad1) bg_vkb2_func_pane_cp07

0x327c,	// (0x00031c6c) bg_vkb2_func_pane_cp11_ParamLimits

0x327c,	// (0x00031c6c) bg_vkb2_func_pane_cp11

0x3291,	// (0x00031c81) bg_vkb2_func_pane_cp12_ParamLimits

0x3291,	// (0x00031c81) bg_vkb2_func_pane_cp12

0xdd8b,	// (0x0003c77b) bg_vkb2_func_pane_cp09

0x2b68,	// (0x00031558) bg_vkb2_func_pane_g1

0xe986,	// (0x0003d376) bg_vkb2_func_pane_g2

0x2b70,	// (0x00031560) bg_vkb2_func_pane_g3

0x2b78,	// (0x00031568) bg_vkb2_func_pane_g4

0x2de9,	// (0x000317d9) bg_vkb2_func_pane_g5

0x2b90,	// (0x00031580) bg_vkb2_func_pane_g6

0x2b98,	// (0x00031588) bg_vkb2_func_pane_g7

0x2b88,	// (0x00031578) bg_vkb2_func_pane_g8

0xe966,	// (0x0003d356) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x0003e56f) bg_vkb2_func_pane_g

0xc3f6,	// (0x0003ade6) blid2_tripm_pane_g6_ParamLimits

0xc3f6,	// (0x0003ade6) blid2_tripm_pane_g6

0x28fe,	// (0x000312ee) mp4_progress_pane_g1

0xc452,	// (0x0003ae42) blid2_tripm_values_pane_ParamLimits

0xc452,	// (0x0003ae42) blid2_tripm_values_pane

0xc50f,	// (0x0003aeff) blid2_tripm_values_pane_t1

0xc51d,	// (0x0003af0d) blid2_tripm_values_pane_t2

0xc52b,	// (0x0003af1b) blid2_tripm_values_pane_t3

0xc539,	// (0x0003af29) blid2_tripm_values_pane_t4

0xc547,	// (0x0003af37) blid2_tripm_values_pane_t5

0xc555,	// (0x0003af45) blid2_tripm_values_pane_t6

0xc563,	// (0x0003af53) blid2_tripm_values_pane_t7

0xc571,	// (0x0003af61) blid2_tripm_values_pane_t8

0xc57f,	// (0x0003af6f) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0003e582) blid2_tripm_values_pane_t

0x7535,	// (0x00035f25) call_video_pane_t1_ParamLimits

0x754f,	// (0x00035f3f) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0003dcc5) call_video_pane_t_ParamLimits

0x585b,	// (0x0003424b) msg_header_pane_g1_ParamLimits

0x0625,	// (0x0002f015) msg_header_pane_g2_ParamLimits

0x0625,	// (0x0002f015) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x0003dedf) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x0003dedf) msg_header_pane_g

0xe56e,	// (0x0003cf5e) main_clock2_pane_ParamLimits

0xa6c1,	// (0x000390b1) grid_clock2_toolbar_pane_ParamLimits

0xa6c1,	// (0x000390b1) grid_clock2_toolbar_pane

0xa6c1,	// (0x000390b1) listscroll_clock2_pane_ParamLimits

0xa6c1,	// (0x000390b1) listscroll_clock2_pane

0xa76f,	// (0x0003915f) main_clock2_pane_t3_ParamLimits

0xa76f,	// (0x0003915f) main_clock2_pane_t3

0xa781,	// (0x00039171) main_clock2_pane_t4_ParamLimits

0xa781,	// (0x00039171) main_clock2_pane_t4

0x337c,	// (0x00031d6c) cell_clock2_toolbar_pane

0x3384,	// (0x00031d74) cell_clock2_toolbar_pane_cp01

0x3384,	// (0x00031d74) cell_clock2_toolbar_pane_cp02

0x338c,	// (0x00031d7c) cell_clock2_toolbar_pane_cp03

0x3394,	// (0x00031d84) list_clock2_pane

0xeeb1,	// (0x0003d8a1) scroll_pane_cp10

0x339c,	// (0x00031d8c) list_single_clock2_pane_ParamLimits

0x339c,	// (0x00031d8c) list_single_clock2_pane

0xeffe,	// (0x0003d9ee) list_highlight_pane_cp08

0x33a9,	// (0x00031d99) list_single_clock2_pane_t1

0x33b7,	// (0x00031da7) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0003e595) list_single_clock2_pane_t

0xdd8b,	// (0x0003c77b) bg_button_pane_cp10

0x33c5,	// (0x00031db5) cell_clock2_toolbar_pane_g1

0x8c8d,	// (0x0003767d) aid_main_viewer_pane_g1_ParamLimits

0x8c8d,	// (0x0003767d) aid_main_viewer_pane_g1

0x8c99,	// (0x00037689) aid_main_viewer_pane_g2_ParamLimits

0x8c99,	// (0x00037689) aid_main_viewer_pane_g2

0x8ca5,	// (0x00037695) aid_main_viewer_pane_g3_ParamLimits

0x8ca5,	// (0x00037695) aid_main_viewer_pane_g3

0x8cb6,	// (0x000376a6) aid_main_viewer_pane_g4_ParamLimits

0x8cb6,	// (0x000376a6) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x0003def0) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x0003def0) aid_main_viewer_pane_g

0x944e,	// (0x00037e3e) main_calc_pane_ParamLimits

0x945b,	// (0x00037e4b) main_dialer2_pane_ParamLimits

0xdd8b,	// (0x0003c77b) main_cam6_pane

0xdd8b,	// (0x0003c77b) main_vid6_pane

0xa6cd,	// (0x000390bd) listscroll_gen_pane_cp06_ParamLimits

0xa6cd,	// (0x000390bd) listscroll_gen_pane_cp06

0xa793,	// (0x00039183) main_clock2_pane_t5_ParamLimits

0xa793,	// (0x00039183) main_clock2_pane_t5

0xa7e2,	// (0x000391d2) aid_call2_pane_cp10_ParamLimits

0xa7f4,	// (0x000391e4) aid_call_pane_cp10_ParamLimits

0xef33,	// (0x0003d923) popup_clock_analogue_window_cp10_g1_ParamLimits

0xef33,	// (0x0003d923) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa806,	// (0x000391f6) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa806,	// (0x000391f6) popup_clock_analogue_window_cp10_g4_ParamLimits

0xef33,	// (0x0003d923) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0003e226) popup_clock_analogue_window_cp10_g_ParamLimits

0xa81c,	// (0x0003920c) popup_clock_analogue_window_cp10_t1_ParamLimits

0xafd4,	// (0x000399c4) cell_dialer2_keypad_pane_g2_ParamLimits

0xafd4,	// (0x000399c4) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x0003e30c) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x0003e30c) cell_dialer2_keypad_pane_g

0xaff0,	// (0x000399e0) cell_dialer2_keypad_pane_t1

0xb966,	// (0x0003a356) main_cset_text2_pane_ParamLimits

0xb966,	// (0x0003a356) main_cset_text2_pane

0x3050,	// (0x00031a40) area_vitu2_query_pane_g1_ParamLimits

0x5b5c,	// (0x0003454c) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x0003e4b2) area_vitu2_query_pane_g_ParamLimits

0x5c0d,	// (0x000345fd) area_vitu2_query_pane_t7_ParamLimits

0x5c0d,	// (0x000345fd) area_vitu2_query_pane_t7

0xc0d3,	// (0x0003aac3) bg_button_pane_cp018_ParamLimits

0xc0e1,	// (0x0003aad1) bg_button_pane_cp021_ParamLimits

0x5c31,	// (0x00034621) bg_button_pane_cp022_ParamLimits

0x5c31,	// (0x00034621) bg_vkb2_func_pane_cp08_ParamLimits

0xc0d3,	// (0x0003aac3) bg_vkb2_func_pane_cp06_ParamLimits

0xc0e1,	// (0x0003aad1) bg_vkb2_func_pane_cp07_ParamLimits

0x5c42,	// (0x00034632) input_focus_pane_cp09_ParamLimits

0xc58d,	// (0x0003af7d) cam6_autofocus_pane_ParamLimits

0xc58d,	// (0x0003af7d) cam6_autofocus_pane

0xc5af,	// (0x0003af9f) cam6_image_uncrop_pane_ParamLimits

0xc5af,	// (0x0003af9f) cam6_image_uncrop_pane

0xc5dc,	// (0x0003afcc) cam6_indi_pane_ParamLimits

0xc5dc,	// (0x0003afcc) cam6_indi_pane

0xc5f6,	// (0x0003afe6) cam6_mode_pane_ParamLimits

0xc5f6,	// (0x0003afe6) cam6_mode_pane

0xc60a,	// (0x0003affa) cam6_timer_pane_ParamLimits

0xc60a,	// (0x0003affa) cam6_timer_pane

0xc616,	// (0x0003b006) cam6_zoom_pane_ParamLimits

0xc616,	// (0x0003b006) cam6_zoom_pane

0xb390,	// (0x00039d80) cam6_mode_pane_g1_ParamLimits

0xb390,	// (0x00039d80) cam6_mode_pane_g1

0xb3a8,	// (0x00039d98) cam6_mode_pane_g2_ParamLimits

0xb3a8,	// (0x00039d98) cam6_mode_pane_g2

0xb3b4,	// (0x00039da4) cam6_mode_pane_g3_ParamLimits

0xb3b4,	// (0x00039da4) cam6_mode_pane_g3

0xb3c0,	// (0x00039db0) cam6_mode_pane_g4_ParamLimits

0xb3c0,	// (0x00039db0) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x0003e59a) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x0003e59a) cam6_mode_pane_g

0x33db,	// (0x00031dcb) bg_tb_trans_pane_cp08_ParamLimits

0x33db,	// (0x00031dcb) bg_tb_trans_pane_cp08

0x33e9,	// (0x00031dd9) cam6_battery_pane_ParamLimits

0x33e9,	// (0x00031dd9) cam6_battery_pane

0x33ff,	// (0x00031def) cam6_indi_pane_g1_ParamLimits

0x33ff,	// (0x00031def) cam6_indi_pane_g1

0x3411,	// (0x00031e01) cam6_indi_pane_g2_ParamLimits

0x3411,	// (0x00031e01) cam6_indi_pane_g2

0x3423,	// (0x00031e13) cam6_indi_pane_g3_ParamLimits

0x3423,	// (0x00031e13) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x0003e5a3) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x0003e5a3) cam6_indi_pane_g

0x3435,	// (0x00031e25) cam6_indi_pane_t1_ParamLimits

0x3435,	// (0x00031e25) cam6_indi_pane_t1

0xb46a,	// (0x00039e5a) cam6_autofocus_pane_g1

0xb472,	// (0x00039e62) cam6_autofocus_pane_g2

0xb47a,	// (0x00039e6a) cam6_autofocus_pane_g3

0xb482,	// (0x00039e72) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x0003e5aa) cam6_autofocus_pane_g

0x345b,	// (0x00031e4b) cam6_timer_pane_g1

0x3463,	// (0x00031e53) cam6_timer_pane_t1

0x3471,	// (0x00031e61) cam6_zoom_cont_pane

0x3479,	// (0x00031e69) cam6_zoom_pane_g1

0x3481,	// (0x00031e71) cam6_zoom_pane_g2

0xc62e,	// (0x0003b01e) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x0003e5b3) cam6_zoom_pane_g

0x1e29,	// (0x00030819) cam6_battery_pane_g1

0x1e29,	// (0x00030819) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x0003e133) cam6_battery_pane_g

0x3489,	// (0x00031e79) cam6_zoom_cont_pane_g1

0x3492,	// (0x00031e82) cam6_zoom_cont_pane_g2

0x349b,	// (0x00031e8b) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x0003e5ba) cam6_zoom_cont_pane_g

0xc648,	// (0x0003b038) cam6_mode_pane_cp_ParamLimits

0xc648,	// (0x0003b038) cam6_mode_pane_cp

0xc616,	// (0x0003b006) cam6_zoom_pane_cp_ParamLimits

0xc616,	// (0x0003b006) cam6_zoom_pane_cp

0xc65c,	// (0x0003b04c) vid6_image_uncrop_cif_pane_ParamLimits

0xc65c,	// (0x0003b04c) vid6_image_uncrop_cif_pane

0xc688,	// (0x0003b078) vid6_image_uncrop_nhd_pane_ParamLimits

0xc688,	// (0x0003b078) vid6_image_uncrop_nhd_pane

0xc5af,	// (0x0003af9f) vid6_image_uncrop_vga_pane_ParamLimits

0xc5af,	// (0x0003af9f) vid6_image_uncrop_vga_pane

0xc6a5,	// (0x0003b095) vid6_image_uncrop_wvga_pane_ParamLimits

0xc6a5,	// (0x0003b095) vid6_image_uncrop_wvga_pane

0xc6c2,	// (0x0003b0b2) vid6_indi_pane_ParamLimits

0xc6c2,	// (0x0003b0b2) vid6_indi_pane

0x33db,	// (0x00031dcb) bg_tb_trans_pane_cp09_ParamLimits

0x33db,	// (0x00031dcb) bg_tb_trans_pane_cp09

0x34b3,	// (0x00031ea3) cam6_battery_pane_cp_ParamLimits

0x34b3,	// (0x00031ea3) cam6_battery_pane_cp

0x34bf,	// (0x00031eaf) vid6_indi_pane_g1_ParamLimits

0x34bf,	// (0x00031eaf) vid6_indi_pane_g1

0x34d1,	// (0x00031ec1) vid6_indi_pane_g2_ParamLimits

0x34d1,	// (0x00031ec1) vid6_indi_pane_g2

0x34e3,	// (0x00031ed3) vid6_indi_pane_g3_ParamLimits

0x34e3,	// (0x00031ed3) vid6_indi_pane_g3

0x34f8,	// (0x00031ee8) vid6_indi_pane_g4_ParamLimits

0x34f8,	// (0x00031ee8) vid6_indi_pane_g4

0x350d,	// (0x00031efd) vid6_indi_pane_g5_ParamLimits

0x350d,	// (0x00031efd) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0003e5c1) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0003e5c1) vid6_indi_pane_g

0x3527,	// (0x00031f17) vid6_indi_pane_t1_ParamLimits

0x3527,	// (0x00031f17) vid6_indi_pane_t1

0x353d,	// (0x00031f2d) vid6_indi_pane_t2_ParamLimits

0x353d,	// (0x00031f2d) vid6_indi_pane_t2

0x3565,	// (0x00031f55) vid6_indi_pane_t3_ParamLimits

0x3565,	// (0x00031f55) vid6_indi_pane_t3

0x358d,	// (0x00031f7d) vid6_indi_pane_t4_ParamLimits

0x358d,	// (0x00031f7d) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x0003e5cc) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x0003e5cc) vid6_indi_pane_t

0x35b1,	// (0x00031fa1) wait_bar_pane_cp08

0xc6e5,	// (0x0003b0d5) main_cset_text2_pane_t1_ParamLimits

0xc6e5,	// (0x0003b0d5) main_cset_text2_pane_t1

0xc636,	// (0x0003b026) listscroll_gen_pane_cp06_t1_ParamLimits

0xc636,	// (0x0003b026) listscroll_gen_pane_cp06_t1

0xdd8b,	// (0x0003c77b) main_cam6_set_pane

0x2090,	// (0x00030a80) bg_tb_trans_pane_cp06_ParamLimits

0xb339,	// (0x00039d29) cam4_indicators_pane_g1_ParamLimits

0xb346,	// (0x00039d36) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x0003e340) cam4_indicators_pane_g_ParamLimits

0xb366,	// (0x00039d56) cam4_indicators_pane_t1_ParamLimits

0xf115,	// (0x0003db05) bg_tb_trans_pane_cp07_ParamLimits

0xb339,	// (0x00039d29) vid4_indicators_pane_g1_ParamLimits

0xb416,	// (0x00039e06) vid4_indicators_pane_g2_ParamLimits

0xb423,	// (0x00039e13) vid4_indicators_pane_g3_ParamLimits

0xb434,	// (0x00039e24) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0003e352) vid4_indicators_pane_g_ParamLimits

0xb450,	// (0x00039e40) vid4_indicators_pane_t1_ParamLimits

0xc222,	// (0x0003ac12) vid4_progress_pane_g1_ParamLimits

0xc22e,	// (0x0003ac1e) vid4_progress_pane_g2_ParamLimits

0xc23a,	// (0x0003ac2a) vid4_progress_pane_g3_ParamLimits

0xc249,	// (0x0003ac39) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x0003e4fd) vid4_progress_pane_g_ParamLimits

0xc267,	// (0x0003ac57) vid4_progress_pane_t1_ParamLimits

0xc27d,	// (0x0003ac6d) vid4_progress_pane_t2_ParamLimits

0xc293,	// (0x0003ac83) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x0003e508) vid4_progress_pane_t_ParamLimits

0xc2a8,	// (0x0003ac98) wait_bar_pane_cp07_ParamLimits

0xc723,	// (0x0003b113) main_cam6_set_pane_g2_ParamLimits

0xc723,	// (0x0003b113) main_cam6_set_pane_g2

0xc72f,	// (0x0003b11f) main_cset6_listscroll_pane_ParamLimits

0xc72f,	// (0x0003b11f) main_cset6_listscroll_pane

0xc75a,	// (0x0003b14a) main_cset6_slider_pane_ParamLimits

0xc75a,	// (0x0003b14a) main_cset6_slider_pane

0xc766,	// (0x0003b156) main_cset6_text2_pane_ParamLimits

0xc766,	// (0x0003b156) main_cset6_text2_pane

0x35c0,	// (0x00031fb0) main_cset6_text_pane

0x35c8,	// (0x00031fb8) main_cset_list_pane_copy1_ParamLimits

0x35c8,	// (0x00031fb8) main_cset_list_pane_copy1

0x35d8,	// (0x00031fc8) scroll_pane_cp028_copy1

0xc779,	// (0x0003b169) cset_list_set_pane_copy1

0xc793,	// (0x0003b183) aid_position_infowindow_above_copy1

0xc79b,	// (0x0003b18b) aid_position_infowindow_below_copy1

0x5c9b,	// (0x0003468b) cset_list_set_pane_g1_copy1

0x5a5c,	// (0x0003444c) cset_list_set_pane_g3_copy1_ParamLimits

0x5a5c,	// (0x0003444c) cset_list_set_pane_g3_copy1

0x5a6b,	// (0x0003445b) cset_list_set_pane_t1_copy1_ParamLimits

0x5a6b,	// (0x0003445b) cset_list_set_pane_t1_copy1

0xf115,	// (0x0003db05) list_highlight_pane_cp021_copy1_ParamLimits

0xf115,	// (0x0003db05) list_highlight_pane_cp021_copy1

0x360d,	// (0x00031ffd) cset6_slider_pane_ParamLimits

0x360d,	// (0x00031ffd) cset6_slider_pane

0x3639,	// (0x00032029) main_cset6_slider_pane_g1_ParamLimits

0x3639,	// (0x00032029) main_cset6_slider_pane_g1

0xc7a3,	// (0x0003b193) main_cset6_slider_pane_g2_ParamLimits

0xc7a3,	// (0x0003b193) main_cset6_slider_pane_g2

0x2c97,	// (0x00031687) main_cset6_slider_pane_g3_ParamLimits

0x2c97,	// (0x00031687) main_cset6_slider_pane_g3

0xc7cb,	// (0x0003b1bb) main_cset6_slider_pane_g4_ParamLimits

0xc7cb,	// (0x0003b1bb) main_cset6_slider_pane_g4

0xc7d7,	// (0x0003b1c7) main_cset6_slider_pane_g5_ParamLimits

0xc7d7,	// (0x0003b1c7) main_cset6_slider_pane_g5

0x2c97,	// (0x00031687) main_cset6_slider_pane_g7_ParamLimits

0x2c97,	// (0x00031687) main_cset6_slider_pane_g7

0x2ca3,	// (0x00031693) main_cset6_slider_pane_g8_ParamLimits

0x2ca3,	// (0x00031693) main_cset6_slider_pane_g8

0xc7e5,	// (0x0003b1d5) main_cset6_slider_pane_g9_ParamLimits

0xc7e5,	// (0x0003b1d5) main_cset6_slider_pane_g9

0xc7f1,	// (0x0003b1e1) main_cset6_slider_pane_g10_ParamLimits

0xc7f1,	// (0x0003b1e1) main_cset6_slider_pane_g10

0xc7cb,	// (0x0003b1bb) main_cset6_slider_pane_g11_ParamLimits

0xc7cb,	// (0x0003b1bb) main_cset6_slider_pane_g11

0xc7fd,	// (0x0003b1ed) main_cset6_slider_pane_g12_ParamLimits

0xc7fd,	// (0x0003b1ed) main_cset6_slider_pane_g12

0xc809,	// (0x0003b1f9) main_cset6_slider_pane_g13_ParamLimits

0xc809,	// (0x0003b1f9) main_cset6_slider_pane_g13

0xc817,	// (0x0003b207) main_cset6_slider_pane_g14_ParamLimits

0xc817,	// (0x0003b207) main_cset6_slider_pane_g14

0xc825,	// (0x0003b215) main_cset6_slider_pane_g15_ParamLimits

0xc825,	// (0x0003b215) main_cset6_slider_pane_g15

0xc7d7,	// (0x0003b1c7) main_cset6_slider_pane_g16_ParamLimits

0xc7d7,	// (0x0003b1c7) main_cset6_slider_pane_g16

0xc83d,	// (0x0003b22d) main_cset6_slider_pane_g17_ParamLimits

0xc83d,	// (0x0003b22d) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0003e5d5) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0003e5d5) main_cset6_slider_pane_g

0x3661,	// (0x00032051) main_cset6_slider_pane_t1_ParamLimits

0x3661,	// (0x00032051) main_cset6_slider_pane_t1

0xc84b,	// (0x0003b23b) main_cset6_slider_pane_t2_ParamLimits

0xc84b,	// (0x0003b23b) main_cset6_slider_pane_t2

0xc876,	// (0x0003b266) main_cset6_slider_pane_t3_ParamLimits

0xc876,	// (0x0003b266) main_cset6_slider_pane_t3

0xc8a1,	// (0x0003b291) main_cset6_slider_pane_t4_ParamLimits

0xc8a1,	// (0x0003b291) main_cset6_slider_pane_t4

0xc8ce,	// (0x0003b2be) main_cset6_slider_pane_t5_ParamLimits

0xc8ce,	// (0x0003b2be) main_cset6_slider_pane_t5

0x36a2,	// (0x00032092) main_cset6_slider_pane_t7_ParamLimits

0x36a2,	// (0x00032092) main_cset6_slider_pane_t7

0xc8fb,	// (0x0003b2eb) main_cset6_slider_pane_t8_ParamLimits

0xc8fb,	// (0x0003b2eb) main_cset6_slider_pane_t8

0xc91f,	// (0x0003b30f) main_cset6_slider_pane_t9_ParamLimits

0xc91f,	// (0x0003b30f) main_cset6_slider_pane_t9

0xc943,	// (0x0003b333) main_cset6_slider_pane_t10_ParamLimits

0xc943,	// (0x0003b333) main_cset6_slider_pane_t10

0xc967,	// (0x0003b357) main_cset6_slider_pane_t11_ParamLimits

0xc967,	// (0x0003b357) main_cset6_slider_pane_t11

0x36d8,	// (0x000320c8) main_cset6_slider_pane_t14_ParamLimits

0x36d8,	// (0x000320c8) main_cset6_slider_pane_t14

0x3711,	// (0x00032101) main_cset6_slider_pane_t15_ParamLimits

0x3711,	// (0x00032101) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x0003e5fa) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x0003e5fa) main_cset6_slider_pane_t

0x374a,	// (0x0003213a) cset_slider_pane_g1_copy1

0x3753,	// (0x00032143) cset_slider_pane_g2_copy1

0x375c,	// (0x0003214c) cset_slider_pane_g3_copy1

0xdd8b,	// (0x0003c77b) bg_popup_sub_pane_cp011_copy1

0x2e80,	// (0x00031870) main_cset_text_pane_g1_copy1

0x2e88,	// (0x00031878) main_cset_text_pane_t1_copy1

0x2e96,	// (0x00031886) main_cset_text_pane_t2_copy1

0x2ea4,	// (0x00031894) main_cset_text_pane_t3_copy1

0x2eb2,	// (0x000318a2) main_cset_text_pane_t4_copy1

0x2ec0,	// (0x000318b0) main_cset_text_pane_t5_copy1

0x2ece,	// (0x000318be) main_cset_text_pane_t6_copy1

0x2edc,	// (0x000318cc) main_cset_text_pane_t7_copy1

0xc98d,	// (0x0003b37d) main_cset_text2_pane_t1_copy1

0xdd8b,	// (0x0003c77b) main_ncimui_pane

0x949a,	// (0x00037e8a) popup_query_ncimui_window_ParamLimits

0x949a,	// (0x00037e8a) popup_query_ncimui_window

0x5920,	// (0x00034310) field_cale_ev2_pane_g4_ParamLimits

0x5920,	// (0x00034310) field_cale_ev2_pane_g4

0xad1c,	// (0x0003970c) cell_video_dialer_keypad_pane_g2_ParamLimits

0xad1c,	// (0x0003970c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x0003e2e7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x0003e2e7) cell_video_dialer_keypad_pane_g

0xad34,	// (0x00039724) cell_video_dialer_keypad_pane_t1

0xdd8b,	// (0x0003c77b) bg_popup_window_pane_cp012

0xed81,	// (0x0003d771) heading_pane_cp06

0x3854,	// (0x00032244) ncim_query_content_pane

0xdd8b,	// (0x0003c77b) bg_popup_heading_pane_cp01

0x385c,	// (0x0003224c) ncim_heading_pane_t1

0x386a,	// (0x0003225a) ncim_indicator_popup_pane

0x387c,	// (0x0003226c) ncim_query_button_pane

0x3890,	// (0x00032280) ncim_query_content_pane_t1

0x38a2,	// (0x00032292) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x0003e639) ncim_query_content_pane_t

0x38dc,	// (0x000322cc) ncim_query_list_pane

0x38ee,	// (0x000322de) ncim_query_popup_pane

0x386a,	// (0x0003225a) ncim_indicator_popup_pane_ParamLimits

0xca88,	// (0x0003b478) ncim_query_content_pane_g1_ParamLimits

0xca88,	// (0x0003b478) ncim_query_content_pane_g1

0x3890,	// (0x00032280) ncim_query_content_pane_t1_ParamLimits

0x38a2,	// (0x00032292) ncim_query_content_pane_t2_ParamLimits

0xca94,	// (0x0003b484) ncim_query_content_pane_t3_ParamLimits

0xca94,	// (0x0003b484) ncim_query_content_pane_t3

0xcab1,	// (0x0003b4a1) ncim_query_content_pane_t4_ParamLimits

0xcab1,	// (0x0003b4a1) ncim_query_content_pane_t4

0xcace,	// (0x0003b4be) ncim_query_content_pane_t5_ParamLimits

0xcace,	// (0x0003b4be) ncim_query_content_pane_t5

0x38b4,	// (0x000322a4) ncim_query_content_pane_t6_ParamLimits

0x38b4,	// (0x000322a4) ncim_query_content_pane_t6

0xfc49,	// (0x0003e639) ncim_query_content_pane_t_ParamLimits

0x38dc,	// (0x000322cc) ncim_query_list_pane_ParamLimits

0x38ee,	// (0x000322de) ncim_query_popup_pane_ParamLimits

0x3902,	// (0x000322f2) wait_bar_pane_cp04

0xdd8b,	// (0x0003c77b) input_focus_pane_cp011

0x390a,	// (0x000322fa) ncim_query_popup_pane_t1

0x3918,	// (0x00032308) ncim_list_query_list_pane_ParamLimits

0x3918,	// (0x00032308) ncim_list_query_list_pane

0xdd8b,	// (0x0003c77b) bg_button_pane_cp027

0x392b,	// (0x0003231b) ncim_query_button_pane_g1

0xdd8b,	// (0x0003c77b) list_highlight_pane_cp012

0x3935,	// (0x00032325) ncim_list_query_list_pane_g1

0x393d,	// (0x0003232d) ncim_list_query_list_pane_t1

0xb356,	// (0x00039d46) cam4_indicators_pane_g3_ParamLimits

0xb356,	// (0x00039d46) cam4_indicators_pane_g3

0xb440,	// (0x00039e30) vid4_indicators_pane_g5_ParamLimits

0xb440,	// (0x00039e30) vid4_indicators_pane_g5

0xc258,	// (0x0003ac48) vid4_progress_pane_g5_ParamLimits

0xc258,	// (0x0003ac48) vid4_progress_pane_g5

0xc9d0,	// (0x0003b3c0) main_ncimui_pane_g1

0xca16,	// (0x0003b406) ncimui_group_query_pane_ParamLimits

0xca16,	// (0x0003b406) ncimui_group_query_pane

0xca4a,	// (0x0003b43a) ncimui_list_pane_ParamLimits

0xca4a,	// (0x0003b43a) ncimui_list_pane

0xca64,	// (0x0003b454) ncimui_text_pane_ParamLimits

0xca64,	// (0x0003b454) ncimui_text_pane

0xcaeb,	// (0x0003b4db) ncimui_text_pane_t1_ParamLimits

0xcaeb,	// (0x0003b4db) ncimui_text_pane_t1

0x394b,	// (0x0003233b) ncimui_list_single_graphic_pane_ParamLimits

0x394b,	// (0x0003233b) ncimui_list_single_graphic_pane

0xcb0a,	// (0x0003b4fa) ncimui_query_pane_ParamLimits

0xcb0a,	// (0x0003b4fa) ncimui_query_pane

0xdd8b,	// (0x0003c77b) list_highlight_pane_cp013

0x395b,	// (0x0003234b) ncim_list_query_list_pane_t1_copy1

0x3935,	// (0x00032325) ncim_list_single_graphic_pane_g1

0x3969,	// (0x00032359) ncim_query_button_pane_cp01

0x3971,	// (0x00032361) ncim_query_entry_pane_ParamLimits

0x3971,	// (0x00032361) ncim_query_entry_pane

0x3981,	// (0x00032371) ncimui_query_pane_g1

0x3989,	// (0x00032379) ncimui_query_pane_t1_ParamLimits

0x3989,	// (0x00032379) ncimui_query_pane_t1

0xdd8b,	// (0x0003c77b) input_focus_pane_cp012

0x390a,	// (0x000322fa) ncim_query_entry_pane_t1

0xe56e,	// (0x0003cf5e) main_im_pane_ParamLimits

0xf115,	// (0x0003db05) main_mobtv_pane_ParamLimits

0xf115,	// (0x0003db05) main_mobtv_pane

0xc7e5,	// (0x0003b1d5) main_cset6_slider_pane_g18_ParamLimits

0xc7e5,	// (0x0003b1d5) main_cset6_slider_pane_g18

0xc809,	// (0x0003b1f9) main_cset6_slider_pane_g19_ParamLimits

0xc809,	// (0x0003b1f9) main_cset6_slider_pane_g19

0x2afe,	// (0x000314ee) bg_main_mobtv_pane_ParamLimits

0x2afe,	// (0x000314ee) bg_main_mobtv_pane

0xcb1a,	// (0x0003b50a) main_mobtv_info_pane

0xcb25,	// (0x0003b515) main_mobtv_loading_pane_ParamLimits

0xcb25,	// (0x0003b515) main_mobtv_loading_pane

0x39ad,	// (0x0003239d) main_mobtv_pg_channel_list_pane

0x39b7,	// (0x000323a7) main_mobtv_pg_hdr_pane

0xcb32,	// (0x0003b522) main_mobtv_programe_curr_pane_ParamLimits

0xcb32,	// (0x0003b522) main_mobtv_programe_curr_pane

0xcb3f,	// (0x0003b52f) main_mobtv_programe_next_pane_ParamLimits

0xcb3f,	// (0x0003b52f) main_mobtv_programe_next_pane

0x39c0,	// (0x000323b0) popup_mobtv_noti_window

0x1e29,	// (0x00030819) main_tv_pg_hdr_pane_g1

0x39c8,	// (0x000323b8) main_tv_pg_hdr_pane_g2

0x39d0,	// (0x000323c0) main_tv_pg_hdr_pane_g3

0x39d8,	// (0x000323c8) main_tv_pg_hdr_pane_g4

0x39e0,	// (0x000323d0) main_tv_pg_hdr_pane_g5

0x39ea,	// (0x000323da) main_tv_pg_hdr_pane_g6

0x39f4,	// (0x000323e4) main_tv_pg_hdr_pane_g7

0x39fe,	// (0x000323ee) main_tv_pg_hdr_pane_g8

0x3a08,	// (0x000323f8) main_tv_pg_hdr_pane_g9

0x3a12,	// (0x00032402) main_tv_pg_hdr_pane_g10

0x3a1c,	// (0x0003240c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0003e646) main_tv_pg_hdr_pane_g

0x3a26,	// (0x00032416) main_tv_pg_hdr_pane_t1

0x3a34,	// (0x00032424) main_tv_pg_hdr_pane_t2

0x3a42,	// (0x00032432) main_tv_pg_hdr_pane_t3

0x3a52,	// (0x00032442) main_tv_pg_hdr_pane_t4

0x3a62,	// (0x00032452) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x0003e65d) main_tv_pg_hdr_pane_t

0x3a72,	// (0x00032462) single_mobtv_pg_channel_pane_ParamLimits

0x3a72,	// (0x00032462) single_mobtv_pg_channel_pane

0x3a84,	// (0x00032474) single_mobtv_pg_channel_table_pane

0x3a8d,	// (0x0003247d) single_mobtv_pg_channel_thumb_pane

0x3a96,	// (0x00032486) single_tv_pg_channel_pane_g1

0x3a9f,	// (0x0003248f) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x0003e668) single_tv_pg_channel_pane_g

0x2090,	// (0x00030a80) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2090,	// (0x00030a80) bg_single_mobtv_pg_channel_thumb_pane

0x3aa8,	// (0x00032498) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3aa8,	// (0x00032498) single_mobtv_pg_channel_thumb_pane_g1

0x3ab6,	// (0x000324a6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3ab6,	// (0x000324a6) single_mobtv_pg_channel_thumb_pane_g2

0x3ac2,	// (0x000324b2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3ac2,	// (0x000324b2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x0003e66d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x0003e66d) single_mobtv_pg_channel_thumb_pane_g

0x3ace,	// (0x000324be) single_mobtv_pg_channel_thumb_pane_t1

0x3adc,	// (0x000324cc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0003e674) single_mobtv_pg_channel_thumb_pane_t

0x1e29,	// (0x00030819) bg_single_mobtv_pg_channel_table_pane_g1

0x1e29,	// (0x00030819) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x0003e133) bg_single_mobtv_pg_channel_table_pane_g

0x3aea,	// (0x000324da) single_mobtv_pg_channel_table_pane_t1

0x3af8,	// (0x000324e8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x0003e679) single_mobtv_pg_channel_table_pane_t

0xcb54,	// (0x0003b544) main_mobtv_info_pane_g1_ParamLimits

0xcb54,	// (0x0003b544) main_mobtv_info_pane_g1

0xcb70,	// (0x0003b560) main_mobtv_info_pane_t1_ParamLimits

0xcb70,	// (0x0003b560) main_mobtv_info_pane_t1

0xcbe8,	// (0x0003b5d8) main_mobtv_info_pane_t2_ParamLimits

0xcbe8,	// (0x0003b5d8) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0003e683) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0003e683) main_mobtv_info_pane_t

0xcc77,	// (0x0003b667) wait_bar_pane_cp05

0xcc89,	// (0x0003b679) main_mobtv_loading_pane_g1_ParamLimits

0xcc89,	// (0x0003b679) main_mobtv_loading_pane_g1

0xcc97,	// (0x0003b687) main_mobtv_loading_pane_g2_ParamLimits

0xcc97,	// (0x0003b687) main_mobtv_loading_pane_g2

0xcca3,	// (0x0003b693) main_mobtv_loading_pane_g3_ParamLimits

0xcca3,	// (0x0003b693) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x0003e68a) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x0003e68a) main_mobtv_loading_pane_g

0x3b06,	// (0x000324f6) main_mobtv_loading_pane_t1_ParamLimits

0x3b06,	// (0x000324f6) main_mobtv_loading_pane_t1

0x3b1e,	// (0x0003250e) main_mobtv_loading_pane_t2_ParamLimits

0x3b1e,	// (0x0003250e) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x0003e691) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x0003e691) main_mobtv_loading_pane_t

0xccb1,	// (0x0003b6a1) wait_bar_pane_cp06_ParamLimits

0xccb1,	// (0x0003b6a1) wait_bar_pane_cp06

0x3b42,	// (0x00032532) main_mobtv_programe_curr_pane_t1

0x3b50,	// (0x00032540) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0003e696) main_mobtv_programe_curr_pane_t

0x3b5e,	// (0x0003254e) main_mobtv_programe_next_pane_t1

0x3b6c,	// (0x0003255c) main_mobtv_programe_next_pane_t2

0x3b7a,	// (0x0003256a) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x0003e69b) main_mobtv_programe_next_pane_t

0xdd8b,	// (0x0003c77b) bg_popup_mobtv_noti_window_pane

0x3b88,	// (0x00032578) popup_mobtv_noti_window_g1

0x3b90,	// (0x00032580) popup_mobtv_noti_window_t1

0x3b9e,	// (0x0003258e) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x0003e6a2) popup_mobtv_noti_window_t

0x1e29,	// (0x00030819) bg_popup_mobtv_noti_window_pane_g1

0xdd8b,	// (0x0003c77b) sc_clock_pane

0xdd8b,	// (0x0003c77b) main_fs_bigclock_pane

0xc440,	// (0x0003ae30) blid2_tripm_pane_t4_ParamLimits

0xc440,	// (0x0003ae30) blid2_tripm_pane_t4

0xccbd,	// (0x0003b6ad) sc_clock_pane_g1_ParamLimits

0xccbd,	// (0x0003b6ad) sc_clock_pane_g1

0xcccb,	// (0x0003b6bb) sc_clock_pane_t1_ParamLimits

0xcccb,	// (0x0003b6bb) sc_clock_pane_t1

0xccde,	// (0x0003b6ce) sc_clock_pane_t2_ParamLimits

0xccde,	// (0x0003b6ce) sc_clock_pane_t2

0xccf0,	// (0x0003b6e0) sc_clock_pane_t3_ParamLimits

0xccf0,	// (0x0003b6e0) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x0003e6a7) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x0003e6a7) sc_clock_pane_t

0xd518,	// (0x0003bf08) main_fs_bigclock_indicator_pane_ParamLimits

0xd518,	// (0x0003bf08) main_fs_bigclock_indicator_pane

0xcd78,	// (0x0003b768) main_fs_bigclock_pane_g1_ParamLimits

0xcd78,	// (0x0003b768) main_fs_bigclock_pane_g1

0xd524,	// (0x0003bf14) main_fs_bigclock_pane_t1_ParamLimits

0xd524,	// (0x0003bf14) main_fs_bigclock_pane_t1

0xd536,	// (0x0003bf26) main_fs_bigclock_pane_t2_ParamLimits

0xd536,	// (0x0003bf26) main_fs_bigclock_pane_t2

0xd548,	// (0x0003bf38) main_fs_bigclock_pane_t3_ParamLimits

0xd548,	// (0x0003bf38) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x0003e8a6) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x0003e8a6) main_fs_bigclock_pane_t

0xd55a,	// (0x0003bf4a) main_fs_bigclock_indicator_pane_g1

0x3884,	// (0x00032274) ncim_query_content_pane_g2_ParamLimits

0x3884,	// (0x00032274) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0003e634) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0003e634) ncim_query_content_pane_g

0xcd04,	// (0x0003b6f4) sc_clock_pane_t4_ParamLimits

0xcd04,	// (0x0003b6f4) sc_clock_pane_t4

0xf115,	// (0x0003db05) main_radioblah_pane

0x2a21,	// (0x00031411) cell_call4_button_pane_t1_copy1_ParamLimits

0x2a21,	// (0x00031411) cell_call4_button_pane_t1_copy1

0xc9d8,	// (0x0003b3c8) main_ncimui_pane_t1_ParamLimits

0xc9d8,	// (0x0003b3c8) main_ncimui_pane_t1

0xc9ea,	// (0x0003b3da) main_ncimui_pane_t2_ParamLimits

0xc9ea,	// (0x0003b3da) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x0003e62d) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x0003e62d) main_ncimui_pane_t

0x3cce,	// (0x000326be) main_radioblah_anim_pane_ParamLimits

0x3cce,	// (0x000326be) main_radioblah_anim_pane

0x3cdf,	// (0x000326cf) main_radioblah_info_pane_ParamLimits

0x3cdf,	// (0x000326cf) main_radioblah_info_pane

0x3cf3,	// (0x000326e3) main_radioblah_pane_t1_ParamLimits

0x3cf3,	// (0x000326e3) main_radioblah_pane_t1

0x3d0f,	// (0x000326ff) main_radioblah_pane_t2_ParamLimits

0x3d0f,	// (0x000326ff) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x0003e6c8) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x0003e6c8) main_radioblah_pane_t

0xcdca,	// (0x0003b7ba) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcdca,	// (0x0003b7ba) main_radioblah_rocker_ctrl_pane

0x3d57,	// (0x00032747) main_radioblah_info_pane_t1_ParamLimits

0x3d57,	// (0x00032747) main_radioblah_info_pane_t1

0xce0f,	// (0x0003b7ff) main_radioblah_info_pane_t2_ParamLimits

0xce0f,	// (0x0003b7ff) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0003e6d1) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0003e6d1) main_radioblah_info_pane_t

0x1e29,	// (0x00030819) main_radioblah_rocker_ctrl_pane_g1

0xcebf,	// (0x0003b8af) main_radioblah_rocker_ctrl_pane_g2

0xcec7,	// (0x0003b8b7) main_radioblah_rocker_ctrl_pane_g3

0xcecf,	// (0x0003b8bf) main_radioblah_rocker_ctrl_pane_g4

0xced7,	// (0x0003b8c7) main_radioblah_rocker_ctrl_pane_g5

0xcedf,	// (0x0003b8cf) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x0003e6da) main_radioblah_rocker_ctrl_pane_g

0xc98d,	// (0x0003b37d) main_cset_text2_pane_t1_copy1_ParamLimits

0xb29f,	// (0x00039c8f) cam4_image_uncrop_qvga_pane

0xb3cc,	// (0x00039dbc) vid4_image_uncrop_qcif_pane

0xc5ce,	// (0x0003afbe) cam6_image_uncrop_qvga_pane_ParamLimits

0xc5ce,	// (0x0003afbe) cam6_image_uncrop_qvga_pane

0x34a3,	// (0x00031e93) vid6_image_uncrop_qcif_pane_ParamLimits

0x34a3,	// (0x00031e93) vid6_image_uncrop_qcif_pane

0xdd8b,	// (0x0003c77b) bg_popup_preview_window_pane_cp03

0x3836,	// (0x00032226) list_cset_text2_pane

0x383e,	// (0x0003222e) main_cset6_text2_pane_g1

0x3846,	// (0x00032236) main_cset6_text2_pane_t1

0xcee7,	// (0x0003b8d7) list_cset_text2_pane_t1_ParamLimits

0xcee7,	// (0x0003b8d7) list_cset_text2_pane_t1

0xf115,	// (0x0003db05) main_radioblah_pane_ParamLimits

0xcc63,	// (0x0003b653) main_mobtv_info_pane_t3_ParamLimits

0xcc63,	// (0x0003b653) main_mobtv_info_pane_t3

0xcdb8,	// (0x0003b7a8) main_radioblah_pane_g1

0xcde3,	// (0x0003b7d3) main_radioblah_info_pane_g1

0xce64,	// (0x0003b854) main_radioblah_info_pane_t3_ParamLimits

0xce64,	// (0x0003b854) main_radioblah_info_pane_t3

0x8190,	// (0x00036b80) highlight_cell_cale_month_pane_ParamLimits

0x8190,	// (0x00036b80) highlight_cell_cale_month_pane

0xdd8b,	// (0x0003c77b) main_phob_fisheye_pane

0x21aa,	// (0x00030b9a) scroll_pane_cp0031_ParamLimits

0x21aa,	// (0x00030b9a) scroll_pane_cp0031

0x35b1,	// (0x00031fa1) wait_bar_pane_cp08_ParamLimits

0xc779,	// (0x0003b169) cset_list_set_pane_copy1_ParamLimits

0x3d91,	// (0x00032781) highlight_cell_cale_month_pane_g1

0xcf12,	// (0x0003b902) highlight_cell_cale_month_pane_t1

0x3140,	// (0x00031b30) list_gen_pane_cp01

0x2c82,	// (0x00031672) scroll_pane_01

0x5d74,	// (0x00034764) list_single_double_fisheye_pane

0x5d7d,	// (0x0003476d) list_double_fisheye_pane_g1_ParamLimits

0x5d7d,	// (0x0003476d) list_double_fisheye_pane_g1

0x5d89,	// (0x00034779) list_double_fisheye_pane_g2_ParamLimits

0x5d89,	// (0x00034779) list_double_fisheye_pane_g2

0x5d9d,	// (0x0003478d) list_double_fisheye_pane_g3_ParamLimits

0x5d9d,	// (0x0003478d) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x0003e6e7) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x0003e6e7) list_double_fisheye_pane_g

0x5dc6,	// (0x000347b6) list_double_fisheye_pane_t1_ParamLimits

0x5dc6,	// (0x000347b6) list_double_fisheye_pane_t1

0x5de1,	// (0x000347d1) list_double_fisheye_pane_t2_ParamLimits

0x5de1,	// (0x000347d1) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0003e6f2) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0003e6f2) list_double_fisheye_pane_t

0xdd8b,	// (0x0003c77b) main_call5_pane

0xcd2a,	// (0x0003b71a) sc_swipe_pane_ParamLimits

0xcd2a,	// (0x0003b71a) sc_swipe_pane

0xcf2c,	// (0x0003b91c) call5_image_pane_ParamLimits

0xcf2c,	// (0x0003b91c) call5_image_pane

0xcf3c,	// (0x0003b92c) call5_swipe_1_pane_ParamLimits

0xcf3c,	// (0x0003b92c) call5_swipe_1_pane

0xcf48,	// (0x0003b938) call5_swipe_2_pane_ParamLimits

0xcf48,	// (0x0003b938) call5_swipe_2_pane

0xcf62,	// (0x0003b952) popup_call5_audio_first_window_ParamLimits

0xcf62,	// (0x0003b952) popup_call5_audio_first_window

0x2090,	// (0x00030a80) call5_swipe_1_pane_g1_ParamLimits

0x2090,	// (0x00030a80) call5_swipe_1_pane_g1

0x3dd6,	// (0x000327c6) call5_swipe_1_pane_g2_ParamLimits

0x3dd6,	// (0x000327c6) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x0003e6f7) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x0003e6f7) call5_swipe_1_pane_g

0x3de2,	// (0x000327d2) call5_swipe_1_pane_t1_ParamLimits

0x3de2,	// (0x000327d2) call5_swipe_1_pane_t1

0x2090,	// (0x00030a80) call5_swipe_2_pane_g1_ParamLimits

0x2090,	// (0x00030a80) call5_swipe_2_pane_g1

0x3df7,	// (0x000327e7) call5_swipe_2_pane_g2_ParamLimits

0x3df7,	// (0x000327e7) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x0003e6fc) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x0003e6fc) call5_swipe_2_pane_g

0x3e03,	// (0x000327f3) call5_swipe_2_pane_t1_ParamLimits

0x3e03,	// (0x000327f3) call5_swipe_2_pane_t1

0x3e18,	// (0x00032808) sc_swipe_pane_g1_ParamLimits

0x3e18,	// (0x00032808) sc_swipe_pane_g1

0x3e25,	// (0x00032815) sc_swipe_pane_g2_ParamLimits

0x3e25,	// (0x00032815) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0003e701) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0003e701) sc_swipe_pane_g

0x3e31,	// (0x00032821) sc_swipe_pane_t1_ParamLimits

0x3e31,	// (0x00032821) sc_swipe_pane_t1

0xdd8b,	// (0x0003c77b) main_cmail_launcher_pane

0xcf70,	// (0x0003b960) aid_size_cell_cmail_l_ParamLimits

0xcf70,	// (0x0003b960) aid_size_cell_cmail_l

0xcf80,	// (0x0003b970) grid_cmail_l_pane_ParamLimits

0xcf80,	// (0x0003b970) grid_cmail_l_pane

0xcf90,	// (0x0003b980) cell_cmail_l_pane_ParamLimits

0xcf90,	// (0x0003b980) cell_cmail_l_pane

0xcfa4,	// (0x0003b994) cell_cmail_l_pane_g1_ParamLimits

0xcfa4,	// (0x0003b994) cell_cmail_l_pane_g1

0xcfb0,	// (0x0003b9a0) cell_cmail_l_pane_t1_ParamLimits

0xcfb0,	// (0x0003b9a0) cell_cmail_l_pane_t1

0x3e46,	// (0x00032836) cell_cmail_l_pane_t2_ParamLimits

0x3e46,	// (0x00032836) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0003e706) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0003e706) cell_cmail_l_pane_t

0xf115,	// (0x0003db05) grid_highlight_pane_cp018_ParamLimits

0xf115,	// (0x0003db05) grid_highlight_pane_cp018

0x6749,	// (0x00035139) main2_pane_ParamLimits

0x6749,	// (0x00035139) main2_pane

0xe619,	// (0x0003d009) popup_sp_fs_action_menu_bg_pane_g1

0xe621,	// (0x0003d011) popup_sp_fs_action_menu_bg_pane_g2

0xe629,	// (0x0003d019) popup_sp_fs_action_menu_bg_pane_g3

0xe631,	// (0x0003d021) popup_sp_fs_action_menu_bg_pane_g4

0xe639,	// (0x0003d029) popup_sp_fs_action_menu_bg_pane_g5

0xe641,	// (0x0003d031) popup_sp_fs_action_menu_bg_pane_g6

0xe649,	// (0x0003d039) popup_sp_fs_action_menu_bg_pane_g7

0xe651,	// (0x0003d041) popup_sp_fs_action_menu_bg_pane_g8

0xe659,	// (0x0003d049) popup_sp_fs_action_menu_bg_pane_g9

0xe661,	// (0x0003d051) popup_sp_fs_action_menu_bg_pane_g10

0xe661,	// (0x0003d051) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x0003dbdf) popup_sp_fs_action_menu_bg_pane_g

0x55fd,	// (0x00033fed) list_medium_line_x2_t3_g3_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x2_t3_g3_g1

0x5609,	// (0x00033ff9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5609,	// (0x00033ff9) list_medium_line_x2_t3_g3_g2

0x5615,	// (0x00034005) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5615,	// (0x00034005) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0003dc8f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0003dc8f) list_medium_line_x2_t3_g3_g

0x5621,	// (0x00034011) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5621,	// (0x00034011) list_medium_line_x2_t3_g3_t1

0x5636,	// (0x00034026) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5636,	// (0x00034026) list_medium_line_x2_t3_g3_t2

0x564a,	// (0x0003403a) list_medium_line_x2_t3_g3_t3_ParamLimits

0x564a,	// (0x0003403a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0003dc96) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0003dc96) list_medium_line_x2_t3_g3_t

0x55fd,	// (0x00033fed) list_medium_line_x2_t3_g2_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x2_t3_g2_g1

0x5615,	// (0x00034005) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5615,	// (0x00034005) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0003dc9d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0003dc9d) list_medium_line_x2_t3_g2_g

0x565f,	// (0x0003404f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x565f,	// (0x0003404f) list_medium_line_x2_t3_g2_t1

0x5675,	// (0x00034065) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5675,	// (0x00034065) list_medium_line_x2_t3_g2_t2

0x564a,	// (0x0003403a) list_medium_line_x2_t3_g2_t3_ParamLimits

0x564a,	// (0x0003403a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x0003dca2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x0003dca2) list_medium_line_x2_t3_g2_t

0x55fd,	// (0x00033fed) list_medium_line_x2_t4_g4_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x2_t4_g4_g1

0x5687,	// (0x00034077) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5687,	// (0x00034077) list_medium_line_x2_t4_g4_g2

0x5609,	// (0x00033ff9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5609,	// (0x00033ff9) list_medium_line_x2_t4_g4_g3

0x5693,	// (0x00034083) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5693,	// (0x00034083) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0003dca9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0003dca9) list_medium_line_x2_t4_g4_g

0x569f,	// (0x0003408f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x569f,	// (0x0003408f) list_medium_line_x2_t4_g4_t1

0x56b6,	// (0x000340a6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x56b6,	// (0x000340a6) list_medium_line_x2_t4_g4_t2

0x56cb,	// (0x000340bb) list_medium_line_x2_t4_g4_t3_ParamLimits

0x56cb,	// (0x000340bb) list_medium_line_x2_t4_g4_t3

0x56dd,	// (0x000340cd) list_medium_line_x2_t4_g4_t4_ParamLimits

0x56dd,	// (0x000340cd) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x0003dcb2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x0003dcb2) list_medium_line_x2_t4_g4_t

0x55fd,	// (0x00033fed) list_medium_line_x2_t2_g4_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x2_t2_g4_g1

0x5687,	// (0x00034077) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5687,	// (0x00034077) list_medium_line_x2_t2_g4_g2

0x5609,	// (0x00033ff9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5609,	// (0x00033ff9) list_medium_line_x2_t2_g4_g3

0x5615,	// (0x00034005) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5615,	// (0x00034005) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0003dd19) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0003dd19) list_medium_line_x2_t2_g4_g

0x56ef,	// (0x000340df) list_medium_line_x2_t2_g4_t1_ParamLimits

0x56ef,	// (0x000340df) list_medium_line_x2_t2_g4_t1

0x564a,	// (0x0003403a) list_medium_line_x2_t2_g4_t2_ParamLimits

0x564a,	// (0x0003403a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0003dd22) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0003dd22) list_medium_line_x2_t2_g4_t

0x55fd,	// (0x00033fed) list_medium_line_x2_t2_g3_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x2_t2_g3_g1

0x5609,	// (0x00033ff9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5609,	// (0x00033ff9) list_medium_line_x2_t2_g3_g2

0x5615,	// (0x00034005) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5615,	// (0x00034005) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0003dc8f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0003dc8f) list_medium_line_x2_t2_g3_g

0x5704,	// (0x000340f4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5704,	// (0x000340f4) list_medium_line_x2_t2_g3_t1

0x564a,	// (0x0003403a) list_medium_line_x2_t2_g3_t2_ParamLimits

0x564a,	// (0x0003403a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0003dd27) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0003dd27) list_medium_line_x2_t2_g3_t

0x840c,	// (0x00036dfc) main_sp_fs_list_pane_ParamLimits

0x840c,	// (0x00036dfc) main_sp_fs_list_pane

0x8418,	// (0x00036e08) sp_fs_scroll_pane_ParamLimits

0x8418,	// (0x00036e08) sp_fs_scroll_pane

0x5719,	// (0x00034109) list_medium_line_x2_t3_t1

0x5729,	// (0x00034119) list_medium_line_x2_t3_t2

0x5737,	// (0x00034127) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x0003dd72) list_medium_line_x2_t3_t

0x5745,	// (0x00034135) list_medium_line_x3_t4_t1

0x5755,	// (0x00034145) list_medium_line_x3_t4_t2

0x5763,	// (0x00034153) list_medium_line_x3_t4_t3

0x5737,	// (0x00034127) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0003dd79) list_medium_line_x3_t4_t

0x5771,	// (0x00034161) list_medium_line_x4_t5_t1

0x5781,	// (0x00034171) list_medium_line_x4_t5_t2

0x5763,	// (0x00034153) list_medium_line_x4_t5_t3

0x578f,	// (0x0003417f) list_medium_line_x4_t5_t4

0x5737,	// (0x00034127) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x0003dd82) list_medium_line_x4_t5_t

0x55fd,	// (0x00033fed) list_medium_line_t4_g4_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_t4_g4_g1

0x5693,	// (0x00034083) list_medium_line_t4_g4_g2_ParamLimits

0x5693,	// (0x00034083) list_medium_line_t4_g4_g2

0x579d,	// (0x0003418d) list_medium_line_t4_g4_g3_ParamLimits

0x579d,	// (0x0003418d) list_medium_line_t4_g4_g3

0x5615,	// (0x00034005) list_medium_line_t4_g4_g4_ParamLimits

0x5615,	// (0x00034005) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x0003dd8d) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x0003dd8d) list_medium_line_t4_g4_g

0x57a9,	// (0x00034199) list_medium_line_t4_g4_t1_ParamLimits

0x57a9,	// (0x00034199) list_medium_line_t4_g4_t1

0x57be,	// (0x000341ae) list_medium_line_t4_g4_t2_ParamLimits

0x57be,	// (0x000341ae) list_medium_line_t4_g4_t2

0x57d3,	// (0x000341c3) list_medium_line_t4_g4_t3_ParamLimits

0x57d3,	// (0x000341c3) list_medium_line_t4_g4_t3

0x564a,	// (0x0003403a) list_medium_line_t4_g4_t4_ParamLimits

0x564a,	// (0x0003403a) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0003dd96) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0003dd96) list_medium_line_t4_g4_t

0x850b,	// (0x00036efb) chi_dic_find_pane_g1

0x9469,	// (0x00037e59) main_tport_pane

0x5a80,	// (0x00034470) list_medium_line_plain_t1

0x5a8e,	// (0x0003447e) list_medium_line_t2_g2_g1_ParamLimits

0x5a8e,	// (0x0003447e) list_medium_line_t2_g2_g1

0x5a9a,	// (0x0003448a) list_medium_line_t2_g2_g2_ParamLimits

0x5a9a,	// (0x0003448a) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x0003e449) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x0003e449) list_medium_line_t2_g2_g

0x5aa6,	// (0x00034496) list_medium_line_t2_g2_t1_ParamLimits

0x5aa6,	// (0x00034496) list_medium_line_t2_g2_t1

0x5ac0,	// (0x000344b0) list_medium_line_t2_g2_t2_ParamLimits

0x5ac0,	// (0x000344b0) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x0003e44e) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x0003e44e) list_medium_line_t2_g2_t

0x5c53,	// (0x00034643) aid_sp_fs_list_icon_a_sm

0x5c5b,	// (0x0003464b) aid_sp_fs_list_icon_d

0x45e1,	// (0x00032fd1) aid_sp_fs_text_primary

0x4348,	// (0x00032d38) aid_sp_fs_text_secondary

0x5c63,	// (0x00034653) list_medium_line

0x5c63,	// (0x00034653) list_medium_line_g2

0x5c63,	// (0x00034653) list_medium_line_g3

0x5c63,	// (0x00034653) list_medium_line_plain

0x5c63,	// (0x00034653) list_medium_line_plain_t2

0x5c63,	// (0x00034653) list_medium_line_plain_t3

0x5c63,	// (0x00034653) list_medium_line_right_icon

0x5c63,	// (0x00034653) list_medium_line_right_iconx2

0x5c63,	// (0x00034653) list_medium_line_t2

0x5c63,	// (0x00034653) list_medium_line_t2_g2

0x5c63,	// (0x00034653) list_medium_line_t2_g3

0x5c63,	// (0x00034653) list_medium_line_t2_right_icon

0x5c63,	// (0x00034653) list_medium_line_t2_right_iconx2

0x5c63,	// (0x00034653) list_medium_line_t3

0x5c63,	// (0x00034653) list_medium_line_t3_g2

0x5c63,	// (0x00034653) list_medium_line_t3_g3

0x5c63,	// (0x00034653) list_medium_line_t3_right_iconx2

0x5c6c,	// (0x0003465c) list_medium_line_t4_g4

0x5c75,	// (0x00034665) list_medium_line_x2

0x5c75,	// (0x00034665) list_medium_line_x2_t2_g2

0x5c75,	// (0x00034665) list_medium_line_x2_t2_g3

0x5c75,	// (0x00034665) list_medium_line_x2_t2_g4

0x5c75,	// (0x00034665) list_medium_line_x2_t3

0x5c75,	// (0x00034665) list_medium_line_x2_t3_g2

0x5c75,	// (0x00034665) list_medium_line_x2_t3_g3

0x5c75,	// (0x00034665) list_medium_line_x2_t3_g4

0x5c75,	// (0x00034665) list_medium_line_x2_t4_g2

0x5c75,	// (0x00034665) list_medium_line_x2_t4_g4

0x5c7e,	// (0x0003466e) list_medium_line_x3

0x5c7e,	// (0x0003466e) list_medium_line_x3_t4

0x5c7e,	// (0x0003466e) list_medium_line_x3_t4_g4

0x5c6c,	// (0x0003465c) list_medium_line_x4_t4

0x5c6c,	// (0x0003465c) list_medium_line_x4_t4_g7

0x5c6c,	// (0x0003465c) list_medium_line_x4_t5

0x5c87,	// (0x00034677) list_single_fs_dyc_pane_ParamLimits

0x5c87,	// (0x00034677) list_single_fs_dyc_pane

0x55fd,	// (0x00033fed) list_medium_line_x4_t4_g7_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x4_t4_g7_g1

0x5ca3,	// (0x00034693) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5ca3,	// (0x00034693) list_medium_line_x4_t4_g7_g2

0x5caf,	// (0x0003469f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5caf,	// (0x0003469f) list_medium_line_x4_t4_g7_g3

0x5cbe,	// (0x000346ae) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5cbe,	// (0x000346ae) list_medium_line_x4_t4_g7_g4

0x5cca,	// (0x000346ba) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5cca,	// (0x000346ba) list_medium_line_x4_t4_g7_g5

0x5cd9,	// (0x000346c9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5cd9,	// (0x000346c9) list_medium_line_x4_t4_g7_g6

0x5ce8,	// (0x000346d8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5ce8,	// (0x000346d8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0003e613) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0003e613) list_medium_line_x4_t4_g7_g

0x5cf4,	// (0x000346e4) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5cf4,	// (0x000346e4) list_medium_line_x4_t4_g7_t1

0x5d09,	// (0x000346f9) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5d09,	// (0x000346f9) list_medium_line_x4_t4_g7_t2

0x5d1e,	// (0x0003470e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5d1e,	// (0x0003470e) list_medium_line_x4_t4_g7_t3

0x5d33,	// (0x00034723) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5d33,	// (0x00034723) list_medium_line_x4_t4_g7_t4

0x5d45,	// (0x00034735) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5d45,	// (0x00034735) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0003e622) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0003e622) list_medium_line_x4_t4_g7_t

0x5d57,	// (0x00034747) list_single_dyc_row_pane_ParamLimits

0x5d57,	// (0x00034747) list_single_dyc_row_pane

0xcf20,	// (0x0003b910) call5_gesture_pane_ParamLimits

0xcf20,	// (0x0003b910) call5_gesture_pane

0xcf54,	// (0x0003b944) call5_windows_pane_ParamLimits

0xcf54,	// (0x0003b944) call5_windows_pane

0xcfc6,	// (0x0003b9b6) call5_swipe_1_pane_cp_ParamLimits

0xcfc6,	// (0x0003b9b6) call5_swipe_1_pane_cp

0xcfd2,	// (0x0003b9c2) call5_swipe_2_pane_cp_ParamLimits

0xcfd2,	// (0x0003b9c2) call5_swipe_2_pane_cp

0xeffe,	// (0x0003d9ee) call5_image_pane_cp

0xcfde,	// (0x0003b9ce) popup_call5_audio_first_window_cp_ParamLimits

0xcfde,	// (0x0003b9ce) popup_call5_audio_first_window_cp

0x3e18,	// (0x00032808) call5_swipe_1_pane_g1_cp_ParamLimits

0x3e18,	// (0x00032808) call5_swipe_1_pane_g1_cp

0x3e58,	// (0x00032848) call5_swipe_1_pane_g2_cp

0x3e31,	// (0x00032821) call5_swipe_1_pane_t1_cp_ParamLimits

0x3e31,	// (0x00032821) call5_swipe_1_pane_t1_cp

0x3e18,	// (0x00032808) call5_swipe_2_pane_g1_cp_ParamLimits

0x3e18,	// (0x00032808) call5_swipe_2_pane_g1_cp

0x3e60,	// (0x00032850) call5_swipe_2_pane_g2_cp

0x3e68,	// (0x00032858) call5_swipe_2_pane_t1_cp_ParamLimits

0x3e68,	// (0x00032858) call5_swipe_2_pane_t1_cp

0xf115,	// (0x0003db05) main_sp_fs_email_pane

0x3e7d,	// (0x0003286d) main_sp_fs_listscroll_pane_te

0x5e03,	// (0x000347f3) popup_sp_fs_action_menu_pane_ParamLimits

0x5e03,	// (0x000347f3) popup_sp_fs_action_menu_pane

0x1e29,	// (0x00030819) bg_sp_fs_ctrlbar_pane_g1

0x3ec6,	// (0x000328b6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3ecf,	// (0x000328bf) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3ed8,	// (0x000328c8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1e29,	// (0x00030819) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x0003e70b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1c0c,	// (0x000305fc) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1c0c,	// (0x000305fc) bg_sp_fs_ctrlbar_ddmenu_pane

0x3ee1,	// (0x000328d1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3ee1,	// (0x000328d1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3eed,	// (0x000328dd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3eed,	// (0x000328dd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0003e714) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0003e714) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3ef9,	// (0x000328e9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3ef9,	// (0x000328e9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5e43,	// (0x00034833) list_medium_line_t2_right_icon_g1

0x5e4b,	// (0x0003483b) list_medium_line_t2_right_icon_t1

0x5e5b,	// (0x0003484b) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x0003e719) list_medium_line_t2_right_icon_t

0x1921,	// (0x00030311) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1921,	// (0x00030311) bg_sp_fs_ctrlbar_pane

0xd041,	// (0x0003ba31) main_sp_fs_ctrlbar_button_pane_cp01

0xd049,	// (0x0003ba39) main_sp_fs_ctrlbar_ddmenu_pane

0xf123,	// (0x0003db13) main_sp_fs_ctrlbar_pane_g1

0x3f53,	// (0x00032943) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x0003e71e) main_sp_fs_ctrlbar_pane_g

0x3f5f,	// (0x0003294f) main_sp_fs_ctrlbar_pane_t1

0x5e69,	// (0x00034859) main_sp_fs_ctrlbar_pane

0x5e85,	// (0x00034875) main_sp_fs_listscroll_pane_te_cp01

0x5e96,	// (0x00034886) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5e96,	// (0x00034886) popup_sp_fs_action_menu_pane_cp01

0xf115,	// (0x0003db05) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf115,	// (0x0003db05) bg_sp_fs_highlight_list_pane_cp01

0x5eae,	// (0x0003489e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5eae,	// (0x0003489e) sp_fs_action_menu_list_gene_pane_g1

0x3f83,	// (0x00032973) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3f83,	// (0x00032973) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0003e723) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0003e723) sp_fs_action_menu_list_gene_pane_g

0x5ebd,	// (0x000348ad) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5ebd,	// (0x000348ad) sp_fs_action_menu_list_gene_pane_t1

0x5ed5,	// (0x000348c5) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5ed5,	// (0x000348c5) sp_fs_action_menu_list_gene_pane

0x3fc5,	// (0x000329b5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3fc5,	// (0x000329b5) popup_sp_fs_action_menu_bg_pane

0x5ef2,	// (0x000348e2) sp_fs_action_menu_list_pane_ParamLimits

0x5ef2,	// (0x000348e2) sp_fs_action_menu_list_pane

0x3ff1,	// (0x000329e1) sp_fs_scroll_pane_cp01_ParamLimits

0x3ff1,	// (0x000329e1) sp_fs_scroll_pane_cp01

0x5f10,	// (0x00034900) list_medium_line_plain_t2_t1

0x5f20,	// (0x00034910) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x0003e728) list_medium_line_plain_t2_t

0x5f2e,	// (0x0003491e) list_medium_line_plain_t3_t1

0x5f3e,	// (0x0003492e) list_medium_line_plain_t3_t2

0x5f4c,	// (0x0003493c) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x0003e72d) list_medium_line_plain_t3_t

0x55fd,	// (0x00033fed) list_medium_line_x2_t2_g2_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x2_t2_g2_g1

0x5615,	// (0x00034005) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5615,	// (0x00034005) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0003dc9d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0003dc9d) list_medium_line_x2_t2_g2_g

0x57a9,	// (0x00034199) list_medium_line_x2_t2_g2_t1_ParamLimits

0x57a9,	// (0x00034199) list_medium_line_x2_t2_g2_t1

0x564a,	// (0x0003403a) list_medium_line_x2_t2_g2_t2_ParamLimits

0x564a,	// (0x0003403a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0003e734) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0003e734) list_medium_line_x2_t2_g2_t

0x55fd,	// (0x00033fed) list_medium_line_x2_t4_g2_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x2_t4_g2_g1

0x5f5a,	// (0x0003494a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5f5a,	// (0x0003494a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x0003e739) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x0003e739) list_medium_line_x2_t4_g2_g

0x5f6c,	// (0x0003495c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5f6c,	// (0x0003495c) list_medium_line_x2_t4_g2_t1

0x5f86,	// (0x00034976) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5f86,	// (0x00034976) list_medium_line_x2_t4_g2_t2

0x5f9b,	// (0x0003498b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5f9b,	// (0x0003498b) list_medium_line_x2_t4_g2_t3

0x564a,	// (0x0003403a) list_medium_line_x2_t4_g2_t4_ParamLimits

0x564a,	// (0x0003403a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x0003e73e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x0003e73e) list_medium_line_x2_t4_g2_t

0x5fb0,	// (0x000349a0) list_medium_line_t3_right_iconx2_g1

0x5e43,	// (0x00034833) list_medium_line_t3_right_iconx2_g2

0x5fb8,	// (0x000349a8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x0003e747) list_medium_line_t3_right_iconx2_g

0x5fc0,	// (0x000349b0) list_medium_line_t3_right_iconx2_t1

0x5fd0,	// (0x000349c0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x0003e74e) list_medium_line_t3_right_iconx2_t

0x55fd,	// (0x00033fed) list_medium_line_x3_t4_g4_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x3_t4_g4_g1

0x5609,	// (0x00033ff9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5609,	// (0x00033ff9) list_medium_line_x3_t4_g4_g2

0x5693,	// (0x00034083) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5693,	// (0x00034083) list_medium_line_x3_t4_g4_g3

0x5fde,	// (0x000349ce) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5fde,	// (0x000349ce) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x0003e753) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x0003e753) list_medium_line_x3_t4_g4_g

0x5fea,	// (0x000349da) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5fea,	// (0x000349da) list_medium_line_x3_t4_g4_t1

0x6001,	// (0x000349f1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6001,	// (0x000349f1) list_medium_line_x3_t4_g4_t2

0x57be,	// (0x000341ae) list_medium_line_x3_t4_g4_t3_ParamLimits

0x57be,	// (0x000341ae) list_medium_line_x3_t4_g4_t3

0x6016,	// (0x00034a06) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6016,	// (0x00034a06) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x0003e75c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x0003e75c) list_medium_line_x3_t4_g4_t

0x6033,	// (0x00034a23) list_single_dyc_row_text_pane_t1_ParamLimits

0x6033,	// (0x00034a23) list_single_dyc_row_text_pane_t1

0x606a,	// (0x00034a5a) list_single_dyc_row_text_pane_t2_ParamLimits

0x606a,	// (0x00034a5a) list_single_dyc_row_text_pane_t2

0x60c4,	// (0x00034ab4) list_single_dyc_row_text_pane_t3_ParamLimits

0x60c4,	// (0x00034ab4) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x0003e765) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x0003e765) list_single_dyc_row_text_pane_t

0x60d6,	// (0x00034ac6) list_single_dyc_row_pane_g1_ParamLimits

0x60d6,	// (0x00034ac6) list_single_dyc_row_pane_g1

0x60e2,	// (0x00034ad2) list_single_dyc_row_pane_g2_ParamLimits

0x60e2,	// (0x00034ad2) list_single_dyc_row_pane_g2

0x60ee,	// (0x00034ade) list_single_dyc_row_pane_g3_ParamLimits

0x60ee,	// (0x00034ade) list_single_dyc_row_pane_g3

0x60fa,	// (0x00034aea) list_single_dyc_row_pane_g4_ParamLimits

0x60fa,	// (0x00034aea) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x0003e76c) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x0003e76c) list_single_dyc_row_pane_g

0x6106,	// (0x00034af6) list_single_dyc_row_text_pane_ParamLimits

0x6106,	// (0x00034af6) list_single_dyc_row_text_pane

0xdd8b,	// (0x0003c77b) bg_sp_fs_scroll_pane

0x40a9,	// (0x00032a99) thumb_sp_fs_scroll_pane

0x5a8e,	// (0x0003447e) list_medium_line_g1_ParamLimits

0x5a8e,	// (0x0003447e) list_medium_line_g1

0x6125,	// (0x00034b15) list_medium_line_t1_ParamLimits

0x6125,	// (0x00034b15) list_medium_line_t1

0x55fd,	// (0x00033fed) list_medium_line_x2_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x2_g1

0x5609,	// (0x00033ff9) list_medium_line_x2_g2_ParamLimits

0x5609,	// (0x00033ff9) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x0003e775) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x0003e775) list_medium_line_x2_g

0x613a,	// (0x00034b2a) list_medium_line_x2_t1_ParamLimits

0x613a,	// (0x00034b2a) list_medium_line_x2_t1

0x55fd,	// (0x00033fed) list_medium_line_x3_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x3_g1

0x5609,	// (0x00033ff9) list_medium_line_x3_g2_ParamLimits

0x5609,	// (0x00033ff9) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x0003e775) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x0003e775) list_medium_line_x3_g

0x613a,	// (0x00034b2a) list_medium_line_x3_t1_ParamLimits

0x613a,	// (0x00034b2a) list_medium_line_x3_t1

0x40dd,	// (0x00032acd) thumb_sp_fs_scroll_pane_g1

0x40e6,	// (0x00032ad6) thumb_sp_fs_scroll_pane_g2

0x40ef,	// (0x00032adf) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0003e77a) thumb_sp_fs_scroll_pane_g

0x40dd,	// (0x00032acd) bg_sp_fs_scroll_pane_g1

0x40e6,	// (0x00032ad6) bg_sp_fs_scroll_pane_g2

0x40ef,	// (0x00032adf) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x0003e77a) bg_sp_fs_scroll_pane_g

0x55fd,	// (0x00033fed) list_medium_line_x2_t3_g4_g1_ParamLimits

0x55fd,	// (0x00033fed) list_medium_line_x2_t3_g4_g1

0x5687,	// (0x00034077) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5687,	// (0x00034077) list_medium_line_x2_t3_g4_g2

0x5609,	// (0x00033ff9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5609,	// (0x00033ff9) list_medium_line_x2_t3_g4_g3

0x5615,	// (0x00034005) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5615,	// (0x00034005) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0003dd19) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0003dd19) list_medium_line_x2_t3_g4_g

0x6150,	// (0x00034b40) list_medium_line_x2_t3_g4_t1_ParamLimits

0x6150,	// (0x00034b40) list_medium_line_x2_t3_g4_t1

0x6166,	// (0x00034b56) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6166,	// (0x00034b56) list_medium_line_x2_t3_g4_t2

0x564a,	// (0x0003403a) list_medium_line_x2_t3_g4_t3_ParamLimits

0x564a,	// (0x0003403a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x0003e781) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x0003e781) list_medium_line_x2_t3_g4_t

0x5a8e,	// (0x0003447e) list_medium_line_g2_g1_ParamLimits

0x5a8e,	// (0x0003447e) list_medium_line_g2_g1

0x5a9a,	// (0x0003448a) list_medium_line_g2_g2_ParamLimits

0x5a9a,	// (0x0003448a) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x0003e449) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x0003e449) list_medium_line_g2_g

0x617f,	// (0x00034b6f) list_medium_line_g2_t1_ParamLimits

0x617f,	// (0x00034b6f) list_medium_line_g2_t1

0x5a8e,	// (0x0003447e) list_medium_line_t3_g2_g1_ParamLimits

0x5a8e,	// (0x0003447e) list_medium_line_t3_g2_g1

0x5a9a,	// (0x0003448a) list_medium_line_t3_g2_g2_ParamLimits

0x5a9a,	// (0x0003448a) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x0003e449) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x0003e449) list_medium_line_t3_g2_g

0x6194,	// (0x00034b84) list_medium_line_t3_g2_t1_ParamLimits

0x6194,	// (0x00034b84) list_medium_line_t3_g2_t1

0x61ae,	// (0x00034b9e) list_medium_line_t3_g2_t2_ParamLimits

0x61ae,	// (0x00034b9e) list_medium_line_t3_g2_t2

0x61c3,	// (0x00034bb3) list_medium_line_t3_g2_t3_ParamLimits

0x61c3,	// (0x00034bb3) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x0003e788) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x0003e788) list_medium_line_t3_g2_t

0x5e43,	// (0x00034833) list_medium_line_right_icon_g1

0x61d9,	// (0x00034bc9) list_medium_line_right_icon_t1

0x5a8e,	// (0x0003447e) list_medium_line_t2_g1_ParamLimits

0x5a8e,	// (0x0003447e) list_medium_line_t2_g1

0x61e7,	// (0x00034bd7) list_medium_line_t2_t1_ParamLimits

0x61e7,	// (0x00034bd7) list_medium_line_t2_t1

0x61fe,	// (0x00034bee) list_medium_line_t2_t2_ParamLimits

0x61fe,	// (0x00034bee) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x0003e78f) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x0003e78f) list_medium_line_t2_t

0x5a8e,	// (0x0003447e) list_medium_line_t3_g1_ParamLimits

0x5a8e,	// (0x0003447e) list_medium_line_t3_g1

0x6210,	// (0x00034c00) list_medium_line_t3_t1_ParamLimits

0x6210,	// (0x00034c00) list_medium_line_t3_t1

0x6227,	// (0x00034c17) list_medium_line_t3_t2_ParamLimits

0x6227,	// (0x00034c17) list_medium_line_t3_t2

0x623c,	// (0x00034c2c) list_medium_line_t3_t3_ParamLimits

0x623c,	// (0x00034c2c) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x0003e794) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x0003e794) list_medium_line_t3_t

0x5a8e,	// (0x0003447e) list_medium_line_g3_g1_ParamLimits

0x5a8e,	// (0x0003447e) list_medium_line_g3_g1

0x624e,	// (0x00034c3e) list_medium_line_g3_g2_ParamLimits

0x624e,	// (0x00034c3e) list_medium_line_g3_g2

0x5a9a,	// (0x0003448a) list_medium_line_g3_g3_ParamLimits

0x5a9a,	// (0x0003448a) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x0003e79b) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x0003e79b) list_medium_line_g3_g

0x625a,	// (0x00034c4a) list_medium_line_g3_t1_ParamLimits

0x625a,	// (0x00034c4a) list_medium_line_g3_t1

0x5a8e,	// (0x0003447e) list_medium_line_t2_g3_g1_ParamLimits

0x5a8e,	// (0x0003447e) list_medium_line_t2_g3_g1

0x624e,	// (0x00034c3e) list_medium_line_t2_g3_g2_ParamLimits

0x624e,	// (0x00034c3e) list_medium_line_t2_g3_g2

0x5a9a,	// (0x0003448a) list_medium_line_t2_g3_g3_ParamLimits

0x5a9a,	// (0x0003448a) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x0003e79b) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x0003e79b) list_medium_line_t2_g3_g

0x626f,	// (0x00034c5f) list_medium_line_t2_g3_t1_ParamLimits

0x626f,	// (0x00034c5f) list_medium_line_t2_g3_t1

0x6289,	// (0x00034c79) list_medium_line_t2_g3_t2_ParamLimits

0x6289,	// (0x00034c79) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x0003e7a2) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x0003e7a2) list_medium_line_t2_g3_t

0x5a8e,	// (0x0003447e) list_medium_line_t3_g3_g1_ParamLimits

0x5a8e,	// (0x0003447e) list_medium_line_t3_g3_g1

0x624e,	// (0x00034c3e) list_medium_line_t3_g3_g2_ParamLimits

0x624e,	// (0x00034c3e) list_medium_line_t3_g3_g2

0x5a9a,	// (0x0003448a) list_medium_line_t3_g3_g3_ParamLimits

0x5a9a,	// (0x0003448a) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x0003e79b) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x0003e79b) list_medium_line_t3_g3_g

0x629e,	// (0x00034c8e) list_medium_line_t3_g3_t1_ParamLimits

0x629e,	// (0x00034c8e) list_medium_line_t3_g3_t1

0x62b7,	// (0x00034ca7) list_medium_line_t3_g3_t2_ParamLimits

0x62b7,	// (0x00034ca7) list_medium_line_t3_g3_t2

0x62cd,	// (0x00034cbd) list_medium_line_t3_g3_t3_ParamLimits

0x62cd,	// (0x00034cbd) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x0003e7a7) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x0003e7a7) list_medium_line_t3_g3_t

0x5fb0,	// (0x000349a0) list_medium_line_right_iconx2_g1

0x5e43,	// (0x00034833) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0003e7ae) list_medium_line_right_iconx2_g

0x62e3,	// (0x00034cd3) list_medium_line_right_iconx2_t1

0x5fb0,	// (0x000349a0) list_medium_line_t2_right_iconx2_g1

0x5e43,	// (0x00034833) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x0003e7ae) list_medium_line_t2_right_iconx2_g

0x62f1,	// (0x00034ce1) list_medium_line_t2_right_iconx2_t1

0x6301,	// (0x00034cf1) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x0003e7b3) list_medium_line_t2_right_iconx2_t

0x630f,	// (0x00034cff) list_medium_line_x4_t4_t1

0x631d,	// (0x00034d0d) list_medium_line_x4_t4_t2

0x632d,	// (0x00034d1d) list_medium_line_x4_t4_t3

0x633d,	// (0x00034d2d) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x0003e7b8) list_medium_line_x4_t4_t

0xd07c,	// (0x0003ba6c) tport_appsw_pane_ParamLimits

0xd07c,	// (0x0003ba6c) tport_appsw_pane

0xd088,	// (0x0003ba78) tport_contact_pane_ParamLimits

0xd088,	// (0x0003ba78) tport_contact_pane

0xd098,	// (0x0003ba88) tport_listscroll_pane_ParamLimits

0xd098,	// (0x0003ba88) tport_listscroll_pane

0xd0a8,	// (0x0003ba98) cell_tport_appsw_pane_ParamLimits

0xd0a8,	// (0x0003ba98) cell_tport_appsw_pane

0x212d,	// (0x00030b1d) tport_appsw_pane_g1_ParamLimits

0x212d,	// (0x00030b1d) tport_appsw_pane_g1

0x4158,	// (0x00032b48) tport_contact_pane_g1

0x4161,	// (0x00032b51) tport_contact_pane_t1

0x416f,	// (0x00032b5f) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0003e7c1) tport_contact_pane_t

0x417d,	// (0x00032b6d) list_tport_pane

0x4186,	// (0x00032b76) scroll_pane_cp_030

0xd0bd,	// (0x0003baad) cell_tport_appsw_pane_g1

0x418f,	// (0x00032b7f) cell_tport_appsw_pane_t1

0xdd8b,	// (0x0003c77b) grid_highlight_pane_cp019

0xd0d5,	// (0x0003bac5) list_tport_double_graphic_pane_ParamLimits

0xd0d5,	// (0x0003bac5) list_tport_double_graphic_pane

0xf115,	// (0x0003db05) list_highlight_pane_cp023_ParamLimits

0xf115,	// (0x0003db05) list_highlight_pane_cp023

0xd0e8,	// (0x0003bad8) list_tport_double_graphic_pane_g1_ParamLimits

0xd0e8,	// (0x0003bad8) list_tport_double_graphic_pane_g1

0xd0f5,	// (0x0003bae5) list_tport_double_graphic_pane_t1_ParamLimits

0xd0f5,	// (0x0003bae5) list_tport_double_graphic_pane_t1

0xd10a,	// (0x0003bafa) list_tport_double_graphic_pane_t2_ParamLimits

0xd10a,	// (0x0003bafa) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x0003e7cd) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x0003e7cd) list_tport_double_graphic_pane_t

0xdd8b,	// (0x0003c77b) main_cale_note_pane

0xb606,	// (0x00039ff6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb606,	// (0x00039ff6) cell_vitu2_function_top_wide_pane_cp01

0xcc77,	// (0x0003b667) wait_bar_pane_cp05_ParamLimits

0xdd8b,	// (0x0003c77b) listscroll_cmail_pane

0x41a5,	// (0x00032b95) list_cmail_pane

0xd126,	// (0x0003bb16) list_cmail_body_pane

0xd14a,	// (0x0003bb3a) list_single_cmail_header_caption_pane

0xd178,	// (0x0003bb68) list_single_cmail_header_detail_pane_ParamLimits

0xd178,	// (0x0003bb68) list_single_cmail_header_detail_pane

0xd1b0,	// (0x0003bba0) list_single_cmail_header_caption_pane_t1

0x634d,	// (0x00034d3d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x634d,	// (0x00034d3d) list_single_cmail_header_detail_pane_g1

0x6365,	// (0x00034d55) list_single_cmail_header_detail_pane_g2_ParamLimits

0x6365,	// (0x00034d55) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0003e7d2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0003e7d2) list_single_cmail_header_detail_pane_g

0x6371,	// (0x00034d61) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6371,	// (0x00034d61) list_single_cmail_header_detail_pane_t1

0x63c9,	// (0x00034db9) list_single_cmail_header_editor_pane_bg_ParamLimits

0x63c9,	// (0x00034db9) list_single_cmail_header_editor_pane_bg

0x4222,	// (0x00032c12) list_cmail_body_pane_g1

0x422b,	// (0x00032c1b) list_cmail_body_pane_t1

0x2b68,	// (0x00031558) list_single_cmail_header_editor_pane_bg_g1

0xe986,	// (0x0003d376) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2b78,	// (0x00031568) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2b70,	// (0x00031560) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2de9,	// (0x000317d9) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2b98,	// (0x00031588) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2b88,	// (0x00031578) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2b90,	// (0x00031580) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe966,	// (0x0003d356) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd1c0,	// (0x0003bbb0) calenote_gesture_pane_ParamLimits

0xd1c0,	// (0x0003bbb0) calenote_gesture_pane

0xd1da,	// (0x0003bbca) calenote_window_pane_ParamLimits

0xd1da,	// (0x0003bbca) calenote_window_pane

0x4239,	// (0x00032c29) popup_note_window_cp01

0xd1f2,	// (0x0003bbe2) calenote_swipe_1_pane_ParamLimits

0xd1f2,	// (0x0003bbe2) calenote_swipe_1_pane

0xcfd2,	// (0x0003b9c2) calenote_swipe_2_pane_ParamLimits

0xcfd2,	// (0x0003b9c2) calenote_swipe_2_pane

0x3e18,	// (0x00032808) calenote_swipe_1_pane_g1_ParamLimits

0x3e18,	// (0x00032808) calenote_swipe_1_pane_g1

0x3e25,	// (0x00032815) calenote_swipe_1_pane_g2_ParamLimits

0x3e25,	// (0x00032815) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0003e701) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0003e701) calenote_swipe_1_pane_g

0x424b,	// (0x00032c3b) calenote_swipe_1_pane_t1_ParamLimits

0x424b,	// (0x00032c3b) calenote_swipe_1_pane_t1

0x3e18,	// (0x00032808) calenote_swipe_2_pane_g1_ParamLimits

0x3e18,	// (0x00032808) calenote_swipe_2_pane_g1

0x426a,	// (0x00032c5a) calenote_swipe_2_pane_g2_ParamLimits

0x426a,	// (0x00032c5a) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x0003e7de) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x0003e7de) calenote_swipe_2_pane_g

0x4276,	// (0x00032c66) calenote_swipe_2_pane_t1_ParamLimits

0x4276,	// (0x00032c66) calenote_swipe_2_pane_t1

0xdd8b,	// (0x0003c77b) main_mup_navstr_pane

0xa3f4,	// (0x00038de4) main_mup3_pane_t7_ParamLimits

0xa3f4,	// (0x00038de4) main_mup3_pane_t7

0xaddf,	// (0x000397cf) main_mp4_pane_g6_ParamLimits

0xaddf,	// (0x000397cf) main_mp4_pane_g6

0xb145,	// (0x00039b35) main_image3_pane_t4_ParamLimits

0xb145,	// (0x00039b35) main_image3_pane_t4

0xd205,	// (0x0003bbf5) popup_navstr_preview_pane_ParamLimits

0xd205,	// (0x0003bbf5) popup_navstr_preview_pane

0xd211,	// (0x0003bc01) scroll_navstr_pane_ParamLimits

0xd211,	// (0x0003bc01) scroll_navstr_pane

0xdd8b,	// (0x0003c77b) bg_popup_preview_window_pane_cp04

0x429d,	// (0x00032c8d) popup_navstr_preview_pane_t1

0xd21d,	// (0x0003bc0d) scroll_navstr_pane_g1_ParamLimits

0xd21d,	// (0x0003bc0d) scroll_navstr_pane_g1

0xd22a,	// (0x0003bc1a) scroll_navstr_pane_t1_ParamLimits

0xd22a,	// (0x0003bc1a) scroll_navstr_pane_t1

0x4242,	// (0x00032c32) bg_button_pane_cp014

0x4242,	// (0x00032c32) bg_button_pane_cp030

0x5da9,	// (0x00034799) list_double_fisheye_pane_g4_ParamLimits

0x5da9,	// (0x00034799) list_double_fisheye_pane_g4

0x5db5,	// (0x000347a5) list_double_fisheye_pane_g5_ParamLimits

0x5db5,	// (0x000347a5) list_double_fisheye_pane_g5

0x41ad,	// (0x00032b9d) sp_fs_scroll_pane_cp03

0xf123,	// (0x0003db13) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3f53,	// (0x00032943) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x0003e71e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3f5f,	// (0x0003294f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd11c,	// (0x0003bb0c) sp_fs_scroll_pane_cp02

0xe684,	// (0x0003d074) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe684,	// (0x0003d074) popup_sp_fs_calendar_preview_list_single_pane

0xdd8b,	// (0x0003c77b) main_cam6_pano_pane

0xf115,	// (0x0003db05) main_mup3_pane_ParamLimits

0xdd8b,	// (0x0003c77b) main_phacti_pane

0xcb4c,	// (0x0003b53c) bg_button_pane_cp11

0xcb64,	// (0x0003b554) main_mobtv_info_pane_g2_ParamLimits

0xcb64,	// (0x0003b554) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x0003e67e) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x0003e67e) main_mobtv_info_pane_g

0xcd16,	// (0x0003b706) sc_clock_pane_t5_ParamLimits

0xcd16,	// (0x0003b706) sc_clock_pane_t5

0xcdb8,	// (0x0003b7a8) main_radioblah_pane_g1_ParamLimits

0x3d27,	// (0x00032717) main_radioblah_pane_t3_ParamLimits

0x3d27,	// (0x00032717) main_radioblah_pane_t3

0x3d3f,	// (0x0003272f) main_radioblah_pane_t4_ParamLimits

0x3d3f,	// (0x0003272f) main_radioblah_pane_t4

0xcdd6,	// (0x0003b7c6) main_radioblah_text_pane_ParamLimits

0xcdd6,	// (0x0003b7c6) main_radioblah_text_pane

0xcde3,	// (0x0003b7d3) main_radioblah_info_pane_g1_ParamLimits

0xce78,	// (0x0003b868) main_radioblah_info_pane_t4_ParamLimits

0xce78,	// (0x0003b868) main_radioblah_info_pane_t4

0xf115,	// (0x0003db05) main_sp_fs_calendar_pane

0xd23c,	// (0x0003bc2c) main_phacti_pane_g1

0xd244,	// (0x0003bc34) phacti_note_pane_ParamLimits

0xd244,	// (0x0003bc34) phacti_note_pane

0x42b4,	// (0x00032ca4) phacti_term_pane_ParamLimits

0x42b4,	// (0x00032ca4) phacti_term_pane

0x42c9,	// (0x00032cb9) phacti_note_pane_t1_ParamLimits

0x42c9,	// (0x00032cb9) phacti_note_pane_t1

0x63db,	// (0x00034dcb) phacti_term_pane_g1

0x63e3,	// (0x00034dd3) phacti_term_pane_t1_ParamLimits

0x63e3,	// (0x00034dd3) phacti_term_pane_t1

0x4312,	// (0x00032d02) popup_sp_fs_calendar_preview_list_single_pane_g1

0x431a,	// (0x00032d0a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x0003e7e8) popup_sp_fs_calendar_preview_list_single_pane_g

0x4322,	// (0x00032d12) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x4322,	// (0x00032d12) popup_sp_fs_calendar_preview_list_single_pane_t1

0x4338,	// (0x00032d28) aid_popup_sp_fs_bg_corner_pane

0x1e29,	// (0x00030819) popup_sp_fs_calendar_preview_bg_pane_g1

0xdd8b,	// (0x0003c77b) popup_sp_fs_calendar_preview_bg_pane

0x4340,	// (0x00032d30) popup_sp_fs_calendar_preview_list_pane

0xf115,	// (0x0003db05) bg_main_sp_fs_cale_pane_ParamLimits

0xf115,	// (0x0003db05) bg_main_sp_fs_cale_pane

0x640d,	// (0x00034dfd) listscroll_cale_mrui_pane_ParamLimits

0x640d,	// (0x00034dfd) listscroll_cale_mrui_pane

0x6421,	// (0x00034e11) listscroll_sp_fs_schedule_track_pane

0x642a,	// (0x00034e1a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x642a,	// (0x00034e1a) main_sp_fs_ctrlbar_pane_cp01

0x437f,	// (0x00032d6f) main_sp_fs_ribbon_pane

0x4387,	// (0x00032d77) popup_sp_fs_cale_preview_window

0xd287,	// (0x0003bc77) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd287,	// (0x0003bc77) list_single_sp_fs_schedule_track_pane

0x68c9,	// (0x000352b9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x68c9,	// (0x000352b9) bg_sp_fs_highlight_list_pane_cp03

0xd2a9,	// (0x0003bc99) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd2a9,	// (0x0003bc99) list_single_sp_fs_schedule_track_pane_g1

0xd2b5,	// (0x0003bca5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd2b5,	// (0x0003bca5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x0003e7ed) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x0003e7ed) list_single_sp_fs_schedule_track_pane_g

0xd2c1,	// (0x0003bcb1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd2c1,	// (0x0003bcb1) list_single_sp_fs_schedule_track_pane_t1

0xd2d9,	// (0x0003bcc9) sp_fs_schedule_track_pane_ParamLimits

0xd2d9,	// (0x0003bcc9) sp_fs_schedule_track_pane

0x4399,	// (0x00032d89) sp_fs_schedule_track_pane_g1

0x43a1,	// (0x00032d91) sp_fs_schedule_track_pane_g2

0x43a9,	// (0x00032d99) sp_fs_schedule_track_pane_g3

0x43b1,	// (0x00032da1) sp_fs_schedule_track_pane_g4

0x43b9,	// (0x00032da9) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0003e7f2) sp_fs_schedule_track_pane_g

0x2b68,	// (0x00031558) bg_sp_fs_schedule_viewer_highlight_g1

0xe986,	// (0x0003d376) bg_sp_fs_schedule_viewer_highlight_g2

0x2b70,	// (0x00031560) bg_sp_fs_schedule_viewer_highlight_g3

0x2b78,	// (0x00031568) bg_sp_fs_schedule_viewer_highlight_g4

0x2de9,	// (0x000317d9) bg_sp_fs_schedule_viewer_highlight_g5

0x2b88,	// (0x00031578) bg_sp_fs_schedule_viewer_highlight_g6

0x2b90,	// (0x00031580) bg_sp_fs_schedule_viewer_highlight_g7

0x2b98,	// (0x00031588) bg_sp_fs_schedule_viewer_highlight_g8

0xe966,	// (0x0003d356) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x0003e7fd) bg_sp_fs_schedule_viewer_highlight_g

0xdd8b,	// (0x0003c77b) bg_main_sp_fs_ribbon_pane

0xd2e9,	// (0x0003bcd9) main_sp_fs_ribbon_pane_g1

0x43c1,	// (0x00032db1) main_sp_fs_ribbon_pane_t1

0xd2f2,	// (0x0003bce2) main_sp_fs_ribbon_pane_t2

0x43d0,	// (0x00032dc0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x0003e810) main_sp_fs_ribbon_pane_t

0x43df,	// (0x00032dcf) main_sp_fs_ribbon_scheduler_pane

0x43e7,	// (0x00032dd7) bg_main_sp_fs_ribbon_pane_g1

0x43f0,	// (0x00032de0) bg_main_sp_fs_ribbon_pane_g2

0x43f9,	// (0x00032de9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x0003e817) bg_main_sp_fs_ribbon_pane_g

0x4401,	// (0x00032df1) main_sp_fs_ribbon_scheduler_pane_g1

0x440a,	// (0x00032dfa) main_sp_fs_ribbon_scheduler_pane_g2

0x4413,	// (0x00032e03) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x0003e81e) main_sp_fs_ribbon_scheduler_pane_g

0x441c,	// (0x00032e0c) list_cale_mrui_pane

0xd301,	// (0x0003bcf1) sp_fs_scroll_pane_cp07_ParamLimits

0xd301,	// (0x0003bcf1) sp_fs_scroll_pane_cp07

0xd317,	// (0x0003bd07) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd317,	// (0x0003bd07) bg_sp_fs_schedule_viewer_highlight

0x4425,	// (0x00032e15) list_single_sp_fs_schedule_track_pane_cp01

0x442d,	// (0x00032e1d) list_sp_fs_schedule_track_pane

0x4435,	// (0x00032e25) sp_fs_scroll_pane_cp06_ParamLimits

0x4435,	// (0x00032e25) sp_fs_scroll_pane_cp06

0x1e29,	// (0x00030819) bgmain_sp_fs_calendar_pane_g1

0x643b,	// (0x00034e2b) list_single_cale_mrui_pane_ParamLimits

0x643b,	// (0x00034e2b) list_single_cale_mrui_pane

0x646a,	// (0x00034e5a) list_single_cale_mrui_row_pane_ParamLimits

0x646a,	// (0x00034e5a) list_single_cale_mrui_row_pane

0x6477,	// (0x00034e67) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6477,	// (0x00034e67) list_single_cale_mrui_row_pane_g1

0x64af,	// (0x00034e9f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x64af,	// (0x00034e9f) list_single_cale_mrui_row_pane_t1

0x64c1,	// (0x00034eb1) list_single_cale_mrui_row_pane_t2_ParamLimits

0x64c1,	// (0x00034eb1) list_single_cale_mrui_row_pane_t2

0x6527,	// (0x00034f17) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6527,	// (0x00034f17) list_single_cale_mrui_row_pane_t3

0x6556,	// (0x00034f46) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6556,	// (0x00034f46) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x0003e82a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x0003e82a) list_single_cale_mrui_row_pane_t

0x6585,	// (0x00034f75) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6585,	// (0x00034f75) list_single_cmail_header_editor_pane_bg_cp01

0x65a7,	// (0x00034f97) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x65a7,	// (0x00034f97) list_single_cmail_header_editor_pane_bg_cp02

0xd324,	// (0x0003bd14) main_radioblah_text_pane_t1_ParamLimits

0xd324,	// (0x0003bd14) main_radioblah_text_pane_t1

0x44fc,	// (0x00032eec) cam6_indi_pane_cp01

0x4504,	// (0x00032ef4) cam6_mode_pane_cp01

0x450c,	// (0x00032efc) cam6_pano_pane

0x4515,	// (0x00032f05) cam6_zoom_pane_cp01

0x451d,	// (0x00032f0d) cam6_pano_image_pane

0x4528,	// (0x00032f18) cam6_pano_pane_g1

0x3a9f,	// (0x0003248f) cam6_pano_pane_g2

0x4531,	// (0x00032f21) cam6_pano_pane_g3

0x453a,	// (0x00032f2a) cam6_pano_pane_g4

0x23e7,	// (0x00030dd7) cam6_pano_pane_g5

0x4543,	// (0x00032f33) cam6_pano_pane_g6

0x454d,	// (0x00032f3d) cam6_pano_pane_g7

0x4555,	// (0x00032f45) cam6_pano_pane_g8

0x455e,	// (0x00032f4e) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0003e833) cam6_pano_pane_g

0xdd8b,	// (0x0003c77b) main_browser_tag_pane

0x4295,	// (0x00032c85) grid_navstr_albumart_pane

0x4569,	// (0x00032f59) cell_navstr_albumart_pane_ParamLimits

0x4569,	// (0x00032f59) cell_navstr_albumart_pane

0x060b,	// (0x0002effb) cell_navstr_albumart_pane_g1

0x173e,	// (0x0003012e) cell_navstr_albumart_pane_g2

0x174e,	// (0x0003013e) cell_navstr_albumart_pane_g3

0x1746,	// (0x00030136) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0003e846) cell_navstr_albumart_pane_g

0xd341,	// (0x0003bd31) bt_list_pane_ParamLimits

0xd341,	// (0x0003bd31) bt_list_pane

0xd368,	// (0x0003bd58) bt_list_pane_t1

0xd377,	// (0x0003bd67) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x0003e84f) bt_list_pane_t

0xdd8b,	// (0x0003c77b) main_cale_prevew_pane

0xd386,	// (0x0003bd76) popup_cale_preview_window_ParamLimits

0xd386,	// (0x0003bd76) popup_cale_preview_window

0xf115,	// (0x0003db05) bg_popup_preview_window_pane_cp05_ParamLimits

0xf115,	// (0x0003db05) bg_popup_preview_window_pane_cp05

0x458b,	// (0x00032f7b) list_cale_preview_pane_ParamLimits

0x458b,	// (0x00032f7b) list_cale_preview_pane

0xd39d,	// (0x0003bd8d) list_double_cale_preview_pane_ParamLimits

0xd39d,	// (0x0003bd8d) list_double_cale_preview_pane

0xd3af,	// (0x0003bd9f) list_single_cale_preview_pane_ParamLimits

0xd3af,	// (0x0003bd9f) list_single_cale_preview_pane

0xd3c3,	// (0x0003bdb3) list_single_cale_preview_pane_g1

0xd3cb,	// (0x0003bdbb) list_single_cale_preview_pane_t1_ParamLimits

0xd3cb,	// (0x0003bdbb) list_single_cale_preview_pane_t1

0xd3e0,	// (0x0003bdd0) list_double_cale_preview_pane_g1

0xd3e8,	// (0x0003bdd8) list_double_cale_preview_pane_t1_ParamLimits

0xd3e8,	// (0x0003bdd8) list_double_cale_preview_pane_t1

0xd3fd,	// (0x0003bded) list_double_cale_preview_pane_t2_ParamLimits

0xd3fd,	// (0x0003bded) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x0003e854) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x0003e854) list_double_cale_preview_pane_t

0xdd8b,	// (0x0003c77b) main_ezdial_pane

0xf115,	// (0x0003db05) main_sp_fs_email_pane_ParamLimits

0xcfea,	// (0x0003b9da) cmail_ddmenu_btn01_pane_ParamLimits

0xcfea,	// (0x0003b9da) cmail_ddmenu_btn01_pane

0xd007,	// (0x0003b9f7) cmail_ddmenu_btn02_pane_ParamLimits

0xd007,	// (0x0003b9f7) cmail_ddmenu_btn02_pane

0xd025,	// (0x0003ba15) cmail_ddmenu_btn03_pane_ParamLimits

0xd025,	// (0x0003ba15) cmail_ddmenu_btn03_pane

0x5e69,	// (0x00034859) main_sp_fs_ctrlbar_pane_ParamLimits

0x5e85,	// (0x00034875) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd126,	// (0x0003bb16) list_cmail_body_pane_ParamLimits

0x41bc,	// (0x00032bac) bg_button_pane_cp12

0x41d1,	// (0x00032bc1) list_single_cmail_header_detail_pane_g3_ParamLimits

0x41d1,	// (0x00032bc1) list_single_cmail_header_detail_pane_g3

0x63a3,	// (0x00034d93) list_single_cmail_header_detail_pane_t2_ParamLimits

0x63a3,	// (0x00034d93) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x0003e7d9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x0003e7d9) list_single_cmail_header_detail_pane_t

0x63f8,	// (0x00034de8) phacti_term_pane_t2_ParamLimits

0x63f8,	// (0x00034de8) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0003e7e3) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0003e7e3) phacti_term_pane_t

0x4597,	// (0x00032f87) aid_size_list_single_double

0xd415,	// (0x0003be05) popup_ezdial_listscroll_window

0xd436,	// (0x0003be26) popup_number_entry_window_cp01

0xeffe,	// (0x0003d9ee) bg_popup_call_pane_cp09

0x45a3,	// (0x00032f93) ezdial_list_pane

0x45ab,	// (0x00032f9b) scroll_pane_cp23

0x1c0c,	// (0x000305fc) bg_button_pane_cp028_ParamLimits

0x1c0c,	// (0x000305fc) bg_button_pane_cp028

0xd444,	// (0x0003be34) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd444,	// (0x0003be34) cmail_ddmenu_btn01_pane_g1

0xd456,	// (0x0003be46) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd456,	// (0x0003be46) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x0003e859) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x0003e859) cmail_ddmenu_btn01_pane_g

0x45b3,	// (0x00032fa3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x45b3,	// (0x00032fa3) cmail_ddmenu_btn01_pane_t1

0x1921,	// (0x00030311) bg_button_pane_cp029_ParamLimits

0x1921,	// (0x00030311) bg_button_pane_cp029

0xd456,	// (0x0003be46) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd456,	// (0x0003be46) cmail_ddmenu_btn02_pane_g1

0xd46e,	// (0x0003be5e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd46e,	// (0x0003be5e) cmail_ddmenu_btn02_pane_t1

0x68c9,	// (0x000352b9) bg_button_pane_cp031_ParamLimits

0x68c9,	// (0x000352b9) bg_button_pane_cp031

0xd456,	// (0x0003be46) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd456,	// (0x0003be46) cmail_ddmenu_btn03_pane_g1

0xd46e,	// (0x0003be5e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd46e,	// (0x0003be5e) cmail_ddmenu_btn03_pane_t1

0xaff0,	// (0x000399e0) cell_dialer2_keypad_pane_t1_ParamLimits

0xb00a,	// (0x000399fa) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb00a,	// (0x000399fa) cell_dialer2_keypad_pane_t1_copy1

0xca0e,	// (0x0003b3fe) ncimui_group_button_pane

0xf115,	// (0x0003db05) main_sp_fs_calendar_pane_ParamLimits

0xd14a,	// (0x0003bb3a) list_single_cmail_header_caption_pane_ParamLimits

0x4348,	// (0x00032d38) aid_recal_txt_sm_pane

0xdd8b,	// (0x0003c77b) mian_recal_day_pane

0x4387,	// (0x00032d77) popup_sp_fs_cale_preview_window_ParamLimits

0xdd8b,	// (0x0003c77b) list_recal_day_pane

0x45ea,	// (0x00032fda) list_single_recal_day_pane_ParamLimits

0x45ea,	// (0x00032fda) list_single_recal_day_pane

0x45fc,	// (0x00032fec) list_single_recal_day_pane_g1_ParamLimits

0x45fc,	// (0x00032fec) list_single_recal_day_pane_g1

0x4608,	// (0x00032ff8) list_single_recal_day_pane_g2_ParamLimits

0x4608,	// (0x00032ff8) list_single_recal_day_pane_g2

0x4617,	// (0x00033007) list_single_recal_day_pane_g3_ParamLimits

0x4617,	// (0x00033007) list_single_recal_day_pane_g3

0xd492,	// (0x0003be82) list_single_recal_day_pane_g4_ParamLimits

0xd492,	// (0x0003be82) list_single_recal_day_pane_g4

0x4623,	// (0x00033013) list_single_recal_day_pane_g5_ParamLimits

0x4623,	// (0x00033013) list_single_recal_day_pane_g5

0x4632,	// (0x00033022) list_single_recal_day_pane_g6_ParamLimits

0x4632,	// (0x00033022) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x0003e868) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x0003e868) list_single_recal_day_pane_g

0x463e,	// (0x0003302e) list_single_recal_day_pane_t1

0x464c,	// (0x0003303c) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x0003e875) list_single_recal_day_pane_t

0xd4a5,	// (0x0003be95) ncimui_query_button_pane_ParamLimits

0xd4a5,	// (0x0003be95) ncimui_query_button_pane

0xd4b5,	// (0x0003bea5) ncimui_query_button_pane_t1_ParamLimits

0xd4b5,	// (0x0003bea5) ncimui_query_button_pane_t1

0x465a,	// (0x0003304a) ncimui_query_button_pane_t2_ParamLimits

0x465a,	// (0x0003304a) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x0003e87a) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x0003e87a) ncimui_query_button_pane_t

0xd4c8,	// (0x0003beb8) query_button_pane_ParamLimits

0xd4c8,	// (0x0003beb8) query_button_pane

0xdd8b,	// (0x0003c77b) bg_button_pane_cp0028

0x466d,	// (0x0003305d) query_button_pane_t1

0x9469,	// (0x00037e59) main_tport_pane_ParamLimits

0xd053,	// (0x0003ba43) bg_popup_window_pane_cp01_ParamLimits

0xd053,	// (0x0003ba43) bg_popup_window_pane_cp01

0xd060,	// (0x0003ba50) heading_pane_cp08_ParamLimits

0xd060,	// (0x0003ba50) heading_pane_cp08

0xd06e,	// (0x0003ba5e) heading_pane_cp07_ParamLimits

0xd06e,	// (0x0003ba5e) heading_pane_cp07

0xd0c5,	// (0x0003bab5) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0003e7c6) cell_tport_appsw_pane_g

0x5800,	// (0x000341f0) input_candi_list_open_g1

0xeb21,	// (0x0003d511) list_cale_time_pane_g6_ParamLimits

0xeb21,	// (0x0003d511) list_cale_time_pane_g6

0x9eaf,	// (0x0003889f) aid_size_touch_calib_1_ParamLimits

0x9eaf,	// (0x0003889f) aid_size_touch_calib_1

0x9ebb,	// (0x000388ab) aid_size_touch_calib_2_ParamLimits

0x9ebb,	// (0x000388ab) aid_size_touch_calib_2

0x9ec9,	// (0x000388b9) aid_size_touch_calib_3_ParamLimits

0x9ec9,	// (0x000388b9) aid_size_touch_calib_3

0x9ed9,	// (0x000388c9) aid_size_touch_calib_4_ParamLimits

0x9ed9,	// (0x000388c9) aid_size_touch_calib_4

0x9ee7,	// (0x000388d7) main_touch_calib_button_group_pane_ParamLimits

0x9ee7,	// (0x000388d7) main_touch_calib_button_group_pane

0x9ef5,	// (0x000388e5) main_touch_calib_pane_g1_ParamLimits

0x9f01,	// (0x000388f1) main_touch_calib_pane_g2_ParamLimits

0x9f0d,	// (0x000388fd) main_touch_calib_pane_g3_ParamLimits

0x9f19,	// (0x00038909) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x0003e1a8) main_touch_calib_pane_g_ParamLimits

0x9f25,	// (0x00038915) main_touch_calib_pane_t1_ParamLimits

0x9f3c,	// (0x0003892c) main_touch_calib_pane_t2_ParamLimits

0x9f53,	// (0x00038943) main_touch_calib_pane_t3_ParamLimits

0x9f67,	// (0x00038957) main_touch_calib_pane_t4_ParamLimits

0x9f7b,	// (0x0003896b) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x0003e1b1) main_touch_calib_pane_t_ParamLimits

0x21ce,	// (0x00030bbe) list_single_fp_cale_pane_g3_ParamLimits

0x21ce,	// (0x00030bbe) list_single_fp_cale_pane_g3

0xf115,	// (0x0003db05) bg_button_pane_cp012_ParamLimits

0xf115,	// (0x0003db05) bg_vkb2_func_pane_cp03_ParamLimits

0xbd7d,	// (0x0003a76d) cell_vitu2_function_top_pane_g1_ParamLimits

0xf115,	// (0x0003db05) bg_vkb2_func_pane_cp04_ParamLimits

0xc9bf,	// (0x0003b3af) main_ncimui_button_group_pane_ParamLimits

0xc9bf,	// (0x0003b3af) main_ncimui_button_group_pane

0xc9fc,	// (0x0003b3ec) main_ncimui_pane_t3_ParamLimits

0xc9fc,	// (0x0003b3ec) main_ncimui_pane_t3

0x42ab,	// (0x00032c9b) phacti_button_group_pane

0x4597,	// (0x00032f87) aid_size_list_single_double_ParamLimits

0xd415,	// (0x0003be05) popup_ezdial_listscroll_window_ParamLimits

0xd436,	// (0x0003be26) popup_number_entry_window_cp01_ParamLimits

0xd4d5,	// (0x0003bec5) phacti_button_pane_ParamLimits

0xd4d5,	// (0x0003bec5) phacti_button_pane

0xdd8b,	// (0x0003c77b) bg_button_pane_cp14

0x467b,	// (0x0003306b) phacti_button_pane_t1

0xd4e6,	// (0x0003bed6) main_touch_calib_button_pane_ParamLimits

0xd4e6,	// (0x0003bed6) main_touch_calib_button_pane

0xe56e,	// (0x0003cf5e) bg_button_pane_cp18_ParamLimits

0xe56e,	// (0x0003cf5e) bg_button_pane_cp18

0x4689,	// (0x00033079) main_touch_calib_button_pane_t1_ParamLimits

0x4689,	// (0x00033079) main_touch_calib_button_pane_t1

0x469f,	// (0x0003308f) main_touch_calib_button_pane_t2_ParamLimits

0x469f,	// (0x0003308f) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x0003e87f) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x0003e87f) main_touch_calib_button_pane_t

0xdd8b,	// (0x0003c77b) cell_ncimui_button_pane

0xdd8b,	// (0x0003c77b) bg_button_pane_cp032

0x46bd,	// (0x000330ad) cell_ncimui_button_pane_t1

0xb066,	// (0x00039a56) image3_infobar_pane_ParamLimits

0xb066,	// (0x00039a56) image3_infobar_pane

0xcd38,	// (0x0003b728) fs_bigclock_status_pane_ParamLimits

0xcd38,	// (0x0003b728) fs_bigclock_status_pane

0xcd45,	// (0x0003b735) main_fs_bigclock_clock_pane_ParamLimits

0xcd45,	// (0x0003b735) main_fs_bigclock_clock_pane

0xcd59,	// (0x0003b749) main_fs_bigclock_indi_pane_ParamLimits

0xcd59,	// (0x0003b749) main_fs_bigclock_indi_pane

0xcd86,	// (0x0003b776) main_fs_bigclock_swipe_pane_ParamLimits

0xcd86,	// (0x0003b776) main_fs_bigclock_swipe_pane

0xdd8b,	// (0x0003c77b) main_fs_clock_dumped_data

0x3bac,	// (0x0003259c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3bac,	// (0x0003259c) list_single_fs_bigclock_indicator_pane_g1

0x3bca,	// (0x000325ba) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3bca,	// (0x000325ba) list_single_fs_bigclock_indicator_pane_g2

0x3be4,	// (0x000325d4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3be4,	// (0x000325d4) list_single_fs_bigclock_indicator_pane_g3

0x3bfe,	// (0x000325ee) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3bfe,	// (0x000325ee) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x0003e6b2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x0003e6b2) list_single_fs_bigclock_indicator_pane_g

0x3c24,	// (0x00032614) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3c24,	// (0x00032614) list_single_fs_bigclock_indicator_pane_t1

0x3c4c,	// (0x0003263c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3c4c,	// (0x0003263c) list_single_fs_bigclock_indicator_pane_t2

0x3c74,	// (0x00032664) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3c74,	// (0x00032664) list_single_fs_bigclock_indicator_pane_t3

0x3c9c,	// (0x0003268c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3c9c,	// (0x0003268c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x0003e6bd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x0003e6bd) list_single_fs_bigclock_indicator_pane_t

0x46cb,	// (0x000330bb) image3_infobar_fav_pane_ParamLimits

0x46cb,	// (0x000330bb) image3_infobar_fav_pane

0x46db,	// (0x000330cb) image3_infobar_loc_pane_ParamLimits

0x46db,	// (0x000330cb) image3_infobar_loc_pane

0x46ef,	// (0x000330df) image3_infobar_time_pane_ParamLimits

0x46ef,	// (0x000330df) image3_infobar_time_pane

0x1e29,	// (0x00030819) image3_infobar_time_pane_g1

0x46ff,	// (0x000330ef) image3_infobar_time_pane_t1

0x1e29,	// (0x00030819) image3_infobar_loc_pane_g1

0x470d,	// (0x000330fd) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x0003e884) image3_infobar_loc_pane_g

0x4715,	// (0x00033105) image3_infobar_loc_pane_t1

0x1e29,	// (0x00030819) image3_infobar_fav_pane_g1

0x4723,	// (0x00033113) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x0003e889) image3_infobar_fav_pane_g

0x472b,	// (0x0003311b) fs_bigclock_status_battery_pane

0x4734,	// (0x00033124) fs_bigclock_status_signal_pane

0x473d,	// (0x0003312d) fs_bigclock_status_title_pane

0x4746,	// (0x00033136) fs_bigclock_status_signal_pane_g1

0x474f,	// (0x0003313f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x0003e88e) fs_bigclock_status_signal_pane_g

0x4757,	// (0x00033147) fs_bigclock_status_battery_pane_g1

0x4760,	// (0x00033150) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x0003e893) fs_bigclock_status_battery_pane_g

0x4768,	// (0x00033158) fs_bigclock_status_title_pane_t1

0x1e29,	// (0x00030819) main_fs_bigclock_clock_pane_g1

0x4776,	// (0x00033166) main_fs_bigclock_clock_pane_g2

0x4776,	// (0x00033166) main_fs_bigclock_clock_pane_g3

0x4776,	// (0x00033166) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x0003e898) main_fs_bigclock_clock_pane_g

0x477e,	// (0x0003316e) main_fs_bigclock_clock_pane_t1

0x478c,	// (0x0003317c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x0003e8a1) main_fs_bigclock_clock_pane_t

0x479b,	// (0x0003318b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x479b,	// (0x0003318b) list_single_fs_bigclock_indicator_pane

0xd4f6,	// (0x0003bee6) list_single_fs_bigclock_pane_ParamLimits

0xd4f6,	// (0x0003bee6) list_single_fs_bigclock_pane

0xd563,	// (0x0003bf53) main_fs_bigclock_indicator_pane_t1

0xd572,	// (0x0003bf62) list_single_fs_bigclock_pane_g1

0xd57a,	// (0x0003bf6a) list_single_fs_bigclock_pane_t1

0x1e29,	// (0x00030819) main_fs_bigclock_swipe_pane_g1

0xd5b8,	// (0x0003bfa8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x0003e8b2) main_fs_bigclock_swipe_pane_g

0xd5c0,	// (0x0003bfb0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd5c0,	// (0x0003bfb0) main_fs_bigclock_swipe_pane_t1

0x8424,	// (0x00036e14) call_type_pane_ParamLimits

0xdd8b,	// (0x0003c77b) main_btmg_pane

0x64a3,	// (0x00034e93) list_single_cale_mrui_row_pane_g2_ParamLimits

0x64a3,	// (0x00034e93) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0003e825) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0003e825) list_single_cale_mrui_row_pane_g

0x45d1,	// (0x00032fc1) list_recal_vselct_arw_lo_pane

0x45d9,	// (0x00032fc9) list_recal_vselct_arw_up_pane

0x45e1,	// (0x00032fd1) list_recal_vselct_pane

0xd5dd,	// (0x0003bfcd) btmg_button_pane

0xd5e7,	// (0x0003bfd7) main_btmg_pane_g1

0xdd8b,	// (0x0003c77b) bg_button_pane_cp044

0xd5ef,	// (0x0003bfdf) btmg_button_pane_t1

0x1919,	// (0x00030309) aid_listscroll_gen

0xf115,	// (0x0003db05) main_cntbar_detail_pane

0x419d,	// (0x00032b8d) list_cmail_folder_pane

0x41ad,	// (0x00032b9d) sp_fs_scroll_pane_cp03_ParamLimits

0x65c3,	// (0x00034fb3) list_single_fs_dyc_pane_cp01_ParamLimits

0x65c3,	// (0x00034fb3) list_single_fs_dyc_pane_cp01

0xd5fd,	// (0x0003bfed) aid_size_cmail_indent

0x65f4,	// (0x00034fe4) list_single_dyc_row_pane_cp01

0xd626,	// (0x0003c016) cntbar_detail_list_pane_ParamLimits

0xd626,	// (0x0003c016) cntbar_detail_list_pane

0xd660,	// (0x0003c050) main_cntbar_detail_cont_pane_ParamLimits

0xd660,	// (0x0003c050) main_cntbar_detail_cont_pane

0x8418,	// (0x00036e08) scroll_pane_cp032_ParamLimits

0x8418,	// (0x00036e08) scroll_pane_cp032

0xd66c,	// (0x0003c05c) cntbar_detail_list_event_pane_ParamLimits

0xd66c,	// (0x0003c05c) cntbar_detail_list_event_pane

0xd632,	// (0x0003c022) cntbar_detail_list_shct_pane

0xe9d4,	// (0x0003d3c4) aid_list_gen

0xd680,	// (0x0003c070) aid_scroll

0xd689,	// (0x0003c079) aid_size_touch_scroll_bar

0x321b,	// (0x00031c0b) aid_list_double

0xd692,	// (0x0003c082) aid_list_single

0x65fd,	// (0x00034fed) aid_list_single_lg

0x6606,	// (0x00034ff6) aid_list_z_g_a_sm

0x660e,	// (0x00034ffe) aid_list_z_g_d

0x6616,	// (0x00035006) aid_txt_z_prm

0x6624,	// (0x00035014) aid_txt_z_prm_cp01

0x6632,	// (0x00035022) aid_txt_z_sec

0xd69b,	// (0x0003c08b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd69b,	// (0x0003c08b) main_cntbar_detail_cont_pane_g1

0xd6a8,	// (0x0003c098) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd6a8,	// (0x0003c098) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x0003e8b7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x0003e8b7) main_cntbar_detail_cont_pane_g

0xd6b4,	// (0x0003c0a4) main_cntbar_detail_cont_pane_t1

0xd6c2,	// (0x0003c0b2) main_cntbar_detail_cont_pane_t2

0xd6d0,	// (0x0003c0c0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x0003e8bc) main_cntbar_detail_cont_pane_t

0xd6de,	// (0x0003c0ce) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd6de,	// (0x0003c0ce) cell_cntbar_detail_list_shct_pane

0xd6f2,	// (0x0003c0e2) cntbar_detail_list_shct_pane_g1

0xd6fb,	// (0x0003c0eb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0003e8c3) cntbar_detail_list_shct_pane_g

0xd704,	// (0x0003c0f4) cntbar_detail_list_event_pane_g1_ParamLimits

0xd704,	// (0x0003c0f4) cntbar_detail_list_event_pane_g1

0xd710,	// (0x0003c100) cntbar_detail_list_event_pane_g2_ParamLimits

0xd710,	// (0x0003c100) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x0003e8c8) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x0003e8c8) cntbar_detail_list_event_pane_g

0xd77c,	// (0x0003c16c) cntbar_detail_list_event_pane_t1_ParamLimits

0xd77c,	// (0x0003c16c) cntbar_detail_list_event_pane_t1

0xd791,	// (0x0003c181) cntbar_detail_list_event_pane_t2_ParamLimits

0xd791,	// (0x0003c181) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0003e8d5) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0003e8d5) cntbar_detail_list_event_pane_t

0x1e29,	// (0x00030819) cell_cntbar_detail_list_shct_pane_g1

0x879b,	// (0x0003718b) navi_pane_mv_g3

0xf115,	// (0x0003db05) main_cntbar_detail_pane_ParamLimits

0xdd8b,	// (0x0003c77b) main_notif_wgt_pane

0xad42,	// (0x00039732) aid_tch_main_mp4_pane_g4

0xaf4d,	// (0x0003993d) popup_slider_window_cp02

0x45c8,	// (0x00032fb8) list_recal_day_event_pane

0xd606,	// (0x0003bff6) cntbar_detail_btn_pane_ParamLimits

0xd606,	// (0x0003bff6) cntbar_detail_btn_pane

0xd616,	// (0x0003c006) cntbar_detail_btn_pane_cp01_ParamLimits

0xd616,	// (0x0003c006) cntbar_detail_btn_pane_cp01

0xd632,	// (0x0003c022) cntbar_detail_list_shct_pane_ParamLimits

0xd63e,	// (0x0003c02e) cntbar_detail_pane_g1_ParamLimits

0xd63e,	// (0x0003c02e) cntbar_detail_pane_g1

0xd64a,	// (0x0003c03a) cntbar_detail_pane_t1_ParamLimits

0xd64a,	// (0x0003c03a) cntbar_detail_pane_t1

0xd71c,	// (0x0003c10c) cntbar_detail_list_event_pane_g3_ParamLimits

0xd71c,	// (0x0003c10c) cntbar_detail_list_event_pane_g3

0xd734,	// (0x0003c124) cntbar_detail_list_event_pane_g4_ParamLimits

0xd734,	// (0x0003c124) cntbar_detail_list_event_pane_g4

0xd74c,	// (0x0003c13c) cntbar_detail_list_event_pane_g5_ParamLimits

0xd74c,	// (0x0003c13c) cntbar_detail_list_event_pane_g5

0xd764,	// (0x0003c154) cntbar_detail_list_event_pane_g6_ParamLimits

0xd764,	// (0x0003c154) cntbar_detail_list_event_pane_g6

0xd7a6,	// (0x0003c196) cntbar_detail_list_event_pane_t3_ParamLimits

0xd7a6,	// (0x0003c196) cntbar_detail_list_event_pane_t3

0xd7b8,	// (0x0003c1a8) popup_notif_wgt_window_ParamLimits

0xd7b8,	// (0x0003c1a8) popup_notif_wgt_window

0xd7c8,	// (0x0003c1b8) popup_submenu_window_cp01_ParamLimits

0xd7c8,	// (0x0003c1b8) popup_submenu_window_cp01

0xeffe,	// (0x0003d9ee) bg_popup_window_pane_cp10

0xd7d6,	// (0x0003c1c6) listscroll_notif_wgt_pane

0xd7e0,	// (0x0003c1d0) list_notif_wgt_window

0xd7e9,	// (0x0003c1d9) scroll_pane_cp033

0xd7f2,	// (0x0003c1e2) list_notif_wgt_row_pane_ParamLimits

0xd7f2,	// (0x0003c1e2) list_notif_wgt_row_pane

0xd806,	// (0x0003c1f6) aid_size_list_notif_wgt_del

0xd80f,	// (0x0003c1ff) list_notif_wgt_row_pane_g1

0xd817,	// (0x0003c207) list_notif_wgt_row_pane_g2

0xd81f,	// (0x0003c20f) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x0003e8dc) list_notif_wgt_row_pane_g

0xd828,	// (0x0003c218) list_notif_wgt_row_pane_t1

0xd836,	// (0x0003c226) list_notif_wgt_row_pane_t2

0xd844,	// (0x0003c234) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0003e8e3) list_notif_wgt_row_pane_t

0x2e43,	// (0x00031833) list_recal_day_event_pane_g1

0xd852,	// (0x0003c242) list_recal_day_event_pane_t1

0xdd8b,	// (0x0003c77b) bg_button_pane_cp045

0xd861,	// (0x0003c251) cntbar_detail_btn_pane_t1

0x1921,	// (0x00030311) main_callh_pane_ParamLimits

0x1921,	// (0x00030311) main_callh_pane

0xdd8b,	// (0x0003c77b) main_coverflow0_pane

0xdd8b,	// (0x0003c77b) main_wgtman_pane

0xcd9e,	// (0x0003b78e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xcd9e,	// (0x0003b78e) main_fs_bigclock_unlock_btn_pane

0xd0b5,	// (0x0003baa5) bg_button_pane_cp16

0xd0cd,	// (0x0003babd) cell_tport_appsw_pane_g3

0xd86f,	// (0x0003c25f) cf0_flow_pane_ParamLimits

0xd86f,	// (0x0003c25f) cf0_flow_pane

0xd87e,	// (0x0003c26e) listscroll_cf0_pane

0xd887,	// (0x0003c277) main_cf0_pane_g1

0xd891,	// (0x0003c281) main_cf0_pane_t1_ParamLimits

0xd891,	// (0x0003c281) main_cf0_pane_t1

0xd8a5,	// (0x0003c295) main_cf0_pane_t2_ParamLimits

0xd8a5,	// (0x0003c295) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x0003e8ea) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x0003e8ea) main_cf0_pane_t

0xd8b9,	// (0x0003c2a9) scroll_pane_cp11

0xd8c4,	// (0x0003c2b4) cf0_flow_pane_g1

0xd8cc,	// (0x0003c2bc) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x0003e8ef) cf0_flow_pane_g

0xd8d4,	// (0x0003c2c4) cf0_flow_pane_t1

0xdd8b,	// (0x0003c77b) main_call6_pane

0xdd8b,	// (0x0003c77b) main_calllock_pane

0xd8e2,	// (0x0003c2d2) call6_btn_grp_pane_ParamLimits

0xd8e2,	// (0x0003c2d2) call6_btn_grp_pane

0xd8f1,	// (0x0003c2e1) call6_pane_g1_ParamLimits

0xd8f1,	// (0x0003c2e1) call6_pane_g1

0xd900,	// (0x0003c2f0) popup_call6_1st_window_ParamLimits

0xd900,	// (0x0003c2f0) popup_call6_1st_window

0xd90e,	// (0x0003c2fe) popup_call6_2nd_window_ParamLimits

0xd90e,	// (0x0003c2fe) popup_call6_2nd_window

0xd91c,	// (0x0003c30c) cell_call6_btn_pane_ParamLimits

0xd91c,	// (0x0003c30c) cell_call6_btn_pane

0xeffe,	// (0x0003d9ee) bg_popup_call2_in_pane_cp03

0xd92b,	// (0x0003c31b) popup_call6_1st_window_g1

0xd933,	// (0x0003c323) popup_call6_1st_window_g2

0xd93b,	// (0x0003c32b) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0003e8f4) popup_call6_1st_window_g

0xd943,	// (0x0003c333) popup_call6_1st_window_t1

0xd952,	// (0x0003c342) popup_call6_1st_window_t2

0xd962,	// (0x0003c352) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x0003e8fb) popup_call6_1st_window_t

0xeffe,	// (0x0003d9ee) bg_popup_call2_in_pane_cp04

0xd92b,	// (0x0003c31b) popup_call6_2nd_window_g1

0xd933,	// (0x0003c323) popup_call6_2nd_window_g2

0xd93b,	// (0x0003c32b) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0003e8f4) popup_call6_2nd_window_g

0xd943,	// (0x0003c333) popup_call6_2nd_window_t1

0xdd8b,	// (0x0003c77b) bg_button_pane_cp15

0xd972,	// (0x0003c362) cell_call6_btn_pane_g1

0xd97b,	// (0x0003c36b) cell_call6_btn_pane_t1

0xd98a,	// (0x0003c37a) listscroll_wgtman_pane_ParamLimits

0xd98a,	// (0x0003c37a) listscroll_wgtman_pane

0xd999,	// (0x0003c389) wgtman_btn_pane_ParamLimits

0xd999,	// (0x0003c389) wgtman_btn_pane

0xeeb1,	// (0x0003d8a1) aid_scroll_copy1

0xd9a7,	// (0x0003c397) list_wgtman_pane

0xd9b1,	// (0x0003c3a1) wgtman_btn_pane_g1_ParamLimits

0xd9b1,	// (0x0003c3a1) wgtman_btn_pane_g1

0xd9bd,	// (0x0003c3ad) wgtman_btn_pane_t1_ParamLimits

0xd9bd,	// (0x0003c3ad) wgtman_btn_pane_t1

0xd9cf,	// (0x0003c3bf) wgtman_btn_pane_t2_ParamLimits

0xd9cf,	// (0x0003c3bf) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0003e902) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0003e902) wgtman_btn_pane_t

0xd9e1,	// (0x0003c3d1) listrow_wgtman_pane_ParamLimits

0xd9e1,	// (0x0003c3d1) listrow_wgtman_pane

0xd9fd,	// (0x0003c3ed) listrow_wgtman_pane_g1

0xda06,	// (0x0003c3f6) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x0003e907) listrow_wgtman_pane_g

0x6640,	// (0x00035030) listrow_wgtman_pane_t1

0x664e,	// (0x0003503e) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x0003e90c) listrow_wgtman_pane_t

0x665c,	// (0x0003504c) wait_bar_pane_cp09

0xda10,	// (0x0003c400) main_calllock_btn_pane

0xda1a,	// (0x0003c40a) main_calllock_pane_g1

0xdd8b,	// (0x0003c77b) bg_button_pane_cp17

0xda25,	// (0x0003c415) main_calllock_btn_pane_g1

0xda2e,	// (0x0003c41e) main_calllock_btn_pane_t1

0xdd8b,	// (0x0003c77b) main_dialer3_pane

0xdd8b,	// (0x0003c77b) main_fmrd2_pane

0x1e29,	// (0x00030819) main_fs_bigclock_unlock_btn_pane_g1

0xda45,	// (0x0003c435) main_fs_bigclock_unlock_btn_pane_t1

0xda53,	// (0x0003c443) area_fmrd2_info_pane_ParamLimits

0xda53,	// (0x0003c443) area_fmrd2_info_pane

0xda62,	// (0x0003c452) area_fmrd2_visual_pane_ParamLimits

0xda62,	// (0x0003c452) area_fmrd2_visual_pane

0xda70,	// (0x0003c460) fmrd2_indi_pane_ParamLimits

0xda70,	// (0x0003c460) fmrd2_indi_pane

0xda7d,	// (0x0003c46d) area_fmrd2_visual_pane_g1

0xda85,	// (0x0003c475) area_fmrd2_visual_pane_t1

0xda95,	// (0x0003c485) area_fmrd2_visual_pane_t2

0xdaa5,	// (0x0003c495) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0003e916) area_fmrd2_visual_pane_t

0xdab5,	// (0x0003c4a5) area_fmrd2_info_pane_g1

0xdabd,	// (0x0003c4ad) area_fmrd2_info_pane_t1

0xdacd,	// (0x0003c4bd) area_fmrd2_info_pane_t2

0xdadd,	// (0x0003c4cd) area_fmrd2_info_pane_t3

0xdaed,	// (0x0003c4dd) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x0003e91d) area_fmrd2_info_pane_t

0xdafb,	// (0x0003c4eb) fmrd2_indi_pane_t1

0xdb0b,	// (0x0003c4fb) fmrd2_indi_pane_t2

0xdb1b,	// (0x0003c50b) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0003e926) fmrd2_indi_pane_t

0x3c0d,	// (0x000325fd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3c0d,	// (0x000325fd) list_single_fs_bigclock_indicator_pane_g5

0x3cb1,	// (0x000326a1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3cb1,	// (0x000326a1) list_single_fs_bigclock_indicator_pane_t5

0xd25a,	// (0x0003bc4a) aid_cell_bcale_month_pane_ParamLimits

0xd25a,	// (0x0003bc4a) aid_cell_bcale_month_pane

0xd266,	// (0x0003bc56) bcale_month_pane_ParamLimits

0xd266,	// (0x0003bc56) bcale_month_pane

0xd276,	// (0x0003bc66) bcale_preview_pane_ParamLimits

0xd276,	// (0x0003bc66) bcale_preview_pane

0xd57a,	// (0x0003bf6a) list_single_fs_bigclock_pane_t1_ParamLimits

0xd594,	// (0x0003bf84) list_single_fs_bigclock_pane_t2_ParamLimits

0xd594,	// (0x0003bf84) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x0003e8ad) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x0003e8ad) list_single_fs_bigclock_pane_t

0xda3d,	// (0x0003c42d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0003e911) main_fs_bigclock_unlock_btn_pane_g

0xdb29,	// (0x0003c519) aid_dia3_key_size_ParamLimits

0xdb29,	// (0x0003c519) aid_dia3_key_size

0xdb35,	// (0x0003c525) aid_dia3_listrow_size_ParamLimits

0xdb35,	// (0x0003c525) aid_dia3_listrow_size

0xdb43,	// (0x0003c533) dia3_keypad_fun_pane_ParamLimits

0xdb43,	// (0x0003c533) dia3_keypad_fun_pane

0xdb53,	// (0x0003c543) dia3_keypad_num_pane_ParamLimits

0xdb53,	// (0x0003c543) dia3_keypad_num_pane

0xdb63,	// (0x0003c553) dia3_listscroll_pane_ParamLimits

0xdb63,	// (0x0003c553) dia3_listscroll_pane

0xdb71,	// (0x0003c561) dia3_numentry_pane_ParamLimits

0xdb71,	// (0x0003c561) dia3_numentry_pane

0xdb7f,	// (0x0003c56f) dia3_list_pane

0xdb8a,	// (0x0003c57a) scroll_pane_cp12

0xdd8b,	// (0x0003c77b) bg_dia3_numentry_pane

0xdb95,	// (0x0003c585) dia3_numentry_pane_t1

0xdba4,	// (0x0003c594) cell_dia3_key_num_pane

0xdbac,	// (0x0003c59c) cell_dia3_key0_fun_pane_ParamLimits

0xdbac,	// (0x0003c59c) cell_dia3_key0_fun_pane

0xdbb9,	// (0x0003c5a9) cell_dia3_key1_fun_pane_ParamLimits

0xdbb9,	// (0x0003c5a9) cell_dia3_key1_fun_pane

0xdbc6,	// (0x0003c5b6) dia3_listrow_pane

0x392b,	// (0x0003231b) bg_dia3_numentry_pane_g1

0xdd8b,	// (0x0003c77b) bg_button_pane_cp21

0xdbcf,	// (0x0003c5bf) cell_dia3_key_num_pane_t1

0xdbdd,	// (0x0003c5cd) cell_dia3_key_num_pane_t2

0xdbec,	// (0x0003c5dc) cell_dia3_key_num_pane_t3

0xdbfb,	// (0x0003c5eb) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x0003e92d) cell_dia3_key_num_pane_t

0xdd8b,	// (0x0003c77b) bg_button_pane_cp19

0xdc0a,	// (0x0003c5fa) cell_dia3_key0_fun_pane_g1

0xdd8b,	// (0x0003c77b) bg_button_pane_cp20

0xdc12,	// (0x0003c602) cell_dia3_key1_fun_pane_g1

0xdc1a,	// (0x0003c60a) area_left_week_number_pane

0xdc23,	// (0x0003c613) area_top_day_name_pane

0xdc2c,	// (0x0003c61c) frame_month_view_pane

0xdc36,	// (0x0003c626) grid_month_view_pane

0xdc40,	// (0x0003c630) cell_top_day_name_pane_ParamLimits

0xdc40,	// (0x0003c630) cell_top_day_name_pane

0xdc5a,	// (0x0003c64a) cell_area_left_week_number_pane_ParamLimits

0xdc5a,	// (0x0003c64a) cell_area_left_week_number_pane

0xdc6e,	// (0x0003c65e) cell_month_view_pane_ParamLimits

0xdc6e,	// (0x0003c65e) cell_month_view_pane

0xdc8b,	// (0x0003c67b) frm_month_g1

0xdc94,	// (0x0003c684) frm_month_g2

0xdc9e,	// (0x0003c68e) frm_month_g3

0xdca8,	// (0x0003c698) frm_month_g4

0xdcb2,	// (0x0003c6a2) frm_month_g5

0xdcbc,	// (0x0003c6ac) frm_month_g6

0xdcc6,	// (0x0003c6b6) frm_month_g7

0xdcd0,	// (0x0003c6c0) frm_month_g8

0xdcd9,	// (0x0003c6c9) frm_month_g9

0xdce2,	// (0x0003c6d2) frm_month_g10

0xdceb,	// (0x0003c6db) frm_month_g11

0xdcf4,	// (0x0003c6e4) frm_month_g12

0xdcfd,	// (0x0003c6ed) frm_month_g13

0xdd06,	// (0x0003c6f6) frm_month_g14

0xdd0f,	// (0x0003c6ff) frm_month_g15

0xdd1a,	// (0x0003c70a) frm_month_g16

0x000f,

0xff46,	// (0x0003e936) frm_month_g

0xdd25,	// (0x0003c715) cell_top_day_name_pane_t1

0xdd34,	// (0x0003c724) cell_area_left_week_number_pane_g1

0xdd25,	// (0x0003c715) cell_area_left_week_number_pane_t1

0x1e29,	// (0x00030819) cell_month_view_pane_g1

0xdd3c,	// (0x0003c72c) cell_month_view_pane_t1

0xdd8b,	// (0x0003c77b) main_fps_pane

0x3f1b,	// (0x0003290b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3f1b,	// (0x0003290b) cmail_ddmenu_btn02_pane_cp1

0x3f37,	// (0x00032927) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3f37,	// (0x00032927) cmail_ddmenu_btn02_pane_cp2

0xd462,	// (0x0003be52) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd462,	// (0x0003be52) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x0003e85e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x0003e85e) cmail_ddmenu_btn02_pane_g

0xd480,	// (0x0003be70) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd480,	// (0x0003be70) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x0003e863) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x0003e863) cmail_ddmenu_btn02_pane_t

0xdd4b,	// (0x0003c73b) fps_text_pane_ParamLimits

0xdd4b,	// (0x0003c73b) fps_text_pane

0xdd58,	// (0x0003c748) main_fps_pane_g1_ParamLimits

0xdd58,	// (0x0003c748) main_fps_pane_g1

0xdd66,	// (0x0003c756) wait_bar_pane_cp010_ParamLimits

0xdd66,	// (0x0003c756) wait_bar_pane_cp010

0xdd72,	// (0x0003c762) fps_text_pane_t1_ParamLimits

0xdd72,	// (0x0003c762) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
