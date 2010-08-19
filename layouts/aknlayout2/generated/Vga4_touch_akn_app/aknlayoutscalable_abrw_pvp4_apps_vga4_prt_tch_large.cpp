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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007c149 };

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
0x5a9e,	// (0x00081be7) Screen

0x5aaa,	// (0x00081bf3) application_window

0x5afe,	// (0x00081c47) area_bottom_pane_ParamLimits

0x5afe,	// (0x00081c47) area_bottom_pane

0x5b5c,	// (0x00081ca5) area_top_pane_ParamLimits

0x5b5c,	// (0x00081ca5) area_top_pane

0x5bc0,	// (0x00081d09) call_video_uplink_pane_ParamLimits

0x5bc0,	// (0x00081d09) call_video_uplink_pane

0x5bff,	// (0x00081d48) main_pane_ParamLimits

0x5bff,	// (0x00081d48) main_pane

0x1b86,	// (0x0007dccf) context_pane

0x8ca8,	// (0x00084df1) navi_pane

0x8cd1,	// (0x00084e1a) popup_cale_events_window_ParamLimits

0x8cd1,	// (0x00084e1a) popup_cale_events_window

0x1b99,	// (0x0007dce2) popup_mup_playback_window

0x8ce9,	// (0x00084e32) signal_pane

0xe5a2,	// (0x0008a6eb) main_browser_pane

0xe740,	// (0x0008a889) main_burst_pane

0x8aec,	// (0x00084c35) main_calc_pane

0x1b22,	// (0x0007dc6b) main_cale_day_pane

0x8af9,	// (0x00084c42) main_cale_month_pane

0x1b22,	// (0x0007dc6b) main_cale_week_pane

0xe740,	// (0x0008a889) main_call_pane

0xe24c,	// (0x0008a395) main_call_poc_pane

0xe740,	// (0x0008a889) main_camera_pane

0xe740,	// (0x0008a889) main_chi_dic_pane

0xef0d,	// (0x0008b056) main_clock_pane

0xe24c,	// (0x0008a395) main_fmradio_pane

0xe740,	// (0x0008a889) main_graph_messa_pane

0xe24c,	// (0x0008a395) main_help_pane

0xe5a2,	// (0x0008a6eb) main_im_pane

0xe4a7,	// (0x0008a5f0) main_image_pane_ParamLimits

0xe4a7,	// (0x0008a5f0) main_image_pane

0xe24c,	// (0x0008a395) main_location2_pane

0xe740,	// (0x0008a889) main_location_pane

0xe4a7,	// (0x0008a5f0) main_messa_pane

0xe24c,	// (0x0008a395) main_mp2_pane

0xe740,	// (0x0008a889) main_mp_pane

0xe24c,	// (0x0008a395) main_msg_pane

0xe24c,	// (0x0008a395) main_mup_eq_pane

0xe24c,	// (0x0008a395) main_mup_pane

0xe5a2,	// (0x0008a6eb) main_notes_pane

0xe24c,	// (0x0008a395) main_pec_pane

0xe24c,	// (0x0008a395) main_phob_pane

0xe24c,	// (0x0008a395) main_pinb_pane

0xe24c,	// (0x0008a395) main_postcard_pane

0xe24c,	// (0x0008a395) main_qdial_pane

0xe740,	// (0x0008a889) main_skin_pane

0xe24c,	// (0x0008a395) main_smil2_pane

0xe740,	// (0x0008a889) main_smil_pane

0xe740,	// (0x0008a889) main_video_pane

0xe740,	// (0x0008a889) main_video_tele_pane

0xe4a7,	// (0x0008a5f0) main_viewer_pane_ParamLimits

0xe4a7,	// (0x0008a5f0) main_viewer_pane

0xe740,	// (0x0008a889) main_vorec_pane

0x8b58,	// (0x00084ca1) popup_blid_sat_info_window_ParamLimits

0x8b58,	// (0x00084ca1) popup_blid_sat_info_window

0x8b7e,	// (0x00084cc7) popup_dyc_status_message_window_ParamLimits

0x8b7e,	// (0x00084cc7) popup_dyc_status_message_window

0x8b8e,	// (0x00084cd7) popup_grid_large_graphic_window_ParamLimits

0x8b8e,	// (0x00084cd7) popup_grid_large_graphic_window

0x8c23,	// (0x00084d6c) popup_loc_request_window_ParamLimits

0x8c23,	// (0x00084d6c) popup_loc_request_window

0x8c7c,	// (0x00084dc5) popup_wml_address_window_ParamLimits

0x8c7c,	// (0x00084dc5) popup_wml_address_window

0x89c4,	// (0x00084b0d) call_muted_g1

0x863c,	// (0x00084785) popup_call_audio_conf_window_ParamLimits

0x863c,	// (0x00084785) popup_call_audio_conf_window

0x89d4,	// (0x00084b1d) popup_call_audio_first_window_ParamLimits

0x89d4,	// (0x00084b1d) popup_call_audio_first_window

0x8a14,	// (0x00084b5d) popup_call_audio_in_window_ParamLimits

0x8a14,	// (0x00084b5d) popup_call_audio_in_window

0x8a38,	// (0x00084b81) popup_call_audio_out_window_ParamLimits

0x8a38,	// (0x00084b81) popup_call_audio_out_window

0x8a5a,	// (0x00084ba3) popup_call_audio_second_window_ParamLimits

0x8a5a,	// (0x00084ba3) popup_call_audio_second_window

0x8a8a,	// (0x00084bd3) popup_call_audio_wait_window_ParamLimits

0x8a8a,	// (0x00084bd3) popup_call_audio_wait_window

0x8aab,	// (0x00084bf4) popup_number_entry_window_ParamLimits

0x8aab,	// (0x00084bf4) popup_number_entry_window

0xde04,	// (0x00089f4d) bg_popup_call_pane_cp05_ParamLimits

0xde04,	// (0x00089f4d) bg_popup_call_pane_cp05

0xde24,	// (0x00089f6d) popup_number_entry_window_t1

0xde37,	// (0x00089f80) popup_number_entry_window_t2

0xde49,	// (0x00089f92) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0008b1ce) popup_number_entry_window_t

0xde90,	// (0x00089fd9) text_title_cp2

0xdea3,	// (0x00089fec) bg_popup_call_pane_cp_ParamLimits

0xdea3,	// (0x00089fec) bg_popup_call_pane_cp

0xdeb1,	// (0x00089ffa) call_thumbnail_pane

0xdeb9,	// (0x0008a002) popup_call_audio_in_window_g1_ParamLimits

0xdeb9,	// (0x0008a002) popup_call_audio_in_window_g1

0xdec5,	// (0x0008a00e) popup_call_audio_in_window_g2_ParamLimits

0xdec5,	// (0x0008a00e) popup_call_audio_in_window_g2

0xded1,	// (0x0008a01a) popup_call_audio_in_window_g3_ParamLimits

0xded1,	// (0x0008a01a) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0008b1d7) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0008b1d7) popup_call_audio_in_window_g

0xdedd,	// (0x0008a026) popup_call_audio_in_window_t1_ParamLimits

0xdedd,	// (0x0008a026) popup_call_audio_in_window_t1

0xdef9,	// (0x0008a042) popup_call_audio_in_window_t2_ParamLimits

0xdef9,	// (0x0008a042) popup_call_audio_in_window_t2

0xdf15,	// (0x0008a05e) popup_call_audio_in_window_t3_ParamLimits

0xdf15,	// (0x0008a05e) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0008b1de) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0008b1de) popup_call_audio_in_window_t

0xdea3,	// (0x00089fec) bg_popup_call_pane_cp01_ParamLimits

0xdea3,	// (0x00089fec) bg_popup_call_pane_cp01

0xdeb1,	// (0x00089ffa) call_thumbnail_pane_cp02

0xdf28,	// (0x0008a071) call_type_pane_cp022

0xdf30,	// (0x0008a079) popup_call_audio_out_window_g1_ParamLimits

0xdf30,	// (0x0008a079) popup_call_audio_out_window_g1

0xdf42,	// (0x0008a08b) popup_call_audio_out_window_g2_ParamLimits

0xdf42,	// (0x0008a08b) popup_call_audio_out_window_g2

0xdf4e,	// (0x0008a097) popup_call_audio_out_window_g3_ParamLimits

0xdf4e,	// (0x0008a097) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0008b1e5) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0008b1e5) popup_call_audio_out_window_g

0xdf60,	// (0x0008a0a9) popup_call_audio_out_window_t1_ParamLimits

0xdf60,	// (0x0008a0a9) popup_call_audio_out_window_t1

0xdf78,	// (0x0008a0c1) popup_call_audio_out_window_t2_ParamLimits

0xdf78,	// (0x0008a0c1) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0008b1ec) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0008b1ec) popup_call_audio_out_window_t

0xdf8d,	// (0x0008a0d6) bg_popup_call_pane_ParamLimits

0xdf8d,	// (0x0008a0d6) bg_popup_call_pane

0x5de0,	// (0x00081f29) call_thumbnail_pane_cp_ParamLimits

0x5de0,	// (0x00081f29) call_thumbnail_pane_cp

0xe011,	// (0x0008a15a) call_type_pane_cp01_ParamLimits

0xe011,	// (0x0008a15a) call_type_pane_cp01

0xe055,	// (0x0008a19e) popup_call_audio_first_window_g1_ParamLimits

0xe055,	// (0x0008a19e) popup_call_audio_first_window_g1

0xe0a1,	// (0x0008a1ea) popup_call_audio_first_window_g2_ParamLimits

0xe0a1,	// (0x0008a1ea) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0008b1f1) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0008b1f1) popup_call_audio_first_window_g

0xe0e5,	// (0x0008a22e) popup_call_audio_first_window_t1_ParamLimits

0xe0e5,	// (0x0008a22e) popup_call_audio_first_window_t1

0xe191,	// (0x0008a2da) popup_call_audio_first_window_t4_ParamLimits

0xe191,	// (0x0008a2da) popup_call_audio_first_window_t4

0xe21d,	// (0x0008a366) popup_call_audio_first_window_t5_ParamLimits

0xe21d,	// (0x0008a366) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0008b1f6) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0008b1f6) popup_call_audio_first_window_t

0xe24c,	// (0x0008a395) bg_popup_call_pane_cp02

0xe256,	// (0x0008a39f) call_type_pane_cp023

0xe25e,	// (0x0008a3a7) popup_call_audio_wait_window_g1

0xe266,	// (0x0008a3af) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0008b1fd) popup_call_audio_wait_window_g

0xe26e,	// (0x0008a3b7) popup_call_audio_wait_window_t3

0xe27c,	// (0x0008a3c5) bg_popup_call_pane_cp03_ParamLimits

0xe27c,	// (0x0008a3c5) bg_popup_call_pane_cp03

0xe2dc,	// (0x0008a425) call_thumbnail_pane_cp011_ParamLimits

0xe2dc,	// (0x0008a425) call_thumbnail_pane_cp011

0xe2e8,	// (0x0008a431) call_type_pane_cp034_ParamLimits

0xe2e8,	// (0x0008a431) call_type_pane_cp034

0xe324,	// (0x0008a46d) popup_call_audio_second_window_g1_ParamLimits

0xe324,	// (0x0008a46d) popup_call_audio_second_window_g1

0xe360,	// (0x0008a4a9) popup_call_audio_second_window_g2_ParamLimits

0xe360,	// (0x0008a4a9) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0008b202) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0008b202) popup_call_audio_second_window_g

0xe39c,	// (0x0008a4e5) popup_call_audio_second_window_t1_ParamLimits

0xe39c,	// (0x0008a4e5) popup_call_audio_second_window_t1

0xe41d,	// (0x0008a566) popup_call_audio_second_window_t2_ParamLimits

0xe41d,	// (0x0008a566) popup_call_audio_second_window_t2

0xe453,	// (0x0008a59c) popup_call_audio_second_window_t3_ParamLimits

0xe453,	// (0x0008a59c) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0008b207) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0008b207) popup_call_audio_second_window_t

0xe24c,	// (0x0008a395) bg_popup_call_pane_cp04

0xe489,	// (0x0008a5d2) list_conf_pane

0xe491,	// (0x0008a5da) popup_call_audio_conf_window_t1

0xe49f,	// (0x0008a5e8) call_thumbnail_pane_g1

0xe4a7,	// (0x0008a5f0) bg_pinb_pane_ParamLimits

0xe4a7,	// (0x0008a5f0) bg_pinb_pane

0xe4b5,	// (0x0008a5fe) find_pinb_pane

0xe4a7,	// (0x0008a5f0) listscroll_pinb_pane_ParamLimits

0xe4a7,	// (0x0008a5f0) listscroll_pinb_pane

0xe4bf,	// (0x0008a608) pinb_bg_pane_g1

0xe4bf,	// (0x0008a608) pinb_bg_pane_g2

0xe4bf,	// (0x0008a608) pinb_bg_pane_g3

0xe4bf,	// (0x0008a608) pinb_bg_pane_g4

0xe4bf,	// (0x0008a608) pinb_bg_pane_g5

0xe4bf,	// (0x0008a608) pinb_bg_pane_g6

0xe4bf,	// (0x0008a608) pinb_bg_pane_g7

0xe4bf,	// (0x0008a608) pinb_bg_pane_g8

0xe4bf,	// (0x0008a608) pinb_bg_pane_g9

0xe4bf,	// (0x0008a608) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0008b20e) pinb_bg_pane_g

0xddfa,	// (0x00089f43) grid_pinb_pane

0xddfa,	// (0x00089f43) list_pinb_pane

0xe4c9,	// (0x0008a612) scroll_pane_cp01_ParamLimits

0xe4c9,	// (0x0008a612) scroll_pane_cp01

0xe4d7,	// (0x0008a620) find_pinb_pane_g1_ParamLimits

0xe4d7,	// (0x0008a620) find_pinb_pane_g1

0xe4ef,	// (0x0008a638) find_pinb_pane_t1

0xe501,	// (0x0008a64a) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0008b228) find_pinb_pane_t

0xe516,	// (0x0008a65f) input_focus_pane_cp01_ParamLimits

0xe516,	// (0x0008a65f) input_focus_pane_cp01

0xe522,	// (0x0008a66b) cell_pinb_pane_ParamLimits

0xe522,	// (0x0008a66b) cell_pinb_pane

0xe530,	// (0x0008a679) cell_pinb_pane_g1_ParamLimits

0xe530,	// (0x0008a679) cell_pinb_pane_g1

0xe53e,	// (0x0008a687) cell_pinb_pane_g2_ParamLimits

0xe53e,	// (0x0008a687) cell_pinb_pane_g2

0xe53e,	// (0x0008a687) cell_pinb_pane_g3_ParamLimits

0xe53e,	// (0x0008a687) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0008b22d) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0008b22d) cell_pinb_pane_g

0xe24c,	// (0x0008a395) grid_highlight_pane_cp01

0xe522,	// (0x0008a66b) list_pinb_item_pane_ParamLimits

0xe522,	// (0x0008a66b) list_pinb_item_pane

0xddfa,	// (0x00089f43) list_highlight_pane_cp02

0xe54c,	// (0x0008a695) list_pinb_item_pane_g1_ParamLimits

0xe54c,	// (0x0008a695) list_pinb_item_pane_g1

0xe53e,	// (0x0008a687) list_pinb_item_pane_g2_ParamLimits

0xe53e,	// (0x0008a687) list_pinb_item_pane_g2

0xe530,	// (0x0008a679) list_pinb_item_pane_g3_ParamLimits

0xe530,	// (0x0008a679) list_pinb_item_pane_g3

0xe53e,	// (0x0008a687) list_pinb_item_pane_g4_ParamLimits

0xe53e,	// (0x0008a687) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0008b234) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0008b234) list_pinb_item_pane_g

0xe55a,	// (0x0008a6a3) list_pinb_item_pane_t1_ParamLimits

0xe55a,	// (0x0008a6a3) list_pinb_item_pane_t1

0x5e1e,	// (0x00081f67) calc_display_pane

0x5e3c,	// (0x00081f85) calc_paper_pane

0x5e58,	// (0x00081fa1) grid_calc_pane

0xe24c,	// (0x0008a395) bg_list_pane_cp01

0x5e84,	// (0x00081fcd) clock_g1

0x5e8c,	// (0x00081fd5) clock_g2

0x0001,

0xf0f4,	// (0x0008b23d) clock_g

0x5e96,	// (0x00081fdf) clock_t1_ParamLimits

0x5e96,	// (0x00081fdf) clock_t1

0x5eab,	// (0x00081ff4) clock_t2_ParamLimits

0x5eab,	// (0x00081ff4) clock_t2

0x5ebd,	// (0x00082006) clock_t3_ParamLimits

0x5ebd,	// (0x00082006) clock_t3

0x5ecf,	// (0x00082018) clock_t4_ParamLimits

0x5ecf,	// (0x00082018) clock_t4

0x5ee1,	// (0x0008202a) clock_t5_ParamLimits

0x5ee1,	// (0x0008202a) clock_t5

0x5ef6,	// (0x0008203f) clock_t6_ParamLimits

0x5ef6,	// (0x0008203f) clock_t6

0x5f08,	// (0x00082051) clock_t7_ParamLimits

0x5f08,	// (0x00082051) clock_t7

0x5f1a,	// (0x00082063) clock_t8_ParamLimits

0x5f1a,	// (0x00082063) clock_t8

0x5f30,	// (0x00082079) clock_t9_ParamLimits

0x5f30,	// (0x00082079) clock_t9

0x0008,

0xf0f9,	// (0x0008b242) clock_t_ParamLimits

0xf0f9,	// (0x0008b242) clock_t

0xe56e,	// (0x0008a6b7) popup_clock_analogue_window_cp02

0xe56e,	// (0x0008a6b7) popup_clock_digital_window_cp01

0xe24c,	// (0x0008a395) listscroll_help_pane

0xe24c,	// (0x0008a395) phob_pre_status_pane

0xe576,	// (0x0008a6bf) grid_qdial_pane

0xe4a7,	// (0x0008a5f0) listscroll_mce_pane

0xe4a7,	// (0x0008a5f0) bg_notes_pane

0xe580,	// (0x0008a6c9) list_notes_pane

0x5f46,	// (0x0008208f) scroll_pane_cp06

0xe58e,	// (0x0008a6d7) bg_calc_paper_pane

0x5f55,	// (0x0008209e) list_calc_pane

0xe5a2,	// (0x0008a6eb) bg_calc_display_pane

0x5f6f,	// (0x000820b8) calc_display_pane_t1

0x5f84,	// (0x000820cd) calc_display_pane_t2

0x5f99,	// (0x000820e2) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0008b255) calc_display_pane_t

0x5fab,	// (0x000820f4) cell_calc_pane_ParamLimits

0x5fab,	// (0x000820f4) cell_calc_pane

0xe5ae,	// (0x0008a6f7) bg_calc_paper_pane_g1

0xe5ba,	// (0x0008a703) bg_calc_paper_pane_g2

0xe5c6,	// (0x0008a70f) bg_calc_paper_pane_g3

0xe5d2,	// (0x0008a71b) bg_calc_paper_pane_g4

0xe5de,	// (0x0008a727) bg_calc_paper_pane_g5

0x5fda,	// (0x00082123) bg_calc_paper_pane_g6

0x5feb,	// (0x00082134) bg_calc_paper_pane_g7

0x5ffc,	// (0x00082145) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0008b25c) bg_calc_paper_pane_g

0x600d,	// (0x00082156) calc_bg_paper_pane_g9

0x601e,	// (0x00082167) list_calc_item_pane_ParamLimits

0x601e,	// (0x00082167) list_calc_item_pane

0xe5ea,	// (0x0008a733) list_calc_item_pane_g1

0x603f,	// (0x00082188) list_calc_item_pane_t1_ParamLimits

0x603f,	// (0x00082188) list_calc_item_pane_t1

0x6051,	// (0x0008219a) list_calc_item_pane_t2_ParamLimits

0x6051,	// (0x0008219a) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0008b26d) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0008b26d) list_calc_item_pane_t

0xe4bf,	// (0x0008a608) cell_calc_pane_g1

0xe5f7,	// (0x0008a740) grid_highlight_pane_cp02

0x2bbf,	// (0x0007ed08) bg_calc_display_pane_g1

0x6081,	// (0x000821ca) bg_calc_display_pane_g2

0x2bad,	// (0x0007ecf6) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0008b277) bg_calc_display_pane_g

0x608b,	// (0x000821d4) cell_qdial_pane_ParamLimits

0x608b,	// (0x000821d4) cell_qdial_pane

0x60a1,	// (0x000821ea) cell_qdial_pane_g1_ParamLimits

0x60a1,	// (0x000821ea) cell_qdial_pane_g1

0x60ae,	// (0x000821f7) cell_qdial_pane_g2_ParamLimits

0x60ae,	// (0x000821f7) cell_qdial_pane_g2

0xe619,	// (0x0008a762) cell_qdial_pane_g3_ParamLimits

0xe619,	// (0x0008a762) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0008b27e) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0008b27e) cell_qdial_pane_g

0x60cc,	// (0x00082215) cell_qdial_pane_t1_ParamLimits

0x60cc,	// (0x00082215) cell_qdial_pane_t1

0x60e4,	// (0x0008222d) cell_qdial_pane_t2_ParamLimits

0x60e4,	// (0x0008222d) cell_qdial_pane_t2

0x60f7,	// (0x00082240) cell_qdial_pane_t3_ParamLimits

0x60f7,	// (0x00082240) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0008b287) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0008b287) cell_qdial_pane_t

0xe24c,	// (0x0008a395) grid_highlight_pane_cp04

0xe625,	// (0x0008a76e) thumbnail_qdial_pane_ParamLimits

0xe625,	// (0x0008a76e) thumbnail_qdial_pane

0xe681,	// (0x0008a7ca) list_help_pane

0xe68a,	// (0x0008a7d3) scroll_pane_cp02

0x610a,	// (0x00082253) help_list_pane_t1_ParamLimits

0x610a,	// (0x00082253) help_list_pane_t1

0x6131,	// (0x0008227a) bg_notes_pane_g2

0x6139,	// (0x00082282) bg_notes_pane_g3

0x6141,	// (0x0008228a) notes_bg_pane_g1

0x6149,	// (0x00082292) notes_bg_pane_g4

0x6151,	// (0x0008229a) notes_bg_pane_g5

0x6159,	// (0x000822a2) notes_bg_pane_g6

0x6161,	// (0x000822aa) notes_bg_pane_g7

0x6169,	// (0x000822b2) notes_bg_pane_g8

0x6171,	// (0x000822ba) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0008b2a5) notes_bg_pane_g

0x6179,	// (0x000822c2) list_notes_text_pane_ParamLimits

0x6179,	// (0x000822c2) list_notes_text_pane

0xe693,	// (0x0008a7dc) list_notes_text_pane_g1

0x61a1,	// (0x000822ea) list_notes_text_pane_t1

0x61af,	// (0x000822f8) listscroll_cale_week_pane

0x61db,	// (0x00082324) bg_cale_heading_pane

0x6204,	// (0x0008234d) bg_cale_pane_cp01

0x6226,	// (0x0008236f) cale_week_corner_pane

0x6245,	// (0x0008238e) cale_week_day_heading_pane

0x6273,	// (0x000823bc) cale_week_scroll_pane_g1

0x6297,	// (0x000823e0) cale_week_scroll_pane_g2

0x62af,	// (0x000823f8) cale_week_scroll_pane_g3

0x62c7,	// (0x00082410) cale_week_scroll_pane_g4

0x62df,	// (0x00082428) cale_week_scroll_pane_g5

0x62f7,	// (0x00082440) cale_week_scroll_pane_g6

0x6317,	// (0x00082460) cale_week_scroll_pane_g7

0x6337,	// (0x00082480) cale_week_scroll_pane_g8

0x6357,	// (0x000824a0) cale_week_scroll_pane_g9

0x6374,	// (0x000824bd) cale_week_scroll_pane_g10

0x6391,	// (0x000824da) cale_week_scroll_pane_g11

0x63b0,	// (0x000824f9) cale_week_scroll_pane_g12

0x63d5,	// (0x0008251e) cale_week_scroll_pane_g13

0x63fe,	// (0x00082547) cale_week_scroll_pane_g14

0x6427,	// (0x00082570) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0008b2b4) cale_week_scroll_pane_g

0x6470,	// (0x000825b9) cale_week_time_pane

0x6490,	// (0x000825d9) grid_cale_week_pane

0xe6c8,	// (0x0008a811) scroll_pane_cp08

0x64c1,	// (0x0008260a) cell_cale_week_pane_ParamLimits

0x64c1,	// (0x0008260a) cell_cale_week_pane

0x6551,	// (0x0008269a) cale_week_day_heading_pane_t1

0x6579,	// (0x000826c2) cale_week_day_heading_pane_t2

0x65a6,	// (0x000826ef) cale_week_day_heading_pane_t3

0x65d3,	// (0x0008271c) cale_week_day_heading_pane_t4

0x6600,	// (0x00082749) cale_week_day_heading_pane_t5

0x662d,	// (0x00082776) cale_week_day_heading_pane_t6

0x665a,	// (0x000827a3) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0008b2d5) cale_week_day_heading_pane_t

0xe6e5,	// (0x0008a82e) bg_cale_side_pane

0x6682,	// (0x000827cb) cale_week_time_pane_t1

0x66a6,	// (0x000827ef) cale_week_time_pane_t2

0x66ca,	// (0x00082813) cale_week_time_pane_t3

0x66ee,	// (0x00082837) cale_week_time_pane_t4

0x6712,	// (0x0008285b) cale_week_time_pane_t5

0x6738,	// (0x00082881) cale_week_time_pane_t6

0x6760,	// (0x000828a9) cale_week_time_pane_t7

0x678c,	// (0x000828d5) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0008b2e4) cale_week_time_pane_t

0x67bc,	// (0x00082905) cell_cale_week_pane_g2

0x67e0,	// (0x00082929) cell_cale_week_pane_g3_ParamLimits

0x67e0,	// (0x00082929) cell_cale_week_pane_g3

0xe6f3,	// (0x0008a83c) grid_highlight_pane_cp07

0xe6fb,	// (0x0008a844) listscroll_gms_pane

0xe705,	// (0x0008a84e) grid_gms_pane

0xe70e,	// (0x0008a857) listscroll_gms_pane_g1

0xe716,	// (0x0008a85f) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0008b2f5) listscroll_gms_pane_g

0x67f8,	// (0x00082941) scroll_pane_cp010

0x6803,	// (0x0008294c) cell_gms_pane_ParamLimits

0x6803,	// (0x0008294c) cell_gms_pane

0x6816,	// (0x0008295f) cell_gms_pane_g1

0xe71e,	// (0x0008a867) cell_gms_pane_g2

0xe726,	// (0x0008a86f) cell_gms_pane_g3

0xe72f,	// (0x0008a878) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0008b2fa) cell_gms_pane_g

0xe738,	// (0x0008a881) grid_highlight_pane_cp09

0x8948,	// (0x00084a91) phob_pre_status_pane_g1

0x8950,	// (0x00084a99) phob_pre_status_pane_g2

0x8958,	// (0x00084aa1) phob_pre_status_pane_g3

0x8960,	// (0x00084aa9) phob_pre_status_pane_g4

0x0004,

0xf57a,	// (0x0008b6c3) phob_pre_status_pane_g

0x8970,	// (0x00084ab9) phob_pre_status_pane_t1

0x8980,	// (0x00084ac9) phob_pre_status_pane_t2

0x8990,	// (0x00084ad9) phob_pre_status_pane_t3

0x0002,

0xf585,	// (0x0008b6ce) phob_pre_status_pane_t

0xe740,	// (0x0008a889) bg_list_pane_cp05

0x6826,	// (0x0008296f) grid_vorec_pane

0x6830,	// (0x00082979) vorec_t1

0x683e,	// (0x00082987) vorec_t2

0x684c,	// (0x00082995) vorec_t3

0x685a,	// (0x000829a3) vorec_t4

0xdc00,	// (0x00089d49) vorec_t5

0xdc0e,	// (0x00089d57) vorec_t6

0x0004,

0xf1ba,	// (0x0008b303) vorec_t

0xdc1c,	// (0x00089d65) wait_bar_pane_cp01

0x6876,	// (0x000829bf) cell_vorec_pane_ParamLimits

0x6876,	// (0x000829bf) cell_vorec_pane

0x688b,	// (0x000829d4) cell_vorec_pane_g1

0xe24c,	// (0x0008a395) grid_highlight_pane_cp05

0xe522,	// (0x0008a66b) cams_zoom_pane

0xe522,	// (0x0008a66b) image_vga_pane

0xe53e,	// (0x0008a687) main_camera_pane_g1

0xe53e,	// (0x0008a687) main_camera_pane_g2

0xe53e,	// (0x0008a687) main_camera_pane_g3

0xe53e,	// (0x0008a687) main_camera_pane_g4

0xe53e,	// (0x0008a687) main_camera_pane_g5

0xe53e,	// (0x0008a687) main_camera_pane_g6

0xe53e,	// (0x0008a687) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0008b30e) main_camera_pane_g

0x07d4,	// (0x0007c91d) main_camera_pane_t1

0x07d4,	// (0x0007c91d) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0008b31f) main_camera_pane_t

0x6895,	// (0x000829de) cams_zoom_pane_cp_ParamLimits

0x6895,	// (0x000829de) cams_zoom_pane_cp

0x68c3,	// (0x00082a0c) image_cif_pane_ParamLimits

0x68c3,	// (0x00082a0c) image_cif_pane

0xddfa,	// (0x00089f43) image_subqcif_pane

0x68d1,	// (0x00082a1a) main_video_pane_g1_ParamLimits

0x68d1,	// (0x00082a1a) main_video_pane_g1

0x68f9,	// (0x00082a42) main_video_pane_g2_ParamLimits

0x68f9,	// (0x00082a42) main_video_pane_g2

0x692c,	// (0x00082a75) main_video_pane_g3_ParamLimits

0x692c,	// (0x00082a75) main_video_pane_g3

0x692c,	// (0x00082a75) main_video_pane_g4_ParamLimits

0x692c,	// (0x00082a75) main_video_pane_g4

0x695a,	// (0x00082aa3) main_video_pane_g5_ParamLimits

0x695a,	// (0x00082aa3) main_video_pane_g5

0xe748,	// (0x0008a891) main_video_pane_g6_ParamLimits

0xe748,	// (0x0008a891) main_video_pane_g6

0x0006,

0xf1db,	// (0x0008b324) main_video_pane_g_ParamLimits

0xf1db,	// (0x0008b324) main_video_pane_g

0x6976,	// (0x00082abf) main_video_pane_t1_ParamLimits

0x6976,	// (0x00082abf) main_video_pane_t1

0xe762,	// (0x0008a8ab) cams_zoom_pane_g1

0xe762,	// (0x0008a8ab) cams_zoom_pane_g2

0xe762,	// (0x0008a8ab) cams_zoom_pane_g3

0xe762,	// (0x0008a8ab) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0008b333) cams_zoom_pane_g

0x69bc,	// (0x00082b05) grid_cams_pane

0x69ca,	// (0x00082b13) linegrid_cams_pane

0x69d6,	// (0x00082b1f) cell_cams_pane_ParamLimits

0x69d6,	// (0x00082b1f) cell_cams_pane

0xe76c,	// (0x0008a8b5) cams_burst_image_pane

0xe774,	// (0x0008a8bd) cell_cams_pane_g1

0xe24c,	// (0x0008a395) grid_highlight_pane_cp03

0xe4bf,	// (0x0008a608) mp_bg_pane_g1

0xddfa,	// (0x00089f43) bg_list_pane_cp03

0xddfa,	// (0x00089f43) bg_mp_pane

0xddfa,	// (0x00089f43) grid_mp_pane

0xe762,	// (0x0008a8ab) media_player_g1

0xeca2,	// (0x0008adeb) media_player_t1

0xeca2,	// (0x0008adeb) media_player_t2

0xeca2,	// (0x0008adeb) media_player_t3

0xeca2,	// (0x0008adeb) media_player_t4

0xeca2,	// (0x0008adeb) media_player_t5

0xeca2,	// (0x0008adeb) media_player_t6

0xeca2,	// (0x0008adeb) media_player_t7

0x0006,

0xf564,	// (0x0008b6ad) media_player_t

0xddfa,	// (0x00089f43) wait_bar_pane_cp02

0xf549,	// (0x0008b692) main_usb_pane_t

0xef0d,	// (0x0008b056) cell_mp_pane

0xe4bf,	// (0x0008a608) cell_mp_pane_g1

0xe24c,	// (0x0008a395) grid_highlight_pane_cp06

0xe790,	// (0x0008a8d9) grid_skin_colour_pane

0xe798,	// (0x0008a8e1) list_highlight_pane_cp03

0x69eb,	// (0x00082b34) skin_g1

0xe7a0,	// (0x0008a8e9) skin_t1

0xe7af,	// (0x0008a8f8) skin_t2

0x0001,

0xf218,	// (0x0008b361) skin_t

0x69f5,	// (0x00082b3e) cell_skin_colour_pane_ParamLimits

0x69f5,	// (0x00082b3e) cell_skin_colour_pane

0xe7bd,	// (0x0008a906) cell_skin_colour_pane_g1

0x6a75,	// (0x00082bbe) call_video_g1_ParamLimits

0x6a75,	// (0x00082bbe) call_video_g1

0x6a85,	// (0x00082bce) call_video_g2_ParamLimits

0x6a85,	// (0x00082bce) call_video_g2

0x0001,

0xf21d,	// (0x0008b366) call_video_g_ParamLimits

0xf21d,	// (0x0008b366) call_video_g

0x6ad5,	// (0x00082c1e) call_video_uplink_pane_cp1_ParamLimits

0x6ad5,	// (0x00082c1e) call_video_uplink_pane_cp1

0xe7cf,	// (0x0008a918) call_video_uplink_pane_cp2

0x6ba3,	// (0x00082cec) video_down_crop_pane_ParamLimits

0x6ba3,	// (0x00082cec) video_down_crop_pane

0x6c95,	// (0x00082dde) video_down_pane_ParamLimits

0x6c95,	// (0x00082dde) video_down_pane

0xe7d7,	// (0x0008a920) video_down_subqcif_pane_ParamLimits

0xe7d7,	// (0x0008a920) video_down_subqcif_pane

0xe7f1,	// (0x0008a93a) video_down_subqcif_pane_cp_ParamLimits

0xe7f1,	// (0x0008a93a) video_down_subqcif_pane_cp

0xe819,	// (0x0008a962) im_reading_pane_ParamLimits

0xe819,	// (0x0008a962) im_reading_pane

0x6db2,	// (0x00082efb) im_writing_pane_ParamLimits

0x6db2,	// (0x00082efb) im_writing_pane

0x6dd0,	// (0x00082f19) im_reading_pane_t1

0xe833,	// (0x0008a97c) list_im_pane

0xe844,	// (0x0008a98d) scroll_pane_cp07

0x6e12,	// (0x00082f5b) im_writing_pane_t1_ParamLimits

0x6e12,	// (0x00082f5b) im_writing_pane_t1

0xe85d,	// (0x0008a9a6) im_writing_pane_t2_ParamLimits

0xe85d,	// (0x0008a9a6) im_writing_pane_t2

0x0001,

0xf227,	// (0x0008b370) im_writing_pane_t_ParamLimits

0xf227,	// (0x0008b370) im_writing_pane_t

0xe24c,	// (0x0008a395) input_focus_pane_cp04

0xe24c,	// (0x0008a395) input_focus_pane_cp05

0x6e24,	// (0x00082f6d) list_im_single_pane_ParamLimits

0x6e24,	// (0x00082f6d) list_im_single_pane

0x6e3d,	// (0x00082f86) list_single_im_pane_t1

0xe740,	// (0x0008a889) blid_accuracy_pane

0xe740,	// (0x0008a889) blid_compass_pane

0x1ada,	// (0x0007dc23) main_location_t1

0x1ada,	// (0x0007dc23) main_location_t2

0x1ada,	// (0x0007dc23) main_location_t3

0x0002,

0xf573,	// (0x0008b6bc) main_location_t

0xe24c,	// (0x0008a395) aid_levels_location

0xe4bf,	// (0x0008a608) blid_accuracy_pane_g1

0xe4bf,	// (0x0008a608) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x0008b3c4) blid_accuracy_pane_g

0xe8a5,	// (0x0008a9ee) wml_content_pane

0xe8e3,	// (0x0008aa2c) wml_button_pane_ParamLimits

0xe8e3,	// (0x0008aa2c) wml_button_pane

0x6e4c,	// (0x00082f95) wml_list_single_large_pane_ParamLimits

0x6e4c,	// (0x00082f95) wml_list_single_large_pane

0x6e6e,	// (0x00082fb7) wml_list_single_medium_pane_ParamLimits

0x6e6e,	// (0x00082fb7) wml_list_single_medium_pane

0x6e91,	// (0x00082fda) wml_list_single_small_pane_ParamLimits

0x6e91,	// (0x00082fda) wml_list_single_small_pane

0xe8f7,	// (0x0008aa40) wml_selection_box_pane_ParamLimits

0xe8f7,	// (0x0008aa40) wml_selection_box_pane

0xe90a,	// (0x0008aa53) wml_list_single_pane_t1

0xe919,	// (0x0008aa62) wml_list_single_medium_pane_t1

0xe928,	// (0x0008aa71) wml_list_single_large_pane_t1

0xe937,	// (0x0008aa80) input_focus_pane_cp02_ParamLimits

0xe937,	// (0x0008aa80) input_focus_pane_cp02

0xe94a,	// (0x0008aa93) wml_selection_box_pane_g1

0xe953,	// (0x0008aa9c) wml_selection_box_pane_t1_ParamLimits

0xe953,	// (0x0008aa9c) wml_selection_box_pane_t1

0xe4a7,	// (0x0008a5f0) bg_wml_button_pane_ParamLimits

0xe4a7,	// (0x0008a5f0) bg_wml_button_pane

0xe96b,	// (0x0008aab4) wml_button_pane_g1

0xe973,	// (0x0008aabc) wml_button_pane_t1

0xe96b,	// (0x0008aab4) wml_button_bg_pane_g1

0xe983,	// (0x0008aacc) wml_button_bg_pane_g2

0xe98b,	// (0x0008aad4) wml_button_bg_pane_g3

0xe993,	// (0x0008aadc) wml_button_bg_pane_g4

0xe99b,	// (0x0008aae4) wml_button_bg_pane_g5

0xe9a3,	// (0x0008aaec) wml_button_bg_pane_g6

0xe9ab,	// (0x0008aaf4) wml_button_bg_pane_g7

0xe9b3,	// (0x0008aafc) wml_button_bg_pane_g8

0xe9bb,	// (0x0008ab04) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0008b375) wml_button_bg_pane_g

0x6eb9,	// (0x00083002) bg_list_pane_cp02

0xe9c3,	// (0x0008ab0c) mce_header_pane_ParamLimits

0xe9c3,	// (0x0008ab0c) mce_header_pane

0xe9d9,	// (0x0008ab22) mce_icon_pane

0xe9d9,	// (0x0008ab22) mce_image_pane

0xe9e2,	// (0x0008ab2b) mce_text_pane_ParamLimits

0xe9e2,	// (0x0008ab2b) mce_text_pane

0x6ec3,	// (0x0008300c) scroll_pane_cp03

0xe8db,	// (0x0008aa24) scroll_pane_cp04

0xe9f5,	// (0x0008ab3e) scroll_pane_cp05_ParamLimits

0xe9f5,	// (0x0008ab3e) scroll_pane_cp05

0x6ecd,	// (0x00083016) mce_header_field_pane_ParamLimits

0x6ecd,	// (0x00083016) mce_header_field_pane

0x6eef,	// (0x00083038) mce_header_field_pane_2_ParamLimits

0x6eef,	// (0x00083038) mce_header_field_pane_2

0x6f05,	// (0x0008304e) mce_header_field_pane_3

0x6f0d,	// (0x00083056) list_single_mce_message_pane_ParamLimits

0x6f0d,	// (0x00083056) list_single_mce_message_pane

0x6f2c,	// (0x00083075) list_single_mce_smart_pane_ParamLimits

0x6f2c,	// (0x00083075) list_single_mce_smart_pane

0xea01,	// (0x0008ab4a) input_focus_pane_cp03

0xea0a,	// (0x0008ab53) list_header_data_pane

0x6f56,	// (0x0008309f) mce_header_field_pane_t1

0x6f66,	// (0x000830af) list_single_mce_header_pane_ParamLimits

0x6f66,	// (0x000830af) list_single_mce_header_pane

0xea12,	// (0x0008ab5b) list_single_mce_header_pane_t1

0xea21,	// (0x0008ab6a) list_single_mce_message_pane_g1

0xea29,	// (0x0008ab72) list_single_mce_message_pane_t1

0x6faa,	// (0x000830f3) bg_cale_heading_pane_cp01_ParamLimits

0x6faa,	// (0x000830f3) bg_cale_heading_pane_cp01

0xea37,	// (0x0008ab80) bg_cale_pane_cp02_ParamLimits

0xea37,	// (0x0008ab80) bg_cale_pane_cp02

0x6ffc,	// (0x00083145) cale_month_corner_pane

0x701b,	// (0x00083164) cale_month_day_heading_pane_ParamLimits

0x701b,	// (0x00083164) cale_month_day_heading_pane

0x707d,	// (0x000831c6) cale_month_pane_g1_ParamLimits

0x707d,	// (0x000831c6) cale_month_pane_g1

0x70c4,	// (0x0008320d) cale_month_pane_g2_ParamLimits

0x70c4,	// (0x0008320d) cale_month_pane_g2

0x70fc,	// (0x00083245) cale_month_pane_g3_ParamLimits

0x70fc,	// (0x00083245) cale_month_pane_g3

0x7150,	// (0x00083299) cale_month_pane_g4_ParamLimits

0x7150,	// (0x00083299) cale_month_pane_g4

0x71a4,	// (0x000832ed) cale_month_pane_g5_ParamLimits

0x71a4,	// (0x000832ed) cale_month_pane_g5

0x71f8,	// (0x00083341) cale_month_pane_g6_ParamLimits

0x71f8,	// (0x00083341) cale_month_pane_g6

0x725c,	// (0x000833a5) cale_month_pane_g7_ParamLimits

0x725c,	// (0x000833a5) cale_month_pane_g7

0x72c0,	// (0x00083409) cale_month_pane_g8_ParamLimits

0x72c0,	// (0x00083409) cale_month_pane_g8

0x7324,	// (0x0008346d) cale_month_pane_g9_ParamLimits

0x7324,	// (0x0008346d) cale_month_pane_g9

0x737e,	// (0x000834c7) cale_month_pane_g10_ParamLimits

0x737e,	// (0x000834c7) cale_month_pane_g10

0x73d0,	// (0x00083519) cale_month_pane_g11_ParamLimits

0x73d0,	// (0x00083519) cale_month_pane_g11

0x741e,	// (0x00083567) cale_month_pane_g12_ParamLimits

0x741e,	// (0x00083567) cale_month_pane_g12

0x746e,	// (0x000835b7) cale_month_pane_g13_ParamLimits

0x746e,	// (0x000835b7) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0008b388) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0008b388) cale_month_pane_g

0x74be,	// (0x00083607) cale_month_week_pane

0x74de,	// (0x00083627) grid_cale_month_pane_ParamLimits

0x74de,	// (0x00083627) grid_cale_month_pane

0x7537,	// (0x00083680) cale_month_day_heading_pane_t1

0x75b9,	// (0x00083702) cale_month_day_heading_pane_t2

0x7632,	// (0x0008377b) cale_month_day_heading_pane_t3

0x76ab,	// (0x000837f4) cale_month_day_heading_pane_t4

0x7724,	// (0x0008386d) cale_month_day_heading_pane_t5

0x77a5,	// (0x000838ee) cale_month_day_heading_pane_t6

0x782e,	// (0x00083977) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0008b3a3) cale_month_day_heading_pane_t

0xe6e5,	// (0x0008a82e) bg_cale_side_pane_cp01

0x78b7,	// (0x00083a00) cale_month_week_pane_t1

0x78d0,	// (0x00083a19) cale_month_week_pane_t2

0x78e9,	// (0x00083a32) cale_month_week_pane_t3

0x7902,	// (0x00083a4b) cale_month_week_pane_t4

0x791b,	// (0x00083a64) cale_month_week_pane_t5

0x7938,	// (0x00083a81) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0008b3b2) cale_month_week_pane_t

0x795b,	// (0x00083aa4) cell_cale_month_pane_ParamLimits

0x795b,	// (0x00083aa4) cell_cale_month_pane

0x7a89,	// (0x00083bd2) cell_cale_month_pane_g1

0x7a95,	// (0x00083bde) cell_cale_month_pane_t1_ParamLimits

0x7a95,	// (0x00083bde) cell_cale_month_pane_t1

0xe6f3,	// (0x0008a83c) grid_highlight_pane_cp08

0xe4bf,	// (0x0008a608) main_smil_g1

0x7ac1,	// (0x00083c0a) smil_status_pane

0xea76,	// (0x0008abbf) smil_text_pane

0x19f0,	// (0x0007db39) bg_popup_call3_rect_pane_g8

0x19f8,	// (0x0007db41) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x0008b650) bg_popup_call3_rect_pane_g

0x1c21,	// (0x0007dd6a) smil_status_volume_pane_g1

0xea80,	// (0x0008abc9) smil_status_pane_t1

0x8d1e,	// (0x00084e67) volume_smil_pane

0xea97,	// (0x0008abe0) list_smil_text_pane

0x7ad4,	// (0x00083c1d) scroll_pane_cp011

0x7adf,	// (0x00083c28) smil_text_list_pane_t1_ParamLimits

0x7adf,	// (0x00083c28) smil_text_list_pane_t1

0x7b33,	// (0x00083c7c) aid_volume_smil_ParamLimits

0x7b33,	// (0x00083c7c) aid_volume_smil

0xe4bf,	// (0x0008a608) smil_volume_pane_g1

0xe4bf,	// (0x0008a608) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x0008b3c4) smil_volume_pane_g

0x61af,	// (0x000822f8) listscroll_cale_day_pane

0xeaa1,	// (0x0008abea) bg_cale_pane

0xeab9,	// (0x0008ac02) list_cale_pane

0xeadc,	// (0x0008ac25) scroll_pane_cp09

0xeaed,	// (0x0008ac36) cale_bg_pane_g1

0xeaf5,	// (0x0008ac3e) cale_bg_pane_g2

0xeafd,	// (0x0008ac46) cale_bg_pane_g3

0xeb05,	// (0x0008ac4e) cale_bg_pane_g4

0xeb0d,	// (0x0008ac56) cale_bg_pane_g5

0xeb15,	// (0x0008ac5e) cale_bg_pane_g6

0xeb1d,	// (0x0008ac66) cale_bg_pane_g7

0xeb25,	// (0x0008ac6e) cale_bg_pane_g8

0xeb2d,	// (0x0008ac76) cale_bg_pane_g9

0x0008,

0xf280,	// (0x0008b3c9) cale_bg_pane_g

0x7b5d,	// (0x00083ca6) list_cale_time_pane_ParamLimits

0x7b5d,	// (0x00083ca6) list_cale_time_pane

0xeb35,	// (0x0008ac7e) list_cale_time_pane_g1_ParamLimits

0xeb35,	// (0x0008ac7e) list_cale_time_pane_g1

0xeb41,	// (0x0008ac8a) list_cale_time_pane_g2_ParamLimits

0xeb41,	// (0x0008ac8a) list_cale_time_pane_g2

0x7b74,	// (0x00083cbd) list_cale_time_pane_g3_ParamLimits

0x7b74,	// (0x00083cbd) list_cale_time_pane_g3

0x7b82,	// (0x00083ccb) list_cale_time_pane_g4_ParamLimits

0x7b82,	// (0x00083ccb) list_cale_time_pane_g4

0x7b90,	// (0x00083cd9) list_cale_time_pane_g5_ParamLimits

0x7b90,	// (0x00083cd9) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x0008b3dc) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x0008b3dc) list_cale_time_pane_g

0xeb5b,	// (0x0008aca4) list_cale_time_pane_t1_ParamLimits

0xeb5b,	// (0x0008aca4) list_cale_time_pane_t1

0xeb83,	// (0x0008accc) list_cale_time_pane_t2_ParamLimits

0xeb83,	// (0x0008accc) list_cale_time_pane_t2

0x7e4d,	// (0x00083f96) aid_blid_cardinal_pane

0x7e8f,	// (0x00083fd8) compass_pane_t4

0xebab,	// (0x0008acf4) list_cale_time_pane_t4_ParamLimits

0xebab,	// (0x0008acf4) list_cale_time_pane_t4

0x7e9d,	// (0x00083fe6) compass_pane_t5

0x7ead,	// (0x00083ff6) compass_pane_t6

0x7ebb,	// (0x00084004) compass_pane_t7

0xefd2,	// (0x0008b11b) navi_pane_cc_t1

0x079a,	// (0x0007c8e3) aid_phob_thumbnail_center_pane

0x83dc,	// (0x00084525) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x0008b3e9) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x0008b3e9) list_cale_time_pane_t

0xdea3,	// (0x00089fec) bg_popup_window_pane_cp02_ParamLimits

0xdea3,	// (0x00089fec) bg_popup_window_pane_cp02

0xebd3,	// (0x0008ad1c) heading_pane_cp01_ParamLimits

0xebd3,	// (0x0008ad1c) heading_pane_cp01

0xebdf,	// (0x0008ad28) loc_req_pane_ParamLimits

0xebdf,	// (0x0008ad28) loc_req_pane

0xebef,	// (0x0008ad38) loc_type_pane_ParamLimits

0xebef,	// (0x0008ad38) loc_type_pane

0xec01,	// (0x0008ad4a) loc_type_pane_t1_ParamLimits

0xec01,	// (0x0008ad4a) loc_type_pane_t1

0xec13,	// (0x0008ad5c) loc_type_pane_t2_ParamLimits

0xec13,	// (0x0008ad5c) loc_type_pane_t2

0xec25,	// (0x0008ad6e) loc_type_pane_t3_ParamLimits

0xec25,	// (0x0008ad6e) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0008b3f0) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0008b3f0) loc_type_pane_t

0xec37,	// (0x0008ad80) list_loc_req_pane

0xec41,	// (0x0008ad8a) scroll_pane_cp012

0x7b9e,	// (0x00083ce7) list_single_loc_request_popup_menu_pane_ParamLimits

0x7b9e,	// (0x00083ce7) list_single_loc_request_popup_menu_pane

0xec4c,	// (0x0008ad95) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xec4c,	// (0x0008ad95) list_single_loc_request_popup_menu_pane_g1

0xec58,	// (0x0008ada1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xec58,	// (0x0008ada1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x0008b3f7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x0008b3f7) list_single_loc_request_popup_menu_pane_g

0xec64,	// (0x0008adad) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xec64,	// (0x0008adad) list_single_loc_request_popup_menu_pane_t1

0x7bb0,	// (0x00083cf9) bg_popup_window_pane_cp03_ParamLimits

0x7bb0,	// (0x00083cf9) bg_popup_window_pane_cp03

0x7bbe,	// (0x00083d07) heading_loc_req_pane_ParamLimits

0x7bbe,	// (0x00083d07) heading_loc_req_pane

0x7bca,	// (0x00083d13) popup_dyc_status_message_window_g1_ParamLimits

0x7bca,	// (0x00083d13) popup_dyc_status_message_window_g1

0x7bd6,	// (0x00083d1f) popup_dyc_status_message_window_t1_ParamLimits

0x7bd6,	// (0x00083d1f) popup_dyc_status_message_window_t1

0x7be8,	// (0x00083d31) popup_dyc_status_message_window_t2_ParamLimits

0x7be8,	// (0x00083d31) popup_dyc_status_message_window_t2

0x7bfa,	// (0x00083d43) popup_dyc_status_message_window_t3_ParamLimits

0x7bfa,	// (0x00083d43) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x0008b3fc) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x0008b3fc) popup_dyc_status_message_window_t

0xe24c,	// (0x0008a395) bg_heading_pane_cp01

0xec7a,	// (0x0008adc3) heading_loc_req_pane_g1

0xec82,	// (0x0008adcb) heading_loc_req_pane_g2

0xec8a,	// (0x0008add3) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0008b403) heading_loc_req_pane_g

0xec92,	// (0x0008addb) heading_loc_req_pane_t1

0xecb2,	// (0x0008adfb) bg_popup_sub_pane_cp01_ParamLimits

0xecb2,	// (0x0008adfb) bg_popup_sub_pane_cp01

0xecc0,	// (0x0008ae09) popup_cale_events_window_g1_ParamLimits

0xecc0,	// (0x0008ae09) popup_cale_events_window_g1

0xece0,	// (0x0008ae29) popup_cale_events_window_g2_ParamLimits

0xece0,	// (0x0008ae29) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x0008b425) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x0008b425) popup_cale_events_window_g

0xed00,	// (0x0008ae49) popup_cale_events_window_t1_ParamLimits

0xed00,	// (0x0008ae49) popup_cale_events_window_t1

0xed12,	// (0x0008ae5b) popup_cale_events_window_t2_ParamLimits

0xed12,	// (0x0008ae5b) popup_cale_events_window_t2

0xed50,	// (0x0008ae99) popup_cale_events_window_t3_ParamLimits

0xed50,	// (0x0008ae99) popup_cale_events_window_t3

0xed8a,	// (0x0008aed3) popup_cale_events_window_t4_ParamLimits

0xed8a,	// (0x0008aed3) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x0008b42a) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x0008b42a) popup_cale_events_window_t

0x7c24,	// (0x00083d6d) call_type_pane

0x1215,	// (0x0007d35e) popup_call_status_window_g1

0x7c30,	// (0x00083d79) popup_call_status_window_g2

0x7c3c,	// (0x00083d85) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x0008b433) popup_call_status_window_g

0xedc0,	// (0x0008af09) call_type_pane_g1

0xedc9,	// (0x0008af12) call_type_pane_g2

0x0001,

0xf2f1,	// (0x0008b43a) call_type_pane_g

0xe24c,	// (0x0008a395) bg_popup_sub_pane_cp02

0xedd2,	// (0x0008af1b) listscroll_popup_wml_pane

0xedda,	// (0x0008af23) list_wml_pane

0xede4,	// (0x0008af2d) scroll_pane_cp013

0xedef,	// (0x0008af38) list_single_graphic_popup_wml_pane_ParamLimits

0xedef,	// (0x0008af38) list_single_graphic_popup_wml_pane

0xe4bf,	// (0x0008a608) list_single_graphic_popup_wml_pane_g1

0xee03,	// (0x0008af4c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x0008b43f) list_single_graphic_popup_wml_pane_g

0xee0b,	// (0x0008af54) list_single_graphic_popup_wml_pane_t1

0xee21,	// (0x0008af6a) aid_call_pane

0xe49f,	// (0x0008a5e8) popup_clock_analogue_window_g1

0xe49f,	// (0x0008a5e8) popup_clock_analogue_window_g2

0x7c48,	// (0x00083d91) popup_clock_analogue_window_g3

0x7c48,	// (0x00083d91) popup_clock_analogue_window_g4

0xe4bf,	// (0x0008a608) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x0008b444) popup_clock_analogue_window_g

0x7c50,	// (0x00083d99) popup_clock_analogue_window_t1

0x7c5e,	// (0x00083da7) clock_digital_number_pane_ParamLimits

0x7c5e,	// (0x00083da7) clock_digital_number_pane

0x7c6a,	// (0x00083db3) clock_digital_number_pane_cp02_ParamLimits

0x7c6a,	// (0x00083db3) clock_digital_number_pane_cp02

0x7c76,	// (0x00083dbf) clock_digital_number_pane_cp03_ParamLimits

0x7c76,	// (0x00083dbf) clock_digital_number_pane_cp03

0x7c82,	// (0x00083dcb) clock_digital_number_pane_cp04_ParamLimits

0x7c82,	// (0x00083dcb) clock_digital_number_pane_cp04

0x7c8e,	// (0x00083dd7) clock_digital_separator_pane_ParamLimits

0x7c8e,	// (0x00083dd7) clock_digital_separator_pane

0x7c9a,	// (0x00083de3) popup_clock_digital_window_t1

0xe4bf,	// (0x0008a608) clock_digital_number_pane_g1

0xe4bf,	// (0x0008a608) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x0008b3c4) clock_digital_number_pane_g

0xe4bf,	// (0x0008a608) clock_digital_separator_pane_g1

0xe4bf,	// (0x0008a608) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x0008b3c4) clock_digital_separator_pane_g

0xe24c,	// (0x0008a395) bg_popup_window_pane_cp04

0xee29,	// (0x0008af72) heading_pane_cp03

0xe740,	// (0x0008a889) listscroll_popup_gms_pane

0xe24c,	// (0x0008a395) grid_large_graphic_popup_pane

0xee32,	// (0x0008af7b) listscroll_popup_gms_pane_g1

0xee3b,	// (0x0008af84) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x0008b44f) listscroll_popup_gms_pane_g

0xee44,	// (0x0008af8d) scroll_pane_cp014

0xe522,	// (0x0008a66b) cell_large_graphic_popup_pane_ParamLimits

0xe522,	// (0x0008a66b) cell_large_graphic_popup_pane

0xe530,	// (0x0008a679) cell_large_graphic_popup_pane_g1_ParamLimits

0xe530,	// (0x0008a679) cell_large_graphic_popup_pane_g1

0xee4d,	// (0x0008af96) cell_large_graphic_popup_pane_g2_ParamLimits

0xee4d,	// (0x0008af96) cell_large_graphic_popup_pane_g2

0xee5b,	// (0x0008afa4) cell_large_graphic_popup_pane_g3_ParamLimits

0xee5b,	// (0x0008afa4) cell_large_graphic_popup_pane_g3

0xee69,	// (0x0008afb2) cell_large_graphic_popup_pane_g4_ParamLimits

0xee69,	// (0x0008afb2) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x0008b454) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x0008b454) cell_large_graphic_popup_pane_g

0xe24c,	// (0x0008a395) grid_highlight_pane_cp010

0xe4bf,	// (0x0008a608) bg_popup_call_pane_g1

0xee7a,	// (0x0008afc3) list_single_graphic_popup_conf_pane_ParamLimits

0xee7a,	// (0x0008afc3) list_single_graphic_popup_conf_pane

0xee8c,	// (0x0008afd5) list_highlight_pane_cp01

0xee95,	// (0x0008afde) list_single_graphic_popup_conf_pane_g1

0xee9d,	// (0x0008afe6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x0008b45d) list_single_graphic_popup_conf_pane_g

0xeea5,	// (0x0008afee) list_single_graphic_popup_conf_pane_t1

0xeeb3,	// (0x0008affc) linegrid_cams_pane_g1

0x7cb7,	// (0x00083e00) linegrid_cams_pane_g2

0xe726,	// (0x0008a86f) linegrid_cams_pane_g3

0xeebc,	// (0x0008b005) linegrid_cams_pane_g4

0x7cc0,	// (0x00083e09) linegrid_cams_pane_g5

0x7cc9,	// (0x00083e12) linegrid_cams_pane_g6

0xe72f,	// (0x0008a878) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x0008b462) linegrid_cams_pane_g

0xeec5,	// (0x0008b00e) popup_clock_analogue_window

0xeec5,	// (0x0008b00e) popup_clock_digital_window

0xe24c,	// (0x0008a395) popup_phob_thumbnail_window

0xe4bf,	// (0x0008a608) call_video_uplink_pane_g1

0xeece,	// (0x0008b017) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x0008b471) call_video_uplink_pane_g

0xeed6,	// (0x0008b01f) video_uplink_pane

0xeede,	// (0x0008b027) mce_image_pane_g1

0x7cd4,	// (0x00083e1d) mce_image_pane_g2

0x7cde,	// (0x00083e27) mce_image_pane_g3

0x7ce8,	// (0x00083e31) mce_image_pane_g4

0x7cf0,	// (0x00083e39) mce_image_pane_g5

0x0004,

0xf32d,	// (0x0008b476) mce_image_pane_g

0xeee8,	// (0x0008b031) control_top_pane_stacon_cp01_ParamLimits

0xeee8,	// (0x0008b031) control_top_pane_stacon_cp01

0xeefc,	// (0x0008b045) uni_indicator_pane_stacon_cp01_ParamLimits

0xeefc,	// (0x0008b045) uni_indicator_pane_stacon_cp01

0xef0d,	// (0x0008b056) bg_popup_sub_pane_cp03

0x7cf8,	// (0x00083e41) chi_dic_find_pane

0x7d00,	// (0x00083e49) listscroll_chi_dic_pane

0x7d09,	// (0x00083e52) main_pane_chidic_g1

0x7d1c,	// (0x00083e65) chi_dic_find_pane_t1

0xef17,	// (0x0008b060) find_chidic_pane

0xef20,	// (0x0008b069) chi_dic_list_pane_ParamLimits

0xef20,	// (0x0008b069) chi_dic_list_pane

0xef31,	// (0x0008b07a) scroll_pane_cp020

0x7d2a,	// (0x00083e73) find_chidic_pane_t1

0xe24c,	// (0x0008a395) input_focus_pane_cp06

0xef39,	// (0x0008b082) list_chi_dic_pane_ParamLimits

0xef39,	// (0x0008b082) list_chi_dic_pane

0x7d39,	// (0x00083e82) list_chi_dic_pane_t1_ParamLimits

0x7d39,	// (0x00083e82) list_chi_dic_pane_t1

0xe24c,	// (0x0008a395) list_highlight_pane_cp020

0xef4e,	// (0x0008b097) bg_cale_heading_pane_g1

0x7d4c,	// (0x00083e95) bg_cale_heading_pane_g2

0x7d54,	// (0x00083e9d) bg_cale_heading_pane_g3

0x7d5c,	// (0x00083ea5) bg_cale_heading_pane_g4

0x7d66,	// (0x00083eaf) bg_cale_heading_pane_g5

0x7d70,	// (0x00083eb9) bg_cale_heading_pane_g6

0x7d78,	// (0x00083ec1) bg_cale_heading_pane_g7

0x7d80,	// (0x00083ec9) bg_cale_heading_pane_g8

0x7d8a,	// (0x00083ed3) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x0008b481) bg_cale_heading_pane_g

0xef4e,	// (0x0008b097) bg_cale_side_pane_g1

0x7d94,	// (0x00083edd) bg_cale_side_pane_g2

0x7d9e,	// (0x00083ee7) bg_cale_side_pane_g3

0x7da8,	// (0x00083ef1) bg_cale_side_pane_g4

0x7db2,	// (0x00083efb) bg_cale_side_pane_g5

0x7dbc,	// (0x00083f05) bg_cale_side_pane_g6

0x7dc6,	// (0x00083f0f) bg_cale_side_pane_g7

0x7dd0,	// (0x00083f19) bg_cale_side_pane_g8

0x7dd8,	// (0x00083f21) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x0008b494) bg_cale_side_pane_g

0x7de0,	// (0x00083f29) popup_call_status_window_ParamLimits

0x7de0,	// (0x00083f29) popup_call_status_window

0xef56,	// (0x0008b09f) stacon_top_pane

0xef5e,	// (0x0008b0a7) status_pane_ParamLimits

0xef5e,	// (0x0008b0a7) status_pane

0xef73,	// (0x0008b0bc) status_small_pane

0xef7b,	// (0x0008b0c4) control_pane

0xe24c,	// (0x0008a395) stacon_bottom_pane

0xef83,	// (0x0008b0cc) list_single_mce_smart_pane_t1_ParamLimits

0xef83,	// (0x0008b0cc) list_single_mce_smart_pane_t1

0xef96,	// (0x0008b0df) list_single_mce_smart_pane_t2_ParamLimits

0xef96,	// (0x0008b0df) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x0008b4a7) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x0008b4a7) list_single_mce_smart_pane_t

0x7dec,	// (0x00083f35) compass_pane

0x7df7,	// (0x00083f40) main_location2_pane_t1

0x7e0d,	// (0x00083f56) main_location2_pane_t2

0x7e23,	// (0x00083f6c) main_location2_pane_t3

0x0003,

0xf363,	// (0x0008b4ac) main_location2_pane_t

0xefb5,	// (0x0008b0fe) compass_pane_g1_ParamLimits

0xefb5,	// (0x0008b0fe) compass_pane_g1

0x7e71,	// (0x00083fba) compass_pane_t1

0x7e80,	// (0x00083fc9) compass_pane_t2

0x0005,

0xf36c,	// (0x0008b4b5) compass_pane_t

0x7ecb,	// (0x00084014) text_secondary_cp61

0xefc9,	// (0x0008b112) navi_pane_cams_g5

0xefec,	// (0x0008b135) navi_pane_im_t1

0xeffa,	// (0x0008b143) navi_pane_mp_g1_ParamLimits

0xeffa,	// (0x0008b143) navi_pane_mp_g1

0xf00e,	// (0x0008b157) navi_pane_mp_g2_ParamLimits

0xf00e,	// (0x0008b157) navi_pane_mp_g2

0xf01a,	// (0x0008b163) navi_pane_mp_g3_ParamLimits

0xf01a,	// (0x0008b163) navi_pane_mp_g3

0x0002,

0xf380,	// (0x0008b4c9) navi_pane_mp_g_ParamLimits

0xf380,	// (0x0008b4c9) navi_pane_mp_g

0xf026,	// (0x0008b16f) navi_pane_mp_t1

0xf034,	// (0x0008b17d) navi_pane_mp_t2

0x0002,

0xf387,	// (0x0008b4d0) navi_pane_mp_t

0x06d9,	// (0x0007c822) navi_pane_vt_g1

0xf026,	// (0x0008b16f) navi_pane_vt_t1

0x06e1,	// (0x0007c82a) navi_slider_pane

0xe740,	// (0x0008a889) zooming_pane

0x06e9,	// (0x0007c832) navi_slider_pane_g1

0x8000,	// (0x00084149) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x0008b4d7) navi_slider_pane_g

0x071f,	// (0x0007c868) aid_levels_zoom

0x0727,	// (0x0007c870) zooming_pane_g1

0x072f,	// (0x0007c878) zooming_pane_g2

0x072f,	// (0x0007c878) zooming_pane_g3

0x0002,

0xf39d,	// (0x0008b4e6) zooming_pane_g

0x0737,	// (0x0007c880) level_10_zoom

0x0740,	// (0x0007c889) level_11_zoom

0x0749,	// (0x0007c892) level_1_zoom

0x0752,	// (0x0007c89b) level_2_zoom

0x075b,	// (0x0007c8a4) level_3_zoom

0x0764,	// (0x0007c8ad) level_4_zoom

0x076d,	// (0x0007c8b6) level_5_zoom

0x0776,	// (0x0007c8bf) level_6_zoom

0x077f,	// (0x0007c8c8) level_7_zoom

0x0788,	// (0x0007c8d1) level_8_zoom

0x0791,	// (0x0007c8da) level_9_zoom

0x07a2,	// (0x0007c8eb) popup_phob_thumbnail_window_g1

0x07aa,	// (0x0007c8f3) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x0008b4ed) popup_phob_thumbnail_window_g

0x89a0,	// (0x00084ae9) level_1_location

0x89a8,	// (0x00084af1) level_2_location

0x89b0,	// (0x00084af9) level_3_location

0x89ba,	// (0x00084b03) level_4_location

0xe740,	// (0x0008a889) level_5_location

0x8012,	// (0x0008415b) mce_icon_pane_g1

0x801a,	// (0x00084163) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x0008b4f2) mce_icon_pane_g

0x8022,	// (0x0008416b) main_mup_pane_g1_ParamLimits

0x8022,	// (0x0008416b) main_mup_pane_g1

0xe54c,	// (0x0008a695) main_mup_pane_g2_ParamLimits

0xe54c,	// (0x0008a695) main_mup_pane_g2

0xe54c,	// (0x0008a695) main_mup_pane_g3_ParamLimits

0xe54c,	// (0x0008a695) main_mup_pane_g3

0xe54c,	// (0x0008a695) main_mup_pane_g4_ParamLimits

0xe54c,	// (0x0008a695) main_mup_pane_g4

0xe54c,	// (0x0008a695) main_mup_pane_g5_ParamLimits

0xe54c,	// (0x0008a695) main_mup_pane_g5

0xe54c,	// (0x0008a695) main_mup_pane_g6_ParamLimits

0xe54c,	// (0x0008a695) main_mup_pane_g6

0xe54c,	// (0x0008a695) main_mup_pane_g7_ParamLimits

0xe54c,	// (0x0008a695) main_mup_pane_g7

0xe54c,	// (0x0008a695) main_mup_pane_g8_ParamLimits

0xe54c,	// (0x0008a695) main_mup_pane_g8

0xe54c,	// (0x0008a695) main_mup_pane_g9_ParamLimits

0xe54c,	// (0x0008a695) main_mup_pane_g9

0xe54c,	// (0x0008a695) main_mup_pane_g10_ParamLimits

0xe54c,	// (0x0008a695) main_mup_pane_g10

0xe54c,	// (0x0008a695) main_mup_pane_g11_ParamLimits

0xe54c,	// (0x0008a695) main_mup_pane_g11

0xe53e,	// (0x0008a687) main_mup_pane_g12_ParamLimits

0xe53e,	// (0x0008a687) main_mup_pane_g12

0xe54c,	// (0x0008a695) main_mup_pane_g13_ParamLimits

0xe54c,	// (0x0008a695) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x0008b4f7) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x0008b4f7) main_mup_pane_g

0xe55a,	// (0x0008a6a3) main_mup_pane_t1_ParamLimits

0xe55a,	// (0x0008a6a3) main_mup_pane_t1

0xe55a,	// (0x0008a6a3) main_mup_pane_t2_ParamLimits

0xe55a,	// (0x0008a6a3) main_mup_pane_t2

0xe55a,	// (0x0008a6a3) main_mup_pane_t3_ParamLimits

0xe55a,	// (0x0008a6a3) main_mup_pane_t3

0x07d4,	// (0x0007c91d) main_mup_pane_t4_ParamLimits

0x07d4,	// (0x0007c91d) main_mup_pane_t4

0x07d4,	// (0x0007c91d) main_mup_pane_t5_ParamLimits

0x07d4,	// (0x0007c91d) main_mup_pane_t5

0xe77c,	// (0x0008a8c5) main_mup_pane_t6_ParamLimits

0xe77c,	// (0x0008a8c5) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x0008b512) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x0008b512) main_mup_pane_t

0xe4c9,	// (0x0008a612) mup_progress_pane_ParamLimits

0xe4c9,	// (0x0008a612) mup_progress_pane

0x1cac,	// (0x0007ddf5) mup_visualizer_pane_ParamLimits

0x1cac,	// (0x0007ddf5) mup_visualizer_pane

0x1cac,	// (0x0007ddf5) mup_volume_pane_ParamLimits

0x1cac,	// (0x0007ddf5) mup_volume_pane

0xe53e,	// (0x0008a687) mup_visualizer_pane_g1_ParamLimits

0xe53e,	// (0x0008a687) mup_visualizer_pane_g1

0x07f6,	// (0x0007c93f) mup_visualizer_pane_g2_ParamLimits

0x07f6,	// (0x0007c93f) mup_visualizer_pane_g2

0xe530,	// (0x0008a679) mup_visualizer_pane_g3_ParamLimits

0xe530,	// (0x0008a679) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x0008b51f) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x0008b51f) mup_visualizer_pane_g

0xe762,	// (0x0008a8ab) mup_volume_pane_g1

0xe762,	// (0x0008a8ab) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x0008b526) mup_volume_pane_g

0xe762,	// (0x0008a8ab) mup_progress_pane_g1

0xe762,	// (0x0008a8ab) mup_progress_pane_g2

0xe762,	// (0x0008a8ab) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x0008b52b) mup_progress_pane_g

0xe24c,	// (0x0008a395) bg_popup_window_pane_cp05

0x0804,	// (0x0007c94d) heading_pane_cp02_ParamLimits

0x0804,	// (0x0007c94d) heading_pane_cp02

0x0820,	// (0x0007c969) list_popup_blid_pane

0x0828,	// (0x0007c971) list_blid_sat_info_pane_ParamLimits

0x0828,	// (0x0007c971) list_blid_sat_info_pane

0x083b,	// (0x0007c984) list_blid_sat_info_pane_g1

0x0843,	// (0x0007c98c) list_blid_sat_info_pane_t1

0x8131,	// (0x0008427a) mup_equalizer_pane_ParamLimits

0x8131,	// (0x0008427a) mup_equalizer_pane

0x8152,	// (0x0008429b) mup_equalizer_pane_cp1_ParamLimits

0x8152,	// (0x0008429b) mup_equalizer_pane_cp1

0x8173,	// (0x000842bc) mup_equalizer_pane_cp2_ParamLimits

0x8173,	// (0x000842bc) mup_equalizer_pane_cp2

0x8194,	// (0x000842dd) mup_equalizer_pane_cp3_ParamLimits

0x8194,	// (0x000842dd) mup_equalizer_pane_cp3

0x81b9,	// (0x00084302) mup_equalizer_pane_cp4_ParamLimits

0x81b9,	// (0x00084302) mup_equalizer_pane_cp4

0x81de,	// (0x00084327) mup_equalizer_pane_cp5

0x81f6,	// (0x0008433f) mup_equalizer_pane_cp6

0x820e,	// (0x00084357) mup_equalizer_pane_cp7

0x1a70,	// (0x0007dbb9) bg_popup_call_poc_act_pane_g9

0x1a78,	// (0x0007dbc1) bg_popup_call_poc_act_pane_g10

0x1a80,	// (0x0007dbc9) bg_popup_call_poc_act_pane_g11

0x000a,

0xe4a7,	// (0x0008a5f0) mup_scale_pane

0xe4bf,	// (0x0008a608) mup_scale_pane_g1

0x0851,	// (0x0007c99a) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x0008b547) mup_scale_pane_g

0x0875,	// (0x0007c9be) msg_data_pane

0x087d,	// (0x0007c9c6) scroll_pane_cp017

0x8238,	// (0x00084381) bg_list_pane_cp04_ParamLimits

0x8238,	// (0x00084381) bg_list_pane_cp04

0x088d,	// (0x0007c9d6) msg_data_pane_g1

0x8258,	// (0x000843a1) msg_data_pane_g2

0x8262,	// (0x000843ab) msg_data_pane_g3

0x826c,	// (0x000843b5) msg_data_pane_g4

0x8274,	// (0x000843bd) msg_data_pane_g5

0x827c,	// (0x000843c5) msg_data_pane_g6

0x8284,	// (0x000843cd) msg_data_pane_g7

0x0006,

0xf40d,	// (0x0008b556) msg_data_pane_g

0x828c,	// (0x000843d5) msg_text_pane_ParamLimits

0x828c,	// (0x000843d5) msg_text_pane

0x82b6,	// (0x000843ff) qrid_highlight_pane_cp011_ParamLimits

0x82b6,	// (0x000843ff) qrid_highlight_pane_cp011

0xe24c,	// (0x0008a395) msg_body_pane

0xe24c,	// (0x0008a395) msg_header_pane

0x089e,	// (0x0007c9e7) input_focus_pane_cp07

0x08b3,	// (0x0007c9fc) msg_header_pane_t1_ParamLimits

0x08b3,	// (0x0007c9fc) msg_header_pane_t1

0x08c9,	// (0x0007ca12) msg_header_pane_t2_ParamLimits

0x08c9,	// (0x0007ca12) msg_header_pane_t2

0x0001,

0xf421,	// (0x0008b56a) msg_header_pane_t_ParamLimits

0xf421,	// (0x0008b56a) msg_header_pane_t

0x08e0,	// (0x0007ca29) msg_body_pane_g1

0x08e8,	// (0x0007ca31) msg_body_pane_t1_ParamLimits

0x08e8,	// (0x0007ca31) msg_body_pane_t1

0x0919,	// (0x0007ca62) msg_body_pane_t2_ParamLimits

0x0919,	// (0x0007ca62) msg_body_pane_t2

0x092b,	// (0x0007ca74) msg_body_pane_t3_ParamLimits

0x092b,	// (0x0007ca74) msg_body_pane_t3

0x0002,

0xf426,	// (0x0008b56f) msg_body_pane_t_ParamLimits

0xf426,	// (0x0008b56f) msg_body_pane_t

0x832c,	// (0x00084475) main_viewer_pane_g1_ParamLimits

0x832c,	// (0x00084475) main_viewer_pane_g1

0x8338,	// (0x00084481) main_viewer_pane_g2_ParamLimits

0x8338,	// (0x00084481) main_viewer_pane_g2

0x8344,	// (0x0008448d) main_viewer_pane_g3_ParamLimits

0x8344,	// (0x0008448d) main_viewer_pane_g3

0x8355,	// (0x0008449e) main_viewer_pane_g4_ParamLimits

0x8355,	// (0x0008449e) main_viewer_pane_g4

0x8366,	// (0x000844af) main_viewer_pane_g5_ParamLimits

0x8366,	// (0x000844af) main_viewer_pane_g5

0x8366,	// (0x000844af) main_viewer_pane_g7_ParamLimits

0x8366,	// (0x000844af) main_viewer_pane_g7

0x8378,	// (0x000844c1) main_viewer_pane_g8_ParamLimits

0x8378,	// (0x000844c1) main_viewer_pane_g8

0x0007,

0xf436,	// (0x0008b57f) main_viewer_pane_g_ParamLimits

0xf436,	// (0x0008b57f) main_viewer_pane_g

0x097f,	// (0x0007cac8) viewer_content_pane_ParamLimits

0x097f,	// (0x0007cac8) viewer_content_pane

0x83b0,	// (0x000844f9) main_postcard_pane_g1_ParamLimits

0x83b0,	// (0x000844f9) main_postcard_pane_g1

0x83be,	// (0x00084507) main_postcard_pane_g2_ParamLimits

0x83be,	// (0x00084507) main_postcard_pane_g2

0x83cc,	// (0x00084515) main_postcard_pane_g3_ParamLimits

0x83cc,	// (0x00084515) main_postcard_pane_g3

0x0005,

0xf447,	// (0x0008b590) main_postcard_pane_g_ParamLimits

0xf447,	// (0x0008b590) main_postcard_pane_g

0x83dc,	// (0x00084525) main_postcard_pane_g4

0x1c0e,	// (0x0007dd57) smil_status_volume_pane_g2

0x8408,	// (0x00084551) postcard_pane_ParamLimits

0x8408,	// (0x00084551) postcard_pane

0x1215,	// (0x0007d35e) postcard_pane_g1_ParamLimits

0x1215,	// (0x0007d35e) postcard_pane_g1

0x8442,	// (0x0008458b) postcard_pane_g2_ParamLimits

0x8442,	// (0x0008458b) postcard_pane_g2

0x844e,	// (0x00084597) postcard_pane_g3_ParamLimits

0x844e,	// (0x00084597) postcard_pane_g3

0x099b,	// (0x0007cae4) postcard_pane_g4_ParamLimits

0x099b,	// (0x0007cae4) postcard_pane_g4

0x845a,	// (0x000845a3) postcard_pane_g5_ParamLimits

0x845a,	// (0x000845a3) postcard_pane_g5

0x8466,	// (0x000845af) postcard_pane_g6_ParamLimits

0x8466,	// (0x000845af) postcard_pane_g6

0x098d,	// (0x0007cad6) postcard_pane_g7_ParamLimits

0x098d,	// (0x0007cad6) postcard_pane_g7

0x0006,

0xf454,	// (0x0008b59d) postcard_pane_g_ParamLimits

0xf454,	// (0x0008b59d) postcard_pane_g

0x8474,	// (0x000845bd) main_mp2_pane_g1_ParamLimits

0x8474,	// (0x000845bd) main_mp2_pane_g1

0x8482,	// (0x000845cb) main_mp2_pane_g2_ParamLimits

0x8482,	// (0x000845cb) main_mp2_pane_g2

0x848e,	// (0x000845d7) main_mp2_pane_g3_ParamLimits

0x848e,	// (0x000845d7) main_mp2_pane_g3

0x0002,

0xf463,	// (0x0008b5ac) main_mp2_pane_g_ParamLimits

0xf463,	// (0x0008b5ac) main_mp2_pane_g

0x849a,	// (0x000845e3) main_mp2_pane_t1_ParamLimits

0x849a,	// (0x000845e3) main_mp2_pane_t1

0x84b1,	// (0x000845fa) main_mp2_pane_t2_ParamLimits

0x84b1,	// (0x000845fa) main_mp2_pane_t2

0x84c5,	// (0x0008460e) main_mp2_pane_t3_ParamLimits

0x84c5,	// (0x0008460e) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x0008b5b3) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x0008b5b3) main_mp2_pane_t

0x09a9,	// (0x0007caf2) pec_content_pane_ParamLimits

0x09a9,	// (0x0007caf2) pec_content_pane

0xe8db,	// (0x0008aa24) scroll_pane_cp015

0x09bb,	// (0x0007cb04) pec_attribute_pane_ParamLimits

0x09bb,	// (0x0007cb04) pec_attribute_pane

0x84d7,	// (0x00084620) pec_content_pane_g1_ParamLimits

0x84d7,	// (0x00084620) pec_content_pane_g1

0x09cb,	// (0x0007cb14) pec_content_pane_t1_ParamLimits

0x09cb,	// (0x0007cb14) pec_content_pane_t1

0x09dd,	// (0x0007cb26) pec_content_pane_t2_ParamLimits

0x09dd,	// (0x0007cb26) pec_content_pane_t2

0x0001,

0xf471,	// (0x0008b5ba) pec_content_pane_t_ParamLimits

0xf471,	// (0x0008b5ba) pec_content_pane_t

0x84e3,	// (0x0008462c) list_single_graphic_pane_cp01_ParamLimits

0x84e3,	// (0x0008462c) list_single_graphic_pane_cp01

0xe4a7,	// (0x0008a5f0) bg_popup_sub_pane_cp04

0x09ef,	// (0x0007cb38) popup_mup_playback_window_g1

0x09fb,	// (0x0007cb44) popup_mup_playback_window_t1

0x0a10,	// (0x0007cb59) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x0008b5bf) popup_mup_playback_window_t

0x0a47,	// (0x0007cb90) main_image_pane_g1_ParamLimits

0x0a47,	// (0x0007cb90) main_image_pane_g1

0x0a8a,	// (0x0007cbd3) scroll_pane_cp018_ParamLimits

0x0a8a,	// (0x0007cbd3) scroll_pane_cp018

0x0aa2,	// (0x0007cbeb) scroll_pane_cp016_ParamLimits

0x0aa2,	// (0x0007cbeb) scroll_pane_cp016

0x8571,	// (0x000846ba) smil2_image_pane_ParamLimits

0x8571,	// (0x000846ba) smil2_image_pane

0x85a7,	// (0x000846f0) smil2_root_pane_ParamLimits

0x85a7,	// (0x000846f0) smil2_root_pane

0x85d3,	// (0x0008471c) smil2_text_pane_ParamLimits

0x85d3,	// (0x0008471c) smil2_text_pane

0xe24c,	// (0x0008a395) bg_list_pane_cp06

0x0ade,	// (0x0007cc27) grid_radio_pane

0xe24c,	// (0x0008a395) bg_popup_window_pane_cp06

0x0ae8,	// (0x0007cc31) main_fmradio_pane_t1

0x1a88,	// (0x0007dbd1) heading_pane_cp04

0x0af6,	// (0x0007cc3f) main_fmradio_pane_t2

0x1a90,	// (0x0007dbd9) popup_cale_lunar_info_window_g1

0x0b04,	// (0x0007cc4d) main_fmradio_pane_t3

0x1a98,	// (0x0007dbe1) popup_cale_lunar_info_window_g2

0x0b14,	// (0x0007cc5d) main_fmradio_pane_t4

0x0001,

0x0b22,	// (0x0007cc6b) main_fmradio_pane_t5

0x0004,

0xf556,	// (0x0008b69f) popup_cale_lunar_info_window_g

0xf48b,	// (0x0008b5d4) main_fmradio_pane_t

0x0b30,	// (0x0007cc79) wait_bar_pane_cp03

0x0b38,	// (0x0007cc81) cell_fmradio_pane_ParamLimits

0x0b38,	// (0x0007cc81) cell_fmradio_pane

0x098d,	// (0x0007cad6) cell_fmradio_pane_g1_ParamLimits

0x098d,	// (0x0007cad6) cell_fmradio_pane_g1

0xe24c,	// (0x0008a395) grid_highlight_pane_cp011

0x0b4d,	// (0x0007cc96) poc_content_pane_ParamLimits

0x0b4d,	// (0x0007cc96) poc_content_pane

0x0b5f,	// (0x0007cca8) scroll_pane_cp019

0x8613,	// (0x0008475c) popup_call_poc_act_window_ParamLimits

0x8613,	// (0x0008475c) popup_call_poc_act_window

0x8620,	// (0x00084769) popup_call_poc_inact_window_ParamLimits

0x8620,	// (0x00084769) popup_call_poc_inact_window

0xf52d,	// (0x0008b676) bg_popup_call_poc_act_pane_g

0x1a00,	// (0x0007db49) bg_popup_call_poc_inact_pane_g1

0x1a08,	// (0x0007db51) bg_popup_call_poc_inact_pane_g2

0x0b67,	// (0x0007ccb0) popup_call_poc_act_window_g2

0x1a10,	// (0x0007db59) bg_popup_call_poc_inact_pane_g3

0x1a18,	// (0x0007db61) bg_popup_call_poc_inact_pane_g4

0x1a20,	// (0x0007db69) bg_popup_call_poc_inact_pane_g5

0x0b6f,	// (0x0007ccb8) popup_call_poc_act_window_t1_ParamLimits

0x0b6f,	// (0x0007ccb8) popup_call_poc_act_window_t1

0x0b97,	// (0x0007cce0) popup_call_poc_act_window_t2_ParamLimits

0x0b97,	// (0x0007cce0) popup_call_poc_act_window_t2

0x0bbf,	// (0x0007cd08) popup_call_poc_act_window_t3_ParamLimits

0x0bbf,	// (0x0007cd08) popup_call_poc_act_window_t3

0x0be7,	// (0x0007cd30) popup_call_poc_act_window_t4_ParamLimits

0x0be7,	// (0x0007cd30) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x0008b5df) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x0008b5df) popup_call_poc_act_window_t

0x1a28,	// (0x0007db71) bg_popup_call_poc_inact_pane_g6

0x1a30,	// (0x0007db79) bg_popup_call_poc_inact_pane_g7

0x1a38,	// (0x0007db81) bg_popup_call_poc_inact_pane_g8

0x0bf9,	// (0x0007cd42) popup_call_poc_inact_window_g2

0x1a40,	// (0x0007db89) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf51a,	// (0x0008b663) bg_popup_call_poc_inact_pane_g

0x0c01,	// (0x0007cd4a) popup_call_poc_inact_window_t1_ParamLimits

0x0c01,	// (0x0007cd4a) popup_call_poc_inact_window_t1

0x0c16,	// (0x0007cd5f) popup_call_poc_inact_window_t2_ParamLimits

0x0c16,	// (0x0007cd5f) popup_call_poc_inact_window_t2

0x0c2b,	// (0x0007cd74) popup_call_poc_inact_window_t3_ParamLimits

0x0c2b,	// (0x0007cd74) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x0008b5e8) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x0008b5e8) popup_call_poc_inact_window_t

0x1b86,	// (0x0007dccf) context_pane_ParamLimits

0x8ce9,	// (0x00084e32) signal_pane_ParamLimits

0xe740,	// (0x0008a889) main_call2_pane

0x8c55,	// (0x00084d9e) popup_phob_thumbnail2_window_ParamLimits

0x8c55,	// (0x00084d9e) popup_phob_thumbnail2_window

0x82da,	// (0x00084423) aid_hotspot_pointer_arrow_pane

0x82e2,	// (0x0008442b) aid_hotspot_pointer_hand_pane

0x8968,	// (0x00084ab1) phob_pre_status_pane_g5

0xe522,	// (0x0008a66b) cams_zoom_pane_ParamLimits

0xe522,	// (0x0008a66b) image_vga_pane_ParamLimits

0xe53e,	// (0x0008a687) main_camera_pane_g1_ParamLimits

0xe53e,	// (0x0008a687) main_camera_pane_g2_ParamLimits

0xe53e,	// (0x0008a687) main_camera_pane_g3_ParamLimits

0xe53e,	// (0x0008a687) main_camera_pane_g4_ParamLimits

0xe53e,	// (0x0008a687) main_camera_pane_g5_ParamLimits

0xe53e,	// (0x0008a687) main_camera_pane_g6_ParamLimits

0xe53e,	// (0x0008a687) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0008b30e) main_camera_pane_g_ParamLimits

0x07d4,	// (0x0007c91d) main_camera_pane_t1_ParamLimits

0x07d4,	// (0x0007c91d) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0008b31f) main_camera_pane_t_ParamLimits

0xe4a7,	// (0x0008a5f0) bg_popup_preview_window_pane_cp01_ParamLimits

0xe4a7,	// (0x0008a5f0) bg_popup_preview_window_pane_cp01

0x0c40,	// (0x0007cd89) popup_phob_thumbnail2_window_g1_ParamLimits

0x0c40,	// (0x0007cd89) popup_phob_thumbnail2_window_g1

0xe24c,	// (0x0008a395) call2_cli_visual_pane

0x863c,	// (0x00084785) popup_call2_audio_conf_window_ParamLimits

0x863c,	// (0x00084785) popup_call2_audio_conf_window

0x8655,	// (0x0008479e) popup_call2_audio_first_window_ParamLimits

0x8655,	// (0x0008479e) popup_call2_audio_first_window

0x86f3,	// (0x0008483c) popup_call2_audio_in_window_ParamLimits

0x86f3,	// (0x0008483c) popup_call2_audio_in_window

0x8737,	// (0x00084880) popup_call2_audio_out_window_ParamLimits

0x8737,	// (0x00084880) popup_call2_audio_out_window

0x87a1,	// (0x000848ea) popup_call2_audio_second_window_ParamLimits

0x87a1,	// (0x000848ea) popup_call2_audio_second_window

0x87ff,	// (0x00084948) popup_call2_audio_wait_window_ParamLimits

0x87ff,	// (0x00084948) popup_call2_audio_wait_window

0xe24c,	// (0x0008a395) bg_popup_call2_act_pane_cp03

0xe489,	// (0x0008a5d2) list_conf_pane_cp

0x0c4c,	// (0x0007cd95) popup_call2_audio_conf_window_t1

0x0c5a,	// (0x0007cda3) list_single_graphic_popup_conf2_pane_ParamLimits

0x0c5a,	// (0x0007cda3) list_single_graphic_popup_conf2_pane

0xee8c,	// (0x0008afd5) list_highlight_pane_cp04

0x0c6d,	// (0x0007cdb6) list_single_graphic_popup_conf2_pane_g1

0xee9d,	// (0x0008afe6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x0008b5ef) list_single_graphic_popup_conf2_pane_g

0x0c77,	// (0x0007cdc0) list_single_graphic_popup_conf2_pane_t1

0x0c85,	// (0x0007cdce) bg_popup_call2_act_pane_cp01_ParamLimits

0x0c85,	// (0x0007cdce) bg_popup_call2_act_pane_cp01

0x0d0f,	// (0x0007ce58) call_type_pane_cp05_ParamLimits

0x0d0f,	// (0x0007ce58) call_type_pane_cp05

0x0d63,	// (0x0007ceac) popup_call2_audio_second_window_g1_ParamLimits

0x0d63,	// (0x0007ceac) popup_call2_audio_second_window_g1

0x0db7,	// (0x0007cf00) popup_call2_audio_second_window_g2_ParamLimits

0x0db7,	// (0x0007cf00) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x0008b5f4) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x0008b5f4) popup_call2_audio_second_window_g

0x0e1c,	// (0x0007cf65) popup_call2_audio_second_window_t1_ParamLimits

0x0e1c,	// (0x0007cf65) popup_call2_audio_second_window_t1

0x0ed7,	// (0x0007d020) popup_call2_audio_second_window_t2_ParamLimits

0x0ed7,	// (0x0007d020) popup_call2_audio_second_window_t2

0x0f2a,	// (0x0007d073) popup_call2_audio_second_window_t3_ParamLimits

0x0f2a,	// (0x0007d073) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x0008b5fb) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x0008b5fb) popup_call2_audio_second_window_t

0xe24c,	// (0x0008a395) bg_popup_call2_in_pane_cp02

0xe256,	// (0x0008a39f) call_type_pane_cp04

0x883e,	// (0x00084987) popup_call2_audio_wait_window_g1

0x8846,	// (0x0008498f) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x0008b604) popup_call2_audio_wait_window_g

0xe26e,	// (0x0008a3b7) popup_call2_audio_wait_window_t3

0x101d,	// (0x0007d166) bg_popup_call2_act_pane_ParamLimits

0x101d,	// (0x0007d166) bg_popup_call2_act_pane

0x10dd,	// (0x0007d226) call_type_pane_cp03_ParamLimits

0x10dd,	// (0x0007d226) call_type_pane_cp03

0x1141,	// (0x0007d28a) popup_call2_audio_first_window_g1_ParamLimits

0x1141,	// (0x0007d28a) popup_call2_audio_first_window_g1

0x11b1,	// (0x0007d2fa) popup_call2_audio_first_window_g2_ParamLimits

0x11b1,	// (0x0007d2fa) popup_call2_audio_first_window_g2

0x1215,	// (0x0007d35e) popup_call2_audio_first_window_g3_ParamLimits

0x1215,	// (0x0007d35e) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x0008b609) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x0008b609) popup_call2_audio_first_window_g

0x129d,	// (0x0007d3e6) popup_call2_audio_first_window_t1_ParamLimits

0x129d,	// (0x0007d3e6) popup_call2_audio_first_window_t1

0x13a0,	// (0x0007d4e9) popup_call2_audio_first_window_t4_ParamLimits

0x13a0,	// (0x0007d4e9) popup_call2_audio_first_window_t4

0x1483,	// (0x0007d5cc) popup_call2_audio_first_window_t5_ParamLimits

0x1483,	// (0x0007d5cc) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x0008b614) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x0008b614) popup_call2_audio_first_window_t

0xe49f,	// (0x0008a5e8) bg_popup_call2_act_pane_g1

0x1aa2,	// (0x0007dbeb) popup_cale_lunar_info_window_t1

0x1ab0,	// (0x0007dbf9) popup_cale_lunar_info_window_t2

0x1abe,	// (0x0007dc07) popup_cale_lunar_info_window_t3

0xe24c,	// (0x0008a395) bg_popup_call2_bubble_pane

0x1584,	// (0x0007d6cd) bg_popup_call2_in_pane_cp01_ParamLimits

0x1584,	// (0x0007d6cd) bg_popup_call2_in_pane_cp01

0xdf28,	// (0x0008a071) call_type_pane_cp02

0x884e,	// (0x00084997) popup_call2_audio_out_window_g1_ParamLimits

0x884e,	// (0x00084997) popup_call2_audio_out_window_g1

0x15cc,	// (0x0007d715) popup_call2_audio_out_window_g2_ParamLimits

0x15cc,	// (0x0007d715) popup_call2_audio_out_window_g2

0x887a,	// (0x000849c3) popup_call2_audio_out_window_g3_ParamLimits

0x887a,	// (0x000849c3) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x0008b61d) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x0008b61d) popup_call2_audio_out_window_g

0x1603,	// (0x0007d74c) popup_call2_audio_out_window_t1_ParamLimits

0x1603,	// (0x0007d74c) popup_call2_audio_out_window_t1

0x1662,	// (0x0007d7ab) popup_call2_audio_out_window_t2_ParamLimits

0x1662,	// (0x0007d7ab) popup_call2_audio_out_window_t2

0x16b6,	// (0x0007d7ff) popup_call2_audio_out_window_t3_ParamLimits

0x16b6,	// (0x0007d7ff) popup_call2_audio_out_window_t3

0x16cc,	// (0x0007d815) popup_call2_audio_out_window_t4_ParamLimits

0x16cc,	// (0x0007d815) popup_call2_audio_out_window_t4

0x16e2,	// (0x0007d82b) popup_call2_audio_out_window_t5_ParamLimits

0x16e2,	// (0x0007d82b) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x0008b626) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x0008b626) popup_call2_audio_out_window_t

0x1746,	// (0x0007d88f) bg_popup_call2_in_pane_ParamLimits

0x1746,	// (0x0007d88f) bg_popup_call2_in_pane

0x17a2,	// (0x0007d8eb) popup_call2_audio_in_window_g1_ParamLimits

0x17a2,	// (0x0007d8eb) popup_call2_audio_in_window_g1

0x17da,	// (0x0007d923) popup_call2_audio_in_window_g2_ParamLimits

0x17da,	// (0x0007d923) popup_call2_audio_in_window_g2

0x1812,	// (0x0007d95b) popup_call2_audio_in_window_g3_ParamLimits

0x1812,	// (0x0007d95b) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x0008b633) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x0008b633) popup_call2_audio_in_window_g

0x186a,	// (0x0007d9b3) popup_call2_audio_in_window_t1_ParamLimits

0x186a,	// (0x0007d9b3) popup_call2_audio_in_window_t1

0x18ea,	// (0x0007da33) popup_call2_audio_in_window_t2_ParamLimits

0x18ea,	// (0x0007da33) popup_call2_audio_in_window_t2

0x196a,	// (0x0007dab3) popup_call2_audio_in_window_t3_ParamLimits

0x196a,	// (0x0007dab3) popup_call2_audio_in_window_t3

0x1984,	// (0x0007dacd) popup_call2_audio_in_window_t4_ParamLimits

0x1984,	// (0x0007dacd) popup_call2_audio_in_window_t4

0x1996,	// (0x0007dadf) popup_call2_audio_in_window_t5_ParamLimits

0x1996,	// (0x0007dadf) popup_call2_audio_in_window_t5

0x19ab,	// (0x0007daf4) popup_call2_audio_in_window_t6_ParamLimits

0x19ab,	// (0x0007daf4) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x0008b63c) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x0008b63c) popup_call2_audio_in_window_t

0xe49f,	// (0x0008a5e8) bg_popup_call2_in_pane_g1

0x1acc,	// (0x0007dc15) popup_cale_lunar_info_window_t4

0x0003,

0xf55b,	// (0x0008b6a4) popup_cale_lunar_info_window_t

0xe4a7,	// (0x0008a5f0) bg_popup_call2_rect_pane_ParamLimits

0xe4a7,	// (0x0008a5f0) bg_popup_call2_rect_pane

0xe24c,	// (0x0008a395) call2_cli_visual_graphic_pane

0xe24c,	// (0x0008a395) call2_cli_visual_text_pane

0x8d11,	// (0x00084e5a) smil_status_volume_pane_g3

0x0002,

0xe4bf,	// (0x0008a608) call2_cli_visual_graphic_pane_g1

0xe4bf,	// (0x0008a608) call2_cli_visual_graphic_pane_g2

0xe4bf,	// (0x0008a608) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x0008b649) call2_cli_visual_graphic_pane_g

0x19c0,	// (0x0007db09) bg_popup_call2_rect_pane_g1

0xe679,	// (0x0008a7c2) bg_popup_call2_rect_pane_g2

0x19c8,	// (0x0007db11) bg_popup_call2_rect_pane_g3

0x19d0,	// (0x0007db19) bg_popup_call2_rect_pane_g4

0x19d8,	// (0x0007db21) bg_popup_call2_rect_pane_g5

0x19e0,	// (0x0007db29) bg_popup_call2_rect_pane_g6

0x19e8,	// (0x0007db31) bg_popup_call2_rect_pane_g7

0x19f0,	// (0x0007db39) bg_popup_call2_rect_pane_g8

0x19f8,	// (0x0007db41) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x0008b650) bg_popup_call2_rect_pane_g

0x1a00,	// (0x0007db49) bg_popup_call2_bubble_pane_g1

0x1a08,	// (0x0007db51) bg_popup_call2_bubble_pane_g2

0x1a10,	// (0x0007db59) bg_popup_call2_bubble_pane_g3

0x1a18,	// (0x0007db61) bg_popup_call2_bubble_pane_g4

0x1a20,	// (0x0007db69) bg_popup_call2_bubble_pane_g5

0x1a28,	// (0x0007db71) bg_popup_call2_bubble_pane_g6

0x1a30,	// (0x0007db79) bg_popup_call2_bubble_pane_g7

0x1a38,	// (0x0007db81) bg_popup_call2_bubble_pane_g8

0x1a40,	// (0x0007db89) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x0008b663) bg_popup_call2_bubble_pane_g

0x61c1,	// (0x0008230a) aid_cale_week_size_cell_pane

0xe4a7,	// (0x0008a5f0) aid_cams_cif_uncrop_pane_ParamLimits

0xe4a7,	// (0x0008a5f0) aid_cams_cif_uncrop_pane

0x69b0,	// (0x00082af9) aid_cams_size_cell_ParamLimits

0x69b0,	// (0x00082af9) aid_cams_size_cell

0x69bc,	// (0x00082b05) grid_cams_pane_ParamLimits

0x69ca,	// (0x00082b13) linegrid_cams_pane_ParamLimits

0x6a9b,	// (0x00082be4) call_video_pane_t1

0x6ab8,	// (0x00082c01) call_video_pane_t2

0x0001,

0xf222,	// (0x0008b36b) call_video_pane_t

0x6f84,	// (0x000830cd) aid_cale_month_size_cell_pane_ParamLimits

0x6f84,	// (0x000830cd) aid_cale_month_size_cell_pane

0xf59f,	// (0x0008b6e8) smil_status_volume_pane_g

0x8d1e,	// (0x00084e67) volume_smil_pane_ParamLimits

0x5abe,	// (0x00081c07) aid_popup2_width_pane

0x60bf,	// (0x00082208) cell_qdial_pane_g4_ParamLimits

0x60bf,	// (0x00082208) cell_qdial_pane_g4

0x7e4d,	// (0x00083f96) aid_blid_cardinal_pane_ParamLimits

0x7e5d,	// (0x00083fa6) aid_blid_destination_pane_ParamLimits

0x7e5d,	// (0x00083fa6) aid_blid_destination_pane

0xe4a7,	// (0x0008a5f0) bg_popup_call_poc_act_pane_ParamLimits

0xe4a7,	// (0x0008a5f0) bg_popup_call_poc_act_pane

0xe4a7,	// (0x0008a5f0) bg_popup_call_poc_inact_pane_ParamLimits

0xe4a7,	// (0x0008a5f0) bg_popup_call_poc_inact_pane

0x1a48,	// (0x0007db91) bg_popup_call_poc_act_pane_g1

0x1a50,	// (0x0007db99) bg_popup_call_poc_act_pane_g2

0x1a58,	// (0x0007dba1) bg_popup_call_poc_act_pane_g3

0x1a18,	// (0x0007db61) bg_popup_call_poc_act_pane_g4

0x1a20,	// (0x0007db69) bg_popup_call_poc_act_pane_g5

0x1a60,	// (0x0007dba9) bg_popup_call_poc_act_pane_g6

0x1a30,	// (0x0007db79) bg_popup_call_poc_act_pane_g7

0x1a68,	// (0x0007dbb1) bg_popup_call_poc_act_pane_g8

0xe24c,	// (0x0008a395) main_usb_pane

0x8b72,	// (0x00084cbb) popup_cale_lunar_info_window

0x6dd0,	// (0x00082f19) im_reading_pane_t1_ParamLimits

0xe833,	// (0x0008a97c) list_im_pane_ParamLimits

0xe844,	// (0x0008a98d) scroll_pane_cp07_ParamLimits

0xe24c,	// (0x0008a395) grid_highlight_pane_cp012

0xe4a7,	// (0x0008a5f0) mup_scale_pane_ParamLimits

0x1215,	// (0x0007d35e) main_usb_pane_g1_ParamLimits

0x1215,	// (0x0007d35e) main_usb_pane_g1

0x88d0,	// (0x00084a19) main_usb_pane_g2_ParamLimits

0x88d0,	// (0x00084a19) main_usb_pane_g2

0x0001,

0xf544,	// (0x0008b68d) main_usb_pane_g_ParamLimits

0xf544,	// (0x0008b68d) main_usb_pane_g

0x88dc,	// (0x00084a25) main_usb_pane_t1_ParamLimits

0x88dc,	// (0x00084a25) main_usb_pane_t1

0x88ee,	// (0x00084a37) main_usb_pane_t2_ParamLimits

0x88ee,	// (0x00084a37) main_usb_pane_t2

0x8900,	// (0x00084a49) main_usb_pane_t3_ParamLimits

0x8900,	// (0x00084a49) main_usb_pane_t3

0x8912,	// (0x00084a5b) main_usb_pane_t4_ParamLimits

0x8912,	// (0x00084a5b) main_usb_pane_t4

0x8924,	// (0x00084a6d) main_usb_pane_t5_ParamLimits

0x8924,	// (0x00084a6d) main_usb_pane_t5

0x8936,	// (0x00084a7f) main_usb_pane_t6_ParamLimits

0x8936,	// (0x00084a7f) main_usb_pane_t6

0x0005,

0xf549,	// (0x0008b692) main_usb_pane_t_ParamLimits

0x7dec,	// (0x00083f35) aid_text_placing

0x7df7,	// (0x00083f40) main_location2_pane_t1_ParamLimits

0x7e0d,	// (0x00083f56) main_location2_pane_t2_ParamLimits

0x7e23,	// (0x00083f6c) main_location2_pane_t3_ParamLimits

0x7e39,	// (0x00083f82) main_location2_pane_t4_ParamLimits

0x7e39,	// (0x00083f82) main_location2_pane_t4

0xf363,	// (0x0008b4ac) main_location2_pane_t_ParamLimits

0xe4e3,	// (0x0008a62c) find_pinb_pane_g2_ParamLimits

0xe4e3,	// (0x0008a62c) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0008b223) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0008b223) find_pinb_pane_g

0xe4ef,	// (0x0008a638) find_pinb_pane_t1_ParamLimits

0xe501,	// (0x0008a64a) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0008b228) find_pinb_pane_t_ParamLimits

0xe24c,	// (0x0008a395) main_call3_pane

0x7537,	// (0x00083680) cale_month_day_heading_pane_t1_ParamLimits

0x75b9,	// (0x00083702) cale_month_day_heading_pane_t2_ParamLimits

0x7632,	// (0x0008377b) cale_month_day_heading_pane_t3_ParamLimits

0x76ab,	// (0x000837f4) cale_month_day_heading_pane_t4_ParamLimits

0x7724,	// (0x0008386d) cale_month_day_heading_pane_t5_ParamLimits

0x77a5,	// (0x000838ee) cale_month_day_heading_pane_t6_ParamLimits

0x782e,	// (0x00083977) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0008b3a3) cale_month_day_heading_pane_t_ParamLimits

0xea8e,	// (0x0008abd7) smil_status_volume_pane

0x8426,	// (0x0008456f) postcard_address_pane_ParamLimits

0x8426,	// (0x0008456f) postcard_address_pane

0x8434,	// (0x0008457d) postcard_message_pane_ParamLimits

0x8434,	// (0x0008457d) postcard_message_pane

0x88a6,	// (0x000849ef) call2_cli_visual_pane_t1_ParamLimits

0x88a6,	// (0x000849ef) call2_cli_visual_pane_t1

0x1c6e,	// (0x0007ddb7) postcard_message_pane_t1_ParamLimits

0x1c6e,	// (0x0007ddb7) postcard_message_pane_t1

0x1c56,	// (0x0007dd9f) postcard_address_pane_t1_ParamLimits

0x1c56,	// (0x0007dd9f) postcard_address_pane_t1

0x8e55,	// (0x00084f9e) popup_call3_audio_in_window_ParamLimits

0x8e55,	// (0x00084f9e) popup_call3_audio_in_window

0x8d33,	// (0x00084e7c) bg_popup_call3_in_pane_ParamLimits

0x8d33,	// (0x00084e7c) bg_popup_call3_in_pane

0x8d9b,	// (0x00084ee4) popup_call3_audio_in_window_g1_ParamLimits

0x8d9b,	// (0x00084ee4) popup_call3_audio_in_window_g1

0x8db3,	// (0x00084efc) popup_call3_audio_in_window_g2_ParamLimits

0x8db3,	// (0x00084efc) popup_call3_audio_in_window_g2

0x8dcb,	// (0x00084f14) popup_call3_audio_in_window_g3_ParamLimits

0x8dcb,	// (0x00084f14) popup_call3_audio_in_window_g3

0x0003,

0xf5a6,	// (0x0008b6ef) popup_call3_audio_in_window_g_ParamLimits

0xf5a6,	// (0x0008b6ef) popup_call3_audio_in_window_g

0x8df3,	// (0x00084f3c) popup_call3_audio_in_window_t1_ParamLimits

0x8df3,	// (0x00084f3c) popup_call3_audio_in_window_t1

0x8e1b,	// (0x00084f64) popup_call3_audio_in_window_t2_ParamLimits

0x8e1b,	// (0x00084f64) popup_call3_audio_in_window_t2

0x8e43,	// (0x00084f8c) popup_call3_audio_in_window_t3_ParamLimits

0x8e43,	// (0x00084f8c) popup_call3_audio_in_window_t3

0x0002,

0xf5af,	// (0x0008b6f8) popup_call3_audio_in_window_t_ParamLimits

0xf5af,	// (0x0008b6f8) popup_call3_audio_in_window_t

0xe740,	// (0x0008a889) bg_popup_call3_rect_pane

0x19c0,	// (0x0007db09) bg_popup_call3_rect_pane_g1

0xe679,	// (0x0008a7c2) bg_popup_call3_rect_pane_g2

0x19c8,	// (0x0007db11) bg_popup_call3_rect_pane_g3

0x19d0,	// (0x0007db19) bg_popup_call3_rect_pane_g4

0x19d8,	// (0x0007db21) bg_popup_call3_rect_pane_g5

0x19e0,	// (0x0007db29) bg_popup_call3_rect_pane_g6

0x19e8,	// (0x0007db31) bg_popup_call3_rect_pane_g7

0xddfa,	// (0x00089f43) mup_visualizer_osc_pane

0xddfa,	// (0x00089f43) mup_visualizer_spec_pane

0x8d53,	// (0x00084e9c) call3_video_qcif_pane_ParamLimits

0x8d53,	// (0x00084e9c) call3_video_qcif_pane

0x8d65,	// (0x00084eae) call3_video_qcif_uncrop_pane_ParamLimits

0x8d65,	// (0x00084eae) call3_video_qcif_uncrop_pane

0x8d75,	// (0x00084ebe) call3_video_subqcif_pane_ParamLimits

0x8d75,	// (0x00084ebe) call3_video_subqcif_pane

0x8d89,	// (0x00084ed2) call3_video_subqcif_uncrop_pane_ParamLimits

0x8d89,	// (0x00084ed2) call3_video_subqcif_uncrop_pane

0x8de3,	// (0x00084f2c) popup_call3_audio_in_window_g4_ParamLimits

0x8de3,	// (0x00084f2c) popup_call3_audio_in_window_g4

0xddfa,	// (0x00089f43) mup_spec_half_pane

0xddfa,	// (0x00089f43) mup_spec_half_pane_cp

0xddfa,	// (0x00089f43) mup_osc_middle_pane

0xe762,	// (0x0008a8ab) mup_visualizer_osc_pane_g1

0x1be7,	// (0x0007dd30) mup_spec_bar_pane_ParamLimits

0x1be7,	// (0x0007dd30) mup_spec_bar_pane

0xe762,	// (0x0008a8ab) mup_spec_bar_pane_g1

0xe762,	// (0x0008a8ab) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x0008b526) mup_spec_bar_pane_g

0x61c1,	// (0x0008230a) aid_cale_week_size_cell_pane_ParamLimits

0x61db,	// (0x00082324) bg_cale_heading_pane_ParamLimits

0x6204,	// (0x0008234d) bg_cale_pane_cp01_ParamLimits

0x6226,	// (0x0008236f) cale_week_corner_pane_ParamLimits

0x6245,	// (0x0008238e) cale_week_day_heading_pane_ParamLimits

0x6273,	// (0x000823bc) cale_week_scroll_pane_g1_ParamLimits

0x6297,	// (0x000823e0) cale_week_scroll_pane_g2_ParamLimits

0x62af,	// (0x000823f8) cale_week_scroll_pane_g3_ParamLimits

0x62c7,	// (0x00082410) cale_week_scroll_pane_g4_ParamLimits

0x62df,	// (0x00082428) cale_week_scroll_pane_g5_ParamLimits

0x62f7,	// (0x00082440) cale_week_scroll_pane_g6_ParamLimits

0x6317,	// (0x00082460) cale_week_scroll_pane_g7_ParamLimits

0x6337,	// (0x00082480) cale_week_scroll_pane_g8_ParamLimits

0x6357,	// (0x000824a0) cale_week_scroll_pane_g9_ParamLimits

0x6374,	// (0x000824bd) cale_week_scroll_pane_g10_ParamLimits

0x6391,	// (0x000824da) cale_week_scroll_pane_g11_ParamLimits

0x63b0,	// (0x000824f9) cale_week_scroll_pane_g12_ParamLimits

0x63d5,	// (0x0008251e) cale_week_scroll_pane_g13_ParamLimits

0x63fe,	// (0x00082547) cale_week_scroll_pane_g14_ParamLimits

0x6427,	// (0x00082570) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0008b2b4) cale_week_scroll_pane_g_ParamLimits

0x6470,	// (0x000825b9) cale_week_time_pane_ParamLimits

0x6490,	// (0x000825d9) grid_cale_week_pane_ParamLimits

0xe6b6,	// (0x0008a7ff) listscroll_cale_week_pane_t1

0xe6c8,	// (0x0008a811) scroll_pane_cp08_ParamLimits

0x6ffc,	// (0x00083145) cale_month_corner_pane_ParamLimits

0xea64,	// (0x0008abad) cale_month_pane_t1

0x74be,	// (0x00083607) cale_month_week_pane_ParamLimits

0x1215,	// (0x0007d35e) popup_call_status_window_g1_ParamLimits

0x7c30,	// (0x00083d79) popup_call_status_window_g2_ParamLimits

0x7c3c,	// (0x00083d85) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x0008b433) popup_call_status_window_g_ParamLimits

0xee19,	// (0x0008af62) aid_call2_pane

0x82cc,	// (0x00084415) msg_header_pane_g1

0x8426,	// (0x0008456f) postcard_address2_pane_ParamLimits

0x8426,	// (0x0008456f) postcard_address2_pane

0x8434,	// (0x0008457d) postcard_message2_pane_ParamLimits

0x8434,	// (0x0008457d) postcard_message2_pane

0x8cf7,	// (0x00084e40) message2_row_pane_ParamLimits

0x8cf7,	// (0x00084e40) message2_row_pane

0x1ba1,	// (0x0007dcea) address2_row_pane_ParamLimits

0x1ba1,	// (0x0007dcea) address2_row_pane

0x1bb4,	// (0x0007dcfd) postcard_message2_row_pane_g1

0x1bbc,	// (0x0007dd05) postcard_message2_row_pane_t1

0x1bb4,	// (0x0007dcfd) address2_row_pane_g1

0x1bbc,	// (0x0007dd05) address2_row_pane_t1

0x681e,	// (0x00082967) aid_size_cell_vorec

0xe24c,	// (0x0008a395) main_rss_pane

0x1bca,	// (0x0007dd13) rss_list_single_pane_ParamLimits

0x1bca,	// (0x0007dd13) rss_list_single_pane

0x1bd8,	// (0x0007dd21) rss_list_single_pane_t1

0x1bd8,	// (0x0007dd21) rss_list_single_pane_t2

0x0001,

0xf59a,	// (0x0008b6e3) rss_list_single_pane_t

0xe24c,	// (0x0008a395) main_camera2_pane

0xe24c,	// (0x0008a395) main_video2_pane

0x5d65,	// (0x00081eae) cams_zoom_pane_cp2_ParamLimits

0x5d65,	// (0x00081eae) cams_zoom_pane_cp2

0x5d65,	// (0x00081eae) image2_vga_pane_ParamLimits

0x5d65,	// (0x00081eae) image2_vga_pane

0xee4d,	// (0x0008af96) main_camera2_pane_g1_ParamLimits

0xee4d,	// (0x0008af96) main_camera2_pane_g1

0xee4d,	// (0x0008af96) main_camera2_pane_g2_ParamLimits

0xee4d,	// (0x0008af96) main_camera2_pane_g2

0xee4d,	// (0x0008af96) main_camera2_pane_g3_ParamLimits

0xee4d,	// (0x0008af96) main_camera2_pane_g3

0xee4d,	// (0x0008af96) main_camera2_pane_g4_ParamLimits

0xee4d,	// (0x0008af96) main_camera2_pane_g4

0xee4d,	// (0x0008af96) main_camera2_pane_g5_ParamLimits

0xee4d,	// (0x0008af96) main_camera2_pane_g5

0xee4d,	// (0x0008af96) main_camera2_pane_g6_ParamLimits

0xee4d,	// (0x0008af96) main_camera2_pane_g6

0xee4d,	// (0x0008af96) main_camera2_pane_g7_ParamLimits

0xee4d,	// (0x0008af96) main_camera2_pane_g7

0xee4d,	// (0x0008af96) main_camera2_pane_g8_ParamLimits

0xee4d,	// (0x0008af96) main_camera2_pane_g8

0x0008,

0xf5b6,	// (0x0008b6ff) main_camera2_pane_g_ParamLimits

0xf5b6,	// (0x0008b6ff) main_camera2_pane_g

0x8e72,	// (0x00084fbb) main_camera2_pane_t1_ParamLimits

0x8e72,	// (0x00084fbb) main_camera2_pane_t1

0x8e72,	// (0x00084fbb) main_camera2_pane_t2_ParamLimits

0x8e72,	// (0x00084fbb) main_camera2_pane_t2

0x8e72,	// (0x00084fbb) main_camera2_pane_t3_ParamLimits

0x8e72,	// (0x00084fbb) main_camera2_pane_t3

0x8e72,	// (0x00084fbb) main_camera2_pane_t4_ParamLimits

0x8e72,	// (0x00084fbb) main_camera2_pane_t4

0x0006,

0xf5c9,	// (0x0008b712) main_camera2_pane_t_ParamLimits

0xf5c9,	// (0x0008b712) main_camera2_pane_t

0x8e9a,	// (0x00084fe3) cams_zoom_pane_cp4_ParamLimits

0x8e9a,	// (0x00084fe3) cams_zoom_pane_cp4

0x8b0b,	// (0x00084c54) image2_cif_pane_ParamLimits

0x8b0b,	// (0x00084c54) image2_cif_pane

0x5d65,	// (0x00081eae) image2_subqcif_pane_ParamLimits

0x5d65,	// (0x00081eae) image2_subqcif_pane

0x8ea8,	// (0x00084ff1) main_video2_pane_g1_ParamLimits

0x8ea8,	// (0x00084ff1) main_video2_pane_g1

0x8ea8,	// (0x00084ff1) main_video2_pane_g2_ParamLimits

0x8ea8,	// (0x00084ff1) main_video2_pane_g2

0x8ea8,	// (0x00084ff1) main_video2_pane_g3_ParamLimits

0x8ea8,	// (0x00084ff1) main_video2_pane_g3

0x8ea8,	// (0x00084ff1) main_video2_pane_g4_ParamLimits

0x8ea8,	// (0x00084ff1) main_video2_pane_g4

0x8ea8,	// (0x00084ff1) main_video2_pane_g5_ParamLimits

0x8ea8,	// (0x00084ff1) main_video2_pane_g5

0x8ea8,	// (0x00084ff1) main_video2_pane_g6_ParamLimits

0x8ea8,	// (0x00084ff1) main_video2_pane_g6

0x0005,

0xf5d8,	// (0x0008b721) main_video2_pane_g_ParamLimits

0xf5d8,	// (0x0008b721) main_video2_pane_g

0x8eb6,	// (0x00084fff) main_video2_pane_t1_ParamLimits

0x8eb6,	// (0x00084fff) main_video2_pane_t1

0x8eb6,	// (0x00084fff) main_video2_pane_t2_ParamLimits

0x8eb6,	// (0x00084fff) main_video2_pane_t2

0x8eb6,	// (0x00084fff) main_video2_pane_t3_ParamLimits

0x8eb6,	// (0x00084fff) main_video2_pane_t3

0x0002,

0xf5e5,	// (0x0008b72e) main_video2_pane_t_ParamLimits

0xf5e5,	// (0x0008b72e) main_video2_pane_t

0x89cc,	// (0x00084b15) call_muted_g2

0x0001,

0xf58c,	// (0x0008b6d5) call_muted_g

0xe24c,	// (0x0008a395) main_mup2_pane

0xe54c,	// (0x0008a695) main_mup2_pane_g1_ParamLimits

0xe54c,	// (0x0008a695) main_mup2_pane_g1

0xe54c,	// (0x0008a695) main_mup2_pane_g2_ParamLimits

0xe54c,	// (0x0008a695) main_mup2_pane_g2

0x2c96,	// (0x0007eddf) main_mup_pane_g13_cp1

0x5d7f,	// (0x00081ec8) mup_volume_pane_cp1

0xe54c,	// (0x0008a695) main_mup2_pane_g4_ParamLimits

0xe54c,	// (0x0008a695) main_mup2_pane_g4

0xe54c,	// (0x0008a695) main_mup2_pane_g5_ParamLimits

0xe54c,	// (0x0008a695) main_mup2_pane_g5

0xe54c,	// (0x0008a695) main_mup2_pane_g6_ParamLimits

0xe54c,	// (0x0008a695) main_mup2_pane_g6

0xe54c,	// (0x0008a695) main_mup2_pane_g7_ParamLimits

0xe54c,	// (0x0008a695) main_mup2_pane_g7

0x0006,

0xf5ec,	// (0x0008b735) main_mup2_pane_g_ParamLimits

0xf5ec,	// (0x0008b735) main_mup2_pane_g

0xe55a,	// (0x0008a6a3) main_mup2_pane_t1_ParamLimits

0xe55a,	// (0x0008a6a3) main_mup2_pane_t1

0xe55a,	// (0x0008a6a3) main_mup2_pane_t2_ParamLimits

0xe55a,	// (0x0008a6a3) main_mup2_pane_t2

0xe55a,	// (0x0008a6a3) main_mup2_pane_t3_ParamLimits

0xe55a,	// (0x0008a6a3) main_mup2_pane_t3

0xe55a,	// (0x0008a6a3) main_mup2_pane_t4_ParamLimits

0xe55a,	// (0x0008a6a3) main_mup2_pane_t4

0xe55a,	// (0x0008a6a3) main_mup2_pane_t5_ParamLimits

0xe55a,	// (0x0008a6a3) main_mup2_pane_t5

0xe55a,	// (0x0008a6a3) main_mup2_pane_t6_ParamLimits

0xe55a,	// (0x0008a6a3) main_mup2_pane_t6

0x0005,

0xf5fb,	// (0x0008b744) main_mup2_pane_t_ParamLimits

0xf5fb,	// (0x0008b744) main_mup2_pane_t

0x1cac,	// (0x0007ddf5) mup2_visualizer_pane_ParamLimits

0x1cac,	// (0x0007ddf5) mup2_visualizer_pane

0x1cac,	// (0x0007ddf5) mup_progress_pane_cp_ParamLimits

0x1cac,	// (0x0007ddf5) mup_progress_pane_cp

0x8f85,	// (0x000850ce) mup_volume_pane_cp_ParamLimits

0x8f85,	// (0x000850ce) mup_volume_pane_cp

0xe530,	// (0x0008a679) mup2_visualizer_pane_g1_ParamLimits

0xe530,	// (0x0008a679) mup2_visualizer_pane_g1

0xe53e,	// (0x0008a687) mup2_visualizer_pane_g2_ParamLimits

0xe53e,	// (0x0008a687) mup2_visualizer_pane_g2

0xe53e,	// (0x0008a687) mup2_visualizer_pane_g3_ParamLimits

0xe53e,	// (0x0008a687) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0008b22d) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0008b22d) mup2_visualizer_pane_g

0x0ad6,	// (0x0007cc1f) aid_size_cell_fmradio

0x8ae2,	// (0x00084c2b) aid_height_parent_landcape

0xe8c2,	// (0x0008aa0b) wml_content_pane_cp

0xe8ca,	// (0x0008aa13) wml_tabs_pane

0xe8d3,	// (0x0008aa1c) popup_wml_miniature_window

0xe8db,	// (0x0008aa24) scroll_pane_cp021

0xe8ef,	// (0x0008aa38) wml_content_pane_comp8

0xe24c,	// (0x0008a395) bg_popup_sub_pane_cp05

0x1cd0,	// (0x0007de19) popup_wml_miniature_window_g1

0x1cd8,	// (0x0007de21) wml_miniature_view_pane

0x8eca,	// (0x00085013) aid_size_wml_view

0x8ed2,	// (0x0008501b) wml_miniature_view_pane_g1

0x8edb,	// (0x00085024) wml_miniature_view_pane_g2

0x8ee4,	// (0x0008502d) wml_miniature_view_pane_g3

0x8eec,	// (0x00085035) wml_miniature_view_pane_g4

0x8ef4,	// (0x0008503d) wml_miniature_view_pane_g5

0x8efc,	// (0x00085045) wml_miniature_view_pane_g6

0x8f04,	// (0x0008504d) wml_miniature_view_pane_g7

0x8f0c,	// (0x00085055) wml_miniature_view_pane_g8

0x0007,

0xf608,	// (0x0008b751) wml_miniature_view_pane_g

0x1ce0,	// (0x0007de29) background_graphic_ParamLimits

0x1ce0,	// (0x0007de29) background_graphic

0x1cec,	// (0x0007de35) wml_tabs_2_pane

0x1cf5,	// (0x0007de3e) wml_tabs_3_pane_ParamLimits

0x1cf5,	// (0x0007de3e) wml_tabs_3_pane

0x1d07,	// (0x0007de50) wml_tabs_4_pane_ParamLimits

0x1d07,	// (0x0007de50) wml_tabs_4_pane

0x1d1d,	// (0x0007de66) wml_tabs_5_pane_ParamLimits

0x1d1d,	// (0x0007de66) wml_tabs_5_pane

0x1d37,	// (0x0007de80) wml_tabs_pane_g2_ParamLimits

0x1d37,	// (0x0007de80) wml_tabs_pane_g2

0x1d4c,	// (0x0007de95) wml_tabs_pane_g3_ParamLimits

0x1d4c,	// (0x0007de95) wml_tabs_pane_g3

0x1d61,	// (0x0007deaa) wml_tabs_2_active_pane_ParamLimits

0x1d61,	// (0x0007deaa) wml_tabs_2_active_pane

0x1d61,	// (0x0007deaa) wml_tabs_2_passive_pane_ParamLimits

0x1d61,	// (0x0007deaa) wml_tabs_2_passive_pane

0x8f14,	// (0x0008505d) wml_tabs_3_active_pane_cp_ParamLimits

0x8f14,	// (0x0008505d) wml_tabs_3_active_pane_cp

0x8f27,	// (0x00085070) wml_tabs_3_passive_pane_ParamLimits

0x8f27,	// (0x00085070) wml_tabs_3_passive_pane

0x8f38,	// (0x00085081) wml_tabs_3_passive_pane_cp_ParamLimits

0x8f38,	// (0x00085081) wml_tabs_3_passive_pane_cp

0x8f4d,	// (0x00085096) tabs_4_active_pane

0x8f55,	// (0x0008509e) tabs_4_passive_pane

0x8f5d,	// (0x000850a6) tabs_4_passive_pane_cp

0x8f65,	// (0x000850ae) tabs_4_passive_pane_cp2

0x88c8,	// (0x00084a11) aid_height_text

0x1cac,	// (0x0007ddf5) mup_volume_cont_pane_ParamLimits

0x1cac,	// (0x0007ddf5) mup_volume_cont_pane

0xddfa,	// (0x00089f43) aid_size_cell_pinb

0xddfa,	// (0x00089f43) aid_size_list_pinb

0x1cac,	// (0x0007ddf5) mup2_volume_cont_pane_ParamLimits

0x1cac,	// (0x0007ddf5) mup2_volume_cont_pane

0x8f6f,	// (0x000850b8) mup2_volume_cont_pane_g1_ParamLimits

0x8f6f,	// (0x000850b8) mup2_volume_cont_pane_g1

0x5aca,	// (0x00081c13) aid_size_cell_touch_ParamLimits

0x5aca,	// (0x00081c13) aid_size_cell_touch

0x5d89,	// (0x00081ed2) touch_pane_ParamLimits

0x5d89,	// (0x00081ed2) touch_pane

0x5d7f,	// (0x00081ec8) main_rss2_pane

0x1d8e,	// (0x0007ded7) listscroll_rss2_pane

0x1d97,	// (0x0007dee0) rss2_navigation_pane

0x1d9f,	// (0x0007dee8) list_rss2_pane

0xef31,	// (0x0008b07a) scroll_pane_cp22

0x1da7,	// (0x0007def0) rss2_navigation_pane_g1

0x1db0,	// (0x0007def9) rss2_navigation_pane_g2

0x1db8,	// (0x0007df01) rss2_navigation_pane_g3

0x0002,

0xf619,	// (0x0008b762) rss2_navigation_pane_g

0x1dc0,	// (0x0007df09) rss2_navigation_pane_t1

0x8f9b,	// (0x000850e4) rss2_list_single_pane_ParamLimits

0x8f9b,	// (0x000850e4) rss2_list_single_pane

0x1dce,	// (0x0007df17) rss2_list_single_pane_t2

0x1ddc,	// (0x0007df25) rss2_list_single_pane_t3_ParamLimits

0x1ddc,	// (0x0007df25) rss2_list_single_pane_t3

0x1df9,	// (0x0007df42) rss2_list_single_pane_t4

0x7acc,	// (0x00083c15) smil_status_pane_g1

0x8b0b,	// (0x00084c54) main_image2_pane_ParamLimits

0x8b0b,	// (0x00084c54) main_image2_pane

0xee4d,	// (0x0008af96) main_camera2_pane_g9_ParamLimits

0xee4d,	// (0x0008af96) main_camera2_pane_g9

0x8e72,	// (0x00084fbb) main_camera2_pane_t5_ParamLimits

0x8e72,	// (0x00084fbb) main_camera2_pane_t5

0x8e86,	// (0x00084fcf) main_camera2_pane_t6_ParamLimits

0x8e86,	// (0x00084fcf) main_camera2_pane_t6

0x8fbe,	// (0x00085107) main_image2_pane_g1_ParamLimits

0x8fbe,	// (0x00085107) main_image2_pane_g1

0x85fd,	// (0x00084746) smil2_video_pane_ParamLimits

0x85fd,	// (0x00084746) smil2_video_pane

0x59ce,	// (0x00081b17) aid_zoom_text_primary_cp

0x5d1a,	// (0x00081e63) popup_preview_fixed_window

0xe82b,	// (0x0008a974) im_reading_pane_g1

0x8e64,	// (0x00084fad) cams2_bc_adjust_pane_cp_ParamLimits

0x8e64,	// (0x00084fad) cams2_bc_adjust_pane_cp

0x5d65,	// (0x00081eae) cams2_bc_adjust_pane_ParamLimits

0x5d65,	// (0x00081eae) cams2_bc_adjust_pane

0x2c96,	// (0x0007eddf) cams2_bc_adjust_pane_g1

0x5d7f,	// (0x00081ec8) cams2_slider_pane

0x2c96,	// (0x0007eddf) cams2_slider_pane_g1

0x2c96,	// (0x0007eddf) cams2_slider_pane_g2

0x0006,

0xf620,	// (0x0008b769) cams2_slider_pane_g

0x5e1e,	// (0x00081f67) calc_display_pane_ParamLimits

0x5e3c,	// (0x00081f85) calc_paper_pane_ParamLimits

0x5e58,	// (0x00081fa1) grid_calc_pane_ParamLimits

0x7c9a,	// (0x00083de3) popup_clock_digital_window_t1_ParamLimits

0x0a73,	// (0x0007cbbc) main_image_pane_t1

0x5e04,	// (0x00081f4d) aid_size_cell_calc_ParamLimits

0x5e04,	// (0x00081f4d) aid_size_cell_calc

0x8b48,	// (0x00084c91) popup_blid_sat_info2_window_ParamLimits

0x8b48,	// (0x00084c91) popup_blid_sat_info2_window

0x1e07,	// (0x0007df50) aid_size_cell_blid

0x1cac,	// (0x0007ddf5) bg_popup_window_pane_cp07

0x1e24,	// (0x0007df6d) grid_popup_blid_pane

0x1e2e,	// (0x0007df77) heading_pane_cp05_ParamLimits

0x1e2e,	// (0x0007df77) heading_pane_cp05

0x1ef8,	// (0x0007e041) cell_popup_blid_pane_ParamLimits

0x1ef8,	// (0x0007e041) cell_popup_blid_pane

0x1f22,	// (0x0007e06b) cell_popup_blid_pane_g1

0x1f2a,	// (0x0007e073) cell_popup_blid_pane_t1

0x1cac,	// (0x0007ddf5) mup2_indicator_pane_ParamLimits

0x1cac,	// (0x0007ddf5) mup2_indicator_pane

0xddfa,	// (0x00089f43) mup2_visualizer_osc_pane

0x1cba,	// (0x0007de03) mup2_visualizer_spec_pane_ParamLimits

0x1cba,	// (0x0007de03) mup2_visualizer_spec_pane

0xddfa,	// (0x00089f43) mup2_spec_half_pane

0xddfa,	// (0x00089f43) mup2_spec_half_pane_cp

0x1f38,	// (0x0007e081) mup2_spec_bar_pane_ParamLimits

0x1f38,	// (0x0007e081) mup2_spec_bar_pane

0xe762,	// (0x0008a8ab) mup2_spec_bar_pane_g1

0x1f57,	// (0x0007e0a0) mup2_spec_bar_pane_g2

0x0001,

0xf646,	// (0x0008b78f) mup2_spec_bar_pane_g

0xddfa,	// (0x00089f43) mup2_osc_middle_pane

0xe762,	// (0x0008a8ab) mup2_visualizer_osc_pane_g1

0xde24,	// (0x00089f6d) popup_number_entry_window_t1_ParamLimits

0xde37,	// (0x00089f80) popup_number_entry_window_t2_ParamLimits

0xde49,	// (0x00089f92) popup_number_entry_window_t3_ParamLimits

0xde5b,	// (0x00089fa4) popup_number_entry_window_t5_ParamLimits

0xde5b,	// (0x00089fa4) popup_number_entry_window_t5

0xf085,	// (0x0008b1ce) popup_number_entry_window_t_ParamLimits

0xde90,	// (0x00089fd9) text_title_cp2_ParamLimits

0x82ea,	// (0x00084433) aid_hotspot_pointer_text2_pane

0x8384,	// (0x000844cd) main_viewer_pane_g9_ParamLimits

0x8384,	// (0x000844cd) main_viewer_pane_g9

0xea64,	// (0x0008abad) cale_month_pane_t1_ParamLimits

0xeaa1,	// (0x0008abea) bg_cale_pane_ParamLimits

0xeab9,	// (0x0008ac02) list_cale_pane_ParamLimits

0xeaca,	// (0x0008ac13) listscroll_cale_day_pane_t1

0xeadc,	// (0x0008ac25) scroll_pane_cp09_ParamLimits

0x8035,	// (0x0008417e) main_mup_eq_pane_t1_ParamLimits

0x8035,	// (0x0008417e) main_mup_eq_pane_t1

0x8051,	// (0x0008419a) main_mup_eq_pane_t2_ParamLimits

0x8051,	// (0x0008419a) main_mup_eq_pane_t2

0x806d,	// (0x000841b6) main_mup_eq_pane_t3_ParamLimits

0x806d,	// (0x000841b6) main_mup_eq_pane_t3

0x8087,	// (0x000841d0) main_mup_eq_pane_t4_ParamLimits

0x8087,	// (0x000841d0) main_mup_eq_pane_t4

0x80a1,	// (0x000841ea) main_mup_eq_pane_t5_ParamLimits

0x80a1,	// (0x000841ea) main_mup_eq_pane_t5

0x80bb,	// (0x00084204) main_mup_eq_pane_t6_ParamLimits

0x80bb,	// (0x00084204) main_mup_eq_pane_t6

0x80d1,	// (0x0008421a) main_mup_eq_pane_t7_ParamLimits

0x80d1,	// (0x0008421a) main_mup_eq_pane_t7

0x80e7,	// (0x00084230) main_mup_eq_pane_t8_ParamLimits

0x80e7,	// (0x00084230) main_mup_eq_pane_t8

0x80fd,	// (0x00084246) main_mup_eq_pane_t9_ParamLimits

0x80fd,	// (0x00084246) main_mup_eq_pane_t9

0x8119,	// (0x00084262) main_mup_eq_pane_t10_ParamLimits

0x8119,	// (0x00084262) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x0008b532) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x0008b532) main_mup_eq_pane_t

0x81de,	// (0x00084327) mup_equalizer_pane_cp5_ParamLimits

0x81f6,	// (0x0008433f) mup_equalizer_pane_cp6_ParamLimits

0x820e,	// (0x00084357) mup_equalizer_pane_cp7_ParamLimits

0x5d7f,	// (0x00081ec8) main_gallery_pane

0x1c06,	// (0x0007dd4f) smil2_volume_pane

0x1c21,	// (0x0007dd6a) smil_status_volume_pane_g1_ParamLimits

0x1c0e,	// (0x0007dd57) smil_status_volume_pane_g2_ParamLimits

0x8d11,	// (0x00084e5a) smil_status_volume_pane_g3_ParamLimits

0xf59f,	// (0x0008b6e8) smil_status_volume_pane_g_ParamLimits

0x1cac,	// (0x0007ddf5) bg_popup_window_pane_cp07_ParamLimits

0x1e0f,	// (0x0007df58) blid_firmament_pane

0xe522,	// (0x0008a66b) aid_size_cell_gallery_ParamLimits

0xe522,	// (0x0008a66b) aid_size_cell_gallery

0xe522,	// (0x0008a66b) grid_gallery_pane_ParamLimits

0xe522,	// (0x0008a66b) grid_gallery_pane

0x07e8,	// (0x0007c931) cell_gallery_pane_ParamLimits

0x07e8,	// (0x0007c931) cell_gallery_pane

0xe4c9,	// (0x0008a612) bg_cell_gallery_focus_pane_ParamLimits

0xe4c9,	// (0x0008a612) bg_cell_gallery_focus_pane

0xe530,	// (0x0008a679) cell_gallery_pane_g1_ParamLimits

0xe530,	// (0x0008a679) cell_gallery_pane_g1

0xe530,	// (0x0008a679) cell_gallery_pane_g2_ParamLimits

0xe530,	// (0x0008a679) cell_gallery_pane_g2

0xe530,	// (0x0008a679) cell_gallery_pane_g3_ParamLimits

0xe530,	// (0x0008a679) cell_gallery_pane_g3

0xe53e,	// (0x0008a687) cell_gallery_pane_g4_ParamLimits

0xe53e,	// (0x0008a687) cell_gallery_pane_g4

0x0003,

0xf64b,	// (0x0008b794) cell_gallery_pane_g_ParamLimits

0xf64b,	// (0x0008b794) cell_gallery_pane_g

0x1f61,	// (0x0007e0aa) bg_cell_gallery_focus_pane_g1

0x1f69,	// (0x0007e0b2) bg_cell_gallery_focus_pane_g2

0x1f71,	// (0x0007e0ba) bg_cell_gallery_focus_pane_g3

0x1f79,	// (0x0007e0c2) bg_cell_gallery_focus_pane_g4

0x1f81,	// (0x0007e0ca) bg_cell_gallery_focus_pane_g5

0x1f89,	// (0x0007e0d2) bg_cell_gallery_focus_pane_g6

0x1f91,	// (0x0007e0da) bg_cell_gallery_focus_pane_g7

0x1f99,	// (0x0007e0e2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf654,	// (0x0008b79d) bg_cell_gallery_focus_pane_g

0x1fa1,	// (0x0007e0ea) aid_firma_cardinal

0x1fb5,	// (0x0007e0fe) blid_firmament_pane_t1

0x1fcc,	// (0x0007e115) blid_firmament_pane_t2

0x1fe3,	// (0x0007e12c) blid_firmament_pane_t3

0x1ffa,	// (0x0007e143) blid_firmament_pane_t4

0x0003,

0xf665,	// (0x0008b7ae) blid_firmament_pane_t

0x2011,	// (0x0007e15a) blid_sat_info_pane

0xe762,	// (0x0008a8ab) blid_sat_info_pane_g1

0xe762,	// (0x0008a8ab) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x0008b526) blid_sat_info_pane_g

0x2021,	// (0x0007e16a) blid_sat_info_pane_t1

0x202f,	// (0x0007e178) smil2_volume_content_pane

0x2038,	// (0x0007e181) smil2_volume_pane_g1

0xf070,	// (0x0008b1b9) smil2_volume_content_pane_g1

0x2040,	// (0x0007e189) smil2_volume_content_pane_g2

0x2049,	// (0x0007e192) smil2_volume_content_pane_g3

0x2052,	// (0x0007e19b) smil2_volume_content_pane_g4

0x205b,	// (0x0007e1a4) smil2_volume_content_pane_g5

0x2064,	// (0x0007e1ad) smil2_volume_content_pane_g6

0x206d,	// (0x0007e1b6) smil2_volume_content_pane_g7

0x2076,	// (0x0007e1bf) smil2_volume_content_pane_g8

0x207f,	// (0x0007e1c8) smil2_volume_content_pane_g9

0x2088,	// (0x0007e1d1) smil2_volume_content_pane_g10

0x0009,

0xf66e,	// (0x0008b7b7) smil2_volume_content_pane_g

0x6551,	// (0x0008269a) cale_week_day_heading_pane_t1_ParamLimits

0x6579,	// (0x000826c2) cale_week_day_heading_pane_t2_ParamLimits

0x65a6,	// (0x000826ef) cale_week_day_heading_pane_t3_ParamLimits

0x65d3,	// (0x0008271c) cale_week_day_heading_pane_t4_ParamLimits

0x6600,	// (0x00082749) cale_week_day_heading_pane_t5_ParamLimits

0x662d,	// (0x00082776) cale_week_day_heading_pane_t6_ParamLimits

0x665a,	// (0x000827a3) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0008b2d5) cale_week_day_heading_pane_t_ParamLimits

0xe6e5,	// (0x0008a82e) bg_cale_side_pane_ParamLimits

0x6682,	// (0x000827cb) cale_week_time_pane_t1_ParamLimits

0x66a6,	// (0x000827ef) cale_week_time_pane_t2_ParamLimits

0x66ca,	// (0x00082813) cale_week_time_pane_t3_ParamLimits

0x66ee,	// (0x00082837) cale_week_time_pane_t4_ParamLimits

0x6712,	// (0x0008285b) cale_week_time_pane_t5_ParamLimits

0x6738,	// (0x00082881) cale_week_time_pane_t6_ParamLimits

0x6760,	// (0x000828a9) cale_week_time_pane_t7_ParamLimits

0x678c,	// (0x000828d5) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0008b2e4) cale_week_time_pane_t_ParamLimits

0x67bc,	// (0x00082905) cell_cale_week_pane_g2_ParamLimits

0xe6e5,	// (0x0008a82e) bg_cale_side_pane_cp01_ParamLimits

0x78b7,	// (0x00083a00) cale_month_week_pane_t1_ParamLimits

0x78d0,	// (0x00083a19) cale_month_week_pane_t2_ParamLimits

0x78e9,	// (0x00083a32) cale_month_week_pane_t3_ParamLimits

0x7902,	// (0x00083a4b) cale_month_week_pane_t4_ParamLimits

0x791b,	// (0x00083a64) cale_month_week_pane_t5_ParamLimits

0x7938,	// (0x00083a81) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0008b3b2) cale_month_week_pane_t_ParamLimits

0x7a89,	// (0x00083bd2) cell_cale_month_pane_g1_ParamLimits

0x5d7f,	// (0x00081ec8) main_cale_event_viewer_pane

0xddfa,	// (0x00089f43) listscroll_cale_event_viewer_pane

0x2091,	// (0x0007e1da) list_cale_ev_pane

0x2099,	// (0x0007e1e2) scroll_pane_cp023

0x8fca,	// (0x00085113) field_cale_ev_pane_ParamLimits

0x8fca,	// (0x00085113) field_cale_ev_pane

0x20a5,	// (0x0007e1ee) field_cale_ev_content_pane_ParamLimits

0x20a5,	// (0x0007e1ee) field_cale_ev_content_pane

0x20b1,	// (0x0007e1fa) field_cale_ev_pane_g1_ParamLimits

0x20b1,	// (0x0007e1fa) field_cale_ev_pane_g1

0x20bd,	// (0x0007e206) field_cale_ev_pane_g2_ParamLimits

0x20bd,	// (0x0007e206) field_cale_ev_pane_g2

0x20d5,	// (0x0007e21e) field_cale_ev_pane_g3_ParamLimits

0x20d5,	// (0x0007e21e) field_cale_ev_pane_g3

0x0002,

0xf683,	// (0x0008b7cc) field_cale_ev_pane_g_ParamLimits

0xf683,	// (0x0008b7cc) field_cale_ev_pane_g

0x20ed,	// (0x0007e236) field_cale_ev_pane_t1_ParamLimits

0x20ed,	// (0x0007e236) field_cale_ev_pane_t1

0x8fee,	// (0x00085137) field_cale_ev_content_pane_t1_ParamLimits

0x8fee,	// (0x00085137) field_cale_ev_content_pane_t1

0x0895,	// (0x0007c9de) bg_button_pane_cp01

0x61af,	// (0x000822f8) listscroll_cale_week_pane_ParamLimits

0xe6ad,	// (0x0008a7f6) popup_toolbar_window_cp01

0xe6b6,	// (0x0008a7ff) listscroll_cale_week_pane_t1_ParamLimits

0x61af,	// (0x000822f8) listscroll_cale_day_pane_ParamLimits

0xe6ad,	// (0x0008a7f6) popup_toolbar_window_cp02

0xeaca,	// (0x0008ac13) listscroll_cale_day_pane_t1_ParamLimits

0x8af9,	// (0x00084c42) main_cale_month_pane_ParamLimits

0x8c67,	// (0x00084db0) popup_toolbar_window_cp03_ParamLimits

0x8c67,	// (0x00084db0) popup_toolbar_window_cp03

0x850d,	// (0x00084656) main_image_pane_g2_ParamLimits

0x850d,	// (0x00084656) main_image_pane_g2

0x8519,	// (0x00084662) main_image_pane_g3_ParamLimits

0x8519,	// (0x00084662) main_image_pane_g3

0x0002,

0xf47b,	// (0x0008b5c4) main_image_pane_g_ParamLimits

0xf47b,	// (0x0008b5c4) main_image_pane_g

0x0a73,	// (0x0007cbbc) main_image_pane_t1_ParamLimits

0x8525,	// (0x0008466e) main_image_pane_t2_ParamLimits

0x8525,	// (0x0008466e) main_image_pane_t2

0x8537,	// (0x00084680) main_image_pane_t3_ParamLimits

0x8537,	// (0x00084680) main_image_pane_t3

0x8549,	// (0x00084692) main_image_pane_t4_ParamLimits

0x8549,	// (0x00084692) main_image_pane_t4

0x0003,

0xf482,	// (0x0008b5cb) main_image_pane_t_ParamLimits

0xf482,	// (0x0008b5cb) main_image_pane_t

0x855b,	// (0x000846a4) popup_image_details_window_cp01

0x8565,	// (0x000846ae) popup_toobar_trans_pane_cp01_ParamLimits

0x8565,	// (0x000846ae) popup_toobar_trans_pane_cp01

0x8ba9,	// (0x00084cf2) popup_image_details_window_ParamLimits

0x8ba9,	// (0x00084cf2) popup_image_details_window

0x8bb7,	// (0x00084d00) popup_image_focus_window

0x5d65,	// (0x00081eae) camera2_autofocus_pane_ParamLimits

0x5d65,	// (0x00081eae) camera2_autofocus_pane

0xddfa,	// (0x00089f43) bg_popup_sub_pane_cp06

0x2104,	// (0x0007e24d) popup_image_focus_window_g1

0x210c,	// (0x0007e255) popup_image_focus_window_g2

0x2114,	// (0x0007e25d) popup_image_focus_window_g3

0x211c,	// (0x0007e265) popup_image_focus_window_g4

0x0003,

0xf68a,	// (0x0008b7d3) popup_image_focus_window_g

0x2124,	// (0x0007e26d) popup_image_focus_window_t1

0x2132,	// (0x0007e27b) popup_image_focus_window_t2

0x2142,	// (0x0007e28b) popup_image_focus_window_t3

0x0002,

0xf693,	// (0x0008b7dc) popup_image_focus_window_t

0xe530,	// (0x0008a679) camera2_autofocus_pane_g1

0xe4c9,	// (0x0008a612) bg_tb_trans_pane_cp01

0x2150,	// (0x0007e299) popup_image_details_window_g1

0x2163,	// (0x0007e2ac) popup_image_details_window_g2

0x0002,

0xf6a5,	// (0x0008b7ee) popup_image_details_window_g

0x218c,	// (0x0007e2d5) popup_image_details_window_t1

0x219e,	// (0x0007e2e7) popup_image_details_window_t2

0x21b7,	// (0x0007e300) popup_image_details_window_t3

0x21cb,	// (0x0007e314) popup_image_details_window_t4

0x21e6,	// (0x0007e32f) popup_image_details_window_t5

0x0004,

0xf6ac,	// (0x0008b7f5) popup_image_details_window_t

0xe58e,	// (0x0008a6d7) bg_calc_paper_pane_ParamLimits

0x5d7f,	// (0x00081ec8) grid_highlight_pane_cp013

0x5f55,	// (0x0008209e) list_calc_pane_ParamLimits

0x5f67,	// (0x000820b0) scroll_pane_cp024

0xe5a2,	// (0x0008a6eb) bg_calc_display_pane_ParamLimits

0x5f6f,	// (0x000820b8) calc_display_pane_t1_ParamLimits

0x5f84,	// (0x000820cd) calc_display_pane_t2_ParamLimits

0x5f99,	// (0x000820e2) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0008b255) calc_display_pane_t_ParamLimits

0x6069,	// (0x000821b2) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0008b272) cell_calc_pane_g

0x6072,	// (0x000821bb) cell_calc_pane_t1

0xe5f7,	// (0x0008a740) grid_highlight_pane_cp02_ParamLimits

0xe60d,	// (0x0008a756) toolbar_button_pane_cp01_ParamLimits

0xe60d,	// (0x0008a756) toolbar_button_pane_cp01

0x0ab8,	// (0x0007cc01) temp_image_control_pane_ParamLimits

0x0ab8,	// (0x0007cc01) temp_image_control_pane

0x8b0b,	// (0x00084c54) main_mp3_pane

0x2200,	// (0x0007e349) temp_image_control_pane_g1_ParamLimits

0x2200,	// (0x0007e349) temp_image_control_pane_g1

0x220e,	// (0x0007e357) temp_image_control_pane_g2_ParamLimits

0x220e,	// (0x0007e357) temp_image_control_pane_g2

0x2220,	// (0x0007e369) temp_image_control_pane_g3_ParamLimits

0x2220,	// (0x0007e369) temp_image_control_pane_g3

0x9009,	// (0x00085152) temp_image_control_pane_g4_ParamLimits

0x9009,	// (0x00085152) temp_image_control_pane_g4

0x0003,

0xf6b7,	// (0x0008b800) temp_image_control_pane_g_ParamLimits

0xf6b7,	// (0x0008b800) temp_image_control_pane_g

0x2200,	// (0x0007e349) main_mp3_pane_g1

0x901a,	// (0x00085163) main_mp3_pane_g2

0x0007,

0xf6c0,	// (0x0008b809) main_mp3_pane_g

0x2255,	// (0x0007e39e) main_mp3_pane_t1

0xe53e,	// (0x0008a687) main_camera_pane_g8_ParamLimits

0xe53e,	// (0x0008a687) main_camera_pane_g8

0x6968,	// (0x00082ab1) main_video_pane_g7_ParamLimits

0x6968,	// (0x00082ab1) main_video_pane_g7

0x8e72,	// (0x00084fbb) main_camera2_pane_t7_ParamLimits

0x8e72,	// (0x00084fbb) main_camera2_pane_t7

0xe882,	// (0x0008a9cb) scroll_pane_cp025_ParamLimits

0xe882,	// (0x0008a9cb) scroll_pane_cp025

0xe896,	// (0x0008a9df) scroll_pane_cp026_ParamLimits

0xe896,	// (0x0008a9df) scroll_pane_cp026

0xe8a5,	// (0x0008a9ee) wml_content_pane_ParamLimits

0x5d7f,	// (0x00081ec8) main_touch_calib_pane

0x90be,	// (0x00085207) main_touch_calib_pane_g1

0x90ca,	// (0x00085213) main_touch_calib_pane_g2

0x90d6,	// (0x0008521f) main_touch_calib_pane_g3

0x90e2,	// (0x0008522b) main_touch_calib_pane_g4

0x0003,

0xf6de,	// (0x0008b827) main_touch_calib_pane_g

0x90ee,	// (0x00085237) main_touch_calib_pane_t1

0x9105,	// (0x0008524e) main_touch_calib_pane_t2

0x0004,

0xf6e7,	// (0x0008b830) main_touch_calib_pane_t

0xefc1,	// (0x0008b10a) mup_progress_pane_cp02

0xefe0,	// (0x0008b129) navi_pane_g1

0xf042,	// (0x0008b18b) navi_pane_mp_t3

0x8b0b,	// (0x00084c54) main_mp3_pane_ParamLimits

0x8ca8,	// (0x00084df1) navi_pane_ParamLimits

0x2200,	// (0x0007e349) main_mp3_pane_g1_ParamLimits

0x901a,	// (0x00085163) main_mp3_pane_g2_ParamLimits

0x9026,	// (0x0008516f) main_mp3_pane_g3_ParamLimits

0x9026,	// (0x0008516f) main_mp3_pane_g3

0x9032,	// (0x0008517b) main_mp3_pane_g4_ParamLimits

0x9032,	// (0x0008517b) main_mp3_pane_g4

0xe530,	// (0x0008a679) main_mp3_pane_g5_ParamLimits

0xe530,	// (0x0008a679) main_mp3_pane_g5

0x2230,	// (0x0007e379) main_mp3_pane_g6_ParamLimits

0x2230,	// (0x0007e379) main_mp3_pane_g6

0x223d,	// (0x0007e386) main_mp3_pane_g7_ParamLimits

0x223d,	// (0x0007e386) main_mp3_pane_g7

0x2249,	// (0x0007e392) main_mp3_pane_g8_ParamLimits

0x2249,	// (0x0007e392) main_mp3_pane_g8

0xf6c0,	// (0x0008b809) main_mp3_pane_g_ParamLimits

0x903e,	// (0x00085187) main_mp3_pane_t2

0x904e,	// (0x00085197) main_mp3_pane_t3

0x2263,	// (0x0007e3ac) main_mp3_pane_t4

0x2271,	// (0x0007e3ba) main_mp3_pane_t5

0x0005,

0xf6d1,	// (0x0008b81a) main_mp3_pane_t

0x227f,	// (0x0007e3c8) mup_progress_pane_cp01

0x59ce,	// (0x00081b17) aid_zoom_text_secondary2

0x2091,	// (0x0007e1da) list_cale_ev2_pane

0x2099,	// (0x0007e1e2) scroll_pane_cp023_ParamLimits

0x9160,	// (0x000852a9) field_cale_ev2_pane_ParamLimits

0x9160,	// (0x000852a9) field_cale_ev2_pane

0x917b,	// (0x000852c4) field_cale_ev2_pane_g1_ParamLimits

0x917b,	// (0x000852c4) field_cale_ev2_pane_g1

0x9187,	// (0x000852d0) field_cale_ev2_pane_g2_ParamLimits

0x9187,	// (0x000852d0) field_cale_ev2_pane_g2

0x919f,	// (0x000852e8) field_cale_ev2_pane_g3_ParamLimits

0x919f,	// (0x000852e8) field_cale_ev2_pane_g3

0x0003,

0xf6f2,	// (0x0008b83b) field_cale_ev2_pane_g_ParamLimits

0xf6f2,	// (0x0008b83b) field_cale_ev2_pane_g

0x91b7,	// (0x00085300) field_cale_ev2_pane_t1_ParamLimits

0x91b7,	// (0x00085300) field_cale_ev2_pane_t1

0x91ce,	// (0x00085317) field_cale_ev2_pane_t2_ParamLimits

0x91ce,	// (0x00085317) field_cale_ev2_pane_t2

0x0001,

0xf6fb,	// (0x0008b844) field_cale_ev2_pane_t_ParamLimits

0xf6fb,	// (0x0008b844) field_cale_ev2_pane_t

0x83ec,	// (0x00084535) main_postcard_pane_g5_ParamLimits

0x83ec,	// (0x00084535) main_postcard_pane_g5

0x83fa,	// (0x00084543) main_postcard_pane_g6_ParamLimits

0x83fa,	// (0x00084543) main_postcard_pane_g6

0xe522,	// (0x0008a66b) camera2_autofocus_pane_cp_ParamLimits

0xe522,	// (0x0008a66b) camera2_autofocus_pane_cp

0x8b0b,	// (0x00084c54) main_mup3_pane

0x9226,	// (0x0008536f) main_mup3_pane_g1_ParamLimits

0x9226,	// (0x0008536f) main_mup3_pane_g1

0x9247,	// (0x00085390) main_mup3_pane_g2_ParamLimits

0x9247,	// (0x00085390) main_mup3_pane_g2

0x92bb,	// (0x00085404) main_mup3_pane_g3_ParamLimits

0x92bb,	// (0x00085404) main_mup3_pane_g3

0x9320,	// (0x00085469) main_mup3_pane_g4_ParamLimits

0x9320,	// (0x00085469) main_mup3_pane_g4

0x9385,	// (0x000854ce) main_mup3_pane_g5_ParamLimits

0x9385,	// (0x000854ce) main_mup3_pane_g5

0x93ea,	// (0x00085533) main_mup3_pane_g6_ParamLimits

0x93ea,	// (0x00085533) main_mup3_pane_g6

0xe53e,	// (0x0008a687) main_mup3_pane_g7_ParamLimits

0xe53e,	// (0x0008a687) main_mup3_pane_g7

0x0007,

0xf70b,	// (0x0008b854) main_mup3_pane_g_ParamLimits

0xf70b,	// (0x0008b854) main_mup3_pane_g

0x9464,	// (0x000855ad) main_mup3_pane_t1_ParamLimits

0x9464,	// (0x000855ad) main_mup3_pane_t1

0x94cf,	// (0x00085618) main_mup3_pane_t2_ParamLimits

0x94cf,	// (0x00085618) main_mup3_pane_t2

0x9598,	// (0x000856e1) main_mup3_pane_t4_ParamLimits

0x9598,	// (0x000856e1) main_mup3_pane_t4

0x95ec,	// (0x00085735) main_mup3_pane_t5_ParamLimits

0x95ec,	// (0x00085735) main_mup3_pane_t5

0x96a4,	// (0x000857ed) main_mup3_pane_t6_ParamLimits

0x96a4,	// (0x000857ed) main_mup3_pane_t6

0x0005,

0xf71c,	// (0x0008b865) main_mup3_pane_t_ParamLimits

0xf71c,	// (0x0008b865) main_mup3_pane_t

0x974e,	// (0x00085897) mup3_progress_pane_ParamLimits

0x974e,	// (0x00085897) mup3_progress_pane

0x97cc,	// (0x00085915) popup_mup3_control_window_ParamLimits

0x97cc,	// (0x00085915) popup_mup3_control_window

0x2293,	// (0x0007e3dc) popup_mup3_text_window

0x97e9,	// (0x00085932) mup3_progress_pane_t1

0x9807,	// (0x00085950) mup3_progress_pane_t2

0x229b,	// (0x0007e3e4) mup3_progress_pane_t3

0x0002,

0xf729,	// (0x0008b872) mup3_progress_pane_t

0x22b8,	// (0x0007e401) mup_progress_pane_cp03

0xddfa,	// (0x00089f43) bg_tb_trans_pane_cp04

0x9825,	// (0x0008596e) mup3_volume_pane

0x982d,	// (0x00085976) popup_mup3_control_window_g1

0x2c1f,	// (0x0007ed68) mup3_volume_pane_g1

0x2c28,	// (0x0007ed71) mup3_volume_pane_g2

0x2c31,	// (0x0007ed7a) mup3_volume_pane_g3

0x0002,

0xf730,	// (0x0008b879) mup3_volume_pane_g

0xddfa,	// (0x00089f43) bg_tb_trans_pane_cp03

0x22c8,	// (0x0007e411) popup_mup3_text_window_g1

0x22d0,	// (0x0007e419) popup_mup3_text_window_t1

0xe5ea,	// (0x0008a733) list_calc_item_pane_g1_ParamLimits

0x1d85,	// (0x0007dece) mup_volume_pane_cp_g1

0x911e,	// (0x00085267) main_touch_calib_pane_t3

0x9134,	// (0x0008527d) main_touch_calib_pane_t4

0x914a,	// (0x00085293) main_touch_calib_pane_t5

0x5ab6,	// (0x00081bff) aid_cell_size_toolbar2

0x5abe,	// (0x00081c07) aid_popup3_width_pane

0x59be,	// (0x00081b07) aid_zoom_text_msg_primary

0x6868,	// (0x000829b1) vorec_t7

0xe5ae,	// (0x0008a6f7) bg_calc_paper_pane_g1_ParamLimits

0xe5ba,	// (0x0008a703) bg_calc_paper_pane_g2_ParamLimits

0xe5c6,	// (0x0008a70f) bg_calc_paper_pane_g3_ParamLimits

0xe5d2,	// (0x0008a71b) bg_calc_paper_pane_g4_ParamLimits

0xe5de,	// (0x0008a727) bg_calc_paper_pane_g5_ParamLimits

0x5fda,	// (0x00082123) bg_calc_paper_pane_g6_ParamLimits

0x5feb,	// (0x00082134) bg_calc_paper_pane_g7_ParamLimits

0x5ffc,	// (0x00082145) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0008b25c) bg_calc_paper_pane_g_ParamLimits

0x600d,	// (0x00082156) calc_bg_paper_pane_g9_ParamLimits

0xe522,	// (0x0008a66b) image_qvga_pane_ParamLimits

0xe522,	// (0x0008a66b) image_qvga_pane

0xe4a7,	// (0x0008a5f0) bg_popup_sub_pane_cp04_ParamLimits

0x09ef,	// (0x0007cb38) popup_mup_playback_window_g1_ParamLimits

0x09fb,	// (0x0007cb44) popup_mup_playback_window_t1_ParamLimits

0x0a10,	// (0x0007cb59) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x0008b5bf) popup_mup_playback_window_t_ParamLimits

0xe530,	// (0x0008a679) main_mup2_pane_g3_ParamLimits

0xe530,	// (0x0008a679) main_mup2_pane_g3

0x6b41,	// (0x00082c8a) popup_toolbar_window_cp04

0x0e0b,	// (0x0007cf54) popup_call2_audio_second_window_g3_ParamLimits

0x0e0b,	// (0x0007cf54) popup_call2_audio_second_window_g3

0x1223,	// (0x0007d36c) popup_call2_audio_first_window_g4_ParamLimits

0x1223,	// (0x0007d36c) popup_call2_audio_first_window_g4

0x184a,	// (0x0007d993) popup_call2_audio_in_window_g4_ParamLimits

0x184a,	// (0x0007d993) popup_call2_audio_in_window_g4

0x8500,	// (0x00084649) aid_area_sk_bg_cut_ParamLimits

0x8500,	// (0x00084649) aid_area_sk_bg_cut

0x0a25,	// (0x0007cb6e) aid_area_sk_bg_cut_2_ParamLimits

0x0a25,	// (0x0007cb6e) aid_area_sk_bg_cut_2

0xddfa,	// (0x00089f43) aid_placing_details_win

0xddfa,	// (0x00089f43) aid_placing_details_win_2

0xe530,	// (0x0008a679) camera2_autofocus_pane_g1_ParamLimits

0x5d0b,	// (0x00081e54) popup_fixed_preview_cale_window_ParamLimits

0x5d0b,	// (0x00081e54) popup_fixed_preview_cale_window

0x070d,	// (0x0007c856) navi_slider_pane_g3

0x0704,	// (0x0007c84d) navi_slider_pane_g4

0x06fb,	// (0x0007c844) navi_slider_pane_g5

0x070d,	// (0x0007c856) navi_slider_pane_g6

0x8009,	// (0x00084152) navi_slider_pane_g7

0x085a,	// (0x0007c9a3) mup_scale_pane_g3

0x0863,	// (0x0007c9ac) mup_scale_pane_g4

0x086c,	// (0x0007c9b5) mup_scale_pane_g5

0x8226,	// (0x0008436f) mup_scale_pane_g6

0x822f,	// (0x00084378) mup_scale_pane_g7

0x2c96,	// (0x0007eddf) cams2_slider_pane_g3

0x2c96,	// (0x0007eddf) cams2_slider_pane_g4

0x2c96,	// (0x0007eddf) cams2_slider_pane_g5

0x2c96,	// (0x0007eddf) cams2_slider_pane_g6

0x2c96,	// (0x0007eddf) cams2_slider_pane_g7

0xe762,	// (0x0008a8ab) camera2_autofocus_pane_cp_g1

0x1b22,	// (0x0007dc6b) bg_popup_preview_window_pane_cp02_ParamLimits

0x1b22,	// (0x0007dc6b) bg_popup_preview_window_pane_cp02

0x22de,	// (0x0007e427) list_fp_cale_pane_ParamLimits

0x22de,	// (0x0007e427) list_fp_cale_pane

0x22ea,	// (0x0007e433) popup_fixed_preview_cale_window_t1_ParamLimits

0x22ea,	// (0x0007e433) popup_fixed_preview_cale_window_t1

0x9836,	// (0x0008597f) popup_fixed_preview_cale_window_t2_ParamLimits

0x9836,	// (0x0008597f) popup_fixed_preview_cale_window_t2

0x984b,	// (0x00085994) popup_fixed_preview_cale_window_t3_ParamLimits

0x984b,	// (0x00085994) popup_fixed_preview_cale_window_t3

0x0002,

0xf737,	// (0x0008b880) popup_fixed_preview_cale_window_t_ParamLimits

0xf737,	// (0x0008b880) popup_fixed_preview_cale_window_t

0x9860,	// (0x000859a9) list_single_fp_cale_pane_ParamLimits

0x9860,	// (0x000859a9) list_single_fp_cale_pane

0x2308,	// (0x0007e451) list_single_fp_cale_pane_g1_ParamLimits

0x2308,	// (0x0007e451) list_single_fp_cale_pane_g1

0x2314,	// (0x0007e45d) list_single_fp_cale_pane_g2_ParamLimits

0x2314,	// (0x0007e45d) list_single_fp_cale_pane_g2

0x0002,

0xf73e,	// (0x0008b887) list_single_fp_cale_pane_g_ParamLimits

0xf73e,	// (0x0008b887) list_single_fp_cale_pane_g

0x232d,	// (0x0007e476) list_single_fp_cale_pane_t1_ParamLimits

0x232d,	// (0x0007e476) list_single_fp_cale_pane_t1

0x233f,	// (0x0007e488) list_single_fp_cale_pane_t2_ParamLimits

0x233f,	// (0x0007e488) list_single_fp_cale_pane_t2

0x0001,

0xf745,	// (0x0008b88e) list_single_fp_cale_pane_t_ParamLimits

0xf745,	// (0x0008b88e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5d7f,	// (0x00081ec8) main_dialer_pane

0xddfa,	// (0x00089f43) aid_cell_size_keypad

0xddfa,	// (0x00089f43) dialer_ne_pane

0xddfa,	// (0x00089f43) grid_dialer_command_1_pane

0xddfa,	// (0x00089f43) grid_dialer_command_2_pane

0xddfa,	// (0x00089f43) grid_dialer_keypad_pane

0x1cac,	// (0x0007ddf5) bg_popup_call_pane_cp06_ParamLimits

0x1cac,	// (0x0007ddf5) bg_popup_call_pane_cp06

0x1cac,	// (0x0007ddf5) dialer_ne_clear_pane_ParamLimits

0x1cac,	// (0x0007ddf5) dialer_ne_clear_pane

0xe762,	// (0x0008a8ab) dialer_ne_pane_g1

0x07d4,	// (0x0007c91d) dialer_ne_pane_t1_ParamLimits

0x07d4,	// (0x0007c91d) dialer_ne_pane_t1

0x4853,	// (0x0008099c) dialer_ne_pane_t2_ParamLimits

0x4853,	// (0x0008099c) dialer_ne_pane_t2

0x9870,	// (0x000859b9) dialer_ne_pane_t3_ParamLimits

0x9870,	// (0x000859b9) dialer_ne_pane_t3

0x0002,

0xf74a,	// (0x0008b893) dialer_ne_pane_t_ParamLimits

0xf74a,	// (0x0008b893) dialer_ne_pane_t

0x9870,	// (0x000859b9) dialer_ne_pane_t3_copy1_ParamLimits

0x9870,	// (0x000859b9) dialer_ne_pane_t3_copy1

0x2372,	// (0x0007e4bb) cell_dialer_keypad_pane_ParamLimits

0x2372,	// (0x0007e4bb) cell_dialer_keypad_pane

0xe4c9,	// (0x0008a612) cell_dialer_command_1_pane_ParamLimits

0xe4c9,	// (0x0008a612) cell_dialer_command_1_pane

0x2389,	// (0x0007e4d2) cell_dialer_command_2_pane_ParamLimits

0x2389,	// (0x0007e4d2) cell_dialer_command_2_pane

0xe4c9,	// (0x0008a612) bg_button_pane_cp02_ParamLimits

0xe4c9,	// (0x0008a612) bg_button_pane_cp02

0xe530,	// (0x0008a679) cell_dialer_keypad_pane_g1_ParamLimits

0xe530,	// (0x0008a679) cell_dialer_keypad_pane_g1

0xe4c9,	// (0x0008a612) bg_button_pane_cp03_ParamLimits

0xe4c9,	// (0x0008a612) bg_button_pane_cp03

0xe530,	// (0x0008a679) cell_dialer_command_1_pane_g1_ParamLimits

0xe530,	// (0x0008a679) cell_dialer_command_1_pane_g1

0xddfa,	// (0x00089f43) bg_button_pane_cp04

0xe762,	// (0x0008a8ab) cell_dialer_command_2_pane_g1

0xddfa,	// (0x00089f43) bg_button_pane_cp06

0xe762,	// (0x0008a8ab) dialer_ne_clear_pane_g1

0x7f44,	// (0x0008408d) navi_pane_g2

0x7f72,	// (0x000840bb) navi_pane_g3

0x0002,

0xf379,	// (0x0008b4c2) navi_pane_g

0x7f9d,	// (0x000840e6) navi_pane_mv_g2

0x7fc4,	// (0x0008410d) navi_pane_mv_g5

0x7fcc,	// (0x00084115) navi_pane_mv_t1

0xe5a2,	// (0x0008a6eb) main_clock2_pane

0xe522,	// (0x0008a66b) main_clock2_list_pane_ParamLimits

0xe522,	// (0x0008a66b) main_clock2_list_pane

0x98e5,	// (0x00085a2e) main_clock2_pane_t1_ParamLimits

0x98e5,	// (0x00085a2e) main_clock2_pane_t1

0x9913,	// (0x00085a5c) main_clock2_pane_t2_ParamLimits

0x9913,	// (0x00085a5c) main_clock2_pane_t2

0x0004,

0xf756,	// (0x0008b89f) main_clock2_pane_t_ParamLimits

0xf756,	// (0x0008b89f) main_clock2_pane_t

0x9978,	// (0x00085ac1) popup_clock_analogue_window_cp03_ParamLimits

0x9978,	// (0x00085ac1) popup_clock_analogue_window_cp03

0x9996,	// (0x00085adf) popup_clock_digital_window_cp02_ParamLimits

0x9996,	// (0x00085adf) popup_clock_digital_window_cp02

0x9a0b,	// (0x00085b54) main_clock2_list_single_pane_ParamLimits

0x9a0b,	// (0x00085b54) main_clock2_list_single_pane

0xe740,	// (0x0008a889) list_highlight_pane_cp05

0x23ca,	// (0x0007e513) main_clock2_list_single_pane_t1

0x6b41,	// (0x00082c8a) popup_toolbar_window_cp04_ParamLimits

0xe53e,	// (0x0008a687) camera2_autofocus_pane_g2_ParamLimits

0xe53e,	// (0x0008a687) camera2_autofocus_pane_g2

0xe53e,	// (0x0008a687) camera2_autofocus_pane_g3_ParamLimits

0xe53e,	// (0x0008a687) camera2_autofocus_pane_g3

0xe53e,	// (0x0008a687) camera2_autofocus_pane_g4_ParamLimits

0xe53e,	// (0x0008a687) camera2_autofocus_pane_g4

0xe53e,	// (0x0008a687) camera2_autofocus_pane_g5_ParamLimits

0xe53e,	// (0x0008a687) camera2_autofocus_pane_g5

0x0004,

0xf69a,	// (0x0008b7e3) camera2_autofocus_pane_g_ParamLimits

0xf69a,	// (0x0008b7e3) camera2_autofocus_pane_g

0x91e3,	// (0x0008532c) camera2_autofocus_pane_cp_g2

0x91eb,	// (0x00085334) camera2_autofocus_pane_cp_g3

0x91f3,	// (0x0008533c) camera2_autofocus_pane_cp_g4

0x91fb,	// (0x00085344) camera2_autofocus_pane_cp_g5

0x0004,

0xf700,	// (0x0008b849) camera2_autofocus_pane_cp_g

0xddfa,	// (0x00089f43) popup_dialer_spcha_window

0xddfa,	// (0x00089f43) bg_popup_sub_pane_cp07

0xddfa,	// (0x00089f43) list_spcha_pane

0x23d8,	// (0x0007e521) list_single_spcha_pane_ParamLimits

0x23d8,	// (0x0007e521) list_single_spcha_pane

0xddfa,	// (0x00089f43) list_highlight_pane_cp06

0xeca2,	// (0x0008adeb) list_single_spcha_pane_t1

0x15f4,	// (0x0007d73d) popup_call2_audio_out_window_g4_ParamLimits

0x15f4,	// (0x0007d73d) popup_call2_audio_out_window_g4

0x5d7f,	// (0x00081ec8) main_imed2_pane

0x8bc1,	// (0x00084d0a) popup_imed_adjust2_window

0x8bd4,	// (0x00084d1d) popup_imed_trans_window_ParamLimits

0x8bd4,	// (0x00084d1d) popup_imed_trans_window

0x1e5a,	// (0x0007dfa3) popup_blid_sat_info2_window_t1

0x1e68,	// (0x0007dfb1) popup_blid_sat_info2_window_t2

0x000a,

0xf62f,	// (0x0008b778) popup_blid_sat_info2_window_t

0x9ac2,	// (0x00085c0b) aid_size_cell_colour_35

0x9adc,	// (0x00085c25) aid_size_cell_colour_112

0x9af3,	// (0x00085c3c) aid_size_cell_effect

0xe4c9,	// (0x0008a612) bg_tb_trans_pane_cp02

0xf079,	// (0x0008b1c2) heading_imed_pane

0x9b0d,	// (0x00085c56) listscroll_imed_pane

0x23ea,	// (0x0007e533) heading_imed_pane_g1

0x23f2,	// (0x0007e53b) heading_imed_pane_t1

0x2400,	// (0x0007e549) grid_imed_colour_35_pane_ParamLimits

0x2400,	// (0x0007e549) grid_imed_colour_35_pane

0x9b19,	// (0x00085c62) grid_imed_effect_pane

0x241c,	// (0x0007e565) list_imed_aspect_pane

0x9b29,	// (0x00085c72) scroll_pane_cp027_ParamLimits

0x9b29,	// (0x00085c72) scroll_pane_cp027

0x9b35,	// (0x00085c7e) cell_imed_effect_pane_ParamLimits

0x9b35,	// (0x00085c7e) cell_imed_effect_pane

0x2424,	// (0x0007e56d) cell_imed_colour_pane_ParamLimits

0x2424,	// (0x0007e56d) cell_imed_colour_pane

0x246e,	// (0x0007e5b7) cell_imed_colour_pane_g1_ParamLimits

0x246e,	// (0x0007e5b7) cell_imed_colour_pane_g1

0x247f,	// (0x0007e5c8) hgihlgiht_grid_pane_cp016_ParamLimits

0x247f,	// (0x0007e5c8) hgihlgiht_grid_pane_cp016

0x9b51,	// (0x00085c9a) cell_imed_effect_pane_g1

0x9b59,	// (0x00085ca2) grid_highlight_pane_cp017

0x2490,	// (0x0007e5d9) list_imed_single_pane_ParamLimits

0x2490,	// (0x0007e5d9) list_imed_single_pane

0xddfa,	// (0x00089f43) list_highlight_pane_cp07

0x24a4,	// (0x0007e5ed) list_imed_aspect_pane_comp1_t1

0x07e8,	// (0x0007c931) bg_tb_trans_pane_cp05

0x24c6,	// (0x0007e60f) popup_imed_adjust2_window_g1

0x24ed,	// (0x0007e636) popup_imed_adjust2_window_t1

0x2505,	// (0x0007e64e) slider_imed_adjust_pane

0x4870,	// (0x000809b9) slider_imed_adjust_pane_g1

0x4880,	// (0x000809c9) slider_imed_adjust_pane_g2

0x4890,	// (0x000809d9) slider_imed_adjust_pane_g3

0x48a1,	// (0x000809ea) slider_imed_adjust_pane_g4

0x0003,

0xf773,	// (0x0008b8bc) slider_imed_adjust_pane_g

0x9b62,	// (0x00085cab) aid_size_cell_clipart2

0x48b2,	// (0x000809fb) grid_imed_clipart_pane

0x48bc,	// (0x00080a05) scroll_pane_cp031

0x9b6e,	// (0x00085cb7) cell_imed_clipart_pane_ParamLimits

0x9b6e,	// (0x00085cb7) cell_imed_clipart_pane

0x9b8c,	// (0x00085cd5) cell_imed_clipart_pane_g1

0xddfa,	// (0x00089f43) grid_highlight_pane_cp014

0x98c7,	// (0x00085a10) main_clock2_pane_g1_ParamLimits

0x98c7,	// (0x00085a10) main_clock2_pane_g1

0x99b2,	// (0x00085afb) aid_call2_pane_cp10

0x99c4,	// (0x00085b0d) aid_call_pane_cp10

0xefb5,	// (0x0008b0fe) popup_clock_analogue_window_cp10_g1

0xefb5,	// (0x0008b0fe) popup_clock_analogue_window_cp10_g2

0x99d6,	// (0x00085b1f) popup_clock_analogue_window_cp10_g3

0x99d6,	// (0x00085b1f) popup_clock_analogue_window_cp10_g4

0xefb5,	// (0x0008b0fe) popup_clock_analogue_window_cp10_g5

0x0004,

0xf761,	// (0x0008b8aa) popup_clock_analogue_window_cp10_g

0x99ec,	// (0x00085b35) popup_clock_analogue_window_cp10_t1

0x9a1d,	// (0x00085b66) clock_digital_number_pane_cp10_ParamLimits

0x9a1d,	// (0x00085b66) clock_digital_number_pane_cp10

0x9a37,	// (0x00085b80) clock_digital_number_pane_cp11_ParamLimits

0x9a37,	// (0x00085b80) clock_digital_number_pane_cp11

0x9a51,	// (0x00085b9a) clock_digital_number_pane_cp12_ParamLimits

0x9a51,	// (0x00085b9a) clock_digital_number_pane_cp12

0x9a6b,	// (0x00085bb4) clock_digital_number_pane_cp13_ParamLimits

0x9a6b,	// (0x00085bb4) clock_digital_number_pane_cp13

0x9a87,	// (0x00085bd0) clock_digital_separator_pane_cp10_ParamLimits

0x9a87,	// (0x00085bd0) clock_digital_separator_pane_cp10

0x9aa1,	// (0x00085bea) popup_clock_digital_window_cp02_t1_ParamLimits

0x9aa1,	// (0x00085bea) popup_clock_digital_window_cp02_t1

0xe49f,	// (0x0008a5e8) clock_digital_number_pane_cp10_g1

0xe49f,	// (0x0008a5e8) clock_digital_number_pane_cp10_g2

0x0001,

0xf77c,	// (0x0008b8c5) clock_digital_number_pane_cp10_g

0xe49f,	// (0x0008a5e8) clock_digital_separator_pane_cp10_g1

0xe49f,	// (0x0008a5e8) clock_digital_separator_pane_g2_cp10

0xf050,	// (0x0008b199) navi_pane_vded_g4

0xf059,	// (0x0008b1a2) navi_pane_vded_g5

0xf062,	// (0x0008b1ab) navi_pane_vded_t1

0x5d7f,	// (0x00081ec8) main_vded_pane

0x9b95,	// (0x00085cde) main_vded_pane_g1

0x9ba1,	// (0x00085cea) main_vded_pane_g2

0x9bab,	// (0x00085cf4) main_vded_pane_g3

0x0002,

0xf781,	// (0x0008b8ca) main_vded_pane_g

0x9bb5,	// (0x00085cfe) main_vded_pane_t1

0x9bc3,	// (0x00085d0c) main_vded_pane_t2

0x0001,

0xf788,	// (0x0008b8d1) main_vded_pane_t

0x9bd1,	// (0x00085d1a) vded_slider_pane

0x9bdb,	// (0x00085d24) vded_video_pane

0x48c4,	// (0x00080a0d) vded_video_pane_g1

0x9be7,	// (0x00085d30) vded_video_pane_g2

0xe762,	// (0x0008a8ab) vded_video_pane_g3

0x0002,

0xf78d,	// (0x0008b8d6) vded_video_pane_g

0x48ce,	// (0x00080a17) vded_slider_pane_g1

0x1d85,	// (0x0007dece) vded_slider_pane_g2

0x48d7,	// (0x00080a20) vded_slider_pane_g3

0x48e0,	// (0x00080a29) vded_slider_pane_g4

0x48e9,	// (0x00080a32) vded_slider_pane_g5

0x0004,

0xf794,	// (0x0008b8dd) vded_slider_pane_g

0x97c0,	// (0x00085909) mup3_rocker_pane_ParamLimits

0x97c0,	// (0x00085909) mup3_rocker_pane

0x9bf0,	// (0x00085d39) mup3_control_keys_pane_g1

0x9bf8,	// (0x00085d41) mup3_control_keys_pane_g2

0x9c00,	// (0x00085d49) mup3_control_keys_pane_g3

0x9c08,	// (0x00085d51) mup3_control_keys_pane_g4

0x0003,

0xf79f,	// (0x0008b8e8) mup3_control_keys_pane_g

0x5d33,	// (0x00081e7c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5d33,	// (0x00081e7c) popup_toolbar2_fixed_window_cp01

0x97dc,	// (0x00085925) popup_toolbar2_fixed_window_cp02_ParamLimits

0x97dc,	// (0x00085925) popup_toolbar2_fixed_window_cp02

0x0f7d,	// (0x0007d0c6) popup_call2_audio_second_window_t4_ParamLimits

0x0f7d,	// (0x0007d0c6) popup_call2_audio_second_window_t4

0x14b9,	// (0x0007d602) popup_call2_audio_first_window_t6_ParamLimits

0x14b9,	// (0x0007d602) popup_call2_audio_first_window_t6

0x16f7,	// (0x0007d840) popup_call2_audio_out_window_t6_ParamLimits

0x16f7,	// (0x0007d840) popup_call2_audio_out_window_t6

0x5d7f,	// (0x00081ec8) main_vitu_pane

0xe522,	// (0x0008a66b) aid_size_cell_itu_ParamLimits

0xe522,	// (0x0008a66b) aid_size_cell_itu

0xe522,	// (0x0008a66b) bg_popup_window_pane_cp08_ParamLimits

0xe522,	// (0x0008a66b) bg_popup_window_pane_cp08

0xe522,	// (0x0008a66b) field_vitu_entry_pane_ParamLimits

0xe522,	// (0x0008a66b) field_vitu_entry_pane

0xe522,	// (0x0008a66b) grid_vitu_function_pane_ParamLimits

0xe522,	// (0x0008a66b) grid_vitu_function_pane

0xe522,	// (0x0008a66b) grid_vitu_itu_pane_ParamLimits

0xe522,	// (0x0008a66b) grid_vitu_itu_pane

0xe522,	// (0x0008a66b) cell_vitu_itu_pane_ParamLimits

0xe522,	// (0x0008a66b) cell_vitu_itu_pane

0xe522,	// (0x0008a66b) cell_vitu_function_pane_ParamLimits

0xe522,	// (0x0008a66b) cell_vitu_function_pane

0xe4c9,	// (0x0008a612) bg_popup_sub_pane_cp08_ParamLimits

0xe4c9,	// (0x0008a612) bg_popup_sub_pane_cp08

0xe77c,	// (0x0008a8c5) field_vitu_entry_pane_t1_ParamLimits

0xe77c,	// (0x0008a8c5) field_vitu_entry_pane_t1

0x4853,	// (0x0008099c) field_vitu_entry_pane_t2_ParamLimits

0x4853,	// (0x0008099c) field_vitu_entry_pane_t2

0x0001,

0xf7a8,	// (0x0008b8f1) field_vitu_entry_pane_t_ParamLimits

0xf7a8,	// (0x0008b8f1) field_vitu_entry_pane_t

0x1cac,	// (0x0007ddf5) bg_button_pane_cp05_ParamLimits

0x1cac,	// (0x0007ddf5) bg_button_pane_cp05

0x48f2,	// (0x00080a3b) cell_vitu_itu_pane_g1

0x07c0,	// (0x0007c909) cell_vitu_itu_pane_t1_ParamLimits

0x07c0,	// (0x0007c909) cell_vitu_itu_pane_t1

0x07c0,	// (0x0007c909) cell_vitu_itu_pane_t2_ParamLimits

0x07c0,	// (0x0007c909) cell_vitu_itu_pane_t2

0x0002,

0xf7ad,	// (0x0008b8f6) cell_vitu_itu_pane_t_ParamLimits

0xf7ad,	// (0x0008b8f6) cell_vitu_itu_pane_t

0xddfa,	// (0x00089f43) bg_button_pane_cp07

0xe762,	// (0x0008a8ab) cell_vitu_function_pane_g1

0x5e7c,	// (0x00081fc5) main_calc_pane_g1

0x5af2,	// (0x00081c3b) aid_visual_content_pane

0x5d7f,	// (0x00081ec8) main_vradio_pane

0xe53e,	// (0x0008a687) main_vradio_pane_g1_ParamLimits

0xe53e,	// (0x0008a687) main_vradio_pane_g1

0xe53e,	// (0x0008a687) main_vradio_pane_g2_ParamLimits

0xe53e,	// (0x0008a687) main_vradio_pane_g2

0x0001,

0xf7b4,	// (0x0008b8fd) main_vradio_pane_g_ParamLimits

0xf7b4,	// (0x0008b8fd) main_vradio_pane_g

0x07d4,	// (0x0007c91d) main_vradio_pane_t1_ParamLimits

0x07d4,	// (0x0007c91d) main_vradio_pane_t1

0x07d4,	// (0x0007c91d) main_vradio_pane_t2_ParamLimits

0x07d4,	// (0x0007c91d) main_vradio_pane_t2

0x07d4,	// (0x0007c91d) main_vradio_pane_t3_ParamLimits

0x07d4,	// (0x0007c91d) main_vradio_pane_t3

0x0002,

0xf7b9,	// (0x0008b902) main_vradio_pane_t_ParamLimits

0xf7b9,	// (0x0008b902) main_vradio_pane_t

0xe522,	// (0x0008a66b) vradio_rocker_control_pane_ParamLimits

0xe522,	// (0x0008a66b) vradio_rocker_control_pane

0xe522,	// (0x0008a66b) vradio_station_info_pane_ParamLimits

0xe522,	// (0x0008a66b) vradio_station_info_pane

0xe4c9,	// (0x0008a612) vradio_frequency_info_pane_ParamLimits

0xe4c9,	// (0x0008a612) vradio_frequency_info_pane

0xe762,	// (0x0008a8ab) vradio_station_info_pane_g1

0x07c0,	// (0x0007c909) vradio_station_info_pane_t1_ParamLimits

0x07c0,	// (0x0007c909) vradio_station_info_pane_t1

0x07d4,	// (0x0007c91d) vradio_station_info_pane_t2_ParamLimits

0x07d4,	// (0x0007c91d) vradio_station_info_pane_t2

0x0001,

0xf7c0,	// (0x0008b909) vradio_station_info_pane_t_ParamLimits

0xf7c0,	// (0x0008b909) vradio_station_info_pane_t

0xddfa,	// (0x00089f43) vradio_tuning_pane

0x9c18,	// (0x00085d61) vradio_rocker_control_pane_g1

0x490e,	// (0x00080a57) vradio_rocker_control_pane_g2

0x9c20,	// (0x00085d69) vradio_rocker_control_pane_g3

0x9c28,	// (0x00085d71) vradio_rocker_control_pane_g4

0x9c32,	// (0x00085d7b) vradio_rocker_control_pane_g5

0x0004,

0xf7c5,	// (0x0008b90e) vradio_rocker_control_pane_g

0xe762,	// (0x0008a8ab) vradio_frequency_info_pane_g1

0xe77c,	// (0x0008a8c5) vradio_frequency_info_pane_t1_ParamLimits

0xe77c,	// (0x0008a8c5) vradio_frequency_info_pane_t1

0x9c3a,	// (0x00085d83) vradio_tuning_pane_g1

0x9c47,	// (0x00085d90) vradio_tuning_pane_t1

0x5b33,	// (0x00081c7c) area_side_right_pane_ParamLimits

0x5b33,	// (0x00081c7c) area_side_right_pane

0x1ae9,	// (0x0007dc32) status_small_pane_g1

0x1af1,	// (0x0007dc3a) status_small_pane_g2

0x1afa,	// (0x0007dc43) status_small_pane_g3

0x1b03,	// (0x0007dc4c) status_small_pane_g4

0x0003,

0xf591,	// (0x0008b6da) status_small_pane_g

0x1b0c,	// (0x0007dc55) status_small_pane_t1

0x5d7f,	// (0x00081ec8) main_video3_pane

0x4916,	// (0x00080a5f) cams_zoom_vslider_pane

0x491e,	// (0x00080a67) image3_wide_pane_ParamLimits

0x491e,	// (0x00080a67) image3_wide_pane

0x4938,	// (0x00080a81) image3_wide_small_pane

0x4944,	// (0x00080a8d) main_video3_pane_g1_ParamLimits

0x4944,	// (0x00080a8d) main_video3_pane_g1

0x4960,	// (0x00080aa9) main_video3_pane_g2_ParamLimits

0x4960,	// (0x00080aa9) main_video3_pane_g2

0x0001,

0xf7d0,	// (0x0008b919) main_video3_pane_g_ParamLimits

0xf7d0,	// (0x0008b919) main_video3_pane_g

0x497c,	// (0x00080ac5) main_video3_pane_t1_ParamLimits

0x497c,	// (0x00080ac5) main_video3_pane_t1

0x49a7,	// (0x00080af0) main_video3_pane_t2_ParamLimits

0x49a7,	// (0x00080af0) main_video3_pane_t2

0x49d4,	// (0x00080b1d) main_video3_pane_t3_ParamLimits

0x49d4,	// (0x00080b1d) main_video3_pane_t3

0x0002,

0xf7d5,	// (0x0008b91e) main_video3_pane_t_ParamLimits

0xf7d5,	// (0x0008b91e) main_video3_pane_t

0x4a01,	// (0x00080b4a) cams_zoom_vslider_pane_g1

0x4a0a,	// (0x00080b53) cams_zoom_vslider_pane_g2

0x0001,

0xf7dc,	// (0x0008b925) cams_zoom_vslider_pane_g

0x4a12,	// (0x00080b5b) small_slider_vertical_pane

0xe762,	// (0x0008a8ab) small_slider_vertical_pane_g1

0xe762,	// (0x0008a8ab) small_slider_vertical_pane_g2

0x4a1a,	// (0x00080b63) small_slider_vertical_pane_g3

0x0002,

0xf7e1,	// (0x0008b92a) small_slider_vertical_pane_g

0x5d7f,	// (0x00081ec8) main_hwr_training_pane

0x4a23,	// (0x00080b6c) hwr_training_instruct_pane_ParamLimits

0x4a23,	// (0x00080b6c) hwr_training_instruct_pane

0x9c56,	// (0x00085d9f) hwr_training_navi_pane_ParamLimits

0x9c56,	// (0x00085d9f) hwr_training_navi_pane

0x9c70,	// (0x00085db9) hwr_training_write_pane_ParamLimits

0x9c70,	// (0x00085db9) hwr_training_write_pane

0xddfa,	// (0x00089f43) bg_frame_shadow_pane

0x4a5a,	// (0x00080ba3) hwr_training_write_pane_g1

0x4a62,	// (0x00080bab) hwr_training_write_pane_g2

0x4a6a,	// (0x00080bb3) hwr_training_write_pane_g3

0x4a72,	// (0x00080bbb) hwr_training_write_pane_g4

0x4a7a,	// (0x00080bc3) hwr_training_write_pane_g5

0x4a82,	// (0x00080bcb) hwr_training_write_pane_g6

0x4a8a,	// (0x00080bd3) hwr_training_write_pane_g7

0x0006,

0xf7e8,	// (0x0008b931) hwr_training_write_pane_g

0x9ca8,	// (0x00085df1) hwr_training_navi_pane_g1_ParamLimits

0x9ca8,	// (0x00085df1) hwr_training_navi_pane_g1

0x9cba,	// (0x00085e03) hwr_training_navi_pane_g2_ParamLimits

0x9cba,	// (0x00085e03) hwr_training_navi_pane_g2

0x9ccc,	// (0x00085e15) hwr_training_navi_pane_g3_ParamLimits

0x9ccc,	// (0x00085e15) hwr_training_navi_pane_g3

0x9cdc,	// (0x00085e25) hwr_training_navi_pane_g4_ParamLimits

0x9cdc,	// (0x00085e25) hwr_training_navi_pane_g4

0x0004,

0xf7f7,	// (0x0008b940) hwr_training_navi_pane_g_ParamLimits

0xf7f7,	// (0x0008b940) hwr_training_navi_pane_g

0x9cf6,	// (0x00085e3f) hwr_training_navi_pane_t1

0x9d04,	// (0x00085e4d) list_single_hwr_training_instruct_pane_ParamLimits

0x9d04,	// (0x00085e4d) list_single_hwr_training_instruct_pane

0x4a92,	// (0x00080bdb) list_single_hwr_training_instruct_pane_t1

0x1f61,	// (0x0007e0aa) bg_frame_shadow_pane_g1

0x4aa1,	// (0x00080bea) bg_frame_shadow_pane_g2

0x4aa9,	// (0x00080bf2) bg_frame_shadow_pane_g3

0x4ab1,	// (0x00080bfa) bg_frame_shadow_pane_g4

0x4ab9,	// (0x00080c02) bg_frame_shadow_pane_g5

0x4ac1,	// (0x00080c0a) bg_frame_shadow_pane_g6

0x4ac9,	// (0x00080c12) bg_frame_shadow_pane_g7

0xe651,	// (0x0008a79a) bg_frame_shadow_pane_g8

0x0007,

0xf802,	// (0x0008b94b) bg_frame_shadow_pane_g

0x5d7f,	// (0x00081ec8) main_video_tele_dialer_pane

0x9d1d,	// (0x00085e66) aid_size_cell_video_keypad_ParamLimits

0x9d1d,	// (0x00085e66) aid_size_cell_video_keypad

0x9d2d,	// (0x00085e76) grid_video_dialer_keypad_pane_ParamLimits

0x9d2d,	// (0x00085e76) grid_video_dialer_keypad_pane

0x9d5f,	// (0x00085ea8) video_down_pane_cp_ParamLimits

0x9d5f,	// (0x00085ea8) video_down_pane_cp

0x9d89,	// (0x00085ed2) cell_video_dialer_keypad_pane_ParamLimits

0x9d89,	// (0x00085ed2) cell_video_dialer_keypad_pane

0x4ad1,	// (0x00080c1a) bg_button_pane_cp08_ParamLimits

0x4ad1,	// (0x00080c1a) bg_button_pane_cp08

0x9da0,	// (0x00085ee9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9da0,	// (0x00085ee9) cell_video_dialer_keypad_pane_g1

0x97b4,	// (0x000858fd) mup3_rocker2_pane_ParamLimits

0x97b4,	// (0x000858fd) mup3_rocker2_pane

0xe762,	// (0x0008a8ab) mup3_rocker2_pane_g1

0x8b19,	// (0x00084c62) main_dialer2_pane

0x5d7f,	// (0x00081ec8) main_mp4_pane

0x9df9,	// (0x00085f42) main_mp4_pane_g1_ParamLimits

0x9df9,	// (0x00085f42) main_mp4_pane_g1

0x9e07,	// (0x00085f50) main_mp4_pane_g2_ParamLimits

0x9e07,	// (0x00085f50) main_mp4_pane_g2

0x9e15,	// (0x00085f5e) main_mp4_pane_g3_ParamLimits

0x9e15,	// (0x00085f5e) main_mp4_pane_g3

0x9e68,	// (0x00085fb1) main_mp4_pane_g4_ParamLimits

0x9e68,	// (0x00085fb1) main_mp4_pane_g4

0x9e96,	// (0x00085fdf) main_mp4_pane_g5_ParamLimits

0x9e96,	// (0x00085fdf) main_mp4_pane_g5

0x0007,

0xf822,	// (0x0008b96b) main_mp4_pane_g_ParamLimits

0xf822,	// (0x0008b96b) main_mp4_pane_g

0x9f0a,	// (0x00086053) main_mp4_pane_t1_ParamLimits

0x9f0a,	// (0x00086053) main_mp4_pane_t1

0x9f66,	// (0x000860af) main_mp4_pane_t2_ParamLimits

0x9f66,	// (0x000860af) main_mp4_pane_t2

0x4add,	// (0x00080c26) main_mp4_pane_t3_ParamLimits

0x4add,	// (0x00080c26) main_mp4_pane_t3

0x9fb8,	// (0x00086101) main_mp4_pane_t4_ParamLimits

0x9fb8,	// (0x00086101) main_mp4_pane_t4

0x0003,

0xf833,	// (0x0008b97c) main_mp4_pane_t_ParamLimits

0xf833,	// (0x0008b97c) main_mp4_pane_t

0x9ff8,	// (0x00086141) mp4_progress_pane_ParamLimits

0x9ff8,	// (0x00086141) mp4_progress_pane

0xa042,	// (0x0008618b) mp4_rocker_pane_ParamLimits

0xa042,	// (0x0008618b) mp4_rocker_pane

0x4b0b,	// (0x00080c54) mp4_progress_pane_t1

0x4b24,	// (0x00080c6d) mp4_progress_pane_t2

0x0001,

0xf83c,	// (0x0008b985) mp4_progress_pane_t

0x4b3d,	// (0x00080c86) mup_progress_pane_cp04

0x2c96,	// (0x0007eddf) mp4_rocker_pane_g1

0xa062,	// (0x000861ab) aid_cell_size_keypad2_ParamLimits

0xa062,	// (0x000861ab) aid_cell_size_keypad2

0xa072,	// (0x000861bb) dialer2_ne_pane_ParamLimits

0xa072,	// (0x000861bb) dialer2_ne_pane

0xa07e,	// (0x000861c7) grid_dialer2_keypad_pane_ParamLimits

0xa07e,	// (0x000861c7) grid_dialer2_keypad_pane

0x4b50,	// (0x00080c99) bg_popup_call_pane_cp07_ParamLimits

0x4b50,	// (0x00080c99) bg_popup_call_pane_cp07

0xa08c,	// (0x000861d5) dialer2_ne_pane_t1_ParamLimits

0xa08c,	// (0x000861d5) dialer2_ne_pane_t1

0xa0b1,	// (0x000861fa) cell_dialer2_keypad_pane_ParamLimits

0xa0b1,	// (0x000861fa) cell_dialer2_keypad_pane

0x4b70,	// (0x00080cb9) bg_button_pane_pane_cp04_ParamLimits

0x4b70,	// (0x00080cb9) bg_button_pane_pane_cp04

0xa0c8,	// (0x00086211) cell_dialer2_keypad_pane_g1_ParamLimits

0xa0c8,	// (0x00086211) cell_dialer2_keypad_pane_g1

0x6a13,	// (0x00082b5c) aid_placing_vt_set_content_ParamLimits

0x6a13,	// (0x00082b5c) aid_placing_vt_set_content

0x6a3b,	// (0x00082b84) aid_placing_vt_set_title_ParamLimits

0x6a3b,	// (0x00082b84) aid_placing_vt_set_title

0x5d7f,	// (0x00081ec8) main_image3_pane

0xa162,	// (0x000862ab) area_side_right_pane_cp01_ParamLimits

0xa162,	// (0x000862ab) area_side_right_pane_cp01

0xa191,	// (0x000862da) main_image3_pane_g1_ParamLimits

0xa191,	// (0x000862da) main_image3_pane_g1

0xa19f,	// (0x000862e8) main_image3_pane_g2_ParamLimits

0xa19f,	// (0x000862e8) main_image3_pane_g2

0xa1b8,	// (0x00086301) main_image3_pane_g3_ParamLimits

0xa1b8,	// (0x00086301) main_image3_pane_g3

0xa1d1,	// (0x0008631a) main_image3_pane_g4_ParamLimits

0xa1d1,	// (0x0008631a) main_image3_pane_g4

0x0003,

0xf84b,	// (0x0008b994) main_image3_pane_g_ParamLimits

0xf84b,	// (0x0008b994) main_image3_pane_g

0xa1ea,	// (0x00086333) main_image3_pane_t1_ParamLimits

0xa1ea,	// (0x00086333) main_image3_pane_t1

0xa20f,	// (0x00086358) main_image3_pane_t2_ParamLimits

0xa20f,	// (0x00086358) main_image3_pane_t2

0xa22e,	// (0x00086377) main_image3_pane_t3_ParamLimits

0xa22e,	// (0x00086377) main_image3_pane_t3

0x0003,

0xf854,	// (0x0008b99d) main_image3_pane_t_ParamLimits

0xf854,	// (0x0008b99d) main_image3_pane_t

0xe522,	// (0x0008a66b) grid_sctrl_middle_pane_cp01_ParamLimits

0xe522,	// (0x0008a66b) grid_sctrl_middle_pane_cp01

0xa28f,	// (0x000863d8) cell_sctrl_middle_pane_cp01_ParamLimits

0xa28f,	// (0x000863d8) cell_sctrl_middle_pane_cp01

0xa2a0,	// (0x000863e9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa2a0,	// (0x000863e9) cell_sctrl_middle_pane_cp01_g1

0x5d7f,	// (0x00081ec8) main_call4_pane

0xa2ad,	// (0x000863f6) aid_size_button_call4_ParamLimits

0xa2ad,	// (0x000863f6) aid_size_button_call4

0xa2e3,	// (0x0008642c) call4_windows_pane_ParamLimits

0xa2e3,	// (0x0008642c) call4_windows_pane

0xa2f8,	// (0x00086441) grid_call4_button_pane_ParamLimits

0xa2f8,	// (0x00086441) grid_call4_button_pane

0xa328,	// (0x00086471) call4_windows_conf_pane

0xa341,	// (0x0008648a) popup_call4_audio_first_window_ParamLimits

0xa341,	// (0x0008648a) popup_call4_audio_first_window

0xa391,	// (0x000864da) popup_call4_audio_second_window_ParamLimits

0xa391,	// (0x000864da) popup_call4_audio_second_window

0xa3aa,	// (0x000864f3) popup_call4_audio_wait_window_ParamLimits

0xa3aa,	// (0x000864f3) popup_call4_audio_wait_window

0xa3b8,	// (0x00086501) cell_call4_button_pane_ParamLimits

0xa3b8,	// (0x00086501) cell_call4_button_pane

0xa3db,	// (0x00086524) bg_button_pane_cp09_ParamLimits

0xa3db,	// (0x00086524) bg_button_pane_cp09

0xa3e7,	// (0x00086530) cell_call4_button_pane_g1_ParamLimits

0xa3e7,	// (0x00086530) cell_call4_button_pane_g1

0xa3f4,	// (0x0008653d) cell_call4_button_pane_t1_ParamLimits

0xa3f4,	// (0x0008653d) cell_call4_button_pane_t1

0x4b84,	// (0x00080ccd) popup_call4_audio_conf_window_ParamLimits

0x4b84,	// (0x00080ccd) popup_call4_audio_conf_window

0x97e9,	// (0x00085932) mup3_progress_pane_t1_ParamLimits

0x9807,	// (0x00085950) mup3_progress_pane_t2_ParamLimits

0x229b,	// (0x0007e3e4) mup3_progress_pane_t3_ParamLimits

0xf729,	// (0x0008b872) mup3_progress_pane_t_ParamLimits

0x22b8,	// (0x0007e401) mup_progress_pane_cp03_ParamLimits

0x9c10,	// (0x00085d59) mup3_control_keys_pane_g4_copy1

0xa026,	// (0x0008616f) mp4_rocker2_pane_ParamLimits

0xa026,	// (0x0008616f) mp4_rocker2_pane

0x4ba6,	// (0x00080cef) mp4_rocker2_pane_g1

0x4b9e,	// (0x00080ce7) mp4_rocker2_pane_g2

0xa438,	// (0x00086581) mp4_rocker2_pane_g3

0xa440,	// (0x00086589) mp4_rocker2_pane_g4

0xa448,	// (0x00086591) mp4_rocker2_pane_g5

0x0004,

0xf85d,	// (0x0008b9a6) mp4_rocker2_pane_g

0x5d7f,	// (0x00081ec8) main_camera4_pane

0x5d7f,	// (0x00081ec8) main_video4_pane

0x9d3b,	// (0x00085e84) main_video_tele_dialer_pane_t1_ParamLimits

0x9d3b,	// (0x00085e84) main_video_tele_dialer_pane_t1

0x9d4d,	// (0x00085e96) main_video_tele_dialer_pane_t2_ParamLimits

0x9d4d,	// (0x00085e96) main_video_tele_dialer_pane_t2

0x0001,

0xf813,	// (0x0008b95c) main_video_tele_dialer_pane_t_ParamLimits

0xf813,	// (0x0008b95c) main_video_tele_dialer_pane_t

0xa468,	// (0x000865b1) cam4_autofocus_pane_ParamLimits

0xa468,	// (0x000865b1) cam4_autofocus_pane

0xa480,	// (0x000865c9) cam4_image_uncrop_pane_ParamLimits

0xa480,	// (0x000865c9) cam4_image_uncrop_pane

0xa499,	// (0x000865e2) cam4_indicators_pane_ParamLimits

0xa499,	// (0x000865e2) cam4_indicators_pane

0xa4b5,	// (0x000865fe) main_camera4_pane_g1_ParamLimits

0xa4b5,	// (0x000865fe) main_camera4_pane_g1

0xa4c1,	// (0x0008660a) main_camera4_pane_g2_ParamLimits

0xa4c1,	// (0x0008660a) main_camera4_pane_g2

0xa4c1,	// (0x0008660a) main_camera4_pane_g3_ParamLimits

0xa4c1,	// (0x0008660a) main_camera4_pane_g3

0xa4cd,	// (0x00086616) main_camera4_pane_g4_ParamLimits

0xa4cd,	// (0x00086616) main_camera4_pane_g4

0xa4d9,	// (0x00086622) main_camera4_pane_g5_ParamLimits

0xa4d9,	// (0x00086622) main_camera4_pane_g5

0x0005,

0xf868,	// (0x0008b9b1) main_camera4_pane_g_ParamLimits

0xf868,	// (0x0008b9b1) main_camera4_pane_g

0xa4f3,	// (0x0008663c) main_camera4_pane_t1_ParamLimits

0xa4f3,	// (0x0008663c) main_camera4_pane_t1

0x373e,	// (0x0007f887) bg_tb_trans_pane_cp06

0xa545,	// (0x0008668e) cam4_indicators_pane_g1

0xa556,	// (0x0008669f) cam4_indicators_pane_g2

0x0002,

0xf883,	// (0x0008b9cc) cam4_indicators_pane_g

0xa56e,	// (0x000866b7) cam4_indicators_pane_t1

0xa598,	// (0x000866e1) main_video4_pane_g1_ParamLimits

0xa598,	// (0x000866e1) main_video4_pane_g1

0xa5a4,	// (0x000866ed) main_video4_pane_g2_ParamLimits

0xa5a4,	// (0x000866ed) main_video4_pane_g2

0xa5b0,	// (0x000866f9) main_video4_pane_g3_ParamLimits

0xa5b0,	// (0x000866f9) main_video4_pane_g3

0xa5bc,	// (0x00086705) main_video4_pane_g4_ParamLimits

0xa5bc,	// (0x00086705) main_video4_pane_g4

0x0004,

0xf88a,	// (0x0008b9d3) main_video4_pane_g_ParamLimits

0xf88a,	// (0x0008b9d3) main_video4_pane_g

0xa5de,	// (0x00086727) vid4_indicators_pane_ParamLimits

0xa5de,	// (0x00086727) vid4_indicators_pane

0xa5fd,	// (0x00086746) video4_image_uncrop_cif_pane_ParamLimits

0xa5fd,	// (0x00086746) video4_image_uncrop_cif_pane

0xa60c,	// (0x00086755) video4_image_uncrop_nhd_pane_ParamLimits

0xa60c,	// (0x00086755) video4_image_uncrop_nhd_pane

0xa480,	// (0x000865c9) video4_image_uncrop_vga_pane_ParamLimits

0xa480,	// (0x000865c9) video4_image_uncrop_vga_pane

0x8b0b,	// (0x00084c54) bg_tb_trans_pane_cp07

0xa625,	// (0x0008676e) vid4_indicators_pane_g1

0xa63b,	// (0x00086784) vid4_indicators_pane_g2

0xa64f,	// (0x00086798) vid4_indicators_pane_g3

0x0004,

0xf895,	// (0x0008b9de) vid4_indicators_pane_g

0xa680,	// (0x000867c9) vid4_indicators_pane_t1

0xa697,	// (0x000867e0) cam4_autofocus_pane_g1

0xa69f,	// (0x000867e8) cam4_autofocus_pane_g2

0xa6a7,	// (0x000867f0) cam4_autofocus_pane_g3

0x0002,

0xf8a0,	// (0x0008b9e9) cam4_autofocus_pane_g

0xa6af,	// (0x000867f8) cam4_autofocus_pane_g3_copy1

0x9d6d,	// (0x00085eb6) video_down_pane_cp_t1

0x9d7b,	// (0x00085ec4) video_down_pane_cp_t2

0x0001,

0xf818,	// (0x0008b961) video_down_pane_cp_t

0x5d65,	// (0x00081eae) popup_vitu2_window_ParamLimits

0x5d65,	// (0x00081eae) popup_vitu2_window

0xa6b7,	// (0x00086800) aid_size_cell2_itu2_ParamLimits

0xa6b7,	// (0x00086800) aid_size_cell2_itu2

0xa6d3,	// (0x0008681c) aid_size_cell_itu2_ParamLimits

0xa6d3,	// (0x0008681c) aid_size_cell_itu2

0xa70d,	// (0x00086856) bg_popup_window_pane_cp09_ParamLimits

0xa70d,	// (0x00086856) bg_popup_window_pane_cp09

0xa71b,	// (0x00086864) field_vitu2_entry_pane_ParamLimits

0xa71b,	// (0x00086864) field_vitu2_entry_pane

0xa739,	// (0x00086882) grid_vitu2_function_pane_ParamLimits

0xa739,	// (0x00086882) grid_vitu2_function_pane

0xa779,	// (0x000868c2) grid_vitu2_itu_pane_ParamLimits

0xa779,	// (0x000868c2) grid_vitu2_itu_pane

0xa7db,	// (0x00086924) cell_vitu2_itu_pane_ParamLimits

0xa7db,	// (0x00086924) cell_vitu2_itu_pane

0xa7f6,	// (0x0008693f) cell_vitu2_function_pane_ParamLimits

0xa7f6,	// (0x0008693f) cell_vitu2_function_pane

0x2519,	// (0x0007e662) bg_popup_call_pane_cp08_ParamLimits

0x2519,	// (0x0007e662) bg_popup_call_pane_cp08

0x2530,	// (0x0007e679) field_vitu2_entry_pane_g1

0x253c,	// (0x0007e685) field_vitu2_entry_pane_g2

0x0002,

0xf8a7,	// (0x0008b9f0) field_vitu2_entry_pane_g

0x2548,	// (0x0007e691) field_vitu2_entry_pane_t1_ParamLimits

0x2548,	// (0x0007e691) field_vitu2_entry_pane_t1

0x2577,	// (0x0007e6c0) field_vitu2_entry_pane_t2_ParamLimits

0x2577,	// (0x0007e6c0) field_vitu2_entry_pane_t2

0x0001,

0xf8ae,	// (0x0008b9f7) field_vitu2_entry_pane_t_ParamLimits

0xf8ae,	// (0x0008b9f7) field_vitu2_entry_pane_t

0x8e64,	// (0x00084fad) bg_button_pane_cp010_ParamLimits

0x8e64,	// (0x00084fad) bg_button_pane_cp010

0xa83a,	// (0x00086983) cell_vitu2_itu_pane_g1

0xa860,	// (0x000869a9) cell_vitu2_itu_pane_t1_ParamLimits

0xa860,	// (0x000869a9) cell_vitu2_itu_pane_t1

0x59d6,	// (0x00081b1f) cell_vitu2_itu_pane_t2_ParamLimits

0x59d6,	// (0x00081b1f) cell_vitu2_itu_pane_t2

0x0002,

0xf8b8,	// (0x0008ba01) cell_vitu2_itu_pane_t_ParamLimits

0xf8b8,	// (0x0008ba01) cell_vitu2_itu_pane_t

0x8b0b,	// (0x00084c54) bg_button_pane_cp011

0xa8ac,	// (0x000869f5) cell_vitu2_function_pane_g1

0x5d7f,	// (0x00081ec8) main_myfav_hc_pane

0xa270,	// (0x000863b9) popup_image3_note_pane_ParamLimits

0xa270,	// (0x000863b9) popup_image3_note_pane

0xa27e,	// (0x000863c7) popup_image3_tool_bar_pane_ParamLimits

0xa27e,	// (0x000863c7) popup_image3_tool_bar_pane

0x5a4c,	// (0x00081b95) cell_vitu2_itu_pane_t3_ParamLimits

0x5a4c,	// (0x00081b95) cell_vitu2_itu_pane_t3

0xddfa,	// (0x00089f43) bg_popup_trans_pane

0x259c,	// (0x0007e6e5) grid_image3_tool_bar_pane

0x25a6,	// (0x0007e6ef) bg_popup_trans_pane_g1

0xe98b,	// (0x0008aad4) bg_popup_trans_pane_g2

0x25ae,	// (0x0007e6f7) bg_popup_trans_pane_g3

0x25b6,	// (0x0007e6ff) bg_popup_trans_pane_g4

0x25be,	// (0x0007e707) bg_popup_trans_pane_g5

0x25c6,	// (0x0007e70f) bg_popup_trans_pane_g6

0x25ce,	// (0x0007e717) bg_popup_trans_pane_g7

0x25d6,	// (0x0007e71f) bg_popup_trans_pane_g8

0xe96b,	// (0x0008aab4) bg_popup_trans_pane_g9

0x0008,

0xf8bf,	// (0x0008ba08) bg_popup_trans_pane_g

0x25de,	// (0x0007e727) cell_image3_tool_bar_pane_ParamLimits

0x25de,	// (0x0007e727) cell_image3_tool_bar_pane

0xe762,	// (0x0008a8ab) cell_image3_tool_bar_pane_g1

0xddfa,	// (0x00089f43) bg_popup_trans_pane_cp1

0x25f4,	// (0x0007e73d) popup_image3_note_pane_t1

0x2602,	// (0x0007e74b) popup_image3_note_pane_t2

0x2610,	// (0x0007e759) popup_image3_note_pane_t3

0x0002,

0xf8d2,	// (0x0008ba1b) popup_image3_note_pane_t

0x2620,	// (0x0007e769) popup_image3_note_pane_t3_copy1

0xa8c0,	// (0x00086a09) bg_myfav_hc_instruction_pane_ParamLimits

0xa8c0,	// (0x00086a09) bg_myfav_hc_instruction_pane

0xa8d8,	// (0x00086a21) cell_myfav_contact_pane_ParamLimits

0xa8d8,	// (0x00086a21) cell_myfav_contact_pane

0xa8f2,	// (0x00086a3b) cell_myfav_contact_pane_cp1_ParamLimits

0xa8f2,	// (0x00086a3b) cell_myfav_contact_pane_cp1

0xa90a,	// (0x00086a53) cell_myfav_contact_pane_cp2_ParamLimits

0xa90a,	// (0x00086a53) cell_myfav_contact_pane_cp2

0xa922,	// (0x00086a6b) cell_myfav_contact_pane_cp3_ParamLimits

0xa922,	// (0x00086a6b) cell_myfav_contact_pane_cp3

0xa939,	// (0x00086a82) cell_myfav_contact_pane_cp4_ParamLimits

0xa939,	// (0x00086a82) cell_myfav_contact_pane_cp4

0xa94f,	// (0x00086a98) cell_myfav_contact_pane_cp5_ParamLimits

0xa94f,	// (0x00086a98) cell_myfav_contact_pane_cp5

0xa963,	// (0x00086aac) cell_myfav_contact_pane_cp6_ParamLimits

0xa963,	// (0x00086aac) cell_myfav_contact_pane_cp6

0xa977,	// (0x00086ac0) cell_myfav_contact_pane_cp7_ParamLimits

0xa977,	// (0x00086ac0) cell_myfav_contact_pane_cp7

0x262e,	// (0x0007e777) listscroll_gen_pane_cp05

0xa98f,	// (0x00086ad8) main_myfav_hc_pane_g1_ParamLimits

0xa98f,	// (0x00086ad8) main_myfav_hc_pane_g1

0xa9a9,	// (0x00086af2) main_myfav_hc_pane_g2_ParamLimits

0xa9a9,	// (0x00086af2) main_myfav_hc_pane_g2

0x0002,

0xf8d9,	// (0x0008ba22) main_myfav_hc_pane_g_ParamLimits

0xf8d9,	// (0x0008ba22) main_myfav_hc_pane_g

0xa9db,	// (0x00086b24) main_myfav_hc_pane_t1_ParamLimits

0xa9db,	// (0x00086b24) main_myfav_hc_pane_t1

0x2637,	// (0x0007e780) main_myfav_hc_pane_t2_ParamLimits

0x2637,	// (0x0007e780) main_myfav_hc_pane_t2

0x2649,	// (0x0007e792) main_myfav_hc_pane_t3_ParamLimits

0x2649,	// (0x0007e792) main_myfav_hc_pane_t3

0xa9f2,	// (0x00086b3b) main_myfav_hc_pane_t4_ParamLimits

0xa9f2,	// (0x00086b3b) main_myfav_hc_pane_t4

0x0004,

0xf8e0,	// (0x0008ba29) main_myfav_hc_pane_t_ParamLimits

0xf8e0,	// (0x0008ba29) main_myfav_hc_pane_t

0xe762,	// (0x0008a8ab) bg_myfav_hc_instruction_pane_g1

0x265b,	// (0x0007e7a4) cell_myfav_contact_pane_g1_ParamLimits

0x265b,	// (0x0007e7a4) cell_myfav_contact_pane_g1

0x265b,	// (0x0007e7a4) cell_myfav_contact_pane_g2_ParamLimits

0x265b,	// (0x0007e7a4) cell_myfav_contact_pane_g2

0x2667,	// (0x0007e7b0) cell_myfav_contact_pane_g3_ParamLimits

0x2667,	// (0x0007e7b0) cell_myfav_contact_pane_g3

0xe53e,	// (0x0008a687) cell_myfav_contact_pane_g4_ParamLimits

0xe53e,	// (0x0008a687) cell_myfav_contact_pane_g4

0x2674,	// (0x0007e7bd) cell_myfav_contact_pane_g5_ParamLimits

0x2674,	// (0x0007e7bd) cell_myfav_contact_pane_g5

0x0004,

0xf8eb,	// (0x0008ba34) cell_myfav_contact_pane_g_ParamLimits

0xf8eb,	// (0x0008ba34) cell_myfav_contact_pane_g

0xa9c3,	// (0x00086b0c) main_myfav_hc_pane_g3_ParamLimits

0xa9c3,	// (0x00086b0c) main_myfav_hc_pane_g3

0x5c6d,	// (0x00081db6) popup_adpt_find_window

0xaa1c,	// (0x00086b65) afind_page_pane_ParamLimits

0xaa1c,	// (0x00086b65) afind_page_pane

0xaa29,	// (0x00086b72) aid_size_cell_afind_ParamLimits

0xaa29,	// (0x00086b72) aid_size_cell_afind

0xaa43,	// (0x00086b8c) bg_popup_sub_pane_cp09_ParamLimits

0xaa43,	// (0x00086b8c) bg_popup_sub_pane_cp09

0xaa50,	// (0x00086b99) find_pane_cp01_ParamLimits

0xaa50,	// (0x00086b99) find_pane_cp01

0x2680,	// (0x0007e7c9) grid_afind_control_pane_ParamLimits

0x2680,	// (0x0007e7c9) grid_afind_control_pane

0xaa5d,	// (0x00086ba6) grid_afind_pane_ParamLimits

0xaa5d,	// (0x00086ba6) grid_afind_pane

0xaa79,	// (0x00086bc2) cell_afind_pane_ParamLimits

0xaa79,	// (0x00086bc2) cell_afind_pane

0xe762,	// (0x0008a8ab) afind_page_pane_g1

0xaac5,	// (0x00086c0e) afind_page_pane_g2

0xaace,	// (0x00086c17) afind_page_pane_g3

0x0002,

0xf8f6,	// (0x0008ba3f) afind_page_pane_g

0xaad7,	// (0x00086c20) afind_page_pane_t1

0x2694,	// (0x0007e7dd) cell_afind_grid_control_pane_ParamLimits

0x2694,	// (0x0007e7dd) cell_afind_grid_control_pane

0x4b70,	// (0x00080cb9) bg_button_pane_cp69_ParamLimits

0x4b70,	// (0x00080cb9) bg_button_pane_cp69

0xaaf7,	// (0x00086c40) cell_afind_pane_g1_ParamLimits

0xaaf7,	// (0x00086c40) cell_afind_pane_g1

0xab04,	// (0x00086c4d) cell_afind_pane_t1_ParamLimits

0xab04,	// (0x00086c4d) cell_afind_pane_t1

0xe76c,	// (0x0008a8b5) bg_button_pane_cp72

0x26a3,	// (0x0007e7ec) cell_afind_grid_control_pane_g1

0x862d,	// (0x00084776) aid_image_placing_area_ParamLimits

0x862d,	// (0x00084776) aid_image_placing_area

0xe530,	// (0x0008a679) field_vitu_entry_pane_g1_ParamLimits

0xe530,	// (0x0008a679) field_vitu_entry_pane_g1

0xe530,	// (0x0008a679) field_vitu_entry_pane_g2_ParamLimits

0xe530,	// (0x0008a679) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0008b34a) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0008b34a) field_vitu_entry_pane_g

0x48f2,	// (0x00080a3b) cell_vitu_itu_pane_g1_ParamLimits

0x4853,	// (0x0008099c) cell_vitu_itu_pane_t3_ParamLimits

0x4853,	// (0x0008099c) cell_vitu_itu_pane_t3

0x4b0b,	// (0x00080c54) mp4_progress_pane_t1_ParamLimits

0x4b24,	// (0x00080c6d) mp4_progress_pane_t2_ParamLimits

0xf83c,	// (0x0008b985) mp4_progress_pane_t_ParamLimits

0x4b3d,	// (0x00080c86) mup_progress_pane_cp04_ParamLimits

0xaa06,	// (0x00086b4f) main_myfav_hc_pane_t5_ParamLimits

0xaa06,	// (0x00086b4f) main_myfav_hc_pane_t5

0x59c6,	// (0x00081b0f) aid_zoom_text_primary

0x5c6d,	// (0x00081db6) popup_adpt_find_window_ParamLimits

0x8b0b,	// (0x00084c54) main_cam_set_pane

0xa4a7,	// (0x000865f0) cam4_zoom_pane_ParamLimits

0xa4a7,	// (0x000865f0) cam4_zoom_pane

0xab16,	// (0x00086c5f) main_cam_set_pane_g1_ParamLimits

0xab16,	// (0x00086c5f) main_cam_set_pane_g1

0xab24,	// (0x00086c6d) main_cam_set_pane_g2_ParamLimits

0xab24,	// (0x00086c6d) main_cam_set_pane_g2

0x0001,

0xf8fd,	// (0x0008ba46) main_cam_set_pane_g_ParamLimits

0xf8fd,	// (0x0008ba46) main_cam_set_pane_g

0xab30,	// (0x00086c79) main_cam_set_pane_t1_ParamLimits

0xab30,	// (0x00086c79) main_cam_set_pane_t1

0xab4c,	// (0x00086c95) main_cset_listscroll_pane_ParamLimits

0xab4c,	// (0x00086c95) main_cset_listscroll_pane

0xab80,	// (0x00086cc9) main_cset_slider_pane_ParamLimits

0xab80,	// (0x00086cc9) main_cset_slider_pane

0x26b4,	// (0x0007e7fd) main_cset_list_pane_ParamLimits

0x26b4,	// (0x0007e7fd) main_cset_list_pane

0x26c4,	// (0x0007e80d) scroll_pane_cp028

0xaba1,	// (0x00086cea) aid_area_touch_slider

0xabbd,	// (0x00086d06) cset_slider_pane

0xabe0,	// (0x00086d29) main_cset_slider_pane_g1

0xabf5,	// (0x00086d3e) main_cset_slider_pane_g2

0x0011,

0xf902,	// (0x0008ba4b) main_cset_slider_pane_g

0x26fd,	// (0x0007e846) main_cset_slider_pane_t1

0xacb1,	// (0x00086dfa) main_cset_slider_pane_t2

0xaccb,	// (0x00086e14) main_cset_slider_pane_t3

0xace5,	// (0x00086e2e) main_cset_slider_pane_t4

0xacff,	// (0x00086e48) main_cset_slider_pane_t5

0xad19,	// (0x00086e62) main_cset_slider_pane_t6

0xad2e,	// (0x00086e77) main_cset_slider_pane_t7

0x000e,

0xf927,	// (0x0008ba70) main_cset_slider_pane_t

0xae32,	// (0x00086f7b) cset_list_set_pane_ParamLimits

0xae32,	// (0x00086f7b) cset_list_set_pane

0x2797,	// (0x0007e8e0) aid_position_infowindow_above

0x279f,	// (0x0007e8e8) aid_position_infowindow_below

0xae43,	// (0x00086f8c) cset_list_set_pane_g1_ParamLimits

0xae43,	// (0x00086f8c) cset_list_set_pane_g1

0xae4f,	// (0x00086f98) cset_list_set_pane_g3_ParamLimits

0xae4f,	// (0x00086f98) cset_list_set_pane_g3

0x0001,

0xf946,	// (0x0008ba8f) cset_list_set_pane_g_ParamLimits

0xf946,	// (0x0008ba8f) cset_list_set_pane_g

0xae5e,	// (0x00086fa7) cset_list_set_pane_t1_ParamLimits

0xae5e,	// (0x00086fa7) cset_list_set_pane_t1

0xe4c9,	// (0x0008a612) list_highlight_pane_cp021_ParamLimits

0xe4c9,	// (0x0008a612) list_highlight_pane_cp021

0x085a,	// (0x0007c9a3) cset_slider_pane_g1

0x086c,	// (0x0007c9b5) cset_slider_pane_g2

0x0863,	// (0x0007c9ac) cset_slider_pane_g3

0x0002,

0xf94b,	// (0x0008ba94) cset_slider_pane_g

0xee44,	// (0x0008af8d) aid_area_touch_cam4_zoom

0xae73,	// (0x00086fbc) cam4_zoom_cont_pane

0xae7b,	// (0x00086fc4) cam4_zoom_pane_g1

0xae83,	// (0x00086fcc) cam4_zoom_pane_g2

0xae8b,	// (0x00086fd4) cam4_zoom_pane_g3

0x0002,

0xf952,	// (0x0008ba9b) cam4_zoom_pane_g

0xae93,	// (0x00086fdc) cam4_zoom_cont_pane_g1

0xae9c,	// (0x00086fe5) cam4_zoom_cont_pane_g2

0xaea5,	// (0x00086fee) cam4_zoom_cont_pane_g3

0x0002,

0xf959,	// (0x0008baa2) cam4_zoom_cont_pane_g

0xa2c7,	// (0x00086410) call4_image_pane_ParamLimits

0xa2c7,	// (0x00086410) call4_image_pane

0xa328,	// (0x00086471) call4_windows_conf_pane_ParamLimits

0xa36f,	// (0x000864b8) popup_call4_audio_in_window_ParamLimits

0xa36f,	// (0x000864b8) popup_call4_audio_in_window

0xddfa,	// (0x00089f43) bg_popup_call2_act_pane_cp02

0x4b7c,	// (0x00080cc5) call4_list_conf_pane

0xe762,	// (0x0008a8ab) call4_image_pane_g1

0xe762,	// (0x0008a8ab) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x0008b526) call4_image_pane_g

0x27b0,	// (0x0007e8f9) list_single_graphic_popup_conf4_pane_ParamLimits

0x27b0,	// (0x0007e8f9) list_single_graphic_popup_conf4_pane

0xddfa,	// (0x00089f43) list_highlight_pane_cp022

0x27c5,	// (0x0007e90e) list_single_graphic_popup_conf4_pane_g1

0xee9d,	// (0x0008afe6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf960,	// (0x0008baa9) list_single_graphic_popup_conf4_pane_g

0x27cd,	// (0x0007e916) list_single_graphic_popup_conf4_pane_t1

0x6b95,	// (0x00082cde) popup_vtel_slider_window_ParamLimits

0x6b95,	// (0x00082cde) popup_vtel_slider_window

0x4b5e,	// (0x00080ca7) dialer2_ne_pane_t2_ParamLimits

0x4b5e,	// (0x00080ca7) dialer2_ne_pane_t2

0x0001,

0xf841,	// (0x0008b98a) dialer2_ne_pane_t_ParamLimits

0xf841,	// (0x0008b98a) dialer2_ne_pane_t

0xe4c9,	// (0x0008a612) bg_popup_sub_pane_cp010_ParamLimits

0xe4c9,	// (0x0008a612) bg_popup_sub_pane_cp010

0xaeae,	// (0x00086ff7) popup_vtel_slider_window_g1_ParamLimits

0xaeae,	// (0x00086ff7) popup_vtel_slider_window_g1

0xaeba,	// (0x00087003) popup_vtel_slider_window_g2_ParamLimits

0xaeba,	// (0x00087003) popup_vtel_slider_window_g2

0x0003,

0xf965,	// (0x0008baae) popup_vtel_slider_window_g_ParamLimits

0xf965,	// (0x0008baae) popup_vtel_slider_window_g

0xaf02,	// (0x0008704b) vtel_slider_pane_ParamLimits

0xaf02,	// (0x0008704b) vtel_slider_pane

0xaf11,	// (0x0008705a) vtel_slider_pane_g1_ParamLimits

0xaf11,	// (0x0008705a) vtel_slider_pane_g1

0xaf1e,	// (0x00087067) vtel_slider_pane_g2_ParamLimits

0xaf1e,	// (0x00087067) vtel_slider_pane_g2

0xaf2b,	// (0x00087074) vtel_slider_pane_g3_ParamLimits

0xaf2b,	// (0x00087074) vtel_slider_pane_g3

0xaf11,	// (0x0008705a) vtel_slider_pane_g4_ParamLimits

0xaf11,	// (0x0008705a) vtel_slider_pane_g4

0xaf38,	// (0x00087081) vtel_slider_pane_g5_ParamLimits

0xaf38,	// (0x00087081) vtel_slider_pane_g5

0x0004,

0xf96e,	// (0x0008bab7) vtel_slider_pane_g_ParamLimits

0xf96e,	// (0x0008bab7) vtel_slider_pane_g

0x8b0b,	// (0x00084c54) main_gallery2_pane

0xa6ef,	// (0x00086838) aid_size_row_itut2_dropdow_list_ParamLimits

0xa6ef,	// (0x00086838) aid_size_row_itut2_dropdow_list

0xa759,	// (0x000868a2) grid_vitu2_function_top_pane_ParamLimits

0xa759,	// (0x000868a2) grid_vitu2_function_top_pane

0xa7a9,	// (0x000868f2) popup_vitu2_dropdown_list_window_ParamLimits

0xa7a9,	// (0x000868f2) popup_vitu2_dropdown_list_window

0xa7c7,	// (0x00086910) popup_vitu2_match_list_window

0xaf45,	// (0x0008708e) cell_vitu2_function_top_pane_ParamLimits

0xaf45,	// (0x0008708e) cell_vitu2_function_top_pane

0xaf5f,	// (0x000870a8) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaf5f,	// (0x000870a8) cell_vitu2_function_top_pane_cp01

0xaf7b,	// (0x000870c4) cell_vitu2_function_top_wide_pane_ParamLimits

0xaf7b,	// (0x000870c4) cell_vitu2_function_top_wide_pane

0x8b0b,	// (0x00084c54) bg_button_pane_cp012

0xaf99,	// (0x000870e2) cell_vitu2_function_top_pane_g1

0xafad,	// (0x000870f6) bg_button_pane_cp013_ParamLimits

0xafad,	// (0x000870f6) bg_button_pane_cp013

0xafc9,	// (0x00087112) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xafc9,	// (0x00087112) cell_vitu2_function_top_wide_pane_g1

0x5d65,	// (0x00081eae) bg_popup_sub_pane_cp20

0xafe1,	// (0x0008712a) list_vitu2_match_list_pane

0x25a6,	// (0x0007e6ef) bg_popup_sub_pane_cp20_g1

0x25ae,	// (0x0007e6f7) bg_popup_sub_pane_cp20_g2

0xe98b,	// (0x0008aad4) bg_popup_sub_pane_cp20_g3

0x25b6,	// (0x0007e6ff) bg_popup_sub_pane_cp20_g4

0xe96b,	// (0x0008aab4) bg_popup_sub_pane_cp20_g5

0x27e3,	// (0x0007e92c) bg_popup_sub_pane_cp20_g6

0x25c6,	// (0x0007e70f) bg_popup_sub_pane_cp20_g7

0x25ce,	// (0x0007e717) bg_popup_sub_pane_cp20_g8

0x25d6,	// (0x0007e71f) bg_popup_sub_pane_cp20_g9

0x0008,

0xf979,	// (0x0008bac2) bg_popup_sub_pane_cp20_g

0xaff9,	// (0x00087142) list_vitu2_match_list_item_pane_ParamLimits

0xaff9,	// (0x00087142) list_vitu2_match_list_item_pane

0xb00b,	// (0x00087154) list_vitu2_match_list_item_pane_t1

0x5d7f,	// (0x00081ec8) bg_popup_sub_pane_cp21

0xe740,	// (0x0008a889) grid_vitu2_dropdown_list_pane

0xb019,	// (0x00087162) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb019,	// (0x00087162) cell_vitu2_dropdown_list_char_pane

0xb03e,	// (0x00087187) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb03e,	// (0x00087187) cell_vitu2_dropdown_list_ctrl_pane

0x27fd,	// (0x0007e946) cell_vitu2_dropdown_list_char_pane_g1

0x27f4,	// (0x0007e93d) cell_vitu2_dropdown_list_char_pane_g2

0x27eb,	// (0x0007e934) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf98c,	// (0x0008bad5) cell_vitu2_dropdown_list_char_pane_g

0xb06a,	// (0x000871b3) cell_vitu2_dropdown_list_char_pane_t1

0xb078,	// (0x000871c1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb078,	// (0x000871c1) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb088,	// (0x000871d1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb088,	// (0x000871d1) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb099,	// (0x000871e2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb099,	// (0x000871e2) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb0a9,	// (0x000871f2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb0a9,	// (0x000871f2) cell_vitu2_dropdown_list_ctrl_pane_g4

0x373e,	// (0x0007f887) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x373e,	// (0x0007f887) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf993,	// (0x0008badc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf993,	// (0x0008badc) cell_vitu2_dropdown_list_ctrl_pane_g

0xb0c2,	// (0x0008720b) aid_size_cell_gallery2_ParamLimits

0xb0c2,	// (0x0008720b) aid_size_cell_gallery2

0xb0dc,	// (0x00087225) grid_gallery2_pane_ParamLimits

0xb0dc,	// (0x00087225) grid_gallery2_pane

0xb0f3,	// (0x0008723c) scroll_pane_cp029_ParamLimits

0xb0f3,	// (0x0008723c) scroll_pane_cp029

0xb103,	// (0x0008724c) cell_gallery2_pane_ParamLimits

0xb103,	// (0x0008724c) cell_gallery2_pane

0x2806,	// (0x0007e94f) cell_gallery2_pane_g2

0xb15a,	// (0x000872a3) cell_gallery2_pane_g3

0x280e,	// (0x0007e957) cell_gallery2_pane_g4

0x2816,	// (0x0007e95f) cell_gallery2_pane_g5

0xe740,	// (0x0008a889) grid_highlight_pane_cp10

0xa7c7,	// (0x00086910) popup_vitu2_match_list_window_ParamLimits

0xa6fd,	// (0x00086846) popup_vitu2_query_window_ParamLimits

0xa6fd,	// (0x00086846) popup_vitu2_query_window

0x5d7f,	// (0x00081ec8) bg_vitu2_candi_button_pane

0x27fd,	// (0x0007e946) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x27f4,	// (0x0007e93d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x27eb,	// (0x0007e934) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb162,	// (0x000872ab) bg_button_pane_cp015

0xb174,	// (0x000872bd) bg_button_pane_cp016

0xb187,	// (0x000872d0) bg_button_pane_cp017

0x07e8,	// (0x0007c931) bg_popup_sub_pane_cp22

0x281e,	// (0x0007e967) popup_vitu2_query_window_g1

0xb1cc,	// (0x00087315) popup_vitu2_query_window_g2

0x0002,

0xf99e,	// (0x0008bae7) popup_vitu2_query_window_g

0xb1e9,	// (0x00087332) popup_vitu2_query_window_t1_ParamLimits

0xb1e9,	// (0x00087332) popup_vitu2_query_window_t1

0xb21c,	// (0x00087365) popup_vitu2_query_window_t2_ParamLimits

0xb21c,	// (0x00087365) popup_vitu2_query_window_t2

0xb22e,	// (0x00087377) popup_vitu2_query_window_t3_ParamLimits

0xb22e,	// (0x00087377) popup_vitu2_query_window_t3

0xb256,	// (0x0008739f) popup_vitu2_query_window_t4_ParamLimits

0xb256,	// (0x0008739f) popup_vitu2_query_window_t4

0xb279,	// (0x000873c2) popup_vitu2_query_window_t5_ParamLimits

0xb279,	// (0x000873c2) popup_vitu2_query_window_t5

0x0006,

0xf9a5,	// (0x0008baee) popup_vitu2_query_window_t_ParamLimits

0xf9a5,	// (0x0008baee) popup_vitu2_query_window_t

0x26ac,	// (0x0007e7f5) main_cset_text_pane

0xaba1,	// (0x00086cea) aid_area_touch_slider_ParamLimits

0xabbd,	// (0x00086d06) cset_slider_pane_ParamLimits

0xabe0,	// (0x00086d29) main_cset_slider_pane_g1_ParamLimits

0xabf5,	// (0x00086d3e) main_cset_slider_pane_g2_ParamLimits

0x26cd,	// (0x0007e816) main_cset_slider_pane_g3_ParamLimits

0x26cd,	// (0x0007e816) main_cset_slider_pane_g3

0xac0a,	// (0x00086d53) main_cset_slider_pane_g4_ParamLimits

0xac0a,	// (0x00086d53) main_cset_slider_pane_g4

0xac19,	// (0x00086d62) main_cset_slider_pane_g5_ParamLimits

0xac19,	// (0x00086d62) main_cset_slider_pane_g5

0xac25,	// (0x00086d6e) main_cset_slider_pane_g6_ParamLimits

0xac25,	// (0x00086d6e) main_cset_slider_pane_g6

0xf902,	// (0x0008ba4b) main_cset_slider_pane_g_ParamLimits

0x26fd,	// (0x0007e846) main_cset_slider_pane_t1_ParamLimits

0xacb1,	// (0x00086dfa) main_cset_slider_pane_t2_ParamLimits

0xaccb,	// (0x00086e14) main_cset_slider_pane_t3_ParamLimits

0xace5,	// (0x00086e2e) main_cset_slider_pane_t4_ParamLimits

0xacff,	// (0x00086e48) main_cset_slider_pane_t5_ParamLimits

0xad19,	// (0x00086e62) main_cset_slider_pane_t6_ParamLimits

0xad2e,	// (0x00086e77) main_cset_slider_pane_t7_ParamLimits

0xad58,	// (0x00086ea1) main_cset_slider_pane_t8_ParamLimits

0xad58,	// (0x00086ea1) main_cset_slider_pane_t8

0xad80,	// (0x00086ec9) main_cset_slider_pane_t9_ParamLimits

0xad80,	// (0x00086ec9) main_cset_slider_pane_t9

0xada8,	// (0x00086ef1) main_cset_slider_pane_t10_ParamLimits

0xada8,	// (0x00086ef1) main_cset_slider_pane_t10

0xadd0,	// (0x00086f19) main_cset_slider_pane_t11_ParamLimits

0xadd0,	// (0x00086f19) main_cset_slider_pane_t11

0xadf8,	// (0x00086f41) main_cset_slider_pane_t12_ParamLimits

0xadf8,	// (0x00086f41) main_cset_slider_pane_t12

0xae15,	// (0x00086f5e) main_cset_slider_pane_t13_ParamLimits

0xae15,	// (0x00086f5e) main_cset_slider_pane_t13

0xf927,	// (0x0008ba70) main_cset_slider_pane_t_ParamLimits

0xddfa,	// (0x00089f43) bg_popup_sub_pane_cp011

0x282a,	// (0x0007e973) main_cset_text_pane_g1

0x2832,	// (0x0007e97b) main_cset_text_pane_t1

0x2840,	// (0x0007e989) main_cset_text_pane_t2

0x284e,	// (0x0007e997) main_cset_text_pane_t3

0x285c,	// (0x0007e9a5) main_cset_text_pane_t4

0x286a,	// (0x0007e9b3) main_cset_text_pane_t5

0x2878,	// (0x0007e9c1) main_cset_text_pane_t6

0x2886,	// (0x0007e9cf) main_cset_text_pane_t7

0x0006,

0xf9b4,	// (0x0008bafd) main_cset_text_pane_t

0x5d7f,	// (0x00081ec8) main_cam4_burst_pane

0x5d7f,	// (0x00081ec8) main_cam5_pane

0xaae5,	// (0x00086c2e) bg_button_pane_cp019

0xaaee,	// (0x00086c37) bg_button_pane_cp020

0x26d9,	// (0x0007e822) main_cset_slider_pane_g7_ParamLimits

0x26d9,	// (0x0007e822) main_cset_slider_pane_g7

0x26e5,	// (0x0007e82e) main_cset_slider_pane_g8_ParamLimits

0x26e5,	// (0x0007e82e) main_cset_slider_pane_g8

0xac39,	// (0x00086d82) main_cset_slider_pane_g9_ParamLimits

0xac39,	// (0x00086d82) main_cset_slider_pane_g9

0xac45,	// (0x00086d8e) main_cset_slider_pane_g10_ParamLimits

0xac45,	// (0x00086d8e) main_cset_slider_pane_g10

0xac51,	// (0x00086d9a) main_cset_slider_pane_g11_ParamLimits

0xac51,	// (0x00086d9a) main_cset_slider_pane_g11

0xac5d,	// (0x00086da6) main_cset_slider_pane_g12_ParamLimits

0xac5d,	// (0x00086da6) main_cset_slider_pane_g12

0xac69,	// (0x00086db2) main_cset_slider_pane_g13_ParamLimits

0xac69,	// (0x00086db2) main_cset_slider_pane_g13

0xac75,	// (0x00086dbe) main_cset_slider_pane_g14_ParamLimits

0xac75,	// (0x00086dbe) main_cset_slider_pane_g14

0xac81,	// (0x00086dca) main_cset_slider_pane_g15_ParamLimits

0xac81,	// (0x00086dca) main_cset_slider_pane_g15

0x2725,	// (0x0007e86e) main_cset_slider_pane_t14_ParamLimits

0x2725,	// (0x0007e86e) main_cset_slider_pane_t14

0x275e,	// (0x0007e8a7) main_cset_slider_pane_t15_ParamLimits

0x275e,	// (0x0007e8a7) main_cset_slider_pane_t15

0xb2f2,	// (0x0008743b) aid_cam4_burst_size_cell_ParamLimits

0xb2f2,	// (0x0008743b) aid_cam4_burst_size_cell

0xb30e,	// (0x00087457) grid_cam4_burst_pane_ParamLimits

0xb30e,	// (0x00087457) grid_cam4_burst_pane

0xb340,	// (0x00087489) linegrid_cam4_burst_pane_ParamLimits

0xb340,	// (0x00087489) linegrid_cam4_burst_pane

0xb35e,	// (0x000874a7) scroll_pane_cp30_ParamLimits

0xb35e,	// (0x000874a7) scroll_pane_cp30

0xb36a,	// (0x000874b3) cell_cam4_burst_pane_ParamLimits

0xb36a,	// (0x000874b3) cell_cam4_burst_pane

0x28a0,	// (0x0007e9e9) linegrid_cam4_burst_pane_g1_ParamLimits

0x28a0,	// (0x0007e9e9) linegrid_cam4_burst_pane_g1

0xb3aa,	// (0x000874f3) linegrid_cam4_burst_pane_g2_ParamLimits

0xb3aa,	// (0x000874f3) linegrid_cam4_burst_pane_g2

0x28ad,	// (0x0007e9f6) linegrid_cam4_burst_pane_g3_ParamLimits

0x28ad,	// (0x0007e9f6) linegrid_cam4_burst_pane_g3

0x0002,

0xf9c3,	// (0x0008bb0c) linegrid_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x0008bb0c) linegrid_cam4_burst_pane_g

0xb3bb,	// (0x00087504) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb3bb,	// (0x00087504) linegrid_cam4_burst_pane_g3_copy1

0x28ba,	// (0x0007ea03) linegrid_cam4_burst_pane_g4_ParamLimits

0x28ba,	// (0x0007ea03) linegrid_cam4_burst_pane_g4

0xb3d5,	// (0x0008751e) linegrid_cam4_burst_pane_g5_ParamLimits

0xb3d5,	// (0x0008751e) linegrid_cam4_burst_pane_g5

0xb3e6,	// (0x0008752f) linegrid_cam4_burst_pane_g6_ParamLimits

0xb3e6,	// (0x0008752f) linegrid_cam4_burst_pane_g6

0x28c7,	// (0x0007ea10) linegrid_cam4_burst_pane_g7_ParamLimits

0x28c7,	// (0x0007ea10) linegrid_cam4_burst_pane_g7

0xb3fd,	// (0x00087546) cell_cam4_burst_pane_g1

0x28e0,	// (0x0007ea29) main_cam5_pane_t1_ParamLimits

0x28e0,	// (0x0007ea29) main_cam5_pane_t1

0x28f2,	// (0x0007ea3b) main_cam5_pane_t2_ParamLimits

0x28f2,	// (0x0007ea3b) main_cam5_pane_t2

0x2904,	// (0x0007ea4d) main_cam5_pane_t3_ParamLimits

0x2904,	// (0x0007ea4d) main_cam5_pane_t3

0x2916,	// (0x0007ea5f) main_cam5_pane_t4_ParamLimits

0x2916,	// (0x0007ea5f) main_cam5_pane_t4

0x292e,	// (0x0007ea77) main_cam5_pane_t5_ParamLimits

0x292e,	// (0x0007ea77) main_cam5_pane_t5

0x2942,	// (0x0007ea8b) main_cam5_pane_t6_ParamLimits

0x2942,	// (0x0007ea8b) main_cam5_pane_t6

0x2956,	// (0x0007ea9f) main_cam5_pane_t7_ParamLimits

0x2956,	// (0x0007ea9f) main_cam5_pane_t7

0x2968,	// (0x0007eab1) main_cam5_pane_t8_ParamLimits

0x2968,	// (0x0007eab1) main_cam5_pane_t8

0x2986,	// (0x0007eacf) main_cam5_pane_t9_ParamLimits

0x2986,	// (0x0007eacf) main_cam5_pane_t9

0x2998,	// (0x0007eae1) main_cam5_pane_t10_ParamLimits

0x2998,	// (0x0007eae1) main_cam5_pane_t10

0x29aa,	// (0x0007eaf3) main_cam5_pane_t11_ParamLimits

0x29aa,	// (0x0007eaf3) main_cam5_pane_t11

0x29be,	// (0x0007eb07) main_cam5_pane_t12_ParamLimits

0x29be,	// (0x0007eb07) main_cam5_pane_t12

0x29d5,	// (0x0007eb1e) main_cam5_pane_t13_ParamLimits

0x29d5,	// (0x0007eb1e) main_cam5_pane_t13

0x000c,

0xf9cf,	// (0x0008bb18) main_cam5_pane_t_ParamLimits

0xf9cf,	// (0x0008bb18) main_cam5_pane_t

0x5d24,	// (0x00081e6d) popup_scut_keymap_window_ParamLimits

0x5d24,	// (0x00081e6d) popup_scut_keymap_window

0xb410,	// (0x00087559) aid_size_cell_brow_shortcut

0xe740,	// (0x0008a889) bg_popup_window_pane_cp010

0xb41c,	// (0x00087565) grid_scut_pane

0xb428,	// (0x00087571) cell_scut_pane_ParamLimits

0xb428,	// (0x00087571) cell_scut_pane

0xb443,	// (0x0008758c) cell_scut_pane_g1

0x29f8,	// (0x0007eb41) cell_scut_pane_t1

0x2a07,	// (0x0007eb50) cell_scut_pane_t2

0xb44c,	// (0x00087595) cell_scut_pane_t3

0x0002,

0xf9ea,	// (0x0008bb33) cell_scut_pane_t

0x93f8,	// (0x00085541) main_mup3_pane_g8_ParamLimits

0x93f8,	// (0x00085541) main_mup3_pane_g8

0xa6fd,	// (0x00086846) area_vitu2_query_pane_ParamLimits

0xa6fd,	// (0x00086846) area_vitu2_query_pane

0xb19a,	// (0x000872e3) input_focus_pane_cp08

0x2a16,	// (0x0007eb5f) area_vitu2_query_pane_g1

0xb45a,	// (0x000875a3) area_vitu2_query_pane_g2

0x0001,

0xf9f1,	// (0x0008bb3a) area_vitu2_query_pane_g

0xb46b,	// (0x000875b4) area_vitu2_query_pane_t1_ParamLimits

0xb46b,	// (0x000875b4) area_vitu2_query_pane_t1

0xb481,	// (0x000875ca) area_vitu2_query_pane_t2_ParamLimits

0xb481,	// (0x000875ca) area_vitu2_query_pane_t2

0xb497,	// (0x000875e0) area_vitu2_query_pane_t3_ParamLimits

0xb497,	// (0x000875e0) area_vitu2_query_pane_t3

0x2a22,	// (0x0007eb6b) area_vitu2_query_pane_t4_ParamLimits

0x2a22,	// (0x0007eb6b) area_vitu2_query_pane_t4

0x2a4a,	// (0x0007eb93) area_vitu2_query_pane_t5_ParamLimits

0x2a4a,	// (0x0007eb93) area_vitu2_query_pane_t5

0x2a72,	// (0x0007ebbb) area_vitu2_query_pane_t6_ParamLimits

0x2a72,	// (0x0007ebbb) area_vitu2_query_pane_t6

0x0006,

0xf9f6,	// (0x0008bb3f) area_vitu2_query_pane_t_ParamLimits

0xf9f6,	// (0x0008bb3f) area_vitu2_query_pane_t

0xb4bf,	// (0x00087608) bg_button_pane_cp018

0xb4cd,	// (0x00087616) bg_button_pane_cp021

0xb4d9,	// (0x00087622) bg_button_pane_cp022

0xb4ea,	// (0x00087633) input_focus_pane_cp09

0x7eda,	// (0x00084023) aid_size_touch_mv_arrow_left

0x7f05,	// (0x0008404e) aid_size_touch_mv_arrow_right

0xac99,	// (0x00086de2) main_cset_slider_pane_g16_ParamLimits

0xac99,	// (0x00086de2) main_cset_slider_pane_g16

0xaca5,	// (0x00086dee) main_cset_slider_pane_g17_ParamLimits

0xaca5,	// (0x00086dee) main_cset_slider_pane_g17

0xb3fd,	// (0x00087546) cell_cam4_burst_pane_g1_ParamLimits

0xddfa,	// (0x00089f43) compa_mode_pane

0xaec6,	// (0x0008700f) popup_vtel_slider_window_g3_ParamLimits

0xaec6,	// (0x0008700f) popup_vtel_slider_window_g3

0xaeda,	// (0x00087023) popup_vtel_slider_window_g4_ParamLimits

0xaeda,	// (0x00087023) popup_vtel_slider_window_g4

0xaeee,	// (0x00087037) popup_vtel_slider_window_t1_ParamLimits

0xaeee,	// (0x00087037) popup_vtel_slider_window_t1

0x5d7f,	// (0x00081ec8) main_cl_pane

0x8bc1,	// (0x00084d0a) popup_imed_adjust2_window_ParamLimits

0x07e8,	// (0x0007c931) bg_tb_trans_pane_cp05_ParamLimits

0x24c6,	// (0x0007e60f) popup_imed_adjust2_window_g1_ParamLimits

0x24d5,	// (0x0007e61e) popup_imed_adjust2_window_g2_ParamLimits

0x24d5,	// (0x0007e61e) popup_imed_adjust2_window_g2

0x24e1,	// (0x0007e62a) popup_imed_adjust2_window_g3_ParamLimits

0x24e1,	// (0x0007e62a) popup_imed_adjust2_window_g3

0x0002,

0xf76c,	// (0x0008b8b5) popup_imed_adjust2_window_g_ParamLimits

0xf76c,	// (0x0008b8b5) popup_imed_adjust2_window_g

0x24ed,	// (0x0007e636) popup_imed_adjust2_window_t1_ParamLimits

0x2505,	// (0x0007e64e) slider_imed_adjust_pane_ParamLimits

0x4870,	// (0x000809b9) slider_imed_adjust_pane_g1_ParamLimits

0x4880,	// (0x000809c9) slider_imed_adjust_pane_g2_ParamLimits

0x4890,	// (0x000809d9) slider_imed_adjust_pane_g3_ParamLimits

0x48a1,	// (0x000809ea) slider_imed_adjust_pane_g4_ParamLimits

0xf773,	// (0x0008b8bc) slider_imed_adjust_pane_g_ParamLimits

0xa450,	// (0x00086599) aid_touch_area_cam4_ParamLimits

0xa450,	// (0x00086599) aid_touch_area_cam4

0xa460,	// (0x000865a9) battery_pane_cp01

0xa4e7,	// (0x00086630) main_camera4_pane_g6_ParamLimits

0xa4e7,	// (0x00086630) main_camera4_pane_g6

0xa505,	// (0x0008664e) main_camera4_pane_t2_ParamLimits

0xa505,	// (0x0008664e) main_camera4_pane_t2

0x0001,

0xf875,	// (0x0008b9be) main_camera4_pane_t_ParamLimits

0xf875,	// (0x0008b9be) main_camera4_pane_t

0xa588,	// (0x000866d1) aid_touch_area_vid4_ParamLimits

0xa588,	// (0x000866d1) aid_touch_area_vid4

0xa5c8,	// (0x00086711) main_video4_pane_g5_ParamLimits

0xa5c8,	// (0x00086711) main_video4_pane_g5

0xa5ee,	// (0x00086737) vid4_progress_pane_ParamLimits

0xa5ee,	// (0x00086737) vid4_progress_pane

0x26f1,	// (0x0007e83a) main_cset_slider_pane_g18_ParamLimits

0x26f1,	// (0x0007e83a) main_cset_slider_pane_g18

0x28d4,	// (0x0007ea1d) cell_cam4_burst_pane_g2_ParamLimits

0x28d4,	// (0x0007ea1d) cell_cam4_burst_pane_g2

0x0001,

0xf9ca,	// (0x0008bb13) cell_cam4_burst_pane_g_ParamLimits

0xf9ca,	// (0x0008bb13) cell_cam4_burst_pane_g

0xb4fb,	// (0x00087644) bg_cl_pane_ParamLimits

0xb4fb,	// (0x00087644) bg_cl_pane

0xb507,	// (0x00087650) cl_header_pane_ParamLimits

0xb507,	// (0x00087650) cl_header_pane

0xb513,	// (0x0008765c) cl_listscroll_pane_ParamLimits

0xb513,	// (0x0008765c) cl_listscroll_pane

0x2abe,	// (0x0007ec07) bg_cl_pane_g1

0x2ac6,	// (0x0007ec0f) bg_cl_pane_g2

0x2ace,	// (0x0007ec17) bg_cl_pane_g3

0x2ad6,	// (0x0007ec1f) bg_cl_pane_g4

0x2ade,	// (0x0007ec27) bg_cl_pane_g5

0x2ae6,	// (0x0007ec2f) bg_cl_pane_g6

0x2aee,	// (0x0007ec37) bg_cl_pane_g7

0x2af6,	// (0x0007ec3f) bg_cl_pane_g8

0x2afe,	// (0x0007ec47) bg_cl_pane_g9

0x0008,

0xfa05,	// (0x0008bb4e) bg_cl_pane_g

0xb51f,	// (0x00087668) aid_height_cl_leading_ParamLimits

0xb51f,	// (0x00087668) aid_height_cl_leading

0xb52b,	// (0x00087674) aid_height_cl_text_ParamLimits

0xb52b,	// (0x00087674) aid_height_cl_text

0xe522,	// (0x0008a66b) bg_cl_header_pane_ParamLimits

0xe522,	// (0x0008a66b) bg_cl_header_pane

0xb543,	// (0x0008768c) cl_header_pane_g1_ParamLimits

0xb543,	// (0x0008768c) cl_header_pane_g1

0xb550,	// (0x00087699) cl_header_pane_t1_ParamLimits

0xb550,	// (0x00087699) cl_header_pane_t1

0x2b06,	// (0x0007ec4f) cl_list_pane

0x26c4,	// (0x0007e80d) hc_scroll_pane_cp01

0xe96b,	// (0x0008aab4) bg_cl_header_pane_g1

0x25a6,	// (0x0007e6ef) bg_cl_header_pane_g2

0xe98b,	// (0x0008aad4) bg_cl_header_pane_g3

0x25b6,	// (0x0007e6ff) bg_cl_header_pane_g4

0x25ae,	// (0x0007e6f7) bg_cl_header_pane_g5

0x27e3,	// (0x0007e92c) bg_cl_header_pane_g6

0x25ce,	// (0x0007e717) bg_cl_header_pane_g7

0x25d6,	// (0x0007e71f) bg_cl_header_pane_g8

0x25c6,	// (0x0007e70f) bg_cl_header_pane_g9

0x0008,

0xfa18,	// (0x0008bb61) bg_cl_header_pane_g

0xb562,	// (0x000876ab) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb562,	// (0x000876ab) hc_cl_list_double_graphic_heading_pane

0xb572,	// (0x000876bb) hc_cl_list_single_graphic_pane_ParamLimits

0xb572,	// (0x000876bb) hc_cl_list_single_graphic_pane

0xb584,	// (0x000876cd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb584,	// (0x000876cd) hc_cl_list_single_graphic_pane_g1

0xb590,	// (0x000876d9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb590,	// (0x000876d9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa2b,	// (0x0008bb74) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa2b,	// (0x0008bb74) hc_cl_list_single_graphic_pane_g

0xb5a4,	// (0x000876ed) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb5a4,	// (0x000876ed) hc_cl_list_single_graphic_pane_t1

0xb584,	// (0x000876cd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb584,	// (0x000876cd) hc_cl_list_double_graphic_heading_pane_g1

0xb5b9,	// (0x00087702) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb5b9,	// (0x00087702) hc_cl_list_double_graphic_heading_pane_g2

0xb5cd,	// (0x00087716) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb5cd,	// (0x00087716) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa30,	// (0x0008bb79) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa30,	// (0x0008bb79) hc_cl_list_double_graphic_heading_pane_g

0xb5e1,	// (0x0008772a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb5e1,	// (0x0008772a) hc_cl_list_double_graphic_heading_pane_t1

0xb5f6,	// (0x0008773f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb5f6,	// (0x0008773f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa37,	// (0x0008bb80) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa37,	// (0x0008bb80) hc_cl_list_double_graphic_heading_pane_t

0xb613,	// (0x0008775c) vid4_progress_pane_g1

0xb623,	// (0x0008776c) vid4_progress_pane_g2

0xb633,	// (0x0008777c) vid4_progress_pane_g3

0xb645,	// (0x0008778e) vid4_progress_pane_g4

0x0004,

0xfa3c,	// (0x0008bb85) vid4_progress_pane_g

0xb663,	// (0x000877ac) vid4_progress_pane_t1

0xb67d,	// (0x000877c6) vid4_progress_pane_t2

0x0002,

0xfa47,	// (0x0008bb90) vid4_progress_pane_t

0xb6a7,	// (0x000877f0) wait_bar_pane_cp07

0x1e0f,	// (0x0007df58) blid_firmament_pane_ParamLimits

0x1e52,	// (0x0007df9b) popup_blid_sat_info2_window_g1

0x1e76,	// (0x0007dfbf) popup_blid_sat_info2_window_t3

0x1e84,	// (0x0007dfcd) popup_blid_sat_info2_window_t4

0x1e92,	// (0x0007dfdb) popup_blid_sat_info2_window_t5

0x1ea0,	// (0x0007dfe9) popup_blid_sat_info2_window_t6

0x1eb0,	// (0x0007dff9) popup_blid_sat_info2_window_t7

0x1ebe,	// (0x0007e007) popup_blid_sat_info2_window_t8

0x1ecc,	// (0x0007e015) popup_blid_sat_info2_window_t9

0x1eda,	// (0x0007e023) popup_blid_sat_info2_window_t10

0x1fa1,	// (0x0007e0ea) aid_firma_cardinal_ParamLimits

0x1fb5,	// (0x0007e0fe) blid_firmament_pane_t1_ParamLimits

0x1fcc,	// (0x0007e115) blid_firmament_pane_t2_ParamLimits

0x1fe3,	// (0x0007e12c) blid_firmament_pane_t3_ParamLimits

0x1ffa,	// (0x0007e143) blid_firmament_pane_t4_ParamLimits

0xf665,	// (0x0008b7ae) blid_firmament_pane_t_ParamLimits

0x2011,	// (0x0007e15a) blid_sat_info_pane_ParamLimits

0x8b0b,	// (0x00084c54) main_cam_set_pane_ParamLimits

0x9ac2,	// (0x00085c0b) aid_size_cell_colour_35_ParamLimits

0x9adc,	// (0x00085c25) aid_size_cell_colour_112_ParamLimits

0x9af3,	// (0x00085c3c) aid_size_cell_effect_ParamLimits

0xe4c9,	// (0x0008a612) bg_tb_trans_pane_cp02_ParamLimits

0xf079,	// (0x0008b1c2) heading_imed_pane_ParamLimits

0x9b0d,	// (0x00085c56) listscroll_imed_pane_ParamLimits

0x1235,	// (0x0007d37e) popup_call2_audio_first_window_g5_ParamLimits

0x1235,	// (0x0007d37e) popup_call2_audio_first_window_g5

0xa130,	// (0x00086279) aid_size_touch_image3_arrow_left_ParamLimits

0xa130,	// (0x00086279) aid_size_touch_image3_arrow_left

0xa146,	// (0x0008628f) aid_size_touch_image3_arrow_right_ParamLimits

0xa146,	// (0x0008628f) aid_size_touch_image3_arrow_right

0xb692,	// (0x000877db) vid4_progress_pane_t3

0x9c88,	// (0x00085dd1) main_hwr_training_symbol_option_pane_ParamLimits

0x9c88,	// (0x00085dd1) main_hwr_training_symbol_option_pane

0x4a45,	// (0x00080b8e) popup_hwr_training_preview_window_ParamLimits

0x4a45,	// (0x00080b8e) popup_hwr_training_preview_window

0x9ce9,	// (0x00085e32) hwr_training_navi_pane_g5_ParamLimits

0x9ce9,	// (0x00085e32) hwr_training_navi_pane_g5

0x2594,	// (0x0007e6dd) popup_char_count_window

0x5d65,	// (0x00081eae) bg_popup_sub_pane_cp20_ParamLimits

0xafe1,	// (0x0008712a) list_vitu2_match_list_pane_ParamLimits

0xafed,	// (0x00087136) vitu2_page_scroll_pane_ParamLimits

0xafed,	// (0x00087136) vitu2_page_scroll_pane

0x2b29,	// (0x0007ec72) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2b29,	// (0x0007ec72) list_single_hwr_training_symbol_option_pane

0x2b3c,	// (0x0007ec85) list_single_hwr_training_symbol_option_pane_g1

0x2b44,	// (0x0007ec8d) list_single_hwr_training_symbol_option_pane_t1

0x2b52,	// (0x0007ec9b) bg_button_pane_cp023

0x2b5b,	// (0x0007eca4) bg_button_pane_cp024

0x2b8e,	// (0x0007ecd7) vitu2_page_scroll_pane_g1

0x2b96,	// (0x0007ecdf) vitu2_page_scroll_pane_g2

0x0001,

0xfa4e,	// (0x0008bb97) vitu2_page_scroll_pane_g

0x2b9e,	// (0x0007ece7) vitu2_page_scroll_pane_t1

0x2bad,	// (0x0007ecf6) popup_char_count_window_g1

0x2bb6,	// (0x0007ecff) popup_char_count_window_g2

0x2bbf,	// (0x0007ed08) popup_char_count_window_g3

0x0002,

0xfa53,	// (0x0008bb9c) popup_char_count_window_g

0x2bc8,	// (0x0007ed11) popup_char_count_window_t1

0x5d7f,	// (0x00081ec8) main_vded2_pane

0x24b2,	// (0x0007e5fb) aid_size_cell_imed_line

0x24bc,	// (0x0007e605) grid_imed_line_width_pane

0xa662,	// (0x000867ab) vid4_indicators_pane_g4

0x2bd6,	// (0x0007ed1f) cell_imed_line_width_pane_ParamLimits

0x2bd6,	// (0x0007ed1f) cell_imed_line_width_pane

0x2bec,	// (0x0007ed35) cell_imed_line_width_pane_g1

0x2bf5,	// (0x0007ed3e) cell_imed_line_width_pane_g2

0x0001,

0xfa5a,	// (0x0008bba3) cell_imed_line_width_pane_g

0xb6ce,	// (0x00087817) main_vded2_pane_g1_ParamLimits

0xb6ce,	// (0x00087817) main_vded2_pane_g1

0xb6dd,	// (0x00087826) main_vded2_pane_g2_ParamLimits

0xb6dd,	// (0x00087826) main_vded2_pane_g2

0x0001,

0xfa5f,	// (0x0008bba8) main_vded2_pane_g_ParamLimits

0xfa5f,	// (0x0008bba8) main_vded2_pane_g

0xb6eb,	// (0x00087834) vded2_slider_pane_ParamLimits

0xb6eb,	// (0x00087834) vded2_slider_pane

0xb6f8,	// (0x00087841) aid_size_touch_vded2_end

0xb702,	// (0x0008784b) aid_size_touch_vded2_playhead

0x2bfd,	// (0x0007ed46) aid_size_touch_vded2_start

0x2c05,	// (0x0007ed4e) vded2_slider_bg_pane

0x2c0e,	// (0x0007ed57) vded2_slider_pane_g1

0x2c17,	// (0x0007ed60) vded2_slider_pane_g2

0xb70a,	// (0x00087853) vded2_slider_pane_g3

0x0002,

0xfa64,	// (0x0008bbad) vded2_slider_pane_g

0x2c1f,	// (0x0007ed68) vded2_slider_bg_pane_g1

0x2c28,	// (0x0007ed71) vded2_slider_bg_pane_g2

0x2c31,	// (0x0007ed7a) vded2_slider_bg_pane_g3

0x0002,

0xf730,	// (0x0008b879) vded2_slider_bg_pane_g

0x8390,	// (0x000844d9) aid_postcard_touch_down_pane_ParamLimits

0x8390,	// (0x000844d9) aid_postcard_touch_down_pane

0x83a0,	// (0x000844e9) aid_postcard_touch_up_pane_ParamLimits

0x83a0,	// (0x000844e9) aid_postcard_touch_up_pane

0x5d7f,	// (0x00081ec8) main_blid2_pane

0x8b40,	// (0x00084c89) popup_blid2_search_window

0xddfa,	// (0x00089f43) blid2_gps_pane

0xddfa,	// (0x00089f43) blid2_navig_pane

0xddfa,	// (0x00089f43) blid2_search_pane

0xddfa,	// (0x00089f43) blid2_tripm_pane

0xb713,	// (0x0008785c) blid2_search_pane_g1_ParamLimits

0xb713,	// (0x0008785c) blid2_search_pane_g1

0xb71f,	// (0x00087868) blid2_search_pane_t1_ParamLimits

0xb71f,	// (0x00087868) blid2_search_pane_t1

0xb731,	// (0x0008787a) aid_size_cell_blid2_gps_ParamLimits

0xb731,	// (0x0008787a) aid_size_cell_blid2_gps

0xb741,	// (0x0008788a) blid2_gps_pane_g1_ParamLimits

0xb741,	// (0x0008788a) blid2_gps_pane_g1

0xb74d,	// (0x00087896) grid_blid2_satellite_pane_ParamLimits

0xb74d,	// (0x00087896) grid_blid2_satellite_pane

0xb75b,	// (0x000878a4) blid2_navig_pane_g1_ParamLimits

0xb75b,	// (0x000878a4) blid2_navig_pane_g1

0xb767,	// (0x000878b0) blid2_navig_pane_t1_ParamLimits

0xb767,	// (0x000878b0) blid2_navig_pane_t1

0xb779,	// (0x000878c2) blid2_navig_pane_t2_ParamLimits

0xb779,	// (0x000878c2) blid2_navig_pane_t2

0x0001,

0xfa6b,	// (0x0008bbb4) blid2_navig_pane_t_ParamLimits

0xfa6b,	// (0x0008bbb4) blid2_navig_pane_t

0xb78b,	// (0x000878d4) blid2_navig_ring_pane_ParamLimits

0xb78b,	// (0x000878d4) blid2_navig_ring_pane

0xb79b,	// (0x000878e4) blid2_speed_pane_ParamLimits

0xb79b,	// (0x000878e4) blid2_speed_pane

0xb7a7,	// (0x000878f0) blid2_tripm_pane_g1_ParamLimits

0xb7a7,	// (0x000878f0) blid2_tripm_pane_g1

0xb7b7,	// (0x00087900) blid2_tripm_pane_g2_ParamLimits

0xb7b7,	// (0x00087900) blid2_tripm_pane_g2

0xb7c3,	// (0x0008790c) blid2_tripm_pane_g3_ParamLimits

0xb7c3,	// (0x0008790c) blid2_tripm_pane_g3

0xb7cf,	// (0x00087918) blid2_tripm_pane_g4_ParamLimits

0xb7cf,	// (0x00087918) blid2_tripm_pane_g4

0xb7db,	// (0x00087924) blid2_tripm_pane_g5_ParamLimits

0xb7db,	// (0x00087924) blid2_tripm_pane_g5

0x0005,

0xfa70,	// (0x0008bbb9) blid2_tripm_pane_g_ParamLimits

0xfa70,	// (0x0008bbb9) blid2_tripm_pane_g

0xb7f7,	// (0x00087940) blid2_tripm_pane_t1_ParamLimits

0xb7f7,	// (0x00087940) blid2_tripm_pane_t1

0xb809,	// (0x00087952) blid2_tripm_pane_t2_ParamLimits

0xb809,	// (0x00087952) blid2_tripm_pane_t2

0xb81b,	// (0x00087964) blid2_tripm_pane_t3_ParamLimits

0xb81b,	// (0x00087964) blid2_tripm_pane_t3

0x0003,

0xfa7d,	// (0x0008bbc6) blid2_tripm_pane_t_ParamLimits

0xfa7d,	// (0x0008bbc6) blid2_tripm_pane_t

0xb84d,	// (0x00087996) cell_blid2_satellite_pane_ParamLimits

0xb84d,	// (0x00087996) cell_blid2_satellite_pane

0xb86b,	// (0x000879b4) cell_blid2_satellite_pane_g1

0x2c3a,	// (0x0007ed83) cell_blid2_satellite_pane_t1

0xe762,	// (0x0008a8ab) blid2_speed_pane_g1

0x2c48,	// (0x0007ed91) blid2_speed_pane_t1

0x2c56,	// (0x0007ed9f) blid2_speed_pane_t2

0x0001,

0xfa86,	// (0x0008bbcf) blid2_speed_pane_t

0xe762,	// (0x0008a8ab) blid2_navig_ring_pane_g1

0xb874,	// (0x000879bd) blid2_navig_ring_pane_g2

0xb87c,	// (0x000879c5) blid2_navig_ring_pane_g3

0xb884,	// (0x000879cd) blid2_navig_ring_pane_g4

0xb88c,	// (0x000879d5) blid2_navig_ring_pane_g5

0x0004,

0xfa8b,	// (0x0008bbd4) blid2_navig_ring_pane_g

0xddfa,	// (0x00089f43) bg_popup_window_pane_cp011

0x2c64,	// (0x0007edad) popup_blid2_search_window_g1

0x2c6c,	// (0x0007edb5) popup_blid2_search_window_t1

0x2c7a,	// (0x0007edc3) popup_blid2_search_window_t2

0x0001,

0xfa96,	// (0x0008bbdf) popup_blid2_search_window_t

0xe87a,	// (0x0008a9c3) main_browser_pane_g1

0xe5a2,	// (0x0008a6eb) main_browser_pane_ParamLimits

0x8b0b,	// (0x00084c54) bg_button_pane_cp011_ParamLimits

0xa8ac,	// (0x000869f5) cell_vitu2_function_pane_g1_ParamLimits

0x07e8,	// (0x0007c931) bg_popup_sub_pane_cp22_ParamLimits

0xb19a,	// (0x000872e3) input_focus_pane_cp08_ParamLimits

0xb1b1,	// (0x000872fa) popup_vitu2_query_button_pane_ParamLimits

0xb1b1,	// (0x000872fa) popup_vitu2_query_button_pane

0xb1c2,	// (0x0008730b) popup_vitu2_query_input_button_pane

0x281e,	// (0x0007e967) popup_vitu2_query_window_g1_ParamLimits

0xb1cc,	// (0x00087315) popup_vitu2_query_window_g2_ParamLimits

0xf99e,	// (0x0008bae7) popup_vitu2_query_window_g_ParamLimits

0xddfa,	// (0x00089f43) bg_button_pane_cp026

0xb894,	// (0x000879dd) popup_vitu2_query_input_button_pane_g1

0xddfa,	// (0x00089f43) bg_button_pane_cp025

0x2c88,	// (0x0007edd1) popup_vitu2_query_button_pane_t1

0x905e,	// (0x000851a7) main_mp3_pane_t6

0x906e,	// (0x000851b7) popup_slider_window_cp01

0xa53d,	// (0x00086686) cam4_battery_pane

0xa61b,	// (0x00086764) cam4_battery_pane_cp02

0xb60b,	// (0x00087754) cam4_battery_pane_cp01

0xb60b,	// (0x00087754) cam4_battery_pane_cp03

0x2c96,	// (0x0007eddf) cam4_battery_pane_g1

0xe762,	// (0x0008a8ab) cam4_battery_pane_g2

0x0001,

0xfa9b,	// (0x0008bbe4) cam4_battery_pane_g

0x1ee8,	// (0x0007e031) popup_blid_sat_info2_window_t11

0x7eda,	// (0x00084023) aid_size_touch_mv_arrow_left_ParamLimits

0x7f05,	// (0x0008404e) aid_size_touch_mv_arrow_right_ParamLimits

0xefe0,	// (0x0008b129) navi_pane_g1_ParamLimits

0x7f44,	// (0x0008408d) navi_pane_g2_ParamLimits

0x7f72,	// (0x000840bb) navi_pane_g3_ParamLimits

0xf379,	// (0x0008b4c2) navi_pane_g_ParamLimits

0x7fcc,	// (0x00084115) navi_pane_mv_t1_ParamLimits

0x9b19,	// (0x00085c62) grid_imed_effect_pane_ParamLimits

0x6a5d,	// (0x00082ba6) aid_placing_vt_slider_lsc

0xe7c5,	// (0x0008a90e) aid_placing_vt_slider_prt

0xe4c9,	// (0x0008a612) bg_tb_trans_pane_cp01_ParamLimits

0x2150,	// (0x0007e299) popup_image_details_window_g1_ParamLimits

0x2163,	// (0x0007e2ac) popup_image_details_window_g2_ParamLimits

0x2178,	// (0x0007e2c1) popup_image_details_window_g3_ParamLimits

0x2178,	// (0x0007e2c1) popup_image_details_window_g3

0xf6a5,	// (0x0008b7ee) popup_image_details_window_g_ParamLimits

0x218c,	// (0x0007e2d5) popup_image_details_window_t1_ParamLimits

0x219e,	// (0x0007e2e7) popup_image_details_window_t2_ParamLimits

0x21b7,	// (0x0007e300) popup_image_details_window_t3_ParamLimits

0x21cb,	// (0x0007e314) popup_image_details_window_t4_ParamLimits

0x21e6,	// (0x0007e32f) popup_image_details_window_t5_ParamLimits

0xf6ac,	// (0x0008b7f5) popup_image_details_window_t_ParamLimits

0xb537,	// (0x00087680) cl_header_name_pane_ParamLimits

0xb537,	// (0x00087680) cl_header_name_pane

0xb89c,	// (0x000879e5) cl_header_name_pane_t1_ParamLimits

0xb89c,	// (0x000879e5) cl_header_name_pane_t1

0xb8b3,	// (0x000879fc) cl_header_name_pane_t2_ParamLimits

0xb8b3,	// (0x000879fc) cl_header_name_pane_t2

0xb8dd,	// (0x00087a26) cl_header_name_pane_t3_ParamLimits

0xb8dd,	// (0x00087a26) cl_header_name_pane_t3

0x0002,

0xfaa0,	// (0x0008bbe9) cl_header_name_pane_t_ParamLimits

0xfaa0,	// (0x0008bbe9) cl_header_name_pane_t

0x7f9d,	// (0x000840e6) navi_pane_mv_g2_ParamLimits

0x2530,	// (0x0007e679) field_vitu2_entry_pane_g1_ParamLimits

0x253c,	// (0x0007e685) field_vitu2_entry_pane_g2_ParamLimits

0x07b2,	// (0x0007c8fb) field_vitu2_entry_pane_g3_ParamLimits

0x07b2,	// (0x0007c8fb) field_vitu2_entry_pane_g3

0xf8a7,	// (0x0008b9f0) field_vitu2_entry_pane_g_ParamLimits

0xa83a,	// (0x00086983) cell_vitu2_itu_pane_g1_ParamLimits

0xa852,	// (0x0008699b) cell_vitu2_itu_pane_g2_ParamLimits

0xa852,	// (0x0008699b) cell_vitu2_itu_pane_g2

0x0001,

0xf8b3,	// (0x0008b9fc) cell_vitu2_itu_pane_g_ParamLimits

0xf8b3,	// (0x0008b9fc) cell_vitu2_itu_pane_g

0x8b0b,	// (0x00084c54) bg_vkb2_func_pane_cp05_ParamLimits

0x8b0b,	// (0x00084c54) bg_vkb2_func_pane_cp05

0x8b0b,	// (0x00084c54) bg_vkb2_func_pane_cp03

0x8b0b,	// (0x00084c54) bg_vkb2_func_pane_cp04

0x8b0b,	// (0x00084c54) bg_vkb2_func_pane_cp10_ParamLimits

0x8b0b,	// (0x00084c54) bg_vkb2_func_pane_cp10

0xb4d9,	// (0x00087622) bg_vkb2_func_pane_cp08

0xb4bf,	// (0x00087608) bg_vkb2_func_pane_cp06

0xb4cd,	// (0x00087616) bg_vkb2_func_pane_cp07

0x2b64,	// (0x0007ecad) bg_vkb2_func_pane_cp11_ParamLimits

0x2b64,	// (0x0007ecad) bg_vkb2_func_pane_cp11

0x2b79,	// (0x0007ecc2) bg_vkb2_func_pane_cp12_ParamLimits

0x2b79,	// (0x0007ecc2) bg_vkb2_func_pane_cp12

0xddfa,	// (0x00089f43) bg_vkb2_func_pane_cp09

0x25a6,	// (0x0007e6ef) bg_vkb2_func_pane_g1

0xe98b,	// (0x0008aad4) bg_vkb2_func_pane_g2

0x25ae,	// (0x0007e6f7) bg_vkb2_func_pane_g3

0x25b6,	// (0x0007e6ff) bg_vkb2_func_pane_g4

0x27e3,	// (0x0007e92c) bg_vkb2_func_pane_g5

0x25ce,	// (0x0007e717) bg_vkb2_func_pane_g6

0x25d6,	// (0x0007e71f) bg_vkb2_func_pane_g7

0x25c6,	// (0x0007e70f) bg_vkb2_func_pane_g8

0xe96b,	// (0x0008aab4) bg_vkb2_func_pane_g9

0x0008,

0xfaa7,	// (0x0008bbf0) bg_vkb2_func_pane_g

0xb7e9,	// (0x00087932) blid2_tripm_pane_g6_ParamLimits

0xb7e9,	// (0x00087932) blid2_tripm_pane_g6

0x4b03,	// (0x00080c4c) mp4_progress_pane_g1

0xb841,	// (0x0008798a) blid2_tripm_values_pane_ParamLimits

0xb841,	// (0x0008798a) blid2_tripm_values_pane

0xb902,	// (0x00087a4b) blid2_tripm_values_pane_t1

0xb910,	// (0x00087a59) blid2_tripm_values_pane_t2

0xb91e,	// (0x00087a67) blid2_tripm_values_pane_t3

0xb92c,	// (0x00087a75) blid2_tripm_values_pane_t4

0xb93a,	// (0x00087a83) blid2_tripm_values_pane_t5

0xb948,	// (0x00087a91) blid2_tripm_values_pane_t6

0xb956,	// (0x00087a9f) blid2_tripm_values_pane_t7

0xb964,	// (0x00087aad) blid2_tripm_values_pane_t8

0xb972,	// (0x00087abb) blid2_tripm_values_pane_t9

0x0008,

0xfaba,	// (0x0008bc03) blid2_tripm_values_pane_t

0x6a9b,	// (0x00082be4) call_video_pane_t1_ParamLimits

0x6ab8,	// (0x00082c01) call_video_pane_t2_ParamLimits

0xf222,	// (0x0008b36b) call_video_pane_t_ParamLimits

0x82cc,	// (0x00084415) msg_header_pane_g1_ParamLimits

0x08a7,	// (0x0007c9f0) msg_header_pane_g2_ParamLimits

0x08a7,	// (0x0007c9f0) msg_header_pane_g2

0x0001,

0xf41c,	// (0x0008b565) msg_header_pane_g_ParamLimits

0xf41c,	// (0x0008b565) msg_header_pane_g

0xe5a2,	// (0x0008a6eb) main_clock2_pane_ParamLimits

0x9892,	// (0x000859db) grid_clock2_toolbar_pane_ParamLimits

0x9892,	// (0x000859db) grid_clock2_toolbar_pane

0x9892,	// (0x000859db) listscroll_clock2_pane_ParamLimits

0x9892,	// (0x000859db) listscroll_clock2_pane

0x9941,	// (0x00085a8a) main_clock2_pane_t3_ParamLimits

0x9941,	// (0x00085a8a) main_clock2_pane_t3

0x9953,	// (0x00085a9c) main_clock2_pane_t4_ParamLimits

0x9953,	// (0x00085a9c) main_clock2_pane_t4

0x2ca0,	// (0x0007ede9) cell_clock2_toolbar_pane

0x2ca8,	// (0x0007edf1) cell_clock2_toolbar_pane_cp01

0x2ca8,	// (0x0007edf1) cell_clock2_toolbar_pane_cp02

0x2cb0,	// (0x0007edf9) cell_clock2_toolbar_pane_cp03

0x2cb8,	// (0x0007ee01) list_clock2_pane

0xef31,	// (0x0008b07a) scroll_pane_cp10

0x2cc0,	// (0x0007ee09) list_single_clock2_pane_ParamLimits

0x2cc0,	// (0x0007ee09) list_single_clock2_pane

0xe740,	// (0x0008a889) list_highlight_pane_cp08

0x2ccd,	// (0x0007ee16) list_single_clock2_pane_t1

0x2cdb,	// (0x0007ee24) list_single_clock2_pane_t2

0x0001,

0xfacd,	// (0x0008bc16) list_single_clock2_pane_t

0xddfa,	// (0x00089f43) bg_button_pane_cp10

0x2ce9,	// (0x0007ee32) cell_clock2_toolbar_pane_g1

0x82f2,	// (0x0008443b) aid_main_viewer_pane_g1_ParamLimits

0x82f2,	// (0x0008443b) aid_main_viewer_pane_g1

0x82fe,	// (0x00084447) aid_main_viewer_pane_g2_ParamLimits

0x82fe,	// (0x00084447) aid_main_viewer_pane_g2

0x830a,	// (0x00084453) aid_main_viewer_pane_g3_ParamLimits

0x830a,	// (0x00084453) aid_main_viewer_pane_g3

0x831b,	// (0x00084464) aid_main_viewer_pane_g4_ParamLimits

0x831b,	// (0x00084464) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x0008b576) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x0008b576) aid_main_viewer_pane_g

0x8aec,	// (0x00084c35) main_calc_pane_ParamLimits

0x8b19,	// (0x00084c62) main_dialer2_pane_ParamLimits

0x5d7f,	// (0x00081ec8) main_cam6_pane

0x5d7f,	// (0x00081ec8) main_vid6_pane

0x989e,	// (0x000859e7) listscroll_gen_pane_cp06_ParamLimits

0x989e,	// (0x000859e7) listscroll_gen_pane_cp06

0x9965,	// (0x00085aae) main_clock2_pane_t5_ParamLimits

0x9965,	// (0x00085aae) main_clock2_pane_t5

0x99b2,	// (0x00085afb) aid_call2_pane_cp10_ParamLimits

0x99c4,	// (0x00085b0d) aid_call_pane_cp10_ParamLimits

0xefb5,	// (0x0008b0fe) popup_clock_analogue_window_cp10_g1_ParamLimits

0xefb5,	// (0x0008b0fe) popup_clock_analogue_window_cp10_g2_ParamLimits

0x99d6,	// (0x00085b1f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x99d6,	// (0x00085b1f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xefb5,	// (0x0008b0fe) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf761,	// (0x0008b8aa) popup_clock_analogue_window_cp10_g_ParamLimits

0x99ec,	// (0x00085b35) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa0dd,	// (0x00086226) cell_dialer2_keypad_pane_g2_ParamLimits

0xa0dd,	// (0x00086226) cell_dialer2_keypad_pane_g2

0x0001,

0xf846,	// (0x0008b98f) cell_dialer2_keypad_pane_g_ParamLimits

0xf846,	// (0x0008b98f) cell_dialer2_keypad_pane_g

0xa0f9,	// (0x00086242) cell_dialer2_keypad_pane_t1

0xab8e,	// (0x00086cd7) main_cset_text2_pane_ParamLimits

0xab8e,	// (0x00086cd7) main_cset_text2_pane

0x2a16,	// (0x0007eb5f) area_vitu2_query_pane_g1_ParamLimits

0xb45a,	// (0x000875a3) area_vitu2_query_pane_g2_ParamLimits

0xf9f1,	// (0x0008bb3a) area_vitu2_query_pane_g_ParamLimits

0x2a9a,	// (0x0007ebe3) area_vitu2_query_pane_t7_ParamLimits

0x2a9a,	// (0x0007ebe3) area_vitu2_query_pane_t7

0xb4bf,	// (0x00087608) bg_button_pane_cp018_ParamLimits

0xb4cd,	// (0x00087616) bg_button_pane_cp021_ParamLimits

0xb4d9,	// (0x00087622) bg_button_pane_cp022_ParamLimits

0xb4d9,	// (0x00087622) bg_vkb2_func_pane_cp08_ParamLimits

0xb4bf,	// (0x00087608) bg_vkb2_func_pane_cp06_ParamLimits

0xb4cd,	// (0x00087616) bg_vkb2_func_pane_cp07_ParamLimits

0xb4ea,	// (0x00087633) input_focus_pane_cp09_ParamLimits

0xb980,	// (0x00087ac9) cam6_autofocus_pane_ParamLimits

0xb980,	// (0x00087ac9) cam6_autofocus_pane

0xb9a2,	// (0x00087aeb) cam6_image_uncrop_pane_ParamLimits

0xb9a2,	// (0x00087aeb) cam6_image_uncrop_pane

0xb9cf,	// (0x00087b18) cam6_indi_pane_ParamLimits

0xb9cf,	// (0x00087b18) cam6_indi_pane

0xb9e9,	// (0x00087b32) cam6_mode_pane_ParamLimits

0xb9e9,	// (0x00087b32) cam6_mode_pane

0xb9fd,	// (0x00087b46) cam6_timer_pane_ParamLimits

0xb9fd,	// (0x00087b46) cam6_timer_pane

0xba09,	// (0x00087b52) cam6_zoom_pane_ParamLimits

0xba09,	// (0x00087b52) cam6_zoom_pane

0xba25,	// (0x00087b6e) cam6_mode_pane_g1_ParamLimits

0xba25,	// (0x00087b6e) cam6_mode_pane_g1

0xba31,	// (0x00087b7a) cam6_mode_pane_g2_ParamLimits

0xba31,	// (0x00087b7a) cam6_mode_pane_g2

0xba3d,	// (0x00087b86) cam6_mode_pane_g3_ParamLimits

0xba3d,	// (0x00087b86) cam6_mode_pane_g3

0xba49,	// (0x00087b92) cam6_mode_pane_g4_ParamLimits

0xba49,	// (0x00087b92) cam6_mode_pane_g4

0x0003,

0xfad2,	// (0x0008bc1b) cam6_mode_pane_g_ParamLimits

0xfad2,	// (0x0008bc1b) cam6_mode_pane_g

0x4b50,	// (0x00080c99) bg_tb_trans_pane_cp08_ParamLimits

0x4b50,	// (0x00080c99) bg_tb_trans_pane_cp08

0x2cf1,	// (0x0007ee3a) cam6_battery_pane_ParamLimits

0x2cf1,	// (0x0007ee3a) cam6_battery_pane

0x2d07,	// (0x0007ee50) cam6_indi_pane_g1_ParamLimits

0x2d07,	// (0x0007ee50) cam6_indi_pane_g1

0x2d19,	// (0x0007ee62) cam6_indi_pane_g2_ParamLimits

0x2d19,	// (0x0007ee62) cam6_indi_pane_g2

0x2d2b,	// (0x0007ee74) cam6_indi_pane_g3_ParamLimits

0x2d2b,	// (0x0007ee74) cam6_indi_pane_g3

0x0002,

0xfadb,	// (0x0008bc24) cam6_indi_pane_g_ParamLimits

0xfadb,	// (0x0008bc24) cam6_indi_pane_g

0x2d3d,	// (0x0007ee86) cam6_indi_pane_t1_ParamLimits

0x2d3d,	// (0x0007ee86) cam6_indi_pane_t1

0xa69f,	// (0x000867e8) cam6_autofocus_pane_g1

0xa697,	// (0x000867e0) cam6_autofocus_pane_g2

0xa6af,	// (0x000867f8) cam6_autofocus_pane_g3

0xa6a7,	// (0x000867f0) cam6_autofocus_pane_g4

0x0003,

0xfae2,	// (0x0008bc2b) cam6_autofocus_pane_g

0x2d63,	// (0x0007eeac) cam6_timer_pane_g1

0x2d6b,	// (0x0007eeb4) cam6_timer_pane_t1

0x2d79,	// (0x0007eec2) cam6_zoom_cont_pane

0x2d81,	// (0x0007eeca) cam6_zoom_pane_g1

0x2d89,	// (0x0007eed2) cam6_zoom_pane_g2

0xba55,	// (0x00087b9e) cam6_zoom_pane_g3

0x0002,

0xfaeb,	// (0x0008bc34) cam6_zoom_pane_g

0xe762,	// (0x0008a8ab) cam6_battery_pane_g1

0xe762,	// (0x0008a8ab) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x0008b526) cam6_battery_pane_g

0x2d91,	// (0x0007eeda) cam6_zoom_cont_pane_g1

0x2d9a,	// (0x0007eee3) cam6_zoom_cont_pane_g2

0x2da3,	// (0x0007eeec) cam6_zoom_cont_pane_g3

0x0002,

0xfaf2,	// (0x0008bc3b) cam6_zoom_cont_pane_g

0xba72,	// (0x00087bbb) cam6_mode_pane_cp_ParamLimits

0xba72,	// (0x00087bbb) cam6_mode_pane_cp

0xba86,	// (0x00087bcf) cam6_zoom_pane_cp_ParamLimits

0xba86,	// (0x00087bcf) cam6_zoom_pane_cp

0xbaa2,	// (0x00087beb) vid6_image_uncrop_cif_pane_ParamLimits

0xbaa2,	// (0x00087beb) vid6_image_uncrop_cif_pane

0xbace,	// (0x00087c17) vid6_image_uncrop_nhd_pane_ParamLimits

0xbace,	// (0x00087c17) vid6_image_uncrop_nhd_pane

0xbaed,	// (0x00087c36) vid6_image_uncrop_vga_pane_ParamLimits

0xbaed,	// (0x00087c36) vid6_image_uncrop_vga_pane

0xbb0c,	// (0x00087c55) vid6_image_uncrop_wvga_pane_ParamLimits

0xbb0c,	// (0x00087c55) vid6_image_uncrop_wvga_pane

0xbb2b,	// (0x00087c74) vid6_indi_pane_ParamLimits

0xbb2b,	// (0x00087c74) vid6_indi_pane

0x4b50,	// (0x00080c99) bg_tb_trans_pane_cp09_ParamLimits

0x4b50,	// (0x00080c99) bg_tb_trans_pane_cp09

0x2dbb,	// (0x0007ef04) cam6_battery_pane_cp_ParamLimits

0x2dbb,	// (0x0007ef04) cam6_battery_pane_cp

0x2dc7,	// (0x0007ef10) vid6_indi_pane_g1_ParamLimits

0x2dc7,	// (0x0007ef10) vid6_indi_pane_g1

0x2dd9,	// (0x0007ef22) vid6_indi_pane_g2_ParamLimits

0x2dd9,	// (0x0007ef22) vid6_indi_pane_g2

0x2deb,	// (0x0007ef34) vid6_indi_pane_g3_ParamLimits

0x2deb,	// (0x0007ef34) vid6_indi_pane_g3

0x2e02,	// (0x0007ef4b) vid6_indi_pane_g4_ParamLimits

0x2e02,	// (0x0007ef4b) vid6_indi_pane_g4

0x2e19,	// (0x0007ef62) vid6_indi_pane_g5_ParamLimits

0x2e19,	// (0x0007ef62) vid6_indi_pane_g5

0x0004,

0xfaf9,	// (0x0008bc42) vid6_indi_pane_g_ParamLimits

0xfaf9,	// (0x0008bc42) vid6_indi_pane_g

0x2e33,	// (0x0007ef7c) vid6_indi_pane_t1_ParamLimits

0x2e33,	// (0x0007ef7c) vid6_indi_pane_t1

0x2e49,	// (0x0007ef92) vid6_indi_pane_t2_ParamLimits

0x2e49,	// (0x0007ef92) vid6_indi_pane_t2

0x2e71,	// (0x0007efba) vid6_indi_pane_t3_ParamLimits

0x2e71,	// (0x0007efba) vid6_indi_pane_t3

0x2e99,	// (0x0007efe2) vid6_indi_pane_t4_ParamLimits

0x2e99,	// (0x0007efe2) vid6_indi_pane_t4

0x0003,

0xfb04,	// (0x0008bc4d) vid6_indi_pane_t_ParamLimits

0xfb04,	// (0x0008bc4d) vid6_indi_pane_t

0x2ebd,	// (0x0007f006) wait_bar_pane_cp08

0xbb50,	// (0x00087c99) main_cset_text2_pane_t1_ParamLimits

0xbb50,	// (0x00087c99) main_cset_text2_pane_t1

0xba5d,	// (0x00087ba6) listscroll_gen_pane_cp06_t1_ParamLimits

0xba5d,	// (0x00087ba6) listscroll_gen_pane_cp06_t1

0x5d7f,	// (0x00081ec8) main_cam6_set_pane

0x373e,	// (0x0007f887) bg_tb_trans_pane_cp06_ParamLimits

0xa545,	// (0x0008668e) cam4_indicators_pane_g1_ParamLimits

0xa556,	// (0x0008669f) cam4_indicators_pane_g2_ParamLimits

0xf883,	// (0x0008b9cc) cam4_indicators_pane_g_ParamLimits

0xa56e,	// (0x000866b7) cam4_indicators_pane_t1_ParamLimits

0x8b0b,	// (0x00084c54) bg_tb_trans_pane_cp07_ParamLimits

0xa625,	// (0x0008676e) vid4_indicators_pane_g1_ParamLimits

0xa63b,	// (0x00086784) vid4_indicators_pane_g2_ParamLimits

0xa64f,	// (0x00086798) vid4_indicators_pane_g3_ParamLimits

0xa662,	// (0x000867ab) vid4_indicators_pane_g4_ParamLimits

0xf895,	// (0x0008b9de) vid4_indicators_pane_g_ParamLimits

0xa680,	// (0x000867c9) vid4_indicators_pane_t1_ParamLimits

0xb613,	// (0x0008775c) vid4_progress_pane_g1_ParamLimits

0xb623,	// (0x0008776c) vid4_progress_pane_g2_ParamLimits

0xb633,	// (0x0008777c) vid4_progress_pane_g3_ParamLimits

0xb645,	// (0x0008778e) vid4_progress_pane_g4_ParamLimits

0xfa3c,	// (0x0008bb85) vid4_progress_pane_g_ParamLimits

0xb663,	// (0x000877ac) vid4_progress_pane_t1_ParamLimits

0xb67d,	// (0x000877c6) vid4_progress_pane_t2_ParamLimits

0xb692,	// (0x000877db) vid4_progress_pane_t3_ParamLimits

0xfa47,	// (0x0008bb90) vid4_progress_pane_t_ParamLimits

0xb6a7,	// (0x000877f0) wait_bar_pane_cp07_ParamLimits

0xbb77,	// (0x00087cc0) main_cam6_set_pane_g2_ParamLimits

0xbb77,	// (0x00087cc0) main_cam6_set_pane_g2

0xbb83,	// (0x00087ccc) main_cset6_listscroll_pane_ParamLimits

0xbb83,	// (0x00087ccc) main_cset6_listscroll_pane

0xbbb0,	// (0x00087cf9) main_cset6_slider_pane_ParamLimits

0xbbb0,	// (0x00087cf9) main_cset6_slider_pane

0xbbbc,	// (0x00087d05) main_cset6_text2_pane_ParamLimits

0xbbbc,	// (0x00087d05) main_cset6_text2_pane

0x2ecc,	// (0x0007f015) main_cset6_text_pane

0x2ed4,	// (0x0007f01d) main_cset_list_pane_copy1_ParamLimits

0x2ed4,	// (0x0007f01d) main_cset_list_pane_copy1

0x2ee4,	// (0x0007f02d) scroll_pane_cp028_copy1

0xbbcf,	// (0x00087d18) cset_list_set_pane_copy1

0xbbdf,	// (0x00087d28) aid_position_infowindow_above_copy1

0xbbe7,	// (0x00087d30) aid_position_infowindow_below_copy1

0xbbef,	// (0x00087d38) cset_list_set_pane_g1_copy1

0xbbf7,	// (0x00087d40) cset_list_set_pane_g3_copy1_ParamLimits

0xbbf7,	// (0x00087d40) cset_list_set_pane_g3_copy1

0xbc06,	// (0x00087d4f) cset_list_set_pane_t1_copy1_ParamLimits

0xbc06,	// (0x00087d4f) cset_list_set_pane_t1_copy1

0xe4c9,	// (0x0008a612) list_highlight_pane_cp021_copy1_ParamLimits

0xe4c9,	// (0x0008a612) list_highlight_pane_cp021_copy1

0x2eed,	// (0x0007f036) cset6_slider_pane_ParamLimits

0x2eed,	// (0x0007f036) cset6_slider_pane

0x2f19,	// (0x0007f062) main_cset6_slider_pane_g1_ParamLimits

0x2f19,	// (0x0007f062) main_cset6_slider_pane_g1

0xbc1b,	// (0x00087d64) main_cset6_slider_pane_g2_ParamLimits

0xbc1b,	// (0x00087d64) main_cset6_slider_pane_g2

0x2f41,	// (0x0007f08a) main_cset6_slider_pane_g3_ParamLimits

0x2f41,	// (0x0007f08a) main_cset6_slider_pane_g3

0xbc43,	// (0x00087d8c) main_cset6_slider_pane_g4_ParamLimits

0xbc43,	// (0x00087d8c) main_cset6_slider_pane_g4

0xbc4f,	// (0x00087d98) main_cset6_slider_pane_g5_ParamLimits

0xbc4f,	// (0x00087d98) main_cset6_slider_pane_g5

0x26d9,	// (0x0007e822) main_cset6_slider_pane_g7_ParamLimits

0x26d9,	// (0x0007e822) main_cset6_slider_pane_g7

0x26e5,	// (0x0007e82e) main_cset6_slider_pane_g8_ParamLimits

0x26e5,	// (0x0007e82e) main_cset6_slider_pane_g8

0xbc5b,	// (0x00087da4) main_cset6_slider_pane_g9_ParamLimits

0xbc5b,	// (0x00087da4) main_cset6_slider_pane_g9

0xbc67,	// (0x00087db0) main_cset6_slider_pane_g10_ParamLimits

0xbc67,	// (0x00087db0) main_cset6_slider_pane_g10

0xbc73,	// (0x00087dbc) main_cset6_slider_pane_g11_ParamLimits

0xbc73,	// (0x00087dbc) main_cset6_slider_pane_g11

0xbc7f,	// (0x00087dc8) main_cset6_slider_pane_g12_ParamLimits

0xbc7f,	// (0x00087dc8) main_cset6_slider_pane_g12

0xbc8b,	// (0x00087dd4) main_cset6_slider_pane_g13_ParamLimits

0xbc8b,	// (0x00087dd4) main_cset6_slider_pane_g13

0xbc97,	// (0x00087de0) main_cset6_slider_pane_g14_ParamLimits

0xbc97,	// (0x00087de0) main_cset6_slider_pane_g14

0xbca3,	// (0x00087dec) main_cset6_slider_pane_g15_ParamLimits

0xbca3,	// (0x00087dec) main_cset6_slider_pane_g15

0xbcbb,	// (0x00087e04) main_cset6_slider_pane_g16_ParamLimits

0xbcbb,	// (0x00087e04) main_cset6_slider_pane_g16

0xbcc7,	// (0x00087e10) main_cset6_slider_pane_g17_ParamLimits

0xbcc7,	// (0x00087e10) main_cset6_slider_pane_g17

0x0011,

0xfb0d,	// (0x0008bc56) main_cset6_slider_pane_g_ParamLimits

0xfb0d,	// (0x0008bc56) main_cset6_slider_pane_g

0x2f4d,	// (0x0007f096) main_cset6_slider_pane_t1_ParamLimits

0x2f4d,	// (0x0007f096) main_cset6_slider_pane_t1

0xbceb,	// (0x00087e34) main_cset6_slider_pane_t2_ParamLimits

0xbceb,	// (0x00087e34) main_cset6_slider_pane_t2

0xbd16,	// (0x00087e5f) main_cset6_slider_pane_t3_ParamLimits

0xbd16,	// (0x00087e5f) main_cset6_slider_pane_t3

0xbd41,	// (0x00087e8a) main_cset6_slider_pane_t4_ParamLimits

0xbd41,	// (0x00087e8a) main_cset6_slider_pane_t4

0xbd6c,	// (0x00087eb5) main_cset6_slider_pane_t5_ParamLimits

0xbd6c,	// (0x00087eb5) main_cset6_slider_pane_t5

0x2f8e,	// (0x0007f0d7) main_cset6_slider_pane_t7_ParamLimits

0x2f8e,	// (0x0007f0d7) main_cset6_slider_pane_t7

0xbd97,	// (0x00087ee0) main_cset6_slider_pane_t8_ParamLimits

0xbd97,	// (0x00087ee0) main_cset6_slider_pane_t8

0xbdbb,	// (0x00087f04) main_cset6_slider_pane_t9_ParamLimits

0xbdbb,	// (0x00087f04) main_cset6_slider_pane_t9

0xbddf,	// (0x00087f28) main_cset6_slider_pane_t10_ParamLimits

0xbddf,	// (0x00087f28) main_cset6_slider_pane_t10

0xbe03,	// (0x00087f4c) main_cset6_slider_pane_t11_ParamLimits

0xbe03,	// (0x00087f4c) main_cset6_slider_pane_t11

0x2fc4,	// (0x0007f10d) main_cset6_slider_pane_t14_ParamLimits

0x2fc4,	// (0x0007f10d) main_cset6_slider_pane_t14

0x2ffd,	// (0x0007f146) main_cset6_slider_pane_t15_ParamLimits

0x2ffd,	// (0x0007f146) main_cset6_slider_pane_t15

0x000b,

0xfb32,	// (0x0008bc7b) main_cset6_slider_pane_t_ParamLimits

0xfb32,	// (0x0008bc7b) main_cset6_slider_pane_t

0x3036,	// (0x0007f17f) cset_slider_pane_g1_copy1

0x303f,	// (0x0007f188) cset_slider_pane_g2_copy1

0x3048,	// (0x0007f191) cset_slider_pane_g3_copy1

0xddfa,	// (0x00089f43) bg_popup_sub_pane_cp011_copy1

0x305a,	// (0x0007f1a3) main_cset_text_pane_g1_copy1

0x2832,	// (0x0007e97b) main_cset_text_pane_t1_copy1

0x2840,	// (0x0007e989) main_cset_text_pane_t2_copy1

0x284e,	// (0x0007e997) main_cset_text_pane_t3_copy1

0x285c,	// (0x0007e9a5) main_cset_text_pane_t4_copy1

0x286a,	// (0x0007e9b3) main_cset_text_pane_t5_copy1

0x3062,	// (0x0007f1ab) main_cset_text_pane_t6_copy1

0x3070,	// (0x0007f1b9) main_cset_text_pane_t7_copy1

0xbe44,	// (0x00087f8d) main_cset_text2_pane_t1_copy1

0x8b0b,	// (0x00084c54) main_ncimui_pane

0x8b7e,	// (0x00084cc7) popup_query_ncimui_window_ParamLimits

0x8b7e,	// (0x00084cc7) popup_query_ncimui_window

0x2287,	// (0x0007e3d0) field_cale_ev2_pane_g4_ParamLimits

0x2287,	// (0x0007e3d0) field_cale_ev2_pane_g4

0x9db5,	// (0x00085efe) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9db5,	// (0x00085efe) cell_video_dialer_keypad_pane_g2

0x0001,

0xf81d,	// (0x0008b966) cell_video_dialer_keypad_pane_g_ParamLimits

0xf81d,	// (0x0008b966) cell_video_dialer_keypad_pane_g

0x9dcd,	// (0x00085f16) cell_video_dialer_keypad_pane_t1

0xddfa,	// (0x00089f43) bg_popup_window_pane_cp012

0x1a88,	// (0x0007dbd1) heading_pane_cp06

0x309c,	// (0x0007f1e5) ncim_query_content_pane

0xddfa,	// (0x00089f43) bg_popup_heading_pane_cp01

0x30a4,	// (0x0007f1ed) ncim_heading_pane_t1

0x30b2,	// (0x0007f1fb) ncim_indicator_popup_pane

0x30c4,	// (0x0007f20d) ncim_query_button_pane

0x30da,	// (0x0007f223) ncim_query_content_pane_t1

0x30ec,	// (0x0007f235) ncim_query_content_pane_t2

0x0005,

0xfb76,	// (0x0008bcbf) ncim_query_content_pane_t

0x3126,	// (0x0007f26f) ncim_query_list_pane

0x3138,	// (0x0007f281) ncim_query_popup_pane

0x30b2,	// (0x0007f1fb) ncim_indicator_popup_pane_ParamLimits

0xbfa0,	// (0x000880e9) ncim_query_content_pane_g1_ParamLimits

0xbfa0,	// (0x000880e9) ncim_query_content_pane_g1

0x30da,	// (0x0007f223) ncim_query_content_pane_t1_ParamLimits

0x30ec,	// (0x0007f235) ncim_query_content_pane_t2_ParamLimits

0xbfac,	// (0x000880f5) ncim_query_content_pane_t3_ParamLimits

0xbfac,	// (0x000880f5) ncim_query_content_pane_t3

0xbfc9,	// (0x00088112) ncim_query_content_pane_t4_ParamLimits

0xbfc9,	// (0x00088112) ncim_query_content_pane_t4

0xbfe6,	// (0x0008812f) ncim_query_content_pane_t5_ParamLimits

0xbfe6,	// (0x0008812f) ncim_query_content_pane_t5

0x30fe,	// (0x0007f247) ncim_query_content_pane_t6_ParamLimits

0x30fe,	// (0x0007f247) ncim_query_content_pane_t6

0xfb76,	// (0x0008bcbf) ncim_query_content_pane_t_ParamLimits

0x3126,	// (0x0007f26f) ncim_query_list_pane_ParamLimits

0x3138,	// (0x0007f281) ncim_query_popup_pane_ParamLimits

0x314c,	// (0x0007f295) wait_bar_pane_cp04

0xddfa,	// (0x00089f43) input_focus_pane_cp011

0x3154,	// (0x0007f29d) ncim_query_popup_pane_t1

0x3162,	// (0x0007f2ab) ncim_list_query_list_pane_ParamLimits

0x3162,	// (0x0007f2ab) ncim_list_query_list_pane

0xddfa,	// (0x00089f43) bg_button_pane_cp027

0x3175,	// (0x0007f2be) ncim_query_button_pane_g1

0xddfa,	// (0x00089f43) list_highlight_pane_cp012

0x317f,	// (0x0007f2c8) ncim_list_query_list_pane_g1

0x3187,	// (0x0007f2d0) ncim_list_query_list_pane_t1

0xa562,	// (0x000866ab) cam4_indicators_pane_g3_ParamLimits

0xa562,	// (0x000866ab) cam4_indicators_pane_g3

0xa66e,	// (0x000867b7) vid4_indicators_pane_g5_ParamLimits

0xa66e,	// (0x000867b7) vid4_indicators_pane_g5

0xb654,	// (0x0008779d) vid4_progress_pane_g5_ParamLimits

0xb654,	// (0x0008779d) vid4_progress_pane_g5

0xbe76,	// (0x00087fbf) main_ncimui_pane_g1

0xbee2,	// (0x0008802b) ncimui_group_query_pane_ParamLimits

0xbee2,	// (0x0008802b) ncimui_group_query_pane

0xbf3c,	// (0x00088085) ncimui_list_pane_ParamLimits

0xbf3c,	// (0x00088085) ncimui_list_pane

0xbf63,	// (0x000880ac) ncimui_text_pane_ParamLimits

0xbf63,	// (0x000880ac) ncimui_text_pane

0xc003,	// (0x0008814c) ncimui_text_pane_t1_ParamLimits

0xc003,	// (0x0008814c) ncimui_text_pane_t1

0x3195,	// (0x0007f2de) ncimui_list_single_graphic_pane_ParamLimits

0x3195,	// (0x0007f2de) ncimui_list_single_graphic_pane

0xc022,	// (0x0008816b) ncimui_query_pane_ParamLimits

0xc022,	// (0x0008816b) ncimui_query_pane

0xddfa,	// (0x00089f43) list_highlight_pane_cp013

0x31a5,	// (0x0007f2ee) ncim_list_query_list_pane_t1_copy1

0x317f,	// (0x0007f2c8) ncim_list_single_graphic_pane_g1

0xc035,	// (0x0008817e) ncim_query_button_pane_cp01

0xc041,	// (0x0008818a) ncim_query_entry_pane_ParamLimits

0xc041,	// (0x0008818a) ncim_query_entry_pane

0xc054,	// (0x0008819d) ncimui_query_pane_g1

0xc060,	// (0x000881a9) ncimui_query_pane_t1_ParamLimits

0xc060,	// (0x000881a9) ncimui_query_pane_t1

0xe4c9,	// (0x0008a612) input_focus_pane_cp012

0x31b3,	// (0x0007f2fc) ncim_query_entry_pane_t1

0xe5a2,	// (0x0008a6eb) main_im_pane_ParamLimits

0x8b0b,	// (0x00084c54) main_mobtv_pane_ParamLimits

0x8b0b,	// (0x00084c54) main_mobtv_pane

0xbcd3,	// (0x00087e1c) main_cset6_slider_pane_g18_ParamLimits

0xbcd3,	// (0x00087e1c) main_cset6_slider_pane_g18

0xbcdf,	// (0x00087e28) main_cset6_slider_pane_g19_ParamLimits

0xbcdf,	// (0x00087e28) main_cset6_slider_pane_g19

0x07b2,	// (0x0007c8fb) bg_main_mobtv_pane_ParamLimits

0x07b2,	// (0x0007c8fb) bg_main_mobtv_pane

0xc079,	// (0x000881c2) main_mobtv_info_pane

0xc084,	// (0x000881cd) main_mobtv_loading_pane_ParamLimits

0xc084,	// (0x000881cd) main_mobtv_loading_pane

0x31c5,	// (0x0007f30e) main_mobtv_pg_channel_list_pane

0x31cf,	// (0x0007f318) main_mobtv_pg_hdr_pane

0xc091,	// (0x000881da) main_mobtv_programe_curr_pane_ParamLimits

0xc091,	// (0x000881da) main_mobtv_programe_curr_pane

0xc09e,	// (0x000881e7) main_mobtv_programe_next_pane_ParamLimits

0xc09e,	// (0x000881e7) main_mobtv_programe_next_pane

0x31d8,	// (0x0007f321) popup_mobtv_noti_window

0xe762,	// (0x0008a8ab) main_tv_pg_hdr_pane_g1

0x31e2,	// (0x0007f32b) main_tv_pg_hdr_pane_g2

0x31ea,	// (0x0007f333) main_tv_pg_hdr_pane_g3

0x31f2,	// (0x0007f33b) main_tv_pg_hdr_pane_g4

0x31fa,	// (0x0007f343) main_tv_pg_hdr_pane_g5

0x3204,	// (0x0007f34d) main_tv_pg_hdr_pane_g6

0x320e,	// (0x0007f357) main_tv_pg_hdr_pane_g7

0x3218,	// (0x0007f361) main_tv_pg_hdr_pane_g8

0x3222,	// (0x0007f36b) main_tv_pg_hdr_pane_g9

0x322c,	// (0x0007f375) main_tv_pg_hdr_pane_g10

0x3236,	// (0x0007f37f) main_tv_pg_hdr_pane_g11

0x000a,

0xfb83,	// (0x0008bccc) main_tv_pg_hdr_pane_g

0x3240,	// (0x0007f389) main_tv_pg_hdr_pane_t1

0x324e,	// (0x0007f397) main_tv_pg_hdr_pane_t2

0x325c,	// (0x0007f3a5) main_tv_pg_hdr_pane_t3

0x326c,	// (0x0007f3b5) main_tv_pg_hdr_pane_t4

0x327c,	// (0x0007f3c5) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9a,	// (0x0008bce3) main_tv_pg_hdr_pane_t

0x328c,	// (0x0007f3d5) single_mobtv_pg_channel_pane_ParamLimits

0x328c,	// (0x0007f3d5) single_mobtv_pg_channel_pane

0x329e,	// (0x0007f3e7) single_mobtv_pg_channel_table_pane

0x32a7,	// (0x0007f3f0) single_mobtv_pg_channel_thumb_pane

0x32b0,	// (0x0007f3f9) single_tv_pg_channel_pane_g1

0x32b9,	// (0x0007f402) single_tv_pg_channel_pane_g2

0x0001,

0xfba5,	// (0x0008bcee) single_tv_pg_channel_pane_g

0xe530,	// (0x0008a679) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe530,	// (0x0008a679) bg_single_mobtv_pg_channel_thumb_pane

0x32c2,	// (0x0007f40b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x32c2,	// (0x0007f40b) single_mobtv_pg_channel_thumb_pane_g1

0x32d0,	// (0x0007f419) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x32d0,	// (0x0007f419) single_mobtv_pg_channel_thumb_pane_g2

0x32dc,	// (0x0007f425) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x32dc,	// (0x0007f425) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbaa,	// (0x0008bcf3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbaa,	// (0x0008bcf3) single_mobtv_pg_channel_thumb_pane_g

0x32e8,	// (0x0007f431) single_mobtv_pg_channel_thumb_pane_t1

0x32f6,	// (0x0007f43f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb1,	// (0x0008bcfa) single_mobtv_pg_channel_thumb_pane_t

0xe762,	// (0x0008a8ab) bg_single_mobtv_pg_channel_table_pane_g1

0xe762,	// (0x0008a8ab) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x0008b526) bg_single_mobtv_pg_channel_table_pane_g

0x3304,	// (0x0007f44d) single_mobtv_pg_channel_table_pane_t1

0x3312,	// (0x0007f45b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb6,	// (0x0008bcff) single_mobtv_pg_channel_table_pane_t

0xc0b3,	// (0x000881fc) main_mobtv_info_pane_g1_ParamLimits

0xc0b3,	// (0x000881fc) main_mobtv_info_pane_g1

0xc0cf,	// (0x00088218) main_mobtv_info_pane_t1_ParamLimits

0xc0cf,	// (0x00088218) main_mobtv_info_pane_t1

0xc147,	// (0x00088290) main_mobtv_info_pane_t2_ParamLimits

0xc147,	// (0x00088290) main_mobtv_info_pane_t2

0x0002,

0xfbc0,	// (0x0008bd09) main_mobtv_info_pane_t_ParamLimits

0xfbc0,	// (0x0008bd09) main_mobtv_info_pane_t

0xc1d8,	// (0x00088321) wait_bar_pane_cp05

0xc1ea,	// (0x00088333) main_mobtv_loading_pane_g1_ParamLimits

0xc1ea,	// (0x00088333) main_mobtv_loading_pane_g1

0xc1f6,	// (0x0008833f) main_mobtv_loading_pane_g2_ParamLimits

0xc1f6,	// (0x0008833f) main_mobtv_loading_pane_g2

0xc202,	// (0x0008834b) main_mobtv_loading_pane_g3_ParamLimits

0xc202,	// (0x0008834b) main_mobtv_loading_pane_g3

0x0002,

0xfbc7,	// (0x0008bd10) main_mobtv_loading_pane_g_ParamLimits

0xfbc7,	// (0x0008bd10) main_mobtv_loading_pane_g

0x3320,	// (0x0007f469) main_mobtv_loading_pane_t1_ParamLimits

0x3320,	// (0x0007f469) main_mobtv_loading_pane_t1

0x3338,	// (0x0007f481) main_mobtv_loading_pane_t2_ParamLimits

0x3338,	// (0x0007f481) main_mobtv_loading_pane_t2

0x0001,

0xfbce,	// (0x0008bd17) main_mobtv_loading_pane_t_ParamLimits

0xfbce,	// (0x0008bd17) main_mobtv_loading_pane_t

0xc210,	// (0x00088359) wait_bar_pane_cp06_ParamLimits

0xc210,	// (0x00088359) wait_bar_pane_cp06

0x335c,	// (0x0007f4a5) main_mobtv_programe_curr_pane_t1

0x336a,	// (0x0007f4b3) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd3,	// (0x0008bd1c) main_mobtv_programe_curr_pane_t

0x3378,	// (0x0007f4c1) main_mobtv_programe_next_pane_t1

0x3386,	// (0x0007f4cf) main_mobtv_programe_next_pane_t2

0x3394,	// (0x0007f4dd) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd8,	// (0x0008bd21) main_mobtv_programe_next_pane_t

0xddfa,	// (0x00089f43) bg_popup_mobtv_noti_window_pane

0x33a2,	// (0x0007f4eb) popup_mobtv_noti_window_g1

0x33aa,	// (0x0007f4f3) popup_mobtv_noti_window_t1

0x33b8,	// (0x0007f501) popup_mobtv_noti_window_t2

0x0001,

0xfbdf,	// (0x0008bd28) popup_mobtv_noti_window_t

0xe762,	// (0x0008a8ab) bg_popup_mobtv_noti_window_pane_g1

0x5d7f,	// (0x00081ec8) sc_clock_pane

0x5d7f,	// (0x00081ec8) main_fs_bigclock_pane

0xb82f,	// (0x00087978) blid2_tripm_pane_t4_ParamLimits

0xb82f,	// (0x00087978) blid2_tripm_pane_t4

0xc21c,	// (0x00088365) sc_clock_pane_g1_ParamLimits

0xc21c,	// (0x00088365) sc_clock_pane_g1

0xc22a,	// (0x00088373) sc_clock_pane_t1_ParamLimits

0xc22a,	// (0x00088373) sc_clock_pane_t1

0xc23f,	// (0x00088388) sc_clock_pane_t2_ParamLimits

0xc23f,	// (0x00088388) sc_clock_pane_t2

0xc251,	// (0x0008839a) sc_clock_pane_t3_ParamLimits

0xc251,	// (0x0008839a) sc_clock_pane_t3

0x0004,

0xfbe4,	// (0x0008bd2d) sc_clock_pane_t_ParamLimits

0xfbe4,	// (0x0008bd2d) sc_clock_pane_t

0xcfbc,	// (0x00089105) main_fs_bigclock_indicator_pane_ParamLimits

0xcfbc,	// (0x00089105) main_fs_bigclock_indicator_pane

0xc2e0,	// (0x00088429) main_fs_bigclock_pane_g1_ParamLimits

0xc2e0,	// (0x00088429) main_fs_bigclock_pane_g1

0xcfc8,	// (0x00089111) main_fs_bigclock_pane_t1_ParamLimits

0xcfc8,	// (0x00089111) main_fs_bigclock_pane_t1

0xcfda,	// (0x00089123) main_fs_bigclock_pane_t2_ParamLimits

0xcfda,	// (0x00089123) main_fs_bigclock_pane_t2

0xcfee,	// (0x00089137) main_fs_bigclock_pane_t3_ParamLimits

0xcfee,	// (0x00089137) main_fs_bigclock_pane_t3

0x0002,

0xfd75,	// (0x0008bebe) main_fs_bigclock_pane_t_ParamLimits

0xfd75,	// (0x0008bebe) main_fs_bigclock_pane_t

0x3e4c,	// (0x0007ff95) main_fs_bigclock_indicator_pane_g1

0x30cc,	// (0x0007f215) ncim_query_content_pane_g2_ParamLimits

0x30cc,	// (0x0007f215) ncim_query_content_pane_g2

0x0001,

0xfb71,	// (0x0008bcba) ncim_query_content_pane_g_ParamLimits

0xfb71,	// (0x0008bcba) ncim_query_content_pane_g

0xc263,	// (0x000883ac) sc_clock_pane_t4_ParamLimits

0xc263,	// (0x000883ac) sc_clock_pane_t4

0x8b0b,	// (0x00084c54) main_radioblah_pane

0xa406,	// (0x0008654f) cell_call4_button_pane_t1_copy1_ParamLimits

0xa406,	// (0x0008654f) cell_call4_button_pane_t1_copy1

0xbe92,	// (0x00087fdb) main_ncimui_pane_t1_ParamLimits

0xbe92,	// (0x00087fdb) main_ncimui_pane_t1

0xbeac,	// (0x00087ff5) main_ncimui_pane_t2_ParamLimits

0xbeac,	// (0x00087ff5) main_ncimui_pane_t2

0x0002,

0xfb6a,	// (0x0008bcb3) main_ncimui_pane_t_ParamLimits

0xfb6a,	// (0x0008bcb3) main_ncimui_pane_t

0x33c6,	// (0x0007f50f) main_radioblah_anim_pane_ParamLimits

0x33c6,	// (0x0007f50f) main_radioblah_anim_pane

0x33d7,	// (0x0007f520) main_radioblah_info_pane_ParamLimits

0x33d7,	// (0x0007f520) main_radioblah_info_pane

0x33eb,	// (0x0007f534) main_radioblah_pane_t1_ParamLimits

0x33eb,	// (0x0007f534) main_radioblah_pane_t1

0x3407,	// (0x0007f550) main_radioblah_pane_t2_ParamLimits

0x3407,	// (0x0007f550) main_radioblah_pane_t2

0x0003,

0xfc05,	// (0x0008bd4e) main_radioblah_pane_t_ParamLimits

0xfc05,	// (0x0008bd4e) main_radioblah_pane_t

0xc47f,	// (0x000885c8) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc47f,	// (0x000885c8) main_radioblah_rocker_ctrl_pane

0x344f,	// (0x0007f598) main_radioblah_info_pane_t1_ParamLimits

0x344f,	// (0x0007f598) main_radioblah_info_pane_t1

0xc4c8,	// (0x00088611) main_radioblah_info_pane_t2_ParamLimits

0xc4c8,	// (0x00088611) main_radioblah_info_pane_t2

0x0003,

0xfc0e,	// (0x0008bd57) main_radioblah_info_pane_t_ParamLimits

0xfc0e,	// (0x0008bd57) main_radioblah_info_pane_t

0xe762,	// (0x0008a8ab) main_radioblah_rocker_ctrl_pane_g1

0xc578,	// (0x000886c1) main_radioblah_rocker_ctrl_pane_g2

0xc580,	// (0x000886c9) main_radioblah_rocker_ctrl_pane_g3

0xc588,	// (0x000886d1) main_radioblah_rocker_ctrl_pane_g4

0xc590,	// (0x000886d9) main_radioblah_rocker_ctrl_pane_g5

0xc598,	// (0x000886e1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc17,	// (0x0008bd60) main_radioblah_rocker_ctrl_pane_g

0xbe44,	// (0x00087f8d) main_cset_text2_pane_t1_copy1_ParamLimits

0xa48f,	// (0x000865d8) cam4_image_uncrop_qvga_pane

0xa5d4,	// (0x0008671d) vid4_image_uncrop_qcif_pane

0xb9c1,	// (0x00087b0a) cam6_image_uncrop_qvga_pane_ParamLimits

0xb9c1,	// (0x00087b0a) cam6_image_uncrop_qvga_pane

0x2dab,	// (0x0007eef4) vid6_image_uncrop_qcif_pane_ParamLimits

0x2dab,	// (0x0007eef4) vid6_image_uncrop_qcif_pane

0xddfa,	// (0x00089f43) bg_popup_preview_window_pane_cp03

0x307e,	// (0x0007f1c7) list_cset_text2_pane

0x3086,	// (0x0007f1cf) main_cset6_text2_pane_g1

0x308e,	// (0x0007f1d7) main_cset6_text2_pane_t1

0xc5a0,	// (0x000886e9) list_cset_text2_pane_t1_ParamLimits

0xc5a0,	// (0x000886e9) list_cset_text2_pane_t1

0x8b0b,	// (0x00084c54) main_radioblah_pane_ParamLimits

0xc1c4,	// (0x0008830d) main_mobtv_info_pane_t3_ParamLimits

0xc1c4,	// (0x0008830d) main_mobtv_info_pane_t3

0xc46d,	// (0x000885b6) main_radioblah_pane_g1

0xc498,	// (0x000885e1) main_radioblah_info_pane_g1

0xc51d,	// (0x00088666) main_radioblah_info_pane_t3_ParamLimits

0xc51d,	// (0x00088666) main_radioblah_info_pane_t3

0x7a63,	// (0x00083bac) highlight_cell_cale_month_pane_ParamLimits

0x7a63,	// (0x00083bac) highlight_cell_cale_month_pane

0x5d7f,	// (0x00081ec8) main_phob_fisheye_pane

0x22fc,	// (0x0007e445) scroll_pane_cp0031_ParamLimits

0x22fc,	// (0x0007e445) scroll_pane_cp0031

0x2ebd,	// (0x0007f006) wait_bar_pane_cp08_ParamLimits

0xbbcf,	// (0x00087d18) cset_list_set_pane_copy1_ParamLimits

0x34a3,	// (0x0007f5ec) highlight_cell_cale_month_pane_g1

0xc5b7,	// (0x00088700) highlight_cell_cale_month_pane_t1

0x2b06,	// (0x0007ec4f) list_gen_pane_cp01

0x26c4,	// (0x0007e80d) scroll_pane_01

0xc5c5,	// (0x0008870e) list_single_double_fisheye_pane

0xc5ce,	// (0x00088717) list_double_fisheye_pane_g1_ParamLimits

0xc5ce,	// (0x00088717) list_double_fisheye_pane_g1

0xc5da,	// (0x00088723) list_double_fisheye_pane_g2_ParamLimits

0xc5da,	// (0x00088723) list_double_fisheye_pane_g2

0xc5ee,	// (0x00088737) list_double_fisheye_pane_g3_ParamLimits

0xc5ee,	// (0x00088737) list_double_fisheye_pane_g3

0x0004,

0xfc24,	// (0x0008bd6d) list_double_fisheye_pane_g_ParamLimits

0xfc24,	// (0x0008bd6d) list_double_fisheye_pane_g

0xc617,	// (0x00088760) list_double_fisheye_pane_t1_ParamLimits

0xc617,	// (0x00088760) list_double_fisheye_pane_t1

0xc632,	// (0x0008877b) list_double_fisheye_pane_t2_ParamLimits

0xc632,	// (0x0008877b) list_double_fisheye_pane_t2

0x0001,

0xfc2f,	// (0x0008bd78) list_double_fisheye_pane_t_ParamLimits

0xfc2f,	// (0x0008bd78) list_double_fisheye_pane_t

0x5d7f,	// (0x00081ec8) main_call5_pane

0xc289,	// (0x000883d2) sc_swipe_pane_ParamLimits

0xc289,	// (0x000883d2) sc_swipe_pane

0xc660,	// (0x000887a9) call5_image_pane_ParamLimits

0xc660,	// (0x000887a9) call5_image_pane

0xc672,	// (0x000887bb) call5_swipe_1_pane_ParamLimits

0xc672,	// (0x000887bb) call5_swipe_1_pane

0xc67e,	// (0x000887c7) call5_swipe_2_pane_ParamLimits

0xc67e,	// (0x000887c7) call5_swipe_2_pane

0xc698,	// (0x000887e1) popup_call5_audio_first_window_ParamLimits

0xc698,	// (0x000887e1) popup_call5_audio_first_window

0xe530,	// (0x0008a679) call5_swipe_1_pane_g1_ParamLimits

0xe530,	// (0x0008a679) call5_swipe_1_pane_g1

0x34ab,	// (0x0007f5f4) call5_swipe_1_pane_g2_ParamLimits

0x34ab,	// (0x0007f5f4) call5_swipe_1_pane_g2

0x0001,

0xfc34,	// (0x0008bd7d) call5_swipe_1_pane_g_ParamLimits

0xfc34,	// (0x0008bd7d) call5_swipe_1_pane_g

0x34b7,	// (0x0007f600) call5_swipe_1_pane_t1_ParamLimits

0x34b7,	// (0x0007f600) call5_swipe_1_pane_t1

0xe530,	// (0x0008a679) call5_swipe_2_pane_g1_ParamLimits

0xe530,	// (0x0008a679) call5_swipe_2_pane_g1

0x34cc,	// (0x0007f615) call5_swipe_2_pane_g2_ParamLimits

0x34cc,	// (0x0007f615) call5_swipe_2_pane_g2

0x0001,

0xfc39,	// (0x0008bd82) call5_swipe_2_pane_g_ParamLimits

0xfc39,	// (0x0008bd82) call5_swipe_2_pane_g

0x34d8,	// (0x0007f621) call5_swipe_2_pane_t1_ParamLimits

0x34d8,	// (0x0007f621) call5_swipe_2_pane_t1

0x34ed,	// (0x0007f636) sc_swipe_pane_g1_ParamLimits

0x34ed,	// (0x0007f636) sc_swipe_pane_g1

0x34fa,	// (0x0007f643) sc_swipe_pane_g2_ParamLimits

0x34fa,	// (0x0007f643) sc_swipe_pane_g2

0x0001,

0xfc3e,	// (0x0008bd87) sc_swipe_pane_g_ParamLimits

0xfc3e,	// (0x0008bd87) sc_swipe_pane_g

0x3506,	// (0x0007f64f) sc_swipe_pane_t1_ParamLimits

0x3506,	// (0x0007f64f) sc_swipe_pane_t1

0x5d7f,	// (0x00081ec8) main_cmail_launcher_pane

0xc6a8,	// (0x000887f1) aid_size_cell_cmail_l_ParamLimits

0xc6a8,	// (0x000887f1) aid_size_cell_cmail_l

0xc6b6,	// (0x000887ff) grid_cmail_l_pane_ParamLimits

0xc6b6,	// (0x000887ff) grid_cmail_l_pane

0xc6c6,	// (0x0008880f) cell_cmail_l_pane_ParamLimits

0xc6c6,	// (0x0008880f) cell_cmail_l_pane

0x351b,	// (0x0007f664) cell_cmail_l_pane_g1_ParamLimits

0x351b,	// (0x0007f664) cell_cmail_l_pane_g1

0x3527,	// (0x0007f670) cell_cmail_l_pane_t1_ParamLimits

0x3527,	// (0x0007f670) cell_cmail_l_pane_t1

0x353d,	// (0x0007f686) cell_cmail_l_pane_t2_ParamLimits

0x353d,	// (0x0007f686) cell_cmail_l_pane_t2

0x0001,

0xfc43,	// (0x0008bd8c) cell_cmail_l_pane_t_ParamLimits

0xfc43,	// (0x0008bd8c) cell_cmail_l_pane_t

0xe4c9,	// (0x0008a612) grid_highlight_pane_cp018_ParamLimits

0xe4c9,	// (0x0008a612) grid_highlight_pane_cp018

0x5bd4,	// (0x00081d1d) main2_pane_ParamLimits

0x5bd4,	// (0x00081d1d) main2_pane

0xe631,	// (0x0008a77a) popup_sp_fs_action_menu_bg_pane_g1

0xe639,	// (0x0008a782) popup_sp_fs_action_menu_bg_pane_g2

0xe641,	// (0x0008a78a) popup_sp_fs_action_menu_bg_pane_g3

0xe649,	// (0x0008a792) popup_sp_fs_action_menu_bg_pane_g4

0xe651,	// (0x0008a79a) popup_sp_fs_action_menu_bg_pane_g5

0xe659,	// (0x0008a7a2) popup_sp_fs_action_menu_bg_pane_g6

0xe661,	// (0x0008a7aa) popup_sp_fs_action_menu_bg_pane_g7

0xe669,	// (0x0008a7b2) popup_sp_fs_action_menu_bg_pane_g8

0xe671,	// (0x0008a7ba) popup_sp_fs_action_menu_bg_pane_g9

0xe679,	// (0x0008a7c2) popup_sp_fs_action_menu_bg_pane_g10

0xe679,	// (0x0008a7c2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0008b28e) popup_sp_fs_action_menu_bg_pane_g

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g3_g1

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g3_g2

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0008b33c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0008b33c) list_medium_line_x2_t3_g3_g

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g3_t1

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g3_t2

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0008b343) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0008b343) list_medium_line_x2_t3_g3_t

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g2_g1

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0008b34a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0008b34a) list_medium_line_x2_t3_g2_g

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g2_t1

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g2_t2

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0008b343) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0008b343) list_medium_line_x2_t3_g2_t

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g4_g1

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g4_g2

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g4_g3

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0008b34f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0008b34f) list_medium_line_x2_t4_g4_g

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g4_t1

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g4_t2

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g4_t3

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0008b358) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0008b358) list_medium_line_x2_t4_g4_t

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g4_g1

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g4_g2

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g4_g3

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0008b34f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0008b34f) list_medium_line_x2_t2_g4_g

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g4_t1

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0008b3bf) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0008b3bf) list_medium_line_x2_t2_g4_t

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g3_g1

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g3_g2

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0008b33c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0008b33c) list_medium_line_x2_t2_g3_g

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g3_t1

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0008b3bf) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0008b3bf) list_medium_line_x2_t2_g3_t

0x7c0c,	// (0x00083d55) main_sp_fs_list_pane_ParamLimits

0x7c0c,	// (0x00083d55) main_sp_fs_list_pane

0x7c18,	// (0x00083d61) sp_fs_scroll_pane_ParamLimits

0x7c18,	// (0x00083d61) sp_fs_scroll_pane

0xeca2,	// (0x0008adeb) list_medium_line_x2_t3_t1

0xeca2,	// (0x0008adeb) list_medium_line_x2_t3_t2

0xeca2,	// (0x0008adeb) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x0008b40a) list_medium_line_x2_t3_t

0xeca2,	// (0x0008adeb) list_medium_line_x3_t4_t1

0xeca2,	// (0x0008adeb) list_medium_line_x3_t4_t2

0xeca2,	// (0x0008adeb) list_medium_line_x3_t4_t3

0xeca2,	// (0x0008adeb) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0008b411) list_medium_line_x3_t4_t

0xeca2,	// (0x0008adeb) list_medium_line_x4_t5_t1

0xeca2,	// (0x0008adeb) list_medium_line_x4_t5_t2

0xeca2,	// (0x0008adeb) list_medium_line_x4_t5_t3

0xeca2,	// (0x0008adeb) list_medium_line_x4_t5_t4

0xeca2,	// (0x0008adeb) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x0008b41a) list_medium_line_x4_t5_t

0xe530,	// (0x0008a679) list_medium_line_t4_g4_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t4_g4_g1

0xe530,	// (0x0008a679) list_medium_line_t4_g4_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t4_g4_g2

0xe530,	// (0x0008a679) list_medium_line_t4_g4_g3_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t4_g4_g3

0xe530,	// (0x0008a679) list_medium_line_t4_g4_g4_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0008b34f) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0008b34f) list_medium_line_t4_g4_g

0xe77c,	// (0x0008a8c5) list_medium_line_t4_g4_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t4_g4_t1

0xe77c,	// (0x0008a8c5) list_medium_line_t4_g4_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t4_g4_t2

0xe77c,	// (0x0008a8c5) list_medium_line_t4_g4_t3_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t4_g4_t3

0xe77c,	// (0x0008a8c5) list_medium_line_t4_g4_t4_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0008b358) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0008b358) list_medium_line_t4_g4_t

0x7d11,	// (0x00083e5a) chi_dic_find_pane_g1

0x8b33,	// (0x00084c7c) main_tport_pane

0xeca2,	// (0x0008adeb) list_medium_line_plain_t1

0xe530,	// (0x0008a679) list_medium_line_t2_g2_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t2_g2_g1

0xe530,	// (0x0008a679) list_medium_line_t2_g2_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0008b34a) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0008b34a) list_medium_line_t2_g2_g

0xe77c,	// (0x0008a8c5) list_medium_line_t2_g2_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t2_g2_t1

0xe77c,	// (0x0008a8c5) list_medium_line_t2_g2_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x0008b3bf) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x0008b3bf) list_medium_line_t2_g2_t

0x2b0f,	// (0x0007ec58) aid_sp_fs_list_icon_a_sm

0x4822,	// (0x0008096b) aid_sp_fs_list_icon_d

0x2b17,	// (0x0007ec60) aid_sp_fs_text_primary

0x2b20,	// (0x0007ec69) aid_sp_fs_text_secondary

0xddfa,	// (0x00089f43) list_medium_line

0xddfa,	// (0x00089f43) list_medium_line_g2

0xddfa,	// (0x00089f43) list_medium_line_g3

0xddfa,	// (0x00089f43) list_medium_line_plain

0xddfa,	// (0x00089f43) list_medium_line_plain_t2

0xddfa,	// (0x00089f43) list_medium_line_plain_t3

0xddfa,	// (0x00089f43) list_medium_line_right_icon

0xddfa,	// (0x00089f43) list_medium_line_right_iconx2

0xddfa,	// (0x00089f43) list_medium_line_t2

0xddfa,	// (0x00089f43) list_medium_line_t2_g2

0xddfa,	// (0x00089f43) list_medium_line_t2_g3

0xddfa,	// (0x00089f43) list_medium_line_t2_right_icon

0xddfa,	// (0x00089f43) list_medium_line_t2_right_iconx2

0xddfa,	// (0x00089f43) list_medium_line_t3

0xddfa,	// (0x00089f43) list_medium_line_t3_g2

0xddfa,	// (0x00089f43) list_medium_line_t3_g3

0xddfa,	// (0x00089f43) list_medium_line_t3_right_iconx2

0xddfa,	// (0x00089f43) list_medium_line_t4_g4

0xddfa,	// (0x00089f43) list_medium_line_x2

0xddfa,	// (0x00089f43) list_medium_line_x2_t2_g2

0xddfa,	// (0x00089f43) list_medium_line_x2_t2_g3

0xddfa,	// (0x00089f43) list_medium_line_x2_t2_g4

0xddfa,	// (0x00089f43) list_medium_line_x2_t3

0xddfa,	// (0x00089f43) list_medium_line_x2_t3_g2

0xddfa,	// (0x00089f43) list_medium_line_x2_t3_g3

0xddfa,	// (0x00089f43) list_medium_line_x2_t3_g4

0xddfa,	// (0x00089f43) list_medium_line_x2_t4_g2

0xddfa,	// (0x00089f43) list_medium_line_x2_t4_g4

0xddfa,	// (0x00089f43) list_medium_line_x3

0xddfa,	// (0x00089f43) list_medium_line_x3_t4

0xddfa,	// (0x00089f43) list_medium_line_x3_t4_g4

0xddfa,	// (0x00089f43) list_medium_line_x4_t4

0xddfa,	// (0x00089f43) list_medium_line_x4_t4_g7

0xddfa,	// (0x00089f43) list_medium_line_x4_t5

0xb6ba,	// (0x00087803) list_single_fs_dyc_pane_ParamLimits

0xb6ba,	// (0x00087803) list_single_fs_dyc_pane

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g1

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g2

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g3

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g4

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g5

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x4_t4_g7_g6

0xe53e,	// (0x0008a687) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe53e,	// (0x0008a687) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4b,	// (0x0008bc94) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4b,	// (0x0008bc94) list_medium_line_x4_t4_g7_g

0xe77c,	// (0x0008a8c5) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x4_t4_g7_t1

0xe77c,	// (0x0008a8c5) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x4_t4_g7_t2

0xe77c,	// (0x0008a8c5) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x4_t4_g7_t3

0x07d4,	// (0x0007c91d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x07d4,	// (0x0007c91d) list_medium_line_x4_t4_g7_t4

0x07d4,	// (0x0007c91d) list_medium_line_x4_t4_g7_t5_ParamLimits

0x07d4,	// (0x0007c91d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5a,	// (0x0008bca3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5a,	// (0x0008bca3) list_medium_line_x4_t4_g7_t

0xbe27,	// (0x00087f70) list_single_dyc_row_pane_ParamLimits

0xbe27,	// (0x00087f70) list_single_dyc_row_pane

0xc654,	// (0x0008879d) call5_gesture_pane_ParamLimits

0xc654,	// (0x0008879d) call5_gesture_pane

0xc68a,	// (0x000887d3) call5_windows_pane_ParamLimits

0xc68a,	// (0x000887d3) call5_windows_pane

0xc6db,	// (0x00088824) call5_swipe_1_pane_cp_ParamLimits

0xc6db,	// (0x00088824) call5_swipe_1_pane_cp

0xc6e7,	// (0x00088830) call5_swipe_2_pane_cp_ParamLimits

0xc6e7,	// (0x00088830) call5_swipe_2_pane_cp

0xe740,	// (0x0008a889) call5_image_pane_cp

0xc6f3,	// (0x0008883c) popup_call5_audio_first_window_cp_ParamLimits

0xc6f3,	// (0x0008883c) popup_call5_audio_first_window_cp

0x34ed,	// (0x0007f636) call5_swipe_1_pane_g1_cp_ParamLimits

0x34ed,	// (0x0007f636) call5_swipe_1_pane_g1_cp

0x355a,	// (0x0007f6a3) call5_swipe_1_pane_g2_cp

0x3506,	// (0x0007f64f) call5_swipe_1_pane_t1_cp_ParamLimits

0x3506,	// (0x0007f64f) call5_swipe_1_pane_t1_cp

0x34ed,	// (0x0007f636) call5_swipe_2_pane_g1_cp_ParamLimits

0x34ed,	// (0x0007f636) call5_swipe_2_pane_g1_cp

0x3562,	// (0x0007f6ab) call5_swipe_2_pane_g2_cp

0x356a,	// (0x0007f6b3) call5_swipe_2_pane_t1_cp_ParamLimits

0x356a,	// (0x0007f6b3) call5_swipe_2_pane_t1_cp

0xe4c9,	// (0x0008a612) main_sp_fs_email_pane

0x27a7,	// (0x0007e8f0) main_sp_fs_listscroll_pane_te

0xc701,	// (0x0008884a) popup_sp_fs_action_menu_pane_ParamLimits

0xc701,	// (0x0008884a) popup_sp_fs_action_menu_pane

0xe762,	// (0x0008a8ab) bg_sp_fs_ctrlbar_pane_g1

0x357f,	// (0x0007f6c8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3588,	// (0x0007f6d1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3591,	// (0x0007f6da) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe762,	// (0x0008a8ab) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc48,	// (0x0008bd91) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1cac,	// (0x0007ddf5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1cac,	// (0x0007ddf5) bg_sp_fs_ctrlbar_ddmenu_pane

0x359a,	// (0x0007f6e3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x359a,	// (0x0007f6e3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x35a6,	// (0x0007f6ef) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x35a6,	// (0x0007f6ef) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc51,	// (0x0008bd9a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc51,	// (0x0008bd9a) main_sp_fs_ctrlbar_ddmenu_pane_g

0x35b2,	// (0x0007f6fb) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x35b2,	// (0x0007f6fb) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe762,	// (0x0008a8ab) list_medium_line_t2_right_icon_g1

0xeca2,	// (0x0008adeb) list_medium_line_t2_right_icon_t1

0xeca2,	// (0x0008adeb) list_medium_line_t2_right_icon_t2

0x0001,

0xfc56,	// (0x0008bd9f) list_medium_line_t2_right_icon_t

0x07e8,	// (0x0007c931) bg_sp_fs_ctrlbar_pane_ParamLimits

0x07e8,	// (0x0007c931) bg_sp_fs_ctrlbar_pane

0xc7a0,	// (0x000888e9) main_sp_fs_ctrlbar_button_pane_cp01

0xc7a8,	// (0x000888f1) main_sp_fs_ctrlbar_ddmenu_pane

0x3606,	// (0x0007f74f) main_sp_fs_ctrlbar_pane_g1

0x3612,	// (0x0007f75b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5b,	// (0x0008bda4) main_sp_fs_ctrlbar_pane_g

0xc7e6,	// (0x0008892f) main_sp_fs_ctrlbar_pane_t1

0xc823,	// (0x0008896c) main_sp_fs_ctrlbar_pane

0xc83d,	// (0x00088986) main_sp_fs_listscroll_pane_te_cp01

0xc84e,	// (0x00088997) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc84e,	// (0x00088997) popup_sp_fs_action_menu_pane_cp01

0xe4c9,	// (0x0008a612) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe4c9,	// (0x0008a612) bg_sp_fs_highlight_list_pane_cp01

0x3639,	// (0x0007f782) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3639,	// (0x0007f782) sp_fs_action_menu_list_gene_pane_g1

0x3648,	// (0x0007f791) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3648,	// (0x0007f791) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc69,	// (0x0008bdb2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc69,	// (0x0008bdb2) sp_fs_action_menu_list_gene_pane_g

0x3655,	// (0x0007f79e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3655,	// (0x0007f79e) sp_fs_action_menu_list_gene_pane_t1

0x366d,	// (0x0007f7b6) sp_fs_action_menu_list_gene_pane_ParamLimits

0x366d,	// (0x0007f7b6) sp_fs_action_menu_list_gene_pane

0x3690,	// (0x0007f7d9) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3690,	// (0x0007f7d9) popup_sp_fs_action_menu_bg_pane

0x369e,	// (0x0007f7e7) sp_fs_action_menu_list_pane_ParamLimits

0x369e,	// (0x0007f7e7) sp_fs_action_menu_list_pane

0xc86e,	// (0x000889b7) sp_fs_scroll_pane_cp01_ParamLimits

0xc86e,	// (0x000889b7) sp_fs_scroll_pane_cp01

0xeca2,	// (0x0008adeb) list_medium_line_plain_t2_t1

0xeca2,	// (0x0008adeb) list_medium_line_plain_t2_t2

0x0001,

0xfc56,	// (0x0008bd9f) list_medium_line_plain_t2_t

0xeca2,	// (0x0008adeb) list_medium_line_plain_t3_t1

0xeca2,	// (0x0008adeb) list_medium_line_plain_t3_t2

0xeca2,	// (0x0008adeb) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x0008b40a) list_medium_line_plain_t3_t

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g2_g1

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0008b34a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0008b34a) list_medium_line_x2_t2_g2_g

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g2_t1

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0008b3bf) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0008b3bf) list_medium_line_x2_t2_g2_t

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g2_g1

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0008b34a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0008b34a) list_medium_line_x2_t4_g2_g

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g2_t1

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g2_t2

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g2_t3

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0008b358) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0008b358) list_medium_line_x2_t4_g2_t

0xe762,	// (0x0008a8ab) list_medium_line_t3_right_iconx2_g1

0xe762,	// (0x0008a8ab) list_medium_line_t3_right_iconx2_g2

0xe762,	// (0x0008a8ab) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x0008b52b) list_medium_line_t3_right_iconx2_g

0xeca2,	// (0x0008adeb) list_medium_line_t3_right_iconx2_t1

0xeca2,	// (0x0008adeb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc56,	// (0x0008bd9f) list_medium_line_t3_right_iconx2_t

0xe530,	// (0x0008a679) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x3_t4_g4_g1

0xe530,	// (0x0008a679) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x3_t4_g4_g2

0xe530,	// (0x0008a679) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x3_t4_g4_g3

0xe530,	// (0x0008a679) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0008b34f) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0008b34f) list_medium_line_x3_t4_g4_g

0xe77c,	// (0x0008a8c5) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x3_t4_g4_t1

0xe77c,	// (0x0008a8c5) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x3_t4_g4_t2

0xe77c,	// (0x0008a8c5) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x3_t4_g4_t3

0xe77c,	// (0x0008a8c5) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0008b358) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0008b358) list_medium_line_x3_t4_g4_t

0xc894,	// (0x000889dd) list_single_dyc_row_text_pane_t1_ParamLimits

0xc894,	// (0x000889dd) list_single_dyc_row_text_pane_t1

0xc8d7,	// (0x00088a20) list_single_dyc_row_text_pane_t2_ParamLimits

0xc8d7,	// (0x00088a20) list_single_dyc_row_text_pane_t2

0x36c2,	// (0x0007f80b) list_single_dyc_row_text_pane_t3_ParamLimits

0x36c2,	// (0x0007f80b) list_single_dyc_row_text_pane_t3

0x0005,

0xfc6e,	// (0x0008bdb7) list_single_dyc_row_text_pane_t_ParamLimits

0xfc6e,	// (0x0008bdb7) list_single_dyc_row_text_pane_t

0x36e6,	// (0x0007f82f) list_single_dyc_row_pane_g1_ParamLimits

0x36e6,	// (0x0007f82f) list_single_dyc_row_pane_g1

0x36f2,	// (0x0007f83b) list_single_dyc_row_pane_g2_ParamLimits

0x36f2,	// (0x0007f83b) list_single_dyc_row_pane_g2

0x36fe,	// (0x0007f847) list_single_dyc_row_pane_g3_ParamLimits

0x36fe,	// (0x0007f847) list_single_dyc_row_pane_g3

0x370a,	// (0x0007f853) list_single_dyc_row_pane_g4_ParamLimits

0x370a,	// (0x0007f853) list_single_dyc_row_pane_g4

0x0003,

0xfc7b,	// (0x0008bdc4) list_single_dyc_row_pane_g_ParamLimits

0xfc7b,	// (0x0008bdc4) list_single_dyc_row_pane_g

0x3716,	// (0x0007f85f) list_single_dyc_row_text_pane_ParamLimits

0x3716,	// (0x0007f85f) list_single_dyc_row_text_pane

0xddfa,	// (0x00089f43) bg_sp_fs_scroll_pane

0x3735,	// (0x0007f87e) thumb_sp_fs_scroll_pane

0xe530,	// (0x0008a679) list_medium_line_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_g1

0xe77c,	// (0x0008a8c5) list_medium_line_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t1

0xe530,	// (0x0008a679) list_medium_line_x2_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_g1

0xe530,	// (0x0008a679) list_medium_line_x2_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0008b34a) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0008b34a) list_medium_line_x2_g

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t1

0xe530,	// (0x0008a679) list_medium_line_x3_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x3_g1

0x373e,	// (0x0007f887) list_medium_line_x3_g2_ParamLimits

0x373e,	// (0x0007f887) list_medium_line_x3_g2

0x0001,

0xfc84,	// (0x0008bdcd) list_medium_line_x3_g_ParamLimits

0xfc84,	// (0x0008bdcd) list_medium_line_x3_g

0x374c,	// (0x0007f895) list_medium_line_x3_t1_ParamLimits

0x374c,	// (0x0007f895) list_medium_line_x3_t1

0x3760,	// (0x0007f8a9) thumb_sp_fs_scroll_pane_g1

0x3769,	// (0x0007f8b2) thumb_sp_fs_scroll_pane_g2

0x3772,	// (0x0007f8bb) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x0008bdd2) thumb_sp_fs_scroll_pane_g

0x3760,	// (0x0007f8a9) bg_sp_fs_scroll_pane_g1

0x3769,	// (0x0007f8b2) bg_sp_fs_scroll_pane_g2

0x3772,	// (0x0007f8bb) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x0008bdd2) bg_sp_fs_scroll_pane_g

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g4_g1

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g4_g2

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g4_g3

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0008b34f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0008b34f) list_medium_line_x2_t3_g4_g

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g4_t1

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g4_t2

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0008b343) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0008b343) list_medium_line_x2_t3_g4_t

0xe530,	// (0x0008a679) list_medium_line_g2_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_g2_g1

0xe530,	// (0x0008a679) list_medium_line_g2_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0008b34a) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0008b34a) list_medium_line_g2_g

0xe77c,	// (0x0008a8c5) list_medium_line_g2_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_g2_t1

0xe530,	// (0x0008a679) list_medium_line_t3_g2_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t3_g2_g1

0xe530,	// (0x0008a679) list_medium_line_t3_g2_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0008b34a) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0008b34a) list_medium_line_t3_g2_g

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g2_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g2_t1

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g2_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g2_t2

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g2_t3_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0008b343) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0008b343) list_medium_line_t3_g2_t

0xe762,	// (0x0008a8ab) list_medium_line_right_icon_g1

0xeca2,	// (0x0008adeb) list_medium_line_right_icon_t1

0xe530,	// (0x0008a679) list_medium_line_t2_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t2_g1

0xe77c,	// (0x0008a8c5) list_medium_line_t2_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t2_t1

0xe77c,	// (0x0008a8c5) list_medium_line_t2_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x0008b3bf) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x0008b3bf) list_medium_line_t2_t

0xe530,	// (0x0008a679) list_medium_line_t3_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t3_g1

0xe77c,	// (0x0008a8c5) list_medium_line_t3_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t3_t1

0xe77c,	// (0x0008a8c5) list_medium_line_t3_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t3_t2

0xe77c,	// (0x0008a8c5) list_medium_line_t3_t3_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0008b343) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0008b343) list_medium_line_t3_t

0xe530,	// (0x0008a679) list_medium_line_g3_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_g3_g1

0xe530,	// (0x0008a679) list_medium_line_g3_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_g3_g2

0xe530,	// (0x0008a679) list_medium_line_g3_g3_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0008b33c) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0008b33c) list_medium_line_g3_g

0xe77c,	// (0x0008a8c5) list_medium_line_g3_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_g3_t1

0xe530,	// (0x0008a679) list_medium_line_t2_g3_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t2_g3_g1

0xe530,	// (0x0008a679) list_medium_line_t2_g3_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t2_g3_g2

0xe530,	// (0x0008a679) list_medium_line_t2_g3_g3_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0008b33c) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0008b33c) list_medium_line_t2_g3_g

0xe77c,	// (0x0008a8c5) list_medium_line_t2_g3_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t2_g3_t1

0xe77c,	// (0x0008a8c5) list_medium_line_t2_g3_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x0008b3bf) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x0008b3bf) list_medium_line_t2_g3_t

0xe530,	// (0x0008a679) list_medium_line_t3_g3_g1_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t3_g3_g1

0xe530,	// (0x0008a679) list_medium_line_t3_g3_g2_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t3_g3_g2

0xe530,	// (0x0008a679) list_medium_line_t3_g3_g3_ParamLimits

0xe530,	// (0x0008a679) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0008b33c) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0008b33c) list_medium_line_t3_g3_g

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g3_t1_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g3_t1

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g3_t2_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g3_t2

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g3_t3_ParamLimits

0xe77c,	// (0x0008a8c5) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0008b343) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0008b343) list_medium_line_t3_g3_t

0xe762,	// (0x0008a8ab) list_medium_line_right_iconx2_g1

0xe762,	// (0x0008a8ab) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0008b526) list_medium_line_right_iconx2_g

0xeca2,	// (0x0008adeb) list_medium_line_right_iconx2_t1

0xe762,	// (0x0008a8ab) list_medium_line_t2_right_iconx2_g1

0xe762,	// (0x0008a8ab) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x0008b526) list_medium_line_t2_right_iconx2_g

0xeca2,	// (0x0008adeb) list_medium_line_t2_right_iconx2_t1

0xeca2,	// (0x0008adeb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc56,	// (0x0008bd9f) list_medium_line_t2_right_iconx2_t

0xeca2,	// (0x0008adeb) list_medium_line_x4_t4_t1

0xeca2,	// (0x0008adeb) list_medium_line_x4_t4_t2

0xeca2,	// (0x0008adeb) list_medium_line_x4_t4_t3

0xeca2,	// (0x0008adeb) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0008b411) list_medium_line_x4_t4_t

0xca32,	// (0x00088b7b) tport_appsw_pane_ParamLimits

0xca32,	// (0x00088b7b) tport_appsw_pane

0xca40,	// (0x00088b89) tport_contact_pane_ParamLimits

0xca40,	// (0x00088b89) tport_contact_pane

0xca50,	// (0x00088b99) tport_listscroll_pane_ParamLimits

0xca50,	// (0x00088b99) tport_listscroll_pane

0xca5f,	// (0x00088ba8) cell_tport_appsw_pane_ParamLimits

0xca5f,	// (0x00088ba8) cell_tport_appsw_pane

0xe53e,	// (0x0008a687) tport_appsw_pane_g1_ParamLimits

0xe53e,	// (0x0008a687) tport_appsw_pane_g1

0x377b,	// (0x0007f8c4) tport_contact_pane_g1

0x3784,	// (0x0007f8cd) tport_contact_pane_t1

0x3792,	// (0x0007f8db) tport_contact_pane_t2

0x0001,

0xfc90,	// (0x0008bdd9) tport_contact_pane_t

0x37a0,	// (0x0007f8e9) list_tport_pane

0x37a9,	// (0x0007f8f2) scroll_pane_cp_030

0xca94,	// (0x00088bdd) cell_tport_appsw_pane_g1

0xcaa4,	// (0x00088bed) cell_tport_appsw_pane_t1

0xcab2,	// (0x00088bfb) grid_highlight_pane_cp019

0xcaba,	// (0x00088c03) list_tport_double_graphic_pane_ParamLimits

0xcaba,	// (0x00088c03) list_tport_double_graphic_pane

0xe4c9,	// (0x0008a612) list_highlight_pane_cp023_ParamLimits

0xe4c9,	// (0x0008a612) list_highlight_pane_cp023

0xcad7,	// (0x00088c20) list_tport_double_graphic_pane_g1_ParamLimits

0xcad7,	// (0x00088c20) list_tport_double_graphic_pane_g1

0xcae4,	// (0x00088c2d) list_tport_double_graphic_pane_t1_ParamLimits

0xcae4,	// (0x00088c2d) list_tport_double_graphic_pane_t1

0xcaf9,	// (0x00088c42) list_tport_double_graphic_pane_t2_ParamLimits

0xcaf9,	// (0x00088c42) list_tport_double_graphic_pane_t2

0x0001,

0xfc9c,	// (0x0008bde5) list_tport_double_graphic_pane_t_ParamLimits

0xfc9c,	// (0x0008bde5) list_tport_double_graphic_pane_t

0xddfa,	// (0x00089f43) main_cale_note_pane

0xa81f,	// (0x00086968) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa81f,	// (0x00086968) cell_vitu2_function_top_wide_pane_cp01

0xc1d8,	// (0x00088321) wait_bar_pane_cp05_ParamLimits

0xe4c9,	// (0x0008a612) listscroll_cmail_pane

0x37b2,	// (0x0007f8fb) list_cmail_pane

0xcb0b,	// (0x00088c54) list_cmail_body_pane

0xcb25,	// (0x00088c6e) list_single_cmail_header_caption_pane

0x37c2,	// (0x0007f90b) list_single_cmail_header_detail_pane_ParamLimits

0x37c2,	// (0x0007f90b) list_single_cmail_header_detail_pane

0x37f4,	// (0x0007f93d) list_single_cmail_header_caption_pane_t1

0xcb45,	// (0x00088c8e) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcb45,	// (0x00088c8e) list_single_cmail_header_detail_pane_g1

0x4838,	// (0x00080981) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4838,	// (0x00080981) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca1,	// (0x0008bdea) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca1,	// (0x0008bdea) list_single_cmail_header_detail_pane_g

0x3818,	// (0x0007f961) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3818,	// (0x0007f961) list_single_cmail_header_detail_pane_t1

0x3878,	// (0x0007f9c1) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3878,	// (0x0007f9c1) list_single_cmail_header_editor_pane_bg

0x32b9,	// (0x0007f402) list_cmail_body_pane_g1

0x388f,	// (0x0007f9d8) list_cmail_body_pane_t1

0x25a6,	// (0x0007e6ef) list_single_cmail_header_editor_pane_bg_g1

0xe98b,	// (0x0008aad4) list_single_cmail_header_editor_pane_bg_g1_copy1

0x25b6,	// (0x0007e6ff) list_single_cmail_header_editor_pane_bg_g1_copy2

0x25ae,	// (0x0007e6f7) list_single_cmail_header_editor_pane_bg_g1_copy3

0x27e3,	// (0x0007e92c) list_single_cmail_header_editor_pane_bg_g1_copy4

0x25d6,	// (0x0007e71f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x25c6,	// (0x0007e70f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x25ce,	// (0x0007e717) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe96b,	// (0x0008aab4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcb5d,	// (0x00088ca6) calenote_gesture_pane_ParamLimits

0xcb5d,	// (0x00088ca6) calenote_gesture_pane

0xcb77,	// (0x00088cc0) calenote_window_pane_ParamLimits

0xcb77,	// (0x00088cc0) calenote_window_pane

0x389d,	// (0x0007f9e6) popup_note_window_cp01

0xcb8f,	// (0x00088cd8) calenote_swipe_1_pane_ParamLimits

0xcb8f,	// (0x00088cd8) calenote_swipe_1_pane

0xc6e7,	// (0x00088830) calenote_swipe_2_pane_ParamLimits

0xc6e7,	// (0x00088830) calenote_swipe_2_pane

0x34ed,	// (0x0007f636) calenote_swipe_1_pane_g1_ParamLimits

0x34ed,	// (0x0007f636) calenote_swipe_1_pane_g1

0x34fa,	// (0x0007f643) calenote_swipe_1_pane_g2_ParamLimits

0x34fa,	// (0x0007f643) calenote_swipe_1_pane_g2

0x0001,

0xfc3e,	// (0x0008bd87) calenote_swipe_1_pane_g_ParamLimits

0xfc3e,	// (0x0008bd87) calenote_swipe_1_pane_g

0x38af,	// (0x0007f9f8) calenote_swipe_1_pane_t1_ParamLimits

0x38af,	// (0x0007f9f8) calenote_swipe_1_pane_t1

0x34ed,	// (0x0007f636) calenote_swipe_2_pane_g1_ParamLimits

0x34ed,	// (0x0007f636) calenote_swipe_2_pane_g1

0x38ce,	// (0x0007fa17) calenote_swipe_2_pane_g2_ParamLimits

0x38ce,	// (0x0007fa17) calenote_swipe_2_pane_g2

0x0001,

0xfcad,	// (0x0008bdf6) calenote_swipe_2_pane_g_ParamLimits

0xfcad,	// (0x0008bdf6) calenote_swipe_2_pane_g

0x38da,	// (0x0007fa23) calenote_swipe_2_pane_t1_ParamLimits

0x38da,	// (0x0007fa23) calenote_swipe_2_pane_t1

0xddfa,	// (0x00089f43) main_mup_navstr_pane

0x96b6,	// (0x000857ff) main_mup3_pane_t7_ParamLimits

0x96b6,	// (0x000857ff) main_mup3_pane_t7

0x9ec4,	// (0x0008600d) main_mp4_pane_g6_ParamLimits

0x9ec4,	// (0x0008600d) main_mp4_pane_g6

0xa25e,	// (0x000863a7) main_image3_pane_t4_ParamLimits

0xa25e,	// (0x000863a7) main_image3_pane_t4

0xcba2,	// (0x00088ceb) popup_navstr_preview_pane_ParamLimits

0xcba2,	// (0x00088ceb) popup_navstr_preview_pane

0xcbae,	// (0x00088cf7) scroll_navstr_pane_ParamLimits

0xcbae,	// (0x00088cf7) scroll_navstr_pane

0xddfa,	// (0x00089f43) bg_popup_preview_window_pane_cp04

0x3901,	// (0x0007fa4a) popup_navstr_preview_pane_t1

0xcbba,	// (0x00088d03) scroll_navstr_pane_g1_ParamLimits

0xcbba,	// (0x00088d03) scroll_navstr_pane_g1

0xcbc7,	// (0x00088d10) scroll_navstr_pane_t1_ParamLimits

0xcbc7,	// (0x00088d10) scroll_navstr_pane_t1

0x38a6,	// (0x0007f9ef) bg_button_pane_cp014

0x38a6,	// (0x0007f9ef) bg_button_pane_cp030

0xc5fa,	// (0x00088743) list_double_fisheye_pane_g4_ParamLimits

0xc5fa,	// (0x00088743) list_double_fisheye_pane_g4

0xc606,	// (0x0008874f) list_double_fisheye_pane_g5_ParamLimits

0xc606,	// (0x0008874f) list_double_fisheye_pane_g5

0x065e,	// (0x0007c7a7) sp_fs_scroll_pane_cp03

0x3606,	// (0x0007f74f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3612,	// (0x0007f75b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5b,	// (0x0008bda4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc7e6,	// (0x0008892f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x37ba,	// (0x0007f903) sp_fs_scroll_pane_cp02

0xe69c,	// (0x0008a7e5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe69c,	// (0x0008a7e5) popup_sp_fs_calendar_preview_list_single_pane

0xddfa,	// (0x00089f43) main_cam6_pano_pane

0x8b0b,	// (0x00084c54) main_mup3_pane_ParamLimits

0xddfa,	// (0x00089f43) main_phacti_pane

0xc0ab,	// (0x000881f4) bg_button_pane_cp11

0xc0c3,	// (0x0008820c) main_mobtv_info_pane_g2_ParamLimits

0xc0c3,	// (0x0008820c) main_mobtv_info_pane_g2

0x0001,

0xfbbb,	// (0x0008bd04) main_mobtv_info_pane_g_ParamLimits

0xfbbb,	// (0x0008bd04) main_mobtv_info_pane_g

0xc275,	// (0x000883be) sc_clock_pane_t5_ParamLimits

0xc275,	// (0x000883be) sc_clock_pane_t5

0xc46d,	// (0x000885b6) main_radioblah_pane_g1_ParamLimits

0x341f,	// (0x0007f568) main_radioblah_pane_t3_ParamLimits

0x341f,	// (0x0007f568) main_radioblah_pane_t3

0x3437,	// (0x0007f580) main_radioblah_pane_t4_ParamLimits

0x3437,	// (0x0007f580) main_radioblah_pane_t4

0xc48b,	// (0x000885d4) main_radioblah_text_pane_ParamLimits

0xc48b,	// (0x000885d4) main_radioblah_text_pane

0xc498,	// (0x000885e1) main_radioblah_info_pane_g1_ParamLimits

0xc531,	// (0x0008867a) main_radioblah_info_pane_t4_ParamLimits

0xc531,	// (0x0008867a) main_radioblah_info_pane_t4

0xe4c9,	// (0x0008a612) main_sp_fs_calendar_pane

0xcbd9,	// (0x00088d22) main_phacti_pane_g1

0xcbe1,	// (0x00088d2a) phacti_note_pane_ParamLimits

0xcbe1,	// (0x00088d2a) phacti_note_pane

0x3918,	// (0x0007fa61) phacti_term_pane_ParamLimits

0x3918,	// (0x0007fa61) phacti_term_pane

0x392d,	// (0x0007fa76) phacti_note_pane_t1_ParamLimits

0x392d,	// (0x0007fa76) phacti_note_pane_t1

0x3944,	// (0x0007fa8d) phacti_term_pane_g1

0x394c,	// (0x0007fa95) phacti_term_pane_t1_ParamLimits

0x394c,	// (0x0007fa95) phacti_term_pane_t1

0x3976,	// (0x0007fabf) popup_sp_fs_calendar_preview_list_single_pane_g1

0x397e,	// (0x0007fac7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb7,	// (0x0008be00) popup_sp_fs_calendar_preview_list_single_pane_g

0x3986,	// (0x0007facf) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3986,	// (0x0007facf) popup_sp_fs_calendar_preview_list_single_pane_t1

0x399c,	// (0x0007fae5) aid_popup_sp_fs_bg_corner_pane

0xe762,	// (0x0008a8ab) popup_sp_fs_calendar_preview_bg_pane_g1

0xddfa,	// (0x00089f43) popup_sp_fs_calendar_preview_bg_pane

0x39a4,	// (0x0007faed) popup_sp_fs_calendar_preview_list_pane

0x07e8,	// (0x0007c931) bg_main_sp_fs_cale_pane_ParamLimits

0x07e8,	// (0x0007c931) bg_main_sp_fs_cale_pane

0x39b5,	// (0x0007fafe) listscroll_cale_mrui_pane_ParamLimits

0x39b5,	// (0x0007fafe) listscroll_cale_mrui_pane

0x39ca,	// (0x0007fb13) listscroll_sp_fs_schedule_track_pane

0x39d3,	// (0x0007fb1c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x39d3,	// (0x0007fb1c) main_sp_fs_ctrlbar_pane_cp01

0x39e6,	// (0x0007fb2f) main_sp_fs_ribbon_pane

0x39ee,	// (0x0007fb37) popup_sp_fs_cale_preview_window

0x420f,	// (0x00080358) list_single_sp_fs_schedule_track_pane_ParamLimits

0x420f,	// (0x00080358) list_single_sp_fs_schedule_track_pane

0xe522,	// (0x0008a66b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe522,	// (0x0008a66b) bg_sp_fs_highlight_list_pane_cp03

0xcc44,	// (0x00088d8d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcc44,	// (0x00088d8d) list_single_sp_fs_schedule_track_pane_g1

0xcc50,	// (0x00088d99) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcc50,	// (0x00088d99) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbc,	// (0x0008be05) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbc,	// (0x0008be05) list_single_sp_fs_schedule_track_pane_g

0xcc5c,	// (0x00088da5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcc5c,	// (0x00088da5) list_single_sp_fs_schedule_track_pane_t1

0xcc7a,	// (0x00088dc3) sp_fs_schedule_track_pane_ParamLimits

0xcc7a,	// (0x00088dc3) sp_fs_schedule_track_pane

0x3a00,	// (0x0007fb49) sp_fs_schedule_track_pane_g1

0x3a08,	// (0x0007fb51) sp_fs_schedule_track_pane_g2

0x3a10,	// (0x0007fb59) sp_fs_schedule_track_pane_g3

0x3a18,	// (0x0007fb61) sp_fs_schedule_track_pane_g4

0x3a20,	// (0x0007fb69) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc1,	// (0x0008be0a) sp_fs_schedule_track_pane_g

0x25a6,	// (0x0007e6ef) bg_sp_fs_schedule_viewer_highlight_g1

0xe98b,	// (0x0008aad4) bg_sp_fs_schedule_viewer_highlight_g2

0x25ae,	// (0x0007e6f7) bg_sp_fs_schedule_viewer_highlight_g3

0x25b6,	// (0x0007e6ff) bg_sp_fs_schedule_viewer_highlight_g4

0x27e3,	// (0x0007e92c) bg_sp_fs_schedule_viewer_highlight_g5

0x25c6,	// (0x0007e70f) bg_sp_fs_schedule_viewer_highlight_g6

0x25ce,	// (0x0007e717) bg_sp_fs_schedule_viewer_highlight_g7

0x25d6,	// (0x0007e71f) bg_sp_fs_schedule_viewer_highlight_g8

0xe96b,	// (0x0008aab4) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfccc,	// (0x0008be15) bg_sp_fs_schedule_viewer_highlight_g

0xddfa,	// (0x00089f43) bg_main_sp_fs_ribbon_pane

0xcc8c,	// (0x00088dd5) main_sp_fs_ribbon_pane_g1

0x3a28,	// (0x0007fb71) main_sp_fs_ribbon_pane_t1

0xcc95,	// (0x00088dde) main_sp_fs_ribbon_pane_t2

0x3a37,	// (0x0007fb80) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdf,	// (0x0008be28) main_sp_fs_ribbon_pane_t

0x3a46,	// (0x0007fb8f) main_sp_fs_ribbon_scheduler_pane

0x3a4e,	// (0x0007fb97) bg_main_sp_fs_ribbon_pane_g1

0x3a57,	// (0x0007fba0) bg_main_sp_fs_ribbon_pane_g2

0x3a60,	// (0x0007fba9) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce6,	// (0x0008be2f) bg_main_sp_fs_ribbon_pane_g

0x3a68,	// (0x0007fbb1) main_sp_fs_ribbon_scheduler_pane_g1

0x3a71,	// (0x0007fbba) main_sp_fs_ribbon_scheduler_pane_g2

0x3a7a,	// (0x0007fbc3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfced,	// (0x0008be36) main_sp_fs_ribbon_scheduler_pane_g

0x3a83,	// (0x0007fbcc) list_cale_mrui_pane

0xcca4,	// (0x00088ded) sp_fs_scroll_pane_cp07_ParamLimits

0xcca4,	// (0x00088ded) sp_fs_scroll_pane_cp07

0xccc0,	// (0x00088e09) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xccc0,	// (0x00088e09) bg_sp_fs_schedule_viewer_highlight

0x3a90,	// (0x0007fbd9) list_single_sp_fs_schedule_track_pane_cp01

0x3a98,	// (0x0007fbe1) list_sp_fs_schedule_track_pane

0x3aa0,	// (0x0007fbe9) sp_fs_scroll_pane_cp06_ParamLimits

0x3aa0,	// (0x0007fbe9) sp_fs_scroll_pane_cp06

0xe762,	// (0x0008a8ab) bgmain_sp_fs_calendar_pane_g1

0xcccd,	// (0x00088e16) list_single_cale_mrui_pane_ParamLimits

0xcccd,	// (0x00088e16) list_single_cale_mrui_pane

0x3ab2,	// (0x0007fbfb) list_single_cale_mrui_row_pane_ParamLimits

0x3ab2,	// (0x0007fbfb) list_single_cale_mrui_row_pane

0x3abf,	// (0x0007fc08) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3abf,	// (0x0007fc08) list_single_cale_mrui_row_pane_g1

0x3b04,	// (0x0007fc4d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3b04,	// (0x0007fc4d) list_single_cale_mrui_row_pane_t1

0xccf0,	// (0x00088e39) list_single_cale_mrui_row_pane_t2_ParamLimits

0xccf0,	// (0x00088e39) list_single_cale_mrui_row_pane_t2

0x3b16,	// (0x0007fc5f) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3b16,	// (0x0007fc5f) list_single_cale_mrui_row_pane_t3

0x3b45,	// (0x0007fc8e) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3b45,	// (0x0007fc8e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfb,	// (0x0008be44) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfb,	// (0x0008be44) list_single_cale_mrui_row_pane_t

0xcd56,	// (0x00088e9f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcd56,	// (0x00088e9f) list_single_cmail_header_editor_pane_bg_cp01

0xcd78,	// (0x00088ec1) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcd78,	// (0x00088ec1) list_single_cmail_header_editor_pane_bg_cp02

0xcd96,	// (0x00088edf) main_radioblah_text_pane_t1_ParamLimits

0xcd96,	// (0x00088edf) main_radioblah_text_pane_t1

0x3b76,	// (0x0007fcbf) cam6_indi_pane_cp01

0x3b7e,	// (0x0007fcc7) cam6_mode_pane_cp01

0x3b86,	// (0x0007fccf) cam6_pano_pane

0x3b8f,	// (0x0007fcd8) cam6_zoom_pane_cp01

0x3b99,	// (0x0007fce2) cam6_pano_image_pane

0x3ba2,	// (0x0007fceb) cam6_pano_pane_g1

0x32b9,	// (0x0007f402) cam6_pano_pane_g2

0x3bab,	// (0x0007fcf4) cam6_pano_pane_g3

0x3bb4,	// (0x0007fcfd) cam6_pano_pane_g4

0x48c4,	// (0x00080a0d) cam6_pano_pane_g5

0x3bbd,	// (0x0007fd06) cam6_pano_pane_g6

0x3bc5,	// (0x0007fd0e) cam6_pano_pane_g7

0x3bcd,	// (0x0007fd16) cam6_pano_pane_g8

0x3bd6,	// (0x0007fd1f) cam6_pano_pane_g9

0x0008,

0xfd04,	// (0x0008be4d) cam6_pano_pane_g

0xddfa,	// (0x00089f43) main_browser_tag_pane

0x38f9,	// (0x0007fa42) grid_navstr_albumart_pane

0x3be1,	// (0x0007fd2a) cell_navstr_albumart_pane_ParamLimits

0x3be1,	// (0x0007fd2a) cell_navstr_albumart_pane

0x3bfd,	// (0x0007fd46) cell_navstr_albumart_pane_g1

0x19c8,	// (0x0007db11) cell_navstr_albumart_pane_g2

0x19d8,	// (0x0007db21) cell_navstr_albumart_pane_g3

0x19d0,	// (0x0007db19) cell_navstr_albumart_pane_g4

0x0003,

0xfd17,	// (0x0008be60) cell_navstr_albumart_pane_g

0xcdb0,	// (0x00088ef9) bt_list_pane_ParamLimits

0xcdb0,	// (0x00088ef9) bt_list_pane

0xcdc9,	// (0x00088f12) bt_list_pane_t1

0xcdd8,	// (0x00088f21) bt_list_pane_t2

0x0001,

0xfd20,	// (0x0008be69) bt_list_pane_t

0xddfa,	// (0x00089f43) main_cale_prevew_pane

0xcde7,	// (0x00088f30) popup_cale_preview_window_ParamLimits

0xcde7,	// (0x00088f30) popup_cale_preview_window

0xe4c9,	// (0x0008a612) bg_popup_preview_window_pane_cp05_ParamLimits

0xe4c9,	// (0x0008a612) bg_popup_preview_window_pane_cp05

0x3c05,	// (0x0007fd4e) list_cale_preview_pane_ParamLimits

0x3c05,	// (0x0007fd4e) list_cale_preview_pane

0xce04,	// (0x00088f4d) list_double_cale_preview_pane_ParamLimits

0xce04,	// (0x00088f4d) list_double_cale_preview_pane

0xce18,	// (0x00088f61) list_single_cale_preview_pane_ParamLimits

0xce18,	// (0x00088f61) list_single_cale_preview_pane

0xce30,	// (0x00088f79) list_single_cale_preview_pane_g1

0xce38,	// (0x00088f81) list_single_cale_preview_pane_t1_ParamLimits

0xce38,	// (0x00088f81) list_single_cale_preview_pane_t1

0xce4d,	// (0x00088f96) list_double_cale_preview_pane_g1

0xce55,	// (0x00088f9e) list_double_cale_preview_pane_t1_ParamLimits

0xce55,	// (0x00088f9e) list_double_cale_preview_pane_t1

0xce6a,	// (0x00088fb3) list_double_cale_preview_pane_t2_ParamLimits

0xce6a,	// (0x00088fb3) list_double_cale_preview_pane_t2

0x0001,

0xfd25,	// (0x0008be6e) list_double_cale_preview_pane_t_ParamLimits

0xfd25,	// (0x0008be6e) list_double_cale_preview_pane_t

0xddfa,	// (0x00089f43) main_ezdial_pane

0xe4c9,	// (0x0008a612) main_sp_fs_email_pane_ParamLimits

0xc747,	// (0x00088890) cmail_ddmenu_btn01_pane_ParamLimits

0xc747,	// (0x00088890) cmail_ddmenu_btn01_pane

0xc764,	// (0x000888ad) cmail_ddmenu_btn02_pane_ParamLimits

0xc764,	// (0x000888ad) cmail_ddmenu_btn02_pane

0xc782,	// (0x000888cb) cmail_ddmenu_btn03_pane_ParamLimits

0xc782,	// (0x000888cb) cmail_ddmenu_btn03_pane

0xc823,	// (0x0008896c) main_sp_fs_ctrlbar_pane_ParamLimits

0xc83d,	// (0x00088986) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcb0b,	// (0x00088c54) list_cmail_body_pane_ParamLimits

0x3802,	// (0x0007f94b) bg_button_pane_cp12

0x380b,	// (0x0007f954) list_single_cmail_header_detail_pane_g3_ParamLimits

0x380b,	// (0x0007f954) list_single_cmail_header_detail_pane_g3

0x3854,	// (0x0007f99d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x3854,	// (0x0007f99d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca8,	// (0x0008bdf1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca8,	// (0x0008bdf1) list_single_cmail_header_detail_pane_t

0x3961,	// (0x0007faaa) phacti_term_pane_t2_ParamLimits

0x3961,	// (0x0007faaa) phacti_term_pane_t2

0x0001,

0xfcb2,	// (0x0008bdfb) phacti_term_pane_t_ParamLimits

0xfcb2,	// (0x0008bdfb) phacti_term_pane_t

0x3c11,	// (0x0007fd5a) aid_size_list_single_double

0xce82,	// (0x00088fcb) popup_ezdial_listscroll_window

0xcea4,	// (0x00088fed) popup_number_entry_window_cp01

0xe740,	// (0x0008a889) bg_popup_call_pane_cp09

0x3c1d,	// (0x0007fd66) ezdial_list_pane

0x3c25,	// (0x0007fd6e) scroll_pane_cp23

0x1cac,	// (0x0007ddf5) bg_button_pane_cp028_ParamLimits

0x1cac,	// (0x0007ddf5) bg_button_pane_cp028

0xceb2,	// (0x00088ffb) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xceb2,	// (0x00088ffb) cmail_ddmenu_btn01_pane_g1

0xcec4,	// (0x0008900d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcec4,	// (0x0008900d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2a,	// (0x0008be73) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2a,	// (0x0008be73) cmail_ddmenu_btn01_pane_g

0x3c2d,	// (0x0007fd76) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3c2d,	// (0x0007fd76) cmail_ddmenu_btn01_pane_t1

0x07e8,	// (0x0007c931) bg_button_pane_cp029_ParamLimits

0x07e8,	// (0x0007c931) bg_button_pane_cp029

0xced0,	// (0x00089019) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xced0,	// (0x00089019) cmail_ddmenu_btn02_pane_g1

0xcee8,	// (0x00089031) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcee8,	// (0x00089031) cmail_ddmenu_btn02_pane_t1

0xe522,	// (0x0008a66b) bg_button_pane_cp031_ParamLimits

0xe522,	// (0x0008a66b) bg_button_pane_cp031

0xced0,	// (0x00089019) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xced0,	// (0x00089019) cmail_ddmenu_btn03_pane_g1

0xcee8,	// (0x00089031) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcee8,	// (0x00089031) cmail_ddmenu_btn03_pane_t1

0xa0f9,	// (0x00086242) cell_dialer2_keypad_pane_t1_ParamLimits

0xa113,	// (0x0008625c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa113,	// (0x0008625c) cell_dialer2_keypad_pane_t1_copy1

0xbed8,	// (0x00088021) ncimui_group_button_pane

0xe4c9,	// (0x0008a612) main_sp_fs_calendar_pane_ParamLimits

0xcb25,	// (0x00088c6e) list_single_cmail_header_caption_pane_ParamLimits

0x39ac,	// (0x0007faf5) aid_recal_txt_sm_pane

0xddfa,	// (0x00089f43) mian_recal_day_pane

0x39ee,	// (0x0007fb37) popup_sp_fs_cale_preview_window_ParamLimits

0x3c43,	// (0x0007fd8c) list_recal_day_pane

0x3c86,	// (0x0007fdcf) list_single_recal_day_pane_ParamLimits

0x3c86,	// (0x0007fdcf) list_single_recal_day_pane

0x3c98,	// (0x0007fde1) list_single_recal_day_pane_g1_ParamLimits

0x3c98,	// (0x0007fde1) list_single_recal_day_pane_g1

0x3ca4,	// (0x0007fded) list_single_recal_day_pane_g2_ParamLimits

0x3ca4,	// (0x0007fded) list_single_recal_day_pane_g2

0x3cb0,	// (0x0007fdf9) list_single_recal_day_pane_g3_ParamLimits

0x3cb0,	// (0x0007fdf9) list_single_recal_day_pane_g3

0xcf0c,	// (0x00089055) list_single_recal_day_pane_g4_ParamLimits

0xcf0c,	// (0x00089055) list_single_recal_day_pane_g4

0x3cbc,	// (0x0007fe05) list_single_recal_day_pane_g5_ParamLimits

0x3cbc,	// (0x0007fe05) list_single_recal_day_pane_g5

0x3cc8,	// (0x0007fe11) list_single_recal_day_pane_g6_ParamLimits

0x3cc8,	// (0x0007fe11) list_single_recal_day_pane_g6

0x0004,

0xfd39,	// (0x0008be82) list_single_recal_day_pane_g_ParamLimits

0xfd39,	// (0x0008be82) list_single_recal_day_pane_g

0x3cdc,	// (0x0007fe25) list_single_recal_day_pane_t1

0x3cee,	// (0x0007fe37) list_single_recal_day_pane_t2

0x0001,

0xfd44,	// (0x0008be8d) list_single_recal_day_pane_t

0xcf24,	// (0x0008906d) ncimui_query_button_pane_ParamLimits

0xcf24,	// (0x0008906d) ncimui_query_button_pane

0xcf34,	// (0x0008907d) ncimui_query_button_pane_t1_ParamLimits

0xcf34,	// (0x0008907d) ncimui_query_button_pane_t1

0x3d00,	// (0x0007fe49) ncimui_query_button_pane_t2_ParamLimits

0x3d00,	// (0x0007fe49) ncimui_query_button_pane_t2

0x0001,

0xfd49,	// (0x0008be92) ncimui_query_button_pane_t_ParamLimits

0xfd49,	// (0x0008be92) ncimui_query_button_pane_t

0xcf47,	// (0x00089090) query_button_pane_ParamLimits

0xcf47,	// (0x00089090) query_button_pane

0xddfa,	// (0x00089f43) bg_button_pane_cp0028

0x3d13,	// (0x0007fe5c) query_button_pane_t1

0x8b33,	// (0x00084c7c) main_tport_pane_ParamLimits

0xca08,	// (0x00088b51) bg_popup_window_pane_cp01_ParamLimits

0xca08,	// (0x00088b51) bg_popup_window_pane_cp01

0xca16,	// (0x00088b5f) heading_pane_cp08_ParamLimits

0xca16,	// (0x00088b5f) heading_pane_cp08

0xca24,	// (0x00088b6d) heading_pane_cp07_ParamLimits

0xca24,	// (0x00088b6d) heading_pane_cp07

0xca94,	// (0x00088bdd) cell_tport_appsw_pane_g2

0x0002,

0xfc95,	// (0x0008bdde) cell_tport_appsw_pane_g

0x0885,	// (0x0007c9ce) input_candi_list_open_g1

0xeb4e,	// (0x0008ac97) list_cale_time_pane_g6_ParamLimits

0xeb4e,	// (0x0008ac97) list_cale_time_pane_g6

0x9078,	// (0x000851c1) aid_size_touch_calib_1_ParamLimits

0x9078,	// (0x000851c1) aid_size_touch_calib_1

0x9084,	// (0x000851cd) aid_size_touch_calib_2_ParamLimits

0x9084,	// (0x000851cd) aid_size_touch_calib_2

0x9092,	// (0x000851db) aid_size_touch_calib_3_ParamLimits

0x9092,	// (0x000851db) aid_size_touch_calib_3

0x90a2,	// (0x000851eb) aid_size_touch_calib_4_ParamLimits

0x90a2,	// (0x000851eb) aid_size_touch_calib_4

0x90b0,	// (0x000851f9) main_touch_calib_button_group_pane_ParamLimits

0x90b0,	// (0x000851f9) main_touch_calib_button_group_pane

0x90be,	// (0x00085207) main_touch_calib_pane_g1_ParamLimits

0x90ca,	// (0x00085213) main_touch_calib_pane_g2_ParamLimits

0x90d6,	// (0x0008521f) main_touch_calib_pane_g3_ParamLimits

0x90e2,	// (0x0008522b) main_touch_calib_pane_g4_ParamLimits

0xf6de,	// (0x0008b827) main_touch_calib_pane_g_ParamLimits

0x90ee,	// (0x00085237) main_touch_calib_pane_t1_ParamLimits

0x9105,	// (0x0008524e) main_touch_calib_pane_t2_ParamLimits

0x911e,	// (0x00085267) main_touch_calib_pane_t3_ParamLimits

0x9134,	// (0x0008527d) main_touch_calib_pane_t4_ParamLimits

0x914a,	// (0x00085293) main_touch_calib_pane_t5_ParamLimits

0xf6e7,	// (0x0008b830) main_touch_calib_pane_t_ParamLimits

0x2320,	// (0x0007e469) list_single_fp_cale_pane_g3_ParamLimits

0x2320,	// (0x0007e469) list_single_fp_cale_pane_g3

0x8b0b,	// (0x00084c54) bg_button_pane_cp012_ParamLimits

0x8b0b,	// (0x00084c54) bg_vkb2_func_pane_cp03_ParamLimits

0xaf99,	// (0x000870e2) cell_vitu2_function_top_pane_g1_ParamLimits

0x8b0b,	// (0x00084c54) bg_vkb2_func_pane_cp04_ParamLimits

0xbe5e,	// (0x00087fa7) main_ncimui_button_group_pane_ParamLimits

0xbe5e,	// (0x00087fa7) main_ncimui_button_group_pane

0xbec6,	// (0x0008800f) main_ncimui_pane_t3_ParamLimits

0xbec6,	// (0x0008800f) main_ncimui_pane_t3

0x390f,	// (0x0007fa58) phacti_button_group_pane

0x3c11,	// (0x0007fd5a) aid_size_list_single_double_ParamLimits

0xce82,	// (0x00088fcb) popup_ezdial_listscroll_window_ParamLimits

0xcea4,	// (0x00088fed) popup_number_entry_window_cp01_ParamLimits

0xcf54,	// (0x0008909d) phacti_button_pane_ParamLimits

0xcf54,	// (0x0008909d) phacti_button_pane

0xddfa,	// (0x00089f43) bg_button_pane_cp14

0x3d21,	// (0x0007fe6a) phacti_button_pane_t1

0xcf65,	// (0x000890ae) main_touch_calib_button_pane_ParamLimits

0xcf65,	// (0x000890ae) main_touch_calib_button_pane

0xe5a2,	// (0x0008a6eb) bg_button_pane_cp18_ParamLimits

0xe5a2,	// (0x0008a6eb) bg_button_pane_cp18

0x3d2f,	// (0x0007fe78) main_touch_calib_button_pane_t1_ParamLimits

0x3d2f,	// (0x0007fe78) main_touch_calib_button_pane_t1

0x3d45,	// (0x0007fe8e) main_touch_calib_button_pane_t2_ParamLimits

0x3d45,	// (0x0007fe8e) main_touch_calib_button_pane_t2

0x0001,

0xfd4e,	// (0x0008be97) main_touch_calib_button_pane_t_ParamLimits

0xfd4e,	// (0x0008be97) main_touch_calib_button_pane_t

0xddfa,	// (0x00089f43) cell_ncimui_button_pane

0xddfa,	// (0x00089f43) bg_button_pane_cp032

0x3d63,	// (0x0007feac) cell_ncimui_button_pane_t1

0xa16f,	// (0x000862b8) image3_infobar_pane_ParamLimits

0xa16f,	// (0x000862b8) image3_infobar_pane

0xc297,	// (0x000883e0) fs_bigclock_status_pane_ParamLimits

0xc297,	// (0x000883e0) fs_bigclock_status_pane

0xc2a4,	// (0x000883ed) main_fs_bigclock_clock_pane_ParamLimits

0xc2a4,	// (0x000883ed) main_fs_bigclock_clock_pane

0xc2c0,	// (0x00088409) main_fs_bigclock_indi_pane_ParamLimits

0xc2c0,	// (0x00088409) main_fs_bigclock_indi_pane

0xc2ee,	// (0x00088437) main_fs_bigclock_swipe_pane_ParamLimits

0xc2ee,	// (0x00088437) main_fs_bigclock_swipe_pane

0xddfa,	// (0x00089f43) main_fs_clock_dumped_data

0xc328,	// (0x00088471) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc328,	// (0x00088471) list_single_fs_bigclock_indicator_pane_g1

0xc347,	// (0x00088490) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc347,	// (0x00088490) list_single_fs_bigclock_indicator_pane_g2

0xc361,	// (0x000884aa) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc361,	// (0x000884aa) list_single_fs_bigclock_indicator_pane_g3

0xc37d,	// (0x000884c6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc37d,	// (0x000884c6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbef,	// (0x0008bd38) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbef,	// (0x0008bd38) list_single_fs_bigclock_indicator_pane_g

0xc3ac,	// (0x000884f5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc3ac,	// (0x000884f5) list_single_fs_bigclock_indicator_pane_t1

0xc3d4,	// (0x0008851d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc3d4,	// (0x0008851d) list_single_fs_bigclock_indicator_pane_t2

0xc3fc,	// (0x00088545) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc3fc,	// (0x00088545) list_single_fs_bigclock_indicator_pane_t3

0xc424,	// (0x0008856d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc424,	// (0x0008856d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfa,	// (0x0008bd43) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfa,	// (0x0008bd43) list_single_fs_bigclock_indicator_pane_t

0x3d71,	// (0x0007feba) image3_infobar_fav_pane_ParamLimits

0x3d71,	// (0x0007feba) image3_infobar_fav_pane

0x3d81,	// (0x0007feca) image3_infobar_loc_pane_ParamLimits

0x3d81,	// (0x0007feca) image3_infobar_loc_pane

0x3d97,	// (0x0007fee0) image3_infobar_time_pane_ParamLimits

0x3d97,	// (0x0007fee0) image3_infobar_time_pane

0xe762,	// (0x0008a8ab) image3_infobar_time_pane_g1

0x3da7,	// (0x0007fef0) image3_infobar_time_pane_t1

0xe762,	// (0x0008a8ab) image3_infobar_loc_pane_g1

0x3db5,	// (0x0007fefe) image3_infobar_loc_pane_g2

0x0001,

0xfd53,	// (0x0008be9c) image3_infobar_loc_pane_g

0x3dbd,	// (0x0007ff06) image3_infobar_loc_pane_t1

0xe762,	// (0x0008a8ab) image3_infobar_fav_pane_g1

0x3dcb,	// (0x0007ff14) image3_infobar_fav_pane_g2

0x0001,

0xfd58,	// (0x0008bea1) image3_infobar_fav_pane_g

0x3dd3,	// (0x0007ff1c) fs_bigclock_status_battery_pane

0x3ddc,	// (0x0007ff25) fs_bigclock_status_signal_pane

0x3de5,	// (0x0007ff2e) fs_bigclock_status_title_pane

0x3dee,	// (0x0007ff37) fs_bigclock_status_signal_pane_g1

0x3df7,	// (0x0007ff40) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5d,	// (0x0008bea6) fs_bigclock_status_signal_pane_g

0x3dff,	// (0x0007ff48) fs_bigclock_status_battery_pane_g1

0x3e08,	// (0x0007ff51) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd62,	// (0x0008beab) fs_bigclock_status_battery_pane_g

0x3e10,	// (0x0007ff59) fs_bigclock_status_title_pane_t1

0xcf75,	// (0x000890be) main_fs_bigclock_clock_pane_g1

0xcf75,	// (0x000890be) main_fs_bigclock_clock_pane_g2

0xcf84,	// (0x000890cd) main_fs_bigclock_clock_pane_g3

0xcf84,	// (0x000890cd) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd67,	// (0x0008beb0) main_fs_bigclock_clock_pane_g

0xcf94,	// (0x000890dd) main_fs_bigclock_clock_pane_t1

0xcfa9,	// (0x000890f2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd70,	// (0x0008beb9) main_fs_bigclock_clock_pane_t

0x3e1e,	// (0x0007ff67) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3e1e,	// (0x0007ff67) list_single_fs_bigclock_indicator_pane

0x3e2f,	// (0x0007ff78) list_single_fs_bigclock_pane_ParamLimits

0x3e2f,	// (0x0007ff78) list_single_fs_bigclock_pane

0x3e55,	// (0x0007ff9e) main_fs_bigclock_indicator_pane_t1

0x3e64,	// (0x0007ffad) list_single_fs_bigclock_pane_g1

0x3e6c,	// (0x0007ffb5) list_single_fs_bigclock_pane_t1

0xe762,	// (0x0008a8ab) main_fs_bigclock_swipe_pane_g1

0x3eaf,	// (0x0007fff8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd81,	// (0x0008beca) main_fs_bigclock_swipe_pane_g

0x3eb7,	// (0x00080000) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3eb7,	// (0x00080000) main_fs_bigclock_swipe_pane_t1

0x7c24,	// (0x00083d6d) call_type_pane_ParamLimits

0xddfa,	// (0x00089f43) main_btmg_pane

0x3aeb,	// (0x0007fc34) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3aeb,	// (0x0007fc34) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf4,	// (0x0008be3d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf4,	// (0x0008be3d) list_single_cale_mrui_row_pane_g

0x3c6c,	// (0x0007fdb5) list_recal_vselct_arw_lo_pane

0x3c74,	// (0x0007fdbd) list_recal_vselct_arw_up_pane

0x3c7c,	// (0x0007fdc5) list_recal_vselct_pane

0xd000,	// (0x00089149) btmg_button_pane

0xd00c,	// (0x00089155) main_btmg_pane_g1

0xddfa,	// (0x00089f43) bg_button_pane_cp044

0x3ed4,	// (0x0008001d) btmg_button_pane_t1

0x1b1a,	// (0x0007dc63) aid_listscroll_gen

0xe4c9,	// (0x0008a612) main_cntbar_detail_pane

0x37b2,	// (0x0007f8fb) list_cmail_folder_pane

0x065e,	// (0x0007c7a7) sp_fs_scroll_pane_cp03_ParamLimits

0xd014,	// (0x0008915d) list_single_fs_dyc_pane_cp01_ParamLimits

0xd014,	// (0x0008915d) list_single_fs_dyc_pane_cp01

0x3ee2,	// (0x0008002b) aid_size_cmail_indent

0x3eeb,	// (0x00080034) list_single_dyc_row_pane_cp01

0xd051,	// (0x0008919a) cntbar_detail_list_pane_ParamLimits

0xd051,	// (0x0008919a) cntbar_detail_list_pane

0xd091,	// (0x000891da) main_cntbar_detail_cont_pane_ParamLimits

0xd091,	// (0x000891da) main_cntbar_detail_cont_pane

0x7c18,	// (0x00083d61) scroll_pane_cp032_ParamLimits

0x7c18,	// (0x00083d61) scroll_pane_cp032

0xd09d,	// (0x000891e6) cntbar_detail_list_event_pane_ParamLimits

0xd09d,	// (0x000891e6) cntbar_detail_list_event_pane

0xd05f,	// (0x000891a8) cntbar_detail_list_shct_pane

0xe9d9,	// (0x0008ab22) aid_list_gen

0x3ef4,	// (0x0008003d) aid_scroll

0x3efd,	// (0x00080046) aid_size_touch_scroll_bar

0xd0ad,	// (0x000891f6) aid_list_double

0xd0b6,	// (0x000891ff) aid_list_single

0xd0b6,	// (0x000891ff) aid_list_single_lg

0xd0bf,	// (0x00089208) aid_list_z_g_a_sm

0xd0c7,	// (0x00089210) aid_list_z_g_d

0xd0cf,	// (0x00089218) aid_txt_z_prm

0xd0dd,	// (0x00089226) aid_txt_z_prm_cp01

0xd0eb,	// (0x00089234) aid_txt_z_sec

0xd0f9,	// (0x00089242) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd0f9,	// (0x00089242) main_cntbar_detail_cont_pane_g1

0xd106,	// (0x0008924f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd106,	// (0x0008924f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd86,	// (0x0008becf) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd86,	// (0x0008becf) main_cntbar_detail_cont_pane_g

0x3f06,	// (0x0008004f) main_cntbar_detail_cont_pane_t1

0x3f14,	// (0x0008005d) main_cntbar_detail_cont_pane_t2

0x3f22,	// (0x0008006b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8b,	// (0x0008bed4) main_cntbar_detail_cont_pane_t

0xd112,	// (0x0008925b) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd112,	// (0x0008925b) cell_cntbar_detail_list_shct_pane

0x3f30,	// (0x00080079) cntbar_detail_list_shct_pane_g1

0x3f39,	// (0x00080082) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd92,	// (0x0008bedb) cntbar_detail_list_shct_pane_g

0xd126,	// (0x0008926f) cntbar_detail_list_event_pane_g1_ParamLimits

0xd126,	// (0x0008926f) cntbar_detail_list_event_pane_g1

0xd132,	// (0x0008927b) cntbar_detail_list_event_pane_g2_ParamLimits

0xd132,	// (0x0008927b) cntbar_detail_list_event_pane_g2

0x0005,

0xfd97,	// (0x0008bee0) cntbar_detail_list_event_pane_g_ParamLimits

0xfd97,	// (0x0008bee0) cntbar_detail_list_event_pane_g

0xd1a0,	// (0x000892e9) cntbar_detail_list_event_pane_t1_ParamLimits

0xd1a0,	// (0x000892e9) cntbar_detail_list_event_pane_t1

0xd1b5,	// (0x000892fe) cntbar_detail_list_event_pane_t2_ParamLimits

0xd1b5,	// (0x000892fe) cntbar_detail_list_event_pane_t2

0x0002,

0xfda4,	// (0x0008beed) cntbar_detail_list_event_pane_t_ParamLimits

0xfda4,	// (0x0008beed) cntbar_detail_list_event_pane_t

0xe762,	// (0x0008a8ab) cell_cntbar_detail_list_shct_pane_g1

0x7fbc,	// (0x00084105) navi_pane_mv_g3

0xe4c9,	// (0x0008a612) main_cntbar_detail_pane_ParamLimits

0xddfa,	// (0x00089f43) main_notif_wgt_pane

0x9df1,	// (0x00085f3a) aid_tch_main_mp4_pane_g4

0xa05a,	// (0x000861a3) popup_slider_window_cp02

0x3c62,	// (0x0007fdab) list_recal_day_event_pane

0xd031,	// (0x0008917a) cntbar_detail_btn_pane_ParamLimits

0xd031,	// (0x0008917a) cntbar_detail_btn_pane

0xd041,	// (0x0008918a) cntbar_detail_btn_pane_cp01_ParamLimits

0xd041,	// (0x0008918a) cntbar_detail_btn_pane_cp01

0xd05f,	// (0x000891a8) cntbar_detail_list_shct_pane_ParamLimits

0xd06b,	// (0x000891b4) cntbar_detail_pane_g1_ParamLimits

0xd06b,	// (0x000891b4) cntbar_detail_pane_g1

0xd07b,	// (0x000891c4) cntbar_detail_pane_t1_ParamLimits

0xd07b,	// (0x000891c4) cntbar_detail_pane_t1

0xd13e,	// (0x00089287) cntbar_detail_list_event_pane_g3_ParamLimits

0xd13e,	// (0x00089287) cntbar_detail_list_event_pane_g3

0xd156,	// (0x0008929f) cntbar_detail_list_event_pane_g4_ParamLimits

0xd156,	// (0x0008929f) cntbar_detail_list_event_pane_g4

0xd16e,	// (0x000892b7) cntbar_detail_list_event_pane_g5_ParamLimits

0xd16e,	// (0x000892b7) cntbar_detail_list_event_pane_g5

0xd186,	// (0x000892cf) cntbar_detail_list_event_pane_g6_ParamLimits

0xd186,	// (0x000892cf) cntbar_detail_list_event_pane_g6

0xd1ca,	// (0x00089313) cntbar_detail_list_event_pane_t3_ParamLimits

0xd1ca,	// (0x00089313) cntbar_detail_list_event_pane_t3

0xd1dc,	// (0x00089325) popup_notif_wgt_window_ParamLimits

0xd1dc,	// (0x00089325) popup_notif_wgt_window

0xd1ec,	// (0x00089335) popup_submenu_window_cp01_ParamLimits

0xd1ec,	// (0x00089335) popup_submenu_window_cp01

0xe740,	// (0x0008a889) bg_popup_window_pane_cp10

0x3f42,	// (0x0008008b) listscroll_notif_wgt_pane

0x3f54,	// (0x0008009d) list_notif_wgt_window

0x3f5d,	// (0x000800a6) scroll_pane_cp033

0xd1fc,	// (0x00089345) list_notif_wgt_row_pane_ParamLimits

0xd1fc,	// (0x00089345) list_notif_wgt_row_pane

0x3f66,	// (0x000800af) aid_size_list_notif_wgt_del

0x3f73,	// (0x000800bc) list_notif_wgt_row_pane_g1

0x3f7f,	// (0x000800c8) list_notif_wgt_row_pane_g2

0x3f8e,	// (0x000800d7) list_notif_wgt_row_pane_g3

0x0002,

0xfdab,	// (0x0008bef4) list_notif_wgt_row_pane_g

0x3f9b,	// (0x000800e4) list_notif_wgt_row_pane_t1

0x3fb1,	// (0x000800fa) list_notif_wgt_row_pane_t2

0x3fc3,	// (0x0008010c) list_notif_wgt_row_pane_t3

0x0002,

0xfdb2,	// (0x0008befb) list_notif_wgt_row_pane_t

0x27eb,	// (0x0007e934) list_recal_day_event_pane_g1

0x3fd5,	// (0x0008011e) list_recal_day_event_pane_t1

0xddfa,	// (0x00089f43) bg_button_pane_cp045

0xd210,	// (0x00089359) cntbar_detail_btn_pane_t1

0x07e8,	// (0x0007c931) main_callh_pane_ParamLimits

0x07e8,	// (0x0007c931) main_callh_pane

0xddfa,	// (0x00089f43) main_coverflow0_pane

0xddfa,	// (0x00089f43) main_wgtman_pane

0xc306,	// (0x0008844f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc306,	// (0x0008844f) main_fs_bigclock_unlock_btn_pane

0xca8c,	// (0x00088bd5) bg_button_pane_cp16

0xca9c,	// (0x00088be5) cell_tport_appsw_pane_g3

0xd21e,	// (0x00089367) cf0_flow_pane_ParamLimits

0xd21e,	// (0x00089367) cf0_flow_pane

0x3fe4,	// (0x0008012d) listscroll_cf0_pane

0x3fef,	// (0x00080138) main_cf0_pane_g1

0xd22d,	// (0x00089376) main_cf0_pane_t1_ParamLimits

0xd22d,	// (0x00089376) main_cf0_pane_t1

0xd241,	// (0x0008938a) main_cf0_pane_t2_ParamLimits

0xd241,	// (0x0008938a) main_cf0_pane_t2

0x0001,

0xfdbe,	// (0x0008bf07) main_cf0_pane_t_ParamLimits

0xfdbe,	// (0x0008bf07) main_cf0_pane_t

0x4001,	// (0x0008014a) scroll_pane_cp11

0xd255,	// (0x0008939e) cf0_flow_pane_g1

0xd25d,	// (0x000893a6) cf0_flow_pane_g2

0x0001,

0xfdc3,	// (0x0008bf0c) cf0_flow_pane_g

0xd265,	// (0x000893ae) cf0_flow_pane_t1

0xddfa,	// (0x00089f43) main_call6_pane

0xddfa,	// (0x00089f43) main_calllock_pane

0xd273,	// (0x000893bc) call6_btn_grp_pane_ParamLimits

0xd273,	// (0x000893bc) call6_btn_grp_pane

0xd280,	// (0x000893c9) call6_pane_g1_ParamLimits

0xd280,	// (0x000893c9) call6_pane_g1

0xd290,	// (0x000893d9) popup_call6_1st_window_ParamLimits

0xd290,	// (0x000893d9) popup_call6_1st_window

0xd2a0,	// (0x000893e9) popup_call6_2nd_window_ParamLimits

0xd2a0,	// (0x000893e9) popup_call6_2nd_window

0xd2b0,	// (0x000893f9) cell_call6_btn_pane_ParamLimits

0xd2b0,	// (0x000893f9) cell_call6_btn_pane

0xe740,	// (0x0008a889) bg_popup_call2_in_pane_cp03

0x400c,	// (0x00080155) popup_call6_1st_window_g1

0x4014,	// (0x0008015d) popup_call6_1st_window_g2

0x401c,	// (0x00080165) popup_call6_1st_window_g3

0x0002,

0xfdc8,	// (0x0008bf11) popup_call6_1st_window_g

0x4024,	// (0x0008016d) popup_call6_1st_window_t1

0x4033,	// (0x0008017c) popup_call6_1st_window_t2

0x4043,	// (0x0008018c) popup_call6_1st_window_t3

0x0002,

0xfdcf,	// (0x0008bf18) popup_call6_1st_window_t

0xe740,	// (0x0008a889) bg_popup_call2_in_pane_cp04

0x4053,	// (0x0008019c) popup_call6_2nd_window_g1

0x405b,	// (0x000801a4) popup_call6_2nd_window_g2

0x4063,	// (0x000801ac) popup_call6_2nd_window_g3

0x0002,

0xfdd6,	// (0x0008bf1f) popup_call6_2nd_window_g

0x406b,	// (0x000801b4) popup_call6_2nd_window_t1

0x5d7f,	// (0x00081ec8) bg_button_pane_cp15

0xd2c1,	// (0x0008940a) cell_call6_btn_pane_g1

0xd2ca,	// (0x00089413) cell_call6_btn_pane_t1

0xd2d9,	// (0x00089422) listscroll_wgtman_pane_ParamLimits

0xd2d9,	// (0x00089422) listscroll_wgtman_pane

0xd2f5,	// (0x0008943e) wgtman_btn_pane_ParamLimits

0xd2f5,	// (0x0008943e) wgtman_btn_pane

0xef31,	// (0x0008b07a) aid_scroll_copy1

0x4083,	// (0x000801cc) list_wgtman_pane

0xd32a,	// (0x00089473) wgtman_btn_pane_g1_ParamLimits

0xd32a,	// (0x00089473) wgtman_btn_pane_g1

0xd352,	// (0x0008949b) wgtman_btn_pane_t1_ParamLimits

0xd352,	// (0x0008949b) wgtman_btn_pane_t1

0x408d,	// (0x000801d6) wgtman_btn_pane_t2_ParamLimits

0x408d,	// (0x000801d6) wgtman_btn_pane_t2

0x0001,

0xfddd,	// (0x0008bf26) wgtman_btn_pane_t_ParamLimits

0xfddd,	// (0x0008bf26) wgtman_btn_pane_t

0xd389,	// (0x000894d2) listrow_wgtman_pane_ParamLimits

0xd389,	// (0x000894d2) listrow_wgtman_pane

0xd3a0,	// (0x000894e9) listrow_wgtman_pane_g1

0xd3ad,	// (0x000894f6) listrow_wgtman_pane_g2

0x0001,

0xfde2,	// (0x0008bf2b) listrow_wgtman_pane_g

0xd3cb,	// (0x00089514) listrow_wgtman_pane_t1

0xd3e3,	// (0x0008952c) listrow_wgtman_pane_t2

0x0001,

0xfde7,	// (0x0008bf30) listrow_wgtman_pane_t

0xd409,	// (0x00089552) wait_bar_pane_cp09

0x40a4,	// (0x000801ed) main_calllock_btn_pane

0x40ae,	// (0x000801f7) main_calllock_pane_g1

0xddfa,	// (0x00089f43) bg_button_pane_cp17

0x407a,	// (0x000801c3) main_calllock_btn_pane_g1

0x40ba,	// (0x00080203) main_calllock_btn_pane_t1

0xddfa,	// (0x00089f43) main_dialer3_pane

0xddfa,	// (0x00089f43) main_fmrd2_pane

0xe762,	// (0x0008a8ab) main_fs_bigclock_unlock_btn_pane_g1

0xd423,	// (0x0008956c) main_fs_bigclock_unlock_btn_pane_t1

0xd431,	// (0x0008957a) area_fmrd2_info_pane_ParamLimits

0xd431,	// (0x0008957a) area_fmrd2_info_pane

0xd43d,	// (0x00089586) area_fmrd2_visual_pane_ParamLimits

0xd43d,	// (0x00089586) area_fmrd2_visual_pane

0xd44b,	// (0x00089594) fmrd2_indi_pane_ParamLimits

0xd44b,	// (0x00089594) fmrd2_indi_pane

0xd458,	// (0x000895a1) area_fmrd2_visual_pane_g1

0xd460,	// (0x000895a9) area_fmrd2_visual_pane_t1

0xd470,	// (0x000895b9) area_fmrd2_visual_pane_t2

0xd480,	// (0x000895c9) area_fmrd2_visual_pane_t3

0x0002,

0xfdf1,	// (0x0008bf3a) area_fmrd2_visual_pane_t

0xd490,	// (0x000895d9) area_fmrd2_info_pane_g1

0xd498,	// (0x000895e1) area_fmrd2_info_pane_t1

0xd4a8,	// (0x000895f1) area_fmrd2_info_pane_t2

0xd4b8,	// (0x00089601) area_fmrd2_info_pane_t3

0xd4c8,	// (0x00089611) area_fmrd2_info_pane_t4

0x0003,

0xfdf8,	// (0x0008bf41) area_fmrd2_info_pane_t

0xd4d8,	// (0x00089621) fmrd2_indi_pane_t1

0xd4e8,	// (0x00089631) fmrd2_indi_pane_t2

0xd4f8,	// (0x00089641) fmrd2_indi_pane_t3

0x0002,

0xfe01,	// (0x0008bf4a) fmrd2_indi_pane_t

0xc38e,	// (0x000884d7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc38e,	// (0x000884d7) list_single_fs_bigclock_indicator_pane_g5

0xc443,	// (0x0008858c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc443,	// (0x0008858c) list_single_fs_bigclock_indicator_pane_t5

0xcbf7,	// (0x00088d40) aid_cell_bcale_month_pane_ParamLimits

0xcbf7,	// (0x00088d40) aid_cell_bcale_month_pane

0xcc15,	// (0x00088d5e) bcale_month_pane_ParamLimits

0xcc15,	// (0x00088d5e) bcale_month_pane

0xcc33,	// (0x00088d7c) bcale_preview_pane_ParamLimits

0xcc33,	// (0x00088d7c) bcale_preview_pane

0x3e6c,	// (0x0007ffb5) list_single_fs_bigclock_pane_t1_ParamLimits

0x3e8b,	// (0x0007ffd4) list_single_fs_bigclock_pane_t2_ParamLimits

0x3e8b,	// (0x0007ffd4) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7c,	// (0x0008bec5) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x0008bec5) list_single_fs_bigclock_pane_t

0xd41b,	// (0x00089564) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdec,	// (0x0008bf35) main_fs_bigclock_unlock_btn_pane_g

0xd508,	// (0x00089651) aid_dia3_key_size_ParamLimits

0xd508,	// (0x00089651) aid_dia3_key_size

0xd514,	// (0x0008965d) aid_dia3_listrow_size_ParamLimits

0xd514,	// (0x0008965d) aid_dia3_listrow_size

0xd524,	// (0x0008966d) dia3_keypad_fun_pane_ParamLimits

0xd524,	// (0x0008966d) dia3_keypad_fun_pane

0xd534,	// (0x0008967d) dia3_keypad_num_pane_ParamLimits

0xd534,	// (0x0008967d) dia3_keypad_num_pane

0xd544,	// (0x0008968d) dia3_listscroll_pane_ParamLimits

0xd544,	// (0x0008968d) dia3_listscroll_pane

0xd552,	// (0x0008969b) dia3_numentry_pane_ParamLimits

0xd552,	// (0x0008969b) dia3_numentry_pane

0x40c9,	// (0x00080212) dia3_list_pane

0xd560,	// (0x000896a9) scroll_pane_cp12

0xddfa,	// (0x00089f43) bg_dia3_numentry_pane

0xd56b,	// (0x000896b4) dia3_numentry_pane_t1

0xd57a,	// (0x000896c3) cell_dia3_key_num_pane

0xd582,	// (0x000896cb) cell_dia3_key0_fun_pane_ParamLimits

0xd582,	// (0x000896cb) cell_dia3_key0_fun_pane

0xd58f,	// (0x000896d8) cell_dia3_key1_fun_pane_ParamLimits

0xd58f,	// (0x000896d8) cell_dia3_key1_fun_pane

0xd59c,	// (0x000896e5) dia3_listrow_pane

0x3175,	// (0x0007f2be) bg_dia3_numentry_pane_g1

0xddfa,	// (0x00089f43) bg_button_pane_cp21

0xd5a9,	// (0x000896f2) cell_dia3_key_num_pane_t1

0xd5b7,	// (0x00089700) cell_dia3_key_num_pane_t2

0xd5c6,	// (0x0008970f) cell_dia3_key_num_pane_t3

0xd5d5,	// (0x0008971e) cell_dia3_key_num_pane_t4

0x0003,

0xfe08,	// (0x0008bf51) cell_dia3_key_num_pane_t

0xddfa,	// (0x00089f43) bg_button_pane_cp19

0xd5e4,	// (0x0008972d) cell_dia3_key0_fun_pane_g1

0xddfa,	// (0x00089f43) bg_button_pane_cp20

0xd5ec,	// (0x00089735) cell_dia3_key1_fun_pane_g1

0xd5f4,	// (0x0008973d) area_left_week_number_pane

0xd607,	// (0x00089750) area_top_day_name_pane

0xd615,	// (0x0008975e) frame_month_view_pane

0x40d4,	// (0x0008021d) grid_month_view_pane

0xd62a,	// (0x00089773) cell_top_day_name_pane_ParamLimits

0xd62a,	// (0x00089773) cell_top_day_name_pane

0xd646,	// (0x0008978f) cell_area_left_week_number_pane_ParamLimits

0xd646,	// (0x0008978f) cell_area_left_week_number_pane

0xd667,	// (0x000897b0) cell_month_view_pane_ParamLimits

0xd667,	// (0x000897b0) cell_month_view_pane

0x40e2,	// (0x0008022b) frm_month_g1

0xd693,	// (0x000897dc) frm_month_g2

0xd6a4,	// (0x000897ed) frm_month_g3

0xd6b5,	// (0x000897fe) frm_month_g4

0xd6c6,	// (0x0008980f) frm_month_g5

0xd6d7,	// (0x00089820) frm_month_g6

0xd6ea,	// (0x00089833) frm_month_g7

0x40ef,	// (0x00080238) frm_month_g8

0xd6fd,	// (0x00089846) frm_month_g9

0xd70a,	// (0x00089853) frm_month_g10

0xd717,	// (0x00089860) frm_month_g11

0xd724,	// (0x0008986d) frm_month_g12

0xd731,	// (0x0008987a) frm_month_g13

0xd740,	// (0x00089889) frm_month_g14

0xd74f,	// (0x00089898) frm_month_g15

0xd75e,	// (0x000898a7) frm_month_g16

0x000f,

0xfe11,	// (0x0008bf5a) frm_month_g

0x40fc,	// (0x00080245) cell_top_day_name_pane_t1

0xd76d,	// (0x000898b6) cell_area_left_week_number_pane_g1

0xd77c,	// (0x000898c5) cell_area_left_week_number_pane_t1

0xe530,	// (0x0008a679) cell_month_view_pane_g1

0xd792,	// (0x000898db) cell_month_view_pane_t1

0xddfa,	// (0x00089f43) main_fps_pane

0x35cc,	// (0x0007f715) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x35cc,	// (0x0007f715) cmail_ddmenu_btn02_pane_cp1

0x35e8,	// (0x0007f731) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x35e8,	// (0x0007f731) cmail_ddmenu_btn02_pane_cp2

0xcedc,	// (0x00089025) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcedc,	// (0x00089025) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2f,	// (0x0008be78) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2f,	// (0x0008be78) cmail_ddmenu_btn02_pane_g

0xcefa,	// (0x00089043) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcefa,	// (0x00089043) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd34,	// (0x0008be7d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd34,	// (0x0008be7d) cmail_ddmenu_btn02_pane_t

0xd7a8,	// (0x000898f1) fps_text_pane_ParamLimits

0xd7a8,	// (0x000898f1) fps_text_pane

0xd7b5,	// (0x000898fe) main_fps_pane_g1_ParamLimits

0xd7b5,	// (0x000898fe) main_fps_pane_g1

0xd7c1,	// (0x0008990a) wait_bar_pane_cp010_ParamLimits

0xd7c1,	// (0x0008990a) wait_bar_pane_cp010

0xd7cd,	// (0x00089916) fps_text_pane_t1_ParamLimits

0xd7cd,	// (0x00089916) fps_text_pane_t1

0xa517,	// (0x00086660) cam4_image_uncrop_pane_g1

0xa520,	// (0x00086669) cam4_image_uncrop_pane_g2

0xa529,	// (0x00086672) cam4_image_uncrop_pane_g3

0xa532,	// (0x0008667b) cam4_image_uncrop_pane_g4

0x0003,

0xf87a,	// (0x0008b9c3) cam4_image_uncrop_pane_g

0xd59c,	// (0x000896e5) dia3_listrow_pane_ParamLimits

0xddfa,	// (0x00089f43) main_phob2_pane

0xca6e,	// (0x00088bb7) cell_tport_appsw_pane_cp02_ParamLimits

0xca6e,	// (0x00088bb7) cell_tport_appsw_pane_cp02

0xca7d,	// (0x00088bc6) cell_tport_appsw_pane_cp03_ParamLimits

0xca7d,	// (0x00088bc6) cell_tport_appsw_pane_cp03

0xddfa,	// (0x00089f43) phob2_contact_card_pane

0xddfa,	// (0x00089f43) phob2_listscroll_pane

0x410f,	// (0x00080258) phob2_list_pane

0x4117,	// (0x00080260) scroll_pane_cp034

0xd7e6,	// (0x0008992f) phob2_cc_data_pane_ParamLimits

0xd7e6,	// (0x0008992f) phob2_cc_data_pane

0xd7fd,	// (0x00089946) phob2_cc_listscroll_pane_ParamLimits

0xd7fd,	// (0x00089946) phob2_cc_listscroll_pane

0xd389,	// (0x000894d2) list_double_large_graphic_phob2_pane_ParamLimits

0xd389,	// (0x000894d2) list_double_large_graphic_phob2_pane

0xd819,	// (0x00089962) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd819,	// (0x00089962) list_double_large_graphic_phob2_pane_g1

0xd826,	// (0x0008996f) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd826,	// (0x0008996f) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe32,	// (0x0008bf7b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe32,	// (0x0008bf7b) list_double_large_graphic_phob2_pane_g

0xd84c,	// (0x00089995) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd84c,	// (0x00089995) list_double_large_graphic_phob2_pane_t1

0xd861,	// (0x000899aa) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd861,	// (0x000899aa) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3b,	// (0x0008bf84) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3b,	// (0x0008bf84) list_double_large_graphic_phob2_pane_t

0xddfa,	// (0x00089f43) list_highlight_pane_cp024

0xd876,	// (0x000899bf) phob2_cc_button_pane

0xd87e,	// (0x000899c7) phob2_cc_data_pane_g1_ParamLimits

0xd87e,	// (0x000899c7) phob2_cc_data_pane_g1

0xd893,	// (0x000899dc) phob2_cc_data_pane_g2_ParamLimits

0xd893,	// (0x000899dc) phob2_cc_data_pane_g2

0x0001,

0xfe40,	// (0x0008bf89) phob2_cc_data_pane_g_ParamLimits

0xfe40,	// (0x0008bf89) phob2_cc_data_pane_g

0xd8a3,	// (0x000899ec) phob2_cc_data_pane_t1_ParamLimits

0xd8a3,	// (0x000899ec) phob2_cc_data_pane_t1

0xd8bc,	// (0x00089a05) phob2_cc_data_pane_t2_ParamLimits

0xd8bc,	// (0x00089a05) phob2_cc_data_pane_t2

0xd8d5,	// (0x00089a1e) phob2_cc_data_pane_t3_ParamLimits

0xd8d5,	// (0x00089a1e) phob2_cc_data_pane_t3

0x0002,

0xfe45,	// (0x0008bf8e) phob2_cc_data_pane_t_ParamLimits

0xfe45,	// (0x0008bf8e) phob2_cc_data_pane_t

0x411f,	// (0x00080268) phob2_cc_list_pane_ParamLimits

0x411f,	// (0x00080268) phob2_cc_list_pane

0x2894,	// (0x0007e9dd) scroll_pane_cp035_ParamLimits

0x2894,	// (0x0007e9dd) scroll_pane_cp035

0xe4c9,	// (0x0008a612) bg_button_pane_cp033

0x412b,	// (0x00080274) phob2_cc_button_pane_g1

0x4137,	// (0x00080280) phob2_cc_button_pane_t1

0x414c,	// (0x00080295) phob2_cc_button_pane_t2

0x0001,

0xfe4c,	// (0x0008bf95) phob2_cc_button_pane_t

0xd8ee,	// (0x00089a37) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd8ee,	// (0x00089a37) list_double_large_graphic_phob2_cc_pane

0xd93d,	// (0x00089a86) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd93d,	// (0x00089a86) list_double_large_graphic_phob2_cc_pane_g1

0xd94e,	// (0x00089a97) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd94e,	// (0x00089a97) list_double_large_graphic_phob2_cc_pane_g2

0xd95d,	// (0x00089aa6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd95d,	// (0x00089aa6) list_double_large_graphic_phob2_cc_pane_g3

0xd96c,	// (0x00089ab5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd96c,	// (0x00089ab5) list_double_large_graphic_phob2_cc_pane_g4

0xd97d,	// (0x00089ac6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd97d,	// (0x00089ac6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe51,	// (0x0008bf9a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe51,	// (0x0008bf9a) list_double_large_graphic_phob2_cc_pane_g

0xd98c,	// (0x00089ad5) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd98c,	// (0x00089ad5) list_double_large_graphic_phob2_cc_pane_t1

0xd9b5,	// (0x00089afe) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd9b5,	// (0x00089afe) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5c,	// (0x0008bfa5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5c,	// (0x0008bfa5) list_double_large_graphic_phob2_cc_pane_t

0x415e,	// (0x000802a7) list_highlight_pane_cp025_ParamLimits

0x415e,	// (0x000802a7) list_highlight_pane_cp025

0xe4c9,	// (0x0008a612) bg_button_pane_cp033_ParamLimits

0x412b,	// (0x00080274) phob2_cc_button_pane_g1_ParamLimits

0x4137,	// (0x00080280) phob2_cc_button_pane_t1_ParamLimits

0x414c,	// (0x00080295) phob2_cc_button_pane_t2_ParamLimits

0xfe4c,	// (0x0008bf95) phob2_cc_button_pane_t_ParamLimits

0x5d73,	// (0x00081ebc) popup_wgtman_window

0x26c4,	// (0x0007e80d) scroll_pane_cp038

0xd312,	// (0x0008945b) wgtman_btn_pane_cp_01_ParamLimits

0xd312,	// (0x0008945b) wgtman_btn_pane_cp_01

0x416c,	// (0x000802b5) wgtman_content_pane

0x4175,	// (0x000802be) wgtman_heading_pane

0xddfa,	// (0x00089f43) bg_heading_pane_cp02

0x417e,	// (0x000802c7) wgtman_heading_pane_g1

0x4186,	// (0x000802cf) wgtman_heading_pane_t1

0x4194,	// (0x000802dd) scroll_pane_cp036

0x419c,	// (0x000802e5) wgtman_list_pane

0x3489,	// (0x0007f5d2) wgtman_list_pane_t1_ParamLimits

0x3489,	// (0x0007f5d2) wgtman_list_pane_t1

0xa474,	// (0x000865bd) cam4_grid_pane

0xb162,	// (0x000872ab) bg_button_pane_cp015_ParamLimits

0xb174,	// (0x000872bd) bg_button_pane_cp016_ParamLimits

0xb187,	// (0x000872d0) bg_button_pane_cp017_ParamLimits

0xb1dd,	// (0x00087326) popup_vitu2_query_window_g3_ParamLimits

0xb1dd,	// (0x00087326) popup_vitu2_query_window_g3

0xb29c,	// (0x000873e5) popup_vitu2_query_window_t6_ParamLimits

0xb29c,	// (0x000873e5) popup_vitu2_query_window_t6

0xb2c7,	// (0x00087410) popup_vitu2_query_window_t7_ParamLimits

0xb2c7,	// (0x00087410) popup_vitu2_query_window_t7

0x4bae,	// (0x00080cf7) cam4_grid_pane_g1

0x4bb7,	// (0x00080d00) cam4_grid_pane_g2

0x41a4,	// (0x000802ed) cam4_grid_pane_g3

0x41ad,	// (0x000802f6) cam4_grid_pane_g4

0x0003,

0xfe61,	// (0x0008bfaa) cam4_grid_pane_g

0x6a5d,	// (0x00082ba6) aid_placing_vt_slider_lsc_ParamLimits

0x6d90,	// (0x00082ed9) vidtel_button_pane_ParamLimits

0x6d90,	// (0x00082ed9) vidtel_button_pane

0xddfa,	// (0x00089f43) bg_button_pane_cp034

0x41b8,	// (0x00080301) vidtel_button_pane_g1

0x41c0,	// (0x00080309) vidtel_button_pane_t1

0x27db,	// (0x0007e924) aid_size_vtel_slider_touch

0x2894,	// (0x0007e9dd) scroll_pane_cp039

0xc035,	// (0x0008817e) ncim_query_button_pane_cp01_ParamLimits

0xc054,	// (0x0008819d) ncimui_query_pane_g1_ParamLimits

0xe4c9,	// (0x0008a612) input_focus_pane_cp012_ParamLimits

0x31b3,	// (0x0007f2fc) ncim_query_entry_pane_t1_ParamLimits

0x2894,	// (0x0007e9dd) scroll_pane_cp039_ParamLimits

0x7f2e,	// (0x00084077) navi_pane_bcale_mc_g1

0x7f36,	// (0x0008407f) navi_pane_bcale_mc_t1

0x361e,	// (0x0007f767) main_sp_fs_email_pane_g1

0x362a,	// (0x0007f773) main_sp_fs_email_pane_g2

0x0001,

0xfc64,	// (0x0008bdad) main_sp_fs_email_pane_g

0x3af7,	// (0x0007fc40) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3af7,	// (0x0007fc40) list_single_cale_mrui_row_pane_g3

0xcf1a,	// (0x00089063) list_single_recal_day_pane_g5_event_pane

0x3cd4,	// (0x0007fe1d) list_single_recal_day_pane_g7

0x41d6,	// (0x0008031f) list_recal_day_event_pane_cp01

0x41df,	// (0x00080328) list_recal_vselct_arw_lo_pane_cp01

0x41e7,	// (0x00080330) list_recal_vselct_arw_up_pane_cp01

0x41ef,	// (0x00080338) list_recal_vselct_pane_cp01

0x27eb,	// (0x0007e934) list_recal_day_event_pane_cp01_g1

0x41f9,	// (0x00080342) list_recal_day_event_pane_cp01_t1

0x3cdc,	// (0x0007fe25) list_single_recal_day_pane_t1_ParamLimits

0x3cee,	// (0x0007fe37) list_single_recal_day_pane_t2_ParamLimits

0xfd44,	// (0x0008be8d) list_single_recal_day_pane_t_ParamLimits

0xe4a7,	// (0x0008a5f0) bg_notes_pane_ParamLimits

0xe580,	// (0x0008a6c9) list_notes_pane_ParamLimits

0x5f46,	// (0x0008208f) scroll_pane_cp06_ParamLimits

0xe5a2,	// (0x0008a6eb) main_notes_pane_ParamLimits

0xe4c9,	// (0x0008a612) main_welc_pane

0xd9ed,	// (0x00089b36) main_welc_body_pane_ParamLimits

0xd9ed,	// (0x00089b36) main_welc_body_pane

0xda08,	// (0x00089b51) main_welc_opti_pane_ParamLimits

0xda08,	// (0x00089b51) main_welc_opti_pane

0xda69,	// (0x00089bb2) main_welc_pane_t1_ParamLimits

0xda69,	// (0x00089bb2) main_welc_pane_t1

0xdb8f,	// (0x00089cd8) main_welc_body_row_pane_ParamLimits

0xdb8f,	// (0x00089cd8) main_welc_body_row_pane

0xe522,	// (0x0008a66b) main_welc_opti_row_pane_ParamLimits

0xe522,	// (0x0008a66b) main_welc_opti_row_pane

0x4226,	// (0x0008036f) main_welc_opti_row_pane_g1

0xdba9,	// (0x00089cf2) main_welc_opti_row_pane_t1

0x422e,	// (0x00080377) main_welc_body_row_pane_t1

0x3f4c,	// (0x00080095) popup_notif_wgt_heading_pane

0x3f66,	// (0x000800af) aid_size_list_notif_wgt_del_ParamLimits

0x3f73,	// (0x000800bc) list_notif_wgt_row_pane_g1_ParamLimits

0x3f7f,	// (0x000800c8) list_notif_wgt_row_pane_g2_ParamLimits

0x3f8e,	// (0x000800d7) list_notif_wgt_row_pane_g3_ParamLimits

0xfdab,	// (0x0008bef4) list_notif_wgt_row_pane_g_ParamLimits

0x3f9b,	// (0x000800e4) list_notif_wgt_row_pane_t1_ParamLimits

0x3fb1,	// (0x000800fa) list_notif_wgt_row_pane_t2_ParamLimits

0x3fc3,	// (0x0008010c) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb2,	// (0x0008befb) list_notif_wgt_row_pane_t_ParamLimits

0xd3a0,	// (0x000894e9) listrow_wgtman_pane_g1_ParamLimits

0xd3ad,	// (0x000894f6) listrow_wgtman_pane_g2_ParamLimits

0xfde2,	// (0x0008bf2b) listrow_wgtman_pane_g_ParamLimits

0xd3cb,	// (0x00089514) listrow_wgtman_pane_t1_ParamLimits

0xd3e3,	// (0x0008952c) listrow_wgtman_pane_t2_ParamLimits

0xfde7,	// (0x0008bf30) listrow_wgtman_pane_t_ParamLimits

0xd409,	// (0x00089552) wait_bar_pane_cp09_ParamLimits

0xddfa,	// (0x00089f43) bg_popup_heading_pane_cp02

0x423d,	// (0x00080386) popup_notif_wgt_heading_pane_g1

0x4245,	// (0x0008038e) popup_notif_wgt_heading_pane_t1

0xddfa,	// (0x00089f43) main_vids_pane

0xddfa,	// (0x00089f43) vids_listscroll_pane

0xdbb8,	// (0x00089d01) scroll_pane_cp040

0xddfa,	// (0x00089f43) vids_list_pane

0xdbc3,	// (0x00089d0c) vids_list_double_pane_ParamLimits

0xdbc3,	// (0x00089d0c) vids_list_double_pane

0xdbd7,	// (0x00089d20) vids_list_double_pane_g1

0xdbe0,	// (0x00089d29) vids_list_double_pane_t1

0xdbf0,	// (0x00089d39) vids_list_double_pane_t2

0x0001,

0xfe80,	// (0x0008bfc9) vids_list_double_pane_t

0x8b0b,	// (0x00084c54) main_ncimui_pane_ParamLimits

0xbe76,	// (0x00087fbf) main_ncimui_pane_g1_ParamLimits

0xbe84,	// (0x00087fcd) main_ncimui_pane_g2_ParamLimits

0xbe84,	// (0x00087fcd) main_ncimui_pane_g2

0x0001,

0xfb65,	// (0x0008bcae) main_ncimui_pane_g_ParamLimits

0xfb65,	// (0x0008bcae) main_ncimui_pane_g

0xda23,	// (0x00089b6c) main_welc_pane_g1_ParamLimits

0xda23,	// (0x00089b6c) main_welc_pane_g1

0xda2f,	// (0x00089b78) main_welc_pane_g2_ParamLimits

0xda2f,	// (0x00089b78) main_welc_pane_g2

0x0003,

0xfe6a,	// (0x0008bfb3) main_welc_pane_g_ParamLimits

0xfe6a,	// (0x0008bfb3) main_welc_pane_g

0xe4a7,	// (0x0008a5f0) listscroll_mce_pane_ParamLimits

0x7ff8,	// (0x00084141) wait_bar_pane_cp10

0x1b22,	// (0x0007dc6b) main_cale_day_pane_ParamLimits

0x1b22,	// (0x0007dc6b) main_cale_week_pane_ParamLimits

0xe4a7,	// (0x0008a5f0) main_messa_pane_ParamLimits

0x98bb,	// (0x00085a04) main_clock2_btn_pane_ParamLimits

0x98bb,	// (0x00085a04) main_clock2_btn_pane

0x239a,	// (0x0007e4e3) main_clock2_btn_pane_cp01_ParamLimits

0x239a,	// (0x0007e4e3) main_clock2_btn_pane_cp01

0x3a83,	// (0x0007fbcc) list_cale_mrui_pane_ParamLimits

0x3ff9,	// (0x00080142) main_cf0_pane_g2

0x0001,

0xfdb9,	// (0x0008bf02) main_cf0_pane_g

0xd5f4,	// (0x0008973d) area_left_week_number_pane_ParamLimits

0xd607,	// (0x00089750) area_top_day_name_pane_ParamLimits

0xd615,	// (0x0008975e) frame_month_view_pane_ParamLimits

0x40d4,	// (0x0008021d) grid_month_view_pane_ParamLimits

0x40e2,	// (0x0008022b) frm_month_g1_ParamLimits

0xd693,	// (0x000897dc) frm_month_g2_ParamLimits

0xd6a4,	// (0x000897ed) frm_month_g3_ParamLimits

0xd6b5,	// (0x000897fe) frm_month_g4_ParamLimits

0xd6c6,	// (0x0008980f) frm_month_g5_ParamLimits

0xd6d7,	// (0x00089820) frm_month_g6_ParamLimits

0xd6ea,	// (0x00089833) frm_month_g7_ParamLimits

0x40ef,	// (0x00080238) frm_month_g8_ParamLimits

0xd6fd,	// (0x00089846) frm_month_g9_ParamLimits

0xd70a,	// (0x00089853) frm_month_g10_ParamLimits

0xd717,	// (0x00089860) frm_month_g11_ParamLimits

0xd724,	// (0x0008986d) frm_month_g12_ParamLimits

0xd731,	// (0x0008987a) frm_month_g13_ParamLimits

0xd740,	// (0x00089889) frm_month_g14_ParamLimits

0xd74f,	// (0x00089898) frm_month_g15_ParamLimits

0xd75e,	// (0x000898a7) frm_month_g16_ParamLimits

0xfe11,	// (0x0008bf5a) frm_month_g_ParamLimits

0x40fc,	// (0x00080245) cell_top_day_name_pane_t1_ParamLimits

0xd76d,	// (0x000898b6) cell_area_left_week_number_pane_g1_ParamLimits

0xd77c,	// (0x000898c5) cell_area_left_week_number_pane_t1_ParamLimits

0xe530,	// (0x0008a679) cell_month_view_pane_g1_ParamLimits

0xd792,	// (0x000898db) cell_month_view_pane_t1_ParamLimits

0xe49f,	// (0x0008a5e8) main_clock2_btn_pane_g1

0x4253,	// (0x0008039c) main_clock2_btn_pane_t1

0xe4c9,	// (0x0008a612) listscroll_cmail_pane_ParamLimits

0x361e,	// (0x0007f767) main_sp_fs_email_pane_g1_ParamLimits

0x362a,	// (0x0007f773) main_sp_fs_email_pane_g2_ParamLimits

0xfc64,	// (0x0008bdad) main_sp_fs_email_pane_g_ParamLimits

0x3c43,	// (0x0007fd8c) list_recal_day_pane_ParamLimits

0x3c54,	// (0x0007fd9d) mian_recal_day_pane_t1

0xc94d,	// (0x00088a96) list_single_dyc_row_text_pane_t4_ParamLimits

0xc94d,	// (0x00088a96) list_single_dyc_row_text_pane_t4

0xc992,	// (0x00088adb) list_single_dyc_row_text_pane_t5_ParamLimits

0xc992,	// (0x00088adb) list_single_dyc_row_text_pane_t5

0x36d4,	// (0x0007f81d) list_single_dyc_row_text_pane_t6_ParamLimits

0x36d4,	// (0x0007f81d) list_single_dyc_row_text_pane_t6

0x7b55,	// (0x00083c9e) aid_mgn_list_cale_time_pane

0x8b0b,	// (0x00084c54) main_gallery2_pane_ParamLimits

0x23ae,	// (0x0007e4f7) main_clock2_pane_cp01_t1

0x23bc,	// (0x0007e505) main_clock2_pane_cp01_t3

0x0001,

0xf751,	// (0x0008b89a) main_clock2_pane_cp01_t

0x6450,	// (0x00082599) cale_week_scroll_pane_g16_ParamLimits

0x6450,	// (0x00082599) cale_week_scroll_pane_g16

0xe740,	// (0x0008a889) vorec_slider_pane

0x41c0,	// (0x00080309) vidtel_button_pane_t1_ParamLimits

0xcf75,	// (0x000890be) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcf75,	// (0x000890be) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcf84,	// (0x000890cd) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcf84,	// (0x000890cd) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd67,	// (0x0008beb0) main_fs_bigclock_clock_pane_g_ParamLimits

0xcf94,	// (0x000890dd) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcfa9,	// (0x000890f2) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd70,	// (0x0008beb9) main_fs_bigclock_clock_pane_t_ParamLimits

0x9203,	// (0x0008534c) main_mup3_lyrics_pane_ParamLimits

0x9203,	// (0x0008534c) main_mup3_lyrics_pane

0xdc26,	// (0x00089d6f) main_mup3_lyrics_pane_t1_ParamLimits

0xdc26,	// (0x00089d6f) main_mup3_lyrics_pane_t1

0x9ddb,	// (0x00085f24) aid_main_mp4_pane_t1_area

0x9de5,	// (0x00085f2e) aid_main_mp4_pane_t2_area

0x9ef2,	// (0x0008603b) main_mp4_pane_g7_ParamLimits

0x9ef2,	// (0x0008603b) main_mp4_pane_g7

0x9efe,	// (0x00086047) main_mp4_pane_g8_ParamLimits

0x9efe,	// (0x00086047) main_mp4_pane_g8

0xa31c,	// (0x00086465) aid_call6_pane_g1_size

0xd91c,	// (0x00089a65) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd91c,	// (0x00089a65) list_double_large_graphic_phob2_other_pane

0xdc4d,	// (0x00089d96) list_double_large_graphic_phob2_other_pane_g1

0xddfa,	// (0x00089f43) list_highlight_pane_cp026

0xe4c9,	// (0x0008a612) main_welc_pane_ParamLimits

0xc7b2,	// (0x000888fb) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc7b2,	// (0x000888fb) main_sp_fs_ctrlbar_pane_g3

0xc7cc,	// (0x00088915) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc7cc,	// (0x00088915) main_sp_fs_ctrlbar_pane_g4

0xc7fe,	// (0x00088947) toolbar2_fixed_button_pane_cp01

0xc809,	// (0x00088952) toolbar2_fixed_button_pane_cp02

0xc816,	// (0x0008895f) toolbar2_fixed_button_pane_cp03

0xd9de,	// (0x00089b27) list_welc_entry_pane_ParamLimits

0xd9de,	// (0x00089b27) list_welc_entry_pane

0xda3d,	// (0x00089b86) main_welc_pane_g3_ParamLimits

0xda3d,	// (0x00089b86) main_welc_pane_g3

0xda87,	// (0x00089bd0) main_welc_pane_t2_ParamLimits

0xda87,	// (0x00089bd0) main_welc_pane_t2

0xda9b,	// (0x00089be4) main_welc_pane_t3_ParamLimits

0xda9b,	// (0x00089be4) main_welc_pane_t3

0x0005,

0xfe73,	// (0x0008bfbc) main_welc_pane_t_ParamLimits

0xfe73,	// (0x0008bfbc) main_welc_pane_t

0xdb2d,	// (0x00089c76) welc_button_pane_ParamLimits

0xdb2d,	// (0x00089c76) welc_button_pane

0xdb81,	// (0x00089cca) welc_service_logo_pane_ParamLimits

0xdb81,	// (0x00089cca) welc_service_logo_pane

0xdc55,	// (0x00089d9e) list_single_welc_entry_pane_ParamLimits

0xdc55,	// (0x00089d9e) list_single_welc_entry_pane

0xdc66,	// (0x00089daf) list_single_welc_entry_pane_g1

0xdc6e,	// (0x00089db7) list_single_welc_entry_pane_t1

0xdc7c,	// (0x00089dc5) list_single_welc_entry_pane_t2

0x0001,

0xfe85,	// (0x0008bfce) list_single_welc_entry_pane_t

0xddfa,	// (0x00089f43) bg_button_pane_cp035

0x4261,	// (0x000803aa) welc_button_pane_t1

0x426f,	// (0x000803b8) welc_service_logo_pane_g1

0x4278,	// (0x000803c1) welc_service_logo_pane_g2

0x0001,

0xfe8a,	// (0x0008bfd3) welc_service_logo_pane_g

0x5d7f,	// (0x00081ec8) main_int_radio_pane

0x3051,	// (0x0007f19a) list_single_fs_dyc_pane_g1

0xd832,	// (0x0008997b) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xd832,	// (0x0008997b) list_double_large_graphic_phob2_pane_g3

0xd83e,	// (0x00089987) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd83e,	// (0x00089987) list_double_large_graphic_phob2_pane_g4

0xdc8a,	// (0x00089dd3) main_int_radio1_pane_ParamLimits

0xdc8a,	// (0x00089dd3) main_int_radio1_pane

0x4281,	// (0x000803ca) find_pane_cp02

0xdca0,	// (0x00089de9) input_focus_pane_cp12_ParamLimits

0xdca0,	// (0x00089de9) input_focus_pane_cp12

0xdcac,	// (0x00089df5) input_focus_pane_cp13_ParamLimits

0xdcac,	// (0x00089df5) input_focus_pane_cp13

0xdcc4,	// (0x00089e0d) input_focus_pane_cp14_ParamLimits

0xdcc4,	// (0x00089e0d) input_focus_pane_cp14

0x428a,	// (0x000803d3) int_radio1_listscroll_pane

0xdcdc,	// (0x00089e25) main_int_radio1_pane_g1_ParamLimits

0xdcdc,	// (0x00089e25) main_int_radio1_pane_g1

0xdce8,	// (0x00089e31) main_int_radio1_pane_t1_ParamLimits

0xdce8,	// (0x00089e31) main_int_radio1_pane_t1

0xdcfa,	// (0x00089e43) main_int_radio1_pane_t2_ParamLimits

0xdcfa,	// (0x00089e43) main_int_radio1_pane_t2

0xdd0e,	// (0x00089e57) main_int_radio1_pane_t3_ParamLimits

0xdd0e,	// (0x00089e57) main_int_radio1_pane_t3

0xdd22,	// (0x00089e6b) main_int_radio1_pane_t4_ParamLimits

0xdd22,	// (0x00089e6b) main_int_radio1_pane_t4

0x4294,	// (0x000803dd) main_int_radio1_pane_t5_ParamLimits

0x4294,	// (0x000803dd) main_int_radio1_pane_t5

0xdd39,	// (0x00089e82) main_int_radio1_pane_t6_ParamLimits

0xdd39,	// (0x00089e82) main_int_radio1_pane_t6

0xdd4b,	// (0x00089e94) main_int_radio1_pane_t7_ParamLimits

0xdd4b,	// (0x00089e94) main_int_radio1_pane_t7

0xdd5d,	// (0x00089ea6) main_int_radio1_pane_t8_ParamLimits

0xdd5d,	// (0x00089ea6) main_int_radio1_pane_t8

0xdd6f,	// (0x00089eb8) main_int_radio1_pane_t9_ParamLimits

0xdd6f,	// (0x00089eb8) main_int_radio1_pane_t9

0xdd81,	// (0x00089eca) main_int_radio1_pane_t10_ParamLimits

0xdd81,	// (0x00089eca) main_int_radio1_pane_t10

0xddb2,	// (0x00089efb) main_int_radio1_pane_t11_ParamLimits

0xddb2,	// (0x00089efb) main_int_radio1_pane_t11

0xdde3,	// (0x00089f2c) main_int_radio1_pane_t12_ParamLimits

0xdde3,	// (0x00089f2c) main_int_radio1_pane_t12

0x000b,

0xfe8f,	// (0x0008bfd8) main_int_radio1_pane_t_ParamLimits

0xfe8f,	// (0x0008bfd8) main_int_radio1_pane_t

0x410f,	// (0x00080258) int_radio_list_pane

0x4117,	// (0x00080260) scroll_pane_cp037

0x42a6,	// (0x000803ef) list_double_large_graphic_int_radio_pane_ParamLimits

0x42a6,	// (0x000803ef) list_double_large_graphic_int_radio_pane

0x42ba,	// (0x00080403) list_double_large_graphic_int_radio_pane_g1

0x42c3,	// (0x0008040c) list_double_large_graphic_int_radio_pane_t1

0x42d1,	// (0x0008041a) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea8,	// (0x0008bff1) list_double_large_graphic_int_radio_pane_t

0xddfa,	// (0x00089f43) list_highlight_pane_cp027

0x4207,	// (0x00080350) main_button_pane_4

0xda4d,	// (0x00089b96) main_welc_pane_g4_ParamLimits

0xda4d,	// (0x00089b96) main_welc_pane_g4

0xdaaf,	// (0x00089bf8) main_welc_pane_t4_ParamLimits

0xdaaf,	// (0x00089bf8) main_welc_pane_t4

0xdac1,	// (0x00089c0a) main_welc_pane_t5_ParamLimits

0xdac1,	// (0x00089c0a) main_welc_pane_t5

0xdaf9,	// (0x00089c42) main_welc_pane_t6_ParamLimits

0xdaf9,	// (0x00089c42) main_welc_pane_t6

0xdb3b,	// (0x00089c84) welc_button_pane_2_ParamLimits

0xdb3b,	// (0x00089c84) welc_button_pane_2

0xdb55,	// (0x00089c9e) welc_button_pane_3_ParamLimits

0xdb55,	// (0x00089c9e) welc_button_pane_3

0x4207,	// (0x00080350) welc_button_pane_4

0xdb71,	// (0x00089cba) welc_button_pane_5_ParamLimits

0xdb71,	// (0x00089cba) welc_button_pane_5

0x8b27,	// (0x00084c70) main_popup_welc_pane

0x42df,	// (0x00080428) main_welc_sk_g3

0x42e9,	// (0x00080432) main_welc_sk_g4

0x42f3,	// (0x0008043c) main_welc_sk_t3

0x4303,	// (0x0008044c) main_welc_sk_t4

0x4313,	// (0x0008045c) popup_welc_pane_t4

0x4321,	// (0x0008046a) popup_welc_pane_t5

0x432f,	// (0x00080478) popup_welc_pane_t6
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
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
