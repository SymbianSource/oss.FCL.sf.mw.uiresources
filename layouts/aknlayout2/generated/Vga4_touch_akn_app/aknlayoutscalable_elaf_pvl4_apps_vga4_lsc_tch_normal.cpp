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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000d833 };

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
0x0cec,	// (0x0000e51f) Screen

0x0cf8,	// (0x0000e52b) application_window

0x0d34,	// (0x0000e567) area_bottom_pane_ParamLimits

0x0d34,	// (0x0000e567) area_bottom_pane

0x0d6d,	// (0x0000e5a0) area_top_pane_ParamLimits

0x0d6d,	// (0x0000e5a0) area_top_pane

0x9426,	// (0x00016c59) call_video_uplink_pane_ParamLimits

0x9426,	// (0x00016c59) call_video_uplink_pane

0x0de7,	// (0x0000e61a) main_pane_ParamLimits

0x0de7,	// (0x0000e61a) main_pane

0xbdaf,	// (0x000195e2) context_pane

0x3f7d,	// (0x000117b0) navi_pane

0x3fad,	// (0x000117e0) popup_cale_events_window_ParamLimits

0x3fad,	// (0x000117e0) popup_cale_events_window

0xbdc2,	// (0x000195f5) popup_mup_playback_window

0x3fc5,	// (0x000117f8) signal_pane

0x9bad,	// (0x000173e0) main_browser_pane

0xa8f1,	// (0x00018124) main_burst_pane

0x3c7f,	// (0x000114b2) main_calc_pane

0xa8f1,	// (0x00018124) main_cale_day_pane

0x9bad,	// (0x000173e0) main_cale_month_pane

0xa8f1,	// (0x00018124) main_cale_week_pane

0xa8f1,	// (0x00018124) main_call_pane

0x9865,	// (0x00017098) main_call_poc_pane

0xa8f1,	// (0x00018124) main_camera_pane

0xa8f1,	// (0x00018124) main_chi_dic_pane

0xa793,	// (0x00017fc6) main_clock_pane

0x9865,	// (0x00017098) main_fmradio_pane

0xa8f1,	// (0x00018124) main_graph_messa_pane

0x9865,	// (0x00017098) main_help_pane

0x9bad,	// (0x000173e0) main_im_pane

0x9ac0,	// (0x000172f3) main_image_pane_ParamLimits

0x9ac0,	// (0x000172f3) main_image_pane

0x9865,	// (0x00017098) main_location2_pane

0xa8f1,	// (0x00018124) main_location_pane

0x9865,	// (0x00017098) main_messa_pane

0x9865,	// (0x00017098) main_mp2_pane

0xa8f1,	// (0x00018124) main_mp_pane

0x9865,	// (0x00017098) main_msg_pane

0x9865,	// (0x00017098) main_mup_eq_pane

0x9865,	// (0x00017098) main_mup_pane

0xa8f1,	// (0x00018124) main_notes_pane

0x9865,	// (0x00017098) main_pec_pane

0x9865,	// (0x00017098) main_phob_pane

0x9865,	// (0x00017098) main_pinb_pane

0x9865,	// (0x00017098) main_postcard_pane

0x9865,	// (0x00017098) main_qdial_pane

0xa8f1,	// (0x00018124) main_skin_pane

0x9865,	// (0x00017098) main_smil2_pane

0xa8f1,	// (0x00018124) main_smil_pane

0xa8f1,	// (0x00018124) main_video_pane

0xa8f1,	// (0x00018124) main_video_tele_pane

0x9ac0,	// (0x000172f3) main_viewer_pane_ParamLimits

0x9ac0,	// (0x000172f3) main_viewer_pane

0xa8f1,	// (0x00018124) main_vorec_pane

0x3cd5,	// (0x00011508) popup_blid_sat_info_window_ParamLimits

0x3cd5,	// (0x00011508) popup_blid_sat_info_window

0x3d39,	// (0x0001156c) popup_dyc_status_message_window_ParamLimits

0x3d39,	// (0x0001156c) popup_dyc_status_message_window

0x3d53,	// (0x00011586) popup_grid_large_graphic_window_ParamLimits

0x3d53,	// (0x00011586) popup_grid_large_graphic_window

0x3e15,	// (0x00011648) popup_loc_request_window_ParamLimits

0x3e15,	// (0x00011648) popup_loc_request_window

0x3f51,	// (0x00011784) popup_wml_address_window_ParamLimits

0x3f51,	// (0x00011784) popup_wml_address_window

0x3abd,	// (0x000112f0) call_muted_g1

0x374e,	// (0x00010f81) popup_call_audio_conf_window_ParamLimits

0x374e,	// (0x00010f81) popup_call_audio_conf_window

0x3acd,	// (0x00011300) popup_call_audio_first_window_ParamLimits

0x3acd,	// (0x00011300) popup_call_audio_first_window

0x3b43,	// (0x00011376) popup_call_audio_in_window_ParamLimits

0x3b43,	// (0x00011376) popup_call_audio_in_window

0x3b7f,	// (0x000113b2) popup_call_audio_out_window_ParamLimits

0x3b7f,	// (0x000113b2) popup_call_audio_out_window

0x3bb9,	// (0x000113ec) popup_call_audio_second_window_ParamLimits

0x3bb9,	// (0x000113ec) popup_call_audio_second_window

0x3c0f,	// (0x00011442) popup_call_audio_wait_window_ParamLimits

0x3c0f,	// (0x00011442) popup_call_audio_wait_window

0x3c44,	// (0x00011477) popup_number_entry_window_ParamLimits

0x3c44,	// (0x00011477) popup_number_entry_window

0x9452,	// (0x00016c85) bg_popup_call_pane_cp05_ParamLimits

0x9452,	// (0x00016c85) bg_popup_call_pane_cp05

0x9472,	// (0x00016ca5) popup_number_entry_window_t1

0x9485,	// (0x00016cb8) popup_number_entry_window_t2

0x9497,	// (0x00016cca) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0001c92e) popup_number_entry_window_t

0x94a9,	// (0x00016cdc) text_title_cp2

0x94bc,	// (0x00016cef) bg_popup_call_pane_cp_ParamLimits

0x94bc,	// (0x00016cef) bg_popup_call_pane_cp

0x94ca,	// (0x00016cfd) call_thumbnail_pane

0x94d2,	// (0x00016d05) popup_call_audio_in_window_g1_ParamLimits

0x94d2,	// (0x00016d05) popup_call_audio_in_window_g1

0x94de,	// (0x00016d11) popup_call_audio_in_window_g2_ParamLimits

0x94de,	// (0x00016d11) popup_call_audio_in_window_g2

0x94ea,	// (0x00016d1d) popup_call_audio_in_window_g3_ParamLimits

0x94ea,	// (0x00016d1d) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0001c937) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0001c937) popup_call_audio_in_window_g

0x94f6,	// (0x00016d29) popup_call_audio_in_window_t1_ParamLimits

0x94f6,	// (0x00016d29) popup_call_audio_in_window_t1

0x9512,	// (0x00016d45) popup_call_audio_in_window_t2_ParamLimits

0x9512,	// (0x00016d45) popup_call_audio_in_window_t2

0x952e,	// (0x00016d61) popup_call_audio_in_window_t3_ParamLimits

0x952e,	// (0x00016d61) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0001c93e) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0001c93e) popup_call_audio_in_window_t

0x94bc,	// (0x00016cef) bg_popup_call_pane_cp01_ParamLimits

0x94bc,	// (0x00016cef) bg_popup_call_pane_cp01

0x94ca,	// (0x00016cfd) call_thumbnail_pane_cp02

0x9541,	// (0x00016d74) call_type_pane_cp022

0x9549,	// (0x00016d7c) popup_call_audio_out_window_g1_ParamLimits

0x9549,	// (0x00016d7c) popup_call_audio_out_window_g1

0x955b,	// (0x00016d8e) popup_call_audio_out_window_g2_ParamLimits

0x955b,	// (0x00016d8e) popup_call_audio_out_window_g2

0x9567,	// (0x00016d9a) popup_call_audio_out_window_g3_ParamLimits

0x9567,	// (0x00016d9a) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0001c945) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0001c945) popup_call_audio_out_window_g

0x9579,	// (0x00016dac) popup_call_audio_out_window_t1_ParamLimits

0x9579,	// (0x00016dac) popup_call_audio_out_window_t1

0x9591,	// (0x00016dc4) popup_call_audio_out_window_t2_ParamLimits

0x9591,	// (0x00016dc4) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0001c94c) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0001c94c) popup_call_audio_out_window_t

0x95a6,	// (0x00016dd9) bg_popup_call_pane_ParamLimits

0x95a6,	// (0x00016dd9) bg_popup_call_pane

0x0fa6,	// (0x0000e7d9) call_thumbnail_pane_cp_ParamLimits

0x0fa6,	// (0x0000e7d9) call_thumbnail_pane_cp

0x962a,	// (0x00016e5d) call_type_pane_cp01_ParamLimits

0x962a,	// (0x00016e5d) call_type_pane_cp01

0x966e,	// (0x00016ea1) popup_call_audio_first_window_g1_ParamLimits

0x966e,	// (0x00016ea1) popup_call_audio_first_window_g1

0x96ba,	// (0x00016eed) popup_call_audio_first_window_g2_ParamLimits

0x96ba,	// (0x00016eed) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0001c951) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0001c951) popup_call_audio_first_window_g

0x96fe,	// (0x00016f31) popup_call_audio_first_window_t1_ParamLimits

0x96fe,	// (0x00016f31) popup_call_audio_first_window_t1

0x97aa,	// (0x00016fdd) popup_call_audio_first_window_t4_ParamLimits

0x97aa,	// (0x00016fdd) popup_call_audio_first_window_t4

0x9836,	// (0x00017069) popup_call_audio_first_window_t5_ParamLimits

0x9836,	// (0x00017069) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0001c956) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0001c956) popup_call_audio_first_window_t

0x9865,	// (0x00017098) bg_popup_call_pane_cp02

0x986f,	// (0x000170a2) call_type_pane_cp023

0x9877,	// (0x000170aa) popup_call_audio_wait_window_g1

0x987f,	// (0x000170b2) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0001c95d) popup_call_audio_wait_window_g

0x9887,	// (0x000170ba) popup_call_audio_wait_window_t3

0x9895,	// (0x000170c8) bg_popup_call_pane_cp03_ParamLimits

0x9895,	// (0x000170c8) bg_popup_call_pane_cp03

0x98f5,	// (0x00017128) call_thumbnail_pane_cp011_ParamLimits

0x98f5,	// (0x00017128) call_thumbnail_pane_cp011

0x9901,	// (0x00017134) call_type_pane_cp034_ParamLimits

0x9901,	// (0x00017134) call_type_pane_cp034

0x993d,	// (0x00017170) popup_call_audio_second_window_g1_ParamLimits

0x993d,	// (0x00017170) popup_call_audio_second_window_g1

0x9979,	// (0x000171ac) popup_call_audio_second_window_g2_ParamLimits

0x9979,	// (0x000171ac) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0001c962) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0001c962) popup_call_audio_second_window_g

0x99b5,	// (0x000171e8) popup_call_audio_second_window_t1_ParamLimits

0x99b5,	// (0x000171e8) popup_call_audio_second_window_t1

0x9a36,	// (0x00017269) popup_call_audio_second_window_t2_ParamLimits

0x9a36,	// (0x00017269) popup_call_audio_second_window_t2

0x9a6c,	// (0x0001729f) popup_call_audio_second_window_t3_ParamLimits

0x9a6c,	// (0x0001729f) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0001c967) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0001c967) popup_call_audio_second_window_t

0x9865,	// (0x00017098) bg_popup_call_pane_cp04

0x9aa2,	// (0x000172d5) list_conf_pane

0x9aaa,	// (0x000172dd) popup_call_audio_conf_window_t1

0x9ab8,	// (0x000172eb) call_thumbnail_pane_g1

0x9ac0,	// (0x000172f3) bg_pinb_pane_ParamLimits

0x9ac0,	// (0x000172f3) bg_pinb_pane

0x9ace,	// (0x00017301) find_pinb_pane

0x9ad7,	// (0x0001730a) listscroll_pinb_pane_ParamLimits

0x9ad7,	// (0x0001730a) listscroll_pinb_pane

0x9ae6,	// (0x00017319) pinb_bg_pane_g1

0x0fca,	// (0x0000e7fd) pinb_bg_pane_g2

0x0fd6,	// (0x0000e809) pinb_bg_pane_g3

0x0fe2,	// (0x0000e815) pinb_bg_pane_g4

0x0fee,	// (0x0000e821) pinb_bg_pane_g5

0x0ffa,	// (0x0000e82d) pinb_bg_pane_g6

0x1005,	// (0x0000e838) pinb_bg_pane_g7

0x1010,	// (0x0000e843) pinb_bg_pane_g8

0x101b,	// (0x0000e84e) pinb_bg_pane_g9

0x1025,	// (0x0000e858) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0001c96e) pinb_bg_pane_g

0x1042,	// (0x0000e875) grid_pinb_pane

0x104d,	// (0x0000e880) list_pinb_pane

0x1058,	// (0x0000e88b) scroll_pane_cp01_ParamLimits

0x1058,	// (0x0000e88b) scroll_pane_cp01

0x9af0,	// (0x00017323) find_pinb_pane_g1_ParamLimits

0x9af0,	// (0x00017323) find_pinb_pane_g1

0x9b08,	// (0x0001733b) find_pinb_pane_t1

0x9b1a,	// (0x0001734d) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0001c988) find_pinb_pane_t

0x9b2f,	// (0x00017362) input_focus_pane_cp01_ParamLimits

0x9b2f,	// (0x00017362) input_focus_pane_cp01

0x106a,	// (0x0000e89d) cell_pinb_pane_ParamLimits

0x106a,	// (0x0000e89d) cell_pinb_pane

0x108c,	// (0x0000e8bf) cell_pinb_pane_g1_ParamLimits

0x108c,	// (0x0000e8bf) cell_pinb_pane_g1

0x10a0,	// (0x0000e8d3) cell_pinb_pane_g2_ParamLimits

0x10a0,	// (0x0000e8d3) cell_pinb_pane_g2

0x9b3b,	// (0x0001736e) cell_pinb_pane_g3_ParamLimits

0x9b3b,	// (0x0001736e) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0001c98d) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0001c98d) cell_pinb_pane_g

0x9865,	// (0x00017098) grid_highlight_pane_cp01

0x10ac,	// (0x0000e8df) list_pinb_item_pane_ParamLimits

0x10ac,	// (0x0000e8df) list_pinb_item_pane

0x9865,	// (0x00017098) list_highlight_pane_cp02

0x10bf,	// (0x0000e8f2) list_pinb_item_pane_g1_ParamLimits

0x10bf,	// (0x0000e8f2) list_pinb_item_pane_g1

0x10cc,	// (0x0000e8ff) list_pinb_item_pane_g2_ParamLimits

0x10cc,	// (0x0000e8ff) list_pinb_item_pane_g2

0x10d8,	// (0x0000e90b) list_pinb_item_pane_g3_ParamLimits

0x10d8,	// (0x0000e90b) list_pinb_item_pane_g3

0x10e9,	// (0x0000e91c) list_pinb_item_pane_g4_ParamLimits

0x10e9,	// (0x0000e91c) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0001c994) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0001c994) list_pinb_item_pane_g

0x10f5,	// (0x0000e928) list_pinb_item_pane_t1_ParamLimits

0x10f5,	// (0x0000e928) list_pinb_item_pane_t1

0x112a,	// (0x0000e95d) calc_display_pane

0x1150,	// (0x0000e983) calc_paper_pane

0x1173,	// (0x0000e9a6) grid_calc_pane

0x9865,	// (0x00017098) bg_list_pane_cp01

0x11a1,	// (0x0000e9d4) clock_g1

0x11a9,	// (0x0000e9dc) clock_g2

0x0001,

0xf16a,	// (0x0001c99d) clock_g

0x11b1,	// (0x0000e9e4) clock_t1_ParamLimits

0x11b1,	// (0x0000e9e4) clock_t1

0x11c6,	// (0x0000e9f9) clock_t2_ParamLimits

0x11c6,	// (0x0000e9f9) clock_t2

0x11d8,	// (0x0000ea0b) clock_t3_ParamLimits

0x11d8,	// (0x0000ea0b) clock_t3

0x11ea,	// (0x0000ea1d) clock_t4_ParamLimits

0x11ea,	// (0x0000ea1d) clock_t4

0x11fc,	// (0x0000ea2f) clock_t5_ParamLimits

0x11fc,	// (0x0000ea2f) clock_t5

0x1211,	// (0x0000ea44) clock_t6_ParamLimits

0x1211,	// (0x0000ea44) clock_t6

0x1223,	// (0x0000ea56) clock_t7_ParamLimits

0x1223,	// (0x0000ea56) clock_t7

0x1235,	// (0x0000ea68) clock_t8_ParamLimits

0x1235,	// (0x0000ea68) clock_t8

0x1249,	// (0x0000ea7c) clock_t9_ParamLimits

0x1249,	// (0x0000ea7c) clock_t9

0x0008,

0xf16f,	// (0x0001c9a2) clock_t_ParamLimits

0xf16f,	// (0x0001c9a2) clock_t

0x9b4f,	// (0x00017382) popup_clock_analogue_window_cp02

0x9b4f,	// (0x00017382) popup_clock_digital_window_cp01

0x9b57,	// (0x0001738a) listscroll_help_pane

0x9865,	// (0x00017098) phob_pre_status_pane

0x9b61,	// (0x00017394) grid_qdial_pane

0x9865,	// (0x00017098) listscroll_mce_pane

0x9b6b,	// (0x0001739e) bg_notes_pane

0x9b75,	// (0x000173a8) list_notes_pane

0x125f,	// (0x0000ea92) scroll_pane_cp06

0x9b7f,	// (0x000173b2) bg_calc_paper_pane

0x9b93,	// (0x000173c6) list_calc_pane

0x9bad,	// (0x000173e0) bg_calc_display_pane

0x126a,	// (0x0000ea9d) calc_display_pane_t1

0x127c,	// (0x0000eaaf) calc_display_pane_t2

0x9bb9,	// (0x000173ec) calc_display_pane_t3

0x0002,

0xf182,	// (0x0001c9b5) calc_display_pane_t

0x128e,	// (0x0000eac1) cell_calc_pane_ParamLimits

0x128e,	// (0x0000eac1) cell_calc_pane

0x9bcb,	// (0x000173fe) bg_calc_paper_pane_g1

0x9bd7,	// (0x0001740a) bg_calc_paper_pane_g2

0x9be3,	// (0x00017416) bg_calc_paper_pane_g3

0x9bef,	// (0x00017422) bg_calc_paper_pane_g4

0x9bfb,	// (0x0001742e) bg_calc_paper_pane_g5

0x12c9,	// (0x0000eafc) bg_calc_paper_pane_g6

0x12dc,	// (0x0000eb0f) bg_calc_paper_pane_g7

0x12ef,	// (0x0000eb22) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0001c9bc) bg_calc_paper_pane_g

0x1300,	// (0x0000eb33) calc_bg_paper_pane_g9

0x1311,	// (0x0000eb44) list_calc_item_pane_ParamLimits

0x1311,	// (0x0000eb44) list_calc_item_pane

0x9c07,	// (0x0001743a) list_calc_item_pane_g1

0x9c14,	// (0x00017447) list_calc_item_pane_t1_ParamLimits

0x9c14,	// (0x00017447) list_calc_item_pane_t1

0x1325,	// (0x0000eb58) list_calc_item_pane_t2_ParamLimits

0x1325,	// (0x0000eb58) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0001c9cd) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0001c9cd) list_calc_item_pane_t

0x9c26,	// (0x00017459) cell_calc_pane_g1

0x9c30,	// (0x00017463) grid_highlight_pane_cp02

0x9c52,	// (0x00017485) bg_calc_display_pane_g1

0x9c5b,	// (0x0001748e) bg_calc_display_pane_g2

0x9c65,	// (0x00017498) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0001c9d7) bg_calc_display_pane_g

0x1357,	// (0x0000eb8a) cell_qdial_pane_ParamLimits

0x1357,	// (0x0000eb8a) cell_qdial_pane

0x136d,	// (0x0000eba0) cell_qdial_pane_g1_ParamLimits

0x136d,	// (0x0000eba0) cell_qdial_pane_g1

0x1383,	// (0x0000ebb6) cell_qdial_pane_g2_ParamLimits

0x1383,	// (0x0000ebb6) cell_qdial_pane_g2

0x9c6e,	// (0x000174a1) cell_qdial_pane_g3_ParamLimits

0x9c6e,	// (0x000174a1) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0001c9de) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0001c9de) cell_qdial_pane_g

0x13a9,	// (0x0000ebdc) cell_qdial_pane_t1_ParamLimits

0x13a9,	// (0x0000ebdc) cell_qdial_pane_t1

0x13c1,	// (0x0000ebf4) cell_qdial_pane_t2_ParamLimits

0x13c1,	// (0x0000ebf4) cell_qdial_pane_t2

0x13d4,	// (0x0000ec07) cell_qdial_pane_t3_ParamLimits

0x13d4,	// (0x0000ec07) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0001c9e7) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0001c9e7) cell_qdial_pane_t

0x9865,	// (0x00017098) grid_highlight_pane_cp04

0x9c7a,	// (0x000174ad) thumbnail_qdial_pane_ParamLimits

0x9c7a,	// (0x000174ad) thumbnail_qdial_pane

0x9cd6,	// (0x00017509) list_help_pane

0x9cdf,	// (0x00017512) scroll_pane_cp02

0x13e7,	// (0x0000ec1a) help_list_pane_t1_ParamLimits

0x13e7,	// (0x0000ec1a) help_list_pane_t1

0x9ce8,	// (0x0001751b) bg_notes_pane_g2

0x9cf0,	// (0x00017523) bg_notes_pane_g3

0x9cf8,	// (0x0001752b) notes_bg_pane_g1

0x9d00,	// (0x00017533) notes_bg_pane_g4

0x9d08,	// (0x0001753b) notes_bg_pane_g5

0x9d10,	// (0x00017543) notes_bg_pane_g6

0x9d18,	// (0x0001754b) notes_bg_pane_g7

0x9d20,	// (0x00017553) notes_bg_pane_g8

0x9d28,	// (0x0001755b) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0001ca05) notes_bg_pane_g

0x140b,	// (0x0000ec3e) list_notes_text_pane_ParamLimits

0x140b,	// (0x0000ec3e) list_notes_text_pane

0x9d30,	// (0x00017563) list_notes_text_pane_g1

0x9d39,	// (0x0001756c) list_notes_text_pane_t1

0x9bad,	// (0x000173e0) listscroll_cale_week_pane

0x143f,	// (0x0000ec72) bg_cale_heading_pane

0x9d58,	// (0x0001758b) bg_cale_pane_cp01

0x145b,	// (0x0000ec8e) cale_week_corner_pane

0x1471,	// (0x0000eca4) cale_week_day_heading_pane

0x148d,	// (0x0000ecc0) cale_week_scroll_pane_g1

0x14a6,	// (0x0000ecd9) cale_week_scroll_pane_g2

0x14b7,	// (0x0000ecea) cale_week_scroll_pane_g3

0x14c8,	// (0x0000ecfb) cale_week_scroll_pane_g4

0x14d9,	// (0x0000ed0c) cale_week_scroll_pane_g5

0x14ea,	// (0x0000ed1d) cale_week_scroll_pane_g6

0x14fb,	// (0x0000ed2e) cale_week_scroll_pane_g7

0x150c,	// (0x0000ed3f) cale_week_scroll_pane_g8

0x151d,	// (0x0000ed50) cale_week_scroll_pane_g9

0x152e,	// (0x0000ed61) cale_week_scroll_pane_g10

0x153f,	// (0x0000ed72) cale_week_scroll_pane_g11

0x1550,	// (0x0000ed83) cale_week_scroll_pane_g12

0x1561,	// (0x0000ed94) cale_week_scroll_pane_g13

0x157a,	// (0x0000edad) cale_week_scroll_pane_g14

0x1593,	// (0x0000edc6) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0001ca14) cale_week_scroll_pane_g

0x15ac,	// (0x0000eddf) cale_week_time_pane

0x15bd,	// (0x0000edf0) grid_cale_week_pane

0x15d8,	// (0x0000ee0b) scroll_pane_cp08

0x15f0,	// (0x0000ee23) cell_cale_week_pane_ParamLimits

0x15f0,	// (0x0000ee23) cell_cale_week_pane

0x1638,	// (0x0000ee6b) cale_week_day_heading_pane_t1

0x164c,	// (0x0000ee7f) cale_week_day_heading_pane_t2

0x1660,	// (0x0000ee93) cale_week_day_heading_pane_t3

0x1674,	// (0x0000eea7) cale_week_day_heading_pane_t4

0x1688,	// (0x0000eebb) cale_week_day_heading_pane_t5

0x169c,	// (0x0000eecf) cale_week_day_heading_pane_t6

0x16b0,	// (0x0000eee3) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0001ca33) cale_week_day_heading_pane_t

0x9d83,	// (0x000175b6) bg_cale_side_pane

0x16c4,	// (0x0000eef7) cale_week_time_pane_t1

0x16dc,	// (0x0000ef0f) cale_week_time_pane_t2

0x16f4,	// (0x0000ef27) cale_week_time_pane_t3

0x170c,	// (0x0000ef3f) cale_week_time_pane_t4

0x1724,	// (0x0000ef57) cale_week_time_pane_t5

0x173c,	// (0x0000ef6f) cale_week_time_pane_t6

0x1754,	// (0x0000ef87) cale_week_time_pane_t7

0x1770,	// (0x0000efa3) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0001ca42) cale_week_time_pane_t

0x1790,	// (0x0000efc3) cell_cale_week_pane_g2

0x17a1,	// (0x0000efd4) cell_cale_week_pane_g3_ParamLimits

0x17a1,	// (0x0000efd4) cell_cale_week_pane_g3

0x9d91,	// (0x000175c4) grid_highlight_pane_cp07

0x9d99,	// (0x000175cc) listscroll_gms_pane

0x9da3,	// (0x000175d6) grid_gms_pane

0x9dac,	// (0x000175df) listscroll_gms_pane_g1

0x9db4,	// (0x000175e7) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0001ca53) listscroll_gms_pane_g

0x17b9,	// (0x0000efec) scroll_pane_cp010

0x17c4,	// (0x0000eff7) cell_gms_pane_ParamLimits

0x17c4,	// (0x0000eff7) cell_gms_pane

0x17de,	// (0x0000f011) cell_gms_pane_g1

0x9dbc,	// (0x000175ef) cell_gms_pane_g2

0x9dc4,	// (0x000175f7) cell_gms_pane_g3

0x9dcd,	// (0x00017600) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0001ca58) cell_gms_pane_g

0x9dd6,	// (0x00017609) grid_highlight_pane_cp09

0x3a65,	// (0x00011298) phob_pre_status_pane_g1

0x3a6d,	// (0x000112a0) phob_pre_status_pane_g2

0x3a75,	// (0x000112a8) phob_pre_status_pane_g3

0x3a7d,	// (0x000112b0) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0001ce47) phob_pre_status_pane_g

0x3a8d,	// (0x000112c0) phob_pre_status_pane_t1

0x3a9d,	// (0x000112d0) phob_pre_status_pane_t2

0x3aad,	// (0x000112e0) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0001ce52) phob_pre_status_pane_t

0x9865,	// (0x00017098) bg_list_pane_cp05

0x17ee,	// (0x0000f021) grid_vorec_pane

0x9dde,	// (0x00017611) vorec_t1

0x9dec,	// (0x0001761f) vorec_t2

0x9dfa,	// (0x0001762d) vorec_t3

0x9e08,	// (0x0001763b) vorec_t4

0x9e16,	// (0x00017649) vorec_t5

0x9e24,	// (0x00017657) vorec_t6

0x0006,

0xf22e,	// (0x0001ca61) vorec_t

0x9e40,	// (0x00017673) wait_bar_pane_cp01

0x17f8,	// (0x0000f02b) cell_vorec_pane_ParamLimits

0x17f8,	// (0x0000f02b) cell_vorec_pane

0x9e48,	// (0x0001767b) cell_vorec_pane_g1

0x9865,	// (0x00017098) grid_highlight_pane_cp05

0x1823,	// (0x0000f056) cams_zoom_pane

0x1832,	// (0x0000f065) image_vga_pane

0x184c,	// (0x0000f07f) main_camera_pane_g1

0x185e,	// (0x0000f091) main_camera_pane_g2

0x186e,	// (0x0000f0a1) main_camera_pane_g3

0x1882,	// (0x0000f0b5) main_camera_pane_g4

0x1896,	// (0x0000f0c9) main_camera_pane_g5

0x18aa,	// (0x0000f0dd) main_camera_pane_g6

0x18be,	// (0x0000f0f1) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0001ca70) main_camera_pane_g

0x18d2,	// (0x0000f105) main_camera_pane_t1

0x18e8,	// (0x0000f11b) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0001ca81) main_camera_pane_t

0x1926,	// (0x0000f159) cams_zoom_pane_cp_ParamLimits

0x1926,	// (0x0000f159) cams_zoom_pane_cp

0x194e,	// (0x0000f181) image_cif_pane_ParamLimits

0x194e,	// (0x0000f181) image_cif_pane

0x1989,	// (0x0000f1bc) image_subqcif_pane

0x1993,	// (0x0000f1c6) main_video_pane_g1_ParamLimits

0x1993,	// (0x0000f1c6) main_video_pane_g1

0x19b7,	// (0x0000f1ea) main_video_pane_g2_ParamLimits

0x19b7,	// (0x0000f1ea) main_video_pane_g2

0x19ed,	// (0x0000f220) main_video_pane_g3_ParamLimits

0x19ed,	// (0x0000f220) main_video_pane_g3

0x1a1b,	// (0x0000f24e) main_video_pane_g4_ParamLimits

0x1a1b,	// (0x0000f24e) main_video_pane_g4

0x1a49,	// (0x0000f27c) main_video_pane_g5_ParamLimits

0x1a49,	// (0x0000f27c) main_video_pane_g5

0x9e5e,	// (0x00017691) main_video_pane_g6_ParamLimits

0x9e5e,	// (0x00017691) main_video_pane_g6

0x0006,

0xf253,	// (0x0001ca86) main_video_pane_g_ParamLimits

0xf253,	// (0x0001ca86) main_video_pane_g

0x1a72,	// (0x0000f2a5) main_video_pane_t1_ParamLimits

0x1a72,	// (0x0000f2a5) main_video_pane_t1

0x9e78,	// (0x000176ab) cams_zoom_pane_g1

0x9e81,	// (0x000176b4) cams_zoom_pane_g2

0x9e8a,	// (0x000176bd) cams_zoom_pane_g3

0x9e93,	// (0x000176c6) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0001ca95) cams_zoom_pane_g

0x1acf,	// (0x0000f302) grid_cams_pane

0x1ae9,	// (0x0000f31c) linegrid_cams_pane

0x1afd,	// (0x0000f330) cell_cams_pane_ParamLimits

0x1afd,	// (0x0000f330) cell_cams_pane

0x9e9c,	// (0x000176cf) cams_burst_image_pane

0x9ea4,	// (0x000176d7) cell_cams_pane_g1

0x9865,	// (0x00017098) grid_highlight_pane_cp03

0x9c26,	// (0x00017459) mp_bg_pane_g1

0x9865,	// (0x00017098) bg_list_pane_cp03

0xbc81,	// (0x000194b4) bg_mp_pane

0xbc89,	// (0x000194bc) grid_mp_pane

0xbc91,	// (0x000194c4) media_player_g1

0xbc9b,	// (0x000194ce) media_player_t1

0xbca9,	// (0x000194dc) media_player_t2

0xbcb7,	// (0x000194ea) media_player_t3

0xbcc5,	// (0x000194f8) media_player_t4

0xbcd3,	// (0x00019506) media_player_t5

0xbce1,	// (0x00019514) media_player_t6

0xbcef,	// (0x00019522) media_player_t7

0x0006,

0xf5fe,	// (0x0001ce31) media_player_t

0xbcfd,	// (0x00019530) wait_bar_pane_cp02

0xf5e3,	// (0x0001ce16) main_usb_pane_t

0x3a5c,	// (0x0001128f) cell_mp_pane

0x9c26,	// (0x00017459) cell_mp_pane_g1

0x9865,	// (0x00017098) grid_highlight_pane_cp06

0x9f6a,	// (0x0001779d) grid_skin_colour_pane

0x9f72,	// (0x000177a5) list_highlight_pane_cp03

0x1b71,	// (0x0000f3a4) skin_g1

0x9f7a,	// (0x000177ad) skin_t1

0x9f89,	// (0x000177bc) skin_t2

0x0001,

0xf297,	// (0x0001caca) skin_t

0x1b7b,	// (0x0000f3ae) cell_skin_colour_pane_ParamLimits

0x1b7b,	// (0x0000f3ae) cell_skin_colour_pane

0x9f97,	// (0x000177ca) cell_skin_colour_pane_g1

0x1bd7,	// (0x0000f40a) call_video_g1_ParamLimits

0x1bd7,	// (0x0000f40a) call_video_g1

0x1bf3,	// (0x0000f426) call_video_g2_ParamLimits

0x1bf3,	// (0x0000f426) call_video_g2

0x0001,

0xf29c,	// (0x0001cacf) call_video_g_ParamLimits

0xf29c,	// (0x0001cacf) call_video_g

0x1c29,	// (0x0000f45c) call_video_uplink_pane_cp1_ParamLimits

0x1c29,	// (0x0000f45c) call_video_uplink_pane_cp1

0x9fb1,	// (0x000177e4) call_video_uplink_pane_cp2

0x1ca9,	// (0x0000f4dc) video_down_crop_pane_ParamLimits

0x1ca9,	// (0x0000f4dc) video_down_crop_pane

0x1d6f,	// (0x0000f5a2) video_down_pane_ParamLimits

0x1d6f,	// (0x0000f5a2) video_down_pane

0x9fb9,	// (0x000177ec) video_down_subqcif_pane_ParamLimits

0x9fb9,	// (0x000177ec) video_down_subqcif_pane

0x9fd3,	// (0x00017806) video_down_subqcif_pane_cp_ParamLimits

0x9fd3,	// (0x00017806) video_down_subqcif_pane_cp

0x9ff9,	// (0x0001782c) im_reading_pane_ParamLimits

0x9ff9,	// (0x0001782c) im_reading_pane

0x1e3b,	// (0x0000f66e) im_writing_pane_ParamLimits

0x1e3b,	// (0x0000f66e) im_writing_pane

0x1e59,	// (0x0000f68c) im_reading_pane_t1

0xa013,	// (0x00017846) list_im_pane

0xa024,	// (0x00017857) scroll_pane_cp07

0x1e98,	// (0x0000f6cb) im_writing_pane_t1_ParamLimits

0x1e98,	// (0x0000f6cb) im_writing_pane_t1

0xa03d,	// (0x00017870) im_writing_pane_t2_ParamLimits

0xa03d,	// (0x00017870) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0001cad9) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0001cad9) im_writing_pane_t

0x9865,	// (0x00017098) input_focus_pane_cp04

0x9865,	// (0x00017098) input_focus_pane_cp05

0x1ead,	// (0x0000f6e0) list_im_single_pane_ParamLimits

0x1ead,	// (0x0000f6e0) list_im_single_pane

0x1ec6,	// (0x0000f6f9) list_single_im_pane_t1

0x3a1c,	// (0x0001124f) blid_accuracy_pane

0x3a24,	// (0x00011257) blid_compass_pane

0x3a2e,	// (0x00011261) main_location_t1

0x3a3e,	// (0x00011271) main_location_t2

0x3a4e,	// (0x00011281) main_location_t3

0x0002,

0xf60d,	// (0x0001ce40) main_location_t

0x9865,	// (0x00017098) aid_levels_location

0x9c26,	// (0x00017459) blid_accuracy_pane_g1

0x9c26,	// (0x00017459) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0001cb3b) blid_accuracy_pane_g

0xa085,	// (0x000178b8) wml_content_pane

0xa0c3,	// (0x000178f6) wml_button_pane_ParamLimits

0xa0c3,	// (0x000178f6) wml_button_pane

0x1ed5,	// (0x0000f708) wml_list_single_large_pane_ParamLimits

0x1ed5,	// (0x0000f708) wml_list_single_large_pane

0x1eee,	// (0x0000f721) wml_list_single_medium_pane_ParamLimits

0x1eee,	// (0x0000f721) wml_list_single_medium_pane

0x1f08,	// (0x0000f73b) wml_list_single_small_pane_ParamLimits

0x1f08,	// (0x0000f73b) wml_list_single_small_pane

0xa0d7,	// (0x0001790a) wml_selection_box_pane_ParamLimits

0xa0d7,	// (0x0001790a) wml_selection_box_pane

0xa0ea,	// (0x0001791d) wml_list_single_pane_t1

0xa0f9,	// (0x0001792c) wml_list_single_medium_pane_t1

0xa108,	// (0x0001793b) wml_list_single_large_pane_t1

0xa117,	// (0x0001794a) input_focus_pane_cp02_ParamLimits

0xa117,	// (0x0001794a) input_focus_pane_cp02

0xa12a,	// (0x0001795d) wml_selection_box_pane_g1

0xa133,	// (0x00017966) wml_selection_box_pane_t1_ParamLimits

0xa133,	// (0x00017966) wml_selection_box_pane_t1

0x9ac0,	// (0x000172f3) bg_wml_button_pane_ParamLimits

0x9ac0,	// (0x000172f3) bg_wml_button_pane

0xa14b,	// (0x0001797e) wml_button_pane_g1

0xa153,	// (0x00017986) wml_button_pane_t1

0xa14b,	// (0x0001797e) wml_button_bg_pane_g1

0xa163,	// (0x00017996) wml_button_bg_pane_g2

0xa16b,	// (0x0001799e) wml_button_bg_pane_g3

0xa173,	// (0x000179a6) wml_button_bg_pane_g4

0xa17b,	// (0x000179ae) wml_button_bg_pane_g5

0xa183,	// (0x000179b6) wml_button_bg_pane_g6

0xa18b,	// (0x000179be) wml_button_bg_pane_g7

0xa193,	// (0x000179c6) wml_button_bg_pane_g8

0xa19b,	// (0x000179ce) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0001cade) wml_button_bg_pane_g

0x1f27,	// (0x0000f75a) bg_list_pane_cp02

0xa1a3,	// (0x000179d6) mce_header_pane_ParamLimits

0xa1a3,	// (0x000179d6) mce_header_pane

0xa1b9,	// (0x000179ec) mce_icon_pane

0xa1b9,	// (0x000179ec) mce_image_pane

0xa1c2,	// (0x000179f5) mce_text_pane_ParamLimits

0xa1c2,	// (0x000179f5) mce_text_pane

0x1f31,	// (0x0000f764) scroll_pane_cp03

0xa0bb,	// (0x000178ee) scroll_pane_cp04

0xa1d5,	// (0x00017a08) scroll_pane_cp05_ParamLimits

0xa1d5,	// (0x00017a08) scroll_pane_cp05

0x1f3b,	// (0x0000f76e) mce_header_field_pane_ParamLimits

0x1f3b,	// (0x0000f76e) mce_header_field_pane

0x1f54,	// (0x0000f787) mce_header_field_pane_2_ParamLimits

0x1f54,	// (0x0000f787) mce_header_field_pane_2

0x1f6a,	// (0x0000f79d) mce_header_field_pane_3

0x1f72,	// (0x0000f7a5) list_single_mce_message_pane_ParamLimits

0x1f72,	// (0x0000f7a5) list_single_mce_message_pane

0x1f8e,	// (0x0000f7c1) list_single_mce_smart_pane_ParamLimits

0x1f8e,	// (0x0000f7c1) list_single_mce_smart_pane

0xa1e1,	// (0x00017a14) input_focus_pane_cp03

0xa1ea,	// (0x00017a1d) list_header_data_pane

0x1fb5,	// (0x0000f7e8) mce_header_field_pane_t1

0x1fc5,	// (0x0000f7f8) list_single_mce_header_pane_ParamLimits

0x1fc5,	// (0x0000f7f8) list_single_mce_header_pane

0xa1f2,	// (0x00017a25) list_single_mce_header_pane_t1

0xa201,	// (0x00017a34) list_single_mce_message_pane_g1

0xa209,	// (0x00017a3c) list_single_mce_message_pane_t1

0x1ff7,	// (0x0000f82a) bg_cale_heading_pane_cp01_ParamLimits

0x1ff7,	// (0x0000f82a) bg_cale_heading_pane_cp01

0xa217,	// (0x00017a4a) bg_cale_pane_cp02_ParamLimits

0xa217,	// (0x00017a4a) bg_cale_pane_cp02

0x202a,	// (0x0000f85d) cale_month_corner_pane

0x2040,	// (0x0000f873) cale_month_day_heading_pane_ParamLimits

0x2040,	// (0x0000f873) cale_month_day_heading_pane

0x2073,	// (0x0000f8a6) cale_month_pane_g1_ParamLimits

0x2073,	// (0x0000f8a6) cale_month_pane_g1

0x209f,	// (0x0000f8d2) cale_month_pane_g2_ParamLimits

0x209f,	// (0x0000f8d2) cale_month_pane_g2

0x20c0,	// (0x0000f8f3) cale_month_pane_g3_ParamLimits

0x20c0,	// (0x0000f8f3) cale_month_pane_g3

0x20fc,	// (0x0000f92f) cale_month_pane_g4_ParamLimits

0x20fc,	// (0x0000f92f) cale_month_pane_g4

0x2138,	// (0x0000f96b) cale_month_pane_g5_ParamLimits

0x2138,	// (0x0000f96b) cale_month_pane_g5

0x2174,	// (0x0000f9a7) cale_month_pane_g6_ParamLimits

0x2174,	// (0x0000f9a7) cale_month_pane_g6

0x21b0,	// (0x0000f9e3) cale_month_pane_g7_ParamLimits

0x21b0,	// (0x0000f9e3) cale_month_pane_g7

0x21ec,	// (0x0000fa1f) cale_month_pane_g8_ParamLimits

0x21ec,	// (0x0000fa1f) cale_month_pane_g8

0x2228,	// (0x0000fa5b) cale_month_pane_g9_ParamLimits

0x2228,	// (0x0000fa5b) cale_month_pane_g9

0x225e,	// (0x0000fa91) cale_month_pane_g10_ParamLimits

0x225e,	// (0x0000fa91) cale_month_pane_g10

0x2288,	// (0x0000fabb) cale_month_pane_g11_ParamLimits

0x2288,	// (0x0000fabb) cale_month_pane_g11

0x22b2,	// (0x0000fae5) cale_month_pane_g12_ParamLimits

0x22b2,	// (0x0000fae5) cale_month_pane_g12

0x22e0,	// (0x0000fb13) cale_month_pane_g13_ParamLimits

0x22e0,	// (0x0000fb13) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0001caf1) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0001caf1) cale_month_pane_g

0x230e,	// (0x0000fb41) cale_month_week_pane

0x231f,	// (0x0000fb52) grid_cale_month_pane_ParamLimits

0x231f,	// (0x0000fb52) grid_cale_month_pane

0x234d,	// (0x0000fb80) cale_month_day_heading_pane_t1

0x23ab,	// (0x0000fbde) cale_month_day_heading_pane_t2

0x2410,	// (0x0000fc43) cale_month_day_heading_pane_t3

0x2475,	// (0x0000fca8) cale_month_day_heading_pane_t4

0x24da,	// (0x0000fd0d) cale_month_day_heading_pane_t5

0x253f,	// (0x0000fd72) cale_month_day_heading_pane_t6

0x25a4,	// (0x0000fdd7) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0001cb0c) cale_month_day_heading_pane_t

0x9d83,	// (0x000175b6) bg_cale_side_pane_cp01

0x2609,	// (0x0000fe3c) cale_month_week_pane_t1

0x2620,	// (0x0000fe53) cale_month_week_pane_t2

0x2637,	// (0x0000fe6a) cale_month_week_pane_t3

0x264e,	// (0x0000fe81) cale_month_week_pane_t4

0x2665,	// (0x0000fe98) cale_month_week_pane_t5

0x267c,	// (0x0000feaf) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0001cb1b) cale_month_week_pane_t

0x269b,	// (0x0000fece) cell_cale_month_pane_ParamLimits

0x269b,	// (0x0000fece) cell_cale_month_pane

0xa276,	// (0x00017aa9) cell_cale_month_pane_g1

0x2749,	// (0x0000ff7c) cell_cale_month_pane_t1_ParamLimits

0x2749,	// (0x0000ff7c) cell_cale_month_pane_t1

0x9d91,	// (0x000175c4) grid_highlight_pane_cp08

0x9c26,	// (0x00017459) main_smil_g1

0x2765,	// (0x0000ff98) smil_status_pane

0xa282,	// (0x00017ab5) smil_text_pane

0xbb9f,	// (0x000193d2) bg_popup_call3_rect_pane_g8

0xbba7,	// (0x000193da) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0001cdd4) bg_popup_call3_rect_pane_g

0xbe3c,	// (0x0001966f) smil_status_volume_pane_g1

0xa28c,	// (0x00017abf) smil_status_pane_t1

0xbe6f,	// (0x000196a2) volume_smil_pane

0xa2a3,	// (0x00017ad6) list_smil_text_pane

0x277a,	// (0x0000ffad) scroll_pane_cp011

0x2785,	// (0x0000ffb8) smil_text_list_pane_t1_ParamLimits

0x2785,	// (0x0000ffb8) smil_text_list_pane_t1

0xa2ad,	// (0x00017ae0) aid_volume_smil_ParamLimits

0xa2ad,	// (0x00017ae0) aid_volume_smil

0x9c26,	// (0x00017459) smil_volume_pane_g1

0x9c26,	// (0x00017459) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0001cb3b) smil_volume_pane_g

0x9bad,	// (0x000173e0) listscroll_cale_day_pane

0xa2cf,	// (0x00017b02) bg_cale_pane

0xa2e7,	// (0x00017b1a) list_cale_pane

0xa2f8,	// (0x00017b2b) scroll_pane_cp09

0xa309,	// (0x00017b3c) cale_bg_pane_g1

0xa311,	// (0x00017b44) cale_bg_pane_g2

0xa319,	// (0x00017b4c) cale_bg_pane_g3

0xa321,	// (0x00017b54) cale_bg_pane_g4

0xa329,	// (0x00017b5c) cale_bg_pane_g5

0xa331,	// (0x00017b64) cale_bg_pane_g6

0xa339,	// (0x00017b6c) cale_bg_pane_g7

0xa341,	// (0x00017b74) cale_bg_pane_g8

0xa349,	// (0x00017b7c) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0001cb40) cale_bg_pane_g

0x27da,	// (0x0001000d) list_cale_time_pane_ParamLimits

0x27da,	// (0x0001000d) list_cale_time_pane

0x27ef,	// (0x00010022) list_cale_time_pane_g1_ParamLimits

0x27ef,	// (0x00010022) list_cale_time_pane_g1

0xa351,	// (0x00017b84) list_cale_time_pane_g2_ParamLimits

0xa351,	// (0x00017b84) list_cale_time_pane_g2

0x27fb,	// (0x0001002e) list_cale_time_pane_g3_ParamLimits

0x27fb,	// (0x0001002e) list_cale_time_pane_g3

0x2809,	// (0x0001003c) list_cale_time_pane_g4_ParamLimits

0x2809,	// (0x0001003c) list_cale_time_pane_g4

0x2817,	// (0x0001004a) list_cale_time_pane_g5_ParamLimits

0x2817,	// (0x0001004a) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0001cb53) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0001cb53) list_cale_time_pane_g

0x2825,	// (0x00010058) list_cale_time_pane_t1_ParamLimits

0x2825,	// (0x00010058) list_cale_time_pane_t1

0x284d,	// (0x00010080) list_cale_time_pane_t2_ParamLimits

0x284d,	// (0x00010080) list_cale_time_pane_t2

0x2bc3,	// (0x000103f6) aid_blid_cardinal_pane

0x2c05,	// (0x00010438) compass_pane_t4

0x2875,	// (0x000100a8) list_cale_time_pane_t4_ParamLimits

0x2875,	// (0x000100a8) list_cale_time_pane_t4

0x2c13,	// (0x00010446) compass_pane_t5

0x2c23,	// (0x00010456) compass_pane_t6

0x2c31,	// (0x00010464) compass_pane_t7

0xa843,	// (0x00018076) navi_pane_cc_t1

0xa9aa,	// (0x000181dd) aid_phob_thumbnail_center_pane

0x33e2,	// (0x00010c15) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0001cb60) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0001cb60) list_cale_time_pane_t

0x94bc,	// (0x00016cef) bg_popup_window_pane_cp02_ParamLimits

0x94bc,	// (0x00016cef) bg_popup_window_pane_cp02

0xa36b,	// (0x00017b9e) heading_pane_cp01_ParamLimits

0xa36b,	// (0x00017b9e) heading_pane_cp01

0xa377,	// (0x00017baa) loc_req_pane_ParamLimits

0xa377,	// (0x00017baa) loc_req_pane

0xa387,	// (0x00017bba) loc_type_pane_ParamLimits

0xa387,	// (0x00017bba) loc_type_pane

0xa399,	// (0x00017bcc) loc_type_pane_t1_ParamLimits

0xa399,	// (0x00017bcc) loc_type_pane_t1

0xa3ab,	// (0x00017bde) loc_type_pane_t2_ParamLimits

0xa3ab,	// (0x00017bde) loc_type_pane_t2

0xa3bd,	// (0x00017bf0) loc_type_pane_t3_ParamLimits

0xa3bd,	// (0x00017bf0) loc_type_pane_t3

0x0002,

0xf334,	// (0x0001cb67) loc_type_pane_t_ParamLimits

0xf334,	// (0x0001cb67) loc_type_pane_t

0xa3cf,	// (0x00017c02) list_loc_req_pane

0xa3d9,	// (0x00017c0c) scroll_pane_cp012

0x289d,	// (0x000100d0) list_single_loc_request_popup_menu_pane_ParamLimits

0x289d,	// (0x000100d0) list_single_loc_request_popup_menu_pane

0xa3e4,	// (0x00017c17) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa3e4,	// (0x00017c17) list_single_loc_request_popup_menu_pane_g1

0xa3f0,	// (0x00017c23) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa3f0,	// (0x00017c23) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0001cb6e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0001cb6e) list_single_loc_request_popup_menu_pane_g

0xa3fc,	// (0x00017c2f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa3fc,	// (0x00017c2f) list_single_loc_request_popup_menu_pane_t1

0x9ac0,	// (0x000172f3) bg_popup_window_pane_cp03_ParamLimits

0x9ac0,	// (0x000172f3) bg_popup_window_pane_cp03

0xa412,	// (0x00017c45) heading_loc_req_pane_ParamLimits

0xa412,	// (0x00017c45) heading_loc_req_pane

0x28aa,	// (0x000100dd) popup_dyc_status_message_window_g1_ParamLimits

0x28aa,	// (0x000100dd) popup_dyc_status_message_window_g1

0x28be,	// (0x000100f1) popup_dyc_status_message_window_t1_ParamLimits

0x28be,	// (0x000100f1) popup_dyc_status_message_window_t1

0x28d3,	// (0x00010106) popup_dyc_status_message_window_t2_ParamLimits

0x28d3,	// (0x00010106) popup_dyc_status_message_window_t2

0x28e8,	// (0x0001011b) popup_dyc_status_message_window_t3_ParamLimits

0x28e8,	// (0x0001011b) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0001cb73) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0001cb73) popup_dyc_status_message_window_t

0x9865,	// (0x00017098) bg_heading_pane_cp01

0xa41e,	// (0x00017c51) heading_loc_req_pane_g1

0xa426,	// (0x00017c59) heading_loc_req_pane_g2

0xa42e,	// (0x00017c61) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0001cb7a) heading_loc_req_pane_g

0xa436,	// (0x00017c69) heading_loc_req_pane_t1

0xa4bd,	// (0x00017cf0) bg_popup_sub_pane_cp01_ParamLimits

0xa4bd,	// (0x00017cf0) bg_popup_sub_pane_cp01

0xa4cb,	// (0x00017cfe) popup_cale_events_window_g1_ParamLimits

0xa4cb,	// (0x00017cfe) popup_cale_events_window_g1

0xa4eb,	// (0x00017d1e) popup_cale_events_window_g2_ParamLimits

0xa4eb,	// (0x00017d1e) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0001cbae) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0001cbae) popup_cale_events_window_g

0xa50b,	// (0x00017d3e) popup_cale_events_window_t1_ParamLimits

0xa50b,	// (0x00017d3e) popup_cale_events_window_t1

0xa51d,	// (0x00017d50) popup_cale_events_window_t2_ParamLimits

0xa51d,	// (0x00017d50) popup_cale_events_window_t2

0xa55b,	// (0x00017d8e) popup_cale_events_window_t3_ParamLimits

0xa55b,	// (0x00017d8e) popup_cale_events_window_t3

0xa595,	// (0x00017dc8) popup_cale_events_window_t4_ParamLimits

0xa595,	// (0x00017dc8) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0001cbb3) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0001cbb3) popup_cale_events_window_t

0x2976,	// (0x000101a9) call_type_pane

0x2986,	// (0x000101b9) popup_call_status_window_g1

0x299a,	// (0x000101cd) popup_call_status_window_g2

0x29ae,	// (0x000101e1) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0001cbbc) popup_call_status_window_g

0xa5cb,	// (0x00017dfe) call_type_pane_g1

0xa5d4,	// (0x00017e07) call_type_pane_g2

0x0001,

0xf390,	// (0x0001cbc3) call_type_pane_g

0x9865,	// (0x00017098) bg_popup_sub_pane_cp02

0xa5dd,	// (0x00017e10) listscroll_popup_wml_pane

0xa5e5,	// (0x00017e18) list_wml_pane

0xa5ef,	// (0x00017e22) scroll_pane_cp013

0xa5fa,	// (0x00017e2d) list_single_graphic_popup_wml_pane_ParamLimits

0xa5fa,	// (0x00017e2d) list_single_graphic_popup_wml_pane

0x9c26,	// (0x00017459) list_single_graphic_popup_wml_pane_g1

0xa60e,	// (0x00017e41) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0001cbc8) list_single_graphic_popup_wml_pane_g

0xa616,	// (0x00017e49) list_single_graphic_popup_wml_pane_t1

0xa62c,	// (0x00017e5f) aid_call_pane

0x9ab8,	// (0x000172eb) popup_clock_analogue_window_g1

0x9ab8,	// (0x000172eb) popup_clock_analogue_window_g2

0xa634,	// (0x00017e67) popup_clock_analogue_window_g3

0xa634,	// (0x00017e67) popup_clock_analogue_window_g4

0x9c26,	// (0x00017459) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0001cbcd) popup_clock_analogue_window_g

0xa63c,	// (0x00017e6f) popup_clock_analogue_window_t1

0xa64a,	// (0x00017e7d) clock_digital_number_pane_ParamLimits

0xa64a,	// (0x00017e7d) clock_digital_number_pane

0xa656,	// (0x00017e89) clock_digital_number_pane_cp02_ParamLimits

0xa656,	// (0x00017e89) clock_digital_number_pane_cp02

0xa662,	// (0x00017e95) clock_digital_number_pane_cp03_ParamLimits

0xa662,	// (0x00017e95) clock_digital_number_pane_cp03

0xa66e,	// (0x00017ea1) clock_digital_number_pane_cp04_ParamLimits

0xa66e,	// (0x00017ea1) clock_digital_number_pane_cp04

0xa67a,	// (0x00017ead) clock_digital_separator_pane_ParamLimits

0xa67a,	// (0x00017ead) clock_digital_separator_pane

0xa686,	// (0x00017eb9) popup_clock_digital_window_t1

0x9c26,	// (0x00017459) clock_digital_number_pane_g1

0x9c26,	// (0x00017459) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0001cb3b) clock_digital_number_pane_g

0x9c26,	// (0x00017459) clock_digital_separator_pane_g1

0x9c26,	// (0x00017459) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0001cb3b) clock_digital_separator_pane_g

0x9865,	// (0x00017098) bg_popup_window_pane_cp04

0xa6a3,	// (0x00017ed6) heading_pane_cp03

0xa6ab,	// (0x00017ede) listscroll_popup_gms_pane

0xa6b3,	// (0x00017ee6) grid_large_graphic_popup_pane

0xa6bd,	// (0x00017ef0) listscroll_popup_gms_pane_g1

0xa6c5,	// (0x00017ef8) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0001cbd8) listscroll_popup_gms_pane_g

0xa0bb,	// (0x000178ee) scroll_pane_cp014

0x29be,	// (0x000101f1) cell_large_graphic_popup_pane_ParamLimits

0x29be,	// (0x000101f1) cell_large_graphic_popup_pane

0x29d6,	// (0x00010209) cell_large_graphic_popup_pane_g1_ParamLimits

0x29d6,	// (0x00010209) cell_large_graphic_popup_pane_g1

0xa6cd,	// (0x00017f00) cell_large_graphic_popup_pane_g2_ParamLimits

0xa6cd,	// (0x00017f00) cell_large_graphic_popup_pane_g2

0xa6d9,	// (0x00017f0c) cell_large_graphic_popup_pane_g3_ParamLimits

0xa6d9,	// (0x00017f0c) cell_large_graphic_popup_pane_g3

0xa6e6,	// (0x00017f19) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6e6,	// (0x00017f19) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0001cbdd) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0001cbdd) cell_large_graphic_popup_pane_g

0xa6f6,	// (0x00017f29) grid_highlight_pane_cp010

0x9c26,	// (0x00017459) bg_popup_call_pane_g1

0xa700,	// (0x00017f33) list_single_graphic_popup_conf_pane_ParamLimits

0xa700,	// (0x00017f33) list_single_graphic_popup_conf_pane

0xa712,	// (0x00017f45) list_highlight_pane_cp01

0xa71b,	// (0x00017f4e) list_single_graphic_popup_conf_pane_g1

0xa723,	// (0x00017f56) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0001cbe6) list_single_graphic_popup_conf_pane_g

0xa72b,	// (0x00017f5e) list_single_graphic_popup_conf_pane_t1

0xa739,	// (0x00017f6c) linegrid_cams_pane_g1

0x29e2,	// (0x00010215) linegrid_cams_pane_g2

0x9dc4,	// (0x000175f7) linegrid_cams_pane_g3

0xa742,	// (0x00017f75) linegrid_cams_pane_g4

0x29eb,	// (0x0001021e) linegrid_cams_pane_g5

0x29f4,	// (0x00010227) linegrid_cams_pane_g6

0x9dcd,	// (0x00017600) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0001cbeb) linegrid_cams_pane_g

0xa74b,	// (0x00017f7e) popup_clock_analogue_window

0xa74b,	// (0x00017f7e) popup_clock_digital_window

0x9865,	// (0x00017098) popup_phob_thumbnail_window

0x9c26,	// (0x00017459) call_video_uplink_pane_g1

0xa754,	// (0x00017f87) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0001cbfa) call_video_uplink_pane_g

0xa75c,	// (0x00017f8f) video_uplink_pane

0xa764,	// (0x00017f97) mce_image_pane_g1

0x29ff,	// (0x00010232) mce_image_pane_g2

0x2a09,	// (0x0001023c) mce_image_pane_g3

0x2a13,	// (0x00010246) mce_image_pane_g4

0x2a1b,	// (0x0001024e) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0001cbff) mce_image_pane_g

0xa76e,	// (0x00017fa1) control_top_pane_stacon_cp01_ParamLimits

0xa76e,	// (0x00017fa1) control_top_pane_stacon_cp01

0xa782,	// (0x00017fb5) uni_indicator_pane_stacon_cp01_ParamLimits

0xa782,	// (0x00017fb5) uni_indicator_pane_stacon_cp01

0xa793,	// (0x00017fc6) bg_popup_sub_pane_cp03

0x2a23,	// (0x00010256) chi_dic_find_pane

0x2a2b,	// (0x0001025e) listscroll_chi_dic_pane

0x2a34,	// (0x00010267) main_pane_chidic_g1

0x2a47,	// (0x0001027a) chi_dic_find_pane_t1

0xa79d,	// (0x00017fd0) find_chidic_pane

0xa7a6,	// (0x00017fd9) chi_dic_list_pane_ParamLimits

0xa7a6,	// (0x00017fd9) chi_dic_list_pane

0xa7b7,	// (0x00017fea) scroll_pane_cp020

0x2a55,	// (0x00010288) find_chidic_pane_t1

0x9865,	// (0x00017098) input_focus_pane_cp06

0x2a64,	// (0x00010297) list_chi_dic_pane_ParamLimits

0x2a64,	// (0x00010297) list_chi_dic_pane

0x2a76,	// (0x000102a9) list_chi_dic_pane_t1_ParamLimits

0x2a76,	// (0x000102a9) list_chi_dic_pane_t1

0x9865,	// (0x00017098) list_highlight_pane_cp020

0xa7bf,	// (0x00017ff2) bg_cale_heading_pane_g1

0x2a89,	// (0x000102bc) bg_cale_heading_pane_g2

0x2a91,	// (0x000102c4) bg_cale_heading_pane_g3

0x2a99,	// (0x000102cc) bg_cale_heading_pane_g4

0x2aa1,	// (0x000102d4) bg_cale_heading_pane_g5

0x2aa9,	// (0x000102dc) bg_cale_heading_pane_g6

0x2ab1,	// (0x000102e4) bg_cale_heading_pane_g7

0x2ab9,	// (0x000102ec) bg_cale_heading_pane_g8

0x2ac1,	// (0x000102f4) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0001cc0a) bg_cale_heading_pane_g

0xa7bf,	// (0x00017ff2) bg_cale_side_pane_g1

0x2ac9,	// (0x000102fc) bg_cale_side_pane_g2

0x2ad3,	// (0x00010306) bg_cale_side_pane_g3

0x2add,	// (0x00010310) bg_cale_side_pane_g4

0x2ae7,	// (0x0001031a) bg_cale_side_pane_g5

0x2af1,	// (0x00010324) bg_cale_side_pane_g6

0x2afb,	// (0x0001032e) bg_cale_side_pane_g7

0x2b05,	// (0x00010338) bg_cale_side_pane_g8

0x2b0d,	// (0x00010340) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0001cc1d) bg_cale_side_pane_g

0x2b15,	// (0x00010348) popup_call_status_window_ParamLimits

0x2b15,	// (0x00010348) popup_call_status_window

0xa7c7,	// (0x00017ffa) stacon_top_pane

0xa7cf,	// (0x00018002) status_pane_ParamLimits

0xa7cf,	// (0x00018002) status_pane

0xa7e4,	// (0x00018017) status_small_pane

0xa7ec,	// (0x0001801f) control_pane

0x9865,	// (0x00017098) stacon_bottom_pane

0xa7f4,	// (0x00018027) list_single_mce_smart_pane_t1_ParamLimits

0xa7f4,	// (0x00018027) list_single_mce_smart_pane_t1

0xa807,	// (0x0001803a) list_single_mce_smart_pane_t2_ParamLimits

0xa807,	// (0x0001803a) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0001cc30) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0001cc30) list_single_mce_smart_pane_t

0x2b62,	// (0x00010395) compass_pane

0x2b6d,	// (0x000103a0) main_location2_pane_t1

0x2b83,	// (0x000103b6) main_location2_pane_t2

0x2b99,	// (0x000103cc) main_location2_pane_t3

0x0003,

0xf402,	// (0x0001cc35) main_location2_pane_t

0xa826,	// (0x00018059) compass_pane_g1_ParamLimits

0xa826,	// (0x00018059) compass_pane_g1

0x2be7,	// (0x0001041a) compass_pane_t1

0x2bf6,	// (0x00010429) compass_pane_t2

0x0005,

0xf40b,	// (0x0001cc3e) compass_pane_t

0x2c41,	// (0x00010474) text_secondary_cp61

0xa83a,	// (0x0001806d) navi_pane_cams_g5

0xa85d,	// (0x00018090) navi_pane_im_t1

0xa86b,	// (0x0001809e) navi_pane_mp_g1_ParamLimits

0xa86b,	// (0x0001809e) navi_pane_mp_g1

0xa87f,	// (0x000180b2) navi_pane_mp_g2_ParamLimits

0xa87f,	// (0x000180b2) navi_pane_mp_g2

0xa88b,	// (0x000180be) navi_pane_mp_g3_ParamLimits

0xa88b,	// (0x000180be) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0001cc52) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0001cc52) navi_pane_mp_g

0xa897,	// (0x000180ca) navi_pane_mp_t1

0xa8a5,	// (0x000180d8) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0001cc59) navi_pane_mp_t

0xa8e1,	// (0x00018114) navi_pane_vt_g1

0xa897,	// (0x000180ca) navi_pane_vt_t1

0xa8e9,	// (0x0001811c) navi_slider_pane

0xa8f1,	// (0x00018124) zooming_pane

0xa8f9,	// (0x0001812c) navi_slider_pane_g1

0xa902,	// (0x00018135) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0001cc60) navi_slider_pane_g

0xa92f,	// (0x00018162) aid_levels_zoom

0xa937,	// (0x0001816a) zooming_pane_g1

0xa93f,	// (0x00018172) zooming_pane_g2

0xa93f,	// (0x00018172) zooming_pane_g3

0x0002,

0xf43c,	// (0x0001cc6f) zooming_pane_g

0xa947,	// (0x0001817a) level_10_zoom

0xa950,	// (0x00018183) level_11_zoom

0xa959,	// (0x0001818c) level_1_zoom

0xa962,	// (0x00018195) level_2_zoom

0xa96b,	// (0x0001819e) level_3_zoom

0xa974,	// (0x000181a7) level_4_zoom

0xa97d,	// (0x000181b0) level_5_zoom

0xa986,	// (0x000181b9) level_6_zoom

0xa98f,	// (0x000181c2) level_7_zoom

0xa998,	// (0x000181cb) level_8_zoom

0xa9a1,	// (0x000181d4) level_9_zoom

0xa9b2,	// (0x000181e5) popup_phob_thumbnail_window_g1

0xa9ba,	// (0x000181ed) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0001cc76) popup_phob_thumbnail_window_g

0xbd05,	// (0x00019538) level_1_location

0xbd0d,	// (0x00019540) level_2_location

0xbd15,	// (0x00019548) level_3_location

0xbd1d,	// (0x00019550) level_4_location

0xa8f1,	// (0x00018124) level_5_location

0x2d6c,	// (0x0001059f) mce_icon_pane_g1

0x2d74,	// (0x000105a7) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0001cc7b) mce_icon_pane_g

0x2d7c,	// (0x000105af) main_mup_pane_g1_ParamLimits

0x2d7c,	// (0x000105af) main_mup_pane_g1

0x2d92,	// (0x000105c5) main_mup_pane_g2_ParamLimits

0x2d92,	// (0x000105c5) main_mup_pane_g2

0x2daa,	// (0x000105dd) main_mup_pane_g3_ParamLimits

0x2daa,	// (0x000105dd) main_mup_pane_g3

0x2dc2,	// (0x000105f5) main_mup_pane_g4_ParamLimits

0x2dc2,	// (0x000105f5) main_mup_pane_g4

0x2dd4,	// (0x00010607) main_mup_pane_g5_ParamLimits

0x2dd4,	// (0x00010607) main_mup_pane_g5

0x2df0,	// (0x00010623) main_mup_pane_g6_ParamLimits

0x2df0,	// (0x00010623) main_mup_pane_g6

0x2e0a,	// (0x0001063d) main_mup_pane_g7_ParamLimits

0x2e0a,	// (0x0001063d) main_mup_pane_g7

0x2e28,	// (0x0001065b) main_mup_pane_g8_ParamLimits

0x2e28,	// (0x0001065b) main_mup_pane_g8

0x2e46,	// (0x00010679) main_mup_pane_g9_ParamLimits

0x2e46,	// (0x00010679) main_mup_pane_g9

0x2e62,	// (0x00010695) main_mup_pane_g10_ParamLimits

0x2e62,	// (0x00010695) main_mup_pane_g10

0x2e80,	// (0x000106b3) main_mup_pane_g11_ParamLimits

0x2e80,	// (0x000106b3) main_mup_pane_g11

0x2e9a,	// (0x000106cd) main_mup_pane_g12_ParamLimits

0x2e9a,	// (0x000106cd) main_mup_pane_g12

0x2eb0,	// (0x000106e3) main_mup_pane_g13_ParamLimits

0x2eb0,	// (0x000106e3) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0001cc80) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0001cc80) main_mup_pane_g

0x2ec4,	// (0x000106f7) main_mup_pane_t1_ParamLimits

0x2ec4,	// (0x000106f7) main_mup_pane_t1

0x2ee0,	// (0x00010713) main_mup_pane_t2_ParamLimits

0x2ee0,	// (0x00010713) main_mup_pane_t2

0x2ef8,	// (0x0001072b) main_mup_pane_t3_ParamLimits

0x2ef8,	// (0x0001072b) main_mup_pane_t3

0x2f10,	// (0x00010743) main_mup_pane_t4_ParamLimits

0x2f10,	// (0x00010743) main_mup_pane_t4

0x2f2e,	// (0x00010761) main_mup_pane_t5_ParamLimits

0x2f2e,	// (0x00010761) main_mup_pane_t5

0x2f43,	// (0x00010776) main_mup_pane_t6_ParamLimits

0x2f43,	// (0x00010776) main_mup_pane_t6

0x0005,

0xf468,	// (0x0001cc9b) main_mup_pane_t_ParamLimits

0xf468,	// (0x0001cc9b) main_mup_pane_t

0x2f55,	// (0x00010788) mup_progress_pane_ParamLimits

0x2f55,	// (0x00010788) mup_progress_pane

0x2f61,	// (0x00010794) mup_visualizer_pane_ParamLimits

0x2f61,	// (0x00010794) mup_visualizer_pane

0x2f95,	// (0x000107c8) mup_volume_pane_ParamLimits

0x2f95,	// (0x000107c8) mup_volume_pane

0xa9c2,	// (0x000181f5) mup_visualizer_pane_g1_ParamLimits

0xa9c2,	// (0x000181f5) mup_visualizer_pane_g1

0xa9c2,	// (0x000181f5) mup_visualizer_pane_g2_ParamLimits

0xa9c2,	// (0x000181f5) mup_visualizer_pane_g2

0xa826,	// (0x00018059) mup_visualizer_pane_g3_ParamLimits

0xa826,	// (0x00018059) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0001cca8) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0001cca8) mup_visualizer_pane_g

0x9c26,	// (0x00017459) mup_volume_pane_g1

0xa9d8,	// (0x0001820b) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0001ccaf) mup_volume_pane_g

0x9c26,	// (0x00017459) mup_progress_pane_g1

0xa9e1,	// (0x00018214) mup_progress_pane_g2

0xa9ea,	// (0x0001821d) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0001ccb4) mup_progress_pane_g

0x9865,	// (0x00017098) bg_popup_window_pane_cp05

0xa9f3,	// (0x00018226) heading_pane_cp02_ParamLimits

0xa9f3,	// (0x00018226) heading_pane_cp02

0xaa0f,	// (0x00018242) list_popup_blid_pane

0xaa17,	// (0x0001824a) list_blid_sat_info_pane_ParamLimits

0xaa17,	// (0x0001824a) list_blid_sat_info_pane

0xaa2a,	// (0x0001825d) list_blid_sat_info_pane_g1

0xaa32,	// (0x00018265) list_blid_sat_info_pane_t1

0x30bf,	// (0x000108f2) mup_equalizer_pane_ParamLimits

0x30bf,	// (0x000108f2) mup_equalizer_pane

0x30e0,	// (0x00010913) mup_equalizer_pane_cp1_ParamLimits

0x30e0,	// (0x00010913) mup_equalizer_pane_cp1

0x3101,	// (0x00010934) mup_equalizer_pane_cp2_ParamLimits

0x3101,	// (0x00010934) mup_equalizer_pane_cp2

0x3126,	// (0x00010959) mup_equalizer_pane_cp3_ParamLimits

0x3126,	// (0x00010959) mup_equalizer_pane_cp3

0x314f,	// (0x00010982) mup_equalizer_pane_cp4_ParamLimits

0x314f,	// (0x00010982) mup_equalizer_pane_cp4

0x3178,	// (0x000109ab) mup_equalizer_pane_cp5

0x3190,	// (0x000109c3) mup_equalizer_pane_cp6

0x31a8,	// (0x000109db) mup_equalizer_pane_cp7

0xbc1f,	// (0x00019452) bg_popup_call_poc_act_pane_g9

0xbc27,	// (0x0001945a) bg_popup_call_poc_act_pane_g10

0xbc2f,	// (0x00019462) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ac0,	// (0x000172f3) mup_scale_pane

0x9c26,	// (0x00017459) mup_scale_pane_g1

0xaa40,	// (0x00018273) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0001ccd0) mup_scale_pane_g

0xaa64,	// (0x00018297) msg_data_pane

0xaa6c,	// (0x0001829f) scroll_pane_cp017

0x31d2,	// (0x00010a05) bg_list_pane_cp04_ParamLimits

0x31d2,	// (0x00010a05) bg_list_pane_cp04

0xaa74,	// (0x000182a7) msg_data_pane_g1

0x31fa,	// (0x00010a2d) msg_data_pane_g2

0x3204,	// (0x00010a37) msg_data_pane_g3

0x320e,	// (0x00010a41) msg_data_pane_g4

0x3216,	// (0x00010a49) msg_data_pane_g5

0x321e,	// (0x00010a51) msg_data_pane_g6

0x3226,	// (0x00010a59) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0001ccdf) msg_data_pane_g

0x322e,	// (0x00010a61) msg_text_pane_ParamLimits

0x322e,	// (0x00010a61) msg_text_pane

0x325d,	// (0x00010a90) qrid_highlight_pane_cp011_ParamLimits

0x325d,	// (0x00010a90) qrid_highlight_pane_cp011

0x9865,	// (0x00017098) msg_body_pane

0x9865,	// (0x00017098) msg_header_pane

0xaa85,	// (0x000182b8) input_focus_pane_cp07

0x3281,	// (0x00010ab4) msg_header_pane_t1_ParamLimits

0x3281,	// (0x00010ab4) msg_header_pane_t1

0x3295,	// (0x00010ac8) msg_header_pane_t2_ParamLimits

0x3295,	// (0x00010ac8) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0001ccf3) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0001ccf3) msg_header_pane_t

0xaa9a,	// (0x000182cd) msg_body_pane_g1

0x32a7,	// (0x00010ada) msg_body_pane_t1_ParamLimits

0x32a7,	// (0x00010ada) msg_body_pane_t1

0x32d8,	// (0x00010b0b) msg_body_pane_t2_ParamLimits

0x32d8,	// (0x00010b0b) msg_body_pane_t2

0x32ea,	// (0x00010b1d) msg_body_pane_t3_ParamLimits

0x32ea,	// (0x00010b1d) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0001ccf8) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0001ccf8) msg_body_pane_t

0x3336,	// (0x00010b69) main_viewer_pane_g1_ParamLimits

0x3336,	// (0x00010b69) main_viewer_pane_g1

0x3344,	// (0x00010b77) main_viewer_pane_g2_ParamLimits

0x3344,	// (0x00010b77) main_viewer_pane_g2

0x3352,	// (0x00010b85) main_viewer_pane_g3_ParamLimits

0x3352,	// (0x00010b85) main_viewer_pane_g3

0x3361,	// (0x00010b94) main_viewer_pane_g4_ParamLimits

0x3361,	// (0x00010b94) main_viewer_pane_g4

0xaaba,	// (0x000182ed) main_viewer_pane_g5_ParamLimits

0xaaba,	// (0x000182ed) main_viewer_pane_g5

0xaaba,	// (0x000182ed) main_viewer_pane_g7_ParamLimits

0xaaba,	// (0x000182ed) main_viewer_pane_g7

0xaacc,	// (0x000182ff) main_viewer_pane_g8_ParamLimits

0xaacc,	// (0x000182ff) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0001cd08) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0001cd08) main_viewer_pane_g

0xaae4,	// (0x00018317) viewer_content_pane_ParamLimits

0xaae4,	// (0x00018317) viewer_content_pane

0x339f,	// (0x00010bd2) main_postcard_pane_g1_ParamLimits

0x339f,	// (0x00010bd2) main_postcard_pane_g1

0x33b5,	// (0x00010be8) main_postcard_pane_g2_ParamLimits

0x33b5,	// (0x00010be8) main_postcard_pane_g2

0x33cb,	// (0x00010bfe) main_postcard_pane_g3_ParamLimits

0x33cb,	// (0x00010bfe) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0001cd19) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0001cd19) main_postcard_pane_g

0x33e2,	// (0x00010c15) main_postcard_pane_g4

0xbe4f,	// (0x00019682) smil_status_volume_pane_g2

0x3425,	// (0x00010c58) postcard_pane_ParamLimits

0x3425,	// (0x00010c58) postcard_pane

0xaaf2,	// (0x00018325) postcard_pane_g1_ParamLimits

0xaaf2,	// (0x00018325) postcard_pane_g1

0x3475,	// (0x00010ca8) postcard_pane_g2_ParamLimits

0x3475,	// (0x00010ca8) postcard_pane_g2

0x3481,	// (0x00010cb4) postcard_pane_g3_ParamLimits

0x3481,	// (0x00010cb4) postcard_pane_g3

0xab00,	// (0x00018333) postcard_pane_g4_ParamLimits

0xab00,	// (0x00018333) postcard_pane_g4

0x348d,	// (0x00010cc0) postcard_pane_g5_ParamLimits

0x348d,	// (0x00010cc0) postcard_pane_g5

0x349f,	// (0x00010cd2) postcard_pane_g6_ParamLimits

0x349f,	// (0x00010cd2) postcard_pane_g6

0xaaf2,	// (0x00018325) postcard_pane_g7_ParamLimits

0xaaf2,	// (0x00018325) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0001cd26) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0001cd26) postcard_pane_g

0x34b7,	// (0x00010cea) main_mp2_pane_g1_ParamLimits

0x34b7,	// (0x00010cea) main_mp2_pane_g1

0x34c5,	// (0x00010cf8) main_mp2_pane_g2_ParamLimits

0x34c5,	// (0x00010cf8) main_mp2_pane_g2

0x34d1,	// (0x00010d04) main_mp2_pane_g3_ParamLimits

0x34d1,	// (0x00010d04) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0001cd35) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0001cd35) main_mp2_pane_g

0x34dd,	// (0x00010d10) main_mp2_pane_t1_ParamLimits

0x34dd,	// (0x00010d10) main_mp2_pane_t1

0x34f4,	// (0x00010d27) main_mp2_pane_t2_ParamLimits

0x34f4,	// (0x00010d27) main_mp2_pane_t2

0x3508,	// (0x00010d3b) main_mp2_pane_t3_ParamLimits

0x3508,	// (0x00010d3b) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0001cd3c) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0001cd3c) main_mp2_pane_t

0xab0e,	// (0x00018341) pec_content_pane_ParamLimits

0xab0e,	// (0x00018341) pec_content_pane

0xa0bb,	// (0x000178ee) scroll_pane_cp015

0xab20,	// (0x00018353) pec_attribute_pane_ParamLimits

0xab20,	// (0x00018353) pec_attribute_pane

0x351a,	// (0x00010d4d) pec_content_pane_g1_ParamLimits

0x351a,	// (0x00010d4d) pec_content_pane_g1

0xab30,	// (0x00018363) pec_content_pane_t1_ParamLimits

0xab30,	// (0x00018363) pec_content_pane_t1

0xab42,	// (0x00018375) pec_content_pane_t2_ParamLimits

0xab42,	// (0x00018375) pec_content_pane_t2

0x0001,

0xf510,	// (0x0001cd43) pec_content_pane_t_ParamLimits

0xf510,	// (0x0001cd43) pec_content_pane_t

0x3526,	// (0x00010d59) list_single_graphic_pane_cp01_ParamLimits

0x3526,	// (0x00010d59) list_single_graphic_pane_cp01

0x9ac0,	// (0x000172f3) bg_popup_sub_pane_cp04

0xab54,	// (0x00018387) popup_mup_playback_window_g1

0xab60,	// (0x00018393) popup_mup_playback_window_t1

0xab75,	// (0x000183a8) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0001cd48) popup_mup_playback_window_t

0xabac,	// (0x000183df) main_image_pane_g1_ParamLimits

0xabac,	// (0x000183df) main_image_pane_g1

0xabef,	// (0x00018422) scroll_pane_cp018_ParamLimits

0xabef,	// (0x00018422) scroll_pane_cp018

0xac07,	// (0x0001843a) scroll_pane_cp016_ParamLimits

0xac07,	// (0x0001843a) scroll_pane_cp016

0x35f8,	// (0x00010e2b) smil2_image_pane_ParamLimits

0x35f8,	// (0x00010e2b) smil2_image_pane

0x362e,	// (0x00010e61) smil2_root_pane_ParamLimits

0x362e,	// (0x00010e61) smil2_root_pane

0x3666,	// (0x00010e99) smil2_text_pane_ParamLimits

0x3666,	// (0x00010e99) smil2_text_pane

0x9865,	// (0x00017098) bg_list_pane_cp06

0xac43,	// (0x00018476) grid_radio_pane

0x9865,	// (0x00017098) bg_popup_window_pane_cp06

0xac4d,	// (0x00018480) main_fmradio_pane_t1

0xa6a3,	// (0x00017ed6) heading_pane_cp04

0xac5b,	// (0x0001848e) main_fmradio_pane_t2

0xbc37,	// (0x0001946a) popup_cale_lunar_info_window_g1

0xac69,	// (0x0001849c) main_fmradio_pane_t3

0xbc3f,	// (0x00019472) popup_cale_lunar_info_window_g2

0xac79,	// (0x000184ac) main_fmradio_pane_t4

0x0001,

0xac87,	// (0x000184ba) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0001ce23) popup_cale_lunar_info_window_g

0xf52a,	// (0x0001cd5d) main_fmradio_pane_t

0xac95,	// (0x000184c8) wait_bar_pane_cp03

0xac9d,	// (0x000184d0) cell_fmradio_pane_ParamLimits

0xac9d,	// (0x000184d0) cell_fmradio_pane

0xaaf2,	// (0x00018325) cell_fmradio_pane_g1_ParamLimits

0xaaf2,	// (0x00018325) cell_fmradio_pane_g1

0x9865,	// (0x00017098) grid_highlight_pane_cp011

0xacb2,	// (0x000184e5) poc_content_pane_ParamLimits

0xacb2,	// (0x000184e5) poc_content_pane

0xacc4,	// (0x000184f7) scroll_pane_cp019

0x36f6,	// (0x00010f29) popup_call_poc_act_window_ParamLimits

0x36f6,	// (0x00010f29) popup_call_poc_act_window

0x371a,	// (0x00010f4d) popup_call_poc_inact_window_ParamLimits

0x371a,	// (0x00010f4d) popup_call_poc_inact_window

0xf5c7,	// (0x0001cdfa) bg_popup_call_poc_act_pane_g

0xbbaf,	// (0x000193e2) bg_popup_call_poc_inact_pane_g1

0xbbb7,	// (0x000193ea) bg_popup_call_poc_inact_pane_g2

0xaccc,	// (0x000184ff) popup_call_poc_act_window_g2

0xbbbf,	// (0x000193f2) bg_popup_call_poc_inact_pane_g3

0xbbc7,	// (0x000193fa) bg_popup_call_poc_inact_pane_g4

0xbbcf,	// (0x00019402) bg_popup_call_poc_inact_pane_g5

0xacd4,	// (0x00018507) popup_call_poc_act_window_t1_ParamLimits

0xacd4,	// (0x00018507) popup_call_poc_act_window_t1

0xacfc,	// (0x0001852f) popup_call_poc_act_window_t2_ParamLimits

0xacfc,	// (0x0001852f) popup_call_poc_act_window_t2

0xad24,	// (0x00018557) popup_call_poc_act_window_t3_ParamLimits

0xad24,	// (0x00018557) popup_call_poc_act_window_t3

0xad4c,	// (0x0001857f) popup_call_poc_act_window_t4_ParamLimits

0xad4c,	// (0x0001857f) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0001cd68) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0001cd68) popup_call_poc_act_window_t

0xbbd7,	// (0x0001940a) bg_popup_call_poc_inact_pane_g6

0xbbdf,	// (0x00019412) bg_popup_call_poc_inact_pane_g7

0xbbe7,	// (0x0001941a) bg_popup_call_poc_inact_pane_g8

0xad5e,	// (0x00018591) popup_call_poc_inact_window_g2

0xbbef,	// (0x00019422) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0001cde7) bg_popup_call_poc_inact_pane_g

0xad66,	// (0x00018599) popup_call_poc_inact_window_t1_ParamLimits

0xad66,	// (0x00018599) popup_call_poc_inact_window_t1

0xad7b,	// (0x000185ae) popup_call_poc_inact_window_t2_ParamLimits

0xad7b,	// (0x000185ae) popup_call_poc_inact_window_t2

0xad90,	// (0x000185c3) popup_call_poc_inact_window_t3_ParamLimits

0xad90,	// (0x000185c3) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0001cd71) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0001cd71) popup_call_poc_inact_window_t

0xbdaf,	// (0x000195e2) context_pane_ParamLimits

0x3fc5,	// (0x000117f8) signal_pane_ParamLimits

0xa8f1,	// (0x00018124) main_call2_pane

0xbd9d,	// (0x000195d0) popup_phob_thumbnail2_window_ParamLimits

0xbd9d,	// (0x000195d0) popup_phob_thumbnail2_window

0xaaa2,	// (0x000182d5) aid_hotspot_pointer_arrow_pane

0xaaaa,	// (0x000182dd) aid_hotspot_pointer_hand_pane

0x3a85,	// (0x000112b8) phob_pre_status_pane_g5

0x1823,	// (0x0000f056) cams_zoom_pane_ParamLimits

0x1832,	// (0x0000f065) image_vga_pane_ParamLimits

0x184c,	// (0x0000f07f) main_camera_pane_g1_ParamLimits

0x185e,	// (0x0000f091) main_camera_pane_g2_ParamLimits

0x186e,	// (0x0000f0a1) main_camera_pane_g3_ParamLimits

0x1882,	// (0x0000f0b5) main_camera_pane_g4_ParamLimits

0x1896,	// (0x0000f0c9) main_camera_pane_g5_ParamLimits

0x18aa,	// (0x0000f0dd) main_camera_pane_g6_ParamLimits

0x18be,	// (0x0000f0f1) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0001ca70) main_camera_pane_g_ParamLimits

0x18d2,	// (0x0000f105) main_camera_pane_t1_ParamLimits

0x18e8,	// (0x0000f11b) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0001ca81) main_camera_pane_t_ParamLimits

0x9ac0,	// (0x000172f3) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ac0,	// (0x000172f3) bg_popup_preview_window_pane_cp01

0xada5,	// (0x000185d8) popup_phob_thumbnail2_window_g1_ParamLimits

0xada5,	// (0x000185d8) popup_phob_thumbnail2_window_g1

0x9865,	// (0x00017098) call2_cli_visual_pane

0x374e,	// (0x00010f81) popup_call2_audio_conf_window_ParamLimits

0x374e,	// (0x00010f81) popup_call2_audio_conf_window

0x3776,	// (0x00010fa9) popup_call2_audio_first_window_ParamLimits

0x3776,	// (0x00010fa9) popup_call2_audio_first_window

0x380c,	// (0x0001103f) popup_call2_audio_in_window_ParamLimits

0x380c,	// (0x0001103f) popup_call2_audio_in_window

0x3858,	// (0x0001108b) popup_call2_audio_out_window_ParamLimits

0x3858,	// (0x0001108b) popup_call2_audio_out_window

0x38ca,	// (0x000110fd) popup_call2_audio_second_window_ParamLimits

0x38ca,	// (0x000110fd) popup_call2_audio_second_window

0x3930,	// (0x00011163) popup_call2_audio_wait_window_ParamLimits

0x3930,	// (0x00011163) popup_call2_audio_wait_window

0x9865,	// (0x00017098) bg_popup_call2_act_pane_cp03

0x9aa2,	// (0x000172d5) list_conf_pane_cp

0xadb1,	// (0x000185e4) popup_call2_audio_conf_window_t1

0xadbf,	// (0x000185f2) list_single_graphic_popup_conf2_pane_ParamLimits

0xadbf,	// (0x000185f2) list_single_graphic_popup_conf2_pane

0xa712,	// (0x00017f45) list_highlight_pane_cp04

0xadd2,	// (0x00018605) list_single_graphic_popup_conf2_pane_g1

0xa723,	// (0x00017f56) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0001cd78) list_single_graphic_popup_conf2_pane_g

0xaddc,	// (0x0001860f) list_single_graphic_popup_conf2_pane_t1

0xadea,	// (0x0001861d) bg_popup_call2_act_pane_cp01_ParamLimits

0xadea,	// (0x0001861d) bg_popup_call2_act_pane_cp01

0xae74,	// (0x000186a7) call_type_pane_cp05_ParamLimits

0xae74,	// (0x000186a7) call_type_pane_cp05

0xaec8,	// (0x000186fb) popup_call2_audio_second_window_g1_ParamLimits

0xaec8,	// (0x000186fb) popup_call2_audio_second_window_g1

0xaf1c,	// (0x0001874f) popup_call2_audio_second_window_g2_ParamLimits

0xaf1c,	// (0x0001874f) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0001cd7d) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0001cd7d) popup_call2_audio_second_window_g

0xaf81,	// (0x000187b4) popup_call2_audio_second_window_t1_ParamLimits

0xaf81,	// (0x000187b4) popup_call2_audio_second_window_t1

0xb03c,	// (0x0001886f) popup_call2_audio_second_window_t2_ParamLimits

0xb03c,	// (0x0001886f) popup_call2_audio_second_window_t2

0xb08f,	// (0x000188c2) popup_call2_audio_second_window_t3_ParamLimits

0xb08f,	// (0x000188c2) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0001cd84) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0001cd84) popup_call2_audio_second_window_t

0x9865,	// (0x00017098) bg_popup_call2_in_pane_cp02

0x986f,	// (0x000170a2) call_type_pane_cp04

0x9877,	// (0x000170aa) popup_call2_audio_wait_window_g1

0x987f,	// (0x000170b2) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0001c95d) popup_call2_audio_wait_window_g

0x9887,	// (0x000170ba) popup_call2_audio_wait_window_t3

0xb182,	// (0x000189b5) bg_popup_call2_act_pane_ParamLimits

0xb182,	// (0x000189b5) bg_popup_call2_act_pane

0xb242,	// (0x00018a75) call_type_pane_cp03_ParamLimits

0xb242,	// (0x00018a75) call_type_pane_cp03

0xb2a6,	// (0x00018ad9) popup_call2_audio_first_window_g1_ParamLimits

0xb2a6,	// (0x00018ad9) popup_call2_audio_first_window_g1

0xb316,	// (0x00018b49) popup_call2_audio_first_window_g2_ParamLimits

0xb316,	// (0x00018b49) popup_call2_audio_first_window_g2

0xa9c2,	// (0x000181f5) popup_call2_audio_first_window_g3_ParamLimits

0xa9c2,	// (0x000181f5) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0001cd8d) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0001cd8d) popup_call2_audio_first_window_g

0xb3f4,	// (0x00018c27) popup_call2_audio_first_window_t1_ParamLimits

0xb3f4,	// (0x00018c27) popup_call2_audio_first_window_t1

0xb4f7,	// (0x00018d2a) popup_call2_audio_first_window_t4_ParamLimits

0xb4f7,	// (0x00018d2a) popup_call2_audio_first_window_t4

0xb5da,	// (0x00018e0d) popup_call2_audio_first_window_t5_ParamLimits

0xb5da,	// (0x00018e0d) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0001cd98) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0001cd98) popup_call2_audio_first_window_t

0x9ab8,	// (0x000172eb) bg_popup_call2_act_pane_g1

0xbc49,	// (0x0001947c) popup_cale_lunar_info_window_t1

0xbc57,	// (0x0001948a) popup_cale_lunar_info_window_t2

0xbc65,	// (0x00019498) popup_cale_lunar_info_window_t3

0x9865,	// (0x00017098) bg_popup_call2_bubble_pane

0xb6db,	// (0x00018f0e) bg_popup_call2_in_pane_cp01_ParamLimits

0xb6db,	// (0x00018f0e) bg_popup_call2_in_pane_cp01

0x9541,	// (0x00016d74) call_type_pane_cp02

0xb723,	// (0x00018f56) popup_call2_audio_out_window_g1_ParamLimits

0xb723,	// (0x00018f56) popup_call2_audio_out_window_g1

0xb74f,	// (0x00018f82) popup_call2_audio_out_window_g2_ParamLimits

0xb74f,	// (0x00018f82) popup_call2_audio_out_window_g2

0xb777,	// (0x00018faa) popup_call2_audio_out_window_g3_ParamLimits

0xb777,	// (0x00018faa) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0001cda1) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0001cda1) popup_call2_audio_out_window_g

0xb7b2,	// (0x00018fe5) popup_call2_audio_out_window_t1_ParamLimits

0xb7b2,	// (0x00018fe5) popup_call2_audio_out_window_t1

0xb811,	// (0x00019044) popup_call2_audio_out_window_t2_ParamLimits

0xb811,	// (0x00019044) popup_call2_audio_out_window_t2

0xb865,	// (0x00019098) popup_call2_audio_out_window_t3_ParamLimits

0xb865,	// (0x00019098) popup_call2_audio_out_window_t3

0xb87b,	// (0x000190ae) popup_call2_audio_out_window_t4_ParamLimits

0xb87b,	// (0x000190ae) popup_call2_audio_out_window_t4

0xb891,	// (0x000190c4) popup_call2_audio_out_window_t5_ParamLimits

0xb891,	// (0x000190c4) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0001cdaa) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0001cdaa) popup_call2_audio_out_window_t

0xb8f5,	// (0x00019128) bg_popup_call2_in_pane_ParamLimits

0xb8f5,	// (0x00019128) bg_popup_call2_in_pane

0xb951,	// (0x00019184) popup_call2_audio_in_window_g1_ParamLimits

0xb951,	// (0x00019184) popup_call2_audio_in_window_g1

0xb989,	// (0x000191bc) popup_call2_audio_in_window_g2_ParamLimits

0xb989,	// (0x000191bc) popup_call2_audio_in_window_g2

0xb9c1,	// (0x000191f4) popup_call2_audio_in_window_g3_ParamLimits

0xb9c1,	// (0x000191f4) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0001cdb7) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0001cdb7) popup_call2_audio_in_window_g

0xba19,	// (0x0001924c) popup_call2_audio_in_window_t1_ParamLimits

0xba19,	// (0x0001924c) popup_call2_audio_in_window_t1

0xba99,	// (0x000192cc) popup_call2_audio_in_window_t2_ParamLimits

0xba99,	// (0x000192cc) popup_call2_audio_in_window_t2

0xbb19,	// (0x0001934c) popup_call2_audio_in_window_t3_ParamLimits

0xbb19,	// (0x0001934c) popup_call2_audio_in_window_t3

0xbb33,	// (0x00019366) popup_call2_audio_in_window_t4_ParamLimits

0xbb33,	// (0x00019366) popup_call2_audio_in_window_t4

0xbb45,	// (0x00019378) popup_call2_audio_in_window_t5_ParamLimits

0xbb45,	// (0x00019378) popup_call2_audio_in_window_t5

0xbb5a,	// (0x0001938d) popup_call2_audio_in_window_t6_ParamLimits

0xbb5a,	// (0x0001938d) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0001cdc0) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0001cdc0) popup_call2_audio_in_window_t

0x9ab8,	// (0x000172eb) bg_popup_call2_in_pane_g1

0xbc73,	// (0x000194a6) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0001ce28) popup_cale_lunar_info_window_t

0x9ac0,	// (0x000172f3) bg_popup_call2_rect_pane_ParamLimits

0x9ac0,	// (0x000172f3) bg_popup_call2_rect_pane

0x9865,	// (0x00017098) call2_cli_visual_graphic_pane

0x9865,	// (0x00017098) call2_cli_visual_text_pane

0xbe62,	// (0x00019695) smil_status_volume_pane_g3

0x0002,

0x9c26,	// (0x00017459) call2_cli_visual_graphic_pane_g1

0x9c26,	// (0x00017459) call2_cli_visual_graphic_pane_g2

0x9c26,	// (0x00017459) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0001cdcd) call2_cli_visual_graphic_pane_g

0xbb6f,	// (0x000193a2) bg_popup_call2_rect_pane_g1

0x9cce,	// (0x00017501) bg_popup_call2_rect_pane_g2

0xbb77,	// (0x000193aa) bg_popup_call2_rect_pane_g3

0xbb7f,	// (0x000193b2) bg_popup_call2_rect_pane_g4

0xbb87,	// (0x000193ba) bg_popup_call2_rect_pane_g5

0xbb8f,	// (0x000193c2) bg_popup_call2_rect_pane_g6

0xbb97,	// (0x000193ca) bg_popup_call2_rect_pane_g7

0xbb9f,	// (0x000193d2) bg_popup_call2_rect_pane_g8

0xbba7,	// (0x000193da) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0001cdd4) bg_popup_call2_rect_pane_g

0xbbaf,	// (0x000193e2) bg_popup_call2_bubble_pane_g1

0xbbb7,	// (0x000193ea) bg_popup_call2_bubble_pane_g2

0xbbbf,	// (0x000193f2) bg_popup_call2_bubble_pane_g3

0xbbc7,	// (0x000193fa) bg_popup_call2_bubble_pane_g4

0xbbcf,	// (0x00019402) bg_popup_call2_bubble_pane_g5

0xbbd7,	// (0x0001940a) bg_popup_call2_bubble_pane_g6

0xbbdf,	// (0x00019412) bg_popup_call2_bubble_pane_g7

0xbbe7,	// (0x0001941a) bg_popup_call2_bubble_pane_g8

0xbbef,	// (0x00019422) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0001cde7) bg_popup_call2_bubble_pane_g

0x142c,	// (0x0000ec5f) aid_cale_week_size_cell_pane

0x1902,	// (0x0000f135) aid_cams_cif_uncrop_pane_ParamLimits

0x1902,	// (0x0000f135) aid_cams_cif_uncrop_pane

0x1abb,	// (0x0000f2ee) aid_cams_size_cell_ParamLimits

0x1abb,	// (0x0000f2ee) aid_cams_size_cell

0x1acf,	// (0x0000f302) grid_cams_pane_ParamLimits

0x1ae9,	// (0x0000f31c) linegrid_cams_pane_ParamLimits

0x1c05,	// (0x0000f438) call_video_pane_t1

0x1c17,	// (0x0000f44a) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0001cad4) call_video_pane_t

0x1fd9,	// (0x0000f80c) aid_cale_month_size_cell_pane_ParamLimits

0x1fd9,	// (0x0000f80c) aid_cale_month_size_cell_pane

0xf63e,	// (0x0001ce71) smil_status_volume_pane_g

0xbe6f,	// (0x000196a2) volume_smil_pane_ParamLimits

0x93e5,	// (0x00016c18) aid_popup2_width_pane

0x1394,	// (0x0000ebc7) cell_qdial_pane_g4_ParamLimits

0x1394,	// (0x0000ebc7) cell_qdial_pane_g4

0x2bc3,	// (0x000103f6) aid_blid_cardinal_pane_ParamLimits

0x2bd3,	// (0x00010406) aid_blid_destination_pane_ParamLimits

0x2bd3,	// (0x00010406) aid_blid_destination_pane

0x9ac0,	// (0x000172f3) bg_popup_call_poc_act_pane_ParamLimits

0x9ac0,	// (0x000172f3) bg_popup_call_poc_act_pane

0x9ac0,	// (0x000172f3) bg_popup_call_poc_inact_pane_ParamLimits

0x9ac0,	// (0x000172f3) bg_popup_call_poc_inact_pane

0xbbf7,	// (0x0001942a) bg_popup_call_poc_act_pane_g1

0xbbff,	// (0x00019432) bg_popup_call_poc_act_pane_g2

0xbc07,	// (0x0001943a) bg_popup_call_poc_act_pane_g3

0xbbc7,	// (0x000193fa) bg_popup_call_poc_act_pane_g4

0xbbcf,	// (0x00019402) bg_popup_call_poc_act_pane_g5

0xbc0f,	// (0x00019442) bg_popup_call_poc_act_pane_g6

0xbbdf,	// (0x00019412) bg_popup_call_poc_act_pane_g7

0xbc17,	// (0x0001944a) bg_popup_call_poc_act_pane_g8

0x9865,	// (0x00017098) main_usb_pane

0xbd74,	// (0x000195a7) popup_cale_lunar_info_window

0x1e59,	// (0x0000f68c) im_reading_pane_t1_ParamLimits

0xa013,	// (0x00017846) list_im_pane_ParamLimits

0xa024,	// (0x00017857) scroll_pane_cp07_ParamLimits

0x9865,	// (0x00017098) grid_highlight_pane_cp012

0x9ac0,	// (0x000172f3) mup_scale_pane_ParamLimits

0xaaf2,	// (0x00018325) main_usb_pane_g1_ParamLimits

0xaaf2,	// (0x00018325) main_usb_pane_g1

0x3991,	// (0x000111c4) main_usb_pane_g2_ParamLimits

0x3991,	// (0x000111c4) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0001ce11) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0001ce11) main_usb_pane_g

0x39a7,	// (0x000111da) main_usb_pane_t1_ParamLimits

0x39a7,	// (0x000111da) main_usb_pane_t1

0x39b9,	// (0x000111ec) main_usb_pane_t2_ParamLimits

0x39b9,	// (0x000111ec) main_usb_pane_t2

0x39cb,	// (0x000111fe) main_usb_pane_t3_ParamLimits

0x39cb,	// (0x000111fe) main_usb_pane_t3

0x39dd,	// (0x00011210) main_usb_pane_t4_ParamLimits

0x39dd,	// (0x00011210) main_usb_pane_t4

0x39f2,	// (0x00011225) main_usb_pane_t5_ParamLimits

0x39f2,	// (0x00011225) main_usb_pane_t5

0x3a07,	// (0x0001123a) main_usb_pane_t6_ParamLimits

0x3a07,	// (0x0001123a) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0001ce16) main_usb_pane_t_ParamLimits

0x2b62,	// (0x00010395) aid_text_placing

0x2b6d,	// (0x000103a0) main_location2_pane_t1_ParamLimits

0x2b83,	// (0x000103b6) main_location2_pane_t2_ParamLimits

0x2b99,	// (0x000103cc) main_location2_pane_t3_ParamLimits

0x2baf,	// (0x000103e2) main_location2_pane_t4_ParamLimits

0x2baf,	// (0x000103e2) main_location2_pane_t4

0xf402,	// (0x0001cc35) main_location2_pane_t_ParamLimits

0x9afc,	// (0x0001732f) find_pinb_pane_g2_ParamLimits

0x9afc,	// (0x0001732f) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0001c983) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0001c983) find_pinb_pane_g

0x9b08,	// (0x0001733b) find_pinb_pane_t1_ParamLimits

0x9b1a,	// (0x0001734d) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0001c988) find_pinb_pane_t_ParamLimits

0x9865,	// (0x00017098) main_call3_pane

0x234d,	// (0x0000fb80) cale_month_day_heading_pane_t1_ParamLimits

0x23ab,	// (0x0000fbde) cale_month_day_heading_pane_t2_ParamLimits

0x2410,	// (0x0000fc43) cale_month_day_heading_pane_t3_ParamLimits

0x2475,	// (0x0000fca8) cale_month_day_heading_pane_t4_ParamLimits

0x24da,	// (0x0000fd0d) cale_month_day_heading_pane_t5_ParamLimits

0x253f,	// (0x0000fd72) cale_month_day_heading_pane_t6_ParamLimits

0x25a4,	// (0x0000fdd7) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0001cb0c) cale_month_day_heading_pane_t_ParamLimits

0xa29a,	// (0x00017acd) smil_status_volume_pane

0x3449,	// (0x00010c7c) postcard_address_pane_ParamLimits

0x3449,	// (0x00010c7c) postcard_address_pane

0x345f,	// (0x00010c92) postcard_message_pane_ParamLimits

0x345f,	// (0x00010c92) postcard_message_pane

0x396a,	// (0x0001119d) call2_cli_visual_pane_t1_ParamLimits

0x396a,	// (0x0001119d) call2_cli_visual_pane_t1

0x41d6,	// (0x00011a09) postcard_message_pane_t1_ParamLimits

0x41d6,	// (0x00011a09) postcard_message_pane_t1

0xbe84,	// (0x000196b7) postcard_address_pane_t1_ParamLimits

0xbe84,	// (0x000196b7) postcard_address_pane_t1

0x41c2,	// (0x000119f5) popup_call3_audio_in_window_ParamLimits

0x41c2,	// (0x000119f5) popup_call3_audio_in_window

0x4047,	// (0x0001187a) bg_popup_call3_in_pane_ParamLimits

0x4047,	// (0x0001187a) bg_popup_call3_in_pane

0x40c3,	// (0x000118f6) popup_call3_audio_in_window_g1_ParamLimits

0x40c3,	// (0x000118f6) popup_call3_audio_in_window_g1

0x40e3,	// (0x00011916) popup_call3_audio_in_window_g2_ParamLimits

0x40e3,	// (0x00011916) popup_call3_audio_in_window_g2

0x4103,	// (0x00011936) popup_call3_audio_in_window_g3_ParamLimits

0x4103,	// (0x00011936) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0001ce78) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0001ce78) popup_call3_audio_in_window_g

0x4134,	// (0x00011967) popup_call3_audio_in_window_t1_ParamLimits

0x4134,	// (0x00011967) popup_call3_audio_in_window_t1

0x4172,	// (0x000119a5) popup_call3_audio_in_window_t2_ParamLimits

0x4172,	// (0x000119a5) popup_call3_audio_in_window_t2

0x41b0,	// (0x000119e3) popup_call3_audio_in_window_t3_ParamLimits

0x41b0,	// (0x000119e3) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0001ce81) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0001ce81) popup_call3_audio_in_window_t

0xa8f1,	// (0x00018124) bg_popup_call3_rect_pane

0xbb6f,	// (0x000193a2) bg_popup_call3_rect_pane_g1

0x9cce,	// (0x00017501) bg_popup_call3_rect_pane_g2

0xbb77,	// (0x000193aa) bg_popup_call3_rect_pane_g3

0xbb7f,	// (0x000193b2) bg_popup_call3_rect_pane_g4

0xbb87,	// (0x000193ba) bg_popup_call3_rect_pane_g5

0xbb8f,	// (0x000193c2) bg_popup_call3_rect_pane_g6

0xbb97,	// (0x000193ca) bg_popup_call3_rect_pane_g7

0x2fab,	// (0x000107de) mup_visualizer_osc_pane

0xa9d0,	// (0x00018203) mup_visualizer_spec_pane

0x4077,	// (0x000118aa) call3_video_qcif_pane_ParamLimits

0x4077,	// (0x000118aa) call3_video_qcif_pane

0x408a,	// (0x000118bd) call3_video_qcif_uncrop_pane_ParamLimits

0x408a,	// (0x000118bd) call3_video_qcif_uncrop_pane

0x409a,	// (0x000118cd) call3_video_subqcif_pane_ParamLimits

0x409a,	// (0x000118cd) call3_video_subqcif_pane

0x40b0,	// (0x000118e3) call3_video_subqcif_uncrop_pane_ParamLimits

0x40b0,	// (0x000118e3) call3_video_subqcif_uncrop_pane

0x4123,	// (0x00011956) popup_call3_audio_in_window_g4_ParamLimits

0x4123,	// (0x00011956) popup_call3_audio_in_window_g4

0x4036,	// (0x00011869) mup_spec_half_pane

0x403f,	// (0x00011872) mup_spec_half_pane_cp

0xbe22,	// (0x00019655) mup_osc_middle_pane

0xbe2b,	// (0x0001965e) mup_visualizer_osc_pane_g1

0x4016,	// (0x00011849) mup_spec_bar_pane_ParamLimits

0x4016,	// (0x00011849) mup_spec_bar_pane

0xbe0f,	// (0x00019642) mup_spec_bar_pane_g1

0xbe19,	// (0x0001964c) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0001ce6c) mup_spec_bar_pane_g

0x142c,	// (0x0000ec5f) aid_cale_week_size_cell_pane_ParamLimits

0x143f,	// (0x0000ec72) bg_cale_heading_pane_ParamLimits

0x9d58,	// (0x0001758b) bg_cale_pane_cp01_ParamLimits

0x145b,	// (0x0000ec8e) cale_week_corner_pane_ParamLimits

0x1471,	// (0x0000eca4) cale_week_day_heading_pane_ParamLimits

0x148d,	// (0x0000ecc0) cale_week_scroll_pane_g1_ParamLimits

0x14a6,	// (0x0000ecd9) cale_week_scroll_pane_g2_ParamLimits

0x14b7,	// (0x0000ecea) cale_week_scroll_pane_g3_ParamLimits

0x14c8,	// (0x0000ecfb) cale_week_scroll_pane_g4_ParamLimits

0x14d9,	// (0x0000ed0c) cale_week_scroll_pane_g5_ParamLimits

0x14ea,	// (0x0000ed1d) cale_week_scroll_pane_g6_ParamLimits

0x14fb,	// (0x0000ed2e) cale_week_scroll_pane_g7_ParamLimits

0x150c,	// (0x0000ed3f) cale_week_scroll_pane_g8_ParamLimits

0x151d,	// (0x0000ed50) cale_week_scroll_pane_g9_ParamLimits

0x152e,	// (0x0000ed61) cale_week_scroll_pane_g10_ParamLimits

0x153f,	// (0x0000ed72) cale_week_scroll_pane_g11_ParamLimits

0x1550,	// (0x0000ed83) cale_week_scroll_pane_g12_ParamLimits

0x1561,	// (0x0000ed94) cale_week_scroll_pane_g13_ParamLimits

0x157a,	// (0x0000edad) cale_week_scroll_pane_g14_ParamLimits

0x1593,	// (0x0000edc6) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0001ca14) cale_week_scroll_pane_g_ParamLimits

0x15ac,	// (0x0000eddf) cale_week_time_pane_ParamLimits

0x15bd,	// (0x0000edf0) grid_cale_week_pane_ParamLimits

0x9d71,	// (0x000175a4) listscroll_cale_week_pane_t1

0x15d8,	// (0x0000ee0b) scroll_pane_cp08_ParamLimits

0x202a,	// (0x0000f85d) cale_month_corner_pane_ParamLimits

0xa23a,	// (0x00017a6d) cale_month_pane_t1

0x230e,	// (0x0000fb41) cale_month_week_pane_ParamLimits

0x2986,	// (0x000101b9) popup_call_status_window_g1_ParamLimits

0x299a,	// (0x000101cd) popup_call_status_window_g2_ParamLimits

0x29ae,	// (0x000101e1) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0001cbbc) popup_call_status_window_g_ParamLimits

0xa624,	// (0x00017e57) aid_call2_pane

0x3273,	// (0x00010aa6) msg_header_pane_g1

0x3449,	// (0x00010c7c) postcard_address2_pane_ParamLimits

0x3449,	// (0x00010c7c) postcard_address2_pane

0x345f,	// (0x00010c92) postcard_message2_pane_ParamLimits

0x345f,	// (0x00010c92) postcard_message2_pane

0x3fd3,	// (0x00011806) message2_row_pane_ParamLimits

0x3fd3,	// (0x00011806) message2_row_pane

0xbdca,	// (0x000195fd) address2_row_pane_ParamLimits

0xbdca,	// (0x000195fd) address2_row_pane

0xbddd,	// (0x00019610) postcard_message2_row_pane_g1

0xbde5,	// (0x00019618) postcard_message2_row_pane_t1

0xbddd,	// (0x00019610) address2_row_pane_g1

0xbde5,	// (0x00019618) address2_row_pane_t1

0x17e6,	// (0x0000f019) aid_size_cell_vorec

0x9865,	// (0x00017098) main_rss_pane

0x3ff6,	// (0x00011829) rss_list_single_pane_ParamLimits

0x3ff6,	// (0x00011829) rss_list_single_pane

0xbdf3,	// (0x00019626) rss_list_single_pane_t1

0xbe01,	// (0x00019634) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0001ce67) rss_list_single_pane_t

0x9865,	// (0x00017098) main_camera2_pane

0x9865,	// (0x00017098) main_video2_pane

0x4245,	// (0x00011a78) cams_zoom_pane_cp2_ParamLimits

0x4245,	// (0x00011a78) cams_zoom_pane_cp2

0x425c,	// (0x00011a8f) image2_vga_pane_ParamLimits

0x425c,	// (0x00011a8f) image2_vga_pane

0x42a4,	// (0x00011ad7) main_camera2_pane_g1_ParamLimits

0x42a4,	// (0x00011ad7) main_camera2_pane_g1

0x42c4,	// (0x00011af7) main_camera2_pane_g2_ParamLimits

0x42c4,	// (0x00011af7) main_camera2_pane_g2

0x42db,	// (0x00011b0e) main_camera2_pane_g3_ParamLimits

0x42db,	// (0x00011b0e) main_camera2_pane_g3

0x42f2,	// (0x00011b25) main_camera2_pane_g4_ParamLimits

0x42f2,	// (0x00011b25) main_camera2_pane_g4

0x4309,	// (0x00011b3c) main_camera2_pane_g5_ParamLimits

0x4309,	// (0x00011b3c) main_camera2_pane_g5

0x4320,	// (0x00011b53) main_camera2_pane_g6_ParamLimits

0x4320,	// (0x00011b53) main_camera2_pane_g6

0x4337,	// (0x00011b6a) main_camera2_pane_g7_ParamLimits

0x4337,	// (0x00011b6a) main_camera2_pane_g7

0x434e,	// (0x00011b81) main_camera2_pane_g8_ParamLimits

0x434e,	// (0x00011b81) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0001ce88) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0001ce88) main_camera2_pane_g

0x437c,	// (0x00011baf) main_camera2_pane_t1_ParamLimits

0x437c,	// (0x00011baf) main_camera2_pane_t1

0x43b1,	// (0x00011be4) main_camera2_pane_t2_ParamLimits

0x43b1,	// (0x00011be4) main_camera2_pane_t2

0x43ce,	// (0x00011c01) main_camera2_pane_t3_ParamLimits

0x43ce,	// (0x00011c01) main_camera2_pane_t3

0x442c,	// (0x00011c5f) main_camera2_pane_t4_ParamLimits

0x442c,	// (0x00011c5f) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0001ce9b) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0001ce9b) main_camera2_pane_t

0x44b5,	// (0x00011ce8) cams_zoom_pane_cp4_ParamLimits

0x44b5,	// (0x00011ce8) cams_zoom_pane_cp4

0x44cb,	// (0x00011cfe) image2_cif_pane_ParamLimits

0x44cb,	// (0x00011cfe) image2_cif_pane

0x44f6,	// (0x00011d29) image2_subqcif_pane_ParamLimits

0x44f6,	// (0x00011d29) image2_subqcif_pane

0x4511,	// (0x00011d44) main_video2_pane_g1_ParamLimits

0x4511,	// (0x00011d44) main_video2_pane_g1

0x452b,	// (0x00011d5e) main_video2_pane_g2_ParamLimits

0x452b,	// (0x00011d5e) main_video2_pane_g2

0x4541,	// (0x00011d74) main_video2_pane_g3_ParamLimits

0x4541,	// (0x00011d74) main_video2_pane_g3

0x4557,	// (0x00011d8a) main_video2_pane_g4_ParamLimits

0x4557,	// (0x00011d8a) main_video2_pane_g4

0x456d,	// (0x00011da0) main_video2_pane_g5_ParamLimits

0x456d,	// (0x00011da0) main_video2_pane_g5

0x4583,	// (0x00011db6) main_video2_pane_g6_ParamLimits

0x4583,	// (0x00011db6) main_video2_pane_g6

0x0005,

0xf677,	// (0x0001ceaa) main_video2_pane_g_ParamLimits

0xf677,	// (0x0001ceaa) main_video2_pane_g

0x459d,	// (0x00011dd0) main_video2_pane_t1_ParamLimits

0x459d,	// (0x00011dd0) main_video2_pane_t1

0x45c1,	// (0x00011df4) main_video2_pane_t2_ParamLimits

0x45c1,	// (0x00011df4) main_video2_pane_t2

0x4611,	// (0x00011e44) main_video2_pane_t3_ParamLimits

0x4611,	// (0x00011e44) main_video2_pane_t3

0x0002,

0xf684,	// (0x0001ceb7) main_video2_pane_t_ParamLimits

0xf684,	// (0x0001ceb7) main_video2_pane_t

0x3ac5,	// (0x000112f8) call_muted_g2

0x0001,

0xf626,	// (0x0001ce59) call_muted_g

0x9865,	// (0x00017098) main_mup2_pane

0x4659,	// (0x00011e8c) main_mup2_pane_g1_ParamLimits

0x4659,	// (0x00011e8c) main_mup2_pane_g1

0x4665,	// (0x00011e98) main_mup2_pane_g2_ParamLimits

0x4665,	// (0x00011e98) main_mup2_pane_g2

0xbfa5,	// (0x000197d8) main_mup_pane_g13_cp1

0xbfad,	// (0x000197e0) mup_volume_pane_cp1

0x4683,	// (0x00011eb6) main_mup2_pane_g4_ParamLimits

0x4683,	// (0x00011eb6) main_mup2_pane_g4

0x4695,	// (0x00011ec8) main_mup2_pane_g5_ParamLimits

0x4695,	// (0x00011ec8) main_mup2_pane_g5

0x46a7,	// (0x00011eda) main_mup2_pane_g6_ParamLimits

0x46a7,	// (0x00011eda) main_mup2_pane_g6

0x46b9,	// (0x00011eec) main_mup2_pane_g7_ParamLimits

0x46b9,	// (0x00011eec) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0001cebe) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0001cebe) main_mup2_pane_g

0x46d1,	// (0x00011f04) main_mup2_pane_t1_ParamLimits

0x46d1,	// (0x00011f04) main_mup2_pane_t1

0x46e7,	// (0x00011f1a) main_mup2_pane_t2_ParamLimits

0x46e7,	// (0x00011f1a) main_mup2_pane_t2

0x46fd,	// (0x00011f30) main_mup2_pane_t3_ParamLimits

0x46fd,	// (0x00011f30) main_mup2_pane_t3

0x4713,	// (0x00011f46) main_mup2_pane_t4_ParamLimits

0x4713,	// (0x00011f46) main_mup2_pane_t4

0x472b,	// (0x00011f5e) main_mup2_pane_t5_ParamLimits

0x472b,	// (0x00011f5e) main_mup2_pane_t5

0x4743,	// (0x00011f76) main_mup2_pane_t6_ParamLimits

0x4743,	// (0x00011f76) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0001cecd) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0001cecd) main_mup2_pane_t

0x4773,	// (0x00011fa6) mup2_visualizer_pane_ParamLimits

0x4773,	// (0x00011fa6) mup2_visualizer_pane

0x47a1,	// (0x00011fd4) mup_progress_pane_cp_ParamLimits

0x47a1,	// (0x00011fd4) mup_progress_pane_cp

0xbf87,	// (0x000197ba) mup_volume_pane_cp_ParamLimits

0xbf87,	// (0x000197ba) mup_volume_pane_cp

0x47b7,	// (0x00011fea) mup2_visualizer_pane_g1_ParamLimits

0x47b7,	// (0x00011fea) mup2_visualizer_pane_g1

0xbec6,	// (0x000196f9) mup2_visualizer_pane_g2_ParamLimits

0xbec6,	// (0x000196f9) mup2_visualizer_pane_g2

0x47cc,	// (0x00011fff) mup2_visualizer_pane_g3_ParamLimits

0x47cc,	// (0x00011fff) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0001ceda) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0001ceda) mup2_visualizer_pane_g

0xac3b,	// (0x0001846e) aid_size_cell_fmradio

0x3c75,	// (0x000114a8) aid_height_parent_landcape

0xa0a2,	// (0x000178d5) wml_content_pane_cp

0xa0aa,	// (0x000178dd) wml_tabs_pane

0xa0b3,	// (0x000178e6) popup_wml_miniature_window

0xa0bb,	// (0x000178ee) scroll_pane_cp021

0xa0cf,	// (0x00017902) wml_content_pane_comp8

0x9865,	// (0x00017098) bg_popup_sub_pane_cp05

0xbee4,	// (0x00019717) popup_wml_miniature_window_g1

0xbeec,	// (0x0001971f) wml_miniature_view_pane

0x47d8,	// (0x0001200b) aid_size_wml_view

0x47e0,	// (0x00012013) wml_miniature_view_pane_g1

0x47e9,	// (0x0001201c) wml_miniature_view_pane_g2

0x47f2,	// (0x00012025) wml_miniature_view_pane_g3

0x47fa,	// (0x0001202d) wml_miniature_view_pane_g4

0x4802,	// (0x00012035) wml_miniature_view_pane_g5

0x480a,	// (0x0001203d) wml_miniature_view_pane_g6

0x4812,	// (0x00012045) wml_miniature_view_pane_g7

0x481a,	// (0x0001204d) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0001cee1) wml_miniature_view_pane_g

0xbef4,	// (0x00019727) background_graphic_ParamLimits

0xbef4,	// (0x00019727) background_graphic

0xbf00,	// (0x00019733) wml_tabs_2_pane

0xbf09,	// (0x0001973c) wml_tabs_3_pane_ParamLimits

0xbf09,	// (0x0001973c) wml_tabs_3_pane

0xbf1b,	// (0x0001974e) wml_tabs_4_pane_ParamLimits

0xbf1b,	// (0x0001974e) wml_tabs_4_pane

0xbf31,	// (0x00019764) wml_tabs_5_pane_ParamLimits

0xbf31,	// (0x00019764) wml_tabs_5_pane

0xbf4b,	// (0x0001977e) wml_tabs_pane_g2_ParamLimits

0xbf4b,	// (0x0001977e) wml_tabs_pane_g2

0xbf5f,	// (0x00019792) wml_tabs_pane_g3_ParamLimits

0xbf5f,	// (0x00019792) wml_tabs_pane_g3

0x4822,	// (0x00012055) wml_tabs_2_active_pane_ParamLimits

0x4822,	// (0x00012055) wml_tabs_2_active_pane

0x4836,	// (0x00012069) wml_tabs_2_passive_pane_ParamLimits

0x4836,	// (0x00012069) wml_tabs_2_passive_pane

0x484a,	// (0x0001207d) wml_tabs_3_active_pane_cp_ParamLimits

0x484a,	// (0x0001207d) wml_tabs_3_active_pane_cp

0x485f,	// (0x00012092) wml_tabs_3_passive_pane_ParamLimits

0x485f,	// (0x00012092) wml_tabs_3_passive_pane

0x4872,	// (0x000120a5) wml_tabs_3_passive_pane_cp_ParamLimits

0x4872,	// (0x000120a5) wml_tabs_3_passive_pane_cp

0x4889,	// (0x000120bc) tabs_4_active_pane

0x4891,	// (0x000120c4) tabs_4_passive_pane

0x489b,	// (0x000120ce) tabs_4_passive_pane_cp

0x48a3,	// (0x000120d6) tabs_4_passive_pane_cp2

0x3989,	// (0x000111bc) aid_height_text

0x2f7d,	// (0x000107b0) mup_volume_cont_pane_ParamLimits

0x2f7d,	// (0x000107b0) mup_volume_cont_pane

0x1030,	// (0x0000e863) aid_size_cell_pinb

0x103a,	// (0x0000e86d) aid_size_list_pinb

0x478d,	// (0x00011fc0) mup2_volume_cont_pane_ParamLimits

0x478d,	// (0x00011fc0) mup2_volume_cont_pane

0xbf73,	// (0x000197a6) mup2_volume_cont_pane_g1_ParamLimits

0xbf73,	// (0x000197a6) mup2_volume_cont_pane_g1

0x0d04,	// (0x0000e537) aid_size_cell_touch_ParamLimits

0x0d04,	// (0x0000e537) aid_size_cell_touch

0x0f1f,	// (0x0000e752) touch_pane_ParamLimits

0x0f1f,	// (0x0000e752) touch_pane

0x93d3,	// (0x00016c06) main_rss2_pane

0xbfb5,	// (0x000197e8) listscroll_rss2_pane

0xbfbe,	// (0x000197f1) rss2_navigation_pane

0xbfc6,	// (0x000197f9) list_rss2_pane

0xa7b7,	// (0x00017fea) scroll_pane_cp22

0xbfce,	// (0x00019801) rss2_navigation_pane_g1

0xbfd7,	// (0x0001980a) rss2_navigation_pane_g2

0xbfdf,	// (0x00019812) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0001cef2) rss2_navigation_pane_g

0xbfe7,	// (0x0001981a) rss2_navigation_pane_t1

0x48ad,	// (0x000120e0) rss2_list_single_pane_ParamLimits

0x48ad,	// (0x000120e0) rss2_list_single_pane

0xbff5,	// (0x00019828) rss2_list_single_pane_t2

0xc003,	// (0x00019836) rss2_list_single_pane_t3_ParamLimits

0xc003,	// (0x00019836) rss2_list_single_pane_t3

0xc020,	// (0x00019853) rss2_list_single_pane_t4

0x2770,	// (0x0000ffa3) smil_status_pane_g1

0x9444,	// (0x00016c77) main_image2_pane_ParamLimits

0x9444,	// (0x00016c77) main_image2_pane

0x4365,	// (0x00011b98) main_camera2_pane_g9_ParamLimits

0x4365,	// (0x00011b98) main_camera2_pane_g9

0x4481,	// (0x00011cb4) main_camera2_pane_t5_ParamLimits

0x4481,	// (0x00011cb4) main_camera2_pane_t5

0xbe9b,	// (0x000196ce) main_camera2_pane_t6_ParamLimits

0xbe9b,	// (0x000196ce) main_camera2_pane_t6

0x48c7,	// (0x000120fa) main_image2_pane_g1_ParamLimits

0x48c7,	// (0x000120fa) main_image2_pane_g1

0x36a0,	// (0x00010ed3) smil2_video_pane_ParamLimits

0x36a0,	// (0x00010ed3) smil2_video_pane

0x93f1,	// (0x00016c24) aid_zoom_text_primary_cp

0x943a,	// (0x00016c6d) popup_preview_fixed_window

0xa00b,	// (0x0001783e) im_reading_pane_g1

0x4237,	// (0x00011a6a) cams2_bc_adjust_pane_cp_ParamLimits

0x4237,	// (0x00011a6a) cams2_bc_adjust_pane_cp

0x44a7,	// (0x00011cda) cams2_bc_adjust_pane_ParamLimits

0x44a7,	// (0x00011cda) cams2_bc_adjust_pane

0xc02e,	// (0x00019861) cams2_bc_adjust_pane_g1

0xc036,	// (0x00019869) cams2_slider_pane

0xc03f,	// (0x00019872) cams2_slider_pane_g1

0xc048,	// (0x0001987b) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0001cef9) cams2_slider_pane_g

0x112a,	// (0x0000e95d) calc_display_pane_ParamLimits

0x1150,	// (0x0000e983) calc_paper_pane_ParamLimits

0x1173,	// (0x0000e9a6) grid_calc_pane_ParamLimits

0xa686,	// (0x00017eb9) popup_clock_digital_window_t1_ParamLimits

0xabd8,	// (0x0001840b) main_image_pane_t1

0x110c,	// (0x0000e93f) aid_size_cell_calc_ParamLimits

0x110c,	// (0x0000e93f) aid_size_cell_calc

0x3cbb,	// (0x000114ee) popup_blid_sat_info2_window_ParamLimits

0x3cbb,	// (0x000114ee) popup_blid_sat_info2_window

0xc06a,	// (0x0001989d) aid_size_cell_blid

0xc072,	// (0x000198a5) bg_popup_window_pane_cp07

0xc095,	// (0x000198c8) grid_popup_blid_pane

0xc09f,	// (0x000198d2) heading_pane_cp05_ParamLimits

0xc09f,	// (0x000198d2) heading_pane_cp05

0xc169,	// (0x0001999c) cell_popup_blid_pane_ParamLimits

0xc169,	// (0x0001999c) cell_popup_blid_pane

0xc193,	// (0x000199c6) cell_popup_blid_pane_g1

0xc19b,	// (0x000199ce) cell_popup_blid_pane_t1

0x475d,	// (0x00011f90) mup2_indicator_pane_ParamLimits

0x475d,	// (0x00011f90) mup2_indicator_pane

0xa8f1,	// (0x00018124) mup2_visualizer_osc_pane

0xbed2,	// (0x00019705) mup2_visualizer_spec_pane_ParamLimits

0xbed2,	// (0x00019705) mup2_visualizer_spec_pane

0x48dd,	// (0x00012110) mup2_spec_half_pane

0x48e6,	// (0x00012119) mup2_spec_half_pane_cp

0x48ee,	// (0x00012121) mup2_spec_bar_pane_ParamLimits

0x48ee,	// (0x00012121) mup2_spec_bar_pane

0xbe0f,	// (0x00019642) mup2_spec_bar_pane_g1

0xbe19,	// (0x0001964c) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0001ce6c) mup2_spec_bar_pane_g

0x490e,	// (0x00012141) mup2_osc_middle_pane

0xbe2b,	// (0x0001965e) mup2_visualizer_osc_pane_g1

0x9472,	// (0x00016ca5) popup_number_entry_window_t1_ParamLimits

0x9485,	// (0x00016cb8) popup_number_entry_window_t2_ParamLimits

0x9497,	// (0x00016cca) popup_number_entry_window_t3_ParamLimits

0x0f71,	// (0x0000e7a4) popup_number_entry_window_t5_ParamLimits

0x0f71,	// (0x0000e7a4) popup_number_entry_window_t5

0xf0fb,	// (0x0001c92e) popup_number_entry_window_t_ParamLimits

0x94a9,	// (0x00016cdc) text_title_cp2_ParamLimits

0xaab2,	// (0x000182e5) aid_hotspot_pointer_text2_pane

0xaad8,	// (0x0001830b) main_viewer_pane_g9_ParamLimits

0xaad8,	// (0x0001830b) main_viewer_pane_g9

0xa23a,	// (0x00017a6d) cale_month_pane_t1_ParamLimits

0xa2cf,	// (0x00017b02) bg_cale_pane_ParamLimits

0xa2e7,	// (0x00017b1a) list_cale_pane_ParamLimits

0x9d71,	// (0x000175a4) listscroll_cale_day_pane_t1

0xa2f8,	// (0x00017b2b) scroll_pane_cp09_ParamLimits

0x2fb3,	// (0x000107e6) main_mup_eq_pane_t1_ParamLimits

0x2fb3,	// (0x000107e6) main_mup_eq_pane_t1

0x2fcf,	// (0x00010802) main_mup_eq_pane_t2_ParamLimits

0x2fcf,	// (0x00010802) main_mup_eq_pane_t2

0x2feb,	// (0x0001081e) main_mup_eq_pane_t3_ParamLimits

0x2feb,	// (0x0001081e) main_mup_eq_pane_t3

0x3009,	// (0x0001083c) main_mup_eq_pane_t4_ParamLimits

0x3009,	// (0x0001083c) main_mup_eq_pane_t4

0x3027,	// (0x0001085a) main_mup_eq_pane_t5_ParamLimits

0x3027,	// (0x0001085a) main_mup_eq_pane_t5

0x3045,	// (0x00010878) main_mup_eq_pane_t6_ParamLimits

0x3045,	// (0x00010878) main_mup_eq_pane_t6

0x305b,	// (0x0001088e) main_mup_eq_pane_t7_ParamLimits

0x305b,	// (0x0001088e) main_mup_eq_pane_t7

0x3071,	// (0x000108a4) main_mup_eq_pane_t8_ParamLimits

0x3071,	// (0x000108a4) main_mup_eq_pane_t8

0x3087,	// (0x000108ba) main_mup_eq_pane_t9_ParamLimits

0x3087,	// (0x000108ba) main_mup_eq_pane_t9

0x30a3,	// (0x000108d6) main_mup_eq_pane_t10_ParamLimits

0x30a3,	// (0x000108d6) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0001ccbb) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0001ccbb) main_mup_eq_pane_t

0x3178,	// (0x000109ab) mup_equalizer_pane_cp5_ParamLimits

0x3190,	// (0x000109c3) mup_equalizer_pane_cp6_ParamLimits

0x31a8,	// (0x000109db) mup_equalizer_pane_cp7_ParamLimits

0x93d3,	// (0x00016c06) main_gallery_pane

0xbe34,	// (0x00019667) smil2_volume_pane

0xbe3c,	// (0x0001966f) smil_status_volume_pane_g1_ParamLimits

0xbe4f,	// (0x00019682) smil_status_volume_pane_g2_ParamLimits

0xbe62,	// (0x00019695) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0001ce71) smil_status_volume_pane_g_ParamLimits

0xc072,	// (0x000198a5) bg_popup_window_pane_cp07_ParamLimits

0xc080,	// (0x000198b3) blid_firmament_pane

0x4917,	// (0x0001214a) aid_size_cell_gallery_ParamLimits

0x4917,	// (0x0001214a) aid_size_cell_gallery

0x492d,	// (0x00012160) grid_gallery_pane_ParamLimits

0x492d,	// (0x00012160) grid_gallery_pane

0x4948,	// (0x0001217b) cell_gallery_pane_ParamLimits

0x4948,	// (0x0001217b) cell_gallery_pane

0xc1a9,	// (0x000199dc) bg_cell_gallery_focus_pane_ParamLimits

0xc1a9,	// (0x000199dc) bg_cell_gallery_focus_pane

0xc1bb,	// (0x000199ee) cell_gallery_pane_g1_ParamLimits

0xc1bb,	// (0x000199ee) cell_gallery_pane_g1

0x4999,	// (0x000121cc) cell_gallery_pane_g2_ParamLimits

0x4999,	// (0x000121cc) cell_gallery_pane_g2

0x49a6,	// (0x000121d9) cell_gallery_pane_g3_ParamLimits

0x49a6,	// (0x000121d9) cell_gallery_pane_g3

0xc1c7,	// (0x000199fa) cell_gallery_pane_g4_ParamLimits

0xc1c7,	// (0x000199fa) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0001cf1f) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0001cf1f) cell_gallery_pane_g

0xc1d3,	// (0x00019a06) bg_cell_gallery_focus_pane_g1

0xc1db,	// (0x00019a0e) bg_cell_gallery_focus_pane_g2

0xc1e3,	// (0x00019a16) bg_cell_gallery_focus_pane_g3

0xc1eb,	// (0x00019a1e) bg_cell_gallery_focus_pane_g4

0xc1f3,	// (0x00019a26) bg_cell_gallery_focus_pane_g5

0xc1fb,	// (0x00019a2e) bg_cell_gallery_focus_pane_g6

0xc203,	// (0x00019a36) bg_cell_gallery_focus_pane_g7

0xc20b,	// (0x00019a3e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0001cf28) bg_cell_gallery_focus_pane_g

0xc213,	// (0x00019a46) aid_firma_cardinal

0xc227,	// (0x00019a5a) blid_firmament_pane_t1

0xc23e,	// (0x00019a71) blid_firmament_pane_t2

0xc255,	// (0x00019a88) blid_firmament_pane_t3

0xc26c,	// (0x00019a9f) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0001cf39) blid_firmament_pane_t

0xc283,	// (0x00019ab6) blid_sat_info_pane

0xc293,	// (0x00019ac6) blid_sat_info_pane_g1

0xc293,	// (0x00019ac6) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0001cf42) blid_sat_info_pane_g

0xc29d,	// (0x00019ad0) blid_sat_info_pane_t1

0xc2ab,	// (0x00019ade) smil2_volume_content_pane

0xc2b4,	// (0x00019ae7) smil2_volume_pane_g1

0xc2bc,	// (0x00019aef) smil2_volume_content_pane_g1

0xc2c5,	// (0x00019af8) smil2_volume_content_pane_g2

0xc2ce,	// (0x00019b01) smil2_volume_content_pane_g3

0xc2d7,	// (0x00019b0a) smil2_volume_content_pane_g4

0xc2e0,	// (0x00019b13) smil2_volume_content_pane_g5

0xc2e9,	// (0x00019b1c) smil2_volume_content_pane_g6

0xc2f2,	// (0x00019b25) smil2_volume_content_pane_g7

0xc2fb,	// (0x00019b2e) smil2_volume_content_pane_g8

0xc304,	// (0x00019b37) smil2_volume_content_pane_g9

0xc30d,	// (0x00019b40) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0001cf47) smil2_volume_content_pane_g

0x1638,	// (0x0000ee6b) cale_week_day_heading_pane_t1_ParamLimits

0x164c,	// (0x0000ee7f) cale_week_day_heading_pane_t2_ParamLimits

0x1660,	// (0x0000ee93) cale_week_day_heading_pane_t3_ParamLimits

0x1674,	// (0x0000eea7) cale_week_day_heading_pane_t4_ParamLimits

0x1688,	// (0x0000eebb) cale_week_day_heading_pane_t5_ParamLimits

0x169c,	// (0x0000eecf) cale_week_day_heading_pane_t6_ParamLimits

0x16b0,	// (0x0000eee3) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0001ca33) cale_week_day_heading_pane_t_ParamLimits

0x9d83,	// (0x000175b6) bg_cale_side_pane_ParamLimits

0x16c4,	// (0x0000eef7) cale_week_time_pane_t1_ParamLimits

0x16dc,	// (0x0000ef0f) cale_week_time_pane_t2_ParamLimits

0x16f4,	// (0x0000ef27) cale_week_time_pane_t3_ParamLimits

0x170c,	// (0x0000ef3f) cale_week_time_pane_t4_ParamLimits

0x1724,	// (0x0000ef57) cale_week_time_pane_t5_ParamLimits

0x173c,	// (0x0000ef6f) cale_week_time_pane_t6_ParamLimits

0x1754,	// (0x0000ef87) cale_week_time_pane_t7_ParamLimits

0x1770,	// (0x0000efa3) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0001ca42) cale_week_time_pane_t_ParamLimits

0x1790,	// (0x0000efc3) cell_cale_week_pane_g2_ParamLimits

0x9d83,	// (0x000175b6) bg_cale_side_pane_cp01_ParamLimits

0x2609,	// (0x0000fe3c) cale_month_week_pane_t1_ParamLimits

0x2620,	// (0x0000fe53) cale_month_week_pane_t2_ParamLimits

0x2637,	// (0x0000fe6a) cale_month_week_pane_t3_ParamLimits

0x264e,	// (0x0000fe81) cale_month_week_pane_t4_ParamLimits

0x2665,	// (0x0000fe98) cale_month_week_pane_t5_ParamLimits

0x267c,	// (0x0000feaf) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0001cb1b) cale_month_week_pane_t_ParamLimits

0xa276,	// (0x00017aa9) cell_cale_month_pane_g1_ParamLimits

0x93d3,	// (0x00016c06) main_cale_event_viewer_pane

0x93d3,	// (0x00016c06) listscroll_cale_event_viewer_pane

0xc316,	// (0x00019b49) list_cale_ev_pane

0xc31e,	// (0x00019b51) scroll_pane_cp023

0x49b3,	// (0x000121e6) field_cale_ev_pane_ParamLimits

0x49b3,	// (0x000121e6) field_cale_ev_pane

0xc32a,	// (0x00019b5d) field_cale_ev_content_pane_ParamLimits

0xc32a,	// (0x00019b5d) field_cale_ev_content_pane

0xc336,	// (0x00019b69) field_cale_ev_pane_g1_ParamLimits

0xc336,	// (0x00019b69) field_cale_ev_pane_g1

0xc342,	// (0x00019b75) field_cale_ev_pane_g2_ParamLimits

0xc342,	// (0x00019b75) field_cale_ev_pane_g2

0xc35a,	// (0x00019b8d) field_cale_ev_pane_g3_ParamLimits

0xc35a,	// (0x00019b8d) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0001cf5c) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0001cf5c) field_cale_ev_pane_g

0xc372,	// (0x00019ba5) field_cale_ev_pane_t1_ParamLimits

0xc372,	// (0x00019ba5) field_cale_ev_pane_t1

0x49d7,	// (0x0001220a) field_cale_ev_content_pane_t1_ParamLimits

0x49d7,	// (0x0001220a) field_cale_ev_content_pane_t1

0xaa7c,	// (0x000182af) bg_button_pane_cp01

0x9bad,	// (0x000173e0) listscroll_cale_week_pane_ParamLimits

0x1422,	// (0x0000ec55) popup_toolbar_window_cp01

0x9d71,	// (0x000175a4) listscroll_cale_week_pane_t1_ParamLimits

0x9bad,	// (0x000173e0) listscroll_cale_day_pane_ParamLimits

0x27d0,	// (0x00010003) popup_toolbar_window_cp02

0x9d71,	// (0x000175a4) listscroll_cale_day_pane_t1_ParamLimits

0x9bad,	// (0x000173e0) main_cale_month_pane_ParamLimits

0x3f3b,	// (0x0001176e) popup_toolbar_window_cp03_ParamLimits

0x3f3b,	// (0x0001176e) popup_toolbar_window_cp03

0x355e,	// (0x00010d91) main_image_pane_g2_ParamLimits

0x355e,	// (0x00010d91) main_image_pane_g2

0x356f,	// (0x00010da2) main_image_pane_g3_ParamLimits

0x356f,	// (0x00010da2) main_image_pane_g3

0x0002,

0xf51a,	// (0x0001cd4d) main_image_pane_g_ParamLimits

0xf51a,	// (0x0001cd4d) main_image_pane_g

0xabd8,	// (0x0001840b) main_image_pane_t1_ParamLimits

0x3580,	// (0x00010db3) main_image_pane_t2_ParamLimits

0x3580,	// (0x00010db3) main_image_pane_t2

0x3592,	// (0x00010dc5) main_image_pane_t3_ParamLimits

0x3592,	// (0x00010dc5) main_image_pane_t3

0x35ba,	// (0x00010ded) main_image_pane_t4_ParamLimits

0x35ba,	// (0x00010ded) main_image_pane_t4

0x0003,

0xf521,	// (0x0001cd54) main_image_pane_t_ParamLimits

0xf521,	// (0x0001cd54) main_image_pane_t

0x35da,	// (0x00010e0d) popup_image_details_window_cp01

0x35e4,	// (0x00010e17) popup_toobar_trans_pane_cp01_ParamLimits

0x35e4,	// (0x00010e17) popup_toobar_trans_pane_cp01

0x3dae,	// (0x000115e1) popup_image_details_window_ParamLimits

0x3dae,	// (0x000115e1) popup_image_details_window

0xbd80,	// (0x000195b3) popup_image_focus_window

0x41f1,	// (0x00011a24) camera2_autofocus_pane_ParamLimits

0x41f1,	// (0x00011a24) camera2_autofocus_pane

0x93d3,	// (0x00016c06) bg_popup_sub_pane_cp06

0xc389,	// (0x00019bbc) popup_image_focus_window_g1

0xc391,	// (0x00019bc4) popup_image_focus_window_g2

0xc399,	// (0x00019bcc) popup_image_focus_window_g3

0xc3a1,	// (0x00019bd4) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0001cf63) popup_image_focus_window_g

0xc3a9,	// (0x00019bdc) popup_image_focus_window_t1

0xc3b7,	// (0x00019bea) popup_image_focus_window_t2

0xc3c7,	// (0x00019bfa) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0001cf6c) popup_image_focus_window_t

0xc3d5,	// (0x00019c08) camera2_autofocus_pane_g1

0x9444,	// (0x00016c77) bg_tb_trans_pane_cp01

0xc3e3,	// (0x00019c16) popup_image_details_window_g1

0xc3f6,	// (0x00019c29) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0001cf7e) popup_image_details_window_g

0xc41f,	// (0x00019c52) popup_image_details_window_t1

0xc431,	// (0x00019c64) popup_image_details_window_t2

0xc44a,	// (0x00019c7d) popup_image_details_window_t3

0xc45e,	// (0x00019c91) popup_image_details_window_t4

0xc479,	// (0x00019cac) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0001cf85) popup_image_details_window_t

0x9b7f,	// (0x000173b2) bg_calc_paper_pane_ParamLimits

0x93d3,	// (0x00016c06) grid_highlight_pane_cp013

0x9b93,	// (0x000173c6) list_calc_pane_ParamLimits

0x9ba5,	// (0x000173d8) scroll_pane_cp024

0x9bad,	// (0x000173e0) bg_calc_display_pane_ParamLimits

0x126a,	// (0x0000ea9d) calc_display_pane_t1_ParamLimits

0x127c,	// (0x0000eaaf) calc_display_pane_t2_ParamLimits

0x9bb9,	// (0x000173ec) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0001c9b5) calc_display_pane_t_ParamLimits

0x133f,	// (0x0000eb72) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0001c9d2) cell_calc_pane_g

0x1348,	// (0x0000eb7b) cell_calc_pane_t1

0x9c30,	// (0x00017463) grid_highlight_pane_cp02_ParamLimits

0x9c46,	// (0x00017479) toolbar_button_pane_cp01_ParamLimits

0x9c46,	// (0x00017479) toolbar_button_pane_cp01

0xac1d,	// (0x00018450) temp_image_control_pane_ParamLimits

0xac1d,	// (0x00018450) temp_image_control_pane

0x9444,	// (0x00016c77) main_mp3_pane

0xc493,	// (0x00019cc6) temp_image_control_pane_g1_ParamLimits

0xc493,	// (0x00019cc6) temp_image_control_pane_g1

0xc4a1,	// (0x00019cd4) temp_image_control_pane_g2_ParamLimits

0xc4a1,	// (0x00019cd4) temp_image_control_pane_g2

0xc4b3,	// (0x00019ce6) temp_image_control_pane_g3_ParamLimits

0xc4b3,	// (0x00019ce6) temp_image_control_pane_g3

0x4a28,	// (0x0001225b) temp_image_control_pane_g4_ParamLimits

0x4a28,	// (0x0001225b) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0001cf90) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0001cf90) temp_image_control_pane_g

0xc493,	// (0x00019cc6) main_mp3_pane_g1

0x4a3b,	// (0x0001226e) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0001cf99) main_mp3_pane_g

0xc4f6,	// (0x00019d29) main_mp3_pane_t1

0x9e52,	// (0x00017685) main_camera_pane_g8_ParamLimits

0x9e52,	// (0x00017685) main_camera_pane_g8

0x1a61,	// (0x0000f294) main_video_pane_g7_ParamLimits

0x1a61,	// (0x0000f294) main_video_pane_g7

0xbeb4,	// (0x000196e7) main_camera2_pane_t7_ParamLimits

0xbeb4,	// (0x000196e7) main_camera2_pane_t7

0xa062,	// (0x00017895) scroll_pane_cp025_ParamLimits

0xa062,	// (0x00017895) scroll_pane_cp025

0xa076,	// (0x000178a9) scroll_pane_cp026_ParamLimits

0xa076,	// (0x000178a9) scroll_pane_cp026

0xa085,	// (0x000178b8) wml_content_pane_ParamLimits

0x93d3,	// (0x00016c06) main_touch_calib_pane

0x4b02,	// (0x00012335) main_touch_calib_pane_g1

0x4b0e,	// (0x00012341) main_touch_calib_pane_g2

0x4b1a,	// (0x0001234d) main_touch_calib_pane_g3

0x4b26,	// (0x00012359) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0001cfb7) main_touch_calib_pane_g

0x4b32,	// (0x00012365) main_touch_calib_pane_t1

0x4b4c,	// (0x0001237f) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0001cfc0) main_touch_calib_pane_t

0xa832,	// (0x00018065) mup_progress_pane_cp02

0xa851,	// (0x00018084) navi_pane_g1

0xa8b3,	// (0x000180e6) navi_pane_mp_t3

0x9444,	// (0x00016c77) main_mp3_pane_ParamLimits

0x3f7d,	// (0x000117b0) navi_pane_ParamLimits

0xc493,	// (0x00019cc6) main_mp3_pane_g1_ParamLimits

0x4a3b,	// (0x0001226e) main_mp3_pane_g2_ParamLimits

0x4a47,	// (0x0001227a) main_mp3_pane_g3_ParamLimits

0x4a47,	// (0x0001227a) main_mp3_pane_g3

0x4a55,	// (0x00012288) main_mp3_pane_g4_ParamLimits

0x4a55,	// (0x00012288) main_mp3_pane_g4

0xc4c3,	// (0x00019cf6) main_mp3_pane_g5_ParamLimits

0xc4c3,	// (0x00019cf6) main_mp3_pane_g5

0xc4d1,	// (0x00019d04) main_mp3_pane_g6_ParamLimits

0xc4d1,	// (0x00019d04) main_mp3_pane_g6

0xc4de,	// (0x00019d11) main_mp3_pane_g7_ParamLimits

0xc4de,	// (0x00019d11) main_mp3_pane_g7

0xc4ea,	// (0x00019d1d) main_mp3_pane_g8_ParamLimits

0xc4ea,	// (0x00019d1d) main_mp3_pane_g8

0xf766,	// (0x0001cf99) main_mp3_pane_g_ParamLimits

0x4a61,	// (0x00012294) main_mp3_pane_t2

0x4a6f,	// (0x000122a2) main_mp3_pane_t3

0xc504,	// (0x00019d37) main_mp3_pane_t4

0xc512,	// (0x00019d45) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0001cfaa) main_mp3_pane_t

0xc520,	// (0x00019d53) mup_progress_pane_cp01

0x93f1,	// (0x00016c24) aid_zoom_text_secondary2

0xc316,	// (0x00019b49) list_cale_ev2_pane

0xc31e,	// (0x00019b51) scroll_pane_cp023_ParamLimits

0x4ba4,	// (0x000123d7) field_cale_ev2_pane_ParamLimits

0x4ba4,	// (0x000123d7) field_cale_ev2_pane

0xc528,	// (0x00019d5b) field_cale_ev2_pane_g1_ParamLimits

0xc528,	// (0x00019d5b) field_cale_ev2_pane_g1

0xc534,	// (0x00019d67) field_cale_ev2_pane_g2_ParamLimits

0xc534,	// (0x00019d67) field_cale_ev2_pane_g2

0xc54c,	// (0x00019d7f) field_cale_ev2_pane_g3_ParamLimits

0xc54c,	// (0x00019d7f) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0001cfcb) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0001cfcb) field_cale_ev2_pane_g

0xc570,	// (0x00019da3) field_cale_ev2_pane_t1_ParamLimits

0xc570,	// (0x00019da3) field_cale_ev2_pane_t1

0xc587,	// (0x00019dba) field_cale_ev2_pane_t2_ParamLimits

0xc587,	// (0x00019dba) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0001cfd4) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0001cfd4) field_cale_ev2_pane_t

0x33f9,	// (0x00010c2c) main_postcard_pane_g5_ParamLimits

0x33f9,	// (0x00010c2c) main_postcard_pane_g5

0x340f,	// (0x00010c42) main_postcard_pane_g6_ParamLimits

0x340f,	// (0x00010c42) main_postcard_pane_g6

0x180d,	// (0x0000f040) camera2_autofocus_pane_cp_ParamLimits

0x180d,	// (0x0000f040) camera2_autofocus_pane_cp

0x9444,	// (0x00016c77) main_mup3_pane

0x4be8,	// (0x0001241b) main_mup3_pane_g1_ParamLimits

0x4be8,	// (0x0001241b) main_mup3_pane_g1

0x4c0a,	// (0x0001243d) main_mup3_pane_g2_ParamLimits

0x4c0a,	// (0x0001243d) main_mup3_pane_g2

0x4c8d,	// (0x000124c0) main_mup3_pane_g3_ParamLimits

0x4c8d,	// (0x000124c0) main_mup3_pane_g3

0x4cd1,	// (0x00012504) main_mup3_pane_g4_ParamLimits

0x4cd1,	// (0x00012504) main_mup3_pane_g4

0x4d15,	// (0x00012548) main_mup3_pane_g5_ParamLimits

0x4d15,	// (0x00012548) main_mup3_pane_g5

0x4d59,	// (0x0001258c) main_mup3_pane_g6_ParamLimits

0x4d59,	// (0x0001258c) main_mup3_pane_g6

0xc59c,	// (0x00019dcf) main_mup3_pane_g7_ParamLimits

0xc59c,	// (0x00019dcf) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0001cfe4) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0001cfe4) main_mup3_pane_g

0x4dd5,	// (0x00012608) main_mup3_pane_t1_ParamLimits

0x4dd5,	// (0x00012608) main_mup3_pane_t1

0x4e4f,	// (0x00012682) main_mup3_pane_t2_ParamLimits

0x4e4f,	// (0x00012682) main_mup3_pane_t2

0x4f29,	// (0x0001275c) main_mup3_pane_t4_ParamLimits

0x4f29,	// (0x0001275c) main_mup3_pane_t4

0x4f87,	// (0x000127ba) main_mup3_pane_t5_ParamLimits

0x4f87,	// (0x000127ba) main_mup3_pane_t5

0x503f,	// (0x00012872) main_mup3_pane_t6_ParamLimits

0x503f,	// (0x00012872) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0001cff5) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0001cff5) main_mup3_pane_t

0x50f5,	// (0x00012928) mup3_progress_pane_ParamLimits

0x50f5,	// (0x00012928) mup3_progress_pane

0x5179,	// (0x000129ac) popup_mup3_control_window_ParamLimits

0x5179,	// (0x000129ac) popup_mup3_control_window

0xc5aa,	// (0x00019ddd) popup_mup3_text_window

0x51af,	// (0x000129e2) mup3_progress_pane_t1

0x51c6,	// (0x000129f9) mup3_progress_pane_t2

0xc5b2,	// (0x00019de5) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0001d002) mup3_progress_pane_t

0xc5c9,	// (0x00019dfc) mup_progress_pane_cp03

0x93d3,	// (0x00016c06) bg_tb_trans_pane_cp04

0x51dd,	// (0x00012a10) mup3_volume_pane

0x51e5,	// (0x00012a18) popup_mup3_control_window_g1

0x51ee,	// (0x00012a21) mup3_volume_pane_g1

0x51f7,	// (0x00012a2a) mup3_volume_pane_g2

0x5200,	// (0x00012a33) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0001d009) mup3_volume_pane_g

0x93d3,	// (0x00016c06) bg_tb_trans_pane_cp03

0xc5d9,	// (0x00019e0c) popup_mup3_text_window_g1

0xc5e1,	// (0x00019e14) popup_mup3_text_window_t1

0x9c07,	// (0x0001743a) list_calc_item_pane_g1_ParamLimits

0xbf9c,	// (0x000197cf) mup_volume_pane_cp_g1

0x4b66,	// (0x00012399) main_touch_calib_pane_t3

0x4b7a,	// (0x000123ad) main_touch_calib_pane_t4

0x4b8e,	// (0x000123c1) main_touch_calib_pane_t5

0x93dd,	// (0x00016c10) aid_cell_size_toolbar2

0x93e5,	// (0x00016c18) aid_popup3_width_pane

0x93f1,	// (0x00016c24) aid_zoom_text_msg_primary

0x9e32,	// (0x00017665) vorec_t7

0x9bcb,	// (0x000173fe) bg_calc_paper_pane_g1_ParamLimits

0x9bd7,	// (0x0001740a) bg_calc_paper_pane_g2_ParamLimits

0x9be3,	// (0x00017416) bg_calc_paper_pane_g3_ParamLimits

0x9bef,	// (0x00017422) bg_calc_paper_pane_g4_ParamLimits

0x9bfb,	// (0x0001742e) bg_calc_paper_pane_g5_ParamLimits

0x12c9,	// (0x0000eafc) bg_calc_paper_pane_g6_ParamLimits

0x12dc,	// (0x0000eb0f) bg_calc_paper_pane_g7_ParamLimits

0x12ef,	// (0x0000eb22) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0001c9bc) bg_calc_paper_pane_g_ParamLimits

0x1300,	// (0x0000eb33) calc_bg_paper_pane_g9_ParamLimits

0x196f,	// (0x0000f1a2) image_qvga_pane_ParamLimits

0x196f,	// (0x0000f1a2) image_qvga_pane

0x9ac0,	// (0x000172f3) bg_popup_sub_pane_cp04_ParamLimits

0xab54,	// (0x00018387) popup_mup_playback_window_g1_ParamLimits

0xab60,	// (0x00018393) popup_mup_playback_window_t1_ParamLimits

0xab75,	// (0x000183a8) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0001cd48) popup_mup_playback_window_t_ParamLimits

0x4675,	// (0x00011ea8) main_mup2_pane_g3_ParamLimits

0x4675,	// (0x00011ea8) main_mup2_pane_g3

0x1c6d,	// (0x0000f4a0) popup_toolbar_window_cp04

0xaf70,	// (0x000187a3) popup_call2_audio_second_window_g3_ParamLimits

0xaf70,	// (0x000187a3) popup_call2_audio_second_window_g3

0xb37a,	// (0x00018bad) popup_call2_audio_first_window_g4_ParamLimits

0xb37a,	// (0x00018bad) popup_call2_audio_first_window_g4

0xb9f9,	// (0x0001922c) popup_call2_audio_in_window_g4_ParamLimits

0xb9f9,	// (0x0001922c) popup_call2_audio_in_window_g4

0x3540,	// (0x00010d73) aid_area_sk_bg_cut_ParamLimits

0x3540,	// (0x00010d73) aid_area_sk_bg_cut

0xab8a,	// (0x000183bd) aid_area_sk_bg_cut_2_ParamLimits

0xab8a,	// (0x000183bd) aid_area_sk_bg_cut_2

0x4989,	// (0x000121bc) aid_placing_details_win

0x4991,	// (0x000121c4) aid_placing_details_win_2

0xc3d5,	// (0x00019c08) camera2_autofocus_pane_g1_ParamLimits

0x0ebe,	// (0x0000e6f1) popup_fixed_preview_cale_window_ParamLimits

0x0ebe,	// (0x0000e6f1) popup_fixed_preview_cale_window

0xa90b,	// (0x0001813e) navi_slider_pane_g3

0xa914,	// (0x00018147) navi_slider_pane_g4

0xa91d,	// (0x00018150) navi_slider_pane_g5

0xa90b,	// (0x0001813e) navi_slider_pane_g6

0xa926,	// (0x00018159) navi_slider_pane_g7

0xaa49,	// (0x0001827c) mup_scale_pane_g3

0xaa52,	// (0x00018285) mup_scale_pane_g4

0xaa5b,	// (0x0001828e) mup_scale_pane_g5

0x31c0,	// (0x000109f3) mup_scale_pane_g6

0x31c9,	// (0x000109fc) mup_scale_pane_g7

0xa90b,	// (0x0001813e) cams2_slider_pane_g3

0xc051,	// (0x00019884) cams2_slider_pane_g4

0xc059,	// (0x0001988c) cams2_slider_pane_g5

0xa90b,	// (0x0001813e) cams2_slider_pane_g6

0xc061,	// (0x00019894) cams2_slider_pane_g7

0xc293,	// (0x00019ac6) camera2_autofocus_pane_cp_g1

0xc5ef,	// (0x00019e22) bg_popup_preview_window_pane_cp02_ParamLimits

0xc5ef,	// (0x00019e22) bg_popup_preview_window_pane_cp02

0xc5fb,	// (0x00019e2e) list_fp_cale_pane_ParamLimits

0xc5fb,	// (0x00019e2e) list_fp_cale_pane

0xc607,	// (0x00019e3a) popup_fixed_preview_cale_window_t1_ParamLimits

0xc607,	// (0x00019e3a) popup_fixed_preview_cale_window_t1

0x5209,	// (0x00012a3c) popup_fixed_preview_cale_window_t2_ParamLimits

0x5209,	// (0x00012a3c) popup_fixed_preview_cale_window_t2

0x521e,	// (0x00012a51) popup_fixed_preview_cale_window_t3_ParamLimits

0x521e,	// (0x00012a51) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0001d010) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0001d010) popup_fixed_preview_cale_window_t

0x5235,	// (0x00012a68) list_single_fp_cale_pane_ParamLimits

0x5235,	// (0x00012a68) list_single_fp_cale_pane

0xc625,	// (0x00019e58) list_single_fp_cale_pane_g1_ParamLimits

0xc625,	// (0x00019e58) list_single_fp_cale_pane_g1

0xc631,	// (0x00019e64) list_single_fp_cale_pane_g2_ParamLimits

0xc631,	// (0x00019e64) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0001d017) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0001d017) list_single_fp_cale_pane_g

0xc64a,	// (0x00019e7d) list_single_fp_cale_pane_t1_ParamLimits

0xc64a,	// (0x00019e7d) list_single_fp_cale_pane_t1

0xc65c,	// (0x00019e8f) list_single_fp_cale_pane_t2_ParamLimits

0xc65c,	// (0x00019e8f) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0001d01e) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0001d01e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x93d3,	// (0x00016c06) main_dialer_pane

0x524d,	// (0x00012a80) aid_cell_size_keypad

0x5257,	// (0x00012a8a) dialer_ne_pane

0x5261,	// (0x00012a94) grid_dialer_command_1_pane

0x5269,	// (0x00012a9c) grid_dialer_command_2_pane

0x5271,	// (0x00012aa4) grid_dialer_keypad_pane

0x5285,	// (0x00012ab8) bg_popup_call_pane_cp06_ParamLimits

0x5285,	// (0x00012ab8) bg_popup_call_pane_cp06

0x5291,	// (0x00012ac4) dialer_ne_clear_pane_ParamLimits

0x5291,	// (0x00012ac4) dialer_ne_clear_pane

0xc68f,	// (0x00019ec2) dialer_ne_pane_g1

0xc697,	// (0x00019eca) dialer_ne_pane_t1_ParamLimits

0xc697,	// (0x00019eca) dialer_ne_pane_t1

0x529d,	// (0x00012ad0) dialer_ne_pane_t2_ParamLimits

0x529d,	// (0x00012ad0) dialer_ne_pane_t2

0x52c7,	// (0x00012afa) dialer_ne_pane_t3_ParamLimits

0x52c7,	// (0x00012afa) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0001d023) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0001d023) dialer_ne_pane_t

0x52f7,	// (0x00012b2a) dialer_ne_pane_t3_copy1_ParamLimits

0x52f7,	// (0x00012b2a) dialer_ne_pane_t3_copy1

0x5326,	// (0x00012b59) cell_dialer_keypad_pane_ParamLimits

0x5326,	// (0x00012b59) cell_dialer_keypad_pane

0x533d,	// (0x00012b70) cell_dialer_command_1_pane_ParamLimits

0x533d,	// (0x00012b70) cell_dialer_command_1_pane

0x5353,	// (0x00012b86) cell_dialer_command_2_pane_ParamLimits

0x5353,	// (0x00012b86) cell_dialer_command_2_pane

0xc6a9,	// (0x00019edc) bg_button_pane_cp02_ParamLimits

0xc6a9,	// (0x00019edc) bg_button_pane_cp02

0x5362,	// (0x00012b95) cell_dialer_keypad_pane_g1_ParamLimits

0x5362,	// (0x00012b95) cell_dialer_keypad_pane_g1

0xc6a9,	// (0x00019edc) bg_button_pane_cp03_ParamLimits

0xc6a9,	// (0x00019edc) bg_button_pane_cp03

0x5377,	// (0x00012baa) cell_dialer_command_1_pane_g1_ParamLimits

0x5377,	// (0x00012baa) cell_dialer_command_1_pane_g1

0xc6b5,	// (0x00019ee8) bg_button_pane_cp04

0x538b,	// (0x00012bbe) cell_dialer_command_2_pane_g1

0xa8f1,	// (0x00018124) bg_button_pane_cp06

0xc6bd,	// (0x00019ef0) dialer_ne_clear_pane_g1

0x2ca2,	// (0x000104d5) navi_pane_g2

0x2cd0,	// (0x00010503) navi_pane_g3

0x0002,

0xf418,	// (0x0001cc4b) navi_pane_g

0x2cfb,	// (0x0001052e) navi_pane_mv_g2

0x2d22,	// (0x00010555) navi_pane_mv_g5

0x2d2a,	// (0x0001055d) navi_pane_mv_t1

0x9bad,	// (0x000173e0) main_clock2_pane

0x53c3,	// (0x00012bf6) main_clock2_list_pane_ParamLimits

0x53c3,	// (0x00012bf6) main_clock2_list_pane

0x53fb,	// (0x00012c2e) main_clock2_pane_t1_ParamLimits

0x53fb,	// (0x00012c2e) main_clock2_pane_t1

0x5437,	// (0x00012c6a) main_clock2_pane_t2_ParamLimits

0x5437,	// (0x00012c6a) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0001d02a) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0001d02a) main_clock2_pane_t

0x54c3,	// (0x00012cf6) popup_clock_analogue_window_cp03_ParamLimits

0x54c3,	// (0x00012cf6) popup_clock_analogue_window_cp03

0x54ea,	// (0x00012d1d) popup_clock_digital_window_cp02_ParamLimits

0x54ea,	// (0x00012d1d) popup_clock_digital_window_cp02

0x5563,	// (0x00012d96) main_clock2_list_single_pane_ParamLimits

0x5563,	// (0x00012d96) main_clock2_list_single_pane

0xa8f1,	// (0x00018124) list_highlight_pane_cp05

0xc6c5,	// (0x00019ef8) main_clock2_list_single_pane_t1

0x1c6d,	// (0x0000f4a0) popup_toolbar_window_cp04_ParamLimits

0x49f8,	// (0x0001222b) camera2_autofocus_pane_g2_ParamLimits

0x49f8,	// (0x0001222b) camera2_autofocus_pane_g2

0x4a04,	// (0x00012237) camera2_autofocus_pane_g3_ParamLimits

0x4a04,	// (0x00012237) camera2_autofocus_pane_g3

0x4a10,	// (0x00012243) camera2_autofocus_pane_g4_ParamLimits

0x4a10,	// (0x00012243) camera2_autofocus_pane_g4

0x4a1c,	// (0x0001224f) camera2_autofocus_pane_g5_ParamLimits

0x4a1c,	// (0x0001224f) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0001cf73) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0001cf73) camera2_autofocus_pane_g

0x4bc8,	// (0x000123fb) camera2_autofocus_pane_cp_g2

0x4bd0,	// (0x00012403) camera2_autofocus_pane_cp_g3

0x4bd8,	// (0x0001240b) camera2_autofocus_pane_cp_g4

0x4be0,	// (0x00012413) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0001cfd9) camera2_autofocus_pane_cp_g

0x527d,	// (0x00012ab0) popup_dialer_spcha_window

0x93d3,	// (0x00016c06) bg_popup_sub_pane_cp07

0xc6d3,	// (0x00019f06) list_spcha_pane

0xc6db,	// (0x00019f0e) list_single_spcha_pane_ParamLimits

0xc6db,	// (0x00019f0e) list_single_spcha_pane

0x93d3,	// (0x00016c06) list_highlight_pane_cp06

0xc6ec,	// (0x00019f1f) list_single_spcha_pane_t1

0xb7a3,	// (0x00018fd6) popup_call2_audio_out_window_g4_ParamLimits

0xb7a3,	// (0x00018fd6) popup_call2_audio_out_window_g4

0x93d3,	// (0x00016c06) main_imed2_pane

0xbd8a,	// (0x000195bd) popup_imed_adjust2_window

0x3dc6,	// (0x000115f9) popup_imed_trans_window_ParamLimits

0x3dc6,	// (0x000115f9) popup_imed_trans_window

0xc0cb,	// (0x000198fe) popup_blid_sat_info2_window_t1

0xc0d9,	// (0x0001990c) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0001cf08) popup_blid_sat_info2_window_t

0x5619,	// (0x00012e4c) aid_size_cell_colour_35

0x5639,	// (0x00012e6c) aid_size_cell_colour_112

0x5659,	// (0x00012e8c) aid_size_cell_effect

0xbd5e,	// (0x00019591) bg_tb_trans_pane_cp02

0xa36b,	// (0x00017b9e) heading_imed_pane

0x5679,	// (0x00012eac) listscroll_imed_pane

0xc6fa,	// (0x00019f2d) heading_imed_pane_g1

0xc702,	// (0x00019f35) heading_imed_pane_t1

0xc710,	// (0x00019f43) grid_imed_colour_35_pane_ParamLimits

0xc710,	// (0x00019f43) grid_imed_colour_35_pane

0x5685,	// (0x00012eb8) grid_imed_effect_pane

0xc72c,	// (0x00019f5f) list_imed_aspect_pane

0x569c,	// (0x00012ecf) scroll_pane_cp027_ParamLimits

0x569c,	// (0x00012ecf) scroll_pane_cp027

0x56ad,	// (0x00012ee0) cell_imed_effect_pane_ParamLimits

0x56ad,	// (0x00012ee0) cell_imed_effect_pane

0xc734,	// (0x00019f67) cell_imed_colour_pane_ParamLimits

0xc734,	// (0x00019f67) cell_imed_colour_pane

0xc77e,	// (0x00019fb1) cell_imed_colour_pane_g1_ParamLimits

0xc77e,	// (0x00019fb1) cell_imed_colour_pane_g1

0xc78f,	// (0x00019fc2) hgihlgiht_grid_pane_cp016_ParamLimits

0xc78f,	// (0x00019fc2) hgihlgiht_grid_pane_cp016

0x56d2,	// (0x00012f05) cell_imed_effect_pane_g1

0x56da,	// (0x00012f0d) grid_highlight_pane_cp017

0xc7a0,	// (0x00019fd3) list_imed_single_pane_ParamLimits

0xc7a0,	// (0x00019fd3) list_imed_single_pane

0x93d3,	// (0x00016c06) list_highlight_pane_cp07

0xc7b4,	// (0x00019fe7) list_imed_aspect_pane_comp1_t1

0xbd5e,	// (0x00019591) bg_tb_trans_pane_cp05

0xc7d6,	// (0x0001a009) popup_imed_adjust2_window_g1

0xc7fd,	// (0x0001a030) popup_imed_adjust2_window_t1

0xc815,	// (0x0001a048) slider_imed_adjust_pane

0xc829,	// (0x0001a05c) slider_imed_adjust_pane_g1

0xc839,	// (0x0001a06c) slider_imed_adjust_pane_g2

0xc849,	// (0x0001a07c) slider_imed_adjust_pane_g3

0xc85a,	// (0x0001a08d) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0001d047) slider_imed_adjust_pane_g

0x56e3,	// (0x00012f16) aid_size_cell_clipart2

0x56ef,	// (0x00012f22) grid_imed_clipart_pane

0xc86b,	// (0x0001a09e) scroll_pane_cp031

0x56f9,	// (0x00012f2c) cell_imed_clipart_pane_ParamLimits

0x56f9,	// (0x00012f2c) cell_imed_clipart_pane

0x5716,	// (0x00012f49) cell_imed_clipart_pane_g1

0x93d3,	// (0x00016c06) grid_highlight_pane_cp014

0x53d8,	// (0x00012c0b) main_clock2_pane_g1_ParamLimits

0x53d8,	// (0x00012c0b) main_clock2_pane_g1

0x550a,	// (0x00012d3d) aid_call2_pane_cp10

0x551c,	// (0x00012d4f) aid_call_pane_cp10

0xa826,	// (0x00018059) popup_clock_analogue_window_cp10_g1

0xa826,	// (0x00018059) popup_clock_analogue_window_cp10_g2

0x552e,	// (0x00012d61) popup_clock_analogue_window_cp10_g3

0x552e,	// (0x00012d61) popup_clock_analogue_window_cp10_g4

0xa826,	// (0x00018059) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0001d035) popup_clock_analogue_window_cp10_g

0x5544,	// (0x00012d77) popup_clock_analogue_window_cp10_t1

0x5575,	// (0x00012da8) clock_digital_number_pane_cp10_ParamLimits

0x5575,	// (0x00012da8) clock_digital_number_pane_cp10

0x558f,	// (0x00012dc2) clock_digital_number_pane_cp11_ParamLimits

0x558f,	// (0x00012dc2) clock_digital_number_pane_cp11

0x55a9,	// (0x00012ddc) clock_digital_number_pane_cp12_ParamLimits

0x55a9,	// (0x00012ddc) clock_digital_number_pane_cp12

0x55c3,	// (0x00012df6) clock_digital_number_pane_cp13_ParamLimits

0x55c3,	// (0x00012df6) clock_digital_number_pane_cp13

0x55dd,	// (0x00012e10) clock_digital_separator_pane_cp10_ParamLimits

0x55dd,	// (0x00012e10) clock_digital_separator_pane_cp10

0x55f7,	// (0x00012e2a) popup_clock_digital_window_cp02_t1_ParamLimits

0x55f7,	// (0x00012e2a) popup_clock_digital_window_cp02_t1

0x9ab8,	// (0x000172eb) clock_digital_number_pane_cp10_g1

0x9ab8,	// (0x000172eb) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0001d050) clock_digital_number_pane_cp10_g

0x9ab8,	// (0x000172eb) clock_digital_separator_pane_cp10_g1

0x9ab8,	// (0x000172eb) clock_digital_separator_pane_g2_cp10

0xa8c1,	// (0x000180f4) navi_pane_vded_g4

0xa8ca,	// (0x000180fd) navi_pane_vded_g5

0xa8d3,	// (0x00018106) navi_pane_vded_t1

0x93d3,	// (0x00016c06) main_vded_pane

0x571f,	// (0x00012f52) main_vded_pane_g1

0x572b,	// (0x00012f5e) main_vded_pane_g2

0x5737,	// (0x00012f6a) main_vded_pane_g3

0x0002,

0xf822,	// (0x0001d055) main_vded_pane_g

0x5743,	// (0x00012f76) main_vded_pane_t1

0x5751,	// (0x00012f84) main_vded_pane_t2

0x0001,

0xf829,	// (0x0001d05c) main_vded_pane_t

0x575f,	// (0x00012f92) vded_slider_pane

0x5769,	// (0x00012f9c) vded_video_pane

0xc873,	// (0x0001a0a6) vded_video_pane_g1

0x5775,	// (0x00012fa8) vded_video_pane_g2

0xc293,	// (0x00019ac6) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0001d061) vded_video_pane_g

0xc87d,	// (0x0001a0b0) vded_slider_pane_g1

0xbf9c,	// (0x000197cf) vded_slider_pane_g2

0xc886,	// (0x0001a0b9) vded_slider_pane_g3

0xc88f,	// (0x0001a0c2) vded_slider_pane_g4

0xc898,	// (0x0001a0cb) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0001d068) vded_slider_pane_g

0x5163,	// (0x00012996) mup3_rocker_pane_ParamLimits

0x5163,	// (0x00012996) mup3_rocker_pane

0x577e,	// (0x00012fb1) mup3_control_keys_pane_g1

0x5786,	// (0x00012fb9) mup3_control_keys_pane_g2

0x578e,	// (0x00012fc1) mup3_control_keys_pane_g3

0x5796,	// (0x00012fc9) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0001d073) mup3_control_keys_pane_g

0x0ef5,	// (0x0000e728) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ef5,	// (0x0000e728) popup_toolbar2_fixed_window_cp01

0x5199,	// (0x000129cc) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5199,	// (0x000129cc) popup_toolbar2_fixed_window_cp02

0xb0e2,	// (0x00018915) popup_call2_audio_second_window_t4_ParamLimits

0xb0e2,	// (0x00018915) popup_call2_audio_second_window_t4

0xb610,	// (0x00018e43) popup_call2_audio_first_window_t6_ParamLimits

0xb610,	// (0x00018e43) popup_call2_audio_first_window_t6

0xb8a6,	// (0x000190d9) popup_call2_audio_out_window_t6_ParamLimits

0xb8a6,	// (0x000190d9) popup_call2_audio_out_window_t6

0x93d3,	// (0x00016c06) main_vitu_pane

0x57a6,	// (0x00012fd9) aid_size_cell_itu_ParamLimits

0x57a6,	// (0x00012fd9) aid_size_cell_itu

0x9444,	// (0x00016c77) bg_popup_window_pane_cp08_ParamLimits

0x9444,	// (0x00016c77) bg_popup_window_pane_cp08

0x57bc,	// (0x00012fef) field_vitu_entry_pane_ParamLimits

0x57bc,	// (0x00012fef) field_vitu_entry_pane

0x57d3,	// (0x00013006) grid_vitu_function_pane_ParamLimits

0x57d3,	// (0x00013006) grid_vitu_function_pane

0x57ee,	// (0x00013021) grid_vitu_itu_pane_ParamLimits

0x57ee,	// (0x00013021) grid_vitu_itu_pane

0x580c,	// (0x0001303f) cell_vitu_itu_pane_ParamLimits

0x580c,	// (0x0001303f) cell_vitu_itu_pane

0x5832,	// (0x00013065) cell_vitu_function_pane_ParamLimits

0x5832,	// (0x00013065) cell_vitu_function_pane

0x9444,	// (0x00016c77) bg_popup_sub_pane_cp08_ParamLimits

0x9444,	// (0x00016c77) bg_popup_sub_pane_cp08

0x584d,	// (0x00013080) field_vitu_entry_pane_t1_ParamLimits

0x584d,	// (0x00013080) field_vitu_entry_pane_t1

0xc8b9,	// (0x0001a0ec) field_vitu_entry_pane_t2_ParamLimits

0xc8b9,	// (0x0001a0ec) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0001d081) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0001d081) field_vitu_entry_pane_t

0xc8d6,	// (0x0001a109) bg_button_pane_cp05_ParamLimits

0xc8d6,	// (0x0001a109) bg_button_pane_cp05

0x586d,	// (0x000130a0) cell_vitu_itu_pane_g1

0x5885,	// (0x000130b8) cell_vitu_itu_pane_t1_ParamLimits

0x5885,	// (0x000130b8) cell_vitu_itu_pane_t1

0x5897,	// (0x000130ca) cell_vitu_itu_pane_t2_ParamLimits

0x5897,	// (0x000130ca) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0001d086) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0001d086) cell_vitu_itu_pane_t

0xc8e4,	// (0x0001a117) bg_button_pane_cp07

0x58cc,	// (0x000130ff) cell_vitu_function_pane_g1

0x9b47,	// (0x0001737a) main_calc_pane_g1

0x0d28,	// (0x0000e55b) aid_visual_content_pane

0x93d3,	// (0x00016c06) main_vradio_pane

0x58d5,	// (0x00013108) main_vradio_pane_g1_ParamLimits

0x58d5,	// (0x00013108) main_vradio_pane_g1

0xc8ee,	// (0x0001a121) main_vradio_pane_g2_ParamLimits

0xc8ee,	// (0x0001a121) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0001d08d) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0001d08d) main_vradio_pane_g

0x58ec,	// (0x0001311f) main_vradio_pane_t1_ParamLimits

0x58ec,	// (0x0001311f) main_vradio_pane_t1

0x5901,	// (0x00013134) main_vradio_pane_t2_ParamLimits

0x5901,	// (0x00013134) main_vradio_pane_t2

0xc8fb,	// (0x0001a12e) main_vradio_pane_t3_ParamLimits

0xc8fb,	// (0x0001a12e) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0001d092) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0001d092) main_vradio_pane_t

0x5916,	// (0x00013149) vradio_rocker_control_pane_ParamLimits

0x5916,	// (0x00013149) vradio_rocker_control_pane

0x5928,	// (0x0001315b) vradio_station_info_pane_ParamLimits

0x5928,	// (0x0001315b) vradio_station_info_pane

0xc90f,	// (0x0001a142) vradio_frequency_info_pane_ParamLimits

0xc90f,	// (0x0001a142) vradio_frequency_info_pane

0xc293,	// (0x00019ac6) vradio_station_info_pane_g1

0xc91e,	// (0x0001a151) vradio_station_info_pane_t1_ParamLimits

0xc91e,	// (0x0001a151) vradio_station_info_pane_t1

0xc940,	// (0x0001a173) vradio_station_info_pane_t2_ParamLimits

0xc940,	// (0x0001a173) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0001d099) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0001d099) vradio_station_info_pane_t

0xc97b,	// (0x0001a1ae) vradio_tuning_pane

0xc983,	// (0x0001a1b6) vradio_rocker_control_pane_g1

0xc98b,	// (0x0001a1be) vradio_rocker_control_pane_g2

0xc993,	// (0x0001a1c6) vradio_rocker_control_pane_g3

0xc99b,	// (0x0001a1ce) vradio_rocker_control_pane_g4

0xc9a3,	// (0x0001a1d6) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0001d09e) vradio_rocker_control_pane_g

0x5938,	// (0x0001316b) vradio_frequency_info_pane_g1

0xc9ab,	// (0x0001a1de) vradio_frequency_info_pane_t1_ParamLimits

0xc9ab,	// (0x0001a1de) vradio_frequency_info_pane_t1

0x5942,	// (0x00013175) vradio_tuning_pane_g1

0x594d,	// (0x00013180) vradio_tuning_pane_t1

0x9401,	// (0x00016c34) area_side_right_pane_ParamLimits

0x9401,	// (0x00016c34) area_side_right_pane

0xbd25,	// (0x00019558) status_small_pane_g1

0xbd2d,	// (0x00019560) status_small_pane_g2

0xbd36,	// (0x00019569) status_small_pane_g3

0xbd3f,	// (0x00019572) status_small_pane_g4

0x0003,

0xf62b,	// (0x0001ce5e) status_small_pane_g

0xbd48,	// (0x0001957b) status_small_pane_t1

0x93d3,	// (0x00016c06) main_video3_pane

0xc9bf,	// (0x0001a1f2) cams_zoom_vslider_pane

0xc9c7,	// (0x0001a1fa) image3_wide_pane_ParamLimits

0xc9c7,	// (0x0001a1fa) image3_wide_pane

0xc9e1,	// (0x0001a214) image3_wide_small_pane

0xc9ed,	// (0x0001a220) main_video3_pane_g1_ParamLimits

0xc9ed,	// (0x0001a220) main_video3_pane_g1

0xca09,	// (0x0001a23c) main_video3_pane_g2_ParamLimits

0xca09,	// (0x0001a23c) main_video3_pane_g2

0x0001,

0xf876,	// (0x0001d0a9) main_video3_pane_g_ParamLimits

0xf876,	// (0x0001d0a9) main_video3_pane_g

0xca25,	// (0x0001a258) main_video3_pane_t1_ParamLimits

0xca25,	// (0x0001a258) main_video3_pane_t1

0xca50,	// (0x0001a283) main_video3_pane_t2_ParamLimits

0xca50,	// (0x0001a283) main_video3_pane_t2

0xca7d,	// (0x0001a2b0) main_video3_pane_t3_ParamLimits

0xca7d,	// (0x0001a2b0) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0001d0ae) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0001d0ae) main_video3_pane_t

0xcaaa,	// (0x0001a2dd) cams_zoom_vslider_pane_g1

0xcab3,	// (0x0001a2e6) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0001d0b5) cams_zoom_vslider_pane_g

0xcabb,	// (0x0001a2ee) small_slider_vertical_pane

0xc293,	// (0x00019ac6) small_slider_vertical_pane_g1

0xc293,	// (0x00019ac6) small_slider_vertical_pane_g2

0xcac3,	// (0x0001a2f6) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0001d0ba) small_slider_vertical_pane_g

0x93d3,	// (0x00016c06) main_hwr_training_pane

0xcacc,	// (0x0001a2ff) hwr_training_instruct_pane_ParamLimits

0xcacc,	// (0x0001a2ff) hwr_training_instruct_pane

0x595c,	// (0x0001318f) hwr_training_navi_pane_ParamLimits

0x595c,	// (0x0001318f) hwr_training_navi_pane

0x597b,	// (0x000131ae) hwr_training_write_pane_ParamLimits

0x597b,	// (0x000131ae) hwr_training_write_pane

0x93d3,	// (0x00016c06) bg_frame_shadow_pane

0xcb03,	// (0x0001a336) hwr_training_write_pane_g1

0xcb0b,	// (0x0001a33e) hwr_training_write_pane_g2

0xcb13,	// (0x0001a346) hwr_training_write_pane_g3

0xcb1b,	// (0x0001a34e) hwr_training_write_pane_g4

0xcb23,	// (0x0001a356) hwr_training_write_pane_g5

0xcb2b,	// (0x0001a35e) hwr_training_write_pane_g6

0xcb33,	// (0x0001a366) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0001d0c1) hwr_training_write_pane_g

0xcb3b,	// (0x0001a36e) hwr_training_navi_pane_g1_ParamLimits

0xcb3b,	// (0x0001a36e) hwr_training_navi_pane_g1

0xcb4d,	// (0x0001a380) hwr_training_navi_pane_g2_ParamLimits

0xcb4d,	// (0x0001a380) hwr_training_navi_pane_g2

0xcb5f,	// (0x0001a392) hwr_training_navi_pane_g3_ParamLimits

0xcb5f,	// (0x0001a392) hwr_training_navi_pane_g3

0xcb6f,	// (0x0001a3a2) hwr_training_navi_pane_g4_ParamLimits

0xcb6f,	// (0x0001a3a2) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0001d0d0) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0001d0d0) hwr_training_navi_pane_g

0xcb7c,	// (0x0001a3af) hwr_training_navi_pane_t1

0x59c3,	// (0x000131f6) list_single_hwr_training_instruct_pane_ParamLimits

0x59c3,	// (0x000131f6) list_single_hwr_training_instruct_pane

0xcb8a,	// (0x0001a3bd) list_single_hwr_training_instruct_pane_t1

0xc1d3,	// (0x00019a06) bg_frame_shadow_pane_g1

0xcb99,	// (0x0001a3cc) bg_frame_shadow_pane_g2

0xcba1,	// (0x0001a3d4) bg_frame_shadow_pane_g3

0xcba9,	// (0x0001a3dc) bg_frame_shadow_pane_g4

0xcbb1,	// (0x0001a3e4) bg_frame_shadow_pane_g5

0xcbb9,	// (0x0001a3ec) bg_frame_shadow_pane_g6

0xcbc1,	// (0x0001a3f4) bg_frame_shadow_pane_g7

0x9ca6,	// (0x000174d9) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0001d0db) bg_frame_shadow_pane_g

0x93d3,	// (0x00016c06) main_video_tele_dialer_pane

0x59df,	// (0x00013212) aid_size_cell_video_keypad_ParamLimits

0x59df,	// (0x00013212) aid_size_cell_video_keypad

0x59f9,	// (0x0001322c) grid_video_dialer_keypad_pane_ParamLimits

0x59f9,	// (0x0001322c) grid_video_dialer_keypad_pane

0x5a47,	// (0x0001327a) video_down_pane_cp_ParamLimits

0x5a47,	// (0x0001327a) video_down_pane_cp

0x5a7b,	// (0x000132ae) cell_video_dialer_keypad_pane_ParamLimits

0x5a7b,	// (0x000132ae) cell_video_dialer_keypad_pane

0xcbc9,	// (0x0001a3fc) bg_button_pane_cp08_ParamLimits

0xcbc9,	// (0x0001a3fc) bg_button_pane_cp08

0x5aa1,	// (0x000132d4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5aa1,	// (0x000132d4) cell_video_dialer_keypad_pane_g1

0x514d,	// (0x00012980) mup3_rocker2_pane_ParamLimits

0x514d,	// (0x00012980) mup3_rocker2_pane

0xc293,	// (0x00019ac6) mup3_rocker2_pane_g1

0x3c93,	// (0x000114c6) main_dialer2_pane

0x93d3,	// (0x00016c06) main_mp4_pane

0xcbdd,	// (0x0001a410) main_mp4_pane_g1_ParamLimits

0xcbdd,	// (0x0001a410) main_mp4_pane_g1

0xcbdd,	// (0x0001a410) main_mp4_pane_g2_ParamLimits

0xcbdd,	// (0x0001a410) main_mp4_pane_g2

0x5adc,	// (0x0001330f) main_mp4_pane_g3_ParamLimits

0x5adc,	// (0x0001330f) main_mp4_pane_g3

0xcbeb,	// (0x0001a41e) main_mp4_pane_g4_ParamLimits

0xcbeb,	// (0x0001a41e) main_mp4_pane_g4

0xcc05,	// (0x0001a438) main_mp4_pane_g5_ParamLimits

0xcc05,	// (0x0001a438) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0001d0fb) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0001d0fb) main_mp4_pane_g

0xcc39,	// (0x0001a46c) main_mp4_pane_t1_ParamLimits

0xcc39,	// (0x0001a46c) main_mp4_pane_t1

0xcc95,	// (0x0001a4c8) main_mp4_pane_t2_ParamLimits

0xcc95,	// (0x0001a4c8) main_mp4_pane_t2

0xcce7,	// (0x0001a51a) main_mp4_pane_t3_ParamLimits

0xcce7,	// (0x0001a51a) main_mp4_pane_t3

0xcd07,	// (0x0001a53a) main_mp4_pane_t4_ParamLimits

0xcd07,	// (0x0001a53a) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0001d108) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0001d108) main_mp4_pane_t

0xcd47,	// (0x0001a57a) mp4_progress_pane_ParamLimits

0xcd47,	// (0x0001a57a) mp4_progress_pane

0xcd91,	// (0x0001a5c4) mp4_rocker_pane_ParamLimits

0xcd91,	// (0x0001a5c4) mp4_rocker_pane

0xcdbb,	// (0x0001a5ee) mp4_progress_pane_t1

0xcdd4,	// (0x0001a607) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0001d111) mp4_progress_pane_t

0xcded,	// (0x0001a620) mup_progress_pane_cp04

0xc293,	// (0x00019ac6) mp4_rocker_pane_g1

0x5b26,	// (0x00013359) aid_cell_size_keypad2_ParamLimits

0x5b26,	// (0x00013359) aid_cell_size_keypad2

0x5b3c,	// (0x0001336f) dialer2_ne_pane_ParamLimits

0x5b3c,	// (0x0001336f) dialer2_ne_pane

0x5b54,	// (0x00013387) grid_dialer2_keypad_pane_ParamLimits

0x5b54,	// (0x00013387) grid_dialer2_keypad_pane

0xc072,	// (0x000198a5) bg_popup_call_pane_cp07_ParamLimits

0xc072,	// (0x000198a5) bg_popup_call_pane_cp07

0x5b70,	// (0x000133a3) dialer2_ne_pane_t1_ParamLimits

0x5b70,	// (0x000133a3) dialer2_ne_pane_t1

0x5bb0,	// (0x000133e3) cell_dialer2_keypad_pane_ParamLimits

0x5bb0,	// (0x000133e3) cell_dialer2_keypad_pane

0xce0b,	// (0x0001a63e) bg_button_pane_pane_cp04_ParamLimits

0xce0b,	// (0x0001a63e) bg_button_pane_pane_cp04

0x5bd6,	// (0x00013409) cell_dialer2_keypad_pane_g1_ParamLimits

0x5bd6,	// (0x00013409) cell_dialer2_keypad_pane_g1

0x1b9b,	// (0x0000f3ce) aid_placing_vt_set_content_ParamLimits

0x1b9b,	// (0x0000f3ce) aid_placing_vt_set_content

0x1bbb,	// (0x0000f3ee) aid_placing_vt_set_title_ParamLimits

0x1bbb,	// (0x0000f3ee) aid_placing_vt_set_title

0x93d3,	// (0x00016c06) main_image3_pane

0x5c9c,	// (0x000134cf) area_side_right_pane_cp01_ParamLimits

0x5c9c,	// (0x000134cf) area_side_right_pane_cp01

0xcbdd,	// (0x0001a410) main_image3_pane_g1_ParamLimits

0xcbdd,	// (0x0001a410) main_image3_pane_g1

0x5cb5,	// (0x000134e8) main_image3_pane_g2_ParamLimits

0x5cb5,	// (0x000134e8) main_image3_pane_g2

0x5cdd,	// (0x00013510) main_image3_pane_g3_ParamLimits

0x5cdd,	// (0x00013510) main_image3_pane_g3

0x5d07,	// (0x0001353a) main_image3_pane_g4_ParamLimits

0x5d07,	// (0x0001353a) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0001d120) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0001d120) main_image3_pane_g

0x5d31,	// (0x00013564) main_image3_pane_t1_ParamLimits

0x5d31,	// (0x00013564) main_image3_pane_t1

0x5d89,	// (0x000135bc) main_image3_pane_t2_ParamLimits

0x5d89,	// (0x000135bc) main_image3_pane_t2

0x5ddb,	// (0x0001360e) main_image3_pane_t3_ParamLimits

0x5ddb,	// (0x0001360e) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0001d129) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0001d129) main_image3_pane_t

0x9444,	// (0x00016c77) grid_sctrl_middle_pane_cp01_ParamLimits

0x9444,	// (0x00016c77) grid_sctrl_middle_pane_cp01

0x5e63,	// (0x00013696) cell_sctrl_middle_pane_cp01_ParamLimits

0x5e63,	// (0x00013696) cell_sctrl_middle_pane_cp01

0x5e80,	// (0x000136b3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5e80,	// (0x000136b3) cell_sctrl_middle_pane_cp01_g1

0x93d3,	// (0x00016c06) main_call4_pane

0x5e95,	// (0x000136c8) aid_size_button_call4_ParamLimits

0x5e95,	// (0x000136c8) aid_size_button_call4

0x5ec8,	// (0x000136fb) call4_windows_pane_ParamLimits

0x5ec8,	// (0x000136fb) call4_windows_pane

0x5eea,	// (0x0001371d) grid_call4_button_pane_ParamLimits

0x5eea,	// (0x0001371d) grid_call4_button_pane

0xce4b,	// (0x0001a67e) call4_windows_conf_pane

0xce66,	// (0x0001a699) popup_call4_audio_first_window_ParamLimits

0xce66,	// (0x0001a699) popup_call4_audio_first_window

0xceb4,	// (0x0001a6e7) popup_call4_audio_second_window_ParamLimits

0xceb4,	// (0x0001a6e7) popup_call4_audio_second_window

0xceca,	// (0x0001a6fd) popup_call4_audio_wait_window_ParamLimits

0xceca,	// (0x0001a6fd) popup_call4_audio_wait_window

0x5f15,	// (0x00013748) cell_call4_button_pane_ParamLimits

0x5f15,	// (0x00013748) cell_call4_button_pane

0x5f3c,	// (0x0001376f) bg_button_pane_cp09_ParamLimits

0x5f3c,	// (0x0001376f) bg_button_pane_cp09

0x5f48,	// (0x0001377b) cell_call4_button_pane_g1_ParamLimits

0x5f48,	// (0x0001377b) cell_call4_button_pane_g1

0x5f6e,	// (0x000137a1) cell_call4_button_pane_t1_ParamLimits

0x5f6e,	// (0x000137a1) cell_call4_button_pane_t1

0xcf12,	// (0x0001a745) popup_call4_audio_conf_window_ParamLimits

0xcf12,	// (0x0001a745) popup_call4_audio_conf_window

0x51af,	// (0x000129e2) mup3_progress_pane_t1_ParamLimits

0x51c6,	// (0x000129f9) mup3_progress_pane_t2_ParamLimits

0xc5b2,	// (0x00019de5) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0001d002) mup3_progress_pane_t_ParamLimits

0xc5c9,	// (0x00019dfc) mup_progress_pane_cp03_ParamLimits

0x579e,	// (0x00012fd1) mup3_control_keys_pane_g4_copy1

0xcd75,	// (0x0001a5a8) mp4_rocker2_pane_ParamLimits

0xcd75,	// (0x0001a5a8) mp4_rocker2_pane

0xcf2c,	// (0x0001a75f) mp4_rocker2_pane_g1

0xcf34,	// (0x0001a767) mp4_rocker2_pane_g2

0xcf3c,	// (0x0001a76f) mp4_rocker2_pane_g3

0xcf44,	// (0x0001a777) mp4_rocker2_pane_g4

0xcf4c,	// (0x0001a77f) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0001d132) mp4_rocker2_pane_g

0x93d3,	// (0x00016c06) main_camera4_pane

0x93d3,	// (0x00016c06) main_video4_pane

0x5a15,	// (0x00013248) main_video_tele_dialer_pane_t1_ParamLimits

0x5a15,	// (0x00013248) main_video_tele_dialer_pane_t1

0x5a2e,	// (0x00013261) main_video_tele_dialer_pane_t2_ParamLimits

0x5a2e,	// (0x00013261) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0001d0ec) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0001d0ec) main_video_tele_dialer_pane_t

0x5fac,	// (0x000137df) cam4_autofocus_pane_ParamLimits

0x5fac,	// (0x000137df) cam4_autofocus_pane

0x5fc2,	// (0x000137f5) cam4_image_uncrop_pane_ParamLimits

0x5fc2,	// (0x000137f5) cam4_image_uncrop_pane

0x5fdb,	// (0x0001380e) cam4_indicators_pane_ParamLimits

0x5fdb,	// (0x0001380e) cam4_indicators_pane

0x600a,	// (0x0001383d) main_camera4_pane_g1_ParamLimits

0x600a,	// (0x0001383d) main_camera4_pane_g1

0x6016,	// (0x00013849) main_camera4_pane_g2_ParamLimits

0x6016,	// (0x00013849) main_camera4_pane_g2

0x6016,	// (0x00013849) main_camera4_pane_g3_ParamLimits

0x6016,	// (0x00013849) main_camera4_pane_g3

0x6022,	// (0x00013855) main_camera4_pane_g4_ParamLimits

0x6022,	// (0x00013855) main_camera4_pane_g4

0x602e,	// (0x00013861) main_camera4_pane_g5_ParamLimits

0x602e,	// (0x00013861) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0001d13d) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0001d13d) main_camera4_pane_g

0x604b,	// (0x0001387e) main_camera4_pane_t1_ParamLimits

0x604b,	// (0x0001387e) main_camera4_pane_t1

0xc4c3,	// (0x00019cf6) bg_tb_trans_pane_cp06

0xcf6e,	// (0x0001a7a1) cam4_indicators_pane_g1

0xcf7b,	// (0x0001a7ae) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0001d158) cam4_indicators_pane_g

0xcf9b,	// (0x0001a7ce) cam4_indicators_pane_t1

0x60c3,	// (0x000138f6) main_video4_pane_g1_ParamLimits

0x60c3,	// (0x000138f6) main_video4_pane_g1

0x60d5,	// (0x00013908) main_video4_pane_g2_ParamLimits

0x60d5,	// (0x00013908) main_video4_pane_g2

0x60e9,	// (0x0001391c) main_video4_pane_g3_ParamLimits

0x60e9,	// (0x0001391c) main_video4_pane_g3

0x60f9,	// (0x0001392c) main_video4_pane_g4_ParamLimits

0x60f9,	// (0x0001392c) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0001d15f) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0001d15f) main_video4_pane_g

0x6119,	// (0x0001394c) vid4_indicators_pane_ParamLimits

0x6119,	// (0x0001394c) vid4_indicators_pane

0x6149,	// (0x0001397c) video4_image_uncrop_cif_pane_ParamLimits

0x6149,	// (0x0001397c) video4_image_uncrop_cif_pane

0x6163,	// (0x00013996) video4_image_uncrop_nhd_pane_ParamLimits

0x6163,	// (0x00013996) video4_image_uncrop_nhd_pane

0x5fc2,	// (0x000137f5) video4_image_uncrop_vga_pane_ParamLimits

0x5fc2,	// (0x000137f5) video4_image_uncrop_vga_pane

0xc952,	// (0x0001a185) bg_tb_trans_pane_cp07

0x6179,	// (0x000139ac) vid4_indicators_pane_g1

0x6186,	// (0x000139b9) vid4_indicators_pane_g2

0x6193,	// (0x000139c6) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0001d16a) vid4_indicators_pane_g

0x61b8,	// (0x000139eb) vid4_indicators_pane_t1

0x61ca,	// (0x000139fd) cam4_autofocus_pane_g1

0x61d2,	// (0x00013a05) cam4_autofocus_pane_g2

0x61da,	// (0x00013a0d) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0001d175) cam4_autofocus_pane_g

0x61e2,	// (0x00013a15) cam4_autofocus_pane_g3_copy1

0x5a5f,	// (0x00013292) video_down_pane_cp_t1

0x5a6d,	// (0x000132a0) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0001d0f1) video_down_pane_cp_t

0x9444,	// (0x00016c77) popup_vitu2_window_ParamLimits

0x9444,	// (0x00016c77) popup_vitu2_window

0x61ea,	// (0x00013a1d) aid_size_cell2_itu2_ParamLimits

0x61ea,	// (0x00013a1d) aid_size_cell2_itu2

0x6210,	// (0x00013a43) aid_size_cell_itu2_ParamLimits

0x6210,	// (0x00013a43) aid_size_cell_itu2

0x626e,	// (0x00013aa1) bg_popup_window_pane_cp09_ParamLimits

0x626e,	// (0x00013aa1) bg_popup_window_pane_cp09

0x627c,	// (0x00013aaf) field_vitu2_entry_pane_ParamLimits

0x627c,	// (0x00013aaf) field_vitu2_entry_pane

0x62a4,	// (0x00013ad7) grid_vitu2_function_pane_ParamLimits

0x62a4,	// (0x00013ad7) grid_vitu2_function_pane

0x62f5,	// (0x00013b28) grid_vitu2_itu_pane_ParamLimits

0x62f5,	// (0x00013b28) grid_vitu2_itu_pane

0x6380,	// (0x00013bb3) cell_vitu2_itu_pane_ParamLimits

0x6380,	// (0x00013bb3) cell_vitu2_itu_pane

0x63a6,	// (0x00013bd9) cell_vitu2_function_pane_ParamLimits

0x63a6,	// (0x00013bd9) cell_vitu2_function_pane

0xcfc9,	// (0x0001a7fc) bg_popup_call_pane_cp08_ParamLimits

0xcfc9,	// (0x0001a7fc) bg_popup_call_pane_cp08

0xcfe2,	// (0x0001a815) field_vitu2_entry_pane_g1

0xcfee,	// (0x0001a821) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0001d17c) field_vitu2_entry_pane_g

0x63ea,	// (0x00013c1d) field_vitu2_entry_pane_t1_ParamLimits

0x63ea,	// (0x00013c1d) field_vitu2_entry_pane_t1

0xd008,	// (0x0001a83b) field_vitu2_entry_pane_t2_ParamLimits

0xd008,	// (0x0001a83b) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0001d183) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0001d183) field_vitu2_entry_pane_t

0x6407,	// (0x00013c3a) bg_button_pane_cp010_ParamLimits

0x6407,	// (0x00013c3a) bg_button_pane_cp010

0x6415,	// (0x00013c48) cell_vitu2_itu_pane_g1

0x6433,	// (0x00013c66) cell_vitu2_itu_pane_t1_ParamLimits

0x6433,	// (0x00013c66) cell_vitu2_itu_pane_t1

0x6499,	// (0x00013ccc) cell_vitu2_itu_pane_t2_ParamLimits

0x6499,	// (0x00013ccc) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0001d18d) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0001d18d) cell_vitu2_itu_pane_t

0x9444,	// (0x00016c77) bg_button_pane_cp011

0x6575,	// (0x00013da8) cell_vitu2_function_pane_g1

0x93d3,	// (0x00016c06) main_myfav_hc_pane

0x5e2b,	// (0x0001365e) popup_image3_note_pane_ParamLimits

0x5e2b,	// (0x0001365e) popup_image3_note_pane

0x5e47,	// (0x0001367a) popup_image3_tool_bar_pane_ParamLimits

0x5e47,	// (0x0001367a) popup_image3_tool_bar_pane

0x651d,	// (0x00013d50) cell_vitu2_itu_pane_t3_ParamLimits

0x651d,	// (0x00013d50) cell_vitu2_itu_pane_t3

0x93d3,	// (0x00016c06) bg_popup_trans_pane

0xd02d,	// (0x0001a860) grid_image3_tool_bar_pane

0xd037,	// (0x0001a86a) bg_popup_trans_pane_g1

0xa16b,	// (0x0001799e) bg_popup_trans_pane_g2

0xd03f,	// (0x0001a872) bg_popup_trans_pane_g3

0xd047,	// (0x0001a87a) bg_popup_trans_pane_g4

0xd04f,	// (0x0001a882) bg_popup_trans_pane_g5

0xd057,	// (0x0001a88a) bg_popup_trans_pane_g6

0xd05f,	// (0x0001a892) bg_popup_trans_pane_g7

0xd067,	// (0x0001a89a) bg_popup_trans_pane_g8

0xa14b,	// (0x0001797e) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0001d194) bg_popup_trans_pane_g

0xd06f,	// (0x0001a8a2) cell_image3_tool_bar_pane_ParamLimits

0xd06f,	// (0x0001a8a2) cell_image3_tool_bar_pane

0xc293,	// (0x00019ac6) cell_image3_tool_bar_pane_g1

0x93d3,	// (0x00016c06) bg_popup_trans_pane_cp1

0xd085,	// (0x0001a8b8) popup_image3_note_pane_t1

0xd093,	// (0x0001a8c6) popup_image3_note_pane_t2

0xd0a1,	// (0x0001a8d4) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0001d1a7) popup_image3_note_pane_t

0xd0b1,	// (0x0001a8e4) popup_image3_note_pane_t3_copy1

0x6589,	// (0x00013dbc) bg_myfav_hc_instruction_pane_ParamLimits

0x6589,	// (0x00013dbc) bg_myfav_hc_instruction_pane

0x65a1,	// (0x00013dd4) cell_myfav_contact_pane_ParamLimits

0x65a1,	// (0x00013dd4) cell_myfav_contact_pane

0x65bd,	// (0x00013df0) cell_myfav_contact_pane_cp1_ParamLimits

0x65bd,	// (0x00013df0) cell_myfav_contact_pane_cp1

0x65d5,	// (0x00013e08) cell_myfav_contact_pane_cp2_ParamLimits

0x65d5,	// (0x00013e08) cell_myfav_contact_pane_cp2

0x65ed,	// (0x00013e20) cell_myfav_contact_pane_cp3_ParamLimits

0x65ed,	// (0x00013e20) cell_myfav_contact_pane_cp3

0x6604,	// (0x00013e37) cell_myfav_contact_pane_cp4_ParamLimits

0x6604,	// (0x00013e37) cell_myfav_contact_pane_cp4

0x661c,	// (0x00013e4f) cell_myfav_contact_pane_cp5_ParamLimits

0x661c,	// (0x00013e4f) cell_myfav_contact_pane_cp5

0x6630,	// (0x00013e63) cell_myfav_contact_pane_cp6_ParamLimits

0x6630,	// (0x00013e63) cell_myfav_contact_pane_cp6

0x6646,	// (0x00013e79) cell_myfav_contact_pane_cp7_ParamLimits

0x6646,	// (0x00013e79) cell_myfav_contact_pane_cp7

0xd0bf,	// (0x0001a8f2) listscroll_gen_pane_cp05

0x665e,	// (0x00013e91) main_myfav_hc_pane_g1_ParamLimits

0x665e,	// (0x00013e91) main_myfav_hc_pane_g1

0x6678,	// (0x00013eab) main_myfav_hc_pane_g2_ParamLimits

0x6678,	// (0x00013eab) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0001d1ae) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0001d1ae) main_myfav_hc_pane_g

0x66ac,	// (0x00013edf) main_myfav_hc_pane_t1_ParamLimits

0x66ac,	// (0x00013edf) main_myfav_hc_pane_t1

0xd0c8,	// (0x0001a8fb) main_myfav_hc_pane_t2_ParamLimits

0xd0c8,	// (0x0001a8fb) main_myfav_hc_pane_t2

0xd0da,	// (0x0001a90d) main_myfav_hc_pane_t3_ParamLimits

0xd0da,	// (0x0001a90d) main_myfav_hc_pane_t3

0x66c3,	// (0x00013ef6) main_myfav_hc_pane_t4_ParamLimits

0x66c3,	// (0x00013ef6) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0001d1b5) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0001d1b5) main_myfav_hc_pane_t

0xc293,	// (0x00019ac6) bg_myfav_hc_instruction_pane_g1

0xd0ec,	// (0x0001a91f) cell_myfav_contact_pane_g1_ParamLimits

0xd0ec,	// (0x0001a91f) cell_myfav_contact_pane_g1

0xd0ec,	// (0x0001a91f) cell_myfav_contact_pane_g2_ParamLimits

0xd0ec,	// (0x0001a91f) cell_myfav_contact_pane_g2

0xd0f8,	// (0x0001a92b) cell_myfav_contact_pane_g3_ParamLimits

0xd0f8,	// (0x0001a92b) cell_myfav_contact_pane_g3

0xc59c,	// (0x00019dcf) cell_myfav_contact_pane_g4_ParamLimits

0xc59c,	// (0x00019dcf) cell_myfav_contact_pane_g4

0xd105,	// (0x0001a938) cell_myfav_contact_pane_g5_ParamLimits

0xd105,	// (0x0001a938) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0001d1c0) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0001d1c0) cell_myfav_contact_pane_g

0x6692,	// (0x00013ec5) main_myfav_hc_pane_g3_ParamLimits

0x6692,	// (0x00013ec5) main_myfav_hc_pane_g3

0x0e55,	// (0x0000e688) popup_adpt_find_window

0x66ed,	// (0x00013f20) afind_page_pane_ParamLimits

0x66ed,	// (0x00013f20) afind_page_pane

0x6702,	// (0x00013f35) aid_size_cell_afind_ParamLimits

0x6702,	// (0x00013f35) aid_size_cell_afind

0x6720,	// (0x00013f53) bg_popup_sub_pane_cp09_ParamLimits

0x6720,	// (0x00013f53) bg_popup_sub_pane_cp09

0x672d,	// (0x00013f60) find_pane_cp01_ParamLimits

0x672d,	// (0x00013f60) find_pane_cp01

0xd111,	// (0x0001a944) grid_afind_control_pane_ParamLimits

0xd111,	// (0x0001a944) grid_afind_control_pane

0x673a,	// (0x00013f6d) grid_afind_pane_ParamLimits

0x673a,	// (0x00013f6d) grid_afind_pane

0x675c,	// (0x00013f8f) cell_afind_pane_ParamLimits

0x675c,	// (0x00013f8f) cell_afind_pane

0xc293,	// (0x00019ac6) afind_page_pane_g1

0x67c3,	// (0x00013ff6) afind_page_pane_g2

0x67cc,	// (0x00013fff) afind_page_pane_g3

0x0002,

0xf998,	// (0x0001d1cb) afind_page_pane_g

0x67d5,	// (0x00014008) afind_page_pane_t1

0xd125,	// (0x0001a958) cell_afind_grid_control_pane_ParamLimits

0xd125,	// (0x0001a958) cell_afind_grid_control_pane

0xce0b,	// (0x0001a63e) bg_button_pane_cp69_ParamLimits

0xce0b,	// (0x0001a63e) bg_button_pane_cp69

0x67f5,	// (0x00014028) cell_afind_pane_g1_ParamLimits

0x67f5,	// (0x00014028) cell_afind_pane_g1

0x6802,	// (0x00014035) cell_afind_pane_t1_ParamLimits

0x6802,	// (0x00014035) cell_afind_pane_t1

0x9e9c,	// (0x000176cf) bg_button_pane_cp72

0xd134,	// (0x0001a967) cell_afind_grid_control_pane_g1

0x3733,	// (0x00010f66) aid_image_placing_area_ParamLimits

0x3733,	// (0x00010f66) aid_image_placing_area

0xc8a1,	// (0x0001a0d4) field_vitu_entry_pane_g1_ParamLimits

0xc8a1,	// (0x0001a0d4) field_vitu_entry_pane_g1

0xc8ad,	// (0x0001a0e0) field_vitu_entry_pane_g2_ParamLimits

0xc8ad,	// (0x0001a0e0) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0001d07c) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0001d07c) field_vitu_entry_pane_g

0x586d,	// (0x000130a0) cell_vitu_itu_pane_g1_ParamLimits

0x58af,	// (0x000130e2) cell_vitu_itu_pane_t3_ParamLimits

0x58af,	// (0x000130e2) cell_vitu_itu_pane_t3

0xcdbb,	// (0x0001a5ee) mp4_progress_pane_t1_ParamLimits

0xcdd4,	// (0x0001a607) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0001d111) mp4_progress_pane_t_ParamLimits

0xcded,	// (0x0001a620) mup_progress_pane_cp04_ParamLimits

0x66d7,	// (0x00013f0a) main_myfav_hc_pane_t5_ParamLimits

0x66d7,	// (0x00013f0a) main_myfav_hc_pane_t5

0x93f9,	// (0x00016c2c) aid_zoom_text_primary

0x0e55,	// (0x0000e688) popup_adpt_find_window_ParamLimits

0x9444,	// (0x00016c77) main_cam_set_pane

0x5ff4,	// (0x00013827) cam4_zoom_pane_ParamLimits

0x5ff4,	// (0x00013827) cam4_zoom_pane

0x6814,	// (0x00014047) main_cam_set_pane_g1_ParamLimits

0x6814,	// (0x00014047) main_cam_set_pane_g1

0x6822,	// (0x00014055) main_cam_set_pane_g2_ParamLimits

0x6822,	// (0x00014055) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0001d1d2) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0001d1d2) main_cam_set_pane_g

0x6845,	// (0x00014078) main_cam_set_pane_t1_ParamLimits

0x6845,	// (0x00014078) main_cam_set_pane_t1

0x6860,	// (0x00014093) main_cset_listscroll_pane_ParamLimits

0x6860,	// (0x00014093) main_cset_listscroll_pane

0x6884,	// (0x000140b7) main_cset_slider_pane_ParamLimits

0x6884,	// (0x000140b7) main_cset_slider_pane

0xd145,	// (0x0001a978) main_cset_list_pane_ParamLimits

0xd145,	// (0x0001a978) main_cset_list_pane

0xd155,	// (0x0001a988) scroll_pane_cp028

0x68ae,	// (0x000140e1) aid_area_touch_slider

0x68ca,	// (0x000140fd) cset_slider_pane

0x68f4,	// (0x00014127) main_cset_slider_pane_g1

0x6909,	// (0x0001413c) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0001d1d7) main_cset_slider_pane_g

0xd18e,	// (0x0001a9c1) main_cset_slider_pane_t1

0x69cb,	// (0x000141fe) main_cset_slider_pane_t2

0x69e5,	// (0x00014218) main_cset_slider_pane_t3

0x69ff,	// (0x00014232) main_cset_slider_pane_t4

0x6a19,	// (0x0001424c) main_cset_slider_pane_t5

0x6a37,	// (0x0001426a) main_cset_slider_pane_t6

0x6a4e,	// (0x00014281) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0001d1fc) main_cset_slider_pane_t

0x6b5a,	// (0x0001438d) cset_list_set_pane_ParamLimits

0x6b5a,	// (0x0001438d) cset_list_set_pane

0x6b6e,	// (0x000143a1) aid_position_infowindow_above

0x6b76,	// (0x000143a9) aid_position_infowindow_below

0xd22e,	// (0x0001aa61) cset_list_set_pane_g1_ParamLimits

0xd22e,	// (0x0001aa61) cset_list_set_pane_g1

0x6b7e,	// (0x000143b1) cset_list_set_pane_g3_ParamLimits

0x6b7e,	// (0x000143b1) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0001d21b) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0001d21b) cset_list_set_pane_g

0x6b8d,	// (0x000143c0) cset_list_set_pane_t1_ParamLimits

0x6b8d,	// (0x000143c0) cset_list_set_pane_t1

0x9444,	// (0x00016c77) list_highlight_pane_cp021_ParamLimits

0x9444,	// (0x00016c77) list_highlight_pane_cp021

0xaa49,	// (0x0001827c) cset_slider_pane_g1

0xaa5b,	// (0x0001828e) cset_slider_pane_g2

0xaa52,	// (0x00018285) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0001d220) cset_slider_pane_g

0xd23a,	// (0x0001aa6d) aid_area_touch_cam4_zoom

0xd242,	// (0x0001aa75) cam4_zoom_cont_pane

0xd24a,	// (0x0001aa7d) cam4_zoom_pane_g1

0xd252,	// (0x0001aa85) cam4_zoom_pane_g2

0x6ba2,	// (0x000143d5) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0001d227) cam4_zoom_pane_g

0xd25a,	// (0x0001aa8d) cam4_zoom_cont_pane_g1

0xd263,	// (0x0001aa96) cam4_zoom_cont_pane_g2

0xd26c,	// (0x0001aa9f) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0001d22e) cam4_zoom_cont_pane_g

0x5eb3,	// (0x000136e6) call4_image_pane_ParamLimits

0x5eb3,	// (0x000136e6) call4_image_pane

0xce4b,	// (0x0001a67e) call4_windows_conf_pane_ParamLimits

0xce92,	// (0x0001a6c5) popup_call4_audio_in_window_ParamLimits

0xce92,	// (0x0001a6c5) popup_call4_audio_in_window

0x93d3,	// (0x00016c06) bg_popup_call2_act_pane_cp02

0xcf0a,	// (0x0001a73d) call4_list_conf_pane

0xc293,	// (0x00019ac6) call4_image_pane_g1

0xc293,	// (0x00019ac6) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0001cf42) call4_image_pane_g

0xd275,	// (0x0001aaa8) list_single_graphic_popup_conf4_pane_ParamLimits

0xd275,	// (0x0001aaa8) list_single_graphic_popup_conf4_pane

0x93d3,	// (0x00016c06) list_highlight_pane_cp022

0xd28a,	// (0x0001aabd) list_single_graphic_popup_conf4_pane_g1

0xa723,	// (0x00017f56) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0001d235) list_single_graphic_popup_conf4_pane_g

0xd292,	// (0x0001aac5) list_single_graphic_popup_conf4_pane_t1

0x1c8f,	// (0x0000f4c2) popup_vtel_slider_window_ParamLimits

0x1c8f,	// (0x0000f4c2) popup_vtel_slider_window

0xcdf9,	// (0x0001a62c) dialer2_ne_pane_t2_ParamLimits

0xcdf9,	// (0x0001a62c) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0001d116) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0001d116) dialer2_ne_pane_t

0xc072,	// (0x000198a5) bg_popup_sub_pane_cp010_ParamLimits

0xc072,	// (0x000198a5) bg_popup_sub_pane_cp010

0x6baa,	// (0x000143dd) popup_vtel_slider_window_g1_ParamLimits

0x6baa,	// (0x000143dd) popup_vtel_slider_window_g1

0x6bbd,	// (0x000143f0) popup_vtel_slider_window_g2_ParamLimits

0x6bbd,	// (0x000143f0) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0001d23a) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0001d23a) popup_vtel_slider_window_g

0x6c13,	// (0x00014446) vtel_slider_pane_ParamLimits

0x6c13,	// (0x00014446) vtel_slider_pane

0x6c35,	// (0x00014468) vtel_slider_pane_g1_ParamLimits

0x6c35,	// (0x00014468) vtel_slider_pane_g1

0x6c49,	// (0x0001447c) vtel_slider_pane_g2_ParamLimits

0x6c49,	// (0x0001447c) vtel_slider_pane_g2

0x6c61,	// (0x00014494) vtel_slider_pane_g3_ParamLimits

0x6c61,	// (0x00014494) vtel_slider_pane_g3

0x6c35,	// (0x00014468) vtel_slider_pane_g4_ParamLimits

0x6c35,	// (0x00014468) vtel_slider_pane_g4

0x6c77,	// (0x000144aa) vtel_slider_pane_g5_ParamLimits

0x6c77,	// (0x000144aa) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0001d243) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0001d243) vtel_slider_pane_g

0x93d3,	// (0x00016c06) main_gallery2_pane

0x623c,	// (0x00013a6f) aid_size_row_itut2_dropdow_list_ParamLimits

0x623c,	// (0x00013a6f) aid_size_row_itut2_dropdow_list

0x62cc,	// (0x00013aff) grid_vitu2_function_top_pane_ParamLimits

0x62cc,	// (0x00013aff) grid_vitu2_function_top_pane

0x632b,	// (0x00013b5e) popup_vitu2_dropdown_list_window_ParamLimits

0x632b,	// (0x00013b5e) popup_vitu2_dropdown_list_window

0x6354,	// (0x00013b87) popup_vitu2_match_list_window

0x6c8d,	// (0x000144c0) cell_vitu2_function_top_pane_ParamLimits

0x6c8d,	// (0x000144c0) cell_vitu2_function_top_pane

0x6cad,	// (0x000144e0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6cad,	// (0x000144e0) cell_vitu2_function_top_pane_cp01

0x6ccb,	// (0x000144fe) cell_vitu2_function_top_wide_pane_ParamLimits

0x6ccb,	// (0x000144fe) cell_vitu2_function_top_wide_pane

0x9444,	// (0x00016c77) bg_button_pane_cp012

0x6ce9,	// (0x0001451c) cell_vitu2_function_top_pane_g1

0xd2ae,	// (0x0001aae1) bg_button_pane_cp013_ParamLimits

0xd2ae,	// (0x0001aae1) bg_button_pane_cp013

0x6cfd,	// (0x00014530) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6cfd,	// (0x00014530) cell_vitu2_function_top_wide_pane_g1

0x9444,	// (0x00016c77) bg_popup_sub_pane_cp20

0x6d15,	// (0x00014548) list_vitu2_match_list_pane

0xd037,	// (0x0001a86a) bg_popup_sub_pane_cp20_g1

0xd03f,	// (0x0001a872) bg_popup_sub_pane_cp20_g2

0xa16b,	// (0x0001799e) bg_popup_sub_pane_cp20_g3

0xd047,	// (0x0001a87a) bg_popup_sub_pane_cp20_g4

0xa14b,	// (0x0001797e) bg_popup_sub_pane_cp20_g5

0xd2ca,	// (0x0001aafd) bg_popup_sub_pane_cp20_g6

0xd057,	// (0x0001a88a) bg_popup_sub_pane_cp20_g7

0xd05f,	// (0x0001a892) bg_popup_sub_pane_cp20_g8

0xd067,	// (0x0001a89a) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0001d24e) bg_popup_sub_pane_cp20_g

0xd2d2,	// (0x0001ab05) list_vitu2_match_list_item_pane_ParamLimits

0xd2d2,	// (0x0001ab05) list_vitu2_match_list_item_pane

0xd2e4,	// (0x0001ab17) list_vitu2_match_list_item_pane_t1

0x93d3,	// (0x00016c06) bg_popup_sub_pane_cp21

0xa5dd,	// (0x00017e10) grid_vitu2_dropdown_list_pane

0x6d5f,	// (0x00014592) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6d5f,	// (0x00014592) cell_vitu2_dropdown_list_char_pane

0x6d82,	// (0x000145b5) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6d82,	// (0x000145b5) cell_vitu2_dropdown_list_ctrl_pane

0xd30a,	// (0x0001ab3d) cell_vitu2_dropdown_list_char_pane_g1

0xd313,	// (0x0001ab46) cell_vitu2_dropdown_list_char_pane_g2

0xd31c,	// (0x0001ab4f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0001d26b) cell_vitu2_dropdown_list_char_pane_g

0x6db0,	// (0x000145e3) cell_vitu2_dropdown_list_char_pane_t1

0x6dbe,	// (0x000145f1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6dbe,	// (0x000145f1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6dce,	// (0x00014601) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6dce,	// (0x00014601) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6ddf,	// (0x00014612) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6ddf,	// (0x00014612) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6def,	// (0x00014622) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6def,	// (0x00014622) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc4c3,	// (0x00019cf6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc4c3,	// (0x00019cf6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0001d272) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0001d272) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e0b,	// (0x0001463e) aid_size_cell_gallery2_ParamLimits

0x6e0b,	// (0x0001463e) aid_size_cell_gallery2

0x6e21,	// (0x00014654) grid_gallery2_pane_ParamLimits

0x6e21,	// (0x00014654) grid_gallery2_pane

0x6e35,	// (0x00014668) scroll_pane_cp029_ParamLimits

0x6e35,	// (0x00014668) scroll_pane_cp029

0x6e41,	// (0x00014674) cell_gallery2_pane_ParamLimits

0x6e41,	// (0x00014674) cell_gallery2_pane

0xd325,	// (0x0001ab58) cell_gallery2_pane_g2

0x6e7b,	// (0x000146ae) cell_gallery2_pane_g3

0xd32f,	// (0x0001ab62) cell_gallery2_pane_g4

0xd337,	// (0x0001ab6a) cell_gallery2_pane_g5

0xa8f1,	// (0x00018124) grid_highlight_pane_cp10

0x6354,	// (0x00013b87) popup_vitu2_match_list_window_ParamLimits

0x636b,	// (0x00013b9e) popup_vitu2_query_window_ParamLimits

0x636b,	// (0x00013b9e) popup_vitu2_query_window

0x93d3,	// (0x00016c06) bg_vitu2_candi_button_pane

0xd30a,	// (0x0001ab3d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd313,	// (0x0001ab46) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd31c,	// (0x0001ab4f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6e83,	// (0x000146b6) bg_button_pane_cp015

0x6e8d,	// (0x000146c0) bg_button_pane_cp016

0x6e97,	// (0x000146ca) bg_button_pane_cp017

0x9444,	// (0x00016c77) bg_popup_sub_pane_cp22

0xd33f,	// (0x0001ab72) popup_vitu2_query_window_g1

0x6ebf,	// (0x000146f2) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0001d27d) popup_vitu2_query_window_g

0x6ecd,	// (0x00014700) popup_vitu2_query_window_t1_ParamLimits

0x6ecd,	// (0x00014700) popup_vitu2_query_window_t1

0x6ef5,	// (0x00014728) popup_vitu2_query_window_t2_ParamLimits

0x6ef5,	// (0x00014728) popup_vitu2_query_window_t2

0x6f07,	// (0x0001473a) popup_vitu2_query_window_t3_ParamLimits

0x6f07,	// (0x0001473a) popup_vitu2_query_window_t3

0x6f2f,	// (0x00014762) popup_vitu2_query_window_t4_ParamLimits

0x6f2f,	// (0x00014762) popup_vitu2_query_window_t4

0x6f43,	// (0x00014776) popup_vitu2_query_window_t5_ParamLimits

0x6f43,	// (0x00014776) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0001d282) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0001d282) popup_vitu2_query_window_t

0xd13d,	// (0x0001a970) main_cset_text_pane

0x68ae,	// (0x000140e1) aid_area_touch_slider_ParamLimits

0x68ca,	// (0x000140fd) cset_slider_pane_ParamLimits

0x68f4,	// (0x00014127) main_cset_slider_pane_g1_ParamLimits

0x6909,	// (0x0001413c) main_cset_slider_pane_g2_ParamLimits

0xd15e,	// (0x0001a991) main_cset_slider_pane_g3_ParamLimits

0xd15e,	// (0x0001a991) main_cset_slider_pane_g3

0x691e,	// (0x00014151) main_cset_slider_pane_g4_ParamLimits

0x691e,	// (0x00014151) main_cset_slider_pane_g4

0x692d,	// (0x00014160) main_cset_slider_pane_g5_ParamLimits

0x692d,	// (0x00014160) main_cset_slider_pane_g5

0x693b,	// (0x0001416e) main_cset_slider_pane_g6_ParamLimits

0x693b,	// (0x0001416e) main_cset_slider_pane_g6

0xf9a4,	// (0x0001d1d7) main_cset_slider_pane_g_ParamLimits

0xd18e,	// (0x0001a9c1) main_cset_slider_pane_t1_ParamLimits

0x69cb,	// (0x000141fe) main_cset_slider_pane_t2_ParamLimits

0x69e5,	// (0x00014218) main_cset_slider_pane_t3_ParamLimits

0x69ff,	// (0x00014232) main_cset_slider_pane_t4_ParamLimits

0x6a19,	// (0x0001424c) main_cset_slider_pane_t5_ParamLimits

0x6a37,	// (0x0001426a) main_cset_slider_pane_t6_ParamLimits

0x6a4e,	// (0x00014281) main_cset_slider_pane_t7_ParamLimits

0x6a7c,	// (0x000142af) main_cset_slider_pane_t8_ParamLimits

0x6a7c,	// (0x000142af) main_cset_slider_pane_t8

0x6aa4,	// (0x000142d7) main_cset_slider_pane_t9_ParamLimits

0x6aa4,	// (0x000142d7) main_cset_slider_pane_t9

0x6acc,	// (0x000142ff) main_cset_slider_pane_t10_ParamLimits

0x6acc,	// (0x000142ff) main_cset_slider_pane_t10

0x6af4,	// (0x00014327) main_cset_slider_pane_t11_ParamLimits

0x6af4,	// (0x00014327) main_cset_slider_pane_t11

0x6b1e,	// (0x00014351) main_cset_slider_pane_t12_ParamLimits

0x6b1e,	// (0x00014351) main_cset_slider_pane_t12

0x6b3b,	// (0x0001436e) main_cset_slider_pane_t13_ParamLimits

0x6b3b,	// (0x0001436e) main_cset_slider_pane_t13

0xf9c9,	// (0x0001d1fc) main_cset_slider_pane_t_ParamLimits

0x93d3,	// (0x00016c06) bg_popup_sub_pane_cp011

0xd34b,	// (0x0001ab7e) main_cset_text_pane_g1

0xd353,	// (0x0001ab86) main_cset_text_pane_t1

0xd361,	// (0x0001ab94) main_cset_text_pane_t2

0xd36f,	// (0x0001aba2) main_cset_text_pane_t3

0xd37d,	// (0x0001abb0) main_cset_text_pane_t4

0xd38b,	// (0x0001abbe) main_cset_text_pane_t5

0xd399,	// (0x0001abcc) main_cset_text_pane_t6

0xd3a7,	// (0x0001abda) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0001d28d) main_cset_text_pane_t

0x93d3,	// (0x00016c06) main_cam4_burst_pane

0x93d3,	// (0x00016c06) main_cam5_pane

0x67e3,	// (0x00014016) bg_button_pane_cp019

0x67ec,	// (0x0001401f) bg_button_pane_cp020

0xd16a,	// (0x0001a99d) main_cset_slider_pane_g7_ParamLimits

0xd16a,	// (0x0001a99d) main_cset_slider_pane_g7

0xd176,	// (0x0001a9a9) main_cset_slider_pane_g8_ParamLimits

0xd176,	// (0x0001a9a9) main_cset_slider_pane_g8

0x694f,	// (0x00014182) main_cset_slider_pane_g9_ParamLimits

0x694f,	// (0x00014182) main_cset_slider_pane_g9

0x695b,	// (0x0001418e) main_cset_slider_pane_g10_ParamLimits

0x695b,	// (0x0001418e) main_cset_slider_pane_g10

0x6967,	// (0x0001419a) main_cset_slider_pane_g11_ParamLimits

0x6967,	// (0x0001419a) main_cset_slider_pane_g11

0x6973,	// (0x000141a6) main_cset_slider_pane_g12_ParamLimits

0x6973,	// (0x000141a6) main_cset_slider_pane_g12

0x697f,	// (0x000141b2) main_cset_slider_pane_g13_ParamLimits

0x697f,	// (0x000141b2) main_cset_slider_pane_g13

0x698b,	// (0x000141be) main_cset_slider_pane_g14_ParamLimits

0x698b,	// (0x000141be) main_cset_slider_pane_g14

0x6997,	// (0x000141ca) main_cset_slider_pane_g15_ParamLimits

0x6997,	// (0x000141ca) main_cset_slider_pane_g15

0xd1bc,	// (0x0001a9ef) main_cset_slider_pane_t14_ParamLimits

0xd1bc,	// (0x0001a9ef) main_cset_slider_pane_t14

0xd1f5,	// (0x0001aa28) main_cset_slider_pane_t15_ParamLimits

0xd1f5,	// (0x0001aa28) main_cset_slider_pane_t15

0x6f57,	// (0x0001478a) aid_cam4_burst_size_cell_ParamLimits

0x6f57,	// (0x0001478a) aid_cam4_burst_size_cell

0x6f77,	// (0x000147aa) grid_cam4_burst_pane_ParamLimits

0x6f77,	// (0x000147aa) grid_cam4_burst_pane

0x6fb1,	// (0x000147e4) linegrid_cam4_burst_pane_ParamLimits

0x6fb1,	// (0x000147e4) linegrid_cam4_burst_pane

0xefc6,	// (0x0001c7f9) scroll_pane_cp30_ParamLimits

0xefc6,	// (0x0001c7f9) scroll_pane_cp30

0x6fd5,	// (0x00014808) cell_cam4_burst_pane_ParamLimits

0x6fd5,	// (0x00014808) cell_cam4_burst_pane

0xd3b5,	// (0x0001abe8) linegrid_cam4_burst_pane_g1_ParamLimits

0xd3b5,	// (0x0001abe8) linegrid_cam4_burst_pane_g1

0x702a,	// (0x0001485d) linegrid_cam4_burst_pane_g2_ParamLimits

0x702a,	// (0x0001485d) linegrid_cam4_burst_pane_g2

0xd3c2,	// (0x0001abf5) linegrid_cam4_burst_pane_g3_ParamLimits

0xd3c2,	// (0x0001abf5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0001d29c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0001d29c) linegrid_cam4_burst_pane_g

0x703b,	// (0x0001486e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x703b,	// (0x0001486e) linegrid_cam4_burst_pane_g3_copy1

0xd3cf,	// (0x0001ac02) linegrid_cam4_burst_pane_g4_ParamLimits

0xd3cf,	// (0x0001ac02) linegrid_cam4_burst_pane_g4

0x7059,	// (0x0001488c) linegrid_cam4_burst_pane_g5_ParamLimits

0x7059,	// (0x0001488c) linegrid_cam4_burst_pane_g5

0x706a,	// (0x0001489d) linegrid_cam4_burst_pane_g6_ParamLimits

0x706a,	// (0x0001489d) linegrid_cam4_burst_pane_g6

0xd3dc,	// (0x0001ac0f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd3dc,	// (0x0001ac0f) linegrid_cam4_burst_pane_g7

0x7081,	// (0x000148b4) cell_cam4_burst_pane_g1

0xd3f5,	// (0x0001ac28) main_cam5_pane_t1_ParamLimits

0xd3f5,	// (0x0001ac28) main_cam5_pane_t1

0xd407,	// (0x0001ac3a) main_cam5_pane_t2_ParamLimits

0xd407,	// (0x0001ac3a) main_cam5_pane_t2

0xd419,	// (0x0001ac4c) main_cam5_pane_t3_ParamLimits

0xd419,	// (0x0001ac4c) main_cam5_pane_t3

0xd42b,	// (0x0001ac5e) main_cam5_pane_t4_ParamLimits

0xd42b,	// (0x0001ac5e) main_cam5_pane_t4

0xd443,	// (0x0001ac76) main_cam5_pane_t5_ParamLimits

0xd443,	// (0x0001ac76) main_cam5_pane_t5

0xd457,	// (0x0001ac8a) main_cam5_pane_t6_ParamLimits

0xd457,	// (0x0001ac8a) main_cam5_pane_t6

0xd46b,	// (0x0001ac9e) main_cam5_pane_t7_ParamLimits

0xd46b,	// (0x0001ac9e) main_cam5_pane_t7

0xd47d,	// (0x0001acb0) main_cam5_pane_t8_ParamLimits

0xd47d,	// (0x0001acb0) main_cam5_pane_t8

0xd49b,	// (0x0001acce) main_cam5_pane_t9_ParamLimits

0xd49b,	// (0x0001acce) main_cam5_pane_t9

0xd4ad,	// (0x0001ace0) main_cam5_pane_t10_ParamLimits

0xd4ad,	// (0x0001ace0) main_cam5_pane_t10

0xd4bf,	// (0x0001acf2) main_cam5_pane_t11_ParamLimits

0xd4bf,	// (0x0001acf2) main_cam5_pane_t11

0xd4d3,	// (0x0001ad06) main_cam5_pane_t12_ParamLimits

0xd4d3,	// (0x0001ad06) main_cam5_pane_t12

0xd4ea,	// (0x0001ad1d) main_cam5_pane_t13_ParamLimits

0xd4ea,	// (0x0001ad1d) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0001d2a8) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0001d2a8) main_cam5_pane_t

0x0ed9,	// (0x0000e70c) popup_scut_keymap_window_ParamLimits

0x0ed9,	// (0x0000e70c) popup_scut_keymap_window

0x7094,	// (0x000148c7) aid_size_cell_brow_shortcut

0xa8f1,	// (0x00018124) bg_popup_window_pane_cp010

0x70a0,	// (0x000148d3) grid_scut_pane

0x70ac,	// (0x000148df) cell_scut_pane_ParamLimits

0x70ac,	// (0x000148df) cell_scut_pane

0x70c5,	// (0x000148f8) cell_scut_pane_g1

0xd50d,	// (0x0001ad40) cell_scut_pane_t1

0xd51c,	// (0x0001ad4f) cell_scut_pane_t2

0x70ce,	// (0x00014901) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0001d2c3) cell_scut_pane_t

0x4d6c,	// (0x0001259f) main_mup3_pane_g8_ParamLimits

0x4d6c,	// (0x0001259f) main_mup3_pane_g8

0x6256,	// (0x00013a89) area_vitu2_query_pane_ParamLimits

0x6256,	// (0x00013a89) area_vitu2_query_pane

0x6ea1,	// (0x000146d4) input_focus_pane_cp08

0xd52b,	// (0x0001ad5e) area_vitu2_query_pane_g1

0x70dc,	// (0x0001490f) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0001d2ca) area_vitu2_query_pane_g

0x70ed,	// (0x00014920) area_vitu2_query_pane_t1_ParamLimits

0x70ed,	// (0x00014920) area_vitu2_query_pane_t1

0x7101,	// (0x00014934) area_vitu2_query_pane_t2_ParamLimits

0x7101,	// (0x00014934) area_vitu2_query_pane_t2

0x7115,	// (0x00014948) area_vitu2_query_pane_t3_ParamLimits

0x7115,	// (0x00014948) area_vitu2_query_pane_t3

0xd537,	// (0x0001ad6a) area_vitu2_query_pane_t4_ParamLimits

0xd537,	// (0x0001ad6a) area_vitu2_query_pane_t4

0xd55f,	// (0x0001ad92) area_vitu2_query_pane_t5_ParamLimits

0xd55f,	// (0x0001ad92) area_vitu2_query_pane_t5

0xd587,	// (0x0001adba) area_vitu2_query_pane_t6_ParamLimits

0xd587,	// (0x0001adba) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0001d2cf) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0001d2cf) area_vitu2_query_pane_t

0x713d,	// (0x00014970) bg_button_pane_cp018

0x714b,	// (0x0001497e) bg_button_pane_cp021

0x7157,	// (0x0001498a) bg_button_pane_cp022

0x7168,	// (0x0001499b) input_focus_pane_cp09

0x2c50,	// (0x00010483) aid_size_touch_mv_arrow_left

0x2c79,	// (0x000104ac) aid_size_touch_mv_arrow_right

0x69af,	// (0x000141e2) main_cset_slider_pane_g16_ParamLimits

0x69af,	// (0x000141e2) main_cset_slider_pane_g16

0x69bd,	// (0x000141f0) main_cset_slider_pane_g17_ParamLimits

0x69bd,	// (0x000141f0) main_cset_slider_pane_g17

0x7081,	// (0x000148b4) cell_cam4_burst_pane_g1_ParamLimits

0x93d3,	// (0x00016c06) compa_mode_pane

0x6bcd,	// (0x00014400) popup_vtel_slider_window_g3_ParamLimits

0x6bcd,	// (0x00014400) popup_vtel_slider_window_g3

0x6be4,	// (0x00014417) popup_vtel_slider_window_g4_ParamLimits

0x6be4,	// (0x00014417) popup_vtel_slider_window_g4

0x6bfb,	// (0x0001442e) popup_vtel_slider_window_t1_ParamLimits

0x6bfb,	// (0x0001442e) popup_vtel_slider_window_t1

0x93d3,	// (0x00016c06) main_cl_pane

0xbd8a,	// (0x000195bd) popup_imed_adjust2_window_ParamLimits

0xbd5e,	// (0x00019591) bg_tb_trans_pane_cp05_ParamLimits

0xc7d6,	// (0x0001a009) popup_imed_adjust2_window_g1_ParamLimits

0xc7e5,	// (0x0001a018) popup_imed_adjust2_window_g2_ParamLimits

0xc7e5,	// (0x0001a018) popup_imed_adjust2_window_g2

0xc7f1,	// (0x0001a024) popup_imed_adjust2_window_g3_ParamLimits

0xc7f1,	// (0x0001a024) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0001d040) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0001d040) popup_imed_adjust2_window_g

0xc7fd,	// (0x0001a030) popup_imed_adjust2_window_t1_ParamLimits

0xc815,	// (0x0001a048) slider_imed_adjust_pane_ParamLimits

0xc829,	// (0x0001a05c) slider_imed_adjust_pane_g1_ParamLimits

0xc839,	// (0x0001a06c) slider_imed_adjust_pane_g2_ParamLimits

0xc849,	// (0x0001a07c) slider_imed_adjust_pane_g3_ParamLimits

0xc85a,	// (0x0001a08d) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0001d047) slider_imed_adjust_pane_g_ParamLimits

0x5f94,	// (0x000137c7) aid_touch_area_cam4_ParamLimits

0x5f94,	// (0x000137c7) aid_touch_area_cam4

0xcf54,	// (0x0001a787) battery_pane_cp01

0x603f,	// (0x00013872) main_camera4_pane_g6_ParamLimits

0x603f,	// (0x00013872) main_camera4_pane_g6

0x6062,	// (0x00013895) main_camera4_pane_t2_ParamLimits

0x6062,	// (0x00013895) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0001d14a) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0001d14a) main_camera4_pane_t

0x60ab,	// (0x000138de) aid_touch_area_vid4_ParamLimits

0x60ab,	// (0x000138de) aid_touch_area_vid4

0x6109,	// (0x0001393c) main_video4_pane_g5_ParamLimits

0x6109,	// (0x0001393c) main_video4_pane_g5

0x6130,	// (0x00013963) vid4_progress_pane_ParamLimits

0x6130,	// (0x00013963) vid4_progress_pane

0xd182,	// (0x0001a9b5) main_cset_slider_pane_g18_ParamLimits

0xd182,	// (0x0001a9b5) main_cset_slider_pane_g18

0xd3e9,	// (0x0001ac1c) cell_cam4_burst_pane_g2_ParamLimits

0xd3e9,	// (0x0001ac1c) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0001d2a3) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0001d2a3) cell_cam4_burst_pane_g

0x9bad,	// (0x000173e0) bg_cl_pane_ParamLimits

0x9bad,	// (0x000173e0) bg_cl_pane

0x7179,	// (0x000149ac) cl_header_pane_ParamLimits

0x7179,	// (0x000149ac) cl_header_pane

0x718d,	// (0x000149c0) cl_listscroll_pane_ParamLimits

0x718d,	// (0x000149c0) cl_listscroll_pane

0xd5d3,	// (0x0001ae06) bg_cl_pane_g1

0xd5db,	// (0x0001ae0e) bg_cl_pane_g2

0xd5e3,	// (0x0001ae16) bg_cl_pane_g3

0xd5eb,	// (0x0001ae1e) bg_cl_pane_g4

0xd5f3,	// (0x0001ae26) bg_cl_pane_g5

0xd5fb,	// (0x0001ae2e) bg_cl_pane_g6

0xd603,	// (0x0001ae36) bg_cl_pane_g7

0xd60b,	// (0x0001ae3e) bg_cl_pane_g8

0xd613,	// (0x0001ae46) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0001d2de) bg_cl_pane_g

0x719d,	// (0x000149d0) aid_height_cl_leading_ParamLimits

0x719d,	// (0x000149d0) aid_height_cl_leading

0x71a9,	// (0x000149dc) aid_height_cl_text_ParamLimits

0x71a9,	// (0x000149dc) aid_height_cl_text

0x9444,	// (0x00016c77) bg_cl_header_pane_ParamLimits

0x9444,	// (0x00016c77) bg_cl_header_pane

0x71c8,	// (0x000149fb) cl_header_pane_g1_ParamLimits

0x71c8,	// (0x000149fb) cl_header_pane_g1

0x71de,	// (0x00014a11) cl_header_pane_t1_ParamLimits

0x71de,	// (0x00014a11) cl_header_pane_t1

0xd61b,	// (0x0001ae4e) cl_list_pane

0xd155,	// (0x0001a988) hc_scroll_pane_cp01

0xa14b,	// (0x0001797e) bg_cl_header_pane_g1

0xd037,	// (0x0001a86a) bg_cl_header_pane_g2

0xa16b,	// (0x0001799e) bg_cl_header_pane_g3

0xd047,	// (0x0001a87a) bg_cl_header_pane_g4

0xd03f,	// (0x0001a872) bg_cl_header_pane_g5

0xd2ca,	// (0x0001aafd) bg_cl_header_pane_g6

0xd05f,	// (0x0001a892) bg_cl_header_pane_g7

0xd067,	// (0x0001a89a) bg_cl_header_pane_g8

0xd057,	// (0x0001a88a) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0001d2f1) bg_cl_header_pane_g

0x71f7,	// (0x00014a2a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x71f7,	// (0x00014a2a) hc_cl_list_double_graphic_heading_pane

0x720a,	// (0x00014a3d) hc_cl_list_single_graphic_pane_ParamLimits

0x720a,	// (0x00014a3d) hc_cl_list_single_graphic_pane

0x7222,	// (0x00014a55) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7222,	// (0x00014a55) hc_cl_list_single_graphic_pane_g1

0x722e,	// (0x00014a61) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x722e,	// (0x00014a61) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0001d304) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0001d304) hc_cl_list_single_graphic_pane_g

0x7242,	// (0x00014a75) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7242,	// (0x00014a75) hc_cl_list_single_graphic_pane_t1

0x7222,	// (0x00014a55) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7222,	// (0x00014a55) hc_cl_list_double_graphic_heading_pane_g1

0x7257,	// (0x00014a8a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7257,	// (0x00014a8a) hc_cl_list_double_graphic_heading_pane_g2

0x726b,	// (0x00014a9e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x726b,	// (0x00014a9e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0001d309) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0001d309) hc_cl_list_double_graphic_heading_pane_g

0x727f,	// (0x00014ab2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x727f,	// (0x00014ab2) hc_cl_list_double_graphic_heading_pane_t1

0x7294,	// (0x00014ac7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7294,	// (0x00014ac7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0001d310) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0001d310) hc_cl_list_double_graphic_heading_pane_t

0xd62c,	// (0x0001ae5f) vid4_progress_pane_g1

0xd638,	// (0x0001ae6b) vid4_progress_pane_g2

0xd644,	// (0x0001ae77) vid4_progress_pane_g3

0xd653,	// (0x0001ae86) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0001d315) vid4_progress_pane_g

0xd671,	// (0x0001aea4) vid4_progress_pane_t1

0xd687,	// (0x0001aeba) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0001d320) vid4_progress_pane_t

0xd6b2,	// (0x0001aee5) wait_bar_pane_cp07

0xc080,	// (0x000198b3) blid_firmament_pane_ParamLimits

0xc0c3,	// (0x000198f6) popup_blid_sat_info2_window_g1

0xc0e7,	// (0x0001991a) popup_blid_sat_info2_window_t3

0xc0f5,	// (0x00019928) popup_blid_sat_info2_window_t4

0xc103,	// (0x00019936) popup_blid_sat_info2_window_t5

0xc111,	// (0x00019944) popup_blid_sat_info2_window_t6

0xc121,	// (0x00019954) popup_blid_sat_info2_window_t7

0xc12f,	// (0x00019962) popup_blid_sat_info2_window_t8

0xc13d,	// (0x00019970) popup_blid_sat_info2_window_t9

0xc14b,	// (0x0001997e) popup_blid_sat_info2_window_t10

0xc213,	// (0x00019a46) aid_firma_cardinal_ParamLimits

0xc227,	// (0x00019a5a) blid_firmament_pane_t1_ParamLimits

0xc23e,	// (0x00019a71) blid_firmament_pane_t2_ParamLimits

0xc255,	// (0x00019a88) blid_firmament_pane_t3_ParamLimits

0xc26c,	// (0x00019a9f) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0001cf39) blid_firmament_pane_t_ParamLimits

0xc283,	// (0x00019ab6) blid_sat_info_pane_ParamLimits

0x9444,	// (0x00016c77) main_cam_set_pane_ParamLimits

0x5619,	// (0x00012e4c) aid_size_cell_colour_35_ParamLimits

0x5639,	// (0x00012e6c) aid_size_cell_colour_112_ParamLimits

0x5659,	// (0x00012e8c) aid_size_cell_effect_ParamLimits

0xbd5e,	// (0x00019591) bg_tb_trans_pane_cp02_ParamLimits

0xa36b,	// (0x00017b9e) heading_imed_pane_ParamLimits

0x5679,	// (0x00012eac) listscroll_imed_pane_ParamLimits

0xb38c,	// (0x00018bbf) popup_call2_audio_first_window_g5_ParamLimits

0xb38c,	// (0x00018bbf) popup_call2_audio_first_window_g5

0x5c3e,	// (0x00013471) aid_size_touch_image3_arrow_left_ParamLimits

0x5c3e,	// (0x00013471) aid_size_touch_image3_arrow_left

0x5c6a,	// (0x0001349d) aid_size_touch_image3_arrow_right_ParamLimits

0x5c6a,	// (0x0001349d) aid_size_touch_image3_arrow_right

0xd69d,	// (0x0001aed0) vid4_progress_pane_t3

0x5996,	// (0x000131c9) main_hwr_training_symbol_option_pane_ParamLimits

0x5996,	// (0x000131c9) main_hwr_training_symbol_option_pane

0xcaee,	// (0x0001a321) popup_hwr_training_preview_window_ParamLimits

0xcaee,	// (0x0001a321) popup_hwr_training_preview_window

0x59b6,	// (0x000131e9) hwr_training_navi_pane_g5_ParamLimits

0x59b6,	// (0x000131e9) hwr_training_navi_pane_g5

0xd025,	// (0x0001a858) popup_char_count_window

0x9444,	// (0x00016c77) bg_popup_sub_pane_cp20_ParamLimits

0x6d15,	// (0x00014548) list_vitu2_match_list_pane_ParamLimits

0x6d24,	// (0x00014557) vitu2_page_scroll_pane_ParamLimits

0x6d24,	// (0x00014557) vitu2_page_scroll_pane

0xd71e,	// (0x0001af51) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd71e,	// (0x0001af51) list_single_hwr_training_symbol_option_pane

0xd731,	// (0x0001af64) list_single_hwr_training_symbol_option_pane_g1

0xd739,	// (0x0001af6c) list_single_hwr_training_symbol_option_pane_t1

0xd747,	// (0x0001af7a) bg_button_pane_cp023

0xd750,	// (0x0001af83) bg_button_pane_cp024

0x72b3,	// (0x00014ae6) vitu2_page_scroll_pane_g1

0x72bb,	// (0x00014aee) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0001d327) vitu2_page_scroll_pane_g

0x72c5,	// (0x00014af8) vitu2_page_scroll_pane_t1

0xbf9c,	// (0x000197cf) popup_char_count_window_g1

0xd783,	// (0x0001afb6) popup_char_count_window_g2

0xd78c,	// (0x0001afbf) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0001d32c) popup_char_count_window_g

0xd795,	// (0x0001afc8) popup_char_count_window_t1

0x93d3,	// (0x00016c06) main_vded2_pane

0xc7c2,	// (0x00019ff5) aid_size_cell_imed_line

0xc7cc,	// (0x00019fff) grid_imed_line_width_pane

0x61a0,	// (0x000139d3) vid4_indicators_pane_g4

0xd7a3,	// (0x0001afd6) cell_imed_line_width_pane_ParamLimits

0xd7a3,	// (0x0001afd6) cell_imed_line_width_pane

0xd7b9,	// (0x0001afec) cell_imed_line_width_pane_g1

0xd7c2,	// (0x0001aff5) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0001d333) cell_imed_line_width_pane_g

0x72d4,	// (0x00014b07) main_vded2_pane_g1_ParamLimits

0x72d4,	// (0x00014b07) main_vded2_pane_g1

0x72ef,	// (0x00014b22) main_vded2_pane_g2_ParamLimits

0x72ef,	// (0x00014b22) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0001d338) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0001d338) main_vded2_pane_g

0x7301,	// (0x00014b34) vded2_slider_pane_ParamLimits

0x7301,	// (0x00014b34) vded2_slider_pane

0x7311,	// (0x00014b44) aid_size_touch_vded2_end

0x731b,	// (0x00014b4e) aid_size_touch_vded2_playhead

0xd7ca,	// (0x0001affd) aid_size_touch_vded2_start

0xd7d2,	// (0x0001b005) vded2_slider_bg_pane

0xd7db,	// (0x0001b00e) vded2_slider_pane_g1

0xd7e4,	// (0x0001b017) vded2_slider_pane_g2

0x7325,	// (0x00014b58) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0001d33d) vded2_slider_pane_g

0xc960,	// (0x0001a193) vded2_slider_bg_pane_g1

0xc969,	// (0x0001a19c) vded2_slider_bg_pane_g2

0xc972,	// (0x0001a1a5) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x0001d344) vded2_slider_bg_pane_g

0x3370,	// (0x00010ba3) aid_postcard_touch_down_pane_ParamLimits

0x3370,	// (0x00010ba3) aid_postcard_touch_down_pane

0x3388,	// (0x00010bbb) aid_postcard_touch_up_pane_ParamLimits

0x3388,	// (0x00010bbb) aid_postcard_touch_up_pane

0x93d3,	// (0x00016c06) main_blid2_pane

0xbd6c,	// (0x0001959f) popup_blid2_search_window

0x93d3,	// (0x00016c06) blid2_gps_pane

0x93d3,	// (0x00016c06) blid2_navig_pane

0x93d3,	// (0x00016c06) blid2_search_pane

0x93d3,	// (0x00016c06) blid2_tripm_pane

0x7330,	// (0x00014b63) blid2_search_pane_g1_ParamLimits

0x7330,	// (0x00014b63) blid2_search_pane_g1

0x7348,	// (0x00014b7b) blid2_search_pane_t1_ParamLimits

0x7348,	// (0x00014b7b) blid2_search_pane_t1

0x735a,	// (0x00014b8d) aid_size_cell_blid2_gps_ParamLimits

0x735a,	// (0x00014b8d) aid_size_cell_blid2_gps

0x7372,	// (0x00014ba5) blid2_gps_pane_g1_ParamLimits

0x7372,	// (0x00014ba5) blid2_gps_pane_g1

0x7386,	// (0x00014bb9) grid_blid2_satellite_pane_ParamLimits

0x7386,	// (0x00014bb9) grid_blid2_satellite_pane

0x739e,	// (0x00014bd1) blid2_navig_pane_g1_ParamLimits

0x739e,	// (0x00014bd1) blid2_navig_pane_g1

0x73aa,	// (0x00014bdd) blid2_navig_pane_t1_ParamLimits

0x73aa,	// (0x00014bdd) blid2_navig_pane_t1

0x73c5,	// (0x00014bf8) blid2_navig_pane_t2_ParamLimits

0x73c5,	// (0x00014bf8) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0001d34b) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0001d34b) blid2_navig_pane_t

0x73e0,	// (0x00014c13) blid2_navig_ring_pane_ParamLimits

0x73e0,	// (0x00014c13) blid2_navig_ring_pane

0x73fb,	// (0x00014c2e) blid2_speed_pane_ParamLimits

0x73fb,	// (0x00014c2e) blid2_speed_pane

0x7407,	// (0x00014c3a) blid2_tripm_pane_g1_ParamLimits

0x7407,	// (0x00014c3a) blid2_tripm_pane_g1

0x7422,	// (0x00014c55) blid2_tripm_pane_g2_ParamLimits

0x7422,	// (0x00014c55) blid2_tripm_pane_g2

0x7436,	// (0x00014c69) blid2_tripm_pane_g3_ParamLimits

0x7436,	// (0x00014c69) blid2_tripm_pane_g3

0x744a,	// (0x00014c7d) blid2_tripm_pane_g4_ParamLimits

0x744a,	// (0x00014c7d) blid2_tripm_pane_g4

0x745e,	// (0x00014c91) blid2_tripm_pane_g5_ParamLimits

0x745e,	// (0x00014c91) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0001d350) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0001d350) blid2_tripm_pane_g

0x7484,	// (0x00014cb7) blid2_tripm_pane_t1_ParamLimits

0x7484,	// (0x00014cb7) blid2_tripm_pane_t1

0x749f,	// (0x00014cd2) blid2_tripm_pane_t2_ParamLimits

0x749f,	// (0x00014cd2) blid2_tripm_pane_t2

0x74b8,	// (0x00014ceb) blid2_tripm_pane_t3_ParamLimits

0x74b8,	// (0x00014ceb) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0001d35d) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0001d35d) blid2_tripm_pane_t

0x74ff,	// (0x00014d32) cell_blid2_satellite_pane_ParamLimits

0x74ff,	// (0x00014d32) cell_blid2_satellite_pane

0x751b,	// (0x00014d4e) cell_blid2_satellite_pane_g1

0xd7ec,	// (0x0001b01f) cell_blid2_satellite_pane_t1

0xc293,	// (0x00019ac6) blid2_speed_pane_g1

0xd7fa,	// (0x0001b02d) blid2_speed_pane_t1

0xd808,	// (0x0001b03b) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x0001d366) blid2_speed_pane_t

0xc293,	// (0x00019ac6) blid2_navig_ring_pane_g1

0x7524,	// (0x00014d57) blid2_navig_ring_pane_g2

0x752c,	// (0x00014d5f) blid2_navig_ring_pane_g3

0x7534,	// (0x00014d67) blid2_navig_ring_pane_g4

0x753c,	// (0x00014d6f) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0001d36b) blid2_navig_ring_pane_g

0x93d3,	// (0x00016c06) bg_popup_window_pane_cp011

0xd816,	// (0x0001b049) popup_blid2_search_window_g1

0xd81e,	// (0x0001b051) popup_blid2_search_window_t1

0xd82c,	// (0x0001b05f) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x0001d376) popup_blid2_search_window_t

0xa05a,	// (0x0001788d) main_browser_pane_g1

0x9bad,	// (0x000173e0) main_browser_pane_ParamLimits

0x9444,	// (0x00016c77) bg_button_pane_cp011_ParamLimits

0x6575,	// (0x00013da8) cell_vitu2_function_pane_g1_ParamLimits

0x9444,	// (0x00016c77) bg_popup_sub_pane_cp22_ParamLimits

0x6ea1,	// (0x000146d4) input_focus_pane_cp08_ParamLimits

0x6eae,	// (0x000146e1) popup_vitu2_query_button_pane_ParamLimits

0x6eae,	// (0x000146e1) popup_vitu2_query_button_pane

0x6e83,	// (0x000146b6) popup_vitu2_query_input_button_pane

0xd33f,	// (0x0001ab72) popup_vitu2_query_window_g1_ParamLimits

0x6ebf,	// (0x000146f2) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0001d27d) popup_vitu2_query_window_g_ParamLimits

0x93d3,	// (0x00016c06) bg_button_pane_cp026

0x7544,	// (0x00014d77) popup_vitu2_query_input_button_pane_g1

0x93d3,	// (0x00016c06) bg_button_pane_cp025

0xd83a,	// (0x0001b06d) popup_vitu2_query_button_pane_t1

0x4a7d,	// (0x000122b0) main_mp3_pane_t6

0x4a8b,	// (0x000122be) popup_slider_window_cp01

0xcf66,	// (0x0001a799) cam4_battery_pane

0xcfbf,	// (0x0001a7f2) cam4_battery_pane_cp02

0x72a9,	// (0x00014adc) cam4_battery_pane_cp01

0xd624,	// (0x0001ae57) cam4_battery_pane_cp03

0xc293,	// (0x00019ac6) cam4_battery_pane_g1

0xd848,	// (0x0001b07b) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0001d37b) cam4_battery_pane_g

0xc159,	// (0x0001998c) popup_blid_sat_info2_window_t11

0x2c50,	// (0x00010483) aid_size_touch_mv_arrow_left_ParamLimits

0x2c79,	// (0x000104ac) aid_size_touch_mv_arrow_right_ParamLimits

0xa851,	// (0x00018084) navi_pane_g1_ParamLimits

0x2ca2,	// (0x000104d5) navi_pane_g2_ParamLimits

0x2cd0,	// (0x00010503) navi_pane_g3_ParamLimits

0xf418,	// (0x0001cc4b) navi_pane_g_ParamLimits

0x2d2a,	// (0x0001055d) navi_pane_mv_t1_ParamLimits

0x5685,	// (0x00012eb8) grid_imed_effect_pane_ParamLimits

0x9f9f,	// (0x000177d2) aid_placing_vt_slider_lsc

0x9fa7,	// (0x000177da) aid_placing_vt_slider_prt

0x9444,	// (0x00016c77) bg_tb_trans_pane_cp01_ParamLimits

0xc3e3,	// (0x00019c16) popup_image_details_window_g1_ParamLimits

0xc3f6,	// (0x00019c29) popup_image_details_window_g2_ParamLimits

0xc40b,	// (0x00019c3e) popup_image_details_window_g3_ParamLimits

0xc40b,	// (0x00019c3e) popup_image_details_window_g3

0xf74b,	// (0x0001cf7e) popup_image_details_window_g_ParamLimits

0xc41f,	// (0x00019c52) popup_image_details_window_t1_ParamLimits

0xc431,	// (0x00019c64) popup_image_details_window_t2_ParamLimits

0xc44a,	// (0x00019c7d) popup_image_details_window_t3_ParamLimits

0xc45e,	// (0x00019c91) popup_image_details_window_t4_ParamLimits

0xc479,	// (0x00019cac) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0001cf85) popup_image_details_window_t_ParamLimits

0x71b5,	// (0x000149e8) cl_header_name_pane_ParamLimits

0x71b5,	// (0x000149e8) cl_header_name_pane

0x754c,	// (0x00014d7f) cl_header_name_pane_t1_ParamLimits

0x754c,	// (0x00014d7f) cl_header_name_pane_t1

0x756d,	// (0x00014da0) cl_header_name_pane_t2_ParamLimits

0x756d,	// (0x00014da0) cl_header_name_pane_t2

0x75af,	// (0x00014de2) cl_header_name_pane_t3_ParamLimits

0x75af,	// (0x00014de2) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0001d380) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0001d380) cl_header_name_pane_t

0x2cfb,	// (0x0001052e) navi_pane_mv_g2_ParamLimits

0xcfe2,	// (0x0001a815) field_vitu2_entry_pane_g1_ParamLimits

0xcfee,	// (0x0001a821) field_vitu2_entry_pane_g2_ParamLimits

0xcffa,	// (0x0001a82d) field_vitu2_entry_pane_g3_ParamLimits

0xcffa,	// (0x0001a82d) field_vitu2_entry_pane_g3

0xf949,	// (0x0001d17c) field_vitu2_entry_pane_g_ParamLimits

0x6415,	// (0x00013c48) cell_vitu2_itu_pane_g1_ParamLimits

0x6425,	// (0x00013c58) cell_vitu2_itu_pane_g2_ParamLimits

0x6425,	// (0x00013c58) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0001d188) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0001d188) cell_vitu2_itu_pane_g

0x9444,	// (0x00016c77) bg_vkb2_func_pane_cp05_ParamLimits

0x9444,	// (0x00016c77) bg_vkb2_func_pane_cp05

0x9444,	// (0x00016c77) bg_vkb2_func_pane_cp03

0x9444,	// (0x00016c77) bg_vkb2_func_pane_cp04

0x9444,	// (0x00016c77) bg_vkb2_func_pane_cp10_ParamLimits

0x9444,	// (0x00016c77) bg_vkb2_func_pane_cp10

0x7157,	// (0x0001498a) bg_vkb2_func_pane_cp08

0x713d,	// (0x00014970) bg_vkb2_func_pane_cp06

0x714b,	// (0x0001497e) bg_vkb2_func_pane_cp07

0xd759,	// (0x0001af8c) bg_vkb2_func_pane_cp11_ParamLimits

0xd759,	// (0x0001af8c) bg_vkb2_func_pane_cp11

0xd76e,	// (0x0001afa1) bg_vkb2_func_pane_cp12_ParamLimits

0xd76e,	// (0x0001afa1) bg_vkb2_func_pane_cp12

0x93d3,	// (0x00016c06) bg_vkb2_func_pane_cp09

0xd037,	// (0x0001a86a) bg_vkb2_func_pane_g1

0xa16b,	// (0x0001799e) bg_vkb2_func_pane_g2

0xd03f,	// (0x0001a872) bg_vkb2_func_pane_g3

0xd047,	// (0x0001a87a) bg_vkb2_func_pane_g4

0xd2ca,	// (0x0001aafd) bg_vkb2_func_pane_g5

0xd05f,	// (0x0001a892) bg_vkb2_func_pane_g6

0xd067,	// (0x0001a89a) bg_vkb2_func_pane_g7

0xd057,	// (0x0001a88a) bg_vkb2_func_pane_g8

0xa14b,	// (0x0001797e) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x0001d387) bg_vkb2_func_pane_g

0x7472,	// (0x00014ca5) blid2_tripm_pane_g6_ParamLimits

0x7472,	// (0x00014ca5) blid2_tripm_pane_g6

0xcdb3,	// (0x0001a5e6) mp4_progress_pane_g1

0x74eb,	// (0x00014d1e) blid2_tripm_values_pane_ParamLimits

0x74eb,	// (0x00014d1e) blid2_tripm_values_pane

0x75e0,	// (0x00014e13) blid2_tripm_values_pane_t1

0x75ee,	// (0x00014e21) blid2_tripm_values_pane_t2

0x75fc,	// (0x00014e2f) blid2_tripm_values_pane_t3

0x760a,	// (0x00014e3d) blid2_tripm_values_pane_t4

0x7618,	// (0x00014e4b) blid2_tripm_values_pane_t5

0x7626,	// (0x00014e59) blid2_tripm_values_pane_t6

0x7634,	// (0x00014e67) blid2_tripm_values_pane_t7

0x7642,	// (0x00014e75) blid2_tripm_values_pane_t8

0x7650,	// (0x00014e83) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x0001d39a) blid2_tripm_values_pane_t

0x1c05,	// (0x0000f438) call_video_pane_t1_ParamLimits

0x1c17,	// (0x0000f44a) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0001cad4) call_video_pane_t_ParamLimits

0x3273,	// (0x00010aa6) msg_header_pane_g1_ParamLimits

0xaa8e,	// (0x000182c1) msg_header_pane_g2_ParamLimits

0xaa8e,	// (0x000182c1) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0001ccee) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0001ccee) msg_header_pane_g

0x9bad,	// (0x000173e0) main_clock2_pane_ParamLimits

0x5393,	// (0x00012bc6) grid_clock2_toolbar_pane_ParamLimits

0x5393,	// (0x00012bc6) grid_clock2_toolbar_pane

0x5393,	// (0x00012bc6) listscroll_clock2_pane_ParamLimits

0x5393,	// (0x00012bc6) listscroll_clock2_pane

0x5477,	// (0x00012caa) main_clock2_pane_t3_ParamLimits

0x5477,	// (0x00012caa) main_clock2_pane_t3

0x5492,	// (0x00012cc5) main_clock2_pane_t4_ParamLimits

0x5492,	// (0x00012cc5) main_clock2_pane_t4

0xd852,	// (0x0001b085) cell_clock2_toolbar_pane

0xd85a,	// (0x0001b08d) cell_clock2_toolbar_pane_cp01

0xd85a,	// (0x0001b08d) cell_clock2_toolbar_pane_cp02

0xd862,	// (0x0001b095) cell_clock2_toolbar_pane_cp03

0xd86a,	// (0x0001b09d) list_clock2_pane

0xa7b7,	// (0x00017fea) scroll_pane_cp10

0xd872,	// (0x0001b0a5) list_single_clock2_pane_ParamLimits

0xd872,	// (0x0001b0a5) list_single_clock2_pane

0xa8f1,	// (0x00018124) list_highlight_pane_cp08

0xd87f,	// (0x0001b0b2) list_single_clock2_pane_t1

0xd88d,	// (0x0001b0c0) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0001d3ad) list_single_clock2_pane_t

0x93d3,	// (0x00016c06) bg_button_pane_cp10

0xd89b,	// (0x0001b0ce) cell_clock2_toolbar_pane_g1

0x32fc,	// (0x00010b2f) aid_main_viewer_pane_g1_ParamLimits

0x32fc,	// (0x00010b2f) aid_main_viewer_pane_g1

0x330a,	// (0x00010b3d) aid_main_viewer_pane_g2_ParamLimits

0x330a,	// (0x00010b3d) aid_main_viewer_pane_g2

0x3318,	// (0x00010b4b) aid_main_viewer_pane_g3_ParamLimits

0x3318,	// (0x00010b4b) aid_main_viewer_pane_g3

0x3327,	// (0x00010b5a) aid_main_viewer_pane_g4_ParamLimits

0x3327,	// (0x00010b5a) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0001ccff) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0001ccff) aid_main_viewer_pane_g

0x3c7f,	// (0x000114b2) main_calc_pane_ParamLimits

0x3c93,	// (0x000114c6) main_dialer2_pane_ParamLimits

0x93d3,	// (0x00016c06) main_cam6_pane

0x93d3,	// (0x00016c06) main_vid6_pane

0x539f,	// (0x00012bd2) listscroll_gen_pane_cp06_ParamLimits

0x539f,	// (0x00012bd2) listscroll_gen_pane_cp06

0x54ad,	// (0x00012ce0) main_clock2_pane_t5_ParamLimits

0x54ad,	// (0x00012ce0) main_clock2_pane_t5

0x550a,	// (0x00012d3d) aid_call2_pane_cp10_ParamLimits

0x551c,	// (0x00012d4f) aid_call_pane_cp10_ParamLimits

0xa826,	// (0x00018059) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa826,	// (0x00018059) popup_clock_analogue_window_cp10_g2_ParamLimits

0x552e,	// (0x00012d61) popup_clock_analogue_window_cp10_g3_ParamLimits

0x552e,	// (0x00012d61) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa826,	// (0x00018059) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0001d035) popup_clock_analogue_window_cp10_g_ParamLimits

0x5544,	// (0x00012d77) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5beb,	// (0x0001341e) cell_dialer2_keypad_pane_g2_ParamLimits

0x5beb,	// (0x0001341e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0001d11b) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0001d11b) cell_dialer2_keypad_pane_g

0x5c07,	// (0x0001343a) cell_dialer2_keypad_pane_t1

0x68a0,	// (0x000140d3) main_cset_text2_pane_ParamLimits

0x68a0,	// (0x000140d3) main_cset_text2_pane

0xd52b,	// (0x0001ad5e) area_vitu2_query_pane_g1_ParamLimits

0x70dc,	// (0x0001490f) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0001d2ca) area_vitu2_query_pane_g_ParamLimits

0xd5af,	// (0x0001ade2) area_vitu2_query_pane_t7_ParamLimits

0xd5af,	// (0x0001ade2) area_vitu2_query_pane_t7

0x713d,	// (0x00014970) bg_button_pane_cp018_ParamLimits

0x714b,	// (0x0001497e) bg_button_pane_cp021_ParamLimits

0x7157,	// (0x0001498a) bg_button_pane_cp022_ParamLimits

0x7157,	// (0x0001498a) bg_vkb2_func_pane_cp08_ParamLimits

0x713d,	// (0x00014970) bg_vkb2_func_pane_cp06_ParamLimits

0x714b,	// (0x0001497e) bg_vkb2_func_pane_cp07_ParamLimits

0x7168,	// (0x0001499b) input_focus_pane_cp09_ParamLimits

0xd8a3,	// (0x0001b0d6) cam6_autofocus_pane_ParamLimits

0xd8a3,	// (0x0001b0d6) cam6_autofocus_pane

0x765e,	// (0x00014e91) cam6_image_uncrop_pane_ParamLimits

0x765e,	// (0x00014e91) cam6_image_uncrop_pane

0x766d,	// (0x00014ea0) cam6_indi_pane_ParamLimits

0x766d,	// (0x00014ea0) cam6_indi_pane

0x7683,	// (0x00014eb6) cam6_mode_pane_ParamLimits

0x7683,	// (0x00014eb6) cam6_mode_pane

0x7695,	// (0x00014ec8) cam6_timer_pane_ParamLimits

0x7695,	// (0x00014ec8) cam6_timer_pane

0x76a1,	// (0x00014ed4) cam6_zoom_pane_ParamLimits

0x76a1,	// (0x00014ed4) cam6_zoom_pane

0x76af,	// (0x00014ee2) cam6_mode_pane_g1_ParamLimits

0x76af,	// (0x00014ee2) cam6_mode_pane_g1

0x76bf,	// (0x00014ef2) cam6_mode_pane_g2_ParamLimits

0x76bf,	// (0x00014ef2) cam6_mode_pane_g2

0x76cf,	// (0x00014f02) cam6_mode_pane_g3_ParamLimits

0x76cf,	// (0x00014f02) cam6_mode_pane_g3

0x76df,	// (0x00014f12) cam6_mode_pane_g4_ParamLimits

0x76df,	// (0x00014f12) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0001d3b2) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0001d3b2) cam6_mode_pane_g

0xd8b1,	// (0x0001b0e4) bg_tb_trans_pane_cp08_ParamLimits

0xd8b1,	// (0x0001b0e4) bg_tb_trans_pane_cp08

0xd8bf,	// (0x0001b0f2) cam6_battery_pane_ParamLimits

0xd8bf,	// (0x0001b0f2) cam6_battery_pane

0xd8d5,	// (0x0001b108) cam6_indi_pane_g1_ParamLimits

0xd8d5,	// (0x0001b108) cam6_indi_pane_g1

0xd8e7,	// (0x0001b11a) cam6_indi_pane_g2_ParamLimits

0xd8e7,	// (0x0001b11a) cam6_indi_pane_g2

0xd8f9,	// (0x0001b12c) cam6_indi_pane_g3_ParamLimits

0xd8f9,	// (0x0001b12c) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0001d3bb) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0001d3bb) cam6_indi_pane_g

0xd90b,	// (0x0001b13e) cam6_indi_pane_t1_ParamLimits

0xd90b,	// (0x0001b13e) cam6_indi_pane_t1

0x61ca,	// (0x000139fd) cam6_autofocus_pane_g1

0x61d2,	// (0x00013a05) cam6_autofocus_pane_g2

0x61da,	// (0x00013a0d) cam6_autofocus_pane_g3

0x61e2,	// (0x00013a15) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0001d3c2) cam6_autofocus_pane_g

0xd931,	// (0x0001b164) cam6_timer_pane_g1

0xd939,	// (0x0001b16c) cam6_timer_pane_t1

0xd947,	// (0x0001b17a) cam6_zoom_cont_pane

0xd94f,	// (0x0001b182) cam6_zoom_pane_g1

0xd957,	// (0x0001b18a) cam6_zoom_pane_g2

0x76ef,	// (0x00014f22) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0001d3cb) cam6_zoom_pane_g

0xc293,	// (0x00019ac6) cam6_battery_pane_g1

0xc293,	// (0x00019ac6) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0001cf42) cam6_battery_pane_g

0xd95f,	// (0x0001b192) cam6_zoom_cont_pane_g1

0xd968,	// (0x0001b19b) cam6_zoom_cont_pane_g2

0xd971,	// (0x0001b1a4) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0001d3d2) cam6_zoom_cont_pane_g

0x770c,	// (0x00014f3f) cam6_mode_pane_cp_ParamLimits

0x770c,	// (0x00014f3f) cam6_mode_pane_cp

0x76a1,	// (0x00014ed4) cam6_zoom_pane_cp_ParamLimits

0x76a1,	// (0x00014ed4) cam6_zoom_pane_cp

0x771e,	// (0x00014f51) vid6_image_uncrop_cif_pane_ParamLimits

0x771e,	// (0x00014f51) vid6_image_uncrop_cif_pane

0x772e,	// (0x00014f61) vid6_image_uncrop_nhd_pane_ParamLimits

0x772e,	// (0x00014f61) vid6_image_uncrop_nhd_pane

0x765e,	// (0x00014e91) vid6_image_uncrop_vga_pane_ParamLimits

0x765e,	// (0x00014e91) vid6_image_uncrop_vga_pane

0x773d,	// (0x00014f70) vid6_image_uncrop_wvga_pane_ParamLimits

0x773d,	// (0x00014f70) vid6_image_uncrop_wvga_pane

0x774c,	// (0x00014f7f) vid6_indi_pane_ParamLimits

0x774c,	// (0x00014f7f) vid6_indi_pane

0xd8b1,	// (0x0001b0e4) bg_tb_trans_pane_cp09_ParamLimits

0xd8b1,	// (0x0001b0e4) bg_tb_trans_pane_cp09

0xd989,	// (0x0001b1bc) cam6_battery_pane_cp_ParamLimits

0xd989,	// (0x0001b1bc) cam6_battery_pane_cp

0xd995,	// (0x0001b1c8) vid6_indi_pane_g1_ParamLimits

0xd995,	// (0x0001b1c8) vid6_indi_pane_g1

0xd9a7,	// (0x0001b1da) vid6_indi_pane_g2_ParamLimits

0xd9a7,	// (0x0001b1da) vid6_indi_pane_g2

0xd9b9,	// (0x0001b1ec) vid6_indi_pane_g3_ParamLimits

0xd9b9,	// (0x0001b1ec) vid6_indi_pane_g3

0xd9d0,	// (0x0001b203) vid6_indi_pane_g4_ParamLimits

0xd9d0,	// (0x0001b203) vid6_indi_pane_g4

0xd9e7,	// (0x0001b21a) vid6_indi_pane_g5_ParamLimits

0xd9e7,	// (0x0001b21a) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x0001d3d9) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x0001d3d9) vid6_indi_pane_g

0xda01,	// (0x0001b234) vid6_indi_pane_t1_ParamLimits

0xda01,	// (0x0001b234) vid6_indi_pane_t1

0xda17,	// (0x0001b24a) vid6_indi_pane_t2_ParamLimits

0xda17,	// (0x0001b24a) vid6_indi_pane_t2

0xda3f,	// (0x0001b272) vid6_indi_pane_t3_ParamLimits

0xda3f,	// (0x0001b272) vid6_indi_pane_t3

0xda67,	// (0x0001b29a) vid6_indi_pane_t4_ParamLimits

0xda67,	// (0x0001b29a) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x0001d3e4) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x0001d3e4) vid6_indi_pane_t

0xda8b,	// (0x0001b2be) wait_bar_pane_cp08

0x7764,	// (0x00014f97) main_cset_text2_pane_t1_ParamLimits

0x7764,	// (0x00014f97) main_cset_text2_pane_t1

0x76f7,	// (0x00014f2a) listscroll_gen_pane_cp06_t1_ParamLimits

0x76f7,	// (0x00014f2a) listscroll_gen_pane_cp06_t1

0x93d3,	// (0x00016c06) main_cam6_set_pane

0xc4c3,	// (0x00019cf6) bg_tb_trans_pane_cp06_ParamLimits

0xcf6e,	// (0x0001a7a1) cam4_indicators_pane_g1_ParamLimits

0xcf7b,	// (0x0001a7ae) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0001d158) cam4_indicators_pane_g_ParamLimits

0xcf9b,	// (0x0001a7ce) cam4_indicators_pane_t1_ParamLimits

0xc952,	// (0x0001a185) bg_tb_trans_pane_cp07_ParamLimits

0x6179,	// (0x000139ac) vid4_indicators_pane_g1_ParamLimits

0x6186,	// (0x000139b9) vid4_indicators_pane_g2_ParamLimits

0x6193,	// (0x000139c6) vid4_indicators_pane_g3_ParamLimits

0x61a0,	// (0x000139d3) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0001d16a) vid4_indicators_pane_g_ParamLimits

0x61b8,	// (0x000139eb) vid4_indicators_pane_t1_ParamLimits

0xd62c,	// (0x0001ae5f) vid4_progress_pane_g1_ParamLimits

0xd638,	// (0x0001ae6b) vid4_progress_pane_g2_ParamLimits

0xd644,	// (0x0001ae77) vid4_progress_pane_g3_ParamLimits

0xd653,	// (0x0001ae86) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0001d315) vid4_progress_pane_g_ParamLimits

0xd671,	// (0x0001aea4) vid4_progress_pane_t1_ParamLimits

0xd687,	// (0x0001aeba) vid4_progress_pane_t2_ParamLimits

0xd69d,	// (0x0001aed0) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0001d320) vid4_progress_pane_t_ParamLimits

0xd6b2,	// (0x0001aee5) wait_bar_pane_cp07_ParamLimits

0x7785,	// (0x00014fb8) main_cam6_set_pane_g2_ParamLimits

0x7785,	// (0x00014fb8) main_cam6_set_pane_g2

0x77ab,	// (0x00014fde) main_cset6_listscroll_pane_ParamLimits

0x77ab,	// (0x00014fde) main_cset6_listscroll_pane

0x77c9,	// (0x00014ffc) main_cset6_slider_pane_ParamLimits

0x77c9,	// (0x00014ffc) main_cset6_slider_pane

0x77df,	// (0x00015012) main_cset6_text2_pane_ParamLimits

0x77df,	// (0x00015012) main_cset6_text2_pane

0xda9a,	// (0x0001b2cd) main_cset6_text_pane

0xdaa2,	// (0x0001b2d5) main_cset_list_pane_copy1_ParamLimits

0xdaa2,	// (0x0001b2d5) main_cset_list_pane_copy1

0xdab2,	// (0x0001b2e5) scroll_pane_cp028_copy1

0x77ed,	// (0x00015020) cset_list_set_pane_copy1

0x7801,	// (0x00015034) aid_position_infowindow_above_copy1

0x7809,	// (0x0001503c) aid_position_infowindow_below_copy1

0x7811,	// (0x00015044) cset_list_set_pane_g1_copy1

0xdabb,	// (0x0001b2ee) cset_list_set_pane_g3_copy1_ParamLimits

0xdabb,	// (0x0001b2ee) cset_list_set_pane_g3_copy1

0xdaca,	// (0x0001b2fd) cset_list_set_pane_t1_copy1_ParamLimits

0xdaca,	// (0x0001b2fd) cset_list_set_pane_t1_copy1

0x9444,	// (0x00016c77) list_highlight_pane_cp021_copy1_ParamLimits

0x9444,	// (0x00016c77) list_highlight_pane_cp021_copy1

0xdadf,	// (0x0001b312) cset6_slider_pane_ParamLimits

0xdadf,	// (0x0001b312) cset6_slider_pane

0xdb0b,	// (0x0001b33e) main_cset6_slider_pane_g1_ParamLimits

0xdb0b,	// (0x0001b33e) main_cset6_slider_pane_g1

0x7819,	// (0x0001504c) main_cset6_slider_pane_g2_ParamLimits

0x7819,	// (0x0001504c) main_cset6_slider_pane_g2

0xdb33,	// (0x0001b366) main_cset6_slider_pane_g3_ParamLimits

0xdb33,	// (0x0001b366) main_cset6_slider_pane_g3

0x7841,	// (0x00015074) main_cset6_slider_pane_g4_ParamLimits

0x7841,	// (0x00015074) main_cset6_slider_pane_g4

0x784d,	// (0x00015080) main_cset6_slider_pane_g5_ParamLimits

0x784d,	// (0x00015080) main_cset6_slider_pane_g5

0xd16a,	// (0x0001a99d) main_cset6_slider_pane_g7_ParamLimits

0xd16a,	// (0x0001a99d) main_cset6_slider_pane_g7

0xd176,	// (0x0001a9a9) main_cset6_slider_pane_g8_ParamLimits

0xd176,	// (0x0001a9a9) main_cset6_slider_pane_g8

0x694f,	// (0x00014182) main_cset6_slider_pane_g9_ParamLimits

0x694f,	// (0x00014182) main_cset6_slider_pane_g9

0x695b,	// (0x0001418e) main_cset6_slider_pane_g10_ParamLimits

0x695b,	// (0x0001418e) main_cset6_slider_pane_g10

0x6967,	// (0x0001419a) main_cset6_slider_pane_g11_ParamLimits

0x6967,	// (0x0001419a) main_cset6_slider_pane_g11

0x6973,	// (0x000141a6) main_cset6_slider_pane_g12_ParamLimits

0x6973,	// (0x000141a6) main_cset6_slider_pane_g12

0x697f,	// (0x000141b2) main_cset6_slider_pane_g13_ParamLimits

0x697f,	// (0x000141b2) main_cset6_slider_pane_g13

0x698b,	// (0x000141be) main_cset6_slider_pane_g14_ParamLimits

0x698b,	// (0x000141be) main_cset6_slider_pane_g14

0x785b,	// (0x0001508e) main_cset6_slider_pane_g15_ParamLimits

0x785b,	// (0x0001508e) main_cset6_slider_pane_g15

0x69af,	// (0x000141e2) main_cset6_slider_pane_g16_ParamLimits

0x69af,	// (0x000141e2) main_cset6_slider_pane_g16

0x69bd,	// (0x000141f0) main_cset6_slider_pane_g17_ParamLimits

0x69bd,	// (0x000141f0) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x0001d3ed) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x0001d3ed) main_cset6_slider_pane_g

0xdb3f,	// (0x0001b372) main_cset6_slider_pane_t1_ParamLimits

0xdb3f,	// (0x0001b372) main_cset6_slider_pane_t1

0x788b,	// (0x000150be) main_cset6_slider_pane_t2_ParamLimits

0x788b,	// (0x000150be) main_cset6_slider_pane_t2

0x78b6,	// (0x000150e9) main_cset6_slider_pane_t3_ParamLimits

0x78b6,	// (0x000150e9) main_cset6_slider_pane_t3

0x78e1,	// (0x00015114) main_cset6_slider_pane_t4_ParamLimits

0x78e1,	// (0x00015114) main_cset6_slider_pane_t4

0x790e,	// (0x00015141) main_cset6_slider_pane_t5_ParamLimits

0x790e,	// (0x00015141) main_cset6_slider_pane_t5

0xdb80,	// (0x0001b3b3) main_cset6_slider_pane_t7_ParamLimits

0xdb80,	// (0x0001b3b3) main_cset6_slider_pane_t7

0x793b,	// (0x0001516e) main_cset6_slider_pane_t8_ParamLimits

0x793b,	// (0x0001516e) main_cset6_slider_pane_t8

0x795f,	// (0x00015192) main_cset6_slider_pane_t9_ParamLimits

0x795f,	// (0x00015192) main_cset6_slider_pane_t9

0x7983,	// (0x000151b6) main_cset6_slider_pane_t10_ParamLimits

0x7983,	// (0x000151b6) main_cset6_slider_pane_t10

0x79a7,	// (0x000151da) main_cset6_slider_pane_t11_ParamLimits

0x79a7,	// (0x000151da) main_cset6_slider_pane_t11

0xdbb6,	// (0x0001b3e9) main_cset6_slider_pane_t14_ParamLimits

0xdbb6,	// (0x0001b3e9) main_cset6_slider_pane_t14

0xdbef,	// (0x0001b422) main_cset6_slider_pane_t15_ParamLimits

0xdbef,	// (0x0001b422) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0001d412) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0001d412) main_cset6_slider_pane_t

0xd25a,	// (0x0001aa8d) cset_slider_pane_g1_copy1

0xd263,	// (0x0001aa96) cset_slider_pane_g2_copy1

0xd26c,	// (0x0001aa9f) cset_slider_pane_g3_copy1

0x93d3,	// (0x00016c06) bg_popup_sub_pane_cp011_copy1

0xd34b,	// (0x0001ab7e) main_cset_text_pane_g1_copy1

0xd353,	// (0x0001ab86) main_cset_text_pane_t1_copy1

0xd361,	// (0x0001ab94) main_cset_text_pane_t2_copy1

0xd36f,	// (0x0001aba2) main_cset_text_pane_t3_copy1

0xd37d,	// (0x0001abb0) main_cset_text_pane_t4_copy1

0xd38b,	// (0x0001abbe) main_cset_text_pane_t5_copy1

0xd399,	// (0x0001abcc) main_cset_text_pane_t6_copy1

0xd3a7,	// (0x0001abda) main_cset_text_pane_t7_copy1

0x7764,	// (0x00014f97) main_cset_text2_pane_t1_copy1

0x93d3,	// (0x00016c06) main_ncimui_pane

0x3f21,	// (0x00011754) popup_query_ncimui_window_ParamLimits

0x3f21,	// (0x00011754) popup_query_ncimui_window

0xc564,	// (0x00019d97) field_cale_ev2_pane_g4_ParamLimits

0xc564,	// (0x00019d97) field_cale_ev2_pane_g4

0x5ab6,	// (0x000132e9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ab6,	// (0x000132e9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0001d0f6) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0001d0f6) cell_video_dialer_keypad_pane_g

0x5ace,	// (0x00013301) cell_video_dialer_keypad_pane_t1

0x93d3,	// (0x00016c06) bg_popup_window_pane_cp012

0xa6a3,	// (0x00017ed6) heading_pane_cp06

0xdd17,	// (0x0001b54a) ncim_query_content_pane

0x93d3,	// (0x00016c06) bg_popup_heading_pane_cp01

0xdd1f,	// (0x0001b552) ncim_heading_pane_t1

0xdd2d,	// (0x0001b560) ncim_indicator_popup_pane

0xdd3f,	// (0x0001b572) ncim_query_button_pane

0xdd55,	// (0x0001b588) ncim_query_content_pane_t1

0xdd67,	// (0x0001b59a) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x0001d451) ncim_query_content_pane_t

0xdda1,	// (0x0001b5d4) ncim_query_list_pane

0xddb3,	// (0x0001b5e6) ncim_query_popup_pane

0xdd2d,	// (0x0001b560) ncim_indicator_popup_pane_ParamLimits

0x7a93,	// (0x000152c6) ncim_query_content_pane_g1_ParamLimits

0x7a93,	// (0x000152c6) ncim_query_content_pane_g1

0xdd55,	// (0x0001b588) ncim_query_content_pane_t1_ParamLimits

0xdd67,	// (0x0001b59a) ncim_query_content_pane_t2_ParamLimits

0x7a9f,	// (0x000152d2) ncim_query_content_pane_t3_ParamLimits

0x7a9f,	// (0x000152d2) ncim_query_content_pane_t3

0x7ac7,	// (0x000152fa) ncim_query_content_pane_t4_ParamLimits

0x7ac7,	// (0x000152fa) ncim_query_content_pane_t4

0x7aef,	// (0x00015322) ncim_query_content_pane_t5_ParamLimits

0x7aef,	// (0x00015322) ncim_query_content_pane_t5

0xdd79,	// (0x0001b5ac) ncim_query_content_pane_t6_ParamLimits

0xdd79,	// (0x0001b5ac) ncim_query_content_pane_t6

0xfc1e,	// (0x0001d451) ncim_query_content_pane_t_ParamLimits

0xdda1,	// (0x0001b5d4) ncim_query_list_pane_ParamLimits

0xddb3,	// (0x0001b5e6) ncim_query_popup_pane_ParamLimits

0xddc7,	// (0x0001b5fa) wait_bar_pane_cp04

0x93d3,	// (0x00016c06) input_focus_pane_cp011

0xddcf,	// (0x0001b602) ncim_query_popup_pane_t1

0xdddd,	// (0x0001b610) ncim_list_query_list_pane_ParamLimits

0xdddd,	// (0x0001b610) ncim_list_query_list_pane

0x93d3,	// (0x00016c06) bg_button_pane_cp027

0xddf0,	// (0x0001b623) ncim_query_button_pane_g1

0x93d3,	// (0x00016c06) list_highlight_pane_cp012

0xddfa,	// (0x0001b62d) ncim_list_query_list_pane_g1

0xde02,	// (0x0001b635) ncim_list_query_list_pane_t1

0xcf8b,	// (0x0001a7be) cam4_indicators_pane_g3_ParamLimits

0xcf8b,	// (0x0001a7be) cam4_indicators_pane_g3

0x61ac,	// (0x000139df) vid4_indicators_pane_g5_ParamLimits

0x61ac,	// (0x000139df) vid4_indicators_pane_g5

0xd662,	// (0x0001ae95) vid4_progress_pane_g5_ParamLimits

0xd662,	// (0x0001ae95) vid4_progress_pane_g5

0x79db,	// (0x0001520e) main_ncimui_pane_g1

0x7a21,	// (0x00015254) ncimui_group_query_pane_ParamLimits

0x7a21,	// (0x00015254) ncimui_group_query_pane

0x7a55,	// (0x00015288) ncimui_list_pane_ParamLimits

0x7a55,	// (0x00015288) ncimui_list_pane

0x7a6f,	// (0x000152a2) ncimui_text_pane_ParamLimits

0x7a6f,	// (0x000152a2) ncimui_text_pane

0x7b17,	// (0x0001534a) ncimui_text_pane_t1_ParamLimits

0x7b17,	// (0x0001534a) ncimui_text_pane_t1

0xde10,	// (0x0001b643) ncimui_list_single_graphic_pane_ParamLimits

0xde10,	// (0x0001b643) ncimui_list_single_graphic_pane

0x7b3d,	// (0x00015370) ncimui_query_pane_ParamLimits

0x7b3d,	// (0x00015370) ncimui_query_pane

0x93d3,	// (0x00016c06) list_highlight_pane_cp013

0xde20,	// (0x0001b653) ncim_list_query_list_pane_t1_copy1

0xddfa,	// (0x0001b62d) ncim_list_single_graphic_pane_g1

0xde2e,	// (0x0001b661) ncim_query_button_pane_cp01

0xde36,	// (0x0001b669) ncim_query_entry_pane_ParamLimits

0xde36,	// (0x0001b669) ncim_query_entry_pane

0xde46,	// (0x0001b679) ncimui_query_pane_g1

0xde4e,	// (0x0001b681) ncimui_query_pane_t1_ParamLimits

0xde4e,	// (0x0001b681) ncimui_query_pane_t1

0x93d3,	// (0x00016c06) input_focus_pane_cp012

0xddcf,	// (0x0001b602) ncim_query_entry_pane_t1

0x9bad,	// (0x000173e0) main_im_pane_ParamLimits

0x9444,	// (0x00016c77) main_mobtv_pane_ParamLimits

0x9444,	// (0x00016c77) main_mobtv_pane

0x7873,	// (0x000150a6) main_cset6_slider_pane_g18_ParamLimits

0x7873,	// (0x000150a6) main_cset6_slider_pane_g18

0x787f,	// (0x000150b2) main_cset6_slider_pane_g19_ParamLimits

0x787f,	// (0x000150b2) main_cset6_slider_pane_g19

0xde64,	// (0x0001b697) bg_main_mobtv_pane_ParamLimits

0xde64,	// (0x0001b697) bg_main_mobtv_pane

0x7b4d,	// (0x00015380) main_mobtv_info_pane

0x7b58,	// (0x0001538b) main_mobtv_loading_pane_ParamLimits

0x7b58,	// (0x0001538b) main_mobtv_loading_pane

0xde72,	// (0x0001b6a5) main_mobtv_pg_channel_list_pane

0xde7c,	// (0x0001b6af) main_mobtv_pg_hdr_pane

0x7b65,	// (0x00015398) main_mobtv_programe_curr_pane_ParamLimits

0x7b65,	// (0x00015398) main_mobtv_programe_curr_pane

0x7b72,	// (0x000153a5) main_mobtv_programe_next_pane_ParamLimits

0x7b72,	// (0x000153a5) main_mobtv_programe_next_pane

0xde85,	// (0x0001b6b8) popup_mobtv_noti_window

0xc293,	// (0x00019ac6) main_tv_pg_hdr_pane_g1

0xde8f,	// (0x0001b6c2) main_tv_pg_hdr_pane_g2

0xde97,	// (0x0001b6ca) main_tv_pg_hdr_pane_g3

0xde9f,	// (0x0001b6d2) main_tv_pg_hdr_pane_g4

0xdea7,	// (0x0001b6da) main_tv_pg_hdr_pane_g5

0xdeb1,	// (0x0001b6e4) main_tv_pg_hdr_pane_g6

0xdebb,	// (0x0001b6ee) main_tv_pg_hdr_pane_g7

0xdec5,	// (0x0001b6f8) main_tv_pg_hdr_pane_g8

0xdecf,	// (0x0001b702) main_tv_pg_hdr_pane_g9

0xded9,	// (0x0001b70c) main_tv_pg_hdr_pane_g10

0xdee3,	// (0x0001b716) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0001d45e) main_tv_pg_hdr_pane_g

0xdeed,	// (0x0001b720) main_tv_pg_hdr_pane_t1

0xdefb,	// (0x0001b72e) main_tv_pg_hdr_pane_t2

0xdf09,	// (0x0001b73c) main_tv_pg_hdr_pane_t3

0xdf19,	// (0x0001b74c) main_tv_pg_hdr_pane_t4

0xdf29,	// (0x0001b75c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x0001d475) main_tv_pg_hdr_pane_t

0xdf39,	// (0x0001b76c) single_mobtv_pg_channel_pane_ParamLimits

0xdf39,	// (0x0001b76c) single_mobtv_pg_channel_pane

0xdf4b,	// (0x0001b77e) single_mobtv_pg_channel_table_pane

0xdf54,	// (0x0001b787) single_mobtv_pg_channel_thumb_pane

0xdf5d,	// (0x0001b790) single_tv_pg_channel_pane_g1

0xdf66,	// (0x0001b799) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0001d480) single_tv_pg_channel_pane_g

0xc4c3,	// (0x00019cf6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc4c3,	// (0x00019cf6) bg_single_mobtv_pg_channel_thumb_pane

0xdf6f,	// (0x0001b7a2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf6f,	// (0x0001b7a2) single_mobtv_pg_channel_thumb_pane_g1

0xdf7d,	// (0x0001b7b0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf7d,	// (0x0001b7b0) single_mobtv_pg_channel_thumb_pane_g2

0xdf89,	// (0x0001b7bc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf89,	// (0x0001b7bc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x0001d485) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x0001d485) single_mobtv_pg_channel_thumb_pane_g

0xdf95,	// (0x0001b7c8) single_mobtv_pg_channel_thumb_pane_t1

0xdfa3,	// (0x0001b7d6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0001d48c) single_mobtv_pg_channel_thumb_pane_t

0xc293,	// (0x00019ac6) bg_single_mobtv_pg_channel_table_pane_g1

0xc293,	// (0x00019ac6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0001cf42) bg_single_mobtv_pg_channel_table_pane_g

0xdfb1,	// (0x0001b7e4) single_mobtv_pg_channel_table_pane_t1

0xdfbf,	// (0x0001b7f2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0001d491) single_mobtv_pg_channel_table_pane_t

0x7b87,	// (0x000153ba) main_mobtv_info_pane_g1_ParamLimits

0x7b87,	// (0x000153ba) main_mobtv_info_pane_g1

0x7ba5,	// (0x000153d8) main_mobtv_info_pane_t1_ParamLimits

0x7ba5,	// (0x000153d8) main_mobtv_info_pane_t1

0x7c1d,	// (0x00015450) main_mobtv_info_pane_t2_ParamLimits

0x7c1d,	// (0x00015450) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0001d49b) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0001d49b) main_mobtv_info_pane_t

0x7cae,	// (0x000154e1) wait_bar_pane_cp05

0x7cc0,	// (0x000154f3) main_mobtv_loading_pane_g1_ParamLimits

0x7cc0,	// (0x000154f3) main_mobtv_loading_pane_g1

0x7cd1,	// (0x00015504) main_mobtv_loading_pane_g2_ParamLimits

0x7cd1,	// (0x00015504) main_mobtv_loading_pane_g2

0x7cdd,	// (0x00015510) main_mobtv_loading_pane_g3_ParamLimits

0x7cdd,	// (0x00015510) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0001d4a2) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0001d4a2) main_mobtv_loading_pane_g

0xdfcd,	// (0x0001b800) main_mobtv_loading_pane_t1_ParamLimits

0xdfcd,	// (0x0001b800) main_mobtv_loading_pane_t1

0xdfe5,	// (0x0001b818) main_mobtv_loading_pane_t2_ParamLimits

0xdfe5,	// (0x0001b818) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x0001d4a9) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x0001d4a9) main_mobtv_loading_pane_t

0x7cf0,	// (0x00015523) wait_bar_pane_cp06_ParamLimits

0x7cf0,	// (0x00015523) wait_bar_pane_cp06

0xe009,	// (0x0001b83c) main_mobtv_programe_curr_pane_t1

0xe017,	// (0x0001b84a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0001d4ae) main_mobtv_programe_curr_pane_t

0xe025,	// (0x0001b858) main_mobtv_programe_next_pane_t1

0xe033,	// (0x0001b866) main_mobtv_programe_next_pane_t2

0xe041,	// (0x0001b874) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0001d4b3) main_mobtv_programe_next_pane_t

0x93d3,	// (0x00016c06) bg_popup_mobtv_noti_window_pane

0xe04f,	// (0x0001b882) popup_mobtv_noti_window_g1

0xe057,	// (0x0001b88a) popup_mobtv_noti_window_t1

0xe065,	// (0x0001b898) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x0001d4ba) popup_mobtv_noti_window_t

0xc293,	// (0x00019ac6) bg_popup_mobtv_noti_window_pane_g1

0x93d3,	// (0x00016c06) sc_clock_pane

0x93d3,	// (0x00016c06) main_fs_bigclock_pane

0x74d5,	// (0x00014d08) blid2_tripm_pane_t4_ParamLimits

0x74d5,	// (0x00014d08) blid2_tripm_pane_t4

0x7cff,	// (0x00015532) sc_clock_pane_g1_ParamLimits

0x7cff,	// (0x00015532) sc_clock_pane_g1

0x7d11,	// (0x00015544) sc_clock_pane_t1_ParamLimits

0x7d11,	// (0x00015544) sc_clock_pane_t1

0x7d35,	// (0x00015568) sc_clock_pane_t2_ParamLimits

0x7d35,	// (0x00015568) sc_clock_pane_t2

0x7d4d,	// (0x00015580) sc_clock_pane_t3_ParamLimits

0x7d4d,	// (0x00015580) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0001d4bf) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0001d4bf) sc_clock_pane_t

0x8b05,	// (0x00016338) main_fs_bigclock_indicator_pane_ParamLimits

0x8b05,	// (0x00016338) main_fs_bigclock_indicator_pane

0xc493,	// (0x00019cc6) main_fs_bigclock_pane_g1_ParamLimits

0xc493,	// (0x00019cc6) main_fs_bigclock_pane_g1

0x8b11,	// (0x00016344) main_fs_bigclock_pane_t1_ParamLimits

0x8b11,	// (0x00016344) main_fs_bigclock_pane_t1

0x8b23,	// (0x00016356) main_fs_bigclock_pane_t2_ParamLimits

0x8b23,	// (0x00016356) main_fs_bigclock_pane_t2

0x8b37,	// (0x0001636a) main_fs_bigclock_pane_t3_ParamLimits

0x8b37,	// (0x0001636a) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x0001d6b9) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0001d6b9) main_fs_bigclock_pane_t

0xecc3,	// (0x0001c4f6) main_fs_bigclock_indicator_pane_g1

0xdd47,	// (0x0001b57a) ncim_query_content_pane_g2_ParamLimits

0xdd47,	// (0x0001b57a) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0001d44c) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0001d44c) ncim_query_content_pane_g

0x7d62,	// (0x00015595) sc_clock_pane_t4_ParamLimits

0x7d62,	// (0x00015595) sc_clock_pane_t4

0x9444,	// (0x00016c77) main_radioblah_pane

0xced8,	// (0x0001a70b) cell_call4_button_pane_t1_copy1_ParamLimits

0xced8,	// (0x0001a70b) cell_call4_button_pane_t1_copy1

0x79e3,	// (0x00015216) main_ncimui_pane_t1_ParamLimits

0x79e3,	// (0x00015216) main_ncimui_pane_t1

0x79f5,	// (0x00015228) main_ncimui_pane_t2_ParamLimits

0x79f5,	// (0x00015228) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x0001d445) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x0001d445) main_ncimui_pane_t

0xe19d,	// (0x0001b9d0) main_radioblah_anim_pane_ParamLimits

0xe19d,	// (0x0001b9d0) main_radioblah_anim_pane

0xe1ae,	// (0x0001b9e1) main_radioblah_info_pane_ParamLimits

0xe1ae,	// (0x0001b9e1) main_radioblah_info_pane

0xe1c2,	// (0x0001b9f5) main_radioblah_pane_t1_ParamLimits

0xe1c2,	// (0x0001b9f5) main_radioblah_pane_t1

0xe1de,	// (0x0001ba11) main_radioblah_pane_t2_ParamLimits

0xe1de,	// (0x0001ba11) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0001d4e0) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0001d4e0) main_radioblah_pane_t

0x7e10,	// (0x00015643) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7e10,	// (0x00015643) main_radioblah_rocker_ctrl_pane

0xe226,	// (0x0001ba59) main_radioblah_info_pane_t1_ParamLimits

0xe226,	// (0x0001ba59) main_radioblah_info_pane_t1

0x7e68,	// (0x0001569b) main_radioblah_info_pane_t2_ParamLimits

0x7e68,	// (0x0001569b) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x0001d4e9) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x0001d4e9) main_radioblah_info_pane_t

0xc293,	// (0x00019ac6) main_radioblah_rocker_ctrl_pane_g1

0x7f18,	// (0x0001574b) main_radioblah_rocker_ctrl_pane_g2

0x7f20,	// (0x00015753) main_radioblah_rocker_ctrl_pane_g3

0x7f28,	// (0x0001575b) main_radioblah_rocker_ctrl_pane_g4

0x7f30,	// (0x00015763) main_radioblah_rocker_ctrl_pane_g5

0x7f38,	// (0x0001576b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0001d4f2) main_radioblah_rocker_ctrl_pane_g

0x7764,	// (0x00014f97) main_cset_text2_pane_t1_copy1_ParamLimits

0xcf5c,	// (0x0001a78f) cam4_image_uncrop_qvga_pane

0xcfb5,	// (0x0001a7e8) vid4_image_uncrop_qcif_pane

0xd8a3,	// (0x0001b0d6) cam6_image_uncrop_qvga_pane_ParamLimits

0xd8a3,	// (0x0001b0d6) cam6_image_uncrop_qvga_pane

0xd979,	// (0x0001b1ac) vid6_image_uncrop_qcif_pane_ParamLimits

0xd979,	// (0x0001b1ac) vid6_image_uncrop_qcif_pane

0x93d3,	// (0x00016c06) bg_popup_preview_window_pane_cp03

0xdcf9,	// (0x0001b52c) list_cset_text2_pane

0xdd01,	// (0x0001b534) main_cset6_text2_pane_g1

0xdd09,	// (0x0001b53c) main_cset6_text2_pane_t1

0xefd2,	// (0x0001c805) list_cset_text2_pane_t1_ParamLimits

0xefd2,	// (0x0001c805) list_cset_text2_pane_t1

0x9444,	// (0x00016c77) main_radioblah_pane_ParamLimits

0x7c9a,	// (0x000154cd) main_mobtv_info_pane_t3_ParamLimits

0x7c9a,	// (0x000154cd) main_mobtv_info_pane_t3

0x7dfe,	// (0x00015631) main_radioblah_pane_g1

0x7e38,	// (0x0001566b) main_radioblah_info_pane_g1

0x7ebd,	// (0x000156f0) main_radioblah_info_pane_t3_ParamLimits

0x7ebd,	// (0x000156f0) main_radioblah_info_pane_t3

0x272b,	// (0x0000ff5e) highlight_cell_cale_month_pane_ParamLimits

0x272b,	// (0x0000ff5e) highlight_cell_cale_month_pane

0x93d3,	// (0x00016c06) main_phob_fisheye_pane

0xc619,	// (0x00019e4c) scroll_pane_cp0031_ParamLimits

0xc619,	// (0x00019e4c) scroll_pane_cp0031

0xda8b,	// (0x0001b2be) wait_bar_pane_cp08_ParamLimits

0x77ed,	// (0x00015020) cset_list_set_pane_copy1_ParamLimits

0xe260,	// (0x0001ba93) highlight_cell_cale_month_pane_g1

0x7f40,	// (0x00015773) highlight_cell_cale_month_pane_t1

0xd61b,	// (0x0001ae4e) list_gen_pane_cp01

0xd155,	// (0x0001a988) scroll_pane_01

0x7f4e,	// (0x00015781) list_single_double_fisheye_pane

0xe268,	// (0x0001ba9b) list_double_fisheye_pane_g1_ParamLimits

0xe268,	// (0x0001ba9b) list_double_fisheye_pane_g1

0xe274,	// (0x0001baa7) list_double_fisheye_pane_g2_ParamLimits

0xe274,	// (0x0001baa7) list_double_fisheye_pane_g2

0x7f57,	// (0x0001578a) list_double_fisheye_pane_g3_ParamLimits

0x7f57,	// (0x0001578a) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0001d4ff) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0001d4ff) list_double_fisheye_pane_g

0x7f63,	// (0x00015796) list_double_fisheye_pane_t1_ParamLimits

0x7f63,	// (0x00015796) list_double_fisheye_pane_t1

0x7f7e,	// (0x000157b1) list_double_fisheye_pane_t2_ParamLimits

0x7f7e,	// (0x000157b1) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x0001d50a) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x0001d50a) list_double_fisheye_pane_t

0x93d3,	// (0x00016c06) main_call5_pane

0x7d8d,	// (0x000155c0) sc_swipe_pane_ParamLimits

0x7d8d,	// (0x000155c0) sc_swipe_pane

0x7fb3,	// (0x000157e6) call5_image_pane_ParamLimits

0x7fb3,	// (0x000157e6) call5_image_pane

0x7fd0,	// (0x00015803) call5_swipe_1_pane_ParamLimits

0x7fd0,	// (0x00015803) call5_swipe_1_pane

0x7fe3,	// (0x00015816) call5_swipe_2_pane_ParamLimits

0x7fe3,	// (0x00015816) call5_swipe_2_pane

0x8010,	// (0x00015843) popup_call5_audio_first_window_ParamLimits

0x8010,	// (0x00015843) popup_call5_audio_first_window

0xc4c3,	// (0x00019cf6) call5_swipe_1_pane_g1_ParamLimits

0xc4c3,	// (0x00019cf6) call5_swipe_1_pane_g1

0xe2a5,	// (0x0001bad8) call5_swipe_1_pane_g2_ParamLimits

0xe2a5,	// (0x0001bad8) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0001d50f) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0001d50f) call5_swipe_1_pane_g

0xe2b1,	// (0x0001bae4) call5_swipe_1_pane_t1_ParamLimits

0xe2b1,	// (0x0001bae4) call5_swipe_1_pane_t1

0xc4c3,	// (0x00019cf6) call5_swipe_2_pane_g1_ParamLimits

0xc4c3,	// (0x00019cf6) call5_swipe_2_pane_g1

0xe2c6,	// (0x0001baf9) call5_swipe_2_pane_g2_ParamLimits

0xe2c6,	// (0x0001baf9) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x0001d514) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x0001d514) call5_swipe_2_pane_g

0xe2d2,	// (0x0001bb05) call5_swipe_2_pane_t1_ParamLimits

0xe2d2,	// (0x0001bb05) call5_swipe_2_pane_t1

0xe2e7,	// (0x0001bb1a) sc_swipe_pane_g1_ParamLimits

0xe2e7,	// (0x0001bb1a) sc_swipe_pane_g1

0xe2f4,	// (0x0001bb27) sc_swipe_pane_g2_ParamLimits

0xe2f4,	// (0x0001bb27) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x0001d519) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x0001d519) sc_swipe_pane_g

0xe300,	// (0x0001bb33) sc_swipe_pane_t1_ParamLimits

0xe300,	// (0x0001bb33) sc_swipe_pane_t1

0x93d3,	// (0x00016c06) main_cmail_launcher_pane

0x8025,	// (0x00015858) aid_size_cell_cmail_l_ParamLimits

0x8025,	// (0x00015858) aid_size_cell_cmail_l

0x803f,	// (0x00015872) grid_cmail_l_pane_ParamLimits

0x803f,	// (0x00015872) grid_cmail_l_pane

0x805b,	// (0x0001588e) cell_cmail_l_pane_ParamLimits

0x805b,	// (0x0001588e) cell_cmail_l_pane

0x8083,	// (0x000158b6) cell_cmail_l_pane_g1_ParamLimits

0x8083,	// (0x000158b6) cell_cmail_l_pane_g1

0x808f,	// (0x000158c2) cell_cmail_l_pane_t1_ParamLimits

0x808f,	// (0x000158c2) cell_cmail_l_pane_t1

0xe315,	// (0x0001bb48) cell_cmail_l_pane_t2_ParamLimits

0xe315,	// (0x0001bb48) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x0001d51e) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x0001d51e) cell_cmail_l_pane_t

0x9444,	// (0x00016c77) grid_highlight_pane_cp018_ParamLimits

0x9444,	// (0x00016c77) grid_highlight_pane_cp018

0x0dca,	// (0x0000e5fd) main2_pane_ParamLimits

0x0dca,	// (0x0000e5fd) main2_pane

0x9c86,	// (0x000174b9) popup_sp_fs_action_menu_bg_pane_g1

0x9c8e,	// (0x000174c1) popup_sp_fs_action_menu_bg_pane_g2

0x9c96,	// (0x000174c9) popup_sp_fs_action_menu_bg_pane_g3

0x9c9e,	// (0x000174d1) popup_sp_fs_action_menu_bg_pane_g4

0x9ca6,	// (0x000174d9) popup_sp_fs_action_menu_bg_pane_g5

0x9cae,	// (0x000174e1) popup_sp_fs_action_menu_bg_pane_g6

0x9cb6,	// (0x000174e9) popup_sp_fs_action_menu_bg_pane_g7

0x9cbe,	// (0x000174f1) popup_sp_fs_action_menu_bg_pane_g8

0x9cc6,	// (0x000174f9) popup_sp_fs_action_menu_bg_pane_g9

0x9cce,	// (0x00017501) popup_sp_fs_action_menu_bg_pane_g10

0x9cce,	// (0x00017501) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0001c9ee) popup_sp_fs_action_menu_bg_pane_g

0x9eac,	// (0x000176df) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x2_t3_g3_g1

0x9eb8,	// (0x000176eb) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9eb8,	// (0x000176eb) list_medium_line_x2_t3_g3_g2

0x9ec4,	// (0x000176f7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9ec4,	// (0x000176f7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0001ca9e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0001ca9e) list_medium_line_x2_t3_g3_g

0x9ed0,	// (0x00017703) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9ed0,	// (0x00017703) list_medium_line_x2_t3_g3_t1

0x1b1f,	// (0x0000f352) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b1f,	// (0x0000f352) list_medium_line_x2_t3_g3_t2

0x9ee5,	// (0x00017718) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9ee5,	// (0x00017718) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0001caa5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0001caa5) list_medium_line_x2_t3_g3_t

0x9eac,	// (0x000176df) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x2_t3_g2_g1

0x9ec4,	// (0x000176f7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9ec4,	// (0x000176f7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0001caac) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0001caac) list_medium_line_x2_t3_g2_g

0x9efa,	// (0x0001772d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9efa,	// (0x0001772d) list_medium_line_x2_t3_g2_t1

0x9f10,	// (0x00017743) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9f10,	// (0x00017743) list_medium_line_x2_t3_g2_t2

0x9f22,	// (0x00017755) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9f22,	// (0x00017755) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0001cab1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0001cab1) list_medium_line_x2_t3_g2_t

0x9eac,	// (0x000176df) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x2_t4_g4_g1

0x9f40,	// (0x00017773) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9f40,	// (0x00017773) list_medium_line_x2_t4_g4_g2

0x9eb8,	// (0x000176eb) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9eb8,	// (0x000176eb) list_medium_line_x2_t4_g4_g3

0x9f4c,	// (0x0001777f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9f4c,	// (0x0001777f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0001cab8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0001cab8) list_medium_line_x2_t4_g4_g

0x1b33,	// (0x0000f366) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1b33,	// (0x0000f366) list_medium_line_x2_t4_g4_t1

0x1b4a,	// (0x0000f37d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1b4a,	// (0x0000f37d) list_medium_line_x2_t4_g4_t2

0x1b5f,	// (0x0000f392) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1b5f,	// (0x0000f392) list_medium_line_x2_t4_g4_t3

0x9f58,	// (0x0001778b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9f58,	// (0x0001778b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0001cac1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0001cac1) list_medium_line_x2_t4_g4_t

0x9eac,	// (0x000176df) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x2_t2_g4_g1

0x9f40,	// (0x00017773) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9f40,	// (0x00017773) list_medium_line_x2_t2_g4_g2

0x9eb8,	// (0x000176eb) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9eb8,	// (0x000176eb) list_medium_line_x2_t2_g4_g3

0x9ec4,	// (0x000176f7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9ec4,	// (0x000176f7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0001cb28) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0001cb28) list_medium_line_x2_t2_g4_g

0xa24c,	// (0x00017a7f) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa24c,	// (0x00017a7f) list_medium_line_x2_t2_g4_t1

0x9ee5,	// (0x00017718) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9ee5,	// (0x00017718) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0001cb31) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0001cb31) list_medium_line_x2_t2_g4_t

0x9eac,	// (0x000176df) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x2_t2_g3_g1

0x9eb8,	// (0x000176eb) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9eb8,	// (0x000176eb) list_medium_line_x2_t2_g3_g2

0x9ec4,	// (0x000176f7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9ec4,	// (0x000176f7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0001ca9e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0001ca9e) list_medium_line_x2_t2_g3_g

0xa261,	// (0x00017a94) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa261,	// (0x00017a94) list_medium_line_x2_t2_g3_t1

0x9ee5,	// (0x00017718) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9ee5,	// (0x00017718) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0001cb36) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0001cb36) list_medium_line_x2_t2_g3_t

0x2904,	// (0x00010137) main_sp_fs_list_pane_ParamLimits

0x2904,	// (0x00010137) main_sp_fs_list_pane

0x2910,	// (0x00010143) sp_fs_scroll_pane_ParamLimits

0x2910,	// (0x00010143) sp_fs_scroll_pane

0x291c,	// (0x0001014f) list_medium_line_x2_t3_t1

0x292c,	// (0x0001015f) list_medium_line_x2_t3_t2

0xa446,	// (0x00017c79) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0001cb81) list_medium_line_x2_t3_t

0x293a,	// (0x0001016d) list_medium_line_x3_t4_t1

0x294a,	// (0x0001017d) list_medium_line_x3_t4_t2

0xa454,	// (0x00017c87) list_medium_line_x3_t4_t3

0xa446,	// (0x00017c79) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0001cb88) list_medium_line_x3_t4_t

0x2958,	// (0x0001018b) list_medium_line_x4_t5_t1

0x2968,	// (0x0001019b) list_medium_line_x4_t5_t2

0xa454,	// (0x00017c87) list_medium_line_x4_t5_t3

0xa462,	// (0x00017c95) list_medium_line_x4_t5_t4

0xa446,	// (0x00017c79) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0001cb91) list_medium_line_x4_t5_t

0x9eac,	// (0x000176df) list_medium_line_t4_g4_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_t4_g4_g1

0x9f4c,	// (0x0001777f) list_medium_line_t4_g4_g2_ParamLimits

0x9f4c,	// (0x0001777f) list_medium_line_t4_g4_g2

0xa470,	// (0x00017ca3) list_medium_line_t4_g4_g3_ParamLimits

0xa470,	// (0x00017ca3) list_medium_line_t4_g4_g3

0x9ec4,	// (0x000176f7) list_medium_line_t4_g4_g4_ParamLimits

0x9ec4,	// (0x000176f7) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0001cb9c) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0001cb9c) list_medium_line_t4_g4_g

0xa47c,	// (0x00017caf) list_medium_line_t4_g4_t1_ParamLimits

0xa47c,	// (0x00017caf) list_medium_line_t4_g4_t1

0xa491,	// (0x00017cc4) list_medium_line_t4_g4_t2_ParamLimits

0xa491,	// (0x00017cc4) list_medium_line_t4_g4_t2

0xa4a7,	// (0x00017cda) list_medium_line_t4_g4_t3_ParamLimits

0xa4a7,	// (0x00017cda) list_medium_line_t4_g4_t3

0x9ee5,	// (0x00017718) list_medium_line_t4_g4_t4_ParamLimits

0x9ee5,	// (0x00017718) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0001cba5) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0001cba5) list_medium_line_t4_g4_t

0x2a3c,	// (0x0001026f) chi_dic_find_pane_g1

0x3ca7,	// (0x000114da) main_tport_pane

0xd2a0,	// (0x0001aad3) list_medium_line_plain_t1

0xd2f2,	// (0x0001ab25) list_medium_line_t2_g2_g1_ParamLimits

0xd2f2,	// (0x0001ab25) list_medium_line_t2_g2_g1

0xd2fe,	// (0x0001ab31) list_medium_line_t2_g2_g2_ParamLimits

0xd2fe,	// (0x0001ab31) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0001d261) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0001d261) list_medium_line_t2_g2_g

0x6d33,	// (0x00014566) list_medium_line_t2_g2_t1_ParamLimits

0x6d33,	// (0x00014566) list_medium_line_t2_g2_t1

0x6d4a,	// (0x0001457d) list_medium_line_t2_g2_t2_ParamLimits

0x6d4a,	// (0x0001457d) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0001d266) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0001d266) list_medium_line_t2_g2_t

0xd6c4,	// (0x0001aef7) aid_sp_fs_list_icon_a_sm

0xd6cc,	// (0x0001aeff) aid_sp_fs_list_icon_d

0xd6d4,	// (0x0001af07) aid_sp_fs_text_primary

0xd6dd,	// (0x0001af10) aid_sp_fs_text_secondary

0xd6e6,	// (0x0001af19) list_medium_line

0xd6e6,	// (0x0001af19) list_medium_line_g2

0xd6e6,	// (0x0001af19) list_medium_line_g3

0xd6e6,	// (0x0001af19) list_medium_line_plain

0xd6e6,	// (0x0001af19) list_medium_line_plain_t2

0xd6e6,	// (0x0001af19) list_medium_line_plain_t3

0xd6e6,	// (0x0001af19) list_medium_line_right_icon

0xd6e6,	// (0x0001af19) list_medium_line_right_iconx2

0xd6e6,	// (0x0001af19) list_medium_line_t2

0xd6e6,	// (0x0001af19) list_medium_line_t2_g2

0xd6e6,	// (0x0001af19) list_medium_line_t2_g3

0xd6e6,	// (0x0001af19) list_medium_line_t2_right_icon

0xd6e6,	// (0x0001af19) list_medium_line_t2_right_iconx2

0xd6e6,	// (0x0001af19) list_medium_line_t3

0xd6e6,	// (0x0001af19) list_medium_line_t3_g2

0xd6e6,	// (0x0001af19) list_medium_line_t3_g3

0xd6e6,	// (0x0001af19) list_medium_line_t3_right_iconx2

0xd6ef,	// (0x0001af22) list_medium_line_t4_g4

0xd6f8,	// (0x0001af2b) list_medium_line_x2

0xd6f8,	// (0x0001af2b) list_medium_line_x2_t2_g2

0xd6f8,	// (0x0001af2b) list_medium_line_x2_t2_g3

0xd6f8,	// (0x0001af2b) list_medium_line_x2_t2_g4

0xd6f8,	// (0x0001af2b) list_medium_line_x2_t3

0xd6f8,	// (0x0001af2b) list_medium_line_x2_t3_g2

0xd6f8,	// (0x0001af2b) list_medium_line_x2_t3_g3

0xd6f8,	// (0x0001af2b) list_medium_line_x2_t3_g4

0xd6f8,	// (0x0001af2b) list_medium_line_x2_t4_g2

0xd6f8,	// (0x0001af2b) list_medium_line_x2_t4_g4

0xd701,	// (0x0001af34) list_medium_line_x3

0xd701,	// (0x0001af34) list_medium_line_x3_t4

0xd701,	// (0x0001af34) list_medium_line_x3_t4_g4

0xd6ef,	// (0x0001af22) list_medium_line_x4_t4

0xd6ef,	// (0x0001af22) list_medium_line_x4_t4_g7

0xd6ef,	// (0x0001af22) list_medium_line_x4_t5

0xd70a,	// (0x0001af3d) list_single_fs_dyc_pane_ParamLimits

0xd70a,	// (0x0001af3d) list_single_fs_dyc_pane

0x9eac,	// (0x000176df) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x4_t4_g7_g1

0xdc28,	// (0x0001b45b) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdc28,	// (0x0001b45b) list_medium_line_x4_t4_g7_g2

0xdc34,	// (0x0001b467) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc34,	// (0x0001b467) list_medium_line_x4_t4_g7_g3

0xdc43,	// (0x0001b476) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdc43,	// (0x0001b476) list_medium_line_x4_t4_g7_g4

0xdc4f,	// (0x0001b482) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdc4f,	// (0x0001b482) list_medium_line_x4_t4_g7_g5

0xdc5e,	// (0x0001b491) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdc5e,	// (0x0001b491) list_medium_line_x4_t4_g7_g6

0xdc6d,	// (0x0001b4a0) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdc6d,	// (0x0001b4a0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x0001d42b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x0001d42b) list_medium_line_x4_t4_g7_g

0xdc79,	// (0x0001b4ac) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc79,	// (0x0001b4ac) list_medium_line_x4_t4_g7_t1

0xdc8e,	// (0x0001b4c1) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc8e,	// (0x0001b4c1) list_medium_line_x4_t4_g7_t2

0xdca3,	// (0x0001b4d6) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdca3,	// (0x0001b4d6) list_medium_line_x4_t4_g7_t3

0xdcb8,	// (0x0001b4eb) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdcb8,	// (0x0001b4eb) list_medium_line_x4_t4_g7_t4

0xdcca,	// (0x0001b4fd) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdcca,	// (0x0001b4fd) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x0001d43a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x0001d43a) list_medium_line_x4_t4_g7_t

0xdcdc,	// (0x0001b50f) list_single_dyc_row_pane_ParamLimits

0xdcdc,	// (0x0001b50f) list_single_dyc_row_pane

0x7fa0,	// (0x000157d3) call5_gesture_pane_ParamLimits

0x7fa0,	// (0x000157d3) call5_gesture_pane

0x7ff6,	// (0x00015829) call5_windows_pane_ParamLimits

0x7ff6,	// (0x00015829) call5_windows_pane

0x80a5,	// (0x000158d8) call5_swipe_1_pane_cp_ParamLimits

0x80a5,	// (0x000158d8) call5_swipe_1_pane_cp

0x80b1,	// (0x000158e4) call5_swipe_2_pane_cp_ParamLimits

0x80b1,	// (0x000158e4) call5_swipe_2_pane_cp

0xa8f1,	// (0x00018124) call5_image_pane_cp

0x80bd,	// (0x000158f0) popup_call5_audio_first_window_cp_ParamLimits

0x80bd,	// (0x000158f0) popup_call5_audio_first_window_cp

0xe2e7,	// (0x0001bb1a) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2e7,	// (0x0001bb1a) call5_swipe_1_pane_g1_cp

0xe327,	// (0x0001bb5a) call5_swipe_1_pane_g2_cp

0xe300,	// (0x0001bb33) call5_swipe_1_pane_t1_cp_ParamLimits

0xe300,	// (0x0001bb33) call5_swipe_1_pane_t1_cp

0xe2e7,	// (0x0001bb1a) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2e7,	// (0x0001bb1a) call5_swipe_2_pane_g1_cp

0xe32f,	// (0x0001bb62) call5_swipe_2_pane_g2_cp

0xe337,	// (0x0001bb6a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe337,	// (0x0001bb6a) call5_swipe_2_pane_t1_cp

0x9444,	// (0x00016c77) main_sp_fs_email_pane

0xe34c,	// (0x0001bb7f) main_sp_fs_listscroll_pane_te

0xe355,	// (0x0001bb88) popup_sp_fs_action_menu_pane_ParamLimits

0xe355,	// (0x0001bb88) popup_sp_fs_action_menu_pane

0xc293,	// (0x00019ac6) bg_sp_fs_ctrlbar_pane_g1

0xe39b,	// (0x0001bbce) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3a4,	// (0x0001bbd7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3ad,	// (0x0001bbe0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc293,	// (0x00019ac6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x0001d523) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc072,	// (0x000198a5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc072,	// (0x000198a5) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3b6,	// (0x0001bbe9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3b6,	// (0x0001bbe9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3c2,	// (0x0001bbf5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3c2,	// (0x0001bbf5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x0001d52c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x0001d52c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3ce,	// (0x0001bc01) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3ce,	// (0x0001bc01) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe3e8,	// (0x0001bc1b) list_medium_line_t2_right_icon_g1

0x80cb,	// (0x000158fe) list_medium_line_t2_right_icon_t1

0x80db,	// (0x0001590e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x0001d531) list_medium_line_t2_right_icon_t

0xbd5e,	// (0x00019591) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbd5e,	// (0x00019591) bg_sp_fs_ctrlbar_pane

0x8131,	// (0x00015964) main_sp_fs_ctrlbar_button_pane_cp01

0x8139,	// (0x0001596c) main_sp_fs_ctrlbar_ddmenu_pane

0xe42a,	// (0x0001bc5d) main_sp_fs_ctrlbar_pane_g1

0xe436,	// (0x0001bc69) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x0001d536) main_sp_fs_ctrlbar_pane_g

0xe442,	// (0x0001bc75) main_sp_fs_ctrlbar_pane_t1

0x8143,	// (0x00015976) main_sp_fs_ctrlbar_pane

0x8167,	// (0x0001599a) main_sp_fs_listscroll_pane_te_cp01

0x8187,	// (0x000159ba) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8187,	// (0x000159ba) popup_sp_fs_action_menu_pane_cp01

0x9444,	// (0x00016c77) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9444,	// (0x00016c77) bg_sp_fs_highlight_list_pane_cp01

0xe457,	// (0x0001bc8a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe457,	// (0x0001bc8a) sp_fs_action_menu_list_gene_pane_g1

0xe466,	// (0x0001bc99) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe466,	// (0x0001bc99) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x0001d53b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x0001d53b) sp_fs_action_menu_list_gene_pane_g

0xe473,	// (0x0001bca6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe473,	// (0x0001bca6) sp_fs_action_menu_list_gene_pane_t1

0xe48b,	// (0x0001bcbe) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe48b,	// (0x0001bcbe) sp_fs_action_menu_list_gene_pane

0xe4ae,	// (0x0001bce1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4ae,	// (0x0001bce1) popup_sp_fs_action_menu_bg_pane

0xe4bc,	// (0x0001bcef) sp_fs_action_menu_list_pane_ParamLimits

0xe4bc,	// (0x0001bcef) sp_fs_action_menu_list_pane

0xe4e0,	// (0x0001bd13) sp_fs_scroll_pane_cp01_ParamLimits

0xe4e0,	// (0x0001bd13) sp_fs_scroll_pane_cp01

0x81a3,	// (0x000159d6) list_medium_line_plain_t2_t1

0x81b3,	// (0x000159e6) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x0001d540) list_medium_line_plain_t2_t

0x81c1,	// (0x000159f4) list_medium_line_plain_t3_t1

0x81d1,	// (0x00015a04) list_medium_line_plain_t3_t2

0x81df,	// (0x00015a12) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x0001d545) list_medium_line_plain_t3_t

0x9eac,	// (0x000176df) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x2_t2_g2_g1

0x9ec4,	// (0x000176f7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9ec4,	// (0x000176f7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0001caac) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0001caac) list_medium_line_x2_t2_g2_g

0xa47c,	// (0x00017caf) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa47c,	// (0x00017caf) list_medium_line_x2_t2_g2_t1

0x9ee5,	// (0x00017718) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9ee5,	// (0x00017718) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x0001d54c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x0001d54c) list_medium_line_x2_t2_g2_t

0x9eac,	// (0x000176df) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x2_t4_g2_g1

0x9ec4,	// (0x000176f7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9ec4,	// (0x000176f7) list_medium_line_x2_t4_g2_g2

0x0001,

0xf279,	// (0x0001caac) list_medium_line_x2_t4_g2_g_ParamLimits

0xf279,	// (0x0001caac) list_medium_line_x2_t4_g2_g

0x81ed,	// (0x00015a20) list_medium_line_x2_t4_g2_t1_ParamLimits

0x81ed,	// (0x00015a20) list_medium_line_x2_t4_g2_t1

0x8207,	// (0x00015a3a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8207,	// (0x00015a3a) list_medium_line_x2_t4_g2_t2

0x821d,	// (0x00015a50) list_medium_line_x2_t4_g2_t3_ParamLimits

0x821d,	// (0x00015a50) list_medium_line_x2_t4_g2_t3

0x9ee5,	// (0x00017718) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9ee5,	// (0x00017718) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1e,	// (0x0001d551) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1e,	// (0x0001d551) list_medium_line_x2_t4_g2_t

0xe506,	// (0x0001bd39) list_medium_line_t3_right_iconx2_g1

0xe3e8,	// (0x0001bc1b) list_medium_line_t3_right_iconx2_g2

0x8232,	// (0x00015a65) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd27,	// (0x0001d55a) list_medium_line_t3_right_iconx2_g

0x823c,	// (0x00015a6f) list_medium_line_t3_right_iconx2_t1

0x824c,	// (0x00015a7f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2e,	// (0x0001d561) list_medium_line_t3_right_iconx2_t

0x9eac,	// (0x000176df) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x3_t4_g4_g1

0x9eb8,	// (0x000176eb) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9eb8,	// (0x000176eb) list_medium_line_x3_t4_g4_g2

0x9f4c,	// (0x0001777f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9f4c,	// (0x0001777f) list_medium_line_x3_t4_g4_g3

0xe50e,	// (0x0001bd41) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe50e,	// (0x0001bd41) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd33,	// (0x0001d566) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd33,	// (0x0001d566) list_medium_line_x3_t4_g4_g

0x825a,	// (0x00015a8d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x825a,	// (0x00015a8d) list_medium_line_x3_t4_g4_t1

0x8271,	// (0x00015aa4) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8271,	// (0x00015aa4) list_medium_line_x3_t4_g4_t2

0xe51a,	// (0x0001bd4d) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe51a,	// (0x0001bd4d) list_medium_line_x3_t4_g4_t3

0xe52f,	// (0x0001bd62) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe52f,	// (0x0001bd62) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3c,	// (0x0001d56f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3c,	// (0x0001d56f) list_medium_line_x3_t4_g4_t

0x8286,	// (0x00015ab9) list_single_dyc_row_text_pane_t1_ParamLimits

0x8286,	// (0x00015ab9) list_single_dyc_row_text_pane_t1

0x82cb,	// (0x00015afe) list_single_dyc_row_text_pane_t2_ParamLimits

0x82cb,	// (0x00015afe) list_single_dyc_row_text_pane_t2

0xe54c,	// (0x0001bd7f) list_single_dyc_row_text_pane_t3_ParamLimits

0xe54c,	// (0x0001bd7f) list_single_dyc_row_text_pane_t3

0x0002,

0xfd45,	// (0x0001d578) list_single_dyc_row_text_pane_t_ParamLimits

0xfd45,	// (0x0001d578) list_single_dyc_row_text_pane_t

0xe55e,	// (0x0001bd91) list_single_dyc_row_pane_g1_ParamLimits

0xe55e,	// (0x0001bd91) list_single_dyc_row_pane_g1

0xe56a,	// (0x0001bd9d) list_single_dyc_row_pane_g2_ParamLimits

0xe56a,	// (0x0001bd9d) list_single_dyc_row_pane_g2

0xe576,	// (0x0001bda9) list_single_dyc_row_pane_g3_ParamLimits

0xe576,	// (0x0001bda9) list_single_dyc_row_pane_g3

0xe582,	// (0x0001bdb5) list_single_dyc_row_pane_g4_ParamLimits

0xe582,	// (0x0001bdb5) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0001d57f) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0001d57f) list_single_dyc_row_pane_g

0xe58e,	// (0x0001bdc1) list_single_dyc_row_text_pane_ParamLimits

0xe58e,	// (0x0001bdc1) list_single_dyc_row_text_pane

0x93d3,	// (0x00016c06) bg_sp_fs_scroll_pane

0xe5ad,	// (0x0001bde0) thumb_sp_fs_scroll_pane

0xd2f2,	// (0x0001ab25) list_medium_line_g1_ParamLimits

0xd2f2,	// (0x0001ab25) list_medium_line_g1

0xe5b6,	// (0x0001bde9) list_medium_line_t1_ParamLimits

0xe5b6,	// (0x0001bde9) list_medium_line_t1

0x9eac,	// (0x000176df) list_medium_line_x2_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x2_g1

0x9eb8,	// (0x000176eb) list_medium_line_x2_g2_ParamLimits

0x9eb8,	// (0x000176eb) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0001d588) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0001d588) list_medium_line_x2_g

0xe5cb,	// (0x0001bdfe) list_medium_line_x2_t1_ParamLimits

0xe5cb,	// (0x0001bdfe) list_medium_line_x2_t1

0x9eac,	// (0x000176df) list_medium_line_x3_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x3_g1

0x9eb8,	// (0x000176eb) list_medium_line_x3_g2_ParamLimits

0x9eb8,	// (0x000176eb) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0001d588) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0001d588) list_medium_line_x3_g

0xe5cb,	// (0x0001bdfe) list_medium_line_x3_t1_ParamLimits

0xe5cb,	// (0x0001bdfe) list_medium_line_x3_t1

0xe5e1,	// (0x0001be14) thumb_sp_fs_scroll_pane_g1

0xe5ea,	// (0x0001be1d) thumb_sp_fs_scroll_pane_g2

0xe5f3,	// (0x0001be26) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0001d58d) thumb_sp_fs_scroll_pane_g

0xe5e1,	// (0x0001be14) bg_sp_fs_scroll_pane_g1

0xe5ea,	// (0x0001be1d) bg_sp_fs_scroll_pane_g2

0xe5f3,	// (0x0001be26) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0001d58d) bg_sp_fs_scroll_pane_g

0x9eac,	// (0x000176df) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9eac,	// (0x000176df) list_medium_line_x2_t3_g4_g1

0x9f40,	// (0x00017773) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9f40,	// (0x00017773) list_medium_line_x2_t3_g4_g2

0x9eb8,	// (0x000176eb) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9eb8,	// (0x000176eb) list_medium_line_x2_t3_g4_g3

0x9ec4,	// (0x000176f7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9ec4,	// (0x000176f7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0001cb28) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0001cb28) list_medium_line_x2_t3_g4_g

0x8325,	// (0x00015b58) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8325,	// (0x00015b58) list_medium_line_x2_t3_g4_t1

0x833b,	// (0x00015b6e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x833b,	// (0x00015b6e) list_medium_line_x2_t3_g4_t2

0x9ee5,	// (0x00017718) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9ee5,	// (0x00017718) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0001d594) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0001d594) list_medium_line_x2_t3_g4_t

0xd2f2,	// (0x0001ab25) list_medium_line_g2_g1_ParamLimits

0xd2f2,	// (0x0001ab25) list_medium_line_g2_g1

0xd2fe,	// (0x0001ab31) list_medium_line_g2_g2_ParamLimits

0xd2fe,	// (0x0001ab31) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0001d261) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0001d261) list_medium_line_g2_g

0xe5fc,	// (0x0001be2f) list_medium_line_g2_t1_ParamLimits

0xe5fc,	// (0x0001be2f) list_medium_line_g2_t1

0xd2f2,	// (0x0001ab25) list_medium_line_t3_g2_g1_ParamLimits

0xd2f2,	// (0x0001ab25) list_medium_line_t3_g2_g1

0xd2fe,	// (0x0001ab31) list_medium_line_t3_g2_g2_ParamLimits

0xd2fe,	// (0x0001ab31) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0001d261) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0001d261) list_medium_line_t3_g2_g

0x8354,	// (0x00015b87) list_medium_line_t3_g2_t1_ParamLimits

0x8354,	// (0x00015b87) list_medium_line_t3_g2_t1

0x836e,	// (0x00015ba1) list_medium_line_t3_g2_t2_ParamLimits

0x836e,	// (0x00015ba1) list_medium_line_t3_g2_t2

0x8384,	// (0x00015bb7) list_medium_line_t3_g2_t3_ParamLimits

0x8384,	// (0x00015bb7) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0001d59b) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0001d59b) list_medium_line_t3_g2_t

0xe3e8,	// (0x0001bc1b) list_medium_line_right_icon_g1

0xe611,	// (0x0001be44) list_medium_line_right_icon_t1

0xd2f2,	// (0x0001ab25) list_medium_line_t2_g1_ParamLimits

0xd2f2,	// (0x0001ab25) list_medium_line_t2_g1

0x839b,	// (0x00015bce) list_medium_line_t2_t1_ParamLimits

0x839b,	// (0x00015bce) list_medium_line_t2_t1

0x83b5,	// (0x00015be8) list_medium_line_t2_t2_ParamLimits

0x83b5,	// (0x00015be8) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0001d5a2) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0001d5a2) list_medium_line_t2_t

0xd2f2,	// (0x0001ab25) list_medium_line_t3_g1_ParamLimits

0xd2f2,	// (0x0001ab25) list_medium_line_t3_g1

0x83ca,	// (0x00015bfd) list_medium_line_t3_t1_ParamLimits

0x83ca,	// (0x00015bfd) list_medium_line_t3_t1

0x83e4,	// (0x00015c17) list_medium_line_t3_t2_ParamLimits

0x83e4,	// (0x00015c17) list_medium_line_t3_t2

0x83fa,	// (0x00015c2d) list_medium_line_t3_t3_ParamLimits

0x83fa,	// (0x00015c2d) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0001d5a7) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0001d5a7) list_medium_line_t3_t

0xd2f2,	// (0x0001ab25) list_medium_line_g3_g1_ParamLimits

0xd2f2,	// (0x0001ab25) list_medium_line_g3_g1

0xe61f,	// (0x0001be52) list_medium_line_g3_g2_ParamLimits

0xe61f,	// (0x0001be52) list_medium_line_g3_g2

0xd2fe,	// (0x0001ab31) list_medium_line_g3_g3_ParamLimits

0xd2fe,	// (0x0001ab31) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0001d5ae) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0001d5ae) list_medium_line_g3_g

0xe62b,	// (0x0001be5e) list_medium_line_g3_t1_ParamLimits

0xe62b,	// (0x0001be5e) list_medium_line_g3_t1

0xd2f2,	// (0x0001ab25) list_medium_line_t2_g3_g1_ParamLimits

0xd2f2,	// (0x0001ab25) list_medium_line_t2_g3_g1

0xe61f,	// (0x0001be52) list_medium_line_t2_g3_g2_ParamLimits

0xe61f,	// (0x0001be52) list_medium_line_t2_g3_g2

0xd2fe,	// (0x0001ab31) list_medium_line_t2_g3_g3_ParamLimits

0xd2fe,	// (0x0001ab31) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0001d5ae) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0001d5ae) list_medium_line_t2_g3_g

0x840f,	// (0x00015c42) list_medium_line_t2_g3_t1_ParamLimits

0x840f,	// (0x00015c42) list_medium_line_t2_g3_t1

0x8426,	// (0x00015c59) list_medium_line_t2_g3_t2_ParamLimits

0x8426,	// (0x00015c59) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0001d5b5) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0001d5b5) list_medium_line_t2_g3_t

0xd2f2,	// (0x0001ab25) list_medium_line_t3_g3_g1_ParamLimits

0xd2f2,	// (0x0001ab25) list_medium_line_t3_g3_g1

0xe61f,	// (0x0001be52) list_medium_line_t3_g3_g2_ParamLimits

0xe61f,	// (0x0001be52) list_medium_line_t3_g3_g2

0xd2fe,	// (0x0001ab31) list_medium_line_t3_g3_g3_ParamLimits

0xd2fe,	// (0x0001ab31) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0001d5ae) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0001d5ae) list_medium_line_t3_g3_g

0x843b,	// (0x00015c6e) list_medium_line_t3_g3_t1_ParamLimits

0x843b,	// (0x00015c6e) list_medium_line_t3_g3_t1

0x8454,	// (0x00015c87) list_medium_line_t3_g3_t2_ParamLimits

0x8454,	// (0x00015c87) list_medium_line_t3_g3_t2

0x846a,	// (0x00015c9d) list_medium_line_t3_g3_t3_ParamLimits

0x846a,	// (0x00015c9d) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0001d5ba) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0001d5ba) list_medium_line_t3_g3_t

0xe506,	// (0x0001bd39) list_medium_line_right_iconx2_g1

0xe3e8,	// (0x0001bc1b) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0001d5c1) list_medium_line_right_iconx2_g

0xe640,	// (0x0001be73) list_medium_line_right_iconx2_t1

0xe506,	// (0x0001bd39) list_medium_line_t2_right_iconx2_g1

0xe3e8,	// (0x0001bc1b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0001d5c1) list_medium_line_t2_right_iconx2_g

0x8484,	// (0x00015cb7) list_medium_line_t2_right_iconx2_t1

0x8494,	// (0x00015cc7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0001d5c6) list_medium_line_t2_right_iconx2_t

0xe64e,	// (0x0001be81) list_medium_line_x4_t4_t1

0x84a2,	// (0x00015cd5) list_medium_line_x4_t4_t2

0x84b2,	// (0x00015ce5) list_medium_line_x4_t4_t3

0x84c2,	// (0x00015cf5) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0001d5cb) list_medium_line_x4_t4_t

0x850c,	// (0x00015d3f) tport_appsw_pane_ParamLimits

0x850c,	// (0x00015d3f) tport_appsw_pane

0x851f,	// (0x00015d52) tport_contact_pane_ParamLimits

0x851f,	// (0x00015d52) tport_contact_pane

0x8532,	// (0x00015d65) tport_listscroll_pane_ParamLimits

0x8532,	// (0x00015d65) tport_listscroll_pane

0x8548,	// (0x00015d7b) cell_tport_appsw_pane_ParamLimits

0x8548,	// (0x00015d7b) cell_tport_appsw_pane

0xcffa,	// (0x0001a82d) tport_appsw_pane_g1_ParamLimits

0xcffa,	// (0x0001a82d) tport_appsw_pane_g1

0xe65c,	// (0x0001be8f) tport_contact_pane_g1

0xe665,	// (0x0001be98) tport_contact_pane_t1

0xe673,	// (0x0001bea6) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0001d5d4) tport_contact_pane_t

0xe681,	// (0x0001beb4) list_tport_pane

0xe68a,	// (0x0001bebd) scroll_pane_cp_030

0x858e,	// (0x00015dc1) cell_tport_appsw_pane_g1

0xe6a3,	// (0x0001bed6) cell_tport_appsw_pane_t1

0x93d3,	// (0x00016c06) grid_highlight_pane_cp019

0x859e,	// (0x00015dd1) list_tport_double_graphic_pane_ParamLimits

0x859e,	// (0x00015dd1) list_tport_double_graphic_pane

0x9444,	// (0x00016c77) list_highlight_pane_cp023_ParamLimits

0x9444,	// (0x00016c77) list_highlight_pane_cp023

0x85ae,	// (0x00015de1) list_tport_double_graphic_pane_g1_ParamLimits

0x85ae,	// (0x00015de1) list_tport_double_graphic_pane_g1

0x85bb,	// (0x00015dee) list_tport_double_graphic_pane_t1_ParamLimits

0x85bb,	// (0x00015dee) list_tport_double_graphic_pane_t1

0x85d0,	// (0x00015e03) list_tport_double_graphic_pane_t2_ParamLimits

0x85d0,	// (0x00015e03) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0001d5e0) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0001d5e0) list_tport_double_graphic_pane_t

0x93d3,	// (0x00016c06) main_cale_note_pane

0x63cf,	// (0x00013c02) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x63cf,	// (0x00013c02) cell_vitu2_function_top_wide_pane_cp01

0x7cae,	// (0x000154e1) wait_bar_pane_cp05_ParamLimits

0x93d3,	// (0x00016c06) listscroll_cmail_pane

0xe6b9,	// (0x0001beec) list_cmail_pane

0x85ec,	// (0x00015e1f) list_cmail_body_pane

0x8604,	// (0x00015e37) list_single_cmail_header_caption_pane

0x8624,	// (0x00015e57) list_single_cmail_header_detail_pane_ParamLimits

0x8624,	// (0x00015e57) list_single_cmail_header_detail_pane

0x8656,	// (0x00015e89) list_single_cmail_header_caption_pane_t1

0x8666,	// (0x00015e99) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8666,	// (0x00015e99) list_single_cmail_header_detail_pane_g1

0xe6d9,	// (0x0001bf0c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6d9,	// (0x0001bf0c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0001d5e5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0001d5e5) list_single_cmail_header_detail_pane_g

0xe6f2,	// (0x0001bf25) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6f2,	// (0x0001bf25) list_single_cmail_header_detail_pane_t1

0xe730,	// (0x0001bf63) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe730,	// (0x0001bf63) list_single_cmail_header_editor_pane_bg

0xdf66,	// (0x0001b799) list_cmail_body_pane_g1

0xe742,	// (0x0001bf75) list_cmail_body_pane_t1

0xd037,	// (0x0001a86a) list_single_cmail_header_editor_pane_bg_g1

0xa16b,	// (0x0001799e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd047,	// (0x0001a87a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd03f,	// (0x0001a872) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd2ca,	// (0x0001aafd) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd067,	// (0x0001a89a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd057,	// (0x0001a88a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd05f,	// (0x0001a892) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa14b,	// (0x0001797e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x86a4,	// (0x00015ed7) calenote_gesture_pane_ParamLimits

0x86a4,	// (0x00015ed7) calenote_gesture_pane

0x86c4,	// (0x00015ef7) calenote_window_pane_ParamLimits

0x86c4,	// (0x00015ef7) calenote_window_pane

0xe750,	// (0x0001bf83) popup_note_window_cp01

0x86e0,	// (0x00015f13) calenote_swipe_1_pane_ParamLimits

0x86e0,	// (0x00015f13) calenote_swipe_1_pane

0x80b1,	// (0x000158e4) calenote_swipe_2_pane_ParamLimits

0x80b1,	// (0x000158e4) calenote_swipe_2_pane

0xe2e7,	// (0x0001bb1a) calenote_swipe_1_pane_g1_ParamLimits

0xe2e7,	// (0x0001bb1a) calenote_swipe_1_pane_g1

0xe2f4,	// (0x0001bb27) calenote_swipe_1_pane_g2_ParamLimits

0xe2f4,	// (0x0001bb27) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0001d519) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0001d519) calenote_swipe_1_pane_g

0xe762,	// (0x0001bf95) calenote_swipe_1_pane_t1_ParamLimits

0xe762,	// (0x0001bf95) calenote_swipe_1_pane_t1

0xe2e7,	// (0x0001bb1a) calenote_swipe_2_pane_g1_ParamLimits

0xe2e7,	// (0x0001bb1a) calenote_swipe_2_pane_g1

0xe781,	// (0x0001bfb4) calenote_swipe_2_pane_g2_ParamLimits

0xe781,	// (0x0001bfb4) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0001d5f1) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0001d5f1) calenote_swipe_2_pane_g

0xe78d,	// (0x0001bfc0) calenote_swipe_2_pane_t1_ParamLimits

0xe78d,	// (0x0001bfc0) calenote_swipe_2_pane_t1

0x93d3,	// (0x00016c06) main_mup_navstr_pane

0x5051,	// (0x00012884) main_mup3_pane_t7_ParamLimits

0x5051,	// (0x00012884) main_mup3_pane_t7

0xcc1f,	// (0x0001a452) main_mp4_pane_g6_ParamLimits

0xcc1f,	// (0x0001a452) main_mp4_pane_g6

0xce39,	// (0x0001a66c) main_image3_pane_t4_ParamLimits

0xce39,	// (0x0001a66c) main_image3_pane_t4

0x86f5,	// (0x00015f28) popup_navstr_preview_pane_ParamLimits

0x86f5,	// (0x00015f28) popup_navstr_preview_pane

0x8705,	// (0x00015f38) scroll_navstr_pane_ParamLimits

0x8705,	// (0x00015f38) scroll_navstr_pane

0x93d3,	// (0x00016c06) bg_popup_preview_window_pane_cp04

0xe7b4,	// (0x0001bfe7) popup_navstr_preview_pane_t1

0x8719,	// (0x00015f4c) scroll_navstr_pane_g1_ParamLimits

0x8719,	// (0x00015f4c) scroll_navstr_pane_g1

0x872d,	// (0x00015f60) scroll_navstr_pane_t1_ParamLimits

0x872d,	// (0x00015f60) scroll_navstr_pane_t1

0xe759,	// (0x0001bf8c) bg_button_pane_cp014

0xe759,	// (0x0001bf8c) bg_button_pane_cp030

0xe288,	// (0x0001babb) list_double_fisheye_pane_g4_ParamLimits

0xe288,	// (0x0001babb) list_double_fisheye_pane_g4

0xe294,	// (0x0001bac7) list_double_fisheye_pane_g5_ParamLimits

0xe294,	// (0x0001bac7) list_double_fisheye_pane_g5

0xe6c1,	// (0x0001bef4) sp_fs_scroll_pane_cp03

0xe42a,	// (0x0001bc5d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe436,	// (0x0001bc69) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x0001d536) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe442,	// (0x0001bc75) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x85e2,	// (0x00015e15) sp_fs_scroll_pane_cp02

0x9d47,	// (0x0001757a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9d47,	// (0x0001757a) popup_sp_fs_calendar_preview_list_single_pane

0x93d3,	// (0x00016c06) main_cam6_pano_pane

0x9444,	// (0x00016c77) main_mup3_pane_ParamLimits

0x93d3,	// (0x00016c06) main_phacti_pane

0x7b7f,	// (0x000153b2) bg_button_pane_cp11

0x7b99,	// (0x000153cc) main_mobtv_info_pane_g2_ParamLimits

0x7b99,	// (0x000153cc) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x0001d496) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x0001d496) main_mobtv_info_pane_g

0x7d74,	// (0x000155a7) sc_clock_pane_t5_ParamLimits

0x7d74,	// (0x000155a7) sc_clock_pane_t5

0x7dfe,	// (0x00015631) main_radioblah_pane_g1_ParamLimits

0xe1f6,	// (0x0001ba29) main_radioblah_pane_t3_ParamLimits

0xe1f6,	// (0x0001ba29) main_radioblah_pane_t3

0xe20e,	// (0x0001ba41) main_radioblah_pane_t4_ParamLimits

0xe20e,	// (0x0001ba41) main_radioblah_pane_t4

0x7e26,	// (0x00015659) main_radioblah_text_pane_ParamLimits

0x7e26,	// (0x00015659) main_radioblah_text_pane

0x7e38,	// (0x0001566b) main_radioblah_info_pane_g1_ParamLimits

0x7ed1,	// (0x00015704) main_radioblah_info_pane_t4_ParamLimits

0x7ed1,	// (0x00015704) main_radioblah_info_pane_t4

0x9444,	// (0x00016c77) main_sp_fs_calendar_pane

0x8744,	// (0x00015f77) main_phacti_pane_g1

0x874c,	// (0x00015f7f) phacti_note_pane_ParamLimits

0x874c,	// (0x00015f7f) phacti_note_pane

0xe7cb,	// (0x0001bffe) phacti_term_pane_ParamLimits

0xe7cb,	// (0x0001bffe) phacti_term_pane

0xe7e0,	// (0x0001c013) phacti_note_pane_t1_ParamLimits

0xe7e0,	// (0x0001c013) phacti_note_pane_t1

0xe7f7,	// (0x0001c02a) phacti_term_pane_g1

0xe7ff,	// (0x0001c032) phacti_term_pane_t1_ParamLimits

0xe7ff,	// (0x0001c032) phacti_term_pane_t1

0xe829,	// (0x0001c05c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe831,	// (0x0001c064) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0001d5fb) popup_sp_fs_calendar_preview_list_single_pane_g

0xe839,	// (0x0001c06c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe839,	// (0x0001c06c) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe84f,	// (0x0001c082) aid_popup_sp_fs_bg_corner_pane

0xc293,	// (0x00019ac6) popup_sp_fs_calendar_preview_bg_pane_g1

0x93d3,	// (0x00016c06) popup_sp_fs_calendar_preview_bg_pane

0xe857,	// (0x0001c08a) popup_sp_fs_calendar_preview_list_pane

0x9444,	// (0x00016c77) bg_main_sp_fs_cale_pane_ParamLimits

0x9444,	// (0x00016c77) bg_main_sp_fs_cale_pane

0xe868,	// (0x0001c09b) listscroll_cale_mrui_pane_ParamLimits

0xe868,	// (0x0001c09b) listscroll_cale_mrui_pane

0xe87c,	// (0x0001c0af) listscroll_sp_fs_schedule_track_pane

0xe885,	// (0x0001c0b8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe885,	// (0x0001c0b8) main_sp_fs_ctrlbar_pane_cp01

0xe896,	// (0x0001c0c9) main_sp_fs_ribbon_pane

0xe89e,	// (0x0001c0d1) popup_sp_fs_cale_preview_window

0x87a3,	// (0x00015fd6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x87a3,	// (0x00015fd6) list_single_sp_fs_schedule_track_pane

0x9444,	// (0x00016c77) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9444,	// (0x00016c77) bg_sp_fs_highlight_list_pane_cp03

0x87b7,	// (0x00015fea) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x87b7,	// (0x00015fea) list_single_sp_fs_schedule_track_pane_g1

0x87c3,	// (0x00015ff6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x87c3,	// (0x00015ff6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0001d600) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0001d600) list_single_sp_fs_schedule_track_pane_g

0x87cf,	// (0x00016002) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x87cf,	// (0x00016002) list_single_sp_fs_schedule_track_pane_t1

0x87f1,	// (0x00016024) sp_fs_schedule_track_pane_ParamLimits

0x87f1,	// (0x00016024) sp_fs_schedule_track_pane

0xe8b0,	// (0x0001c0e3) sp_fs_schedule_track_pane_g1

0xe8b8,	// (0x0001c0eb) sp_fs_schedule_track_pane_g2

0xe8c0,	// (0x0001c0f3) sp_fs_schedule_track_pane_g3

0xe8c8,	// (0x0001c0fb) sp_fs_schedule_track_pane_g4

0xe8d0,	// (0x0001c103) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0001d605) sp_fs_schedule_track_pane_g

0xd037,	// (0x0001a86a) bg_sp_fs_schedule_viewer_highlight_g1

0xa16b,	// (0x0001799e) bg_sp_fs_schedule_viewer_highlight_g2

0xd03f,	// (0x0001a872) bg_sp_fs_schedule_viewer_highlight_g3

0xd047,	// (0x0001a87a) bg_sp_fs_schedule_viewer_highlight_g4

0xd2ca,	// (0x0001aafd) bg_sp_fs_schedule_viewer_highlight_g5

0xd057,	// (0x0001a88a) bg_sp_fs_schedule_viewer_highlight_g6

0xd05f,	// (0x0001a892) bg_sp_fs_schedule_viewer_highlight_g7

0xd067,	// (0x0001a89a) bg_sp_fs_schedule_viewer_highlight_g8

0xa14b,	// (0x0001797e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0001d610) bg_sp_fs_schedule_viewer_highlight_g

0x93d3,	// (0x00016c06) bg_main_sp_fs_ribbon_pane

0x8806,	// (0x00016039) main_sp_fs_ribbon_pane_g1

0xe8d8,	// (0x0001c10b) main_sp_fs_ribbon_pane_t1

0x880f,	// (0x00016042) main_sp_fs_ribbon_pane_t2

0xe8e7,	// (0x0001c11a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0001d623) main_sp_fs_ribbon_pane_t

0xe8f6,	// (0x0001c129) main_sp_fs_ribbon_scheduler_pane

0xe8fe,	// (0x0001c131) bg_main_sp_fs_ribbon_pane_g1

0xe907,	// (0x0001c13a) bg_main_sp_fs_ribbon_pane_g2

0xe910,	// (0x0001c143) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0001d62a) bg_main_sp_fs_ribbon_pane_g

0xe918,	// (0x0001c14b) main_sp_fs_ribbon_scheduler_pane_g1

0xe921,	// (0x0001c154) main_sp_fs_ribbon_scheduler_pane_g2

0xe92a,	// (0x0001c15d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0001d631) main_sp_fs_ribbon_scheduler_pane_g

0xe933,	// (0x0001c166) list_cale_mrui_pane

0x881e,	// (0x00016051) sp_fs_scroll_pane_cp07_ParamLimits

0x881e,	// (0x00016051) sp_fs_scroll_pane_cp07

0x8834,	// (0x00016067) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8834,	// (0x00016067) bg_sp_fs_schedule_viewer_highlight

0xe93c,	// (0x0001c16f) list_single_sp_fs_schedule_track_pane_cp01

0xe944,	// (0x0001c177) list_sp_fs_schedule_track_pane

0xe94c,	// (0x0001c17f) sp_fs_scroll_pane_cp06_ParamLimits

0xe94c,	// (0x0001c17f) sp_fs_scroll_pane_cp06

0xc293,	// (0x00019ac6) bgmain_sp_fs_calendar_pane_g1

0x8846,	// (0x00016079) list_single_cale_mrui_pane_ParamLimits

0x8846,	// (0x00016079) list_single_cale_mrui_pane

0xe95e,	// (0x0001c191) list_single_cale_mrui_row_pane_ParamLimits

0xe95e,	// (0x0001c191) list_single_cale_mrui_row_pane

0xe96b,	// (0x0001c19e) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe96b,	// (0x0001c19e) list_single_cale_mrui_row_pane_g1

0xe9a3,	// (0x0001c1d6) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe9a3,	// (0x0001c1d6) list_single_cale_mrui_row_pane_t1

0x886d,	// (0x000160a0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x886d,	// (0x000160a0) list_single_cale_mrui_row_pane_t2

0xe9b5,	// (0x0001c1e8) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe9b5,	// (0x0001c1e8) list_single_cale_mrui_row_pane_t3

0xe9e4,	// (0x0001c217) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9e4,	// (0x0001c217) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0a,	// (0x0001d63d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0a,	// (0x0001d63d) list_single_cale_mrui_row_pane_t

0x88d3,	// (0x00016106) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x88d3,	// (0x00016106) list_single_cmail_header_editor_pane_bg_cp01

0x88f7,	// (0x0001612a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x88f7,	// (0x0001612a) list_single_cmail_header_editor_pane_bg_cp02

0x8913,	// (0x00016146) main_radioblah_text_pane_t1_ParamLimits

0x8913,	// (0x00016146) main_radioblah_text_pane_t1

0xea13,	// (0x0001c246) cam6_indi_pane_cp01

0xea1b,	// (0x0001c24e) cam6_mode_pane_cp01

0xea23,	// (0x0001c256) cam6_pano_pane

0xea2c,	// (0x0001c25f) cam6_zoom_pane_cp01

0xea36,	// (0x0001c269) cam6_pano_image_pane

0xea3f,	// (0x0001c272) cam6_pano_pane_g1

0xdf66,	// (0x0001b799) cam6_pano_pane_g2

0xea48,	// (0x0001c27b) cam6_pano_pane_g3

0xea51,	// (0x0001c284) cam6_pano_pane_g4

0xc873,	// (0x0001a0a6) cam6_pano_pane_g5

0xea5a,	// (0x0001c28d) cam6_pano_pane_g6

0xea62,	// (0x0001c295) cam6_pano_pane_g7

0xea6a,	// (0x0001c29d) cam6_pano_pane_g8

0xea73,	// (0x0001c2a6) cam6_pano_pane_g9

0x0008,

0xfe13,	// (0x0001d646) cam6_pano_pane_g

0x93d3,	// (0x00016c06) main_browser_tag_pane

0xe7ac,	// (0x0001bfdf) grid_navstr_albumart_pane

0xea7e,	// (0x0001c2b1) cell_navstr_albumart_pane_ParamLimits

0xea7e,	// (0x0001c2b1) cell_navstr_albumart_pane

0xea9a,	// (0x0001c2cd) cell_navstr_albumart_pane_g1

0xbb77,	// (0x000193aa) cell_navstr_albumart_pane_g2

0xbb87,	// (0x000193ba) cell_navstr_albumart_pane_g3

0xbb7f,	// (0x000193b2) cell_navstr_albumart_pane_g4

0x0003,

0xfe26,	// (0x0001d659) cell_navstr_albumart_pane_g

0x892e,	// (0x00016161) bt_list_pane_ParamLimits

0x892e,	// (0x00016161) bt_list_pane

0x8944,	// (0x00016177) bt_list_pane_t1

0x8953,	// (0x00016186) bt_list_pane_t2

0x0001,

0xfe2f,	// (0x0001d662) bt_list_pane_t

0x93d3,	// (0x00016c06) main_cale_prevew_pane

0x8962,	// (0x00016195) popup_cale_preview_window_ParamLimits

0x8962,	// (0x00016195) popup_cale_preview_window

0x9444,	// (0x00016c77) bg_popup_preview_window_pane_cp05_ParamLimits

0x9444,	// (0x00016c77) bg_popup_preview_window_pane_cp05

0xeaa2,	// (0x0001c2d5) list_cale_preview_pane_ParamLimits

0xeaa2,	// (0x0001c2d5) list_cale_preview_pane

0x897d,	// (0x000161b0) list_double_cale_preview_pane_ParamLimits

0x897d,	// (0x000161b0) list_double_cale_preview_pane

0x8991,	// (0x000161c4) list_single_cale_preview_pane_ParamLimits

0x8991,	// (0x000161c4) list_single_cale_preview_pane

0x89a9,	// (0x000161dc) list_single_cale_preview_pane_g1

0x89b1,	// (0x000161e4) list_single_cale_preview_pane_t1_ParamLimits

0x89b1,	// (0x000161e4) list_single_cale_preview_pane_t1

0x89c6,	// (0x000161f9) list_double_cale_preview_pane_g1

0x89ce,	// (0x00016201) list_double_cale_preview_pane_t1_ParamLimits

0x89ce,	// (0x00016201) list_double_cale_preview_pane_t1

0x89e3,	// (0x00016216) list_double_cale_preview_pane_t2_ParamLimits

0x89e3,	// (0x00016216) list_double_cale_preview_pane_t2

0x0001,

0xfe34,	// (0x0001d667) list_double_cale_preview_pane_t_ParamLimits

0xfe34,	// (0x0001d667) list_double_cale_preview_pane_t

0x93d3,	// (0x00016c06) main_ezdial_pane

0x9444,	// (0x00016c77) main_sp_fs_email_pane_ParamLimits

0x80e9,	// (0x0001591c) cmail_ddmenu_btn01_pane_ParamLimits

0x80e9,	// (0x0001591c) cmail_ddmenu_btn01_pane

0x80fc,	// (0x0001592f) cmail_ddmenu_btn02_pane_ParamLimits

0x80fc,	// (0x0001592f) cmail_ddmenu_btn02_pane

0x811f,	// (0x00015952) cmail_ddmenu_btn03_pane_ParamLimits

0x811f,	// (0x00015952) cmail_ddmenu_btn03_pane

0x8143,	// (0x00015976) main_sp_fs_ctrlbar_pane_ParamLimits

0x8167,	// (0x0001599a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x85ec,	// (0x00015e1f) list_cmail_body_pane_ParamLimits

0xe6d0,	// (0x0001bf03) bg_button_pane_cp12

0xe6e5,	// (0x0001bf18) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6e5,	// (0x0001bf18) list_single_cmail_header_detail_pane_g3

0x867e,	// (0x00015eb1) list_single_cmail_header_detail_pane_t2_ParamLimits

0x867e,	// (0x00015eb1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0001d5ec) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0001d5ec) list_single_cmail_header_detail_pane_t

0xe814,	// (0x0001c047) phacti_term_pane_t2_ParamLimits

0xe814,	// (0x0001c047) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0001d5f6) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0001d5f6) phacti_term_pane_t

0xeaae,	// (0x0001c2e1) aid_size_list_single_double

0x89fb,	// (0x0001622e) popup_ezdial_listscroll_window

0x8a17,	// (0x0001624a) popup_number_entry_window_cp01

0xa8f1,	// (0x00018124) bg_popup_call_pane_cp09

0xeaba,	// (0x0001c2ed) ezdial_list_pane

0xeac2,	// (0x0001c2f5) scroll_pane_cp23

0xbd5e,	// (0x00019591) bg_button_pane_cp028_ParamLimits

0xbd5e,	// (0x00019591) bg_button_pane_cp028

0x8a25,	// (0x00016258) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8a25,	// (0x00016258) cmail_ddmenu_btn01_pane_g1

0x8a31,	// (0x00016264) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8a31,	// (0x00016264) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe39,	// (0x0001d66c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe39,	// (0x0001d66c) cmail_ddmenu_btn01_pane_g

0xeaca,	// (0x0001c2fd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaca,	// (0x0001c2fd) cmail_ddmenu_btn01_pane_t1

0xbd5e,	// (0x00019591) bg_button_pane_cp029_ParamLimits

0xbd5e,	// (0x00019591) bg_button_pane_cp029

0x8a3d,	// (0x00016270) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8a3d,	// (0x00016270) cmail_ddmenu_btn02_pane_g1

0x8a55,	// (0x00016288) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8a55,	// (0x00016288) cmail_ddmenu_btn02_pane_t1

0x9444,	// (0x00016c77) bg_button_pane_cp031_ParamLimits

0x9444,	// (0x00016c77) bg_button_pane_cp031

0x8a3d,	// (0x00016270) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8a3d,	// (0x00016270) cmail_ddmenu_btn03_pane_g1

0x8a55,	// (0x00016288) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8a55,	// (0x00016288) cmail_ddmenu_btn03_pane_t1

0x5c07,	// (0x0001343a) cell_dialer2_keypad_pane_t1_ParamLimits

0x5c21,	// (0x00013454) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5c21,	// (0x00013454) cell_dialer2_keypad_pane_t1_copy1

0x7a19,	// (0x0001524c) ncimui_group_button_pane

0x9444,	// (0x00016c77) main_sp_fs_calendar_pane_ParamLimits

0x8604,	// (0x00015e37) list_single_cmail_header_caption_pane_ParamLimits

0xe85f,	// (0x0001c092) aid_recal_txt_sm_pane

0x93d3,	// (0x00016c06) mian_recal_day_pane

0xe89e,	// (0x0001c0d1) popup_sp_fs_cale_preview_window_ParamLimits

0x93d3,	// (0x00016c06) list_recal_day_pane

0xeb01,	// (0x0001c334) list_single_recal_day_pane_ParamLimits

0xeb01,	// (0x0001c334) list_single_recal_day_pane

0xeb13,	// (0x0001c346) list_single_recal_day_pane_g1_ParamLimits

0xeb13,	// (0x0001c346) list_single_recal_day_pane_g1

0xeb1f,	// (0x0001c352) list_single_recal_day_pane_g2_ParamLimits

0xeb1f,	// (0x0001c352) list_single_recal_day_pane_g2

0xeb2b,	// (0x0001c35e) list_single_recal_day_pane_g3_ParamLimits

0xeb2b,	// (0x0001c35e) list_single_recal_day_pane_g3

0x8a79,	// (0x000162ac) list_single_recal_day_pane_g4_ParamLimits

0x8a79,	// (0x000162ac) list_single_recal_day_pane_g4

0xeb37,	// (0x0001c36a) list_single_recal_day_pane_g5_ParamLimits

0xeb37,	// (0x0001c36a) list_single_recal_day_pane_g5

0xeb43,	// (0x0001c376) list_single_recal_day_pane_g6_ParamLimits

0xeb43,	// (0x0001c376) list_single_recal_day_pane_g6

0x0005,

0xfe48,	// (0x0001d67b) list_single_recal_day_pane_g_ParamLimits

0xfe48,	// (0x0001d67b) list_single_recal_day_pane_g

0xeb4f,	// (0x0001c382) list_single_recal_day_pane_t1

0xeb5d,	// (0x0001c390) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0001d688) list_single_recal_day_pane_t

0x8a87,	// (0x000162ba) ncimui_query_button_pane_ParamLimits

0x8a87,	// (0x000162ba) ncimui_query_button_pane

0x8a97,	// (0x000162ca) ncimui_query_button_pane_t1_ParamLimits

0x8a97,	// (0x000162ca) ncimui_query_button_pane_t1

0xeb6b,	// (0x0001c39e) ncimui_query_button_pane_t2_ParamLimits

0xeb6b,	// (0x0001c39e) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0001d68d) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0001d68d) ncimui_query_button_pane_t

0x8aaa,	// (0x000162dd) query_button_pane_ParamLimits

0x8aaa,	// (0x000162dd) query_button_pane

0x93d3,	// (0x00016c06) bg_button_pane_cp0028

0xeb7e,	// (0x0001c3b1) query_button_pane_t1

0x3ca7,	// (0x000114da) main_tport_pane_ParamLimits

0x84d2,	// (0x00015d05) bg_popup_window_pane_cp01_ParamLimits

0x84d2,	// (0x00015d05) bg_popup_window_pane_cp01

0x84e8,	// (0x00015d1b) heading_pane_cp08_ParamLimits

0x84e8,	// (0x00015d1b) heading_pane_cp08

0x84f9,	// (0x00015d2c) heading_pane_cp07_ParamLimits

0x84f9,	// (0x00015d2c) heading_pane_cp07

0xe69b,	// (0x0001bece) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0001d5d9) cell_tport_appsw_pane_g

0x31f2,	// (0x00010a25) input_candi_list_open_g1

0xa35e,	// (0x00017b91) list_cale_time_pane_g6_ParamLimits

0xa35e,	// (0x00017b91) list_cale_time_pane_g6

0x4a95,	// (0x000122c8) aid_size_touch_calib_1_ParamLimits

0x4a95,	// (0x000122c8) aid_size_touch_calib_1

0x4aa1,	// (0x000122d4) aid_size_touch_calib_2_ParamLimits

0x4aa1,	// (0x000122d4) aid_size_touch_calib_2

0x4ab7,	// (0x000122ea) aid_size_touch_calib_3_ParamLimits

0x4ab7,	// (0x000122ea) aid_size_touch_calib_3

0x4ad5,	// (0x00012308) aid_size_touch_calib_4_ParamLimits

0x4ad5,	// (0x00012308) aid_size_touch_calib_4

0x4aeb,	// (0x0001231e) main_touch_calib_button_group_pane_ParamLimits

0x4aeb,	// (0x0001231e) main_touch_calib_button_group_pane

0x4b02,	// (0x00012335) main_touch_calib_pane_g1_ParamLimits

0x4b0e,	// (0x00012341) main_touch_calib_pane_g2_ParamLimits

0x4b1a,	// (0x0001234d) main_touch_calib_pane_g3_ParamLimits

0x4b26,	// (0x00012359) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0001cfb7) main_touch_calib_pane_g_ParamLimits

0x4b32,	// (0x00012365) main_touch_calib_pane_t1_ParamLimits

0x4b4c,	// (0x0001237f) main_touch_calib_pane_t2_ParamLimits

0x4b66,	// (0x00012399) main_touch_calib_pane_t3_ParamLimits

0x4b7a,	// (0x000123ad) main_touch_calib_pane_t4_ParamLimits

0x4b8e,	// (0x000123c1) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0001cfc0) main_touch_calib_pane_t_ParamLimits

0xc63d,	// (0x00019e70) list_single_fp_cale_pane_g3_ParamLimits

0xc63d,	// (0x00019e70) list_single_fp_cale_pane_g3

0x9444,	// (0x00016c77) bg_button_pane_cp012_ParamLimits

0x9444,	// (0x00016c77) bg_vkb2_func_pane_cp03_ParamLimits

0x6ce9,	// (0x0001451c) cell_vitu2_function_top_pane_g1_ParamLimits

0x9444,	// (0x00016c77) bg_vkb2_func_pane_cp04_ParamLimits

0x79cd,	// (0x00015200) main_ncimui_button_group_pane_ParamLimits

0x79cd,	// (0x00015200) main_ncimui_button_group_pane

0x7a07,	// (0x0001523a) main_ncimui_pane_t3_ParamLimits

0x7a07,	// (0x0001523a) main_ncimui_pane_t3

0xe7c2,	// (0x0001bff5) phacti_button_group_pane

0xeaae,	// (0x0001c2e1) aid_size_list_single_double_ParamLimits

0x89fb,	// (0x0001622e) popup_ezdial_listscroll_window_ParamLimits

0x8a17,	// (0x0001624a) popup_number_entry_window_cp01_ParamLimits

0x8abd,	// (0x000162f0) phacti_button_pane_ParamLimits

0x8abd,	// (0x000162f0) phacti_button_pane

0x93d3,	// (0x00016c06) bg_button_pane_cp14

0xeb8c,	// (0x0001c3bf) phacti_button_pane_t1

0x8ace,	// (0x00016301) main_touch_calib_button_pane_ParamLimits

0x8ace,	// (0x00016301) main_touch_calib_button_pane

0x9bad,	// (0x000173e0) bg_button_pane_cp18_ParamLimits

0x9bad,	// (0x000173e0) bg_button_pane_cp18

0xeb9a,	// (0x0001c3cd) main_touch_calib_button_pane_t1_ParamLimits

0xeb9a,	// (0x0001c3cd) main_touch_calib_button_pane_t1

0xebb0,	// (0x0001c3e3) main_touch_calib_button_pane_t2_ParamLimits

0xebb0,	// (0x0001c3e3) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0001d692) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0001d692) main_touch_calib_button_pane_t

0x93d3,	// (0x00016c06) cell_ncimui_button_pane

0x93d3,	// (0x00016c06) bg_button_pane_cp032

0xebce,	// (0x0001c401) cell_ncimui_button_pane_t1

0xce17,	// (0x0001a64a) image3_infobar_pane_ParamLimits

0xce17,	// (0x0001a64a) image3_infobar_pane

0x7da0,	// (0x000155d3) fs_bigclock_status_pane_ParamLimits

0x7da0,	// (0x000155d3) fs_bigclock_status_pane

0x7dad,	// (0x000155e0) main_fs_bigclock_clock_pane_ParamLimits

0x7dad,	// (0x000155e0) main_fs_bigclock_clock_pane

0x7dc0,	// (0x000155f3) main_fs_bigclock_indi_pane_ParamLimits

0x7dc0,	// (0x000155f3) main_fs_bigclock_indi_pane

0x7ddb,	// (0x0001560e) main_fs_bigclock_swipe_pane_ParamLimits

0x7ddb,	// (0x0001560e) main_fs_bigclock_swipe_pane

0x93d3,	// (0x00016c06) main_fs_clock_dumped_data

0xe073,	// (0x0001b8a6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe073,	// (0x0001b8a6) list_single_fs_bigclock_indicator_pane_g1

0xe093,	// (0x0001b8c6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe093,	// (0x0001b8c6) list_single_fs_bigclock_indicator_pane_g2

0xe0ad,	// (0x0001b8e0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0ad,	// (0x0001b8e0) list_single_fs_bigclock_indicator_pane_g3

0xe0c9,	// (0x0001b8fc) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0c9,	// (0x0001b8fc) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x0001d4ca) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x0001d4ca) list_single_fs_bigclock_indicator_pane_g

0xe0ef,	// (0x0001b922) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0ef,	// (0x0001b922) list_single_fs_bigclock_indicator_pane_t1

0xe117,	// (0x0001b94a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe117,	// (0x0001b94a) list_single_fs_bigclock_indicator_pane_t2

0xe13f,	// (0x0001b972) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe13f,	// (0x0001b972) list_single_fs_bigclock_indicator_pane_t3

0xe169,	// (0x0001b99c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe169,	// (0x0001b99c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x0001d4d5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x0001d4d5) list_single_fs_bigclock_indicator_pane_t

0xebdc,	// (0x0001c40f) image3_infobar_fav_pane_ParamLimits

0xebdc,	// (0x0001c40f) image3_infobar_fav_pane

0xebec,	// (0x0001c41f) image3_infobar_loc_pane_ParamLimits

0xebec,	// (0x0001c41f) image3_infobar_loc_pane

0xec02,	// (0x0001c435) image3_infobar_time_pane_ParamLimits

0xec02,	// (0x0001c435) image3_infobar_time_pane

0xc293,	// (0x00019ac6) image3_infobar_time_pane_g1

0xec12,	// (0x0001c445) image3_infobar_time_pane_t1

0xc293,	// (0x00019ac6) image3_infobar_loc_pane_g1

0xec20,	// (0x0001c453) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x0001d697) image3_infobar_loc_pane_g

0xec28,	// (0x0001c45b) image3_infobar_loc_pane_t1

0xc293,	// (0x00019ac6) image3_infobar_fav_pane_g1

0xec36,	// (0x0001c469) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x0001d69c) image3_infobar_fav_pane_g

0xec3e,	// (0x0001c471) fs_bigclock_status_battery_pane

0xec47,	// (0x0001c47a) fs_bigclock_status_signal_pane

0xec50,	// (0x0001c483) fs_bigclock_status_title_pane

0xec59,	// (0x0001c48c) fs_bigclock_status_signal_pane_g1

0xec62,	// (0x0001c495) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0001d6a1) fs_bigclock_status_signal_pane_g

0xec6a,	// (0x0001c49d) fs_bigclock_status_battery_pane_g1

0xec73,	// (0x0001c4a6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x0001d6a6) fs_bigclock_status_battery_pane_g

0xec7b,	// (0x0001c4ae) fs_bigclock_status_title_pane_t1

0xc293,	// (0x00019ac6) main_fs_bigclock_clock_pane_g1

0xec89,	// (0x0001c4bc) main_fs_bigclock_clock_pane_g2

0xec89,	// (0x0001c4bc) main_fs_bigclock_clock_pane_g3

0xec89,	// (0x0001c4bc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x0001d6ab) main_fs_bigclock_clock_pane_g

0xec95,	// (0x0001c4c8) main_fs_bigclock_clock_pane_t1

0xeca3,	// (0x0001c4d6) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0001d6b4) main_fs_bigclock_clock_pane_t

0xecb2,	// (0x0001c4e5) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecb2,	// (0x0001c4e5) list_single_fs_bigclock_indicator_pane

0x8ae3,	// (0x00016316) list_single_fs_bigclock_pane_ParamLimits

0x8ae3,	// (0x00016316) list_single_fs_bigclock_pane

0xeccc,	// (0x0001c4ff) main_fs_bigclock_indicator_pane_t1

0xecdb,	// (0x0001c50e) list_single_fs_bigclock_pane_g1

0xece3,	// (0x0001c516) list_single_fs_bigclock_pane_t1

0xc293,	// (0x00019ac6) main_fs_bigclock_swipe_pane_g1

0xed21,	// (0x0001c554) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x0001d6c5) main_fs_bigclock_swipe_pane_g

0xed29,	// (0x0001c55c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed29,	// (0x0001c55c) main_fs_bigclock_swipe_pane_t1

0x2976,	// (0x000101a9) call_type_pane_ParamLimits

0x93d3,	// (0x00016c06) main_btmg_pane

0xe997,	// (0x0001c1ca) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe997,	// (0x0001c1ca) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe05,	// (0x0001d638) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0001d638) list_single_cale_mrui_row_pane_g

0xeae8,	// (0x0001c31b) list_recal_vselct_arw_lo_pane

0xeaf0,	// (0x0001c323) list_recal_vselct_arw_up_pane

0xeaf8,	// (0x0001c32b) list_recal_vselct_pane

0xed46,	// (0x0001c579) btmg_button_pane

0x8b49,	// (0x0001637c) main_btmg_pane_g1

0x93d3,	// (0x00016c06) bg_button_pane_cp044

0xed50,	// (0x0001c583) btmg_button_pane_t1

0xbd56,	// (0x00019589) aid_listscroll_gen

0x9444,	// (0x00016c77) main_cntbar_detail_pane

0xe6b1,	// (0x0001bee4) list_cmail_folder_pane

0xe6c1,	// (0x0001bef4) sp_fs_scroll_pane_cp03_ParamLimits

0x8b53,	// (0x00016386) list_single_fs_dyc_pane_cp01_ParamLimits

0x8b53,	// (0x00016386) list_single_fs_dyc_pane_cp01

0xed5e,	// (0x0001c591) aid_size_cmail_indent

0xed67,	// (0x0001c59a) list_single_dyc_row_pane_cp01

0x8ba3,	// (0x000163d6) cntbar_detail_list_pane_ParamLimits

0x8ba3,	// (0x000163d6) cntbar_detail_list_pane

0x8bf5,	// (0x00016428) main_cntbar_detail_cont_pane_ParamLimits

0x8bf5,	// (0x00016428) main_cntbar_detail_cont_pane

0x2910,	// (0x00010143) scroll_pane_cp032_ParamLimits

0x2910,	// (0x00010143) scroll_pane_cp032

0x8c09,	// (0x0001643c) cntbar_detail_list_event_pane_ParamLimits

0x8c09,	// (0x0001643c) cntbar_detail_list_event_pane

0x8bb5,	// (0x000163e8) cntbar_detail_list_shct_pane

0xa1b9,	// (0x000179ec) aid_list_gen

0xed70,	// (0x0001c5a3) aid_scroll

0xed79,	// (0x0001c5ac) aid_size_touch_scroll_bar

0xed82,	// (0x0001c5b5) aid_list_double

0xed8b,	// (0x0001c5be) aid_list_single

0x8c19,	// (0x0001644c) aid_list_single_lg

0xed94,	// (0x0001c5c7) aid_list_z_g_a_sm

0xed9c,	// (0x0001c5cf) aid_list_z_g_d

0xeda4,	// (0x0001c5d7) aid_txt_z_prm

0xedb2,	// (0x0001c5e5) aid_txt_z_prm_cp01

0xedc0,	// (0x0001c5f3) aid_txt_z_sec

0x8c22,	// (0x00016455) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8c22,	// (0x00016455) main_cntbar_detail_cont_pane_g1

0x8c36,	// (0x00016469) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8c36,	// (0x00016469) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x0001d6ca) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x0001d6ca) main_cntbar_detail_cont_pane_g

0xedce,	// (0x0001c601) main_cntbar_detail_cont_pane_t1

0xeddc,	// (0x0001c60f) main_cntbar_detail_cont_pane_t2

0xedea,	// (0x0001c61d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0001d6cf) main_cntbar_detail_cont_pane_t

0x8c46,	// (0x00016479) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8c46,	// (0x00016479) cell_cntbar_detail_list_shct_pane

0xedf8,	// (0x0001c62b) cntbar_detail_list_shct_pane_g1

0xee01,	// (0x0001c634) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x0001d6d6) cntbar_detail_list_shct_pane_g

0x8c58,	// (0x0001648b) cntbar_detail_list_event_pane_g1_ParamLimits

0x8c58,	// (0x0001648b) cntbar_detail_list_event_pane_g1

0x8c64,	// (0x00016497) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c64,	// (0x00016497) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0001d6db) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0001d6db) cntbar_detail_list_event_pane_g

0x8cd2,	// (0x00016505) cntbar_detail_list_event_pane_t1_ParamLimits

0x8cd2,	// (0x00016505) cntbar_detail_list_event_pane_t1

0x8ce7,	// (0x0001651a) cntbar_detail_list_event_pane_t2_ParamLimits

0x8ce7,	// (0x0001651a) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0001d6e8) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0001d6e8) cntbar_detail_list_event_pane_t

0xc293,	// (0x00019ac6) cell_cntbar_detail_list_shct_pane_g1

0x2d1a,	// (0x0001054d) navi_pane_mv_g3

0x9444,	// (0x00016c77) main_cntbar_detail_pane_ParamLimits

0x93d3,	// (0x00016c06) main_notif_wgt_pane

0xcbd5,	// (0x0001a408) aid_tch_main_mp4_pane_g4

0xcda9,	// (0x0001a5dc) popup_slider_window_cp02

0xeadf,	// (0x0001c312) list_recal_day_event_pane

0x8b73,	// (0x000163a6) cntbar_detail_btn_pane_ParamLimits

0x8b73,	// (0x000163a6) cntbar_detail_btn_pane

0x8b8b,	// (0x000163be) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b8b,	// (0x000163be) cntbar_detail_btn_pane_cp01

0x8bb5,	// (0x000163e8) cntbar_detail_list_shct_pane_ParamLimits

0x8bc5,	// (0x000163f8) cntbar_detail_pane_g1_ParamLimits

0x8bc5,	// (0x000163f8) cntbar_detail_pane_g1

0x8bd9,	// (0x0001640c) cntbar_detail_pane_t1_ParamLimits

0x8bd9,	// (0x0001640c) cntbar_detail_pane_t1

0x8c70,	// (0x000164a3) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c70,	// (0x000164a3) cntbar_detail_list_event_pane_g3

0x8c88,	// (0x000164bb) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c88,	// (0x000164bb) cntbar_detail_list_event_pane_g4

0x8ca0,	// (0x000164d3) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ca0,	// (0x000164d3) cntbar_detail_list_event_pane_g5

0x8cb8,	// (0x000164eb) cntbar_detail_list_event_pane_g6_ParamLimits

0x8cb8,	// (0x000164eb) cntbar_detail_list_event_pane_g6

0x8cfc,	// (0x0001652f) cntbar_detail_list_event_pane_t3_ParamLimits

0x8cfc,	// (0x0001652f) cntbar_detail_list_event_pane_t3

0x8d0e,	// (0x00016541) popup_notif_wgt_window_ParamLimits

0x8d0e,	// (0x00016541) popup_notif_wgt_window

0x8d27,	// (0x0001655a) popup_submenu_window_cp01_ParamLimits

0x8d27,	// (0x0001655a) popup_submenu_window_cp01

0xa8f1,	// (0x00018124) bg_popup_window_pane_cp10

0xee0a,	// (0x0001c63d) listscroll_notif_wgt_pane

0xee14,	// (0x0001c647) list_notif_wgt_window

0xee1d,	// (0x0001c650) scroll_pane_cp033

0xee26,	// (0x0001c659) list_notif_wgt_row_pane_ParamLimits

0xee26,	// (0x0001c659) list_notif_wgt_row_pane

0xee3a,	// (0x0001c66d) aid_size_list_notif_wgt_del

0xee43,	// (0x0001c676) list_notif_wgt_row_pane_g1

0xee4b,	// (0x0001c67e) list_notif_wgt_row_pane_g2

0xee53,	// (0x0001c686) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x0001d6ef) list_notif_wgt_row_pane_g

0xee5c,	// (0x0001c68f) list_notif_wgt_row_pane_t1

0xee6a,	// (0x0001c69d) list_notif_wgt_row_pane_t2

0xee78,	// (0x0001c6ab) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0001d6f6) list_notif_wgt_row_pane_t

0xd30a,	// (0x0001ab3d) list_recal_day_event_pane_g1

0xee86,	// (0x0001c6b9) list_recal_day_event_pane_t1

0x93d3,	// (0x00016c06) bg_button_pane_cp045

0xee95,	// (0x0001c6c8) cntbar_detail_btn_pane_t1

0xbd5e,	// (0x00019591) main_callh_pane_ParamLimits

0xbd5e,	// (0x00019591) main_callh_pane

0x93d3,	// (0x00016c06) main_coverflow0_pane

0x93d3,	// (0x00016c06) main_wgtman_pane

0x7de9,	// (0x0001561c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7de9,	// (0x0001561c) main_fs_bigclock_unlock_btn_pane

0xe693,	// (0x0001bec6) bg_button_pane_cp16

0x8596,	// (0x00015dc9) cell_tport_appsw_pane_g3

0x8d39,	// (0x0001656c) cf0_flow_pane_ParamLimits

0x8d39,	// (0x0001656c) cf0_flow_pane

0xeea3,	// (0x0001c6d6) listscroll_cf0_pane

0xeeac,	// (0x0001c6df) main_cf0_pane_g1

0x8d4e,	// (0x00016581) main_cf0_pane_t1_ParamLimits

0x8d4e,	// (0x00016581) main_cf0_pane_t1

0x8d66,	// (0x00016599) main_cf0_pane_t2_ParamLimits

0x8d66,	// (0x00016599) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0001d6fd) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0001d6fd) main_cf0_pane_t

0xeeb6,	// (0x0001c6e9) scroll_pane_cp11

0x8d7e,	// (0x000165b1) cf0_flow_pane_g1

0x8d8a,	// (0x000165bd) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0001d702) cf0_flow_pane_g

0x8d96,	// (0x000165c9) cf0_flow_pane_t1

0x93d3,	// (0x00016c06) main_call6_pane

0x93d3,	// (0x00016c06) main_calllock_pane

0x8da8,	// (0x000165db) call6_btn_grp_pane_ParamLimits

0x8da8,	// (0x000165db) call6_btn_grp_pane

0x8dc4,	// (0x000165f7) call6_pane_g1_ParamLimits

0x8dc4,	// (0x000165f7) call6_pane_g1

0x8dda,	// (0x0001660d) popup_call6_1st_window_ParamLimits

0x8dda,	// (0x0001660d) popup_call6_1st_window

0x8deb,	// (0x0001661e) popup_call6_2nd_window_ParamLimits

0x8deb,	// (0x0001661e) popup_call6_2nd_window

0x8dfc,	// (0x0001662f) cell_call6_btn_pane_ParamLimits

0x8dfc,	// (0x0001662f) cell_call6_btn_pane

0xa8f1,	// (0x00018124) bg_popup_call2_in_pane_cp03

0xeec1,	// (0x0001c6f4) popup_call6_1st_window_g1

0xeec9,	// (0x0001c6fc) popup_call6_1st_window_g2

0xeed1,	// (0x0001c704) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0001d707) popup_call6_1st_window_g

0xeed9,	// (0x0001c70c) popup_call6_1st_window_t1

0xeee8,	// (0x0001c71b) popup_call6_1st_window_t2

0xeef8,	// (0x0001c72b) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x0001d70e) popup_call6_1st_window_t

0xa8f1,	// (0x00018124) bg_popup_call2_in_pane_cp04

0xeec1,	// (0x0001c6f4) popup_call6_2nd_window_g1

0xeec9,	// (0x0001c6fc) popup_call6_2nd_window_g2

0xeed1,	// (0x0001c704) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0001d707) popup_call6_2nd_window_g

0xeed9,	// (0x0001c70c) popup_call6_2nd_window_t1

0x93d3,	// (0x00016c06) bg_button_pane_cp15

0xef08,	// (0x0001c73b) cell_call6_btn_pane_g1

0xef11,	// (0x0001c744) cell_call6_btn_pane_t1

0x8e10,	// (0x00016643) listscroll_wgtman_pane_ParamLimits

0x8e10,	// (0x00016643) listscroll_wgtman_pane

0x8e33,	// (0x00016666) wgtman_btn_pane_ParamLimits

0x8e33,	// (0x00016666) wgtman_btn_pane

0xa7b7,	// (0x00017fea) aid_scroll_copy1

0xef20,	// (0x0001c753) list_wgtman_pane

0x8e76,	// (0x000166a9) wgtman_btn_pane_g1_ParamLimits

0x8e76,	// (0x000166a9) wgtman_btn_pane_g1

0x8ea2,	// (0x000166d5) wgtman_btn_pane_t1_ParamLimits

0x8ea2,	// (0x000166d5) wgtman_btn_pane_t1

0xef2a,	// (0x0001c75d) wgtman_btn_pane_t2_ParamLimits

0xef2a,	// (0x0001c75d) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0001d715) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0001d715) wgtman_btn_pane_t

0xef41,	// (0x0001c774) listrow_wgtman_pane_ParamLimits

0xef41,	// (0x0001c774) listrow_wgtman_pane

0xef55,	// (0x0001c788) listrow_wgtman_pane_g1

0x8edf,	// (0x00016712) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x0001d71a) listrow_wgtman_pane_g

0xef5e,	// (0x0001c791) listrow_wgtman_pane_t1

0xef6c,	// (0x0001c79f) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x0001d71f) listrow_wgtman_pane_t

0xef7a,	// (0x0001c7ad) wait_bar_pane_cp09

0xef82,	// (0x0001c7b5) main_calllock_btn_pane

0xef8c,	// (0x0001c7bf) main_calllock_pane_g1

0x93d3,	// (0x00016c06) bg_button_pane_cp17

0xef98,	// (0x0001c7cb) main_calllock_btn_pane_g1

0xefa1,	// (0x0001c7d4) main_calllock_btn_pane_t1

0x93d3,	// (0x00016c06) main_dialer3_pane

0x93d3,	// (0x00016c06) main_fmrd2_pane

0xc293,	// (0x00019ac6) main_fs_bigclock_unlock_btn_pane_g1

0xefb8,	// (0x0001c7eb) main_fs_bigclock_unlock_btn_pane_t1

0x8ee9,	// (0x0001671c) area_fmrd2_info_pane_ParamLimits

0x8ee9,	// (0x0001671c) area_fmrd2_info_pane

0x8efc,	// (0x0001672f) area_fmrd2_visual_pane_ParamLimits

0x8efc,	// (0x0001672f) area_fmrd2_visual_pane

0x8f0a,	// (0x0001673d) fmrd2_indi_pane_ParamLimits

0x8f0a,	// (0x0001673d) fmrd2_indi_pane

0x8f17,	// (0x0001674a) area_fmrd2_visual_pane_g1

0x8f1f,	// (0x00016752) area_fmrd2_visual_pane_t1

0x8f2f,	// (0x00016762) area_fmrd2_visual_pane_t2

0x8f3f,	// (0x00016772) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x0001d729) area_fmrd2_visual_pane_t

0x8f4f,	// (0x00016782) area_fmrd2_info_pane_g1

0x8f57,	// (0x0001678a) area_fmrd2_info_pane_t1

0x8f67,	// (0x0001679a) area_fmrd2_info_pane_t2

0x8f77,	// (0x000167aa) area_fmrd2_info_pane_t3

0x8f87,	// (0x000167ba) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x0001d730) area_fmrd2_info_pane_t

0x8f97,	// (0x000167ca) fmrd2_indi_pane_t1

0x8fa7,	// (0x000167da) fmrd2_indi_pane_t2

0x8fb7,	// (0x000167ea) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x0001d739) fmrd2_indi_pane_t

0xe0d8,	// (0x0001b90b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0d8,	// (0x0001b90b) list_single_fs_bigclock_indicator_pane_g5

0xe17e,	// (0x0001b9b1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe17e,	// (0x0001b9b1) list_single_fs_bigclock_indicator_pane_t5

0x8760,	// (0x00015f93) aid_cell_bcale_month_pane_ParamLimits

0x8760,	// (0x00015f93) aid_cell_bcale_month_pane

0x8772,	// (0x00015fa5) bcale_month_pane_ParamLimits

0x8772,	// (0x00015fa5) bcale_month_pane

0x878a,	// (0x00015fbd) bcale_preview_pane_ParamLimits

0x878a,	// (0x00015fbd) bcale_preview_pane

0xece3,	// (0x0001c516) list_single_fs_bigclock_pane_t1_ParamLimits

0xecfd,	// (0x0001c530) list_single_fs_bigclock_pane_t2_ParamLimits

0xecfd,	// (0x0001c530) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0001d6c0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0001d6c0) list_single_fs_bigclock_pane_t

0xefb0,	// (0x0001c7e3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0001d724) main_fs_bigclock_unlock_btn_pane_g

0x8fc7,	// (0x000167fa) aid_dia3_key_size_ParamLimits

0x8fc7,	// (0x000167fa) aid_dia3_key_size

0x8fd6,	// (0x00016809) aid_dia3_listrow_size_ParamLimits

0x8fd6,	// (0x00016809) aid_dia3_listrow_size

0x8fe4,	// (0x00016817) dia3_keypad_fun_pane_ParamLimits

0x8fe4,	// (0x00016817) dia3_keypad_fun_pane

0x9000,	// (0x00016833) dia3_keypad_num_pane_ParamLimits

0x9000,	// (0x00016833) dia3_keypad_num_pane

0x9019,	// (0x0001684c) dia3_listscroll_pane_ParamLimits

0x9019,	// (0x0001684c) dia3_listscroll_pane

0x902e,	// (0x00016861) dia3_numentry_pane_ParamLimits

0x902e,	// (0x00016861) dia3_numentry_pane

0xefec,	// (0x0001c81f) dia3_list_pane

0xeff7,	// (0x0001c82a) scroll_pane_cp12

0x93d3,	// (0x00016c06) bg_dia3_numentry_pane

0xf002,	// (0x0001c835) dia3_numentry_pane_t1

0x9041,	// (0x00016874) cell_dia3_key_num_pane

0x9049,	// (0x0001687c) cell_dia3_key0_fun_pane_ParamLimits

0x9049,	// (0x0001687c) cell_dia3_key0_fun_pane

0x905d,	// (0x00016890) cell_dia3_key1_fun_pane_ParamLimits

0x905d,	// (0x00016890) cell_dia3_key1_fun_pane

0x9075,	// (0x000168a8) dia3_listrow_pane

0xddf0,	// (0x0001b623) bg_dia3_numentry_pane_g1

0x93d3,	// (0x00016c06) bg_button_pane_cp21

0xf011,	// (0x0001c844) cell_dia3_key_num_pane_t1

0xf01f,	// (0x0001c852) cell_dia3_key_num_pane_t2

0xf02e,	// (0x0001c861) cell_dia3_key_num_pane_t3

0xf03d,	// (0x0001c870) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x0001d740) cell_dia3_key_num_pane_t

0x93d3,	// (0x00016c06) bg_button_pane_cp19

0x9087,	// (0x000168ba) cell_dia3_key0_fun_pane_g1

0x93d3,	// (0x00016c06) bg_button_pane_cp20

0x908f,	// (0x000168c2) cell_dia3_key1_fun_pane_g1

0x9097,	// (0x000168ca) area_left_week_number_pane

0x90a0,	// (0x000168d3) area_top_day_name_pane

0x90a9,	// (0x000168dc) frame_month_view_pane

0x90b5,	// (0x000168e8) grid_month_view_pane

0x90bf,	// (0x000168f2) cell_top_day_name_pane_ParamLimits

0x90bf,	// (0x000168f2) cell_top_day_name_pane

0x90db,	// (0x0001690e) cell_area_left_week_number_pane_ParamLimits

0x90db,	// (0x0001690e) cell_area_left_week_number_pane

0x90f1,	// (0x00016924) cell_month_view_pane_ParamLimits

0x90f1,	// (0x00016924) cell_month_view_pane

0xf04c,	// (0x0001c87f) frm_month_g1

0x9112,	// (0x00016945) frm_month_g2

0x911c,	// (0x0001694f) frm_month_g3

0x9126,	// (0x00016959) frm_month_g4

0x9130,	// (0x00016963) frm_month_g5

0x913a,	// (0x0001696d) frm_month_g6

0x9146,	// (0x00016979) frm_month_g7

0xf055,	// (0x0001c888) frm_month_g8

0x9152,	// (0x00016985) frm_month_g9

0x915b,	// (0x0001698e) frm_month_g10

0x9164,	// (0x00016997) frm_month_g11

0x916d,	// (0x000169a0) frm_month_g12

0x9176,	// (0x000169a9) frm_month_g13

0x917f,	// (0x000169b2) frm_month_g14

0x918a,	// (0x000169bd) frm_month_g15

0x9195,	// (0x000169c8) frm_month_g16

0x000f,

0xff16,	// (0x0001d749) frm_month_g

0x91a0,	// (0x000169d3) cell_top_day_name_pane_t1

0x91af,	// (0x000169e2) cell_area_left_week_number_pane_g1

0x91a0,	// (0x000169d3) cell_area_left_week_number_pane_t1

0xc293,	// (0x00019ac6) cell_month_view_pane_g1

0x91b7,	// (0x000169ea) cell_month_view_pane_t1

0x93d3,	// (0x00016c06) main_fps_pane

0xe3f0,	// (0x0001bc23) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3f0,	// (0x0001bc23) cmail_ddmenu_btn02_pane_cp1

0xe40c,	// (0x0001bc3f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe40c,	// (0x0001bc3f) cmail_ddmenu_btn02_pane_cp2

0x8a49,	// (0x0001627c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8a49,	// (0x0001627c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3e,	// (0x0001d671) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3e,	// (0x0001d671) cmail_ddmenu_btn02_pane_g

0x8a67,	// (0x0001629a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8a67,	// (0x0001629a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe43,	// (0x0001d676) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe43,	// (0x0001d676) cmail_ddmenu_btn02_pane_t

0x91c6,	// (0x000169f9) fps_text_pane_ParamLimits

0x91c6,	// (0x000169f9) fps_text_pane

0x91dd,	// (0x00016a10) main_fps_pane_g1_ParamLimits

0x91dd,	// (0x00016a10) main_fps_pane_g1

0x91f5,	// (0x00016a28) wait_bar_pane_cp010_ParamLimits

0x91f5,	// (0x00016a28) wait_bar_pane_cp010

0x9208,	// (0x00016a3b) fps_text_pane_t1_ParamLimits

0x9208,	// (0x00016a3b) fps_text_pane_t1

0x6083,	// (0x000138b6) cam4_image_uncrop_pane_g1

0x608c,	// (0x000138bf) cam4_image_uncrop_pane_g2

0x6097,	// (0x000138ca) cam4_image_uncrop_pane_g3

0x60a0,	// (0x000138d3) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0001d14f) cam4_image_uncrop_pane_g

0x9075,	// (0x000168a8) dia3_listrow_pane_ParamLimits

0x93d3,	// (0x00016c06) main_phob2_pane

0x855d,	// (0x00015d90) cell_tport_appsw_pane_cp02_ParamLimits

0x855d,	// (0x00015d90) cell_tport_appsw_pane_cp02

0x8571,	// (0x00015da4) cell_tport_appsw_pane_cp03_ParamLimits

0x8571,	// (0x00015da4) cell_tport_appsw_pane_cp03

0x93d3,	// (0x00016c06) phob2_contact_card_pane

0x93d3,	// (0x00016c06) phob2_listscroll_pane

0xf05e,	// (0x0001c891) phob2_list_pane

0xf066,	// (0x0001c899) scroll_pane_cp034

0x9220,	// (0x00016a53) phob2_cc_data_pane_ParamLimits

0x9220,	// (0x00016a53) phob2_cc_data_pane

0x9241,	// (0x00016a74) phob2_cc_listscroll_pane_ParamLimits

0x9241,	// (0x00016a74) phob2_cc_listscroll_pane

0x9263,	// (0x00016a96) list_double_large_graphic_phob2_pane_ParamLimits

0x9263,	// (0x00016a96) list_double_large_graphic_phob2_pane

0x9278,	// (0x00016aab) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9278,	// (0x00016aab) list_double_large_graphic_phob2_pane_g1

0x9285,	// (0x00016ab8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9285,	// (0x00016ab8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x0001d76a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x0001d76a) list_double_large_graphic_phob2_pane_g

0x9291,	// (0x00016ac4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9291,	// (0x00016ac4) list_double_large_graphic_phob2_pane_t1

0x92a6,	// (0x00016ad9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x92a6,	// (0x00016ad9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x0001d76f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x0001d76f) list_double_large_graphic_phob2_pane_t

0x93d3,	// (0x00016c06) list_highlight_pane_cp024

0xf06e,	// (0x0001c8a1) phob2_cc_button_pane

0x92b8,	// (0x00016aeb) phob2_cc_data_pane_g1_ParamLimits

0x92b8,	// (0x00016aeb) phob2_cc_data_pane_g1

0x92ce,	// (0x00016b01) phob2_cc_data_pane_g2_ParamLimits

0x92ce,	// (0x00016b01) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x0001d774) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x0001d774) phob2_cc_data_pane_g

0x92e2,	// (0x00016b15) phob2_cc_data_pane_t1_ParamLimits

0x92e2,	// (0x00016b15) phob2_cc_data_pane_t1

0x92fc,	// (0x00016b2f) phob2_cc_data_pane_t2_ParamLimits

0x92fc,	// (0x00016b2f) phob2_cc_data_pane_t2

0x9316,	// (0x00016b49) phob2_cc_data_pane_t3_ParamLimits

0x9316,	// (0x00016b49) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x0001d779) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x0001d779) phob2_cc_data_pane_t

0xf076,	// (0x0001c8a9) phob2_cc_list_pane_ParamLimits

0xf076,	// (0x0001c8a9) phob2_cc_list_pane

0xefc6,	// (0x0001c7f9) scroll_pane_cp035_ParamLimits

0xefc6,	// (0x0001c7f9) scroll_pane_cp035

0x9444,	// (0x00016c77) bg_button_pane_cp033

0xf082,	// (0x0001c8b5) phob2_cc_button_pane_g1

0xf08e,	// (0x0001c8c1) phob2_cc_button_pane_t1

0xf0a3,	// (0x0001c8d6) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x0001d780) phob2_cc_button_pane_t

0x9330,	// (0x00016b63) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9330,	// (0x00016b63) list_double_large_graphic_phob2_cc_pane

0x9345,	// (0x00016b78) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9345,	// (0x00016b78) list_double_large_graphic_phob2_cc_pane_g1

0x9351,	// (0x00016b84) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9351,	// (0x00016b84) list_double_large_graphic_phob2_cc_pane_g2

0x935d,	// (0x00016b90) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x935d,	// (0x00016b90) list_double_large_graphic_phob2_cc_pane_g3

0x9369,	// (0x00016b9c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9369,	// (0x00016b9c) list_double_large_graphic_phob2_cc_pane_g4

0x9375,	// (0x00016ba8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9375,	// (0x00016ba8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x0001d785) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x0001d785) list_double_large_graphic_phob2_cc_pane_g

0x9381,	// (0x00016bb4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9381,	// (0x00016bb4) list_double_large_graphic_phob2_cc_pane_t1

0x93aa,	// (0x00016bdd) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x93aa,	// (0x00016bdd) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x0001d790) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x0001d790) list_double_large_graphic_phob2_cc_pane_t

0xf0b5,	// (0x0001c8e8) list_highlight_pane_cp025_ParamLimits

0xf0b5,	// (0x0001c8e8) list_highlight_pane_cp025

0x9444,	// (0x00016c77) bg_button_pane_cp033_ParamLimits

0xf082,	// (0x0001c8b5) phob2_cc_button_pane_g1_ParamLimits

0xf08e,	// (0x0001c8c1) phob2_cc_button_pane_t1_ParamLimits

0xf0a3,	// (0x0001c8d6) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x0001d780) phob2_cc_button_pane_t_ParamLimits

0x0f13,	// (0x0000e746) popup_wgtman_window

0xd155,	// (0x0001a988) scroll_pane_cp038

0x8e58,	// (0x0001668b) wgtman_btn_pane_cp_01_ParamLimits

0x8e58,	// (0x0001668b) wgtman_btn_pane_cp_01

0xf0c3,	// (0x0001c8f6) wgtman_content_pane

0xf0cc,	// (0x0001c8ff) wgtman_heading_pane

0x93d3,	// (0x00016c06) bg_heading_pane_cp02

0xf0d5,	// (0x0001c908) wgtman_heading_pane_g1

0xf0dd,	// (0x0001c910) wgtman_heading_pane_t1

0xf0eb,	// (0x0001c91e) scroll_pane_cp036

0xf0f3,	// (0x0001c926) wgtman_list_pane

0xefd2,	// (0x0001c805) wgtman_list_pane_t1_ParamLimits

0xefd2,	// (0x0001c805) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
