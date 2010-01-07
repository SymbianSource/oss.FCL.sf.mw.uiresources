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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000594bb };

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
0x0d67,	// (0x0005a222) Screen

0x0d73,	// (0x0005a22e) application_window

0x0de5,	// (0x0005a2a0) area_bottom_pane_ParamLimits

0x0de5,	// (0x0005a2a0) area_bottom_pane

0x0e43,	// (0x0005a2fe) area_top_pane_ParamLimits

0x0e43,	// (0x0005a2fe) area_top_pane

0x0ea0,	// (0x0005a35b) call_video_uplink_pane_ParamLimits

0x0ea0,	// (0x0005a35b) call_video_uplink_pane

0x0ed1,	// (0x0005a38c) main_pane_ParamLimits

0x0ed1,	// (0x0005a38c) main_pane

0xe7bb,	// (0x00067c76) context_pane

0x41db,	// (0x0005d696) navi_pane

0x420b,	// (0x0005d6c6) popup_cale_events_window_ParamLimits

0x420b,	// (0x0005d6c6) popup_cale_events_window

0xe7ce,	// (0x00067c89) popup_mup_playback_window

0x4223,	// (0x0005d6de) signal_pane

0xa0e3,	// (0x0006359e) main_browser_pane

0xacba,	// (0x00064175) main_burst_pane

0x3edd,	// (0x0005d398) main_calc_pane

0xacba,	// (0x00064175) main_cale_day_pane

0xa0e3,	// (0x0006359e) main_cale_month_pane

0xacba,	// (0x00064175) main_cale_week_pane

0xacba,	// (0x00064175) main_call_pane

0x9d91,	// (0x0006324c) main_call_poc_pane

0xacba,	// (0x00064175) main_camera_pane

0xacba,	// (0x00064175) main_chi_dic_pane

0xab5c,	// (0x00064017) main_clock_pane

0x9d91,	// (0x0006324c) main_fmradio_pane

0xacba,	// (0x00064175) main_graph_messa_pane

0x9d91,	// (0x0006324c) main_help_pane

0xa0e3,	// (0x0006359e) main_im_pane

0x9fec,	// (0x000634a7) main_image_pane_ParamLimits

0x9fec,	// (0x000634a7) main_image_pane

0x9d91,	// (0x0006324c) main_location2_pane

0xacba,	// (0x00064175) main_location_pane

0x9d91,	// (0x0006324c) main_messa_pane

0x9d91,	// (0x0006324c) main_mp2_pane

0xacba,	// (0x00064175) main_mp_pane

0x9d91,	// (0x0006324c) main_msg_pane

0x9d91,	// (0x0006324c) main_mup_eq_pane

0x9d91,	// (0x0006324c) main_mup_pane

0xacba,	// (0x00064175) main_notes_pane

0x9d91,	// (0x0006324c) main_pec_pane

0x9d91,	// (0x0006324c) main_phob_pane

0x9d91,	// (0x0006324c) main_pinb_pane

0x9d91,	// (0x0006324c) main_postcard_pane

0x9d91,	// (0x0006324c) main_qdial_pane

0xacba,	// (0x00064175) main_skin_pane

0x9d91,	// (0x0006324c) main_smil2_pane

0xacba,	// (0x00064175) main_smil_pane

0xacba,	// (0x00064175) main_video_pane

0xacba,	// (0x00064175) main_video_tele_pane

0x9fec,	// (0x000634a7) main_viewer_pane_ParamLimits

0x9fec,	// (0x000634a7) main_viewer_pane

0xacba,	// (0x00064175) main_vorec_pane

0x3f33,	// (0x0005d3ee) popup_blid_sat_info_window_ParamLimits

0x3f33,	// (0x0005d3ee) popup_blid_sat_info_window

0x3f97,	// (0x0005d452) popup_dyc_status_message_window_ParamLimits

0x3f97,	// (0x0005d452) popup_dyc_status_message_window

0x3fb1,	// (0x0005d46c) popup_grid_large_graphic_window_ParamLimits

0x3fb1,	// (0x0005d46c) popup_grid_large_graphic_window

0x4073,	// (0x0005d52e) popup_loc_request_window_ParamLimits

0x4073,	// (0x0005d52e) popup_loc_request_window

0x41af,	// (0x0005d66a) popup_wml_address_window_ParamLimits

0x41af,	// (0x0005d66a) popup_wml_address_window

0x3d1b,	// (0x0005d1d6) call_muted_g1

0x39ac,	// (0x0005ce67) popup_call_audio_conf_window_ParamLimits

0x39ac,	// (0x0005ce67) popup_call_audio_conf_window

0x3d2b,	// (0x0005d1e6) popup_call_audio_first_window_ParamLimits

0x3d2b,	// (0x0005d1e6) popup_call_audio_first_window

0x3da1,	// (0x0005d25c) popup_call_audio_in_window_ParamLimits

0x3da1,	// (0x0005d25c) popup_call_audio_in_window

0x3ddd,	// (0x0005d298) popup_call_audio_out_window_ParamLimits

0x3ddd,	// (0x0005d298) popup_call_audio_out_window

0x3e17,	// (0x0005d2d2) popup_call_audio_second_window_ParamLimits

0x3e17,	// (0x0005d2d2) popup_call_audio_second_window

0x3e6d,	// (0x0005d328) popup_call_audio_wait_window_ParamLimits

0x3e6d,	// (0x0005d328) popup_call_audio_wait_window

0x3ea2,	// (0x0005d35d) popup_number_entry_window_ParamLimits

0x3ea2,	// (0x0005d35d) popup_number_entry_window

0x997e,	// (0x00062e39) bg_popup_call_pane_cp05_ParamLimits

0x997e,	// (0x00062e39) bg_popup_call_pane_cp05

0x999e,	// (0x00062e59) popup_number_entry_window_t1

0x99b1,	// (0x00062e6c) popup_number_entry_window_t2

0x99c3,	// (0x00062e7e) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x000685b6) popup_number_entry_window_t

0x99d5,	// (0x00062e90) text_title_cp2

0x99e8,	// (0x00062ea3) bg_popup_call_pane_cp_ParamLimits

0x99e8,	// (0x00062ea3) bg_popup_call_pane_cp

0x99f6,	// (0x00062eb1) call_thumbnail_pane

0x99fe,	// (0x00062eb9) popup_call_audio_in_window_g1_ParamLimits

0x99fe,	// (0x00062eb9) popup_call_audio_in_window_g1

0x9a0a,	// (0x00062ec5) popup_call_audio_in_window_g2_ParamLimits

0x9a0a,	// (0x00062ec5) popup_call_audio_in_window_g2

0x9a16,	// (0x00062ed1) popup_call_audio_in_window_g3_ParamLimits

0x9a16,	// (0x00062ed1) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x000685bf) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x000685bf) popup_call_audio_in_window_g

0x9a22,	// (0x00062edd) popup_call_audio_in_window_t1_ParamLimits

0x9a22,	// (0x00062edd) popup_call_audio_in_window_t1

0x9a3e,	// (0x00062ef9) popup_call_audio_in_window_t2_ParamLimits

0x9a3e,	// (0x00062ef9) popup_call_audio_in_window_t2

0x9a5a,	// (0x00062f15) popup_call_audio_in_window_t3_ParamLimits

0x9a5a,	// (0x00062f15) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x000685c6) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x000685c6) popup_call_audio_in_window_t

0x99e8,	// (0x00062ea3) bg_popup_call_pane_cp01_ParamLimits

0x99e8,	// (0x00062ea3) bg_popup_call_pane_cp01

0x99f6,	// (0x00062eb1) call_thumbnail_pane_cp02

0x9a6d,	// (0x00062f28) call_type_pane_cp022

0x9a75,	// (0x00062f30) popup_call_audio_out_window_g1_ParamLimits

0x9a75,	// (0x00062f30) popup_call_audio_out_window_g1

0x9a87,	// (0x00062f42) popup_call_audio_out_window_g2_ParamLimits

0x9a87,	// (0x00062f42) popup_call_audio_out_window_g2

0x9a93,	// (0x00062f4e) popup_call_audio_out_window_g3_ParamLimits

0x9a93,	// (0x00062f4e) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x000685cd) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x000685cd) popup_call_audio_out_window_g

0x9aa5,	// (0x00062f60) popup_call_audio_out_window_t1_ParamLimits

0x9aa5,	// (0x00062f60) popup_call_audio_out_window_t1

0x9abd,	// (0x00062f78) popup_call_audio_out_window_t2_ParamLimits

0x9abd,	// (0x00062f78) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x000685d4) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x000685d4) popup_call_audio_out_window_t

0x9ad2,	// (0x00062f8d) bg_popup_call_pane_ParamLimits

0x9ad2,	// (0x00062f8d) bg_popup_call_pane

0x1090,	// (0x0005a54b) call_thumbnail_pane_cp_ParamLimits

0x1090,	// (0x0005a54b) call_thumbnail_pane_cp

0x9b56,	// (0x00063011) call_type_pane_cp01_ParamLimits

0x9b56,	// (0x00063011) call_type_pane_cp01

0x9b9a,	// (0x00063055) popup_call_audio_first_window_g1_ParamLimits

0x9b9a,	// (0x00063055) popup_call_audio_first_window_g1

0x9be6,	// (0x000630a1) popup_call_audio_first_window_g2_ParamLimits

0x9be6,	// (0x000630a1) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x000685d9) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x000685d9) popup_call_audio_first_window_g

0x9c2a,	// (0x000630e5) popup_call_audio_first_window_t1_ParamLimits

0x9c2a,	// (0x000630e5) popup_call_audio_first_window_t1

0x9cd6,	// (0x00063191) popup_call_audio_first_window_t4_ParamLimits

0x9cd6,	// (0x00063191) popup_call_audio_first_window_t4

0x9d62,	// (0x0006321d) popup_call_audio_first_window_t5_ParamLimits

0x9d62,	// (0x0006321d) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x000685de) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x000685de) popup_call_audio_first_window_t

0x9d91,	// (0x0006324c) bg_popup_call_pane_cp02

0x9d9b,	// (0x00063256) call_type_pane_cp023

0x9da3,	// (0x0006325e) popup_call_audio_wait_window_g1

0x9dab,	// (0x00063266) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000685e5) popup_call_audio_wait_window_g

0x9db3,	// (0x0006326e) popup_call_audio_wait_window_t3

0x9dc1,	// (0x0006327c) bg_popup_call_pane_cp03_ParamLimits

0x9dc1,	// (0x0006327c) bg_popup_call_pane_cp03

0x9e21,	// (0x000632dc) call_thumbnail_pane_cp011_ParamLimits

0x9e21,	// (0x000632dc) call_thumbnail_pane_cp011

0x9e2d,	// (0x000632e8) call_type_pane_cp034_ParamLimits

0x9e2d,	// (0x000632e8) call_type_pane_cp034

0x9e69,	// (0x00063324) popup_call_audio_second_window_g1_ParamLimits

0x9e69,	// (0x00063324) popup_call_audio_second_window_g1

0x9ea5,	// (0x00063360) popup_call_audio_second_window_g2_ParamLimits

0x9ea5,	// (0x00063360) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x000685ea) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x000685ea) popup_call_audio_second_window_g

0x9ee1,	// (0x0006339c) popup_call_audio_second_window_t1_ParamLimits

0x9ee1,	// (0x0006339c) popup_call_audio_second_window_t1

0x9f62,	// (0x0006341d) popup_call_audio_second_window_t2_ParamLimits

0x9f62,	// (0x0006341d) popup_call_audio_second_window_t2

0x9f98,	// (0x00063453) popup_call_audio_second_window_t3_ParamLimits

0x9f98,	// (0x00063453) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x000685ef) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x000685ef) popup_call_audio_second_window_t

0x9d91,	// (0x0006324c) bg_popup_call_pane_cp04

0x9fce,	// (0x00063489) list_conf_pane

0x9fd6,	// (0x00063491) popup_call_audio_conf_window_t1

0x9fe4,	// (0x0006349f) call_thumbnail_pane_g1

0x9fec,	// (0x000634a7) bg_pinb_pane_ParamLimits

0x9fec,	// (0x000634a7) bg_pinb_pane

0x9ffa,	// (0x000634b5) find_pinb_pane

0xa003,	// (0x000634be) listscroll_pinb_pane_ParamLimits

0xa003,	// (0x000634be) listscroll_pinb_pane

0xa012,	// (0x000634cd) pinb_bg_pane_g1

0x10b4,	// (0x0005a56f) pinb_bg_pane_g2

0x10c0,	// (0x0005a57b) pinb_bg_pane_g3

0x10cc,	// (0x0005a587) pinb_bg_pane_g4

0x10d8,	// (0x0005a593) pinb_bg_pane_g5

0x10e4,	// (0x0005a59f) pinb_bg_pane_g6

0x10ef,	// (0x0005a5aa) pinb_bg_pane_g7

0x10fa,	// (0x0005a5b5) pinb_bg_pane_g8

0x1105,	// (0x0005a5c0) pinb_bg_pane_g9

0x110f,	// (0x0005a5ca) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x000685f6) pinb_bg_pane_g

0x112c,	// (0x0005a5e7) grid_pinb_pane

0x1137,	// (0x0005a5f2) list_pinb_pane

0x1142,	// (0x0005a5fd) scroll_pane_cp01_ParamLimits

0x1142,	// (0x0005a5fd) scroll_pane_cp01

0xa01c,	// (0x000634d7) find_pinb_pane_g1_ParamLimits

0xa01c,	// (0x000634d7) find_pinb_pane_g1

0xa034,	// (0x000634ef) find_pinb_pane_t1

0xa046,	// (0x00063501) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00068610) find_pinb_pane_t

0xa05b,	// (0x00063516) input_focus_pane_cp01_ParamLimits

0xa05b,	// (0x00063516) input_focus_pane_cp01

0x1154,	// (0x0005a60f) cell_pinb_pane_ParamLimits

0x1154,	// (0x0005a60f) cell_pinb_pane

0x1176,	// (0x0005a631) cell_pinb_pane_g1_ParamLimits

0x1176,	// (0x0005a631) cell_pinb_pane_g1

0x118a,	// (0x0005a645) cell_pinb_pane_g2_ParamLimits

0x118a,	// (0x0005a645) cell_pinb_pane_g2

0xa067,	// (0x00063522) cell_pinb_pane_g3_ParamLimits

0xa067,	// (0x00063522) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00068615) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00068615) cell_pinb_pane_g

0x9d91,	// (0x0006324c) grid_highlight_pane_cp01

0x1196,	// (0x0005a651) list_pinb_item_pane_ParamLimits

0x1196,	// (0x0005a651) list_pinb_item_pane

0x9d91,	// (0x0006324c) list_highlight_pane_cp02

0x11a9,	// (0x0005a664) list_pinb_item_pane_g1_ParamLimits

0x11a9,	// (0x0005a664) list_pinb_item_pane_g1

0x11b6,	// (0x0005a671) list_pinb_item_pane_g2_ParamLimits

0x11b6,	// (0x0005a671) list_pinb_item_pane_g2

0x11c2,	// (0x0005a67d) list_pinb_item_pane_g3_ParamLimits

0x11c2,	// (0x0005a67d) list_pinb_item_pane_g3

0x11d3,	// (0x0005a68e) list_pinb_item_pane_g4_ParamLimits

0x11d3,	// (0x0005a68e) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0006861c) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0006861c) list_pinb_item_pane_g

0x11df,	// (0x0005a69a) list_pinb_item_pane_t1_ParamLimits

0x11df,	// (0x0005a69a) list_pinb_item_pane_t1

0x1214,	// (0x0005a6cf) calc_display_pane

0x123a,	// (0x0005a6f5) calc_paper_pane

0x125d,	// (0x0005a718) grid_calc_pane

0x9d91,	// (0x0006324c) bg_list_pane_cp01

0x128b,	// (0x0005a746) clock_g1

0x1293,	// (0x0005a74e) clock_g2

0x0001,

0xf16a,	// (0x00068625) clock_g

0x129b,	// (0x0005a756) clock_t1_ParamLimits

0x129b,	// (0x0005a756) clock_t1

0x12b0,	// (0x0005a76b) clock_t2_ParamLimits

0x12b0,	// (0x0005a76b) clock_t2

0x12c2,	// (0x0005a77d) clock_t3_ParamLimits

0x12c2,	// (0x0005a77d) clock_t3

0x12d4,	// (0x0005a78f) clock_t4_ParamLimits

0x12d4,	// (0x0005a78f) clock_t4

0x12e6,	// (0x0005a7a1) clock_t5_ParamLimits

0x12e6,	// (0x0005a7a1) clock_t5

0x12fb,	// (0x0005a7b6) clock_t6_ParamLimits

0x12fb,	// (0x0005a7b6) clock_t6

0x130d,	// (0x0005a7c8) clock_t7_ParamLimits

0x130d,	// (0x0005a7c8) clock_t7

0x131f,	// (0x0005a7da) clock_t8_ParamLimits

0x131f,	// (0x0005a7da) clock_t8

0x1333,	// (0x0005a7ee) clock_t9_ParamLimits

0x1333,	// (0x0005a7ee) clock_t9

0x0008,

0xf16f,	// (0x0006862a) clock_t_ParamLimits

0xf16f,	// (0x0006862a) clock_t

0xa07b,	// (0x00063536) popup_clock_analogue_window_cp02

0xa07b,	// (0x00063536) popup_clock_digital_window_cp01

0xa083,	// (0x0006353e) listscroll_help_pane

0x9d91,	// (0x0006324c) phob_pre_status_pane

0xa08d,	// (0x00063548) grid_qdial_pane

0x9d91,	// (0x0006324c) listscroll_mce_pane

0xa097,	// (0x00063552) bg_notes_pane

0xa0a1,	// (0x0006355c) list_notes_pane

0x1349,	// (0x0005a804) scroll_pane_cp06

0xa0ab,	// (0x00063566) bg_calc_paper_pane

0xa0c9,	// (0x00063584) list_calc_pane

0xa0e3,	// (0x0006359e) bg_calc_display_pane

0x1354,	// (0x0005a80f) calc_display_pane_t1

0x1366,	// (0x0005a821) calc_display_pane_t2

0xa0ef,	// (0x000635aa) calc_display_pane_t3

0x0002,

0xf182,	// (0x0006863d) calc_display_pane_t

0x1378,	// (0x0005a833) cell_calc_pane_ParamLimits

0x1378,	// (0x0005a833) cell_calc_pane

0xa101,	// (0x000635bc) bg_calc_paper_pane_g1

0xa10d,	// (0x000635c8) bg_calc_paper_pane_g2

0xa119,	// (0x000635d4) bg_calc_paper_pane_g3

0xa125,	// (0x000635e0) bg_calc_paper_pane_g4

0xa131,	// (0x000635ec) bg_calc_paper_pane_g5

0x13b3,	// (0x0005a86e) bg_calc_paper_pane_g6

0x13c6,	// (0x0005a881) bg_calc_paper_pane_g7

0x13d9,	// (0x0005a894) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00068644) bg_calc_paper_pane_g

0x13ea,	// (0x0005a8a5) calc_bg_paper_pane_g9

0x13fb,	// (0x0005a8b6) list_calc_item_pane_ParamLimits

0x13fb,	// (0x0005a8b6) list_calc_item_pane

0xa13d,	// (0x000635f8) list_calc_item_pane_g1

0xa14a,	// (0x00063605) list_calc_item_pane_t1_ParamLimits

0xa14a,	// (0x00063605) list_calc_item_pane_t1

0x140f,	// (0x0005a8ca) list_calc_item_pane_t2_ParamLimits

0x140f,	// (0x0005a8ca) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00068655) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00068655) list_calc_item_pane_t

0xa15c,	// (0x00063617) cell_calc_pane_g1

0xa166,	// (0x00063621) grid_highlight_pane_cp02

0xa188,	// (0x00063643) bg_calc_display_pane_g1

0xa191,	// (0x0006364c) bg_calc_display_pane_g2

0xa19b,	// (0x00063656) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0006865f) bg_calc_display_pane_g

0x1441,	// (0x0005a8fc) cell_qdial_pane_ParamLimits

0x1441,	// (0x0005a8fc) cell_qdial_pane

0x1457,	// (0x0005a912) cell_qdial_pane_g1_ParamLimits

0x1457,	// (0x0005a912) cell_qdial_pane_g1

0x146d,	// (0x0005a928) cell_qdial_pane_g2_ParamLimits

0x146d,	// (0x0005a928) cell_qdial_pane_g2

0xa1a4,	// (0x0006365f) cell_qdial_pane_g3_ParamLimits

0xa1a4,	// (0x0006365f) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00068666) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00068666) cell_qdial_pane_g

0x1493,	// (0x0005a94e) cell_qdial_pane_t1_ParamLimits

0x1493,	// (0x0005a94e) cell_qdial_pane_t1

0x14ab,	// (0x0005a966) cell_qdial_pane_t2_ParamLimits

0x14ab,	// (0x0005a966) cell_qdial_pane_t2

0x14be,	// (0x0005a979) cell_qdial_pane_t3_ParamLimits

0x14be,	// (0x0005a979) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0006866f) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0006866f) cell_qdial_pane_t

0x9d91,	// (0x0006324c) grid_highlight_pane_cp04

0xa1b0,	// (0x0006366b) thumbnail_qdial_pane_ParamLimits

0xa1b0,	// (0x0006366b) thumbnail_qdial_pane

0xa20c,	// (0x000636c7) list_help_pane

0xa215,	// (0x000636d0) scroll_pane_cp02

0x14d1,	// (0x0005a98c) help_list_pane_t1_ParamLimits

0x14d1,	// (0x0005a98c) help_list_pane_t1

0xa21e,	// (0x000636d9) bg_notes_pane_g2

0xa226,	// (0x000636e1) bg_notes_pane_g3

0xa22e,	// (0x000636e9) notes_bg_pane_g1

0xa236,	// (0x000636f1) notes_bg_pane_g4

0xa23e,	// (0x000636f9) notes_bg_pane_g5

0xa246,	// (0x00063701) notes_bg_pane_g6

0xa24e,	// (0x00063709) notes_bg_pane_g7

0xa256,	// (0x00063711) notes_bg_pane_g8

0xa25e,	// (0x00063719) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0006868d) notes_bg_pane_g

0x14f5,	// (0x0005a9b0) list_notes_text_pane_ParamLimits

0x14f5,	// (0x0005a9b0) list_notes_text_pane

0xa266,	// (0x00063721) list_notes_text_pane_g1

0x150c,	// (0x0005a9c7) list_notes_text_pane_t1

0xa0e3,	// (0x0006359e) listscroll_cale_week_pane

0x1537,	// (0x0005a9f2) bg_cale_heading_pane

0xa280,	// (0x0006373b) bg_cale_pane_cp01

0x1553,	// (0x0005aa0e) cale_week_corner_pane

0x1569,	// (0x0005aa24) cale_week_day_heading_pane

0x1585,	// (0x0005aa40) cale_week_scroll_pane_g1

0x159e,	// (0x0005aa59) cale_week_scroll_pane_g2

0x15af,	// (0x0005aa6a) cale_week_scroll_pane_g3

0x15c0,	// (0x0005aa7b) cale_week_scroll_pane_g4

0x15d1,	// (0x0005aa8c) cale_week_scroll_pane_g5

0x15e2,	// (0x0005aa9d) cale_week_scroll_pane_g6

0x15f3,	// (0x0005aaae) cale_week_scroll_pane_g7

0x1604,	// (0x0005aabf) cale_week_scroll_pane_g8

0x1615,	// (0x0005aad0) cale_week_scroll_pane_g9

0x1626,	// (0x0005aae1) cale_week_scroll_pane_g10

0x1637,	// (0x0005aaf2) cale_week_scroll_pane_g11

0x1648,	// (0x0005ab03) cale_week_scroll_pane_g12

0x1659,	// (0x0005ab14) cale_week_scroll_pane_g13

0x1672,	// (0x0005ab2d) cale_week_scroll_pane_g14

0x168b,	// (0x0005ab46) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0006869c) cale_week_scroll_pane_g

0x16a4,	// (0x0005ab5f) cale_week_time_pane

0x16b5,	// (0x0005ab70) grid_cale_week_pane

0x16d0,	// (0x0005ab8b) scroll_pane_cp08

0x16e8,	// (0x0005aba3) cell_cale_week_pane_ParamLimits

0x16e8,	// (0x0005aba3) cell_cale_week_pane

0x1730,	// (0x0005abeb) cale_week_day_heading_pane_t1

0x1744,	// (0x0005abff) cale_week_day_heading_pane_t2

0x1758,	// (0x0005ac13) cale_week_day_heading_pane_t3

0x176c,	// (0x0005ac27) cale_week_day_heading_pane_t4

0x1780,	// (0x0005ac3b) cale_week_day_heading_pane_t5

0x1794,	// (0x0005ac4f) cale_week_day_heading_pane_t6

0x17a8,	// (0x0005ac63) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x000686bb) cale_week_day_heading_pane_t

0xa2ab,	// (0x00063766) bg_cale_side_pane

0x17bc,	// (0x0005ac77) cale_week_time_pane_t1

0x17d4,	// (0x0005ac8f) cale_week_time_pane_t2

0x17ec,	// (0x0005aca7) cale_week_time_pane_t3

0x1804,	// (0x0005acbf) cale_week_time_pane_t4

0x181c,	// (0x0005acd7) cale_week_time_pane_t5

0x1834,	// (0x0005acef) cale_week_time_pane_t6

0x184c,	// (0x0005ad07) cale_week_time_pane_t7

0x1868,	// (0x0005ad23) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x000686ca) cale_week_time_pane_t

0x1888,	// (0x0005ad43) cell_cale_week_pane_g2

0x1899,	// (0x0005ad54) cell_cale_week_pane_g3_ParamLimits

0x1899,	// (0x0005ad54) cell_cale_week_pane_g3

0xa2b9,	// (0x00063774) grid_highlight_pane_cp07

0xa2c1,	// (0x0006377c) listscroll_gms_pane

0xa2cb,	// (0x00063786) grid_gms_pane

0xa2d4,	// (0x0006378f) listscroll_gms_pane_g1

0xa2dc,	// (0x00063797) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x000686db) listscroll_gms_pane_g

0x18b1,	// (0x0005ad6c) scroll_pane_cp010

0x18bc,	// (0x0005ad77) cell_gms_pane_ParamLimits

0x18bc,	// (0x0005ad77) cell_gms_pane

0x18d6,	// (0x0005ad91) cell_gms_pane_g1

0xa2e4,	// (0x0006379f) cell_gms_pane_g2

0xa2ec,	// (0x000637a7) cell_gms_pane_g3

0xa2f5,	// (0x000637b0) cell_gms_pane_g4

0x0003,

0xf225,	// (0x000686e0) cell_gms_pane_g

0xa2fe,	// (0x000637b9) grid_highlight_pane_cp09

0x3cc3,	// (0x0005d17e) phob_pre_status_pane_g1

0x3ccb,	// (0x0005d186) phob_pre_status_pane_g2

0x3cd3,	// (0x0005d18e) phob_pre_status_pane_g3

0x3cdb,	// (0x0005d196) phob_pre_status_pane_g4

0x0004,

0xf598,	// (0x00068a53) phob_pre_status_pane_g

0x3ceb,	// (0x0005d1a6) phob_pre_status_pane_t1

0x3cfb,	// (0x0005d1b6) phob_pre_status_pane_t2

0x3d0b,	// (0x0005d1c6) phob_pre_status_pane_t3

0x0002,

0xf5a3,	// (0x00068a5e) phob_pre_status_pane_t

0x9d91,	// (0x0006324c) bg_list_pane_cp05

0x18e6,	// (0x0005ada1) grid_vorec_pane

0xa306,	// (0x000637c1) vorec_t1

0xa314,	// (0x000637cf) vorec_t2

0xa322,	// (0x000637dd) vorec_t3

0xa330,	// (0x000637eb) vorec_t4

0xa33e,	// (0x000637f9) vorec_t5

0xa34c,	// (0x00063807) vorec_t6

0x0006,

0xf22e,	// (0x000686e9) vorec_t

0xa368,	// (0x00063823) wait_bar_pane_cp01

0x18f0,	// (0x0005adab) cell_vorec_pane_ParamLimits

0x18f0,	// (0x0005adab) cell_vorec_pane

0xa370,	// (0x0006382b) cell_vorec_pane_g1

0x9d91,	// (0x0006324c) grid_highlight_pane_cp05

0x191b,	// (0x0005add6) cams_zoom_pane

0x192a,	// (0x0005ade5) image_vga_pane

0x1944,	// (0x0005adff) main_camera_pane_g1

0x1956,	// (0x0005ae11) main_camera_pane_g2

0x1966,	// (0x0005ae21) main_camera_pane_g3

0x197a,	// (0x0005ae35) main_camera_pane_g4

0x198e,	// (0x0005ae49) main_camera_pane_g5

0x19a2,	// (0x0005ae5d) main_camera_pane_g6

0x19b6,	// (0x0005ae71) main_camera_pane_g7

0x0007,

0xf23d,	// (0x000686f8) main_camera_pane_g

0x19ca,	// (0x0005ae85) main_camera_pane_t1

0x19e0,	// (0x0005ae9b) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00068709) main_camera_pane_t

0x1a1e,	// (0x0005aed9) cams_zoom_pane_cp_ParamLimits

0x1a1e,	// (0x0005aed9) cams_zoom_pane_cp

0x1a46,	// (0x0005af01) image_cif_pane_ParamLimits

0x1a46,	// (0x0005af01) image_cif_pane

0x1a81,	// (0x0005af3c) image_subqcif_pane

0x1a8b,	// (0x0005af46) main_video_pane_g1_ParamLimits

0x1a8b,	// (0x0005af46) main_video_pane_g1

0x1aaf,	// (0x0005af6a) main_video_pane_g2_ParamLimits

0x1aaf,	// (0x0005af6a) main_video_pane_g2

0x1ae5,	// (0x0005afa0) main_video_pane_g3_ParamLimits

0x1ae5,	// (0x0005afa0) main_video_pane_g3

0x1b13,	// (0x0005afce) main_video_pane_g4_ParamLimits

0x1b13,	// (0x0005afce) main_video_pane_g4

0x1b41,	// (0x0005affc) main_video_pane_g5_ParamLimits

0x1b41,	// (0x0005affc) main_video_pane_g5

0xa386,	// (0x00063841) main_video_pane_g6_ParamLimits

0xa386,	// (0x00063841) main_video_pane_g6

0x0006,

0xf253,	// (0x0006870e) main_video_pane_g_ParamLimits

0xf253,	// (0x0006870e) main_video_pane_g

0x1b6a,	// (0x0005b025) main_video_pane_t1_ParamLimits

0x1b6a,	// (0x0005b025) main_video_pane_t1

0xa3a0,	// (0x0006385b) cams_zoom_pane_g1

0xa3a9,	// (0x00063864) cams_zoom_pane_g2

0xa3b2,	// (0x0006386d) cams_zoom_pane_g3

0xa3bb,	// (0x00063876) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0006871d) cams_zoom_pane_g

0x1bc7,	// (0x0005b082) grid_cams_pane

0x1be1,	// (0x0005b09c) linegrid_cams_pane

0x1bf5,	// (0x0005b0b0) cell_cams_pane_ParamLimits

0x1bf5,	// (0x0005b0b0) cell_cams_pane

0xa3c4,	// (0x0006387f) cams_burst_image_pane

0xa3cc,	// (0x00063887) cell_cams_pane_g1

0x9d91,	// (0x0006324c) grid_highlight_pane_cp03

0xa15c,	// (0x00063617) mp_bg_pane_g1

0x9d91,	// (0x0006324c) bg_list_pane_cp03

0xe68d,	// (0x00067b48) bg_mp_pane

0xe695,	// (0x00067b50) grid_mp_pane

0xe69d,	// (0x00067b58) media_player_g1

0xe6a7,	// (0x00067b62) media_player_t1

0xe6b5,	// (0x00067b70) media_player_t2

0xe6c3,	// (0x00067b7e) media_player_t3

0xe6d1,	// (0x00067b8c) media_player_t4

0xe6df,	// (0x00067b9a) media_player_t5

0xe6ed,	// (0x00067ba8) media_player_t6

0xe6fb,	// (0x00067bb6) media_player_t7

0x0006,

0x0329,	// (0x000597e4) media_player_t

0xe709,	// (0x00067bc4) wait_bar_pane_cp02

0xf584,	// (0x00068a3f) main_usb_pane_t

0x3cba,	// (0x0005d175) cell_mp_pane

0xa15c,	// (0x00063617) cell_mp_pane_g1

0x9d91,	// (0x0006324c) grid_highlight_pane_cp06

0xa3d4,	// (0x0006388f) grid_skin_colour_pane

0xa3dc,	// (0x00063897) list_highlight_pane_cp03

0x1d2e,	// (0x0005b1e9) skin_g1

0xa3e4,	// (0x0006389f) skin_t1

0xa3f3,	// (0x000638ae) skin_t2

0x0001,

0xf297,	// (0x00068752) skin_t

0x1d38,	// (0x0005b1f3) cell_skin_colour_pane_ParamLimits

0x1d38,	// (0x0005b1f3) cell_skin_colour_pane

0xa401,	// (0x000638bc) cell_skin_colour_pane_g1

0x1d94,	// (0x0005b24f) call_video_g1_ParamLimits

0x1d94,	// (0x0005b24f) call_video_g1

0x1db0,	// (0x0005b26b) call_video_g2_ParamLimits

0x1db0,	// (0x0005b26b) call_video_g2

0x0001,

0xf29c,	// (0x00068757) call_video_g_ParamLimits

0xf29c,	// (0x00068757) call_video_g

0x1de6,	// (0x0005b2a1) call_video_uplink_pane_cp1_ParamLimits

0x1de6,	// (0x0005b2a1) call_video_uplink_pane_cp1

0xa41b,	// (0x000638d6) call_video_uplink_pane_cp2

0x1e66,	// (0x0005b321) video_down_crop_pane_ParamLimits

0x1e66,	// (0x0005b321) video_down_crop_pane

0x1f2c,	// (0x0005b3e7) video_down_pane_ParamLimits

0x1f2c,	// (0x0005b3e7) video_down_pane

0xa423,	// (0x000638de) video_down_subqcif_pane_ParamLimits

0xa423,	// (0x000638de) video_down_subqcif_pane

0xa43d,	// (0x000638f8) video_down_subqcif_pane_cp_ParamLimits

0xa43d,	// (0x000638f8) video_down_subqcif_pane_cp

0xa463,	// (0x0006391e) im_reading_pane_ParamLimits

0xa463,	// (0x0006391e) im_reading_pane

0x1ff8,	// (0x0005b4b3) im_writing_pane_ParamLimits

0x1ff8,	// (0x0005b4b3) im_writing_pane

0x2016,	// (0x0005b4d1) im_reading_pane_t1

0xa47d,	// (0x00063938) list_im_pane

0xa48e,	// (0x00063949) scroll_pane_cp07

0x2055,	// (0x0005b510) im_writing_pane_t1_ParamLimits

0x2055,	// (0x0005b510) im_writing_pane_t1

0xa4a7,	// (0x00063962) im_writing_pane_t2_ParamLimits

0xa4a7,	// (0x00063962) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00068761) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00068761) im_writing_pane_t

0x9d91,	// (0x0006324c) input_focus_pane_cp04

0x9d91,	// (0x0006324c) input_focus_pane_cp05

0x206a,	// (0x0005b525) list_im_single_pane_ParamLimits

0x206a,	// (0x0005b525) list_im_single_pane

0x2083,	// (0x0005b53e) list_single_im_pane_t1

0x3c7a,	// (0x0005d135) blid_accuracy_pane

0x3c82,	// (0x0005d13d) blid_compass_pane

0x3c8c,	// (0x0005d147) main_location_t1

0x3c9c,	// (0x0005d157) main_location_t2

0x3cac,	// (0x0005d167) main_location_t3

0x0002,

0xf591,	// (0x00068a4c) main_location_t

0x9d91,	// (0x0006324c) aid_levels_location

0xa15c,	// (0x00063617) blid_accuracy_pane_g1

0xa15c,	// (0x00063617) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x000687c3) blid_accuracy_pane_g

0xa4ef,	// (0x000639aa) wml_content_pane

0xa52d,	// (0x000639e8) wml_button_pane_ParamLimits

0xa52d,	// (0x000639e8) wml_button_pane

0x2092,	// (0x0005b54d) wml_list_single_large_pane_ParamLimits

0x2092,	// (0x0005b54d) wml_list_single_large_pane

0x20ab,	// (0x0005b566) wml_list_single_medium_pane_ParamLimits

0x20ab,	// (0x0005b566) wml_list_single_medium_pane

0x20c5,	// (0x0005b580) wml_list_single_small_pane_ParamLimits

0x20c5,	// (0x0005b580) wml_list_single_small_pane

0xa541,	// (0x000639fc) wml_selection_box_pane_ParamLimits

0xa541,	// (0x000639fc) wml_selection_box_pane

0xa554,	// (0x00063a0f) wml_list_single_pane_t1

0xa563,	// (0x00063a1e) wml_list_single_medium_pane_t1

0xa572,	// (0x00063a2d) wml_list_single_large_pane_t1

0xa581,	// (0x00063a3c) input_focus_pane_cp02_ParamLimits

0xa581,	// (0x00063a3c) input_focus_pane_cp02

0xa594,	// (0x00063a4f) wml_selection_box_pane_g1

0xa59d,	// (0x00063a58) wml_selection_box_pane_t1_ParamLimits

0xa59d,	// (0x00063a58) wml_selection_box_pane_t1

0x9fec,	// (0x000634a7) bg_wml_button_pane_ParamLimits

0x9fec,	// (0x000634a7) bg_wml_button_pane

0xa5b5,	// (0x00063a70) wml_button_pane_g1

0xa5bd,	// (0x00063a78) wml_button_pane_t1

0xa5b5,	// (0x00063a70) wml_button_bg_pane_g1

0xa5cd,	// (0x00063a88) wml_button_bg_pane_g2

0xa5d5,	// (0x00063a90) wml_button_bg_pane_g3

0xa5dd,	// (0x00063a98) wml_button_bg_pane_g4

0xa5e5,	// (0x00063aa0) wml_button_bg_pane_g5

0xa5ed,	// (0x00063aa8) wml_button_bg_pane_g6

0xa5f5,	// (0x00063ab0) wml_button_bg_pane_g7

0xa5fd,	// (0x00063ab8) wml_button_bg_pane_g8

0xa605,	// (0x00063ac0) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00068766) wml_button_bg_pane_g

0x20e4,	// (0x0005b59f) bg_list_pane_cp02

0xa60d,	// (0x00063ac8) mce_header_pane_ParamLimits

0xa60d,	// (0x00063ac8) mce_header_pane

0xa623,	// (0x00063ade) mce_icon_pane

0xa623,	// (0x00063ade) mce_image_pane

0xa62c,	// (0x00063ae7) mce_text_pane_ParamLimits

0xa62c,	// (0x00063ae7) mce_text_pane

0x20ee,	// (0x0005b5a9) scroll_pane_cp03

0xa525,	// (0x000639e0) scroll_pane_cp04

0xa63f,	// (0x00063afa) scroll_pane_cp05_ParamLimits

0xa63f,	// (0x00063afa) scroll_pane_cp05

0x20f8,	// (0x0005b5b3) mce_header_field_pane_ParamLimits

0x20f8,	// (0x0005b5b3) mce_header_field_pane

0x2111,	// (0x0005b5cc) mce_header_field_pane_2_ParamLimits

0x2111,	// (0x0005b5cc) mce_header_field_pane_2

0x2127,	// (0x0005b5e2) mce_header_field_pane_3

0x212f,	// (0x0005b5ea) list_single_mce_message_pane_ParamLimits

0x212f,	// (0x0005b5ea) list_single_mce_message_pane

0x214b,	// (0x0005b606) list_single_mce_smart_pane_ParamLimits

0x214b,	// (0x0005b606) list_single_mce_smart_pane

0xa64b,	// (0x00063b06) input_focus_pane_cp03

0xa654,	// (0x00063b0f) list_header_data_pane

0x2172,	// (0x0005b62d) mce_header_field_pane_t1

0x2182,	// (0x0005b63d) list_single_mce_header_pane_ParamLimits

0x2182,	// (0x0005b63d) list_single_mce_header_pane

0xa65c,	// (0x00063b17) list_single_mce_header_pane_t1

0xa66b,	// (0x00063b26) list_single_mce_message_pane_g1

0xa673,	// (0x00063b2e) list_single_mce_message_pane_t1

0x21b4,	// (0x0005b66f) bg_cale_heading_pane_cp01_ParamLimits

0x21b4,	// (0x0005b66f) bg_cale_heading_pane_cp01

0xa681,	// (0x00063b3c) bg_cale_pane_cp02_ParamLimits

0xa681,	// (0x00063b3c) bg_cale_pane_cp02

0x21e7,	// (0x0005b6a2) cale_month_corner_pane

0x21fd,	// (0x0005b6b8) cale_month_day_heading_pane_ParamLimits

0x21fd,	// (0x0005b6b8) cale_month_day_heading_pane

0x2230,	// (0x0005b6eb) cale_month_pane_g1_ParamLimits

0x2230,	// (0x0005b6eb) cale_month_pane_g1

0x225c,	// (0x0005b717) cale_month_pane_g2_ParamLimits

0x225c,	// (0x0005b717) cale_month_pane_g2

0x227d,	// (0x0005b738) cale_month_pane_g3_ParamLimits

0x227d,	// (0x0005b738) cale_month_pane_g3

0x22b9,	// (0x0005b774) cale_month_pane_g4_ParamLimits

0x22b9,	// (0x0005b774) cale_month_pane_g4

0x22f5,	// (0x0005b7b0) cale_month_pane_g5_ParamLimits

0x22f5,	// (0x0005b7b0) cale_month_pane_g5

0x2331,	// (0x0005b7ec) cale_month_pane_g6_ParamLimits

0x2331,	// (0x0005b7ec) cale_month_pane_g6

0x236d,	// (0x0005b828) cale_month_pane_g7_ParamLimits

0x236d,	// (0x0005b828) cale_month_pane_g7

0x23a9,	// (0x0005b864) cale_month_pane_g8_ParamLimits

0x23a9,	// (0x0005b864) cale_month_pane_g8

0x23e5,	// (0x0005b8a0) cale_month_pane_g9_ParamLimits

0x23e5,	// (0x0005b8a0) cale_month_pane_g9

0x241b,	// (0x0005b8d6) cale_month_pane_g10_ParamLimits

0x241b,	// (0x0005b8d6) cale_month_pane_g10

0x2445,	// (0x0005b900) cale_month_pane_g11_ParamLimits

0x2445,	// (0x0005b900) cale_month_pane_g11

0x246f,	// (0x0005b92a) cale_month_pane_g12_ParamLimits

0x246f,	// (0x0005b92a) cale_month_pane_g12

0x249d,	// (0x0005b958) cale_month_pane_g13_ParamLimits

0x249d,	// (0x0005b958) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00068779) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00068779) cale_month_pane_g

0x24cb,	// (0x0005b986) cale_month_week_pane

0x24dc,	// (0x0005b997) grid_cale_month_pane_ParamLimits

0x24dc,	// (0x0005b997) grid_cale_month_pane

0x250a,	// (0x0005b9c5) cale_month_day_heading_pane_t1

0x2568,	// (0x0005ba23) cale_month_day_heading_pane_t2

0x25cd,	// (0x0005ba88) cale_month_day_heading_pane_t3

0x2632,	// (0x0005baed) cale_month_day_heading_pane_t4

0x2697,	// (0x0005bb52) cale_month_day_heading_pane_t5

0x26fc,	// (0x0005bbb7) cale_month_day_heading_pane_t6

0x2761,	// (0x0005bc1c) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00068794) cale_month_day_heading_pane_t

0xa2ab,	// (0x00063766) bg_cale_side_pane_cp01

0x27c6,	// (0x0005bc81) cale_month_week_pane_t1

0x27dd,	// (0x0005bc98) cale_month_week_pane_t2

0x27f4,	// (0x0005bcaf) cale_month_week_pane_t3

0x280b,	// (0x0005bcc6) cale_month_week_pane_t4

0x2822,	// (0x0005bcdd) cale_month_week_pane_t5

0x2839,	// (0x0005bcf4) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x000687a3) cale_month_week_pane_t

0x2858,	// (0x0005bd13) cell_cale_month_pane_ParamLimits

0x2858,	// (0x0005bd13) cell_cale_month_pane

0xa6b6,	// (0x00063b71) cell_cale_month_pane_g1

0x2930,	// (0x0005bdeb) cell_cale_month_pane_t1_ParamLimits

0x2930,	// (0x0005bdeb) cell_cale_month_pane_t1

0xa2b9,	// (0x00063774) grid_highlight_pane_cp08

0xa15c,	// (0x00063617) main_smil_g1

0x294c,	// (0x0005be07) smil_status_pane

0xa6c2,	// (0x00063b7d) smil_text_pane

0xe5ab,	// (0x00067a66) bg_popup_call3_rect_pane_g8

0xe5b3,	// (0x00067a6e) bg_popup_call3_rect_pane_g9

0x0008,

0xf56c,	// (0x00068a27) bg_popup_call3_rect_pane_g

0xe848,	// (0x00067d03) smil_status_volume_pane_g1

0xa6cc,	// (0x00063b87) smil_status_pane_t1

0xb412,	// (0x000648cd) volume_smil_pane

0xa6e3,	// (0x00063b9e) list_smil_text_pane

0x2961,	// (0x0005be1c) scroll_pane_cp011

0x296c,	// (0x0005be27) smil_text_list_pane_t1_ParamLimits

0x296c,	// (0x0005be27) smil_text_list_pane_t1

0xa6ed,	// (0x00063ba8) aid_volume_smil_ParamLimits

0xa6ed,	// (0x00063ba8) aid_volume_smil

0xa15c,	// (0x00063617) smil_volume_pane_g1

0xa15c,	// (0x00063617) smil_volume_pane_g2

0x0001,

0xf308,	// (0x000687c3) smil_volume_pane_g

0xa0e3,	// (0x0006359e) listscroll_cale_day_pane

0xa70f,	// (0x00063bca) bg_cale_pane

0xa727,	// (0x00063be2) list_cale_pane

0xa738,	// (0x00063bf3) scroll_pane_cp09

0xa749,	// (0x00063c04) cale_bg_pane_g1

0xa751,	// (0x00063c0c) cale_bg_pane_g2

0xa759,	// (0x00063c14) cale_bg_pane_g3

0xa761,	// (0x00063c1c) cale_bg_pane_g4

0xa769,	// (0x00063c24) cale_bg_pane_g5

0xa771,	// (0x00063c2c) cale_bg_pane_g6

0xa779,	// (0x00063c34) cale_bg_pane_g7

0xa781,	// (0x00063c3c) cale_bg_pane_g8

0xa789,	// (0x00063c44) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x000687c8) cale_bg_pane_g

0x29c1,	// (0x0005be7c) list_cale_time_pane_ParamLimits

0x29c1,	// (0x0005be7c) list_cale_time_pane

0x29d6,	// (0x0005be91) list_cale_time_pane_g1_ParamLimits

0x29d6,	// (0x0005be91) list_cale_time_pane_g1

0xa791,	// (0x00063c4c) list_cale_time_pane_g2_ParamLimits

0xa791,	// (0x00063c4c) list_cale_time_pane_g2

0x29e2,	// (0x0005be9d) list_cale_time_pane_g3_ParamLimits

0x29e2,	// (0x0005be9d) list_cale_time_pane_g3

0x29f0,	// (0x0005beab) list_cale_time_pane_g4_ParamLimits

0x29f0,	// (0x0005beab) list_cale_time_pane_g4

0x29fe,	// (0x0005beb9) list_cale_time_pane_g5_ParamLimits

0x29fe,	// (0x0005beb9) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x000687db) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x000687db) list_cale_time_pane_g

0x2a0c,	// (0x0005bec7) list_cale_time_pane_t1_ParamLimits

0x2a0c,	// (0x0005bec7) list_cale_time_pane_t1

0x2a34,	// (0x0005beef) list_cale_time_pane_t2_ParamLimits

0x2a34,	// (0x0005beef) list_cale_time_pane_t2

0x2e21,	// (0x0005c2dc) aid_blid_cardinal_pane

0x2e63,	// (0x0005c31e) compass_pane_t4

0x2a5c,	// (0x0005bf17) list_cale_time_pane_t4_ParamLimits

0x2a5c,	// (0x0005bf17) list_cale_time_pane_t4

0x2e71,	// (0x0005c32c) compass_pane_t5

0x2e81,	// (0x0005c33c) compass_pane_t6

0x2e8f,	// (0x0005c34a) compass_pane_t7

0xac0c,	// (0x000640c7) navi_pane_cc_t1

0xad73,	// (0x0006422e) aid_phob_thumbnail_center_pane

0x3640,	// (0x0005cafb) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x000687e8) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x000687e8) list_cale_time_pane_t

0x99e8,	// (0x00062ea3) bg_popup_window_pane_cp02_ParamLimits

0x99e8,	// (0x00062ea3) bg_popup_window_pane_cp02

0xa7ab,	// (0x00063c66) heading_pane_cp01_ParamLimits

0xa7ab,	// (0x00063c66) heading_pane_cp01

0xa7b7,	// (0x00063c72) loc_req_pane_ParamLimits

0xa7b7,	// (0x00063c72) loc_req_pane

0xa7c7,	// (0x00063c82) loc_type_pane_ParamLimits

0xa7c7,	// (0x00063c82) loc_type_pane

0xa7d9,	// (0x00063c94) loc_type_pane_t1_ParamLimits

0xa7d9,	// (0x00063c94) loc_type_pane_t1

0xa7eb,	// (0x00063ca6) loc_type_pane_t2_ParamLimits

0xa7eb,	// (0x00063ca6) loc_type_pane_t2

0xa7fd,	// (0x00063cb8) loc_type_pane_t3_ParamLimits

0xa7fd,	// (0x00063cb8) loc_type_pane_t3

0x0002,

0xf334,	// (0x000687ef) loc_type_pane_t_ParamLimits

0xf334,	// (0x000687ef) loc_type_pane_t

0xa80f,	// (0x00063cca) list_loc_req_pane

0xa819,	// (0x00063cd4) scroll_pane_cp012

0x2a84,	// (0x0005bf3f) list_single_loc_request_popup_menu_pane_ParamLimits

0x2a84,	// (0x0005bf3f) list_single_loc_request_popup_menu_pane

0xa824,	// (0x00063cdf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa824,	// (0x00063cdf) list_single_loc_request_popup_menu_pane_g1

0xa830,	// (0x00063ceb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa830,	// (0x00063ceb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x000687f6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x000687f6) list_single_loc_request_popup_menu_pane_g

0xa83c,	// (0x00063cf7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa83c,	// (0x00063cf7) list_single_loc_request_popup_menu_pane_t1

0x9fec,	// (0x000634a7) bg_popup_window_pane_cp03_ParamLimits

0x9fec,	// (0x000634a7) bg_popup_window_pane_cp03

0xa852,	// (0x00063d0d) heading_loc_req_pane_ParamLimits

0xa852,	// (0x00063d0d) heading_loc_req_pane

0x2a91,	// (0x0005bf4c) popup_dyc_status_message_window_g1_ParamLimits

0x2a91,	// (0x0005bf4c) popup_dyc_status_message_window_g1

0x2aa5,	// (0x0005bf60) popup_dyc_status_message_window_t1_ParamLimits

0x2aa5,	// (0x0005bf60) popup_dyc_status_message_window_t1

0x2aba,	// (0x0005bf75) popup_dyc_status_message_window_t2_ParamLimits

0x2aba,	// (0x0005bf75) popup_dyc_status_message_window_t2

0x2acf,	// (0x0005bf8a) popup_dyc_status_message_window_t3_ParamLimits

0x2acf,	// (0x0005bf8a) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x000687fb) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x000687fb) popup_dyc_status_message_window_t

0x9d91,	// (0x0006324c) bg_heading_pane_cp01

0xa85e,	// (0x00063d19) heading_loc_req_pane_g1

0xa866,	// (0x00063d21) heading_loc_req_pane_g2

0xa86e,	// (0x00063d29) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00068802) heading_loc_req_pane_g

0xa876,	// (0x00063d31) heading_loc_req_pane_t1

0xa886,	// (0x00063d41) bg_popup_sub_pane_cp01_ParamLimits

0xa886,	// (0x00063d41) bg_popup_sub_pane_cp01

0xa894,	// (0x00063d4f) popup_cale_events_window_g1_ParamLimits

0xa894,	// (0x00063d4f) popup_cale_events_window_g1

0xa8b4,	// (0x00063d6f) popup_cale_events_window_g2_ParamLimits

0xa8b4,	// (0x00063d6f) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x00068836) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x00068836) popup_cale_events_window_g

0xa8d4,	// (0x00063d8f) popup_cale_events_window_t1_ParamLimits

0xa8d4,	// (0x00063d8f) popup_cale_events_window_t1

0xa8e6,	// (0x00063da1) popup_cale_events_window_t2_ParamLimits

0xa8e6,	// (0x00063da1) popup_cale_events_window_t2

0xa924,	// (0x00063ddf) popup_cale_events_window_t3_ParamLimits

0xa924,	// (0x00063ddf) popup_cale_events_window_t3

0xa95e,	// (0x00063e19) popup_cale_events_window_t4_ParamLimits

0xa95e,	// (0x00063e19) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0006883b) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0006883b) popup_cale_events_window_t

0x2bd4,	// (0x0005c08f) call_type_pane

0x2be4,	// (0x0005c09f) popup_call_status_window_g1

0x2bf8,	// (0x0005c0b3) popup_call_status_window_g2

0x2c0c,	// (0x0005c0c7) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00068844) popup_call_status_window_g

0xa994,	// (0x00063e4f) call_type_pane_g1

0xa99d,	// (0x00063e58) call_type_pane_g2

0x0001,

0xf390,	// (0x0006884b) call_type_pane_g

0x9d91,	// (0x0006324c) bg_popup_sub_pane_cp02

0xa9a6,	// (0x00063e61) listscroll_popup_wml_pane

0xa9ae,	// (0x00063e69) list_wml_pane

0xa9b8,	// (0x00063e73) scroll_pane_cp013

0xa9c3,	// (0x00063e7e) list_single_graphic_popup_wml_pane_ParamLimits

0xa9c3,	// (0x00063e7e) list_single_graphic_popup_wml_pane

0xa15c,	// (0x00063617) list_single_graphic_popup_wml_pane_g1

0xa9d7,	// (0x00063e92) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00068850) list_single_graphic_popup_wml_pane_g

0xa9df,	// (0x00063e9a) list_single_graphic_popup_wml_pane_t1

0xa9f5,	// (0x00063eb0) aid_call_pane

0x9fe4,	// (0x0006349f) popup_clock_analogue_window_g1

0x9fe4,	// (0x0006349f) popup_clock_analogue_window_g2

0xa9fd,	// (0x00063eb8) popup_clock_analogue_window_g3

0xa9fd,	// (0x00063eb8) popup_clock_analogue_window_g4

0xa15c,	// (0x00063617) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00068855) popup_clock_analogue_window_g

0xaa05,	// (0x00063ec0) popup_clock_analogue_window_t1

0xaa13,	// (0x00063ece) clock_digital_number_pane_ParamLimits

0xaa13,	// (0x00063ece) clock_digital_number_pane

0xaa1f,	// (0x00063eda) clock_digital_number_pane_cp02_ParamLimits

0xaa1f,	// (0x00063eda) clock_digital_number_pane_cp02

0xaa2b,	// (0x00063ee6) clock_digital_number_pane_cp03_ParamLimits

0xaa2b,	// (0x00063ee6) clock_digital_number_pane_cp03

0xaa37,	// (0x00063ef2) clock_digital_number_pane_cp04_ParamLimits

0xaa37,	// (0x00063ef2) clock_digital_number_pane_cp04

0xaa43,	// (0x00063efe) clock_digital_separator_pane_ParamLimits

0xaa43,	// (0x00063efe) clock_digital_separator_pane

0xaa4f,	// (0x00063f0a) popup_clock_digital_window_t1

0xa15c,	// (0x00063617) clock_digital_number_pane_g1

0xa15c,	// (0x00063617) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x000687c3) clock_digital_number_pane_g

0xa15c,	// (0x00063617) clock_digital_separator_pane_g1

0xa15c,	// (0x00063617) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x000687c3) clock_digital_separator_pane_g

0x9d91,	// (0x0006324c) bg_popup_window_pane_cp04

0xaa6c,	// (0x00063f27) heading_pane_cp03

0xaa74,	// (0x00063f2f) listscroll_popup_gms_pane

0xaa7c,	// (0x00063f37) grid_large_graphic_popup_pane

0xaa86,	// (0x00063f41) listscroll_popup_gms_pane_g1

0xaa8e,	// (0x00063f49) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00068860) listscroll_popup_gms_pane_g

0xa525,	// (0x000639e0) scroll_pane_cp014

0x2c1c,	// (0x0005c0d7) cell_large_graphic_popup_pane_ParamLimits

0x2c1c,	// (0x0005c0d7) cell_large_graphic_popup_pane

0x2c34,	// (0x0005c0ef) cell_large_graphic_popup_pane_g1_ParamLimits

0x2c34,	// (0x0005c0ef) cell_large_graphic_popup_pane_g1

0xaa96,	// (0x00063f51) cell_large_graphic_popup_pane_g2_ParamLimits

0xaa96,	// (0x00063f51) cell_large_graphic_popup_pane_g2

0xaaa2,	// (0x00063f5d) cell_large_graphic_popup_pane_g3_ParamLimits

0xaaa2,	// (0x00063f5d) cell_large_graphic_popup_pane_g3

0xaaaf,	// (0x00063f6a) cell_large_graphic_popup_pane_g4_ParamLimits

0xaaaf,	// (0x00063f6a) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00068865) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00068865) cell_large_graphic_popup_pane_g

0xaabf,	// (0x00063f7a) grid_highlight_pane_cp010

0xa15c,	// (0x00063617) bg_popup_call_pane_g1

0xaac9,	// (0x00063f84) list_single_graphic_popup_conf_pane_ParamLimits

0xaac9,	// (0x00063f84) list_single_graphic_popup_conf_pane

0xaadb,	// (0x00063f96) list_highlight_pane_cp01

0xaae4,	// (0x00063f9f) list_single_graphic_popup_conf_pane_g1

0xaaec,	// (0x00063fa7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0006886e) list_single_graphic_popup_conf_pane_g

0xaaf4,	// (0x00063faf) list_single_graphic_popup_conf_pane_t1

0xab02,	// (0x00063fbd) linegrid_cams_pane_g1

0x2c40,	// (0x0005c0fb) linegrid_cams_pane_g2

0xa2ec,	// (0x000637a7) linegrid_cams_pane_g3

0xab0b,	// (0x00063fc6) linegrid_cams_pane_g4

0x2c49,	// (0x0005c104) linegrid_cams_pane_g5

0x2c52,	// (0x0005c10d) linegrid_cams_pane_g6

0xa2f5,	// (0x000637b0) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00068873) linegrid_cams_pane_g

0xab14,	// (0x00063fcf) popup_clock_analogue_window

0xab14,	// (0x00063fcf) popup_clock_digital_window

0x9d91,	// (0x0006324c) popup_phob_thumbnail_window

0xa15c,	// (0x00063617) call_video_uplink_pane_g1

0xab1d,	// (0x00063fd8) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00068882) call_video_uplink_pane_g

0xab25,	// (0x00063fe0) video_uplink_pane

0xab2d,	// (0x00063fe8) mce_image_pane_g1

0x2c5d,	// (0x0005c118) mce_image_pane_g2

0x2c67,	// (0x0005c122) mce_image_pane_g3

0x2c71,	// (0x0005c12c) mce_image_pane_g4

0x2c79,	// (0x0005c134) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00068887) mce_image_pane_g

0xab37,	// (0x00063ff2) control_top_pane_stacon_cp01_ParamLimits

0xab37,	// (0x00063ff2) control_top_pane_stacon_cp01

0xab4b,	// (0x00064006) uni_indicator_pane_stacon_cp01_ParamLimits

0xab4b,	// (0x00064006) uni_indicator_pane_stacon_cp01

0xab5c,	// (0x00064017) bg_popup_sub_pane_cp03

0x2c81,	// (0x0005c13c) chi_dic_find_pane

0x2c89,	// (0x0005c144) listscroll_chi_dic_pane

0x2c92,	// (0x0005c14d) main_pane_chidic_g1

0x2ca5,	// (0x0005c160) chi_dic_find_pane_t1

0xab66,	// (0x00064021) find_chidic_pane

0xab6f,	// (0x0006402a) chi_dic_list_pane_ParamLimits

0xab6f,	// (0x0006402a) chi_dic_list_pane

0xab80,	// (0x0006403b) scroll_pane_cp020

0x2cb3,	// (0x0005c16e) find_chidic_pane_t1

0x9d91,	// (0x0006324c) input_focus_pane_cp06

0x2cc2,	// (0x0005c17d) list_chi_dic_pane_ParamLimits

0x2cc2,	// (0x0005c17d) list_chi_dic_pane

0x2cd4,	// (0x0005c18f) list_chi_dic_pane_t1_ParamLimits

0x2cd4,	// (0x0005c18f) list_chi_dic_pane_t1

0x9d91,	// (0x0006324c) list_highlight_pane_cp020

0xab88,	// (0x00064043) bg_cale_heading_pane_g1

0x2ce7,	// (0x0005c1a2) bg_cale_heading_pane_g2

0x2cef,	// (0x0005c1aa) bg_cale_heading_pane_g3

0x2cf7,	// (0x0005c1b2) bg_cale_heading_pane_g4

0x2cff,	// (0x0005c1ba) bg_cale_heading_pane_g5

0x2d07,	// (0x0005c1c2) bg_cale_heading_pane_g6

0x2d0f,	// (0x0005c1ca) bg_cale_heading_pane_g7

0x2d17,	// (0x0005c1d2) bg_cale_heading_pane_g8

0x2d1f,	// (0x0005c1da) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00068892) bg_cale_heading_pane_g

0xab88,	// (0x00064043) bg_cale_side_pane_g1

0x2d27,	// (0x0005c1e2) bg_cale_side_pane_g2

0x2d31,	// (0x0005c1ec) bg_cale_side_pane_g3

0x2d3b,	// (0x0005c1f6) bg_cale_side_pane_g4

0x2d45,	// (0x0005c200) bg_cale_side_pane_g5

0x2d4f,	// (0x0005c20a) bg_cale_side_pane_g6

0x2d59,	// (0x0005c214) bg_cale_side_pane_g7

0x2d63,	// (0x0005c21e) bg_cale_side_pane_g8

0x2d6b,	// (0x0005c226) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x000688a5) bg_cale_side_pane_g

0x2d73,	// (0x0005c22e) popup_call_status_window_ParamLimits

0x2d73,	// (0x0005c22e) popup_call_status_window

0xab90,	// (0x0006404b) stacon_top_pane

0xab98,	// (0x00064053) status_pane_ParamLimits

0xab98,	// (0x00064053) status_pane

0xabad,	// (0x00064068) status_small_pane

0xabb5,	// (0x00064070) control_pane

0x9d91,	// (0x0006324c) stacon_bottom_pane

0xabbd,	// (0x00064078) list_single_mce_smart_pane_t1_ParamLimits

0xabbd,	// (0x00064078) list_single_mce_smart_pane_t1

0xabd0,	// (0x0006408b) list_single_mce_smart_pane_t2_ParamLimits

0xabd0,	// (0x0006408b) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x000688b8) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x000688b8) list_single_mce_smart_pane_t

0x2dc0,	// (0x0005c27b) compass_pane

0x2dcb,	// (0x0005c286) main_location2_pane_t1

0x2de1,	// (0x0005c29c) main_location2_pane_t2

0x2df7,	// (0x0005c2b2) main_location2_pane_t3

0x0003,

0xf402,	// (0x000688bd) main_location2_pane_t

0xabef,	// (0x000640aa) compass_pane_g1_ParamLimits

0xabef,	// (0x000640aa) compass_pane_g1

0x2e45,	// (0x0005c300) compass_pane_t1

0x2e54,	// (0x0005c30f) compass_pane_t2

0x0005,

0xf40b,	// (0x000688c6) compass_pane_t

0x2e9f,	// (0x0005c35a) text_secondary_cp61

0xac03,	// (0x000640be) navi_pane_cams_g5

0xac26,	// (0x000640e1) navi_pane_im_t1

0xac34,	// (0x000640ef) navi_pane_mp_g1_ParamLimits

0xac34,	// (0x000640ef) navi_pane_mp_g1

0xac48,	// (0x00064103) navi_pane_mp_g2_ParamLimits

0xac48,	// (0x00064103) navi_pane_mp_g2

0xac54,	// (0x0006410f) navi_pane_mp_g3_ParamLimits

0xac54,	// (0x0006410f) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x000688da) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x000688da) navi_pane_mp_g

0xac60,	// (0x0006411b) navi_pane_mp_t1

0xac6e,	// (0x00064129) navi_pane_mp_t2

0x0002,

0xf426,	// (0x000688e1) navi_pane_mp_t

0xacaa,	// (0x00064165) navi_pane_vt_g1

0xac60,	// (0x0006411b) navi_pane_vt_t1

0xacb2,	// (0x0006416d) navi_slider_pane

0xacba,	// (0x00064175) zooming_pane

0xacc2,	// (0x0006417d) navi_slider_pane_g1

0xaccb,	// (0x00064186) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x000688e8) navi_slider_pane_g

0xacf8,	// (0x000641b3) aid_levels_zoom

0xad00,	// (0x000641bb) zooming_pane_g1

0xad08,	// (0x000641c3) zooming_pane_g2

0xad08,	// (0x000641c3) zooming_pane_g3

0x0002,

0xf43c,	// (0x000688f7) zooming_pane_g

0xad10,	// (0x000641cb) level_10_zoom

0xad19,	// (0x000641d4) level_11_zoom

0xad22,	// (0x000641dd) level_1_zoom

0xad2b,	// (0x000641e6) level_2_zoom

0xad34,	// (0x000641ef) level_3_zoom

0xad3d,	// (0x000641f8) level_4_zoom

0xad46,	// (0x00064201) level_5_zoom

0xad4f,	// (0x0006420a) level_6_zoom

0xad58,	// (0x00064213) level_7_zoom

0xad61,	// (0x0006421c) level_8_zoom

0xad6a,	// (0x00064225) level_9_zoom

0xad7b,	// (0x00064236) popup_phob_thumbnail_window_g1

0xad83,	// (0x0006423e) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x000688fe) popup_phob_thumbnail_window_g

0xe711,	// (0x00067bcc) level_1_location

0xe719,	// (0x00067bd4) level_2_location

0xe721,	// (0x00067bdc) level_3_location

0xe729,	// (0x00067be4) level_4_location

0xacba,	// (0x00064175) level_5_location

0x2fca,	// (0x0005c485) mce_icon_pane_g1

0x2fd2,	// (0x0005c48d) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00068903) mce_icon_pane_g

0x2fda,	// (0x0005c495) main_mup_pane_g1_ParamLimits

0x2fda,	// (0x0005c495) main_mup_pane_g1

0x2ff0,	// (0x0005c4ab) main_mup_pane_g2_ParamLimits

0x2ff0,	// (0x0005c4ab) main_mup_pane_g2

0x3008,	// (0x0005c4c3) main_mup_pane_g3_ParamLimits

0x3008,	// (0x0005c4c3) main_mup_pane_g3

0x3020,	// (0x0005c4db) main_mup_pane_g4_ParamLimits

0x3020,	// (0x0005c4db) main_mup_pane_g4

0x3032,	// (0x0005c4ed) main_mup_pane_g5_ParamLimits

0x3032,	// (0x0005c4ed) main_mup_pane_g5

0x304e,	// (0x0005c509) main_mup_pane_g6_ParamLimits

0x304e,	// (0x0005c509) main_mup_pane_g6

0x3068,	// (0x0005c523) main_mup_pane_g7_ParamLimits

0x3068,	// (0x0005c523) main_mup_pane_g7

0x3086,	// (0x0005c541) main_mup_pane_g8_ParamLimits

0x3086,	// (0x0005c541) main_mup_pane_g8

0x30a4,	// (0x0005c55f) main_mup_pane_g9_ParamLimits

0x30a4,	// (0x0005c55f) main_mup_pane_g9

0x30c0,	// (0x0005c57b) main_mup_pane_g10_ParamLimits

0x30c0,	// (0x0005c57b) main_mup_pane_g10

0x30de,	// (0x0005c599) main_mup_pane_g11_ParamLimits

0x30de,	// (0x0005c599) main_mup_pane_g11

0x30f8,	// (0x0005c5b3) main_mup_pane_g12_ParamLimits

0x30f8,	// (0x0005c5b3) main_mup_pane_g12

0x310e,	// (0x0005c5c9) main_mup_pane_g13_ParamLimits

0x310e,	// (0x0005c5c9) main_mup_pane_g13

0x000c,

0xf44d,	// (0x00068908) main_mup_pane_g_ParamLimits

0xf44d,	// (0x00068908) main_mup_pane_g

0x3122,	// (0x0005c5dd) main_mup_pane_t1_ParamLimits

0x3122,	// (0x0005c5dd) main_mup_pane_t1

0x313e,	// (0x0005c5f9) main_mup_pane_t2_ParamLimits

0x313e,	// (0x0005c5f9) main_mup_pane_t2

0x3156,	// (0x0005c611) main_mup_pane_t3_ParamLimits

0x3156,	// (0x0005c611) main_mup_pane_t3

0x316e,	// (0x0005c629) main_mup_pane_t4_ParamLimits

0x316e,	// (0x0005c629) main_mup_pane_t4

0x318c,	// (0x0005c647) main_mup_pane_t5_ParamLimits

0x318c,	// (0x0005c647) main_mup_pane_t5

0x31a1,	// (0x0005c65c) main_mup_pane_t6_ParamLimits

0x31a1,	// (0x0005c65c) main_mup_pane_t6

0x0005,

0xf468,	// (0x00068923) main_mup_pane_t_ParamLimits

0xf468,	// (0x00068923) main_mup_pane_t

0x31b3,	// (0x0005c66e) mup_progress_pane_ParamLimits

0x31b3,	// (0x0005c66e) mup_progress_pane

0x31bf,	// (0x0005c67a) mup_visualizer_pane_ParamLimits

0x31bf,	// (0x0005c67a) mup_visualizer_pane

0x31f3,	// (0x0005c6ae) mup_volume_pane_ParamLimits

0x31f3,	// (0x0005c6ae) mup_volume_pane

0xad8b,	// (0x00064246) mup_visualizer_pane_g1_ParamLimits

0xad8b,	// (0x00064246) mup_visualizer_pane_g1

0xad8b,	// (0x00064246) mup_visualizer_pane_g2_ParamLimits

0xad8b,	// (0x00064246) mup_visualizer_pane_g2

0xabef,	// (0x000640aa) mup_visualizer_pane_g3_ParamLimits

0xabef,	// (0x000640aa) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00068930) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00068930) mup_visualizer_pane_g

0xa15c,	// (0x00063617) mup_volume_pane_g1

0xada1,	// (0x0006425c) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x00068937) mup_volume_pane_g

0xa15c,	// (0x00063617) mup_progress_pane_g1

0xadaa,	// (0x00064265) mup_progress_pane_g2

0xadb3,	// (0x0006426e) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0006893c) mup_progress_pane_g

0x9d91,	// (0x0006324c) bg_popup_window_pane_cp05

0xadbc,	// (0x00064277) heading_pane_cp02_ParamLimits

0xadbc,	// (0x00064277) heading_pane_cp02

0xadd8,	// (0x00064293) list_popup_blid_pane

0xade0,	// (0x0006429b) list_blid_sat_info_pane_ParamLimits

0xade0,	// (0x0006429b) list_blid_sat_info_pane

0xadf3,	// (0x000642ae) list_blid_sat_info_pane_g1

0xadfb,	// (0x000642b6) list_blid_sat_info_pane_t1

0x331d,	// (0x0005c7d8) mup_equalizer_pane_ParamLimits

0x331d,	// (0x0005c7d8) mup_equalizer_pane

0x333e,	// (0x0005c7f9) mup_equalizer_pane_cp1_ParamLimits

0x333e,	// (0x0005c7f9) mup_equalizer_pane_cp1

0x335f,	// (0x0005c81a) mup_equalizer_pane_cp2_ParamLimits

0x335f,	// (0x0005c81a) mup_equalizer_pane_cp2

0x3384,	// (0x0005c83f) mup_equalizer_pane_cp3_ParamLimits

0x3384,	// (0x0005c83f) mup_equalizer_pane_cp3

0x33ad,	// (0x0005c868) mup_equalizer_pane_cp4_ParamLimits

0x33ad,	// (0x0005c868) mup_equalizer_pane_cp4

0x33d6,	// (0x0005c891) mup_equalizer_pane_cp5

0x33ee,	// (0x0005c8a9) mup_equalizer_pane_cp6

0x3406,	// (0x0005c8c1) mup_equalizer_pane_cp7

0xe62b,	// (0x00067ae6) bg_popup_call_poc_act_pane_g9

0xe633,	// (0x00067aee) bg_popup_call_poc_act_pane_g10

0xe63b,	// (0x00067af6) bg_popup_call_poc_act_pane_g11

0x000a,

0x9fec,	// (0x000634a7) mup_scale_pane

0xa15c,	// (0x00063617) mup_scale_pane_g1

0xae09,	// (0x000642c4) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00068958) mup_scale_pane_g

0xae2d,	// (0x000642e8) msg_data_pane

0xae35,	// (0x000642f0) scroll_pane_cp017

0x3430,	// (0x0005c8eb) bg_list_pane_cp04_ParamLimits

0x3430,	// (0x0005c8eb) bg_list_pane_cp04

0xae3d,	// (0x000642f8) msg_data_pane_g1

0x3456,	// (0x0005c911) msg_data_pane_g2

0x3460,	// (0x0005c91b) msg_data_pane_g3

0x346a,	// (0x0005c925) msg_data_pane_g4

0x3472,	// (0x0005c92d) msg_data_pane_g5

0x347a,	// (0x0005c935) msg_data_pane_g6

0x3482,	// (0x0005c93d) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00068967) msg_data_pane_g

0x348a,	// (0x0005c945) msg_text_pane_ParamLimits

0x348a,	// (0x0005c945) msg_text_pane

0x34bb,	// (0x0005c976) qrid_highlight_pane_cp011_ParamLimits

0x34bb,	// (0x0005c976) qrid_highlight_pane_cp011

0x9d91,	// (0x0006324c) msg_body_pane

0x9d91,	// (0x0006324c) msg_header_pane

0xae4e,	// (0x00064309) input_focus_pane_cp07

0x34df,	// (0x0005c99a) msg_header_pane_t1_ParamLimits

0x34df,	// (0x0005c99a) msg_header_pane_t1

0x34f3,	// (0x0005c9ae) msg_header_pane_t2_ParamLimits

0x34f3,	// (0x0005c9ae) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0006897b) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0006897b) msg_header_pane_t

0xae63,	// (0x0006431e) msg_body_pane_g1

0x3505,	// (0x0005c9c0) msg_body_pane_t1_ParamLimits

0x3505,	// (0x0005c9c0) msg_body_pane_t1

0x3536,	// (0x0005c9f1) msg_body_pane_t2_ParamLimits

0x3536,	// (0x0005c9f1) msg_body_pane_t2

0x3548,	// (0x0005ca03) msg_body_pane_t3_ParamLimits

0x3548,	// (0x0005ca03) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00068980) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00068980) msg_body_pane_t

0x3594,	// (0x0005ca4f) main_viewer_pane_g1_ParamLimits

0x3594,	// (0x0005ca4f) main_viewer_pane_g1

0x35a2,	// (0x0005ca5d) main_viewer_pane_g2_ParamLimits

0x35a2,	// (0x0005ca5d) main_viewer_pane_g2

0x35b0,	// (0x0005ca6b) main_viewer_pane_g3_ParamLimits

0x35b0,	// (0x0005ca6b) main_viewer_pane_g3

0x35bf,	// (0x0005ca7a) main_viewer_pane_g4_ParamLimits

0x35bf,	// (0x0005ca7a) main_viewer_pane_g4

0xae83,	// (0x0006433e) main_viewer_pane_g5_ParamLimits

0xae83,	// (0x0006433e) main_viewer_pane_g5

0xae83,	// (0x0006433e) main_viewer_pane_g7_ParamLimits

0xae83,	// (0x0006433e) main_viewer_pane_g7

0xae95,	// (0x00064350) main_viewer_pane_g8_ParamLimits

0xae95,	// (0x00064350) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00068990) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00068990) main_viewer_pane_g

0xaead,	// (0x00064368) viewer_content_pane_ParamLimits

0xaead,	// (0x00064368) viewer_content_pane

0x35fd,	// (0x0005cab8) main_postcard_pane_g1_ParamLimits

0x35fd,	// (0x0005cab8) main_postcard_pane_g1

0x3613,	// (0x0005cace) main_postcard_pane_g2_ParamLimits

0x3613,	// (0x0005cace) main_postcard_pane_g2

0x3629,	// (0x0005cae4) main_postcard_pane_g3_ParamLimits

0x3629,	// (0x0005cae4) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x000689a1) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x000689a1) main_postcard_pane_g

0x3640,	// (0x0005cafb) main_postcard_pane_g4

0xe85b,	// (0x00067d16) smil_status_volume_pane_g2

0x3683,	// (0x0005cb3e) postcard_pane_ParamLimits

0x3683,	// (0x0005cb3e) postcard_pane

0xaebb,	// (0x00064376) postcard_pane_g1_ParamLimits

0xaebb,	// (0x00064376) postcard_pane_g1

0x36d3,	// (0x0005cb8e) postcard_pane_g2_ParamLimits

0x36d3,	// (0x0005cb8e) postcard_pane_g2

0x36df,	// (0x0005cb9a) postcard_pane_g3_ParamLimits

0x36df,	// (0x0005cb9a) postcard_pane_g3

0xaec9,	// (0x00064384) postcard_pane_g4_ParamLimits

0xaec9,	// (0x00064384) postcard_pane_g4

0x36eb,	// (0x0005cba6) postcard_pane_g5_ParamLimits

0x36eb,	// (0x0005cba6) postcard_pane_g5

0x36fd,	// (0x0005cbb8) postcard_pane_g6_ParamLimits

0x36fd,	// (0x0005cbb8) postcard_pane_g6

0xaebb,	// (0x00064376) postcard_pane_g7_ParamLimits

0xaebb,	// (0x00064376) postcard_pane_g7

0x0006,

0xf4f3,	// (0x000689ae) postcard_pane_g_ParamLimits

0xf4f3,	// (0x000689ae) postcard_pane_g

0x3715,	// (0x0005cbd0) main_mp2_pane_g1_ParamLimits

0x3715,	// (0x0005cbd0) main_mp2_pane_g1

0x3723,	// (0x0005cbde) main_mp2_pane_g2_ParamLimits

0x3723,	// (0x0005cbde) main_mp2_pane_g2

0x372f,	// (0x0005cbea) main_mp2_pane_g3_ParamLimits

0x372f,	// (0x0005cbea) main_mp2_pane_g3

0x0002,

0xf502,	// (0x000689bd) main_mp2_pane_g_ParamLimits

0xf502,	// (0x000689bd) main_mp2_pane_g

0x373b,	// (0x0005cbf6) main_mp2_pane_t1_ParamLimits

0x373b,	// (0x0005cbf6) main_mp2_pane_t1

0x3752,	// (0x0005cc0d) main_mp2_pane_t2_ParamLimits

0x3752,	// (0x0005cc0d) main_mp2_pane_t2

0x3766,	// (0x0005cc21) main_mp2_pane_t3_ParamLimits

0x3766,	// (0x0005cc21) main_mp2_pane_t3

0x0002,

0xf509,	// (0x000689c4) main_mp2_pane_t_ParamLimits

0xf509,	// (0x000689c4) main_mp2_pane_t

0xaed7,	// (0x00064392) pec_content_pane_ParamLimits

0xaed7,	// (0x00064392) pec_content_pane

0xa525,	// (0x000639e0) scroll_pane_cp015

0xaee9,	// (0x000643a4) pec_attribute_pane_ParamLimits

0xaee9,	// (0x000643a4) pec_attribute_pane

0x3778,	// (0x0005cc33) pec_content_pane_g1_ParamLimits

0x3778,	// (0x0005cc33) pec_content_pane_g1

0xaef9,	// (0x000643b4) pec_content_pane_t1_ParamLimits

0xaef9,	// (0x000643b4) pec_content_pane_t1

0xaf0b,	// (0x000643c6) pec_content_pane_t2_ParamLimits

0xaf0b,	// (0x000643c6) pec_content_pane_t2

0x0001,

0xf510,	// (0x000689cb) pec_content_pane_t_ParamLimits

0xf510,	// (0x000689cb) pec_content_pane_t

0x3784,	// (0x0005cc3f) list_single_graphic_pane_cp01_ParamLimits

0x3784,	// (0x0005cc3f) list_single_graphic_pane_cp01

0x9fec,	// (0x000634a7) bg_popup_sub_pane_cp04

0xaf1d,	// (0x000643d8) popup_mup_playback_window_g1

0xaf29,	// (0x000643e4) popup_mup_playback_window_t1

0xaf3e,	// (0x000643f9) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x000689d0) popup_mup_playback_window_t

0xaf75,	// (0x00064430) main_image_pane_g1_ParamLimits

0xaf75,	// (0x00064430) main_image_pane_g1

0xafb8,	// (0x00064473) scroll_pane_cp018_ParamLimits

0xafb8,	// (0x00064473) scroll_pane_cp018

0xafd0,	// (0x0006448b) scroll_pane_cp016_ParamLimits

0xafd0,	// (0x0006448b) scroll_pane_cp016

0x3856,	// (0x0005cd11) smil2_image_pane_ParamLimits

0x3856,	// (0x0005cd11) smil2_image_pane

0x388c,	// (0x0005cd47) smil2_root_pane_ParamLimits

0x388c,	// (0x0005cd47) smil2_root_pane

0x38c4,	// (0x0005cd7f) smil2_text_pane_ParamLimits

0x38c4,	// (0x0005cd7f) smil2_text_pane

0x9d91,	// (0x0006324c) bg_list_pane_cp06

0xb00c,	// (0x000644c7) grid_radio_pane

0x9d91,	// (0x0006324c) bg_popup_window_pane_cp06

0xb016,	// (0x000644d1) main_fmradio_pane_t1

0xaa6c,	// (0x00063f27) heading_pane_cp04

0xb024,	// (0x000644df) main_fmradio_pane_t2

0xe643,	// (0x00067afe) popup_cale_lunar_info_window_g1

0xb032,	// (0x000644ed) main_fmradio_pane_t3

0xe64b,	// (0x00067b06) popup_cale_lunar_info_window_g2

0xb042,	// (0x000644fd) main_fmradio_pane_t4

0x0001,

0xb050,	// (0x0006450b) main_fmradio_pane_t5

0x0004,

0x031b,	// (0x000597d6) popup_cale_lunar_info_window_g

0xf52a,	// (0x000689e5) main_fmradio_pane_t

0xb05e,	// (0x00064519) wait_bar_pane_cp03

0xb066,	// (0x00064521) cell_fmradio_pane_ParamLimits

0xb066,	// (0x00064521) cell_fmradio_pane

0xaebb,	// (0x00064376) cell_fmradio_pane_g1_ParamLimits

0xaebb,	// (0x00064376) cell_fmradio_pane_g1

0x9d91,	// (0x0006324c) grid_highlight_pane_cp011

0xb07b,	// (0x00064536) poc_content_pane_ParamLimits

0xb07b,	// (0x00064536) poc_content_pane

0xb08d,	// (0x00064548) scroll_pane_cp019

0x3954,	// (0x0005ce0f) popup_call_poc_act_window_ParamLimits

0x3954,	// (0x0005ce0f) popup_call_poc_act_window

0x3978,	// (0x0005ce33) popup_call_poc_inact_window_ParamLimits

0x3978,	// (0x0005ce33) popup_call_poc_inact_window

0x02f2,	// (0x000597ad) bg_popup_call_poc_act_pane_g

0xe5bb,	// (0x00067a76) bg_popup_call_poc_inact_pane_g1

0xe5c3,	// (0x00067a7e) bg_popup_call_poc_inact_pane_g2

0xb095,	// (0x00064550) popup_call_poc_act_window_g2

0xe5cb,	// (0x00067a86) bg_popup_call_poc_inact_pane_g3

0xe5d3,	// (0x00067a8e) bg_popup_call_poc_inact_pane_g4

0xe5db,	// (0x00067a96) bg_popup_call_poc_inact_pane_g5

0xb09d,	// (0x00064558) popup_call_poc_act_window_t1_ParamLimits

0xb09d,	// (0x00064558) popup_call_poc_act_window_t1

0xb0c5,	// (0x00064580) popup_call_poc_act_window_t2_ParamLimits

0xb0c5,	// (0x00064580) popup_call_poc_act_window_t2

0xb0ed,	// (0x000645a8) popup_call_poc_act_window_t3_ParamLimits

0xb0ed,	// (0x000645a8) popup_call_poc_act_window_t3

0xb115,	// (0x000645d0) popup_call_poc_act_window_t4_ParamLimits

0xb115,	// (0x000645d0) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x000689f0) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x000689f0) popup_call_poc_act_window_t

0xe5e3,	// (0x00067a9e) bg_popup_call_poc_inact_pane_g6

0xe5eb,	// (0x00067aa6) bg_popup_call_poc_inact_pane_g7

0xe5f3,	// (0x00067aae) bg_popup_call_poc_inact_pane_g8

0xb127,	// (0x000645e2) popup_call_poc_inact_window_g2

0xe5fb,	// (0x00067ab6) bg_popup_call_poc_inact_pane_g9

0x0008,

0x02df,	// (0x0005979a) bg_popup_call_poc_inact_pane_g

0xb12f,	// (0x000645ea) popup_call_poc_inact_window_t1_ParamLimits

0xb12f,	// (0x000645ea) popup_call_poc_inact_window_t1

0xb144,	// (0x000645ff) popup_call_poc_inact_window_t2_ParamLimits

0xb144,	// (0x000645ff) popup_call_poc_inact_window_t2

0xb159,	// (0x00064614) popup_call_poc_inact_window_t3_ParamLimits

0xb159,	// (0x00064614) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x000689f9) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x000689f9) popup_call_poc_inact_window_t

0xe7bb,	// (0x00067c76) context_pane_ParamLimits

0x4223,	// (0x0005d6de) signal_pane_ParamLimits

0xacba,	// (0x00064175) main_call2_pane

0xe7a9,	// (0x00067c64) popup_phob_thumbnail2_window_ParamLimits

0xe7a9,	// (0x00067c64) popup_phob_thumbnail2_window

0xae6b,	// (0x00064326) aid_hotspot_pointer_arrow_pane

0xae73,	// (0x0006432e) aid_hotspot_pointer_hand_pane

0x3ce3,	// (0x0005d19e) phob_pre_status_pane_g5

0x191b,	// (0x0005add6) cams_zoom_pane_ParamLimits

0x192a,	// (0x0005ade5) image_vga_pane_ParamLimits

0x1944,	// (0x0005adff) main_camera_pane_g1_ParamLimits

0x1956,	// (0x0005ae11) main_camera_pane_g2_ParamLimits

0x1966,	// (0x0005ae21) main_camera_pane_g3_ParamLimits

0x197a,	// (0x0005ae35) main_camera_pane_g4_ParamLimits

0x198e,	// (0x0005ae49) main_camera_pane_g5_ParamLimits

0x19a2,	// (0x0005ae5d) main_camera_pane_g6_ParamLimits

0x19b6,	// (0x0005ae71) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x000686f8) main_camera_pane_g_ParamLimits

0x19ca,	// (0x0005ae85) main_camera_pane_t1_ParamLimits

0x19e0,	// (0x0005ae9b) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00068709) main_camera_pane_t_ParamLimits

0x9fec,	// (0x000634a7) bg_popup_preview_window_pane_cp01_ParamLimits

0x9fec,	// (0x000634a7) bg_popup_preview_window_pane_cp01

0xb16e,	// (0x00064629) popup_phob_thumbnail2_window_g1_ParamLimits

0xb16e,	// (0x00064629) popup_phob_thumbnail2_window_g1

0x9d91,	// (0x0006324c) call2_cli_visual_pane

0x39ac,	// (0x0005ce67) popup_call2_audio_conf_window_ParamLimits

0x39ac,	// (0x0005ce67) popup_call2_audio_conf_window

0x39d4,	// (0x0005ce8f) popup_call2_audio_first_window_ParamLimits

0x39d4,	// (0x0005ce8f) popup_call2_audio_first_window

0x3a6a,	// (0x0005cf25) popup_call2_audio_in_window_ParamLimits

0x3a6a,	// (0x0005cf25) popup_call2_audio_in_window

0x3ab6,	// (0x0005cf71) popup_call2_audio_out_window_ParamLimits

0x3ab6,	// (0x0005cf71) popup_call2_audio_out_window

0x3b28,	// (0x0005cfe3) popup_call2_audio_second_window_ParamLimits

0x3b28,	// (0x0005cfe3) popup_call2_audio_second_window

0x3b8e,	// (0x0005d049) popup_call2_audio_wait_window_ParamLimits

0x3b8e,	// (0x0005d049) popup_call2_audio_wait_window

0x9d91,	// (0x0006324c) bg_popup_call2_act_pane_cp03

0x9fce,	// (0x00063489) list_conf_pane_cp

0xb17a,	// (0x00064635) popup_call2_audio_conf_window_t1

0xb188,	// (0x00064643) list_single_graphic_popup_conf2_pane_ParamLimits

0xb188,	// (0x00064643) list_single_graphic_popup_conf2_pane

0xaadb,	// (0x00063f96) list_highlight_pane_cp04

0xb19b,	// (0x00064656) list_single_graphic_popup_conf2_pane_g1

0xaaec,	// (0x00063fa7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00068a00) list_single_graphic_popup_conf2_pane_g

0xb1a5,	// (0x00064660) list_single_graphic_popup_conf2_pane_t1

0xb1b3,	// (0x0006466e) bg_popup_call2_act_pane_cp01_ParamLimits

0xb1b3,	// (0x0006466e) bg_popup_call2_act_pane_cp01

0xb23d,	// (0x000646f8) call_type_pane_cp05_ParamLimits

0xb23d,	// (0x000646f8) call_type_pane_cp05

0xb291,	// (0x0006474c) popup_call2_audio_second_window_g1_ParamLimits

0xb291,	// (0x0006474c) popup_call2_audio_second_window_g1

0xb2e5,	// (0x000647a0) popup_call2_audio_second_window_g2_ParamLimits

0xb2e5,	// (0x000647a0) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00068a05) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00068a05) popup_call2_audio_second_window_g

0xb34a,	// (0x00064805) popup_call2_audio_second_window_t1_ParamLimits

0xb34a,	// (0x00064805) popup_call2_audio_second_window_t1

0xda48,	// (0x00066f03) popup_call2_audio_second_window_t2_ParamLimits

0xda48,	// (0x00066f03) popup_call2_audio_second_window_t2

0xda9b,	// (0x00066f56) popup_call2_audio_second_window_t3_ParamLimits

0xda9b,	// (0x00066f56) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00068a0c) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00068a0c) popup_call2_audio_second_window_t

0x9d91,	// (0x0006324c) bg_popup_call2_in_pane_cp02

0x9d9b,	// (0x00063256) call_type_pane_cp04

0x9da3,	// (0x0006325e) popup_call2_audio_wait_window_g1

0x9dab,	// (0x00063266) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000685e5) popup_call2_audio_wait_window_g

0x9db3,	// (0x0006326e) popup_call2_audio_wait_window_t3

0xdb8e,	// (0x00067049) bg_popup_call2_act_pane_ParamLimits

0xdb8e,	// (0x00067049) bg_popup_call2_act_pane

0xdc4e,	// (0x00067109) call_type_pane_cp03_ParamLimits

0xdc4e,	// (0x00067109) call_type_pane_cp03

0xdcb2,	// (0x0006716d) popup_call2_audio_first_window_g1_ParamLimits

0xdcb2,	// (0x0006716d) popup_call2_audio_first_window_g1

0xdd22,	// (0x000671dd) popup_call2_audio_first_window_g2_ParamLimits

0xdd22,	// (0x000671dd) popup_call2_audio_first_window_g2

0xad8b,	// (0x00064246) popup_call2_audio_first_window_g3_ParamLimits

0xad8b,	// (0x00064246) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00068a15) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00068a15) popup_call2_audio_first_window_g

0xde00,	// (0x000672bb) popup_call2_audio_first_window_t1_ParamLimits

0xde00,	// (0x000672bb) popup_call2_audio_first_window_t1

0xdf03,	// (0x000673be) popup_call2_audio_first_window_t4_ParamLimits

0xdf03,	// (0x000673be) popup_call2_audio_first_window_t4

0xdfe6,	// (0x000674a1) popup_call2_audio_first_window_t5_ParamLimits

0xdfe6,	// (0x000674a1) popup_call2_audio_first_window_t5

0x0003,

0x0290,	// (0x0005974b) popup_call2_audio_first_window_t_ParamLimits

0x0290,	// (0x0005974b) popup_call2_audio_first_window_t

0x9fe4,	// (0x0006349f) bg_popup_call2_act_pane_g1

0xe655,	// (0x00067b10) popup_cale_lunar_info_window_t1

0xe663,	// (0x00067b1e) popup_cale_lunar_info_window_t2

0xe671,	// (0x00067b2c) popup_cale_lunar_info_window_t3

0x9d91,	// (0x0006324c) bg_popup_call2_bubble_pane

0xe0e7,	// (0x000675a2) bg_popup_call2_in_pane_cp01_ParamLimits

0xe0e7,	// (0x000675a2) bg_popup_call2_in_pane_cp01

0x9a6d,	// (0x00062f28) call_type_pane_cp02

0xe12f,	// (0x000675ea) popup_call2_audio_out_window_g1_ParamLimits

0xe12f,	// (0x000675ea) popup_call2_audio_out_window_g1

0xe15b,	// (0x00067616) popup_call2_audio_out_window_g2_ParamLimits

0xe15b,	// (0x00067616) popup_call2_audio_out_window_g2

0xe183,	// (0x0006763e) popup_call2_audio_out_window_g3_ParamLimits

0xe183,	// (0x0006763e) popup_call2_audio_out_window_g3

0x0003,

0x0299,	// (0x00059754) popup_call2_audio_out_window_g_ParamLimits

0x0299,	// (0x00059754) popup_call2_audio_out_window_g

0xe1be,	// (0x00067679) popup_call2_audio_out_window_t1_ParamLimits

0xe1be,	// (0x00067679) popup_call2_audio_out_window_t1

0xe21d,	// (0x000676d8) popup_call2_audio_out_window_t2_ParamLimits

0xe21d,	// (0x000676d8) popup_call2_audio_out_window_t2

0xe271,	// (0x0006772c) popup_call2_audio_out_window_t3_ParamLimits

0xe271,	// (0x0006772c) popup_call2_audio_out_window_t3

0xe287,	// (0x00067742) popup_call2_audio_out_window_t4_ParamLimits

0xe287,	// (0x00067742) popup_call2_audio_out_window_t4

0xe29d,	// (0x00067758) popup_call2_audio_out_window_t5_ParamLimits

0xe29d,	// (0x00067758) popup_call2_audio_out_window_t5

0x0005,

0x02a2,	// (0x0005975d) popup_call2_audio_out_window_t_ParamLimits

0x02a2,	// (0x0005975d) popup_call2_audio_out_window_t

0xe301,	// (0x000677bc) bg_popup_call2_in_pane_ParamLimits

0xe301,	// (0x000677bc) bg_popup_call2_in_pane

0xe35d,	// (0x00067818) popup_call2_audio_in_window_g1_ParamLimits

0xe35d,	// (0x00067818) popup_call2_audio_in_window_g1

0xe395,	// (0x00067850) popup_call2_audio_in_window_g2_ParamLimits

0xe395,	// (0x00067850) popup_call2_audio_in_window_g2

0xe3cd,	// (0x00067888) popup_call2_audio_in_window_g3_ParamLimits

0xe3cd,	// (0x00067888) popup_call2_audio_in_window_g3

0x0003,

0x02af,	// (0x0005976a) popup_call2_audio_in_window_g_ParamLimits

0x02af,	// (0x0005976a) popup_call2_audio_in_window_g

0xe425,	// (0x000678e0) popup_call2_audio_in_window_t1_ParamLimits

0xe425,	// (0x000678e0) popup_call2_audio_in_window_t1

0xe4a5,	// (0x00067960) popup_call2_audio_in_window_t2_ParamLimits

0xe4a5,	// (0x00067960) popup_call2_audio_in_window_t2

0xe525,	// (0x000679e0) popup_call2_audio_in_window_t3_ParamLimits

0xe525,	// (0x000679e0) popup_call2_audio_in_window_t3

0xe53f,	// (0x000679fa) popup_call2_audio_in_window_t4_ParamLimits

0xe53f,	// (0x000679fa) popup_call2_audio_in_window_t4

0xe551,	// (0x00067a0c) popup_call2_audio_in_window_t5_ParamLimits

0xe551,	// (0x00067a0c) popup_call2_audio_in_window_t5

0xe566,	// (0x00067a21) popup_call2_audio_in_window_t6_ParamLimits

0xe566,	// (0x00067a21) popup_call2_audio_in_window_t6

0x0005,

0x02b8,	// (0x00059773) popup_call2_audio_in_window_t_ParamLimits

0x02b8,	// (0x00059773) popup_call2_audio_in_window_t

0x9fe4,	// (0x0006349f) bg_popup_call2_in_pane_g1

0xe67f,	// (0x00067b3a) popup_cale_lunar_info_window_t4

0x0003,

0x0320,	// (0x000597db) popup_cale_lunar_info_window_t

0x9fec,	// (0x000634a7) bg_popup_call2_rect_pane_ParamLimits

0x9fec,	// (0x000634a7) bg_popup_call2_rect_pane

0x9d91,	// (0x0006324c) call2_cli_visual_graphic_pane

0x9d91,	// (0x0006324c) call2_cli_visual_text_pane

0xb405,	// (0x000648c0) smil_status_volume_pane_g3

0x0002,

0xa15c,	// (0x00063617) call2_cli_visual_graphic_pane_g1

0xa15c,	// (0x00063617) call2_cli_visual_graphic_pane_g2

0xa15c,	// (0x00063617) call2_cli_visual_graphic_pane_g3

0x0002,

0xf565,	// (0x00068a20) call2_cli_visual_graphic_pane_g

0xe57b,	// (0x00067a36) bg_popup_call2_rect_pane_g1

0xa204,	// (0x000636bf) bg_popup_call2_rect_pane_g2

0xe583,	// (0x00067a3e) bg_popup_call2_rect_pane_g3

0xe58b,	// (0x00067a46) bg_popup_call2_rect_pane_g4

0xe593,	// (0x00067a4e) bg_popup_call2_rect_pane_g5

0xe59b,	// (0x00067a56) bg_popup_call2_rect_pane_g6

0xe5a3,	// (0x00067a5e) bg_popup_call2_rect_pane_g7

0xe5ab,	// (0x00067a66) bg_popup_call2_rect_pane_g8

0xe5b3,	// (0x00067a6e) bg_popup_call2_rect_pane_g9

0x0008,

0xf56c,	// (0x00068a27) bg_popup_call2_rect_pane_g

0xe5bb,	// (0x00067a76) bg_popup_call2_bubble_pane_g1

0xe5c3,	// (0x00067a7e) bg_popup_call2_bubble_pane_g2

0xe5cb,	// (0x00067a86) bg_popup_call2_bubble_pane_g3

0xe5d3,	// (0x00067a8e) bg_popup_call2_bubble_pane_g4

0xe5db,	// (0x00067a96) bg_popup_call2_bubble_pane_g5

0xe5e3,	// (0x00067a9e) bg_popup_call2_bubble_pane_g6

0xe5eb,	// (0x00067aa6) bg_popup_call2_bubble_pane_g7

0xe5f3,	// (0x00067aae) bg_popup_call2_bubble_pane_g8

0xe5fb,	// (0x00067ab6) bg_popup_call2_bubble_pane_g9

0x0008,

0x02df,	// (0x0005979a) bg_popup_call2_bubble_pane_g

0x1524,	// (0x0005a9df) aid_cale_week_size_cell_pane

0x19fa,	// (0x0005aeb5) aid_cams_cif_uncrop_pane_ParamLimits

0x19fa,	// (0x0005aeb5) aid_cams_cif_uncrop_pane

0x1bb3,	// (0x0005b06e) aid_cams_size_cell_ParamLimits

0x1bb3,	// (0x0005b06e) aid_cams_size_cell

0x1bc7,	// (0x0005b082) grid_cams_pane_ParamLimits

0x1be1,	// (0x0005b09c) linegrid_cams_pane_ParamLimits

0x1dc2,	// (0x0005b27d) call_video_pane_t1

0x1dd4,	// (0x0005b28f) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0006875c) call_video_pane_t

0x2196,	// (0x0005b651) aid_cale_month_size_cell_pane_ParamLimits

0x2196,	// (0x0005b651) aid_cale_month_size_cell_pane

0xf5af,	// (0x00068a6a) smil_status_volume_pane_g

0xb412,	// (0x000648cd) volume_smil_pane_ParamLimits

0x0d91,	// (0x0005a24c) aid_popup2_width_pane

0x147e,	// (0x0005a939) cell_qdial_pane_g4_ParamLimits

0x147e,	// (0x0005a939) cell_qdial_pane_g4

0x2e21,	// (0x0005c2dc) aid_blid_cardinal_pane_ParamLimits

0x2e31,	// (0x0005c2ec) aid_blid_destination_pane_ParamLimits

0x2e31,	// (0x0005c2ec) aid_blid_destination_pane

0x9fec,	// (0x000634a7) bg_popup_call_poc_act_pane_ParamLimits

0x9fec,	// (0x000634a7) bg_popup_call_poc_act_pane

0x9fec,	// (0x000634a7) bg_popup_call_poc_inact_pane_ParamLimits

0x9fec,	// (0x000634a7) bg_popup_call_poc_inact_pane

0xe603,	// (0x00067abe) bg_popup_call_poc_act_pane_g1

0xe60b,	// (0x00067ac6) bg_popup_call_poc_act_pane_g2

0xe613,	// (0x00067ace) bg_popup_call_poc_act_pane_g3

0xe5d3,	// (0x00067a8e) bg_popup_call_poc_act_pane_g4

0xe5db,	// (0x00067a96) bg_popup_call_poc_act_pane_g5

0xe61b,	// (0x00067ad6) bg_popup_call_poc_act_pane_g6

0xe5eb,	// (0x00067aa6) bg_popup_call_poc_act_pane_g7

0xe623,	// (0x00067ade) bg_popup_call_poc_act_pane_g8

0x9d91,	// (0x0006324c) main_usb_pane

0xe780,	// (0x00067c3b) popup_cale_lunar_info_window

0x2016,	// (0x0005b4d1) im_reading_pane_t1_ParamLimits

0xa47d,	// (0x00063938) list_im_pane_ParamLimits

0xa48e,	// (0x00063949) scroll_pane_cp07_ParamLimits

0x9d91,	// (0x0006324c) grid_highlight_pane_cp012

0x9fec,	// (0x000634a7) mup_scale_pane_ParamLimits

0xaebb,	// (0x00064376) main_usb_pane_g1_ParamLimits

0xaebb,	// (0x00064376) main_usb_pane_g1

0x3bef,	// (0x0005d0aa) main_usb_pane_g2_ParamLimits

0x3bef,	// (0x0005d0aa) main_usb_pane_g2

0x0001,

0xf57f,	// (0x00068a3a) main_usb_pane_g_ParamLimits

0xf57f,	// (0x00068a3a) main_usb_pane_g

0x3c05,	// (0x0005d0c0) main_usb_pane_t1_ParamLimits

0x3c05,	// (0x0005d0c0) main_usb_pane_t1

0x3c17,	// (0x0005d0d2) main_usb_pane_t2_ParamLimits

0x3c17,	// (0x0005d0d2) main_usb_pane_t2

0x3c29,	// (0x0005d0e4) main_usb_pane_t3_ParamLimits

0x3c29,	// (0x0005d0e4) main_usb_pane_t3

0x3c3b,	// (0x0005d0f6) main_usb_pane_t4_ParamLimits

0x3c3b,	// (0x0005d0f6) main_usb_pane_t4

0x3c50,	// (0x0005d10b) main_usb_pane_t5_ParamLimits

0x3c50,	// (0x0005d10b) main_usb_pane_t5

0x3c65,	// (0x0005d120) main_usb_pane_t6_ParamLimits

0x3c65,	// (0x0005d120) main_usb_pane_t6

0x0005,

0xf584,	// (0x00068a3f) main_usb_pane_t_ParamLimits

0x2dc0,	// (0x0005c27b) aid_text_placing

0x2dcb,	// (0x0005c286) main_location2_pane_t1_ParamLimits

0x2de1,	// (0x0005c29c) main_location2_pane_t2_ParamLimits

0x2df7,	// (0x0005c2b2) main_location2_pane_t3_ParamLimits

0x2e0d,	// (0x0005c2c8) main_location2_pane_t4_ParamLimits

0x2e0d,	// (0x0005c2c8) main_location2_pane_t4

0xf402,	// (0x000688bd) main_location2_pane_t_ParamLimits

0xa028,	// (0x000634e3) find_pinb_pane_g2_ParamLimits

0xa028,	// (0x000634e3) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0006860b) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0006860b) find_pinb_pane_g

0xa034,	// (0x000634ef) find_pinb_pane_t1_ParamLimits

0xa046,	// (0x00063501) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00068610) find_pinb_pane_t_ParamLimits

0x9d91,	// (0x0006324c) main_call3_pane

0x250a,	// (0x0005b9c5) cale_month_day_heading_pane_t1_ParamLimits

0x2568,	// (0x0005ba23) cale_month_day_heading_pane_t2_ParamLimits

0x25cd,	// (0x0005ba88) cale_month_day_heading_pane_t3_ParamLimits

0x2632,	// (0x0005baed) cale_month_day_heading_pane_t4_ParamLimits

0x2697,	// (0x0005bb52) cale_month_day_heading_pane_t5_ParamLimits

0x26fc,	// (0x0005bbb7) cale_month_day_heading_pane_t6_ParamLimits

0x2761,	// (0x0005bc1c) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00068794) cale_month_day_heading_pane_t_ParamLimits

0xa6da,	// (0x00063b95) smil_status_volume_pane

0x36a7,	// (0x0005cb62) postcard_address_pane_ParamLimits

0x36a7,	// (0x0005cb62) postcard_address_pane

0x36bd,	// (0x0005cb78) postcard_message_pane_ParamLimits

0x36bd,	// (0x0005cb78) postcard_message_pane

0x3bc8,	// (0x0005d083) call2_cli_visual_pane_t1_ParamLimits

0x3bc8,	// (0x0005d083) call2_cli_visual_pane_t1

0x4434,	// (0x0005d8ef) postcard_message_pane_t1_ParamLimits

0x4434,	// (0x0005d8ef) postcard_message_pane_t1

0xe86e,	// (0x00067d29) postcard_address_pane_t1_ParamLimits

0xe86e,	// (0x00067d29) postcard_address_pane_t1

0x4420,	// (0x0005d8db) popup_call3_audio_in_window_ParamLimits

0x4420,	// (0x0005d8db) popup_call3_audio_in_window

0x42a5,	// (0x0005d760) bg_popup_call3_in_pane_ParamLimits

0x42a5,	// (0x0005d760) bg_popup_call3_in_pane

0x4321,	// (0x0005d7dc) popup_call3_audio_in_window_g1_ParamLimits

0x4321,	// (0x0005d7dc) popup_call3_audio_in_window_g1

0x4341,	// (0x0005d7fc) popup_call3_audio_in_window_g2_ParamLimits

0x4341,	// (0x0005d7fc) popup_call3_audio_in_window_g2

0x4361,	// (0x0005d81c) popup_call3_audio_in_window_g3_ParamLimits

0x4361,	// (0x0005d81c) popup_call3_audio_in_window_g3

0x0003,

0xf5b6,	// (0x00068a71) popup_call3_audio_in_window_g_ParamLimits

0xf5b6,	// (0x00068a71) popup_call3_audio_in_window_g

0x4392,	// (0x0005d84d) popup_call3_audio_in_window_t1_ParamLimits

0x4392,	// (0x0005d84d) popup_call3_audio_in_window_t1

0x43d0,	// (0x0005d88b) popup_call3_audio_in_window_t2_ParamLimits

0x43d0,	// (0x0005d88b) popup_call3_audio_in_window_t2

0x440e,	// (0x0005d8c9) popup_call3_audio_in_window_t3_ParamLimits

0x440e,	// (0x0005d8c9) popup_call3_audio_in_window_t3

0x0002,

0xf5bf,	// (0x00068a7a) popup_call3_audio_in_window_t_ParamLimits

0xf5bf,	// (0x00068a7a) popup_call3_audio_in_window_t

0xacba,	// (0x00064175) bg_popup_call3_rect_pane

0xe57b,	// (0x00067a36) bg_popup_call3_rect_pane_g1

0xa204,	// (0x000636bf) bg_popup_call3_rect_pane_g2

0xe583,	// (0x00067a3e) bg_popup_call3_rect_pane_g3

0xe58b,	// (0x00067a46) bg_popup_call3_rect_pane_g4

0xe593,	// (0x00067a4e) bg_popup_call3_rect_pane_g5

0xe59b,	// (0x00067a56) bg_popup_call3_rect_pane_g6

0xe5a3,	// (0x00067a5e) bg_popup_call3_rect_pane_g7

0x3209,	// (0x0005c6c4) mup_visualizer_osc_pane

0xad99,	// (0x00064254) mup_visualizer_spec_pane

0x42d5,	// (0x0005d790) call3_video_qcif_pane_ParamLimits

0x42d5,	// (0x0005d790) call3_video_qcif_pane

0x42e8,	// (0x0005d7a3) call3_video_qcif_uncrop_pane_ParamLimits

0x42e8,	// (0x0005d7a3) call3_video_qcif_uncrop_pane

0x42f8,	// (0x0005d7b3) call3_video_subqcif_pane_ParamLimits

0x42f8,	// (0x0005d7b3) call3_video_subqcif_pane

0x430e,	// (0x0005d7c9) call3_video_subqcif_uncrop_pane_ParamLimits

0x430e,	// (0x0005d7c9) call3_video_subqcif_uncrop_pane

0x4381,	// (0x0005d83c) popup_call3_audio_in_window_g4_ParamLimits

0x4381,	// (0x0005d83c) popup_call3_audio_in_window_g4

0x4294,	// (0x0005d74f) mup_spec_half_pane

0x429d,	// (0x0005d758) mup_spec_half_pane_cp

0xe82e,	// (0x00067ce9) mup_osc_middle_pane

0xe837,	// (0x00067cf2) mup_visualizer_osc_pane_g1

0x4274,	// (0x0005d72f) mup_spec_bar_pane_ParamLimits

0x4274,	// (0x0005d72f) mup_spec_bar_pane

0xe81b,	// (0x00067cd6) mup_spec_bar_pane_g1

0xe825,	// (0x00067ce0) mup_spec_bar_pane_g2

0x0001,

0x0364,	// (0x0005981f) mup_spec_bar_pane_g

0x1524,	// (0x0005a9df) aid_cale_week_size_cell_pane_ParamLimits

0x1537,	// (0x0005a9f2) bg_cale_heading_pane_ParamLimits

0xa280,	// (0x0006373b) bg_cale_pane_cp01_ParamLimits

0x1553,	// (0x0005aa0e) cale_week_corner_pane_ParamLimits

0x1569,	// (0x0005aa24) cale_week_day_heading_pane_ParamLimits

0x1585,	// (0x0005aa40) cale_week_scroll_pane_g1_ParamLimits

0x159e,	// (0x0005aa59) cale_week_scroll_pane_g2_ParamLimits

0x15af,	// (0x0005aa6a) cale_week_scroll_pane_g3_ParamLimits

0x15c0,	// (0x0005aa7b) cale_week_scroll_pane_g4_ParamLimits

0x15d1,	// (0x0005aa8c) cale_week_scroll_pane_g5_ParamLimits

0x15e2,	// (0x0005aa9d) cale_week_scroll_pane_g6_ParamLimits

0x15f3,	// (0x0005aaae) cale_week_scroll_pane_g7_ParamLimits

0x1604,	// (0x0005aabf) cale_week_scroll_pane_g8_ParamLimits

0x1615,	// (0x0005aad0) cale_week_scroll_pane_g9_ParamLimits

0x1626,	// (0x0005aae1) cale_week_scroll_pane_g10_ParamLimits

0x1637,	// (0x0005aaf2) cale_week_scroll_pane_g11_ParamLimits

0x1648,	// (0x0005ab03) cale_week_scroll_pane_g12_ParamLimits

0x1659,	// (0x0005ab14) cale_week_scroll_pane_g13_ParamLimits

0x1672,	// (0x0005ab2d) cale_week_scroll_pane_g14_ParamLimits

0x168b,	// (0x0005ab46) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0006869c) cale_week_scroll_pane_g_ParamLimits

0x16a4,	// (0x0005ab5f) cale_week_time_pane_ParamLimits

0x16b5,	// (0x0005ab70) grid_cale_week_pane_ParamLimits

0xa299,	// (0x00063754) listscroll_cale_week_pane_t1

0x16d0,	// (0x0005ab8b) scroll_pane_cp08_ParamLimits

0x21e7,	// (0x0005b6a2) cale_month_corner_pane_ParamLimits

0xa6a4,	// (0x00063b5f) cale_month_pane_t1

0x24cb,	// (0x0005b986) cale_month_week_pane_ParamLimits

0x2be4,	// (0x0005c09f) popup_call_status_window_g1_ParamLimits

0x2bf8,	// (0x0005c0b3) popup_call_status_window_g2_ParamLimits

0x2c0c,	// (0x0005c0c7) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00068844) popup_call_status_window_g_ParamLimits

0xa9ed,	// (0x00063ea8) aid_call2_pane

0x34d1,	// (0x0005c98c) msg_header_pane_g1

0x36a7,	// (0x0005cb62) postcard_address2_pane_ParamLimits

0x36a7,	// (0x0005cb62) postcard_address2_pane

0x36bd,	// (0x0005cb78) postcard_message2_pane_ParamLimits

0x36bd,	// (0x0005cb78) postcard_message2_pane

0x4231,	// (0x0005d6ec) message2_row_pane_ParamLimits

0x4231,	// (0x0005d6ec) message2_row_pane

0xe7d6,	// (0x00067c91) address2_row_pane_ParamLimits

0xe7d6,	// (0x00067c91) address2_row_pane

0xe7e9,	// (0x00067ca4) postcard_message2_row_pane_g1

0xe7f1,	// (0x00067cac) postcard_message2_row_pane_t1

0xe7e9,	// (0x00067ca4) address2_row_pane_g1

0xe7f1,	// (0x00067cac) address2_row_pane_t1

0x18de,	// (0x0005ad99) aid_size_cell_vorec

0x9d91,	// (0x0006324c) main_rss_pane

0x4254,	// (0x0005d70f) rss_list_single_pane_ParamLimits

0x4254,	// (0x0005d70f) rss_list_single_pane

0xe7ff,	// (0x00067cba) rss_list_single_pane_t1

0xe80d,	// (0x00067cc8) rss_list_single_pane_t2

0x0001,

0x035f,	// (0x0005981a) rss_list_single_pane_t

0x9d91,	// (0x0006324c) main_camera2_pane

0x9d91,	// (0x0006324c) main_video2_pane

0x44a3,	// (0x0005d95e) cams_zoom_pane_cp2_ParamLimits

0x44a3,	// (0x0005d95e) cams_zoom_pane_cp2

0x44ba,	// (0x0005d975) image2_vga_pane_ParamLimits

0x44ba,	// (0x0005d975) image2_vga_pane

0x4502,	// (0x0005d9bd) main_camera2_pane_g1_ParamLimits

0x4502,	// (0x0005d9bd) main_camera2_pane_g1

0x4522,	// (0x0005d9dd) main_camera2_pane_g2_ParamLimits

0x4522,	// (0x0005d9dd) main_camera2_pane_g2

0x4539,	// (0x0005d9f4) main_camera2_pane_g3_ParamLimits

0x4539,	// (0x0005d9f4) main_camera2_pane_g3

0x4550,	// (0x0005da0b) main_camera2_pane_g4_ParamLimits

0x4550,	// (0x0005da0b) main_camera2_pane_g4

0x4567,	// (0x0005da22) main_camera2_pane_g5_ParamLimits

0x4567,	// (0x0005da22) main_camera2_pane_g5

0x457e,	// (0x0005da39) main_camera2_pane_g6_ParamLimits

0x457e,	// (0x0005da39) main_camera2_pane_g6

0x4595,	// (0x0005da50) main_camera2_pane_g7_ParamLimits

0x4595,	// (0x0005da50) main_camera2_pane_g7

0x45ac,	// (0x0005da67) main_camera2_pane_g8_ParamLimits

0x45ac,	// (0x0005da67) main_camera2_pane_g8

0x0008,

0xf5c6,	// (0x00068a81) main_camera2_pane_g_ParamLimits

0xf5c6,	// (0x00068a81) main_camera2_pane_g

0x45da,	// (0x0005da95) main_camera2_pane_t1_ParamLimits

0x45da,	// (0x0005da95) main_camera2_pane_t1

0x460f,	// (0x0005daca) main_camera2_pane_t2_ParamLimits

0x460f,	// (0x0005daca) main_camera2_pane_t2

0x462c,	// (0x0005dae7) main_camera2_pane_t3_ParamLimits

0x462c,	// (0x0005dae7) main_camera2_pane_t3

0x468a,	// (0x0005db45) main_camera2_pane_t4_ParamLimits

0x468a,	// (0x0005db45) main_camera2_pane_t4

0x0006,

0xf5d9,	// (0x00068a94) main_camera2_pane_t_ParamLimits

0xf5d9,	// (0x00068a94) main_camera2_pane_t

0x4713,	// (0x0005dbce) cams_zoom_pane_cp4_ParamLimits

0x4713,	// (0x0005dbce) cams_zoom_pane_cp4

0x4729,	// (0x0005dbe4) image2_cif_pane_ParamLimits

0x4729,	// (0x0005dbe4) image2_cif_pane

0x4754,	// (0x0005dc0f) image2_subqcif_pane_ParamLimits

0x4754,	// (0x0005dc0f) image2_subqcif_pane

0x476f,	// (0x0005dc2a) main_video2_pane_g1_ParamLimits

0x476f,	// (0x0005dc2a) main_video2_pane_g1

0x4789,	// (0x0005dc44) main_video2_pane_g2_ParamLimits

0x4789,	// (0x0005dc44) main_video2_pane_g2

0x479f,	// (0x0005dc5a) main_video2_pane_g3_ParamLimits

0x479f,	// (0x0005dc5a) main_video2_pane_g3

0x47b5,	// (0x0005dc70) main_video2_pane_g4_ParamLimits

0x47b5,	// (0x0005dc70) main_video2_pane_g4

0x47cb,	// (0x0005dc86) main_video2_pane_g5_ParamLimits

0x47cb,	// (0x0005dc86) main_video2_pane_g5

0x47e1,	// (0x0005dc9c) main_video2_pane_g6_ParamLimits

0x47e1,	// (0x0005dc9c) main_video2_pane_g6

0x0005,

0xf5e8,	// (0x00068aa3) main_video2_pane_g_ParamLimits

0xf5e8,	// (0x00068aa3) main_video2_pane_g

0x47fb,	// (0x0005dcb6) main_video2_pane_t1_ParamLimits

0x47fb,	// (0x0005dcb6) main_video2_pane_t1

0x481f,	// (0x0005dcda) main_video2_pane_t2_ParamLimits

0x481f,	// (0x0005dcda) main_video2_pane_t2

0x486f,	// (0x0005dd2a) main_video2_pane_t3_ParamLimits

0x486f,	// (0x0005dd2a) main_video2_pane_t3

0x0002,

0xf5f5,	// (0x00068ab0) main_video2_pane_t_ParamLimits

0xf5f5,	// (0x00068ab0) main_video2_pane_t

0x3d23,	// (0x0005d1de) call_muted_g2

0x0001,

0xf5aa,	// (0x00068a65) call_muted_g

0x9d91,	// (0x0006324c) main_mup2_pane

0x48b7,	// (0x0005dd72) main_mup2_pane_g1_ParamLimits

0x48b7,	// (0x0005dd72) main_mup2_pane_g1

0x48c3,	// (0x0005dd7e) main_mup2_pane_g2_ParamLimits

0x48c3,	// (0x0005dd7e) main_mup2_pane_g2

0xb47b,	// (0x00064936) main_mup_pane_g13_cp1

0xb483,	// (0x0006493e) mup_volume_pane_cp1

0x48e1,	// (0x0005dd9c) main_mup2_pane_g4_ParamLimits

0x48e1,	// (0x0005dd9c) main_mup2_pane_g4

0x48f3,	// (0x0005ddae) main_mup2_pane_g5_ParamLimits

0x48f3,	// (0x0005ddae) main_mup2_pane_g5

0x4905,	// (0x0005ddc0) main_mup2_pane_g6_ParamLimits

0x4905,	// (0x0005ddc0) main_mup2_pane_g6

0x4917,	// (0x0005ddd2) main_mup2_pane_g7_ParamLimits

0x4917,	// (0x0005ddd2) main_mup2_pane_g7

0x0006,

0xf5fc,	// (0x00068ab7) main_mup2_pane_g_ParamLimits

0xf5fc,	// (0x00068ab7) main_mup2_pane_g

0x492f,	// (0x0005ddea) main_mup2_pane_t1_ParamLimits

0x492f,	// (0x0005ddea) main_mup2_pane_t1

0x4945,	// (0x0005de00) main_mup2_pane_t2_ParamLimits

0x4945,	// (0x0005de00) main_mup2_pane_t2

0x495b,	// (0x0005de16) main_mup2_pane_t3_ParamLimits

0x495b,	// (0x0005de16) main_mup2_pane_t3

0x4971,	// (0x0005de2c) main_mup2_pane_t4_ParamLimits

0x4971,	// (0x0005de2c) main_mup2_pane_t4

0x4989,	// (0x0005de44) main_mup2_pane_t5_ParamLimits

0x4989,	// (0x0005de44) main_mup2_pane_t5

0x49a1,	// (0x0005de5c) main_mup2_pane_t6_ParamLimits

0x49a1,	// (0x0005de5c) main_mup2_pane_t6

0x0005,

0xf60b,	// (0x00068ac6) main_mup2_pane_t_ParamLimits

0xf60b,	// (0x00068ac6) main_mup2_pane_t

0x49d1,	// (0x0005de8c) mup2_visualizer_pane_ParamLimits

0x49d1,	// (0x0005de8c) mup2_visualizer_pane

0x49ff,	// (0x0005deba) mup_progress_pane_cp_ParamLimits

0x49ff,	// (0x0005deba) mup_progress_pane_cp

0xb466,	// (0x00064921) mup_volume_pane_cp_ParamLimits

0xb466,	// (0x00064921) mup_volume_pane_cp

0x4a15,	// (0x0005ded0) mup2_visualizer_pane_g1_ParamLimits

0x4a15,	// (0x0005ded0) mup2_visualizer_pane_g1

0xe885,	// (0x00067d40) mup2_visualizer_pane_g2_ParamLimits

0xe885,	// (0x00067d40) mup2_visualizer_pane_g2

0x4a2a,	// (0x0005dee5) mup2_visualizer_pane_g3_ParamLimits

0x4a2a,	// (0x0005dee5) mup2_visualizer_pane_g3

0x0002,

0xf618,	// (0x00068ad3) mup2_visualizer_pane_g_ParamLimits

0xf618,	// (0x00068ad3) mup2_visualizer_pane_g

0xb004,	// (0x000644bf) aid_size_cell_fmradio

0x3ed3,	// (0x0005d38e) aid_height_parent_landcape

0xa50c,	// (0x000639c7) wml_content_pane_cp

0xa514,	// (0x000639cf) wml_tabs_pane

0xa51d,	// (0x000639d8) popup_wml_miniature_window

0xa525,	// (0x000639e0) scroll_pane_cp021

0xa539,	// (0x000639f4) wml_content_pane_comp8

0x9d91,	// (0x0006324c) bg_popup_sub_pane_cp05

0xe8a3,	// (0x00067d5e) popup_wml_miniature_window_g1

0xe8ab,	// (0x00067d66) wml_miniature_view_pane

0x4a36,	// (0x0005def1) aid_size_wml_view

0x4a3e,	// (0x0005def9) wml_miniature_view_pane_g1

0x4a47,	// (0x0005df02) wml_miniature_view_pane_g2

0x4a50,	// (0x0005df0b) wml_miniature_view_pane_g3

0x4a58,	// (0x0005df13) wml_miniature_view_pane_g4

0x4a60,	// (0x0005df1b) wml_miniature_view_pane_g5

0x4a68,	// (0x0005df23) wml_miniature_view_pane_g6

0x4a70,	// (0x0005df2b) wml_miniature_view_pane_g7

0x4a78,	// (0x0005df33) wml_miniature_view_pane_g8

0x0007,

0xf61f,	// (0x00068ada) wml_miniature_view_pane_g

0xe8b3,	// (0x00067d6e) background_graphic_ParamLimits

0xe8b3,	// (0x00067d6e) background_graphic

0xe8bf,	// (0x00067d7a) wml_tabs_2_pane

0xe8c8,	// (0x00067d83) wml_tabs_3_pane_ParamLimits

0xe8c8,	// (0x00067d83) wml_tabs_3_pane

0xe8da,	// (0x00067d95) wml_tabs_4_pane_ParamLimits

0xe8da,	// (0x00067d95) wml_tabs_4_pane

0xe8f0,	// (0x00067dab) wml_tabs_5_pane_ParamLimits

0xe8f0,	// (0x00067dab) wml_tabs_5_pane

0xe90a,	// (0x00067dc5) wml_tabs_pane_g2_ParamLimits

0xe90a,	// (0x00067dc5) wml_tabs_pane_g2

0xe91e,	// (0x00067dd9) wml_tabs_pane_g3_ParamLimits

0xe91e,	// (0x00067dd9) wml_tabs_pane_g3

0x4a80,	// (0x0005df3b) wml_tabs_2_active_pane_ParamLimits

0x4a80,	// (0x0005df3b) wml_tabs_2_active_pane

0x4a94,	// (0x0005df4f) wml_tabs_2_passive_pane_ParamLimits

0x4a94,	// (0x0005df4f) wml_tabs_2_passive_pane

0x4aa8,	// (0x0005df63) wml_tabs_3_active_pane_cp_ParamLimits

0x4aa8,	// (0x0005df63) wml_tabs_3_active_pane_cp

0x4abd,	// (0x0005df78) wml_tabs_3_passive_pane_ParamLimits

0x4abd,	// (0x0005df78) wml_tabs_3_passive_pane

0x4ad0,	// (0x0005df8b) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ad0,	// (0x0005df8b) wml_tabs_3_passive_pane_cp

0x4ae7,	// (0x0005dfa2) tabs_4_active_pane

0x4aef,	// (0x0005dfaa) tabs_4_passive_pane

0x4af9,	// (0x0005dfb4) tabs_4_passive_pane_cp

0x4b01,	// (0x0005dfbc) tabs_4_passive_pane_cp2

0x3be7,	// (0x0005d0a2) aid_height_text

0x31db,	// (0x0005c696) mup_volume_cont_pane_ParamLimits

0x31db,	// (0x0005c696) mup_volume_cont_pane

0x111a,	// (0x0005a5d5) aid_size_cell_pinb

0x1124,	// (0x0005a5df) aid_size_list_pinb

0x49eb,	// (0x0005dea6) mup2_volume_cont_pane_ParamLimits

0x49eb,	// (0x0005dea6) mup2_volume_cont_pane

0xb452,	// (0x0006490d) mup2_volume_cont_pane_g1_ParamLimits

0xb452,	// (0x0006490d) mup2_volume_cont_pane_g1

0x0d9d,	// (0x0005a258) aid_size_cell_touch_ParamLimits

0x0d9d,	// (0x0005a258) aid_size_cell_touch

0x1009,	// (0x0005a4c4) touch_pane_ParamLimits

0x1009,	// (0x0005a4c4) touch_pane

0x0d7f,	// (0x0005a23a) main_rss2_pane

0xe93b,	// (0x00067df6) listscroll_rss2_pane

0xe944,	// (0x00067dff) rss2_navigation_pane

0xe94c,	// (0x00067e07) list_rss2_pane

0xab80,	// (0x0006403b) scroll_pane_cp22

0xe954,	// (0x00067e0f) rss2_navigation_pane_g1

0xe95d,	// (0x00067e18) rss2_navigation_pane_g2

0xe965,	// (0x00067e20) rss2_navigation_pane_g3

0x0002,

0x03ea,	// (0x000598a5) rss2_navigation_pane_g

0xe96d,	// (0x00067e28) rss2_navigation_pane_t1

0x4b0b,	// (0x0005dfc6) rss2_list_single_pane_ParamLimits

0x4b0b,	// (0x0005dfc6) rss2_list_single_pane

0xe97b,	// (0x00067e36) rss2_list_single_pane_t2

0xe989,	// (0x00067e44) rss2_list_single_pane_t3_ParamLimits

0xe989,	// (0x00067e44) rss2_list_single_pane_t3

0xe9a6,	// (0x00067e61) rss2_list_single_pane_t4

0x2957,	// (0x0005be12) smil_status_pane_g1

0x9970,	// (0x00062e2b) main_image2_pane_ParamLimits

0x9970,	// (0x00062e2b) main_image2_pane

0x45c3,	// (0x0005da7e) main_camera2_pane_g9_ParamLimits

0x45c3,	// (0x0005da7e) main_camera2_pane_g9

0x46df,	// (0x0005db9a) main_camera2_pane_t5_ParamLimits

0x46df,	// (0x0005db9a) main_camera2_pane_t5

0xb427,	// (0x000648e2) main_camera2_pane_t6_ParamLimits

0xb427,	// (0x000648e2) main_camera2_pane_t6

0x4b25,	// (0x0005dfe0) main_image2_pane_g1_ParamLimits

0x4b25,	// (0x0005dfe0) main_image2_pane_g1

0x38fe,	// (0x0005cdb9) smil2_video_pane_ParamLimits

0x38fe,	// (0x0005cdb9) smil2_video_pane

0x0ddd,	// (0x0005a298) aid_zoom_text_primary_cp

0x9966,	// (0x00062e21) popup_preview_fixed_window

0xa475,	// (0x00063930) im_reading_pane_g1

0x4495,	// (0x0005d950) cams2_bc_adjust_pane_cp_ParamLimits

0x4495,	// (0x0005d950) cams2_bc_adjust_pane_cp

0x4705,	// (0x0005dbc0) cams2_bc_adjust_pane_ParamLimits

0x4705,	// (0x0005dbc0) cams2_bc_adjust_pane

0xf092,	// (0x0006854d) cams2_bc_adjust_pane_g1

0xb48b,	// (0x00064946) cams2_slider_pane

0xb494,	// (0x0006494f) cams2_slider_pane_g1

0xb49d,	// (0x00064958) cams2_slider_pane_g2

0x0006,

0xf630,	// (0x00068aeb) cams2_slider_pane_g

0x1214,	// (0x0005a6cf) calc_display_pane_ParamLimits

0x123a,	// (0x0005a6f5) calc_paper_pane_ParamLimits

0x125d,	// (0x0005a718) grid_calc_pane_ParamLimits

0xaa4f,	// (0x00063f0a) popup_clock_digital_window_t1_ParamLimits

0xafa1,	// (0x0006445c) main_image_pane_t1

0x11f6,	// (0x0005a6b1) aid_size_cell_calc_ParamLimits

0x11f6,	// (0x0005a6b1) aid_size_cell_calc

0x3f19,	// (0x0005d3d4) popup_blid_sat_info2_window_ParamLimits

0x3f19,	// (0x0005d3d4) popup_blid_sat_info2_window

0xe9bc,	// (0x00067e77) aid_size_cell_blid

0xe9c4,	// (0x00067e7f) bg_popup_window_pane_cp07

0xe9e7,	// (0x00067ea2) grid_popup_blid_pane

0xe9f1,	// (0x00067eac) heading_pane_cp05_ParamLimits

0xe9f1,	// (0x00067eac) heading_pane_cp05

0xeabb,	// (0x00067f76) cell_popup_blid_pane_ParamLimits

0xeabb,	// (0x00067f76) cell_popup_blid_pane

0xeae5,	// (0x00067fa0) cell_popup_blid_pane_g1

0xeaed,	// (0x00067fa8) cell_popup_blid_pane_t1

0x49bb,	// (0x0005de76) mup2_indicator_pane_ParamLimits

0x49bb,	// (0x0005de76) mup2_indicator_pane

0xacba,	// (0x00064175) mup2_visualizer_osc_pane

0xe891,	// (0x00067d4c) mup2_visualizer_spec_pane_ParamLimits

0xe891,	// (0x00067d4c) mup2_visualizer_spec_pane

0x4b3b,	// (0x0005dff6) mup2_spec_half_pane

0x4b44,	// (0x0005dfff) mup2_spec_half_pane_cp

0x4b4c,	// (0x0005e007) mup2_spec_bar_pane_ParamLimits

0x4b4c,	// (0x0005e007) mup2_spec_bar_pane

0xe81b,	// (0x00067cd6) mup2_spec_bar_pane_g1

0xe825,	// (0x00067ce0) mup2_spec_bar_pane_g2

0x0001,

0x0364,	// (0x0005981f) mup2_spec_bar_pane_g

0x4b6c,	// (0x0005e027) mup2_osc_middle_pane

0xe837,	// (0x00067cf2) mup2_visualizer_osc_pane_g1

0x999e,	// (0x00062e59) popup_number_entry_window_t1_ParamLimits

0x99b1,	// (0x00062e6c) popup_number_entry_window_t2_ParamLimits

0x99c3,	// (0x00062e7e) popup_number_entry_window_t3_ParamLimits

0x105b,	// (0x0005a516) popup_number_entry_window_t5_ParamLimits

0x105b,	// (0x0005a516) popup_number_entry_window_t5

0xf0fb,	// (0x000685b6) popup_number_entry_window_t_ParamLimits

0x99d5,	// (0x00062e90) text_title_cp2_ParamLimits

0xae7b,	// (0x00064336) aid_hotspot_pointer_text2_pane

0xaea1,	// (0x0006435c) main_viewer_pane_g9_ParamLimits

0xaea1,	// (0x0006435c) main_viewer_pane_g9

0xa6a4,	// (0x00063b5f) cale_month_pane_t1_ParamLimits

0xa70f,	// (0x00063bca) bg_cale_pane_ParamLimits

0xa727,	// (0x00063be2) list_cale_pane_ParamLimits

0xa299,	// (0x00063754) listscroll_cale_day_pane_t1

0xa738,	// (0x00063bf3) scroll_pane_cp09_ParamLimits

0x3211,	// (0x0005c6cc) main_mup_eq_pane_t1_ParamLimits

0x3211,	// (0x0005c6cc) main_mup_eq_pane_t1

0x322d,	// (0x0005c6e8) main_mup_eq_pane_t2_ParamLimits

0x322d,	// (0x0005c6e8) main_mup_eq_pane_t2

0x3249,	// (0x0005c704) main_mup_eq_pane_t3_ParamLimits

0x3249,	// (0x0005c704) main_mup_eq_pane_t3

0x3267,	// (0x0005c722) main_mup_eq_pane_t4_ParamLimits

0x3267,	// (0x0005c722) main_mup_eq_pane_t4

0x3285,	// (0x0005c740) main_mup_eq_pane_t5_ParamLimits

0x3285,	// (0x0005c740) main_mup_eq_pane_t5

0x32a3,	// (0x0005c75e) main_mup_eq_pane_t6_ParamLimits

0x32a3,	// (0x0005c75e) main_mup_eq_pane_t6

0x32b9,	// (0x0005c774) main_mup_eq_pane_t7_ParamLimits

0x32b9,	// (0x0005c774) main_mup_eq_pane_t7

0x32cf,	// (0x0005c78a) main_mup_eq_pane_t8_ParamLimits

0x32cf,	// (0x0005c78a) main_mup_eq_pane_t8

0x32e5,	// (0x0005c7a0) main_mup_eq_pane_t9_ParamLimits

0x32e5,	// (0x0005c7a0) main_mup_eq_pane_t9

0x3301,	// (0x0005c7bc) main_mup_eq_pane_t10_ParamLimits

0x3301,	// (0x0005c7bc) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00068943) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00068943) main_mup_eq_pane_t

0x33d6,	// (0x0005c891) mup_equalizer_pane_cp5_ParamLimits

0x33ee,	// (0x0005c8a9) mup_equalizer_pane_cp6_ParamLimits

0x3406,	// (0x0005c8c1) mup_equalizer_pane_cp7_ParamLimits

0x0d7f,	// (0x0005a23a) main_gallery_pane

0xe840,	// (0x00067cfb) smil2_volume_pane

0xe848,	// (0x00067d03) smil_status_volume_pane_g1_ParamLimits

0xe85b,	// (0x00067d16) smil_status_volume_pane_g2_ParamLimits

0xb405,	// (0x000648c0) smil_status_volume_pane_g3_ParamLimits

0xf5af,	// (0x00068a6a) smil_status_volume_pane_g_ParamLimits

0xe9c4,	// (0x00067e7f) bg_popup_window_pane_cp07_ParamLimits

0xe9d2,	// (0x00067e8d) blid_firmament_pane

0x4b75,	// (0x0005e030) aid_size_cell_gallery_ParamLimits

0x4b75,	// (0x0005e030) aid_size_cell_gallery

0x4b8b,	// (0x0005e046) grid_gallery_pane_ParamLimits

0x4b8b,	// (0x0005e046) grid_gallery_pane

0x4ba6,	// (0x0005e061) cell_gallery_pane_ParamLimits

0x4ba6,	// (0x0005e061) cell_gallery_pane

0xeafb,	// (0x00067fb6) bg_cell_gallery_focus_pane_ParamLimits

0xeafb,	// (0x00067fb6) bg_cell_gallery_focus_pane

0xeb0d,	// (0x00067fc8) cell_gallery_pane_g1_ParamLimits

0xeb0d,	// (0x00067fc8) cell_gallery_pane_g1

0x4bf7,	// (0x0005e0b2) cell_gallery_pane_g2_ParamLimits

0x4bf7,	// (0x0005e0b2) cell_gallery_pane_g2

0x4c04,	// (0x0005e0bf) cell_gallery_pane_g3_ParamLimits

0x4c04,	// (0x0005e0bf) cell_gallery_pane_g3

0xeb19,	// (0x00067fd4) cell_gallery_pane_g4_ParamLimits

0xeb19,	// (0x00067fd4) cell_gallery_pane_g4

0x0003,

0xf63f,	// (0x00068afa) cell_gallery_pane_g_ParamLimits

0xf63f,	// (0x00068afa) cell_gallery_pane_g

0xeb25,	// (0x00067fe0) bg_cell_gallery_focus_pane_g1

0xeb2d,	// (0x00067fe8) bg_cell_gallery_focus_pane_g2

0xeb35,	// (0x00067ff0) bg_cell_gallery_focus_pane_g3

0xeb3d,	// (0x00067ff8) bg_cell_gallery_focus_pane_g4

0xeb45,	// (0x00068000) bg_cell_gallery_focus_pane_g5

0xeb4d,	// (0x00068008) bg_cell_gallery_focus_pane_g6

0xeb55,	// (0x00068010) bg_cell_gallery_focus_pane_g7

0xeb5d,	// (0x00068018) bg_cell_gallery_focus_pane_g8

0x0007,

0x0420,	// (0x000598db) bg_cell_gallery_focus_pane_g

0xeb65,	// (0x00068020) aid_firma_cardinal

0xeb79,	// (0x00068034) blid_firmament_pane_t1

0xeb90,	// (0x0006804b) blid_firmament_pane_t2

0xeba7,	// (0x00068062) blid_firmament_pane_t3

0xebbe,	// (0x00068079) blid_firmament_pane_t4

0x0003,

0x0431,	// (0x000598ec) blid_firmament_pane_t

0xebd5,	// (0x00068090) blid_sat_info_pane

0xebe5,	// (0x000680a0) blid_sat_info_pane_g1

0xebe5,	// (0x000680a0) blid_sat_info_pane_g2

0x0001,

0x043a,	// (0x000598f5) blid_sat_info_pane_g

0xebef,	// (0x000680aa) blid_sat_info_pane_t1

0xebfd,	// (0x000680b8) smil2_volume_content_pane

0xec06,	// (0x000680c1) smil2_volume_pane_g1

0xec0e,	// (0x000680c9) smil2_volume_content_pane_g1

0xec17,	// (0x000680d2) smil2_volume_content_pane_g2

0xec20,	// (0x000680db) smil2_volume_content_pane_g3

0xec29,	// (0x000680e4) smil2_volume_content_pane_g4

0xec32,	// (0x000680ed) smil2_volume_content_pane_g5

0xec3b,	// (0x000680f6) smil2_volume_content_pane_g6

0xec44,	// (0x000680ff) smil2_volume_content_pane_g7

0xec4d,	// (0x00068108) smil2_volume_content_pane_g8

0xec56,	// (0x00068111) smil2_volume_content_pane_g9

0xec5f,	// (0x0006811a) smil2_volume_content_pane_g10

0x0009,

0x043f,	// (0x000598fa) smil2_volume_content_pane_g

0x1730,	// (0x0005abeb) cale_week_day_heading_pane_t1_ParamLimits

0x1744,	// (0x0005abff) cale_week_day_heading_pane_t2_ParamLimits

0x1758,	// (0x0005ac13) cale_week_day_heading_pane_t3_ParamLimits

0x176c,	// (0x0005ac27) cale_week_day_heading_pane_t4_ParamLimits

0x1780,	// (0x0005ac3b) cale_week_day_heading_pane_t5_ParamLimits

0x1794,	// (0x0005ac4f) cale_week_day_heading_pane_t6_ParamLimits

0x17a8,	// (0x0005ac63) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x000686bb) cale_week_day_heading_pane_t_ParamLimits

0xa2ab,	// (0x00063766) bg_cale_side_pane_ParamLimits

0x17bc,	// (0x0005ac77) cale_week_time_pane_t1_ParamLimits

0x17d4,	// (0x0005ac8f) cale_week_time_pane_t2_ParamLimits

0x17ec,	// (0x0005aca7) cale_week_time_pane_t3_ParamLimits

0x1804,	// (0x0005acbf) cale_week_time_pane_t4_ParamLimits

0x181c,	// (0x0005acd7) cale_week_time_pane_t5_ParamLimits

0x1834,	// (0x0005acef) cale_week_time_pane_t6_ParamLimits

0x184c,	// (0x0005ad07) cale_week_time_pane_t7_ParamLimits

0x1868,	// (0x0005ad23) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x000686ca) cale_week_time_pane_t_ParamLimits

0x1888,	// (0x0005ad43) cell_cale_week_pane_g2_ParamLimits

0xa2ab,	// (0x00063766) bg_cale_side_pane_cp01_ParamLimits

0x27c6,	// (0x0005bc81) cale_month_week_pane_t1_ParamLimits

0x27dd,	// (0x0005bc98) cale_month_week_pane_t2_ParamLimits

0x27f4,	// (0x0005bcaf) cale_month_week_pane_t3_ParamLimits

0x280b,	// (0x0005bcc6) cale_month_week_pane_t4_ParamLimits

0x2822,	// (0x0005bcdd) cale_month_week_pane_t5_ParamLimits

0x2839,	// (0x0005bcf4) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x000687a3) cale_month_week_pane_t_ParamLimits

0xa6b6,	// (0x00063b71) cell_cale_month_pane_g1_ParamLimits

0x0d7f,	// (0x0005a23a) main_cale_event_viewer_pane

0x0d7f,	// (0x0005a23a) listscroll_cale_event_viewer_pane

0xec68,	// (0x00068123) list_cale_ev_pane

0xec70,	// (0x0006812b) scroll_pane_cp023

0x4c11,	// (0x0005e0cc) field_cale_ev_pane_ParamLimits

0x4c11,	// (0x0005e0cc) field_cale_ev_pane

0xec7c,	// (0x00068137) field_cale_ev_content_pane_ParamLimits

0xec7c,	// (0x00068137) field_cale_ev_content_pane

0xec88,	// (0x00068143) field_cale_ev_pane_g1_ParamLimits

0xec88,	// (0x00068143) field_cale_ev_pane_g1

0xec94,	// (0x0006814f) field_cale_ev_pane_g2_ParamLimits

0xec94,	// (0x0006814f) field_cale_ev_pane_g2

0xecac,	// (0x00068167) field_cale_ev_pane_g3_ParamLimits

0xecac,	// (0x00068167) field_cale_ev_pane_g3

0x0002,

0x0454,	// (0x0005990f) field_cale_ev_pane_g_ParamLimits

0x0454,	// (0x0005990f) field_cale_ev_pane_g

0xecc4,	// (0x0006817f) field_cale_ev_pane_t1_ParamLimits

0xecc4,	// (0x0006817f) field_cale_ev_pane_t1

0x4c35,	// (0x0005e0f0) field_cale_ev_content_pane_t1_ParamLimits

0x4c35,	// (0x0005e0f0) field_cale_ev_content_pane_t1

0xae45,	// (0x00064300) bg_button_pane_cp01

0xa0e3,	// (0x0006359e) listscroll_cale_week_pane_ParamLimits

0x151a,	// (0x0005a9d5) popup_toolbar_window_cp01

0xa299,	// (0x00063754) listscroll_cale_week_pane_t1_ParamLimits

0xa0e3,	// (0x0006359e) listscroll_cale_day_pane_ParamLimits

0x29b7,	// (0x0005be72) popup_toolbar_window_cp02

0xa299,	// (0x00063754) listscroll_cale_day_pane_t1_ParamLimits

0xa0e3,	// (0x0006359e) main_cale_month_pane_ParamLimits

0x4199,	// (0x0005d654) popup_toolbar_window_cp03_ParamLimits

0x4199,	// (0x0005d654) popup_toolbar_window_cp03

0x37bc,	// (0x0005cc77) main_image_pane_g2_ParamLimits

0x37bc,	// (0x0005cc77) main_image_pane_g2

0x37cd,	// (0x0005cc88) main_image_pane_g3_ParamLimits

0x37cd,	// (0x0005cc88) main_image_pane_g3

0x0002,

0xf51a,	// (0x000689d5) main_image_pane_g_ParamLimits

0xf51a,	// (0x000689d5) main_image_pane_g

0xafa1,	// (0x0006445c) main_image_pane_t1_ParamLimits

0x37de,	// (0x0005cc99) main_image_pane_t2_ParamLimits

0x37de,	// (0x0005cc99) main_image_pane_t2

0x37f0,	// (0x0005ccab) main_image_pane_t3_ParamLimits

0x37f0,	// (0x0005ccab) main_image_pane_t3

0x3818,	// (0x0005ccd3) main_image_pane_t4_ParamLimits

0x3818,	// (0x0005ccd3) main_image_pane_t4

0x0003,

0xf521,	// (0x000689dc) main_image_pane_t_ParamLimits

0xf521,	// (0x000689dc) main_image_pane_t

0x3838,	// (0x0005ccf3) popup_image_details_window_cp01

0x3842,	// (0x0005ccfd) popup_toobar_trans_pane_cp01_ParamLimits

0x3842,	// (0x0005ccfd) popup_toobar_trans_pane_cp01

0x400c,	// (0x0005d4c7) popup_image_details_window_ParamLimits

0x400c,	// (0x0005d4c7) popup_image_details_window

0xe78c,	// (0x00067c47) popup_image_focus_window

0x444f,	// (0x0005d90a) camera2_autofocus_pane_ParamLimits

0x444f,	// (0x0005d90a) camera2_autofocus_pane

0x0d7f,	// (0x0005a23a) bg_popup_sub_pane_cp06

0xecdb,	// (0x00068196) popup_image_focus_window_g1

0xece3,	// (0x0006819e) popup_image_focus_window_g2

0xeceb,	// (0x000681a6) popup_image_focus_window_g3

0xecf3,	// (0x000681ae) popup_image_focus_window_g4

0x0003,

0x045b,	// (0x00059916) popup_image_focus_window_g

0xecfb,	// (0x000681b6) popup_image_focus_window_t1

0xed09,	// (0x000681c4) popup_image_focus_window_t2

0xed19,	// (0x000681d4) popup_image_focus_window_t3

0x0002,

0x0464,	// (0x0005991f) popup_image_focus_window_t

0xed27,	// (0x000681e2) camera2_autofocus_pane_g1

0x9970,	// (0x00062e2b) bg_tb_trans_pane_cp01

0xed35,	// (0x000681f0) popup_image_details_window_g1

0xed48,	// (0x00068203) popup_image_details_window_g2

0x0002,

0x0476,	// (0x00059931) popup_image_details_window_g

0xed71,	// (0x0006822c) popup_image_details_window_t1

0xed83,	// (0x0006823e) popup_image_details_window_t2

0xed9c,	// (0x00068257) popup_image_details_window_t3

0xedb0,	// (0x0006826b) popup_image_details_window_t4

0xedcb,	// (0x00068286) popup_image_details_window_t5

0x0004,

0x047d,	// (0x00059938) popup_image_details_window_t

0xa0ab,	// (0x00063566) bg_calc_paper_pane_ParamLimits

0xa0bf,	// (0x0006357a) grid_highlight_pane_cp013

0xa0c9,	// (0x00063584) list_calc_pane_ParamLimits

0xa0db,	// (0x00063596) scroll_pane_cp024

0xa0e3,	// (0x0006359e) bg_calc_display_pane_ParamLimits

0x1354,	// (0x0005a80f) calc_display_pane_t1_ParamLimits

0x1366,	// (0x0005a821) calc_display_pane_t2_ParamLimits

0xa0ef,	// (0x000635aa) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0006863d) calc_display_pane_t_ParamLimits

0x1429,	// (0x0005a8e4) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0006865a) cell_calc_pane_g

0x1432,	// (0x0005a8ed) cell_calc_pane_t1

0xa166,	// (0x00063621) grid_highlight_pane_cp02_ParamLimits

0xa17c,	// (0x00063637) toolbar_button_pane_cp01_ParamLimits

0xa17c,	// (0x00063637) toolbar_button_pane_cp01

0xafe6,	// (0x000644a1) temp_image_control_pane_ParamLimits

0xafe6,	// (0x000644a1) temp_image_control_pane

0x9970,	// (0x00062e2b) main_mp3_pane

0xede5,	// (0x000682a0) temp_image_control_pane_g1_ParamLimits

0xede5,	// (0x000682a0) temp_image_control_pane_g1

0xedf3,	// (0x000682ae) temp_image_control_pane_g2_ParamLimits

0xedf3,	// (0x000682ae) temp_image_control_pane_g2

0xee05,	// (0x000682c0) temp_image_control_pane_g3_ParamLimits

0xee05,	// (0x000682c0) temp_image_control_pane_g3

0x4c86,	// (0x0005e141) temp_image_control_pane_g4_ParamLimits

0x4c86,	// (0x0005e141) temp_image_control_pane_g4

0x0003,

0xf653,	// (0x00068b0e) temp_image_control_pane_g_ParamLimits

0xf653,	// (0x00068b0e) temp_image_control_pane_g

0xede5,	// (0x000682a0) main_mp3_pane_g1

0x4c99,	// (0x0005e154) main_mp3_pane_g2

0x0007,

0xf65c,	// (0x00068b17) main_mp3_pane_g

0xee48,	// (0x00068303) main_mp3_pane_t1

0xa37a,	// (0x00063835) main_camera_pane_g8_ParamLimits

0xa37a,	// (0x00063835) main_camera_pane_g8

0x1b59,	// (0x0005b014) main_video_pane_g7_ParamLimits

0x1b59,	// (0x0005b014) main_video_pane_g7

0xb440,	// (0x000648fb) main_camera2_pane_t7_ParamLimits

0xb440,	// (0x000648fb) main_camera2_pane_t7

0xa4cc,	// (0x00063987) scroll_pane_cp025_ParamLimits

0xa4cc,	// (0x00063987) scroll_pane_cp025

0xa4e0,	// (0x0006399b) scroll_pane_cp026_ParamLimits

0xa4e0,	// (0x0006399b) scroll_pane_cp026

0xa4ef,	// (0x000639aa) wml_content_pane_ParamLimits

0x0d7f,	// (0x0005a23a) main_touch_calib_pane

0x4d60,	// (0x0005e21b) main_touch_calib_pane_g1

0x4d6c,	// (0x0005e227) main_touch_calib_pane_g2

0x4d78,	// (0x0005e233) main_touch_calib_pane_g3

0x4d84,	// (0x0005e23f) main_touch_calib_pane_g4

0x0003,

0xf67a,	// (0x00068b35) main_touch_calib_pane_g

0x4d90,	// (0x0005e24b) main_touch_calib_pane_t1

0x4daa,	// (0x0005e265) main_touch_calib_pane_t2

0x0004,

0xf683,	// (0x00068b3e) main_touch_calib_pane_t

0xabfb,	// (0x000640b6) mup_progress_pane_cp02

0xac1a,	// (0x000640d5) navi_pane_g1

0xac7c,	// (0x00064137) navi_pane_mp_t3

0x9970,	// (0x00062e2b) main_mp3_pane_ParamLimits

0x41db,	// (0x0005d696) navi_pane_ParamLimits

0xede5,	// (0x000682a0) main_mp3_pane_g1_ParamLimits

0x4c99,	// (0x0005e154) main_mp3_pane_g2_ParamLimits

0x4ca5,	// (0x0005e160) main_mp3_pane_g3_ParamLimits

0x4ca5,	// (0x0005e160) main_mp3_pane_g3

0x4cb3,	// (0x0005e16e) main_mp3_pane_g4_ParamLimits

0x4cb3,	// (0x0005e16e) main_mp3_pane_g4

0xee15,	// (0x000682d0) main_mp3_pane_g5_ParamLimits

0xee15,	// (0x000682d0) main_mp3_pane_g5

0xee23,	// (0x000682de) main_mp3_pane_g6_ParamLimits

0xee23,	// (0x000682de) main_mp3_pane_g6

0xee30,	// (0x000682eb) main_mp3_pane_g7_ParamLimits

0xee30,	// (0x000682eb) main_mp3_pane_g7

0xee3c,	// (0x000682f7) main_mp3_pane_g8_ParamLimits

0xee3c,	// (0x000682f7) main_mp3_pane_g8

0xf65c,	// (0x00068b17) main_mp3_pane_g_ParamLimits

0x4cbf,	// (0x0005e17a) main_mp3_pane_t2

0x4ccd,	// (0x0005e188) main_mp3_pane_t3

0xee56,	// (0x00068311) main_mp3_pane_t4

0xee64,	// (0x0006831f) main_mp3_pane_t5

0x0005,

0xf66d,	// (0x00068b28) main_mp3_pane_t

0xee72,	// (0x0006832d) mup_progress_pane_cp01

0x0ddd,	// (0x0005a298) aid_zoom_text_secondary2

0xec68,	// (0x00068123) list_cale_ev2_pane

0xec70,	// (0x0006812b) scroll_pane_cp023_ParamLimits

0x4e02,	// (0x0005e2bd) field_cale_ev2_pane_ParamLimits

0x4e02,	// (0x0005e2bd) field_cale_ev2_pane

0x4e26,	// (0x0005e2e1) field_cale_ev2_pane_g1_ParamLimits

0x4e26,	// (0x0005e2e1) field_cale_ev2_pane_g1

0x4e32,	// (0x0005e2ed) field_cale_ev2_pane_g2_ParamLimits

0x4e32,	// (0x0005e2ed) field_cale_ev2_pane_g2

0x4e4a,	// (0x0005e305) field_cale_ev2_pane_g3_ParamLimits

0x4e4a,	// (0x0005e305) field_cale_ev2_pane_g3

0x0003,

0xf68e,	// (0x00068b49) field_cale_ev2_pane_g_ParamLimits

0xf68e,	// (0x00068b49) field_cale_ev2_pane_g

0x4e6e,	// (0x0005e329) field_cale_ev2_pane_t1_ParamLimits

0x4e6e,	// (0x0005e329) field_cale_ev2_pane_t1

0x4e85,	// (0x0005e340) field_cale_ev2_pane_t2_ParamLimits

0x4e85,	// (0x0005e340) field_cale_ev2_pane_t2

0x0001,

0xf697,	// (0x00068b52) field_cale_ev2_pane_t_ParamLimits

0xf697,	// (0x00068b52) field_cale_ev2_pane_t

0x3657,	// (0x0005cb12) main_postcard_pane_g5_ParamLimits

0x3657,	// (0x0005cb12) main_postcard_pane_g5

0x366d,	// (0x0005cb28) main_postcard_pane_g6_ParamLimits

0x366d,	// (0x0005cb28) main_postcard_pane_g6

0x1905,	// (0x0005adc0) camera2_autofocus_pane_cp_ParamLimits

0x1905,	// (0x0005adc0) camera2_autofocus_pane_cp

0x9970,	// (0x00062e2b) main_mup3_pane

0x4eba,	// (0x0005e375) main_mup3_pane_g1_ParamLimits

0x4eba,	// (0x0005e375) main_mup3_pane_g1

0x4edc,	// (0x0005e397) main_mup3_pane_g2_ParamLimits

0x4edc,	// (0x0005e397) main_mup3_pane_g2

0x4f5f,	// (0x0005e41a) main_mup3_pane_g3_ParamLimits

0x4f5f,	// (0x0005e41a) main_mup3_pane_g3

0x4fa3,	// (0x0005e45e) main_mup3_pane_g4_ParamLimits

0x4fa3,	// (0x0005e45e) main_mup3_pane_g4

0x4fe7,	// (0x0005e4a2) main_mup3_pane_g5_ParamLimits

0x4fe7,	// (0x0005e4a2) main_mup3_pane_g5

0x502b,	// (0x0005e4e6) main_mup3_pane_g6_ParamLimits

0x502b,	// (0x0005e4e6) main_mup3_pane_g6

0xee7a,	// (0x00068335) main_mup3_pane_g7_ParamLimits

0xee7a,	// (0x00068335) main_mup3_pane_g7

0x0007,

0xf6a7,	// (0x00068b62) main_mup3_pane_g_ParamLimits

0xf6a7,	// (0x00068b62) main_mup3_pane_g

0x50a7,	// (0x0005e562) main_mup3_pane_t1_ParamLimits

0x50a7,	// (0x0005e562) main_mup3_pane_t1

0x5121,	// (0x0005e5dc) main_mup3_pane_t2_ParamLimits

0x5121,	// (0x0005e5dc) main_mup3_pane_t2

0x51fb,	// (0x0005e6b6) main_mup3_pane_t4_ParamLimits

0x51fb,	// (0x0005e6b6) main_mup3_pane_t4

0x5259,	// (0x0005e714) main_mup3_pane_t5_ParamLimits

0x5259,	// (0x0005e714) main_mup3_pane_t5

0x5311,	// (0x0005e7cc) main_mup3_pane_t6_ParamLimits

0x5311,	// (0x0005e7cc) main_mup3_pane_t6

0x0005,

0xf6b8,	// (0x00068b73) main_mup3_pane_t_ParamLimits

0xf6b8,	// (0x00068b73) main_mup3_pane_t

0x53c7,	// (0x0005e882) mup3_progress_pane_ParamLimits

0x53c7,	// (0x0005e882) mup3_progress_pane

0x544b,	// (0x0005e906) popup_mup3_control_window_ParamLimits

0x544b,	// (0x0005e906) popup_mup3_control_window

0xee88,	// (0x00068343) popup_mup3_text_window

0x5481,	// (0x0005e93c) mup3_progress_pane_t1

0x5498,	// (0x0005e953) mup3_progress_pane_t2

0xee90,	// (0x0006834b) mup3_progress_pane_t3

0x0002,

0xf6c5,	// (0x00068b80) mup3_progress_pane_t

0xeea7,	// (0x00068362) mup_progress_pane_cp03

0x0d7f,	// (0x0005a23a) bg_tb_trans_pane_cp04

0x54af,	// (0x0005e96a) mup3_volume_pane

0x54b7,	// (0x0005e972) popup_mup3_control_window_g1

0x54c0,	// (0x0005e97b) mup3_volume_pane_g1

0x54c9,	// (0x0005e984) mup3_volume_pane_g2

0x54d2,	// (0x0005e98d) mup3_volume_pane_g3

0x0002,

0xf6cc,	// (0x00068b87) mup3_volume_pane_g

0x0d7f,	// (0x0005a23a) bg_tb_trans_pane_cp03

0xeeb7,	// (0x00068372) popup_mup3_text_window_g1

0xeebf,	// (0x0006837a) popup_mup3_text_window_t1

0xa13d,	// (0x000635f8) list_calc_item_pane_g1_ParamLimits

0xe932,	// (0x00067ded) mup_volume_pane_cp_g1

0x4dc4,	// (0x0005e27f) main_touch_calib_pane_t3

0x4dd8,	// (0x0005e293) main_touch_calib_pane_t4

0x4dec,	// (0x0005e2a7) main_touch_calib_pane_t5

0x0d89,	// (0x0005a244) aid_cell_size_toolbar2

0x0d91,	// (0x0005a24c) aid_popup3_width_pane

0x0dcd,	// (0x0005a288) aid_zoom_text_msg_primary

0xa35a,	// (0x00063815) vorec_t7

0xa101,	// (0x000635bc) bg_calc_paper_pane_g1_ParamLimits

0xa10d,	// (0x000635c8) bg_calc_paper_pane_g2_ParamLimits

0xa119,	// (0x000635d4) bg_calc_paper_pane_g3_ParamLimits

0xa125,	// (0x000635e0) bg_calc_paper_pane_g4_ParamLimits

0xa131,	// (0x000635ec) bg_calc_paper_pane_g5_ParamLimits

0x13b3,	// (0x0005a86e) bg_calc_paper_pane_g6_ParamLimits

0x13c6,	// (0x0005a881) bg_calc_paper_pane_g7_ParamLimits

0x13d9,	// (0x0005a894) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00068644) bg_calc_paper_pane_g_ParamLimits

0x13ea,	// (0x0005a8a5) calc_bg_paper_pane_g9_ParamLimits

0x1a67,	// (0x0005af22) image_qvga_pane_ParamLimits

0x1a67,	// (0x0005af22) image_qvga_pane

0x9fec,	// (0x000634a7) bg_popup_sub_pane_cp04_ParamLimits

0xaf1d,	// (0x000643d8) popup_mup_playback_window_g1_ParamLimits

0xaf29,	// (0x000643e4) popup_mup_playback_window_t1_ParamLimits

0xaf3e,	// (0x000643f9) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x000689d0) popup_mup_playback_window_t_ParamLimits

0x48d3,	// (0x0005dd8e) main_mup2_pane_g3_ParamLimits

0x48d3,	// (0x0005dd8e) main_mup2_pane_g3

0x1e2a,	// (0x0005b2e5) popup_toolbar_window_cp04

0xb339,	// (0x000647f4) popup_call2_audio_second_window_g3_ParamLimits

0xb339,	// (0x000647f4) popup_call2_audio_second_window_g3

0xdd86,	// (0x00067241) popup_call2_audio_first_window_g4_ParamLimits

0xdd86,	// (0x00067241) popup_call2_audio_first_window_g4

0xe405,	// (0x000678c0) popup_call2_audio_in_window_g4_ParamLimits

0xe405,	// (0x000678c0) popup_call2_audio_in_window_g4

0x379e,	// (0x0005cc59) aid_area_sk_bg_cut_ParamLimits

0x379e,	// (0x0005cc59) aid_area_sk_bg_cut

0xaf53,	// (0x0006440e) aid_area_sk_bg_cut_2_ParamLimits

0xaf53,	// (0x0006440e) aid_area_sk_bg_cut_2

0x4be7,	// (0x0005e0a2) aid_placing_details_win

0x4bef,	// (0x0005e0aa) aid_placing_details_win_2

0xed27,	// (0x000681e2) camera2_autofocus_pane_g1_ParamLimits

0x0fa8,	// (0x0005a463) popup_fixed_preview_cale_window_ParamLimits

0x0fa8,	// (0x0005a463) popup_fixed_preview_cale_window

0xacd4,	// (0x0006418f) navi_slider_pane_g3

0xacdd,	// (0x00064198) navi_slider_pane_g4

0xace6,	// (0x000641a1) navi_slider_pane_g5

0xacd4,	// (0x0006418f) navi_slider_pane_g6

0xacef,	// (0x000641aa) navi_slider_pane_g7

0xae12,	// (0x000642cd) mup_scale_pane_g3

0xae1b,	// (0x000642d6) mup_scale_pane_g4

0xae24,	// (0x000642df) mup_scale_pane_g5

0x341e,	// (0x0005c8d9) mup_scale_pane_g6

0x3427,	// (0x0005c8e2) mup_scale_pane_g7

0xacd4,	// (0x0006418f) cams2_slider_pane_g3

0xe9b4,	// (0x00067e6f) cams2_slider_pane_g4

0xb4a6,	// (0x00064961) cams2_slider_pane_g5

0xacd4,	// (0x0006418f) cams2_slider_pane_g6

0xb4ae,	// (0x00064969) cams2_slider_pane_g7

0xebe5,	// (0x000680a0) camera2_autofocus_pane_cp_g1

0xeecd,	// (0x00068388) bg_popup_preview_window_pane_cp02_ParamLimits

0xeecd,	// (0x00068388) bg_popup_preview_window_pane_cp02

0xeed9,	// (0x00068394) list_fp_cale_pane_ParamLimits

0xeed9,	// (0x00068394) list_fp_cale_pane

0xeee5,	// (0x000683a0) popup_fixed_preview_cale_window_t1_ParamLimits

0xeee5,	// (0x000683a0) popup_fixed_preview_cale_window_t1

0x54db,	// (0x0005e996) popup_fixed_preview_cale_window_t2_ParamLimits

0x54db,	// (0x0005e996) popup_fixed_preview_cale_window_t2

0x54f0,	// (0x0005e9ab) popup_fixed_preview_cale_window_t3_ParamLimits

0x54f0,	// (0x0005e9ab) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d3,	// (0x00068b8e) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d3,	// (0x00068b8e) popup_fixed_preview_cale_window_t

0xb4b7,	// (0x00064972) list_single_fp_cale_pane_ParamLimits

0xb4b7,	// (0x00064972) list_single_fp_cale_pane

0xef03,	// (0x000683be) list_single_fp_cale_pane_g1_ParamLimits

0xef03,	// (0x000683be) list_single_fp_cale_pane_g1

0xef0f,	// (0x000683ca) list_single_fp_cale_pane_g2_ParamLimits

0xef0f,	// (0x000683ca) list_single_fp_cale_pane_g2

0x0002,

0x050f,	// (0x000599ca) list_single_fp_cale_pane_g_ParamLimits

0x050f,	// (0x000599ca) list_single_fp_cale_pane_g

0xef28,	// (0x000683e3) list_single_fp_cale_pane_t1_ParamLimits

0xef28,	// (0x000683e3) list_single_fp_cale_pane_t1

0xef3a,	// (0x000683f5) list_single_fp_cale_pane_t2_ParamLimits

0xef3a,	// (0x000683f5) list_single_fp_cale_pane_t2

0x0001,

0x0516,	// (0x000599d1) list_single_fp_cale_pane_t_ParamLimits

0x0516,	// (0x000599d1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0d7f,	// (0x0005a23a) main_dialer_pane

0x5507,	// (0x0005e9c2) aid_cell_size_keypad

0x5511,	// (0x0005e9cc) dialer_ne_pane

0x551b,	// (0x0005e9d6) grid_dialer_command_1_pane

0x5523,	// (0x0005e9de) grid_dialer_command_2_pane

0x552b,	// (0x0005e9e6) grid_dialer_keypad_pane

0x553f,	// (0x0005e9fa) bg_popup_call_pane_cp06_ParamLimits

0x553f,	// (0x0005e9fa) bg_popup_call_pane_cp06

0x554b,	// (0x0005ea06) dialer_ne_clear_pane_ParamLimits

0x554b,	// (0x0005ea06) dialer_ne_clear_pane

0xef6d,	// (0x00068428) dialer_ne_pane_g1

0xef75,	// (0x00068430) dialer_ne_pane_t1_ParamLimits

0xef75,	// (0x00068430) dialer_ne_pane_t1

0x5557,	// (0x0005ea12) dialer_ne_pane_t2_ParamLimits

0x5557,	// (0x0005ea12) dialer_ne_pane_t2

0x5581,	// (0x0005ea3c) dialer_ne_pane_t3_ParamLimits

0x5581,	// (0x0005ea3c) dialer_ne_pane_t3

0x0002,

0xf6da,	// (0x00068b95) dialer_ne_pane_t_ParamLimits

0xf6da,	// (0x00068b95) dialer_ne_pane_t

0x55b1,	// (0x0005ea6c) dialer_ne_pane_t3_copy1_ParamLimits

0x55b1,	// (0x0005ea6c) dialer_ne_pane_t3_copy1

0x55e0,	// (0x0005ea9b) cell_dialer_keypad_pane_ParamLimits

0x55e0,	// (0x0005ea9b) cell_dialer_keypad_pane

0x55f7,	// (0x0005eab2) cell_dialer_command_1_pane_ParamLimits

0x55f7,	// (0x0005eab2) cell_dialer_command_1_pane

0x560d,	// (0x0005eac8) cell_dialer_command_2_pane_ParamLimits

0x560d,	// (0x0005eac8) cell_dialer_command_2_pane

0xef87,	// (0x00068442) bg_button_pane_cp02_ParamLimits

0xef87,	// (0x00068442) bg_button_pane_cp02

0x561c,	// (0x0005ead7) cell_dialer_keypad_pane_g1_ParamLimits

0x561c,	// (0x0005ead7) cell_dialer_keypad_pane_g1

0xef87,	// (0x00068442) bg_button_pane_cp03_ParamLimits

0xef87,	// (0x00068442) bg_button_pane_cp03

0x5631,	// (0x0005eaec) cell_dialer_command_1_pane_g1_ParamLimits

0x5631,	// (0x0005eaec) cell_dialer_command_1_pane_g1

0xef93,	// (0x0006844e) bg_button_pane_cp04

0x5645,	// (0x0005eb00) cell_dialer_command_2_pane_g1

0xacba,	// (0x00064175) bg_button_pane_cp06

0xef9b,	// (0x00068456) dialer_ne_clear_pane_g1

0x2f00,	// (0x0005c3bb) navi_pane_g2

0x2f2e,	// (0x0005c3e9) navi_pane_g3

0x0002,

0xf418,	// (0x000688d3) navi_pane_g

0x2f59,	// (0x0005c414) navi_pane_mv_g2

0x2f80,	// (0x0005c43b) navi_pane_mv_g5

0x2f88,	// (0x0005c443) navi_pane_mv_t1

0xa0e3,	// (0x0006359e) main_clock2_pane

0x567d,	// (0x0005eb38) main_clock2_list_pane_ParamLimits

0x567d,	// (0x0005eb38) main_clock2_list_pane

0x56b5,	// (0x0005eb70) main_clock2_pane_t1_ParamLimits

0x56b5,	// (0x0005eb70) main_clock2_pane_t1

0x56f1,	// (0x0005ebac) main_clock2_pane_t2_ParamLimits

0x56f1,	// (0x0005ebac) main_clock2_pane_t2

0x0004,

0xf6e1,	// (0x00068b9c) main_clock2_pane_t_ParamLimits

0xf6e1,	// (0x00068b9c) main_clock2_pane_t

0x577d,	// (0x0005ec38) popup_clock_analogue_window_cp03_ParamLimits

0x577d,	// (0x0005ec38) popup_clock_analogue_window_cp03

0x57a4,	// (0x0005ec5f) popup_clock_digital_window_cp02_ParamLimits

0x57a4,	// (0x0005ec5f) popup_clock_digital_window_cp02

0x581d,	// (0x0005ecd8) main_clock2_list_single_pane_ParamLimits

0x581d,	// (0x0005ecd8) main_clock2_list_single_pane

0xacba,	// (0x00064175) list_highlight_pane_cp05

0xefa3,	// (0x0006845e) main_clock2_list_single_pane_t1

0x1e2a,	// (0x0005b2e5) popup_toolbar_window_cp04_ParamLimits

0x4c56,	// (0x0005e111) camera2_autofocus_pane_g2_ParamLimits

0x4c56,	// (0x0005e111) camera2_autofocus_pane_g2

0x4c62,	// (0x0005e11d) camera2_autofocus_pane_g3_ParamLimits

0x4c62,	// (0x0005e11d) camera2_autofocus_pane_g3

0x4c6e,	// (0x0005e129) camera2_autofocus_pane_g4_ParamLimits

0x4c6e,	// (0x0005e129) camera2_autofocus_pane_g4

0x4c7a,	// (0x0005e135) camera2_autofocus_pane_g5_ParamLimits

0x4c7a,	// (0x0005e135) camera2_autofocus_pane_g5

0x0004,

0xf648,	// (0x00068b03) camera2_autofocus_pane_g_ParamLimits

0xf648,	// (0x00068b03) camera2_autofocus_pane_g

0x4e9a,	// (0x0005e355) camera2_autofocus_pane_cp_g2

0x4ea2,	// (0x0005e35d) camera2_autofocus_pane_cp_g3

0x4eaa,	// (0x0005e365) camera2_autofocus_pane_cp_g4

0x4eb2,	// (0x0005e36d) camera2_autofocus_pane_cp_g5

0x0004,

0xf69c,	// (0x00068b57) camera2_autofocus_pane_cp_g

0x5537,	// (0x0005e9f2) popup_dialer_spcha_window

0x0d7f,	// (0x0005a23a) bg_popup_sub_pane_cp07

0xefb1,	// (0x0006846c) list_spcha_pane

0xefb9,	// (0x00068474) list_single_spcha_pane_ParamLimits

0xefb9,	// (0x00068474) list_single_spcha_pane

0x0d7f,	// (0x0005a23a) list_highlight_pane_cp06

0xefca,	// (0x00068485) list_single_spcha_pane_t1

0xe1af,	// (0x0006766a) popup_call2_audio_out_window_g4_ParamLimits

0xe1af,	// (0x0006766a) popup_call2_audio_out_window_g4

0x0d7f,	// (0x0005a23a) main_imed2_pane

0xe796,	// (0x00067c51) popup_imed_adjust2_window

0x4024,	// (0x0005d4df) popup_imed_trans_window_ParamLimits

0x4024,	// (0x0005d4df) popup_imed_trans_window

0xea1d,	// (0x00067ed8) popup_blid_sat_info2_window_t1

0xea2b,	// (0x00067ee6) popup_blid_sat_info2_window_t2

0x000a,

0x0400,	// (0x000598bb) popup_blid_sat_info2_window_t

0x58d3,	// (0x0005ed8e) aid_size_cell_colour_35

0x58f3,	// (0x0005edae) aid_size_cell_colour_112

0x5913,	// (0x0005edce) aid_size_cell_effect

0xe76a,	// (0x00067c25) bg_tb_trans_pane_cp02

0xa7ab,	// (0x00063c66) heading_imed_pane

0x5933,	// (0x0005edee) listscroll_imed_pane

0xefd8,	// (0x00068493) heading_imed_pane_g1

0xefe0,	// (0x0006849b) heading_imed_pane_t1

0xefee,	// (0x000684a9) grid_imed_colour_35_pane_ParamLimits

0xefee,	// (0x000684a9) grid_imed_colour_35_pane

0x593f,	// (0x0005edfa) grid_imed_effect_pane

0xf00a,	// (0x000684c5) list_imed_aspect_pane

0x5956,	// (0x0005ee11) scroll_pane_cp027_ParamLimits

0x5956,	// (0x0005ee11) scroll_pane_cp027

0x5967,	// (0x0005ee22) cell_imed_effect_pane_ParamLimits

0x5967,	// (0x0005ee22) cell_imed_effect_pane

0xf012,	// (0x000684cd) cell_imed_colour_pane_ParamLimits

0xf012,	// (0x000684cd) cell_imed_colour_pane

0xf05c,	// (0x00068517) cell_imed_colour_pane_g1_ParamLimits

0xf05c,	// (0x00068517) cell_imed_colour_pane_g1

0xf06d,	// (0x00068528) hgihlgiht_grid_pane_cp016_ParamLimits

0xf06d,	// (0x00068528) hgihlgiht_grid_pane_cp016

0x598c,	// (0x0005ee47) cell_imed_effect_pane_g1

0x5994,	// (0x0005ee4f) grid_highlight_pane_cp017

0xf07e,	// (0x00068539) list_imed_single_pane_ParamLimits

0xf07e,	// (0x00068539) list_imed_single_pane

0x0d7f,	// (0x0005a23a) list_highlight_pane_cp07

0xf09a,	// (0x00068555) list_imed_aspect_pane_comp1_t1

0xe76a,	// (0x00067c25) bg_tb_trans_pane_cp05

0xf0bc,	// (0x00068577) popup_imed_adjust2_window_g1

0xf0e3,	// (0x0006859e) popup_imed_adjust2_window_t1

0x599d,	// (0x0005ee58) slider_imed_adjust_pane

0x59b1,	// (0x0005ee6c) slider_imed_adjust_pane_g1

0x59c1,	// (0x0005ee7c) slider_imed_adjust_pane_g2

0x59d1,	// (0x0005ee8c) slider_imed_adjust_pane_g3

0x59e2,	// (0x0005ee9d) slider_imed_adjust_pane_g4

0x0003,

0xf6fe,	// (0x00068bb9) slider_imed_adjust_pane_g

0x59f3,	// (0x0005eeae) aid_size_cell_clipart2

0x59ff,	// (0x0005eeba) grid_imed_clipart_pane

0x5a09,	// (0x0005eec4) scroll_pane_cp031

0x5a11,	// (0x0005eecc) cell_imed_clipart_pane_ParamLimits

0x5a11,	// (0x0005eecc) cell_imed_clipart_pane

0x5a2e,	// (0x0005eee9) cell_imed_clipart_pane_g1

0x0d7f,	// (0x0005a23a) grid_highlight_pane_cp014

0x5692,	// (0x0005eb4d) main_clock2_pane_g1_ParamLimits

0x5692,	// (0x0005eb4d) main_clock2_pane_g1

0x57c4,	// (0x0005ec7f) aid_call2_pane_cp10

0x57d6,	// (0x0005ec91) aid_call_pane_cp10

0xabef,	// (0x000640aa) popup_clock_analogue_window_cp10_g1

0xabef,	// (0x000640aa) popup_clock_analogue_window_cp10_g2

0x57e8,	// (0x0005eca3) popup_clock_analogue_window_cp10_g3

0x57e8,	// (0x0005eca3) popup_clock_analogue_window_cp10_g4

0xabef,	// (0x000640aa) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6ec,	// (0x00068ba7) popup_clock_analogue_window_cp10_g

0x57fe,	// (0x0005ecb9) popup_clock_analogue_window_cp10_t1

0x582f,	// (0x0005ecea) clock_digital_number_pane_cp10_ParamLimits

0x582f,	// (0x0005ecea) clock_digital_number_pane_cp10

0x5849,	// (0x0005ed04) clock_digital_number_pane_cp11_ParamLimits

0x5849,	// (0x0005ed04) clock_digital_number_pane_cp11

0x5863,	// (0x0005ed1e) clock_digital_number_pane_cp12_ParamLimits

0x5863,	// (0x0005ed1e) clock_digital_number_pane_cp12

0x587d,	// (0x0005ed38) clock_digital_number_pane_cp13_ParamLimits

0x587d,	// (0x0005ed38) clock_digital_number_pane_cp13

0x5897,	// (0x0005ed52) clock_digital_separator_pane_cp10_ParamLimits

0x5897,	// (0x0005ed52) clock_digital_separator_pane_cp10

0x58b1,	// (0x0005ed6c) popup_clock_digital_window_cp02_t1_ParamLimits

0x58b1,	// (0x0005ed6c) popup_clock_digital_window_cp02_t1

0x9fe4,	// (0x0006349f) clock_digital_number_pane_cp10_g1

0x9fe4,	// (0x0006349f) clock_digital_number_pane_cp10_g2

0x0001,

0xf707,	// (0x00068bc2) clock_digital_number_pane_cp10_g

0x9fe4,	// (0x0006349f) clock_digital_separator_pane_cp10_g1

0x9fe4,	// (0x0006349f) clock_digital_separator_pane_g2_cp10

0xac8a,	// (0x00064145) navi_pane_vded_g4

0xac93,	// (0x0006414e) navi_pane_vded_g5

0xac9c,	// (0x00064157) navi_pane_vded_t1

0x0d7f,	// (0x0005a23a) main_vded_pane

0x5a37,	// (0x0005eef2) main_vded_pane_g1

0x5a43,	// (0x0005eefe) main_vded_pane_g2

0x5a4f,	// (0x0005ef0a) main_vded_pane_g3

0x0002,

0xf70c,	// (0x00068bc7) main_vded_pane_g

0x5a5b,	// (0x0005ef16) main_vded_pane_t1

0x5a69,	// (0x0005ef24) main_vded_pane_t2

0x0001,

0xf713,	// (0x00068bce) main_vded_pane_t

0x5a77,	// (0x0005ef32) vded_slider_pane

0x5a81,	// (0x0005ef3c) vded_video_pane

0x5a8d,	// (0x0005ef48) vded_video_pane_g1

0x5a97,	// (0x0005ef52) vded_video_pane_g2

0xebe5,	// (0x000680a0) vded_video_pane_g3

0x0002,

0xf718,	// (0x00068bd3) vded_video_pane_g

0x5aa0,	// (0x0005ef5b) vded_slider_pane_g1

0xe932,	// (0x00067ded) vded_slider_pane_g2

0x5aa9,	// (0x0005ef64) vded_slider_pane_g3

0x5ab2,	// (0x0005ef6d) vded_slider_pane_g4

0x5abb,	// (0x0005ef76) vded_slider_pane_g5

0x0004,

0xf71f,	// (0x00068bda) vded_slider_pane_g

0x5435,	// (0x0005e8f0) mup3_rocker_pane_ParamLimits

0x5435,	// (0x0005e8f0) mup3_rocker_pane

0x5ac4,	// (0x0005ef7f) mup3_control_keys_pane_g1

0x5acc,	// (0x0005ef87) mup3_control_keys_pane_g2

0x5ad4,	// (0x0005ef8f) mup3_control_keys_pane_g3

0x5adc,	// (0x0005ef97) mup3_control_keys_pane_g4

0x0003,

0xf72a,	// (0x00068be5) mup3_control_keys_pane_g

0x0fdf,	// (0x0005a49a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0fdf,	// (0x0005a49a) popup_toolbar2_fixed_window_cp01

0x546b,	// (0x0005e926) popup_toolbar2_fixed_window_cp02_ParamLimits

0x546b,	// (0x0005e926) popup_toolbar2_fixed_window_cp02

0xdaee,	// (0x00066fa9) popup_call2_audio_second_window_t4_ParamLimits

0xdaee,	// (0x00066fa9) popup_call2_audio_second_window_t4

0xe01c,	// (0x000674d7) popup_call2_audio_first_window_t6_ParamLimits

0xe01c,	// (0x000674d7) popup_call2_audio_first_window_t6

0xe2b2,	// (0x0006776d) popup_call2_audio_out_window_t6_ParamLimits

0xe2b2,	// (0x0006776d) popup_call2_audio_out_window_t6

0x0d7f,	// (0x0005a23a) main_vitu_pane

0x5aec,	// (0x0005efa7) aid_size_cell_itu_ParamLimits

0x5aec,	// (0x0005efa7) aid_size_cell_itu

0x9970,	// (0x00062e2b) bg_popup_window_pane_cp08_ParamLimits

0x9970,	// (0x00062e2b) bg_popup_window_pane_cp08

0x5b02,	// (0x0005efbd) field_vitu_entry_pane_ParamLimits

0x5b02,	// (0x0005efbd) field_vitu_entry_pane

0x5b19,	// (0x0005efd4) grid_vitu_function_pane_ParamLimits

0x5b19,	// (0x0005efd4) grid_vitu_function_pane

0x5b34,	// (0x0005efef) grid_vitu_itu_pane_ParamLimits

0x5b34,	// (0x0005efef) grid_vitu_itu_pane

0x5b52,	// (0x0005f00d) cell_vitu_itu_pane_ParamLimits

0x5b52,	// (0x0005f00d) cell_vitu_itu_pane

0x5b78,	// (0x0005f033) cell_vitu_function_pane_ParamLimits

0x5b78,	// (0x0005f033) cell_vitu_function_pane

0x9970,	// (0x00062e2b) bg_popup_sub_pane_cp08_ParamLimits

0x9970,	// (0x00062e2b) bg_popup_sub_pane_cp08

0x5bab,	// (0x0005f066) field_vitu_entry_pane_t1_ParamLimits

0x5bab,	// (0x0005f066) field_vitu_entry_pane_t1

0x5bcb,	// (0x0005f086) field_vitu_entry_pane_t2_ParamLimits

0x5bcb,	// (0x0005f086) field_vitu_entry_pane_t2

0x0001,

0xf738,	// (0x00068bf3) field_vitu_entry_pane_t_ParamLimits

0xf738,	// (0x00068bf3) field_vitu_entry_pane_t

0x5be8,	// (0x0005f0a3) bg_button_pane_cp05_ParamLimits

0x5be8,	// (0x0005f0a3) bg_button_pane_cp05

0x5bf6,	// (0x0005f0b1) cell_vitu_itu_pane_g1

0x5c0e,	// (0x0005f0c9) cell_vitu_itu_pane_t1_ParamLimits

0x5c0e,	// (0x0005f0c9) cell_vitu_itu_pane_t1

0x5c20,	// (0x0005f0db) cell_vitu_itu_pane_t2_ParamLimits

0x5c20,	// (0x0005f0db) cell_vitu_itu_pane_t2

0x0002,

0xf73d,	// (0x00068bf8) cell_vitu_itu_pane_t_ParamLimits

0xf73d,	// (0x00068bf8) cell_vitu_itu_pane_t

0x5c55,	// (0x0005f110) bg_button_pane_cp07

0x5c5f,	// (0x0005f11a) cell_vitu_function_pane_g1

0xa073,	// (0x0006352e) main_calc_pane_g1

0x0dc1,	// (0x0005a27c) aid_visual_content_pane

0x0d7f,	// (0x0005a23a) main_vradio_pane

0x5c68,	// (0x0005f123) main_vradio_pane_g1_ParamLimits

0x5c68,	// (0x0005f123) main_vradio_pane_g1

0x5c7f,	// (0x0005f13a) main_vradio_pane_g2_ParamLimits

0x5c7f,	// (0x0005f13a) main_vradio_pane_g2

0x0001,

0xf744,	// (0x00068bff) main_vradio_pane_g_ParamLimits

0xf744,	// (0x00068bff) main_vradio_pane_g

0x5c8c,	// (0x0005f147) main_vradio_pane_t1_ParamLimits

0x5c8c,	// (0x0005f147) main_vradio_pane_t1

0x5ca1,	// (0x0005f15c) main_vradio_pane_t2_ParamLimits

0x5ca1,	// (0x0005f15c) main_vradio_pane_t2

0x5cb6,	// (0x0005f171) main_vradio_pane_t3_ParamLimits

0x5cb6,	// (0x0005f171) main_vradio_pane_t3

0x0002,

0xf749,	// (0x00068c04) main_vradio_pane_t_ParamLimits

0xf749,	// (0x00068c04) main_vradio_pane_t

0x5cca,	// (0x0005f185) vradio_rocker_control_pane_ParamLimits

0x5cca,	// (0x0005f185) vradio_rocker_control_pane

0x5cdc,	// (0x0005f197) vradio_station_info_pane_ParamLimits

0x5cdc,	// (0x0005f197) vradio_station_info_pane

0x5cec,	// (0x0005f1a7) vradio_frequency_info_pane_ParamLimits

0x5cec,	// (0x0005f1a7) vradio_frequency_info_pane

0xebe5,	// (0x000680a0) vradio_station_info_pane_g1

0x5cfb,	// (0x0005f1b6) vradio_station_info_pane_t1_ParamLimits

0x5cfb,	// (0x0005f1b6) vradio_station_info_pane_t1

0x5d1d,	// (0x0005f1d8) vradio_station_info_pane_t2_ParamLimits

0x5d1d,	// (0x0005f1d8) vradio_station_info_pane_t2

0x0001,

0xf750,	// (0x00068c0b) vradio_station_info_pane_t_ParamLimits

0xf750,	// (0x00068c0b) vradio_station_info_pane_t

0x5d2f,	// (0x0005f1ea) vradio_tuning_pane

0x5d37,	// (0x0005f1f2) vradio_rocker_control_pane_g1

0x5d3f,	// (0x0005f1fa) vradio_rocker_control_pane_g2

0x5d47,	// (0x0005f202) vradio_rocker_control_pane_g3

0x5d4f,	// (0x0005f20a) vradio_rocker_control_pane_g4

0x5d57,	// (0x0005f212) vradio_rocker_control_pane_g5

0x0004,

0xf755,	// (0x00068c10) vradio_rocker_control_pane_g

0x5d5f,	// (0x0005f21a) vradio_frequency_info_pane_g1

0x5d69,	// (0x0005f224) vradio_frequency_info_pane_t1_ParamLimits

0x5d69,	// (0x0005f224) vradio_frequency_info_pane_t1

0x5d7d,	// (0x0005f238) vradio_tuning_pane_g1

0x5d88,	// (0x0005f243) vradio_tuning_pane_t1

0x0e1e,	// (0x0005a2d9) area_side_right_pane_ParamLimits

0x0e1e,	// (0x0005a2d9) area_side_right_pane

0xe731,	// (0x00067bec) status_small_pane_g1

0xe739,	// (0x00067bf4) status_small_pane_g2

0xe742,	// (0x00067bfd) status_small_pane_g3

0xe74b,	// (0x00067c06) status_small_pane_g4

0x0003,

0x0356,	// (0x00059811) status_small_pane_g

0xe754,	// (0x00067c0f) status_small_pane_t1

0x0d7f,	// (0x0005a23a) main_video3_pane

0x5d97,	// (0x0005f252) cams_zoom_vslider_pane

0x5d9f,	// (0x0005f25a) image3_wide_pane_ParamLimits

0x5d9f,	// (0x0005f25a) image3_wide_pane

0x5db9,	// (0x0005f274) image3_wide_small_pane

0x5dc5,	// (0x0005f280) main_video3_pane_g1_ParamLimits

0x5dc5,	// (0x0005f280) main_video3_pane_g1

0x5de1,	// (0x0005f29c) main_video3_pane_g2_ParamLimits

0x5de1,	// (0x0005f29c) main_video3_pane_g2

0x0001,

0xf760,	// (0x00068c1b) main_video3_pane_g_ParamLimits

0xf760,	// (0x00068c1b) main_video3_pane_g

0x5dfd,	// (0x0005f2b8) main_video3_pane_t1_ParamLimits

0x5dfd,	// (0x0005f2b8) main_video3_pane_t1

0x5e28,	// (0x0005f2e3) main_video3_pane_t2_ParamLimits

0x5e28,	// (0x0005f2e3) main_video3_pane_t2

0x5e55,	// (0x0005f310) main_video3_pane_t3_ParamLimits

0x5e55,	// (0x0005f310) main_video3_pane_t3

0x0002,

0xf765,	// (0x00068c20) main_video3_pane_t_ParamLimits

0xf765,	// (0x00068c20) main_video3_pane_t

0x5e82,	// (0x0005f33d) cams_zoom_vslider_pane_g1

0x5e8b,	// (0x0005f346) cams_zoom_vslider_pane_g2

0x0001,

0xf76c,	// (0x00068c27) cams_zoom_vslider_pane_g

0x5e93,	// (0x0005f34e) small_slider_vertical_pane

0xebe5,	// (0x000680a0) small_slider_vertical_pane_g1

0xebe5,	// (0x000680a0) small_slider_vertical_pane_g2

0x5e9b,	// (0x0005f356) small_slider_vertical_pane_g3

0x0002,

0xf771,	// (0x00068c2c) small_slider_vertical_pane_g

0x0d7f,	// (0x0005a23a) main_hwr_training_pane

0x5ea4,	// (0x0005f35f) hwr_training_instruct_pane_ParamLimits

0x5ea4,	// (0x0005f35f) hwr_training_instruct_pane

0x5ec6,	// (0x0005f381) hwr_training_navi_pane_ParamLimits

0x5ec6,	// (0x0005f381) hwr_training_navi_pane

0x5ee5,	// (0x0005f3a0) hwr_training_write_pane_ParamLimits

0x5ee5,	// (0x0005f3a0) hwr_training_write_pane

0x0d7f,	// (0x0005a23a) bg_frame_shadow_pane

0x5f35,	// (0x0005f3f0) hwr_training_write_pane_g1

0x5f3d,	// (0x0005f3f8) hwr_training_write_pane_g2

0x5f45,	// (0x0005f400) hwr_training_write_pane_g3

0x5f4d,	// (0x0005f408) hwr_training_write_pane_g4

0x5f55,	// (0x0005f410) hwr_training_write_pane_g5

0x5f5d,	// (0x0005f418) hwr_training_write_pane_g6

0x5f65,	// (0x0005f420) hwr_training_write_pane_g7

0x0006,

0xf778,	// (0x00068c33) hwr_training_write_pane_g

0xd623,	// (0x00066ade) hwr_training_navi_pane_g1_ParamLimits

0xd623,	// (0x00066ade) hwr_training_navi_pane_g1

0xd635,	// (0x00066af0) hwr_training_navi_pane_g2_ParamLimits

0xd635,	// (0x00066af0) hwr_training_navi_pane_g2

0xd647,	// (0x00066b02) hwr_training_navi_pane_g3_ParamLimits

0xd647,	// (0x00066b02) hwr_training_navi_pane_g3

0xd657,	// (0x00066b12) hwr_training_navi_pane_g4_ParamLimits

0xd657,	// (0x00066b12) hwr_training_navi_pane_g4

0x0004,

0xf787,	// (0x00068c42) hwr_training_navi_pane_g_ParamLimits

0xf787,	// (0x00068c42) hwr_training_navi_pane_g

0xd664,	// (0x00066b1f) hwr_training_navi_pane_t1

0x5f7a,	// (0x0005f435) list_single_hwr_training_instruct_pane_ParamLimits

0x5f7a,	// (0x0005f435) list_single_hwr_training_instruct_pane

0x5f96,	// (0x0005f451) list_single_hwr_training_instruct_pane_t1

0xeb25,	// (0x00067fe0) bg_frame_shadow_pane_g1

0x5fa5,	// (0x0005f460) bg_frame_shadow_pane_g2

0x5fad,	// (0x0005f468) bg_frame_shadow_pane_g3

0x5fb5,	// (0x0005f470) bg_frame_shadow_pane_g4

0x5fbd,	// (0x0005f478) bg_frame_shadow_pane_g5

0x5fc5,	// (0x0005f480) bg_frame_shadow_pane_g6

0x5fcd,	// (0x0005f488) bg_frame_shadow_pane_g7

0xa1dc,	// (0x00063697) bg_frame_shadow_pane_g8

0x0007,

0xf792,	// (0x00068c4d) bg_frame_shadow_pane_g

0x0d7f,	// (0x0005a23a) main_video_tele_dialer_pane

0x5fd5,	// (0x0005f490) aid_size_cell_video_keypad_ParamLimits

0x5fd5,	// (0x0005f490) aid_size_cell_video_keypad

0x5fef,	// (0x0005f4aa) grid_video_dialer_keypad_pane_ParamLimits

0x5fef,	// (0x0005f4aa) grid_video_dialer_keypad_pane

0x603d,	// (0x0005f4f8) video_down_pane_cp_ParamLimits

0x603d,	// (0x0005f4f8) video_down_pane_cp

0x6071,	// (0x0005f52c) cell_video_dialer_keypad_pane_ParamLimits

0x6071,	// (0x0005f52c) cell_video_dialer_keypad_pane

0x6097,	// (0x0005f552) bg_button_pane_cp08_ParamLimits

0x6097,	// (0x0005f552) bg_button_pane_cp08

0x60a3,	// (0x0005f55e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x60a3,	// (0x0005f55e) cell_video_dialer_keypad_pane_g1

0x541f,	// (0x0005e8da) mup3_rocker2_pane_ParamLimits

0x541f,	// (0x0005e8da) mup3_rocker2_pane

0xebe5,	// (0x000680a0) mup3_rocker2_pane_g1

0x3ef1,	// (0x0005d3ac) main_dialer2_pane

0x0d7f,	// (0x0005a23a) main_mp4_pane

0xd67a,	// (0x00066b35) main_mp4_pane_g1_ParamLimits

0xd67a,	// (0x00066b35) main_mp4_pane_g1

0xd67a,	// (0x00066b35) main_mp4_pane_g2_ParamLimits

0xd67a,	// (0x00066b35) main_mp4_pane_g2

0x60de,	// (0x0005f599) main_mp4_pane_g3_ParamLimits

0x60de,	// (0x0005f599) main_mp4_pane_g3

0xd688,	// (0x00066b43) main_mp4_pane_g4_ParamLimits

0xd688,	// (0x00066b43) main_mp4_pane_g4

0xd6a2,	// (0x00066b5d) main_mp4_pane_g5_ParamLimits

0xd6a2,	// (0x00066b5d) main_mp4_pane_g5

0x0005,

0xf7b2,	// (0x00068c6d) main_mp4_pane_g_ParamLimits

0xf7b2,	// (0x00068c6d) main_mp4_pane_g

0xd6d6,	// (0x00066b91) main_mp4_pane_t1_ParamLimits

0xd6d6,	// (0x00066b91) main_mp4_pane_t1

0xd732,	// (0x00066bed) main_mp4_pane_t2_ParamLimits

0xd732,	// (0x00066bed) main_mp4_pane_t2

0x6128,	// (0x0005f5e3) main_mp4_pane_t3_ParamLimits

0x6128,	// (0x0005f5e3) main_mp4_pane_t3

0xd784,	// (0x00066c3f) main_mp4_pane_t4_ParamLimits

0xd784,	// (0x00066c3f) main_mp4_pane_t4

0x0003,

0xf7bf,	// (0x00068c7a) main_mp4_pane_t_ParamLimits

0xf7bf,	// (0x00068c7a) main_mp4_pane_t

0xd7c4,	// (0x00066c7f) mp4_progress_pane_ParamLimits

0xd7c4,	// (0x00066c7f) mp4_progress_pane

0xd80e,	// (0x00066cc9) mp4_rocker_pane_ParamLimits

0xd80e,	// (0x00066cc9) mp4_rocker_pane

0xb4d7,	// (0x00064992) mp4_progress_pane_t1

0xb4f0,	// (0x000649ab) mp4_progress_pane_t2

0x0001,

0xf7c8,	// (0x00068c83) mp4_progress_pane_t

0xb509,	// (0x000649c4) mup_progress_pane_cp04

0xb515,	// (0x000649d0) mp4_rocker_pane_g1

0x6148,	// (0x0005f603) aid_cell_size_keypad2_ParamLimits

0x6148,	// (0x0005f603) aid_cell_size_keypad2

0x615e,	// (0x0005f619) dialer2_ne_pane_ParamLimits

0x615e,	// (0x0005f619) dialer2_ne_pane

0x6176,	// (0x0005f631) grid_dialer2_keypad_pane_ParamLimits

0x6176,	// (0x0005f631) grid_dialer2_keypad_pane

0xe9c4,	// (0x00067e7f) bg_popup_call_pane_cp07_ParamLimits

0xe9c4,	// (0x00067e7f) bg_popup_call_pane_cp07

0x6192,	// (0x0005f64d) dialer2_ne_pane_t1_ParamLimits

0x6192,	// (0x0005f64d) dialer2_ne_pane_t1

0x61d2,	// (0x0005f68d) cell_dialer2_keypad_pane_ParamLimits

0x61d2,	// (0x0005f68d) cell_dialer2_keypad_pane

0xb531,	// (0x000649ec) bg_button_pane_pane_cp04_ParamLimits

0xb531,	// (0x000649ec) bg_button_pane_pane_cp04

0x61f8,	// (0x0005f6b3) cell_dialer2_keypad_pane_g1_ParamLimits

0x61f8,	// (0x0005f6b3) cell_dialer2_keypad_pane_g1

0x1d58,	// (0x0005b213) aid_placing_vt_set_content_ParamLimits

0x1d58,	// (0x0005b213) aid_placing_vt_set_content

0x1d78,	// (0x0005b233) aid_placing_vt_set_title_ParamLimits

0x1d78,	// (0x0005b233) aid_placing_vt_set_title

0x0d7f,	// (0x0005a23a) main_image3_pane

0x62be,	// (0x0005f779) area_side_right_pane_cp01_ParamLimits

0x62be,	// (0x0005f779) area_side_right_pane_cp01

0xd67a,	// (0x00066b35) main_image3_pane_g1_ParamLimits

0xd67a,	// (0x00066b35) main_image3_pane_g1

0x62d7,	// (0x0005f792) main_image3_pane_g2_ParamLimits

0x62d7,	// (0x0005f792) main_image3_pane_g2

0x62ff,	// (0x0005f7ba) main_image3_pane_g3_ParamLimits

0x62ff,	// (0x0005f7ba) main_image3_pane_g3

0x6329,	// (0x0005f7e4) main_image3_pane_g4_ParamLimits

0x6329,	// (0x0005f7e4) main_image3_pane_g4

0x0003,

0xf7d7,	// (0x00068c92) main_image3_pane_g_ParamLimits

0xf7d7,	// (0x00068c92) main_image3_pane_g

0x6353,	// (0x0005f80e) main_image3_pane_t1_ParamLimits

0x6353,	// (0x0005f80e) main_image3_pane_t1

0x63ab,	// (0x0005f866) main_image3_pane_t2_ParamLimits

0x63ab,	// (0x0005f866) main_image3_pane_t2

0x63fd,	// (0x0005f8b8) main_image3_pane_t3_ParamLimits

0x63fd,	// (0x0005f8b8) main_image3_pane_t3

0x0003,

0xf7e0,	// (0x00068c9b) main_image3_pane_t_ParamLimits

0xf7e0,	// (0x00068c9b) main_image3_pane_t

0x9970,	// (0x00062e2b) grid_sctrl_middle_pane_cp01_ParamLimits

0x9970,	// (0x00062e2b) grid_sctrl_middle_pane_cp01

0x6485,	// (0x0005f940) cell_sctrl_middle_pane_cp01_ParamLimits

0x6485,	// (0x0005f940) cell_sctrl_middle_pane_cp01

0x64a2,	// (0x0005f95d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x64a2,	// (0x0005f95d) cell_sctrl_middle_pane_cp01_g1

0x0d7f,	// (0x0005a23a) main_call4_pane

0x64b7,	// (0x0005f972) aid_size_button_call4_ParamLimits

0x64b7,	// (0x0005f972) aid_size_button_call4

0x64ea,	// (0x0005f9a5) call4_windows_pane_ParamLimits

0x64ea,	// (0x0005f9a5) call4_windows_pane

0x650c,	// (0x0005f9c7) grid_call4_button_pane_ParamLimits

0x650c,	// (0x0005f9c7) grid_call4_button_pane

0xb53d,	// (0x000649f8) call4_windows_conf_pane

0xb558,	// (0x00064a13) popup_call4_audio_first_window_ParamLimits

0xb558,	// (0x00064a13) popup_call4_audio_first_window

0xb5a6,	// (0x00064a61) popup_call4_audio_second_window_ParamLimits

0xb5a6,	// (0x00064a61) popup_call4_audio_second_window

0xb5bc,	// (0x00064a77) popup_call4_audio_wait_window_ParamLimits

0xb5bc,	// (0x00064a77) popup_call4_audio_wait_window

0x6537,	// (0x0005f9f2) cell_call4_button_pane_ParamLimits

0x6537,	// (0x0005f9f2) cell_call4_button_pane

0x655e,	// (0x0005fa19) bg_button_pane_cp09_ParamLimits

0x655e,	// (0x0005fa19) bg_button_pane_cp09

0x656a,	// (0x0005fa25) cell_call4_button_pane_g1_ParamLimits

0x656a,	// (0x0005fa25) cell_call4_button_pane_g1

0x6590,	// (0x0005fa4b) cell_call4_button_pane_t1_ParamLimits

0x6590,	// (0x0005fa4b) cell_call4_button_pane_t1

0xb604,	// (0x00064abf) popup_call4_audio_conf_window_ParamLimits

0xb604,	// (0x00064abf) popup_call4_audio_conf_window

0x5481,	// (0x0005e93c) mup3_progress_pane_t1_ParamLimits

0x5498,	// (0x0005e953) mup3_progress_pane_t2_ParamLimits

0xee90,	// (0x0006834b) mup3_progress_pane_t3_ParamLimits

0xf6c5,	// (0x00068b80) mup3_progress_pane_t_ParamLimits

0xeea7,	// (0x00068362) mup_progress_pane_cp03_ParamLimits

0x5ae4,	// (0x0005ef9f) mup3_control_keys_pane_g4_copy1

0xd7f2,	// (0x00066cad) mp4_rocker2_pane_ParamLimits

0xd7f2,	// (0x00066cad) mp4_rocker2_pane

0xb61e,	// (0x00064ad9) mp4_rocker2_pane_g1

0xb626,	// (0x00064ae1) mp4_rocker2_pane_g2

0xd864,	// (0x00066d1f) mp4_rocker2_pane_g3

0xd86c,	// (0x00066d27) mp4_rocker2_pane_g4

0xd874,	// (0x00066d2f) mp4_rocker2_pane_g5

0x0004,

0xf7e9,	// (0x00068ca4) mp4_rocker2_pane_g

0x0d7f,	// (0x0005a23a) main_camera4_pane

0x0d7f,	// (0x0005a23a) main_video4_pane

0x600b,	// (0x0005f4c6) main_video_tele_dialer_pane_t1_ParamLimits

0x600b,	// (0x0005f4c6) main_video_tele_dialer_pane_t1

0x6024,	// (0x0005f4df) main_video_tele_dialer_pane_t2_ParamLimits

0x6024,	// (0x0005f4df) main_video_tele_dialer_pane_t2

0x0001,

0xf7a3,	// (0x00068c5e) main_video_tele_dialer_pane_t_ParamLimits

0xf7a3,	// (0x00068c5e) main_video_tele_dialer_pane_t

0x65ce,	// (0x0005fa89) cam4_autofocus_pane_ParamLimits

0x65ce,	// (0x0005fa89) cam4_autofocus_pane

0x65e4,	// (0x0005fa9f) cam4_image_uncrop_pane_ParamLimits

0x65e4,	// (0x0005fa9f) cam4_image_uncrop_pane

0x65fd,	// (0x0005fab8) cam4_indicators_pane_ParamLimits

0x65fd,	// (0x0005fab8) cam4_indicators_pane

0x662c,	// (0x0005fae7) main_camera4_pane_g1_ParamLimits

0x662c,	// (0x0005fae7) main_camera4_pane_g1

0x6638,	// (0x0005faf3) main_camera4_pane_g2_ParamLimits

0x6638,	// (0x0005faf3) main_camera4_pane_g2

0x6638,	// (0x0005faf3) main_camera4_pane_g3_ParamLimits

0x6638,	// (0x0005faf3) main_camera4_pane_g3

0x6644,	// (0x0005faff) main_camera4_pane_g4_ParamLimits

0x6644,	// (0x0005faff) main_camera4_pane_g4

0x6650,	// (0x0005fb0b) main_camera4_pane_g5_ParamLimits

0x6650,	// (0x0005fb0b) main_camera4_pane_g5

0x0005,

0xf7f4,	// (0x00068caf) main_camera4_pane_g_ParamLimits

0xf7f4,	// (0x00068caf) main_camera4_pane_g

0x666d,	// (0x0005fb28) main_camera4_pane_t1_ParamLimits

0x666d,	// (0x0005fb28) main_camera4_pane_t1

0xd88e,	// (0x00066d49) bg_tb_trans_pane_cp06

0xd8a4,	// (0x00066d5f) cam4_indicators_pane_g1

0xd8b1,	// (0x00066d6c) cam4_indicators_pane_g2

0x0002,

0xf80f,	// (0x00068cca) cam4_indicators_pane_g

0xd8d1,	// (0x00066d8c) cam4_indicators_pane_t1

0x66e5,	// (0x0005fba0) main_video4_pane_g1_ParamLimits

0x66e5,	// (0x0005fba0) main_video4_pane_g1

0x66f7,	// (0x0005fbb2) main_video4_pane_g2_ParamLimits

0x66f7,	// (0x0005fbb2) main_video4_pane_g2

0x670b,	// (0x0005fbc6) main_video4_pane_g3_ParamLimits

0x670b,	// (0x0005fbc6) main_video4_pane_g3

0x671b,	// (0x0005fbd6) main_video4_pane_g4_ParamLimits

0x671b,	// (0x0005fbd6) main_video4_pane_g4

0x0004,

0xf816,	// (0x00068cd1) main_video4_pane_g_ParamLimits

0xf816,	// (0x00068cd1) main_video4_pane_g

0x673b,	// (0x0005fbf6) vid4_indicators_pane_ParamLimits

0x673b,	// (0x0005fbf6) vid4_indicators_pane

0x676b,	// (0x0005fc26) video4_image_uncrop_cif_pane_ParamLimits

0x676b,	// (0x0005fc26) video4_image_uncrop_cif_pane

0x6785,	// (0x0005fc40) video4_image_uncrop_nhd_pane_ParamLimits

0x6785,	// (0x0005fc40) video4_image_uncrop_nhd_pane

0x65e4,	// (0x0005fa9f) video4_image_uncrop_vga_pane_ParamLimits

0x65e4,	// (0x0005fa9f) video4_image_uncrop_vga_pane

0xd8f5,	// (0x00066db0) bg_tb_trans_pane_cp07

0x679b,	// (0x0005fc56) vid4_indicators_pane_g1

0x67a8,	// (0x0005fc63) vid4_indicators_pane_g2

0x67b5,	// (0x0005fc70) vid4_indicators_pane_g3

0x0004,

0xf821,	// (0x00068cdc) vid4_indicators_pane_g

0x67da,	// (0x0005fc95) vid4_indicators_pane_t1

0x67ec,	// (0x0005fca7) cam4_autofocus_pane_g1

0x67f4,	// (0x0005fcaf) cam4_autofocus_pane_g2

0x67fc,	// (0x0005fcb7) cam4_autofocus_pane_g3

0x0002,

0xf82c,	// (0x00068ce7) cam4_autofocus_pane_g

0x6804,	// (0x0005fcbf) cam4_autofocus_pane_g3_copy1

0x6055,	// (0x0005f510) video_down_pane_cp_t1

0x6063,	// (0x0005f51e) video_down_pane_cp_t2

0x0001,

0xf7a8,	// (0x00068c63) video_down_pane_cp_t

0x9970,	// (0x00062e2b) popup_vitu2_window_ParamLimits

0x9970,	// (0x00062e2b) popup_vitu2_window

0x680c,	// (0x0005fcc7) aid_size_cell2_itu2_ParamLimits

0x680c,	// (0x0005fcc7) aid_size_cell2_itu2

0x6832,	// (0x0005fced) aid_size_cell_itu2_ParamLimits

0x6832,	// (0x0005fced) aid_size_cell_itu2

0x6890,	// (0x0005fd4b) bg_popup_window_pane_cp09_ParamLimits

0x6890,	// (0x0005fd4b) bg_popup_window_pane_cp09

0x689e,	// (0x0005fd59) field_vitu2_entry_pane_ParamLimits

0x689e,	// (0x0005fd59) field_vitu2_entry_pane

0x68c6,	// (0x0005fd81) grid_vitu2_function_pane_ParamLimits

0x68c6,	// (0x0005fd81) grid_vitu2_function_pane

0x6917,	// (0x0005fdd2) grid_vitu2_itu_pane_ParamLimits

0x6917,	// (0x0005fdd2) grid_vitu2_itu_pane

0x69a2,	// (0x0005fe5d) cell_vitu2_itu_pane_ParamLimits

0x69a2,	// (0x0005fe5d) cell_vitu2_itu_pane

0x69c8,	// (0x0005fe83) cell_vitu2_function_pane_ParamLimits

0x69c8,	// (0x0005fe83) cell_vitu2_function_pane

0xb62e,	// (0x00064ae9) bg_popup_call_pane_cp08_ParamLimits

0xb62e,	// (0x00064ae9) bg_popup_call_pane_cp08

0xb647,	// (0x00064b02) field_vitu2_entry_pane_g1

0xb653,	// (0x00064b0e) field_vitu2_entry_pane_g2

0x0002,

0xf833,	// (0x00068cee) field_vitu2_entry_pane_g

0xb66d,	// (0x00064b28) field_vitu2_entry_pane_t1_ParamLimits

0xb66d,	// (0x00064b28) field_vitu2_entry_pane_t1

0xb68a,	// (0x00064b45) field_vitu2_entry_pane_t2_ParamLimits

0xb68a,	// (0x00064b45) field_vitu2_entry_pane_t2

0x0001,

0xf83a,	// (0x00068cf5) field_vitu2_entry_pane_t_ParamLimits

0xf83a,	// (0x00068cf5) field_vitu2_entry_pane_t

0x6a0c,	// (0x0005fec7) bg_button_pane_cp010_ParamLimits

0x6a0c,	// (0x0005fec7) bg_button_pane_cp010

0x6a1a,	// (0x0005fed5) cell_vitu2_itu_pane_g1

0x6a38,	// (0x0005fef3) cell_vitu2_itu_pane_t1_ParamLimits

0x6a38,	// (0x0005fef3) cell_vitu2_itu_pane_t1

0x0c8b,	// (0x0005a146) cell_vitu2_itu_pane_t2_ParamLimits

0x0c8b,	// (0x0005a146) cell_vitu2_itu_pane_t2

0x0002,

0xf844,	// (0x00068cff) cell_vitu2_itu_pane_t_ParamLimits

0xf844,	// (0x00068cff) cell_vitu2_itu_pane_t

0xd90d,	// (0x00066dc8) bg_button_pane_cp011

0x6a9e,	// (0x0005ff59) cell_vitu2_function_pane_g1

0x0d7f,	// (0x0005a23a) main_myfav_hc_pane

0x644d,	// (0x0005f908) popup_image3_note_pane_ParamLimits

0x644d,	// (0x0005f908) popup_image3_note_pane

0x6469,	// (0x0005f924) popup_image3_tool_bar_pane_ParamLimits

0x6469,	// (0x0005f924) popup_image3_tool_bar_pane

0x0d0f,	// (0x0005a1ca) cell_vitu2_itu_pane_t3_ParamLimits

0x0d0f,	// (0x0005a1ca) cell_vitu2_itu_pane_t3

0x0d7f,	// (0x0005a23a) bg_popup_trans_pane

0xb6af,	// (0x00064b6a) grid_image3_tool_bar_pane

0xb6b9,	// (0x00064b74) bg_popup_trans_pane_g1

0xa5d5,	// (0x00063a90) bg_popup_trans_pane_g2

0xb6c1,	// (0x00064b7c) bg_popup_trans_pane_g3

0xb6c9,	// (0x00064b84) bg_popup_trans_pane_g4

0xb6d1,	// (0x00064b8c) bg_popup_trans_pane_g5

0xb6d9,	// (0x00064b94) bg_popup_trans_pane_g6

0xb6e1,	// (0x00064b9c) bg_popup_trans_pane_g7

0xb6e9,	// (0x00064ba4) bg_popup_trans_pane_g8

0xa5b5,	// (0x00063a70) bg_popup_trans_pane_g9

0x0008,

0xf84b,	// (0x00068d06) bg_popup_trans_pane_g

0xb6f1,	// (0x00064bac) cell_image3_tool_bar_pane_ParamLimits

0xb6f1,	// (0x00064bac) cell_image3_tool_bar_pane

0xebe5,	// (0x000680a0) cell_image3_tool_bar_pane_g1

0x0d7f,	// (0x0005a23a) bg_popup_trans_pane_cp1

0xb707,	// (0x00064bc2) popup_image3_note_pane_t1

0xb715,	// (0x00064bd0) popup_image3_note_pane_t2

0xb723,	// (0x00064bde) popup_image3_note_pane_t3

0x0002,

0xf85e,	// (0x00068d19) popup_image3_note_pane_t

0xb733,	// (0x00064bee) popup_image3_note_pane_t3_copy1

0x6ab2,	// (0x0005ff6d) bg_myfav_hc_instruction_pane_ParamLimits

0x6ab2,	// (0x0005ff6d) bg_myfav_hc_instruction_pane

0x6aca,	// (0x0005ff85) cell_myfav_contact_pane_ParamLimits

0x6aca,	// (0x0005ff85) cell_myfav_contact_pane

0x6ae6,	// (0x0005ffa1) cell_myfav_contact_pane_cp1_ParamLimits

0x6ae6,	// (0x0005ffa1) cell_myfav_contact_pane_cp1

0x6afe,	// (0x0005ffb9) cell_myfav_contact_pane_cp2_ParamLimits

0x6afe,	// (0x0005ffb9) cell_myfav_contact_pane_cp2

0x6b16,	// (0x0005ffd1) cell_myfav_contact_pane_cp3_ParamLimits

0x6b16,	// (0x0005ffd1) cell_myfav_contact_pane_cp3

0x6b2d,	// (0x0005ffe8) cell_myfav_contact_pane_cp4_ParamLimits

0x6b2d,	// (0x0005ffe8) cell_myfav_contact_pane_cp4

0x6b45,	// (0x00060000) cell_myfav_contact_pane_cp5_ParamLimits

0x6b45,	// (0x00060000) cell_myfav_contact_pane_cp5

0x6b59,	// (0x00060014) cell_myfav_contact_pane_cp6_ParamLimits

0x6b59,	// (0x00060014) cell_myfav_contact_pane_cp6

0x6b6f,	// (0x0006002a) cell_myfav_contact_pane_cp7_ParamLimits

0x6b6f,	// (0x0006002a) cell_myfav_contact_pane_cp7

0xb741,	// (0x00064bfc) listscroll_gen_pane_cp05

0x6b87,	// (0x00060042) main_myfav_hc_pane_g1_ParamLimits

0x6b87,	// (0x00060042) main_myfav_hc_pane_g1

0x6ba1,	// (0x0006005c) main_myfav_hc_pane_g2_ParamLimits

0x6ba1,	// (0x0006005c) main_myfav_hc_pane_g2

0x0002,

0xf865,	// (0x00068d20) main_myfav_hc_pane_g_ParamLimits

0xf865,	// (0x00068d20) main_myfav_hc_pane_g

0x6bd5,	// (0x00060090) main_myfav_hc_pane_t1_ParamLimits

0x6bd5,	// (0x00060090) main_myfav_hc_pane_t1

0xb74a,	// (0x00064c05) main_myfav_hc_pane_t2_ParamLimits

0xb74a,	// (0x00064c05) main_myfav_hc_pane_t2

0xb75c,	// (0x00064c17) main_myfav_hc_pane_t3_ParamLimits

0xb75c,	// (0x00064c17) main_myfav_hc_pane_t3

0x6bec,	// (0x000600a7) main_myfav_hc_pane_t4_ParamLimits

0x6bec,	// (0x000600a7) main_myfav_hc_pane_t4

0x0004,

0xf86c,	// (0x00068d27) main_myfav_hc_pane_t_ParamLimits

0xf86c,	// (0x00068d27) main_myfav_hc_pane_t

0xebe5,	// (0x000680a0) bg_myfav_hc_instruction_pane_g1

0xb76e,	// (0x00064c29) cell_myfav_contact_pane_g1_ParamLimits

0xb76e,	// (0x00064c29) cell_myfav_contact_pane_g1

0xb76e,	// (0x00064c29) cell_myfav_contact_pane_g2_ParamLimits

0xb76e,	// (0x00064c29) cell_myfav_contact_pane_g2

0xb77a,	// (0x00064c35) cell_myfav_contact_pane_g3_ParamLimits

0xb77a,	// (0x00064c35) cell_myfav_contact_pane_g3

0xee7a,	// (0x00068335) cell_myfav_contact_pane_g4_ParamLimits

0xee7a,	// (0x00068335) cell_myfav_contact_pane_g4

0xb787,	// (0x00064c42) cell_myfav_contact_pane_g5_ParamLimits

0xb787,	// (0x00064c42) cell_myfav_contact_pane_g5

0x0004,

0xf877,	// (0x00068d32) cell_myfav_contact_pane_g_ParamLimits

0xf877,	// (0x00068d32) cell_myfav_contact_pane_g

0x6bbb,	// (0x00060076) main_myfav_hc_pane_g3_ParamLimits

0x6bbb,	// (0x00060076) main_myfav_hc_pane_g3

0x0f3f,	// (0x0005a3fa) popup_adpt_find_window

0x6c16,	// (0x000600d1) afind_page_pane_ParamLimits

0x6c16,	// (0x000600d1) afind_page_pane

0x6c2b,	// (0x000600e6) aid_size_cell_afind_ParamLimits

0x6c2b,	// (0x000600e6) aid_size_cell_afind

0x6c49,	// (0x00060104) bg_popup_sub_pane_cp09_ParamLimits

0x6c49,	// (0x00060104) bg_popup_sub_pane_cp09

0x6c56,	// (0x00060111) find_pane_cp01_ParamLimits

0x6c56,	// (0x00060111) find_pane_cp01

0xb793,	// (0x00064c4e) grid_afind_control_pane_ParamLimits

0xb793,	// (0x00064c4e) grid_afind_control_pane

0x6c63,	// (0x0006011e) grid_afind_pane_ParamLimits

0x6c63,	// (0x0006011e) grid_afind_pane

0x6c85,	// (0x00060140) cell_afind_pane_ParamLimits

0x6c85,	// (0x00060140) cell_afind_pane

0xebe5,	// (0x000680a0) afind_page_pane_g1

0x6cec,	// (0x000601a7) afind_page_pane_g2

0x6cf5,	// (0x000601b0) afind_page_pane_g3

0x0002,

0xf882,	// (0x00068d3d) afind_page_pane_g

0x6cfe,	// (0x000601b9) afind_page_pane_t1

0xb7a7,	// (0x00064c62) cell_afind_grid_control_pane_ParamLimits

0xb7a7,	// (0x00064c62) cell_afind_grid_control_pane

0xb531,	// (0x000649ec) bg_button_pane_cp69_ParamLimits

0xb531,	// (0x000649ec) bg_button_pane_cp69

0x6d1e,	// (0x000601d9) cell_afind_pane_g1_ParamLimits

0x6d1e,	// (0x000601d9) cell_afind_pane_g1

0x6d2b,	// (0x000601e6) cell_afind_pane_t1_ParamLimits

0x6d2b,	// (0x000601e6) cell_afind_pane_t1

0xa3c4,	// (0x0006387f) bg_button_pane_cp72

0xb7b6,	// (0x00064c71) cell_afind_grid_control_pane_g1

0x3991,	// (0x0005ce4c) aid_image_placing_area_ParamLimits

0x3991,	// (0x0005ce4c) aid_image_placing_area

0x5b93,	// (0x0005f04e) field_vitu_entry_pane_g1_ParamLimits

0x5b93,	// (0x0005f04e) field_vitu_entry_pane_g1

0x5b9f,	// (0x0005f05a) field_vitu_entry_pane_g2_ParamLimits

0x5b9f,	// (0x0005f05a) field_vitu_entry_pane_g2

0x0001,

0xf733,	// (0x00068bee) field_vitu_entry_pane_g_ParamLimits

0xf733,	// (0x00068bee) field_vitu_entry_pane_g

0x5bf6,	// (0x0005f0b1) cell_vitu_itu_pane_g1_ParamLimits

0x5c38,	// (0x0005f0f3) cell_vitu_itu_pane_t3_ParamLimits

0x5c38,	// (0x0005f0f3) cell_vitu_itu_pane_t3

0xb4d7,	// (0x00064992) mp4_progress_pane_t1_ParamLimits

0xb4f0,	// (0x000649ab) mp4_progress_pane_t2_ParamLimits

0xf7c8,	// (0x00068c83) mp4_progress_pane_t_ParamLimits

0xb509,	// (0x000649c4) mup_progress_pane_cp04_ParamLimits

0x6c00,	// (0x000600bb) main_myfav_hc_pane_t5_ParamLimits

0x6c00,	// (0x000600bb) main_myfav_hc_pane_t5

0x0dd5,	// (0x0005a290) aid_zoom_text_primary

0x0f3f,	// (0x0005a3fa) popup_adpt_find_window_ParamLimits

0x9970,	// (0x00062e2b) main_cam_set_pane

0x6616,	// (0x0005fad1) cam4_zoom_pane_ParamLimits

0x6616,	// (0x0005fad1) cam4_zoom_pane

0x6d3d,	// (0x000601f8) main_cam_set_pane_g1_ParamLimits

0x6d3d,	// (0x000601f8) main_cam_set_pane_g1

0x6d4b,	// (0x00060206) main_cam_set_pane_g2_ParamLimits

0x6d4b,	// (0x00060206) main_cam_set_pane_g2

0x0001,

0xf889,	// (0x00068d44) main_cam_set_pane_g_ParamLimits

0xf889,	// (0x00068d44) main_cam_set_pane_g

0x6d6e,	// (0x00060229) main_cam_set_pane_t1_ParamLimits

0x6d6e,	// (0x00060229) main_cam_set_pane_t1

0x6d89,	// (0x00060244) main_cset_listscroll_pane_ParamLimits

0x6d89,	// (0x00060244) main_cset_listscroll_pane

0x6dad,	// (0x00060268) main_cset_slider_pane_ParamLimits

0x6dad,	// (0x00060268) main_cset_slider_pane

0xb7c7,	// (0x00064c82) main_cset_list_pane_ParamLimits

0xb7c7,	// (0x00064c82) main_cset_list_pane

0xb7d7,	// (0x00064c92) scroll_pane_cp028

0x6dd7,	// (0x00060292) aid_area_touch_slider

0x6df3,	// (0x000602ae) cset_slider_pane

0x6e1d,	// (0x000602d8) main_cset_slider_pane_g1

0x6e32,	// (0x000602ed) main_cset_slider_pane_g2

0x0011,

0xf88e,	// (0x00068d49) main_cset_slider_pane_g

0xb810,	// (0x00064ccb) main_cset_slider_pane_t1

0x6ef4,	// (0x000603af) main_cset_slider_pane_t2

0x6f0e,	// (0x000603c9) main_cset_slider_pane_t3

0x6f28,	// (0x000603e3) main_cset_slider_pane_t4

0x6f42,	// (0x000603fd) main_cset_slider_pane_t5

0x6f60,	// (0x0006041b) main_cset_slider_pane_t6

0x6f77,	// (0x00060432) main_cset_slider_pane_t7

0x000e,

0xf8b3,	// (0x00068d6e) main_cset_slider_pane_t

0x7083,	// (0x0006053e) cset_list_set_pane_ParamLimits

0x7083,	// (0x0006053e) cset_list_set_pane

0x7097,	// (0x00060552) aid_position_infowindow_above

0x709f,	// (0x0006055a) aid_position_infowindow_below

0xb8b0,	// (0x00064d6b) cset_list_set_pane_g1_ParamLimits

0xb8b0,	// (0x00064d6b) cset_list_set_pane_g1

0x70a7,	// (0x00060562) cset_list_set_pane_g3_ParamLimits

0x70a7,	// (0x00060562) cset_list_set_pane_g3

0x0001,

0xf8d2,	// (0x00068d8d) cset_list_set_pane_g_ParamLimits

0xf8d2,	// (0x00068d8d) cset_list_set_pane_g

0xb8bc,	// (0x00064d77) cset_list_set_pane_t1_ParamLimits

0xb8bc,	// (0x00064d77) cset_list_set_pane_t1

0x9970,	// (0x00062e2b) list_highlight_pane_cp021_ParamLimits

0x9970,	// (0x00062e2b) list_highlight_pane_cp021

0xae12,	// (0x000642cd) cset_slider_pane_g1

0xae24,	// (0x000642df) cset_slider_pane_g2

0xae1b,	// (0x000642d6) cset_slider_pane_g3

0x0002,

0xf8d7,	// (0x00068d92) cset_slider_pane_g

0xd91b,	// (0x00066dd6) aid_area_touch_cam4_zoom

0xd923,	// (0x00066dde) cam4_zoom_cont_pane

0xd92b,	// (0x00066de6) cam4_zoom_pane_g1

0xd933,	// (0x00066dee) cam4_zoom_pane_g2

0x70b6,	// (0x00060571) cam4_zoom_pane_g3

0x0002,

0xf8de,	// (0x00068d99) cam4_zoom_pane_g

0xd93b,	// (0x00066df6) cam4_zoom_cont_pane_g1

0xd944,	// (0x00066dff) cam4_zoom_cont_pane_g2

0xd94d,	// (0x00066e08) cam4_zoom_cont_pane_g3

0x0002,

0xf8e5,	// (0x00068da0) cam4_zoom_cont_pane_g

0x64d5,	// (0x0005f990) call4_image_pane_ParamLimits

0x64d5,	// (0x0005f990) call4_image_pane

0xb53d,	// (0x000649f8) call4_windows_conf_pane_ParamLimits

0xb584,	// (0x00064a3f) popup_call4_audio_in_window_ParamLimits

0xb584,	// (0x00064a3f) popup_call4_audio_in_window

0x0d7f,	// (0x0005a23a) bg_popup_call2_act_pane_cp02

0xb5fc,	// (0x00064ab7) call4_list_conf_pane

0xebe5,	// (0x000680a0) call4_image_pane_g1

0xebe5,	// (0x000680a0) call4_image_pane_g2

0x0001,

0x043a,	// (0x000598f5) call4_image_pane_g

0xb8d1,	// (0x00064d8c) list_single_graphic_popup_conf4_pane_ParamLimits

0xb8d1,	// (0x00064d8c) list_single_graphic_popup_conf4_pane

0x0d7f,	// (0x0005a23a) list_highlight_pane_cp022

0xb8e6,	// (0x00064da1) list_single_graphic_popup_conf4_pane_g1

0xaaec,	// (0x00063fa7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8ec,	// (0x00068da7) list_single_graphic_popup_conf4_pane_g

0xb8ee,	// (0x00064da9) list_single_graphic_popup_conf4_pane_t1

0x1e4c,	// (0x0005b307) popup_vtel_slider_window_ParamLimits

0x1e4c,	// (0x0005b307) popup_vtel_slider_window

0xb51f,	// (0x000649da) dialer2_ne_pane_t2_ParamLimits

0xb51f,	// (0x000649da) dialer2_ne_pane_t2

0x0001,

0xf7cd,	// (0x00068c88) dialer2_ne_pane_t_ParamLimits

0xf7cd,	// (0x00068c88) dialer2_ne_pane_t

0xe9c4,	// (0x00067e7f) bg_popup_sub_pane_cp010_ParamLimits

0xe9c4,	// (0x00067e7f) bg_popup_sub_pane_cp010

0x70be,	// (0x00060579) popup_vtel_slider_window_g1_ParamLimits

0x70be,	// (0x00060579) popup_vtel_slider_window_g1

0x70d1,	// (0x0006058c) popup_vtel_slider_window_g2_ParamLimits

0x70d1,	// (0x0006058c) popup_vtel_slider_window_g2

0x0003,

0xf8f1,	// (0x00068dac) popup_vtel_slider_window_g_ParamLimits

0xf8f1,	// (0x00068dac) popup_vtel_slider_window_g

0x7127,	// (0x000605e2) vtel_slider_pane_ParamLimits

0x7127,	// (0x000605e2) vtel_slider_pane

0x7149,	// (0x00060604) vtel_slider_pane_g1_ParamLimits

0x7149,	// (0x00060604) vtel_slider_pane_g1

0x715d,	// (0x00060618) vtel_slider_pane_g2_ParamLimits

0x715d,	// (0x00060618) vtel_slider_pane_g2

0x7175,	// (0x00060630) vtel_slider_pane_g3_ParamLimits

0x7175,	// (0x00060630) vtel_slider_pane_g3

0x7149,	// (0x00060604) vtel_slider_pane_g4_ParamLimits

0x7149,	// (0x00060604) vtel_slider_pane_g4

0x718b,	// (0x00060646) vtel_slider_pane_g5_ParamLimits

0x718b,	// (0x00060646) vtel_slider_pane_g5

0x0004,

0xf8fa,	// (0x00068db5) vtel_slider_pane_g_ParamLimits

0xf8fa,	// (0x00068db5) vtel_slider_pane_g

0x0d7f,	// (0x0005a23a) main_gallery2_pane

0x685e,	// (0x0005fd19) aid_size_row_itut2_dropdow_list_ParamLimits

0x685e,	// (0x0005fd19) aid_size_row_itut2_dropdow_list

0x68ee,	// (0x0005fda9) grid_vitu2_function_top_pane_ParamLimits

0x68ee,	// (0x0005fda9) grid_vitu2_function_top_pane

0x694d,	// (0x0005fe08) popup_vitu2_dropdown_list_window_ParamLimits

0x694d,	// (0x0005fe08) popup_vitu2_dropdown_list_window

0x6976,	// (0x0005fe31) popup_vitu2_match_list_window

0x71a1,	// (0x0006065c) cell_vitu2_function_top_pane_ParamLimits

0x71a1,	// (0x0006065c) cell_vitu2_function_top_pane

0x71c1,	// (0x0006067c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x71c1,	// (0x0006067c) cell_vitu2_function_top_pane_cp01

0x71df,	// (0x0006069a) cell_vitu2_function_top_wide_pane_ParamLimits

0x71df,	// (0x0006069a) cell_vitu2_function_top_wide_pane

0xd90d,	// (0x00066dc8) bg_button_pane_cp012

0x71fd,	// (0x000606b8) cell_vitu2_function_top_pane_g1

0xd956,	// (0x00066e11) bg_button_pane_cp013_ParamLimits

0xd956,	// (0x00066e11) bg_button_pane_cp013

0x7211,	// (0x000606cc) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7211,	// (0x000606cc) cell_vitu2_function_top_wide_pane_g1

0xd90d,	// (0x00066dc8) bg_popup_sub_pane_cp20

0x7229,	// (0x000606e4) list_vitu2_match_list_pane

0xb6b9,	// (0x00064b74) bg_popup_sub_pane_cp20_g1

0xb6c1,	// (0x00064b7c) bg_popup_sub_pane_cp20_g2

0xa5d5,	// (0x00063a90) bg_popup_sub_pane_cp20_g3

0xb6c9,	// (0x00064b84) bg_popup_sub_pane_cp20_g4

0xa5b5,	// (0x00063a70) bg_popup_sub_pane_cp20_g5

0xb90a,	// (0x00064dc5) bg_popup_sub_pane_cp20_g6

0xb6d9,	// (0x00064b94) bg_popup_sub_pane_cp20_g7

0xb6e1,	// (0x00064b9c) bg_popup_sub_pane_cp20_g8

0xb6e9,	// (0x00064ba4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf905,	// (0x00068dc0) bg_popup_sub_pane_cp20_g

0xd972,	// (0x00066e2d) list_vitu2_match_list_item_pane_ParamLimits

0xd972,	// (0x00066e2d) list_vitu2_match_list_item_pane

0xd984,	// (0x00066e3f) list_vitu2_match_list_item_pane_t1

0xa0bf,	// (0x0006357a) bg_popup_sub_pane_cp21

0xd992,	// (0x00066e4d) grid_vitu2_dropdown_list_pane

0x7273,	// (0x0006072e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7273,	// (0x0006072e) cell_vitu2_dropdown_list_char_pane

0x7296,	// (0x00060751) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7296,	// (0x00060751) cell_vitu2_dropdown_list_ctrl_pane

0xb92a,	// (0x00064de5) cell_vitu2_dropdown_list_char_pane_g1

0xb933,	// (0x00064dee) cell_vitu2_dropdown_list_char_pane_g2

0xb93c,	// (0x00064df7) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf922,	// (0x00068ddd) cell_vitu2_dropdown_list_char_pane_g

0x72c4,	// (0x0006077f) cell_vitu2_dropdown_list_char_pane_t1

0x72d2,	// (0x0006078d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x72d2,	// (0x0006078d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x72e2,	// (0x0006079d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x72e2,	// (0x0006079d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x72f3,	// (0x000607ae) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x72f3,	// (0x000607ae) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7303,	// (0x000607be) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7303,	// (0x000607be) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd88e,	// (0x00066d49) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd88e,	// (0x00066d49) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf929,	// (0x00068de4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf929,	// (0x00068de4) cell_vitu2_dropdown_list_ctrl_pane_g

0x731f,	// (0x000607da) aid_size_cell_gallery2_ParamLimits

0x731f,	// (0x000607da) aid_size_cell_gallery2

0x7335,	// (0x000607f0) grid_gallery2_pane_ParamLimits

0x7335,	// (0x000607f0) grid_gallery2_pane

0x7349,	// (0x00060804) scroll_pane_cp029_ParamLimits

0x7349,	// (0x00060804) scroll_pane_cp029

0x7355,	// (0x00060810) cell_gallery2_pane_ParamLimits

0x7355,	// (0x00060810) cell_gallery2_pane

0xb945,	// (0x00064e00) cell_gallery2_pane_g2

0x738f,	// (0x0006084a) cell_gallery2_pane_g3

0xb94f,	// (0x00064e0a) cell_gallery2_pane_g4

0xb957,	// (0x00064e12) cell_gallery2_pane_g5

0xacba,	// (0x00064175) grid_highlight_pane_cp10

0x6976,	// (0x0005fe31) popup_vitu2_match_list_window_ParamLimits

0x698d,	// (0x0005fe48) popup_vitu2_query_window_ParamLimits

0x698d,	// (0x0005fe48) popup_vitu2_query_window

0xa0bf,	// (0x0006357a) bg_vitu2_candi_button_pane

0xb92a,	// (0x00064de5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb933,	// (0x00064dee) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb93c,	// (0x00064df7) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7397,	// (0x00060852) bg_button_pane_cp015

0x73a1,	// (0x0006085c) bg_button_pane_cp016

0x73ab,	// (0x00060866) bg_button_pane_cp017

0x9970,	// (0x00062e2b) bg_popup_sub_pane_cp22

0xb95f,	// (0x00064e1a) popup_vitu2_query_window_g1

0x73d3,	// (0x0006088e) popup_vitu2_query_window_g2

0x0001,

0xf934,	// (0x00068def) popup_vitu2_query_window_g

0x73e1,	// (0x0006089c) popup_vitu2_query_window_t1_ParamLimits

0x73e1,	// (0x0006089c) popup_vitu2_query_window_t1

0x7409,	// (0x000608c4) popup_vitu2_query_window_t2_ParamLimits

0x7409,	// (0x000608c4) popup_vitu2_query_window_t2

0x741b,	// (0x000608d6) popup_vitu2_query_window_t3_ParamLimits

0x741b,	// (0x000608d6) popup_vitu2_query_window_t3

0x7443,	// (0x000608fe) popup_vitu2_query_window_t4_ParamLimits

0x7443,	// (0x000608fe) popup_vitu2_query_window_t4

0x7457,	// (0x00060912) popup_vitu2_query_window_t5_ParamLimits

0x7457,	// (0x00060912) popup_vitu2_query_window_t5

0x0004,

0xf939,	// (0x00068df4) popup_vitu2_query_window_t_ParamLimits

0xf939,	// (0x00068df4) popup_vitu2_query_window_t

0xb7bf,	// (0x00064c7a) main_cset_text_pane

0x6dd7,	// (0x00060292) aid_area_touch_slider_ParamLimits

0x6df3,	// (0x000602ae) cset_slider_pane_ParamLimits

0x6e1d,	// (0x000602d8) main_cset_slider_pane_g1_ParamLimits

0x6e32,	// (0x000602ed) main_cset_slider_pane_g2_ParamLimits

0xb7e0,	// (0x00064c9b) main_cset_slider_pane_g3_ParamLimits

0xb7e0,	// (0x00064c9b) main_cset_slider_pane_g3

0x6e47,	// (0x00060302) main_cset_slider_pane_g4_ParamLimits

0x6e47,	// (0x00060302) main_cset_slider_pane_g4

0x6e56,	// (0x00060311) main_cset_slider_pane_g5_ParamLimits

0x6e56,	// (0x00060311) main_cset_slider_pane_g5

0x6e64,	// (0x0006031f) main_cset_slider_pane_g6_ParamLimits

0x6e64,	// (0x0006031f) main_cset_slider_pane_g6

0xf88e,	// (0x00068d49) main_cset_slider_pane_g_ParamLimits

0xb810,	// (0x00064ccb) main_cset_slider_pane_t1_ParamLimits

0x6ef4,	// (0x000603af) main_cset_slider_pane_t2_ParamLimits

0x6f0e,	// (0x000603c9) main_cset_slider_pane_t3_ParamLimits

0x6f28,	// (0x000603e3) main_cset_slider_pane_t4_ParamLimits

0x6f42,	// (0x000603fd) main_cset_slider_pane_t5_ParamLimits

0x6f60,	// (0x0006041b) main_cset_slider_pane_t6_ParamLimits

0x6f77,	// (0x00060432) main_cset_slider_pane_t7_ParamLimits

0x6fa5,	// (0x00060460) main_cset_slider_pane_t8_ParamLimits

0x6fa5,	// (0x00060460) main_cset_slider_pane_t8

0x6fcd,	// (0x00060488) main_cset_slider_pane_t9_ParamLimits

0x6fcd,	// (0x00060488) main_cset_slider_pane_t9

0x6ff5,	// (0x000604b0) main_cset_slider_pane_t10_ParamLimits

0x6ff5,	// (0x000604b0) main_cset_slider_pane_t10

0x701d,	// (0x000604d8) main_cset_slider_pane_t11_ParamLimits

0x701d,	// (0x000604d8) main_cset_slider_pane_t11

0x7047,	// (0x00060502) main_cset_slider_pane_t12_ParamLimits

0x7047,	// (0x00060502) main_cset_slider_pane_t12

0x7064,	// (0x0006051f) main_cset_slider_pane_t13_ParamLimits

0x7064,	// (0x0006051f) main_cset_slider_pane_t13

0xf8b3,	// (0x00068d6e) main_cset_slider_pane_t_ParamLimits

0x0d7f,	// (0x0005a23a) bg_popup_sub_pane_cp011

0xb96b,	// (0x00064e26) main_cset_text_pane_g1

0xb973,	// (0x00064e2e) main_cset_text_pane_t1

0xb981,	// (0x00064e3c) main_cset_text_pane_t2

0xb98f,	// (0x00064e4a) main_cset_text_pane_t3

0xb99d,	// (0x00064e58) main_cset_text_pane_t4

0xb9ab,	// (0x00064e66) main_cset_text_pane_t5

0xb9b9,	// (0x00064e74) main_cset_text_pane_t6

0xb9c7,	// (0x00064e82) main_cset_text_pane_t7

0x0006,

0xf944,	// (0x00068dff) main_cset_text_pane_t

0x0d7f,	// (0x0005a23a) main_cam4_burst_pane

0x0d7f,	// (0x0005a23a) main_cam5_pane

0x6d0c,	// (0x000601c7) bg_button_pane_cp019

0x6d15,	// (0x000601d0) bg_button_pane_cp020

0xb7ec,	// (0x00064ca7) main_cset_slider_pane_g7_ParamLimits

0xb7ec,	// (0x00064ca7) main_cset_slider_pane_g7

0xb7f8,	// (0x00064cb3) main_cset_slider_pane_g8_ParamLimits

0xb7f8,	// (0x00064cb3) main_cset_slider_pane_g8

0x6e78,	// (0x00060333) main_cset_slider_pane_g9_ParamLimits

0x6e78,	// (0x00060333) main_cset_slider_pane_g9

0x6e84,	// (0x0006033f) main_cset_slider_pane_g10_ParamLimits

0x6e84,	// (0x0006033f) main_cset_slider_pane_g10

0x6e90,	// (0x0006034b) main_cset_slider_pane_g11_ParamLimits

0x6e90,	// (0x0006034b) main_cset_slider_pane_g11

0x6e9c,	// (0x00060357) main_cset_slider_pane_g12_ParamLimits

0x6e9c,	// (0x00060357) main_cset_slider_pane_g12

0x6ea8,	// (0x00060363) main_cset_slider_pane_g13_ParamLimits

0x6ea8,	// (0x00060363) main_cset_slider_pane_g13

0x6eb4,	// (0x0006036f) main_cset_slider_pane_g14_ParamLimits

0x6eb4,	// (0x0006036f) main_cset_slider_pane_g14

0x6ec0,	// (0x0006037b) main_cset_slider_pane_g15_ParamLimits

0x6ec0,	// (0x0006037b) main_cset_slider_pane_g15

0xb83e,	// (0x00064cf9) main_cset_slider_pane_t14_ParamLimits

0xb83e,	// (0x00064cf9) main_cset_slider_pane_t14

0xb877,	// (0x00064d32) main_cset_slider_pane_t15_ParamLimits

0xb877,	// (0x00064d32) main_cset_slider_pane_t15

0x746b,	// (0x00060926) aid_cam4_burst_size_cell_ParamLimits

0x746b,	// (0x00060926) aid_cam4_burst_size_cell

0x748b,	// (0x00060946) grid_cam4_burst_pane_ParamLimits

0x748b,	// (0x00060946) grid_cam4_burst_pane

0x74c5,	// (0x00060980) linegrid_cam4_burst_pane_ParamLimits

0x74c5,	// (0x00060980) linegrid_cam4_burst_pane

0xb9d5,	// (0x00064e90) scroll_pane_cp30_ParamLimits

0xb9d5,	// (0x00064e90) scroll_pane_cp30

0x74e9,	// (0x000609a4) cell_cam4_burst_pane_ParamLimits

0x74e9,	// (0x000609a4) cell_cam4_burst_pane

0xb9e1,	// (0x00064e9c) linegrid_cam4_burst_pane_g1_ParamLimits

0xb9e1,	// (0x00064e9c) linegrid_cam4_burst_pane_g1

0x753e,	// (0x000609f9) linegrid_cam4_burst_pane_g2_ParamLimits

0x753e,	// (0x000609f9) linegrid_cam4_burst_pane_g2

0xb9ee,	// (0x00064ea9) linegrid_cam4_burst_pane_g3_ParamLimits

0xb9ee,	// (0x00064ea9) linegrid_cam4_burst_pane_g3

0x0002,

0xf953,	// (0x00068e0e) linegrid_cam4_burst_pane_g_ParamLimits

0xf953,	// (0x00068e0e) linegrid_cam4_burst_pane_g

0x754f,	// (0x00060a0a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x754f,	// (0x00060a0a) linegrid_cam4_burst_pane_g3_copy1

0xb9fb,	// (0x00064eb6) linegrid_cam4_burst_pane_g4_ParamLimits

0xb9fb,	// (0x00064eb6) linegrid_cam4_burst_pane_g4

0x756d,	// (0x00060a28) linegrid_cam4_burst_pane_g5_ParamLimits

0x756d,	// (0x00060a28) linegrid_cam4_burst_pane_g5

0x757e,	// (0x00060a39) linegrid_cam4_burst_pane_g6_ParamLimits

0x757e,	// (0x00060a39) linegrid_cam4_burst_pane_g6

0xba08,	// (0x00064ec3) linegrid_cam4_burst_pane_g7_ParamLimits

0xba08,	// (0x00064ec3) linegrid_cam4_burst_pane_g7

0x7595,	// (0x00060a50) cell_cam4_burst_pane_g1

0xba21,	// (0x00064edc) main_cam5_pane_t1_ParamLimits

0xba21,	// (0x00064edc) main_cam5_pane_t1

0xba33,	// (0x00064eee) main_cam5_pane_t2_ParamLimits

0xba33,	// (0x00064eee) main_cam5_pane_t2

0xba45,	// (0x00064f00) main_cam5_pane_t3_ParamLimits

0xba45,	// (0x00064f00) main_cam5_pane_t3

0xba57,	// (0x00064f12) main_cam5_pane_t4_ParamLimits

0xba57,	// (0x00064f12) main_cam5_pane_t4

0xba6f,	// (0x00064f2a) main_cam5_pane_t5_ParamLimits

0xba6f,	// (0x00064f2a) main_cam5_pane_t5

0xba83,	// (0x00064f3e) main_cam5_pane_t6_ParamLimits

0xba83,	// (0x00064f3e) main_cam5_pane_t6

0xba97,	// (0x00064f52) main_cam5_pane_t7_ParamLimits

0xba97,	// (0x00064f52) main_cam5_pane_t7

0xbaa9,	// (0x00064f64) main_cam5_pane_t8_ParamLimits

0xbaa9,	// (0x00064f64) main_cam5_pane_t8

0xbac7,	// (0x00064f82) main_cam5_pane_t9_ParamLimits

0xbac7,	// (0x00064f82) main_cam5_pane_t9

0xbad9,	// (0x00064f94) main_cam5_pane_t10_ParamLimits

0xbad9,	// (0x00064f94) main_cam5_pane_t10

0xbaeb,	// (0x00064fa6) main_cam5_pane_t11_ParamLimits

0xbaeb,	// (0x00064fa6) main_cam5_pane_t11

0xbaff,	// (0x00064fba) main_cam5_pane_t12_ParamLimits

0xbaff,	// (0x00064fba) main_cam5_pane_t12

0xbb16,	// (0x00064fd1) main_cam5_pane_t13_ParamLimits

0xbb16,	// (0x00064fd1) main_cam5_pane_t13

0x000c,

0xf95f,	// (0x00068e1a) main_cam5_pane_t_ParamLimits

0xf95f,	// (0x00068e1a) main_cam5_pane_t

0x0fc3,	// (0x0005a47e) popup_scut_keymap_window_ParamLimits

0x0fc3,	// (0x0005a47e) popup_scut_keymap_window

0x75a8,	// (0x00060a63) aid_size_cell_brow_shortcut

0xacba,	// (0x00064175) bg_popup_window_pane_cp010

0x75b4,	// (0x00060a6f) grid_scut_pane

0x75c0,	// (0x00060a7b) cell_scut_pane_ParamLimits

0x75c0,	// (0x00060a7b) cell_scut_pane

0x75d9,	// (0x00060a94) cell_scut_pane_g1

0xbb39,	// (0x00064ff4) cell_scut_pane_t1

0xbb48,	// (0x00065003) cell_scut_pane_t2

0x75e2,	// (0x00060a9d) cell_scut_pane_t3

0x0002,

0xf97a,	// (0x00068e35) cell_scut_pane_t

0x503e,	// (0x0005e4f9) main_mup3_pane_g8_ParamLimits

0x503e,	// (0x0005e4f9) main_mup3_pane_g8

0x6878,	// (0x0005fd33) area_vitu2_query_pane_ParamLimits

0x6878,	// (0x0005fd33) area_vitu2_query_pane

0x73b5,	// (0x00060870) input_focus_pane_cp08

0xbb57,	// (0x00065012) area_vitu2_query_pane_g1

0x75f0,	// (0x00060aab) area_vitu2_query_pane_g2

0x0001,

0xf981,	// (0x00068e3c) area_vitu2_query_pane_g

0x7601,	// (0x00060abc) area_vitu2_query_pane_t1_ParamLimits

0x7601,	// (0x00060abc) area_vitu2_query_pane_t1

0x7615,	// (0x00060ad0) area_vitu2_query_pane_t2_ParamLimits

0x7615,	// (0x00060ad0) area_vitu2_query_pane_t2

0x7629,	// (0x00060ae4) area_vitu2_query_pane_t3_ParamLimits

0x7629,	// (0x00060ae4) area_vitu2_query_pane_t3

0xbb63,	// (0x0006501e) area_vitu2_query_pane_t4_ParamLimits

0xbb63,	// (0x0006501e) area_vitu2_query_pane_t4

0xbb8b,	// (0x00065046) area_vitu2_query_pane_t5_ParamLimits

0xbb8b,	// (0x00065046) area_vitu2_query_pane_t5

0xbbb3,	// (0x0006506e) area_vitu2_query_pane_t6_ParamLimits

0xbbb3,	// (0x0006506e) area_vitu2_query_pane_t6

0x0006,

0xf986,	// (0x00068e41) area_vitu2_query_pane_t_ParamLimits

0xf986,	// (0x00068e41) area_vitu2_query_pane_t

0x7651,	// (0x00060b0c) bg_button_pane_cp018

0x765f,	// (0x00060b1a) bg_button_pane_cp021

0x766b,	// (0x00060b26) bg_button_pane_cp022

0x767c,	// (0x00060b37) input_focus_pane_cp09

0x2eae,	// (0x0005c369) aid_size_touch_mv_arrow_left

0x2ed7,	// (0x0005c392) aid_size_touch_mv_arrow_right

0x6ed8,	// (0x00060393) main_cset_slider_pane_g16_ParamLimits

0x6ed8,	// (0x00060393) main_cset_slider_pane_g16

0x6ee6,	// (0x000603a1) main_cset_slider_pane_g17_ParamLimits

0x6ee6,	// (0x000603a1) main_cset_slider_pane_g17

0x7595,	// (0x00060a50) cell_cam4_burst_pane_g1_ParamLimits

0x0d7f,	// (0x0005a23a) compa_mode_pane

0x70e1,	// (0x0006059c) popup_vtel_slider_window_g3_ParamLimits

0x70e1,	// (0x0006059c) popup_vtel_slider_window_g3

0x70f8,	// (0x000605b3) popup_vtel_slider_window_g4_ParamLimits

0x70f8,	// (0x000605b3) popup_vtel_slider_window_g4

0x710f,	// (0x000605ca) popup_vtel_slider_window_t1_ParamLimits

0x710f,	// (0x000605ca) popup_vtel_slider_window_t1

0x0d7f,	// (0x0005a23a) main_cl_pane

0xe796,	// (0x00067c51) popup_imed_adjust2_window_ParamLimits

0xe76a,	// (0x00067c25) bg_tb_trans_pane_cp05_ParamLimits

0xf0bc,	// (0x00068577) popup_imed_adjust2_window_g1_ParamLimits

0xf0cb,	// (0x00068586) popup_imed_adjust2_window_g2_ParamLimits

0xf0cb,	// (0x00068586) popup_imed_adjust2_window_g2

0xf0d7,	// (0x00068592) popup_imed_adjust2_window_g3_ParamLimits

0xf0d7,	// (0x00068592) popup_imed_adjust2_window_g3

0x0002,

0xf6f7,	// (0x00068bb2) popup_imed_adjust2_window_g_ParamLimits

0xf6f7,	// (0x00068bb2) popup_imed_adjust2_window_g

0xf0e3,	// (0x0006859e) popup_imed_adjust2_window_t1_ParamLimits

0x599d,	// (0x0005ee58) slider_imed_adjust_pane_ParamLimits

0x59b1,	// (0x0005ee6c) slider_imed_adjust_pane_g1_ParamLimits

0x59c1,	// (0x0005ee7c) slider_imed_adjust_pane_g2_ParamLimits

0x59d1,	// (0x0005ee8c) slider_imed_adjust_pane_g3_ParamLimits

0x59e2,	// (0x0005ee9d) slider_imed_adjust_pane_g4_ParamLimits

0xf6fe,	// (0x00068bb9) slider_imed_adjust_pane_g_ParamLimits

0x65b6,	// (0x0005fa71) aid_touch_area_cam4_ParamLimits

0x65b6,	// (0x0005fa71) aid_touch_area_cam4

0xd87c,	// (0x00066d37) battery_pane_cp01

0x6661,	// (0x0005fb1c) main_camera4_pane_g6_ParamLimits

0x6661,	// (0x0005fb1c) main_camera4_pane_g6

0x6684,	// (0x0005fb3f) main_camera4_pane_t2_ParamLimits

0x6684,	// (0x0005fb3f) main_camera4_pane_t2

0x0001,

0xf801,	// (0x00068cbc) main_camera4_pane_t_ParamLimits

0xf801,	// (0x00068cbc) main_camera4_pane_t

0x66cd,	// (0x0005fb88) aid_touch_area_vid4_ParamLimits

0x66cd,	// (0x0005fb88) aid_touch_area_vid4

0x672b,	// (0x0005fbe6) main_video4_pane_g5_ParamLimits

0x672b,	// (0x0005fbe6) main_video4_pane_g5

0x6752,	// (0x0005fc0d) vid4_progress_pane_ParamLimits

0x6752,	// (0x0005fc0d) vid4_progress_pane

0xb804,	// (0x00064cbf) main_cset_slider_pane_g18_ParamLimits

0xb804,	// (0x00064cbf) main_cset_slider_pane_g18

0xba15,	// (0x00064ed0) cell_cam4_burst_pane_g2_ParamLimits

0xba15,	// (0x00064ed0) cell_cam4_burst_pane_g2

0x0001,

0xf95a,	// (0x00068e15) cell_cam4_burst_pane_g_ParamLimits

0xf95a,	// (0x00068e15) cell_cam4_burst_pane_g

0xa0e3,	// (0x0006359e) bg_cl_pane_ParamLimits

0xa0e3,	// (0x0006359e) bg_cl_pane

0x768d,	// (0x00060b48) cl_header_pane_ParamLimits

0x768d,	// (0x00060b48) cl_header_pane

0x76a1,	// (0x00060b5c) cl_listscroll_pane_ParamLimits

0x76a1,	// (0x00060b5c) cl_listscroll_pane

0xbbff,	// (0x000650ba) bg_cl_pane_g1

0xbc07,	// (0x000650c2) bg_cl_pane_g2

0xbc0f,	// (0x000650ca) bg_cl_pane_g3

0xbc17,	// (0x000650d2) bg_cl_pane_g4

0xbc1f,	// (0x000650da) bg_cl_pane_g5

0xbc27,	// (0x000650e2) bg_cl_pane_g6

0xbc2f,	// (0x000650ea) bg_cl_pane_g7

0xbc37,	// (0x000650f2) bg_cl_pane_g8

0xbc3f,	// (0x000650fa) bg_cl_pane_g9

0x0008,

0xf995,	// (0x00068e50) bg_cl_pane_g

0x76b1,	// (0x00060b6c) aid_height_cl_leading_ParamLimits

0x76b1,	// (0x00060b6c) aid_height_cl_leading

0x76bd,	// (0x00060b78) aid_height_cl_text_ParamLimits

0x76bd,	// (0x00060b78) aid_height_cl_text

0x9970,	// (0x00062e2b) bg_cl_header_pane_ParamLimits

0x9970,	// (0x00062e2b) bg_cl_header_pane

0x76dc,	// (0x00060b97) cl_header_pane_g1_ParamLimits

0x76dc,	// (0x00060b97) cl_header_pane_g1

0x76f2,	// (0x00060bad) cl_header_pane_t1_ParamLimits

0x76f2,	// (0x00060bad) cl_header_pane_t1

0xbc47,	// (0x00065102) cl_list_pane

0xb7d7,	// (0x00064c92) hc_scroll_pane_cp01

0xa5b5,	// (0x00063a70) bg_cl_header_pane_g1

0xb6b9,	// (0x00064b74) bg_cl_header_pane_g2

0xa5d5,	// (0x00063a90) bg_cl_header_pane_g3

0xb6c9,	// (0x00064b84) bg_cl_header_pane_g4

0xb6c1,	// (0x00064b7c) bg_cl_header_pane_g5

0xb90a,	// (0x00064dc5) bg_cl_header_pane_g6

0xb6e1,	// (0x00064b9c) bg_cl_header_pane_g7

0xb6e9,	// (0x00064ba4) bg_cl_header_pane_g8

0xb6d9,	// (0x00064b94) bg_cl_header_pane_g9

0x0008,

0xf9a8,	// (0x00068e63) bg_cl_header_pane_g

0x770b,	// (0x00060bc6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x770b,	// (0x00060bc6) hc_cl_list_double_graphic_heading_pane

0x771e,	// (0x00060bd9) hc_cl_list_single_graphic_pane_ParamLimits

0x771e,	// (0x00060bd9) hc_cl_list_single_graphic_pane

0x7736,	// (0x00060bf1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7736,	// (0x00060bf1) hc_cl_list_single_graphic_pane_g1

0x7742,	// (0x00060bfd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7742,	// (0x00060bfd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9bb,	// (0x00068e76) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9bb,	// (0x00068e76) hc_cl_list_single_graphic_pane_g

0x7756,	// (0x00060c11) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7756,	// (0x00060c11) hc_cl_list_single_graphic_pane_t1

0x7736,	// (0x00060bf1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7736,	// (0x00060bf1) hc_cl_list_double_graphic_heading_pane_g1

0x776b,	// (0x00060c26) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x776b,	// (0x00060c26) hc_cl_list_double_graphic_heading_pane_g2

0x777f,	// (0x00060c3a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x777f,	// (0x00060c3a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9c0,	// (0x00068e7b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9c0,	// (0x00068e7b) hc_cl_list_double_graphic_heading_pane_g

0x7793,	// (0x00060c4e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7793,	// (0x00060c4e) hc_cl_list_double_graphic_heading_pane_t1

0x77a8,	// (0x00060c63) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x77a8,	// (0x00060c63) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9c7,	// (0x00068e82) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9c7,	// (0x00068e82) hc_cl_list_double_graphic_heading_pane_t

0xd9a2,	// (0x00066e5d) vid4_progress_pane_g1

0xd9ae,	// (0x00066e69) vid4_progress_pane_g2

0xd9ba,	// (0x00066e75) vid4_progress_pane_g3

0xd9c9,	// (0x00066e84) vid4_progress_pane_g4

0x0004,

0xf9cc,	// (0x00068e87) vid4_progress_pane_g

0xd9e7,	// (0x00066ea2) vid4_progress_pane_t1

0xd9fd,	// (0x00066eb8) vid4_progress_pane_t2

0x0002,

0xf9d7,	// (0x00068e92) vid4_progress_pane_t

0xda28,	// (0x00066ee3) wait_bar_pane_cp07

0xe9d2,	// (0x00067e8d) blid_firmament_pane_ParamLimits

0xea15,	// (0x00067ed0) popup_blid_sat_info2_window_g1

0xea39,	// (0x00067ef4) popup_blid_sat_info2_window_t3

0xea47,	// (0x00067f02) popup_blid_sat_info2_window_t4

0xea55,	// (0x00067f10) popup_blid_sat_info2_window_t5

0xea63,	// (0x00067f1e) popup_blid_sat_info2_window_t6

0xea73,	// (0x00067f2e) popup_blid_sat_info2_window_t7

0xea81,	// (0x00067f3c) popup_blid_sat_info2_window_t8

0xea8f,	// (0x00067f4a) popup_blid_sat_info2_window_t9

0xea9d,	// (0x00067f58) popup_blid_sat_info2_window_t10

0xeb65,	// (0x00068020) aid_firma_cardinal_ParamLimits

0xeb79,	// (0x00068034) blid_firmament_pane_t1_ParamLimits

0xeb90,	// (0x0006804b) blid_firmament_pane_t2_ParamLimits

0xeba7,	// (0x00068062) blid_firmament_pane_t3_ParamLimits

0xebbe,	// (0x00068079) blid_firmament_pane_t4_ParamLimits

0x0431,	// (0x000598ec) blid_firmament_pane_t_ParamLimits

0xebd5,	// (0x00068090) blid_sat_info_pane_ParamLimits

0x9970,	// (0x00062e2b) main_cam_set_pane_ParamLimits

0x58d3,	// (0x0005ed8e) aid_size_cell_colour_35_ParamLimits

0x58f3,	// (0x0005edae) aid_size_cell_colour_112_ParamLimits

0x5913,	// (0x0005edce) aid_size_cell_effect_ParamLimits

0xe76a,	// (0x00067c25) bg_tb_trans_pane_cp02_ParamLimits

0xa7ab,	// (0x00063c66) heading_imed_pane_ParamLimits

0x5933,	// (0x0005edee) listscroll_imed_pane_ParamLimits

0xdd98,	// (0x00067253) popup_call2_audio_first_window_g5_ParamLimits

0xdd98,	// (0x00067253) popup_call2_audio_first_window_g5

0x6260,	// (0x0005f71b) aid_size_touch_image3_arrow_left_ParamLimits

0x6260,	// (0x0005f71b) aid_size_touch_image3_arrow_left

0x628c,	// (0x0005f747) aid_size_touch_image3_arrow_right_ParamLimits

0x628c,	// (0x0005f747) aid_size_touch_image3_arrow_right

0xda13,	// (0x00066ece) vid4_progress_pane_t3

0x5f00,	// (0x0005f3bb) main_hwr_training_symbol_option_pane_ParamLimits

0x5f00,	// (0x0005f3bb) main_hwr_training_symbol_option_pane

0x5f20,	// (0x0005f3db) popup_hwr_training_preview_window_ParamLimits

0x5f20,	// (0x0005f3db) popup_hwr_training_preview_window

0x5f6d,	// (0x0005f428) hwr_training_navi_pane_g5_ParamLimits

0x5f6d,	// (0x0005f428) hwr_training_navi_pane_g5

0xb6a7,	// (0x00064b62) popup_char_count_window

0xd90d,	// (0x00066dc8) bg_popup_sub_pane_cp20_ParamLimits

0x7229,	// (0x000606e4) list_vitu2_match_list_pane_ParamLimits

0x7238,	// (0x000606f3) vitu2_page_scroll_pane_ParamLimits

0x7238,	// (0x000606f3) vitu2_page_scroll_pane

0xbcaa,	// (0x00065165) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbcaa,	// (0x00065165) list_single_hwr_training_symbol_option_pane

0xbcbd,	// (0x00065178) list_single_hwr_training_symbol_option_pane_g1

0xbcc5,	// (0x00065180) list_single_hwr_training_symbol_option_pane_t1

0xbcd3,	// (0x0006518e) bg_button_pane_cp023

0xbcdc,	// (0x00065197) bg_button_pane_cp024

0x77c7,	// (0x00060c82) vitu2_page_scroll_pane_g1

0x77cf,	// (0x00060c8a) vitu2_page_scroll_pane_g2

0x0001,

0xf9de,	// (0x00068e99) vitu2_page_scroll_pane_g

0x77d9,	// (0x00060c94) vitu2_page_scroll_pane_t1

0xe932,	// (0x00067ded) popup_char_count_window_g1

0xbd0f,	// (0x000651ca) popup_char_count_window_g2

0xbd18,	// (0x000651d3) popup_char_count_window_g3

0x0002,

0xf9e3,	// (0x00068e9e) popup_char_count_window_g

0xbd21,	// (0x000651dc) popup_char_count_window_t1

0x0d7f,	// (0x0005a23a) main_vded2_pane

0xf0a8,	// (0x00068563) aid_size_cell_imed_line

0xf0b2,	// (0x0006856d) grid_imed_line_width_pane

0x67c2,	// (0x0005fc7d) vid4_indicators_pane_g4

0xbd2f,	// (0x000651ea) cell_imed_line_width_pane_ParamLimits

0xbd2f,	// (0x000651ea) cell_imed_line_width_pane

0xbd45,	// (0x00065200) cell_imed_line_width_pane_g1

0xf092,	// (0x0006854d) cell_imed_line_width_pane_g2

0x0001,

0xf9ea,	// (0x00068ea5) cell_imed_line_width_pane_g

0x77e8,	// (0x00060ca3) main_vded2_pane_g1_ParamLimits

0x77e8,	// (0x00060ca3) main_vded2_pane_g1

0x7803,	// (0x00060cbe) main_vded2_pane_g2_ParamLimits

0x7803,	// (0x00060cbe) main_vded2_pane_g2

0x0001,

0xf9ef,	// (0x00068eaa) main_vded2_pane_g_ParamLimits

0xf9ef,	// (0x00068eaa) main_vded2_pane_g

0x7815,	// (0x00060cd0) vded2_slider_pane_ParamLimits

0x7815,	// (0x00060cd0) vded2_slider_pane

0x7825,	// (0x00060ce0) aid_size_touch_vded2_end

0x782f,	// (0x00060cea) aid_size_touch_vded2_playhead

0xbd4e,	// (0x00065209) aid_size_touch_vded2_start

0xbd56,	// (0x00065211) vded2_slider_bg_pane

0xbd5f,	// (0x0006521a) vded2_slider_pane_g1

0xbd68,	// (0x00065223) vded2_slider_pane_g2

0x7839,	// (0x00060cf4) vded2_slider_pane_g3

0x0002,

0xf9f4,	// (0x00068eaf) vded2_slider_pane_g

0xbd70,	// (0x0006522b) vded2_slider_bg_pane_g1

0xbd79,	// (0x00065234) vded2_slider_bg_pane_g2

0xbd82,	// (0x0006523d) vded2_slider_bg_pane_g3

0x0002,

0xf9fb,	// (0x00068eb6) vded2_slider_bg_pane_g

0x35ce,	// (0x0005ca89) aid_postcard_touch_down_pane_ParamLimits

0x35ce,	// (0x0005ca89) aid_postcard_touch_down_pane

0x35e6,	// (0x0005caa1) aid_postcard_touch_up_pane_ParamLimits

0x35e6,	// (0x0005caa1) aid_postcard_touch_up_pane

0x0d7f,	// (0x0005a23a) main_blid2_pane

0xe778,	// (0x00067c33) popup_blid2_search_window

0x0d7f,	// (0x0005a23a) blid2_gps_pane

0x0d7f,	// (0x0005a23a) blid2_navig_pane

0x0d7f,	// (0x0005a23a) blid2_search_pane

0x0d7f,	// (0x0005a23a) blid2_tripm_pane

0x7844,	// (0x00060cff) blid2_search_pane_g1_ParamLimits

0x7844,	// (0x00060cff) blid2_search_pane_g1

0x785c,	// (0x00060d17) blid2_search_pane_t1_ParamLimits

0x785c,	// (0x00060d17) blid2_search_pane_t1

0x786e,	// (0x00060d29) aid_size_cell_blid2_gps_ParamLimits

0x786e,	// (0x00060d29) aid_size_cell_blid2_gps

0x7886,	// (0x00060d41) blid2_gps_pane_g1_ParamLimits

0x7886,	// (0x00060d41) blid2_gps_pane_g1

0x789a,	// (0x00060d55) grid_blid2_satellite_pane_ParamLimits

0x789a,	// (0x00060d55) grid_blid2_satellite_pane

0x78b2,	// (0x00060d6d) blid2_navig_pane_g1_ParamLimits

0x78b2,	// (0x00060d6d) blid2_navig_pane_g1

0x78be,	// (0x00060d79) blid2_navig_pane_t1_ParamLimits

0x78be,	// (0x00060d79) blid2_navig_pane_t1

0x78d9,	// (0x00060d94) blid2_navig_pane_t2_ParamLimits

0x78d9,	// (0x00060d94) blid2_navig_pane_t2

0x0001,

0xfa02,	// (0x00068ebd) blid2_navig_pane_t_ParamLimits

0xfa02,	// (0x00068ebd) blid2_navig_pane_t

0x78f4,	// (0x00060daf) blid2_navig_ring_pane_ParamLimits

0x78f4,	// (0x00060daf) blid2_navig_ring_pane

0x790f,	// (0x00060dca) blid2_speed_pane_ParamLimits

0x790f,	// (0x00060dca) blid2_speed_pane

0x791b,	// (0x00060dd6) blid2_tripm_pane_g1_ParamLimits

0x791b,	// (0x00060dd6) blid2_tripm_pane_g1

0x7936,	// (0x00060df1) blid2_tripm_pane_g2_ParamLimits

0x7936,	// (0x00060df1) blid2_tripm_pane_g2

0x794a,	// (0x00060e05) blid2_tripm_pane_g3_ParamLimits

0x794a,	// (0x00060e05) blid2_tripm_pane_g3

0x795e,	// (0x00060e19) blid2_tripm_pane_g4_ParamLimits

0x795e,	// (0x00060e19) blid2_tripm_pane_g4

0x7972,	// (0x00060e2d) blid2_tripm_pane_g5_ParamLimits

0x7972,	// (0x00060e2d) blid2_tripm_pane_g5

0x0005,

0xfa07,	// (0x00068ec2) blid2_tripm_pane_g_ParamLimits

0xfa07,	// (0x00068ec2) blid2_tripm_pane_g

0x7998,	// (0x00060e53) blid2_tripm_pane_t1_ParamLimits

0x7998,	// (0x00060e53) blid2_tripm_pane_t1

0x79b3,	// (0x00060e6e) blid2_tripm_pane_t2_ParamLimits

0x79b3,	// (0x00060e6e) blid2_tripm_pane_t2

0x79cc,	// (0x00060e87) blid2_tripm_pane_t3_ParamLimits

0x79cc,	// (0x00060e87) blid2_tripm_pane_t3

0x0003,

0xfa14,	// (0x00068ecf) blid2_tripm_pane_t_ParamLimits

0xfa14,	// (0x00068ecf) blid2_tripm_pane_t

0x7a13,	// (0x00060ece) cell_blid2_satellite_pane_ParamLimits

0x7a13,	// (0x00060ece) cell_blid2_satellite_pane

0x7a2f,	// (0x00060eea) cell_blid2_satellite_pane_g1

0xbd8b,	// (0x00065246) cell_blid2_satellite_pane_t1

0xebe5,	// (0x000680a0) blid2_speed_pane_g1

0xbd99,	// (0x00065254) blid2_speed_pane_t1

0xbda7,	// (0x00065262) blid2_speed_pane_t2

0x0001,

0xfa1d,	// (0x00068ed8) blid2_speed_pane_t

0xebe5,	// (0x000680a0) blid2_navig_ring_pane_g1

0x7a38,	// (0x00060ef3) blid2_navig_ring_pane_g2

0x7a40,	// (0x00060efb) blid2_navig_ring_pane_g3

0x7a48,	// (0x00060f03) blid2_navig_ring_pane_g4

0x7a50,	// (0x00060f0b) blid2_navig_ring_pane_g5

0x0004,

0xfa22,	// (0x00068edd) blid2_navig_ring_pane_g

0x0d7f,	// (0x0005a23a) bg_popup_window_pane_cp011

0xbdb5,	// (0x00065270) popup_blid2_search_window_g1

0xbdbd,	// (0x00065278) popup_blid2_search_window_t1

0xbdcb,	// (0x00065286) popup_blid2_search_window_t2

0x0001,

0xfa2d,	// (0x00068ee8) popup_blid2_search_window_t

0xa4c4,	// (0x0006397f) main_browser_pane_g1

0xa0e3,	// (0x0006359e) main_browser_pane_ParamLimits

0xd90d,	// (0x00066dc8) bg_button_pane_cp011_ParamLimits

0x6a9e,	// (0x0005ff59) cell_vitu2_function_pane_g1_ParamLimits

0x9970,	// (0x00062e2b) bg_popup_sub_pane_cp22_ParamLimits

0x73b5,	// (0x00060870) input_focus_pane_cp08_ParamLimits

0x73c2,	// (0x0006087d) popup_vitu2_query_button_pane_ParamLimits

0x73c2,	// (0x0006087d) popup_vitu2_query_button_pane

0x7397,	// (0x00060852) popup_vitu2_query_input_button_pane

0xb95f,	// (0x00064e1a) popup_vitu2_query_window_g1_ParamLimits

0x73d3,	// (0x0006088e) popup_vitu2_query_window_g2_ParamLimits

0xf934,	// (0x00068def) popup_vitu2_query_window_g_ParamLimits

0x0d7f,	// (0x0005a23a) bg_button_pane_cp026

0x7a58,	// (0x00060f13) popup_vitu2_query_input_button_pane_g1

0x0d7f,	// (0x0005a23a) bg_button_pane_cp025

0xbdd9,	// (0x00065294) popup_vitu2_query_button_pane_t1

0x4cdb,	// (0x0005e196) main_mp3_pane_t6

0x4ce9,	// (0x0005e1a4) popup_slider_window_cp01

0xd89c,	// (0x00066d57) cam4_battery_pane

0xd903,	// (0x00066dbe) cam4_battery_pane_cp02

0x77bd,	// (0x00060c78) cam4_battery_pane_cp01

0xd99a,	// (0x00066e55) cam4_battery_pane_cp03

0xb515,	// (0x000649d0) cam4_battery_pane_g1

0xebe5,	// (0x000680a0) cam4_battery_pane_g2

0x0001,

0xfa32,	// (0x00068eed) cam4_battery_pane_g

0xeaab,	// (0x00067f66) popup_blid_sat_info2_window_t11

0x2eae,	// (0x0005c369) aid_size_touch_mv_arrow_left_ParamLimits

0x2ed7,	// (0x0005c392) aid_size_touch_mv_arrow_right_ParamLimits

0xac1a,	// (0x000640d5) navi_pane_g1_ParamLimits

0x2f00,	// (0x0005c3bb) navi_pane_g2_ParamLimits

0x2f2e,	// (0x0005c3e9) navi_pane_g3_ParamLimits

0xf418,	// (0x000688d3) navi_pane_g_ParamLimits

0x2f88,	// (0x0005c443) navi_pane_mv_t1_ParamLimits

0x593f,	// (0x0005edfa) grid_imed_effect_pane_ParamLimits

0xa409,	// (0x000638c4) aid_placing_vt_slider_lsc

0xa411,	// (0x000638cc) aid_placing_vt_slider_prt

0x9970,	// (0x00062e2b) bg_tb_trans_pane_cp01_ParamLimits

0xed35,	// (0x000681f0) popup_image_details_window_g1_ParamLimits

0xed48,	// (0x00068203) popup_image_details_window_g2_ParamLimits

0xed5d,	// (0x00068218) popup_image_details_window_g3_ParamLimits

0xed5d,	// (0x00068218) popup_image_details_window_g3

0x0476,	// (0x00059931) popup_image_details_window_g_ParamLimits

0xed71,	// (0x0006822c) popup_image_details_window_t1_ParamLimits

0xed83,	// (0x0006823e) popup_image_details_window_t2_ParamLimits

0xed9c,	// (0x00068257) popup_image_details_window_t3_ParamLimits

0xedb0,	// (0x0006826b) popup_image_details_window_t4_ParamLimits

0xedcb,	// (0x00068286) popup_image_details_window_t5_ParamLimits

0x047d,	// (0x00059938) popup_image_details_window_t_ParamLimits

0x76c9,	// (0x00060b84) cl_header_name_pane_ParamLimits

0x76c9,	// (0x00060b84) cl_header_name_pane

0x7a60,	// (0x00060f1b) cl_header_name_pane_t1_ParamLimits

0x7a60,	// (0x00060f1b) cl_header_name_pane_t1

0x7a81,	// (0x00060f3c) cl_header_name_pane_t2_ParamLimits

0x7a81,	// (0x00060f3c) cl_header_name_pane_t2

0x7ac3,	// (0x00060f7e) cl_header_name_pane_t3_ParamLimits

0x7ac3,	// (0x00060f7e) cl_header_name_pane_t3

0x0002,

0xfa37,	// (0x00068ef2) cl_header_name_pane_t_ParamLimits

0xfa37,	// (0x00068ef2) cl_header_name_pane_t

0x2f59,	// (0x0005c414) navi_pane_mv_g2_ParamLimits

0xb647,	// (0x00064b02) field_vitu2_entry_pane_g1_ParamLimits

0xb653,	// (0x00064b0e) field_vitu2_entry_pane_g2_ParamLimits

0xb65f,	// (0x00064b1a) field_vitu2_entry_pane_g3_ParamLimits

0xb65f,	// (0x00064b1a) field_vitu2_entry_pane_g3

0xf833,	// (0x00068cee) field_vitu2_entry_pane_g_ParamLimits

0x6a1a,	// (0x0005fed5) cell_vitu2_itu_pane_g1_ParamLimits

0x6a2a,	// (0x0005fee5) cell_vitu2_itu_pane_g2_ParamLimits

0x6a2a,	// (0x0005fee5) cell_vitu2_itu_pane_g2

0x0001,

0xf83f,	// (0x00068cfa) cell_vitu2_itu_pane_g_ParamLimits

0xf83f,	// (0x00068cfa) cell_vitu2_itu_pane_g

0xd90d,	// (0x00066dc8) bg_vkb2_func_pane_cp05_ParamLimits

0xd90d,	// (0x00066dc8) bg_vkb2_func_pane_cp05

0xd90d,	// (0x00066dc8) bg_vkb2_func_pane_cp03

0xd90d,	// (0x00066dc8) bg_vkb2_func_pane_cp04

0xd90d,	// (0x00066dc8) bg_vkb2_func_pane_cp10_ParamLimits

0xd90d,	// (0x00066dc8) bg_vkb2_func_pane_cp10

0x766b,	// (0x00060b26) bg_vkb2_func_pane_cp08

0x7651,	// (0x00060b0c) bg_vkb2_func_pane_cp06

0x765f,	// (0x00060b1a) bg_vkb2_func_pane_cp07

0xbce5,	// (0x000651a0) bg_vkb2_func_pane_cp11_ParamLimits

0xbce5,	// (0x000651a0) bg_vkb2_func_pane_cp11

0xbcfa,	// (0x000651b5) bg_vkb2_func_pane_cp12_ParamLimits

0xbcfa,	// (0x000651b5) bg_vkb2_func_pane_cp12

0x0d7f,	// (0x0005a23a) bg_vkb2_func_pane_cp09

0xb6b9,	// (0x00064b74) bg_vkb2_func_pane_g1

0xa5d5,	// (0x00063a90) bg_vkb2_func_pane_g2

0xb6c1,	// (0x00064b7c) bg_vkb2_func_pane_g3

0xb6c9,	// (0x00064b84) bg_vkb2_func_pane_g4

0xb90a,	// (0x00064dc5) bg_vkb2_func_pane_g5

0xb6e1,	// (0x00064b9c) bg_vkb2_func_pane_g6

0xb6e9,	// (0x00064ba4) bg_vkb2_func_pane_g7

0xb6d9,	// (0x00064b94) bg_vkb2_func_pane_g8

0xa5b5,	// (0x00063a70) bg_vkb2_func_pane_g9

0x0008,

0xfa3e,	// (0x00068ef9) bg_vkb2_func_pane_g

0x7986,	// (0x00060e41) blid2_tripm_pane_g6_ParamLimits

0x7986,	// (0x00060e41) blid2_tripm_pane_g6

0xb4cf,	// (0x0006498a) mp4_progress_pane_g1

0x79ff,	// (0x00060eba) blid2_tripm_values_pane_ParamLimits

0x79ff,	// (0x00060eba) blid2_tripm_values_pane

0x7af4,	// (0x00060faf) blid2_tripm_values_pane_t1

0x7b02,	// (0x00060fbd) blid2_tripm_values_pane_t2

0x7b10,	// (0x00060fcb) blid2_tripm_values_pane_t3

0x7b1e,	// (0x00060fd9) blid2_tripm_values_pane_t4

0x7b2c,	// (0x00060fe7) blid2_tripm_values_pane_t5

0x7b3a,	// (0x00060ff5) blid2_tripm_values_pane_t6

0x7b48,	// (0x00061003) blid2_tripm_values_pane_t7

0x7b56,	// (0x00061011) blid2_tripm_values_pane_t8

0x7b64,	// (0x0006101f) blid2_tripm_values_pane_t9

0x0008,

0xfa51,	// (0x00068f0c) blid2_tripm_values_pane_t

0x1dc2,	// (0x0005b27d) call_video_pane_t1_ParamLimits

0x1dd4,	// (0x0005b28f) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0006875c) call_video_pane_t_ParamLimits

0x34d1,	// (0x0005c98c) msg_header_pane_g1_ParamLimits

0xae57,	// (0x00064312) msg_header_pane_g2_ParamLimits

0xae57,	// (0x00064312) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00068976) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00068976) msg_header_pane_g

0xa0e3,	// (0x0006359e) main_clock2_pane_ParamLimits

0x564d,	// (0x0005eb08) grid_clock2_toolbar_pane_ParamLimits

0x564d,	// (0x0005eb08) grid_clock2_toolbar_pane

0x564d,	// (0x0005eb08) listscroll_clock2_pane_ParamLimits

0x564d,	// (0x0005eb08) listscroll_clock2_pane

0x5731,	// (0x0005ebec) main_clock2_pane_t3_ParamLimits

0x5731,	// (0x0005ebec) main_clock2_pane_t3

0x574c,	// (0x0005ec07) main_clock2_pane_t4_ParamLimits

0x574c,	// (0x0005ec07) main_clock2_pane_t4

0xbde7,	// (0x000652a2) cell_clock2_toolbar_pane

0xbdef,	// (0x000652aa) cell_clock2_toolbar_pane_cp01

0xbdef,	// (0x000652aa) cell_clock2_toolbar_pane_cp02

0xbdf7,	// (0x000652b2) cell_clock2_toolbar_pane_cp03

0xbdff,	// (0x000652ba) list_clock2_pane

0xab80,	// (0x0006403b) scroll_pane_cp10

0xbe07,	// (0x000652c2) list_single_clock2_pane_ParamLimits

0xbe07,	// (0x000652c2) list_single_clock2_pane

0xacba,	// (0x00064175) list_highlight_pane_cp08

0xbe14,	// (0x000652cf) list_single_clock2_pane_t1

0xbe22,	// (0x000652dd) list_single_clock2_pane_t2

0x0001,

0xfa64,	// (0x00068f1f) list_single_clock2_pane_t

0x0d7f,	// (0x0005a23a) bg_button_pane_cp10

0xbe30,	// (0x000652eb) cell_clock2_toolbar_pane_g1

0x355a,	// (0x0005ca15) aid_main_viewer_pane_g1_ParamLimits

0x355a,	// (0x0005ca15) aid_main_viewer_pane_g1

0x3568,	// (0x0005ca23) aid_main_viewer_pane_g2_ParamLimits

0x3568,	// (0x0005ca23) aid_main_viewer_pane_g2

0x3576,	// (0x0005ca31) aid_main_viewer_pane_g3_ParamLimits

0x3576,	// (0x0005ca31) aid_main_viewer_pane_g3

0x3585,	// (0x0005ca40) aid_main_viewer_pane_g4_ParamLimits

0x3585,	// (0x0005ca40) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00068987) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00068987) aid_main_viewer_pane_g

0x3edd,	// (0x0005d398) main_calc_pane_ParamLimits

0x3ef1,	// (0x0005d3ac) main_dialer2_pane_ParamLimits

0x0d7f,	// (0x0005a23a) main_cam6_pane

0x0d7f,	// (0x0005a23a) main_vid6_pane

0x5659,	// (0x0005eb14) listscroll_gen_pane_cp06_ParamLimits

0x5659,	// (0x0005eb14) listscroll_gen_pane_cp06

0x5767,	// (0x0005ec22) main_clock2_pane_t5_ParamLimits

0x5767,	// (0x0005ec22) main_clock2_pane_t5

0x57c4,	// (0x0005ec7f) aid_call2_pane_cp10_ParamLimits

0x57d6,	// (0x0005ec91) aid_call_pane_cp10_ParamLimits

0xabef,	// (0x000640aa) popup_clock_analogue_window_cp10_g1_ParamLimits

0xabef,	// (0x000640aa) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57e8,	// (0x0005eca3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57e8,	// (0x0005eca3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xabef,	// (0x000640aa) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6ec,	// (0x00068ba7) popup_clock_analogue_window_cp10_g_ParamLimits

0x57fe,	// (0x0005ecb9) popup_clock_analogue_window_cp10_t1_ParamLimits

0x620d,	// (0x0005f6c8) cell_dialer2_keypad_pane_g2_ParamLimits

0x620d,	// (0x0005f6c8) cell_dialer2_keypad_pane_g2

0x0001,

0xf7d2,	// (0x00068c8d) cell_dialer2_keypad_pane_g_ParamLimits

0xf7d2,	// (0x00068c8d) cell_dialer2_keypad_pane_g

0x6229,	// (0x0005f6e4) cell_dialer2_keypad_pane_t1

0x6dc9,	// (0x00060284) main_cset_text2_pane_ParamLimits

0x6dc9,	// (0x00060284) main_cset_text2_pane

0xbb57,	// (0x00065012) area_vitu2_query_pane_g1_ParamLimits

0x75f0,	// (0x00060aab) area_vitu2_query_pane_g2_ParamLimits

0xf981,	// (0x00068e3c) area_vitu2_query_pane_g_ParamLimits

0xbbdb,	// (0x00065096) area_vitu2_query_pane_t7_ParamLimits

0xbbdb,	// (0x00065096) area_vitu2_query_pane_t7

0x7651,	// (0x00060b0c) bg_button_pane_cp018_ParamLimits

0x765f,	// (0x00060b1a) bg_button_pane_cp021_ParamLimits

0x766b,	// (0x00060b26) bg_button_pane_cp022_ParamLimits

0x766b,	// (0x00060b26) bg_vkb2_func_pane_cp08_ParamLimits

0x7651,	// (0x00060b0c) bg_vkb2_func_pane_cp06_ParamLimits

0x765f,	// (0x00060b1a) bg_vkb2_func_pane_cp07_ParamLimits

0x767c,	// (0x00060b37) input_focus_pane_cp09_ParamLimits

0xda3a,	// (0x00066ef5) cam6_autofocus_pane_ParamLimits

0xda3a,	// (0x00066ef5) cam6_autofocus_pane

0x7b72,	// (0x0006102d) cam6_image_uncrop_pane_ParamLimits

0x7b72,	// (0x0006102d) cam6_image_uncrop_pane

0x7b81,	// (0x0006103c) cam6_indi_pane_ParamLimits

0x7b81,	// (0x0006103c) cam6_indi_pane

0x7b97,	// (0x00061052) cam6_mode_pane_ParamLimits

0x7b97,	// (0x00061052) cam6_mode_pane

0x7ba9,	// (0x00061064) cam6_timer_pane_ParamLimits

0x7ba9,	// (0x00061064) cam6_timer_pane

0x7bb5,	// (0x00061070) cam6_zoom_pane_ParamLimits

0x7bb5,	// (0x00061070) cam6_zoom_pane

0x7bc3,	// (0x0006107e) cam6_mode_pane_g1_ParamLimits

0x7bc3,	// (0x0006107e) cam6_mode_pane_g1

0x7bd3,	// (0x0006108e) cam6_mode_pane_g2_ParamLimits

0x7bd3,	// (0x0006108e) cam6_mode_pane_g2

0x7be3,	// (0x0006109e) cam6_mode_pane_g3_ParamLimits

0x7be3,	// (0x0006109e) cam6_mode_pane_g3

0x7bf3,	// (0x000610ae) cam6_mode_pane_g4_ParamLimits

0x7bf3,	// (0x000610ae) cam6_mode_pane_g4

0x0003,

0xfa69,	// (0x00068f24) cam6_mode_pane_g_ParamLimits

0xfa69,	// (0x00068f24) cam6_mode_pane_g

0xbe38,	// (0x000652f3) bg_tb_trans_pane_cp08_ParamLimits

0xbe38,	// (0x000652f3) bg_tb_trans_pane_cp08

0xbe46,	// (0x00065301) cam6_battery_pane_ParamLimits

0xbe46,	// (0x00065301) cam6_battery_pane

0xbe5c,	// (0x00065317) cam6_indi_pane_g1_ParamLimits

0xbe5c,	// (0x00065317) cam6_indi_pane_g1

0xbe6e,	// (0x00065329) cam6_indi_pane_g2_ParamLimits

0xbe6e,	// (0x00065329) cam6_indi_pane_g2

0xbe80,	// (0x0006533b) cam6_indi_pane_g3_ParamLimits

0xbe80,	// (0x0006533b) cam6_indi_pane_g3

0x0002,

0xfa72,	// (0x00068f2d) cam6_indi_pane_g_ParamLimits

0xfa72,	// (0x00068f2d) cam6_indi_pane_g

0xbe92,	// (0x0006534d) cam6_indi_pane_t1_ParamLimits

0xbe92,	// (0x0006534d) cam6_indi_pane_t1

0x67f4,	// (0x0005fcaf) cam6_autofocus_pane_g1

0x67ec,	// (0x0005fca7) cam6_autofocus_pane_g2

0x6804,	// (0x0005fcbf) cam6_autofocus_pane_g3

0x67fc,	// (0x0005fcb7) cam6_autofocus_pane_g4

0x0003,

0xfa79,	// (0x00068f34) cam6_autofocus_pane_g

0xbeb8,	// (0x00065373) cam6_timer_pane_g1

0xbec0,	// (0x0006537b) cam6_timer_pane_t1

0xbece,	// (0x00065389) cam6_zoom_cont_pane

0xbed6,	// (0x00065391) cam6_zoom_pane_g1

0xbede,	// (0x00065399) cam6_zoom_pane_g2

0x7c03,	// (0x000610be) cam6_zoom_pane_g3

0x0002,

0xfa82,	// (0x00068f3d) cam6_zoom_pane_g

0xebe5,	// (0x000680a0) cam6_battery_pane_g1

0xebe5,	// (0x000680a0) cam6_battery_pane_g2

0x0001,

0x043a,	// (0x000598f5) cam6_battery_pane_g

0xbee6,	// (0x000653a1) cam6_zoom_cont_pane_g1

0xbeef,	// (0x000653aa) cam6_zoom_cont_pane_g2

0xbef8,	// (0x000653b3) cam6_zoom_cont_pane_g3

0x0002,

0xfa89,	// (0x00068f44) cam6_zoom_cont_pane_g

0x7c20,	// (0x000610db) cam6_mode_pane_cp_ParamLimits

0x7c20,	// (0x000610db) cam6_mode_pane_cp

0x7c32,	// (0x000610ed) cam6_zoom_pane_cp_ParamLimits

0x7c32,	// (0x000610ed) cam6_zoom_pane_cp

0x7c40,	// (0x000610fb) vid6_image_uncrop_cif_pane_ParamLimits

0x7c40,	// (0x000610fb) vid6_image_uncrop_cif_pane

0x7c50,	// (0x0006110b) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c50,	// (0x0006110b) vid6_image_uncrop_nhd_pane

0x7c5f,	// (0x0006111a) vid6_image_uncrop_vga_pane_ParamLimits

0x7c5f,	// (0x0006111a) vid6_image_uncrop_vga_pane

0x7c6e,	// (0x00061129) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c6e,	// (0x00061129) vid6_image_uncrop_wvga_pane

0x7c7d,	// (0x00061138) vid6_indi_pane_ParamLimits

0x7c7d,	// (0x00061138) vid6_indi_pane

0xbe38,	// (0x000652f3) bg_tb_trans_pane_cp09_ParamLimits

0xbe38,	// (0x000652f3) bg_tb_trans_pane_cp09

0xbf10,	// (0x000653cb) cam6_battery_pane_cp_ParamLimits

0xbf10,	// (0x000653cb) cam6_battery_pane_cp

0xbf1c,	// (0x000653d7) vid6_indi_pane_g1_ParamLimits

0xbf1c,	// (0x000653d7) vid6_indi_pane_g1

0xbf2e,	// (0x000653e9) vid6_indi_pane_g2_ParamLimits

0xbf2e,	// (0x000653e9) vid6_indi_pane_g2

0xbf40,	// (0x000653fb) vid6_indi_pane_g3_ParamLimits

0xbf40,	// (0x000653fb) vid6_indi_pane_g3

0xbf57,	// (0x00065412) vid6_indi_pane_g4_ParamLimits

0xbf57,	// (0x00065412) vid6_indi_pane_g4

0xbf6e,	// (0x00065429) vid6_indi_pane_g5_ParamLimits

0xbf6e,	// (0x00065429) vid6_indi_pane_g5

0x0004,

0xfa90,	// (0x00068f4b) vid6_indi_pane_g_ParamLimits

0xfa90,	// (0x00068f4b) vid6_indi_pane_g

0xbf88,	// (0x00065443) vid6_indi_pane_t1_ParamLimits

0xbf88,	// (0x00065443) vid6_indi_pane_t1

0xbf9e,	// (0x00065459) vid6_indi_pane_t2_ParamLimits

0xbf9e,	// (0x00065459) vid6_indi_pane_t2

0xbfc6,	// (0x00065481) vid6_indi_pane_t3_ParamLimits

0xbfc6,	// (0x00065481) vid6_indi_pane_t3

0xbfee,	// (0x000654a9) vid6_indi_pane_t4_ParamLimits

0xbfee,	// (0x000654a9) vid6_indi_pane_t4

0x0003,

0xfa9b,	// (0x00068f56) vid6_indi_pane_t_ParamLimits

0xfa9b,	// (0x00068f56) vid6_indi_pane_t

0xc012,	// (0x000654cd) wait_bar_pane_cp08

0x7c95,	// (0x00061150) main_cset_text2_pane_t1_ParamLimits

0x7c95,	// (0x00061150) main_cset_text2_pane_t1

0x7c0b,	// (0x000610c6) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c0b,	// (0x000610c6) listscroll_gen_pane_cp06_t1

0x0d7f,	// (0x0005a23a) main_cam6_set_pane

0xd88e,	// (0x00066d49) bg_tb_trans_pane_cp06_ParamLimits

0xd8a4,	// (0x00066d5f) cam4_indicators_pane_g1_ParamLimits

0xd8b1,	// (0x00066d6c) cam4_indicators_pane_g2_ParamLimits

0xf80f,	// (0x00068cca) cam4_indicators_pane_g_ParamLimits

0xd8d1,	// (0x00066d8c) cam4_indicators_pane_t1_ParamLimits

0xd8f5,	// (0x00066db0) bg_tb_trans_pane_cp07_ParamLimits

0x679b,	// (0x0005fc56) vid4_indicators_pane_g1_ParamLimits

0x67a8,	// (0x0005fc63) vid4_indicators_pane_g2_ParamLimits

0x67b5,	// (0x0005fc70) vid4_indicators_pane_g3_ParamLimits

0x67c2,	// (0x0005fc7d) vid4_indicators_pane_g4_ParamLimits

0xf821,	// (0x00068cdc) vid4_indicators_pane_g_ParamLimits

0x67da,	// (0x0005fc95) vid4_indicators_pane_t1_ParamLimits

0xd9a2,	// (0x00066e5d) vid4_progress_pane_g1_ParamLimits

0xd9ae,	// (0x00066e69) vid4_progress_pane_g2_ParamLimits

0xd9ba,	// (0x00066e75) vid4_progress_pane_g3_ParamLimits

0xd9c9,	// (0x00066e84) vid4_progress_pane_g4_ParamLimits

0xf9cc,	// (0x00068e87) vid4_progress_pane_g_ParamLimits

0xd9e7,	// (0x00066ea2) vid4_progress_pane_t1_ParamLimits

0xd9fd,	// (0x00066eb8) vid4_progress_pane_t2_ParamLimits

0xda13,	// (0x00066ece) vid4_progress_pane_t3_ParamLimits

0xf9d7,	// (0x00068e92) vid4_progress_pane_t_ParamLimits

0xda28,	// (0x00066ee3) wait_bar_pane_cp07_ParamLimits

0x7cb6,	// (0x00061171) main_cam6_set_pane_g2_ParamLimits

0x7cb6,	// (0x00061171) main_cam6_set_pane_g2

0x7cdc,	// (0x00061197) main_cset6_listscroll_pane_ParamLimits

0x7cdc,	// (0x00061197) main_cset6_listscroll_pane

0x7cfa,	// (0x000611b5) main_cset6_slider_pane_ParamLimits

0x7cfa,	// (0x000611b5) main_cset6_slider_pane

0x7d10,	// (0x000611cb) main_cset6_text2_pane_ParamLimits

0x7d10,	// (0x000611cb) main_cset6_text2_pane

0xc021,	// (0x000654dc) main_cset6_text_pane

0xc029,	// (0x000654e4) main_cset_list_pane_copy1_ParamLimits

0xc029,	// (0x000654e4) main_cset_list_pane_copy1

0xc039,	// (0x000654f4) scroll_pane_cp028_copy1

0x7d1e,	// (0x000611d9) cset_list_set_pane_copy1

0x7d32,	// (0x000611ed) aid_position_infowindow_above_copy1

0x7d3a,	// (0x000611f5) aid_position_infowindow_below_copy1

0x7d42,	// (0x000611fd) cset_list_set_pane_g1_copy1

0xc042,	// (0x000654fd) cset_list_set_pane_g3_copy1_ParamLimits

0xc042,	// (0x000654fd) cset_list_set_pane_g3_copy1

0x7d4a,	// (0x00061205) cset_list_set_pane_t1_copy1_ParamLimits

0x7d4a,	// (0x00061205) cset_list_set_pane_t1_copy1

0x9970,	// (0x00062e2b) list_highlight_pane_cp021_copy1_ParamLimits

0x9970,	// (0x00062e2b) list_highlight_pane_cp021_copy1

0xc051,	// (0x0006550c) cset6_slider_pane_ParamLimits

0xc051,	// (0x0006550c) cset6_slider_pane

0xc07d,	// (0x00065538) main_cset6_slider_pane_g1_ParamLimits

0xc07d,	// (0x00065538) main_cset6_slider_pane_g1

0x7d5f,	// (0x0006121a) main_cset6_slider_pane_g2_ParamLimits

0x7d5f,	// (0x0006121a) main_cset6_slider_pane_g2

0xc0a5,	// (0x00065560) main_cset6_slider_pane_g3_ParamLimits

0xc0a5,	// (0x00065560) main_cset6_slider_pane_g3

0x7d87,	// (0x00061242) main_cset6_slider_pane_g4_ParamLimits

0x7d87,	// (0x00061242) main_cset6_slider_pane_g4

0x7d93,	// (0x0006124e) main_cset6_slider_pane_g5_ParamLimits

0x7d93,	// (0x0006124e) main_cset6_slider_pane_g5

0xb7ec,	// (0x00064ca7) main_cset6_slider_pane_g7_ParamLimits

0xb7ec,	// (0x00064ca7) main_cset6_slider_pane_g7

0xb7f8,	// (0x00064cb3) main_cset6_slider_pane_g8_ParamLimits

0xb7f8,	// (0x00064cb3) main_cset6_slider_pane_g8

0x6e78,	// (0x00060333) main_cset6_slider_pane_g9_ParamLimits

0x6e78,	// (0x00060333) main_cset6_slider_pane_g9

0x6e84,	// (0x0006033f) main_cset6_slider_pane_g10_ParamLimits

0x6e84,	// (0x0006033f) main_cset6_slider_pane_g10

0x6e90,	// (0x0006034b) main_cset6_slider_pane_g11_ParamLimits

0x6e90,	// (0x0006034b) main_cset6_slider_pane_g11

0x6e9c,	// (0x00060357) main_cset6_slider_pane_g12_ParamLimits

0x6e9c,	// (0x00060357) main_cset6_slider_pane_g12

0x6ea8,	// (0x00060363) main_cset6_slider_pane_g13_ParamLimits

0x6ea8,	// (0x00060363) main_cset6_slider_pane_g13

0x6eb4,	// (0x0006036f) main_cset6_slider_pane_g14_ParamLimits

0x6eb4,	// (0x0006036f) main_cset6_slider_pane_g14

0x7da1,	// (0x0006125c) main_cset6_slider_pane_g15_ParamLimits

0x7da1,	// (0x0006125c) main_cset6_slider_pane_g15

0x6ed8,	// (0x00060393) main_cset6_slider_pane_g16_ParamLimits

0x6ed8,	// (0x00060393) main_cset6_slider_pane_g16

0x6ee6,	// (0x000603a1) main_cset6_slider_pane_g17_ParamLimits

0x6ee6,	// (0x000603a1) main_cset6_slider_pane_g17

0x0011,

0xfaa4,	// (0x00068f5f) main_cset6_slider_pane_g_ParamLimits

0xfaa4,	// (0x00068f5f) main_cset6_slider_pane_g

0xc0b1,	// (0x0006556c) main_cset6_slider_pane_t1_ParamLimits

0xc0b1,	// (0x0006556c) main_cset6_slider_pane_t1

0x7dd1,	// (0x0006128c) main_cset6_slider_pane_t2_ParamLimits

0x7dd1,	// (0x0006128c) main_cset6_slider_pane_t2

0x7dfc,	// (0x000612b7) main_cset6_slider_pane_t3_ParamLimits

0x7dfc,	// (0x000612b7) main_cset6_slider_pane_t3

0x7e27,	// (0x000612e2) main_cset6_slider_pane_t4_ParamLimits

0x7e27,	// (0x000612e2) main_cset6_slider_pane_t4

0x7e54,	// (0x0006130f) main_cset6_slider_pane_t5_ParamLimits

0x7e54,	// (0x0006130f) main_cset6_slider_pane_t5

0xc0f2,	// (0x000655ad) main_cset6_slider_pane_t7_ParamLimits

0xc0f2,	// (0x000655ad) main_cset6_slider_pane_t7

0x7e81,	// (0x0006133c) main_cset6_slider_pane_t8_ParamLimits

0x7e81,	// (0x0006133c) main_cset6_slider_pane_t8

0x7ea5,	// (0x00061360) main_cset6_slider_pane_t9_ParamLimits

0x7ea5,	// (0x00061360) main_cset6_slider_pane_t9

0x7ec9,	// (0x00061384) main_cset6_slider_pane_t10_ParamLimits

0x7ec9,	// (0x00061384) main_cset6_slider_pane_t10

0x7eed,	// (0x000613a8) main_cset6_slider_pane_t11_ParamLimits

0x7eed,	// (0x000613a8) main_cset6_slider_pane_t11

0xc128,	// (0x000655e3) main_cset6_slider_pane_t14_ParamLimits

0xc128,	// (0x000655e3) main_cset6_slider_pane_t14

0xc161,	// (0x0006561c) main_cset6_slider_pane_t15_ParamLimits

0xc161,	// (0x0006561c) main_cset6_slider_pane_t15

0x000b,

0xfac9,	// (0x00068f84) main_cset6_slider_pane_t_ParamLimits

0xfac9,	// (0x00068f84) main_cset6_slider_pane_t

0xc19a,	// (0x00065655) cset_slider_pane_g1_copy1

0xc1a3,	// (0x0006565e) cset_slider_pane_g2_copy1

0xc1ac,	// (0x00065667) cset_slider_pane_g3_copy1

0x0d7f,	// (0x0005a23a) bg_popup_sub_pane_cp011_copy1

0xb96b,	// (0x00064e26) main_cset_text_pane_g1_copy1

0xb973,	// (0x00064e2e) main_cset_text_pane_t1_copy1

0xb981,	// (0x00064e3c) main_cset_text_pane_t2_copy1

0xb98f,	// (0x00064e4a) main_cset_text_pane_t3_copy1

0xb99d,	// (0x00064e58) main_cset_text_pane_t4_copy1

0xb9ab,	// (0x00064e66) main_cset_text_pane_t5_copy1

0xb9b9,	// (0x00064e74) main_cset_text_pane_t6_copy1

0xb9c7,	// (0x00064e82) main_cset_text_pane_t7_copy1

0x7c95,	// (0x00061150) main_cset_text2_pane_t1_copy1

0x0d7f,	// (0x0005a23a) main_ncimui_pane

0x417f,	// (0x0005d63a) popup_query_ncimui_window_ParamLimits

0x417f,	// (0x0005d63a) popup_query_ncimui_window

0x4e62,	// (0x0005e31d) field_cale_ev2_pane_g4_ParamLimits

0x4e62,	// (0x0005e31d) field_cale_ev2_pane_g4

0x60b8,	// (0x0005f573) cell_video_dialer_keypad_pane_g2_ParamLimits

0x60b8,	// (0x0005f573) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7ad,	// (0x00068c68) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7ad,	// (0x00068c68) cell_video_dialer_keypad_pane_g

0x60d0,	// (0x0005f58b) cell_video_dialer_keypad_pane_t1

0x0d7f,	// (0x0005a23a) bg_popup_window_pane_cp012

0xaa6c,	// (0x00063f27) heading_pane_cp06

0xc2a4,	// (0x0006575f) ncim_query_content_pane

0x0d7f,	// (0x0005a23a) bg_popup_heading_pane_cp01

0xc2ac,	// (0x00065767) ncim_heading_pane_t1

0xc2ba,	// (0x00065775) ncim_indicator_popup_pane

0xc2cc,	// (0x00065787) ncim_query_button_pane

0xc2e2,	// (0x0006579d) ncim_query_content_pane_t1

0xc2f4,	// (0x000657af) ncim_query_content_pane_t2

0x0005,

0xfb08,	// (0x00068fc3) ncim_query_content_pane_t

0xc32e,	// (0x000657e9) ncim_query_list_pane

0xc340,	// (0x000657fb) ncim_query_popup_pane

0xc2ba,	// (0x00065775) ncim_indicator_popup_pane_ParamLimits

0x7fd9,	// (0x00061494) ncim_query_content_pane_g1_ParamLimits

0x7fd9,	// (0x00061494) ncim_query_content_pane_g1

0xc2e2,	// (0x0006579d) ncim_query_content_pane_t1_ParamLimits

0xc2f4,	// (0x000657af) ncim_query_content_pane_t2_ParamLimits

0x7fe5,	// (0x000614a0) ncim_query_content_pane_t3_ParamLimits

0x7fe5,	// (0x000614a0) ncim_query_content_pane_t3

0x800d,	// (0x000614c8) ncim_query_content_pane_t4_ParamLimits

0x800d,	// (0x000614c8) ncim_query_content_pane_t4

0x8035,	// (0x000614f0) ncim_query_content_pane_t5_ParamLimits

0x8035,	// (0x000614f0) ncim_query_content_pane_t5

0xc306,	// (0x000657c1) ncim_query_content_pane_t6_ParamLimits

0xc306,	// (0x000657c1) ncim_query_content_pane_t6

0xfb08,	// (0x00068fc3) ncim_query_content_pane_t_ParamLimits

0xc32e,	// (0x000657e9) ncim_query_list_pane_ParamLimits

0xc340,	// (0x000657fb) ncim_query_popup_pane_ParamLimits

0xc354,	// (0x0006580f) wait_bar_pane_cp04

0x0d7f,	// (0x0005a23a) input_focus_pane_cp011

0xc35c,	// (0x00065817) ncim_query_popup_pane_t1

0xc36a,	// (0x00065825) ncim_list_query_list_pane_ParamLimits

0xc36a,	// (0x00065825) ncim_list_query_list_pane

0x0d7f,	// (0x0005a23a) bg_button_pane_cp027

0xc37d,	// (0x00065838) ncim_query_button_pane_g1

0x0d7f,	// (0x0005a23a) list_highlight_pane_cp012

0xc387,	// (0x00065842) ncim_list_query_list_pane_g1

0xc38f,	// (0x0006584a) ncim_list_query_list_pane_t1

0xd8c1,	// (0x00066d7c) cam4_indicators_pane_g3_ParamLimits

0xd8c1,	// (0x00066d7c) cam4_indicators_pane_g3

0x67ce,	// (0x0005fc89) vid4_indicators_pane_g5_ParamLimits

0x67ce,	// (0x0005fc89) vid4_indicators_pane_g5

0xd9d8,	// (0x00066e93) vid4_progress_pane_g5_ParamLimits

0xd9d8,	// (0x00066e93) vid4_progress_pane_g5

0x7f21,	// (0x000613dc) main_ncimui_pane_g1

0x7f67,	// (0x00061422) ncimui_group_query_pane_ParamLimits

0x7f67,	// (0x00061422) ncimui_group_query_pane

0x7f9b,	// (0x00061456) ncimui_list_pane_ParamLimits

0x7f9b,	// (0x00061456) ncimui_list_pane

0x7fb5,	// (0x00061470) ncimui_text_pane_ParamLimits

0x7fb5,	// (0x00061470) ncimui_text_pane

0x805d,	// (0x00061518) ncimui_text_pane_t1_ParamLimits

0x805d,	// (0x00061518) ncimui_text_pane_t1

0xc39d,	// (0x00065858) ncimui_list_single_graphic_pane_ParamLimits

0xc39d,	// (0x00065858) ncimui_list_single_graphic_pane

0x8083,	// (0x0006153e) ncimui_query_pane_ParamLimits

0x8083,	// (0x0006153e) ncimui_query_pane

0x0d7f,	// (0x0005a23a) list_highlight_pane_cp013

0xc3ad,	// (0x00065868) ncim_list_query_list_pane_t1_copy1

0xc387,	// (0x00065842) ncim_list_single_graphic_pane_g1

0xc3bb,	// (0x00065876) ncim_query_button_pane_cp01

0xc3c3,	// (0x0006587e) ncim_query_entry_pane_ParamLimits

0xc3c3,	// (0x0006587e) ncim_query_entry_pane

0xc3d3,	// (0x0006588e) ncimui_query_pane_g1

0xc3db,	// (0x00065896) ncimui_query_pane_t1_ParamLimits

0xc3db,	// (0x00065896) ncimui_query_pane_t1

0x0d7f,	// (0x0005a23a) input_focus_pane_cp012

0xc35c,	// (0x00065817) ncim_query_entry_pane_t1

0xa0e3,	// (0x0006359e) main_im_pane_ParamLimits

0x9970,	// (0x00062e2b) main_mobtv_pane_ParamLimits

0x9970,	// (0x00062e2b) main_mobtv_pane

0x7db9,	// (0x00061274) main_cset6_slider_pane_g18_ParamLimits

0x7db9,	// (0x00061274) main_cset6_slider_pane_g18

0x7dc5,	// (0x00061280) main_cset6_slider_pane_g19_ParamLimits

0x7dc5,	// (0x00061280) main_cset6_slider_pane_g19

0xc3f1,	// (0x000658ac) bg_main_mobtv_pane_ParamLimits

0xc3f1,	// (0x000658ac) bg_main_mobtv_pane

0x8093,	// (0x0006154e) main_mobtv_info_pane

0x809e,	// (0x00061559) main_mobtv_loading_pane_ParamLimits

0x809e,	// (0x00061559) main_mobtv_loading_pane

0xc3ff,	// (0x000658ba) main_mobtv_pg_channel_list_pane

0xc409,	// (0x000658c4) main_mobtv_pg_hdr_pane

0x80ab,	// (0x00061566) main_mobtv_programe_curr_pane_ParamLimits

0x80ab,	// (0x00061566) main_mobtv_programe_curr_pane

0x80b8,	// (0x00061573) main_mobtv_programe_next_pane_ParamLimits

0x80b8,	// (0x00061573) main_mobtv_programe_next_pane

0xc412,	// (0x000658cd) popup_mobtv_noti_window

0xebe5,	// (0x000680a0) main_tv_pg_hdr_pane_g1

0xc41c,	// (0x000658d7) main_tv_pg_hdr_pane_g2

0xc424,	// (0x000658df) main_tv_pg_hdr_pane_g3

0xc42c,	// (0x000658e7) main_tv_pg_hdr_pane_g4

0xc434,	// (0x000658ef) main_tv_pg_hdr_pane_g5

0xc43e,	// (0x000658f9) main_tv_pg_hdr_pane_g6

0xc448,	// (0x00065903) main_tv_pg_hdr_pane_g7

0xc452,	// (0x0006590d) main_tv_pg_hdr_pane_g8

0xc45c,	// (0x00065917) main_tv_pg_hdr_pane_g9

0xc466,	// (0x00065921) main_tv_pg_hdr_pane_g10

0xc470,	// (0x0006592b) main_tv_pg_hdr_pane_g11

0x000a,

0xfb15,	// (0x00068fd0) main_tv_pg_hdr_pane_g

0xc47a,	// (0x00065935) main_tv_pg_hdr_pane_t1

0xc488,	// (0x00065943) main_tv_pg_hdr_pane_t2

0xc496,	// (0x00065951) main_tv_pg_hdr_pane_t3

0xc4a6,	// (0x00065961) main_tv_pg_hdr_pane_t4

0xc4b6,	// (0x00065971) main_tv_pg_hdr_pane_t5

0x0004,

0xfb2c,	// (0x00068fe7) main_tv_pg_hdr_pane_t

0xc4c6,	// (0x00065981) single_mobtv_pg_channel_pane_ParamLimits

0xc4c6,	// (0x00065981) single_mobtv_pg_channel_pane

0xc4d8,	// (0x00065993) single_mobtv_pg_channel_table_pane

0xc4e1,	// (0x0006599c) single_mobtv_pg_channel_thumb_pane

0xc4ea,	// (0x000659a5) single_tv_pg_channel_pane_g1

0xc4f3,	// (0x000659ae) single_tv_pg_channel_pane_g2

0x0001,

0xfb37,	// (0x00068ff2) single_tv_pg_channel_pane_g

0xee15,	// (0x000682d0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xee15,	// (0x000682d0) bg_single_mobtv_pg_channel_thumb_pane

0xc4fc,	// (0x000659b7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc4fc,	// (0x000659b7) single_mobtv_pg_channel_thumb_pane_g1

0xc50a,	// (0x000659c5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc50a,	// (0x000659c5) single_mobtv_pg_channel_thumb_pane_g2

0xc516,	// (0x000659d1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc516,	// (0x000659d1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb3c,	// (0x00068ff7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb3c,	// (0x00068ff7) single_mobtv_pg_channel_thumb_pane_g

0xc522,	// (0x000659dd) single_mobtv_pg_channel_thumb_pane_t1

0xc530,	// (0x000659eb) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb43,	// (0x00068ffe) single_mobtv_pg_channel_thumb_pane_t

0xebe5,	// (0x000680a0) bg_single_mobtv_pg_channel_table_pane_g1

0xebe5,	// (0x000680a0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x043a,	// (0x000598f5) bg_single_mobtv_pg_channel_table_pane_g

0xc53e,	// (0x000659f9) single_mobtv_pg_channel_table_pane_t1

0xc54c,	// (0x00065a07) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb48,	// (0x00069003) single_mobtv_pg_channel_table_pane_t

0x80cd,	// (0x00061588) main_mobtv_info_pane_g1_ParamLimits

0x80cd,	// (0x00061588) main_mobtv_info_pane_g1

0x80eb,	// (0x000615a6) main_mobtv_info_pane_t1_ParamLimits

0x80eb,	// (0x000615a6) main_mobtv_info_pane_t1

0x8163,	// (0x0006161e) main_mobtv_info_pane_t2_ParamLimits

0x8163,	// (0x0006161e) main_mobtv_info_pane_t2

0x0002,

0xfb52,	// (0x0006900d) main_mobtv_info_pane_t_ParamLimits

0xfb52,	// (0x0006900d) main_mobtv_info_pane_t

0x81f4,	// (0x000616af) wait_bar_pane_cp05

0x8206,	// (0x000616c1) main_mobtv_loading_pane_g1_ParamLimits

0x8206,	// (0x000616c1) main_mobtv_loading_pane_g1

0x8217,	// (0x000616d2) main_mobtv_loading_pane_g2_ParamLimits

0x8217,	// (0x000616d2) main_mobtv_loading_pane_g2

0x8223,	// (0x000616de) main_mobtv_loading_pane_g3_ParamLimits

0x8223,	// (0x000616de) main_mobtv_loading_pane_g3

0x0002,

0xfb59,	// (0x00069014) main_mobtv_loading_pane_g_ParamLimits

0xfb59,	// (0x00069014) main_mobtv_loading_pane_g

0xc55a,	// (0x00065a15) main_mobtv_loading_pane_t1_ParamLimits

0xc55a,	// (0x00065a15) main_mobtv_loading_pane_t1

0xc572,	// (0x00065a2d) main_mobtv_loading_pane_t2_ParamLimits

0xc572,	// (0x00065a2d) main_mobtv_loading_pane_t2

0x0001,

0xfb60,	// (0x0006901b) main_mobtv_loading_pane_t_ParamLimits

0xfb60,	// (0x0006901b) main_mobtv_loading_pane_t

0x8236,	// (0x000616f1) wait_bar_pane_cp06_ParamLimits

0x8236,	// (0x000616f1) wait_bar_pane_cp06

0xc596,	// (0x00065a51) main_mobtv_programe_curr_pane_t1

0xc5a4,	// (0x00065a5f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb65,	// (0x00069020) main_mobtv_programe_curr_pane_t

0xc5b2,	// (0x00065a6d) main_mobtv_programe_next_pane_t1

0xc5c0,	// (0x00065a7b) main_mobtv_programe_next_pane_t2

0xc5ce,	// (0x00065a89) main_mobtv_programe_next_pane_t3

0x0002,

0xfb6a,	// (0x00069025) main_mobtv_programe_next_pane_t

0x0d7f,	// (0x0005a23a) bg_popup_mobtv_noti_window_pane

0xc5dc,	// (0x00065a97) popup_mobtv_noti_window_g1

0xc5e4,	// (0x00065a9f) popup_mobtv_noti_window_t1

0xc5f2,	// (0x00065aad) popup_mobtv_noti_window_t2

0x0001,

0xfb71,	// (0x0006902c) popup_mobtv_noti_window_t

0xebe5,	// (0x000680a0) bg_popup_mobtv_noti_window_pane_g1

0x0d7f,	// (0x0005a23a) sc_clock_pane

0x0d7f,	// (0x0005a23a) main_fs_bigclock_pane

0x79e9,	// (0x00060ea4) blid2_tripm_pane_t4_ParamLimits

0x79e9,	// (0x00060ea4) blid2_tripm_pane_t4

0x8245,	// (0x00061700) sc_clock_pane_g1_ParamLimits

0x8245,	// (0x00061700) sc_clock_pane_g1

0x8257,	// (0x00061712) sc_clock_pane_t1_ParamLimits

0x8257,	// (0x00061712) sc_clock_pane_t1

0x827b,	// (0x00061736) sc_clock_pane_t2_ParamLimits

0x827b,	// (0x00061736) sc_clock_pane_t2

0x8293,	// (0x0006174e) sc_clock_pane_t3_ParamLimits

0x8293,	// (0x0006174e) sc_clock_pane_t3

0x0004,

0xfb76,	// (0x00069031) sc_clock_pane_t_ParamLimits

0xfb76,	// (0x00069031) sc_clock_pane_t

0x907e,	// (0x00062539) main_fs_bigclock_indicator_pane_ParamLimits

0x907e,	// (0x00062539) main_fs_bigclock_indicator_pane

0xede5,	// (0x000682a0) main_fs_bigclock_pane_g1_ParamLimits

0xede5,	// (0x000682a0) main_fs_bigclock_pane_g1

0x908a,	// (0x00062545) main_fs_bigclock_pane_t1_ParamLimits

0x908a,	// (0x00062545) main_fs_bigclock_pane_t1

0x909c,	// (0x00062557) main_fs_bigclock_pane_t2_ParamLimits

0x909c,	// (0x00062557) main_fs_bigclock_pane_t2

0x90b0,	// (0x0006256b) main_fs_bigclock_pane_t3_ParamLimits

0x90b0,	// (0x0006256b) main_fs_bigclock_pane_t3

0x0002,

0xfd75,	// (0x00069230) main_fs_bigclock_pane_t_ParamLimits

0xfd75,	// (0x00069230) main_fs_bigclock_pane_t

0xd22d,	// (0x000666e8) main_fs_bigclock_indicator_pane_g1

0xc2d4,	// (0x0006578f) ncim_query_content_pane_g2_ParamLimits

0xc2d4,	// (0x0006578f) ncim_query_content_pane_g2

0x0001,

0xfb03,	// (0x00068fbe) ncim_query_content_pane_g_ParamLimits

0xfb03,	// (0x00068fbe) ncim_query_content_pane_g

0x82a8,	// (0x00061763) sc_clock_pane_t4_ParamLimits

0x82a8,	// (0x00061763) sc_clock_pane_t4

0x9970,	// (0x00062e2b) main_radioblah_pane

0xb5ca,	// (0x00064a85) cell_call4_button_pane_t1_copy1_ParamLimits

0xb5ca,	// (0x00064a85) cell_call4_button_pane_t1_copy1

0x7f29,	// (0x000613e4) main_ncimui_pane_t1_ParamLimits

0x7f29,	// (0x000613e4) main_ncimui_pane_t1

0x7f3b,	// (0x000613f6) main_ncimui_pane_t2_ParamLimits

0x7f3b,	// (0x000613f6) main_ncimui_pane_t2

0x0002,

0xfafc,	// (0x00068fb7) main_ncimui_pane_t_ParamLimits

0xfafc,	// (0x00068fb7) main_ncimui_pane_t

0xc72a,	// (0x00065be5) main_radioblah_anim_pane_ParamLimits

0xc72a,	// (0x00065be5) main_radioblah_anim_pane

0xc73b,	// (0x00065bf6) main_radioblah_info_pane_ParamLimits

0xc73b,	// (0x00065bf6) main_radioblah_info_pane

0xc74f,	// (0x00065c0a) main_radioblah_pane_t1_ParamLimits

0xc74f,	// (0x00065c0a) main_radioblah_pane_t1

0xc76b,	// (0x00065c26) main_radioblah_pane_t2_ParamLimits

0xc76b,	// (0x00065c26) main_radioblah_pane_t2

0x0003,

0xfb97,	// (0x00069052) main_radioblah_pane_t_ParamLimits

0xfb97,	// (0x00069052) main_radioblah_pane_t

0x8356,	// (0x00061811) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8356,	// (0x00061811) main_radioblah_rocker_ctrl_pane

0xc7b3,	// (0x00065c6e) main_radioblah_info_pane_t1_ParamLimits

0xc7b3,	// (0x00065c6e) main_radioblah_info_pane_t1

0x83ae,	// (0x00061869) main_radioblah_info_pane_t2_ParamLimits

0x83ae,	// (0x00061869) main_radioblah_info_pane_t2

0x0003,

0xfba0,	// (0x0006905b) main_radioblah_info_pane_t_ParamLimits

0xfba0,	// (0x0006905b) main_radioblah_info_pane_t

0xebe5,	// (0x000680a0) main_radioblah_rocker_ctrl_pane_g1

0x845e,	// (0x00061919) main_radioblah_rocker_ctrl_pane_g2

0x8466,	// (0x00061921) main_radioblah_rocker_ctrl_pane_g3

0x846e,	// (0x00061929) main_radioblah_rocker_ctrl_pane_g4

0x8476,	// (0x00061931) main_radioblah_rocker_ctrl_pane_g5

0x847e,	// (0x00061939) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfba9,	// (0x00069064) main_radioblah_rocker_ctrl_pane_g

0x7c95,	// (0x00061150) main_cset_text2_pane_t1_copy1_ParamLimits

0xd884,	// (0x00066d3f) cam4_image_uncrop_qvga_pane

0xd8eb,	// (0x00066da6) vid4_image_uncrop_qcif_pane

0xda3a,	// (0x00066ef5) cam6_image_uncrop_qvga_pane_ParamLimits

0xda3a,	// (0x00066ef5) cam6_image_uncrop_qvga_pane

0xbf00,	// (0x000653bb) vid6_image_uncrop_qcif_pane_ParamLimits

0xbf00,	// (0x000653bb) vid6_image_uncrop_qcif_pane

0x0d7f,	// (0x0005a23a) bg_popup_preview_window_pane_cp03

0xc286,	// (0x00065741) list_cset_text2_pane

0xc28e,	// (0x00065749) main_cset6_text2_pane_g1

0xc296,	// (0x00065751) main_cset6_text2_pane_t1

0xc7ed,	// (0x00065ca8) list_cset_text2_pane_t1_ParamLimits

0xc7ed,	// (0x00065ca8) list_cset_text2_pane_t1

0x9970,	// (0x00062e2b) main_radioblah_pane_ParamLimits

0x81e0,	// (0x0006169b) main_mobtv_info_pane_t3_ParamLimits

0x81e0,	// (0x0006169b) main_mobtv_info_pane_t3

0x8344,	// (0x000617ff) main_radioblah_pane_g1

0x837e,	// (0x00061839) main_radioblah_info_pane_g1

0x8403,	// (0x000618be) main_radioblah_info_pane_t3_ParamLimits

0x8403,	// (0x000618be) main_radioblah_info_pane_t3

0x28e8,	// (0x0005bda3) highlight_cell_cale_month_pane_ParamLimits

0x28e8,	// (0x0005bda3) highlight_cell_cale_month_pane

0x0d7f,	// (0x0005a23a) main_phob_fisheye_pane

0xeef7,	// (0x000683b2) scroll_pane_cp0031_ParamLimits

0xeef7,	// (0x000683b2) scroll_pane_cp0031

0xc012,	// (0x000654cd) wait_bar_pane_cp08_ParamLimits

0x7d1e,	// (0x000611d9) cset_list_set_pane_copy1_ParamLimits

0xc807,	// (0x00065cc2) highlight_cell_cale_month_pane_g1

0x8486,	// (0x00061941) highlight_cell_cale_month_pane_t1

0xbc47,	// (0x00065102) list_gen_pane_cp01

0xb7d7,	// (0x00064c92) scroll_pane_01

0x8494,	// (0x0006194f) list_single_double_fisheye_pane

0x849d,	// (0x00061958) list_double_fisheye_pane_g1_ParamLimits

0x849d,	// (0x00061958) list_double_fisheye_pane_g1

0x84a9,	// (0x00061964) list_double_fisheye_pane_g2_ParamLimits

0x84a9,	// (0x00061964) list_double_fisheye_pane_g2

0x84bd,	// (0x00061978) list_double_fisheye_pane_g3_ParamLimits

0x84bd,	// (0x00061978) list_double_fisheye_pane_g3

0x0004,

0xfbb6,	// (0x00069071) list_double_fisheye_pane_g_ParamLimits

0xfbb6,	// (0x00069071) list_double_fisheye_pane_g

0x84e6,	// (0x000619a1) list_double_fisheye_pane_t1_ParamLimits

0x84e6,	// (0x000619a1) list_double_fisheye_pane_t1

0x8501,	// (0x000619bc) list_double_fisheye_pane_t2_ParamLimits

0x8501,	// (0x000619bc) list_double_fisheye_pane_t2

0x0001,

0xfbc1,	// (0x0006907c) list_double_fisheye_pane_t_ParamLimits

0xfbc1,	// (0x0006907c) list_double_fisheye_pane_t

0x0d7f,	// (0x0005a23a) main_call5_pane

0x82d3,	// (0x0006178e) sc_swipe_pane_ParamLimits

0x82d3,	// (0x0006178e) sc_swipe_pane

0x8536,	// (0x000619f1) call5_image_pane_ParamLimits

0x8536,	// (0x000619f1) call5_image_pane

0x8553,	// (0x00061a0e) call5_swipe_1_pane_ParamLimits

0x8553,	// (0x00061a0e) call5_swipe_1_pane

0x8566,	// (0x00061a21) call5_swipe_2_pane_ParamLimits

0x8566,	// (0x00061a21) call5_swipe_2_pane

0x8593,	// (0x00061a4e) popup_call5_audio_first_window_ParamLimits

0x8593,	// (0x00061a4e) popup_call5_audio_first_window

0xee15,	// (0x000682d0) call5_swipe_1_pane_g1_ParamLimits

0xee15,	// (0x000682d0) call5_swipe_1_pane_g1

0xc80f,	// (0x00065cca) call5_swipe_1_pane_g2_ParamLimits

0xc80f,	// (0x00065cca) call5_swipe_1_pane_g2

0x0001,

0xfbc6,	// (0x00069081) call5_swipe_1_pane_g_ParamLimits

0xfbc6,	// (0x00069081) call5_swipe_1_pane_g

0xc81b,	// (0x00065cd6) call5_swipe_1_pane_t1_ParamLimits

0xc81b,	// (0x00065cd6) call5_swipe_1_pane_t1

0xee15,	// (0x000682d0) call5_swipe_2_pane_g1_ParamLimits

0xee15,	// (0x000682d0) call5_swipe_2_pane_g1

0xc830,	// (0x00065ceb) call5_swipe_2_pane_g2_ParamLimits

0xc830,	// (0x00065ceb) call5_swipe_2_pane_g2

0x0001,

0xfbcb,	// (0x00069086) call5_swipe_2_pane_g_ParamLimits

0xfbcb,	// (0x00069086) call5_swipe_2_pane_g

0xc83c,	// (0x00065cf7) call5_swipe_2_pane_t1_ParamLimits

0xc83c,	// (0x00065cf7) call5_swipe_2_pane_t1

0xc851,	// (0x00065d0c) sc_swipe_pane_g1_ParamLimits

0xc851,	// (0x00065d0c) sc_swipe_pane_g1

0xc85e,	// (0x00065d19) sc_swipe_pane_g2_ParamLimits

0xc85e,	// (0x00065d19) sc_swipe_pane_g2

0x0001,

0xfbd0,	// (0x0006908b) sc_swipe_pane_g_ParamLimits

0xfbd0,	// (0x0006908b) sc_swipe_pane_g

0xc86a,	// (0x00065d25) sc_swipe_pane_t1_ParamLimits

0xc86a,	// (0x00065d25) sc_swipe_pane_t1

0x0d7f,	// (0x0005a23a) main_cmail_launcher_pane

0x85a8,	// (0x00061a63) aid_size_cell_cmail_l_ParamLimits

0x85a8,	// (0x00061a63) aid_size_cell_cmail_l

0x85c2,	// (0x00061a7d) grid_cmail_l_pane_ParamLimits

0x85c2,	// (0x00061a7d) grid_cmail_l_pane

0x85de,	// (0x00061a99) cell_cmail_l_pane_ParamLimits

0x85de,	// (0x00061a99) cell_cmail_l_pane

0x8606,	// (0x00061ac1) cell_cmail_l_pane_g1_ParamLimits

0x8606,	// (0x00061ac1) cell_cmail_l_pane_g1

0x8612,	// (0x00061acd) cell_cmail_l_pane_t1_ParamLimits

0x8612,	// (0x00061acd) cell_cmail_l_pane_t1

0xc87f,	// (0x00065d3a) cell_cmail_l_pane_t2_ParamLimits

0xc87f,	// (0x00065d3a) cell_cmail_l_pane_t2

0x0001,

0xfbd5,	// (0x00069090) cell_cmail_l_pane_t_ParamLimits

0xfbd5,	// (0x00069090) cell_cmail_l_pane_t

0x9970,	// (0x00062e2b) grid_highlight_pane_cp018_ParamLimits

0x9970,	// (0x00062e2b) grid_highlight_pane_cp018

0x0eb4,	// (0x0005a36f) main2_pane_ParamLimits

0x0eb4,	// (0x0005a36f) main2_pane

0xa1bc,	// (0x00063677) popup_sp_fs_action_menu_bg_pane_g1

0xa1c4,	// (0x0006367f) popup_sp_fs_action_menu_bg_pane_g2

0xa1cc,	// (0x00063687) popup_sp_fs_action_menu_bg_pane_g3

0xa1d4,	// (0x0006368f) popup_sp_fs_action_menu_bg_pane_g4

0xa1dc,	// (0x00063697) popup_sp_fs_action_menu_bg_pane_g5

0xa1e4,	// (0x0006369f) popup_sp_fs_action_menu_bg_pane_g6

0xa1ec,	// (0x000636a7) popup_sp_fs_action_menu_bg_pane_g7

0xa1f4,	// (0x000636af) popup_sp_fs_action_menu_bg_pane_g8

0xa1fc,	// (0x000636b7) popup_sp_fs_action_menu_bg_pane_g9

0xa204,	// (0x000636bf) popup_sp_fs_action_menu_bg_pane_g10

0xa204,	// (0x000636bf) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00068676) popup_sp_fs_action_menu_bg_pane_g

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t3_g3_g1

0x1c23,	// (0x0005b0de) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c23,	// (0x0005b0de) list_medium_line_x2_t3_g3_g2

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00068726) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00068726) list_medium_line_x2_t3_g3_g

0x1c3b,	// (0x0005b0f6) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c3b,	// (0x0005b0f6) list_medium_line_x2_t3_g3_t1

0x1c50,	// (0x0005b10b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c50,	// (0x0005b10b) list_medium_line_x2_t3_g3_t2

0x1c64,	// (0x0005b11f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1c64,	// (0x0005b11f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0006872d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0006872d) list_medium_line_x2_t3_g3_t

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t3_g2_g1

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00068734) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00068734) list_medium_line_x2_t3_g2_g

0x1c79,	// (0x0005b134) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1c79,	// (0x0005b134) list_medium_line_x2_t3_g2_t1

0x1c8f,	// (0x0005b14a) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1c8f,	// (0x0005b14a) list_medium_line_x2_t3_g2_t2

0x1ca1,	// (0x0005b15c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1ca1,	// (0x0005b15c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00068739) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00068739) list_medium_line_x2_t3_g2_t

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t4_g4_g1

0x1cbf,	// (0x0005b17a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1cbf,	// (0x0005b17a) list_medium_line_x2_t4_g4_g2

0x1c23,	// (0x0005b0de) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c23,	// (0x0005b0de) list_medium_line_x2_t4_g4_g3

0x1ccb,	// (0x0005b186) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ccb,	// (0x0005b186) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00068740) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00068740) list_medium_line_x2_t4_g4_g

0x1cd7,	// (0x0005b192) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1cd7,	// (0x0005b192) list_medium_line_x2_t4_g4_t1

0x1cf1,	// (0x0005b1ac) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1cf1,	// (0x0005b1ac) list_medium_line_x2_t4_g4_t2

0x1d07,	// (0x0005b1c2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d07,	// (0x0005b1c2) list_medium_line_x2_t4_g4_t3

0x1d1c,	// (0x0005b1d7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d1c,	// (0x0005b1d7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00068749) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00068749) list_medium_line_x2_t4_g4_t

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t2_g4_g1

0x1cbf,	// (0x0005b17a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1cbf,	// (0x0005b17a) list_medium_line_x2_t2_g4_g2

0x1c23,	// (0x0005b0de) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c23,	// (0x0005b0de) list_medium_line_x2_t2_g4_g3

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x000687b0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x000687b0) list_medium_line_x2_t2_g4_g

0x2906,	// (0x0005bdc1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2906,	// (0x0005bdc1) list_medium_line_x2_t2_g4_t1

0x1c64,	// (0x0005b11f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1c64,	// (0x0005b11f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x000687b9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x000687b9) list_medium_line_x2_t2_g4_t

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t2_g3_g1

0x1c23,	// (0x0005b0de) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c23,	// (0x0005b0de) list_medium_line_x2_t2_g3_g2

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00068726) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00068726) list_medium_line_x2_t2_g3_g

0x291b,	// (0x0005bdd6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x291b,	// (0x0005bdd6) list_medium_line_x2_t2_g3_t1

0x1c64,	// (0x0005b11f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1c64,	// (0x0005b11f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x000687be) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x000687be) list_medium_line_x2_t2_g3_t

0x2aeb,	// (0x0005bfa6) main_sp_fs_list_pane_ParamLimits

0x2aeb,	// (0x0005bfa6) main_sp_fs_list_pane

0x2af7,	// (0x0005bfb2) sp_fs_scroll_pane_ParamLimits

0x2af7,	// (0x0005bfb2) sp_fs_scroll_pane

0x2b03,	// (0x0005bfbe) list_medium_line_x2_t3_t1

0x2b13,	// (0x0005bfce) list_medium_line_x2_t3_t2

0x2b21,	// (0x0005bfdc) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00068809) list_medium_line_x2_t3_t

0x2b2f,	// (0x0005bfea) list_medium_line_x3_t4_t1

0x2b3f,	// (0x0005bffa) list_medium_line_x3_t4_t2

0x2b4d,	// (0x0005c008) list_medium_line_x3_t4_t3

0x2b21,	// (0x0005bfdc) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00068810) list_medium_line_x3_t4_t

0x2b5b,	// (0x0005c016) list_medium_line_x4_t5_t1

0x2b6b,	// (0x0005c026) list_medium_line_x4_t5_t2

0x2b4d,	// (0x0005c008) list_medium_line_x4_t5_t3

0x2b79,	// (0x0005c034) list_medium_line_x4_t5_t4

0x2b21,	// (0x0005bfdc) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00068819) list_medium_line_x4_t5_t

0x1c17,	// (0x0005b0d2) list_medium_line_t4_g4_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_t4_g4_g1

0x1ccb,	// (0x0005b186) list_medium_line_t4_g4_g2_ParamLimits

0x1ccb,	// (0x0005b186) list_medium_line_t4_g4_g2

0x2b87,	// (0x0005c042) list_medium_line_t4_g4_g3_ParamLimits

0x2b87,	// (0x0005c042) list_medium_line_t4_g4_g3

0x1c2f,	// (0x0005b0ea) list_medium_line_t4_g4_g4_ParamLimits

0x1c2f,	// (0x0005b0ea) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00068824) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00068824) list_medium_line_t4_g4_g

0x2b93,	// (0x0005c04e) list_medium_line_t4_g4_t1_ParamLimits

0x2b93,	// (0x0005c04e) list_medium_line_t4_g4_t1

0x2ba8,	// (0x0005c063) list_medium_line_t4_g4_t2_ParamLimits

0x2ba8,	// (0x0005c063) list_medium_line_t4_g4_t2

0x2bbe,	// (0x0005c079) list_medium_line_t4_g4_t3_ParamLimits

0x2bbe,	// (0x0005c079) list_medium_line_t4_g4_t3

0x1c64,	// (0x0005b11f) list_medium_line_t4_g4_t4_ParamLimits

0x1c64,	// (0x0005b11f) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0006882d) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0006882d) list_medium_line_t4_g4_t

0x2c9a,	// (0x0005c155) chi_dic_find_pane_g1

0x3f05,	// (0x0005d3c0) main_tport_pane

0xb8fc,	// (0x00064db7) list_medium_line_plain_t1

0xb912,	// (0x00064dcd) list_medium_line_t2_g2_g1_ParamLimits

0xb912,	// (0x00064dcd) list_medium_line_t2_g2_g1

0xb91e,	// (0x00064dd9) list_medium_line_t2_g2_g2_ParamLimits

0xb91e,	// (0x00064dd9) list_medium_line_t2_g2_g2

0x0001,

0xf918,	// (0x00068dd3) list_medium_line_t2_g2_g_ParamLimits

0xf918,	// (0x00068dd3) list_medium_line_t2_g2_g

0x7247,	// (0x00060702) list_medium_line_t2_g2_t1_ParamLimits

0x7247,	// (0x00060702) list_medium_line_t2_g2_t1

0x725e,	// (0x00060719) list_medium_line_t2_g2_t2_ParamLimits

0x725e,	// (0x00060719) list_medium_line_t2_g2_t2

0x0001,

0xf91d,	// (0x00068dd8) list_medium_line_t2_g2_t_ParamLimits

0xf91d,	// (0x00068dd8) list_medium_line_t2_g2_t

0xbc50,	// (0x0006510b) aid_sp_fs_list_icon_a_sm

0xbc58,	// (0x00065113) aid_sp_fs_list_icon_d

0xbc60,	// (0x0006511b) aid_sp_fs_text_primary

0xbc69,	// (0x00065124) aid_sp_fs_text_secondary

0xbc72,	// (0x0006512d) list_medium_line

0xbc72,	// (0x0006512d) list_medium_line_g2

0xbc72,	// (0x0006512d) list_medium_line_g3

0xbc72,	// (0x0006512d) list_medium_line_plain

0xbc72,	// (0x0006512d) list_medium_line_plain_t2

0xbc72,	// (0x0006512d) list_medium_line_plain_t3

0xbc72,	// (0x0006512d) list_medium_line_right_icon

0xbc72,	// (0x0006512d) list_medium_line_right_iconx2

0xbc72,	// (0x0006512d) list_medium_line_t2

0xbc72,	// (0x0006512d) list_medium_line_t2_g2

0xbc72,	// (0x0006512d) list_medium_line_t2_g3

0xbc72,	// (0x0006512d) list_medium_line_t2_right_icon

0xbc72,	// (0x0006512d) list_medium_line_t2_right_iconx2

0xbc72,	// (0x0006512d) list_medium_line_t3

0xbc72,	// (0x0006512d) list_medium_line_t3_g2

0xbc72,	// (0x0006512d) list_medium_line_t3_g3

0xbc72,	// (0x0006512d) list_medium_line_t3_right_iconx2

0xbc7b,	// (0x00065136) list_medium_line_t4_g4

0xbc84,	// (0x0006513f) list_medium_line_x2

0xbc84,	// (0x0006513f) list_medium_line_x2_t2_g2

0xbc84,	// (0x0006513f) list_medium_line_x2_t2_g3

0xbc84,	// (0x0006513f) list_medium_line_x2_t2_g4

0xbc84,	// (0x0006513f) list_medium_line_x2_t3

0xbc84,	// (0x0006513f) list_medium_line_x2_t3_g2

0xbc84,	// (0x0006513f) list_medium_line_x2_t3_g3

0xbc84,	// (0x0006513f) list_medium_line_x2_t3_g4

0xbc84,	// (0x0006513f) list_medium_line_x2_t4_g2

0xbc84,	// (0x0006513f) list_medium_line_x2_t4_g4

0xbc8d,	// (0x00065148) list_medium_line_x3

0xbc8d,	// (0x00065148) list_medium_line_x3_t4

0xbc8d,	// (0x00065148) list_medium_line_x3_t4_g4

0xbc7b,	// (0x00065136) list_medium_line_x4_t4

0xbc7b,	// (0x00065136) list_medium_line_x4_t4_g7

0xbc7b,	// (0x00065136) list_medium_line_x4_t5

0xbc96,	// (0x00065151) list_single_fs_dyc_pane_ParamLimits

0xbc96,	// (0x00065151) list_single_fs_dyc_pane

0x1c17,	// (0x0005b0d2) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x4_t4_g7_g1

0xc1b5,	// (0x00065670) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc1b5,	// (0x00065670) list_medium_line_x4_t4_g7_g2

0xc1c1,	// (0x0006567c) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc1c1,	// (0x0006567c) list_medium_line_x4_t4_g7_g3

0xc1d0,	// (0x0006568b) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc1d0,	// (0x0006568b) list_medium_line_x4_t4_g7_g4

0xc1dc,	// (0x00065697) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc1dc,	// (0x00065697) list_medium_line_x4_t4_g7_g5

0xc1eb,	// (0x000656a6) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc1eb,	// (0x000656a6) list_medium_line_x4_t4_g7_g6

0xc1fa,	// (0x000656b5) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc1fa,	// (0x000656b5) list_medium_line_x4_t4_g7_g7

0x0006,

0xfae2,	// (0x00068f9d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfae2,	// (0x00068f9d) list_medium_line_x4_t4_g7_g

0xc206,	// (0x000656c1) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc206,	// (0x000656c1) list_medium_line_x4_t4_g7_t1

0xc21b,	// (0x000656d6) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc21b,	// (0x000656d6) list_medium_line_x4_t4_g7_t2

0xc230,	// (0x000656eb) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc230,	// (0x000656eb) list_medium_line_x4_t4_g7_t3

0xc245,	// (0x00065700) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc245,	// (0x00065700) list_medium_line_x4_t4_g7_t4

0xc257,	// (0x00065712) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc257,	// (0x00065712) list_medium_line_x4_t4_g7_t5

0x0004,

0xfaf1,	// (0x00068fac) list_medium_line_x4_t4_g7_t_ParamLimits

0xfaf1,	// (0x00068fac) list_medium_line_x4_t4_g7_t

0xc269,	// (0x00065724) list_single_dyc_row_pane_ParamLimits

0xc269,	// (0x00065724) list_single_dyc_row_pane

0x8523,	// (0x000619de) call5_gesture_pane_ParamLimits

0x8523,	// (0x000619de) call5_gesture_pane

0x8579,	// (0x00061a34) call5_windows_pane_ParamLimits

0x8579,	// (0x00061a34) call5_windows_pane

0x8628,	// (0x00061ae3) call5_swipe_1_pane_cp_ParamLimits

0x8628,	// (0x00061ae3) call5_swipe_1_pane_cp

0x8634,	// (0x00061aef) call5_swipe_2_pane_cp_ParamLimits

0x8634,	// (0x00061aef) call5_swipe_2_pane_cp

0xacba,	// (0x00064175) call5_image_pane_cp

0x8640,	// (0x00061afb) popup_call5_audio_first_window_cp_ParamLimits

0x8640,	// (0x00061afb) popup_call5_audio_first_window_cp

0xc851,	// (0x00065d0c) call5_swipe_1_pane_g1_cp_ParamLimits

0xc851,	// (0x00065d0c) call5_swipe_1_pane_g1_cp

0xc891,	// (0x00065d4c) call5_swipe_1_pane_g2_cp

0xc86a,	// (0x00065d25) call5_swipe_1_pane_t1_cp_ParamLimits

0xc86a,	// (0x00065d25) call5_swipe_1_pane_t1_cp

0xc851,	// (0x00065d0c) call5_swipe_2_pane_g1_cp_ParamLimits

0xc851,	// (0x00065d0c) call5_swipe_2_pane_g1_cp

0xc899,	// (0x00065d54) call5_swipe_2_pane_g2_cp

0xc8a1,	// (0x00065d5c) call5_swipe_2_pane_t1_cp_ParamLimits

0xc8a1,	// (0x00065d5c) call5_swipe_2_pane_t1_cp

0x9970,	// (0x00062e2b) main_sp_fs_email_pane

0xc8b6,	// (0x00065d71) main_sp_fs_listscroll_pane_te

0xc8bf,	// (0x00065d7a) popup_sp_fs_action_menu_pane_ParamLimits

0xc8bf,	// (0x00065d7a) popup_sp_fs_action_menu_pane

0xebe5,	// (0x000680a0) bg_sp_fs_ctrlbar_pane_g1

0xc905,	// (0x00065dc0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc90e,	// (0x00065dc9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc917,	// (0x00065dd2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xebe5,	// (0x000680a0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbda,	// (0x00069095) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe9c4,	// (0x00067e7f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe9c4,	// (0x00067e7f) bg_sp_fs_ctrlbar_ddmenu_pane

0xc920,	// (0x00065ddb) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc920,	// (0x00065ddb) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc92c,	// (0x00065de7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc92c,	// (0x00065de7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbe3,	// (0x0006909e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbe3,	// (0x0006909e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc938,	// (0x00065df3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc938,	// (0x00065df3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc952,	// (0x00065e0d) list_medium_line_t2_right_icon_g1

0x864e,	// (0x00061b09) list_medium_line_t2_right_icon_t1

0x865e,	// (0x00061b19) list_medium_line_t2_right_icon_t2

0x0001,

0xfbe8,	// (0x000690a3) list_medium_line_t2_right_icon_t

0xe76a,	// (0x00067c25) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe76a,	// (0x00067c25) bg_sp_fs_ctrlbar_pane

0x86b4,	// (0x00061b6f) main_sp_fs_ctrlbar_button_pane_cp01

0x86bc,	// (0x00061b77) main_sp_fs_ctrlbar_ddmenu_pane

0xc994,	// (0x00065e4f) main_sp_fs_ctrlbar_pane_g1

0xc9a0,	// (0x00065e5b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfbed,	// (0x000690a8) main_sp_fs_ctrlbar_pane_g

0xc9ac,	// (0x00065e67) main_sp_fs_ctrlbar_pane_t1

0x86c6,	// (0x00061b81) main_sp_fs_ctrlbar_pane

0x86ea,	// (0x00061ba5) main_sp_fs_listscroll_pane_te_cp01

0x870a,	// (0x00061bc5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x870a,	// (0x00061bc5) popup_sp_fs_action_menu_pane_cp01

0x9970,	// (0x00062e2b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9970,	// (0x00062e2b) bg_sp_fs_highlight_list_pane_cp01

0xc9c1,	// (0x00065e7c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc9c1,	// (0x00065e7c) sp_fs_action_menu_list_gene_pane_g1

0xc9d0,	// (0x00065e8b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc9d0,	// (0x00065e8b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbf2,	// (0x000690ad) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbf2,	// (0x000690ad) sp_fs_action_menu_list_gene_pane_g

0xc9dd,	// (0x00065e98) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc9dd,	// (0x00065e98) sp_fs_action_menu_list_gene_pane_t1

0xc9f5,	// (0x00065eb0) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc9f5,	// (0x00065eb0) sp_fs_action_menu_list_gene_pane

0xca18,	// (0x00065ed3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xca18,	// (0x00065ed3) popup_sp_fs_action_menu_bg_pane

0xca26,	// (0x00065ee1) sp_fs_action_menu_list_pane_ParamLimits

0xca26,	// (0x00065ee1) sp_fs_action_menu_list_pane

0xca4a,	// (0x00065f05) sp_fs_scroll_pane_cp01_ParamLimits

0xca4a,	// (0x00065f05) sp_fs_scroll_pane_cp01

0x8726,	// (0x00061be1) list_medium_line_plain_t2_t1

0x8736,	// (0x00061bf1) list_medium_line_plain_t2_t2

0x0001,

0xfbf7,	// (0x000690b2) list_medium_line_plain_t2_t

0x8744,	// (0x00061bff) list_medium_line_plain_t3_t1

0x8754,	// (0x00061c0f) list_medium_line_plain_t3_t2

0x8762,	// (0x00061c1d) list_medium_line_plain_t3_t3

0x0002,

0xfbfc,	// (0x000690b7) list_medium_line_plain_t3_t

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t2_g2_g1

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00068734) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00068734) list_medium_line_x2_t2_g2_g

0x2b93,	// (0x0005c04e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2b93,	// (0x0005c04e) list_medium_line_x2_t2_g2_t1

0x1c64,	// (0x0005b11f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1c64,	// (0x0005b11f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc03,	// (0x000690be) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc03,	// (0x000690be) list_medium_line_x2_t2_g2_t

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t4_g2_g1

0xca70,	// (0x00065f2b) list_medium_line_x2_t4_g2_g2_ParamLimits

0xca70,	// (0x00065f2b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc08,	// (0x000690c3) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc08,	// (0x000690c3) list_medium_line_x2_t4_g2_g

0x8770,	// (0x00061c2b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8770,	// (0x00061c2b) list_medium_line_x2_t4_g2_t1

0x878a,	// (0x00061c45) list_medium_line_x2_t4_g2_t2_ParamLimits

0x878a,	// (0x00061c45) list_medium_line_x2_t4_g2_t2

0x87a0,	// (0x00061c5b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87a0,	// (0x00061c5b) list_medium_line_x2_t4_g2_t3

0x1c64,	// (0x0005b11f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1c64,	// (0x0005b11f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc0d,	// (0x000690c8) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc0d,	// (0x000690c8) list_medium_line_x2_t4_g2_t

0xca82,	// (0x00065f3d) list_medium_line_t3_right_iconx2_g1

0xc952,	// (0x00065e0d) list_medium_line_t3_right_iconx2_g2

0x87b5,	// (0x00061c70) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc16,	// (0x000690d1) list_medium_line_t3_right_iconx2_g

0x87bf,	// (0x00061c7a) list_medium_line_t3_right_iconx2_t1

0x87cf,	// (0x00061c8a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc1d,	// (0x000690d8) list_medium_line_t3_right_iconx2_t

0x1c17,	// (0x0005b0d2) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x3_t4_g4_g1

0x1c23,	// (0x0005b0de) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c23,	// (0x0005b0de) list_medium_line_x3_t4_g4_g2

0x1ccb,	// (0x0005b186) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ccb,	// (0x0005b186) list_medium_line_x3_t4_g4_g3

0xca8a,	// (0x00065f45) list_medium_line_x3_t4_g4_g4_ParamLimits

0xca8a,	// (0x00065f45) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc22,	// (0x000690dd) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc22,	// (0x000690dd) list_medium_line_x3_t4_g4_g

0x87dd,	// (0x00061c98) list_medium_line_x3_t4_g4_t1_ParamLimits

0x87dd,	// (0x00061c98) list_medium_line_x3_t4_g4_t1

0x87f4,	// (0x00061caf) list_medium_line_x3_t4_g4_t2_ParamLimits

0x87f4,	// (0x00061caf) list_medium_line_x3_t4_g4_t2

0xca96,	// (0x00065f51) list_medium_line_x3_t4_g4_t3_ParamLimits

0xca96,	// (0x00065f51) list_medium_line_x3_t4_g4_t3

0xcaab,	// (0x00065f66) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcaab,	// (0x00065f66) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc2b,	// (0x000690e6) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc2b,	// (0x000690e6) list_medium_line_x3_t4_g4_t

0x8809,	// (0x00061cc4) list_single_dyc_row_text_pane_t1_ParamLimits

0x8809,	// (0x00061cc4) list_single_dyc_row_text_pane_t1

0x884c,	// (0x00061d07) list_single_dyc_row_text_pane_t2_ParamLimits

0x884c,	// (0x00061d07) list_single_dyc_row_text_pane_t2

0xcac8,	// (0x00065f83) list_single_dyc_row_text_pane_t3_ParamLimits

0xcac8,	// (0x00065f83) list_single_dyc_row_text_pane_t3

0x0002,

0xfc34,	// (0x000690ef) list_single_dyc_row_text_pane_t_ParamLimits

0xfc34,	// (0x000690ef) list_single_dyc_row_text_pane_t

0xcada,	// (0x00065f95) list_single_dyc_row_pane_g1_ParamLimits

0xcada,	// (0x00065f95) list_single_dyc_row_pane_g1

0xcae6,	// (0x00065fa1) list_single_dyc_row_pane_g2_ParamLimits

0xcae6,	// (0x00065fa1) list_single_dyc_row_pane_g2

0xcaf2,	// (0x00065fad) list_single_dyc_row_pane_g3_ParamLimits

0xcaf2,	// (0x00065fad) list_single_dyc_row_pane_g3

0xcafe,	// (0x00065fb9) list_single_dyc_row_pane_g4_ParamLimits

0xcafe,	// (0x00065fb9) list_single_dyc_row_pane_g4

0x0003,

0xfc3b,	// (0x000690f6) list_single_dyc_row_pane_g_ParamLimits

0xfc3b,	// (0x000690f6) list_single_dyc_row_pane_g

0xcb0a,	// (0x00065fc5) list_single_dyc_row_text_pane_ParamLimits

0xcb0a,	// (0x00065fc5) list_single_dyc_row_text_pane

0x0d7f,	// (0x0005a23a) bg_sp_fs_scroll_pane

0xcb29,	// (0x00065fe4) thumb_sp_fs_scroll_pane

0xb912,	// (0x00064dcd) list_medium_line_g1_ParamLimits

0xb912,	// (0x00064dcd) list_medium_line_g1

0xcb32,	// (0x00065fed) list_medium_line_t1_ParamLimits

0xcb32,	// (0x00065fed) list_medium_line_t1

0x1c17,	// (0x0005b0d2) list_medium_line_x2_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x2_g1

0x1c23,	// (0x0005b0de) list_medium_line_x2_g2_ParamLimits

0x1c23,	// (0x0005b0de) list_medium_line_x2_g2

0x0001,

0xfc44,	// (0x000690ff) list_medium_line_x2_g_ParamLimits

0xfc44,	// (0x000690ff) list_medium_line_x2_g

0xcb47,	// (0x00066002) list_medium_line_x2_t1_ParamLimits

0xcb47,	// (0x00066002) list_medium_line_x2_t1

0x1c17,	// (0x0005b0d2) list_medium_line_x3_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x3_g1

0x1c23,	// (0x0005b0de) list_medium_line_x3_g2_ParamLimits

0x1c23,	// (0x0005b0de) list_medium_line_x3_g2

0x0001,

0xfc44,	// (0x000690ff) list_medium_line_x3_g_ParamLimits

0xfc44,	// (0x000690ff) list_medium_line_x3_g

0xcb47,	// (0x00066002) list_medium_line_x3_t1_ParamLimits

0xcb47,	// (0x00066002) list_medium_line_x3_t1

0xcb5d,	// (0x00066018) thumb_sp_fs_scroll_pane_g1

0xcb66,	// (0x00066021) thumb_sp_fs_scroll_pane_g2

0xcb6f,	// (0x0006602a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc49,	// (0x00069104) thumb_sp_fs_scroll_pane_g

0xcb5d,	// (0x00066018) bg_sp_fs_scroll_pane_g1

0xcb66,	// (0x00066021) bg_sp_fs_scroll_pane_g2

0xcb6f,	// (0x0006602a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc49,	// (0x00069104) bg_sp_fs_scroll_pane_g

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c17,	// (0x0005b0d2) list_medium_line_x2_t3_g4_g1

0x1cbf,	// (0x0005b17a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1cbf,	// (0x0005b17a) list_medium_line_x2_t3_g4_g2

0x1c23,	// (0x0005b0de) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c23,	// (0x0005b0de) list_medium_line_x2_t3_g4_g3

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c2f,	// (0x0005b0ea) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x000687b0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x000687b0) list_medium_line_x2_t3_g4_g

0x88a6,	// (0x00061d61) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88a6,	// (0x00061d61) list_medium_line_x2_t3_g4_t1

0x88bc,	// (0x00061d77) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88bc,	// (0x00061d77) list_medium_line_x2_t3_g4_t2

0x1c64,	// (0x0005b11f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1c64,	// (0x0005b11f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc50,	// (0x0006910b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc50,	// (0x0006910b) list_medium_line_x2_t3_g4_t

0xb912,	// (0x00064dcd) list_medium_line_g2_g1_ParamLimits

0xb912,	// (0x00064dcd) list_medium_line_g2_g1

0xb91e,	// (0x00064dd9) list_medium_line_g2_g2_ParamLimits

0xb91e,	// (0x00064dd9) list_medium_line_g2_g2

0x0001,

0xf918,	// (0x00068dd3) list_medium_line_g2_g_ParamLimits

0xf918,	// (0x00068dd3) list_medium_line_g2_g

0xcb78,	// (0x00066033) list_medium_line_g2_t1_ParamLimits

0xcb78,	// (0x00066033) list_medium_line_g2_t1

0xb912,	// (0x00064dcd) list_medium_line_t3_g2_g1_ParamLimits

0xb912,	// (0x00064dcd) list_medium_line_t3_g2_g1

0xb91e,	// (0x00064dd9) list_medium_line_t3_g2_g2_ParamLimits

0xb91e,	// (0x00064dd9) list_medium_line_t3_g2_g2

0x0001,

0xf918,	// (0x00068dd3) list_medium_line_t3_g2_g_ParamLimits

0xf918,	// (0x00068dd3) list_medium_line_t3_g2_g

0x88d5,	// (0x00061d90) list_medium_line_t3_g2_t1_ParamLimits

0x88d5,	// (0x00061d90) list_medium_line_t3_g2_t1

0x88ef,	// (0x00061daa) list_medium_line_t3_g2_t2_ParamLimits

0x88ef,	// (0x00061daa) list_medium_line_t3_g2_t2

0x8905,	// (0x00061dc0) list_medium_line_t3_g2_t3_ParamLimits

0x8905,	// (0x00061dc0) list_medium_line_t3_g2_t3

0x0002,

0xfc57,	// (0x00069112) list_medium_line_t3_g2_t_ParamLimits

0xfc57,	// (0x00069112) list_medium_line_t3_g2_t

0xc952,	// (0x00065e0d) list_medium_line_right_icon_g1

0xcb8d,	// (0x00066048) list_medium_line_right_icon_t1

0xb912,	// (0x00064dcd) list_medium_line_t2_g1_ParamLimits

0xb912,	// (0x00064dcd) list_medium_line_t2_g1

0x891c,	// (0x00061dd7) list_medium_line_t2_t1_ParamLimits

0x891c,	// (0x00061dd7) list_medium_line_t2_t1

0x8936,	// (0x00061df1) list_medium_line_t2_t2_ParamLimits

0x8936,	// (0x00061df1) list_medium_line_t2_t2

0x0001,

0xfc5e,	// (0x00069119) list_medium_line_t2_t_ParamLimits

0xfc5e,	// (0x00069119) list_medium_line_t2_t

0xb912,	// (0x00064dcd) list_medium_line_t3_g1_ParamLimits

0xb912,	// (0x00064dcd) list_medium_line_t3_g1

0x894b,	// (0x00061e06) list_medium_line_t3_t1_ParamLimits

0x894b,	// (0x00061e06) list_medium_line_t3_t1

0x8962,	// (0x00061e1d) list_medium_line_t3_t2_ParamLimits

0x8962,	// (0x00061e1d) list_medium_line_t3_t2

0x8977,	// (0x00061e32) list_medium_line_t3_t3_ParamLimits

0x8977,	// (0x00061e32) list_medium_line_t3_t3

0x0002,

0xfc63,	// (0x0006911e) list_medium_line_t3_t_ParamLimits

0xfc63,	// (0x0006911e) list_medium_line_t3_t

0xb912,	// (0x00064dcd) list_medium_line_g3_g1_ParamLimits

0xb912,	// (0x00064dcd) list_medium_line_g3_g1

0xcb9b,	// (0x00066056) list_medium_line_g3_g2_ParamLimits

0xcb9b,	// (0x00066056) list_medium_line_g3_g2

0xb91e,	// (0x00064dd9) list_medium_line_g3_g3_ParamLimits

0xb91e,	// (0x00064dd9) list_medium_line_g3_g3

0x0002,

0xfc6a,	// (0x00069125) list_medium_line_g3_g_ParamLimits

0xfc6a,	// (0x00069125) list_medium_line_g3_g

0xcba7,	// (0x00066062) list_medium_line_g3_t1_ParamLimits

0xcba7,	// (0x00066062) list_medium_line_g3_t1

0xb912,	// (0x00064dcd) list_medium_line_t2_g3_g1_ParamLimits

0xb912,	// (0x00064dcd) list_medium_line_t2_g3_g1

0xcb9b,	// (0x00066056) list_medium_line_t2_g3_g2_ParamLimits

0xcb9b,	// (0x00066056) list_medium_line_t2_g3_g2

0xb91e,	// (0x00064dd9) list_medium_line_t2_g3_g3_ParamLimits

0xb91e,	// (0x00064dd9) list_medium_line_t2_g3_g3

0x0002,

0xfc6a,	// (0x00069125) list_medium_line_t2_g3_g_ParamLimits

0xfc6a,	// (0x00069125) list_medium_line_t2_g3_g

0x8989,	// (0x00061e44) list_medium_line_t2_g3_t1_ParamLimits

0x8989,	// (0x00061e44) list_medium_line_t2_g3_t1

0x89a0,	// (0x00061e5b) list_medium_line_t2_g3_t2_ParamLimits

0x89a0,	// (0x00061e5b) list_medium_line_t2_g3_t2

0x0001,

0xfc71,	// (0x0006912c) list_medium_line_t2_g3_t_ParamLimits

0xfc71,	// (0x0006912c) list_medium_line_t2_g3_t

0xb912,	// (0x00064dcd) list_medium_line_t3_g3_g1_ParamLimits

0xb912,	// (0x00064dcd) list_medium_line_t3_g3_g1

0xcb9b,	// (0x00066056) list_medium_line_t3_g3_g2_ParamLimits

0xcb9b,	// (0x00066056) list_medium_line_t3_g3_g2

0xb91e,	// (0x00064dd9) list_medium_line_t3_g3_g3_ParamLimits

0xb91e,	// (0x00064dd9) list_medium_line_t3_g3_g3

0x0002,

0xfc6a,	// (0x00069125) list_medium_line_t3_g3_g_ParamLimits

0xfc6a,	// (0x00069125) list_medium_line_t3_g3_g

0x89b5,	// (0x00061e70) list_medium_line_t3_g3_t1_ParamLimits

0x89b5,	// (0x00061e70) list_medium_line_t3_g3_t1

0x89ce,	// (0x00061e89) list_medium_line_t3_g3_t2_ParamLimits

0x89ce,	// (0x00061e89) list_medium_line_t3_g3_t2

0x89e4,	// (0x00061e9f) list_medium_line_t3_g3_t3_ParamLimits

0x89e4,	// (0x00061e9f) list_medium_line_t3_g3_t3

0x0002,

0xfc76,	// (0x00069131) list_medium_line_t3_g3_t_ParamLimits

0xfc76,	// (0x00069131) list_medium_line_t3_g3_t

0xca82,	// (0x00065f3d) list_medium_line_right_iconx2_g1

0xc952,	// (0x00065e0d) list_medium_line_right_iconx2_g2

0x0001,

0xfc7d,	// (0x00069138) list_medium_line_right_iconx2_g

0xcbbc,	// (0x00066077) list_medium_line_right_iconx2_t1

0xca82,	// (0x00065f3d) list_medium_line_t2_right_iconx2_g1

0xc952,	// (0x00065e0d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfc7d,	// (0x00069138) list_medium_line_t2_right_iconx2_g

0x89fe,	// (0x00061eb9) list_medium_line_t2_right_iconx2_t1

0x8a0e,	// (0x00061ec9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc82,	// (0x0006913d) list_medium_line_t2_right_iconx2_t

0xcbca,	// (0x00066085) list_medium_line_x4_t4_t1

0x8a1c,	// (0x00061ed7) list_medium_line_x4_t4_t2

0x8a2c,	// (0x00061ee7) list_medium_line_x4_t4_t3

0x8a3c,	// (0x00061ef7) list_medium_line_x4_t4_t4

0x0003,

0xfc87,	// (0x00069142) list_medium_line_x4_t4_t

0x8a86,	// (0x00061f41) tport_appsw_pane_ParamLimits

0x8a86,	// (0x00061f41) tport_appsw_pane

0x8a99,	// (0x00061f54) tport_contact_pane_ParamLimits

0x8a99,	// (0x00061f54) tport_contact_pane

0x8aac,	// (0x00061f67) tport_listscroll_pane_ParamLimits

0x8aac,	// (0x00061f67) tport_listscroll_pane

0x8ac2,	// (0x00061f7d) cell_tport_appsw_pane_ParamLimits

0x8ac2,	// (0x00061f7d) cell_tport_appsw_pane

0xb65f,	// (0x00064b1a) tport_appsw_pane_g1_ParamLimits

0xb65f,	// (0x00064b1a) tport_appsw_pane_g1

0xcbd8,	// (0x00066093) tport_contact_pane_g1

0xcbe1,	// (0x0006609c) tport_contact_pane_t1

0xcbef,	// (0x000660aa) tport_contact_pane_t2

0x0001,

0xfc90,	// (0x0006914b) tport_contact_pane_t

0xcbfd,	// (0x000660b8) list_tport_pane

0xcc06,	// (0x000660c1) scroll_pane_cp_030

0x8b08,	// (0x00061fc3) cell_tport_appsw_pane_g1

0xcc1f,	// (0x000660da) cell_tport_appsw_pane_t1

0x0d7f,	// (0x0005a23a) grid_highlight_pane_cp019

0x8b18,	// (0x00061fd3) list_tport_double_graphic_pane_ParamLimits

0x8b18,	// (0x00061fd3) list_tport_double_graphic_pane

0x9970,	// (0x00062e2b) list_highlight_pane_cp023_ParamLimits

0x9970,	// (0x00062e2b) list_highlight_pane_cp023

0x8b28,	// (0x00061fe3) list_tport_double_graphic_pane_g1_ParamLimits

0x8b28,	// (0x00061fe3) list_tport_double_graphic_pane_g1

0x8b35,	// (0x00061ff0) list_tport_double_graphic_pane_t1_ParamLimits

0x8b35,	// (0x00061ff0) list_tport_double_graphic_pane_t1

0x8b4a,	// (0x00062005) list_tport_double_graphic_pane_t2_ParamLimits

0x8b4a,	// (0x00062005) list_tport_double_graphic_pane_t2

0x0001,

0xfc9c,	// (0x00069157) list_tport_double_graphic_pane_t_ParamLimits

0xfc9c,	// (0x00069157) list_tport_double_graphic_pane_t

0x0d7f,	// (0x0005a23a) main_cale_note_pane

0x69f1,	// (0x0005feac) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x69f1,	// (0x0005feac) cell_vitu2_function_top_wide_pane_cp01

0x81f4,	// (0x000616af) wait_bar_pane_cp05_ParamLimits

0x0d7f,	// (0x0005a23a) listscroll_cmail_pane

0xcc35,	// (0x000660f0) list_cmail_pane

0x8b66,	// (0x00062021) list_cmail_body_pane

0x8b7e,	// (0x00062039) list_single_cmail_header_caption_pane

0x8b9e,	// (0x00062059) list_single_cmail_header_detail_pane_ParamLimits

0x8b9e,	// (0x00062059) list_single_cmail_header_detail_pane

0x8bd0,	// (0x0006208b) list_single_cmail_header_caption_pane_t1

0x8be0,	// (0x0006209b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8be0,	// (0x0006209b) list_single_cmail_header_detail_pane_g1

0xcc55,	// (0x00066110) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcc55,	// (0x00066110) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca1,	// (0x0006915c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca1,	// (0x0006915c) list_single_cmail_header_detail_pane_g

0xcc6e,	// (0x00066129) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcc6e,	// (0x00066129) list_single_cmail_header_detail_pane_t1

0xccac,	// (0x00066167) list_single_cmail_header_editor_pane_bg_ParamLimits

0xccac,	// (0x00066167) list_single_cmail_header_editor_pane_bg

0xc4f3,	// (0x000659ae) list_cmail_body_pane_g1

0xccbe,	// (0x00066179) list_cmail_body_pane_t1

0xb6b9,	// (0x00064b74) list_single_cmail_header_editor_pane_bg_g1

0xa5d5,	// (0x00063a90) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb6c9,	// (0x00064b84) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb6c1,	// (0x00064b7c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb90a,	// (0x00064dc5) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb6e9,	// (0x00064ba4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb6d9,	// (0x00064b94) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb6e1,	// (0x00064b9c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa5b5,	// (0x00063a70) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c1e,	// (0x000620d9) calenote_gesture_pane_ParamLimits

0x8c1e,	// (0x000620d9) calenote_gesture_pane

0x8c3e,	// (0x000620f9) calenote_window_pane_ParamLimits

0x8c3e,	// (0x000620f9) calenote_window_pane

0xcccc,	// (0x00066187) popup_note_window_cp01

0x8c5a,	// (0x00062115) calenote_swipe_1_pane_ParamLimits

0x8c5a,	// (0x00062115) calenote_swipe_1_pane

0x8634,	// (0x00061aef) calenote_swipe_2_pane_ParamLimits

0x8634,	// (0x00061aef) calenote_swipe_2_pane

0xc851,	// (0x00065d0c) calenote_swipe_1_pane_g1_ParamLimits

0xc851,	// (0x00065d0c) calenote_swipe_1_pane_g1

0xc85e,	// (0x00065d19) calenote_swipe_1_pane_g2_ParamLimits

0xc85e,	// (0x00065d19) calenote_swipe_1_pane_g2

0x0001,

0xfbd0,	// (0x0006908b) calenote_swipe_1_pane_g_ParamLimits

0xfbd0,	// (0x0006908b) calenote_swipe_1_pane_g

0xccde,	// (0x00066199) calenote_swipe_1_pane_t1_ParamLimits

0xccde,	// (0x00066199) calenote_swipe_1_pane_t1

0xc851,	// (0x00065d0c) calenote_swipe_2_pane_g1_ParamLimits

0xc851,	// (0x00065d0c) calenote_swipe_2_pane_g1

0xccfd,	// (0x000661b8) calenote_swipe_2_pane_g2_ParamLimits

0xccfd,	// (0x000661b8) calenote_swipe_2_pane_g2

0x0001,

0xfcad,	// (0x00069168) calenote_swipe_2_pane_g_ParamLimits

0xfcad,	// (0x00069168) calenote_swipe_2_pane_g

0xcd09,	// (0x000661c4) calenote_swipe_2_pane_t1_ParamLimits

0xcd09,	// (0x000661c4) calenote_swipe_2_pane_t1

0x0d7f,	// (0x0005a23a) main_mup_navstr_pane

0x5323,	// (0x0005e7de) main_mup3_pane_t7_ParamLimits

0x5323,	// (0x0005e7de) main_mup3_pane_t7

0xd6bc,	// (0x00066b77) main_mp4_pane_g6_ParamLimits

0xd6bc,	// (0x00066b77) main_mp4_pane_g6

0xd852,	// (0x00066d0d) main_image3_pane_t4_ParamLimits

0xd852,	// (0x00066d0d) main_image3_pane_t4

0x8c6f,	// (0x0006212a) popup_navstr_preview_pane_ParamLimits

0x8c6f,	// (0x0006212a) popup_navstr_preview_pane

0x8c7f,	// (0x0006213a) scroll_navstr_pane_ParamLimits

0x8c7f,	// (0x0006213a) scroll_navstr_pane

0x0d7f,	// (0x0005a23a) bg_popup_preview_window_pane_cp04

0xcd30,	// (0x000661eb) popup_navstr_preview_pane_t1

0x8c93,	// (0x0006214e) scroll_navstr_pane_g1_ParamLimits

0x8c93,	// (0x0006214e) scroll_navstr_pane_g1

0x8ca7,	// (0x00062162) scroll_navstr_pane_t1_ParamLimits

0x8ca7,	// (0x00062162) scroll_navstr_pane_t1

0xccd5,	// (0x00066190) bg_button_pane_cp014

0xccd5,	// (0x00066190) bg_button_pane_cp030

0x84c9,	// (0x00061984) list_double_fisheye_pane_g4_ParamLimits

0x84c9,	// (0x00061984) list_double_fisheye_pane_g4

0x84d5,	// (0x00061990) list_double_fisheye_pane_g5_ParamLimits

0x84d5,	// (0x00061990) list_double_fisheye_pane_g5

0xcc3d,	// (0x000660f8) sp_fs_scroll_pane_cp03

0xc994,	// (0x00065e4f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc9a0,	// (0x00065e5b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbed,	// (0x000690a8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc9ac,	// (0x00065e67) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8b5c,	// (0x00062017) sp_fs_scroll_pane_cp02

0xa26f,	// (0x0006372a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa26f,	// (0x0006372a) popup_sp_fs_calendar_preview_list_single_pane

0x0d7f,	// (0x0005a23a) main_cam6_pano_pane

0x9970,	// (0x00062e2b) main_mup3_pane_ParamLimits

0x0d7f,	// (0x0005a23a) main_phacti_pane

0x80c5,	// (0x00061580) bg_button_pane_cp11

0x80df,	// (0x0006159a) main_mobtv_info_pane_g2_ParamLimits

0x80df,	// (0x0006159a) main_mobtv_info_pane_g2

0x0001,

0xfb4d,	// (0x00069008) main_mobtv_info_pane_g_ParamLimits

0xfb4d,	// (0x00069008) main_mobtv_info_pane_g

0x82ba,	// (0x00061775) sc_clock_pane_t5_ParamLimits

0x82ba,	// (0x00061775) sc_clock_pane_t5

0x8344,	// (0x000617ff) main_radioblah_pane_g1_ParamLimits

0xc783,	// (0x00065c3e) main_radioblah_pane_t3_ParamLimits

0xc783,	// (0x00065c3e) main_radioblah_pane_t3

0xc79b,	// (0x00065c56) main_radioblah_pane_t4_ParamLimits

0xc79b,	// (0x00065c56) main_radioblah_pane_t4

0x836c,	// (0x00061827) main_radioblah_text_pane_ParamLimits

0x836c,	// (0x00061827) main_radioblah_text_pane

0x837e,	// (0x00061839) main_radioblah_info_pane_g1_ParamLimits

0x8417,	// (0x000618d2) main_radioblah_info_pane_t4_ParamLimits

0x8417,	// (0x000618d2) main_radioblah_info_pane_t4

0x9970,	// (0x00062e2b) main_sp_fs_calendar_pane

0x8cbe,	// (0x00062179) main_phacti_pane_g1

0x8cc6,	// (0x00062181) phacti_note_pane_ParamLimits

0x8cc6,	// (0x00062181) phacti_note_pane

0xcd47,	// (0x00066202) phacti_term_pane_ParamLimits

0xcd47,	// (0x00066202) phacti_term_pane

0xcd5c,	// (0x00066217) phacti_note_pane_t1_ParamLimits

0xcd5c,	// (0x00066217) phacti_note_pane_t1

0xcd73,	// (0x0006622e) phacti_term_pane_g1

0xcd7b,	// (0x00066236) phacti_term_pane_t1_ParamLimits

0xcd7b,	// (0x00066236) phacti_term_pane_t1

0xcda5,	// (0x00066260) popup_sp_fs_calendar_preview_list_single_pane_g1

0xcdad,	// (0x00066268) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb7,	// (0x00069172) popup_sp_fs_calendar_preview_list_single_pane_g

0xcdb5,	// (0x00066270) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcdb5,	// (0x00066270) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcdcb,	// (0x00066286) aid_popup_sp_fs_bg_corner_pane

0xebe5,	// (0x000680a0) popup_sp_fs_calendar_preview_bg_pane_g1

0x0d7f,	// (0x0005a23a) popup_sp_fs_calendar_preview_bg_pane

0xcdd3,	// (0x0006628e) popup_sp_fs_calendar_preview_list_pane

0x9970,	// (0x00062e2b) bg_main_sp_fs_cale_pane_ParamLimits

0x9970,	// (0x00062e2b) bg_main_sp_fs_cale_pane

0xcddb,	// (0x00066296) listscroll_cale_mrui_pane_ParamLimits

0xcddb,	// (0x00066296) listscroll_cale_mrui_pane

0xcdef,	// (0x000662aa) listscroll_sp_fs_schedule_track_pane

0xcdf8,	// (0x000662b3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcdf8,	// (0x000662b3) main_sp_fs_ctrlbar_pane_cp01

0xce09,	// (0x000662c4) main_sp_fs_ribbon_pane

0xce11,	// (0x000662cc) popup_sp_fs_cale_preview_window

0x8d1d,	// (0x000621d8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d1d,	// (0x000621d8) list_single_sp_fs_schedule_track_pane

0x9970,	// (0x00062e2b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9970,	// (0x00062e2b) bg_sp_fs_highlight_list_pane_cp03

0x8d31,	// (0x000621ec) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d31,	// (0x000621ec) list_single_sp_fs_schedule_track_pane_g1

0x8d3d,	// (0x000621f8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d3d,	// (0x000621f8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbc,	// (0x00069177) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbc,	// (0x00069177) list_single_sp_fs_schedule_track_pane_g

0x8d49,	// (0x00062204) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d49,	// (0x00062204) list_single_sp_fs_schedule_track_pane_t1

0x8d6b,	// (0x00062226) sp_fs_schedule_track_pane_ParamLimits

0x8d6b,	// (0x00062226) sp_fs_schedule_track_pane

0xce23,	// (0x000662de) sp_fs_schedule_track_pane_g1

0xce2b,	// (0x000662e6) sp_fs_schedule_track_pane_g2

0xce33,	// (0x000662ee) sp_fs_schedule_track_pane_g3

0xce3b,	// (0x000662f6) sp_fs_schedule_track_pane_g4

0xce43,	// (0x000662fe) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc1,	// (0x0006917c) sp_fs_schedule_track_pane_g

0xb6b9,	// (0x00064b74) bg_sp_fs_schedule_viewer_highlight_g1

0xa5d5,	// (0x00063a90) bg_sp_fs_schedule_viewer_highlight_g2

0xb6c1,	// (0x00064b7c) bg_sp_fs_schedule_viewer_highlight_g3

0xb6c9,	// (0x00064b84) bg_sp_fs_schedule_viewer_highlight_g4

0xb90a,	// (0x00064dc5) bg_sp_fs_schedule_viewer_highlight_g5

0xb6d9,	// (0x00064b94) bg_sp_fs_schedule_viewer_highlight_g6

0xb6e1,	// (0x00064b9c) bg_sp_fs_schedule_viewer_highlight_g7

0xb6e9,	// (0x00064ba4) bg_sp_fs_schedule_viewer_highlight_g8

0xa5b5,	// (0x00063a70) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfccc,	// (0x00069187) bg_sp_fs_schedule_viewer_highlight_g

0x0d7f,	// (0x0005a23a) bg_main_sp_fs_ribbon_pane

0x8d80,	// (0x0006223b) main_sp_fs_ribbon_pane_g1

0xce4b,	// (0x00066306) main_sp_fs_ribbon_pane_t1

0x8d89,	// (0x00062244) main_sp_fs_ribbon_pane_t2

0xce5a,	// (0x00066315) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdf,	// (0x0006919a) main_sp_fs_ribbon_pane_t

0xce69,	// (0x00066324) main_sp_fs_ribbon_scheduler_pane

0xce71,	// (0x0006632c) bg_main_sp_fs_ribbon_pane_g1

0xce7a,	// (0x00066335) bg_main_sp_fs_ribbon_pane_g2

0xce83,	// (0x0006633e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce6,	// (0x000691a1) bg_main_sp_fs_ribbon_pane_g

0xce8b,	// (0x00066346) main_sp_fs_ribbon_scheduler_pane_g1

0xce94,	// (0x0006634f) main_sp_fs_ribbon_scheduler_pane_g2

0xce9d,	// (0x00066358) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfced,	// (0x000691a8) main_sp_fs_ribbon_scheduler_pane_g

0xcea6,	// (0x00066361) list_cale_mrui_pane

0x8d98,	// (0x00062253) sp_fs_scroll_pane_cp07_ParamLimits

0x8d98,	// (0x00062253) sp_fs_scroll_pane_cp07

0x8dae,	// (0x00062269) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8dae,	// (0x00062269) bg_sp_fs_schedule_viewer_highlight

0xceaf,	// (0x0006636a) list_single_sp_fs_schedule_track_pane_cp01

0xceb7,	// (0x00066372) list_sp_fs_schedule_track_pane

0xcebf,	// (0x0006637a) sp_fs_scroll_pane_cp06_ParamLimits

0xcebf,	// (0x0006637a) sp_fs_scroll_pane_cp06

0xebe5,	// (0x000680a0) bgmain_sp_fs_calendar_pane_g1

0x8dc0,	// (0x0006227b) list_single_cale_mrui_pane_ParamLimits

0x8dc0,	// (0x0006227b) list_single_cale_mrui_pane

0xced1,	// (0x0006638c) list_single_cale_mrui_row_pane_ParamLimits

0xced1,	// (0x0006638c) list_single_cale_mrui_row_pane

0xcede,	// (0x00066399) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcede,	// (0x00066399) list_single_cale_mrui_row_pane_g1

0xcf16,	// (0x000663d1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcf16,	// (0x000663d1) list_single_cale_mrui_row_pane_t1

0x8de6,	// (0x000622a1) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8de6,	// (0x000622a1) list_single_cale_mrui_row_pane_t2

0xcf28,	// (0x000663e3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcf28,	// (0x000663e3) list_single_cale_mrui_row_pane_t3

0xcf57,	// (0x00066412) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcf57,	// (0x00066412) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcf9,	// (0x000691b4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcf9,	// (0x000691b4) list_single_cale_mrui_row_pane_t

0x8e4c,	// (0x00062307) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e4c,	// (0x00062307) list_single_cmail_header_editor_pane_bg_cp01

0x8e70,	// (0x0006232b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e70,	// (0x0006232b) list_single_cmail_header_editor_pane_bg_cp02

0x8e8c,	// (0x00062347) main_radioblah_text_pane_t1_ParamLimits

0x8e8c,	// (0x00062347) main_radioblah_text_pane_t1

0xcf86,	// (0x00066441) cam6_indi_pane_cp01

0xcf8e,	// (0x00066449) cam6_mode_pane_cp01

0xcf96,	// (0x00066451) cam6_pano_pane

0xcf9f,	// (0x0006645a) cam6_zoom_pane_cp01

0xcfa9,	// (0x00066464) cam6_pano_image_pane

0xcfb2,	// (0x0006646d) cam6_pano_pane_g1

0xc4f3,	// (0x000659ae) cam6_pano_pane_g2

0xcfbb,	// (0x00066476) cam6_pano_pane_g3

0xcfc4,	// (0x0006647f) cam6_pano_pane_g4

0x5a8d,	// (0x0005ef48) cam6_pano_pane_g5

0xcfcd,	// (0x00066488) cam6_pano_pane_g6

0xcfd5,	// (0x00066490) cam6_pano_pane_g7

0xcfdd,	// (0x00066498) cam6_pano_pane_g8

0xcfe6,	// (0x000664a1) cam6_pano_pane_g9

0x0008,

0xfd02,	// (0x000691bd) cam6_pano_pane_g

0x0d7f,	// (0x0005a23a) main_browser_tag_pane

0xcd28,	// (0x000661e3) grid_navstr_albumart_pane

0xcff1,	// (0x000664ac) cell_navstr_albumart_pane_ParamLimits

0xcff1,	// (0x000664ac) cell_navstr_albumart_pane

0xd00d,	// (0x000664c8) cell_navstr_albumart_pane_g1

0xe583,	// (0x00067a3e) cell_navstr_albumart_pane_g2

0xe593,	// (0x00067a4e) cell_navstr_albumart_pane_g3

0xe58b,	// (0x00067a46) cell_navstr_albumart_pane_g4

0x0003,

0xfd15,	// (0x000691d0) cell_navstr_albumart_pane_g

0x8ea7,	// (0x00062362) bt_list_pane_ParamLimits

0x8ea7,	// (0x00062362) bt_list_pane

0x8ebd,	// (0x00062378) bt_list_pane_t1

0x8ecc,	// (0x00062387) bt_list_pane_t2

0x0001,

0xfd1e,	// (0x000691d9) bt_list_pane_t

0x0d7f,	// (0x0005a23a) main_cale_prevew_pane

0x8edb,	// (0x00062396) popup_cale_preview_window_ParamLimits

0x8edb,	// (0x00062396) popup_cale_preview_window

0x9970,	// (0x00062e2b) bg_popup_preview_window_pane_cp05_ParamLimits

0x9970,	// (0x00062e2b) bg_popup_preview_window_pane_cp05

0xd015,	// (0x000664d0) list_cale_preview_pane_ParamLimits

0xd015,	// (0x000664d0) list_cale_preview_pane

0x8ef6,	// (0x000623b1) list_double_cale_preview_pane_ParamLimits

0x8ef6,	// (0x000623b1) list_double_cale_preview_pane

0x8f0a,	// (0x000623c5) list_single_cale_preview_pane_ParamLimits

0x8f0a,	// (0x000623c5) list_single_cale_preview_pane

0x8f22,	// (0x000623dd) list_single_cale_preview_pane_g1

0x8f2a,	// (0x000623e5) list_single_cale_preview_pane_t1_ParamLimits

0x8f2a,	// (0x000623e5) list_single_cale_preview_pane_t1

0x8f3f,	// (0x000623fa) list_double_cale_preview_pane_g1

0x8f47,	// (0x00062402) list_double_cale_preview_pane_t1_ParamLimits

0x8f47,	// (0x00062402) list_double_cale_preview_pane_t1

0x8f5c,	// (0x00062417) list_double_cale_preview_pane_t2_ParamLimits

0x8f5c,	// (0x00062417) list_double_cale_preview_pane_t2

0x0001,

0xfd23,	// (0x000691de) list_double_cale_preview_pane_t_ParamLimits

0xfd23,	// (0x000691de) list_double_cale_preview_pane_t

0x0d7f,	// (0x0005a23a) main_ezdial_pane

0x9970,	// (0x00062e2b) main_sp_fs_email_pane_ParamLimits

0x866c,	// (0x00061b27) cmail_ddmenu_btn01_pane_ParamLimits

0x866c,	// (0x00061b27) cmail_ddmenu_btn01_pane

0x867f,	// (0x00061b3a) cmail_ddmenu_btn02_pane_ParamLimits

0x867f,	// (0x00061b3a) cmail_ddmenu_btn02_pane

0x86a2,	// (0x00061b5d) cmail_ddmenu_btn03_pane_ParamLimits

0x86a2,	// (0x00061b5d) cmail_ddmenu_btn03_pane

0x86c6,	// (0x00061b81) main_sp_fs_ctrlbar_pane_ParamLimits

0x86ea,	// (0x00061ba5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b66,	// (0x00062021) list_cmail_body_pane_ParamLimits

0xcc4c,	// (0x00066107) bg_button_pane_cp12

0xcc61,	// (0x0006611c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcc61,	// (0x0006611c) list_single_cmail_header_detail_pane_g3

0x8bf8,	// (0x000620b3) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8bf8,	// (0x000620b3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca8,	// (0x00069163) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca8,	// (0x00069163) list_single_cmail_header_detail_pane_t

0xcd90,	// (0x0006624b) phacti_term_pane_t2_ParamLimits

0xcd90,	// (0x0006624b) phacti_term_pane_t2

0x0001,

0xfcb2,	// (0x0006916d) phacti_term_pane_t_ParamLimits

0xfcb2,	// (0x0006916d) phacti_term_pane_t

0xd021,	// (0x000664dc) aid_size_list_single_double

0x8f74,	// (0x0006242f) popup_ezdial_listscroll_window

0x8f90,	// (0x0006244b) popup_number_entry_window_cp01

0xacba,	// (0x00064175) bg_popup_call_pane_cp09

0xd02d,	// (0x000664e8) ezdial_list_pane

0xd035,	// (0x000664f0) scroll_pane_cp23

0xe76a,	// (0x00067c25) bg_button_pane_cp028_ParamLimits

0xe76a,	// (0x00067c25) bg_button_pane_cp028

0x8f9e,	// (0x00062459) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f9e,	// (0x00062459) cmail_ddmenu_btn01_pane_g1

0x8faa,	// (0x00062465) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8faa,	// (0x00062465) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd28,	// (0x000691e3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd28,	// (0x000691e3) cmail_ddmenu_btn01_pane_g

0xd03d,	// (0x000664f8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd03d,	// (0x000664f8) cmail_ddmenu_btn01_pane_t1

0xe76a,	// (0x00067c25) bg_button_pane_cp029_ParamLimits

0xe76a,	// (0x00067c25) bg_button_pane_cp029

0x8fb6,	// (0x00062471) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fb6,	// (0x00062471) cmail_ddmenu_btn02_pane_g1

0x8fce,	// (0x00062489) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fce,	// (0x00062489) cmail_ddmenu_btn02_pane_t1

0x9970,	// (0x00062e2b) bg_button_pane_cp031_ParamLimits

0x9970,	// (0x00062e2b) bg_button_pane_cp031

0x8fb6,	// (0x00062471) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fb6,	// (0x00062471) cmail_ddmenu_btn03_pane_g1

0x8fce,	// (0x00062489) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fce,	// (0x00062489) cmail_ddmenu_btn03_pane_t1

0x6229,	// (0x0005f6e4) cell_dialer2_keypad_pane_t1_ParamLimits

0x6243,	// (0x0005f6fe) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6243,	// (0x0005f6fe) cell_dialer2_keypad_pane_t1_copy1

0x7f5f,	// (0x0006141a) ncimui_group_button_pane

0x9970,	// (0x00062e2b) main_sp_fs_calendar_pane_ParamLimits

0x8b7e,	// (0x00062039) list_single_cmail_header_caption_pane_ParamLimits

0xbc69,	// (0x00065124) aid_recal_txt_sm_pane

0x0d7f,	// (0x0005a23a) mian_recal_day_pane

0xce11,	// (0x000662cc) popup_sp_fs_cale_preview_window_ParamLimits

0x0d7f,	// (0x0005a23a) list_recal_day_pane

0xd06b,	// (0x00066526) list_single_recal_day_pane_ParamLimits

0xd06b,	// (0x00066526) list_single_recal_day_pane

0xd07d,	// (0x00066538) list_single_recal_day_pane_g1_ParamLimits

0xd07d,	// (0x00066538) list_single_recal_day_pane_g1

0xd089,	// (0x00066544) list_single_recal_day_pane_g2_ParamLimits

0xd089,	// (0x00066544) list_single_recal_day_pane_g2

0xd095,	// (0x00066550) list_single_recal_day_pane_g3_ParamLimits

0xd095,	// (0x00066550) list_single_recal_day_pane_g3

0x8ff2,	// (0x000624ad) list_single_recal_day_pane_g4_ParamLimits

0x8ff2,	// (0x000624ad) list_single_recal_day_pane_g4

0xd0a1,	// (0x0006655c) list_single_recal_day_pane_g5_ParamLimits

0xd0a1,	// (0x0006655c) list_single_recal_day_pane_g5

0xd0ad,	// (0x00066568) list_single_recal_day_pane_g6_ParamLimits

0xd0ad,	// (0x00066568) list_single_recal_day_pane_g6

0x0005,

0xfd37,	// (0x000691f2) list_single_recal_day_pane_g_ParamLimits

0xfd37,	// (0x000691f2) list_single_recal_day_pane_g

0xd0b9,	// (0x00066574) list_single_recal_day_pane_t1

0xd0c7,	// (0x00066582) list_single_recal_day_pane_t2

0x0001,

0xfd44,	// (0x000691ff) list_single_recal_day_pane_t

0x9000,	// (0x000624bb) ncimui_query_button_pane_ParamLimits

0x9000,	// (0x000624bb) ncimui_query_button_pane

0x9010,	// (0x000624cb) ncimui_query_button_pane_t1_ParamLimits

0x9010,	// (0x000624cb) ncimui_query_button_pane_t1

0xd0d5,	// (0x00066590) ncimui_query_button_pane_t2_ParamLimits

0xd0d5,	// (0x00066590) ncimui_query_button_pane_t2

0x0001,

0xfd49,	// (0x00069204) ncimui_query_button_pane_t_ParamLimits

0xfd49,	// (0x00069204) ncimui_query_button_pane_t

0x9023,	// (0x000624de) query_button_pane_ParamLimits

0x9023,	// (0x000624de) query_button_pane

0x0d7f,	// (0x0005a23a) bg_button_pane_cp0028

0xd0e8,	// (0x000665a3) query_button_pane_t1

0x3f05,	// (0x0005d3c0) main_tport_pane_ParamLimits

0x8a4c,	// (0x00061f07) bg_popup_window_pane_cp01_ParamLimits

0x8a4c,	// (0x00061f07) bg_popup_window_pane_cp01

0x8a62,	// (0x00061f1d) heading_pane_cp08_ParamLimits

0x8a62,	// (0x00061f1d) heading_pane_cp08

0x8a73,	// (0x00061f2e) heading_pane_cp07_ParamLimits

0x8a73,	// (0x00061f2e) heading_pane_cp07

0xcc17,	// (0x000660d2) cell_tport_appsw_pane_g2

0x0002,

0xfc95,	// (0x00069150) cell_tport_appsw_pane_g

0x344e,	// (0x0005c909) input_candi_list_open_g1

0xa79e,	// (0x00063c59) list_cale_time_pane_g6_ParamLimits

0xa79e,	// (0x00063c59) list_cale_time_pane_g6

0x4cf3,	// (0x0005e1ae) aid_size_touch_calib_1_ParamLimits

0x4cf3,	// (0x0005e1ae) aid_size_touch_calib_1

0x4cff,	// (0x0005e1ba) aid_size_touch_calib_2_ParamLimits

0x4cff,	// (0x0005e1ba) aid_size_touch_calib_2

0x4d15,	// (0x0005e1d0) aid_size_touch_calib_3_ParamLimits

0x4d15,	// (0x0005e1d0) aid_size_touch_calib_3

0x4d33,	// (0x0005e1ee) aid_size_touch_calib_4_ParamLimits

0x4d33,	// (0x0005e1ee) aid_size_touch_calib_4

0x4d49,	// (0x0005e204) main_touch_calib_button_group_pane_ParamLimits

0x4d49,	// (0x0005e204) main_touch_calib_button_group_pane

0x4d60,	// (0x0005e21b) main_touch_calib_pane_g1_ParamLimits

0x4d6c,	// (0x0005e227) main_touch_calib_pane_g2_ParamLimits

0x4d78,	// (0x0005e233) main_touch_calib_pane_g3_ParamLimits

0x4d84,	// (0x0005e23f) main_touch_calib_pane_g4_ParamLimits

0xf67a,	// (0x00068b35) main_touch_calib_pane_g_ParamLimits

0x4d90,	// (0x0005e24b) main_touch_calib_pane_t1_ParamLimits

0x4daa,	// (0x0005e265) main_touch_calib_pane_t2_ParamLimits

0x4dc4,	// (0x0005e27f) main_touch_calib_pane_t3_ParamLimits

0x4dd8,	// (0x0005e293) main_touch_calib_pane_t4_ParamLimits

0x4dec,	// (0x0005e2a7) main_touch_calib_pane_t5_ParamLimits

0xf683,	// (0x00068b3e) main_touch_calib_pane_t_ParamLimits

0xef1b,	// (0x000683d6) list_single_fp_cale_pane_g3_ParamLimits

0xef1b,	// (0x000683d6) list_single_fp_cale_pane_g3

0xd90d,	// (0x00066dc8) bg_button_pane_cp012_ParamLimits

0xd90d,	// (0x00066dc8) bg_vkb2_func_pane_cp03_ParamLimits

0x71fd,	// (0x000606b8) cell_vitu2_function_top_pane_g1_ParamLimits

0xd90d,	// (0x00066dc8) bg_vkb2_func_pane_cp04_ParamLimits

0x7f13,	// (0x000613ce) main_ncimui_button_group_pane_ParamLimits

0x7f13,	// (0x000613ce) main_ncimui_button_group_pane

0x7f4d,	// (0x00061408) main_ncimui_pane_t3_ParamLimits

0x7f4d,	// (0x00061408) main_ncimui_pane_t3

0xcd3e,	// (0x000661f9) phacti_button_group_pane

0xd021,	// (0x000664dc) aid_size_list_single_double_ParamLimits

0x8f74,	// (0x0006242f) popup_ezdial_listscroll_window_ParamLimits

0x8f90,	// (0x0006244b) popup_number_entry_window_cp01_ParamLimits

0x9036,	// (0x000624f1) phacti_button_pane_ParamLimits

0x9036,	// (0x000624f1) phacti_button_pane

0x0d7f,	// (0x0005a23a) bg_button_pane_cp14

0xd0f6,	// (0x000665b1) phacti_button_pane_t1

0x9047,	// (0x00062502) main_touch_calib_button_pane_ParamLimits

0x9047,	// (0x00062502) main_touch_calib_button_pane

0xa0e3,	// (0x0006359e) bg_button_pane_cp18_ParamLimits

0xa0e3,	// (0x0006359e) bg_button_pane_cp18

0xd104,	// (0x000665bf) main_touch_calib_button_pane_t1_ParamLimits

0xd104,	// (0x000665bf) main_touch_calib_button_pane_t1

0xd11a,	// (0x000665d5) main_touch_calib_button_pane_t2_ParamLimits

0xd11a,	// (0x000665d5) main_touch_calib_button_pane_t2

0x0001,

0xfd4e,	// (0x00069209) main_touch_calib_button_pane_t_ParamLimits

0xfd4e,	// (0x00069209) main_touch_calib_button_pane_t

0x0d7f,	// (0x0005a23a) cell_ncimui_button_pane

0x0d7f,	// (0x0005a23a) bg_button_pane_cp032

0xd138,	// (0x000665f3) cell_ncimui_button_pane_t1

0xd830,	// (0x00066ceb) image3_infobar_pane_ParamLimits

0xd830,	// (0x00066ceb) image3_infobar_pane

0x82e6,	// (0x000617a1) fs_bigclock_status_pane_ParamLimits

0x82e6,	// (0x000617a1) fs_bigclock_status_pane

0x82f3,	// (0x000617ae) main_fs_bigclock_clock_pane_ParamLimits

0x82f3,	// (0x000617ae) main_fs_bigclock_clock_pane

0x8306,	// (0x000617c1) main_fs_bigclock_indi_pane_ParamLimits

0x8306,	// (0x000617c1) main_fs_bigclock_indi_pane

0x8321,	// (0x000617dc) main_fs_bigclock_swipe_pane_ParamLimits

0x8321,	// (0x000617dc) main_fs_bigclock_swipe_pane

0x0d7f,	// (0x0005a23a) main_fs_clock_dumped_data

0xc600,	// (0x00065abb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc600,	// (0x00065abb) list_single_fs_bigclock_indicator_pane_g1

0xc620,	// (0x00065adb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc620,	// (0x00065adb) list_single_fs_bigclock_indicator_pane_g2

0xc63a,	// (0x00065af5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc63a,	// (0x00065af5) list_single_fs_bigclock_indicator_pane_g3

0xc656,	// (0x00065b11) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc656,	// (0x00065b11) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb81,	// (0x0006903c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb81,	// (0x0006903c) list_single_fs_bigclock_indicator_pane_g

0xc67c,	// (0x00065b37) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc67c,	// (0x00065b37) list_single_fs_bigclock_indicator_pane_t1

0xc6a4,	// (0x00065b5f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc6a4,	// (0x00065b5f) list_single_fs_bigclock_indicator_pane_t2

0xc6cc,	// (0x00065b87) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc6cc,	// (0x00065b87) list_single_fs_bigclock_indicator_pane_t3

0xc6f6,	// (0x00065bb1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc6f6,	// (0x00065bb1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb8c,	// (0x00069047) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb8c,	// (0x00069047) list_single_fs_bigclock_indicator_pane_t

0xd146,	// (0x00066601) image3_infobar_fav_pane_ParamLimits

0xd146,	// (0x00066601) image3_infobar_fav_pane

0xd156,	// (0x00066611) image3_infobar_loc_pane_ParamLimits

0xd156,	// (0x00066611) image3_infobar_loc_pane

0xd16c,	// (0x00066627) image3_infobar_time_pane_ParamLimits

0xd16c,	// (0x00066627) image3_infobar_time_pane

0xebe5,	// (0x000680a0) image3_infobar_time_pane_g1

0xd17c,	// (0x00066637) image3_infobar_time_pane_t1

0xebe5,	// (0x000680a0) image3_infobar_loc_pane_g1

0xd18a,	// (0x00066645) image3_infobar_loc_pane_g2

0x0001,

0xfd53,	// (0x0006920e) image3_infobar_loc_pane_g

0xd192,	// (0x0006664d) image3_infobar_loc_pane_t1

0xebe5,	// (0x000680a0) image3_infobar_fav_pane_g1

0xd1a0,	// (0x0006665b) image3_infobar_fav_pane_g2

0x0001,

0xfd58,	// (0x00069213) image3_infobar_fav_pane_g

0xd1a8,	// (0x00066663) fs_bigclock_status_battery_pane

0xd1b1,	// (0x0006666c) fs_bigclock_status_signal_pane

0xd1ba,	// (0x00066675) fs_bigclock_status_title_pane

0xd1c3,	// (0x0006667e) fs_bigclock_status_signal_pane_g1

0xd1cc,	// (0x00066687) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5d,	// (0x00069218) fs_bigclock_status_signal_pane_g

0xd1d4,	// (0x0006668f) fs_bigclock_status_battery_pane_g1

0xd1dd,	// (0x00066698) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd62,	// (0x0006921d) fs_bigclock_status_battery_pane_g

0xd1e5,	// (0x000666a0) fs_bigclock_status_title_pane_t1

0xebe5,	// (0x000680a0) main_fs_bigclock_clock_pane_g1

0xd1f3,	// (0x000666ae) main_fs_bigclock_clock_pane_g2

0xd1f3,	// (0x000666ae) main_fs_bigclock_clock_pane_g3

0xd1f3,	// (0x000666ae) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd67,	// (0x00069222) main_fs_bigclock_clock_pane_g

0xd1ff,	// (0x000666ba) main_fs_bigclock_clock_pane_t1

0xd20d,	// (0x000666c8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd70,	// (0x0006922b) main_fs_bigclock_clock_pane_t

0xd21c,	// (0x000666d7) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd21c,	// (0x000666d7) list_single_fs_bigclock_indicator_pane

0x905c,	// (0x00062517) list_single_fs_bigclock_pane_ParamLimits

0x905c,	// (0x00062517) list_single_fs_bigclock_pane

0xd236,	// (0x000666f1) main_fs_bigclock_indicator_pane_t1

0xd245,	// (0x00066700) list_single_fs_bigclock_pane_g1

0xd24d,	// (0x00066708) list_single_fs_bigclock_pane_t1

0xebe5,	// (0x000680a0) main_fs_bigclock_swipe_pane_g1

0xd28b,	// (0x00066746) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd81,	// (0x0006923c) main_fs_bigclock_swipe_pane_g

0xd293,	// (0x0006674e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd293,	// (0x0006674e) main_fs_bigclock_swipe_pane_t1

0x2bd4,	// (0x0005c08f) call_type_pane_ParamLimits

0x0d7f,	// (0x0005a23a) main_btmg_pane

0xcf0a,	// (0x000663c5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcf0a,	// (0x000663c5) list_single_cale_mrui_row_pane_g2

0x0001,

0xfcf4,	// (0x000691af) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf4,	// (0x000691af) list_single_cale_mrui_row_pane_g

0xd05b,	// (0x00066516) list_recal_vselct_arw_lo_pane

0xd063,	// (0x0006651e) list_recal_vselct_arw_up_pane

0xbc60,	// (0x0006511b) list_recal_vselct_pane

0xd2b0,	// (0x0006676b) btmg_button_pane

0x90c2,	// (0x0006257d) main_btmg_pane_g1

0x0d7f,	// (0x0005a23a) bg_button_pane_cp044

0xd2ba,	// (0x00066775) btmg_button_pane_t1

0xe762,	// (0x00067c1d) aid_listscroll_gen

0x9970,	// (0x00062e2b) main_cntbar_detail_pane

0xcc2d,	// (0x000660e8) list_cmail_folder_pane

0xcc3d,	// (0x000660f8) sp_fs_scroll_pane_cp03_ParamLimits

0x90cc,	// (0x00062587) list_single_fs_dyc_pane_cp01_ParamLimits

0x90cc,	// (0x00062587) list_single_fs_dyc_pane_cp01

0xd2c8,	// (0x00066783) aid_size_cmail_indent

0xd2d1,	// (0x0006678c) list_single_dyc_row_pane_cp01

0x911a,	// (0x000625d5) cntbar_detail_list_pane_ParamLimits

0x911a,	// (0x000625d5) cntbar_detail_list_pane

0x916c,	// (0x00062627) main_cntbar_detail_cont_pane_ParamLimits

0x916c,	// (0x00062627) main_cntbar_detail_cont_pane

0x2af7,	// (0x0005bfb2) scroll_pane_cp032_ParamLimits

0x2af7,	// (0x0005bfb2) scroll_pane_cp032

0x9180,	// (0x0006263b) cntbar_detail_list_event_pane_ParamLimits

0x9180,	// (0x0006263b) cntbar_detail_list_event_pane

0x912c,	// (0x000625e7) cntbar_detail_list_shct_pane

0xa623,	// (0x00063ade) aid_list_gen

0xd2da,	// (0x00066795) aid_scroll

0xd2e3,	// (0x0006679e) aid_size_touch_scroll_bar

0xd2ec,	// (0x000667a7) aid_list_double

0xd2f5,	// (0x000667b0) aid_list_single

0x9190,	// (0x0006264b) aid_list_single_lg

0xd2fe,	// (0x000667b9) aid_list_z_g_a_sm

0xd306,	// (0x000667c1) aid_list_z_g_d

0xd30e,	// (0x000667c9) aid_txt_z_prm

0x9199,	// (0x00062654) aid_txt_z_prm_cp01

0x91a7,	// (0x00062662) aid_txt_z_sec

0x91b5,	// (0x00062670) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91b5,	// (0x00062670) main_cntbar_detail_cont_pane_g1

0x91c9,	// (0x00062684) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91c9,	// (0x00062684) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd86,	// (0x00069241) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd86,	// (0x00069241) main_cntbar_detail_cont_pane_g

0xd31c,	// (0x000667d7) main_cntbar_detail_cont_pane_t1

0xd32a,	// (0x000667e5) main_cntbar_detail_cont_pane_t2

0xd338,	// (0x000667f3) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8b,	// (0x00069246) main_cntbar_detail_cont_pane_t

0x91d9,	// (0x00062694) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91d9,	// (0x00062694) cell_cntbar_detail_list_shct_pane

0xd346,	// (0x00066801) cntbar_detail_list_shct_pane_g1

0xd34f,	// (0x0006680a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd92,	// (0x0006924d) cntbar_detail_list_shct_pane_g

0x91eb,	// (0x000626a6) cntbar_detail_list_event_pane_g1_ParamLimits

0x91eb,	// (0x000626a6) cntbar_detail_list_event_pane_g1

0x91f7,	// (0x000626b2) cntbar_detail_list_event_pane_g2_ParamLimits

0x91f7,	// (0x000626b2) cntbar_detail_list_event_pane_g2

0x0005,

0xfd97,	// (0x00069252) cntbar_detail_list_event_pane_g_ParamLimits

0xfd97,	// (0x00069252) cntbar_detail_list_event_pane_g

0x9265,	// (0x00062720) cntbar_detail_list_event_pane_t1_ParamLimits

0x9265,	// (0x00062720) cntbar_detail_list_event_pane_t1

0x927a,	// (0x00062735) cntbar_detail_list_event_pane_t2_ParamLimits

0x927a,	// (0x00062735) cntbar_detail_list_event_pane_t2

0x0002,

0xfda4,	// (0x0006925f) cntbar_detail_list_event_pane_t_ParamLimits

0xfda4,	// (0x0006925f) cntbar_detail_list_event_pane_t

0xebe5,	// (0x000680a0) cell_cntbar_detail_list_shct_pane_g1

0x2f78,	// (0x0005c433) navi_pane_mv_g3

0x9970,	// (0x00062e2b) main_cntbar_detail_pane_ParamLimits

0x0d7f,	// (0x0005a23a) main_notif_wgt_pane

0xd672,	// (0x00066b2d) aid_tch_main_mp4_pane_g4

0xd826,	// (0x00066ce1) popup_slider_window_cp02

0xd052,	// (0x0006650d) list_recal_day_event_pane

0x90ea,	// (0x000625a5) cntbar_detail_btn_pane_ParamLimits

0x90ea,	// (0x000625a5) cntbar_detail_btn_pane

0x9102,	// (0x000625bd) cntbar_detail_btn_pane_cp01_ParamLimits

0x9102,	// (0x000625bd) cntbar_detail_btn_pane_cp01

0x912c,	// (0x000625e7) cntbar_detail_list_shct_pane_ParamLimits

0x913c,	// (0x000625f7) cntbar_detail_pane_g1_ParamLimits

0x913c,	// (0x000625f7) cntbar_detail_pane_g1

0x9150,	// (0x0006260b) cntbar_detail_pane_t1_ParamLimits

0x9150,	// (0x0006260b) cntbar_detail_pane_t1

0x9203,	// (0x000626be) cntbar_detail_list_event_pane_g3_ParamLimits

0x9203,	// (0x000626be) cntbar_detail_list_event_pane_g3

0x921b,	// (0x000626d6) cntbar_detail_list_event_pane_g4_ParamLimits

0x921b,	// (0x000626d6) cntbar_detail_list_event_pane_g4

0x9233,	// (0x000626ee) cntbar_detail_list_event_pane_g5_ParamLimits

0x9233,	// (0x000626ee) cntbar_detail_list_event_pane_g5

0x924b,	// (0x00062706) cntbar_detail_list_event_pane_g6_ParamLimits

0x924b,	// (0x00062706) cntbar_detail_list_event_pane_g6

0x928f,	// (0x0006274a) cntbar_detail_list_event_pane_t3_ParamLimits

0x928f,	// (0x0006274a) cntbar_detail_list_event_pane_t3

0x92a1,	// (0x0006275c) popup_notif_wgt_window_ParamLimits

0x92a1,	// (0x0006275c) popup_notif_wgt_window

0x92ba,	// (0x00062775) popup_submenu_window_cp01_ParamLimits

0x92ba,	// (0x00062775) popup_submenu_window_cp01

0xacba,	// (0x00064175) bg_popup_window_pane_cp10

0xd358,	// (0x00066813) listscroll_notif_wgt_pane

0xd362,	// (0x0006681d) list_notif_wgt_window

0xd36b,	// (0x00066826) scroll_pane_cp033

0xd374,	// (0x0006682f) list_notif_wgt_row_pane_ParamLimits

0xd374,	// (0x0006682f) list_notif_wgt_row_pane

0xd388,	// (0x00066843) aid_size_list_notif_wgt_del

0xd391,	// (0x0006684c) list_notif_wgt_row_pane_g1

0xd399,	// (0x00066854) list_notif_wgt_row_pane_g2

0xd3a1,	// (0x0006685c) list_notif_wgt_row_pane_g3

0x0002,

0xfdab,	// (0x00069266) list_notif_wgt_row_pane_g

0xd3aa,	// (0x00066865) list_notif_wgt_row_pane_t1

0xd3b8,	// (0x00066873) list_notif_wgt_row_pane_t2

0xd3c6,	// (0x00066881) list_notif_wgt_row_pane_t3

0x0002,

0xfdb2,	// (0x0006926d) list_notif_wgt_row_pane_t

0xb93c,	// (0x00064df7) list_recal_day_event_pane_g1

0xd3d4,	// (0x0006688f) list_recal_day_event_pane_t1

0x0d7f,	// (0x0005a23a) bg_button_pane_cp045

0xd3e3,	// (0x0006689e) cntbar_detail_btn_pane_t1

0xe76a,	// (0x00067c25) main_callh_pane_ParamLimits

0xe76a,	// (0x00067c25) main_callh_pane

0x0d7f,	// (0x0005a23a) main_coverflow0_pane

0x0d7f,	// (0x0005a23a) main_wgtman_pane

0x832f,	// (0x000617ea) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x832f,	// (0x000617ea) main_fs_bigclock_unlock_btn_pane

0xcc0f,	// (0x000660ca) bg_button_pane_cp16

0x8b10,	// (0x00061fcb) cell_tport_appsw_pane_g3

0x92cc,	// (0x00062787) cf0_flow_pane_ParamLimits

0x92cc,	// (0x00062787) cf0_flow_pane

0xd3f1,	// (0x000668ac) listscroll_cf0_pane

0xd3fa,	// (0x000668b5) main_cf0_pane_g1

0x92e1,	// (0x0006279c) main_cf0_pane_t1_ParamLimits

0x92e1,	// (0x0006279c) main_cf0_pane_t1

0x92f9,	// (0x000627b4) main_cf0_pane_t2_ParamLimits

0x92f9,	// (0x000627b4) main_cf0_pane_t2

0x0001,

0xfdb9,	// (0x00069274) main_cf0_pane_t_ParamLimits

0xfdb9,	// (0x00069274) main_cf0_pane_t

0xd404,	// (0x000668bf) scroll_pane_cp11

0x9311,	// (0x000627cc) cf0_flow_pane_g1

0x931d,	// (0x000627d8) cf0_flow_pane_g2

0x0001,

0xfdbe,	// (0x00069279) cf0_flow_pane_g

0x9329,	// (0x000627e4) cf0_flow_pane_t1

0x0d7f,	// (0x0005a23a) main_call6_pane

0x0d7f,	// (0x0005a23a) main_calllock_pane

0x933b,	// (0x000627f6) call6_btn_grp_pane_ParamLimits

0x933b,	// (0x000627f6) call6_btn_grp_pane

0x9357,	// (0x00062812) call6_pane_g1_ParamLimits

0x9357,	// (0x00062812) call6_pane_g1

0x936d,	// (0x00062828) popup_call6_1st_window_ParamLimits

0x936d,	// (0x00062828) popup_call6_1st_window

0x937e,	// (0x00062839) popup_call6_2nd_window_ParamLimits

0x937e,	// (0x00062839) popup_call6_2nd_window

0x938f,	// (0x0006284a) cell_call6_btn_pane_ParamLimits

0x938f,	// (0x0006284a) cell_call6_btn_pane

0xacba,	// (0x00064175) bg_popup_call2_in_pane_cp03

0xd40f,	// (0x000668ca) popup_call6_1st_window_g1

0xd417,	// (0x000668d2) popup_call6_1st_window_g2

0xd41f,	// (0x000668da) popup_call6_1st_window_g3

0x0002,

0xfdc3,	// (0x0006927e) popup_call6_1st_window_g

0xd427,	// (0x000668e2) popup_call6_1st_window_t1

0xd436,	// (0x000668f1) popup_call6_1st_window_t2

0xd446,	// (0x00066901) popup_call6_1st_window_t3

0x0002,

0xfdca,	// (0x00069285) popup_call6_1st_window_t

0xacba,	// (0x00064175) bg_popup_call2_in_pane_cp04

0xd40f,	// (0x000668ca) popup_call6_2nd_window_g1

0xd417,	// (0x000668d2) popup_call6_2nd_window_g2

0xd41f,	// (0x000668da) popup_call6_2nd_window_g3

0x0002,

0xfdc3,	// (0x0006927e) popup_call6_2nd_window_g

0xd427,	// (0x000668e2) popup_call6_2nd_window_t1

0x0d7f,	// (0x0005a23a) bg_button_pane_cp15

0xd456,	// (0x00066911) cell_call6_btn_pane_g1

0xd45f,	// (0x0006691a) cell_call6_btn_pane_t1

0x93a3,	// (0x0006285e) listscroll_wgtman_pane_ParamLimits

0x93a3,	// (0x0006285e) listscroll_wgtman_pane

0x93c6,	// (0x00062881) wgtman_btn_pane_ParamLimits

0x93c6,	// (0x00062881) wgtman_btn_pane

0xab80,	// (0x0006403b) aid_scroll_copy1

0xd46e,	// (0x00066929) list_wgtman_pane

0x9409,	// (0x000628c4) wgtman_btn_pane_g1_ParamLimits

0x9409,	// (0x000628c4) wgtman_btn_pane_g1

0x9435,	// (0x000628f0) wgtman_btn_pane_t1_ParamLimits

0x9435,	// (0x000628f0) wgtman_btn_pane_t1

0xd478,	// (0x00066933) wgtman_btn_pane_t2_ParamLimits

0xd478,	// (0x00066933) wgtman_btn_pane_t2

0x0001,

0xfdd1,	// (0x0006928c) wgtman_btn_pane_t_ParamLimits

0xfdd1,	// (0x0006928c) wgtman_btn_pane_t

0xd48f,	// (0x0006694a) listrow_wgtman_pane_ParamLimits

0xd48f,	// (0x0006694a) listrow_wgtman_pane

0xd4a3,	// (0x0006695e) listrow_wgtman_pane_g1

0x9472,	// (0x0006292d) listrow_wgtman_pane_g2

0x0001,

0xfdd6,	// (0x00069291) listrow_wgtman_pane_g

0xd4ac,	// (0x00066967) listrow_wgtman_pane_t1

0xd4ba,	// (0x00066975) listrow_wgtman_pane_t2

0x0001,

0xfddb,	// (0x00069296) listrow_wgtman_pane_t

0xd4c8,	// (0x00066983) wait_bar_pane_cp09

0xd4d0,	// (0x0006698b) main_calllock_btn_pane

0xd4da,	// (0x00066995) main_calllock_pane_g1

0x0d7f,	// (0x0005a23a) bg_button_pane_cp17

0xd4e6,	// (0x000669a1) main_calllock_btn_pane_g1

0xd4ef,	// (0x000669aa) main_calllock_btn_pane_t1

0x0d7f,	// (0x0005a23a) main_dialer3_pane

0x0d7f,	// (0x0005a23a) main_fmrd2_pane

0xebe5,	// (0x000680a0) main_fs_bigclock_unlock_btn_pane_g1

0xd506,	// (0x000669c1) main_fs_bigclock_unlock_btn_pane_t1

0x947c,	// (0x00062937) area_fmrd2_info_pane_ParamLimits

0x947c,	// (0x00062937) area_fmrd2_info_pane

0x948f,	// (0x0006294a) area_fmrd2_visual_pane_ParamLimits

0x948f,	// (0x0006294a) area_fmrd2_visual_pane

0x949d,	// (0x00062958) fmrd2_indi_pane_ParamLimits

0x949d,	// (0x00062958) fmrd2_indi_pane

0x94aa,	// (0x00062965) area_fmrd2_visual_pane_g1

0x94b2,	// (0x0006296d) area_fmrd2_visual_pane_t1

0x94c2,	// (0x0006297d) area_fmrd2_visual_pane_t2

0x94d2,	// (0x0006298d) area_fmrd2_visual_pane_t3

0x0002,

0xfde5,	// (0x000692a0) area_fmrd2_visual_pane_t

0x94e2,	// (0x0006299d) area_fmrd2_info_pane_g1

0x94ea,	// (0x000629a5) area_fmrd2_info_pane_t1

0x94fa,	// (0x000629b5) area_fmrd2_info_pane_t2

0x950a,	// (0x000629c5) area_fmrd2_info_pane_t3

0x951a,	// (0x000629d5) area_fmrd2_info_pane_t4

0x0003,

0xfdec,	// (0x000692a7) area_fmrd2_info_pane_t

0x952a,	// (0x000629e5) fmrd2_indi_pane_t1

0x953a,	// (0x000629f5) fmrd2_indi_pane_t2

0x954a,	// (0x00062a05) fmrd2_indi_pane_t3

0x0002,

0xfdf5,	// (0x000692b0) fmrd2_indi_pane_t

0xc665,	// (0x00065b20) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc665,	// (0x00065b20) list_single_fs_bigclock_indicator_pane_g5

0xc70b,	// (0x00065bc6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc70b,	// (0x00065bc6) list_single_fs_bigclock_indicator_pane_t5

0x8cda,	// (0x00062195) aid_cell_bcale_month_pane_ParamLimits

0x8cda,	// (0x00062195) aid_cell_bcale_month_pane

0x8cec,	// (0x000621a7) bcale_month_pane_ParamLimits

0x8cec,	// (0x000621a7) bcale_month_pane

0x8d04,	// (0x000621bf) bcale_preview_pane_ParamLimits

0x8d04,	// (0x000621bf) bcale_preview_pane

0xd24d,	// (0x00066708) list_single_fs_bigclock_pane_t1_ParamLimits

0xd267,	// (0x00066722) list_single_fs_bigclock_pane_t2_ParamLimits

0xd267,	// (0x00066722) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7c,	// (0x00069237) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x00069237) list_single_fs_bigclock_pane_t

0xd4fe,	// (0x000669b9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfde0,	// (0x0006929b) main_fs_bigclock_unlock_btn_pane_g

0x955a,	// (0x00062a15) aid_dia3_key_size_ParamLimits

0x955a,	// (0x00062a15) aid_dia3_key_size

0x9569,	// (0x00062a24) aid_dia3_listrow_size_ParamLimits

0x9569,	// (0x00062a24) aid_dia3_listrow_size

0x9577,	// (0x00062a32) dia3_keypad_fun_pane_ParamLimits

0x9577,	// (0x00062a32) dia3_keypad_fun_pane

0x9593,	// (0x00062a4e) dia3_keypad_num_pane_ParamLimits

0x9593,	// (0x00062a4e) dia3_keypad_num_pane

0x95ac,	// (0x00062a67) dia3_listscroll_pane_ParamLimits

0x95ac,	// (0x00062a67) dia3_listscroll_pane

0x95c1,	// (0x00062a7c) dia3_numentry_pane_ParamLimits

0x95c1,	// (0x00062a7c) dia3_numentry_pane

0xd514,	// (0x000669cf) dia3_list_pane

0xd51f,	// (0x000669da) scroll_pane_cp12

0x0d7f,	// (0x0005a23a) bg_dia3_numentry_pane

0xd52a,	// (0x000669e5) dia3_numentry_pane_t1

0x95d4,	// (0x00062a8f) cell_dia3_key_num_pane

0x95dc,	// (0x00062a97) cell_dia3_key0_fun_pane_ParamLimits

0x95dc,	// (0x00062a97) cell_dia3_key0_fun_pane

0x95f0,	// (0x00062aab) cell_dia3_key1_fun_pane_ParamLimits

0x95f0,	// (0x00062aab) cell_dia3_key1_fun_pane

0x9608,	// (0x00062ac3) dia3_listrow_pane

0xc37d,	// (0x00065838) bg_dia3_numentry_pane_g1

0x0d7f,	// (0x0005a23a) bg_button_pane_cp21

0xd539,	// (0x000669f4) cell_dia3_key_num_pane_t1

0xd547,	// (0x00066a02) cell_dia3_key_num_pane_t2

0xd556,	// (0x00066a11) cell_dia3_key_num_pane_t3

0xd565,	// (0x00066a20) cell_dia3_key_num_pane_t4

0x0003,

0xfdfc,	// (0x000692b7) cell_dia3_key_num_pane_t

0x0d7f,	// (0x0005a23a) bg_button_pane_cp19

0x961a,	// (0x00062ad5) cell_dia3_key0_fun_pane_g1

0x0d7f,	// (0x0005a23a) bg_button_pane_cp20

0x9622,	// (0x00062add) cell_dia3_key1_fun_pane_g1

0x962a,	// (0x00062ae5) area_left_week_number_pane

0x9633,	// (0x00062aee) area_top_day_name_pane

0x963c,	// (0x00062af7) frame_month_view_pane

0x9648,	// (0x00062b03) grid_month_view_pane

0x9652,	// (0x00062b0d) cell_top_day_name_pane_ParamLimits

0x9652,	// (0x00062b0d) cell_top_day_name_pane

0x966e,	// (0x00062b29) cell_area_left_week_number_pane_ParamLimits

0x966e,	// (0x00062b29) cell_area_left_week_number_pane

0x9684,	// (0x00062b3f) cell_month_view_pane_ParamLimits

0x9684,	// (0x00062b3f) cell_month_view_pane

0xd574,	// (0x00066a2f) frm_month_g1

0x96a5,	// (0x00062b60) frm_month_g2

0x96af,	// (0x00062b6a) frm_month_g3

0x96b9,	// (0x00062b74) frm_month_g4

0x96c3,	// (0x00062b7e) frm_month_g5

0x96cd,	// (0x00062b88) frm_month_g6

0x96d9,	// (0x00062b94) frm_month_g7

0xd57d,	// (0x00066a38) frm_month_g8

0x96e5,	// (0x00062ba0) frm_month_g9

0x96ee,	// (0x00062ba9) frm_month_g10

0x96f7,	// (0x00062bb2) frm_month_g11

0x9700,	// (0x00062bbb) frm_month_g12

0x9709,	// (0x00062bc4) frm_month_g13

0x9712,	// (0x00062bcd) frm_month_g14

0x971d,	// (0x00062bd8) frm_month_g15

0x9728,	// (0x00062be3) frm_month_g16

0x000f,

0xfe05,	// (0x000692c0) frm_month_g

0x9733,	// (0x00062bee) cell_top_day_name_pane_t1

0x9742,	// (0x00062bfd) cell_area_left_week_number_pane_g1

0x9733,	// (0x00062bee) cell_area_left_week_number_pane_t1

0xebe5,	// (0x000680a0) cell_month_view_pane_g1

0x974a,	// (0x00062c05) cell_month_view_pane_t1

0x0d7f,	// (0x0005a23a) main_fps_pane

0xc95a,	// (0x00065e15) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc95a,	// (0x00065e15) cmail_ddmenu_btn02_pane_cp1

0xc976,	// (0x00065e31) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc976,	// (0x00065e31) cmail_ddmenu_btn02_pane_cp2

0x8fc2,	// (0x0006247d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fc2,	// (0x0006247d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2d,	// (0x000691e8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2d,	// (0x000691e8) cmail_ddmenu_btn02_pane_g

0x8fe0,	// (0x0006249b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8fe0,	// (0x0006249b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd32,	// (0x000691ed) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd32,	// (0x000691ed) cmail_ddmenu_btn02_pane_t

0x9759,	// (0x00062c14) fps_text_pane_ParamLimits

0x9759,	// (0x00062c14) fps_text_pane

0x9770,	// (0x00062c2b) main_fps_pane_g1_ParamLimits

0x9770,	// (0x00062c2b) main_fps_pane_g1

0x9788,	// (0x00062c43) wait_bar_pane_cp010_ParamLimits

0x9788,	// (0x00062c43) wait_bar_pane_cp010

0x979b,	// (0x00062c56) fps_text_pane_t1_ParamLimits

0x979b,	// (0x00062c56) fps_text_pane_t1

0x66a5,	// (0x0005fb60) cam4_image_uncrop_pane_g1

0x66ae,	// (0x0005fb69) cam4_image_uncrop_pane_g2

0x66b9,	// (0x0005fb74) cam4_image_uncrop_pane_g3

0x66c2,	// (0x0005fb7d) cam4_image_uncrop_pane_g4

0x0003,

0xf806,	// (0x00068cc1) cam4_image_uncrop_pane_g

0x9608,	// (0x00062ac3) dia3_listrow_pane_ParamLimits

0x0d7f,	// (0x0005a23a) main_phob2_pane

0x8ad7,	// (0x00061f92) cell_tport_appsw_pane_cp02_ParamLimits

0x8ad7,	// (0x00061f92) cell_tport_appsw_pane_cp02

0x8aeb,	// (0x00061fa6) cell_tport_appsw_pane_cp03_ParamLimits

0x8aeb,	// (0x00061fa6) cell_tport_appsw_pane_cp03

0x0d7f,	// (0x0005a23a) phob2_contact_card_pane

0x0d7f,	// (0x0005a23a) phob2_listscroll_pane

0xd586,	// (0x00066a41) phob2_list_pane

0xd58e,	// (0x00066a49) scroll_pane_cp034

0x97b3,	// (0x00062c6e) phob2_cc_data_pane_ParamLimits

0x97b3,	// (0x00062c6e) phob2_cc_data_pane

0x97d4,	// (0x00062c8f) phob2_cc_listscroll_pane_ParamLimits

0x97d4,	// (0x00062c8f) phob2_cc_listscroll_pane

0x97f6,	// (0x00062cb1) list_double_large_graphic_phob2_pane_ParamLimits

0x97f6,	// (0x00062cb1) list_double_large_graphic_phob2_pane

0x980b,	// (0x00062cc6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x980b,	// (0x00062cc6) list_double_large_graphic_phob2_pane_g1

0x9818,	// (0x00062cd3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9818,	// (0x00062cd3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe26,	// (0x000692e1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe26,	// (0x000692e1) list_double_large_graphic_phob2_pane_g

0x9824,	// (0x00062cdf) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9824,	// (0x00062cdf) list_double_large_graphic_phob2_pane_t1

0x9839,	// (0x00062cf4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9839,	// (0x00062cf4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe2b,	// (0x000692e6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe2b,	// (0x000692e6) list_double_large_graphic_phob2_pane_t

0x0d7f,	// (0x0005a23a) list_highlight_pane_cp024

0xd596,	// (0x00066a51) phob2_cc_button_pane

0x984b,	// (0x00062d06) phob2_cc_data_pane_g1_ParamLimits

0x984b,	// (0x00062d06) phob2_cc_data_pane_g1

0x9861,	// (0x00062d1c) phob2_cc_data_pane_g2_ParamLimits

0x9861,	// (0x00062d1c) phob2_cc_data_pane_g2

0x0001,

0xfe30,	// (0x000692eb) phob2_cc_data_pane_g_ParamLimits

0xfe30,	// (0x000692eb) phob2_cc_data_pane_g

0x9875,	// (0x00062d30) phob2_cc_data_pane_t1_ParamLimits

0x9875,	// (0x00062d30) phob2_cc_data_pane_t1

0x988f,	// (0x00062d4a) phob2_cc_data_pane_t2_ParamLimits

0x988f,	// (0x00062d4a) phob2_cc_data_pane_t2

0x98a9,	// (0x00062d64) phob2_cc_data_pane_t3_ParamLimits

0x98a9,	// (0x00062d64) phob2_cc_data_pane_t3

0x0002,

0xfe35,	// (0x000692f0) phob2_cc_data_pane_t_ParamLimits

0xfe35,	// (0x000692f0) phob2_cc_data_pane_t

0xd59e,	// (0x00066a59) phob2_cc_list_pane_ParamLimits

0xd59e,	// (0x00066a59) phob2_cc_list_pane

0xb9d5,	// (0x00064e90) scroll_pane_cp035_ParamLimits

0xb9d5,	// (0x00064e90) scroll_pane_cp035

0x9970,	// (0x00062e2b) bg_button_pane_cp033

0xd5aa,	// (0x00066a65) phob2_cc_button_pane_g1

0xd5b6,	// (0x00066a71) phob2_cc_button_pane_t1

0xd5cb,	// (0x00066a86) phob2_cc_button_pane_t2

0x0001,

0xfe3c,	// (0x000692f7) phob2_cc_button_pane_t

0x98c3,	// (0x00062d7e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98c3,	// (0x00062d7e) list_double_large_graphic_phob2_cc_pane

0x98d8,	// (0x00062d93) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x98d8,	// (0x00062d93) list_double_large_graphic_phob2_cc_pane_g1

0x98e4,	// (0x00062d9f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x98e4,	// (0x00062d9f) list_double_large_graphic_phob2_cc_pane_g2

0x98f0,	// (0x00062dab) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x98f0,	// (0x00062dab) list_double_large_graphic_phob2_cc_pane_g3

0x98fc,	// (0x00062db7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x98fc,	// (0x00062db7) list_double_large_graphic_phob2_cc_pane_g4

0x9908,	// (0x00062dc3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9908,	// (0x00062dc3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe41,	// (0x000692fc) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe41,	// (0x000692fc) list_double_large_graphic_phob2_cc_pane_g

0x9914,	// (0x00062dcf) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9914,	// (0x00062dcf) list_double_large_graphic_phob2_cc_pane_t1

0x993d,	// (0x00062df8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x993d,	// (0x00062df8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe4c,	// (0x00069307) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe4c,	// (0x00069307) list_double_large_graphic_phob2_cc_pane_t

0xd5dd,	// (0x00066a98) list_highlight_pane_cp025_ParamLimits

0xd5dd,	// (0x00066a98) list_highlight_pane_cp025

0x9970,	// (0x00062e2b) bg_button_pane_cp033_ParamLimits

0xd5aa,	// (0x00066a65) phob2_cc_button_pane_g1_ParamLimits

0xd5b6,	// (0x00066a71) phob2_cc_button_pane_t1_ParamLimits

0xd5cb,	// (0x00066a86) phob2_cc_button_pane_t2_ParamLimits

0xfe3c,	// (0x000692f7) phob2_cc_button_pane_t_ParamLimits

0x0ffd,	// (0x0005a4b8) popup_wgtman_window

0xb7d7,	// (0x00064c92) scroll_pane_cp038

0x93eb,	// (0x000628a6) wgtman_btn_pane_cp_01_ParamLimits

0x93eb,	// (0x000628a6) wgtman_btn_pane_cp_01

0xd5eb,	// (0x00066aa6) wgtman_content_pane

0xd5f4,	// (0x00066aaf) wgtman_heading_pane

0x0d7f,	// (0x0005a23a) bg_heading_pane_cp02

0xd5fd,	// (0x00066ab8) wgtman_heading_pane_g1

0xd605,	// (0x00066ac0) wgtman_heading_pane_t1

0xd613,	// (0x00066ace) scroll_pane_cp036

0xd61b,	// (0x00066ad6) wgtman_list_pane

0xc7ed,	// (0x00065ca8) wgtman_list_pane_t1_ParamLimits

0xc7ed,	// (0x00065ca8) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
