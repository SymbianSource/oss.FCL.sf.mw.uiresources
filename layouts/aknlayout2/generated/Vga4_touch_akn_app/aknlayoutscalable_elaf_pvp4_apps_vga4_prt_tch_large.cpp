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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007d604 };

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
0x1e58,	// (0x0007f45c) Screen

0x1e64,	// (0x0007f468) application_window

0x1ea4,	// (0x0007f4a8) area_bottom_pane_ParamLimits

0x1ea4,	// (0x0007f4a8) area_bottom_pane

0x1ed9,	// (0x0007f4dd) area_top_pane_ParamLimits

0x1ed9,	// (0x0007f4dd) area_top_pane

0xa195,	// (0x00087799) call_video_uplink_pane_ParamLimits

0xa195,	// (0x00087799) call_video_uplink_pane

0x1f68,	// (0x0007f56c) main_pane_ParamLimits

0x1f68,	// (0x0007f56c) main_pane

0xc86e,	// (0x00089e72) context_pane

0x5622,	// (0x00082c26) navi_pane

0x5646,	// (0x00082c4a) popup_cale_events_window_ParamLimits

0x5646,	// (0x00082c4a) popup_cale_events_window

0xc881,	// (0x00089e85) popup_mup_playback_window

0x565e,	// (0x00082c62) signal_pane

0xa914,	// (0x00087f18) main_browser_pane

0xaaca,	// (0x000880ce) main_burst_pane

0x54d4,	// (0x00082ad8) main_calc_pane

0xc811,	// (0x00089e15) main_cale_day_pane

0x2682,	// (0x0007fc86) main_cale_month_pane

0xc811,	// (0x00089e15) main_cale_week_pane

0xaaca,	// (0x000880ce) main_call_pane

0xa5c6,	// (0x00087bca) main_call_poc_pane

0xaaca,	// (0x000880ce) main_camera_pane

0xaaca,	// (0x000880ce) main_chi_dic_pane

0xb2a2,	// (0x000888a6) main_clock_pane

0xa5c6,	// (0x00087bca) main_fmradio_pane

0xaaca,	// (0x000880ce) main_graph_messa_pane

0xa5c6,	// (0x00087bca) main_help_pane

0xa914,	// (0x00087f18) main_im_pane

0xa821,	// (0x00087e25) main_image_pane_ParamLimits

0xa821,	// (0x00087e25) main_image_pane

0xa5c6,	// (0x00087bca) main_location2_pane

0xaaca,	// (0x000880ce) main_location_pane

0xa821,	// (0x00087e25) main_messa_pane

0xa5c6,	// (0x00087bca) main_mp2_pane

0xaaca,	// (0x000880ce) main_mp_pane

0xa5c6,	// (0x00087bca) main_msg_pane

0xa5c6,	// (0x00087bca) main_mup_eq_pane

0xa5c6,	// (0x00087bca) main_mup_pane

0xa914,	// (0x00087f18) main_notes_pane

0xa5c6,	// (0x00087bca) main_pec_pane

0xa5c6,	// (0x00087bca) main_phob_pane

0xa5c6,	// (0x00087bca) main_pinb_pane

0xa5c6,	// (0x00087bca) main_postcard_pane

0xa5c6,	// (0x00087bca) main_qdial_pane

0xaaca,	// (0x000880ce) main_skin_pane

0xa5c6,	// (0x00087bca) main_smil2_pane

0xaaca,	// (0x000880ce) main_smil_pane

0xaaca,	// (0x000880ce) main_video_pane

0xaaca,	// (0x000880ce) main_video_tele_pane

0xa821,	// (0x00087e25) main_viewer_pane_ParamLimits

0xa821,	// (0x00087e25) main_viewer_pane

0xaaca,	// (0x000880ce) main_vorec_pane

0x550c,	// (0x00082b10) popup_blid_sat_info_window_ParamLimits

0x550c,	// (0x00082b10) popup_blid_sat_info_window

0x5526,	// (0x00082b2a) popup_dyc_status_message_window_ParamLimits

0x5526,	// (0x00082b2a) popup_dyc_status_message_window

0x5536,	// (0x00082b3a) popup_grid_large_graphic_window_ParamLimits

0x5536,	// (0x00082b3a) popup_grid_large_graphic_window

0x55ae,	// (0x00082bb2) popup_loc_request_window_ParamLimits

0x55ae,	// (0x00082bb2) popup_loc_request_window

0x55f6,	// (0x00082bfa) popup_wml_address_window_ParamLimits

0x55f6,	// (0x00082bfa) popup_wml_address_window

0x53ac,	// (0x000829b0) call_muted_g1

0x506b,	// (0x0008266f) popup_call_audio_conf_window_ParamLimits

0x506b,	// (0x0008266f) popup_call_audio_conf_window

0x53bc,	// (0x000829c0) popup_call_audio_first_window_ParamLimits

0x53bc,	// (0x000829c0) popup_call_audio_first_window

0x53fc,	// (0x00082a00) popup_call_audio_in_window_ParamLimits

0x53fc,	// (0x00082a00) popup_call_audio_in_window

0x5420,	// (0x00082a24) popup_call_audio_out_window_ParamLimits

0x5420,	// (0x00082a24) popup_call_audio_out_window

0x5442,	// (0x00082a46) popup_call_audio_second_window_ParamLimits

0x5442,	// (0x00082a46) popup_call_audio_second_window

0x5472,	// (0x00082a76) popup_call_audio_wait_window_ParamLimits

0x5472,	// (0x00082a76) popup_call_audio_wait_window

0x5493,	// (0x00082a97) popup_number_entry_window_ParamLimits

0x5493,	// (0x00082a97) popup_number_entry_window

0xa1b3,	// (0x000877b7) bg_popup_call_pane_cp05_ParamLimits

0xa1b3,	// (0x000877b7) bg_popup_call_pane_cp05

0xa1d3,	// (0x000877d7) popup_number_entry_window_t1

0xa1e6,	// (0x000877ea) popup_number_entry_window_t2

0xa1f8,	// (0x000877fc) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0008c6ce) popup_number_entry_window_t

0xa20a,	// (0x0008780e) text_title_cp2

0xa21d,	// (0x00087821) bg_popup_call_pane_cp_ParamLimits

0xa21d,	// (0x00087821) bg_popup_call_pane_cp

0xa22b,	// (0x0008782f) call_thumbnail_pane

0xa233,	// (0x00087837) popup_call_audio_in_window_g1_ParamLimits

0xa233,	// (0x00087837) popup_call_audio_in_window_g1

0xa23f,	// (0x00087843) popup_call_audio_in_window_g2_ParamLimits

0xa23f,	// (0x00087843) popup_call_audio_in_window_g2

0xa24b,	// (0x0008784f) popup_call_audio_in_window_g3_ParamLimits

0xa24b,	// (0x0008784f) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0008c6d7) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0008c6d7) popup_call_audio_in_window_g

0xa257,	// (0x0008785b) popup_call_audio_in_window_t1_ParamLimits

0xa257,	// (0x0008785b) popup_call_audio_in_window_t1

0xa273,	// (0x00087877) popup_call_audio_in_window_t2_ParamLimits

0xa273,	// (0x00087877) popup_call_audio_in_window_t2

0xa28f,	// (0x00087893) popup_call_audio_in_window_t3_ParamLimits

0xa28f,	// (0x00087893) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0008c6de) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0008c6de) popup_call_audio_in_window_t

0xa21d,	// (0x00087821) bg_popup_call_pane_cp01_ParamLimits

0xa21d,	// (0x00087821) bg_popup_call_pane_cp01

0xa22b,	// (0x0008782f) call_thumbnail_pane_cp02

0xa2a2,	// (0x000878a6) call_type_pane_cp022

0xa2aa,	// (0x000878ae) popup_call_audio_out_window_g1_ParamLimits

0xa2aa,	// (0x000878ae) popup_call_audio_out_window_g1

0xa2bc,	// (0x000878c0) popup_call_audio_out_window_g2_ParamLimits

0xa2bc,	// (0x000878c0) popup_call_audio_out_window_g2

0xa2c8,	// (0x000878cc) popup_call_audio_out_window_g3_ParamLimits

0xa2c8,	// (0x000878cc) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0008c6e5) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0008c6e5) popup_call_audio_out_window_g

0xa2da,	// (0x000878de) popup_call_audio_out_window_t1_ParamLimits

0xa2da,	// (0x000878de) popup_call_audio_out_window_t1

0xa2f2,	// (0x000878f6) popup_call_audio_out_window_t2_ParamLimits

0xa2f2,	// (0x000878f6) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0008c6ec) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0008c6ec) popup_call_audio_out_window_t

0xa307,	// (0x0008790b) bg_popup_call_pane_ParamLimits

0xa307,	// (0x0008790b) bg_popup_call_pane

0x216c,	// (0x0007f770) call_thumbnail_pane_cp_ParamLimits

0x216c,	// (0x0007f770) call_thumbnail_pane_cp

0xa38b,	// (0x0008798f) call_type_pane_cp01_ParamLimits

0xa38b,	// (0x0008798f) call_type_pane_cp01

0xa3cf,	// (0x000879d3) popup_call_audio_first_window_g1_ParamLimits

0xa3cf,	// (0x000879d3) popup_call_audio_first_window_g1

0xa41b,	// (0x00087a1f) popup_call_audio_first_window_g2_ParamLimits

0xa41b,	// (0x00087a1f) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0008c6f1) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0008c6f1) popup_call_audio_first_window_g

0xa45f,	// (0x00087a63) popup_call_audio_first_window_t1_ParamLimits

0xa45f,	// (0x00087a63) popup_call_audio_first_window_t1

0xa50b,	// (0x00087b0f) popup_call_audio_first_window_t4_ParamLimits

0xa50b,	// (0x00087b0f) popup_call_audio_first_window_t4

0xa597,	// (0x00087b9b) popup_call_audio_first_window_t5_ParamLimits

0xa597,	// (0x00087b9b) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0008c6f6) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0008c6f6) popup_call_audio_first_window_t

0xa5c6,	// (0x00087bca) bg_popup_call_pane_cp02

0xa5d0,	// (0x00087bd4) call_type_pane_cp023

0xa5d8,	// (0x00087bdc) popup_call_audio_wait_window_g1

0xa5e0,	// (0x00087be4) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008c6fd) popup_call_audio_wait_window_g

0xa5e8,	// (0x00087bec) popup_call_audio_wait_window_t3

0xa5f6,	// (0x00087bfa) bg_popup_call_pane_cp03_ParamLimits

0xa5f6,	// (0x00087bfa) bg_popup_call_pane_cp03

0xa656,	// (0x00087c5a) call_thumbnail_pane_cp011_ParamLimits

0xa656,	// (0x00087c5a) call_thumbnail_pane_cp011

0xa662,	// (0x00087c66) call_type_pane_cp034_ParamLimits

0xa662,	// (0x00087c66) call_type_pane_cp034

0xa69e,	// (0x00087ca2) popup_call_audio_second_window_g1_ParamLimits

0xa69e,	// (0x00087ca2) popup_call_audio_second_window_g1

0xa6da,	// (0x00087cde) popup_call_audio_second_window_g2_ParamLimits

0xa6da,	// (0x00087cde) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0008c702) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0008c702) popup_call_audio_second_window_g

0xa716,	// (0x00087d1a) popup_call_audio_second_window_t1_ParamLimits

0xa716,	// (0x00087d1a) popup_call_audio_second_window_t1

0xa797,	// (0x00087d9b) popup_call_audio_second_window_t2_ParamLimits

0xa797,	// (0x00087d9b) popup_call_audio_second_window_t2

0xa7cd,	// (0x00087dd1) popup_call_audio_second_window_t3_ParamLimits

0xa7cd,	// (0x00087dd1) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0008c707) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0008c707) popup_call_audio_second_window_t

0xa5c6,	// (0x00087bca) bg_popup_call_pane_cp04

0xa803,	// (0x00087e07) list_conf_pane

0xa80b,	// (0x00087e0f) popup_call_audio_conf_window_t1

0xa819,	// (0x00087e1d) call_thumbnail_pane_g1

0xa821,	// (0x00087e25) bg_pinb_pane_ParamLimits

0xa821,	// (0x00087e25) bg_pinb_pane

0xa82f,	// (0x00087e33) find_pinb_pane

0xa838,	// (0x00087e3c) listscroll_pinb_pane_ParamLimits

0xa838,	// (0x00087e3c) listscroll_pinb_pane

0xa847,	// (0x00087e4b) pinb_bg_pane_g1

0x2190,	// (0x0007f794) pinb_bg_pane_g2

0x219c,	// (0x0007f7a0) pinb_bg_pane_g3

0x21a8,	// (0x0007f7ac) pinb_bg_pane_g4

0x21b4,	// (0x0007f7b8) pinb_bg_pane_g5

0x21c0,	// (0x0007f7c4) pinb_bg_pane_g6

0x21cb,	// (0x0007f7cf) pinb_bg_pane_g7

0x21d6,	// (0x0007f7da) pinb_bg_pane_g8

0x21e1,	// (0x0007f7e5) pinb_bg_pane_g9

0x21eb,	// (0x0007f7ef) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0008c70e) pinb_bg_pane_g

0x2208,	// (0x0007f80c) grid_pinb_pane

0x2213,	// (0x0007f817) list_pinb_pane

0x221e,	// (0x0007f822) scroll_pane_cp01_ParamLimits

0x221e,	// (0x0007f822) scroll_pane_cp01

0xa851,	// (0x00087e55) find_pinb_pane_g1_ParamLimits

0xa851,	// (0x00087e55) find_pinb_pane_g1

0xa869,	// (0x00087e6d) find_pinb_pane_t1

0xa87b,	// (0x00087e7f) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0008c728) find_pinb_pane_t

0xa890,	// (0x00087e94) input_focus_pane_cp01_ParamLimits

0xa890,	// (0x00087e94) input_focus_pane_cp01

0x2230,	// (0x0007f834) cell_pinb_pane_ParamLimits

0x2230,	// (0x0007f834) cell_pinb_pane

0x2255,	// (0x0007f859) cell_pinb_pane_g1_ParamLimits

0x2255,	// (0x0007f859) cell_pinb_pane_g1

0x226a,	// (0x0007f86e) cell_pinb_pane_g2_ParamLimits

0x226a,	// (0x0007f86e) cell_pinb_pane_g2

0xa89c,	// (0x00087ea0) cell_pinb_pane_g3_ParamLimits

0xa89c,	// (0x00087ea0) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0008c72d) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0008c72d) cell_pinb_pane_g

0xa5c6,	// (0x00087bca) grid_highlight_pane_cp01

0x2276,	// (0x0007f87a) list_pinb_item_pane_ParamLimits

0x2276,	// (0x0007f87a) list_pinb_item_pane

0xa5c6,	// (0x00087bca) list_highlight_pane_cp02

0x2294,	// (0x0007f898) list_pinb_item_pane_g1_ParamLimits

0x2294,	// (0x0007f898) list_pinb_item_pane_g1

0x22a1,	// (0x0007f8a5) list_pinb_item_pane_g2_ParamLimits

0x22a1,	// (0x0007f8a5) list_pinb_item_pane_g2

0x22ad,	// (0x0007f8b1) list_pinb_item_pane_g3_ParamLimits

0x22ad,	// (0x0007f8b1) list_pinb_item_pane_g3

0x22be,	// (0x0007f8c2) list_pinb_item_pane_g4_ParamLimits

0x22be,	// (0x0007f8c2) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0008c734) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0008c734) list_pinb_item_pane_g

0x22ca,	// (0x0007f8ce) list_pinb_item_pane_t1_ParamLimits

0x22ca,	// (0x0007f8ce) list_pinb_item_pane_t1

0x22fb,	// (0x0007f8ff) calc_display_pane

0x2319,	// (0x0007f91d) calc_paper_pane

0x2335,	// (0x0007f939) grid_calc_pane

0xa5c6,	// (0x00087bca) bg_list_pane_cp01

0x2361,	// (0x0007f965) clock_g1

0x2369,	// (0x0007f96d) clock_g2

0x0001,

0xf139,	// (0x0008c73d) clock_g

0x2373,	// (0x0007f977) clock_t1_ParamLimits

0x2373,	// (0x0007f977) clock_t1

0x2388,	// (0x0007f98c) clock_t2_ParamLimits

0x2388,	// (0x0007f98c) clock_t2

0x239a,	// (0x0007f99e) clock_t3_ParamLimits

0x239a,	// (0x0007f99e) clock_t3

0x23ac,	// (0x0007f9b0) clock_t4_ParamLimits

0x23ac,	// (0x0007f9b0) clock_t4

0x23be,	// (0x0007f9c2) clock_t5_ParamLimits

0x23be,	// (0x0007f9c2) clock_t5

0x23d3,	// (0x0007f9d7) clock_t6_ParamLimits

0x23d3,	// (0x0007f9d7) clock_t6

0x23e5,	// (0x0007f9e9) clock_t7_ParamLimits

0x23e5,	// (0x0007f9e9) clock_t7

0x23f7,	// (0x0007f9fb) clock_t8_ParamLimits

0x23f7,	// (0x0007f9fb) clock_t8

0x240d,	// (0x0007fa11) clock_t9_ParamLimits

0x240d,	// (0x0007fa11) clock_t9

0x0008,

0xf13e,	// (0x0008c742) clock_t_ParamLimits

0xf13e,	// (0x0008c742) clock_t

0xa8d6,	// (0x00087eda) popup_clock_analogue_window_cp02

0xa8d6,	// (0x00087eda) popup_clock_digital_window_cp01

0xa8de,	// (0x00087ee2) listscroll_help_pane

0xa5c6,	// (0x00087bca) phob_pre_status_pane

0xa8e8,	// (0x00087eec) grid_qdial_pane

0xa821,	// (0x00087e25) listscroll_mce_pane

0xa821,	// (0x00087e25) bg_notes_pane

0xa8f2,	// (0x00087ef6) list_notes_pane

0x2423,	// (0x0007fa27) scroll_pane_cp06

0xa900,	// (0x00087f04) bg_calc_paper_pane

0x2432,	// (0x0007fa36) list_calc_pane

0xa914,	// (0x00087f18) bg_calc_display_pane

0x244c,	// (0x0007fa50) calc_display_pane_t1

0x2461,	// (0x0007fa65) calc_display_pane_t2

0x2476,	// (0x0007fa7a) calc_display_pane_t3

0x0002,

0xf151,	// (0x0008c755) calc_display_pane_t

0x2488,	// (0x0007fa8c) cell_calc_pane_ParamLimits

0x2488,	// (0x0007fa8c) cell_calc_pane

0xa920,	// (0x00087f24) bg_calc_paper_pane_g1

0xa92c,	// (0x00087f30) bg_calc_paper_pane_g2

0xa938,	// (0x00087f3c) bg_calc_paper_pane_g3

0xa944,	// (0x00087f48) bg_calc_paper_pane_g4

0xa950,	// (0x00087f54) bg_calc_paper_pane_g5

0x24b7,	// (0x0007fabb) bg_calc_paper_pane_g6

0x24c8,	// (0x0007facc) bg_calc_paper_pane_g7

0x24d9,	// (0x0007fadd) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0008c75c) bg_calc_paper_pane_g

0x24ec,	// (0x0007faf0) calc_bg_paper_pane_g9

0x24ff,	// (0x0007fb03) list_calc_item_pane_ParamLimits

0x24ff,	// (0x0007fb03) list_calc_item_pane

0xa95c,	// (0x00087f60) list_calc_item_pane_g1

0x2520,	// (0x0007fb24) list_calc_item_pane_t1_ParamLimits

0x2520,	// (0x0007fb24) list_calc_item_pane_t1

0x2532,	// (0x0007fb36) list_calc_item_pane_t2_ParamLimits

0x2532,	// (0x0007fb36) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0008c76d) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0008c76d) list_calc_item_pane_t

0xa969,	// (0x00087f6d) cell_calc_pane_g1

0xa973,	// (0x00087f77) grid_highlight_pane_cp02

0xa995,	// (0x00087f99) bg_calc_display_pane_g1

0x2562,	// (0x0007fb66) bg_calc_display_pane_g2

0xa99e,	// (0x00087fa2) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0008c777) bg_calc_display_pane_g

0x256c,	// (0x0007fb70) cell_qdial_pane_ParamLimits

0x256c,	// (0x0007fb70) cell_qdial_pane

0x2582,	// (0x0007fb86) cell_qdial_pane_g1_ParamLimits

0x2582,	// (0x0007fb86) cell_qdial_pane_g1

0x258f,	// (0x0007fb93) cell_qdial_pane_g2_ParamLimits

0x258f,	// (0x0007fb93) cell_qdial_pane_g2

0xa9a7,	// (0x00087fab) cell_qdial_pane_g3_ParamLimits

0xa9a7,	// (0x00087fab) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0008c77e) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0008c77e) cell_qdial_pane_g

0x25ad,	// (0x0007fbb1) cell_qdial_pane_t1_ParamLimits

0x25ad,	// (0x0007fbb1) cell_qdial_pane_t1

0x25c5,	// (0x0007fbc9) cell_qdial_pane_t2_ParamLimits

0x25c5,	// (0x0007fbc9) cell_qdial_pane_t2

0x25d8,	// (0x0007fbdc) cell_qdial_pane_t3_ParamLimits

0x25d8,	// (0x0007fbdc) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0008c787) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0008c787) cell_qdial_pane_t

0xa5c6,	// (0x00087bca) grid_highlight_pane_cp04

0xa9b3,	// (0x00087fb7) thumbnail_qdial_pane_ParamLimits

0xa9b3,	// (0x00087fb7) thumbnail_qdial_pane

0xaa0f,	// (0x00088013) list_help_pane

0xaa18,	// (0x0008801c) scroll_pane_cp02

0x25eb,	// (0x0007fbef) help_list_pane_t1_ParamLimits

0x25eb,	// (0x0007fbef) help_list_pane_t1

0x2612,	// (0x0007fc16) bg_notes_pane_g2

0x261a,	// (0x0007fc1e) bg_notes_pane_g3

0x2622,	// (0x0007fc26) notes_bg_pane_g1

0x262a,	// (0x0007fc2e) notes_bg_pane_g4

0x2632,	// (0x0007fc36) notes_bg_pane_g5

0x263a,	// (0x0007fc3e) notes_bg_pane_g6

0x2642,	// (0x0007fc46) notes_bg_pane_g7

0x264a,	// (0x0007fc4e) notes_bg_pane_g8

0x2652,	// (0x0007fc56) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0008c7a5) notes_bg_pane_g

0x265a,	// (0x0007fc5e) list_notes_text_pane_ParamLimits

0x265a,	// (0x0007fc5e) list_notes_text_pane

0xaa21,	// (0x00088025) list_notes_text_pane_g1

0x0b50,	// (0x0007e154) list_notes_text_pane_t1

0x2682,	// (0x0007fc86) listscroll_cale_week_pane

0x26b8,	// (0x0007fcbc) bg_cale_heading_pane

0x26e1,	// (0x0007fce5) bg_cale_pane_cp01

0x2703,	// (0x0007fd07) cale_week_corner_pane

0x2722,	// (0x0007fd26) cale_week_day_heading_pane

0x2750,	// (0x0007fd54) cale_week_scroll_pane_g1

0x2774,	// (0x0007fd78) cale_week_scroll_pane_g2

0x278c,	// (0x0007fd90) cale_week_scroll_pane_g3

0x27a4,	// (0x0007fda8) cale_week_scroll_pane_g4

0x27bc,	// (0x0007fdc0) cale_week_scroll_pane_g5

0x27d4,	// (0x0007fdd8) cale_week_scroll_pane_g6

0x27f4,	// (0x0007fdf8) cale_week_scroll_pane_g7

0x2814,	// (0x0007fe18) cale_week_scroll_pane_g8

0x2834,	// (0x0007fe38) cale_week_scroll_pane_g9

0x2851,	// (0x0007fe55) cale_week_scroll_pane_g10

0x286e,	// (0x0007fe72) cale_week_scroll_pane_g11

0x288b,	// (0x0007fe8f) cale_week_scroll_pane_g12

0x28a8,	// (0x0007feac) cale_week_scroll_pane_g13

0x28cd,	// (0x0007fed1) cale_week_scroll_pane_g14

0x28f6,	// (0x0007fefa) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0008c7b4) cale_week_scroll_pane_g

0x293f,	// (0x0007ff43) cale_week_time_pane

0x295f,	// (0x0007ff63) grid_cale_week_pane

0xaa4d,	// (0x00088051) scroll_pane_cp08

0x2992,	// (0x0007ff96) cell_cale_week_pane_ParamLimits

0x2992,	// (0x0007ff96) cell_cale_week_pane

0x2a22,	// (0x00080026) cale_week_day_heading_pane_t1

0x2a6a,	// (0x0008006e) cale_week_day_heading_pane_t2

0x2ab7,	// (0x000800bb) cale_week_day_heading_pane_t3

0x2b04,	// (0x00080108) cale_week_day_heading_pane_t4

0x2b51,	// (0x00080155) cale_week_day_heading_pane_t5

0x2b9e,	// (0x000801a2) cale_week_day_heading_pane_t6

0x2beb,	// (0x000801ef) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0008c7d5) cale_week_day_heading_pane_t

0xaa6f,	// (0x00088073) bg_cale_side_pane

0x2c33,	// (0x00080237) cale_week_time_pane_t1

0x2c77,	// (0x0008027b) cale_week_time_pane_t2

0x2cbb,	// (0x000802bf) cale_week_time_pane_t3

0x2cff,	// (0x00080303) cale_week_time_pane_t4

0x2d43,	// (0x00080347) cale_week_time_pane_t5

0x2d87,	// (0x0008038b) cale_week_time_pane_t6

0x2dcb,	// (0x000803cf) cale_week_time_pane_t7

0x2e17,	// (0x0008041b) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0008c7e4) cale_week_time_pane_t

0x2e65,	// (0x00080469) cell_cale_week_pane_g2

0x2e89,	// (0x0008048d) cell_cale_week_pane_g3_ParamLimits

0x2e89,	// (0x0008048d) cell_cale_week_pane_g3

0xaa7d,	// (0x00088081) grid_highlight_pane_cp07

0xaa85,	// (0x00088089) listscroll_gms_pane

0xaa8f,	// (0x00088093) grid_gms_pane

0xaa98,	// (0x0008809c) listscroll_gms_pane_g1

0xaaa0,	// (0x000880a4) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0008c7f5) listscroll_gms_pane_g

0x2ea1,	// (0x000804a5) scroll_pane_cp010

0x2eac,	// (0x000804b0) cell_gms_pane_ParamLimits

0x2eac,	// (0x000804b0) cell_gms_pane

0x2ebf,	// (0x000804c3) cell_gms_pane_g1

0xaaa8,	// (0x000880ac) cell_gms_pane_g2

0xaab0,	// (0x000880b4) cell_gms_pane_g3

0xaab9,	// (0x000880bd) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0008c7fa) cell_gms_pane_g

0xaac2,	// (0x000880c6) grid_highlight_pane_cp09

0x5354,	// (0x00082958) phob_pre_status_pane_g1

0x535c,	// (0x00082960) phob_pre_status_pane_g2

0x5364,	// (0x00082968) phob_pre_status_pane_g3

0x536c,	// (0x00082970) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0008cbe5) phob_pre_status_pane_g

0x537c,	// (0x00082980) phob_pre_status_pane_t1

0x538c,	// (0x00082990) phob_pre_status_pane_t2

0x539c,	// (0x000829a0) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0008cbf0) phob_pre_status_pane_t

0xaaca,	// (0x000880ce) bg_list_pane_cp05

0x2ecf,	// (0x000804d3) grid_vorec_pane

0x2edb,	// (0x000804df) vorec_t1

0x2ee9,	// (0x000804ed) vorec_t2

0x2ef7,	// (0x000804fb) vorec_t3

0x2f05,	// (0x00080509) vorec_t4

0xa13c,	// (0x00087740) vorec_t5

0xa14a,	// (0x0008774e) vorec_t6

0x0004,

0xf1ff,	// (0x0008c803) vorec_t

0xa158,	// (0x0008775c) wait_bar_pane_cp01

0x2f21,	// (0x00080525) cell_vorec_pane_ParamLimits

0x2f21,	// (0x00080525) cell_vorec_pane

0x2f36,	// (0x0008053a) cell_vorec_pane_g1

0xa5c6,	// (0x00087bca) grid_highlight_pane_cp05

0x2f4e,	// (0x00080552) cams_zoom_pane

0x2f5a,	// (0x0008055e) image_vga_pane

0x2f69,	// (0x0008056d) main_camera_pane_g1

0x2f77,	// (0x0008057b) main_camera_pane_g2

0x2f83,	// (0x00080587) main_camera_pane_g3

0x2f91,	// (0x00080595) main_camera_pane_g4

0x2f9f,	// (0x000805a3) main_camera_pane_g5

0x2fad,	// (0x000805b1) main_camera_pane_g6

0x2fbb,	// (0x000805bf) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0008c80e) main_camera_pane_g

0x2fc9,	// (0x000805cd) main_camera_pane_t1

0x2fdb,	// (0x000805df) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0008c81f) main_camera_pane_t

0x2ffe,	// (0x00080602) cams_zoom_pane_cp_ParamLimits

0x2ffe,	// (0x00080602) cams_zoom_pane_cp

0x3022,	// (0x00080626) image_cif_pane_ParamLimits

0x3022,	// (0x00080626) image_cif_pane

0x3040,	// (0x00080644) image_subqcif_pane

0x304a,	// (0x0008064e) main_video_pane_g1_ParamLimits

0x304a,	// (0x0008064e) main_video_pane_g1

0x306a,	// (0x0008066e) main_video_pane_g2_ParamLimits

0x306a,	// (0x0008066e) main_video_pane_g2

0x309a,	// (0x0008069e) main_video_pane_g3_ParamLimits

0x309a,	// (0x0008069e) main_video_pane_g3

0x30c3,	// (0x000806c7) main_video_pane_g4_ParamLimits

0x30c3,	// (0x000806c7) main_video_pane_g4

0x30ec,	// (0x000806f0) main_video_pane_g5_ParamLimits

0x30ec,	// (0x000806f0) main_video_pane_g5

0xaade,	// (0x000880e2) main_video_pane_g6_ParamLimits

0xaade,	// (0x000880e2) main_video_pane_g6

0x0006,

0xf220,	// (0x0008c824) main_video_pane_g_ParamLimits

0xf220,	// (0x0008c824) main_video_pane_g

0x310e,	// (0x00080712) main_video_pane_t1_ParamLimits

0x310e,	// (0x00080712) main_video_pane_t1

0xaaf8,	// (0x000880fc) cams_zoom_pane_g1

0xab01,	// (0x00088105) cams_zoom_pane_g2

0xab0a,	// (0x0008810e) cams_zoom_pane_g3

0xab13,	// (0x00088117) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0008c833) cams_zoom_pane_g

0x3158,	// (0x0008075c) grid_cams_pane

0x3166,	// (0x0008076a) linegrid_cams_pane

0x3172,	// (0x00080776) cell_cams_pane_ParamLimits

0x3172,	// (0x00080776) cell_cams_pane

0xab1c,	// (0x00088120) cams_burst_image_pane

0xab24,	// (0x00088128) cell_cams_pane_g1

0xa5c6,	// (0x00087bca) grid_highlight_pane_cp03

0xa969,	// (0x00087f6d) mp_bg_pane_g1

0xa5c6,	// (0x00087bca) bg_list_pane_cp03

0xc734,	// (0x00089d38) bg_mp_pane

0xc73c,	// (0x00089d40) grid_mp_pane

0xc744,	// (0x00089d48) media_player_g1

0xc74e,	// (0x00089d52) media_player_t1

0xc75c,	// (0x00089d60) media_player_t2

0xc76a,	// (0x00089d6e) media_player_t3

0xc778,	// (0x00089d7c) media_player_t4

0xc786,	// (0x00089d8a) media_player_t5

0xc794,	// (0x00089d98) media_player_t6

0xc7a2,	// (0x00089da6) media_player_t7

0x0006,

0xf5cb,	// (0x0008cbcf) media_player_t

0xc7b0,	// (0x00089db4) wait_bar_pane_cp02

0xf5b0,	// (0x0008cbb4) main_usb_pane_t

0x534b,	// (0x0008294f) cell_mp_pane

0xa969,	// (0x00087f6d) cell_mp_pane_g1

0xa5c6,	// (0x00087bca) grid_highlight_pane_cp06

0xab2c,	// (0x00088130) grid_skin_colour_pane

0xab34,	// (0x00088138) list_highlight_pane_cp03

0x319f,	// (0x000807a3) skin_g1

0xab3c,	// (0x00088140) skin_t1

0xab4b,	// (0x0008814f) skin_t2

0x0001,

0xf264,	// (0x0008c868) skin_t

0x31a9,	// (0x000807ad) cell_skin_colour_pane_ParamLimits

0x31a9,	// (0x000807ad) cell_skin_colour_pane

0xab59,	// (0x0008815d) cell_skin_colour_pane_g1

0x3229,	// (0x0008082d) call_video_g1_ParamLimits

0x3229,	// (0x0008082d) call_video_g1

0x3239,	// (0x0008083d) call_video_g2_ParamLimits

0x3239,	// (0x0008083d) call_video_g2

0x0001,

0xf269,	// (0x0008c86d) call_video_g_ParamLimits

0xf269,	// (0x0008c86d) call_video_g

0x3289,	// (0x0008088d) call_video_uplink_pane_cp1_ParamLimits

0x3289,	// (0x0008088d) call_video_uplink_pane_cp1

0xab6b,	// (0x0008816f) call_video_uplink_pane_cp2

0x3357,	// (0x0008095b) video_down_crop_pane_ParamLimits

0x3357,	// (0x0008095b) video_down_crop_pane

0x3449,	// (0x00080a4d) video_down_pane_ParamLimits

0x3449,	// (0x00080a4d) video_down_pane

0xab73,	// (0x00088177) video_down_subqcif_pane_ParamLimits

0xab73,	// (0x00088177) video_down_subqcif_pane

0xab8d,	// (0x00088191) video_down_subqcif_pane_cp_ParamLimits

0xab8d,	// (0x00088191) video_down_subqcif_pane_cp

0xabb5,	// (0x000881b9) im_reading_pane_ParamLimits

0xabb5,	// (0x000881b9) im_reading_pane

0x3566,	// (0x00080b6a) im_writing_pane_ParamLimits

0x3566,	// (0x00080b6a) im_writing_pane

0x3584,	// (0x00080b88) im_reading_pane_t1

0xabcf,	// (0x000881d3) list_im_pane

0xabe0,	// (0x000881e4) scroll_pane_cp07

0x35c6,	// (0x00080bca) im_writing_pane_t1_ParamLimits

0x35c6,	// (0x00080bca) im_writing_pane_t1

0xabf9,	// (0x000881fd) im_writing_pane_t2_ParamLimits

0xabf9,	// (0x000881fd) im_writing_pane_t2

0x0001,

0xf273,	// (0x0008c877) im_writing_pane_t_ParamLimits

0xf273,	// (0x0008c877) im_writing_pane_t

0xa5c6,	// (0x00087bca) input_focus_pane_cp04

0xa5c6,	// (0x00087bca) input_focus_pane_cp05

0x35d8,	// (0x00080bdc) list_im_single_pane_ParamLimits

0x35d8,	// (0x00080bdc) list_im_single_pane

0x35f1,	// (0x00080bf5) list_single_im_pane_t1

0x530f,	// (0x00082913) blid_accuracy_pane

0x5317,	// (0x0008291b) blid_compass_pane

0x5321,	// (0x00082925) main_location_t1

0x532f,	// (0x00082933) main_location_t2

0x533d,	// (0x00082941) main_location_t3

0x0002,

0xf5da,	// (0x0008cbde) main_location_t

0xa5c6,	// (0x00087bca) aid_levels_location

0xa969,	// (0x00087f6d) blid_accuracy_pane_g1

0xa969,	// (0x00087f6d) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0008c8d9) blid_accuracy_pane_g

0xac41,	// (0x00088245) wml_content_pane

0xac7f,	// (0x00088283) wml_button_pane_ParamLimits

0xac7f,	// (0x00088283) wml_button_pane

0x3600,	// (0x00080c04) wml_list_single_large_pane_ParamLimits

0x3600,	// (0x00080c04) wml_list_single_large_pane

0x3622,	// (0x00080c26) wml_list_single_medium_pane_ParamLimits

0x3622,	// (0x00080c26) wml_list_single_medium_pane

0x3645,	// (0x00080c49) wml_list_single_small_pane_ParamLimits

0x3645,	// (0x00080c49) wml_list_single_small_pane

0xac93,	// (0x00088297) wml_selection_box_pane_ParamLimits

0xac93,	// (0x00088297) wml_selection_box_pane

0xaca6,	// (0x000882aa) wml_list_single_pane_t1

0xacb5,	// (0x000882b9) wml_list_single_medium_pane_t1

0xacc4,	// (0x000882c8) wml_list_single_large_pane_t1

0xacd3,	// (0x000882d7) input_focus_pane_cp02_ParamLimits

0xacd3,	// (0x000882d7) input_focus_pane_cp02

0xace6,	// (0x000882ea) wml_selection_box_pane_g1

0xacef,	// (0x000882f3) wml_selection_box_pane_t1_ParamLimits

0xacef,	// (0x000882f3) wml_selection_box_pane_t1

0xa821,	// (0x00087e25) bg_wml_button_pane_ParamLimits

0xa821,	// (0x00087e25) bg_wml_button_pane

0xad07,	// (0x0008830b) wml_button_pane_g1

0xad0f,	// (0x00088313) wml_button_pane_t1

0xad07,	// (0x0008830b) wml_button_bg_pane_g1

0xad1f,	// (0x00088323) wml_button_bg_pane_g2

0xad27,	// (0x0008832b) wml_button_bg_pane_g3

0xad2f,	// (0x00088333) wml_button_bg_pane_g4

0xad37,	// (0x0008833b) wml_button_bg_pane_g5

0xad3f,	// (0x00088343) wml_button_bg_pane_g6

0xad47,	// (0x0008834b) wml_button_bg_pane_g7

0xad4f,	// (0x00088353) wml_button_bg_pane_g8

0xad57,	// (0x0008835b) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0008c87c) wml_button_bg_pane_g

0x366d,	// (0x00080c71) bg_list_pane_cp02

0xad5f,	// (0x00088363) mce_header_pane_ParamLimits

0xad5f,	// (0x00088363) mce_header_pane

0xad75,	// (0x00088379) mce_icon_pane

0xad75,	// (0x00088379) mce_image_pane

0xad7e,	// (0x00088382) mce_text_pane_ParamLimits

0xad7e,	// (0x00088382) mce_text_pane

0x3677,	// (0x00080c7b) scroll_pane_cp03

0xac77,	// (0x0008827b) scroll_pane_cp04

0xad91,	// (0x00088395) scroll_pane_cp05_ParamLimits

0xad91,	// (0x00088395) scroll_pane_cp05

0x3681,	// (0x00080c85) mce_header_field_pane_ParamLimits

0x3681,	// (0x00080c85) mce_header_field_pane

0x36a3,	// (0x00080ca7) mce_header_field_pane_2_ParamLimits

0x36a3,	// (0x00080ca7) mce_header_field_pane_2

0x36b9,	// (0x00080cbd) mce_header_field_pane_3

0x36c1,	// (0x00080cc5) list_single_mce_message_pane_ParamLimits

0x36c1,	// (0x00080cc5) list_single_mce_message_pane

0x36e0,	// (0x00080ce4) list_single_mce_smart_pane_ParamLimits

0x36e0,	// (0x00080ce4) list_single_mce_smart_pane

0xad9d,	// (0x000883a1) input_focus_pane_cp03

0xada6,	// (0x000883aa) list_header_data_pane

0x370a,	// (0x00080d0e) mce_header_field_pane_t1

0x371a,	// (0x00080d1e) list_single_mce_header_pane_ParamLimits

0x371a,	// (0x00080d1e) list_single_mce_header_pane

0xadae,	// (0x000883b2) list_single_mce_header_pane_t1

0xadbd,	// (0x000883c1) list_single_mce_message_pane_g1

0xadc5,	// (0x000883c9) list_single_mce_message_pane_t1

0x375e,	// (0x00080d62) bg_cale_heading_pane_cp01_ParamLimits

0x375e,	// (0x00080d62) bg_cale_heading_pane_cp01

0xadd3,	// (0x000883d7) bg_cale_pane_cp02_ParamLimits

0xadd3,	// (0x000883d7) bg_cale_pane_cp02

0x37a5,	// (0x00080da9) cale_month_corner_pane

0x37c4,	// (0x00080dc8) cale_month_day_heading_pane_ParamLimits

0x37c4,	// (0x00080dc8) cale_month_day_heading_pane

0x381b,	// (0x00080e1f) cale_month_pane_g1_ParamLimits

0x381b,	// (0x00080e1f) cale_month_pane_g1

0x3857,	// (0x00080e5b) cale_month_pane_g2_ParamLimits

0x3857,	// (0x00080e5b) cale_month_pane_g2

0x388f,	// (0x00080e93) cale_month_pane_g3_ParamLimits

0x388f,	// (0x00080e93) cale_month_pane_g3

0x38e3,	// (0x00080ee7) cale_month_pane_g4_ParamLimits

0x38e3,	// (0x00080ee7) cale_month_pane_g4

0x3937,	// (0x00080f3b) cale_month_pane_g5_ParamLimits

0x3937,	// (0x00080f3b) cale_month_pane_g5

0x398b,	// (0x00080f8f) cale_month_pane_g6_ParamLimits

0x398b,	// (0x00080f8f) cale_month_pane_g6

0x39ef,	// (0x00080ff3) cale_month_pane_g7_ParamLimits

0x39ef,	// (0x00080ff3) cale_month_pane_g7

0x3a53,	// (0x00081057) cale_month_pane_g8_ParamLimits

0x3a53,	// (0x00081057) cale_month_pane_g8

0x3ab7,	// (0x000810bb) cale_month_pane_g9_ParamLimits

0x3ab7,	// (0x000810bb) cale_month_pane_g9

0x3b0f,	// (0x00081113) cale_month_pane_g10_ParamLimits

0x3b0f,	// (0x00081113) cale_month_pane_g10

0x3b5d,	// (0x00081161) cale_month_pane_g11_ParamLimits

0x3b5d,	// (0x00081161) cale_month_pane_g11

0x3ba9,	// (0x000811ad) cale_month_pane_g12_ParamLimits

0x3ba9,	// (0x000811ad) cale_month_pane_g12

0x3bf9,	// (0x000811fd) cale_month_pane_g13_ParamLimits

0x3bf9,	// (0x000811fd) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0008c88f) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0008c88f) cale_month_pane_g

0x3c49,	// (0x0008124d) cale_month_week_pane

0x3c69,	// (0x0008126d) grid_cale_month_pane_ParamLimits

0x3c69,	// (0x0008126d) grid_cale_month_pane

0x3cb7,	// (0x000812bb) cale_month_day_heading_pane_t1

0x3d39,	// (0x0008133d) cale_month_day_heading_pane_t2

0x3dc6,	// (0x000813ca) cale_month_day_heading_pane_t3

0x3e53,	// (0x00081457) cale_month_day_heading_pane_t4

0x3ee0,	// (0x000814e4) cale_month_day_heading_pane_t5

0x3f75,	// (0x00081579) cale_month_day_heading_pane_t6

0x4012,	// (0x00081616) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0008c8aa) cale_month_day_heading_pane_t

0xaa6f,	// (0x00088073) bg_cale_side_pane_cp01

0x40af,	// (0x000816b3) cale_month_week_pane_t1

0x40c8,	// (0x000816cc) cale_month_week_pane_t2

0x40e1,	// (0x000816e5) cale_month_week_pane_t3

0x40fa,	// (0x000816fe) cale_month_week_pane_t4

0x4113,	// (0x00081717) cale_month_week_pane_t5

0x412e,	// (0x00081732) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0008c8b9) cale_month_week_pane_t

0x414f,	// (0x00081753) cell_cale_month_pane_ParamLimits

0x414f,	// (0x00081753) cell_cale_month_pane

0x4271,	// (0x00081875) cell_cale_month_pane_g1

0x427d,	// (0x00081881) cell_cale_month_pane_t1_ParamLimits

0x427d,	// (0x00081881) cell_cale_month_pane_t1

0xaa7d,	// (0x00088081) grid_highlight_pane_cp08

0xa969,	// (0x00087f6d) main_smil_g1

0x429d,	// (0x000818a1) smil_status_pane

0xae12,	// (0x00088416) smil_text_pane

0xc652,	// (0x00089c56) bg_popup_call3_rect_pane_g8

0xc65a,	// (0x00089c5e) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0008cb72) bg_popup_call3_rect_pane_g

0xc8e8,	// (0x00089eec) smil_status_volume_pane_g1

0x42b0,	// (0x000818b4) smil_status_pane_t1

0x5703,	// (0x00082d07) volume_smil_pane

0xae1c,	// (0x00088420) list_smil_text_pane

0x42c7,	// (0x000818cb) scroll_pane_cp011

0x42d2,	// (0x000818d6) smil_text_list_pane_t1_ParamLimits

0x42d2,	// (0x000818d6) smil_text_list_pane_t1

0x4324,	// (0x00081928) aid_volume_smil_ParamLimits

0x4324,	// (0x00081928) aid_volume_smil

0xa969,	// (0x00087f6d) smil_volume_pane_g1

0xa969,	// (0x00087f6d) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0008c8d9) smil_volume_pane_g

0x2682,	// (0x0007fc86) listscroll_cale_day_pane

0xae26,	// (0x0008842a) bg_cale_pane

0xae3e,	// (0x00088442) list_cale_pane

0xae61,	// (0x00088465) scroll_pane_cp09

0xae72,	// (0x00088476) cale_bg_pane_g1

0xae7a,	// (0x0008847e) cale_bg_pane_g2

0xae82,	// (0x00088486) cale_bg_pane_g3

0xae8a,	// (0x0008848e) cale_bg_pane_g4

0xae92,	// (0x00088496) cale_bg_pane_g5

0xae9a,	// (0x0008849e) cale_bg_pane_g6

0xaea2,	// (0x000884a6) cale_bg_pane_g7

0xaeaa,	// (0x000884ae) cale_bg_pane_g8

0xaeb2,	// (0x000884b6) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0008c8de) cale_bg_pane_g

0x4346,	// (0x0008194a) list_cale_time_pane_ParamLimits

0x4346,	// (0x0008194a) list_cale_time_pane

0xaec2,	// (0x000884c6) list_cale_time_pane_g1_ParamLimits

0xaec2,	// (0x000884c6) list_cale_time_pane_g1

0xaece,	// (0x000884d2) list_cale_time_pane_g2_ParamLimits

0xaece,	// (0x000884d2) list_cale_time_pane_g2

0x435a,	// (0x0008195e) list_cale_time_pane_g3_ParamLimits

0x435a,	// (0x0008195e) list_cale_time_pane_g3

0x4368,	// (0x0008196c) list_cale_time_pane_g4_ParamLimits

0x4368,	// (0x0008196c) list_cale_time_pane_g4

0x4376,	// (0x0008197a) list_cale_time_pane_g5_ParamLimits

0x4376,	// (0x0008197a) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0008c8f1) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0008c8f1) list_cale_time_pane_g

0xaee8,	// (0x000884ec) list_cale_time_pane_t1_ParamLimits

0xaee8,	// (0x000884ec) list_cale_time_pane_t1

0xaf10,	// (0x00088514) list_cale_time_pane_t2_ParamLimits

0xaf10,	// (0x00088514) list_cale_time_pane_t2

0x466e,	// (0x00081c72) aid_blid_cardinal_pane

0x46b0,	// (0x00081cb4) compass_pane_t4

0xaf38,	// (0x0008853c) list_cale_time_pane_t4_ParamLimits

0xaf38,	// (0x0008853c) list_cale_time_pane_t4

0x46be,	// (0x00081cc2) compass_pane_t5

0x46ce,	// (0x00081cd2) compass_pane_t6

0x46dc,	// (0x00081ce0) compass_pane_t7

0xb352,	// (0x00088956) navi_pane_cc_t1

0xb4ad,	// (0x00088ab1) aid_phob_thumbnail_center_pane

0x4e0b,	// (0x0008240f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0008c8fe) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0008c8fe) list_cale_time_pane_t

0xa21d,	// (0x00087821) bg_popup_window_pane_cp02_ParamLimits

0xa21d,	// (0x00087821) bg_popup_window_pane_cp02

0xaf60,	// (0x00088564) heading_pane_cp01_ParamLimits

0xaf60,	// (0x00088564) heading_pane_cp01

0xaf6c,	// (0x00088570) loc_req_pane_ParamLimits

0xaf6c,	// (0x00088570) loc_req_pane

0xaf7c,	// (0x00088580) loc_type_pane_ParamLimits

0xaf7c,	// (0x00088580) loc_type_pane

0xaf8e,	// (0x00088592) loc_type_pane_t1_ParamLimits

0xaf8e,	// (0x00088592) loc_type_pane_t1

0xafa0,	// (0x000885a4) loc_type_pane_t2_ParamLimits

0xafa0,	// (0x000885a4) loc_type_pane_t2

0xafb2,	// (0x000885b6) loc_type_pane_t3_ParamLimits

0xafb2,	// (0x000885b6) loc_type_pane_t3

0x0002,

0xf301,	// (0x0008c905) loc_type_pane_t_ParamLimits

0xf301,	// (0x0008c905) loc_type_pane_t

0xafc4,	// (0x000885c8) list_loc_req_pane

0xafce,	// (0x000885d2) scroll_pane_cp012

0x4384,	// (0x00081988) list_single_loc_request_popup_menu_pane_ParamLimits

0x4384,	// (0x00081988) list_single_loc_request_popup_menu_pane

0xafd9,	// (0x000885dd) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafd9,	// (0x000885dd) list_single_loc_request_popup_menu_pane_g1

0xafe5,	// (0x000885e9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafe5,	// (0x000885e9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0008c90c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0008c90c) list_single_loc_request_popup_menu_pane_g

0xaff1,	// (0x000885f5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaff1,	// (0x000885f5) list_single_loc_request_popup_menu_pane_t1

0x4396,	// (0x0008199a) bg_popup_window_pane_cp03_ParamLimits

0x4396,	// (0x0008199a) bg_popup_window_pane_cp03

0x43a4,	// (0x000819a8) heading_loc_req_pane_ParamLimits

0x43a4,	// (0x000819a8) heading_loc_req_pane

0x43b0,	// (0x000819b4) popup_dyc_status_message_window_g1_ParamLimits

0x43b0,	// (0x000819b4) popup_dyc_status_message_window_g1

0x43bc,	// (0x000819c0) popup_dyc_status_message_window_t1_ParamLimits

0x43bc,	// (0x000819c0) popup_dyc_status_message_window_t1

0x43ce,	// (0x000819d2) popup_dyc_status_message_window_t2_ParamLimits

0x43ce,	// (0x000819d2) popup_dyc_status_message_window_t2

0x43e0,	// (0x000819e4) popup_dyc_status_message_window_t3_ParamLimits

0x43e0,	// (0x000819e4) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0008c911) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0008c911) popup_dyc_status_message_window_t

0xa5c6,	// (0x00087bca) bg_heading_pane_cp01

0xb007,	// (0x0008860b) heading_loc_req_pane_g1

0xb00f,	// (0x00088613) heading_loc_req_pane_g2

0xb017,	// (0x0008861b) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0008c918) heading_loc_req_pane_g

0xb01f,	// (0x00088623) heading_loc_req_pane_t1

0xb02f,	// (0x00088633) bg_popup_sub_pane_cp01_ParamLimits

0xb02f,	// (0x00088633) bg_popup_sub_pane_cp01

0xb03d,	// (0x00088641) popup_cale_events_window_g1_ParamLimits

0xb03d,	// (0x00088641) popup_cale_events_window_g1

0xb069,	// (0x0008866d) popup_cale_events_window_g2_ParamLimits

0xb069,	// (0x0008866d) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0008c94c) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0008c94c) popup_cale_events_window_g

0xb089,	// (0x0008868d) popup_cale_events_window_t1_ParamLimits

0xb089,	// (0x0008868d) popup_cale_events_window_t1

0xb09b,	// (0x0008869f) popup_cale_events_window_t2_ParamLimits

0xb09b,	// (0x0008869f) popup_cale_events_window_t2

0xb0d9,	// (0x000886dd) popup_cale_events_window_t3_ParamLimits

0xb0d9,	// (0x000886dd) popup_cale_events_window_t3

0xb113,	// (0x00088717) popup_cale_events_window_t4_ParamLimits

0xb113,	// (0x00088717) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0008c951) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0008c951) popup_cale_events_window_t

0x440a,	// (0x00081a0e) call_type_pane

0xb424,	// (0x00088a28) popup_call_status_window_g1

0x4416,	// (0x00081a1a) popup_call_status_window_g2

0x4422,	// (0x00081a26) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0008c95a) popup_call_status_window_g

0xb149,	// (0x0008874d) call_type_pane_g1

0xb152,	// (0x00088756) call_type_pane_g2

0x0001,

0xf35d,	// (0x0008c961) call_type_pane_g

0xa5c6,	// (0x00087bca) bg_popup_sub_pane_cp02

0xb15b,	// (0x0008875f) listscroll_popup_wml_pane

0xb163,	// (0x00088767) list_wml_pane

0xb16d,	// (0x00088771) scroll_pane_cp013

0xb178,	// (0x0008877c) list_single_graphic_popup_wml_pane_ParamLimits

0xb178,	// (0x0008877c) list_single_graphic_popup_wml_pane

0xa969,	// (0x00087f6d) list_single_graphic_popup_wml_pane_g1

0xb18c,	// (0x00088790) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0008c966) list_single_graphic_popup_wml_pane_g

0xb194,	// (0x00088798) list_single_graphic_popup_wml_pane_t1

0xb1aa,	// (0x000887ae) aid_call_pane

0xa819,	// (0x00087e1d) popup_clock_analogue_window_g1

0xa819,	// (0x00087e1d) popup_clock_analogue_window_g2

0x442e,	// (0x00081a32) popup_clock_analogue_window_g3

0x442e,	// (0x00081a32) popup_clock_analogue_window_g4

0xa969,	// (0x00087f6d) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0008c96b) popup_clock_analogue_window_g

0x4436,	// (0x00081a3a) popup_clock_analogue_window_t1

0x4444,	// (0x00081a48) clock_digital_number_pane_ParamLimits

0x4444,	// (0x00081a48) clock_digital_number_pane

0x4450,	// (0x00081a54) clock_digital_number_pane_cp02_ParamLimits

0x4450,	// (0x00081a54) clock_digital_number_pane_cp02

0x445c,	// (0x00081a60) clock_digital_number_pane_cp03_ParamLimits

0x445c,	// (0x00081a60) clock_digital_number_pane_cp03

0x4468,	// (0x00081a6c) clock_digital_number_pane_cp04_ParamLimits

0x4468,	// (0x00081a6c) clock_digital_number_pane_cp04

0x4474,	// (0x00081a78) clock_digital_separator_pane_ParamLimits

0x4474,	// (0x00081a78) clock_digital_separator_pane

0x4480,	// (0x00081a84) popup_clock_digital_window_t1

0xa969,	// (0x00087f6d) clock_digital_number_pane_g1

0xa969,	// (0x00087f6d) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0008c8d9) clock_digital_number_pane_g

0xa969,	// (0x00087f6d) clock_digital_separator_pane_g1

0xa969,	// (0x00087f6d) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0008c8d9) clock_digital_separator_pane_g

0xa5c6,	// (0x00087bca) bg_popup_window_pane_cp04

0xb1b2,	// (0x000887b6) heading_pane_cp03

0xb1ba,	// (0x000887be) listscroll_popup_gms_pane

0xb1c2,	// (0x000887c6) grid_large_graphic_popup_pane

0xb1cc,	// (0x000887d0) listscroll_popup_gms_pane_g1

0xb1d4,	// (0x000887d8) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0008c976) listscroll_popup_gms_pane_g

0xac77,	// (0x0008827b) scroll_pane_cp014

0x449d,	// (0x00081aa1) cell_large_graphic_popup_pane_ParamLimits

0x449d,	// (0x00081aa1) cell_large_graphic_popup_pane

0x44b7,	// (0x00081abb) cell_large_graphic_popup_pane_g1_ParamLimits

0x44b7,	// (0x00081abb) cell_large_graphic_popup_pane_g1

0xb1dc,	// (0x000887e0) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1dc,	// (0x000887e0) cell_large_graphic_popup_pane_g2

0xb1e8,	// (0x000887ec) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1e8,	// (0x000887ec) cell_large_graphic_popup_pane_g3

0xb1f5,	// (0x000887f9) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1f5,	// (0x000887f9) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0008c97b) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0008c97b) cell_large_graphic_popup_pane_g

0xb205,	// (0x00088809) grid_highlight_pane_cp010

0xa969,	// (0x00087f6d) bg_popup_call_pane_g1

0xb20f,	// (0x00088813) list_single_graphic_popup_conf_pane_ParamLimits

0xb20f,	// (0x00088813) list_single_graphic_popup_conf_pane

0xb221,	// (0x00088825) list_highlight_pane_cp01

0xb22a,	// (0x0008882e) list_single_graphic_popup_conf_pane_g1

0xb232,	// (0x00088836) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0008c984) list_single_graphic_popup_conf_pane_g

0xb23a,	// (0x0008883e) list_single_graphic_popup_conf_pane_t1

0xb248,	// (0x0008884c) linegrid_cams_pane_g1

0x44c3,	// (0x00081ac7) linegrid_cams_pane_g2

0xaab0,	// (0x000880b4) linegrid_cams_pane_g3

0xb251,	// (0x00088855) linegrid_cams_pane_g4

0x44cc,	// (0x00081ad0) linegrid_cams_pane_g5

0x44d5,	// (0x00081ad9) linegrid_cams_pane_g6

0xaab9,	// (0x000880bd) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0008c989) linegrid_cams_pane_g

0xb25a,	// (0x0008885e) popup_clock_analogue_window

0xb25a,	// (0x0008885e) popup_clock_digital_window

0xa5c6,	// (0x00087bca) popup_phob_thumbnail_window

0xa969,	// (0x00087f6d) call_video_uplink_pane_g1

0xb263,	// (0x00088867) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0008c998) call_video_uplink_pane_g

0xb26b,	// (0x0008886f) video_uplink_pane

0xb273,	// (0x00088877) mce_image_pane_g1

0x44e0,	// (0x00081ae4) mce_image_pane_g2

0x44ea,	// (0x00081aee) mce_image_pane_g3

0x44f4,	// (0x00081af8) mce_image_pane_g4

0x44fc,	// (0x00081b00) mce_image_pane_g5

0x0004,

0xf399,	// (0x0008c99d) mce_image_pane_g

0xb27d,	// (0x00088881) control_top_pane_stacon_cp01_ParamLimits

0xb27d,	// (0x00088881) control_top_pane_stacon_cp01

0xb291,	// (0x00088895) uni_indicator_pane_stacon_cp01_ParamLimits

0xb291,	// (0x00088895) uni_indicator_pane_stacon_cp01

0xb2a2,	// (0x000888a6) bg_popup_sub_pane_cp03

0x4504,	// (0x00081b08) chi_dic_find_pane

0x450c,	// (0x00081b10) listscroll_chi_dic_pane

0x4515,	// (0x00081b19) main_pane_chidic_g1

0x4528,	// (0x00081b2c) chi_dic_find_pane_t1

0xb2ac,	// (0x000888b0) find_chidic_pane

0xb2b5,	// (0x000888b9) chi_dic_list_pane_ParamLimits

0xb2b5,	// (0x000888b9) chi_dic_list_pane

0xb2c6,	// (0x000888ca) scroll_pane_cp020

0x4536,	// (0x00081b3a) find_chidic_pane_t1

0xa5c6,	// (0x00087bca) input_focus_pane_cp06

0x4545,	// (0x00081b49) list_chi_dic_pane_ParamLimits

0x4545,	// (0x00081b49) list_chi_dic_pane

0x455a,	// (0x00081b5e) list_chi_dic_pane_t1_ParamLimits

0x455a,	// (0x00081b5e) list_chi_dic_pane_t1

0xa5c6,	// (0x00087bca) list_highlight_pane_cp020

0xb2ce,	// (0x000888d2) bg_cale_heading_pane_g1

0x456d,	// (0x00081b71) bg_cale_heading_pane_g2

0x4575,	// (0x00081b79) bg_cale_heading_pane_g3

0x457d,	// (0x00081b81) bg_cale_heading_pane_g4

0x4587,	// (0x00081b8b) bg_cale_heading_pane_g5

0x4591,	// (0x00081b95) bg_cale_heading_pane_g6

0x4599,	// (0x00081b9d) bg_cale_heading_pane_g7

0x45a1,	// (0x00081ba5) bg_cale_heading_pane_g8

0x45ab,	// (0x00081baf) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0008c9a8) bg_cale_heading_pane_g

0xb2ce,	// (0x000888d2) bg_cale_side_pane_g1

0x45b5,	// (0x00081bb9) bg_cale_side_pane_g2

0x45bf,	// (0x00081bc3) bg_cale_side_pane_g3

0x45c9,	// (0x00081bcd) bg_cale_side_pane_g4

0x45d3,	// (0x00081bd7) bg_cale_side_pane_g5

0x45dd,	// (0x00081be1) bg_cale_side_pane_g6

0x45e7,	// (0x00081beb) bg_cale_side_pane_g7

0x45f1,	// (0x00081bf5) bg_cale_side_pane_g8

0x45f9,	// (0x00081bfd) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0008c9bb) bg_cale_side_pane_g

0x4601,	// (0x00081c05) popup_call_status_window_ParamLimits

0x4601,	// (0x00081c05) popup_call_status_window

0xb2d6,	// (0x000888da) stacon_top_pane

0xb2de,	// (0x000888e2) status_pane_ParamLimits

0xb2de,	// (0x000888e2) status_pane

0xb2f3,	// (0x000888f7) status_small_pane

0xb2fb,	// (0x000888ff) control_pane

0xa5c6,	// (0x00087bca) stacon_bottom_pane

0xb303,	// (0x00088907) list_single_mce_smart_pane_t1_ParamLimits

0xb303,	// (0x00088907) list_single_mce_smart_pane_t1

0xb316,	// (0x0008891a) list_single_mce_smart_pane_t2_ParamLimits

0xb316,	// (0x0008891a) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0008c9ce) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0008c9ce) list_single_mce_smart_pane_t

0x460d,	// (0x00081c11) compass_pane

0x4618,	// (0x00081c1c) main_location2_pane_t1

0x462e,	// (0x00081c32) main_location2_pane_t2

0x4644,	// (0x00081c48) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0008c9d3) main_location2_pane_t

0xb335,	// (0x00088939) compass_pane_g1_ParamLimits

0xb335,	// (0x00088939) compass_pane_g1

0x4692,	// (0x00081c96) compass_pane_t1

0x46a1,	// (0x00081ca5) compass_pane_t2

0x0005,

0xf3d8,	// (0x0008c9dc) compass_pane_t

0x46ec,	// (0x00081cf0) text_secondary_cp61

0xb349,	// (0x0008894d) navi_pane_cams_g5

0xb36c,	// (0x00088970) navi_pane_im_t1

0xb37a,	// (0x0008897e) navi_pane_mp_g1_ParamLimits

0xb37a,	// (0x0008897e) navi_pane_mp_g1

0xb38e,	// (0x00088992) navi_pane_mp_g2_ParamLimits

0xb38e,	// (0x00088992) navi_pane_mp_g2

0xb39a,	// (0x0008899e) navi_pane_mp_g3_ParamLimits

0xb39a,	// (0x0008899e) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0008c9f0) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0008c9f0) navi_pane_mp_g

0xb3a6,	// (0x000889aa) navi_pane_mp_t1

0xb3b4,	// (0x000889b8) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0008c9f7) navi_pane_mp_t

0xb3f0,	// (0x000889f4) navi_pane_vt_g1

0xb3a6,	// (0x000889aa) navi_pane_vt_t1

0xb3f8,	// (0x000889fc) navi_slider_pane

0xaaca,	// (0x000880ce) zooming_pane

0xb400,	// (0x00088a04) navi_slider_pane_g1

0x4821,	// (0x00081e25) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0008c9fe) navi_slider_pane_g

0xb432,	// (0x00088a36) aid_levels_zoom

0xb43a,	// (0x00088a3e) zooming_pane_g1

0xb442,	// (0x00088a46) zooming_pane_g2

0xb442,	// (0x00088a46) zooming_pane_g3

0x0002,

0xf409,	// (0x0008ca0d) zooming_pane_g

0xb44a,	// (0x00088a4e) level_10_zoom

0xb453,	// (0x00088a57) level_11_zoom

0xb45c,	// (0x00088a60) level_1_zoom

0xb465,	// (0x00088a69) level_2_zoom

0xb46e,	// (0x00088a72) level_3_zoom

0xb477,	// (0x00088a7b) level_4_zoom

0xb480,	// (0x00088a84) level_5_zoom

0xb489,	// (0x00088a8d) level_6_zoom

0xb492,	// (0x00088a96) level_7_zoom

0xb49b,	// (0x00088a9f) level_8_zoom

0xb4a4,	// (0x00088aa8) level_9_zoom

0xb4b5,	// (0x00088ab9) popup_phob_thumbnail_window_g1

0xb4bd,	// (0x00088ac1) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0008ca14) popup_phob_thumbnail_window_g

0xc7b8,	// (0x00089dbc) level_1_location

0xc7c0,	// (0x00089dc4) level_2_location

0xc7c8,	// (0x00089dcc) level_3_location

0xc7d0,	// (0x00089dd4) level_4_location

0xaaca,	// (0x000880ce) level_5_location

0x4833,	// (0x00081e37) mce_icon_pane_g1

0x483b,	// (0x00081e3f) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0008ca19) mce_icon_pane_g

0x4843,	// (0x00081e47) main_mup_pane_g1_ParamLimits

0x4843,	// (0x00081e47) main_mup_pane_g1

0x485b,	// (0x00081e5f) main_mup_pane_g2_ParamLimits

0x485b,	// (0x00081e5f) main_mup_pane_g2

0x4877,	// (0x00081e7b) main_mup_pane_g3_ParamLimits

0x4877,	// (0x00081e7b) main_mup_pane_g3

0x4893,	// (0x00081e97) main_mup_pane_g4_ParamLimits

0x4893,	// (0x00081e97) main_mup_pane_g4

0x48af,	// (0x00081eb3) main_mup_pane_g5_ParamLimits

0x48af,	// (0x00081eb3) main_mup_pane_g5

0x48d0,	// (0x00081ed4) main_mup_pane_g6_ParamLimits

0x48d0,	// (0x00081ed4) main_mup_pane_g6

0x48f0,	// (0x00081ef4) main_mup_pane_g7_ParamLimits

0x48f0,	// (0x00081ef4) main_mup_pane_g7

0x4914,	// (0x00081f18) main_mup_pane_g8_ParamLimits

0x4914,	// (0x00081f18) main_mup_pane_g8

0x4938,	// (0x00081f3c) main_mup_pane_g9_ParamLimits

0x4938,	// (0x00081f3c) main_mup_pane_g9

0x495b,	// (0x00081f5f) main_mup_pane_g10_ParamLimits

0x495b,	// (0x00081f5f) main_mup_pane_g10

0x497e,	// (0x00081f82) main_mup_pane_g11_ParamLimits

0x497e,	// (0x00081f82) main_mup_pane_g11

0x499e,	// (0x00081fa2) main_mup_pane_g12_ParamLimits

0x499e,	// (0x00081fa2) main_mup_pane_g12

0x49ac,	// (0x00081fb0) main_mup_pane_g13_ParamLimits

0x49ac,	// (0x00081fb0) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0008ca1e) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0008ca1e) main_mup_pane_g

0x49c2,	// (0x00081fc6) main_mup_pane_t1_ParamLimits

0x49c2,	// (0x00081fc6) main_mup_pane_t1

0x49e1,	// (0x00081fe5) main_mup_pane_t2_ParamLimits

0x49e1,	// (0x00081fe5) main_mup_pane_t2

0x49fb,	// (0x00081fff) main_mup_pane_t3_ParamLimits

0x49fb,	// (0x00081fff) main_mup_pane_t3

0x4a15,	// (0x00082019) main_mup_pane_t4_ParamLimits

0x4a15,	// (0x00082019) main_mup_pane_t4

0x4a27,	// (0x0008202b) main_mup_pane_t5_ParamLimits

0x4a27,	// (0x0008202b) main_mup_pane_t5

0x4a39,	// (0x0008203d) main_mup_pane_t6_ParamLimits

0x4a39,	// (0x0008203d) main_mup_pane_t6

0x0005,

0xf435,	// (0x0008ca39) main_mup_pane_t_ParamLimits

0xf435,	// (0x0008ca39) main_mup_pane_t

0x4a4f,	// (0x00082053) mup_progress_pane_ParamLimits

0x4a4f,	// (0x00082053) mup_progress_pane

0x4a5b,	// (0x0008205f) mup_visualizer_pane_ParamLimits

0x4a5b,	// (0x0008205f) mup_visualizer_pane

0x4a99,	// (0x0008209d) mup_volume_pane_ParamLimits

0x4a99,	// (0x0008209d) mup_volume_pane

0xb424,	// (0x00088a28) mup_visualizer_pane_g1_ParamLimits

0xb424,	// (0x00088a28) mup_visualizer_pane_g1

0xb424,	// (0x00088a28) mup_visualizer_pane_g2_ParamLimits

0xb424,	// (0x00088a28) mup_visualizer_pane_g2

0xb335,	// (0x00088939) mup_visualizer_pane_g3_ParamLimits

0xb335,	// (0x00088939) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0008ca46) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0008ca46) mup_visualizer_pane_g

0xa969,	// (0x00087f6d) mup_volume_pane_g1

0xb4cd,	// (0x00088ad1) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0008ca4d) mup_volume_pane_g

0xa969,	// (0x00087f6d) mup_progress_pane_g1

0xb4d6,	// (0x00088ada) mup_progress_pane_g2

0xb4df,	// (0x00088ae3) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0008ca52) mup_progress_pane_g

0xa5c6,	// (0x00087bca) bg_popup_window_pane_cp05

0xb4e8,	// (0x00088aec) heading_pane_cp02_ParamLimits

0xb4e8,	// (0x00088aec) heading_pane_cp02

0xb504,	// (0x00088b08) list_popup_blid_pane

0xb50c,	// (0x00088b10) list_blid_sat_info_pane_ParamLimits

0xb50c,	// (0x00088b10) list_blid_sat_info_pane

0xb51f,	// (0x00088b23) list_blid_sat_info_pane_g1

0xb527,	// (0x00088b2b) list_blid_sat_info_pane_t1

0x4bb8,	// (0x000821bc) mup_equalizer_pane_ParamLimits

0x4bb8,	// (0x000821bc) mup_equalizer_pane

0x4bd9,	// (0x000821dd) mup_equalizer_pane_cp1_ParamLimits

0x4bd9,	// (0x000821dd) mup_equalizer_pane_cp1

0x4bfa,	// (0x000821fe) mup_equalizer_pane_cp2_ParamLimits

0x4bfa,	// (0x000821fe) mup_equalizer_pane_cp2

0x4c1b,	// (0x0008221f) mup_equalizer_pane_cp3_ParamLimits

0x4c1b,	// (0x0008221f) mup_equalizer_pane_cp3

0x4c40,	// (0x00082244) mup_equalizer_pane_cp4_ParamLimits

0x4c40,	// (0x00082244) mup_equalizer_pane_cp4

0x4c65,	// (0x00082269) mup_equalizer_pane_cp5

0x4c7d,	// (0x00082281) mup_equalizer_pane_cp6

0x4c95,	// (0x00082299) mup_equalizer_pane_cp7

0xc6d2,	// (0x00089cd6) bg_popup_call_poc_act_pane_g9

0xc6da,	// (0x00089cde) bg_popup_call_poc_act_pane_g10

0xc6e2,	// (0x00089ce6) bg_popup_call_poc_act_pane_g11

0x000a,

0xa821,	// (0x00087e25) mup_scale_pane

0xa969,	// (0x00087f6d) mup_scale_pane_g1

0xb535,	// (0x00088b39) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0008ca6e) mup_scale_pane_g

0xb559,	// (0x00088b5d) msg_data_pane

0xb561,	// (0x00088b65) scroll_pane_cp017

0x0d51,	// (0x0007e355) bg_list_pane_cp04_ParamLimits

0x0d51,	// (0x0007e355) bg_list_pane_cp04

0xb569,	// (0x00088b6d) msg_data_pane_g1

0x4cbf,	// (0x000822c3) msg_data_pane_g2

0x4cc9,	// (0x000822cd) msg_data_pane_g3

0x4cd3,	// (0x000822d7) msg_data_pane_g4

0x4cdb,	// (0x000822df) msg_data_pane_g5

0x4ce3,	// (0x000822e7) msg_data_pane_g6

0x4ceb,	// (0x000822ef) msg_data_pane_g7

0x0006,

0xf479,	// (0x0008ca7d) msg_data_pane_g

0x0d79,	// (0x0007e37d) msg_text_pane_ParamLimits

0x0d79,	// (0x0007e37d) msg_text_pane

0x4cf3,	// (0x000822f7) qrid_highlight_pane_cp011_ParamLimits

0x4cf3,	// (0x000822f7) qrid_highlight_pane_cp011

0xa5c6,	// (0x00087bca) msg_body_pane

0xa5c6,	// (0x00087bca) msg_header_pane

0xb57a,	// (0x00088b7e) input_focus_pane_cp07

0x0dad,	// (0x0007e3b1) msg_header_pane_t1_ParamLimits

0x0dad,	// (0x0007e3b1) msg_header_pane_t1

0x0dbf,	// (0x0007e3c3) msg_header_pane_t2_ParamLimits

0x0dbf,	// (0x0007e3c3) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0008ca91) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0008ca91) msg_header_pane_t

0xb58f,	// (0x00088b93) msg_body_pane_g1

0x0dd1,	// (0x0007e3d5) msg_body_pane_t1_ParamLimits

0x0dd1,	// (0x0007e3d5) msg_body_pane_t1

0x0e02,	// (0x0007e406) msg_body_pane_t2_ParamLimits

0x0e02,	// (0x0007e406) msg_body_pane_t2

0x0e14,	// (0x0007e418) msg_body_pane_t3_ParamLimits

0x0e14,	// (0x0007e418) msg_body_pane_t3

0x0002,

0xf492,	// (0x0008ca96) msg_body_pane_t_ParamLimits

0xf492,	// (0x0008ca96) msg_body_pane_t

0x4d5b,	// (0x0008235f) main_viewer_pane_g1_ParamLimits

0x4d5b,	// (0x0008235f) main_viewer_pane_g1

0x4d67,	// (0x0008236b) main_viewer_pane_g2_ParamLimits

0x4d67,	// (0x0008236b) main_viewer_pane_g2

0x4d73,	// (0x00082377) main_viewer_pane_g3_ParamLimits

0x4d73,	// (0x00082377) main_viewer_pane_g3

0x4d84,	// (0x00082388) main_viewer_pane_g4_ParamLimits

0x4d84,	// (0x00082388) main_viewer_pane_g4

0x4d95,	// (0x00082399) main_viewer_pane_g5_ParamLimits

0x4d95,	// (0x00082399) main_viewer_pane_g5

0x4d95,	// (0x00082399) main_viewer_pane_g7_ParamLimits

0x4d95,	// (0x00082399) main_viewer_pane_g7

0x4da7,	// (0x000823ab) main_viewer_pane_g8_ParamLimits

0x4da7,	// (0x000823ab) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0008caa6) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0008caa6) main_viewer_pane_g

0xb597,	// (0x00088b9b) viewer_content_pane_ParamLimits

0xb597,	// (0x00088b9b) viewer_content_pane

0x4ddf,	// (0x000823e3) main_postcard_pane_g1_ParamLimits

0x4ddf,	// (0x000823e3) main_postcard_pane_g1

0x4ded,	// (0x000823f1) main_postcard_pane_g2_ParamLimits

0x4ded,	// (0x000823f1) main_postcard_pane_g2

0x4dfb,	// (0x000823ff) main_postcard_pane_g3_ParamLimits

0x4dfb,	// (0x000823ff) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0008cab7) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0008cab7) main_postcard_pane_g

0x4e0b,	// (0x0008240f) main_postcard_pane_g4

0xc8fb,	// (0x00089eff) smil_status_volume_pane_g2

0x4e37,	// (0x0008243b) postcard_pane_ParamLimits

0x4e37,	// (0x0008243b) postcard_pane

0xb424,	// (0x00088a28) postcard_pane_g1_ParamLimits

0xb424,	// (0x00088a28) postcard_pane_g1

0x4e71,	// (0x00082475) postcard_pane_g2_ParamLimits

0x4e71,	// (0x00082475) postcard_pane_g2

0x4e7d,	// (0x00082481) postcard_pane_g3_ParamLimits

0x4e7d,	// (0x00082481) postcard_pane_g3

0xb5a5,	// (0x00088ba9) postcard_pane_g4_ParamLimits

0xb5a5,	// (0x00088ba9) postcard_pane_g4

0x4e89,	// (0x0008248d) postcard_pane_g5_ParamLimits

0x4e89,	// (0x0008248d) postcard_pane_g5

0x4e95,	// (0x00082499) postcard_pane_g6_ParamLimits

0x4e95,	// (0x00082499) postcard_pane_g6

0xb5b3,	// (0x00088bb7) postcard_pane_g7_ParamLimits

0xb5b3,	// (0x00088bb7) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0008cac4) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0008cac4) postcard_pane_g

0x4ea3,	// (0x000824a7) main_mp2_pane_g1_ParamLimits

0x4ea3,	// (0x000824a7) main_mp2_pane_g1

0x4eb1,	// (0x000824b5) main_mp2_pane_g2_ParamLimits

0x4eb1,	// (0x000824b5) main_mp2_pane_g2

0x4ebd,	// (0x000824c1) main_mp2_pane_g3_ParamLimits

0x4ebd,	// (0x000824c1) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0008cad3) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0008cad3) main_mp2_pane_g

0x4ec9,	// (0x000824cd) main_mp2_pane_t1_ParamLimits

0x4ec9,	// (0x000824cd) main_mp2_pane_t1

0x4ee0,	// (0x000824e4) main_mp2_pane_t2_ParamLimits

0x4ee0,	// (0x000824e4) main_mp2_pane_t2

0x4ef4,	// (0x000824f8) main_mp2_pane_t3_ParamLimits

0x4ef4,	// (0x000824f8) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0008cada) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0008cada) main_mp2_pane_t

0xb5c1,	// (0x00088bc5) pec_content_pane_ParamLimits

0xb5c1,	// (0x00088bc5) pec_content_pane

0xac77,	// (0x0008827b) scroll_pane_cp015

0xb5d3,	// (0x00088bd7) pec_attribute_pane_ParamLimits

0xb5d3,	// (0x00088bd7) pec_attribute_pane

0x4f06,	// (0x0008250a) pec_content_pane_g1_ParamLimits

0x4f06,	// (0x0008250a) pec_content_pane_g1

0xb5e3,	// (0x00088be7) pec_content_pane_t1_ParamLimits

0xb5e3,	// (0x00088be7) pec_content_pane_t1

0xb5f5,	// (0x00088bf9) pec_content_pane_t2_ParamLimits

0xb5f5,	// (0x00088bf9) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0008cae1) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0008cae1) pec_content_pane_t

0x4f12,	// (0x00082516) list_single_graphic_pane_cp01_ParamLimits

0x4f12,	// (0x00082516) list_single_graphic_pane_cp01

0xa821,	// (0x00087e25) bg_popup_sub_pane_cp04

0xb607,	// (0x00088c0b) popup_mup_playback_window_g1

0xb613,	// (0x00088c17) popup_mup_playback_window_t1

0xb628,	// (0x00088c2c) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0008cae6) popup_mup_playback_window_t

0xb65f,	// (0x00088c63) main_image_pane_g1_ParamLimits

0xb65f,	// (0x00088c63) main_image_pane_g1

0xb6a2,	// (0x00088ca6) scroll_pane_cp018_ParamLimits

0xb6a2,	// (0x00088ca6) scroll_pane_cp018

0xb6ba,	// (0x00088cbe) scroll_pane_cp016_ParamLimits

0xb6ba,	// (0x00088cbe) scroll_pane_cp016

0x4fa0,	// (0x000825a4) smil2_image_pane_ParamLimits

0x4fa0,	// (0x000825a4) smil2_image_pane

0x4fd6,	// (0x000825da) smil2_root_pane_ParamLimits

0x4fd6,	// (0x000825da) smil2_root_pane

0x5002,	// (0x00082606) smil2_text_pane_ParamLimits

0x5002,	// (0x00082606) smil2_text_pane

0xa5c6,	// (0x00087bca) bg_list_pane_cp06

0xb6f6,	// (0x00088cfa) grid_radio_pane

0xa5c6,	// (0x00087bca) bg_popup_window_pane_cp06

0xb700,	// (0x00088d04) main_fmradio_pane_t1

0xb1b2,	// (0x000887b6) heading_pane_cp04

0xb70e,	// (0x00088d12) main_fmradio_pane_t2

0xc6ea,	// (0x00089cee) popup_cale_lunar_info_window_g1

0xb71c,	// (0x00088d20) main_fmradio_pane_t3

0xc6f2,	// (0x00089cf6) popup_cale_lunar_info_window_g2

0xb72c,	// (0x00088d30) main_fmradio_pane_t4

0x0001,

0xb73a,	// (0x00088d3e) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0008cbc1) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0008cafb) main_fmradio_pane_t

0xb748,	// (0x00088d4c) wait_bar_pane_cp03

0xb750,	// (0x00088d54) cell_fmradio_pane_ParamLimits

0xb750,	// (0x00088d54) cell_fmradio_pane

0xb5b3,	// (0x00088bb7) cell_fmradio_pane_g1_ParamLimits

0xb5b3,	// (0x00088bb7) cell_fmradio_pane_g1

0xa5c6,	// (0x00087bca) grid_highlight_pane_cp011

0xb765,	// (0x00088d69) poc_content_pane_ParamLimits

0xb765,	// (0x00088d69) poc_content_pane

0xb777,	// (0x00088d7b) scroll_pane_cp019

0x5042,	// (0x00082646) popup_call_poc_act_window_ParamLimits

0x5042,	// (0x00082646) popup_call_poc_act_window

0x504f,	// (0x00082653) popup_call_poc_inact_window_ParamLimits

0x504f,	// (0x00082653) popup_call_poc_inact_window

0xf594,	// (0x0008cb98) bg_popup_call_poc_act_pane_g

0xc662,	// (0x00089c66) bg_popup_call_poc_inact_pane_g1

0xc66a,	// (0x00089c6e) bg_popup_call_poc_inact_pane_g2

0xb77f,	// (0x00088d83) popup_call_poc_act_window_g2

0xc672,	// (0x00089c76) bg_popup_call_poc_inact_pane_g3

0xc67a,	// (0x00089c7e) bg_popup_call_poc_inact_pane_g4

0xc682,	// (0x00089c86) bg_popup_call_poc_inact_pane_g5

0xb787,	// (0x00088d8b) popup_call_poc_act_window_t1_ParamLimits

0xb787,	// (0x00088d8b) popup_call_poc_act_window_t1

0xb7af,	// (0x00088db3) popup_call_poc_act_window_t2_ParamLimits

0xb7af,	// (0x00088db3) popup_call_poc_act_window_t2

0xb7d7,	// (0x00088ddb) popup_call_poc_act_window_t3_ParamLimits

0xb7d7,	// (0x00088ddb) popup_call_poc_act_window_t3

0xb7ff,	// (0x00088e03) popup_call_poc_act_window_t4_ParamLimits

0xb7ff,	// (0x00088e03) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0008cb06) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0008cb06) popup_call_poc_act_window_t

0xc68a,	// (0x00089c8e) bg_popup_call_poc_inact_pane_g6

0xc692,	// (0x00089c96) bg_popup_call_poc_inact_pane_g7

0xc69a,	// (0x00089c9e) bg_popup_call_poc_inact_pane_g8

0xb811,	// (0x00088e15) popup_call_poc_inact_window_g2

0xc6a2,	// (0x00089ca6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0008cb85) bg_popup_call_poc_inact_pane_g

0xb819,	// (0x00088e1d) popup_call_poc_inact_window_t1_ParamLimits

0xb819,	// (0x00088e1d) popup_call_poc_inact_window_t1

0xb82e,	// (0x00088e32) popup_call_poc_inact_window_t2_ParamLimits

0xb82e,	// (0x00088e32) popup_call_poc_inact_window_t2

0xb843,	// (0x00088e47) popup_call_poc_inact_window_t3_ParamLimits

0xb843,	// (0x00088e47) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0008cb0f) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0008cb0f) popup_call_poc_inact_window_t

0xc86e,	// (0x00089e72) context_pane_ParamLimits

0x565e,	// (0x00082c62) signal_pane_ParamLimits

0xaaca,	// (0x000880ce) main_call2_pane

0xc85c,	// (0x00089e60) popup_phob_thumbnail2_window_ParamLimits

0xc85c,	// (0x00089e60) popup_phob_thumbnail2_window

0x4d09,	// (0x0008230d) aid_hotspot_pointer_arrow_pane

0x4d11,	// (0x00082315) aid_hotspot_pointer_hand_pane

0x5374,	// (0x00082978) phob_pre_status_pane_g5

0x2f4e,	// (0x00080552) cams_zoom_pane_ParamLimits

0x2f5a,	// (0x0008055e) image_vga_pane_ParamLimits

0x2f69,	// (0x0008056d) main_camera_pane_g1_ParamLimits

0x2f77,	// (0x0008057b) main_camera_pane_g2_ParamLimits

0x2f83,	// (0x00080587) main_camera_pane_g3_ParamLimits

0x2f91,	// (0x00080595) main_camera_pane_g4_ParamLimits

0x2f9f,	// (0x000805a3) main_camera_pane_g5_ParamLimits

0x2fad,	// (0x000805b1) main_camera_pane_g6_ParamLimits

0x2fbb,	// (0x000805bf) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0008c80e) main_camera_pane_g_ParamLimits

0x2fc9,	// (0x000805cd) main_camera_pane_t1_ParamLimits

0x2fdb,	// (0x000805df) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0008c81f) main_camera_pane_t_ParamLimits

0xa821,	// (0x00087e25) bg_popup_preview_window_pane_cp01_ParamLimits

0xa821,	// (0x00087e25) bg_popup_preview_window_pane_cp01

0xb858,	// (0x00088e5c) popup_phob_thumbnail2_window_g1_ParamLimits

0xb858,	// (0x00088e5c) popup_phob_thumbnail2_window_g1

0xa5c6,	// (0x00087bca) call2_cli_visual_pane

0x506b,	// (0x0008266f) popup_call2_audio_conf_window_ParamLimits

0x506b,	// (0x0008266f) popup_call2_audio_conf_window

0x5084,	// (0x00082688) popup_call2_audio_first_window_ParamLimits

0x5084,	// (0x00082688) popup_call2_audio_first_window

0x5122,	// (0x00082726) popup_call2_audio_in_window_ParamLimits

0x5122,	// (0x00082726) popup_call2_audio_in_window

0x5166,	// (0x0008276a) popup_call2_audio_out_window_ParamLimits

0x5166,	// (0x0008276a) popup_call2_audio_out_window

0x51d0,	// (0x000827d4) popup_call2_audio_second_window_ParamLimits

0x51d0,	// (0x000827d4) popup_call2_audio_second_window

0x522e,	// (0x00082832) popup_call2_audio_wait_window_ParamLimits

0x522e,	// (0x00082832) popup_call2_audio_wait_window

0xa5c6,	// (0x00087bca) bg_popup_call2_act_pane_cp03

0xa803,	// (0x00087e07) list_conf_pane_cp

0xb864,	// (0x00088e68) popup_call2_audio_conf_window_t1

0xb872,	// (0x00088e76) list_single_graphic_popup_conf2_pane_ParamLimits

0xb872,	// (0x00088e76) list_single_graphic_popup_conf2_pane

0xb221,	// (0x00088825) list_highlight_pane_cp04

0xb885,	// (0x00088e89) list_single_graphic_popup_conf2_pane_g1

0xb232,	// (0x00088836) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0008cb16) list_single_graphic_popup_conf2_pane_g

0xb88f,	// (0x00088e93) list_single_graphic_popup_conf2_pane_t1

0xb89d,	// (0x00088ea1) bg_popup_call2_act_pane_cp01_ParamLimits

0xb89d,	// (0x00088ea1) bg_popup_call2_act_pane_cp01

0xb927,	// (0x00088f2b) call_type_pane_cp05_ParamLimits

0xb927,	// (0x00088f2b) call_type_pane_cp05

0xb97b,	// (0x00088f7f) popup_call2_audio_second_window_g1_ParamLimits

0xb97b,	// (0x00088f7f) popup_call2_audio_second_window_g1

0xb9cf,	// (0x00088fd3) popup_call2_audio_second_window_g2_ParamLimits

0xb9cf,	// (0x00088fd3) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0008cb1b) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0008cb1b) popup_call2_audio_second_window_g

0xba34,	// (0x00089038) popup_call2_audio_second_window_t1_ParamLimits

0xba34,	// (0x00089038) popup_call2_audio_second_window_t1

0xbaef,	// (0x000890f3) popup_call2_audio_second_window_t2_ParamLimits

0xbaef,	// (0x000890f3) popup_call2_audio_second_window_t2

0xbb42,	// (0x00089146) popup_call2_audio_second_window_t3_ParamLimits

0xbb42,	// (0x00089146) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0008cb22) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0008cb22) popup_call2_audio_second_window_t

0xa5c6,	// (0x00087bca) bg_popup_call2_in_pane_cp02

0xa5d0,	// (0x00087bd4) call_type_pane_cp04

0xa5d8,	// (0x00087bdc) popup_call2_audio_wait_window_g1

0xa5e0,	// (0x00087be4) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008c6fd) popup_call2_audio_wait_window_g

0xa5e8,	// (0x00087bec) popup_call2_audio_wait_window_t3

0xbc35,	// (0x00089239) bg_popup_call2_act_pane_ParamLimits

0xbc35,	// (0x00089239) bg_popup_call2_act_pane

0xbcf5,	// (0x000892f9) call_type_pane_cp03_ParamLimits

0xbcf5,	// (0x000892f9) call_type_pane_cp03

0xbd59,	// (0x0008935d) popup_call2_audio_first_window_g1_ParamLimits

0xbd59,	// (0x0008935d) popup_call2_audio_first_window_g1

0xbdc9,	// (0x000893cd) popup_call2_audio_first_window_g2_ParamLimits

0xbdc9,	// (0x000893cd) popup_call2_audio_first_window_g2

0xb424,	// (0x00088a28) popup_call2_audio_first_window_g3_ParamLimits

0xb424,	// (0x00088a28) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0008cb2b) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0008cb2b) popup_call2_audio_first_window_g

0xbea7,	// (0x000894ab) popup_call2_audio_first_window_t1_ParamLimits

0xbea7,	// (0x000894ab) popup_call2_audio_first_window_t1

0xbfaa,	// (0x000895ae) popup_call2_audio_first_window_t4_ParamLimits

0xbfaa,	// (0x000895ae) popup_call2_audio_first_window_t4

0xc08d,	// (0x00089691) popup_call2_audio_first_window_t5_ParamLimits

0xc08d,	// (0x00089691) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0008cb36) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0008cb36) popup_call2_audio_first_window_t

0xa819,	// (0x00087e1d) bg_popup_call2_act_pane_g1

0xc6fc,	// (0x00089d00) popup_cale_lunar_info_window_t1

0xc70a,	// (0x00089d0e) popup_cale_lunar_info_window_t2

0xc718,	// (0x00089d1c) popup_cale_lunar_info_window_t3

0xa5c6,	// (0x00087bca) bg_popup_call2_bubble_pane

0xc18e,	// (0x00089792) bg_popup_call2_in_pane_cp01_ParamLimits

0xc18e,	// (0x00089792) bg_popup_call2_in_pane_cp01

0xa2a2,	// (0x000878a6) call_type_pane_cp02

0xc1d6,	// (0x000897da) popup_call2_audio_out_window_g1_ParamLimits

0xc1d6,	// (0x000897da) popup_call2_audio_out_window_g1

0xc202,	// (0x00089806) popup_call2_audio_out_window_g2_ParamLimits

0xc202,	// (0x00089806) popup_call2_audio_out_window_g2

0xc22a,	// (0x0008982e) popup_call2_audio_out_window_g3_ParamLimits

0xc22a,	// (0x0008982e) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0008cb3f) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0008cb3f) popup_call2_audio_out_window_g

0xc265,	// (0x00089869) popup_call2_audio_out_window_t1_ParamLimits

0xc265,	// (0x00089869) popup_call2_audio_out_window_t1

0xc2c4,	// (0x000898c8) popup_call2_audio_out_window_t2_ParamLimits

0xc2c4,	// (0x000898c8) popup_call2_audio_out_window_t2

0xc318,	// (0x0008991c) popup_call2_audio_out_window_t3_ParamLimits

0xc318,	// (0x0008991c) popup_call2_audio_out_window_t3

0xc32e,	// (0x00089932) popup_call2_audio_out_window_t4_ParamLimits

0xc32e,	// (0x00089932) popup_call2_audio_out_window_t4

0xc344,	// (0x00089948) popup_call2_audio_out_window_t5_ParamLimits

0xc344,	// (0x00089948) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0008cb48) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0008cb48) popup_call2_audio_out_window_t

0xc3a8,	// (0x000899ac) bg_popup_call2_in_pane_ParamLimits

0xc3a8,	// (0x000899ac) bg_popup_call2_in_pane

0xc404,	// (0x00089a08) popup_call2_audio_in_window_g1_ParamLimits

0xc404,	// (0x00089a08) popup_call2_audio_in_window_g1

0xc43c,	// (0x00089a40) popup_call2_audio_in_window_g2_ParamLimits

0xc43c,	// (0x00089a40) popup_call2_audio_in_window_g2

0xc474,	// (0x00089a78) popup_call2_audio_in_window_g3_ParamLimits

0xc474,	// (0x00089a78) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0008cb55) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0008cb55) popup_call2_audio_in_window_g

0xc4cc,	// (0x00089ad0) popup_call2_audio_in_window_t1_ParamLimits

0xc4cc,	// (0x00089ad0) popup_call2_audio_in_window_t1

0xc54c,	// (0x00089b50) popup_call2_audio_in_window_t2_ParamLimits

0xc54c,	// (0x00089b50) popup_call2_audio_in_window_t2

0xc5cc,	// (0x00089bd0) popup_call2_audio_in_window_t3_ParamLimits

0xc5cc,	// (0x00089bd0) popup_call2_audio_in_window_t3

0xc5e6,	// (0x00089bea) popup_call2_audio_in_window_t4_ParamLimits

0xc5e6,	// (0x00089bea) popup_call2_audio_in_window_t4

0xc5f8,	// (0x00089bfc) popup_call2_audio_in_window_t5_ParamLimits

0xc5f8,	// (0x00089bfc) popup_call2_audio_in_window_t5

0xc60d,	// (0x00089c11) popup_call2_audio_in_window_t6_ParamLimits

0xc60d,	// (0x00089c11) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0008cb5e) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0008cb5e) popup_call2_audio_in_window_t

0xa819,	// (0x00087e1d) bg_popup_call2_in_pane_g1

0xc726,	// (0x00089d2a) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0008cbc6) popup_cale_lunar_info_window_t

0xa821,	// (0x00087e25) bg_popup_call2_rect_pane_ParamLimits

0xa821,	// (0x00087e25) bg_popup_call2_rect_pane

0xa5c6,	// (0x00087bca) call2_cli_visual_graphic_pane

0xa5c6,	// (0x00087bca) call2_cli_visual_text_pane

0x56f6,	// (0x00082cfa) smil_status_volume_pane_g3

0x0002,

0xa969,	// (0x00087f6d) call2_cli_visual_graphic_pane_g1

0xa969,	// (0x00087f6d) call2_cli_visual_graphic_pane_g2

0xa969,	// (0x00087f6d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0008cb6b) call2_cli_visual_graphic_pane_g

0xc622,	// (0x00089c26) bg_popup_call2_rect_pane_g1

0xaa07,	// (0x0008800b) bg_popup_call2_rect_pane_g2

0xc62a,	// (0x00089c2e) bg_popup_call2_rect_pane_g3

0xc632,	// (0x00089c36) bg_popup_call2_rect_pane_g4

0xc63a,	// (0x00089c3e) bg_popup_call2_rect_pane_g5

0xc642,	// (0x00089c46) bg_popup_call2_rect_pane_g6

0xc64a,	// (0x00089c4e) bg_popup_call2_rect_pane_g7

0xc652,	// (0x00089c56) bg_popup_call2_rect_pane_g8

0xc65a,	// (0x00089c5e) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0008cb72) bg_popup_call2_rect_pane_g

0xc662,	// (0x00089c66) bg_popup_call2_bubble_pane_g1

0xc66a,	// (0x00089c6e) bg_popup_call2_bubble_pane_g2

0xc672,	// (0x00089c76) bg_popup_call2_bubble_pane_g3

0xc67a,	// (0x00089c7e) bg_popup_call2_bubble_pane_g4

0xc682,	// (0x00089c86) bg_popup_call2_bubble_pane_g5

0xc68a,	// (0x00089c8e) bg_popup_call2_bubble_pane_g6

0xc692,	// (0x00089c96) bg_popup_call2_bubble_pane_g7

0xc69a,	// (0x00089c9e) bg_popup_call2_bubble_pane_g8

0xc6a2,	// (0x00089ca6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0008cb85) bg_popup_call2_bubble_pane_g

0x269e,	// (0x0007fca2) aid_cale_week_size_cell_pane

0x2fef,	// (0x000805f3) aid_cams_cif_uncrop_pane_ParamLimits

0x2fef,	// (0x000805f3) aid_cams_cif_uncrop_pane

0x314c,	// (0x00080750) aid_cams_size_cell_ParamLimits

0x314c,	// (0x00080750) aid_cams_size_cell

0x3158,	// (0x0008075c) grid_cams_pane_ParamLimits

0x3166,	// (0x0008076a) linegrid_cams_pane_ParamLimits

0x324f,	// (0x00080853) call_video_pane_t1

0x326c,	// (0x00080870) call_video_pane_t2

0x0001,

0xf26e,	// (0x0008c872) call_video_pane_t

0x3738,	// (0x00080d3c) aid_cale_month_size_cell_pane_ParamLimits

0x3738,	// (0x00080d3c) aid_cale_month_size_cell_pane

0xf60b,	// (0x0008cc0f) smil_status_volume_pane_g

0x5703,	// (0x00082d07) volume_smil_pane_ParamLimits

0xa174,	// (0x00087778) aid_popup2_width_pane

0x25a0,	// (0x0007fba4) cell_qdial_pane_g4_ParamLimits

0x25a0,	// (0x0007fba4) cell_qdial_pane_g4

0x466e,	// (0x00081c72) aid_blid_cardinal_pane_ParamLimits

0x467e,	// (0x00081c82) aid_blid_destination_pane_ParamLimits

0x467e,	// (0x00081c82) aid_blid_destination_pane

0xa821,	// (0x00087e25) bg_popup_call_poc_act_pane_ParamLimits

0xa821,	// (0x00087e25) bg_popup_call_poc_act_pane

0xa821,	// (0x00087e25) bg_popup_call_poc_inact_pane_ParamLimits

0xa821,	// (0x00087e25) bg_popup_call_poc_inact_pane

0xc6aa,	// (0x00089cae) bg_popup_call_poc_act_pane_g1

0xc6b2,	// (0x00089cb6) bg_popup_call_poc_act_pane_g2

0xc6ba,	// (0x00089cbe) bg_popup_call_poc_act_pane_g3

0xc67a,	// (0x00089c7e) bg_popup_call_poc_act_pane_g4

0xc682,	// (0x00089c86) bg_popup_call_poc_act_pane_g5

0xc6c2,	// (0x00089cc6) bg_popup_call_poc_act_pane_g6

0xc692,	// (0x00089c96) bg_popup_call_poc_act_pane_g7

0xc6ca,	// (0x00089cce) bg_popup_call_poc_act_pane_g8

0xa5c6,	// (0x00087bca) main_usb_pane

0xc833,	// (0x00089e37) popup_cale_lunar_info_window

0x3584,	// (0x00080b88) im_reading_pane_t1_ParamLimits

0xabcf,	// (0x000881d3) list_im_pane_ParamLimits

0xabe0,	// (0x000881e4) scroll_pane_cp07_ParamLimits

0xa5c6,	// (0x00087bca) grid_highlight_pane_cp012

0xa821,	// (0x00087e25) mup_scale_pane_ParamLimits

0xb424,	// (0x00088a28) main_usb_pane_g1_ParamLimits

0xb424,	// (0x00088a28) main_usb_pane_g1

0x5297,	// (0x0008289b) main_usb_pane_g2_ParamLimits

0x5297,	// (0x0008289b) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0008cbaf) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0008cbaf) main_usb_pane_g

0x52a3,	// (0x000828a7) main_usb_pane_t1_ParamLimits

0x52a3,	// (0x000828a7) main_usb_pane_t1

0x52b5,	// (0x000828b9) main_usb_pane_t2_ParamLimits

0x52b5,	// (0x000828b9) main_usb_pane_t2

0x52c7,	// (0x000828cb) main_usb_pane_t3_ParamLimits

0x52c7,	// (0x000828cb) main_usb_pane_t3

0x52d9,	// (0x000828dd) main_usb_pane_t4_ParamLimits

0x52d9,	// (0x000828dd) main_usb_pane_t4

0x52eb,	// (0x000828ef) main_usb_pane_t5_ParamLimits

0x52eb,	// (0x000828ef) main_usb_pane_t5

0x52fd,	// (0x00082901) main_usb_pane_t6_ParamLimits

0x52fd,	// (0x00082901) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0008cbb4) main_usb_pane_t_ParamLimits

0x460d,	// (0x00081c11) aid_text_placing

0x4618,	// (0x00081c1c) main_location2_pane_t1_ParamLimits

0x462e,	// (0x00081c32) main_location2_pane_t2_ParamLimits

0x4644,	// (0x00081c48) main_location2_pane_t3_ParamLimits

0x465a,	// (0x00081c5e) main_location2_pane_t4_ParamLimits

0x465a,	// (0x00081c5e) main_location2_pane_t4

0xf3cf,	// (0x0008c9d3) main_location2_pane_t_ParamLimits

0xa85d,	// (0x00087e61) find_pinb_pane_g2_ParamLimits

0xa85d,	// (0x00087e61) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0008c723) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0008c723) find_pinb_pane_g

0xa869,	// (0x00087e6d) find_pinb_pane_t1_ParamLimits

0xa87b,	// (0x00087e7f) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0008c728) find_pinb_pane_t_ParamLimits

0xa5c6,	// (0x00087bca) main_call3_pane

0x3cb7,	// (0x000812bb) cale_month_day_heading_pane_t1_ParamLimits

0x3d39,	// (0x0008133d) cale_month_day_heading_pane_t2_ParamLimits

0x3dc6,	// (0x000813ca) cale_month_day_heading_pane_t3_ParamLimits

0x3e53,	// (0x00081457) cale_month_day_heading_pane_t4_ParamLimits

0x3ee0,	// (0x000814e4) cale_month_day_heading_pane_t5_ParamLimits

0x3f75,	// (0x00081579) cale_month_day_heading_pane_t6_ParamLimits

0x4012,	// (0x00081616) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0008c8aa) cale_month_day_heading_pane_t_ParamLimits

0x42be,	// (0x000818c2) smil_status_volume_pane

0x4e55,	// (0x00082459) postcard_address_pane_ParamLimits

0x4e55,	// (0x00082459) postcard_address_pane

0x4e63,	// (0x00082467) postcard_message_pane_ParamLimits

0x4e63,	// (0x00082467) postcard_message_pane

0x526d,	// (0x00082871) call2_cli_visual_pane_t1_ParamLimits

0x526d,	// (0x00082871) call2_cli_visual_pane_t1

0x5862,	// (0x00082e66) postcard_message_pane_t1_ParamLimits

0x5862,	// (0x00082e66) postcard_message_pane_t1

0x584b,	// (0x00082e4f) postcard_address_pane_t1_ParamLimits

0x584b,	// (0x00082e4f) postcard_address_pane_t1

0x583c,	// (0x00082e40) popup_call3_audio_in_window_ParamLimits

0x583c,	// (0x00082e40) popup_call3_audio_in_window

0x571a,	// (0x00082d1e) bg_popup_call3_in_pane_ParamLimits

0x571a,	// (0x00082d1e) bg_popup_call3_in_pane

0x5782,	// (0x00082d86) popup_call3_audio_in_window_g1_ParamLimits

0x5782,	// (0x00082d86) popup_call3_audio_in_window_g1

0x579a,	// (0x00082d9e) popup_call3_audio_in_window_g2_ParamLimits

0x579a,	// (0x00082d9e) popup_call3_audio_in_window_g2

0x57b2,	// (0x00082db6) popup_call3_audio_in_window_g3_ParamLimits

0x57b2,	// (0x00082db6) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0008cc16) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0008cc16) popup_call3_audio_in_window_g

0x57da,	// (0x00082dde) popup_call3_audio_in_window_t1_ParamLimits

0x57da,	// (0x00082dde) popup_call3_audio_in_window_t1

0x5802,	// (0x00082e06) popup_call3_audio_in_window_t2_ParamLimits

0x5802,	// (0x00082e06) popup_call3_audio_in_window_t2

0x582a,	// (0x00082e2e) popup_call3_audio_in_window_t3_ParamLimits

0x582a,	// (0x00082e2e) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0008cc1f) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0008cc1f) popup_call3_audio_in_window_t

0xaaca,	// (0x000880ce) bg_popup_call3_rect_pane

0xc622,	// (0x00089c26) bg_popup_call3_rect_pane_g1

0xaa07,	// (0x0008800b) bg_popup_call3_rect_pane_g2

0xc62a,	// (0x00089c2e) bg_popup_call3_rect_pane_g3

0xc632,	// (0x00089c36) bg_popup_call3_rect_pane_g4

0xc63a,	// (0x00089c3e) bg_popup_call3_rect_pane_g5

0xc642,	// (0x00089c46) bg_popup_call3_rect_pane_g6

0xc64a,	// (0x00089c4e) bg_popup_call3_rect_pane_g7

0x4ab4,	// (0x000820b8) mup_visualizer_osc_pane

0xb4c5,	// (0x00088ac9) mup_visualizer_spec_pane

0x573a,	// (0x00082d3e) call3_video_qcif_pane_ParamLimits

0x573a,	// (0x00082d3e) call3_video_qcif_pane

0x574c,	// (0x00082d50) call3_video_qcif_uncrop_pane_ParamLimits

0x574c,	// (0x00082d50) call3_video_qcif_uncrop_pane

0x575c,	// (0x00082d60) call3_video_subqcif_pane_ParamLimits

0x575c,	// (0x00082d60) call3_video_subqcif_pane

0x5770,	// (0x00082d74) call3_video_subqcif_uncrop_pane_ParamLimits

0x5770,	// (0x00082d74) call3_video_subqcif_uncrop_pane

0x57ca,	// (0x00082dce) popup_call3_audio_in_window_g4_ParamLimits

0x57ca,	// (0x00082dce) popup_call3_audio_in_window_g4

0x56e5,	// (0x00082ce9) mup_spec_half_pane

0x56ee,	// (0x00082cf2) mup_spec_half_pane_cp

0xc8ce,	// (0x00089ed2) mup_osc_middle_pane

0xc8d7,	// (0x00089edb) mup_visualizer_osc_pane_g1

0x56c5,	// (0x00082cc9) mup_spec_bar_pane_ParamLimits

0x56c5,	// (0x00082cc9) mup_spec_bar_pane

0xc8bb,	// (0x00089ebf) mup_spec_bar_pane_g1

0xc8c5,	// (0x00089ec9) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008cc0a) mup_spec_bar_pane_g

0x269e,	// (0x0007fca2) aid_cale_week_size_cell_pane_ParamLimits

0x26b8,	// (0x0007fcbc) bg_cale_heading_pane_ParamLimits

0x26e1,	// (0x0007fce5) bg_cale_pane_cp01_ParamLimits

0x2703,	// (0x0007fd07) cale_week_corner_pane_ParamLimits

0x2722,	// (0x0007fd26) cale_week_day_heading_pane_ParamLimits

0x2750,	// (0x0007fd54) cale_week_scroll_pane_g1_ParamLimits

0x2774,	// (0x0007fd78) cale_week_scroll_pane_g2_ParamLimits

0x278c,	// (0x0007fd90) cale_week_scroll_pane_g3_ParamLimits

0x27a4,	// (0x0007fda8) cale_week_scroll_pane_g4_ParamLimits

0x27bc,	// (0x0007fdc0) cale_week_scroll_pane_g5_ParamLimits

0x27d4,	// (0x0007fdd8) cale_week_scroll_pane_g6_ParamLimits

0x27f4,	// (0x0007fdf8) cale_week_scroll_pane_g7_ParamLimits

0x2814,	// (0x0007fe18) cale_week_scroll_pane_g8_ParamLimits

0x2834,	// (0x0007fe38) cale_week_scroll_pane_g9_ParamLimits

0x2851,	// (0x0007fe55) cale_week_scroll_pane_g10_ParamLimits

0x286e,	// (0x0007fe72) cale_week_scroll_pane_g11_ParamLimits

0x288b,	// (0x0007fe8f) cale_week_scroll_pane_g12_ParamLimits

0x28a8,	// (0x0007feac) cale_week_scroll_pane_g13_ParamLimits

0x28cd,	// (0x0007fed1) cale_week_scroll_pane_g14_ParamLimits

0x28f6,	// (0x0007fefa) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0008c7b4) cale_week_scroll_pane_g_ParamLimits

0x293f,	// (0x0007ff43) cale_week_time_pane_ParamLimits

0x295f,	// (0x0007ff63) grid_cale_week_pane_ParamLimits

0xaa3b,	// (0x0008803f) listscroll_cale_week_pane_t1

0xaa4d,	// (0x00088051) scroll_pane_cp08_ParamLimits

0x37a5,	// (0x00080da9) cale_month_corner_pane_ParamLimits

0xae00,	// (0x00088404) cale_month_pane_t1

0x3c49,	// (0x0008124d) cale_month_week_pane_ParamLimits

0xb424,	// (0x00088a28) popup_call_status_window_g1_ParamLimits

0x4416,	// (0x00081a1a) popup_call_status_window_g2_ParamLimits

0x4422,	// (0x00081a26) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0008c95a) popup_call_status_window_g_ParamLimits

0xb1a2,	// (0x000887a6) aid_call2_pane

0x0d9f,	// (0x0007e3a3) msg_header_pane_g1

0x4e55,	// (0x00082459) postcard_address2_pane_ParamLimits

0x4e55,	// (0x00082459) postcard_address2_pane

0x4e63,	// (0x00082467) postcard_message2_pane_ParamLimits

0x4e63,	// (0x00082467) postcard_message2_pane

0x566c,	// (0x00082c70) message2_row_pane_ParamLimits

0x566c,	// (0x00082c70) message2_row_pane

0x5686,	// (0x00082c8a) address2_row_pane_ParamLimits

0x5686,	// (0x00082c8a) address2_row_pane

0xc889,	// (0x00089e8d) postcard_message2_row_pane_g1

0xc891,	// (0x00089e95) postcard_message2_row_pane_t1

0xc889,	// (0x00089e8d) address2_row_pane_g1

0xc891,	// (0x00089e95) address2_row_pane_t1

0x2ec7,	// (0x000804cb) aid_size_cell_vorec

0xa5c6,	// (0x00087bca) main_rss_pane

0x5699,	// (0x00082c9d) rss_list_single_pane_ParamLimits

0x5699,	// (0x00082c9d) rss_list_single_pane

0xc89f,	// (0x00089ea3) rss_list_single_pane_t1

0xc8ad,	// (0x00089eb1) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0008cc05) rss_list_single_pane_t

0xa5c6,	// (0x00087bca) main_camera2_pane

0xa5c6,	// (0x00087bca) main_video2_pane

0x58c6,	// (0x00082eca) cams_zoom_pane_cp2_ParamLimits

0x58c6,	// (0x00082eca) cams_zoom_pane_cp2

0x58d2,	// (0x00082ed6) image2_vga_pane_ParamLimits

0x58d2,	// (0x00082ed6) image2_vga_pane

0x58e1,	// (0x00082ee5) main_camera2_pane_g1_ParamLimits

0x58e1,	// (0x00082ee5) main_camera2_pane_g1

0x58ed,	// (0x00082ef1) main_camera2_pane_g2_ParamLimits

0x58ed,	// (0x00082ef1) main_camera2_pane_g2

0x58f9,	// (0x00082efd) main_camera2_pane_g3_ParamLimits

0x58f9,	// (0x00082efd) main_camera2_pane_g3

0x5905,	// (0x00082f09) main_camera2_pane_g4_ParamLimits

0x5905,	// (0x00082f09) main_camera2_pane_g4

0x5911,	// (0x00082f15) main_camera2_pane_g5_ParamLimits

0x5911,	// (0x00082f15) main_camera2_pane_g5

0x591d,	// (0x00082f21) main_camera2_pane_g6_ParamLimits

0x591d,	// (0x00082f21) main_camera2_pane_g6

0x5929,	// (0x00082f2d) main_camera2_pane_g7_ParamLimits

0x5929,	// (0x00082f2d) main_camera2_pane_g7

0x5935,	// (0x00082f39) main_camera2_pane_g8_ParamLimits

0x5935,	// (0x00082f39) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0008cc26) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0008cc26) main_camera2_pane_g

0x594d,	// (0x00082f51) main_camera2_pane_t1_ParamLimits

0x594d,	// (0x00082f51) main_camera2_pane_t1

0x595f,	// (0x00082f63) main_camera2_pane_t2_ParamLimits

0x595f,	// (0x00082f63) main_camera2_pane_t2

0x5971,	// (0x00082f75) main_camera2_pane_t3_ParamLimits

0x5971,	// (0x00082f75) main_camera2_pane_t3

0x5983,	// (0x00082f87) main_camera2_pane_t4_ParamLimits

0x5983,	// (0x00082f87) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0008cc39) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0008cc39) main_camera2_pane_t

0x59e0,	// (0x00082fe4) cams_zoom_pane_cp4_ParamLimits

0x59e0,	// (0x00082fe4) cams_zoom_pane_cp4

0x59f0,	// (0x00082ff4) image2_cif_pane_ParamLimits

0x59f0,	// (0x00082ff4) image2_cif_pane

0x5a05,	// (0x00083009) image2_subqcif_pane_ParamLimits

0x5a05,	// (0x00083009) image2_subqcif_pane

0x5a14,	// (0x00083018) main_video2_pane_g1_ParamLimits

0x5a14,	// (0x00083018) main_video2_pane_g1

0x5a26,	// (0x0008302a) main_video2_pane_g2_ParamLimits

0x5a26,	// (0x0008302a) main_video2_pane_g2

0x5a36,	// (0x0008303a) main_video2_pane_g3_ParamLimits

0x5a36,	// (0x0008303a) main_video2_pane_g3

0x5a46,	// (0x0008304a) main_video2_pane_g4_ParamLimits

0x5a46,	// (0x0008304a) main_video2_pane_g4

0x5a56,	// (0x0008305a) main_video2_pane_g5_ParamLimits

0x5a56,	// (0x0008305a) main_video2_pane_g5

0x5a66,	// (0x0008306a) main_video2_pane_g6_ParamLimits

0x5a66,	// (0x0008306a) main_video2_pane_g6

0x0005,

0xf644,	// (0x0008cc48) main_video2_pane_g_ParamLimits

0xf644,	// (0x0008cc48) main_video2_pane_g

0x5a78,	// (0x0008307c) main_video2_pane_t1_ParamLimits

0x5a78,	// (0x0008307c) main_video2_pane_t1

0x5a92,	// (0x00083096) main_video2_pane_t2_ParamLimits

0x5a92,	// (0x00083096) main_video2_pane_t2

0x5ab8,	// (0x000830bc) main_video2_pane_t3_ParamLimits

0x5ab8,	// (0x000830bc) main_video2_pane_t3

0x0002,

0xf651,	// (0x0008cc55) main_video2_pane_t_ParamLimits

0xf651,	// (0x0008cc55) main_video2_pane_t

0x53b4,	// (0x000829b8) call_muted_g2

0x0001,

0xf5f3,	// (0x0008cbf7) call_muted_g

0xa5c6,	// (0x00087bca) main_mup2_pane

0xc90e,	// (0x00089f12) main_mup2_pane_g1_ParamLimits

0xc90e,	// (0x00089f12) main_mup2_pane_g1

0x5ade,	// (0x000830e2) main_mup2_pane_g2_ParamLimits

0x5ade,	// (0x000830e2) main_mup2_pane_g2

0x5d70,	// (0x00083374) main_mup_pane_g13_cp1

0x5d78,	// (0x0008337c) mup_volume_pane_cp1

0x5b00,	// (0x00083104) main_mup2_pane_g4_ParamLimits

0x5b00,	// (0x00083104) main_mup2_pane_g4

0x5b15,	// (0x00083119) main_mup2_pane_g5_ParamLimits

0x5b15,	// (0x00083119) main_mup2_pane_g5

0x5b2a,	// (0x0008312e) main_mup2_pane_g6_ParamLimits

0x5b2a,	// (0x0008312e) main_mup2_pane_g6

0x5b3f,	// (0x00083143) main_mup2_pane_g7_ParamLimits

0x5b3f,	// (0x00083143) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0008cc5c) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0008cc5c) main_mup2_pane_g

0x5b5b,	// (0x0008315f) main_mup2_pane_t1_ParamLimits

0x5b5b,	// (0x0008315f) main_mup2_pane_t1

0x5b72,	// (0x00083176) main_mup2_pane_t2_ParamLimits

0x5b72,	// (0x00083176) main_mup2_pane_t2

0x5b89,	// (0x0008318d) main_mup2_pane_t3_ParamLimits

0x5b89,	// (0x0008318d) main_mup2_pane_t3

0x5ba0,	// (0x000831a4) main_mup2_pane_t4_ParamLimits

0x5ba0,	// (0x000831a4) main_mup2_pane_t4

0x5bba,	// (0x000831be) main_mup2_pane_t5_ParamLimits

0x5bba,	// (0x000831be) main_mup2_pane_t5

0x5bd4,	// (0x000831d8) main_mup2_pane_t6_ParamLimits

0x5bd4,	// (0x000831d8) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0008cc6b) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0008cc6b) main_mup2_pane_t

0x5c0c,	// (0x00083210) mup2_visualizer_pane_ParamLimits

0x5c0c,	// (0x00083210) mup2_visualizer_pane

0x5c42,	// (0x00083246) mup_progress_pane_cp_ParamLimits

0x5c42,	// (0x00083246) mup_progress_pane_cp

0x5d5b,	// (0x0008335f) mup_volume_pane_cp_ParamLimits

0x5d5b,	// (0x0008335f) mup_volume_pane_cp

0x5c5b,	// (0x0008325f) mup2_visualizer_pane_g1_ParamLimits

0x5c5b,	// (0x0008325f) mup2_visualizer_pane_g1

0xc91a,	// (0x00089f1e) mup2_visualizer_pane_g2_ParamLimits

0xc91a,	// (0x00089f1e) mup2_visualizer_pane_g2

0x5c70,	// (0x00083274) mup2_visualizer_pane_g3_ParamLimits

0x5c70,	// (0x00083274) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0008cc78) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0008cc78) mup2_visualizer_pane_g

0xb6ee,	// (0x00088cf2) aid_size_cell_fmradio

0x54ca,	// (0x00082ace) aid_height_parent_landcape

0xac5e,	// (0x00088262) wml_content_pane_cp

0xac66,	// (0x0008826a) wml_tabs_pane

0xac6f,	// (0x00088273) popup_wml_miniature_window

0xac77,	// (0x0008827b) scroll_pane_cp021

0xac8b,	// (0x0008828f) wml_content_pane_comp8

0xa5c6,	// (0x00087bca) bg_popup_sub_pane_cp05

0xc938,	// (0x00089f3c) popup_wml_miniature_window_g1

0xc940,	// (0x00089f44) wml_miniature_view_pane

0x5c7e,	// (0x00083282) aid_size_wml_view

0x5c86,	// (0x0008328a) wml_miniature_view_pane_g1

0x5c8f,	// (0x00083293) wml_miniature_view_pane_g2

0x5c98,	// (0x0008329c) wml_miniature_view_pane_g3

0x5ca0,	// (0x000832a4) wml_miniature_view_pane_g4

0x5ca8,	// (0x000832ac) wml_miniature_view_pane_g5

0x5cb0,	// (0x000832b4) wml_miniature_view_pane_g6

0x5cb8,	// (0x000832bc) wml_miniature_view_pane_g7

0x5cc0,	// (0x000832c4) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0008cc7f) wml_miniature_view_pane_g

0xc90e,	// (0x00089f12) background_graphic_ParamLimits

0xc90e,	// (0x00089f12) background_graphic

0xc948,	// (0x00089f4c) wml_tabs_2_pane

0xc951,	// (0x00089f55) wml_tabs_3_pane_ParamLimits

0xc951,	// (0x00089f55) wml_tabs_3_pane

0xc963,	// (0x00089f67) wml_tabs_4_pane_ParamLimits

0xc963,	// (0x00089f67) wml_tabs_4_pane

0xc979,	// (0x00089f7d) wml_tabs_5_pane_ParamLimits

0xc979,	// (0x00089f7d) wml_tabs_5_pane

0xc993,	// (0x00089f97) wml_tabs_pane_g2_ParamLimits

0xc993,	// (0x00089f97) wml_tabs_pane_g2

0xc9a7,	// (0x00089fab) wml_tabs_pane_g3_ParamLimits

0xc9a7,	// (0x00089fab) wml_tabs_pane_g3

0x5cc8,	// (0x000832cc) wml_tabs_2_active_pane_ParamLimits

0x5cc8,	// (0x000832cc) wml_tabs_2_active_pane

0x5cda,	// (0x000832de) wml_tabs_2_passive_pane_ParamLimits

0x5cda,	// (0x000832de) wml_tabs_2_passive_pane

0x5cec,	// (0x000832f0) wml_tabs_3_active_pane_cp_ParamLimits

0x5cec,	// (0x000832f0) wml_tabs_3_active_pane_cp

0x5cff,	// (0x00083303) wml_tabs_3_passive_pane_ParamLimits

0x5cff,	// (0x00083303) wml_tabs_3_passive_pane

0x5d10,	// (0x00083314) wml_tabs_3_passive_pane_cp_ParamLimits

0x5d10,	// (0x00083314) wml_tabs_3_passive_pane_cp

0x5d25,	// (0x00083329) tabs_4_active_pane

0x5d2d,	// (0x00083331) tabs_4_passive_pane

0x5d35,	// (0x00083339) tabs_4_passive_pane_cp

0x5d3d,	// (0x00083341) tabs_4_passive_pane_cp2

0x528f,	// (0x00082893) aid_height_text

0x4a7d,	// (0x00082081) mup_volume_cont_pane_ParamLimits

0x4a7d,	// (0x00082081) mup_volume_cont_pane

0x21f6,	// (0x0007f7fa) aid_size_cell_pinb

0x2200,	// (0x0007f804) aid_size_list_pinb

0x5c2b,	// (0x0008322f) mup2_volume_cont_pane_ParamLimits

0x5c2b,	// (0x0008322f) mup2_volume_cont_pane

0x5d47,	// (0x0008334b) mup2_volume_cont_pane_g1_ParamLimits

0x5d47,	// (0x0008334b) mup2_volume_cont_pane_g1

0x1e70,	// (0x0007f474) aid_size_cell_touch_ParamLimits

0x1e70,	// (0x0007f474) aid_size_cell_touch

0x20e0,	// (0x0007f6e4) touch_pane_ParamLimits

0x20e0,	// (0x0007f6e4) touch_pane

0xa162,	// (0x00087766) main_rss2_pane

0xc9c4,	// (0x00089fc8) listscroll_rss2_pane

0xc9cd,	// (0x00089fd1) rss2_navigation_pane

0xc9d5,	// (0x00089fd9) list_rss2_pane

0xb2c6,	// (0x000888ca) scroll_pane_cp22

0xc9dd,	// (0x00089fe1) rss2_navigation_pane_g1

0xc9e6,	// (0x00089fea) rss2_navigation_pane_g2

0xc9ee,	// (0x00089ff2) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0008cc90) rss2_navigation_pane_g

0xc9f6,	// (0x00089ffa) rss2_navigation_pane_t1

0x5d80,	// (0x00083384) rss2_list_single_pane_ParamLimits

0x5d80,	// (0x00083384) rss2_list_single_pane

0xca04,	// (0x0008a008) rss2_list_single_pane_t2

0xca12,	// (0x0008a016) rss2_list_single_pane_t3_ParamLimits

0xca12,	// (0x0008a016) rss2_list_single_pane_t3

0xca2f,	// (0x0008a033) rss2_list_single_pane_t4

0x42a8,	// (0x000818ac) smil_status_pane_g1

0xa8a8,	// (0x00087eac) main_image2_pane_ParamLimits

0xa8a8,	// (0x00087eac) main_image2_pane

0x5941,	// (0x00082f45) main_camera2_pane_g9_ParamLimits

0x5941,	// (0x00082f45) main_camera2_pane_g9

0x5995,	// (0x00082f99) main_camera2_pane_t5_ParamLimits

0x5995,	// (0x00082f99) main_camera2_pane_t5

0x59a7,	// (0x00082fab) main_camera2_pane_t6_ParamLimits

0x59a7,	// (0x00082fab) main_camera2_pane_t6

0x5da3,	// (0x000833a7) main_image2_pane_g1_ParamLimits

0x5da3,	// (0x000833a7) main_image2_pane_g1

0x502c,	// (0x00082630) smil2_video_pane_ParamLimits

0x502c,	// (0x00082630) smil2_video_pane

0x0b48,	// (0x0007e14c) aid_zoom_text_primary_cp

0xa1a9,	// (0x000877ad) popup_preview_fixed_window

0xabc7,	// (0x000881cb) im_reading_pane_g1

0x588b,	// (0x00082e8f) cams2_bc_adjust_pane_cp_ParamLimits

0x588b,	// (0x00082e8f) cams2_bc_adjust_pane_cp

0x59d2,	// (0x00082fd6) cams2_bc_adjust_pane_ParamLimits

0x59d2,	// (0x00082fd6) cams2_bc_adjust_pane

0x5daf,	// (0x000833b3) cams2_bc_adjust_pane_g1

0x5db7,	// (0x000833bb) cams2_slider_pane

0x5dc0,	// (0x000833c4) cams2_slider_pane_g1

0x5dc9,	// (0x000833cd) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0008cc97) cams2_slider_pane_g

0x22fb,	// (0x0007f8ff) calc_display_pane_ParamLimits

0x2319,	// (0x0007f91d) calc_paper_pane_ParamLimits

0x2335,	// (0x0007f939) grid_calc_pane_ParamLimits

0x4480,	// (0x00081a84) popup_clock_digital_window_t1_ParamLimits

0xb68b,	// (0x00088c8f) main_image_pane_t1

0x22e1,	// (0x0007f8e5) aid_size_cell_calc_ParamLimits

0x22e1,	// (0x0007f8e5) aid_size_cell_calc

0x54fc,	// (0x00082b00) popup_blid_sat_info2_window_ParamLimits

0x54fc,	// (0x00082b00) popup_blid_sat_info2_window

0xca45,	// (0x0008a049) aid_size_cell_blid

0xca4d,	// (0x0008a051) bg_popup_window_pane_cp07

0xca70,	// (0x0008a074) grid_popup_blid_pane

0xca7a,	// (0x0008a07e) heading_pane_cp05_ParamLimits

0xca7a,	// (0x0008a07e) heading_pane_cp05

0xcb44,	// (0x0008a148) cell_popup_blid_pane_ParamLimits

0xcb44,	// (0x0008a148) cell_popup_blid_pane

0xcb6e,	// (0x0008a172) cell_popup_blid_pane_g1

0xcb76,	// (0x0008a17a) cell_popup_blid_pane_t1

0x5bf1,	// (0x000831f5) mup2_indicator_pane_ParamLimits

0x5bf1,	// (0x000831f5) mup2_indicator_pane

0xaaca,	// (0x000880ce) mup2_visualizer_osc_pane

0xc926,	// (0x00089f2a) mup2_visualizer_spec_pane_ParamLimits

0xc926,	// (0x00089f2a) mup2_visualizer_spec_pane

0x5de3,	// (0x000833e7) mup2_spec_half_pane

0x5dec,	// (0x000833f0) mup2_spec_half_pane_cp

0x5df6,	// (0x000833fa) mup2_spec_bar_pane_ParamLimits

0x5df6,	// (0x000833fa) mup2_spec_bar_pane

0xc8bb,	// (0x00089ebf) mup2_spec_bar_pane_g1

0xc8c5,	// (0x00089ec9) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0008cc0a) mup2_spec_bar_pane_g

0x5e15,	// (0x00083419) mup2_osc_middle_pane

0xc8d7,	// (0x00089edb) mup2_visualizer_osc_pane_g1

0xa1d3,	// (0x000877d7) popup_number_entry_window_t1_ParamLimits

0xa1e6,	// (0x000877ea) popup_number_entry_window_t2_ParamLimits

0xa1f8,	// (0x000877fc) popup_number_entry_window_t3_ParamLimits

0x2137,	// (0x0007f73b) popup_number_entry_window_t5_ParamLimits

0x2137,	// (0x0007f73b) popup_number_entry_window_t5

0xf0ca,	// (0x0008c6ce) popup_number_entry_window_t_ParamLimits

0xa20a,	// (0x0008780e) text_title_cp2_ParamLimits

0x4d19,	// (0x0008231d) aid_hotspot_pointer_text2_pane

0x4db3,	// (0x000823b7) main_viewer_pane_g9_ParamLimits

0x4db3,	// (0x000823b7) main_viewer_pane_g9

0xae00,	// (0x00088404) cale_month_pane_t1_ParamLimits

0xae26,	// (0x0008842a) bg_cale_pane_ParamLimits

0xae3e,	// (0x00088442) list_cale_pane_ParamLimits

0xae4f,	// (0x00088453) listscroll_cale_day_pane_t1

0xae61,	// (0x00088465) scroll_pane_cp09_ParamLimits

0x4abc,	// (0x000820c0) main_mup_eq_pane_t1_ParamLimits

0x4abc,	// (0x000820c0) main_mup_eq_pane_t1

0x4ad8,	// (0x000820dc) main_mup_eq_pane_t2_ParamLimits

0x4ad8,	// (0x000820dc) main_mup_eq_pane_t2

0x4af4,	// (0x000820f8) main_mup_eq_pane_t3_ParamLimits

0x4af4,	// (0x000820f8) main_mup_eq_pane_t3

0x4b0e,	// (0x00082112) main_mup_eq_pane_t4_ParamLimits

0x4b0e,	// (0x00082112) main_mup_eq_pane_t4

0x4b28,	// (0x0008212c) main_mup_eq_pane_t5_ParamLimits

0x4b28,	// (0x0008212c) main_mup_eq_pane_t5

0x4b42,	// (0x00082146) main_mup_eq_pane_t6_ParamLimits

0x4b42,	// (0x00082146) main_mup_eq_pane_t6

0x4b58,	// (0x0008215c) main_mup_eq_pane_t7_ParamLimits

0x4b58,	// (0x0008215c) main_mup_eq_pane_t7

0x4b6e,	// (0x00082172) main_mup_eq_pane_t8_ParamLimits

0x4b6e,	// (0x00082172) main_mup_eq_pane_t8

0x4b84,	// (0x00082188) main_mup_eq_pane_t9_ParamLimits

0x4b84,	// (0x00082188) main_mup_eq_pane_t9

0x4ba0,	// (0x000821a4) main_mup_eq_pane_t10_ParamLimits

0x4ba0,	// (0x000821a4) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0008ca59) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0008ca59) main_mup_eq_pane_t

0x4c65,	// (0x00082269) mup_equalizer_pane_cp5_ParamLimits

0x4c7d,	// (0x00082281) mup_equalizer_pane_cp6_ParamLimits

0x4c95,	// (0x00082299) mup_equalizer_pane_cp7_ParamLimits

0xa162,	// (0x00087766) main_gallery_pane

0xc8e0,	// (0x00089ee4) smil2_volume_pane

0xc8e8,	// (0x00089eec) smil_status_volume_pane_g1_ParamLimits

0xc8fb,	// (0x00089eff) smil_status_volume_pane_g2_ParamLimits

0x56f6,	// (0x00082cfa) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0008cc0f) smil_status_volume_pane_g_ParamLimits

0xca4d,	// (0x0008a051) bg_popup_window_pane_cp07_ParamLimits

0xca5b,	// (0x0008a05f) blid_firmament_pane

0x5e1e,	// (0x00083422) aid_size_cell_gallery_ParamLimits

0x5e1e,	// (0x00083422) aid_size_cell_gallery

0x5e2c,	// (0x00083430) grid_gallery_pane_ParamLimits

0x5e2c,	// (0x00083430) grid_gallery_pane

0x5e3c,	// (0x00083440) cell_gallery_pane_ParamLimits

0x5e3c,	// (0x00083440) cell_gallery_pane

0xcb84,	// (0x0008a188) bg_cell_gallery_focus_pane_ParamLimits

0xcb84,	// (0x0008a188) bg_cell_gallery_focus_pane

0xcb96,	// (0x0008a19a) cell_gallery_pane_g1_ParamLimits

0xcb96,	// (0x0008a19a) cell_gallery_pane_g1

0x5e82,	// (0x00083486) cell_gallery_pane_g2_ParamLimits

0x5e82,	// (0x00083486) cell_gallery_pane_g2

0x5e8f,	// (0x00083493) cell_gallery_pane_g3_ParamLimits

0x5e8f,	// (0x00083493) cell_gallery_pane_g3

0xcba2,	// (0x0008a1a6) cell_gallery_pane_g4_ParamLimits

0xcba2,	// (0x0008a1a6) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0008ccbd) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0008ccbd) cell_gallery_pane_g

0xcbae,	// (0x0008a1b2) bg_cell_gallery_focus_pane_g1

0xcbb6,	// (0x0008a1ba) bg_cell_gallery_focus_pane_g2

0xcbbe,	// (0x0008a1c2) bg_cell_gallery_focus_pane_g3

0xcbc6,	// (0x0008a1ca) bg_cell_gallery_focus_pane_g4

0xcbce,	// (0x0008a1d2) bg_cell_gallery_focus_pane_g5

0xcbd6,	// (0x0008a1da) bg_cell_gallery_focus_pane_g6

0xcbde,	// (0x0008a1e2) bg_cell_gallery_focus_pane_g7

0xcbe6,	// (0x0008a1ea) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0008ccc6) bg_cell_gallery_focus_pane_g

0xcbee,	// (0x0008a1f2) aid_firma_cardinal

0xcc02,	// (0x0008a206) blid_firmament_pane_t1

0xcc19,	// (0x0008a21d) blid_firmament_pane_t2

0xcc30,	// (0x0008a234) blid_firmament_pane_t3

0xcc47,	// (0x0008a24b) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0008ccd7) blid_firmament_pane_t

0xcc5e,	// (0x0008a262) blid_sat_info_pane

0xcc6e,	// (0x0008a272) blid_sat_info_pane_g1

0xcc6e,	// (0x0008a272) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0008cce0) blid_sat_info_pane_g

0xcc78,	// (0x0008a27c) blid_sat_info_pane_t1

0xcc86,	// (0x0008a28a) smil2_volume_content_pane

0xcc8f,	// (0x0008a293) smil2_volume_pane_g1

0xcc97,	// (0x0008a29b) smil2_volume_content_pane_g1

0xcca0,	// (0x0008a2a4) smil2_volume_content_pane_g2

0xcca9,	// (0x0008a2ad) smil2_volume_content_pane_g3

0xccb2,	// (0x0008a2b6) smil2_volume_content_pane_g4

0xccbb,	// (0x0008a2bf) smil2_volume_content_pane_g5

0xccc4,	// (0x0008a2c8) smil2_volume_content_pane_g6

0xcccd,	// (0x0008a2d1) smil2_volume_content_pane_g7

0xccd6,	// (0x0008a2da) smil2_volume_content_pane_g8

0xccdf,	// (0x0008a2e3) smil2_volume_content_pane_g9

0xcce8,	// (0x0008a2ec) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0008cce5) smil2_volume_content_pane_g

0x2a22,	// (0x00080026) cale_week_day_heading_pane_t1_ParamLimits

0x2a6a,	// (0x0008006e) cale_week_day_heading_pane_t2_ParamLimits

0x2ab7,	// (0x000800bb) cale_week_day_heading_pane_t3_ParamLimits

0x2b04,	// (0x00080108) cale_week_day_heading_pane_t4_ParamLimits

0x2b51,	// (0x00080155) cale_week_day_heading_pane_t5_ParamLimits

0x2b9e,	// (0x000801a2) cale_week_day_heading_pane_t6_ParamLimits

0x2beb,	// (0x000801ef) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0008c7d5) cale_week_day_heading_pane_t_ParamLimits

0xaa6f,	// (0x00088073) bg_cale_side_pane_ParamLimits

0x2c33,	// (0x00080237) cale_week_time_pane_t1_ParamLimits

0x2c77,	// (0x0008027b) cale_week_time_pane_t2_ParamLimits

0x2cbb,	// (0x000802bf) cale_week_time_pane_t3_ParamLimits

0x2cff,	// (0x00080303) cale_week_time_pane_t4_ParamLimits

0x2d43,	// (0x00080347) cale_week_time_pane_t5_ParamLimits

0x2d87,	// (0x0008038b) cale_week_time_pane_t6_ParamLimits

0x2dcb,	// (0x000803cf) cale_week_time_pane_t7_ParamLimits

0x2e17,	// (0x0008041b) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0008c7e4) cale_week_time_pane_t_ParamLimits

0x2e65,	// (0x00080469) cell_cale_week_pane_g2_ParamLimits

0xaa6f,	// (0x00088073) bg_cale_side_pane_cp01_ParamLimits

0x40af,	// (0x000816b3) cale_month_week_pane_t1_ParamLimits

0x40c8,	// (0x000816cc) cale_month_week_pane_t2_ParamLimits

0x40e1,	// (0x000816e5) cale_month_week_pane_t3_ParamLimits

0x40fa,	// (0x000816fe) cale_month_week_pane_t4_ParamLimits

0x4113,	// (0x00081717) cale_month_week_pane_t5_ParamLimits

0x412e,	// (0x00081732) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0008c8b9) cale_month_week_pane_t_ParamLimits

0x4271,	// (0x00081875) cell_cale_month_pane_g1_ParamLimits

0xa162,	// (0x00087766) main_cale_event_viewer_pane

0xa162,	// (0x00087766) listscroll_cale_event_viewer_pane

0xccf1,	// (0x0008a2f5) list_cale_ev_pane

0xccf9,	// (0x0008a2fd) scroll_pane_cp023

0x5e9c,	// (0x000834a0) field_cale_ev_pane_ParamLimits

0x5e9c,	// (0x000834a0) field_cale_ev_pane

0xcd05,	// (0x0008a309) field_cale_ev_content_pane_ParamLimits

0xcd05,	// (0x0008a309) field_cale_ev_content_pane

0xcd11,	// (0x0008a315) field_cale_ev_pane_g1_ParamLimits

0xcd11,	// (0x0008a315) field_cale_ev_pane_g1

0xcd1d,	// (0x0008a321) field_cale_ev_pane_g2_ParamLimits

0xcd1d,	// (0x0008a321) field_cale_ev_pane_g2

0xcd35,	// (0x0008a339) field_cale_ev_pane_g3_ParamLimits

0xcd35,	// (0x0008a339) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0008ccfa) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0008ccfa) field_cale_ev_pane_g

0xcd4d,	// (0x0008a351) field_cale_ev_pane_t1_ParamLimits

0xcd4d,	// (0x0008a351) field_cale_ev_pane_t1

0x5ec0,	// (0x000834c4) field_cale_ev_content_pane_t1_ParamLimits

0x5ec0,	// (0x000834c4) field_cale_ev_content_pane_t1

0xb571,	// (0x00088b75) bg_button_pane_cp01

0x2682,	// (0x0007fc86) listscroll_cale_week_pane_ParamLimits

0x2694,	// (0x0007fc98) popup_toolbar_window_cp01

0xaa3b,	// (0x0008803f) listscroll_cale_week_pane_t1_ParamLimits

0x2682,	// (0x0007fc86) listscroll_cale_day_pane_ParamLimits

0x2694,	// (0x0007fc98) popup_toolbar_window_cp02

0xae4f,	// (0x00088453) listscroll_cale_day_pane_t1_ParamLimits

0x2682,	// (0x0007fc86) main_cale_month_pane_ParamLimits

0x55e0,	// (0x00082be4) popup_toolbar_window_cp03_ParamLimits

0x55e0,	// (0x00082be4) popup_toolbar_window_cp03

0x4f3c,	// (0x00082540) main_image_pane_g2_ParamLimits

0x4f3c,	// (0x00082540) main_image_pane_g2

0x4f48,	// (0x0008254c) main_image_pane_g3_ParamLimits

0x4f48,	// (0x0008254c) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0008caeb) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0008caeb) main_image_pane_g

0xb68b,	// (0x00088c8f) main_image_pane_t1_ParamLimits

0x4f54,	// (0x00082558) main_image_pane_t2_ParamLimits

0x4f54,	// (0x00082558) main_image_pane_t2

0x4f66,	// (0x0008256a) main_image_pane_t3_ParamLimits

0x4f66,	// (0x0008256a) main_image_pane_t3

0x4f78,	// (0x0008257c) main_image_pane_t4_ParamLimits

0x4f78,	// (0x0008257c) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0008caf2) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0008caf2) main_image_pane_t

0x4f8a,	// (0x0008258e) popup_image_details_window_cp01

0x4f94,	// (0x00082598) popup_toobar_trans_pane_cp01_ParamLimits

0x4f94,	// (0x00082598) popup_toobar_trans_pane_cp01

0x5551,	// (0x00082b55) popup_image_details_window_ParamLimits

0x5551,	// (0x00082b55) popup_image_details_window

0xc83f,	// (0x00089e43) popup_image_focus_window

0x587d,	// (0x00082e81) camera2_autofocus_pane_ParamLimits

0x587d,	// (0x00082e81) camera2_autofocus_pane

0xa162,	// (0x00087766) bg_popup_sub_pane_cp06

0xcd64,	// (0x0008a368) popup_image_focus_window_g1

0xcd6c,	// (0x0008a370) popup_image_focus_window_g2

0xcd74,	// (0x0008a378) popup_image_focus_window_g3

0xcd7c,	// (0x0008a380) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0008cd01) popup_image_focus_window_g

0xcd84,	// (0x0008a388) popup_image_focus_window_t1

0xcd92,	// (0x0008a396) popup_image_focus_window_t2

0xcda2,	// (0x0008a3a6) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0008cd0a) popup_image_focus_window_t

0xcdb0,	// (0x0008a3b4) camera2_autofocus_pane_g1

0xa8a8,	// (0x00087eac) bg_tb_trans_pane_cp01

0xcdbe,	// (0x0008a3c2) popup_image_details_window_g1

0xcdd1,	// (0x0008a3d5) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0008cd1c) popup_image_details_window_g

0xcdfa,	// (0x0008a3fe) popup_image_details_window_t1

0xce0c,	// (0x0008a410) popup_image_details_window_t2

0xce25,	// (0x0008a429) popup_image_details_window_t3

0xce39,	// (0x0008a43d) popup_image_details_window_t4

0xce54,	// (0x0008a458) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0008cd23) popup_image_details_window_t

0xa900,	// (0x00087f04) bg_calc_paper_pane_ParamLimits

0xa162,	// (0x00087766) grid_highlight_pane_cp013

0x2432,	// (0x0007fa36) list_calc_pane_ParamLimits

0x2444,	// (0x0007fa48) scroll_pane_cp024

0xa914,	// (0x00087f18) bg_calc_display_pane_ParamLimits

0x244c,	// (0x0007fa50) calc_display_pane_t1_ParamLimits

0x2461,	// (0x0007fa65) calc_display_pane_t2_ParamLimits

0x2476,	// (0x0007fa7a) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0008c755) calc_display_pane_t_ParamLimits

0x254a,	// (0x0007fb4e) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0008c772) cell_calc_pane_g

0x2553,	// (0x0007fb57) cell_calc_pane_t1

0xa973,	// (0x00087f77) grid_highlight_pane_cp02_ParamLimits

0xa989,	// (0x00087f8d) toolbar_button_pane_cp01_ParamLimits

0xa989,	// (0x00087f8d) toolbar_button_pane_cp01

0xb6d0,	// (0x00088cd4) temp_image_control_pane_ParamLimits

0xb6d0,	// (0x00088cd4) temp_image_control_pane

0xa8a8,	// (0x00087eac) main_mp3_pane

0xce6e,	// (0x0008a472) temp_image_control_pane_g1_ParamLimits

0xce6e,	// (0x0008a472) temp_image_control_pane_g1

0xce7c,	// (0x0008a480) temp_image_control_pane_g2_ParamLimits

0xce7c,	// (0x0008a480) temp_image_control_pane_g2

0xce8e,	// (0x0008a492) temp_image_control_pane_g3_ParamLimits

0xce8e,	// (0x0008a492) temp_image_control_pane_g3

0x5f0b,	// (0x0008350f) temp_image_control_pane_g4_ParamLimits

0x5f0b,	// (0x0008350f) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0008cd2e) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0008cd2e) temp_image_control_pane_g

0xce6e,	// (0x0008a472) main_mp3_pane_g1

0x5f1c,	// (0x00083520) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0008cd37) main_mp3_pane_g

0xced1,	// (0x0008a4d5) main_mp3_pane_t1

0xaad2,	// (0x000880d6) main_camera_pane_g8_ParamLimits

0xaad2,	// (0x000880d6) main_camera_pane_g8

0x3102,	// (0x00080706) main_video_pane_g7_ParamLimits

0x3102,	// (0x00080706) main_video_pane_g7

0x59c0,	// (0x00082fc4) main_camera2_pane_t7_ParamLimits

0x59c0,	// (0x00082fc4) main_camera2_pane_t7

0xac1e,	// (0x00088222) scroll_pane_cp025_ParamLimits

0xac1e,	// (0x00088222) scroll_pane_cp025

0xac32,	// (0x00088236) scroll_pane_cp026_ParamLimits

0xac32,	// (0x00088236) scroll_pane_cp026

0xac41,	// (0x00088245) wml_content_pane_ParamLimits

0xa162,	// (0x00087766) main_touch_calib_pane

0x5fc0,	// (0x000835c4) main_touch_calib_pane_g1

0x5fcc,	// (0x000835d0) main_touch_calib_pane_g2

0x5fd8,	// (0x000835dc) main_touch_calib_pane_g3

0x5fe4,	// (0x000835e8) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0008cd55) main_touch_calib_pane_g

0x5ff0,	// (0x000835f4) main_touch_calib_pane_t1

0x6007,	// (0x0008360b) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0008cd5e) main_touch_calib_pane_t

0xb341,	// (0x00088945) mup_progress_pane_cp02

0xb360,	// (0x00088964) navi_pane_g1

0xb3c2,	// (0x000889c6) navi_pane_mp_t3

0xa8a8,	// (0x00087eac) main_mp3_pane_ParamLimits

0x5622,	// (0x00082c26) navi_pane_ParamLimits

0xce6e,	// (0x0008a472) main_mp3_pane_g1_ParamLimits

0x5f1c,	// (0x00083520) main_mp3_pane_g2_ParamLimits

0x5f28,	// (0x0008352c) main_mp3_pane_g3_ParamLimits

0x5f28,	// (0x0008352c) main_mp3_pane_g3

0x5f34,	// (0x00083538) main_mp3_pane_g4_ParamLimits

0x5f34,	// (0x00083538) main_mp3_pane_g4

0xce9e,	// (0x0008a4a2) main_mp3_pane_g5_ParamLimits

0xce9e,	// (0x0008a4a2) main_mp3_pane_g5

0xceac,	// (0x0008a4b0) main_mp3_pane_g6_ParamLimits

0xceac,	// (0x0008a4b0) main_mp3_pane_g6

0xceb9,	// (0x0008a4bd) main_mp3_pane_g7_ParamLimits

0xceb9,	// (0x0008a4bd) main_mp3_pane_g7

0xcec5,	// (0x0008a4c9) main_mp3_pane_g8_ParamLimits

0xcec5,	// (0x0008a4c9) main_mp3_pane_g8

0xf733,	// (0x0008cd37) main_mp3_pane_g_ParamLimits

0x5f40,	// (0x00083544) main_mp3_pane_t2

0x5f50,	// (0x00083554) main_mp3_pane_t3

0xcedf,	// (0x0008a4e3) main_mp3_pane_t4

0xceed,	// (0x0008a4f1) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0008cd48) main_mp3_pane_t

0xcefb,	// (0x0008a4ff) mup_progress_pane_cp01

0x0b48,	// (0x0007e14c) aid_zoom_text_secondary2

0xccf1,	// (0x0008a2f5) list_cale_ev2_pane

0xccf9,	// (0x0008a2fd) scroll_pane_cp023_ParamLimits

0xe61d,	// (0x0008bc21) field_cale_ev2_pane_ParamLimits

0xe61d,	// (0x0008bc21) field_cale_ev2_pane

0x6062,	// (0x00083666) field_cale_ev2_pane_g1_ParamLimits

0x6062,	// (0x00083666) field_cale_ev2_pane_g1

0x606e,	// (0x00083672) field_cale_ev2_pane_g2_ParamLimits

0x606e,	// (0x00083672) field_cale_ev2_pane_g2

0x6086,	// (0x0008368a) field_cale_ev2_pane_g3_ParamLimits

0x6086,	// (0x0008368a) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0008cd69) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0008cd69) field_cale_ev2_pane_g

0x0e26,	// (0x0007e42a) field_cale_ev2_pane_t1_ParamLimits

0x0e26,	// (0x0007e42a) field_cale_ev2_pane_t1

0x0e3d,	// (0x0007e441) field_cale_ev2_pane_t2_ParamLimits

0x0e3d,	// (0x0007e441) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0008cd72) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0008cd72) field_cale_ev2_pane_t

0x4e1b,	// (0x0008241f) main_postcard_pane_g5_ParamLimits

0x4e1b,	// (0x0008241f) main_postcard_pane_g5

0x4e29,	// (0x0008242d) main_postcard_pane_g6_ParamLimits

0x4e29,	// (0x0008242d) main_postcard_pane_g6

0x2f40,	// (0x00080544) camera2_autofocus_pane_cp_ParamLimits

0x2f40,	// (0x00080544) camera2_autofocus_pane_cp

0xa8a8,	// (0x00087eac) main_mup3_pane

0x60ca,	// (0x000836ce) main_mup3_pane_g1_ParamLimits

0x60ca,	// (0x000836ce) main_mup3_pane_g1

0x60eb,	// (0x000836ef) main_mup3_pane_g2_ParamLimits

0x60eb,	// (0x000836ef) main_mup3_pane_g2

0x6167,	// (0x0008376b) main_mup3_pane_g3_ParamLimits

0x6167,	// (0x0008376b) main_mup3_pane_g3

0x61ac,	// (0x000837b0) main_mup3_pane_g4_ParamLimits

0x61ac,	// (0x000837b0) main_mup3_pane_g4

0x61ef,	// (0x000837f3) main_mup3_pane_g5_ParamLimits

0x61ef,	// (0x000837f3) main_mup3_pane_g5

0x6234,	// (0x00083838) main_mup3_pane_g6_ParamLimits

0x6234,	// (0x00083838) main_mup3_pane_g6

0xcf03,	// (0x0008a507) main_mup3_pane_g7_ParamLimits

0xcf03,	// (0x0008a507) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0008cd82) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0008cd82) main_mup3_pane_g

0x62aa,	// (0x000838ae) main_mup3_pane_t1_ParamLimits

0x62aa,	// (0x000838ae) main_mup3_pane_t1

0x6313,	// (0x00083917) main_mup3_pane_t2_ParamLimits

0x6313,	// (0x00083917) main_mup3_pane_t2

0x63dc,	// (0x000839e0) main_mup3_pane_t4_ParamLimits

0x63dc,	// (0x000839e0) main_mup3_pane_t4

0x6430,	// (0x00083a34) main_mup3_pane_t5_ParamLimits

0x6430,	// (0x00083a34) main_mup3_pane_t5

0x64de,	// (0x00083ae2) main_mup3_pane_t6_ParamLimits

0x64de,	// (0x00083ae2) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0008cd93) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0008cd93) main_mup3_pane_t

0x658a,	// (0x00083b8e) mup3_progress_pane_ParamLimits

0x658a,	// (0x00083b8e) mup3_progress_pane

0x6604,	// (0x00083c08) popup_mup3_control_window_ParamLimits

0x6604,	// (0x00083c08) popup_mup3_control_window

0xcf11,	// (0x0008a515) popup_mup3_text_window

0x6621,	// (0x00083c25) mup3_progress_pane_t1

0x6640,	// (0x00083c44) mup3_progress_pane_t2

0xcf19,	// (0x0008a51d) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0008cda0) mup3_progress_pane_t

0xcf36,	// (0x0008a53a) mup_progress_pane_cp03

0xa162,	// (0x00087766) bg_tb_trans_pane_cp04

0x665f,	// (0x00083c63) mup3_volume_pane

0x6667,	// (0x00083c6b) popup_mup3_control_window_g1

0xdb7b,	// (0x0008b17f) mup3_volume_pane_g1

0xdb84,	// (0x0008b188) mup3_volume_pane_g2

0xdb8d,	// (0x0008b191) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0008cda7) mup3_volume_pane_g

0xa162,	// (0x00087766) bg_tb_trans_pane_cp03

0xcf46,	// (0x0008a54a) popup_mup3_text_window_g1

0xcf4e,	// (0x0008a552) popup_mup3_text_window_t1

0xa95c,	// (0x00087f60) list_calc_item_pane_g1_ParamLimits

0xc9bb,	// (0x00089fbf) mup_volume_pane_cp_g1

0x6020,	// (0x00083624) main_touch_calib_pane_t3

0x6036,	// (0x0008363a) main_touch_calib_pane_t4

0x604c,	// (0x00083650) main_touch_calib_pane_t5

0xa16c,	// (0x00087770) aid_cell_size_toolbar2

0xa174,	// (0x00087778) aid_popup3_width_pane

0x0b38,	// (0x0007e13c) aid_zoom_text_msg_primary

0x2f13,	// (0x00080517) vorec_t7

0xa920,	// (0x00087f24) bg_calc_paper_pane_g1_ParamLimits

0xa92c,	// (0x00087f30) bg_calc_paper_pane_g2_ParamLimits

0xa938,	// (0x00087f3c) bg_calc_paper_pane_g3_ParamLimits

0xa944,	// (0x00087f48) bg_calc_paper_pane_g4_ParamLimits

0xa950,	// (0x00087f54) bg_calc_paper_pane_g5_ParamLimits

0x24b7,	// (0x0007fabb) bg_calc_paper_pane_g6_ParamLimits

0x24c8,	// (0x0007facc) bg_calc_paper_pane_g7_ParamLimits

0x24d9,	// (0x0007fadd) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0008c75c) bg_calc_paper_pane_g_ParamLimits

0x24ec,	// (0x0007faf0) calc_bg_paper_pane_g9_ParamLimits

0x3031,	// (0x00080635) image_qvga_pane_ParamLimits

0x3031,	// (0x00080635) image_qvga_pane

0xa821,	// (0x00087e25) bg_popup_sub_pane_cp04_ParamLimits

0xb607,	// (0x00088c0b) popup_mup_playback_window_g1_ParamLimits

0xb613,	// (0x00088c17) popup_mup_playback_window_t1_ParamLimits

0xb628,	// (0x00088c2c) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0008cae6) popup_mup_playback_window_t_ParamLimits

0x5aef,	// (0x000830f3) main_mup2_pane_g3_ParamLimits

0x5aef,	// (0x000830f3) main_mup2_pane_g3

0x32f5,	// (0x000808f9) popup_toolbar_window_cp04

0xba23,	// (0x00089027) popup_call2_audio_second_window_g3_ParamLimits

0xba23,	// (0x00089027) popup_call2_audio_second_window_g3

0xbe2d,	// (0x00089431) popup_call2_audio_first_window_g4_ParamLimits

0xbe2d,	// (0x00089431) popup_call2_audio_first_window_g4

0xc4ac,	// (0x00089ab0) popup_call2_audio_in_window_g4_ParamLimits

0xc4ac,	// (0x00089ab0) popup_call2_audio_in_window_g4

0x4f2f,	// (0x00082533) aid_area_sk_bg_cut_ParamLimits

0x4f2f,	// (0x00082533) aid_area_sk_bg_cut

0xb63d,	// (0x00088c41) aid_area_sk_bg_cut_2_ParamLimits

0xb63d,	// (0x00088c41) aid_area_sk_bg_cut_2

0x5e72,	// (0x00083476) aid_placing_details_win

0x5e7a,	// (0x0008347e) aid_placing_details_win_2

0xcdb0,	// (0x0008a3b4) camera2_autofocus_pane_g1_ParamLimits

0x2076,	// (0x0007f67a) popup_fixed_preview_cale_window_ParamLimits

0x2076,	// (0x0007f67a) popup_fixed_preview_cale_window

0xb409,	// (0x00088a0d) navi_slider_pane_g3

0xb412,	// (0x00088a16) navi_slider_pane_g4

0xb41b,	// (0x00088a1f) navi_slider_pane_g5

0xb409,	// (0x00088a0d) navi_slider_pane_g6

0x482a,	// (0x00081e2e) navi_slider_pane_g7

0xb53e,	// (0x00088b42) mup_scale_pane_g3

0xb547,	// (0x00088b4b) mup_scale_pane_g4

0xb550,	// (0x00088b54) mup_scale_pane_g5

0x4cad,	// (0x000822b1) mup_scale_pane_g6

0x4cb6,	// (0x000822ba) mup_scale_pane_g7

0xb409,	// (0x00088a0d) cams2_slider_pane_g3

0xca3d,	// (0x0008a041) cams2_slider_pane_g4

0x5dd2,	// (0x000833d6) cams2_slider_pane_g5

0xb409,	// (0x00088a0d) cams2_slider_pane_g6

0x5dda,	// (0x000833de) cams2_slider_pane_g7

0xcc6e,	// (0x0008a272) camera2_autofocus_pane_cp_g1

0xc811,	// (0x00089e15) bg_popup_preview_window_pane_cp02_ParamLimits

0xc811,	// (0x00089e15) bg_popup_preview_window_pane_cp02

0xcf5c,	// (0x0008a560) list_fp_cale_pane_ParamLimits

0xcf5c,	// (0x0008a560) list_fp_cale_pane

0xcf68,	// (0x0008a56c) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf68,	// (0x0008a56c) popup_fixed_preview_cale_window_t1

0x6670,	// (0x00083c74) popup_fixed_preview_cale_window_t2_ParamLimits

0x6670,	// (0x00083c74) popup_fixed_preview_cale_window_t2

0x6685,	// (0x00083c89) popup_fixed_preview_cale_window_t3_ParamLimits

0x6685,	// (0x00083c89) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0008cdae) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0008cdae) popup_fixed_preview_cale_window_t

0x669a,	// (0x00083c9e) list_single_fp_cale_pane_ParamLimits

0x669a,	// (0x00083c9e) list_single_fp_cale_pane

0xcf86,	// (0x0008a58a) list_single_fp_cale_pane_g1_ParamLimits

0xcf86,	// (0x0008a58a) list_single_fp_cale_pane_g1

0xcf92,	// (0x0008a596) list_single_fp_cale_pane_g2_ParamLimits

0xcf92,	// (0x0008a596) list_single_fp_cale_pane_g2

0x0002,

0x0382,	// (0x0007d986) list_single_fp_cale_pane_g_ParamLimits

0x0382,	// (0x0007d986) list_single_fp_cale_pane_g

0xcfab,	// (0x0008a5af) list_single_fp_cale_pane_t1_ParamLimits

0xcfab,	// (0x0008a5af) list_single_fp_cale_pane_t1

0xcfbd,	// (0x0008a5c1) list_single_fp_cale_pane_t2_ParamLimits

0xcfbd,	// (0x0008a5c1) list_single_fp_cale_pane_t2

0x0001,

0x0389,	// (0x0007d98d) list_single_fp_cale_pane_t_ParamLimits

0x0389,	// (0x0007d98d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa162,	// (0x00087766) main_dialer_pane

0x66aa,	// (0x00083cae) aid_cell_size_keypad

0x66b4,	// (0x00083cb8) dialer_ne_pane

0x66be,	// (0x00083cc2) grid_dialer_command_1_pane

0x66c6,	// (0x00083cca) grid_dialer_command_2_pane

0x66ce,	// (0x00083cd2) grid_dialer_keypad_pane

0x66e2,	// (0x00083ce6) bg_popup_call_pane_cp06_ParamLimits

0x66e2,	// (0x00083ce6) bg_popup_call_pane_cp06

0x66ee,	// (0x00083cf2) dialer_ne_clear_pane_ParamLimits

0x66ee,	// (0x00083cf2) dialer_ne_clear_pane

0xcff0,	// (0x0008a5f4) dialer_ne_pane_g1

0xcff8,	// (0x0008a5fc) dialer_ne_pane_t1_ParamLimits

0xcff8,	// (0x0008a5fc) dialer_ne_pane_t1

0x66fa,	// (0x00083cfe) dialer_ne_pane_t2_ParamLimits

0x66fa,	// (0x00083cfe) dialer_ne_pane_t2

0x6717,	// (0x00083d1b) dialer_ne_pane_t3_ParamLimits

0x6717,	// (0x00083d1b) dialer_ne_pane_t3

0x0002,

0xf7b1,	// (0x0008cdb5) dialer_ne_pane_t_ParamLimits

0xf7b1,	// (0x0008cdb5) dialer_ne_pane_t

0x673b,	// (0x00083d3f) dialer_ne_pane_t3_copy1_ParamLimits

0x673b,	// (0x00083d3f) dialer_ne_pane_t3_copy1

0x675f,	// (0x00083d63) cell_dialer_keypad_pane_ParamLimits

0x675f,	// (0x00083d63) cell_dialer_keypad_pane

0x6776,	// (0x00083d7a) cell_dialer_command_1_pane_ParamLimits

0x6776,	// (0x00083d7a) cell_dialer_command_1_pane

0x678c,	// (0x00083d90) cell_dialer_command_2_pane_ParamLimits

0x678c,	// (0x00083d90) cell_dialer_command_2_pane

0xd00a,	// (0x0008a60e) bg_button_pane_cp02_ParamLimits

0xd00a,	// (0x0008a60e) bg_button_pane_cp02

0x679b,	// (0x00083d9f) cell_dialer_keypad_pane_g1_ParamLimits

0x679b,	// (0x00083d9f) cell_dialer_keypad_pane_g1

0xd00a,	// (0x0008a60e) bg_button_pane_cp03_ParamLimits

0xd00a,	// (0x0008a60e) bg_button_pane_cp03

0x67b0,	// (0x00083db4) cell_dialer_command_1_pane_g1_ParamLimits

0x67b0,	// (0x00083db4) cell_dialer_command_1_pane_g1

0xd016,	// (0x0008a61a) bg_button_pane_cp04

0x67c4,	// (0x00083dc8) cell_dialer_command_2_pane_g1

0xaaca,	// (0x000880ce) bg_button_pane_cp06

0xd01e,	// (0x0008a622) dialer_ne_clear_pane_g1

0x4765,	// (0x00081d69) navi_pane_g2

0x4793,	// (0x00081d97) navi_pane_g3

0x0002,

0xf3e5,	// (0x0008c9e9) navi_pane_g

0x47be,	// (0x00081dc2) navi_pane_mv_g2

0x47e5,	// (0x00081de9) navi_pane_mv_g5

0x47ed,	// (0x00081df1) navi_pane_mv_t1

0xa914,	// (0x00087f18) main_clock2_pane

0x6802,	// (0x00083e06) main_clock2_list_pane_ParamLimits

0x6802,	// (0x00083e06) main_clock2_list_pane

0x682c,	// (0x00083e30) main_clock2_pane_t1_ParamLimits

0x682c,	// (0x00083e30) main_clock2_pane_t1

0x684e,	// (0x00083e52) main_clock2_pane_t2_ParamLimits

0x684e,	// (0x00083e52) main_clock2_pane_t2

0x0004,

0xf7b8,	// (0x0008cdbc) main_clock2_pane_t_ParamLimits

0xf7b8,	// (0x0008cdbc) main_clock2_pane_t

0x68ab,	// (0x00083eaf) popup_clock_analogue_window_cp03_ParamLimits

0x68ab,	// (0x00083eaf) popup_clock_analogue_window_cp03

0x68cb,	// (0x00083ecf) popup_clock_digital_window_cp02_ParamLimits

0x68cb,	// (0x00083ecf) popup_clock_digital_window_cp02

0x693c,	// (0x00083f40) main_clock2_list_single_pane_ParamLimits

0x693c,	// (0x00083f40) main_clock2_list_single_pane

0xaaca,	// (0x000880ce) list_highlight_pane_cp05

0xd05a,	// (0x0008a65e) main_clock2_list_single_pane_t1

0x32f5,	// (0x000808f9) popup_toolbar_window_cp04_ParamLimits

0x5edb,	// (0x000834df) camera2_autofocus_pane_g2_ParamLimits

0x5edb,	// (0x000834df) camera2_autofocus_pane_g2

0x5ee7,	// (0x000834eb) camera2_autofocus_pane_g3_ParamLimits

0x5ee7,	// (0x000834eb) camera2_autofocus_pane_g3

0x5ef3,	// (0x000834f7) camera2_autofocus_pane_g4_ParamLimits

0x5ef3,	// (0x000834f7) camera2_autofocus_pane_g4

0x5eff,	// (0x00083503) camera2_autofocus_pane_g5_ParamLimits

0x5eff,	// (0x00083503) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0008cd11) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0008cd11) camera2_autofocus_pane_g

0x60aa,	// (0x000836ae) camera2_autofocus_pane_cp_g2

0x60b2,	// (0x000836b6) camera2_autofocus_pane_cp_g3

0x60ba,	// (0x000836be) camera2_autofocus_pane_cp_g4

0x60c2,	// (0x000836c6) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0008cd77) camera2_autofocus_pane_cp_g

0x66da,	// (0x00083cde) popup_dialer_spcha_window

0xa162,	// (0x00087766) bg_popup_sub_pane_cp07

0xd068,	// (0x0008a66c) list_spcha_pane

0xd070,	// (0x0008a674) list_single_spcha_pane_ParamLimits

0xd070,	// (0x0008a674) list_single_spcha_pane

0xa162,	// (0x00087766) list_highlight_pane_cp06

0xd081,	// (0x0008a685) list_single_spcha_pane_t1

0xc256,	// (0x0008985a) popup_call2_audio_out_window_g4_ParamLimits

0xc256,	// (0x0008985a) popup_call2_audio_out_window_g4

0xa162,	// (0x00087766) main_imed2_pane

0xc849,	// (0x00089e4d) popup_imed_adjust2_window

0x555f,	// (0x00082b63) popup_imed_trans_window_ParamLimits

0x555f,	// (0x00082b63) popup_imed_trans_window

0xcaa6,	// (0x0008a0aa) popup_blid_sat_info2_window_t1

0xcab4,	// (0x0008a0b8) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0008cca6) popup_blid_sat_info2_window_t

0x69e6,	// (0x00083fea) aid_size_cell_colour_35

0x6a00,	// (0x00084004) aid_size_cell_colour_112

0x6a17,	// (0x0008401b) aid_size_cell_effect

0xa8a8,	// (0x00087eac) bg_tb_trans_pane_cp02

0xb05d,	// (0x00088661) heading_imed_pane

0x6a31,	// (0x00084035) listscroll_imed_pane

0xd08f,	// (0x0008a693) heading_imed_pane_g1

0xd097,	// (0x0008a69b) heading_imed_pane_t1

0xd0a5,	// (0x0008a6a9) grid_imed_colour_35_pane_ParamLimits

0xd0a5,	// (0x0008a6a9) grid_imed_colour_35_pane

0x6a3d,	// (0x00084041) grid_imed_effect_pane

0xd0c1,	// (0x0008a6c5) list_imed_aspect_pane

0x6a4d,	// (0x00084051) scroll_pane_cp027_ParamLimits

0x6a4d,	// (0x00084051) scroll_pane_cp027

0x6a59,	// (0x0008405d) cell_imed_effect_pane_ParamLimits

0x6a59,	// (0x0008405d) cell_imed_effect_pane

0xd0c9,	// (0x0008a6cd) cell_imed_colour_pane_ParamLimits

0xd0c9,	// (0x0008a6cd) cell_imed_colour_pane

0xd11b,	// (0x0008a71f) cell_imed_colour_pane_g1_ParamLimits

0xd11b,	// (0x0008a71f) cell_imed_colour_pane_g1

0xd12c,	// (0x0008a730) hgihlgiht_grid_pane_cp016_ParamLimits

0xd12c,	// (0x0008a730) hgihlgiht_grid_pane_cp016

0x6a75,	// (0x00084079) cell_imed_effect_pane_g1

0x6a7d,	// (0x00084081) grid_highlight_pane_cp017

0xd13d,	// (0x0008a741) list_imed_single_pane_ParamLimits

0xd13d,	// (0x0008a741) list_imed_single_pane

0xa162,	// (0x00087766) list_highlight_pane_cp07

0xd151,	// (0x0008a755) list_imed_aspect_pane_comp1_t1

0xc81d,	// (0x00089e21) bg_tb_trans_pane_cp05

0xd173,	// (0x0008a777) popup_imed_adjust2_window_g1

0xd19a,	// (0x0008a79e) popup_imed_adjust2_window_t1

0xd1b2,	// (0x0008a7b6) slider_imed_adjust_pane

0xd1c6,	// (0x0008a7ca) slider_imed_adjust_pane_g1

0xd1d6,	// (0x0008a7da) slider_imed_adjust_pane_g2

0xd1e6,	// (0x0008a7ea) slider_imed_adjust_pane_g3

0xd1f7,	// (0x0008a7fb) slider_imed_adjust_pane_g4

0x0003,

0xf7d5,	// (0x0008cdd9) slider_imed_adjust_pane_g

0x6a86,	// (0x0008408a) aid_size_cell_clipart2

0x6a92,	// (0x00084096) grid_imed_clipart_pane

0xd208,	// (0x0008a80c) scroll_pane_cp031

0x6a9c,	// (0x000840a0) cell_imed_clipart_pane_ParamLimits

0x6a9c,	// (0x000840a0) cell_imed_clipart_pane

0x6aba,	// (0x000840be) cell_imed_clipart_pane_g1

0xa162,	// (0x00087766) grid_highlight_pane_cp014

0x680e,	// (0x00083e12) main_clock2_pane_g1_ParamLimits

0x680e,	// (0x00083e12) main_clock2_pane_g1

0x68e7,	// (0x00083eeb) aid_call2_pane_cp10

0x68f9,	// (0x00083efd) aid_call_pane_cp10

0xb335,	// (0x00088939) popup_clock_analogue_window_cp10_g1

0xb335,	// (0x00088939) popup_clock_analogue_window_cp10_g2

0x690b,	// (0x00083f0f) popup_clock_analogue_window_cp10_g3

0x690b,	// (0x00083f0f) popup_clock_analogue_window_cp10_g4

0xb335,	// (0x00088939) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7c3,	// (0x0008cdc7) popup_clock_analogue_window_cp10_g

0x691d,	// (0x00083f21) popup_clock_analogue_window_cp10_t1

0x694e,	// (0x00083f52) clock_digital_number_pane_cp10_ParamLimits

0x694e,	// (0x00083f52) clock_digital_number_pane_cp10

0x6966,	// (0x00083f6a) clock_digital_number_pane_cp11_ParamLimits

0x6966,	// (0x00083f6a) clock_digital_number_pane_cp11

0x697e,	// (0x00083f82) clock_digital_number_pane_cp12_ParamLimits

0x697e,	// (0x00083f82) clock_digital_number_pane_cp12

0x6996,	// (0x00083f9a) clock_digital_number_pane_cp13_ParamLimits

0x6996,	// (0x00083f9a) clock_digital_number_pane_cp13

0x69ae,	// (0x00083fb2) clock_digital_separator_pane_cp10_ParamLimits

0x69ae,	// (0x00083fb2) clock_digital_separator_pane_cp10

0x69c6,	// (0x00083fca) popup_clock_digital_window_cp02_t1_ParamLimits

0x69c6,	// (0x00083fca) popup_clock_digital_window_cp02_t1

0xa819,	// (0x00087e1d) clock_digital_number_pane_cp10_g1

0xa819,	// (0x00087e1d) clock_digital_number_pane_cp10_g2

0x0001,

0xf7de,	// (0x0008cde2) clock_digital_number_pane_cp10_g

0xa819,	// (0x00087e1d) clock_digital_separator_pane_cp10_g1

0xa819,	// (0x00087e1d) clock_digital_separator_pane_g2_cp10

0xb3d0,	// (0x000889d4) navi_pane_vded_g4

0xb3d9,	// (0x000889dd) navi_pane_vded_g5

0xb3e2,	// (0x000889e6) navi_pane_vded_t1

0xa162,	// (0x00087766) main_vded_pane

0x6ac3,	// (0x000840c7) main_vded_pane_g1

0x6acf,	// (0x000840d3) main_vded_pane_g2

0x6ad9,	// (0x000840dd) main_vded_pane_g3

0x0002,

0xf7e3,	// (0x0008cde7) main_vded_pane_g

0x6ae3,	// (0x000840e7) main_vded_pane_t1

0x6af1,	// (0x000840f5) main_vded_pane_t2

0x0001,

0xf7ea,	// (0x0008cdee) main_vded_pane_t

0x6aff,	// (0x00084103) vded_slider_pane

0x6b09,	// (0x0008410d) vded_video_pane

0xd210,	// (0x0008a814) vded_video_pane_g1

0x6b15,	// (0x00084119) vded_video_pane_g2

0xcc6e,	// (0x0008a272) vded_video_pane_g3

0x0002,

0xf7ef,	// (0x0008cdf3) vded_video_pane_g

0xd21a,	// (0x0008a81e) vded_slider_pane_g1

0xc9bb,	// (0x00089fbf) vded_slider_pane_g2

0xd223,	// (0x0008a827) vded_slider_pane_g3

0xd22c,	// (0x0008a830) vded_slider_pane_g4

0xd235,	// (0x0008a839) vded_slider_pane_g5

0x0004,

0xf7f6,	// (0x0008cdfa) vded_slider_pane_g

0x65f8,	// (0x00083bfc) mup3_rocker_pane_ParamLimits

0x65f8,	// (0x00083bfc) mup3_rocker_pane

0x6b1e,	// (0x00084122) mup3_control_keys_pane_g1

0x6b26,	// (0x0008412a) mup3_control_keys_pane_g2

0x6b2e,	// (0x00084132) mup3_control_keys_pane_g3

0x6b36,	// (0x0008413a) mup3_control_keys_pane_g4

0x0003,

0xf801,	// (0x0008ce05) mup3_control_keys_pane_g

0x2094,	// (0x0007f698) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2094,	// (0x0007f698) popup_toolbar2_fixed_window_cp01

0x6614,	// (0x00083c18) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6614,	// (0x00083c18) popup_toolbar2_fixed_window_cp02

0xbb95,	// (0x00089199) popup_call2_audio_second_window_t4_ParamLimits

0xbb95,	// (0x00089199) popup_call2_audio_second_window_t4

0xc0c3,	// (0x000896c7) popup_call2_audio_first_window_t6_ParamLimits

0xc0c3,	// (0x000896c7) popup_call2_audio_first_window_t6

0xc359,	// (0x0008995d) popup_call2_audio_out_window_t6_ParamLimits

0xc359,	// (0x0008995d) popup_call2_audio_out_window_t6

0xa162,	// (0x00087766) main_vitu_pane

0x6b46,	// (0x0008414a) aid_size_cell_itu_ParamLimits

0x6b46,	// (0x0008414a) aid_size_cell_itu

0x20c6,	// (0x0007f6ca) bg_popup_window_pane_cp08_ParamLimits

0x20c6,	// (0x0007f6ca) bg_popup_window_pane_cp08

0x6b54,	// (0x00084158) field_vitu_entry_pane_ParamLimits

0x6b54,	// (0x00084158) field_vitu_entry_pane

0x6b63,	// (0x00084167) grid_vitu_function_pane_ParamLimits

0x6b63,	// (0x00084167) grid_vitu_function_pane

0x6b73,	// (0x00084177) grid_vitu_itu_pane_ParamLimits

0x6b73,	// (0x00084177) grid_vitu_itu_pane

0x6b83,	// (0x00084187) cell_vitu_itu_pane_ParamLimits

0x6b83,	// (0x00084187) cell_vitu_itu_pane

0x6b9a,	// (0x0008419e) cell_vitu_function_pane_ParamLimits

0x6b9a,	// (0x0008419e) cell_vitu_function_pane

0xa8a8,	// (0x00087eac) bg_popup_sub_pane_cp08_ParamLimits

0xa8a8,	// (0x00087eac) bg_popup_sub_pane_cp08

0x6bae,	// (0x000841b2) field_vitu_entry_pane_t1_ParamLimits

0x6bae,	// (0x000841b2) field_vitu_entry_pane_t1

0xd256,	// (0x0008a85a) field_vitu_entry_pane_t2_ParamLimits

0xd256,	// (0x0008a85a) field_vitu_entry_pane_t2

0x0001,

0xf80f,	// (0x0008ce13) field_vitu_entry_pane_t_ParamLimits

0xf80f,	// (0x0008ce13) field_vitu_entry_pane_t

0xd273,	// (0x0008a877) bg_button_pane_cp05_ParamLimits

0xd273,	// (0x0008a877) bg_button_pane_cp05

0x6bc8,	// (0x000841cc) cell_vitu_itu_pane_g1

0x6be0,	// (0x000841e4) cell_vitu_itu_pane_t1_ParamLimits

0x6be0,	// (0x000841e4) cell_vitu_itu_pane_t1

0x6bf2,	// (0x000841f6) cell_vitu_itu_pane_t2_ParamLimits

0x6bf2,	// (0x000841f6) cell_vitu_itu_pane_t2

0x0002,

0xf814,	// (0x0008ce18) cell_vitu_itu_pane_t_ParamLimits

0xf814,	// (0x0008ce18) cell_vitu_itu_pane_t

0xd281,	// (0x0008a885) bg_button_pane_cp07

0x6c35,	// (0x00084239) cell_vitu_function_pane_g1

0x2359,	// (0x0007f95d) main_calc_pane_g1

0x1e98,	// (0x0007f49c) aid_visual_content_pane

0xa162,	// (0x00087766) main_vradio_pane

0x6c3e,	// (0x00084242) main_vradio_pane_g1_ParamLimits

0x6c3e,	// (0x00084242) main_vradio_pane_g1

0xd28b,	// (0x0008a88f) main_vradio_pane_g2_ParamLimits

0xd28b,	// (0x0008a88f) main_vradio_pane_g2

0x0001,

0xf81b,	// (0x0008ce1f) main_vradio_pane_g_ParamLimits

0xf81b,	// (0x0008ce1f) main_vradio_pane_g

0x6c4c,	// (0x00084250) main_vradio_pane_t1_ParamLimits

0x6c4c,	// (0x00084250) main_vradio_pane_t1

0x6c5e,	// (0x00084262) main_vradio_pane_t2_ParamLimits

0x6c5e,	// (0x00084262) main_vradio_pane_t2

0xd298,	// (0x0008a89c) main_vradio_pane_t3_ParamLimits

0xd298,	// (0x0008a89c) main_vradio_pane_t3

0x0002,

0xf820,	// (0x0008ce24) main_vradio_pane_t_ParamLimits

0xf820,	// (0x0008ce24) main_vradio_pane_t

0x6c70,	// (0x00084274) vradio_rocker_control_pane_ParamLimits

0x6c70,	// (0x00084274) vradio_rocker_control_pane

0x6c7c,	// (0x00084280) vradio_station_info_pane_ParamLimits

0x6c7c,	// (0x00084280) vradio_station_info_pane

0xd2ac,	// (0x0008a8b0) vradio_frequency_info_pane_ParamLimits

0xd2ac,	// (0x0008a8b0) vradio_frequency_info_pane

0xcc6e,	// (0x0008a272) vradio_station_info_pane_g1

0xd2bb,	// (0x0008a8bf) vradio_station_info_pane_t1_ParamLimits

0xd2bb,	// (0x0008a8bf) vradio_station_info_pane_t1

0xd2dd,	// (0x0008a8e1) vradio_station_info_pane_t2_ParamLimits

0xd2dd,	// (0x0008a8e1) vradio_station_info_pane_t2

0x0001,

0xf827,	// (0x0008ce2b) vradio_station_info_pane_t_ParamLimits

0xf827,	// (0x0008ce2b) vradio_station_info_pane_t

0xd2ef,	// (0x0008a8f3) vradio_tuning_pane

0xd2f7,	// (0x0008a8fb) vradio_rocker_control_pane_g1

0xd2ff,	// (0x0008a903) vradio_rocker_control_pane_g2

0xd307,	// (0x0008a90b) vradio_rocker_control_pane_g3

0xd30f,	// (0x0008a913) vradio_rocker_control_pane_g4

0xd317,	// (0x0008a91b) vradio_rocker_control_pane_g5

0x0004,

0xf82c,	// (0x0008ce30) vradio_rocker_control_pane_g

0x6c89,	// (0x0008428d) vradio_frequency_info_pane_g1

0xd31f,	// (0x0008a923) vradio_frequency_info_pane_t1_ParamLimits

0xd31f,	// (0x0008a923) vradio_frequency_info_pane_t1

0x6c93,	// (0x00084297) vradio_tuning_pane_g1

0x6c9e,	// (0x000842a2) vradio_tuning_pane_t1

0xa180,	// (0x00087784) area_side_right_pane_ParamLimits

0xa180,	// (0x00087784) area_side_right_pane

0xc7d8,	// (0x00089ddc) status_small_pane_g1

0xc7e0,	// (0x00089de4) status_small_pane_g2

0xc7e9,	// (0x00089ded) status_small_pane_g3

0xc7f2,	// (0x00089df6) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0008cbfc) status_small_pane_g

0xc7fb,	// (0x00089dff) status_small_pane_t1

0xa162,	// (0x00087766) main_video3_pane

0xd333,	// (0x0008a937) cams_zoom_vslider_pane

0xd33b,	// (0x0008a93f) image3_wide_pane_ParamLimits

0xd33b,	// (0x0008a93f) image3_wide_pane

0xd355,	// (0x0008a959) image3_wide_small_pane

0xd361,	// (0x0008a965) main_video3_pane_g1_ParamLimits

0xd361,	// (0x0008a965) main_video3_pane_g1

0xd37d,	// (0x0008a981) main_video3_pane_g2_ParamLimits

0xd37d,	// (0x0008a981) main_video3_pane_g2

0x0001,

0xf837,	// (0x0008ce3b) main_video3_pane_g_ParamLimits

0xf837,	// (0x0008ce3b) main_video3_pane_g

0xd399,	// (0x0008a99d) main_video3_pane_t1_ParamLimits

0xd399,	// (0x0008a99d) main_video3_pane_t1

0xd3c4,	// (0x0008a9c8) main_video3_pane_t2_ParamLimits

0xd3c4,	// (0x0008a9c8) main_video3_pane_t2

0xd3f1,	// (0x0008a9f5) main_video3_pane_t3_ParamLimits

0xd3f1,	// (0x0008a9f5) main_video3_pane_t3

0x0002,

0xf83c,	// (0x0008ce40) main_video3_pane_t_ParamLimits

0xf83c,	// (0x0008ce40) main_video3_pane_t

0xd41e,	// (0x0008aa22) cams_zoom_vslider_pane_g1

0xd427,	// (0x0008aa2b) cams_zoom_vslider_pane_g2

0x0001,

0xf843,	// (0x0008ce47) cams_zoom_vslider_pane_g

0xd42f,	// (0x0008aa33) small_slider_vertical_pane

0xcc6e,	// (0x0008a272) small_slider_vertical_pane_g1

0xcc6e,	// (0x0008a272) small_slider_vertical_pane_g2

0xd437,	// (0x0008aa3b) small_slider_vertical_pane_g3

0x0002,

0xf848,	// (0x0008ce4c) small_slider_vertical_pane_g

0xa162,	// (0x00087766) main_hwr_training_pane

0xd440,	// (0x0008aa44) hwr_training_instruct_pane_ParamLimits

0xd440,	// (0x0008aa44) hwr_training_instruct_pane

0x6cad,	// (0x000842b1) hwr_training_navi_pane_ParamLimits

0x6cad,	// (0x000842b1) hwr_training_navi_pane

0x6cc7,	// (0x000842cb) hwr_training_write_pane_ParamLimits

0x6cc7,	// (0x000842cb) hwr_training_write_pane

0xa162,	// (0x00087766) bg_frame_shadow_pane

0xd477,	// (0x0008aa7b) hwr_training_write_pane_g1

0xd47f,	// (0x0008aa83) hwr_training_write_pane_g2

0xd487,	// (0x0008aa8b) hwr_training_write_pane_g3

0xd48f,	// (0x0008aa93) hwr_training_write_pane_g4

0xd497,	// (0x0008aa9b) hwr_training_write_pane_g5

0xd49f,	// (0x0008aaa3) hwr_training_write_pane_g6

0xd4a7,	// (0x0008aaab) hwr_training_write_pane_g7

0x0006,

0xf84f,	// (0x0008ce53) hwr_training_write_pane_g

0x6cff,	// (0x00084303) hwr_training_navi_pane_g1_ParamLimits

0x6cff,	// (0x00084303) hwr_training_navi_pane_g1

0x6d11,	// (0x00084315) hwr_training_navi_pane_g2_ParamLimits

0x6d11,	// (0x00084315) hwr_training_navi_pane_g2

0x6d23,	// (0x00084327) hwr_training_navi_pane_g3_ParamLimits

0x6d23,	// (0x00084327) hwr_training_navi_pane_g3

0x6d33,	// (0x00084337) hwr_training_navi_pane_g4_ParamLimits

0x6d33,	// (0x00084337) hwr_training_navi_pane_g4

0x0004,

0xf85e,	// (0x0008ce62) hwr_training_navi_pane_g_ParamLimits

0xf85e,	// (0x0008ce62) hwr_training_navi_pane_g

0x6d4d,	// (0x00084351) hwr_training_navi_pane_t1

0x6d5b,	// (0x0008435f) list_single_hwr_training_instruct_pane_ParamLimits

0x6d5b,	// (0x0008435f) list_single_hwr_training_instruct_pane

0xd4af,	// (0x0008aab3) list_single_hwr_training_instruct_pane_t1

0xcbae,	// (0x0008a1b2) bg_frame_shadow_pane_g1

0xd4be,	// (0x0008aac2) bg_frame_shadow_pane_g2

0xd4c6,	// (0x0008aaca) bg_frame_shadow_pane_g3

0xd4ce,	// (0x0008aad2) bg_frame_shadow_pane_g4

0xd4d6,	// (0x0008aada) bg_frame_shadow_pane_g5

0xd4de,	// (0x0008aae2) bg_frame_shadow_pane_g6

0xd4e6,	// (0x0008aaea) bg_frame_shadow_pane_g7

0xa9df,	// (0x00087fe3) bg_frame_shadow_pane_g8

0x0007,

0xf869,	// (0x0008ce6d) bg_frame_shadow_pane_g

0xa162,	// (0x00087766) main_video_tele_dialer_pane

0x6d74,	// (0x00084378) aid_size_cell_video_keypad_ParamLimits

0x6d74,	// (0x00084378) aid_size_cell_video_keypad

0x6d84,	// (0x00084388) grid_video_dialer_keypad_pane_ParamLimits

0x6d84,	// (0x00084388) grid_video_dialer_keypad_pane

0x6db6,	// (0x000843ba) video_down_pane_cp_ParamLimits

0x6db6,	// (0x000843ba) video_down_pane_cp

0x6dde,	// (0x000843e2) cell_video_dialer_keypad_pane_ParamLimits

0x6dde,	// (0x000843e2) cell_video_dialer_keypad_pane

0xd4ee,	// (0x0008aaf2) bg_button_pane_cp08_ParamLimits

0xd4ee,	// (0x0008aaf2) bg_button_pane_cp08

0x6df5,	// (0x000843f9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6df5,	// (0x000843f9) cell_video_dialer_keypad_pane_g1

0x65ec,	// (0x00083bf0) mup3_rocker2_pane_ParamLimits

0x65ec,	// (0x00083bf0) mup3_rocker2_pane

0xcc6e,	// (0x0008a272) mup3_rocker2_pane_g1

0x54e1,	// (0x00082ae5) main_dialer2_pane

0xa162,	// (0x00087766) main_mp4_pane

0x6e34,	// (0x00084438) main_mp4_pane_g1_ParamLimits

0x6e34,	// (0x00084438) main_mp4_pane_g1

0x6e42,	// (0x00084446) main_mp4_pane_g2_ParamLimits

0x6e42,	// (0x00084446) main_mp4_pane_g2

0x6e50,	// (0x00084454) main_mp4_pane_g3_ParamLimits

0x6e50,	// (0x00084454) main_mp4_pane_g3

0x6ea3,	// (0x000844a7) main_mp4_pane_g4_ParamLimits

0x6ea3,	// (0x000844a7) main_mp4_pane_g4

0x6ecb,	// (0x000844cf) main_mp4_pane_g5_ParamLimits

0x6ecb,	// (0x000844cf) main_mp4_pane_g5

0x0005,

0xf889,	// (0x0008ce8d) main_mp4_pane_g_ParamLimits

0xf889,	// (0x0008ce8d) main_mp4_pane_g

0x6f1b,	// (0x0008451f) main_mp4_pane_t1_ParamLimits

0x6f1b,	// (0x0008451f) main_mp4_pane_t1

0x6f77,	// (0x0008457b) main_mp4_pane_t2_ParamLimits

0x6f77,	// (0x0008457b) main_mp4_pane_t2

0xd4fa,	// (0x0008aafe) main_mp4_pane_t3_ParamLimits

0xd4fa,	// (0x0008aafe) main_mp4_pane_t3

0x6fc9,	// (0x000845cd) main_mp4_pane_t4_ParamLimits

0x6fc9,	// (0x000845cd) main_mp4_pane_t4

0x0003,

0xf896,	// (0x0008ce9a) main_mp4_pane_t_ParamLimits

0xf896,	// (0x0008ce9a) main_mp4_pane_t

0x7009,	// (0x0008460d) mp4_progress_pane_ParamLimits

0x7009,	// (0x0008460d) mp4_progress_pane

0x7053,	// (0x00084657) mp4_rocker_pane_ParamLimits

0x7053,	// (0x00084657) mp4_rocker_pane

0xd522,	// (0x0008ab26) mp4_progress_pane_t1

0xd53b,	// (0x0008ab3f) mp4_progress_pane_t2

0x0001,

0xf89f,	// (0x0008cea3) mp4_progress_pane_t

0xd554,	// (0x0008ab58) mup_progress_pane_cp04

0xcc6e,	// (0x0008a272) mp4_rocker_pane_g1

0x7075,	// (0x00084679) aid_cell_size_keypad2_ParamLimits

0x7075,	// (0x00084679) aid_cell_size_keypad2

0x7085,	// (0x00084689) dialer2_ne_pane_ParamLimits

0x7085,	// (0x00084689) dialer2_ne_pane

0x7091,	// (0x00084695) grid_dialer2_keypad_pane_ParamLimits

0x7091,	// (0x00084695) grid_dialer2_keypad_pane

0xdb96,	// (0x0008b19a) bg_popup_call_pane_cp07_ParamLimits

0xdb96,	// (0x0008b19a) bg_popup_call_pane_cp07

0x709f,	// (0x000846a3) dialer2_ne_pane_t1_ParamLimits

0x709f,	// (0x000846a3) dialer2_ne_pane_t1

0x70c4,	// (0x000846c8) cell_dialer2_keypad_pane_ParamLimits

0x70c4,	// (0x000846c8) cell_dialer2_keypad_pane

0xd572,	// (0x0008ab76) bg_button_pane_pane_cp04_ParamLimits

0xd572,	// (0x0008ab76) bg_button_pane_pane_cp04

0x70db,	// (0x000846df) cell_dialer2_keypad_pane_g1_ParamLimits

0x70db,	// (0x000846df) cell_dialer2_keypad_pane_g1

0x31c7,	// (0x000807cb) aid_placing_vt_set_content_ParamLimits

0x31c7,	// (0x000807cb) aid_placing_vt_set_content

0x31ef,	// (0x000807f3) aid_placing_vt_set_title_ParamLimits

0x31ef,	// (0x000807f3) aid_placing_vt_set_title

0xa162,	// (0x00087766) main_image3_pane

0x7175,	// (0x00084779) area_side_right_pane_cp01_ParamLimits

0x7175,	// (0x00084779) area_side_right_pane_cp01

0xa8b6,	// (0x00087eba) main_image3_pane_g1_ParamLimits

0xa8b6,	// (0x00087eba) main_image3_pane_g1

0x71a4,	// (0x000847a8) main_image3_pane_g2_ParamLimits

0x71a4,	// (0x000847a8) main_image3_pane_g2

0x71bd,	// (0x000847c1) main_image3_pane_g3_ParamLimits

0x71bd,	// (0x000847c1) main_image3_pane_g3

0x71d6,	// (0x000847da) main_image3_pane_g4_ParamLimits

0x71d6,	// (0x000847da) main_image3_pane_g4

0x0003,

0xf8ae,	// (0x0008ceb2) main_image3_pane_g_ParamLimits

0xf8ae,	// (0x0008ceb2) main_image3_pane_g

0x71ef,	// (0x000847f3) main_image3_pane_t1_ParamLimits

0x71ef,	// (0x000847f3) main_image3_pane_t1

0x7214,	// (0x00084818) main_image3_pane_t2_ParamLimits

0x7214,	// (0x00084818) main_image3_pane_t2

0x7233,	// (0x00084837) main_image3_pane_t3_ParamLimits

0x7233,	// (0x00084837) main_image3_pane_t3

0x0003,

0xf8b7,	// (0x0008cebb) main_image3_pane_t_ParamLimits

0xf8b7,	// (0x0008cebb) main_image3_pane_t

0x20c6,	// (0x0007f6ca) grid_sctrl_middle_pane_cp01_ParamLimits

0x20c6,	// (0x0007f6ca) grid_sctrl_middle_pane_cp01

0x7294,	// (0x00084898) cell_sctrl_middle_pane_cp01_ParamLimits

0x7294,	// (0x00084898) cell_sctrl_middle_pane_cp01

0x72a5,	// (0x000848a9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x72a5,	// (0x000848a9) cell_sctrl_middle_pane_cp01_g1

0xa162,	// (0x00087766) main_call4_pane

0x72b2,	// (0x000848b6) aid_size_button_call4_ParamLimits

0x72b2,	// (0x000848b6) aid_size_button_call4

0x72e4,	// (0x000848e8) call4_windows_pane_ParamLimits

0x72e4,	// (0x000848e8) call4_windows_pane

0x7300,	// (0x00084904) grid_call4_button_pane_ParamLimits

0x7300,	// (0x00084904) grid_call4_button_pane

0xd57e,	// (0x0008ab82) call4_windows_conf_pane

0x7324,	// (0x00084928) popup_call4_audio_first_window_ParamLimits

0x7324,	// (0x00084928) popup_call4_audio_first_window

0x7350,	// (0x00084954) popup_call4_audio_second_window_ParamLimits

0x7350,	// (0x00084954) popup_call4_audio_second_window

0xd5bb,	// (0x0008abbf) popup_call4_audio_wait_window_ParamLimits

0xd5bb,	// (0x0008abbf) popup_call4_audio_wait_window

0x7364,	// (0x00084968) cell_call4_button_pane_ParamLimits

0x7364,	// (0x00084968) cell_call4_button_pane

0x7387,	// (0x0008498b) bg_button_pane_cp09_ParamLimits

0x7387,	// (0x0008498b) bg_button_pane_cp09

0x7393,	// (0x00084997) cell_call4_button_pane_g1_ParamLimits

0x7393,	// (0x00084997) cell_call4_button_pane_g1

0x73a0,	// (0x000849a4) cell_call4_button_pane_t1_ParamLimits

0x73a0,	// (0x000849a4) cell_call4_button_pane_t1

0xd603,	// (0x0008ac07) popup_call4_audio_conf_window_ParamLimits

0xd603,	// (0x0008ac07) popup_call4_audio_conf_window

0x6621,	// (0x00083c25) mup3_progress_pane_t1_ParamLimits

0x6640,	// (0x00083c44) mup3_progress_pane_t2_ParamLimits

0xcf19,	// (0x0008a51d) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0008cda0) mup3_progress_pane_t_ParamLimits

0xcf36,	// (0x0008a53a) mup_progress_pane_cp03_ParamLimits

0x6b3e,	// (0x00084142) mup3_control_keys_pane_g4_copy1

0x7037,	// (0x0008463b) mp4_rocker2_pane_ParamLimits

0x7037,	// (0x0008463b) mp4_rocker2_pane

0xd61d,	// (0x0008ac21) mp4_rocker2_pane_g1

0xd625,	// (0x0008ac29) mp4_rocker2_pane_g2

0x73b2,	// (0x000849b6) mp4_rocker2_pane_g3

0x73ba,	// (0x000849be) mp4_rocker2_pane_g4

0x73c2,	// (0x000849c6) mp4_rocker2_pane_g5

0x0004,

0xf8c0,	// (0x0008cec4) mp4_rocker2_pane_g

0xa162,	// (0x00087766) main_camera4_pane

0xa162,	// (0x00087766) main_video4_pane

0x6d92,	// (0x00084396) main_video_tele_dialer_pane_t1_ParamLimits

0x6d92,	// (0x00084396) main_video_tele_dialer_pane_t1

0x6da4,	// (0x000843a8) main_video_tele_dialer_pane_t2_ParamLimits

0x6da4,	// (0x000843a8) main_video_tele_dialer_pane_t2

0x0001,

0xf87a,	// (0x0008ce7e) main_video_tele_dialer_pane_t_ParamLimits

0xf87a,	// (0x0008ce7e) main_video_tele_dialer_pane_t

0x73e2,	// (0x000849e6) cam4_autofocus_pane_ParamLimits

0x73e2,	// (0x000849e6) cam4_autofocus_pane

0x73fa,	// (0x000849fe) cam4_image_uncrop_pane_ParamLimits

0x73fa,	// (0x000849fe) cam4_image_uncrop_pane

0x7413,	// (0x00084a17) cam4_indicators_pane_ParamLimits

0x7413,	// (0x00084a17) cam4_indicators_pane

0x742f,	// (0x00084a33) main_camera4_pane_g1_ParamLimits

0x742f,	// (0x00084a33) main_camera4_pane_g1

0x743b,	// (0x00084a3f) main_camera4_pane_g2_ParamLimits

0x743b,	// (0x00084a3f) main_camera4_pane_g2

0x743b,	// (0x00084a3f) main_camera4_pane_g3_ParamLimits

0x743b,	// (0x00084a3f) main_camera4_pane_g3

0x7447,	// (0x00084a4b) main_camera4_pane_g4_ParamLimits

0x7447,	// (0x00084a4b) main_camera4_pane_g4

0x7453,	// (0x00084a57) main_camera4_pane_g5_ParamLimits

0x7453,	// (0x00084a57) main_camera4_pane_g5

0x0005,

0xf8cb,	// (0x0008cecf) main_camera4_pane_g_ParamLimits

0xf8cb,	// (0x0008cecf) main_camera4_pane_g

0x746d,	// (0x00084a71) main_camera4_pane_t1_ParamLimits

0x746d,	// (0x00084a71) main_camera4_pane_t1

0xce9e,	// (0x0008a4a2) bg_tb_trans_pane_cp06

0x74bf,	// (0x00084ac3) cam4_indicators_pane_g1

0x74d0,	// (0x00084ad4) cam4_indicators_pane_g2

0x0002,

0xf8e6,	// (0x0008ceea) cam4_indicators_pane_g

0x74e8,	// (0x00084aec) cam4_indicators_pane_t1

0x7512,	// (0x00084b16) main_video4_pane_g1_ParamLimits

0x7512,	// (0x00084b16) main_video4_pane_g1

0x751e,	// (0x00084b22) main_video4_pane_g2_ParamLimits

0x751e,	// (0x00084b22) main_video4_pane_g2

0x752a,	// (0x00084b2e) main_video4_pane_g3_ParamLimits

0x752a,	// (0x00084b2e) main_video4_pane_g3

0x7536,	// (0x00084b3a) main_video4_pane_g4_ParamLimits

0x7536,	// (0x00084b3a) main_video4_pane_g4

0x0004,

0xf8ed,	// (0x0008cef1) main_video4_pane_g_ParamLimits

0xf8ed,	// (0x0008cef1) main_video4_pane_g

0x7558,	// (0x00084b5c) vid4_indicators_pane_ParamLimits

0x7558,	// (0x00084b5c) vid4_indicators_pane

0x7577,	// (0x00084b7b) video4_image_uncrop_cif_pane_ParamLimits

0x7577,	// (0x00084b7b) video4_image_uncrop_cif_pane

0x7586,	// (0x00084b8a) video4_image_uncrop_nhd_pane_ParamLimits

0x7586,	// (0x00084b8a) video4_image_uncrop_nhd_pane

0x73fa,	// (0x000849fe) video4_image_uncrop_vga_pane_ParamLimits

0x73fa,	// (0x000849fe) video4_image_uncrop_vga_pane

0xa8a8,	// (0x00087eac) bg_tb_trans_pane_cp07

0x759f,	// (0x00084ba3) vid4_indicators_pane_g1

0x75b5,	// (0x00084bb9) vid4_indicators_pane_g2

0x75c9,	// (0x00084bcd) vid4_indicators_pane_g3

0x0004,

0xf8f8,	// (0x0008cefc) vid4_indicators_pane_g

0x75fa,	// (0x00084bfe) vid4_indicators_pane_t1

0x7611,	// (0x00084c15) cam4_autofocus_pane_g1

0x7619,	// (0x00084c1d) cam4_autofocus_pane_g2

0x7621,	// (0x00084c25) cam4_autofocus_pane_g3

0x0002,

0xf903,	// (0x0008cf07) cam4_autofocus_pane_g

0x7629,	// (0x00084c2d) cam4_autofocus_pane_g3_copy1

0x6dc2,	// (0x000843c6) video_down_pane_cp_t1

0x6dd0,	// (0x000843d4) video_down_pane_cp_t2

0x0001,

0xf87f,	// (0x0008ce83) video_down_pane_cp_t

0x20c6,	// (0x0007f6ca) popup_vitu2_window_ParamLimits

0x20c6,	// (0x0007f6ca) popup_vitu2_window

0x7631,	// (0x00084c35) aid_size_cell2_itu2_ParamLimits

0x7631,	// (0x00084c35) aid_size_cell2_itu2

0x7653,	// (0x00084c57) aid_size_cell_itu2_ParamLimits

0x7653,	// (0x00084c57) aid_size_cell_itu2

0xdb96,	// (0x0008b19a) bg_popup_window_pane_cp09_ParamLimits

0xdb96,	// (0x0008b19a) bg_popup_window_pane_cp09

0x7699,	// (0x00084c9d) field_vitu2_entry_pane_ParamLimits

0x7699,	// (0x00084c9d) field_vitu2_entry_pane

0x76b9,	// (0x00084cbd) grid_vitu2_function_pane_ParamLimits

0x76b9,	// (0x00084cbd) grid_vitu2_function_pane

0x76fd,	// (0x00084d01) grid_vitu2_itu_pane_ParamLimits

0x76fd,	// (0x00084d01) grid_vitu2_itu_pane

0x7779,	// (0x00084d7d) cell_vitu2_itu_pane_ParamLimits

0x7779,	// (0x00084d7d) cell_vitu2_itu_pane

0x7790,	// (0x00084d94) cell_vitu2_function_pane_ParamLimits

0x7790,	// (0x00084d94) cell_vitu2_function_pane

0xd62d,	// (0x0008ac31) bg_popup_call_pane_cp08_ParamLimits

0xd62d,	// (0x0008ac31) bg_popup_call_pane_cp08

0xd644,	// (0x0008ac48) field_vitu2_entry_pane_g1

0xd650,	// (0x0008ac54) field_vitu2_entry_pane_g2

0x0002,

0xf90a,	// (0x0008cf0e) field_vitu2_entry_pane_g

0x0e52,	// (0x0007e456) field_vitu2_entry_pane_t1_ParamLimits

0x0e52,	// (0x0007e456) field_vitu2_entry_pane_t1

0x0e80,	// (0x0007e484) field_vitu2_entry_pane_t2_ParamLimits

0x0e80,	// (0x0007e484) field_vitu2_entry_pane_t2

0x0001,

0xf911,	// (0x0008cf15) field_vitu2_entry_pane_t_ParamLimits

0xf911,	// (0x0008cf15) field_vitu2_entry_pane_t

0x77d4,	// (0x00084dd8) bg_button_pane_cp010_ParamLimits

0x77d4,	// (0x00084dd8) bg_button_pane_cp010

0x77e2,	// (0x00084de6) cell_vitu2_itu_pane_g1

0x7802,	// (0x00084e06) cell_vitu2_itu_pane_t1_ParamLimits

0x7802,	// (0x00084e06) cell_vitu2_itu_pane_t1

0x0e9d,	// (0x0007e4a1) cell_vitu2_itu_pane_t2_ParamLimits

0x0e9d,	// (0x0007e4a1) cell_vitu2_itu_pane_t2

0x0002,

0xf91b,	// (0x0008cf1f) cell_vitu2_itu_pane_t_ParamLimits

0xf91b,	// (0x0008cf1f) cell_vitu2_itu_pane_t

0xa8a8,	// (0x00087eac) bg_button_pane_cp011

0x784e,	// (0x00084e52) cell_vitu2_function_pane_g1

0xa162,	// (0x00087766) main_myfav_hc_pane

0x7275,	// (0x00084879) popup_image3_note_pane_ParamLimits

0x7275,	// (0x00084879) popup_image3_note_pane

0x7283,	// (0x00084887) popup_image3_tool_bar_pane_ParamLimits

0x7283,	// (0x00084887) popup_image3_tool_bar_pane

0x0f13,	// (0x0007e517) cell_vitu2_itu_pane_t3_ParamLimits

0x0f13,	// (0x0007e517) cell_vitu2_itu_pane_t3

0xa162,	// (0x00087766) bg_popup_trans_pane

0xd672,	// (0x0008ac76) grid_image3_tool_bar_pane

0xd67c,	// (0x0008ac80) bg_popup_trans_pane_g1

0xad27,	// (0x0008832b) bg_popup_trans_pane_g2

0xd684,	// (0x0008ac88) bg_popup_trans_pane_g3

0xd68c,	// (0x0008ac90) bg_popup_trans_pane_g4

0xd694,	// (0x0008ac98) bg_popup_trans_pane_g5

0xd69c,	// (0x0008aca0) bg_popup_trans_pane_g6

0xd6a4,	// (0x0008aca8) bg_popup_trans_pane_g7

0xd6ac,	// (0x0008acb0) bg_popup_trans_pane_g8

0xad07,	// (0x0008830b) bg_popup_trans_pane_g9

0x0008,

0xf922,	// (0x0008cf26) bg_popup_trans_pane_g

0xd6b4,	// (0x0008acb8) cell_image3_tool_bar_pane_ParamLimits

0xd6b4,	// (0x0008acb8) cell_image3_tool_bar_pane

0xcc6e,	// (0x0008a272) cell_image3_tool_bar_pane_g1

0xa162,	// (0x00087766) bg_popup_trans_pane_cp1

0xd6ca,	// (0x0008acce) popup_image3_note_pane_t1

0xd6d8,	// (0x0008acdc) popup_image3_note_pane_t2

0xd6e6,	// (0x0008acea) popup_image3_note_pane_t3

0x0002,

0xf935,	// (0x0008cf39) popup_image3_note_pane_t

0xd6f6,	// (0x0008acfa) popup_image3_note_pane_t3_copy1

0x7862,	// (0x00084e66) bg_myfav_hc_instruction_pane_ParamLimits

0x7862,	// (0x00084e66) bg_myfav_hc_instruction_pane

0x787a,	// (0x00084e7e) cell_myfav_contact_pane_ParamLimits

0x787a,	// (0x00084e7e) cell_myfav_contact_pane

0x7894,	// (0x00084e98) cell_myfav_contact_pane_cp1_ParamLimits

0x7894,	// (0x00084e98) cell_myfav_contact_pane_cp1

0x78ac,	// (0x00084eb0) cell_myfav_contact_pane_cp2_ParamLimits

0x78ac,	// (0x00084eb0) cell_myfav_contact_pane_cp2

0x78c4,	// (0x00084ec8) cell_myfav_contact_pane_cp3_ParamLimits

0x78c4,	// (0x00084ec8) cell_myfav_contact_pane_cp3

0x78db,	// (0x00084edf) cell_myfav_contact_pane_cp4_ParamLimits

0x78db,	// (0x00084edf) cell_myfav_contact_pane_cp4

0x78f1,	// (0x00084ef5) cell_myfav_contact_pane_cp5_ParamLimits

0x78f1,	// (0x00084ef5) cell_myfav_contact_pane_cp5

0x7905,	// (0x00084f09) cell_myfav_contact_pane_cp6_ParamLimits

0x7905,	// (0x00084f09) cell_myfav_contact_pane_cp6

0x7919,	// (0x00084f1d) cell_myfav_contact_pane_cp7_ParamLimits

0x7919,	// (0x00084f1d) cell_myfav_contact_pane_cp7

0xd704,	// (0x0008ad08) listscroll_gen_pane_cp05

0x7931,	// (0x00084f35) main_myfav_hc_pane_g1_ParamLimits

0x7931,	// (0x00084f35) main_myfav_hc_pane_g1

0x794b,	// (0x00084f4f) main_myfav_hc_pane_g2_ParamLimits

0x794b,	// (0x00084f4f) main_myfav_hc_pane_g2

0x0002,

0xf93c,	// (0x0008cf40) main_myfav_hc_pane_g_ParamLimits

0xf93c,	// (0x0008cf40) main_myfav_hc_pane_g

0x797d,	// (0x00084f81) main_myfav_hc_pane_t1_ParamLimits

0x797d,	// (0x00084f81) main_myfav_hc_pane_t1

0xd70d,	// (0x0008ad11) main_myfav_hc_pane_t2_ParamLimits

0xd70d,	// (0x0008ad11) main_myfav_hc_pane_t2

0xd71f,	// (0x0008ad23) main_myfav_hc_pane_t3_ParamLimits

0xd71f,	// (0x0008ad23) main_myfav_hc_pane_t3

0x7994,	// (0x00084f98) main_myfav_hc_pane_t4_ParamLimits

0x7994,	// (0x00084f98) main_myfav_hc_pane_t4

0x0004,

0xf943,	// (0x0008cf47) main_myfav_hc_pane_t_ParamLimits

0xf943,	// (0x0008cf47) main_myfav_hc_pane_t

0xcc6e,	// (0x0008a272) bg_myfav_hc_instruction_pane_g1

0xd731,	// (0x0008ad35) cell_myfav_contact_pane_g1_ParamLimits

0xd731,	// (0x0008ad35) cell_myfav_contact_pane_g1

0xd731,	// (0x0008ad35) cell_myfav_contact_pane_g2_ParamLimits

0xd731,	// (0x0008ad35) cell_myfav_contact_pane_g2

0xd73d,	// (0x0008ad41) cell_myfav_contact_pane_g3_ParamLimits

0xd73d,	// (0x0008ad41) cell_myfav_contact_pane_g3

0xcf03,	// (0x0008a507) cell_myfav_contact_pane_g4_ParamLimits

0xcf03,	// (0x0008a507) cell_myfav_contact_pane_g4

0xd74a,	// (0x0008ad4e) cell_myfav_contact_pane_g5_ParamLimits

0xd74a,	// (0x0008ad4e) cell_myfav_contact_pane_g5

0x0004,

0xf94e,	// (0x0008cf52) cell_myfav_contact_pane_g_ParamLimits

0xf94e,	// (0x0008cf52) cell_myfav_contact_pane_g

0x7965,	// (0x00084f69) main_myfav_hc_pane_g3_ParamLimits

0x7965,	// (0x00084f69) main_myfav_hc_pane_g3

0x1fd8,	// (0x0007f5dc) popup_adpt_find_window

0x79be,	// (0x00084fc2) afind_page_pane_ParamLimits

0x79be,	// (0x00084fc2) afind_page_pane

0x79cb,	// (0x00084fcf) aid_size_cell_afind_ParamLimits

0x79cb,	// (0x00084fcf) aid_size_cell_afind

0x79e5,	// (0x00084fe9) bg_popup_sub_pane_cp09_ParamLimits

0x79e5,	// (0x00084fe9) bg_popup_sub_pane_cp09

0x79f2,	// (0x00084ff6) find_pane_cp01_ParamLimits

0x79f2,	// (0x00084ff6) find_pane_cp01

0xd756,	// (0x0008ad5a) grid_afind_control_pane_ParamLimits

0xd756,	// (0x0008ad5a) grid_afind_control_pane

0x79ff,	// (0x00085003) grid_afind_pane_ParamLimits

0x79ff,	// (0x00085003) grid_afind_pane

0x7a1b,	// (0x0008501f) cell_afind_pane_ParamLimits

0x7a1b,	// (0x0008501f) cell_afind_pane

0xcc6e,	// (0x0008a272) afind_page_pane_g1

0x7a65,	// (0x00085069) afind_page_pane_g2

0x7a6e,	// (0x00085072) afind_page_pane_g3

0x0002,

0xf959,	// (0x0008cf5d) afind_page_pane_g

0x7a77,	// (0x0008507b) afind_page_pane_t1

0xd76a,	// (0x0008ad6e) cell_afind_grid_control_pane_ParamLimits

0xd76a,	// (0x0008ad6e) cell_afind_grid_control_pane

0xd572,	// (0x0008ab76) bg_button_pane_cp69_ParamLimits

0xd572,	// (0x0008ab76) bg_button_pane_cp69

0x7a97,	// (0x0008509b) cell_afind_pane_g1_ParamLimits

0x7a97,	// (0x0008509b) cell_afind_pane_g1

0x7aa4,	// (0x000850a8) cell_afind_pane_t1_ParamLimits

0x7aa4,	// (0x000850a8) cell_afind_pane_t1

0xab1c,	// (0x00088120) bg_button_pane_cp72

0xd779,	// (0x0008ad7d) cell_afind_grid_control_pane_g1

0x505c,	// (0x00082660) aid_image_placing_area_ParamLimits

0x505c,	// (0x00082660) aid_image_placing_area

0xd23e,	// (0x0008a842) field_vitu_entry_pane_g1_ParamLimits

0xd23e,	// (0x0008a842) field_vitu_entry_pane_g1

0xd24a,	// (0x0008a84e) field_vitu_entry_pane_g2_ParamLimits

0xd24a,	// (0x0008a84e) field_vitu_entry_pane_g2

0x0001,

0xf80a,	// (0x0008ce0e) field_vitu_entry_pane_g_ParamLimits

0xf80a,	// (0x0008ce0e) field_vitu_entry_pane_g

0x6bc8,	// (0x000841cc) cell_vitu_itu_pane_g1_ParamLimits

0x6c18,	// (0x0008421c) cell_vitu_itu_pane_t3_ParamLimits

0x6c18,	// (0x0008421c) cell_vitu_itu_pane_t3

0xd522,	// (0x0008ab26) mp4_progress_pane_t1_ParamLimits

0xd53b,	// (0x0008ab3f) mp4_progress_pane_t2_ParamLimits

0xf89f,	// (0x0008cea3) mp4_progress_pane_t_ParamLimits

0xd554,	// (0x0008ab58) mup_progress_pane_cp04_ParamLimits

0x79a8,	// (0x00084fac) main_myfav_hc_pane_t5_ParamLimits

0x79a8,	// (0x00084fac) main_myfav_hc_pane_t5

0x0b40,	// (0x0007e144) aid_zoom_text_primary

0x1fd8,	// (0x0007f5dc) popup_adpt_find_window_ParamLimits

0xa8a8,	// (0x00087eac) main_cam_set_pane

0x7421,	// (0x00084a25) cam4_zoom_pane_ParamLimits

0x7421,	// (0x00084a25) cam4_zoom_pane

0x7ab6,	// (0x000850ba) main_cam_set_pane_g1_ParamLimits

0x7ab6,	// (0x000850ba) main_cam_set_pane_g1

0x7ac4,	// (0x000850c8) main_cam_set_pane_g2_ParamLimits

0x7ac4,	// (0x000850c8) main_cam_set_pane_g2

0x0001,

0xf960,	// (0x0008cf64) main_cam_set_pane_g_ParamLimits

0xf960,	// (0x0008cf64) main_cam_set_pane_g

0x7ad0,	// (0x000850d4) main_cam_set_pane_t1_ParamLimits

0x7ad0,	// (0x000850d4) main_cam_set_pane_t1

0x7aec,	// (0x000850f0) main_cset_listscroll_pane_ParamLimits

0x7aec,	// (0x000850f0) main_cset_listscroll_pane

0x7b1b,	// (0x0008511f) main_cset_slider_pane_ParamLimits

0x7b1b,	// (0x0008511f) main_cset_slider_pane

0xd78a,	// (0x0008ad8e) main_cset_list_pane_ParamLimits

0xd78a,	// (0x0008ad8e) main_cset_list_pane

0xd79a,	// (0x0008ad9e) scroll_pane_cp028

0x7b3c,	// (0x00085140) aid_area_touch_slider

0x7b58,	// (0x0008515c) cset_slider_pane

0x7b82,	// (0x00085186) main_cset_slider_pane_g1

0x7b97,	// (0x0008519b) main_cset_slider_pane_g2

0x0011,

0xf965,	// (0x0008cf69) main_cset_slider_pane_g

0xd7d3,	// (0x0008add7) main_cset_slider_pane_t1

0x7c53,	// (0x00085257) main_cset_slider_pane_t2

0x7c6d,	// (0x00085271) main_cset_slider_pane_t3

0x7c87,	// (0x0008528b) main_cset_slider_pane_t4

0x7ca1,	// (0x000852a5) main_cset_slider_pane_t5

0x7cbb,	// (0x000852bf) main_cset_slider_pane_t6

0x7cd0,	// (0x000852d4) main_cset_slider_pane_t7

0x000e,

0xf98a,	// (0x0008cf8e) main_cset_slider_pane_t

0x7dd4,	// (0x000853d8) cset_list_set_pane_ParamLimits

0x7dd4,	// (0x000853d8) cset_list_set_pane

0x7de5,	// (0x000853e9) aid_position_infowindow_above

0x7ded,	// (0x000853f1) aid_position_infowindow_below

0x7df5,	// (0x000853f9) cset_list_set_pane_g1_ParamLimits

0x7df5,	// (0x000853f9) cset_list_set_pane_g1

0x0f65,	// (0x0007e569) cset_list_set_pane_g3_ParamLimits

0x0f65,	// (0x0007e569) cset_list_set_pane_g3

0x0001,

0xf9a9,	// (0x0008cfad) cset_list_set_pane_g_ParamLimits

0xf9a9,	// (0x0008cfad) cset_list_set_pane_g

0x0f74,	// (0x0007e578) cset_list_set_pane_t1_ParamLimits

0x0f74,	// (0x0007e578) cset_list_set_pane_t1

0xa8a8,	// (0x00087eac) list_highlight_pane_cp021_ParamLimits

0xa8a8,	// (0x00087eac) list_highlight_pane_cp021

0xb53e,	// (0x00088b42) cset_slider_pane_g1

0xb550,	// (0x00088b54) cset_slider_pane_g2

0xb547,	// (0x00088b4b) cset_slider_pane_g3

0x0002,

0xf9ae,	// (0x0008cfb2) cset_slider_pane_g

0x7e01,	// (0x00085405) aid_area_touch_cam4_zoom

0x7e09,	// (0x0008540d) cam4_zoom_cont_pane

0x7e11,	// (0x00085415) cam4_zoom_pane_g1

0x7e19,	// (0x0008541d) cam4_zoom_pane_g2

0x7e21,	// (0x00085425) cam4_zoom_pane_g3

0x0002,

0xf9b5,	// (0x0008cfb9) cam4_zoom_pane_g

0xdf0d,	// (0x0008b511) cam4_zoom_cont_pane_g1

0xdf16,	// (0x0008b51a) cam4_zoom_cont_pane_g2

0xdf1f,	// (0x0008b523) cam4_zoom_cont_pane_g3

0x0002,

0xf9bc,	// (0x0008cfc0) cam4_zoom_cont_pane_g

0x72cc,	// (0x000848d0) call4_image_pane_ParamLimits

0x72cc,	// (0x000848d0) call4_image_pane

0xd57e,	// (0x0008ab82) call4_windows_conf_pane_ParamLimits

0xd599,	// (0x0008ab9d) popup_call4_audio_in_window_ParamLimits

0xd599,	// (0x0008ab9d) popup_call4_audio_in_window

0xa162,	// (0x00087766) bg_popup_call2_act_pane_cp02

0xd5fb,	// (0x0008abff) call4_list_conf_pane

0xcc6e,	// (0x0008a272) call4_image_pane_g1

0xcc6e,	// (0x0008a272) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0008cce0) call4_image_pane_g

0xd87d,	// (0x0008ae81) list_single_graphic_popup_conf4_pane_ParamLimits

0xd87d,	// (0x0008ae81) list_single_graphic_popup_conf4_pane

0xa162,	// (0x00087766) list_highlight_pane_cp022

0xd892,	// (0x0008ae96) list_single_graphic_popup_conf4_pane_g1

0xb232,	// (0x00088836) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9c3,	// (0x0008cfc7) list_single_graphic_popup_conf4_pane_g

0xd89a,	// (0x0008ae9e) list_single_graphic_popup_conf4_pane_t1

0x3349,	// (0x0008094d) popup_vtel_slider_window_ParamLimits

0x3349,	// (0x0008094d) popup_vtel_slider_window

0xd560,	// (0x0008ab64) dialer2_ne_pane_t2_ParamLimits

0xd560,	// (0x0008ab64) dialer2_ne_pane_t2

0x0001,

0xf8a4,	// (0x0008cea8) dialer2_ne_pane_t_ParamLimits

0xf8a4,	// (0x0008cea8) dialer2_ne_pane_t

0xa8a8,	// (0x00087eac) bg_popup_sub_pane_cp010_ParamLimits

0xa8a8,	// (0x00087eac) bg_popup_sub_pane_cp010

0x7e29,	// (0x0008542d) popup_vtel_slider_window_g1_ParamLimits

0x7e29,	// (0x0008542d) popup_vtel_slider_window_g1

0x7e35,	// (0x00085439) popup_vtel_slider_window_g2_ParamLimits

0x7e35,	// (0x00085439) popup_vtel_slider_window_g2

0x0003,

0xf9c8,	// (0x0008cfcc) popup_vtel_slider_window_g_ParamLimits

0xf9c8,	// (0x0008cfcc) popup_vtel_slider_window_g

0x7e7d,	// (0x00085481) vtel_slider_pane_ParamLimits

0x7e7d,	// (0x00085481) vtel_slider_pane

0x7e8c,	// (0x00085490) vtel_slider_pane_g1_ParamLimits

0x7e8c,	// (0x00085490) vtel_slider_pane_g1

0x7e99,	// (0x0008549d) vtel_slider_pane_g2_ParamLimits

0x7e99,	// (0x0008549d) vtel_slider_pane_g2

0x7ea6,	// (0x000854aa) vtel_slider_pane_g3_ParamLimits

0x7ea6,	// (0x000854aa) vtel_slider_pane_g3

0x7e8c,	// (0x00085490) vtel_slider_pane_g4_ParamLimits

0x7e8c,	// (0x00085490) vtel_slider_pane_g4

0x7eb3,	// (0x000854b7) vtel_slider_pane_g5_ParamLimits

0x7eb3,	// (0x000854b7) vtel_slider_pane_g5

0x0004,

0xf9d1,	// (0x0008cfd5) vtel_slider_pane_g_ParamLimits

0xf9d1,	// (0x0008cfd5) vtel_slider_pane_g

0xa8a8,	// (0x00087eac) main_gallery2_pane

0x7679,	// (0x00084c7d) aid_size_row_itut2_dropdow_list_ParamLimits

0x7679,	// (0x00084c7d) aid_size_row_itut2_dropdow_list

0x76db,	// (0x00084cdf) grid_vitu2_function_top_pane_ParamLimits

0x76db,	// (0x00084cdf) grid_vitu2_function_top_pane

0x7731,	// (0x00084d35) popup_vitu2_dropdown_list_window_ParamLimits

0x7731,	// (0x00084d35) popup_vitu2_dropdown_list_window

0x7755,	// (0x00084d59) popup_vitu2_match_list_window

0x7ec0,	// (0x000854c4) cell_vitu2_function_top_pane_ParamLimits

0x7ec0,	// (0x000854c4) cell_vitu2_function_top_pane

0x7ee2,	// (0x000854e6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7ee2,	// (0x000854e6) cell_vitu2_function_top_pane_cp01

0x7efe,	// (0x00085502) cell_vitu2_function_top_wide_pane_ParamLimits

0x7efe,	// (0x00085502) cell_vitu2_function_top_wide_pane

0xa8a8,	// (0x00087eac) bg_button_pane_cp012

0x7f1a,	// (0x0008551e) cell_vitu2_function_top_pane_g1

0x7f2e,	// (0x00085532) bg_button_pane_cp013_ParamLimits

0x7f2e,	// (0x00085532) bg_button_pane_cp013

0x7f4a,	// (0x0008554e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7f4a,	// (0x0008554e) cell_vitu2_function_top_wide_pane_g1

0x20c6,	// (0x0007f6ca) bg_popup_sub_pane_cp20

0x7f62,	// (0x00085566) list_vitu2_match_list_pane

0xd67c,	// (0x0008ac80) bg_popup_sub_pane_cp20_g1

0xd684,	// (0x0008ac88) bg_popup_sub_pane_cp20_g2

0xad27,	// (0x0008832b) bg_popup_sub_pane_cp20_g3

0xd68c,	// (0x0008ac90) bg_popup_sub_pane_cp20_g4

0xad07,	// (0x0008830b) bg_popup_sub_pane_cp20_g5

0xd8b0,	// (0x0008aeb4) bg_popup_sub_pane_cp20_g6

0xd69c,	// (0x0008aca0) bg_popup_sub_pane_cp20_g7

0xd6a4,	// (0x0008aca8) bg_popup_sub_pane_cp20_g8

0xd6ac,	// (0x0008acb0) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9dc,	// (0x0008cfe0) bg_popup_sub_pane_cp20_g

0xa8c4,	// (0x00087ec8) list_vitu2_match_list_item_pane_ParamLimits

0xa8c4,	// (0x00087ec8) list_vitu2_match_list_item_pane

0x7f7a,	// (0x0008557e) list_vitu2_match_list_item_pane_t1

0xa162,	// (0x00087766) bg_popup_sub_pane_cp21

0xb15b,	// (0x0008875f) grid_vitu2_dropdown_list_pane

0x7f94,	// (0x00085598) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f94,	// (0x00085598) cell_vitu2_dropdown_list_char_pane

0x7fb9,	// (0x000855bd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7fb9,	// (0x000855bd) cell_vitu2_dropdown_list_ctrl_pane

0xd8b8,	// (0x0008aebc) cell_vitu2_dropdown_list_char_pane_g1

0xd8c1,	// (0x0008aec5) cell_vitu2_dropdown_list_char_pane_g2

0xd8ca,	// (0x0008aece) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f9,	// (0x0008cffd) cell_vitu2_dropdown_list_char_pane_g

0x7fe7,	// (0x000855eb) cell_vitu2_dropdown_list_char_pane_t1

0x7ff5,	// (0x000855f9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7ff5,	// (0x000855f9) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8005,	// (0x00085609) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8005,	// (0x00085609) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8016,	// (0x0008561a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8016,	// (0x0008561a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8026,	// (0x0008562a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8026,	// (0x0008562a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce9e,	// (0x0008a4a2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce9e,	// (0x0008a4a2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa00,	// (0x0008d004) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa00,	// (0x0008d004) cell_vitu2_dropdown_list_ctrl_pane_g

0x803f,	// (0x00085643) aid_size_cell_gallery2_ParamLimits

0x803f,	// (0x00085643) aid_size_cell_gallery2

0x8059,	// (0x0008565d) grid_gallery2_pane_ParamLimits

0x8059,	// (0x0008565d) grid_gallery2_pane

0x6a4d,	// (0x00084051) scroll_pane_cp029_ParamLimits

0x6a4d,	// (0x00084051) scroll_pane_cp029

0x8070,	// (0x00085674) cell_gallery2_pane_ParamLimits

0x8070,	// (0x00085674) cell_gallery2_pane

0xd8d3,	// (0x0008aed7) cell_gallery2_pane_g2

0x80bc,	// (0x000856c0) cell_gallery2_pane_g3

0xd8db,	// (0x0008aedf) cell_gallery2_pane_g4

0xd8e3,	// (0x0008aee7) cell_gallery2_pane_g5

0xaaca,	// (0x000880ce) grid_highlight_pane_cp10

0x7755,	// (0x00084d59) popup_vitu2_match_list_window_ParamLimits

0x7769,	// (0x00084d6d) popup_vitu2_query_window_ParamLimits

0x7769,	// (0x00084d6d) popup_vitu2_query_window

0xa162,	// (0x00087766) bg_vitu2_candi_button_pane

0xd8b8,	// (0x0008aebc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8c1,	// (0x0008aec5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8ca,	// (0x0008aece) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0fd3,	// (0x0007e5d7) bg_button_pane_cp015

0x80c4,	// (0x000856c8) bg_button_pane_cp016

0x80d7,	// (0x000856db) bg_button_pane_cp017

0xc81d,	// (0x00089e21) bg_popup_sub_pane_cp22

0xd8eb,	// (0x0008aeef) popup_vitu2_query_window_g1

0x1006,	// (0x0007e60a) popup_vitu2_query_window_g2

0x0002,

0xfa0b,	// (0x0008d00f) popup_vitu2_query_window_g

0x1023,	// (0x0007e627) popup_vitu2_query_window_t1_ParamLimits

0x1023,	// (0x0007e627) popup_vitu2_query_window_t1

0x1056,	// (0x0007e65a) popup_vitu2_query_window_t2_ParamLimits

0x1056,	// (0x0007e65a) popup_vitu2_query_window_t2

0x1068,	// (0x0007e66c) popup_vitu2_query_window_t3_ParamLimits

0x1068,	// (0x0007e66c) popup_vitu2_query_window_t3

0x80fb,	// (0x000856ff) popup_vitu2_query_window_t4_ParamLimits

0x80fb,	// (0x000856ff) popup_vitu2_query_window_t4

0x811e,	// (0x00085722) popup_vitu2_query_window_t5_ParamLimits

0x811e,	// (0x00085722) popup_vitu2_query_window_t5

0x0006,

0xfa12,	// (0x0008d016) popup_vitu2_query_window_t_ParamLimits

0xfa12,	// (0x0008d016) popup_vitu2_query_window_t

0xd782,	// (0x0008ad86) main_cset_text_pane

0x7b3c,	// (0x00085140) aid_area_touch_slider_ParamLimits

0x7b58,	// (0x0008515c) cset_slider_pane_ParamLimits

0x7b82,	// (0x00085186) main_cset_slider_pane_g1_ParamLimits

0x7b97,	// (0x0008519b) main_cset_slider_pane_g2_ParamLimits

0xd7a3,	// (0x0008ada7) main_cset_slider_pane_g3_ParamLimits

0xd7a3,	// (0x0008ada7) main_cset_slider_pane_g3

0x7bac,	// (0x000851b0) main_cset_slider_pane_g4_ParamLimits

0x7bac,	// (0x000851b0) main_cset_slider_pane_g4

0x7bbb,	// (0x000851bf) main_cset_slider_pane_g5_ParamLimits

0x7bbb,	// (0x000851bf) main_cset_slider_pane_g5

0x7bc7,	// (0x000851cb) main_cset_slider_pane_g6_ParamLimits

0x7bc7,	// (0x000851cb) main_cset_slider_pane_g6

0xf965,	// (0x0008cf69) main_cset_slider_pane_g_ParamLimits

0xd7d3,	// (0x0008add7) main_cset_slider_pane_t1_ParamLimits

0x7c53,	// (0x00085257) main_cset_slider_pane_t2_ParamLimits

0x7c6d,	// (0x00085271) main_cset_slider_pane_t3_ParamLimits

0x7c87,	// (0x0008528b) main_cset_slider_pane_t4_ParamLimits

0x7ca1,	// (0x000852a5) main_cset_slider_pane_t5_ParamLimits

0x7cbb,	// (0x000852bf) main_cset_slider_pane_t6_ParamLimits

0x7cd0,	// (0x000852d4) main_cset_slider_pane_t7_ParamLimits

0x7cfa,	// (0x000852fe) main_cset_slider_pane_t8_ParamLimits

0x7cfa,	// (0x000852fe) main_cset_slider_pane_t8

0x7d22,	// (0x00085326) main_cset_slider_pane_t9_ParamLimits

0x7d22,	// (0x00085326) main_cset_slider_pane_t9

0x7d4a,	// (0x0008534e) main_cset_slider_pane_t10_ParamLimits

0x7d4a,	// (0x0008534e) main_cset_slider_pane_t10

0x7d72,	// (0x00085376) main_cset_slider_pane_t11_ParamLimits

0x7d72,	// (0x00085376) main_cset_slider_pane_t11

0x7d9a,	// (0x0008539e) main_cset_slider_pane_t12_ParamLimits

0x7d9a,	// (0x0008539e) main_cset_slider_pane_t12

0x7db7,	// (0x000853bb) main_cset_slider_pane_t13_ParamLimits

0x7db7,	// (0x000853bb) main_cset_slider_pane_t13

0xf98a,	// (0x0008cf8e) main_cset_slider_pane_t_ParamLimits

0xa162,	// (0x00087766) bg_popup_sub_pane_cp011

0xd8f7,	// (0x0008aefb) main_cset_text_pane_g1

0xd8ff,	// (0x0008af03) main_cset_text_pane_t1

0xd90d,	// (0x0008af11) main_cset_text_pane_t2

0xd91b,	// (0x0008af1f) main_cset_text_pane_t3

0xd929,	// (0x0008af2d) main_cset_text_pane_t4

0xd937,	// (0x0008af3b) main_cset_text_pane_t5

0xd945,	// (0x0008af49) main_cset_text_pane_t6

0xd953,	// (0x0008af57) main_cset_text_pane_t7

0x0006,

0xfa21,	// (0x0008d025) main_cset_text_pane_t

0xa162,	// (0x00087766) main_cam4_burst_pane

0xa162,	// (0x00087766) main_cam5_pane

0x7a85,	// (0x00085089) bg_button_pane_cp019

0x7a8e,	// (0x00085092) bg_button_pane_cp020

0xd7af,	// (0x0008adb3) main_cset_slider_pane_g7_ParamLimits

0xd7af,	// (0x0008adb3) main_cset_slider_pane_g7

0xd7bb,	// (0x0008adbf) main_cset_slider_pane_g8_ParamLimits

0xd7bb,	// (0x0008adbf) main_cset_slider_pane_g8

0x7bdb,	// (0x000851df) main_cset_slider_pane_g9_ParamLimits

0x7bdb,	// (0x000851df) main_cset_slider_pane_g9

0x7be7,	// (0x000851eb) main_cset_slider_pane_g10_ParamLimits

0x7be7,	// (0x000851eb) main_cset_slider_pane_g10

0x7bf3,	// (0x000851f7) main_cset_slider_pane_g11_ParamLimits

0x7bf3,	// (0x000851f7) main_cset_slider_pane_g11

0x7bff,	// (0x00085203) main_cset_slider_pane_g12_ParamLimits

0x7bff,	// (0x00085203) main_cset_slider_pane_g12

0x7c0b,	// (0x0008520f) main_cset_slider_pane_g13_ParamLimits

0x7c0b,	// (0x0008520f) main_cset_slider_pane_g13

0x7c17,	// (0x0008521b) main_cset_slider_pane_g14_ParamLimits

0x7c17,	// (0x0008521b) main_cset_slider_pane_g14

0x7c23,	// (0x00085227) main_cset_slider_pane_g15_ParamLimits

0x7c23,	// (0x00085227) main_cset_slider_pane_g15

0xd80b,	// (0x0008ae0f) main_cset_slider_pane_t14_ParamLimits

0xd80b,	// (0x0008ae0f) main_cset_slider_pane_t14

0xd844,	// (0x0008ae48) main_cset_slider_pane_t15_ParamLimits

0xd844,	// (0x0008ae48) main_cset_slider_pane_t15

0x8141,	// (0x00085745) aid_cam4_burst_size_cell_ParamLimits

0x8141,	// (0x00085745) aid_cam4_burst_size_cell

0x815d,	// (0x00085761) grid_cam4_burst_pane_ParamLimits

0x815d,	// (0x00085761) grid_cam4_burst_pane

0x818f,	// (0x00085793) linegrid_cam4_burst_pane_ParamLimits

0x818f,	// (0x00085793) linegrid_cam4_burst_pane

0x81ad,	// (0x000857b1) scroll_pane_cp30_ParamLimits

0x81ad,	// (0x000857b1) scroll_pane_cp30

0x81b9,	// (0x000857bd) cell_cam4_burst_pane_ParamLimits

0x81b9,	// (0x000857bd) cell_cam4_burst_pane

0xd961,	// (0x0008af65) linegrid_cam4_burst_pane_g1_ParamLimits

0xd961,	// (0x0008af65) linegrid_cam4_burst_pane_g1

0x81f9,	// (0x000857fd) linegrid_cam4_burst_pane_g2_ParamLimits

0x81f9,	// (0x000857fd) linegrid_cam4_burst_pane_g2

0xd96e,	// (0x0008af72) linegrid_cam4_burst_pane_g3_ParamLimits

0xd96e,	// (0x0008af72) linegrid_cam4_burst_pane_g3

0x0002,

0xfa30,	// (0x0008d034) linegrid_cam4_burst_pane_g_ParamLimits

0xfa30,	// (0x0008d034) linegrid_cam4_burst_pane_g

0x820a,	// (0x0008580e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x820a,	// (0x0008580e) linegrid_cam4_burst_pane_g3_copy1

0xd97b,	// (0x0008af7f) linegrid_cam4_burst_pane_g4_ParamLimits

0xd97b,	// (0x0008af7f) linegrid_cam4_burst_pane_g4

0x8224,	// (0x00085828) linegrid_cam4_burst_pane_g5_ParamLimits

0x8224,	// (0x00085828) linegrid_cam4_burst_pane_g5

0x8235,	// (0x00085839) linegrid_cam4_burst_pane_g6_ParamLimits

0x8235,	// (0x00085839) linegrid_cam4_burst_pane_g6

0xd988,	// (0x0008af8c) linegrid_cam4_burst_pane_g7_ParamLimits

0xd988,	// (0x0008af8c) linegrid_cam4_burst_pane_g7

0x824c,	// (0x00085850) cell_cam4_burst_pane_g1

0xd9a1,	// (0x0008afa5) main_cam5_pane_t1_ParamLimits

0xd9a1,	// (0x0008afa5) main_cam5_pane_t1

0xd9b3,	// (0x0008afb7) main_cam5_pane_t2_ParamLimits

0xd9b3,	// (0x0008afb7) main_cam5_pane_t2

0xd9c5,	// (0x0008afc9) main_cam5_pane_t3_ParamLimits

0xd9c5,	// (0x0008afc9) main_cam5_pane_t3

0xd9d7,	// (0x0008afdb) main_cam5_pane_t4_ParamLimits

0xd9d7,	// (0x0008afdb) main_cam5_pane_t4

0xd9ef,	// (0x0008aff3) main_cam5_pane_t5_ParamLimits

0xd9ef,	// (0x0008aff3) main_cam5_pane_t5

0xda03,	// (0x0008b007) main_cam5_pane_t6_ParamLimits

0xda03,	// (0x0008b007) main_cam5_pane_t6

0xda17,	// (0x0008b01b) main_cam5_pane_t7_ParamLimits

0xda17,	// (0x0008b01b) main_cam5_pane_t7

0xda29,	// (0x0008b02d) main_cam5_pane_t8_ParamLimits

0xda29,	// (0x0008b02d) main_cam5_pane_t8

0xda47,	// (0x0008b04b) main_cam5_pane_t9_ParamLimits

0xda47,	// (0x0008b04b) main_cam5_pane_t9

0xda59,	// (0x0008b05d) main_cam5_pane_t10_ParamLimits

0xda59,	// (0x0008b05d) main_cam5_pane_t10

0xda6b,	// (0x0008b06f) main_cam5_pane_t11_ParamLimits

0xda6b,	// (0x0008b06f) main_cam5_pane_t11

0xda7f,	// (0x0008b083) main_cam5_pane_t12_ParamLimits

0xda7f,	// (0x0008b083) main_cam5_pane_t12

0xda96,	// (0x0008b09a) main_cam5_pane_t13_ParamLimits

0xda96,	// (0x0008b09a) main_cam5_pane_t13

0x000c,

0xfa3c,	// (0x0008d040) main_cam5_pane_t_ParamLimits

0xfa3c,	// (0x0008d040) main_cam5_pane_t

0x2085,	// (0x0007f689) popup_scut_keymap_window_ParamLimits

0x2085,	// (0x0007f689) popup_scut_keymap_window

0x825f,	// (0x00085863) aid_size_cell_brow_shortcut

0xaaca,	// (0x000880ce) bg_popup_window_pane_cp010

0x826b,	// (0x0008586f) grid_scut_pane

0x8277,	// (0x0008587b) cell_scut_pane_ParamLimits

0x8277,	// (0x0008587b) cell_scut_pane

0x8292,	// (0x00085896) cell_scut_pane_g1

0xdab9,	// (0x0008b0bd) cell_scut_pane_t1

0xdac8,	// (0x0008b0cc) cell_scut_pane_t2

0x829b,	// (0x0008589f) cell_scut_pane_t3

0x0002,

0xfa57,	// (0x0008d05b) cell_scut_pane_t

0x6242,	// (0x00083846) main_mup3_pane_g8_ParamLimits

0x6242,	// (0x00083846) main_mup3_pane_g8

0x7689,	// (0x00084c8d) area_vitu2_query_pane_ParamLimits

0x7689,	// (0x00084c8d) area_vitu2_query_pane

0x0fe5,	// (0x0007e5e9) input_focus_pane_cp08

0xdad7,	// (0x0008b0db) area_vitu2_query_pane_g1

0x10e6,	// (0x0007e6ea) area_vitu2_query_pane_g2

0x0001,

0xfa5e,	// (0x0008d062) area_vitu2_query_pane_g

0x82a9,	// (0x000858ad) area_vitu2_query_pane_t1_ParamLimits

0x82a9,	// (0x000858ad) area_vitu2_query_pane_t1

0x82bd,	// (0x000858c1) area_vitu2_query_pane_t2_ParamLimits

0x82bd,	// (0x000858c1) area_vitu2_query_pane_t2

0x10f7,	// (0x0007e6fb) area_vitu2_query_pane_t3_ParamLimits

0x10f7,	// (0x0007e6fb) area_vitu2_query_pane_t3

0x111f,	// (0x0007e723) area_vitu2_query_pane_t4_ParamLimits

0x111f,	// (0x0007e723) area_vitu2_query_pane_t4

0x1147,	// (0x0007e74b) area_vitu2_query_pane_t5_ParamLimits

0x1147,	// (0x0007e74b) area_vitu2_query_pane_t5

0x116f,	// (0x0007e773) area_vitu2_query_pane_t6_ParamLimits

0x116f,	// (0x0007e773) area_vitu2_query_pane_t6

0x0006,

0xfa63,	// (0x0008d067) area_vitu2_query_pane_t_ParamLimits

0xfa63,	// (0x0008d067) area_vitu2_query_pane_t

0x82d1,	// (0x000858d5) bg_button_pane_cp018

0x82df,	// (0x000858e3) bg_button_pane_cp021

0x11bb,	// (0x0007e7bf) bg_button_pane_cp022

0x11cc,	// (0x0007e7d0) input_focus_pane_cp09

0x46fb,	// (0x00081cff) aid_size_touch_mv_arrow_left

0x4726,	// (0x00081d2a) aid_size_touch_mv_arrow_right

0x7c3b,	// (0x0008523f) main_cset_slider_pane_g16_ParamLimits

0x7c3b,	// (0x0008523f) main_cset_slider_pane_g16

0x7c47,	// (0x0008524b) main_cset_slider_pane_g17_ParamLimits

0x7c47,	// (0x0008524b) main_cset_slider_pane_g17

0x824c,	// (0x00085850) cell_cam4_burst_pane_g1_ParamLimits

0xa162,	// (0x00087766) compa_mode_pane

0x7e41,	// (0x00085445) popup_vtel_slider_window_g3_ParamLimits

0x7e41,	// (0x00085445) popup_vtel_slider_window_g3

0x7e55,	// (0x00085459) popup_vtel_slider_window_g4_ParamLimits

0x7e55,	// (0x00085459) popup_vtel_slider_window_g4

0x7e69,	// (0x0008546d) popup_vtel_slider_window_t1_ParamLimits

0x7e69,	// (0x0008546d) popup_vtel_slider_window_t1

0xa162,	// (0x00087766) main_cl_pane

0xc849,	// (0x00089e4d) popup_imed_adjust2_window_ParamLimits

0xc81d,	// (0x00089e21) bg_tb_trans_pane_cp05_ParamLimits

0xd173,	// (0x0008a777) popup_imed_adjust2_window_g1_ParamLimits

0xd182,	// (0x0008a786) popup_imed_adjust2_window_g2_ParamLimits

0xd182,	// (0x0008a786) popup_imed_adjust2_window_g2

0xd18e,	// (0x0008a792) popup_imed_adjust2_window_g3_ParamLimits

0xd18e,	// (0x0008a792) popup_imed_adjust2_window_g3

0x0002,

0xf7ce,	// (0x0008cdd2) popup_imed_adjust2_window_g_ParamLimits

0xf7ce,	// (0x0008cdd2) popup_imed_adjust2_window_g

0xd19a,	// (0x0008a79e) popup_imed_adjust2_window_t1_ParamLimits

0xd1b2,	// (0x0008a7b6) slider_imed_adjust_pane_ParamLimits

0xd1c6,	// (0x0008a7ca) slider_imed_adjust_pane_g1_ParamLimits

0xd1d6,	// (0x0008a7da) slider_imed_adjust_pane_g2_ParamLimits

0xd1e6,	// (0x0008a7ea) slider_imed_adjust_pane_g3_ParamLimits

0xd1f7,	// (0x0008a7fb) slider_imed_adjust_pane_g4_ParamLimits

0xf7d5,	// (0x0008cdd9) slider_imed_adjust_pane_g_ParamLimits

0x73ca,	// (0x000849ce) aid_touch_area_cam4_ParamLimits

0x73ca,	// (0x000849ce) aid_touch_area_cam4

0x73da,	// (0x000849de) battery_pane_cp01

0x7461,	// (0x00084a65) main_camera4_pane_g6_ParamLimits

0x7461,	// (0x00084a65) main_camera4_pane_g6

0x747f,	// (0x00084a83) main_camera4_pane_t2_ParamLimits

0x747f,	// (0x00084a83) main_camera4_pane_t2

0x0001,

0xf8d8,	// (0x0008cedc) main_camera4_pane_t_ParamLimits

0xf8d8,	// (0x0008cedc) main_camera4_pane_t

0x7502,	// (0x00084b06) aid_touch_area_vid4_ParamLimits

0x7502,	// (0x00084b06) aid_touch_area_vid4

0x7542,	// (0x00084b46) main_video4_pane_g5_ParamLimits

0x7542,	// (0x00084b46) main_video4_pane_g5

0x7568,	// (0x00084b6c) vid4_progress_pane_ParamLimits

0x7568,	// (0x00084b6c) vid4_progress_pane

0xd7c7,	// (0x0008adcb) main_cset_slider_pane_g18_ParamLimits

0xd7c7,	// (0x0008adcb) main_cset_slider_pane_g18

0xd995,	// (0x0008af99) cell_cam4_burst_pane_g2_ParamLimits

0xd995,	// (0x0008af99) cell_cam4_burst_pane_g2

0x0001,

0xfa37,	// (0x0008d03b) cell_cam4_burst_pane_g_ParamLimits

0xfa37,	// (0x0008d03b) cell_cam4_burst_pane_g

0x82eb,	// (0x000858ef) bg_cl_pane_ParamLimits

0x82eb,	// (0x000858ef) bg_cl_pane

0x82f7,	// (0x000858fb) cl_header_pane_ParamLimits

0x82f7,	// (0x000858fb) cl_header_pane

0x8303,	// (0x00085907) cl_listscroll_pane_ParamLimits

0x8303,	// (0x00085907) cl_listscroll_pane

0xdae3,	// (0x0008b0e7) bg_cl_pane_g1

0xdaeb,	// (0x0008b0ef) bg_cl_pane_g2

0xdaf3,	// (0x0008b0f7) bg_cl_pane_g3

0xdafb,	// (0x0008b0ff) bg_cl_pane_g4

0xdb03,	// (0x0008b107) bg_cl_pane_g5

0xdb0b,	// (0x0008b10f) bg_cl_pane_g6

0xdb13,	// (0x0008b117) bg_cl_pane_g7

0xdb1b,	// (0x0008b11f) bg_cl_pane_g8

0xdb23,	// (0x0008b127) bg_cl_pane_g9

0x0008,

0xfa72,	// (0x0008d076) bg_cl_pane_g

0x830f,	// (0x00085913) aid_height_cl_leading_ParamLimits

0x830f,	// (0x00085913) aid_height_cl_leading

0x831b,	// (0x0008591f) aid_height_cl_text_ParamLimits

0x831b,	// (0x0008591f) aid_height_cl_text

0x20c6,	// (0x0007f6ca) bg_cl_header_pane_ParamLimits

0x20c6,	// (0x0007f6ca) bg_cl_header_pane

0x8333,	// (0x00085937) cl_header_pane_g1_ParamLimits

0x8333,	// (0x00085937) cl_header_pane_g1

0x8340,	// (0x00085944) cl_header_pane_t1_ParamLimits

0x8340,	// (0x00085944) cl_header_pane_t1

0xdb2b,	// (0x0008b12f) cl_list_pane

0xd79a,	// (0x0008ad9e) hc_scroll_pane_cp01

0xad07,	// (0x0008830b) bg_cl_header_pane_g1

0xd67c,	// (0x0008ac80) bg_cl_header_pane_g2

0xad27,	// (0x0008832b) bg_cl_header_pane_g3

0xd68c,	// (0x0008ac90) bg_cl_header_pane_g4

0xd684,	// (0x0008ac88) bg_cl_header_pane_g5

0xd8b0,	// (0x0008aeb4) bg_cl_header_pane_g6

0xd6a4,	// (0x0008aca8) bg_cl_header_pane_g7

0xd6ac,	// (0x0008acb0) bg_cl_header_pane_g8

0xd69c,	// (0x0008aca0) bg_cl_header_pane_g9

0x0008,

0xfa85,	// (0x0008d089) bg_cl_header_pane_g

0x8352,	// (0x00085956) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8352,	// (0x00085956) hc_cl_list_double_graphic_heading_pane

0x8362,	// (0x00085966) hc_cl_list_single_graphic_pane_ParamLimits

0x8362,	// (0x00085966) hc_cl_list_single_graphic_pane

0x8374,	// (0x00085978) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8374,	// (0x00085978) hc_cl_list_single_graphic_pane_g1

0x8380,	// (0x00085984) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8380,	// (0x00085984) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa98,	// (0x0008d09c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa98,	// (0x0008d09c) hc_cl_list_single_graphic_pane_g

0x8394,	// (0x00085998) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8394,	// (0x00085998) hc_cl_list_single_graphic_pane_t1

0x8374,	// (0x00085978) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8374,	// (0x00085978) hc_cl_list_double_graphic_heading_pane_g1

0x83a9,	// (0x000859ad) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x83a9,	// (0x000859ad) hc_cl_list_double_graphic_heading_pane_g2

0x83bd,	// (0x000859c1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x83bd,	// (0x000859c1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa9d,	// (0x0008d0a1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa9d,	// (0x0008d0a1) hc_cl_list_double_graphic_heading_pane_g

0x83d1,	// (0x000859d5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x83d1,	// (0x000859d5) hc_cl_list_double_graphic_heading_pane_t1

0x83e6,	// (0x000859ea) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x83e6,	// (0x000859ea) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaa4,	// (0x0008d0a8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaa4,	// (0x0008d0a8) hc_cl_list_double_graphic_heading_pane_t

0x8403,	// (0x00085a07) vid4_progress_pane_g1

0x8415,	// (0x00085a19) vid4_progress_pane_g2

0x4da7,	// (0x000823ab) vid4_progress_pane_g3

0x8427,	// (0x00085a2b) vid4_progress_pane_g4

0x0004,

0xfaa9,	// (0x0008d0ad) vid4_progress_pane_g

0x8445,	// (0x00085a49) vid4_progress_pane_t1

0x845a,	// (0x00085a5e) vid4_progress_pane_t2

0x0002,

0xfab4,	// (0x0008d0b8) vid4_progress_pane_t

0x8485,	// (0x00085a89) wait_bar_pane_cp07

0xca5b,	// (0x0008a05f) blid_firmament_pane_ParamLimits

0xca9e,	// (0x0008a0a2) popup_blid_sat_info2_window_g1

0xcac2,	// (0x0008a0c6) popup_blid_sat_info2_window_t3

0xcad0,	// (0x0008a0d4) popup_blid_sat_info2_window_t4

0xcade,	// (0x0008a0e2) popup_blid_sat_info2_window_t5

0xcaec,	// (0x0008a0f0) popup_blid_sat_info2_window_t6

0xcafc,	// (0x0008a100) popup_blid_sat_info2_window_t7

0xcb0a,	// (0x0008a10e) popup_blid_sat_info2_window_t8

0xcb18,	// (0x0008a11c) popup_blid_sat_info2_window_t9

0xcb26,	// (0x0008a12a) popup_blid_sat_info2_window_t10

0xcbee,	// (0x0008a1f2) aid_firma_cardinal_ParamLimits

0xcc02,	// (0x0008a206) blid_firmament_pane_t1_ParamLimits

0xcc19,	// (0x0008a21d) blid_firmament_pane_t2_ParamLimits

0xcc30,	// (0x0008a234) blid_firmament_pane_t3_ParamLimits

0xcc47,	// (0x0008a24b) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0008ccd7) blid_firmament_pane_t_ParamLimits

0xcc5e,	// (0x0008a262) blid_sat_info_pane_ParamLimits

0xa8a8,	// (0x00087eac) main_cam_set_pane_ParamLimits

0x69e6,	// (0x00083fea) aid_size_cell_colour_35_ParamLimits

0x6a00,	// (0x00084004) aid_size_cell_colour_112_ParamLimits

0x6a17,	// (0x0008401b) aid_size_cell_effect_ParamLimits

0xa8a8,	// (0x00087eac) bg_tb_trans_pane_cp02_ParamLimits

0xb05d,	// (0x00088661) heading_imed_pane_ParamLimits

0x6a31,	// (0x00084035) listscroll_imed_pane_ParamLimits

0xbe3f,	// (0x00089443) popup_call2_audio_first_window_g5_ParamLimits

0xbe3f,	// (0x00089443) popup_call2_audio_first_window_g5

0x7143,	// (0x00084747) aid_size_touch_image3_arrow_left_ParamLimits

0x7143,	// (0x00084747) aid_size_touch_image3_arrow_left

0x7159,	// (0x0008475d) aid_size_touch_image3_arrow_right_ParamLimits

0x7159,	// (0x0008475d) aid_size_touch_image3_arrow_right

0x8470,	// (0x00085a74) vid4_progress_pane_t3

0x6cdf,	// (0x000842e3) main_hwr_training_symbol_option_pane_ParamLimits

0x6cdf,	// (0x000842e3) main_hwr_training_symbol_option_pane

0xd462,	// (0x0008aa66) popup_hwr_training_preview_window_ParamLimits

0xd462,	// (0x0008aa66) popup_hwr_training_preview_window

0x6d40,	// (0x00084344) hwr_training_navi_pane_g5_ParamLimits

0x6d40,	// (0x00084344) hwr_training_navi_pane_g5

0xd66a,	// (0x0008ac6e) popup_char_count_window

0x20c6,	// (0x0007f6ca) bg_popup_sub_pane_cp20_ParamLimits

0x7f62,	// (0x00085566) list_vitu2_match_list_pane_ParamLimits

0x7f6e,	// (0x00085572) vitu2_page_scroll_pane_ParamLimits

0x7f6e,	// (0x00085572) vitu2_page_scroll_pane

0xdb34,	// (0x0008b138) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb34,	// (0x0008b138) list_single_hwr_training_symbol_option_pane

0xdb47,	// (0x0008b14b) list_single_hwr_training_symbol_option_pane_g1

0xdb4f,	// (0x0008b153) list_single_hwr_training_symbol_option_pane_t1

0xdb5d,	// (0x0008b161) bg_button_pane_cp023

0xdb66,	// (0x0008b16a) bg_button_pane_cp024

0x84c5,	// (0x00085ac9) vitu2_page_scroll_pane_g1

0x84cd,	// (0x00085ad1) vitu2_page_scroll_pane_g2

0x0001,

0xfabb,	// (0x0008d0bf) vitu2_page_scroll_pane_g

0x84d7,	// (0x00085adb) vitu2_page_scroll_pane_t1

0xdbce,	// (0x0008b1d2) popup_char_count_window_g1

0xdbd7,	// (0x0008b1db) popup_char_count_window_g2

0xdbe0,	// (0x0008b1e4) popup_char_count_window_g3

0x0002,

0xfac0,	// (0x0008d0c4) popup_char_count_window_g

0xdbe9,	// (0x0008b1ed) popup_char_count_window_t1

0xa162,	// (0x00087766) main_vded2_pane

0xd15f,	// (0x0008a763) aid_size_cell_imed_line

0xd169,	// (0x0008a76d) grid_imed_line_width_pane

0x75dc,	// (0x00084be0) vid4_indicators_pane_g4

0xdbf7,	// (0x0008b1fb) cell_imed_line_width_pane_ParamLimits

0xdbf7,	// (0x0008b1fb) cell_imed_line_width_pane

0xdc0d,	// (0x0008b211) cell_imed_line_width_pane_g1

0xd113,	// (0x0008a717) cell_imed_line_width_pane_g2

0x0001,

0xfac7,	// (0x0008d0cb) cell_imed_line_width_pane_g

0x84e6,	// (0x00085aea) main_vded2_pane_g1_ParamLimits

0x84e6,	// (0x00085aea) main_vded2_pane_g1

0x84f5,	// (0x00085af9) main_vded2_pane_g2_ParamLimits

0x84f5,	// (0x00085af9) main_vded2_pane_g2

0x0001,

0xfacc,	// (0x0008d0d0) main_vded2_pane_g_ParamLimits

0xfacc,	// (0x0008d0d0) main_vded2_pane_g

0x8503,	// (0x00085b07) vded2_slider_pane_ParamLimits

0x8503,	// (0x00085b07) vded2_slider_pane

0x8510,	// (0x00085b14) aid_size_touch_vded2_end

0x851a,	// (0x00085b1e) aid_size_touch_vded2_playhead

0xdc16,	// (0x0008b21a) aid_size_touch_vded2_start

0xdc1e,	// (0x0008b222) vded2_slider_bg_pane

0xdc27,	// (0x0008b22b) vded2_slider_pane_g1

0xdc30,	// (0x0008b234) vded2_slider_pane_g2

0x8522,	// (0x00085b26) vded2_slider_pane_g3

0x0002,

0xfad1,	// (0x0008d0d5) vded2_slider_pane_g

0xdb7b,	// (0x0008b17f) vded2_slider_bg_pane_g1

0xdb84,	// (0x0008b188) vded2_slider_bg_pane_g2

0xdb8d,	// (0x0008b191) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0008cda7) vded2_slider_bg_pane_g

0x4dbf,	// (0x000823c3) aid_postcard_touch_down_pane_ParamLimits

0x4dbf,	// (0x000823c3) aid_postcard_touch_down_pane

0x4dcf,	// (0x000823d3) aid_postcard_touch_up_pane_ParamLimits

0x4dcf,	// (0x000823d3) aid_postcard_touch_up_pane

0xa162,	// (0x00087766) main_blid2_pane

0xc82b,	// (0x00089e2f) popup_blid2_search_window

0xa162,	// (0x00087766) blid2_gps_pane

0xa162,	// (0x00087766) blid2_navig_pane

0xa162,	// (0x00087766) blid2_search_pane

0xa162,	// (0x00087766) blid2_tripm_pane

0x852b,	// (0x00085b2f) blid2_search_pane_g1_ParamLimits

0x852b,	// (0x00085b2f) blid2_search_pane_g1

0x8537,	// (0x00085b3b) blid2_search_pane_t1_ParamLimits

0x8537,	// (0x00085b3b) blid2_search_pane_t1

0x8549,	// (0x00085b4d) aid_size_cell_blid2_gps_ParamLimits

0x8549,	// (0x00085b4d) aid_size_cell_blid2_gps

0x8559,	// (0x00085b5d) blid2_gps_pane_g1_ParamLimits

0x8559,	// (0x00085b5d) blid2_gps_pane_g1

0x8565,	// (0x00085b69) grid_blid2_satellite_pane_ParamLimits

0x8565,	// (0x00085b69) grid_blid2_satellite_pane

0x8573,	// (0x00085b77) blid2_navig_pane_g1_ParamLimits

0x8573,	// (0x00085b77) blid2_navig_pane_g1

0x857f,	// (0x00085b83) blid2_navig_pane_t1_ParamLimits

0x857f,	// (0x00085b83) blid2_navig_pane_t1

0x8591,	// (0x00085b95) blid2_navig_pane_t2_ParamLimits

0x8591,	// (0x00085b95) blid2_navig_pane_t2

0x0001,

0xfad8,	// (0x0008d0dc) blid2_navig_pane_t_ParamLimits

0xfad8,	// (0x0008d0dc) blid2_navig_pane_t

0x85a3,	// (0x00085ba7) blid2_navig_ring_pane_ParamLimits

0x85a3,	// (0x00085ba7) blid2_navig_ring_pane

0x85b3,	// (0x00085bb7) blid2_speed_pane_ParamLimits

0x85b3,	// (0x00085bb7) blid2_speed_pane

0x85bf,	// (0x00085bc3) blid2_tripm_pane_g1_ParamLimits

0x85bf,	// (0x00085bc3) blid2_tripm_pane_g1

0x85cf,	// (0x00085bd3) blid2_tripm_pane_g2_ParamLimits

0x85cf,	// (0x00085bd3) blid2_tripm_pane_g2

0x85db,	// (0x00085bdf) blid2_tripm_pane_g3_ParamLimits

0x85db,	// (0x00085bdf) blid2_tripm_pane_g3

0x85e7,	// (0x00085beb) blid2_tripm_pane_g4_ParamLimits

0x85e7,	// (0x00085beb) blid2_tripm_pane_g4

0x85f3,	// (0x00085bf7) blid2_tripm_pane_g5_ParamLimits

0x85f3,	// (0x00085bf7) blid2_tripm_pane_g5

0x0005,

0xfadd,	// (0x0008d0e1) blid2_tripm_pane_g_ParamLimits

0xfadd,	// (0x0008d0e1) blid2_tripm_pane_g

0x860f,	// (0x00085c13) blid2_tripm_pane_t1_ParamLimits

0x860f,	// (0x00085c13) blid2_tripm_pane_t1

0x8621,	// (0x00085c25) blid2_tripm_pane_t2_ParamLimits

0x8621,	// (0x00085c25) blid2_tripm_pane_t2

0x8633,	// (0x00085c37) blid2_tripm_pane_t3_ParamLimits

0x8633,	// (0x00085c37) blid2_tripm_pane_t3

0x0003,

0xfaea,	// (0x0008d0ee) blid2_tripm_pane_t_ParamLimits

0xfaea,	// (0x0008d0ee) blid2_tripm_pane_t

0x8665,	// (0x00085c69) cell_blid2_satellite_pane_ParamLimits

0x8665,	// (0x00085c69) cell_blid2_satellite_pane

0x8683,	// (0x00085c87) cell_blid2_satellite_pane_g1

0xdc38,	// (0x0008b23c) cell_blid2_satellite_pane_t1

0xcc6e,	// (0x0008a272) blid2_speed_pane_g1

0xdc46,	// (0x0008b24a) blid2_speed_pane_t1

0xdc54,	// (0x0008b258) blid2_speed_pane_t2

0x0001,

0xfaf3,	// (0x0008d0f7) blid2_speed_pane_t

0xcc6e,	// (0x0008a272) blid2_navig_ring_pane_g1

0x868c,	// (0x00085c90) blid2_navig_ring_pane_g2

0x8694,	// (0x00085c98) blid2_navig_ring_pane_g3

0x869c,	// (0x00085ca0) blid2_navig_ring_pane_g4

0x86a4,	// (0x00085ca8) blid2_navig_ring_pane_g5

0x0004,

0xfaf8,	// (0x0008d0fc) blid2_navig_ring_pane_g

0xa162,	// (0x00087766) bg_popup_window_pane_cp011

0xdc62,	// (0x0008b266) popup_blid2_search_window_g1

0xdc6a,	// (0x0008b26e) popup_blid2_search_window_t1

0xdc78,	// (0x0008b27c) popup_blid2_search_window_t2

0x0001,

0xfb03,	// (0x0008d107) popup_blid2_search_window_t

0xac16,	// (0x0008821a) main_browser_pane_g1

0xa914,	// (0x00087f18) main_browser_pane_ParamLimits

0xa8a8,	// (0x00087eac) bg_button_pane_cp011_ParamLimits

0x784e,	// (0x00084e52) cell_vitu2_function_pane_g1_ParamLimits

0xc81d,	// (0x00089e21) bg_popup_sub_pane_cp22_ParamLimits

0x0fe5,	// (0x0007e5e9) input_focus_pane_cp08_ParamLimits

0x80ea,	// (0x000856ee) popup_vitu2_query_button_pane_ParamLimits

0x80ea,	// (0x000856ee) popup_vitu2_query_button_pane

0x0ffc,	// (0x0007e600) popup_vitu2_query_input_button_pane

0xd8eb,	// (0x0008aeef) popup_vitu2_query_window_g1_ParamLimits

0x1006,	// (0x0007e60a) popup_vitu2_query_window_g2_ParamLimits

0xfa0b,	// (0x0008d00f) popup_vitu2_query_window_g_ParamLimits

0xa162,	// (0x00087766) bg_button_pane_cp026

0x86ac,	// (0x00085cb0) popup_vitu2_query_input_button_pane_g1

0xa162,	// (0x00087766) bg_button_pane_cp025

0xdc86,	// (0x0008b28a) popup_vitu2_query_button_pane_t1

0x5f60,	// (0x00083564) main_mp3_pane_t6

0x5f70,	// (0x00083574) popup_slider_window_cp01

0x74b7,	// (0x00084abb) cam4_battery_pane

0x7595,	// (0x00084b99) cam4_battery_pane_cp02

0x83fb,	// (0x000859ff) cam4_battery_pane_cp01

0x83fb,	// (0x000859ff) cam4_battery_pane_cp03

0xcc6e,	// (0x0008a272) cam4_battery_pane_g1

0xd801,	// (0x0008ae05) cam4_battery_pane_g2

0x0001,

0xfb08,	// (0x0008d10c) cam4_battery_pane_g

0xcb34,	// (0x0008a138) popup_blid_sat_info2_window_t11

0x46fb,	// (0x00081cff) aid_size_touch_mv_arrow_left_ParamLimits

0x4726,	// (0x00081d2a) aid_size_touch_mv_arrow_right_ParamLimits

0xb360,	// (0x00088964) navi_pane_g1_ParamLimits

0x4765,	// (0x00081d69) navi_pane_g2_ParamLimits

0x4793,	// (0x00081d97) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0008c9e9) navi_pane_g_ParamLimits

0x47ed,	// (0x00081df1) navi_pane_mv_t1_ParamLimits

0x6a3d,	// (0x00084041) grid_imed_effect_pane_ParamLimits

0x3211,	// (0x00080815) aid_placing_vt_slider_lsc

0xab61,	// (0x00088165) aid_placing_vt_slider_prt

0xa8a8,	// (0x00087eac) bg_tb_trans_pane_cp01_ParamLimits

0xcdbe,	// (0x0008a3c2) popup_image_details_window_g1_ParamLimits

0xcdd1,	// (0x0008a3d5) popup_image_details_window_g2_ParamLimits

0xcde6,	// (0x0008a3ea) popup_image_details_window_g3_ParamLimits

0xcde6,	// (0x0008a3ea) popup_image_details_window_g3

0xf718,	// (0x0008cd1c) popup_image_details_window_g_ParamLimits

0xcdfa,	// (0x0008a3fe) popup_image_details_window_t1_ParamLimits

0xce0c,	// (0x0008a410) popup_image_details_window_t2_ParamLimits

0xce25,	// (0x0008a429) popup_image_details_window_t3_ParamLimits

0xce39,	// (0x0008a43d) popup_image_details_window_t4_ParamLimits

0xce54,	// (0x0008a458) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0008cd23) popup_image_details_window_t_ParamLimits

0x8327,	// (0x0008592b) cl_header_name_pane_ParamLimits

0x8327,	// (0x0008592b) cl_header_name_pane

0x86b4,	// (0x00085cb8) cl_header_name_pane_t1_ParamLimits

0x86b4,	// (0x00085cb8) cl_header_name_pane_t1

0x86cb,	// (0x00085ccf) cl_header_name_pane_t2_ParamLimits

0x86cb,	// (0x00085ccf) cl_header_name_pane_t2

0x86f5,	// (0x00085cf9) cl_header_name_pane_t3_ParamLimits

0x86f5,	// (0x00085cf9) cl_header_name_pane_t3

0x0002,

0xfb0d,	// (0x0008d111) cl_header_name_pane_t_ParamLimits

0xfb0d,	// (0x0008d111) cl_header_name_pane_t

0x47be,	// (0x00081dc2) navi_pane_mv_g2_ParamLimits

0xd644,	// (0x0008ac48) field_vitu2_entry_pane_g1_ParamLimits

0xd650,	// (0x0008ac54) field_vitu2_entry_pane_g2_ParamLimits

0xd65c,	// (0x0008ac60) field_vitu2_entry_pane_g3_ParamLimits

0xd65c,	// (0x0008ac60) field_vitu2_entry_pane_g3

0xf90a,	// (0x0008cf0e) field_vitu2_entry_pane_g_ParamLimits

0x77e2,	// (0x00084de6) cell_vitu2_itu_pane_g1_ParamLimits

0x77f4,	// (0x00084df8) cell_vitu2_itu_pane_g2_ParamLimits

0x77f4,	// (0x00084df8) cell_vitu2_itu_pane_g2

0x0001,

0xf916,	// (0x0008cf1a) cell_vitu2_itu_pane_g_ParamLimits

0xf916,	// (0x0008cf1a) cell_vitu2_itu_pane_g

0xa8a8,	// (0x00087eac) bg_vkb2_func_pane_cp05_ParamLimits

0xa8a8,	// (0x00087eac) bg_vkb2_func_pane_cp05

0xa8a8,	// (0x00087eac) bg_vkb2_func_pane_cp03

0xa8a8,	// (0x00087eac) bg_vkb2_func_pane_cp04

0xa8a8,	// (0x00087eac) bg_vkb2_func_pane_cp10_ParamLimits

0xa8a8,	// (0x00087eac) bg_vkb2_func_pane_cp10

0x11bb,	// (0x0007e7bf) bg_vkb2_func_pane_cp08

0x82d1,	// (0x000858d5) bg_vkb2_func_pane_cp06

0x82df,	// (0x000858e3) bg_vkb2_func_pane_cp07

0xdba4,	// (0x0008b1a8) bg_vkb2_func_pane_cp11_ParamLimits

0xdba4,	// (0x0008b1a8) bg_vkb2_func_pane_cp11

0xdbb9,	// (0x0008b1bd) bg_vkb2_func_pane_cp12_ParamLimits

0xdbb9,	// (0x0008b1bd) bg_vkb2_func_pane_cp12

0xa162,	// (0x00087766) bg_vkb2_func_pane_cp09

0xd67c,	// (0x0008ac80) bg_vkb2_func_pane_g1

0xad27,	// (0x0008832b) bg_vkb2_func_pane_g2

0xd684,	// (0x0008ac88) bg_vkb2_func_pane_g3

0xd68c,	// (0x0008ac90) bg_vkb2_func_pane_g4

0xd8b0,	// (0x0008aeb4) bg_vkb2_func_pane_g5

0xd6a4,	// (0x0008aca8) bg_vkb2_func_pane_g6

0xd6ac,	// (0x0008acb0) bg_vkb2_func_pane_g7

0xd69c,	// (0x0008aca0) bg_vkb2_func_pane_g8

0xad07,	// (0x0008830b) bg_vkb2_func_pane_g9

0x0008,

0xfb14,	// (0x0008d118) bg_vkb2_func_pane_g

0x8601,	// (0x00085c05) blid2_tripm_pane_g6_ParamLimits

0x8601,	// (0x00085c05) blid2_tripm_pane_g6

0xd51a,	// (0x0008ab1e) mp4_progress_pane_g1

0x8659,	// (0x00085c5d) blid2_tripm_values_pane_ParamLimits

0x8659,	// (0x00085c5d) blid2_tripm_values_pane

0x871a,	// (0x00085d1e) blid2_tripm_values_pane_t1

0x8728,	// (0x00085d2c) blid2_tripm_values_pane_t2

0x8736,	// (0x00085d3a) blid2_tripm_values_pane_t3

0x8744,	// (0x00085d48) blid2_tripm_values_pane_t4

0x8752,	// (0x00085d56) blid2_tripm_values_pane_t5

0x8760,	// (0x00085d64) blid2_tripm_values_pane_t6

0x876e,	// (0x00085d72) blid2_tripm_values_pane_t7

0x877c,	// (0x00085d80) blid2_tripm_values_pane_t8

0x878a,	// (0x00085d8e) blid2_tripm_values_pane_t9

0x0008,

0xfb27,	// (0x0008d12b) blid2_tripm_values_pane_t

0x324f,	// (0x00080853) call_video_pane_t1_ParamLimits

0x326c,	// (0x00080870) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0008c872) call_video_pane_t_ParamLimits

0x0d9f,	// (0x0007e3a3) msg_header_pane_g1_ParamLimits

0xb583,	// (0x00088b87) msg_header_pane_g2_ParamLimits

0xb583,	// (0x00088b87) msg_header_pane_g2

0x0001,

0xf488,	// (0x0008ca8c) msg_header_pane_g_ParamLimits

0xf488,	// (0x0008ca8c) msg_header_pane_g

0xa914,	// (0x00087f18) main_clock2_pane_ParamLimits

0x67cc,	// (0x00083dd0) grid_clock2_toolbar_pane_ParamLimits

0x67cc,	// (0x00083dd0) grid_clock2_toolbar_pane

0x67cc,	// (0x00083dd0) listscroll_clock2_pane_ParamLimits

0x67cc,	// (0x00083dd0) listscroll_clock2_pane

0x6874,	// (0x00083e78) main_clock2_pane_t3_ParamLimits

0x6874,	// (0x00083e78) main_clock2_pane_t3

0x6886,	// (0x00083e8a) main_clock2_pane_t4_ParamLimits

0x6886,	// (0x00083e8a) main_clock2_pane_t4

0xdc94,	// (0x0008b298) cell_clock2_toolbar_pane

0xdc9c,	// (0x0008b2a0) cell_clock2_toolbar_pane_cp01

0xdc9c,	// (0x0008b2a0) cell_clock2_toolbar_pane_cp02

0xdca4,	// (0x0008b2a8) cell_clock2_toolbar_pane_cp03

0xdcac,	// (0x0008b2b0) list_clock2_pane

0xb2c6,	// (0x000888ca) scroll_pane_cp10

0xdcb4,	// (0x0008b2b8) list_single_clock2_pane_ParamLimits

0xdcb4,	// (0x0008b2b8) list_single_clock2_pane

0xaaca,	// (0x000880ce) list_highlight_pane_cp08

0xdcc1,	// (0x0008b2c5) list_single_clock2_pane_t1

0xdccf,	// (0x0008b2d3) list_single_clock2_pane_t2

0x0001,

0xfb3a,	// (0x0008d13e) list_single_clock2_pane_t

0xa162,	// (0x00087766) bg_button_pane_cp10

0xdcdd,	// (0x0008b2e1) cell_clock2_toolbar_pane_g1

0x4d21,	// (0x00082325) aid_main_viewer_pane_g1_ParamLimits

0x4d21,	// (0x00082325) aid_main_viewer_pane_g1

0x4d2d,	// (0x00082331) aid_main_viewer_pane_g2_ParamLimits

0x4d2d,	// (0x00082331) aid_main_viewer_pane_g2

0x4d39,	// (0x0008233d) aid_main_viewer_pane_g3_ParamLimits

0x4d39,	// (0x0008233d) aid_main_viewer_pane_g3

0x4d4a,	// (0x0008234e) aid_main_viewer_pane_g4_ParamLimits

0x4d4a,	// (0x0008234e) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0008ca9d) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0008ca9d) aid_main_viewer_pane_g

0x54d4,	// (0x00082ad8) main_calc_pane_ParamLimits

0x54e1,	// (0x00082ae5) main_dialer2_pane_ParamLimits

0xa162,	// (0x00087766) main_cam6_pane

0xa162,	// (0x00087766) main_vid6_pane

0x67d8,	// (0x00083ddc) listscroll_gen_pane_cp06_ParamLimits

0x67d8,	// (0x00083ddc) listscroll_gen_pane_cp06

0x6898,	// (0x00083e9c) main_clock2_pane_t5_ParamLimits

0x6898,	// (0x00083e9c) main_clock2_pane_t5

0x68e7,	// (0x00083eeb) aid_call2_pane_cp10_ParamLimits

0x68f9,	// (0x00083efd) aid_call_pane_cp10_ParamLimits

0xb335,	// (0x00088939) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb335,	// (0x00088939) popup_clock_analogue_window_cp10_g2_ParamLimits

0x690b,	// (0x00083f0f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x690b,	// (0x00083f0f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb335,	// (0x00088939) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7c3,	// (0x0008cdc7) popup_clock_analogue_window_cp10_g_ParamLimits

0x691d,	// (0x00083f21) popup_clock_analogue_window_cp10_t1_ParamLimits

0x70f0,	// (0x000846f4) cell_dialer2_keypad_pane_g2_ParamLimits

0x70f0,	// (0x000846f4) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a9,	// (0x0008cead) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a9,	// (0x0008cead) cell_dialer2_keypad_pane_g

0x710c,	// (0x00084710) cell_dialer2_keypad_pane_t1

0x7b29,	// (0x0008512d) main_cset_text2_pane_ParamLimits

0x7b29,	// (0x0008512d) main_cset_text2_pane

0xdad7,	// (0x0008b0db) area_vitu2_query_pane_g1_ParamLimits

0x10e6,	// (0x0007e6ea) area_vitu2_query_pane_g2_ParamLimits

0xfa5e,	// (0x0008d062) area_vitu2_query_pane_g_ParamLimits

0x1197,	// (0x0007e79b) area_vitu2_query_pane_t7_ParamLimits

0x1197,	// (0x0007e79b) area_vitu2_query_pane_t7

0x82d1,	// (0x000858d5) bg_button_pane_cp018_ParamLimits

0x82df,	// (0x000858e3) bg_button_pane_cp021_ParamLimits

0x11bb,	// (0x0007e7bf) bg_button_pane_cp022_ParamLimits

0x11bb,	// (0x0007e7bf) bg_vkb2_func_pane_cp08_ParamLimits

0x82d1,	// (0x000858d5) bg_vkb2_func_pane_cp06_ParamLimits

0x82df,	// (0x000858e3) bg_vkb2_func_pane_cp07_ParamLimits

0x11cc,	// (0x0007e7d0) input_focus_pane_cp09_ParamLimits

0x8798,	// (0x00085d9c) cam6_autofocus_pane_ParamLimits

0x8798,	// (0x00085d9c) cam6_autofocus_pane

0x87ba,	// (0x00085dbe) cam6_image_uncrop_pane_ParamLimits

0x87ba,	// (0x00085dbe) cam6_image_uncrop_pane

0x87e7,	// (0x00085deb) cam6_indi_pane_ParamLimits

0x87e7,	// (0x00085deb) cam6_indi_pane

0x8801,	// (0x00085e05) cam6_mode_pane_ParamLimits

0x8801,	// (0x00085e05) cam6_mode_pane

0x8815,	// (0x00085e19) cam6_timer_pane_ParamLimits

0x8815,	// (0x00085e19) cam6_timer_pane

0x8821,	// (0x00085e25) cam6_zoom_pane_ParamLimits

0x8821,	// (0x00085e25) cam6_zoom_pane

0x883d,	// (0x00085e41) cam6_mode_pane_g1_ParamLimits

0x883d,	// (0x00085e41) cam6_mode_pane_g1

0x8849,	// (0x00085e4d) cam6_mode_pane_g2_ParamLimits

0x8849,	// (0x00085e4d) cam6_mode_pane_g2

0x8855,	// (0x00085e59) cam6_mode_pane_g3_ParamLimits

0x8855,	// (0x00085e59) cam6_mode_pane_g3

0x8861,	// (0x00085e65) cam6_mode_pane_g4_ParamLimits

0x8861,	// (0x00085e65) cam6_mode_pane_g4

0x0003,

0xfb3f,	// (0x0008d143) cam6_mode_pane_g_ParamLimits

0xfb3f,	// (0x0008d143) cam6_mode_pane_g

0xdb96,	// (0x0008b19a) bg_tb_trans_pane_cp08_ParamLimits

0xdb96,	// (0x0008b19a) bg_tb_trans_pane_cp08

0xdce5,	// (0x0008b2e9) cam6_battery_pane_ParamLimits

0xdce5,	// (0x0008b2e9) cam6_battery_pane

0xdcfb,	// (0x0008b2ff) cam6_indi_pane_g1_ParamLimits

0xdcfb,	// (0x0008b2ff) cam6_indi_pane_g1

0xdd0d,	// (0x0008b311) cam6_indi_pane_g2_ParamLimits

0xdd0d,	// (0x0008b311) cam6_indi_pane_g2

0xdd1f,	// (0x0008b323) cam6_indi_pane_g3_ParamLimits

0xdd1f,	// (0x0008b323) cam6_indi_pane_g3

0x0002,

0xfb48,	// (0x0008d14c) cam6_indi_pane_g_ParamLimits

0xfb48,	// (0x0008d14c) cam6_indi_pane_g

0xdd31,	// (0x0008b335) cam6_indi_pane_t1_ParamLimits

0xdd31,	// (0x0008b335) cam6_indi_pane_t1

0x7611,	// (0x00084c15) cam6_autofocus_pane_g1

0x7619,	// (0x00084c1d) cam6_autofocus_pane_g2

0x7621,	// (0x00084c25) cam6_autofocus_pane_g3

0x7629,	// (0x00084c2d) cam6_autofocus_pane_g4

0x0003,

0xfb4f,	// (0x0008d153) cam6_autofocus_pane_g

0xdd57,	// (0x0008b35b) cam6_timer_pane_g1

0xdd5f,	// (0x0008b363) cam6_timer_pane_t1

0xdd6d,	// (0x0008b371) cam6_zoom_cont_pane

0xdd75,	// (0x0008b379) cam6_zoom_pane_g1

0xdd7d,	// (0x0008b381) cam6_zoom_pane_g2

0x886d,	// (0x00085e71) cam6_zoom_pane_g3

0x0002,

0xfb58,	// (0x0008d15c) cam6_zoom_pane_g

0xcc6e,	// (0x0008a272) cam6_battery_pane_g1

0xcc6e,	// (0x0008a272) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0008cce0) cam6_battery_pane_g

0xdd85,	// (0x0008b389) cam6_zoom_cont_pane_g1

0xdd8e,	// (0x0008b392) cam6_zoom_cont_pane_g2

0xdd97,	// (0x0008b39b) cam6_zoom_cont_pane_g3

0x0002,

0xfb5f,	// (0x0008d163) cam6_zoom_cont_pane_g

0x888a,	// (0x00085e8e) cam6_mode_pane_cp_ParamLimits

0x888a,	// (0x00085e8e) cam6_mode_pane_cp

0x8821,	// (0x00085e25) cam6_zoom_pane_cp_ParamLimits

0x8821,	// (0x00085e25) cam6_zoom_pane_cp

0x889e,	// (0x00085ea2) vid6_image_uncrop_cif_pane_ParamLimits

0x889e,	// (0x00085ea2) vid6_image_uncrop_cif_pane

0x88ca,	// (0x00085ece) vid6_image_uncrop_nhd_pane_ParamLimits

0x88ca,	// (0x00085ece) vid6_image_uncrop_nhd_pane

0x87ba,	// (0x00085dbe) vid6_image_uncrop_vga_pane_ParamLimits

0x87ba,	// (0x00085dbe) vid6_image_uncrop_vga_pane

0x88e9,	// (0x00085eed) vid6_image_uncrop_wvga_pane_ParamLimits

0x88e9,	// (0x00085eed) vid6_image_uncrop_wvga_pane

0x8908,	// (0x00085f0c) vid6_indi_pane_ParamLimits

0x8908,	// (0x00085f0c) vid6_indi_pane

0xdb96,	// (0x0008b19a) bg_tb_trans_pane_cp09_ParamLimits

0xdb96,	// (0x0008b19a) bg_tb_trans_pane_cp09

0xddaf,	// (0x0008b3b3) cam6_battery_pane_cp_ParamLimits

0xddaf,	// (0x0008b3b3) cam6_battery_pane_cp

0xddbb,	// (0x0008b3bf) vid6_indi_pane_g1_ParamLimits

0xddbb,	// (0x0008b3bf) vid6_indi_pane_g1

0xddcd,	// (0x0008b3d1) vid6_indi_pane_g2_ParamLimits

0xddcd,	// (0x0008b3d1) vid6_indi_pane_g2

0xdddf,	// (0x0008b3e3) vid6_indi_pane_g3_ParamLimits

0xdddf,	// (0x0008b3e3) vid6_indi_pane_g3

0xddf6,	// (0x0008b3fa) vid6_indi_pane_g4_ParamLimits

0xddf6,	// (0x0008b3fa) vid6_indi_pane_g4

0xde0d,	// (0x0008b411) vid6_indi_pane_g5_ParamLimits

0xde0d,	// (0x0008b411) vid6_indi_pane_g5

0x0004,

0xfb66,	// (0x0008d16a) vid6_indi_pane_g_ParamLimits

0xfb66,	// (0x0008d16a) vid6_indi_pane_g

0xde27,	// (0x0008b42b) vid6_indi_pane_t1_ParamLimits

0xde27,	// (0x0008b42b) vid6_indi_pane_t1

0xde3d,	// (0x0008b441) vid6_indi_pane_t2_ParamLimits

0xde3d,	// (0x0008b441) vid6_indi_pane_t2

0xde65,	// (0x0008b469) vid6_indi_pane_t3_ParamLimits

0xde65,	// (0x0008b469) vid6_indi_pane_t3

0xde8d,	// (0x0008b491) vid6_indi_pane_t4_ParamLimits

0xde8d,	// (0x0008b491) vid6_indi_pane_t4

0x0003,

0xfb71,	// (0x0008d175) vid6_indi_pane_t_ParamLimits

0xfb71,	// (0x0008d175) vid6_indi_pane_t

0xdeb1,	// (0x0008b4b5) wait_bar_pane_cp08

0x892d,	// (0x00085f31) main_cset_text2_pane_t1_ParamLimits

0x892d,	// (0x00085f31) main_cset_text2_pane_t1

0x8875,	// (0x00085e79) listscroll_gen_pane_cp06_t1_ParamLimits

0x8875,	// (0x00085e79) listscroll_gen_pane_cp06_t1

0xa162,	// (0x00087766) main_cam6_set_pane

0xce9e,	// (0x0008a4a2) bg_tb_trans_pane_cp06_ParamLimits

0x74bf,	// (0x00084ac3) cam4_indicators_pane_g1_ParamLimits

0x74d0,	// (0x00084ad4) cam4_indicators_pane_g2_ParamLimits

0xf8e6,	// (0x0008ceea) cam4_indicators_pane_g_ParamLimits

0x74e8,	// (0x00084aec) cam4_indicators_pane_t1_ParamLimits

0xa8a8,	// (0x00087eac) bg_tb_trans_pane_cp07_ParamLimits

0x759f,	// (0x00084ba3) vid4_indicators_pane_g1_ParamLimits

0x75b5,	// (0x00084bb9) vid4_indicators_pane_g2_ParamLimits

0x75c9,	// (0x00084bcd) vid4_indicators_pane_g3_ParamLimits

0x75dc,	// (0x00084be0) vid4_indicators_pane_g4_ParamLimits

0xf8f8,	// (0x0008cefc) vid4_indicators_pane_g_ParamLimits

0x75fa,	// (0x00084bfe) vid4_indicators_pane_t1_ParamLimits

0x8403,	// (0x00085a07) vid4_progress_pane_g1_ParamLimits

0x8415,	// (0x00085a19) vid4_progress_pane_g2_ParamLimits

0x4da7,	// (0x000823ab) vid4_progress_pane_g3_ParamLimits

0x8427,	// (0x00085a2b) vid4_progress_pane_g4_ParamLimits

0xfaa9,	// (0x0008d0ad) vid4_progress_pane_g_ParamLimits

0x8445,	// (0x00085a49) vid4_progress_pane_t1_ParamLimits

0x845a,	// (0x00085a5e) vid4_progress_pane_t2_ParamLimits

0x8470,	// (0x00085a74) vid4_progress_pane_t3_ParamLimits

0xfab4,	// (0x0008d0b8) vid4_progress_pane_t_ParamLimits

0x8485,	// (0x00085a89) wait_bar_pane_cp07_ParamLimits

0x8954,	// (0x00085f58) main_cam6_set_pane_g2_ParamLimits

0x8954,	// (0x00085f58) main_cam6_set_pane_g2

0x8960,	// (0x00085f64) main_cset6_listscroll_pane_ParamLimits

0x8960,	// (0x00085f64) main_cset6_listscroll_pane

0x898d,	// (0x00085f91) main_cset6_slider_pane_ParamLimits

0x898d,	// (0x00085f91) main_cset6_slider_pane

0x8999,	// (0x00085f9d) main_cset6_text2_pane_ParamLimits

0x8999,	// (0x00085f9d) main_cset6_text2_pane

0xdec0,	// (0x0008b4c4) main_cset6_text_pane

0xdec8,	// (0x0008b4cc) main_cset_list_pane_copy1_ParamLimits

0xdec8,	// (0x0008b4cc) main_cset_list_pane_copy1

0xded8,	// (0x0008b4dc) scroll_pane_cp028_copy1

0x89ac,	// (0x00085fb0) cset_list_set_pane_copy1

0x89bc,	// (0x00085fc0) aid_position_infowindow_above_copy1

0x89c4,	// (0x00085fc8) aid_position_infowindow_below_copy1

0x89cc,	// (0x00085fd0) cset_list_set_pane_g1_copy1

0x120b,	// (0x0007e80f) cset_list_set_pane_g3_copy1_ParamLimits

0x120b,	// (0x0007e80f) cset_list_set_pane_g3_copy1

0x121a,	// (0x0007e81e) cset_list_set_pane_t1_copy1_ParamLimits

0x121a,	// (0x0007e81e) cset_list_set_pane_t1_copy1

0xa8a8,	// (0x00087eac) list_highlight_pane_cp021_copy1_ParamLimits

0xa8a8,	// (0x00087eac) list_highlight_pane_cp021_copy1

0xdee1,	// (0x0008b4e5) cset6_slider_pane_ParamLimits

0xdee1,	// (0x0008b4e5) cset6_slider_pane

0xdf28,	// (0x0008b52c) main_cset6_slider_pane_g1_ParamLimits

0xdf28,	// (0x0008b52c) main_cset6_slider_pane_g1

0x89d4,	// (0x00085fd8) main_cset6_slider_pane_g2_ParamLimits

0x89d4,	// (0x00085fd8) main_cset6_slider_pane_g2

0xdf50,	// (0x0008b554) main_cset6_slider_pane_g3_ParamLimits

0xdf50,	// (0x0008b554) main_cset6_slider_pane_g3

0x89fc,	// (0x00086000) main_cset6_slider_pane_g4_ParamLimits

0x89fc,	// (0x00086000) main_cset6_slider_pane_g4

0x8a08,	// (0x0008600c) main_cset6_slider_pane_g5_ParamLimits

0x8a08,	// (0x0008600c) main_cset6_slider_pane_g5

0xd7af,	// (0x0008adb3) main_cset6_slider_pane_g7_ParamLimits

0xd7af,	// (0x0008adb3) main_cset6_slider_pane_g7

0xd7bb,	// (0x0008adbf) main_cset6_slider_pane_g8_ParamLimits

0xd7bb,	// (0x0008adbf) main_cset6_slider_pane_g8

0x8a14,	// (0x00086018) main_cset6_slider_pane_g9_ParamLimits

0x8a14,	// (0x00086018) main_cset6_slider_pane_g9

0x8a20,	// (0x00086024) main_cset6_slider_pane_g10_ParamLimits

0x8a20,	// (0x00086024) main_cset6_slider_pane_g10

0x8a2c,	// (0x00086030) main_cset6_slider_pane_g11_ParamLimits

0x8a2c,	// (0x00086030) main_cset6_slider_pane_g11

0x8a38,	// (0x0008603c) main_cset6_slider_pane_g12_ParamLimits

0x8a38,	// (0x0008603c) main_cset6_slider_pane_g12

0x8a44,	// (0x00086048) main_cset6_slider_pane_g13_ParamLimits

0x8a44,	// (0x00086048) main_cset6_slider_pane_g13

0x8a50,	// (0x00086054) main_cset6_slider_pane_g14_ParamLimits

0x8a50,	// (0x00086054) main_cset6_slider_pane_g14

0x8a5c,	// (0x00086060) main_cset6_slider_pane_g15_ParamLimits

0x8a5c,	// (0x00086060) main_cset6_slider_pane_g15

0x8a74,	// (0x00086078) main_cset6_slider_pane_g16_ParamLimits

0x8a74,	// (0x00086078) main_cset6_slider_pane_g16

0x8a80,	// (0x00086084) main_cset6_slider_pane_g17_ParamLimits

0x8a80,	// (0x00086084) main_cset6_slider_pane_g17

0x0011,

0xfb7a,	// (0x0008d17e) main_cset6_slider_pane_g_ParamLimits

0xfb7a,	// (0x0008d17e) main_cset6_slider_pane_g

0xdf5c,	// (0x0008b560) main_cset6_slider_pane_t1_ParamLimits

0xdf5c,	// (0x0008b560) main_cset6_slider_pane_t1

0x8aa4,	// (0x000860a8) main_cset6_slider_pane_t2_ParamLimits

0x8aa4,	// (0x000860a8) main_cset6_slider_pane_t2

0x8acf,	// (0x000860d3) main_cset6_slider_pane_t3_ParamLimits

0x8acf,	// (0x000860d3) main_cset6_slider_pane_t3

0x8afa,	// (0x000860fe) main_cset6_slider_pane_t4_ParamLimits

0x8afa,	// (0x000860fe) main_cset6_slider_pane_t4

0x8b25,	// (0x00086129) main_cset6_slider_pane_t5_ParamLimits

0x8b25,	// (0x00086129) main_cset6_slider_pane_t5

0xdf9d,	// (0x0008b5a1) main_cset6_slider_pane_t7_ParamLimits

0xdf9d,	// (0x0008b5a1) main_cset6_slider_pane_t7

0x8b50,	// (0x00086154) main_cset6_slider_pane_t8_ParamLimits

0x8b50,	// (0x00086154) main_cset6_slider_pane_t8

0x8b74,	// (0x00086178) main_cset6_slider_pane_t9_ParamLimits

0x8b74,	// (0x00086178) main_cset6_slider_pane_t9

0x8b98,	// (0x0008619c) main_cset6_slider_pane_t10_ParamLimits

0x8b98,	// (0x0008619c) main_cset6_slider_pane_t10

0x8bbc,	// (0x000861c0) main_cset6_slider_pane_t11_ParamLimits

0x8bbc,	// (0x000861c0) main_cset6_slider_pane_t11

0xdfd3,	// (0x0008b5d7) main_cset6_slider_pane_t14_ParamLimits

0xdfd3,	// (0x0008b5d7) main_cset6_slider_pane_t14

0xe00c,	// (0x0008b610) main_cset6_slider_pane_t15_ParamLimits

0xe00c,	// (0x0008b610) main_cset6_slider_pane_t15

0x000b,

0xfb9f,	// (0x0008d1a3) main_cset6_slider_pane_t_ParamLimits

0xfb9f,	// (0x0008d1a3) main_cset6_slider_pane_t

0xdf0d,	// (0x0008b511) cset_slider_pane_g1_copy1

0xdf16,	// (0x0008b51a) cset_slider_pane_g2_copy1

0xdf1f,	// (0x0008b523) cset_slider_pane_g3_copy1

0xa162,	// (0x00087766) bg_popup_sub_pane_cp011_copy1

0xe045,	// (0x0008b649) main_cset_text_pane_g1_copy1

0xd8ff,	// (0x0008af03) main_cset_text_pane_t1_copy1

0xd90d,	// (0x0008af11) main_cset_text_pane_t2_copy1

0xd91b,	// (0x0008af1f) main_cset_text_pane_t3_copy1

0xd929,	// (0x0008af2d) main_cset_text_pane_t4_copy1

0xd937,	// (0x0008af3b) main_cset_text_pane_t5_copy1

0xe04d,	// (0x0008b651) main_cset_text_pane_t6_copy1

0xe05b,	// (0x0008b65f) main_cset_text_pane_t7_copy1

0x8bfb,	// (0x000861ff) main_cset_text2_pane_t1_copy1

0xa8a8,	// (0x00087eac) main_ncimui_pane

0x5526,	// (0x00082b2a) popup_query_ncimui_window_ParamLimits

0x5526,	// (0x00082b2a) popup_query_ncimui_window

0x609e,	// (0x000836a2) field_cale_ev2_pane_g4_ParamLimits

0x609e,	// (0x000836a2) field_cale_ev2_pane_g4

0x6e06,	// (0x0008440a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6e06,	// (0x0008440a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf884,	// (0x0008ce88) cell_video_dialer_keypad_pane_g_ParamLimits

0xf884,	// (0x0008ce88) cell_video_dialer_keypad_pane_g

0x6e1e,	// (0x00084422) cell_video_dialer_keypad_pane_t1

0xa162,	// (0x00087766) bg_popup_window_pane_cp012

0xb1b2,	// (0x000887b6) heading_pane_cp06

0xe087,	// (0x0008b68b) ncim_query_content_pane

0xa162,	// (0x00087766) bg_popup_heading_pane_cp01

0xe08f,	// (0x0008b693) ncim_heading_pane_t1

0xe09d,	// (0x0008b6a1) ncim_indicator_popup_pane

0xe0af,	// (0x0008b6b3) ncim_query_button_pane

0xe0c5,	// (0x0008b6c9) ncim_query_content_pane_t1

0xe0d7,	// (0x0008b6db) ncim_query_content_pane_t2

0x0005,

0xfbe3,	// (0x0008d1e7) ncim_query_content_pane_t

0xe111,	// (0x0008b715) ncim_query_list_pane

0xe123,	// (0x0008b727) ncim_query_popup_pane

0xe09d,	// (0x0008b6a1) ncim_indicator_popup_pane_ParamLimits

0x8d57,	// (0x0008635b) ncim_query_content_pane_g1_ParamLimits

0x8d57,	// (0x0008635b) ncim_query_content_pane_g1

0xe0c5,	// (0x0008b6c9) ncim_query_content_pane_t1_ParamLimits

0xe0d7,	// (0x0008b6db) ncim_query_content_pane_t2_ParamLimits

0x8d63,	// (0x00086367) ncim_query_content_pane_t3_ParamLimits

0x8d63,	// (0x00086367) ncim_query_content_pane_t3

0x8d80,	// (0x00086384) ncim_query_content_pane_t4_ParamLimits

0x8d80,	// (0x00086384) ncim_query_content_pane_t4

0x8d9d,	// (0x000863a1) ncim_query_content_pane_t5_ParamLimits

0x8d9d,	// (0x000863a1) ncim_query_content_pane_t5

0xe0e9,	// (0x0008b6ed) ncim_query_content_pane_t6_ParamLimits

0xe0e9,	// (0x0008b6ed) ncim_query_content_pane_t6

0xfbe3,	// (0x0008d1e7) ncim_query_content_pane_t_ParamLimits

0xe111,	// (0x0008b715) ncim_query_list_pane_ParamLimits

0xe123,	// (0x0008b727) ncim_query_popup_pane_ParamLimits

0xe137,	// (0x0008b73b) wait_bar_pane_cp04

0xa162,	// (0x00087766) input_focus_pane_cp011

0xe13f,	// (0x0008b743) ncim_query_popup_pane_t1

0xe14d,	// (0x0008b751) ncim_list_query_list_pane_ParamLimits

0xe14d,	// (0x0008b751) ncim_list_query_list_pane

0xa162,	// (0x00087766) bg_button_pane_cp027

0xe160,	// (0x0008b764) ncim_query_button_pane_g1

0xa162,	// (0x00087766) list_highlight_pane_cp012

0xe16a,	// (0x0008b76e) ncim_list_query_list_pane_g1

0xe172,	// (0x0008b776) ncim_list_query_list_pane_t1

0x74dc,	// (0x00084ae0) cam4_indicators_pane_g3_ParamLimits

0x74dc,	// (0x00084ae0) cam4_indicators_pane_g3

0x75e8,	// (0x00084bec) vid4_indicators_pane_g5_ParamLimits

0x75e8,	// (0x00084bec) vid4_indicators_pane_g5

0x8436,	// (0x00085a3a) vid4_progress_pane_g5_ParamLimits

0x8436,	// (0x00085a3a) vid4_progress_pane_g5

0x8c2d,	// (0x00086231) main_ncimui_pane_g1

0x8c99,	// (0x0008629d) ncimui_group_query_pane_ParamLimits

0x8c99,	// (0x0008629d) ncimui_group_query_pane

0x8cf3,	// (0x000862f7) ncimui_list_pane_ParamLimits

0x8cf3,	// (0x000862f7) ncimui_list_pane

0x8d1a,	// (0x0008631e) ncimui_text_pane_ParamLimits

0x8d1a,	// (0x0008631e) ncimui_text_pane

0x8dba,	// (0x000863be) ncimui_text_pane_t1_ParamLimits

0x8dba,	// (0x000863be) ncimui_text_pane_t1

0xe180,	// (0x0008b784) ncimui_list_single_graphic_pane_ParamLimits

0xe180,	// (0x0008b784) ncimui_list_single_graphic_pane

0x8dd9,	// (0x000863dd) ncimui_query_pane_ParamLimits

0x8dd9,	// (0x000863dd) ncimui_query_pane

0xa162,	// (0x00087766) list_highlight_pane_cp013

0xe190,	// (0x0008b794) ncim_list_query_list_pane_t1_copy1

0xe16a,	// (0x0008b76e) ncim_list_single_graphic_pane_g1

0xe19e,	// (0x0008b7a2) ncim_query_button_pane_cp01

0xe1aa,	// (0x0008b7ae) ncim_query_entry_pane_ParamLimits

0xe1aa,	// (0x0008b7ae) ncim_query_entry_pane

0xe1bd,	// (0x0008b7c1) ncimui_query_pane_g1

0xe1c9,	// (0x0008b7cd) ncimui_query_pane_t1_ParamLimits

0xe1c9,	// (0x0008b7cd) ncimui_query_pane_t1

0xa8a8,	// (0x00087eac) input_focus_pane_cp012

0xe1e2,	// (0x0008b7e6) ncim_query_entry_pane_t1

0xa914,	// (0x00087f18) main_im_pane_ParamLimits

0xa8a8,	// (0x00087eac) main_mobtv_pane_ParamLimits

0xa8a8,	// (0x00087eac) main_mobtv_pane

0x8a8c,	// (0x00086090) main_cset6_slider_pane_g18_ParamLimits

0x8a8c,	// (0x00086090) main_cset6_slider_pane_g18

0x8a98,	// (0x0008609c) main_cset6_slider_pane_g19_ParamLimits

0x8a98,	// (0x0008609c) main_cset6_slider_pane_g19

0xd65c,	// (0x0008ac60) bg_main_mobtv_pane_ParamLimits

0xd65c,	// (0x0008ac60) bg_main_mobtv_pane

0x8dec,	// (0x000863f0) main_mobtv_info_pane

0x8df7,	// (0x000863fb) main_mobtv_loading_pane_ParamLimits

0x8df7,	// (0x000863fb) main_mobtv_loading_pane

0xe1f4,	// (0x0008b7f8) main_mobtv_pg_channel_list_pane

0xe1fe,	// (0x0008b802) main_mobtv_pg_hdr_pane

0x8e04,	// (0x00086408) main_mobtv_programe_curr_pane_ParamLimits

0x8e04,	// (0x00086408) main_mobtv_programe_curr_pane

0x8e11,	// (0x00086415) main_mobtv_programe_next_pane_ParamLimits

0x8e11,	// (0x00086415) main_mobtv_programe_next_pane

0xe207,	// (0x0008b80b) popup_mobtv_noti_window

0xcc6e,	// (0x0008a272) main_tv_pg_hdr_pane_g1

0xe211,	// (0x0008b815) main_tv_pg_hdr_pane_g2

0xe219,	// (0x0008b81d) main_tv_pg_hdr_pane_g3

0xe221,	// (0x0008b825) main_tv_pg_hdr_pane_g4

0xe229,	// (0x0008b82d) main_tv_pg_hdr_pane_g5

0xe233,	// (0x0008b837) main_tv_pg_hdr_pane_g6

0xe23d,	// (0x0008b841) main_tv_pg_hdr_pane_g7

0xe247,	// (0x0008b84b) main_tv_pg_hdr_pane_g8

0xe251,	// (0x0008b855) main_tv_pg_hdr_pane_g9

0xe25b,	// (0x0008b85f) main_tv_pg_hdr_pane_g10

0xe265,	// (0x0008b869) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf0,	// (0x0008d1f4) main_tv_pg_hdr_pane_g

0xe26f,	// (0x0008b873) main_tv_pg_hdr_pane_t1

0xe27d,	// (0x0008b881) main_tv_pg_hdr_pane_t2

0xe28b,	// (0x0008b88f) main_tv_pg_hdr_pane_t3

0xe29b,	// (0x0008b89f) main_tv_pg_hdr_pane_t4

0xe2ab,	// (0x0008b8af) main_tv_pg_hdr_pane_t5

0x0004,

0xfc07,	// (0x0008d20b) main_tv_pg_hdr_pane_t

0xe2bb,	// (0x0008b8bf) single_mobtv_pg_channel_pane_ParamLimits

0xe2bb,	// (0x0008b8bf) single_mobtv_pg_channel_pane

0xe2cd,	// (0x0008b8d1) single_mobtv_pg_channel_table_pane

0xe2d6,	// (0x0008b8da) single_mobtv_pg_channel_thumb_pane

0xe2df,	// (0x0008b8e3) single_tv_pg_channel_pane_g1

0xe2e8,	// (0x0008b8ec) single_tv_pg_channel_pane_g2

0x0001,

0xfc12,	// (0x0008d216) single_tv_pg_channel_pane_g

0xce9e,	// (0x0008a4a2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce9e,	// (0x0008a4a2) bg_single_mobtv_pg_channel_thumb_pane

0xe2f1,	// (0x0008b8f5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2f1,	// (0x0008b8f5) single_mobtv_pg_channel_thumb_pane_g1

0xe2ff,	// (0x0008b903) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2ff,	// (0x0008b903) single_mobtv_pg_channel_thumb_pane_g2

0xe30b,	// (0x0008b90f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe30b,	// (0x0008b90f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc17,	// (0x0008d21b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc17,	// (0x0008d21b) single_mobtv_pg_channel_thumb_pane_g

0xe317,	// (0x0008b91b) single_mobtv_pg_channel_thumb_pane_t1

0xe325,	// (0x0008b929) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1e,	// (0x0008d222) single_mobtv_pg_channel_thumb_pane_t

0xcc6e,	// (0x0008a272) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6e,	// (0x0008a272) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0008cce0) bg_single_mobtv_pg_channel_table_pane_g

0xe333,	// (0x0008b937) single_mobtv_pg_channel_table_pane_t1

0xe341,	// (0x0008b945) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc23,	// (0x0008d227) single_mobtv_pg_channel_table_pane_t

0x8e26,	// (0x0008642a) main_mobtv_info_pane_g1_ParamLimits

0x8e26,	// (0x0008642a) main_mobtv_info_pane_g1

0x8e42,	// (0x00086446) main_mobtv_info_pane_t1_ParamLimits

0x8e42,	// (0x00086446) main_mobtv_info_pane_t1

0x8eba,	// (0x000864be) main_mobtv_info_pane_t2_ParamLimits

0x8eba,	// (0x000864be) main_mobtv_info_pane_t2

0x0002,

0xfc2d,	// (0x0008d231) main_mobtv_info_pane_t_ParamLimits

0xfc2d,	// (0x0008d231) main_mobtv_info_pane_t

0x8f4b,	// (0x0008654f) wait_bar_pane_cp05

0x8f5d,	// (0x00086561) main_mobtv_loading_pane_g1_ParamLimits

0x8f5d,	// (0x00086561) main_mobtv_loading_pane_g1

0x8f69,	// (0x0008656d) main_mobtv_loading_pane_g2_ParamLimits

0x8f69,	// (0x0008656d) main_mobtv_loading_pane_g2

0x8f75,	// (0x00086579) main_mobtv_loading_pane_g3_ParamLimits

0x8f75,	// (0x00086579) main_mobtv_loading_pane_g3

0x0002,

0xfc34,	// (0x0008d238) main_mobtv_loading_pane_g_ParamLimits

0xfc34,	// (0x0008d238) main_mobtv_loading_pane_g

0xe34f,	// (0x0008b953) main_mobtv_loading_pane_t1_ParamLimits

0xe34f,	// (0x0008b953) main_mobtv_loading_pane_t1

0xe367,	// (0x0008b96b) main_mobtv_loading_pane_t2_ParamLimits

0xe367,	// (0x0008b96b) main_mobtv_loading_pane_t2

0x0001,

0xfc3b,	// (0x0008d23f) main_mobtv_loading_pane_t_ParamLimits

0xfc3b,	// (0x0008d23f) main_mobtv_loading_pane_t

0x8f83,	// (0x00086587) wait_bar_pane_cp06_ParamLimits

0x8f83,	// (0x00086587) wait_bar_pane_cp06

0xe38b,	// (0x0008b98f) main_mobtv_programe_curr_pane_t1

0xe399,	// (0x0008b99d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc40,	// (0x0008d244) main_mobtv_programe_curr_pane_t

0xe3a7,	// (0x0008b9ab) main_mobtv_programe_next_pane_t1

0xe3b5,	// (0x0008b9b9) main_mobtv_programe_next_pane_t2

0xe3c3,	// (0x0008b9c7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc45,	// (0x0008d249) main_mobtv_programe_next_pane_t

0xa162,	// (0x00087766) bg_popup_mobtv_noti_window_pane

0xe3d1,	// (0x0008b9d5) popup_mobtv_noti_window_g1

0xe3d9,	// (0x0008b9dd) popup_mobtv_noti_window_t1

0xe3e7,	// (0x0008b9eb) popup_mobtv_noti_window_t2

0x0001,

0xfc4c,	// (0x0008d250) popup_mobtv_noti_window_t

0xcc6e,	// (0x0008a272) bg_popup_mobtv_noti_window_pane_g1

0xa162,	// (0x00087766) sc_clock_pane

0xa162,	// (0x00087766) main_fs_bigclock_pane

0x8647,	// (0x00085c4b) blid2_tripm_pane_t4_ParamLimits

0x8647,	// (0x00085c4b) blid2_tripm_pane_t4

0x8f8f,	// (0x00086593) sc_clock_pane_g1_ParamLimits

0x8f8f,	// (0x00086593) sc_clock_pane_g1

0x8f9d,	// (0x000865a1) sc_clock_pane_t1_ParamLimits

0x8f9d,	// (0x000865a1) sc_clock_pane_t1

0x8fb2,	// (0x000865b6) sc_clock_pane_t2_ParamLimits

0x8fb2,	// (0x000865b6) sc_clock_pane_t2

0x8fc4,	// (0x000865c8) sc_clock_pane_t3_ParamLimits

0x8fc4,	// (0x000865c8) sc_clock_pane_t3

0x0004,

0xfc51,	// (0x0008d255) sc_clock_pane_t_ParamLimits

0xfc51,	// (0x0008d255) sc_clock_pane_t

0x9882,	// (0x00086e86) main_fs_bigclock_indicator_pane_ParamLimits

0x9882,	// (0x00086e86) main_fs_bigclock_indicator_pane

0x9057,	// (0x0008665b) main_fs_bigclock_pane_g1_ParamLimits

0x9057,	// (0x0008665b) main_fs_bigclock_pane_g1

0x988e,	// (0x00086e92) main_fs_bigclock_pane_t1_ParamLimits

0x988e,	// (0x00086e92) main_fs_bigclock_pane_t1

0x98a0,	// (0x00086ea4) main_fs_bigclock_pane_t2_ParamLimits

0x98a0,	// (0x00086ea4) main_fs_bigclock_pane_t2

0x98b4,	// (0x00086eb8) main_fs_bigclock_pane_t3_ParamLimits

0x98b4,	// (0x00086eb8) main_fs_bigclock_pane_t3

0x0002,

0xfe5b,	// (0x0008d45f) main_fs_bigclock_pane_t_ParamLimits

0xfe5b,	// (0x0008d45f) main_fs_bigclock_pane_t

0xec5f,	// (0x0008c263) main_fs_bigclock_indicator_pane_g1

0xe0b7,	// (0x0008b6bb) ncim_query_content_pane_g2_ParamLimits

0xe0b7,	// (0x0008b6bb) ncim_query_content_pane_g2

0x0001,

0xfbde,	// (0x0008d1e2) ncim_query_content_pane_g_ParamLimits

0xfbde,	// (0x0008d1e2) ncim_query_content_pane_g

0x8fd6,	// (0x000865da) sc_clock_pane_t4_ParamLimits

0x8fd6,	// (0x000865da) sc_clock_pane_t4

0xa8a8,	// (0x00087eac) main_radioblah_pane

0xd5c9,	// (0x0008abcd) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5c9,	// (0x0008abcd) cell_call4_button_pane_t1_copy1

0x8c49,	// (0x0008624d) main_ncimui_pane_t1_ParamLimits

0x8c49,	// (0x0008624d) main_ncimui_pane_t1

0x8c63,	// (0x00086267) main_ncimui_pane_t2_ParamLimits

0x8c63,	// (0x00086267) main_ncimui_pane_t2

0x0002,

0xfbd7,	// (0x0008d1db) main_ncimui_pane_t_ParamLimits

0xfbd7,	// (0x0008d1db) main_ncimui_pane_t

0xe53a,	// (0x0008bb3e) main_radioblah_anim_pane_ParamLimits

0xe53a,	// (0x0008bb3e) main_radioblah_anim_pane

0xe54b,	// (0x0008bb4f) main_radioblah_info_pane_ParamLimits

0xe54b,	// (0x0008bb4f) main_radioblah_info_pane

0xe55f,	// (0x0008bb63) main_radioblah_pane_t1_ParamLimits

0xe55f,	// (0x0008bb63) main_radioblah_pane_t1

0xe57b,	// (0x0008bb7f) main_radioblah_pane_t2_ParamLimits

0xe57b,	// (0x0008bb7f) main_radioblah_pane_t2

0x0003,

0xfc72,	// (0x0008d276) main_radioblah_pane_t_ParamLimits

0xfc72,	// (0x0008d276) main_radioblah_pane_t

0x90a9,	// (0x000866ad) main_radioblah_rocker_ctrl_pane_ParamLimits

0x90a9,	// (0x000866ad) main_radioblah_rocker_ctrl_pane

0xe5c3,	// (0x0008bbc7) main_radioblah_info_pane_t1_ParamLimits

0xe5c3,	// (0x0008bbc7) main_radioblah_info_pane_t1

0x90f2,	// (0x000866f6) main_radioblah_info_pane_t2_ParamLimits

0x90f2,	// (0x000866f6) main_radioblah_info_pane_t2

0x0003,

0xfc7b,	// (0x0008d27f) main_radioblah_info_pane_t_ParamLimits

0xfc7b,	// (0x0008d27f) main_radioblah_info_pane_t

0xcc6e,	// (0x0008a272) main_radioblah_rocker_ctrl_pane_g1

0x91a2,	// (0x000867a6) main_radioblah_rocker_ctrl_pane_g2

0x91aa,	// (0x000867ae) main_radioblah_rocker_ctrl_pane_g3

0x91b2,	// (0x000867b6) main_radioblah_rocker_ctrl_pane_g4

0x91ba,	// (0x000867be) main_radioblah_rocker_ctrl_pane_g5

0x91c2,	// (0x000867c6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc84,	// (0x0008d288) main_radioblah_rocker_ctrl_pane_g

0x8bfb,	// (0x000861ff) main_cset_text2_pane_t1_copy1_ParamLimits

0x7409,	// (0x00084a0d) cam4_image_uncrop_qvga_pane

0x754e,	// (0x00084b52) vid4_image_uncrop_qcif_pane

0x87d9,	// (0x00085ddd) cam6_image_uncrop_qvga_pane_ParamLimits

0x87d9,	// (0x00085ddd) cam6_image_uncrop_qvga_pane

0xdd9f,	// (0x0008b3a3) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd9f,	// (0x0008b3a3) vid6_image_uncrop_qcif_pane

0xa162,	// (0x00087766) bg_popup_preview_window_pane_cp03

0xe069,	// (0x0008b66d) list_cset_text2_pane

0xe071,	// (0x0008b675) main_cset6_text2_pane_g1

0xe079,	// (0x0008b67d) main_cset6_text2_pane_t1

0x91ca,	// (0x000867ce) list_cset_text2_pane_t1_ParamLimits

0x91ca,	// (0x000867ce) list_cset_text2_pane_t1

0xa8a8,	// (0x00087eac) main_radioblah_pane_ParamLimits

0x8f37,	// (0x0008653b) main_mobtv_info_pane_t3_ParamLimits

0x8f37,	// (0x0008653b) main_mobtv_info_pane_t3

0x9097,	// (0x0008669b) main_radioblah_pane_g1

0x90c2,	// (0x000866c6) main_radioblah_info_pane_g1

0x9147,	// (0x0008674b) main_radioblah_info_pane_t3_ParamLimits

0x9147,	// (0x0008674b) main_radioblah_info_pane_t3

0x424b,	// (0x0008184f) highlight_cell_cale_month_pane_ParamLimits

0x424b,	// (0x0008184f) highlight_cell_cale_month_pane

0xa162,	// (0x00087766) main_phob_fisheye_pane

0xcf7a,	// (0x0008a57e) scroll_pane_cp0031_ParamLimits

0xcf7a,	// (0x0008a57e) scroll_pane_cp0031

0xdeb1,	// (0x0008b4b5) wait_bar_pane_cp08_ParamLimits

0x89ac,	// (0x00085fb0) cset_list_set_pane_copy1_ParamLimits

0xe638,	// (0x0008bc3c) highlight_cell_cale_month_pane_g1

0x91e1,	// (0x000867e5) highlight_cell_cale_month_pane_t1

0xdb2b,	// (0x0008b12f) list_gen_pane_cp01

0xd79a,	// (0x0008ad9e) scroll_pane_01

0x91ef,	// (0x000867f3) list_single_double_fisheye_pane

0x12e3,	// (0x0007e8e7) list_double_fisheye_pane_g1_ParamLimits

0x12e3,	// (0x0007e8e7) list_double_fisheye_pane_g1

0x12ef,	// (0x0007e8f3) list_double_fisheye_pane_g2_ParamLimits

0x12ef,	// (0x0007e8f3) list_double_fisheye_pane_g2

0x91f8,	// (0x000867fc) list_double_fisheye_pane_g3_ParamLimits

0x91f8,	// (0x000867fc) list_double_fisheye_pane_g3

0x0004,

0xfc91,	// (0x0008d295) list_double_fisheye_pane_g_ParamLimits

0xfc91,	// (0x0008d295) list_double_fisheye_pane_g

0x1320,	// (0x0007e924) list_double_fisheye_pane_t1_ParamLimits

0x1320,	// (0x0007e924) list_double_fisheye_pane_t1

0x133b,	// (0x0007e93f) list_double_fisheye_pane_t2_ParamLimits

0x133b,	// (0x0007e93f) list_double_fisheye_pane_t2

0x0001,

0xfc9c,	// (0x0008d2a0) list_double_fisheye_pane_t_ParamLimits

0xfc9c,	// (0x0008d2a0) list_double_fisheye_pane_t

0xa162,	// (0x00087766) main_call5_pane

0x8ffc,	// (0x00086600) sc_swipe_pane_ParamLimits

0x8ffc,	// (0x00086600) sc_swipe_pane

0x9210,	// (0x00086814) call5_image_pane_ParamLimits

0x9210,	// (0x00086814) call5_image_pane

0x9222,	// (0x00086826) call5_swipe_1_pane_ParamLimits

0x9222,	// (0x00086826) call5_swipe_1_pane

0x922e,	// (0x00086832) call5_swipe_2_pane_ParamLimits

0x922e,	// (0x00086832) call5_swipe_2_pane

0x924a,	// (0x0008684e) popup_call5_audio_first_window_ParamLimits

0x924a,	// (0x0008684e) popup_call5_audio_first_window

0xce9e,	// (0x0008a4a2) call5_swipe_1_pane_g1_ParamLimits

0xce9e,	// (0x0008a4a2) call5_swipe_1_pane_g1

0xe640,	// (0x0008bc44) call5_swipe_1_pane_g2_ParamLimits

0xe640,	// (0x0008bc44) call5_swipe_1_pane_g2

0x0001,

0xfca1,	// (0x0008d2a5) call5_swipe_1_pane_g_ParamLimits

0xfca1,	// (0x0008d2a5) call5_swipe_1_pane_g

0xe64c,	// (0x0008bc50) call5_swipe_1_pane_t1_ParamLimits

0xe64c,	// (0x0008bc50) call5_swipe_1_pane_t1

0xce9e,	// (0x0008a4a2) call5_swipe_2_pane_g1_ParamLimits

0xce9e,	// (0x0008a4a2) call5_swipe_2_pane_g1

0xe661,	// (0x0008bc65) call5_swipe_2_pane_g2_ParamLimits

0xe661,	// (0x0008bc65) call5_swipe_2_pane_g2

0x0001,

0xfca6,	// (0x0008d2aa) call5_swipe_2_pane_g_ParamLimits

0xfca6,	// (0x0008d2aa) call5_swipe_2_pane_g

0xe66d,	// (0x0008bc71) call5_swipe_2_pane_t1_ParamLimits

0xe66d,	// (0x0008bc71) call5_swipe_2_pane_t1

0xe682,	// (0x0008bc86) sc_swipe_pane_g1_ParamLimits

0xe682,	// (0x0008bc86) sc_swipe_pane_g1

0xe68f,	// (0x0008bc93) sc_swipe_pane_g2_ParamLimits

0xe68f,	// (0x0008bc93) sc_swipe_pane_g2

0x0001,

0xfcab,	// (0x0008d2af) sc_swipe_pane_g_ParamLimits

0xfcab,	// (0x0008d2af) sc_swipe_pane_g

0xe69b,	// (0x0008bc9f) sc_swipe_pane_t1_ParamLimits

0xe69b,	// (0x0008bc9f) sc_swipe_pane_t1

0xa162,	// (0x00087766) main_cmail_launcher_pane

0x925a,	// (0x0008685e) aid_size_cell_cmail_l_ParamLimits

0x925a,	// (0x0008685e) aid_size_cell_cmail_l

0x926a,	// (0x0008686e) grid_cmail_l_pane_ParamLimits

0x926a,	// (0x0008686e) grid_cmail_l_pane

0x927a,	// (0x0008687e) cell_cmail_l_pane_ParamLimits

0x927a,	// (0x0008687e) cell_cmail_l_pane

0x9290,	// (0x00086894) cell_cmail_l_pane_g1_ParamLimits

0x9290,	// (0x00086894) cell_cmail_l_pane_g1

0x929c,	// (0x000868a0) cell_cmail_l_pane_t1_ParamLimits

0x929c,	// (0x000868a0) cell_cmail_l_pane_t1

0xe6b0,	// (0x0008bcb4) cell_cmail_l_pane_t2_ParamLimits

0xe6b0,	// (0x0008bcb4) cell_cmail_l_pane_t2

0x0001,

0xfcb0,	// (0x0008d2b4) cell_cmail_l_pane_t_ParamLimits

0xfcb0,	// (0x0008d2b4) cell_cmail_l_pane_t

0xa8a8,	// (0x00087eac) grid_highlight_pane_cp018_ParamLimits

0xa8a8,	// (0x00087eac) grid_highlight_pane_cp018

0x1f3d,	// (0x0007f541) main2_pane_ParamLimits

0x1f3d,	// (0x0007f541) main2_pane

0xa9bf,	// (0x00087fc3) popup_sp_fs_action_menu_bg_pane_g1

0xa9c7,	// (0x00087fcb) popup_sp_fs_action_menu_bg_pane_g2

0xa9cf,	// (0x00087fd3) popup_sp_fs_action_menu_bg_pane_g3

0xa9d7,	// (0x00087fdb) popup_sp_fs_action_menu_bg_pane_g4

0xa9df,	// (0x00087fe3) popup_sp_fs_action_menu_bg_pane_g5

0xa9e7,	// (0x00087feb) popup_sp_fs_action_menu_bg_pane_g6

0xa9ef,	// (0x00087ff3) popup_sp_fs_action_menu_bg_pane_g7

0xa9f7,	// (0x00087ffb) popup_sp_fs_action_menu_bg_pane_g8

0xa9ff,	// (0x00088003) popup_sp_fs_action_menu_bg_pane_g9

0xaa07,	// (0x0008800b) popup_sp_fs_action_menu_bg_pane_g10

0xaa07,	// (0x0008800b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0008c78e) popup_sp_fs_action_menu_bg_pane_g

0x0b5e,	// (0x0007e162) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x2_t3_g3_g1

0x3187,	// (0x0008078b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3187,	// (0x0008078b) list_medium_line_x2_t3_g3_g2

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0008c83c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0008c83c) list_medium_line_x2_t3_g3_g

0x0b76,	// (0x0007e17a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0b76,	// (0x0007e17a) list_medium_line_x2_t3_g3_t1

0x0b8b,	// (0x0007e18f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0b8b,	// (0x0007e18f) list_medium_line_x2_t3_g3_t2

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0008c843) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0008c843) list_medium_line_x2_t3_g3_t

0x0b5e,	// (0x0007e162) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x2_t3_g2_g1

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0008c84a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0008c84a) list_medium_line_x2_t3_g2_g

0x0bb4,	// (0x0007e1b8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0bb4,	// (0x0007e1b8) list_medium_line_x2_t3_g2_t1

0x0bca,	// (0x0007e1ce) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0bca,	// (0x0007e1ce) list_medium_line_x2_t3_g2_t2

0x0bdc,	// (0x0007e1e0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0bdc,	// (0x0007e1e0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0008c84f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0008c84f) list_medium_line_x2_t3_g2_t

0x0b5e,	// (0x0007e162) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x2_t4_g4_g1

0x3193,	// (0x00080797) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3193,	// (0x00080797) list_medium_line_x2_t4_g4_g2

0x3187,	// (0x0008078b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3187,	// (0x0008078b) list_medium_line_x2_t4_g4_g3

0x0bfa,	// (0x0007e1fe) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0bfa,	// (0x0007e1fe) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0008c856) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0008c856) list_medium_line_x2_t4_g4_g

0x0c06,	// (0x0007e20a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0c06,	// (0x0007e20a) list_medium_line_x2_t4_g4_t1

0x0c1d,	// (0x0007e221) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0c1d,	// (0x0007e221) list_medium_line_x2_t4_g4_t2

0x0c32,	// (0x0007e236) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0c32,	// (0x0007e236) list_medium_line_x2_t4_g4_t3

0x0c44,	// (0x0007e248) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0c44,	// (0x0007e248) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0008c85f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0008c85f) list_medium_line_x2_t4_g4_t

0x0b5e,	// (0x0007e162) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x2_t2_g4_g1

0x3193,	// (0x00080797) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3193,	// (0x00080797) list_medium_line_x2_t2_g4_g2

0x3187,	// (0x0008078b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3187,	// (0x0008078b) list_medium_line_x2_t2_g4_g3

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0008c8c6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0008c8c6) list_medium_line_x2_t2_g4_g

0x0c56,	// (0x0007e25a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0c56,	// (0x0007e25a) list_medium_line_x2_t2_g4_t1

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0008c8cf) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0008c8cf) list_medium_line_x2_t2_g4_t

0x0b5e,	// (0x0007e162) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x2_t2_g3_g1

0x3187,	// (0x0008078b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3187,	// (0x0008078b) list_medium_line_x2_t2_g3_g2

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0008c83c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0008c83c) list_medium_line_x2_t2_g3_g

0x0c6b,	// (0x0007e26f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0c6b,	// (0x0007e26f) list_medium_line_x2_t2_g3_t1

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0008c8d4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0008c8d4) list_medium_line_x2_t2_g3_t

0x43f2,	// (0x000819f6) main_sp_fs_list_pane_ParamLimits

0x43f2,	// (0x000819f6) main_sp_fs_list_pane

0x43fe,	// (0x00081a02) sp_fs_scroll_pane_ParamLimits

0x43fe,	// (0x00081a02) sp_fs_scroll_pane

0x0c80,	// (0x0007e284) list_medium_line_x2_t3_t1

0x0c90,	// (0x0007e294) list_medium_line_x2_t3_t2

0x0c9e,	// (0x0007e2a2) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0008c91f) list_medium_line_x2_t3_t

0x0cac,	// (0x0007e2b0) list_medium_line_x3_t4_t1

0x0cbc,	// (0x0007e2c0) list_medium_line_x3_t4_t2

0x0cca,	// (0x0007e2ce) list_medium_line_x3_t4_t3

0x0c9e,	// (0x0007e2a2) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0008c926) list_medium_line_x3_t4_t

0x0cd8,	// (0x0007e2dc) list_medium_line_x4_t5_t1

0x0ce8,	// (0x0007e2ec) list_medium_line_x4_t5_t2

0x0cca,	// (0x0007e2ce) list_medium_line_x4_t5_t3

0x0cf6,	// (0x0007e2fa) list_medium_line_x4_t5_t4

0x0c9e,	// (0x0007e2a2) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0008c92f) list_medium_line_x4_t5_t

0x0b5e,	// (0x0007e162) list_medium_line_t4_g4_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_t4_g4_g1

0x0bfa,	// (0x0007e1fe) list_medium_line_t4_g4_g2_ParamLimits

0x0bfa,	// (0x0007e1fe) list_medium_line_t4_g4_g2

0x0d04,	// (0x0007e308) list_medium_line_t4_g4_g3_ParamLimits

0x0d04,	// (0x0007e308) list_medium_line_t4_g4_g3

0x0b6a,	// (0x0007e16e) list_medium_line_t4_g4_g4_ParamLimits

0x0b6a,	// (0x0007e16e) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0008c93a) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0008c93a) list_medium_line_t4_g4_g

0x0d10,	// (0x0007e314) list_medium_line_t4_g4_t1_ParamLimits

0x0d10,	// (0x0007e314) list_medium_line_t4_g4_t1

0x0d25,	// (0x0007e329) list_medium_line_t4_g4_t2_ParamLimits

0x0d25,	// (0x0007e329) list_medium_line_t4_g4_t2

0x0d3b,	// (0x0007e33f) list_medium_line_t4_g4_t3_ParamLimits

0x0d3b,	// (0x0007e33f) list_medium_line_t4_g4_t3

0x0b9f,	// (0x0007e1a3) list_medium_line_t4_g4_t4_ParamLimits

0x0b9f,	// (0x0007e1a3) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0008c943) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0008c943) list_medium_line_t4_g4_t

0x451d,	// (0x00081b21) chi_dic_find_pane_g1

0x54ef,	// (0x00082af3) main_tport_pane

0x0f89,	// (0x0007e58d) list_medium_line_plain_t1

0x0f97,	// (0x0007e59b) list_medium_line_t2_g2_g1_ParamLimits

0x0f97,	// (0x0007e59b) list_medium_line_t2_g2_g1

0x7f88,	// (0x0008558c) list_medium_line_t2_g2_g2_ParamLimits

0x7f88,	// (0x0008558c) list_medium_line_t2_g2_g2

0x0001,

0xf9ef,	// (0x0008cff3) list_medium_line_t2_g2_g_ParamLimits

0xf9ef,	// (0x0008cff3) list_medium_line_t2_g2_g

0x0fa3,	// (0x0007e5a7) list_medium_line_t2_g2_t1_ParamLimits

0x0fa3,	// (0x0007e5a7) list_medium_line_t2_g2_t1

0x0fbd,	// (0x0007e5c1) list_medium_line_t2_g2_t2_ParamLimits

0x0fbd,	// (0x0007e5c1) list_medium_line_t2_g2_t2

0x0001,

0xf9f4,	// (0x0008cff8) list_medium_line_t2_g2_t_ParamLimits

0xf9f4,	// (0x0008cff8) list_medium_line_t2_g2_t

0x11dd,	// (0x0007e7e1) aid_sp_fs_list_icon_a_sm

0x8499,	// (0x00085a9d) aid_sp_fs_list_icon_d

0x11e5,	// (0x0007e7e9) aid_sp_fs_text_primary

0x11ee,	// (0x0007e7f2) aid_sp_fs_text_secondary

0x84a1,	// (0x00085aa5) list_medium_line

0x84a1,	// (0x00085aa5) list_medium_line_g2

0x84a1,	// (0x00085aa5) list_medium_line_g3

0x84a1,	// (0x00085aa5) list_medium_line_plain

0x84a1,	// (0x00085aa5) list_medium_line_plain_t2

0x84a1,	// (0x00085aa5) list_medium_line_plain_t3

0x84a1,	// (0x00085aa5) list_medium_line_right_icon

0x84a1,	// (0x00085aa5) list_medium_line_right_iconx2

0x84a1,	// (0x00085aa5) list_medium_line_t2

0x84a1,	// (0x00085aa5) list_medium_line_t2_g2

0x84a1,	// (0x00085aa5) list_medium_line_t2_g3

0x84a1,	// (0x00085aa5) list_medium_line_t2_right_icon

0x84a1,	// (0x00085aa5) list_medium_line_t2_right_iconx2

0x84a1,	// (0x00085aa5) list_medium_line_t3

0x84a1,	// (0x00085aa5) list_medium_line_t3_g2

0x84a1,	// (0x00085aa5) list_medium_line_t3_g3

0x84a1,	// (0x00085aa5) list_medium_line_t3_right_iconx2

0x84aa,	// (0x00085aae) list_medium_line_t4_g4

0x84b3,	// (0x00085ab7) list_medium_line_x2

0x84b3,	// (0x00085ab7) list_medium_line_x2_t2_g2

0x84b3,	// (0x00085ab7) list_medium_line_x2_t2_g3

0x84b3,	// (0x00085ab7) list_medium_line_x2_t2_g4

0x84b3,	// (0x00085ab7) list_medium_line_x2_t3

0x84b3,	// (0x00085ab7) list_medium_line_x2_t3_g2

0x84b3,	// (0x00085ab7) list_medium_line_x2_t3_g3

0x84b3,	// (0x00085ab7) list_medium_line_x2_t3_g4

0x84b3,	// (0x00085ab7) list_medium_line_x2_t4_g2

0x84b3,	// (0x00085ab7) list_medium_line_x2_t4_g4

0x84bc,	// (0x00085ac0) list_medium_line_x3

0x84bc,	// (0x00085ac0) list_medium_line_x3_t4

0x84bc,	// (0x00085ac0) list_medium_line_x3_t4_g4

0x84aa,	// (0x00085aae) list_medium_line_x4_t4

0x84aa,	// (0x00085aae) list_medium_line_x4_t4_g7

0x84aa,	// (0x00085aae) list_medium_line_x4_t5

0x11f7,	// (0x0007e7fb) list_single_fs_dyc_pane_ParamLimits

0x11f7,	// (0x0007e7fb) list_single_fs_dyc_pane

0x0b5e,	// (0x0007e162) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x4_t4_g7_g1

0x122f,	// (0x0007e833) list_medium_line_x4_t4_g7_g2_ParamLimits

0x122f,	// (0x0007e833) list_medium_line_x4_t4_g7_g2

0x8be0,	// (0x000861e4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8be0,	// (0x000861e4) list_medium_line_x4_t4_g7_g3

0x8bef,	// (0x000861f3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8bef,	// (0x000861f3) list_medium_line_x4_t4_g7_g4

0x123b,	// (0x0007e83f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x123b,	// (0x0007e83f) list_medium_line_x4_t4_g7_g5

0x124a,	// (0x0007e84e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x124a,	// (0x0007e84e) list_medium_line_x4_t4_g7_g6

0x1259,	// (0x0007e85d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1259,	// (0x0007e85d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb8,	// (0x0008d1bc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb8,	// (0x0008d1bc) list_medium_line_x4_t4_g7_g

0x1265,	// (0x0007e869) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1265,	// (0x0007e869) list_medium_line_x4_t4_g7_t1

0x127a,	// (0x0007e87e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x127a,	// (0x0007e87e) list_medium_line_x4_t4_g7_t2

0x128f,	// (0x0007e893) list_medium_line_x4_t4_g7_t3_ParamLimits

0x128f,	// (0x0007e893) list_medium_line_x4_t4_g7_t3

0x12a4,	// (0x0007e8a8) list_medium_line_x4_t4_g7_t4_ParamLimits

0x12a4,	// (0x0007e8a8) list_medium_line_x4_t4_g7_t4

0x12b6,	// (0x0007e8ba) list_medium_line_x4_t4_g7_t5_ParamLimits

0x12b6,	// (0x0007e8ba) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc7,	// (0x0008d1cb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc7,	// (0x0008d1cb) list_medium_line_x4_t4_g7_t

0x12c8,	// (0x0007e8cc) list_single_dyc_row_pane_ParamLimits

0x12c8,	// (0x0007e8cc) list_single_dyc_row_pane

0x9204,	// (0x00086808) call5_gesture_pane_ParamLimits

0x9204,	// (0x00086808) call5_gesture_pane

0x923a,	// (0x0008683e) call5_windows_pane_ParamLimits

0x923a,	// (0x0008683e) call5_windows_pane

0x92b2,	// (0x000868b6) call5_swipe_1_pane_cp_ParamLimits

0x92b2,	// (0x000868b6) call5_swipe_1_pane_cp

0x92be,	// (0x000868c2) call5_swipe_2_pane_cp_ParamLimits

0x92be,	// (0x000868c2) call5_swipe_2_pane_cp

0xaaca,	// (0x000880ce) call5_image_pane_cp

0x92ca,	// (0x000868ce) popup_call5_audio_first_window_cp_ParamLimits

0x92ca,	// (0x000868ce) popup_call5_audio_first_window_cp

0xe682,	// (0x0008bc86) call5_swipe_1_pane_g1_cp_ParamLimits

0xe682,	// (0x0008bc86) call5_swipe_1_pane_g1_cp

0xe6c2,	// (0x0008bcc6) call5_swipe_1_pane_g2_cp

0xe69b,	// (0x0008bc9f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe69b,	// (0x0008bc9f) call5_swipe_1_pane_t1_cp

0xe682,	// (0x0008bc86) call5_swipe_2_pane_g1_cp_ParamLimits

0xe682,	// (0x0008bc86) call5_swipe_2_pane_g1_cp

0xe6ca,	// (0x0008bcce) call5_swipe_2_pane_g2_cp

0xe6d2,	// (0x0008bcd6) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6d2,	// (0x0008bcd6) call5_swipe_2_pane_t1_cp

0xa8a8,	// (0x00087eac) main_sp_fs_email_pane

0xe6e7,	// (0x0008bceb) main_sp_fs_listscroll_pane_te

0x135d,	// (0x0007e961) popup_sp_fs_action_menu_pane_ParamLimits

0x135d,	// (0x0007e961) popup_sp_fs_action_menu_pane

0xcc6e,	// (0x0008a272) bg_sp_fs_ctrlbar_pane_g1

0xd223,	// (0x0008a827) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd235,	// (0x0008a839) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd22c,	// (0x0008a830) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6e,	// (0x0008a272) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb5,	// (0x0008d2b9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca4d,	// (0x0008a051) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca4d,	// (0x0008a051) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6f0,	// (0x0008bcf4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6f0,	// (0x0008bcf4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6fc,	// (0x0008bd00) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6fc,	// (0x0008bd00) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbe,	// (0x0008d2c2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbe,	// (0x0008d2c2) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe708,	// (0x0008bd0c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe708,	// (0x0008bd0c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x92d8,	// (0x000868dc) list_medium_line_t2_right_icon_g1

0x13a3,	// (0x0007e9a7) list_medium_line_t2_right_icon_t1

0x13b3,	// (0x0007e9b7) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc3,	// (0x0008d2c7) list_medium_line_t2_right_icon_t

0xc81d,	// (0x00089e21) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc81d,	// (0x00089e21) bg_sp_fs_ctrlbar_pane

0x9339,	// (0x0008693d) main_sp_fs_ctrlbar_button_pane_cp01

0x9341,	// (0x00086945) main_sp_fs_ctrlbar_ddmenu_pane

0xe5fd,	// (0x0008bc01) main_sp_fs_ctrlbar_pane_g1

0xe75a,	// (0x0008bd5e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcc8,	// (0x0008d2cc) main_sp_fs_ctrlbar_pane_g

0xe766,	// (0x0008bd6a) main_sp_fs_ctrlbar_pane_t1

0x13c1,	// (0x0007e9c5) main_sp_fs_ctrlbar_pane

0x13db,	// (0x0007e9df) main_sp_fs_listscroll_pane_te_cp01

0x13ec,	// (0x0007e9f0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x13ec,	// (0x0007e9f0) popup_sp_fs_action_menu_pane_cp01

0xa8a8,	// (0x00087eac) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa8a8,	// (0x00087eac) bg_sp_fs_highlight_list_pane_cp01

0x141a,	// (0x0007ea1e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x141a,	// (0x0007ea1e) sp_fs_action_menu_list_gene_pane_g1

0xe796,	// (0x0008bd9a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe796,	// (0x0008bd9a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd2,	// (0x0008d2d6) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd2,	// (0x0008d2d6) sp_fs_action_menu_list_gene_pane_g

0x1429,	// (0x0007ea2d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1429,	// (0x0007ea2d) sp_fs_action_menu_list_gene_pane_t1

0x1441,	// (0x0007ea45) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1441,	// (0x0007ea45) sp_fs_action_menu_list_gene_pane

0xe7a3,	// (0x0008bda7) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7a3,	// (0x0008bda7) popup_sp_fs_action_menu_bg_pane

0x1464,	// (0x0007ea68) sp_fs_action_menu_list_pane_ParamLimits

0x1464,	// (0x0007ea68) sp_fs_action_menu_list_pane

0xe7b1,	// (0x0008bdb5) sp_fs_scroll_pane_cp01_ParamLimits

0xe7b1,	// (0x0008bdb5) sp_fs_scroll_pane_cp01

0x1488,	// (0x0007ea8c) list_medium_line_plain_t2_t1

0x1498,	// (0x0007ea9c) list_medium_line_plain_t2_t2

0x0001,

0xfcd7,	// (0x0008d2db) list_medium_line_plain_t2_t

0x14a6,	// (0x0007eaaa) list_medium_line_plain_t3_t1

0x14b6,	// (0x0007eaba) list_medium_line_plain_t3_t2

0x14c4,	// (0x0007eac8) list_medium_line_plain_t3_t3

0x0002,

0xfcdc,	// (0x0008d2e0) list_medium_line_plain_t3_t

0x0b5e,	// (0x0007e162) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x2_t2_g2_g1

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0008c84a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0008c84a) list_medium_line_x2_t2_g2_g

0x0d10,	// (0x0007e314) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0d10,	// (0x0007e314) list_medium_line_x2_t2_g2_t1

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce3,	// (0x0008d2e7) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce3,	// (0x0008d2e7) list_medium_line_x2_t2_g2_t

0x0b5e,	// (0x0007e162) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x2_t4_g2_g1

0x14d2,	// (0x0007ead6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x14d2,	// (0x0007ead6) list_medium_line_x2_t4_g2_g2

0x0001,

0xfce8,	// (0x0008d2ec) list_medium_line_x2_t4_g2_g_ParamLimits

0xfce8,	// (0x0008d2ec) list_medium_line_x2_t4_g2_g

0x14e4,	// (0x0007eae8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x14e4,	// (0x0007eae8) list_medium_line_x2_t4_g2_t1

0x14fe,	// (0x0007eb02) list_medium_line_x2_t4_g2_t2_ParamLimits

0x14fe,	// (0x0007eb02) list_medium_line_x2_t4_g2_t2

0x1514,	// (0x0007eb18) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1514,	// (0x0007eb18) list_medium_line_x2_t4_g2_t3

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfced,	// (0x0008d2f1) list_medium_line_x2_t4_g2_t_ParamLimits

0xfced,	// (0x0008d2f1) list_medium_line_x2_t4_g2_t

0x934b,	// (0x0008694f) list_medium_line_t3_right_iconx2_g1

0x92d8,	// (0x000868dc) list_medium_line_t3_right_iconx2_g2

0x1529,	// (0x0007eb2d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf6,	// (0x0008d2fa) list_medium_line_t3_right_iconx2_g

0x1533,	// (0x0007eb37) list_medium_line_t3_right_iconx2_t1

0x1543,	// (0x0007eb47) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfd,	// (0x0008d301) list_medium_line_t3_right_iconx2_t

0x0b5e,	// (0x0007e162) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x3_t4_g4_g1

0x3187,	// (0x0008078b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3187,	// (0x0008078b) list_medium_line_x3_t4_g4_g2

0x0bfa,	// (0x0007e1fe) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0bfa,	// (0x0007e1fe) list_medium_line_x3_t4_g4_g3

0x9353,	// (0x00086957) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9353,	// (0x00086957) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd02,	// (0x0008d306) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd02,	// (0x0008d306) list_medium_line_x3_t4_g4_g

0x1551,	// (0x0007eb55) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1551,	// (0x0007eb55) list_medium_line_x3_t4_g4_t1

0x1568,	// (0x0007eb6c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1568,	// (0x0007eb6c) list_medium_line_x3_t4_g4_t2

0x157d,	// (0x0007eb81) list_medium_line_x3_t4_g4_t3_ParamLimits

0x157d,	// (0x0007eb81) list_medium_line_x3_t4_g4_t3

0x1592,	// (0x0007eb96) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1592,	// (0x0007eb96) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0b,	// (0x0008d30f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0b,	// (0x0008d30f) list_medium_line_x3_t4_g4_t

0x15af,	// (0x0007ebb3) list_single_dyc_row_text_pane_t1_ParamLimits

0x15af,	// (0x0007ebb3) list_single_dyc_row_text_pane_t1

0x15f2,	// (0x0007ebf6) list_single_dyc_row_text_pane_t2_ParamLimits

0x15f2,	// (0x0007ebf6) list_single_dyc_row_text_pane_t2

0x1668,	// (0x0007ec6c) list_single_dyc_row_text_pane_t3_ParamLimits

0x1668,	// (0x0007ec6c) list_single_dyc_row_text_pane_t3

0x0005,

0xfd14,	// (0x0008d318) list_single_dyc_row_text_pane_t_ParamLimits

0xfd14,	// (0x0008d318) list_single_dyc_row_text_pane_t

0x1747,	// (0x0007ed4b) list_single_dyc_row_pane_g1_ParamLimits

0x1747,	// (0x0007ed4b) list_single_dyc_row_pane_g1

0x1753,	// (0x0007ed57) list_single_dyc_row_pane_g2_ParamLimits

0x1753,	// (0x0007ed57) list_single_dyc_row_pane_g2

0x175f,	// (0x0007ed63) list_single_dyc_row_pane_g3_ParamLimits

0x175f,	// (0x0007ed63) list_single_dyc_row_pane_g3

0x176b,	// (0x0007ed6f) list_single_dyc_row_pane_g4_ParamLimits

0x176b,	// (0x0007ed6f) list_single_dyc_row_pane_g4

0x0003,

0xfd21,	// (0x0008d325) list_single_dyc_row_pane_g_ParamLimits

0xfd21,	// (0x0008d325) list_single_dyc_row_pane_g

0x1777,	// (0x0007ed7b) list_single_dyc_row_text_pane_ParamLimits

0x1777,	// (0x0007ed7b) list_single_dyc_row_text_pane

0xa162,	// (0x00087766) bg_sp_fs_scroll_pane

0xe7d7,	// (0x0008bddb) thumb_sp_fs_scroll_pane

0x0f97,	// (0x0007e59b) list_medium_line_g1_ParamLimits

0x0f97,	// (0x0007e59b) list_medium_line_g1

0x1796,	// (0x0007ed9a) list_medium_line_t1_ParamLimits

0x1796,	// (0x0007ed9a) list_medium_line_t1

0x0b5e,	// (0x0007e162) list_medium_line_x2_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x2_g1

0x3187,	// (0x0008078b) list_medium_line_x2_g2_ParamLimits

0x3187,	// (0x0008078b) list_medium_line_x2_g2

0x0001,

0xfd2a,	// (0x0008d32e) list_medium_line_x2_g_ParamLimits

0xfd2a,	// (0x0008d32e) list_medium_line_x2_g

0x17ab,	// (0x0007edaf) list_medium_line_x2_t1_ParamLimits

0x17ab,	// (0x0007edaf) list_medium_line_x2_t1

0x0b5e,	// (0x0007e162) list_medium_line_x3_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x3_g1

0x3187,	// (0x0008078b) list_medium_line_x3_g2_ParamLimits

0x3187,	// (0x0008078b) list_medium_line_x3_g2

0x0001,

0xfd2a,	// (0x0008d32e) list_medium_line_x3_g_ParamLimits

0xfd2a,	// (0x0008d32e) list_medium_line_x3_g

0x17ab,	// (0x0007edaf) list_medium_line_x3_t1_ParamLimits

0x17ab,	// (0x0007edaf) list_medium_line_x3_t1

0xe7e0,	// (0x0008bde4) thumb_sp_fs_scroll_pane_g1

0xe7e9,	// (0x0008bded) thumb_sp_fs_scroll_pane_g2

0xe7f2,	// (0x0008bdf6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0008d333) thumb_sp_fs_scroll_pane_g

0xe7e0,	// (0x0008bde4) bg_sp_fs_scroll_pane_g1

0xe7e9,	// (0x0008bded) bg_sp_fs_scroll_pane_g2

0xe7f2,	// (0x0008bdf6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0008d333) bg_sp_fs_scroll_pane_g

0x0b5e,	// (0x0007e162) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0b5e,	// (0x0007e162) list_medium_line_x2_t3_g4_g1

0x3193,	// (0x00080797) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3193,	// (0x00080797) list_medium_line_x2_t3_g4_g2

0x3187,	// (0x0008078b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3187,	// (0x0008078b) list_medium_line_x2_t3_g4_g3

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0b6a,	// (0x0007e16e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0008c8c6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0008c8c6) list_medium_line_x2_t3_g4_g

0x17c1,	// (0x0007edc5) list_medium_line_x2_t3_g4_t1_ParamLimits

0x17c1,	// (0x0007edc5) list_medium_line_x2_t3_g4_t1

0x17d7,	// (0x0007eddb) list_medium_line_x2_t3_g4_t2_ParamLimits

0x17d7,	// (0x0007eddb) list_medium_line_x2_t3_g4_t2

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0b9f,	// (0x0007e1a3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd36,	// (0x0008d33a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd36,	// (0x0008d33a) list_medium_line_x2_t3_g4_t

0x0f97,	// (0x0007e59b) list_medium_line_g2_g1_ParamLimits

0x0f97,	// (0x0007e59b) list_medium_line_g2_g1

0x7f88,	// (0x0008558c) list_medium_line_g2_g2_ParamLimits

0x7f88,	// (0x0008558c) list_medium_line_g2_g2

0x0001,

0xf9ef,	// (0x0008cff3) list_medium_line_g2_g_ParamLimits

0xf9ef,	// (0x0008cff3) list_medium_line_g2_g

0x17f0,	// (0x0007edf4) list_medium_line_g2_t1_ParamLimits

0x17f0,	// (0x0007edf4) list_medium_line_g2_t1

0x0f97,	// (0x0007e59b) list_medium_line_t3_g2_g1_ParamLimits

0x0f97,	// (0x0007e59b) list_medium_line_t3_g2_g1

0x7f88,	// (0x0008558c) list_medium_line_t3_g2_g2_ParamLimits

0x7f88,	// (0x0008558c) list_medium_line_t3_g2_g2

0x0001,

0xf9ef,	// (0x0008cff3) list_medium_line_t3_g2_g_ParamLimits

0xf9ef,	// (0x0008cff3) list_medium_line_t3_g2_g

0x1805,	// (0x0007ee09) list_medium_line_t3_g2_t1_ParamLimits

0x1805,	// (0x0007ee09) list_medium_line_t3_g2_t1

0x181f,	// (0x0007ee23) list_medium_line_t3_g2_t2_ParamLimits

0x181f,	// (0x0007ee23) list_medium_line_t3_g2_t2

0x1835,	// (0x0007ee39) list_medium_line_t3_g2_t3_ParamLimits

0x1835,	// (0x0007ee39) list_medium_line_t3_g2_t3

0x0002,

0xfd3d,	// (0x0008d341) list_medium_line_t3_g2_t_ParamLimits

0xfd3d,	// (0x0008d341) list_medium_line_t3_g2_t

0x92d8,	// (0x000868dc) list_medium_line_right_icon_g1

0x184c,	// (0x0007ee50) list_medium_line_right_icon_t1

0x0f97,	// (0x0007e59b) list_medium_line_t2_g1_ParamLimits

0x0f97,	// (0x0007e59b) list_medium_line_t2_g1

0x185a,	// (0x0007ee5e) list_medium_line_t2_t1_ParamLimits

0x185a,	// (0x0007ee5e) list_medium_line_t2_t1

0x1874,	// (0x0007ee78) list_medium_line_t2_t2_ParamLimits

0x1874,	// (0x0007ee78) list_medium_line_t2_t2

0x0001,

0xfd44,	// (0x0008d348) list_medium_line_t2_t_ParamLimits

0xfd44,	// (0x0008d348) list_medium_line_t2_t

0x0f97,	// (0x0007e59b) list_medium_line_t3_g1_ParamLimits

0x0f97,	// (0x0007e59b) list_medium_line_t3_g1

0x1889,	// (0x0007ee8d) list_medium_line_t3_t1_ParamLimits

0x1889,	// (0x0007ee8d) list_medium_line_t3_t1

0x18a0,	// (0x0007eea4) list_medium_line_t3_t2_ParamLimits

0x18a0,	// (0x0007eea4) list_medium_line_t3_t2

0x18b5,	// (0x0007eeb9) list_medium_line_t3_t3_ParamLimits

0x18b5,	// (0x0007eeb9) list_medium_line_t3_t3

0x0002,

0xfd49,	// (0x0008d34d) list_medium_line_t3_t_ParamLimits

0xfd49,	// (0x0008d34d) list_medium_line_t3_t

0x0f97,	// (0x0007e59b) list_medium_line_g3_g1_ParamLimits

0x0f97,	// (0x0007e59b) list_medium_line_g3_g1

0x935f,	// (0x00086963) list_medium_line_g3_g2_ParamLimits

0x935f,	// (0x00086963) list_medium_line_g3_g2

0x7f88,	// (0x0008558c) list_medium_line_g3_g3_ParamLimits

0x7f88,	// (0x0008558c) list_medium_line_g3_g3

0x0002,

0xfd50,	// (0x0008d354) list_medium_line_g3_g_ParamLimits

0xfd50,	// (0x0008d354) list_medium_line_g3_g

0x18c7,	// (0x0007eecb) list_medium_line_g3_t1_ParamLimits

0x18c7,	// (0x0007eecb) list_medium_line_g3_t1

0x0f97,	// (0x0007e59b) list_medium_line_t2_g3_g1_ParamLimits

0x0f97,	// (0x0007e59b) list_medium_line_t2_g3_g1

0x935f,	// (0x00086963) list_medium_line_t2_g3_g2_ParamLimits

0x935f,	// (0x00086963) list_medium_line_t2_g3_g2

0x7f88,	// (0x0008558c) list_medium_line_t2_g3_g3_ParamLimits

0x7f88,	// (0x0008558c) list_medium_line_t2_g3_g3

0x0002,

0xfd50,	// (0x0008d354) list_medium_line_t2_g3_g_ParamLimits

0xfd50,	// (0x0008d354) list_medium_line_t2_g3_g

0x18dc,	// (0x0007eee0) list_medium_line_t2_g3_t1_ParamLimits

0x18dc,	// (0x0007eee0) list_medium_line_t2_g3_t1

0x18f6,	// (0x0007eefa) list_medium_line_t2_g3_t2_ParamLimits

0x18f6,	// (0x0007eefa) list_medium_line_t2_g3_t2

0x0001,

0xfd57,	// (0x0008d35b) list_medium_line_t2_g3_t_ParamLimits

0xfd57,	// (0x0008d35b) list_medium_line_t2_g3_t

0x0f97,	// (0x0007e59b) list_medium_line_t3_g3_g1_ParamLimits

0x0f97,	// (0x0007e59b) list_medium_line_t3_g3_g1

0x935f,	// (0x00086963) list_medium_line_t3_g3_g2_ParamLimits

0x935f,	// (0x00086963) list_medium_line_t3_g3_g2

0x7f88,	// (0x0008558c) list_medium_line_t3_g3_g3_ParamLimits

0x7f88,	// (0x0008558c) list_medium_line_t3_g3_g3

0x0002,

0xfd50,	// (0x0008d354) list_medium_line_t3_g3_g_ParamLimits

0xfd50,	// (0x0008d354) list_medium_line_t3_g3_g

0x190c,	// (0x0007ef10) list_medium_line_t3_g3_t1_ParamLimits

0x190c,	// (0x0007ef10) list_medium_line_t3_g3_t1

0x1925,	// (0x0007ef29) list_medium_line_t3_g3_t2_ParamLimits

0x1925,	// (0x0007ef29) list_medium_line_t3_g3_t2

0x193b,	// (0x0007ef3f) list_medium_line_t3_g3_t3_ParamLimits

0x193b,	// (0x0007ef3f) list_medium_line_t3_g3_t3

0x0002,

0xfd5c,	// (0x0008d360) list_medium_line_t3_g3_t_ParamLimits

0xfd5c,	// (0x0008d360) list_medium_line_t3_g3_t

0x934b,	// (0x0008694f) list_medium_line_right_iconx2_g1

0x92d8,	// (0x000868dc) list_medium_line_right_iconx2_g2

0x0001,

0xfd63,	// (0x0008d367) list_medium_line_right_iconx2_g

0x936b,	// (0x0008696f) list_medium_line_right_iconx2_t1

0x934b,	// (0x0008694f) list_medium_line_t2_right_iconx2_g1

0x92d8,	// (0x000868dc) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd63,	// (0x0008d367) list_medium_line_t2_right_iconx2_g

0x1955,	// (0x0007ef59) list_medium_line_t2_right_iconx2_t1

0x1965,	// (0x0007ef69) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd68,	// (0x0008d36c) list_medium_line_t2_right_iconx2_t

0x1973,	// (0x0007ef77) list_medium_line_x4_t4_t1

0x1981,	// (0x0007ef85) list_medium_line_x4_t4_t2

0x1991,	// (0x0007ef95) list_medium_line_x4_t4_t3

0x19a1,	// (0x0007efa5) list_medium_line_x4_t4_t4

0x0003,

0xfd6d,	// (0x0008d371) list_medium_line_x4_t4_t

0x93a3,	// (0x000869a7) tport_appsw_pane_ParamLimits

0x93a3,	// (0x000869a7) tport_appsw_pane

0x93b1,	// (0x000869b5) tport_contact_pane_ParamLimits

0x93b1,	// (0x000869b5) tport_contact_pane

0x93c1,	// (0x000869c5) tport_listscroll_pane_ParamLimits

0x93c1,	// (0x000869c5) tport_listscroll_pane

0x93d1,	// (0x000869d5) cell_tport_appsw_pane_ParamLimits

0x93d1,	// (0x000869d5) cell_tport_appsw_pane

0xcf03,	// (0x0008a507) tport_appsw_pane_g1_ParamLimits

0xcf03,	// (0x0008a507) tport_appsw_pane_g1

0xe7fb,	// (0x0008bdff) tport_contact_pane_g1

0xe804,	// (0x0008be08) tport_contact_pane_t1

0xe812,	// (0x0008be16) tport_contact_pane_t2

0x0001,

0xfd76,	// (0x0008d37a) tport_contact_pane_t

0xe820,	// (0x0008be24) list_tport_pane

0xe829,	// (0x0008be2d) scroll_pane_cp_030

0x9406,	// (0x00086a0a) cell_tport_appsw_pane_g1

0x9416,	// (0x00086a1a) cell_tport_appsw_pane_t1

0x9424,	// (0x00086a28) grid_highlight_pane_cp019

0x942c,	// (0x00086a30) list_tport_double_graphic_pane_ParamLimits

0x942c,	// (0x00086a30) list_tport_double_graphic_pane

0xa8a8,	// (0x00087eac) list_highlight_pane_cp023_ParamLimits

0xa8a8,	// (0x00087eac) list_highlight_pane_cp023

0x9439,	// (0x00086a3d) list_tport_double_graphic_pane_g1_ParamLimits

0x9439,	// (0x00086a3d) list_tport_double_graphic_pane_g1

0x9446,	// (0x00086a4a) list_tport_double_graphic_pane_t1_ParamLimits

0x9446,	// (0x00086a4a) list_tport_double_graphic_pane_t1

0x945b,	// (0x00086a5f) list_tport_double_graphic_pane_t2_ParamLimits

0x945b,	// (0x00086a5f) list_tport_double_graphic_pane_t2

0x0001,

0xfd82,	// (0x0008d386) list_tport_double_graphic_pane_t_ParamLimits

0xfd82,	// (0x0008d386) list_tport_double_graphic_pane_t

0xa162,	// (0x00087766) main_cale_note_pane

0x77b9,	// (0x00084dbd) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x77b9,	// (0x00084dbd) cell_vitu2_function_top_wide_pane_cp01

0x8f4b,	// (0x0008654f) wait_bar_pane_cp05_ParamLimits

0xa8a8,	// (0x00087eac) listscroll_cmail_pane

0xe83a,	// (0x0008be3e) list_cmail_pane

0x9477,	// (0x00086a7b) list_cmail_body_pane

0x9490,	// (0x00086a94) list_single_cmail_header_caption_pane

0x94b1,	// (0x00086ab5) list_single_cmail_header_detail_pane_ParamLimits

0x94b1,	// (0x00086ab5) list_single_cmail_header_detail_pane

0x94e2,	// (0x00086ae6) list_single_cmail_header_caption_pane_t1

0x19b1,	// (0x0007efb5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x19b1,	// (0x0007efb5) list_single_cmail_header_detail_pane_g1

0x94f2,	// (0x00086af6) list_single_cmail_header_detail_pane_g2_ParamLimits

0x94f2,	// (0x00086af6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd87,	// (0x0008d38b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd87,	// (0x0008d38b) list_single_cmail_header_detail_pane_g

0x19c9,	// (0x0007efcd) list_single_cmail_header_detail_pane_t1_ParamLimits

0x19c9,	// (0x0007efcd) list_single_cmail_header_detail_pane_t1

0x1a3b,	// (0x0007f03f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1a3b,	// (0x0007f03f) list_single_cmail_header_editor_pane_bg

0xe2e8,	// (0x0008b8ec) list_cmail_body_pane_g1

0xe867,	// (0x0008be6b) list_cmail_body_pane_t1

0xd67c,	// (0x0008ac80) list_single_cmail_header_editor_pane_bg_g1

0xad27,	// (0x0008832b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd68c,	// (0x0008ac90) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd684,	// (0x0008ac88) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8b0,	// (0x0008aeb4) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6ac,	// (0x0008acb0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd69c,	// (0x0008aca0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6a4,	// (0x0008aca8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad07,	// (0x0008830b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x94fe,	// (0x00086b02) calenote_gesture_pane_ParamLimits

0x94fe,	// (0x00086b02) calenote_gesture_pane

0x9518,	// (0x00086b1c) calenote_window_pane_ParamLimits

0x9518,	// (0x00086b1c) calenote_window_pane

0xe875,	// (0x0008be79) popup_note_window_cp01

0x9530,	// (0x00086b34) calenote_swipe_1_pane_ParamLimits

0x9530,	// (0x00086b34) calenote_swipe_1_pane

0x92be,	// (0x000868c2) calenote_swipe_2_pane_ParamLimits

0x92be,	// (0x000868c2) calenote_swipe_2_pane

0xe682,	// (0x0008bc86) calenote_swipe_1_pane_g1_ParamLimits

0xe682,	// (0x0008bc86) calenote_swipe_1_pane_g1

0xe68f,	// (0x0008bc93) calenote_swipe_1_pane_g2_ParamLimits

0xe68f,	// (0x0008bc93) calenote_swipe_1_pane_g2

0x0001,

0xfcab,	// (0x0008d2af) calenote_swipe_1_pane_g_ParamLimits

0xfcab,	// (0x0008d2af) calenote_swipe_1_pane_g

0xe887,	// (0x0008be8b) calenote_swipe_1_pane_t1_ParamLimits

0xe887,	// (0x0008be8b) calenote_swipe_1_pane_t1

0xe682,	// (0x0008bc86) calenote_swipe_2_pane_g1_ParamLimits

0xe682,	// (0x0008bc86) calenote_swipe_2_pane_g1

0xe8a6,	// (0x0008beaa) calenote_swipe_2_pane_g2_ParamLimits

0xe8a6,	// (0x0008beaa) calenote_swipe_2_pane_g2

0x0001,

0xfd93,	// (0x0008d397) calenote_swipe_2_pane_g_ParamLimits

0xfd93,	// (0x0008d397) calenote_swipe_2_pane_g

0xe8b2,	// (0x0008beb6) calenote_swipe_2_pane_t1_ParamLimits

0xe8b2,	// (0x0008beb6) calenote_swipe_2_pane_t1

0xa162,	// (0x00087766) main_mup_navstr_pane

0x64f0,	// (0x00083af4) main_mup3_pane_t7_ParamLimits

0x64f0,	// (0x00083af4) main_mup3_pane_t7

0x6ef3,	// (0x000844f7) main_mp4_pane_g6_ParamLimits

0x6ef3,	// (0x000844f7) main_mp4_pane_g6

0x7263,	// (0x00084867) main_image3_pane_t4_ParamLimits

0x7263,	// (0x00084867) main_image3_pane_t4

0x9543,	// (0x00086b47) popup_navstr_preview_pane_ParamLimits

0x9543,	// (0x00086b47) popup_navstr_preview_pane

0x954f,	// (0x00086b53) scroll_navstr_pane_ParamLimits

0x954f,	// (0x00086b53) scroll_navstr_pane

0xa162,	// (0x00087766) bg_popup_preview_window_pane_cp04

0xe8d9,	// (0x0008bedd) popup_navstr_preview_pane_t1

0x955b,	// (0x00086b5f) scroll_navstr_pane_g1_ParamLimits

0x955b,	// (0x00086b5f) scroll_navstr_pane_g1

0x9568,	// (0x00086b6c) scroll_navstr_pane_t1_ParamLimits

0x9568,	// (0x00086b6c) scroll_navstr_pane_t1

0xe87e,	// (0x0008be82) bg_button_pane_cp014

0xe87e,	// (0x0008be82) bg_button_pane_cp030

0x1303,	// (0x0007e907) list_double_fisheye_pane_g4_ParamLimits

0x1303,	// (0x0007e907) list_double_fisheye_pane_g4

0x130f,	// (0x0007e913) list_double_fisheye_pane_g5_ParamLimits

0x130f,	// (0x0007e913) list_double_fisheye_pane_g5

0xe842,	// (0x0008be46) sp_fs_scroll_pane_cp03

0xe5fd,	// (0x0008bc01) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe75a,	// (0x0008bd5e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc8,	// (0x0008d2cc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe766,	// (0x0008bd6a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x946d,	// (0x00086a71) sp_fs_scroll_pane_cp02

0xaa2a,	// (0x0008802e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaa2a,	// (0x0008802e) popup_sp_fs_calendar_preview_list_single_pane

0xa162,	// (0x00087766) main_cam6_pano_pane

0xa8a8,	// (0x00087eac) main_mup3_pane_ParamLimits

0xa162,	// (0x00087766) main_phacti_pane

0x8e1e,	// (0x00086422) bg_button_pane_cp11

0x8e36,	// (0x0008643a) main_mobtv_info_pane_g2_ParamLimits

0x8e36,	// (0x0008643a) main_mobtv_info_pane_g2

0x0001,

0xfc28,	// (0x0008d22c) main_mobtv_info_pane_g_ParamLimits

0xfc28,	// (0x0008d22c) main_mobtv_info_pane_g

0x8fe8,	// (0x000865ec) sc_clock_pane_t5_ParamLimits

0x8fe8,	// (0x000865ec) sc_clock_pane_t5

0x9097,	// (0x0008669b) main_radioblah_pane_g1_ParamLimits

0xe593,	// (0x0008bb97) main_radioblah_pane_t3_ParamLimits

0xe593,	// (0x0008bb97) main_radioblah_pane_t3

0xe5ab,	// (0x0008bbaf) main_radioblah_pane_t4_ParamLimits

0xe5ab,	// (0x0008bbaf) main_radioblah_pane_t4

0x90b5,	// (0x000866b9) main_radioblah_text_pane_ParamLimits

0x90b5,	// (0x000866b9) main_radioblah_text_pane

0x90c2,	// (0x000866c6) main_radioblah_info_pane_g1_ParamLimits

0x915b,	// (0x0008675f) main_radioblah_info_pane_t4_ParamLimits

0x915b,	// (0x0008675f) main_radioblah_info_pane_t4

0xa8a8,	// (0x00087eac) main_sp_fs_calendar_pane

0x957a,	// (0x00086b7e) main_phacti_pane_g1

0x9582,	// (0x00086b86) phacti_note_pane_ParamLimits

0x9582,	// (0x00086b86) phacti_note_pane

0xe8f0,	// (0x0008bef4) phacti_term_pane_ParamLimits

0xe8f0,	// (0x0008bef4) phacti_term_pane

0xe905,	// (0x0008bf09) phacti_note_pane_t1_ParamLimits

0xe905,	// (0x0008bf09) phacti_note_pane_t1

0x1a52,	// (0x0007f056) phacti_term_pane_g1

0x1a5a,	// (0x0007f05e) phacti_term_pane_t1_ParamLimits

0x1a5a,	// (0x0007f05e) phacti_term_pane_t1

0xe91c,	// (0x0008bf20) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe924,	// (0x0008bf28) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9d,	// (0x0008d3a1) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92c,	// (0x0008bf30) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92c,	// (0x0008bf30) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe942,	// (0x0008bf46) aid_popup_sp_fs_bg_corner_pane

0xcc6e,	// (0x0008a272) popup_sp_fs_calendar_preview_bg_pane_g1

0xa162,	// (0x00087766) popup_sp_fs_calendar_preview_bg_pane

0xe94a,	// (0x0008bf4e) popup_sp_fs_calendar_preview_list_pane

0xc81d,	// (0x00089e21) bg_main_sp_fs_cale_pane_ParamLimits

0xc81d,	// (0x00089e21) bg_main_sp_fs_cale_pane

0x1a8d,	// (0x0007f091) listscroll_cale_mrui_pane_ParamLimits

0x1a8d,	// (0x0007f091) listscroll_cale_mrui_pane

0x1aa2,	// (0x0007f0a6) listscroll_sp_fs_schedule_track_pane

0x1aab,	// (0x0007f0af) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1aab,	// (0x0007f0af) main_sp_fs_ctrlbar_pane_cp01

0xe952,	// (0x0008bf56) main_sp_fs_ribbon_pane

0x1abe,	// (0x0007f0c2) popup_sp_fs_cale_preview_window

0x95e1,	// (0x00086be5) list_single_sp_fs_schedule_track_pane_ParamLimits

0x95e1,	// (0x00086be5) list_single_sp_fs_schedule_track_pane

0x20c6,	// (0x0007f6ca) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x20c6,	// (0x0007f6ca) bg_sp_fs_highlight_list_pane_cp03

0x95f6,	// (0x00086bfa) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x95f6,	// (0x00086bfa) list_single_sp_fs_schedule_track_pane_g1

0x9602,	// (0x00086c06) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9602,	// (0x00086c06) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda2,	// (0x0008d3a6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda2,	// (0x0008d3a6) list_single_sp_fs_schedule_track_pane_g

0x960e,	// (0x00086c12) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x960e,	// (0x00086c12) list_single_sp_fs_schedule_track_pane_t1

0x962c,	// (0x00086c30) sp_fs_schedule_track_pane_ParamLimits

0x962c,	// (0x00086c30) sp_fs_schedule_track_pane

0xe95a,	// (0x0008bf5e) sp_fs_schedule_track_pane_g1

0xe962,	// (0x0008bf66) sp_fs_schedule_track_pane_g2

0xe96a,	// (0x0008bf6e) sp_fs_schedule_track_pane_g3

0xe972,	// (0x0008bf76) sp_fs_schedule_track_pane_g4

0xe97a,	// (0x0008bf7e) sp_fs_schedule_track_pane_g5

0x0004,

0xfda7,	// (0x0008d3ab) sp_fs_schedule_track_pane_g

0xd67c,	// (0x0008ac80) bg_sp_fs_schedule_viewer_highlight_g1

0xad27,	// (0x0008832b) bg_sp_fs_schedule_viewer_highlight_g2

0xd684,	// (0x0008ac88) bg_sp_fs_schedule_viewer_highlight_g3

0xd68c,	// (0x0008ac90) bg_sp_fs_schedule_viewer_highlight_g4

0xd8b0,	// (0x0008aeb4) bg_sp_fs_schedule_viewer_highlight_g5

0xd69c,	// (0x0008aca0) bg_sp_fs_schedule_viewer_highlight_g6

0xd6a4,	// (0x0008aca8) bg_sp_fs_schedule_viewer_highlight_g7

0xd6ac,	// (0x0008acb0) bg_sp_fs_schedule_viewer_highlight_g8

0xad07,	// (0x0008830b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb2,	// (0x0008d3b6) bg_sp_fs_schedule_viewer_highlight_g

0xa162,	// (0x00087766) bg_main_sp_fs_ribbon_pane

0x963e,	// (0x00086c42) main_sp_fs_ribbon_pane_g1

0xe982,	// (0x0008bf86) main_sp_fs_ribbon_pane_t1

0x9647,	// (0x00086c4b) main_sp_fs_ribbon_pane_t2

0xe991,	// (0x0008bf95) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc5,	// (0x0008d3c9) main_sp_fs_ribbon_pane_t

0xe9a0,	// (0x0008bfa4) main_sp_fs_ribbon_scheduler_pane

0xe9a8,	// (0x0008bfac) bg_main_sp_fs_ribbon_pane_g1

0xe9b1,	// (0x0008bfb5) bg_main_sp_fs_ribbon_pane_g2

0xe9ba,	// (0x0008bfbe) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdcc,	// (0x0008d3d0) bg_main_sp_fs_ribbon_pane_g

0xe9c2,	// (0x0008bfc6) main_sp_fs_ribbon_scheduler_pane_g1

0xe9cb,	// (0x0008bfcf) main_sp_fs_ribbon_scheduler_pane_g2

0xe9d4,	// (0x0008bfd8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd3,	// (0x0008d3d7) main_sp_fs_ribbon_scheduler_pane_g

0xe9dd,	// (0x0008bfe1) list_cale_mrui_pane

0x9656,	// (0x00086c5a) sp_fs_scroll_pane_cp07_ParamLimits

0x9656,	// (0x00086c5a) sp_fs_scroll_pane_cp07

0x9672,	// (0x00086c76) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9672,	// (0x00086c76) bg_sp_fs_schedule_viewer_highlight

0xe9ea,	// (0x0008bfee) list_single_sp_fs_schedule_track_pane_cp01

0xe9f2,	// (0x0008bff6) list_sp_fs_schedule_track_pane

0xe9fa,	// (0x0008bffe) sp_fs_scroll_pane_cp06_ParamLimits

0xe9fa,	// (0x0008bffe) sp_fs_scroll_pane_cp06

0xcc6e,	// (0x0008a272) bgmain_sp_fs_calendar_pane_g1

0x1ad0,	// (0x0007f0d4) list_single_cale_mrui_pane_ParamLimits

0x1ad0,	// (0x0007f0d4) list_single_cale_mrui_pane

0x1ae5,	// (0x0007f0e9) list_single_cale_mrui_row_pane_ParamLimits

0x1ae5,	// (0x0007f0e9) list_single_cale_mrui_row_pane

0x1afb,	// (0x0007f0ff) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1afb,	// (0x0007f0ff) list_single_cale_mrui_row_pane_g1

0x1b27,	// (0x0007f12b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1b27,	// (0x0007f12b) list_single_cale_mrui_row_pane_t1

0x1b39,	// (0x0007f13d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1b39,	// (0x0007f13d) list_single_cale_mrui_row_pane_t2

0x1b9f,	// (0x0007f1a3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1b9f,	// (0x0007f1a3) list_single_cale_mrui_row_pane_t3

0x1bce,	// (0x0007f1d2) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1bce,	// (0x0007f1d2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde1,	// (0x0008d3e5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde1,	// (0x0008d3e5) list_single_cale_mrui_row_pane_t

0x1bfd,	// (0x0007f201) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1bfd,	// (0x0007f201) list_single_cmail_header_editor_pane_bg_cp01

0x1c21,	// (0x0007f225) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1c21,	// (0x0007f225) list_single_cmail_header_editor_pane_bg_cp02

0x968b,	// (0x00086c8f) main_radioblah_text_pane_t1_ParamLimits

0x968b,	// (0x00086c8f) main_radioblah_text_pane_t1

0xea19,	// (0x0008c01d) cam6_indi_pane_cp01

0xea21,	// (0x0008c025) cam6_mode_pane_cp01

0xea29,	// (0x0008c02d) cam6_pano_pane

0xea32,	// (0x0008c036) cam6_zoom_pane_cp01

0xea3c,	// (0x0008c040) cam6_pano_image_pane

0xea45,	// (0x0008c049) cam6_pano_pane_g1

0xe2e8,	// (0x0008b8ec) cam6_pano_pane_g2

0xea4e,	// (0x0008c052) cam6_pano_pane_g3

0xea57,	// (0x0008c05b) cam6_pano_pane_g4

0xd210,	// (0x0008a814) cam6_pano_pane_g5

0xea60,	// (0x0008c064) cam6_pano_pane_g6

0xea68,	// (0x0008c06c) cam6_pano_pane_g7

0xea70,	// (0x0008c074) cam6_pano_pane_g8

0xea79,	// (0x0008c07d) cam6_pano_pane_g9

0x0008,

0xfdea,	// (0x0008d3ee) cam6_pano_pane_g

0xa162,	// (0x00087766) main_browser_tag_pane

0xe8d1,	// (0x0008bed5) grid_navstr_albumart_pane

0xea84,	// (0x0008c088) cell_navstr_albumart_pane_ParamLimits

0xea84,	// (0x0008c088) cell_navstr_albumart_pane

0xeaa3,	// (0x0008c0a7) cell_navstr_albumart_pane_g1

0xc62a,	// (0x00089c2e) cell_navstr_albumart_pane_g2

0xc63a,	// (0x00089c3e) cell_navstr_albumart_pane_g3

0xc632,	// (0x00089c36) cell_navstr_albumart_pane_g4

0x0003,

0xfdfd,	// (0x0008d401) cell_navstr_albumart_pane_g

0x96a5,	// (0x00086ca9) bt_list_pane_ParamLimits

0x96a5,	// (0x00086ca9) bt_list_pane

0x96be,	// (0x00086cc2) bt_list_pane_t1

0x96cd,	// (0x00086cd1) bt_list_pane_t2

0x0001,

0xfe06,	// (0x0008d40a) bt_list_pane_t

0xa162,	// (0x00087766) main_cale_prevew_pane

0x96dc,	// (0x00086ce0) popup_cale_preview_window_ParamLimits

0x96dc,	// (0x00086ce0) popup_cale_preview_window

0xa8a8,	// (0x00087eac) bg_popup_preview_window_pane_cp05_ParamLimits

0xa8a8,	// (0x00087eac) bg_popup_preview_window_pane_cp05

0xeaab,	// (0x0008c0af) list_cale_preview_pane_ParamLimits

0xeaab,	// (0x0008c0af) list_cale_preview_pane

0x96f7,	// (0x00086cfb) list_double_cale_preview_pane_ParamLimits

0x96f7,	// (0x00086cfb) list_double_cale_preview_pane

0x970b,	// (0x00086d0f) list_single_cale_preview_pane_ParamLimits

0x970b,	// (0x00086d0f) list_single_cale_preview_pane

0x9723,	// (0x00086d27) list_single_cale_preview_pane_g1

0x972b,	// (0x00086d2f) list_single_cale_preview_pane_t1_ParamLimits

0x972b,	// (0x00086d2f) list_single_cale_preview_pane_t1

0x9740,	// (0x00086d44) list_double_cale_preview_pane_g1

0x9748,	// (0x00086d4c) list_double_cale_preview_pane_t1_ParamLimits

0x9748,	// (0x00086d4c) list_double_cale_preview_pane_t1

0x975d,	// (0x00086d61) list_double_cale_preview_pane_t2_ParamLimits

0x975d,	// (0x00086d61) list_double_cale_preview_pane_t2

0x0001,

0xfe0b,	// (0x0008d40f) list_double_cale_preview_pane_t_ParamLimits

0xfe0b,	// (0x0008d40f) list_double_cale_preview_pane_t

0xa162,	// (0x00087766) main_ezdial_pane

0xa8a8,	// (0x00087eac) main_sp_fs_email_pane_ParamLimits

0x92e0,	// (0x000868e4) cmail_ddmenu_btn01_pane_ParamLimits

0x92e0,	// (0x000868e4) cmail_ddmenu_btn01_pane

0x92fd,	// (0x00086901) cmail_ddmenu_btn02_pane_ParamLimits

0x92fd,	// (0x00086901) cmail_ddmenu_btn02_pane

0x931b,	// (0x0008691f) cmail_ddmenu_btn03_pane_ParamLimits

0x931b,	// (0x0008691f) cmail_ddmenu_btn03_pane

0x13c1,	// (0x0007e9c5) main_sp_fs_ctrlbar_pane_ParamLimits

0x13db,	// (0x0007e9df) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9477,	// (0x00086a7b) list_cmail_body_pane_ParamLimits

0xe851,	// (0x0008be55) bg_button_pane_cp12

0xe85a,	// (0x0008be5e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe85a,	// (0x0008be5e) list_single_cmail_header_detail_pane_g3

0x1a17,	// (0x0007f01b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1a17,	// (0x0007f01b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8e,	// (0x0008d392) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8e,	// (0x0008d392) list_single_cmail_header_detail_pane_t

0x1a6f,	// (0x0007f073) phacti_term_pane_t2_ParamLimits

0x1a6f,	// (0x0007f073) phacti_term_pane_t2

0x0001,

0xfd98,	// (0x0008d39c) phacti_term_pane_t_ParamLimits

0xfd98,	// (0x0008d39c) phacti_term_pane_t

0xeab7,	// (0x0008c0bb) aid_size_list_single_double

0x9775,	// (0x00086d79) popup_ezdial_listscroll_window

0x9797,	// (0x00086d9b) popup_number_entry_window_cp01

0xaaca,	// (0x000880ce) bg_popup_call_pane_cp09

0xeac3,	// (0x0008c0c7) ezdial_list_pane

0xeacb,	// (0x0008c0cf) scroll_pane_cp23

0xca4d,	// (0x0008a051) bg_button_pane_cp028_ParamLimits

0xca4d,	// (0x0008a051) bg_button_pane_cp028

0x97a5,	// (0x00086da9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x97a5,	// (0x00086da9) cmail_ddmenu_btn01_pane_g1

0x97b7,	// (0x00086dbb) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x97b7,	// (0x00086dbb) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe10,	// (0x0008d414) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe10,	// (0x0008d414) cmail_ddmenu_btn01_pane_g

0xead3,	// (0x0008c0d7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead3,	// (0x0008c0d7) cmail_ddmenu_btn01_pane_t1

0xc81d,	// (0x00089e21) bg_button_pane_cp029_ParamLimits

0xc81d,	// (0x00089e21) bg_button_pane_cp029

0x97c3,	// (0x00086dc7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97c3,	// (0x00086dc7) cmail_ddmenu_btn02_pane_g1

0x97db,	// (0x00086ddf) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x97db,	// (0x00086ddf) cmail_ddmenu_btn02_pane_t1

0x20c6,	// (0x0007f6ca) bg_button_pane_cp031_ParamLimits

0x20c6,	// (0x0007f6ca) bg_button_pane_cp031

0x97c3,	// (0x00086dc7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97c3,	// (0x00086dc7) cmail_ddmenu_btn03_pane_g1

0x97db,	// (0x00086ddf) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x97db,	// (0x00086ddf) cmail_ddmenu_btn03_pane_t1

0x710c,	// (0x00084710) cell_dialer2_keypad_pane_t1_ParamLimits

0x7126,	// (0x0008472a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7126,	// (0x0008472a) cell_dialer2_keypad_pane_t1_copy1

0x8c8f,	// (0x00086293) ncimui_group_button_pane

0xa8a8,	// (0x00087eac) main_sp_fs_calendar_pane_ParamLimits

0x9490,	// (0x00086a94) list_single_cmail_header_caption_pane_ParamLimits

0x1a84,	// (0x0007f088) aid_recal_txt_sm_pane

0xa162,	// (0x00087766) mian_recal_day_pane

0x1abe,	// (0x0007f0c2) popup_sp_fs_cale_preview_window_ParamLimits

0xeae9,	// (0x0008c0ed) list_recal_day_pane

0x1c59,	// (0x0007f25d) list_single_recal_day_pane_ParamLimits

0x1c59,	// (0x0007f25d) list_single_recal_day_pane

0xeb10,	// (0x0008c114) list_single_recal_day_pane_g1_ParamLimits

0xeb10,	// (0x0008c114) list_single_recal_day_pane_g1

0x1c6b,	// (0x0007f26f) list_single_recal_day_pane_g2_ParamLimits

0x1c6b,	// (0x0007f26f) list_single_recal_day_pane_g2

0x1c77,	// (0x0007f27b) list_single_recal_day_pane_g3_ParamLimits

0x1c77,	// (0x0007f27b) list_single_recal_day_pane_g3

0x1c83,	// (0x0007f287) list_single_recal_day_pane_g4_ParamLimits

0x1c83,	// (0x0007f287) list_single_recal_day_pane_g4

0x1c91,	// (0x0007f295) list_single_recal_day_pane_g5_ParamLimits

0x1c91,	// (0x0007f295) list_single_recal_day_pane_g5

0x1ca7,	// (0x0007f2ab) list_single_recal_day_pane_g6_ParamLimits

0x1ca7,	// (0x0007f2ab) list_single_recal_day_pane_g6

0x0004,

0xfe1f,	// (0x0008d423) list_single_recal_day_pane_g_ParamLimits

0xfe1f,	// (0x0008d423) list_single_recal_day_pane_g

0x1cbb,	// (0x0007f2bf) list_single_recal_day_pane_t1

0x1ccd,	// (0x0007f2d1) list_single_recal_day_pane_t2

0x0001,

0xfe2a,	// (0x0008d42e) list_single_recal_day_pane_t

0x97ff,	// (0x00086e03) ncimui_query_button_pane_ParamLimits

0x97ff,	// (0x00086e03) ncimui_query_button_pane

0x980f,	// (0x00086e13) ncimui_query_button_pane_t1_ParamLimits

0x980f,	// (0x00086e13) ncimui_query_button_pane_t1

0xeb1c,	// (0x0008c120) ncimui_query_button_pane_t2_ParamLimits

0xeb1c,	// (0x0008c120) ncimui_query_button_pane_t2

0x0001,

0xfe2f,	// (0x0008d433) ncimui_query_button_pane_t_ParamLimits

0xfe2f,	// (0x0008d433) ncimui_query_button_pane_t

0x9822,	// (0x00086e26) query_button_pane_ParamLimits

0x9822,	// (0x00086e26) query_button_pane

0xa162,	// (0x00087766) bg_button_pane_cp0028

0xeb2f,	// (0x0008c133) query_button_pane_t1

0x54ef,	// (0x00082af3) main_tport_pane_ParamLimits

0x9379,	// (0x0008697d) bg_popup_window_pane_cp01_ParamLimits

0x9379,	// (0x0008697d) bg_popup_window_pane_cp01

0x9387,	// (0x0008698b) heading_pane_cp08_ParamLimits

0x9387,	// (0x0008698b) heading_pane_cp08

0x9395,	// (0x00086999) heading_pane_cp07_ParamLimits

0x9395,	// (0x00086999) heading_pane_cp07

0x9406,	// (0x00086a0a) cell_tport_appsw_pane_g2

0x0002,

0xfd7b,	// (0x0008d37f) cell_tport_appsw_pane_g

0x0d71,	// (0x0007e375) input_candi_list_open_g1

0xaedb,	// (0x000884df) list_cale_time_pane_g6_ParamLimits

0xaedb,	// (0x000884df) list_cale_time_pane_g6

0x5f7a,	// (0x0008357e) aid_size_touch_calib_1_ParamLimits

0x5f7a,	// (0x0008357e) aid_size_touch_calib_1

0x5f86,	// (0x0008358a) aid_size_touch_calib_2_ParamLimits

0x5f86,	// (0x0008358a) aid_size_touch_calib_2

0x5f94,	// (0x00083598) aid_size_touch_calib_3_ParamLimits

0x5f94,	// (0x00083598) aid_size_touch_calib_3

0x5fa4,	// (0x000835a8) aid_size_touch_calib_4_ParamLimits

0x5fa4,	// (0x000835a8) aid_size_touch_calib_4

0x5fb2,	// (0x000835b6) main_touch_calib_button_group_pane_ParamLimits

0x5fb2,	// (0x000835b6) main_touch_calib_button_group_pane

0x5fc0,	// (0x000835c4) main_touch_calib_pane_g1_ParamLimits

0x5fcc,	// (0x000835d0) main_touch_calib_pane_g2_ParamLimits

0x5fd8,	// (0x000835dc) main_touch_calib_pane_g3_ParamLimits

0x5fe4,	// (0x000835e8) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0008cd55) main_touch_calib_pane_g_ParamLimits

0x5ff0,	// (0x000835f4) main_touch_calib_pane_t1_ParamLimits

0x6007,	// (0x0008360b) main_touch_calib_pane_t2_ParamLimits

0x6020,	// (0x00083624) main_touch_calib_pane_t3_ParamLimits

0x6036,	// (0x0008363a) main_touch_calib_pane_t4_ParamLimits

0x604c,	// (0x00083650) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0008cd5e) main_touch_calib_pane_t_ParamLimits

0xcf9e,	// (0x0008a5a2) list_single_fp_cale_pane_g3_ParamLimits

0xcf9e,	// (0x0008a5a2) list_single_fp_cale_pane_g3

0xa8a8,	// (0x00087eac) bg_button_pane_cp012_ParamLimits

0xa8a8,	// (0x00087eac) bg_vkb2_func_pane_cp03_ParamLimits

0x7f1a,	// (0x0008551e) cell_vitu2_function_top_pane_g1_ParamLimits

0xa8a8,	// (0x00087eac) bg_vkb2_func_pane_cp04_ParamLimits

0x8c15,	// (0x00086219) main_ncimui_button_group_pane_ParamLimits

0x8c15,	// (0x00086219) main_ncimui_button_group_pane

0x8c7d,	// (0x00086281) main_ncimui_pane_t3_ParamLimits

0x8c7d,	// (0x00086281) main_ncimui_pane_t3

0xe8e7,	// (0x0008beeb) phacti_button_group_pane

0xeab7,	// (0x0008c0bb) aid_size_list_single_double_ParamLimits

0x9775,	// (0x00086d79) popup_ezdial_listscroll_window_ParamLimits

0x9797,	// (0x00086d9b) popup_number_entry_window_cp01_ParamLimits

0x982f,	// (0x00086e33) phacti_button_pane_ParamLimits

0x982f,	// (0x00086e33) phacti_button_pane

0xa162,	// (0x00087766) bg_button_pane_cp14

0xeb3d,	// (0x0008c141) phacti_button_pane_t1

0x9840,	// (0x00086e44) main_touch_calib_button_pane_ParamLimits

0x9840,	// (0x00086e44) main_touch_calib_button_pane

0xa914,	// (0x00087f18) bg_button_pane_cp18_ParamLimits

0xa914,	// (0x00087f18) bg_button_pane_cp18

0xeb4b,	// (0x0008c14f) main_touch_calib_button_pane_t1_ParamLimits

0xeb4b,	// (0x0008c14f) main_touch_calib_button_pane_t1

0xeb61,	// (0x0008c165) main_touch_calib_button_pane_t2_ParamLimits

0xeb61,	// (0x0008c165) main_touch_calib_button_pane_t2

0x0001,

0xfe34,	// (0x0008d438) main_touch_calib_button_pane_t_ParamLimits

0xfe34,	// (0x0008d438) main_touch_calib_button_pane_t

0xa162,	// (0x00087766) cell_ncimui_button_pane

0xa162,	// (0x00087766) bg_button_pane_cp032

0xeb7f,	// (0x0008c183) cell_ncimui_button_pane_t1

0x7182,	// (0x00084786) image3_infobar_pane_ParamLimits

0x7182,	// (0x00084786) image3_infobar_pane

0x900a,	// (0x0008660e) fs_bigclock_status_pane_ParamLimits

0x900a,	// (0x0008660e) fs_bigclock_status_pane

0x9017,	// (0x0008661b) main_fs_bigclock_clock_pane_ParamLimits

0x9017,	// (0x0008661b) main_fs_bigclock_clock_pane

0x9033,	// (0x00086637) main_fs_bigclock_indi_pane_ParamLimits

0x9033,	// (0x00086637) main_fs_bigclock_indi_pane

0x9065,	// (0x00086669) main_fs_bigclock_swipe_pane_ParamLimits

0x9065,	// (0x00086669) main_fs_bigclock_swipe_pane

0xa162,	// (0x00087766) main_fs_clock_dumped_data

0xe3f5,	// (0x0008b9f9) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3f5,	// (0x0008b9f9) list_single_fs_bigclock_indicator_pane_g1

0xe41f,	// (0x0008ba23) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe41f,	// (0x0008ba23) list_single_fs_bigclock_indicator_pane_g2

0xe439,	// (0x0008ba3d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe439,	// (0x0008ba3d) list_single_fs_bigclock_indicator_pane_g3

0xe453,	// (0x0008ba57) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe453,	// (0x0008ba57) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5c,	// (0x0008d260) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5c,	// (0x0008d260) list_single_fs_bigclock_indicator_pane_g

0xe47e,	// (0x0008ba82) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe47e,	// (0x0008ba82) list_single_fs_bigclock_indicator_pane_t1

0xe4a6,	// (0x0008baaa) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4a6,	// (0x0008baaa) list_single_fs_bigclock_indicator_pane_t2

0xe4ce,	// (0x0008bad2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4ce,	// (0x0008bad2) list_single_fs_bigclock_indicator_pane_t3

0xe4f6,	// (0x0008bafa) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4f6,	// (0x0008bafa) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc67,	// (0x0008d26b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc67,	// (0x0008d26b) list_single_fs_bigclock_indicator_pane_t

0xeb8d,	// (0x0008c191) image3_infobar_fav_pane_ParamLimits

0xeb8d,	// (0x0008c191) image3_infobar_fav_pane

0xeb9d,	// (0x0008c1a1) image3_infobar_loc_pane_ParamLimits

0xeb9d,	// (0x0008c1a1) image3_infobar_loc_pane

0xebb3,	// (0x0008c1b7) image3_infobar_time_pane_ParamLimits

0xebb3,	// (0x0008c1b7) image3_infobar_time_pane

0xcc6e,	// (0x0008a272) image3_infobar_time_pane_g1

0xebc3,	// (0x0008c1c7) image3_infobar_time_pane_t1

0xcc6e,	// (0x0008a272) image3_infobar_loc_pane_g1

0xebd1,	// (0x0008c1d5) image3_infobar_loc_pane_g2

0x0001,

0xfe39,	// (0x0008d43d) image3_infobar_loc_pane_g

0xebd9,	// (0x0008c1dd) image3_infobar_loc_pane_t1

0xcc6e,	// (0x0008a272) image3_infobar_fav_pane_g1

0xebe7,	// (0x0008c1eb) image3_infobar_fav_pane_g2

0x0001,

0xfe3e,	// (0x0008d442) image3_infobar_fav_pane_g

0xebef,	// (0x0008c1f3) fs_bigclock_status_battery_pane

0xebf8,	// (0x0008c1fc) fs_bigclock_status_signal_pane

0xec01,	// (0x0008c205) fs_bigclock_status_title_pane

0xec0a,	// (0x0008c20e) fs_bigclock_status_signal_pane_g1

0xec13,	// (0x0008c217) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe43,	// (0x0008d447) fs_bigclock_status_signal_pane_g

0xec1b,	// (0x0008c21f) fs_bigclock_status_battery_pane_g1

0xec24,	// (0x0008c228) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe48,	// (0x0008d44c) fs_bigclock_status_battery_pane_g

0xec2c,	// (0x0008c230) fs_bigclock_status_title_pane_t1

0xcc6e,	// (0x0008a272) main_fs_bigclock_clock_pane_g1

0xec3a,	// (0x0008c23e) main_fs_bigclock_clock_pane_g2

0xec45,	// (0x0008c249) main_fs_bigclock_clock_pane_g3

0xec45,	// (0x0008c249) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4d,	// (0x0008d451) main_fs_bigclock_clock_pane_g

0xec51,	// (0x0008c255) main_fs_bigclock_clock_pane_t1

0x9850,	// (0x00086e54) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe56,	// (0x0008d45a) main_fs_bigclock_clock_pane_t

0x985f,	// (0x00086e63) list_single_fs_bigclock_indicator_pane_ParamLimits

0x985f,	// (0x00086e63) list_single_fs_bigclock_indicator_pane

0x9870,	// (0x00086e74) list_single_fs_bigclock_pane_ParamLimits

0x9870,	// (0x00086e74) list_single_fs_bigclock_pane

0xec68,	// (0x0008c26c) main_fs_bigclock_indicator_pane_t1

0xec77,	// (0x0008c27b) list_single_fs_bigclock_pane_g1

0xec7f,	// (0x0008c283) list_single_fs_bigclock_pane_t1

0xcc6e,	// (0x0008a272) main_fs_bigclock_swipe_pane_g1

0xecc2,	// (0x0008c2c6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe67,	// (0x0008d46b) main_fs_bigclock_swipe_pane_g

0xecca,	// (0x0008c2ce) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecca,	// (0x0008c2ce) main_fs_bigclock_swipe_pane_t1

0x440a,	// (0x00081a0e) call_type_pane_ParamLimits

0xa162,	// (0x00087766) main_btmg_pane

0x967f,	// (0x00086c83) list_single_cale_mrui_row_pane_g2_ParamLimits

0x967f,	// (0x00086c83) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdda,	// (0x0008d3de) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdda,	// (0x0008d3de) list_single_cale_mrui_row_pane_g

0x1c47,	// (0x0007f24b) list_recal_vselct_arw_lo_pane

0xeb08,	// (0x0008c10c) list_recal_vselct_arw_up_pane

0x1c4f,	// (0x0007f253) list_recal_vselct_pane

0x98c6,	// (0x00086eca) btmg_button_pane

0x98d2,	// (0x00086ed6) main_btmg_pane_g1

0xa162,	// (0x00087766) bg_button_pane_cp044

0xece7,	// (0x0008c2eb) btmg_button_pane_t1

0xc809,	// (0x00089e0d) aid_listscroll_gen

0xa8a8,	// (0x00087eac) main_cntbar_detail_pane

0xe832,	// (0x0008be36) list_cmail_folder_pane

0xe842,	// (0x0008be46) sp_fs_scroll_pane_cp03_ParamLimits

0x1cdf,	// (0x0007f2e3) list_single_fs_dyc_pane_cp01_ParamLimits

0x1cdf,	// (0x0007f2e3) list_single_fs_dyc_pane_cp01

0xecf5,	// (0x0008c2f9) aid_size_cmail_indent

0x1cfc,	// (0x0007f300) list_single_dyc_row_pane_cp01

0x98fa,	// (0x00086efe) cntbar_detail_list_pane_ParamLimits

0x98fa,	// (0x00086efe) cntbar_detail_list_pane

0x993a,	// (0x00086f3e) main_cntbar_detail_cont_pane_ParamLimits

0x993a,	// (0x00086f3e) main_cntbar_detail_cont_pane

0x43fe,	// (0x00081a02) scroll_pane_cp032_ParamLimits

0x43fe,	// (0x00081a02) scroll_pane_cp032

0x9946,	// (0x00086f4a) cntbar_detail_list_event_pane_ParamLimits

0x9946,	// (0x00086f4a) cntbar_detail_list_event_pane

0x9908,	// (0x00086f0c) cntbar_detail_list_shct_pane

0xad75,	// (0x00088379) aid_list_gen

0xecfe,	// (0x0008c302) aid_scroll

0xed07,	// (0x0008c30b) aid_size_touch_scroll_bar

0x84b3,	// (0x00085ab7) aid_list_double

0xed10,	// (0x0008c314) aid_list_single

0x84a1,	// (0x00085aa5) aid_list_single_lg

0x1d05,	// (0x0007f309) aid_list_z_g_a_sm

0x9956,	// (0x00086f5a) aid_list_z_g_d

0x1d0d,	// (0x0007f311) aid_txt_z_prm

0x1d1b,	// (0x0007f31f) aid_txt_z_prm_cp01

0x1d29,	// (0x0007f32d) aid_txt_z_sec

0x995e,	// (0x00086f62) main_cntbar_detail_cont_pane_g1_ParamLimits

0x995e,	// (0x00086f62) main_cntbar_detail_cont_pane_g1

0x996b,	// (0x00086f6f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x996b,	// (0x00086f6f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6c,	// (0x0008d470) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6c,	// (0x0008d470) main_cntbar_detail_cont_pane_g

0xed19,	// (0x0008c31d) main_cntbar_detail_cont_pane_t1

0xed27,	// (0x0008c32b) main_cntbar_detail_cont_pane_t2

0xed35,	// (0x0008c339) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe71,	// (0x0008d475) main_cntbar_detail_cont_pane_t

0x9977,	// (0x00086f7b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9977,	// (0x00086f7b) cell_cntbar_detail_list_shct_pane

0xed43,	// (0x0008c347) cntbar_detail_list_shct_pane_g1

0xed4c,	// (0x0008c350) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe78,	// (0x0008d47c) cntbar_detail_list_shct_pane_g

0x998b,	// (0x00086f8f) cntbar_detail_list_event_pane_g1_ParamLimits

0x998b,	// (0x00086f8f) cntbar_detail_list_event_pane_g1

0x9997,	// (0x00086f9b) cntbar_detail_list_event_pane_g2_ParamLimits

0x9997,	// (0x00086f9b) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7d,	// (0x0008d481) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7d,	// (0x0008d481) cntbar_detail_list_event_pane_g

0x9a05,	// (0x00087009) cntbar_detail_list_event_pane_t1_ParamLimits

0x9a05,	// (0x00087009) cntbar_detail_list_event_pane_t1

0x9a1a,	// (0x0008701e) cntbar_detail_list_event_pane_t2_ParamLimits

0x9a1a,	// (0x0008701e) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8a,	// (0x0008d48e) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8a,	// (0x0008d48e) cntbar_detail_list_event_pane_t

0xcc6e,	// (0x0008a272) cell_cntbar_detail_list_shct_pane_g1

0x47dd,	// (0x00081de1) navi_pane_mv_g3

0xa8a8,	// (0x00087eac) main_cntbar_detail_pane_ParamLimits

0xa162,	// (0x00087766) main_notif_wgt_pane

0x6e2c,	// (0x00084430) aid_tch_main_mp4_pane_g4

0x706b,	// (0x0008466f) popup_slider_window_cp02

0x1c3d,	// (0x0007f241) list_recal_day_event_pane

0x98da,	// (0x00086ede) cntbar_detail_btn_pane_ParamLimits

0x98da,	// (0x00086ede) cntbar_detail_btn_pane

0x98ea,	// (0x00086eee) cntbar_detail_btn_pane_cp01_ParamLimits

0x98ea,	// (0x00086eee) cntbar_detail_btn_pane_cp01

0x9908,	// (0x00086f0c) cntbar_detail_list_shct_pane_ParamLimits

0x9914,	// (0x00086f18) cntbar_detail_pane_g1_ParamLimits

0x9914,	// (0x00086f18) cntbar_detail_pane_g1

0x9924,	// (0x00086f28) cntbar_detail_pane_t1_ParamLimits

0x9924,	// (0x00086f28) cntbar_detail_pane_t1

0x99a3,	// (0x00086fa7) cntbar_detail_list_event_pane_g3_ParamLimits

0x99a3,	// (0x00086fa7) cntbar_detail_list_event_pane_g3

0x99bb,	// (0x00086fbf) cntbar_detail_list_event_pane_g4_ParamLimits

0x99bb,	// (0x00086fbf) cntbar_detail_list_event_pane_g4

0x99d3,	// (0x00086fd7) cntbar_detail_list_event_pane_g5_ParamLimits

0x99d3,	// (0x00086fd7) cntbar_detail_list_event_pane_g5

0x99eb,	// (0x00086fef) cntbar_detail_list_event_pane_g6_ParamLimits

0x99eb,	// (0x00086fef) cntbar_detail_list_event_pane_g6

0x9a2f,	// (0x00087033) cntbar_detail_list_event_pane_t3_ParamLimits

0x9a2f,	// (0x00087033) cntbar_detail_list_event_pane_t3

0x9a41,	// (0x00087045) popup_notif_wgt_window_ParamLimits

0x9a41,	// (0x00087045) popup_notif_wgt_window

0x9a51,	// (0x00087055) popup_submenu_window_cp01_ParamLimits

0x9a51,	// (0x00087055) popup_submenu_window_cp01

0xaaca,	// (0x000880ce) bg_popup_window_pane_cp10

0xed55,	// (0x0008c359) listscroll_notif_wgt_pane

0xed67,	// (0x0008c36b) list_notif_wgt_window

0xed70,	// (0x0008c374) scroll_pane_cp033

0x9a61,	// (0x00087065) list_notif_wgt_row_pane_ParamLimits

0x9a61,	// (0x00087065) list_notif_wgt_row_pane

0xed79,	// (0x0008c37d) aid_size_list_notif_wgt_del

0xed86,	// (0x0008c38a) list_notif_wgt_row_pane_g1

0xed92,	// (0x0008c396) list_notif_wgt_row_pane_g2

0xeda6,	// (0x0008c3aa) list_notif_wgt_row_pane_g3

0x0002,

0xfe91,	// (0x0008d495) list_notif_wgt_row_pane_g

0xedb3,	// (0x0008c3b7) list_notif_wgt_row_pane_t1

0xedc9,	// (0x0008c3cd) list_notif_wgt_row_pane_t2

0xeddb,	// (0x0008c3df) list_notif_wgt_row_pane_t3

0x0002,

0xfe98,	// (0x0008d49c) list_notif_wgt_row_pane_t

0xd8b8,	// (0x0008aebc) list_recal_day_event_pane_g1

0xeded,	// (0x0008c3f1) list_recal_day_event_pane_t1

0xa162,	// (0x00087766) bg_button_pane_cp045

0xedfc,	// (0x0008c400) cntbar_detail_btn_pane_t1

0xc81d,	// (0x00089e21) main_callh_pane_ParamLimits

0xc81d,	// (0x00089e21) main_callh_pane

0xa162,	// (0x00087766) main_coverflow0_pane

0xa162,	// (0x00087766) main_wgtman_pane

0x907d,	// (0x00086681) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x907d,	// (0x00086681) main_fs_bigclock_unlock_btn_pane

0x93fe,	// (0x00086a02) bg_button_pane_cp16

0x940e,	// (0x00086a12) cell_tport_appsw_pane_g3

0x9a72,	// (0x00087076) cf0_flow_pane_ParamLimits

0x9a72,	// (0x00087076) cf0_flow_pane

0xee0a,	// (0x0008c40e) listscroll_cf0_pane

0xee15,	// (0x0008c419) main_cf0_pane_g1

0x9a81,	// (0x00087085) main_cf0_pane_t1_ParamLimits

0x9a81,	// (0x00087085) main_cf0_pane_t1

0x9a95,	// (0x00087099) main_cf0_pane_t2_ParamLimits

0x9a95,	// (0x00087099) main_cf0_pane_t2

0x0001,

0xfea4,	// (0x0008d4a8) main_cf0_pane_t_ParamLimits

0xfea4,	// (0x0008d4a8) main_cf0_pane_t

0xee27,	// (0x0008c42b) scroll_pane_cp11

0x9aa9,	// (0x000870ad) cf0_flow_pane_g1

0x9ab1,	// (0x000870b5) cf0_flow_pane_g2

0x0001,

0xfea9,	// (0x0008d4ad) cf0_flow_pane_g

0x9ab9,	// (0x000870bd) cf0_flow_pane_t1

0xa162,	// (0x00087766) main_call6_pane

0xa162,	// (0x00087766) main_calllock_pane

0x9ac7,	// (0x000870cb) call6_btn_grp_pane_ParamLimits

0x9ac7,	// (0x000870cb) call6_btn_grp_pane

0x9ad4,	// (0x000870d8) call6_pane_g1_ParamLimits

0x9ad4,	// (0x000870d8) call6_pane_g1

0x9ae4,	// (0x000870e8) popup_call6_1st_window_ParamLimits

0x9ae4,	// (0x000870e8) popup_call6_1st_window

0x9af2,	// (0x000870f6) popup_call6_2nd_window_ParamLimits

0x9af2,	// (0x000870f6) popup_call6_2nd_window

0x9b00,	// (0x00087104) cell_call6_btn_pane_ParamLimits

0x9b00,	// (0x00087104) cell_call6_btn_pane

0xaaca,	// (0x000880ce) bg_popup_call2_in_pane_cp03

0xee32,	// (0x0008c436) popup_call6_1st_window_g1

0xee3a,	// (0x0008c43e) popup_call6_1st_window_g2

0xee42,	// (0x0008c446) popup_call6_1st_window_g3

0x0002,

0xfeae,	// (0x0008d4b2) popup_call6_1st_window_g

0xee4a,	// (0x0008c44e) popup_call6_1st_window_t1

0xee59,	// (0x0008c45d) popup_call6_1st_window_t2

0xee69,	// (0x0008c46d) popup_call6_1st_window_t3

0x0002,

0xfeb5,	// (0x0008d4b9) popup_call6_1st_window_t

0xaaca,	// (0x000880ce) bg_popup_call2_in_pane_cp04

0xee32,	// (0x0008c436) popup_call6_2nd_window_g1

0xee3a,	// (0x0008c43e) popup_call6_2nd_window_g2

0xee42,	// (0x0008c446) popup_call6_2nd_window_g3

0x0002,

0xfeae,	// (0x0008d4b2) popup_call6_2nd_window_g

0xee4a,	// (0x0008c44e) popup_call6_2nd_window_t1

0xa162,	// (0x00087766) bg_button_pane_cp15

0xee79,	// (0x0008c47d) cell_call6_btn_pane_g1

0xee82,	// (0x0008c486) cell_call6_btn_pane_t1

0x9b0f,	// (0x00087113) listscroll_wgtman_pane_ParamLimits

0x9b0f,	// (0x00087113) listscroll_wgtman_pane

0x9b2b,	// (0x0008712f) wgtman_btn_pane_ParamLimits

0x9b2b,	// (0x0008712f) wgtman_btn_pane

0xb2c6,	// (0x000888ca) aid_scroll_copy1

0xee91,	// (0x0008c495) list_wgtman_pane

0x9b60,	// (0x00087164) wgtman_btn_pane_g1_ParamLimits

0x9b60,	// (0x00087164) wgtman_btn_pane_g1

0x9b88,	// (0x0008718c) wgtman_btn_pane_t1_ParamLimits

0x9b88,	// (0x0008718c) wgtman_btn_pane_t1

0xee9b,	// (0x0008c49f) wgtman_btn_pane_t2_ParamLimits

0xee9b,	// (0x0008c49f) wgtman_btn_pane_t2

0x0001,

0xfebc,	// (0x0008d4c0) wgtman_btn_pane_t_ParamLimits

0xfebc,	// (0x0008d4c0) wgtman_btn_pane_t

0x9bbf,	// (0x000871c3) listrow_wgtman_pane_ParamLimits

0x9bbf,	// (0x000871c3) listrow_wgtman_pane

0x9bd3,	// (0x000871d7) listrow_wgtman_pane_g1

0x9be0,	// (0x000871e4) listrow_wgtman_pane_g2

0x0001,

0xfec1,	// (0x0008d4c5) listrow_wgtman_pane_g

0x1d37,	// (0x0007f33b) listrow_wgtman_pane_t1

0x1d4f,	// (0x0007f353) listrow_wgtman_pane_t2

0x0001,

0xfec6,	// (0x0008d4ca) listrow_wgtman_pane_t

0x1d75,	// (0x0007f379) wait_bar_pane_cp09

0xeeb2,	// (0x0008c4b6) main_calllock_btn_pane

0xeebc,	// (0x0008c4c0) main_calllock_pane_g1

0xa162,	// (0x00087766) bg_button_pane_cp17

0xeec8,	// (0x0008c4cc) main_calllock_btn_pane_g1

0xeed1,	// (0x0008c4d5) main_calllock_btn_pane_t1

0xa162,	// (0x00087766) main_dialer3_pane

0xa162,	// (0x00087766) main_fmrd2_pane

0xcc6e,	// (0x0008a272) main_fs_bigclock_unlock_btn_pane_g1

0xeee8,	// (0x0008c4ec) main_fs_bigclock_unlock_btn_pane_t1

0x9bfe,	// (0x00087202) area_fmrd2_info_pane_ParamLimits

0x9bfe,	// (0x00087202) area_fmrd2_info_pane

0x9c0a,	// (0x0008720e) area_fmrd2_visual_pane_ParamLimits

0x9c0a,	// (0x0008720e) area_fmrd2_visual_pane

0x9c18,	// (0x0008721c) fmrd2_indi_pane_ParamLimits

0x9c18,	// (0x0008721c) fmrd2_indi_pane

0x9c25,	// (0x00087229) area_fmrd2_visual_pane_g1

0x9c2d,	// (0x00087231) area_fmrd2_visual_pane_t1

0x9c3d,	// (0x00087241) area_fmrd2_visual_pane_t2

0x9c4d,	// (0x00087251) area_fmrd2_visual_pane_t3

0x0002,

0xfed0,	// (0x0008d4d4) area_fmrd2_visual_pane_t

0x9c5d,	// (0x00087261) area_fmrd2_info_pane_g1

0x9c65,	// (0x00087269) area_fmrd2_info_pane_t1

0x9c75,	// (0x00087279) area_fmrd2_info_pane_t2

0x9c85,	// (0x00087289) area_fmrd2_info_pane_t3

0x9c95,	// (0x00087299) area_fmrd2_info_pane_t4

0x0003,

0xfed7,	// (0x0008d4db) area_fmrd2_info_pane_t

0x9ca5,	// (0x000872a9) fmrd2_indi_pane_t1

0x9cb5,	// (0x000872b9) fmrd2_indi_pane_t2

0x9cc5,	// (0x000872c9) fmrd2_indi_pane_t3

0x0002,

0xfee0,	// (0x0008d4e4) fmrd2_indi_pane_t

0xe462,	// (0x0008ba66) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe462,	// (0x0008ba66) list_single_fs_bigclock_indicator_pane_g5

0xe512,	// (0x0008bb16) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe512,	// (0x0008bb16) list_single_fs_bigclock_indicator_pane_t5

0x9598,	// (0x00086b9c) aid_cell_bcale_month_pane_ParamLimits

0x9598,	// (0x00086b9c) aid_cell_bcale_month_pane

0x95b6,	// (0x00086bba) bcale_month_pane_ParamLimits

0x95b6,	// (0x00086bba) bcale_month_pane

0x95d2,	// (0x00086bd6) bcale_preview_pane_ParamLimits

0x95d2,	// (0x00086bd6) bcale_preview_pane

0xec7f,	// (0x0008c283) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9e,	// (0x0008c2a2) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9e,	// (0x0008c2a2) list_single_fs_bigclock_pane_t2

0x0001,

0xfe62,	// (0x0008d466) list_single_fs_bigclock_pane_t_ParamLimits

0xfe62,	// (0x0008d466) list_single_fs_bigclock_pane_t

0xeee0,	// (0x0008c4e4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfecb,	// (0x0008d4cf) main_fs_bigclock_unlock_btn_pane_g

0x9cd5,	// (0x000872d9) aid_dia3_key_size_ParamLimits

0x9cd5,	// (0x000872d9) aid_dia3_key_size

0x9ce1,	// (0x000872e5) aid_dia3_listrow_size_ParamLimits

0x9ce1,	// (0x000872e5) aid_dia3_listrow_size

0x9cf1,	// (0x000872f5) dia3_keypad_fun_pane_ParamLimits

0x9cf1,	// (0x000872f5) dia3_keypad_fun_pane

0x9d01,	// (0x00087305) dia3_keypad_num_pane_ParamLimits

0x9d01,	// (0x00087305) dia3_keypad_num_pane

0x9d11,	// (0x00087315) dia3_listscroll_pane_ParamLimits

0x9d11,	// (0x00087315) dia3_listscroll_pane

0x9d1f,	// (0x00087323) dia3_numentry_pane_ParamLimits

0x9d1f,	// (0x00087323) dia3_numentry_pane

0xeef6,	// (0x0008c4fa) dia3_list_pane

0xef01,	// (0x0008c505) scroll_pane_cp12

0xa162,	// (0x00087766) bg_dia3_numentry_pane

0x9d2d,	// (0x00087331) dia3_numentry_pane_t1

0x9d3c,	// (0x00087340) cell_dia3_key_num_pane

0x9d44,	// (0x00087348) cell_dia3_key0_fun_pane_ParamLimits

0x9d44,	// (0x00087348) cell_dia3_key0_fun_pane

0x9d51,	// (0x00087355) cell_dia3_key1_fun_pane_ParamLimits

0x9d51,	// (0x00087355) cell_dia3_key1_fun_pane

0x9d5e,	// (0x00087362) dia3_listrow_pane

0xe160,	// (0x0008b764) bg_dia3_numentry_pane_g1

0xa162,	// (0x00087766) bg_button_pane_cp21

0xef0c,	// (0x0008c510) cell_dia3_key_num_pane_t1

0xef1a,	// (0x0008c51e) cell_dia3_key_num_pane_t2

0xef29,	// (0x0008c52d) cell_dia3_key_num_pane_t3

0xef38,	// (0x0008c53c) cell_dia3_key_num_pane_t4

0x0003,

0xfee7,	// (0x0008d4eb) cell_dia3_key_num_pane_t

0xa162,	// (0x00087766) bg_button_pane_cp19

0x9d6b,	// (0x0008736f) cell_dia3_key0_fun_pane_g1

0xa162,	// (0x00087766) bg_button_pane_cp20

0x9d73,	// (0x00087377) cell_dia3_key1_fun_pane_g1

0x9d7b,	// (0x0008737f) area_left_week_number_pane

0x9d8e,	// (0x00087392) area_top_day_name_pane

0x9d9c,	// (0x000873a0) frame_month_view_pane

0xef47,	// (0x0008c54b) grid_month_view_pane

0x9db1,	// (0x000873b5) cell_top_day_name_pane_ParamLimits

0x9db1,	// (0x000873b5) cell_top_day_name_pane

0x9dcd,	// (0x000873d1) cell_area_left_week_number_pane_ParamLimits

0x9dcd,	// (0x000873d1) cell_area_left_week_number_pane

0x9dee,	// (0x000873f2) cell_month_view_pane_ParamLimits

0x9dee,	// (0x000873f2) cell_month_view_pane

0xef55,	// (0x0008c559) frm_month_g1

0x9e1a,	// (0x0008741e) frm_month_g2

0x9e2b,	// (0x0008742f) frm_month_g3

0x9e3c,	// (0x00087440) frm_month_g4

0x9e4d,	// (0x00087451) frm_month_g5

0x9e5e,	// (0x00087462) frm_month_g6

0x9e71,	// (0x00087475) frm_month_g7

0xef62,	// (0x0008c566) frm_month_g8

0x9e84,	// (0x00087488) frm_month_g9

0x9e91,	// (0x00087495) frm_month_g10

0x9e9e,	// (0x000874a2) frm_month_g11

0x9eab,	// (0x000874af) frm_month_g12

0x9eb8,	// (0x000874bc) frm_month_g13

0x9ec7,	// (0x000874cb) frm_month_g14

0x9ed6,	// (0x000874da) frm_month_g15

0x9ee5,	// (0x000874e9) frm_month_g16

0x000f,

0xfef0,	// (0x0008d4f4) frm_month_g

0xef6f,	// (0x0008c573) cell_top_day_name_pane_t1

0x9ef4,	// (0x000874f8) cell_area_left_week_number_pane_g1

0x9f03,	// (0x00087507) cell_area_left_week_number_pane_t1

0xce9e,	// (0x0008a4a2) cell_month_view_pane_g1

0x9f19,	// (0x0008751d) cell_month_view_pane_t1

0xa162,	// (0x00087766) main_fps_pane

0xe722,	// (0x0008bd26) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe722,	// (0x0008bd26) cmail_ddmenu_btn02_pane_cp1

0xe73e,	// (0x0008bd42) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe73e,	// (0x0008bd42) cmail_ddmenu_btn02_pane_cp2

0x97cf,	// (0x00086dd3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x97cf,	// (0x00086dd3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe15,	// (0x0008d419) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe15,	// (0x0008d419) cmail_ddmenu_btn02_pane_g

0x97ed,	// (0x00086df1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x97ed,	// (0x00086df1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1a,	// (0x0008d41e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1a,	// (0x0008d41e) cmail_ddmenu_btn02_pane_t

0x9f2f,	// (0x00087533) fps_text_pane_ParamLimits

0x9f2f,	// (0x00087533) fps_text_pane

0x9f3c,	// (0x00087540) main_fps_pane_g1_ParamLimits

0x9f3c,	// (0x00087540) main_fps_pane_g1

0x9f48,	// (0x0008754c) wait_bar_pane_cp010_ParamLimits

0x9f48,	// (0x0008754c) wait_bar_pane_cp010

0x9f54,	// (0x00087558) fps_text_pane_t1_ParamLimits

0x9f54,	// (0x00087558) fps_text_pane_t1

0x7491,	// (0x00084a95) cam4_image_uncrop_pane_g1

0x749a,	// (0x00084a9e) cam4_image_uncrop_pane_g2

0x74a3,	// (0x00084aa7) cam4_image_uncrop_pane_g3

0x74ac,	// (0x00084ab0) cam4_image_uncrop_pane_g4

0x0003,

0xf8dd,	// (0x0008cee1) cam4_image_uncrop_pane_g

0x9d5e,	// (0x00087362) dia3_listrow_pane_ParamLimits

0xa162,	// (0x00087766) main_phob2_pane

0x93e0,	// (0x000869e4) cell_tport_appsw_pane_cp02_ParamLimits

0x93e0,	// (0x000869e4) cell_tport_appsw_pane_cp02

0x93ef,	// (0x000869f3) cell_tport_appsw_pane_cp03_ParamLimits

0x93ef,	// (0x000869f3) cell_tport_appsw_pane_cp03

0xa162,	// (0x00087766) phob2_contact_card_pane

0xa162,	// (0x00087766) phob2_listscroll_pane

0xef82,	// (0x0008c586) phob2_list_pane

0xef8a,	// (0x0008c58e) scroll_pane_cp034

0x9f6d,	// (0x00087571) phob2_cc_data_pane_ParamLimits

0x9f6d,	// (0x00087571) phob2_cc_data_pane

0x9f89,	// (0x0008758d) phob2_cc_listscroll_pane_ParamLimits

0x9f89,	// (0x0008758d) phob2_cc_listscroll_pane

0x9fa5,	// (0x000875a9) list_double_large_graphic_phob2_pane_ParamLimits

0x9fa5,	// (0x000875a9) list_double_large_graphic_phob2_pane

0x9fbd,	// (0x000875c1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9fbd,	// (0x000875c1) list_double_large_graphic_phob2_pane_g1

0x1d87,	// (0x0007f38b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1d87,	// (0x0007f38b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff11,	// (0x0008d515) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff11,	// (0x0008d515) list_double_large_graphic_phob2_pane_g

0x1d93,	// (0x0007f397) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1d93,	// (0x0007f397) list_double_large_graphic_phob2_pane_t1

0x1da8,	// (0x0007f3ac) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1da8,	// (0x0007f3ac) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff16,	// (0x0008d51a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff16,	// (0x0008d51a) list_double_large_graphic_phob2_pane_t

0xa162,	// (0x00087766) list_highlight_pane_cp024

0x9fd3,	// (0x000875d7) phob2_cc_button_pane

0x9fdb,	// (0x000875df) phob2_cc_data_pane_g1_ParamLimits

0x9fdb,	// (0x000875df) phob2_cc_data_pane_g1

0x9fe7,	// (0x000875eb) phob2_cc_data_pane_g2_ParamLimits

0x9fe7,	// (0x000875eb) phob2_cc_data_pane_g2

0x0001,

0xff1b,	// (0x0008d51f) phob2_cc_data_pane_g_ParamLimits

0xff1b,	// (0x0008d51f) phob2_cc_data_pane_g

0x9ff3,	// (0x000875f7) phob2_cc_data_pane_t1_ParamLimits

0x9ff3,	// (0x000875f7) phob2_cc_data_pane_t1

0xa005,	// (0x00087609) phob2_cc_data_pane_t2_ParamLimits

0xa005,	// (0x00087609) phob2_cc_data_pane_t2

0xa017,	// (0x0008761b) phob2_cc_data_pane_t3_ParamLimits

0xa017,	// (0x0008761b) phob2_cc_data_pane_t3

0x0002,

0xff20,	// (0x0008d524) phob2_cc_data_pane_t_ParamLimits

0xff20,	// (0x0008d524) phob2_cc_data_pane_t

0xef92,	// (0x0008c596) phob2_cc_list_pane_ParamLimits

0xef92,	// (0x0008c596) phob2_cc_list_pane

0xdb6f,	// (0x0008b173) scroll_pane_cp035_ParamLimits

0xdb6f,	// (0x0008b173) scroll_pane_cp035

0xa8a8,	// (0x00087eac) bg_button_pane_cp033

0xef9e,	// (0x0008c5a2) phob2_cc_button_pane_g1

0xefaa,	// (0x0008c5ae) phob2_cc_button_pane_t1

0xefbf,	// (0x0008c5c3) phob2_cc_button_pane_t2

0x0001,

0xff27,	// (0x0008d52b) phob2_cc_button_pane_t

0xa029,	// (0x0008762d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa029,	// (0x0008762d) list_double_large_graphic_phob2_cc_pane

0xa045,	// (0x00087649) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa045,	// (0x00087649) list_double_large_graphic_phob2_cc_pane_g1

0x1dba,	// (0x0007f3be) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1dba,	// (0x0007f3be) list_double_large_graphic_phob2_cc_pane_g2

0x1dc9,	// (0x0007f3cd) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1dc9,	// (0x0007f3cd) list_double_large_graphic_phob2_cc_pane_g3

0x1dd8,	// (0x0007f3dc) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1dd8,	// (0x0007f3dc) list_double_large_graphic_phob2_cc_pane_g4

0x1de9,	// (0x0007f3ed) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1de9,	// (0x0007f3ed) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff2c,	// (0x0008d530) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff2c,	// (0x0008d530) list_double_large_graphic_phob2_cc_pane_g

0x1df8,	// (0x0007f3fc) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1df8,	// (0x0007f3fc) list_double_large_graphic_phob2_cc_pane_t1

0x1e21,	// (0x0007f425) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1e21,	// (0x0007f425) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff37,	// (0x0008d53b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff37,	// (0x0008d53b) list_double_large_graphic_phob2_cc_pane_t

0xefd1,	// (0x0008c5d5) list_highlight_pane_cp025_ParamLimits

0xefd1,	// (0x0008c5d5) list_highlight_pane_cp025

0xa8a8,	// (0x00087eac) bg_button_pane_cp033_ParamLimits

0xef9e,	// (0x0008c5a2) phob2_cc_button_pane_g1_ParamLimits

0xefaa,	// (0x0008c5ae) phob2_cc_button_pane_t1_ParamLimits

0xefbf,	// (0x0008c5c3) phob2_cc_button_pane_t2_ParamLimits

0xff27,	// (0x0008d52b) phob2_cc_button_pane_t_ParamLimits

0x20d4,	// (0x0007f6d8) popup_wgtman_window

0xd79a,	// (0x0008ad9e) scroll_pane_cp038

0x9b48,	// (0x0008714c) wgtman_btn_pane_cp_01_ParamLimits

0x9b48,	// (0x0008714c) wgtman_btn_pane_cp_01

0xefdf,	// (0x0008c5e3) wgtman_content_pane

0xefe8,	// (0x0008c5ec) wgtman_heading_pane

0xa162,	// (0x00087766) bg_heading_pane_cp02

0xeff1,	// (0x0008c5f5) wgtman_heading_pane_g1

0xeff9,	// (0x0008c5fd) wgtman_heading_pane_t1

0xf007,	// (0x0008c60b) scroll_pane_cp036

0xf00f,	// (0x0008c613) wgtman_list_pane

0xf017,	// (0x0008c61b) wgtman_list_pane_t1_ParamLimits

0xf017,	// (0x0008c61b) wgtman_list_pane_t1

0x73ee,	// (0x000849f2) cam4_grid_pane

0x0fd3,	// (0x0007e5d7) bg_button_pane_cp015_ParamLimits

0x80c4,	// (0x000856c8) bg_button_pane_cp016_ParamLimits

0x80d7,	// (0x000856db) bg_button_pane_cp017_ParamLimits

0x1017,	// (0x0007e61b) popup_vitu2_query_window_g3_ParamLimits

0x1017,	// (0x0007e61b) popup_vitu2_query_window_g3

0x1090,	// (0x0007e694) popup_vitu2_query_window_t6_ParamLimits

0x1090,	// (0x0007e694) popup_vitu2_query_window_t6

0x10bb,	// (0x0007e6bf) popup_vitu2_query_window_t7_ParamLimits

0x10bb,	// (0x0007e6bf) popup_vitu2_query_window_t7

0xe609,	// (0x0008bc0d) cam4_grid_pane_g1

0xe612,	// (0x0008bc16) cam4_grid_pane_g2

0xf031,	// (0x0008c635) cam4_grid_pane_g3

0xf03a,	// (0x0008c63e) cam4_grid_pane_g4

0x0003,

0xff3c,	// (0x0008d540) cam4_grid_pane_g

0x3211,	// (0x00080815) aid_placing_vt_slider_lsc_ParamLimits

0x3544,	// (0x00080b48) vidtel_button_pane_ParamLimits

0x3544,	// (0x00080b48) vidtel_button_pane

0xf045,	// (0x0008c649) bg_button_pane_cp034

0xa056,	// (0x0008765a) vidtel_button_pane_g1

0xf04f,	// (0x0008c653) vidtel_button_pane_t1

0xd8a8,	// (0x0008aeac) aid_size_vtel_slider_touch

0xdb6f,	// (0x0008b173) scroll_pane_cp039

0xe19e,	// (0x0008b7a2) ncim_query_button_pane_cp01_ParamLimits

0xe1bd,	// (0x0008b7c1) ncimui_query_pane_g1_ParamLimits

0xa8a8,	// (0x00087eac) input_focus_pane_cp012_ParamLimits

0xe1e2,	// (0x0008b7e6) ncim_query_entry_pane_t1_ParamLimits

0xdb6f,	// (0x0008b173) scroll_pane_cp039_ParamLimits

0x474f,	// (0x00081d53) navi_pane_bcale_mc_g1

0x4757,	// (0x00081d5b) navi_pane_bcale_mc_t1

0xe77b,	// (0x0008bd7f) main_sp_fs_email_pane_g1

0xe787,	// (0x0008bd8b) main_sp_fs_email_pane_g2

0x0001,

0xfccd,	// (0x0008d2d1) main_sp_fs_email_pane_g

0xea0c,	// (0x0008c010) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea0c,	// (0x0008c010) list_single_cale_mrui_row_pane_g3

0x1c9d,	// (0x0007f2a1) list_single_recal_day_pane_g5_event_pane

0x1cb3,	// (0x0007f2b7) list_single_recal_day_pane_g7

0xf05d,	// (0x0008c661) list_recal_day_event_pane_cp01

0xf066,	// (0x0008c66a) list_recal_vselct_arw_lo_pane_cp01

0xf06e,	// (0x0008c672) list_recal_vselct_arw_up_pane_cp01

0xf076,	// (0x0008c67a) list_recal_vselct_pane_cp01

0xd8b8,	// (0x0008aebc) list_recal_day_event_pane_cp01_g1

0x1e4a,	// (0x0007f44e) list_recal_day_event_pane_cp01_t1

0x1cbb,	// (0x0007f2bf) list_single_recal_day_pane_t1_ParamLimits

0x1ccd,	// (0x0007f2d1) list_single_recal_day_pane_t2_ParamLimits

0xfe2a,	// (0x0008d42e) list_single_recal_day_pane_t_ParamLimits

0xa821,	// (0x00087e25) bg_notes_pane_ParamLimits

0xa8f2,	// (0x00087ef6) list_notes_pane_ParamLimits

0x2423,	// (0x0007fa27) scroll_pane_cp06_ParamLimits

0xa914,	// (0x00087f18) main_notes_pane_ParamLimits

0xa162,	// (0x00087766) main_welc_pane

0xa05e,	// (0x00087662) main_welc_body_pane_ParamLimits

0xa05e,	// (0x00087662) main_welc_body_pane

0xa079,	// (0x0008767d) main_welc_opti_pane_ParamLimits

0xa079,	// (0x0008767d) main_welc_opti_pane

0xa0ae,	// (0x000876b2) main_welc_pane_t1_ParamLimits

0xa0ae,	// (0x000876b2) main_welc_pane_t1

0xa0cc,	// (0x000876d0) main_welc_body_row_pane_ParamLimits

0xa0cc,	// (0x000876d0) main_welc_body_row_pane

0xa0e6,	// (0x000876ea) main_welc_opti_row_pane_ParamLimits

0xa0e6,	// (0x000876ea) main_welc_opti_row_pane

0xf080,	// (0x0008c684) main_welc_opti_row_pane_g1

0xf088,	// (0x0008c68c) main_welc_opti_row_pane_t1

0xf097,	// (0x0008c69b) main_welc_body_row_pane_t1

0xed5f,	// (0x0008c363) popup_notif_wgt_heading_pane

0xed79,	// (0x0008c37d) aid_size_list_notif_wgt_del_ParamLimits

0xed86,	// (0x0008c38a) list_notif_wgt_row_pane_g1_ParamLimits

0xed92,	// (0x0008c396) list_notif_wgt_row_pane_g2_ParamLimits

0xeda6,	// (0x0008c3aa) list_notif_wgt_row_pane_g3_ParamLimits

0xfe91,	// (0x0008d495) list_notif_wgt_row_pane_g_ParamLimits

0xedb3,	// (0x0008c3b7) list_notif_wgt_row_pane_t1_ParamLimits

0xedc9,	// (0x0008c3cd) list_notif_wgt_row_pane_t2_ParamLimits

0xeddb,	// (0x0008c3df) list_notif_wgt_row_pane_t3_ParamLimits

0xfe98,	// (0x0008d49c) list_notif_wgt_row_pane_t_ParamLimits

0x9bd3,	// (0x000871d7) listrow_wgtman_pane_g1_ParamLimits

0x9be0,	// (0x000871e4) listrow_wgtman_pane_g2_ParamLimits

0xfec1,	// (0x0008d4c5) listrow_wgtman_pane_g_ParamLimits

0x1d37,	// (0x0007f33b) listrow_wgtman_pane_t1_ParamLimits

0x1d4f,	// (0x0007f353) listrow_wgtman_pane_t2_ParamLimits

0xfec6,	// (0x0008d4ca) listrow_wgtman_pane_t_ParamLimits

0x1d75,	// (0x0007f379) wait_bar_pane_cp09_ParamLimits

0xa162,	// (0x00087766) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0008c6aa) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0008c6b2) popup_notif_wgt_heading_pane_t1

0xa162,	// (0x00087766) main_vids_pane

0xa162,	// (0x00087766) vids_listscroll_pane

0xa0f7,	// (0x000876fb) scroll_pane_cp040

0xa162,	// (0x00087766) vids_list_pane

0xa102,	// (0x00087706) vids_list_double_pane_ParamLimits

0xa102,	// (0x00087706) vids_list_double_pane

0xa115,	// (0x00087719) vids_list_double_pane_g1

0xa11e,	// (0x00087722) vids_list_double_pane_t1

0xa12e,	// (0x00087732) vids_list_double_pane_t2

0x0001,

0xff4a,	// (0x0008d54e) vids_list_double_pane_t

0xa8a8,	// (0x00087eac) main_ncimui_pane_ParamLimits

0x8c2d,	// (0x00086231) main_ncimui_pane_g1_ParamLimits

0x8c3b,	// (0x0008623f) main_ncimui_pane_g2_ParamLimits

0x8c3b,	// (0x0008623f) main_ncimui_pane_g2

0x0001,

0xfbd2,	// (0x0008d1d6) main_ncimui_pane_g_ParamLimits

0xfbd2,	// (0x0008d1d6) main_ncimui_pane_g

0xa094,	// (0x00087698) main_welc_pane_g1_ParamLimits

0xa094,	// (0x00087698) main_welc_pane_g1

0xa0a0,	// (0x000876a4) main_welc_pane_g2_ParamLimits

0xa0a0,	// (0x000876a4) main_welc_pane_g2

0x0001,

0xff45,	// (0x0008d549) main_welc_pane_g_ParamLimits

0xff45,	// (0x0008d549) main_welc_pane_g

0xa821,	// (0x00087e25) listscroll_mce_pane_ParamLimits

0x4819,	// (0x00081e1d) wait_bar_pane_cp10

0xc811,	// (0x00089e15) main_cale_day_pane_ParamLimits

0xc811,	// (0x00089e15) main_cale_week_pane_ParamLimits

0xa821,	// (0x00087e25) main_messa_pane_ParamLimits

0x67f6,	// (0x00083dfa) main_clock2_btn_pane_ParamLimits

0x67f6,	// (0x00083dfa) main_clock2_btn_pane

0xd026,	// (0x0008a62a) main_clock2_btn_pane_cp01_ParamLimits

0xd026,	// (0x0008a62a) main_clock2_btn_pane_cp01

0xe9dd,	// (0x0008bfe1) list_cale_mrui_pane_ParamLimits

0xee1f,	// (0x0008c423) main_cf0_pane_g2

0x0001,

0xfe9f,	// (0x0008d4a3) main_cf0_pane_g

0x9d7b,	// (0x0008737f) area_left_week_number_pane_ParamLimits

0x9d8e,	// (0x00087392) area_top_day_name_pane_ParamLimits

0x9d9c,	// (0x000873a0) frame_month_view_pane_ParamLimits

0xef47,	// (0x0008c54b) grid_month_view_pane_ParamLimits

0xef55,	// (0x0008c559) frm_month_g1_ParamLimits

0x9e1a,	// (0x0008741e) frm_month_g2_ParamLimits

0x9e2b,	// (0x0008742f) frm_month_g3_ParamLimits

0x9e3c,	// (0x00087440) frm_month_g4_ParamLimits

0x9e4d,	// (0x00087451) frm_month_g5_ParamLimits

0x9e5e,	// (0x00087462) frm_month_g6_ParamLimits

0x9e71,	// (0x00087475) frm_month_g7_ParamLimits

0xef62,	// (0x0008c566) frm_month_g8_ParamLimits

0x9e84,	// (0x00087488) frm_month_g9_ParamLimits

0x9e91,	// (0x00087495) frm_month_g10_ParamLimits

0x9e9e,	// (0x000874a2) frm_month_g11_ParamLimits

0x9eab,	// (0x000874af) frm_month_g12_ParamLimits

0x9eb8,	// (0x000874bc) frm_month_g13_ParamLimits

0x9ec7,	// (0x000874cb) frm_month_g14_ParamLimits

0x9ed6,	// (0x000874da) frm_month_g15_ParamLimits

0x9ee5,	// (0x000874e9) frm_month_g16_ParamLimits

0xfef0,	// (0x0008d4f4) frm_month_g_ParamLimits

0xef6f,	// (0x0008c573) cell_top_day_name_pane_t1_ParamLimits

0x9ef4,	// (0x000874f8) cell_area_left_week_number_pane_g1_ParamLimits

0x9f03,	// (0x00087507) cell_area_left_week_number_pane_t1_ParamLimits

0xce9e,	// (0x0008a4a2) cell_month_view_pane_g1_ParamLimits

0x9f19,	// (0x0008751d) cell_month_view_pane_t1_ParamLimits

0xa819,	// (0x00087e1d) main_clock2_btn_pane_g1

0xf0bc,	// (0x0008c6c0) main_clock2_btn_pane_t1

0xa8a8,	// (0x00087eac) listscroll_cmail_pane_ParamLimits

0xe77b,	// (0x0008bd7f) main_sp_fs_email_pane_g1_ParamLimits

0xe787,	// (0x0008bd8b) main_sp_fs_email_pane_g2_ParamLimits

0xfccd,	// (0x0008d2d1) main_sp_fs_email_pane_g_ParamLimits

0xeae9,	// (0x0008c0ed) list_recal_day_pane_ParamLimits

0xeafa,	// (0x0008c0fe) mian_recal_day_pane_t1

0x167a,	// (0x0007ec7e) list_single_dyc_row_text_pane_t4_ParamLimits

0x167a,	// (0x0007ec7e) list_single_dyc_row_text_pane_t4

0x16bf,	// (0x0007ecc3) list_single_dyc_row_text_pane_t5_ParamLimits

0x16bf,	// (0x0007ecc3) list_single_dyc_row_text_pane_t5

0x1735,	// (0x0007ed39) list_single_dyc_row_text_pane_t6_ParamLimits

0x1735,	// (0x0007ed39) list_single_dyc_row_text_pane_t6

0xaeba,	// (0x000884be) aid_mgn_list_cale_time_pane

0xa8a8,	// (0x00087eac) main_gallery2_pane_ParamLimits

0xd03a,	// (0x0008a63e) main_clock2_pane_cp01_t1

0xd04a,	// (0x0008a64e) main_clock2_pane_cp01_t3

0x0001,

0x0395,	// (0x0007d999) main_clock2_pane_cp01_t

0x291f,	// (0x0007ff23) cale_week_scroll_pane_g16_ParamLimits

0x291f,	// (0x0007ff23) cale_week_scroll_pane_g16

0xaaca,	// (0x000880ce) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
