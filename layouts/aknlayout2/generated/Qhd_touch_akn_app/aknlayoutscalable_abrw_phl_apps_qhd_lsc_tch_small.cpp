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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005b667 };

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
0x0c20,	// (0x0005c287) Screen

0x0c2c,	// (0x0005c293) application_window

0x0c9e,	// (0x0005c305) area_bottom_pane_ParamLimits

0x0c9e,	// (0x0005c305) area_bottom_pane

0x0cfb,	// (0x0005c362) area_top_pane_ParamLimits

0x0cfb,	// (0x0005c362) area_top_pane

0x0d58,	// (0x0005c3bf) call_video_uplink_pane_ParamLimits

0x0d58,	// (0x0005c3bf) call_video_uplink_pane

0x0d84,	// (0x0005c3eb) main_pane_ParamLimits

0x0d84,	// (0x0005c3eb) main_pane

0xc0c4,	// (0x0006772b) context_pane

0x3fbe,	// (0x0005f625) navi_pane

0x3fe6,	// (0x0005f64d) popup_cale_events_window_ParamLimits

0x3fe6,	// (0x0005f64d) popup_cale_events_window

0xc0d7,	// (0x0006773e) popup_mup_playback_window

0x3ffe,	// (0x0005f665) signal_pane

0x9fdf,	// (0x00065646) main_browser_pane

0xac35,	// (0x0006629c) main_burst_pane

0x3d10,	// (0x0005f377) main_calc_pane

0xac35,	// (0x0006629c) main_cale_day_pane

0x9fdf,	// (0x00065646) main_cale_month_pane

0xac35,	// (0x0006629c) main_cale_week_pane

0xac35,	// (0x0006629c) main_call_pane

0x9c85,	// (0x000652ec) main_call_poc_pane

0xac35,	// (0x0006629c) main_camera_pane

0xac35,	// (0x0006629c) main_chi_dic_pane

0xaaba,	// (0x00066121) main_clock_pane

0x9c85,	// (0x000652ec) main_fmradio_pane

0xac35,	// (0x0006629c) main_graph_messa_pane

0x9c85,	// (0x000652ec) main_help_pane

0x9fdf,	// (0x00065646) main_im_pane

0x9ee0,	// (0x00065547) main_image_pane_ParamLimits

0x9ee0,	// (0x00065547) main_image_pane

0x9c85,	// (0x000652ec) main_location2_pane

0xac35,	// (0x0006629c) main_location_pane

0x9c85,	// (0x000652ec) main_messa_pane

0x9c85,	// (0x000652ec) main_mp2_pane

0xac35,	// (0x0006629c) main_mp_pane

0x9c85,	// (0x000652ec) main_msg_pane

0x9c85,	// (0x000652ec) main_mup_eq_pane

0x9c85,	// (0x000652ec) main_mup_pane

0x9fdf,	// (0x00065646) main_notes_pane

0x9c85,	// (0x000652ec) main_pec_pane

0x9c85,	// (0x000652ec) main_phob_pane

0x9c85,	// (0x000652ec) main_pinb_pane

0x9c85,	// (0x000652ec) main_postcard_pane

0x9c85,	// (0x000652ec) main_qdial_pane

0xac35,	// (0x0006629c) main_skin_pane

0x9c85,	// (0x000652ec) main_smil2_pane

0xac35,	// (0x0006629c) main_smil_pane

0xac35,	// (0x0006629c) main_video_pane

0xac35,	// (0x0006629c) main_video_tele_pane

0x9ee0,	// (0x00065547) main_viewer_pane_ParamLimits

0x9ee0,	// (0x00065547) main_viewer_pane

0xac35,	// (0x0006629c) main_vorec_pane

0x3d64,	// (0x0005f3cb) popup_blid_sat_info_window_ParamLimits

0x3d64,	// (0x0005f3cb) popup_blid_sat_info_window

0x3dbc,	// (0x0005f423) popup_dyc_status_message_window_ParamLimits

0x3dbc,	// (0x0005f423) popup_dyc_status_message_window

0x3dd6,	// (0x0005f43d) popup_grid_large_graphic_window_ParamLimits

0x3dd6,	// (0x0005f43d) popup_grid_large_graphic_window

0x3e92,	// (0x0005f4f9) popup_loc_request_window_ParamLimits

0x3e92,	// (0x0005f4f9) popup_loc_request_window

0x3f96,	// (0x0005f5fd) popup_wml_address_window_ParamLimits

0x3f96,	// (0x0005f5fd) popup_wml_address_window

0x3b4a,	// (0x0005f1b1) call_muted_g1

0x37ff,	// (0x0005ee66) popup_call_audio_conf_window_ParamLimits

0x37ff,	// (0x0005ee66) popup_call_audio_conf_window

0x3b5e,	// (0x0005f1c5) popup_call_audio_first_window_ParamLimits

0x3b5e,	// (0x0005f1c5) popup_call_audio_first_window

0x3bd4,	// (0x0005f23b) popup_call_audio_in_window_ParamLimits

0x3bd4,	// (0x0005f23b) popup_call_audio_in_window

0x3c10,	// (0x0005f277) popup_call_audio_out_window_ParamLimits

0x3c10,	// (0x0005f277) popup_call_audio_out_window

0x3c4a,	// (0x0005f2b1) popup_call_audio_second_window_ParamLimits

0x3c4a,	// (0x0005f2b1) popup_call_audio_second_window

0x3ca0,	// (0x0005f307) popup_call_audio_wait_window_ParamLimits

0x3ca0,	// (0x0005f307) popup_call_audio_wait_window

0x3cd5,	// (0x0005f33c) popup_number_entry_window_ParamLimits

0x3cd5,	// (0x0005f33c) popup_number_entry_window

0x9872,	// (0x00064ed9) bg_popup_call_pane_cp05_ParamLimits

0x9872,	// (0x00064ed9) bg_popup_call_pane_cp05

0x9892,	// (0x00064ef9) popup_number_entry_window_t1

0x98a5,	// (0x00064f0c) popup_number_entry_window_t2

0x98b7,	// (0x00064f1e) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0006a74e) popup_number_entry_window_t

0x98c9,	// (0x00064f30) text_title_cp2

0x98dc,	// (0x00064f43) bg_popup_call_pane_cp_ParamLimits

0x98dc,	// (0x00064f43) bg_popup_call_pane_cp

0x98ea,	// (0x00064f51) call_thumbnail_pane

0x98f2,	// (0x00064f59) popup_call_audio_in_window_g1_ParamLimits

0x98f2,	// (0x00064f59) popup_call_audio_in_window_g1

0x98fe,	// (0x00064f65) popup_call_audio_in_window_g2_ParamLimits

0x98fe,	// (0x00064f65) popup_call_audio_in_window_g2

0x990a,	// (0x00064f71) popup_call_audio_in_window_g3_ParamLimits

0x990a,	// (0x00064f71) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0006a757) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0006a757) popup_call_audio_in_window_g

0x9916,	// (0x00064f7d) popup_call_audio_in_window_t1_ParamLimits

0x9916,	// (0x00064f7d) popup_call_audio_in_window_t1

0x9932,	// (0x00064f99) popup_call_audio_in_window_t2_ParamLimits

0x9932,	// (0x00064f99) popup_call_audio_in_window_t2

0x994e,	// (0x00064fb5) popup_call_audio_in_window_t3_ParamLimits

0x994e,	// (0x00064fb5) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0006a75e) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0006a75e) popup_call_audio_in_window_t

0x98dc,	// (0x00064f43) bg_popup_call_pane_cp01_ParamLimits

0x98dc,	// (0x00064f43) bg_popup_call_pane_cp01

0x98ea,	// (0x00064f51) call_thumbnail_pane_cp02

0x9961,	// (0x00064fc8) call_type_pane_cp022

0x9969,	// (0x00064fd0) popup_call_audio_out_window_g1_ParamLimits

0x9969,	// (0x00064fd0) popup_call_audio_out_window_g1

0x997b,	// (0x00064fe2) popup_call_audio_out_window_g2_ParamLimits

0x997b,	// (0x00064fe2) popup_call_audio_out_window_g2

0x9987,	// (0x00064fee) popup_call_audio_out_window_g3_ParamLimits

0x9987,	// (0x00064fee) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0006a765) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0006a765) popup_call_audio_out_window_g

0x9999,	// (0x00065000) popup_call_audio_out_window_t1_ParamLimits

0x9999,	// (0x00065000) popup_call_audio_out_window_t1

0x99b1,	// (0x00065018) popup_call_audio_out_window_t2_ParamLimits

0x99b1,	// (0x00065018) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0006a76c) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0006a76c) popup_call_audio_out_window_t

0x99c6,	// (0x0006502d) bg_popup_call_pane_ParamLimits

0x99c6,	// (0x0006502d) bg_popup_call_pane

0x0f44,	// (0x0005c5ab) call_thumbnail_pane_cp_ParamLimits

0x0f44,	// (0x0005c5ab) call_thumbnail_pane_cp

0x9a4a,	// (0x000650b1) call_type_pane_cp01_ParamLimits

0x9a4a,	// (0x000650b1) call_type_pane_cp01

0x9a8e,	// (0x000650f5) popup_call_audio_first_window_g1_ParamLimits

0x9a8e,	// (0x000650f5) popup_call_audio_first_window_g1

0x9ada,	// (0x00065141) popup_call_audio_first_window_g2_ParamLimits

0x9ada,	// (0x00065141) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0006a771) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0006a771) popup_call_audio_first_window_g

0x9b1e,	// (0x00065185) popup_call_audio_first_window_t1_ParamLimits

0x9b1e,	// (0x00065185) popup_call_audio_first_window_t1

0x9bca,	// (0x00065231) popup_call_audio_first_window_t4_ParamLimits

0x9bca,	// (0x00065231) popup_call_audio_first_window_t4

0x9c56,	// (0x000652bd) popup_call_audio_first_window_t5_ParamLimits

0x9c56,	// (0x000652bd) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0006a776) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0006a776) popup_call_audio_first_window_t

0x9c85,	// (0x000652ec) bg_popup_call_pane_cp02

0x9c8f,	// (0x000652f6) call_type_pane_cp023

0x9c97,	// (0x000652fe) popup_call_audio_wait_window_g1

0x9c9f,	// (0x00065306) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0006a77d) popup_call_audio_wait_window_g

0x9ca7,	// (0x0006530e) popup_call_audio_wait_window_t3

0x9cb5,	// (0x0006531c) bg_popup_call_pane_cp03_ParamLimits

0x9cb5,	// (0x0006531c) bg_popup_call_pane_cp03

0x9d15,	// (0x0006537c) call_thumbnail_pane_cp011_ParamLimits

0x9d15,	// (0x0006537c) call_thumbnail_pane_cp011

0x9d21,	// (0x00065388) call_type_pane_cp034_ParamLimits

0x9d21,	// (0x00065388) call_type_pane_cp034

0x9d5d,	// (0x000653c4) popup_call_audio_second_window_g1_ParamLimits

0x9d5d,	// (0x000653c4) popup_call_audio_second_window_g1

0x9d99,	// (0x00065400) popup_call_audio_second_window_g2_ParamLimits

0x9d99,	// (0x00065400) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0006a782) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0006a782) popup_call_audio_second_window_g

0x9dd5,	// (0x0006543c) popup_call_audio_second_window_t1_ParamLimits

0x9dd5,	// (0x0006543c) popup_call_audio_second_window_t1

0x9e56,	// (0x000654bd) popup_call_audio_second_window_t2_ParamLimits

0x9e56,	// (0x000654bd) popup_call_audio_second_window_t2

0x9e8c,	// (0x000654f3) popup_call_audio_second_window_t3_ParamLimits

0x9e8c,	// (0x000654f3) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0006a787) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0006a787) popup_call_audio_second_window_t

0x9c85,	// (0x000652ec) bg_popup_call_pane_cp04

0x9ec2,	// (0x00065529) list_conf_pane

0x9eca,	// (0x00065531) popup_call_audio_conf_window_t1

0x9ed8,	// (0x0006553f) call_thumbnail_pane_g1

0x9ee0,	// (0x00065547) bg_pinb_pane_ParamLimits

0x9ee0,	// (0x00065547) bg_pinb_pane

0x9eee,	// (0x00065555) find_pinb_pane

0x9ef7,	// (0x0006555e) listscroll_pinb_pane_ParamLimits

0x9ef7,	// (0x0006555e) listscroll_pinb_pane

0x9f06,	// (0x0006556d) pinb_bg_pane_g1

0x0f68,	// (0x0005c5cf) pinb_bg_pane_g2

0x0f74,	// (0x0005c5db) pinb_bg_pane_g3

0x0f80,	// (0x0005c5e7) pinb_bg_pane_g4

0x0f8c,	// (0x0005c5f3) pinb_bg_pane_g5

0x0f98,	// (0x0005c5ff) pinb_bg_pane_g6

0x0fa3,	// (0x0005c60a) pinb_bg_pane_g7

0x0fae,	// (0x0005c615) pinb_bg_pane_g8

0x0fb9,	// (0x0005c620) pinb_bg_pane_g9

0x0fc3,	// (0x0005c62a) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0006a78e) pinb_bg_pane_g

0x0fe0,	// (0x0005c647) grid_pinb_pane

0x0fe9,	// (0x0005c650) list_pinb_pane

0x0ff2,	// (0x0005c659) scroll_pane_cp01_ParamLimits

0x0ff2,	// (0x0005c659) scroll_pane_cp01

0x9f10,	// (0x00065577) find_pinb_pane_g1_ParamLimits

0x9f10,	// (0x00065577) find_pinb_pane_g1

0x9f28,	// (0x0006558f) find_pinb_pane_t1

0x9f3a,	// (0x000655a1) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0006a7a8) find_pinb_pane_t

0x9f4f,	// (0x000655b6) input_focus_pane_cp01_ParamLimits

0x9f4f,	// (0x000655b6) input_focus_pane_cp01

0x1004,	// (0x0005c66b) cell_pinb_pane_ParamLimits

0x1004,	// (0x0005c66b) cell_pinb_pane

0x102d,	// (0x0005c694) cell_pinb_pane_g1_ParamLimits

0x102d,	// (0x0005c694) cell_pinb_pane_g1

0x103d,	// (0x0005c6a4) cell_pinb_pane_g2_ParamLimits

0x103d,	// (0x0005c6a4) cell_pinb_pane_g2

0x9f5b,	// (0x000655c2) cell_pinb_pane_g3_ParamLimits

0x9f5b,	// (0x000655c2) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0006a7ad) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0006a7ad) cell_pinb_pane_g

0x9c85,	// (0x000652ec) grid_highlight_pane_cp01

0x1049,	// (0x0005c6b0) list_pinb_item_pane_ParamLimits

0x1049,	// (0x0005c6b0) list_pinb_item_pane

0x9c85,	// (0x000652ec) list_highlight_pane_cp02

0x105b,	// (0x0005c6c2) list_pinb_item_pane_g1_ParamLimits

0x105b,	// (0x0005c6c2) list_pinb_item_pane_g1

0x1068,	// (0x0005c6cf) list_pinb_item_pane_g2_ParamLimits

0x1068,	// (0x0005c6cf) list_pinb_item_pane_g2

0x1074,	// (0x0005c6db) list_pinb_item_pane_g3_ParamLimits

0x1074,	// (0x0005c6db) list_pinb_item_pane_g3

0x1085,	// (0x0005c6ec) list_pinb_item_pane_g4_ParamLimits

0x1085,	// (0x0005c6ec) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0006a7b4) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0006a7b4) list_pinb_item_pane_g

0x1091,	// (0x0005c6f8) list_pinb_item_pane_t1_ParamLimits

0x1091,	// (0x0005c6f8) list_pinb_item_pane_t1

0x10c6,	// (0x0005c72d) calc_display_pane

0x10ee,	// (0x0005c755) calc_paper_pane

0x1111,	// (0x0005c778) grid_calc_pane

0x9c85,	// (0x000652ec) bg_list_pane_cp01

0x113f,	// (0x0005c7a6) clock_g1

0x1147,	// (0x0005c7ae) clock_g2

0x0001,

0xf156,	// (0x0006a7bd) clock_g

0x114f,	// (0x0005c7b6) clock_t1_ParamLimits

0x114f,	// (0x0005c7b6) clock_t1

0x1164,	// (0x0005c7cb) clock_t2_ParamLimits

0x1164,	// (0x0005c7cb) clock_t2

0x1176,	// (0x0005c7dd) clock_t3_ParamLimits

0x1176,	// (0x0005c7dd) clock_t3

0x1188,	// (0x0005c7ef) clock_t4_ParamLimits

0x1188,	// (0x0005c7ef) clock_t4

0x119a,	// (0x0005c801) clock_t5_ParamLimits

0x119a,	// (0x0005c801) clock_t5

0x11af,	// (0x0005c816) clock_t6_ParamLimits

0x11af,	// (0x0005c816) clock_t6

0x11c1,	// (0x0005c828) clock_t7_ParamLimits

0x11c1,	// (0x0005c828) clock_t7

0x11d3,	// (0x0005c83a) clock_t8_ParamLimits

0x11d3,	// (0x0005c83a) clock_t8

0x11e7,	// (0x0005c84e) clock_t9_ParamLimits

0x11e7,	// (0x0005c84e) clock_t9

0x0008,

0xf15b,	// (0x0006a7c2) clock_t_ParamLimits

0xf15b,	// (0x0006a7c2) clock_t

0x9f6f,	// (0x000655d6) popup_clock_analogue_window_cp02

0x9f6f,	// (0x000655d6) popup_clock_digital_window_cp01

0x9f77,	// (0x000655de) listscroll_help_pane

0x9c85,	// (0x000652ec) phob_pre_status_pane

0x9f81,	// (0x000655e8) grid_qdial_pane

0x9c85,	// (0x000652ec) listscroll_mce_pane

0x9f8b,	// (0x000655f2) bg_notes_pane

0x9f99,	// (0x00065600) list_notes_pane

0x11fb,	// (0x0005c862) scroll_pane_cp06

0x9fa7,	// (0x0006560e) bg_calc_paper_pane

0x9fc5,	// (0x0006562c) list_calc_pane

0x9fdf,	// (0x00065646) bg_calc_display_pane

0x120f,	// (0x0005c876) calc_display_pane_t1

0x1221,	// (0x0005c888) calc_display_pane_t2

0x9feb,	// (0x00065652) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0006a7d5) calc_display_pane_t

0x1233,	// (0x0005c89a) cell_calc_pane_ParamLimits

0x1233,	// (0x0005c89a) cell_calc_pane

0x9ffd,	// (0x00065664) bg_calc_paper_pane_g1

0xa009,	// (0x00065670) bg_calc_paper_pane_g2

0xa015,	// (0x0006567c) bg_calc_paper_pane_g3

0xa021,	// (0x00065688) bg_calc_paper_pane_g4

0xa02d,	// (0x00065694) bg_calc_paper_pane_g5

0x1268,	// (0x0005c8cf) bg_calc_paper_pane_g6

0x1277,	// (0x0005c8de) bg_calc_paper_pane_g7

0x1286,	// (0x0005c8ed) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0006a7dc) bg_calc_paper_pane_g

0x1299,	// (0x0005c900) calc_bg_paper_pane_g9

0x12ac,	// (0x0005c913) list_calc_item_pane_ParamLimits

0x12ac,	// (0x0005c913) list_calc_item_pane

0xa039,	// (0x000656a0) list_calc_item_pane_g1

0xa046,	// (0x000656ad) list_calc_item_pane_t1_ParamLimits

0xa046,	// (0x000656ad) list_calc_item_pane_t1

0x12c4,	// (0x0005c92b) list_calc_item_pane_t2_ParamLimits

0x12c4,	// (0x0005c92b) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0006a7ed) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0006a7ed) list_calc_item_pane_t

0xa058,	// (0x000656bf) cell_calc_pane_g1

0xa062,	// (0x000656c9) grid_highlight_pane_cp02

0x12f6,	// (0x0005c95d) bg_calc_display_pane_g1

0x12ff,	// (0x0005c966) bg_calc_display_pane_g2

0x1309,	// (0x0005c970) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0006a7f7) bg_calc_display_pane_g

0x1312,	// (0x0005c979) cell_qdial_pane_ParamLimits

0x1312,	// (0x0005c979) cell_qdial_pane

0x1326,	// (0x0005c98d) cell_qdial_pane_g1_ParamLimits

0x1326,	// (0x0005c98d) cell_qdial_pane_g1

0x133c,	// (0x0005c9a3) cell_qdial_pane_g2_ParamLimits

0x133c,	// (0x0005c9a3) cell_qdial_pane_g2

0xa084,	// (0x000656eb) cell_qdial_pane_g3_ParamLimits

0xa084,	// (0x000656eb) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0006a7fe) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0006a7fe) cell_qdial_pane_g

0x1363,	// (0x0005c9ca) cell_qdial_pane_t1_ParamLimits

0x1363,	// (0x0005c9ca) cell_qdial_pane_t1

0x137b,	// (0x0005c9e2) cell_qdial_pane_t2_ParamLimits

0x137b,	// (0x0005c9e2) cell_qdial_pane_t2

0x138e,	// (0x0005c9f5) cell_qdial_pane_t3_ParamLimits

0x138e,	// (0x0005c9f5) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0006a807) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0006a807) cell_qdial_pane_t

0x9c85,	// (0x000652ec) grid_highlight_pane_cp04

0xa090,	// (0x000656f7) thumbnail_qdial_pane_ParamLimits

0xa090,	// (0x000656f7) thumbnail_qdial_pane

0xa0ec,	// (0x00065753) list_help_pane

0xa0f5,	// (0x0006575c) scroll_pane_cp02

0x13a1,	// (0x0005ca08) help_list_pane_t1_ParamLimits

0x13a1,	// (0x0005ca08) help_list_pane_t1

0xa0fe,	// (0x00065765) bg_notes_pane_g2

0xa106,	// (0x0006576d) bg_notes_pane_g3

0xa10e,	// (0x00065775) notes_bg_pane_g1

0xa116,	// (0x0006577d) notes_bg_pane_g4

0xa11e,	// (0x00065785) notes_bg_pane_g5

0xa126,	// (0x0006578d) notes_bg_pane_g6

0xa12e,	// (0x00065795) notes_bg_pane_g7

0xa136,	// (0x0006579d) notes_bg_pane_g8

0xa13e,	// (0x000657a5) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0006a825) notes_bg_pane_g

0x13be,	// (0x0005ca25) list_notes_text_pane_ParamLimits

0x13be,	// (0x0005ca25) list_notes_text_pane

0xa146,	// (0x000657ad) list_notes_text_pane_g1

0x13d3,	// (0x0005ca3a) list_notes_text_pane_t1

0x9fdf,	// (0x00065646) listscroll_cale_week_pane

0x13fe,	// (0x0005ca65) bg_cale_heading_pane

0xa160,	// (0x000657c7) bg_cale_pane_cp01

0x1412,	// (0x0005ca79) cale_week_corner_pane

0x1428,	// (0x0005ca8f) cale_week_day_heading_pane

0x143c,	// (0x0005caa3) cale_week_scroll_pane_g1

0x144d,	// (0x0005cab4) cale_week_scroll_pane_g2

0x145e,	// (0x0005cac5) cale_week_scroll_pane_g3

0x146f,	// (0x0005cad6) cale_week_scroll_pane_g4

0x1480,	// (0x0005cae7) cale_week_scroll_pane_g5

0x1493,	// (0x0005cafa) cale_week_scroll_pane_g6

0x14a6,	// (0x0005cb0d) cale_week_scroll_pane_g7

0x14b9,	// (0x0005cb20) cale_week_scroll_pane_g8

0x14cc,	// (0x0005cb33) cale_week_scroll_pane_g9

0x14dd,	// (0x0005cb44) cale_week_scroll_pane_g10

0x14ee,	// (0x0005cb55) cale_week_scroll_pane_g11

0x14ff,	// (0x0005cb66) cale_week_scroll_pane_g12

0x1510,	// (0x0005cb77) cale_week_scroll_pane_g13

0x1521,	// (0x0005cb88) cale_week_scroll_pane_g14

0x1532,	// (0x0005cb99) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0006a834) cale_week_scroll_pane_g

0x1543,	// (0x0005cbaa) cale_week_time_pane

0x1556,	// (0x0005cbbd) grid_cale_week_pane

0x156b,	// (0x0005cbd2) scroll_pane_cp08

0x1585,	// (0x0005cbec) cell_cale_week_pane_ParamLimits

0x1585,	// (0x0005cbec) cell_cale_week_pane

0x15c5,	// (0x0005cc2c) cale_week_day_heading_pane_t1

0x15ef,	// (0x0005cc56) cale_week_day_heading_pane_t2

0x1619,	// (0x0005cc80) cale_week_day_heading_pane_t3

0x1643,	// (0x0005ccaa) cale_week_day_heading_pane_t4

0x166d,	// (0x0005ccd4) cale_week_day_heading_pane_t5

0x1697,	// (0x0005ccfe) cale_week_day_heading_pane_t6

0x16c3,	// (0x0005cd2a) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0006a853) cale_week_day_heading_pane_t

0xa18b,	// (0x000657f2) bg_cale_side_pane

0x16ed,	// (0x0005cd54) cale_week_time_pane_t1

0x1705,	// (0x0005cd6c) cale_week_time_pane_t2

0x171d,	// (0x0005cd84) cale_week_time_pane_t3

0x1735,	// (0x0005cd9c) cale_week_time_pane_t4

0x174d,	// (0x0005cdb4) cale_week_time_pane_t5

0x1765,	// (0x0005cdcc) cale_week_time_pane_t6

0x177d,	// (0x0005cde4) cale_week_time_pane_t7

0x1795,	// (0x0005cdfc) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0006a862) cale_week_time_pane_t

0x17ad,	// (0x0005ce14) cell_cale_week_pane_g2

0x17c6,	// (0x0005ce2d) cell_cale_week_pane_g3_ParamLimits

0x17c6,	// (0x0005ce2d) cell_cale_week_pane_g3

0xa199,	// (0x00065800) grid_highlight_pane_cp07

0xa1a1,	// (0x00065808) listscroll_gms_pane

0xa1ab,	// (0x00065812) grid_gms_pane

0xa1b4,	// (0x0006581b) listscroll_gms_pane_g1

0xa1bc,	// (0x00065823) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0006a873) listscroll_gms_pane_g

0x17de,	// (0x0005ce45) scroll_pane_cp010

0x17e9,	// (0x0005ce50) cell_gms_pane_ParamLimits

0x17e9,	// (0x0005ce50) cell_gms_pane

0x17fb,	// (0x0005ce62) cell_gms_pane_g1

0xa1c4,	// (0x0006582b) cell_gms_pane_g2

0xa1cc,	// (0x00065833) cell_gms_pane_g3

0xa1d5,	// (0x0006583c) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0006a878) cell_gms_pane_g

0xa1de,	// (0x00065845) grid_highlight_pane_cp09

0x3af4,	// (0x0005f15b) phob_pre_status_pane_g1

0x3afc,	// (0x0005f163) phob_pre_status_pane_g2

0x3b04,	// (0x0005f16b) phob_pre_status_pane_g3

0x3b0c,	// (0x0005f173) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0006ac67) phob_pre_status_pane_g

0x3b1c,	// (0x0005f183) phob_pre_status_pane_t1

0x3b2a,	// (0x0005f191) phob_pre_status_pane_t2

0x3b3a,	// (0x0005f1a1) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0006ac72) phob_pre_status_pane_t

0x9c85,	// (0x000652ec) bg_list_pane_cp05

0x180b,	// (0x0005ce72) grid_vorec_pane

0xa1e6,	// (0x0006584d) vorec_t1

0xa1f4,	// (0x0006585b) vorec_t2

0xa202,	// (0x00065869) vorec_t3

0xa210,	// (0x00065877) vorec_t4

0xa21e,	// (0x00065885) vorec_t5

0xa22c,	// (0x00065893) vorec_t6

0x0006,

0xf21a,	// (0x0006a881) vorec_t

0xa248,	// (0x000658af) wait_bar_pane_cp01

0x1813,	// (0x0005ce7a) cell_vorec_pane_ParamLimits

0x1813,	// (0x0005ce7a) cell_vorec_pane

0xa250,	// (0x000658b7) cell_vorec_pane_g1

0x9c85,	// (0x000652ec) grid_highlight_pane_cp05

0x183e,	// (0x0005cea5) cams_zoom_pane

0x184d,	// (0x0005ceb4) image_vga_pane

0x1867,	// (0x0005cece) main_camera_pane_g1

0x1879,	// (0x0005cee0) main_camera_pane_g2

0x1889,	// (0x0005cef0) main_camera_pane_g3

0x1899,	// (0x0005cf00) main_camera_pane_g4

0x18a9,	// (0x0005cf10) main_camera_pane_g5

0x18b9,	// (0x0005cf20) main_camera_pane_g6

0x18cb,	// (0x0005cf32) main_camera_pane_g7

0x0007,

0xf229,	// (0x0006a890) main_camera_pane_g

0x18db,	// (0x0005cf42) main_camera_pane_t1

0x18f1,	// (0x0005cf58) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0006a8a1) main_camera_pane_t

0x192b,	// (0x0005cf92) cams_zoom_pane_cp_ParamLimits

0x192b,	// (0x0005cf92) cams_zoom_pane_cp

0x1953,	// (0x0005cfba) image_cif_pane_ParamLimits

0x1953,	// (0x0005cfba) image_cif_pane

0x198e,	// (0x0005cff5) image_subqcif_pane

0x1996,	// (0x0005cffd) main_video_pane_g1_ParamLimits

0x1996,	// (0x0005cffd) main_video_pane_g1

0x19ba,	// (0x0005d021) main_video_pane_g2_ParamLimits

0x19ba,	// (0x0005d021) main_video_pane_g2

0x19ee,	// (0x0005d055) main_video_pane_g3_ParamLimits

0x19ee,	// (0x0005d055) main_video_pane_g3

0x1a1c,	// (0x0005d083) main_video_pane_g4_ParamLimits

0x1a1c,	// (0x0005d083) main_video_pane_g4

0x1a4a,	// (0x0005d0b1) main_video_pane_g5_ParamLimits

0x1a4a,	// (0x0005d0b1) main_video_pane_g5

0xa266,	// (0x000658cd) main_video_pane_g6_ParamLimits

0xa266,	// (0x000658cd) main_video_pane_g6

0x0006,

0xf23f,	// (0x0006a8a6) main_video_pane_g_ParamLimits

0xf23f,	// (0x0006a8a6) main_video_pane_g

0x1a73,	// (0x0005d0da) main_video_pane_t1_ParamLimits

0x1a73,	// (0x0005d0da) main_video_pane_t1

0xa280,	// (0x000658e7) cams_zoom_pane_g1

0xa289,	// (0x000658f0) cams_zoom_pane_g2

0xa292,	// (0x000658f9) cams_zoom_pane_g3

0xa29b,	// (0x00065902) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0006a8b5) cams_zoom_pane_g

0x1ad0,	// (0x0005d137) grid_cams_pane

0x1aea,	// (0x0005d151) linegrid_cams_pane

0x1afe,	// (0x0005d165) cell_cams_pane_ParamLimits

0x1afe,	// (0x0005d165) cell_cams_pane

0xa2a4,	// (0x0006590b) cams_burst_image_pane

0xa2ac,	// (0x00065913) cell_cams_pane_g1

0x9c85,	// (0x000652ec) grid_highlight_pane_cp03

0xa058,	// (0x000656bf) mp_bg_pane_g1

0x9c85,	// (0x000652ec) bg_list_pane_cp03

0xbf9c,	// (0x00067603) bg_mp_pane

0xbfa4,	// (0x0006760b) grid_mp_pane

0xbfac,	// (0x00067613) media_player_g1

0xbfb4,	// (0x0006761b) media_player_t1

0xbfc2,	// (0x00067629) media_player_t2

0xbfd0,	// (0x00067637) media_player_t3

0xbfde,	// (0x00067645) media_player_t4

0xbfec,	// (0x00067653) media_player_t5

0xbffa,	// (0x00067661) media_player_t6

0xc008,	// (0x0006766f) media_player_t7

0x0006,

0xf5ea,	// (0x0006ac51) media_player_t

0xc016,	// (0x0006767d) wait_bar_pane_cp02

0xf5cf,	// (0x0006ac36) main_usb_pane_t

0x3aeb,	// (0x0005f152) cell_mp_pane

0xa058,	// (0x000656bf) cell_mp_pane_g1

0x9c85,	// (0x000652ec) grid_highlight_pane_cp06

0xa2b4,	// (0x0006591b) grid_skin_colour_pane

0xa2bc,	// (0x00065923) list_highlight_pane_cp03

0x1c17,	// (0x0005d27e) skin_g1

0xa2c4,	// (0x0006592b) skin_t1

0xa2d3,	// (0x0006593a) skin_t2

0x0001,

0xf283,	// (0x0006a8ea) skin_t

0x1c1f,	// (0x0005d286) cell_skin_colour_pane_ParamLimits

0x1c1f,	// (0x0005d286) cell_skin_colour_pane

0xa2e1,	// (0x00065948) cell_skin_colour_pane_g1

0x1c98,	// (0x0005d2ff) call_video_g1_ParamLimits

0x1c98,	// (0x0005d2ff) call_video_g1

0x1cb4,	// (0x0005d31b) call_video_g2_ParamLimits

0x1cb4,	// (0x0005d31b) call_video_g2

0x0001,

0xf288,	// (0x0006a8ef) call_video_g_ParamLimits

0xf288,	// (0x0006a8ef) call_video_g

0x1d06,	// (0x0005d36d) call_video_uplink_pane_cp1_ParamLimits

0x1d06,	// (0x0005d36d) call_video_uplink_pane_cp1

0xa2f3,	// (0x0006595a) call_video_uplink_pane_cp2

0x1da5,	// (0x0005d40c) video_down_crop_pane_ParamLimits

0x1da5,	// (0x0005d40c) video_down_crop_pane

0x1e9c,	// (0x0005d503) video_down_pane_ParamLimits

0x1e9c,	// (0x0005d503) video_down_pane

0xa2fb,	// (0x00065962) video_down_subqcif_pane_ParamLimits

0xa2fb,	// (0x00065962) video_down_subqcif_pane

0xa313,	// (0x0006597a) video_down_subqcif_pane_cp_ParamLimits

0xa313,	// (0x0006597a) video_down_subqcif_pane_cp

0xa339,	// (0x000659a0) im_reading_pane_ParamLimits

0xa339,	// (0x000659a0) im_reading_pane

0x1faa,	// (0x0005d611) im_writing_pane_ParamLimits

0x1faa,	// (0x0005d611) im_writing_pane

0x1fc0,	// (0x0005d627) im_reading_pane_t1

0xa353,	// (0x000659ba) list_im_pane

0xa364,	// (0x000659cb) scroll_pane_cp07

0x1ff9,	// (0x0005d660) im_writing_pane_t1_ParamLimits

0x1ff9,	// (0x0005d660) im_writing_pane_t1

0xa37d,	// (0x000659e4) im_writing_pane_t2_ParamLimits

0xa37d,	// (0x000659e4) im_writing_pane_t2

0x0001,

0xf292,	// (0x0006a8f9) im_writing_pane_t_ParamLimits

0xf292,	// (0x0006a8f9) im_writing_pane_t

0x9c85,	// (0x000652ec) input_focus_pane_cp04

0x9c85,	// (0x000652ec) input_focus_pane_cp05

0x200e,	// (0x0005d675) list_im_single_pane_ParamLimits

0x200e,	// (0x0005d675) list_im_single_pane

0x2022,	// (0x0005d689) list_single_im_pane_t1

0x3aab,	// (0x0005f112) blid_accuracy_pane

0x3ab3,	// (0x0005f11a) blid_compass_pane

0x3abd,	// (0x0005f124) main_location_t1

0x3acd,	// (0x0005f134) main_location_t2

0x3add,	// (0x0005f144) main_location_t3

0x0002,

0xf5f9,	// (0x0006ac60) main_location_t

0x9c85,	// (0x000652ec) aid_levels_location

0xa058,	// (0x000656bf) blid_accuracy_pane_g1

0xa058,	// (0x000656bf) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0006a95b) blid_accuracy_pane_g

0xa3c5,	// (0x00065a2c) wml_content_pane

0xa403,	// (0x00065a6a) wml_button_pane_ParamLimits

0xa403,	// (0x00065a6a) wml_button_pane

0x2031,	// (0x0005d698) wml_list_single_large_pane_ParamLimits

0x2031,	// (0x0005d698) wml_list_single_large_pane

0x2046,	// (0x0005d6ad) wml_list_single_medium_pane_ParamLimits

0x2046,	// (0x0005d6ad) wml_list_single_medium_pane

0x205c,	// (0x0005d6c3) wml_list_single_small_pane_ParamLimits

0x205c,	// (0x0005d6c3) wml_list_single_small_pane

0xa417,	// (0x00065a7e) wml_selection_box_pane_ParamLimits

0xa417,	// (0x00065a7e) wml_selection_box_pane

0xa42a,	// (0x00065a91) wml_list_single_pane_t1

0xa439,	// (0x00065aa0) wml_list_single_medium_pane_t1

0xa448,	// (0x00065aaf) wml_list_single_large_pane_t1

0xa457,	// (0x00065abe) input_focus_pane_cp02_ParamLimits

0xa457,	// (0x00065abe) input_focus_pane_cp02

0xa46a,	// (0x00065ad1) wml_selection_box_pane_g1

0xa473,	// (0x00065ada) wml_selection_box_pane_t1_ParamLimits

0xa473,	// (0x00065ada) wml_selection_box_pane_t1

0x9ee0,	// (0x00065547) bg_wml_button_pane_ParamLimits

0x9ee0,	// (0x00065547) bg_wml_button_pane

0xa48b,	// (0x00065af2) wml_button_pane_g1

0xa493,	// (0x00065afa) wml_button_pane_t1

0xa48b,	// (0x00065af2) wml_button_bg_pane_g1

0xa4a3,	// (0x00065b0a) wml_button_bg_pane_g2

0xa4ab,	// (0x00065b12) wml_button_bg_pane_g3

0xa4b3,	// (0x00065b1a) wml_button_bg_pane_g4

0xa4bb,	// (0x00065b22) wml_button_bg_pane_g5

0xa4c3,	// (0x00065b2a) wml_button_bg_pane_g6

0xa4cb,	// (0x00065b32) wml_button_bg_pane_g7

0xa4d3,	// (0x00065b3a) wml_button_bg_pane_g8

0xa4db,	// (0x00065b42) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0006a8fe) wml_button_bg_pane_g

0x2074,	// (0x0005d6db) bg_list_pane_cp02

0xa4e3,	// (0x00065b4a) mce_header_pane_ParamLimits

0xa4e3,	// (0x00065b4a) mce_header_pane

0xa4f9,	// (0x00065b60) mce_icon_pane

0xa4f9,	// (0x00065b60) mce_image_pane

0xa502,	// (0x00065b69) mce_text_pane_ParamLimits

0xa502,	// (0x00065b69) mce_text_pane

0x207c,	// (0x0005d6e3) scroll_pane_cp03

0xa3fb,	// (0x00065a62) scroll_pane_cp04

0xa515,	// (0x00065b7c) scroll_pane_cp05_ParamLimits

0xa515,	// (0x00065b7c) scroll_pane_cp05

0x2086,	// (0x0005d6ed) mce_header_field_pane_ParamLimits

0x2086,	// (0x0005d6ed) mce_header_field_pane

0x209d,	// (0x0005d704) mce_header_field_pane_2_ParamLimits

0x209d,	// (0x0005d704) mce_header_field_pane_2

0x20b3,	// (0x0005d71a) mce_header_field_pane_3

0x20bb,	// (0x0005d722) list_single_mce_message_pane_ParamLimits

0x20bb,	// (0x0005d722) list_single_mce_message_pane

0x20d0,	// (0x0005d737) list_single_mce_smart_pane_ParamLimits

0x20d0,	// (0x0005d737) list_single_mce_smart_pane

0xa521,	// (0x00065b88) input_focus_pane_cp03

0xa52a,	// (0x00065b91) list_header_data_pane

0x20f0,	// (0x0005d757) mce_header_field_pane_t1

0x2100,	// (0x0005d767) list_single_mce_header_pane_ParamLimits

0x2100,	// (0x0005d767) list_single_mce_header_pane

0xa532,	// (0x00065b99) list_single_mce_header_pane_t1

0xa541,	// (0x00065ba8) list_single_mce_message_pane_g1

0xa549,	// (0x00065bb0) list_single_mce_message_pane_t1

0x2132,	// (0x0005d799) bg_cale_heading_pane_cp01_ParamLimits

0x2132,	// (0x0005d799) bg_cale_heading_pane_cp01

0xa557,	// (0x00065bbe) bg_cale_pane_cp02_ParamLimits

0xa557,	// (0x00065bbe) bg_cale_pane_cp02

0x2155,	// (0x0005d7bc) cale_month_corner_pane

0x216b,	// (0x0005d7d2) cale_month_day_heading_pane_ParamLimits

0x216b,	// (0x0005d7d2) cale_month_day_heading_pane

0x219e,	// (0x0005d805) cale_month_pane_g1_ParamLimits

0x219e,	// (0x0005d805) cale_month_pane_g1

0x21ba,	// (0x0005d821) cale_month_pane_g2_ParamLimits

0x21ba,	// (0x0005d821) cale_month_pane_g2

0x21d5,	// (0x0005d83c) cale_month_pane_g3_ParamLimits

0x21d5,	// (0x0005d83c) cale_month_pane_g3

0x2201,	// (0x0005d868) cale_month_pane_g4_ParamLimits

0x2201,	// (0x0005d868) cale_month_pane_g4

0x222d,	// (0x0005d894) cale_month_pane_g5_ParamLimits

0x222d,	// (0x0005d894) cale_month_pane_g5

0x2261,	// (0x0005d8c8) cale_month_pane_g6_ParamLimits

0x2261,	// (0x0005d8c8) cale_month_pane_g6

0x229d,	// (0x0005d904) cale_month_pane_g7_ParamLimits

0x229d,	// (0x0005d904) cale_month_pane_g7

0x22d9,	// (0x0005d940) cale_month_pane_g8_ParamLimits

0x22d9,	// (0x0005d940) cale_month_pane_g8

0x2315,	// (0x0005d97c) cale_month_pane_g9_ParamLimits

0x2315,	// (0x0005d97c) cale_month_pane_g9

0x234f,	// (0x0005d9b6) cale_month_pane_g10_ParamLimits

0x234f,	// (0x0005d9b6) cale_month_pane_g10

0x2389,	// (0x0005d9f0) cale_month_pane_g11_ParamLimits

0x2389,	// (0x0005d9f0) cale_month_pane_g11

0x23c3,	// (0x0005da2a) cale_month_pane_g12_ParamLimits

0x23c3,	// (0x0005da2a) cale_month_pane_g12

0x23fd,	// (0x0005da64) cale_month_pane_g13_ParamLimits

0x23fd,	// (0x0005da64) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0006a911) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0006a911) cale_month_pane_g

0x2437,	// (0x0005da9e) cale_month_week_pane

0x244a,	// (0x0005dab1) grid_cale_month_pane_ParamLimits

0x244a,	// (0x0005dab1) grid_cale_month_pane

0x2478,	// (0x0005dadf) cale_month_day_heading_pane_t1

0x24d6,	// (0x0005db3d) cale_month_day_heading_pane_t2

0x253b,	// (0x0005dba2) cale_month_day_heading_pane_t3

0x25a0,	// (0x0005dc07) cale_month_day_heading_pane_t4

0x2605,	// (0x0005dc6c) cale_month_day_heading_pane_t5

0x267a,	// (0x0005dce1) cale_month_day_heading_pane_t6

0x26ef,	// (0x0005dd56) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0006a92c) cale_month_day_heading_pane_t

0xa18b,	// (0x000657f2) bg_cale_side_pane_cp01

0x2764,	// (0x0005ddcb) cale_month_week_pane_t1

0x277b,	// (0x0005dde2) cale_month_week_pane_t2

0x2792,	// (0x0005ddf9) cale_month_week_pane_t3

0x27a9,	// (0x0005de10) cale_month_week_pane_t4

0x27c0,	// (0x0005de27) cale_month_week_pane_t5

0x27d7,	// (0x0005de3e) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0006a93b) cale_month_week_pane_t

0x27ee,	// (0x0005de55) cell_cale_month_pane_ParamLimits

0x27ee,	// (0x0005de55) cell_cale_month_pane

0xa58c,	// (0x00065bf3) cell_cale_month_pane_g1

0x28ee,	// (0x0005df55) cell_cale_month_pane_t1_ParamLimits

0x28ee,	// (0x0005df55) cell_cale_month_pane_t1

0xa199,	// (0x00065800) grid_highlight_pane_cp08

0xa058,	// (0x000656bf) main_smil_g1

0x290a,	// (0x0005df71) smil_status_pane

0xa598,	// (0x00065bff) smil_text_pane

0xbebc,	// (0x00067523) bg_popup_call3_rect_pane_g8

0xbec4,	// (0x0006752b) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0006abf4) bg_popup_call3_rect_pane_g

0xc13e,	// (0x000677a5) smil_status_volume_pane_g1

0xa5a2,	// (0x00065c09) smil_status_pane_t1

0xc171,	// (0x000677d8) volume_smil_pane

0xa5b9,	// (0x00065c20) list_smil_text_pane

0x291d,	// (0x0005df84) scroll_pane_cp011

0x2928,	// (0x0005df8f) smil_text_list_pane_t1_ParamLimits

0x2928,	// (0x0005df8f) smil_text_list_pane_t1

0xa5c3,	// (0x00065c2a) aid_volume_smil_ParamLimits

0xa5c3,	// (0x00065c2a) aid_volume_smil

0xa058,	// (0x000656bf) smil_volume_pane_g1

0xa058,	// (0x000656bf) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0006a95b) smil_volume_pane_g

0x9fdf,	// (0x00065646) listscroll_cale_day_pane

0xa5e5,	// (0x00065c4c) bg_cale_pane

0xa5fd,	// (0x00065c64) list_cale_pane

0xa60e,	// (0x00065c75) scroll_pane_cp09

0xa61f,	// (0x00065c86) cale_bg_pane_g1

0xa627,	// (0x00065c8e) cale_bg_pane_g2

0xa62f,	// (0x00065c96) cale_bg_pane_g3

0xa637,	// (0x00065c9e) cale_bg_pane_g4

0xa63f,	// (0x00065ca6) cale_bg_pane_g5

0xa647,	// (0x00065cae) cale_bg_pane_g6

0xa64f,	// (0x00065cb6) cale_bg_pane_g7

0xa657,	// (0x00065cbe) cale_bg_pane_g8

0xa65f,	// (0x00065cc6) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0006a960) cale_bg_pane_g

0x296e,	// (0x0005dfd5) list_cale_time_pane_ParamLimits

0x296e,	// (0x0005dfd5) list_cale_time_pane

0xa667,	// (0x00065cce) list_cale_time_pane_g1_ParamLimits

0xa667,	// (0x00065cce) list_cale_time_pane_g1

0xa673,	// (0x00065cda) list_cale_time_pane_g2_ParamLimits

0xa673,	// (0x00065cda) list_cale_time_pane_g2

0x2981,	// (0x0005dfe8) list_cale_time_pane_g3_ParamLimits

0x2981,	// (0x0005dfe8) list_cale_time_pane_g3

0x298f,	// (0x0005dff6) list_cale_time_pane_g4_ParamLimits

0x298f,	// (0x0005dff6) list_cale_time_pane_g4

0x299d,	// (0x0005e004) list_cale_time_pane_g5_ParamLimits

0x299d,	// (0x0005e004) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0006a973) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0006a973) list_cale_time_pane_g

0xa68d,	// (0x00065cf4) list_cale_time_pane_t1_ParamLimits

0xa68d,	// (0x00065cf4) list_cale_time_pane_t1

0xa6b5,	// (0x00065d1c) list_cale_time_pane_t2_ParamLimits

0xa6b5,	// (0x00065d1c) list_cale_time_pane_t2

0x2d0e,	// (0x0005e375) aid_blid_cardinal_pane

0x2d4c,	// (0x0005e3b3) compass_pane_t4

0xa6dd,	// (0x00065d44) list_cale_time_pane_t4_ParamLimits

0xa6dd,	// (0x00065d44) list_cale_time_pane_t4

0x2d5a,	// (0x0005e3c1) compass_pane_t5

0x2d68,	// (0x0005e3cf) compass_pane_t6

0x2d76,	// (0x0005e3dd) compass_pane_t7

0xab87,	// (0x000661ee) navi_pane_cc_t1

0xacee,	// (0x00066355) aid_phob_thumbnail_center_pane

0x34c3,	// (0x0005eb2a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0006a980) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0006a980) list_cale_time_pane_t

0x98dc,	// (0x00064f43) bg_popup_window_pane_cp02_ParamLimits

0x98dc,	// (0x00064f43) bg_popup_window_pane_cp02

0xa705,	// (0x00065d6c) heading_pane_cp01_ParamLimits

0xa705,	// (0x00065d6c) heading_pane_cp01

0xa711,	// (0x00065d78) loc_req_pane_ParamLimits

0xa711,	// (0x00065d78) loc_req_pane

0xa721,	// (0x00065d88) loc_type_pane_ParamLimits

0xa721,	// (0x00065d88) loc_type_pane

0xa733,	// (0x00065d9a) loc_type_pane_t1_ParamLimits

0xa733,	// (0x00065d9a) loc_type_pane_t1

0xa745,	// (0x00065dac) loc_type_pane_t2_ParamLimits

0xa745,	// (0x00065dac) loc_type_pane_t2

0xa757,	// (0x00065dbe) loc_type_pane_t3_ParamLimits

0xa757,	// (0x00065dbe) loc_type_pane_t3

0x0002,

0xf320,	// (0x0006a987) loc_type_pane_t_ParamLimits

0xf320,	// (0x0006a987) loc_type_pane_t

0xa769,	// (0x00065dd0) list_loc_req_pane

0xa773,	// (0x00065dda) scroll_pane_cp012

0x29ab,	// (0x0005e012) list_single_loc_request_popup_menu_pane_ParamLimits

0x29ab,	// (0x0005e012) list_single_loc_request_popup_menu_pane

0xa77e,	// (0x00065de5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa77e,	// (0x00065de5) list_single_loc_request_popup_menu_pane_g1

0xa78a,	// (0x00065df1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa78a,	// (0x00065df1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0006a98e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0006a98e) list_single_loc_request_popup_menu_pane_g

0xa796,	// (0x00065dfd) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa796,	// (0x00065dfd) list_single_loc_request_popup_menu_pane_t1

0x9ee0,	// (0x00065547) bg_popup_window_pane_cp03_ParamLimits

0x9ee0,	// (0x00065547) bg_popup_window_pane_cp03

0xa7ac,	// (0x00065e13) heading_loc_req_pane_ParamLimits

0xa7ac,	// (0x00065e13) heading_loc_req_pane

0x29b8,	// (0x0005e01f) popup_dyc_status_message_window_g1_ParamLimits

0x29b8,	// (0x0005e01f) popup_dyc_status_message_window_g1

0x29cc,	// (0x0005e033) popup_dyc_status_message_window_t1_ParamLimits

0x29cc,	// (0x0005e033) popup_dyc_status_message_window_t1

0x29e1,	// (0x0005e048) popup_dyc_status_message_window_t2_ParamLimits

0x29e1,	// (0x0005e048) popup_dyc_status_message_window_t2

0x29f6,	// (0x0005e05d) popup_dyc_status_message_window_t3_ParamLimits

0x29f6,	// (0x0005e05d) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0006a993) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0006a993) popup_dyc_status_message_window_t

0x9c85,	// (0x000652ec) bg_heading_pane_cp01

0xa7b8,	// (0x00065e1f) heading_loc_req_pane_g1

0xa7c0,	// (0x00065e27) heading_loc_req_pane_g2

0xa7c8,	// (0x00065e2f) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0006a99a) heading_loc_req_pane_g

0xa7d0,	// (0x00065e37) heading_loc_req_pane_t1

0xa7df,	// (0x00065e46) bg_popup_sub_pane_cp01_ParamLimits

0xa7df,	// (0x00065e46) bg_popup_sub_pane_cp01

0xa7ed,	// (0x00065e54) popup_cale_events_window_g1_ParamLimits

0xa7ed,	// (0x00065e54) popup_cale_events_window_g1

0xa80d,	// (0x00065e74) popup_cale_events_window_g2_ParamLimits

0xa80d,	// (0x00065e74) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0006a9ce) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0006a9ce) popup_cale_events_window_g

0xa82d,	// (0x00065e94) popup_cale_events_window_t1_ParamLimits

0xa82d,	// (0x00065e94) popup_cale_events_window_t1

0xa83f,	// (0x00065ea6) popup_cale_events_window_t2_ParamLimits

0xa83f,	// (0x00065ea6) popup_cale_events_window_t2

0xa87d,	// (0x00065ee4) popup_cale_events_window_t3_ParamLimits

0xa87d,	// (0x00065ee4) popup_cale_events_window_t3

0xa8b7,	// (0x00065f1e) popup_cale_events_window_t4_ParamLimits

0xa8b7,	// (0x00065f1e) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0006a9d3) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0006a9d3) popup_cale_events_window_t

0x2af9,	// (0x0005e160) call_type_pane

0x2b09,	// (0x0005e170) popup_call_status_window_g1

0x2b1d,	// (0x0005e184) popup_call_status_window_g2

0x2b31,	// (0x0005e198) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0006a9dc) popup_call_status_window_g

0xa8ed,	// (0x00065f54) call_type_pane_g1

0xa8f6,	// (0x00065f5d) call_type_pane_g2

0x0001,

0xf37c,	// (0x0006a9e3) call_type_pane_g

0x9c85,	// (0x000652ec) bg_popup_sub_pane_cp02

0xa8ff,	// (0x00065f66) listscroll_popup_wml_pane

0xa907,	// (0x00065f6e) list_wml_pane

0xa911,	// (0x00065f78) scroll_pane_cp013

0xa91c,	// (0x00065f83) list_single_graphic_popup_wml_pane_ParamLimits

0xa91c,	// (0x00065f83) list_single_graphic_popup_wml_pane

0xa058,	// (0x000656bf) list_single_graphic_popup_wml_pane_g1

0xa930,	// (0x00065f97) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0006a9e8) list_single_graphic_popup_wml_pane_g

0xa938,	// (0x00065f9f) list_single_graphic_popup_wml_pane_t1

0xa94e,	// (0x00065fb5) aid_call_pane

0x9ed8,	// (0x0006553f) popup_clock_analogue_window_g1

0x9ed8,	// (0x0006553f) popup_clock_analogue_window_g2

0xa956,	// (0x00065fbd) popup_clock_analogue_window_g3

0xa956,	// (0x00065fbd) popup_clock_analogue_window_g4

0xa058,	// (0x000656bf) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0006a9ed) popup_clock_analogue_window_g

0xa95e,	// (0x00065fc5) popup_clock_analogue_window_t1

0xa96c,	// (0x00065fd3) clock_digital_number_pane_ParamLimits

0xa96c,	// (0x00065fd3) clock_digital_number_pane

0xa978,	// (0x00065fdf) clock_digital_number_pane_cp02_ParamLimits

0xa978,	// (0x00065fdf) clock_digital_number_pane_cp02

0xa984,	// (0x00065feb) clock_digital_number_pane_cp03_ParamLimits

0xa984,	// (0x00065feb) clock_digital_number_pane_cp03

0xa990,	// (0x00065ff7) clock_digital_number_pane_cp04_ParamLimits

0xa990,	// (0x00065ff7) clock_digital_number_pane_cp04

0xa9a0,	// (0x00066007) clock_digital_separator_pane_ParamLimits

0xa9a0,	// (0x00066007) clock_digital_separator_pane

0xa9ac,	// (0x00066013) popup_clock_digital_window_t1

0xa058,	// (0x000656bf) clock_digital_number_pane_g1

0xa058,	// (0x000656bf) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0006a95b) clock_digital_number_pane_g

0xa058,	// (0x000656bf) clock_digital_separator_pane_g1

0xa058,	// (0x000656bf) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0006a95b) clock_digital_separator_pane_g

0x9c85,	// (0x000652ec) bg_popup_window_pane_cp04

0xa9c9,	// (0x00066030) heading_pane_cp03

0xa9d1,	// (0x00066038) listscroll_popup_gms_pane

0xa9d9,	// (0x00066040) grid_large_graphic_popup_pane

0xa9e3,	// (0x0006604a) listscroll_popup_gms_pane_g1

0xa9eb,	// (0x00066052) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0006a9f8) listscroll_popup_gms_pane_g

0xa3fb,	// (0x00065a62) scroll_pane_cp014

0x2b40,	// (0x0005e1a7) cell_large_graphic_popup_pane_ParamLimits

0x2b40,	// (0x0005e1a7) cell_large_graphic_popup_pane

0x2b58,	// (0x0005e1bf) cell_large_graphic_popup_pane_g1_ParamLimits

0x2b58,	// (0x0005e1bf) cell_large_graphic_popup_pane_g1

0xa9f3,	// (0x0006605a) cell_large_graphic_popup_pane_g2_ParamLimits

0xa9f3,	// (0x0006605a) cell_large_graphic_popup_pane_g2

0xa9ff,	// (0x00066066) cell_large_graphic_popup_pane_g3_ParamLimits

0xa9ff,	// (0x00066066) cell_large_graphic_popup_pane_g3

0xaa0c,	// (0x00066073) cell_large_graphic_popup_pane_g4_ParamLimits

0xaa0c,	// (0x00066073) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0006a9fd) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0006a9fd) cell_large_graphic_popup_pane_g

0xaa1c,	// (0x00066083) grid_highlight_pane_cp010

0xa058,	// (0x000656bf) bg_popup_call_pane_g1

0xaa26,	// (0x0006608d) list_single_graphic_popup_conf_pane_ParamLimits

0xaa26,	// (0x0006608d) list_single_graphic_popup_conf_pane

0xaa39,	// (0x000660a0) list_highlight_pane_cp01

0xaa42,	// (0x000660a9) list_single_graphic_popup_conf_pane_g1

0xaa4a,	// (0x000660b1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0006aa06) list_single_graphic_popup_conf_pane_g

0xaa52,	// (0x000660b9) list_single_graphic_popup_conf_pane_t1

0xaa60,	// (0x000660c7) linegrid_cams_pane_g1

0x2b64,	// (0x0005e1cb) linegrid_cams_pane_g2

0xa1cc,	// (0x00065833) linegrid_cams_pane_g3

0xaa69,	// (0x000660d0) linegrid_cams_pane_g4

0x2b6d,	// (0x0005e1d4) linegrid_cams_pane_g5

0x2b76,	// (0x0005e1dd) linegrid_cams_pane_g6

0xa1d5,	// (0x0006583c) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0006aa0b) linegrid_cams_pane_g

0xaa72,	// (0x000660d9) popup_clock_analogue_window

0xaa72,	// (0x000660d9) popup_clock_digital_window

0x9c85,	// (0x000652ec) popup_phob_thumbnail_window

0xa058,	// (0x000656bf) call_video_uplink_pane_g1

0xaa7b,	// (0x000660e2) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0006aa1a) call_video_uplink_pane_g

0xaa83,	// (0x000660ea) video_uplink_pane

0xaa8b,	// (0x000660f2) mce_image_pane_g1

0x2b81,	// (0x0005e1e8) mce_image_pane_g2

0x2b8b,	// (0x0005e1f2) mce_image_pane_g3

0x2b93,	// (0x0005e1fa) mce_image_pane_g4

0x2b9b,	// (0x0005e202) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0006aa1f) mce_image_pane_g

0xaa95,	// (0x000660fc) control_top_pane_stacon_cp01_ParamLimits

0xaa95,	// (0x000660fc) control_top_pane_stacon_cp01

0xaaa9,	// (0x00066110) uni_indicator_pane_stacon_cp01_ParamLimits

0xaaa9,	// (0x00066110) uni_indicator_pane_stacon_cp01

0xaaba,	// (0x00066121) bg_popup_sub_pane_cp03

0x2ba3,	// (0x0005e20a) chi_dic_find_pane

0x2bab,	// (0x0005e212) listscroll_chi_dic_pane

0x2bb4,	// (0x0005e21b) main_pane_chidic_g1

0xaac4,	// (0x0006612b) chi_dic_find_pane_t1

0xaad2,	// (0x00066139) find_chidic_pane

0xaadb,	// (0x00066142) chi_dic_list_pane_ParamLimits

0xaadb,	// (0x00066142) chi_dic_list_pane

0xaaec,	// (0x00066153) scroll_pane_cp020

0xaaf4,	// (0x0006615b) find_chidic_pane_t1

0x9c85,	// (0x000652ec) input_focus_pane_cp06

0x2bc7,	// (0x0005e22e) list_chi_dic_pane_ParamLimits

0x2bc7,	// (0x0005e22e) list_chi_dic_pane

0x2bd9,	// (0x0005e240) list_chi_dic_pane_t1_ParamLimits

0x2bd9,	// (0x0005e240) list_chi_dic_pane_t1

0x9c85,	// (0x000652ec) list_highlight_pane_cp020

0xab03,	// (0x0006616a) bg_cale_heading_pane_g1

0x2bec,	// (0x0005e253) bg_cale_heading_pane_g2

0x2bf4,	// (0x0005e25b) bg_cale_heading_pane_g3

0x2bfc,	// (0x0005e263) bg_cale_heading_pane_g4

0x2c06,	// (0x0005e26d) bg_cale_heading_pane_g5

0x2c10,	// (0x0005e277) bg_cale_heading_pane_g6

0x2c18,	// (0x0005e27f) bg_cale_heading_pane_g7

0x2c20,	// (0x0005e287) bg_cale_heading_pane_g8

0x2c2a,	// (0x0005e291) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0006aa2a) bg_cale_heading_pane_g

0xab03,	// (0x0006616a) bg_cale_side_pane_g1

0x2c34,	// (0x0005e29b) bg_cale_side_pane_g2

0x2c3c,	// (0x0005e2a3) bg_cale_side_pane_g3

0x2c44,	// (0x0005e2ab) bg_cale_side_pane_g4

0x2c4c,	// (0x0005e2b3) bg_cale_side_pane_g5

0x2c54,	// (0x0005e2bb) bg_cale_side_pane_g6

0x2c5c,	// (0x0005e2c3) bg_cale_side_pane_g7

0x2c64,	// (0x0005e2cb) bg_cale_side_pane_g8

0x2c6c,	// (0x0005e2d3) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0006aa3d) bg_cale_side_pane_g

0x2c74,	// (0x0005e2db) popup_call_status_window_ParamLimits

0x2c74,	// (0x0005e2db) popup_call_status_window

0xab0b,	// (0x00066172) stacon_top_pane

0xab13,	// (0x0006617a) status_pane_ParamLimits

0xab13,	// (0x0006617a) status_pane

0xab28,	// (0x0006618f) status_small_pane

0xab30,	// (0x00066197) control_pane

0x9c85,	// (0x000652ec) stacon_bottom_pane

0xab38,	// (0x0006619f) list_single_mce_smart_pane_t1_ParamLimits

0xab38,	// (0x0006619f) list_single_mce_smart_pane_t1

0xab4b,	// (0x000661b2) list_single_mce_smart_pane_t2_ParamLimits

0xab4b,	// (0x000661b2) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0006aa50) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0006aa50) list_single_mce_smart_pane_t

0x2cbd,	// (0x0005e324) compass_pane

0x2cc6,	// (0x0005e32d) main_location2_pane_t1

0x2cd8,	// (0x0005e33f) main_location2_pane_t2

0x2cea,	// (0x0005e351) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0006aa55) main_location2_pane_t

0xab6a,	// (0x000661d1) compass_pane_g1_ParamLimits

0xab6a,	// (0x000661d1) compass_pane_g1

0x2d2e,	// (0x0005e395) compass_pane_t1

0x2d3d,	// (0x0005e3a4) compass_pane_t2

0x0005,

0xf3f7,	// (0x0006aa5e) compass_pane_t

0x2d84,	// (0x0005e3eb) text_secondary_cp61

0xab7e,	// (0x000661e5) navi_pane_cams_g5

0xaba1,	// (0x00066208) navi_pane_im_t1

0xabaf,	// (0x00066216) navi_pane_mp_g1_ParamLimits

0xabaf,	// (0x00066216) navi_pane_mp_g1

0xabc3,	// (0x0006622a) navi_pane_mp_g2_ParamLimits

0xabc3,	// (0x0006622a) navi_pane_mp_g2

0xabcf,	// (0x00066236) navi_pane_mp_g3_ParamLimits

0xabcf,	// (0x00066236) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0006aa72) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0006aa72) navi_pane_mp_g

0xabdb,	// (0x00066242) navi_pane_mp_t1

0xabe9,	// (0x00066250) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0006aa79) navi_pane_mp_t

0xac25,	// (0x0006628c) navi_pane_vt_g1

0xabdb,	// (0x00066242) navi_pane_vt_t1

0xac2d,	// (0x00066294) navi_slider_pane

0xac35,	// (0x0006629c) zooming_pane

0xac3d,	// (0x000662a4) navi_slider_pane_g1

0xac46,	// (0x000662ad) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0006aa80) navi_slider_pane_g

0xac73,	// (0x000662da) aid_levels_zoom

0xac7b,	// (0x000662e2) zooming_pane_g1

0xac83,	// (0x000662ea) zooming_pane_g2

0xac83,	// (0x000662ea) zooming_pane_g3

0x0002,

0xf428,	// (0x0006aa8f) zooming_pane_g

0xac8b,	// (0x000662f2) level_10_zoom

0xac94,	// (0x000662fb) level_11_zoom

0xac9d,	// (0x00066304) level_1_zoom

0xaca6,	// (0x0006630d) level_2_zoom

0xacaf,	// (0x00066316) level_3_zoom

0xacb8,	// (0x0006631f) level_4_zoom

0xacc1,	// (0x00066328) level_5_zoom

0xacca,	// (0x00066331) level_6_zoom

0xacd3,	// (0x0006633a) level_7_zoom

0xacdc,	// (0x00066343) level_8_zoom

0xace5,	// (0x0006634c) level_9_zoom

0xacf6,	// (0x0006635d) popup_phob_thumbnail_window_g1

0xacfe,	// (0x00066365) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0006aa96) popup_phob_thumbnail_window_g

0xc01e,	// (0x00067685) level_1_location

0xc026,	// (0x0006768d) level_2_location

0xc02e,	// (0x00067695) level_3_location

0xc036,	// (0x0006769d) level_4_location

0xac35,	// (0x0006629c) level_5_location

0x2ebf,	// (0x0005e526) mce_icon_pane_g1

0x2ec7,	// (0x0005e52e) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0006aa9b) mce_icon_pane_g

0x2ecf,	// (0x0005e536) main_mup_pane_g1_ParamLimits

0x2ecf,	// (0x0005e536) main_mup_pane_g1

0x2ee5,	// (0x0005e54c) main_mup_pane_g2_ParamLimits

0x2ee5,	// (0x0005e54c) main_mup_pane_g2

0x2efd,	// (0x0005e564) main_mup_pane_g3_ParamLimits

0x2efd,	// (0x0005e564) main_mup_pane_g3

0x2f15,	// (0x0005e57c) main_mup_pane_g4_ParamLimits

0x2f15,	// (0x0005e57c) main_mup_pane_g4

0x2f2d,	// (0x0005e594) main_mup_pane_g5_ParamLimits

0x2f2d,	// (0x0005e594) main_mup_pane_g5

0x2f49,	// (0x0005e5b0) main_mup_pane_g6_ParamLimits

0x2f49,	// (0x0005e5b0) main_mup_pane_g6

0x2f61,	// (0x0005e5c8) main_mup_pane_g7_ParamLimits

0x2f61,	// (0x0005e5c8) main_mup_pane_g7

0x2f79,	// (0x0005e5e0) main_mup_pane_g8_ParamLimits

0x2f79,	// (0x0005e5e0) main_mup_pane_g8

0x2f93,	// (0x0005e5fa) main_mup_pane_g9_ParamLimits

0x2f93,	// (0x0005e5fa) main_mup_pane_g9

0x2fad,	// (0x0005e614) main_mup_pane_g10_ParamLimits

0x2fad,	// (0x0005e614) main_mup_pane_g10

0x2fc7,	// (0x0005e62e) main_mup_pane_g11_ParamLimits

0x2fc7,	// (0x0005e62e) main_mup_pane_g11

0x2fdb,	// (0x0005e642) main_mup_pane_g12_ParamLimits

0x2fdb,	// (0x0005e642) main_mup_pane_g12

0x2ff1,	// (0x0005e658) main_mup_pane_g13_ParamLimits

0x2ff1,	// (0x0005e658) main_mup_pane_g13

0x000c,

0xf439,	// (0x0006aaa0) main_mup_pane_g_ParamLimits

0xf439,	// (0x0006aaa0) main_mup_pane_g

0x3005,	// (0x0005e66c) main_mup_pane_t1_ParamLimits

0x3005,	// (0x0005e66c) main_mup_pane_t1

0x301f,	// (0x0005e686) main_mup_pane_t2_ParamLimits

0x301f,	// (0x0005e686) main_mup_pane_t2

0x3037,	// (0x0005e69e) main_mup_pane_t3_ParamLimits

0x3037,	// (0x0005e69e) main_mup_pane_t3

0x304f,	// (0x0005e6b6) main_mup_pane_t4_ParamLimits

0x304f,	// (0x0005e6b6) main_mup_pane_t4

0x306d,	// (0x0005e6d4) main_mup_pane_t5_ParamLimits

0x306d,	// (0x0005e6d4) main_mup_pane_t5

0x3082,	// (0x0005e6e9) main_mup_pane_t6_ParamLimits

0x3082,	// (0x0005e6e9) main_mup_pane_t6

0x0005,

0xf454,	// (0x0006aabb) main_mup_pane_t_ParamLimits

0xf454,	// (0x0006aabb) main_mup_pane_t

0x3094,	// (0x0005e6fb) mup_progress_pane_ParamLimits

0x3094,	// (0x0005e6fb) mup_progress_pane

0x30a0,	// (0x0005e707) mup_visualizer_pane_ParamLimits

0x30a0,	// (0x0005e707) mup_visualizer_pane

0x30d0,	// (0x0005e737) mup_volume_pane_ParamLimits

0x30d0,	// (0x0005e737) mup_volume_pane

0xad06,	// (0x0006636d) mup_visualizer_pane_g1_ParamLimits

0xad06,	// (0x0006636d) mup_visualizer_pane_g1

0xad06,	// (0x0006636d) mup_visualizer_pane_g2_ParamLimits

0xad06,	// (0x0006636d) mup_visualizer_pane_g2

0xab6a,	// (0x000661d1) mup_visualizer_pane_g3_ParamLimits

0xab6a,	// (0x000661d1) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0006aac8) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0006aac8) mup_visualizer_pane_g

0xa058,	// (0x000656bf) mup_volume_pane_g1

0xad1c,	// (0x00066383) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0006aacf) mup_volume_pane_g

0xa058,	// (0x000656bf) mup_progress_pane_g1

0xad25,	// (0x0006638c) mup_progress_pane_g2

0xad2e,	// (0x00066395) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0006aad4) mup_progress_pane_g

0x9c85,	// (0x000652ec) bg_popup_window_pane_cp05

0xad37,	// (0x0006639e) heading_pane_cp02_ParamLimits

0xad37,	// (0x0006639e) heading_pane_cp02

0xad51,	// (0x000663b8) list_popup_blid_pane

0xad59,	// (0x000663c0) list_blid_sat_info_pane_ParamLimits

0xad59,	// (0x000663c0) list_blid_sat_info_pane

0xad6c,	// (0x000663d3) list_blid_sat_info_pane_g1

0xad74,	// (0x000663db) list_blid_sat_info_pane_t1

0x31e6,	// (0x0005e84d) mup_equalizer_pane_ParamLimits

0x31e6,	// (0x0005e84d) mup_equalizer_pane

0x31ff,	// (0x0005e866) mup_equalizer_pane_cp1_ParamLimits

0x31ff,	// (0x0005e866) mup_equalizer_pane_cp1

0x321c,	// (0x0005e883) mup_equalizer_pane_cp2_ParamLimits

0x321c,	// (0x0005e883) mup_equalizer_pane_cp2

0x3239,	// (0x0005e8a0) mup_equalizer_pane_cp3_ParamLimits

0x3239,	// (0x0005e8a0) mup_equalizer_pane_cp3

0x325a,	// (0x0005e8c1) mup_equalizer_pane_cp4_ParamLimits

0x325a,	// (0x0005e8c1) mup_equalizer_pane_cp4

0x327b,	// (0x0005e8e2) mup_equalizer_pane_cp5

0x328f,	// (0x0005e8f6) mup_equalizer_pane_cp6

0x32a3,	// (0x0005e90a) mup_equalizer_pane_cp7

0xbf3c,	// (0x000675a3) bg_popup_call_poc_act_pane_g9

0xbf44,	// (0x000675ab) bg_popup_call_poc_act_pane_g10

0xbf4c,	// (0x000675b3) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ee0,	// (0x00065547) mup_scale_pane

0xa058,	// (0x000656bf) mup_scale_pane_g1

0xad82,	// (0x000663e9) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0006aaf0) mup_scale_pane_g

0xada6,	// (0x0006640d) msg_data_pane

0xadae,	// (0x00066415) scroll_pane_cp017

0x32c9,	// (0x0005e930) bg_list_pane_cp04_ParamLimits

0x32c9,	// (0x0005e930) bg_list_pane_cp04

0xadb6,	// (0x0006641d) msg_data_pane_g1

0x32e9,	// (0x0005e950) msg_data_pane_g2

0x32f3,	// (0x0005e95a) msg_data_pane_g3

0x32fb,	// (0x0005e962) msg_data_pane_g4

0x3303,	// (0x0005e96a) msg_data_pane_g5

0x330b,	// (0x0005e972) msg_data_pane_g6

0x3313,	// (0x0005e97a) msg_data_pane_g7

0x0006,

0xf498,	// (0x0006aaff) msg_data_pane_g

0x331b,	// (0x0005e982) msg_text_pane_ParamLimits

0x331b,	// (0x0005e982) msg_text_pane

0x3340,	// (0x0005e9a7) qrid_highlight_pane_cp011_ParamLimits

0x3340,	// (0x0005e9a7) qrid_highlight_pane_cp011

0x9c85,	// (0x000652ec) msg_body_pane

0x9c85,	// (0x000652ec) msg_header_pane

0xadc7,	// (0x0006642e) input_focus_pane_cp07

0x3364,	// (0x0005e9cb) msg_header_pane_t1_ParamLimits

0x3364,	// (0x0005e9cb) msg_header_pane_t1

0x3378,	// (0x0005e9df) msg_header_pane_t2_ParamLimits

0x3378,	// (0x0005e9df) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0006ab13) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0006ab13) msg_header_pane_t

0xaddc,	// (0x00066443) msg_body_pane_g1

0x338a,	// (0x0005e9f1) msg_body_pane_t1_ParamLimits

0x338a,	// (0x0005e9f1) msg_body_pane_t1

0x33bb,	// (0x0005ea22) msg_body_pane_t2_ParamLimits

0x33bb,	// (0x0005ea22) msg_body_pane_t2

0x33cd,	// (0x0005ea34) msg_body_pane_t3_ParamLimits

0x33cd,	// (0x0005ea34) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0006ab18) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0006ab18) msg_body_pane_t

0x3419,	// (0x0005ea80) main_viewer_pane_g1_ParamLimits

0x3419,	// (0x0005ea80) main_viewer_pane_g1

0x3427,	// (0x0005ea8e) main_viewer_pane_g2_ParamLimits

0x3427,	// (0x0005ea8e) main_viewer_pane_g2

0x3435,	// (0x0005ea9c) main_viewer_pane_g3_ParamLimits

0x3435,	// (0x0005ea9c) main_viewer_pane_g3

0x3444,	// (0x0005eaab) main_viewer_pane_g4_ParamLimits

0x3444,	// (0x0005eaab) main_viewer_pane_g4

0xadfc,	// (0x00066463) main_viewer_pane_g5_ParamLimits

0xadfc,	// (0x00066463) main_viewer_pane_g5

0xadfc,	// (0x00066463) main_viewer_pane_g7_ParamLimits

0xadfc,	// (0x00066463) main_viewer_pane_g7

0xa77e,	// (0x00065de5) main_viewer_pane_g8_ParamLimits

0xa77e,	// (0x00065de5) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0006ab28) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0006ab28) main_viewer_pane_g

0xae1a,	// (0x00066481) viewer_content_pane_ParamLimits

0xae1a,	// (0x00066481) viewer_content_pane

0x3480,	// (0x0005eae7) main_postcard_pane_g1_ParamLimits

0x3480,	// (0x0005eae7) main_postcard_pane_g1

0x3496,	// (0x0005eafd) main_postcard_pane_g2_ParamLimits

0x3496,	// (0x0005eafd) main_postcard_pane_g2

0x34ac,	// (0x0005eb13) main_postcard_pane_g3_ParamLimits

0x34ac,	// (0x0005eb13) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0006ab39) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0006ab39) main_postcard_pane_g

0x34c3,	// (0x0005eb2a) main_postcard_pane_g4

0xc151,	// (0x000677b8) smil_status_volume_pane_g2

0x3506,	// (0x0005eb6d) postcard_pane_ParamLimits

0x3506,	// (0x0005eb6d) postcard_pane

0xae28,	// (0x0006648f) postcard_pane_g1_ParamLimits

0xae28,	// (0x0006648f) postcard_pane_g1

0x3548,	// (0x0005ebaf) postcard_pane_g2_ParamLimits

0x3548,	// (0x0005ebaf) postcard_pane_g2

0x3554,	// (0x0005ebbb) postcard_pane_g3_ParamLimits

0x3554,	// (0x0005ebbb) postcard_pane_g3

0xae36,	// (0x0006649d) postcard_pane_g4_ParamLimits

0xae36,	// (0x0006649d) postcard_pane_g4

0x3560,	// (0x0005ebc7) postcard_pane_g5_ParamLimits

0x3560,	// (0x0005ebc7) postcard_pane_g5

0x3575,	// (0x0005ebdc) postcard_pane_g6_ParamLimits

0x3575,	// (0x0005ebdc) postcard_pane_g6

0xae28,	// (0x0006648f) postcard_pane_g7_ParamLimits

0xae28,	// (0x0006648f) postcard_pane_g7

0x0006,

0xf4df,	// (0x0006ab46) postcard_pane_g_ParamLimits

0xf4df,	// (0x0006ab46) postcard_pane_g

0x3589,	// (0x0005ebf0) main_mp2_pane_g1_ParamLimits

0x3589,	// (0x0005ebf0) main_mp2_pane_g1

0x3595,	// (0x0005ebfc) main_mp2_pane_g2_ParamLimits

0x3595,	// (0x0005ebfc) main_mp2_pane_g2

0x35a1,	// (0x0005ec08) main_mp2_pane_g3_ParamLimits

0x35a1,	// (0x0005ec08) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0006ab55) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0006ab55) main_mp2_pane_g

0x35ad,	// (0x0005ec14) main_mp2_pane_t1_ParamLimits

0x35ad,	// (0x0005ec14) main_mp2_pane_t1

0x35c2,	// (0x0005ec29) main_mp2_pane_t2_ParamLimits

0x35c2,	// (0x0005ec29) main_mp2_pane_t2

0x35d4,	// (0x0005ec3b) main_mp2_pane_t3_ParamLimits

0x35d4,	// (0x0005ec3b) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0006ab5c) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0006ab5c) main_mp2_pane_t

0xae44,	// (0x000664ab) pec_content_pane_ParamLimits

0xae44,	// (0x000664ab) pec_content_pane

0xa3fb,	// (0x00065a62) scroll_pane_cp015

0xae56,	// (0x000664bd) pec_attribute_pane_ParamLimits

0xae56,	// (0x000664bd) pec_attribute_pane

0x35e6,	// (0x0005ec4d) pec_content_pane_g1_ParamLimits

0x35e6,	// (0x0005ec4d) pec_content_pane_g1

0xae66,	// (0x000664cd) pec_content_pane_t1_ParamLimits

0xae66,	// (0x000664cd) pec_content_pane_t1

0xae78,	// (0x000664df) pec_content_pane_t2_ParamLimits

0xae78,	// (0x000664df) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0006ab63) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0006ab63) pec_content_pane_t

0x35f2,	// (0x0005ec59) list_single_graphic_pane_cp01_ParamLimits

0x35f2,	// (0x0005ec59) list_single_graphic_pane_cp01

0x9ee0,	// (0x00065547) bg_popup_sub_pane_cp04

0xae8a,	// (0x000664f1) popup_mup_playback_window_g1

0xae96,	// (0x000664fd) popup_mup_playback_window_t1

0xaeab,	// (0x00066512) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0006ab68) popup_mup_playback_window_t

0xaee2,	// (0x00066549) main_image_pane_g1_ParamLimits

0xaee2,	// (0x00066549) main_image_pane_g1

0xaf25,	// (0x0006658c) scroll_pane_cp018_ParamLimits

0xaf25,	// (0x0006658c) scroll_pane_cp018

0xaf3d,	// (0x000665a4) scroll_pane_cp016_ParamLimits

0xaf3d,	// (0x000665a4) scroll_pane_cp016

0x36bf,	// (0x0005ed26) smil2_image_pane_ParamLimits

0x36bf,	// (0x0005ed26) smil2_image_pane

0x36ef,	// (0x0005ed56) smil2_root_pane_ParamLimits

0x36ef,	// (0x0005ed56) smil2_root_pane

0x3727,	// (0x0005ed8e) smil2_text_pane_ParamLimits

0x3727,	// (0x0005ed8e) smil2_text_pane

0x9c85,	// (0x000652ec) bg_list_pane_cp06

0xaf79,	// (0x000665e0) grid_radio_pane

0x9c85,	// (0x000652ec) bg_popup_window_pane_cp06

0xaf81,	// (0x000665e8) main_fmradio_pane_t1

0xa9c9,	// (0x00066030) heading_pane_cp04

0xaf8f,	// (0x000665f6) main_fmradio_pane_t2

0xbf54,	// (0x000675bb) popup_cale_lunar_info_window_g1

0xaf9d,	// (0x00066604) main_fmradio_pane_t3

0xbf5c,	// (0x000675c3) popup_cale_lunar_info_window_g2

0xafab,	// (0x00066612) main_fmradio_pane_t4

0x0001,

0xafb9,	// (0x00066620) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0006ac43) popup_cale_lunar_info_window_g

0xf516,	// (0x0006ab7d) main_fmradio_pane_t

0xafc7,	// (0x0006662e) wait_bar_pane_cp03

0xafcf,	// (0x00066636) cell_fmradio_pane_ParamLimits

0xafcf,	// (0x00066636) cell_fmradio_pane

0xae28,	// (0x0006648f) cell_fmradio_pane_g1_ParamLimits

0xae28,	// (0x0006648f) cell_fmradio_pane_g1

0x9c85,	// (0x000652ec) grid_highlight_pane_cp011

0xafe2,	// (0x00066649) poc_content_pane_ParamLimits

0xafe2,	// (0x00066649) poc_content_pane

0xaff4,	// (0x0006665b) scroll_pane_cp019

0x37a7,	// (0x0005ee0e) popup_call_poc_act_window_ParamLimits

0x37a7,	// (0x0005ee0e) popup_call_poc_act_window

0x37cb,	// (0x0005ee32) popup_call_poc_inact_window_ParamLimits

0x37cb,	// (0x0005ee32) popup_call_poc_inact_window

0xf5b3,	// (0x0006ac1a) bg_popup_call_poc_act_pane_g

0xbecc,	// (0x00067533) bg_popup_call_poc_inact_pane_g1

0xbed4,	// (0x0006753b) bg_popup_call_poc_inact_pane_g2

0xaffc,	// (0x00066663) popup_call_poc_act_window_g2

0xbedc,	// (0x00067543) bg_popup_call_poc_inact_pane_g3

0xbee4,	// (0x0006754b) bg_popup_call_poc_inact_pane_g4

0xbeec,	// (0x00067553) bg_popup_call_poc_inact_pane_g5

0xb004,	// (0x0006666b) popup_call_poc_act_window_t1_ParamLimits

0xb004,	// (0x0006666b) popup_call_poc_act_window_t1

0xb02c,	// (0x00066693) popup_call_poc_act_window_t2_ParamLimits

0xb02c,	// (0x00066693) popup_call_poc_act_window_t2

0xb054,	// (0x000666bb) popup_call_poc_act_window_t3_ParamLimits

0xb054,	// (0x000666bb) popup_call_poc_act_window_t3

0xb07c,	// (0x000666e3) popup_call_poc_act_window_t4_ParamLimits

0xb07c,	// (0x000666e3) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0006ab88) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0006ab88) popup_call_poc_act_window_t

0xbef4,	// (0x0006755b) bg_popup_call_poc_inact_pane_g6

0xbefc,	// (0x00067563) bg_popup_call_poc_inact_pane_g7

0xbf04,	// (0x0006756b) bg_popup_call_poc_inact_pane_g8

0xb08e,	// (0x000666f5) popup_call_poc_inact_window_g2

0xbf0c,	// (0x00067573) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0006ac07) bg_popup_call_poc_inact_pane_g

0xb096,	// (0x000666fd) popup_call_poc_inact_window_t1_ParamLimits

0xb096,	// (0x000666fd) popup_call_poc_inact_window_t1

0xb0ab,	// (0x00066712) popup_call_poc_inact_window_t2_ParamLimits

0xb0ab,	// (0x00066712) popup_call_poc_inact_window_t2

0xb0c0,	// (0x00066727) popup_call_poc_inact_window_t3_ParamLimits

0xb0c0,	// (0x00066727) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0006ab91) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0006ab91) popup_call_poc_inact_window_t

0xc0c4,	// (0x0006772b) context_pane_ParamLimits

0x3ffe,	// (0x0005f665) signal_pane_ParamLimits

0xac35,	// (0x0006629c) main_call2_pane

0xc0b2,	// (0x00067719) popup_phob_thumbnail2_window_ParamLimits

0xc0b2,	// (0x00067719) popup_phob_thumbnail2_window

0xade4,	// (0x0006644b) aid_hotspot_pointer_arrow_pane

0xadec,	// (0x00066453) aid_hotspot_pointer_hand_pane

0x3b14,	// (0x0005f17b) phob_pre_status_pane_g5

0x183e,	// (0x0005cea5) cams_zoom_pane_ParamLimits

0x184d,	// (0x0005ceb4) image_vga_pane_ParamLimits

0x1867,	// (0x0005cece) main_camera_pane_g1_ParamLimits

0x1879,	// (0x0005cee0) main_camera_pane_g2_ParamLimits

0x1889,	// (0x0005cef0) main_camera_pane_g3_ParamLimits

0x1899,	// (0x0005cf00) main_camera_pane_g4_ParamLimits

0x18a9,	// (0x0005cf10) main_camera_pane_g5_ParamLimits

0x18b9,	// (0x0005cf20) main_camera_pane_g6_ParamLimits

0x18cb,	// (0x0005cf32) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0006a890) main_camera_pane_g_ParamLimits

0x18db,	// (0x0005cf42) main_camera_pane_t1_ParamLimits

0x18f1,	// (0x0005cf58) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0006a8a1) main_camera_pane_t_ParamLimits

0x9ee0,	// (0x00065547) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ee0,	// (0x00065547) bg_popup_preview_window_pane_cp01

0xb0d5,	// (0x0006673c) popup_phob_thumbnail2_window_g1_ParamLimits

0xb0d5,	// (0x0006673c) popup_phob_thumbnail2_window_g1

0x9c85,	// (0x000652ec) call2_cli_visual_pane

0x37ff,	// (0x0005ee66) popup_call2_audio_conf_window_ParamLimits

0x37ff,	// (0x0005ee66) popup_call2_audio_conf_window

0x381f,	// (0x0005ee86) popup_call2_audio_first_window_ParamLimits

0x381f,	// (0x0005ee86) popup_call2_audio_first_window

0x38b5,	// (0x0005ef1c) popup_call2_audio_in_window_ParamLimits

0x38b5,	// (0x0005ef1c) popup_call2_audio_in_window

0x38fd,	// (0x0005ef64) popup_call2_audio_out_window_ParamLimits

0x38fd,	// (0x0005ef64) popup_call2_audio_out_window

0x3967,	// (0x0005efce) popup_call2_audio_second_window_ParamLimits

0x3967,	// (0x0005efce) popup_call2_audio_second_window

0x39cd,	// (0x0005f034) popup_call2_audio_wait_window_ParamLimits

0x39cd,	// (0x0005f034) popup_call2_audio_wait_window

0x9c85,	// (0x000652ec) bg_popup_call2_act_pane_cp03

0x9ec2,	// (0x00065529) list_conf_pane_cp

0xb0e1,	// (0x00066748) popup_call2_audio_conf_window_t1

0xaa26,	// (0x0006608d) list_single_graphic_popup_conf2_pane_ParamLimits

0xaa26,	// (0x0006608d) list_single_graphic_popup_conf2_pane

0xaa39,	// (0x000660a0) list_highlight_pane_cp04

0xb0ef,	// (0x00066756) list_single_graphic_popup_conf2_pane_g1

0xaa4a,	// (0x000660b1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0006ab98) list_single_graphic_popup_conf2_pane_g

0xb0f9,	// (0x00066760) list_single_graphic_popup_conf2_pane_t1

0xb107,	// (0x0006676e) bg_popup_call2_act_pane_cp01_ParamLimits

0xb107,	// (0x0006676e) bg_popup_call2_act_pane_cp01

0xb191,	// (0x000667f8) call_type_pane_cp05_ParamLimits

0xb191,	// (0x000667f8) call_type_pane_cp05

0xb1e5,	// (0x0006684c) popup_call2_audio_second_window_g1_ParamLimits

0xb1e5,	// (0x0006684c) popup_call2_audio_second_window_g1

0xb239,	// (0x000668a0) popup_call2_audio_second_window_g2_ParamLimits

0xb239,	// (0x000668a0) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0006ab9d) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0006ab9d) popup_call2_audio_second_window_g

0xb29e,	// (0x00066905) popup_call2_audio_second_window_t1_ParamLimits

0xb29e,	// (0x00066905) popup_call2_audio_second_window_t1

0xb359,	// (0x000669c0) popup_call2_audio_second_window_t2_ParamLimits

0xb359,	// (0x000669c0) popup_call2_audio_second_window_t2

0xb3ac,	// (0x00066a13) popup_call2_audio_second_window_t3_ParamLimits

0xb3ac,	// (0x00066a13) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0006aba4) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0006aba4) popup_call2_audio_second_window_t

0x9c85,	// (0x000652ec) bg_popup_call2_in_pane_cp02

0x9c8f,	// (0x000652f6) call_type_pane_cp04

0x9c97,	// (0x000652fe) popup_call2_audio_wait_window_g1

0x9c9f,	// (0x00065306) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0006a77d) popup_call2_audio_wait_window_g

0x9ca7,	// (0x0006530e) popup_call2_audio_wait_window_t3

0xb49f,	// (0x00066b06) bg_popup_call2_act_pane_ParamLimits

0xb49f,	// (0x00066b06) bg_popup_call2_act_pane

0xb55f,	// (0x00066bc6) call_type_pane_cp03_ParamLimits

0xb55f,	// (0x00066bc6) call_type_pane_cp03

0xb5c3,	// (0x00066c2a) popup_call2_audio_first_window_g1_ParamLimits

0xb5c3,	// (0x00066c2a) popup_call2_audio_first_window_g1

0xb633,	// (0x00066c9a) popup_call2_audio_first_window_g2_ParamLimits

0xb633,	// (0x00066c9a) popup_call2_audio_first_window_g2

0xad06,	// (0x0006636d) popup_call2_audio_first_window_g3_ParamLimits

0xad06,	// (0x0006636d) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0006abad) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0006abad) popup_call2_audio_first_window_g

0xb711,	// (0x00066d78) popup_call2_audio_first_window_t1_ParamLimits

0xb711,	// (0x00066d78) popup_call2_audio_first_window_t1

0xb814,	// (0x00066e7b) popup_call2_audio_first_window_t4_ParamLimits

0xb814,	// (0x00066e7b) popup_call2_audio_first_window_t4

0xb8f7,	// (0x00066f5e) popup_call2_audio_first_window_t5_ParamLimits

0xb8f7,	// (0x00066f5e) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0006abb8) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0006abb8) popup_call2_audio_first_window_t

0x9ed8,	// (0x0006553f) bg_popup_call2_act_pane_g1

0xbf64,	// (0x000675cb) popup_cale_lunar_info_window_t1

0xbf72,	// (0x000675d9) popup_cale_lunar_info_window_t2

0xbf80,	// (0x000675e7) popup_cale_lunar_info_window_t3

0x9c85,	// (0x000652ec) bg_popup_call2_bubble_pane

0xb9f8,	// (0x0006705f) bg_popup_call2_in_pane_cp01_ParamLimits

0xb9f8,	// (0x0006705f) bg_popup_call2_in_pane_cp01

0x9961,	// (0x00064fc8) call_type_pane_cp02

0xba40,	// (0x000670a7) popup_call2_audio_out_window_g1_ParamLimits

0xba40,	// (0x000670a7) popup_call2_audio_out_window_g1

0xba6c,	// (0x000670d3) popup_call2_audio_out_window_g2_ParamLimits

0xba6c,	// (0x000670d3) popup_call2_audio_out_window_g2

0xba94,	// (0x000670fb) popup_call2_audio_out_window_g3_ParamLimits

0xba94,	// (0x000670fb) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0006abc1) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0006abc1) popup_call2_audio_out_window_g

0xbacf,	// (0x00067136) popup_call2_audio_out_window_t1_ParamLimits

0xbacf,	// (0x00067136) popup_call2_audio_out_window_t1

0xbb2e,	// (0x00067195) popup_call2_audio_out_window_t2_ParamLimits

0xbb2e,	// (0x00067195) popup_call2_audio_out_window_t2

0xbb82,	// (0x000671e9) popup_call2_audio_out_window_t3_ParamLimits

0xbb82,	// (0x000671e9) popup_call2_audio_out_window_t3

0xbb98,	// (0x000671ff) popup_call2_audio_out_window_t4_ParamLimits

0xbb98,	// (0x000671ff) popup_call2_audio_out_window_t4

0xbbae,	// (0x00067215) popup_call2_audio_out_window_t5_ParamLimits

0xbbae,	// (0x00067215) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0006abca) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0006abca) popup_call2_audio_out_window_t

0xbc12,	// (0x00067279) bg_popup_call2_in_pane_ParamLimits

0xbc12,	// (0x00067279) bg_popup_call2_in_pane

0xbc6e,	// (0x000672d5) popup_call2_audio_in_window_g1_ParamLimits

0xbc6e,	// (0x000672d5) popup_call2_audio_in_window_g1

0xbca6,	// (0x0006730d) popup_call2_audio_in_window_g2_ParamLimits

0xbca6,	// (0x0006730d) popup_call2_audio_in_window_g2

0xbcde,	// (0x00067345) popup_call2_audio_in_window_g3_ParamLimits

0xbcde,	// (0x00067345) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0006abd7) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0006abd7) popup_call2_audio_in_window_g

0xbd36,	// (0x0006739d) popup_call2_audio_in_window_t1_ParamLimits

0xbd36,	// (0x0006739d) popup_call2_audio_in_window_t1

0xbdb6,	// (0x0006741d) popup_call2_audio_in_window_t2_ParamLimits

0xbdb6,	// (0x0006741d) popup_call2_audio_in_window_t2

0xbe36,	// (0x0006749d) popup_call2_audio_in_window_t3_ParamLimits

0xbe36,	// (0x0006749d) popup_call2_audio_in_window_t3

0xbe50,	// (0x000674b7) popup_call2_audio_in_window_t4_ParamLimits

0xbe50,	// (0x000674b7) popup_call2_audio_in_window_t4

0xbe62,	// (0x000674c9) popup_call2_audio_in_window_t5_ParamLimits

0xbe62,	// (0x000674c9) popup_call2_audio_in_window_t5

0xbe77,	// (0x000674de) popup_call2_audio_in_window_t6_ParamLimits

0xbe77,	// (0x000674de) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0006abe0) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0006abe0) popup_call2_audio_in_window_t

0x9ed8,	// (0x0006553f) bg_popup_call2_in_pane_g1

0xbf8e,	// (0x000675f5) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0006ac48) popup_cale_lunar_info_window_t

0x9ee0,	// (0x00065547) bg_popup_call2_rect_pane_ParamLimits

0x9ee0,	// (0x00065547) bg_popup_call2_rect_pane

0x9c85,	// (0x000652ec) call2_cli_visual_graphic_pane

0x9c85,	// (0x000652ec) call2_cli_visual_text_pane

0xc164,	// (0x000677cb) smil_status_volume_pane_g3

0x0002,

0xa058,	// (0x000656bf) call2_cli_visual_graphic_pane_g1

0xa058,	// (0x000656bf) call2_cli_visual_graphic_pane_g2

0xa058,	// (0x000656bf) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0006abed) call2_cli_visual_graphic_pane_g

0xbe8c,	// (0x000674f3) bg_popup_call2_rect_pane_g1

0xa0e4,	// (0x0006574b) bg_popup_call2_rect_pane_g2

0xbe94,	// (0x000674fb) bg_popup_call2_rect_pane_g3

0xbe9c,	// (0x00067503) bg_popup_call2_rect_pane_g4

0xbea4,	// (0x0006750b) bg_popup_call2_rect_pane_g5

0xbeac,	// (0x00067513) bg_popup_call2_rect_pane_g6

0xbeb4,	// (0x0006751b) bg_popup_call2_rect_pane_g7

0xbebc,	// (0x00067523) bg_popup_call2_rect_pane_g8

0xbec4,	// (0x0006752b) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0006abf4) bg_popup_call2_rect_pane_g

0xbecc,	// (0x00067533) bg_popup_call2_bubble_pane_g1

0xbed4,	// (0x0006753b) bg_popup_call2_bubble_pane_g2

0xbedc,	// (0x00067543) bg_popup_call2_bubble_pane_g3

0xbee4,	// (0x0006754b) bg_popup_call2_bubble_pane_g4

0xbeec,	// (0x00067553) bg_popup_call2_bubble_pane_g5

0xbef4,	// (0x0006755b) bg_popup_call2_bubble_pane_g6

0xbefc,	// (0x00067563) bg_popup_call2_bubble_pane_g7

0xbf04,	// (0x0006756b) bg_popup_call2_bubble_pane_g8

0xbf0c,	// (0x00067573) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0006ac07) bg_popup_call2_bubble_pane_g

0x13eb,	// (0x0005ca52) aid_cale_week_size_cell_pane

0x1907,	// (0x0005cf6e) aid_cams_cif_uncrop_pane_ParamLimits

0x1907,	// (0x0005cf6e) aid_cams_cif_uncrop_pane

0x1abc,	// (0x0005d123) aid_cams_size_cell_ParamLimits

0x1abc,	// (0x0005d123) aid_cams_size_cell

0x1ad0,	// (0x0005d137) grid_cams_pane_ParamLimits

0x1aea,	// (0x0005d151) linegrid_cams_pane_ParamLimits

0x1cca,	// (0x0005d331) call_video_pane_t1

0x1ce8,	// (0x0005d34f) call_video_pane_t2

0x0001,

0xf28d,	// (0x0006a8f4) call_video_pane_t

0x2114,	// (0x0005d77b) aid_cale_month_size_cell_pane_ParamLimits

0x2114,	// (0x0005d77b) aid_cale_month_size_cell_pane

0xf62a,	// (0x0006ac91) smil_status_volume_pane_g

0xc171,	// (0x000677d8) volume_smil_pane_ParamLimits

0x0c4a,	// (0x0005c2b1) aid_popup2_width_pane

0x134d,	// (0x0005c9b4) cell_qdial_pane_g4_ParamLimits

0x134d,	// (0x0005c9b4) cell_qdial_pane_g4

0x2d0e,	// (0x0005e375) aid_blid_cardinal_pane_ParamLimits

0x2d1a,	// (0x0005e381) aid_blid_destination_pane_ParamLimits

0x2d1a,	// (0x0005e381) aid_blid_destination_pane

0x9ee0,	// (0x00065547) bg_popup_call_poc_act_pane_ParamLimits

0x9ee0,	// (0x00065547) bg_popup_call_poc_act_pane

0x9ee0,	// (0x00065547) bg_popup_call_poc_inact_pane_ParamLimits

0x9ee0,	// (0x00065547) bg_popup_call_poc_inact_pane

0xbf14,	// (0x0006757b) bg_popup_call_poc_act_pane_g1

0xbf1c,	// (0x00067583) bg_popup_call_poc_act_pane_g2

0xbf24,	// (0x0006758b) bg_popup_call_poc_act_pane_g3

0xbee4,	// (0x0006754b) bg_popup_call_poc_act_pane_g4

0xbeec,	// (0x00067553) bg_popup_call_poc_act_pane_g5

0xbf2c,	// (0x00067593) bg_popup_call_poc_act_pane_g6

0xbefc,	// (0x00067563) bg_popup_call_poc_act_pane_g7

0xbf34,	// (0x0006759b) bg_popup_call_poc_act_pane_g8

0x9c85,	// (0x000652ec) main_usb_pane

0xc08d,	// (0x000676f4) popup_cale_lunar_info_window

0x1fc0,	// (0x0005d627) im_reading_pane_t1_ParamLimits

0xa353,	// (0x000659ba) list_im_pane_ParamLimits

0xa364,	// (0x000659cb) scroll_pane_cp07_ParamLimits

0x9c85,	// (0x000652ec) grid_highlight_pane_cp012

0x9ee0,	// (0x00065547) mup_scale_pane_ParamLimits

0xae28,	// (0x0006648f) main_usb_pane_g1_ParamLimits

0xae28,	// (0x0006648f) main_usb_pane_g1

0x3a29,	// (0x0005f090) main_usb_pane_g2_ParamLimits

0x3a29,	// (0x0005f090) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0006ac31) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0006ac31) main_usb_pane_g

0x3a3f,	// (0x0005f0a6) main_usb_pane_t1_ParamLimits

0x3a3f,	// (0x0005f0a6) main_usb_pane_t1

0x3a51,	// (0x0005f0b8) main_usb_pane_t2_ParamLimits

0x3a51,	// (0x0005f0b8) main_usb_pane_t2

0x3a63,	// (0x0005f0ca) main_usb_pane_t3_ParamLimits

0x3a63,	// (0x0005f0ca) main_usb_pane_t3

0x3a75,	// (0x0005f0dc) main_usb_pane_t4_ParamLimits

0x3a75,	// (0x0005f0dc) main_usb_pane_t4

0x3a87,	// (0x0005f0ee) main_usb_pane_t5_ParamLimits

0x3a87,	// (0x0005f0ee) main_usb_pane_t5

0x3a99,	// (0x0005f100) main_usb_pane_t6_ParamLimits

0x3a99,	// (0x0005f100) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0006ac36) main_usb_pane_t_ParamLimits

0x2cbd,	// (0x0005e324) aid_text_placing

0x2cc6,	// (0x0005e32d) main_location2_pane_t1_ParamLimits

0x2cd8,	// (0x0005e33f) main_location2_pane_t2_ParamLimits

0x2cea,	// (0x0005e351) main_location2_pane_t3_ParamLimits

0x2cfc,	// (0x0005e363) main_location2_pane_t4_ParamLimits

0x2cfc,	// (0x0005e363) main_location2_pane_t4

0xf3ee,	// (0x0006aa55) main_location2_pane_t_ParamLimits

0x9f1c,	// (0x00065583) find_pinb_pane_g2_ParamLimits

0x9f1c,	// (0x00065583) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0006a7a3) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0006a7a3) find_pinb_pane_g

0x9f28,	// (0x0006558f) find_pinb_pane_t1_ParamLimits

0x9f3a,	// (0x000655a1) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0006a7a8) find_pinb_pane_t_ParamLimits

0x9c85,	// (0x000652ec) main_call3_pane

0x2478,	// (0x0005dadf) cale_month_day_heading_pane_t1_ParamLimits

0x24d6,	// (0x0005db3d) cale_month_day_heading_pane_t2_ParamLimits

0x253b,	// (0x0005dba2) cale_month_day_heading_pane_t3_ParamLimits

0x25a0,	// (0x0005dc07) cale_month_day_heading_pane_t4_ParamLimits

0x2605,	// (0x0005dc6c) cale_month_day_heading_pane_t5_ParamLimits

0x267a,	// (0x0005dce1) cale_month_day_heading_pane_t6_ParamLimits

0x26ef,	// (0x0005dd56) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0006a92c) cale_month_day_heading_pane_t_ParamLimits

0xa5b0,	// (0x00065c17) smil_status_volume_pane

0x3524,	// (0x0005eb8b) postcard_address_pane_ParamLimits

0x3524,	// (0x0005eb8b) postcard_address_pane

0x3536,	// (0x0005eb9d) postcard_message_pane_ParamLimits

0x3536,	// (0x0005eb9d) postcard_message_pane

0x3a07,	// (0x0005f06e) call2_cli_visual_pane_t1_ParamLimits

0x3a07,	// (0x0005f06e) call2_cli_visual_pane_t1

0x422b,	// (0x0005f892) postcard_message_pane_t1_ParamLimits

0x422b,	// (0x0005f892) postcard_message_pane_t1

0x4214,	// (0x0005f87b) postcard_address_pane_t1_ParamLimits

0x4214,	// (0x0005f87b) postcard_address_pane_t1

0x4200,	// (0x0005f867) popup_call3_audio_in_window_ParamLimits

0x4200,	// (0x0005f867) popup_call3_audio_in_window

0x408b,	// (0x0005f6f2) bg_popup_call3_in_pane_ParamLimits

0x408b,	// (0x0005f6f2) bg_popup_call3_in_pane

0x4101,	// (0x0005f768) popup_call3_audio_in_window_g1_ParamLimits

0x4101,	// (0x0005f768) popup_call3_audio_in_window_g1

0x4121,	// (0x0005f788) popup_call3_audio_in_window_g2_ParamLimits

0x4121,	// (0x0005f788) popup_call3_audio_in_window_g2

0x4141,	// (0x0005f7a8) popup_call3_audio_in_window_g3_ParamLimits

0x4141,	// (0x0005f7a8) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0006ac98) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0006ac98) popup_call3_audio_in_window_g

0x4172,	// (0x0005f7d9) popup_call3_audio_in_window_t1_ParamLimits

0x4172,	// (0x0005f7d9) popup_call3_audio_in_window_t1

0x41b0,	// (0x0005f817) popup_call3_audio_in_window_t2_ParamLimits

0x41b0,	// (0x0005f817) popup_call3_audio_in_window_t2

0x41ee,	// (0x0005f855) popup_call3_audio_in_window_t3_ParamLimits

0x41ee,	// (0x0005f855) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0006aca1) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0006aca1) popup_call3_audio_in_window_t

0xac35,	// (0x0006629c) bg_popup_call3_rect_pane

0xbe8c,	// (0x000674f3) bg_popup_call3_rect_pane_g1

0xa0e4,	// (0x0006574b) bg_popup_call3_rect_pane_g2

0xbe94,	// (0x000674fb) bg_popup_call3_rect_pane_g3

0xbe9c,	// (0x00067503) bg_popup_call3_rect_pane_g4

0xbea4,	// (0x0006750b) bg_popup_call3_rect_pane_g5

0xbeac,	// (0x00067513) bg_popup_call3_rect_pane_g6

0xbeb4,	// (0x0006751b) bg_popup_call3_rect_pane_g7

0x30e6,	// (0x0005e74d) mup_visualizer_osc_pane

0xad14,	// (0x0006637b) mup_visualizer_spec_pane

0x40bb,	// (0x0005f722) call3_video_qcif_pane_ParamLimits

0x40bb,	// (0x0005f722) call3_video_qcif_pane

0x40ce,	// (0x0005f735) call3_video_qcif_uncrop_pane_ParamLimits

0x40ce,	// (0x0005f735) call3_video_qcif_uncrop_pane

0x40dc,	// (0x0005f743) call3_video_subqcif_pane_ParamLimits

0x40dc,	// (0x0005f743) call3_video_subqcif_pane

0x40f0,	// (0x0005f757) call3_video_subqcif_uncrop_pane_ParamLimits

0x40f0,	// (0x0005f757) call3_video_subqcif_uncrop_pane

0x4161,	// (0x0005f7c8) popup_call3_audio_in_window_g4_ParamLimits

0x4161,	// (0x0005f7c8) popup_call3_audio_in_window_g4

0x407a,	// (0x0005f6e1) mup_spec_half_pane

0x4083,	// (0x0005f6ea) mup_spec_half_pane_cp

0xc124,	// (0x0006778b) mup_osc_middle_pane

0xc12d,	// (0x00067794) mup_visualizer_osc_pane_g1

0x405a,	// (0x0005f6c1) mup_spec_bar_pane_ParamLimits

0x405a,	// (0x0005f6c1) mup_spec_bar_pane

0xc111,	// (0x00067778) mup_spec_bar_pane_g1

0xc11b,	// (0x00067782) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0006ac8c) mup_spec_bar_pane_g

0x13eb,	// (0x0005ca52) aid_cale_week_size_cell_pane_ParamLimits

0x13fe,	// (0x0005ca65) bg_cale_heading_pane_ParamLimits

0xa160,	// (0x000657c7) bg_cale_pane_cp01_ParamLimits

0x1412,	// (0x0005ca79) cale_week_corner_pane_ParamLimits

0x1428,	// (0x0005ca8f) cale_week_day_heading_pane_ParamLimits

0x143c,	// (0x0005caa3) cale_week_scroll_pane_g1_ParamLimits

0x144d,	// (0x0005cab4) cale_week_scroll_pane_g2_ParamLimits

0x145e,	// (0x0005cac5) cale_week_scroll_pane_g3_ParamLimits

0x146f,	// (0x0005cad6) cale_week_scroll_pane_g4_ParamLimits

0x1480,	// (0x0005cae7) cale_week_scroll_pane_g5_ParamLimits

0x1493,	// (0x0005cafa) cale_week_scroll_pane_g6_ParamLimits

0x14a6,	// (0x0005cb0d) cale_week_scroll_pane_g7_ParamLimits

0x14b9,	// (0x0005cb20) cale_week_scroll_pane_g8_ParamLimits

0x14cc,	// (0x0005cb33) cale_week_scroll_pane_g9_ParamLimits

0x14dd,	// (0x0005cb44) cale_week_scroll_pane_g10_ParamLimits

0x14ee,	// (0x0005cb55) cale_week_scroll_pane_g11_ParamLimits

0x14ff,	// (0x0005cb66) cale_week_scroll_pane_g12_ParamLimits

0x1510,	// (0x0005cb77) cale_week_scroll_pane_g13_ParamLimits

0x1521,	// (0x0005cb88) cale_week_scroll_pane_g14_ParamLimits

0x1532,	// (0x0005cb99) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0006a834) cale_week_scroll_pane_g_ParamLimits

0x1543,	// (0x0005cbaa) cale_week_time_pane_ParamLimits

0x1556,	// (0x0005cbbd) grid_cale_week_pane_ParamLimits

0xa179,	// (0x000657e0) listscroll_cale_week_pane_t1

0x156b,	// (0x0005cbd2) scroll_pane_cp08_ParamLimits

0x2155,	// (0x0005d7bc) cale_month_corner_pane_ParamLimits

0xa57a,	// (0x00065be1) cale_month_pane_t1

0x2437,	// (0x0005da9e) cale_month_week_pane_ParamLimits

0x2b09,	// (0x0005e170) popup_call_status_window_g1_ParamLimits

0x2b1d,	// (0x0005e184) popup_call_status_window_g2_ParamLimits

0x2b31,	// (0x0005e198) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0006a9dc) popup_call_status_window_g_ParamLimits

0xa946,	// (0x00065fad) aid_call2_pane

0x3356,	// (0x0005e9bd) msg_header_pane_g1

0x3524,	// (0x0005eb8b) postcard_address2_pane_ParamLimits

0x3524,	// (0x0005eb8b) postcard_address2_pane

0x3536,	// (0x0005eb9d) postcard_message2_pane_ParamLimits

0x3536,	// (0x0005eb9d) postcard_message2_pane

0x400c,	// (0x0005f673) message2_row_pane_ParamLimits

0x400c,	// (0x0005f673) message2_row_pane

0x4028,	// (0x0005f68f) address2_row_pane_ParamLimits

0x4028,	// (0x0005f68f) address2_row_pane

0xc0df,	// (0x00067746) postcard_message2_row_pane_g1

0xc0e7,	// (0x0006774e) postcard_message2_row_pane_t1

0xc0df,	// (0x00067746) address2_row_pane_g1

0xc0e7,	// (0x0006774e) address2_row_pane_t1

0x1803,	// (0x0005ce6a) aid_size_cell_vorec

0x9c85,	// (0x000652ec) main_rss_pane

0x403b,	// (0x0005f6a2) rss_list_single_pane_ParamLimits

0x403b,	// (0x0005f6a2) rss_list_single_pane

0xc0f5,	// (0x0006775c) rss_list_single_pane_t1

0xc103,	// (0x0006776a) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0006ac87) rss_list_single_pane_t

0x9c85,	// (0x000652ec) main_camera2_pane

0x9c85,	// (0x000652ec) main_video2_pane

0x42a4,	// (0x0005f90b) cams_zoom_pane_cp2_ParamLimits

0x42a4,	// (0x0005f90b) cams_zoom_pane_cp2

0x42c4,	// (0x0005f92b) image2_vga_pane_ParamLimits

0x42c4,	// (0x0005f92b) image2_vga_pane

0x4315,	// (0x0005f97c) main_camera2_pane_g1_ParamLimits

0x4315,	// (0x0005f97c) main_camera2_pane_g1

0x4335,	// (0x0005f99c) main_camera2_pane_g2_ParamLimits

0x4335,	// (0x0005f99c) main_camera2_pane_g2

0x4355,	// (0x0005f9bc) main_camera2_pane_g3_ParamLimits

0x4355,	// (0x0005f9bc) main_camera2_pane_g3

0x4375,	// (0x0005f9dc) main_camera2_pane_g4_ParamLimits

0x4375,	// (0x0005f9dc) main_camera2_pane_g4

0x4395,	// (0x0005f9fc) main_camera2_pane_g5_ParamLimits

0x4395,	// (0x0005f9fc) main_camera2_pane_g5

0x43b5,	// (0x0005fa1c) main_camera2_pane_g6_ParamLimits

0x43b5,	// (0x0005fa1c) main_camera2_pane_g6

0x43d5,	// (0x0005fa3c) main_camera2_pane_g7_ParamLimits

0x43d5,	// (0x0005fa3c) main_camera2_pane_g7

0x43f5,	// (0x0005fa5c) main_camera2_pane_g8_ParamLimits

0x43f5,	// (0x0005fa5c) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0006aca8) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0006aca8) main_camera2_pane_g

0x4435,	// (0x0005fa9c) main_camera2_pane_t1_ParamLimits

0x4435,	// (0x0005fa9c) main_camera2_pane_t1

0x446a,	// (0x0005fad1) main_camera2_pane_t2_ParamLimits

0x446a,	// (0x0005fad1) main_camera2_pane_t2

0x4490,	// (0x0005faf7) main_camera2_pane_t3_ParamLimits

0x4490,	// (0x0005faf7) main_camera2_pane_t3

0x44ee,	// (0x0005fb55) main_camera2_pane_t4_ParamLimits

0x44ee,	// (0x0005fb55) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0006acbb) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0006acbb) main_camera2_pane_t

0x4580,	// (0x0005fbe7) cams_zoom_pane_cp4_ParamLimits

0x4580,	// (0x0005fbe7) cams_zoom_pane_cp4

0x4596,	// (0x0005fbfd) image2_cif_pane_ParamLimits

0x4596,	// (0x0005fbfd) image2_cif_pane

0x45c1,	// (0x0005fc28) image2_subqcif_pane_ParamLimits

0x45c1,	// (0x0005fc28) image2_subqcif_pane

0x45db,	// (0x0005fc42) main_video2_pane_g1_ParamLimits

0x45db,	// (0x0005fc42) main_video2_pane_g1

0x45f5,	// (0x0005fc5c) main_video2_pane_g2_ParamLimits

0x45f5,	// (0x0005fc5c) main_video2_pane_g2

0x460b,	// (0x0005fc72) main_video2_pane_g3_ParamLimits

0x460b,	// (0x0005fc72) main_video2_pane_g3

0x4621,	// (0x0005fc88) main_video2_pane_g4_ParamLimits

0x4621,	// (0x0005fc88) main_video2_pane_g4

0x4637,	// (0x0005fc9e) main_video2_pane_g5_ParamLimits

0x4637,	// (0x0005fc9e) main_video2_pane_g5

0x464d,	// (0x0005fcb4) main_video2_pane_g6_ParamLimits

0x464d,	// (0x0005fcb4) main_video2_pane_g6

0x0005,

0xf663,	// (0x0006acca) main_video2_pane_g_ParamLimits

0xf663,	// (0x0006acca) main_video2_pane_g

0x4667,	// (0x0005fcce) main_video2_pane_t1_ParamLimits

0x4667,	// (0x0005fcce) main_video2_pane_t1

0x468b,	// (0x0005fcf2) main_video2_pane_t2_ParamLimits

0x468b,	// (0x0005fcf2) main_video2_pane_t2

0x46d9,	// (0x0005fd40) main_video2_pane_t3_ParamLimits

0x46d9,	// (0x0005fd40) main_video2_pane_t3

0x0002,

0xf670,	// (0x0006acd7) main_video2_pane_t_ParamLimits

0xf670,	// (0x0006acd7) main_video2_pane_t

0x3b54,	// (0x0005f1bb) call_muted_g2

0x0001,

0xf612,	// (0x0006ac79) call_muted_g

0x9c85,	// (0x000652ec) main_mup2_pane

0x471d,	// (0x0005fd84) main_mup2_pane_g1_ParamLimits

0x471d,	// (0x0005fd84) main_mup2_pane_g1

0x4729,	// (0x0005fd90) main_mup2_pane_g2_ParamLimits

0x4729,	// (0x0005fd90) main_mup2_pane_g2

0xc295,	// (0x000678fc) main_mup_pane_g13_cp1

0xc29d,	// (0x00067904) mup_volume_pane_cp1

0x4745,	// (0x0005fdac) main_mup2_pane_g4_ParamLimits

0x4745,	// (0x0005fdac) main_mup2_pane_g4

0x4757,	// (0x0005fdbe) main_mup2_pane_g5_ParamLimits

0x4757,	// (0x0005fdbe) main_mup2_pane_g5

0x4769,	// (0x0005fdd0) main_mup2_pane_g6_ParamLimits

0x4769,	// (0x0005fdd0) main_mup2_pane_g6

0x477b,	// (0x0005fde2) main_mup2_pane_g7_ParamLimits

0x477b,	// (0x0005fde2) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0006acde) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0006acde) main_mup2_pane_g

0x4793,	// (0x0005fdfa) main_mup2_pane_t1_ParamLimits

0x4793,	// (0x0005fdfa) main_mup2_pane_t1

0x47a9,	// (0x0005fe10) main_mup2_pane_t2_ParamLimits

0x47a9,	// (0x0005fe10) main_mup2_pane_t2

0x47bf,	// (0x0005fe26) main_mup2_pane_t3_ParamLimits

0x47bf,	// (0x0005fe26) main_mup2_pane_t3

0x47d5,	// (0x0005fe3c) main_mup2_pane_t4_ParamLimits

0x47d5,	// (0x0005fe3c) main_mup2_pane_t4

0x47ed,	// (0x0005fe54) main_mup2_pane_t5_ParamLimits

0x47ed,	// (0x0005fe54) main_mup2_pane_t5

0x4805,	// (0x0005fe6c) main_mup2_pane_t6_ParamLimits

0x4805,	// (0x0005fe6c) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0006aced) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0006aced) main_mup2_pane_t

0x4835,	// (0x0005fe9c) mup2_visualizer_pane_ParamLimits

0x4835,	// (0x0005fe9c) mup2_visualizer_pane

0x4863,	// (0x0005feca) mup_progress_pane_cp_ParamLimits

0x4863,	// (0x0005feca) mup_progress_pane_cp

0xc277,	// (0x000678de) mup_volume_pane_cp_ParamLimits

0xc277,	// (0x000678de) mup_volume_pane_cp

0x4877,	// (0x0005fede) mup2_visualizer_pane_g1_ParamLimits

0x4877,	// (0x0005fede) mup2_visualizer_pane_g1

0xc1b6,	// (0x0006781d) mup2_visualizer_pane_g2_ParamLimits

0xc1b6,	// (0x0006781d) mup2_visualizer_pane_g2

0x488e,	// (0x0005fef5) mup2_visualizer_pane_g3_ParamLimits

0x488e,	// (0x0005fef5) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0006acfa) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0006acfa) mup2_visualizer_pane_g

0xaf71,	// (0x000665d8) aid_size_cell_fmradio

0x3d06,	// (0x0005f36d) aid_height_parent_landcape

0xa3e2,	// (0x00065a49) wml_content_pane_cp

0xa3ea,	// (0x00065a51) wml_tabs_pane

0xa3f3,	// (0x00065a5a) popup_wml_miniature_window

0xa3fb,	// (0x00065a62) scroll_pane_cp021

0xa40f,	// (0x00065a76) wml_content_pane_comp8

0x9c85,	// (0x000652ec) bg_popup_sub_pane_cp05

0xc1d4,	// (0x0006783b) popup_wml_miniature_window_g1

0xc1dc,	// (0x00067843) wml_miniature_view_pane

0x489a,	// (0x0005ff01) aid_size_wml_view

0x48a2,	// (0x0005ff09) wml_miniature_view_pane_g1

0x48ab,	// (0x0005ff12) wml_miniature_view_pane_g2

0x48b4,	// (0x0005ff1b) wml_miniature_view_pane_g3

0x48bc,	// (0x0005ff23) wml_miniature_view_pane_g4

0x48c4,	// (0x0005ff2b) wml_miniature_view_pane_g5

0x48cc,	// (0x0005ff33) wml_miniature_view_pane_g6

0x48d4,	// (0x0005ff3b) wml_miniature_view_pane_g7

0x48dc,	// (0x0005ff43) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0006ad01) wml_miniature_view_pane_g

0xc1e4,	// (0x0006784b) background_graphic_ParamLimits

0xc1e4,	// (0x0006784b) background_graphic

0xc1f0,	// (0x00067857) wml_tabs_2_pane

0xc1f9,	// (0x00067860) wml_tabs_3_pane_ParamLimits

0xc1f9,	// (0x00067860) wml_tabs_3_pane

0xc20b,	// (0x00067872) wml_tabs_4_pane_ParamLimits

0xc20b,	// (0x00067872) wml_tabs_4_pane

0xc221,	// (0x00067888) wml_tabs_5_pane_ParamLimits

0xc221,	// (0x00067888) wml_tabs_5_pane

0xc23b,	// (0x000678a2) wml_tabs_pane_g2_ParamLimits

0xc23b,	// (0x000678a2) wml_tabs_pane_g2

0xc24f,	// (0x000678b6) wml_tabs_pane_g3_ParamLimits

0xc24f,	// (0x000678b6) wml_tabs_pane_g3

0x48e4,	// (0x0005ff4b) wml_tabs_2_active_pane_ParamLimits

0x48e4,	// (0x0005ff4b) wml_tabs_2_active_pane

0x48f8,	// (0x0005ff5f) wml_tabs_2_passive_pane_ParamLimits

0x48f8,	// (0x0005ff5f) wml_tabs_2_passive_pane

0x490c,	// (0x0005ff73) wml_tabs_3_active_pane_cp_ParamLimits

0x490c,	// (0x0005ff73) wml_tabs_3_active_pane_cp

0x4921,	// (0x0005ff88) wml_tabs_3_passive_pane_ParamLimits

0x4921,	// (0x0005ff88) wml_tabs_3_passive_pane

0x4934,	// (0x0005ff9b) wml_tabs_3_passive_pane_cp_ParamLimits

0x4934,	// (0x0005ff9b) wml_tabs_3_passive_pane_cp

0x494b,	// (0x0005ffb2) tabs_4_active_pane

0x4953,	// (0x0005ffba) tabs_4_passive_pane

0x495d,	// (0x0005ffc4) tabs_4_passive_pane_cp

0x4965,	// (0x0005ffcc) tabs_4_passive_pane_cp2

0x3a21,	// (0x0005f088) aid_height_text

0x30bc,	// (0x0005e723) mup_volume_cont_pane_ParamLimits

0x30bc,	// (0x0005e723) mup_volume_cont_pane

0x0fce,	// (0x0005c635) aid_size_cell_pinb

0x0fd8,	// (0x0005c63f) aid_size_list_pinb

0x484f,	// (0x0005feb6) mup2_volume_cont_pane_ParamLimits

0x484f,	// (0x0005feb6) mup2_volume_cont_pane

0xc263,	// (0x000678ca) mup2_volume_cont_pane_g1_ParamLimits

0xc263,	// (0x000678ca) mup2_volume_cont_pane_g1

0x0c56,	// (0x0005c2bd) aid_size_cell_touch_ParamLimits

0x0c56,	// (0x0005c2bd) aid_size_cell_touch

0x0ebe,	// (0x0005c525) touch_pane_ParamLimits

0x0ebe,	// (0x0005c525) touch_pane

0x0c38,	// (0x0005c29f) main_rss2_pane

0xc2a5,	// (0x0006790c) listscroll_rss2_pane

0xc2ae,	// (0x00067915) rss2_navigation_pane

0xc2b6,	// (0x0006791d) list_rss2_pane

0xaaec,	// (0x00066153) scroll_pane_cp22

0xc2be,	// (0x00067925) rss2_navigation_pane_g1

0xc2c7,	// (0x0006792e) rss2_navigation_pane_g2

0xc2cf,	// (0x00067936) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0006ad12) rss2_navigation_pane_g

0xc2d7,	// (0x0006793e) rss2_navigation_pane_t1

0x496f,	// (0x0005ffd6) rss2_list_single_pane_ParamLimits

0x496f,	// (0x0005ffd6) rss2_list_single_pane

0xc2e5,	// (0x0006794c) rss2_list_single_pane_t2

0xc2f3,	// (0x0006795a) rss2_list_single_pane_t3_ParamLimits

0xc2f3,	// (0x0006795a) rss2_list_single_pane_t3

0xc310,	// (0x00067977) rss2_list_single_pane_t4

0x2913,	// (0x0005df7a) smil_status_pane_g1

0x9864,	// (0x00064ecb) main_image2_pane_ParamLimits

0x9864,	// (0x00064ecb) main_image2_pane

0x4415,	// (0x0005fa7c) main_camera2_pane_g9_ParamLimits

0x4415,	// (0x0005fa7c) main_camera2_pane_g9

0x4543,	// (0x0005fbaa) main_camera2_pane_t5_ParamLimits

0x4543,	// (0x0005fbaa) main_camera2_pane_t5

0xc186,	// (0x000677ed) main_camera2_pane_t6_ParamLimits

0xc186,	// (0x000677ed) main_camera2_pane_t6

0x4984,	// (0x0005ffeb) main_image2_pane_g1_ParamLimits

0x4984,	// (0x0005ffeb) main_image2_pane_g1

0x375d,	// (0x0005edc4) smil2_video_pane_ParamLimits

0x375d,	// (0x0005edc4) smil2_video_pane

0x0c96,	// (0x0005c2fd) aid_zoom_text_primary_cp

0x0e6e,	// (0x0005c4d5) popup_preview_fixed_window

0xa34b,	// (0x000659b2) im_reading_pane_g1

0x428c,	// (0x0005f8f3) cams2_bc_adjust_pane_cp_ParamLimits

0x428c,	// (0x0005f8f3) cams2_bc_adjust_pane_cp

0x4572,	// (0x0005fbd9) cams2_bc_adjust_pane_ParamLimits

0x4572,	// (0x0005fbd9) cams2_bc_adjust_pane

0xc31e,	// (0x00067985) cams2_bc_adjust_pane_g1

0xc326,	// (0x0006798d) cams2_slider_pane

0xc32f,	// (0x00067996) cams2_slider_pane_g1

0xc338,	// (0x0006799f) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0006ad19) cams2_slider_pane_g

0x10c6,	// (0x0005c72d) calc_display_pane_ParamLimits

0x10ee,	// (0x0005c755) calc_paper_pane_ParamLimits

0x1111,	// (0x0005c778) grid_calc_pane_ParamLimits

0xa9ac,	// (0x00066013) popup_clock_digital_window_t1_ParamLimits

0xaf0e,	// (0x00066575) main_image_pane_t1

0x10a8,	// (0x0005c70f) aid_size_cell_calc_ParamLimits

0x10a8,	// (0x0005c70f) aid_size_cell_calc

0x3d4c,	// (0x0005f3b3) popup_blid_sat_info2_window_ParamLimits

0x3d4c,	// (0x0005f3b3) popup_blid_sat_info2_window

0xc35a,	// (0x000679c1) aid_size_cell_blid

0xc362,	// (0x000679c9) bg_popup_window_pane_cp07

0xc385,	// (0x000679ec) grid_popup_blid_pane

0xc38f,	// (0x000679f6) heading_pane_cp05_ParamLimits

0xc38f,	// (0x000679f6) heading_pane_cp05

0xc459,	// (0x00067ac0) cell_popup_blid_pane_ParamLimits

0xc459,	// (0x00067ac0) cell_popup_blid_pane

0xc47d,	// (0x00067ae4) cell_popup_blid_pane_g1

0xc485,	// (0x00067aec) cell_popup_blid_pane_t1

0x481f,	// (0x0005fe86) mup2_indicator_pane_ParamLimits

0x481f,	// (0x0005fe86) mup2_indicator_pane

0xac35,	// (0x0006629c) mup2_visualizer_osc_pane

0xc1c2,	// (0x00067829) mup2_visualizer_spec_pane_ParamLimits

0xc1c2,	// (0x00067829) mup2_visualizer_spec_pane

0x499a,	// (0x00060001) mup2_spec_half_pane

0x49a3,	// (0x0006000a) mup2_spec_half_pane_cp

0x49ab,	// (0x00060012) mup2_spec_bar_pane_ParamLimits

0x49ab,	// (0x00060012) mup2_spec_bar_pane

0xc111,	// (0x00067778) mup2_spec_bar_pane_g1

0xc11b,	// (0x00067782) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0006ac8c) mup2_spec_bar_pane_g

0x49cb,	// (0x00060032) mup2_osc_middle_pane

0xc12d,	// (0x00067794) mup2_visualizer_osc_pane_g1

0x9892,	// (0x00064ef9) popup_number_entry_window_t1_ParamLimits

0x98a5,	// (0x00064f0c) popup_number_entry_window_t2_ParamLimits

0x98b7,	// (0x00064f1e) popup_number_entry_window_t3_ParamLimits

0x0f10,	// (0x0005c577) popup_number_entry_window_t5_ParamLimits

0x0f10,	// (0x0005c577) popup_number_entry_window_t5

0xf0e7,	// (0x0006a74e) popup_number_entry_window_t_ParamLimits

0x98c9,	// (0x00064f30) text_title_cp2_ParamLimits

0xadf4,	// (0x0006645b) aid_hotspot_pointer_text2_pane

0xae0e,	// (0x00066475) main_viewer_pane_g9_ParamLimits

0xae0e,	// (0x00066475) main_viewer_pane_g9

0xa57a,	// (0x00065be1) cale_month_pane_t1_ParamLimits

0xa5e5,	// (0x00065c4c) bg_cale_pane_ParamLimits

0xa5fd,	// (0x00065c64) list_cale_pane_ParamLimits

0xa179,	// (0x000657e0) listscroll_cale_day_pane_t1

0xa60e,	// (0x00065c75) scroll_pane_cp09_ParamLimits

0x30ee,	// (0x0005e755) main_mup_eq_pane_t1_ParamLimits

0x30ee,	// (0x0005e755) main_mup_eq_pane_t1

0x3108,	// (0x0005e76f) main_mup_eq_pane_t2_ParamLimits

0x3108,	// (0x0005e76f) main_mup_eq_pane_t2

0x3122,	// (0x0005e789) main_mup_eq_pane_t3_ParamLimits

0x3122,	// (0x0005e789) main_mup_eq_pane_t3

0x313e,	// (0x0005e7a5) main_mup_eq_pane_t4_ParamLimits

0x313e,	// (0x0005e7a5) main_mup_eq_pane_t4

0x315a,	// (0x0005e7c1) main_mup_eq_pane_t5_ParamLimits

0x315a,	// (0x0005e7c1) main_mup_eq_pane_t5

0x3176,	// (0x0005e7dd) main_mup_eq_pane_t6_ParamLimits

0x3176,	// (0x0005e7dd) main_mup_eq_pane_t6

0x318a,	// (0x0005e7f1) main_mup_eq_pane_t7_ParamLimits

0x318a,	// (0x0005e7f1) main_mup_eq_pane_t7

0x319e,	// (0x0005e805) main_mup_eq_pane_t8_ParamLimits

0x319e,	// (0x0005e805) main_mup_eq_pane_t8

0x31b2,	// (0x0005e819) main_mup_eq_pane_t9_ParamLimits

0x31b2,	// (0x0005e819) main_mup_eq_pane_t9

0x31cc,	// (0x0005e833) main_mup_eq_pane_t10_ParamLimits

0x31cc,	// (0x0005e833) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0006aadb) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0006aadb) main_mup_eq_pane_t

0x327b,	// (0x0005e8e2) mup_equalizer_pane_cp5_ParamLimits

0x328f,	// (0x0005e8f6) mup_equalizer_pane_cp6_ParamLimits

0x32a3,	// (0x0005e90a) mup_equalizer_pane_cp7_ParamLimits

0x0c38,	// (0x0005c29f) main_gallery_pane

0xc136,	// (0x0006779d) smil2_volume_pane

0xc13e,	// (0x000677a5) smil_status_volume_pane_g1_ParamLimits

0xc151,	// (0x000677b8) smil_status_volume_pane_g2_ParamLimits

0xc164,	// (0x000677cb) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0006ac91) smil_status_volume_pane_g_ParamLimits

0xc362,	// (0x000679c9) bg_popup_window_pane_cp07_ParamLimits

0xc370,	// (0x000679d7) blid_firmament_pane

0x49d4,	// (0x0006003b) aid_size_cell_gallery_ParamLimits

0x49d4,	// (0x0006003b) aid_size_cell_gallery

0x49ea,	// (0x00060051) grid_gallery_pane_ParamLimits

0x49ea,	// (0x00060051) grid_gallery_pane

0x4a03,	// (0x0006006a) cell_gallery_pane_ParamLimits

0x4a03,	// (0x0006006a) cell_gallery_pane

0xc493,	// (0x00067afa) bg_cell_gallery_focus_pane_ParamLimits

0xc493,	// (0x00067afa) bg_cell_gallery_focus_pane

0xc4a5,	// (0x00067b0c) cell_gallery_pane_g1_ParamLimits

0xc4a5,	// (0x00067b0c) cell_gallery_pane_g1

0x4a4c,	// (0x000600b3) cell_gallery_pane_g2_ParamLimits

0x4a4c,	// (0x000600b3) cell_gallery_pane_g2

0x4a59,	// (0x000600c0) cell_gallery_pane_g3_ParamLimits

0x4a59,	// (0x000600c0) cell_gallery_pane_g3

0xc4b1,	// (0x00067b18) cell_gallery_pane_g4_ParamLimits

0xc4b1,	// (0x00067b18) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0006ad3f) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0006ad3f) cell_gallery_pane_g

0xc4bd,	// (0x00067b24) bg_cell_gallery_focus_pane_g1

0xc4c5,	// (0x00067b2c) bg_cell_gallery_focus_pane_g2

0xc4cd,	// (0x00067b34) bg_cell_gallery_focus_pane_g3

0xc4d5,	// (0x00067b3c) bg_cell_gallery_focus_pane_g4

0xc4dd,	// (0x00067b44) bg_cell_gallery_focus_pane_g5

0xc4e5,	// (0x00067b4c) bg_cell_gallery_focus_pane_g6

0xc4ed,	// (0x00067b54) bg_cell_gallery_focus_pane_g7

0xc4f5,	// (0x00067b5c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0006ad48) bg_cell_gallery_focus_pane_g

0xc4fd,	// (0x00067b64) aid_firma_cardinal

0xc511,	// (0x00067b78) blid_firmament_pane_t1

0xc528,	// (0x00067b8f) blid_firmament_pane_t2

0xc53f,	// (0x00067ba6) blid_firmament_pane_t3

0xc556,	// (0x00067bbd) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0006ad59) blid_firmament_pane_t

0xc56d,	// (0x00067bd4) blid_sat_info_pane

0xc57d,	// (0x00067be4) blid_sat_info_pane_g1

0xc57d,	// (0x00067be4) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0006ad62) blid_sat_info_pane_g

0xc587,	// (0x00067bee) blid_sat_info_pane_t1

0xc595,	// (0x00067bfc) smil2_volume_content_pane

0xc59e,	// (0x00067c05) smil2_volume_pane_g1

0xc5a6,	// (0x00067c0d) smil2_volume_content_pane_g1

0xc5af,	// (0x00067c16) smil2_volume_content_pane_g2

0xc5b8,	// (0x00067c1f) smil2_volume_content_pane_g3

0xc5c1,	// (0x00067c28) smil2_volume_content_pane_g4

0xc5ca,	// (0x00067c31) smil2_volume_content_pane_g5

0xc5d3,	// (0x00067c3a) smil2_volume_content_pane_g6

0xc5dc,	// (0x00067c43) smil2_volume_content_pane_g7

0xc5e5,	// (0x00067c4c) smil2_volume_content_pane_g8

0xc5ee,	// (0x00067c55) smil2_volume_content_pane_g9

0xc5f7,	// (0x00067c5e) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0006ad67) smil2_volume_content_pane_g

0x15c5,	// (0x0005cc2c) cale_week_day_heading_pane_t1_ParamLimits

0x15ef,	// (0x0005cc56) cale_week_day_heading_pane_t2_ParamLimits

0x1619,	// (0x0005cc80) cale_week_day_heading_pane_t3_ParamLimits

0x1643,	// (0x0005ccaa) cale_week_day_heading_pane_t4_ParamLimits

0x166d,	// (0x0005ccd4) cale_week_day_heading_pane_t5_ParamLimits

0x1697,	// (0x0005ccfe) cale_week_day_heading_pane_t6_ParamLimits

0x16c3,	// (0x0005cd2a) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0006a853) cale_week_day_heading_pane_t_ParamLimits

0xa18b,	// (0x000657f2) bg_cale_side_pane_ParamLimits

0x16ed,	// (0x0005cd54) cale_week_time_pane_t1_ParamLimits

0x1705,	// (0x0005cd6c) cale_week_time_pane_t2_ParamLimits

0x171d,	// (0x0005cd84) cale_week_time_pane_t3_ParamLimits

0x1735,	// (0x0005cd9c) cale_week_time_pane_t4_ParamLimits

0x174d,	// (0x0005cdb4) cale_week_time_pane_t5_ParamLimits

0x1765,	// (0x0005cdcc) cale_week_time_pane_t6_ParamLimits

0x177d,	// (0x0005cde4) cale_week_time_pane_t7_ParamLimits

0x1795,	// (0x0005cdfc) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0006a862) cale_week_time_pane_t_ParamLimits

0x17ad,	// (0x0005ce14) cell_cale_week_pane_g2_ParamLimits

0xa18b,	// (0x000657f2) bg_cale_side_pane_cp01_ParamLimits

0x2764,	// (0x0005ddcb) cale_month_week_pane_t1_ParamLimits

0x277b,	// (0x0005dde2) cale_month_week_pane_t2_ParamLimits

0x2792,	// (0x0005ddf9) cale_month_week_pane_t3_ParamLimits

0x27a9,	// (0x0005de10) cale_month_week_pane_t4_ParamLimits

0x27c0,	// (0x0005de27) cale_month_week_pane_t5_ParamLimits

0x27d7,	// (0x0005de3e) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0006a93b) cale_month_week_pane_t_ParamLimits

0xa58c,	// (0x00065bf3) cell_cale_month_pane_g1_ParamLimits

0x0c38,	// (0x0005c29f) main_cale_event_viewer_pane

0x0c38,	// (0x0005c29f) listscroll_cale_event_viewer_pane

0xc600,	// (0x00067c67) list_cale_ev_pane

0xc608,	// (0x00067c6f) scroll_pane_cp023

0xc614,	// (0x00067c7b) field_cale_ev_pane_ParamLimits

0xc614,	// (0x00067c7b) field_cale_ev_pane

0xc632,	// (0x00067c99) field_cale_ev_content_pane_ParamLimits

0xc632,	// (0x00067c99) field_cale_ev_content_pane

0xc63e,	// (0x00067ca5) field_cale_ev_pane_g1_ParamLimits

0xc63e,	// (0x00067ca5) field_cale_ev_pane_g1

0xc64a,	// (0x00067cb1) field_cale_ev_pane_g2_ParamLimits

0xc64a,	// (0x00067cb1) field_cale_ev_pane_g2

0xc662,	// (0x00067cc9) field_cale_ev_pane_g3_ParamLimits

0xc662,	// (0x00067cc9) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0006ad7c) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0006ad7c) field_cale_ev_pane_g

0xc67a,	// (0x00067ce1) field_cale_ev_pane_t1_ParamLimits

0xc67a,	// (0x00067ce1) field_cale_ev_pane_t1

0xc691,	// (0x00067cf8) field_cale_ev_content_pane_t1_ParamLimits

0xc691,	// (0x00067cf8) field_cale_ev_content_pane_t1

0xadbe,	// (0x00066425) bg_button_pane_cp01

0x9fdf,	// (0x00065646) listscroll_cale_week_pane_ParamLimits

0x13e1,	// (0x0005ca48) popup_toolbar_window_cp01

0xa179,	// (0x000657e0) listscroll_cale_week_pane_t1_ParamLimits

0x9fdf,	// (0x00065646) listscroll_cale_day_pane_ParamLimits

0x2964,	// (0x0005dfcb) popup_toolbar_window_cp02

0xa179,	// (0x000657e0) listscroll_cale_day_pane_t1_ParamLimits

0x9fdf,	// (0x00065646) main_cale_month_pane_ParamLimits

0x3f80,	// (0x0005f5e7) popup_toolbar_window_cp03_ParamLimits

0x3f80,	// (0x0005f5e7) popup_toolbar_window_cp03

0x3625,	// (0x0005ec8c) main_image_pane_g2_ParamLimits

0x3625,	// (0x0005ec8c) main_image_pane_g2

0x3636,	// (0x0005ec9d) main_image_pane_g3_ParamLimits

0x3636,	// (0x0005ec9d) main_image_pane_g3

0x0002,

0xf506,	// (0x0006ab6d) main_image_pane_g_ParamLimits

0xf506,	// (0x0006ab6d) main_image_pane_g

0xaf0e,	// (0x00066575) main_image_pane_t1_ParamLimits

0x3647,	// (0x0005ecae) main_image_pane_t2_ParamLimits

0x3647,	// (0x0005ecae) main_image_pane_t2

0x3659,	// (0x0005ecc0) main_image_pane_t3_ParamLimits

0x3659,	// (0x0005ecc0) main_image_pane_t3

0x3681,	// (0x0005ece8) main_image_pane_t4_ParamLimits

0x3681,	// (0x0005ece8) main_image_pane_t4

0x0003,

0xf50d,	// (0x0006ab74) main_image_pane_t_ParamLimits

0xf50d,	// (0x0006ab74) main_image_pane_t

0x36a1,	// (0x0005ed08) popup_image_details_window_cp01

0x36ab,	// (0x0005ed12) popup_toobar_trans_pane_cp01_ParamLimits

0x36ab,	// (0x0005ed12) popup_toobar_trans_pane_cp01

0x3e2b,	// (0x0005f492) popup_image_details_window_ParamLimits

0x3e2b,	// (0x0005f492) popup_image_details_window

0xc097,	// (0x000676fe) popup_image_focus_window

0x4246,	// (0x0005f8ad) camera2_autofocus_pane_ParamLimits

0x4246,	// (0x0005f8ad) camera2_autofocus_pane

0x0c38,	// (0x0005c29f) bg_popup_sub_pane_cp06

0xc6af,	// (0x00067d16) popup_image_focus_window_g1

0xc6b7,	// (0x00067d1e) popup_image_focus_window_g2

0xc6bf,	// (0x00067d26) popup_image_focus_window_g3

0xc6c7,	// (0x00067d2e) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0006ad83) popup_image_focus_window_g

0xc6cf,	// (0x00067d36) popup_image_focus_window_t1

0xc6dd,	// (0x00067d44) popup_image_focus_window_t2

0xc6ed,	// (0x00067d54) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0006ad8c) popup_image_focus_window_t

0xc6fb,	// (0x00067d62) camera2_autofocus_pane_g1

0x9864,	// (0x00064ecb) bg_tb_trans_pane_cp01

0xc709,	// (0x00067d70) popup_image_details_window_g1

0xc71c,	// (0x00067d83) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0006ad9e) popup_image_details_window_g

0xc745,	// (0x00067dac) popup_image_details_window_t1

0xc757,	// (0x00067dbe) popup_image_details_window_t2

0xc770,	// (0x00067dd7) popup_image_details_window_t3

0xc784,	// (0x00067deb) popup_image_details_window_t4

0xc79f,	// (0x00067e06) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0006ada5) popup_image_details_window_t

0x9fa7,	// (0x0006560e) bg_calc_paper_pane_ParamLimits

0x9fbb,	// (0x00065622) grid_highlight_pane_cp013

0x9fc5,	// (0x0006562c) list_calc_pane_ParamLimits

0x9fd7,	// (0x0006563e) scroll_pane_cp024

0x9fdf,	// (0x00065646) bg_calc_display_pane_ParamLimits

0x120f,	// (0x0005c876) calc_display_pane_t1_ParamLimits

0x1221,	// (0x0005c888) calc_display_pane_t2_ParamLimits

0x9feb,	// (0x00065652) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0006a7d5) calc_display_pane_t_ParamLimits

0x12de,	// (0x0005c945) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0006a7f2) cell_calc_pane_g

0x12e7,	// (0x0005c94e) cell_calc_pane_t1

0xa062,	// (0x000656c9) grid_highlight_pane_cp02_ParamLimits

0xa078,	// (0x000656df) toolbar_button_pane_cp01_ParamLimits

0xa078,	// (0x000656df) toolbar_button_pane_cp01

0xaf53,	// (0x000665ba) temp_image_control_pane_ParamLimits

0xaf53,	// (0x000665ba) temp_image_control_pane

0x9864,	// (0x00064ecb) main_mp3_pane

0xc7b9,	// (0x00067e20) temp_image_control_pane_g1_ParamLimits

0xc7b9,	// (0x00067e20) temp_image_control_pane_g1

0xc7c7,	// (0x00067e2e) temp_image_control_pane_g2_ParamLimits

0xc7c7,	// (0x00067e2e) temp_image_control_pane_g2

0xc7d9,	// (0x00067e40) temp_image_control_pane_g3_ParamLimits

0xc7d9,	// (0x00067e40) temp_image_control_pane_g3

0x4a96,	// (0x000600fd) temp_image_control_pane_g4_ParamLimits

0x4a96,	// (0x000600fd) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0006adb0) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0006adb0) temp_image_control_pane_g

0xc7b9,	// (0x00067e20) main_mp3_pane_g1

0x4aa9,	// (0x00060110) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0006adb9) main_mp3_pane_g

0xc81c,	// (0x00067e83) main_mp3_pane_t1

0xa25a,	// (0x000658c1) main_camera_pane_g8_ParamLimits

0xa25a,	// (0x000658c1) main_camera_pane_g8

0x1a62,	// (0x0005d0c9) main_video_pane_g7_ParamLimits

0x1a62,	// (0x0005d0c9) main_video_pane_g7

0xc1a4,	// (0x0006780b) main_camera2_pane_t7_ParamLimits

0xc1a4,	// (0x0006780b) main_camera2_pane_t7

0xa3a2,	// (0x00065a09) scroll_pane_cp025_ParamLimits

0xa3a2,	// (0x00065a09) scroll_pane_cp025

0xa3b6,	// (0x00065a1d) scroll_pane_cp026_ParamLimits

0xa3b6,	// (0x00065a1d) scroll_pane_cp026

0xa3c5,	// (0x00065a2c) wml_content_pane_ParamLimits

0x0c38,	// (0x0005c29f) main_touch_calib_pane

0x4b73,	// (0x000601da) main_touch_calib_pane_g1

0x4b7f,	// (0x000601e6) main_touch_calib_pane_g2

0x4b8b,	// (0x000601f2) main_touch_calib_pane_g3

0x4b97,	// (0x000601fe) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0006add7) main_touch_calib_pane_g

0x4ba3,	// (0x0006020a) main_touch_calib_pane_t1

0x4bbd,	// (0x00060224) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0006ade0) main_touch_calib_pane_t

0xab76,	// (0x000661dd) mup_progress_pane_cp02

0xab95,	// (0x000661fc) navi_pane_g1

0xabf7,	// (0x0006625e) navi_pane_mp_t3

0x9864,	// (0x00064ecb) main_mp3_pane_ParamLimits

0x3fbe,	// (0x0005f625) navi_pane_ParamLimits

0xc7b9,	// (0x00067e20) main_mp3_pane_g1_ParamLimits

0x4aa9,	// (0x00060110) main_mp3_pane_g2_ParamLimits

0x4ab7,	// (0x0006011e) main_mp3_pane_g3_ParamLimits

0x4ab7,	// (0x0006011e) main_mp3_pane_g3

0x4ac5,	// (0x0006012c) main_mp3_pane_g4_ParamLimits

0x4ac5,	// (0x0006012c) main_mp3_pane_g4

0xc7e9,	// (0x00067e50) main_mp3_pane_g5_ParamLimits

0xc7e9,	// (0x00067e50) main_mp3_pane_g5

0xc7f7,	// (0x00067e5e) main_mp3_pane_g6_ParamLimits

0xc7f7,	// (0x00067e5e) main_mp3_pane_g6

0xc804,	// (0x00067e6b) main_mp3_pane_g7_ParamLimits

0xc804,	// (0x00067e6b) main_mp3_pane_g7

0xc810,	// (0x00067e77) main_mp3_pane_g8_ParamLimits

0xc810,	// (0x00067e77) main_mp3_pane_g8

0xf752,	// (0x0006adb9) main_mp3_pane_g_ParamLimits

0x4ad1,	// (0x00060138) main_mp3_pane_t2

0x4adf,	// (0x00060146) main_mp3_pane_t3

0xc82a,	// (0x00067e91) main_mp3_pane_t4

0xc838,	// (0x00067e9f) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0006adca) main_mp3_pane_t

0xc846,	// (0x00067ead) mup_progress_pane_cp01

0x0c96,	// (0x0005c2fd) aid_zoom_text_secondary2

0xc600,	// (0x00067c67) list_cale_ev2_pane

0xc608,	// (0x00067c6f) scroll_pane_cp023_ParamLimits

0x4c13,	// (0x0006027a) field_cale_ev2_pane_ParamLimits

0x4c13,	// (0x0006027a) field_cale_ev2_pane

0x4c33,	// (0x0006029a) field_cale_ev2_pane_g1_ParamLimits

0x4c33,	// (0x0006029a) field_cale_ev2_pane_g1

0x4c3f,	// (0x000602a6) field_cale_ev2_pane_g2_ParamLimits

0x4c3f,	// (0x000602a6) field_cale_ev2_pane_g2

0x4c57,	// (0x000602be) field_cale_ev2_pane_g3_ParamLimits

0x4c57,	// (0x000602be) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0006adeb) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0006adeb) field_cale_ev2_pane_g

0x4c7b,	// (0x000602e2) field_cale_ev2_pane_t1_ParamLimits

0x4c7b,	// (0x000602e2) field_cale_ev2_pane_t1

0x4c92,	// (0x000602f9) field_cale_ev2_pane_t2_ParamLimits

0x4c92,	// (0x000602f9) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0006adf4) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0006adf4) field_cale_ev2_pane_t

0x34da,	// (0x0005eb41) main_postcard_pane_g5_ParamLimits

0x34da,	// (0x0005eb41) main_postcard_pane_g5

0x34f0,	// (0x0005eb57) main_postcard_pane_g6_ParamLimits

0x34f0,	// (0x0005eb57) main_postcard_pane_g6

0x1826,	// (0x0005ce8d) camera2_autofocus_pane_cp_ParamLimits

0x1826,	// (0x0005ce8d) camera2_autofocus_pane_cp

0x9864,	// (0x00064ecb) main_mup3_pane

0x4cc7,	// (0x0006032e) main_mup3_pane_g1_ParamLimits

0x4cc7,	// (0x0006032e) main_mup3_pane_g1

0x4ce9,	// (0x00060350) main_mup3_pane_g2_ParamLimits

0x4ce9,	// (0x00060350) main_mup3_pane_g2

0x4d67,	// (0x000603ce) main_mup3_pane_g3_ParamLimits

0x4d67,	// (0x000603ce) main_mup3_pane_g3

0x4dad,	// (0x00060414) main_mup3_pane_g4_ParamLimits

0x4dad,	// (0x00060414) main_mup3_pane_g4

0x4df3,	// (0x0006045a) main_mup3_pane_g5_ParamLimits

0x4df3,	// (0x0006045a) main_mup3_pane_g5

0x4e39,	// (0x000604a0) main_mup3_pane_g6_ParamLimits

0x4e39,	// (0x000604a0) main_mup3_pane_g6

0xc84e,	// (0x00067eb5) main_mup3_pane_g7_ParamLimits

0xc84e,	// (0x00067eb5) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0006ae04) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0006ae04) main_mup3_pane_g

0x4eb7,	// (0x0006051e) main_mup3_pane_t1_ParamLimits

0x4eb7,	// (0x0006051e) main_mup3_pane_t1

0x4f2b,	// (0x00060592) main_mup3_pane_t2_ParamLimits

0x4f2b,	// (0x00060592) main_mup3_pane_t2

0x4fff,	// (0x00060666) main_mup3_pane_t4_ParamLimits

0x4fff,	// (0x00060666) main_mup3_pane_t4

0x5055,	// (0x000606bc) main_mup3_pane_t5_ParamLimits

0x5055,	// (0x000606bc) main_mup3_pane_t5

0x5111,	// (0x00060778) main_mup3_pane_t6_ParamLimits

0x5111,	// (0x00060778) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0006ae15) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0006ae15) main_mup3_pane_t

0x51c9,	// (0x00060830) mup3_progress_pane_ParamLimits

0x51c9,	// (0x00060830) mup3_progress_pane

0x525f,	// (0x000608c6) popup_mup3_control_window_ParamLimits

0x525f,	// (0x000608c6) popup_mup3_control_window

0xc85c,	// (0x00067ec3) popup_mup3_text_window

0x5291,	// (0x000608f8) mup3_progress_pane_t1

0x52b0,	// (0x00060917) mup3_progress_pane_t2

0xc864,	// (0x00067ecb) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0006ae22) mup3_progress_pane_t

0xc881,	// (0x00067ee8) mup_progress_pane_cp03

0x0c38,	// (0x0005c29f) bg_tb_trans_pane_cp04

0x52cf,	// (0x00060936) mup3_volume_pane

0x52d7,	// (0x0006093e) popup_mup3_control_window_g1

0x52e0,	// (0x00060947) mup3_volume_pane_g1

0x52e9,	// (0x00060950) mup3_volume_pane_g2

0x52f2,	// (0x00060959) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0006ae29) mup3_volume_pane_g

0x0c38,	// (0x0005c29f) bg_tb_trans_pane_cp03

0xc891,	// (0x00067ef8) popup_mup3_text_window_g1

0xc899,	// (0x00067f00) popup_mup3_text_window_t1

0xa039,	// (0x000656a0) list_calc_item_pane_g1_ParamLimits

0xc28c,	// (0x000678f3) mup_volume_pane_cp_g1

0x4bd7,	// (0x0006023e) main_touch_calib_pane_t3

0x4beb,	// (0x00060252) main_touch_calib_pane_t4

0x4bff,	// (0x00060266) main_touch_calib_pane_t5

0x0c42,	// (0x0005c2a9) aid_cell_size_toolbar2

0x0c4a,	// (0x0005c2b1) aid_popup3_width_pane

0x0c86,	// (0x0005c2ed) aid_zoom_text_msg_primary

0xa23a,	// (0x000658a1) vorec_t7

0x9ffd,	// (0x00065664) bg_calc_paper_pane_g1_ParamLimits

0xa009,	// (0x00065670) bg_calc_paper_pane_g2_ParamLimits

0xa015,	// (0x0006567c) bg_calc_paper_pane_g3_ParamLimits

0xa021,	// (0x00065688) bg_calc_paper_pane_g4_ParamLimits

0xa02d,	// (0x00065694) bg_calc_paper_pane_g5_ParamLimits

0x1268,	// (0x0005c8cf) bg_calc_paper_pane_g6_ParamLimits

0x1277,	// (0x0005c8de) bg_calc_paper_pane_g7_ParamLimits

0x1286,	// (0x0005c8ed) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0006a7dc) bg_calc_paper_pane_g_ParamLimits

0x1299,	// (0x0005c900) calc_bg_paper_pane_g9_ParamLimits

0x1974,	// (0x0005cfdb) image_qvga_pane_ParamLimits

0x1974,	// (0x0005cfdb) image_qvga_pane

0x9ee0,	// (0x00065547) bg_popup_sub_pane_cp04_ParamLimits

0xae8a,	// (0x000664f1) popup_mup_playback_window_g1_ParamLimits

0xae96,	// (0x000664fd) popup_mup_playback_window_t1_ParamLimits

0xaeab,	// (0x00066512) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0006ab68) popup_mup_playback_window_t_ParamLimits

0x4739,	// (0x0005fda0) main_mup2_pane_g3_ParamLimits

0x4739,	// (0x0005fda0) main_mup2_pane_g3

0x1d6b,	// (0x0005d3d2) popup_toolbar_window_cp04

0xb28d,	// (0x000668f4) popup_call2_audio_second_window_g3_ParamLimits

0xb28d,	// (0x000668f4) popup_call2_audio_second_window_g3

0xb697,	// (0x00066cfe) popup_call2_audio_first_window_g4_ParamLimits

0xb697,	// (0x00066cfe) popup_call2_audio_first_window_g4

0xbd16,	// (0x0006737d) popup_call2_audio_in_window_g4_ParamLimits

0xbd16,	// (0x0006737d) popup_call2_audio_in_window_g4

0x3607,	// (0x0005ec6e) aid_area_sk_bg_cut_ParamLimits

0x3607,	// (0x0005ec6e) aid_area_sk_bg_cut

0xaec0,	// (0x00066527) aid_area_sk_bg_cut_2_ParamLimits

0xaec0,	// (0x00066527) aid_area_sk_bg_cut_2

0x4a3c,	// (0x000600a3) aid_placing_details_win

0x4a44,	// (0x000600ab) aid_placing_details_win_2

0xc6fb,	// (0x00067d62) camera2_autofocus_pane_g1_ParamLimits

0x0e53,	// (0x0005c4ba) popup_fixed_preview_cale_window_ParamLimits

0x0e53,	// (0x0005c4ba) popup_fixed_preview_cale_window

0xac4f,	// (0x000662b6) navi_slider_pane_g3

0xac58,	// (0x000662bf) navi_slider_pane_g4

0xac61,	// (0x000662c8) navi_slider_pane_g5

0xac4f,	// (0x000662b6) navi_slider_pane_g6

0xac6a,	// (0x000662d1) navi_slider_pane_g7

0xad8b,	// (0x000663f2) mup_scale_pane_g3

0xad94,	// (0x000663fb) mup_scale_pane_g4

0xad9d,	// (0x00066404) mup_scale_pane_g5

0x32b7,	// (0x0005e91e) mup_scale_pane_g6

0x32c0,	// (0x0005e927) mup_scale_pane_g7

0xac4f,	// (0x000662b6) cams2_slider_pane_g3

0xc341,	// (0x000679a8) cams2_slider_pane_g4

0xc349,	// (0x000679b0) cams2_slider_pane_g5

0xac4f,	// (0x000662b6) cams2_slider_pane_g6

0xc351,	// (0x000679b8) cams2_slider_pane_g7

0xc57d,	// (0x00067be4) camera2_autofocus_pane_cp_g1

0xc8a7,	// (0x00067f0e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8a7,	// (0x00067f0e) bg_popup_preview_window_pane_cp02

0xc8b3,	// (0x00067f1a) list_fp_cale_pane_ParamLimits

0xc8b3,	// (0x00067f1a) list_fp_cale_pane

0xc8bf,	// (0x00067f26) popup_fixed_preview_cale_window_t1_ParamLimits

0xc8bf,	// (0x00067f26) popup_fixed_preview_cale_window_t1

0x52fb,	// (0x00060962) popup_fixed_preview_cale_window_t2_ParamLimits

0x52fb,	// (0x00060962) popup_fixed_preview_cale_window_t2

0x5310,	// (0x00060977) popup_fixed_preview_cale_window_t3_ParamLimits

0x5310,	// (0x00060977) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0006ae30) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0006ae30) popup_fixed_preview_cale_window_t

0x5325,	// (0x0006098c) list_single_fp_cale_pane_ParamLimits

0x5325,	// (0x0006098c) list_single_fp_cale_pane

0xc8dd,	// (0x00067f44) list_single_fp_cale_pane_g1_ParamLimits

0xc8dd,	// (0x00067f44) list_single_fp_cale_pane_g1

0xc8e9,	// (0x00067f50) list_single_fp_cale_pane_g2_ParamLimits

0xc8e9,	// (0x00067f50) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0006ae37) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0006ae37) list_single_fp_cale_pane_g

0xc902,	// (0x00067f69) list_single_fp_cale_pane_t1_ParamLimits

0xc902,	// (0x00067f69) list_single_fp_cale_pane_t1

0xc914,	// (0x00067f7b) list_single_fp_cale_pane_t2_ParamLimits

0xc914,	// (0x00067f7b) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0006ae3e) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0006ae3e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0c38,	// (0x0005c29f) main_dialer_pane

0x533a,	// (0x000609a1) aid_cell_size_keypad

0x5344,	// (0x000609ab) dialer_ne_pane

0x534c,	// (0x000609b3) grid_dialer_command_1_pane

0x5354,	// (0x000609bb) grid_dialer_command_2_pane

0x535c,	// (0x000609c3) grid_dialer_keypad_pane

0x536e,	// (0x000609d5) bg_popup_call_pane_cp06_ParamLimits

0x536e,	// (0x000609d5) bg_popup_call_pane_cp06

0x537a,	// (0x000609e1) dialer_ne_clear_pane_ParamLimits

0x537a,	// (0x000609e1) dialer_ne_clear_pane

0xc947,	// (0x00067fae) dialer_ne_pane_g1

0xc94f,	// (0x00067fb6) dialer_ne_pane_t1_ParamLimits

0xc94f,	// (0x00067fb6) dialer_ne_pane_t1

0x5386,	// (0x000609ed) dialer_ne_pane_t2_ParamLimits

0x5386,	// (0x000609ed) dialer_ne_pane_t2

0x53b0,	// (0x00060a17) dialer_ne_pane_t3_ParamLimits

0x53b0,	// (0x00060a17) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0006ae43) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0006ae43) dialer_ne_pane_t

0x53e0,	// (0x00060a47) dialer_ne_pane_t3_copy1_ParamLimits

0x53e0,	// (0x00060a47) dialer_ne_pane_t3_copy1

0x540f,	// (0x00060a76) cell_dialer_keypad_pane_ParamLimits

0x540f,	// (0x00060a76) cell_dialer_keypad_pane

0x5426,	// (0x00060a8d) cell_dialer_command_1_pane_ParamLimits

0x5426,	// (0x00060a8d) cell_dialer_command_1_pane

0x543c,	// (0x00060aa3) cell_dialer_command_2_pane_ParamLimits

0x543c,	// (0x00060aa3) cell_dialer_command_2_pane

0xc961,	// (0x00067fc8) bg_button_pane_cp02_ParamLimits

0xc961,	// (0x00067fc8) bg_button_pane_cp02

0x544b,	// (0x00060ab2) cell_dialer_keypad_pane_g1_ParamLimits

0x544b,	// (0x00060ab2) cell_dialer_keypad_pane_g1

0xc961,	// (0x00067fc8) bg_button_pane_cp03_ParamLimits

0xc961,	// (0x00067fc8) bg_button_pane_cp03

0x545f,	// (0x00060ac6) cell_dialer_command_1_pane_g1_ParamLimits

0x545f,	// (0x00060ac6) cell_dialer_command_1_pane_g1

0xc96d,	// (0x00067fd4) bg_button_pane_cp04

0x5473,	// (0x00060ada) cell_dialer_command_2_pane_g1

0xac35,	// (0x0006629c) bg_button_pane_cp06

0xc975,	// (0x00067fdc) dialer_ne_clear_pane_g1

0x2dfb,	// (0x0005e462) navi_pane_g2

0x2e29,	// (0x0005e490) navi_pane_g3

0x0002,

0xf404,	// (0x0006aa6b) navi_pane_g

0x2e52,	// (0x0005e4b9) navi_pane_mv_g2

0x2e79,	// (0x0005e4e0) navi_pane_mv_g5

0x2e81,	// (0x0005e4e8) navi_pane_mv_t1

0x9fdf,	// (0x00065646) main_clock2_pane

0x54ab,	// (0x00060b12) main_clock2_list_pane_ParamLimits

0x54ab,	// (0x00060b12) main_clock2_list_pane

0x54e3,	// (0x00060b4a) main_clock2_pane_t1_ParamLimits

0x54e3,	// (0x00060b4a) main_clock2_pane_t1

0x551f,	// (0x00060b86) main_clock2_pane_t2_ParamLimits

0x551f,	// (0x00060b86) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0006ae4a) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0006ae4a) main_clock2_pane_t

0x55bc,	// (0x00060c23) popup_clock_analogue_window_cp03_ParamLimits

0x55bc,	// (0x00060c23) popup_clock_analogue_window_cp03

0x55e1,	// (0x00060c48) popup_clock_digital_window_cp02_ParamLimits

0x55e1,	// (0x00060c48) popup_clock_digital_window_cp02

0x5652,	// (0x00060cb9) main_clock2_list_single_pane_ParamLimits

0x5652,	// (0x00060cb9) main_clock2_list_single_pane

0xac35,	// (0x0006629c) list_highlight_pane_cp05

0xc97d,	// (0x00067fe4) main_clock2_list_single_pane_t1

0x1d6b,	// (0x0005d3d2) popup_toolbar_window_cp04_ParamLimits

0x4a66,	// (0x000600cd) camera2_autofocus_pane_g2_ParamLimits

0x4a66,	// (0x000600cd) camera2_autofocus_pane_g2

0x4a72,	// (0x000600d9) camera2_autofocus_pane_g3_ParamLimits

0x4a72,	// (0x000600d9) camera2_autofocus_pane_g3

0x4a7e,	// (0x000600e5) camera2_autofocus_pane_g4_ParamLimits

0x4a7e,	// (0x000600e5) camera2_autofocus_pane_g4

0x4a8a,	// (0x000600f1) camera2_autofocus_pane_g5_ParamLimits

0x4a8a,	// (0x000600f1) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0006ad93) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0006ad93) camera2_autofocus_pane_g

0x4ca7,	// (0x0006030e) camera2_autofocus_pane_cp_g2

0x4caf,	// (0x00060316) camera2_autofocus_pane_cp_g3

0x4cb7,	// (0x0006031e) camera2_autofocus_pane_cp_g4

0x4cbf,	// (0x00060326) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0006adf9) camera2_autofocus_pane_cp_g

0x5366,	// (0x000609cd) popup_dialer_spcha_window

0x0c38,	// (0x0005c29f) bg_popup_sub_pane_cp07

0xc98b,	// (0x00067ff2) list_spcha_pane

0xc993,	// (0x00067ffa) list_single_spcha_pane_ParamLimits

0xc993,	// (0x00067ffa) list_single_spcha_pane

0x0c38,	// (0x0005c29f) list_highlight_pane_cp06

0xc9a4,	// (0x0006800b) list_single_spcha_pane_t1

0xbac0,	// (0x00067127) popup_call2_audio_out_window_g4_ParamLimits

0xbac0,	// (0x00067127) popup_call2_audio_out_window_g4

0x0c38,	// (0x0005c29f) main_imed2_pane

0xc09f,	// (0x00067706) popup_imed_adjust2_window

0x3e43,	// (0x0005f4aa) popup_imed_trans_window_ParamLimits

0x3e43,	// (0x0005f4aa) popup_imed_trans_window

0xc3bb,	// (0x00067a22) popup_blid_sat_info2_window_t1

0xc3c9,	// (0x00067a30) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0006ad28) popup_blid_sat_info2_window_t

0x56fc,	// (0x00060d63) aid_size_cell_colour_35

0x571c,	// (0x00060d83) aid_size_cell_colour_112

0x573c,	// (0x00060da3) aid_size_cell_effect

0xc077,	// (0x000676de) bg_tb_trans_pane_cp02

0xa705,	// (0x00065d6c) heading_imed_pane

0x575c,	// (0x00060dc3) listscroll_imed_pane

0xc9b2,	// (0x00068019) heading_imed_pane_g1

0xc9ba,	// (0x00068021) heading_imed_pane_t1

0xc9c8,	// (0x0006802f) grid_imed_colour_35_pane_ParamLimits

0xc9c8,	// (0x0006802f) grid_imed_colour_35_pane

0x5768,	// (0x00060dcf) grid_imed_effect_pane

0xc9df,	// (0x00068046) list_imed_aspect_pane

0x577e,	// (0x00060de5) scroll_pane_cp027_ParamLimits

0x577e,	// (0x00060de5) scroll_pane_cp027

0x578f,	// (0x00060df6) cell_imed_effect_pane_ParamLimits

0x578f,	// (0x00060df6) cell_imed_effect_pane

0xc9e7,	// (0x0006804e) cell_imed_colour_pane_ParamLimits

0xc9e7,	// (0x0006804e) cell_imed_colour_pane

0xca29,	// (0x00068090) cell_imed_colour_pane_g1_ParamLimits

0xca29,	// (0x00068090) cell_imed_colour_pane_g1

0xca3a,	// (0x000680a1) hgihlgiht_grid_pane_cp016_ParamLimits

0xca3a,	// (0x000680a1) hgihlgiht_grid_pane_cp016

0x57b6,	// (0x00060e1d) cell_imed_effect_pane_g1

0x57be,	// (0x00060e25) grid_highlight_pane_cp017

0xca4b,	// (0x000680b2) list_imed_single_pane_ParamLimits

0xca4b,	// (0x000680b2) list_imed_single_pane

0x0c38,	// (0x0005c29f) list_highlight_pane_cp07

0xca60,	// (0x000680c7) list_imed_aspect_pane_comp1_t1

0xc077,	// (0x000676de) bg_tb_trans_pane_cp05

0xca82,	// (0x000680e9) popup_imed_adjust2_window_g1

0xcaa9,	// (0x00068110) popup_imed_adjust2_window_t1

0xcac1,	// (0x00068128) slider_imed_adjust_pane

0xcad5,	// (0x0006813c) slider_imed_adjust_pane_g1

0xcae5,	// (0x0006814c) slider_imed_adjust_pane_g2

0xcaf5,	// (0x0006815c) slider_imed_adjust_pane_g3

0xcb06,	// (0x0006816d) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0006ae67) slider_imed_adjust_pane_g

0x57c7,	// (0x00060e2e) aid_size_cell_clipart2

0x57d3,	// (0x00060e3a) grid_imed_clipart_pane

0xcb17,	// (0x0006817e) scroll_pane_cp031

0x57dd,	// (0x00060e44) cell_imed_clipart_pane_ParamLimits

0x57dd,	// (0x00060e44) cell_imed_clipart_pane

0x57ff,	// (0x00060e66) cell_imed_clipart_pane_g1

0x0c38,	// (0x0005c29f) grid_highlight_pane_cp014

0x54c0,	// (0x00060b27) main_clock2_pane_g1_ParamLimits

0x54c0,	// (0x00060b27) main_clock2_pane_g1

0x55fd,	// (0x00060c64) aid_call2_pane_cp10

0x560f,	// (0x00060c76) aid_call_pane_cp10

0xab6a,	// (0x000661d1) popup_clock_analogue_window_cp10_g1

0xab6a,	// (0x000661d1) popup_clock_analogue_window_cp10_g2

0x5621,	// (0x00060c88) popup_clock_analogue_window_cp10_g3

0x5621,	// (0x00060c88) popup_clock_analogue_window_cp10_g4

0xab6a,	// (0x000661d1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0006ae55) popup_clock_analogue_window_cp10_g

0x5633,	// (0x00060c9a) popup_clock_analogue_window_cp10_t1

0x5664,	// (0x00060ccb) clock_digital_number_pane_cp10_ParamLimits

0x5664,	// (0x00060ccb) clock_digital_number_pane_cp10

0x567c,	// (0x00060ce3) clock_digital_number_pane_cp11_ParamLimits

0x567c,	// (0x00060ce3) clock_digital_number_pane_cp11

0x5694,	// (0x00060cfb) clock_digital_number_pane_cp12_ParamLimits

0x5694,	// (0x00060cfb) clock_digital_number_pane_cp12

0x56ac,	// (0x00060d13) clock_digital_number_pane_cp13_ParamLimits

0x56ac,	// (0x00060d13) clock_digital_number_pane_cp13

0x56c4,	// (0x00060d2b) clock_digital_separator_pane_cp10_ParamLimits

0x56c4,	// (0x00060d2b) clock_digital_separator_pane_cp10

0x56dc,	// (0x00060d43) popup_clock_digital_window_cp02_t1_ParamLimits

0x56dc,	// (0x00060d43) popup_clock_digital_window_cp02_t1

0x9ed8,	// (0x0006553f) clock_digital_number_pane_cp10_g1

0x9ed8,	// (0x0006553f) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0006ae70) clock_digital_number_pane_cp10_g

0x9ed8,	// (0x0006553f) clock_digital_separator_pane_cp10_g1

0x9ed8,	// (0x0006553f) clock_digital_separator_pane_g2_cp10

0xac05,	// (0x0006626c) navi_pane_vded_g4

0xac0e,	// (0x00066275) navi_pane_vded_g5

0xac17,	// (0x0006627e) navi_pane_vded_t1

0x0c38,	// (0x0005c29f) main_vded_pane

0x5808,	// (0x00060e6f) main_vded_pane_g1

0x5812,	// (0x00060e79) main_vded_pane_g2

0x581c,	// (0x00060e83) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0006ae75) main_vded_pane_g

0x5826,	// (0x00060e8d) main_vded_pane_t1

0x5834,	// (0x00060e9b) main_vded_pane_t2

0x0001,

0xf815,	// (0x0006ae7c) main_vded_pane_t

0x5842,	// (0x00060ea9) vded_slider_pane

0x584a,	// (0x00060eb1) vded_video_pane

0xcb1f,	// (0x00068186) vded_video_pane_g1

0x5852,	// (0x00060eb9) vded_video_pane_g2

0xc57d,	// (0x00067be4) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0006ae81) vded_video_pane_g

0xcb29,	// (0x00068190) vded_slider_pane_g1

0xc28c,	// (0x000678f3) vded_slider_pane_g2

0xcb32,	// (0x00068199) vded_slider_pane_g3

0xcb3b,	// (0x000681a2) vded_slider_pane_g4

0xcb44,	// (0x000681ab) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0006ae88) vded_slider_pane_g

0x5247,	// (0x000608ae) mup3_rocker_pane_ParamLimits

0x5247,	// (0x000608ae) mup3_rocker_pane

0x585b,	// (0x00060ec2) mup3_control_keys_pane_g1

0x5863,	// (0x00060eca) mup3_control_keys_pane_g2

0x586b,	// (0x00060ed2) mup3_control_keys_pane_g3

0x5873,	// (0x00060eda) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0006ae93) mup3_control_keys_pane_g

0x0e94,	// (0x0005c4fb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0e94,	// (0x0005c4fb) popup_toolbar2_fixed_window_cp01

0x527b,	// (0x000608e2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x527b,	// (0x000608e2) popup_toolbar2_fixed_window_cp02

0xb3ff,	// (0x00066a66) popup_call2_audio_second_window_t4_ParamLimits

0xb3ff,	// (0x00066a66) popup_call2_audio_second_window_t4

0xb92d,	// (0x00066f94) popup_call2_audio_first_window_t6_ParamLimits

0xb92d,	// (0x00066f94) popup_call2_audio_first_window_t6

0xbbc3,	// (0x0006722a) popup_call2_audio_out_window_t6_ParamLimits

0xbbc3,	// (0x0006722a) popup_call2_audio_out_window_t6

0x0c38,	// (0x0005c29f) main_vitu_pane

0x5883,	// (0x00060eea) aid_size_cell_itu_ParamLimits

0x5883,	// (0x00060eea) aid_size_cell_itu

0x9864,	// (0x00064ecb) bg_popup_window_pane_cp08_ParamLimits

0x9864,	// (0x00064ecb) bg_popup_window_pane_cp08

0x5899,	// (0x00060f00) field_vitu_entry_pane_ParamLimits

0x5899,	// (0x00060f00) field_vitu_entry_pane

0x58b0,	// (0x00060f17) grid_vitu_function_pane_ParamLimits

0x58b0,	// (0x00060f17) grid_vitu_function_pane

0x58cb,	// (0x00060f32) grid_vitu_itu_pane_ParamLimits

0x58cb,	// (0x00060f32) grid_vitu_itu_pane

0x58e9,	// (0x00060f50) cell_vitu_itu_pane_ParamLimits

0x58e9,	// (0x00060f50) cell_vitu_itu_pane

0x590b,	// (0x00060f72) cell_vitu_function_pane_ParamLimits

0x590b,	// (0x00060f72) cell_vitu_function_pane

0x9864,	// (0x00064ecb) bg_popup_sub_pane_cp08_ParamLimits

0x9864,	// (0x00064ecb) bg_popup_sub_pane_cp08

0x5924,	// (0x00060f8b) field_vitu_entry_pane_t1_ParamLimits

0x5924,	// (0x00060f8b) field_vitu_entry_pane_t1

0xcb65,	// (0x000681cc) field_vitu_entry_pane_t2_ParamLimits

0xcb65,	// (0x000681cc) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0006aea1) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0006aea1) field_vitu_entry_pane_t

0xcb82,	// (0x000681e9) bg_button_pane_cp05_ParamLimits

0xcb82,	// (0x000681e9) bg_button_pane_cp05

0x5942,	// (0x00060fa9) cell_vitu_itu_pane_g1

0x595a,	// (0x00060fc1) cell_vitu_itu_pane_t1_ParamLimits

0x595a,	// (0x00060fc1) cell_vitu_itu_pane_t1

0x596c,	// (0x00060fd3) cell_vitu_itu_pane_t2_ParamLimits

0x596c,	// (0x00060fd3) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0006aea6) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0006aea6) cell_vitu_itu_pane_t

0xcb90,	// (0x000681f7) bg_button_pane_cp07

0x59a1,	// (0x00061008) cell_vitu_function_pane_g1

0x9f67,	// (0x000655ce) main_calc_pane_g1

0x0c7a,	// (0x0005c2e1) aid_visual_content_pane

0x0c38,	// (0x0005c29f) main_vradio_pane

0x59aa,	// (0x00061011) main_vradio_pane_g1_ParamLimits

0x59aa,	// (0x00061011) main_vradio_pane_g1

0xcb9a,	// (0x00068201) main_vradio_pane_g2_ParamLimits

0xcb9a,	// (0x00068201) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0006aead) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0006aead) main_vradio_pane_g

0x59c3,	// (0x0006102a) main_vradio_pane_t1_ParamLimits

0x59c3,	// (0x0006102a) main_vradio_pane_t1

0x59d8,	// (0x0006103f) main_vradio_pane_t2_ParamLimits

0x59d8,	// (0x0006103f) main_vradio_pane_t2

0xcba7,	// (0x0006820e) main_vradio_pane_t3_ParamLimits

0xcba7,	// (0x0006820e) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0006aeb2) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0006aeb2) main_vradio_pane_t

0x59ed,	// (0x00061054) vradio_rocker_control_pane_ParamLimits

0x59ed,	// (0x00061054) vradio_rocker_control_pane

0x59ff,	// (0x00061066) vradio_station_info_pane_ParamLimits

0x59ff,	// (0x00061066) vradio_station_info_pane

0xcbbb,	// (0x00068222) vradio_frequency_info_pane_ParamLimits

0xcbbb,	// (0x00068222) vradio_frequency_info_pane

0xc57d,	// (0x00067be4) vradio_station_info_pane_g1

0xcbca,	// (0x00068231) vradio_station_info_pane_t1_ParamLimits

0xcbca,	// (0x00068231) vradio_station_info_pane_t1

0xcbec,	// (0x00068253) vradio_station_info_pane_t2_ParamLimits

0xcbec,	// (0x00068253) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0006aeb9) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0006aeb9) vradio_station_info_pane_t

0xcbfe,	// (0x00068265) vradio_tuning_pane

0xcc06,	// (0x0006826d) vradio_rocker_control_pane_g1

0xcc0e,	// (0x00068275) vradio_rocker_control_pane_g2

0xcc16,	// (0x0006827d) vradio_rocker_control_pane_g3

0xcc1e,	// (0x00068285) vradio_rocker_control_pane_g4

0xcc26,	// (0x0006828d) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0006aebe) vradio_rocker_control_pane_g

0x5a11,	// (0x00061078) vradio_frequency_info_pane_g1

0xcc2e,	// (0x00068295) vradio_frequency_info_pane_t1_ParamLimits

0xcc2e,	// (0x00068295) vradio_frequency_info_pane_t1

0x5a1b,	// (0x00061082) vradio_tuning_pane_g1

0x5a26,	// (0x0006108d) vradio_tuning_pane_t1

0x0cd7,	// (0x0005c33e) area_side_right_pane_ParamLimits

0x0cd7,	// (0x0005c33e) area_side_right_pane

0xc03e,	// (0x000676a5) status_small_pane_g1

0xc046,	// (0x000676ad) status_small_pane_g2

0xc04f,	// (0x000676b6) status_small_pane_g3

0xc058,	// (0x000676bf) status_small_pane_g4

0x0003,

0xf617,	// (0x0006ac7e) status_small_pane_g

0xc061,	// (0x000676c8) status_small_pane_t1

0x0c38,	// (0x0005c29f) main_video3_pane

0xcc42,	// (0x000682a9) cams_zoom_vslider_pane

0xcc4a,	// (0x000682b1) image3_wide_pane_ParamLimits

0xcc4a,	// (0x000682b1) image3_wide_pane

0xcc64,	// (0x000682cb) image3_wide_small_pane

0xcc70,	// (0x000682d7) main_video3_pane_g1_ParamLimits

0xcc70,	// (0x000682d7) main_video3_pane_g1

0xcc8c,	// (0x000682f3) main_video3_pane_g2_ParamLimits

0xcc8c,	// (0x000682f3) main_video3_pane_g2

0x0001,

0xf862,	// (0x0006aec9) main_video3_pane_g_ParamLimits

0xf862,	// (0x0006aec9) main_video3_pane_g

0xcca8,	// (0x0006830f) main_video3_pane_t1_ParamLimits

0xcca8,	// (0x0006830f) main_video3_pane_t1

0xccd3,	// (0x0006833a) main_video3_pane_t2_ParamLimits

0xccd3,	// (0x0006833a) main_video3_pane_t2

0xccfe,	// (0x00068365) main_video3_pane_t3_ParamLimits

0xccfe,	// (0x00068365) main_video3_pane_t3

0x0002,

0xf867,	// (0x0006aece) main_video3_pane_t_ParamLimits

0xf867,	// (0x0006aece) main_video3_pane_t

0xcd2b,	// (0x00068392) cams_zoom_vslider_pane_g1

0xcd34,	// (0x0006839b) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0006aed5) cams_zoom_vslider_pane_g

0xcd3c,	// (0x000683a3) small_slider_vertical_pane

0xc57d,	// (0x00067be4) small_slider_vertical_pane_g1

0xc57d,	// (0x00067be4) small_slider_vertical_pane_g2

0xcd44,	// (0x000683ab) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0006aeda) small_slider_vertical_pane_g

0x0c38,	// (0x0005c29f) main_hwr_training_pane

0xcd4d,	// (0x000683b4) hwr_training_instruct_pane_ParamLimits

0xcd4d,	// (0x000683b4) hwr_training_instruct_pane

0x5a35,	// (0x0006109c) hwr_training_navi_pane_ParamLimits

0x5a35,	// (0x0006109c) hwr_training_navi_pane

0x5a54,	// (0x000610bb) hwr_training_write_pane_ParamLimits

0x5a54,	// (0x000610bb) hwr_training_write_pane

0x0c38,	// (0x0005c29f) bg_frame_shadow_pane

0xcd84,	// (0x000683eb) hwr_training_write_pane_g1

0xcd8c,	// (0x000683f3) hwr_training_write_pane_g2

0xcd94,	// (0x000683fb) hwr_training_write_pane_g3

0xcd9c,	// (0x00068403) hwr_training_write_pane_g4

0xcda4,	// (0x0006840b) hwr_training_write_pane_g5

0xcdac,	// (0x00068413) hwr_training_write_pane_g6

0xcdb4,	// (0x0006841b) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0006aee1) hwr_training_write_pane_g

0xd9e1,	// (0x00069048) hwr_training_navi_pane_g1_ParamLimits

0xd9e1,	// (0x00069048) hwr_training_navi_pane_g1

0xd9f3,	// (0x0006905a) hwr_training_navi_pane_g2_ParamLimits

0xd9f3,	// (0x0006905a) hwr_training_navi_pane_g2

0xda05,	// (0x0006906c) hwr_training_navi_pane_g3_ParamLimits

0xda05,	// (0x0006906c) hwr_training_navi_pane_g3

0xda15,	// (0x0006907c) hwr_training_navi_pane_g4_ParamLimits

0xda15,	// (0x0006907c) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0006aef0) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0006aef0) hwr_training_navi_pane_g

0xda22,	// (0x00069089) hwr_training_navi_pane_t1

0x5a9c,	// (0x00061103) list_single_hwr_training_instruct_pane_ParamLimits

0x5a9c,	// (0x00061103) list_single_hwr_training_instruct_pane

0xcdbc,	// (0x00068423) list_single_hwr_training_instruct_pane_t1

0xc4bd,	// (0x00067b24) bg_frame_shadow_pane_g1

0xcdcb,	// (0x00068432) bg_frame_shadow_pane_g2

0xcdd3,	// (0x0006843a) bg_frame_shadow_pane_g3

0xcddb,	// (0x00068442) bg_frame_shadow_pane_g4

0xcde3,	// (0x0006844a) bg_frame_shadow_pane_g5

0xcdeb,	// (0x00068452) bg_frame_shadow_pane_g6

0xcdf3,	// (0x0006845a) bg_frame_shadow_pane_g7

0xa0bc,	// (0x00065723) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0006aefb) bg_frame_shadow_pane_g

0x0c38,	// (0x0005c29f) main_video_tele_dialer_pane

0x5ab1,	// (0x00061118) aid_size_cell_video_keypad_ParamLimits

0x5ab1,	// (0x00061118) aid_size_cell_video_keypad

0x5acb,	// (0x00061132) grid_video_dialer_keypad_pane_ParamLimits

0x5acb,	// (0x00061132) grid_video_dialer_keypad_pane

0x5b15,	// (0x0006117c) video_down_pane_cp_ParamLimits

0x5b15,	// (0x0006117c) video_down_pane_cp

0x5b25,	// (0x0006118c) cell_video_dialer_keypad_pane_ParamLimits

0x5b25,	// (0x0006118c) cell_video_dialer_keypad_pane

0xce17,	// (0x0006847e) bg_button_pane_cp08_ParamLimits

0xce17,	// (0x0006847e) bg_button_pane_cp08

0x5b47,	// (0x000611ae) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5b47,	// (0x000611ae) cell_video_dialer_keypad_pane_g1

0x5231,	// (0x00060898) mup3_rocker2_pane_ParamLimits

0x5231,	// (0x00060898) mup3_rocker2_pane

0xc57d,	// (0x00067be4) mup3_rocker2_pane_g1

0x3d24,	// (0x0005f38b) main_dialer2_pane

0x0c38,	// (0x0005c29f) main_mp4_pane

0xda38,	// (0x0006909f) main_mp4_pane_g1_ParamLimits

0xda38,	// (0x0006909f) main_mp4_pane_g1

0xda38,	// (0x0006909f) main_mp4_pane_g2_ParamLimits

0xda38,	// (0x0006909f) main_mp4_pane_g2

0x5b81,	// (0x000611e8) main_mp4_pane_g3_ParamLimits

0x5b81,	// (0x000611e8) main_mp4_pane_g3

0xda46,	// (0x000690ad) main_mp4_pane_g4_ParamLimits

0xda46,	// (0x000690ad) main_mp4_pane_g4

0xda6e,	// (0x000690d5) main_mp4_pane_g5_ParamLimits

0xda6e,	// (0x000690d5) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0006af1b) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0006af1b) main_mp4_pane_g

0xdabe,	// (0x00069125) main_mp4_pane_t1_ParamLimits

0xdabe,	// (0x00069125) main_mp4_pane_t1

0xdb1a,	// (0x00069181) main_mp4_pane_t2_ParamLimits

0xdb1a,	// (0x00069181) main_mp4_pane_t2

0xde32,	// (0x00069499) main_mp4_pane_t3_ParamLimits

0xde32,	// (0x00069499) main_mp4_pane_t3

0xdb6c,	// (0x000691d3) main_mp4_pane_t4_ParamLimits

0xdb6c,	// (0x000691d3) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0006af28) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0006af28) main_mp4_pane_t

0xdbb0,	// (0x00069217) mp4_progress_pane_ParamLimits

0xdbb0,	// (0x00069217) mp4_progress_pane

0xdbfa,	// (0x00069261) mp4_rocker_pane_ParamLimits

0xdbfa,	// (0x00069261) mp4_rocker_pane

0xde5a,	// (0x000694c1) mp4_progress_pane_t1

0xde73,	// (0x000694da) mp4_progress_pane_t2

0x0001,

0x04a7,	// (0x0005bb0e) mp4_progress_pane_t

0xde8c,	// (0x000694f3) mup_progress_pane_cp04

0xde98,	// (0x000694ff) mp4_rocker_pane_g1

0x5bbd,	// (0x00061224) aid_cell_size_keypad2_ParamLimits

0x5bbd,	// (0x00061224) aid_cell_size_keypad2

0x5bd3,	// (0x0006123a) dialer2_ne_pane_ParamLimits

0x5bd3,	// (0x0006123a) dialer2_ne_pane

0x5bed,	// (0x00061254) grid_dialer2_keypad_pane_ParamLimits

0x5bed,	// (0x00061254) grid_dialer2_keypad_pane

0xc362,	// (0x000679c9) bg_popup_call_pane_cp07_ParamLimits

0xc362,	// (0x000679c9) bg_popup_call_pane_cp07

0x5c09,	// (0x00061270) dialer2_ne_pane_t1_ParamLimits

0x5c09,	// (0x00061270) dialer2_ne_pane_t1

0x5c44,	// (0x000612ab) cell_dialer2_keypad_pane_ParamLimits

0x5c44,	// (0x000612ab) cell_dialer2_keypad_pane

0xdeb4,	// (0x0006951b) bg_button_pane_pane_cp04_ParamLimits

0xdeb4,	// (0x0006951b) bg_button_pane_pane_cp04

0x5c66,	// (0x000612cd) cell_dialer2_keypad_pane_g1_ParamLimits

0x5c66,	// (0x000612cd) cell_dialer2_keypad_pane_g1

0x1c3f,	// (0x0005d2a6) aid_placing_vt_set_content_ParamLimits

0x1c3f,	// (0x0005d2a6) aid_placing_vt_set_content

0x1c67,	// (0x0005d2ce) aid_placing_vt_set_title_ParamLimits

0x1c67,	// (0x0005d2ce) aid_placing_vt_set_title

0x0c38,	// (0x0005c29f) main_image3_pane

0x5d2c,	// (0x00061393) area_side_right_pane_cp01_ParamLimits

0x5d2c,	// (0x00061393) area_side_right_pane_cp01

0xda38,	// (0x0006909f) main_image3_pane_g1_ParamLimits

0xda38,	// (0x0006909f) main_image3_pane_g1

0x5d43,	// (0x000613aa) main_image3_pane_g2_ParamLimits

0x5d43,	// (0x000613aa) main_image3_pane_g2

0x5d6b,	// (0x000613d2) main_image3_pane_g3_ParamLimits

0x5d6b,	// (0x000613d2) main_image3_pane_g3

0x5d95,	// (0x000613fc) main_image3_pane_g4_ParamLimits

0x5d95,	// (0x000613fc) main_image3_pane_g4

0x0003,

0xf8d4,	// (0x0006af3b) main_image3_pane_g_ParamLimits

0xf8d4,	// (0x0006af3b) main_image3_pane_g

0x5dbf,	// (0x00061426) main_image3_pane_t1_ParamLimits

0x5dbf,	// (0x00061426) main_image3_pane_t1

0x5e17,	// (0x0006147e) main_image3_pane_t2_ParamLimits

0x5e17,	// (0x0006147e) main_image3_pane_t2

0x5e69,	// (0x000614d0) main_image3_pane_t3_ParamLimits

0x5e69,	// (0x000614d0) main_image3_pane_t3

0x0003,

0xf8dd,	// (0x0006af44) main_image3_pane_t_ParamLimits

0xf8dd,	// (0x0006af44) main_image3_pane_t

0x9864,	// (0x00064ecb) grid_sctrl_middle_pane_cp01_ParamLimits

0x9864,	// (0x00064ecb) grid_sctrl_middle_pane_cp01

0x5ef1,	// (0x00061558) cell_sctrl_middle_pane_cp01_ParamLimits

0x5ef1,	// (0x00061558) cell_sctrl_middle_pane_cp01

0x5f0e,	// (0x00061575) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5f0e,	// (0x00061575) cell_sctrl_middle_pane_cp01_g1

0x0c38,	// (0x0005c29f) main_call4_pane

0x5f24,	// (0x0006158b) aid_size_button_call4_ParamLimits

0x5f24,	// (0x0006158b) aid_size_button_call4

0x5f55,	// (0x000615bc) call4_windows_pane_ParamLimits

0x5f55,	// (0x000615bc) call4_windows_pane

0x5f75,	// (0x000615dc) grid_call4_button_pane_ParamLimits

0x5f75,	// (0x000615dc) grid_call4_button_pane

0xdec0,	// (0x00069527) call4_windows_conf_pane

0xded7,	// (0x0006953e) popup_call4_audio_first_window_ParamLimits

0xded7,	// (0x0006953e) popup_call4_audio_first_window

0xdf23,	// (0x0006958a) popup_call4_audio_second_window_ParamLimits

0xdf23,	// (0x0006958a) popup_call4_audio_second_window

0xdf37,	// (0x0006959e) popup_call4_audio_wait_window_ParamLimits

0xdf37,	// (0x0006959e) popup_call4_audio_wait_window

0x5fa2,	// (0x00061609) cell_call4_button_pane_ParamLimits

0x5fa2,	// (0x00061609) cell_call4_button_pane

0x5fcb,	// (0x00061632) bg_button_pane_cp09_ParamLimits

0x5fcb,	// (0x00061632) bg_button_pane_cp09

0x5fd7,	// (0x0006163e) cell_call4_button_pane_g1_ParamLimits

0x5fd7,	// (0x0006163e) cell_call4_button_pane_g1

0x5ffd,	// (0x00061664) cell_call4_button_pane_t1_ParamLimits

0x5ffd,	// (0x00061664) cell_call4_button_pane_t1

0xdf7f,	// (0x000695e6) popup_call4_audio_conf_window_ParamLimits

0xdf7f,	// (0x000695e6) popup_call4_audio_conf_window

0x5291,	// (0x000608f8) mup3_progress_pane_t1_ParamLimits

0x52b0,	// (0x00060917) mup3_progress_pane_t2_ParamLimits

0xc864,	// (0x00067ecb) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0006ae22) mup3_progress_pane_t_ParamLimits

0xc881,	// (0x00067ee8) mup_progress_pane_cp03_ParamLimits

0x587b,	// (0x00060ee2) mup3_control_keys_pane_g4_copy1

0xdbde,	// (0x00069245) mp4_rocker2_pane_ParamLimits

0xdbde,	// (0x00069245) mp4_rocker2_pane

0xdf93,	// (0x000695fa) mp4_rocker2_pane_g1

0xdf9b,	// (0x00069602) mp4_rocker2_pane_g2

0xdc4c,	// (0x000692b3) mp4_rocker2_pane_g3

0xdc54,	// (0x000692bb) mp4_rocker2_pane_g4

0xdc5c,	// (0x000692c3) mp4_rocker2_pane_g5

0x0004,

0xf8e6,	// (0x0006af4d) mp4_rocker2_pane_g

0x0c38,	// (0x0005c29f) main_camera4_pane

0x0c38,	// (0x0005c29f) main_video4_pane

0x5ae3,	// (0x0006114a) main_video_tele_dialer_pane_t1_ParamLimits

0x5ae3,	// (0x0006114a) main_video_tele_dialer_pane_t1

0x5afc,	// (0x00061163) main_video_tele_dialer_pane_t2_ParamLimits

0x5afc,	// (0x00061163) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0006af0c) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0006af0c) main_video_tele_dialer_pane_t

0x603b,	// (0x000616a2) cam4_autofocus_pane_ParamLimits

0x603b,	// (0x000616a2) cam4_autofocus_pane

0x6051,	// (0x000616b8) cam4_image_uncrop_pane_ParamLimits

0x6051,	// (0x000616b8) cam4_image_uncrop_pane

0x606b,	// (0x000616d2) cam4_indicators_pane_ParamLimits

0x606b,	// (0x000616d2) cam4_indicators_pane

0x6096,	// (0x000616fd) main_camera4_pane_g1_ParamLimits

0x6096,	// (0x000616fd) main_camera4_pane_g1

0x60a9,	// (0x00061710) main_camera4_pane_g2_ParamLimits

0x60a9,	// (0x00061710) main_camera4_pane_g2

0x60bc,	// (0x00061723) main_camera4_pane_g3_ParamLimits

0x60bc,	// (0x00061723) main_camera4_pane_g3

0x60cf,	// (0x00061736) main_camera4_pane_g4_ParamLimits

0x60cf,	// (0x00061736) main_camera4_pane_g4

0x60e2,	// (0x00061749) main_camera4_pane_g5_ParamLimits

0x60e2,	// (0x00061749) main_camera4_pane_g5

0x0005,

0xf8f1,	// (0x0006af58) main_camera4_pane_g_ParamLimits

0xf8f1,	// (0x0006af58) main_camera4_pane_g

0x6106,	// (0x0006176d) main_camera4_pane_t1_ParamLimits

0x6106,	// (0x0006176d) main_camera4_pane_t1

0xdc80,	// (0x000692e7) bg_tb_trans_pane_cp06

0xdc96,	// (0x000692fd) cam4_indicators_pane_g1

0xdca7,	// (0x0006930e) cam4_indicators_pane_g2

0x0002,

0xf90c,	// (0x0006af73) cam4_indicators_pane_g

0xdcc5,	// (0x0006932c) cam4_indicators_pane_t1

0x616a,	// (0x000617d1) main_video4_pane_g1_ParamLimits

0x616a,	// (0x000617d1) main_video4_pane_g1

0x617d,	// (0x000617e4) main_video4_pane_g2_ParamLimits

0x617d,	// (0x000617e4) main_video4_pane_g2

0x6191,	// (0x000617f8) main_video4_pane_g3_ParamLimits

0x6191,	// (0x000617f8) main_video4_pane_g3

0x61a5,	// (0x0006180c) main_video4_pane_g4_ParamLimits

0x61a5,	// (0x0006180c) main_video4_pane_g4

0x0004,

0xf913,	// (0x0006af7a) main_video4_pane_g_ParamLimits

0xf913,	// (0x0006af7a) main_video4_pane_g

0x61cd,	// (0x00061834) vid4_indicators_pane_ParamLimits

0x61cd,	// (0x00061834) vid4_indicators_pane

0x61fd,	// (0x00061864) video4_image_uncrop_cif_pane_ParamLimits

0x61fd,	// (0x00061864) video4_image_uncrop_cif_pane

0x6217,	// (0x0006187e) video4_image_uncrop_nhd_pane_ParamLimits

0x6217,	// (0x0006187e) video4_image_uncrop_nhd_pane

0x6051,	// (0x000616b8) video4_image_uncrop_vga_pane_ParamLimits

0x6051,	// (0x000616b8) video4_image_uncrop_vga_pane

0xdce7,	// (0x0006934e) bg_tb_trans_pane_cp07

0x622b,	// (0x00061892) vid4_indicators_pane_g1

0x6238,	// (0x0006189f) vid4_indicators_pane_g2

0x6245,	// (0x000618ac) vid4_indicators_pane_g3

0x0004,

0xf91e,	// (0x0006af85) vid4_indicators_pane_g

0x626a,	// (0x000618d1) vid4_indicators_pane_t1

0x627c,	// (0x000618e3) cam4_autofocus_pane_g1

0x6284,	// (0x000618eb) cam4_autofocus_pane_g2

0x628c,	// (0x000618f3) cam4_autofocus_pane_g3

0x0002,

0xf929,	// (0x0006af90) cam4_autofocus_pane_g

0x6294,	// (0x000618fb) cam4_autofocus_pane_g3_copy1

0xcdfb,	// (0x00068462) video_down_pane_cp_t1

0xce09,	// (0x00068470) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0006af11) video_down_pane_cp_t

0x9864,	// (0x00064ecb) popup_vitu2_window_ParamLimits

0x9864,	// (0x00064ecb) popup_vitu2_window

0x629c,	// (0x00061903) aid_size_cell2_itu2_ParamLimits

0x629c,	// (0x00061903) aid_size_cell2_itu2

0x62c2,	// (0x00061929) aid_size_cell_itu2_ParamLimits

0x62c2,	// (0x00061929) aid_size_cell_itu2

0x631e,	// (0x00061985) bg_popup_window_pane_cp09_ParamLimits

0x631e,	// (0x00061985) bg_popup_window_pane_cp09

0x632c,	// (0x00061993) field_vitu2_entry_pane_ParamLimits

0x632c,	// (0x00061993) field_vitu2_entry_pane

0x6352,	// (0x000619b9) grid_vitu2_function_pane_ParamLimits

0x6352,	// (0x000619b9) grid_vitu2_function_pane

0x63a3,	// (0x00061a0a) grid_vitu2_itu_pane_ParamLimits

0x63a3,	// (0x00061a0a) grid_vitu2_itu_pane

0x6436,	// (0x00061a9d) cell_vitu2_itu_pane_ParamLimits

0x6436,	// (0x00061a9d) cell_vitu2_itu_pane

0x645a,	// (0x00061ac1) cell_vitu2_function_pane_ParamLimits

0x645a,	// (0x00061ac1) cell_vitu2_function_pane

0xdfa3,	// (0x0006960a) bg_popup_call_pane_cp08_ParamLimits

0xdfa3,	// (0x0006960a) bg_popup_call_pane_cp08

0xdfbc,	// (0x00069623) field_vitu2_entry_pane_g1

0xdfc8,	// (0x0006962f) field_vitu2_entry_pane_g2

0x0002,

0xf930,	// (0x0006af97) field_vitu2_entry_pane_g

0x6499,	// (0x00061b00) field_vitu2_entry_pane_t1_ParamLimits

0x6499,	// (0x00061b00) field_vitu2_entry_pane_t1

0x64c8,	// (0x00061b2f) field_vitu2_entry_pane_t2_ParamLimits

0x64c8,	// (0x00061b2f) field_vitu2_entry_pane_t2

0x0001,

0xf937,	// (0x0006af9e) field_vitu2_entry_pane_t_ParamLimits

0xf937,	// (0x0006af9e) field_vitu2_entry_pane_t

0x64e5,	// (0x00061b4c) bg_button_pane_cp010_ParamLimits

0x64e5,	// (0x00061b4c) bg_button_pane_cp010

0x64f3,	// (0x00061b5a) cell_vitu2_itu_pane_g1

0x6511,	// (0x00061b78) cell_vitu2_itu_pane_t1_ParamLimits

0x6511,	// (0x00061b78) cell_vitu2_itu_pane_t1

0x0b44,	// (0x0005c1ab) cell_vitu2_itu_pane_t2_ParamLimits

0x0b44,	// (0x0005c1ab) cell_vitu2_itu_pane_t2

0x0002,

0xf941,	// (0x0006afa8) cell_vitu2_itu_pane_t_ParamLimits

0xf941,	// (0x0006afa8) cell_vitu2_itu_pane_t

0xdcff,	// (0x00069366) bg_button_pane_cp011

0x6577,	// (0x00061bde) cell_vitu2_function_pane_g1

0x0c38,	// (0x0005c29f) main_myfav_hc_pane

0x5eb9,	// (0x00061520) popup_image3_note_pane_ParamLimits

0x5eb9,	// (0x00061520) popup_image3_note_pane

0x5ed5,	// (0x0006153c) popup_image3_tool_bar_pane_ParamLimits

0x5ed5,	// (0x0006153c) popup_image3_tool_bar_pane

0x0bc8,	// (0x0005c22f) cell_vitu2_itu_pane_t3_ParamLimits

0x0bc8,	// (0x0005c22f) cell_vitu2_itu_pane_t3

0x0c38,	// (0x0005c29f) bg_popup_trans_pane

0xdfea,	// (0x00069651) grid_image3_tool_bar_pane

0xdff4,	// (0x0006965b) bg_popup_trans_pane_g1

0xa4ab,	// (0x00065b12) bg_popup_trans_pane_g2

0xdffc,	// (0x00069663) bg_popup_trans_pane_g3

0xe004,	// (0x0006966b) bg_popup_trans_pane_g4

0xe00c,	// (0x00069673) bg_popup_trans_pane_g5

0xe014,	// (0x0006967b) bg_popup_trans_pane_g6

0xe01c,	// (0x00069683) bg_popup_trans_pane_g7

0xe024,	// (0x0006968b) bg_popup_trans_pane_g8

0xa48b,	// (0x00065af2) bg_popup_trans_pane_g9

0x0008,

0xf948,	// (0x0006afaf) bg_popup_trans_pane_g

0xe02c,	// (0x00069693) cell_image3_tool_bar_pane_ParamLimits

0xe02c,	// (0x00069693) cell_image3_tool_bar_pane

0xc57d,	// (0x00067be4) cell_image3_tool_bar_pane_g1

0x0c38,	// (0x0005c29f) bg_popup_trans_pane_cp1

0xe040,	// (0x000696a7) popup_image3_note_pane_t1

0xe04e,	// (0x000696b5) popup_image3_note_pane_t2

0xe05c,	// (0x000696c3) popup_image3_note_pane_t3

0x0002,

0xf95b,	// (0x0006afc2) popup_image3_note_pane_t

0xe06a,	// (0x000696d1) popup_image3_note_pane_t3_copy1

0x658b,	// (0x00061bf2) bg_myfav_hc_instruction_pane_ParamLimits

0x658b,	// (0x00061bf2) bg_myfav_hc_instruction_pane

0x659f,	// (0x00061c06) cell_myfav_contact_pane_ParamLimits

0x659f,	// (0x00061c06) cell_myfav_contact_pane

0x65bd,	// (0x00061c24) cell_myfav_contact_pane_cp1_ParamLimits

0x65bd,	// (0x00061c24) cell_myfav_contact_pane_cp1

0x65d5,	// (0x00061c3c) cell_myfav_contact_pane_cp2_ParamLimits

0x65d5,	// (0x00061c3c) cell_myfav_contact_pane_cp2

0x65ed,	// (0x00061c54) cell_myfav_contact_pane_cp3_ParamLimits

0x65ed,	// (0x00061c54) cell_myfav_contact_pane_cp3

0x6604,	// (0x00061c6b) cell_myfav_contact_pane_cp4_ParamLimits

0x6604,	// (0x00061c6b) cell_myfav_contact_pane_cp4

0x661c,	// (0x00061c83) cell_myfav_contact_pane_cp5_ParamLimits

0x661c,	// (0x00061c83) cell_myfav_contact_pane_cp5

0x6630,	// (0x00061c97) cell_myfav_contact_pane_cp6_ParamLimits

0x6630,	// (0x00061c97) cell_myfav_contact_pane_cp6

0x6646,	// (0x00061cad) cell_myfav_contact_pane_cp7_ParamLimits

0x6646,	// (0x00061cad) cell_myfav_contact_pane_cp7

0xe078,	// (0x000696df) listscroll_gen_pane_cp05

0x6660,	// (0x00061cc7) main_myfav_hc_pane_g1_ParamLimits

0x6660,	// (0x00061cc7) main_myfav_hc_pane_g1

0x667a,	// (0x00061ce1) main_myfav_hc_pane_g2_ParamLimits

0x667a,	// (0x00061ce1) main_myfav_hc_pane_g2

0x0002,

0xf962,	// (0x0006afc9) main_myfav_hc_pane_g_ParamLimits

0xf962,	// (0x0006afc9) main_myfav_hc_pane_g

0x66ac,	// (0x00061d13) main_myfav_hc_pane_t1_ParamLimits

0x66ac,	// (0x00061d13) main_myfav_hc_pane_t1

0xe081,	// (0x000696e8) main_myfav_hc_pane_t2_ParamLimits

0xe081,	// (0x000696e8) main_myfav_hc_pane_t2

0xe093,	// (0x000696fa) main_myfav_hc_pane_t3_ParamLimits

0xe093,	// (0x000696fa) main_myfav_hc_pane_t3

0x66c3,	// (0x00061d2a) main_myfav_hc_pane_t4_ParamLimits

0x66c3,	// (0x00061d2a) main_myfav_hc_pane_t4

0x0004,

0xf969,	// (0x0006afd0) main_myfav_hc_pane_t_ParamLimits

0xf969,	// (0x0006afd0) main_myfav_hc_pane_t

0xc57d,	// (0x00067be4) bg_myfav_hc_instruction_pane_g1

0xe0a5,	// (0x0006970c) cell_myfav_contact_pane_g1_ParamLimits

0xe0a5,	// (0x0006970c) cell_myfav_contact_pane_g1

0xe0a5,	// (0x0006970c) cell_myfav_contact_pane_g2_ParamLimits

0xe0a5,	// (0x0006970c) cell_myfav_contact_pane_g2

0xe0b1,	// (0x00069718) cell_myfav_contact_pane_g3_ParamLimits

0xe0b1,	// (0x00069718) cell_myfav_contact_pane_g3

0xc84e,	// (0x00067eb5) cell_myfav_contact_pane_g4_ParamLimits

0xc84e,	// (0x00067eb5) cell_myfav_contact_pane_g4

0xe0be,	// (0x00069725) cell_myfav_contact_pane_g5_ParamLimits

0xe0be,	// (0x00069725) cell_myfav_contact_pane_g5

0x0004,

0xf974,	// (0x0006afdb) cell_myfav_contact_pane_g_ParamLimits

0xf974,	// (0x0006afdb) cell_myfav_contact_pane_g

0x6694,	// (0x00061cfb) main_myfav_hc_pane_g3_ParamLimits

0x6694,	// (0x00061cfb) main_myfav_hc_pane_g3

0x0dec,	// (0x0005c453) popup_adpt_find_window

0x66eb,	// (0x00061d52) afind_page_pane_ParamLimits

0x66eb,	// (0x00061d52) afind_page_pane

0x6700,	// (0x00061d67) aid_size_cell_afind_ParamLimits

0x6700,	// (0x00061d67) aid_size_cell_afind

0x671e,	// (0x00061d85) bg_popup_sub_pane_cp09_ParamLimits

0x671e,	// (0x00061d85) bg_popup_sub_pane_cp09

0x672b,	// (0x00061d92) find_pane_cp01_ParamLimits

0x672b,	// (0x00061d92) find_pane_cp01

0xe0ca,	// (0x00069731) grid_afind_control_pane_ParamLimits

0xe0ca,	// (0x00069731) grid_afind_control_pane

0x6738,	// (0x00061d9f) grid_afind_pane_ParamLimits

0x6738,	// (0x00061d9f) grid_afind_pane

0x675a,	// (0x00061dc1) cell_afind_pane_ParamLimits

0x675a,	// (0x00061dc1) cell_afind_pane

0xc57d,	// (0x00067be4) afind_page_pane_g1

0x67bb,	// (0x00061e22) afind_page_pane_g2

0x67c4,	// (0x00061e2b) afind_page_pane_g3

0x0002,

0xf97f,	// (0x0006afe6) afind_page_pane_g

0x67cd,	// (0x00061e34) afind_page_pane_t1

0xe0de,	// (0x00069745) cell_afind_grid_control_pane_ParamLimits

0xe0de,	// (0x00069745) cell_afind_grid_control_pane

0xdeb4,	// (0x0006951b) bg_button_pane_cp69_ParamLimits

0xdeb4,	// (0x0006951b) bg_button_pane_cp69

0x67ed,	// (0x00061e54) cell_afind_pane_g1_ParamLimits

0x67ed,	// (0x00061e54) cell_afind_pane_g1

0x67fa,	// (0x00061e61) cell_afind_pane_t1_ParamLimits

0x67fa,	// (0x00061e61) cell_afind_pane_t1

0xa2a4,	// (0x0006590b) bg_button_pane_cp72

0xe0ed,	// (0x00069754) cell_afind_grid_control_pane_g1

0x37e4,	// (0x0005ee4b) aid_image_placing_area_ParamLimits

0x37e4,	// (0x0005ee4b) aid_image_placing_area

0xcb4d,	// (0x000681b4) field_vitu_entry_pane_g1_ParamLimits

0xcb4d,	// (0x000681b4) field_vitu_entry_pane_g1

0xcb59,	// (0x000681c0) field_vitu_entry_pane_g2_ParamLimits

0xcb59,	// (0x000681c0) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0006ae9c) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0006ae9c) field_vitu_entry_pane_g

0x5942,	// (0x00060fa9) cell_vitu_itu_pane_g1_ParamLimits

0x5984,	// (0x00060feb) cell_vitu_itu_pane_t3_ParamLimits

0x5984,	// (0x00060feb) cell_vitu_itu_pane_t3

0xde5a,	// (0x000694c1) mp4_progress_pane_t1_ParamLimits

0xde73,	// (0x000694da) mp4_progress_pane_t2_ParamLimits

0x04a7,	// (0x0005bb0e) mp4_progress_pane_t_ParamLimits

0xde8c,	// (0x000694f3) mup_progress_pane_cp04_ParamLimits

0x66d7,	// (0x00061d3e) main_myfav_hc_pane_t5_ParamLimits

0x66d7,	// (0x00061d3e) main_myfav_hc_pane_t5

0x0c8e,	// (0x0005c2f5) aid_zoom_text_primary

0x0dec,	// (0x0005c453) popup_adpt_find_window_ParamLimits

0x9864,	// (0x00064ecb) main_cam_set_pane

0x6082,	// (0x000616e9) cam4_zoom_pane_ParamLimits

0x6082,	// (0x000616e9) cam4_zoom_pane

0x680c,	// (0x00061e73) main_cam_set_pane_g1_ParamLimits

0x680c,	// (0x00061e73) main_cam_set_pane_g1

0x681a,	// (0x00061e81) main_cam_set_pane_g2_ParamLimits

0x681a,	// (0x00061e81) main_cam_set_pane_g2

0x0001,

0xf986,	// (0x0006afed) main_cam_set_pane_g_ParamLimits

0xf986,	// (0x0006afed) main_cam_set_pane_g

0x683b,	// (0x00061ea2) main_cam_set_pane_t1_ParamLimits

0x683b,	// (0x00061ea2) main_cam_set_pane_t1

0x6856,	// (0x00061ebd) main_cset_listscroll_pane_ParamLimits

0x6856,	// (0x00061ebd) main_cset_listscroll_pane

0x6876,	// (0x00061edd) main_cset_slider_pane_ParamLimits

0x6876,	// (0x00061edd) main_cset_slider_pane

0xe0fe,	// (0x00069765) main_cset_list_pane_ParamLimits

0xe0fe,	// (0x00069765) main_cset_list_pane

0xe10e,	// (0x00069775) scroll_pane_cp028

0x689c,	// (0x00061f03) aid_area_touch_slider

0x68b8,	// (0x00061f1f) cset_slider_pane

0x68e2,	// (0x00061f49) main_cset_slider_pane_g1

0x68f7,	// (0x00061f5e) main_cset_slider_pane_g2

0x0011,

0xf98b,	// (0x0006aff2) main_cset_slider_pane_g

0xe147,	// (0x000697ae) main_cset_slider_pane_t1

0x69b3,	// (0x0006201a) main_cset_slider_pane_t2

0x69cd,	// (0x00062034) main_cset_slider_pane_t3

0x69e7,	// (0x0006204e) main_cset_slider_pane_t4

0x6a01,	// (0x00062068) main_cset_slider_pane_t5

0x6a1b,	// (0x00062082) main_cset_slider_pane_t6

0x6a30,	// (0x00062097) main_cset_slider_pane_t7

0x000e,

0xf9b0,	// (0x0006b017) main_cset_slider_pane_t

0x6b34,	// (0x0006219b) cset_list_set_pane_ParamLimits

0x6b34,	// (0x0006219b) cset_list_set_pane

0x6b46,	// (0x000621ad) aid_position_infowindow_above

0x6b4e,	// (0x000621b5) aid_position_infowindow_below

0x6b56,	// (0x000621bd) cset_list_set_pane_g1_ParamLimits

0x6b56,	// (0x000621bd) cset_list_set_pane_g1

0x6b62,	// (0x000621c9) cset_list_set_pane_g3_ParamLimits

0x6b62,	// (0x000621c9) cset_list_set_pane_g3

0x0001,

0xf9cf,	// (0x0006b036) cset_list_set_pane_g_ParamLimits

0xf9cf,	// (0x0006b036) cset_list_set_pane_g

0x6b71,	// (0x000621d8) cset_list_set_pane_t1_ParamLimits

0x6b71,	// (0x000621d8) cset_list_set_pane_t1

0x9864,	// (0x00064ecb) list_highlight_pane_cp021_ParamLimits

0x9864,	// (0x00064ecb) list_highlight_pane_cp021

0xad8b,	// (0x000663f2) cset_slider_pane_g1

0xad9d,	// (0x00066404) cset_slider_pane_g2

0xad94,	// (0x000663fb) cset_slider_pane_g3

0x0002,

0xf9d4,	// (0x0006b03b) cset_slider_pane_g

0xdd0d,	// (0x00069374) aid_area_touch_cam4_zoom

0xdd15,	// (0x0006937c) cam4_zoom_cont_pane

0xdd1d,	// (0x00069384) cam4_zoom_pane_g1

0xdd25,	// (0x0006938c) cam4_zoom_pane_g2

0x6b86,	// (0x000621ed) cam4_zoom_pane_g3

0x0002,

0xf9db,	// (0x0006b042) cam4_zoom_pane_g

0xdd2d,	// (0x00069394) cam4_zoom_cont_pane_g1

0xdd36,	// (0x0006939d) cam4_zoom_cont_pane_g2

0xdd3f,	// (0x000693a6) cam4_zoom_cont_pane_g3

0x0002,

0xf9e2,	// (0x0006b049) cam4_zoom_cont_pane_g

0x5f42,	// (0x000615a9) call4_image_pane_ParamLimits

0x5f42,	// (0x000615a9) call4_image_pane

0xdec0,	// (0x00069527) call4_windows_conf_pane_ParamLimits

0xdf01,	// (0x00069568) popup_call4_audio_in_window_ParamLimits

0xdf01,	// (0x00069568) popup_call4_audio_in_window

0x0c38,	// (0x0005c29f) bg_popup_call2_act_pane_cp02

0xdf77,	// (0x000695de) call4_list_conf_pane

0xc57d,	// (0x00067be4) call4_image_pane_g1

0xc57d,	// (0x00067be4) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0006ad62) call4_image_pane_g

0xe1f5,	// (0x0006985c) list_single_graphic_popup_conf4_pane_ParamLimits

0xe1f5,	// (0x0006985c) list_single_graphic_popup_conf4_pane

0x0c38,	// (0x0005c29f) list_highlight_pane_cp022

0xe208,	// (0x0006986f) list_single_graphic_popup_conf4_pane_g1

0xaa4a,	// (0x000660b1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e9,	// (0x0006b050) list_single_graphic_popup_conf4_pane_g

0xe210,	// (0x00069877) list_single_graphic_popup_conf4_pane_t1

0x1d8b,	// (0x0005d3f2) popup_vtel_slider_window_ParamLimits

0x1d8b,	// (0x0005d3f2) popup_vtel_slider_window

0xdea2,	// (0x00069509) dialer2_ne_pane_t2_ParamLimits

0xdea2,	// (0x00069509) dialer2_ne_pane_t2

0x0001,

0xf8ca,	// (0x0006af31) dialer2_ne_pane_t_ParamLimits

0xf8ca,	// (0x0006af31) dialer2_ne_pane_t

0xc362,	// (0x000679c9) bg_popup_sub_pane_cp010_ParamLimits

0xc362,	// (0x000679c9) bg_popup_sub_pane_cp010

0x6b8e,	// (0x000621f5) popup_vtel_slider_window_g1_ParamLimits

0x6b8e,	// (0x000621f5) popup_vtel_slider_window_g1

0x6ba1,	// (0x00062208) popup_vtel_slider_window_g2_ParamLimits

0x6ba1,	// (0x00062208) popup_vtel_slider_window_g2

0x0003,

0xf9ee,	// (0x0006b055) popup_vtel_slider_window_g_ParamLimits

0xf9ee,	// (0x0006b055) popup_vtel_slider_window_g

0x6bf7,	// (0x0006225e) vtel_slider_pane_ParamLimits

0x6bf7,	// (0x0006225e) vtel_slider_pane

0x6c19,	// (0x00062280) vtel_slider_pane_g1_ParamLimits

0x6c19,	// (0x00062280) vtel_slider_pane_g1

0x6c2d,	// (0x00062294) vtel_slider_pane_g2_ParamLimits

0x6c2d,	// (0x00062294) vtel_slider_pane_g2

0x6c45,	// (0x000622ac) vtel_slider_pane_g3_ParamLimits

0x6c45,	// (0x000622ac) vtel_slider_pane_g3

0x6c19,	// (0x00062280) vtel_slider_pane_g4_ParamLimits

0x6c19,	// (0x00062280) vtel_slider_pane_g4

0x6c5b,	// (0x000622c2) vtel_slider_pane_g5_ParamLimits

0x6c5b,	// (0x000622c2) vtel_slider_pane_g5

0x0004,

0xf9f7,	// (0x0006b05e) vtel_slider_pane_g_ParamLimits

0xf9f7,	// (0x0006b05e) vtel_slider_pane_g

0x0c38,	// (0x0005c29f) main_gallery2_pane

0x62ee,	// (0x00061955) aid_size_row_itut2_dropdow_list_ParamLimits

0x62ee,	// (0x00061955) aid_size_row_itut2_dropdow_list

0x637a,	// (0x000619e1) grid_vitu2_function_top_pane_ParamLimits

0x637a,	// (0x000619e1) grid_vitu2_function_top_pane

0x63df,	// (0x00061a46) popup_vitu2_dropdown_list_window_ParamLimits

0x63df,	// (0x00061a46) popup_vitu2_dropdown_list_window

0x6408,	// (0x00061a6f) popup_vitu2_match_list_window

0x6c7f,	// (0x000622e6) cell_vitu2_function_top_pane_ParamLimits

0x6c7f,	// (0x000622e6) cell_vitu2_function_top_pane

0x6c9d,	// (0x00062304) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6c9d,	// (0x00062304) cell_vitu2_function_top_pane_cp01

0x6cbb,	// (0x00062322) cell_vitu2_function_top_wide_pane_ParamLimits

0x6cbb,	// (0x00062322) cell_vitu2_function_top_wide_pane

0xdcff,	// (0x00069366) bg_button_pane_cp012

0x6cd9,	// (0x00062340) cell_vitu2_function_top_pane_g1

0xdd48,	// (0x000693af) bg_button_pane_cp013_ParamLimits

0xdd48,	// (0x000693af) bg_button_pane_cp013

0x6ced,	// (0x00062354) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6ced,	// (0x00062354) cell_vitu2_function_top_wide_pane_g1

0xdcff,	// (0x00069366) bg_popup_sub_pane_cp20

0x6d05,	// (0x0006236c) list_vitu2_match_list_pane

0xdff4,	// (0x0006965b) bg_popup_sub_pane_cp20_g1

0xdffc,	// (0x00069663) bg_popup_sub_pane_cp20_g2

0xa4ab,	// (0x00065b12) bg_popup_sub_pane_cp20_g3

0xe004,	// (0x0006966b) bg_popup_sub_pane_cp20_g4

0xa48b,	// (0x00065af2) bg_popup_sub_pane_cp20_g5

0xe226,	// (0x0006988d) bg_popup_sub_pane_cp20_g6

0xe014,	// (0x0006967b) bg_popup_sub_pane_cp20_g7

0xe01c,	// (0x00069683) bg_popup_sub_pane_cp20_g8

0xe024,	// (0x0006968b) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa02,	// (0x0006b069) bg_popup_sub_pane_cp20_g

0xdd64,	// (0x000693cb) list_vitu2_match_list_item_pane_ParamLimits

0xdd64,	// (0x000693cb) list_vitu2_match_list_item_pane

0xdd76,	// (0x000693dd) list_vitu2_match_list_item_pane_t1

0x9fbb,	// (0x00065622) bg_popup_sub_pane_cp21

0xdd84,	// (0x000693eb) grid_vitu2_dropdown_list_pane

0x6d70,	// (0x000623d7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6d70,	// (0x000623d7) cell_vitu2_dropdown_list_char_pane

0x6d91,	// (0x000623f8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6d91,	// (0x000623f8) cell_vitu2_dropdown_list_ctrl_pane

0xe22e,	// (0x00069895) cell_vitu2_dropdown_list_char_pane_g1

0xe237,	// (0x0006989e) cell_vitu2_dropdown_list_char_pane_g2

0xe240,	// (0x000698a7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x0601,	// (0x0005bc68) cell_vitu2_dropdown_list_char_pane_g

0x6dbd,	// (0x00062424) cell_vitu2_dropdown_list_char_pane_t1

0x6dcb,	// (0x00062432) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6dcb,	// (0x00062432) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6dd8,	// (0x0006243f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6dd8,	// (0x0006243f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6de5,	// (0x0006244c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6de5,	// (0x0006244c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6df2,	// (0x00062459) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6df2,	// (0x00062459) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdc80,	// (0x000692e7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdc80,	// (0x000692e7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1f,	// (0x0006b086) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1f,	// (0x0006b086) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e0e,	// (0x00062475) aid_size_cell_gallery2_ParamLimits

0x6e0e,	// (0x00062475) aid_size_cell_gallery2

0x6e24,	// (0x0006248b) grid_gallery2_pane_ParamLimits

0x6e24,	// (0x0006248b) grid_gallery2_pane

0x6e38,	// (0x0006249f) scroll_pane_cp029_ParamLimits

0x6e38,	// (0x0006249f) scroll_pane_cp029

0x6e44,	// (0x000624ab) cell_gallery2_pane_ParamLimits

0x6e44,	// (0x000624ab) cell_gallery2_pane

0xe249,	// (0x000698b0) cell_gallery2_pane_g2

0x6e7a,	// (0x000624e1) cell_gallery2_pane_g3

0xe253,	// (0x000698ba) cell_gallery2_pane_g4

0xe25b,	// (0x000698c2) cell_gallery2_pane_g5

0xac35,	// (0x0006629c) grid_highlight_pane_cp10

0x6408,	// (0x00061a6f) popup_vitu2_match_list_window_ParamLimits

0x641f,	// (0x00061a86) popup_vitu2_query_window_ParamLimits

0x641f,	// (0x00061a86) popup_vitu2_query_window

0x9fbb,	// (0x00065622) bg_vitu2_candi_button_pane

0xe22e,	// (0x00069895) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe237,	// (0x0006989e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe240,	// (0x000698a7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6e82,	// (0x000624e9) bg_button_pane_cp015

0x6e94,	// (0x000624fb) bg_button_pane_cp016

0x6ea7,	// (0x0006250e) bg_button_pane_cp017

0xc077,	// (0x000676de) bg_popup_sub_pane_cp22

0xe263,	// (0x000698ca) popup_vitu2_query_window_g1

0x6eec,	// (0x00062553) popup_vitu2_query_window_g2

0x0002,

0xfa2a,	// (0x0006b091) popup_vitu2_query_window_g

0x6f0b,	// (0x00062572) popup_vitu2_query_window_t1_ParamLimits

0x6f0b,	// (0x00062572) popup_vitu2_query_window_t1

0x6f40,	// (0x000625a7) popup_vitu2_query_window_t2_ParamLimits

0x6f40,	// (0x000625a7) popup_vitu2_query_window_t2

0x6f52,	// (0x000625b9) popup_vitu2_query_window_t3_ParamLimits

0x6f52,	// (0x000625b9) popup_vitu2_query_window_t3

0x6f7a,	// (0x000625e1) popup_vitu2_query_window_t4_ParamLimits

0x6f7a,	// (0x000625e1) popup_vitu2_query_window_t4

0x6f9b,	// (0x00062602) popup_vitu2_query_window_t5_ParamLimits

0x6f9b,	// (0x00062602) popup_vitu2_query_window_t5

0x0006,

0xfa31,	// (0x0006b098) popup_vitu2_query_window_t_ParamLimits

0xfa31,	// (0x0006b098) popup_vitu2_query_window_t

0xe0f6,	// (0x0006975d) main_cset_text_pane

0x689c,	// (0x00061f03) aid_area_touch_slider_ParamLimits

0x68b8,	// (0x00061f1f) cset_slider_pane_ParamLimits

0x68e2,	// (0x00061f49) main_cset_slider_pane_g1_ParamLimits

0x68f7,	// (0x00061f5e) main_cset_slider_pane_g2_ParamLimits

0xe117,	// (0x0006977e) main_cset_slider_pane_g3_ParamLimits

0xe117,	// (0x0006977e) main_cset_slider_pane_g3

0x690c,	// (0x00061f73) main_cset_slider_pane_g4_ParamLimits

0x690c,	// (0x00061f73) main_cset_slider_pane_g4

0x691b,	// (0x00061f82) main_cset_slider_pane_g5_ParamLimits

0x691b,	// (0x00061f82) main_cset_slider_pane_g5

0x6927,	// (0x00061f8e) main_cset_slider_pane_g6_ParamLimits

0x6927,	// (0x00061f8e) main_cset_slider_pane_g6

0xf98b,	// (0x0006aff2) main_cset_slider_pane_g_ParamLimits

0xe147,	// (0x000697ae) main_cset_slider_pane_t1_ParamLimits

0x69b3,	// (0x0006201a) main_cset_slider_pane_t2_ParamLimits

0x69cd,	// (0x00062034) main_cset_slider_pane_t3_ParamLimits

0x69e7,	// (0x0006204e) main_cset_slider_pane_t4_ParamLimits

0x6a01,	// (0x00062068) main_cset_slider_pane_t5_ParamLimits

0x6a1b,	// (0x00062082) main_cset_slider_pane_t6_ParamLimits

0x6a30,	// (0x00062097) main_cset_slider_pane_t7_ParamLimits

0x6a5a,	// (0x000620c1) main_cset_slider_pane_t8_ParamLimits

0x6a5a,	// (0x000620c1) main_cset_slider_pane_t8

0x6a82,	// (0x000620e9) main_cset_slider_pane_t9_ParamLimits

0x6a82,	// (0x000620e9) main_cset_slider_pane_t9

0x6aaa,	// (0x00062111) main_cset_slider_pane_t10_ParamLimits

0x6aaa,	// (0x00062111) main_cset_slider_pane_t10

0x6ad2,	// (0x00062139) main_cset_slider_pane_t11_ParamLimits

0x6ad2,	// (0x00062139) main_cset_slider_pane_t11

0x6afa,	// (0x00062161) main_cset_slider_pane_t12_ParamLimits

0x6afa,	// (0x00062161) main_cset_slider_pane_t12

0x6b17,	// (0x0006217e) main_cset_slider_pane_t13_ParamLimits

0x6b17,	// (0x0006217e) main_cset_slider_pane_t13

0xf9b0,	// (0x0006b017) main_cset_slider_pane_t_ParamLimits

0x0c38,	// (0x0005c29f) bg_popup_sub_pane_cp011

0xe26f,	// (0x000698d6) main_cset_text_pane_g1

0xe277,	// (0x000698de) main_cset_text_pane_t1

0xe285,	// (0x000698ec) main_cset_text_pane_t2

0xe293,	// (0x000698fa) main_cset_text_pane_t3

0xe2a1,	// (0x00069908) main_cset_text_pane_t4

0xe2af,	// (0x00069916) main_cset_text_pane_t5

0xe2bd,	// (0x00069924) main_cset_text_pane_t6

0xe2cb,	// (0x00069932) main_cset_text_pane_t7

0x0006,

0x0629,	// (0x0005bc90) main_cset_text_pane_t

0x0c38,	// (0x0005c29f) main_cam4_burst_pane

0x0c38,	// (0x0005c29f) main_cam5_pane

0x67db,	// (0x00061e42) bg_button_pane_cp019

0x67e4,	// (0x00061e4b) bg_button_pane_cp020

0xe123,	// (0x0006978a) main_cset_slider_pane_g7_ParamLimits

0xe123,	// (0x0006978a) main_cset_slider_pane_g7

0xe12f,	// (0x00069796) main_cset_slider_pane_g8_ParamLimits

0xe12f,	// (0x00069796) main_cset_slider_pane_g8

0x693b,	// (0x00061fa2) main_cset_slider_pane_g9_ParamLimits

0x693b,	// (0x00061fa2) main_cset_slider_pane_g9

0x6947,	// (0x00061fae) main_cset_slider_pane_g10_ParamLimits

0x6947,	// (0x00061fae) main_cset_slider_pane_g10

0x6953,	// (0x00061fba) main_cset_slider_pane_g11_ParamLimits

0x6953,	// (0x00061fba) main_cset_slider_pane_g11

0x695f,	// (0x00061fc6) main_cset_slider_pane_g12_ParamLimits

0x695f,	// (0x00061fc6) main_cset_slider_pane_g12

0x696b,	// (0x00061fd2) main_cset_slider_pane_g13_ParamLimits

0x696b,	// (0x00061fd2) main_cset_slider_pane_g13

0x6977,	// (0x00061fde) main_cset_slider_pane_g14_ParamLimits

0x6977,	// (0x00061fde) main_cset_slider_pane_g14

0x6983,	// (0x00061fea) main_cset_slider_pane_g15_ParamLimits

0x6983,	// (0x00061fea) main_cset_slider_pane_g15

0xe183,	// (0x000697ea) main_cset_slider_pane_t14_ParamLimits

0xe183,	// (0x000697ea) main_cset_slider_pane_t14

0xe1bc,	// (0x00069823) main_cset_slider_pane_t15_ParamLimits

0xe1bc,	// (0x00069823) main_cset_slider_pane_t15

0x7012,	// (0x00062679) aid_cam4_burst_size_cell_ParamLimits

0x7012,	// (0x00062679) aid_cam4_burst_size_cell

0x7032,	// (0x00062699) grid_cam4_burst_pane_ParamLimits

0x7032,	// (0x00062699) grid_cam4_burst_pane

0x706a,	// (0x000626d1) linegrid_cam4_burst_pane_ParamLimits

0x706a,	// (0x000626d1) linegrid_cam4_burst_pane

0xe80c,	// (0x00069e73) scroll_pane_cp30_ParamLimits

0xe80c,	// (0x00069e73) scroll_pane_cp30

0x708e,	// (0x000626f5) cell_cam4_burst_pane_ParamLimits

0x708e,	// (0x000626f5) cell_cam4_burst_pane

0xe2d9,	// (0x00069940) linegrid_cam4_burst_pane_g1_ParamLimits

0xe2d9,	// (0x00069940) linegrid_cam4_burst_pane_g1

0x70db,	// (0x00062742) linegrid_cam4_burst_pane_g2_ParamLimits

0x70db,	// (0x00062742) linegrid_cam4_burst_pane_g2

0xe2e6,	// (0x0006994d) linegrid_cam4_burst_pane_g3_ParamLimits

0xe2e6,	// (0x0006994d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa40,	// (0x0006b0a7) linegrid_cam4_burst_pane_g_ParamLimits

0xfa40,	// (0x0006b0a7) linegrid_cam4_burst_pane_g

0x70ec,	// (0x00062753) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x70ec,	// (0x00062753) linegrid_cam4_burst_pane_g3_copy1

0xe2f3,	// (0x0006995a) linegrid_cam4_burst_pane_g4_ParamLimits

0xe2f3,	// (0x0006995a) linegrid_cam4_burst_pane_g4

0x7106,	// (0x0006276d) linegrid_cam4_burst_pane_g5_ParamLimits

0x7106,	// (0x0006276d) linegrid_cam4_burst_pane_g5

0x7117,	// (0x0006277e) linegrid_cam4_burst_pane_g6_ParamLimits

0x7117,	// (0x0006277e) linegrid_cam4_burst_pane_g6

0xe300,	// (0x00069967) linegrid_cam4_burst_pane_g7_ParamLimits

0xe300,	// (0x00069967) linegrid_cam4_burst_pane_g7

0x712e,	// (0x00062795) cell_cam4_burst_pane_g1

0xe319,	// (0x00069980) main_cam5_pane_t1_ParamLimits

0xe319,	// (0x00069980) main_cam5_pane_t1

0xe32b,	// (0x00069992) main_cam5_pane_t2_ParamLimits

0xe32b,	// (0x00069992) main_cam5_pane_t2

0xe33d,	// (0x000699a4) main_cam5_pane_t3_ParamLimits

0xe33d,	// (0x000699a4) main_cam5_pane_t3

0xe34f,	// (0x000699b6) main_cam5_pane_t4_ParamLimits

0xe34f,	// (0x000699b6) main_cam5_pane_t4

0xe367,	// (0x000699ce) main_cam5_pane_t5_ParamLimits

0xe367,	// (0x000699ce) main_cam5_pane_t5

0xe37b,	// (0x000699e2) main_cam5_pane_t6_ParamLimits

0xe37b,	// (0x000699e2) main_cam5_pane_t6

0xe38f,	// (0x000699f6) main_cam5_pane_t7_ParamLimits

0xe38f,	// (0x000699f6) main_cam5_pane_t7

0xe3a1,	// (0x00069a08) main_cam5_pane_t8_ParamLimits

0xe3a1,	// (0x00069a08) main_cam5_pane_t8

0xe3bd,	// (0x00069a24) main_cam5_pane_t9_ParamLimits

0xe3bd,	// (0x00069a24) main_cam5_pane_t9

0xe3cf,	// (0x00069a36) main_cam5_pane_t10_ParamLimits

0xe3cf,	// (0x00069a36) main_cam5_pane_t10

0xe3e1,	// (0x00069a48) main_cam5_pane_t11_ParamLimits

0xe3e1,	// (0x00069a48) main_cam5_pane_t11

0xe3f3,	// (0x00069a5a) main_cam5_pane_t12_ParamLimits

0xe3f3,	// (0x00069a5a) main_cam5_pane_t12

0xe408,	// (0x00069a6f) main_cam5_pane_t13_ParamLimits

0xe408,	// (0x00069a6f) main_cam5_pane_t13

0x000c,

0x0644,	// (0x0005bcab) main_cam5_pane_t_ParamLimits

0x0644,	// (0x0005bcab) main_cam5_pane_t

0x0e78,	// (0x0005c4df) popup_scut_keymap_window_ParamLimits

0x0e78,	// (0x0005c4df) popup_scut_keymap_window

0x7141,	// (0x000627a8) aid_size_cell_brow_shortcut

0xac35,	// (0x0006629c) bg_popup_window_pane_cp010

0x714d,	// (0x000627b4) grid_scut_pane

0x7159,	// (0x000627c0) cell_scut_pane_ParamLimits

0x7159,	// (0x000627c0) cell_scut_pane

0x7170,	// (0x000627d7) cell_scut_pane_g1

0xe425,	// (0x00069a8c) cell_scut_pane_t1

0xe434,	// (0x00069a9b) cell_scut_pane_t2

0x7179,	// (0x000627e0) cell_scut_pane_t3

0x0002,

0xfa4c,	// (0x0006b0b3) cell_scut_pane_t

0x4e4a,	// (0x000604b1) main_mup3_pane_g8_ParamLimits

0x4e4a,	// (0x000604b1) main_mup3_pane_g8

0x6306,	// (0x0006196d) area_vitu2_query_pane_ParamLimits

0x6306,	// (0x0006196d) area_vitu2_query_pane

0x6eba,	// (0x00062521) input_focus_pane_cp08

0xe443,	// (0x00069aaa) area_vitu2_query_pane_g1

0x7187,	// (0x000627ee) area_vitu2_query_pane_g2

0x0001,

0xfa53,	// (0x0006b0ba) area_vitu2_query_pane_g

0x7198,	// (0x000627ff) area_vitu2_query_pane_t1_ParamLimits

0x7198,	// (0x000627ff) area_vitu2_query_pane_t1

0x71ac,	// (0x00062813) area_vitu2_query_pane_t2_ParamLimits

0x71ac,	// (0x00062813) area_vitu2_query_pane_t2

0x71c0,	// (0x00062827) area_vitu2_query_pane_t3_ParamLimits

0x71c0,	// (0x00062827) area_vitu2_query_pane_t3

0x71e8,	// (0x0006284f) area_vitu2_query_pane_t4_ParamLimits

0x71e8,	// (0x0006284f) area_vitu2_query_pane_t4

0x7210,	// (0x00062877) area_vitu2_query_pane_t5_ParamLimits

0x7210,	// (0x00062877) area_vitu2_query_pane_t5

0x7238,	// (0x0006289f) area_vitu2_query_pane_t6_ParamLimits

0x7238,	// (0x0006289f) area_vitu2_query_pane_t6

0x0006,

0xfa58,	// (0x0006b0bf) area_vitu2_query_pane_t_ParamLimits

0xfa58,	// (0x0006b0bf) area_vitu2_query_pane_t

0x7284,	// (0x000628eb) bg_button_pane_cp018

0x7292,	// (0x000628f9) bg_button_pane_cp021

0x729e,	// (0x00062905) bg_button_pane_cp022

0x72ad,	// (0x00062914) input_focus_pane_cp09

0x2d93,	// (0x0005e3fa) aid_size_touch_mv_arrow_left

0x2dbc,	// (0x0005e423) aid_size_touch_mv_arrow_right

0x699b,	// (0x00062002) main_cset_slider_pane_g16_ParamLimits

0x699b,	// (0x00062002) main_cset_slider_pane_g16

0x69a7,	// (0x0006200e) main_cset_slider_pane_g17_ParamLimits

0x69a7,	// (0x0006200e) main_cset_slider_pane_g17

0x712e,	// (0x00062795) cell_cam4_burst_pane_g1_ParamLimits

0x0c38,	// (0x0005c29f) compa_mode_pane

0x6bb1,	// (0x00062218) popup_vtel_slider_window_g3_ParamLimits

0x6bb1,	// (0x00062218) popup_vtel_slider_window_g3

0x6bc8,	// (0x0006222f) popup_vtel_slider_window_g4_ParamLimits

0x6bc8,	// (0x0006222f) popup_vtel_slider_window_g4

0x6bdf,	// (0x00062246) popup_vtel_slider_window_t1_ParamLimits

0x6bdf,	// (0x00062246) popup_vtel_slider_window_t1

0x0c38,	// (0x0005c29f) main_cl_pane

0xc09f,	// (0x00067706) popup_imed_adjust2_window_ParamLimits

0xc077,	// (0x000676de) bg_tb_trans_pane_cp05_ParamLimits

0xca82,	// (0x000680e9) popup_imed_adjust2_window_g1_ParamLimits

0xca91,	// (0x000680f8) popup_imed_adjust2_window_g2_ParamLimits

0xca91,	// (0x000680f8) popup_imed_adjust2_window_g2

0xca9d,	// (0x00068104) popup_imed_adjust2_window_g3_ParamLimits

0xca9d,	// (0x00068104) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0006ae60) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0006ae60) popup_imed_adjust2_window_g

0xcaa9,	// (0x00068110) popup_imed_adjust2_window_t1_ParamLimits

0xcac1,	// (0x00068128) slider_imed_adjust_pane_ParamLimits

0xcad5,	// (0x0006813c) slider_imed_adjust_pane_g1_ParamLimits

0xcae5,	// (0x0006814c) slider_imed_adjust_pane_g2_ParamLimits

0xcaf5,	// (0x0006815c) slider_imed_adjust_pane_g3_ParamLimits

0xcb06,	// (0x0006816d) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0006ae67) slider_imed_adjust_pane_g_ParamLimits

0x6023,	// (0x0006168a) aid_touch_area_cam4_ParamLimits

0x6023,	// (0x0006168a) aid_touch_area_cam4

0xdc64,	// (0x000692cb) battery_pane_cp01

0x60f3,	// (0x0006175a) main_camera4_pane_g6_ParamLimits

0x60f3,	// (0x0006175a) main_camera4_pane_g6

0x611d,	// (0x00061784) main_camera4_pane_t2_ParamLimits

0x611d,	// (0x00061784) main_camera4_pane_t2

0x0001,

0xf8fe,	// (0x0006af65) main_camera4_pane_t_ParamLimits

0xf8fe,	// (0x0006af65) main_camera4_pane_t

0x6152,	// (0x000617b9) aid_touch_area_vid4_ParamLimits

0x6152,	// (0x000617b9) aid_touch_area_vid4

0x61b9,	// (0x00061820) main_video4_pane_g5_ParamLimits

0x61b9,	// (0x00061820) main_video4_pane_g5

0x61e4,	// (0x0006184b) vid4_progress_pane_ParamLimits

0x61e4,	// (0x0006184b) vid4_progress_pane

0xe13b,	// (0x000697a2) main_cset_slider_pane_g18_ParamLimits

0xe13b,	// (0x000697a2) main_cset_slider_pane_g18

0xe30d,	// (0x00069974) cell_cam4_burst_pane_g2_ParamLimits

0xe30d,	// (0x00069974) cell_cam4_burst_pane_g2

0x0001,

0xfa47,	// (0x0006b0ae) cell_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0006b0ae) cell_cam4_burst_pane_g

0x9fdf,	// (0x00065646) bg_cl_pane_ParamLimits

0x9fdf,	// (0x00065646) bg_cl_pane

0x72bc,	// (0x00062923) cl_header_pane_ParamLimits

0x72bc,	// (0x00062923) cl_header_pane

0x72d0,	// (0x00062937) cl_listscroll_pane_ParamLimits

0x72d0,	// (0x00062937) cl_listscroll_pane

0xe44f,	// (0x00069ab6) bg_cl_pane_g1

0xe457,	// (0x00069abe) bg_cl_pane_g2

0xe45f,	// (0x00069ac6) bg_cl_pane_g3

0xe467,	// (0x00069ace) bg_cl_pane_g4

0xe46f,	// (0x00069ad6) bg_cl_pane_g5

0xe477,	// (0x00069ade) bg_cl_pane_g6

0xe47f,	// (0x00069ae6) bg_cl_pane_g7

0xe487,	// (0x00069aee) bg_cl_pane_g8

0xe48f,	// (0x00069af6) bg_cl_pane_g9

0x0008,

0x067a,	// (0x0005bce1) bg_cl_pane_g

0x72e0,	// (0x00062947) aid_height_cl_leading_ParamLimits

0x72e0,	// (0x00062947) aid_height_cl_leading

0x72ec,	// (0x00062953) aid_height_cl_text_ParamLimits

0x72ec,	// (0x00062953) aid_height_cl_text

0x9864,	// (0x00064ecb) bg_cl_header_pane_ParamLimits

0x9864,	// (0x00064ecb) bg_cl_header_pane

0x730b,	// (0x00062972) cl_header_pane_g1_ParamLimits

0x730b,	// (0x00062972) cl_header_pane_g1

0x7321,	// (0x00062988) cl_header_pane_t1_ParamLimits

0x7321,	// (0x00062988) cl_header_pane_t1

0xe497,	// (0x00069afe) cl_list_pane

0xe10e,	// (0x00069775) hc_scroll_pane_cp01

0xa48b,	// (0x00065af2) bg_cl_header_pane_g1

0xdff4,	// (0x0006965b) bg_cl_header_pane_g2

0xa4ab,	// (0x00065b12) bg_cl_header_pane_g3

0xe004,	// (0x0006966b) bg_cl_header_pane_g4

0xdffc,	// (0x00069663) bg_cl_header_pane_g5

0xe226,	// (0x0006988d) bg_cl_header_pane_g6

0xe01c,	// (0x00069683) bg_cl_header_pane_g7

0xe024,	// (0x0006968b) bg_cl_header_pane_g8

0xe014,	// (0x0006967b) bg_cl_header_pane_g9

0x0008,

0xfa67,	// (0x0006b0ce) bg_cl_header_pane_g

0x733a,	// (0x000629a1) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x733a,	// (0x000629a1) hc_cl_list_double_graphic_heading_pane

0x734b,	// (0x000629b2) hc_cl_list_single_graphic_pane_ParamLimits

0x734b,	// (0x000629b2) hc_cl_list_single_graphic_pane

0x7361,	// (0x000629c8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7361,	// (0x000629c8) hc_cl_list_single_graphic_pane_g1

0x736d,	// (0x000629d4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x736d,	// (0x000629d4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa7a,	// (0x0006b0e1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa7a,	// (0x0006b0e1) hc_cl_list_single_graphic_pane_g

0x7381,	// (0x000629e8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7381,	// (0x000629e8) hc_cl_list_single_graphic_pane_t1

0x7361,	// (0x000629c8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7361,	// (0x000629c8) hc_cl_list_double_graphic_heading_pane_g1

0x7396,	// (0x000629fd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7396,	// (0x000629fd) hc_cl_list_double_graphic_heading_pane_g2

0x73aa,	// (0x00062a11) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73aa,	// (0x00062a11) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa7f,	// (0x0006b0e6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa7f,	// (0x0006b0e6) hc_cl_list_double_graphic_heading_pane_g

0x73be,	// (0x00062a25) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73be,	// (0x00062a25) hc_cl_list_double_graphic_heading_pane_t1

0x73d3,	// (0x00062a3a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73d3,	// (0x00062a3a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa86,	// (0x0006b0ed) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa86,	// (0x0006b0ed) hc_cl_list_double_graphic_heading_pane_t

0xdd94,	// (0x000693fb) vid4_progress_pane_g1

0xdda4,	// (0x0006940b) vid4_progress_pane_g2

0xa77e,	// (0x00065de5) vid4_progress_pane_g3

0xddb4,	// (0x0006941b) vid4_progress_pane_g4

0x0004,

0xfa8b,	// (0x0006b0f2) vid4_progress_pane_g

0xddd2,	// (0x00069439) vid4_progress_pane_t1

0xdde7,	// (0x0006944e) vid4_progress_pane_t2

0x0002,

0xfa96,	// (0x0006b0fd) vid4_progress_pane_t

0xde12,	// (0x00069479) wait_bar_pane_cp07

0xc370,	// (0x000679d7) blid_firmament_pane_ParamLimits

0xc3b3,	// (0x00067a1a) popup_blid_sat_info2_window_g1

0xc3d7,	// (0x00067a3e) popup_blid_sat_info2_window_t3

0xc3e5,	// (0x00067a4c) popup_blid_sat_info2_window_t4

0xc3f3,	// (0x00067a5a) popup_blid_sat_info2_window_t5

0xc401,	// (0x00067a68) popup_blid_sat_info2_window_t6

0xc411,	// (0x00067a78) popup_blid_sat_info2_window_t7

0xc41f,	// (0x00067a86) popup_blid_sat_info2_window_t8

0xc42d,	// (0x00067a94) popup_blid_sat_info2_window_t9

0xc43b,	// (0x00067aa2) popup_blid_sat_info2_window_t10

0xc4fd,	// (0x00067b64) aid_firma_cardinal_ParamLimits

0xc511,	// (0x00067b78) blid_firmament_pane_t1_ParamLimits

0xc528,	// (0x00067b8f) blid_firmament_pane_t2_ParamLimits

0xc53f,	// (0x00067ba6) blid_firmament_pane_t3_ParamLimits

0xc556,	// (0x00067bbd) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0006ad59) blid_firmament_pane_t_ParamLimits

0xc56d,	// (0x00067bd4) blid_sat_info_pane_ParamLimits

0x9864,	// (0x00064ecb) main_cam_set_pane_ParamLimits

0x56fc,	// (0x00060d63) aid_size_cell_colour_35_ParamLimits

0x571c,	// (0x00060d83) aid_size_cell_colour_112_ParamLimits

0x573c,	// (0x00060da3) aid_size_cell_effect_ParamLimits

0xc077,	// (0x000676de) bg_tb_trans_pane_cp02_ParamLimits

0xa705,	// (0x00065d6c) heading_imed_pane_ParamLimits

0x575c,	// (0x00060dc3) listscroll_imed_pane_ParamLimits

0xb6a9,	// (0x00066d10) popup_call2_audio_first_window_g5_ParamLimits

0xb6a9,	// (0x00066d10) popup_call2_audio_first_window_g5

0x5cce,	// (0x00061335) aid_size_touch_image3_arrow_left_ParamLimits

0x5cce,	// (0x00061335) aid_size_touch_image3_arrow_left

0x5cfa,	// (0x00061361) aid_size_touch_image3_arrow_right_ParamLimits

0x5cfa,	// (0x00061361) aid_size_touch_image3_arrow_right

0xddfd,	// (0x00069464) vid4_progress_pane_t3

0x5a6f,	// (0x000610d6) main_hwr_training_symbol_option_pane_ParamLimits

0x5a6f,	// (0x000610d6) main_hwr_training_symbol_option_pane

0xcd6f,	// (0x000683d6) popup_hwr_training_preview_window_ParamLimits

0xcd6f,	// (0x000683d6) popup_hwr_training_preview_window

0x5a8f,	// (0x000610f6) hwr_training_navi_pane_g5_ParamLimits

0x5a8f,	// (0x000610f6) hwr_training_navi_pane_g5

0xdfe2,	// (0x00069649) popup_char_count_window

0xdcff,	// (0x00069366) bg_popup_sub_pane_cp20_ParamLimits

0x6d05,	// (0x0006236c) list_vitu2_match_list_pane_ParamLimits

0x6d14,	// (0x0006237b) vitu2_page_scroll_pane_ParamLimits

0x6d14,	// (0x0006237b) vitu2_page_scroll_pane

0xe4a0,	// (0x00069b07) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe4a0,	// (0x00069b07) list_single_hwr_training_symbol_option_pane

0xe4b3,	// (0x00069b1a) list_single_hwr_training_symbol_option_pane_g1

0xe4bb,	// (0x00069b22) list_single_hwr_training_symbol_option_pane_t1

0xe4c9,	// (0x00069b30) bg_button_pane_cp023

0xe4d2,	// (0x00069b39) bg_button_pane_cp024

0x7442,	// (0x00062aa9) vitu2_page_scroll_pane_g1

0x744a,	// (0x00062ab1) vitu2_page_scroll_pane_g2

0x0001,

0xfa9d,	// (0x0006b104) vitu2_page_scroll_pane_g

0x7452,	// (0x00062ab9) vitu2_page_scroll_pane_t1

0xe505,	// (0x00069b6c) popup_char_count_window_g1

0xe50e,	// (0x00069b75) popup_char_count_window_g2

0xe517,	// (0x00069b7e) popup_char_count_window_g3

0x0002,

0x06c8,	// (0x0005bd2f) popup_char_count_window_g

0xe520,	// (0x00069b87) popup_char_count_window_t1

0x0c38,	// (0x0005c29f) main_vded2_pane

0xca6e,	// (0x000680d5) aid_size_cell_imed_line

0xca78,	// (0x000680df) grid_imed_line_width_pane

0x6252,	// (0x000618b9) vid4_indicators_pane_g4

0xe52e,	// (0x00069b95) cell_imed_line_width_pane_ParamLimits

0xe52e,	// (0x00069b95) cell_imed_line_width_pane

0xe542,	// (0x00069ba9) cell_imed_line_width_pane_g1

0xc31e,	// (0x00067985) cell_imed_line_width_pane_g2

0x0001,

0xfaa2,	// (0x0006b109) cell_imed_line_width_pane_g

0x7461,	// (0x00062ac8) main_vded2_pane_g1_ParamLimits

0x7461,	// (0x00062ac8) main_vded2_pane_g1

0x7477,	// (0x00062ade) main_vded2_pane_g2_ParamLimits

0x7477,	// (0x00062ade) main_vded2_pane_g2

0x0001,

0xfaa7,	// (0x0006b10e) main_vded2_pane_g_ParamLimits

0xfaa7,	// (0x0006b10e) main_vded2_pane_g

0x7489,	// (0x00062af0) vded2_slider_pane_ParamLimits

0x7489,	// (0x00062af0) vded2_slider_pane

0x7499,	// (0x00062b00) aid_size_touch_vded2_end

0x74a3,	// (0x00062b0a) aid_size_touch_vded2_playhead

0xe54b,	// (0x00069bb2) aid_size_touch_vded2_start

0xe553,	// (0x00069bba) vded2_slider_bg_pane

0xe55c,	// (0x00069bc3) vded2_slider_pane_g1

0xe565,	// (0x00069bcc) vded2_slider_pane_g2

0x74ad,	// (0x00062b14) vded2_slider_pane_g3

0x0002,

0xfaac,	// (0x0006b113) vded2_slider_pane_g

0xe56d,	// (0x00069bd4) vded2_slider_bg_pane_g1

0xe576,	// (0x00069bdd) vded2_slider_bg_pane_g2

0xe57f,	// (0x00069be6) vded2_slider_bg_pane_g3

0x0002,

0x06e0,	// (0x0005bd47) vded2_slider_bg_pane_g

0x3453,	// (0x0005eaba) aid_postcard_touch_down_pane_ParamLimits

0x3453,	// (0x0005eaba) aid_postcard_touch_down_pane

0x3469,	// (0x0005ead0) aid_postcard_touch_up_pane_ParamLimits

0x3469,	// (0x0005ead0) aid_postcard_touch_up_pane

0x0c38,	// (0x0005c29f) main_blid2_pane

0xc085,	// (0x000676ec) popup_blid2_search_window

0x0c38,	// (0x0005c29f) blid2_gps_pane

0x0c38,	// (0x0005c29f) blid2_navig_pane

0x0c38,	// (0x0005c29f) blid2_search_pane

0x0c38,	// (0x0005c29f) blid2_tripm_pane

0x74b8,	// (0x00062b1f) blid2_search_pane_g1_ParamLimits

0x74b8,	// (0x00062b1f) blid2_search_pane_g1

0x74d2,	// (0x00062b39) blid2_search_pane_t1_ParamLimits

0x74d2,	// (0x00062b39) blid2_search_pane_t1

0x74e4,	// (0x00062b4b) aid_size_cell_blid2_gps_ParamLimits

0x74e4,	// (0x00062b4b) aid_size_cell_blid2_gps

0x74fc,	// (0x00062b63) blid2_gps_pane_g1_ParamLimits

0x74fc,	// (0x00062b63) blid2_gps_pane_g1

0x7510,	// (0x00062b77) grid_blid2_satellite_pane_ParamLimits

0x7510,	// (0x00062b77) grid_blid2_satellite_pane

0x752a,	// (0x00062b91) blid2_navig_pane_g1_ParamLimits

0x752a,	// (0x00062b91) blid2_navig_pane_g1

0x7536,	// (0x00062b9d) blid2_navig_pane_t1_ParamLimits

0x7536,	// (0x00062b9d) blid2_navig_pane_t1

0x7551,	// (0x00062bb8) blid2_navig_pane_t2_ParamLimits

0x7551,	// (0x00062bb8) blid2_navig_pane_t2

0x0001,

0xfab3,	// (0x0006b11a) blid2_navig_pane_t_ParamLimits

0xfab3,	// (0x0006b11a) blid2_navig_pane_t

0x756c,	// (0x00062bd3) blid2_navig_ring_pane_ParamLimits

0x756c,	// (0x00062bd3) blid2_navig_ring_pane

0x7585,	// (0x00062bec) blid2_speed_pane_ParamLimits

0x7585,	// (0x00062bec) blid2_speed_pane

0x7591,	// (0x00062bf8) blid2_tripm_pane_g1_ParamLimits

0x7591,	// (0x00062bf8) blid2_tripm_pane_g1

0x75aa,	// (0x00062c11) blid2_tripm_pane_g2_ParamLimits

0x75aa,	// (0x00062c11) blid2_tripm_pane_g2

0x75be,	// (0x00062c25) blid2_tripm_pane_g3_ParamLimits

0x75be,	// (0x00062c25) blid2_tripm_pane_g3

0x75d2,	// (0x00062c39) blid2_tripm_pane_g4_ParamLimits

0x75d2,	// (0x00062c39) blid2_tripm_pane_g4

0x75e6,	// (0x00062c4d) blid2_tripm_pane_g5_ParamLimits

0x75e6,	// (0x00062c4d) blid2_tripm_pane_g5

0x0005,

0xfab8,	// (0x0006b11f) blid2_tripm_pane_g_ParamLimits

0xfab8,	// (0x0006b11f) blid2_tripm_pane_g

0x760c,	// (0x00062c73) blid2_tripm_pane_t1_ParamLimits

0x760c,	// (0x00062c73) blid2_tripm_pane_t1

0x7627,	// (0x00062c8e) blid2_tripm_pane_t2_ParamLimits

0x7627,	// (0x00062c8e) blid2_tripm_pane_t2

0x7640,	// (0x00062ca7) blid2_tripm_pane_t3_ParamLimits

0x7640,	// (0x00062ca7) blid2_tripm_pane_t3

0x0003,

0xfac5,	// (0x0006b12c) blid2_tripm_pane_t_ParamLimits

0xfac5,	// (0x0006b12c) blid2_tripm_pane_t

0x7687,	// (0x00062cee) cell_blid2_satellite_pane_ParamLimits

0x7687,	// (0x00062cee) cell_blid2_satellite_pane

0x76a5,	// (0x00062d0c) cell_blid2_satellite_pane_g1

0xe588,	// (0x00069bef) cell_blid2_satellite_pane_t1

0xc57d,	// (0x00067be4) blid2_speed_pane_g1

0xe596,	// (0x00069bfd) blid2_speed_pane_t1

0xe5a4,	// (0x00069c0b) blid2_speed_pane_t2

0x0001,

0x0702,	// (0x0005bd69) blid2_speed_pane_t

0xc57d,	// (0x00067be4) blid2_navig_ring_pane_g1

0x76ae,	// (0x00062d15) blid2_navig_ring_pane_g2

0x76b6,	// (0x00062d1d) blid2_navig_ring_pane_g3

0x76be,	// (0x00062d25) blid2_navig_ring_pane_g4

0x76c6,	// (0x00062d2d) blid2_navig_ring_pane_g5

0x0004,

0xface,	// (0x0006b135) blid2_navig_ring_pane_g

0x0c38,	// (0x0005c29f) bg_popup_window_pane_cp011

0xe5b2,	// (0x00069c19) popup_blid2_search_window_g1

0xe5ba,	// (0x00069c21) popup_blid2_search_window_t1

0xe5c8,	// (0x00069c2f) popup_blid2_search_window_t2

0x0001,

0x0712,	// (0x0005bd79) popup_blid2_search_window_t

0xa39a,	// (0x00065a01) main_browser_pane_g1

0x9fdf,	// (0x00065646) main_browser_pane_ParamLimits

0xdcff,	// (0x00069366) bg_button_pane_cp011_ParamLimits

0x6577,	// (0x00061bde) cell_vitu2_function_pane_g1_ParamLimits

0xc077,	// (0x000676de) bg_popup_sub_pane_cp22_ParamLimits

0x6eba,	// (0x00062521) input_focus_pane_cp08_ParamLimits

0x6ed1,	// (0x00062538) popup_vitu2_query_button_pane_ParamLimits

0x6ed1,	// (0x00062538) popup_vitu2_query_button_pane

0x6ee2,	// (0x00062549) popup_vitu2_query_input_button_pane

0xe263,	// (0x000698ca) popup_vitu2_query_window_g1_ParamLimits

0x6eec,	// (0x00062553) popup_vitu2_query_window_g2_ParamLimits

0xfa2a,	// (0x0006b091) popup_vitu2_query_window_g_ParamLimits

0x0c38,	// (0x0005c29f) bg_button_pane_cp026

0x76ce,	// (0x00062d35) popup_vitu2_query_input_button_pane_g1

0x0c38,	// (0x0005c29f) bg_button_pane_cp025

0xe5d6,	// (0x00069c3d) popup_vitu2_query_button_pane_t1

0x4aed,	// (0x00060154) main_mp3_pane_t6

0x4afb,	// (0x00060162) popup_slider_window_cp01

0xdc8e,	// (0x000692f5) cam4_battery_pane

0xdcf5,	// (0x0006935c) cam4_battery_pane_cp02

0xdd8c,	// (0x000693f3) cam4_battery_pane_cp01

0xdd8c,	// (0x000693f3) cam4_battery_pane_cp03

0xde98,	// (0x000694ff) cam4_battery_pane_g1

0xc57d,	// (0x00067be4) cam4_battery_pane_g2

0x0001,

0xfad9,	// (0x0006b140) cam4_battery_pane_g

0xc449,	// (0x00067ab0) popup_blid_sat_info2_window_t11

0x2d93,	// (0x0005e3fa) aid_size_touch_mv_arrow_left_ParamLimits

0x2dbc,	// (0x0005e423) aid_size_touch_mv_arrow_right_ParamLimits

0xab95,	// (0x000661fc) navi_pane_g1_ParamLimits

0x2dfb,	// (0x0005e462) navi_pane_g2_ParamLimits

0x2e29,	// (0x0005e490) navi_pane_g3_ParamLimits

0xf404,	// (0x0006aa6b) navi_pane_g_ParamLimits

0x2e81,	// (0x0005e4e8) navi_pane_mv_t1_ParamLimits

0x5768,	// (0x00060dcf) grid_imed_effect_pane_ParamLimits

0x1c88,	// (0x0005d2ef) aid_placing_vt_slider_lsc

0xa2e9,	// (0x00065950) aid_placing_vt_slider_prt

0x9864,	// (0x00064ecb) bg_tb_trans_pane_cp01_ParamLimits

0xc709,	// (0x00067d70) popup_image_details_window_g1_ParamLimits

0xc71c,	// (0x00067d83) popup_image_details_window_g2_ParamLimits

0xc731,	// (0x00067d98) popup_image_details_window_g3_ParamLimits

0xc731,	// (0x00067d98) popup_image_details_window_g3

0xf737,	// (0x0006ad9e) popup_image_details_window_g_ParamLimits

0xc745,	// (0x00067dac) popup_image_details_window_t1_ParamLimits

0xc757,	// (0x00067dbe) popup_image_details_window_t2_ParamLimits

0xc770,	// (0x00067dd7) popup_image_details_window_t3_ParamLimits

0xc784,	// (0x00067deb) popup_image_details_window_t4_ParamLimits

0xc79f,	// (0x00067e06) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0006ada5) popup_image_details_window_t_ParamLimits

0x72f8,	// (0x0006295f) cl_header_name_pane_ParamLimits

0x72f8,	// (0x0006295f) cl_header_name_pane

0x76d6,	// (0x00062d3d) cl_header_name_pane_t1_ParamLimits

0x76d6,	// (0x00062d3d) cl_header_name_pane_t1

0x76f7,	// (0x00062d5e) cl_header_name_pane_t2_ParamLimits

0x76f7,	// (0x00062d5e) cl_header_name_pane_t2

0x7739,	// (0x00062da0) cl_header_name_pane_t3_ParamLimits

0x7739,	// (0x00062da0) cl_header_name_pane_t3

0x0002,

0xfade,	// (0x0006b145) cl_header_name_pane_t_ParamLimits

0xfade,	// (0x0006b145) cl_header_name_pane_t

0x2e52,	// (0x0005e4b9) navi_pane_mv_g2_ParamLimits

0xdfbc,	// (0x00069623) field_vitu2_entry_pane_g1_ParamLimits

0xdfc8,	// (0x0006962f) field_vitu2_entry_pane_g2_ParamLimits

0xdfd4,	// (0x0006963b) field_vitu2_entry_pane_g3_ParamLimits

0xdfd4,	// (0x0006963b) field_vitu2_entry_pane_g3

0xf930,	// (0x0006af97) field_vitu2_entry_pane_g_ParamLimits

0x64f3,	// (0x00061b5a) cell_vitu2_itu_pane_g1_ParamLimits

0x6503,	// (0x00061b6a) cell_vitu2_itu_pane_g2_ParamLimits

0x6503,	// (0x00061b6a) cell_vitu2_itu_pane_g2

0x0001,

0xf93c,	// (0x0006afa3) cell_vitu2_itu_pane_g_ParamLimits

0xf93c,	// (0x0006afa3) cell_vitu2_itu_pane_g

0xdcff,	// (0x00069366) bg_vkb2_func_pane_cp05_ParamLimits

0xdcff,	// (0x00069366) bg_vkb2_func_pane_cp05

0xdcff,	// (0x00069366) bg_vkb2_func_pane_cp03

0xdcff,	// (0x00069366) bg_vkb2_func_pane_cp04

0xdcff,	// (0x00069366) bg_vkb2_func_pane_cp10_ParamLimits

0xdcff,	// (0x00069366) bg_vkb2_func_pane_cp10

0x729e,	// (0x00062905) bg_vkb2_func_pane_cp08

0x7284,	// (0x000628eb) bg_vkb2_func_pane_cp06

0x7292,	// (0x000628f9) bg_vkb2_func_pane_cp07

0xe4db,	// (0x00069b42) bg_vkb2_func_pane_cp11_ParamLimits

0xe4db,	// (0x00069b42) bg_vkb2_func_pane_cp11

0xe4f0,	// (0x00069b57) bg_vkb2_func_pane_cp12_ParamLimits

0xe4f0,	// (0x00069b57) bg_vkb2_func_pane_cp12

0x0c38,	// (0x0005c29f) bg_vkb2_func_pane_cp09

0xdff4,	// (0x0006965b) bg_vkb2_func_pane_g1

0xa4ab,	// (0x00065b12) bg_vkb2_func_pane_g2

0xdffc,	// (0x00069663) bg_vkb2_func_pane_g3

0xe004,	// (0x0006966b) bg_vkb2_func_pane_g4

0xe226,	// (0x0006988d) bg_vkb2_func_pane_g5

0xe01c,	// (0x00069683) bg_vkb2_func_pane_g6

0xe024,	// (0x0006968b) bg_vkb2_func_pane_g7

0xe014,	// (0x0006967b) bg_vkb2_func_pane_g8

0xa48b,	// (0x00065af2) bg_vkb2_func_pane_g9

0x0008,

0xfae5,	// (0x0006b14c) bg_vkb2_func_pane_g

0x75fa,	// (0x00062c61) blid2_tripm_pane_g6_ParamLimits

0x75fa,	// (0x00062c61) blid2_tripm_pane_g6

0xde52,	// (0x000694b9) mp4_progress_pane_g1

0x7673,	// (0x00062cda) blid2_tripm_values_pane_ParamLimits

0x7673,	// (0x00062cda) blid2_tripm_values_pane

0x776a,	// (0x00062dd1) blid2_tripm_values_pane_t1

0x7778,	// (0x00062ddf) blid2_tripm_values_pane_t2

0x7786,	// (0x00062ded) blid2_tripm_values_pane_t3

0x7794,	// (0x00062dfb) blid2_tripm_values_pane_t4

0x77a2,	// (0x00062e09) blid2_tripm_values_pane_t5

0x77b0,	// (0x00062e17) blid2_tripm_values_pane_t6

0x77be,	// (0x00062e25) blid2_tripm_values_pane_t7

0x77cc,	// (0x00062e33) blid2_tripm_values_pane_t8

0x77da,	// (0x00062e41) blid2_tripm_values_pane_t9

0x0008,

0xfaf8,	// (0x0006b15f) blid2_tripm_values_pane_t

0x1cca,	// (0x0005d331) call_video_pane_t1_ParamLimits

0x1ce8,	// (0x0005d34f) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0006a8f4) call_video_pane_t_ParamLimits

0x3356,	// (0x0005e9bd) msg_header_pane_g1_ParamLimits

0xadd0,	// (0x00066437) msg_header_pane_g2_ParamLimits

0xadd0,	// (0x00066437) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0006ab0e) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0006ab0e) msg_header_pane_g

0x9fdf,	// (0x00065646) main_clock2_pane_ParamLimits

0x547b,	// (0x00060ae2) grid_clock2_toolbar_pane_ParamLimits

0x547b,	// (0x00060ae2) grid_clock2_toolbar_pane

0x547b,	// (0x00060ae2) listscroll_clock2_pane_ParamLimits

0x547b,	// (0x00060ae2) listscroll_clock2_pane

0x555d,	// (0x00060bc4) main_clock2_pane_t3_ParamLimits

0x555d,	// (0x00060bc4) main_clock2_pane_t3

0x5580,	// (0x00060be7) main_clock2_pane_t4_ParamLimits

0x5580,	// (0x00060be7) main_clock2_pane_t4

0xe5e4,	// (0x00069c4b) cell_clock2_toolbar_pane

0xe5ec,	// (0x00069c53) cell_clock2_toolbar_pane_cp01

0xe5ec,	// (0x00069c53) cell_clock2_toolbar_pane_cp02

0xe5f4,	// (0x00069c5b) cell_clock2_toolbar_pane_cp03

0xe5fc,	// (0x00069c63) list_clock2_pane

0xaaec,	// (0x00066153) scroll_pane_cp10

0xe604,	// (0x00069c6b) list_single_clock2_pane_ParamLimits

0xe604,	// (0x00069c6b) list_single_clock2_pane

0xac35,	// (0x0006629c) list_highlight_pane_cp08

0xe611,	// (0x00069c78) list_single_clock2_pane_t1

0xe61f,	// (0x00069c86) list_single_clock2_pane_t2

0x0001,

0x0749,	// (0x0005bdb0) list_single_clock2_pane_t

0x0c38,	// (0x0005c29f) bg_button_pane_cp10

0xe62d,	// (0x00069c94) cell_clock2_toolbar_pane_g1

0x33df,	// (0x0005ea46) aid_main_viewer_pane_g1_ParamLimits

0x33df,	// (0x0005ea46) aid_main_viewer_pane_g1

0x33ed,	// (0x0005ea54) aid_main_viewer_pane_g2_ParamLimits

0x33ed,	// (0x0005ea54) aid_main_viewer_pane_g2

0x33fb,	// (0x0005ea62) aid_main_viewer_pane_g3_ParamLimits

0x33fb,	// (0x0005ea62) aid_main_viewer_pane_g3

0x340a,	// (0x0005ea71) aid_main_viewer_pane_g4_ParamLimits

0x340a,	// (0x0005ea71) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0006ab1f) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0006ab1f) aid_main_viewer_pane_g

0x3d10,	// (0x0005f377) main_calc_pane_ParamLimits

0x3d24,	// (0x0005f38b) main_dialer2_pane_ParamLimits

0x0c38,	// (0x0005c29f) main_cam6_pane

0x0c38,	// (0x0005c29f) main_vid6_pane

0x5487,	// (0x00060aee) listscroll_gen_pane_cp06_ParamLimits

0x5487,	// (0x00060aee) listscroll_gen_pane_cp06

0x55a3,	// (0x00060c0a) main_clock2_pane_t5_ParamLimits

0x55a3,	// (0x00060c0a) main_clock2_pane_t5

0x55fd,	// (0x00060c64) aid_call2_pane_cp10_ParamLimits

0x560f,	// (0x00060c76) aid_call_pane_cp10_ParamLimits

0xab6a,	// (0x000661d1) popup_clock_analogue_window_cp10_g1_ParamLimits

0xab6a,	// (0x000661d1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5621,	// (0x00060c88) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5621,	// (0x00060c88) popup_clock_analogue_window_cp10_g4_ParamLimits

0xab6a,	// (0x000661d1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0006ae55) popup_clock_analogue_window_cp10_g_ParamLimits

0x5633,	// (0x00060c9a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5c7b,	// (0x000612e2) cell_dialer2_keypad_pane_g2_ParamLimits

0x5c7b,	// (0x000612e2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cf,	// (0x0006af36) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cf,	// (0x0006af36) cell_dialer2_keypad_pane_g

0x5c97,	// (0x000612fe) cell_dialer2_keypad_pane_t1

0x688e,	// (0x00061ef5) main_cset_text2_pane_ParamLimits

0x688e,	// (0x00061ef5) main_cset_text2_pane

0xe443,	// (0x00069aaa) area_vitu2_query_pane_g1_ParamLimits

0x7187,	// (0x000627ee) area_vitu2_query_pane_g2_ParamLimits

0xfa53,	// (0x0006b0ba) area_vitu2_query_pane_g_ParamLimits

0x7260,	// (0x000628c7) area_vitu2_query_pane_t7_ParamLimits

0x7260,	// (0x000628c7) area_vitu2_query_pane_t7

0x7284,	// (0x000628eb) bg_button_pane_cp018_ParamLimits

0x7292,	// (0x000628f9) bg_button_pane_cp021_ParamLimits

0x729e,	// (0x00062905) bg_button_pane_cp022_ParamLimits

0x729e,	// (0x00062905) bg_vkb2_func_pane_cp08_ParamLimits

0x7284,	// (0x000628eb) bg_vkb2_func_pane_cp06_ParamLimits

0x7292,	// (0x000628f9) bg_vkb2_func_pane_cp07_ParamLimits

0x72ad,	// (0x00062914) input_focus_pane_cp09_ParamLimits

0xde24,	// (0x0006948b) cam6_autofocus_pane_ParamLimits

0xde24,	// (0x0006948b) cam6_autofocus_pane

0x77e8,	// (0x00062e4f) cam6_image_uncrop_pane_ParamLimits

0x77e8,	// (0x00062e4f) cam6_image_uncrop_pane

0x77f7,	// (0x00062e5e) cam6_indi_pane_ParamLimits

0x77f7,	// (0x00062e5e) cam6_indi_pane

0x780d,	// (0x00062e74) cam6_mode_pane_ParamLimits

0x780d,	// (0x00062e74) cam6_mode_pane

0x781f,	// (0x00062e86) cam6_timer_pane_ParamLimits

0x781f,	// (0x00062e86) cam6_timer_pane

0x782b,	// (0x00062e92) cam6_zoom_pane_ParamLimits

0x782b,	// (0x00062e92) cam6_zoom_pane

0x7837,	// (0x00062e9e) cam6_mode_pane_g1_ParamLimits

0x7837,	// (0x00062e9e) cam6_mode_pane_g1

0x7847,	// (0x00062eae) cam6_mode_pane_g2_ParamLimits

0x7847,	// (0x00062eae) cam6_mode_pane_g2

0x7857,	// (0x00062ebe) cam6_mode_pane_g3_ParamLimits

0x7857,	// (0x00062ebe) cam6_mode_pane_g3

0x7867,	// (0x00062ece) cam6_mode_pane_g4_ParamLimits

0x7867,	// (0x00062ece) cam6_mode_pane_g4

0x0003,

0xfb0b,	// (0x0006b172) cam6_mode_pane_g_ParamLimits

0xfb0b,	// (0x0006b172) cam6_mode_pane_g

0xe175,	// (0x000697dc) bg_tb_trans_pane_cp08_ParamLimits

0xe175,	// (0x000697dc) bg_tb_trans_pane_cp08

0xe635,	// (0x00069c9c) cam6_battery_pane_ParamLimits

0xe635,	// (0x00069c9c) cam6_battery_pane

0xe64b,	// (0x00069cb2) cam6_indi_pane_g1_ParamLimits

0xe64b,	// (0x00069cb2) cam6_indi_pane_g1

0xe65d,	// (0x00069cc4) cam6_indi_pane_g2_ParamLimits

0xe65d,	// (0x00069cc4) cam6_indi_pane_g2

0xe66f,	// (0x00069cd6) cam6_indi_pane_g3_ParamLimits

0xe66f,	// (0x00069cd6) cam6_indi_pane_g3

0x0002,

0x0757,	// (0x0005bdbe) cam6_indi_pane_g_ParamLimits

0x0757,	// (0x0005bdbe) cam6_indi_pane_g

0xe681,	// (0x00069ce8) cam6_indi_pane_t1_ParamLimits

0xe681,	// (0x00069ce8) cam6_indi_pane_t1

0x7877,	// (0x00062ede) cam6_autofocus_pane_g1

0x787f,	// (0x00062ee6) cam6_autofocus_pane_g2

0x7887,	// (0x00062eee) cam6_autofocus_pane_g3

0x788f,	// (0x00062ef6) cam6_autofocus_pane_g4

0x0003,

0xfb14,	// (0x0006b17b) cam6_autofocus_pane_g

0xe6a7,	// (0x00069d0e) cam6_timer_pane_g1

0xe6af,	// (0x00069d16) cam6_timer_pane_t1

0xe6bd,	// (0x00069d24) cam6_zoom_cont_pane

0xe6c5,	// (0x00069d2c) cam6_zoom_pane_g1

0xe6cd,	// (0x00069d34) cam6_zoom_pane_g2

0x7897,	// (0x00062efe) cam6_zoom_pane_g3

0x0002,

0xfb1d,	// (0x0006b184) cam6_zoom_pane_g

0xc57d,	// (0x00067be4) cam6_battery_pane_g1

0xc57d,	// (0x00067be4) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0006ad62) cam6_battery_pane_g

0xe6d5,	// (0x00069d3c) cam6_zoom_cont_pane_g1

0xe6de,	// (0x00069d45) cam6_zoom_cont_pane_g2

0xe6e7,	// (0x00069d4e) cam6_zoom_cont_pane_g3

0x0002,

0x076e,	// (0x0005bdd5) cam6_zoom_cont_pane_g

0x78b4,	// (0x00062f1b) cam6_mode_pane_cp_ParamLimits

0x78b4,	// (0x00062f1b) cam6_mode_pane_cp

0x78c6,	// (0x00062f2d) cam6_zoom_pane_cp_ParamLimits

0x78c6,	// (0x00062f2d) cam6_zoom_pane_cp

0x78d2,	// (0x00062f39) vid6_image_uncrop_cif_pane_ParamLimits

0x78d2,	// (0x00062f39) vid6_image_uncrop_cif_pane

0x78e2,	// (0x00062f49) vid6_image_uncrop_nhd_pane_ParamLimits

0x78e2,	// (0x00062f49) vid6_image_uncrop_nhd_pane

0x78f1,	// (0x00062f58) vid6_image_uncrop_vga_pane_ParamLimits

0x78f1,	// (0x00062f58) vid6_image_uncrop_vga_pane

0x7900,	// (0x00062f67) vid6_image_uncrop_wvga_pane_ParamLimits

0x7900,	// (0x00062f67) vid6_image_uncrop_wvga_pane

0x790f,	// (0x00062f76) vid6_indi_pane_ParamLimits

0x790f,	// (0x00062f76) vid6_indi_pane

0xe175,	// (0x000697dc) bg_tb_trans_pane_cp09_ParamLimits

0xe175,	// (0x000697dc) bg_tb_trans_pane_cp09

0xe6ff,	// (0x00069d66) cam6_battery_pane_cp_ParamLimits

0xe6ff,	// (0x00069d66) cam6_battery_pane_cp

0xe70b,	// (0x00069d72) vid6_indi_pane_g1_ParamLimits

0xe70b,	// (0x00069d72) vid6_indi_pane_g1

0xe71d,	// (0x00069d84) vid6_indi_pane_g2_ParamLimits

0xe71d,	// (0x00069d84) vid6_indi_pane_g2

0xe72f,	// (0x00069d96) vid6_indi_pane_g3_ParamLimits

0xe72f,	// (0x00069d96) vid6_indi_pane_g3

0xe744,	// (0x00069dab) vid6_indi_pane_g4_ParamLimits

0xe744,	// (0x00069dab) vid6_indi_pane_g4

0xe759,	// (0x00069dc0) vid6_indi_pane_g5_ParamLimits

0xe759,	// (0x00069dc0) vid6_indi_pane_g5

0x0004,

0x0775,	// (0x0005bddc) vid6_indi_pane_g_ParamLimits

0x0775,	// (0x0005bddc) vid6_indi_pane_g

0xe773,	// (0x00069dda) vid6_indi_pane_t1_ParamLimits

0xe773,	// (0x00069dda) vid6_indi_pane_t1

0xe789,	// (0x00069df0) vid6_indi_pane_t2_ParamLimits

0xe789,	// (0x00069df0) vid6_indi_pane_t2

0xe7b1,	// (0x00069e18) vid6_indi_pane_t3_ParamLimits

0xe7b1,	// (0x00069e18) vid6_indi_pane_t3

0xe7d9,	// (0x00069e40) vid6_indi_pane_t4_ParamLimits

0xe7d9,	// (0x00069e40) vid6_indi_pane_t4

0x0003,

0x0780,	// (0x0005bde7) vid6_indi_pane_t_ParamLimits

0x0780,	// (0x0005bde7) vid6_indi_pane_t

0xe7fd,	// (0x00069e64) wait_bar_pane_cp08

0x7927,	// (0x00062f8e) main_cset_text2_pane_t1_ParamLimits

0x7927,	// (0x00062f8e) main_cset_text2_pane_t1

0x789f,	// (0x00062f06) listscroll_gen_pane_cp06_t1_ParamLimits

0x789f,	// (0x00062f06) listscroll_gen_pane_cp06_t1

0x0c38,	// (0x0005c29f) main_cam6_set_pane

0xdc80,	// (0x000692e7) bg_tb_trans_pane_cp06_ParamLimits

0xdc96,	// (0x000692fd) cam4_indicators_pane_g1_ParamLimits

0xdca7,	// (0x0006930e) cam4_indicators_pane_g2_ParamLimits

0xf90c,	// (0x0006af73) cam4_indicators_pane_g_ParamLimits

0xdcc5,	// (0x0006932c) cam4_indicators_pane_t1_ParamLimits

0xdce7,	// (0x0006934e) bg_tb_trans_pane_cp07_ParamLimits

0x622b,	// (0x00061892) vid4_indicators_pane_g1_ParamLimits

0x6238,	// (0x0006189f) vid4_indicators_pane_g2_ParamLimits

0x6245,	// (0x000618ac) vid4_indicators_pane_g3_ParamLimits

0x6252,	// (0x000618b9) vid4_indicators_pane_g4_ParamLimits

0xf91e,	// (0x0006af85) vid4_indicators_pane_g_ParamLimits

0x626a,	// (0x000618d1) vid4_indicators_pane_t1_ParamLimits

0xdd94,	// (0x000693fb) vid4_progress_pane_g1_ParamLimits

0xdda4,	// (0x0006940b) vid4_progress_pane_g2_ParamLimits

0xa77e,	// (0x00065de5) vid4_progress_pane_g3_ParamLimits

0xddb4,	// (0x0006941b) vid4_progress_pane_g4_ParamLimits

0xfa8b,	// (0x0006b0f2) vid4_progress_pane_g_ParamLimits

0xddd2,	// (0x00069439) vid4_progress_pane_t1_ParamLimits

0xdde7,	// (0x0006944e) vid4_progress_pane_t2_ParamLimits

0xddfd,	// (0x00069464) vid4_progress_pane_t3_ParamLimits

0xfa96,	// (0x0006b0fd) vid4_progress_pane_t_ParamLimits

0xde12,	// (0x00069479) wait_bar_pane_cp07_ParamLimits

0x7944,	// (0x00062fab) main_cam6_set_pane_g2_ParamLimits

0x7944,	// (0x00062fab) main_cam6_set_pane_g2

0x7968,	// (0x00062fcf) main_cset6_listscroll_pane_ParamLimits

0x7968,	// (0x00062fcf) main_cset6_listscroll_pane

0x7988,	// (0x00062fef) main_cset6_slider_pane_ParamLimits

0x7988,	// (0x00062fef) main_cset6_slider_pane

0x799e,	// (0x00063005) main_cset6_text2_pane_ParamLimits

0x799e,	// (0x00063005) main_cset6_text2_pane

0xe818,	// (0x00069e7f) main_cset6_text_pane

0xe820,	// (0x00069e87) main_cset_list_pane_copy1_ParamLimits

0xe820,	// (0x00069e87) main_cset_list_pane_copy1

0xe830,	// (0x00069e97) scroll_pane_cp028_copy1

0x79ac,	// (0x00063013) cset_list_set_pane_copy1

0x79bd,	// (0x00063024) aid_position_infowindow_above_copy1

0x79c5,	// (0x0006302c) aid_position_infowindow_below_copy1

0x79cd,	// (0x00063034) cset_list_set_pane_g1_copy1

0x79d5,	// (0x0006303c) cset_list_set_pane_g3_copy1_ParamLimits

0x79d5,	// (0x0006303c) cset_list_set_pane_g3_copy1

0x79e4,	// (0x0006304b) cset_list_set_pane_t1_copy1_ParamLimits

0x79e4,	// (0x0006304b) cset_list_set_pane_t1_copy1

0x9864,	// (0x00064ecb) list_highlight_pane_cp021_copy1_ParamLimits

0x9864,	// (0x00064ecb) list_highlight_pane_cp021_copy1

0xe839,	// (0x00069ea0) cset6_slider_pane_ParamLimits

0xe839,	// (0x00069ea0) cset6_slider_pane

0xe865,	// (0x00069ecc) main_cset6_slider_pane_g1_ParamLimits

0xe865,	// (0x00069ecc) main_cset6_slider_pane_g1

0x79f9,	// (0x00063060) main_cset6_slider_pane_g2_ParamLimits

0x79f9,	// (0x00063060) main_cset6_slider_pane_g2

0xe88d,	// (0x00069ef4) main_cset6_slider_pane_g3_ParamLimits

0xe88d,	// (0x00069ef4) main_cset6_slider_pane_g3

0x7a21,	// (0x00063088) main_cset6_slider_pane_g4_ParamLimits

0x7a21,	// (0x00063088) main_cset6_slider_pane_g4

0x7a2d,	// (0x00063094) main_cset6_slider_pane_g5_ParamLimits

0x7a2d,	// (0x00063094) main_cset6_slider_pane_g5

0xe123,	// (0x0006978a) main_cset6_slider_pane_g7_ParamLimits

0xe123,	// (0x0006978a) main_cset6_slider_pane_g7

0xe12f,	// (0x00069796) main_cset6_slider_pane_g8_ParamLimits

0xe12f,	// (0x00069796) main_cset6_slider_pane_g8

0x693b,	// (0x00061fa2) main_cset6_slider_pane_g9_ParamLimits

0x693b,	// (0x00061fa2) main_cset6_slider_pane_g9

0x6947,	// (0x00061fae) main_cset6_slider_pane_g10_ParamLimits

0x6947,	// (0x00061fae) main_cset6_slider_pane_g10

0x6953,	// (0x00061fba) main_cset6_slider_pane_g11_ParamLimits

0x6953,	// (0x00061fba) main_cset6_slider_pane_g11

0x695f,	// (0x00061fc6) main_cset6_slider_pane_g12_ParamLimits

0x695f,	// (0x00061fc6) main_cset6_slider_pane_g12

0x696b,	// (0x00061fd2) main_cset6_slider_pane_g13_ParamLimits

0x696b,	// (0x00061fd2) main_cset6_slider_pane_g13

0x6977,	// (0x00061fde) main_cset6_slider_pane_g14_ParamLimits

0x6977,	// (0x00061fde) main_cset6_slider_pane_g14

0x7a39,	// (0x000630a0) main_cset6_slider_pane_g15_ParamLimits

0x7a39,	// (0x000630a0) main_cset6_slider_pane_g15

0x699b,	// (0x00062002) main_cset6_slider_pane_g16_ParamLimits

0x699b,	// (0x00062002) main_cset6_slider_pane_g16

0x69a7,	// (0x0006200e) main_cset6_slider_pane_g17_ParamLimits

0x69a7,	// (0x0006200e) main_cset6_slider_pane_g17

0x0011,

0xfb24,	// (0x0006b18b) main_cset6_slider_pane_g_ParamLimits

0xfb24,	// (0x0006b18b) main_cset6_slider_pane_g

0xe899,	// (0x00069f00) main_cset6_slider_pane_t1_ParamLimits

0xe899,	// (0x00069f00) main_cset6_slider_pane_t1

0x7a69,	// (0x000630d0) main_cset6_slider_pane_t2_ParamLimits

0x7a69,	// (0x000630d0) main_cset6_slider_pane_t2

0x7a94,	// (0x000630fb) main_cset6_slider_pane_t3_ParamLimits

0x7a94,	// (0x000630fb) main_cset6_slider_pane_t3

0x7abf,	// (0x00063126) main_cset6_slider_pane_t4_ParamLimits

0x7abf,	// (0x00063126) main_cset6_slider_pane_t4

0x7aea,	// (0x00063151) main_cset6_slider_pane_t5_ParamLimits

0x7aea,	// (0x00063151) main_cset6_slider_pane_t5

0xe8da,	// (0x00069f41) main_cset6_slider_pane_t7_ParamLimits

0xe8da,	// (0x00069f41) main_cset6_slider_pane_t7

0x7b15,	// (0x0006317c) main_cset6_slider_pane_t8_ParamLimits

0x7b15,	// (0x0006317c) main_cset6_slider_pane_t8

0x7b39,	// (0x000631a0) main_cset6_slider_pane_t9_ParamLimits

0x7b39,	// (0x000631a0) main_cset6_slider_pane_t9

0x7b5d,	// (0x000631c4) main_cset6_slider_pane_t10_ParamLimits

0x7b5d,	// (0x000631c4) main_cset6_slider_pane_t10

0x7b81,	// (0x000631e8) main_cset6_slider_pane_t11_ParamLimits

0x7b81,	// (0x000631e8) main_cset6_slider_pane_t11

0xe910,	// (0x00069f77) main_cset6_slider_pane_t14_ParamLimits

0xe910,	// (0x00069f77) main_cset6_slider_pane_t14

0xe949,	// (0x00069fb0) main_cset6_slider_pane_t15_ParamLimits

0xe949,	// (0x00069fb0) main_cset6_slider_pane_t15

0x000b,

0xfb49,	// (0x0006b1b0) main_cset6_slider_pane_t_ParamLimits

0xfb49,	// (0x0006b1b0) main_cset6_slider_pane_t

0xe982,	// (0x00069fe9) cset_slider_pane_g1_copy1

0xe98b,	// (0x00069ff2) cset_slider_pane_g2_copy1

0xe994,	// (0x00069ffb) cset_slider_pane_g3_copy1

0x0c38,	// (0x0005c29f) bg_popup_sub_pane_cp011_copy1

0xe26f,	// (0x000698d6) main_cset_text_pane_g1_copy1

0xe277,	// (0x000698de) main_cset_text_pane_t1_copy1

0xe285,	// (0x000698ec) main_cset_text_pane_t2_copy1

0xe293,	// (0x000698fa) main_cset_text_pane_t3_copy1

0xe2a1,	// (0x00069908) main_cset_text_pane_t4_copy1

0xe2af,	// (0x00069916) main_cset_text_pane_t5_copy1

0xe2bd,	// (0x00069924) main_cset_text_pane_t6_copy1

0xe2cb,	// (0x00069932) main_cset_text_pane_t7_copy1

0x7927,	// (0x00062f8e) main_cset_text2_pane_t1_copy1

0x0c38,	// (0x0005c29f) main_ncimui_pane

0x3f66,	// (0x0005f5cd) popup_query_ncimui_window_ParamLimits

0x3f66,	// (0x0005f5cd) popup_query_ncimui_window

0x4c6f,	// (0x000602d6) field_cale_ev2_pane_g4_ParamLimits

0x4c6f,	// (0x000602d6) field_cale_ev2_pane_g4

0x5b5b,	// (0x000611c2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5b5b,	// (0x000611c2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0006af16) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0006af16) cell_video_dialer_keypad_pane_g

0x5b73,	// (0x000611da) cell_video_dialer_keypad_pane_t1

0x0c38,	// (0x0005c29f) bg_popup_window_pane_cp012

0xa9c9,	// (0x00066030) heading_pane_cp06

0xe9bb,	// (0x0006a022) ncim_query_content_pane

0x0c38,	// (0x0005c29f) bg_popup_heading_pane_cp01

0xe9c3,	// (0x0006a02a) ncim_heading_pane_t1

0xe9d1,	// (0x0006a038) ncim_indicator_popup_pane

0xe9e3,	// (0x0006a04a) ncim_query_button_pane

0xe9f7,	// (0x0006a05e) ncim_query_content_pane_t1

0xea09,	// (0x0006a070) ncim_query_content_pane_t2

0x0005,

0xfb88,	// (0x0006b1ef) ncim_query_content_pane_t

0xea43,	// (0x0006a0aa) ncim_query_list_pane

0xea55,	// (0x0006a0bc) ncim_query_popup_pane

0xe9d1,	// (0x0006a038) ncim_indicator_popup_pane_ParamLimits

0x7d6f,	// (0x000633d6) ncim_query_content_pane_g1_ParamLimits

0x7d6f,	// (0x000633d6) ncim_query_content_pane_g1

0xe9f7,	// (0x0006a05e) ncim_query_content_pane_t1_ParamLimits

0xea09,	// (0x0006a070) ncim_query_content_pane_t2_ParamLimits

0x7d7b,	// (0x000633e2) ncim_query_content_pane_t3_ParamLimits

0x7d7b,	// (0x000633e2) ncim_query_content_pane_t3

0x7da3,	// (0x0006340a) ncim_query_content_pane_t4_ParamLimits

0x7da3,	// (0x0006340a) ncim_query_content_pane_t4

0x7dcb,	// (0x00063432) ncim_query_content_pane_t5_ParamLimits

0x7dcb,	// (0x00063432) ncim_query_content_pane_t5

0xea1b,	// (0x0006a082) ncim_query_content_pane_t6_ParamLimits

0xea1b,	// (0x0006a082) ncim_query_content_pane_t6

0xfb88,	// (0x0006b1ef) ncim_query_content_pane_t_ParamLimits

0xea43,	// (0x0006a0aa) ncim_query_list_pane_ParamLimits

0xea55,	// (0x0006a0bc) ncim_query_popup_pane_ParamLimits

0xea69,	// (0x0006a0d0) wait_bar_pane_cp04

0x0c38,	// (0x0005c29f) input_focus_pane_cp011

0xea71,	// (0x0006a0d8) ncim_query_popup_pane_t1

0xea7f,	// (0x0006a0e6) ncim_list_query_list_pane_ParamLimits

0xea7f,	// (0x0006a0e6) ncim_list_query_list_pane

0x0c38,	// (0x0005c29f) bg_button_pane_cp027

0xea8c,	// (0x0006a0f3) ncim_query_button_pane_g1

0x0c38,	// (0x0005c29f) list_highlight_pane_cp012

0xea96,	// (0x0006a0fd) ncim_list_query_list_pane_g1

0xea9e,	// (0x0006a105) ncim_list_query_list_pane_t1

0xdcb6,	// (0x0006931d) cam4_indicators_pane_g3_ParamLimits

0xdcb6,	// (0x0006931d) cam4_indicators_pane_g3

0x625e,	// (0x000618c5) vid4_indicators_pane_g5_ParamLimits

0x625e,	// (0x000618c5) vid4_indicators_pane_g5

0xddc3,	// (0x0006942a) vid4_progress_pane_g5_ParamLimits

0xddc3,	// (0x0006942a) vid4_progress_pane_g5

0x7c88,	// (0x000632ef) main_ncimui_pane_g1

0x7cde,	// (0x00063345) ncimui_group_query_pane_ParamLimits

0x7cde,	// (0x00063345) ncimui_group_query_pane

0x7d1a,	// (0x00063381) ncimui_list_pane_ParamLimits

0x7d1a,	// (0x00063381) ncimui_list_pane

0x7d3b,	// (0x000633a2) ncimui_text_pane_ParamLimits

0x7d3b,	// (0x000633a2) ncimui_text_pane

0x7df3,	// (0x0006345a) ncimui_text_pane_t1_ParamLimits

0x7df3,	// (0x0006345a) ncimui_text_pane_t1

0xeaac,	// (0x0006a113) ncimui_list_single_graphic_pane_ParamLimits

0xeaac,	// (0x0006a113) ncimui_list_single_graphic_pane

0x7e11,	// (0x00063478) ncimui_query_pane_ParamLimits

0x7e11,	// (0x00063478) ncimui_query_pane

0x0c38,	// (0x0005c29f) list_highlight_pane_cp013

0xeabc,	// (0x0006a123) ncim_list_query_list_pane_t1_copy1

0xea96,	// (0x0006a0fd) ncim_list_single_graphic_pane_g1

0xeaca,	// (0x0006a131) ncim_query_button_pane_cp01

0xead6,	// (0x0006a13d) ncim_query_entry_pane_ParamLimits

0xead6,	// (0x0006a13d) ncim_query_entry_pane

0xeae9,	// (0x0006a150) ncimui_query_pane_g1

0xeaf5,	// (0x0006a15c) ncimui_query_pane_t1_ParamLimits

0xeaf5,	// (0x0006a15c) ncimui_query_pane_t1

0x9864,	// (0x00064ecb) input_focus_pane_cp012

0xeb0e,	// (0x0006a175) ncim_query_entry_pane_t1

0x9fdf,	// (0x00065646) main_im_pane_ParamLimits

0x9864,	// (0x00064ecb) main_mobtv_pane_ParamLimits

0x9864,	// (0x00064ecb) main_mobtv_pane

0x7a51,	// (0x000630b8) main_cset6_slider_pane_g18_ParamLimits

0x7a51,	// (0x000630b8) main_cset6_slider_pane_g18

0x7a5d,	// (0x000630c4) main_cset6_slider_pane_g19_ParamLimits

0x7a5d,	// (0x000630c4) main_cset6_slider_pane_g19

0x7e24,	// (0x0006348b) bg_main_mobtv_pane_ParamLimits

0x7e24,	// (0x0006348b) bg_main_mobtv_pane

0x7e32,	// (0x00063499) main_mobtv_info_pane

0x7e3b,	// (0x000634a2) main_mobtv_loading_pane_ParamLimits

0x7e3b,	// (0x000634a2) main_mobtv_loading_pane

0xeb20,	// (0x0006a187) main_mobtv_pg_channel_list_pane

0xeb2a,	// (0x0006a191) main_mobtv_pg_hdr_pane

0x7e48,	// (0x000634af) main_mobtv_programe_curr_pane_ParamLimits

0x7e48,	// (0x000634af) main_mobtv_programe_curr_pane

0x7e55,	// (0x000634bc) main_mobtv_programe_next_pane_ParamLimits

0x7e55,	// (0x000634bc) main_mobtv_programe_next_pane

0xeb33,	// (0x0006a19a) popup_mobtv_noti_window

0xc57d,	// (0x00067be4) main_tv_pg_hdr_pane_g1

0xeb3b,	// (0x0006a1a2) main_tv_pg_hdr_pane_g2

0xeb43,	// (0x0006a1aa) main_tv_pg_hdr_pane_g3

0xeb5d,	// (0x0006a1c4) main_tv_pg_hdr_pane_g4

0xeb65,	// (0x0006a1cc) main_tv_pg_hdr_pane_g5

0xeb6f,	// (0x0006a1d6) main_tv_pg_hdr_pane_g6

0xeb79,	// (0x0006a1e0) main_tv_pg_hdr_pane_g7

0xeb83,	// (0x0006a1ea) main_tv_pg_hdr_pane_g8

0xeb8d,	// (0x0006a1f4) main_tv_pg_hdr_pane_g9

0xeb97,	// (0x0006a1fe) main_tv_pg_hdr_pane_g10

0xeba1,	// (0x0006a208) main_tv_pg_hdr_pane_g11

0x000a,

0xfb95,	// (0x0006b1fc) main_tv_pg_hdr_pane_g

0xebab,	// (0x0006a212) main_tv_pg_hdr_pane_t1

0xebb9,	// (0x0006a220) main_tv_pg_hdr_pane_t2

0xebc7,	// (0x0006a22e) main_tv_pg_hdr_pane_t3

0xebd7,	// (0x0006a23e) main_tv_pg_hdr_pane_t4

0xebe7,	// (0x0006a24e) main_tv_pg_hdr_pane_t5

0x0004,

0xfbac,	// (0x0006b213) main_tv_pg_hdr_pane_t

0xebf7,	// (0x0006a25e) single_mobtv_pg_channel_pane_ParamLimits

0xebf7,	// (0x0006a25e) single_mobtv_pg_channel_pane

0xec09,	// (0x0006a270) single_mobtv_pg_channel_table_pane

0xec12,	// (0x0006a279) single_mobtv_pg_channel_thumb_pane

0xec1b,	// (0x0006a282) single_tv_pg_channel_pane_g1

0xec24,	// (0x0006a28b) single_tv_pg_channel_pane_g2

0x0001,

0xfbb7,	// (0x0006b21e) single_tv_pg_channel_pane_g

0xc7e9,	// (0x00067e50) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc7e9,	// (0x00067e50) bg_single_mobtv_pg_channel_thumb_pane

0xec2d,	// (0x0006a294) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xec2d,	// (0x0006a294) single_mobtv_pg_channel_thumb_pane_g1

0xec3b,	// (0x0006a2a2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xec3b,	// (0x0006a2a2) single_mobtv_pg_channel_thumb_pane_g2

0xec47,	// (0x0006a2ae) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xec47,	// (0x0006a2ae) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbc,	// (0x0006b223) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbc,	// (0x0006b223) single_mobtv_pg_channel_thumb_pane_g

0xec53,	// (0x0006a2ba) single_mobtv_pg_channel_thumb_pane_t1

0xec61,	// (0x0006a2c8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc3,	// (0x0006b22a) single_mobtv_pg_channel_thumb_pane_t

0xc57d,	// (0x00067be4) bg_single_mobtv_pg_channel_table_pane_g1

0xc57d,	// (0x00067be4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0006ad62) bg_single_mobtv_pg_channel_table_pane_g

0xec6f,	// (0x0006a2d6) single_mobtv_pg_channel_table_pane_t1

0xec7d,	// (0x0006a2e4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbc8,	// (0x0006b22f) single_mobtv_pg_channel_table_pane_t

0x7e6a,	// (0x000634d1) main_mobtv_info_pane_g1_ParamLimits

0x7e6a,	// (0x000634d1) main_mobtv_info_pane_g1

0x7e88,	// (0x000634ef) main_mobtv_info_pane_t1_ParamLimits

0x7e88,	// (0x000634ef) main_mobtv_info_pane_t1

0x7f00,	// (0x00063567) main_mobtv_info_pane_t2_ParamLimits

0x7f00,	// (0x00063567) main_mobtv_info_pane_t2

0x0002,

0xfbd2,	// (0x0006b239) main_mobtv_info_pane_t_ParamLimits

0xfbd2,	// (0x0006b239) main_mobtv_info_pane_t

0x7f8f,	// (0x000635f6) wait_bar_pane_cp05

0x7fa1,	// (0x00063608) main_mobtv_loading_pane_g1_ParamLimits

0x7fa1,	// (0x00063608) main_mobtv_loading_pane_g1

0x7fb4,	// (0x0006361b) main_mobtv_loading_pane_g2_ParamLimits

0x7fb4,	// (0x0006361b) main_mobtv_loading_pane_g2

0x7fc0,	// (0x00063627) main_mobtv_loading_pane_g3_ParamLimits

0x7fc0,	// (0x00063627) main_mobtv_loading_pane_g3

0x0002,

0xfbd9,	// (0x0006b240) main_mobtv_loading_pane_g_ParamLimits

0xfbd9,	// (0x0006b240) main_mobtv_loading_pane_g

0xec8b,	// (0x0006a2f2) main_mobtv_loading_pane_t1_ParamLimits

0xec8b,	// (0x0006a2f2) main_mobtv_loading_pane_t1

0xeca3,	// (0x0006a30a) main_mobtv_loading_pane_t2_ParamLimits

0xeca3,	// (0x0006a30a) main_mobtv_loading_pane_t2

0x0001,

0x0845,	// (0x0005beac) main_mobtv_loading_pane_t_ParamLimits

0x0845,	// (0x0005beac) main_mobtv_loading_pane_t

0x7fd3,	// (0x0006363a) wait_bar_pane_cp06_ParamLimits

0x7fd3,	// (0x0006363a) wait_bar_pane_cp06

0xecc7,	// (0x0006a32e) main_mobtv_programe_curr_pane_t1

0xecd5,	// (0x0006a33c) main_mobtv_programe_curr_pane_t2

0x0001,

0x084a,	// (0x0005beb1) main_mobtv_programe_curr_pane_t

0xece3,	// (0x0006a34a) main_mobtv_programe_next_pane_t1

0xecf1,	// (0x0006a358) main_mobtv_programe_next_pane_t2

0xecff,	// (0x0006a366) main_mobtv_programe_next_pane_t3

0x0002,

0x084f,	// (0x0005beb6) main_mobtv_programe_next_pane_t

0x0c38,	// (0x0005c29f) bg_popup_mobtv_noti_window_pane

0xed0d,	// (0x0006a374) popup_mobtv_noti_window_g1

0xed15,	// (0x0006a37c) popup_mobtv_noti_window_t1

0xed23,	// (0x0006a38a) popup_mobtv_noti_window_t2

0x0001,

0x0856,	// (0x0005bebd) popup_mobtv_noti_window_t

0xc57d,	// (0x00067be4) bg_popup_mobtv_noti_window_pane_g1

0x0c38,	// (0x0005c29f) sc_clock_pane

0x0c38,	// (0x0005c29f) main_fs_bigclock_pane

0x765d,	// (0x00062cc4) blid2_tripm_pane_t4_ParamLimits

0x765d,	// (0x00062cc4) blid2_tripm_pane_t4

0x7fe2,	// (0x00063649) sc_clock_pane_g1_ParamLimits

0x7fe2,	// (0x00063649) sc_clock_pane_g1

0x7ff4,	// (0x0006365b) sc_clock_pane_t1_ParamLimits

0x7ff4,	// (0x0006365b) sc_clock_pane_t1

0x8016,	// (0x0006367d) sc_clock_pane_t2_ParamLimits

0x8016,	// (0x0006367d) sc_clock_pane_t2

0x802e,	// (0x00063695) sc_clock_pane_t3_ParamLimits

0x802e,	// (0x00063695) sc_clock_pane_t3

0x0004,

0xfbe0,	// (0x0006b247) sc_clock_pane_t_ParamLimits

0xfbe0,	// (0x0006b247) sc_clock_pane_t

0x8f14,	// (0x0006457b) main_fs_bigclock_indicator_pane_ParamLimits

0x8f14,	// (0x0006457b) main_fs_bigclock_indicator_pane

0xc7b9,	// (0x00067e20) main_fs_bigclock_pane_g1_ParamLimits

0xc7b9,	// (0x00067e20) main_fs_bigclock_pane_g1

0x8f20,	// (0x00064587) main_fs_bigclock_pane_t1_ParamLimits

0x8f20,	// (0x00064587) main_fs_bigclock_pane_t1

0x8f32,	// (0x00064599) main_fs_bigclock_pane_t2_ParamLimits

0x8f32,	// (0x00064599) main_fs_bigclock_pane_t2

0x8f46,	// (0x000645ad) main_fs_bigclock_pane_t3_ParamLimits

0x8f46,	// (0x000645ad) main_fs_bigclock_pane_t3

0x0002,

0xfdb1,	// (0x0006b418) main_fs_bigclock_pane_t_ParamLimits

0xfdb1,	// (0x0006b418) main_fs_bigclock_pane_t

0xd5a1,	// (0x00068c08) main_fs_bigclock_indicator_pane_g1

0xe9eb,	// (0x0006a052) ncim_query_content_pane_g2_ParamLimits

0xe9eb,	// (0x0006a052) ncim_query_content_pane_g2

0x0001,

0xfb83,	// (0x0006b1ea) ncim_query_content_pane_g_ParamLimits

0xfb83,	// (0x0006b1ea) ncim_query_content_pane_g

0x8047,	// (0x000636ae) sc_clock_pane_t4_ParamLimits

0x8047,	// (0x000636ae) sc_clock_pane_t4

0x9864,	// (0x00064ecb) main_radioblah_pane

0xdf45,	// (0x000695ac) cell_call4_button_pane_t1_copy1_ParamLimits

0xdf45,	// (0x000695ac) cell_call4_button_pane_t1_copy1

0x7c90,	// (0x000632f7) main_ncimui_pane_t1_ParamLimits

0x7c90,	// (0x000632f7) main_ncimui_pane_t1

0x7caa,	// (0x00063311) main_ncimui_pane_t2_ParamLimits

0x7caa,	// (0x00063311) main_ncimui_pane_t2

0x0002,

0xfb7c,	// (0x0006b1e3) main_ncimui_pane_t_ParamLimits

0xfb7c,	// (0x0006b1e3) main_ncimui_pane_t

0xee69,	// (0x0006a4d0) main_radioblah_anim_pane_ParamLimits

0xee69,	// (0x0006a4d0) main_radioblah_anim_pane

0xee7a,	// (0x0006a4e1) main_radioblah_info_pane_ParamLimits

0xee7a,	// (0x0006a4e1) main_radioblah_info_pane

0xee8e,	// (0x0006a4f5) main_radioblah_pane_t1_ParamLimits

0xee8e,	// (0x0006a4f5) main_radioblah_pane_t1

0xeeaa,	// (0x0006a511) main_radioblah_pane_t2_ParamLimits

0xeeaa,	// (0x0006a511) main_radioblah_pane_t2

0x0003,

0x087c,	// (0x0005bee3) main_radioblah_pane_t_ParamLimits

0x087c,	// (0x0005bee3) main_radioblah_pane_t

0x80f5,	// (0x0006375c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x80f5,	// (0x0006375c) main_radioblah_rocker_ctrl_pane

0xeef2,	// (0x0006a559) main_radioblah_info_pane_t1_ParamLimits

0xeef2,	// (0x0006a559) main_radioblah_info_pane_t1

0x814d,	// (0x000637b4) main_radioblah_info_pane_t2_ParamLimits

0x814d,	// (0x000637b4) main_radioblah_info_pane_t2

0x0003,

0xfbeb,	// (0x0006b252) main_radioblah_info_pane_t_ParamLimits

0xfbeb,	// (0x0006b252) main_radioblah_info_pane_t

0xc57d,	// (0x00067be4) main_radioblah_rocker_ctrl_pane_g1

0x81fd,	// (0x00063864) main_radioblah_rocker_ctrl_pane_g2

0x8205,	// (0x0006386c) main_radioblah_rocker_ctrl_pane_g3

0x820d,	// (0x00063874) main_radioblah_rocker_ctrl_pane_g4

0x8215,	// (0x0006387c) main_radioblah_rocker_ctrl_pane_g5

0x821d,	// (0x00063884) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbf4,	// (0x0006b25b) main_radioblah_rocker_ctrl_pane_g

0x7927,	// (0x00062f8e) main_cset_text2_pane_t1_copy1_ParamLimits

0xdc78,	// (0x000692df) cam4_image_uncrop_qvga_pane

0xdcdf,	// (0x00069346) vid4_image_uncrop_qcif_pane

0xde24,	// (0x0006948b) cam6_image_uncrop_qvga_pane_ParamLimits

0xde24,	// (0x0006948b) cam6_image_uncrop_qvga_pane

0xe6ef,	// (0x00069d56) vid6_image_uncrop_qcif_pane_ParamLimits

0xe6ef,	// (0x00069d56) vid6_image_uncrop_qcif_pane

0x0c38,	// (0x0005c29f) bg_popup_preview_window_pane_cp03

0xe99d,	// (0x0006a004) list_cset_text2_pane

0xe9a5,	// (0x0006a00c) main_cset6_text2_pane_g1

0xe9ad,	// (0x0006a014) main_cset6_text2_pane_t1

0x8225,	// (0x0006388c) list_cset_text2_pane_t1_ParamLimits

0x8225,	// (0x0006388c) list_cset_text2_pane_t1

0x9864,	// (0x00064ecb) main_radioblah_pane_ParamLimits

0x7f7b,	// (0x000635e2) main_mobtv_info_pane_t3_ParamLimits

0x7f7b,	// (0x000635e2) main_mobtv_info_pane_t3

0x80e3,	// (0x0006374a) main_radioblah_pane_g1

0x811d,	// (0x00063784) main_radioblah_info_pane_g1

0x81a2,	// (0x00063809) main_radioblah_info_pane_t3_ParamLimits

0x81a2,	// (0x00063809) main_radioblah_info_pane_t3

0x28a6,	// (0x0005df0d) highlight_cell_cale_month_pane_ParamLimits

0x28a6,	// (0x0005df0d) highlight_cell_cale_month_pane

0x0c38,	// (0x0005c29f) main_phob_fisheye_pane

0xc8d1,	// (0x00067f38) scroll_pane_cp0031_ParamLimits

0xc8d1,	// (0x00067f38) scroll_pane_cp0031

0xe7fd,	// (0x00069e64) wait_bar_pane_cp08_ParamLimits

0x79ac,	// (0x00063013) cset_list_set_pane_copy1_ParamLimits

0xef2c,	// (0x0006a593) highlight_cell_cale_month_pane_g1

0x823e,	// (0x000638a5) highlight_cell_cale_month_pane_t1

0xe497,	// (0x00069afe) list_gen_pane_cp01

0xe10e,	// (0x00069775) scroll_pane_01

0x824c,	// (0x000638b3) list_single_double_fisheye_pane

0x8255,	// (0x000638bc) list_double_fisheye_pane_g1_ParamLimits

0x8255,	// (0x000638bc) list_double_fisheye_pane_g1

0x8261,	// (0x000638c8) list_double_fisheye_pane_g2_ParamLimits

0x8261,	// (0x000638c8) list_double_fisheye_pane_g2

0x8275,	// (0x000638dc) list_double_fisheye_pane_g3_ParamLimits

0x8275,	// (0x000638dc) list_double_fisheye_pane_g3

0x0004,

0xfc01,	// (0x0006b268) list_double_fisheye_pane_g_ParamLimits

0xfc01,	// (0x0006b268) list_double_fisheye_pane_g

0x829e,	// (0x00063905) list_double_fisheye_pane_t1_ParamLimits

0x829e,	// (0x00063905) list_double_fisheye_pane_t1

0x82b9,	// (0x00063920) list_double_fisheye_pane_t2_ParamLimits

0x82b9,	// (0x00063920) list_double_fisheye_pane_t2

0x0001,

0xfc0c,	// (0x0006b273) list_double_fisheye_pane_t_ParamLimits

0xfc0c,	// (0x0006b273) list_double_fisheye_pane_t

0x0c38,	// (0x0005c29f) main_call5_pane

0x8072,	// (0x000636d9) sc_swipe_pane_ParamLimits

0x8072,	// (0x000636d9) sc_swipe_pane

0x82ee,	// (0x00063955) call5_image_pane_ParamLimits

0x82ee,	// (0x00063955) call5_image_pane

0x830b,	// (0x00063972) call5_swipe_1_pane_ParamLimits

0x830b,	// (0x00063972) call5_swipe_1_pane

0x831e,	// (0x00063985) call5_swipe_2_pane_ParamLimits

0x831e,	// (0x00063985) call5_swipe_2_pane

0x8349,	// (0x000639b0) popup_call5_audio_first_window_ParamLimits

0x8349,	// (0x000639b0) popup_call5_audio_first_window

0xc7e9,	// (0x00067e50) call5_swipe_1_pane_g1_ParamLimits

0xc7e9,	// (0x00067e50) call5_swipe_1_pane_g1

0xef34,	// (0x0006a59b) call5_swipe_1_pane_g2_ParamLimits

0xef34,	// (0x0006a59b) call5_swipe_1_pane_g2

0x0001,

0xfc11,	// (0x0006b278) call5_swipe_1_pane_g_ParamLimits

0xfc11,	// (0x0006b278) call5_swipe_1_pane_g

0xef40,	// (0x0006a5a7) call5_swipe_1_pane_t1_ParamLimits

0xef40,	// (0x0006a5a7) call5_swipe_1_pane_t1

0xc7e9,	// (0x00067e50) call5_swipe_2_pane_g1_ParamLimits

0xc7e9,	// (0x00067e50) call5_swipe_2_pane_g1

0xef55,	// (0x0006a5bc) call5_swipe_2_pane_g2_ParamLimits

0xef55,	// (0x0006a5bc) call5_swipe_2_pane_g2

0x0001,

0xfc16,	// (0x0006b27d) call5_swipe_2_pane_g_ParamLimits

0xfc16,	// (0x0006b27d) call5_swipe_2_pane_g

0xef61,	// (0x0006a5c8) call5_swipe_2_pane_t1_ParamLimits

0xef61,	// (0x0006a5c8) call5_swipe_2_pane_t1

0xef76,	// (0x0006a5dd) sc_swipe_pane_g1_ParamLimits

0xef76,	// (0x0006a5dd) sc_swipe_pane_g1

0xef83,	// (0x0006a5ea) sc_swipe_pane_g2_ParamLimits

0xef83,	// (0x0006a5ea) sc_swipe_pane_g2

0x0001,

0x08b5,	// (0x0005bf1c) sc_swipe_pane_g_ParamLimits

0x08b5,	// (0x0005bf1c) sc_swipe_pane_g

0xef8f,	// (0x0006a5f6) sc_swipe_pane_t1_ParamLimits

0xef8f,	// (0x0006a5f6) sc_swipe_pane_t1

0x0c38,	// (0x0005c29f) main_cmail_launcher_pane

0x835a,	// (0x000639c1) aid_size_cell_cmail_l_ParamLimits

0x835a,	// (0x000639c1) aid_size_cell_cmail_l

0x8374,	// (0x000639db) grid_cmail_l_pane_ParamLimits

0x8374,	// (0x000639db) grid_cmail_l_pane

0x838f,	// (0x000639f6) cell_cmail_l_pane_ParamLimits

0x838f,	// (0x000639f6) cell_cmail_l_pane

0x83b5,	// (0x00063a1c) cell_cmail_l_pane_g1_ParamLimits

0x83b5,	// (0x00063a1c) cell_cmail_l_pane_g1

0x83c1,	// (0x00063a28) cell_cmail_l_pane_t1_ParamLimits

0x83c1,	// (0x00063a28) cell_cmail_l_pane_t1

0xefa4,	// (0x0006a60b) cell_cmail_l_pane_t2_ParamLimits

0xefa4,	// (0x0006a60b) cell_cmail_l_pane_t2

0x0001,

0xfc1b,	// (0x0006b282) cell_cmail_l_pane_t_ParamLimits

0xfc1b,	// (0x0006b282) cell_cmail_l_pane_t

0x9864,	// (0x00064ecb) grid_highlight_pane_cp018_ParamLimits

0x9864,	// (0x00064ecb) grid_highlight_pane_cp018

0x0d6c,	// (0x0005c3d3) main2_pane_ParamLimits

0x0d6c,	// (0x0005c3d3) main2_pane

0xa09c,	// (0x00065703) popup_sp_fs_action_menu_bg_pane_g1

0xa0a4,	// (0x0006570b) popup_sp_fs_action_menu_bg_pane_g2

0xa0ac,	// (0x00065713) popup_sp_fs_action_menu_bg_pane_g3

0xa0b4,	// (0x0006571b) popup_sp_fs_action_menu_bg_pane_g4

0xa0bc,	// (0x00065723) popup_sp_fs_action_menu_bg_pane_g5

0xa0c4,	// (0x0006572b) popup_sp_fs_action_menu_bg_pane_g6

0xa0cc,	// (0x00065733) popup_sp_fs_action_menu_bg_pane_g7

0xa0d4,	// (0x0006573b) popup_sp_fs_action_menu_bg_pane_g8

0xa0dc,	// (0x00065743) popup_sp_fs_action_menu_bg_pane_g9

0xa0e4,	// (0x0006574b) popup_sp_fs_action_menu_bg_pane_g10

0xa0e4,	// (0x0006574b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0006a80e) popup_sp_fs_action_menu_bg_pane_g

0x1b1e,	// (0x0005d185) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x2_t3_g3_g1

0x1b2a,	// (0x0005d191) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1b2a,	// (0x0005d191) list_medium_line_x2_t3_g3_g2

0x1b36,	// (0x0005d19d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1b36,	// (0x0005d19d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0006a8be) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0006a8be) list_medium_line_x2_t3_g3_g

0x1b42,	// (0x0005d1a9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1b42,	// (0x0005d1a9) list_medium_line_x2_t3_g3_t1

0x1b57,	// (0x0005d1be) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b57,	// (0x0005d1be) list_medium_line_x2_t3_g3_t2

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0006a8c5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0006a8c5) list_medium_line_x2_t3_g3_t

0x1b1e,	// (0x0005d185) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x2_t3_g2_g1

0x1b36,	// (0x0005d19d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1b36,	// (0x0005d19d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0006a8cc) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0006a8cc) list_medium_line_x2_t3_g2_g

0x1b80,	// (0x0005d1e7) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1b80,	// (0x0005d1e7) list_medium_line_x2_t3_g2_t1

0x1b96,	// (0x0005d1fd) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1b96,	// (0x0005d1fd) list_medium_line_x2_t3_g2_t2

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0006a8d1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0006a8d1) list_medium_line_x2_t3_g2_t

0x1b1e,	// (0x0005d185) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x2_t4_g4_g1

0x1ba8,	// (0x0005d20f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1ba8,	// (0x0005d20f) list_medium_line_x2_t4_g4_g2

0x1b2a,	// (0x0005d191) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1b2a,	// (0x0005d191) list_medium_line_x2_t4_g4_g3

0x1bb4,	// (0x0005d21b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1bb4,	// (0x0005d21b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0006a8d8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0006a8d8) list_medium_line_x2_t4_g4_g

0x1bc0,	// (0x0005d227) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1bc0,	// (0x0005d227) list_medium_line_x2_t4_g4_t1

0x1bda,	// (0x0005d241) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1bda,	// (0x0005d241) list_medium_line_x2_t4_g4_t2

0x1bf0,	// (0x0005d257) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1bf0,	// (0x0005d257) list_medium_line_x2_t4_g4_t3

0x1c05,	// (0x0005d26c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1c05,	// (0x0005d26c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0006a8e1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0006a8e1) list_medium_line_x2_t4_g4_t

0x1b1e,	// (0x0005d185) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x2_t2_g4_g1

0x1ba8,	// (0x0005d20f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1ba8,	// (0x0005d20f) list_medium_line_x2_t2_g4_g2

0x1b2a,	// (0x0005d191) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1b2a,	// (0x0005d191) list_medium_line_x2_t2_g4_g3

0x1b36,	// (0x0005d19d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1b36,	// (0x0005d19d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0006a948) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0006a948) list_medium_line_x2_t2_g4_g

0x28c4,	// (0x0005df2b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x28c4,	// (0x0005df2b) list_medium_line_x2_t2_g4_t1

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0006a951) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0006a951) list_medium_line_x2_t2_g4_t

0x1b1e,	// (0x0005d185) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x2_t2_g3_g1

0x1b2a,	// (0x0005d191) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1b2a,	// (0x0005d191) list_medium_line_x2_t2_g3_g2

0x1b36,	// (0x0005d19d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1b36,	// (0x0005d19d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0006a8be) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0006a8be) list_medium_line_x2_t2_g3_g

0x28d9,	// (0x0005df40) list_medium_line_x2_t2_g3_t1_ParamLimits

0x28d9,	// (0x0005df40) list_medium_line_x2_t2_g3_t1

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0006a956) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0006a956) list_medium_line_x2_t2_g3_t

0x2a12,	// (0x0005e079) main_sp_fs_list_pane_ParamLimits

0x2a12,	// (0x0005e079) main_sp_fs_list_pane

0x2a1e,	// (0x0005e085) sp_fs_scroll_pane_ParamLimits

0x2a1e,	// (0x0005e085) sp_fs_scroll_pane

0x2a2a,	// (0x0005e091) list_medium_line_x2_t3_t1

0x2a3a,	// (0x0005e0a1) list_medium_line_x2_t3_t2

0x2a48,	// (0x0005e0af) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0006a9a1) list_medium_line_x2_t3_t

0x2a56,	// (0x0005e0bd) list_medium_line_x3_t4_t1

0x2a66,	// (0x0005e0cd) list_medium_line_x3_t4_t2

0x2a74,	// (0x0005e0db) list_medium_line_x3_t4_t3

0x2a48,	// (0x0005e0af) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0006a9a8) list_medium_line_x3_t4_t

0x2a82,	// (0x0005e0e9) list_medium_line_x4_t5_t1

0x2a92,	// (0x0005e0f9) list_medium_line_x4_t5_t2

0x2a74,	// (0x0005e0db) list_medium_line_x4_t5_t3

0x2aa0,	// (0x0005e107) list_medium_line_x4_t5_t4

0x2a48,	// (0x0005e0af) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0006a9b1) list_medium_line_x4_t5_t

0x1b1e,	// (0x0005d185) list_medium_line_t4_g4_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_t4_g4_g1

0x1bb4,	// (0x0005d21b) list_medium_line_t4_g4_g2_ParamLimits

0x1bb4,	// (0x0005d21b) list_medium_line_t4_g4_g2

0x2aae,	// (0x0005e115) list_medium_line_t4_g4_g3_ParamLimits

0x2aae,	// (0x0005e115) list_medium_line_t4_g4_g3

0x1b36,	// (0x0005d19d) list_medium_line_t4_g4_g4_ParamLimits

0x1b36,	// (0x0005d19d) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0006a9bc) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0006a9bc) list_medium_line_t4_g4_g

0x2aba,	// (0x0005e121) list_medium_line_t4_g4_t1_ParamLimits

0x2aba,	// (0x0005e121) list_medium_line_t4_g4_t1

0x2acf,	// (0x0005e136) list_medium_line_t4_g4_t2_ParamLimits

0x2acf,	// (0x0005e136) list_medium_line_t4_g4_t2

0x2ae4,	// (0x0005e14b) list_medium_line_t4_g4_t3_ParamLimits

0x2ae4,	// (0x0005e14b) list_medium_line_t4_g4_t3

0x1b6b,	// (0x0005d1d2) list_medium_line_t4_g4_t4_ParamLimits

0x1b6b,	// (0x0005d1d2) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0006a9c5) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0006a9c5) list_medium_line_t4_g4_t

0x2bbc,	// (0x0005e223) chi_dic_find_pane_g1

0x3d38,	// (0x0005f39f) main_tport_pane

0x6c71,	// (0x000622d8) list_medium_line_plain_t1

0x6d23,	// (0x0006238a) list_medium_line_t2_g2_g1_ParamLimits

0x6d23,	// (0x0006238a) list_medium_line_t2_g2_g1

0x6d2f,	// (0x00062396) list_medium_line_t2_g2_g2_ParamLimits

0x6d2f,	// (0x00062396) list_medium_line_t2_g2_g2

0x0001,

0xfa15,	// (0x0006b07c) list_medium_line_t2_g2_g_ParamLimits

0xfa15,	// (0x0006b07c) list_medium_line_t2_g2_g

0x6d3b,	// (0x000623a2) list_medium_line_t2_g2_t1_ParamLimits

0x6d3b,	// (0x000623a2) list_medium_line_t2_g2_t1

0x6d55,	// (0x000623bc) list_medium_line_t2_g2_t2_ParamLimits

0x6d55,	// (0x000623bc) list_medium_line_t2_g2_t2

0x0001,

0xfa1a,	// (0x0006b081) list_medium_line_t2_g2_t_ParamLimits

0xfa1a,	// (0x0006b081) list_medium_line_t2_g2_t

0x73e8,	// (0x00062a4f) aid_sp_fs_list_icon_a_sm

0x73f0,	// (0x00062a57) aid_sp_fs_list_icon_d

0x73f8,	// (0x00062a5f) aid_sp_fs_text_primary

0x7401,	// (0x00062a68) aid_sp_fs_text_secondary

0x740a,	// (0x00062a71) list_medium_line

0x740a,	// (0x00062a71) list_medium_line_g2

0x740a,	// (0x00062a71) list_medium_line_g3

0x740a,	// (0x00062a71) list_medium_line_plain

0x740a,	// (0x00062a71) list_medium_line_plain_t2

0x740a,	// (0x00062a71) list_medium_line_plain_t3

0x740a,	// (0x00062a71) list_medium_line_right_icon

0x740a,	// (0x00062a71) list_medium_line_right_iconx2

0x740a,	// (0x00062a71) list_medium_line_t2

0x740a,	// (0x00062a71) list_medium_line_t2_g2

0x740a,	// (0x00062a71) list_medium_line_t2_g3

0x740a,	// (0x00062a71) list_medium_line_t2_right_icon

0x740a,	// (0x00062a71) list_medium_line_t2_right_iconx2

0x740a,	// (0x00062a71) list_medium_line_t3

0x740a,	// (0x00062a71) list_medium_line_t3_g2

0x740a,	// (0x00062a71) list_medium_line_t3_g3

0x740a,	// (0x00062a71) list_medium_line_t3_right_iconx2

0x7413,	// (0x00062a7a) list_medium_line_t4_g4

0x741c,	// (0x00062a83) list_medium_line_x2

0x741c,	// (0x00062a83) list_medium_line_x2_t2_g2

0x741c,	// (0x00062a83) list_medium_line_x2_t2_g3

0x741c,	// (0x00062a83) list_medium_line_x2_t2_g4

0x741c,	// (0x00062a83) list_medium_line_x2_t3

0x741c,	// (0x00062a83) list_medium_line_x2_t3_g2

0x741c,	// (0x00062a83) list_medium_line_x2_t3_g3

0x741c,	// (0x00062a83) list_medium_line_x2_t3_g4

0x741c,	// (0x00062a83) list_medium_line_x2_t4_g2

0x741c,	// (0x00062a83) list_medium_line_x2_t4_g4

0x7425,	// (0x00062a8c) list_medium_line_x3

0x7425,	// (0x00062a8c) list_medium_line_x3_t4

0x7425,	// (0x00062a8c) list_medium_line_x3_t4_g4

0x7413,	// (0x00062a7a) list_medium_line_x4_t4

0x7413,	// (0x00062a7a) list_medium_line_x4_t4_g7

0x7413,	// (0x00062a7a) list_medium_line_x4_t5

0x742e,	// (0x00062a95) list_single_fs_dyc_pane_ParamLimits

0x742e,	// (0x00062a95) list_single_fs_dyc_pane

0x1b1e,	// (0x0005d185) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x4_t4_g7_g1

0x7ba5,	// (0x0006320c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ba5,	// (0x0006320c) list_medium_line_x4_t4_g7_g2

0x7bb1,	// (0x00063218) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7bb1,	// (0x00063218) list_medium_line_x4_t4_g7_g3

0x7bc0,	// (0x00063227) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7bc0,	// (0x00063227) list_medium_line_x4_t4_g7_g4

0x7bcc,	// (0x00063233) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7bcc,	// (0x00063233) list_medium_line_x4_t4_g7_g5

0x7bdb,	// (0x00063242) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7bdb,	// (0x00063242) list_medium_line_x4_t4_g7_g6

0x7bea,	// (0x00063251) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7bea,	// (0x00063251) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb62,	// (0x0006b1c9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb62,	// (0x0006b1c9) list_medium_line_x4_t4_g7_g

0x7bf6,	// (0x0006325d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7bf6,	// (0x0006325d) list_medium_line_x4_t4_g7_t1

0x7c0b,	// (0x00063272) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c0b,	// (0x00063272) list_medium_line_x4_t4_g7_t2

0x7c20,	// (0x00063287) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c20,	// (0x00063287) list_medium_line_x4_t4_g7_t3

0x7c35,	// (0x0006329c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c35,	// (0x0006329c) list_medium_line_x4_t4_g7_t4

0x7c47,	// (0x000632ae) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c47,	// (0x000632ae) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb71,	// (0x0006b1d8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb71,	// (0x0006b1d8) list_medium_line_x4_t4_g7_t

0x7c59,	// (0x000632c0) list_single_dyc_row_pane_ParamLimits

0x7c59,	// (0x000632c0) list_single_dyc_row_pane

0x82db,	// (0x00063942) call5_gesture_pane_ParamLimits

0x82db,	// (0x00063942) call5_gesture_pane

0x8331,	// (0x00063998) call5_windows_pane_ParamLimits

0x8331,	// (0x00063998) call5_windows_pane

0x83d7,	// (0x00063a3e) call5_swipe_1_pane_cp_ParamLimits

0x83d7,	// (0x00063a3e) call5_swipe_1_pane_cp

0x83e3,	// (0x00063a4a) call5_swipe_2_pane_cp_ParamLimits

0x83e3,	// (0x00063a4a) call5_swipe_2_pane_cp

0xac35,	// (0x0006629c) call5_image_pane_cp

0x83ef,	// (0x00063a56) popup_call5_audio_first_window_cp_ParamLimits

0x83ef,	// (0x00063a56) popup_call5_audio_first_window_cp

0xef76,	// (0x0006a5dd) call5_swipe_1_pane_g1_cp_ParamLimits

0xef76,	// (0x0006a5dd) call5_swipe_1_pane_g1_cp

0xefb6,	// (0x0006a61d) call5_swipe_1_pane_g2_cp

0xef8f,	// (0x0006a5f6) call5_swipe_1_pane_t1_cp_ParamLimits

0xef8f,	// (0x0006a5f6) call5_swipe_1_pane_t1_cp

0xef76,	// (0x0006a5dd) call5_swipe_2_pane_g1_cp_ParamLimits

0xef76,	// (0x0006a5dd) call5_swipe_2_pane_g1_cp

0xefbe,	// (0x0006a625) call5_swipe_2_pane_g2_cp

0xefc6,	// (0x0006a62d) call5_swipe_2_pane_t1_cp_ParamLimits

0xefc6,	// (0x0006a62d) call5_swipe_2_pane_t1_cp

0x9864,	// (0x00064ecb) main_sp_fs_email_pane

0xefdb,	// (0x0006a642) main_sp_fs_listscroll_pane_te

0x83fd,	// (0x00063a64) popup_sp_fs_action_menu_pane_ParamLimits

0x83fd,	// (0x00063a64) popup_sp_fs_action_menu_pane

0xc57d,	// (0x00067be4) bg_sp_fs_ctrlbar_pane_g1

0xefe4,	// (0x0006a64b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xefed,	// (0x0006a654) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xeff6,	// (0x0006a65d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc57d,	// (0x00067be4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc20,	// (0x0006b287) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc362,	// (0x000679c9) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc362,	// (0x000679c9) bg_sp_fs_ctrlbar_ddmenu_pane

0xefff,	// (0x0006a666) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xefff,	// (0x0006a666) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf00b,	// (0x0006a672) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf00b,	// (0x0006a672) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x08c8,	// (0x0005bf2f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x08c8,	// (0x0005bf2f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xf017,	// (0x0006a67e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xf017,	// (0x0006a67e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8441,	// (0x00063aa8) list_medium_line_t2_right_icon_g1

0x8449,	// (0x00063ab0) list_medium_line_t2_right_icon_t1

0x8459,	// (0x00063ac0) list_medium_line_t2_right_icon_t2

0x0001,

0xfc29,	// (0x0006b290) list_medium_line_t2_right_icon_t

0xc077,	// (0x000676de) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc077,	// (0x000676de) bg_sp_fs_ctrlbar_pane

0x84b6,	// (0x00063b1d) main_sp_fs_ctrlbar_button_pane_cp01

0x84c0,	// (0x00063b27) main_sp_fs_ctrlbar_ddmenu_pane

0xf069,	// (0x0006a6d0) main_sp_fs_ctrlbar_pane_g1

0xf075,	// (0x0006a6dc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x08d2,	// (0x0005bf39) main_sp_fs_ctrlbar_pane_g

0xf081,	// (0x0006a6e8) main_sp_fs_ctrlbar_pane_t1

0x84ca,	// (0x00063b31) main_sp_fs_ctrlbar_pane

0x84ee,	// (0x00063b55) main_sp_fs_listscroll_pane_te_cp01

0x850e,	// (0x00063b75) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x850e,	// (0x00063b75) popup_sp_fs_action_menu_pane_cp01

0x9864,	// (0x00064ecb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9864,	// (0x00064ecb) bg_sp_fs_highlight_list_pane_cp01

0x8528,	// (0x00063b8f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8528,	// (0x00063b8f) sp_fs_action_menu_list_gene_pane_g1

0xf0a6,	// (0x0006a70d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf0a6,	// (0x0006a70d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2e,	// (0x0006b295) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2e,	// (0x0006b295) sp_fs_action_menu_list_gene_pane_g

0x8537,	// (0x00063b9e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8537,	// (0x00063b9e) sp_fs_action_menu_list_gene_pane_t1

0x854f,	// (0x00063bb6) sp_fs_action_menu_list_gene_pane_ParamLimits

0x854f,	// (0x00063bb6) sp_fs_action_menu_list_gene_pane

0xf0b3,	// (0x0006a71a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xf0b3,	// (0x0006a71a) popup_sp_fs_action_menu_bg_pane

0x856e,	// (0x00063bd5) sp_fs_action_menu_list_pane_ParamLimits

0x856e,	// (0x00063bd5) sp_fs_action_menu_list_pane

0xf0c1,	// (0x0006a728) sp_fs_scroll_pane_cp01_ParamLimits

0xf0c1,	// (0x0006a728) sp_fs_scroll_pane_cp01

0x858e,	// (0x00063bf5) list_medium_line_plain_t2_t1

0x859e,	// (0x00063c05) list_medium_line_plain_t2_t2

0x0001,

0xfc33,	// (0x0006b29a) list_medium_line_plain_t2_t

0x85ae,	// (0x00063c15) list_medium_line_plain_t3_t1

0x85be,	// (0x00063c25) list_medium_line_plain_t3_t2

0x85cc,	// (0x00063c33) list_medium_line_plain_t3_t3

0x0002,

0xfc38,	// (0x0006b29f) list_medium_line_plain_t3_t

0x1b1e,	// (0x0005d185) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x2_t2_g2_g1

0x1b36,	// (0x0005d19d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1b36,	// (0x0005d19d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0006a8cc) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0006a8cc) list_medium_line_x2_t2_g2_g

0x2aba,	// (0x0005e121) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2aba,	// (0x0005e121) list_medium_line_x2_t2_g2_t1

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc3f,	// (0x0006b2a6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc3f,	// (0x0006b2a6) list_medium_line_x2_t2_g2_t

0x1b1e,	// (0x0005d185) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x2_t4_g2_g1

0x85da,	// (0x00063c41) list_medium_line_x2_t4_g2_g2_ParamLimits

0x85da,	// (0x00063c41) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc44,	// (0x0006b2ab) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc44,	// (0x0006b2ab) list_medium_line_x2_t4_g2_g

0x85ec,	// (0x00063c53) list_medium_line_x2_t4_g2_t1_ParamLimits

0x85ec,	// (0x00063c53) list_medium_line_x2_t4_g2_t1

0x8603,	// (0x00063c6a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8603,	// (0x00063c6a) list_medium_line_x2_t4_g2_t2

0x8618,	// (0x00063c7f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8618,	// (0x00063c7f) list_medium_line_x2_t4_g2_t3

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc49,	// (0x0006b2b0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc49,	// (0x0006b2b0) list_medium_line_x2_t4_g2_t

0x862a,	// (0x00063c91) list_medium_line_t3_right_iconx2_g1

0x8441,	// (0x00063aa8) list_medium_line_t3_right_iconx2_g2

0x8632,	// (0x00063c99) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc52,	// (0x0006b2b9) list_medium_line_t3_right_iconx2_g

0x863c,	// (0x00063ca3) list_medium_line_t3_right_iconx2_t1

0x864c,	// (0x00063cb3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc59,	// (0x0006b2c0) list_medium_line_t3_right_iconx2_t

0x1b1e,	// (0x0005d185) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x3_t4_g4_g1

0x1b2a,	// (0x0005d191) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1b2a,	// (0x0005d191) list_medium_line_x3_t4_g4_g2

0x1bb4,	// (0x0005d21b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1bb4,	// (0x0005d21b) list_medium_line_x3_t4_g4_g3

0x865a,	// (0x00063cc1) list_medium_line_x3_t4_g4_g4_ParamLimits

0x865a,	// (0x00063cc1) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc5e,	// (0x0006b2c5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc5e,	// (0x0006b2c5) list_medium_line_x3_t4_g4_g

0x8666,	// (0x00063ccd) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8666,	// (0x00063ccd) list_medium_line_x3_t4_g4_t1

0x867d,	// (0x00063ce4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x867d,	// (0x00063ce4) list_medium_line_x3_t4_g4_t2

0x2acf,	// (0x0005e136) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2acf,	// (0x0005e136) list_medium_line_x3_t4_g4_t3

0x8698,	// (0x00063cff) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8698,	// (0x00063cff) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc67,	// (0x0006b2ce) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc67,	// (0x0006b2ce) list_medium_line_x3_t4_g4_t

0x86b5,	// (0x00063d1c) list_single_dyc_row_text_pane_t1_ParamLimits

0x86b5,	// (0x00063d1c) list_single_dyc_row_text_pane_t1

0x86fe,	// (0x00063d65) list_single_dyc_row_text_pane_t2_ParamLimits

0x86fe,	// (0x00063d65) list_single_dyc_row_text_pane_t2

0xce23,	// (0x0006848a) list_single_dyc_row_text_pane_t3_ParamLimits

0xce23,	// (0x0006848a) list_single_dyc_row_text_pane_t3

0x0002,

0xfc70,	// (0x0006b2d7) list_single_dyc_row_text_pane_t_ParamLimits

0xfc70,	// (0x0006b2d7) list_single_dyc_row_text_pane_t

0xce35,	// (0x0006849c) list_single_dyc_row_pane_g1_ParamLimits

0xce35,	// (0x0006849c) list_single_dyc_row_pane_g1

0xce41,	// (0x000684a8) list_single_dyc_row_pane_g2_ParamLimits

0xce41,	// (0x000684a8) list_single_dyc_row_pane_g2

0xce4d,	// (0x000684b4) list_single_dyc_row_pane_g3_ParamLimits

0xce4d,	// (0x000684b4) list_single_dyc_row_pane_g3

0xce59,	// (0x000684c0) list_single_dyc_row_pane_g4_ParamLimits

0xce59,	// (0x000684c0) list_single_dyc_row_pane_g4

0x0003,

0xfc77,	// (0x0006b2de) list_single_dyc_row_pane_g_ParamLimits

0xfc77,	// (0x0006b2de) list_single_dyc_row_pane_g

0xce65,	// (0x000684cc) list_single_dyc_row_text_pane_ParamLimits

0xce65,	// (0x000684cc) list_single_dyc_row_text_pane

0x0c38,	// (0x0005c29f) bg_sp_fs_scroll_pane

0xce84,	// (0x000684eb) thumb_sp_fs_scroll_pane

0x6d23,	// (0x0006238a) list_medium_line_g1_ParamLimits

0x6d23,	// (0x0006238a) list_medium_line_g1

0xce8d,	// (0x000684f4) list_medium_line_t1_ParamLimits

0xce8d,	// (0x000684f4) list_medium_line_t1

0x1b1e,	// (0x0005d185) list_medium_line_x2_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x2_g1

0x1b2a,	// (0x0005d191) list_medium_line_x2_g2_ParamLimits

0x1b2a,	// (0x0005d191) list_medium_line_x2_g2

0x0001,

0xfc80,	// (0x0006b2e7) list_medium_line_x2_g_ParamLimits

0xfc80,	// (0x0006b2e7) list_medium_line_x2_g

0xcea2,	// (0x00068509) list_medium_line_x2_t1_ParamLimits

0xcea2,	// (0x00068509) list_medium_line_x2_t1

0x1b1e,	// (0x0005d185) list_medium_line_x3_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x3_g1

0x1b2a,	// (0x0005d191) list_medium_line_x3_g2_ParamLimits

0x1b2a,	// (0x0005d191) list_medium_line_x3_g2

0x0001,

0xfc80,	// (0x0006b2e7) list_medium_line_x3_g_ParamLimits

0xfc80,	// (0x0006b2e7) list_medium_line_x3_g

0xcea2,	// (0x00068509) list_medium_line_x3_t1_ParamLimits

0xcea2,	// (0x00068509) list_medium_line_x3_t1

0xceb8,	// (0x0006851f) thumb_sp_fs_scroll_pane_g1

0xcec1,	// (0x00068528) thumb_sp_fs_scroll_pane_g2

0xceca,	// (0x00068531) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc85,	// (0x0006b2ec) thumb_sp_fs_scroll_pane_g

0xceb8,	// (0x0006851f) bg_sp_fs_scroll_pane_g1

0xcec1,	// (0x00068528) bg_sp_fs_scroll_pane_g2

0xceca,	// (0x00068531) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc85,	// (0x0006b2ec) bg_sp_fs_scroll_pane_g

0x1b1e,	// (0x0005d185) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1b1e,	// (0x0005d185) list_medium_line_x2_t3_g4_g1

0x1ba8,	// (0x0005d20f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1ba8,	// (0x0005d20f) list_medium_line_x2_t3_g4_g2

0x1b2a,	// (0x0005d191) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1b2a,	// (0x0005d191) list_medium_line_x2_t3_g4_g3

0x1b36,	// (0x0005d19d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1b36,	// (0x0005d19d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0006a948) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0006a948) list_medium_line_x2_t3_g4_g

0x8758,	// (0x00063dbf) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8758,	// (0x00063dbf) list_medium_line_x2_t3_g4_t1

0x8772,	// (0x00063dd9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8772,	// (0x00063dd9) list_medium_line_x2_t3_g4_t2

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1b6b,	// (0x0005d1d2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc8c,	// (0x0006b2f3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc8c,	// (0x0006b2f3) list_medium_line_x2_t3_g4_t

0x6d23,	// (0x0006238a) list_medium_line_g2_g1_ParamLimits

0x6d23,	// (0x0006238a) list_medium_line_g2_g1

0x6d2f,	// (0x00062396) list_medium_line_g2_g2_ParamLimits

0x6d2f,	// (0x00062396) list_medium_line_g2_g2

0x0001,

0xfa15,	// (0x0006b07c) list_medium_line_g2_g_ParamLimits

0xfa15,	// (0x0006b07c) list_medium_line_g2_g

0xced3,	// (0x0006853a) list_medium_line_g2_t1_ParamLimits

0xced3,	// (0x0006853a) list_medium_line_g2_t1

0x6d23,	// (0x0006238a) list_medium_line_t3_g2_g1_ParamLimits

0x6d23,	// (0x0006238a) list_medium_line_t3_g2_g1

0x6d2f,	// (0x00062396) list_medium_line_t3_g2_g2_ParamLimits

0x6d2f,	// (0x00062396) list_medium_line_t3_g2_g2

0x0001,

0xfa15,	// (0x0006b07c) list_medium_line_t3_g2_g_ParamLimits

0xfa15,	// (0x0006b07c) list_medium_line_t3_g2_g

0x878c,	// (0x00063df3) list_medium_line_t3_g2_t1_ParamLimits

0x878c,	// (0x00063df3) list_medium_line_t3_g2_t1

0x87a6,	// (0x00063e0d) list_medium_line_t3_g2_t2_ParamLimits

0x87a6,	// (0x00063e0d) list_medium_line_t3_g2_t2

0x87bb,	// (0x00063e22) list_medium_line_t3_g2_t3_ParamLimits

0x87bb,	// (0x00063e22) list_medium_line_t3_g2_t3

0x0002,

0xfc93,	// (0x0006b2fa) list_medium_line_t3_g2_t_ParamLimits

0xfc93,	// (0x0006b2fa) list_medium_line_t3_g2_t

0x8441,	// (0x00063aa8) list_medium_line_right_icon_g1

0xcee8,	// (0x0006854f) list_medium_line_right_icon_t1

0x6d23,	// (0x0006238a) list_medium_line_t2_g1_ParamLimits

0x6d23,	// (0x0006238a) list_medium_line_t2_g1

0x87d5,	// (0x00063e3c) list_medium_line_t2_t1_ParamLimits

0x87d5,	// (0x00063e3c) list_medium_line_t2_t1

0x87ef,	// (0x00063e56) list_medium_line_t2_t2_ParamLimits

0x87ef,	// (0x00063e56) list_medium_line_t2_t2

0x0001,

0xfc9a,	// (0x0006b301) list_medium_line_t2_t_ParamLimits

0xfc9a,	// (0x0006b301) list_medium_line_t2_t

0x6d23,	// (0x0006238a) list_medium_line_t3_g1_ParamLimits

0x6d23,	// (0x0006238a) list_medium_line_t3_g1

0x8808,	// (0x00063e6f) list_medium_line_t3_t1_ParamLimits

0x8808,	// (0x00063e6f) list_medium_line_t3_t1

0x881f,	// (0x00063e86) list_medium_line_t3_t2_ParamLimits

0x881f,	// (0x00063e86) list_medium_line_t3_t2

0x8834,	// (0x00063e9b) list_medium_line_t3_t3_ParamLimits

0x8834,	// (0x00063e9b) list_medium_line_t3_t3

0x0002,

0xfc9f,	// (0x0006b306) list_medium_line_t3_t_ParamLimits

0xfc9f,	// (0x0006b306) list_medium_line_t3_t

0x6d23,	// (0x0006238a) list_medium_line_g3_g1_ParamLimits

0x6d23,	// (0x0006238a) list_medium_line_g3_g1

0xcef6,	// (0x0006855d) list_medium_line_g3_g2_ParamLimits

0xcef6,	// (0x0006855d) list_medium_line_g3_g2

0x6d2f,	// (0x00062396) list_medium_line_g3_g3_ParamLimits

0x6d2f,	// (0x00062396) list_medium_line_g3_g3

0x0002,

0xfca6,	// (0x0006b30d) list_medium_line_g3_g_ParamLimits

0xfca6,	// (0x0006b30d) list_medium_line_g3_g

0xcf02,	// (0x00068569) list_medium_line_g3_t1_ParamLimits

0xcf02,	// (0x00068569) list_medium_line_g3_t1

0x6d23,	// (0x0006238a) list_medium_line_t2_g3_g1_ParamLimits

0x6d23,	// (0x0006238a) list_medium_line_t2_g3_g1

0xcef6,	// (0x0006855d) list_medium_line_t2_g3_g2_ParamLimits

0xcef6,	// (0x0006855d) list_medium_line_t2_g3_g2

0x6d2f,	// (0x00062396) list_medium_line_t2_g3_g3_ParamLimits

0x6d2f,	// (0x00062396) list_medium_line_t2_g3_g3

0x0002,

0xfca6,	// (0x0006b30d) list_medium_line_t2_g3_g_ParamLimits

0xfca6,	// (0x0006b30d) list_medium_line_t2_g3_g

0x8846,	// (0x00063ead) list_medium_line_t2_g3_t1_ParamLimits

0x8846,	// (0x00063ead) list_medium_line_t2_g3_t1

0x8860,	// (0x00063ec7) list_medium_line_t2_g3_t2_ParamLimits

0x8860,	// (0x00063ec7) list_medium_line_t2_g3_t2

0x0001,

0xfcad,	// (0x0006b314) list_medium_line_t2_g3_t_ParamLimits

0xfcad,	// (0x0006b314) list_medium_line_t2_g3_t

0x6d23,	// (0x0006238a) list_medium_line_t3_g3_g1_ParamLimits

0x6d23,	// (0x0006238a) list_medium_line_t3_g3_g1

0xcef6,	// (0x0006855d) list_medium_line_t3_g3_g2_ParamLimits

0xcef6,	// (0x0006855d) list_medium_line_t3_g3_g2

0x6d2f,	// (0x00062396) list_medium_line_t3_g3_g3_ParamLimits

0x6d2f,	// (0x00062396) list_medium_line_t3_g3_g3

0x0002,

0xfca6,	// (0x0006b30d) list_medium_line_t3_g3_g_ParamLimits

0xfca6,	// (0x0006b30d) list_medium_line_t3_g3_g

0x887b,	// (0x00063ee2) list_medium_line_t3_g3_t1_ParamLimits

0x887b,	// (0x00063ee2) list_medium_line_t3_g3_t1

0x888f,	// (0x00063ef6) list_medium_line_t3_g3_t2_ParamLimits

0x888f,	// (0x00063ef6) list_medium_line_t3_g3_t2

0x88a1,	// (0x00063f08) list_medium_line_t3_g3_t3_ParamLimits

0x88a1,	// (0x00063f08) list_medium_line_t3_g3_t3

0x0002,

0xfcb2,	// (0x0006b319) list_medium_line_t3_g3_t_ParamLimits

0xfcb2,	// (0x0006b319) list_medium_line_t3_g3_t

0x862a,	// (0x00063c91) list_medium_line_right_iconx2_g1

0x8441,	// (0x00063aa8) list_medium_line_right_iconx2_g2

0x0001,

0xfcb9,	// (0x0006b320) list_medium_line_right_iconx2_g

0xcf17,	// (0x0006857e) list_medium_line_right_iconx2_t1

0x862a,	// (0x00063c91) list_medium_line_t2_right_iconx2_g1

0x8441,	// (0x00063aa8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcb9,	// (0x0006b320) list_medium_line_t2_right_iconx2_g

0x88b5,	// (0x00063f1c) list_medium_line_t2_right_iconx2_t1

0x88c5,	// (0x00063f2c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcbe,	// (0x0006b325) list_medium_line_t2_right_iconx2_t

0xcf25,	// (0x0006858c) list_medium_line_x4_t4_t1

0x88d7,	// (0x00063f3e) list_medium_line_x4_t4_t2

0x88e7,	// (0x00063f4e) list_medium_line_x4_t4_t3

0x88f7,	// (0x00063f5e) list_medium_line_x4_t4_t4

0x0003,

0xfcc3,	// (0x0006b32a) list_medium_line_x4_t4_t

0x894a,	// (0x00063fb1) tport_appsw_pane_ParamLimits

0x894a,	// (0x00063fb1) tport_appsw_pane

0x895b,	// (0x00063fc2) tport_contact_pane_ParamLimits

0x895b,	// (0x00063fc2) tport_contact_pane

0x8974,	// (0x00063fdb) tport_listscroll_pane_ParamLimits

0x8974,	// (0x00063fdb) tport_listscroll_pane

0x898f,	// (0x00063ff6) cell_tport_appsw_pane_ParamLimits

0x898f,	// (0x00063ff6) cell_tport_appsw_pane

0xdfd4,	// (0x0006963b) tport_appsw_pane_g1_ParamLimits

0xdfd4,	// (0x0006963b) tport_appsw_pane_g1

0xcf33,	// (0x0006859a) tport_contact_pane_g1

0xea71,	// (0x0006a0d8) tport_contact_pane_t1

0xcf3c,	// (0x000685a3) tport_contact_pane_t2

0x0001,

0xfccc,	// (0x0006b333) tport_contact_pane_t

0xcf4a,	// (0x000685b1) list_tport_pane

0xcf53,	// (0x000685ba) scroll_pane_cp_030

0xcf64,	// (0x000685cb) cell_tport_appsw_pane_g1

0xcf74,	// (0x000685db) cell_tport_appsw_pane_t1

0x0c38,	// (0x0005c29f) grid_highlight_pane_cp019

0x89cf,	// (0x00064036) list_tport_double_graphic_pane_ParamLimits

0x89cf,	// (0x00064036) list_tport_double_graphic_pane

0x9864,	// (0x00064ecb) list_highlight_pane_cp023_ParamLimits

0x9864,	// (0x00064ecb) list_highlight_pane_cp023

0x89dc,	// (0x00064043) list_tport_double_graphic_pane_g1_ParamLimits

0x89dc,	// (0x00064043) list_tport_double_graphic_pane_g1

0x89e9,	// (0x00064050) list_tport_double_graphic_pane_t1_ParamLimits

0x89e9,	// (0x00064050) list_tport_double_graphic_pane_t1

0x89fe,	// (0x00064065) list_tport_double_graphic_pane_t2_ParamLimits

0x89fe,	// (0x00064065) list_tport_double_graphic_pane_t2

0x0001,

0xfcd8,	// (0x0006b33f) list_tport_double_graphic_pane_t_ParamLimits

0xfcd8,	// (0x0006b33f) list_tport_double_graphic_pane_t

0x0c38,	// (0x0005c29f) main_cale_note_pane

0x647f,	// (0x00061ae6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x647f,	// (0x00061ae6) cell_vitu2_function_top_wide_pane_cp01

0x7f8f,	// (0x000635f6) wait_bar_pane_cp05_ParamLimits

0x0c38,	// (0x0005c29f) listscroll_cmail_pane

0xcf8a,	// (0x000685f1) list_cmail_pane

0xe1f5,	// (0x0006985c) list_cmail_body_pane

0x8a1a,	// (0x00064081) list_single_cmail_header_caption_pane

0x8a30,	// (0x00064097) list_single_cmail_header_detail_pane_ParamLimits

0x8a30,	// (0x00064097) list_single_cmail_header_detail_pane

0x8a59,	// (0x000640c0) list_single_cmail_header_caption_pane_t1

0x8a69,	// (0x000640d0) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8a69,	// (0x000640d0) list_single_cmail_header_detail_pane_g1

0xcfab,	// (0x00068612) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcfab,	// (0x00068612) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcdd,	// (0x0006b344) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcdd,	// (0x0006b344) list_single_cmail_header_detail_pane_g

0xcfc4,	// (0x0006862b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcfc4,	// (0x0006862b) list_single_cmail_header_detail_pane_t1

0xcffa,	// (0x00068661) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcffa,	// (0x00068661) list_single_cmail_header_editor_pane_bg

0xec24,	// (0x0006a28b) list_cmail_body_pane_g1

0xd00c,	// (0x00068673) list_cmail_body_pane_t1

0xdff4,	// (0x0006965b) list_single_cmail_header_editor_pane_bg_g1

0xa4ab,	// (0x00065b12) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe004,	// (0x0006966b) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdffc,	// (0x00069663) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe226,	// (0x0006988d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe024,	// (0x0006968b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe014,	// (0x0006967b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe01c,	// (0x00069683) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa48b,	// (0x00065af2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8aa7,	// (0x0006410e) calenote_gesture_pane_ParamLimits

0x8aa7,	// (0x0006410e) calenote_gesture_pane

0x8ac7,	// (0x0006412e) calenote_window_pane_ParamLimits

0x8ac7,	// (0x0006412e) calenote_window_pane

0xd01a,	// (0x00068681) popup_note_window_cp01

0x8ae3,	// (0x0006414a) calenote_swipe_1_pane_ParamLimits

0x8ae3,	// (0x0006414a) calenote_swipe_1_pane

0x83e3,	// (0x00063a4a) calenote_swipe_2_pane_ParamLimits

0x83e3,	// (0x00063a4a) calenote_swipe_2_pane

0xef76,	// (0x0006a5dd) calenote_swipe_1_pane_g1_ParamLimits

0xef76,	// (0x0006a5dd) calenote_swipe_1_pane_g1

0xef83,	// (0x0006a5ea) calenote_swipe_1_pane_g2_ParamLimits

0xef83,	// (0x0006a5ea) calenote_swipe_1_pane_g2

0x0001,

0x08b5,	// (0x0005bf1c) calenote_swipe_1_pane_g_ParamLimits

0x08b5,	// (0x0005bf1c) calenote_swipe_1_pane_g

0xd02c,	// (0x00068693) calenote_swipe_1_pane_t1_ParamLimits

0xd02c,	// (0x00068693) calenote_swipe_1_pane_t1

0xef76,	// (0x0006a5dd) calenote_swipe_2_pane_g1_ParamLimits

0xef76,	// (0x0006a5dd) calenote_swipe_2_pane_g1

0xd04b,	// (0x000686b2) calenote_swipe_2_pane_g2_ParamLimits

0xd04b,	// (0x000686b2) calenote_swipe_2_pane_g2

0x0001,

0xfce9,	// (0x0006b350) calenote_swipe_2_pane_g_ParamLimits

0xfce9,	// (0x0006b350) calenote_swipe_2_pane_g

0xd057,	// (0x000686be) calenote_swipe_2_pane_t1_ParamLimits

0xd057,	// (0x000686be) calenote_swipe_2_pane_t1

0x0c38,	// (0x0005c29f) main_mup_navstr_pane

0x5123,	// (0x0006078a) main_mup3_pane_t7_ParamLimits

0x5123,	// (0x0006078a) main_mup3_pane_t7

0xda96,	// (0x000690fd) main_mp4_pane_g6_ParamLimits

0xda96,	// (0x000690fd) main_mp4_pane_g6

0xdc3a,	// (0x000692a1) main_image3_pane_t4_ParamLimits

0xdc3a,	// (0x000692a1) main_image3_pane_t4

0x8af8,	// (0x0006415f) popup_navstr_preview_pane_ParamLimits

0x8af8,	// (0x0006415f) popup_navstr_preview_pane

0x8b0c,	// (0x00064173) scroll_navstr_pane_ParamLimits

0x8b0c,	// (0x00064173) scroll_navstr_pane

0x0c38,	// (0x0005c29f) bg_popup_preview_window_pane_cp04

0xd07e,	// (0x000686e5) popup_navstr_preview_pane_t1

0x8b20,	// (0x00064187) scroll_navstr_pane_g1_ParamLimits

0x8b20,	// (0x00064187) scroll_navstr_pane_g1

0x8b34,	// (0x0006419b) scroll_navstr_pane_t1_ParamLimits

0x8b34,	// (0x0006419b) scroll_navstr_pane_t1

0xd023,	// (0x0006868a) bg_button_pane_cp014

0xd023,	// (0x0006868a) bg_button_pane_cp030

0x8281,	// (0x000638e8) list_double_fisheye_pane_g4_ParamLimits

0x8281,	// (0x000638e8) list_double_fisheye_pane_g4

0x828d,	// (0x000638f4) list_double_fisheye_pane_g5_ParamLimits

0x828d,	// (0x000638f4) list_double_fisheye_pane_g5

0xcf92,	// (0x000685f9) sp_fs_scroll_pane_cp03

0xf069,	// (0x0006a6d0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf075,	// (0x0006a6dc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x08d2,	// (0x0005bf39) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf081,	// (0x0006a6e8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8a10,	// (0x00064077) sp_fs_scroll_pane_cp02

0xa14f,	// (0x000657b6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa14f,	// (0x000657b6) popup_sp_fs_calendar_preview_list_single_pane

0x0c38,	// (0x0005c29f) main_cam6_pano_pane

0x9864,	// (0x00064ecb) main_mup3_pane_ParamLimits

0x0c38,	// (0x0005c29f) main_phacti_pane

0x7e62,	// (0x000634c9) bg_button_pane_cp11

0x7e7c,	// (0x000634e3) main_mobtv_info_pane_g2_ParamLimits

0x7e7c,	// (0x000634e3) main_mobtv_info_pane_g2

0x0001,

0xfbcd,	// (0x0006b234) main_mobtv_info_pane_g_ParamLimits

0xfbcd,	// (0x0006b234) main_mobtv_info_pane_g

0x8059,	// (0x000636c0) sc_clock_pane_t5_ParamLimits

0x8059,	// (0x000636c0) sc_clock_pane_t5

0x80e3,	// (0x0006374a) main_radioblah_pane_g1_ParamLimits

0xeec2,	// (0x0006a529) main_radioblah_pane_t3_ParamLimits

0xeec2,	// (0x0006a529) main_radioblah_pane_t3

0xeeda,	// (0x0006a541) main_radioblah_pane_t4_ParamLimits

0xeeda,	// (0x0006a541) main_radioblah_pane_t4

0x810b,	// (0x00063772) main_radioblah_text_pane_ParamLimits

0x810b,	// (0x00063772) main_radioblah_text_pane

0x811d,	// (0x00063784) main_radioblah_info_pane_g1_ParamLimits

0x81b6,	// (0x0006381d) main_radioblah_info_pane_t4_ParamLimits

0x81b6,	// (0x0006381d) main_radioblah_info_pane_t4

0x9864,	// (0x00064ecb) main_sp_fs_calendar_pane

0x8b4b,	// (0x000641b2) main_phacti_pane_g1

0x8b53,	// (0x000641ba) phacti_note_pane_ParamLimits

0x8b53,	// (0x000641ba) phacti_note_pane

0xd095,	// (0x000686fc) phacti_term_pane_ParamLimits

0xd095,	// (0x000686fc) phacti_term_pane

0xd0aa,	// (0x00068711) phacti_note_pane_t1_ParamLimits

0xd0aa,	// (0x00068711) phacti_note_pane_t1

0xd0c1,	// (0x00068728) phacti_term_pane_g1

0xd0c9,	// (0x00068730) phacti_term_pane_t1_ParamLimits

0xd0c9,	// (0x00068730) phacti_term_pane_t1

0xd0f3,	// (0x0006875a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa2ac,	// (0x00065913) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcf3,	// (0x0006b35a) popup_sp_fs_calendar_preview_list_single_pane_g

0xd0fb,	// (0x00068762) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd0fb,	// (0x00068762) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd110,	// (0x00068777) aid_popup_sp_fs_bg_corner_pane

0xc57d,	// (0x00067be4) popup_sp_fs_calendar_preview_bg_pane_g1

0x0c38,	// (0x0005c29f) popup_sp_fs_calendar_preview_bg_pane

0xd118,	// (0x0006877f) popup_sp_fs_calendar_preview_list_pane

0x9864,	// (0x00064ecb) bg_main_sp_fs_cale_pane_ParamLimits

0x9864,	// (0x00064ecb) bg_main_sp_fs_cale_pane

0xd120,	// (0x00068787) listscroll_cale_mrui_pane_ParamLimits

0xd120,	// (0x00068787) listscroll_cale_mrui_pane

0xd134,	// (0x0006879b) listscroll_sp_fs_schedule_track_pane

0xd13d,	// (0x000687a4) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd13d,	// (0x000687a4) main_sp_fs_ctrlbar_pane_cp01

0xd14e,	// (0x000687b5) main_sp_fs_ribbon_pane

0xd156,	// (0x000687bd) popup_sp_fs_cale_preview_window

0x8bae,	// (0x00064215) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8bae,	// (0x00064215) list_single_sp_fs_schedule_track_pane

0x9864,	// (0x00064ecb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9864,	// (0x00064ecb) bg_sp_fs_highlight_list_pane_cp03

0x8bc0,	// (0x00064227) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8bc0,	// (0x00064227) list_single_sp_fs_schedule_track_pane_g1

0x8bcc,	// (0x00064233) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8bcc,	// (0x00064233) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcf8,	// (0x0006b35f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcf8,	// (0x0006b35f) list_single_sp_fs_schedule_track_pane_g

0x8bd8,	// (0x0006423f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8bd8,	// (0x0006423f) list_single_sp_fs_schedule_track_pane_t1

0x8bf2,	// (0x00064259) sp_fs_schedule_track_pane_ParamLimits

0x8bf2,	// (0x00064259) sp_fs_schedule_track_pane

0xd168,	// (0x000687cf) sp_fs_schedule_track_pane_g1

0xd170,	// (0x000687d7) sp_fs_schedule_track_pane_g2

0xd178,	// (0x000687df) sp_fs_schedule_track_pane_g3

0xd180,	// (0x000687e7) sp_fs_schedule_track_pane_g4

0xd188,	// (0x000687ef) sp_fs_schedule_track_pane_g5

0x0004,

0xfcfd,	// (0x0006b364) sp_fs_schedule_track_pane_g

0xdff4,	// (0x0006965b) bg_sp_fs_schedule_viewer_highlight_g1

0xa4ab,	// (0x00065b12) bg_sp_fs_schedule_viewer_highlight_g2

0xdffc,	// (0x00069663) bg_sp_fs_schedule_viewer_highlight_g3

0xe004,	// (0x0006966b) bg_sp_fs_schedule_viewer_highlight_g4

0xe226,	// (0x0006988d) bg_sp_fs_schedule_viewer_highlight_g5

0xe014,	// (0x0006967b) bg_sp_fs_schedule_viewer_highlight_g6

0xe01c,	// (0x00069683) bg_sp_fs_schedule_viewer_highlight_g7

0xe024,	// (0x0006968b) bg_sp_fs_schedule_viewer_highlight_g8

0xa48b,	// (0x00065af2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd08,	// (0x0006b36f) bg_sp_fs_schedule_viewer_highlight_g

0x0c38,	// (0x0005c29f) bg_main_sp_fs_ribbon_pane

0x8c03,	// (0x0006426a) main_sp_fs_ribbon_pane_g1

0xd190,	// (0x000687f7) main_sp_fs_ribbon_pane_t1

0x8c0c,	// (0x00064273) main_sp_fs_ribbon_pane_t2

0xd19f,	// (0x00068806) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd1b,	// (0x0006b382) main_sp_fs_ribbon_pane_t

0xd1ae,	// (0x00068815) main_sp_fs_ribbon_scheduler_pane

0xd1b6,	// (0x0006881d) bg_main_sp_fs_ribbon_pane_g1

0xd1bf,	// (0x00068826) bg_main_sp_fs_ribbon_pane_g2

0xd1c8,	// (0x0006882f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd22,	// (0x0006b389) bg_main_sp_fs_ribbon_pane_g

0xd1d0,	// (0x00068837) main_sp_fs_ribbon_scheduler_pane_g1

0xd1d9,	// (0x00068840) main_sp_fs_ribbon_scheduler_pane_g2

0xd1e2,	// (0x00068849) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd29,	// (0x0006b390) main_sp_fs_ribbon_scheduler_pane_g

0xd1eb,	// (0x00068852) list_cale_mrui_pane

0x8c1b,	// (0x00064282) sp_fs_scroll_pane_cp07_ParamLimits

0x8c1b,	// (0x00064282) sp_fs_scroll_pane_cp07

0x8c2f,	// (0x00064296) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c2f,	// (0x00064296) bg_sp_fs_schedule_viewer_highlight

0xd1f4,	// (0x0006885b) list_single_sp_fs_schedule_track_pane_cp01

0xd1fc,	// (0x00068863) list_sp_fs_schedule_track_pane

0xd204,	// (0x0006886b) sp_fs_scroll_pane_cp06_ParamLimits

0xd204,	// (0x0006886b) sp_fs_scroll_pane_cp06

0xc57d,	// (0x00067be4) bgmain_sp_fs_calendar_pane_g1

0x8c3f,	// (0x000642a6) list_single_cale_mrui_pane_ParamLimits

0x8c3f,	// (0x000642a6) list_single_cale_mrui_pane

0xd216,	// (0x0006887d) list_single_cale_mrui_row_pane_ParamLimits

0xd216,	// (0x0006887d) list_single_cale_mrui_row_pane

0xd223,	// (0x0006888a) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd223,	// (0x0006888a) list_single_cale_mrui_row_pane_g1

0xd268,	// (0x000688cf) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd268,	// (0x000688cf) list_single_cale_mrui_row_pane_t1

0x8c5f,	// (0x000642c6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8c5f,	// (0x000642c6) list_single_cale_mrui_row_pane_t2

0xd27a,	// (0x000688e1) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd27a,	// (0x000688e1) list_single_cale_mrui_row_pane_t3

0xd2a9,	// (0x00068910) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd2a9,	// (0x00068910) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd37,	// (0x0006b39e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd37,	// (0x0006b39e) list_single_cale_mrui_row_pane_t

0x8cc7,	// (0x0006432e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8cc7,	// (0x0006432e) list_single_cmail_header_editor_pane_bg_cp01

0x8ced,	// (0x00064354) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ced,	// (0x00064354) list_single_cmail_header_editor_pane_bg_cp02

0x8d0d,	// (0x00064374) main_radioblah_text_pane_t1_ParamLimits

0x8d0d,	// (0x00064374) main_radioblah_text_pane_t1

0xd2d8,	// (0x0006893f) cam6_indi_pane_cp01

0xd2e0,	// (0x00068947) cam6_mode_pane_cp01

0xd2e8,	// (0x0006894f) cam6_pano_pane

0xd2f1,	// (0x00068958) cam6_zoom_pane_cp01

0xd2f9,	// (0x00068960) cam6_pano_image_pane

0xd304,	// (0x0006896b) cam6_pano_pane_g1

0xec24,	// (0x0006a28b) cam6_pano_pane_g2

0xd30d,	// (0x00068974) cam6_pano_pane_g3

0xd316,	// (0x0006897d) cam6_pano_pane_g4

0xcb1f,	// (0x00068186) cam6_pano_pane_g5

0xd31f,	// (0x00068986) cam6_pano_pane_g6

0xd329,	// (0x00068990) cam6_pano_pane_g7

0xd331,	// (0x00068998) cam6_pano_pane_g8

0xd33a,	// (0x000689a1) cam6_pano_pane_g9

0x0008,

0xfd40,	// (0x0006b3a7) cam6_pano_pane_g

0x0c38,	// (0x0005c29f) main_browser_tag_pane

0xd076,	// (0x000686dd) grid_navstr_albumart_pane

0xd345,	// (0x000689ac) cell_navstr_albumart_pane_ParamLimits

0xd345,	// (0x000689ac) cell_navstr_albumart_pane

0xd368,	// (0x000689cf) cell_navstr_albumart_pane_g1

0xbe94,	// (0x000674fb) cell_navstr_albumart_pane_g2

0xbea4,	// (0x0006750b) cell_navstr_albumart_pane_g3

0xbe9c,	// (0x00067503) cell_navstr_albumart_pane_g4

0x0003,

0xfd53,	// (0x0006b3ba) cell_navstr_albumart_pane_g

0x8d27,	// (0x0006438e) bt_list_pane_ParamLimits

0x8d27,	// (0x0006438e) bt_list_pane

0x8d3b,	// (0x000643a2) bt_list_pane_t1

0x8d4a,	// (0x000643b1) bt_list_pane_t2

0x0001,

0xfd5c,	// (0x0006b3c3) bt_list_pane_t

0x0c38,	// (0x0005c29f) main_cale_prevew_pane

0x8d59,	// (0x000643c0) popup_cale_preview_window_ParamLimits

0x8d59,	// (0x000643c0) popup_cale_preview_window

0x9864,	// (0x00064ecb) bg_popup_preview_window_pane_cp05_ParamLimits

0x9864,	// (0x00064ecb) bg_popup_preview_window_pane_cp05

0xd370,	// (0x000689d7) list_cale_preview_pane_ParamLimits

0xd370,	// (0x000689d7) list_cale_preview_pane

0x8d74,	// (0x000643db) list_double_cale_preview_pane_ParamLimits

0x8d74,	// (0x000643db) list_double_cale_preview_pane

0x8d86,	// (0x000643ed) list_single_cale_preview_pane_ParamLimits

0x8d86,	// (0x000643ed) list_single_cale_preview_pane

0x8d9c,	// (0x00064403) list_single_cale_preview_pane_g1

0x8da4,	// (0x0006440b) list_single_cale_preview_pane_t1_ParamLimits

0x8da4,	// (0x0006440b) list_single_cale_preview_pane_t1

0x8db9,	// (0x00064420) list_double_cale_preview_pane_g1

0x8dc1,	// (0x00064428) list_double_cale_preview_pane_t1_ParamLimits

0x8dc1,	// (0x00064428) list_double_cale_preview_pane_t1

0x8dd6,	// (0x0006443d) list_double_cale_preview_pane_t2_ParamLimits

0x8dd6,	// (0x0006443d) list_double_cale_preview_pane_t2

0x0001,

0xfd61,	// (0x0006b3c8) list_double_cale_preview_pane_t_ParamLimits

0xfd61,	// (0x0006b3c8) list_double_cale_preview_pane_t

0x0c38,	// (0x0005c29f) main_ezdial_pane

0x9864,	// (0x00064ecb) main_sp_fs_email_pane_ParamLimits

0x846b,	// (0x00063ad2) cmail_ddmenu_btn01_pane_ParamLimits

0x846b,	// (0x00063ad2) cmail_ddmenu_btn01_pane

0x847e,	// (0x00063ae5) cmail_ddmenu_btn02_pane_ParamLimits

0x847e,	// (0x00063ae5) cmail_ddmenu_btn02_pane

0x84a1,	// (0x00063b08) cmail_ddmenu_btn03_pane_ParamLimits

0x84a1,	// (0x00063b08) cmail_ddmenu_btn03_pane

0x84ca,	// (0x00063b31) main_sp_fs_ctrlbar_pane_ParamLimits

0x84ee,	// (0x00063b55) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe1f5,	// (0x0006985c) list_cmail_body_pane_ParamLimits

0xcfa2,	// (0x00068609) bg_button_pane_cp12

0xcfb7,	// (0x0006861e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcfb7,	// (0x0006861e) list_single_cmail_header_detail_pane_g3

0x8a81,	// (0x000640e8) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8a81,	// (0x000640e8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfce4,	// (0x0006b34b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfce4,	// (0x0006b34b) list_single_cmail_header_detail_pane_t

0xd0de,	// (0x00068745) phacti_term_pane_t2_ParamLimits

0xd0de,	// (0x00068745) phacti_term_pane_t2

0x0001,

0xfcee,	// (0x0006b355) phacti_term_pane_t_ParamLimits

0xfcee,	// (0x0006b355) phacti_term_pane_t

0xd37c,	// (0x000689e3) aid_size_list_single_double

0x8dee,	// (0x00064455) popup_ezdial_listscroll_window

0x8e0a,	// (0x00064471) popup_number_entry_window_cp01

0xac35,	// (0x0006629c) bg_popup_call_pane_cp09

0xd388,	// (0x000689ef) ezdial_list_pane

0xd390,	// (0x000689f7) scroll_pane_cp23

0xc077,	// (0x000676de) bg_button_pane_cp028_ParamLimits

0xc077,	// (0x000676de) bg_button_pane_cp028

0x8e18,	// (0x0006447f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8e18,	// (0x0006447f) cmail_ddmenu_btn01_pane_g1

0x8e27,	// (0x0006448e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e27,	// (0x0006448e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd66,	// (0x0006b3cd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd66,	// (0x0006b3cd) cmail_ddmenu_btn01_pane_g

0xd398,	// (0x000689ff) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd398,	// (0x000689ff) cmail_ddmenu_btn01_pane_t1

0xc077,	// (0x000676de) bg_button_pane_cp029_ParamLimits

0xc077,	// (0x000676de) bg_button_pane_cp029

0x8e37,	// (0x0006449e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e37,	// (0x0006449e) cmail_ddmenu_btn02_pane_g1

0x8e52,	// (0x000644b9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e52,	// (0x000644b9) cmail_ddmenu_btn02_pane_t1

0x9864,	// (0x00064ecb) bg_button_pane_cp031_ParamLimits

0x9864,	// (0x00064ecb) bg_button_pane_cp031

0x8e37,	// (0x0006449e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e37,	// (0x0006449e) cmail_ddmenu_btn03_pane_g1

0x8e52,	// (0x000644b9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e52,	// (0x000644b9) cmail_ddmenu_btn03_pane_t1

0x5c97,	// (0x000612fe) cell_dialer2_keypad_pane_t1_ParamLimits

0x5cb1,	// (0x00061318) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5cb1,	// (0x00061318) cell_dialer2_keypad_pane_t1_copy1

0x7cd6,	// (0x0006333d) ncimui_group_button_pane

0x9864,	// (0x00064ecb) main_sp_fs_calendar_pane_ParamLimits

0x8a1a,	// (0x00064081) list_single_cmail_header_caption_pane_ParamLimits

0x7401,	// (0x00062a68) aid_recal_txt_sm_pane

0x0c38,	// (0x0005c29f) mian_recal_day_pane

0xd156,	// (0x000687bd) popup_sp_fs_cale_preview_window_ParamLimits

0x0c38,	// (0x0005c29f) list_recal_day_pane

0xd3c7,	// (0x00068a2e) list_single_recal_day_pane_ParamLimits

0xd3c7,	// (0x00068a2e) list_single_recal_day_pane

0xd3d9,	// (0x00068a40) list_single_recal_day_pane_g1_ParamLimits

0xd3d9,	// (0x00068a40) list_single_recal_day_pane_g1

0xd3e5,	// (0x00068a4c) list_single_recal_day_pane_g2_ParamLimits

0xd3e5,	// (0x00068a4c) list_single_recal_day_pane_g2

0xd3f5,	// (0x00068a5c) list_single_recal_day_pane_g3_ParamLimits

0xd3f5,	// (0x00068a5c) list_single_recal_day_pane_g3

0x8e79,	// (0x000644e0) list_single_recal_day_pane_g4_ParamLimits

0x8e79,	// (0x000644e0) list_single_recal_day_pane_g4

0xd401,	// (0x00068a68) list_single_recal_day_pane_g5_ParamLimits

0xd401,	// (0x00068a68) list_single_recal_day_pane_g5

0xd411,	// (0x00068a78) list_single_recal_day_pane_g6_ParamLimits

0xd411,	// (0x00068a78) list_single_recal_day_pane_g6

0x0004,

0xfd75,	// (0x0006b3dc) list_single_recal_day_pane_g_ParamLimits

0xfd75,	// (0x0006b3dc) list_single_recal_day_pane_g

0xd428,	// (0x00068a8f) list_single_recal_day_pane_t1

0xd43a,	// (0x00068aa1) list_single_recal_day_pane_t2

0x0001,

0xfd80,	// (0x0006b3e7) list_single_recal_day_pane_t

0x8e99,	// (0x00064500) ncimui_query_button_pane_ParamLimits

0x8e99,	// (0x00064500) ncimui_query_button_pane

0x8ea9,	// (0x00064510) ncimui_query_button_pane_t1_ParamLimits

0x8ea9,	// (0x00064510) ncimui_query_button_pane_t1

0xd44f,	// (0x00068ab6) ncimui_query_button_pane_t2_ParamLimits

0xd44f,	// (0x00068ab6) ncimui_query_button_pane_t2

0x0001,

0xfd85,	// (0x0006b3ec) ncimui_query_button_pane_t_ParamLimits

0xfd85,	// (0x0006b3ec) ncimui_query_button_pane_t

0x8ebc,	// (0x00064523) query_button_pane_ParamLimits

0x8ebc,	// (0x00064523) query_button_pane

0x0c38,	// (0x0005c29f) bg_button_pane_cp0028

0xd462,	// (0x00068ac9) query_button_pane_t1

0x3d38,	// (0x0005f39f) main_tport_pane_ParamLimits

0x8907,	// (0x00063f6e) bg_popup_window_pane_cp01_ParamLimits

0x8907,	// (0x00063f6e) bg_popup_window_pane_cp01

0x8921,	// (0x00063f88) heading_pane_cp08_ParamLimits

0x8921,	// (0x00063f88) heading_pane_cp08

0x8935,	// (0x00063f9c) heading_pane_cp07_ParamLimits

0x8935,	// (0x00063f9c) heading_pane_cp07

0xcf64,	// (0x000685cb) cell_tport_appsw_pane_g2

0x0002,

0xfcd1,	// (0x0006b338) cell_tport_appsw_pane_g

0x32e1,	// (0x0005e948) input_candi_list_open_g1

0xa680,	// (0x00065ce7) list_cale_time_pane_g6_ParamLimits

0xa680,	// (0x00065ce7) list_cale_time_pane_g6

0x4b05,	// (0x0006016c) aid_size_touch_calib_1_ParamLimits

0x4b05,	// (0x0006016c) aid_size_touch_calib_1

0x4b11,	// (0x00060178) aid_size_touch_calib_2_ParamLimits

0x4b11,	// (0x00060178) aid_size_touch_calib_2

0x4b27,	// (0x0006018e) aid_size_touch_calib_3_ParamLimits

0x4b27,	// (0x0006018e) aid_size_touch_calib_3

0x4b45,	// (0x000601ac) aid_size_touch_calib_4_ParamLimits

0x4b45,	// (0x000601ac) aid_size_touch_calib_4

0x4b5b,	// (0x000601c2) main_touch_calib_button_group_pane_ParamLimits

0x4b5b,	// (0x000601c2) main_touch_calib_button_group_pane

0x4b73,	// (0x000601da) main_touch_calib_pane_g1_ParamLimits

0x4b7f,	// (0x000601e6) main_touch_calib_pane_g2_ParamLimits

0x4b8b,	// (0x000601f2) main_touch_calib_pane_g3_ParamLimits

0x4b97,	// (0x000601fe) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0006add7) main_touch_calib_pane_g_ParamLimits

0x4ba3,	// (0x0006020a) main_touch_calib_pane_t1_ParamLimits

0x4bbd,	// (0x00060224) main_touch_calib_pane_t2_ParamLimits

0x4bd7,	// (0x0006023e) main_touch_calib_pane_t3_ParamLimits

0x4beb,	// (0x00060252) main_touch_calib_pane_t4_ParamLimits

0x4bff,	// (0x00060266) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0006ade0) main_touch_calib_pane_t_ParamLimits

0xc8f5,	// (0x00067f5c) list_single_fp_cale_pane_g3_ParamLimits

0xc8f5,	// (0x00067f5c) list_single_fp_cale_pane_g3

0xdcff,	// (0x00069366) bg_button_pane_cp012_ParamLimits

0xdcff,	// (0x00069366) bg_vkb2_func_pane_cp03_ParamLimits

0x6cd9,	// (0x00062340) cell_vitu2_function_top_pane_g1_ParamLimits

0xdcff,	// (0x00069366) bg_vkb2_func_pane_cp04_ParamLimits

0x7c76,	// (0x000632dd) main_ncimui_button_group_pane_ParamLimits

0x7c76,	// (0x000632dd) main_ncimui_button_group_pane

0x7cc4,	// (0x0006332b) main_ncimui_pane_t3_ParamLimits

0x7cc4,	// (0x0006332b) main_ncimui_pane_t3

0xd08c,	// (0x000686f3) phacti_button_group_pane

0xd37c,	// (0x000689e3) aid_size_list_single_double_ParamLimits

0x8dee,	// (0x00064455) popup_ezdial_listscroll_window_ParamLimits

0x8e0a,	// (0x00064471) popup_number_entry_window_cp01_ParamLimits

0x8ecf,	// (0x00064536) phacti_button_pane_ParamLimits

0x8ecf,	// (0x00064536) phacti_button_pane

0x0c38,	// (0x0005c29f) bg_button_pane_cp14

0xd470,	// (0x00068ad7) phacti_button_pane_t1

0x8ee0,	// (0x00064547) main_touch_calib_button_pane_ParamLimits

0x8ee0,	// (0x00064547) main_touch_calib_button_pane

0x9fdf,	// (0x00065646) bg_button_pane_cp18_ParamLimits

0x9fdf,	// (0x00065646) bg_button_pane_cp18

0xd47e,	// (0x00068ae5) main_touch_calib_button_pane_t1_ParamLimits

0xd47e,	// (0x00068ae5) main_touch_calib_button_pane_t1

0xd494,	// (0x00068afb) main_touch_calib_button_pane_t2_ParamLimits

0xd494,	// (0x00068afb) main_touch_calib_button_pane_t2

0x0001,

0xfd8a,	// (0x0006b3f1) main_touch_calib_button_pane_t_ParamLimits

0xfd8a,	// (0x0006b3f1) main_touch_calib_button_pane_t

0x0c38,	// (0x0005c29f) cell_ncimui_button_pane

0x0c38,	// (0x0005c29f) bg_button_pane_cp032

0xd4b2,	// (0x00068b19) cell_ncimui_button_pane_t1

0xdc1a,	// (0x00069281) image3_infobar_pane_ParamLimits

0xdc1a,	// (0x00069281) image3_infobar_pane

0x8085,	// (0x000636ec) fs_bigclock_status_pane_ParamLimits

0x8085,	// (0x000636ec) fs_bigclock_status_pane

0x8092,	// (0x000636f9) main_fs_bigclock_clock_pane_ParamLimits

0x8092,	// (0x000636f9) main_fs_bigclock_clock_pane

0x80a6,	// (0x0006370d) main_fs_bigclock_indi_pane_ParamLimits

0x80a6,	// (0x0006370d) main_fs_bigclock_indi_pane

0x80bf,	// (0x00063726) main_fs_bigclock_swipe_pane_ParamLimits

0x80bf,	// (0x00063726) main_fs_bigclock_swipe_pane

0x0c38,	// (0x0005c29f) main_fs_clock_dumped_data

0xed31,	// (0x0006a398) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xed31,	// (0x0006a398) list_single_fs_bigclock_indicator_pane_g1

0xed57,	// (0x0006a3be) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xed57,	// (0x0006a3be) list_single_fs_bigclock_indicator_pane_g2

0xed71,	// (0x0006a3d8) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xed71,	// (0x0006a3d8) list_single_fs_bigclock_indicator_pane_g3

0xed8b,	// (0x0006a3f2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xed8b,	// (0x0006a3f2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0866,	// (0x0005becd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0866,	// (0x0005becd) list_single_fs_bigclock_indicator_pane_g

0xedb4,	// (0x0006a41b) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xedb4,	// (0x0006a41b) list_single_fs_bigclock_indicator_pane_t1

0xeddc,	// (0x0006a443) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xeddc,	// (0x0006a443) list_single_fs_bigclock_indicator_pane_t2

0xee04,	// (0x0006a46b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xee04,	// (0x0006a46b) list_single_fs_bigclock_indicator_pane_t3

0xee2c,	// (0x0006a493) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xee2c,	// (0x0006a493) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0871,	// (0x0005bed8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0871,	// (0x0005bed8) list_single_fs_bigclock_indicator_pane_t

0xd4c0,	// (0x00068b27) image3_infobar_fav_pane_ParamLimits

0xd4c0,	// (0x00068b27) image3_infobar_fav_pane

0xd4d0,	// (0x00068b37) image3_infobar_loc_pane_ParamLimits

0xd4d0,	// (0x00068b37) image3_infobar_loc_pane

0xd4e4,	// (0x00068b4b) image3_infobar_time_pane_ParamLimits

0xd4e4,	// (0x00068b4b) image3_infobar_time_pane

0xc57d,	// (0x00067be4) image3_infobar_time_pane_g1

0xd4f4,	// (0x00068b5b) image3_infobar_time_pane_t1

0xc57d,	// (0x00067be4) image3_infobar_loc_pane_g1

0xd502,	// (0x00068b69) image3_infobar_loc_pane_g2

0x0001,

0xfd8f,	// (0x0006b3f6) image3_infobar_loc_pane_g

0xd50a,	// (0x00068b71) image3_infobar_loc_pane_t1

0xc57d,	// (0x00067be4) image3_infobar_fav_pane_g1

0xd518,	// (0x00068b7f) image3_infobar_fav_pane_g2

0x0001,

0xfd94,	// (0x0006b3fb) image3_infobar_fav_pane_g

0xd520,	// (0x00068b87) fs_bigclock_status_battery_pane

0xd529,	// (0x00068b90) fs_bigclock_status_signal_pane

0xd532,	// (0x00068b99) fs_bigclock_status_title_pane

0xd53b,	// (0x00068ba2) fs_bigclock_status_signal_pane_g1

0xd544,	// (0x00068bab) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd99,	// (0x0006b400) fs_bigclock_status_signal_pane_g

0xd54c,	// (0x00068bb3) fs_bigclock_status_battery_pane_g1

0xd555,	// (0x00068bbc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd9e,	// (0x0006b405) fs_bigclock_status_battery_pane_g

0xd55d,	// (0x00068bc4) fs_bigclock_status_title_pane_t1

0xc57d,	// (0x00067be4) main_fs_bigclock_clock_pane_g1

0xd56b,	// (0x00068bd2) main_fs_bigclock_clock_pane_g2

0xd56b,	// (0x00068bd2) main_fs_bigclock_clock_pane_g3

0xd56b,	// (0x00068bd2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfda3,	// (0x0006b40a) main_fs_bigclock_clock_pane_g

0xd573,	// (0x00068bda) main_fs_bigclock_clock_pane_t1

0xd581,	// (0x00068be8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdac,	// (0x0006b413) main_fs_bigclock_clock_pane_t

0xd590,	// (0x00068bf7) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd590,	// (0x00068bf7) list_single_fs_bigclock_indicator_pane

0x8ef5,	// (0x0006455c) list_single_fs_bigclock_pane_ParamLimits

0x8ef5,	// (0x0006455c) list_single_fs_bigclock_pane

0xd5aa,	// (0x00068c11) main_fs_bigclock_indicator_pane_t1

0xd5b9,	// (0x00068c20) list_single_fs_bigclock_pane_g1

0xd5c1,	// (0x00068c28) list_single_fs_bigclock_pane_t1

0xc57d,	// (0x00067be4) main_fs_bigclock_swipe_pane_g1

0xd604,	// (0x00068c6b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdbd,	// (0x0006b424) main_fs_bigclock_swipe_pane_g

0xd60c,	// (0x00068c73) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd60c,	// (0x00068c73) main_fs_bigclock_swipe_pane_t1

0x2af9,	// (0x0005e160) call_type_pane_ParamLimits

0x0c38,	// (0x0005c29f) main_btmg_pane

0xd24f,	// (0x000688b6) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd24f,	// (0x000688b6) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd30,	// (0x0006b397) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd30,	// (0x0006b397) list_single_cale_mrui_row_pane_g

0xd3b7,	// (0x00068a1e) list_recal_vselct_arw_lo_pane

0xd3bf,	// (0x00068a26) list_recal_vselct_arw_up_pane

0x73f8,	// (0x00062a5f) list_recal_vselct_pane

0xd629,	// (0x00068c90) btmg_button_pane

0x8f58,	// (0x000645bf) main_btmg_pane_g1

0x0c38,	// (0x0005c29f) bg_button_pane_cp044

0xd633,	// (0x00068c9a) btmg_button_pane_t1

0xc06f,	// (0x000676d6) aid_listscroll_gen

0x9864,	// (0x00064ecb) main_cntbar_detail_pane

0xcf82,	// (0x000685e9) list_cmail_folder_pane

0xcf92,	// (0x000685f9) sp_fs_scroll_pane_cp03_ParamLimits

0x8f62,	// (0x000645c9) list_single_fs_dyc_pane_cp01_ParamLimits

0x8f62,	// (0x000645c9) list_single_fs_dyc_pane_cp01

0xd641,	// (0x00068ca8) aid_size_cmail_indent

0xd64a,	// (0x00068cb1) list_single_dyc_row_pane_cp01

0x8fa4,	// (0x0006460b) cntbar_detail_list_pane_ParamLimits

0x8fa4,	// (0x0006460b) cntbar_detail_list_pane

0x8ff0,	// (0x00064657) main_cntbar_detail_cont_pane_ParamLimits

0x8ff0,	// (0x00064657) main_cntbar_detail_cont_pane

0x2a1e,	// (0x0005e085) scroll_pane_cp032_ParamLimits

0x2a1e,	// (0x0005e085) scroll_pane_cp032

0x9004,	// (0x0006466b) cntbar_detail_list_event_pane_ParamLimits

0x9004,	// (0x0006466b) cntbar_detail_list_event_pane

0x8fb4,	// (0x0006461b) cntbar_detail_list_shct_pane

0xa4f9,	// (0x00065b60) aid_list_gen

0xd653,	// (0x00068cba) aid_scroll

0xd65c,	// (0x00068cc3) aid_size_touch_scroll_bar

0x9014,	// (0x0006467b) aid_list_double

0xd665,	// (0x00068ccc) aid_list_single

0x901d,	// (0x00064684) aid_list_single_lg

0xd66e,	// (0x00068cd5) aid_list_z_g_a_sm

0xd676,	// (0x00068cdd) aid_list_z_g_d

0xd67e,	// (0x00068ce5) aid_txt_z_prm

0x9026,	// (0x0006468d) aid_txt_z_prm_cp01

0x9034,	// (0x0006469b) aid_txt_z_sec

0x9042,	// (0x000646a9) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9042,	// (0x000646a9) main_cntbar_detail_cont_pane_g1

0x9056,	// (0x000646bd) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9056,	// (0x000646bd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdc2,	// (0x0006b429) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdc2,	// (0x0006b429) main_cntbar_detail_cont_pane_g

0xd68c,	// (0x00068cf3) main_cntbar_detail_cont_pane_t1

0xd69a,	// (0x00068d01) main_cntbar_detail_cont_pane_t2

0xd6a8,	// (0x00068d0f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdc7,	// (0x0006b42e) main_cntbar_detail_cont_pane_t

0x9066,	// (0x000646cd) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9066,	// (0x000646cd) cell_cntbar_detail_list_shct_pane

0xd6b6,	// (0x00068d1d) cntbar_detail_list_shct_pane_g1

0xd6bf,	// (0x00068d26) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdce,	// (0x0006b435) cntbar_detail_list_shct_pane_g

0x907a,	// (0x000646e1) cntbar_detail_list_event_pane_g1_ParamLimits

0x907a,	// (0x000646e1) cntbar_detail_list_event_pane_g1

0x9086,	// (0x000646ed) cntbar_detail_list_event_pane_g2_ParamLimits

0x9086,	// (0x000646ed) cntbar_detail_list_event_pane_g2

0x0005,

0xfdd3,	// (0x0006b43a) cntbar_detail_list_event_pane_g_ParamLimits

0xfdd3,	// (0x0006b43a) cntbar_detail_list_event_pane_g

0x90f2,	// (0x00064759) cntbar_detail_list_event_pane_t1_ParamLimits

0x90f2,	// (0x00064759) cntbar_detail_list_event_pane_t1

0x9107,	// (0x0006476e) cntbar_detail_list_event_pane_t2_ParamLimits

0x9107,	// (0x0006476e) cntbar_detail_list_event_pane_t2

0x0002,

0xfde0,	// (0x0006b447) cntbar_detail_list_event_pane_t_ParamLimits

0xfde0,	// (0x0006b447) cntbar_detail_list_event_pane_t

0xc57d,	// (0x00067be4) cell_cntbar_detail_list_shct_pane_g1

0x2e71,	// (0x0005e4d8) navi_pane_mv_g3

0x9864,	// (0x00064ecb) main_cntbar_detail_pane_ParamLimits

0x0c38,	// (0x0005c29f) main_notif_wgt_pane

0xda30,	// (0x00069097) aid_tch_main_mp4_pane_g4

0xdc12,	// (0x00069279) popup_slider_window_cp02

0xd3ad,	// (0x00068a14) list_recal_day_event_pane

0x8f78,	// (0x000645df) cntbar_detail_btn_pane_ParamLimits

0x8f78,	// (0x000645df) cntbar_detail_btn_pane

0x8f8e,	// (0x000645f5) cntbar_detail_btn_pane_cp01_ParamLimits

0x8f8e,	// (0x000645f5) cntbar_detail_btn_pane_cp01

0x8fb4,	// (0x0006461b) cntbar_detail_list_shct_pane_ParamLimits

0x8fc4,	// (0x0006462b) cntbar_detail_pane_g1_ParamLimits

0x8fc4,	// (0x0006462b) cntbar_detail_pane_g1

0x8fd4,	// (0x0006463b) cntbar_detail_pane_t1_ParamLimits

0x8fd4,	// (0x0006463b) cntbar_detail_pane_t1

0x9092,	// (0x000646f9) cntbar_detail_list_event_pane_g3_ParamLimits

0x9092,	// (0x000646f9) cntbar_detail_list_event_pane_g3

0x90aa,	// (0x00064711) cntbar_detail_list_event_pane_g4_ParamLimits

0x90aa,	// (0x00064711) cntbar_detail_list_event_pane_g4

0x90c2,	// (0x00064729) cntbar_detail_list_event_pane_g5_ParamLimits

0x90c2,	// (0x00064729) cntbar_detail_list_event_pane_g5

0x90da,	// (0x00064741) cntbar_detail_list_event_pane_g6_ParamLimits

0x90da,	// (0x00064741) cntbar_detail_list_event_pane_g6

0x911c,	// (0x00064783) cntbar_detail_list_event_pane_t3_ParamLimits

0x911c,	// (0x00064783) cntbar_detail_list_event_pane_t3

0x912e,	// (0x00064795) popup_notif_wgt_window_ParamLimits

0x912e,	// (0x00064795) popup_notif_wgt_window

0x9147,	// (0x000647ae) popup_submenu_window_cp01_ParamLimits

0x9147,	// (0x000647ae) popup_submenu_window_cp01

0xac35,	// (0x0006629c) bg_popup_window_pane_cp10

0xd6c8,	// (0x00068d2f) listscroll_notif_wgt_pane

0xd6d2,	// (0x00068d39) list_notif_wgt_window

0xd6db,	// (0x00068d42) scroll_pane_cp033

0xd6e4,	// (0x00068d4b) list_notif_wgt_row_pane_ParamLimits

0xd6e4,	// (0x00068d4b) list_notif_wgt_row_pane

0xd6f6,	// (0x00068d5d) aid_size_list_notif_wgt_del

0xd6ff,	// (0x00068d66) list_notif_wgt_row_pane_g1

0xd707,	// (0x00068d6e) list_notif_wgt_row_pane_g2

0xd70f,	// (0x00068d76) list_notif_wgt_row_pane_g3

0x0002,

0xfde7,	// (0x0006b44e) list_notif_wgt_row_pane_g

0xd718,	// (0x00068d7f) list_notif_wgt_row_pane_t1

0xd726,	// (0x00068d8d) list_notif_wgt_row_pane_t2

0xd734,	// (0x00068d9b) list_notif_wgt_row_pane_t3

0x0002,

0xfdee,	// (0x0006b455) list_notif_wgt_row_pane_t

0xe240,	// (0x000698a7) list_recal_day_event_pane_g1

0xd742,	// (0x00068da9) list_recal_day_event_pane_t1

0x0c38,	// (0x0005c29f) bg_button_pane_cp045

0xd751,	// (0x00068db8) cntbar_detail_btn_pane_t1

0xc077,	// (0x000676de) main_callh_pane_ParamLimits

0xc077,	// (0x000676de) main_callh_pane

0x0c38,	// (0x0005c29f) main_coverflow0_pane

0x0c38,	// (0x0005c29f) main_wgtman_pane

0x80cd,	// (0x00063734) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x80cd,	// (0x00063734) main_fs_bigclock_unlock_btn_pane

0xcf5c,	// (0x000685c3) bg_button_pane_cp16

0xcf6c,	// (0x000685d3) cell_tport_appsw_pane_g3

0x9159,	// (0x000647c0) cf0_flow_pane_ParamLimits

0x9159,	// (0x000647c0) cf0_flow_pane

0xd75f,	// (0x00068dc6) listscroll_cf0_pane

0xd768,	// (0x00068dcf) main_cf0_pane_g1

0x916e,	// (0x000647d5) main_cf0_pane_t1_ParamLimits

0x916e,	// (0x000647d5) main_cf0_pane_t1

0x9185,	// (0x000647ec) main_cf0_pane_t2_ParamLimits

0x9185,	// (0x000647ec) main_cf0_pane_t2

0x0001,

0xfdf5,	// (0x0006b45c) main_cf0_pane_t_ParamLimits

0xfdf5,	// (0x0006b45c) main_cf0_pane_t

0xd772,	// (0x00068dd9) scroll_pane_cp11

0x919c,	// (0x00064803) cf0_flow_pane_g1

0x91a4,	// (0x0006480b) cf0_flow_pane_g2

0x0001,

0xfdfa,	// (0x0006b461) cf0_flow_pane_g

0x91ac,	// (0x00064813) cf0_flow_pane_t1

0x0c38,	// (0x0005c29f) main_call6_pane

0x0c38,	// (0x0005c29f) main_calllock_pane

0x91ba,	// (0x00064821) call6_btn_grp_pane_ParamLimits

0x91ba,	// (0x00064821) call6_btn_grp_pane

0x91d4,	// (0x0006483b) call6_pane_g1_ParamLimits

0x91d4,	// (0x0006483b) call6_pane_g1

0x91e9,	// (0x00064850) popup_call6_1st_window_ParamLimits

0x91e9,	// (0x00064850) popup_call6_1st_window

0x91fa,	// (0x00064861) popup_call6_2nd_window_ParamLimits

0x91fa,	// (0x00064861) popup_call6_2nd_window

0x920b,	// (0x00064872) cell_call6_btn_pane_ParamLimits

0x920b,	// (0x00064872) cell_call6_btn_pane

0xac35,	// (0x0006629c) bg_popup_call2_in_pane_cp03

0xd77d,	// (0x00068de4) popup_call6_1st_window_g1

0xd785,	// (0x00068dec) popup_call6_1st_window_g2

0xd78d,	// (0x00068df4) popup_call6_1st_window_g3

0x0002,

0xfdff,	// (0x0006b466) popup_call6_1st_window_g

0xd795,	// (0x00068dfc) popup_call6_1st_window_t1

0xd7a4,	// (0x00068e0b) popup_call6_1st_window_t2

0xd7b4,	// (0x00068e1b) popup_call6_1st_window_t3

0x0002,

0xfe06,	// (0x0006b46d) popup_call6_1st_window_t

0xac35,	// (0x0006629c) bg_popup_call2_in_pane_cp04

0xd77d,	// (0x00068de4) popup_call6_2nd_window_g1

0xd785,	// (0x00068dec) popup_call6_2nd_window_g2

0xd78d,	// (0x00068df4) popup_call6_2nd_window_g3

0x0002,

0xfdff,	// (0x0006b466) popup_call6_2nd_window_g

0xd795,	// (0x00068dfc) popup_call6_2nd_window_t1

0x0c38,	// (0x0005c29f) bg_button_pane_cp15

0xd7c4,	// (0x00068e2b) cell_call6_btn_pane_g1

0xd7cd,	// (0x00068e34) cell_call6_btn_pane_t1

0x921f,	// (0x00064886) listscroll_wgtman_pane_ParamLimits

0x921f,	// (0x00064886) listscroll_wgtman_pane

0x9242,	// (0x000648a9) wgtman_btn_pane_ParamLimits

0x9242,	// (0x000648a9) wgtman_btn_pane

0xaaec,	// (0x00066153) aid_scroll_copy1

0xd7dc,	// (0x00068e43) list_wgtman_pane

0x9285,	// (0x000648ec) wgtman_btn_pane_g1_ParamLimits

0x9285,	// (0x000648ec) wgtman_btn_pane_g1

0x92b1,	// (0x00064918) wgtman_btn_pane_t1_ParamLimits

0x92b1,	// (0x00064918) wgtman_btn_pane_t1

0xd7e6,	// (0x00068e4d) wgtman_btn_pane_t2_ParamLimits

0xd7e6,	// (0x00068e4d) wgtman_btn_pane_t2

0x0001,

0xfe0d,	// (0x0006b474) wgtman_btn_pane_t_ParamLimits

0xfe0d,	// (0x0006b474) wgtman_btn_pane_t

0x92ee,	// (0x00064955) listrow_wgtman_pane_ParamLimits

0x92ee,	// (0x00064955) listrow_wgtman_pane

0x9300,	// (0x00064967) listrow_wgtman_pane_g1

0x9309,	// (0x00064970) listrow_wgtman_pane_g2

0x0001,

0xfe12,	// (0x0006b479) listrow_wgtman_pane_g

0x9313,	// (0x0006497a) listrow_wgtman_pane_t1

0x9321,	// (0x00064988) listrow_wgtman_pane_t2

0x0001,

0xfe17,	// (0x0006b47e) listrow_wgtman_pane_t

0x932f,	// (0x00064996) wait_bar_pane_cp09

0xd7fd,	// (0x00068e64) main_calllock_btn_pane

0xd807,	// (0x00068e6e) main_calllock_pane_g1

0x0c38,	// (0x0005c29f) bg_button_pane_cp17

0xd813,	// (0x00068e7a) main_calllock_btn_pane_g1

0xd81c,	// (0x00068e83) main_calllock_btn_pane_t1

0x0c38,	// (0x0005c29f) main_dialer3_pane

0x0c38,	// (0x0005c29f) main_fmrd2_pane

0xc57d,	// (0x00067be4) main_fs_bigclock_unlock_btn_pane_g1

0xd833,	// (0x00068e9a) main_fs_bigclock_unlock_btn_pane_t1

0x9337,	// (0x0006499e) area_fmrd2_info_pane_ParamLimits

0x9337,	// (0x0006499e) area_fmrd2_info_pane

0x9348,	// (0x000649af) area_fmrd2_visual_pane_ParamLimits

0x9348,	// (0x000649af) area_fmrd2_visual_pane

0x9356,	// (0x000649bd) fmrd2_indi_pane_ParamLimits

0x9356,	// (0x000649bd) fmrd2_indi_pane

0x9363,	// (0x000649ca) area_fmrd2_visual_pane_g1

0x936b,	// (0x000649d2) area_fmrd2_visual_pane_t1

0x937b,	// (0x000649e2) area_fmrd2_visual_pane_t2

0x938b,	// (0x000649f2) area_fmrd2_visual_pane_t3

0x0002,

0xfe21,	// (0x0006b488) area_fmrd2_visual_pane_t

0x939b,	// (0x00064a02) area_fmrd2_info_pane_g1

0x93a3,	// (0x00064a0a) area_fmrd2_info_pane_t1

0x93b3,	// (0x00064a1a) area_fmrd2_info_pane_t2

0x93c3,	// (0x00064a2a) area_fmrd2_info_pane_t3

0x93d3,	// (0x00064a3a) area_fmrd2_info_pane_t4

0x0003,

0xfe28,	// (0x0006b48f) area_fmrd2_info_pane_t

0x93e1,	// (0x00064a48) fmrd2_indi_pane_t1

0x93f1,	// (0x00064a58) fmrd2_indi_pane_t2

0x9401,	// (0x00064a68) fmrd2_indi_pane_t3

0x0002,

0xfe31,	// (0x0006b498) fmrd2_indi_pane_t

0xed9a,	// (0x0006a401) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xed9a,	// (0x0006a401) list_single_fs_bigclock_indicator_pane_g5

0xee41,	// (0x0006a4a8) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xee41,	// (0x0006a4a8) list_single_fs_bigclock_indicator_pane_t5

0x8b67,	// (0x000641ce) aid_cell_bcale_month_pane_ParamLimits

0x8b67,	// (0x000641ce) aid_cell_bcale_month_pane

0x8b79,	// (0x000641e0) bcale_month_pane_ParamLimits

0x8b79,	// (0x000641e0) bcale_month_pane

0x8b93,	// (0x000641fa) bcale_preview_pane_ParamLimits

0x8b93,	// (0x000641fa) bcale_preview_pane

0xd5c1,	// (0x00068c28) list_single_fs_bigclock_pane_t1_ParamLimits

0xd5e0,	// (0x00068c47) list_single_fs_bigclock_pane_t2_ParamLimits

0xd5e0,	// (0x00068c47) list_single_fs_bigclock_pane_t2

0x0001,

0xfdb8,	// (0x0006b41f) list_single_fs_bigclock_pane_t_ParamLimits

0xfdb8,	// (0x0006b41f) list_single_fs_bigclock_pane_t

0xd82b,	// (0x00068e92) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe1c,	// (0x0006b483) main_fs_bigclock_unlock_btn_pane_g

0x9411,	// (0x00064a78) aid_dia3_key_size_ParamLimits

0x9411,	// (0x00064a78) aid_dia3_key_size

0x9420,	// (0x00064a87) aid_dia3_listrow_size_ParamLimits

0x9420,	// (0x00064a87) aid_dia3_listrow_size

0x9435,	// (0x00064a9c) dia3_keypad_fun_pane_ParamLimits

0x9435,	// (0x00064a9c) dia3_keypad_fun_pane

0x9451,	// (0x00064ab8) dia3_keypad_num_pane_ParamLimits

0x9451,	// (0x00064ab8) dia3_keypad_num_pane

0x946c,	// (0x00064ad3) dia3_listscroll_pane_ParamLimits

0x946c,	// (0x00064ad3) dia3_listscroll_pane

0x947f,	// (0x00064ae6) dia3_numentry_pane_ParamLimits

0x947f,	// (0x00064ae6) dia3_numentry_pane

0xd841,	// (0x00068ea8) dia3_list_pane

0xd84c,	// (0x00068eb3) scroll_pane_cp12

0x0c38,	// (0x0005c29f) bg_dia3_numentry_pane

0x9493,	// (0x00064afa) dia3_numentry_pane_t1

0x94a2,	// (0x00064b09) cell_dia3_key_num_pane

0x94aa,	// (0x00064b11) cell_dia3_key0_fun_pane_ParamLimits

0x94aa,	// (0x00064b11) cell_dia3_key0_fun_pane

0x94be,	// (0x00064b25) cell_dia3_key1_fun_pane_ParamLimits

0x94be,	// (0x00064b25) cell_dia3_key1_fun_pane

0x94d6,	// (0x00064b3d) dia3_listrow_pane

0xea8c,	// (0x0006a0f3) bg_dia3_numentry_pane_g1

0x0c38,	// (0x0005c29f) bg_button_pane_cp21

0xd857,	// (0x00068ebe) cell_dia3_key_num_pane_t1

0xd865,	// (0x00068ecc) cell_dia3_key_num_pane_t2

0xd874,	// (0x00068edb) cell_dia3_key_num_pane_t3

0xd883,	// (0x00068eea) cell_dia3_key_num_pane_t4

0x0003,

0xfe38,	// (0x0006b49f) cell_dia3_key_num_pane_t

0x0c38,	// (0x0005c29f) bg_button_pane_cp19

0x94e8,	// (0x00064b4f) cell_dia3_key0_fun_pane_g1

0x0c38,	// (0x0005c29f) bg_button_pane_cp20

0x94f0,	// (0x00064b57) cell_dia3_key1_fun_pane_g1

0x94f8,	// (0x00064b5f) area_left_week_number_pane

0x9501,	// (0x00064b68) area_top_day_name_pane

0x950a,	// (0x00064b71) frame_month_view_pane

0x9512,	// (0x00064b79) grid_month_view_pane

0x951c,	// (0x00064b83) cell_top_day_name_pane_ParamLimits

0x951c,	// (0x00064b83) cell_top_day_name_pane

0x9532,	// (0x00064b99) cell_area_left_week_number_pane_ParamLimits

0x9532,	// (0x00064b99) cell_area_left_week_number_pane

0x9546,	// (0x00064bad) cell_month_view_pane_ParamLimits

0x9546,	// (0x00064bad) cell_month_view_pane

0xd892,	// (0x00068ef9) frm_month_g1

0x9561,	// (0x00064bc8) frm_month_g2

0x9569,	// (0x00064bd0) frm_month_g3

0x9571,	// (0x00064bd8) frm_month_g4

0x9579,	// (0x00064be0) frm_month_g5

0x9581,	// (0x00064be8) frm_month_g6

0x9589,	// (0x00064bf0) frm_month_g7

0xd89b,	// (0x00068f02) frm_month_g8

0x9591,	// (0x00064bf8) frm_month_g9

0x959a,	// (0x00064c01) frm_month_g10

0x95a3,	// (0x00064c0a) frm_month_g11

0x95ac,	// (0x00064c13) frm_month_g12

0x95b5,	// (0x00064c1c) frm_month_g13

0x95be,	// (0x00064c25) frm_month_g14

0x95c7,	// (0x00064c2e) frm_month_g15

0x95d0,	// (0x00064c37) frm_month_g16

0x000f,

0xfe41,	// (0x0006b4a8) frm_month_g

0x95d9,	// (0x00064c40) cell_top_day_name_pane_t1

0x95e8,	// (0x00064c4f) cell_area_left_week_number_pane_g1

0x95d9,	// (0x00064c40) cell_area_left_week_number_pane_t1

0xc57d,	// (0x00067be4) cell_month_view_pane_g1

0x95f0,	// (0x00064c57) cell_month_view_pane_t1

0x0c38,	// (0x0005c29f) main_fps_pane

0xf031,	// (0x0006a698) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf031,	// (0x0006a698) cmail_ddmenu_btn02_pane_cp1

0xf04d,	// (0x0006a6b4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf04d,	// (0x0006a6b4) cmail_ddmenu_btn02_pane_cp2

0x8e46,	// (0x000644ad) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e46,	// (0x000644ad) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd6b,	// (0x0006b3d2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd6b,	// (0x0006b3d2) cmail_ddmenu_btn02_pane_g

0x8e67,	// (0x000644ce) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8e67,	// (0x000644ce) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd70,	// (0x0006b3d7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd70,	// (0x0006b3d7) cmail_ddmenu_btn02_pane_t

0x95ff,	// (0x00064c66) fps_text_pane_ParamLimits

0x95ff,	// (0x00064c66) fps_text_pane

0x9616,	// (0x00064c7d) main_fps_pane_g1_ParamLimits

0x9616,	// (0x00064c7d) main_fps_pane_g1

0x9630,	// (0x00064c97) wait_bar_pane_cp010_ParamLimits

0x9630,	// (0x00064c97) wait_bar_pane_cp010

0x9641,	// (0x00064ca8) fps_text_pane_t1_ParamLimits

0x9641,	// (0x00064ca8) fps_text_pane_t1

0xeb4b,	// (0x0006a1b2) cam4_image_uncrop_pane_g1

0xeb54,	// (0x0006a1bb) cam4_image_uncrop_pane_g2

0x613e,	// (0x000617a5) cam4_image_uncrop_pane_g3

0x6147,	// (0x000617ae) cam4_image_uncrop_pane_g4

0x0003,

0xf903,	// (0x0006af6a) cam4_image_uncrop_pane_g

0x94d6,	// (0x00064b3d) dia3_listrow_pane_ParamLimits

0x0c38,	// (0x0005c29f) main_phob2_pane

0x89a0,	// (0x00064007) cell_tport_appsw_pane_cp02_ParamLimits

0x89a0,	// (0x00064007) cell_tport_appsw_pane_cp02

0x89b4,	// (0x0006401b) cell_tport_appsw_pane_cp03_ParamLimits

0x89b4,	// (0x0006401b) cell_tport_appsw_pane_cp03

0x0c38,	// (0x0005c29f) phob2_contact_card_pane

0x0c38,	// (0x0005c29f) phob2_listscroll_pane

0xd8a4,	// (0x00068f0b) phob2_list_pane

0xd8ac,	// (0x00068f13) scroll_pane_cp034

0x9659,	// (0x00064cc0) phob2_cc_data_pane_ParamLimits

0x9659,	// (0x00064cc0) phob2_cc_data_pane

0x9678,	// (0x00064cdf) phob2_cc_listscroll_pane_ParamLimits

0x9678,	// (0x00064cdf) phob2_cc_listscroll_pane

0x9696,	// (0x00064cfd) list_double_large_graphic_phob2_pane_ParamLimits

0x9696,	// (0x00064cfd) list_double_large_graphic_phob2_pane

0x96a8,	// (0x00064d0f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x96a8,	// (0x00064d0f) list_double_large_graphic_phob2_pane_g1

0x96b5,	// (0x00064d1c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x96b5,	// (0x00064d1c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe62,	// (0x0006b4c9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe62,	// (0x0006b4c9) list_double_large_graphic_phob2_pane_g

0x96c1,	// (0x00064d28) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x96c1,	// (0x00064d28) list_double_large_graphic_phob2_pane_t1

0x96d6,	// (0x00064d3d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x96d6,	// (0x00064d3d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe67,	// (0x0006b4ce) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe67,	// (0x0006b4ce) list_double_large_graphic_phob2_pane_t

0x0c38,	// (0x0005c29f) list_highlight_pane_cp024

0xd8b4,	// (0x00068f1b) phob2_cc_button_pane

0x96e8,	// (0x00064d4f) phob2_cc_data_pane_g1_ParamLimits

0x96e8,	// (0x00064d4f) phob2_cc_data_pane_g1

0x96fd,	// (0x00064d64) phob2_cc_data_pane_g2_ParamLimits

0x96fd,	// (0x00064d64) phob2_cc_data_pane_g2

0x0001,

0xfe6c,	// (0x0006b4d3) phob2_cc_data_pane_g_ParamLimits

0xfe6c,	// (0x0006b4d3) phob2_cc_data_pane_g

0x970f,	// (0x00064d76) phob2_cc_data_pane_t1_ParamLimits

0x970f,	// (0x00064d76) phob2_cc_data_pane_t1

0x9727,	// (0x00064d8e) phob2_cc_data_pane_t2_ParamLimits

0x9727,	// (0x00064d8e) phob2_cc_data_pane_t2

0x973f,	// (0x00064da6) phob2_cc_data_pane_t3_ParamLimits

0x973f,	// (0x00064da6) phob2_cc_data_pane_t3

0x0002,

0xfe71,	// (0x0006b4d8) phob2_cc_data_pane_t_ParamLimits

0xfe71,	// (0x0006b4d8) phob2_cc_data_pane_t

0xd8bc,	// (0x00068f23) phob2_cc_list_pane_ParamLimits

0xd8bc,	// (0x00068f23) phob2_cc_list_pane

0xe80c,	// (0x00069e73) scroll_pane_cp035_ParamLimits

0xe80c,	// (0x00069e73) scroll_pane_cp035

0x9864,	// (0x00064ecb) bg_button_pane_cp033

0xd8c8,	// (0x00068f2f) phob2_cc_button_pane_g1

0xd8d4,	// (0x00068f3b) phob2_cc_button_pane_t1

0xd8e9,	// (0x00068f50) phob2_cc_button_pane_t2

0x0001,

0xfe78,	// (0x0006b4df) phob2_cc_button_pane_t

0x9757,	// (0x00064dbe) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9757,	// (0x00064dbe) list_double_large_graphic_phob2_cc_pane

0x9769,	// (0x00064dd0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9769,	// (0x00064dd0) list_double_large_graphic_phob2_cc_pane_g1

0x9775,	// (0x00064ddc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9775,	// (0x00064ddc) list_double_large_graphic_phob2_cc_pane_g2

0x9781,	// (0x00064de8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9781,	// (0x00064de8) list_double_large_graphic_phob2_cc_pane_g3

0x978d,	// (0x00064df4) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x978d,	// (0x00064df4) list_double_large_graphic_phob2_cc_pane_g4

0x9799,	// (0x00064e00) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9799,	// (0x00064e00) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe7d,	// (0x0006b4e4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe7d,	// (0x0006b4e4) list_double_large_graphic_phob2_cc_pane_g

0x97a5,	// (0x00064e0c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x97a5,	// (0x00064e0c) list_double_large_graphic_phob2_cc_pane_t1

0x97ce,	// (0x00064e35) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x97ce,	// (0x00064e35) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe88,	// (0x0006b4ef) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe88,	// (0x0006b4ef) list_double_large_graphic_phob2_cc_pane_t

0xd8fb,	// (0x00068f62) list_highlight_pane_cp025_ParamLimits

0xd8fb,	// (0x00068f62) list_highlight_pane_cp025

0x9864,	// (0x00064ecb) bg_button_pane_cp033_ParamLimits

0xd8c8,	// (0x00068f2f) phob2_cc_button_pane_g1_ParamLimits

0xd8d4,	// (0x00068f3b) phob2_cc_button_pane_t1_ParamLimits

0xd8e9,	// (0x00068f50) phob2_cc_button_pane_t2_ParamLimits

0xfe78,	// (0x0006b4df) phob2_cc_button_pane_t_ParamLimits

0x0eb2,	// (0x0005c519) popup_wgtman_window

0xe10e,	// (0x00069775) scroll_pane_cp038

0x9267,	// (0x000648ce) wgtman_btn_pane_cp_01_ParamLimits

0x9267,	// (0x000648ce) wgtman_btn_pane_cp_01

0xd909,	// (0x00068f70) wgtman_content_pane

0xd912,	// (0x00068f79) wgtman_heading_pane

0x0c38,	// (0x0005c29f) bg_heading_pane_cp02

0xd91b,	// (0x00068f82) wgtman_heading_pane_g1

0xd923,	// (0x00068f8a) wgtman_heading_pane_t1

0xd931,	// (0x00068f98) scroll_pane_cp036

0xd939,	// (0x00068fa0) wgtman_list_pane

0xd941,	// (0x00068fa8) wgtman_list_pane_t1_ParamLimits

0xd941,	// (0x00068fa8) wgtman_list_pane_t1

0xdc6c,	// (0x000692d3) cam4_grid_pane

0x6e82,	// (0x000624e9) bg_button_pane_cp015_ParamLimits

0x6e94,	// (0x000624fb) bg_button_pane_cp016_ParamLimits

0x6ea7,	// (0x0006250e) bg_button_pane_cp017_ParamLimits

0x6eff,	// (0x00062566) popup_vitu2_query_window_g3_ParamLimits

0x6eff,	// (0x00062566) popup_vitu2_query_window_g3

0x6fbc,	// (0x00062623) popup_vitu2_query_window_t6_ParamLimits

0x6fbc,	// (0x00062623) popup_vitu2_query_window_t6

0x6fe7,	// (0x0006264e) popup_vitu2_query_window_t7_ParamLimits

0x6fe7,	// (0x0006264e) popup_vitu2_query_window_t7

0xeb4b,	// (0x0006a1b2) cam4_grid_pane_g1

0xeb54,	// (0x0006a1bb) cam4_grid_pane_g2

0xd95e,	// (0x00068fc5) cam4_grid_pane_g3

0xd967,	// (0x00068fce) cam4_grid_pane_g4

0x0003,

0xfe8d,	// (0x0006b4f4) cam4_grid_pane_g

0x1c88,	// (0x0005d2ef) aid_placing_vt_slider_lsc_ParamLimits

0x1f93,	// (0x0005d5fa) vidtel_button_pane_ParamLimits

0x1f93,	// (0x0005d5fa) vidtel_button_pane

0xd972,	// (0x00068fd9) bg_button_pane_cp034

0x97f7,	// (0x00064e5e) vidtel_button_pane_g1

0xd97c,	// (0x00068fe3) vidtel_button_pane_t1

0xe21e,	// (0x00069885) aid_size_vtel_slider_touch

0xe80c,	// (0x00069e73) scroll_pane_cp039

0xeaca,	// (0x0006a131) ncim_query_button_pane_cp01_ParamLimits

0xeae9,	// (0x0006a150) ncimui_query_pane_g1_ParamLimits

0x9864,	// (0x00064ecb) input_focus_pane_cp012_ParamLimits

0xeb0e,	// (0x0006a175) ncim_query_entry_pane_t1_ParamLimits

0xe80c,	// (0x00069e73) scroll_pane_cp039_ParamLimits

0x2de5,	// (0x0005e44c) navi_pane_bcale_mc_g1

0x2ded,	// (0x0005e454) navi_pane_bcale_mc_t1

0xf096,	// (0x0006a6fd) main_sp_fs_email_pane_g1

0xf09e,	// (0x0006a705) main_sp_fs_email_pane_g2

0x0001,

0x08d7,	// (0x0005bf3e) main_sp_fs_email_pane_g

0xd25b,	// (0x000688c2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd25b,	// (0x000688c2) list_single_cale_mrui_row_pane_g3

0x8e8f,	// (0x000644f6) list_single_recal_day_pane_g5_event_pane

0xd420,	// (0x00068a87) list_single_recal_day_pane_g7

0xd98a,	// (0x00068ff1) list_recal_day_event_pane_cp01

0xd993,	// (0x00068ffa) list_recal_vselct_arw_lo_pane_cp01

0xd99b,	// (0x00069002) list_recal_vselct_arw_up_pane_cp01

0xd9a3,	// (0x0006900a) list_recal_vselct_pane_cp01

0xe240,	// (0x000698a7) list_recal_day_event_pane_cp01_g1

0xd9ad,	// (0x00069014) list_recal_day_event_pane_cp01_t1

0xd428,	// (0x00068a8f) list_single_recal_day_pane_t1_ParamLimits

0xd43a,	// (0x00068aa1) list_single_recal_day_pane_t2_ParamLimits

0xfd80,	// (0x0006b3e7) list_single_recal_day_pane_t_ParamLimits

0x9f8b,	// (0x000655f2) bg_notes_pane_ParamLimits

0x9f99,	// (0x00065600) list_notes_pane_ParamLimits

0x11fb,	// (0x0005c862) scroll_pane_cp06_ParamLimits

0x9fdf,	// (0x00065646) main_notes_pane_ParamLimits

0x0c38,	// (0x0005c29f) main_welc_pane

0x97ff,	// (0x00064e66) main_welc_body_pane_ParamLimits

0x97ff,	// (0x00064e66) main_welc_body_pane

0x9814,	// (0x00064e7b) main_welc_opti_pane_ParamLimits

0x9814,	// (0x00064e7b) main_welc_opti_pane

0x9829,	// (0x00064e90) main_welc_pane_t1_ParamLimits

0x9829,	// (0x00064e90) main_welc_pane_t1

0x9840,	// (0x00064ea7) main_welc_body_row_pane_ParamLimits

0x9840,	// (0x00064ea7) main_welc_body_row_pane

0x9854,	// (0x00064ebb) main_welc_opti_row_pane_ParamLimits

0x9854,	// (0x00064ebb) main_welc_opti_row_pane

0xd9bb,	// (0x00069022) main_welc_opti_row_pane_g1

0xd9c3,	// (0x0006902a) main_welc_opti_row_pane_t1

0xd9d2,	// (0x00069039) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
