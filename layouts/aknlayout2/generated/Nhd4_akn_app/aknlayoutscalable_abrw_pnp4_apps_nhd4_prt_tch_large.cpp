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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000996c5 };

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
0x0d8e,	// (0x0009a453) Screen

0x0d9a,	// (0x0009a45f) application_window

0x0df6,	// (0x0009a4bb) area_bottom_pane_ParamLimits

0x0df6,	// (0x0009a4bb) area_bottom_pane

0x0e4f,	// (0x0009a514) area_top_pane_ParamLimits

0x0e4f,	// (0x0009a514) area_top_pane

0x0eb3,	// (0x0009a578) call_video_uplink_pane_ParamLimits

0x0eb3,	// (0x0009a578) call_video_uplink_pane

0x0ef2,	// (0x0009a5b7) main_pane_ParamLimits

0x0ef2,	// (0x0009a5b7) main_pane

0xc98e,	// (0x000a6053) context_pane

0x43de,	// (0x0009daa3) navi_pane

0x4404,	// (0x0009dac9) popup_cale_events_window_ParamLimits

0x4404,	// (0x0009dac9) popup_cale_events_window

0xc9a1,	// (0x000a6066) popup_mup_playback_window

0x441c,	// (0x0009dae1) signal_pane

0xa8e7,	// (0x000a3fac) main_browser_pane

0xaab5,	// (0x000a417a) main_burst_pane

0x4260,	// (0x0009d925) main_calc_pane

0xc974,	// (0x000a6039) main_cale_day_pane

0x1652,	// (0x0009ad17) main_cale_month_pane

0xc974,	// (0x000a6039) main_cale_week_pane

0xaab5,	// (0x000a417a) main_call_pane

0xa5bb,	// (0x000a3c80) main_call_poc_pane

0xaab5,	// (0x000a417a) main_camera_pane

0xaab5,	// (0x000a417a) main_chi_dic_pane

0xb2c8,	// (0x000a498d) main_clock_pane

0xa5bb,	// (0x000a3c80) main_fmradio_pane

0xaab5,	// (0x000a417a) main_graph_messa_pane

0xa5bb,	// (0x000a3c80) main_help_pane

0xa8e7,	// (0x000a3fac) main_im_pane

0xa816,	// (0x000a3edb) main_image_pane_ParamLimits

0xa816,	// (0x000a3edb) main_image_pane

0xa5bb,	// (0x000a3c80) main_location2_pane

0xaab5,	// (0x000a417a) main_location_pane

0xa816,	// (0x000a3edb) main_messa_pane

0xa5bb,	// (0x000a3c80) main_mp2_pane

0xaab5,	// (0x000a417a) main_mp_pane

0xa5bb,	// (0x000a3c80) main_msg_pane

0xa5bb,	// (0x000a3c80) main_mup_eq_pane

0xa5bb,	// (0x000a3c80) main_mup_pane

0xa8e7,	// (0x000a3fac) main_notes_pane

0xa5bb,	// (0x000a3c80) main_pec_pane

0xa5bb,	// (0x000a3c80) main_phob_pane

0xa5bb,	// (0x000a3c80) main_pinb_pane

0xa5bb,	// (0x000a3c80) main_postcard_pane

0xa5bb,	// (0x000a3c80) main_qdial_pane

0xaab5,	// (0x000a417a) main_skin_pane

0xa5bb,	// (0x000a3c80) main_smil2_pane

0xaab5,	// (0x000a417a) main_smil_pane

0xaab5,	// (0x000a417a) main_video_pane

0xaab5,	// (0x000a417a) main_video_tele_pane

0xa816,	// (0x000a3edb) main_viewer_pane_ParamLimits

0xa816,	// (0x000a3edb) main_viewer_pane

0xaab5,	// (0x000a417a) main_vorec_pane

0x42ac,	// (0x0009d971) popup_blid_sat_info_window_ParamLimits

0x42ac,	// (0x0009d971) popup_blid_sat_info_window

0x42cc,	// (0x0009d991) popup_dyc_status_message_window_ParamLimits

0x42cc,	// (0x0009d991) popup_dyc_status_message_window

0x42da,	// (0x0009d99f) popup_grid_large_graphic_window_ParamLimits

0x42da,	// (0x0009d99f) popup_grid_large_graphic_window

0x4369,	// (0x0009da2e) popup_loc_request_window_ParamLimits

0x4369,	// (0x0009da2e) popup_loc_request_window

0x43b6,	// (0x0009da7b) popup_wml_address_window_ParamLimits

0x43b6,	// (0x0009da7b) popup_wml_address_window

0x4138,	// (0x0009d7fd) call_muted_g1

0x3df4,	// (0x0009d4b9) popup_call_audio_conf_window_ParamLimits

0x3df4,	// (0x0009d4b9) popup_call_audio_conf_window

0x4148,	// (0x0009d80d) popup_call_audio_first_window_ParamLimits

0x4148,	// (0x0009d80d) popup_call_audio_first_window

0x4188,	// (0x0009d84d) popup_call_audio_in_window_ParamLimits

0x4188,	// (0x0009d84d) popup_call_audio_in_window

0x41ac,	// (0x0009d871) popup_call_audio_out_window_ParamLimits

0x41ac,	// (0x0009d871) popup_call_audio_out_window

0x41ce,	// (0x0009d893) popup_call_audio_second_window_ParamLimits

0x41ce,	// (0x0009d893) popup_call_audio_second_window

0x41fe,	// (0x0009d8c3) popup_call_audio_wait_window_ParamLimits

0x41fe,	// (0x0009d8c3) popup_call_audio_wait_window

0x421f,	// (0x0009d8e4) popup_number_entry_window_ParamLimits

0x421f,	// (0x0009d8e4) popup_number_entry_window

0x9c47,	// (0x000a330c) bg_popup_call_pane_cp05_ParamLimits

0x9c47,	// (0x000a330c) bg_popup_call_pane_cp05

0x9c67,	// (0x000a332c) popup_number_entry_window_t1

0x9c7a,	// (0x000a333f) popup_number_entry_window_t2

0x9c8c,	// (0x000a3351) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000a878b) popup_number_entry_window_t

0x9c9e,	// (0x000a3363) text_title_cp2

0x9cb1,	// (0x000a3376) bg_popup_call_pane_cp_ParamLimits

0x9cb1,	// (0x000a3376) bg_popup_call_pane_cp

0x9cbf,	// (0x000a3384) call_thumbnail_pane

0x9cc7,	// (0x000a338c) popup_call_audio_in_window_g1_ParamLimits

0x9cc7,	// (0x000a338c) popup_call_audio_in_window_g1

0x9cd3,	// (0x000a3398) popup_call_audio_in_window_g2_ParamLimits

0x9cd3,	// (0x000a3398) popup_call_audio_in_window_g2

0x9cdf,	// (0x000a33a4) popup_call_audio_in_window_g3_ParamLimits

0x9cdf,	// (0x000a33a4) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000a8794) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000a8794) popup_call_audio_in_window_g

0x9ceb,	// (0x000a33b0) popup_call_audio_in_window_t1_ParamLimits

0x9ceb,	// (0x000a33b0) popup_call_audio_in_window_t1

0x9d07,	// (0x000a33cc) popup_call_audio_in_window_t2_ParamLimits

0x9d07,	// (0x000a33cc) popup_call_audio_in_window_t2

0x9d23,	// (0x000a33e8) popup_call_audio_in_window_t3_ParamLimits

0x9d23,	// (0x000a33e8) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000a879b) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000a879b) popup_call_audio_in_window_t

0x9cb1,	// (0x000a3376) bg_popup_call_pane_cp01_ParamLimits

0x9cb1,	// (0x000a3376) bg_popup_call_pane_cp01

0x9cbf,	// (0x000a3384) call_thumbnail_pane_cp02

0x9d36,	// (0x000a33fb) call_type_pane_cp022

0x9d3e,	// (0x000a3403) popup_call_audio_out_window_g1_ParamLimits

0x9d3e,	// (0x000a3403) popup_call_audio_out_window_g1

0x9d50,	// (0x000a3415) popup_call_audio_out_window_g2_ParamLimits

0x9d50,	// (0x000a3415) popup_call_audio_out_window_g2

0x9d5c,	// (0x000a3421) popup_call_audio_out_window_g3_ParamLimits

0x9d5c,	// (0x000a3421) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000a87a2) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000a87a2) popup_call_audio_out_window_g

0x9d6e,	// (0x000a3433) popup_call_audio_out_window_t1_ParamLimits

0x9d6e,	// (0x000a3433) popup_call_audio_out_window_t1

0x9d86,	// (0x000a344b) popup_call_audio_out_window_t2_ParamLimits

0x9d86,	// (0x000a344b) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000a87a9) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000a87a9) popup_call_audio_out_window_t

0x9d9b,	// (0x000a3460) bg_popup_call_pane_ParamLimits

0x9d9b,	// (0x000a3460) bg_popup_call_pane

0x110e,	// (0x0009a7d3) call_thumbnail_pane_cp_ParamLimits

0x110e,	// (0x0009a7d3) call_thumbnail_pane_cp

0xa32f,	// (0x000a39f4) call_type_pane_cp01_ParamLimits

0xa32f,	// (0x000a39f4) call_type_pane_cp01

0xa373,	// (0x000a3a38) popup_call_audio_first_window_g1_ParamLimits

0xa373,	// (0x000a3a38) popup_call_audio_first_window_g1

0xa3bf,	// (0x000a3a84) popup_call_audio_first_window_g2_ParamLimits

0xa3bf,	// (0x000a3a84) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000a87ae) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000a87ae) popup_call_audio_first_window_g

0xa403,	// (0x000a3ac8) popup_call_audio_first_window_t1_ParamLimits

0xa403,	// (0x000a3ac8) popup_call_audio_first_window_t1

0xa500,	// (0x000a3bc5) popup_call_audio_first_window_t4_ParamLimits

0xa500,	// (0x000a3bc5) popup_call_audio_first_window_t4

0xa58c,	// (0x000a3c51) popup_call_audio_first_window_t5_ParamLimits

0xa58c,	// (0x000a3c51) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000a87b3) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000a87b3) popup_call_audio_first_window_t

0xa5bb,	// (0x000a3c80) bg_popup_call_pane_cp02

0xa5c5,	// (0x000a3c8a) call_type_pane_cp023

0xa5cd,	// (0x000a3c92) popup_call_audio_wait_window_g1

0xa5d5,	// (0x000a3c9a) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000a87ba) popup_call_audio_wait_window_g

0xa5dd,	// (0x000a3ca2) popup_call_audio_wait_window_t3

0xa5eb,	// (0x000a3cb0) bg_popup_call_pane_cp03_ParamLimits

0xa5eb,	// (0x000a3cb0) bg_popup_call_pane_cp03

0xa64b,	// (0x000a3d10) call_thumbnail_pane_cp011_ParamLimits

0xa64b,	// (0x000a3d10) call_thumbnail_pane_cp011

0xa657,	// (0x000a3d1c) call_type_pane_cp034_ParamLimits

0xa657,	// (0x000a3d1c) call_type_pane_cp034

0xa693,	// (0x000a3d58) popup_call_audio_second_window_g1_ParamLimits

0xa693,	// (0x000a3d58) popup_call_audio_second_window_g1

0xa6cf,	// (0x000a3d94) popup_call_audio_second_window_g2_ParamLimits

0xa6cf,	// (0x000a3d94) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000a87bf) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000a87bf) popup_call_audio_second_window_g

0xa70b,	// (0x000a3dd0) popup_call_audio_second_window_t1_ParamLimits

0xa70b,	// (0x000a3dd0) popup_call_audio_second_window_t1

0xa78c,	// (0x000a3e51) popup_call_audio_second_window_t2_ParamLimits

0xa78c,	// (0x000a3e51) popup_call_audio_second_window_t2

0xa7c2,	// (0x000a3e87) popup_call_audio_second_window_t3_ParamLimits

0xa7c2,	// (0x000a3e87) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000a87c4) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000a87c4) popup_call_audio_second_window_t

0xa5bb,	// (0x000a3c80) bg_popup_call_pane_cp04

0xa7f8,	// (0x000a3ebd) list_conf_pane

0xa800,	// (0x000a3ec5) popup_call_audio_conf_window_t1

0xa80e,	// (0x000a3ed3) call_thumbnail_pane_g1

0xa816,	// (0x000a3edb) bg_pinb_pane_ParamLimits

0xa816,	// (0x000a3edb) bg_pinb_pane

0xa824,	// (0x000a3ee9) find_pinb_pane

0xa82d,	// (0x000a3ef2) listscroll_pinb_pane_ParamLimits

0xa82d,	// (0x000a3ef2) listscroll_pinb_pane

0xa83c,	// (0x000a3f01) pinb_bg_pane_g1

0x1132,	// (0x0009a7f7) pinb_bg_pane_g2

0x113e,	// (0x0009a803) pinb_bg_pane_g3

0x114a,	// (0x0009a80f) pinb_bg_pane_g4

0x1156,	// (0x0009a81b) pinb_bg_pane_g5

0x1162,	// (0x0009a827) pinb_bg_pane_g6

0x116d,	// (0x0009a832) pinb_bg_pane_g7

0x1178,	// (0x0009a83d) pinb_bg_pane_g8

0x1183,	// (0x0009a848) pinb_bg_pane_g9

0x118d,	// (0x0009a852) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000a87cb) pinb_bg_pane_g

0x11aa,	// (0x0009a86f) grid_pinb_pane

0x11b5,	// (0x0009a87a) list_pinb_pane

0x11c0,	// (0x0009a885) scroll_pane_cp01_ParamLimits

0x11c0,	// (0x0009a885) scroll_pane_cp01

0xa846,	// (0x000a3f0b) find_pinb_pane_g1_ParamLimits

0xa846,	// (0x000a3f0b) find_pinb_pane_g1

0xa85e,	// (0x000a3f23) find_pinb_pane_t1

0xa870,	// (0x000a3f35) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000a87e5) find_pinb_pane_t

0xa885,	// (0x000a3f4a) input_focus_pane_cp01_ParamLimits

0xa885,	// (0x000a3f4a) input_focus_pane_cp01

0x11d2,	// (0x0009a897) cell_pinb_pane_ParamLimits

0x11d2,	// (0x0009a897) cell_pinb_pane

0x11fd,	// (0x0009a8c2) cell_pinb_pane_g1_ParamLimits

0x11fd,	// (0x0009a8c2) cell_pinb_pane_g1

0xa891,	// (0x000a3f56) cell_pinb_pane_g2_ParamLimits

0xa891,	// (0x000a3f56) cell_pinb_pane_g2

0xa89d,	// (0x000a3f62) cell_pinb_pane_g3_ParamLimits

0xa89d,	// (0x000a3f62) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000a87ea) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000a87ea) cell_pinb_pane_g

0xa5bb,	// (0x000a3c80) grid_highlight_pane_cp01

0x1212,	// (0x0009a8d7) list_pinb_item_pane_ParamLimits

0x1212,	// (0x0009a8d7) list_pinb_item_pane

0xa5bb,	// (0x000a3c80) list_highlight_pane_cp02

0x123b,	// (0x0009a900) list_pinb_item_pane_g1_ParamLimits

0x123b,	// (0x0009a900) list_pinb_item_pane_g1

0x1248,	// (0x0009a90d) list_pinb_item_pane_g2_ParamLimits

0x1248,	// (0x0009a90d) list_pinb_item_pane_g2

0x1254,	// (0x0009a919) list_pinb_item_pane_g3_ParamLimits

0x1254,	// (0x0009a919) list_pinb_item_pane_g3

0x1265,	// (0x0009a92a) list_pinb_item_pane_g4_ParamLimits

0x1265,	// (0x0009a92a) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000a87f1) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000a87f1) list_pinb_item_pane_g

0x1271,	// (0x0009a936) list_pinb_item_pane_t1_ParamLimits

0x1271,	// (0x0009a936) list_pinb_item_pane_t1

0x12a2,	// (0x0009a967) calc_display_pane

0x12c0,	// (0x0009a985) calc_paper_pane

0x12dc,	// (0x0009a9a1) grid_calc_pane

0xa5bb,	// (0x000a3c80) bg_list_pane_cp01

0x1308,	// (0x0009a9cd) clock_g1

0x1310,	// (0x0009a9d5) clock_g2

0x0001,

0xf135,	// (0x000a87fa) clock_g

0x131a,	// (0x0009a9df) clock_t1_ParamLimits

0x131a,	// (0x0009a9df) clock_t1

0x132f,	// (0x0009a9f4) clock_t2_ParamLimits

0x132f,	// (0x0009a9f4) clock_t2

0x1341,	// (0x0009aa06) clock_t3_ParamLimits

0x1341,	// (0x0009aa06) clock_t3

0x1353,	// (0x0009aa18) clock_t4_ParamLimits

0x1353,	// (0x0009aa18) clock_t4

0x1365,	// (0x0009aa2a) clock_t5_ParamLimits

0x1365,	// (0x0009aa2a) clock_t5

0x137a,	// (0x0009aa3f) clock_t6_ParamLimits

0x137a,	// (0x0009aa3f) clock_t6

0x138c,	// (0x0009aa51) clock_t7_ParamLimits

0x138c,	// (0x0009aa51) clock_t7

0x139e,	// (0x0009aa63) clock_t8_ParamLimits

0x139e,	// (0x0009aa63) clock_t8

0x13b4,	// (0x0009aa79) clock_t9_ParamLimits

0x13b4,	// (0x0009aa79) clock_t9

0x0008,

0xf13a,	// (0x000a87ff) clock_t_ParamLimits

0xf13a,	// (0x000a87ff) clock_t

0xa8a9,	// (0x000a3f6e) popup_clock_analogue_window_cp02

0xa8a9,	// (0x000a3f6e) popup_clock_digital_window_cp01

0xa8b1,	// (0x000a3f76) listscroll_help_pane

0xa5bb,	// (0x000a3c80) phob_pre_status_pane

0xa8bb,	// (0x000a3f80) grid_qdial_pane

0xa816,	// (0x000a3edb) listscroll_mce_pane

0xa816,	// (0x000a3edb) bg_notes_pane

0xa8c5,	// (0x000a3f8a) list_notes_pane

0x13ca,	// (0x0009aa8f) scroll_pane_cp06

0xa8d3,	// (0x000a3f98) bg_calc_paper_pane

0x13d9,	// (0x0009aa9e) list_calc_pane

0xa8e7,	// (0x000a3fac) bg_calc_display_pane

0x13f3,	// (0x0009aab8) calc_display_pane_t1

0x1408,	// (0x0009aacd) calc_display_pane_t2

0x141d,	// (0x0009aae2) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000a8812) calc_display_pane_t

0x142f,	// (0x0009aaf4) cell_calc_pane_ParamLimits

0x142f,	// (0x0009aaf4) cell_calc_pane

0xa8f3,	// (0x000a3fb8) bg_calc_paper_pane_g1

0xa8ff,	// (0x000a3fc4) bg_calc_paper_pane_g2

0xa90b,	// (0x000a3fd0) bg_calc_paper_pane_g3

0xa917,	// (0x000a3fdc) bg_calc_paper_pane_g4

0xa923,	// (0x000a3fe8) bg_calc_paper_pane_g5

0x145c,	// (0x0009ab21) bg_calc_paper_pane_g6

0x146d,	// (0x0009ab32) bg_calc_paper_pane_g7

0x147e,	// (0x0009ab43) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000a8819) bg_calc_paper_pane_g

0x148f,	// (0x0009ab54) calc_bg_paper_pane_g9

0x14a0,	// (0x0009ab65) list_calc_item_pane_ParamLimits

0x14a0,	// (0x0009ab65) list_calc_item_pane

0xa92f,	// (0x000a3ff4) list_calc_item_pane_g1

0x14cd,	// (0x0009ab92) list_calc_item_pane_t1_ParamLimits

0x14cd,	// (0x0009ab92) list_calc_item_pane_t1

0x14df,	// (0x0009aba4) list_calc_item_pane_t2_ParamLimits

0x14df,	// (0x0009aba4) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000a882a) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000a882a) list_calc_item_pane_t

0xa93c,	// (0x000a4001) cell_calc_pane_g1

0xa946,	// (0x000a400b) grid_highlight_pane_cp02

0x150f,	// (0x0009abd4) bg_calc_display_pane_g1

0x1518,	// (0x0009abdd) bg_calc_display_pane_g2

0x1522,	// (0x0009abe7) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000a8834) bg_calc_display_pane_g

0x152b,	// (0x0009abf0) cell_qdial_pane_ParamLimits

0x152b,	// (0x0009abf0) cell_qdial_pane

0x153f,	// (0x0009ac04) cell_qdial_pane_g1_ParamLimits

0x153f,	// (0x0009ac04) cell_qdial_pane_g1

0x154c,	// (0x0009ac11) cell_qdial_pane_g2_ParamLimits

0x154c,	// (0x0009ac11) cell_qdial_pane_g2

0xa968,	// (0x000a402d) cell_qdial_pane_g3_ParamLimits

0xa968,	// (0x000a402d) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000a883b) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000a883b) cell_qdial_pane_g

0x1569,	// (0x0009ac2e) cell_qdial_pane_t1_ParamLimits

0x1569,	// (0x0009ac2e) cell_qdial_pane_t1

0x1581,	// (0x0009ac46) cell_qdial_pane_t2_ParamLimits

0x1581,	// (0x0009ac46) cell_qdial_pane_t2

0x1594,	// (0x0009ac59) cell_qdial_pane_t3_ParamLimits

0x1594,	// (0x0009ac59) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000a8844) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000a8844) cell_qdial_pane_t

0xa5bb,	// (0x000a3c80) grid_highlight_pane_cp04

0xa974,	// (0x000a4039) thumbnail_qdial_pane_ParamLimits

0xa974,	// (0x000a4039) thumbnail_qdial_pane

0xa9d0,	// (0x000a4095) list_help_pane

0xa9e2,	// (0x000a40a7) scroll_pane_cp02

0x15a7,	// (0x0009ac6c) help_list_pane_t1_ParamLimits

0x15a7,	// (0x0009ac6c) help_list_pane_t1

0x15de,	// (0x0009aca3) bg_notes_pane_g2

0x15e6,	// (0x0009acab) bg_notes_pane_g3

0x15ee,	// (0x0009acb3) notes_bg_pane_g1

0x15f6,	// (0x0009acbb) notes_bg_pane_g4

0x15fe,	// (0x0009acc3) notes_bg_pane_g5

0x1606,	// (0x0009accb) notes_bg_pane_g6

0x160e,	// (0x0009acd3) notes_bg_pane_g7

0x1616,	// (0x0009acdb) notes_bg_pane_g8

0x161e,	// (0x0009ace3) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000a8862) notes_bg_pane_g

0x1626,	// (0x0009aceb) list_notes_text_pane_ParamLimits

0x1626,	// (0x0009aceb) list_notes_text_pane

0xa9eb,	// (0x000a40b0) list_notes_text_pane_g1

0x9e1f,	// (0x000a34e4) list_notes_text_pane_t1

0x1652,	// (0x0009ad17) listscroll_cale_week_pane

0x1677,	// (0x0009ad3c) bg_cale_heading_pane

0xaa0e,	// (0x000a40d3) bg_cale_pane_cp01

0x1699,	// (0x0009ad5e) cale_week_corner_pane

0x16b3,	// (0x0009ad78) cale_week_day_heading_pane

0x16d5,	// (0x0009ad9a) cale_week_scroll_pane_g1

0x16f2,	// (0x0009adb7) cale_week_scroll_pane_g2

0x1705,	// (0x0009adca) cale_week_scroll_pane_g3

0x1718,	// (0x0009addd) cale_week_scroll_pane_g4

0x172b,	// (0x0009adf0) cale_week_scroll_pane_g5

0x173e,	// (0x0009ae03) cale_week_scroll_pane_g6

0x1751,	// (0x0009ae16) cale_week_scroll_pane_g7

0x1766,	// (0x0009ae2b) cale_week_scroll_pane_g8

0x177b,	// (0x0009ae40) cale_week_scroll_pane_g9

0x178e,	// (0x0009ae53) cale_week_scroll_pane_g10

0x17a1,	// (0x0009ae66) cale_week_scroll_pane_g11

0x17b4,	// (0x0009ae79) cale_week_scroll_pane_g12

0x17cb,	// (0x0009ae90) cale_week_scroll_pane_g13

0x17e6,	// (0x0009aeab) cale_week_scroll_pane_g14

0x1801,	// (0x0009aec6) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000a8871) cale_week_scroll_pane_g

0x1831,	// (0x0009aef6) cale_week_time_pane

0x1846,	// (0x0009af0b) grid_cale_week_pane

0xaa3d,	// (0x000a4102) scroll_pane_cp08

0x1865,	// (0x0009af2a) cell_cale_week_pane_ParamLimits

0x1865,	// (0x0009af2a) cell_cale_week_pane

0x18c7,	// (0x0009af8c) cale_week_day_heading_pane_t1

0x18e2,	// (0x0009afa7) cale_week_day_heading_pane_t2

0x18fd,	// (0x0009afc2) cale_week_day_heading_pane_t3

0x1918,	// (0x0009afdd) cale_week_day_heading_pane_t4

0x1933,	// (0x0009aff8) cale_week_day_heading_pane_t5

0x194e,	// (0x0009b013) cale_week_day_heading_pane_t6

0x1969,	// (0x0009b02e) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000a8892) cale_week_day_heading_pane_t

0xaa5a,	// (0x000a411f) bg_cale_side_pane

0x1984,	// (0x0009b049) cale_week_time_pane_t1

0x199e,	// (0x0009b063) cale_week_time_pane_t2

0x19b8,	// (0x0009b07d) cale_week_time_pane_t3

0x19d2,	// (0x0009b097) cale_week_time_pane_t4

0x19ec,	// (0x0009b0b1) cale_week_time_pane_t5

0x1a06,	// (0x0009b0cb) cale_week_time_pane_t6

0x1a26,	// (0x0009b0eb) cale_week_time_pane_t7

0x1a48,	// (0x0009b10d) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000a88a1) cale_week_time_pane_t

0x1a6c,	// (0x0009b131) cell_cale_week_pane_g2

0x1a90,	// (0x0009b155) cell_cale_week_pane_g3_ParamLimits

0x1a90,	// (0x0009b155) cell_cale_week_pane_g3

0xaa68,	// (0x000a412d) grid_highlight_pane_cp07

0xaa70,	// (0x000a4135) listscroll_gms_pane

0xaa7a,	// (0x000a413f) grid_gms_pane

0xaa83,	// (0x000a4148) listscroll_gms_pane_g1

0xaa8b,	// (0x000a4150) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000a88b2) listscroll_gms_pane_g

0x1aa8,	// (0x0009b16d) scroll_pane_cp010

0x1ab3,	// (0x0009b178) cell_gms_pane_ParamLimits

0x1ab3,	// (0x0009b178) cell_gms_pane

0x1ac3,	// (0x0009b188) cell_gms_pane_g1

0xaa93,	// (0x000a4158) cell_gms_pane_g2

0xaa9b,	// (0x000a4160) cell_gms_pane_g3

0xaaa4,	// (0x000a4169) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000a88b7) cell_gms_pane_g

0xaaad,	// (0x000a4172) grid_highlight_pane_cp09

0x40e0,	// (0x0009d7a5) phob_pre_status_pane_g1

0x40e8,	// (0x0009d7ad) phob_pre_status_pane_g2

0x40f0,	// (0x0009d7b5) phob_pre_status_pane_g3

0x40f8,	// (0x0009d7bd) phob_pre_status_pane_g4

0x0004,

0xf4ee,	// (0x000a8bb3) phob_pre_status_pane_g

0x4108,	// (0x0009d7cd) phob_pre_status_pane_t1

0x4118,	// (0x0009d7dd) phob_pre_status_pane_t2

0x4128,	// (0x0009d7ed) phob_pre_status_pane_t3

0x0002,

0xf4f9,	// (0x000a8bbe) phob_pre_status_pane_t

0xaab5,	// (0x000a417a) bg_list_pane_cp05

0x1ad3,	// (0x0009b198) grid_vorec_pane

0x1add,	// (0x0009b1a2) vorec_t1

0x1aeb,	// (0x0009b1b0) vorec_t2

0x1af9,	// (0x0009b1be) vorec_t3

0x1b07,	// (0x0009b1cc) vorec_t4

0x9be1,	// (0x000a32a6) vorec_t5

0x9bef,	// (0x000a32b4) vorec_t6

0x0004,

0xf1fb,	// (0x000a88c0) vorec_t

0x9bfd,	// (0x000a32c2) wait_bar_pane_cp01

0x1b23,	// (0x0009b1e8) cell_vorec_pane_ParamLimits

0x1b23,	// (0x0009b1e8) cell_vorec_pane

0x1b36,	// (0x0009b1fb) cell_vorec_pane_g1

0xa5bb,	// (0x000a3c80) grid_highlight_pane_cp05

0x1b50,	// (0x0009b215) cams_zoom_pane

0x1b5c,	// (0x0009b221) image_vga_pane

0x1b6b,	// (0x0009b230) main_camera_pane_g1

0x1b79,	// (0x0009b23e) main_camera_pane_g2

0x1b85,	// (0x0009b24a) main_camera_pane_g3

0x1b91,	// (0x0009b256) main_camera_pane_g4

0x1b9d,	// (0x0009b262) main_camera_pane_g5

0x1ba9,	// (0x0009b26e) main_camera_pane_g6

0x1bb5,	// (0x0009b27a) main_camera_pane_g7

0x0007,

0xf206,	// (0x000a88cb) main_camera_pane_g

0x1bc1,	// (0x0009b286) main_camera_pane_t1

0x1bd3,	// (0x0009b298) main_camera_pane_t2

0x0001,

0xf217,	// (0x000a88dc) main_camera_pane_t

0x1bf4,	// (0x0009b2b9) cams_zoom_pane_cp_ParamLimits

0x1bf4,	// (0x0009b2b9) cams_zoom_pane_cp

0x1c18,	// (0x0009b2dd) image_cif_pane_ParamLimits

0x1c18,	// (0x0009b2dd) image_cif_pane

0x1c36,	// (0x0009b2fb) image_subqcif_pane

0x1c3e,	// (0x0009b303) main_video_pane_g1_ParamLimits

0x1c3e,	// (0x0009b303) main_video_pane_g1

0x1c5e,	// (0x0009b323) main_video_pane_g2_ParamLimits

0x1c5e,	// (0x0009b323) main_video_pane_g2

0x1c8e,	// (0x0009b353) main_video_pane_g3_ParamLimits

0x1c8e,	// (0x0009b353) main_video_pane_g3

0x1cb7,	// (0x0009b37c) main_video_pane_g4_ParamLimits

0x1cb7,	// (0x0009b37c) main_video_pane_g4

0x1ce0,	// (0x0009b3a5) main_video_pane_g5_ParamLimits

0x1ce0,	// (0x0009b3a5) main_video_pane_g5

0xaac9,	// (0x000a418e) main_video_pane_g6_ParamLimits

0xaac9,	// (0x000a418e) main_video_pane_g6

0x0006,

0xf21c,	// (0x000a88e1) main_video_pane_g_ParamLimits

0xf21c,	// (0x000a88e1) main_video_pane_g

0x1d02,	// (0x0009b3c7) main_video_pane_t1_ParamLimits

0x1d02,	// (0x0009b3c7) main_video_pane_t1

0xaae3,	// (0x000a41a8) cams_zoom_pane_g1

0xab0a,	// (0x000a41cf) cams_zoom_pane_g2

0xab13,	// (0x000a41d8) cams_zoom_pane_g3

0xab1c,	// (0x000a41e1) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x000a88f0) cams_zoom_pane_g

0x1d4c,	// (0x0009b411) grid_cams_pane

0x1d5a,	// (0x0009b41f) linegrid_cams_pane

0x1d68,	// (0x0009b42d) cell_cams_pane_ParamLimits

0x1d68,	// (0x0009b42d) cell_cams_pane

0xab25,	// (0x000a41ea) cams_burst_image_pane

0xab2d,	// (0x000a41f2) cell_cams_pane_g1

0xa5bb,	// (0x000a3c80) grid_highlight_pane_cp03

0xa93c,	// (0x000a4001) mp_bg_pane_g1

0xa5bb,	// (0x000a3c80) bg_list_pane_cp03

0xc899,	// (0x000a5f5e) bg_mp_pane

0xc8a1,	// (0x000a5f66) grid_mp_pane

0xc8a9,	// (0x000a5f6e) media_player_g1

0xc8b1,	// (0x000a5f76) media_player_t1

0xc8bf,	// (0x000a5f84) media_player_t2

0xc8cd,	// (0x000a5f92) media_player_t3

0xc8db,	// (0x000a5fa0) media_player_t4

0xc8e9,	// (0x000a5fae) media_player_t5

0xc8f7,	// (0x000a5fbc) media_player_t6

0xc905,	// (0x000a5fca) media_player_t7

0x0006,

0x03fc,	// (0x00099ac1) media_player_t

0xc913,	// (0x000a5fd8) wait_bar_pane_cp02

0xf4da,	// (0x000a8b9f) main_usb_pane_t

0x40d7,	// (0x0009d79c) cell_mp_pane

0xa93c,	// (0x000a4001) cell_mp_pane_g1

0xa5bb,	// (0x000a3c80) grid_highlight_pane_cp06

0xab35,	// (0x000a41fa) grid_skin_colour_pane

0xab3d,	// (0x000a4202) list_highlight_pane_cp03

0x1e72,	// (0x0009b537) skin_g1

0xab45,	// (0x000a420a) skin_t1

0xab54,	// (0x000a4219) skin_t2

0x0001,

0xf260,	// (0x000a8925) skin_t

0x1e7c,	// (0x0009b541) cell_skin_colour_pane_ParamLimits

0x1e7c,	// (0x0009b541) cell_skin_colour_pane

0xab62,	// (0x000a4227) cell_skin_colour_pane_g1

0x1f00,	// (0x0009b5c5) call_video_g1_ParamLimits

0x1f00,	// (0x0009b5c5) call_video_g1

0x1f10,	// (0x0009b5d5) call_video_g2_ParamLimits

0x1f10,	// (0x0009b5d5) call_video_g2

0x0001,

0xf265,	// (0x000a892a) call_video_g_ParamLimits

0xf265,	// (0x000a892a) call_video_g

0x1f6a,	// (0x0009b62f) call_video_uplink_pane_cp1_ParamLimits

0x1f6a,	// (0x0009b62f) call_video_uplink_pane_cp1

0xab74,	// (0x000a4239) call_video_uplink_pane_cp2

0x2036,	// (0x0009b6fb) video_down_crop_pane_ParamLimits

0x2036,	// (0x0009b6fb) video_down_crop_pane

0x2128,	// (0x0009b7ed) video_down_pane_ParamLimits

0x2128,	// (0x0009b7ed) video_down_pane

0xab7c,	// (0x000a4241) video_down_subqcif_pane_ParamLimits

0xab7c,	// (0x000a4241) video_down_subqcif_pane

0xab94,	// (0x000a4259) video_down_subqcif_pane_cp_ParamLimits

0xab94,	// (0x000a4259) video_down_subqcif_pane_cp

0xabba,	// (0x000a427f) im_reading_pane_ParamLimits

0xabba,	// (0x000a427f) im_reading_pane

0x2248,	// (0x0009b90d) im_writing_pane_ParamLimits

0x2248,	// (0x0009b90d) im_writing_pane

0x2266,	// (0x0009b92b) im_reading_pane_t1

0xabd4,	// (0x000a4299) list_im_pane

0xabe5,	// (0x000a42aa) scroll_pane_cp07

0x22be,	// (0x0009b983) im_writing_pane_t1_ParamLimits

0x22be,	// (0x0009b983) im_writing_pane_t1

0xabfe,	// (0x000a42c3) im_writing_pane_t2_ParamLimits

0xabfe,	// (0x000a42c3) im_writing_pane_t2

0x0001,

0xf26f,	// (0x000a8934) im_writing_pane_t_ParamLimits

0xf26f,	// (0x000a8934) im_writing_pane_t

0xa5bb,	// (0x000a3c80) input_focus_pane_cp04

0xa5bb,	// (0x000a3c80) input_focus_pane_cp05

0x22d0,	// (0x0009b995) list_im_single_pane_ParamLimits

0x22d0,	// (0x0009b995) list_im_single_pane

0x22f7,	// (0x0009b9bc) list_single_im_pane_t1

0x409b,	// (0x0009d760) blid_accuracy_pane

0x40a3,	// (0x0009d768) blid_compass_pane

0x40ad,	// (0x0009d772) main_location_t1

0x40bb,	// (0x0009d780) main_location_t2

0x40c9,	// (0x0009d78e) main_location_t3

0x0002,

0xf4e7,	// (0x000a8bac) main_location_t

0xa5bb,	// (0x000a3c80) aid_levels_location

0xa93c,	// (0x000a4001) blid_accuracy_pane_g1

0xa93c,	// (0x000a4001) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x000a8996) blid_accuracy_pane_g

0xac46,	// (0x000a430b) wml_content_pane

0xac84,	// (0x000a4349) wml_button_pane_ParamLimits

0xac84,	// (0x000a4349) wml_button_pane

0x2306,	// (0x0009b9cb) wml_list_single_large_pane_ParamLimits

0x2306,	// (0x0009b9cb) wml_list_single_large_pane

0x2331,	// (0x0009b9f6) wml_list_single_medium_pane_ParamLimits

0x2331,	// (0x0009b9f6) wml_list_single_medium_pane

0x2363,	// (0x0009ba28) wml_list_single_small_pane_ParamLimits

0x2363,	// (0x0009ba28) wml_list_single_small_pane

0xac98,	// (0x000a435d) wml_selection_box_pane_ParamLimits

0xac98,	// (0x000a435d) wml_selection_box_pane

0xacab,	// (0x000a4370) wml_list_single_pane_t1

0xacba,	// (0x000a437f) wml_list_single_medium_pane_t1

0xacc9,	// (0x000a438e) wml_list_single_large_pane_t1

0xacd8,	// (0x000a439d) input_focus_pane_cp02_ParamLimits

0xacd8,	// (0x000a439d) input_focus_pane_cp02

0xaceb,	// (0x000a43b0) wml_selection_box_pane_g1

0xacf4,	// (0x000a43b9) wml_selection_box_pane_t1_ParamLimits

0xacf4,	// (0x000a43b9) wml_selection_box_pane_t1

0xa816,	// (0x000a3edb) bg_wml_button_pane_ParamLimits

0xa816,	// (0x000a3edb) bg_wml_button_pane

0xad0c,	// (0x000a43d1) wml_button_pane_g1

0xad14,	// (0x000a43d9) wml_button_pane_t1

0xad0c,	// (0x000a43d1) wml_button_bg_pane_g1

0xad24,	// (0x000a43e9) wml_button_bg_pane_g2

0xad2c,	// (0x000a43f1) wml_button_bg_pane_g3

0xad34,	// (0x000a43f9) wml_button_bg_pane_g4

0xad3c,	// (0x000a4401) wml_button_bg_pane_g5

0xad44,	// (0x000a4409) wml_button_bg_pane_g6

0xad4c,	// (0x000a4411) wml_button_bg_pane_g7

0xad54,	// (0x000a4419) wml_button_bg_pane_g8

0xad5c,	// (0x000a4421) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x000a8939) wml_button_bg_pane_g

0x23a0,	// (0x0009ba65) bg_list_pane_cp02

0xad64,	// (0x000a4429) mce_header_pane_ParamLimits

0xad64,	// (0x000a4429) mce_header_pane

0xad7a,	// (0x000a443f) mce_icon_pane

0xad7a,	// (0x000a443f) mce_image_pane

0xad83,	// (0x000a4448) mce_text_pane_ParamLimits

0xad83,	// (0x000a4448) mce_text_pane

0x23aa,	// (0x0009ba6f) scroll_pane_cp03

0xac7c,	// (0x000a4341) scroll_pane_cp04

0xad96,	// (0x000a445b) scroll_pane_cp05_ParamLimits

0xad96,	// (0x000a445b) scroll_pane_cp05

0x23b4,	// (0x0009ba79) mce_header_field_pane_ParamLimits

0x23b4,	// (0x0009ba79) mce_header_field_pane

0x23d4,	// (0x0009ba99) mce_header_field_pane_2_ParamLimits

0x23d4,	// (0x0009ba99) mce_header_field_pane_2

0x23ea,	// (0x0009baaf) mce_header_field_pane_3

0x23f2,	// (0x0009bab7) list_single_mce_message_pane_ParamLimits

0x23f2,	// (0x0009bab7) list_single_mce_message_pane

0x2420,	// (0x0009bae5) list_single_mce_smart_pane_ParamLimits

0x2420,	// (0x0009bae5) list_single_mce_smart_pane

0xada2,	// (0x000a4467) input_focus_pane_cp03

0xadab,	// (0x000a4470) list_header_data_pane

0x2459,	// (0x0009bb1e) mce_header_field_pane_t1

0x2467,	// (0x0009bb2c) list_single_mce_header_pane_ParamLimits

0x2467,	// (0x0009bb2c) list_single_mce_header_pane

0xadb3,	// (0x000a4478) list_single_mce_header_pane_t1

0xadc2,	// (0x000a4487) list_single_mce_message_pane_g1

0xadca,	// (0x000a448f) list_single_mce_message_pane_t1

0x24bd,	// (0x0009bb82) bg_cale_heading_pane_cp01_ParamLimits

0x24bd,	// (0x0009bb82) bg_cale_heading_pane_cp01

0xadd8,	// (0x000a449d) bg_cale_pane_cp02_ParamLimits

0xadd8,	// (0x000a449d) bg_cale_pane_cp02

0x250b,	// (0x0009bbd0) cale_month_corner_pane

0x252a,	// (0x0009bbef) cale_month_day_heading_pane_ParamLimits

0x252a,	// (0x0009bbef) cale_month_day_heading_pane

0x2590,	// (0x0009bc55) cale_month_pane_g1_ParamLimits

0x2590,	// (0x0009bc55) cale_month_pane_g1

0x25d3,	// (0x0009bc98) cale_month_pane_g2_ParamLimits

0x25d3,	// (0x0009bc98) cale_month_pane_g2

0x260d,	// (0x0009bcd2) cale_month_pane_g3_ParamLimits

0x260d,	// (0x0009bcd2) cale_month_pane_g3

0x265d,	// (0x0009bd22) cale_month_pane_g4_ParamLimits

0x265d,	// (0x0009bd22) cale_month_pane_g4

0x26ad,	// (0x0009bd72) cale_month_pane_g5_ParamLimits

0x26ad,	// (0x0009bd72) cale_month_pane_g5

0x26fd,	// (0x0009bdc2) cale_month_pane_g6_ParamLimits

0x26fd,	// (0x0009bdc2) cale_month_pane_g6

0x274d,	// (0x0009be12) cale_month_pane_g7_ParamLimits

0x274d,	// (0x0009be12) cale_month_pane_g7

0x27b5,	// (0x0009be7a) cale_month_pane_g8_ParamLimits

0x27b5,	// (0x0009be7a) cale_month_pane_g8

0x281d,	// (0x0009bee2) cale_month_pane_g9_ParamLimits

0x281d,	// (0x0009bee2) cale_month_pane_g9

0x287b,	// (0x0009bf40) cale_month_pane_g10_ParamLimits

0x287b,	// (0x0009bf40) cale_month_pane_g10

0x28d9,	// (0x0009bf9e) cale_month_pane_g11_ParamLimits

0x28d9,	// (0x0009bf9e) cale_month_pane_g11

0x292d,	// (0x0009bff2) cale_month_pane_g12_ParamLimits

0x292d,	// (0x0009bff2) cale_month_pane_g12

0x2983,	// (0x0009c048) cale_month_pane_g13_ParamLimits

0x2983,	// (0x0009c048) cale_month_pane_g13

0x000c,

0xf287,	// (0x000a894c) cale_month_pane_g_ParamLimits

0xf287,	// (0x000a894c) cale_month_pane_g

0x29d9,	// (0x0009c09e) cale_month_week_pane

0x29fd,	// (0x0009c0c2) grid_cale_month_pane_ParamLimits

0x29fd,	// (0x0009c0c2) grid_cale_month_pane

0x2a5a,	// (0x0009c11f) cale_month_day_heading_pane_t1

0x2ae0,	// (0x0009c1a5) cale_month_day_heading_pane_t2

0x2b59,	// (0x0009c21e) cale_month_day_heading_pane_t3

0x2bd2,	// (0x0009c297) cale_month_day_heading_pane_t4

0x2c4b,	// (0x0009c310) cale_month_day_heading_pane_t5

0x2cc4,	// (0x0009c389) cale_month_day_heading_pane_t6

0x2d3d,	// (0x0009c402) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x000a8967) cale_month_day_heading_pane_t

0xaa5a,	// (0x000a411f) bg_cale_side_pane_cp01

0x2dce,	// (0x0009c493) cale_month_week_pane_t1

0x2de7,	// (0x0009c4ac) cale_month_week_pane_t2

0x2e00,	// (0x0009c4c5) cale_month_week_pane_t3

0x2e19,	// (0x0009c4de) cale_month_week_pane_t4

0x2e34,	// (0x0009c4f9) cale_month_week_pane_t5

0x2e55,	// (0x0009c51a) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x000a8976) cale_month_week_pane_t

0x2e76,	// (0x0009c53b) cell_cale_month_pane_ParamLimits

0x2e76,	// (0x0009c53b) cell_cale_month_pane

0x2fc6,	// (0x0009c68b) cell_cale_month_pane_g1

0x2fd2,	// (0x0009c697) cell_cale_month_pane_t1_ParamLimits

0x2fd2,	// (0x0009c697) cell_cale_month_pane_t1

0xaa68,	// (0x000a412d) grid_highlight_pane_cp08

0xa93c,	// (0x000a4001) main_smil_g1

0x2ffe,	// (0x0009c6c3) smil_status_pane

0xae17,	// (0x000a44dc) smil_text_pane

0xc779,	// (0x000a5e3e) bg_popup_call3_rect_pane_g8

0xc781,	// (0x000a5e46) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x000a8b87) bg_popup_call3_rect_pane_g

0xca08,	// (0x000a60cd) smil_status_volume_pane_g1

0xae21,	// (0x000a44e6) smil_status_pane_t1

0x44d2,	// (0x0009db97) volume_smil_pane

0xae38,	// (0x000a44fd) list_smil_text_pane

0x3011,	// (0x0009c6d6) scroll_pane_cp011

0x301c,	// (0x0009c6e1) smil_text_list_pane_t1_ParamLimits

0x301c,	// (0x0009c6e1) smil_text_list_pane_t1

0x30a9,	// (0x0009c76e) aid_volume_smil_ParamLimits

0x30a9,	// (0x0009c76e) aid_volume_smil

0xa93c,	// (0x000a4001) smil_volume_pane_g1

0xa93c,	// (0x000a4001) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x000a8996) smil_volume_pane_g

0x1652,	// (0x0009ad17) listscroll_cale_day_pane

0xae42,	// (0x000a4507) bg_cale_pane

0xae5a,	// (0x000a451f) list_cale_pane

0xae8f,	// (0x000a4554) scroll_pane_cp09

0xaea0,	// (0x000a4565) cale_bg_pane_g1

0xaea8,	// (0x000a456d) cale_bg_pane_g2

0xaeb0,	// (0x000a4575) cale_bg_pane_g3

0xaeb8,	// (0x000a457d) cale_bg_pane_g4

0xaec0,	// (0x000a4585) cale_bg_pane_g5

0xaec8,	// (0x000a458d) cale_bg_pane_g6

0xaed0,	// (0x000a4595) cale_bg_pane_g7

0xaed8,	// (0x000a459d) cale_bg_pane_g8

0xaee0,	// (0x000a45a5) cale_bg_pane_g9

0x0008,

0x00f8,	// (0x000997bd) cale_bg_pane_g

0x30d3,	// (0x0009c798) list_cale_time_pane_ParamLimits

0x30d3,	// (0x0009c798) list_cale_time_pane

0xaee8,	// (0x000a45ad) list_cale_time_pane_g1_ParamLimits

0xaee8,	// (0x000a45ad) list_cale_time_pane_g1

0xaef4,	// (0x000a45b9) list_cale_time_pane_g2_ParamLimits

0xaef4,	// (0x000a45b9) list_cale_time_pane_g2

0x30fb,	// (0x0009c7c0) list_cale_time_pane_g3_ParamLimits

0x30fb,	// (0x0009c7c0) list_cale_time_pane_g3

0x3109,	// (0x0009c7ce) list_cale_time_pane_g4_ParamLimits

0x3109,	// (0x0009c7ce) list_cale_time_pane_g4

0x3117,	// (0x0009c7dc) list_cale_time_pane_g5_ParamLimits

0x3117,	// (0x0009c7dc) list_cale_time_pane_g5

0x0005,

0xf2d6,	// (0x000a899b) list_cale_time_pane_g_ParamLimits

0xf2d6,	// (0x000a899b) list_cale_time_pane_g

0xaf0e,	// (0x000a45d3) list_cale_time_pane_t1_ParamLimits

0xaf0e,	// (0x000a45d3) list_cale_time_pane_t1

0xaf36,	// (0x000a45fb) list_cale_time_pane_t2_ParamLimits

0xaf36,	// (0x000a45fb) list_cale_time_pane_t2

0x34df,	// (0x0009cba4) aid_blid_cardinal_pane

0x3521,	// (0x0009cbe6) compass_pane_t4

0xaf5e,	// (0x000a4623) list_cale_time_pane_t4_ParamLimits

0xaf5e,	// (0x000a4623) list_cale_time_pane_t4

0x352f,	// (0x0009cbf4) compass_pane_t5

0x353f,	// (0x0009cc04) compass_pane_t6

0x354d,	// (0x0009cc12) compass_pane_t7

0xb3e2,	// (0x000a4aa7) navi_pane_cc_t1

0xb5cd,	// (0x000a4c92) aid_phob_thumbnail_center_pane

0x3b9c,	// (0x0009d261) main_postcard_pane_g4_ParamLimits

0x0002,

0x0118,	// (0x000997dd) list_cale_time_pane_t_ParamLimits

0x0118,	// (0x000997dd) list_cale_time_pane_t

0x9cb1,	// (0x000a3376) bg_popup_window_pane_cp02_ParamLimits

0x9cb1,	// (0x000a3376) bg_popup_window_pane_cp02

0xaf86,	// (0x000a464b) heading_pane_cp01_ParamLimits

0xaf86,	// (0x000a464b) heading_pane_cp01

0xaf92,	// (0x000a4657) loc_req_pane_ParamLimits

0xaf92,	// (0x000a4657) loc_req_pane

0xafa2,	// (0x000a4667) loc_type_pane_ParamLimits

0xafa2,	// (0x000a4667) loc_type_pane

0xafb4,	// (0x000a4679) loc_type_pane_t1_ParamLimits

0xafb4,	// (0x000a4679) loc_type_pane_t1

0xafc6,	// (0x000a468b) loc_type_pane_t2_ParamLimits

0xafc6,	// (0x000a468b) loc_type_pane_t2

0xafd8,	// (0x000a469d) loc_type_pane_t3_ParamLimits

0xafd8,	// (0x000a469d) loc_type_pane_t3

0x0002,

0x011f,	// (0x000997e4) loc_type_pane_t_ParamLimits

0x011f,	// (0x000997e4) loc_type_pane_t

0xafea,	// (0x000a46af) list_loc_req_pane

0xaff4,	// (0x000a46b9) scroll_pane_cp012

0x3125,	// (0x0009c7ea) list_single_loc_request_popup_menu_pane_ParamLimits

0x3125,	// (0x0009c7ea) list_single_loc_request_popup_menu_pane

0xafff,	// (0x000a46c4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafff,	// (0x000a46c4) list_single_loc_request_popup_menu_pane_g1

0xb00b,	// (0x000a46d0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb00b,	// (0x000a46d0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x0126,	// (0x000997eb) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x0126,	// (0x000997eb) list_single_loc_request_popup_menu_pane_g

0xb017,	// (0x000a46dc) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb017,	// (0x000a46dc) list_single_loc_request_popup_menu_pane_t1

0x313f,	// (0x0009c804) bg_popup_window_pane_cp03_ParamLimits

0x313f,	// (0x0009c804) bg_popup_window_pane_cp03

0x314d,	// (0x0009c812) heading_loc_req_pane_ParamLimits

0x314d,	// (0x0009c812) heading_loc_req_pane

0x3159,	// (0x0009c81e) popup_dyc_status_message_window_g1_ParamLimits

0x3159,	// (0x0009c81e) popup_dyc_status_message_window_g1

0x3165,	// (0x0009c82a) popup_dyc_status_message_window_t1_ParamLimits

0x3165,	// (0x0009c82a) popup_dyc_status_message_window_t1

0x3177,	// (0x0009c83c) popup_dyc_status_message_window_t2_ParamLimits

0x3177,	// (0x0009c83c) popup_dyc_status_message_window_t2

0x3189,	// (0x0009c84e) popup_dyc_status_message_window_t3_ParamLimits

0x3189,	// (0x0009c84e) popup_dyc_status_message_window_t3

0x0002,

0xf2e3,	// (0x000a89a8) popup_dyc_status_message_window_t_ParamLimits

0xf2e3,	// (0x000a89a8) popup_dyc_status_message_window_t

0xa5bb,	// (0x000a3c80) bg_heading_pane_cp01

0xb02d,	// (0x000a46f2) heading_loc_req_pane_g1

0xb035,	// (0x000a46fa) heading_loc_req_pane_g2

0xb03d,	// (0x000a4702) heading_loc_req_pane_g3

0x0002,

0xf2ea,	// (0x000a89af) heading_loc_req_pane_g

0xb045,	// (0x000a470a) heading_loc_req_pane_t1

0xb054,	// (0x000a4719) bg_popup_sub_pane_cp01_ParamLimits

0xb054,	// (0x000a4719) bg_popup_sub_pane_cp01

0xb062,	// (0x000a4727) popup_cale_events_window_g1_ParamLimits

0xb062,	// (0x000a4727) popup_cale_events_window_g1

0xb082,	// (0x000a4747) popup_cale_events_window_g2_ParamLimits

0xb082,	// (0x000a4747) popup_cale_events_window_g2

0x0001,

0xf31e,	// (0x000a89e3) popup_cale_events_window_g_ParamLimits

0xf31e,	// (0x000a89e3) popup_cale_events_window_g

0xb0a2,	// (0x000a4767) popup_cale_events_window_t1_ParamLimits

0xb0a2,	// (0x000a4767) popup_cale_events_window_t1

0xb0c0,	// (0x000a4785) popup_cale_events_window_t2_ParamLimits

0xb0c0,	// (0x000a4785) popup_cale_events_window_t2

0xb0fe,	// (0x000a47c3) popup_cale_events_window_t3_ParamLimits

0xb0fe,	// (0x000a47c3) popup_cale_events_window_t3

0xb138,	// (0x000a47fd) popup_cale_events_window_t4_ParamLimits

0xb138,	// (0x000a47fd) popup_cale_events_window_t4

0x0003,

0xf323,	// (0x000a89e8) popup_cale_events_window_t_ParamLimits

0xf323,	// (0x000a89e8) popup_cale_events_window_t

0x3282,	// (0x0009c947) call_type_pane

0xb544,	// (0x000a4c09) popup_call_status_window_g1

0x328e,	// (0x0009c953) popup_call_status_window_g2

0x329a,	// (0x0009c95f) popup_call_status_window_g3

0x0002,

0xf32c,	// (0x000a89f1) popup_call_status_window_g

0xb16e,	// (0x000a4833) call_type_pane_g1

0xb177,	// (0x000a483c) call_type_pane_g2

0x0001,

0x017b,	// (0x00099840) call_type_pane_g

0xa5bb,	// (0x000a3c80) bg_popup_sub_pane_cp02

0xb180,	// (0x000a4845) listscroll_popup_wml_pane

0xb188,	// (0x000a484d) list_wml_pane

0xb192,	// (0x000a4857) scroll_pane_cp013

0xb19d,	// (0x000a4862) list_single_graphic_popup_wml_pane_ParamLimits

0xb19d,	// (0x000a4862) list_single_graphic_popup_wml_pane

0xa93c,	// (0x000a4001) list_single_graphic_popup_wml_pane_g1

0xb1b1,	// (0x000a4876) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf333,	// (0x000a89f8) list_single_graphic_popup_wml_pane_g

0xb1b9,	// (0x000a487e) list_single_graphic_popup_wml_pane_t1

0xb1cf,	// (0x000a4894) aid_call_pane

0xa80e,	// (0x000a3ed3) popup_clock_analogue_window_g1

0xa80e,	// (0x000a3ed3) popup_clock_analogue_window_g2

0x32a6,	// (0x0009c96b) popup_clock_analogue_window_g3

0x32a6,	// (0x0009c96b) popup_clock_analogue_window_g4

0xa93c,	// (0x000a4001) popup_clock_analogue_window_g5

0x0004,

0xf338,	// (0x000a89fd) popup_clock_analogue_window_g

0x32ae,	// (0x0009c973) popup_clock_analogue_window_t1

0x32bc,	// (0x0009c981) clock_digital_number_pane_ParamLimits

0x32bc,	// (0x0009c981) clock_digital_number_pane

0x32c8,	// (0x0009c98d) clock_digital_number_pane_cp02_ParamLimits

0x32c8,	// (0x0009c98d) clock_digital_number_pane_cp02

0x32d4,	// (0x0009c999) clock_digital_number_pane_cp03_ParamLimits

0x32d4,	// (0x0009c999) clock_digital_number_pane_cp03

0x32e0,	// (0x0009c9a5) clock_digital_number_pane_cp04_ParamLimits

0x32e0,	// (0x0009c9a5) clock_digital_number_pane_cp04

0x32ec,	// (0x0009c9b1) clock_digital_separator_pane_ParamLimits

0x32ec,	// (0x0009c9b1) clock_digital_separator_pane

0x32f8,	// (0x0009c9bd) popup_clock_digital_window_t1

0xa93c,	// (0x000a4001) clock_digital_number_pane_g1

0xa93c,	// (0x000a4001) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x000a8996) clock_digital_number_pane_g

0xa93c,	// (0x000a4001) clock_digital_separator_pane_g1

0xa93c,	// (0x000a4001) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x000a8996) clock_digital_separator_pane_g

0xa5bb,	// (0x000a3c80) bg_popup_window_pane_cp04

0xb1d7,	// (0x000a489c) heading_pane_cp03

0xb1df,	// (0x000a48a4) listscroll_popup_gms_pane

0xb1e7,	// (0x000a48ac) grid_large_graphic_popup_pane

0xb1f1,	// (0x000a48b6) listscroll_popup_gms_pane_g1

0xb1f9,	// (0x000a48be) listscroll_popup_gms_pane_g2

0x0001,

0x0190,	// (0x00099855) listscroll_popup_gms_pane_g

0xac7c,	// (0x000a4341) scroll_pane_cp014

0x3315,	// (0x0009c9da) cell_large_graphic_popup_pane_ParamLimits

0x3315,	// (0x0009c9da) cell_large_graphic_popup_pane

0x332d,	// (0x0009c9f2) cell_large_graphic_popup_pane_g1_ParamLimits

0x332d,	// (0x0009c9f2) cell_large_graphic_popup_pane_g1

0xb201,	// (0x000a48c6) cell_large_graphic_popup_pane_g2_ParamLimits

0xb201,	// (0x000a48c6) cell_large_graphic_popup_pane_g2

0xb20d,	// (0x000a48d2) cell_large_graphic_popup_pane_g3_ParamLimits

0xb20d,	// (0x000a48d2) cell_large_graphic_popup_pane_g3

0xb21a,	// (0x000a48df) cell_large_graphic_popup_pane_g4_ParamLimits

0xb21a,	// (0x000a48df) cell_large_graphic_popup_pane_g4

0x0003,

0xf343,	// (0x000a8a08) cell_large_graphic_popup_pane_g_ParamLimits

0xf343,	// (0x000a8a08) cell_large_graphic_popup_pane_g

0xb22a,	// (0x000a48ef) grid_highlight_pane_cp010

0xa93c,	// (0x000a4001) bg_popup_call_pane_g1

0xb234,	// (0x000a48f9) list_single_graphic_popup_conf_pane_ParamLimits

0xb234,	// (0x000a48f9) list_single_graphic_popup_conf_pane

0xb247,	// (0x000a490c) list_highlight_pane_cp01

0xb250,	// (0x000a4915) list_single_graphic_popup_conf_pane_g1

0xb258,	// (0x000a491d) list_single_graphic_popup_conf_pane_g2

0x0001,

0x019e,	// (0x00099863) list_single_graphic_popup_conf_pane_g

0xb260,	// (0x000a4925) list_single_graphic_popup_conf_pane_t1

0xb26e,	// (0x000a4933) linegrid_cams_pane_g1

0x3339,	// (0x0009c9fe) linegrid_cams_pane_g2

0xaa9b,	// (0x000a4160) linegrid_cams_pane_g3

0xb277,	// (0x000a493c) linegrid_cams_pane_g4

0x3342,	// (0x0009ca07) linegrid_cams_pane_g5

0x334b,	// (0x0009ca10) linegrid_cams_pane_g6

0xaaa4,	// (0x000a4169) linegrid_cams_pane_g7

0x0006,

0xf34c,	// (0x000a8a11) linegrid_cams_pane_g

0xb280,	// (0x000a4945) popup_clock_analogue_window

0xb280,	// (0x000a4945) popup_clock_digital_window

0xa5bb,	// (0x000a3c80) popup_phob_thumbnail_window

0xa93c,	// (0x000a4001) call_video_uplink_pane_g1

0xb289,	// (0x000a494e) call_video_uplink_pane_g2

0x0001,

0xf35b,	// (0x000a8a20) call_video_uplink_pane_g

0xb291,	// (0x000a4956) video_uplink_pane

0xb299,	// (0x000a495e) mce_image_pane_g1

0x3354,	// (0x0009ca19) mce_image_pane_g2

0x335c,	// (0x0009ca21) mce_image_pane_g3

0x3364,	// (0x0009ca29) mce_image_pane_g4

0x336c,	// (0x0009ca31) mce_image_pane_g5

0x0004,

0xf360,	// (0x000a8a25) mce_image_pane_g

0xb2a3,	// (0x000a4968) control_top_pane_stacon_cp01_ParamLimits

0xb2a3,	// (0x000a4968) control_top_pane_stacon_cp01

0xb2b7,	// (0x000a497c) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2b7,	// (0x000a497c) uni_indicator_pane_stacon_cp01

0xb2c8,	// (0x000a498d) bg_popup_sub_pane_cp03

0x3374,	// (0x0009ca39) chi_dic_find_pane

0x337c,	// (0x0009ca41) listscroll_chi_dic_pane

0x3385,	// (0x0009ca4a) main_pane_chidic_g1

0x3398,	// (0x0009ca5d) chi_dic_find_pane_t1

0xb2d2,	// (0x000a4997) find_chidic_pane

0xb2db,	// (0x000a49a0) chi_dic_list_pane_ParamLimits

0xb2db,	// (0x000a49a0) chi_dic_list_pane

0xb2ec,	// (0x000a49b1) scroll_pane_cp020

0x33a6,	// (0x0009ca6b) find_chidic_pane_t1

0xa5bb,	// (0x000a3c80) input_focus_pane_cp06

0x33b5,	// (0x0009ca7a) list_chi_dic_pane_ParamLimits

0x33b5,	// (0x0009ca7a) list_chi_dic_pane

0x33d2,	// (0x0009ca97) list_chi_dic_pane_t1_ParamLimits

0x33d2,	// (0x0009ca97) list_chi_dic_pane_t1

0xa5bb,	// (0x000a3c80) list_highlight_pane_cp020

0xb2f4,	// (0x000a49b9) bg_cale_heading_pane_g1

0x33e5,	// (0x0009caaa) bg_cale_heading_pane_g2

0x33ed,	// (0x0009cab2) bg_cale_heading_pane_g3

0x33f5,	// (0x0009caba) bg_cale_heading_pane_g4

0x33ff,	// (0x0009cac4) bg_cale_heading_pane_g5

0x3409,	// (0x0009cace) bg_cale_heading_pane_g6

0x3411,	// (0x0009cad6) bg_cale_heading_pane_g7

0x3419,	// (0x0009cade) bg_cale_heading_pane_g8

0x3423,	// (0x0009cae8) bg_cale_heading_pane_g9

0x0008,

0xf36b,	// (0x000a8a30) bg_cale_heading_pane_g

0xb2f4,	// (0x000a49b9) bg_cale_side_pane_g1

0x342d,	// (0x0009caf2) bg_cale_side_pane_g2

0x3437,	// (0x0009cafc) bg_cale_side_pane_g3

0x3441,	// (0x0009cb06) bg_cale_side_pane_g4

0x344b,	// (0x0009cb10) bg_cale_side_pane_g5

0x3455,	// (0x0009cb1a) bg_cale_side_pane_g6

0x345f,	// (0x0009cb24) bg_cale_side_pane_g7

0x3469,	// (0x0009cb2e) bg_cale_side_pane_g8

0x3471,	// (0x0009cb36) bg_cale_side_pane_g9

0x0008,

0xf37e,	// (0x000a8a43) bg_cale_side_pane_g

0x3479,	// (0x0009cb3e) popup_call_status_window_ParamLimits

0x3479,	// (0x0009cb3e) popup_call_status_window

0xb2fc,	// (0x000a49c1) stacon_top_pane

0xb304,	// (0x000a49c9) status_pane_ParamLimits

0xb304,	// (0x000a49c9) status_pane

0xb319,	// (0x000a49de) status_small_pane

0xb321,	// (0x000a49e6) control_pane

0xa5bb,	// (0x000a3c80) stacon_bottom_pane

0xb329,	// (0x000a49ee) list_single_mce_smart_pane_t1_ParamLimits

0xb329,	// (0x000a49ee) list_single_mce_smart_pane_t1

0xb33c,	// (0x000a4a01) list_single_mce_smart_pane_t2_ParamLimits

0xb33c,	// (0x000a4a01) list_single_mce_smart_pane_t2

0x0001,

0x01e8,	// (0x000998ad) list_single_mce_smart_pane_t_ParamLimits

0x01e8,	// (0x000998ad) list_single_mce_smart_pane_t

0x3485,	// (0x0009cb4a) compass_pane

0x3491,	// (0x0009cb56) main_location2_pane_t1

0x34a5,	// (0x0009cb6a) main_location2_pane_t2

0x34b9,	// (0x0009cb7e) main_location2_pane_t3

0x0003,

0xf391,	// (0x000a8a56) main_location2_pane_t

0xb35b,	// (0x000a4a20) compass_pane_g1_ParamLimits

0xb35b,	// (0x000a4a20) compass_pane_g1

0x3503,	// (0x0009cbc8) compass_pane_t1

0x3512,	// (0x0009cbd7) compass_pane_t2

0x0005,

0xf39a,	// (0x000a8a5f) compass_pane_t

0x355d,	// (0x0009cc22) text_secondary_cp61

0xb3d9,	// (0x000a4a9e) navi_pane_cams_g5

0xb455,	// (0x000a4b1a) navi_pane_im_t1

0xb463,	// (0x000a4b28) navi_pane_mp_g1_ParamLimits

0xb463,	// (0x000a4b28) navi_pane_mp_g1

0xb477,	// (0x000a4b3c) navi_pane_mp_g2_ParamLimits

0xb477,	// (0x000a4b3c) navi_pane_mp_g2

0xb483,	// (0x000a4b48) navi_pane_mp_g3_ParamLimits

0xb483,	// (0x000a4b48) navi_pane_mp_g3

0x0002,

0x020a,	// (0x000998cf) navi_pane_mp_g_ParamLimits

0x020a,	// (0x000998cf) navi_pane_mp_g

0xb48f,	// (0x000a4b54) navi_pane_mp_t1

0xb49d,	// (0x000a4b62) navi_pane_mp_t2

0x0002,

0x0211,	// (0x000998d6) navi_pane_mp_t

0xb508,	// (0x000a4bcd) navi_pane_vt_g1

0xb48f,	// (0x000a4b54) navi_pane_vt_t1

0xb510,	// (0x000a4bd5) navi_slider_pane

0xaab5,	// (0x000a417a) zooming_pane

0xb520,	// (0x000a4be5) navi_slider_pane_g1

0x3598,	// (0x0009cc5d) navi_slider_pane_g2

0x0006,

0xf3a7,	// (0x000a8a6c) navi_slider_pane_g

0xb552,	// (0x000a4c17) aid_levels_zoom

0xb55a,	// (0x000a4c1f) zooming_pane_g1

0xb562,	// (0x000a4c27) zooming_pane_g2

0xb562,	// (0x000a4c27) zooming_pane_g3

0x0002,

0xf3b6,	// (0x000a8a7b) zooming_pane_g

0xb56a,	// (0x000a4c2f) level_10_zoom

0xb573,	// (0x000a4c38) level_11_zoom

0xb57c,	// (0x000a4c41) level_1_zoom

0xb585,	// (0x000a4c4a) level_2_zoom

0xb58e,	// (0x000a4c53) level_3_zoom

0xb597,	// (0x000a4c5c) level_4_zoom

0xb5a0,	// (0x000a4c65) level_5_zoom

0xb5a9,	// (0x000a4c6e) level_6_zoom

0xb5b2,	// (0x000a4c77) level_7_zoom

0xb5bb,	// (0x000a4c80) level_8_zoom

0xb5c4,	// (0x000a4c89) level_9_zoom

0xb5d5,	// (0x000a4c9a) popup_phob_thumbnail_window_g1

0xb5dd,	// (0x000a4ca2) popup_phob_thumbnail_window_g2

0x0001,

0xf3bd,	// (0x000a8a82) popup_phob_thumbnail_window_g

0xc91b,	// (0x000a5fe0) level_1_location

0xc923,	// (0x000a5fe8) level_2_location

0xc92b,	// (0x000a5ff0) level_3_location

0xc933,	// (0x000a5ff8) level_4_location

0xaab5,	// (0x000a417a) level_5_location

0x35aa,	// (0x0009cc6f) mce_icon_pane_g1

0x35b2,	// (0x0009cc77) mce_icon_pane_g2

0x0001,

0xf3c2,	// (0x000a8a87) mce_icon_pane_g

0x35ba,	// (0x0009cc7f) main_mup_pane_g1_ParamLimits

0x35ba,	// (0x0009cc7f) main_mup_pane_g1

0x35d2,	// (0x0009cc97) main_mup_pane_g2_ParamLimits

0x35d2,	// (0x0009cc97) main_mup_pane_g2

0x35e6,	// (0x0009ccab) main_mup_pane_g3_ParamLimits

0x35e6,	// (0x0009ccab) main_mup_pane_g3

0x35fa,	// (0x0009ccbf) main_mup_pane_g4_ParamLimits

0x35fa,	// (0x0009ccbf) main_mup_pane_g4

0x3616,	// (0x0009ccdb) main_mup_pane_g5_ParamLimits

0x3616,	// (0x0009ccdb) main_mup_pane_g5

0x3637,	// (0x0009ccfc) main_mup_pane_g6_ParamLimits

0x3637,	// (0x0009ccfc) main_mup_pane_g6

0x3653,	// (0x0009cd18) main_mup_pane_g7_ParamLimits

0x3653,	// (0x0009cd18) main_mup_pane_g7

0x366f,	// (0x0009cd34) main_mup_pane_g8_ParamLimits

0x366f,	// (0x0009cd34) main_mup_pane_g8

0x368b,	// (0x0009cd50) main_mup_pane_g9_ParamLimits

0x368b,	// (0x0009cd50) main_mup_pane_g9

0x36aa,	// (0x0009cd6f) main_mup_pane_g10_ParamLimits

0x36aa,	// (0x0009cd6f) main_mup_pane_g10

0x36c9,	// (0x0009cd8e) main_mup_pane_g11_ParamLimits

0x36c9,	// (0x0009cd8e) main_mup_pane_g11

0x36e1,	// (0x0009cda6) main_mup_pane_g12_ParamLimits

0x36e1,	// (0x0009cda6) main_mup_pane_g12

0x36ef,	// (0x0009cdb4) main_mup_pane_g13_ParamLimits

0x36ef,	// (0x0009cdb4) main_mup_pane_g13

0x000c,

0xf3c7,	// (0x000a8a8c) main_mup_pane_g_ParamLimits

0xf3c7,	// (0x000a8a8c) main_mup_pane_g

0x3705,	// (0x0009cdca) main_mup_pane_t1_ParamLimits

0x3705,	// (0x0009cdca) main_mup_pane_t1

0x3722,	// (0x0009cde7) main_mup_pane_t2_ParamLimits

0x3722,	// (0x0009cde7) main_mup_pane_t2

0x373c,	// (0x0009ce01) main_mup_pane_t3_ParamLimits

0x373c,	// (0x0009ce01) main_mup_pane_t3

0x3756,	// (0x0009ce1b) main_mup_pane_t4_ParamLimits

0x3756,	// (0x0009ce1b) main_mup_pane_t4

0x3768,	// (0x0009ce2d) main_mup_pane_t5_ParamLimits

0x3768,	// (0x0009ce2d) main_mup_pane_t5

0x377a,	// (0x0009ce3f) main_mup_pane_t6_ParamLimits

0x377a,	// (0x0009ce3f) main_mup_pane_t6

0x0005,

0xf3e2,	// (0x000a8aa7) main_mup_pane_t_ParamLimits

0xf3e2,	// (0x000a8aa7) main_mup_pane_t

0x3790,	// (0x0009ce55) mup_progress_pane_ParamLimits

0x3790,	// (0x0009ce55) mup_progress_pane

0x379c,	// (0x0009ce61) mup_visualizer_pane_ParamLimits

0x379c,	// (0x0009ce61) mup_visualizer_pane

0x37da,	// (0x0009ce9f) mup_volume_pane_ParamLimits

0x37da,	// (0x0009ce9f) mup_volume_pane

0xb544,	// (0x000a4c09) mup_visualizer_pane_g1_ParamLimits

0xb544,	// (0x000a4c09) mup_visualizer_pane_g1

0xb544,	// (0x000a4c09) mup_visualizer_pane_g2_ParamLimits

0xb544,	// (0x000a4c09) mup_visualizer_pane_g2

0xb35b,	// (0x000a4a20) mup_visualizer_pane_g3_ParamLimits

0xb35b,	// (0x000a4a20) mup_visualizer_pane_g3

0x0002,

0xf3ef,	// (0x000a8ab4) mup_visualizer_pane_g_ParamLimits

0xf3ef,	// (0x000a8ab4) mup_visualizer_pane_g

0xa93c,	// (0x000a4001) mup_volume_pane_g1

0xb5ed,	// (0x000a4cb2) mup_volume_pane_g2

0x0001,

0xf3f6,	// (0x000a8abb) mup_volume_pane_g

0xa93c,	// (0x000a4001) mup_progress_pane_g1

0xb5f6,	// (0x000a4cbb) mup_progress_pane_g2

0xb5ff,	// (0x000a4cc4) mup_progress_pane_g3

0x0002,

0xf3fb,	// (0x000a8ac0) mup_progress_pane_g

0xa5bb,	// (0x000a3c80) bg_popup_window_pane_cp05

0xb608,	// (0x000a4ccd) heading_pane_cp02_ParamLimits

0xb608,	// (0x000a4ccd) heading_pane_cp02

0xb622,	// (0x000a4ce7) list_popup_blid_pane

0xb62a,	// (0x000a4cef) list_blid_sat_info_pane_ParamLimits

0xb62a,	// (0x000a4cef) list_blid_sat_info_pane

0xb63d,	// (0x000a4d02) list_blid_sat_info_pane_g1

0xb645,	// (0x000a4d0a) list_blid_sat_info_pane_t1

0x38e5,	// (0x0009cfaa) mup_equalizer_pane_ParamLimits

0x38e5,	// (0x0009cfaa) mup_equalizer_pane

0x3906,	// (0x0009cfcb) mup_equalizer_pane_cp1_ParamLimits

0x3906,	// (0x0009cfcb) mup_equalizer_pane_cp1

0x3927,	// (0x0009cfec) mup_equalizer_pane_cp2_ParamLimits

0x3927,	// (0x0009cfec) mup_equalizer_pane_cp2

0x3948,	// (0x0009d00d) mup_equalizer_pane_cp3_ParamLimits

0x3948,	// (0x0009d00d) mup_equalizer_pane_cp3

0x3969,	// (0x0009d02e) mup_equalizer_pane_cp4_ParamLimits

0x3969,	// (0x0009d02e) mup_equalizer_pane_cp4

0x398a,	// (0x0009d04f) mup_equalizer_pane_cp5

0x39a0,	// (0x0009d065) mup_equalizer_pane_cp6

0x39b8,	// (0x0009d07d) mup_equalizer_pane_cp7

0xc7f9,	// (0x000a5ebe) bg_popup_call_poc_act_pane_g9

0xc801,	// (0x000a5ec6) bg_popup_call_poc_act_pane_g10

0xc809,	// (0x000a5ece) bg_popup_call_poc_act_pane_g11

0x000a,

0xa816,	// (0x000a3edb) mup_scale_pane

0xa93c,	// (0x000a4001) mup_scale_pane_g1

0xb653,	// (0x000a4d18) mup_scale_pane_g2

0x0006,

0xf417,	// (0x000a8adc) mup_scale_pane_g

0xb677,	// (0x000a4d3c) msg_data_pane

0xb67f,	// (0x000a4d44) scroll_pane_cp017

0x39e2,	// (0x0009d0a7) bg_list_pane_cp04_ParamLimits

0x39e2,	// (0x0009d0a7) bg_list_pane_cp04

0xb687,	// (0x000a4d4c) msg_data_pane_g1

0x39fe,	// (0x0009d0c3) msg_data_pane_g2

0x3a06,	// (0x0009d0cb) msg_data_pane_g3

0x3a0e,	// (0x0009d0d3) msg_data_pane_g4

0x3a16,	// (0x0009d0db) msg_data_pane_g5

0x3a1e,	// (0x0009d0e3) msg_data_pane_g6

0x3a26,	// (0x0009d0eb) msg_data_pane_g7

0x0006,

0xf426,	// (0x000a8aeb) msg_data_pane_g

0x3a2e,	// (0x0009d0f3) msg_text_pane_ParamLimits

0x3a2e,	// (0x0009d0f3) msg_text_pane

0x3a7e,	// (0x0009d143) qrid_highlight_pane_cp011_ParamLimits

0x3a7e,	// (0x0009d143) qrid_highlight_pane_cp011

0xa5bb,	// (0x000a3c80) msg_body_pane

0xa5bb,	// (0x000a3c80) msg_header_pane

0xb698,	// (0x000a4d5d) input_focus_pane_cp07

0x9e35,	// (0x000a34fa) msg_header_pane_t1_ParamLimits

0x9e35,	// (0x000a34fa) msg_header_pane_t1

0x9e47,	// (0x000a350c) msg_header_pane_t2_ParamLimits

0x9e47,	// (0x000a350c) msg_header_pane_t2

0x0001,

0xf43a,	// (0x000a8aff) msg_header_pane_t_ParamLimits

0xf43a,	// (0x000a8aff) msg_header_pane_t

0xb6ad,	// (0x000a4d72) msg_body_pane_g1

0x9e59,	// (0x000a351e) msg_body_pane_t1_ParamLimits

0x9e59,	// (0x000a351e) msg_body_pane_t1

0x9e8a,	// (0x000a354f) msg_body_pane_t2_ParamLimits

0x9e8a,	// (0x000a354f) msg_body_pane_t2

0x9e9c,	// (0x000a3561) msg_body_pane_t3_ParamLimits

0x9e9c,	// (0x000a3561) msg_body_pane_t3

0x0002,

0xf43f,	// (0x000a8b04) msg_body_pane_t_ParamLimits

0xf43f,	// (0x000a8b04) msg_body_pane_t

0x3af8,	// (0x0009d1bd) main_viewer_pane_g1_ParamLimits

0x3af8,	// (0x0009d1bd) main_viewer_pane_g1

0x3b04,	// (0x0009d1c9) main_viewer_pane_g2_ParamLimits

0x3b04,	// (0x0009d1c9) main_viewer_pane_g2

0x3b10,	// (0x0009d1d5) main_viewer_pane_g3_ParamLimits

0x3b10,	// (0x0009d1d5) main_viewer_pane_g3

0x3b21,	// (0x0009d1e6) main_viewer_pane_g4_ParamLimits

0x3b21,	// (0x0009d1e6) main_viewer_pane_g4

0x3b32,	// (0x0009d1f7) main_viewer_pane_g5_ParamLimits

0x3b32,	// (0x0009d1f7) main_viewer_pane_g5

0x3b32,	// (0x0009d1f7) main_viewer_pane_g7_ParamLimits

0x3b32,	// (0x0009d1f7) main_viewer_pane_g7

0xafff,	// (0x000a46c4) main_viewer_pane_g8_ParamLimits

0xafff,	// (0x000a46c4) main_viewer_pane_g8

0x0007,

0xf44f,	// (0x000a8b14) main_viewer_pane_g_ParamLimits

0xf44f,	// (0x000a8b14) main_viewer_pane_g

0xb6b5,	// (0x000a4d7a) viewer_content_pane_ParamLimits

0xb6b5,	// (0x000a4d7a) viewer_content_pane

0x3b70,	// (0x0009d235) main_postcard_pane_g1_ParamLimits

0x3b70,	// (0x0009d235) main_postcard_pane_g1

0x3b7e,	// (0x0009d243) main_postcard_pane_g2_ParamLimits

0x3b7e,	// (0x0009d243) main_postcard_pane_g2

0x3b8c,	// (0x0009d251) main_postcard_pane_g3_ParamLimits

0x3b8c,	// (0x0009d251) main_postcard_pane_g3

0x0005,

0xf460,	// (0x000a8b25) main_postcard_pane_g_ParamLimits

0xf460,	// (0x000a8b25) main_postcard_pane_g

0x3b9c,	// (0x0009d261) main_postcard_pane_g4

0xca1b,	// (0x000a60e0) smil_status_volume_pane_g2

0x3bc8,	// (0x0009d28d) postcard_pane_ParamLimits

0x3bc8,	// (0x0009d28d) postcard_pane

0xb544,	// (0x000a4c09) postcard_pane_g1_ParamLimits

0xb544,	// (0x000a4c09) postcard_pane_g1

0x3bfa,	// (0x0009d2bf) postcard_pane_g2_ParamLimits

0x3bfa,	// (0x0009d2bf) postcard_pane_g2

0x3c06,	// (0x0009d2cb) postcard_pane_g3_ParamLimits

0x3c06,	// (0x0009d2cb) postcard_pane_g3

0xb6c3,	// (0x000a4d88) postcard_pane_g4_ParamLimits

0xb6c3,	// (0x000a4d88) postcard_pane_g4

0x3c12,	// (0x0009d2d7) postcard_pane_g5_ParamLimits

0x3c12,	// (0x0009d2d7) postcard_pane_g5

0x3c1e,	// (0x0009d2e3) postcard_pane_g6_ParamLimits

0x3c1e,	// (0x0009d2e3) postcard_pane_g6

0xb6d1,	// (0x000a4d96) postcard_pane_g7_ParamLimits

0xb6d1,	// (0x000a4d96) postcard_pane_g7

0x0006,

0xf46d,	// (0x000a8b32) postcard_pane_g_ParamLimits

0xf46d,	// (0x000a8b32) postcard_pane_g

0x3c2a,	// (0x0009d2ef) main_mp2_pane_g1_ParamLimits

0x3c2a,	// (0x0009d2ef) main_mp2_pane_g1

0x3c36,	// (0x0009d2fb) main_mp2_pane_g2_ParamLimits

0x3c36,	// (0x0009d2fb) main_mp2_pane_g2

0x3c42,	// (0x0009d307) main_mp2_pane_g3_ParamLimits

0x3c42,	// (0x0009d307) main_mp2_pane_g3

0x0002,

0xf47c,	// (0x000a8b41) main_mp2_pane_g_ParamLimits

0xf47c,	// (0x000a8b41) main_mp2_pane_g

0x3c4e,	// (0x0009d313) main_mp2_pane_t1_ParamLimits

0x3c4e,	// (0x0009d313) main_mp2_pane_t1

0x3c65,	// (0x0009d32a) main_mp2_pane_t2_ParamLimits

0x3c65,	// (0x0009d32a) main_mp2_pane_t2

0x3c77,	// (0x0009d33c) main_mp2_pane_t3_ParamLimits

0x3c77,	// (0x0009d33c) main_mp2_pane_t3

0x0002,

0xf483,	// (0x000a8b48) main_mp2_pane_t_ParamLimits

0xf483,	// (0x000a8b48) main_mp2_pane_t

0xb6df,	// (0x000a4da4) pec_content_pane_ParamLimits

0xb6df,	// (0x000a4da4) pec_content_pane

0xac7c,	// (0x000a4341) scroll_pane_cp015

0xb6f1,	// (0x000a4db6) pec_attribute_pane_ParamLimits

0xb6f1,	// (0x000a4db6) pec_attribute_pane

0x3c89,	// (0x0009d34e) pec_content_pane_g1_ParamLimits

0x3c89,	// (0x0009d34e) pec_content_pane_g1

0xb701,	// (0x000a4dc6) pec_content_pane_t1_ParamLimits

0xb701,	// (0x000a4dc6) pec_content_pane_t1

0xb713,	// (0x000a4dd8) pec_content_pane_t2_ParamLimits

0xb713,	// (0x000a4dd8) pec_content_pane_t2

0x0001,

0x02fb,	// (0x000999c0) pec_content_pane_t_ParamLimits

0x02fb,	// (0x000999c0) pec_content_pane_t

0x3c95,	// (0x0009d35a) list_single_graphic_pane_cp01_ParamLimits

0x3c95,	// (0x0009d35a) list_single_graphic_pane_cp01

0xa816,	// (0x000a3edb) bg_popup_sub_pane_cp04

0xb725,	// (0x000a4dea) popup_mup_playback_window_g1

0xb731,	// (0x000a4df6) popup_mup_playback_window_t1

0xb746,	// (0x000a4e0b) popup_mup_playback_window_t2

0x0001,

0x0300,	// (0x000999c5) popup_mup_playback_window_t

0xb77d,	// (0x000a4e42) main_image_pane_g1_ParamLimits

0xb77d,	// (0x000a4e42) main_image_pane_g1

0xb7c0,	// (0x000a4e85) scroll_pane_cp018_ParamLimits

0xb7c0,	// (0x000a4e85) scroll_pane_cp018

0xb7d8,	// (0x000a4e9d) scroll_pane_cp016_ParamLimits

0xb7d8,	// (0x000a4e9d) scroll_pane_cp016

0x3d2f,	// (0x0009d3f4) smil2_image_pane_ParamLimits

0x3d2f,	// (0x0009d3f4) smil2_image_pane

0x3d5f,	// (0x0009d424) smil2_root_pane_ParamLimits

0x3d5f,	// (0x0009d424) smil2_root_pane

0x3d8b,	// (0x0009d450) smil2_text_pane_ParamLimits

0x3d8b,	// (0x0009d450) smil2_text_pane

0xa5bb,	// (0x000a3c80) bg_list_pane_cp06

0xb814,	// (0x000a4ed9) grid_radio_pane

0xa5bb,	// (0x000a3c80) bg_popup_window_pane_cp06

0xb81c,	// (0x000a4ee1) main_fmradio_pane_t1

0xb1d7,	// (0x000a489c) heading_pane_cp04

0xb82a,	// (0x000a4eef) main_fmradio_pane_t2

0xc851,	// (0x000a5f16) popup_cale_lunar_info_window_g1

0xb838,	// (0x000a4efd) main_fmradio_pane_t3

0xc859,	// (0x000a5f1e) popup_cale_lunar_info_window_g2

0xb846,	// (0x000a4f0b) main_fmradio_pane_t4

0x0001,

0xb854,	// (0x000a4f19) main_fmradio_pane_t5

0x0004,

0x03ee,	// (0x00099ab3) popup_cale_lunar_info_window_g

0x0315,	// (0x000999da) main_fmradio_pane_t

0xb862,	// (0x000a4f27) wait_bar_pane_cp03

0xb86a,	// (0x000a4f2f) cell_fmradio_pane_ParamLimits

0xb86a,	// (0x000a4f2f) cell_fmradio_pane

0xb6d1,	// (0x000a4d96) cell_fmradio_pane_g1_ParamLimits

0xb6d1,	// (0x000a4d96) cell_fmradio_pane_g1

0xa5bb,	// (0x000a3c80) grid_highlight_pane_cp011

0xb87d,	// (0x000a4f42) poc_content_pane_ParamLimits

0xb87d,	// (0x000a4f42) poc_content_pane

0xb88f,	// (0x000a4f54) scroll_pane_cp019

0x3dcb,	// (0x0009d490) popup_call_poc_act_window_ParamLimits

0x3dcb,	// (0x0009d490) popup_call_poc_act_window

0x3dd8,	// (0x0009d49d) popup_call_poc_inact_window_ParamLimits

0x3dd8,	// (0x0009d49d) popup_call_poc_inact_window

0x03b2,	// (0x00099a77) bg_popup_call_poc_act_pane_g

0xc811,	// (0x000a5ed6) bg_popup_call_poc_inact_pane_g1

0xc819,	// (0x000a5ede) bg_popup_call_poc_inact_pane_g2

0xb897,	// (0x000a4f5c) popup_call_poc_act_window_g2

0xc821,	// (0x000a5ee6) bg_popup_call_poc_inact_pane_g3

0xc7a1,	// (0x000a5e66) bg_popup_call_poc_inact_pane_g4

0xc829,	// (0x000a5eee) bg_popup_call_poc_inact_pane_g5

0xb89f,	// (0x000a4f64) popup_call_poc_act_window_t1_ParamLimits

0xb89f,	// (0x000a4f64) popup_call_poc_act_window_t1

0xb8c7,	// (0x000a4f8c) popup_call_poc_act_window_t2_ParamLimits

0xb8c7,	// (0x000a4f8c) popup_call_poc_act_window_t2

0xb8ef,	// (0x000a4fb4) popup_call_poc_act_window_t3_ParamLimits

0xb8ef,	// (0x000a4fb4) popup_call_poc_act_window_t3

0xb917,	// (0x000a4fdc) popup_call_poc_act_window_t4_ParamLimits

0xb917,	// (0x000a4fdc) popup_call_poc_act_window_t4

0x0003,

0x0320,	// (0x000999e5) popup_call_poc_act_window_t_ParamLimits

0x0320,	// (0x000999e5) popup_call_poc_act_window_t

0xc831,	// (0x000a5ef6) bg_popup_call_poc_inact_pane_g6

0xc839,	// (0x000a5efe) bg_popup_call_poc_inact_pane_g7

0xc841,	// (0x000a5f06) bg_popup_call_poc_inact_pane_g8

0xb929,	// (0x000a4fee) popup_call_poc_inact_window_g2

0xc849,	// (0x000a5f0e) bg_popup_call_poc_inact_pane_g9

0x0008,

0x03c9,	// (0x00099a8e) bg_popup_call_poc_inact_pane_g

0xb931,	// (0x000a4ff6) popup_call_poc_inact_window_t1_ParamLimits

0xb931,	// (0x000a4ff6) popup_call_poc_inact_window_t1

0xb946,	// (0x000a500b) popup_call_poc_inact_window_t2_ParamLimits

0xb946,	// (0x000a500b) popup_call_poc_inact_window_t2

0xb95b,	// (0x000a5020) popup_call_poc_inact_window_t3_ParamLimits

0xb95b,	// (0x000a5020) popup_call_poc_inact_window_t3

0x0002,

0x0329,	// (0x000999ee) popup_call_poc_inact_window_t_ParamLimits

0x0329,	// (0x000999ee) popup_call_poc_inact_window_t

0xc98e,	// (0x000a6053) context_pane_ParamLimits

0x441c,	// (0x0009dae1) signal_pane_ParamLimits

0xaab5,	// (0x000a417a) main_call2_pane

0x438f,	// (0x0009da54) popup_phob_thumbnail2_window_ParamLimits

0x438f,	// (0x0009da54) popup_phob_thumbnail2_window

0x3aa6,	// (0x0009d16b) aid_hotspot_pointer_arrow_pane

0x3aae,	// (0x0009d173) aid_hotspot_pointer_hand_pane

0x4100,	// (0x0009d7c5) phob_pre_status_pane_g5

0x1b50,	// (0x0009b215) cams_zoom_pane_ParamLimits

0x1b5c,	// (0x0009b221) image_vga_pane_ParamLimits

0x1b6b,	// (0x0009b230) main_camera_pane_g1_ParamLimits

0x1b79,	// (0x0009b23e) main_camera_pane_g2_ParamLimits

0x1b85,	// (0x0009b24a) main_camera_pane_g3_ParamLimits

0x1b91,	// (0x0009b256) main_camera_pane_g4_ParamLimits

0x1b9d,	// (0x0009b262) main_camera_pane_g5_ParamLimits

0x1ba9,	// (0x0009b26e) main_camera_pane_g6_ParamLimits

0x1bb5,	// (0x0009b27a) main_camera_pane_g7_ParamLimits

0xf206,	// (0x000a88cb) main_camera_pane_g_ParamLimits

0x1bc1,	// (0x0009b286) main_camera_pane_t1_ParamLimits

0x1bd3,	// (0x0009b298) main_camera_pane_t2_ParamLimits

0xf217,	// (0x000a88dc) main_camera_pane_t_ParamLimits

0xa816,	// (0x000a3edb) bg_popup_preview_window_pane_cp01_ParamLimits

0xa816,	// (0x000a3edb) bg_popup_preview_window_pane_cp01

0xb970,	// (0x000a5035) popup_phob_thumbnail2_window_g1_ParamLimits

0xb970,	// (0x000a5035) popup_phob_thumbnail2_window_g1

0xa5bb,	// (0x000a3c80) call2_cli_visual_pane

0x3df4,	// (0x0009d4b9) popup_call2_audio_conf_window_ParamLimits

0x3df4,	// (0x0009d4b9) popup_call2_audio_conf_window

0x3e09,	// (0x0009d4ce) popup_call2_audio_first_window_ParamLimits

0x3e09,	// (0x0009d4ce) popup_call2_audio_first_window

0x3ea7,	// (0x0009d56c) popup_call2_audio_in_window_ParamLimits

0x3ea7,	// (0x0009d56c) popup_call2_audio_in_window

0x3ee9,	// (0x0009d5ae) popup_call2_audio_out_window_ParamLimits

0x3ee9,	// (0x0009d5ae) popup_call2_audio_out_window

0x3f4b,	// (0x0009d610) popup_call2_audio_second_window_ParamLimits

0x3f4b,	// (0x0009d610) popup_call2_audio_second_window

0x3fa9,	// (0x0009d66e) popup_call2_audio_wait_window_ParamLimits

0x3fa9,	// (0x0009d66e) popup_call2_audio_wait_window

0xa5bb,	// (0x000a3c80) bg_popup_call2_act_pane_cp03

0xa7f8,	// (0x000a3ebd) list_conf_pane_cp

0xb97c,	// (0x000a5041) popup_call2_audio_conf_window_t1

0xb98a,	// (0x000a504f) list_single_graphic_popup_conf2_pane_ParamLimits

0xb98a,	// (0x000a504f) list_single_graphic_popup_conf2_pane

0xb247,	// (0x000a490c) list_highlight_pane_cp04

0xb99d,	// (0x000a5062) list_single_graphic_popup_conf2_pane_g1

0xb258,	// (0x000a491d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0330,	// (0x000999f5) list_single_graphic_popup_conf2_pane_g

0xb9a7,	// (0x000a506c) list_single_graphic_popup_conf2_pane_t1

0xb9b5,	// (0x000a507a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9b5,	// (0x000a507a) bg_popup_call2_act_pane_cp01

0xba3f,	// (0x000a5104) call_type_pane_cp05_ParamLimits

0xba3f,	// (0x000a5104) call_type_pane_cp05

0xba93,	// (0x000a5158) popup_call2_audio_second_window_g1_ParamLimits

0xba93,	// (0x000a5158) popup_call2_audio_second_window_g1

0xbae7,	// (0x000a51ac) popup_call2_audio_second_window_g2_ParamLimits

0xbae7,	// (0x000a51ac) popup_call2_audio_second_window_g2

0x0002,

0x0335,	// (0x000999fa) popup_call2_audio_second_window_g_ParamLimits

0x0335,	// (0x000999fa) popup_call2_audio_second_window_g

0xbb4c,	// (0x000a5211) popup_call2_audio_second_window_t1_ParamLimits

0xbb4c,	// (0x000a5211) popup_call2_audio_second_window_t1

0xbc07,	// (0x000a52cc) popup_call2_audio_second_window_t2_ParamLimits

0xbc07,	// (0x000a52cc) popup_call2_audio_second_window_t2

0xbc5a,	// (0x000a531f) popup_call2_audio_second_window_t3_ParamLimits

0xbc5a,	// (0x000a531f) popup_call2_audio_second_window_t3

0x0003,

0x033c,	// (0x00099a01) popup_call2_audio_second_window_t_ParamLimits

0x033c,	// (0x00099a01) popup_call2_audio_second_window_t

0xa5bb,	// (0x000a3c80) bg_popup_call2_in_pane_cp02

0xa5c5,	// (0x000a3c8a) call_type_pane_cp04

0xa5cd,	// (0x000a3c92) popup_call2_audio_wait_window_g1

0xa5d5,	// (0x000a3c9a) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000a87ba) popup_call2_audio_wait_window_g

0xa5dd,	// (0x000a3ca2) popup_call2_audio_wait_window_t3

0xbd4d,	// (0x000a5412) bg_popup_call2_act_pane_ParamLimits

0xbd4d,	// (0x000a5412) bg_popup_call2_act_pane

0xbe0d,	// (0x000a54d2) call_type_pane_cp03_ParamLimits

0xbe0d,	// (0x000a54d2) call_type_pane_cp03

0xbe71,	// (0x000a5536) popup_call2_audio_first_window_g1_ParamLimits

0xbe71,	// (0x000a5536) popup_call2_audio_first_window_g1

0xbee1,	// (0x000a55a6) popup_call2_audio_first_window_g2_ParamLimits

0xbee1,	// (0x000a55a6) popup_call2_audio_first_window_g2

0xb544,	// (0x000a4c09) popup_call2_audio_first_window_g3_ParamLimits

0xb544,	// (0x000a4c09) popup_call2_audio_first_window_g3

0x0004,

0xf49a,	// (0x000a8b5f) popup_call2_audio_first_window_g_ParamLimits

0xf49a,	// (0x000a8b5f) popup_call2_audio_first_window_g

0xbfbf,	// (0x000a5684) popup_call2_audio_first_window_t1_ParamLimits

0xbfbf,	// (0x000a5684) popup_call2_audio_first_window_t1

0xc0c2,	// (0x000a5787) popup_call2_audio_first_window_t4_ParamLimits

0xc0c2,	// (0x000a5787) popup_call2_audio_first_window_t4

0xc1a5,	// (0x000a586a) popup_call2_audio_first_window_t5_ParamLimits

0xc1a5,	// (0x000a586a) popup_call2_audio_first_window_t5

0x0003,

0x0350,	// (0x00099a15) popup_call2_audio_first_window_t_ParamLimits

0x0350,	// (0x00099a15) popup_call2_audio_first_window_t

0xa80e,	// (0x000a3ed3) bg_popup_call2_act_pane_g1

0xc861,	// (0x000a5f26) popup_cale_lunar_info_window_t1

0xc86f,	// (0x000a5f34) popup_cale_lunar_info_window_t2

0xc87d,	// (0x000a5f42) popup_cale_lunar_info_window_t3

0xa5bb,	// (0x000a3c80) bg_popup_call2_bubble_pane

0xc2a6,	// (0x000a596b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc2a6,	// (0x000a596b) bg_popup_call2_in_pane_cp01

0x9d36,	// (0x000a33fb) call_type_pane_cp02

0xc2ee,	// (0x000a59b3) popup_call2_audio_out_window_g1_ParamLimits

0xc2ee,	// (0x000a59b3) popup_call2_audio_out_window_g1

0xc31a,	// (0x000a59df) popup_call2_audio_out_window_g2_ParamLimits

0xc31a,	// (0x000a59df) popup_call2_audio_out_window_g2

0xc342,	// (0x000a5a07) popup_call2_audio_out_window_g3_ParamLimits

0xc342,	// (0x000a5a07) popup_call2_audio_out_window_g3

0x0003,

0x0359,	// (0x00099a1e) popup_call2_audio_out_window_g_ParamLimits

0x0359,	// (0x00099a1e) popup_call2_audio_out_window_g

0xc37d,	// (0x000a5a42) popup_call2_audio_out_window_t1_ParamLimits

0xc37d,	// (0x000a5a42) popup_call2_audio_out_window_t1

0xc3dc,	// (0x000a5aa1) popup_call2_audio_out_window_t2_ParamLimits

0xc3dc,	// (0x000a5aa1) popup_call2_audio_out_window_t2

0xc430,	// (0x000a5af5) popup_call2_audio_out_window_t3_ParamLimits

0xc430,	// (0x000a5af5) popup_call2_audio_out_window_t3

0xc446,	// (0x000a5b0b) popup_call2_audio_out_window_t4_ParamLimits

0xc446,	// (0x000a5b0b) popup_call2_audio_out_window_t4

0xc45c,	// (0x000a5b21) popup_call2_audio_out_window_t5_ParamLimits

0xc45c,	// (0x000a5b21) popup_call2_audio_out_window_t5

0x0005,

0xf4a5,	// (0x000a8b6a) popup_call2_audio_out_window_t_ParamLimits

0xf4a5,	// (0x000a8b6a) popup_call2_audio_out_window_t

0xc4c0,	// (0x000a5b85) bg_popup_call2_in_pane_ParamLimits

0xc4c0,	// (0x000a5b85) bg_popup_call2_in_pane

0xc51c,	// (0x000a5be1) popup_call2_audio_in_window_g1_ParamLimits

0xc51c,	// (0x000a5be1) popup_call2_audio_in_window_g1

0xc569,	// (0x000a5c2e) popup_call2_audio_in_window_g2_ParamLimits

0xc569,	// (0x000a5c2e) popup_call2_audio_in_window_g2

0xc5a1,	// (0x000a5c66) popup_call2_audio_in_window_g3_ParamLimits

0xc5a1,	// (0x000a5c66) popup_call2_audio_in_window_g3

0x0003,

0xf4b2,	// (0x000a8b77) popup_call2_audio_in_window_g_ParamLimits

0xf4b2,	// (0x000a8b77) popup_call2_audio_in_window_g

0xc5f9,	// (0x000a5cbe) popup_call2_audio_in_window_t1_ParamLimits

0xc5f9,	// (0x000a5cbe) popup_call2_audio_in_window_t1

0xc679,	// (0x000a5d3e) popup_call2_audio_in_window_t2_ParamLimits

0xc679,	// (0x000a5d3e) popup_call2_audio_in_window_t2

0xc6f9,	// (0x000a5dbe) popup_call2_audio_in_window_t3_ParamLimits

0xc6f9,	// (0x000a5dbe) popup_call2_audio_in_window_t3

0xc713,	// (0x000a5dd8) popup_call2_audio_in_window_t4_ParamLimits

0xc713,	// (0x000a5dd8) popup_call2_audio_in_window_t4

0xc725,	// (0x000a5dea) popup_call2_audio_in_window_t5_ParamLimits

0xc725,	// (0x000a5dea) popup_call2_audio_in_window_t5

0xc737,	// (0x000a5dfc) popup_call2_audio_in_window_t6_ParamLimits

0xc737,	// (0x000a5dfc) popup_call2_audio_in_window_t6

0x0005,

0x0378,	// (0x00099a3d) popup_call2_audio_in_window_t_ParamLimits

0x0378,	// (0x00099a3d) popup_call2_audio_in_window_t

0xa80e,	// (0x000a3ed3) bg_popup_call2_in_pane_g1

0xc88b,	// (0x000a5f50) popup_cale_lunar_info_window_t4

0x0003,

0x03f3,	// (0x00099ab8) popup_cale_lunar_info_window_t

0xa816,	// (0x000a3edb) bg_popup_call2_rect_pane_ParamLimits

0xa816,	// (0x000a3edb) bg_popup_call2_rect_pane

0xa5bb,	// (0x000a3c80) call2_cli_visual_graphic_pane

0xa5bb,	// (0x000a3c80) call2_cli_visual_text_pane

0x44c5,	// (0x0009db8a) smil_status_volume_pane_g3

0x0002,

0xa93c,	// (0x000a4001) call2_cli_visual_graphic_pane_g1

0xa93c,	// (0x000a4001) call2_cli_visual_graphic_pane_g2

0xa93c,	// (0x000a4001) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x000a8b80) call2_cli_visual_graphic_pane_g

0xc749,	// (0x000a5e0e) bg_popup_call2_rect_pane_g1

0xa9c8,	// (0x000a408d) bg_popup_call2_rect_pane_g2

0xc751,	// (0x000a5e16) bg_popup_call2_rect_pane_g3

0xc759,	// (0x000a5e1e) bg_popup_call2_rect_pane_g4

0xc761,	// (0x000a5e26) bg_popup_call2_rect_pane_g5

0xc769,	// (0x000a5e2e) bg_popup_call2_rect_pane_g6

0xc771,	// (0x000a5e36) bg_popup_call2_rect_pane_g7

0xc779,	// (0x000a5e3e) bg_popup_call2_rect_pane_g8

0xc781,	// (0x000a5e46) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x000a8b87) bg_popup_call2_rect_pane_g

0xc789,	// (0x000a5e4e) bg_popup_call2_bubble_pane_g1

0xc791,	// (0x000a5e56) bg_popup_call2_bubble_pane_g2

0xc799,	// (0x000a5e5e) bg_popup_call2_bubble_pane_g3

0xc7a1,	// (0x000a5e66) bg_popup_call2_bubble_pane_g4

0xc7a9,	// (0x000a5e6e) bg_popup_call2_bubble_pane_g5

0xc7b1,	// (0x000a5e76) bg_popup_call2_bubble_pane_g6

0xc7b9,	// (0x000a5e7e) bg_popup_call2_bubble_pane_g7

0xc7c1,	// (0x000a5e86) bg_popup_call2_bubble_pane_g8

0xc7c9,	// (0x000a5e8e) bg_popup_call2_bubble_pane_g9

0x0008,

0x039f,	// (0x00099a64) bg_popup_call2_bubble_pane_g

0x1662,	// (0x0009ad27) aid_cale_week_size_cell_pane

0x1be5,	// (0x0009b2aa) aid_cams_cif_uncrop_pane_ParamLimits

0x1be5,	// (0x0009b2aa) aid_cams_cif_uncrop_pane

0x1d40,	// (0x0009b405) aid_cams_size_cell_ParamLimits

0x1d40,	// (0x0009b405) aid_cams_size_cell

0x1d4c,	// (0x0009b411) grid_cams_pane_ParamLimits

0x1d5a,	// (0x0009b41f) linegrid_cams_pane_ParamLimits

0x1f28,	// (0x0009b5ed) call_video_pane_t1

0x1f49,	// (0x0009b60e) call_video_pane_t2

0x0001,

0xf26a,	// (0x000a892f) call_video_pane_t

0x2497,	// (0x0009bb5c) aid_cale_month_size_cell_pane_ParamLimits

0x2497,	// (0x0009bb5c) aid_cale_month_size_cell_pane

0xf505,	// (0x000a8bca) smil_status_volume_pane_g

0x44d2,	// (0x0009db97) volume_smil_pane_ParamLimits

0x0dae,	// (0x0009a473) aid_popup2_width_pane

0x155c,	// (0x0009ac21) cell_qdial_pane_g4_ParamLimits

0x155c,	// (0x0009ac21) cell_qdial_pane_g4

0x34df,	// (0x0009cba4) aid_blid_cardinal_pane_ParamLimits

0x34ef,	// (0x0009cbb4) aid_blid_destination_pane_ParamLimits

0x34ef,	// (0x0009cbb4) aid_blid_destination_pane

0xa816,	// (0x000a3edb) bg_popup_call_poc_act_pane_ParamLimits

0xa816,	// (0x000a3edb) bg_popup_call_poc_act_pane

0xa816,	// (0x000a3edb) bg_popup_call_poc_inact_pane_ParamLimits

0xa816,	// (0x000a3edb) bg_popup_call_poc_inact_pane

0xc7d1,	// (0x000a5e96) bg_popup_call_poc_act_pane_g1

0xc7d9,	// (0x000a5e9e) bg_popup_call_poc_act_pane_g2

0xc7e1,	// (0x000a5ea6) bg_popup_call_poc_act_pane_g3

0xc7a1,	// (0x000a5e66) bg_popup_call_poc_act_pane_g4

0xc7a9,	// (0x000a5e6e) bg_popup_call_poc_act_pane_g5

0xc7e9,	// (0x000a5eae) bg_popup_call_poc_act_pane_g6

0xc7b9,	// (0x000a5e7e) bg_popup_call_poc_act_pane_g7

0xc7f1,	// (0x000a5eb6) bg_popup_call_poc_act_pane_g8

0xa5bb,	// (0x000a3c80) main_usb_pane

0x42c2,	// (0x0009d987) popup_cale_lunar_info_window

0x2266,	// (0x0009b92b) im_reading_pane_t1_ParamLimits

0xabd4,	// (0x000a4299) list_im_pane_ParamLimits

0xabe5,	// (0x000a42aa) scroll_pane_cp07_ParamLimits

0xa5bb,	// (0x000a3c80) grid_highlight_pane_cp012

0xa816,	// (0x000a3edb) mup_scale_pane_ParamLimits

0xb544,	// (0x000a4c09) main_usb_pane_g1_ParamLimits

0xb544,	// (0x000a4c09) main_usb_pane_g1

0x4023,	// (0x0009d6e8) main_usb_pane_g2_ParamLimits

0x4023,	// (0x0009d6e8) main_usb_pane_g2

0x0001,

0xf4d5,	// (0x000a8b9a) main_usb_pane_g_ParamLimits

0xf4d5,	// (0x000a8b9a) main_usb_pane_g

0x402f,	// (0x0009d6f4) main_usb_pane_t1_ParamLimits

0x402f,	// (0x0009d6f4) main_usb_pane_t1

0x4041,	// (0x0009d706) main_usb_pane_t2_ParamLimits

0x4041,	// (0x0009d706) main_usb_pane_t2

0x4053,	// (0x0009d718) main_usb_pane_t3_ParamLimits

0x4053,	// (0x0009d718) main_usb_pane_t3

0x4065,	// (0x0009d72a) main_usb_pane_t4_ParamLimits

0x4065,	// (0x0009d72a) main_usb_pane_t4

0x4077,	// (0x0009d73c) main_usb_pane_t5_ParamLimits

0x4077,	// (0x0009d73c) main_usb_pane_t5

0x4089,	// (0x0009d74e) main_usb_pane_t6_ParamLimits

0x4089,	// (0x0009d74e) main_usb_pane_t6

0x0005,

0xf4da,	// (0x000a8b9f) main_usb_pane_t_ParamLimits

0x3485,	// (0x0009cb4a) aid_text_placing

0x3491,	// (0x0009cb56) main_location2_pane_t1_ParamLimits

0x34a5,	// (0x0009cb6a) main_location2_pane_t2_ParamLimits

0x34b9,	// (0x0009cb7e) main_location2_pane_t3_ParamLimits

0x34cd,	// (0x0009cb92) main_location2_pane_t4_ParamLimits

0x34cd,	// (0x0009cb92) main_location2_pane_t4

0xf391,	// (0x000a8a56) main_location2_pane_t_ParamLimits

0xa852,	// (0x000a3f17) find_pinb_pane_g2_ParamLimits

0xa852,	// (0x000a3f17) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000a87e0) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000a87e0) find_pinb_pane_g

0xa85e,	// (0x000a3f23) find_pinb_pane_t1_ParamLimits

0xa870,	// (0x000a3f35) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000a87e5) find_pinb_pane_t_ParamLimits

0xa5bb,	// (0x000a3c80) main_call3_pane

0x2a5a,	// (0x0009c11f) cale_month_day_heading_pane_t1_ParamLimits

0x2ae0,	// (0x0009c1a5) cale_month_day_heading_pane_t2_ParamLimits

0x2b59,	// (0x0009c21e) cale_month_day_heading_pane_t3_ParamLimits

0x2bd2,	// (0x0009c297) cale_month_day_heading_pane_t4_ParamLimits

0x2c4b,	// (0x0009c310) cale_month_day_heading_pane_t5_ParamLimits

0x2cc4,	// (0x0009c389) cale_month_day_heading_pane_t6_ParamLimits

0x2d3d,	// (0x0009c402) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x000a8967) cale_month_day_heading_pane_t_ParamLimits

0xae2f,	// (0x000a44f4) smil_status_volume_pane

0x3be2,	// (0x0009d2a7) postcard_address_pane_ParamLimits

0x3be2,	// (0x0009d2a7) postcard_address_pane

0x3bee,	// (0x0009d2b3) postcard_message_pane_ParamLimits

0x3bee,	// (0x0009d2b3) postcard_message_pane

0x3fe8,	// (0x0009d6ad) call2_cli_visual_pane_t1_ParamLimits

0x3fe8,	// (0x0009d6ad) call2_cli_visual_pane_t1

0x4629,	// (0x0009dcee) postcard_message_pane_t1_ParamLimits

0x4629,	// (0x0009dcee) postcard_message_pane_t1

0x4612,	// (0x0009dcd7) postcard_address_pane_t1_ParamLimits

0x4612,	// (0x0009dcd7) postcard_address_pane_t1

0x4603,	// (0x0009dcc8) popup_call3_audio_in_window_ParamLimits

0x4603,	// (0x0009dcc8) popup_call3_audio_in_window

0x44e7,	// (0x0009dbac) bg_popup_call3_in_pane_ParamLimits

0x44e7,	// (0x0009dbac) bg_popup_call3_in_pane

0x4549,	// (0x0009dc0e) popup_call3_audio_in_window_g1_ParamLimits

0x4549,	// (0x0009dc0e) popup_call3_audio_in_window_g1

0x4561,	// (0x0009dc26) popup_call3_audio_in_window_g2_ParamLimits

0x4561,	// (0x0009dc26) popup_call3_audio_in_window_g2

0x4579,	// (0x0009dc3e) popup_call3_audio_in_window_g3_ParamLimits

0x4579,	// (0x0009dc3e) popup_call3_audio_in_window_g3

0x0003,

0xf50c,	// (0x000a8bd1) popup_call3_audio_in_window_g_ParamLimits

0xf50c,	// (0x000a8bd1) popup_call3_audio_in_window_g

0x45a1,	// (0x0009dc66) popup_call3_audio_in_window_t1_ParamLimits

0x45a1,	// (0x0009dc66) popup_call3_audio_in_window_t1

0x45c9,	// (0x0009dc8e) popup_call3_audio_in_window_t2_ParamLimits

0x45c9,	// (0x0009dc8e) popup_call3_audio_in_window_t2

0x45f1,	// (0x0009dcb6) popup_call3_audio_in_window_t3_ParamLimits

0x45f1,	// (0x0009dcb6) popup_call3_audio_in_window_t3

0x0002,

0xf515,	// (0x000a8bda) popup_call3_audio_in_window_t_ParamLimits

0xf515,	// (0x000a8bda) popup_call3_audio_in_window_t

0xaab5,	// (0x000a417a) bg_popup_call3_rect_pane

0xc749,	// (0x000a5e0e) bg_popup_call3_rect_pane_g1

0xa9c8,	// (0x000a408d) bg_popup_call3_rect_pane_g2

0xc751,	// (0x000a5e16) bg_popup_call3_rect_pane_g3

0xc759,	// (0x000a5e1e) bg_popup_call3_rect_pane_g4

0xc761,	// (0x000a5e26) bg_popup_call3_rect_pane_g5

0xc769,	// (0x000a5e2e) bg_popup_call3_rect_pane_g6

0xc771,	// (0x000a5e36) bg_popup_call3_rect_pane_g7

0x37f5,	// (0x0009ceba) mup_visualizer_osc_pane

0xb5e5,	// (0x000a4caa) mup_visualizer_spec_pane

0x4507,	// (0x0009dbcc) call3_video_qcif_pane_ParamLimits

0x4507,	// (0x0009dbcc) call3_video_qcif_pane

0x4519,	// (0x0009dbde) call3_video_qcif_uncrop_pane_ParamLimits

0x4519,	// (0x0009dbde) call3_video_qcif_uncrop_pane

0x4527,	// (0x0009dbec) call3_video_subqcif_pane_ParamLimits

0x4527,	// (0x0009dbec) call3_video_subqcif_pane

0x4539,	// (0x0009dbfe) call3_video_subqcif_uncrop_pane_ParamLimits

0x4539,	// (0x0009dbfe) call3_video_subqcif_uncrop_pane

0x4591,	// (0x0009dc56) popup_call3_audio_in_window_g4_ParamLimits

0x4591,	// (0x0009dc56) popup_call3_audio_in_window_g4

0x44b2,	// (0x0009db77) mup_spec_half_pane

0x44bb,	// (0x0009db80) mup_spec_half_pane_cp

0xc9ee,	// (0x000a60b3) mup_osc_middle_pane

0xc9f7,	// (0x000a60bc) mup_visualizer_osc_pane_g1

0x4493,	// (0x0009db58) mup_spec_bar_pane_ParamLimits

0x4493,	// (0x0009db58) mup_spec_bar_pane

0xc9db,	// (0x000a60a0) mup_spec_bar_pane_g1

0xc9e5,	// (0x000a60aa) mup_spec_bar_pane_g2

0x0001,

0x0437,	// (0x00099afc) mup_spec_bar_pane_g

0x1662,	// (0x0009ad27) aid_cale_week_size_cell_pane_ParamLimits

0x1677,	// (0x0009ad3c) bg_cale_heading_pane_ParamLimits

0xaa0e,	// (0x000a40d3) bg_cale_pane_cp01_ParamLimits

0x1699,	// (0x0009ad5e) cale_week_corner_pane_ParamLimits

0x16b3,	// (0x0009ad78) cale_week_day_heading_pane_ParamLimits

0x16d5,	// (0x0009ad9a) cale_week_scroll_pane_g1_ParamLimits

0x16f2,	// (0x0009adb7) cale_week_scroll_pane_g2_ParamLimits

0x1705,	// (0x0009adca) cale_week_scroll_pane_g3_ParamLimits

0x1718,	// (0x0009addd) cale_week_scroll_pane_g4_ParamLimits

0x172b,	// (0x0009adf0) cale_week_scroll_pane_g5_ParamLimits

0x173e,	// (0x0009ae03) cale_week_scroll_pane_g6_ParamLimits

0x1751,	// (0x0009ae16) cale_week_scroll_pane_g7_ParamLimits

0x1766,	// (0x0009ae2b) cale_week_scroll_pane_g8_ParamLimits

0x177b,	// (0x0009ae40) cale_week_scroll_pane_g9_ParamLimits

0x178e,	// (0x0009ae53) cale_week_scroll_pane_g10_ParamLimits

0x17a1,	// (0x0009ae66) cale_week_scroll_pane_g11_ParamLimits

0x17b4,	// (0x0009ae79) cale_week_scroll_pane_g12_ParamLimits

0x17cb,	// (0x0009ae90) cale_week_scroll_pane_g13_ParamLimits

0x17e6,	// (0x0009aeab) cale_week_scroll_pane_g14_ParamLimits

0x1801,	// (0x0009aec6) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000a8871) cale_week_scroll_pane_g_ParamLimits

0x1831,	// (0x0009aef6) cale_week_time_pane_ParamLimits

0x1846,	// (0x0009af0b) grid_cale_week_pane_ParamLimits

0xaa2b,	// (0x000a40f0) listscroll_cale_week_pane_t1

0xaa3d,	// (0x000a4102) scroll_pane_cp08_ParamLimits

0x250b,	// (0x0009bbd0) cale_month_corner_pane_ParamLimits

0xae05,	// (0x000a44ca) cale_month_pane_t1

0x29d9,	// (0x0009c09e) cale_month_week_pane_ParamLimits

0xb544,	// (0x000a4c09) popup_call_status_window_g1_ParamLimits

0x328e,	// (0x0009c953) popup_call_status_window_g2_ParamLimits

0x329a,	// (0x0009c95f) popup_call_status_window_g3_ParamLimits

0xf32c,	// (0x000a89f1) popup_call_status_window_g_ParamLimits

0xb1c7,	// (0x000a488c) aid_call2_pane

0x3a9a,	// (0x0009d15f) msg_header_pane_g1

0x3be2,	// (0x0009d2a7) postcard_address2_pane_ParamLimits

0x3be2,	// (0x0009d2a7) postcard_address2_pane

0x3bee,	// (0x0009d2b3) postcard_message2_pane_ParamLimits

0x3bee,	// (0x0009d2b3) postcard_message2_pane

0x442a,	// (0x0009daef) message2_row_pane_ParamLimits

0x442a,	// (0x0009daef) message2_row_pane

0x4445,	// (0x0009db0a) address2_row_pane_ParamLimits

0x4445,	// (0x0009db0a) address2_row_pane

0xc9a9,	// (0x000a606e) postcard_message2_row_pane_g1

0xc9b1,	// (0x000a6076) postcard_message2_row_pane_t1

0xc9a9,	// (0x000a606e) address2_row_pane_g1

0xc9b1,	// (0x000a6076) address2_row_pane_t1

0x1acb,	// (0x0009b190) aid_size_cell_vorec

0xa5bb,	// (0x000a3c80) main_rss_pane

0x4458,	// (0x0009db1d) rss_list_single_pane_ParamLimits

0x4458,	// (0x0009db1d) rss_list_single_pane

0xc9bf,	// (0x000a6084) rss_list_single_pane_t1

0xc9cd,	// (0x000a6092) rss_list_single_pane_t2

0x0001,

0x0432,	// (0x00099af7) rss_list_single_pane_t

0xa5bb,	// (0x000a3c80) main_camera2_pane

0xa5bb,	// (0x000a3c80) main_video2_pane

0x468d,	// (0x0009dd52) cams_zoom_pane_cp2_ParamLimits

0x468d,	// (0x0009dd52) cams_zoom_pane_cp2

0x4699,	// (0x0009dd5e) image2_vga_pane_ParamLimits

0x4699,	// (0x0009dd5e) image2_vga_pane

0x46a8,	// (0x0009dd6d) main_camera2_pane_g1_ParamLimits

0x46a8,	// (0x0009dd6d) main_camera2_pane_g1

0x46b4,	// (0x0009dd79) main_camera2_pane_g2_ParamLimits

0x46b4,	// (0x0009dd79) main_camera2_pane_g2

0x46c0,	// (0x0009dd85) main_camera2_pane_g3_ParamLimits

0x46c0,	// (0x0009dd85) main_camera2_pane_g3

0x46cc,	// (0x0009dd91) main_camera2_pane_g4_ParamLimits

0x46cc,	// (0x0009dd91) main_camera2_pane_g4

0x46d8,	// (0x0009dd9d) main_camera2_pane_g5_ParamLimits

0x46d8,	// (0x0009dd9d) main_camera2_pane_g5

0x46e4,	// (0x0009dda9) main_camera2_pane_g6_ParamLimits

0x46e4,	// (0x0009dda9) main_camera2_pane_g6

0x46f0,	// (0x0009ddb5) main_camera2_pane_g7_ParamLimits

0x46f0,	// (0x0009ddb5) main_camera2_pane_g7

0x46fc,	// (0x0009ddc1) main_camera2_pane_g8_ParamLimits

0x46fc,	// (0x0009ddc1) main_camera2_pane_g8

0x0008,

0xf51c,	// (0x000a8be1) main_camera2_pane_g_ParamLimits

0xf51c,	// (0x000a8be1) main_camera2_pane_g

0x4714,	// (0x0009ddd9) main_camera2_pane_t1_ParamLimits

0x4714,	// (0x0009ddd9) main_camera2_pane_t1

0x4726,	// (0x0009ddeb) main_camera2_pane_t2_ParamLimits

0x4726,	// (0x0009ddeb) main_camera2_pane_t2

0x4738,	// (0x0009ddfd) main_camera2_pane_t3_ParamLimits

0x4738,	// (0x0009ddfd) main_camera2_pane_t3

0x474a,	// (0x0009de0f) main_camera2_pane_t4_ParamLimits

0x474a,	// (0x0009de0f) main_camera2_pane_t4

0x0006,

0xf52f,	// (0x000a8bf4) main_camera2_pane_t_ParamLimits

0xf52f,	// (0x000a8bf4) main_camera2_pane_t

0x47ac,	// (0x0009de71) cams_zoom_pane_cp4_ParamLimits

0x47ac,	// (0x0009de71) cams_zoom_pane_cp4

0x47bc,	// (0x0009de81) image2_cif_pane_ParamLimits

0x47bc,	// (0x0009de81) image2_cif_pane

0x47d1,	// (0x0009de96) image2_subqcif_pane_ParamLimits

0x47d1,	// (0x0009de96) image2_subqcif_pane

0x47e0,	// (0x0009dea5) main_video2_pane_g1_ParamLimits

0x47e0,	// (0x0009dea5) main_video2_pane_g1

0x47f2,	// (0x0009deb7) main_video2_pane_g2_ParamLimits

0x47f2,	// (0x0009deb7) main_video2_pane_g2

0x4802,	// (0x0009dec7) main_video2_pane_g3_ParamLimits

0x4802,	// (0x0009dec7) main_video2_pane_g3

0x4812,	// (0x0009ded7) main_video2_pane_g4_ParamLimits

0x4812,	// (0x0009ded7) main_video2_pane_g4

0x4822,	// (0x0009dee7) main_video2_pane_g5_ParamLimits

0x4822,	// (0x0009dee7) main_video2_pane_g5

0x4832,	// (0x0009def7) main_video2_pane_g6_ParamLimits

0x4832,	// (0x0009def7) main_video2_pane_g6

0x0005,

0xf53e,	// (0x000a8c03) main_video2_pane_g_ParamLimits

0xf53e,	// (0x000a8c03) main_video2_pane_g

0x4844,	// (0x0009df09) main_video2_pane_t1_ParamLimits

0x4844,	// (0x0009df09) main_video2_pane_t1

0x485e,	// (0x0009df23) main_video2_pane_t2_ParamLimits

0x485e,	// (0x0009df23) main_video2_pane_t2

0x4884,	// (0x0009df49) main_video2_pane_t3_ParamLimits

0x4884,	// (0x0009df49) main_video2_pane_t3

0x0002,

0xf54b,	// (0x000a8c10) main_video2_pane_t_ParamLimits

0xf54b,	// (0x000a8c10) main_video2_pane_t

0x4140,	// (0x0009d805) call_muted_g2

0x0001,

0xf500,	// (0x000a8bc5) call_muted_g

0xa5bb,	// (0x000a3c80) main_mup2_pane

0xca4c,	// (0x000a6111) main_mup2_pane_g1_ParamLimits

0xca4c,	// (0x000a6111) main_mup2_pane_g1

0x48aa,	// (0x0009df6f) main_mup2_pane_g2_ParamLimits

0x48aa,	// (0x0009df6f) main_mup2_pane_g2

0x4b2c,	// (0x0009e1f1) main_mup_pane_g13_cp1

0x4b34,	// (0x0009e1f9) mup_volume_pane_cp1

0x48ca,	// (0x0009df8f) main_mup2_pane_g4_ParamLimits

0x48ca,	// (0x0009df8f) main_mup2_pane_g4

0x48df,	// (0x0009dfa4) main_mup2_pane_g5_ParamLimits

0x48df,	// (0x0009dfa4) main_mup2_pane_g5

0x48f4,	// (0x0009dfb9) main_mup2_pane_g6_ParamLimits

0x48f4,	// (0x0009dfb9) main_mup2_pane_g6

0x4909,	// (0x0009dfce) main_mup2_pane_g7_ParamLimits

0x4909,	// (0x0009dfce) main_mup2_pane_g7

0x0006,

0xf552,	// (0x000a8c17) main_mup2_pane_g_ParamLimits

0xf552,	// (0x000a8c17) main_mup2_pane_g

0x4925,	// (0x0009dfea) main_mup2_pane_t1_ParamLimits

0x4925,	// (0x0009dfea) main_mup2_pane_t1

0x493c,	// (0x0009e001) main_mup2_pane_t2_ParamLimits

0x493c,	// (0x0009e001) main_mup2_pane_t2

0x4953,	// (0x0009e018) main_mup2_pane_t3_ParamLimits

0x4953,	// (0x0009e018) main_mup2_pane_t3

0x496a,	// (0x0009e02f) main_mup2_pane_t4_ParamLimits

0x496a,	// (0x0009e02f) main_mup2_pane_t4

0x4984,	// (0x0009e049) main_mup2_pane_t5_ParamLimits

0x4984,	// (0x0009e049) main_mup2_pane_t5

0x499e,	// (0x0009e063) main_mup2_pane_t6_ParamLimits

0x499e,	// (0x0009e063) main_mup2_pane_t6

0x0005,

0xf561,	// (0x000a8c26) main_mup2_pane_t_ParamLimits

0xf561,	// (0x000a8c26) main_mup2_pane_t

0x49d6,	// (0x0009e09b) mup2_visualizer_pane_ParamLimits

0x49d6,	// (0x0009e09b) mup2_visualizer_pane

0x4a0c,	// (0x0009e0d1) mup_progress_pane_cp_ParamLimits

0x4a0c,	// (0x0009e0d1) mup_progress_pane_cp

0x4b17,	// (0x0009e1dc) mup_volume_pane_cp_ParamLimits

0x4b17,	// (0x0009e1dc) mup_volume_pane_cp

0x4a23,	// (0x0009e0e8) mup2_visualizer_pane_g1_ParamLimits

0x4a23,	// (0x0009e0e8) mup2_visualizer_pane_g1

0xca2e,	// (0x000a60f3) mup2_visualizer_pane_g2_ParamLimits

0xca2e,	// (0x000a60f3) mup2_visualizer_pane_g2

0x4a38,	// (0x0009e0fd) mup2_visualizer_pane_g3_ParamLimits

0x4a38,	// (0x0009e0fd) mup2_visualizer_pane_g3

0x0002,

0xf56e,	// (0x000a8c33) mup2_visualizer_pane_g_ParamLimits

0xf56e,	// (0x000a8c33) mup2_visualizer_pane_g

0xb80c,	// (0x000a4ed1) aid_size_cell_fmradio

0x4256,	// (0x0009d91b) aid_height_parent_landcape

0xac63,	// (0x000a4328) wml_content_pane_cp

0xac6b,	// (0x000a4330) wml_tabs_pane

0xac74,	// (0x000a4339) popup_wml_miniature_window

0xac7c,	// (0x000a4341) scroll_pane_cp021

0xac90,	// (0x000a4355) wml_content_pane_comp8

0xa5bb,	// (0x000a3c80) bg_popup_sub_pane_cp05

0xca58,	// (0x000a611d) popup_wml_miniature_window_g1

0xca60,	// (0x000a6125) wml_miniature_view_pane

0x4a46,	// (0x0009e10b) aid_size_wml_view

0x4a4e,	// (0x0009e113) wml_miniature_view_pane_g1

0x4a57,	// (0x0009e11c) wml_miniature_view_pane_g2

0x4a60,	// (0x0009e125) wml_miniature_view_pane_g3

0x4a68,	// (0x0009e12d) wml_miniature_view_pane_g4

0x4a70,	// (0x0009e135) wml_miniature_view_pane_g5

0x4a78,	// (0x0009e13d) wml_miniature_view_pane_g6

0x4a80,	// (0x0009e145) wml_miniature_view_pane_g7

0x4a88,	// (0x0009e14d) wml_miniature_view_pane_g8

0x0007,

0xf575,	// (0x000a8c3a) wml_miniature_view_pane_g

0xca4c,	// (0x000a6111) background_graphic_ParamLimits

0xca4c,	// (0x000a6111) background_graphic

0xca68,	// (0x000a612d) wml_tabs_2_pane

0xca71,	// (0x000a6136) wml_tabs_3_pane_ParamLimits

0xca71,	// (0x000a6136) wml_tabs_3_pane

0xca83,	// (0x000a6148) wml_tabs_4_pane_ParamLimits

0xca83,	// (0x000a6148) wml_tabs_4_pane

0xca99,	// (0x000a615e) wml_tabs_5_pane_ParamLimits

0xca99,	// (0x000a615e) wml_tabs_5_pane

0xcab3,	// (0x000a6178) wml_tabs_pane_g2_ParamLimits

0xcab3,	// (0x000a6178) wml_tabs_pane_g2

0xcac7,	// (0x000a618c) wml_tabs_pane_g3_ParamLimits

0xcac7,	// (0x000a618c) wml_tabs_pane_g3

0x4a90,	// (0x0009e155) wml_tabs_2_active_pane_ParamLimits

0x4a90,	// (0x0009e155) wml_tabs_2_active_pane

0x4aa0,	// (0x0009e165) wml_tabs_2_passive_pane_ParamLimits

0x4aa0,	// (0x0009e165) wml_tabs_2_passive_pane

0x4ab0,	// (0x0009e175) wml_tabs_3_active_pane_cp_ParamLimits

0x4ab0,	// (0x0009e175) wml_tabs_3_active_pane_cp

0x4ac1,	// (0x0009e186) wml_tabs_3_passive_pane_ParamLimits

0x4ac1,	// (0x0009e186) wml_tabs_3_passive_pane

0x4ad2,	// (0x0009e197) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ad2,	// (0x0009e197) wml_tabs_3_passive_pane_cp

0x4ae3,	// (0x0009e1a8) tabs_4_active_pane

0x4aeb,	// (0x0009e1b0) tabs_4_passive_pane

0x4af3,	// (0x0009e1b8) tabs_4_passive_pane_cp

0x4afb,	// (0x0009e1c0) tabs_4_passive_pane_cp2

0x401b,	// (0x0009d6e0) aid_height_text

0x37be,	// (0x0009ce83) mup_volume_cont_pane_ParamLimits

0x37be,	// (0x0009ce83) mup_volume_cont_pane

0x1198,	// (0x0009a85d) aid_size_cell_pinb

0x11a2,	// (0x0009a867) aid_size_list_pinb

0x49f5,	// (0x0009e0ba) mup2_volume_cont_pane_ParamLimits

0x49f5,	// (0x0009e0ba) mup2_volume_cont_pane

0x4b03,	// (0x0009e1c8) mup2_volume_cont_pane_g1_ParamLimits

0x4b03,	// (0x0009e1c8) mup2_volume_cont_pane_g1

0x0dba,	// (0x0009a47f) aid_size_cell_touch_ParamLimits

0x0dba,	// (0x0009a47f) aid_size_cell_touch

0x107b,	// (0x0009a740) touch_pane_ParamLimits

0x107b,	// (0x0009a740) touch_pane

0x1071,	// (0x0009a736) main_rss2_pane

0xcae4,	// (0x000a61a9) listscroll_rss2_pane

0xcaed,	// (0x000a61b2) rss2_navigation_pane

0xcaf5,	// (0x000a61ba) list_rss2_pane

0xb2ec,	// (0x000a49b1) scroll_pane_cp22

0xcafd,	// (0x000a61c2) rss2_navigation_pane_g1

0xcb06,	// (0x000a61cb) rss2_navigation_pane_g2

0xcb0e,	// (0x000a61d3) rss2_navigation_pane_g3

0x0002,

0x04bd,	// (0x00099b82) rss2_navigation_pane_g

0xcb16,	// (0x000a61db) rss2_navigation_pane_t1

0x4b3c,	// (0x0009e201) rss2_list_single_pane_ParamLimits

0x4b3c,	// (0x0009e201) rss2_list_single_pane

0xcb24,	// (0x000a61e9) rss2_list_single_pane_t2

0xcb32,	// (0x000a61f7) rss2_list_single_pane_t3_ParamLimits

0xcb32,	// (0x000a61f7) rss2_list_single_pane_t3

0xcb4f,	// (0x000a6214) rss2_list_single_pane_t4

0x3009,	// (0x0009c6ce) smil_status_pane_g1

0x426d,	// (0x0009d932) main_image2_pane_ParamLimits

0x426d,	// (0x0009d932) main_image2_pane

0x4708,	// (0x0009ddcd) main_camera2_pane_g9_ParamLimits

0x4708,	// (0x0009ddcd) main_camera2_pane_g9

0x475c,	// (0x0009de21) main_camera2_pane_t5_ParamLimits

0x475c,	// (0x0009de21) main_camera2_pane_t5

0x476e,	// (0x0009de33) main_camera2_pane_t6_ParamLimits

0x476e,	// (0x0009de33) main_camera2_pane_t6

0x4b70,	// (0x0009e235) main_image2_pane_g1_ParamLimits

0x4b70,	// (0x0009e235) main_image2_pane_g1

0x3db5,	// (0x0009d47a) smil2_video_pane_ParamLimits

0x3db5,	// (0x0009d47a) smil2_video_pane

0x0dee,	// (0x0009a4b3) aid_zoom_text_primary_cp

0x100c,	// (0x0009a6d1) popup_preview_fixed_window

0xabcc,	// (0x000a4291) im_reading_pane_g1

0x4652,	// (0x0009dd17) cams2_bc_adjust_pane_cp_ParamLimits

0x4652,	// (0x0009dd17) cams2_bc_adjust_pane_cp

0x479e,	// (0x0009de63) cams2_bc_adjust_pane_ParamLimits

0x479e,	// (0x0009de63) cams2_bc_adjust_pane

0xdc92,	// (0x000a7357) cams2_bc_adjust_pane_g1

0x4b7c,	// (0x0009e241) cams2_slider_pane

0x4b85,	// (0x0009e24a) cams2_slider_pane_g1

0x4b8e,	// (0x0009e253) cams2_slider_pane_g2

0x0006,

0xf586,	// (0x000a8c4b) cams2_slider_pane_g

0x12a2,	// (0x0009a967) calc_display_pane_ParamLimits

0x12c0,	// (0x0009a985) calc_paper_pane_ParamLimits

0x12dc,	// (0x0009a9a1) grid_calc_pane_ParamLimits

0x32f8,	// (0x0009c9bd) popup_clock_digital_window_t1_ParamLimits

0xb7a9,	// (0x000a4e6e) main_image_pane_t1

0x1288,	// (0x0009a94d) aid_size_cell_calc_ParamLimits

0x1288,	// (0x0009a94d) aid_size_cell_calc

0x429e,	// (0x0009d963) popup_blid_sat_info2_window_ParamLimits

0x429e,	// (0x0009d963) popup_blid_sat_info2_window

0xcb65,	// (0x000a622a) aid_size_cell_blid

0xcb6d,	// (0x000a6232) bg_popup_window_pane_cp07

0xcb90,	// (0x000a6255) grid_popup_blid_pane

0xcb9a,	// (0x000a625f) heading_pane_cp05_ParamLimits

0xcb9a,	// (0x000a625f) heading_pane_cp05

0xcc64,	// (0x000a6329) cell_popup_blid_pane_ParamLimits

0xcc64,	// (0x000a6329) cell_popup_blid_pane

0xcc88,	// (0x000a634d) cell_popup_blid_pane_g1

0xcc90,	// (0x000a6355) cell_popup_blid_pane_t1

0x49bb,	// (0x0009e080) mup2_indicator_pane_ParamLimits

0x49bb,	// (0x0009e080) mup2_indicator_pane

0xaab5,	// (0x000a417a) mup2_visualizer_osc_pane

0xca3a,	// (0x000a60ff) mup2_visualizer_spec_pane_ParamLimits

0xca3a,	// (0x000a60ff) mup2_visualizer_spec_pane

0x4ba8,	// (0x0009e26d) mup2_spec_half_pane

0x4bb1,	// (0x0009e276) mup2_spec_half_pane_cp

0x4bbb,	// (0x0009e280) mup2_spec_bar_pane_ParamLimits

0x4bbb,	// (0x0009e280) mup2_spec_bar_pane

0xc9db,	// (0x000a60a0) mup2_spec_bar_pane_g1

0xc9e5,	// (0x000a60aa) mup2_spec_bar_pane_g2

0x0001,

0x0437,	// (0x00099afc) mup2_spec_bar_pane_g

0x4bda,	// (0x0009e29f) mup2_osc_middle_pane

0xc9f7,	// (0x000a60bc) mup2_visualizer_osc_pane_g1

0x9c67,	// (0x000a332c) popup_number_entry_window_t1_ParamLimits

0x9c7a,	// (0x000a333f) popup_number_entry_window_t2_ParamLimits

0x9c8c,	// (0x000a3351) popup_number_entry_window_t3_ParamLimits

0x10d2,	// (0x0009a797) popup_number_entry_window_t5_ParamLimits

0x10d2,	// (0x0009a797) popup_number_entry_window_t5

0xf0c6,	// (0x000a878b) popup_number_entry_window_t_ParamLimits

0x9c9e,	// (0x000a3363) text_title_cp2_ParamLimits

0x3ab6,	// (0x0009d17b) aid_hotspot_pointer_text2_pane

0x3b44,	// (0x0009d209) main_viewer_pane_g9_ParamLimits

0x3b44,	// (0x0009d209) main_viewer_pane_g9

0xae05,	// (0x000a44ca) cale_month_pane_t1_ParamLimits

0xae42,	// (0x000a4507) bg_cale_pane_ParamLimits

0xae5a,	// (0x000a451f) list_cale_pane_ParamLimits

0xae7d,	// (0x000a4542) listscroll_cale_day_pane_t1

0xae8f,	// (0x000a4554) scroll_pane_cp09_ParamLimits

0x37fd,	// (0x0009cec2) main_mup_eq_pane_t1_ParamLimits

0x37fd,	// (0x0009cec2) main_mup_eq_pane_t1

0x3817,	// (0x0009cedc) main_mup_eq_pane_t2_ParamLimits

0x3817,	// (0x0009cedc) main_mup_eq_pane_t2

0x382f,	// (0x0009cef4) main_mup_eq_pane_t3_ParamLimits

0x382f,	// (0x0009cef4) main_mup_eq_pane_t3

0x3847,	// (0x0009cf0c) main_mup_eq_pane_t4_ParamLimits

0x3847,	// (0x0009cf0c) main_mup_eq_pane_t4

0x385f,	// (0x0009cf24) main_mup_eq_pane_t5_ParamLimits

0x385f,	// (0x0009cf24) main_mup_eq_pane_t5

0x3877,	// (0x0009cf3c) main_mup_eq_pane_t6_ParamLimits

0x3877,	// (0x0009cf3c) main_mup_eq_pane_t6

0x388b,	// (0x0009cf50) main_mup_eq_pane_t7_ParamLimits

0x388b,	// (0x0009cf50) main_mup_eq_pane_t7

0x389f,	// (0x0009cf64) main_mup_eq_pane_t8_ParamLimits

0x389f,	// (0x0009cf64) main_mup_eq_pane_t8

0x38b5,	// (0x0009cf7a) main_mup_eq_pane_t9_ParamLimits

0x38b5,	// (0x0009cf7a) main_mup_eq_pane_t9

0x38cd,	// (0x0009cf92) main_mup_eq_pane_t10_ParamLimits

0x38cd,	// (0x0009cf92) main_mup_eq_pane_t10

0x0009,

0xf402,	// (0x000a8ac7) main_mup_eq_pane_t_ParamLimits

0xf402,	// (0x000a8ac7) main_mup_eq_pane_t

0x398a,	// (0x0009d04f) mup_equalizer_pane_cp5_ParamLimits

0x39a0,	// (0x0009d065) mup_equalizer_pane_cp6_ParamLimits

0x39b8,	// (0x0009d07d) mup_equalizer_pane_cp7_ParamLimits

0x1071,	// (0x0009a736) main_gallery_pane

0xca00,	// (0x000a60c5) smil2_volume_pane

0xca08,	// (0x000a60cd) smil_status_volume_pane_g1_ParamLimits

0xca1b,	// (0x000a60e0) smil_status_volume_pane_g2_ParamLimits

0x44c5,	// (0x0009db8a) smil_status_volume_pane_g3_ParamLimits

0xf505,	// (0x000a8bca) smil_status_volume_pane_g_ParamLimits

0xcb6d,	// (0x000a6232) bg_popup_window_pane_cp07_ParamLimits

0xcb7b,	// (0x000a6240) blid_firmament_pane

0x4be3,	// (0x0009e2a8) aid_size_cell_gallery_ParamLimits

0x4be3,	// (0x0009e2a8) aid_size_cell_gallery

0x4bf1,	// (0x0009e2b6) grid_gallery_pane_ParamLimits

0x4bf1,	// (0x0009e2b6) grid_gallery_pane

0x4c01,	// (0x0009e2c6) cell_gallery_pane_ParamLimits

0x4c01,	// (0x0009e2c6) cell_gallery_pane

0xcc9e,	// (0x000a6363) bg_cell_gallery_focus_pane_ParamLimits

0xcc9e,	// (0x000a6363) bg_cell_gallery_focus_pane

0xccb0,	// (0x000a6375) cell_gallery_pane_g1_ParamLimits

0xccb0,	// (0x000a6375) cell_gallery_pane_g1

0x4c4f,	// (0x0009e314) cell_gallery_pane_g2_ParamLimits

0x4c4f,	// (0x0009e314) cell_gallery_pane_g2

0x4c5c,	// (0x0009e321) cell_gallery_pane_g3_ParamLimits

0x4c5c,	// (0x0009e321) cell_gallery_pane_g3

0xccbc,	// (0x000a6381) cell_gallery_pane_g4_ParamLimits

0xccbc,	// (0x000a6381) cell_gallery_pane_g4

0x0003,

0xf595,	// (0x000a8c5a) cell_gallery_pane_g_ParamLimits

0xf595,	// (0x000a8c5a) cell_gallery_pane_g

0xccc8,	// (0x000a638d) bg_cell_gallery_focus_pane_g1

0xccd0,	// (0x000a6395) bg_cell_gallery_focus_pane_g2

0xccd8,	// (0x000a639d) bg_cell_gallery_focus_pane_g3

0xcce0,	// (0x000a63a5) bg_cell_gallery_focus_pane_g4

0xcce8,	// (0x000a63ad) bg_cell_gallery_focus_pane_g5

0xccf0,	// (0x000a63b5) bg_cell_gallery_focus_pane_g6

0xccf8,	// (0x000a63bd) bg_cell_gallery_focus_pane_g7

0xcd00,	// (0x000a63c5) bg_cell_gallery_focus_pane_g8

0x0007,

0x04f3,	// (0x00099bb8) bg_cell_gallery_focus_pane_g

0xcd08,	// (0x000a63cd) aid_firma_cardinal

0xcd1c,	// (0x000a63e1) blid_firmament_pane_t1

0xcd33,	// (0x000a63f8) blid_firmament_pane_t2

0xcd4a,	// (0x000a640f) blid_firmament_pane_t3

0xcd61,	// (0x000a6426) blid_firmament_pane_t4

0x0003,

0x0504,	// (0x00099bc9) blid_firmament_pane_t

0xcd78,	// (0x000a643d) blid_sat_info_pane

0xcd88,	// (0x000a644d) blid_sat_info_pane_g1

0xcd88,	// (0x000a644d) blid_sat_info_pane_g2

0x0001,

0x050d,	// (0x00099bd2) blid_sat_info_pane_g

0xcd92,	// (0x000a6457) blid_sat_info_pane_t1

0xcda0,	// (0x000a6465) smil2_volume_content_pane

0xcda9,	// (0x000a646e) smil2_volume_pane_g1

0xa9d9,	// (0x000a409e) smil2_volume_content_pane_g1

0xcdb1,	// (0x000a6476) smil2_volume_content_pane_g2

0xcdba,	// (0x000a647f) smil2_volume_content_pane_g3

0xcdc3,	// (0x000a6488) smil2_volume_content_pane_g4

0xcdcc,	// (0x000a6491) smil2_volume_content_pane_g5

0xcdd5,	// (0x000a649a) smil2_volume_content_pane_g6

0xcdde,	// (0x000a64a3) smil2_volume_content_pane_g7

0xcde7,	// (0x000a64ac) smil2_volume_content_pane_g8

0xcdf0,	// (0x000a64b5) smil2_volume_content_pane_g9

0xcdf9,	// (0x000a64be) smil2_volume_content_pane_g10

0x0009,

0xf59e,	// (0x000a8c63) smil2_volume_content_pane_g

0x18c7,	// (0x0009af8c) cale_week_day_heading_pane_t1_ParamLimits

0x18e2,	// (0x0009afa7) cale_week_day_heading_pane_t2_ParamLimits

0x18fd,	// (0x0009afc2) cale_week_day_heading_pane_t3_ParamLimits

0x1918,	// (0x0009afdd) cale_week_day_heading_pane_t4_ParamLimits

0x1933,	// (0x0009aff8) cale_week_day_heading_pane_t5_ParamLimits

0x194e,	// (0x0009b013) cale_week_day_heading_pane_t6_ParamLimits

0x1969,	// (0x0009b02e) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000a8892) cale_week_day_heading_pane_t_ParamLimits

0xaa5a,	// (0x000a411f) bg_cale_side_pane_ParamLimits

0x1984,	// (0x0009b049) cale_week_time_pane_t1_ParamLimits

0x199e,	// (0x0009b063) cale_week_time_pane_t2_ParamLimits

0x19b8,	// (0x0009b07d) cale_week_time_pane_t3_ParamLimits

0x19d2,	// (0x0009b097) cale_week_time_pane_t4_ParamLimits

0x19ec,	// (0x0009b0b1) cale_week_time_pane_t5_ParamLimits

0x1a06,	// (0x0009b0cb) cale_week_time_pane_t6_ParamLimits

0x1a26,	// (0x0009b0eb) cale_week_time_pane_t7_ParamLimits

0x1a48,	// (0x0009b10d) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000a88a1) cale_week_time_pane_t_ParamLimits

0x1a6c,	// (0x0009b131) cell_cale_week_pane_g2_ParamLimits

0xaa5a,	// (0x000a411f) bg_cale_side_pane_cp01_ParamLimits

0x2dce,	// (0x0009c493) cale_month_week_pane_t1_ParamLimits

0x2de7,	// (0x0009c4ac) cale_month_week_pane_t2_ParamLimits

0x2e00,	// (0x0009c4c5) cale_month_week_pane_t3_ParamLimits

0x2e19,	// (0x0009c4de) cale_month_week_pane_t4_ParamLimits

0x2e34,	// (0x0009c4f9) cale_month_week_pane_t5_ParamLimits

0x2e55,	// (0x0009c51a) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x000a8976) cale_month_week_pane_t_ParamLimits

0x2fc6,	// (0x0009c68b) cell_cale_month_pane_g1_ParamLimits

0x1071,	// (0x0009a736) main_cale_event_viewer_pane

0x9c3d,	// (0x000a3302) listscroll_cale_event_viewer_pane

0xce02,	// (0x000a64c7) list_cale_ev_pane

0xce0a,	// (0x000a64cf) scroll_pane_cp023

0xce16,	// (0x000a64db) field_cale_ev_pane_ParamLimits

0xce16,	// (0x000a64db) field_cale_ev_pane

0xce34,	// (0x000a64f9) field_cale_ev_content_pane_ParamLimits

0xce34,	// (0x000a64f9) field_cale_ev_content_pane

0xce40,	// (0x000a6505) field_cale_ev_pane_g1_ParamLimits

0xce40,	// (0x000a6505) field_cale_ev_pane_g1

0xce4c,	// (0x000a6511) field_cale_ev_pane_g2_ParamLimits

0xce4c,	// (0x000a6511) field_cale_ev_pane_g2

0xce64,	// (0x000a6529) field_cale_ev_pane_g3_ParamLimits

0xce64,	// (0x000a6529) field_cale_ev_pane_g3

0x0002,

0x0527,	// (0x00099bec) field_cale_ev_pane_g_ParamLimits

0x0527,	// (0x00099bec) field_cale_ev_pane_g

0xce7c,	// (0x000a6541) field_cale_ev_pane_t1_ParamLimits

0xce7c,	// (0x000a6541) field_cale_ev_pane_t1

0xaaec,	// (0x000a41b1) field_cale_ev_content_pane_t1_ParamLimits

0xaaec,	// (0x000a41b1) field_cale_ev_content_pane_t1

0xb68f,	// (0x000a4d54) bg_button_pane_cp01

0x1652,	// (0x0009ad17) listscroll_cale_week_pane_ParamLimits

0xaa05,	// (0x000a40ca) popup_toolbar_window_cp01

0xaa2b,	// (0x000a40f0) listscroll_cale_week_pane_t1_ParamLimits

0x1652,	// (0x0009ad17) listscroll_cale_day_pane_ParamLimits

0xaa05,	// (0x000a40ca) popup_toolbar_window_cp02

0xae7d,	// (0x000a4542) listscroll_cale_day_pane_t1_ParamLimits

0x1652,	// (0x0009ad17) main_cale_month_pane_ParamLimits

0x43a1,	// (0x0009da66) popup_toolbar_window_cp03_ParamLimits

0x43a1,	// (0x0009da66) popup_toolbar_window_cp03

0x3ccb,	// (0x0009d390) main_image_pane_g2_ParamLimits

0x3ccb,	// (0x0009d390) main_image_pane_g2

0x3cd7,	// (0x0009d39c) main_image_pane_g3_ParamLimits

0x3cd7,	// (0x0009d39c) main_image_pane_g3

0x0002,

0xf48a,	// (0x000a8b4f) main_image_pane_g_ParamLimits

0xf48a,	// (0x000a8b4f) main_image_pane_g

0xb7a9,	// (0x000a4e6e) main_image_pane_t1_ParamLimits

0x3ce3,	// (0x0009d3a8) main_image_pane_t2_ParamLimits

0x3ce3,	// (0x0009d3a8) main_image_pane_t2

0x3cf5,	// (0x0009d3ba) main_image_pane_t3_ParamLimits

0x3cf5,	// (0x0009d3ba) main_image_pane_t3

0x3d07,	// (0x0009d3cc) main_image_pane_t4_ParamLimits

0x3d07,	// (0x0009d3cc) main_image_pane_t4

0x0003,

0xf491,	// (0x000a8b56) main_image_pane_t_ParamLimits

0xf491,	// (0x000a8b56) main_image_pane_t

0x3d19,	// (0x0009d3de) popup_image_details_window_cp01

0x3d23,	// (0x0009d3e8) popup_toobar_trans_pane_cp01_ParamLimits

0x3d23,	// (0x0009d3e8) popup_toobar_trans_pane_cp01

0x42f1,	// (0x0009d9b6) popup_image_details_window_ParamLimits

0x42f1,	// (0x0009d9b6) popup_image_details_window

0x42ff,	// (0x0009d9c4) popup_image_focus_window

0x4644,	// (0x0009dd09) camera2_autofocus_pane_ParamLimits

0x4644,	// (0x0009dd09) camera2_autofocus_pane

0x9c3d,	// (0x000a3302) bg_popup_sub_pane_cp06

0xce93,	// (0x000a6558) popup_image_focus_window_g1

0xce9b,	// (0x000a6560) popup_image_focus_window_g2

0xcea3,	// (0x000a6568) popup_image_focus_window_g3

0xceab,	// (0x000a6570) popup_image_focus_window_g4

0x0003,

0x052e,	// (0x00099bf3) popup_image_focus_window_g

0xceb3,	// (0x000a6578) popup_image_focus_window_t1

0xcec1,	// (0x000a6586) popup_image_focus_window_t2

0xced1,	// (0x000a6596) popup_image_focus_window_t3

0x0002,

0x0537,	// (0x00099bfc) popup_image_focus_window_t

0xcedf,	// (0x000a65a4) camera2_autofocus_pane_g1

0xa4af,	// (0x000a3b74) bg_tb_trans_pane_cp01

0xceed,	// (0x000a65b2) popup_image_details_window_g1

0xcf00,	// (0x000a65c5) popup_image_details_window_g2

0x0002,

0x0549,	// (0x00099c0e) popup_image_details_window_g

0xcf29,	// (0x000a65ee) popup_image_details_window_t1

0xcf3b,	// (0x000a6600) popup_image_details_window_t2

0xcf54,	// (0x000a6619) popup_image_details_window_t3

0xcf68,	// (0x000a662d) popup_image_details_window_t4

0xcf83,	// (0x000a6648) popup_image_details_window_t5

0x0004,

0x0550,	// (0x00099c15) popup_image_details_window_t

0xa8d3,	// (0x000a3f98) bg_calc_paper_pane_ParamLimits

0x1071,	// (0x0009a736) grid_highlight_pane_cp013

0x13d9,	// (0x0009aa9e) list_calc_pane_ParamLimits

0x13eb,	// (0x0009aab0) scroll_pane_cp024

0xa8e7,	// (0x000a3fac) bg_calc_display_pane_ParamLimits

0x13f3,	// (0x0009aab8) calc_display_pane_t1_ParamLimits

0x1408,	// (0x0009aacd) calc_display_pane_t2_ParamLimits

0x141d,	// (0x0009aae2) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000a8812) calc_display_pane_t_ParamLimits

0x14f7,	// (0x0009abbc) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000a882f) cell_calc_pane_g

0x1500,	// (0x0009abc5) cell_calc_pane_t1

0xa946,	// (0x000a400b) grid_highlight_pane_cp02_ParamLimits

0xa95c,	// (0x000a4021) toolbar_button_pane_cp01_ParamLimits

0xa95c,	// (0x000a4021) toolbar_button_pane_cp01

0xb7ee,	// (0x000a4eb3) temp_image_control_pane_ParamLimits

0xb7ee,	// (0x000a4eb3) temp_image_control_pane

0x426d,	// (0x0009d932) main_mp3_pane

0xcf9d,	// (0x000a6662) temp_image_control_pane_g1_ParamLimits

0xcf9d,	// (0x000a6662) temp_image_control_pane_g1

0xcfab,	// (0x000a6670) temp_image_control_pane_g2_ParamLimits

0xcfab,	// (0x000a6670) temp_image_control_pane_g2

0xcfbd,	// (0x000a6682) temp_image_control_pane_g3_ParamLimits

0xcfbd,	// (0x000a6682) temp_image_control_pane_g3

0x4c99,	// (0x0009e35e) temp_image_control_pane_g4_ParamLimits

0x4c99,	// (0x0009e35e) temp_image_control_pane_g4

0x0003,

0xf5be,	// (0x000a8c83) temp_image_control_pane_g_ParamLimits

0xf5be,	// (0x000a8c83) temp_image_control_pane_g

0xcf9d,	// (0x000a6662) main_mp3_pane_g1

0x4caa,	// (0x0009e36f) main_mp3_pane_g2

0x0007,

0xf5c7,	// (0x000a8c8c) main_mp3_pane_g

0xd000,	// (0x000a66c5) main_mp3_pane_t1

0xaabd,	// (0x000a4182) main_camera_pane_g8_ParamLimits

0xaabd,	// (0x000a4182) main_camera_pane_g8

0x1cf6,	// (0x0009b3bb) main_video_pane_g7_ParamLimits

0x1cf6,	// (0x0009b3bb) main_video_pane_g7

0x478c,	// (0x0009de51) main_camera2_pane_t7_ParamLimits

0x478c,	// (0x0009de51) main_camera2_pane_t7

0xac23,	// (0x000a42e8) scroll_pane_cp025_ParamLimits

0xac23,	// (0x000a42e8) scroll_pane_cp025

0xac37,	// (0x000a42fc) scroll_pane_cp026_ParamLimits

0xac37,	// (0x000a42fc) scroll_pane_cp026

0xac46,	// (0x000a430b) wml_content_pane_ParamLimits

0x1071,	// (0x0009a736) main_touch_calib_pane

0x4d4e,	// (0x0009e413) main_touch_calib_pane_g1

0x4d5a,	// (0x0009e41f) main_touch_calib_pane_g2

0x4d66,	// (0x0009e42b) main_touch_calib_pane_g3

0x4d72,	// (0x0009e437) main_touch_calib_pane_g4

0x0003,

0xf5e5,	// (0x000a8caa) main_touch_calib_pane_g

0x4d7e,	// (0x0009e443) main_touch_calib_pane_t1

0x4d97,	// (0x0009e45c) main_touch_calib_pane_t2

0x0004,

0xf5ee,	// (0x000a8cb3) main_touch_calib_pane_t

0xb3bb,	// (0x000a4a80) mup_progress_pane_cp02

0xb3f0,	// (0x000a4ab5) navi_pane_g1

0xb4ab,	// (0x000a4b70) navi_pane_mp_t3

0x426d,	// (0x0009d932) main_mp3_pane_ParamLimits

0x43de,	// (0x0009daa3) navi_pane_ParamLimits

0xcf9d,	// (0x000a6662) main_mp3_pane_g1_ParamLimits

0x4caa,	// (0x0009e36f) main_mp3_pane_g2_ParamLimits

0x4cb6,	// (0x0009e37b) main_mp3_pane_g3_ParamLimits

0x4cb6,	// (0x0009e37b) main_mp3_pane_g3

0x4cc2,	// (0x0009e387) main_mp3_pane_g4_ParamLimits

0x4cc2,	// (0x0009e387) main_mp3_pane_g4

0xcfcd,	// (0x000a6692) main_mp3_pane_g5_ParamLimits

0xcfcd,	// (0x000a6692) main_mp3_pane_g5

0xcfdb,	// (0x000a66a0) main_mp3_pane_g6_ParamLimits

0xcfdb,	// (0x000a66a0) main_mp3_pane_g6

0xcfe8,	// (0x000a66ad) main_mp3_pane_g7_ParamLimits

0xcfe8,	// (0x000a66ad) main_mp3_pane_g7

0xcff4,	// (0x000a66b9) main_mp3_pane_g8_ParamLimits

0xcff4,	// (0x000a66b9) main_mp3_pane_g8

0xf5c7,	// (0x000a8c8c) main_mp3_pane_g_ParamLimits

0x4cce,	// (0x0009e393) main_mp3_pane_t2

0x4cde,	// (0x0009e3a3) main_mp3_pane_t3

0xd00e,	// (0x000a66d3) main_mp3_pane_t4

0xd01c,	// (0x000a66e1) main_mp3_pane_t5

0x0005,

0xf5d8,	// (0x000a8c9d) main_mp3_pane_t

0xd02a,	// (0x000a66ef) mup_progress_pane_cp01

0x0dee,	// (0x0009a4b3) aid_zoom_text_secondary2

0xce02,	// (0x000a64c7) list_cale_ev2_pane

0xce0a,	// (0x000a64cf) scroll_pane_cp023_ParamLimits

0x4df2,	// (0x0009e4b7) field_cale_ev2_pane_ParamLimits

0x4df2,	// (0x0009e4b7) field_cale_ev2_pane

0x9eae,	// (0x000a3573) field_cale_ev2_pane_g1_ParamLimits

0x9eae,	// (0x000a3573) field_cale_ev2_pane_g1

0x9eba,	// (0x000a357f) field_cale_ev2_pane_g2_ParamLimits

0x9eba,	// (0x000a357f) field_cale_ev2_pane_g2

0x9ed2,	// (0x000a3597) field_cale_ev2_pane_g3_ParamLimits

0x9ed2,	// (0x000a3597) field_cale_ev2_pane_g3

0x0003,

0xf5f9,	// (0x000a8cbe) field_cale_ev2_pane_g_ParamLimits

0xf5f9,	// (0x000a8cbe) field_cale_ev2_pane_g

0x9ef6,	// (0x000a35bb) field_cale_ev2_pane_t1_ParamLimits

0x9ef6,	// (0x000a35bb) field_cale_ev2_pane_t1

0x9f0d,	// (0x000a35d2) field_cale_ev2_pane_t2_ParamLimits

0x9f0d,	// (0x000a35d2) field_cale_ev2_pane_t2

0x0001,

0xf602,	// (0x000a8cc7) field_cale_ev2_pane_t_ParamLimits

0xf602,	// (0x000a8cc7) field_cale_ev2_pane_t

0x3bac,	// (0x0009d271) main_postcard_pane_g5_ParamLimits

0x3bac,	// (0x0009d271) main_postcard_pane_g5

0x3bba,	// (0x0009d27f) main_postcard_pane_g6_ParamLimits

0x3bba,	// (0x0009d27f) main_postcard_pane_g6

0x1b40,	// (0x0009b205) camera2_autofocus_pane_cp_ParamLimits

0x1b40,	// (0x0009b205) camera2_autofocus_pane_cp

0x426d,	// (0x0009d932) main_mup3_pane

0x4e5b,	// (0x0009e520) main_mup3_pane_g1_ParamLimits

0x4e5b,	// (0x0009e520) main_mup3_pane_g1

0x4e7c,	// (0x0009e541) main_mup3_pane_g2_ParamLimits

0x4e7c,	// (0x0009e541) main_mup3_pane_g2

0x4ef6,	// (0x0009e5bb) main_mup3_pane_g3_ParamLimits

0x4ef6,	// (0x0009e5bb) main_mup3_pane_g3

0x4f39,	// (0x0009e5fe) main_mup3_pane_g4_ParamLimits

0x4f39,	// (0x0009e5fe) main_mup3_pane_g4

0x4f7c,	// (0x0009e641) main_mup3_pane_g5_ParamLimits

0x4f7c,	// (0x0009e641) main_mup3_pane_g5

0x4fbf,	// (0x0009e684) main_mup3_pane_g6_ParamLimits

0x4fbf,	// (0x0009e684) main_mup3_pane_g6

0xd032,	// (0x000a66f7) main_mup3_pane_g7_ParamLimits

0xd032,	// (0x000a66f7) main_mup3_pane_g7

0x0007,

0xf612,	// (0x000a8cd7) main_mup3_pane_g_ParamLimits

0xf612,	// (0x000a8cd7) main_mup3_pane_g

0x5035,	// (0x0009e6fa) main_mup3_pane_t1_ParamLimits

0x5035,	// (0x0009e6fa) main_mup3_pane_t1

0x50a4,	// (0x0009e769) main_mup3_pane_t2_ParamLimits

0x50a4,	// (0x0009e769) main_mup3_pane_t2

0x516d,	// (0x0009e832) main_mup3_pane_t4_ParamLimits

0x516d,	// (0x0009e832) main_mup3_pane_t4

0x51bb,	// (0x0009e880) main_mup3_pane_t5_ParamLimits

0x51bb,	// (0x0009e880) main_mup3_pane_t5

0x526b,	// (0x0009e930) main_mup3_pane_t6_ParamLimits

0x526b,	// (0x0009e930) main_mup3_pane_t6

0x0005,

0xf623,	// (0x000a8ce8) main_mup3_pane_t_ParamLimits

0xf623,	// (0x000a8ce8) main_mup3_pane_t

0x5317,	// (0x0009e9dc) mup3_progress_pane_ParamLimits

0x5317,	// (0x0009e9dc) mup3_progress_pane

0x538b,	// (0x0009ea50) popup_mup3_control_window_ParamLimits

0x538b,	// (0x0009ea50) popup_mup3_control_window

0xd040,	// (0x000a6705) popup_mup3_text_window

0x53a4,	// (0x0009ea69) mup3_progress_pane_t1

0x53c3,	// (0x0009ea88) mup3_progress_pane_t2

0xd048,	// (0x000a670d) mup3_progress_pane_t3

0x0002,

0xf630,	// (0x000a8cf5) mup3_progress_pane_t

0xd065,	// (0x000a672a) mup_progress_pane_cp03

0x9c3d,	// (0x000a3302) bg_tb_trans_pane_cp04

0x53e2,	// (0x0009eaa7) mup3_volume_pane

0x53ea,	// (0x0009eaaf) popup_mup3_control_window_g1

0x53f3,	// (0x0009eab8) mup3_volume_pane_g1

0x53fc,	// (0x0009eac1) mup3_volume_pane_g2

0x5405,	// (0x0009eaca) mup3_volume_pane_g3

0x0002,

0xf637,	// (0x000a8cfc) mup3_volume_pane_g

0x9c3d,	// (0x000a3302) bg_tb_trans_pane_cp03

0xd075,	// (0x000a673a) popup_mup3_text_window_g1

0xd07d,	// (0x000a6742) popup_mup3_text_window_t1

0xa92f,	// (0x000a3ff4) list_calc_item_pane_g1_ParamLimits

0xcadb,	// (0x000a61a0) mup_volume_pane_cp_g1

0x4db0,	// (0x0009e475) main_touch_calib_pane_t3

0x4dc6,	// (0x0009e48b) main_touch_calib_pane_t4

0x4ddc,	// (0x0009e4a1) main_touch_calib_pane_t5

0x0da6,	// (0x0009a46b) aid_cell_size_toolbar2

0x0dae,	// (0x0009a473) aid_popup3_width_pane

0x0cb6,	// (0x0009a37b) aid_zoom_text_msg_primary

0x1b15,	// (0x0009b1da) vorec_t7

0xa8f3,	// (0x000a3fb8) bg_calc_paper_pane_g1_ParamLimits

0xa8ff,	// (0x000a3fc4) bg_calc_paper_pane_g2_ParamLimits

0xa90b,	// (0x000a3fd0) bg_calc_paper_pane_g3_ParamLimits

0xa917,	// (0x000a3fdc) bg_calc_paper_pane_g4_ParamLimits

0xa923,	// (0x000a3fe8) bg_calc_paper_pane_g5_ParamLimits

0x145c,	// (0x0009ab21) bg_calc_paper_pane_g6_ParamLimits

0x146d,	// (0x0009ab32) bg_calc_paper_pane_g7_ParamLimits

0x147e,	// (0x0009ab43) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000a8819) bg_calc_paper_pane_g_ParamLimits

0x148f,	// (0x0009ab54) calc_bg_paper_pane_g9_ParamLimits

0x1c27,	// (0x0009b2ec) image_qvga_pane_ParamLimits

0x1c27,	// (0x0009b2ec) image_qvga_pane

0xa816,	// (0x000a3edb) bg_popup_sub_pane_cp04_ParamLimits

0xb725,	// (0x000a4dea) popup_mup_playback_window_g1_ParamLimits

0xb731,	// (0x000a4df6) popup_mup_playback_window_t1_ParamLimits

0xb746,	// (0x000a4e0b) popup_mup_playback_window_t2_ParamLimits

0x0300,	// (0x000999c5) popup_mup_playback_window_t_ParamLimits

0x48bb,	// (0x0009df80) main_mup2_pane_g3_ParamLimits

0x48bb,	// (0x0009df80) main_mup2_pane_g3

0x1fd6,	// (0x0009b69b) popup_toolbar_window_cp04

0xbb3b,	// (0x000a5200) popup_call2_audio_second_window_g3_ParamLimits

0xbb3b,	// (0x000a5200) popup_call2_audio_second_window_g3

0xbf45,	// (0x000a560a) popup_call2_audio_first_window_g4_ParamLimits

0xbf45,	// (0x000a560a) popup_call2_audio_first_window_g4

0xc5d9,	// (0x000a5c9e) popup_call2_audio_in_window_g4_ParamLimits

0xc5d9,	// (0x000a5c9e) popup_call2_audio_in_window_g4

0x3cbe,	// (0x0009d383) aid_area_sk_bg_cut_ParamLimits

0x3cbe,	// (0x0009d383) aid_area_sk_bg_cut

0xb75b,	// (0x000a4e20) aid_area_sk_bg_cut_2_ParamLimits

0xb75b,	// (0x000a4e20) aid_area_sk_bg_cut_2

0x4c3f,	// (0x0009e304) aid_placing_details_win

0x4c47,	// (0x0009e30c) aid_placing_details_win_2

0xcedf,	// (0x000a65a4) camera2_autofocus_pane_g1_ParamLimits

0x0ffd,	// (0x0009a6c2) popup_fixed_preview_cale_window_ParamLimits

0x0ffd,	// (0x0009a6c2) popup_fixed_preview_cale_window

0xb529,	// (0x000a4bee) navi_slider_pane_g3

0xb532,	// (0x000a4bf7) navi_slider_pane_g4

0xb53b,	// (0x000a4c00) navi_slider_pane_g5

0xb529,	// (0x000a4bee) navi_slider_pane_g6

0x35a1,	// (0x0009cc66) navi_slider_pane_g7

0xb65c,	// (0x000a4d21) mup_scale_pane_g3

0xb665,	// (0x000a4d2a) mup_scale_pane_g4

0xb66e,	// (0x000a4d33) mup_scale_pane_g5

0x39d0,	// (0x0009d095) mup_scale_pane_g6

0x39d9,	// (0x0009d09e) mup_scale_pane_g7

0xb529,	// (0x000a4bee) cams2_slider_pane_g3

0xcb5d,	// (0x000a6222) cams2_slider_pane_g4

0x4b97,	// (0x0009e25c) cams2_slider_pane_g5

0xb529,	// (0x000a4bee) cams2_slider_pane_g6

0x4b9f,	// (0x0009e264) cams2_slider_pane_g7

0xcd88,	// (0x000a644d) camera2_autofocus_pane_cp_g1

0xc974,	// (0x000a6039) bg_popup_preview_window_pane_cp02_ParamLimits

0xc974,	// (0x000a6039) bg_popup_preview_window_pane_cp02

0xd08b,	// (0x000a6750) list_fp_cale_pane_ParamLimits

0xd08b,	// (0x000a6750) list_fp_cale_pane

0xd097,	// (0x000a675c) popup_fixed_preview_cale_window_t1_ParamLimits

0xd097,	// (0x000a675c) popup_fixed_preview_cale_window_t1

0x540e,	// (0x0009ead3) popup_fixed_preview_cale_window_t2_ParamLimits

0x540e,	// (0x0009ead3) popup_fixed_preview_cale_window_t2

0x5423,	// (0x0009eae8) popup_fixed_preview_cale_window_t3_ParamLimits

0x5423,	// (0x0009eae8) popup_fixed_preview_cale_window_t3

0x0002,

0xf63e,	// (0x000a8d03) popup_fixed_preview_cale_window_t_ParamLimits

0xf63e,	// (0x000a8d03) popup_fixed_preview_cale_window_t

0x5438,	// (0x0009eafd) list_single_fp_cale_pane_ParamLimits

0x5438,	// (0x0009eafd) list_single_fp_cale_pane

0xd0b5,	// (0x000a677a) list_single_fp_cale_pane_g1_ParamLimits

0xd0b5,	// (0x000a677a) list_single_fp_cale_pane_g1

0xd0c1,	// (0x000a6786) list_single_fp_cale_pane_g2_ParamLimits

0xd0c1,	// (0x000a6786) list_single_fp_cale_pane_g2

0x0002,

0x05e2,	// (0x00099ca7) list_single_fp_cale_pane_g_ParamLimits

0x05e2,	// (0x00099ca7) list_single_fp_cale_pane_g

0xd0da,	// (0x000a679f) list_single_fp_cale_pane_t1_ParamLimits

0xd0da,	// (0x000a679f) list_single_fp_cale_pane_t1

0xd0ec,	// (0x000a67b1) list_single_fp_cale_pane_t2_ParamLimits

0xd0ec,	// (0x000a67b1) list_single_fp_cale_pane_t2

0x0001,

0x05e9,	// (0x00099cae) list_single_fp_cale_pane_t_ParamLimits

0x05e9,	// (0x00099cae) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1071,	// (0x0009a736) main_dialer_pane

0x544b,	// (0x0009eb10) aid_cell_size_keypad

0x5455,	// (0x0009eb1a) dialer_ne_pane

0x545f,	// (0x0009eb24) grid_dialer_command_1_pane

0x5467,	// (0x0009eb2c) grid_dialer_command_2_pane

0x546f,	// (0x0009eb34) grid_dialer_keypad_pane

0x5483,	// (0x0009eb48) bg_popup_call_pane_cp06_ParamLimits

0x5483,	// (0x0009eb48) bg_popup_call_pane_cp06

0x548f,	// (0x0009eb54) dialer_ne_clear_pane_ParamLimits

0x548f,	// (0x0009eb54) dialer_ne_clear_pane

0xd11f,	// (0x000a67e4) dialer_ne_pane_g1

0xd127,	// (0x000a67ec) dialer_ne_pane_t1_ParamLimits

0xd127,	// (0x000a67ec) dialer_ne_pane_t1

0x549b,	// (0x0009eb60) dialer_ne_pane_t2_ParamLimits

0x549b,	// (0x0009eb60) dialer_ne_pane_t2

0x54b8,	// (0x0009eb7d) dialer_ne_pane_t3_ParamLimits

0x54b8,	// (0x0009eb7d) dialer_ne_pane_t3

0x0002,

0xf645,	// (0x000a8d0a) dialer_ne_pane_t_ParamLimits

0xf645,	// (0x000a8d0a) dialer_ne_pane_t

0x54dc,	// (0x0009eba1) dialer_ne_pane_t3_copy1_ParamLimits

0x54dc,	// (0x0009eba1) dialer_ne_pane_t3_copy1

0x5500,	// (0x0009ebc5) cell_dialer_keypad_pane_ParamLimits

0x5500,	// (0x0009ebc5) cell_dialer_keypad_pane

0x5517,	// (0x0009ebdc) cell_dialer_command_1_pane_ParamLimits

0x5517,	// (0x0009ebdc) cell_dialer_command_1_pane

0x552d,	// (0x0009ebf2) cell_dialer_command_2_pane_ParamLimits

0x552d,	// (0x0009ebf2) cell_dialer_command_2_pane

0xd139,	// (0x000a67fe) bg_button_pane_cp02_ParamLimits

0xd139,	// (0x000a67fe) bg_button_pane_cp02

0x553c,	// (0x0009ec01) cell_dialer_keypad_pane_g1_ParamLimits

0x553c,	// (0x0009ec01) cell_dialer_keypad_pane_g1

0xd139,	// (0x000a67fe) bg_button_pane_cp03_ParamLimits

0xd139,	// (0x000a67fe) bg_button_pane_cp03

0x5551,	// (0x0009ec16) cell_dialer_command_1_pane_g1_ParamLimits

0x5551,	// (0x0009ec16) cell_dialer_command_1_pane_g1

0xd145,	// (0x000a680a) bg_button_pane_cp04

0x5565,	// (0x0009ec2a) cell_dialer_command_2_pane_g1

0xaab5,	// (0x000a417a) bg_button_pane_cp06

0xd14d,	// (0x000a6812) dialer_ne_clear_pane_g1

0xb3fc,	// (0x000a4ac1) navi_pane_g2

0xb42a,	// (0x000a4aef) navi_pane_g3

0x0002,

0x0203,	// (0x000998c8) navi_pane_g

0xb4b9,	// (0x000a4b7e) navi_pane_mv_g2

0xb4e0,	// (0x000a4ba5) navi_pane_mv_g5

0x356c,	// (0x0009cc31) navi_pane_mv_t1

0xa8e7,	// (0x000a3fac) main_clock2_pane

0xe58b,	// (0x000a7c50) main_clock2_list_pane_ParamLimits

0xe58b,	// (0x000a7c50) main_clock2_list_pane

0x55c1,	// (0x0009ec86) main_clock2_pane_t1_ParamLimits

0x55c1,	// (0x0009ec86) main_clock2_pane_t1

0x55ef,	// (0x0009ecb4) main_clock2_pane_t2_ParamLimits

0x55ef,	// (0x0009ecb4) main_clock2_pane_t2

0x0004,

0xf64c,	// (0x000a8d11) main_clock2_pane_t_ParamLimits

0xf64c,	// (0x000a8d11) main_clock2_pane_t

0x5654,	// (0x0009ed19) popup_clock_analogue_window_cp03_ParamLimits

0x5654,	// (0x0009ed19) popup_clock_analogue_window_cp03

0x5672,	// (0x0009ed37) popup_clock_digital_window_cp02_ParamLimits

0x5672,	// (0x0009ed37) popup_clock_digital_window_cp02

0x56e7,	// (0x0009edac) main_clock2_list_single_pane_ParamLimits

0x56e7,	// (0x0009edac) main_clock2_list_single_pane

0xaab5,	// (0x000a417a) list_highlight_pane_cp05

0xd187,	// (0x000a684c) main_clock2_list_single_pane_t1

0x1fd6,	// (0x0009b69b) popup_toolbar_window_cp04_ParamLimits

0x4c69,	// (0x0009e32e) camera2_autofocus_pane_g2_ParamLimits

0x4c69,	// (0x0009e32e) camera2_autofocus_pane_g2

0x4c75,	// (0x0009e33a) camera2_autofocus_pane_g3_ParamLimits

0x4c75,	// (0x0009e33a) camera2_autofocus_pane_g3

0x4c81,	// (0x0009e346) camera2_autofocus_pane_g4_ParamLimits

0x4c81,	// (0x0009e346) camera2_autofocus_pane_g4

0x4c8d,	// (0x0009e352) camera2_autofocus_pane_g5_ParamLimits

0x4c8d,	// (0x0009e352) camera2_autofocus_pane_g5

0x0004,

0xf5b3,	// (0x000a8c78) camera2_autofocus_pane_g_ParamLimits

0xf5b3,	// (0x000a8c78) camera2_autofocus_pane_g

0x4e1c,	// (0x0009e4e1) camera2_autofocus_pane_cp_g2

0x4e24,	// (0x0009e4e9) camera2_autofocus_pane_cp_g3

0x4e2c,	// (0x0009e4f1) camera2_autofocus_pane_cp_g4

0x4e34,	// (0x0009e4f9) camera2_autofocus_pane_cp_g5

0x0004,

0xf607,	// (0x000a8ccc) camera2_autofocus_pane_cp_g

0x547b,	// (0x0009eb40) popup_dialer_spcha_window

0x9c3d,	// (0x000a3302) bg_popup_sub_pane_cp07

0xd195,	// (0x000a685a) list_spcha_pane

0xd19d,	// (0x000a6862) list_single_spcha_pane_ParamLimits

0xd19d,	// (0x000a6862) list_single_spcha_pane

0x9c3d,	// (0x000a3302) list_highlight_pane_cp06

0xd1ae,	// (0x000a6873) list_single_spcha_pane_t1

0xc36e,	// (0x000a5a33) popup_call2_audio_out_window_g4_ParamLimits

0xc36e,	// (0x000a5a33) popup_call2_audio_out_window_g4

0x1071,	// (0x0009a736) main_imed2_pane

0x4307,	// (0x0009d9cc) popup_imed_adjust2_window

0x431a,	// (0x0009d9df) popup_imed_trans_window_ParamLimits

0x431a,	// (0x0009d9df) popup_imed_trans_window

0xcbc6,	// (0x000a628b) popup_blid_sat_info2_window_t1

0xcbd4,	// (0x000a6299) popup_blid_sat_info2_window_t2

0x000a,

0x04d3,	// (0x00099b98) popup_blid_sat_info2_window_t

0x579c,	// (0x0009ee61) aid_size_cell_colour_35

0x57b6,	// (0x0009ee7b) aid_size_cell_colour_112

0x57cd,	// (0x0009ee92) aid_size_cell_effect

0xa4af,	// (0x000a3b74) bg_tb_trans_pane_cp02

0xb0b4,	// (0x000a4779) heading_imed_pane

0x57e7,	// (0x0009eeac) listscroll_imed_pane

0xd1bc,	// (0x000a6881) heading_imed_pane_g1

0xd1c4,	// (0x000a6889) heading_imed_pane_t1

0xd1d2,	// (0x000a6897) grid_imed_colour_35_pane_ParamLimits

0xd1d2,	// (0x000a6897) grid_imed_colour_35_pane

0x57f3,	// (0x0009eeb8) grid_imed_effect_pane

0xd1ea,	// (0x000a68af) list_imed_aspect_pane

0x5803,	// (0x0009eec8) scroll_pane_cp027_ParamLimits

0x5803,	// (0x0009eec8) scroll_pane_cp027

0x580f,	// (0x0009eed4) cell_imed_effect_pane_ParamLimits

0x580f,	// (0x0009eed4) cell_imed_effect_pane

0xd1f2,	// (0x000a68b7) cell_imed_colour_pane_ParamLimits

0xd1f2,	// (0x000a68b7) cell_imed_colour_pane

0xd234,	// (0x000a68f9) cell_imed_colour_pane_g1_ParamLimits

0xd234,	// (0x000a68f9) cell_imed_colour_pane_g1

0xd245,	// (0x000a690a) hgihlgiht_grid_pane_cp016_ParamLimits

0xd245,	// (0x000a690a) hgihlgiht_grid_pane_cp016

0x5827,	// (0x0009eeec) cell_imed_effect_pane_g1

0x582f,	// (0x0009eef4) grid_highlight_pane_cp017

0xd256,	// (0x000a691b) list_imed_single_pane_ParamLimits

0xd256,	// (0x000a691b) list_imed_single_pane

0x9c3d,	// (0x000a3302) list_highlight_pane_cp07

0xd26b,	// (0x000a6930) list_imed_aspect_pane_comp1_t1

0xc980,	// (0x000a6045) bg_tb_trans_pane_cp05

0xd28d,	// (0x000a6952) popup_imed_adjust2_window_g1

0xd2b4,	// (0x000a6979) popup_imed_adjust2_window_t1

0xd2cc,	// (0x000a6991) slider_imed_adjust_pane

0xd2e0,	// (0x000a69a5) slider_imed_adjust_pane_g1

0xd2f0,	// (0x000a69b5) slider_imed_adjust_pane_g2

0xd300,	// (0x000a69c5) slider_imed_adjust_pane_g3

0xd311,	// (0x000a69d6) slider_imed_adjust_pane_g4

0x0003,

0x0617,	// (0x00099cdc) slider_imed_adjust_pane_g

0x5838,	// (0x0009eefd) aid_size_cell_clipart2

0x5844,	// (0x0009ef09) grid_imed_clipart_pane

0xd322,	// (0x000a69e7) scroll_pane_cp031

0x584e,	// (0x0009ef13) cell_imed_clipart_pane_ParamLimits

0x584e,	// (0x0009ef13) cell_imed_clipart_pane

0x5871,	// (0x0009ef36) cell_imed_clipart_pane_g1

0x9c3d,	// (0x000a3302) grid_highlight_pane_cp014

0x55a3,	// (0x0009ec68) main_clock2_pane_g1_ParamLimits

0x55a3,	// (0x0009ec68) main_clock2_pane_g1

0x568e,	// (0x0009ed53) aid_call2_pane_cp10

0x56a0,	// (0x0009ed65) aid_call_pane_cp10

0xb35b,	// (0x000a4a20) popup_clock_analogue_window_cp10_g1

0xb35b,	// (0x000a4a20) popup_clock_analogue_window_cp10_g2

0x56b2,	// (0x0009ed77) popup_clock_analogue_window_cp10_g3

0x56b2,	// (0x0009ed77) popup_clock_analogue_window_cp10_g4

0xb35b,	// (0x000a4a20) popup_clock_analogue_window_cp10_g5

0x0004,

0xf657,	// (0x000a8d1c) popup_clock_analogue_window_cp10_g

0x56c8,	// (0x0009ed8d) popup_clock_analogue_window_cp10_t1

0x56f9,	// (0x0009edbe) clock_digital_number_pane_cp10_ParamLimits

0x56f9,	// (0x0009edbe) clock_digital_number_pane_cp10

0x5713,	// (0x0009edd8) clock_digital_number_pane_cp11_ParamLimits

0x5713,	// (0x0009edd8) clock_digital_number_pane_cp11

0x572d,	// (0x0009edf2) clock_digital_number_pane_cp12_ParamLimits

0x572d,	// (0x0009edf2) clock_digital_number_pane_cp12

0x5747,	// (0x0009ee0c) clock_digital_number_pane_cp13_ParamLimits

0x5747,	// (0x0009ee0c) clock_digital_number_pane_cp13

0x5761,	// (0x0009ee26) clock_digital_separator_pane_cp10_ParamLimits

0x5761,	// (0x0009ee26) clock_digital_separator_pane_cp10

0x577b,	// (0x0009ee40) popup_clock_digital_window_cp02_t1_ParamLimits

0x577b,	// (0x0009ee40) popup_clock_digital_window_cp02_t1

0xa80e,	// (0x000a3ed3) clock_digital_number_pane_cp10_g1

0xa80e,	// (0x000a3ed3) clock_digital_number_pane_cp10_g2

0x0001,

0xf662,	// (0x000a8d27) clock_digital_number_pane_cp10_g

0xa80e,	// (0x000a3ed3) clock_digital_separator_pane_cp10_g1

0xa80e,	// (0x000a3ed3) clock_digital_separator_pane_g2_cp10

0xb4e8,	// (0x000a4bad) navi_pane_vded_g4

0xb4f1,	// (0x000a4bb6) navi_pane_vded_g5

0xb4fa,	// (0x000a4bbf) navi_pane_vded_t1

0x1071,	// (0x0009a736) main_vded_pane

0x587a,	// (0x0009ef3f) main_vded_pane_g1

0x5886,	// (0x0009ef4b) main_vded_pane_g2

0x5890,	// (0x0009ef55) main_vded_pane_g3

0x0002,

0xf667,	// (0x000a8d2c) main_vded_pane_g

0x589a,	// (0x0009ef5f) main_vded_pane_t1

0x58a8,	// (0x0009ef6d) main_vded_pane_t2

0x0001,

0xf66e,	// (0x000a8d33) main_vded_pane_t

0x58b6,	// (0x0009ef7b) vded_slider_pane

0x58c0,	// (0x0009ef85) vded_video_pane

0xd32a,	// (0x000a69ef) vded_video_pane_g1

0x58ca,	// (0x0009ef8f) vded_video_pane_g2

0xcd88,	// (0x000a644d) vded_video_pane_g3

0x0002,

0xf673,	// (0x000a8d38) vded_video_pane_g

0xd334,	// (0x000a69f9) vded_slider_pane_g1

0xcadb,	// (0x000a61a0) vded_slider_pane_g2

0xd33d,	// (0x000a6a02) vded_slider_pane_g3

0xd346,	// (0x000a6a0b) vded_slider_pane_g4

0xd34f,	// (0x000a6a14) vded_slider_pane_g5

0x0004,

0x0638,	// (0x00099cfd) vded_slider_pane_g

0x537d,	// (0x0009ea42) mup3_rocker_pane_ParamLimits

0x537d,	// (0x0009ea42) mup3_rocker_pane

0x58d3,	// (0x0009ef98) mup3_control_keys_pane_g1

0x58db,	// (0x0009efa0) mup3_control_keys_pane_g2

0x58e3,	// (0x0009efa8) mup3_control_keys_pane_g3

0x58eb,	// (0x0009efb0) mup3_control_keys_pane_g4

0x0003,

0xf67a,	// (0x000a8d3f) mup3_control_keys_pane_g

0x1025,	// (0x0009a6ea) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1025,	// (0x0009a6ea) popup_toolbar2_fixed_window_cp01

0x5397,	// (0x0009ea5c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5397,	// (0x0009ea5c) popup_toolbar2_fixed_window_cp02

0xbcad,	// (0x000a5372) popup_call2_audio_second_window_t4_ParamLimits

0xbcad,	// (0x000a5372) popup_call2_audio_second_window_t4

0xc1db,	// (0x000a58a0) popup_call2_audio_first_window_t6_ParamLimits

0xc1db,	// (0x000a58a0) popup_call2_audio_first_window_t6

0xc471,	// (0x000a5b36) popup_call2_audio_out_window_t6_ParamLimits

0xc471,	// (0x000a5b36) popup_call2_audio_out_window_t6

0x1071,	// (0x0009a736) main_vitu_pane

0x58fb,	// (0x0009efc0) aid_size_cell_itu_ParamLimits

0x58fb,	// (0x0009efc0) aid_size_cell_itu

0xe58b,	// (0x000a7c50) bg_popup_window_pane_cp08_ParamLimits

0xe58b,	// (0x000a7c50) bg_popup_window_pane_cp08

0x5909,	// (0x0009efce) field_vitu_entry_pane_ParamLimits

0x5909,	// (0x0009efce) field_vitu_entry_pane

0x5918,	// (0x0009efdd) grid_vitu_function_pane_ParamLimits

0x5918,	// (0x0009efdd) grid_vitu_function_pane

0x5928,	// (0x0009efed) grid_vitu_itu_pane_ParamLimits

0x5928,	// (0x0009efed) grid_vitu_itu_pane

0x5938,	// (0x0009effd) cell_vitu_itu_pane_ParamLimits

0x5938,	// (0x0009effd) cell_vitu_itu_pane

0x594d,	// (0x0009f012) cell_vitu_function_pane_ParamLimits

0x594d,	// (0x0009f012) cell_vitu_function_pane

0xa4af,	// (0x000a3b74) bg_popup_sub_pane_cp08_ParamLimits

0xa4af,	// (0x000a3b74) bg_popup_sub_pane_cp08

0x595f,	// (0x0009f024) field_vitu_entry_pane_t1_ParamLimits

0x595f,	// (0x0009f024) field_vitu_entry_pane_t1

0xd370,	// (0x000a6a35) field_vitu_entry_pane_t2_ParamLimits

0xd370,	// (0x000a6a35) field_vitu_entry_pane_t2

0x0001,

0xf683,	// (0x000a8d48) field_vitu_entry_pane_t_ParamLimits

0xf683,	// (0x000a8d48) field_vitu_entry_pane_t

0xd38d,	// (0x000a6a52) bg_button_pane_cp05_ParamLimits

0xd38d,	// (0x000a6a52) bg_button_pane_cp05

0x597c,	// (0x0009f041) cell_vitu_itu_pane_g1

0x5994,	// (0x0009f059) cell_vitu_itu_pane_t1_ParamLimits

0x5994,	// (0x0009f059) cell_vitu_itu_pane_t1

0x59a6,	// (0x0009f06b) cell_vitu_itu_pane_t2_ParamLimits

0x59a6,	// (0x0009f06b) cell_vitu_itu_pane_t2

0x0002,

0xf688,	// (0x000a8d4d) cell_vitu_itu_pane_t_ParamLimits

0xf688,	// (0x000a8d4d) cell_vitu_itu_pane_t

0xd39b,	// (0x000a6a60) bg_button_pane_cp07

0x59db,	// (0x0009f0a0) cell_vitu_function_pane_g1

0x1300,	// (0x0009a9c5) main_calc_pane_g1

0x0de2,	// (0x0009a4a7) aid_visual_content_pane

0x1071,	// (0x0009a736) main_vradio_pane

0x59e4,	// (0x0009f0a9) main_vradio_pane_g1_ParamLimits

0x59e4,	// (0x0009f0a9) main_vradio_pane_g1

0xd3a5,	// (0x000a6a6a) main_vradio_pane_g2_ParamLimits

0xd3a5,	// (0x000a6a6a) main_vradio_pane_g2

0x0001,

0xf68f,	// (0x000a8d54) main_vradio_pane_g_ParamLimits

0xf68f,	// (0x000a8d54) main_vradio_pane_g

0x59f4,	// (0x0009f0b9) main_vradio_pane_t1_ParamLimits

0x59f4,	// (0x0009f0b9) main_vradio_pane_t1

0x5a06,	// (0x0009f0cb) main_vradio_pane_t2_ParamLimits

0x5a06,	// (0x0009f0cb) main_vradio_pane_t2

0xd3b2,	// (0x000a6a77) main_vradio_pane_t3_ParamLimits

0xd3b2,	// (0x000a6a77) main_vradio_pane_t3

0x0002,

0xf694,	// (0x000a8d59) main_vradio_pane_t_ParamLimits

0xf694,	// (0x000a8d59) main_vradio_pane_t

0x5a18,	// (0x0009f0dd) vradio_rocker_control_pane_ParamLimits

0x5a18,	// (0x0009f0dd) vradio_rocker_control_pane

0x5a24,	// (0x0009f0e9) vradio_station_info_pane_ParamLimits

0x5a24,	// (0x0009f0e9) vradio_station_info_pane

0xd3c6,	// (0x000a6a8b) vradio_frequency_info_pane_ParamLimits

0xd3c6,	// (0x000a6a8b) vradio_frequency_info_pane

0xcd88,	// (0x000a644d) vradio_station_info_pane_g1

0xd3d5,	// (0x000a6a9a) vradio_station_info_pane_t1_ParamLimits

0xd3d5,	// (0x000a6a9a) vradio_station_info_pane_t1

0xd3f7,	// (0x000a6abc) vradio_station_info_pane_t2_ParamLimits

0xd3f7,	// (0x000a6abc) vradio_station_info_pane_t2

0x0001,

0x0669,	// (0x00099d2e) vradio_station_info_pane_t_ParamLimits

0x0669,	// (0x00099d2e) vradio_station_info_pane_t

0xd409,	// (0x000a6ace) vradio_tuning_pane

0xd411,	// (0x000a6ad6) vradio_rocker_control_pane_g1

0xd419,	// (0x000a6ade) vradio_rocker_control_pane_g2

0xd421,	// (0x000a6ae6) vradio_rocker_control_pane_g3

0xd429,	// (0x000a6aee) vradio_rocker_control_pane_g4

0xd431,	// (0x000a6af6) vradio_rocker_control_pane_g5

0x0004,

0x066e,	// (0x00099d33) vradio_rocker_control_pane_g

0x5a33,	// (0x0009f0f8) vradio_frequency_info_pane_g1

0xd439,	// (0x000a6afe) vradio_frequency_info_pane_t1_ParamLimits

0xd439,	// (0x000a6afe) vradio_frequency_info_pane_t1

0x5a3d,	// (0x0009f102) vradio_tuning_pane_g1

0x5a46,	// (0x0009f10b) vradio_tuning_pane_t1

0x0e2b,	// (0x0009a4f0) area_side_right_pane_ParamLimits

0x0e2b,	// (0x0009a4f0) area_side_right_pane

0xc93b,	// (0x000a6000) status_small_pane_g1

0xc943,	// (0x000a6008) status_small_pane_g2

0xc94c,	// (0x000a6011) status_small_pane_g3

0xc955,	// (0x000a601a) status_small_pane_g4

0x0003,

0x0429,	// (0x00099aee) status_small_pane_g

0xc95e,	// (0x000a6023) status_small_pane_t1

0x1071,	// (0x0009a736) main_video3_pane

0xd44d,	// (0x000a6b12) cams_zoom_vslider_pane

0xd455,	// (0x000a6b1a) image3_wide_pane_ParamLimits

0xd455,	// (0x000a6b1a) image3_wide_pane

0xd46f,	// (0x000a6b34) image3_wide_small_pane

0xd47b,	// (0x000a6b40) main_video3_pane_g1_ParamLimits

0xd47b,	// (0x000a6b40) main_video3_pane_g1

0xd497,	// (0x000a6b5c) main_video3_pane_g2_ParamLimits

0xd497,	// (0x000a6b5c) main_video3_pane_g2

0x0001,

0x0679,	// (0x00099d3e) main_video3_pane_g_ParamLimits

0x0679,	// (0x00099d3e) main_video3_pane_g

0xd4b3,	// (0x000a6b78) main_video3_pane_t1_ParamLimits

0xd4b3,	// (0x000a6b78) main_video3_pane_t1

0xd4de,	// (0x000a6ba3) main_video3_pane_t2_ParamLimits

0xd4de,	// (0x000a6ba3) main_video3_pane_t2

0xd509,	// (0x000a6bce) main_video3_pane_t3_ParamLimits

0xd509,	// (0x000a6bce) main_video3_pane_t3

0x0002,

0x067e,	// (0x00099d43) main_video3_pane_t_ParamLimits

0x067e,	// (0x00099d43) main_video3_pane_t

0xd536,	// (0x000a6bfb) cams_zoom_vslider_pane_g1

0xd53f,	// (0x000a6c04) cams_zoom_vslider_pane_g2

0x0001,

0x0685,	// (0x00099d4a) cams_zoom_vslider_pane_g

0xd547,	// (0x000a6c0c) small_slider_vertical_pane

0xcd88,	// (0x000a644d) small_slider_vertical_pane_g1

0xcd88,	// (0x000a644d) small_slider_vertical_pane_g2

0xd54f,	// (0x000a6c14) small_slider_vertical_pane_g3

0x0002,

0x068a,	// (0x00099d4f) small_slider_vertical_pane_g

0x1071,	// (0x0009a736) main_hwr_training_pane

0xd558,	// (0x000a6c1d) hwr_training_instruct_pane_ParamLimits

0xd558,	// (0x000a6c1d) hwr_training_instruct_pane

0x5a55,	// (0x0009f11a) hwr_training_navi_pane_ParamLimits

0x5a55,	// (0x0009f11a) hwr_training_navi_pane

0x5a6f,	// (0x0009f134) hwr_training_write_pane_ParamLimits

0x5a6f,	// (0x0009f134) hwr_training_write_pane

0x9c3d,	// (0x000a3302) bg_frame_shadow_pane

0xd58f,	// (0x000a6c54) hwr_training_write_pane_g1

0xd597,	// (0x000a6c5c) hwr_training_write_pane_g2

0xd59f,	// (0x000a6c64) hwr_training_write_pane_g3

0xd5a7,	// (0x000a6c6c) hwr_training_write_pane_g4

0xd5af,	// (0x000a6c74) hwr_training_write_pane_g5

0xd5b7,	// (0x000a6c7c) hwr_training_write_pane_g6

0xd5bf,	// (0x000a6c84) hwr_training_write_pane_g7

0x0006,

0x0691,	// (0x00099d56) hwr_training_write_pane_g

0x5aa7,	// (0x0009f16c) hwr_training_navi_pane_g1_ParamLimits

0x5aa7,	// (0x0009f16c) hwr_training_navi_pane_g1

0x5ab9,	// (0x0009f17e) hwr_training_navi_pane_g2_ParamLimits

0x5ab9,	// (0x0009f17e) hwr_training_navi_pane_g2

0x5acb,	// (0x0009f190) hwr_training_navi_pane_g3_ParamLimits

0x5acb,	// (0x0009f190) hwr_training_navi_pane_g3

0x5adb,	// (0x0009f1a0) hwr_training_navi_pane_g4_ParamLimits

0x5adb,	// (0x0009f1a0) hwr_training_navi_pane_g4

0x0004,

0xf69b,	// (0x000a8d60) hwr_training_navi_pane_g_ParamLimits

0xf69b,	// (0x000a8d60) hwr_training_navi_pane_g

0x5af5,	// (0x0009f1ba) hwr_training_navi_pane_t1

0x5b03,	// (0x0009f1c8) list_single_hwr_training_instruct_pane_ParamLimits

0x5b03,	// (0x0009f1c8) list_single_hwr_training_instruct_pane

0xd5c7,	// (0x000a6c8c) list_single_hwr_training_instruct_pane_t1

0xccc8,	// (0x000a638d) bg_frame_shadow_pane_g1

0xd5d6,	// (0x000a6c9b) bg_frame_shadow_pane_g2

0xd5de,	// (0x000a6ca3) bg_frame_shadow_pane_g3

0xd5e6,	// (0x000a6cab) bg_frame_shadow_pane_g4

0xd5ee,	// (0x000a6cb3) bg_frame_shadow_pane_g5

0xd5f6,	// (0x000a6cbb) bg_frame_shadow_pane_g6

0xd5fe,	// (0x000a6cc3) bg_frame_shadow_pane_g7

0xa9a0,	// (0x000a4065) bg_frame_shadow_pane_g8

0x0007,

0xf6a6,	// (0x000a8d6b) bg_frame_shadow_pane_g

0x1071,	// (0x0009a736) main_video_tele_dialer_pane

0x5b2c,	// (0x0009f1f1) aid_size_cell_video_keypad_ParamLimits

0x5b2c,	// (0x0009f1f1) aid_size_cell_video_keypad

0x5b3c,	// (0x0009f201) grid_video_dialer_keypad_pane_ParamLimits

0x5b3c,	// (0x0009f201) grid_video_dialer_keypad_pane

0x5b70,	// (0x0009f235) video_down_pane_cp_ParamLimits

0x5b70,	// (0x0009f235) video_down_pane_cp

0x5b9a,	// (0x0009f25f) cell_video_dialer_keypad_pane_ParamLimits

0x5b9a,	// (0x0009f25f) cell_video_dialer_keypad_pane

0xd606,	// (0x000a6ccb) bg_button_pane_cp08_ParamLimits

0xd606,	// (0x000a6ccb) bg_button_pane_cp08

0x5baf,	// (0x0009f274) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5baf,	// (0x0009f274) cell_video_dialer_keypad_pane_g1

0x5371,	// (0x0009ea36) mup3_rocker2_pane_ParamLimits

0x5371,	// (0x0009ea36) mup3_rocker2_pane

0xcd88,	// (0x000a644d) mup3_rocker2_pane_g1

0x427b,	// (0x0009d940) main_dialer2_pane

0x1071,	// (0x0009a736) main_mp4_pane

0x5c07,	// (0x0009f2cc) main_mp4_pane_g1_ParamLimits

0x5c07,	// (0x0009f2cc) main_mp4_pane_g1

0x5c15,	// (0x0009f2da) main_mp4_pane_g2_ParamLimits

0x5c15,	// (0x0009f2da) main_mp4_pane_g2

0x5c23,	// (0x0009f2e8) main_mp4_pane_g3_ParamLimits

0x5c23,	// (0x0009f2e8) main_mp4_pane_g3

0x5c68,	// (0x0009f32d) main_mp4_pane_g4_ParamLimits

0x5c68,	// (0x0009f32d) main_mp4_pane_g4

0x5c96,	// (0x0009f35b) main_mp4_pane_g5_ParamLimits

0x5c96,	// (0x0009f35b) main_mp4_pane_g5

0x0007,

0xf6c6,	// (0x000a8d8b) main_mp4_pane_g_ParamLimits

0xf6c6,	// (0x000a8d8b) main_mp4_pane_g

0x5d0a,	// (0x0009f3cf) main_mp4_pane_t1_ParamLimits

0x5d0a,	// (0x0009f3cf) main_mp4_pane_t1

0x5d66,	// (0x0009f42b) main_mp4_pane_t2_ParamLimits

0x5d66,	// (0x0009f42b) main_mp4_pane_t2

0xd612,	// (0x000a6cd7) main_mp4_pane_t3_ParamLimits

0xd612,	// (0x000a6cd7) main_mp4_pane_t3

0x5db8,	// (0x0009f47d) main_mp4_pane_t4_ParamLimits

0x5db8,	// (0x0009f47d) main_mp4_pane_t4

0x0003,

0xf6d7,	// (0x000a8d9c) main_mp4_pane_t_ParamLimits

0xf6d7,	// (0x000a8d9c) main_mp4_pane_t

0x5dfc,	// (0x0009f4c1) mp4_progress_pane_ParamLimits

0x5dfc,	// (0x0009f4c1) mp4_progress_pane

0x5e46,	// (0x0009f50b) mp4_rocker_pane_ParamLimits

0x5e46,	// (0x0009f50b) mp4_rocker_pane

0xd640,	// (0x000a6d05) mp4_progress_pane_t1

0xd659,	// (0x000a6d1e) mp4_progress_pane_t2

0x0001,

0x06e5,	// (0x00099daa) mp4_progress_pane_t

0xd672,	// (0x000a6d37) mup_progress_pane_cp04

0xdc9a,	// (0x000a735f) mp4_rocker_pane_g1

0x5e66,	// (0x0009f52b) aid_cell_size_keypad2_ParamLimits

0x5e66,	// (0x0009f52b) aid_cell_size_keypad2

0x5e76,	// (0x0009f53b) dialer2_ne_pane_ParamLimits

0x5e76,	// (0x0009f53b) dialer2_ne_pane

0x5e84,	// (0x0009f549) grid_dialer2_keypad_pane_ParamLimits

0x5e84,	// (0x0009f549) grid_dialer2_keypad_pane

0xdca4,	// (0x000a7369) bg_popup_call_pane_cp07_ParamLimits

0xdca4,	// (0x000a7369) bg_popup_call_pane_cp07

0x5e94,	// (0x0009f559) dialer2_ne_pane_t1_ParamLimits

0x5e94,	// (0x0009f559) dialer2_ne_pane_t1

0x5eb9,	// (0x0009f57e) cell_dialer2_keypad_pane_ParamLimits

0x5eb9,	// (0x0009f57e) cell_dialer2_keypad_pane

0xd697,	// (0x000a6d5c) bg_button_pane_pane_cp04_ParamLimits

0xd697,	// (0x000a6d5c) bg_button_pane_pane_cp04

0x5ece,	// (0x0009f593) cell_dialer2_keypad_pane_g1_ParamLimits

0x5ece,	// (0x0009f593) cell_dialer2_keypad_pane_g1

0x1e98,	// (0x0009b55d) aid_placing_vt_set_content_ParamLimits

0x1e98,	// (0x0009b55d) aid_placing_vt_set_content

0x1ec4,	// (0x0009b589) aid_placing_vt_set_title_ParamLimits

0x1ec4,	// (0x0009b589) aid_placing_vt_set_title

0x1071,	// (0x0009a736) main_image3_pane

0x5f68,	// (0x0009f62d) area_side_right_pane_cp01_ParamLimits

0x5f68,	// (0x0009f62d) area_side_right_pane_cp01

0x5f95,	// (0x0009f65a) main_image3_pane_g1_ParamLimits

0x5f95,	// (0x0009f65a) main_image3_pane_g1

0x5fa3,	// (0x0009f668) main_image3_pane_g2_ParamLimits

0x5fa3,	// (0x0009f668) main_image3_pane_g2

0x5fbc,	// (0x0009f681) main_image3_pane_g3_ParamLimits

0x5fbc,	// (0x0009f681) main_image3_pane_g3

0x5fd5,	// (0x0009f69a) main_image3_pane_g4_ParamLimits

0x5fd5,	// (0x0009f69a) main_image3_pane_g4

0x0003,

0xf6ea,	// (0x000a8daf) main_image3_pane_g_ParamLimits

0xf6ea,	// (0x000a8daf) main_image3_pane_g

0x5fee,	// (0x0009f6b3) main_image3_pane_t1_ParamLimits

0x5fee,	// (0x0009f6b3) main_image3_pane_t1

0x6013,	// (0x0009f6d8) main_image3_pane_t2_ParamLimits

0x6013,	// (0x0009f6d8) main_image3_pane_t2

0x6032,	// (0x0009f6f7) main_image3_pane_t3_ParamLimits

0x6032,	// (0x0009f6f7) main_image3_pane_t3

0x0003,

0xf6f3,	// (0x000a8db8) main_image3_pane_t_ParamLimits

0xf6f3,	// (0x000a8db8) main_image3_pane_t

0xe58b,	// (0x000a7c50) grid_sctrl_middle_pane_cp01_ParamLimits

0xe58b,	// (0x000a7c50) grid_sctrl_middle_pane_cp01

0x6093,	// (0x0009f758) cell_sctrl_middle_pane_cp01_ParamLimits

0x6093,	// (0x0009f758) cell_sctrl_middle_pane_cp01

0x60a4,	// (0x0009f769) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x60a4,	// (0x0009f769) cell_sctrl_middle_pane_cp01_g1

0x1071,	// (0x0009a736) main_call4_pane

0x60b1,	// (0x0009f776) aid_size_button_call4_ParamLimits

0x60b1,	// (0x0009f776) aid_size_button_call4

0x60e7,	// (0x0009f7ac) call4_windows_pane_ParamLimits

0x60e7,	// (0x0009f7ac) call4_windows_pane

0x60fc,	// (0x0009f7c1) grid_call4_button_pane_ParamLimits

0x60fc,	// (0x0009f7c1) grid_call4_button_pane

0x612a,	// (0x0009f7ef) call4_windows_conf_pane

0x6141,	// (0x0009f806) popup_call4_audio_first_window_ParamLimits

0x6141,	// (0x0009f806) popup_call4_audio_first_window

0x6191,	// (0x0009f856) popup_call4_audio_second_window_ParamLimits

0x6191,	// (0x0009f856) popup_call4_audio_second_window

0x61aa,	// (0x0009f86f) popup_call4_audio_wait_window_ParamLimits

0x61aa,	// (0x0009f86f) popup_call4_audio_wait_window

0x61b8,	// (0x0009f87d) cell_call4_button_pane_ParamLimits

0x61b8,	// (0x0009f87d) cell_call4_button_pane

0x61db,	// (0x0009f8a0) bg_button_pane_cp09_ParamLimits

0x61db,	// (0x0009f8a0) bg_button_pane_cp09

0x61e7,	// (0x0009f8ac) cell_call4_button_pane_g1_ParamLimits

0x61e7,	// (0x0009f8ac) cell_call4_button_pane_g1

0x61f4,	// (0x0009f8b9) cell_call4_button_pane_t1_ParamLimits

0x61f4,	// (0x0009f8b9) cell_call4_button_pane_t1

0xd6ab,	// (0x000a6d70) popup_call4_audio_conf_window_ParamLimits

0xd6ab,	// (0x000a6d70) popup_call4_audio_conf_window

0x53a4,	// (0x0009ea69) mup3_progress_pane_t1_ParamLimits

0x53c3,	// (0x0009ea88) mup3_progress_pane_t2_ParamLimits

0xd048,	// (0x000a670d) mup3_progress_pane_t3_ParamLimits

0xf630,	// (0x000a8cf5) mup3_progress_pane_t_ParamLimits

0xd065,	// (0x000a672a) mup_progress_pane_cp03_ParamLimits

0x58f3,	// (0x0009efb8) mup3_control_keys_pane_g4_copy1

0x5e2a,	// (0x0009f4ef) mp4_rocker2_pane_ParamLimits

0x5e2a,	// (0x0009f4ef) mp4_rocker2_pane

0xd6c7,	// (0x000a6d8c) mp4_rocker2_pane_g1

0xd6bf,	// (0x000a6d84) mp4_rocker2_pane_g2

0x6238,	// (0x0009f8fd) mp4_rocker2_pane_g3

0x6240,	// (0x0009f905) mp4_rocker2_pane_g4

0x6248,	// (0x0009f90d) mp4_rocker2_pane_g5

0x0004,

0xf6fc,	// (0x000a8dc1) mp4_rocker2_pane_g

0x1071,	// (0x0009a736) main_camera4_pane

0x1071,	// (0x0009a736) main_video4_pane

0x5b4c,	// (0x0009f211) main_video_tele_dialer_pane_t1_ParamLimits

0x5b4c,	// (0x0009f211) main_video_tele_dialer_pane_t1

0x5b5e,	// (0x0009f223) main_video_tele_dialer_pane_t2_ParamLimits

0x5b5e,	// (0x0009f223) main_video_tele_dialer_pane_t2

0x0001,

0xf6b7,	// (0x000a8d7c) main_video_tele_dialer_pane_t_ParamLimits

0xf6b7,	// (0x000a8d7c) main_video_tele_dialer_pane_t

0x6268,	// (0x0009f92d) cam4_autofocus_pane_ParamLimits

0x6268,	// (0x0009f92d) cam4_autofocus_pane

0x6282,	// (0x0009f947) cam4_image_uncrop_pane_ParamLimits

0x6282,	// (0x0009f947) cam4_image_uncrop_pane

0x6299,	// (0x0009f95e) cam4_indicators_pane_ParamLimits

0x6299,	// (0x0009f95e) cam4_indicators_pane

0x62b5,	// (0x0009f97a) main_camera4_pane_g1_ParamLimits

0x62b5,	// (0x0009f97a) main_camera4_pane_g1

0x62c1,	// (0x0009f986) main_camera4_pane_g2_ParamLimits

0x62c1,	// (0x0009f986) main_camera4_pane_g2

0x62c1,	// (0x0009f986) main_camera4_pane_g3_ParamLimits

0x62c1,	// (0x0009f986) main_camera4_pane_g3

0x62cd,	// (0x0009f992) main_camera4_pane_g4_ParamLimits

0x62cd,	// (0x0009f992) main_camera4_pane_g4

0x62d9,	// (0x0009f99e) main_camera4_pane_g5_ParamLimits

0x62d9,	// (0x0009f99e) main_camera4_pane_g5

0x0005,

0xf707,	// (0x000a8dcc) main_camera4_pane_g_ParamLimits

0xf707,	// (0x000a8dcc) main_camera4_pane_g

0x62f3,	// (0x0009f9b8) main_camera4_pane_t1_ParamLimits

0x62f3,	// (0x0009f9b8) main_camera4_pane_t1

0x633b,	// (0x0009fa00) bg_tb_trans_pane_cp06

0x6351,	// (0x0009fa16) cam4_indicators_pane_g1

0x6362,	// (0x0009fa27) cam4_indicators_pane_g2

0x0002,

0xf722,	// (0x000a8de7) cam4_indicators_pane_g

0x637a,	// (0x0009fa3f) cam4_indicators_pane_t1

0x63a4,	// (0x0009fa69) main_video4_pane_g1_ParamLimits

0x63a4,	// (0x0009fa69) main_video4_pane_g1

0x63b0,	// (0x0009fa75) main_video4_pane_g2_ParamLimits

0x63b0,	// (0x0009fa75) main_video4_pane_g2

0x63bc,	// (0x0009fa81) main_video4_pane_g3_ParamLimits

0x63bc,	// (0x0009fa81) main_video4_pane_g3

0x63c8,	// (0x0009fa8d) main_video4_pane_g4_ParamLimits

0x63c8,	// (0x0009fa8d) main_video4_pane_g4

0x0004,

0xf729,	// (0x000a8dee) main_video4_pane_g_ParamLimits

0xf729,	// (0x000a8dee) main_video4_pane_g

0x63e8,	// (0x0009faad) vid4_indicators_pane_ParamLimits

0x63e8,	// (0x0009faad) vid4_indicators_pane

0x6407,	// (0x0009facc) video4_image_uncrop_cif_pane_ParamLimits

0x6407,	// (0x0009facc) video4_image_uncrop_cif_pane

0x6416,	// (0x0009fadb) video4_image_uncrop_nhd_pane_ParamLimits

0x6416,	// (0x0009fadb) video4_image_uncrop_nhd_pane

0x6282,	// (0x0009f947) video4_image_uncrop_vga_pane_ParamLimits

0x6282,	// (0x0009f947) video4_image_uncrop_vga_pane

0x426d,	// (0x0009d932) bg_tb_trans_pane_cp07

0x642b,	// (0x0009faf0) vid4_indicators_pane_g1

0x643f,	// (0x0009fb04) vid4_indicators_pane_g2

0x6453,	// (0x0009fb18) vid4_indicators_pane_g3

0x0004,

0xf734,	// (0x000a8df9) vid4_indicators_pane_g

0x6480,	// (0x0009fb45) vid4_indicators_pane_t1

0x6497,	// (0x0009fb5c) cam4_autofocus_pane_g1

0x649f,	// (0x0009fb64) cam4_autofocus_pane_g2

0x64a7,	// (0x0009fb6c) cam4_autofocus_pane_g3

0x0002,

0xf73f,	// (0x000a8e04) cam4_autofocus_pane_g

0x64af,	// (0x0009fb74) cam4_autofocus_pane_g3_copy1

0x5b7e,	// (0x0009f243) video_down_pane_cp_t1

0x5b8c,	// (0x0009f251) video_down_pane_cp_t2

0x0001,

0xf6bc,	// (0x000a8d81) video_down_pane_cp_t

0x1057,	// (0x0009a71c) popup_vitu2_window_ParamLimits

0x1057,	// (0x0009a71c) popup_vitu2_window

0x64b7,	// (0x0009fb7c) aid_size_cell2_itu2_ParamLimits

0x64b7,	// (0x0009fb7c) aid_size_cell2_itu2

0x64d9,	// (0x0009fb9e) aid_size_cell_itu2_ParamLimits

0x64d9,	// (0x0009fb9e) aid_size_cell_itu2

0x651d,	// (0x0009fbe2) bg_popup_window_pane_cp09_ParamLimits

0x651d,	// (0x0009fbe2) bg_popup_window_pane_cp09

0x652b,	// (0x0009fbf0) field_vitu2_entry_pane_ParamLimits

0x652b,	// (0x0009fbf0) field_vitu2_entry_pane

0x654b,	// (0x0009fc10) grid_vitu2_function_pane_ParamLimits

0x654b,	// (0x0009fc10) grid_vitu2_function_pane

0x658f,	// (0x0009fc54) grid_vitu2_itu_pane_ParamLimits

0x658f,	// (0x0009fc54) grid_vitu2_itu_pane

0x6609,	// (0x0009fcce) cell_vitu2_itu_pane_ParamLimits

0x6609,	// (0x0009fcce) cell_vitu2_itu_pane

0x6622,	// (0x0009fce7) cell_vitu2_function_pane_ParamLimits

0x6622,	// (0x0009fce7) cell_vitu2_function_pane

0xd6cf,	// (0x000a6d94) bg_popup_call_pane_cp08_ParamLimits

0xd6cf,	// (0x000a6d94) bg_popup_call_pane_cp08

0xd6e6,	// (0x000a6dab) field_vitu2_entry_pane_g1

0xd6f2,	// (0x000a6db7) field_vitu2_entry_pane_g2

0x0002,

0x0750,	// (0x00099e15) field_vitu2_entry_pane_g

0x6663,	// (0x0009fd28) field_vitu2_entry_pane_t1_ParamLimits

0x6663,	// (0x0009fd28) field_vitu2_entry_pane_t1

0x9f22,	// (0x000a35e7) field_vitu2_entry_pane_t2_ParamLimits

0x9f22,	// (0x000a35e7) field_vitu2_entry_pane_t2

0x0001,

0xf746,	// (0x000a8e0b) field_vitu2_entry_pane_t_ParamLimits

0xf746,	// (0x000a8e0b) field_vitu2_entry_pane_t

0x6693,	// (0x0009fd58) bg_button_pane_cp010_ParamLimits

0x6693,	// (0x0009fd58) bg_button_pane_cp010

0x66a1,	// (0x0009fd66) cell_vitu2_itu_pane_g1

0x66c1,	// (0x0009fd86) cell_vitu2_itu_pane_t1_ParamLimits

0x66c1,	// (0x0009fd86) cell_vitu2_itu_pane_t1

0x0cc6,	// (0x0009a38b) cell_vitu2_itu_pane_t2_ParamLimits

0x0cc6,	// (0x0009a38b) cell_vitu2_itu_pane_t2

0x0002,

0xf750,	// (0x000a8e15) cell_vitu2_itu_pane_t_ParamLimits

0xf750,	// (0x000a8e15) cell_vitu2_itu_pane_t

0x426d,	// (0x0009d932) bg_button_pane_cp011

0x670d,	// (0x0009fdd2) cell_vitu2_function_pane_g1

0x1071,	// (0x0009a736) main_myfav_hc_pane

0x6074,	// (0x0009f739) popup_image3_note_pane_ParamLimits

0x6074,	// (0x0009f739) popup_image3_note_pane

0x6082,	// (0x0009f747) popup_image3_tool_bar_pane_ParamLimits

0x6082,	// (0x0009f747) popup_image3_tool_bar_pane

0x0d3c,	// (0x0009a401) cell_vitu2_itu_pane_t3_ParamLimits

0x0d3c,	// (0x0009a401) cell_vitu2_itu_pane_t3

0x9c3d,	// (0x000a3302) bg_popup_trans_pane

0xd714,	// (0x000a6dd9) grid_image3_tool_bar_pane

0xd71e,	// (0x000a6de3) bg_popup_trans_pane_g1

0xad2c,	// (0x000a43f1) bg_popup_trans_pane_g2

0xd726,	// (0x000a6deb) bg_popup_trans_pane_g3

0xd72e,	// (0x000a6df3) bg_popup_trans_pane_g4

0xd736,	// (0x000a6dfb) bg_popup_trans_pane_g5

0xd73e,	// (0x000a6e03) bg_popup_trans_pane_g6

0xd746,	// (0x000a6e0b) bg_popup_trans_pane_g7

0xd74e,	// (0x000a6e13) bg_popup_trans_pane_g8

0xad0c,	// (0x000a43d1) bg_popup_trans_pane_g9

0x0008,

0xf757,	// (0x000a8e1c) bg_popup_trans_pane_g

0xd756,	// (0x000a6e1b) cell_image3_tool_bar_pane_ParamLimits

0xd756,	// (0x000a6e1b) cell_image3_tool_bar_pane

0xcd88,	// (0x000a644d) cell_image3_tool_bar_pane_g1

0x9c3d,	// (0x000a3302) bg_popup_trans_pane_cp1

0xd76a,	// (0x000a6e2f) popup_image3_note_pane_t1

0xd778,	// (0x000a6e3d) popup_image3_note_pane_t2

0xd786,	// (0x000a6e4b) popup_image3_note_pane_t3

0x0002,

0x077b,	// (0x00099e40) popup_image3_note_pane_t

0xd794,	// (0x000a6e59) popup_image3_note_pane_t3_copy1

0x6721,	// (0x0009fde6) bg_myfav_hc_instruction_pane_ParamLimits

0x6721,	// (0x0009fde6) bg_myfav_hc_instruction_pane

0x6739,	// (0x0009fdfe) cell_myfav_contact_pane_ParamLimits

0x6739,	// (0x0009fdfe) cell_myfav_contact_pane

0x6753,	// (0x0009fe18) cell_myfav_contact_pane_cp1_ParamLimits

0x6753,	// (0x0009fe18) cell_myfav_contact_pane_cp1

0x676b,	// (0x0009fe30) cell_myfav_contact_pane_cp2_ParamLimits

0x676b,	// (0x0009fe30) cell_myfav_contact_pane_cp2

0x6783,	// (0x0009fe48) cell_myfav_contact_pane_cp3_ParamLimits

0x6783,	// (0x0009fe48) cell_myfav_contact_pane_cp3

0x679a,	// (0x0009fe5f) cell_myfav_contact_pane_cp4_ParamLimits

0x679a,	// (0x0009fe5f) cell_myfav_contact_pane_cp4

0x67b0,	// (0x0009fe75) cell_myfav_contact_pane_cp5_ParamLimits

0x67b0,	// (0x0009fe75) cell_myfav_contact_pane_cp5

0x67c4,	// (0x0009fe89) cell_myfav_contact_pane_cp6_ParamLimits

0x67c4,	// (0x0009fe89) cell_myfav_contact_pane_cp6

0x67d8,	// (0x0009fe9d) cell_myfav_contact_pane_cp7_ParamLimits

0x67d8,	// (0x0009fe9d) cell_myfav_contact_pane_cp7

0xd7a2,	// (0x000a6e67) listscroll_gen_pane_cp05

0x67f0,	// (0x0009feb5) main_myfav_hc_pane_g1_ParamLimits

0x67f0,	// (0x0009feb5) main_myfav_hc_pane_g1

0x6806,	// (0x0009fecb) main_myfav_hc_pane_g2_ParamLimits

0x6806,	// (0x0009fecb) main_myfav_hc_pane_g2

0x0002,

0xf76a,	// (0x000a8e2f) main_myfav_hc_pane_g_ParamLimits

0xf76a,	// (0x000a8e2f) main_myfav_hc_pane_g

0x6836,	// (0x0009fefb) main_myfav_hc_pane_t1_ParamLimits

0x6836,	// (0x0009fefb) main_myfav_hc_pane_t1

0xd7ab,	// (0x000a6e70) main_myfav_hc_pane_t2_ParamLimits

0xd7ab,	// (0x000a6e70) main_myfav_hc_pane_t2

0xd7bd,	// (0x000a6e82) main_myfav_hc_pane_t3_ParamLimits

0xd7bd,	// (0x000a6e82) main_myfav_hc_pane_t3

0x684d,	// (0x0009ff12) main_myfav_hc_pane_t4_ParamLimits

0x684d,	// (0x0009ff12) main_myfav_hc_pane_t4

0x0004,

0xf771,	// (0x000a8e36) main_myfav_hc_pane_t_ParamLimits

0xf771,	// (0x000a8e36) main_myfav_hc_pane_t

0xcd88,	// (0x000a644d) bg_myfav_hc_instruction_pane_g1

0xd7cf,	// (0x000a6e94) cell_myfav_contact_pane_g1_ParamLimits

0xd7cf,	// (0x000a6e94) cell_myfav_contact_pane_g1

0xd7cf,	// (0x000a6e94) cell_myfav_contact_pane_g2_ParamLimits

0xd7cf,	// (0x000a6e94) cell_myfav_contact_pane_g2

0xd7db,	// (0x000a6ea0) cell_myfav_contact_pane_g3_ParamLimits

0xd7db,	// (0x000a6ea0) cell_myfav_contact_pane_g3

0xd032,	// (0x000a66f7) cell_myfav_contact_pane_g4_ParamLimits

0xd032,	// (0x000a66f7) cell_myfav_contact_pane_g4

0xd7e8,	// (0x000a6ead) cell_myfav_contact_pane_g5_ParamLimits

0xd7e8,	// (0x000a6ead) cell_myfav_contact_pane_g5

0x0004,

0x0794,	// (0x00099e59) cell_myfav_contact_pane_g_ParamLimits

0x0794,	// (0x00099e59) cell_myfav_contact_pane_g

0x681e,	// (0x0009fee3) main_myfav_hc_pane_g3_ParamLimits

0x681e,	// (0x0009fee3) main_myfav_hc_pane_g3

0x0f60,	// (0x0009a625) popup_adpt_find_window

0x6877,	// (0x0009ff3c) afind_page_pane_ParamLimits

0x6877,	// (0x0009ff3c) afind_page_pane

0x6884,	// (0x0009ff49) aid_size_cell_afind_ParamLimits

0x6884,	// (0x0009ff49) aid_size_cell_afind

0x689e,	// (0x0009ff63) bg_popup_sub_pane_cp09_ParamLimits

0x689e,	// (0x0009ff63) bg_popup_sub_pane_cp09

0x68ab,	// (0x0009ff70) find_pane_cp01_ParamLimits

0x68ab,	// (0x0009ff70) find_pane_cp01

0xd7f4,	// (0x000a6eb9) grid_afind_control_pane_ParamLimits

0xd7f4,	// (0x000a6eb9) grid_afind_control_pane

0x68b8,	// (0x0009ff7d) grid_afind_pane_ParamLimits

0x68b8,	// (0x0009ff7d) grid_afind_pane

0x68d2,	// (0x0009ff97) cell_afind_pane_ParamLimits

0x68d2,	// (0x0009ff97) cell_afind_pane

0xcd88,	// (0x000a644d) afind_page_pane_g1

0x691a,	// (0x0009ffdf) afind_page_pane_g2

0x6923,	// (0x0009ffe8) afind_page_pane_g3

0x0002,

0xf77c,	// (0x000a8e41) afind_page_pane_g

0x692c,	// (0x0009fff1) afind_page_pane_t1

0xd808,	// (0x000a6ecd) cell_afind_grid_control_pane_ParamLimits

0xd808,	// (0x000a6ecd) cell_afind_grid_control_pane

0xd697,	// (0x000a6d5c) bg_button_pane_cp69_ParamLimits

0xd697,	// (0x000a6d5c) bg_button_pane_cp69

0x694c,	// (0x000a0011) cell_afind_pane_g1_ParamLimits

0x694c,	// (0x000a0011) cell_afind_pane_g1

0x6959,	// (0x000a001e) cell_afind_pane_t1_ParamLimits

0x6959,	// (0x000a001e) cell_afind_pane_t1

0xab25,	// (0x000a41ea) bg_button_pane_cp72

0xd817,	// (0x000a6edc) cell_afind_grid_control_pane_g1

0x3de5,	// (0x0009d4aa) aid_image_placing_area_ParamLimits

0x3de5,	// (0x0009d4aa) aid_image_placing_area

0xd358,	// (0x000a6a1d) field_vitu_entry_pane_g1_ParamLimits

0xd358,	// (0x000a6a1d) field_vitu_entry_pane_g1

0xd364,	// (0x000a6a29) field_vitu_entry_pane_g2_ParamLimits

0xd364,	// (0x000a6a29) field_vitu_entry_pane_g2

0x0001,

0x064c,	// (0x00099d11) field_vitu_entry_pane_g_ParamLimits

0x064c,	// (0x00099d11) field_vitu_entry_pane_g

0x597c,	// (0x0009f041) cell_vitu_itu_pane_g1_ParamLimits

0x59be,	// (0x0009f083) cell_vitu_itu_pane_t3_ParamLimits

0x59be,	// (0x0009f083) cell_vitu_itu_pane_t3

0xd640,	// (0x000a6d05) mp4_progress_pane_t1_ParamLimits

0xd659,	// (0x000a6d1e) mp4_progress_pane_t2_ParamLimits

0x06e5,	// (0x00099daa) mp4_progress_pane_t_ParamLimits

0xd672,	// (0x000a6d37) mup_progress_pane_cp04_ParamLimits

0x6861,	// (0x0009ff26) main_myfav_hc_pane_t5_ParamLimits

0x6861,	// (0x0009ff26) main_myfav_hc_pane_t5

0x0cbe,	// (0x0009a383) aid_zoom_text_primary

0x0f60,	// (0x0009a625) popup_adpt_find_window_ParamLimits

0x426d,	// (0x0009d932) main_cam_set_pane

0x62a7,	// (0x0009f96c) cam4_zoom_pane_ParamLimits

0x62a7,	// (0x0009f96c) cam4_zoom_pane

0x696b,	// (0x000a0030) main_cam_set_pane_g1_ParamLimits

0x696b,	// (0x000a0030) main_cam_set_pane_g1

0x6979,	// (0x000a003e) main_cam_set_pane_g2_ParamLimits

0x6979,	// (0x000a003e) main_cam_set_pane_g2

0x0001,

0xf783,	// (0x000a8e48) main_cam_set_pane_g_ParamLimits

0xf783,	// (0x000a8e48) main_cam_set_pane_g

0x6985,	// (0x000a004a) main_cam_set_pane_t1_ParamLimits

0x6985,	// (0x000a004a) main_cam_set_pane_t1

0x69a1,	// (0x000a0066) main_cset_listscroll_pane_ParamLimits

0x69a1,	// (0x000a0066) main_cset_listscroll_pane

0x69cc,	// (0x000a0091) main_cset_slider_pane_ParamLimits

0x69cc,	// (0x000a0091) main_cset_slider_pane

0xd828,	// (0x000a6eed) main_cset_list_pane_ParamLimits

0xd828,	// (0x000a6eed) main_cset_list_pane

0xd838,	// (0x000a6efd) scroll_pane_cp028

0x69eb,	// (0x000a00b0) aid_area_touch_slider

0x6a07,	// (0x000a00cc) cset_slider_pane

0x6a31,	// (0x000a00f6) main_cset_slider_pane_g1

0x6a46,	// (0x000a010b) main_cset_slider_pane_g2

0x0011,

0xf788,	// (0x000a8e4d) main_cset_slider_pane_g

0xd871,	// (0x000a6f36) main_cset_slider_pane_t1

0x6b0c,	// (0x000a01d1) main_cset_slider_pane_t2

0x6b26,	// (0x000a01eb) main_cset_slider_pane_t3

0x6b40,	// (0x000a0205) main_cset_slider_pane_t4

0x6b5e,	// (0x000a0223) main_cset_slider_pane_t5

0x6b7c,	// (0x000a0241) main_cset_slider_pane_t6

0x6b93,	// (0x000a0258) main_cset_slider_pane_t7

0x000e,

0xf7ad,	// (0x000a8e72) main_cset_slider_pane_t

0x6ca1,	// (0x000a0366) cset_list_set_pane_ParamLimits

0x6ca1,	// (0x000a0366) cset_list_set_pane

0x6cba,	// (0x000a037f) aid_position_infowindow_above

0x6cc2,	// (0x000a0387) aid_position_infowindow_below

0x6cca,	// (0x000a038f) cset_list_set_pane_g1_ParamLimits

0x6cca,	// (0x000a038f) cset_list_set_pane_g1

0x6cd6,	// (0x000a039b) cset_list_set_pane_g3_ParamLimits

0x6cd6,	// (0x000a039b) cset_list_set_pane_g3

0x0001,

0xf7cc,	// (0x000a8e91) cset_list_set_pane_g_ParamLimits

0xf7cc,	// (0x000a8e91) cset_list_set_pane_g

0x6ce5,	// (0x000a03aa) cset_list_set_pane_t1_ParamLimits

0x6ce5,	// (0x000a03aa) cset_list_set_pane_t1

0xa4af,	// (0x000a3b74) list_highlight_pane_cp021_ParamLimits

0xa4af,	// (0x000a3b74) list_highlight_pane_cp021

0xb65c,	// (0x000a4d21) cset_slider_pane_g1

0xb66e,	// (0x000a4d33) cset_slider_pane_g2

0xb665,	// (0x000a4d2a) cset_slider_pane_g3

0x0002,

0x07f4,	// (0x00099eb9) cset_slider_pane_g

0x6cfa,	// (0x000a03bf) aid_area_touch_cam4_zoom

0x6d02,	// (0x000a03c7) cam4_zoom_cont_pane

0x6d0a,	// (0x000a03cf) cam4_zoom_pane_g1

0x6d12,	// (0x000a03d7) cam4_zoom_pane_g2

0x6d1a,	// (0x000a03df) cam4_zoom_pane_g3

0x0002,

0xf7d1,	// (0x000a8e96) cam4_zoom_pane_g

0x6d22,	// (0x000a03e7) cam4_zoom_cont_pane_g1

0x6d2b,	// (0x000a03f0) cam4_zoom_cont_pane_g2

0x6d34,	// (0x000a03f9) cam4_zoom_cont_pane_g3

0x0002,

0xf7d8,	// (0x000a8e9d) cam4_zoom_cont_pane_g

0x60cb,	// (0x0009f790) call4_image_pane_ParamLimits

0x60cb,	// (0x0009f790) call4_image_pane

0x612a,	// (0x0009f7ef) call4_windows_conf_pane_ParamLimits

0x616f,	// (0x0009f834) popup_call4_audio_in_window_ParamLimits

0x616f,	// (0x0009f834) popup_call4_audio_in_window

0x9c3d,	// (0x000a3302) bg_popup_call2_act_pane_cp02

0xd6a3,	// (0x000a6d68) call4_list_conf_pane

0xcd88,	// (0x000a644d) call4_image_pane_g1

0xcd88,	// (0x000a644d) call4_image_pane_g2

0x0001,

0x050d,	// (0x00099bd2) call4_image_pane_g

0xd929,	// (0x000a6fee) list_single_graphic_popup_conf4_pane_ParamLimits

0xd929,	// (0x000a6fee) list_single_graphic_popup_conf4_pane

0x9c3d,	// (0x000a3302) list_highlight_pane_cp022

0xd93c,	// (0x000a7001) list_single_graphic_popup_conf4_pane_g1

0xb258,	// (0x000a491d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0x0809,	// (0x00099ece) list_single_graphic_popup_conf4_pane_g

0xd944,	// (0x000a7009) list_single_graphic_popup_conf4_pane_t1

0x2028,	// (0x0009b6ed) popup_vtel_slider_window_ParamLimits

0x2028,	// (0x0009b6ed) popup_vtel_slider_window

0xd685,	// (0x000a6d4a) dialer2_ne_pane_t2_ParamLimits

0xd685,	// (0x000a6d4a) dialer2_ne_pane_t2

0x0001,

0xf6e0,	// (0x000a8da5) dialer2_ne_pane_t_ParamLimits

0xf6e0,	// (0x000a8da5) dialer2_ne_pane_t

0xa4af,	// (0x000a3b74) bg_popup_sub_pane_cp010_ParamLimits

0xa4af,	// (0x000a3b74) bg_popup_sub_pane_cp010

0x6d3d,	// (0x000a0402) popup_vtel_slider_window_g1_ParamLimits

0x6d3d,	// (0x000a0402) popup_vtel_slider_window_g1

0x6d49,	// (0x000a040e) popup_vtel_slider_window_g2_ParamLimits

0x6d49,	// (0x000a040e) popup_vtel_slider_window_g2

0x0003,

0xf7df,	// (0x000a8ea4) popup_vtel_slider_window_g_ParamLimits

0xf7df,	// (0x000a8ea4) popup_vtel_slider_window_g

0x6d91,	// (0x000a0456) vtel_slider_pane_ParamLimits

0x6d91,	// (0x000a0456) vtel_slider_pane

0x6da0,	// (0x000a0465) vtel_slider_pane_g1_ParamLimits

0x6da0,	// (0x000a0465) vtel_slider_pane_g1

0x6dad,	// (0x000a0472) vtel_slider_pane_g2_ParamLimits

0x6dad,	// (0x000a0472) vtel_slider_pane_g2

0x6dba,	// (0x000a047f) vtel_slider_pane_g3_ParamLimits

0x6dba,	// (0x000a047f) vtel_slider_pane_g3

0x6da0,	// (0x000a0465) vtel_slider_pane_g4_ParamLimits

0x6da0,	// (0x000a0465) vtel_slider_pane_g4

0x6dc7,	// (0x000a048c) vtel_slider_pane_g5_ParamLimits

0x6dc7,	// (0x000a048c) vtel_slider_pane_g5

0x0004,

0xf7e8,	// (0x000a8ead) vtel_slider_pane_g_ParamLimits

0xf7e8,	// (0x000a8ead) vtel_slider_pane_g

0x426d,	// (0x0009d932) main_gallery2_pane

0x64ff,	// (0x0009fbc4) aid_size_row_itut2_dropdow_list_ParamLimits

0x64ff,	// (0x0009fbc4) aid_size_row_itut2_dropdow_list

0x656d,	// (0x0009fc32) grid_vitu2_function_top_pane_ParamLimits

0x656d,	// (0x0009fc32) grid_vitu2_function_top_pane

0x65c7,	// (0x0009fc8c) popup_vitu2_dropdown_list_window_ParamLimits

0x65c7,	// (0x0009fc8c) popup_vitu2_dropdown_list_window

0x65e7,	// (0x0009fcac) popup_vitu2_match_list_window

0x6de2,	// (0x000a04a7) cell_vitu2_function_top_pane_ParamLimits

0x6de2,	// (0x000a04a7) cell_vitu2_function_top_pane

0x6dfc,	// (0x000a04c1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6dfc,	// (0x000a04c1) cell_vitu2_function_top_pane_cp01

0x6e18,	// (0x000a04dd) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e18,	// (0x000a04dd) cell_vitu2_function_top_wide_pane

0x426d,	// (0x0009d932) bg_button_pane_cp012

0x6e34,	// (0x000a04f9) cell_vitu2_function_top_pane_g1

0x6e48,	// (0x000a050d) bg_button_pane_cp013_ParamLimits

0x6e48,	// (0x000a050d) bg_button_pane_cp013

0x6e64,	// (0x000a0529) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e64,	// (0x000a0529) cell_vitu2_function_top_wide_pane_g1

0x1057,	// (0x0009a71c) bg_popup_sub_pane_cp20

0x6e7c,	// (0x000a0541) list_vitu2_match_list_pane

0xd71e,	// (0x000a6de3) bg_popup_sub_pane_cp20_g1

0xd726,	// (0x000a6deb) bg_popup_sub_pane_cp20_g2

0xad2c,	// (0x000a43f1) bg_popup_sub_pane_cp20_g3

0xd72e,	// (0x000a6df3) bg_popup_sub_pane_cp20_g4

0xad0c,	// (0x000a43d1) bg_popup_sub_pane_cp20_g5

0xd95a,	// (0x000a701f) bg_popup_sub_pane_cp20_g6

0xd73e,	// (0x000a6e03) bg_popup_sub_pane_cp20_g7

0xd746,	// (0x000a6e0b) bg_popup_sub_pane_cp20_g8

0xd74e,	// (0x000a6e13) bg_popup_sub_pane_cp20_g9

0x0008,

0xf7f3,	// (0x000a8eb8) bg_popup_sub_pane_cp20_g

0x6e94,	// (0x000a0559) list_vitu2_match_list_item_pane_ParamLimits

0x6e94,	// (0x000a0559) list_vitu2_match_list_item_pane

0x6ea6,	// (0x000a056b) list_vitu2_match_list_item_pane_t1

0x1071,	// (0x0009a736) bg_popup_sub_pane_cp21

0x6efc,	// (0x000a05c1) grid_vitu2_dropdown_list_pane

0x6f04,	// (0x000a05c9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f04,	// (0x000a05c9) cell_vitu2_dropdown_list_char_pane

0x6f25,	// (0x000a05ea) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f25,	// (0x000a05ea) cell_vitu2_dropdown_list_ctrl_pane

0xd962,	// (0x000a7027) cell_vitu2_dropdown_list_char_pane_g1

0xd96b,	// (0x000a7030) cell_vitu2_dropdown_list_char_pane_g2

0xd974,	// (0x000a7039) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x083f,	// (0x00099f04) cell_vitu2_dropdown_list_char_pane_g

0x6f51,	// (0x000a0616) cell_vitu2_dropdown_list_char_pane_t1

0x6f5f,	// (0x000a0624) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f5f,	// (0x000a0624) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f6f,	// (0x000a0634) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f6f,	// (0x000a0634) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f80,	// (0x000a0645) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f80,	// (0x000a0645) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f90,	// (0x000a0655) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f90,	// (0x000a0655) cell_vitu2_dropdown_list_ctrl_pane_g4

0x633b,	// (0x0009fa00) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x633b,	// (0x0009fa00) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf810,	// (0x000a8ed5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf810,	// (0x000a8ed5) cell_vitu2_dropdown_list_ctrl_pane_g

0x6fac,	// (0x000a0671) aid_size_cell_gallery2_ParamLimits

0x6fac,	// (0x000a0671) aid_size_cell_gallery2

0x6fc6,	// (0x000a068b) grid_gallery2_pane_ParamLimits

0x6fc6,	// (0x000a068b) grid_gallery2_pane

0x6fdd,	// (0x000a06a2) scroll_pane_cp029_ParamLimits

0x6fdd,	// (0x000a06a2) scroll_pane_cp029

0x6fed,	// (0x000a06b2) cell_gallery2_pane_ParamLimits

0x6fed,	// (0x000a06b2) cell_gallery2_pane

0xd97d,	// (0x000a7042) cell_gallery2_pane_g2

0x7042,	// (0x000a0707) cell_gallery2_pane_g3

0xd985,	// (0x000a704a) cell_gallery2_pane_g4

0xd98d,	// (0x000a7052) cell_gallery2_pane_g5

0xaab5,	// (0x000a417a) grid_highlight_pane_cp10

0x65e7,	// (0x0009fcac) popup_vitu2_match_list_window_ParamLimits

0x65f9,	// (0x0009fcbe) popup_vitu2_query_window_ParamLimits

0x65f9,	// (0x0009fcbe) popup_vitu2_query_window

0x1071,	// (0x0009a736) bg_vitu2_candi_button_pane

0xd962,	// (0x000a7027) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd96b,	// (0x000a7030) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd974,	// (0x000a7039) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x704a,	// (0x000a070f) bg_button_pane_cp015

0x705c,	// (0x000a0721) bg_button_pane_cp016

0x706f,	// (0x000a0734) bg_button_pane_cp017

0xc980,	// (0x000a6045) bg_popup_sub_pane_cp22

0xd995,	// (0x000a705a) popup_vitu2_query_window_g1

0x70b4,	// (0x000a0779) popup_vitu2_query_window_g2

0x0002,

0xf81b,	// (0x000a8ee0) popup_vitu2_query_window_g

0x70d1,	// (0x000a0796) popup_vitu2_query_window_t1_ParamLimits

0x70d1,	// (0x000a0796) popup_vitu2_query_window_t1

0x7104,	// (0x000a07c9) popup_vitu2_query_window_t2_ParamLimits

0x7104,	// (0x000a07c9) popup_vitu2_query_window_t2

0x7116,	// (0x000a07db) popup_vitu2_query_window_t3_ParamLimits

0x7116,	// (0x000a07db) popup_vitu2_query_window_t3

0x713e,	// (0x000a0803) popup_vitu2_query_window_t4_ParamLimits

0x713e,	// (0x000a0803) popup_vitu2_query_window_t4

0x715f,	// (0x000a0824) popup_vitu2_query_window_t5_ParamLimits

0x715f,	// (0x000a0824) popup_vitu2_query_window_t5

0x0006,

0xf822,	// (0x000a8ee7) popup_vitu2_query_window_t_ParamLimits

0xf822,	// (0x000a8ee7) popup_vitu2_query_window_t

0xd820,	// (0x000a6ee5) main_cset_text_pane

0x69eb,	// (0x000a00b0) aid_area_touch_slider_ParamLimits

0x6a07,	// (0x000a00cc) cset_slider_pane_ParamLimits

0x6a31,	// (0x000a00f6) main_cset_slider_pane_g1_ParamLimits

0x6a46,	// (0x000a010b) main_cset_slider_pane_g2_ParamLimits

0xd841,	// (0x000a6f06) main_cset_slider_pane_g3_ParamLimits

0xd841,	// (0x000a6f06) main_cset_slider_pane_g3

0x6a5b,	// (0x000a0120) main_cset_slider_pane_g4_ParamLimits

0x6a5b,	// (0x000a0120) main_cset_slider_pane_g4

0x6a6a,	// (0x000a012f) main_cset_slider_pane_g5_ParamLimits

0x6a6a,	// (0x000a012f) main_cset_slider_pane_g5

0x6a78,	// (0x000a013d) main_cset_slider_pane_g6_ParamLimits

0x6a78,	// (0x000a013d) main_cset_slider_pane_g6

0xf788,	// (0x000a8e4d) main_cset_slider_pane_g_ParamLimits

0xd871,	// (0x000a6f36) main_cset_slider_pane_t1_ParamLimits

0x6b0c,	// (0x000a01d1) main_cset_slider_pane_t2_ParamLimits

0x6b26,	// (0x000a01eb) main_cset_slider_pane_t3_ParamLimits

0x6b40,	// (0x000a0205) main_cset_slider_pane_t4_ParamLimits

0x6b5e,	// (0x000a0223) main_cset_slider_pane_t5_ParamLimits

0x6b7c,	// (0x000a0241) main_cset_slider_pane_t6_ParamLimits

0x6b93,	// (0x000a0258) main_cset_slider_pane_t7_ParamLimits

0x6bc1,	// (0x000a0286) main_cset_slider_pane_t8_ParamLimits

0x6bc1,	// (0x000a0286) main_cset_slider_pane_t8

0x6be9,	// (0x000a02ae) main_cset_slider_pane_t9_ParamLimits

0x6be9,	// (0x000a02ae) main_cset_slider_pane_t9

0x6c11,	// (0x000a02d6) main_cset_slider_pane_t10_ParamLimits

0x6c11,	// (0x000a02d6) main_cset_slider_pane_t10

0x6c39,	// (0x000a02fe) main_cset_slider_pane_t11_ParamLimits

0x6c39,	// (0x000a02fe) main_cset_slider_pane_t11

0x6c63,	// (0x000a0328) main_cset_slider_pane_t12_ParamLimits

0x6c63,	// (0x000a0328) main_cset_slider_pane_t12

0x6c82,	// (0x000a0347) main_cset_slider_pane_t13_ParamLimits

0x6c82,	// (0x000a0347) main_cset_slider_pane_t13

0xf7ad,	// (0x000a8e72) main_cset_slider_pane_t_ParamLimits

0x9c3d,	// (0x000a3302) bg_popup_sub_pane_cp011

0xd9a1,	// (0x000a7066) main_cset_text_pane_g1

0xd9a9,	// (0x000a706e) main_cset_text_pane_t1

0xd9b7,	// (0x000a707c) main_cset_text_pane_t2

0xd9c5,	// (0x000a708a) main_cset_text_pane_t3

0xd9d3,	// (0x000a7098) main_cset_text_pane_t4

0xd9e1,	// (0x000a70a6) main_cset_text_pane_t5

0xd9ef,	// (0x000a70b4) main_cset_text_pane_t6

0xd9fd,	// (0x000a70c2) main_cset_text_pane_t7

0x0006,

0x0867,	// (0x00099f2c) main_cset_text_pane_t

0x1071,	// (0x0009a736) main_cam4_burst_pane

0x1071,	// (0x0009a736) main_cam5_pane

0x693a,	// (0x0009ffff) bg_button_pane_cp019

0x6943,	// (0x000a0008) bg_button_pane_cp020

0xd84d,	// (0x000a6f12) main_cset_slider_pane_g7_ParamLimits

0xd84d,	// (0x000a6f12) main_cset_slider_pane_g7

0xd859,	// (0x000a6f1e) main_cset_slider_pane_g8_ParamLimits

0xd859,	// (0x000a6f1e) main_cset_slider_pane_g8

0x6a8c,	// (0x000a0151) main_cset_slider_pane_g9_ParamLimits

0x6a8c,	// (0x000a0151) main_cset_slider_pane_g9

0x6a98,	// (0x000a015d) main_cset_slider_pane_g10_ParamLimits

0x6a98,	// (0x000a015d) main_cset_slider_pane_g10

0x6aa4,	// (0x000a0169) main_cset_slider_pane_g11_ParamLimits

0x6aa4,	// (0x000a0169) main_cset_slider_pane_g11

0x6ab0,	// (0x000a0175) main_cset_slider_pane_g12_ParamLimits

0x6ab0,	// (0x000a0175) main_cset_slider_pane_g12

0x6abc,	// (0x000a0181) main_cset_slider_pane_g13_ParamLimits

0x6abc,	// (0x000a0181) main_cset_slider_pane_g13

0x6aca,	// (0x000a018f) main_cset_slider_pane_g14_ParamLimits

0x6aca,	// (0x000a018f) main_cset_slider_pane_g14

0x6ad8,	// (0x000a019d) main_cset_slider_pane_g15_ParamLimits

0x6ad8,	// (0x000a019d) main_cset_slider_pane_g15

0xd89f,	// (0x000a6f64) main_cset_slider_pane_t14_ParamLimits

0xd89f,	// (0x000a6f64) main_cset_slider_pane_t14

0xd8d8,	// (0x000a6f9d) main_cset_slider_pane_t15_ParamLimits

0xd8d8,	// (0x000a6f9d) main_cset_slider_pane_t15

0x71d6,	// (0x000a089b) aid_cam4_burst_size_cell_ParamLimits

0x71d6,	// (0x000a089b) aid_cam4_burst_size_cell

0x71f2,	// (0x000a08b7) grid_cam4_burst_pane_ParamLimits

0x71f2,	// (0x000a08b7) grid_cam4_burst_pane

0x7222,	// (0x000a08e7) linegrid_cam4_burst_pane_ParamLimits

0x7222,	// (0x000a08e7) linegrid_cam4_burst_pane

0x7242,	// (0x000a0907) scroll_pane_cp30_ParamLimits

0x7242,	// (0x000a0907) scroll_pane_cp30

0x724e,	// (0x000a0913) cell_cam4_burst_pane_ParamLimits

0x724e,	// (0x000a0913) cell_cam4_burst_pane

0xda0b,	// (0x000a70d0) linegrid_cam4_burst_pane_g1_ParamLimits

0xda0b,	// (0x000a70d0) linegrid_cam4_burst_pane_g1

0x728a,	// (0x000a094f) linegrid_cam4_burst_pane_g2_ParamLimits

0x728a,	// (0x000a094f) linegrid_cam4_burst_pane_g2

0xda18,	// (0x000a70dd) linegrid_cam4_burst_pane_g3_ParamLimits

0xda18,	// (0x000a70dd) linegrid_cam4_burst_pane_g3

0x0002,

0xf831,	// (0x000a8ef6) linegrid_cam4_burst_pane_g_ParamLimits

0xf831,	// (0x000a8ef6) linegrid_cam4_burst_pane_g

0x729b,	// (0x000a0960) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x729b,	// (0x000a0960) linegrid_cam4_burst_pane_g3_copy1

0xda25,	// (0x000a70ea) linegrid_cam4_burst_pane_g4_ParamLimits

0xda25,	// (0x000a70ea) linegrid_cam4_burst_pane_g4

0x72b5,	// (0x000a097a) linegrid_cam4_burst_pane_g5_ParamLimits

0x72b5,	// (0x000a097a) linegrid_cam4_burst_pane_g5

0x72c6,	// (0x000a098b) linegrid_cam4_burst_pane_g6_ParamLimits

0x72c6,	// (0x000a098b) linegrid_cam4_burst_pane_g6

0xda32,	// (0x000a70f7) linegrid_cam4_burst_pane_g7_ParamLimits

0xda32,	// (0x000a70f7) linegrid_cam4_burst_pane_g7

0x72d7,	// (0x000a099c) cell_cam4_burst_pane_g1

0xda4b,	// (0x000a7110) main_cam5_pane_t1_ParamLimits

0xda4b,	// (0x000a7110) main_cam5_pane_t1

0xda5d,	// (0x000a7122) main_cam5_pane_t2_ParamLimits

0xda5d,	// (0x000a7122) main_cam5_pane_t2

0xda6f,	// (0x000a7134) main_cam5_pane_t3_ParamLimits

0xda6f,	// (0x000a7134) main_cam5_pane_t3

0xda81,	// (0x000a7146) main_cam5_pane_t4_ParamLimits

0xda81,	// (0x000a7146) main_cam5_pane_t4

0xda99,	// (0x000a715e) main_cam5_pane_t5_ParamLimits

0xda99,	// (0x000a715e) main_cam5_pane_t5

0xdaad,	// (0x000a7172) main_cam5_pane_t6_ParamLimits

0xdaad,	// (0x000a7172) main_cam5_pane_t6

0xdac1,	// (0x000a7186) main_cam5_pane_t7_ParamLimits

0xdac1,	// (0x000a7186) main_cam5_pane_t7

0xdad3,	// (0x000a7198) main_cam5_pane_t8_ParamLimits

0xdad3,	// (0x000a7198) main_cam5_pane_t8

0xdaef,	// (0x000a71b4) main_cam5_pane_t9_ParamLimits

0xdaef,	// (0x000a71b4) main_cam5_pane_t9

0xdb01,	// (0x000a71c6) main_cam5_pane_t10_ParamLimits

0xdb01,	// (0x000a71c6) main_cam5_pane_t10

0xdb13,	// (0x000a71d8) main_cam5_pane_t11_ParamLimits

0xdb13,	// (0x000a71d8) main_cam5_pane_t11

0xdb25,	// (0x000a71ea) main_cam5_pane_t12_ParamLimits

0xdb25,	// (0x000a71ea) main_cam5_pane_t12

0xdb6a,	// (0x000a722f) main_cam5_pane_t13_ParamLimits

0xdb6a,	// (0x000a722f) main_cam5_pane_t13

0x000c,

0xf83d,	// (0x000a8f02) main_cam5_pane_t_ParamLimits

0xf83d,	// (0x000a8f02) main_cam5_pane_t

0x1016,	// (0x0009a6db) popup_scut_keymap_window_ParamLimits

0x1016,	// (0x0009a6db) popup_scut_keymap_window

0x72ea,	// (0x000a09af) aid_size_cell_brow_shortcut

0xaab5,	// (0x000a417a) bg_popup_window_pane_cp010

0x72f6,	// (0x000a09bb) grid_scut_pane

0x7302,	// (0x000a09c7) cell_scut_pane_ParamLimits

0x7302,	// (0x000a09c7) cell_scut_pane

0x7319,	// (0x000a09de) cell_scut_pane_g1

0xdb87,	// (0x000a724c) cell_scut_pane_t1

0xdb96,	// (0x000a725b) cell_scut_pane_t2

0x7322,	// (0x000a09e7) cell_scut_pane_t3

0x0002,

0xf858,	// (0x000a8f1d) cell_scut_pane_t

0x4fcd,	// (0x0009e692) main_mup3_pane_g8_ParamLimits

0x4fcd,	// (0x0009e692) main_mup3_pane_g8

0x650d,	// (0x0009fbd2) area_vitu2_query_pane_ParamLimits

0x650d,	// (0x0009fbd2) area_vitu2_query_pane

0x7082,	// (0x000a0747) input_focus_pane_cp08

0xdba5,	// (0x000a726a) area_vitu2_query_pane_g1

0x7330,	// (0x000a09f5) area_vitu2_query_pane_g2

0x0001,

0xf85f,	// (0x000a8f24) area_vitu2_query_pane_g

0x7341,	// (0x000a0a06) area_vitu2_query_pane_t1_ParamLimits

0x7341,	// (0x000a0a06) area_vitu2_query_pane_t1

0x7355,	// (0x000a0a1a) area_vitu2_query_pane_t2_ParamLimits

0x7355,	// (0x000a0a1a) area_vitu2_query_pane_t2

0x7369,	// (0x000a0a2e) area_vitu2_query_pane_t3_ParamLimits

0x7369,	// (0x000a0a2e) area_vitu2_query_pane_t3

0x9f3f,	// (0x000a3604) area_vitu2_query_pane_t4_ParamLimits

0x9f3f,	// (0x000a3604) area_vitu2_query_pane_t4

0x9f67,	// (0x000a362c) area_vitu2_query_pane_t5_ParamLimits

0x9f67,	// (0x000a362c) area_vitu2_query_pane_t5

0x9f8f,	// (0x000a3654) area_vitu2_query_pane_t6_ParamLimits

0x9f8f,	// (0x000a3654) area_vitu2_query_pane_t6

0x0006,

0xf864,	// (0x000a8f29) area_vitu2_query_pane_t_ParamLimits

0xf864,	// (0x000a8f29) area_vitu2_query_pane_t

0x7391,	// (0x000a0a56) bg_button_pane_cp018

0x739f,	// (0x000a0a64) bg_button_pane_cp021

0x73ab,	// (0x000a0a70) bg_button_pane_cp022

0x73bc,	// (0x000a0a81) input_focus_pane_cp09

0xb367,	// (0x000a4a2c) aid_size_touch_mv_arrow_left

0xb392,	// (0x000a4a57) aid_size_touch_mv_arrow_right

0x6af0,	// (0x000a01b5) main_cset_slider_pane_g16_ParamLimits

0x6af0,	// (0x000a01b5) main_cset_slider_pane_g16

0x6afe,	// (0x000a01c3) main_cset_slider_pane_g17_ParamLimits

0x6afe,	// (0x000a01c3) main_cset_slider_pane_g17

0x72d7,	// (0x000a099c) cell_cam4_burst_pane_g1_ParamLimits

0x9c3d,	// (0x000a3302) compa_mode_pane

0x6d55,	// (0x000a041a) popup_vtel_slider_window_g3_ParamLimits

0x6d55,	// (0x000a041a) popup_vtel_slider_window_g3

0x6d69,	// (0x000a042e) popup_vtel_slider_window_g4_ParamLimits

0x6d69,	// (0x000a042e) popup_vtel_slider_window_g4

0x6d7d,	// (0x000a0442) popup_vtel_slider_window_t1_ParamLimits

0x6d7d,	// (0x000a0442) popup_vtel_slider_window_t1

0x1071,	// (0x0009a736) main_cl_pane

0x4307,	// (0x0009d9cc) popup_imed_adjust2_window_ParamLimits

0xc980,	// (0x000a6045) bg_tb_trans_pane_cp05_ParamLimits

0xd28d,	// (0x000a6952) popup_imed_adjust2_window_g1_ParamLimits

0xd29c,	// (0x000a6961) popup_imed_adjust2_window_g2_ParamLimits

0xd29c,	// (0x000a6961) popup_imed_adjust2_window_g2

0xd2a8,	// (0x000a696d) popup_imed_adjust2_window_g3_ParamLimits

0xd2a8,	// (0x000a696d) popup_imed_adjust2_window_g3

0x0002,

0x0610,	// (0x00099cd5) popup_imed_adjust2_window_g_ParamLimits

0x0610,	// (0x00099cd5) popup_imed_adjust2_window_g

0xd2b4,	// (0x000a6979) popup_imed_adjust2_window_t1_ParamLimits

0xd2cc,	// (0x000a6991) slider_imed_adjust_pane_ParamLimits

0xd2e0,	// (0x000a69a5) slider_imed_adjust_pane_g1_ParamLimits

0xd2f0,	// (0x000a69b5) slider_imed_adjust_pane_g2_ParamLimits

0xd300,	// (0x000a69c5) slider_imed_adjust_pane_g3_ParamLimits

0xd311,	// (0x000a69d6) slider_imed_adjust_pane_g4_ParamLimits

0x0617,	// (0x00099cdc) slider_imed_adjust_pane_g_ParamLimits

0x6250,	// (0x0009f915) aid_touch_area_cam4_ParamLimits

0x6250,	// (0x0009f915) aid_touch_area_cam4

0x6260,	// (0x0009f925) battery_pane_cp01

0x62e7,	// (0x0009f9ac) main_camera4_pane_g6_ParamLimits

0x62e7,	// (0x0009f9ac) main_camera4_pane_g6

0x6305,	// (0x0009f9ca) main_camera4_pane_t2_ParamLimits

0x6305,	// (0x0009f9ca) main_camera4_pane_t2

0x0001,

0xf714,	// (0x000a8dd9) main_camera4_pane_t_ParamLimits

0xf714,	// (0x000a8dd9) main_camera4_pane_t

0x6394,	// (0x0009fa59) aid_touch_area_vid4_ParamLimits

0x6394,	// (0x0009fa59) aid_touch_area_vid4

0x63d4,	// (0x0009fa99) main_video4_pane_g5_ParamLimits

0x63d4,	// (0x0009fa99) main_video4_pane_g5

0x63f8,	// (0x0009fabd) vid4_progress_pane_ParamLimits

0x63f8,	// (0x0009fabd) vid4_progress_pane

0xd865,	// (0x000a6f2a) main_cset_slider_pane_g18_ParamLimits

0xd865,	// (0x000a6f2a) main_cset_slider_pane_g18

0xda3f,	// (0x000a7104) cell_cam4_burst_pane_g2_ParamLimits

0xda3f,	// (0x000a7104) cell_cam4_burst_pane_g2

0x0001,

0xf838,	// (0x000a8efd) cell_cam4_burst_pane_g_ParamLimits

0xf838,	// (0x000a8efd) cell_cam4_burst_pane_g

0x73cd,	// (0x000a0a92) bg_cl_pane_ParamLimits

0x73cd,	// (0x000a0a92) bg_cl_pane

0x73d9,	// (0x000a0a9e) cl_header_pane_ParamLimits

0x73d9,	// (0x000a0a9e) cl_header_pane

0x73e5,	// (0x000a0aaa) cl_listscroll_pane_ParamLimits

0x73e5,	// (0x000a0aaa) cl_listscroll_pane

0xdbb1,	// (0x000a7276) bg_cl_pane_g1

0xdbb9,	// (0x000a727e) bg_cl_pane_g2

0xdbc1,	// (0x000a7286) bg_cl_pane_g3

0xdbc9,	// (0x000a728e) bg_cl_pane_g4

0xdbd1,	// (0x000a7296) bg_cl_pane_g5

0xdbd9,	// (0x000a729e) bg_cl_pane_g6

0xdbe1,	// (0x000a72a6) bg_cl_pane_g7

0xdbe9,	// (0x000a72ae) bg_cl_pane_g8

0xdbf1,	// (0x000a72b6) bg_cl_pane_g9

0x0008,

0x08b8,	// (0x00099f7d) bg_cl_pane_g

0x73f1,	// (0x000a0ab6) aid_height_cl_leading_ParamLimits

0x73f1,	// (0x000a0ab6) aid_height_cl_leading

0x73fd,	// (0x000a0ac2) aid_height_cl_text_ParamLimits

0x73fd,	// (0x000a0ac2) aid_height_cl_text

0xe58b,	// (0x000a7c50) bg_cl_header_pane_ParamLimits

0xe58b,	// (0x000a7c50) bg_cl_header_pane

0x7415,	// (0x000a0ada) cl_header_pane_g1_ParamLimits

0x7415,	// (0x000a0ada) cl_header_pane_g1

0x7422,	// (0x000a0ae7) cl_header_pane_t1_ParamLimits

0x7422,	// (0x000a0ae7) cl_header_pane_t1

0xdbf9,	// (0x000a72be) cl_list_pane

0xd838,	// (0x000a6efd) hc_scroll_pane_cp01

0xad0c,	// (0x000a43d1) bg_cl_header_pane_g1

0xd71e,	// (0x000a6de3) bg_cl_header_pane_g2

0xad2c,	// (0x000a43f1) bg_cl_header_pane_g3

0xd72e,	// (0x000a6df3) bg_cl_header_pane_g4

0xd726,	// (0x000a6deb) bg_cl_header_pane_g5

0xd95a,	// (0x000a701f) bg_cl_header_pane_g6

0xd746,	// (0x000a6e0b) bg_cl_header_pane_g7

0xd74e,	// (0x000a6e13) bg_cl_header_pane_g8

0xd73e,	// (0x000a6e03) bg_cl_header_pane_g9

0x0008,

0xf873,	// (0x000a8f38) bg_cl_header_pane_g

0x7434,	// (0x000a0af9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7434,	// (0x000a0af9) hc_cl_list_double_graphic_heading_pane

0x7448,	// (0x000a0b0d) hc_cl_list_single_graphic_pane_ParamLimits

0x7448,	// (0x000a0b0d) hc_cl_list_single_graphic_pane

0x7462,	// (0x000a0b27) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7462,	// (0x000a0b27) hc_cl_list_single_graphic_pane_g1

0x746e,	// (0x000a0b33) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x746e,	// (0x000a0b33) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf886,	// (0x000a8f4b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf886,	// (0x000a8f4b) hc_cl_list_single_graphic_pane_g

0x7482,	// (0x000a0b47) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7482,	// (0x000a0b47) hc_cl_list_single_graphic_pane_t1

0x7462,	// (0x000a0b27) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7462,	// (0x000a0b27) hc_cl_list_double_graphic_heading_pane_g1

0x7497,	// (0x000a0b5c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7497,	// (0x000a0b5c) hc_cl_list_double_graphic_heading_pane_g2

0x74ab,	// (0x000a0b70) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x74ab,	// (0x000a0b70) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf88b,	// (0x000a8f50) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf88b,	// (0x000a8f50) hc_cl_list_double_graphic_heading_pane_g

0x74bf,	// (0x000a0b84) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74bf,	// (0x000a0b84) hc_cl_list_double_graphic_heading_pane_t1

0x74d4,	// (0x000a0b99) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74d4,	// (0x000a0b99) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf892,	// (0x000a8f57) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf892,	// (0x000a8f57) hc_cl_list_double_graphic_heading_pane_t

0x74f1,	// (0x000a0bb6) vid4_progress_pane_g1

0x7501,	// (0x000a0bc6) vid4_progress_pane_g2

0x7511,	// (0x000a0bd6) vid4_progress_pane_g3

0x7523,	// (0x000a0be8) vid4_progress_pane_g4

0x0004,

0xf897,	// (0x000a8f5c) vid4_progress_pane_g

0x753b,	// (0x000a0c00) vid4_progress_pane_t1

0x7551,	// (0x000a0c16) vid4_progress_pane_t2

0x0002,

0xf8a2,	// (0x000a8f67) vid4_progress_pane_t

0x757c,	// (0x000a0c41) wait_bar_pane_cp07

0xcb7b,	// (0x000a6240) blid_firmament_pane_ParamLimits

0xcbbe,	// (0x000a6283) popup_blid_sat_info2_window_g1

0xcbe2,	// (0x000a62a7) popup_blid_sat_info2_window_t3

0xcbf0,	// (0x000a62b5) popup_blid_sat_info2_window_t4

0xcbfe,	// (0x000a62c3) popup_blid_sat_info2_window_t5

0xcc0c,	// (0x000a62d1) popup_blid_sat_info2_window_t6

0xcc1c,	// (0x000a62e1) popup_blid_sat_info2_window_t7

0xcc2a,	// (0x000a62ef) popup_blid_sat_info2_window_t8

0xcc38,	// (0x000a62fd) popup_blid_sat_info2_window_t9

0xcc46,	// (0x000a630b) popup_blid_sat_info2_window_t10

0xcd08,	// (0x000a63cd) aid_firma_cardinal_ParamLimits

0xcd1c,	// (0x000a63e1) blid_firmament_pane_t1_ParamLimits

0xcd33,	// (0x000a63f8) blid_firmament_pane_t2_ParamLimits

0xcd4a,	// (0x000a640f) blid_firmament_pane_t3_ParamLimits

0xcd61,	// (0x000a6426) blid_firmament_pane_t4_ParamLimits

0x0504,	// (0x00099bc9) blid_firmament_pane_t_ParamLimits

0xcd78,	// (0x000a643d) blid_sat_info_pane_ParamLimits

0x426d,	// (0x0009d932) main_cam_set_pane_ParamLimits

0x579c,	// (0x0009ee61) aid_size_cell_colour_35_ParamLimits

0x57b6,	// (0x0009ee7b) aid_size_cell_colour_112_ParamLimits

0x57cd,	// (0x0009ee92) aid_size_cell_effect_ParamLimits

0xa4af,	// (0x000a3b74) bg_tb_trans_pane_cp02_ParamLimits

0xb0b4,	// (0x000a4779) heading_imed_pane_ParamLimits

0x57e7,	// (0x0009eeac) listscroll_imed_pane_ParamLimits

0xbf57,	// (0x000a561c) popup_call2_audio_first_window_g5_ParamLimits

0xbf57,	// (0x000a561c) popup_call2_audio_first_window_g5

0x5f36,	// (0x0009f5fb) aid_size_touch_image3_arrow_left_ParamLimits

0x5f36,	// (0x0009f5fb) aid_size_touch_image3_arrow_left

0x5f4c,	// (0x0009f611) aid_size_touch_image3_arrow_right_ParamLimits

0x5f4c,	// (0x0009f611) aid_size_touch_image3_arrow_right

0x7566,	// (0x000a0c2b) vid4_progress_pane_t3

0x5a87,	// (0x0009f14c) main_hwr_training_symbol_option_pane_ParamLimits

0x5a87,	// (0x0009f14c) main_hwr_training_symbol_option_pane

0xd57a,	// (0x000a6c3f) popup_hwr_training_preview_window_ParamLimits

0xd57a,	// (0x000a6c3f) popup_hwr_training_preview_window

0x5ae8,	// (0x0009f1ad) hwr_training_navi_pane_g5_ParamLimits

0x5ae8,	// (0x0009f1ad) hwr_training_navi_pane_g5

0xd70c,	// (0x000a6dd1) popup_char_count_window

0x1057,	// (0x0009a71c) bg_popup_sub_pane_cp20_ParamLimits

0x6e7c,	// (0x000a0541) list_vitu2_match_list_pane_ParamLimits

0x6e88,	// (0x000a054d) vitu2_page_scroll_pane_ParamLimits

0x6e88,	// (0x000a054d) vitu2_page_scroll_pane

0xdc02,	// (0x000a72c7) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdc02,	// (0x000a72c7) list_single_hwr_training_symbol_option_pane

0xdc15,	// (0x000a72da) list_single_hwr_training_symbol_option_pane_g1

0xdc1d,	// (0x000a72e2) list_single_hwr_training_symbol_option_pane_t1

0xdc2b,	// (0x000a72f0) bg_button_pane_cp023

0xdc34,	// (0x000a72f9) bg_button_pane_cp024

0x75c5,	// (0x000a0c8a) vitu2_page_scroll_pane_g1

0x75cd,	// (0x000a0c92) vitu2_page_scroll_pane_g2

0x0001,

0xf8a9,	// (0x000a8f6e) vitu2_page_scroll_pane_g

0x75d5,	// (0x000a0c9a) vitu2_page_scroll_pane_t1

0xa9d9,	// (0x000a409e) popup_char_count_window_g1

0xdc67,	// (0x000a732c) popup_char_count_window_g2

0xc554,	// (0x000a5c19) popup_char_count_window_g3

0x0002,

0xf8ae,	// (0x000a8f73) popup_char_count_window_g

0xdc70,	// (0x000a7335) popup_char_count_window_t1

0x1071,	// (0x0009a736) main_vded2_pane

0xd279,	// (0x000a693e) aid_size_cell_imed_line

0xd283,	// (0x000a6948) grid_imed_line_width_pane

0x6464,	// (0x0009fb29) vid4_indicators_pane_g4

0xdc7e,	// (0x000a7343) cell_imed_line_width_pane_ParamLimits

0xdc7e,	// (0x000a7343) cell_imed_line_width_pane

0xdcb2,	// (0x000a7377) cell_imed_line_width_pane_g1

0xdc92,	// (0x000a7357) cell_imed_line_width_pane_g2

0x0001,

0xf8b5,	// (0x000a8f7a) cell_imed_line_width_pane_g

0x75e4,	// (0x000a0ca9) main_vded2_pane_g1_ParamLimits

0x75e4,	// (0x000a0ca9) main_vded2_pane_g1

0x75f1,	// (0x000a0cb6) main_vded2_pane_g2_ParamLimits

0x75f1,	// (0x000a0cb6) main_vded2_pane_g2

0x0001,

0xf8ba,	// (0x000a8f7f) main_vded2_pane_g_ParamLimits

0xf8ba,	// (0x000a8f7f) main_vded2_pane_g

0x75ff,	// (0x000a0cc4) vded2_slider_pane_ParamLimits

0x75ff,	// (0x000a0cc4) vded2_slider_pane

0x760c,	// (0x000a0cd1) aid_size_touch_vded2_end

0x7616,	// (0x000a0cdb) aid_size_touch_vded2_playhead

0xdcbb,	// (0x000a7380) aid_size_touch_vded2_start

0xdcc3,	// (0x000a7388) vded2_slider_bg_pane

0xdccc,	// (0x000a7391) vded2_slider_pane_g1

0xdcd5,	// (0x000a739a) vded2_slider_pane_g2

0x761e,	// (0x000a0ce3) vded2_slider_pane_g3

0x0002,

0xf8bf,	// (0x000a8f84) vded2_slider_pane_g

0xdcdd,	// (0x000a73a2) vded2_slider_bg_pane_g1

0xdce6,	// (0x000a73ab) vded2_slider_bg_pane_g2

0xdcef,	// (0x000a73b4) vded2_slider_bg_pane_g3

0x0002,

0xf8c6,	// (0x000a8f8b) vded2_slider_bg_pane_g

0x3b50,	// (0x0009d215) aid_postcard_touch_down_pane_ParamLimits

0x3b50,	// (0x0009d215) aid_postcard_touch_down_pane

0x3b60,	// (0x0009d225) aid_postcard_touch_up_pane_ParamLimits

0x3b60,	// (0x0009d225) aid_postcard_touch_up_pane

0x1071,	// (0x0009a736) main_blid2_pane

0x4296,	// (0x0009d95b) popup_blid2_search_window

0x9c3d,	// (0x000a3302) blid2_gps_pane

0x9c3d,	// (0x000a3302) blid2_navig_pane

0x9c3d,	// (0x000a3302) blid2_search_pane

0x9c3d,	// (0x000a3302) blid2_tripm_pane

0x7627,	// (0x000a0cec) blid2_search_pane_g1_ParamLimits

0x7627,	// (0x000a0cec) blid2_search_pane_g1

0x7637,	// (0x000a0cfc) blid2_search_pane_t1_ParamLimits

0x7637,	// (0x000a0cfc) blid2_search_pane_t1

0x7649,	// (0x000a0d0e) aid_size_cell_blid2_gps_ParamLimits

0x7649,	// (0x000a0d0e) aid_size_cell_blid2_gps

0x7659,	// (0x000a0d1e) blid2_gps_pane_g1_ParamLimits

0x7659,	// (0x000a0d1e) blid2_gps_pane_g1

0x7665,	// (0x000a0d2a) grid_blid2_satellite_pane_ParamLimits

0x7665,	// (0x000a0d2a) grid_blid2_satellite_pane

0x7675,	// (0x000a0d3a) blid2_navig_pane_g1_ParamLimits

0x7675,	// (0x000a0d3a) blid2_navig_pane_g1

0x7681,	// (0x000a0d46) blid2_navig_pane_t1_ParamLimits

0x7681,	// (0x000a0d46) blid2_navig_pane_t1

0x7693,	// (0x000a0d58) blid2_navig_pane_t2_ParamLimits

0x7693,	// (0x000a0d58) blid2_navig_pane_t2

0x0001,

0xf8cd,	// (0x000a8f92) blid2_navig_pane_t_ParamLimits

0xf8cd,	// (0x000a8f92) blid2_navig_pane_t

0x76a5,	// (0x000a0d6a) blid2_navig_ring_pane_ParamLimits

0x76a5,	// (0x000a0d6a) blid2_navig_ring_pane

0x76b5,	// (0x000a0d7a) blid2_speed_pane_ParamLimits

0x76b5,	// (0x000a0d7a) blid2_speed_pane

0x76c1,	// (0x000a0d86) blid2_tripm_pane_g1_ParamLimits

0x76c1,	// (0x000a0d86) blid2_tripm_pane_g1

0x76d1,	// (0x000a0d96) blid2_tripm_pane_g2_ParamLimits

0x76d1,	// (0x000a0d96) blid2_tripm_pane_g2

0x76dd,	// (0x000a0da2) blid2_tripm_pane_g3_ParamLimits

0x76dd,	// (0x000a0da2) blid2_tripm_pane_g3

0x76e9,	// (0x000a0dae) blid2_tripm_pane_g4_ParamLimits

0x76e9,	// (0x000a0dae) blid2_tripm_pane_g4

0x76f5,	// (0x000a0dba) blid2_tripm_pane_g5_ParamLimits

0x76f5,	// (0x000a0dba) blid2_tripm_pane_g5

0x0005,

0xf8d2,	// (0x000a8f97) blid2_tripm_pane_g_ParamLimits

0xf8d2,	// (0x000a8f97) blid2_tripm_pane_g

0x7711,	// (0x000a0dd6) blid2_tripm_pane_t1_ParamLimits

0x7711,	// (0x000a0dd6) blid2_tripm_pane_t1

0x7725,	// (0x000a0dea) blid2_tripm_pane_t2_ParamLimits

0x7725,	// (0x000a0dea) blid2_tripm_pane_t2

0x7737,	// (0x000a0dfc) blid2_tripm_pane_t3_ParamLimits

0x7737,	// (0x000a0dfc) blid2_tripm_pane_t3

0x0003,

0xf8df,	// (0x000a8fa4) blid2_tripm_pane_t_ParamLimits

0xf8df,	// (0x000a8fa4) blid2_tripm_pane_t

0x7769,	// (0x000a0e2e) cell_blid2_satellite_pane_ParamLimits

0x7769,	// (0x000a0e2e) cell_blid2_satellite_pane

0x7783,	// (0x000a0e48) cell_blid2_satellite_pane_g1

0xdcf8,	// (0x000a73bd) cell_blid2_satellite_pane_t1

0xcd88,	// (0x000a644d) blid2_speed_pane_g1

0xdd06,	// (0x000a73cb) blid2_speed_pane_t1

0xdd14,	// (0x000a73d9) blid2_speed_pane_t2

0x0001,

0xf8e8,	// (0x000a8fad) blid2_speed_pane_t

0xcd88,	// (0x000a644d) blid2_navig_ring_pane_g1

0x778c,	// (0x000a0e51) blid2_navig_ring_pane_g2

0x7794,	// (0x000a0e59) blid2_navig_ring_pane_g3

0x779c,	// (0x000a0e61) blid2_navig_ring_pane_g4

0x77a4,	// (0x000a0e69) blid2_navig_ring_pane_g5

0x0004,

0xf8ed,	// (0x000a8fb2) blid2_navig_ring_pane_g

0x9c3d,	// (0x000a3302) bg_popup_window_pane_cp011

0xdd22,	// (0x000a73e7) popup_blid2_search_window_g1

0xdd2a,	// (0x000a73ef) popup_blid2_search_window_t1

0xdd38,	// (0x000a73fd) popup_blid2_search_window_t2

0x0001,

0xf8f8,	// (0x000a8fbd) popup_blid2_search_window_t

0xac1b,	// (0x000a42e0) main_browser_pane_g1

0xa8e7,	// (0x000a3fac) main_browser_pane_ParamLimits

0x426d,	// (0x0009d932) bg_button_pane_cp011_ParamLimits

0x670d,	// (0x0009fdd2) cell_vitu2_function_pane_g1_ParamLimits

0xc980,	// (0x000a6045) bg_popup_sub_pane_cp22_ParamLimits

0x7082,	// (0x000a0747) input_focus_pane_cp08_ParamLimits

0x7099,	// (0x000a075e) popup_vitu2_query_button_pane_ParamLimits

0x7099,	// (0x000a075e) popup_vitu2_query_button_pane

0x70aa,	// (0x000a076f) popup_vitu2_query_input_button_pane

0xd995,	// (0x000a705a) popup_vitu2_query_window_g1_ParamLimits

0x70b4,	// (0x000a0779) popup_vitu2_query_window_g2_ParamLimits

0xf81b,	// (0x000a8ee0) popup_vitu2_query_window_g_ParamLimits

0x9c3d,	// (0x000a3302) bg_button_pane_cp026

0x77ac,	// (0x000a0e71) popup_vitu2_query_input_button_pane_g1

0x9c3d,	// (0x000a3302) bg_button_pane_cp025

0xdd46,	// (0x000a740b) popup_vitu2_query_button_pane_t1

0x4cee,	// (0x0009e3b3) main_mp3_pane_t6

0x4cfe,	// (0x0009e3c3) popup_slider_window_cp01

0x6349,	// (0x0009fa0e) cam4_battery_pane

0x6423,	// (0x0009fae8) cam4_battery_pane_cp02

0x74e9,	// (0x000a0bae) cam4_battery_pane_cp01

0x74e9,	// (0x000a0bae) cam4_battery_pane_cp03

0xdc9a,	// (0x000a735f) cam4_battery_pane_g1

0xcd88,	// (0x000a644d) cam4_battery_pane_g2

0x0001,

0xf8fd,	// (0x000a8fc2) cam4_battery_pane_g

0xcc54,	// (0x000a6319) popup_blid_sat_info2_window_t11

0xb367,	// (0x000a4a2c) aid_size_touch_mv_arrow_left_ParamLimits

0xb392,	// (0x000a4a57) aid_size_touch_mv_arrow_right_ParamLimits

0xb3f0,	// (0x000a4ab5) navi_pane_g1_ParamLimits

0xb3fc,	// (0x000a4ac1) navi_pane_g2_ParamLimits

0xb42a,	// (0x000a4aef) navi_pane_g3_ParamLimits

0x0203,	// (0x000998c8) navi_pane_g_ParamLimits

0x356c,	// (0x0009cc31) navi_pane_mv_t1_ParamLimits

0x57f3,	// (0x0009eeb8) grid_imed_effect_pane_ParamLimits

0x1ee8,	// (0x0009b5ad) aid_placing_vt_slider_lsc

0xab6a,	// (0x000a422f) aid_placing_vt_slider_prt

0xa4af,	// (0x000a3b74) bg_tb_trans_pane_cp01_ParamLimits

0xceed,	// (0x000a65b2) popup_image_details_window_g1_ParamLimits

0xcf00,	// (0x000a65c5) popup_image_details_window_g2_ParamLimits

0xcf15,	// (0x000a65da) popup_image_details_window_g3_ParamLimits

0xcf15,	// (0x000a65da) popup_image_details_window_g3

0x0549,	// (0x00099c0e) popup_image_details_window_g_ParamLimits

0xcf29,	// (0x000a65ee) popup_image_details_window_t1_ParamLimits

0xcf3b,	// (0x000a6600) popup_image_details_window_t2_ParamLimits

0xcf54,	// (0x000a6619) popup_image_details_window_t3_ParamLimits

0xcf68,	// (0x000a662d) popup_image_details_window_t4_ParamLimits

0xcf83,	// (0x000a6648) popup_image_details_window_t5_ParamLimits

0x0550,	// (0x00099c15) popup_image_details_window_t_ParamLimits

0x7409,	// (0x000a0ace) cl_header_name_pane_ParamLimits

0x7409,	// (0x000a0ace) cl_header_name_pane

0x77b4,	// (0x000a0e79) cl_header_name_pane_t1_ParamLimits

0x77b4,	// (0x000a0e79) cl_header_name_pane_t1

0x77cb,	// (0x000a0e90) cl_header_name_pane_t2_ParamLimits

0x77cb,	// (0x000a0e90) cl_header_name_pane_t2

0x77f5,	// (0x000a0eba) cl_header_name_pane_t3_ParamLimits

0x77f5,	// (0x000a0eba) cl_header_name_pane_t3

0x0002,

0xf902,	// (0x000a8fc7) cl_header_name_pane_t_ParamLimits

0xf902,	// (0x000a8fc7) cl_header_name_pane_t

0xb4b9,	// (0x000a4b7e) navi_pane_mv_g2_ParamLimits

0xd6e6,	// (0x000a6dab) field_vitu2_entry_pane_g1_ParamLimits

0xd6f2,	// (0x000a6db7) field_vitu2_entry_pane_g2_ParamLimits

0xd6fe,	// (0x000a6dc3) field_vitu2_entry_pane_g3_ParamLimits

0xd6fe,	// (0x000a6dc3) field_vitu2_entry_pane_g3

0x0750,	// (0x00099e15) field_vitu2_entry_pane_g_ParamLimits

0x66a1,	// (0x0009fd66) cell_vitu2_itu_pane_g1_ParamLimits

0x66b3,	// (0x0009fd78) cell_vitu2_itu_pane_g2_ParamLimits

0x66b3,	// (0x0009fd78) cell_vitu2_itu_pane_g2

0x0001,

0xf74b,	// (0x000a8e10) cell_vitu2_itu_pane_g_ParamLimits

0xf74b,	// (0x000a8e10) cell_vitu2_itu_pane_g

0x426d,	// (0x0009d932) bg_vkb2_func_pane_cp05_ParamLimits

0x426d,	// (0x0009d932) bg_vkb2_func_pane_cp05

0x426d,	// (0x0009d932) bg_vkb2_func_pane_cp03

0x426d,	// (0x0009d932) bg_vkb2_func_pane_cp04

0x426d,	// (0x0009d932) bg_vkb2_func_pane_cp10_ParamLimits

0x426d,	// (0x0009d932) bg_vkb2_func_pane_cp10

0x73ab,	// (0x000a0a70) bg_vkb2_func_pane_cp08

0x7391,	// (0x000a0a56) bg_vkb2_func_pane_cp06

0x739f,	// (0x000a0a64) bg_vkb2_func_pane_cp07

0xdc3d,	// (0x000a7302) bg_vkb2_func_pane_cp11_ParamLimits

0xdc3d,	// (0x000a7302) bg_vkb2_func_pane_cp11

0xdc52,	// (0x000a7317) bg_vkb2_func_pane_cp12_ParamLimits

0xdc52,	// (0x000a7317) bg_vkb2_func_pane_cp12

0x9c3d,	// (0x000a3302) bg_vkb2_func_pane_cp09

0xd71e,	// (0x000a6de3) bg_vkb2_func_pane_g1

0xad2c,	// (0x000a43f1) bg_vkb2_func_pane_g2

0xd726,	// (0x000a6deb) bg_vkb2_func_pane_g3

0xd72e,	// (0x000a6df3) bg_vkb2_func_pane_g4

0xd95a,	// (0x000a701f) bg_vkb2_func_pane_g5

0xd746,	// (0x000a6e0b) bg_vkb2_func_pane_g6

0xd74e,	// (0x000a6e13) bg_vkb2_func_pane_g7

0xd73e,	// (0x000a6e03) bg_vkb2_func_pane_g8

0xad0c,	// (0x000a43d1) bg_vkb2_func_pane_g9

0x0008,

0xf909,	// (0x000a8fce) bg_vkb2_func_pane_g

0x7703,	// (0x000a0dc8) blid2_tripm_pane_g6_ParamLimits

0x7703,	// (0x000a0dc8) blid2_tripm_pane_g6

0xd638,	// (0x000a6cfd) mp4_progress_pane_g1

0x775d,	// (0x000a0e22) blid2_tripm_values_pane_ParamLimits

0x775d,	// (0x000a0e22) blid2_tripm_values_pane

0x781a,	// (0x000a0edf) blid2_tripm_values_pane_t1

0x7828,	// (0x000a0eed) blid2_tripm_values_pane_t2

0x7836,	// (0x000a0efb) blid2_tripm_values_pane_t3

0x7844,	// (0x000a0f09) blid2_tripm_values_pane_t4

0x7852,	// (0x000a0f17) blid2_tripm_values_pane_t5

0x7860,	// (0x000a0f25) blid2_tripm_values_pane_t6

0x786e,	// (0x000a0f33) blid2_tripm_values_pane_t7

0x787c,	// (0x000a0f41) blid2_tripm_values_pane_t8

0x788a,	// (0x000a0f4f) blid2_tripm_values_pane_t9

0x0008,

0xf91c,	// (0x000a8fe1) blid2_tripm_values_pane_t

0x1f28,	// (0x0009b5ed) call_video_pane_t1_ParamLimits

0x1f49,	// (0x0009b60e) call_video_pane_t2_ParamLimits

0xf26a,	// (0x000a892f) call_video_pane_t_ParamLimits

0x3a9a,	// (0x0009d15f) msg_header_pane_g1_ParamLimits

0xb6a1,	// (0x000a4d66) msg_header_pane_g2_ParamLimits

0xb6a1,	// (0x000a4d66) msg_header_pane_g2

0x0001,

0xf435,	// (0x000a8afa) msg_header_pane_g_ParamLimits

0xf435,	// (0x000a8afa) msg_header_pane_g

0xa8e7,	// (0x000a3fac) main_clock2_pane_ParamLimits

0x556d,	// (0x0009ec32) grid_clock2_toolbar_pane_ParamLimits

0x556d,	// (0x0009ec32) grid_clock2_toolbar_pane

0x556d,	// (0x0009ec32) listscroll_clock2_pane_ParamLimits

0x556d,	// (0x0009ec32) listscroll_clock2_pane

0x561d,	// (0x0009ece2) main_clock2_pane_t3_ParamLimits

0x561d,	// (0x0009ece2) main_clock2_pane_t3

0x562f,	// (0x0009ecf4) main_clock2_pane_t4_ParamLimits

0x562f,	// (0x0009ecf4) main_clock2_pane_t4

0xdd54,	// (0x000a7419) cell_clock2_toolbar_pane

0xdd5c,	// (0x000a7421) cell_clock2_toolbar_pane_cp01

0xdd5c,	// (0x000a7421) cell_clock2_toolbar_pane_cp02

0xdd64,	// (0x000a7429) cell_clock2_toolbar_pane_cp03

0xdd6c,	// (0x000a7431) list_clock2_pane

0xb2ec,	// (0x000a49b1) scroll_pane_cp10

0xdd74,	// (0x000a7439) list_single_clock2_pane_ParamLimits

0xdd74,	// (0x000a7439) list_single_clock2_pane

0xaab5,	// (0x000a417a) list_highlight_pane_cp08

0xdd81,	// (0x000a7446) list_single_clock2_pane_t1

0xdd8f,	// (0x000a7454) list_single_clock2_pane_t2

0x0001,

0xf92f,	// (0x000a8ff4) list_single_clock2_pane_t

0x9c3d,	// (0x000a3302) bg_button_pane_cp10

0xdd9d,	// (0x000a7462) cell_clock2_toolbar_pane_g1

0x3abe,	// (0x0009d183) aid_main_viewer_pane_g1_ParamLimits

0x3abe,	// (0x0009d183) aid_main_viewer_pane_g1

0x3aca,	// (0x0009d18f) aid_main_viewer_pane_g2_ParamLimits

0x3aca,	// (0x0009d18f) aid_main_viewer_pane_g2

0x3ad6,	// (0x0009d19b) aid_main_viewer_pane_g3_ParamLimits

0x3ad6,	// (0x0009d19b) aid_main_viewer_pane_g3

0x3ae7,	// (0x0009d1ac) aid_main_viewer_pane_g4_ParamLimits

0x3ae7,	// (0x0009d1ac) aid_main_viewer_pane_g4

0x0003,

0xf446,	// (0x000a8b0b) aid_main_viewer_pane_g_ParamLimits

0xf446,	// (0x000a8b0b) aid_main_viewer_pane_g

0x4260,	// (0x0009d925) main_calc_pane_ParamLimits

0x427b,	// (0x0009d940) main_dialer2_pane_ParamLimits

0x1071,	// (0x0009a736) main_cam6_pane

0x1071,	// (0x0009a736) main_vid6_pane

0x5579,	// (0x0009ec3e) listscroll_gen_pane_cp06_ParamLimits

0x5579,	// (0x0009ec3e) listscroll_gen_pane_cp06

0x5641,	// (0x0009ed06) main_clock2_pane_t5_ParamLimits

0x5641,	// (0x0009ed06) main_clock2_pane_t5

0x568e,	// (0x0009ed53) aid_call2_pane_cp10_ParamLimits

0x56a0,	// (0x0009ed65) aid_call_pane_cp10_ParamLimits

0xb35b,	// (0x000a4a20) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb35b,	// (0x000a4a20) popup_clock_analogue_window_cp10_g2_ParamLimits

0x56b2,	// (0x0009ed77) popup_clock_analogue_window_cp10_g3_ParamLimits

0x56b2,	// (0x0009ed77) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb35b,	// (0x000a4a20) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf657,	// (0x000a8d1c) popup_clock_analogue_window_cp10_g_ParamLimits

0x56c8,	// (0x0009ed8d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5ee3,	// (0x0009f5a8) cell_dialer2_keypad_pane_g2_ParamLimits

0x5ee3,	// (0x0009f5a8) cell_dialer2_keypad_pane_g2

0x0001,

0xf6e5,	// (0x000a8daa) cell_dialer2_keypad_pane_g_ParamLimits

0xf6e5,	// (0x000a8daa) cell_dialer2_keypad_pane_g

0x5eff,	// (0x0009f5c4) cell_dialer2_keypad_pane_t1

0x69d8,	// (0x000a009d) main_cset_text2_pane_ParamLimits

0x69d8,	// (0x000a009d) main_cset_text2_pane

0xdba5,	// (0x000a726a) area_vitu2_query_pane_g1_ParamLimits

0x7330,	// (0x000a09f5) area_vitu2_query_pane_g2_ParamLimits

0xf85f,	// (0x000a8f24) area_vitu2_query_pane_g_ParamLimits

0x9fb7,	// (0x000a367c) area_vitu2_query_pane_t7_ParamLimits

0x9fb7,	// (0x000a367c) area_vitu2_query_pane_t7

0x7391,	// (0x000a0a56) bg_button_pane_cp018_ParamLimits

0x739f,	// (0x000a0a64) bg_button_pane_cp021_ParamLimits

0x73ab,	// (0x000a0a70) bg_button_pane_cp022_ParamLimits

0x73ab,	// (0x000a0a70) bg_vkb2_func_pane_cp08_ParamLimits

0x7391,	// (0x000a0a56) bg_vkb2_func_pane_cp06_ParamLimits

0x739f,	// (0x000a0a64) bg_vkb2_func_pane_cp07_ParamLimits

0x73bc,	// (0x000a0a81) input_focus_pane_cp09_ParamLimits

0x7898,	// (0x000a0f5d) cam6_autofocus_pane_ParamLimits

0x7898,	// (0x000a0f5d) cam6_autofocus_pane

0x78ba,	// (0x000a0f7f) cam6_image_uncrop_pane_ParamLimits

0x78ba,	// (0x000a0f7f) cam6_image_uncrop_pane

0x78e7,	// (0x000a0fac) cam6_indi_pane_ParamLimits

0x78e7,	// (0x000a0fac) cam6_indi_pane

0x7901,	// (0x000a0fc6) cam6_mode_pane_ParamLimits

0x7901,	// (0x000a0fc6) cam6_mode_pane

0x7915,	// (0x000a0fda) cam6_timer_pane_ParamLimits

0x7915,	// (0x000a0fda) cam6_timer_pane

0x7926,	// (0x000a0feb) cam6_zoom_pane_ParamLimits

0x7926,	// (0x000a0feb) cam6_zoom_pane

0x793e,	// (0x000a1003) cam6_mode_pane_g1_ParamLimits

0x793e,	// (0x000a1003) cam6_mode_pane_g1

0x794a,	// (0x000a100f) cam6_mode_pane_g2_ParamLimits

0x794a,	// (0x000a100f) cam6_mode_pane_g2

0x7956,	// (0x000a101b) cam6_mode_pane_g3_ParamLimits

0x7956,	// (0x000a101b) cam6_mode_pane_g3

0x7962,	// (0x000a1027) cam6_mode_pane_g4_ParamLimits

0x7962,	// (0x000a1027) cam6_mode_pane_g4

0x0003,

0xf934,	// (0x000a8ff9) cam6_mode_pane_g_ParamLimits

0xf934,	// (0x000a8ff9) cam6_mode_pane_g

0xdca4,	// (0x000a7369) bg_tb_trans_pane_cp08_ParamLimits

0xdca4,	// (0x000a7369) bg_tb_trans_pane_cp08

0xdda5,	// (0x000a746a) cam6_battery_pane_ParamLimits

0xdda5,	// (0x000a746a) cam6_battery_pane

0xddbb,	// (0x000a7480) cam6_indi_pane_g1_ParamLimits

0xddbb,	// (0x000a7480) cam6_indi_pane_g1

0xddcd,	// (0x000a7492) cam6_indi_pane_g2_ParamLimits

0xddcd,	// (0x000a7492) cam6_indi_pane_g2

0xdddf,	// (0x000a74a4) cam6_indi_pane_g3_ParamLimits

0xdddf,	// (0x000a74a4) cam6_indi_pane_g3

0x0002,

0x0995,	// (0x0009a05a) cam6_indi_pane_g_ParamLimits

0x0995,	// (0x0009a05a) cam6_indi_pane_g

0xddf1,	// (0x000a74b6) cam6_indi_pane_t1_ParamLimits

0xddf1,	// (0x000a74b6) cam6_indi_pane_t1

0x649f,	// (0x0009fb64) cam6_autofocus_pane_g1

0x6497,	// (0x0009fb5c) cam6_autofocus_pane_g2

0x64af,	// (0x0009fb74) cam6_autofocus_pane_g3

0x64a7,	// (0x0009fb6c) cam6_autofocus_pane_g4

0x0003,

0xf93d,	// (0x000a9002) cam6_autofocus_pane_g

0xde17,	// (0x000a74dc) cam6_timer_pane_g1

0xde1f,	// (0x000a74e4) cam6_timer_pane_t1

0xde2d,	// (0x000a74f2) cam6_zoom_cont_pane

0xde35,	// (0x000a74fa) cam6_zoom_pane_g1

0xde3d,	// (0x000a7502) cam6_zoom_pane_g2

0x796e,	// (0x000a1033) cam6_zoom_pane_g3

0x0002,

0xf946,	// (0x000a900b) cam6_zoom_pane_g

0xcd88,	// (0x000a644d) cam6_battery_pane_g1

0xcd88,	// (0x000a644d) cam6_battery_pane_g2

0x0001,

0x050d,	// (0x00099bd2) cam6_battery_pane_g

0xde45,	// (0x000a750a) cam6_zoom_cont_pane_g1

0xde4e,	// (0x000a7513) cam6_zoom_cont_pane_g2

0xde57,	// (0x000a751c) cam6_zoom_cont_pane_g3

0x0002,

0x09ac,	// (0x0009a071) cam6_zoom_cont_pane_g

0x798b,	// (0x000a1050) cam6_mode_pane_cp_ParamLimits

0x798b,	// (0x000a1050) cam6_mode_pane_cp

0x799f,	// (0x000a1064) cam6_zoom_pane_cp_ParamLimits

0x799f,	// (0x000a1064) cam6_zoom_pane_cp

0x79b7,	// (0x000a107c) vid6_image_uncrop_cif_pane_ParamLimits

0x79b7,	// (0x000a107c) vid6_image_uncrop_cif_pane

0x79e3,	// (0x000a10a8) vid6_image_uncrop_nhd_pane_ParamLimits

0x79e3,	// (0x000a10a8) vid6_image_uncrop_nhd_pane

0x7a00,	// (0x000a10c5) vid6_image_uncrop_vga_pane_ParamLimits

0x7a00,	// (0x000a10c5) vid6_image_uncrop_vga_pane

0x7a1f,	// (0x000a10e4) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a1f,	// (0x000a10e4) vid6_image_uncrop_wvga_pane

0x7a3c,	// (0x000a1101) vid6_indi_pane_ParamLimits

0x7a3c,	// (0x000a1101) vid6_indi_pane

0xdca4,	// (0x000a7369) bg_tb_trans_pane_cp09_ParamLimits

0xdca4,	// (0x000a7369) bg_tb_trans_pane_cp09

0xde6f,	// (0x000a7534) cam6_battery_pane_cp_ParamLimits

0xde6f,	// (0x000a7534) cam6_battery_pane_cp

0xde7b,	// (0x000a7540) vid6_indi_pane_g1_ParamLimits

0xde7b,	// (0x000a7540) vid6_indi_pane_g1

0xde8d,	// (0x000a7552) vid6_indi_pane_g2_ParamLimits

0xde8d,	// (0x000a7552) vid6_indi_pane_g2

0xde9f,	// (0x000a7564) vid6_indi_pane_g3_ParamLimits

0xde9f,	// (0x000a7564) vid6_indi_pane_g3

0xdeb4,	// (0x000a7579) vid6_indi_pane_g4_ParamLimits

0xdeb4,	// (0x000a7579) vid6_indi_pane_g4

0xdec9,	// (0x000a758e) vid6_indi_pane_g5_ParamLimits

0xdec9,	// (0x000a758e) vid6_indi_pane_g5

0x0004,

0x09b3,	// (0x0009a078) vid6_indi_pane_g_ParamLimits

0x09b3,	// (0x0009a078) vid6_indi_pane_g

0xdee3,	// (0x000a75a8) vid6_indi_pane_t1_ParamLimits

0xdee3,	// (0x000a75a8) vid6_indi_pane_t1

0xdef9,	// (0x000a75be) vid6_indi_pane_t2_ParamLimits

0xdef9,	// (0x000a75be) vid6_indi_pane_t2

0xdf21,	// (0x000a75e6) vid6_indi_pane_t3_ParamLimits

0xdf21,	// (0x000a75e6) vid6_indi_pane_t3

0xdf49,	// (0x000a760e) vid6_indi_pane_t4_ParamLimits

0xdf49,	// (0x000a760e) vid6_indi_pane_t4

0x0003,

0x09be,	// (0x0009a083) vid6_indi_pane_t_ParamLimits

0x09be,	// (0x0009a083) vid6_indi_pane_t

0xdf6d,	// (0x000a7632) wait_bar_pane_cp08

0x7a5f,	// (0x000a1124) main_cset_text2_pane_t1_ParamLimits

0x7a5f,	// (0x000a1124) main_cset_text2_pane_t1

0x7976,	// (0x000a103b) listscroll_gen_pane_cp06_t1_ParamLimits

0x7976,	// (0x000a103b) listscroll_gen_pane_cp06_t1

0x1071,	// (0x0009a736) main_cam6_set_pane

0x633b,	// (0x0009fa00) bg_tb_trans_pane_cp06_ParamLimits

0x6351,	// (0x0009fa16) cam4_indicators_pane_g1_ParamLimits

0x6362,	// (0x0009fa27) cam4_indicators_pane_g2_ParamLimits

0xf722,	// (0x000a8de7) cam4_indicators_pane_g_ParamLimits

0x637a,	// (0x0009fa3f) cam4_indicators_pane_t1_ParamLimits

0x426d,	// (0x0009d932) bg_tb_trans_pane_cp07_ParamLimits

0x642b,	// (0x0009faf0) vid4_indicators_pane_g1_ParamLimits

0x643f,	// (0x0009fb04) vid4_indicators_pane_g2_ParamLimits

0x6453,	// (0x0009fb18) vid4_indicators_pane_g3_ParamLimits

0x6464,	// (0x0009fb29) vid4_indicators_pane_g4_ParamLimits

0xf734,	// (0x000a8df9) vid4_indicators_pane_g_ParamLimits

0x6480,	// (0x0009fb45) vid4_indicators_pane_t1_ParamLimits

0x74f1,	// (0x000a0bb6) vid4_progress_pane_g1_ParamLimits

0x7501,	// (0x000a0bc6) vid4_progress_pane_g2_ParamLimits

0x7511,	// (0x000a0bd6) vid4_progress_pane_g3_ParamLimits

0x7523,	// (0x000a0be8) vid4_progress_pane_g4_ParamLimits

0xf897,	// (0x000a8f5c) vid4_progress_pane_g_ParamLimits

0x753b,	// (0x000a0c00) vid4_progress_pane_t1_ParamLimits

0x7551,	// (0x000a0c16) vid4_progress_pane_t2_ParamLimits

0x7566,	// (0x000a0c2b) vid4_progress_pane_t3_ParamLimits

0xf8a2,	// (0x000a8f67) vid4_progress_pane_t_ParamLimits

0x757c,	// (0x000a0c41) wait_bar_pane_cp07_ParamLimits

0x7a96,	// (0x000a115b) main_cam6_set_pane_g2_ParamLimits

0x7a96,	// (0x000a115b) main_cam6_set_pane_g2

0x7aa2,	// (0x000a1167) main_cset6_listscroll_pane_ParamLimits

0x7aa2,	// (0x000a1167) main_cset6_listscroll_pane

0x7acd,	// (0x000a1192) main_cset6_slider_pane_ParamLimits

0x7acd,	// (0x000a1192) main_cset6_slider_pane

0x7ad9,	// (0x000a119e) main_cset6_text2_pane_ParamLimits

0x7ad9,	// (0x000a119e) main_cset6_text2_pane

0xdf7c,	// (0x000a7641) main_cset6_text_pane

0xdf84,	// (0x000a7649) main_cset_list_pane_copy1_ParamLimits

0xdf84,	// (0x000a7649) main_cset_list_pane_copy1

0xdf94,	// (0x000a7659) scroll_pane_cp028_copy1

0x7aec,	// (0x000a11b1) cset_list_set_pane_copy1

0x7b02,	// (0x000a11c7) aid_position_infowindow_above_copy1

0x7b0a,	// (0x000a11cf) aid_position_infowindow_below_copy1

0xa1fb,	// (0x000a38c0) cset_list_set_pane_g1_copy1

0x9fe3,	// (0x000a36a8) cset_list_set_pane_g3_copy1_ParamLimits

0x9fe3,	// (0x000a36a8) cset_list_set_pane_g3_copy1

0x9ff2,	// (0x000a36b7) cset_list_set_pane_t1_copy1_ParamLimits

0x9ff2,	// (0x000a36b7) cset_list_set_pane_t1_copy1

0xa4af,	// (0x000a3b74) list_highlight_pane_cp021_copy1_ParamLimits

0xa4af,	// (0x000a3b74) list_highlight_pane_cp021_copy1

0xdf9d,	// (0x000a7662) cset6_slider_pane_ParamLimits

0xdf9d,	// (0x000a7662) cset6_slider_pane

0xdfc9,	// (0x000a768e) main_cset6_slider_pane_g1_ParamLimits

0xdfc9,	// (0x000a768e) main_cset6_slider_pane_g1

0x7b12,	// (0x000a11d7) main_cset6_slider_pane_g2_ParamLimits

0x7b12,	// (0x000a11d7) main_cset6_slider_pane_g2

0xdff1,	// (0x000a76b6) main_cset6_slider_pane_g3_ParamLimits

0xdff1,	// (0x000a76b6) main_cset6_slider_pane_g3

0x7b3a,	// (0x000a11ff) main_cset6_slider_pane_g4_ParamLimits

0x7b3a,	// (0x000a11ff) main_cset6_slider_pane_g4

0x7b46,	// (0x000a120b) main_cset6_slider_pane_g5_ParamLimits

0x7b46,	// (0x000a120b) main_cset6_slider_pane_g5

0xd84d,	// (0x000a6f12) main_cset6_slider_pane_g7_ParamLimits

0xd84d,	// (0x000a6f12) main_cset6_slider_pane_g7

0xd859,	// (0x000a6f1e) main_cset6_slider_pane_g8_ParamLimits

0xd859,	// (0x000a6f1e) main_cset6_slider_pane_g8

0x7b54,	// (0x000a1219) main_cset6_slider_pane_g9_ParamLimits

0x7b54,	// (0x000a1219) main_cset6_slider_pane_g9

0x7b60,	// (0x000a1225) main_cset6_slider_pane_g10_ParamLimits

0x7b60,	// (0x000a1225) main_cset6_slider_pane_g10

0x7b6c,	// (0x000a1231) main_cset6_slider_pane_g11_ParamLimits

0x7b6c,	// (0x000a1231) main_cset6_slider_pane_g11

0x7b78,	// (0x000a123d) main_cset6_slider_pane_g12_ParamLimits

0x7b78,	// (0x000a123d) main_cset6_slider_pane_g12

0xd911,	// (0x000a6fd6) main_cset6_slider_pane_g13_ParamLimits

0xd911,	// (0x000a6fd6) main_cset6_slider_pane_g13

0xd91d,	// (0x000a6fe2) main_cset6_slider_pane_g14_ParamLimits

0xd91d,	// (0x000a6fe2) main_cset6_slider_pane_g14

0x7b84,	// (0x000a1249) main_cset6_slider_pane_g15_ParamLimits

0x7b84,	// (0x000a1249) main_cset6_slider_pane_g15

0x7b9c,	// (0x000a1261) main_cset6_slider_pane_g16_ParamLimits

0x7b9c,	// (0x000a1261) main_cset6_slider_pane_g16

0x7baa,	// (0x000a126f) main_cset6_slider_pane_g17_ParamLimits

0x7baa,	// (0x000a126f) main_cset6_slider_pane_g17

0x0011,

0xf94d,	// (0x000a9012) main_cset6_slider_pane_g_ParamLimits

0xf94d,	// (0x000a9012) main_cset6_slider_pane_g

0xe009,	// (0x000a76ce) main_cset6_slider_pane_t1_ParamLimits

0xe009,	// (0x000a76ce) main_cset6_slider_pane_t1

0x7bc4,	// (0x000a1289) main_cset6_slider_pane_t2_ParamLimits

0x7bc4,	// (0x000a1289) main_cset6_slider_pane_t2

0x7bef,	// (0x000a12b4) main_cset6_slider_pane_t3_ParamLimits

0x7bef,	// (0x000a12b4) main_cset6_slider_pane_t3

0x7c1a,	// (0x000a12df) main_cset6_slider_pane_t4_ParamLimits

0x7c1a,	// (0x000a12df) main_cset6_slider_pane_t4

0x7c45,	// (0x000a130a) main_cset6_slider_pane_t5_ParamLimits

0x7c45,	// (0x000a130a) main_cset6_slider_pane_t5

0xe04a,	// (0x000a770f) main_cset6_slider_pane_t7_ParamLimits

0xe04a,	// (0x000a770f) main_cset6_slider_pane_t7

0x7c72,	// (0x000a1337) main_cset6_slider_pane_t8_ParamLimits

0x7c72,	// (0x000a1337) main_cset6_slider_pane_t8

0x7c96,	// (0x000a135b) main_cset6_slider_pane_t9_ParamLimits

0x7c96,	// (0x000a135b) main_cset6_slider_pane_t9

0x7cba,	// (0x000a137f) main_cset6_slider_pane_t10_ParamLimits

0x7cba,	// (0x000a137f) main_cset6_slider_pane_t10

0x7cde,	// (0x000a13a3) main_cset6_slider_pane_t11_ParamLimits

0x7cde,	// (0x000a13a3) main_cset6_slider_pane_t11

0xe080,	// (0x000a7745) main_cset6_slider_pane_t14_ParamLimits

0xe080,	// (0x000a7745) main_cset6_slider_pane_t14

0xe0b9,	// (0x000a777e) main_cset6_slider_pane_t15_ParamLimits

0xe0b9,	// (0x000a777e) main_cset6_slider_pane_t15

0x000b,

0xf972,	// (0x000a9037) main_cset6_slider_pane_t_ParamLimits

0xf972,	// (0x000a9037) main_cset6_slider_pane_t

0xd54f,	// (0x000a6c14) cset_slider_pane_g1_copy1

0xdb3a,	// (0x000a71ff) cset_slider_pane_g2_copy1

0xdb43,	// (0x000a7208) cset_slider_pane_g3_copy1

0x9c3d,	// (0x000a3302) bg_popup_sub_pane_cp011_copy1

0xe0f2,	// (0x000a77b7) main_cset_text_pane_g1_copy1

0xd9a9,	// (0x000a706e) main_cset_text_pane_t1_copy1

0xd9b7,	// (0x000a707c) main_cset_text_pane_t2_copy1

0xd9c5,	// (0x000a708a) main_cset_text_pane_t3_copy1

0xd9d3,	// (0x000a7098) main_cset_text_pane_t4_copy1

0xd9e1,	// (0x000a70a6) main_cset_text_pane_t5_copy1

0xe0fa,	// (0x000a77bf) main_cset_text_pane_t6_copy1

0xe108,	// (0x000a77cd) main_cset_text_pane_t7_copy1

0x7dda,	// (0x000a149f) main_cset_text2_pane_t1_copy1

0x426d,	// (0x0009d932) main_ncimui_pane

0x42cc,	// (0x0009d991) popup_query_ncimui_window_ParamLimits

0x42cc,	// (0x0009d991) popup_query_ncimui_window

0x9eea,	// (0x000a35af) field_cale_ev2_pane_g4_ParamLimits

0x9eea,	// (0x000a35af) field_cale_ev2_pane_g4

0x5bc3,	// (0x0009f288) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5bc3,	// (0x0009f288) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6c1,	// (0x000a8d86) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6c1,	// (0x000a8d86) cell_video_dialer_keypad_pane_g

0x5bdb,	// (0x0009f2a0) cell_video_dialer_keypad_pane_t1

0x9c3d,	// (0x000a3302) bg_popup_window_pane_cp012

0xb1d7,	// (0x000a489c) heading_pane_cp06

0xe134,	// (0x000a77f9) ncim_query_content_pane

0x9c3d,	// (0x000a3302) bg_popup_heading_pane_cp01

0xe13c,	// (0x000a7801) ncim_heading_pane_t1

0xe14a,	// (0x000a780f) ncim_indicator_popup_pane

0xe15c,	// (0x000a7821) ncim_query_button_pane

0xe170,	// (0x000a7835) ncim_query_content_pane_t1

0xe182,	// (0x000a7847) ncim_query_content_pane_t2

0x0005,

0xf9b6,	// (0x000a907b) ncim_query_content_pane_t

0xe1bc,	// (0x000a7881) ncim_query_list_pane

0xe1ce,	// (0x000a7893) ncim_query_popup_pane

0xe14a,	// (0x000a780f) ncim_indicator_popup_pane_ParamLimits

0x7f2e,	// (0x000a15f3) ncim_query_content_pane_g1_ParamLimits

0x7f2e,	// (0x000a15f3) ncim_query_content_pane_g1

0xe170,	// (0x000a7835) ncim_query_content_pane_t1_ParamLimits

0xe182,	// (0x000a7847) ncim_query_content_pane_t2_ParamLimits

0x7f3a,	// (0x000a15ff) ncim_query_content_pane_t3_ParamLimits

0x7f3a,	// (0x000a15ff) ncim_query_content_pane_t3

0x7f57,	// (0x000a161c) ncim_query_content_pane_t4_ParamLimits

0x7f57,	// (0x000a161c) ncim_query_content_pane_t4

0x7f74,	// (0x000a1639) ncim_query_content_pane_t5_ParamLimits

0x7f74,	// (0x000a1639) ncim_query_content_pane_t5

0xe194,	// (0x000a7859) ncim_query_content_pane_t6_ParamLimits

0xe194,	// (0x000a7859) ncim_query_content_pane_t6

0xf9b6,	// (0x000a907b) ncim_query_content_pane_t_ParamLimits

0xe1bc,	// (0x000a7881) ncim_query_list_pane_ParamLimits

0xe1ce,	// (0x000a7893) ncim_query_popup_pane_ParamLimits

0xe1e2,	// (0x000a78a7) wait_bar_pane_cp04

0x9c3d,	// (0x000a3302) input_focus_pane_cp011

0xe1ea,	// (0x000a78af) ncim_query_popup_pane_t1

0xe1f8,	// (0x000a78bd) ncim_list_query_list_pane_ParamLimits

0xe1f8,	// (0x000a78bd) ncim_list_query_list_pane

0x9c3d,	// (0x000a3302) bg_button_pane_cp027

0xe205,	// (0x000a78ca) ncim_query_button_pane_g1

0x9c3d,	// (0x000a3302) list_highlight_pane_cp012

0xe20f,	// (0x000a78d4) ncim_list_query_list_pane_g1

0xe217,	// (0x000a78dc) ncim_list_query_list_pane_t1

0x636e,	// (0x0009fa33) cam4_indicators_pane_g3_ParamLimits

0x636e,	// (0x0009fa33) cam4_indicators_pane_g3

0x6470,	// (0x0009fb35) vid4_indicators_pane_g5_ParamLimits

0x6470,	// (0x0009fb35) vid4_indicators_pane_g5

0x752f,	// (0x000a0bf4) vid4_progress_pane_g5_ParamLimits

0x752f,	// (0x000a0bf4) vid4_progress_pane_g5

0x7e1a,	// (0x000a14df) main_ncimui_pane_g1

0x7e82,	// (0x000a1547) ncimui_group_query_pane_ParamLimits

0x7e82,	// (0x000a1547) ncimui_group_query_pane

0x7eca,	// (0x000a158f) ncimui_list_pane_ParamLimits

0x7eca,	// (0x000a158f) ncimui_list_pane

0x7ef1,	// (0x000a15b6) ncimui_text_pane_ParamLimits

0x7ef1,	// (0x000a15b6) ncimui_text_pane

0x7f91,	// (0x000a1656) ncimui_text_pane_t1_ParamLimits

0x7f91,	// (0x000a1656) ncimui_text_pane_t1

0xe225,	// (0x000a78ea) ncimui_list_single_graphic_pane_ParamLimits

0xe225,	// (0x000a78ea) ncimui_list_single_graphic_pane

0x7fb0,	// (0x000a1675) ncimui_query_pane_ParamLimits

0x7fb0,	// (0x000a1675) ncimui_query_pane

0x9c3d,	// (0x000a3302) list_highlight_pane_cp013

0xe235,	// (0x000a78fa) ncim_list_query_list_pane_t1_copy1

0xe243,	// (0x000a7908) ncim_list_single_graphic_pane_g1

0x7fc3,	// (0x000a1688) ncim_query_button_pane_cp01

0x7fcf,	// (0x000a1694) ncim_query_entry_pane_ParamLimits

0x7fcf,	// (0x000a1694) ncim_query_entry_pane

0x7fe2,	// (0x000a16a7) ncimui_query_pane_g1

0x7fee,	// (0x000a16b3) ncimui_query_pane_t1_ParamLimits

0x7fee,	// (0x000a16b3) ncimui_query_pane_t1

0xa4af,	// (0x000a3b74) input_focus_pane_cp012

0xe24b,	// (0x000a7910) ncim_query_entry_pane_t1

0xa8e7,	// (0x000a3fac) main_im_pane_ParamLimits

0x426d,	// (0x0009d932) main_mobtv_pane_ParamLimits

0x426d,	// (0x0009d932) main_mobtv_pane

0x7bb8,	// (0x000a127d) main_cset6_slider_pane_g18_ParamLimits

0x7bb8,	// (0x000a127d) main_cset6_slider_pane_g18

0xdffd,	// (0x000a76c2) main_cset6_slider_pane_g19_ParamLimits

0xdffd,	// (0x000a76c2) main_cset6_slider_pane_g19

0xd6fe,	// (0x000a6dc3) bg_main_mobtv_pane_ParamLimits

0xd6fe,	// (0x000a6dc3) bg_main_mobtv_pane

0x8007,	// (0x000a16cc) main_mobtv_info_pane

0x8012,	// (0x000a16d7) main_mobtv_loading_pane_ParamLimits

0x8012,	// (0x000a16d7) main_mobtv_loading_pane

0xe25d,	// (0x000a7922) main_mobtv_pg_channel_list_pane

0xe267,	// (0x000a792c) main_mobtv_pg_hdr_pane

0x801f,	// (0x000a16e4) main_mobtv_programe_curr_pane_ParamLimits

0x801f,	// (0x000a16e4) main_mobtv_programe_curr_pane

0x802c,	// (0x000a16f1) main_mobtv_programe_next_pane_ParamLimits

0x802c,	// (0x000a16f1) main_mobtv_programe_next_pane

0xe270,	// (0x000a7935) popup_mobtv_noti_window

0xcd88,	// (0x000a644d) main_tv_pg_hdr_pane_g1

0xe278,	// (0x000a793d) main_tv_pg_hdr_pane_g2

0xe280,	// (0x000a7945) main_tv_pg_hdr_pane_g3

0xe288,	// (0x000a794d) main_tv_pg_hdr_pane_g4

0xe290,	// (0x000a7955) main_tv_pg_hdr_pane_g5

0xe29a,	// (0x000a795f) main_tv_pg_hdr_pane_g6

0xe2a4,	// (0x000a7969) main_tv_pg_hdr_pane_g7

0xe2ae,	// (0x000a7973) main_tv_pg_hdr_pane_g8

0xe2b8,	// (0x000a797d) main_tv_pg_hdr_pane_g9

0xe2c2,	// (0x000a7987) main_tv_pg_hdr_pane_g10

0xe2cc,	// (0x000a7991) main_tv_pg_hdr_pane_g11

0x000a,

0xf9c3,	// (0x000a9088) main_tv_pg_hdr_pane_g

0xe2d6,	// (0x000a799b) main_tv_pg_hdr_pane_t1

0xe2e4,	// (0x000a79a9) main_tv_pg_hdr_pane_t2

0xe2f2,	// (0x000a79b7) main_tv_pg_hdr_pane_t3

0xe302,	// (0x000a79c7) main_tv_pg_hdr_pane_t4

0xe312,	// (0x000a79d7) main_tv_pg_hdr_pane_t5

0x0004,

0xf9da,	// (0x000a909f) main_tv_pg_hdr_pane_t

0xe322,	// (0x000a79e7) single_mobtv_pg_channel_pane_ParamLimits

0xe322,	// (0x000a79e7) single_mobtv_pg_channel_pane

0xe334,	// (0x000a79f9) single_mobtv_pg_channel_table_pane

0xae2f,	// (0x000a44f4) single_mobtv_pg_channel_thumb_pane

0xe33d,	// (0x000a7a02) single_tv_pg_channel_pane_g1

0xe346,	// (0x000a7a0b) single_tv_pg_channel_pane_g2

0x0001,

0xf9e5,	// (0x000a90aa) single_tv_pg_channel_pane_g

0xcfcd,	// (0x000a6692) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfcd,	// (0x000a6692) bg_single_mobtv_pg_channel_thumb_pane

0xe34f,	// (0x000a7a14) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe34f,	// (0x000a7a14) single_mobtv_pg_channel_thumb_pane_g1

0xe35d,	// (0x000a7a22) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe35d,	// (0x000a7a22) single_mobtv_pg_channel_thumb_pane_g2

0xe369,	// (0x000a7a2e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe369,	// (0x000a7a2e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xf9ea,	// (0x000a90af) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xf9ea,	// (0x000a90af) single_mobtv_pg_channel_thumb_pane_g

0xe375,	// (0x000a7a3a) single_mobtv_pg_channel_thumb_pane_t1

0xe383,	// (0x000a7a48) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xf9f1,	// (0x000a90b6) single_mobtv_pg_channel_thumb_pane_t

0xcd88,	// (0x000a644d) bg_single_mobtv_pg_channel_table_pane_g1

0xcd88,	// (0x000a644d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x050d,	// (0x00099bd2) bg_single_mobtv_pg_channel_table_pane_g

0xe391,	// (0x000a7a56) single_mobtv_pg_channel_table_pane_t1

0xe39f,	// (0x000a7a64) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xf9f6,	// (0x000a90bb) single_mobtv_pg_channel_table_pane_t

0x8041,	// (0x000a1706) main_mobtv_info_pane_g1_ParamLimits

0x8041,	// (0x000a1706) main_mobtv_info_pane_g1

0x805d,	// (0x000a1722) main_mobtv_info_pane_t1_ParamLimits

0x805d,	// (0x000a1722) main_mobtv_info_pane_t1

0x80d5,	// (0x000a179a) main_mobtv_info_pane_t2_ParamLimits

0x80d5,	// (0x000a179a) main_mobtv_info_pane_t2

0x0002,

0xfa00,	// (0x000a90c5) main_mobtv_info_pane_t_ParamLimits

0xfa00,	// (0x000a90c5) main_mobtv_info_pane_t

0x8164,	// (0x000a1829) wait_bar_pane_cp05

0x8176,	// (0x000a183b) main_mobtv_loading_pane_g1_ParamLimits

0x8176,	// (0x000a183b) main_mobtv_loading_pane_g1

0x8184,	// (0x000a1849) main_mobtv_loading_pane_g2_ParamLimits

0x8184,	// (0x000a1849) main_mobtv_loading_pane_g2

0x8190,	// (0x000a1855) main_mobtv_loading_pane_g3_ParamLimits

0x8190,	// (0x000a1855) main_mobtv_loading_pane_g3

0x0002,

0xfa07,	// (0x000a90cc) main_mobtv_loading_pane_g_ParamLimits

0xfa07,	// (0x000a90cc) main_mobtv_loading_pane_g

0xe3ad,	// (0x000a7a72) main_mobtv_loading_pane_t1_ParamLimits

0xe3ad,	// (0x000a7a72) main_mobtv_loading_pane_t1

0xe3c5,	// (0x000a7a8a) main_mobtv_loading_pane_t2_ParamLimits

0xe3c5,	// (0x000a7a8a) main_mobtv_loading_pane_t2

0x0001,

0xfa0e,	// (0x000a90d3) main_mobtv_loading_pane_t_ParamLimits

0xfa0e,	// (0x000a90d3) main_mobtv_loading_pane_t

0x819e,	// (0x000a1863) wait_bar_pane_cp06_ParamLimits

0x819e,	// (0x000a1863) wait_bar_pane_cp06

0xe3e9,	// (0x000a7aae) main_mobtv_programe_curr_pane_t1

0xe3f7,	// (0x000a7abc) main_mobtv_programe_curr_pane_t2

0x0001,

0xfa13,	// (0x000a90d8) main_mobtv_programe_curr_pane_t

0xe405,	// (0x000a7aca) main_mobtv_programe_next_pane_t1

0xe413,	// (0x000a7ad8) main_mobtv_programe_next_pane_t2

0xe421,	// (0x000a7ae6) main_mobtv_programe_next_pane_t3

0x0002,

0x0a50,	// (0x0009a115) main_mobtv_programe_next_pane_t

0x9c3d,	// (0x000a3302) bg_popup_mobtv_noti_window_pane

0xe42f,	// (0x000a7af4) popup_mobtv_noti_window_g1

0xe437,	// (0x000a7afc) popup_mobtv_noti_window_t1

0xe445,	// (0x000a7b0a) popup_mobtv_noti_window_t2

0x0001,

0x0a57,	// (0x0009a11c) popup_mobtv_noti_window_t

0xcd88,	// (0x000a644d) bg_popup_mobtv_noti_window_pane_g1

0x1071,	// (0x0009a736) sc_clock_pane

0x1071,	// (0x0009a736) main_fs_bigclock_pane

0x774b,	// (0x000a0e10) blid2_tripm_pane_t4_ParamLimits

0x774b,	// (0x000a0e10) blid2_tripm_pane_t4

0x81aa,	// (0x000a186f) sc_clock_pane_g1_ParamLimits

0x81aa,	// (0x000a186f) sc_clock_pane_g1

0x81b8,	// (0x000a187d) sc_clock_pane_t1_ParamLimits

0x81b8,	// (0x000a187d) sc_clock_pane_t1

0x81cb,	// (0x000a1890) sc_clock_pane_t2_ParamLimits

0x81cb,	// (0x000a1890) sc_clock_pane_t2

0x81dd,	// (0x000a18a2) sc_clock_pane_t3_ParamLimits

0x81dd,	// (0x000a18a2) sc_clock_pane_t3

0x0004,

0xfa18,	// (0x000a90dd) sc_clock_pane_t_ParamLimits

0xfa18,	// (0x000a90dd) sc_clock_pane_t

0x910b,	// (0x000a27d0) main_fs_bigclock_indicator_pane_ParamLimits

0x910b,	// (0x000a27d0) main_fs_bigclock_indicator_pane

0x8260,	// (0x000a1925) main_fs_bigclock_pane_g1_ParamLimits

0x8260,	// (0x000a1925) main_fs_bigclock_pane_g1

0x9117,	// (0x000a27dc) main_fs_bigclock_pane_t1_ParamLimits

0x9117,	// (0x000a27dc) main_fs_bigclock_pane_t1

0x9129,	// (0x000a27ee) main_fs_bigclock_pane_t2_ParamLimits

0x9129,	// (0x000a27ee) main_fs_bigclock_pane_t2

0x913d,	// (0x000a2802) main_fs_bigclock_pane_t3_ParamLimits

0x913d,	// (0x000a2802) main_fs_bigclock_pane_t3

0x0002,

0xfbdc,	// (0x000a92a1) main_fs_bigclock_pane_t_ParamLimits

0xfbdc,	// (0x000a92a1) main_fs_bigclock_pane_t

0xeccc,	// (0x000a8391) main_fs_bigclock_indicator_pane_g1

0xe164,	// (0x000a7829) ncim_query_content_pane_g2_ParamLimits

0xe164,	// (0x000a7829) ncim_query_content_pane_g2

0x0001,

0xf9b1,	// (0x000a9076) ncim_query_content_pane_g_ParamLimits

0xf9b1,	// (0x000a9076) ncim_query_content_pane_g

0x81f1,	// (0x000a18b6) sc_clock_pane_t4_ParamLimits

0x81f1,	// (0x000a18b6) sc_clock_pane_t4

0x426d,	// (0x0009d932) main_radioblah_pane

0x6206,	// (0x0009f8cb) cell_call4_button_pane_t1_copy1_ParamLimits

0x6206,	// (0x0009f8cb) cell_call4_button_pane_t1_copy1

0x7e34,	// (0x000a14f9) main_ncimui_pane_t1_ParamLimits

0x7e34,	// (0x000a14f9) main_ncimui_pane_t1

0x7e4e,	// (0x000a1513) main_ncimui_pane_t2_ParamLimits

0x7e4e,	// (0x000a1513) main_ncimui_pane_t2

0x0002,

0xf9aa,	// (0x000a906f) main_ncimui_pane_t_ParamLimits

0xf9aa,	// (0x000a906f) main_ncimui_pane_t

0xe599,	// (0x000a7c5e) main_radioblah_anim_pane_ParamLimits

0xe599,	// (0x000a7c5e) main_radioblah_anim_pane

0xe5aa,	// (0x000a7c6f) main_radioblah_info_pane_ParamLimits

0xe5aa,	// (0x000a7c6f) main_radioblah_info_pane

0xe5be,	// (0x000a7c83) main_radioblah_pane_t1_ParamLimits

0xe5be,	// (0x000a7c83) main_radioblah_pane_t1

0xe5da,	// (0x000a7c9f) main_radioblah_pane_t2_ParamLimits

0xe5da,	// (0x000a7c9f) main_radioblah_pane_t2

0x0003,

0x0a7d,	// (0x0009a142) main_radioblah_pane_t_ParamLimits

0x0a7d,	// (0x0009a142) main_radioblah_pane_t

0x82b6,	// (0x000a197b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82b6,	// (0x000a197b) main_radioblah_rocker_ctrl_pane

0xe622,	// (0x000a7ce7) main_radioblah_info_pane_t1_ParamLimits

0xe622,	// (0x000a7ce7) main_radioblah_info_pane_t1

0x82fb,	// (0x000a19c0) main_radioblah_info_pane_t2_ParamLimits

0x82fb,	// (0x000a19c0) main_radioblah_info_pane_t2

0x0003,

0xfa23,	// (0x000a90e8) main_radioblah_info_pane_t_ParamLimits

0xfa23,	// (0x000a90e8) main_radioblah_info_pane_t

0xcd88,	// (0x000a644d) main_radioblah_rocker_ctrl_pane_g1

0x83ab,	// (0x000a1a70) main_radioblah_rocker_ctrl_pane_g2

0x83b3,	// (0x000a1a78) main_radioblah_rocker_ctrl_pane_g3

0x83bb,	// (0x000a1a80) main_radioblah_rocker_ctrl_pane_g4

0x83c3,	// (0x000a1a88) main_radioblah_rocker_ctrl_pane_g5

0x83cb,	// (0x000a1a90) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa2c,	// (0x000a90f1) main_radioblah_rocker_ctrl_pane_g

0x7dda,	// (0x000a149f) main_cset_text2_pane_t1_copy1_ParamLimits

0x6291,	// (0x0009f956) cam4_image_uncrop_qvga_pane

0x63e0,	// (0x0009faa5) vid4_image_uncrop_qcif_pane

0x78d9,	// (0x000a0f9e) cam6_image_uncrop_qvga_pane_ParamLimits

0x78d9,	// (0x000a0f9e) cam6_image_uncrop_qvga_pane

0xde5f,	// (0x000a7524) vid6_image_uncrop_qcif_pane_ParamLimits

0xde5f,	// (0x000a7524) vid6_image_uncrop_qcif_pane

0x9c3d,	// (0x000a3302) bg_popup_preview_window_pane_cp03

0xe116,	// (0x000a77db) list_cset_text2_pane

0xe11e,	// (0x000a77e3) main_cset6_text2_pane_g1

0xe126,	// (0x000a77eb) main_cset6_text2_pane_t1

0x83d3,	// (0x000a1a98) list_cset_text2_pane_t1_ParamLimits

0x83d3,	// (0x000a1a98) list_cset_text2_pane_t1

0x426d,	// (0x0009d932) main_radioblah_pane_ParamLimits

0x8150,	// (0x000a1815) main_mobtv_info_pane_t3_ParamLimits

0x8150,	// (0x000a1815) main_mobtv_info_pane_t3

0x82a4,	// (0x000a1969) main_radioblah_pane_g1

0x82cf,	// (0x000a1994) main_radioblah_info_pane_g1

0x8350,	// (0x000a1a15) main_radioblah_info_pane_t3_ParamLimits

0x8350,	// (0x000a1a15) main_radioblah_info_pane_t3

0x2f76,	// (0x0009c63b) highlight_cell_cale_month_pane_ParamLimits

0x2f76,	// (0x0009c63b) highlight_cell_cale_month_pane

0x1071,	// (0x0009a736) main_phob_fisheye_pane

0xd0a9,	// (0x000a676e) scroll_pane_cp0031_ParamLimits

0xd0a9,	// (0x000a676e) scroll_pane_cp0031

0xdf6d,	// (0x000a7632) wait_bar_pane_cp08_ParamLimits

0x7aec,	// (0x000a11b1) cset_list_set_pane_copy1_ParamLimits

0xe65c,	// (0x000a7d21) highlight_cell_cale_month_pane_g1

0x83f4,	// (0x000a1ab9) highlight_cell_cale_month_pane_t1

0xdbf9,	// (0x000a72be) list_gen_pane_cp01

0xd838,	// (0x000a6efd) scroll_pane_01

0x8402,	// (0x000a1ac7) list_single_double_fisheye_pane

0x840b,	// (0x000a1ad0) list_double_fisheye_pane_g1_ParamLimits

0x840b,	// (0x000a1ad0) list_double_fisheye_pane_g1

0x8417,	// (0x000a1adc) list_double_fisheye_pane_g2_ParamLimits

0x8417,	// (0x000a1adc) list_double_fisheye_pane_g2

0x842b,	// (0x000a1af0) list_double_fisheye_pane_g3_ParamLimits

0x842b,	// (0x000a1af0) list_double_fisheye_pane_g3

0x0004,

0xfa39,	// (0x000a90fe) list_double_fisheye_pane_g_ParamLimits

0xfa39,	// (0x000a90fe) list_double_fisheye_pane_g

0x8454,	// (0x000a1b19) list_double_fisheye_pane_t1_ParamLimits

0x8454,	// (0x000a1b19) list_double_fisheye_pane_t1

0x846f,	// (0x000a1b34) list_double_fisheye_pane_t2_ParamLimits

0x846f,	// (0x000a1b34) list_double_fisheye_pane_t2

0x0001,

0xfa44,	// (0x000a9109) list_double_fisheye_pane_t_ParamLimits

0xfa44,	// (0x000a9109) list_double_fisheye_pane_t

0x1071,	// (0x0009a736) main_call5_pane

0x8217,	// (0x000a18dc) sc_swipe_pane_ParamLimits

0x8217,	// (0x000a18dc) sc_swipe_pane

0x849d,	// (0x000a1b62) call5_image_pane_ParamLimits

0x849d,	// (0x000a1b62) call5_image_pane

0x84ad,	// (0x000a1b72) call5_swipe_1_pane_ParamLimits

0x84ad,	// (0x000a1b72) call5_swipe_1_pane

0x84b9,	// (0x000a1b7e) call5_swipe_2_pane_ParamLimits

0x84b9,	// (0x000a1b7e) call5_swipe_2_pane

0x84d3,	// (0x000a1b98) popup_call5_audio_first_window_ParamLimits

0x84d3,	// (0x000a1b98) popup_call5_audio_first_window

0xcfcd,	// (0x000a6692) call5_swipe_1_pane_g1_ParamLimits

0xcfcd,	// (0x000a6692) call5_swipe_1_pane_g1

0xe664,	// (0x000a7d29) call5_swipe_1_pane_g2_ParamLimits

0xe664,	// (0x000a7d29) call5_swipe_1_pane_g2

0x0001,

0xfa49,	// (0x000a910e) call5_swipe_1_pane_g_ParamLimits

0xfa49,	// (0x000a910e) call5_swipe_1_pane_g

0xe670,	// (0x000a7d35) call5_swipe_1_pane_t1_ParamLimits

0xe670,	// (0x000a7d35) call5_swipe_1_pane_t1

0xcfcd,	// (0x000a6692) call5_swipe_2_pane_g1_ParamLimits

0xcfcd,	// (0x000a6692) call5_swipe_2_pane_g1

0xe685,	// (0x000a7d4a) call5_swipe_2_pane_g2_ParamLimits

0xe685,	// (0x000a7d4a) call5_swipe_2_pane_g2

0x0001,

0xfa4e,	// (0x000a9113) call5_swipe_2_pane_g_ParamLimits

0xfa4e,	// (0x000a9113) call5_swipe_2_pane_g

0xe6ac,	// (0x000a7d71) call5_swipe_2_pane_t1_ParamLimits

0xe6ac,	// (0x000a7d71) call5_swipe_2_pane_t1

0xe6c1,	// (0x000a7d86) sc_swipe_pane_g1_ParamLimits

0xe6c1,	// (0x000a7d86) sc_swipe_pane_g1

0xe6ce,	// (0x000a7d93) sc_swipe_pane_g2_ParamLimits

0xe6ce,	// (0x000a7d93) sc_swipe_pane_g2

0x0001,

0x0ab6,	// (0x0009a17b) sc_swipe_pane_g_ParamLimits

0x0ab6,	// (0x0009a17b) sc_swipe_pane_g

0xe6da,	// (0x000a7d9f) sc_swipe_pane_t1_ParamLimits

0xe6da,	// (0x000a7d9f) sc_swipe_pane_t1

0x1071,	// (0x0009a736) main_cmail_launcher_pane

0x84e1,	// (0x000a1ba6) aid_size_cell_cmail_l_ParamLimits

0x84e1,	// (0x000a1ba6) aid_size_cell_cmail_l

0x84ef,	// (0x000a1bb4) grid_cmail_l_pane_ParamLimits

0x84ef,	// (0x000a1bb4) grid_cmail_l_pane

0x84ff,	// (0x000a1bc4) cell_cmail_l_pane_ParamLimits

0x84ff,	// (0x000a1bc4) cell_cmail_l_pane

0xe6ef,	// (0x000a7db4) cell_cmail_l_pane_g1_ParamLimits

0xe6ef,	// (0x000a7db4) cell_cmail_l_pane_g1

0xe6fb,	// (0x000a7dc0) cell_cmail_l_pane_t1_ParamLimits

0xe6fb,	// (0x000a7dc0) cell_cmail_l_pane_t1

0xe711,	// (0x000a7dd6) cell_cmail_l_pane_t2_ParamLimits

0xe711,	// (0x000a7dd6) cell_cmail_l_pane_t2

0x0001,

0x0abb,	// (0x0009a180) cell_cmail_l_pane_t_ParamLimits

0x0abb,	// (0x0009a180) cell_cmail_l_pane_t

0xa4af,	// (0x000a3b74) grid_highlight_pane_cp018_ParamLimits

0xa4af,	// (0x000a3b74) grid_highlight_pane_cp018

0x0ec7,	// (0x0009a58c) main2_pane_ParamLimits

0x0ec7,	// (0x0009a58c) main2_pane

0xa980,	// (0x000a4045) popup_sp_fs_action_menu_bg_pane_g1

0xa988,	// (0x000a404d) popup_sp_fs_action_menu_bg_pane_g2

0xa990,	// (0x000a4055) popup_sp_fs_action_menu_bg_pane_g3

0xa998,	// (0x000a405d) popup_sp_fs_action_menu_bg_pane_g4

0xa9a0,	// (0x000a4065) popup_sp_fs_action_menu_bg_pane_g5

0xa9a8,	// (0x000a406d) popup_sp_fs_action_menu_bg_pane_g6

0xa9b0,	// (0x000a4075) popup_sp_fs_action_menu_bg_pane_g7

0xa9b8,	// (0x000a407d) popup_sp_fs_action_menu_bg_pane_g8

0xa9c0,	// (0x000a4085) popup_sp_fs_action_menu_bg_pane_g9

0xa9c8,	// (0x000a408d) popup_sp_fs_action_menu_bg_pane_g10

0xa9c8,	// (0x000a408d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000a884b) popup_sp_fs_action_menu_bg_pane_g

0x1d7b,	// (0x0009b440) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x2_t3_g3_g1

0x1d87,	// (0x0009b44c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1d87,	// (0x0009b44c) list_medium_line_x2_t3_g3_g2

0x1d93,	// (0x0009b458) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d93,	// (0x0009b458) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x000a88f9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x000a88f9) list_medium_line_x2_t3_g3_g

0x1d9f,	// (0x0009b464) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d9f,	// (0x0009b464) list_medium_line_x2_t3_g3_t1

0x1db4,	// (0x0009b479) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1db4,	// (0x0009b479) list_medium_line_x2_t3_g3_t2

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x000a8900) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x000a8900) list_medium_line_x2_t3_g3_t

0x1d7b,	// (0x0009b440) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x2_t3_g2_g1

0x1d93,	// (0x0009b458) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d93,	// (0x0009b458) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x000a8907) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x000a8907) list_medium_line_x2_t3_g2_g

0x1ddb,	// (0x0009b4a0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1ddb,	// (0x0009b4a0) list_medium_line_x2_t3_g2_t1

0x1df1,	// (0x0009b4b6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1df1,	// (0x0009b4b6) list_medium_line_x2_t3_g2_t2

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x000a890c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x000a890c) list_medium_line_x2_t3_g2_t

0x1d7b,	// (0x0009b440) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x2_t4_g4_g1

0x1e03,	// (0x0009b4c8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1e03,	// (0x0009b4c8) list_medium_line_x2_t4_g4_g2

0x1d87,	// (0x0009b44c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1d87,	// (0x0009b44c) list_medium_line_x2_t4_g4_g3

0x1e0f,	// (0x0009b4d4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1e0f,	// (0x0009b4d4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x000a8913) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x000a8913) list_medium_line_x2_t4_g4_g

0x1e1b,	// (0x0009b4e0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e1b,	// (0x0009b4e0) list_medium_line_x2_t4_g4_t1

0x1e35,	// (0x0009b4fa) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e35,	// (0x0009b4fa) list_medium_line_x2_t4_g4_t2

0x1e4b,	// (0x0009b510) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e4b,	// (0x0009b510) list_medium_line_x2_t4_g4_t3

0x1e60,	// (0x0009b525) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e60,	// (0x0009b525) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x000a891c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x000a891c) list_medium_line_x2_t4_g4_t

0x1d7b,	// (0x0009b440) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x2_t2_g4_g1

0x1e03,	// (0x0009b4c8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1e03,	// (0x0009b4c8) list_medium_line_x2_t2_g4_g2

0x1d87,	// (0x0009b44c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1d87,	// (0x0009b44c) list_medium_line_x2_t2_g4_g3

0x1d93,	// (0x0009b458) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d93,	// (0x0009b458) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x000a8983) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x000a8983) list_medium_line_x2_t2_g4_g

0x2f9c,	// (0x0009c661) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2f9c,	// (0x0009c661) list_medium_line_x2_t2_g4_t1

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x000a898c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x000a898c) list_medium_line_x2_t2_g4_t

0x1d7b,	// (0x0009b440) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x2_t2_g3_g1

0x1d87,	// (0x0009b44c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1d87,	// (0x0009b44c) list_medium_line_x2_t2_g3_g2

0x1d93,	// (0x0009b458) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d93,	// (0x0009b458) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x000a88f9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x000a88f9) list_medium_line_x2_t2_g3_g

0x2fb1,	// (0x0009c676) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2fb1,	// (0x0009c676) list_medium_line_x2_t2_g3_t1

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x000a8991) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x000a8991) list_medium_line_x2_t2_g3_t

0x319b,	// (0x0009c860) main_sp_fs_list_pane_ParamLimits

0x319b,	// (0x0009c860) main_sp_fs_list_pane

0x31a7,	// (0x0009c86c) sp_fs_scroll_pane_ParamLimits

0x31a7,	// (0x0009c86c) sp_fs_scroll_pane

0x31b3,	// (0x0009c878) list_medium_line_x2_t3_t1

0x31c3,	// (0x0009c888) list_medium_line_x2_t3_t2

0x31d1,	// (0x0009c896) list_medium_line_x2_t3_t3

0x0002,

0xf2f1,	// (0x000a89b6) list_medium_line_x2_t3_t

0x31df,	// (0x0009c8a4) list_medium_line_x3_t4_t1

0x31ef,	// (0x0009c8b4) list_medium_line_x3_t4_t2

0x31fd,	// (0x0009c8c2) list_medium_line_x3_t4_t3

0x31d1,	// (0x0009c896) list_medium_line_x3_t4_t4

0x0003,

0xf2f8,	// (0x000a89bd) list_medium_line_x3_t4_t

0x320b,	// (0x0009c8d0) list_medium_line_x4_t5_t1

0x321b,	// (0x0009c8e0) list_medium_line_x4_t5_t2

0x31fd,	// (0x0009c8c2) list_medium_line_x4_t5_t3

0x3229,	// (0x0009c8ee) list_medium_line_x4_t5_t4

0x31d1,	// (0x0009c896) list_medium_line_x4_t5_t5

0x0004,

0xf301,	// (0x000a89c6) list_medium_line_x4_t5_t

0x1d7b,	// (0x0009b440) list_medium_line_t4_g4_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_t4_g4_g1

0x1e0f,	// (0x0009b4d4) list_medium_line_t4_g4_g2_ParamLimits

0x1e0f,	// (0x0009b4d4) list_medium_line_t4_g4_g2

0x3237,	// (0x0009c8fc) list_medium_line_t4_g4_g3_ParamLimits

0x3237,	// (0x0009c8fc) list_medium_line_t4_g4_g3

0x1d93,	// (0x0009b458) list_medium_line_t4_g4_g4_ParamLimits

0x1d93,	// (0x0009b458) list_medium_line_t4_g4_g4

0x0003,

0xf30c,	// (0x000a89d1) list_medium_line_t4_g4_g_ParamLimits

0xf30c,	// (0x000a89d1) list_medium_line_t4_g4_g

0x3243,	// (0x0009c908) list_medium_line_t4_g4_t1_ParamLimits

0x3243,	// (0x0009c908) list_medium_line_t4_g4_t1

0x3258,	// (0x0009c91d) list_medium_line_t4_g4_t2_ParamLimits

0x3258,	// (0x0009c91d) list_medium_line_t4_g4_t2

0x326d,	// (0x0009c932) list_medium_line_t4_g4_t3_ParamLimits

0x326d,	// (0x0009c932) list_medium_line_t4_g4_t3

0x1dc6,	// (0x0009b48b) list_medium_line_t4_g4_t4_ParamLimits

0x1dc6,	// (0x0009b48b) list_medium_line_t4_g4_t4

0x0003,

0xf315,	// (0x000a89da) list_medium_line_t4_g4_t_ParamLimits

0xf315,	// (0x000a89da) list_medium_line_t4_g4_t

0x338d,	// (0x0009ca52) chi_dic_find_pane_g1

0x4289,	// (0x0009d94e) main_tport_pane

0x6dd4,	// (0x000a0499) list_medium_line_plain_t1

0x6eb4,	// (0x000a0579) list_medium_line_t2_g2_g1_ParamLimits

0x6eb4,	// (0x000a0579) list_medium_line_t2_g2_g1

0x6ec0,	// (0x000a0585) list_medium_line_t2_g2_g2_ParamLimits

0x6ec0,	// (0x000a0585) list_medium_line_t2_g2_g2

0x0001,

0xf806,	// (0x000a8ecb) list_medium_line_t2_g2_g_ParamLimits

0xf806,	// (0x000a8ecb) list_medium_line_t2_g2_g

0x6ecc,	// (0x000a0591) list_medium_line_t2_g2_t1_ParamLimits

0x6ecc,	// (0x000a0591) list_medium_line_t2_g2_t1

0x6ee6,	// (0x000a05ab) list_medium_line_t2_g2_t2_ParamLimits

0x6ee6,	// (0x000a05ab) list_medium_line_t2_g2_t2

0x0001,

0xf80b,	// (0x000a8ed0) list_medium_line_t2_g2_t_ParamLimits

0xf80b,	// (0x000a8ed0) list_medium_line_t2_g2_t

0x9fdb,	// (0x000a36a0) aid_sp_fs_list_icon_a_sm

0xa1f3,	// (0x000a38b8) aid_sp_fs_list_icon_d

0xae6b,	// (0x000a4530) aid_sp_fs_text_primary

0xae74,	// (0x000a4539) aid_sp_fs_text_secondary

0x758d,	// (0x000a0c52) list_medium_line

0x758d,	// (0x000a0c52) list_medium_line_g2

0x758d,	// (0x000a0c52) list_medium_line_g3

0x758d,	// (0x000a0c52) list_medium_line_plain

0x758d,	// (0x000a0c52) list_medium_line_plain_t2

0x758d,	// (0x000a0c52) list_medium_line_plain_t3

0x758d,	// (0x000a0c52) list_medium_line_right_icon

0x758d,	// (0x000a0c52) list_medium_line_right_iconx2

0x758d,	// (0x000a0c52) list_medium_line_t2

0x758d,	// (0x000a0c52) list_medium_line_t2_g2

0x758d,	// (0x000a0c52) list_medium_line_t2_g3

0x758d,	// (0x000a0c52) list_medium_line_t2_right_icon

0x758d,	// (0x000a0c52) list_medium_line_t2_right_iconx2

0x758d,	// (0x000a0c52) list_medium_line_t3

0x758d,	// (0x000a0c52) list_medium_line_t3_g2

0x758d,	// (0x000a0c52) list_medium_line_t3_g3

0x758d,	// (0x000a0c52) list_medium_line_t3_right_iconx2

0x7596,	// (0x000a0c5b) list_medium_line_t4_g4

0x759f,	// (0x000a0c64) list_medium_line_x2

0x759f,	// (0x000a0c64) list_medium_line_x2_t2_g2

0x759f,	// (0x000a0c64) list_medium_line_x2_t2_g3

0x759f,	// (0x000a0c64) list_medium_line_x2_t2_g4

0x759f,	// (0x000a0c64) list_medium_line_x2_t3

0x759f,	// (0x000a0c64) list_medium_line_x2_t3_g2

0x759f,	// (0x000a0c64) list_medium_line_x2_t3_g3

0x759f,	// (0x000a0c64) list_medium_line_x2_t3_g4

0x759f,	// (0x000a0c64) list_medium_line_x2_t4_g2

0x759f,	// (0x000a0c64) list_medium_line_x2_t4_g4

0x75a8,	// (0x000a0c6d) list_medium_line_x3

0x75a8,	// (0x000a0c6d) list_medium_line_x3_t4

0x75a8,	// (0x000a0c6d) list_medium_line_x3_t4_g4

0x7596,	// (0x000a0c5b) list_medium_line_x4_t4

0x7596,	// (0x000a0c5b) list_medium_line_x4_t4_g7

0x7596,	// (0x000a0c5b) list_medium_line_x4_t5

0x75b1,	// (0x000a0c76) list_single_fs_dyc_pane_ParamLimits

0x75b1,	// (0x000a0c76) list_single_fs_dyc_pane

0x1d7b,	// (0x0009b440) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x4_t4_g7_g1

0x7d04,	// (0x000a13c9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d04,	// (0x000a13c9) list_medium_line_x4_t4_g7_g2

0x7d10,	// (0x000a13d5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d10,	// (0x000a13d5) list_medium_line_x4_t4_g7_g3

0x7d1f,	// (0x000a13e4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d1f,	// (0x000a13e4) list_medium_line_x4_t4_g7_g4

0x7d2b,	// (0x000a13f0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d2b,	// (0x000a13f0) list_medium_line_x4_t4_g7_g5

0x7d3a,	// (0x000a13ff) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d3a,	// (0x000a13ff) list_medium_line_x4_t4_g7_g6

0x7d49,	// (0x000a140e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d49,	// (0x000a140e) list_medium_line_x4_t4_g7_g7

0x0006,

0xf98b,	// (0x000a9050) list_medium_line_x4_t4_g7_g_ParamLimits

0xf98b,	// (0x000a9050) list_medium_line_x4_t4_g7_g

0x7d55,	// (0x000a141a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d55,	// (0x000a141a) list_medium_line_x4_t4_g7_t1

0x7d6a,	// (0x000a142f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d6a,	// (0x000a142f) list_medium_line_x4_t4_g7_t2

0x7d7f,	// (0x000a1444) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d7f,	// (0x000a1444) list_medium_line_x4_t4_g7_t3

0x7d94,	// (0x000a1459) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d94,	// (0x000a1459) list_medium_line_x4_t4_g7_t4

0x7da6,	// (0x000a146b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7da6,	// (0x000a146b) list_medium_line_x4_t4_g7_t5

0x0004,

0xf99a,	// (0x000a905f) list_medium_line_x4_t4_g7_t_ParamLimits

0xf99a,	// (0x000a905f) list_medium_line_x4_t4_g7_t

0x7db8,	// (0x000a147d) list_single_dyc_row_pane_ParamLimits

0x7db8,	// (0x000a147d) list_single_dyc_row_pane

0x8491,	// (0x000a1b56) call5_gesture_pane_ParamLimits

0x8491,	// (0x000a1b56) call5_gesture_pane

0x84c5,	// (0x000a1b8a) call5_windows_pane_ParamLimits

0x84c5,	// (0x000a1b8a) call5_windows_pane

0x8518,	// (0x000a1bdd) call5_swipe_1_pane_cp_ParamLimits

0x8518,	// (0x000a1bdd) call5_swipe_1_pane_cp

0x8524,	// (0x000a1be9) call5_swipe_2_pane_cp_ParamLimits

0x8524,	// (0x000a1be9) call5_swipe_2_pane_cp

0xaab5,	// (0x000a417a) call5_image_pane_cp

0x8530,	// (0x000a1bf5) popup_call5_audio_first_window_cp_ParamLimits

0x8530,	// (0x000a1bf5) popup_call5_audio_first_window_cp

0xe6c1,	// (0x000a7d86) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6c1,	// (0x000a7d86) call5_swipe_1_pane_g1_cp

0xe72e,	// (0x000a7df3) call5_swipe_1_pane_g2_cp

0xe6da,	// (0x000a7d9f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6da,	// (0x000a7d9f) call5_swipe_1_pane_t1_cp

0xe6c1,	// (0x000a7d86) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6c1,	// (0x000a7d86) call5_swipe_2_pane_g1_cp

0xe736,	// (0x000a7dfb) call5_swipe_2_pane_g2_cp

0xe73e,	// (0x000a7e03) call5_swipe_2_pane_t1_cp_ParamLimits

0xe73e,	// (0x000a7e03) call5_swipe_2_pane_t1_cp

0xa4af,	// (0x000a3b74) main_sp_fs_email_pane

0xe753,	// (0x000a7e18) main_sp_fs_listscroll_pane_te

0x853e,	// (0x000a1c03) popup_sp_fs_action_menu_pane_ParamLimits

0x853e,	// (0x000a1c03) popup_sp_fs_action_menu_pane

0xcd88,	// (0x000a644d) bg_sp_fs_ctrlbar_pane_g1

0xe75c,	// (0x000a7e21) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe765,	// (0x000a7e2a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe76e,	// (0x000a7e33) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd88,	// (0x000a644d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa53,	// (0x000a9118) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb6d,	// (0x000a6232) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb6d,	// (0x000a6232) bg_sp_fs_ctrlbar_ddmenu_pane

0xe777,	// (0x000a7e3c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe777,	// (0x000a7e3c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe783,	// (0x000a7e48) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe783,	// (0x000a7e48) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0ac0,	// (0x0009a185) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0ac0,	// (0x0009a185) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe78f,	// (0x000a7e54) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe78f,	// (0x000a7e54) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8582,	// (0x000a1c47) list_medium_line_t2_right_icon_g1

0x858a,	// (0x000a1c4f) list_medium_line_t2_right_icon_t1

0x859a,	// (0x000a1c5f) list_medium_line_t2_right_icon_t2

0x0001,

0xfa5c,	// (0x000a9121) list_medium_line_t2_right_icon_t

0xc980,	// (0x000a6045) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc980,	// (0x000a6045) bg_sp_fs_ctrlbar_pane

0x85eb,	// (0x000a1cb0) main_sp_fs_ctrlbar_button_pane_cp01

0x85f3,	// (0x000a1cb8) main_sp_fs_ctrlbar_ddmenu_pane

0xe7e1,	// (0x000a7ea6) main_sp_fs_ctrlbar_pane_g1

0xe7ed,	// (0x000a7eb2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0aca,	// (0x0009a18f) main_sp_fs_ctrlbar_pane_g

0xe7f9,	// (0x000a7ebe) main_sp_fs_ctrlbar_pane_t1

0x85fd,	// (0x000a1cc2) main_sp_fs_ctrlbar_pane

0x8613,	// (0x000a1cd8) main_sp_fs_listscroll_pane_te_cp01

0x8624,	// (0x000a1ce9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8624,	// (0x000a1ce9) popup_sp_fs_action_menu_pane_cp01

0xa4af,	// (0x000a3b74) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4af,	// (0x000a3b74) bg_sp_fs_highlight_list_pane_cp01

0xa007,	// (0x000a36cc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa007,	// (0x000a36cc) sp_fs_action_menu_list_gene_pane_g1

0xe829,	// (0x000a7eee) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe829,	// (0x000a7eee) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa61,	// (0x000a9126) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa61,	// (0x000a9126) sp_fs_action_menu_list_gene_pane_g

0xa016,	// (0x000a36db) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa016,	// (0x000a36db) sp_fs_action_menu_list_gene_pane_t1

0xa02e,	// (0x000a36f3) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa02e,	// (0x000a36f3) sp_fs_action_menu_list_gene_pane

0xe836,	// (0x000a7efb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe836,	// (0x000a7efb) popup_sp_fs_action_menu_bg_pane

0xa04d,	// (0x000a3712) sp_fs_action_menu_list_pane_ParamLimits

0xa04d,	// (0x000a3712) sp_fs_action_menu_list_pane

0x864e,	// (0x000a1d13) sp_fs_scroll_pane_cp01_ParamLimits

0x864e,	// (0x000a1d13) sp_fs_scroll_pane_cp01

0x8674,	// (0x000a1d39) list_medium_line_plain_t2_t1

0x8684,	// (0x000a1d49) list_medium_line_plain_t2_t2

0x0001,

0xfa66,	// (0x000a912b) list_medium_line_plain_t2_t

0x8692,	// (0x000a1d57) list_medium_line_plain_t3_t1

0x86a2,	// (0x000a1d67) list_medium_line_plain_t3_t2

0x86b0,	// (0x000a1d75) list_medium_line_plain_t3_t3

0x0002,

0xfa6b,	// (0x000a9130) list_medium_line_plain_t3_t

0x1d7b,	// (0x0009b440) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x2_t2_g2_g1

0x1d93,	// (0x0009b458) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d93,	// (0x0009b458) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x000a8907) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x000a8907) list_medium_line_x2_t2_g2_g

0x3243,	// (0x0009c908) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3243,	// (0x0009c908) list_medium_line_x2_t2_g2_t1

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa72,	// (0x000a9137) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa72,	// (0x000a9137) list_medium_line_x2_t2_g2_t

0x1d7b,	// (0x0009b440) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x2_t4_g2_g1

0x86be,	// (0x000a1d83) list_medium_line_x2_t4_g2_g2_ParamLimits

0x86be,	// (0x000a1d83) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa77,	// (0x000a913c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa77,	// (0x000a913c) list_medium_line_x2_t4_g2_g

0x86d0,	// (0x000a1d95) list_medium_line_x2_t4_g2_t1_ParamLimits

0x86d0,	// (0x000a1d95) list_medium_line_x2_t4_g2_t1

0x86ea,	// (0x000a1daf) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86ea,	// (0x000a1daf) list_medium_line_x2_t4_g2_t2

0x8700,	// (0x000a1dc5) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8700,	// (0x000a1dc5) list_medium_line_x2_t4_g2_t3

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa7c,	// (0x000a9141) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa7c,	// (0x000a9141) list_medium_line_x2_t4_g2_t

0x8715,	// (0x000a1dda) list_medium_line_t3_right_iconx2_g1

0x8582,	// (0x000a1c47) list_medium_line_t3_right_iconx2_g2

0x871d,	// (0x000a1de2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa85,	// (0x000a914a) list_medium_line_t3_right_iconx2_g

0x8725,	// (0x000a1dea) list_medium_line_t3_right_iconx2_t1

0x8735,	// (0x000a1dfa) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa8c,	// (0x000a9151) list_medium_line_t3_right_iconx2_t

0x1d7b,	// (0x0009b440) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x3_t4_g4_g1

0x1d87,	// (0x0009b44c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1d87,	// (0x0009b44c) list_medium_line_x3_t4_g4_g2

0x1e0f,	// (0x0009b4d4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1e0f,	// (0x0009b4d4) list_medium_line_x3_t4_g4_g3

0x8743,	// (0x000a1e08) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8743,	// (0x000a1e08) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa91,	// (0x000a9156) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa91,	// (0x000a9156) list_medium_line_x3_t4_g4_g

0x874f,	// (0x000a1e14) list_medium_line_x3_t4_g4_t1_ParamLimits

0x874f,	// (0x000a1e14) list_medium_line_x3_t4_g4_t1

0x8766,	// (0x000a1e2b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8766,	// (0x000a1e2b) list_medium_line_x3_t4_g4_t2

0x3258,	// (0x0009c91d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3258,	// (0x0009c91d) list_medium_line_x3_t4_g4_t3

0x877b,	// (0x000a1e40) list_medium_line_x3_t4_g4_t4_ParamLimits

0x877b,	// (0x000a1e40) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa9a,	// (0x000a915f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa9a,	// (0x000a915f) list_medium_line_x3_t4_g4_t

0x8798,	// (0x000a1e5d) list_single_dyc_row_text_pane_t1_ParamLimits

0x8798,	// (0x000a1e5d) list_single_dyc_row_text_pane_t1

0x87cf,	// (0x000a1e94) list_single_dyc_row_text_pane_t2_ParamLimits

0x87cf,	// (0x000a1e94) list_single_dyc_row_text_pane_t2

0xa06d,	// (0x000a3732) list_single_dyc_row_text_pane_t3_ParamLimits

0xa06d,	// (0x000a3732) list_single_dyc_row_text_pane_t3

0x0005,

0xfaa3,	// (0x000a9168) list_single_dyc_row_text_pane_t_ParamLimits

0xfaa3,	// (0x000a9168) list_single_dyc_row_text_pane_t

0xa091,	// (0x000a3756) list_single_dyc_row_pane_g1_ParamLimits

0xa091,	// (0x000a3756) list_single_dyc_row_pane_g1

0xa09d,	// (0x000a3762) list_single_dyc_row_pane_g2_ParamLimits

0xa09d,	// (0x000a3762) list_single_dyc_row_pane_g2

0xa0a9,	// (0x000a376e) list_single_dyc_row_pane_g3_ParamLimits

0xa0a9,	// (0x000a376e) list_single_dyc_row_pane_g3

0xa0b5,	// (0x000a377a) list_single_dyc_row_pane_g4_ParamLimits

0xa0b5,	// (0x000a377a) list_single_dyc_row_pane_g4

0x0003,

0xfab0,	// (0x000a9175) list_single_dyc_row_pane_g_ParamLimits

0xfab0,	// (0x000a9175) list_single_dyc_row_pane_g

0xa0c1,	// (0x000a3786) list_single_dyc_row_text_pane_ParamLimits

0xa0c1,	// (0x000a3786) list_single_dyc_row_text_pane

0x9c3d,	// (0x000a3302) bg_sp_fs_scroll_pane

0xe844,	// (0x000a7f09) thumb_sp_fs_scroll_pane

0x6eb4,	// (0x000a0579) list_medium_line_g1_ParamLimits

0x6eb4,	// (0x000a0579) list_medium_line_g1

0x88f2,	// (0x000a1fb7) list_medium_line_t1_ParamLimits

0x88f2,	// (0x000a1fb7) list_medium_line_t1

0x1d7b,	// (0x0009b440) list_medium_line_x2_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x2_g1

0x1d87,	// (0x0009b44c) list_medium_line_x2_g2_ParamLimits

0x1d87,	// (0x0009b44c) list_medium_line_x2_g2

0x0001,

0xfab9,	// (0x000a917e) list_medium_line_x2_g_ParamLimits

0xfab9,	// (0x000a917e) list_medium_line_x2_g

0xa0e0,	// (0x000a37a5) list_medium_line_x2_t1_ParamLimits

0xa0e0,	// (0x000a37a5) list_medium_line_x2_t1

0x1d7b,	// (0x0009b440) list_medium_line_x3_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x3_g1

0x1d87,	// (0x0009b44c) list_medium_line_x3_g2_ParamLimits

0x1d87,	// (0x0009b44c) list_medium_line_x3_g2

0x0001,

0xfab9,	// (0x000a917e) list_medium_line_x3_g_ParamLimits

0xfab9,	// (0x000a917e) list_medium_line_x3_g

0xa0e0,	// (0x000a37a5) list_medium_line_x3_t1_ParamLimits

0xa0e0,	// (0x000a37a5) list_medium_line_x3_t1

0xe84d,	// (0x000a7f12) thumb_sp_fs_scroll_pane_g1

0xe856,	// (0x000a7f1b) thumb_sp_fs_scroll_pane_g2

0xe85f,	// (0x000a7f24) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfabe,	// (0x000a9183) thumb_sp_fs_scroll_pane_g

0xe84d,	// (0x000a7f12) bg_sp_fs_scroll_pane_g1

0xe856,	// (0x000a7f1b) bg_sp_fs_scroll_pane_g2

0xe85f,	// (0x000a7f24) bg_sp_fs_scroll_pane_g3

0x0002,

0xfabe,	// (0x000a9183) bg_sp_fs_scroll_pane_g

0x1d7b,	// (0x0009b440) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d7b,	// (0x0009b440) list_medium_line_x2_t3_g4_g1

0x1e03,	// (0x0009b4c8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1e03,	// (0x0009b4c8) list_medium_line_x2_t3_g4_g2

0x1d87,	// (0x0009b44c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1d87,	// (0x0009b44c) list_medium_line_x2_t3_g4_g3

0x1d93,	// (0x0009b458) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d93,	// (0x0009b458) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x000a8983) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x000a8983) list_medium_line_x2_t3_g4_g

0x8907,	// (0x000a1fcc) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8907,	// (0x000a1fcc) list_medium_line_x2_t3_g4_t1

0x891d,	// (0x000a1fe2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x891d,	// (0x000a1fe2) list_medium_line_x2_t3_g4_t2

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1dc6,	// (0x0009b48b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfac5,	// (0x000a918a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfac5,	// (0x000a918a) list_medium_line_x2_t3_g4_t

0x6eb4,	// (0x000a0579) list_medium_line_g2_g1_ParamLimits

0x6eb4,	// (0x000a0579) list_medium_line_g2_g1

0x6ec0,	// (0x000a0585) list_medium_line_g2_g2_ParamLimits

0x6ec0,	// (0x000a0585) list_medium_line_g2_g2

0x0001,

0xf806,	// (0x000a8ecb) list_medium_line_g2_g_ParamLimits

0xf806,	// (0x000a8ecb) list_medium_line_g2_g

0x8937,	// (0x000a1ffc) list_medium_line_g2_t1_ParamLimits

0x8937,	// (0x000a1ffc) list_medium_line_g2_t1

0x6eb4,	// (0x000a0579) list_medium_line_t3_g2_g1_ParamLimits

0x6eb4,	// (0x000a0579) list_medium_line_t3_g2_g1

0x6ec0,	// (0x000a0585) list_medium_line_t3_g2_g2_ParamLimits

0x6ec0,	// (0x000a0585) list_medium_line_t3_g2_g2

0x0001,

0xf806,	// (0x000a8ecb) list_medium_line_t3_g2_g_ParamLimits

0xf806,	// (0x000a8ecb) list_medium_line_t3_g2_g

0x894c,	// (0x000a2011) list_medium_line_t3_g2_t1_ParamLimits

0x894c,	// (0x000a2011) list_medium_line_t3_g2_t1

0x8966,	// (0x000a202b) list_medium_line_t3_g2_t2_ParamLimits

0x8966,	// (0x000a202b) list_medium_line_t3_g2_t2

0x897c,	// (0x000a2041) list_medium_line_t3_g2_t3_ParamLimits

0x897c,	// (0x000a2041) list_medium_line_t3_g2_t3

0x0002,

0xfacc,	// (0x000a9191) list_medium_line_t3_g2_t_ParamLimits

0xfacc,	// (0x000a9191) list_medium_line_t3_g2_t

0x8582,	// (0x000a1c47) list_medium_line_right_icon_g1

0x8992,	// (0x000a2057) list_medium_line_right_icon_t1

0x6eb4,	// (0x000a0579) list_medium_line_t2_g1_ParamLimits

0x6eb4,	// (0x000a0579) list_medium_line_t2_g1

0x89a0,	// (0x000a2065) list_medium_line_t2_t1_ParamLimits

0x89a0,	// (0x000a2065) list_medium_line_t2_t1

0x89ba,	// (0x000a207f) list_medium_line_t2_t2_ParamLimits

0x89ba,	// (0x000a207f) list_medium_line_t2_t2

0x0001,

0xfad3,	// (0x000a9198) list_medium_line_t2_t_ParamLimits

0xfad3,	// (0x000a9198) list_medium_line_t2_t

0x6eb4,	// (0x000a0579) list_medium_line_t3_g1_ParamLimits

0x6eb4,	// (0x000a0579) list_medium_line_t3_g1

0x89cf,	// (0x000a2094) list_medium_line_t3_t1_ParamLimits

0x89cf,	// (0x000a2094) list_medium_line_t3_t1

0x89e9,	// (0x000a20ae) list_medium_line_t3_t2_ParamLimits

0x89e9,	// (0x000a20ae) list_medium_line_t3_t2

0x89ff,	// (0x000a20c4) list_medium_line_t3_t3_ParamLimits

0x89ff,	// (0x000a20c4) list_medium_line_t3_t3

0x0002,

0xfad8,	// (0x000a919d) list_medium_line_t3_t_ParamLimits

0xfad8,	// (0x000a919d) list_medium_line_t3_t

0x6eb4,	// (0x000a0579) list_medium_line_g3_g1_ParamLimits

0x6eb4,	// (0x000a0579) list_medium_line_g3_g1

0x8a14,	// (0x000a20d9) list_medium_line_g3_g2_ParamLimits

0x8a14,	// (0x000a20d9) list_medium_line_g3_g2

0x6ec0,	// (0x000a0585) list_medium_line_g3_g3_ParamLimits

0x6ec0,	// (0x000a0585) list_medium_line_g3_g3

0x0002,

0xfadf,	// (0x000a91a4) list_medium_line_g3_g_ParamLimits

0xfadf,	// (0x000a91a4) list_medium_line_g3_g

0x8a20,	// (0x000a20e5) list_medium_line_g3_t1_ParamLimits

0x8a20,	// (0x000a20e5) list_medium_line_g3_t1

0x6eb4,	// (0x000a0579) list_medium_line_t2_g3_g1_ParamLimits

0x6eb4,	// (0x000a0579) list_medium_line_t2_g3_g1

0x8a14,	// (0x000a20d9) list_medium_line_t2_g3_g2_ParamLimits

0x8a14,	// (0x000a20d9) list_medium_line_t2_g3_g2

0x6ec0,	// (0x000a0585) list_medium_line_t2_g3_g3_ParamLimits

0x6ec0,	// (0x000a0585) list_medium_line_t2_g3_g3

0x0002,

0xfadf,	// (0x000a91a4) list_medium_line_t2_g3_g_ParamLimits

0xfadf,	// (0x000a91a4) list_medium_line_t2_g3_g

0x8a35,	// (0x000a20fa) list_medium_line_t2_g3_t1_ParamLimits

0x8a35,	// (0x000a20fa) list_medium_line_t2_g3_t1

0x8a4f,	// (0x000a2114) list_medium_line_t2_g3_t2_ParamLimits

0x8a4f,	// (0x000a2114) list_medium_line_t2_g3_t2

0x0001,

0xfae6,	// (0x000a91ab) list_medium_line_t2_g3_t_ParamLimits

0xfae6,	// (0x000a91ab) list_medium_line_t2_g3_t

0x6eb4,	// (0x000a0579) list_medium_line_t3_g3_g1_ParamLimits

0x6eb4,	// (0x000a0579) list_medium_line_t3_g3_g1

0x8a14,	// (0x000a20d9) list_medium_line_t3_g3_g2_ParamLimits

0x8a14,	// (0x000a20d9) list_medium_line_t3_g3_g2

0x6ec0,	// (0x000a0585) list_medium_line_t3_g3_g3_ParamLimits

0x6ec0,	// (0x000a0585) list_medium_line_t3_g3_g3

0x0002,

0xfadf,	// (0x000a91a4) list_medium_line_t3_g3_g_ParamLimits

0xfadf,	// (0x000a91a4) list_medium_line_t3_g3_g

0x8a65,	// (0x000a212a) list_medium_line_t3_g3_t1_ParamLimits

0x8a65,	// (0x000a212a) list_medium_line_t3_g3_t1

0x8a7e,	// (0x000a2143) list_medium_line_t3_g3_t2_ParamLimits

0x8a7e,	// (0x000a2143) list_medium_line_t3_g3_t2

0x8a94,	// (0x000a2159) list_medium_line_t3_g3_t3_ParamLimits

0x8a94,	// (0x000a2159) list_medium_line_t3_g3_t3

0x0002,

0xfaeb,	// (0x000a91b0) list_medium_line_t3_g3_t_ParamLimits

0xfaeb,	// (0x000a91b0) list_medium_line_t3_g3_t

0x8715,	// (0x000a1dda) list_medium_line_right_iconx2_g1

0x8582,	// (0x000a1c47) list_medium_line_right_iconx2_g2

0x0001,

0xfaf2,	// (0x000a91b7) list_medium_line_right_iconx2_g

0xa203,	// (0x000a38c8) list_medium_line_right_iconx2_t1

0x8715,	// (0x000a1dda) list_medium_line_t2_right_iconx2_g1

0x8582,	// (0x000a1c47) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfaf2,	// (0x000a91b7) list_medium_line_t2_right_iconx2_g

0x8aaa,	// (0x000a216f) list_medium_line_t2_right_iconx2_t1

0x8aba,	// (0x000a217f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfaf7,	// (0x000a91bc) list_medium_line_t2_right_iconx2_t

0x8ac8,	// (0x000a218d) list_medium_line_x4_t4_t1

0x8ad6,	// (0x000a219b) list_medium_line_x4_t4_t2

0x8ae6,	// (0x000a21ab) list_medium_line_x4_t4_t3

0x8af6,	// (0x000a21bb) list_medium_line_x4_t4_t4

0x0003,

0xfafc,	// (0x000a91c1) list_medium_line_x4_t4_t

0x8b30,	// (0x000a21f5) tport_appsw_pane_ParamLimits

0x8b30,	// (0x000a21f5) tport_appsw_pane

0x8b3e,	// (0x000a2203) tport_contact_pane_ParamLimits

0x8b3e,	// (0x000a2203) tport_contact_pane

0x8b4e,	// (0x000a2213) tport_listscroll_pane_ParamLimits

0x8b4e,	// (0x000a2213) tport_listscroll_pane

0x8b5e,	// (0x000a2223) cell_tport_appsw_pane_ParamLimits

0x8b5e,	// (0x000a2223) cell_tport_appsw_pane

0xd032,	// (0x000a66f7) tport_appsw_pane_g1_ParamLimits

0xd032,	// (0x000a66f7) tport_appsw_pane_g1

0xe868,	// (0x000a7f2d) tport_contact_pane_g1

0xe871,	// (0x000a7f36) tport_contact_pane_t1

0xe87f,	// (0x000a7f44) tport_contact_pane_t2

0x0001,

0xfb05,	// (0x000a91ca) tport_contact_pane_t

0xe88d,	// (0x000a7f52) list_tport_pane

0xe896,	// (0x000a7f5b) scroll_pane_cp_030

0x8b91,	// (0x000a2256) cell_tport_appsw_pane_g1

0x8ba1,	// (0x000a2266) cell_tport_appsw_pane_t1

0x8baf,	// (0x000a2274) grid_highlight_pane_cp019

0x8bb7,	// (0x000a227c) list_tport_double_graphic_pane_ParamLimits

0x8bb7,	// (0x000a227c) list_tport_double_graphic_pane

0xa4af,	// (0x000a3b74) list_highlight_pane_cp023_ParamLimits

0xa4af,	// (0x000a3b74) list_highlight_pane_cp023

0x8bc8,	// (0x000a228d) list_tport_double_graphic_pane_g1_ParamLimits

0x8bc8,	// (0x000a228d) list_tport_double_graphic_pane_g1

0x8bd5,	// (0x000a229a) list_tport_double_graphic_pane_t1_ParamLimits

0x8bd5,	// (0x000a229a) list_tport_double_graphic_pane_t1

0x8bea,	// (0x000a22af) list_tport_double_graphic_pane_t2_ParamLimits

0x8bea,	// (0x000a22af) list_tport_double_graphic_pane_t2

0x0001,

0xfb11,	// (0x000a91d6) list_tport_double_graphic_pane_t_ParamLimits

0xfb11,	// (0x000a91d6) list_tport_double_graphic_pane_t

0x9c3d,	// (0x000a3302) main_cale_note_pane

0x6649,	// (0x0009fd0e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6649,	// (0x0009fd0e) cell_vitu2_function_top_wide_pane_cp01

0x8164,	// (0x000a1829) wait_bar_pane_cp05_ParamLimits

0xa4af,	// (0x000a3b74) listscroll_cmail_pane

0xe89f,	// (0x000a7f64) list_cmail_pane

0x8bfc,	// (0x000a22c1) list_cmail_body_pane

0x8c24,	// (0x000a22e9) list_single_cmail_header_caption_pane

0x8c50,	// (0x000a2315) list_single_cmail_header_detail_pane_ParamLimits

0x8c50,	// (0x000a2315) list_single_cmail_header_detail_pane

0xe8af,	// (0x000a7f74) list_single_cmail_header_caption_pane_t1

0x8c89,	// (0x000a234e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c89,	// (0x000a234e) list_single_cmail_header_detail_pane_g1

0xa211,	// (0x000a38d6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa211,	// (0x000a38d6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb16,	// (0x000a91db) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb16,	// (0x000a91db) list_single_cmail_header_detail_pane_g

0xa0f6,	// (0x000a37bb) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa0f6,	// (0x000a37bb) list_single_cmail_header_detail_pane_t1

0xa156,	// (0x000a381b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa156,	// (0x000a381b) list_single_cmail_header_editor_pane_bg

0xe346,	// (0x000a7a0b) list_cmail_body_pane_g1

0xe8d3,	// (0x000a7f98) list_cmail_body_pane_t1

0xd71e,	// (0x000a6de3) list_single_cmail_header_editor_pane_bg_g1

0xad2c,	// (0x000a43f1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd72e,	// (0x000a6df3) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd726,	// (0x000a6deb) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd95a,	// (0x000a701f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd74e,	// (0x000a6e13) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd73e,	// (0x000a6e03) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd746,	// (0x000a6e0b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad0c,	// (0x000a43d1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c9f,	// (0x000a2364) calenote_gesture_pane_ParamLimits

0x8c9f,	// (0x000a2364) calenote_gesture_pane

0x8cb9,	// (0x000a237e) calenote_window_pane_ParamLimits

0x8cb9,	// (0x000a237e) calenote_window_pane

0xe8e1,	// (0x000a7fa6) popup_note_window_cp01

0x8cd1,	// (0x000a2396) calenote_swipe_1_pane_ParamLimits

0x8cd1,	// (0x000a2396) calenote_swipe_1_pane

0x8524,	// (0x000a1be9) calenote_swipe_2_pane_ParamLimits

0x8524,	// (0x000a1be9) calenote_swipe_2_pane

0xe6c1,	// (0x000a7d86) calenote_swipe_1_pane_g1_ParamLimits

0xe6c1,	// (0x000a7d86) calenote_swipe_1_pane_g1

0xe6ce,	// (0x000a7d93) calenote_swipe_1_pane_g2_ParamLimits

0xe6ce,	// (0x000a7d93) calenote_swipe_1_pane_g2

0x0001,

0x0ab6,	// (0x0009a17b) calenote_swipe_1_pane_g_ParamLimits

0x0ab6,	// (0x0009a17b) calenote_swipe_1_pane_g

0xe8f3,	// (0x000a7fb8) calenote_swipe_1_pane_t1_ParamLimits

0xe8f3,	// (0x000a7fb8) calenote_swipe_1_pane_t1

0xe6c1,	// (0x000a7d86) calenote_swipe_2_pane_g1_ParamLimits

0xe6c1,	// (0x000a7d86) calenote_swipe_2_pane_g1

0xe912,	// (0x000a7fd7) calenote_swipe_2_pane_g2_ParamLimits

0xe912,	// (0x000a7fd7) calenote_swipe_2_pane_g2

0x0001,

0x0b89,	// (0x0009a24e) calenote_swipe_2_pane_g_ParamLimits

0x0b89,	// (0x0009a24e) calenote_swipe_2_pane_g

0xe91e,	// (0x000a7fe3) calenote_swipe_2_pane_t1_ParamLimits

0xe91e,	// (0x000a7fe3) calenote_swipe_2_pane_t1

0x9c3d,	// (0x000a3302) main_mup_navstr_pane

0x527d,	// (0x0009e942) main_mup3_pane_t7_ParamLimits

0x527d,	// (0x0009e942) main_mup3_pane_t7

0x5cc4,	// (0x0009f389) main_mp4_pane_g6_ParamLimits

0x5cc4,	// (0x0009f389) main_mp4_pane_g6

0x6062,	// (0x0009f727) main_image3_pane_t4_ParamLimits

0x6062,	// (0x0009f727) main_image3_pane_t4

0x8ce4,	// (0x000a23a9) popup_navstr_preview_pane_ParamLimits

0x8ce4,	// (0x000a23a9) popup_navstr_preview_pane

0x8cf0,	// (0x000a23b5) scroll_navstr_pane_ParamLimits

0x8cf0,	// (0x000a23b5) scroll_navstr_pane

0x9c3d,	// (0x000a3302) bg_popup_preview_window_pane_cp04

0xe945,	// (0x000a800a) popup_navstr_preview_pane_t1

0x8cfc,	// (0x000a23c1) scroll_navstr_pane_g1_ParamLimits

0x8cfc,	// (0x000a23c1) scroll_navstr_pane_g1

0x8d09,	// (0x000a23ce) scroll_navstr_pane_t1_ParamLimits

0x8d09,	// (0x000a23ce) scroll_navstr_pane_t1

0xe8ea,	// (0x000a7faf) bg_button_pane_cp014

0xe8ea,	// (0x000a7faf) bg_button_pane_cp030

0x8437,	// (0x000a1afc) list_double_fisheye_pane_g4_ParamLimits

0x8437,	// (0x000a1afc) list_double_fisheye_pane_g4

0x8443,	// (0x000a1b08) list_double_fisheye_pane_g5_ParamLimits

0x8443,	// (0x000a1b08) list_double_fisheye_pane_g5

0xc55d,	// (0x000a5c22) sp_fs_scroll_pane_cp03

0xe7e1,	// (0x000a7ea6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7ed,	// (0x000a7eb2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0aca,	// (0x0009a18f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7f9,	// (0x000a7ebe) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8a7,	// (0x000a7f6c) sp_fs_scroll_pane_cp02

0xa9f4,	// (0x000a40b9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9f4,	// (0x000a40b9) popup_sp_fs_calendar_preview_list_single_pane

0x9c3d,	// (0x000a3302) main_cam6_pano_pane

0x426d,	// (0x0009d932) main_mup3_pane_ParamLimits

0x9c3d,	// (0x000a3302) main_phacti_pane

0x8039,	// (0x000a16fe) bg_button_pane_cp11

0x8051,	// (0x000a1716) main_mobtv_info_pane_g2_ParamLimits

0x8051,	// (0x000a1716) main_mobtv_info_pane_g2

0x0001,

0xf9fb,	// (0x000a90c0) main_mobtv_info_pane_g_ParamLimits

0xf9fb,	// (0x000a90c0) main_mobtv_info_pane_g

0x8203,	// (0x000a18c8) sc_clock_pane_t5_ParamLimits

0x8203,	// (0x000a18c8) sc_clock_pane_t5

0x82a4,	// (0x000a1969) main_radioblah_pane_g1_ParamLimits

0xe5f2,	// (0x000a7cb7) main_radioblah_pane_t3_ParamLimits

0xe5f2,	// (0x000a7cb7) main_radioblah_pane_t3

0xe60a,	// (0x000a7ccf) main_radioblah_pane_t4_ParamLimits

0xe60a,	// (0x000a7ccf) main_radioblah_pane_t4

0x82c2,	// (0x000a1987) main_radioblah_text_pane_ParamLimits

0x82c2,	// (0x000a1987) main_radioblah_text_pane

0x82cf,	// (0x000a1994) main_radioblah_info_pane_g1_ParamLimits

0x8364,	// (0x000a1a29) main_radioblah_info_pane_t4_ParamLimits

0x8364,	// (0x000a1a29) main_radioblah_info_pane_t4

0xa4af,	// (0x000a3b74) main_sp_fs_calendar_pane

0x8d1b,	// (0x000a23e0) main_phacti_pane_g1

0x8d23,	// (0x000a23e8) phacti_note_pane_ParamLimits

0x8d23,	// (0x000a23e8) phacti_note_pane

0xe95c,	// (0x000a8021) phacti_term_pane_ParamLimits

0xe95c,	// (0x000a8021) phacti_term_pane

0xe971,	// (0x000a8036) phacti_note_pane_t1_ParamLimits

0xe971,	// (0x000a8036) phacti_note_pane_t1

0xa16d,	// (0x000a3832) phacti_term_pane_g1

0xa175,	// (0x000a383a) phacti_term_pane_t1_ParamLimits

0xa175,	// (0x000a383a) phacti_term_pane_t1

0xe988,	// (0x000a804d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe990,	// (0x000a8055) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb27,	// (0x000a91ec) popup_sp_fs_calendar_preview_list_single_pane_g

0xe998,	// (0x000a805d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe998,	// (0x000a805d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9ae,	// (0x000a8073) aid_popup_sp_fs_bg_corner_pane

0xcd88,	// (0x000a644d) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c3d,	// (0x000a3302) popup_sp_fs_calendar_preview_bg_pane

0xa19f,	// (0x000a3864) popup_sp_fs_calendar_preview_list_pane

0xc980,	// (0x000a6045) bg_main_sp_fs_cale_pane_ParamLimits

0xc980,	// (0x000a6045) bg_main_sp_fs_cale_pane

0xa1b0,	// (0x000a3875) listscroll_cale_mrui_pane_ParamLimits

0xa1b0,	// (0x000a3875) listscroll_cale_mrui_pane

0xa1c5,	// (0x000a388a) listscroll_sp_fs_schedule_track_pane

0xa1ce,	// (0x000a3893) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa1ce,	// (0x000a3893) main_sp_fs_ctrlbar_pane_cp01

0xe9b6,	// (0x000a807b) main_sp_fs_ribbon_pane

0xa1e1,	// (0x000a38a6) popup_sp_fs_cale_preview_window

0x8d86,	// (0x000a244b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d86,	// (0x000a244b) list_single_sp_fs_schedule_track_pane

0xe58b,	// (0x000a7c50) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe58b,	// (0x000a7c50) bg_sp_fs_highlight_list_pane_cp03

0x8da9,	// (0x000a246e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8da9,	// (0x000a246e) list_single_sp_fs_schedule_track_pane_g1

0x8db5,	// (0x000a247a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8db5,	// (0x000a247a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb2c,	// (0x000a91f1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb2c,	// (0x000a91f1) list_single_sp_fs_schedule_track_pane_g

0x8dc1,	// (0x000a2486) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8dc1,	// (0x000a2486) list_single_sp_fs_schedule_track_pane_t1

0x8dd9,	// (0x000a249e) sp_fs_schedule_track_pane_ParamLimits

0x8dd9,	// (0x000a249e) sp_fs_schedule_track_pane

0xe9be,	// (0x000a8083) sp_fs_schedule_track_pane_g1

0xe9c6,	// (0x000a808b) sp_fs_schedule_track_pane_g2

0xe9ce,	// (0x000a8093) sp_fs_schedule_track_pane_g3

0xe9d6,	// (0x000a809b) sp_fs_schedule_track_pane_g4

0xe9de,	// (0x000a80a3) sp_fs_schedule_track_pane_g5

0x0004,

0xfb31,	// (0x000a91f6) sp_fs_schedule_track_pane_g

0xd71e,	// (0x000a6de3) bg_sp_fs_schedule_viewer_highlight_g1

0xad2c,	// (0x000a43f1) bg_sp_fs_schedule_viewer_highlight_g2

0xd726,	// (0x000a6deb) bg_sp_fs_schedule_viewer_highlight_g3

0xd72e,	// (0x000a6df3) bg_sp_fs_schedule_viewer_highlight_g4

0xd95a,	// (0x000a701f) bg_sp_fs_schedule_viewer_highlight_g5

0xd73e,	// (0x000a6e03) bg_sp_fs_schedule_viewer_highlight_g6

0xd746,	// (0x000a6e0b) bg_sp_fs_schedule_viewer_highlight_g7

0xd74e,	// (0x000a6e13) bg_sp_fs_schedule_viewer_highlight_g8

0xad0c,	// (0x000a43d1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb3c,	// (0x000a9201) bg_sp_fs_schedule_viewer_highlight_g

0x9c3d,	// (0x000a3302) bg_main_sp_fs_ribbon_pane

0x8de9,	// (0x000a24ae) main_sp_fs_ribbon_pane_g1

0xe9e6,	// (0x000a80ab) main_sp_fs_ribbon_pane_t1

0x8df2,	// (0x000a24b7) main_sp_fs_ribbon_pane_t2

0xe9f5,	// (0x000a80ba) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb4f,	// (0x000a9214) main_sp_fs_ribbon_pane_t

0xea04,	// (0x000a80c9) main_sp_fs_ribbon_scheduler_pane

0xea0c,	// (0x000a80d1) bg_main_sp_fs_ribbon_pane_g1

0xea15,	// (0x000a80da) bg_main_sp_fs_ribbon_pane_g2

0xea1e,	// (0x000a80e3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfb56,	// (0x000a921b) bg_main_sp_fs_ribbon_pane_g

0xea26,	// (0x000a80eb) main_sp_fs_ribbon_scheduler_pane_g1

0xea2f,	// (0x000a80f4) main_sp_fs_ribbon_scheduler_pane_g2

0xea38,	// (0x000a80fd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfb5d,	// (0x000a9222) main_sp_fs_ribbon_scheduler_pane_g

0xea41,	// (0x000a8106) list_cale_mrui_pane

0x8e01,	// (0x000a24c6) sp_fs_scroll_pane_cp07_ParamLimits

0x8e01,	// (0x000a24c6) sp_fs_scroll_pane_cp07

0x8e1d,	// (0x000a24e2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e1d,	// (0x000a24e2) bg_sp_fs_schedule_viewer_highlight

0xea4e,	// (0x000a8113) list_single_sp_fs_schedule_track_pane_cp01

0xea56,	// (0x000a811b) list_sp_fs_schedule_track_pane

0xea5e,	// (0x000a8123) sp_fs_scroll_pane_cp06_ParamLimits

0xea5e,	// (0x000a8123) sp_fs_scroll_pane_cp06

0xcd88,	// (0x000a644d) bgmain_sp_fs_calendar_pane_g1

0x8e2a,	// (0x000a24ef) list_single_cale_mrui_pane_ParamLimits

0x8e2a,	// (0x000a24ef) list_single_cale_mrui_pane

0xa21d,	// (0x000a38e2) list_single_cale_mrui_row_pane_ParamLimits

0xa21d,	// (0x000a38e2) list_single_cale_mrui_row_pane

0xa22a,	// (0x000a38ef) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa22a,	// (0x000a38ef) list_single_cale_mrui_row_pane_g1

0xa262,	// (0x000a3927) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa262,	// (0x000a3927) list_single_cale_mrui_row_pane_t1

0x8e58,	// (0x000a251d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e58,	// (0x000a251d) list_single_cale_mrui_row_pane_t2

0xa274,	// (0x000a3939) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa274,	// (0x000a3939) list_single_cale_mrui_row_pane_t3

0xa2a3,	// (0x000a3968) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa2a3,	// (0x000a3968) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb6b,	// (0x000a9230) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb6b,	// (0x000a9230) list_single_cale_mrui_row_pane_t

0x8ebe,	// (0x000a2583) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ebe,	// (0x000a2583) list_single_cmail_header_editor_pane_bg_cp01

0x8ede,	// (0x000a25a3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ede,	// (0x000a25a3) list_single_cmail_header_editor_pane_bg_cp02

0x8efa,	// (0x000a25bf) main_radioblah_text_pane_t1_ParamLimits

0x8efa,	// (0x000a25bf) main_radioblah_text_pane_t1

0xea7d,	// (0x000a8142) cam6_indi_pane_cp01

0xea85,	// (0x000a814a) cam6_mode_pane_cp01

0xea8d,	// (0x000a8152) cam6_pano_pane

0xea96,	// (0x000a815b) cam6_zoom_pane_cp01

0xea9e,	// (0x000a8163) cam6_pano_image_pane

0xeaa9,	// (0x000a816e) cam6_pano_pane_g1

0xe346,	// (0x000a7a0b) cam6_pano_pane_g2

0xeab2,	// (0x000a8177) cam6_pano_pane_g3

0xeabb,	// (0x000a8180) cam6_pano_pane_g4

0xd32a,	// (0x000a69ef) cam6_pano_pane_g5

0xeac4,	// (0x000a8189) cam6_pano_pane_g6

0xeace,	// (0x000a8193) cam6_pano_pane_g7

0xead6,	// (0x000a819b) cam6_pano_pane_g8

0xeadf,	// (0x000a81a4) cam6_pano_pane_g9

0x0008,

0xfb74,	// (0x000a9239) cam6_pano_pane_g

0x9c3d,	// (0x000a3302) main_browser_tag_pane

0xe93d,	// (0x000a8002) grid_navstr_albumart_pane

0xeaea,	// (0x000a81af) cell_navstr_albumart_pane_ParamLimits

0xeaea,	// (0x000a81af) cell_navstr_albumart_pane

0xeb0a,	// (0x000a81cf) cell_navstr_albumart_pane_g1

0xc751,	// (0x000a5e16) cell_navstr_albumart_pane_g2

0xc761,	// (0x000a5e26) cell_navstr_albumart_pane_g3

0xc759,	// (0x000a5e1e) cell_navstr_albumart_pane_g4

0x0003,

0x0bc2,	// (0x0009a287) cell_navstr_albumart_pane_g

0x8f15,	// (0x000a25da) bt_list_pane_ParamLimits

0x8f15,	// (0x000a25da) bt_list_pane

0x8f36,	// (0x000a25fb) bt_list_pane_t1

0x8f45,	// (0x000a260a) bt_list_pane_t2

0x0001,

0xfb87,	// (0x000a924c) bt_list_pane_t

0x9c3d,	// (0x000a3302) main_cale_prevew_pane

0x8f54,	// (0x000a2619) popup_cale_preview_window_ParamLimits

0x8f54,	// (0x000a2619) popup_cale_preview_window

0xa4af,	// (0x000a3b74) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4af,	// (0x000a3b74) bg_popup_preview_window_pane_cp05

0xeb12,	// (0x000a81d7) list_cale_preview_pane_ParamLimits

0xeb12,	// (0x000a81d7) list_cale_preview_pane

0x8f6d,	// (0x000a2632) list_double_cale_preview_pane_ParamLimits

0x8f6d,	// (0x000a2632) list_double_cale_preview_pane

0x8f7f,	// (0x000a2644) list_single_cale_preview_pane_ParamLimits

0x8f7f,	// (0x000a2644) list_single_cale_preview_pane

0x8f93,	// (0x000a2658) list_single_cale_preview_pane_g1

0x8f9b,	// (0x000a2660) list_single_cale_preview_pane_t1_ParamLimits

0x8f9b,	// (0x000a2660) list_single_cale_preview_pane_t1

0x8fb0,	// (0x000a2675) list_double_cale_preview_pane_g1

0x8fb8,	// (0x000a267d) list_double_cale_preview_pane_t1_ParamLimits

0x8fb8,	// (0x000a267d) list_double_cale_preview_pane_t1

0x8fcd,	// (0x000a2692) list_double_cale_preview_pane_t2_ParamLimits

0x8fcd,	// (0x000a2692) list_double_cale_preview_pane_t2

0x0001,

0xfb8c,	// (0x000a9251) list_double_cale_preview_pane_t_ParamLimits

0xfb8c,	// (0x000a9251) list_double_cale_preview_pane_t

0x9c3d,	// (0x000a3302) main_ezdial_pane

0xa4af,	// (0x000a3b74) main_sp_fs_email_pane_ParamLimits

0x85a8,	// (0x000a1c6d) cmail_ddmenu_btn01_pane_ParamLimits

0x85a8,	// (0x000a1c6d) cmail_ddmenu_btn01_pane

0x85bd,	// (0x000a1c82) cmail_ddmenu_btn02_pane_ParamLimits

0x85bd,	// (0x000a1c82) cmail_ddmenu_btn02_pane

0x85d5,	// (0x000a1c9a) cmail_ddmenu_btn03_pane_ParamLimits

0x85d5,	// (0x000a1c9a) cmail_ddmenu_btn03_pane

0x85fd,	// (0x000a1cc2) main_sp_fs_ctrlbar_pane_ParamLimits

0x8613,	// (0x000a1cd8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8bfc,	// (0x000a22c1) list_cmail_body_pane_ParamLimits

0xe8bd,	// (0x000a7f82) bg_button_pane_cp12

0xe8c6,	// (0x000a7f8b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8c6,	// (0x000a7f8b) list_single_cmail_header_detail_pane_g3

0xa132,	// (0x000a37f7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa132,	// (0x000a37f7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb1d,	// (0x000a91e2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb1d,	// (0x000a91e2) list_single_cmail_header_detail_pane_t

0xa18a,	// (0x000a384f) phacti_term_pane_t2_ParamLimits

0xa18a,	// (0x000a384f) phacti_term_pane_t2

0x0001,

0xfb22,	// (0x000a91e7) phacti_term_pane_t_ParamLimits

0xfb22,	// (0x000a91e7) phacti_term_pane_t

0xeb1e,	// (0x000a81e3) aid_size_list_single_double

0x8fe5,	// (0x000a26aa) popup_ezdial_listscroll_window

0x9009,	// (0x000a26ce) popup_number_entry_window_cp01

0xaab5,	// (0x000a417a) bg_popup_call_pane_cp09

0xeb2a,	// (0x000a81ef) ezdial_list_pane

0xeb32,	// (0x000a81f7) scroll_pane_cp23

0xcb6d,	// (0x000a6232) bg_button_pane_cp028_ParamLimits

0xcb6d,	// (0x000a6232) bg_button_pane_cp028

0x9017,	// (0x000a26dc) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9017,	// (0x000a26dc) cmail_ddmenu_btn01_pane_g1

0x9027,	// (0x000a26ec) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9027,	// (0x000a26ec) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb91,	// (0x000a9256) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb91,	// (0x000a9256) cmail_ddmenu_btn01_pane_g

0xeb3a,	// (0x000a81ff) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3a,	// (0x000a81ff) cmail_ddmenu_btn01_pane_t1

0xc980,	// (0x000a6045) bg_button_pane_cp029_ParamLimits

0xc980,	// (0x000a6045) bg_button_pane_cp029

0x9027,	// (0x000a26ec) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9027,	// (0x000a26ec) cmail_ddmenu_btn02_pane_g1

0x903f,	// (0x000a2704) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x903f,	// (0x000a2704) cmail_ddmenu_btn02_pane_t1

0xe58b,	// (0x000a7c50) bg_button_pane_cp031_ParamLimits

0xe58b,	// (0x000a7c50) bg_button_pane_cp031

0x9027,	// (0x000a26ec) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9027,	// (0x000a26ec) cmail_ddmenu_btn03_pane_g1

0x903f,	// (0x000a2704) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x903f,	// (0x000a2704) cmail_ddmenu_btn03_pane_t1

0x5eff,	// (0x0009f5c4) cell_dialer2_keypad_pane_t1_ParamLimits

0x5f19,	// (0x0009f5de) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5f19,	// (0x0009f5de) cell_dialer2_keypad_pane_t1_copy1

0x7e7a,	// (0x000a153f) ncimui_group_button_pane

0xa4af,	// (0x000a3b74) main_sp_fs_calendar_pane_ParamLimits

0x8c24,	// (0x000a22e9) list_single_cmail_header_caption_pane_ParamLimits

0xa1a7,	// (0x000a386c) aid_recal_txt_sm_pane

0x9c3d,	// (0x000a3302) mian_recal_day_pane

0xa1e1,	// (0x000a38a6) popup_sp_fs_cale_preview_window_ParamLimits

0xeb4f,	// (0x000a8214) list_recal_day_pane

0xa2ed,	// (0x000a39b2) list_single_recal_day_pane_ParamLimits

0xa2ed,	// (0x000a39b2) list_single_recal_day_pane

0xeb76,	// (0x000a823b) list_single_recal_day_pane_g1_ParamLimits

0xeb76,	// (0x000a823b) list_single_recal_day_pane_g1

0xa2ff,	// (0x000a39c4) list_single_recal_day_pane_g2_ParamLimits

0xa2ff,	// (0x000a39c4) list_single_recal_day_pane_g2

0xa30b,	// (0x000a39d0) list_single_recal_day_pane_g3_ParamLimits

0xa30b,	// (0x000a39d0) list_single_recal_day_pane_g3

0x9063,	// (0x000a2728) list_single_recal_day_pane_g4_ParamLimits

0x9063,	// (0x000a2728) list_single_recal_day_pane_g4

0xa317,	// (0x000a39dc) list_single_recal_day_pane_g5_ParamLimits

0xa317,	// (0x000a39dc) list_single_recal_day_pane_g5

0xa323,	// (0x000a39e8) list_single_recal_day_pane_g6_ParamLimits

0xa323,	// (0x000a39e8) list_single_recal_day_pane_g6

0x0004,

0xfba0,	// (0x000a9265) list_single_recal_day_pane_g_ParamLimits

0xfba0,	// (0x000a9265) list_single_recal_day_pane_g

0xa4c5,	// (0x000a3b8a) list_single_recal_day_pane_t1

0xa4d7,	// (0x000a3b9c) list_single_recal_day_pane_t2

0x0001,

0xfbab,	// (0x000a9270) list_single_recal_day_pane_t

0x907b,	// (0x000a2740) ncimui_query_button_pane_ParamLimits

0x907b,	// (0x000a2740) ncimui_query_button_pane

0x908b,	// (0x000a2750) ncimui_query_button_pane_t1_ParamLimits

0x908b,	// (0x000a2750) ncimui_query_button_pane_t1

0xeb82,	// (0x000a8247) ncimui_query_button_pane_t2_ParamLimits

0xeb82,	// (0x000a8247) ncimui_query_button_pane_t2

0x0001,

0xfbb0,	// (0x000a9275) ncimui_query_button_pane_t_ParamLimits

0xfbb0,	// (0x000a9275) ncimui_query_button_pane_t

0x909e,	// (0x000a2763) query_button_pane_ParamLimits

0x909e,	// (0x000a2763) query_button_pane

0x9c3d,	// (0x000a3302) bg_button_pane_cp0028

0xeb95,	// (0x000a825a) query_button_pane_t1

0x4289,	// (0x0009d94e) main_tport_pane_ParamLimits

0x8b06,	// (0x000a21cb) bg_popup_window_pane_cp01_ParamLimits

0x8b06,	// (0x000a21cb) bg_popup_window_pane_cp01

0x8b14,	// (0x000a21d9) heading_pane_cp08_ParamLimits

0x8b14,	// (0x000a21d9) heading_pane_cp08

0x8b22,	// (0x000a21e7) heading_pane_cp07_ParamLimits

0x8b22,	// (0x000a21e7) heading_pane_cp07

0x8b91,	// (0x000a2256) cell_tport_appsw_pane_g2

0x0002,

0xfb0a,	// (0x000a91cf) cell_tport_appsw_pane_g

0x9e2d,	// (0x000a34f2) input_candi_list_open_g1

0xaf01,	// (0x000a45c6) list_cale_time_pane_g6_ParamLimits

0xaf01,	// (0x000a45c6) list_cale_time_pane_g6

0x4d08,	// (0x0009e3cd) aid_size_touch_calib_1_ParamLimits

0x4d08,	// (0x0009e3cd) aid_size_touch_calib_1

0x4d14,	// (0x0009e3d9) aid_size_touch_calib_2_ParamLimits

0x4d14,	// (0x0009e3d9) aid_size_touch_calib_2

0x4d22,	// (0x0009e3e7) aid_size_touch_calib_3_ParamLimits

0x4d22,	// (0x0009e3e7) aid_size_touch_calib_3

0x4d32,	// (0x0009e3f7) aid_size_touch_calib_4_ParamLimits

0x4d32,	// (0x0009e3f7) aid_size_touch_calib_4

0x4d40,	// (0x0009e405) main_touch_calib_button_group_pane_ParamLimits

0x4d40,	// (0x0009e405) main_touch_calib_button_group_pane

0x4d4e,	// (0x0009e413) main_touch_calib_pane_g1_ParamLimits

0x4d5a,	// (0x0009e41f) main_touch_calib_pane_g2_ParamLimits

0x4d66,	// (0x0009e42b) main_touch_calib_pane_g3_ParamLimits

0x4d72,	// (0x0009e437) main_touch_calib_pane_g4_ParamLimits

0xf5e5,	// (0x000a8caa) main_touch_calib_pane_g_ParamLimits

0x4d7e,	// (0x0009e443) main_touch_calib_pane_t1_ParamLimits

0x4d97,	// (0x0009e45c) main_touch_calib_pane_t2_ParamLimits

0x4db0,	// (0x0009e475) main_touch_calib_pane_t3_ParamLimits

0x4dc6,	// (0x0009e48b) main_touch_calib_pane_t4_ParamLimits

0x4ddc,	// (0x0009e4a1) main_touch_calib_pane_t5_ParamLimits

0xf5ee,	// (0x000a8cb3) main_touch_calib_pane_t_ParamLimits

0xd0cd,	// (0x000a6792) list_single_fp_cale_pane_g3_ParamLimits

0xd0cd,	// (0x000a6792) list_single_fp_cale_pane_g3

0x426d,	// (0x0009d932) bg_button_pane_cp012_ParamLimits

0x426d,	// (0x0009d932) bg_vkb2_func_pane_cp03_ParamLimits

0x6e34,	// (0x000a04f9) cell_vitu2_function_top_pane_g1_ParamLimits

0x426d,	// (0x0009d932) bg_vkb2_func_pane_cp04_ParamLimits

0x7e02,	// (0x000a14c7) main_ncimui_button_group_pane_ParamLimits

0x7e02,	// (0x000a14c7) main_ncimui_button_group_pane

0x7e68,	// (0x000a152d) main_ncimui_pane_t3_ParamLimits

0x7e68,	// (0x000a152d) main_ncimui_pane_t3

0xe953,	// (0x000a8018) phacti_button_group_pane

0xeb1e,	// (0x000a81e3) aid_size_list_single_double_ParamLimits

0x8fe5,	// (0x000a26aa) popup_ezdial_listscroll_window_ParamLimits

0x9009,	// (0x000a26ce) popup_number_entry_window_cp01_ParamLimits

0x90ab,	// (0x000a2770) phacti_button_pane_ParamLimits

0x90ab,	// (0x000a2770) phacti_button_pane

0x9c3d,	// (0x000a3302) bg_button_pane_cp14

0xeba3,	// (0x000a8268) phacti_button_pane_t1

0x90bc,	// (0x000a2781) main_touch_calib_button_pane_ParamLimits

0x90bc,	// (0x000a2781) main_touch_calib_button_pane

0xa8e7,	// (0x000a3fac) bg_button_pane_cp18_ParamLimits

0xa8e7,	// (0x000a3fac) bg_button_pane_cp18

0xebb1,	// (0x000a8276) main_touch_calib_button_pane_t1_ParamLimits

0xebb1,	// (0x000a8276) main_touch_calib_button_pane_t1

0xebc7,	// (0x000a828c) main_touch_calib_button_pane_t2_ParamLimits

0xebc7,	// (0x000a828c) main_touch_calib_button_pane_t2

0x0001,

0xfbb5,	// (0x000a927a) main_touch_calib_button_pane_t_ParamLimits

0xfbb5,	// (0x000a927a) main_touch_calib_button_pane_t

0x9c3d,	// (0x000a3302) cell_ncimui_button_pane

0x9c3d,	// (0x000a3302) bg_button_pane_cp032

0xebe5,	// (0x000a82aa) cell_ncimui_button_pane_t1

0x5f75,	// (0x0009f63a) image3_infobar_pane_ParamLimits

0x5f75,	// (0x0009f63a) image3_infobar_pane

0x8225,	// (0x000a18ea) fs_bigclock_status_pane_ParamLimits

0x8225,	// (0x000a18ea) fs_bigclock_status_pane

0x8232,	// (0x000a18f7) main_fs_bigclock_clock_pane_ParamLimits

0x8232,	// (0x000a18f7) main_fs_bigclock_clock_pane

0x8246,	// (0x000a190b) main_fs_bigclock_indi_pane_ParamLimits

0x8246,	// (0x000a190b) main_fs_bigclock_indi_pane

0x826e,	// (0x000a1933) main_fs_bigclock_swipe_pane_ParamLimits

0x826e,	// (0x000a1933) main_fs_bigclock_swipe_pane

0x9c3d,	// (0x000a3302) main_fs_clock_dumped_data

0xe453,	// (0x000a7b18) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe453,	// (0x000a7b18) list_single_fs_bigclock_indicator_pane_g1

0xe46f,	// (0x000a7b34) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe46f,	// (0x000a7b34) list_single_fs_bigclock_indicator_pane_g2

0xe489,	// (0x000a7b4e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe489,	// (0x000a7b4e) list_single_fs_bigclock_indicator_pane_g3

0xe4a3,	// (0x000a7b68) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4a3,	// (0x000a7b68) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0a67,	// (0x0009a12c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0a67,	// (0x0009a12c) list_single_fs_bigclock_indicator_pane_g

0xe4ce,	// (0x000a7b93) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4ce,	// (0x000a7b93) list_single_fs_bigclock_indicator_pane_t1

0xe4f6,	// (0x000a7bbb) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4f6,	// (0x000a7bbb) list_single_fs_bigclock_indicator_pane_t2

0xe51e,	// (0x000a7be3) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe51e,	// (0x000a7be3) list_single_fs_bigclock_indicator_pane_t3

0xe546,	// (0x000a7c0b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe546,	// (0x000a7c0b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0a72,	// (0x0009a137) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0a72,	// (0x0009a137) list_single_fs_bigclock_indicator_pane_t

0xebf3,	// (0x000a82b8) image3_infobar_fav_pane_ParamLimits

0xebf3,	// (0x000a82b8) image3_infobar_fav_pane

0xec03,	// (0x000a82c8) image3_infobar_loc_pane_ParamLimits

0xec03,	// (0x000a82c8) image3_infobar_loc_pane

0xec17,	// (0x000a82dc) image3_infobar_time_pane_ParamLimits

0xec17,	// (0x000a82dc) image3_infobar_time_pane

0xcd88,	// (0x000a644d) image3_infobar_time_pane_g1

0xec27,	// (0x000a82ec) image3_infobar_time_pane_t1

0xcd88,	// (0x000a644d) image3_infobar_loc_pane_g1

0xec35,	// (0x000a82fa) image3_infobar_loc_pane_g2

0x0001,

0xfbba,	// (0x000a927f) image3_infobar_loc_pane_g

0xec3d,	// (0x000a8302) image3_infobar_loc_pane_t1

0xcd88,	// (0x000a644d) image3_infobar_fav_pane_g1

0xec4b,	// (0x000a8310) image3_infobar_fav_pane_g2

0x0001,

0xfbbf,	// (0x000a9284) image3_infobar_fav_pane_g

0xec53,	// (0x000a8318) fs_bigclock_status_battery_pane

0xec5c,	// (0x000a8321) fs_bigclock_status_signal_pane

0xec65,	// (0x000a832a) fs_bigclock_status_title_pane

0xec6e,	// (0x000a8333) fs_bigclock_status_signal_pane_g1

0xec77,	// (0x000a833c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfbc4,	// (0x000a9289) fs_bigclock_status_signal_pane_g

0xec7f,	// (0x000a8344) fs_bigclock_status_battery_pane_g1

0xec88,	// (0x000a834d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfbc9,	// (0x000a928e) fs_bigclock_status_battery_pane_g

0xec90,	// (0x000a8355) fs_bigclock_status_title_pane_t1

0x90cc,	// (0x000a2791) main_fs_bigclock_clock_pane_g1

0x90cc,	// (0x000a2791) main_fs_bigclock_clock_pane_g2

0x90d9,	// (0x000a279e) main_fs_bigclock_clock_pane_g3

0x90d9,	// (0x000a279e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfbce,	// (0x000a9293) main_fs_bigclock_clock_pane_g

0x90e5,	// (0x000a27aa) main_fs_bigclock_clock_pane_t1

0x90f8,	// (0x000a27bd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbd7,	// (0x000a929c) main_fs_bigclock_clock_pane_t

0xec9e,	// (0x000a8363) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec9e,	// (0x000a8363) list_single_fs_bigclock_indicator_pane

0xecaf,	// (0x000a8374) list_single_fs_bigclock_pane_ParamLimits

0xecaf,	// (0x000a8374) list_single_fs_bigclock_pane

0xecd5,	// (0x000a839a) main_fs_bigclock_indicator_pane_t1

0xece4,	// (0x000a83a9) list_single_fs_bigclock_pane_g1

0xecec,	// (0x000a83b1) list_single_fs_bigclock_pane_t1

0xcd88,	// (0x000a644d) main_fs_bigclock_swipe_pane_g1

0xed2f,	// (0x000a83f4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfbe8,	// (0x000a92ad) main_fs_bigclock_swipe_pane_g

0xed37,	// (0x000a83fc) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed37,	// (0x000a83fc) main_fs_bigclock_swipe_pane_t1

0x3282,	// (0x0009c947) call_type_pane_ParamLimits

0x9c3d,	// (0x000a3302) main_btmg_pane

0xa256,	// (0x000a391b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa256,	// (0x000a391b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb64,	// (0x000a9229) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb64,	// (0x000a9229) list_single_cale_mrui_row_pane_g

0xa2dc,	// (0x000a39a1) list_recal_vselct_arw_lo_pane

0xeb6e,	// (0x000a8233) list_recal_vselct_arw_up_pane

0xa2e4,	// (0x000a39a9) list_recal_vselct_pane

0x914f,	// (0x000a2814) btmg_button_pane

0x915b,	// (0x000a2820) main_btmg_pane_g1

0x9c3d,	// (0x000a3302) bg_button_pane_cp044

0xed54,	// (0x000a8419) btmg_button_pane_t1

0xc96c,	// (0x000a6031) aid_listscroll_gen

0xa4af,	// (0x000a3b74) main_cntbar_detail_pane

0xe89f,	// (0x000a7f64) list_cmail_folder_pane

0xc55d,	// (0x000a5c22) sp_fs_scroll_pane_cp03_ParamLimits

0x9163,	// (0x000a2828) list_single_fs_dyc_pane_cp01_ParamLimits

0x9163,	// (0x000a2828) list_single_fs_dyc_pane_cp01

0xed62,	// (0x000a8427) aid_size_cmail_indent

0xa4e9,	// (0x000a3bae) list_single_dyc_row_pane_cp01

0x91ab,	// (0x000a2870) cntbar_detail_list_pane_ParamLimits

0x91ab,	// (0x000a2870) cntbar_detail_list_pane

0x91e5,	// (0x000a28aa) main_cntbar_detail_cont_pane_ParamLimits

0x91e5,	// (0x000a28aa) main_cntbar_detail_cont_pane

0x31a7,	// (0x0009c86c) scroll_pane_cp032_ParamLimits

0x31a7,	// (0x0009c86c) scroll_pane_cp032

0x91f1,	// (0x000a28b6) cntbar_detail_list_event_pane_ParamLimits

0x91f1,	// (0x000a28b6) cntbar_detail_list_event_pane

0x91b7,	// (0x000a287c) cntbar_detail_list_shct_pane

0xad7a,	// (0x000a443f) aid_list_gen

0xed6b,	// (0x000a8430) aid_scroll

0xed74,	// (0x000a8439) aid_size_touch_scroll_bar

0x759f,	// (0x000a0c64) aid_list_double

0x9205,	// (0x000a28ca) aid_list_single

0x758d,	// (0x000a0c52) aid_list_single_lg

0x920e,	// (0x000a28d3) aid_list_z_g_a_sm

0x9216,	// (0x000a28db) aid_list_z_g_d

0x921e,	// (0x000a28e3) aid_txt_z_prm

0x922c,	// (0x000a28f1) aid_txt_z_prm_cp01

0x923a,	// (0x000a28ff) aid_txt_z_sec

0x9248,	// (0x000a290d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9248,	// (0x000a290d) main_cntbar_detail_cont_pane_g1

0x9255,	// (0x000a291a) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9255,	// (0x000a291a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbed,	// (0x000a92b2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbed,	// (0x000a92b2) main_cntbar_detail_cont_pane_g

0xed7d,	// (0x000a8442) main_cntbar_detail_cont_pane_t1

0xed8b,	// (0x000a8450) main_cntbar_detail_cont_pane_t2

0xed99,	// (0x000a845e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfbf2,	// (0x000a92b7) main_cntbar_detail_cont_pane_t

0x9261,	// (0x000a2926) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9261,	// (0x000a2926) cell_cntbar_detail_list_shct_pane

0xeda7,	// (0x000a846c) cntbar_detail_list_shct_pane_g1

0xedb0,	// (0x000a8475) cntbar_detail_list_shct_pane_g2

0x0001,

0xfbf9,	// (0x000a92be) cntbar_detail_list_shct_pane_g

0x9275,	// (0x000a293a) cntbar_detail_list_event_pane_g1_ParamLimits

0x9275,	// (0x000a293a) cntbar_detail_list_event_pane_g1

0x9281,	// (0x000a2946) cntbar_detail_list_event_pane_g2_ParamLimits

0x9281,	// (0x000a2946) cntbar_detail_list_event_pane_g2

0x0005,

0xfbfe,	// (0x000a92c3) cntbar_detail_list_event_pane_g_ParamLimits

0xfbfe,	// (0x000a92c3) cntbar_detail_list_event_pane_g

0x92ed,	// (0x000a29b2) cntbar_detail_list_event_pane_t1_ParamLimits

0x92ed,	// (0x000a29b2) cntbar_detail_list_event_pane_t1

0x9302,	// (0x000a29c7) cntbar_detail_list_event_pane_t2_ParamLimits

0x9302,	// (0x000a29c7) cntbar_detail_list_event_pane_t2

0x0002,

0xfc0b,	// (0x000a92d0) cntbar_detail_list_event_pane_t_ParamLimits

0xfc0b,	// (0x000a92d0) cntbar_detail_list_event_pane_t

0xcd88,	// (0x000a644d) cell_cntbar_detail_list_shct_pane_g1

0xb4d8,	// (0x000a4b9d) navi_pane_mv_g3

0xa4af,	// (0x000a3b74) main_cntbar_detail_pane_ParamLimits

0x9c3d,	// (0x000a3302) main_notif_wgt_pane

0x5bff,	// (0x0009f2c4) aid_tch_main_mp4_pane_g4

0x5e5e,	// (0x0009f523) popup_slider_window_cp02

0xa2d2,	// (0x000a3997) list_recal_day_event_pane

0x918b,	// (0x000a2850) cntbar_detail_btn_pane_ParamLimits

0x918b,	// (0x000a2850) cntbar_detail_btn_pane

0x919b,	// (0x000a2860) cntbar_detail_btn_pane_cp01_ParamLimits

0x919b,	// (0x000a2860) cntbar_detail_btn_pane_cp01

0x91b7,	// (0x000a287c) cntbar_detail_list_shct_pane_ParamLimits

0x91c3,	// (0x000a2888) cntbar_detail_pane_g1_ParamLimits

0x91c3,	// (0x000a2888) cntbar_detail_pane_g1

0x91cf,	// (0x000a2894) cntbar_detail_pane_t1_ParamLimits

0x91cf,	// (0x000a2894) cntbar_detail_pane_t1

0x928d,	// (0x000a2952) cntbar_detail_list_event_pane_g3_ParamLimits

0x928d,	// (0x000a2952) cntbar_detail_list_event_pane_g3

0x92a5,	// (0x000a296a) cntbar_detail_list_event_pane_g4_ParamLimits

0x92a5,	// (0x000a296a) cntbar_detail_list_event_pane_g4

0x92bd,	// (0x000a2982) cntbar_detail_list_event_pane_g5_ParamLimits

0x92bd,	// (0x000a2982) cntbar_detail_list_event_pane_g5

0x92d5,	// (0x000a299a) cntbar_detail_list_event_pane_g6_ParamLimits

0x92d5,	// (0x000a299a) cntbar_detail_list_event_pane_g6

0x9317,	// (0x000a29dc) cntbar_detail_list_event_pane_t3_ParamLimits

0x9317,	// (0x000a29dc) cntbar_detail_list_event_pane_t3

0x9329,	// (0x000a29ee) popup_notif_wgt_window_ParamLimits

0x9329,	// (0x000a29ee) popup_notif_wgt_window

0x9339,	// (0x000a29fe) popup_submenu_window_cp01_ParamLimits

0x9339,	// (0x000a29fe) popup_submenu_window_cp01

0xaab5,	// (0x000a417a) bg_popup_window_pane_cp10

0xedb9,	// (0x000a847e) listscroll_notif_wgt_pane

0xedcb,	// (0x000a8490) list_notif_wgt_window

0xedd4,	// (0x000a8499) scroll_pane_cp033

0x9347,	// (0x000a2a0c) list_notif_wgt_row_pane_ParamLimits

0x9347,	// (0x000a2a0c) list_notif_wgt_row_pane

0xeddd,	// (0x000a84a2) aid_size_list_notif_wgt_del

0xedea,	// (0x000a84af) list_notif_wgt_row_pane_g1

0xedf6,	// (0x000a84bb) list_notif_wgt_row_pane_g2

0xee05,	// (0x000a84ca) list_notif_wgt_row_pane_g3

0x0002,

0xfc12,	// (0x000a92d7) list_notif_wgt_row_pane_g

0xee12,	// (0x000a84d7) list_notif_wgt_row_pane_t1

0xee28,	// (0x000a84ed) list_notif_wgt_row_pane_t2

0xee3a,	// (0x000a84ff) list_notif_wgt_row_pane_t3

0x0002,

0xfc19,	// (0x000a92de) list_notif_wgt_row_pane_t

0xd974,	// (0x000a7039) list_recal_day_event_pane_g1

0xee4c,	// (0x000a8511) list_recal_day_event_pane_t1

0x9c3d,	// (0x000a3302) bg_button_pane_cp045

0x9359,	// (0x000a2a1e) cntbar_detail_btn_pane_t1

0xc980,	// (0x000a6045) main_callh_pane_ParamLimits

0xc980,	// (0x000a6045) main_callh_pane

0x9c3d,	// (0x000a3302) main_coverflow0_pane

0x9c3d,	// (0x000a3302) main_wgtman_pane

0x8286,	// (0x000a194b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8286,	// (0x000a194b) main_fs_bigclock_unlock_btn_pane

0x8b89,	// (0x000a224e) bg_button_pane_cp16

0x8b99,	// (0x000a225e) cell_tport_appsw_pane_g3

0x9367,	// (0x000a2a2c) cf0_flow_pane_ParamLimits

0x9367,	// (0x000a2a2c) cf0_flow_pane

0xee5b,	// (0x000a8520) listscroll_cf0_pane

0xee66,	// (0x000a852b) main_cf0_pane_g1

0x9376,	// (0x000a2a3b) main_cf0_pane_t1_ParamLimits

0x9376,	// (0x000a2a3b) main_cf0_pane_t1

0x938a,	// (0x000a2a4f) main_cf0_pane_t2_ParamLimits

0x938a,	// (0x000a2a4f) main_cf0_pane_t2

0x0001,

0xfc25,	// (0x000a92ea) main_cf0_pane_t_ParamLimits

0xfc25,	// (0x000a92ea) main_cf0_pane_t

0xee78,	// (0x000a853d) scroll_pane_cp11

0x939e,	// (0x000a2a63) cf0_flow_pane_g1

0x93a6,	// (0x000a2a6b) cf0_flow_pane_g2

0x0001,

0xfc2a,	// (0x000a92ef) cf0_flow_pane_g

0x93ae,	// (0x000a2a73) cf0_flow_pane_t1

0x9c3d,	// (0x000a3302) main_call6_pane

0x9c3d,	// (0x000a3302) main_calllock_pane

0x93bc,	// (0x000a2a81) call6_btn_grp_pane_ParamLimits

0x93bc,	// (0x000a2a81) call6_btn_grp_pane

0x93cb,	// (0x000a2a90) call6_pane_g1_ParamLimits

0x93cb,	// (0x000a2a90) call6_pane_g1

0x93db,	// (0x000a2aa0) popup_call6_1st_window_ParamLimits

0x93db,	// (0x000a2aa0) popup_call6_1st_window

0x93e9,	// (0x000a2aae) popup_call6_2nd_window_ParamLimits

0x93e9,	// (0x000a2aae) popup_call6_2nd_window

0x93f7,	// (0x000a2abc) cell_call6_btn_pane_ParamLimits

0x93f7,	// (0x000a2abc) cell_call6_btn_pane

0xaab5,	// (0x000a417a) bg_popup_call2_in_pane_cp03

0xee83,	// (0x000a8548) popup_call6_1st_window_g1

0xee8b,	// (0x000a8550) popup_call6_1st_window_g2

0xee93,	// (0x000a8558) popup_call6_1st_window_g3

0x0002,

0xfc2f,	// (0x000a92f4) popup_call6_1st_window_g

0xee9b,	// (0x000a8560) popup_call6_1st_window_t1

0xeeaa,	// (0x000a856f) popup_call6_1st_window_t2

0xeeb8,	// (0x000a857d) popup_call6_1st_window_t3

0x0002,

0xfc36,	// (0x000a92fb) popup_call6_1st_window_t

0xaab5,	// (0x000a417a) bg_popup_call2_in_pane_cp04

0xee83,	// (0x000a8548) popup_call6_2nd_window_g1

0xee8b,	// (0x000a8550) popup_call6_2nd_window_g2

0xee93,	// (0x000a8558) popup_call6_2nd_window_g3

0x0002,

0xfc2f,	// (0x000a92f4) popup_call6_2nd_window_g

0xee9b,	// (0x000a8560) popup_call6_2nd_window_t1

0x1071,	// (0x0009a736) bg_button_pane_cp15

0x9406,	// (0x000a2acb) cell_call6_btn_pane_g1

0x940f,	// (0x000a2ad4) cell_call6_btn_pane_t1

0x941e,	// (0x000a2ae3) listscroll_wgtman_pane_ParamLimits

0x941e,	// (0x000a2ae3) listscroll_wgtman_pane

0x943a,	// (0x000a2aff) wgtman_btn_pane_ParamLimits

0x943a,	// (0x000a2aff) wgtman_btn_pane

0xb2ec,	// (0x000a49b1) aid_scroll_copy1

0xeec6,	// (0x000a858b) list_wgtman_pane

0x946f,	// (0x000a2b34) wgtman_btn_pane_g1_ParamLimits

0x946f,	// (0x000a2b34) wgtman_btn_pane_g1

0x9497,	// (0x000a2b5c) wgtman_btn_pane_t1_ParamLimits

0x9497,	// (0x000a2b5c) wgtman_btn_pane_t1

0xeed0,	// (0x000a8595) wgtman_btn_pane_t2_ParamLimits

0xeed0,	// (0x000a8595) wgtman_btn_pane_t2

0x0001,

0xfc3d,	// (0x000a9302) wgtman_btn_pane_t_ParamLimits

0xfc3d,	// (0x000a9302) wgtman_btn_pane_t

0x94ce,	// (0x000a2b93) listrow_wgtman_pane_ParamLimits

0x94ce,	// (0x000a2b93) listrow_wgtman_pane

0x94ea,	// (0x000a2baf) listrow_wgtman_pane_g1

0x94f7,	// (0x000a2bbc) listrow_wgtman_pane_g2

0x0001,

0xfc42,	// (0x000a9307) listrow_wgtman_pane_g

0x9515,	// (0x000a2bda) listrow_wgtman_pane_t1

0x952d,	// (0x000a2bf2) listrow_wgtman_pane_t2

0x0001,

0xfc47,	// (0x000a930c) listrow_wgtman_pane_t

0x9553,	// (0x000a2c18) wait_bar_pane_cp09

0xeee7,	// (0x000a85ac) main_calllock_btn_pane

0xeef1,	// (0x000a85b6) main_calllock_pane_g1

0x9c3d,	// (0x000a3302) bg_button_pane_cp17

0xeefd,	// (0x000a85c2) main_calllock_btn_pane_g1

0xef06,	// (0x000a85cb) main_calllock_btn_pane_t1

0x9c3d,	// (0x000a3302) main_dialer3_pane

0x9c3d,	// (0x000a3302) main_fmrd2_pane

0xcd88,	// (0x000a644d) main_fs_bigclock_unlock_btn_pane_g1

0x956d,	// (0x000a2c32) main_fs_bigclock_unlock_btn_pane_t1

0x957b,	// (0x000a2c40) area_fmrd2_info_pane_ParamLimits

0x957b,	// (0x000a2c40) area_fmrd2_info_pane

0x9589,	// (0x000a2c4e) area_fmrd2_visual_pane_ParamLimits

0x9589,	// (0x000a2c4e) area_fmrd2_visual_pane

0x9597,	// (0x000a2c5c) fmrd2_indi_pane_ParamLimits

0x9597,	// (0x000a2c5c) fmrd2_indi_pane

0x95a4,	// (0x000a2c69) area_fmrd2_visual_pane_g1

0x95ac,	// (0x000a2c71) area_fmrd2_visual_pane_t1

0x95bc,	// (0x000a2c81) area_fmrd2_visual_pane_t2

0x95cc,	// (0x000a2c91) area_fmrd2_visual_pane_t3

0x0002,

0xfc51,	// (0x000a9316) area_fmrd2_visual_pane_t

0x95dc,	// (0x000a2ca1) area_fmrd2_info_pane_g1

0x95e4,	// (0x000a2ca9) area_fmrd2_info_pane_t1

0x95f4,	// (0x000a2cb9) area_fmrd2_info_pane_t2

0x9604,	// (0x000a2cc9) area_fmrd2_info_pane_t3

0x9614,	// (0x000a2cd9) area_fmrd2_info_pane_t4

0x0003,

0xfc58,	// (0x000a931d) area_fmrd2_info_pane_t

0x9622,	// (0x000a2ce7) fmrd2_indi_pane_t1

0x9632,	// (0x000a2cf7) fmrd2_indi_pane_t2

0x9642,	// (0x000a2d07) fmrd2_indi_pane_t3

0x0002,

0xfc61,	// (0x000a9326) fmrd2_indi_pane_t

0xe4b2,	// (0x000a7b77) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4b2,	// (0x000a7b77) list_single_fs_bigclock_indicator_pane_g5

0xe563,	// (0x000a7c28) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe563,	// (0x000a7c28) list_single_fs_bigclock_indicator_pane_t5

0x8d39,	// (0x000a23fe) aid_cell_bcale_month_pane_ParamLimits

0x8d39,	// (0x000a23fe) aid_cell_bcale_month_pane

0x8d57,	// (0x000a241c) bcale_month_pane_ParamLimits

0x8d57,	// (0x000a241c) bcale_month_pane

0x8d75,	// (0x000a243a) bcale_preview_pane_ParamLimits

0x8d75,	// (0x000a243a) bcale_preview_pane

0xecec,	// (0x000a83b1) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0b,	// (0x000a83d0) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0b,	// (0x000a83d0) list_single_fs_bigclock_pane_t2

0x0001,

0xfbe3,	// (0x000a92a8) list_single_fs_bigclock_pane_t_ParamLimits

0xfbe3,	// (0x000a92a8) list_single_fs_bigclock_pane_t

0x9565,	// (0x000a2c2a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc4c,	// (0x000a9311) main_fs_bigclock_unlock_btn_pane_g

0x9650,	// (0x000a2d15) aid_dia3_key_size_ParamLimits

0x9650,	// (0x000a2d15) aid_dia3_key_size

0x965c,	// (0x000a2d21) aid_dia3_listrow_size_ParamLimits

0x965c,	// (0x000a2d21) aid_dia3_listrow_size

0x966c,	// (0x000a2d31) dia3_keypad_fun_pane_ParamLimits

0x966c,	// (0x000a2d31) dia3_keypad_fun_pane

0x967e,	// (0x000a2d43) dia3_keypad_num_pane_ParamLimits

0x967e,	// (0x000a2d43) dia3_keypad_num_pane

0x9690,	// (0x000a2d55) dia3_listscroll_pane_ParamLimits

0x9690,	// (0x000a2d55) dia3_listscroll_pane

0x969e,	// (0x000a2d63) dia3_numentry_pane_ParamLimits

0x969e,	// (0x000a2d63) dia3_numentry_pane

0xef15,	// (0x000a85da) dia3_list_pane

0xef20,	// (0x000a85e5) scroll_pane_cp12

0x9c3d,	// (0x000a3302) bg_dia3_numentry_pane

0x96ac,	// (0x000a2d71) dia3_numentry_pane_t1

0x96bb,	// (0x000a2d80) cell_dia3_key_num_pane

0x96c3,	// (0x000a2d88) cell_dia3_key0_fun_pane_ParamLimits

0x96c3,	// (0x000a2d88) cell_dia3_key0_fun_pane

0x96d0,	// (0x000a2d95) cell_dia3_key1_fun_pane_ParamLimits

0x96d0,	// (0x000a2d95) cell_dia3_key1_fun_pane

0x96dd,	// (0x000a2da2) dia3_listrow_pane

0xe205,	// (0x000a78ca) bg_dia3_numentry_pane_g1

0x9c3d,	// (0x000a3302) bg_button_pane_cp21

0xef2b,	// (0x000a85f0) cell_dia3_key_num_pane_t1

0xef39,	// (0x000a85fe) cell_dia3_key_num_pane_t2

0xef48,	// (0x000a860d) cell_dia3_key_num_pane_t3

0xef57,	// (0x000a861c) cell_dia3_key_num_pane_t4

0x0003,

0xfc68,	// (0x000a932d) cell_dia3_key_num_pane_t

0x9c3d,	// (0x000a3302) bg_button_pane_cp19

0x96ea,	// (0x000a2daf) cell_dia3_key0_fun_pane_g1

0x9c3d,	// (0x000a3302) bg_button_pane_cp20

0x96f2,	// (0x000a2db7) cell_dia3_key1_fun_pane_g1

0x96fa,	// (0x000a2dbf) area_left_week_number_pane

0x970d,	// (0x000a2dd2) area_top_day_name_pane

0x971b,	// (0x000a2de0) frame_month_view_pane

0xef66,	// (0x000a862b) grid_month_view_pane

0x9730,	// (0x000a2df5) cell_top_day_name_pane_ParamLimits

0x9730,	// (0x000a2df5) cell_top_day_name_pane

0x974a,	// (0x000a2e0f) cell_area_left_week_number_pane_ParamLimits

0x974a,	// (0x000a2e0f) cell_area_left_week_number_pane

0x976d,	// (0x000a2e32) cell_month_view_pane_ParamLimits

0x976d,	// (0x000a2e32) cell_month_view_pane

0xef74,	// (0x000a8639) frm_month_g1

0x9799,	// (0x000a2e5e) frm_month_g2

0x97aa,	// (0x000a2e6f) frm_month_g3

0x97bb,	// (0x000a2e80) frm_month_g4

0x97cc,	// (0x000a2e91) frm_month_g5

0x97df,	// (0x000a2ea4) frm_month_g6

0x97f2,	// (0x000a2eb7) frm_month_g7

0xef81,	// (0x000a8646) frm_month_g8

0x9805,	// (0x000a2eca) frm_month_g9

0x9812,	// (0x000a2ed7) frm_month_g10

0x981f,	// (0x000a2ee4) frm_month_g11

0x982c,	// (0x000a2ef1) frm_month_g12

0x9839,	// (0x000a2efe) frm_month_g13

0x9846,	// (0x000a2f0b) frm_month_g14

0x9855,	// (0x000a2f1a) frm_month_g15

0x9864,	// (0x000a2f29) frm_month_g16

0x000f,

0xfc71,	// (0x000a9336) frm_month_g

0xef8e,	// (0x000a8653) cell_top_day_name_pane_t1

0x9873,	// (0x000a2f38) cell_area_left_week_number_pane_g1

0x9882,	// (0x000a2f47) cell_area_left_week_number_pane_t1

0xcfcd,	// (0x000a6692) cell_month_view_pane_g1

0x9898,	// (0x000a2f5d) cell_month_view_pane_t1

0x9c3d,	// (0x000a3302) main_fps_pane

0xe7a9,	// (0x000a7e6e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7a9,	// (0x000a7e6e) cmail_ddmenu_btn02_pane_cp1

0xe7c5,	// (0x000a7e8a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7c5,	// (0x000a7e8a) cmail_ddmenu_btn02_pane_cp2

0x9033,	// (0x000a26f8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9033,	// (0x000a26f8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb96,	// (0x000a925b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb96,	// (0x000a925b) cmail_ddmenu_btn02_pane_g

0x9051,	// (0x000a2716) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9051,	// (0x000a2716) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb9b,	// (0x000a9260) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb9b,	// (0x000a9260) cmail_ddmenu_btn02_pane_t

0x98ae,	// (0x000a2f73) fps_text_pane_ParamLimits

0x98ae,	// (0x000a2f73) fps_text_pane

0x98bb,	// (0x000a2f80) main_fps_pane_g1_ParamLimits

0x98bb,	// (0x000a2f80) main_fps_pane_g1

0x98c9,	// (0x000a2f8e) wait_bar_pane_cp010_ParamLimits

0x98c9,	// (0x000a2f8e) wait_bar_pane_cp010

0x98d5,	// (0x000a2f9a) fps_text_pane_t1_ParamLimits

0x98d5,	// (0x000a2f9a) fps_text_pane_t1

0x6317,	// (0x0009f9dc) cam4_image_uncrop_pane_g1

0x6320,	// (0x0009f9e5) cam4_image_uncrop_pane_g2

0x6329,	// (0x0009f9ee) cam4_image_uncrop_pane_g3

0x6332,	// (0x0009f9f7) cam4_image_uncrop_pane_g4

0x0003,

0xf719,	// (0x000a8dde) cam4_image_uncrop_pane_g

0x96dd,	// (0x000a2da2) dia3_listrow_pane_ParamLimits

0x9c3d,	// (0x000a3302) main_phob2_pane

0x8b6b,	// (0x000a2230) cell_tport_appsw_pane_cp02_ParamLimits

0x8b6b,	// (0x000a2230) cell_tport_appsw_pane_cp02

0x8b7a,	// (0x000a223f) cell_tport_appsw_pane_cp03_ParamLimits

0x8b7a,	// (0x000a223f) cell_tport_appsw_pane_cp03

0x9c3d,	// (0x000a3302) phob2_contact_card_pane

0x9c3d,	// (0x000a3302) phob2_listscroll_pane

0xefa1,	// (0x000a8666) phob2_list_pane

0xefa9,	// (0x000a866e) scroll_pane_cp034

0x98ee,	// (0x000a2fb3) phob2_cc_data_pane_ParamLimits

0x98ee,	// (0x000a2fb3) phob2_cc_data_pane

0x9908,	// (0x000a2fcd) phob2_cc_listscroll_pane_ParamLimits

0x9908,	// (0x000a2fcd) phob2_cc_listscroll_pane

0x9922,	// (0x000a2fe7) list_double_large_graphic_phob2_pane_ParamLimits

0x9922,	// (0x000a2fe7) list_double_large_graphic_phob2_pane

0x9941,	// (0x000a3006) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9941,	// (0x000a3006) list_double_large_graphic_phob2_pane_g1

0x9957,	// (0x000a301c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9957,	// (0x000a301c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc92,	// (0x000a9357) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc92,	// (0x000a9357) list_double_large_graphic_phob2_pane_g

0x9963,	// (0x000a3028) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9963,	// (0x000a3028) list_double_large_graphic_phob2_pane_t1

0x9979,	// (0x000a303e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9979,	// (0x000a303e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc97,	// (0x000a935c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc97,	// (0x000a935c) list_double_large_graphic_phob2_pane_t

0x9c3d,	// (0x000a3302) list_highlight_pane_cp024

0x998e,	// (0x000a3053) phob2_cc_button_pane

0x9996,	// (0x000a305b) phob2_cc_data_pane_g1_ParamLimits

0x9996,	// (0x000a305b) phob2_cc_data_pane_g1

0x99a2,	// (0x000a3067) phob2_cc_data_pane_g2_ParamLimits

0x99a2,	// (0x000a3067) phob2_cc_data_pane_g2

0x0001,

0xfc9c,	// (0x000a9361) phob2_cc_data_pane_g_ParamLimits

0xfc9c,	// (0x000a9361) phob2_cc_data_pane_g

0x99ae,	// (0x000a3073) phob2_cc_data_pane_t1_ParamLimits

0x99ae,	// (0x000a3073) phob2_cc_data_pane_t1

0x99c0,	// (0x000a3085) phob2_cc_data_pane_t2_ParamLimits

0x99c0,	// (0x000a3085) phob2_cc_data_pane_t2

0x99d2,	// (0x000a3097) phob2_cc_data_pane_t3_ParamLimits

0x99d2,	// (0x000a3097) phob2_cc_data_pane_t3

0x0002,

0xfca1,	// (0x000a9366) phob2_cc_data_pane_t_ParamLimits

0xfca1,	// (0x000a9366) phob2_cc_data_pane_t

0xefb1,	// (0x000a8676) phob2_cc_list_pane_ParamLimits

0xefb1,	// (0x000a8676) phob2_cc_list_pane

0xdb4c,	// (0x000a7211) scroll_pane_cp035_ParamLimits

0xdb4c,	// (0x000a7211) scroll_pane_cp035

0xa4af,	// (0x000a3b74) bg_button_pane_cp033

0xefbd,	// (0x000a8682) phob2_cc_button_pane_g1

0xefc9,	// (0x000a868e) phob2_cc_button_pane_t1

0xefde,	// (0x000a86a3) phob2_cc_button_pane_t2

0x0001,

0xfca8,	// (0x000a936d) phob2_cc_button_pane_t

0x99e4,	// (0x000a30a9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99e4,	// (0x000a30a9) list_double_large_graphic_phob2_cc_pane

0x9a58,	// (0x000a311d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a58,	// (0x000a311d) list_double_large_graphic_phob2_cc_pane_g1

0x9a69,	// (0x000a312e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a69,	// (0x000a312e) list_double_large_graphic_phob2_cc_pane_g2

0x9a78,	// (0x000a313d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a78,	// (0x000a313d) list_double_large_graphic_phob2_cc_pane_g3

0x9a87,	// (0x000a314c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a87,	// (0x000a314c) list_double_large_graphic_phob2_cc_pane_g4

0x9a98,	// (0x000a315d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a98,	// (0x000a315d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfcad,	// (0x000a9372) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfcad,	// (0x000a9372) list_double_large_graphic_phob2_cc_pane_g

0x9aa7,	// (0x000a316c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9aa7,	// (0x000a316c) list_double_large_graphic_phob2_cc_pane_t1

0x9ad0,	// (0x000a3195) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ad0,	// (0x000a3195) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfcb8,	// (0x000a937d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfcb8,	// (0x000a937d) list_double_large_graphic_phob2_cc_pane_t

0xeff0,	// (0x000a86b5) list_highlight_pane_cp025_ParamLimits

0xeff0,	// (0x000a86b5) list_highlight_pane_cp025

0xa4af,	// (0x000a3b74) bg_button_pane_cp033_ParamLimits

0xefbd,	// (0x000a8682) phob2_cc_button_pane_g1_ParamLimits

0xefc9,	// (0x000a868e) phob2_cc_button_pane_t1_ParamLimits

0xefde,	// (0x000a86a3) phob2_cc_button_pane_t2_ParamLimits

0xfca8,	// (0x000a936d) phob2_cc_button_pane_t_ParamLimits

0x1065,	// (0x0009a72a) popup_wgtman_window

0xd838,	// (0x000a6efd) scroll_pane_cp038

0x9457,	// (0x000a2b1c) wgtman_btn_pane_cp_01_ParamLimits

0x9457,	// (0x000a2b1c) wgtman_btn_pane_cp_01

0xeffe,	// (0x000a86c3) wgtman_content_pane

0xf007,	// (0x000a86cc) wgtman_heading_pane

0x9c3d,	// (0x000a3302) bg_heading_pane_cp02

0xf010,	// (0x000a86d5) wgtman_heading_pane_g1

0xf018,	// (0x000a86dd) wgtman_heading_pane_t1

0xf026,	// (0x000a86eb) scroll_pane_cp036

0xf02e,	// (0x000a86f3) wgtman_list_pane

0xe691,	// (0x000a7d56) wgtman_list_pane_t1_ParamLimits

0xe691,	// (0x000a7d56) wgtman_list_pane_t1

0x6276,	// (0x0009f93b) cam4_grid_pane

0x704a,	// (0x000a070f) bg_button_pane_cp015_ParamLimits

0x705c,	// (0x000a0721) bg_button_pane_cp016_ParamLimits

0x706f,	// (0x000a0734) bg_button_pane_cp017_ParamLimits

0x70c5,	// (0x000a078a) popup_vitu2_query_window_g3_ParamLimits

0x70c5,	// (0x000a078a) popup_vitu2_query_window_g3

0x7180,	// (0x000a0845) popup_vitu2_query_window_t6_ParamLimits

0x7180,	// (0x000a0845) popup_vitu2_query_window_t6

0x71ab,	// (0x000a0870) popup_vitu2_query_window_t7_ParamLimits

0x71ab,	// (0x000a0870) popup_vitu2_query_window_t7

0xdb58,	// (0x000a721d) cam4_grid_pane_g1

0xdb61,	// (0x000a7226) cam4_grid_pane_g2

0xf036,	// (0x000a86fb) cam4_grid_pane_g3

0xf03f,	// (0x000a8704) cam4_grid_pane_g4

0x0003,

0xfcbd,	// (0x000a9382) cam4_grid_pane_g

0x1ee8,	// (0x0009b5ad) aid_placing_vt_slider_lsc_ParamLimits

0x2228,	// (0x0009b8ed) vidtel_button_pane_ParamLimits

0x2228,	// (0x0009b8ed) vidtel_button_pane

0x9c3d,	// (0x000a3302) bg_button_pane_cp034

0xf04a,	// (0x000a870f) vidtel_button_pane_g1

0xf052,	// (0x000a8717) vidtel_button_pane_t1

0xd952,	// (0x000a7017) aid_size_vtel_slider_touch

0xdb4c,	// (0x000a7211) scroll_pane_cp039

0x7fc3,	// (0x000a1688) ncim_query_button_pane_cp01_ParamLimits

0x7fe2,	// (0x000a16a7) ncimui_query_pane_g1_ParamLimits

0xa4af,	// (0x000a3b74) input_focus_pane_cp012_ParamLimits

0xe24b,	// (0x000a7910) ncim_query_entry_pane_t1_ParamLimits

0xdb4c,	// (0x000a7211) scroll_pane_cp039_ParamLimits

0xb3c3,	// (0x000a4a88) navi_pane_bcale_mc_g1

0xb3cb,	// (0x000a4a90) navi_pane_bcale_mc_t1

0xe80e,	// (0x000a7ed3) main_sp_fs_email_pane_g1

0xe81a,	// (0x000a7edf) main_sp_fs_email_pane_g2

0x0001,

0x0acf,	// (0x0009a194) main_sp_fs_email_pane_g

0xea70,	// (0x000a8135) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea70,	// (0x000a8135) list_single_cale_mrui_row_pane_g3

0x9071,	// (0x000a2736) list_single_recal_day_pane_g5_event_pane

0xa4bd,	// (0x000a3b82) list_single_recal_day_pane_g7

0xf068,	// (0x000a872d) list_recal_day_event_pane_cp01

0xf071,	// (0x000a8736) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x000a873e) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x000a8746) list_recal_vselct_pane_cp01

0xd974,	// (0x000a7039) list_recal_day_event_pane_cp01_g1

0xa4f2,	// (0x000a3bb7) list_recal_day_event_pane_cp01_t1

0xa4c5,	// (0x000a3b8a) list_single_recal_day_pane_t1_ParamLimits

0xa4d7,	// (0x000a3b9c) list_single_recal_day_pane_t2_ParamLimits

0xfbab,	// (0x000a9270) list_single_recal_day_pane_t_ParamLimits

0xa816,	// (0x000a3edb) bg_notes_pane_ParamLimits

0xa8c5,	// (0x000a3f8a) list_notes_pane_ParamLimits

0x13ca,	// (0x0009aa8f) scroll_pane_cp06_ParamLimits

0xa8e7,	// (0x000a3fac) main_notes_pane_ParamLimits

0x9c3d,	// (0x000a3302) main_welc_pane

0x9af9,	// (0x000a31be) main_welc_body_pane_ParamLimits

0x9af9,	// (0x000a31be) main_welc_body_pane

0x9b12,	// (0x000a31d7) main_welc_opti_pane_ParamLimits

0x9b12,	// (0x000a31d7) main_welc_opti_pane

0x9b45,	// (0x000a320a) main_welc_pane_t1_ParamLimits

0x9b45,	// (0x000a320a) main_welc_pane_t1

0x9b5f,	// (0x000a3224) main_welc_body_row_pane_ParamLimits

0x9b5f,	// (0x000a3224) main_welc_body_row_pane

0xe58b,	// (0x000a7c50) main_welc_opti_row_pane_ParamLimits

0xe58b,	// (0x000a7c50) main_welc_opti_row_pane

0xf08b,	// (0x000a8750) main_welc_opti_row_pane_g1

0x9b88,	// (0x000a324d) main_welc_opti_row_pane_t1

0xf093,	// (0x000a8758) main_welc_body_row_pane_t1

0xedc3,	// (0x000a8488) popup_notif_wgt_heading_pane

0xeddd,	// (0x000a84a2) aid_size_list_notif_wgt_del_ParamLimits

0xedea,	// (0x000a84af) list_notif_wgt_row_pane_g1_ParamLimits

0xedf6,	// (0x000a84bb) list_notif_wgt_row_pane_g2_ParamLimits

0xee05,	// (0x000a84ca) list_notif_wgt_row_pane_g3_ParamLimits

0xfc12,	// (0x000a92d7) list_notif_wgt_row_pane_g_ParamLimits

0xee12,	// (0x000a84d7) list_notif_wgt_row_pane_t1_ParamLimits

0xee28,	// (0x000a84ed) list_notif_wgt_row_pane_t2_ParamLimits

0xee3a,	// (0x000a84ff) list_notif_wgt_row_pane_t3_ParamLimits

0xfc19,	// (0x000a92de) list_notif_wgt_row_pane_t_ParamLimits

0x94ea,	// (0x000a2baf) listrow_wgtman_pane_g1_ParamLimits

0x94f7,	// (0x000a2bbc) listrow_wgtman_pane_g2_ParamLimits

0xfc42,	// (0x000a9307) listrow_wgtman_pane_g_ParamLimits

0x9515,	// (0x000a2bda) listrow_wgtman_pane_t1_ParamLimits

0x952d,	// (0x000a2bf2) listrow_wgtman_pane_t2_ParamLimits

0xfc47,	// (0x000a930c) listrow_wgtman_pane_t_ParamLimits

0x9553,	// (0x000a2c18) wait_bar_pane_cp09_ParamLimits

0x9c3d,	// (0x000a3302) bg_popup_heading_pane_cp02

0xf0a2,	// (0x000a8767) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x000a876f) popup_notif_wgt_heading_pane_t1

0x9c3d,	// (0x000a3302) main_vids_pane

0x9c3d,	// (0x000a3302) vids_listscroll_pane

0x9b97,	// (0x000a325c) scroll_pane_cp040

0x9c3d,	// (0x000a3302) vids_list_pane

0x9ba2,	// (0x000a3267) vids_list_double_pane_ParamLimits

0x9ba2,	// (0x000a3267) vids_list_double_pane

0x9bba,	// (0x000a327f) vids_list_double_pane_g1

0x9bc3,	// (0x000a3288) vids_list_double_pane_t1

0x9bd3,	// (0x000a3298) vids_list_double_pane_t2

0x0001,

0xfccb,	// (0x000a9390) vids_list_double_pane_t

0x426d,	// (0x0009d932) main_ncimui_pane_ParamLimits

0x7e1a,	// (0x000a14df) main_ncimui_pane_g1_ParamLimits

0x7e26,	// (0x000a14eb) main_ncimui_pane_g2_ParamLimits

0x7e26,	// (0x000a14eb) main_ncimui_pane_g2

0x0001,

0xf9a5,	// (0x000a906a) main_ncimui_pane_g_ParamLimits

0xf9a5,	// (0x000a906a) main_ncimui_pane_g

0x9b2b,	// (0x000a31f0) main_welc_pane_g1_ParamLimits

0x9b2b,	// (0x000a31f0) main_welc_pane_g1

0x9b37,	// (0x000a31fc) main_welc_pane_g2_ParamLimits

0x9b37,	// (0x000a31fc) main_welc_pane_g2

0x0001,

0xfcc6,	// (0x000a938b) main_welc_pane_g_ParamLimits

0xfcc6,	// (0x000a938b) main_welc_pane_g

0xa816,	// (0x000a3edb) listscroll_mce_pane_ParamLimits

0xb518,	// (0x000a4bdd) wait_bar_pane_cp10

0xc974,	// (0x000a6039) main_cale_day_pane_ParamLimits

0xc974,	// (0x000a6039) main_cale_week_pane_ParamLimits

0xa816,	// (0x000a3edb) main_messa_pane_ParamLimits

0x5597,	// (0x0009ec5c) main_clock2_btn_pane_ParamLimits

0x5597,	// (0x0009ec5c) main_clock2_btn_pane

0xd155,	// (0x000a681a) main_clock2_btn_pane_cp01_ParamLimits

0xd155,	// (0x000a681a) main_clock2_btn_pane_cp01

0xea41,	// (0x000a8106) list_cale_mrui_pane_ParamLimits

0xee70,	// (0x000a8535) main_cf0_pane_g2

0x0001,

0xfc20,	// (0x000a92e5) main_cf0_pane_g

0x96fa,	// (0x000a2dbf) area_left_week_number_pane_ParamLimits

0x970d,	// (0x000a2dd2) area_top_day_name_pane_ParamLimits

0x971b,	// (0x000a2de0) frame_month_view_pane_ParamLimits

0xef66,	// (0x000a862b) grid_month_view_pane_ParamLimits

0xef74,	// (0x000a8639) frm_month_g1_ParamLimits

0x9799,	// (0x000a2e5e) frm_month_g2_ParamLimits

0x97aa,	// (0x000a2e6f) frm_month_g3_ParamLimits

0x97bb,	// (0x000a2e80) frm_month_g4_ParamLimits

0x97cc,	// (0x000a2e91) frm_month_g5_ParamLimits

0x97df,	// (0x000a2ea4) frm_month_g6_ParamLimits

0x97f2,	// (0x000a2eb7) frm_month_g7_ParamLimits

0xef81,	// (0x000a8646) frm_month_g8_ParamLimits

0x9805,	// (0x000a2eca) frm_month_g9_ParamLimits

0x9812,	// (0x000a2ed7) frm_month_g10_ParamLimits

0x981f,	// (0x000a2ee4) frm_month_g11_ParamLimits

0x982c,	// (0x000a2ef1) frm_month_g12_ParamLimits

0x9839,	// (0x000a2efe) frm_month_g13_ParamLimits

0x9846,	// (0x000a2f0b) frm_month_g14_ParamLimits

0x9855,	// (0x000a2f1a) frm_month_g15_ParamLimits

0x9864,	// (0x000a2f29) frm_month_g16_ParamLimits

0xfc71,	// (0x000a9336) frm_month_g_ParamLimits

0xef8e,	// (0x000a8653) cell_top_day_name_pane_t1_ParamLimits

0x9873,	// (0x000a2f38) cell_area_left_week_number_pane_g1_ParamLimits

0x9882,	// (0x000a2f47) cell_area_left_week_number_pane_t1_ParamLimits

0xcfcd,	// (0x000a6692) cell_month_view_pane_g1_ParamLimits

0x9898,	// (0x000a2f5d) cell_month_view_pane_t1_ParamLimits

0xa80e,	// (0x000a3ed3) main_clock2_btn_pane_g1

0xf0b8,	// (0x000a877d) main_clock2_btn_pane_t1

0xa4af,	// (0x000a3b74) listscroll_cmail_pane_ParamLimits

0xe80e,	// (0x000a7ed3) main_sp_fs_email_pane_g1_ParamLimits

0xe81a,	// (0x000a7edf) main_sp_fs_email_pane_g2_ParamLimits

0x0acf,	// (0x0009a194) main_sp_fs_email_pane_g_ParamLimits

0xeb4f,	// (0x000a8214) list_recal_day_pane_ParamLimits

0xeb60,	// (0x000a8225) mian_recal_day_pane_t1

0x8845,	// (0x000a1f0a) list_single_dyc_row_text_pane_t4_ParamLimits

0x8845,	// (0x000a1f0a) list_single_dyc_row_text_pane_t4

0x887c,	// (0x000a1f41) list_single_dyc_row_text_pane_t5_ParamLimits

0x887c,	// (0x000a1f41) list_single_dyc_row_text_pane_t5

0xa07f,	// (0x000a3744) list_single_dyc_row_text_pane_t6_ParamLimits

0xa07f,	// (0x000a3744) list_single_dyc_row_text_pane_t6

0x30cb,	// (0x0009c790) aid_mgn_list_cale_time_pane

0x426d,	// (0x0009d932) main_gallery2_pane_ParamLimits

0xd16b,	// (0x000a6830) main_clock2_pane_cp01_t1

0xd179,	// (0x000a683e) main_clock2_pane_cp01_t3

0x0001,

0x05f5,	// (0x00099cba) main_clock2_pane_cp01_t

0x181c,	// (0x0009aee1) cale_week_scroll_pane_g16_ParamLimits

0x181c,	// (0x0009aee1) cale_week_scroll_pane_g16

0xaab5,	// (0x000a417a) vorec_slider_pane

0xf052,	// (0x000a8717) vidtel_button_pane_t1_ParamLimits

0x90cc,	// (0x000a2791) main_fs_bigclock_clock_pane_g1_ParamLimits

0x90cc,	// (0x000a2791) main_fs_bigclock_clock_pane_g2_ParamLimits

0x90d9,	// (0x000a279e) main_fs_bigclock_clock_pane_g3_ParamLimits

0x90d9,	// (0x000a279e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfbce,	// (0x000a9293) main_fs_bigclock_clock_pane_g_ParamLimits

0x90e5,	// (0x000a27aa) main_fs_bigclock_clock_pane_t1_ParamLimits

0x90f8,	// (0x000a27bd) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfbd7,	// (0x000a929c) main_fs_bigclock_clock_pane_t_ParamLimits

0x4e3c,	// (0x0009e501) main_mup3_lyrics_pane_ParamLimits

0x4e3c,	// (0x0009e501) main_mup3_lyrics_pane

0x9c07,	// (0x000a32cc) main_mup3_lyrics_pane_t1_ParamLimits

0x9c07,	// (0x000a32cc) main_mup3_lyrics_pane_t1

0x5be9,	// (0x0009f2ae) aid_main_mp4_pane_t1_area

0x5bf3,	// (0x0009f2b8) aid_main_mp4_pane_t2_area

0x5cf2,	// (0x0009f3b7) main_mp4_pane_g7_ParamLimits

0x5cf2,	// (0x0009f3b7) main_mp4_pane_g7

0x5cfe,	// (0x0009f3c3) main_mp4_pane_g8_ParamLimits

0x5cfe,	// (0x0009f3c3) main_mp4_pane_g8

0x611e,	// (0x0009f7e3) aid_call6_pane_g1_size

0x9a2a,	// (0x000a30ef) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9a2a,	// (0x000a30ef) list_double_large_graphic_phob2_other_pane

0xaea0,	// (0x000a4565) list_double_large_graphic_phob2_other_pane_g1

0x9c3d,	// (0x000a3302) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
