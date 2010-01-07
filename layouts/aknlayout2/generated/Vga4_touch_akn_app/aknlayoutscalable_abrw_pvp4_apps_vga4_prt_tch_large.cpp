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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007c57a };

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
0x5b08,	// (0x00082082) Screen

0x5b14,	// (0x0008208e) application_window

0x5b54,	// (0x000820ce) area_bottom_pane_ParamLimits

0x5b54,	// (0x000820ce) area_bottom_pane

0x5b89,	// (0x00082103) area_top_pane_ParamLimits

0x5b89,	// (0x00082103) area_top_pane

0x04f3,	// (0x0007ca6d) call_video_uplink_pane_ParamLimits

0x04f3,	// (0x0007ca6d) call_video_uplink_pane

0x5c17,	// (0x00082191) main_pane_ParamLimits

0x5c17,	// (0x00082191) main_pane

0x189b,	// (0x0007de15) context_pane

0x8d32,	// (0x000852ac) navi_pane

0x8d56,	// (0x000852d0) popup_cale_events_window_ParamLimits

0x8d56,	// (0x000852d0) popup_cale_events_window

0x18ae,	// (0x0007de28) popup_mup_playback_window

0x8d6e,	// (0x000852e8) signal_pane

0xe25d,	// (0x0008a7d7) main_browser_pane

0xecb9,	// (0x0008b233) main_burst_pane

0x8be4,	// (0x0008515e) main_calc_pane

0xecb9,	// (0x0008b233) main_cale_day_pane

0xe25d,	// (0x0008a7d7) main_cale_month_pane

0xecb9,	// (0x0008b233) main_cale_week_pane

0xecb9,	// (0x0008b233) main_call_pane

0xdf37,	// (0x0008a4b1) main_call_poc_pane

0xecb9,	// (0x0008b233) main_camera_pane

0xecb9,	// (0x0008b233) main_chi_dic_pane

0xeb5b,	// (0x0008b0d5) main_clock_pane

0xdf37,	// (0x0008a4b1) main_fmradio_pane

0xecb9,	// (0x0008b233) main_graph_messa_pane

0xdf37,	// (0x0008a4b1) main_help_pane

0xe25d,	// (0x0008a7d7) main_im_pane

0xe192,	// (0x0008a70c) main_image_pane_ParamLimits

0xe192,	// (0x0008a70c) main_image_pane

0xdf37,	// (0x0008a4b1) main_location2_pane

0xecb9,	// (0x0008b233) main_location_pane

0xdf37,	// (0x0008a4b1) main_messa_pane

0xdf37,	// (0x0008a4b1) main_mp2_pane

0xecb9,	// (0x0008b233) main_mp_pane

0xdf37,	// (0x0008a4b1) main_msg_pane

0xdf37,	// (0x0008a4b1) main_mup_eq_pane

0xdf37,	// (0x0008a4b1) main_mup_pane

0xecb9,	// (0x0008b233) main_notes_pane

0xdf37,	// (0x0008a4b1) main_pec_pane

0xdf37,	// (0x0008a4b1) main_phob_pane

0xdf37,	// (0x0008a4b1) main_pinb_pane

0xdf37,	// (0x0008a4b1) main_postcard_pane

0xdf37,	// (0x0008a4b1) main_qdial_pane

0xecb9,	// (0x0008b233) main_skin_pane

0xdf37,	// (0x0008a4b1) main_smil2_pane

0xecb9,	// (0x0008b233) main_smil_pane

0xecb9,	// (0x0008b233) main_video_pane

0xecb9,	// (0x0008b233) main_video_tele_pane

0xe192,	// (0x0008a70c) main_viewer_pane_ParamLimits

0xe192,	// (0x0008a70c) main_viewer_pane

0xecb9,	// (0x0008b233) main_vorec_pane

0x8c1c,	// (0x00085196) popup_blid_sat_info_window_ParamLimits

0x8c1c,	// (0x00085196) popup_blid_sat_info_window

0x8c36,	// (0x000851b0) popup_dyc_status_message_window_ParamLimits

0x8c36,	// (0x000851b0) popup_dyc_status_message_window

0x8c46,	// (0x000851c0) popup_grid_large_graphic_window_ParamLimits

0x8c46,	// (0x000851c0) popup_grid_large_graphic_window

0x8cbe,	// (0x00085238) popup_loc_request_window_ParamLimits

0x8cbe,	// (0x00085238) popup_loc_request_window

0x8d06,	// (0x00085280) popup_wml_address_window_ParamLimits

0x8d06,	// (0x00085280) popup_wml_address_window

0x8abc,	// (0x00085036) call_muted_g1

0x8778,	// (0x00084cf2) popup_call_audio_conf_window_ParamLimits

0x8778,	// (0x00084cf2) popup_call_audio_conf_window

0x8acc,	// (0x00085046) popup_call_audio_first_window_ParamLimits

0x8acc,	// (0x00085046) popup_call_audio_first_window

0x8b0c,	// (0x00085086) popup_call_audio_in_window_ParamLimits

0x8b0c,	// (0x00085086) popup_call_audio_in_window

0x8b30,	// (0x000850aa) popup_call_audio_out_window_ParamLimits

0x8b30,	// (0x000850aa) popup_call_audio_out_window

0x8b52,	// (0x000850cc) popup_call_audio_second_window_ParamLimits

0x8b52,	// (0x000850cc) popup_call_audio_second_window

0x8b82,	// (0x000850fc) popup_call_audio_wait_window_ParamLimits

0x8b82,	// (0x000850fc) popup_call_audio_wait_window

0x8ba3,	// (0x0008511d) popup_number_entry_window_ParamLimits

0x8ba3,	// (0x0008511d) popup_number_entry_window

0xdb24,	// (0x0008a09e) bg_popup_call_pane_cp05_ParamLimits

0xdb24,	// (0x0008a09e) bg_popup_call_pane_cp05

0xdb44,	// (0x0008a0be) popup_number_entry_window_t1

0xdb57,	// (0x0008a0d1) popup_number_entry_window_t2

0xdb69,	// (0x0008a0e3) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0008b675) popup_number_entry_window_t

0xdb7b,	// (0x0008a0f5) text_title_cp2

0xdb8e,	// (0x0008a108) bg_popup_call_pane_cp_ParamLimits

0xdb8e,	// (0x0008a108) bg_popup_call_pane_cp

0xdb9c,	// (0x0008a116) call_thumbnail_pane

0xdba4,	// (0x0008a11e) popup_call_audio_in_window_g1_ParamLimits

0xdba4,	// (0x0008a11e) popup_call_audio_in_window_g1

0xdbb0,	// (0x0008a12a) popup_call_audio_in_window_g2_ParamLimits

0xdbb0,	// (0x0008a12a) popup_call_audio_in_window_g2

0xdbbc,	// (0x0008a136) popup_call_audio_in_window_g3_ParamLimits

0xdbbc,	// (0x0008a136) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0008b67e) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0008b67e) popup_call_audio_in_window_g

0xdbc8,	// (0x0008a142) popup_call_audio_in_window_t1_ParamLimits

0xdbc8,	// (0x0008a142) popup_call_audio_in_window_t1

0xdbe4,	// (0x0008a15e) popup_call_audio_in_window_t2_ParamLimits

0xdbe4,	// (0x0008a15e) popup_call_audio_in_window_t2

0xdc00,	// (0x0008a17a) popup_call_audio_in_window_t3_ParamLimits

0xdc00,	// (0x0008a17a) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0008b685) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0008b685) popup_call_audio_in_window_t

0xdb8e,	// (0x0008a108) bg_popup_call_pane_cp01_ParamLimits

0xdb8e,	// (0x0008a108) bg_popup_call_pane_cp01

0xdb9c,	// (0x0008a116) call_thumbnail_pane_cp02

0xdc13,	// (0x0008a18d) call_type_pane_cp022

0xdc1b,	// (0x0008a195) popup_call_audio_out_window_g1_ParamLimits

0xdc1b,	// (0x0008a195) popup_call_audio_out_window_g1

0xdc2d,	// (0x0008a1a7) popup_call_audio_out_window_g2_ParamLimits

0xdc2d,	// (0x0008a1a7) popup_call_audio_out_window_g2

0xdc39,	// (0x0008a1b3) popup_call_audio_out_window_g3_ParamLimits

0xdc39,	// (0x0008a1b3) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0008b68c) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0008b68c) popup_call_audio_out_window_g

0xdc4b,	// (0x0008a1c5) popup_call_audio_out_window_t1_ParamLimits

0xdc4b,	// (0x0008a1c5) popup_call_audio_out_window_t1

0xdc63,	// (0x0008a1dd) popup_call_audio_out_window_t2_ParamLimits

0xdc63,	// (0x0008a1dd) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0008b693) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0008b693) popup_call_audio_out_window_t

0xdc78,	// (0x0008a1f2) bg_popup_call_pane_ParamLimits

0xdc78,	// (0x0008a1f2) bg_popup_call_pane

0x5e0b,	// (0x00082385) call_thumbnail_pane_cp_ParamLimits

0x5e0b,	// (0x00082385) call_thumbnail_pane_cp

0xdcfc,	// (0x0008a276) call_type_pane_cp01_ParamLimits

0xdcfc,	// (0x0008a276) call_type_pane_cp01

0xdd40,	// (0x0008a2ba) popup_call_audio_first_window_g1_ParamLimits

0xdd40,	// (0x0008a2ba) popup_call_audio_first_window_g1

0xdd8c,	// (0x0008a306) popup_call_audio_first_window_g2_ParamLimits

0xdd8c,	// (0x0008a306) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0008b698) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0008b698) popup_call_audio_first_window_g

0xddd0,	// (0x0008a34a) popup_call_audio_first_window_t1_ParamLimits

0xddd0,	// (0x0008a34a) popup_call_audio_first_window_t1

0xde7c,	// (0x0008a3f6) popup_call_audio_first_window_t4_ParamLimits

0xde7c,	// (0x0008a3f6) popup_call_audio_first_window_t4

0xdf08,	// (0x0008a482) popup_call_audio_first_window_t5_ParamLimits

0xdf08,	// (0x0008a482) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0008b69d) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0008b69d) popup_call_audio_first_window_t

0xdf37,	// (0x0008a4b1) bg_popup_call_pane_cp02

0xdf41,	// (0x0008a4bb) call_type_pane_cp023

0xdf49,	// (0x0008a4c3) popup_call_audio_wait_window_g1

0xdf51,	// (0x0008a4cb) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0008b6a4) popup_call_audio_wait_window_g

0xdf59,	// (0x0008a4d3) popup_call_audio_wait_window_t3

0xdf67,	// (0x0008a4e1) bg_popup_call_pane_cp03_ParamLimits

0xdf67,	// (0x0008a4e1) bg_popup_call_pane_cp03

0xdfc7,	// (0x0008a541) call_thumbnail_pane_cp011_ParamLimits

0xdfc7,	// (0x0008a541) call_thumbnail_pane_cp011

0xdfd3,	// (0x0008a54d) call_type_pane_cp034_ParamLimits

0xdfd3,	// (0x0008a54d) call_type_pane_cp034

0xe00f,	// (0x0008a589) popup_call_audio_second_window_g1_ParamLimits

0xe00f,	// (0x0008a589) popup_call_audio_second_window_g1

0xe04b,	// (0x0008a5c5) popup_call_audio_second_window_g2_ParamLimits

0xe04b,	// (0x0008a5c5) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0008b6a9) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0008b6a9) popup_call_audio_second_window_g

0xe087,	// (0x0008a601) popup_call_audio_second_window_t1_ParamLimits

0xe087,	// (0x0008a601) popup_call_audio_second_window_t1

0xe108,	// (0x0008a682) popup_call_audio_second_window_t2_ParamLimits

0xe108,	// (0x0008a682) popup_call_audio_second_window_t2

0xe13e,	// (0x0008a6b8) popup_call_audio_second_window_t3_ParamLimits

0xe13e,	// (0x0008a6b8) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0008b6ae) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0008b6ae) popup_call_audio_second_window_t

0xdf37,	// (0x0008a4b1) bg_popup_call_pane_cp04

0xe174,	// (0x0008a6ee) list_conf_pane

0xe17c,	// (0x0008a6f6) popup_call_audio_conf_window_t1

0xe18a,	// (0x0008a704) call_thumbnail_pane_g1

0xe192,	// (0x0008a70c) bg_pinb_pane_ParamLimits

0xe192,	// (0x0008a70c) bg_pinb_pane

0xe1a0,	// (0x0008a71a) find_pinb_pane

0xe1a9,	// (0x0008a723) listscroll_pinb_pane_ParamLimits

0xe1a9,	// (0x0008a723) listscroll_pinb_pane

0xe1b8,	// (0x0008a732) pinb_bg_pane_g1

0x5e2f,	// (0x000823a9) pinb_bg_pane_g2

0x5e3b,	// (0x000823b5) pinb_bg_pane_g3

0x5e47,	// (0x000823c1) pinb_bg_pane_g4

0x5e53,	// (0x000823cd) pinb_bg_pane_g5

0x5e5f,	// (0x000823d9) pinb_bg_pane_g6

0x5e6a,	// (0x000823e4) pinb_bg_pane_g7

0x5e75,	// (0x000823ef) pinb_bg_pane_g8

0x5e80,	// (0x000823fa) pinb_bg_pane_g9

0x5e8a,	// (0x00082404) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0008b6b5) pinb_bg_pane_g

0x5ea7,	// (0x00082421) grid_pinb_pane

0x5eb2,	// (0x0008242c) list_pinb_pane

0x5ebd,	// (0x00082437) scroll_pane_cp01_ParamLimits

0x5ebd,	// (0x00082437) scroll_pane_cp01

0xe1c2,	// (0x0008a73c) find_pinb_pane_g1_ParamLimits

0xe1c2,	// (0x0008a73c) find_pinb_pane_g1

0xe1da,	// (0x0008a754) find_pinb_pane_t1

0xe1ec,	// (0x0008a766) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0008b6cf) find_pinb_pane_t

0xe201,	// (0x0008a77b) input_focus_pane_cp01_ParamLimits

0xe201,	// (0x0008a77b) input_focus_pane_cp01

0x5ecf,	// (0x00082449) cell_pinb_pane_ParamLimits

0x5ecf,	// (0x00082449) cell_pinb_pane

0x5eef,	// (0x00082469) cell_pinb_pane_g1_ParamLimits

0x5eef,	// (0x00082469) cell_pinb_pane_g1

0x5f04,	// (0x0008247e) cell_pinb_pane_g2_ParamLimits

0x5f04,	// (0x0008247e) cell_pinb_pane_g2

0xe20d,	// (0x0008a787) cell_pinb_pane_g3_ParamLimits

0xe20d,	// (0x0008a787) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0008b6d4) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0008b6d4) cell_pinb_pane_g

0xdf37,	// (0x0008a4b1) grid_highlight_pane_cp01

0x5f10,	// (0x0008248a) list_pinb_item_pane_ParamLimits

0x5f10,	// (0x0008248a) list_pinb_item_pane

0xdf37,	// (0x0008a4b1) list_highlight_pane_cp02

0x5f2b,	// (0x000824a5) list_pinb_item_pane_g1_ParamLimits

0x5f2b,	// (0x000824a5) list_pinb_item_pane_g1

0x5f38,	// (0x000824b2) list_pinb_item_pane_g2_ParamLimits

0x5f38,	// (0x000824b2) list_pinb_item_pane_g2

0x5f44,	// (0x000824be) list_pinb_item_pane_g3_ParamLimits

0x5f44,	// (0x000824be) list_pinb_item_pane_g3

0x5f55,	// (0x000824cf) list_pinb_item_pane_g4_ParamLimits

0x5f55,	// (0x000824cf) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0008b6db) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0008b6db) list_pinb_item_pane_g

0x5f61,	// (0x000824db) list_pinb_item_pane_t1_ParamLimits

0x5f61,	// (0x000824db) list_pinb_item_pane_t1

0x5f92,	// (0x0008250c) calc_display_pane

0x5fb0,	// (0x0008252a) calc_paper_pane

0x5fcc,	// (0x00082546) grid_calc_pane

0xdf37,	// (0x0008a4b1) bg_list_pane_cp01

0x5ff8,	// (0x00082572) clock_g1

0x6000,	// (0x0008257a) clock_g2

0x0001,

0xf16a,	// (0x0008b6e4) clock_g

0x600a,	// (0x00082584) clock_t1_ParamLimits

0x600a,	// (0x00082584) clock_t1

0x601f,	// (0x00082599) clock_t2_ParamLimits

0x601f,	// (0x00082599) clock_t2

0x6031,	// (0x000825ab) clock_t3_ParamLimits

0x6031,	// (0x000825ab) clock_t3

0x6043,	// (0x000825bd) clock_t4_ParamLimits

0x6043,	// (0x000825bd) clock_t4

0x6055,	// (0x000825cf) clock_t5_ParamLimits

0x6055,	// (0x000825cf) clock_t5

0x606a,	// (0x000825e4) clock_t6_ParamLimits

0x606a,	// (0x000825e4) clock_t6

0x607c,	// (0x000825f6) clock_t7_ParamLimits

0x607c,	// (0x000825f6) clock_t7

0x608e,	// (0x00082608) clock_t8_ParamLimits

0x608e,	// (0x00082608) clock_t8

0x60a4,	// (0x0008261e) clock_t9_ParamLimits

0x60a4,	// (0x0008261e) clock_t9

0x0008,

0xf16f,	// (0x0008b6e9) clock_t_ParamLimits

0xf16f,	// (0x0008b6e9) clock_t

0xe219,	// (0x0008a793) popup_clock_analogue_window_cp02

0xe219,	// (0x0008a793) popup_clock_digital_window_cp01

0xe221,	// (0x0008a79b) listscroll_help_pane

0xdf37,	// (0x0008a4b1) phob_pre_status_pane

0xe22b,	// (0x0008a7a5) grid_qdial_pane

0xdf37,	// (0x0008a4b1) listscroll_mce_pane

0xe235,	// (0x0008a7af) bg_notes_pane

0xe23f,	// (0x0008a7b9) list_notes_pane

0x60ba,	// (0x00082634) scroll_pane_cp06

0xe249,	// (0x0008a7c3) bg_calc_paper_pane

0x60cf,	// (0x00082649) list_calc_pane

0xe25d,	// (0x0008a7d7) bg_calc_display_pane

0x60e9,	// (0x00082663) calc_display_pane_t1

0x60fe,	// (0x00082678) calc_display_pane_t2

0x6113,	// (0x0008268d) calc_display_pane_t3

0x0002,

0xf182,	// (0x0008b6fc) calc_display_pane_t

0x6125,	// (0x0008269f) cell_calc_pane_ParamLimits

0x6125,	// (0x0008269f) cell_calc_pane

0xe269,	// (0x0008a7e3) bg_calc_paper_pane_g1

0xe275,	// (0x0008a7ef) bg_calc_paper_pane_g2

0xe281,	// (0x0008a7fb) bg_calc_paper_pane_g3

0xe28d,	// (0x0008a807) bg_calc_paper_pane_g4

0xe299,	// (0x0008a813) bg_calc_paper_pane_g5

0x6154,	// (0x000826ce) bg_calc_paper_pane_g6

0x6165,	// (0x000826df) bg_calc_paper_pane_g7

0x6176,	// (0x000826f0) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0008b703) bg_calc_paper_pane_g

0x6187,	// (0x00082701) calc_bg_paper_pane_g9

0x6198,	// (0x00082712) list_calc_item_pane_ParamLimits

0x6198,	// (0x00082712) list_calc_item_pane

0xe2a5,	// (0x0008a81f) list_calc_item_pane_g1

0x61bc,	// (0x00082736) list_calc_item_pane_t1_ParamLimits

0x61bc,	// (0x00082736) list_calc_item_pane_t1

0x61ce,	// (0x00082748) list_calc_item_pane_t2_ParamLimits

0x61ce,	// (0x00082748) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0008b714) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0008b714) list_calc_item_pane_t

0xe2b2,	// (0x0008a82c) cell_calc_pane_g1

0xe2bc,	// (0x0008a836) grid_highlight_pane_cp02

0xe2de,	// (0x0008a858) bg_calc_display_pane_g1

0x61fe,	// (0x00082778) bg_calc_display_pane_g2

0xe2e7,	// (0x0008a861) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0008b71e) bg_calc_display_pane_g

0x6208,	// (0x00082782) cell_qdial_pane_ParamLimits

0x6208,	// (0x00082782) cell_qdial_pane

0x621e,	// (0x00082798) cell_qdial_pane_g1_ParamLimits

0x621e,	// (0x00082798) cell_qdial_pane_g1

0x622b,	// (0x000827a5) cell_qdial_pane_g2_ParamLimits

0x622b,	// (0x000827a5) cell_qdial_pane_g2

0xe2f0,	// (0x0008a86a) cell_qdial_pane_g3_ParamLimits

0xe2f0,	// (0x0008a86a) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0008b725) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0008b725) cell_qdial_pane_g

0x6249,	// (0x000827c3) cell_qdial_pane_t1_ParamLimits

0x6249,	// (0x000827c3) cell_qdial_pane_t1

0x6261,	// (0x000827db) cell_qdial_pane_t2_ParamLimits

0x6261,	// (0x000827db) cell_qdial_pane_t2

0x6274,	// (0x000827ee) cell_qdial_pane_t3_ParamLimits

0x6274,	// (0x000827ee) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0008b72e) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0008b72e) cell_qdial_pane_t

0xdf37,	// (0x0008a4b1) grid_highlight_pane_cp04

0xe2fc,	// (0x0008a876) thumbnail_qdial_pane_ParamLimits

0xe2fc,	// (0x0008a876) thumbnail_qdial_pane

0xe358,	// (0x0008a8d2) list_help_pane

0xe361,	// (0x0008a8db) scroll_pane_cp02

0x6287,	// (0x00082801) help_list_pane_t1_ParamLimits

0x6287,	// (0x00082801) help_list_pane_t1

0x62b1,	// (0x0008282b) bg_notes_pane_g2

0x62b9,	// (0x00082833) bg_notes_pane_g3

0x62c1,	// (0x0008283b) notes_bg_pane_g1

0x62c9,	// (0x00082843) notes_bg_pane_g4

0x62d1,	// (0x0008284b) notes_bg_pane_g5

0x62d9,	// (0x00082853) notes_bg_pane_g6

0x62e1,	// (0x0008285b) notes_bg_pane_g7

0x62e9,	// (0x00082863) notes_bg_pane_g8

0x62f1,	// (0x0008286b) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0008b74c) notes_bg_pane_g

0x62f9,	// (0x00082873) list_notes_text_pane_ParamLimits

0x62f9,	// (0x00082873) list_notes_text_pane

0xe36a,	// (0x0008a8e4) list_notes_text_pane_g1

0x059f,	// (0x0007cb19) list_notes_text_pane_t1

0xe25d,	// (0x0008a7d7) listscroll_cale_week_pane

0x6333,	// (0x000828ad) bg_cale_heading_pane

0xe384,	// (0x0008a8fe) bg_cale_pane_cp01

0x6347,	// (0x000828c1) cale_week_corner_pane

0x635d,	// (0x000828d7) cale_week_day_heading_pane

0x6371,	// (0x000828eb) cale_week_scroll_pane_g1

0x6382,	// (0x000828fc) cale_week_scroll_pane_g2

0x6393,	// (0x0008290d) cale_week_scroll_pane_g3

0x63a4,	// (0x0008291e) cale_week_scroll_pane_g4

0x63b5,	// (0x0008292f) cale_week_scroll_pane_g5

0x63c6,	// (0x00082940) cale_week_scroll_pane_g6

0x63d9,	// (0x00082953) cale_week_scroll_pane_g7

0x63ec,	// (0x00082966) cale_week_scroll_pane_g8

0x63ff,	// (0x00082979) cale_week_scroll_pane_g9

0x6410,	// (0x0008298a) cale_week_scroll_pane_g10

0x6421,	// (0x0008299b) cale_week_scroll_pane_g11

0x6432,	// (0x000829ac) cale_week_scroll_pane_g12

0x6443,	// (0x000829bd) cale_week_scroll_pane_g13

0x6454,	// (0x000829ce) cale_week_scroll_pane_g14

0x6465,	// (0x000829df) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0008b75b) cale_week_scroll_pane_g

0x6476,	// (0x000829f0) cale_week_time_pane

0x6489,	// (0x00082a03) grid_cale_week_pane

0x649e,	// (0x00082a18) scroll_pane_cp08

0x64b8,	// (0x00082a32) cell_cale_week_pane_ParamLimits

0x64b8,	// (0x00082a32) cell_cale_week_pane

0x64f6,	// (0x00082a70) cale_week_day_heading_pane_t1

0x6523,	// (0x00082a9d) cale_week_day_heading_pane_t2

0x6550,	// (0x00082aca) cale_week_day_heading_pane_t3

0x657d,	// (0x00082af7) cale_week_day_heading_pane_t4

0x65aa,	// (0x00082b24) cale_week_day_heading_pane_t5

0x65d7,	// (0x00082b51) cale_week_day_heading_pane_t6

0x6604,	// (0x00082b7e) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0008b77a) cale_week_day_heading_pane_t

0xe3af,	// (0x0008a929) bg_cale_side_pane

0x6631,	// (0x00082bab) cale_week_time_pane_t1

0x665d,	// (0x00082bd7) cale_week_time_pane_t2

0x6689,	// (0x00082c03) cale_week_time_pane_t3

0x66b5,	// (0x00082c2f) cale_week_time_pane_t4

0x66e1,	// (0x00082c5b) cale_week_time_pane_t5

0x670d,	// (0x00082c87) cale_week_time_pane_t6

0x6739,	// (0x00082cb3) cale_week_time_pane_t7

0x6765,	// (0x00082cdf) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0008b789) cale_week_time_pane_t

0x6791,	// (0x00082d0b) cell_cale_week_pane_g2

0x67aa,	// (0x00082d24) cell_cale_week_pane_g3_ParamLimits

0x67aa,	// (0x00082d24) cell_cale_week_pane_g3

0xe3bd,	// (0x0008a937) grid_highlight_pane_cp07

0xe3c5,	// (0x0008a93f) listscroll_gms_pane

0xe3cf,	// (0x0008a949) grid_gms_pane

0xe3d8,	// (0x0008a952) listscroll_gms_pane_g1

0xe3e0,	// (0x0008a95a) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0008b79a) listscroll_gms_pane_g

0x67c2,	// (0x00082d3c) scroll_pane_cp010

0x67cd,	// (0x00082d47) cell_gms_pane_ParamLimits

0x67cd,	// (0x00082d47) cell_gms_pane

0x67e0,	// (0x00082d5a) cell_gms_pane_g1

0xe3e8,	// (0x0008a962) cell_gms_pane_g2

0xe3f0,	// (0x0008a96a) cell_gms_pane_g3

0xe3f9,	// (0x0008a973) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0008b79f) cell_gms_pane_g

0xe402,	// (0x0008a97c) grid_highlight_pane_cp09

0x8a64,	// (0x00084fde) phob_pre_status_pane_g1

0x8a6c,	// (0x00084fe6) phob_pre_status_pane_g2

0x8a74,	// (0x00084fee) phob_pre_status_pane_g3

0x8a7c,	// (0x00084ff6) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0008bb8e) phob_pre_status_pane_g

0x8a8c,	// (0x00085006) phob_pre_status_pane_t1

0x8a9c,	// (0x00085016) phob_pre_status_pane_t2

0x8aac,	// (0x00085026) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0008bb99) phob_pre_status_pane_t

0xdf37,	// (0x0008a4b1) bg_list_pane_cp05

0x67f0,	// (0x00082d6a) grid_vorec_pane

0x67fa,	// (0x00082d74) vorec_t1

0x6808,	// (0x00082d82) vorec_t2

0x6816,	// (0x00082d90) vorec_t3

0x6824,	// (0x00082d9e) vorec_t4

0x6832,	// (0x00082dac) vorec_t5

0x6840,	// (0x00082dba) vorec_t6

0x0006,

0xf22e,	// (0x0008b7a8) vorec_t

0x685c,	// (0x00082dd6) wait_bar_pane_cp01

0x6864,	// (0x00082dde) cell_vorec_pane_ParamLimits

0x6864,	// (0x00082dde) cell_vorec_pane

0xe40a,	// (0x0008a984) cell_vorec_pane_g1

0xdf37,	// (0x0008a4b1) grid_highlight_pane_cp05

0x6889,	// (0x00082e03) cams_zoom_pane

0x6895,	// (0x00082e0f) image_vga_pane

0x68a4,	// (0x00082e1e) main_camera_pane_g1

0x68b2,	// (0x00082e2c) main_camera_pane_g2

0x68be,	// (0x00082e38) main_camera_pane_g3

0x68cc,	// (0x00082e46) main_camera_pane_g4

0x68da,	// (0x00082e54) main_camera_pane_g5

0x68e8,	// (0x00082e62) main_camera_pane_g6

0x68f6,	// (0x00082e70) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0008b7b7) main_camera_pane_g

0x6904,	// (0x00082e7e) main_camera_pane_t1

0x6916,	// (0x00082e90) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0008b7c8) main_camera_pane_t

0x6939,	// (0x00082eb3) cams_zoom_pane_cp_ParamLimits

0x6939,	// (0x00082eb3) cams_zoom_pane_cp

0x695d,	// (0x00082ed7) image_cif_pane_ParamLimits

0x695d,	// (0x00082ed7) image_cif_pane

0x697b,	// (0x00082ef5) image_subqcif_pane

0x6985,	// (0x00082eff) main_video_pane_g1_ParamLimits

0x6985,	// (0x00082eff) main_video_pane_g1

0x69a5,	// (0x00082f1f) main_video_pane_g2_ParamLimits

0x69a5,	// (0x00082f1f) main_video_pane_g2

0x69d5,	// (0x00082f4f) main_video_pane_g3_ParamLimits

0x69d5,	// (0x00082f4f) main_video_pane_g3

0x69fe,	// (0x00082f78) main_video_pane_g4_ParamLimits

0x69fe,	// (0x00082f78) main_video_pane_g4

0x6a27,	// (0x00082fa1) main_video_pane_g5_ParamLimits

0x6a27,	// (0x00082fa1) main_video_pane_g5

0xe420,	// (0x0008a99a) main_video_pane_g6_ParamLimits

0xe420,	// (0x0008a99a) main_video_pane_g6

0x0006,

0xf253,	// (0x0008b7cd) main_video_pane_g_ParamLimits

0xf253,	// (0x0008b7cd) main_video_pane_g

0x6a49,	// (0x00082fc3) main_video_pane_t1_ParamLimits

0x6a49,	// (0x00082fc3) main_video_pane_t1

0xe43a,	// (0x0008a9b4) cams_zoom_pane_g1

0xe443,	// (0x0008a9bd) cams_zoom_pane_g2

0xe44c,	// (0x0008a9c6) cams_zoom_pane_g3

0xe455,	// (0x0008a9cf) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0008b7dc) cams_zoom_pane_g

0x6a93,	// (0x0008300d) grid_cams_pane

0x6aa1,	// (0x0008301b) linegrid_cams_pane

0x6aaf,	// (0x00083029) cell_cams_pane_ParamLimits

0x6aaf,	// (0x00083029) cell_cams_pane

0xe45e,	// (0x0008a9d8) cams_burst_image_pane

0xe466,	// (0x0008a9e0) cell_cams_pane_g1

0xdf37,	// (0x0008a4b1) grid_highlight_pane_cp03

0xe2b2,	// (0x0008a82c) mp_bg_pane_g1

0xdf37,	// (0x0008a4b1) bg_list_pane_cp03

0x176d,	// (0x0007dce7) bg_mp_pane

0x1775,	// (0x0007dcef) grid_mp_pane

0x177d,	// (0x0007dcf7) media_player_g1

0x1787,	// (0x0007dd01) media_player_t1

0x1795,	// (0x0007dd0f) media_player_t2

0x17a3,	// (0x0007dd1d) media_player_t3

0x17b1,	// (0x0007dd2b) media_player_t4

0x17bf,	// (0x0007dd39) media_player_t5

0x17cd,	// (0x0007dd47) media_player_t6

0x17db,	// (0x0007dd55) media_player_t7

0x0006,

0xf5fe,	// (0x0008bb78) media_player_t

0x17e9,	// (0x0007dd63) wait_bar_pane_cp02

0xf5e3,	// (0x0008bb5d) main_usb_pane_t

0x8a5b,	// (0x00084fd5) cell_mp_pane

0xe2b2,	// (0x0008a82c) cell_mp_pane_g1

0xdf37,	// (0x0008a4b1) grid_highlight_pane_cp06

0xe46e,	// (0x0008a9e8) grid_skin_colour_pane

0xe476,	// (0x0008a9f0) list_highlight_pane_cp03

0x6b1b,	// (0x00083095) skin_g1

0xe47e,	// (0x0008a9f8) skin_t1

0xe48d,	// (0x0008aa07) skin_t2

0x0001,

0xf297,	// (0x0008b811) skin_t

0x6b25,	// (0x0008309f) cell_skin_colour_pane_ParamLimits

0x6b25,	// (0x0008309f) cell_skin_colour_pane

0xe49b,	// (0x0008aa15) cell_skin_colour_pane_g1

0x6b74,	// (0x000830ee) call_video_g1_ParamLimits

0x6b74,	// (0x000830ee) call_video_g1

0x6b84,	// (0x000830fe) call_video_g2_ParamLimits

0x6b84,	// (0x000830fe) call_video_g2

0x0001,

0xf29c,	// (0x0008b816) call_video_g_ParamLimits

0xf29c,	// (0x0008b816) call_video_g

0x6bbc,	// (0x00083136) call_video_uplink_pane_cp1_ParamLimits

0x6bbc,	// (0x00083136) call_video_uplink_pane_cp1

0xe4b5,	// (0x0008aa2f) call_video_uplink_pane_cp2

0x6c6a,	// (0x000831e4) video_down_crop_pane_ParamLimits

0x6c6a,	// (0x000831e4) video_down_crop_pane

0x6d42,	// (0x000832bc) video_down_pane_ParamLimits

0x6d42,	// (0x000832bc) video_down_pane

0xe4bd,	// (0x0008aa37) video_down_subqcif_pane_ParamLimits

0xe4bd,	// (0x0008aa37) video_down_subqcif_pane

0xe4d7,	// (0x0008aa51) video_down_subqcif_pane_cp_ParamLimits

0xe4d7,	// (0x0008aa51) video_down_subqcif_pane_cp

0xe4fd,	// (0x0008aa77) im_reading_pane_ParamLimits

0xe4fd,	// (0x0008aa77) im_reading_pane

0x6e1f,	// (0x00083399) im_writing_pane_ParamLimits

0x6e1f,	// (0x00083399) im_writing_pane

0x6e3d,	// (0x000833b7) im_reading_pane_t1

0xe517,	// (0x0008aa91) list_im_pane

0xe528,	// (0x0008aaa2) scroll_pane_cp07

0x6e85,	// (0x000833ff) im_writing_pane_t1_ParamLimits

0x6e85,	// (0x000833ff) im_writing_pane_t1

0xe541,	// (0x0008aabb) im_writing_pane_t2_ParamLimits

0xe541,	// (0x0008aabb) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0008b820) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0008b820) im_writing_pane_t

0xdf37,	// (0x0008a4b1) input_focus_pane_cp04

0xdf37,	// (0x0008a4b1) input_focus_pane_cp05

0x6e97,	// (0x00083411) list_im_single_pane_ParamLimits

0x6e97,	// (0x00083411) list_im_single_pane

0x6eb3,	// (0x0008342d) list_single_im_pane_t1

0x8a1f,	// (0x00084f99) blid_accuracy_pane

0x8a27,	// (0x00084fa1) blid_compass_pane

0x8a31,	// (0x00084fab) main_location_t1

0x8a3f,	// (0x00084fb9) main_location_t2

0x8a4d,	// (0x00084fc7) main_location_t3

0x0002,

0xf60d,	// (0x0008bb87) main_location_t

0xdf37,	// (0x0008a4b1) aid_levels_location

0xe2b2,	// (0x0008a82c) blid_accuracy_pane_g1

0xe2b2,	// (0x0008a82c) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0008b882) blid_accuracy_pane_g

0xe589,	// (0x0008ab03) wml_content_pane

0xe5c7,	// (0x0008ab41) wml_button_pane_ParamLimits

0xe5c7,	// (0x0008ab41) wml_button_pane

0x6ec2,	// (0x0008343c) wml_list_single_large_pane_ParamLimits

0x6ec2,	// (0x0008343c) wml_list_single_large_pane

0x6ee4,	// (0x0008345e) wml_list_single_medium_pane_ParamLimits

0x6ee4,	// (0x0008345e) wml_list_single_medium_pane

0x6f0a,	// (0x00083484) wml_list_single_small_pane_ParamLimits

0x6f0a,	// (0x00083484) wml_list_single_small_pane

0xe5db,	// (0x0008ab55) wml_selection_box_pane_ParamLimits

0xe5db,	// (0x0008ab55) wml_selection_box_pane

0xe5ee,	// (0x0008ab68) wml_list_single_pane_t1

0xe5fd,	// (0x0008ab77) wml_list_single_medium_pane_t1

0xe60c,	// (0x0008ab86) wml_list_single_large_pane_t1

0xe61b,	// (0x0008ab95) input_focus_pane_cp02_ParamLimits

0xe61b,	// (0x0008ab95) input_focus_pane_cp02

0xe62e,	// (0x0008aba8) wml_selection_box_pane_g1

0xe637,	// (0x0008abb1) wml_selection_box_pane_t1_ParamLimits

0xe637,	// (0x0008abb1) wml_selection_box_pane_t1

0xe192,	// (0x0008a70c) bg_wml_button_pane_ParamLimits

0xe192,	// (0x0008a70c) bg_wml_button_pane

0xe64f,	// (0x0008abc9) wml_button_pane_g1

0xe657,	// (0x0008abd1) wml_button_pane_t1

0xe64f,	// (0x0008abc9) wml_button_bg_pane_g1

0xe667,	// (0x0008abe1) wml_button_bg_pane_g2

0xe66f,	// (0x0008abe9) wml_button_bg_pane_g3

0xe677,	// (0x0008abf1) wml_button_bg_pane_g4

0xe67f,	// (0x0008abf9) wml_button_bg_pane_g5

0xe687,	// (0x0008ac01) wml_button_bg_pane_g6

0xe68f,	// (0x0008ac09) wml_button_bg_pane_g7

0xe697,	// (0x0008ac11) wml_button_bg_pane_g8

0xe69f,	// (0x0008ac19) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0008b825) wml_button_bg_pane_g

0x6f35,	// (0x000834af) bg_list_pane_cp02

0xe6a7,	// (0x0008ac21) mce_header_pane_ParamLimits

0xe6a7,	// (0x0008ac21) mce_header_pane

0xe6bd,	// (0x0008ac37) mce_icon_pane

0xe6bd,	// (0x0008ac37) mce_image_pane

0xe6c6,	// (0x0008ac40) mce_text_pane_ParamLimits

0xe6c6,	// (0x0008ac40) mce_text_pane

0x6f3f,	// (0x000834b9) scroll_pane_cp03

0xe5bf,	// (0x0008ab39) scroll_pane_cp04

0xe6d9,	// (0x0008ac53) scroll_pane_cp05_ParamLimits

0xe6d9,	// (0x0008ac53) scroll_pane_cp05

0x6f49,	// (0x000834c3) mce_header_field_pane_ParamLimits

0x6f49,	// (0x000834c3) mce_header_field_pane

0x6f6b,	// (0x000834e5) mce_header_field_pane_2_ParamLimits

0x6f6b,	// (0x000834e5) mce_header_field_pane_2

0x6f81,	// (0x000834fb) mce_header_field_pane_3

0x6f89,	// (0x00083503) list_single_mce_message_pane_ParamLimits

0x6f89,	// (0x00083503) list_single_mce_message_pane

0x6fa8,	// (0x00083522) list_single_mce_smart_pane_ParamLimits

0x6fa8,	// (0x00083522) list_single_mce_smart_pane

0xe6e5,	// (0x0008ac5f) input_focus_pane_cp03

0xe6ee,	// (0x0008ac68) list_header_data_pane

0x6fd2,	// (0x0008354c) mce_header_field_pane_t1

0x6fe2,	// (0x0008355c) list_single_mce_header_pane_ParamLimits

0x6fe2,	// (0x0008355c) list_single_mce_header_pane

0xe6f6,	// (0x0008ac70) list_single_mce_header_pane_t1

0xe705,	// (0x0008ac7f) list_single_mce_message_pane_g1

0xe70d,	// (0x0008ac87) list_single_mce_message_pane_t1

0x701e,	// (0x00083598) bg_cale_heading_pane_cp01_ParamLimits

0x701e,	// (0x00083598) bg_cale_heading_pane_cp01

0xe71b,	// (0x0008ac95) bg_cale_pane_cp02_ParamLimits

0xe71b,	// (0x0008ac95) bg_cale_pane_cp02

0x7041,	// (0x000835bb) cale_month_corner_pane

0x7057,	// (0x000835d1) cale_month_day_heading_pane_ParamLimits

0x7057,	// (0x000835d1) cale_month_day_heading_pane

0x708a,	// (0x00083604) cale_month_pane_g1_ParamLimits

0x708a,	// (0x00083604) cale_month_pane_g1

0x70a6,	// (0x00083620) cale_month_pane_g2_ParamLimits

0x70a6,	// (0x00083620) cale_month_pane_g2

0x70c1,	// (0x0008363b) cale_month_pane_g3_ParamLimits

0x70c1,	// (0x0008363b) cale_month_pane_g3

0x70ed,	// (0x00083667) cale_month_pane_g4_ParamLimits

0x70ed,	// (0x00083667) cale_month_pane_g4

0x7119,	// (0x00083693) cale_month_pane_g5_ParamLimits

0x7119,	// (0x00083693) cale_month_pane_g5

0x7145,	// (0x000836bf) cale_month_pane_g6_ParamLimits

0x7145,	// (0x000836bf) cale_month_pane_g6

0x7181,	// (0x000836fb) cale_month_pane_g7_ParamLimits

0x7181,	// (0x000836fb) cale_month_pane_g7

0x71bd,	// (0x00083737) cale_month_pane_g8_ParamLimits

0x71bd,	// (0x00083737) cale_month_pane_g8

0x71f9,	// (0x00083773) cale_month_pane_g9_ParamLimits

0x71f9,	// (0x00083773) cale_month_pane_g9

0x7233,	// (0x000837ad) cale_month_pane_g10_ParamLimits

0x7233,	// (0x000837ad) cale_month_pane_g10

0x726d,	// (0x000837e7) cale_month_pane_g11_ParamLimits

0x726d,	// (0x000837e7) cale_month_pane_g11

0x72a7,	// (0x00083821) cale_month_pane_g12_ParamLimits

0x72a7,	// (0x00083821) cale_month_pane_g12

0x72e1,	// (0x0008385b) cale_month_pane_g13_ParamLimits

0x72e1,	// (0x0008385b) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0008b838) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0008b838) cale_month_pane_g

0x731b,	// (0x00083895) cale_month_week_pane

0x732e,	// (0x000838a8) grid_cale_month_pane_ParamLimits

0x732e,	// (0x000838a8) grid_cale_month_pane

0x735c,	// (0x000838d6) cale_month_day_heading_pane_t1

0x73ba,	// (0x00083934) cale_month_day_heading_pane_t2

0x741f,	// (0x00083999) cale_month_day_heading_pane_t3

0x7484,	// (0x000839fe) cale_month_day_heading_pane_t4

0x74e9,	// (0x00083a63) cale_month_day_heading_pane_t5

0x7556,	// (0x00083ad0) cale_month_day_heading_pane_t6

0x75cb,	// (0x00083b45) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0008b853) cale_month_day_heading_pane_t

0xe3af,	// (0x0008a929) bg_cale_side_pane_cp01

0x7640,	// (0x00083bba) cale_month_week_pane_t1

0x766b,	// (0x00083be5) cale_month_week_pane_t2

0x7696,	// (0x00083c10) cale_month_week_pane_t3

0x76c1,	// (0x00083c3b) cale_month_week_pane_t4

0x76ec,	// (0x00083c66) cale_month_week_pane_t5

0x7717,	// (0x00083c91) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0008b862) cale_month_week_pane_t

0x7742,	// (0x00083cbc) cell_cale_month_pane_ParamLimits

0x7742,	// (0x00083cbc) cell_cale_month_pane

0x7810,	// (0x00083d8a) cell_cale_month_pane_g1

0x781c,	// (0x00083d96) cell_cale_month_pane_t1_ParamLimits

0x781c,	// (0x00083d96) cell_cale_month_pane_t1

0xe3bd,	// (0x0008a937) grid_highlight_pane_cp08

0xe2b2,	// (0x0008a82c) main_smil_g1

0x7838,	// (0x00083db2) smil_status_pane

0xe750,	// (0x0008acca) smil_text_pane

0x168b,	// (0x0007dc05) bg_popup_call3_rect_pane_g8

0x1693,	// (0x0007dc0d) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0008bb1b) bg_popup_call3_rect_pane_g

0x193b,	// (0x0007deb5) smil_status_volume_pane_g1

0xe75a,	// (0x0008acd4) smil_status_pane_t1

0x8e00,	// (0x0008537a) volume_smil_pane

0xe771,	// (0x0008aceb) list_smil_text_pane

0x784b,	// (0x00083dc5) scroll_pane_cp011

0x7856,	// (0x00083dd0) smil_text_list_pane_t1_ParamLimits

0x7856,	// (0x00083dd0) smil_text_list_pane_t1

0x78ba,	// (0x00083e34) aid_volume_smil_ParamLimits

0x78ba,	// (0x00083e34) aid_volume_smil

0xe2b2,	// (0x0008a82c) smil_volume_pane_g1

0xe2b2,	// (0x0008a82c) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0008b882) smil_volume_pane_g

0xe25d,	// (0x0008a7d7) listscroll_cale_day_pane

0xe77b,	// (0x0008acf5) bg_cale_pane

0xe793,	// (0x0008ad0d) list_cale_pane

0xe7a4,	// (0x0008ad1e) scroll_pane_cp09

0xe7b5,	// (0x0008ad2f) cale_bg_pane_g1

0xe7bd,	// (0x0008ad37) cale_bg_pane_g2

0xe7c5,	// (0x0008ad3f) cale_bg_pane_g3

0xe7cd,	// (0x0008ad47) cale_bg_pane_g4

0xe7d5,	// (0x0008ad4f) cale_bg_pane_g5

0xe7dd,	// (0x0008ad57) cale_bg_pane_g6

0xe7e5,	// (0x0008ad5f) cale_bg_pane_g7

0xe7ed,	// (0x0008ad67) cale_bg_pane_g8

0xe7f5,	// (0x0008ad6f) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0008b887) cale_bg_pane_g

0x78dc,	// (0x00083e56) list_cale_time_pane_ParamLimits

0x78dc,	// (0x00083e56) list_cale_time_pane

0x78f4,	// (0x00083e6e) list_cale_time_pane_g1_ParamLimits

0x78f4,	// (0x00083e6e) list_cale_time_pane_g1

0xe7fd,	// (0x0008ad77) list_cale_time_pane_g2_ParamLimits

0xe7fd,	// (0x0008ad77) list_cale_time_pane_g2

0x7900,	// (0x00083e7a) list_cale_time_pane_g3_ParamLimits

0x7900,	// (0x00083e7a) list_cale_time_pane_g3

0x790e,	// (0x00083e88) list_cale_time_pane_g4_ParamLimits

0x790e,	// (0x00083e88) list_cale_time_pane_g4

0x791c,	// (0x00083e96) list_cale_time_pane_g5_ParamLimits

0x791c,	// (0x00083e96) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0008b89a) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0008b89a) list_cale_time_pane_g

0x792a,	// (0x00083ea4) list_cale_time_pane_t1_ParamLimits

0x792a,	// (0x00083ea4) list_cale_time_pane_t1

0x7952,	// (0x00083ecc) list_cale_time_pane_t2_ParamLimits

0x7952,	// (0x00083ecc) list_cale_time_pane_t2

0x7cc1,	// (0x0008423b) aid_blid_cardinal_pane

0x7d03,	// (0x0008427d) compass_pane_t4

0x797a,	// (0x00083ef4) list_cale_time_pane_t4_ParamLimits

0x797a,	// (0x00083ef4) list_cale_time_pane_t4

0x7d11,	// (0x0008428b) compass_pane_t5

0x7d21,	// (0x0008429b) compass_pane_t6

0x7d2f,	// (0x000842a9) compass_pane_t7

0xec0b,	// (0x0008b185) navi_pane_cc_t1

0xed60,	// (0x0008b2da) aid_phob_thumbnail_center_pane

0x8515,	// (0x00084a8f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0008b8a7) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0008b8a7) list_cale_time_pane_t

0xdb8e,	// (0x0008a108) bg_popup_window_pane_cp02_ParamLimits

0xdb8e,	// (0x0008a108) bg_popup_window_pane_cp02

0xe817,	// (0x0008ad91) heading_pane_cp01_ParamLimits

0xe817,	// (0x0008ad91) heading_pane_cp01

0xe823,	// (0x0008ad9d) loc_req_pane_ParamLimits

0xe823,	// (0x0008ad9d) loc_req_pane

0xe833,	// (0x0008adad) loc_type_pane_ParamLimits

0xe833,	// (0x0008adad) loc_type_pane

0xe845,	// (0x0008adbf) loc_type_pane_t1_ParamLimits

0xe845,	// (0x0008adbf) loc_type_pane_t1

0xe857,	// (0x0008add1) loc_type_pane_t2_ParamLimits

0xe857,	// (0x0008add1) loc_type_pane_t2

0xe869,	// (0x0008ade3) loc_type_pane_t3_ParamLimits

0xe869,	// (0x0008ade3) loc_type_pane_t3

0x0002,

0xf334,	// (0x0008b8ae) loc_type_pane_t_ParamLimits

0xf334,	// (0x0008b8ae) loc_type_pane_t

0xe87b,	// (0x0008adf5) list_loc_req_pane

0xe885,	// (0x0008adff) scroll_pane_cp012

0x79a2,	// (0x00083f1c) list_single_loc_request_popup_menu_pane_ParamLimits

0x79a2,	// (0x00083f1c) list_single_loc_request_popup_menu_pane

0xe890,	// (0x0008ae0a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe890,	// (0x0008ae0a) list_single_loc_request_popup_menu_pane_g1

0xe89c,	// (0x0008ae16) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe89c,	// (0x0008ae16) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0008b8b5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0008b8b5) list_single_loc_request_popup_menu_pane_g

0xe8a8,	// (0x0008ae22) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe8a8,	// (0x0008ae22) list_single_loc_request_popup_menu_pane_t1

0x79b4,	// (0x00083f2e) bg_popup_window_pane_cp03_ParamLimits

0x79b4,	// (0x00083f2e) bg_popup_window_pane_cp03

0x79c2,	// (0x00083f3c) heading_loc_req_pane_ParamLimits

0x79c2,	// (0x00083f3c) heading_loc_req_pane

0x79ce,	// (0x00083f48) popup_dyc_status_message_window_g1_ParamLimits

0x79ce,	// (0x00083f48) popup_dyc_status_message_window_g1

0x79da,	// (0x00083f54) popup_dyc_status_message_window_t1_ParamLimits

0x79da,	// (0x00083f54) popup_dyc_status_message_window_t1

0x79ec,	// (0x00083f66) popup_dyc_status_message_window_t2_ParamLimits

0x79ec,	// (0x00083f66) popup_dyc_status_message_window_t2

0x79fe,	// (0x00083f78) popup_dyc_status_message_window_t3_ParamLimits

0x79fe,	// (0x00083f78) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0008b8ba) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0008b8ba) popup_dyc_status_message_window_t

0xdf37,	// (0x0008a4b1) bg_heading_pane_cp01

0xe8be,	// (0x0008ae38) heading_loc_req_pane_g1

0xe8c6,	// (0x0008ae40) heading_loc_req_pane_g2

0xe8ce,	// (0x0008ae48) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0008b8c1) heading_loc_req_pane_g

0xe8d6,	// (0x0008ae50) heading_loc_req_pane_t1

0xe8e6,	// (0x0008ae60) bg_popup_sub_pane_cp01_ParamLimits

0xe8e6,	// (0x0008ae60) bg_popup_sub_pane_cp01

0xe8f4,	// (0x0008ae6e) popup_cale_events_window_g1_ParamLimits

0xe8f4,	// (0x0008ae6e) popup_cale_events_window_g1

0xe914,	// (0x0008ae8e) popup_cale_events_window_g2_ParamLimits

0xe914,	// (0x0008ae8e) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0008b8f5) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0008b8f5) popup_cale_events_window_g

0xe934,	// (0x0008aeae) popup_cale_events_window_t1_ParamLimits

0xe934,	// (0x0008aeae) popup_cale_events_window_t1

0xe946,	// (0x0008aec0) popup_cale_events_window_t2_ParamLimits

0xe946,	// (0x0008aec0) popup_cale_events_window_t2

0xe984,	// (0x0008aefe) popup_cale_events_window_t3_ParamLimits

0xe984,	// (0x0008aefe) popup_cale_events_window_t3

0xe9be,	// (0x0008af38) popup_cale_events_window_t4_ParamLimits

0xe9be,	// (0x0008af38) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0008b8fa) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0008b8fa) popup_cale_events_window_t

0x7a82,	// (0x00083ffc) call_type_pane

0xe9f4,	// (0x0008af6e) popup_call_status_window_g1

0x7a8e,	// (0x00084008) popup_call_status_window_g2

0x7a9a,	// (0x00084014) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0008b903) popup_call_status_window_g

0xea02,	// (0x0008af7c) call_type_pane_g1

0xea0b,	// (0x0008af85) call_type_pane_g2

0x0001,

0xf390,	// (0x0008b90a) call_type_pane_g

0xdf37,	// (0x0008a4b1) bg_popup_sub_pane_cp02

0xea14,	// (0x0008af8e) listscroll_popup_wml_pane

0xea1c,	// (0x0008af96) list_wml_pane

0xea26,	// (0x0008afa0) scroll_pane_cp013

0xea31,	// (0x0008afab) list_single_graphic_popup_wml_pane_ParamLimits

0xea31,	// (0x0008afab) list_single_graphic_popup_wml_pane

0xe2b2,	// (0x0008a82c) list_single_graphic_popup_wml_pane_g1

0xea45,	// (0x0008afbf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0008b90f) list_single_graphic_popup_wml_pane_g

0xea4d,	// (0x0008afc7) list_single_graphic_popup_wml_pane_t1

0xea63,	// (0x0008afdd) aid_call_pane

0xe18a,	// (0x0008a704) popup_clock_analogue_window_g1

0xe18a,	// (0x0008a704) popup_clock_analogue_window_g2

0x7aa6,	// (0x00084020) popup_clock_analogue_window_g3

0x7aa6,	// (0x00084020) popup_clock_analogue_window_g4

0xe2b2,	// (0x0008a82c) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0008b914) popup_clock_analogue_window_g

0x7aae,	// (0x00084028) popup_clock_analogue_window_t1

0x7abc,	// (0x00084036) clock_digital_number_pane_ParamLimits

0x7abc,	// (0x00084036) clock_digital_number_pane

0x7ac8,	// (0x00084042) clock_digital_number_pane_cp02_ParamLimits

0x7ac8,	// (0x00084042) clock_digital_number_pane_cp02

0x7ad4,	// (0x0008404e) clock_digital_number_pane_cp03_ParamLimits

0x7ad4,	// (0x0008404e) clock_digital_number_pane_cp03

0x7ae0,	// (0x0008405a) clock_digital_number_pane_cp04_ParamLimits

0x7ae0,	// (0x0008405a) clock_digital_number_pane_cp04

0x7aec,	// (0x00084066) clock_digital_separator_pane_ParamLimits

0x7aec,	// (0x00084066) clock_digital_separator_pane

0x7af8,	// (0x00084072) popup_clock_digital_window_t1

0xe2b2,	// (0x0008a82c) clock_digital_number_pane_g1

0xe2b2,	// (0x0008a82c) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0008b882) clock_digital_number_pane_g

0xe2b2,	// (0x0008a82c) clock_digital_separator_pane_g1

0xe2b2,	// (0x0008a82c) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0008b882) clock_digital_separator_pane_g

0xdf37,	// (0x0008a4b1) bg_popup_window_pane_cp04

0xea6b,	// (0x0008afe5) heading_pane_cp03

0xea73,	// (0x0008afed) listscroll_popup_gms_pane

0xea7b,	// (0x0008aff5) grid_large_graphic_popup_pane

0xea85,	// (0x0008afff) listscroll_popup_gms_pane_g1

0xea8d,	// (0x0008b007) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0008b91f) listscroll_popup_gms_pane_g

0xe5bf,	// (0x0008ab39) scroll_pane_cp014

0x7b15,	// (0x0008408f) cell_large_graphic_popup_pane_ParamLimits

0x7b15,	// (0x0008408f) cell_large_graphic_popup_pane

0x7b2f,	// (0x000840a9) cell_large_graphic_popup_pane_g1_ParamLimits

0x7b2f,	// (0x000840a9) cell_large_graphic_popup_pane_g1

0xea95,	// (0x0008b00f) cell_large_graphic_popup_pane_g2_ParamLimits

0xea95,	// (0x0008b00f) cell_large_graphic_popup_pane_g2

0xeaa1,	// (0x0008b01b) cell_large_graphic_popup_pane_g3_ParamLimits

0xeaa1,	// (0x0008b01b) cell_large_graphic_popup_pane_g3

0xeaae,	// (0x0008b028) cell_large_graphic_popup_pane_g4_ParamLimits

0xeaae,	// (0x0008b028) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0008b924) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0008b924) cell_large_graphic_popup_pane_g

0xeabe,	// (0x0008b038) grid_highlight_pane_cp010

0xe2b2,	// (0x0008a82c) bg_popup_call_pane_g1

0xeac8,	// (0x0008b042) list_single_graphic_popup_conf_pane_ParamLimits

0xeac8,	// (0x0008b042) list_single_graphic_popup_conf_pane

0xeada,	// (0x0008b054) list_highlight_pane_cp01

0xeae3,	// (0x0008b05d) list_single_graphic_popup_conf_pane_g1

0xeaeb,	// (0x0008b065) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0008b92d) list_single_graphic_popup_conf_pane_g

0xeaf3,	// (0x0008b06d) list_single_graphic_popup_conf_pane_t1

0xeb01,	// (0x0008b07b) linegrid_cams_pane_g1

0x7b3b,	// (0x000840b5) linegrid_cams_pane_g2

0xe3f0,	// (0x0008a96a) linegrid_cams_pane_g3

0xeb0a,	// (0x0008b084) linegrid_cams_pane_g4

0x7b44,	// (0x000840be) linegrid_cams_pane_g5

0x7b4d,	// (0x000840c7) linegrid_cams_pane_g6

0xe3f9,	// (0x0008a973) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0008b932) linegrid_cams_pane_g

0xeb13,	// (0x0008b08d) popup_clock_analogue_window

0xeb13,	// (0x0008b08d) popup_clock_digital_window

0xdf37,	// (0x0008a4b1) popup_phob_thumbnail_window

0xe2b2,	// (0x0008a82c) call_video_uplink_pane_g1

0xeb1c,	// (0x0008b096) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0008b941) call_video_uplink_pane_g

0xeb24,	// (0x0008b09e) video_uplink_pane

0xeb2c,	// (0x0008b0a6) mce_image_pane_g1

0x7b58,	// (0x000840d2) mce_image_pane_g2

0x7b62,	// (0x000840dc) mce_image_pane_g3

0x7b6c,	// (0x000840e6) mce_image_pane_g4

0x7b74,	// (0x000840ee) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0008b946) mce_image_pane_g

0xeb36,	// (0x0008b0b0) control_top_pane_stacon_cp01_ParamLimits

0xeb36,	// (0x0008b0b0) control_top_pane_stacon_cp01

0xeb4a,	// (0x0008b0c4) uni_indicator_pane_stacon_cp01_ParamLimits

0xeb4a,	// (0x0008b0c4) uni_indicator_pane_stacon_cp01

0xeb5b,	// (0x0008b0d5) bg_popup_sub_pane_cp03

0x7b7c,	// (0x000840f6) chi_dic_find_pane

0x7b84,	// (0x000840fe) listscroll_chi_dic_pane

0x7b8d,	// (0x00084107) main_pane_chidic_g1

0x7ba0,	// (0x0008411a) chi_dic_find_pane_t1

0xeb65,	// (0x0008b0df) find_chidic_pane

0xeb6e,	// (0x0008b0e8) chi_dic_list_pane_ParamLimits

0xeb6e,	// (0x0008b0e8) chi_dic_list_pane

0xeb7f,	// (0x0008b0f9) scroll_pane_cp020

0x7bae,	// (0x00084128) find_chidic_pane_t1

0xdf37,	// (0x0008a4b1) input_focus_pane_cp06

0x7bbd,	// (0x00084137) list_chi_dic_pane_ParamLimits

0x7bbd,	// (0x00084137) list_chi_dic_pane

0x7bd5,	// (0x0008414f) list_chi_dic_pane_t1_ParamLimits

0x7bd5,	// (0x0008414f) list_chi_dic_pane_t1

0xdf37,	// (0x0008a4b1) list_highlight_pane_cp020

0xeb87,	// (0x0008b101) bg_cale_heading_pane_g1

0x7be8,	// (0x00084162) bg_cale_heading_pane_g2

0x7bf0,	// (0x0008416a) bg_cale_heading_pane_g3

0x7bf8,	// (0x00084172) bg_cale_heading_pane_g4

0x7c02,	// (0x0008417c) bg_cale_heading_pane_g5

0x7c0c,	// (0x00084186) bg_cale_heading_pane_g6

0x7c14,	// (0x0008418e) bg_cale_heading_pane_g7

0x7c1c,	// (0x00084196) bg_cale_heading_pane_g8

0x7c26,	// (0x000841a0) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0008b951) bg_cale_heading_pane_g

0xeb87,	// (0x0008b101) bg_cale_side_pane_g1

0x7c30,	// (0x000841aa) bg_cale_side_pane_g2

0x7c38,	// (0x000841b2) bg_cale_side_pane_g3

0x7c40,	// (0x000841ba) bg_cale_side_pane_g4

0x7c48,	// (0x000841c2) bg_cale_side_pane_g5

0x7c50,	// (0x000841ca) bg_cale_side_pane_g6

0x7c58,	// (0x000841d2) bg_cale_side_pane_g7

0x7c60,	// (0x000841da) bg_cale_side_pane_g8

0x7c68,	// (0x000841e2) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0008b964) bg_cale_side_pane_g

0x7c70,	// (0x000841ea) popup_call_status_window_ParamLimits

0x7c70,	// (0x000841ea) popup_call_status_window

0xeb8f,	// (0x0008b109) stacon_top_pane

0xeb97,	// (0x0008b111) status_pane_ParamLimits

0xeb97,	// (0x0008b111) status_pane

0xebac,	// (0x0008b126) status_small_pane

0xebb4,	// (0x0008b12e) control_pane

0xdf37,	// (0x0008a4b1) stacon_bottom_pane

0xebbc,	// (0x0008b136) list_single_mce_smart_pane_t1_ParamLimits

0xebbc,	// (0x0008b136) list_single_mce_smart_pane_t1

0xebcf,	// (0x0008b149) list_single_mce_smart_pane_t2_ParamLimits

0xebcf,	// (0x0008b149) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0008b977) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0008b977) list_single_mce_smart_pane_t

0x7c7c,	// (0x000841f6) compass_pane

0x7c87,	// (0x00084201) main_location2_pane_t1

0x7c9b,	// (0x00084215) main_location2_pane_t2

0x7c9b,	// (0x00084215) main_location2_pane_t3

0x0003,

0xf402,	// (0x0008b97c) main_location2_pane_t

0xebee,	// (0x0008b168) compass_pane_g1_ParamLimits

0xebee,	// (0x0008b168) compass_pane_g1

0x7ce5,	// (0x0008425f) compass_pane_t1

0x7cf4,	// (0x0008426e) compass_pane_t2

0x0005,

0xf40b,	// (0x0008b985) compass_pane_t

0x7d3f,	// (0x000842b9) text_secondary_cp61

0xec02,	// (0x0008b17c) navi_pane_cams_g5

0xec25,	// (0x0008b19f) navi_pane_im_t1

0xec33,	// (0x0008b1ad) navi_pane_mp_g1_ParamLimits

0xec33,	// (0x0008b1ad) navi_pane_mp_g1

0xec47,	// (0x0008b1c1) navi_pane_mp_g2_ParamLimits

0xec47,	// (0x0008b1c1) navi_pane_mp_g2

0xec53,	// (0x0008b1cd) navi_pane_mp_g3_ParamLimits

0xec53,	// (0x0008b1cd) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0008b999) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0008b999) navi_pane_mp_g

0xec5f,	// (0x0008b1d9) navi_pane_mp_t1

0xec6d,	// (0x0008b1e7) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0008b9a0) navi_pane_mp_t

0xeca9,	// (0x0008b223) navi_pane_vt_g1

0xec5f,	// (0x0008b1d9) navi_pane_vt_t1

0xecb1,	// (0x0008b22b) navi_slider_pane

0xecb9,	// (0x0008b233) zooming_pane

0xecc1,	// (0x0008b23b) navi_slider_pane_g1

0x7e56,	// (0x000843d0) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0008b9a7) navi_slider_pane_g

0xece5,	// (0x0008b25f) aid_levels_zoom

0xeced,	// (0x0008b267) zooming_pane_g1

0xecf5,	// (0x0008b26f) zooming_pane_g2

0xecf5,	// (0x0008b26f) zooming_pane_g3

0x0002,

0xf43c,	// (0x0008b9b6) zooming_pane_g

0xecfd,	// (0x0008b277) level_10_zoom

0xed06,	// (0x0008b280) level_11_zoom

0xed0f,	// (0x0008b289) level_1_zoom

0xed18,	// (0x0008b292) level_2_zoom

0xed21,	// (0x0008b29b) level_3_zoom

0xed2a,	// (0x0008b2a4) level_4_zoom

0xed33,	// (0x0008b2ad) level_5_zoom

0xed3c,	// (0x0008b2b6) level_6_zoom

0xed45,	// (0x0008b2bf) level_7_zoom

0xed4e,	// (0x0008b2c8) level_8_zoom

0xed57,	// (0x0008b2d1) level_9_zoom

0xed68,	// (0x0008b2e2) popup_phob_thumbnail_window_g1

0xed70,	// (0x0008b2ea) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0008b9bd) popup_phob_thumbnail_window_g

0x17f1,	// (0x0007dd6b) level_1_location

0x17f9,	// (0x0007dd73) level_2_location

0x1801,	// (0x0007dd7b) level_3_location

0x1809,	// (0x0007dd83) level_4_location

0xecb9,	// (0x0008b233) level_5_location

0x7e68,	// (0x000843e2) mce_icon_pane_g1

0x7e70,	// (0x000843ea) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0008b9c2) mce_icon_pane_g

0x7e78,	// (0x000843f2) main_mup_pane_g1_ParamLimits

0x7e78,	// (0x000843f2) main_mup_pane_g1

0x7e90,	// (0x0008440a) main_mup_pane_g2_ParamLimits

0x7e90,	// (0x0008440a) main_mup_pane_g2

0x7eac,	// (0x00084426) main_mup_pane_g3_ParamLimits

0x7eac,	// (0x00084426) main_mup_pane_g3

0x7ec8,	// (0x00084442) main_mup_pane_g4_ParamLimits

0x7ec8,	// (0x00084442) main_mup_pane_g4

0x7edc,	// (0x00084456) main_mup_pane_g5_ParamLimits

0x7edc,	// (0x00084456) main_mup_pane_g5

0x7efd,	// (0x00084477) main_mup_pane_g6_ParamLimits

0x7efd,	// (0x00084477) main_mup_pane_g6

0x7f1d,	// (0x00084497) main_mup_pane_g7_ParamLimits

0x7f1d,	// (0x00084497) main_mup_pane_g7

0x7f41,	// (0x000844bb) main_mup_pane_g8_ParamLimits

0x7f41,	// (0x000844bb) main_mup_pane_g8

0x7f65,	// (0x000844df) main_mup_pane_g9_ParamLimits

0x7f65,	// (0x000844df) main_mup_pane_g9

0x7f88,	// (0x00084502) main_mup_pane_g10_ParamLimits

0x7f88,	// (0x00084502) main_mup_pane_g10

0x7fab,	// (0x00084525) main_mup_pane_g11_ParamLimits

0x7fab,	// (0x00084525) main_mup_pane_g11

0x7fcb,	// (0x00084545) main_mup_pane_g12_ParamLimits

0x7fcb,	// (0x00084545) main_mup_pane_g12

0x7fd9,	// (0x00084553) main_mup_pane_g13_ParamLimits

0x7fd9,	// (0x00084553) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0008b9c7) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0008b9c7) main_mup_pane_g

0x7fef,	// (0x00084569) main_mup_pane_t1_ParamLimits

0x7fef,	// (0x00084569) main_mup_pane_t1

0x800e,	// (0x00084588) main_mup_pane_t2_ParamLimits

0x800e,	// (0x00084588) main_mup_pane_t2

0x8028,	// (0x000845a2) main_mup_pane_t3_ParamLimits

0x8028,	// (0x000845a2) main_mup_pane_t3

0x8042,	// (0x000845bc) main_mup_pane_t4_ParamLimits

0x8042,	// (0x000845bc) main_mup_pane_t4

0x8054,	// (0x000845ce) main_mup_pane_t5_ParamLimits

0x8054,	// (0x000845ce) main_mup_pane_t5

0x8066,	// (0x000845e0) main_mup_pane_t6_ParamLimits

0x8066,	// (0x000845e0) main_mup_pane_t6

0x0005,

0xf468,	// (0x0008b9e2) main_mup_pane_t_ParamLimits

0xf468,	// (0x0008b9e2) main_mup_pane_t

0x807c,	// (0x000845f6) mup_progress_pane_ParamLimits

0x807c,	// (0x000845f6) mup_progress_pane

0x8088,	// (0x00084602) mup_visualizer_pane_ParamLimits

0x8088,	// (0x00084602) mup_visualizer_pane

0x80c6,	// (0x00084640) mup_volume_pane_ParamLimits

0x80c6,	// (0x00084640) mup_volume_pane

0xe9f4,	// (0x0008af6e) mup_visualizer_pane_g1_ParamLimits

0xe9f4,	// (0x0008af6e) mup_visualizer_pane_g1

0xe9f4,	// (0x0008af6e) mup_visualizer_pane_g2_ParamLimits

0xe9f4,	// (0x0008af6e) mup_visualizer_pane_g2

0xebee,	// (0x0008b168) mup_visualizer_pane_g3_ParamLimits

0xebee,	// (0x0008b168) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0008b9ef) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0008b9ef) mup_visualizer_pane_g

0xe2b2,	// (0x0008a82c) mup_volume_pane_g1

0xed80,	// (0x0008b2fa) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0008b9f6) mup_volume_pane_g

0xe2b2,	// (0x0008a82c) mup_progress_pane_g1

0xed89,	// (0x0008b303) mup_progress_pane_g2

0xed92,	// (0x0008b30c) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0008b9fb) mup_progress_pane_g

0xdf37,	// (0x0008a4b1) bg_popup_window_pane_cp05

0xed9b,	// (0x0008b315) heading_pane_cp02_ParamLimits

0xed9b,	// (0x0008b315) heading_pane_cp02

0xedb7,	// (0x0008b331) list_popup_blid_pane

0xedbf,	// (0x0008b339) list_blid_sat_info_pane_ParamLimits

0xedbf,	// (0x0008b339) list_blid_sat_info_pane

0xedd2,	// (0x0008b34c) list_blid_sat_info_pane_g1

0xedda,	// (0x0008b354) list_blid_sat_info_pane_t1

0x81e5,	// (0x0008475f) mup_equalizer_pane_ParamLimits

0x81e5,	// (0x0008475f) mup_equalizer_pane

0x8206,	// (0x00084780) mup_equalizer_pane_cp1_ParamLimits

0x8206,	// (0x00084780) mup_equalizer_pane_cp1

0x8227,	// (0x000847a1) mup_equalizer_pane_cp2_ParamLimits

0x8227,	// (0x000847a1) mup_equalizer_pane_cp2

0x8248,	// (0x000847c2) mup_equalizer_pane_cp3_ParamLimits

0x8248,	// (0x000847c2) mup_equalizer_pane_cp3

0x826d,	// (0x000847e7) mup_equalizer_pane_cp4_ParamLimits

0x826d,	// (0x000847e7) mup_equalizer_pane_cp4

0x8292,	// (0x0008480c) mup_equalizer_pane_cp5

0x82aa,	// (0x00084824) mup_equalizer_pane_cp6

0x82c2,	// (0x0008483c) mup_equalizer_pane_cp7

0x170b,	// (0x0007dc85) bg_popup_call_poc_act_pane_g9

0x1713,	// (0x0007dc8d) bg_popup_call_poc_act_pane_g10

0x171b,	// (0x0007dc95) bg_popup_call_poc_act_pane_g11

0x000a,

0xe192,	// (0x0008a70c) mup_scale_pane

0xe2b2,	// (0x0008a82c) mup_scale_pane_g1

0xede8,	// (0x0008b362) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0008ba17) mup_scale_pane_g

0xee0c,	// (0x0008b386) msg_data_pane

0xee14,	// (0x0008b38e) scroll_pane_cp017

0x82ec,	// (0x00084866) bg_list_pane_cp04_ParamLimits

0x82ec,	// (0x00084866) bg_list_pane_cp04

0xee1c,	// (0x0008b396) msg_data_pane_g1

0x8314,	// (0x0008488e) msg_data_pane_g2

0x831e,	// (0x00084898) msg_data_pane_g3

0x8328,	// (0x000848a2) msg_data_pane_g4

0x8330,	// (0x000848aa) msg_data_pane_g5

0x8338,	// (0x000848b2) msg_data_pane_g6

0x8340,	// (0x000848ba) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0008ba26) msg_data_pane_g

0x8348,	// (0x000848c2) msg_text_pane_ParamLimits

0x8348,	// (0x000848c2) msg_text_pane

0x8374,	// (0x000848ee) qrid_highlight_pane_cp011_ParamLimits

0x8374,	// (0x000848ee) qrid_highlight_pane_cp011

0xdf37,	// (0x0008a4b1) msg_body_pane

0xdf37,	// (0x0008a4b1) msg_header_pane

0xee2d,	// (0x0008b3a7) input_focus_pane_cp07

0x8398,	// (0x00084912) msg_header_pane_t1_ParamLimits

0x8398,	// (0x00084912) msg_header_pane_t1

0x83ac,	// (0x00084926) msg_header_pane_t2_ParamLimits

0x83ac,	// (0x00084926) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0008ba3a) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0008ba3a) msg_header_pane_t

0xee42,	// (0x0008b3bc) msg_body_pane_g1

0x83be,	// (0x00084938) msg_body_pane_t1_ParamLimits

0x83be,	// (0x00084938) msg_body_pane_t1

0x83ef,	// (0x00084969) msg_body_pane_t2_ParamLimits

0x83ef,	// (0x00084969) msg_body_pane_t2

0x8401,	// (0x0008497b) msg_body_pane_t3_ParamLimits

0x8401,	// (0x0008497b) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0008ba3f) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0008ba3f) msg_body_pane_t

0x8465,	// (0x000849df) main_viewer_pane_g1_ParamLimits

0x8465,	// (0x000849df) main_viewer_pane_g1

0x8471,	// (0x000849eb) main_viewer_pane_g2_ParamLimits

0x8471,	// (0x000849eb) main_viewer_pane_g2

0x847d,	// (0x000849f7) main_viewer_pane_g3_ParamLimits

0x847d,	// (0x000849f7) main_viewer_pane_g3

0x848e,	// (0x00084a08) main_viewer_pane_g4_ParamLimits

0x848e,	// (0x00084a08) main_viewer_pane_g4

0x849f,	// (0x00084a19) main_viewer_pane_g5_ParamLimits

0x849f,	// (0x00084a19) main_viewer_pane_g5

0x849f,	// (0x00084a19) main_viewer_pane_g7_ParamLimits

0x849f,	// (0x00084a19) main_viewer_pane_g7

0x84b1,	// (0x00084a2b) main_viewer_pane_g8_ParamLimits

0x84b1,	// (0x00084a2b) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0008ba4f) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0008ba4f) main_viewer_pane_g

0xee4a,	// (0x0008b3c4) viewer_content_pane_ParamLimits

0xee4a,	// (0x0008b3c4) viewer_content_pane

0x84e9,	// (0x00084a63) main_postcard_pane_g1_ParamLimits

0x84e9,	// (0x00084a63) main_postcard_pane_g1

0x84f7,	// (0x00084a71) main_postcard_pane_g2_ParamLimits

0x84f7,	// (0x00084a71) main_postcard_pane_g2

0x8505,	// (0x00084a7f) main_postcard_pane_g3_ParamLimits

0x8505,	// (0x00084a7f) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0008ba60) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0008ba60) main_postcard_pane_g

0x8515,	// (0x00084a8f) main_postcard_pane_g4

0x1928,	// (0x0007dea2) smil_status_volume_pane_g2

0x8541,	// (0x00084abb) postcard_pane_ParamLimits

0x8541,	// (0x00084abb) postcard_pane

0xe9f4,	// (0x0008af6e) postcard_pane_g1_ParamLimits

0xe9f4,	// (0x0008af6e) postcard_pane_g1

0x857b,	// (0x00084af5) postcard_pane_g2_ParamLimits

0x857b,	// (0x00084af5) postcard_pane_g2

0x8587,	// (0x00084b01) postcard_pane_g3_ParamLimits

0x8587,	// (0x00084b01) postcard_pane_g3

0xee58,	// (0x0008b3d2) postcard_pane_g4_ParamLimits

0xee58,	// (0x0008b3d2) postcard_pane_g4

0x8593,	// (0x00084b0d) postcard_pane_g5_ParamLimits

0x8593,	// (0x00084b0d) postcard_pane_g5

0x859f,	// (0x00084b19) postcard_pane_g6_ParamLimits

0x859f,	// (0x00084b19) postcard_pane_g6

0xee66,	// (0x0008b3e0) postcard_pane_g7_ParamLimits

0xee66,	// (0x0008b3e0) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0008ba6d) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0008ba6d) postcard_pane_g

0x85ad,	// (0x00084b27) main_mp2_pane_g1_ParamLimits

0x85ad,	// (0x00084b27) main_mp2_pane_g1

0x85bb,	// (0x00084b35) main_mp2_pane_g2_ParamLimits

0x85bb,	// (0x00084b35) main_mp2_pane_g2

0x85c7,	// (0x00084b41) main_mp2_pane_g3_ParamLimits

0x85c7,	// (0x00084b41) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0008ba7c) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0008ba7c) main_mp2_pane_g

0x85d3,	// (0x00084b4d) main_mp2_pane_t1_ParamLimits

0x85d3,	// (0x00084b4d) main_mp2_pane_t1

0x85ea,	// (0x00084b64) main_mp2_pane_t2_ParamLimits

0x85ea,	// (0x00084b64) main_mp2_pane_t2

0x85fe,	// (0x00084b78) main_mp2_pane_t3_ParamLimits

0x85fe,	// (0x00084b78) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0008ba83) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0008ba83) main_mp2_pane_t

0xee74,	// (0x0008b3ee) pec_content_pane_ParamLimits

0xee74,	// (0x0008b3ee) pec_content_pane

0xe5bf,	// (0x0008ab39) scroll_pane_cp015

0xee86,	// (0x0008b400) pec_attribute_pane_ParamLimits

0xee86,	// (0x0008b400) pec_attribute_pane

0x8610,	// (0x00084b8a) pec_content_pane_g1_ParamLimits

0x8610,	// (0x00084b8a) pec_content_pane_g1

0xee96,	// (0x0008b410) pec_content_pane_t1_ParamLimits

0xee96,	// (0x0008b410) pec_content_pane_t1

0xeea8,	// (0x0008b422) pec_content_pane_t2_ParamLimits

0xeea8,	// (0x0008b422) pec_content_pane_t2

0x0001,

0xf510,	// (0x0008ba8a) pec_content_pane_t_ParamLimits

0xf510,	// (0x0008ba8a) pec_content_pane_t

0x861c,	// (0x00084b96) list_single_graphic_pane_cp01_ParamLimits

0x861c,	// (0x00084b96) list_single_graphic_pane_cp01

0xe192,	// (0x0008a70c) bg_popup_sub_pane_cp04

0xeeba,	// (0x0008b434) popup_mup_playback_window_g1

0xeec6,	// (0x0008b440) popup_mup_playback_window_t1

0xeedb,	// (0x0008b455) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0008ba8f) popup_mup_playback_window_t

0xef12,	// (0x0008b48c) main_image_pane_g1_ParamLimits

0xef12,	// (0x0008b48c) main_image_pane_g1

0xef55,	// (0x0008b4cf) scroll_pane_cp018_ParamLimits

0xef55,	// (0x0008b4cf) scroll_pane_cp018

0xef6d,	// (0x0008b4e7) scroll_pane_cp016_ParamLimits

0xef6d,	// (0x0008b4e7) scroll_pane_cp016

0x86ad,	// (0x00084c27) smil2_image_pane_ParamLimits

0x86ad,	// (0x00084c27) smil2_image_pane

0x86e3,	// (0x00084c5d) smil2_root_pane_ParamLimits

0x86e3,	// (0x00084c5d) smil2_root_pane

0x870f,	// (0x00084c89) smil2_text_pane_ParamLimits

0x870f,	// (0x00084c89) smil2_text_pane

0xdf37,	// (0x0008a4b1) bg_list_pane_cp06

0xefa9,	// (0x0008b523) grid_radio_pane

0xdf37,	// (0x0008a4b1) bg_popup_window_pane_cp06

0xefb3,	// (0x0008b52d) main_fmradio_pane_t1

0xea6b,	// (0x0008afe5) heading_pane_cp04

0xefc1,	// (0x0008b53b) main_fmradio_pane_t2

0x1723,	// (0x0007dc9d) popup_cale_lunar_info_window_g1

0xefcf,	// (0x0008b549) main_fmradio_pane_t3

0x172b,	// (0x0007dca5) popup_cale_lunar_info_window_g2

0xefdf,	// (0x0008b559) main_fmradio_pane_t4

0x0001,

0xefed,	// (0x0008b567) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0008bb6a) popup_cale_lunar_info_window_g

0xf52a,	// (0x0008baa4) main_fmradio_pane_t

0xeffb,	// (0x0008b575) wait_bar_pane_cp03

0xf003,	// (0x0008b57d) cell_fmradio_pane_ParamLimits

0xf003,	// (0x0008b57d) cell_fmradio_pane

0xee66,	// (0x0008b3e0) cell_fmradio_pane_g1_ParamLimits

0xee66,	// (0x0008b3e0) cell_fmradio_pane_g1

0xdf37,	// (0x0008a4b1) grid_highlight_pane_cp011

0xf018,	// (0x0008b592) poc_content_pane_ParamLimits

0xf018,	// (0x0008b592) poc_content_pane

0xf02a,	// (0x0008b5a4) scroll_pane_cp019

0x874f,	// (0x00084cc9) popup_call_poc_act_window_ParamLimits

0x874f,	// (0x00084cc9) popup_call_poc_act_window

0x875c,	// (0x00084cd6) popup_call_poc_inact_window_ParamLimits

0x875c,	// (0x00084cd6) popup_call_poc_inact_window

0xf5c7,	// (0x0008bb41) bg_popup_call_poc_act_pane_g

0x169b,	// (0x0007dc15) bg_popup_call_poc_inact_pane_g1

0x16a3,	// (0x0007dc1d) bg_popup_call_poc_inact_pane_g2

0xf032,	// (0x0008b5ac) popup_call_poc_act_window_g2

0x16ab,	// (0x0007dc25) bg_popup_call_poc_inact_pane_g3

0x16b3,	// (0x0007dc2d) bg_popup_call_poc_inact_pane_g4

0x16bb,	// (0x0007dc35) bg_popup_call_poc_inact_pane_g5

0xf03a,	// (0x0008b5b4) popup_call_poc_act_window_t1_ParamLimits

0xf03a,	// (0x0008b5b4) popup_call_poc_act_window_t1

0xf062,	// (0x0008b5dc) popup_call_poc_act_window_t2_ParamLimits

0xf062,	// (0x0008b5dc) popup_call_poc_act_window_t2

0xf08a,	// (0x0008b604) popup_call_poc_act_window_t3_ParamLimits

0xf08a,	// (0x0008b604) popup_call_poc_act_window_t3

0xf0b2,	// (0x0008b62c) popup_call_poc_act_window_t4_ParamLimits

0xf0b2,	// (0x0008b62c) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0008baaf) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0008baaf) popup_call_poc_act_window_t

0x16c3,	// (0x0007dc3d) bg_popup_call_poc_inact_pane_g6

0x16cb,	// (0x0007dc45) bg_popup_call_poc_inact_pane_g7

0x16d3,	// (0x0007dc4d) bg_popup_call_poc_inact_pane_g8

0xf0c4,	// (0x0008b63e) popup_call_poc_inact_window_g2

0x16db,	// (0x0007dc55) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0008bb2e) bg_popup_call_poc_inact_pane_g

0xf0cc,	// (0x0008b646) popup_call_poc_inact_window_t1_ParamLimits

0xf0cc,	// (0x0008b646) popup_call_poc_inact_window_t1

0x0867,	// (0x0007cde1) popup_call_poc_inact_window_t2_ParamLimits

0x0867,	// (0x0007cde1) popup_call_poc_inact_window_t2

0x087c,	// (0x0007cdf6) popup_call_poc_inact_window_t3_ParamLimits

0x087c,	// (0x0007cdf6) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0008bab8) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0008bab8) popup_call_poc_inact_window_t

0x189b,	// (0x0007de15) context_pane_ParamLimits

0x8d6e,	// (0x000852e8) signal_pane_ParamLimits

0xecb9,	// (0x0008b233) main_call2_pane

0x1889,	// (0x0007de03) popup_phob_thumbnail2_window_ParamLimits

0x1889,	// (0x0007de03) popup_phob_thumbnail2_window

0x8413,	// (0x0008498d) aid_hotspot_pointer_arrow_pane

0x841b,	// (0x00084995) aid_hotspot_pointer_hand_pane

0x8a84,	// (0x00084ffe) phob_pre_status_pane_g5

0x6889,	// (0x00082e03) cams_zoom_pane_ParamLimits

0x6895,	// (0x00082e0f) image_vga_pane_ParamLimits

0x68a4,	// (0x00082e1e) main_camera_pane_g1_ParamLimits

0x68b2,	// (0x00082e2c) main_camera_pane_g2_ParamLimits

0x68be,	// (0x00082e38) main_camera_pane_g3_ParamLimits

0x68cc,	// (0x00082e46) main_camera_pane_g4_ParamLimits

0x68da,	// (0x00082e54) main_camera_pane_g5_ParamLimits

0x68e8,	// (0x00082e62) main_camera_pane_g6_ParamLimits

0x68f6,	// (0x00082e70) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0008b7b7) main_camera_pane_g_ParamLimits

0x6904,	// (0x00082e7e) main_camera_pane_t1_ParamLimits

0x6916,	// (0x00082e90) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0008b7c8) main_camera_pane_t_ParamLimits

0xe192,	// (0x0008a70c) bg_popup_preview_window_pane_cp01_ParamLimits

0xe192,	// (0x0008a70c) bg_popup_preview_window_pane_cp01

0x0891,	// (0x0007ce0b) popup_phob_thumbnail2_window_g1_ParamLimits

0x0891,	// (0x0007ce0b) popup_phob_thumbnail2_window_g1

0xdf37,	// (0x0008a4b1) call2_cli_visual_pane

0x8778,	// (0x00084cf2) popup_call2_audio_conf_window_ParamLimits

0x8778,	// (0x00084cf2) popup_call2_audio_conf_window

0x8791,	// (0x00084d0b) popup_call2_audio_first_window_ParamLimits

0x8791,	// (0x00084d0b) popup_call2_audio_first_window

0x882f,	// (0x00084da9) popup_call2_audio_in_window_ParamLimits

0x882f,	// (0x00084da9) popup_call2_audio_in_window

0x8873,	// (0x00084ded) popup_call2_audio_out_window_ParamLimits

0x8873,	// (0x00084ded) popup_call2_audio_out_window

0x88dd,	// (0x00084e57) popup_call2_audio_second_window_ParamLimits

0x88dd,	// (0x00084e57) popup_call2_audio_second_window

0x893b,	// (0x00084eb5) popup_call2_audio_wait_window_ParamLimits

0x893b,	// (0x00084eb5) popup_call2_audio_wait_window

0xdf37,	// (0x0008a4b1) bg_popup_call2_act_pane_cp03

0xe174,	// (0x0008a6ee) list_conf_pane_cp

0x089d,	// (0x0007ce17) popup_call2_audio_conf_window_t1

0x08ab,	// (0x0007ce25) list_single_graphic_popup_conf2_pane_ParamLimits

0x08ab,	// (0x0007ce25) list_single_graphic_popup_conf2_pane

0xeada,	// (0x0008b054) list_highlight_pane_cp04

0x08be,	// (0x0007ce38) list_single_graphic_popup_conf2_pane_g1

0xeaeb,	// (0x0008b065) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0008babf) list_single_graphic_popup_conf2_pane_g

0x08c8,	// (0x0007ce42) list_single_graphic_popup_conf2_pane_t1

0x08d6,	// (0x0007ce50) bg_popup_call2_act_pane_cp01_ParamLimits

0x08d6,	// (0x0007ce50) bg_popup_call2_act_pane_cp01

0x0960,	// (0x0007ceda) call_type_pane_cp05_ParamLimits

0x0960,	// (0x0007ceda) call_type_pane_cp05

0x09b4,	// (0x0007cf2e) popup_call2_audio_second_window_g1_ParamLimits

0x09b4,	// (0x0007cf2e) popup_call2_audio_second_window_g1

0x0a08,	// (0x0007cf82) popup_call2_audio_second_window_g2_ParamLimits

0x0a08,	// (0x0007cf82) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0008bac4) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0008bac4) popup_call2_audio_second_window_g

0x0a6d,	// (0x0007cfe7) popup_call2_audio_second_window_t1_ParamLimits

0x0a6d,	// (0x0007cfe7) popup_call2_audio_second_window_t1

0x0b28,	// (0x0007d0a2) popup_call2_audio_second_window_t2_ParamLimits

0x0b28,	// (0x0007d0a2) popup_call2_audio_second_window_t2

0x0b7b,	// (0x0007d0f5) popup_call2_audio_second_window_t3_ParamLimits

0x0b7b,	// (0x0007d0f5) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0008bacb) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0008bacb) popup_call2_audio_second_window_t

0xdf37,	// (0x0008a4b1) bg_popup_call2_in_pane_cp02

0xdf41,	// (0x0008a4bb) call_type_pane_cp04

0xdf49,	// (0x0008a4c3) popup_call2_audio_wait_window_g1

0xdf51,	// (0x0008a4cb) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0008b6a4) popup_call2_audio_wait_window_g

0xdf59,	// (0x0008a4d3) popup_call2_audio_wait_window_t3

0x0c6e,	// (0x0007d1e8) bg_popup_call2_act_pane_ParamLimits

0x0c6e,	// (0x0007d1e8) bg_popup_call2_act_pane

0x0d2e,	// (0x0007d2a8) call_type_pane_cp03_ParamLimits

0x0d2e,	// (0x0007d2a8) call_type_pane_cp03

0x0d92,	// (0x0007d30c) popup_call2_audio_first_window_g1_ParamLimits

0x0d92,	// (0x0007d30c) popup_call2_audio_first_window_g1

0x0e02,	// (0x0007d37c) popup_call2_audio_first_window_g2_ParamLimits

0x0e02,	// (0x0007d37c) popup_call2_audio_first_window_g2

0xe9f4,	// (0x0008af6e) popup_call2_audio_first_window_g3_ParamLimits

0xe9f4,	// (0x0008af6e) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0008bad4) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0008bad4) popup_call2_audio_first_window_g

0x0ee0,	// (0x0007d45a) popup_call2_audio_first_window_t1_ParamLimits

0x0ee0,	// (0x0007d45a) popup_call2_audio_first_window_t1

0x0fe3,	// (0x0007d55d) popup_call2_audio_first_window_t4_ParamLimits

0x0fe3,	// (0x0007d55d) popup_call2_audio_first_window_t4

0x10c6,	// (0x0007d640) popup_call2_audio_first_window_t5_ParamLimits

0x10c6,	// (0x0007d640) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0008badf) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0008badf) popup_call2_audio_first_window_t

0xe18a,	// (0x0008a704) bg_popup_call2_act_pane_g1

0x1735,	// (0x0007dcaf) popup_cale_lunar_info_window_t1

0x1743,	// (0x0007dcbd) popup_cale_lunar_info_window_t2

0x1751,	// (0x0007dccb) popup_cale_lunar_info_window_t3

0xdf37,	// (0x0008a4b1) bg_popup_call2_bubble_pane

0x11c7,	// (0x0007d741) bg_popup_call2_in_pane_cp01_ParamLimits

0x11c7,	// (0x0007d741) bg_popup_call2_in_pane_cp01

0xdc13,	// (0x0008a18d) call_type_pane_cp02

0x120f,	// (0x0007d789) popup_call2_audio_out_window_g1_ParamLimits

0x120f,	// (0x0007d789) popup_call2_audio_out_window_g1

0x123b,	// (0x0007d7b5) popup_call2_audio_out_window_g2_ParamLimits

0x123b,	// (0x0007d7b5) popup_call2_audio_out_window_g2

0x1263,	// (0x0007d7dd) popup_call2_audio_out_window_g3_ParamLimits

0x1263,	// (0x0007d7dd) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0008bae8) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0008bae8) popup_call2_audio_out_window_g

0x129e,	// (0x0007d818) popup_call2_audio_out_window_t1_ParamLimits

0x129e,	// (0x0007d818) popup_call2_audio_out_window_t1

0x12fd,	// (0x0007d877) popup_call2_audio_out_window_t2_ParamLimits

0x12fd,	// (0x0007d877) popup_call2_audio_out_window_t2

0x1351,	// (0x0007d8cb) popup_call2_audio_out_window_t3_ParamLimits

0x1351,	// (0x0007d8cb) popup_call2_audio_out_window_t3

0x1367,	// (0x0007d8e1) popup_call2_audio_out_window_t4_ParamLimits

0x1367,	// (0x0007d8e1) popup_call2_audio_out_window_t4

0x137d,	// (0x0007d8f7) popup_call2_audio_out_window_t5_ParamLimits

0x137d,	// (0x0007d8f7) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0008baf1) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0008baf1) popup_call2_audio_out_window_t

0x13e1,	// (0x0007d95b) bg_popup_call2_in_pane_ParamLimits

0x13e1,	// (0x0007d95b) bg_popup_call2_in_pane

0x143d,	// (0x0007d9b7) popup_call2_audio_in_window_g1_ParamLimits

0x143d,	// (0x0007d9b7) popup_call2_audio_in_window_g1

0x1475,	// (0x0007d9ef) popup_call2_audio_in_window_g2_ParamLimits

0x1475,	// (0x0007d9ef) popup_call2_audio_in_window_g2

0x14ad,	// (0x0007da27) popup_call2_audio_in_window_g3_ParamLimits

0x14ad,	// (0x0007da27) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0008bafe) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0008bafe) popup_call2_audio_in_window_g

0x1505,	// (0x0007da7f) popup_call2_audio_in_window_t1_ParamLimits

0x1505,	// (0x0007da7f) popup_call2_audio_in_window_t1

0x1585,	// (0x0007daff) popup_call2_audio_in_window_t2_ParamLimits

0x1585,	// (0x0007daff) popup_call2_audio_in_window_t2

0x1605,	// (0x0007db7f) popup_call2_audio_in_window_t3_ParamLimits

0x1605,	// (0x0007db7f) popup_call2_audio_in_window_t3

0x161f,	// (0x0007db99) popup_call2_audio_in_window_t4_ParamLimits

0x161f,	// (0x0007db99) popup_call2_audio_in_window_t4

0x1631,	// (0x0007dbab) popup_call2_audio_in_window_t5_ParamLimits

0x1631,	// (0x0007dbab) popup_call2_audio_in_window_t5

0x1646,	// (0x0007dbc0) popup_call2_audio_in_window_t6_ParamLimits

0x1646,	// (0x0007dbc0) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0008bb07) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0008bb07) popup_call2_audio_in_window_t

0xe18a,	// (0x0008a704) bg_popup_call2_in_pane_g1

0x175f,	// (0x0007dcd9) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x0008bb6f) popup_cale_lunar_info_window_t

0xe192,	// (0x0008a70c) bg_popup_call2_rect_pane_ParamLimits

0xe192,	// (0x0008a70c) bg_popup_call2_rect_pane

0xdf37,	// (0x0008a4b1) call2_cli_visual_graphic_pane

0xdf37,	// (0x0008a4b1) call2_cli_visual_text_pane

0x8df3,	// (0x0008536d) smil_status_volume_pane_g3

0x0002,

0xe2b2,	// (0x0008a82c) call2_cli_visual_graphic_pane_g1

0xe2b2,	// (0x0008a82c) call2_cli_visual_graphic_pane_g2

0xe2b2,	// (0x0008a82c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0008bb14) call2_cli_visual_graphic_pane_g

0x165b,	// (0x0007dbd5) bg_popup_call2_rect_pane_g1

0xe350,	// (0x0008a8ca) bg_popup_call2_rect_pane_g2

0x1663,	// (0x0007dbdd) bg_popup_call2_rect_pane_g3

0x166b,	// (0x0007dbe5) bg_popup_call2_rect_pane_g4

0x1673,	// (0x0007dbed) bg_popup_call2_rect_pane_g5

0x167b,	// (0x0007dbf5) bg_popup_call2_rect_pane_g6

0x1683,	// (0x0007dbfd) bg_popup_call2_rect_pane_g7

0x168b,	// (0x0007dc05) bg_popup_call2_rect_pane_g8

0x1693,	// (0x0007dc0d) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0008bb1b) bg_popup_call2_rect_pane_g

0x169b,	// (0x0007dc15) bg_popup_call2_bubble_pane_g1

0x16a3,	// (0x0007dc1d) bg_popup_call2_bubble_pane_g2

0x16ab,	// (0x0007dc25) bg_popup_call2_bubble_pane_g3

0x16b3,	// (0x0007dc2d) bg_popup_call2_bubble_pane_g4

0x16bb,	// (0x0007dc35) bg_popup_call2_bubble_pane_g5

0x16c3,	// (0x0007dc3d) bg_popup_call2_bubble_pane_g6

0x16cb,	// (0x0007dc45) bg_popup_call2_bubble_pane_g7

0x16d3,	// (0x0007dc4d) bg_popup_call2_bubble_pane_g8

0x16db,	// (0x0007dc55) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0008bb2e) bg_popup_call2_bubble_pane_g

0x6320,	// (0x0008289a) aid_cale_week_size_cell_pane

0x692a,	// (0x00082ea4) aid_cams_cif_uncrop_pane_ParamLimits

0x692a,	// (0x00082ea4) aid_cams_cif_uncrop_pane

0x6a87,	// (0x00083001) aid_cams_size_cell_ParamLimits

0x6a87,	// (0x00083001) aid_cams_size_cell

0x6a93,	// (0x0008300d) grid_cams_pane_ParamLimits

0x6aa1,	// (0x0008301b) linegrid_cams_pane_ParamLimits

0x6b90,	// (0x0008310a) call_video_pane_t1

0x6ba6,	// (0x00083120) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0008b81b) call_video_pane_t

0x7000,	// (0x0008357a) aid_cale_month_size_cell_pane_ParamLimits

0x7000,	// (0x0008357a) aid_cale_month_size_cell_pane

0xf63e,	// (0x0008bbb8) smil_status_volume_pane_g

0x8e00,	// (0x0008537a) volume_smil_pane_ParamLimits

0x04aa,	// (0x0007ca24) aid_popup2_width_pane

0x623c,	// (0x000827b6) cell_qdial_pane_g4_ParamLimits

0x623c,	// (0x000827b6) cell_qdial_pane_g4

0x7cc1,	// (0x0008423b) aid_blid_cardinal_pane_ParamLimits

0x7cd1,	// (0x0008424b) aid_blid_destination_pane_ParamLimits

0x7cd1,	// (0x0008424b) aid_blid_destination_pane

0xe192,	// (0x0008a70c) bg_popup_call_poc_act_pane_ParamLimits

0xe192,	// (0x0008a70c) bg_popup_call_poc_act_pane

0xe192,	// (0x0008a70c) bg_popup_call_poc_inact_pane_ParamLimits

0xe192,	// (0x0008a70c) bg_popup_call_poc_inact_pane

0x16e3,	// (0x0007dc5d) bg_popup_call_poc_act_pane_g1

0x16eb,	// (0x0007dc65) bg_popup_call_poc_act_pane_g2

0x16f3,	// (0x0007dc6d) bg_popup_call_poc_act_pane_g3

0x16b3,	// (0x0007dc2d) bg_popup_call_poc_act_pane_g4

0x16bb,	// (0x0007dc35) bg_popup_call_poc_act_pane_g5

0x16fb,	// (0x0007dc75) bg_popup_call_poc_act_pane_g6

0x16cb,	// (0x0007dc45) bg_popup_call_poc_act_pane_g7

0x1703,	// (0x0007dc7d) bg_popup_call_poc_act_pane_g8

0xdf37,	// (0x0008a4b1) main_usb_pane

0x1860,	// (0x0007ddda) popup_cale_lunar_info_window

0x6e3d,	// (0x000833b7) im_reading_pane_t1_ParamLimits

0xe517,	// (0x0008aa91) list_im_pane_ParamLimits

0xe528,	// (0x0008aaa2) scroll_pane_cp07_ParamLimits

0xdf37,	// (0x0008a4b1) grid_highlight_pane_cp012

0xe192,	// (0x0008a70c) mup_scale_pane_ParamLimits

0xe9f4,	// (0x0008af6e) main_usb_pane_g1_ParamLimits

0xe9f4,	// (0x0008af6e) main_usb_pane_g1

0x89a7,	// (0x00084f21) main_usb_pane_g2_ParamLimits

0x89a7,	// (0x00084f21) main_usb_pane_g2

0x0001,

0xf5de,	// (0x0008bb58) main_usb_pane_g_ParamLimits

0xf5de,	// (0x0008bb58) main_usb_pane_g

0x89b3,	// (0x00084f2d) main_usb_pane_t1_ParamLimits

0x89b3,	// (0x00084f2d) main_usb_pane_t1

0x89c5,	// (0x00084f3f) main_usb_pane_t2_ParamLimits

0x89c5,	// (0x00084f3f) main_usb_pane_t2

0x89d7,	// (0x00084f51) main_usb_pane_t3_ParamLimits

0x89d7,	// (0x00084f51) main_usb_pane_t3

0x89e9,	// (0x00084f63) main_usb_pane_t4_ParamLimits

0x89e9,	// (0x00084f63) main_usb_pane_t4

0x89fb,	// (0x00084f75) main_usb_pane_t5_ParamLimits

0x89fb,	// (0x00084f75) main_usb_pane_t5

0x8a0d,	// (0x00084f87) main_usb_pane_t6_ParamLimits

0x8a0d,	// (0x00084f87) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0008bb5d) main_usb_pane_t_ParamLimits

0x7c7c,	// (0x000841f6) aid_text_placing

0x7c87,	// (0x00084201) main_location2_pane_t1_ParamLimits

0x7c9b,	// (0x00084215) main_location2_pane_t2_ParamLimits

0x7c9b,	// (0x00084215) main_location2_pane_t3_ParamLimits

0x7caf,	// (0x00084229) main_location2_pane_t4_ParamLimits

0x7caf,	// (0x00084229) main_location2_pane_t4

0xf402,	// (0x0008b97c) main_location2_pane_t_ParamLimits

0xe1ce,	// (0x0008a748) find_pinb_pane_g2_ParamLimits

0xe1ce,	// (0x0008a748) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0008b6ca) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0008b6ca) find_pinb_pane_g

0xe1da,	// (0x0008a754) find_pinb_pane_t1_ParamLimits

0xe1ec,	// (0x0008a766) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0008b6cf) find_pinb_pane_t_ParamLimits

0xdf37,	// (0x0008a4b1) main_call3_pane

0x735c,	// (0x000838d6) cale_month_day_heading_pane_t1_ParamLimits

0x73ba,	// (0x00083934) cale_month_day_heading_pane_t2_ParamLimits

0x741f,	// (0x00083999) cale_month_day_heading_pane_t3_ParamLimits

0x7484,	// (0x000839fe) cale_month_day_heading_pane_t4_ParamLimits

0x74e9,	// (0x00083a63) cale_month_day_heading_pane_t5_ParamLimits

0x7556,	// (0x00083ad0) cale_month_day_heading_pane_t6_ParamLimits

0x75cb,	// (0x00083b45) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0008b853) cale_month_day_heading_pane_t_ParamLimits

0xe768,	// (0x0008ace2) smil_status_volume_pane

0x855f,	// (0x00084ad9) postcard_address_pane_ParamLimits

0x855f,	// (0x00084ad9) postcard_address_pane

0x856d,	// (0x00084ae7) postcard_message_pane_ParamLimits

0x856d,	// (0x00084ae7) postcard_message_pane

0x897a,	// (0x00084ef4) call2_cli_visual_pane_t1_ParamLimits

0x897a,	// (0x00084ef4) call2_cli_visual_pane_t1

0x8f46,	// (0x000854c0) postcard_message_pane_t1_ParamLimits

0x8f46,	// (0x000854c0) postcard_message_pane_t1

0x1970,	// (0x0007deea) postcard_address_pane_t1_ParamLimits

0x1970,	// (0x0007deea) postcard_address_pane_t1

0x8f37,	// (0x000854b1) popup_call3_audio_in_window_ParamLimits

0x8f37,	// (0x000854b1) popup_call3_audio_in_window

0x8e15,	// (0x0008538f) bg_popup_call3_in_pane_ParamLimits

0x8e15,	// (0x0008538f) bg_popup_call3_in_pane

0x8e7d,	// (0x000853f7) popup_call3_audio_in_window_g1_ParamLimits

0x8e7d,	// (0x000853f7) popup_call3_audio_in_window_g1

0x8e95,	// (0x0008540f) popup_call3_audio_in_window_g2_ParamLimits

0x8e95,	// (0x0008540f) popup_call3_audio_in_window_g2

0x8ead,	// (0x00085427) popup_call3_audio_in_window_g3_ParamLimits

0x8ead,	// (0x00085427) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x0008bbbf) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x0008bbbf) popup_call3_audio_in_window_g

0x8ed5,	// (0x0008544f) popup_call3_audio_in_window_t1_ParamLimits

0x8ed5,	// (0x0008544f) popup_call3_audio_in_window_t1

0x8efd,	// (0x00085477) popup_call3_audio_in_window_t2_ParamLimits

0x8efd,	// (0x00085477) popup_call3_audio_in_window_t2

0x8f25,	// (0x0008549f) popup_call3_audio_in_window_t3_ParamLimits

0x8f25,	// (0x0008549f) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x0008bbc8) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x0008bbc8) popup_call3_audio_in_window_t

0xecb9,	// (0x0008b233) bg_popup_call3_rect_pane

0x165b,	// (0x0007dbd5) bg_popup_call3_rect_pane_g1

0xe350,	// (0x0008a8ca) bg_popup_call3_rect_pane_g2

0x1663,	// (0x0007dbdd) bg_popup_call3_rect_pane_g3

0x166b,	// (0x0007dbe5) bg_popup_call3_rect_pane_g4

0x1673,	// (0x0007dbed) bg_popup_call3_rect_pane_g5

0x167b,	// (0x0007dbf5) bg_popup_call3_rect_pane_g6

0x1683,	// (0x0007dbfd) bg_popup_call3_rect_pane_g7

0x80e1,	// (0x0008465b) mup_visualizer_osc_pane

0xed78,	// (0x0008b2f2) mup_visualizer_spec_pane

0x8e35,	// (0x000853af) call3_video_qcif_pane_ParamLimits

0x8e35,	// (0x000853af) call3_video_qcif_pane

0x8e47,	// (0x000853c1) call3_video_qcif_uncrop_pane_ParamLimits

0x8e47,	// (0x000853c1) call3_video_qcif_uncrop_pane

0x8e57,	// (0x000853d1) call3_video_subqcif_pane_ParamLimits

0x8e57,	// (0x000853d1) call3_video_subqcif_pane

0x8e6b,	// (0x000853e5) call3_video_subqcif_uncrop_pane_ParamLimits

0x8e6b,	// (0x000853e5) call3_video_subqcif_uncrop_pane

0x8ec5,	// (0x0008543f) popup_call3_audio_in_window_g4_ParamLimits

0x8ec5,	// (0x0008543f) popup_call3_audio_in_window_g4

0x8de2,	// (0x0008535c) mup_spec_half_pane

0x8deb,	// (0x00085365) mup_spec_half_pane_cp

0x190e,	// (0x0007de88) mup_osc_middle_pane

0x1917,	// (0x0007de91) mup_visualizer_osc_pane_g1

0x8dc2,	// (0x0008533c) mup_spec_bar_pane_ParamLimits

0x8dc2,	// (0x0008533c) mup_spec_bar_pane

0x18fb,	// (0x0007de75) mup_spec_bar_pane_g1

0x1905,	// (0x0007de7f) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0008bbb3) mup_spec_bar_pane_g

0x6320,	// (0x0008289a) aid_cale_week_size_cell_pane_ParamLimits

0x6333,	// (0x000828ad) bg_cale_heading_pane_ParamLimits

0xe384,	// (0x0008a8fe) bg_cale_pane_cp01_ParamLimits

0x6347,	// (0x000828c1) cale_week_corner_pane_ParamLimits

0x635d,	// (0x000828d7) cale_week_day_heading_pane_ParamLimits

0x6371,	// (0x000828eb) cale_week_scroll_pane_g1_ParamLimits

0x6382,	// (0x000828fc) cale_week_scroll_pane_g2_ParamLimits

0x6393,	// (0x0008290d) cale_week_scroll_pane_g3_ParamLimits

0x63a4,	// (0x0008291e) cale_week_scroll_pane_g4_ParamLimits

0x63b5,	// (0x0008292f) cale_week_scroll_pane_g5_ParamLimits

0x63c6,	// (0x00082940) cale_week_scroll_pane_g6_ParamLimits

0x63d9,	// (0x00082953) cale_week_scroll_pane_g7_ParamLimits

0x63ec,	// (0x00082966) cale_week_scroll_pane_g8_ParamLimits

0x63ff,	// (0x00082979) cale_week_scroll_pane_g9_ParamLimits

0x6410,	// (0x0008298a) cale_week_scroll_pane_g10_ParamLimits

0x6421,	// (0x0008299b) cale_week_scroll_pane_g11_ParamLimits

0x6432,	// (0x000829ac) cale_week_scroll_pane_g12_ParamLimits

0x6443,	// (0x000829bd) cale_week_scroll_pane_g13_ParamLimits

0x6454,	// (0x000829ce) cale_week_scroll_pane_g14_ParamLimits

0x6465,	// (0x000829df) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0008b75b) cale_week_scroll_pane_g_ParamLimits

0x6476,	// (0x000829f0) cale_week_time_pane_ParamLimits

0x6489,	// (0x00082a03) grid_cale_week_pane_ParamLimits

0xe39d,	// (0x0008a917) listscroll_cale_week_pane_t1

0x649e,	// (0x00082a18) scroll_pane_cp08_ParamLimits

0x7041,	// (0x000835bb) cale_month_corner_pane_ParamLimits

0xe73e,	// (0x0008acb8) cale_month_pane_t1

0x731b,	// (0x00083895) cale_month_week_pane_ParamLimits

0xe9f4,	// (0x0008af6e) popup_call_status_window_g1_ParamLimits

0x7a8e,	// (0x00084008) popup_call_status_window_g2_ParamLimits

0x7a9a,	// (0x00084014) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0008b903) popup_call_status_window_g_ParamLimits

0xea5b,	// (0x0008afd5) aid_call2_pane

0x838a,	// (0x00084904) msg_header_pane_g1

0x855f,	// (0x00084ad9) postcard_address2_pane_ParamLimits

0x855f,	// (0x00084ad9) postcard_address2_pane

0x856d,	// (0x00084ae7) postcard_message2_pane_ParamLimits

0x856d,	// (0x00084ae7) postcard_message2_pane

0x8d7c,	// (0x000852f6) message2_row_pane_ParamLimits

0x8d7c,	// (0x000852f6) message2_row_pane

0x18b6,	// (0x0007de30) address2_row_pane_ParamLimits

0x18b6,	// (0x0007de30) address2_row_pane

0x18c9,	// (0x0007de43) postcard_message2_row_pane_g1

0x18d1,	// (0x0007de4b) postcard_message2_row_pane_t1

0x18c9,	// (0x0007de43) address2_row_pane_g1

0x18d1,	// (0x0007de4b) address2_row_pane_t1

0x67e8,	// (0x00082d62) aid_size_cell_vorec

0xdf37,	// (0x0008a4b1) main_rss_pane

0x8d96,	// (0x00085310) rss_list_single_pane_ParamLimits

0x8d96,	// (0x00085310) rss_list_single_pane

0x18df,	// (0x0007de59) rss_list_single_pane_t1

0x18ed,	// (0x0007de67) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0008bbae) rss_list_single_pane_t

0xdf37,	// (0x0008a4b1) main_camera2_pane

0xdf37,	// (0x0008a4b1) main_video2_pane

0x8faa,	// (0x00085524) cams_zoom_pane_cp2_ParamLimits

0x8faa,	// (0x00085524) cams_zoom_pane_cp2

0x8fb6,	// (0x00085530) image2_vga_pane_ParamLimits

0x8fb6,	// (0x00085530) image2_vga_pane

0x8fc5,	// (0x0008553f) main_camera2_pane_g1_ParamLimits

0x8fc5,	// (0x0008553f) main_camera2_pane_g1

0x8fd1,	// (0x0008554b) main_camera2_pane_g2_ParamLimits

0x8fd1,	// (0x0008554b) main_camera2_pane_g2

0x8fdd,	// (0x00085557) main_camera2_pane_g3_ParamLimits

0x8fdd,	// (0x00085557) main_camera2_pane_g3

0x8fe9,	// (0x00085563) main_camera2_pane_g4_ParamLimits

0x8fe9,	// (0x00085563) main_camera2_pane_g4

0x8ff5,	// (0x0008556f) main_camera2_pane_g5_ParamLimits

0x8ff5,	// (0x0008556f) main_camera2_pane_g5

0x9001,	// (0x0008557b) main_camera2_pane_g6_ParamLimits

0x9001,	// (0x0008557b) main_camera2_pane_g6

0x900d,	// (0x00085587) main_camera2_pane_g7_ParamLimits

0x900d,	// (0x00085587) main_camera2_pane_g7

0x9019,	// (0x00085593) main_camera2_pane_g8_ParamLimits

0x9019,	// (0x00085593) main_camera2_pane_g8

0x0008,

0xf655,	// (0x0008bbcf) main_camera2_pane_g_ParamLimits

0xf655,	// (0x0008bbcf) main_camera2_pane_g

0x9031,	// (0x000855ab) main_camera2_pane_t1_ParamLimits

0x9031,	// (0x000855ab) main_camera2_pane_t1

0x9043,	// (0x000855bd) main_camera2_pane_t2_ParamLimits

0x9043,	// (0x000855bd) main_camera2_pane_t2

0x9055,	// (0x000855cf) main_camera2_pane_t3_ParamLimits

0x9055,	// (0x000855cf) main_camera2_pane_t3

0x9067,	// (0x000855e1) main_camera2_pane_t4_ParamLimits

0x9067,	// (0x000855e1) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0008bbe2) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0008bbe2) main_camera2_pane_t

0x90c4,	// (0x0008563e) cams_zoom_pane_cp4_ParamLimits

0x90c4,	// (0x0008563e) cams_zoom_pane_cp4

0x90d4,	// (0x0008564e) image2_cif_pane_ParamLimits

0x90d4,	// (0x0008564e) image2_cif_pane

0x90e9,	// (0x00085663) image2_subqcif_pane_ParamLimits

0x90e9,	// (0x00085663) image2_subqcif_pane

0x90f8,	// (0x00085672) main_video2_pane_g1_ParamLimits

0x90f8,	// (0x00085672) main_video2_pane_g1

0x910a,	// (0x00085684) main_video2_pane_g2_ParamLimits

0x910a,	// (0x00085684) main_video2_pane_g2

0x911a,	// (0x00085694) main_video2_pane_g3_ParamLimits

0x911a,	// (0x00085694) main_video2_pane_g3

0x912a,	// (0x000856a4) main_video2_pane_g4_ParamLimits

0x912a,	// (0x000856a4) main_video2_pane_g4

0x913a,	// (0x000856b4) main_video2_pane_g5_ParamLimits

0x913a,	// (0x000856b4) main_video2_pane_g5

0x914a,	// (0x000856c4) main_video2_pane_g6_ParamLimits

0x914a,	// (0x000856c4) main_video2_pane_g6

0x0005,

0xf677,	// (0x0008bbf1) main_video2_pane_g_ParamLimits

0xf677,	// (0x0008bbf1) main_video2_pane_g

0x915c,	// (0x000856d6) main_video2_pane_t1_ParamLimits

0x915c,	// (0x000856d6) main_video2_pane_t1

0x9176,	// (0x000856f0) main_video2_pane_t2_ParamLimits

0x9176,	// (0x000856f0) main_video2_pane_t2

0x919c,	// (0x00085716) main_video2_pane_t3_ParamLimits

0x919c,	// (0x00085716) main_video2_pane_t3

0x0002,

0xf684,	// (0x0008bbfe) main_video2_pane_t_ParamLimits

0xf684,	// (0x0008bbfe) main_video2_pane_t

0x8ac4,	// (0x0008503e) call_muted_g2

0x0001,

0xf626,	// (0x0008bba0) call_muted_g

0xdf37,	// (0x0008a4b1) main_mup2_pane

0x19e0,	// (0x0007df5a) main_mup2_pane_g1_ParamLimits

0x19e0,	// (0x0007df5a) main_mup2_pane_g1

0x91c2,	// (0x0008573c) main_mup2_pane_g2_ParamLimits

0x91c2,	// (0x0008573c) main_mup2_pane_g2

0x9454,	// (0x000859ce) main_mup_pane_g13_cp1

0x945c,	// (0x000859d6) mup_volume_pane_cp1

0x91e4,	// (0x0008575e) main_mup2_pane_g4_ParamLimits

0x91e4,	// (0x0008575e) main_mup2_pane_g4

0x91f9,	// (0x00085773) main_mup2_pane_g5_ParamLimits

0x91f9,	// (0x00085773) main_mup2_pane_g5

0x920e,	// (0x00085788) main_mup2_pane_g6_ParamLimits

0x920e,	// (0x00085788) main_mup2_pane_g6

0x9223,	// (0x0008579d) main_mup2_pane_g7_ParamLimits

0x9223,	// (0x0008579d) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0008bc05) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0008bc05) main_mup2_pane_g

0x923f,	// (0x000857b9) main_mup2_pane_t1_ParamLimits

0x923f,	// (0x000857b9) main_mup2_pane_t1

0x9256,	// (0x000857d0) main_mup2_pane_t2_ParamLimits

0x9256,	// (0x000857d0) main_mup2_pane_t2

0x926d,	// (0x000857e7) main_mup2_pane_t3_ParamLimits

0x926d,	// (0x000857e7) main_mup2_pane_t3

0x9284,	// (0x000857fe) main_mup2_pane_t4_ParamLimits

0x9284,	// (0x000857fe) main_mup2_pane_t4

0x929e,	// (0x00085818) main_mup2_pane_t5_ParamLimits

0x929e,	// (0x00085818) main_mup2_pane_t5

0x92b8,	// (0x00085832) main_mup2_pane_t6_ParamLimits

0x92b8,	// (0x00085832) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0008bc14) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0008bc14) main_mup2_pane_t

0x92f0,	// (0x0008586a) mup2_visualizer_pane_ParamLimits

0x92f0,	// (0x0008586a) mup2_visualizer_pane

0x9326,	// (0x000858a0) mup_progress_pane_cp_ParamLimits

0x9326,	// (0x000858a0) mup_progress_pane_cp

0x943f,	// (0x000859b9) mup_volume_pane_cp_ParamLimits

0x943f,	// (0x000859b9) mup_volume_pane_cp

0x933f,	// (0x000858b9) mup2_visualizer_pane_g1_ParamLimits

0x933f,	// (0x000858b9) mup2_visualizer_pane_g1

0x19b2,	// (0x0007df2c) mup2_visualizer_pane_g2_ParamLimits

0x19b2,	// (0x0007df2c) mup2_visualizer_pane_g2

0x9354,	// (0x000858ce) mup2_visualizer_pane_g3_ParamLimits

0x9354,	// (0x000858ce) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x0008bc21) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x0008bc21) mup2_visualizer_pane_g

0xefa1,	// (0x0008b51b) aid_size_cell_fmradio

0x8bda,	// (0x00085154) aid_height_parent_landcape

0xe5a6,	// (0x0008ab20) wml_content_pane_cp

0xe5ae,	// (0x0008ab28) wml_tabs_pane

0xe5b7,	// (0x0008ab31) popup_wml_miniature_window

0xe5bf,	// (0x0008ab39) scroll_pane_cp021

0xe5d3,	// (0x0008ab4d) wml_content_pane_comp8

0xdf37,	// (0x0008a4b1) bg_popup_sub_pane_cp05

0x19d0,	// (0x0007df4a) popup_wml_miniature_window_g1

0x19d8,	// (0x0007df52) wml_miniature_view_pane

0x9362,	// (0x000858dc) aid_size_wml_view

0x936a,	// (0x000858e4) wml_miniature_view_pane_g1

0x9373,	// (0x000858ed) wml_miniature_view_pane_g2

0x937c,	// (0x000858f6) wml_miniature_view_pane_g3

0x9384,	// (0x000858fe) wml_miniature_view_pane_g4

0x938c,	// (0x00085906) wml_miniature_view_pane_g5

0x9394,	// (0x0008590e) wml_miniature_view_pane_g6

0x939c,	// (0x00085916) wml_miniature_view_pane_g7

0x93a4,	// (0x0008591e) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x0008bc28) wml_miniature_view_pane_g

0x19e0,	// (0x0007df5a) background_graphic_ParamLimits

0x19e0,	// (0x0007df5a) background_graphic

0x19ec,	// (0x0007df66) wml_tabs_2_pane

0x19f5,	// (0x0007df6f) wml_tabs_3_pane_ParamLimits

0x19f5,	// (0x0007df6f) wml_tabs_3_pane

0x1a07,	// (0x0007df81) wml_tabs_4_pane_ParamLimits

0x1a07,	// (0x0007df81) wml_tabs_4_pane

0x1a1d,	// (0x0007df97) wml_tabs_5_pane_ParamLimits

0x1a1d,	// (0x0007df97) wml_tabs_5_pane

0x1a37,	// (0x0007dfb1) wml_tabs_pane_g2_ParamLimits

0x1a37,	// (0x0007dfb1) wml_tabs_pane_g2

0x1a4b,	// (0x0007dfc5) wml_tabs_pane_g3_ParamLimits

0x1a4b,	// (0x0007dfc5) wml_tabs_pane_g3

0x93ac,	// (0x00085926) wml_tabs_2_active_pane_ParamLimits

0x93ac,	// (0x00085926) wml_tabs_2_active_pane

0x93be,	// (0x00085938) wml_tabs_2_passive_pane_ParamLimits

0x93be,	// (0x00085938) wml_tabs_2_passive_pane

0x93d0,	// (0x0008594a) wml_tabs_3_active_pane_cp_ParamLimits

0x93d0,	// (0x0008594a) wml_tabs_3_active_pane_cp

0x93e3,	// (0x0008595d) wml_tabs_3_passive_pane_ParamLimits

0x93e3,	// (0x0008595d) wml_tabs_3_passive_pane

0x93f4,	// (0x0008596e) wml_tabs_3_passive_pane_cp_ParamLimits

0x93f4,	// (0x0008596e) wml_tabs_3_passive_pane_cp

0x9409,	// (0x00085983) tabs_4_active_pane

0x9411,	// (0x0008598b) tabs_4_passive_pane

0x9419,	// (0x00085993) tabs_4_passive_pane_cp

0x9421,	// (0x0008599b) tabs_4_passive_pane_cp2

0x899f,	// (0x00084f19) aid_height_text

0x80aa,	// (0x00084624) mup_volume_cont_pane_ParamLimits

0x80aa,	// (0x00084624) mup_volume_cont_pane

0x5e95,	// (0x0008240f) aid_size_cell_pinb

0x5e9f,	// (0x00082419) aid_size_list_pinb

0x930f,	// (0x00085889) mup2_volume_cont_pane_ParamLimits

0x930f,	// (0x00085889) mup2_volume_cont_pane

0x942b,	// (0x000859a5) mup2_volume_cont_pane_g1_ParamLimits

0x942b,	// (0x000859a5) mup2_volume_cont_pane_g1

0x5b20,	// (0x0008209a) aid_size_cell_touch_ParamLimits

0x5b20,	// (0x0008209a) aid_size_cell_touch

0x5d7c,	// (0x000822f6) touch_pane_ParamLimits

0x5d7c,	// (0x000822f6) touch_pane

0x0498,	// (0x0007ca12) main_rss2_pane

0x1a68,	// (0x0007dfe2) listscroll_rss2_pane

0x1a71,	// (0x0007dfeb) rss2_navigation_pane

0x1a79,	// (0x0007dff3) list_rss2_pane

0xeb7f,	// (0x0008b0f9) scroll_pane_cp22

0x1a81,	// (0x0007dffb) rss2_navigation_pane_g1

0x1a8a,	// (0x0007e004) rss2_navigation_pane_g2

0x1a92,	// (0x0007e00c) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0008bc39) rss2_navigation_pane_g

0x1a9a,	// (0x0007e014) rss2_navigation_pane_t1

0x9464,	// (0x000859de) rss2_list_single_pane_ParamLimits

0x9464,	// (0x000859de) rss2_list_single_pane

0x1aa8,	// (0x0007e022) rss2_list_single_pane_t2

0x1ab6,	// (0x0007e030) rss2_list_single_pane_t3_ParamLimits

0x1ab6,	// (0x0007e030) rss2_list_single_pane_t3

0x1ad3,	// (0x0007e04d) rss2_list_single_pane_t4

0x7843,	// (0x00083dbd) smil_status_pane_g1

0xf0e1,	// (0x0008b65b) main_image2_pane_ParamLimits

0xf0e1,	// (0x0008b65b) main_image2_pane

0x9025,	// (0x0008559f) main_camera2_pane_g9_ParamLimits

0x9025,	// (0x0008559f) main_camera2_pane_g9

0x9079,	// (0x000855f3) main_camera2_pane_t5_ParamLimits

0x9079,	// (0x000855f3) main_camera2_pane_t5

0x908b,	// (0x00085605) main_camera2_pane_t6_ParamLimits

0x908b,	// (0x00085605) main_camera2_pane_t6

0x948a,	// (0x00085a04) main_image2_pane_g1_ParamLimits

0x948a,	// (0x00085a04) main_image2_pane_g1

0x8739,	// (0x00084cb3) smil2_video_pane_ParamLimits

0x8739,	// (0x00084cb3) smil2_video_pane

0x04c6,	// (0x0007ca40) aid_zoom_text_primary_cp

0xdb1a,	// (0x0008a094) popup_preview_fixed_window

0xe50f,	// (0x0008aa89) im_reading_pane_g1

0x8f6f,	// (0x000854e9) cams2_bc_adjust_pane_cp_ParamLimits

0x8f6f,	// (0x000854e9) cams2_bc_adjust_pane_cp

0x90b6,	// (0x00085630) cams2_bc_adjust_pane_ParamLimits

0x90b6,	// (0x00085630) cams2_bc_adjust_pane

0x2abc,	// (0x0007f036) cams2_bc_adjust_pane_g1

0x9496,	// (0x00085a10) cams2_slider_pane

0x949f,	// (0x00085a19) cams2_slider_pane_g1

0x94a8,	// (0x00085a22) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x0008bc40) cams2_slider_pane_g

0x5f92,	// (0x0008250c) calc_display_pane_ParamLimits

0x5fb0,	// (0x0008252a) calc_paper_pane_ParamLimits

0x5fcc,	// (0x00082546) grid_calc_pane_ParamLimits

0x7af8,	// (0x00084072) popup_clock_digital_window_t1_ParamLimits

0xef3e,	// (0x0008b4b8) main_image_pane_t1

0x5f78,	// (0x000824f2) aid_size_cell_calc_ParamLimits

0x5f78,	// (0x000824f2) aid_size_cell_calc

0x8c0c,	// (0x00085186) popup_blid_sat_info2_window_ParamLimits

0x8c0c,	// (0x00085186) popup_blid_sat_info2_window

0x1ae9,	// (0x0007e063) aid_size_cell_blid

0x1af1,	// (0x0007e06b) bg_popup_window_pane_cp07

0x1b14,	// (0x0007e08e) grid_popup_blid_pane

0x1b1e,	// (0x0007e098) heading_pane_cp05_ParamLimits

0x1b1e,	// (0x0007e098) heading_pane_cp05

0x1be8,	// (0x0007e162) cell_popup_blid_pane_ParamLimits

0x1be8,	// (0x0007e162) cell_popup_blid_pane

0x1c12,	// (0x0007e18c) cell_popup_blid_pane_g1

0x1c1a,	// (0x0007e194) cell_popup_blid_pane_t1

0x92d5,	// (0x0008584f) mup2_indicator_pane_ParamLimits

0x92d5,	// (0x0008584f) mup2_indicator_pane

0xecb9,	// (0x0008b233) mup2_visualizer_osc_pane

0x19be,	// (0x0007df38) mup2_visualizer_spec_pane_ParamLimits

0x19be,	// (0x0007df38) mup2_visualizer_spec_pane

0x94c2,	// (0x00085a3c) mup2_spec_half_pane

0x94cb,	// (0x00085a45) mup2_spec_half_pane_cp

0x94d5,	// (0x00085a4f) mup2_spec_bar_pane_ParamLimits

0x94d5,	// (0x00085a4f) mup2_spec_bar_pane

0x18fb,	// (0x0007de75) mup2_spec_bar_pane_g1

0x1905,	// (0x0007de7f) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0008bbb3) mup2_spec_bar_pane_g

0x94f4,	// (0x00085a6e) mup2_osc_middle_pane

0x1917,	// (0x0007de91) mup2_visualizer_osc_pane_g1

0xdb44,	// (0x0008a0be) popup_number_entry_window_t1_ParamLimits

0xdb57,	// (0x0008a0d1) popup_number_entry_window_t2_ParamLimits

0xdb69,	// (0x0008a0e3) popup_number_entry_window_t3_ParamLimits

0x5dd3,	// (0x0008234d) popup_number_entry_window_t5_ParamLimits

0x5dd3,	// (0x0008234d) popup_number_entry_window_t5

0xf0fb,	// (0x0008b675) popup_number_entry_window_t_ParamLimits

0xdb7b,	// (0x0008a0f5) text_title_cp2_ParamLimits

0x8423,	// (0x0008499d) aid_hotspot_pointer_text2_pane

0x84bd,	// (0x00084a37) main_viewer_pane_g9_ParamLimits

0x84bd,	// (0x00084a37) main_viewer_pane_g9

0xe73e,	// (0x0008acb8) cale_month_pane_t1_ParamLimits

0xe77b,	// (0x0008acf5) bg_cale_pane_ParamLimits

0xe793,	// (0x0008ad0d) list_cale_pane_ParamLimits

0xe39d,	// (0x0008a917) listscroll_cale_day_pane_t1

0xe7a4,	// (0x0008ad1e) scroll_pane_cp09_ParamLimits

0x80e9,	// (0x00084663) main_mup_eq_pane_t1_ParamLimits

0x80e9,	// (0x00084663) main_mup_eq_pane_t1

0x8105,	// (0x0008467f) main_mup_eq_pane_t2_ParamLimits

0x8105,	// (0x0008467f) main_mup_eq_pane_t2

0x8121,	// (0x0008469b) main_mup_eq_pane_t3_ParamLimits

0x8121,	// (0x0008469b) main_mup_eq_pane_t3

0x813b,	// (0x000846b5) main_mup_eq_pane_t4_ParamLimits

0x813b,	// (0x000846b5) main_mup_eq_pane_t4

0x8155,	// (0x000846cf) main_mup_eq_pane_t5_ParamLimits

0x8155,	// (0x000846cf) main_mup_eq_pane_t5

0x816f,	// (0x000846e9) main_mup_eq_pane_t6_ParamLimits

0x816f,	// (0x000846e9) main_mup_eq_pane_t6

0x8185,	// (0x000846ff) main_mup_eq_pane_t7_ParamLimits

0x8185,	// (0x000846ff) main_mup_eq_pane_t7

0x819b,	// (0x00084715) main_mup_eq_pane_t8_ParamLimits

0x819b,	// (0x00084715) main_mup_eq_pane_t8

0x81b1,	// (0x0008472b) main_mup_eq_pane_t9_ParamLimits

0x81b1,	// (0x0008472b) main_mup_eq_pane_t9

0x81cd,	// (0x00084747) main_mup_eq_pane_t10_ParamLimits

0x81cd,	// (0x00084747) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0008ba02) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0008ba02) main_mup_eq_pane_t

0x8292,	// (0x0008480c) mup_equalizer_pane_cp5_ParamLimits

0x82aa,	// (0x00084824) mup_equalizer_pane_cp6_ParamLimits

0x82c2,	// (0x0008483c) mup_equalizer_pane_cp7_ParamLimits

0x0498,	// (0x0007ca12) main_gallery_pane

0x1920,	// (0x0007de9a) smil2_volume_pane

0x193b,	// (0x0007deb5) smil_status_volume_pane_g1_ParamLimits

0x1928,	// (0x0007dea2) smil_status_volume_pane_g2_ParamLimits

0x8df3,	// (0x0008536d) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x0008bbb8) smil_status_volume_pane_g_ParamLimits

0x1af1,	// (0x0007e06b) bg_popup_window_pane_cp07_ParamLimits

0x1aff,	// (0x0007e079) blid_firmament_pane

0x94fd,	// (0x00085a77) aid_size_cell_gallery_ParamLimits

0x94fd,	// (0x00085a77) aid_size_cell_gallery

0x950b,	// (0x00085a85) grid_gallery_pane_ParamLimits

0x950b,	// (0x00085a85) grid_gallery_pane

0x951b,	// (0x00085a95) cell_gallery_pane_ParamLimits

0x951b,	// (0x00085a95) cell_gallery_pane

0x1c28,	// (0x0007e1a2) bg_cell_gallery_focus_pane_ParamLimits

0x1c28,	// (0x0007e1a2) bg_cell_gallery_focus_pane

0x1c3a,	// (0x0007e1b4) cell_gallery_pane_g1_ParamLimits

0x1c3a,	// (0x0007e1b4) cell_gallery_pane_g1

0x9569,	// (0x00085ae3) cell_gallery_pane_g2_ParamLimits

0x9569,	// (0x00085ae3) cell_gallery_pane_g2

0x9576,	// (0x00085af0) cell_gallery_pane_g3_ParamLimits

0x9576,	// (0x00085af0) cell_gallery_pane_g3

0x1c46,	// (0x0007e1c0) cell_gallery_pane_g4_ParamLimits

0x1c46,	// (0x0007e1c0) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x0008bc66) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x0008bc66) cell_gallery_pane_g

0x1c52,	// (0x0007e1cc) bg_cell_gallery_focus_pane_g1

0x1c5a,	// (0x0007e1d4) bg_cell_gallery_focus_pane_g2

0x1c62,	// (0x0007e1dc) bg_cell_gallery_focus_pane_g3

0x1c6a,	// (0x0007e1e4) bg_cell_gallery_focus_pane_g4

0x1c72,	// (0x0007e1ec) bg_cell_gallery_focus_pane_g5

0x1c7a,	// (0x0007e1f4) bg_cell_gallery_focus_pane_g6

0x1c82,	// (0x0007e1fc) bg_cell_gallery_focus_pane_g7

0x1c8a,	// (0x0007e204) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x0008bc6f) bg_cell_gallery_focus_pane_g

0x1c92,	// (0x0007e20c) aid_firma_cardinal

0x1ca6,	// (0x0007e220) blid_firmament_pane_t1

0x1cbd,	// (0x0007e237) blid_firmament_pane_t2

0x1cd4,	// (0x0007e24e) blid_firmament_pane_t3

0x1ceb,	// (0x0007e265) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x0008bc80) blid_firmament_pane_t

0x1d02,	// (0x0007e27c) blid_sat_info_pane

0x1d12,	// (0x0007e28c) blid_sat_info_pane_g1

0x1d12,	// (0x0007e28c) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0008bc89) blid_sat_info_pane_g

0x1d1c,	// (0x0007e296) blid_sat_info_pane_t1

0x1d2a,	// (0x0007e2a4) smil2_volume_content_pane

0x1d33,	// (0x0007e2ad) smil2_volume_pane_g1

0x1d3b,	// (0x0007e2b5) smil2_volume_content_pane_g1

0x1d44,	// (0x0007e2be) smil2_volume_content_pane_g2

0x1d4d,	// (0x0007e2c7) smil2_volume_content_pane_g3

0x1d56,	// (0x0007e2d0) smil2_volume_content_pane_g4

0x1d5f,	// (0x0007e2d9) smil2_volume_content_pane_g5

0x1d68,	// (0x0007e2e2) smil2_volume_content_pane_g6

0x1d71,	// (0x0007e2eb) smil2_volume_content_pane_g7

0x1d7a,	// (0x0007e2f4) smil2_volume_content_pane_g8

0x1d83,	// (0x0007e2fd) smil2_volume_content_pane_g9

0x1d8c,	// (0x0007e306) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0008bc8e) smil2_volume_content_pane_g

0x64f6,	// (0x00082a70) cale_week_day_heading_pane_t1_ParamLimits

0x6523,	// (0x00082a9d) cale_week_day_heading_pane_t2_ParamLimits

0x6550,	// (0x00082aca) cale_week_day_heading_pane_t3_ParamLimits

0x657d,	// (0x00082af7) cale_week_day_heading_pane_t4_ParamLimits

0x65aa,	// (0x00082b24) cale_week_day_heading_pane_t5_ParamLimits

0x65d7,	// (0x00082b51) cale_week_day_heading_pane_t6_ParamLimits

0x6604,	// (0x00082b7e) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0008b77a) cale_week_day_heading_pane_t_ParamLimits

0xe3af,	// (0x0008a929) bg_cale_side_pane_ParamLimits

0x6631,	// (0x00082bab) cale_week_time_pane_t1_ParamLimits

0x665d,	// (0x00082bd7) cale_week_time_pane_t2_ParamLimits

0x6689,	// (0x00082c03) cale_week_time_pane_t3_ParamLimits

0x66b5,	// (0x00082c2f) cale_week_time_pane_t4_ParamLimits

0x66e1,	// (0x00082c5b) cale_week_time_pane_t5_ParamLimits

0x670d,	// (0x00082c87) cale_week_time_pane_t6_ParamLimits

0x6739,	// (0x00082cb3) cale_week_time_pane_t7_ParamLimits

0x6765,	// (0x00082cdf) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0008b789) cale_week_time_pane_t_ParamLimits

0x6791,	// (0x00082d0b) cell_cale_week_pane_g2_ParamLimits

0xe3af,	// (0x0008a929) bg_cale_side_pane_cp01_ParamLimits

0x7640,	// (0x00083bba) cale_month_week_pane_t1_ParamLimits

0x766b,	// (0x00083be5) cale_month_week_pane_t2_ParamLimits

0x7696,	// (0x00083c10) cale_month_week_pane_t3_ParamLimits

0x76c1,	// (0x00083c3b) cale_month_week_pane_t4_ParamLimits

0x76ec,	// (0x00083c66) cale_month_week_pane_t5_ParamLimits

0x7717,	// (0x00083c91) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0008b862) cale_month_week_pane_t_ParamLimits

0x7810,	// (0x00083d8a) cell_cale_month_pane_g1_ParamLimits

0x0498,	// (0x0007ca12) main_cale_event_viewer_pane

0x0498,	// (0x0007ca12) listscroll_cale_event_viewer_pane

0x1d95,	// (0x0007e30f) list_cale_ev_pane

0x1d9d,	// (0x0007e317) scroll_pane_cp023

0x9583,	// (0x00085afd) field_cale_ev_pane_ParamLimits

0x9583,	// (0x00085afd) field_cale_ev_pane

0x1da9,	// (0x0007e323) field_cale_ev_content_pane_ParamLimits

0x1da9,	// (0x0007e323) field_cale_ev_content_pane

0x1db5,	// (0x0007e32f) field_cale_ev_pane_g1_ParamLimits

0x1db5,	// (0x0007e32f) field_cale_ev_pane_g1

0x1dc1,	// (0x0007e33b) field_cale_ev_pane_g2_ParamLimits

0x1dc1,	// (0x0007e33b) field_cale_ev_pane_g2

0x1dd9,	// (0x0007e353) field_cale_ev_pane_g3_ParamLimits

0x1dd9,	// (0x0007e353) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0008bca3) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0008bca3) field_cale_ev_pane_g

0x1df1,	// (0x0007e36b) field_cale_ev_pane_t1_ParamLimits

0x1df1,	// (0x0007e36b) field_cale_ev_pane_t1

0x95a7,	// (0x00085b21) field_cale_ev_content_pane_t1_ParamLimits

0x95a7,	// (0x00085b21) field_cale_ev_content_pane_t1

0xee24,	// (0x0008b39e) bg_button_pane_cp01

0xe25d,	// (0x0008a7d7) listscroll_cale_week_pane_ParamLimits

0x6316,	// (0x00082890) popup_toolbar_window_cp01

0xe39d,	// (0x0008a917) listscroll_cale_week_pane_t1_ParamLimits

0xe25d,	// (0x0008a7d7) listscroll_cale_day_pane_ParamLimits

0x6316,	// (0x00082890) popup_toolbar_window_cp02

0xe39d,	// (0x0008a917) listscroll_cale_day_pane_t1_ParamLimits

0xe25d,	// (0x0008a7d7) main_cale_month_pane_ParamLimits

0x8cf0,	// (0x0008526a) popup_toolbar_window_cp03_ParamLimits

0x8cf0,	// (0x0008526a) popup_toolbar_window_cp03

0x8649,	// (0x00084bc3) main_image_pane_g2_ParamLimits

0x8649,	// (0x00084bc3) main_image_pane_g2

0x8655,	// (0x00084bcf) main_image_pane_g3_ParamLimits

0x8655,	// (0x00084bcf) main_image_pane_g3

0x0002,

0xf51a,	// (0x0008ba94) main_image_pane_g_ParamLimits

0xf51a,	// (0x0008ba94) main_image_pane_g

0xef3e,	// (0x0008b4b8) main_image_pane_t1_ParamLimits

0x8661,	// (0x00084bdb) main_image_pane_t2_ParamLimits

0x8661,	// (0x00084bdb) main_image_pane_t2

0x8673,	// (0x00084bed) main_image_pane_t3_ParamLimits

0x8673,	// (0x00084bed) main_image_pane_t3

0x8685,	// (0x00084bff) main_image_pane_t4_ParamLimits

0x8685,	// (0x00084bff) main_image_pane_t4

0x0003,

0xf521,	// (0x0008ba9b) main_image_pane_t_ParamLimits

0xf521,	// (0x0008ba9b) main_image_pane_t

0x8697,	// (0x00084c11) popup_image_details_window_cp01

0x86a1,	// (0x00084c1b) popup_toobar_trans_pane_cp01_ParamLimits

0x86a1,	// (0x00084c1b) popup_toobar_trans_pane_cp01

0x8c61,	// (0x000851db) popup_image_details_window_ParamLimits

0x8c61,	// (0x000851db) popup_image_details_window

0x186c,	// (0x0007dde6) popup_image_focus_window

0x8f61,	// (0x000854db) camera2_autofocus_pane_ParamLimits

0x8f61,	// (0x000854db) camera2_autofocus_pane

0x0498,	// (0x0007ca12) bg_popup_sub_pane_cp06

0x1e08,	// (0x0007e382) popup_image_focus_window_g1

0x1e10,	// (0x0007e38a) popup_image_focus_window_g2

0x1e18,	// (0x0007e392) popup_image_focus_window_g3

0x1e20,	// (0x0007e39a) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0008bcaa) popup_image_focus_window_g

0x1e28,	// (0x0007e3a2) popup_image_focus_window_t1

0x1e36,	// (0x0007e3b0) popup_image_focus_window_t2

0x1e46,	// (0x0007e3c0) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0008bcb3) popup_image_focus_window_t

0x1e54,	// (0x0007e3ce) camera2_autofocus_pane_g1

0xf0e1,	// (0x0008b65b) bg_tb_trans_pane_cp01

0x1e62,	// (0x0007e3dc) popup_image_details_window_g1

0x1e75,	// (0x0007e3ef) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0008bcc5) popup_image_details_window_g

0x1e9e,	// (0x0007e418) popup_image_details_window_t1

0x1eb0,	// (0x0007e42a) popup_image_details_window_t2

0x1ec9,	// (0x0007e443) popup_image_details_window_t3

0x1edd,	// (0x0007e457) popup_image_details_window_t4

0x1ef8,	// (0x0007e472) popup_image_details_window_t5

0x0004,

0xf752,	// (0x0008bccc) popup_image_details_window_t

0xe249,	// (0x0008a7c3) bg_calc_paper_pane_ParamLimits

0x60c5,	// (0x0008263f) grid_highlight_pane_cp013

0x60cf,	// (0x00082649) list_calc_pane_ParamLimits

0x60e1,	// (0x0008265b) scroll_pane_cp024

0xe25d,	// (0x0008a7d7) bg_calc_display_pane_ParamLimits

0x60e9,	// (0x00082663) calc_display_pane_t1_ParamLimits

0x60fe,	// (0x00082678) calc_display_pane_t2_ParamLimits

0x6113,	// (0x0008268d) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0008b6fc) calc_display_pane_t_ParamLimits

0x61e6,	// (0x00082760) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0008b719) cell_calc_pane_g

0x61ef,	// (0x00082769) cell_calc_pane_t1

0xe2bc,	// (0x0008a836) grid_highlight_pane_cp02_ParamLimits

0xe2d2,	// (0x0008a84c) toolbar_button_pane_cp01_ParamLimits

0xe2d2,	// (0x0008a84c) toolbar_button_pane_cp01

0xef83,	// (0x0008b4fd) temp_image_control_pane_ParamLimits

0xef83,	// (0x0008b4fd) temp_image_control_pane

0xf0e1,	// (0x0008b65b) main_mp3_pane

0x1f12,	// (0x0007e48c) temp_image_control_pane_g1_ParamLimits

0x1f12,	// (0x0007e48c) temp_image_control_pane_g1

0x1f20,	// (0x0007e49a) temp_image_control_pane_g2_ParamLimits

0x1f20,	// (0x0007e49a) temp_image_control_pane_g2

0x1f32,	// (0x0007e4ac) temp_image_control_pane_g3_ParamLimits

0x1f32,	// (0x0007e4ac) temp_image_control_pane_g3

0x95f5,	// (0x00085b6f) temp_image_control_pane_g4_ParamLimits

0x95f5,	// (0x00085b6f) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0008bcd7) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0008bcd7) temp_image_control_pane_g

0x1f12,	// (0x0007e48c) main_mp3_pane_g1

0x9606,	// (0x00085b80) main_mp3_pane_g2

0x0007,

0xf766,	// (0x0008bce0) main_mp3_pane_g

0x1f75,	// (0x0007e4ef) main_mp3_pane_t1

0xe414,	// (0x0008a98e) main_camera_pane_g8_ParamLimits

0xe414,	// (0x0008a98e) main_camera_pane_g8

0x6a3d,	// (0x00082fb7) main_video_pane_g7_ParamLimits

0x6a3d,	// (0x00082fb7) main_video_pane_g7

0x90a4,	// (0x0008561e) main_camera2_pane_t7_ParamLimits

0x90a4,	// (0x0008561e) main_camera2_pane_t7

0xe566,	// (0x0008aae0) scroll_pane_cp025_ParamLimits

0xe566,	// (0x0008aae0) scroll_pane_cp025

0xe57a,	// (0x0008aaf4) scroll_pane_cp026_ParamLimits

0xe57a,	// (0x0008aaf4) scroll_pane_cp026

0xe589,	// (0x0008ab03) wml_content_pane_ParamLimits

0x0498,	// (0x0007ca12) main_touch_calib_pane

0x96aa,	// (0x00085c24) main_touch_calib_pane_g1

0x96b6,	// (0x00085c30) main_touch_calib_pane_g2

0x96c2,	// (0x00085c3c) main_touch_calib_pane_g3

0x96ce,	// (0x00085c48) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x0008bcfe) main_touch_calib_pane_g

0x96da,	// (0x00085c54) main_touch_calib_pane_t1

0x96f1,	// (0x00085c6b) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0008bd07) main_touch_calib_pane_t

0xebfa,	// (0x0008b174) mup_progress_pane_cp02

0xec19,	// (0x0008b193) navi_pane_g1

0xec7b,	// (0x0008b1f5) navi_pane_mp_t3

0xf0e1,	// (0x0008b65b) main_mp3_pane_ParamLimits

0x8d32,	// (0x000852ac) navi_pane_ParamLimits

0x1f12,	// (0x0007e48c) main_mp3_pane_g1_ParamLimits

0x9606,	// (0x00085b80) main_mp3_pane_g2_ParamLimits

0x9612,	// (0x00085b8c) main_mp3_pane_g3_ParamLimits

0x9612,	// (0x00085b8c) main_mp3_pane_g3

0x961e,	// (0x00085b98) main_mp3_pane_g4_ParamLimits

0x961e,	// (0x00085b98) main_mp3_pane_g4

0x1f42,	// (0x0007e4bc) main_mp3_pane_g5_ParamLimits

0x1f42,	// (0x0007e4bc) main_mp3_pane_g5

0x1f50,	// (0x0007e4ca) main_mp3_pane_g6_ParamLimits

0x1f50,	// (0x0007e4ca) main_mp3_pane_g6

0x1f5d,	// (0x0007e4d7) main_mp3_pane_g7_ParamLimits

0x1f5d,	// (0x0007e4d7) main_mp3_pane_g7

0x1f69,	// (0x0007e4e3) main_mp3_pane_g8_ParamLimits

0x1f69,	// (0x0007e4e3) main_mp3_pane_g8

0xf766,	// (0x0008bce0) main_mp3_pane_g_ParamLimits

0x962a,	// (0x00085ba4) main_mp3_pane_t2

0x963a,	// (0x00085bb4) main_mp3_pane_t3

0x1f83,	// (0x0007e4fd) main_mp3_pane_t4

0x1f91,	// (0x0007e50b) main_mp3_pane_t5

0x0005,

0xf777,	// (0x0008bcf1) main_mp3_pane_t

0x1f9f,	// (0x0007e519) mup_progress_pane_cp01

0x04c6,	// (0x0007ca40) aid_zoom_text_secondary2

0x1d95,	// (0x0007e30f) list_cale_ev2_pane

0x1d9d,	// (0x0007e317) scroll_pane_cp023_ParamLimits

0x9748,	// (0x00085cc2) field_cale_ev2_pane_ParamLimits

0x9748,	// (0x00085cc2) field_cale_ev2_pane

0x446f,	// (0x000809e9) field_cale_ev2_pane_g1_ParamLimits

0x446f,	// (0x000809e9) field_cale_ev2_pane_g1

0x447b,	// (0x000809f5) field_cale_ev2_pane_g2_ParamLimits

0x447b,	// (0x000809f5) field_cale_ev2_pane_g2

0x4493,	// (0x00080a0d) field_cale_ev2_pane_g3_ParamLimits

0x4493,	// (0x00080a0d) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0008bd12) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0008bd12) field_cale_ev2_pane_g

0x1fa7,	// (0x0007e521) field_cale_ev2_pane_t1_ParamLimits

0x1fa7,	// (0x0007e521) field_cale_ev2_pane_t1

0x1fbe,	// (0x0007e538) field_cale_ev2_pane_t2_ParamLimits

0x1fbe,	// (0x0007e538) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x0008bd1b) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x0008bd1b) field_cale_ev2_pane_t

0x8525,	// (0x00084a9f) main_postcard_pane_g5_ParamLimits

0x8525,	// (0x00084a9f) main_postcard_pane_g5

0x8533,	// (0x00084aad) main_postcard_pane_g6_ParamLimits

0x8533,	// (0x00084aad) main_postcard_pane_g6

0x687b,	// (0x00082df5) camera2_autofocus_pane_cp_ParamLimits

0x687b,	// (0x00082df5) camera2_autofocus_pane_cp

0xf0e1,	// (0x0008b65b) main_mup3_pane

0x9786,	// (0x00085d00) main_mup3_pane_g1_ParamLimits

0x9786,	// (0x00085d00) main_mup3_pane_g1

0x97a7,	// (0x00085d21) main_mup3_pane_g2_ParamLimits

0x97a7,	// (0x00085d21) main_mup3_pane_g2

0x9823,	// (0x00085d9d) main_mup3_pane_g3_ParamLimits

0x9823,	// (0x00085d9d) main_mup3_pane_g3

0x9864,	// (0x00085dde) main_mup3_pane_g4_ParamLimits

0x9864,	// (0x00085dde) main_mup3_pane_g4

0x98a5,	// (0x00085e1f) main_mup3_pane_g5_ParamLimits

0x98a5,	// (0x00085e1f) main_mup3_pane_g5

0x98e6,	// (0x00085e60) main_mup3_pane_g6_ParamLimits

0x98e6,	// (0x00085e60) main_mup3_pane_g6

0x1fd3,	// (0x0007e54d) main_mup3_pane_g7_ParamLimits

0x1fd3,	// (0x0007e54d) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x0008bd2b) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x0008bd2b) main_mup3_pane_g

0x9958,	// (0x00085ed2) main_mup3_pane_t1_ParamLimits

0x9958,	// (0x00085ed2) main_mup3_pane_t1

0x99cb,	// (0x00085f45) main_mup3_pane_t2_ParamLimits

0x99cb,	// (0x00085f45) main_mup3_pane_t2

0x9a98,	// (0x00086012) main_mup3_pane_t4_ParamLimits

0x9a98,	// (0x00086012) main_mup3_pane_t4

0x9aec,	// (0x00086066) main_mup3_pane_t5_ParamLimits

0x9aec,	// (0x00086066) main_mup3_pane_t5

0x9b98,	// (0x00086112) main_mup3_pane_t6_ParamLimits

0x9b98,	// (0x00086112) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x0008bd3c) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x0008bd3c) main_mup3_pane_t

0x9c40,	// (0x000861ba) mup3_progress_pane_ParamLimits

0x9c40,	// (0x000861ba) mup3_progress_pane

0x9cab,	// (0x00086225) popup_mup3_control_window_ParamLimits

0x9cab,	// (0x00086225) popup_mup3_control_window

0x1fe1,	// (0x0007e55b) popup_mup3_text_window

0x9cc8,	// (0x00086242) mup3_progress_pane_t1

0x9cdf,	// (0x00086259) mup3_progress_pane_t2

0x1fe9,	// (0x0007e563) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x0008bd49) mup3_progress_pane_t

0x2000,	// (0x0007e57a) mup_progress_pane_cp03

0x0498,	// (0x0007ca12) bg_tb_trans_pane_cp04

0x9cf6,	// (0x00086270) mup3_volume_pane

0x9cfe,	// (0x00086278) popup_mup3_control_window_g1

0x2ae6,	// (0x0007f060) mup3_volume_pane_g1

0x2aef,	// (0x0007f069) mup3_volume_pane_g2

0x2af8,	// (0x0007f072) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x0008bd50) mup3_volume_pane_g

0x0498,	// (0x0007ca12) bg_tb_trans_pane_cp03

0x2010,	// (0x0007e58a) popup_mup3_text_window_g1

0x2018,	// (0x0007e592) popup_mup3_text_window_t1

0xe2a5,	// (0x0008a81f) list_calc_item_pane_g1_ParamLimits

0x1a5f,	// (0x0007dfd9) mup_volume_pane_cp_g1

0x9708,	// (0x00085c82) main_touch_calib_pane_t3

0x971c,	// (0x00085c96) main_touch_calib_pane_t4

0x9732,	// (0x00085cac) main_touch_calib_pane_t5

0x04a2,	// (0x0007ca1c) aid_cell_size_toolbar2

0x04aa,	// (0x0007ca24) aid_popup3_width_pane

0x04b6,	// (0x0007ca30) aid_zoom_text_msg_primary

0x684e,	// (0x00082dc8) vorec_t7

0xe269,	// (0x0008a7e3) bg_calc_paper_pane_g1_ParamLimits

0xe275,	// (0x0008a7ef) bg_calc_paper_pane_g2_ParamLimits

0xe281,	// (0x0008a7fb) bg_calc_paper_pane_g3_ParamLimits

0xe28d,	// (0x0008a807) bg_calc_paper_pane_g4_ParamLimits

0xe299,	// (0x0008a813) bg_calc_paper_pane_g5_ParamLimits

0x6154,	// (0x000826ce) bg_calc_paper_pane_g6_ParamLimits

0x6165,	// (0x000826df) bg_calc_paper_pane_g7_ParamLimits

0x6176,	// (0x000826f0) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0008b703) bg_calc_paper_pane_g_ParamLimits

0x6187,	// (0x00082701) calc_bg_paper_pane_g9_ParamLimits

0x696c,	// (0x00082ee6) image_qvga_pane_ParamLimits

0x696c,	// (0x00082ee6) image_qvga_pane

0xe192,	// (0x0008a70c) bg_popup_sub_pane_cp04_ParamLimits

0xeeba,	// (0x0008b434) popup_mup_playback_window_g1_ParamLimits

0xeec6,	// (0x0008b440) popup_mup_playback_window_t1_ParamLimits

0xeedb,	// (0x0008b455) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0008ba8f) popup_mup_playback_window_t_ParamLimits

0x91d3,	// (0x0008574d) main_mup2_pane_g3_ParamLimits

0x91d3,	// (0x0008574d) main_mup2_pane_g3

0x6c08,	// (0x00083182) popup_toolbar_window_cp04

0x0a5c,	// (0x0007cfd6) popup_call2_audio_second_window_g3_ParamLimits

0x0a5c,	// (0x0007cfd6) popup_call2_audio_second_window_g3

0x0e66,	// (0x0007d3e0) popup_call2_audio_first_window_g4_ParamLimits

0x0e66,	// (0x0007d3e0) popup_call2_audio_first_window_g4

0x14e5,	// (0x0007da5f) popup_call2_audio_in_window_g4_ParamLimits

0x14e5,	// (0x0007da5f) popup_call2_audio_in_window_g4

0x863c,	// (0x00084bb6) aid_area_sk_bg_cut_ParamLimits

0x863c,	// (0x00084bb6) aid_area_sk_bg_cut

0xeef0,	// (0x0008b46a) aid_area_sk_bg_cut_2_ParamLimits

0xeef0,	// (0x0008b46a) aid_area_sk_bg_cut_2

0x9559,	// (0x00085ad3) aid_placing_details_win

0x9561,	// (0x00085adb) aid_placing_details_win_2

0x1e54,	// (0x0007e3ce) camera2_autofocus_pane_g1_ParamLimits

0x5d2a,	// (0x000822a4) popup_fixed_preview_cale_window_ParamLimits

0x5d2a,	// (0x000822a4) popup_fixed_preview_cale_window

0xecca,	// (0x0008b244) navi_slider_pane_g3

0xecd3,	// (0x0008b24d) navi_slider_pane_g4

0xecdc,	// (0x0008b256) navi_slider_pane_g5

0xecca,	// (0x0008b244) navi_slider_pane_g6

0x7e5f,	// (0x000843d9) navi_slider_pane_g7

0xedf1,	// (0x0008b36b) mup_scale_pane_g3

0xedfa,	// (0x0008b374) mup_scale_pane_g4

0xee03,	// (0x0008b37d) mup_scale_pane_g5

0x82da,	// (0x00084854) mup_scale_pane_g6

0x82e3,	// (0x0008485d) mup_scale_pane_g7

0xecca,	// (0x0008b244) cams2_slider_pane_g3

0x1ae1,	// (0x0007e05b) cams2_slider_pane_g4

0x94b1,	// (0x00085a2b) cams2_slider_pane_g5

0xecca,	// (0x0008b244) cams2_slider_pane_g6

0x94b9,	// (0x00085a33) cams2_slider_pane_g7

0x1d12,	// (0x0007e28c) camera2_autofocus_pane_cp_g1

0x2026,	// (0x0007e5a0) bg_popup_preview_window_pane_cp02_ParamLimits

0x2026,	// (0x0007e5a0) bg_popup_preview_window_pane_cp02

0x2032,	// (0x0007e5ac) list_fp_cale_pane_ParamLimits

0x2032,	// (0x0007e5ac) list_fp_cale_pane

0x203e,	// (0x0007e5b8) popup_fixed_preview_cale_window_t1_ParamLimits

0x203e,	// (0x0007e5b8) popup_fixed_preview_cale_window_t1

0x9d07,	// (0x00086281) popup_fixed_preview_cale_window_t2_ParamLimits

0x9d07,	// (0x00086281) popup_fixed_preview_cale_window_t2

0x9d1c,	// (0x00086296) popup_fixed_preview_cale_window_t3_ParamLimits

0x9d1c,	// (0x00086296) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x0008bd57) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x0008bd57) popup_fixed_preview_cale_window_t

0x9d31,	// (0x000862ab) list_single_fp_cale_pane_ParamLimits

0x9d31,	// (0x000862ab) list_single_fp_cale_pane

0x2074,	// (0x0007e5ee) list_single_fp_cale_pane_g1_ParamLimits

0x2074,	// (0x0007e5ee) list_single_fp_cale_pane_g1

0x2080,	// (0x0007e5fa) list_single_fp_cale_pane_g2_ParamLimits

0x2080,	// (0x0007e5fa) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x0008bd5e) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x0008bd5e) list_single_fp_cale_pane_g

0x2099,	// (0x0007e613) list_single_fp_cale_pane_t1_ParamLimits

0x2099,	// (0x0007e613) list_single_fp_cale_pane_t1

0x20ab,	// (0x0007e625) list_single_fp_cale_pane_t2_ParamLimits

0x20ab,	// (0x0007e625) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x0008bd65) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x0008bd65) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0498,	// (0x0007ca12) main_dialer_pane

0x9d41,	// (0x000862bb) aid_cell_size_keypad

0x9d4b,	// (0x000862c5) dialer_ne_pane

0x9d55,	// (0x000862cf) grid_dialer_command_1_pane

0x9d5d,	// (0x000862d7) grid_dialer_command_2_pane

0x9d65,	// (0x000862df) grid_dialer_keypad_pane

0x9d79,	// (0x000862f3) bg_popup_call_pane_cp06_ParamLimits

0x9d79,	// (0x000862f3) bg_popup_call_pane_cp06

0x9d85,	// (0x000862ff) dialer_ne_clear_pane_ParamLimits

0x9d85,	// (0x000862ff) dialer_ne_clear_pane

0x20de,	// (0x0007e658) dialer_ne_pane_g1

0x20e6,	// (0x0007e660) dialer_ne_pane_t1_ParamLimits

0x20e6,	// (0x0007e660) dialer_ne_pane_t1

0x9d91,	// (0x0008630b) dialer_ne_pane_t2_ParamLimits

0x9d91,	// (0x0008630b) dialer_ne_pane_t2

0x9dae,	// (0x00086328) dialer_ne_pane_t3_ParamLimits

0x9dae,	// (0x00086328) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x0008bd6a) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x0008bd6a) dialer_ne_pane_t

0x9dd2,	// (0x0008634c) dialer_ne_pane_t3_copy1_ParamLimits

0x9dd2,	// (0x0008634c) dialer_ne_pane_t3_copy1

0x9df6,	// (0x00086370) cell_dialer_keypad_pane_ParamLimits

0x9df6,	// (0x00086370) cell_dialer_keypad_pane

0x9e0d,	// (0x00086387) cell_dialer_command_1_pane_ParamLimits

0x9e0d,	// (0x00086387) cell_dialer_command_1_pane

0x9e23,	// (0x0008639d) cell_dialer_command_2_pane_ParamLimits

0x9e23,	// (0x0008639d) cell_dialer_command_2_pane

0x20f8,	// (0x0007e672) bg_button_pane_cp02_ParamLimits

0x20f8,	// (0x0007e672) bg_button_pane_cp02

0x9e32,	// (0x000863ac) cell_dialer_keypad_pane_g1_ParamLimits

0x9e32,	// (0x000863ac) cell_dialer_keypad_pane_g1

0x20f8,	// (0x0007e672) bg_button_pane_cp03_ParamLimits

0x20f8,	// (0x0007e672) bg_button_pane_cp03

0x9e46,	// (0x000863c0) cell_dialer_command_1_pane_g1_ParamLimits

0x9e46,	// (0x000863c0) cell_dialer_command_1_pane_g1

0x2104,	// (0x0007e67e) bg_button_pane_cp04

0x9e5a,	// (0x000863d4) cell_dialer_command_2_pane_g1

0xecb9,	// (0x0008b233) bg_button_pane_cp06

0x210c,	// (0x0007e686) dialer_ne_clear_pane_g1

0x7da2,	// (0x0008431c) navi_pane_g2

0x7dd0,	// (0x0008434a) navi_pane_g3

0x0002,

0xf418,	// (0x0008b992) navi_pane_g

0x7dfb,	// (0x00084375) navi_pane_mv_g2

0x7e22,	// (0x0008439c) navi_pane_mv_g5

0x7e2a,	// (0x000843a4) navi_pane_mv_t1

0xe25d,	// (0x0008a7d7) main_clock2_pane

0x9e8c,	// (0x00086406) main_clock2_list_pane_ParamLimits

0x9e8c,	// (0x00086406) main_clock2_list_pane

0x9eb6,	// (0x00086430) main_clock2_pane_t1_ParamLimits

0x9eb6,	// (0x00086430) main_clock2_pane_t1

0x9ee4,	// (0x0008645e) main_clock2_pane_t2_ParamLimits

0x9ee4,	// (0x0008645e) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x0008bd71) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x0008bd71) main_clock2_pane_t

0x9f4d,	// (0x000864c7) popup_clock_analogue_window_cp03_ParamLimits

0x9f4d,	// (0x000864c7) popup_clock_analogue_window_cp03

0x9f6d,	// (0x000864e7) popup_clock_digital_window_cp02_ParamLimits

0x9f6d,	// (0x000864e7) popup_clock_digital_window_cp02

0x9fde,	// (0x00086558) main_clock2_list_single_pane_ParamLimits

0x9fde,	// (0x00086558) main_clock2_list_single_pane

0xecb9,	// (0x0008b233) list_highlight_pane_cp05

0x2114,	// (0x0007e68e) main_clock2_list_single_pane_t1

0x6c08,	// (0x00083182) popup_toolbar_window_cp04_ParamLimits

0x95c5,	// (0x00085b3f) camera2_autofocus_pane_g2_ParamLimits

0x95c5,	// (0x00085b3f) camera2_autofocus_pane_g2

0x95d1,	// (0x00085b4b) camera2_autofocus_pane_g3_ParamLimits

0x95d1,	// (0x00085b4b) camera2_autofocus_pane_g3

0x95dd,	// (0x00085b57) camera2_autofocus_pane_g4_ParamLimits

0x95dd,	// (0x00085b57) camera2_autofocus_pane_g4

0x95e9,	// (0x00085b63) camera2_autofocus_pane_g5_ParamLimits

0x95e9,	// (0x00085b63) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x0008bcba) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x0008bcba) camera2_autofocus_pane_g

0x9766,	// (0x00085ce0) camera2_autofocus_pane_cp_g2

0x976e,	// (0x00085ce8) camera2_autofocus_pane_cp_g3

0x9776,	// (0x00085cf0) camera2_autofocus_pane_cp_g4

0x977e,	// (0x00085cf8) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x0008bd20) camera2_autofocus_pane_cp_g

0x9d71,	// (0x000862eb) popup_dialer_spcha_window

0x0498,	// (0x0007ca12) bg_popup_sub_pane_cp07

0x2122,	// (0x0007e69c) list_spcha_pane

0x212a,	// (0x0007e6a4) list_single_spcha_pane_ParamLimits

0x212a,	// (0x0007e6a4) list_single_spcha_pane

0x0498,	// (0x0007ca12) list_highlight_pane_cp06

0x213b,	// (0x0007e6b5) list_single_spcha_pane_t1

0x128f,	// (0x0007d809) popup_call2_audio_out_window_g4_ParamLimits

0x128f,	// (0x0007d809) popup_call2_audio_out_window_g4

0x0498,	// (0x0007ca12) main_imed2_pane

0x1876,	// (0x0007ddf0) popup_imed_adjust2_window

0x8c6f,	// (0x000851e9) popup_imed_trans_window_ParamLimits

0x8c6f,	// (0x000851e9) popup_imed_trans_window

0x1b4a,	// (0x0007e0c4) popup_blid_sat_info2_window_t1

0x1b58,	// (0x0007e0d2) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x0008bc4f) popup_blid_sat_info2_window_t

0xa088,	// (0x00086602) aid_size_cell_colour_35

0xa0a2,	// (0x0008661c) aid_size_cell_colour_112

0xa0b9,	// (0x00086633) aid_size_cell_effect

0xf0e1,	// (0x0008b65b) bg_tb_trans_pane_cp02

0xf0ef,	// (0x0008b669) heading_imed_pane

0xa0d3,	// (0x0008664d) listscroll_imed_pane

0x2149,	// (0x0007e6c3) heading_imed_pane_g1

0x2151,	// (0x0007e6cb) heading_imed_pane_t1

0x215f,	// (0x0007e6d9) grid_imed_colour_35_pane_ParamLimits

0x215f,	// (0x0007e6d9) grid_imed_colour_35_pane

0xa0df,	// (0x00086659) grid_imed_effect_pane

0x217b,	// (0x0007e6f5) list_imed_aspect_pane

0xa0ef,	// (0x00086669) scroll_pane_cp027_ParamLimits

0xa0ef,	// (0x00086669) scroll_pane_cp027

0xa0fb,	// (0x00086675) cell_imed_effect_pane_ParamLimits

0xa0fb,	// (0x00086675) cell_imed_effect_pane

0x2183,	// (0x0007e6fd) cell_imed_colour_pane_ParamLimits

0x2183,	// (0x0007e6fd) cell_imed_colour_pane

0x21cd,	// (0x0007e747) cell_imed_colour_pane_g1_ParamLimits

0x21cd,	// (0x0007e747) cell_imed_colour_pane_g1

0x21de,	// (0x0007e758) hgihlgiht_grid_pane_cp016_ParamLimits

0x21de,	// (0x0007e758) hgihlgiht_grid_pane_cp016

0xa117,	// (0x00086691) cell_imed_effect_pane_g1

0xa11f,	// (0x00086699) grid_highlight_pane_cp017

0x21ef,	// (0x0007e769) list_imed_single_pane_ParamLimits

0x21ef,	// (0x0007e769) list_imed_single_pane

0x0498,	// (0x0007ca12) list_highlight_pane_cp07

0x2203,	// (0x0007e77d) list_imed_aspect_pane_comp1_t1

0x184a,	// (0x0007ddc4) bg_tb_trans_pane_cp05

0x2225,	// (0x0007e79f) popup_imed_adjust2_window_g1

0x224c,	// (0x0007e7c6) popup_imed_adjust2_window_t1

0x48b7,	// (0x00080e31) slider_imed_adjust_pane

0x48cb,	// (0x00080e45) slider_imed_adjust_pane_g1

0x48db,	// (0x00080e55) slider_imed_adjust_pane_g2

0x48eb,	// (0x00080e65) slider_imed_adjust_pane_g3

0x48fc,	// (0x00080e76) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x0008bd8e) slider_imed_adjust_pane_g

0xa128,	// (0x000866a2) aid_size_cell_clipart2

0xa134,	// (0x000866ae) grid_imed_clipart_pane

0x490d,	// (0x00080e87) scroll_pane_cp031

0xa13e,	// (0x000866b8) cell_imed_clipart_pane_ParamLimits

0xa13e,	// (0x000866b8) cell_imed_clipart_pane

0xa15c,	// (0x000866d6) cell_imed_clipart_pane_g1

0x0498,	// (0x0007ca12) grid_highlight_pane_cp014

0x9e98,	// (0x00086412) main_clock2_pane_g1_ParamLimits

0x9e98,	// (0x00086412) main_clock2_pane_g1

0x9f89,	// (0x00086503) aid_call2_pane_cp10

0x9f9b,	// (0x00086515) aid_call_pane_cp10

0xebee,	// (0x0008b168) popup_clock_analogue_window_cp10_g1

0xebee,	// (0x0008b168) popup_clock_analogue_window_cp10_g2

0x9fad,	// (0x00086527) popup_clock_analogue_window_cp10_g3

0x9fad,	// (0x00086527) popup_clock_analogue_window_cp10_g4

0xebee,	// (0x0008b168) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x0008bd7c) popup_clock_analogue_window_cp10_g

0x9fbf,	// (0x00086539) popup_clock_analogue_window_cp10_t1

0x9ff0,	// (0x0008656a) clock_digital_number_pane_cp10_ParamLimits

0x9ff0,	// (0x0008656a) clock_digital_number_pane_cp10

0xa008,	// (0x00086582) clock_digital_number_pane_cp11_ParamLimits

0xa008,	// (0x00086582) clock_digital_number_pane_cp11

0xa020,	// (0x0008659a) clock_digital_number_pane_cp12_ParamLimits

0xa020,	// (0x0008659a) clock_digital_number_pane_cp12

0xa038,	// (0x000865b2) clock_digital_number_pane_cp13_ParamLimits

0xa038,	// (0x000865b2) clock_digital_number_pane_cp13

0xa050,	// (0x000865ca) clock_digital_separator_pane_cp10_ParamLimits

0xa050,	// (0x000865ca) clock_digital_separator_pane_cp10

0xa068,	// (0x000865e2) popup_clock_digital_window_cp02_t1_ParamLimits

0xa068,	// (0x000865e2) popup_clock_digital_window_cp02_t1

0xe18a,	// (0x0008a704) clock_digital_number_pane_cp10_g1

0xe18a,	// (0x0008a704) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0008bd97) clock_digital_number_pane_cp10_g

0xe18a,	// (0x0008a704) clock_digital_separator_pane_cp10_g1

0xe18a,	// (0x0008a704) clock_digital_separator_pane_g2_cp10

0xec89,	// (0x0008b203) navi_pane_vded_g4

0xec92,	// (0x0008b20c) navi_pane_vded_g5

0xec9b,	// (0x0008b215) navi_pane_vded_t1

0x0498,	// (0x0007ca12) main_vded_pane

0xa165,	// (0x000866df) main_vded_pane_g1

0xa171,	// (0x000866eb) main_vded_pane_g2

0xa17b,	// (0x000866f5) main_vded_pane_g3

0x0002,

0xf822,	// (0x0008bd9c) main_vded_pane_g

0xa185,	// (0x000866ff) main_vded_pane_t1

0xa193,	// (0x0008670d) main_vded_pane_t2

0x0001,

0xf829,	// (0x0008bda3) main_vded_pane_t

0xa1a1,	// (0x0008671b) vded_slider_pane

0xa1ab,	// (0x00086725) vded_video_pane

0x4915,	// (0x00080e8f) vded_video_pane_g1

0xa1b7,	// (0x00086731) vded_video_pane_g2

0x1d12,	// (0x0007e28c) vded_video_pane_g3

0x0002,

0xf82e,	// (0x0008bda8) vded_video_pane_g

0x491f,	// (0x00080e99) vded_slider_pane_g1

0x1a5f,	// (0x0007dfd9) vded_slider_pane_g2

0x4928,	// (0x00080ea2) vded_slider_pane_g3

0x4931,	// (0x00080eab) vded_slider_pane_g4

0x493a,	// (0x00080eb4) vded_slider_pane_g5

0x0004,

0xf835,	// (0x0008bdaf) vded_slider_pane_g

0x9c9f,	// (0x00086219) mup3_rocker_pane_ParamLimits

0x9c9f,	// (0x00086219) mup3_rocker_pane

0xa1c0,	// (0x0008673a) mup3_control_keys_pane_g1

0xa1c8,	// (0x00086742) mup3_control_keys_pane_g2

0xa1d0,	// (0x0008674a) mup3_control_keys_pane_g3

0xa1d8,	// (0x00086752) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x0008bdba) mup3_control_keys_pane_g

0x5d48,	// (0x000822c2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5d48,	// (0x000822c2) popup_toolbar2_fixed_window_cp01

0x9cbb,	// (0x00086235) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9cbb,	// (0x00086235) popup_toolbar2_fixed_window_cp02

0x0bce,	// (0x0007d148) popup_call2_audio_second_window_t4_ParamLimits

0x0bce,	// (0x0007d148) popup_call2_audio_second_window_t4

0x10fc,	// (0x0007d676) popup_call2_audio_first_window_t6_ParamLimits

0x10fc,	// (0x0007d676) popup_call2_audio_first_window_t6

0x1392,	// (0x0007d90c) popup_call2_audio_out_window_t6_ParamLimits

0x1392,	// (0x0007d90c) popup_call2_audio_out_window_t6

0x0498,	// (0x0007ca12) main_vitu_pane

0xa1e8,	// (0x00086762) aid_size_cell_itu_ParamLimits

0xa1e8,	// (0x00086762) aid_size_cell_itu

0x23b9,	// (0x0007e933) bg_popup_window_pane_cp08_ParamLimits

0x23b9,	// (0x0007e933) bg_popup_window_pane_cp08

0xa1f6,	// (0x00086770) field_vitu_entry_pane_ParamLimits

0xa1f6,	// (0x00086770) field_vitu_entry_pane

0xa205,	// (0x0008677f) grid_vitu_function_pane_ParamLimits

0xa205,	// (0x0008677f) grid_vitu_function_pane

0xa215,	// (0x0008678f) grid_vitu_itu_pane_ParamLimits

0xa215,	// (0x0008678f) grid_vitu_itu_pane

0xa225,	// (0x0008679f) cell_vitu_itu_pane_ParamLimits

0xa225,	// (0x0008679f) cell_vitu_itu_pane

0xa23c,	// (0x000867b6) cell_vitu_function_pane_ParamLimits

0xa23c,	// (0x000867b6) cell_vitu_function_pane

0xf0e1,	// (0x0008b65b) bg_popup_sub_pane_cp08_ParamLimits

0xf0e1,	// (0x0008b65b) bg_popup_sub_pane_cp08

0xa250,	// (0x000867ca) field_vitu_entry_pane_t1_ParamLimits

0xa250,	// (0x000867ca) field_vitu_entry_pane_t1

0x495b,	// (0x00080ed5) field_vitu_entry_pane_t2_ParamLimits

0x495b,	// (0x00080ed5) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x0008bdc8) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x0008bdc8) field_vitu_entry_pane_t

0x4978,	// (0x00080ef2) bg_button_pane_cp05_ParamLimits

0x4978,	// (0x00080ef2) bg_button_pane_cp05

0xa26a,	// (0x000867e4) cell_vitu_itu_pane_g1

0xa282,	// (0x000867fc) cell_vitu_itu_pane_t1_ParamLimits

0xa282,	// (0x000867fc) cell_vitu_itu_pane_t1

0xa294,	// (0x0008680e) cell_vitu_itu_pane_t2_ParamLimits

0xa294,	// (0x0008680e) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x0008bdcd) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x0008bdcd) cell_vitu_itu_pane_t

0x4986,	// (0x00080f00) bg_button_pane_cp07

0xa2c9,	// (0x00086843) cell_vitu_function_pane_g1

0x5ff0,	// (0x0008256a) main_calc_pane_g1

0x5b48,	// (0x000820c2) aid_visual_content_pane

0x0498,	// (0x0007ca12) main_vradio_pane

0xa2d2,	// (0x0008684c) main_vradio_pane_g1_ParamLimits

0xa2d2,	// (0x0008684c) main_vradio_pane_g1

0x4990,	// (0x00080f0a) main_vradio_pane_g2_ParamLimits

0x4990,	// (0x00080f0a) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0008bdd4) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0008bdd4) main_vradio_pane_g

0xa2e0,	// (0x0008685a) main_vradio_pane_t1_ParamLimits

0xa2e0,	// (0x0008685a) main_vradio_pane_t1

0xa2f2,	// (0x0008686c) main_vradio_pane_t2_ParamLimits

0xa2f2,	// (0x0008686c) main_vradio_pane_t2

0x499d,	// (0x00080f17) main_vradio_pane_t3_ParamLimits

0x499d,	// (0x00080f17) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x0008bdd9) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x0008bdd9) main_vradio_pane_t

0xa304,	// (0x0008687e) vradio_rocker_control_pane_ParamLimits

0xa304,	// (0x0008687e) vradio_rocker_control_pane

0xa310,	// (0x0008688a) vradio_station_info_pane_ParamLimits

0xa310,	// (0x0008688a) vradio_station_info_pane

0x49b1,	// (0x00080f2b) vradio_frequency_info_pane_ParamLimits

0x49b1,	// (0x00080f2b) vradio_frequency_info_pane

0x1d12,	// (0x0007e28c) vradio_station_info_pane_g1

0x49c0,	// (0x00080f3a) vradio_station_info_pane_t1_ParamLimits

0x49c0,	// (0x00080f3a) vradio_station_info_pane_t1

0x49e2,	// (0x00080f5c) vradio_station_info_pane_t2_ParamLimits

0x49e2,	// (0x00080f5c) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x0008bde0) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x0008bde0) vradio_station_info_pane_t

0x49f4,	// (0x00080f6e) vradio_tuning_pane

0x49fc,	// (0x00080f76) vradio_rocker_control_pane_g1

0x4a04,	// (0x00080f7e) vradio_rocker_control_pane_g2

0x4a0c,	// (0x00080f86) vradio_rocker_control_pane_g3

0x4a14,	// (0x00080f8e) vradio_rocker_control_pane_g4

0x4a1c,	// (0x00080f96) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0008bde5) vradio_rocker_control_pane_g

0xa31d,	// (0x00086897) vradio_frequency_info_pane_g1

0x4a24,	// (0x00080f9e) vradio_frequency_info_pane_t1_ParamLimits

0x4a24,	// (0x00080f9e) vradio_frequency_info_pane_t1

0xa327,	// (0x000868a1) vradio_tuning_pane_g1

0xa332,	// (0x000868ac) vradio_tuning_pane_t1

0x04ce,	// (0x0007ca48) area_side_right_pane_ParamLimits

0x04ce,	// (0x0007ca48) area_side_right_pane

0x1811,	// (0x0007dd8b) status_small_pane_g1

0x1819,	// (0x0007dd93) status_small_pane_g2

0x1822,	// (0x0007dd9c) status_small_pane_g3

0x182b,	// (0x0007dda5) status_small_pane_g4

0x0003,

0xf62b,	// (0x0008bba5) status_small_pane_g

0x1834,	// (0x0007ddae) status_small_pane_t1

0x0498,	// (0x0007ca12) main_video3_pane

0x4a38,	// (0x00080fb2) cams_zoom_vslider_pane

0x4a40,	// (0x00080fba) image3_wide_pane_ParamLimits

0x4a40,	// (0x00080fba) image3_wide_pane

0x4a5a,	// (0x00080fd4) image3_wide_small_pane

0x4a66,	// (0x00080fe0) main_video3_pane_g1_ParamLimits

0x4a66,	// (0x00080fe0) main_video3_pane_g1

0x4a82,	// (0x00080ffc) main_video3_pane_g2_ParamLimits

0x4a82,	// (0x00080ffc) main_video3_pane_g2

0x0001,

0xf876,	// (0x0008bdf0) main_video3_pane_g_ParamLimits

0xf876,	// (0x0008bdf0) main_video3_pane_g

0x4a9e,	// (0x00081018) main_video3_pane_t1_ParamLimits

0x4a9e,	// (0x00081018) main_video3_pane_t1

0x4ac9,	// (0x00081043) main_video3_pane_t2_ParamLimits

0x4ac9,	// (0x00081043) main_video3_pane_t2

0x4af6,	// (0x00081070) main_video3_pane_t3_ParamLimits

0x4af6,	// (0x00081070) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0008bdf5) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0008bdf5) main_video3_pane_t

0x4b23,	// (0x0008109d) cams_zoom_vslider_pane_g1

0x4b2c,	// (0x000810a6) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x0008bdfc) cams_zoom_vslider_pane_g

0x4b34,	// (0x000810ae) small_slider_vertical_pane

0x1d12,	// (0x0007e28c) small_slider_vertical_pane_g1

0x1d12,	// (0x0007e28c) small_slider_vertical_pane_g2

0x4b3c,	// (0x000810b6) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x0008be01) small_slider_vertical_pane_g

0x0498,	// (0x0007ca12) main_hwr_training_pane

0x4b45,	// (0x000810bf) hwr_training_instruct_pane_ParamLimits

0x4b45,	// (0x000810bf) hwr_training_instruct_pane

0xa341,	// (0x000868bb) hwr_training_navi_pane_ParamLimits

0xa341,	// (0x000868bb) hwr_training_navi_pane

0xa35b,	// (0x000868d5) hwr_training_write_pane_ParamLimits

0xa35b,	// (0x000868d5) hwr_training_write_pane

0x0498,	// (0x0007ca12) bg_frame_shadow_pane

0x4b7c,	// (0x000810f6) hwr_training_write_pane_g1

0x4b84,	// (0x000810fe) hwr_training_write_pane_g2

0x4b8c,	// (0x00081106) hwr_training_write_pane_g3

0x4b94,	// (0x0008110e) hwr_training_write_pane_g4

0x4b9c,	// (0x00081116) hwr_training_write_pane_g5

0x4ba4,	// (0x0008111e) hwr_training_write_pane_g6

0x4bac,	// (0x00081126) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x0008be08) hwr_training_write_pane_g

0xa393,	// (0x0008690d) hwr_training_navi_pane_g1_ParamLimits

0xa393,	// (0x0008690d) hwr_training_navi_pane_g1

0xa3a5,	// (0x0008691f) hwr_training_navi_pane_g2_ParamLimits

0xa3a5,	// (0x0008691f) hwr_training_navi_pane_g2

0xa3b7,	// (0x00086931) hwr_training_navi_pane_g3_ParamLimits

0xa3b7,	// (0x00086931) hwr_training_navi_pane_g3

0xa3c7,	// (0x00086941) hwr_training_navi_pane_g4_ParamLimits

0xa3c7,	// (0x00086941) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0008be17) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0008be17) hwr_training_navi_pane_g

0xa3e1,	// (0x0008695b) hwr_training_navi_pane_t1

0xa3ef,	// (0x00086969) list_single_hwr_training_instruct_pane_ParamLimits

0xa3ef,	// (0x00086969) list_single_hwr_training_instruct_pane

0x4bb4,	// (0x0008112e) list_single_hwr_training_instruct_pane_t1

0x1c52,	// (0x0007e1cc) bg_frame_shadow_pane_g1

0x4bc3,	// (0x0008113d) bg_frame_shadow_pane_g2

0x4bcb,	// (0x00081145) bg_frame_shadow_pane_g3

0x4bd3,	// (0x0008114d) bg_frame_shadow_pane_g4

0x4bdb,	// (0x00081155) bg_frame_shadow_pane_g5

0x4be3,	// (0x0008115d) bg_frame_shadow_pane_g6

0x4beb,	// (0x00081165) bg_frame_shadow_pane_g7

0xe328,	// (0x0008a8a2) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x0008be22) bg_frame_shadow_pane_g

0x0498,	// (0x0007ca12) main_video_tele_dialer_pane

0xa40e,	// (0x00086988) aid_size_cell_video_keypad_ParamLimits

0xa40e,	// (0x00086988) aid_size_cell_video_keypad

0xa41e,	// (0x00086998) grid_video_dialer_keypad_pane_ParamLimits

0xa41e,	// (0x00086998) grid_video_dialer_keypad_pane

0xa452,	// (0x000869cc) video_down_pane_cp_ParamLimits

0xa452,	// (0x000869cc) video_down_pane_cp

0xa47c,	// (0x000869f6) cell_video_dialer_keypad_pane_ParamLimits

0xa47c,	// (0x000869f6) cell_video_dialer_keypad_pane

0x4bf3,	// (0x0008116d) bg_button_pane_cp08_ParamLimits

0x4bf3,	// (0x0008116d) bg_button_pane_cp08

0xa493,	// (0x00086a0d) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa493,	// (0x00086a0d) cell_video_dialer_keypad_pane_g1

0x9c93,	// (0x0008620d) mup3_rocker2_pane_ParamLimits

0x9c93,	// (0x0008620d) mup3_rocker2_pane

0x1d12,	// (0x0007e28c) mup3_rocker2_pane_g1

0x8bf1,	// (0x0008516b) main_dialer2_pane

0x0498,	// (0x0007ca12) main_mp4_pane

0xa4d6,	// (0x00086a50) main_mp4_pane_g1_ParamLimits

0xa4d6,	// (0x00086a50) main_mp4_pane_g1

0xa4e4,	// (0x00086a5e) main_mp4_pane_g2_ParamLimits

0xa4e4,	// (0x00086a5e) main_mp4_pane_g2

0xa4f2,	// (0x00086a6c) main_mp4_pane_g3_ParamLimits

0xa4f2,	// (0x00086a6c) main_mp4_pane_g3

0xa545,	// (0x00086abf) main_mp4_pane_g4_ParamLimits

0xa545,	// (0x00086abf) main_mp4_pane_g4

0xa55f,	// (0x00086ad9) main_mp4_pane_g5_ParamLimits

0xa55f,	// (0x00086ad9) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x0008be42) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x0008be42) main_mp4_pane_g

0xa593,	// (0x00086b0d) main_mp4_pane_t1_ParamLimits

0xa593,	// (0x00086b0d) main_mp4_pane_t1

0xa5ef,	// (0x00086b69) main_mp4_pane_t2_ParamLimits

0xa5ef,	// (0x00086b69) main_mp4_pane_t2

0x4bff,	// (0x00081179) main_mp4_pane_t3_ParamLimits

0x4bff,	// (0x00081179) main_mp4_pane_t3

0xa641,	// (0x00086bbb) main_mp4_pane_t4_ParamLimits

0xa641,	// (0x00086bbb) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x0008be4f) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x0008be4f) main_mp4_pane_t

0xa681,	// (0x00086bfb) mp4_progress_pane_ParamLimits

0xa681,	// (0x00086bfb) mp4_progress_pane

0xa6cb,	// (0x00086c45) mp4_rocker_pane_ParamLimits

0xa6cb,	// (0x00086c45) mp4_rocker_pane

0x226c,	// (0x0007e7e6) mp4_progress_pane_t1

0x2285,	// (0x0007e7ff) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x0008be58) mp4_progress_pane_t

0x229e,	// (0x0007e818) mup_progress_pane_cp04

0x2b5d,	// (0x0007f0d7) mp4_rocker_pane_g1

0xa6ed,	// (0x00086c67) aid_cell_size_keypad2_ParamLimits

0xa6ed,	// (0x00086c67) aid_cell_size_keypad2

0xa6fd,	// (0x00086c77) dialer2_ne_pane_ParamLimits

0xa6fd,	// (0x00086c77) dialer2_ne_pane

0xa709,	// (0x00086c83) grid_dialer2_keypad_pane_ParamLimits

0xa709,	// (0x00086c83) grid_dialer2_keypad_pane

0x2bb8,	// (0x0007f132) bg_popup_call_pane_cp07_ParamLimits

0x2bb8,	// (0x0007f132) bg_popup_call_pane_cp07

0xa717,	// (0x00086c91) dialer2_ne_pane_t1_ParamLimits

0xa717,	// (0x00086c91) dialer2_ne_pane_t1

0xa73c,	// (0x00086cb6) cell_dialer2_keypad_pane_ParamLimits

0xa73c,	// (0x00086cb6) cell_dialer2_keypad_pane

0x22bc,	// (0x0007e836) bg_button_pane_pane_cp04_ParamLimits

0x22bc,	// (0x0007e836) bg_button_pane_pane_cp04

0xa753,	// (0x00086ccd) cell_dialer2_keypad_pane_g1_ParamLimits

0xa753,	// (0x00086ccd) cell_dialer2_keypad_pane_g1

0x6b43,	// (0x000830bd) aid_placing_vt_set_content_ParamLimits

0x6b43,	// (0x000830bd) aid_placing_vt_set_content

0x6b5d,	// (0x000830d7) aid_placing_vt_set_title_ParamLimits

0x6b5d,	// (0x000830d7) aid_placing_vt_set_title

0x0498,	// (0x0007ca12) main_image3_pane

0xa7ed,	// (0x00086d67) area_side_right_pane_cp01_ParamLimits

0xa7ed,	// (0x00086d67) area_side_right_pane_cp01

0xa81c,	// (0x00086d96) main_image3_pane_g1_ParamLimits

0xa81c,	// (0x00086d96) main_image3_pane_g1

0xa82a,	// (0x00086da4) main_image3_pane_g2_ParamLimits

0xa82a,	// (0x00086da4) main_image3_pane_g2

0xa843,	// (0x00086dbd) main_image3_pane_g3_ParamLimits

0xa843,	// (0x00086dbd) main_image3_pane_g3

0xa85c,	// (0x00086dd6) main_image3_pane_g4_ParamLimits

0xa85c,	// (0x00086dd6) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x0008be67) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x0008be67) main_image3_pane_g

0xa875,	// (0x00086def) main_image3_pane_t1_ParamLimits

0xa875,	// (0x00086def) main_image3_pane_t1

0xa89a,	// (0x00086e14) main_image3_pane_t2_ParamLimits

0xa89a,	// (0x00086e14) main_image3_pane_t2

0xa8b9,	// (0x00086e33) main_image3_pane_t3_ParamLimits

0xa8b9,	// (0x00086e33) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x0008be70) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x0008be70) main_image3_pane_t

0x23b9,	// (0x0007e933) grid_sctrl_middle_pane_cp01_ParamLimits

0x23b9,	// (0x0007e933) grid_sctrl_middle_pane_cp01

0xa91a,	// (0x00086e94) cell_sctrl_middle_pane_cp01_ParamLimits

0xa91a,	// (0x00086e94) cell_sctrl_middle_pane_cp01

0xa92b,	// (0x00086ea5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa92b,	// (0x00086ea5) cell_sctrl_middle_pane_cp01_g1

0x0498,	// (0x0007ca12) main_call4_pane

0xa938,	// (0x00086eb2) aid_size_button_call4_ParamLimits

0xa938,	// (0x00086eb2) aid_size_button_call4

0xa96a,	// (0x00086ee4) call4_windows_pane_ParamLimits

0xa96a,	// (0x00086ee4) call4_windows_pane

0xa986,	// (0x00086f00) grid_call4_button_pane_ParamLimits

0xa986,	// (0x00086f00) grid_call4_button_pane

0x22c8,	// (0x0007e842) call4_windows_conf_pane

0x22e3,	// (0x0007e85d) popup_call4_audio_first_window_ParamLimits

0x22e3,	// (0x0007e85d) popup_call4_audio_first_window

0x2331,	// (0x0007e8ab) popup_call4_audio_second_window_ParamLimits

0x2331,	// (0x0007e8ab) popup_call4_audio_second_window

0x2347,	// (0x0007e8c1) popup_call4_audio_wait_window_ParamLimits

0x2347,	// (0x0007e8c1) popup_call4_audio_wait_window

0xa9aa,	// (0x00086f24) cell_call4_button_pane_ParamLimits

0xa9aa,	// (0x00086f24) cell_call4_button_pane

0xa9cd,	// (0x00086f47) bg_button_pane_cp09_ParamLimits

0xa9cd,	// (0x00086f47) bg_button_pane_cp09

0xa9d9,	// (0x00086f53) cell_call4_button_pane_g1_ParamLimits

0xa9d9,	// (0x00086f53) cell_call4_button_pane_g1

0xa9e6,	// (0x00086f60) cell_call4_button_pane_t1_ParamLimits

0xa9e6,	// (0x00086f60) cell_call4_button_pane_t1

0x238f,	// (0x0007e909) popup_call4_audio_conf_window_ParamLimits

0x238f,	// (0x0007e909) popup_call4_audio_conf_window

0x9cc8,	// (0x00086242) mup3_progress_pane_t1_ParamLimits

0x9cdf,	// (0x00086259) mup3_progress_pane_t2_ParamLimits

0x1fe9,	// (0x0007e563) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x0008bd49) mup3_progress_pane_t_ParamLimits

0x2000,	// (0x0007e57a) mup_progress_pane_cp03_ParamLimits

0xa1e0,	// (0x0008675a) mup3_control_keys_pane_g4_copy1

0xa6af,	// (0x00086c29) mp4_rocker2_pane_ParamLimits

0xa6af,	// (0x00086c29) mp4_rocker2_pane

0x23b1,	// (0x0007e92b) mp4_rocker2_pane_g1

0x23a9,	// (0x0007e923) mp4_rocker2_pane_g2

0xa9f8,	// (0x00086f72) mp4_rocker2_pane_g3

0xaa00,	// (0x00086f7a) mp4_rocker2_pane_g4

0xaa08,	// (0x00086f82) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x0008be79) mp4_rocker2_pane_g

0x0498,	// (0x0007ca12) main_camera4_pane

0x0498,	// (0x0007ca12) main_video4_pane

0xa42e,	// (0x000869a8) main_video_tele_dialer_pane_t1_ParamLimits

0xa42e,	// (0x000869a8) main_video_tele_dialer_pane_t1

0xa440,	// (0x000869ba) main_video_tele_dialer_pane_t2_ParamLimits

0xa440,	// (0x000869ba) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x0008be33) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x0008be33) main_video_tele_dialer_pane_t

0xaa28,	// (0x00086fa2) cam4_autofocus_pane_ParamLimits

0xaa28,	// (0x00086fa2) cam4_autofocus_pane

0xaa34,	// (0x00086fae) cam4_image_uncrop_pane_ParamLimits

0xaa34,	// (0x00086fae) cam4_image_uncrop_pane

0xaa4d,	// (0x00086fc7) cam4_indicators_pane_ParamLimits

0xaa4d,	// (0x00086fc7) cam4_indicators_pane

0xaa69,	// (0x00086fe3) main_camera4_pane_g1_ParamLimits

0xaa69,	// (0x00086fe3) main_camera4_pane_g1

0xaa75,	// (0x00086fef) main_camera4_pane_g2_ParamLimits

0xaa75,	// (0x00086fef) main_camera4_pane_g2

0xaa75,	// (0x00086fef) main_camera4_pane_g3_ParamLimits

0xaa75,	// (0x00086fef) main_camera4_pane_g3

0xaa81,	// (0x00086ffb) main_camera4_pane_g4_ParamLimits

0xaa81,	// (0x00086ffb) main_camera4_pane_g4

0xaa8d,	// (0x00087007) main_camera4_pane_g5_ParamLimits

0xaa8d,	// (0x00087007) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0008be84) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0008be84) main_camera4_pane_g

0xaaa7,	// (0x00087021) main_camera4_pane_t1_ParamLimits

0xaaa7,	// (0x00087021) main_camera4_pane_t1

0xaaf1,	// (0x0008706b) bg_tb_trans_pane_cp06

0xab07,	// (0x00087081) cam4_indicators_pane_g1

0xab14,	// (0x0008708e) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x0008be9f) cam4_indicators_pane_g

0xab34,	// (0x000870ae) cam4_indicators_pane_t1

0xab5e,	// (0x000870d8) main_video4_pane_g1_ParamLimits

0xab5e,	// (0x000870d8) main_video4_pane_g1

0xab6a,	// (0x000870e4) main_video4_pane_g2_ParamLimits

0xab6a,	// (0x000870e4) main_video4_pane_g2

0xab76,	// (0x000870f0) main_video4_pane_g3_ParamLimits

0xab76,	// (0x000870f0) main_video4_pane_g3

0xab82,	// (0x000870fc) main_video4_pane_g4_ParamLimits

0xab82,	// (0x000870fc) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0008bea6) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0008bea6) main_video4_pane_g

0xaba4,	// (0x0008711e) vid4_indicators_pane_ParamLimits

0xaba4,	// (0x0008711e) vid4_indicators_pane

0xabc2,	// (0x0008713c) video4_image_uncrop_cif_pane_ParamLimits

0xabc2,	// (0x0008713c) video4_image_uncrop_cif_pane

0xabd1,	// (0x0008714b) video4_image_uncrop_nhd_pane_ParamLimits

0xabd1,	// (0x0008714b) video4_image_uncrop_nhd_pane

0xaa34,	// (0x00086fae) video4_image_uncrop_vga_pane_ParamLimits

0xaa34,	// (0x00086fae) video4_image_uncrop_vga_pane

0xabe0,	// (0x0008715a) bg_tb_trans_pane_cp07

0xab07,	// (0x00087081) vid4_indicators_pane_g1

0xabf8,	// (0x00087172) vid4_indicators_pane_g2

0xac05,	// (0x0008717f) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x0008beb1) vid4_indicators_pane_g

0xac32,	// (0x000871ac) vid4_indicators_pane_t1

0xac4c,	// (0x000871c6) cam4_autofocus_pane_g1

0xac54,	// (0x000871ce) cam4_autofocus_pane_g2

0xac5c,	// (0x000871d6) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x0008bebc) cam4_autofocus_pane_g

0xac64,	// (0x000871de) cam4_autofocus_pane_g3_copy1

0xa460,	// (0x000869da) video_down_pane_cp_t1

0xa46e,	// (0x000869e8) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x0008be38) video_down_pane_cp_t

0x23b9,	// (0x0007e933) popup_vitu2_window_ParamLimits

0x23b9,	// (0x0007e933) popup_vitu2_window

0xac6c,	// (0x000871e6) aid_size_cell2_itu2_ParamLimits

0xac6c,	// (0x000871e6) aid_size_cell2_itu2

0xac8e,	// (0x00087208) aid_size_cell_itu2_ParamLimits

0xac8e,	// (0x00087208) aid_size_cell_itu2

0xacd2,	// (0x0008724c) bg_popup_window_pane_cp09_ParamLimits

0xacd2,	// (0x0008724c) bg_popup_window_pane_cp09

0xace0,	// (0x0008725a) field_vitu2_entry_pane_ParamLimits

0xace0,	// (0x0008725a) field_vitu2_entry_pane

0xad00,	// (0x0008727a) grid_vitu2_function_pane_ParamLimits

0xad00,	// (0x0008727a) grid_vitu2_function_pane

0xad44,	// (0x000872be) grid_vitu2_itu_pane_ParamLimits

0xad44,	// (0x000872be) grid_vitu2_itu_pane

0xadb8,	// (0x00087332) cell_vitu2_itu_pane_ParamLimits

0xadb8,	// (0x00087332) cell_vitu2_itu_pane

0xadcf,	// (0x00087349) cell_vitu2_function_pane_ParamLimits

0xadcf,	// (0x00087349) cell_vitu2_function_pane

0x23c7,	// (0x0007e941) bg_popup_call_pane_cp08_ParamLimits

0x23c7,	// (0x0007e941) bg_popup_call_pane_cp08

0x23e0,	// (0x0007e95a) field_vitu2_entry_pane_g1

0x23ec,	// (0x0007e966) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0008bec3) field_vitu2_entry_pane_g

0xae13,	// (0x0008738d) field_vitu2_entry_pane_t1_ParamLimits

0xae13,	// (0x0008738d) field_vitu2_entry_pane_t1

0x2406,	// (0x0007e980) field_vitu2_entry_pane_t2_ParamLimits

0x2406,	// (0x0007e980) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x0008beca) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x0008beca) field_vitu2_entry_pane_t

0xae2e,	// (0x000873a8) bg_button_pane_cp010_ParamLimits

0xae2e,	// (0x000873a8) bg_button_pane_cp010

0xae3c,	// (0x000873b6) cell_vitu2_itu_pane_g1

0xae5a,	// (0x000873d4) cell_vitu2_itu_pane_t1_ParamLimits

0xae5a,	// (0x000873d4) cell_vitu2_itu_pane_t1

0x5a4d,	// (0x00081fc7) cell_vitu2_itu_pane_t2_ParamLimits

0x5a4d,	// (0x00081fc7) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0008bed4) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0008bed4) cell_vitu2_itu_pane_t

0xabe0,	// (0x0008715a) bg_button_pane_cp011

0xaeac,	// (0x00087426) cell_vitu2_function_pane_g1

0x0498,	// (0x0007ca12) main_myfav_hc_pane

0xa8fb,	// (0x00086e75) popup_image3_note_pane_ParamLimits

0xa8fb,	// (0x00086e75) popup_image3_note_pane

0xa909,	// (0x00086e83) popup_image3_tool_bar_pane_ParamLimits

0xa909,	// (0x00086e83) popup_image3_tool_bar_pane

0x5abb,	// (0x00082035) cell_vitu2_itu_pane_t3_ParamLimits

0x5abb,	// (0x00082035) cell_vitu2_itu_pane_t3

0x0498,	// (0x0007ca12) bg_popup_trans_pane

0x242b,	// (0x0007e9a5) grid_image3_tool_bar_pane

0x2435,	// (0x0007e9af) bg_popup_trans_pane_g1

0xe66f,	// (0x0008abe9) bg_popup_trans_pane_g2

0x243d,	// (0x0007e9b7) bg_popup_trans_pane_g3

0x2445,	// (0x0007e9bf) bg_popup_trans_pane_g4

0x244d,	// (0x0007e9c7) bg_popup_trans_pane_g5

0x2455,	// (0x0007e9cf) bg_popup_trans_pane_g6

0x245d,	// (0x0007e9d7) bg_popup_trans_pane_g7

0x2465,	// (0x0007e9df) bg_popup_trans_pane_g8

0xe64f,	// (0x0008abc9) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x0008bedb) bg_popup_trans_pane_g

0x246d,	// (0x0007e9e7) cell_image3_tool_bar_pane_ParamLimits

0x246d,	// (0x0007e9e7) cell_image3_tool_bar_pane

0x1d12,	// (0x0007e28c) cell_image3_tool_bar_pane_g1

0x0498,	// (0x0007ca12) bg_popup_trans_pane_cp1

0x2483,	// (0x0007e9fd) popup_image3_note_pane_t1

0x2491,	// (0x0007ea0b) popup_image3_note_pane_t2

0x249f,	// (0x0007ea19) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x0008beee) popup_image3_note_pane_t

0x24af,	// (0x0007ea29) popup_image3_note_pane_t3_copy1

0xaec0,	// (0x0008743a) bg_myfav_hc_instruction_pane_ParamLimits

0xaec0,	// (0x0008743a) bg_myfav_hc_instruction_pane

0xaed8,	// (0x00087452) cell_myfav_contact_pane_ParamLimits

0xaed8,	// (0x00087452) cell_myfav_contact_pane

0xaef2,	// (0x0008746c) cell_myfav_contact_pane_cp1_ParamLimits

0xaef2,	// (0x0008746c) cell_myfav_contact_pane_cp1

0xaf0a,	// (0x00087484) cell_myfav_contact_pane_cp2_ParamLimits

0xaf0a,	// (0x00087484) cell_myfav_contact_pane_cp2

0xaf22,	// (0x0008749c) cell_myfav_contact_pane_cp3_ParamLimits

0xaf22,	// (0x0008749c) cell_myfav_contact_pane_cp3

0xaf39,	// (0x000874b3) cell_myfav_contact_pane_cp4_ParamLimits

0xaf39,	// (0x000874b3) cell_myfav_contact_pane_cp4

0xaf4f,	// (0x000874c9) cell_myfav_contact_pane_cp5_ParamLimits

0xaf4f,	// (0x000874c9) cell_myfav_contact_pane_cp5

0xaf63,	// (0x000874dd) cell_myfav_contact_pane_cp6_ParamLimits

0xaf63,	// (0x000874dd) cell_myfav_contact_pane_cp6

0xaf77,	// (0x000874f1) cell_myfav_contact_pane_cp7_ParamLimits

0xaf77,	// (0x000874f1) cell_myfav_contact_pane_cp7

0x24bd,	// (0x0007ea37) listscroll_gen_pane_cp05

0xaf8f,	// (0x00087509) main_myfav_hc_pane_g1_ParamLimits

0xaf8f,	// (0x00087509) main_myfav_hc_pane_g1

0xafa9,	// (0x00087523) main_myfav_hc_pane_g2_ParamLimits

0xafa9,	// (0x00087523) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0008bef5) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0008bef5) main_myfav_hc_pane_g

0xafdb,	// (0x00087555) main_myfav_hc_pane_t1_ParamLimits

0xafdb,	// (0x00087555) main_myfav_hc_pane_t1

0x24c6,	// (0x0007ea40) main_myfav_hc_pane_t2_ParamLimits

0x24c6,	// (0x0007ea40) main_myfav_hc_pane_t2

0x24d8,	// (0x0007ea52) main_myfav_hc_pane_t3_ParamLimits

0x24d8,	// (0x0007ea52) main_myfav_hc_pane_t3

0xaff2,	// (0x0008756c) main_myfav_hc_pane_t4_ParamLimits

0xaff2,	// (0x0008756c) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x0008befc) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x0008befc) main_myfav_hc_pane_t

0x1d12,	// (0x0007e28c) bg_myfav_hc_instruction_pane_g1

0x24ea,	// (0x0007ea64) cell_myfav_contact_pane_g1_ParamLimits

0x24ea,	// (0x0007ea64) cell_myfav_contact_pane_g1

0x24ea,	// (0x0007ea64) cell_myfav_contact_pane_g2_ParamLimits

0x24ea,	// (0x0007ea64) cell_myfav_contact_pane_g2

0x24f6,	// (0x0007ea70) cell_myfav_contact_pane_g3_ParamLimits

0x24f6,	// (0x0007ea70) cell_myfav_contact_pane_g3

0x1fd3,	// (0x0007e54d) cell_myfav_contact_pane_g4_ParamLimits

0x1fd3,	// (0x0007e54d) cell_myfav_contact_pane_g4

0x2503,	// (0x0007ea7d) cell_myfav_contact_pane_g5_ParamLimits

0x2503,	// (0x0007ea7d) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0008bf07) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0008bf07) cell_myfav_contact_pane_g

0xafc3,	// (0x0008753d) main_myfav_hc_pane_g3_ParamLimits

0xafc3,	// (0x0008753d) main_myfav_hc_pane_g3

0x5c8b,	// (0x00082205) popup_adpt_find_window

0xb01c,	// (0x00087596) afind_page_pane_ParamLimits

0xb01c,	// (0x00087596) afind_page_pane

0xb029,	// (0x000875a3) aid_size_cell_afind_ParamLimits

0xb029,	// (0x000875a3) aid_size_cell_afind

0xb043,	// (0x000875bd) bg_popup_sub_pane_cp09_ParamLimits

0xb043,	// (0x000875bd) bg_popup_sub_pane_cp09

0xb050,	// (0x000875ca) find_pane_cp01_ParamLimits

0xb050,	// (0x000875ca) find_pane_cp01

0x250f,	// (0x0007ea89) grid_afind_control_pane_ParamLimits

0x250f,	// (0x0007ea89) grid_afind_control_pane

0xb05d,	// (0x000875d7) grid_afind_pane_ParamLimits

0xb05d,	// (0x000875d7) grid_afind_pane

0xb079,	// (0x000875f3) cell_afind_pane_ParamLimits

0xb079,	// (0x000875f3) cell_afind_pane

0x1d12,	// (0x0007e28c) afind_page_pane_g1

0xb0c5,	// (0x0008763f) afind_page_pane_g2

0xb0ce,	// (0x00087648) afind_page_pane_g3

0x0002,

0xf998,	// (0x0008bf12) afind_page_pane_g

0xb0d7,	// (0x00087651) afind_page_pane_t1

0x2523,	// (0x0007ea9d) cell_afind_grid_control_pane_ParamLimits

0x2523,	// (0x0007ea9d) cell_afind_grid_control_pane

0x22bc,	// (0x0007e836) bg_button_pane_cp69_ParamLimits

0x22bc,	// (0x0007e836) bg_button_pane_cp69

0xb0f7,	// (0x00087671) cell_afind_pane_g1_ParamLimits

0xb0f7,	// (0x00087671) cell_afind_pane_g1

0xb104,	// (0x0008767e) cell_afind_pane_t1_ParamLimits

0xb104,	// (0x0008767e) cell_afind_pane_t1

0xe45e,	// (0x0008a9d8) bg_button_pane_cp72

0x2532,	// (0x0007eaac) cell_afind_grid_control_pane_g1

0x8769,	// (0x00084ce3) aid_image_placing_area_ParamLimits

0x8769,	// (0x00084ce3) aid_image_placing_area

0x4943,	// (0x00080ebd) field_vitu_entry_pane_g1_ParamLimits

0x4943,	// (0x00080ebd) field_vitu_entry_pane_g1

0x494f,	// (0x00080ec9) field_vitu_entry_pane_g2_ParamLimits

0x494f,	// (0x00080ec9) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0008bdc3) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0008bdc3) field_vitu_entry_pane_g

0xa26a,	// (0x000867e4) cell_vitu_itu_pane_g1_ParamLimits

0xa2ac,	// (0x00086826) cell_vitu_itu_pane_t3_ParamLimits

0xa2ac,	// (0x00086826) cell_vitu_itu_pane_t3

0x226c,	// (0x0007e7e6) mp4_progress_pane_t1_ParamLimits

0x2285,	// (0x0007e7ff) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x0008be58) mp4_progress_pane_t_ParamLimits

0x229e,	// (0x0007e818) mup_progress_pane_cp04_ParamLimits

0xb006,	// (0x00087580) main_myfav_hc_pane_t5_ParamLimits

0xb006,	// (0x00087580) main_myfav_hc_pane_t5

0x04be,	// (0x0007ca38) aid_zoom_text_primary

0x5c8b,	// (0x00082205) popup_adpt_find_window_ParamLimits

0xf0e1,	// (0x0008b65b) main_cam_set_pane

0xaa5b,	// (0x00086fd5) cam4_zoom_pane_ParamLimits

0xaa5b,	// (0x00086fd5) cam4_zoom_pane

0xb116,	// (0x00087690) main_cam_set_pane_g1_ParamLimits

0xb116,	// (0x00087690) main_cam_set_pane_g1

0xb124,	// (0x0008769e) main_cam_set_pane_g2_ParamLimits

0xb124,	// (0x0008769e) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x0008bf19) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x0008bf19) main_cam_set_pane_g

0xb130,	// (0x000876aa) main_cam_set_pane_t1_ParamLimits

0xb130,	// (0x000876aa) main_cam_set_pane_t1

0xb14c,	// (0x000876c6) main_cset_listscroll_pane_ParamLimits

0xb14c,	// (0x000876c6) main_cset_listscroll_pane

0xb17b,	// (0x000876f5) main_cset_slider_pane_ParamLimits

0xb17b,	// (0x000876f5) main_cset_slider_pane

0x2543,	// (0x0007eabd) main_cset_list_pane_ParamLimits

0x2543,	// (0x0007eabd) main_cset_list_pane

0x2553,	// (0x0007eacd) scroll_pane_cp028

0xb19c,	// (0x00087716) aid_area_touch_slider

0xb1b8,	// (0x00087732) cset_slider_pane

0xb1e2,	// (0x0008775c) main_cset_slider_pane_g1

0xb1f7,	// (0x00087771) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x0008bf1e) main_cset_slider_pane_g

0x258c,	// (0x0007eb06) main_cset_slider_pane_t1

0xb2b3,	// (0x0008782d) main_cset_slider_pane_t2

0xb2cd,	// (0x00087847) main_cset_slider_pane_t3

0xb2e7,	// (0x00087861) main_cset_slider_pane_t4

0xb301,	// (0x0008787b) main_cset_slider_pane_t5

0xb31d,	// (0x00087897) main_cset_slider_pane_t6

0xb332,	// (0x000878ac) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x0008bf43) main_cset_slider_pane_t

0xb436,	// (0x000879b0) cset_list_set_pane_ParamLimits

0xb436,	// (0x000879b0) cset_list_set_pane

0xb447,	// (0x000879c1) aid_position_infowindow_above

0xb44f,	// (0x000879c9) aid_position_infowindow_below

0x4785,	// (0x00080cff) cset_list_set_pane_g1_ParamLimits

0x4785,	// (0x00080cff) cset_list_set_pane_g1

0x2dc2,	// (0x0007f33c) cset_list_set_pane_g3_ParamLimits

0x2dc2,	// (0x0007f33c) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x0008bf62) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x0008bf62) cset_list_set_pane_g

0x2dd1,	// (0x0007f34b) cset_list_set_pane_t1_ParamLimits

0x2dd1,	// (0x0007f34b) cset_list_set_pane_t1

0xf0e1,	// (0x0008b65b) list_highlight_pane_cp021_ParamLimits

0xf0e1,	// (0x0008b65b) list_highlight_pane_cp021

0xedf1,	// (0x0008b36b) cset_slider_pane_g1

0xee03,	// (0x0008b37d) cset_slider_pane_g2

0xedfa,	// (0x0008b374) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x0008bf67) cset_slider_pane_g

0xb457,	// (0x000879d1) aid_area_touch_cam4_zoom

0xb45f,	// (0x000879d9) cam4_zoom_cont_pane

0xb467,	// (0x000879e1) cam4_zoom_pane_g1

0xb46f,	// (0x000879e9) cam4_zoom_pane_g2

0xb477,	// (0x000879f1) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x0008bf6e) cam4_zoom_pane_g

0xb47f,	// (0x000879f9) cam4_zoom_cont_pane_g1

0xb488,	// (0x00087a02) cam4_zoom_cont_pane_g2

0xb491,	// (0x00087a0b) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x0008bf75) cam4_zoom_cont_pane_g

0xa952,	// (0x00086ecc) call4_image_pane_ParamLimits

0xa952,	// (0x00086ecc) call4_image_pane

0x22c8,	// (0x0007e842) call4_windows_conf_pane_ParamLimits

0x230f,	// (0x0007e889) popup_call4_audio_in_window_ParamLimits

0x230f,	// (0x0007e889) popup_call4_audio_in_window

0x0498,	// (0x0007ca12) bg_popup_call2_act_pane_cp02

0x2387,	// (0x0007e901) call4_list_conf_pane

0x1d12,	// (0x0007e28c) call4_image_pane_g1

0x1d12,	// (0x0007e28c) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0008bc89) call4_image_pane_g

0x2647,	// (0x0007ebc1) list_single_graphic_popup_conf4_pane_ParamLimits

0x2647,	// (0x0007ebc1) list_single_graphic_popup_conf4_pane

0x0498,	// (0x0007ca12) list_highlight_pane_cp022

0x265c,	// (0x0007ebd6) list_single_graphic_popup_conf4_pane_g1

0xeaeb,	// (0x0008b065) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x0008bf7c) list_single_graphic_popup_conf4_pane_g

0x2664,	// (0x0007ebde) list_single_graphic_popup_conf4_pane_t1

0x6c5c,	// (0x000831d6) popup_vtel_slider_window_ParamLimits

0x6c5c,	// (0x000831d6) popup_vtel_slider_window

0x22aa,	// (0x0007e824) dialer2_ne_pane_t2_ParamLimits

0x22aa,	// (0x0007e824) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x0008be5d) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x0008be5d) dialer2_ne_pane_t

0xf0e1,	// (0x0008b65b) bg_popup_sub_pane_cp010_ParamLimits

0xf0e1,	// (0x0008b65b) bg_popup_sub_pane_cp010

0xb49a,	// (0x00087a14) popup_vtel_slider_window_g1_ParamLimits

0xb49a,	// (0x00087a14) popup_vtel_slider_window_g1

0xb4a6,	// (0x00087a20) popup_vtel_slider_window_g2_ParamLimits

0xb4a6,	// (0x00087a20) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x0008bf81) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x0008bf81) popup_vtel_slider_window_g

0xb4ee,	// (0x00087a68) vtel_slider_pane_ParamLimits

0xb4ee,	// (0x00087a68) vtel_slider_pane

0xb4fd,	// (0x00087a77) vtel_slider_pane_g1_ParamLimits

0xb4fd,	// (0x00087a77) vtel_slider_pane_g1

0xb50a,	// (0x00087a84) vtel_slider_pane_g2_ParamLimits

0xb50a,	// (0x00087a84) vtel_slider_pane_g2

0xb517,	// (0x00087a91) vtel_slider_pane_g3_ParamLimits

0xb517,	// (0x00087a91) vtel_slider_pane_g3

0xb4fd,	// (0x00087a77) vtel_slider_pane_g4_ParamLimits

0xb4fd,	// (0x00087a77) vtel_slider_pane_g4

0xb524,	// (0x00087a9e) vtel_slider_pane_g5_ParamLimits

0xb524,	// (0x00087a9e) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x0008bf8a) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x0008bf8a) vtel_slider_pane_g

0x0498,	// (0x0007ca12) main_gallery2_pane

0xacb4,	// (0x0008722e) aid_size_row_itut2_dropdow_list_ParamLimits

0xacb4,	// (0x0008722e) aid_size_row_itut2_dropdow_list

0xad22,	// (0x0008729c) grid_vitu2_function_top_pane_ParamLimits

0xad22,	// (0x0008729c) grid_vitu2_function_top_pane

0xad74,	// (0x000872ee) popup_vitu2_dropdown_list_window_ParamLimits

0xad74,	// (0x000872ee) popup_vitu2_dropdown_list_window

0xad94,	// (0x0008730e) popup_vitu2_match_list_window

0xb531,	// (0x00087aab) cell_vitu2_function_top_pane_ParamLimits

0xb531,	// (0x00087aab) cell_vitu2_function_top_pane

0xb551,	// (0x00087acb) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb551,	// (0x00087acb) cell_vitu2_function_top_pane_cp01

0xb56f,	// (0x00087ae9) cell_vitu2_function_top_wide_pane_ParamLimits

0xb56f,	// (0x00087ae9) cell_vitu2_function_top_wide_pane

0xabe0,	// (0x0008715a) bg_button_pane_cp012

0xb58d,	// (0x00087b07) cell_vitu2_function_top_pane_g1

0xb59c,	// (0x00087b16) bg_button_pane_cp013_ParamLimits

0xb59c,	// (0x00087b16) bg_button_pane_cp013

0xb5b8,	// (0x00087b32) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb5b8,	// (0x00087b32) cell_vitu2_function_top_wide_pane_g1

0xb5d0,	// (0x00087b4a) bg_popup_sub_pane_cp20

0xb5de,	// (0x00087b58) list_vitu2_match_list_pane

0x2435,	// (0x0007e9af) bg_popup_sub_pane_cp20_g1

0x243d,	// (0x0007e9b7) bg_popup_sub_pane_cp20_g2

0xe66f,	// (0x0008abe9) bg_popup_sub_pane_cp20_g3

0x2445,	// (0x0007e9bf) bg_popup_sub_pane_cp20_g4

0xe64f,	// (0x0008abc9) bg_popup_sub_pane_cp20_g5

0x2680,	// (0x0007ebfa) bg_popup_sub_pane_cp20_g6

0x2455,	// (0x0007e9cf) bg_popup_sub_pane_cp20_g7

0x245d,	// (0x0007e9d7) bg_popup_sub_pane_cp20_g8

0x2465,	// (0x0007e9df) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0008bf95) bg_popup_sub_pane_cp20_g

0xb5f6,	// (0x00087b70) list_vitu2_match_list_item_pane_ParamLimits

0xb5f6,	// (0x00087b70) list_vitu2_match_list_item_pane

0xb608,	// (0x00087b82) list_vitu2_match_list_item_pane_t1

0x60c5,	// (0x0008263f) bg_popup_sub_pane_cp21

0xb642,	// (0x00087bbc) grid_vitu2_dropdown_list_pane

0xb64a,	// (0x00087bc4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb64a,	// (0x00087bc4) cell_vitu2_dropdown_list_char_pane

0xb66f,	// (0x00087be9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb66f,	// (0x00087be9) cell_vitu2_dropdown_list_ctrl_pane

0x26b2,	// (0x0007ec2c) cell_vitu2_dropdown_list_char_pane_g1

0x26a9,	// (0x0007ec23) cell_vitu2_dropdown_list_char_pane_g2

0x26a0,	// (0x0007ec1a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0008bfb2) cell_vitu2_dropdown_list_char_pane_g

0xb69d,	// (0x00087c17) cell_vitu2_dropdown_list_char_pane_t1

0xb6ab,	// (0x00087c25) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb6ab,	// (0x00087c25) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb6bb,	// (0x00087c35) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb6bb,	// (0x00087c35) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb6cc,	// (0x00087c46) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb6cc,	// (0x00087c46) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb6dc,	// (0x00087c56) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb6dc,	// (0x00087c56) cell_vitu2_dropdown_list_ctrl_pane_g4

0xaaf1,	// (0x0008706b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xaaf1,	// (0x0008706b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x0008bfb9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x0008bfb9) cell_vitu2_dropdown_list_ctrl_pane_g

0xb6f5,	// (0x00087c6f) aid_size_cell_gallery2_ParamLimits

0xb6f5,	// (0x00087c6f) aid_size_cell_gallery2

0xb703,	// (0x00087c7d) grid_gallery2_pane_ParamLimits

0xb703,	// (0x00087c7d) grid_gallery2_pane

0xb712,	// (0x00087c8c) scroll_pane_cp029_ParamLimits

0xb712,	// (0x00087c8c) scroll_pane_cp029

0xb71e,	// (0x00087c98) cell_gallery2_pane_ParamLimits

0xb71e,	// (0x00087c98) cell_gallery2_pane

0x26bb,	// (0x0007ec35) cell_gallery2_pane_g2

0xb748,	// (0x00087cc2) cell_gallery2_pane_g3

0x26c5,	// (0x0007ec3f) cell_gallery2_pane_g4

0x26cd,	// (0x0007ec47) cell_gallery2_pane_g5

0xecb9,	// (0x0008b233) grid_highlight_pane_cp10

0xad94,	// (0x0008730e) popup_vitu2_match_list_window_ParamLimits

0xada8,	// (0x00087322) popup_vitu2_query_window_ParamLimits

0xada8,	// (0x00087322) popup_vitu2_query_window

0x60c5,	// (0x0008263f) bg_vitu2_candi_button_pane

0x26b2,	// (0x0007ec2c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x26a9,	// (0x0007ec23) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x26a0,	// (0x0007ec1a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb750,	// (0x00087cca) bg_button_pane_cp015

0xb75a,	// (0x00087cd4) bg_button_pane_cp016

0xb764,	// (0x00087cde) bg_button_pane_cp017

0xf0e1,	// (0x0008b65b) bg_popup_sub_pane_cp22

0x26d5,	// (0x0007ec4f) popup_vitu2_query_window_g1

0xb78c,	// (0x00087d06) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0008bfc4) popup_vitu2_query_window_g

0xb79a,	// (0x00087d14) popup_vitu2_query_window_t1_ParamLimits

0xb79a,	// (0x00087d14) popup_vitu2_query_window_t1

0xb7c2,	// (0x00087d3c) popup_vitu2_query_window_t2_ParamLimits

0xb7c2,	// (0x00087d3c) popup_vitu2_query_window_t2

0xb7d4,	// (0x00087d4e) popup_vitu2_query_window_t3_ParamLimits

0xb7d4,	// (0x00087d4e) popup_vitu2_query_window_t3

0xb7fc,	// (0x00087d76) popup_vitu2_query_window_t4_ParamLimits

0xb7fc,	// (0x00087d76) popup_vitu2_query_window_t4

0xb812,	// (0x00087d8c) popup_vitu2_query_window_t5_ParamLimits

0xb812,	// (0x00087d8c) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x0008bfc9) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x0008bfc9) popup_vitu2_query_window_t

0x253b,	// (0x0007eab5) main_cset_text_pane

0xb19c,	// (0x00087716) aid_area_touch_slider_ParamLimits

0xb1b8,	// (0x00087732) cset_slider_pane_ParamLimits

0xb1e2,	// (0x0008775c) main_cset_slider_pane_g1_ParamLimits

0xb1f7,	// (0x00087771) main_cset_slider_pane_g2_ParamLimits

0x255c,	// (0x0007ead6) main_cset_slider_pane_g3_ParamLimits

0x255c,	// (0x0007ead6) main_cset_slider_pane_g3

0xb20c,	// (0x00087786) main_cset_slider_pane_g4_ParamLimits

0xb20c,	// (0x00087786) main_cset_slider_pane_g4

0xb21b,	// (0x00087795) main_cset_slider_pane_g5_ParamLimits

0xb21b,	// (0x00087795) main_cset_slider_pane_g5

0xb227,	// (0x000877a1) main_cset_slider_pane_g6_ParamLimits

0xb227,	// (0x000877a1) main_cset_slider_pane_g6

0xf9a4,	// (0x0008bf1e) main_cset_slider_pane_g_ParamLimits

0x258c,	// (0x0007eb06) main_cset_slider_pane_t1_ParamLimits

0xb2b3,	// (0x0008782d) main_cset_slider_pane_t2_ParamLimits

0xb2cd,	// (0x00087847) main_cset_slider_pane_t3_ParamLimits

0xb2e7,	// (0x00087861) main_cset_slider_pane_t4_ParamLimits

0xb301,	// (0x0008787b) main_cset_slider_pane_t5_ParamLimits

0xb31d,	// (0x00087897) main_cset_slider_pane_t6_ParamLimits

0xb332,	// (0x000878ac) main_cset_slider_pane_t7_ParamLimits

0xb35c,	// (0x000878d6) main_cset_slider_pane_t8_ParamLimits

0xb35c,	// (0x000878d6) main_cset_slider_pane_t8

0xb384,	// (0x000878fe) main_cset_slider_pane_t9_ParamLimits

0xb384,	// (0x000878fe) main_cset_slider_pane_t9

0xb3ac,	// (0x00087926) main_cset_slider_pane_t10_ParamLimits

0xb3ac,	// (0x00087926) main_cset_slider_pane_t10

0xb3d4,	// (0x0008794e) main_cset_slider_pane_t11_ParamLimits

0xb3d4,	// (0x0008794e) main_cset_slider_pane_t11

0xb3fc,	// (0x00087976) main_cset_slider_pane_t12_ParamLimits

0xb3fc,	// (0x00087976) main_cset_slider_pane_t12

0xb419,	// (0x00087993) main_cset_slider_pane_t13_ParamLimits

0xb419,	// (0x00087993) main_cset_slider_pane_t13

0xf9c9,	// (0x0008bf43) main_cset_slider_pane_t_ParamLimits

0x0498,	// (0x0007ca12) bg_popup_sub_pane_cp011

0x26e1,	// (0x0007ec5b) main_cset_text_pane_g1

0x26e9,	// (0x0007ec63) main_cset_text_pane_t1

0x26f7,	// (0x0007ec71) main_cset_text_pane_t2

0x2705,	// (0x0007ec7f) main_cset_text_pane_t3

0x2713,	// (0x0007ec8d) main_cset_text_pane_t4

0x2721,	// (0x0007ec9b) main_cset_text_pane_t5

0x272f,	// (0x0007eca9) main_cset_text_pane_t6

0x273d,	// (0x0007ecb7) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0008bfd4) main_cset_text_pane_t

0x0498,	// (0x0007ca12) main_cam4_burst_pane

0x0498,	// (0x0007ca12) main_cam5_pane

0xb0e5,	// (0x0008765f) bg_button_pane_cp019

0xb0ee,	// (0x00087668) bg_button_pane_cp020

0x2568,	// (0x0007eae2) main_cset_slider_pane_g7_ParamLimits

0x2568,	// (0x0007eae2) main_cset_slider_pane_g7

0x2574,	// (0x0007eaee) main_cset_slider_pane_g8_ParamLimits

0x2574,	// (0x0007eaee) main_cset_slider_pane_g8

0xb23b,	// (0x000877b5) main_cset_slider_pane_g9_ParamLimits

0xb23b,	// (0x000877b5) main_cset_slider_pane_g9

0xb247,	// (0x000877c1) main_cset_slider_pane_g10_ParamLimits

0xb247,	// (0x000877c1) main_cset_slider_pane_g10

0xb253,	// (0x000877cd) main_cset_slider_pane_g11_ParamLimits

0xb253,	// (0x000877cd) main_cset_slider_pane_g11

0xb25f,	// (0x000877d9) main_cset_slider_pane_g12_ParamLimits

0xb25f,	// (0x000877d9) main_cset_slider_pane_g12

0xb26b,	// (0x000877e5) main_cset_slider_pane_g13_ParamLimits

0xb26b,	// (0x000877e5) main_cset_slider_pane_g13

0xb277,	// (0x000877f1) main_cset_slider_pane_g14_ParamLimits

0xb277,	// (0x000877f1) main_cset_slider_pane_g14

0xb283,	// (0x000877fd) main_cset_slider_pane_g15_ParamLimits

0xb283,	// (0x000877fd) main_cset_slider_pane_g15

0x25ba,	// (0x0007eb34) main_cset_slider_pane_t14_ParamLimits

0x25ba,	// (0x0007eb34) main_cset_slider_pane_t14

0x25f3,	// (0x0007eb6d) main_cset_slider_pane_t15_ParamLimits

0x25f3,	// (0x0007eb6d) main_cset_slider_pane_t15

0xb828,	// (0x00087da2) aid_cam4_burst_size_cell_ParamLimits

0xb828,	// (0x00087da2) aid_cam4_burst_size_cell

0xb844,	// (0x00087dbe) grid_cam4_burst_pane_ParamLimits

0xb844,	// (0x00087dbe) grid_cam4_burst_pane

0xb876,	// (0x00087df0) linegrid_cam4_burst_pane_ParamLimits

0xb876,	// (0x00087df0) linegrid_cam4_burst_pane

0xb896,	// (0x00087e10) scroll_pane_cp30_ParamLimits

0xb896,	// (0x00087e10) scroll_pane_cp30

0xb8a2,	// (0x00087e1c) cell_cam4_burst_pane_ParamLimits

0xb8a2,	// (0x00087e1c) cell_cam4_burst_pane

0x2757,	// (0x0007ecd1) linegrid_cam4_burst_pane_g1_ParamLimits

0x2757,	// (0x0007ecd1) linegrid_cam4_burst_pane_g1

0xb8e2,	// (0x00087e5c) linegrid_cam4_burst_pane_g2_ParamLimits

0xb8e2,	// (0x00087e5c) linegrid_cam4_burst_pane_g2

0x2764,	// (0x0007ecde) linegrid_cam4_burst_pane_g3_ParamLimits

0x2764,	// (0x0007ecde) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0008bfe3) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0008bfe3) linegrid_cam4_burst_pane_g

0xb8f3,	// (0x00087e6d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb8f3,	// (0x00087e6d) linegrid_cam4_burst_pane_g3_copy1

0x2771,	// (0x0007eceb) linegrid_cam4_burst_pane_g4_ParamLimits

0x2771,	// (0x0007eceb) linegrid_cam4_burst_pane_g4

0xb90d,	// (0x00087e87) linegrid_cam4_burst_pane_g5_ParamLimits

0xb90d,	// (0x00087e87) linegrid_cam4_burst_pane_g5

0xb91e,	// (0x00087e98) linegrid_cam4_burst_pane_g6_ParamLimits

0xb91e,	// (0x00087e98) linegrid_cam4_burst_pane_g6

0x277e,	// (0x0007ecf8) linegrid_cam4_burst_pane_g7_ParamLimits

0x277e,	// (0x0007ecf8) linegrid_cam4_burst_pane_g7

0xb935,	// (0x00087eaf) cell_cam4_burst_pane_g1

0x2797,	// (0x0007ed11) main_cam5_pane_t1_ParamLimits

0x2797,	// (0x0007ed11) main_cam5_pane_t1

0x27a9,	// (0x0007ed23) main_cam5_pane_t2_ParamLimits

0x27a9,	// (0x0007ed23) main_cam5_pane_t2

0x27bb,	// (0x0007ed35) main_cam5_pane_t3_ParamLimits

0x27bb,	// (0x0007ed35) main_cam5_pane_t3

0x27cd,	// (0x0007ed47) main_cam5_pane_t4_ParamLimits

0x27cd,	// (0x0007ed47) main_cam5_pane_t4

0x27e5,	// (0x0007ed5f) main_cam5_pane_t5_ParamLimits

0x27e5,	// (0x0007ed5f) main_cam5_pane_t5

0x27f9,	// (0x0007ed73) main_cam5_pane_t6_ParamLimits

0x27f9,	// (0x0007ed73) main_cam5_pane_t6

0x280d,	// (0x0007ed87) main_cam5_pane_t7_ParamLimits

0x280d,	// (0x0007ed87) main_cam5_pane_t7

0x281f,	// (0x0007ed99) main_cam5_pane_t8_ParamLimits

0x281f,	// (0x0007ed99) main_cam5_pane_t8

0x283d,	// (0x0007edb7) main_cam5_pane_t9_ParamLimits

0x283d,	// (0x0007edb7) main_cam5_pane_t9

0x284f,	// (0x0007edc9) main_cam5_pane_t10_ParamLimits

0x284f,	// (0x0007edc9) main_cam5_pane_t10

0x2861,	// (0x0007eddb) main_cam5_pane_t11_ParamLimits

0x2861,	// (0x0007eddb) main_cam5_pane_t11

0x2875,	// (0x0007edef) main_cam5_pane_t12_ParamLimits

0x2875,	// (0x0007edef) main_cam5_pane_t12

0x288c,	// (0x0007ee06) main_cam5_pane_t13_ParamLimits

0x288c,	// (0x0007ee06) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x0008bfef) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x0008bfef) main_cam5_pane_t

0x5d39,	// (0x000822b3) popup_scut_keymap_window_ParamLimits

0x5d39,	// (0x000822b3) popup_scut_keymap_window

0xb948,	// (0x00087ec2) aid_size_cell_brow_shortcut

0xecb9,	// (0x0008b233) bg_popup_window_pane_cp010

0xb954,	// (0x00087ece) grid_scut_pane

0xb960,	// (0x00087eda) cell_scut_pane_ParamLimits

0xb960,	// (0x00087eda) cell_scut_pane

0xb97b,	// (0x00087ef5) cell_scut_pane_g1

0x28af,	// (0x0007ee29) cell_scut_pane_t1

0x28be,	// (0x0007ee38) cell_scut_pane_t2

0xb984,	// (0x00087efe) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x0008c00a) cell_scut_pane_t

0x98f4,	// (0x00085e6e) main_mup3_pane_g8_ParamLimits

0x98f4,	// (0x00085e6e) main_mup3_pane_g8

0xacc2,	// (0x0008723c) area_vitu2_query_pane_ParamLimits

0xacc2,	// (0x0008723c) area_vitu2_query_pane

0xb76e,	// (0x00087ce8) input_focus_pane_cp08

0x28cd,	// (0x0007ee47) area_vitu2_query_pane_g1

0xb992,	// (0x00087f0c) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x0008c011) area_vitu2_query_pane_g

0xb9a3,	// (0x00087f1d) area_vitu2_query_pane_t1_ParamLimits

0xb9a3,	// (0x00087f1d) area_vitu2_query_pane_t1

0xb9b7,	// (0x00087f31) area_vitu2_query_pane_t2_ParamLimits

0xb9b7,	// (0x00087f31) area_vitu2_query_pane_t2

0xb9cb,	// (0x00087f45) area_vitu2_query_pane_t3_ParamLimits

0xb9cb,	// (0x00087f45) area_vitu2_query_pane_t3

0x28d9,	// (0x0007ee53) area_vitu2_query_pane_t4_ParamLimits

0x28d9,	// (0x0007ee53) area_vitu2_query_pane_t4

0x2901,	// (0x0007ee7b) area_vitu2_query_pane_t5_ParamLimits

0x2901,	// (0x0007ee7b) area_vitu2_query_pane_t5

0x2929,	// (0x0007eea3) area_vitu2_query_pane_t6_ParamLimits

0x2929,	// (0x0007eea3) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0008c016) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0008c016) area_vitu2_query_pane_t

0xb9f3,	// (0x00087f6d) bg_button_pane_cp018

0xba01,	// (0x00087f7b) bg_button_pane_cp021

0xba0d,	// (0x00087f87) bg_button_pane_cp022

0xba1e,	// (0x00087f98) input_focus_pane_cp09

0x7d4e,	// (0x000842c8) aid_size_touch_mv_arrow_left

0x7d79,	// (0x000842f3) aid_size_touch_mv_arrow_right

0xb29b,	// (0x00087815) main_cset_slider_pane_g16_ParamLimits

0xb29b,	// (0x00087815) main_cset_slider_pane_g16

0xb2a7,	// (0x00087821) main_cset_slider_pane_g17_ParamLimits

0xb2a7,	// (0x00087821) main_cset_slider_pane_g17

0xb935,	// (0x00087eaf) cell_cam4_burst_pane_g1_ParamLimits

0x0498,	// (0x0007ca12) compa_mode_pane

0xb4b2,	// (0x00087a2c) popup_vtel_slider_window_g3_ParamLimits

0xb4b2,	// (0x00087a2c) popup_vtel_slider_window_g3

0xb4c6,	// (0x00087a40) popup_vtel_slider_window_g4_ParamLimits

0xb4c6,	// (0x00087a40) popup_vtel_slider_window_g4

0xb4da,	// (0x00087a54) popup_vtel_slider_window_t1_ParamLimits

0xb4da,	// (0x00087a54) popup_vtel_slider_window_t1

0x0498,	// (0x0007ca12) main_cl_pane

0x1876,	// (0x0007ddf0) popup_imed_adjust2_window_ParamLimits

0x184a,	// (0x0007ddc4) bg_tb_trans_pane_cp05_ParamLimits

0x2225,	// (0x0007e79f) popup_imed_adjust2_window_g1_ParamLimits

0x2234,	// (0x0007e7ae) popup_imed_adjust2_window_g2_ParamLimits

0x2234,	// (0x0007e7ae) popup_imed_adjust2_window_g2

0x2240,	// (0x0007e7ba) popup_imed_adjust2_window_g3_ParamLimits

0x2240,	// (0x0007e7ba) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0008bd87) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0008bd87) popup_imed_adjust2_window_g

0x224c,	// (0x0007e7c6) popup_imed_adjust2_window_t1_ParamLimits

0x48b7,	// (0x00080e31) slider_imed_adjust_pane_ParamLimits

0x48cb,	// (0x00080e45) slider_imed_adjust_pane_g1_ParamLimits

0x48db,	// (0x00080e55) slider_imed_adjust_pane_g2_ParamLimits

0x48eb,	// (0x00080e65) slider_imed_adjust_pane_g3_ParamLimits

0x48fc,	// (0x00080e76) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x0008bd8e) slider_imed_adjust_pane_g_ParamLimits

0xaa10,	// (0x00086f8a) aid_touch_area_cam4_ParamLimits

0xaa10,	// (0x00086f8a) aid_touch_area_cam4

0xaa20,	// (0x00086f9a) battery_pane_cp01

0xaa9b,	// (0x00087015) main_camera4_pane_g6_ParamLimits

0xaa9b,	// (0x00087015) main_camera4_pane_g6

0xaab9,	// (0x00087033) main_camera4_pane_t2_ParamLimits

0xaab9,	// (0x00087033) main_camera4_pane_t2

0x0001,

0xf917,	// (0x0008be91) main_camera4_pane_t_ParamLimits

0xf917,	// (0x0008be91) main_camera4_pane_t

0xab4e,	// (0x000870c8) aid_touch_area_vid4_ParamLimits

0xab4e,	// (0x000870c8) aid_touch_area_vid4

0xab8e,	// (0x00087108) main_video4_pane_g5_ParamLimits

0xab8e,	// (0x00087108) main_video4_pane_g5

0xabb2,	// (0x0008712c) vid4_progress_pane_ParamLimits

0xabb2,	// (0x0008712c) vid4_progress_pane

0x2580,	// (0x0007eafa) main_cset_slider_pane_g18_ParamLimits

0x2580,	// (0x0007eafa) main_cset_slider_pane_g18

0x278b,	// (0x0007ed05) cell_cam4_burst_pane_g2_ParamLimits

0x278b,	// (0x0007ed05) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x0008bfea) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x0008bfea) cell_cam4_burst_pane_g

0xba2f,	// (0x00087fa9) bg_cl_pane_ParamLimits

0xba2f,	// (0x00087fa9) bg_cl_pane

0xba3b,	// (0x00087fb5) cl_header_pane_ParamLimits

0xba3b,	// (0x00087fb5) cl_header_pane

0xba47,	// (0x00087fc1) cl_listscroll_pane_ParamLimits

0xba47,	// (0x00087fc1) cl_listscroll_pane

0x2975,	// (0x0007eeef) bg_cl_pane_g1

0x297d,	// (0x0007eef7) bg_cl_pane_g2

0x2985,	// (0x0007eeff) bg_cl_pane_g3

0x298d,	// (0x0007ef07) bg_cl_pane_g4

0x2995,	// (0x0007ef0f) bg_cl_pane_g5

0x299d,	// (0x0007ef17) bg_cl_pane_g6

0x29a5,	// (0x0007ef1f) bg_cl_pane_g7

0x29ad,	// (0x0007ef27) bg_cl_pane_g8

0x29b5,	// (0x0007ef2f) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x0008c025) bg_cl_pane_g

0xba53,	// (0x00087fcd) aid_height_cl_leading_ParamLimits

0xba53,	// (0x00087fcd) aid_height_cl_leading

0xba5f,	// (0x00087fd9) aid_height_cl_text_ParamLimits

0xba5f,	// (0x00087fd9) aid_height_cl_text

0x23b9,	// (0x0007e933) bg_cl_header_pane_ParamLimits

0x23b9,	// (0x0007e933) bg_cl_header_pane

0xba77,	// (0x00087ff1) cl_header_pane_g1_ParamLimits

0xba77,	// (0x00087ff1) cl_header_pane_g1

0xba84,	// (0x00087ffe) cl_header_pane_t1_ParamLimits

0xba84,	// (0x00087ffe) cl_header_pane_t1

0x29bd,	// (0x0007ef37) cl_list_pane

0x2553,	// (0x0007eacd) hc_scroll_pane_cp01

0xe64f,	// (0x0008abc9) bg_cl_header_pane_g1

0x2435,	// (0x0007e9af) bg_cl_header_pane_g2

0xe66f,	// (0x0008abe9) bg_cl_header_pane_g3

0x2445,	// (0x0007e9bf) bg_cl_header_pane_g4

0x243d,	// (0x0007e9b7) bg_cl_header_pane_g5

0x2680,	// (0x0007ebfa) bg_cl_header_pane_g6

0x245d,	// (0x0007e9d7) bg_cl_header_pane_g7

0x2465,	// (0x0007e9df) bg_cl_header_pane_g8

0x2455,	// (0x0007e9cf) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x0008c038) bg_cl_header_pane_g

0xba96,	// (0x00088010) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xba96,	// (0x00088010) hc_cl_list_double_graphic_heading_pane

0x47cd,	// (0x00080d47) hc_cl_list_single_graphic_pane_ParamLimits

0x47cd,	// (0x00080d47) hc_cl_list_single_graphic_pane

0xbaa6,	// (0x00088020) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbaa6,	// (0x00088020) hc_cl_list_single_graphic_pane_g1

0xbab2,	// (0x0008802c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbab2,	// (0x0008802c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x0008c04b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x0008c04b) hc_cl_list_single_graphic_pane_g

0xbac6,	// (0x00088040) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbac6,	// (0x00088040) hc_cl_list_single_graphic_pane_t1

0xbaa6,	// (0x00088020) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbaa6,	// (0x00088020) hc_cl_list_double_graphic_heading_pane_g1

0xbadb,	// (0x00088055) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbadb,	// (0x00088055) hc_cl_list_double_graphic_heading_pane_g2

0xbaef,	// (0x00088069) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbaef,	// (0x00088069) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x0008c050) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x0008c050) hc_cl_list_double_graphic_heading_pane_g

0xbb03,	// (0x0008807d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbb03,	// (0x0008807d) hc_cl_list_double_graphic_heading_pane_t1

0xbb18,	// (0x00088092) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbb18,	// (0x00088092) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x0008c057) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x0008c057) hc_cl_list_double_graphic_heading_pane_t

0xbb3f,	// (0x000880b9) vid4_progress_pane_g1

0xbb4b,	// (0x000880c5) vid4_progress_pane_g2

0xbb57,	// (0x000880d1) vid4_progress_pane_g3

0xbb66,	// (0x000880e0) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x0008c05c) vid4_progress_pane_g

0xbb84,	// (0x000880fe) vid4_progress_pane_t1

0xbb9a,	// (0x00088114) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x0008c067) vid4_progress_pane_t

0xbbc5,	// (0x0008813f) wait_bar_pane_cp07

0x1aff,	// (0x0007e079) blid_firmament_pane_ParamLimits

0x1b42,	// (0x0007e0bc) popup_blid_sat_info2_window_g1

0x1b66,	// (0x0007e0e0) popup_blid_sat_info2_window_t3

0x1b74,	// (0x0007e0ee) popup_blid_sat_info2_window_t4

0x1b82,	// (0x0007e0fc) popup_blid_sat_info2_window_t5

0x1b90,	// (0x0007e10a) popup_blid_sat_info2_window_t6

0x1ba0,	// (0x0007e11a) popup_blid_sat_info2_window_t7

0x1bae,	// (0x0007e128) popup_blid_sat_info2_window_t8

0x1bbc,	// (0x0007e136) popup_blid_sat_info2_window_t9

0x1bca,	// (0x0007e144) popup_blid_sat_info2_window_t10

0x1c92,	// (0x0007e20c) aid_firma_cardinal_ParamLimits

0x1ca6,	// (0x0007e220) blid_firmament_pane_t1_ParamLimits

0x1cbd,	// (0x0007e237) blid_firmament_pane_t2_ParamLimits

0x1cd4,	// (0x0007e24e) blid_firmament_pane_t3_ParamLimits

0x1ceb,	// (0x0007e265) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x0008bc80) blid_firmament_pane_t_ParamLimits

0x1d02,	// (0x0007e27c) blid_sat_info_pane_ParamLimits

0xf0e1,	// (0x0008b65b) main_cam_set_pane_ParamLimits

0xa088,	// (0x00086602) aid_size_cell_colour_35_ParamLimits

0xa0a2,	// (0x0008661c) aid_size_cell_colour_112_ParamLimits

0xa0b9,	// (0x00086633) aid_size_cell_effect_ParamLimits

0xf0e1,	// (0x0008b65b) bg_tb_trans_pane_cp02_ParamLimits

0xf0ef,	// (0x0008b669) heading_imed_pane_ParamLimits

0xa0d3,	// (0x0008664d) listscroll_imed_pane_ParamLimits

0x0e78,	// (0x0007d3f2) popup_call2_audio_first_window_g5_ParamLimits

0x0e78,	// (0x0007d3f2) popup_call2_audio_first_window_g5

0xa7bb,	// (0x00086d35) aid_size_touch_image3_arrow_left_ParamLimits

0xa7bb,	// (0x00086d35) aid_size_touch_image3_arrow_left

0xa7d1,	// (0x00086d4b) aid_size_touch_image3_arrow_right_ParamLimits

0xa7d1,	// (0x00086d4b) aid_size_touch_image3_arrow_right

0xbbb0,	// (0x0008812a) vid4_progress_pane_t3

0xa373,	// (0x000868ed) main_hwr_training_symbol_option_pane_ParamLimits

0xa373,	// (0x000868ed) main_hwr_training_symbol_option_pane

0x4b67,	// (0x000810e1) popup_hwr_training_preview_window_ParamLimits

0x4b67,	// (0x000810e1) popup_hwr_training_preview_window

0xa3d4,	// (0x0008694e) hwr_training_navi_pane_g5_ParamLimits

0xa3d4,	// (0x0008694e) hwr_training_navi_pane_g5

0x2423,	// (0x0007e99d) popup_char_count_window

0xb5d0,	// (0x00087b4a) bg_popup_sub_pane_cp20_ParamLimits

0xb5de,	// (0x00087b58) list_vitu2_match_list_pane_ParamLimits

0xb5ea,	// (0x00087b64) vitu2_page_scroll_pane_ParamLimits

0xb5ea,	// (0x00087b64) vitu2_page_scroll_pane

0x2a18,	// (0x0007ef92) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2a18,	// (0x0007ef92) list_single_hwr_training_symbol_option_pane

0x2a2b,	// (0x0007efa5) list_single_hwr_training_symbol_option_pane_g1

0x2a33,	// (0x0007efad) list_single_hwr_training_symbol_option_pane_t1

0x2a41,	// (0x0007efbb) bg_button_pane_cp023

0x2a4a,	// (0x0007efc4) bg_button_pane_cp024

0xbbd7,	// (0x00088151) vitu2_page_scroll_pane_g1

0xbbdf,	// (0x00088159) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x0008c06e) vitu2_page_scroll_pane_g

0xbbe9,	// (0x00088163) vitu2_page_scroll_pane_t1

0x1a5f,	// (0x0007dfd9) popup_char_count_window_g1

0x2a7d,	// (0x0007eff7) popup_char_count_window_g2

0x2a86,	// (0x0007f000) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x0008c073) popup_char_count_window_g

0x2a8f,	// (0x0007f009) popup_char_count_window_t1

0x0498,	// (0x0007ca12) main_vded2_pane

0x2211,	// (0x0007e78b) aid_size_cell_imed_line

0x221b,	// (0x0007e795) grid_imed_line_width_pane

0xac16,	// (0x00087190) vid4_indicators_pane_g4

0x2a9d,	// (0x0007f017) cell_imed_line_width_pane_ParamLimits

0x2a9d,	// (0x0007f017) cell_imed_line_width_pane

0x2ab3,	// (0x0007f02d) cell_imed_line_width_pane_g1

0x2abc,	// (0x0007f036) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x0008c07a) cell_imed_line_width_pane_g

0xbbf8,	// (0x00088172) main_vded2_pane_g1_ParamLimits

0xbbf8,	// (0x00088172) main_vded2_pane_g1

0xbc07,	// (0x00088181) main_vded2_pane_g2_ParamLimits

0xbc07,	// (0x00088181) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x0008c07f) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x0008c07f) main_vded2_pane_g

0xbc15,	// (0x0008818f) vded2_slider_pane_ParamLimits

0xbc15,	// (0x0008818f) vded2_slider_pane

0xbc22,	// (0x0008819c) aid_size_touch_vded2_end

0xbc2c,	// (0x000881a6) aid_size_touch_vded2_playhead

0x2ac4,	// (0x0007f03e) aid_size_touch_vded2_start

0x2acc,	// (0x0007f046) vded2_slider_bg_pane

0x2ad5,	// (0x0007f04f) vded2_slider_pane_g1

0x2ade,	// (0x0007f058) vded2_slider_pane_g2

0xbc34,	// (0x000881ae) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0008c084) vded2_slider_pane_g

0x2ae6,	// (0x0007f060) vded2_slider_bg_pane_g1

0x2aef,	// (0x0007f069) vded2_slider_bg_pane_g2

0x2af8,	// (0x0007f072) vded2_slider_bg_pane_g3

0x0002,

0xf7d6,	// (0x0008bd50) vded2_slider_bg_pane_g

0x84c9,	// (0x00084a43) aid_postcard_touch_down_pane_ParamLimits

0x84c9,	// (0x00084a43) aid_postcard_touch_down_pane

0x84d9,	// (0x00084a53) aid_postcard_touch_up_pane_ParamLimits

0x84d9,	// (0x00084a53) aid_postcard_touch_up_pane

0x0498,	// (0x0007ca12) main_blid2_pane

0x1858,	// (0x0007ddd2) popup_blid2_search_window

0x0498,	// (0x0007ca12) blid2_gps_pane

0x0498,	// (0x0007ca12) blid2_navig_pane

0x0498,	// (0x0007ca12) blid2_search_pane

0x0498,	// (0x0007ca12) blid2_tripm_pane

0xbc3d,	// (0x000881b7) blid2_search_pane_g1_ParamLimits

0xbc3d,	// (0x000881b7) blid2_search_pane_g1

0xbc4d,	// (0x000881c7) blid2_search_pane_t1_ParamLimits

0xbc4d,	// (0x000881c7) blid2_search_pane_t1

0xbc5f,	// (0x000881d9) aid_size_cell_blid2_gps_ParamLimits

0xbc5f,	// (0x000881d9) aid_size_cell_blid2_gps

0xbc6f,	// (0x000881e9) blid2_gps_pane_g1_ParamLimits

0xbc6f,	// (0x000881e9) blid2_gps_pane_g1

0xbc7b,	// (0x000881f5) grid_blid2_satellite_pane_ParamLimits

0xbc7b,	// (0x000881f5) grid_blid2_satellite_pane

0xbc89,	// (0x00088203) blid2_navig_pane_g1_ParamLimits

0xbc89,	// (0x00088203) blid2_navig_pane_g1

0xbc95,	// (0x0008820f) blid2_navig_pane_t1_ParamLimits

0xbc95,	// (0x0008820f) blid2_navig_pane_t1

0xbca7,	// (0x00088221) blid2_navig_pane_t2_ParamLimits

0xbca7,	// (0x00088221) blid2_navig_pane_t2

0x0001,

0xfb11,	// (0x0008c08b) blid2_navig_pane_t_ParamLimits

0xfb11,	// (0x0008c08b) blid2_navig_pane_t

0xbcb9,	// (0x00088233) blid2_navig_ring_pane_ParamLimits

0xbcb9,	// (0x00088233) blid2_navig_ring_pane

0xbcc9,	// (0x00088243) blid2_speed_pane_ParamLimits

0xbcc9,	// (0x00088243) blid2_speed_pane

0xbcd5,	// (0x0008824f) blid2_tripm_pane_g1_ParamLimits

0xbcd5,	// (0x0008824f) blid2_tripm_pane_g1

0xbce5,	// (0x0008825f) blid2_tripm_pane_g2_ParamLimits

0xbce5,	// (0x0008825f) blid2_tripm_pane_g2

0xbcf1,	// (0x0008826b) blid2_tripm_pane_g3_ParamLimits

0xbcf1,	// (0x0008826b) blid2_tripm_pane_g3

0xbcfd,	// (0x00088277) blid2_tripm_pane_g4_ParamLimits

0xbcfd,	// (0x00088277) blid2_tripm_pane_g4

0xbd09,	// (0x00088283) blid2_tripm_pane_g5_ParamLimits

0xbd09,	// (0x00088283) blid2_tripm_pane_g5

0x0005,

0xfb16,	// (0x0008c090) blid2_tripm_pane_g_ParamLimits

0xfb16,	// (0x0008c090) blid2_tripm_pane_g

0xbd25,	// (0x0008829f) blid2_tripm_pane_t1_ParamLimits

0xbd25,	// (0x0008829f) blid2_tripm_pane_t1

0xbd39,	// (0x000882b3) blid2_tripm_pane_t2_ParamLimits

0xbd39,	// (0x000882b3) blid2_tripm_pane_t2

0xbd4b,	// (0x000882c5) blid2_tripm_pane_t3_ParamLimits

0xbd4b,	// (0x000882c5) blid2_tripm_pane_t3

0x0003,

0xfb23,	// (0x0008c09d) blid2_tripm_pane_t_ParamLimits

0xfb23,	// (0x0008c09d) blid2_tripm_pane_t

0xbd7d,	// (0x000882f7) cell_blid2_satellite_pane_ParamLimits

0xbd7d,	// (0x000882f7) cell_blid2_satellite_pane

0xbd9b,	// (0x00088315) cell_blid2_satellite_pane_g1

0x2b01,	// (0x0007f07b) cell_blid2_satellite_pane_t1

0x1d12,	// (0x0007e28c) blid2_speed_pane_g1

0x2b0f,	// (0x0007f089) blid2_speed_pane_t1

0x2b1d,	// (0x0007f097) blid2_speed_pane_t2

0x0001,

0xfb2c,	// (0x0008c0a6) blid2_speed_pane_t

0x1d12,	// (0x0007e28c) blid2_navig_ring_pane_g1

0xbda4,	// (0x0008831e) blid2_navig_ring_pane_g2

0xbdac,	// (0x00088326) blid2_navig_ring_pane_g3

0xbdb4,	// (0x0008832e) blid2_navig_ring_pane_g4

0xbdbc,	// (0x00088336) blid2_navig_ring_pane_g5

0x0004,

0xfb31,	// (0x0008c0ab) blid2_navig_ring_pane_g

0x0498,	// (0x0007ca12) bg_popup_window_pane_cp011

0x2b2b,	// (0x0007f0a5) popup_blid2_search_window_g1

0x2b33,	// (0x0007f0ad) popup_blid2_search_window_t1

0x2b41,	// (0x0007f0bb) popup_blid2_search_window_t2

0x0001,

0xfb3c,	// (0x0008c0b6) popup_blid2_search_window_t

0xe55e,	// (0x0008aad8) main_browser_pane_g1

0xe25d,	// (0x0008a7d7) main_browser_pane_ParamLimits

0xabe0,	// (0x0008715a) bg_button_pane_cp011_ParamLimits

0xaeac,	// (0x00087426) cell_vitu2_function_pane_g1_ParamLimits

0xf0e1,	// (0x0008b65b) bg_popup_sub_pane_cp22_ParamLimits

0xb76e,	// (0x00087ce8) input_focus_pane_cp08_ParamLimits

0xb77b,	// (0x00087cf5) popup_vitu2_query_button_pane_ParamLimits

0xb77b,	// (0x00087cf5) popup_vitu2_query_button_pane

0xb750,	// (0x00087cca) popup_vitu2_query_input_button_pane

0x26d5,	// (0x0007ec4f) popup_vitu2_query_window_g1_ParamLimits

0xb78c,	// (0x00087d06) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0008bfc4) popup_vitu2_query_window_g_ParamLimits

0x0498,	// (0x0007ca12) bg_button_pane_cp026

0xbdc4,	// (0x0008833e) popup_vitu2_query_input_button_pane_g1

0x0498,	// (0x0007ca12) bg_button_pane_cp025

0x2b4f,	// (0x0007f0c9) popup_vitu2_query_button_pane_t1

0x964a,	// (0x00085bc4) main_mp3_pane_t6

0x965a,	// (0x00085bd4) popup_slider_window_cp01

0xaaff,	// (0x00087079) cam4_battery_pane

0xabee,	// (0x00087168) cam4_battery_pane_cp02

0xbb2d,	// (0x000880a7) cam4_battery_pane_cp01

0xbb37,	// (0x000880b1) cam4_battery_pane_cp03

0x2b5d,	// (0x0007f0d7) cam4_battery_pane_g1

0x1d12,	// (0x0007e28c) cam4_battery_pane_g2

0x0001,

0xfb41,	// (0x0008c0bb) cam4_battery_pane_g

0x1bd8,	// (0x0007e152) popup_blid_sat_info2_window_t11

0x7d4e,	// (0x000842c8) aid_size_touch_mv_arrow_left_ParamLimits

0x7d79,	// (0x000842f3) aid_size_touch_mv_arrow_right_ParamLimits

0xec19,	// (0x0008b193) navi_pane_g1_ParamLimits

0x7da2,	// (0x0008431c) navi_pane_g2_ParamLimits

0x7dd0,	// (0x0008434a) navi_pane_g3_ParamLimits

0xf418,	// (0x0008b992) navi_pane_g_ParamLimits

0x7e2a,	// (0x000843a4) navi_pane_mv_t1_ParamLimits

0xa0df,	// (0x00086659) grid_imed_effect_pane_ParamLimits

0xe4a3,	// (0x0008aa1d) aid_placing_vt_slider_lsc

0xe4ab,	// (0x0008aa25) aid_placing_vt_slider_prt

0xf0e1,	// (0x0008b65b) bg_tb_trans_pane_cp01_ParamLimits

0x1e62,	// (0x0007e3dc) popup_image_details_window_g1_ParamLimits

0x1e75,	// (0x0007e3ef) popup_image_details_window_g2_ParamLimits

0x1e8a,	// (0x0007e404) popup_image_details_window_g3_ParamLimits

0x1e8a,	// (0x0007e404) popup_image_details_window_g3

0xf74b,	// (0x0008bcc5) popup_image_details_window_g_ParamLimits

0x1e9e,	// (0x0007e418) popup_image_details_window_t1_ParamLimits

0x1eb0,	// (0x0007e42a) popup_image_details_window_t2_ParamLimits

0x1ec9,	// (0x0007e443) popup_image_details_window_t3_ParamLimits

0x1edd,	// (0x0007e457) popup_image_details_window_t4_ParamLimits

0x1ef8,	// (0x0007e472) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x0008bccc) popup_image_details_window_t_ParamLimits

0xba6b,	// (0x00087fe5) cl_header_name_pane_ParamLimits

0xba6b,	// (0x00087fe5) cl_header_name_pane

0xbdcc,	// (0x00088346) cl_header_name_pane_t1_ParamLimits

0xbdcc,	// (0x00088346) cl_header_name_pane_t1

0xbde3,	// (0x0008835d) cl_header_name_pane_t2_ParamLimits

0xbde3,	// (0x0008835d) cl_header_name_pane_t2

0xbe0d,	// (0x00088387) cl_header_name_pane_t3_ParamLimits

0xbe0d,	// (0x00088387) cl_header_name_pane_t3

0x0002,

0xfb46,	// (0x0008c0c0) cl_header_name_pane_t_ParamLimits

0xfb46,	// (0x0008c0c0) cl_header_name_pane_t

0x7dfb,	// (0x00084375) navi_pane_mv_g2_ParamLimits

0x23e0,	// (0x0007e95a) field_vitu2_entry_pane_g1_ParamLimits

0x23ec,	// (0x0007e966) field_vitu2_entry_pane_g2_ParamLimits

0x23f8,	// (0x0007e972) field_vitu2_entry_pane_g3_ParamLimits

0x23f8,	// (0x0007e972) field_vitu2_entry_pane_g3

0xf949,	// (0x0008bec3) field_vitu2_entry_pane_g_ParamLimits

0xae3c,	// (0x000873b6) cell_vitu2_itu_pane_g1_ParamLimits

0xae4c,	// (0x000873c6) cell_vitu2_itu_pane_g2_ParamLimits

0xae4c,	// (0x000873c6) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x0008becf) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x0008becf) cell_vitu2_itu_pane_g

0xabe0,	// (0x0008715a) bg_vkb2_func_pane_cp05_ParamLimits

0xabe0,	// (0x0008715a) bg_vkb2_func_pane_cp05

0xabe0,	// (0x0008715a) bg_vkb2_func_pane_cp03

0xabe0,	// (0x0008715a) bg_vkb2_func_pane_cp04

0xabe0,	// (0x0008715a) bg_vkb2_func_pane_cp10_ParamLimits

0xabe0,	// (0x0008715a) bg_vkb2_func_pane_cp10

0xba0d,	// (0x00087f87) bg_vkb2_func_pane_cp08

0xb9f3,	// (0x00087f6d) bg_vkb2_func_pane_cp06

0xba01,	// (0x00087f7b) bg_vkb2_func_pane_cp07

0x2a53,	// (0x0007efcd) bg_vkb2_func_pane_cp11_ParamLimits

0x2a53,	// (0x0007efcd) bg_vkb2_func_pane_cp11

0x2a68,	// (0x0007efe2) bg_vkb2_func_pane_cp12_ParamLimits

0x2a68,	// (0x0007efe2) bg_vkb2_func_pane_cp12

0x0498,	// (0x0007ca12) bg_vkb2_func_pane_cp09

0x2435,	// (0x0007e9af) bg_vkb2_func_pane_g1

0xe66f,	// (0x0008abe9) bg_vkb2_func_pane_g2

0x243d,	// (0x0007e9b7) bg_vkb2_func_pane_g3

0x2445,	// (0x0007e9bf) bg_vkb2_func_pane_g4

0x2680,	// (0x0007ebfa) bg_vkb2_func_pane_g5

0x245d,	// (0x0007e9d7) bg_vkb2_func_pane_g6

0x2465,	// (0x0007e9df) bg_vkb2_func_pane_g7

0x2455,	// (0x0007e9cf) bg_vkb2_func_pane_g8

0xe64f,	// (0x0008abc9) bg_vkb2_func_pane_g9

0x0008,

0xfb4d,	// (0x0008c0c7) bg_vkb2_func_pane_g

0xbd17,	// (0x00088291) blid2_tripm_pane_g6_ParamLimits

0xbd17,	// (0x00088291) blid2_tripm_pane_g6

0x2264,	// (0x0007e7de) mp4_progress_pane_g1

0xbd71,	// (0x000882eb) blid2_tripm_values_pane_ParamLimits

0xbd71,	// (0x000882eb) blid2_tripm_values_pane

0xbe32,	// (0x000883ac) blid2_tripm_values_pane_t1

0xbe40,	// (0x000883ba) blid2_tripm_values_pane_t2

0xbe4e,	// (0x000883c8) blid2_tripm_values_pane_t3

0xbe5c,	// (0x000883d6) blid2_tripm_values_pane_t4

0xbe6a,	// (0x000883e4) blid2_tripm_values_pane_t5

0xbe78,	// (0x000883f2) blid2_tripm_values_pane_t6

0xbe86,	// (0x00088400) blid2_tripm_values_pane_t7

0xbe94,	// (0x0008840e) blid2_tripm_values_pane_t8

0xbea2,	// (0x0008841c) blid2_tripm_values_pane_t9

0x0008,

0xfb60,	// (0x0008c0da) blid2_tripm_values_pane_t

0x6b90,	// (0x0008310a) call_video_pane_t1_ParamLimits

0x6ba6,	// (0x00083120) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0008b81b) call_video_pane_t_ParamLimits

0x838a,	// (0x00084904) msg_header_pane_g1_ParamLimits

0xee36,	// (0x0008b3b0) msg_header_pane_g2_ParamLimits

0xee36,	// (0x0008b3b0) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0008ba35) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0008ba35) msg_header_pane_g

0xe25d,	// (0x0008a7d7) main_clock2_pane_ParamLimits

0x9e62,	// (0x000863dc) grid_clock2_toolbar_pane_ParamLimits

0x9e62,	// (0x000863dc) grid_clock2_toolbar_pane

0x9e62,	// (0x000863dc) listscroll_clock2_pane_ParamLimits

0x9e62,	// (0x000863dc) listscroll_clock2_pane

0x9f16,	// (0x00086490) main_clock2_pane_t3_ParamLimits

0x9f16,	// (0x00086490) main_clock2_pane_t3

0x9f28,	// (0x000864a2) main_clock2_pane_t4_ParamLimits

0x9f28,	// (0x000864a2) main_clock2_pane_t4

0x2b67,	// (0x0007f0e1) cell_clock2_toolbar_pane

0x2b6f,	// (0x0007f0e9) cell_clock2_toolbar_pane_cp01

0x2b6f,	// (0x0007f0e9) cell_clock2_toolbar_pane_cp02

0x2b77,	// (0x0007f0f1) cell_clock2_toolbar_pane_cp03

0x2b7f,	// (0x0007f0f9) list_clock2_pane

0xeb7f,	// (0x0008b0f9) scroll_pane_cp10

0x2b87,	// (0x0007f101) list_single_clock2_pane_ParamLimits

0x2b87,	// (0x0007f101) list_single_clock2_pane

0xecb9,	// (0x0008b233) list_highlight_pane_cp08

0x2b94,	// (0x0007f10e) list_single_clock2_pane_t1

0x2ba2,	// (0x0007f11c) list_single_clock2_pane_t2

0x0001,

0xfb73,	// (0x0008c0ed) list_single_clock2_pane_t

0x0498,	// (0x0007ca12) bg_button_pane_cp10

0x2bb0,	// (0x0007f12a) cell_clock2_toolbar_pane_g1

0x842b,	// (0x000849a5) aid_main_viewer_pane_g1_ParamLimits

0x842b,	// (0x000849a5) aid_main_viewer_pane_g1

0x8437,	// (0x000849b1) aid_main_viewer_pane_g2_ParamLimits

0x8437,	// (0x000849b1) aid_main_viewer_pane_g2

0x8443,	// (0x000849bd) aid_main_viewer_pane_g3_ParamLimits

0x8443,	// (0x000849bd) aid_main_viewer_pane_g3

0x8454,	// (0x000849ce) aid_main_viewer_pane_g4_ParamLimits

0x8454,	// (0x000849ce) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0008ba46) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0008ba46) aid_main_viewer_pane_g

0x8be4,	// (0x0008515e) main_calc_pane_ParamLimits

0x8bf1,	// (0x0008516b) main_dialer2_pane_ParamLimits

0x0498,	// (0x0007ca12) main_cam6_pane

0x0498,	// (0x0007ca12) main_vid6_pane

0x9e6e,	// (0x000863e8) listscroll_gen_pane_cp06_ParamLimits

0x9e6e,	// (0x000863e8) listscroll_gen_pane_cp06

0x9f3a,	// (0x000864b4) main_clock2_pane_t5_ParamLimits

0x9f3a,	// (0x000864b4) main_clock2_pane_t5

0x9f89,	// (0x00086503) aid_call2_pane_cp10_ParamLimits

0x9f9b,	// (0x00086515) aid_call_pane_cp10_ParamLimits

0xebee,	// (0x0008b168) popup_clock_analogue_window_cp10_g1_ParamLimits

0xebee,	// (0x0008b168) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9fad,	// (0x00086527) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9fad,	// (0x00086527) popup_clock_analogue_window_cp10_g4_ParamLimits

0xebee,	// (0x0008b168) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x0008bd7c) popup_clock_analogue_window_cp10_g_ParamLimits

0x9fbf,	// (0x00086539) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa768,	// (0x00086ce2) cell_dialer2_keypad_pane_g2_ParamLimits

0xa768,	// (0x00086ce2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x0008be62) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x0008be62) cell_dialer2_keypad_pane_g

0xa784,	// (0x00086cfe) cell_dialer2_keypad_pane_t1

0xb189,	// (0x00087703) main_cset_text2_pane_ParamLimits

0xb189,	// (0x00087703) main_cset_text2_pane

0x28cd,	// (0x0007ee47) area_vitu2_query_pane_g1_ParamLimits

0xb992,	// (0x00087f0c) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x0008c011) area_vitu2_query_pane_g_ParamLimits

0x2951,	// (0x0007eecb) area_vitu2_query_pane_t7_ParamLimits

0x2951,	// (0x0007eecb) area_vitu2_query_pane_t7

0xb9f3,	// (0x00087f6d) bg_button_pane_cp018_ParamLimits

0xba01,	// (0x00087f7b) bg_button_pane_cp021_ParamLimits

0xba0d,	// (0x00087f87) bg_button_pane_cp022_ParamLimits

0xba0d,	// (0x00087f87) bg_vkb2_func_pane_cp08_ParamLimits

0xb9f3,	// (0x00087f6d) bg_vkb2_func_pane_cp06_ParamLimits

0xba01,	// (0x00087f7b) bg_vkb2_func_pane_cp07_ParamLimits

0xba1e,	// (0x00087f98) input_focus_pane_cp09_ParamLimits

0xbeb0,	// (0x0008842a) cam6_autofocus_pane_ParamLimits

0xbeb0,	// (0x0008842a) cam6_autofocus_pane

0xbed2,	// (0x0008844c) cam6_image_uncrop_pane_ParamLimits

0xbed2,	// (0x0008844c) cam6_image_uncrop_pane

0xbeff,	// (0x00088479) cam6_indi_pane_ParamLimits

0xbeff,	// (0x00088479) cam6_indi_pane

0xbf19,	// (0x00088493) cam6_mode_pane_ParamLimits

0xbf19,	// (0x00088493) cam6_mode_pane

0xbf2d,	// (0x000884a7) cam6_timer_pane_ParamLimits

0xbf2d,	// (0x000884a7) cam6_timer_pane

0xbf39,	// (0x000884b3) cam6_zoom_pane_ParamLimits

0xbf39,	// (0x000884b3) cam6_zoom_pane

0xbf57,	// (0x000884d1) cam6_mode_pane_g1_ParamLimits

0xbf57,	// (0x000884d1) cam6_mode_pane_g1

0xbf63,	// (0x000884dd) cam6_mode_pane_g2_ParamLimits

0xbf63,	// (0x000884dd) cam6_mode_pane_g2

0xbf6f,	// (0x000884e9) cam6_mode_pane_g3_ParamLimits

0xbf6f,	// (0x000884e9) cam6_mode_pane_g3

0xbf7b,	// (0x000884f5) cam6_mode_pane_g4_ParamLimits

0xbf7b,	// (0x000884f5) cam6_mode_pane_g4

0x0003,

0xfb78,	// (0x0008c0f2) cam6_mode_pane_g_ParamLimits

0xfb78,	// (0x0008c0f2) cam6_mode_pane_g

0x2bb8,	// (0x0007f132) bg_tb_trans_pane_cp08_ParamLimits

0x2bb8,	// (0x0007f132) bg_tb_trans_pane_cp08

0x2bc6,	// (0x0007f140) cam6_battery_pane_ParamLimits

0x2bc6,	// (0x0007f140) cam6_battery_pane

0x2bdc,	// (0x0007f156) cam6_indi_pane_g1_ParamLimits

0x2bdc,	// (0x0007f156) cam6_indi_pane_g1

0x2bee,	// (0x0007f168) cam6_indi_pane_g2_ParamLimits

0x2bee,	// (0x0007f168) cam6_indi_pane_g2

0x2c00,	// (0x0007f17a) cam6_indi_pane_g3_ParamLimits

0x2c00,	// (0x0007f17a) cam6_indi_pane_g3

0x0002,

0xfb81,	// (0x0008c0fb) cam6_indi_pane_g_ParamLimits

0xfb81,	// (0x0008c0fb) cam6_indi_pane_g

0x2c12,	// (0x0007f18c) cam6_indi_pane_t1_ParamLimits

0x2c12,	// (0x0007f18c) cam6_indi_pane_t1

0xac54,	// (0x000871ce) cam6_autofocus_pane_g1

0xac4c,	// (0x000871c6) cam6_autofocus_pane_g2

0xac64,	// (0x000871de) cam6_autofocus_pane_g3

0xac5c,	// (0x000871d6) cam6_autofocus_pane_g4

0x0003,

0xfb88,	// (0x0008c102) cam6_autofocus_pane_g

0x2c38,	// (0x0007f1b2) cam6_timer_pane_g1

0x2c40,	// (0x0007f1ba) cam6_timer_pane_t1

0x2c4e,	// (0x0007f1c8) cam6_zoom_cont_pane

0x2c56,	// (0x0007f1d0) cam6_zoom_pane_g1

0x2c5e,	// (0x0007f1d8) cam6_zoom_pane_g2

0xbf87,	// (0x00088501) cam6_zoom_pane_g3

0x0002,

0xfb91,	// (0x0008c10b) cam6_zoom_pane_g

0x1d12,	// (0x0007e28c) cam6_battery_pane_g1

0x1d12,	// (0x0007e28c) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0008bc89) cam6_battery_pane_g

0x2c66,	// (0x0007f1e0) cam6_zoom_cont_pane_g1

0x2c6f,	// (0x0007f1e9) cam6_zoom_cont_pane_g2

0x2c78,	// (0x0007f1f2) cam6_zoom_cont_pane_g3

0x0002,

0xfb98,	// (0x0008c112) cam6_zoom_cont_pane_g

0xbfa4,	// (0x0008851e) cam6_mode_pane_cp_ParamLimits

0xbfa4,	// (0x0008851e) cam6_mode_pane_cp

0xbfb8,	// (0x00088532) cam6_zoom_pane_cp_ParamLimits

0xbfb8,	// (0x00088532) cam6_zoom_pane_cp

0xbfd6,	// (0x00088550) vid6_image_uncrop_cif_pane_ParamLimits

0xbfd6,	// (0x00088550) vid6_image_uncrop_cif_pane

0xc002,	// (0x0008857c) vid6_image_uncrop_nhd_pane_ParamLimits

0xc002,	// (0x0008857c) vid6_image_uncrop_nhd_pane

0xc021,	// (0x0008859b) vid6_image_uncrop_vga_pane_ParamLimits

0xc021,	// (0x0008859b) vid6_image_uncrop_vga_pane

0xc040,	// (0x000885ba) vid6_image_uncrop_wvga_pane_ParamLimits

0xc040,	// (0x000885ba) vid6_image_uncrop_wvga_pane

0xc05f,	// (0x000885d9) vid6_indi_pane_ParamLimits

0xc05f,	// (0x000885d9) vid6_indi_pane

0x2bb8,	// (0x0007f132) bg_tb_trans_pane_cp09_ParamLimits

0x2bb8,	// (0x0007f132) bg_tb_trans_pane_cp09

0x2c90,	// (0x0007f20a) cam6_battery_pane_cp_ParamLimits

0x2c90,	// (0x0007f20a) cam6_battery_pane_cp

0x2c9c,	// (0x0007f216) vid6_indi_pane_g1_ParamLimits

0x2c9c,	// (0x0007f216) vid6_indi_pane_g1

0x2cae,	// (0x0007f228) vid6_indi_pane_g2_ParamLimits

0x2cae,	// (0x0007f228) vid6_indi_pane_g2

0x2cc0,	// (0x0007f23a) vid6_indi_pane_g3_ParamLimits

0x2cc0,	// (0x0007f23a) vid6_indi_pane_g3

0x2cd7,	// (0x0007f251) vid6_indi_pane_g4_ParamLimits

0x2cd7,	// (0x0007f251) vid6_indi_pane_g4

0x2cee,	// (0x0007f268) vid6_indi_pane_g5_ParamLimits

0x2cee,	// (0x0007f268) vid6_indi_pane_g5

0x0004,

0xfb9f,	// (0x0008c119) vid6_indi_pane_g_ParamLimits

0xfb9f,	// (0x0008c119) vid6_indi_pane_g

0x2d08,	// (0x0007f282) vid6_indi_pane_t1_ParamLimits

0x2d08,	// (0x0007f282) vid6_indi_pane_t1

0x2d1e,	// (0x0007f298) vid6_indi_pane_t2_ParamLimits

0x2d1e,	// (0x0007f298) vid6_indi_pane_t2

0x2d46,	// (0x0007f2c0) vid6_indi_pane_t3_ParamLimits

0x2d46,	// (0x0007f2c0) vid6_indi_pane_t3

0x2d6e,	// (0x0007f2e8) vid6_indi_pane_t4_ParamLimits

0x2d6e,	// (0x0007f2e8) vid6_indi_pane_t4

0x0003,

0xfbaa,	// (0x0008c124) vid6_indi_pane_t_ParamLimits

0xfbaa,	// (0x0008c124) vid6_indi_pane_t

0x2d92,	// (0x0007f30c) wait_bar_pane_cp08

0xc084,	// (0x000885fe) main_cset_text2_pane_t1_ParamLimits

0xc084,	// (0x000885fe) main_cset_text2_pane_t1

0xbf8f,	// (0x00088509) listscroll_gen_pane_cp06_t1_ParamLimits

0xbf8f,	// (0x00088509) listscroll_gen_pane_cp06_t1

0x0498,	// (0x0007ca12) main_cam6_set_pane

0xaaf1,	// (0x0008706b) bg_tb_trans_pane_cp06_ParamLimits

0xab07,	// (0x00087081) cam4_indicators_pane_g1_ParamLimits

0xab14,	// (0x0008708e) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x0008be9f) cam4_indicators_pane_g_ParamLimits

0xab34,	// (0x000870ae) cam4_indicators_pane_t1_ParamLimits

0xabe0,	// (0x0008715a) bg_tb_trans_pane_cp07_ParamLimits

0xab07,	// (0x00087081) vid4_indicators_pane_g1_ParamLimits

0xabf8,	// (0x00087172) vid4_indicators_pane_g2_ParamLimits

0xac05,	// (0x0008717f) vid4_indicators_pane_g3_ParamLimits

0xac16,	// (0x00087190) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x0008beb1) vid4_indicators_pane_g_ParamLimits

0xac32,	// (0x000871ac) vid4_indicators_pane_t1_ParamLimits

0xbb3f,	// (0x000880b9) vid4_progress_pane_g1_ParamLimits

0xbb4b,	// (0x000880c5) vid4_progress_pane_g2_ParamLimits

0xbb57,	// (0x000880d1) vid4_progress_pane_g3_ParamLimits

0xbb66,	// (0x000880e0) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x0008c05c) vid4_progress_pane_g_ParamLimits

0xbb84,	// (0x000880fe) vid4_progress_pane_t1_ParamLimits

0xbb9a,	// (0x00088114) vid4_progress_pane_t2_ParamLimits

0xbbb0,	// (0x0008812a) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x0008c067) vid4_progress_pane_t_ParamLimits

0xbbc5,	// (0x0008813f) wait_bar_pane_cp07_ParamLimits

0xc0ab,	// (0x00088625) main_cam6_set_pane_g2_ParamLimits

0xc0ab,	// (0x00088625) main_cam6_set_pane_g2

0xc0b7,	// (0x00088631) main_cset6_listscroll_pane_ParamLimits

0xc0b7,	// (0x00088631) main_cset6_listscroll_pane

0xc0e4,	// (0x0008865e) main_cset6_slider_pane_ParamLimits

0xc0e4,	// (0x0008865e) main_cset6_slider_pane

0xc0f0,	// (0x0008866a) main_cset6_text2_pane_ParamLimits

0xc0f0,	// (0x0008866a) main_cset6_text2_pane

0x2da1,	// (0x0007f31b) main_cset6_text_pane

0x2da9,	// (0x0007f323) main_cset_list_pane_copy1_ParamLimits

0x2da9,	// (0x0007f323) main_cset_list_pane_copy1

0x2db9,	// (0x0007f333) scroll_pane_cp028_copy1

0xc103,	// (0x0008867d) cset_list_set_pane_copy1

0xc113,	// (0x0008868d) aid_position_infowindow_above_copy1

0xc11b,	// (0x00088695) aid_position_infowindow_below_copy1

0xc123,	// (0x0008869d) cset_list_set_pane_g1_copy1

0xc12b,	// (0x000886a5) cset_list_set_pane_g3_copy1_ParamLimits

0xc12b,	// (0x000886a5) cset_list_set_pane_g3_copy1

0xc13a,	// (0x000886b4) cset_list_set_pane_t1_copy1_ParamLimits

0xc13a,	// (0x000886b4) cset_list_set_pane_t1_copy1

0xf0e1,	// (0x0008b65b) list_highlight_pane_cp021_copy1_ParamLimits

0xf0e1,	// (0x0008b65b) list_highlight_pane_cp021_copy1

0x2de6,	// (0x0007f360) cset6_slider_pane_ParamLimits

0x2de6,	// (0x0007f360) cset6_slider_pane

0x2e12,	// (0x0007f38c) main_cset6_slider_pane_g1_ParamLimits

0x2e12,	// (0x0007f38c) main_cset6_slider_pane_g1

0xc14f,	// (0x000886c9) main_cset6_slider_pane_g2_ParamLimits

0xc14f,	// (0x000886c9) main_cset6_slider_pane_g2

0x2e3a,	// (0x0007f3b4) main_cset6_slider_pane_g3_ParamLimits

0x2e3a,	// (0x0007f3b4) main_cset6_slider_pane_g3

0xc177,	// (0x000886f1) main_cset6_slider_pane_g4_ParamLimits

0xc177,	// (0x000886f1) main_cset6_slider_pane_g4

0xc183,	// (0x000886fd) main_cset6_slider_pane_g5_ParamLimits

0xc183,	// (0x000886fd) main_cset6_slider_pane_g5

0x2568,	// (0x0007eae2) main_cset6_slider_pane_g7_ParamLimits

0x2568,	// (0x0007eae2) main_cset6_slider_pane_g7

0x2574,	// (0x0007eaee) main_cset6_slider_pane_g8_ParamLimits

0x2574,	// (0x0007eaee) main_cset6_slider_pane_g8

0xc18f,	// (0x00088709) main_cset6_slider_pane_g9_ParamLimits

0xc18f,	// (0x00088709) main_cset6_slider_pane_g9

0xc19b,	// (0x00088715) main_cset6_slider_pane_g10_ParamLimits

0xc19b,	// (0x00088715) main_cset6_slider_pane_g10

0xc1a7,	// (0x00088721) main_cset6_slider_pane_g11_ParamLimits

0xc1a7,	// (0x00088721) main_cset6_slider_pane_g11

0xc1b3,	// (0x0008872d) main_cset6_slider_pane_g12_ParamLimits

0xc1b3,	// (0x0008872d) main_cset6_slider_pane_g12

0xc1bf,	// (0x00088739) main_cset6_slider_pane_g13_ParamLimits

0xc1bf,	// (0x00088739) main_cset6_slider_pane_g13

0xc1cb,	// (0x00088745) main_cset6_slider_pane_g14_ParamLimits

0xc1cb,	// (0x00088745) main_cset6_slider_pane_g14

0xc1d7,	// (0x00088751) main_cset6_slider_pane_g15_ParamLimits

0xc1d7,	// (0x00088751) main_cset6_slider_pane_g15

0xc1ef,	// (0x00088769) main_cset6_slider_pane_g16_ParamLimits

0xc1ef,	// (0x00088769) main_cset6_slider_pane_g16

0xc1fb,	// (0x00088775) main_cset6_slider_pane_g17_ParamLimits

0xc1fb,	// (0x00088775) main_cset6_slider_pane_g17

0x0011,

0xfbb3,	// (0x0008c12d) main_cset6_slider_pane_g_ParamLimits

0xfbb3,	// (0x0008c12d) main_cset6_slider_pane_g

0x2e46,	// (0x0007f3c0) main_cset6_slider_pane_t1_ParamLimits

0x2e46,	// (0x0007f3c0) main_cset6_slider_pane_t1

0xc21f,	// (0x00088799) main_cset6_slider_pane_t2_ParamLimits

0xc21f,	// (0x00088799) main_cset6_slider_pane_t2

0xc24a,	// (0x000887c4) main_cset6_slider_pane_t3_ParamLimits

0xc24a,	// (0x000887c4) main_cset6_slider_pane_t3

0xc275,	// (0x000887ef) main_cset6_slider_pane_t4_ParamLimits

0xc275,	// (0x000887ef) main_cset6_slider_pane_t4

0xc2a0,	// (0x0008881a) main_cset6_slider_pane_t5_ParamLimits

0xc2a0,	// (0x0008881a) main_cset6_slider_pane_t5

0x2e87,	// (0x0007f401) main_cset6_slider_pane_t7_ParamLimits

0x2e87,	// (0x0007f401) main_cset6_slider_pane_t7

0xc2cb,	// (0x00088845) main_cset6_slider_pane_t8_ParamLimits

0xc2cb,	// (0x00088845) main_cset6_slider_pane_t8

0xc2ef,	// (0x00088869) main_cset6_slider_pane_t9_ParamLimits

0xc2ef,	// (0x00088869) main_cset6_slider_pane_t9

0xc313,	// (0x0008888d) main_cset6_slider_pane_t10_ParamLimits

0xc313,	// (0x0008888d) main_cset6_slider_pane_t10

0xc337,	// (0x000888b1) main_cset6_slider_pane_t11_ParamLimits

0xc337,	// (0x000888b1) main_cset6_slider_pane_t11

0x2ebd,	// (0x0007f437) main_cset6_slider_pane_t14_ParamLimits

0x2ebd,	// (0x0007f437) main_cset6_slider_pane_t14

0x2ef6,	// (0x0007f470) main_cset6_slider_pane_t15_ParamLimits

0x2ef6,	// (0x0007f470) main_cset6_slider_pane_t15

0x000b,

0xfbd8,	// (0x0008c152) main_cset6_slider_pane_t_ParamLimits

0xfbd8,	// (0x0008c152) main_cset6_slider_pane_t

0x262c,	// (0x0007eba6) cset_slider_pane_g1_copy1

0x2635,	// (0x0007ebaf) cset_slider_pane_g2_copy1

0x263e,	// (0x0007ebb8) cset_slider_pane_g3_copy1

0x0498,	// (0x0007ca12) bg_popup_sub_pane_cp011_copy1

0x26e1,	// (0x0007ec5b) main_cset_text_pane_g1_copy1

0x26e9,	// (0x0007ec63) main_cset_text_pane_t1_copy1

0x26f7,	// (0x0007ec71) main_cset_text_pane_t2_copy1

0x2705,	// (0x0007ec7f) main_cset_text_pane_t3_copy1

0x2713,	// (0x0007ec8d) main_cset_text_pane_t4_copy1

0x2721,	// (0x0007ec9b) main_cset_text_pane_t5_copy1

0x272f,	// (0x0007eca9) main_cset_text_pane_t6_copy1

0x273d,	// (0x0007ecb7) main_cset_text_pane_t7_copy1

0xc35b,	// (0x000888d5) main_cset_text2_pane_t1_copy1

0x0498,	// (0x0007ca12) main_ncimui_pane

0x8c36,	// (0x000851b0) popup_query_ncimui_window_ParamLimits

0x8c36,	// (0x000851b0) popup_query_ncimui_window

0x44ab,	// (0x00080a25) field_cale_ev2_pane_g4_ParamLimits

0x44ab,	// (0x00080a25) field_cale_ev2_pane_g4

0xa4a8,	// (0x00086a22) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa4a8,	// (0x00086a22) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x0008be3d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x0008be3d) cell_video_dialer_keypad_pane_g

0xa4c0,	// (0x00086a3a) cell_video_dialer_keypad_pane_t1

0x0498,	// (0x0007ca12) bg_popup_window_pane_cp012

0xea6b,	// (0x0008afe5) heading_pane_cp06

0x301e,	// (0x0007f598) ncim_query_content_pane

0x0498,	// (0x0007ca12) bg_popup_heading_pane_cp01

0x3026,	// (0x0007f5a0) ncim_heading_pane_t1

0x3034,	// (0x0007f5ae) ncim_indicator_popup_pane

0x3046,	// (0x0007f5c0) ncim_query_button_pane

0x305c,	// (0x0007f5d6) ncim_query_content_pane_t1

0x306e,	// (0x0007f5e8) ncim_query_content_pane_t2

0x0005,

0xfc17,	// (0x0008c191) ncim_query_content_pane_t

0x30a8,	// (0x0007f622) ncim_query_list_pane

0x30ba,	// (0x0007f634) ncim_query_popup_pane

0x3034,	// (0x0007f5ae) ncim_indicator_popup_pane_ParamLimits

0xc450,	// (0x000889ca) ncim_query_content_pane_g1_ParamLimits

0xc450,	// (0x000889ca) ncim_query_content_pane_g1

0x305c,	// (0x0007f5d6) ncim_query_content_pane_t1_ParamLimits

0x306e,	// (0x0007f5e8) ncim_query_content_pane_t2_ParamLimits

0xc45c,	// (0x000889d6) ncim_query_content_pane_t3_ParamLimits

0xc45c,	// (0x000889d6) ncim_query_content_pane_t3

0xc479,	// (0x000889f3) ncim_query_content_pane_t4_ParamLimits

0xc479,	// (0x000889f3) ncim_query_content_pane_t4

0xc496,	// (0x00088a10) ncim_query_content_pane_t5_ParamLimits

0xc496,	// (0x00088a10) ncim_query_content_pane_t5

0x3080,	// (0x0007f5fa) ncim_query_content_pane_t6_ParamLimits

0x3080,	// (0x0007f5fa) ncim_query_content_pane_t6

0xfc17,	// (0x0008c191) ncim_query_content_pane_t_ParamLimits

0x30a8,	// (0x0007f622) ncim_query_list_pane_ParamLimits

0x30ba,	// (0x0007f634) ncim_query_popup_pane_ParamLimits

0x30ce,	// (0x0007f648) wait_bar_pane_cp04

0x0498,	// (0x0007ca12) input_focus_pane_cp011

0x30d6,	// (0x0007f650) ncim_query_popup_pane_t1

0x30e4,	// (0x0007f65e) ncim_list_query_list_pane_ParamLimits

0x30e4,	// (0x0007f65e) ncim_list_query_list_pane

0x0498,	// (0x0007ca12) bg_button_pane_cp027

0x30f7,	// (0x0007f671) ncim_query_button_pane_g1

0x0498,	// (0x0007ca12) list_highlight_pane_cp012

0x3101,	// (0x0007f67b) ncim_list_query_list_pane_g1

0x3109,	// (0x0007f683) ncim_list_query_list_pane_t1

0xab24,	// (0x0008709e) cam4_indicators_pane_g3_ParamLimits

0xab24,	// (0x0008709e) cam4_indicators_pane_g3

0xac22,	// (0x0008719c) vid4_indicators_pane_g5_ParamLimits

0xac22,	// (0x0008719c) vid4_indicators_pane_g5

0xbb75,	// (0x000880ef) vid4_progress_pane_g5_ParamLimits

0xbb75,	// (0x000880ef) vid4_progress_pane_g5

0xc38a,	// (0x00088904) main_ncimui_pane_g1

0xc3d4,	// (0x0008894e) ncimui_group_query_pane_ParamLimits

0xc3d4,	// (0x0008894e) ncimui_group_query_pane

0xc412,	// (0x0008898c) ncimui_list_pane_ParamLimits

0xc412,	// (0x0008898c) ncimui_list_pane

0xc42c,	// (0x000889a6) ncimui_text_pane_ParamLimits

0xc42c,	// (0x000889a6) ncimui_text_pane

0xc4b3,	// (0x00088a2d) ncimui_text_pane_t1_ParamLimits

0xc4b3,	// (0x00088a2d) ncimui_text_pane_t1

0x3117,	// (0x0007f691) ncimui_list_single_graphic_pane_ParamLimits

0x3117,	// (0x0007f691) ncimui_list_single_graphic_pane

0xc4d2,	// (0x00088a4c) ncimui_query_pane_ParamLimits

0xc4d2,	// (0x00088a4c) ncimui_query_pane

0x0498,	// (0x0007ca12) list_highlight_pane_cp013

0x3127,	// (0x0007f6a1) ncim_list_query_list_pane_t1_copy1

0x3101,	// (0x0007f67b) ncim_list_single_graphic_pane_g1

0x3135,	// (0x0007f6af) ncim_query_button_pane_cp01

0x313d,	// (0x0007f6b7) ncim_query_entry_pane_ParamLimits

0x313d,	// (0x0007f6b7) ncim_query_entry_pane

0x314d,	// (0x0007f6c7) ncimui_query_pane_g1

0x3155,	// (0x0007f6cf) ncimui_query_pane_t1_ParamLimits

0x3155,	// (0x0007f6cf) ncimui_query_pane_t1

0x0498,	// (0x0007ca12) input_focus_pane_cp012

0x30d6,	// (0x0007f650) ncim_query_entry_pane_t1

0xe25d,	// (0x0008a7d7) main_im_pane_ParamLimits

0xf0e1,	// (0x0008b65b) main_mobtv_pane_ParamLimits

0xf0e1,	// (0x0008b65b) main_mobtv_pane

0xc207,	// (0x00088781) main_cset6_slider_pane_g18_ParamLimits

0xc207,	// (0x00088781) main_cset6_slider_pane_g18

0xc213,	// (0x0008878d) main_cset6_slider_pane_g19_ParamLimits

0xc213,	// (0x0008878d) main_cset6_slider_pane_g19

0x23f8,	// (0x0007e972) bg_main_mobtv_pane_ParamLimits

0x23f8,	// (0x0007e972) bg_main_mobtv_pane

0xc4e2,	// (0x00088a5c) main_mobtv_info_pane

0xc4ed,	// (0x00088a67) main_mobtv_loading_pane_ParamLimits

0xc4ed,	// (0x00088a67) main_mobtv_loading_pane

0x3179,	// (0x0007f6f3) main_mobtv_pg_channel_list_pane

0x3183,	// (0x0007f6fd) main_mobtv_pg_hdr_pane

0xc4fa,	// (0x00088a74) main_mobtv_programe_curr_pane_ParamLimits

0xc4fa,	// (0x00088a74) main_mobtv_programe_curr_pane

0xc507,	// (0x00088a81) main_mobtv_programe_next_pane_ParamLimits

0xc507,	// (0x00088a81) main_mobtv_programe_next_pane

0x318c,	// (0x0007f706) popup_mobtv_noti_window

0x1d12,	// (0x0007e28c) main_tv_pg_hdr_pane_g1

0x3196,	// (0x0007f710) main_tv_pg_hdr_pane_g2

0x319e,	// (0x0007f718) main_tv_pg_hdr_pane_g3

0x31a6,	// (0x0007f720) main_tv_pg_hdr_pane_g4

0x31ae,	// (0x0007f728) main_tv_pg_hdr_pane_g5

0x31b8,	// (0x0007f732) main_tv_pg_hdr_pane_g6

0x31c2,	// (0x0007f73c) main_tv_pg_hdr_pane_g7

0x31cc,	// (0x0007f746) main_tv_pg_hdr_pane_g8

0x31d6,	// (0x0007f750) main_tv_pg_hdr_pane_g9

0x31e0,	// (0x0007f75a) main_tv_pg_hdr_pane_g10

0x31ea,	// (0x0007f764) main_tv_pg_hdr_pane_g11

0x000a,

0xfc24,	// (0x0008c19e) main_tv_pg_hdr_pane_g

0x31f4,	// (0x0007f76e) main_tv_pg_hdr_pane_t1

0x3202,	// (0x0007f77c) main_tv_pg_hdr_pane_t2

0x3210,	// (0x0007f78a) main_tv_pg_hdr_pane_t3

0x3220,	// (0x0007f79a) main_tv_pg_hdr_pane_t4

0x3230,	// (0x0007f7aa) main_tv_pg_hdr_pane_t5

0x0004,

0xfc3b,	// (0x0008c1b5) main_tv_pg_hdr_pane_t

0x3240,	// (0x0007f7ba) single_mobtv_pg_channel_pane_ParamLimits

0x3240,	// (0x0007f7ba) single_mobtv_pg_channel_pane

0x3252,	// (0x0007f7cc) single_mobtv_pg_channel_table_pane

0x325b,	// (0x0007f7d5) single_mobtv_pg_channel_thumb_pane

0x3264,	// (0x0007f7de) single_tv_pg_channel_pane_g1

0x326d,	// (0x0007f7e7) single_tv_pg_channel_pane_g2

0x0001,

0xfc46,	// (0x0008c1c0) single_tv_pg_channel_pane_g

0x1f42,	// (0x0007e4bc) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1f42,	// (0x0007e4bc) bg_single_mobtv_pg_channel_thumb_pane

0x3276,	// (0x0007f7f0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3276,	// (0x0007f7f0) single_mobtv_pg_channel_thumb_pane_g1

0x3284,	// (0x0007f7fe) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3284,	// (0x0007f7fe) single_mobtv_pg_channel_thumb_pane_g2

0x3290,	// (0x0007f80a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3290,	// (0x0007f80a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc4b,	// (0x0008c1c5) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc4b,	// (0x0008c1c5) single_mobtv_pg_channel_thumb_pane_g

0x329c,	// (0x0007f816) single_mobtv_pg_channel_thumb_pane_t1

0x32aa,	// (0x0007f824) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc52,	// (0x0008c1cc) single_mobtv_pg_channel_thumb_pane_t

0x1d12,	// (0x0007e28c) bg_single_mobtv_pg_channel_table_pane_g1

0x1d12,	// (0x0007e28c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0008bc89) bg_single_mobtv_pg_channel_table_pane_g

0x32b8,	// (0x0007f832) single_mobtv_pg_channel_table_pane_t1

0x32c6,	// (0x0007f840) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc57,	// (0x0008c1d1) single_mobtv_pg_channel_table_pane_t

0xc51c,	// (0x00088a96) main_mobtv_info_pane_g1_ParamLimits

0xc51c,	// (0x00088a96) main_mobtv_info_pane_g1

0xc538,	// (0x00088ab2) main_mobtv_info_pane_t1_ParamLimits

0xc538,	// (0x00088ab2) main_mobtv_info_pane_t1

0xc5b0,	// (0x00088b2a) main_mobtv_info_pane_t2_ParamLimits

0xc5b0,	// (0x00088b2a) main_mobtv_info_pane_t2

0x0002,

0xfc61,	// (0x0008c1db) main_mobtv_info_pane_t_ParamLimits

0xfc61,	// (0x0008c1db) main_mobtv_info_pane_t

0xc643,	// (0x00088bbd) wait_bar_pane_cp05

0xc655,	// (0x00088bcf) main_mobtv_loading_pane_g1_ParamLimits

0xc655,	// (0x00088bcf) main_mobtv_loading_pane_g1

0xc661,	// (0x00088bdb) main_mobtv_loading_pane_g2_ParamLimits

0xc661,	// (0x00088bdb) main_mobtv_loading_pane_g2

0xc66d,	// (0x00088be7) main_mobtv_loading_pane_g3_ParamLimits

0xc66d,	// (0x00088be7) main_mobtv_loading_pane_g3

0x0002,

0xfc68,	// (0x0008c1e2) main_mobtv_loading_pane_g_ParamLimits

0xfc68,	// (0x0008c1e2) main_mobtv_loading_pane_g

0x32d4,	// (0x0007f84e) main_mobtv_loading_pane_t1_ParamLimits

0x32d4,	// (0x0007f84e) main_mobtv_loading_pane_t1

0x32ec,	// (0x0007f866) main_mobtv_loading_pane_t2_ParamLimits

0x32ec,	// (0x0007f866) main_mobtv_loading_pane_t2

0x0001,

0xfc6f,	// (0x0008c1e9) main_mobtv_loading_pane_t_ParamLimits

0xfc6f,	// (0x0008c1e9) main_mobtv_loading_pane_t

0xc67b,	// (0x00088bf5) wait_bar_pane_cp06_ParamLimits

0xc67b,	// (0x00088bf5) wait_bar_pane_cp06

0x3310,	// (0x0007f88a) main_mobtv_programe_curr_pane_t1

0x331e,	// (0x0007f898) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc74,	// (0x0008c1ee) main_mobtv_programe_curr_pane_t

0x332c,	// (0x0007f8a6) main_mobtv_programe_next_pane_t1

0x333a,	// (0x0007f8b4) main_mobtv_programe_next_pane_t2

0x3348,	// (0x0007f8c2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc79,	// (0x0008c1f3) main_mobtv_programe_next_pane_t

0x0498,	// (0x0007ca12) bg_popup_mobtv_noti_window_pane

0x3356,	// (0x0007f8d0) popup_mobtv_noti_window_g1

0x335e,	// (0x0007f8d8) popup_mobtv_noti_window_t1

0x336c,	// (0x0007f8e6) popup_mobtv_noti_window_t2

0x0001,

0xfc80,	// (0x0008c1fa) popup_mobtv_noti_window_t

0x1d12,	// (0x0007e28c) bg_popup_mobtv_noti_window_pane_g1

0x0498,	// (0x0007ca12) sc_clock_pane

0x0498,	// (0x0007ca12) main_fs_bigclock_pane

0xbd5f,	// (0x000882d9) blid2_tripm_pane_t4_ParamLimits

0xbd5f,	// (0x000882d9) blid2_tripm_pane_t4

0xc687,	// (0x00088c01) sc_clock_pane_g1_ParamLimits

0xc687,	// (0x00088c01) sc_clock_pane_g1

0xc695,	// (0x00088c0f) sc_clock_pane_t1_ParamLimits

0xc695,	// (0x00088c0f) sc_clock_pane_t1

0xc6aa,	// (0x00088c24) sc_clock_pane_t2_ParamLimits

0xc6aa,	// (0x00088c24) sc_clock_pane_t2

0xc6bc,	// (0x00088c36) sc_clock_pane_t3_ParamLimits

0xc6bc,	// (0x00088c36) sc_clock_pane_t3

0x0004,

0xfc85,	// (0x0008c1ff) sc_clock_pane_t_ParamLimits

0xfc85,	// (0x0008c1ff) sc_clock_pane_t

0xd376,	// (0x000898f0) main_fs_bigclock_indicator_pane_ParamLimits

0xd376,	// (0x000898f0) main_fs_bigclock_indicator_pane

0xc743,	// (0x00088cbd) main_fs_bigclock_pane_g1_ParamLimits

0xc743,	// (0x00088cbd) main_fs_bigclock_pane_g1

0xd382,	// (0x000898fc) main_fs_bigclock_pane_t1_ParamLimits

0xd382,	// (0x000898fc) main_fs_bigclock_pane_t1

0xd394,	// (0x0008990e) main_fs_bigclock_pane_t2_ParamLimits

0xd394,	// (0x0008990e) main_fs_bigclock_pane_t2

0xd3a8,	// (0x00089922) main_fs_bigclock_pane_t3_ParamLimits

0xd3a8,	// (0x00089922) main_fs_bigclock_pane_t3

0x0002,

0xfe84,	// (0x0008c3fe) main_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0008c3fe) main_fs_bigclock_pane_t

0x3fe1,	// (0x0008055b) main_fs_bigclock_indicator_pane_g1

0x304e,	// (0x0007f5c8) ncim_query_content_pane_g2_ParamLimits

0x304e,	// (0x0007f5c8) ncim_query_content_pane_g2

0x0001,

0xfc12,	// (0x0008c18c) ncim_query_content_pane_g_ParamLimits

0xfc12,	// (0x0008c18c) ncim_query_content_pane_g

0xc6ce,	// (0x00088c48) sc_clock_pane_t4_ParamLimits

0xc6ce,	// (0x00088c48) sc_clock_pane_t4

0xf0e1,	// (0x0008b65b) main_radioblah_pane

0x2355,	// (0x0007e8cf) cell_call4_button_pane_t1_copy1_ParamLimits

0x2355,	// (0x0007e8cf) cell_call4_button_pane_t1_copy1

0xc394,	// (0x0008890e) main_ncimui_pane_t1_ParamLimits

0xc394,	// (0x0008890e) main_ncimui_pane_t1

0xc3a6,	// (0x00088920) main_ncimui_pane_t2_ParamLimits

0xc3a6,	// (0x00088920) main_ncimui_pane_t2

0x0002,

0xfc0b,	// (0x0008c185) main_ncimui_pane_t_ParamLimits

0xfc0b,	// (0x0008c185) main_ncimui_pane_t

0x34a4,	// (0x0007fa1e) main_radioblah_anim_pane_ParamLimits

0x34a4,	// (0x0007fa1e) main_radioblah_anim_pane

0x34b5,	// (0x0007fa2f) main_radioblah_info_pane_ParamLimits

0x34b5,	// (0x0007fa2f) main_radioblah_info_pane

0x34c9,	// (0x0007fa43) main_radioblah_pane_t1_ParamLimits

0x34c9,	// (0x0007fa43) main_radioblah_pane_t1

0x34e5,	// (0x0007fa5f) main_radioblah_pane_t2_ParamLimits

0x34e5,	// (0x0007fa5f) main_radioblah_pane_t2

0x0003,

0xfca6,	// (0x0008c220) main_radioblah_pane_t_ParamLimits

0xfca6,	// (0x0008c220) main_radioblah_pane_t

0xc797,	// (0x00088d11) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc797,	// (0x00088d11) main_radioblah_rocker_ctrl_pane

0x352d,	// (0x0007faa7) main_radioblah_info_pane_t1_ParamLimits

0x352d,	// (0x0007faa7) main_radioblah_info_pane_t1

0xc7e0,	// (0x00088d5a) main_radioblah_info_pane_t2_ParamLimits

0xc7e0,	// (0x00088d5a) main_radioblah_info_pane_t2

0x0003,

0xfcaf,	// (0x0008c229) main_radioblah_info_pane_t_ParamLimits

0xfcaf,	// (0x0008c229) main_radioblah_info_pane_t

0x1d12,	// (0x0007e28c) main_radioblah_rocker_ctrl_pane_g1

0xc890,	// (0x00088e0a) main_radioblah_rocker_ctrl_pane_g2

0xc898,	// (0x00088e12) main_radioblah_rocker_ctrl_pane_g3

0xc8a0,	// (0x00088e1a) main_radioblah_rocker_ctrl_pane_g4

0xc8a8,	// (0x00088e22) main_radioblah_rocker_ctrl_pane_g5

0xc8b0,	// (0x00088e2a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb8,	// (0x0008c232) main_radioblah_rocker_ctrl_pane_g

0xc35b,	// (0x000888d5) main_cset_text2_pane_t1_copy1_ParamLimits

0xaa43,	// (0x00086fbd) cam4_image_uncrop_qvga_pane

0xab9a,	// (0x00087114) vid4_image_uncrop_qcif_pane

0xbef1,	// (0x0008846b) cam6_image_uncrop_qvga_pane_ParamLimits

0xbef1,	// (0x0008846b) cam6_image_uncrop_qvga_pane

0x2c80,	// (0x0007f1fa) vid6_image_uncrop_qcif_pane_ParamLimits

0x2c80,	// (0x0007f1fa) vid6_image_uncrop_qcif_pane

0x0498,	// (0x0007ca12) bg_popup_preview_window_pane_cp03

0x3000,	// (0x0007f57a) list_cset_text2_pane

0x3008,	// (0x0007f582) main_cset6_text2_pane_g1

0x3010,	// (0x0007f58a) main_cset6_text2_pane_t1

0xc8b8,	// (0x00088e32) list_cset_text2_pane_t1_ParamLimits

0xc8b8,	// (0x00088e32) list_cset_text2_pane_t1

0xf0e1,	// (0x0008b65b) main_radioblah_pane_ParamLimits

0xc62f,	// (0x00088ba9) main_mobtv_info_pane_t3_ParamLimits

0xc62f,	// (0x00088ba9) main_mobtv_info_pane_t3

0xc785,	// (0x00088cff) main_radioblah_pane_g1

0xc7b0,	// (0x00088d2a) main_radioblah_info_pane_g1

0xc835,	// (0x00088daf) main_radioblah_info_pane_t3_ParamLimits

0xc835,	// (0x00088daf) main_radioblah_info_pane_t3

0x77f2,	// (0x00083d6c) highlight_cell_cale_month_pane_ParamLimits

0x77f2,	// (0x00083d6c) highlight_cell_cale_month_pane

0x0498,	// (0x0007ca12) main_phob_fisheye_pane

0x2050,	// (0x0007e5ca) scroll_pane_cp0031_ParamLimits

0x2050,	// (0x0007e5ca) scroll_pane_cp0031

0x2d92,	// (0x0007f30c) wait_bar_pane_cp08_ParamLimits

0xc103,	// (0x0008867d) cset_list_set_pane_copy1_ParamLimits

0x3581,	// (0x0007fafb) highlight_cell_cale_month_pane_g1

0xc8d1,	// (0x00088e4b) highlight_cell_cale_month_pane_t1

0x29bd,	// (0x0007ef37) list_gen_pane_cp01

0x2553,	// (0x0007eacd) scroll_pane_01

0xc8df,	// (0x00088e59) list_single_double_fisheye_pane

0x3589,	// (0x0007fb03) list_double_fisheye_pane_g1_ParamLimits

0x3589,	// (0x0007fb03) list_double_fisheye_pane_g1

0x3595,	// (0x0007fb0f) list_double_fisheye_pane_g2_ParamLimits

0x3595,	// (0x0007fb0f) list_double_fisheye_pane_g2

0xc8e8,	// (0x00088e62) list_double_fisheye_pane_g3_ParamLimits

0xc8e8,	// (0x00088e62) list_double_fisheye_pane_g3

0x0004,

0xfcc5,	// (0x0008c23f) list_double_fisheye_pane_g_ParamLimits

0xfcc5,	// (0x0008c23f) list_double_fisheye_pane_g

0xc8f4,	// (0x00088e6e) list_double_fisheye_pane_t1_ParamLimits

0xc8f4,	// (0x00088e6e) list_double_fisheye_pane_t1

0xc90f,	// (0x00088e89) list_double_fisheye_pane_t2_ParamLimits

0xc90f,	// (0x00088e89) list_double_fisheye_pane_t2

0x0001,

0xfcd0,	// (0x0008c24a) list_double_fisheye_pane_t_ParamLimits

0xfcd0,	// (0x0008c24a) list_double_fisheye_pane_t

0x0498,	// (0x0007ca12) main_call5_pane

0xc6f4,	// (0x00088c6e) sc_swipe_pane_ParamLimits

0xc6f4,	// (0x00088c6e) sc_swipe_pane

0xc93d,	// (0x00088eb7) call5_image_pane_ParamLimits

0xc93d,	// (0x00088eb7) call5_image_pane

0xc94f,	// (0x00088ec9) call5_swipe_1_pane_ParamLimits

0xc94f,	// (0x00088ec9) call5_swipe_1_pane

0xc95b,	// (0x00088ed5) call5_swipe_2_pane_ParamLimits

0xc95b,	// (0x00088ed5) call5_swipe_2_pane

0xc977,	// (0x00088ef1) popup_call5_audio_first_window_ParamLimits

0xc977,	// (0x00088ef1) popup_call5_audio_first_window

0x1f42,	// (0x0007e4bc) call5_swipe_1_pane_g1_ParamLimits

0x1f42,	// (0x0007e4bc) call5_swipe_1_pane_g1

0x35c6,	// (0x0007fb40) call5_swipe_1_pane_g2_ParamLimits

0x35c6,	// (0x0007fb40) call5_swipe_1_pane_g2

0x0001,

0xfcd5,	// (0x0008c24f) call5_swipe_1_pane_g_ParamLimits

0xfcd5,	// (0x0008c24f) call5_swipe_1_pane_g

0x35d2,	// (0x0007fb4c) call5_swipe_1_pane_t1_ParamLimits

0x35d2,	// (0x0007fb4c) call5_swipe_1_pane_t1

0x1f42,	// (0x0007e4bc) call5_swipe_2_pane_g1_ParamLimits

0x1f42,	// (0x0007e4bc) call5_swipe_2_pane_g1

0x35e7,	// (0x0007fb61) call5_swipe_2_pane_g2_ParamLimits

0x35e7,	// (0x0007fb61) call5_swipe_2_pane_g2

0x0001,

0xfcda,	// (0x0008c254) call5_swipe_2_pane_g_ParamLimits

0xfcda,	// (0x0008c254) call5_swipe_2_pane_g

0x35f3,	// (0x0007fb6d) call5_swipe_2_pane_t1_ParamLimits

0x35f3,	// (0x0007fb6d) call5_swipe_2_pane_t1

0x3608,	// (0x0007fb82) sc_swipe_pane_g1_ParamLimits

0x3608,	// (0x0007fb82) sc_swipe_pane_g1

0x3615,	// (0x0007fb8f) sc_swipe_pane_g2_ParamLimits

0x3615,	// (0x0007fb8f) sc_swipe_pane_g2

0x0001,

0xfcdf,	// (0x0008c259) sc_swipe_pane_g_ParamLimits

0xfcdf,	// (0x0008c259) sc_swipe_pane_g

0x3621,	// (0x0007fb9b) sc_swipe_pane_t1_ParamLimits

0x3621,	// (0x0007fb9b) sc_swipe_pane_t1

0x0498,	// (0x0007ca12) main_cmail_launcher_pane

0xc987,	// (0x00088f01) aid_size_cell_cmail_l_ParamLimits

0xc987,	// (0x00088f01) aid_size_cell_cmail_l

0xc997,	// (0x00088f11) grid_cmail_l_pane_ParamLimits

0xc997,	// (0x00088f11) grid_cmail_l_pane

0xc9a7,	// (0x00088f21) cell_cmail_l_pane_ParamLimits

0xc9a7,	// (0x00088f21) cell_cmail_l_pane

0xc9bd,	// (0x00088f37) cell_cmail_l_pane_g1_ParamLimits

0xc9bd,	// (0x00088f37) cell_cmail_l_pane_g1

0xc9c9,	// (0x00088f43) cell_cmail_l_pane_t1_ParamLimits

0xc9c9,	// (0x00088f43) cell_cmail_l_pane_t1

0x3636,	// (0x0007fbb0) cell_cmail_l_pane_t2_ParamLimits

0x3636,	// (0x0007fbb0) cell_cmail_l_pane_t2

0x0001,

0xfce4,	// (0x0008c25e) cell_cmail_l_pane_t_ParamLimits

0xfce4,	// (0x0008c25e) cell_cmail_l_pane_t

0xf0e1,	// (0x0008b65b) grid_highlight_pane_cp018_ParamLimits

0xf0e1,	// (0x0008b65b) grid_highlight_pane_cp018

0x5bed,	// (0x00082167) main2_pane_ParamLimits

0x5bed,	// (0x00082167) main2_pane

0xe308,	// (0x0008a882) popup_sp_fs_action_menu_bg_pane_g1

0xe310,	// (0x0008a88a) popup_sp_fs_action_menu_bg_pane_g2

0xe318,	// (0x0008a892) popup_sp_fs_action_menu_bg_pane_g3

0xe320,	// (0x0008a89a) popup_sp_fs_action_menu_bg_pane_g4

0xe328,	// (0x0008a8a2) popup_sp_fs_action_menu_bg_pane_g5

0xe330,	// (0x0008a8aa) popup_sp_fs_action_menu_bg_pane_g6

0xe338,	// (0x0008a8b2) popup_sp_fs_action_menu_bg_pane_g7

0xe340,	// (0x0008a8ba) popup_sp_fs_action_menu_bg_pane_g8

0xe348,	// (0x0008a8c2) popup_sp_fs_action_menu_bg_pane_g9

0xe350,	// (0x0008a8ca) popup_sp_fs_action_menu_bg_pane_g10

0xe350,	// (0x0008a8ca) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0008b735) popup_sp_fs_action_menu_bg_pane_g

0x0617,	// (0x0007cb91) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x2_t3_g3_g1

0x0623,	// (0x0007cb9d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0623,	// (0x0007cb9d) list_medium_line_x2_t3_g3_g2

0x062f,	// (0x0007cba9) list_medium_line_x2_t3_g3_g3_ParamLimits

0x062f,	// (0x0007cba9) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0008b7e5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0008b7e5) list_medium_line_x2_t3_g3_g

0x063b,	// (0x0007cbb5) list_medium_line_x2_t3_g3_t1_ParamLimits

0x063b,	// (0x0007cbb5) list_medium_line_x2_t3_g3_t1

0x6ac4,	// (0x0008303e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6ac4,	// (0x0008303e) list_medium_line_x2_t3_g3_t2

0x0650,	// (0x0007cbca) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0650,	// (0x0007cbca) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0008b7ec) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0008b7ec) list_medium_line_x2_t3_g3_t

0x0617,	// (0x0007cb91) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x2_t3_g2_g1

0x062f,	// (0x0007cba9) list_medium_line_x2_t3_g2_g2_ParamLimits

0x062f,	// (0x0007cba9) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0008b7f3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0008b7f3) list_medium_line_x2_t3_g2_g

0x0665,	// (0x0007cbdf) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0665,	// (0x0007cbdf) list_medium_line_x2_t3_g2_t1

0x067b,	// (0x0007cbf5) list_medium_line_x2_t3_g2_t2_ParamLimits

0x067b,	// (0x0007cbf5) list_medium_line_x2_t3_g2_t2

0x068d,	// (0x0007cc07) list_medium_line_x2_t3_g2_t3_ParamLimits

0x068d,	// (0x0007cc07) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0008b7f8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0008b7f8) list_medium_line_x2_t3_g2_t

0x0617,	// (0x0007cb91) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x2_t4_g4_g1

0x06ab,	// (0x0007cc25) list_medium_line_x2_t4_g4_g2_ParamLimits

0x06ab,	// (0x0007cc25) list_medium_line_x2_t4_g4_g2

0x0623,	// (0x0007cb9d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0623,	// (0x0007cb9d) list_medium_line_x2_t4_g4_g3

0x06b7,	// (0x0007cc31) list_medium_line_x2_t4_g4_g4_ParamLimits

0x06b7,	// (0x0007cc31) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0008b7ff) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0008b7ff) list_medium_line_x2_t4_g4_g

0x6ad6,	// (0x00083050) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6ad6,	// (0x00083050) list_medium_line_x2_t4_g4_t1

0x6af0,	// (0x0008306a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6af0,	// (0x0008306a) list_medium_line_x2_t4_g4_t2

0x6b06,	// (0x00083080) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6b06,	// (0x00083080) list_medium_line_x2_t4_g4_t3

0x06c3,	// (0x0007cc3d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x06c3,	// (0x0007cc3d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0008b808) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0008b808) list_medium_line_x2_t4_g4_t

0x0617,	// (0x0007cb91) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x2_t2_g4_g1

0x06ab,	// (0x0007cc25) list_medium_line_x2_t2_g4_g2_ParamLimits

0x06ab,	// (0x0007cc25) list_medium_line_x2_t2_g4_g2

0x0623,	// (0x0007cb9d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0623,	// (0x0007cb9d) list_medium_line_x2_t2_g4_g3

0x062f,	// (0x0007cba9) list_medium_line_x2_t2_g4_g4_ParamLimits

0x062f,	// (0x0007cba9) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0008b86f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0008b86f) list_medium_line_x2_t2_g4_g

0x06d5,	// (0x0007cc4f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x06d5,	// (0x0007cc4f) list_medium_line_x2_t2_g4_t1

0x0650,	// (0x0007cbca) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0650,	// (0x0007cbca) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0008b878) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0008b878) list_medium_line_x2_t2_g4_t

0x0617,	// (0x0007cb91) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x2_t2_g3_g1

0x0623,	// (0x0007cb9d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0623,	// (0x0007cb9d) list_medium_line_x2_t2_g3_g2

0x062f,	// (0x0007cba9) list_medium_line_x2_t2_g3_g3_ParamLimits

0x062f,	// (0x0007cba9) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0008b7e5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0008b7e5) list_medium_line_x2_t2_g3_g

0x06ea,	// (0x0007cc64) list_medium_line_x2_t2_g3_t1_ParamLimits

0x06ea,	// (0x0007cc64) list_medium_line_x2_t2_g3_t1

0x0650,	// (0x0007cbca) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0650,	// (0x0007cbca) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0008b87d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0008b87d) list_medium_line_x2_t2_g3_t

0x7a10,	// (0x00083f8a) main_sp_fs_list_pane_ParamLimits

0x7a10,	// (0x00083f8a) main_sp_fs_list_pane

0x7a1c,	// (0x00083f96) sp_fs_scroll_pane_ParamLimits

0x7a1c,	// (0x00083f96) sp_fs_scroll_pane

0x7a28,	// (0x00083fa2) list_medium_line_x2_t3_t1

0x7a38,	// (0x00083fb2) list_medium_line_x2_t3_t2

0x072d,	// (0x0007cca7) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0008b8c8) list_medium_line_x2_t3_t

0x7a46,	// (0x00083fc0) list_medium_line_x3_t4_t1

0x7a56,	// (0x00083fd0) list_medium_line_x3_t4_t2

0x073b,	// (0x0007ccb5) list_medium_line_x3_t4_t3

0x072d,	// (0x0007cca7) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0008b8cf) list_medium_line_x3_t4_t

0x7a64,	// (0x00083fde) list_medium_line_x4_t5_t1

0x7a74,	// (0x00083fee) list_medium_line_x4_t5_t2

0x073b,	// (0x0007ccb5) list_medium_line_x4_t5_t3

0x0749,	// (0x0007ccc3) list_medium_line_x4_t5_t4

0x072d,	// (0x0007cca7) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0008b8d8) list_medium_line_x4_t5_t

0x0617,	// (0x0007cb91) list_medium_line_t4_g4_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_t4_g4_g1

0x06b7,	// (0x0007cc31) list_medium_line_t4_g4_g2_ParamLimits

0x06b7,	// (0x0007cc31) list_medium_line_t4_g4_g2

0x0757,	// (0x0007ccd1) list_medium_line_t4_g4_g3_ParamLimits

0x0757,	// (0x0007ccd1) list_medium_line_t4_g4_g3

0x062f,	// (0x0007cba9) list_medium_line_t4_g4_g4_ParamLimits

0x062f,	// (0x0007cba9) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0008b8e3) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0008b8e3) list_medium_line_t4_g4_g

0x0763,	// (0x0007ccdd) list_medium_line_t4_g4_t1_ParamLimits

0x0763,	// (0x0007ccdd) list_medium_line_t4_g4_t1

0x0778,	// (0x0007ccf2) list_medium_line_t4_g4_t2_ParamLimits

0x0778,	// (0x0007ccf2) list_medium_line_t4_g4_t2

0x078e,	// (0x0007cd08) list_medium_line_t4_g4_t3_ParamLimits

0x078e,	// (0x0007cd08) list_medium_line_t4_g4_t3

0x0650,	// (0x0007cbca) list_medium_line_t4_g4_t4_ParamLimits

0x0650,	// (0x0007cbca) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0008b8ec) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0008b8ec) list_medium_line_t4_g4_t

0x7b95,	// (0x0008410f) chi_dic_find_pane_g1

0x8bff,	// (0x00085179) main_tport_pane

0x2672,	// (0x0007ebec) list_medium_line_plain_t1

0x2688,	// (0x0007ec02) list_medium_line_t2_g2_g1_ParamLimits

0x2688,	// (0x0007ec02) list_medium_line_t2_g2_g1

0x2694,	// (0x0007ec0e) list_medium_line_t2_g2_g2_ParamLimits

0x2694,	// (0x0007ec0e) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x0008bfa8) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x0008bfa8) list_medium_line_t2_g2_g

0xb616,	// (0x00087b90) list_medium_line_t2_g2_t1_ParamLimits

0xb616,	// (0x00087b90) list_medium_line_t2_g2_t1

0xb62d,	// (0x00087ba7) list_medium_line_t2_g2_t2_ParamLimits

0xb62d,	// (0x00087ba7) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x0008bfad) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x0008bfad) list_medium_line_t2_g2_t

0x29c6,	// (0x0007ef40) aid_sp_fs_list_icon_a_sm

0x488d,	// (0x00080e07) aid_sp_fs_list_icon_d

0x29ce,	// (0x0007ef48) aid_sp_fs_text_primary

0x29d7,	// (0x0007ef51) aid_sp_fs_text_secondary

0x29e0,	// (0x0007ef5a) list_medium_line

0x29e0,	// (0x0007ef5a) list_medium_line_g2

0x29e0,	// (0x0007ef5a) list_medium_line_g3

0x29e0,	// (0x0007ef5a) list_medium_line_plain

0x29e0,	// (0x0007ef5a) list_medium_line_plain_t2

0x29e0,	// (0x0007ef5a) list_medium_line_plain_t3

0x29e0,	// (0x0007ef5a) list_medium_line_right_icon

0x29e0,	// (0x0007ef5a) list_medium_line_right_iconx2

0x29e0,	// (0x0007ef5a) list_medium_line_t2

0x29e0,	// (0x0007ef5a) list_medium_line_t2_g2

0x29e0,	// (0x0007ef5a) list_medium_line_t2_g3

0x29e0,	// (0x0007ef5a) list_medium_line_t2_right_icon

0x29e0,	// (0x0007ef5a) list_medium_line_t2_right_iconx2

0x29e0,	// (0x0007ef5a) list_medium_line_t3

0x29e0,	// (0x0007ef5a) list_medium_line_t3_g2

0x29e0,	// (0x0007ef5a) list_medium_line_t3_g3

0x29e0,	// (0x0007ef5a) list_medium_line_t3_right_iconx2

0x29e9,	// (0x0007ef63) list_medium_line_t4_g4

0x29f2,	// (0x0007ef6c) list_medium_line_x2

0x29f2,	// (0x0007ef6c) list_medium_line_x2_t2_g2

0x29f2,	// (0x0007ef6c) list_medium_line_x2_t2_g3

0x29f2,	// (0x0007ef6c) list_medium_line_x2_t2_g4

0x29f2,	// (0x0007ef6c) list_medium_line_x2_t3

0x29f2,	// (0x0007ef6c) list_medium_line_x2_t3_g2

0x29f2,	// (0x0007ef6c) list_medium_line_x2_t3_g3

0x29f2,	// (0x0007ef6c) list_medium_line_x2_t3_g4

0x29f2,	// (0x0007ef6c) list_medium_line_x2_t4_g2

0x29f2,	// (0x0007ef6c) list_medium_line_x2_t4_g4

0x29fb,	// (0x0007ef75) list_medium_line_x3

0x29fb,	// (0x0007ef75) list_medium_line_x3_t4

0x29fb,	// (0x0007ef75) list_medium_line_x3_t4_g4

0x29e9,	// (0x0007ef63) list_medium_line_x4_t4

0x29e9,	// (0x0007ef63) list_medium_line_x4_t4_g7

0x29e9,	// (0x0007ef63) list_medium_line_x4_t5

0x2a04,	// (0x0007ef7e) list_single_fs_dyc_pane_ParamLimits

0x2a04,	// (0x0007ef7e) list_single_fs_dyc_pane

0x0617,	// (0x0007cb91) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x4_t4_g7_g1

0x2f2f,	// (0x0007f4a9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2f2f,	// (0x0007f4a9) list_medium_line_x4_t4_g7_g2

0x2f3b,	// (0x0007f4b5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2f3b,	// (0x0007f4b5) list_medium_line_x4_t4_g7_g3

0x2f4a,	// (0x0007f4c4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2f4a,	// (0x0007f4c4) list_medium_line_x4_t4_g7_g4

0x2f56,	// (0x0007f4d0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2f56,	// (0x0007f4d0) list_medium_line_x4_t4_g7_g5

0x2f65,	// (0x0007f4df) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2f65,	// (0x0007f4df) list_medium_line_x4_t4_g7_g6

0x2f74,	// (0x0007f4ee) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2f74,	// (0x0007f4ee) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf1,	// (0x0008c16b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf1,	// (0x0008c16b) list_medium_line_x4_t4_g7_g

0x2f80,	// (0x0007f4fa) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2f80,	// (0x0007f4fa) list_medium_line_x4_t4_g7_t1

0x2f95,	// (0x0007f50f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x2f95,	// (0x0007f50f) list_medium_line_x4_t4_g7_t2

0x2faa,	// (0x0007f524) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2faa,	// (0x0007f524) list_medium_line_x4_t4_g7_t3

0x2fbf,	// (0x0007f539) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2fbf,	// (0x0007f539) list_medium_line_x4_t4_g7_t4

0x2fd1,	// (0x0007f54b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x2fd1,	// (0x0007f54b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc00,	// (0x0008c17a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc00,	// (0x0008c17a) list_medium_line_x4_t4_g7_t

0x2fe3,	// (0x0007f55d) list_single_dyc_row_pane_ParamLimits

0x2fe3,	// (0x0007f55d) list_single_dyc_row_pane

0xc931,	// (0x00088eab) call5_gesture_pane_ParamLimits

0xc931,	// (0x00088eab) call5_gesture_pane

0xc967,	// (0x00088ee1) call5_windows_pane_ParamLimits

0xc967,	// (0x00088ee1) call5_windows_pane

0xc9df,	// (0x00088f59) call5_swipe_1_pane_cp_ParamLimits

0xc9df,	// (0x00088f59) call5_swipe_1_pane_cp

0xc9eb,	// (0x00088f65) call5_swipe_2_pane_cp_ParamLimits

0xc9eb,	// (0x00088f65) call5_swipe_2_pane_cp

0xecb9,	// (0x0008b233) call5_image_pane_cp

0xc9f7,	// (0x00088f71) popup_call5_audio_first_window_cp_ParamLimits

0xc9f7,	// (0x00088f71) popup_call5_audio_first_window_cp

0x3608,	// (0x0007fb82) call5_swipe_1_pane_g1_cp_ParamLimits

0x3608,	// (0x0007fb82) call5_swipe_1_pane_g1_cp

0x3648,	// (0x0007fbc2) call5_swipe_1_pane_g2_cp

0x3621,	// (0x0007fb9b) call5_swipe_1_pane_t1_cp_ParamLimits

0x3621,	// (0x0007fb9b) call5_swipe_1_pane_t1_cp

0x3608,	// (0x0007fb82) call5_swipe_2_pane_g1_cp_ParamLimits

0x3608,	// (0x0007fb82) call5_swipe_2_pane_g1_cp

0x3650,	// (0x0007fbca) call5_swipe_2_pane_g2_cp

0x3658,	// (0x0007fbd2) call5_swipe_2_pane_t1_cp_ParamLimits

0x3658,	// (0x0007fbd2) call5_swipe_2_pane_t1_cp

0xf0e1,	// (0x0008b65b) main_sp_fs_email_pane

0x366d,	// (0x0007fbe7) main_sp_fs_listscroll_pane_te

0x3676,	// (0x0007fbf0) popup_sp_fs_action_menu_pane_ParamLimits

0x3676,	// (0x0007fbf0) popup_sp_fs_action_menu_pane

0x1d12,	// (0x0007e28c) bg_sp_fs_ctrlbar_pane_g1

0x36bc,	// (0x0007fc36) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x36c5,	// (0x0007fc3f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x36ce,	// (0x0007fc48) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1d12,	// (0x0007e28c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce9,	// (0x0008c263) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1af1,	// (0x0007e06b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1af1,	// (0x0007e06b) bg_sp_fs_ctrlbar_ddmenu_pane

0x36d7,	// (0x0007fc51) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x36d7,	// (0x0007fc51) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x36e3,	// (0x0007fc5d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x36e3,	// (0x0007fc5d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf2,	// (0x0008c26c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf2,	// (0x0008c26c) main_sp_fs_ctrlbar_ddmenu_pane_g

0x36ef,	// (0x0007fc69) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x36ef,	// (0x0007fc69) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3709,	// (0x0007fc83) list_medium_line_t2_right_icon_g1

0xca05,	// (0x00088f7f) list_medium_line_t2_right_icon_t1

0xca15,	// (0x00088f8f) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf7,	// (0x0008c271) list_medium_line_t2_right_icon_t

0x184a,	// (0x0007ddc4) bg_sp_fs_ctrlbar_pane_ParamLimits

0x184a,	// (0x0007ddc4) bg_sp_fs_ctrlbar_pane

0xca7a,	// (0x00088ff4) main_sp_fs_ctrlbar_button_pane_cp01

0xca82,	// (0x00088ffc) main_sp_fs_ctrlbar_ddmenu_pane

0x374b,	// (0x0007fcc5) main_sp_fs_ctrlbar_pane_g1

0x3757,	// (0x0007fcd1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfc,	// (0x0008c276) main_sp_fs_ctrlbar_pane_g

0x3763,	// (0x0007fcdd) main_sp_fs_ctrlbar_pane_t1

0xca8c,	// (0x00089006) main_sp_fs_ctrlbar_pane

0xcaa8,	// (0x00089022) main_sp_fs_listscroll_pane_te_cp01

0xcab9,	// (0x00089033) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xcab9,	// (0x00089033) popup_sp_fs_action_menu_pane_cp01

0xf0e1,	// (0x0008b65b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0e1,	// (0x0008b65b) bg_sp_fs_highlight_list_pane_cp01

0x3778,	// (0x0007fcf2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3778,	// (0x0007fcf2) sp_fs_action_menu_list_gene_pane_g1

0x3787,	// (0x0007fd01) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3787,	// (0x0007fd01) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd01,	// (0x0008c27b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd01,	// (0x0008c27b) sp_fs_action_menu_list_gene_pane_g

0x3794,	// (0x0007fd0e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3794,	// (0x0007fd0e) sp_fs_action_menu_list_gene_pane_t1

0x37ac,	// (0x0007fd26) sp_fs_action_menu_list_gene_pane_ParamLimits

0x37ac,	// (0x0007fd26) sp_fs_action_menu_list_gene_pane

0x37cf,	// (0x0007fd49) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x37cf,	// (0x0007fd49) popup_sp_fs_action_menu_bg_pane

0x37dd,	// (0x0007fd57) sp_fs_action_menu_list_pane_ParamLimits

0x37dd,	// (0x0007fd57) sp_fs_action_menu_list_pane

0x3801,	// (0x0007fd7b) sp_fs_scroll_pane_cp01_ParamLimits

0x3801,	// (0x0007fd7b) sp_fs_scroll_pane_cp01

0xcad3,	// (0x0008904d) list_medium_line_plain_t2_t1

0xcae3,	// (0x0008905d) list_medium_line_plain_t2_t2

0x0001,

0xfd06,	// (0x0008c280) list_medium_line_plain_t2_t

0xcaf1,	// (0x0008906b) list_medium_line_plain_t3_t1

0xcb01,	// (0x0008907b) list_medium_line_plain_t3_t2

0xcb0f,	// (0x00089089) list_medium_line_plain_t3_t3

0x0002,

0xfd0b,	// (0x0008c285) list_medium_line_plain_t3_t

0x0617,	// (0x0007cb91) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x2_t2_g2_g1

0x062f,	// (0x0007cba9) list_medium_line_x2_t2_g2_g2_ParamLimits

0x062f,	// (0x0007cba9) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0008b7f3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0008b7f3) list_medium_line_x2_t2_g2_g

0x0763,	// (0x0007ccdd) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0763,	// (0x0007ccdd) list_medium_line_x2_t2_g2_t1

0x0650,	// (0x0007cbca) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0650,	// (0x0007cbca) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd12,	// (0x0008c28c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd12,	// (0x0008c28c) list_medium_line_x2_t2_g2_t

0x0617,	// (0x0007cb91) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x2_t4_g2_g1

0x3827,	// (0x0007fda1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3827,	// (0x0007fda1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd17,	// (0x0008c291) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd17,	// (0x0008c291) list_medium_line_x2_t4_g2_g

0xcb1d,	// (0x00089097) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcb1d,	// (0x00089097) list_medium_line_x2_t4_g2_t1

0xcb37,	// (0x000890b1) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcb37,	// (0x000890b1) list_medium_line_x2_t4_g2_t2

0xcb4d,	// (0x000890c7) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcb4d,	// (0x000890c7) list_medium_line_x2_t4_g2_t3

0x0650,	// (0x0007cbca) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0650,	// (0x0007cbca) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1c,	// (0x0008c296) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1c,	// (0x0008c296) list_medium_line_x2_t4_g2_t

0x3839,	// (0x0007fdb3) list_medium_line_t3_right_iconx2_g1

0x3709,	// (0x0007fc83) list_medium_line_t3_right_iconx2_g2

0xcb62,	// (0x000890dc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd25,	// (0x0008c29f) list_medium_line_t3_right_iconx2_g

0xcb6a,	// (0x000890e4) list_medium_line_t3_right_iconx2_t1

0xcb7a,	// (0x000890f4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2c,	// (0x0008c2a6) list_medium_line_t3_right_iconx2_t

0x0617,	// (0x0007cb91) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x3_t4_g4_g1

0x0623,	// (0x0007cb9d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0623,	// (0x0007cb9d) list_medium_line_x3_t4_g4_g2

0x06b7,	// (0x0007cc31) list_medium_line_x3_t4_g4_g3_ParamLimits

0x06b7,	// (0x0007cc31) list_medium_line_x3_t4_g4_g3

0x3841,	// (0x0007fdbb) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3841,	// (0x0007fdbb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd31,	// (0x0008c2ab) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd31,	// (0x0008c2ab) list_medium_line_x3_t4_g4_g

0xcb88,	// (0x00089102) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcb88,	// (0x00089102) list_medium_line_x3_t4_g4_t1

0xcb9f,	// (0x00089119) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcb9f,	// (0x00089119) list_medium_line_x3_t4_g4_t2

0x384d,	// (0x0007fdc7) list_medium_line_x3_t4_g4_t3_ParamLimits

0x384d,	// (0x0007fdc7) list_medium_line_x3_t4_g4_t3

0x3862,	// (0x0007fddc) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3862,	// (0x0007fddc) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd3a,	// (0x0008c2b4) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd3a,	// (0x0008c2b4) list_medium_line_x3_t4_g4_t

0xcbb4,	// (0x0008912e) list_single_dyc_row_text_pane_t1_ParamLimits

0xcbb4,	// (0x0008912e) list_single_dyc_row_text_pane_t1

0xcbf7,	// (0x00089171) list_single_dyc_row_text_pane_t2_ParamLimits

0xcbf7,	// (0x00089171) list_single_dyc_row_text_pane_t2

0x387f,	// (0x0007fdf9) list_single_dyc_row_text_pane_t3_ParamLimits

0x387f,	// (0x0007fdf9) list_single_dyc_row_text_pane_t3

0x0002,

0xfd43,	// (0x0008c2bd) list_single_dyc_row_text_pane_t_ParamLimits

0xfd43,	// (0x0008c2bd) list_single_dyc_row_text_pane_t

0x3891,	// (0x0007fe0b) list_single_dyc_row_pane_g1_ParamLimits

0x3891,	// (0x0007fe0b) list_single_dyc_row_pane_g1

0x389d,	// (0x0007fe17) list_single_dyc_row_pane_g2_ParamLimits

0x389d,	// (0x0007fe17) list_single_dyc_row_pane_g2

0x38a9,	// (0x0007fe23) list_single_dyc_row_pane_g3_ParamLimits

0x38a9,	// (0x0007fe23) list_single_dyc_row_pane_g3

0x38b5,	// (0x0007fe2f) list_single_dyc_row_pane_g4_ParamLimits

0x38b5,	// (0x0007fe2f) list_single_dyc_row_pane_g4

0x0003,

0xfd4a,	// (0x0008c2c4) list_single_dyc_row_pane_g_ParamLimits

0xfd4a,	// (0x0008c2c4) list_single_dyc_row_pane_g

0x38c1,	// (0x0007fe3b) list_single_dyc_row_text_pane_ParamLimits

0x38c1,	// (0x0007fe3b) list_single_dyc_row_text_pane

0x0498,	// (0x0007ca12) bg_sp_fs_scroll_pane

0x38e0,	// (0x0007fe5a) thumb_sp_fs_scroll_pane

0x2688,	// (0x0007ec02) list_medium_line_g1_ParamLimits

0x2688,	// (0x0007ec02) list_medium_line_g1

0x38e9,	// (0x0007fe63) list_medium_line_t1_ParamLimits

0x38e9,	// (0x0007fe63) list_medium_line_t1

0x0617,	// (0x0007cb91) list_medium_line_x2_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x2_g1

0x0623,	// (0x0007cb9d) list_medium_line_x2_g2_ParamLimits

0x0623,	// (0x0007cb9d) list_medium_line_x2_g2

0x0001,

0xfd53,	// (0x0008c2cd) list_medium_line_x2_g_ParamLimits

0xfd53,	// (0x0008c2cd) list_medium_line_x2_g

0x38fe,	// (0x0007fe78) list_medium_line_x2_t1_ParamLimits

0x38fe,	// (0x0007fe78) list_medium_line_x2_t1

0x0617,	// (0x0007cb91) list_medium_line_x3_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x3_g1

0x0623,	// (0x0007cb9d) list_medium_line_x3_g2_ParamLimits

0x0623,	// (0x0007cb9d) list_medium_line_x3_g2

0x0001,

0xfd53,	// (0x0008c2cd) list_medium_line_x3_g_ParamLimits

0xfd53,	// (0x0008c2cd) list_medium_line_x3_g

0x38fe,	// (0x0007fe78) list_medium_line_x3_t1_ParamLimits

0x38fe,	// (0x0007fe78) list_medium_line_x3_t1

0x3914,	// (0x0007fe8e) thumb_sp_fs_scroll_pane_g1

0x391d,	// (0x0007fe97) thumb_sp_fs_scroll_pane_g2

0x3926,	// (0x0007fea0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd58,	// (0x0008c2d2) thumb_sp_fs_scroll_pane_g

0x3914,	// (0x0007fe8e) bg_sp_fs_scroll_pane_g1

0x391d,	// (0x0007fe97) bg_sp_fs_scroll_pane_g2

0x3926,	// (0x0007fea0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd58,	// (0x0008c2d2) bg_sp_fs_scroll_pane_g

0x0617,	// (0x0007cb91) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0617,	// (0x0007cb91) list_medium_line_x2_t3_g4_g1

0x06ab,	// (0x0007cc25) list_medium_line_x2_t3_g4_g2_ParamLimits

0x06ab,	// (0x0007cc25) list_medium_line_x2_t3_g4_g2

0x0623,	// (0x0007cb9d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0623,	// (0x0007cb9d) list_medium_line_x2_t3_g4_g3

0x062f,	// (0x0007cba9) list_medium_line_x2_t3_g4_g4_ParamLimits

0x062f,	// (0x0007cba9) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0008b86f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0008b86f) list_medium_line_x2_t3_g4_g

0xcc51,	// (0x000891cb) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcc51,	// (0x000891cb) list_medium_line_x2_t3_g4_t1

0xcc67,	// (0x000891e1) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcc67,	// (0x000891e1) list_medium_line_x2_t3_g4_t2

0x0650,	// (0x0007cbca) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0650,	// (0x0007cbca) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5f,	// (0x0008c2d9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5f,	// (0x0008c2d9) list_medium_line_x2_t3_g4_t

0x2688,	// (0x0007ec02) list_medium_line_g2_g1_ParamLimits

0x2688,	// (0x0007ec02) list_medium_line_g2_g1

0x2694,	// (0x0007ec0e) list_medium_line_g2_g2_ParamLimits

0x2694,	// (0x0007ec0e) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x0008bfa8) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x0008bfa8) list_medium_line_g2_g

0x392f,	// (0x0007fea9) list_medium_line_g2_t1_ParamLimits

0x392f,	// (0x0007fea9) list_medium_line_g2_t1

0x2688,	// (0x0007ec02) list_medium_line_t3_g2_g1_ParamLimits

0x2688,	// (0x0007ec02) list_medium_line_t3_g2_g1

0x2694,	// (0x0007ec0e) list_medium_line_t3_g2_g2_ParamLimits

0x2694,	// (0x0007ec0e) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x0008bfa8) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x0008bfa8) list_medium_line_t3_g2_g

0xcc80,	// (0x000891fa) list_medium_line_t3_g2_t1_ParamLimits

0xcc80,	// (0x000891fa) list_medium_line_t3_g2_t1

0xcc9a,	// (0x00089214) list_medium_line_t3_g2_t2_ParamLimits

0xcc9a,	// (0x00089214) list_medium_line_t3_g2_t2

0xccb0,	// (0x0008922a) list_medium_line_t3_g2_t3_ParamLimits

0xccb0,	// (0x0008922a) list_medium_line_t3_g2_t3

0x0002,

0xfd66,	// (0x0008c2e0) list_medium_line_t3_g2_t_ParamLimits

0xfd66,	// (0x0008c2e0) list_medium_line_t3_g2_t

0x3709,	// (0x0007fc83) list_medium_line_right_icon_g1

0x3944,	// (0x0007febe) list_medium_line_right_icon_t1

0x2688,	// (0x0007ec02) list_medium_line_t2_g1_ParamLimits

0x2688,	// (0x0007ec02) list_medium_line_t2_g1

0xccc7,	// (0x00089241) list_medium_line_t2_t1_ParamLimits

0xccc7,	// (0x00089241) list_medium_line_t2_t1

0xcce1,	// (0x0008925b) list_medium_line_t2_t2_ParamLimits

0xcce1,	// (0x0008925b) list_medium_line_t2_t2

0x0001,

0xfd6d,	// (0x0008c2e7) list_medium_line_t2_t_ParamLimits

0xfd6d,	// (0x0008c2e7) list_medium_line_t2_t

0x2688,	// (0x0007ec02) list_medium_line_t3_g1_ParamLimits

0x2688,	// (0x0007ec02) list_medium_line_t3_g1

0xccf6,	// (0x00089270) list_medium_line_t3_t1_ParamLimits

0xccf6,	// (0x00089270) list_medium_line_t3_t1

0xcd0d,	// (0x00089287) list_medium_line_t3_t2_ParamLimits

0xcd0d,	// (0x00089287) list_medium_line_t3_t2

0xcd22,	// (0x0008929c) list_medium_line_t3_t3_ParamLimits

0xcd22,	// (0x0008929c) list_medium_line_t3_t3

0x0002,

0xfd72,	// (0x0008c2ec) list_medium_line_t3_t_ParamLimits

0xfd72,	// (0x0008c2ec) list_medium_line_t3_t

0x2688,	// (0x0007ec02) list_medium_line_g3_g1_ParamLimits

0x2688,	// (0x0007ec02) list_medium_line_g3_g1

0x3952,	// (0x0007fecc) list_medium_line_g3_g2_ParamLimits

0x3952,	// (0x0007fecc) list_medium_line_g3_g2

0x2694,	// (0x0007ec0e) list_medium_line_g3_g3_ParamLimits

0x2694,	// (0x0007ec0e) list_medium_line_g3_g3

0x0002,

0xfd79,	// (0x0008c2f3) list_medium_line_g3_g_ParamLimits

0xfd79,	// (0x0008c2f3) list_medium_line_g3_g

0x395e,	// (0x0007fed8) list_medium_line_g3_t1_ParamLimits

0x395e,	// (0x0007fed8) list_medium_line_g3_t1

0x2688,	// (0x0007ec02) list_medium_line_t2_g3_g1_ParamLimits

0x2688,	// (0x0007ec02) list_medium_line_t2_g3_g1

0x3952,	// (0x0007fecc) list_medium_line_t2_g3_g2_ParamLimits

0x3952,	// (0x0007fecc) list_medium_line_t2_g3_g2

0x2694,	// (0x0007ec0e) list_medium_line_t2_g3_g3_ParamLimits

0x2694,	// (0x0007ec0e) list_medium_line_t2_g3_g3

0x0002,

0xfd79,	// (0x0008c2f3) list_medium_line_t2_g3_g_ParamLimits

0xfd79,	// (0x0008c2f3) list_medium_line_t2_g3_g

0xcd34,	// (0x000892ae) list_medium_line_t2_g3_t1_ParamLimits

0xcd34,	// (0x000892ae) list_medium_line_t2_g3_t1

0xcd4b,	// (0x000892c5) list_medium_line_t2_g3_t2_ParamLimits

0xcd4b,	// (0x000892c5) list_medium_line_t2_g3_t2

0x0001,

0xfd80,	// (0x0008c2fa) list_medium_line_t2_g3_t_ParamLimits

0xfd80,	// (0x0008c2fa) list_medium_line_t2_g3_t

0x2688,	// (0x0007ec02) list_medium_line_t3_g3_g1_ParamLimits

0x2688,	// (0x0007ec02) list_medium_line_t3_g3_g1

0x3952,	// (0x0007fecc) list_medium_line_t3_g3_g2_ParamLimits

0x3952,	// (0x0007fecc) list_medium_line_t3_g3_g2

0x2694,	// (0x0007ec0e) list_medium_line_t3_g3_g3_ParamLimits

0x2694,	// (0x0007ec0e) list_medium_line_t3_g3_g3

0x0002,

0xfd79,	// (0x0008c2f3) list_medium_line_t3_g3_g_ParamLimits

0xfd79,	// (0x0008c2f3) list_medium_line_t3_g3_g

0xcd60,	// (0x000892da) list_medium_line_t3_g3_t1_ParamLimits

0xcd60,	// (0x000892da) list_medium_line_t3_g3_t1

0xcd74,	// (0x000892ee) list_medium_line_t3_g3_t2_ParamLimits

0xcd74,	// (0x000892ee) list_medium_line_t3_g3_t2

0xcd86,	// (0x00089300) list_medium_line_t3_g3_t3_ParamLimits

0xcd86,	// (0x00089300) list_medium_line_t3_g3_t3

0x0002,

0xfd85,	// (0x0008c2ff) list_medium_line_t3_g3_t_ParamLimits

0xfd85,	// (0x0008c2ff) list_medium_line_t3_g3_t

0x3839,	// (0x0007fdb3) list_medium_line_right_iconx2_g1

0x3709,	// (0x0007fc83) list_medium_line_right_iconx2_g2

0x0001,

0xfd8c,	// (0x0008c306) list_medium_line_right_iconx2_g

0x3973,	// (0x0007feed) list_medium_line_right_iconx2_t1

0x3839,	// (0x0007fdb3) list_medium_line_t2_right_iconx2_g1

0x3709,	// (0x0007fc83) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8c,	// (0x0008c306) list_medium_line_t2_right_iconx2_g

0xcd9a,	// (0x00089314) list_medium_line_t2_right_iconx2_t1

0xcdaa,	// (0x00089324) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd91,	// (0x0008c30b) list_medium_line_t2_right_iconx2_t

0x3981,	// (0x0007fefb) list_medium_line_x4_t4_t1

0xcdb8,	// (0x00089332) list_medium_line_x4_t4_t2

0xcdc8,	// (0x00089342) list_medium_line_x4_t4_t3

0xcdd8,	// (0x00089352) list_medium_line_x4_t4_t4

0x0003,

0xfd96,	// (0x0008c310) list_medium_line_x4_t4_t

0xce11,	// (0x0008938b) tport_appsw_pane_ParamLimits

0xce11,	// (0x0008938b) tport_appsw_pane

0xce1f,	// (0x00089399) tport_contact_pane_ParamLimits

0xce1f,	// (0x00089399) tport_contact_pane

0xce2d,	// (0x000893a7) tport_listscroll_pane_ParamLimits

0xce2d,	// (0x000893a7) tport_listscroll_pane

0xce3b,	// (0x000893b5) cell_tport_appsw_pane_ParamLimits

0xce3b,	// (0x000893b5) cell_tport_appsw_pane

0x1fd3,	// (0x0007e54d) tport_appsw_pane_g1_ParamLimits

0x1fd3,	// (0x0007e54d) tport_appsw_pane_g1

0x398f,	// (0x0007ff09) tport_contact_pane_g1

0x3998,	// (0x0007ff12) tport_contact_pane_t1

0x39a6,	// (0x0007ff20) tport_contact_pane_t2

0x0001,

0xfd9f,	// (0x0008c319) tport_contact_pane_t

0x39b4,	// (0x0007ff2e) list_tport_pane

0x39bd,	// (0x0007ff37) scroll_pane_cp_030

0xce66,	// (0x000893e0) cell_tport_appsw_pane_g1

0x39d6,	// (0x0007ff50) cell_tport_appsw_pane_t1

0x0498,	// (0x0007ca12) grid_highlight_pane_cp019

0xce76,	// (0x000893f0) list_tport_double_graphic_pane_ParamLimits

0xce76,	// (0x000893f0) list_tport_double_graphic_pane

0xf0e1,	// (0x0008b65b) list_highlight_pane_cp023_ParamLimits

0xf0e1,	// (0x0008b65b) list_highlight_pane_cp023

0xce87,	// (0x00089401) list_tport_double_graphic_pane_g1_ParamLimits

0xce87,	// (0x00089401) list_tport_double_graphic_pane_g1

0xce94,	// (0x0008940e) list_tport_double_graphic_pane_t1_ParamLimits

0xce94,	// (0x0008940e) list_tport_double_graphic_pane_t1

0xcea9,	// (0x00089423) list_tport_double_graphic_pane_t2_ParamLimits

0xcea9,	// (0x00089423) list_tport_double_graphic_pane_t2

0x0001,

0xfdab,	// (0x0008c325) list_tport_double_graphic_pane_t_ParamLimits

0xfdab,	// (0x0008c325) list_tport_double_graphic_pane_t

0x0498,	// (0x0007ca12) main_cale_note_pane

0xadf8,	// (0x00087372) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xadf8,	// (0x00087372) cell_vitu2_function_top_wide_pane_cp01

0xc643,	// (0x00088bbd) wait_bar_pane_cp05_ParamLimits

0x0498,	// (0x0007ca12) listscroll_cmail_pane

0x39ec,	// (0x0007ff66) list_cmail_pane

0xcec5,	// (0x0008943f) list_cmail_body_pane

0xceda,	// (0x00089454) list_single_cmail_header_caption_pane

0xcef4,	// (0x0008946e) list_single_cmail_header_detail_pane_ParamLimits

0xcef4,	// (0x0008946e) list_single_cmail_header_detail_pane

0xcf23,	// (0x0008949d) list_single_cmail_header_caption_pane_t1

0xcf33,	// (0x000894ad) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcf33,	// (0x000894ad) list_single_cmail_header_detail_pane_g1

0x48a3,	// (0x00080e1d) list_single_cmail_header_detail_pane_g2_ParamLimits

0x48a3,	// (0x00080e1d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb0,	// (0x0008c32a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb0,	// (0x0008c32a) list_single_cmail_header_detail_pane_g

0x3a19,	// (0x0007ff93) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3a19,	// (0x0007ff93) list_single_cmail_header_detail_pane_t1

0x3a57,	// (0x0007ffd1) list_single_cmail_header_editor_pane_bg_ParamLimits

0x3a57,	// (0x0007ffd1) list_single_cmail_header_editor_pane_bg

0x326d,	// (0x0007f7e7) list_cmail_body_pane_g1

0x3a69,	// (0x0007ffe3) list_cmail_body_pane_t1

0x2435,	// (0x0007e9af) list_single_cmail_header_editor_pane_bg_g1

0xe66f,	// (0x0008abe9) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2445,	// (0x0007e9bf) list_single_cmail_header_editor_pane_bg_g1_copy2

0x243d,	// (0x0007e9b7) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2680,	// (0x0007ebfa) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2465,	// (0x0007e9df) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2455,	// (0x0007e9cf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x245d,	// (0x0007e9d7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe64f,	// (0x0008abc9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcf71,	// (0x000894eb) calenote_gesture_pane_ParamLimits

0xcf71,	// (0x000894eb) calenote_gesture_pane

0xcf8b,	// (0x00089505) calenote_window_pane_ParamLimits

0xcf8b,	// (0x00089505) calenote_window_pane

0x3a77,	// (0x0007fff1) popup_note_window_cp01

0xcfa3,	// (0x0008951d) calenote_swipe_1_pane_ParamLimits

0xcfa3,	// (0x0008951d) calenote_swipe_1_pane

0xc9eb,	// (0x00088f65) calenote_swipe_2_pane_ParamLimits

0xc9eb,	// (0x00088f65) calenote_swipe_2_pane

0x3608,	// (0x0007fb82) calenote_swipe_1_pane_g1_ParamLimits

0x3608,	// (0x0007fb82) calenote_swipe_1_pane_g1

0x3615,	// (0x0007fb8f) calenote_swipe_1_pane_g2_ParamLimits

0x3615,	// (0x0007fb8f) calenote_swipe_1_pane_g2

0x0001,

0xfcdf,	// (0x0008c259) calenote_swipe_1_pane_g_ParamLimits

0xfcdf,	// (0x0008c259) calenote_swipe_1_pane_g

0x3a89,	// (0x00080003) calenote_swipe_1_pane_t1_ParamLimits

0x3a89,	// (0x00080003) calenote_swipe_1_pane_t1

0x3608,	// (0x0007fb82) calenote_swipe_2_pane_g1_ParamLimits

0x3608,	// (0x0007fb82) calenote_swipe_2_pane_g1

0x3aa8,	// (0x00080022) calenote_swipe_2_pane_g2_ParamLimits

0x3aa8,	// (0x00080022) calenote_swipe_2_pane_g2

0x0001,

0xfdbc,	// (0x0008c336) calenote_swipe_2_pane_g_ParamLimits

0xfdbc,	// (0x0008c336) calenote_swipe_2_pane_g

0x3ab4,	// (0x0008002e) calenote_swipe_2_pane_t1_ParamLimits

0x3ab4,	// (0x0008002e) calenote_swipe_2_pane_t1

0x0498,	// (0x0007ca12) main_mup_navstr_pane

0x9baa,	// (0x00086124) main_mup3_pane_t7_ParamLimits

0x9baa,	// (0x00086124) main_mup3_pane_t7

0xa579,	// (0x00086af3) main_mp4_pane_g6_ParamLimits

0xa579,	// (0x00086af3) main_mp4_pane_g6

0xa8e9,	// (0x00086e63) main_image3_pane_t4_ParamLimits

0xa8e9,	// (0x00086e63) main_image3_pane_t4

0xcfb6,	// (0x00089530) popup_navstr_preview_pane_ParamLimits

0xcfb6,	// (0x00089530) popup_navstr_preview_pane

0xcfc2,	// (0x0008953c) scroll_navstr_pane_ParamLimits

0xcfc2,	// (0x0008953c) scroll_navstr_pane

0x0498,	// (0x0007ca12) bg_popup_preview_window_pane_cp04

0x3adb,	// (0x00080055) popup_navstr_preview_pane_t1

0xcfce,	// (0x00089548) scroll_navstr_pane_g1_ParamLimits

0xcfce,	// (0x00089548) scroll_navstr_pane_g1

0xcfdb,	// (0x00089555) scroll_navstr_pane_t1_ParamLimits

0xcfdb,	// (0x00089555) scroll_navstr_pane_t1

0x3a80,	// (0x0007fffa) bg_button_pane_cp014

0x3a80,	// (0x0007fffa) bg_button_pane_cp030

0x35a9,	// (0x0007fb23) list_double_fisheye_pane_g4_ParamLimits

0x35a9,	// (0x0007fb23) list_double_fisheye_pane_g4

0x35b5,	// (0x0007fb2f) list_double_fisheye_pane_g5_ParamLimits

0x35b5,	// (0x0007fb2f) list_double_fisheye_pane_g5

0x39f4,	// (0x0007ff6e) sp_fs_scroll_pane_cp03

0x374b,	// (0x0007fcc5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3757,	// (0x0007fcd1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfc,	// (0x0008c276) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3763,	// (0x0007fcdd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcebb,	// (0x00089435) sp_fs_scroll_pane_cp02

0xe373,	// (0x0008a8ed) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe373,	// (0x0008a8ed) popup_sp_fs_calendar_preview_list_single_pane

0x0498,	// (0x0007ca12) main_cam6_pano_pane

0xf0e1,	// (0x0008b65b) main_mup3_pane_ParamLimits

0x0498,	// (0x0007ca12) main_phacti_pane

0xc514,	// (0x00088a8e) bg_button_pane_cp11

0xc52c,	// (0x00088aa6) main_mobtv_info_pane_g2_ParamLimits

0xc52c,	// (0x00088aa6) main_mobtv_info_pane_g2

0x0001,

0xfc5c,	// (0x0008c1d6) main_mobtv_info_pane_g_ParamLimits

0xfc5c,	// (0x0008c1d6) main_mobtv_info_pane_g

0xc6e0,	// (0x00088c5a) sc_clock_pane_t5_ParamLimits

0xc6e0,	// (0x00088c5a) sc_clock_pane_t5

0xc785,	// (0x00088cff) main_radioblah_pane_g1_ParamLimits

0x34fd,	// (0x0007fa77) main_radioblah_pane_t3_ParamLimits

0x34fd,	// (0x0007fa77) main_radioblah_pane_t3

0x3515,	// (0x0007fa8f) main_radioblah_pane_t4_ParamLimits

0x3515,	// (0x0007fa8f) main_radioblah_pane_t4

0xc7a3,	// (0x00088d1d) main_radioblah_text_pane_ParamLimits

0xc7a3,	// (0x00088d1d) main_radioblah_text_pane

0xc7b0,	// (0x00088d2a) main_radioblah_info_pane_g1_ParamLimits

0xc849,	// (0x00088dc3) main_radioblah_info_pane_t4_ParamLimits

0xc849,	// (0x00088dc3) main_radioblah_info_pane_t4

0xf0e1,	// (0x0008b65b) main_sp_fs_calendar_pane

0xcfed,	// (0x00089567) main_phacti_pane_g1

0xcff5,	// (0x0008956f) phacti_note_pane_ParamLimits

0xcff5,	// (0x0008956f) phacti_note_pane

0x3af2,	// (0x0008006c) phacti_term_pane_ParamLimits

0x3af2,	// (0x0008006c) phacti_term_pane

0x3b07,	// (0x00080081) phacti_note_pane_t1_ParamLimits

0x3b07,	// (0x00080081) phacti_note_pane_t1

0x3b1e,	// (0x00080098) phacti_term_pane_g1

0x3b26,	// (0x000800a0) phacti_term_pane_t1_ParamLimits

0x3b26,	// (0x000800a0) phacti_term_pane_t1

0x3b50,	// (0x000800ca) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3b58,	// (0x000800d2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc6,	// (0x0008c340) popup_sp_fs_calendar_preview_list_single_pane_g

0x3b60,	// (0x000800da) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3b60,	// (0x000800da) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3b76,	// (0x000800f0) aid_popup_sp_fs_bg_corner_pane

0x1d12,	// (0x0007e28c) popup_sp_fs_calendar_preview_bg_pane_g1

0x0498,	// (0x0007ca12) popup_sp_fs_calendar_preview_bg_pane

0x3b7e,	// (0x000800f8) popup_sp_fs_calendar_preview_list_pane

0xf0e1,	// (0x0008b65b) bg_main_sp_fs_cale_pane_ParamLimits

0xf0e1,	// (0x0008b65b) bg_main_sp_fs_cale_pane

0x3b8f,	// (0x00080109) listscroll_cale_mrui_pane_ParamLimits

0x3b8f,	// (0x00080109) listscroll_cale_mrui_pane

0x3ba3,	// (0x0008011d) listscroll_sp_fs_schedule_track_pane

0x3bac,	// (0x00080126) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3bac,	// (0x00080126) main_sp_fs_ctrlbar_pane_cp01

0x3bbd,	// (0x00080137) main_sp_fs_ribbon_pane

0x3bc5,	// (0x0008013f) popup_sp_fs_cale_preview_window

0xd034,	// (0x000895ae) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd034,	// (0x000895ae) list_single_sp_fs_schedule_track_pane

0x23b9,	// (0x0007e933) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x23b9,	// (0x0007e933) bg_sp_fs_highlight_list_pane_cp03

0xd046,	// (0x000895c0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd046,	// (0x000895c0) list_single_sp_fs_schedule_track_pane_g1

0xd052,	// (0x000895cc) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd052,	// (0x000895cc) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcb,	// (0x0008c345) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcb,	// (0x0008c345) list_single_sp_fs_schedule_track_pane_g

0xd05e,	// (0x000895d8) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd05e,	// (0x000895d8) list_single_sp_fs_schedule_track_pane_t1

0xd07c,	// (0x000895f6) sp_fs_schedule_track_pane_ParamLimits

0xd07c,	// (0x000895f6) sp_fs_schedule_track_pane

0x3bd7,	// (0x00080151) sp_fs_schedule_track_pane_g1

0x3bdf,	// (0x00080159) sp_fs_schedule_track_pane_g2

0x3be7,	// (0x00080161) sp_fs_schedule_track_pane_g3

0x3bef,	// (0x00080169) sp_fs_schedule_track_pane_g4

0x3bf7,	// (0x00080171) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd0,	// (0x0008c34a) sp_fs_schedule_track_pane_g

0x2435,	// (0x0007e9af) bg_sp_fs_schedule_viewer_highlight_g1

0xe66f,	// (0x0008abe9) bg_sp_fs_schedule_viewer_highlight_g2

0x243d,	// (0x0007e9b7) bg_sp_fs_schedule_viewer_highlight_g3

0x2445,	// (0x0007e9bf) bg_sp_fs_schedule_viewer_highlight_g4

0x2680,	// (0x0007ebfa) bg_sp_fs_schedule_viewer_highlight_g5

0x2455,	// (0x0007e9cf) bg_sp_fs_schedule_viewer_highlight_g6

0x245d,	// (0x0007e9d7) bg_sp_fs_schedule_viewer_highlight_g7

0x2465,	// (0x0007e9df) bg_sp_fs_schedule_viewer_highlight_g8

0xe64f,	// (0x0008abc9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddb,	// (0x0008c355) bg_sp_fs_schedule_viewer_highlight_g

0x0498,	// (0x0007ca12) bg_main_sp_fs_ribbon_pane

0xd08e,	// (0x00089608) main_sp_fs_ribbon_pane_g1

0x3bff,	// (0x00080179) main_sp_fs_ribbon_pane_t1

0xd097,	// (0x00089611) main_sp_fs_ribbon_pane_t2

0x3c0e,	// (0x00080188) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdee,	// (0x0008c368) main_sp_fs_ribbon_pane_t

0x3c1d,	// (0x00080197) main_sp_fs_ribbon_scheduler_pane

0x3c25,	// (0x0008019f) bg_main_sp_fs_ribbon_pane_g1

0x3c2e,	// (0x000801a8) bg_main_sp_fs_ribbon_pane_g2

0x3c37,	// (0x000801b1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf5,	// (0x0008c36f) bg_main_sp_fs_ribbon_pane_g

0x3c3f,	// (0x000801b9) main_sp_fs_ribbon_scheduler_pane_g1

0x3c48,	// (0x000801c2) main_sp_fs_ribbon_scheduler_pane_g2

0x3c51,	// (0x000801cb) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfc,	// (0x0008c376) main_sp_fs_ribbon_scheduler_pane_g

0x3c5a,	// (0x000801d4) list_cale_mrui_pane

0xd0a6,	// (0x00089620) sp_fs_scroll_pane_cp07_ParamLimits

0xd0a6,	// (0x00089620) sp_fs_scroll_pane_cp07

0xd0bc,	// (0x00089636) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd0bc,	// (0x00089636) bg_sp_fs_schedule_viewer_highlight

0x3c63,	// (0x000801dd) list_single_sp_fs_schedule_track_pane_cp01

0x3c6b,	// (0x000801e5) list_sp_fs_schedule_track_pane

0x3c73,	// (0x000801ed) sp_fs_scroll_pane_cp06_ParamLimits

0x3c73,	// (0x000801ed) sp_fs_scroll_pane_cp06

0x1d12,	// (0x0007e28c) bgmain_sp_fs_calendar_pane_g1

0xd0c9,	// (0x00089643) list_single_cale_mrui_pane_ParamLimits

0xd0c9,	// (0x00089643) list_single_cale_mrui_pane

0x3c85,	// (0x000801ff) list_single_cale_mrui_row_pane_ParamLimits

0x3c85,	// (0x000801ff) list_single_cale_mrui_row_pane

0x3c92,	// (0x0008020c) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3c92,	// (0x0008020c) list_single_cale_mrui_row_pane_g1

0x3cca,	// (0x00080244) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3cca,	// (0x00080244) list_single_cale_mrui_row_pane_t1

0xd0ed,	// (0x00089667) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd0ed,	// (0x00089667) list_single_cale_mrui_row_pane_t2

0x3cdc,	// (0x00080256) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3cdc,	// (0x00080256) list_single_cale_mrui_row_pane_t3

0x3d0b,	// (0x00080285) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3d0b,	// (0x00080285) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x0008c382) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x0008c382) list_single_cale_mrui_row_pane_t

0xd153,	// (0x000896cd) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd153,	// (0x000896cd) list_single_cmail_header_editor_pane_bg_cp01

0xd175,	// (0x000896ef) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd175,	// (0x000896ef) list_single_cmail_header_editor_pane_bg_cp02

0xd191,	// (0x0008970b) main_radioblah_text_pane_t1_ParamLimits

0xd191,	// (0x0008970b) main_radioblah_text_pane_t1

0x3d3a,	// (0x000802b4) cam6_indi_pane_cp01

0x3d42,	// (0x000802bc) cam6_mode_pane_cp01

0x3d4a,	// (0x000802c4) cam6_pano_pane

0x3d53,	// (0x000802cd) cam6_zoom_pane_cp01

0x3d5d,	// (0x000802d7) cam6_pano_image_pane

0x3d66,	// (0x000802e0) cam6_pano_pane_g1

0x326d,	// (0x0007f7e7) cam6_pano_pane_g2

0x3d6f,	// (0x000802e9) cam6_pano_pane_g3

0x3d78,	// (0x000802f2) cam6_pano_pane_g4

0x4915,	// (0x00080e8f) cam6_pano_pane_g5

0x3d81,	// (0x000802fb) cam6_pano_pane_g6

0x3d89,	// (0x00080303) cam6_pano_pane_g7

0x3d91,	// (0x0008030b) cam6_pano_pane_g8

0x3d9a,	// (0x00080314) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x0008c38b) cam6_pano_pane_g

0x0498,	// (0x0007ca12) main_browser_tag_pane

0x3ad3,	// (0x0008004d) grid_navstr_albumart_pane

0x3da5,	// (0x0008031f) cell_navstr_albumart_pane_ParamLimits

0x3da5,	// (0x0008031f) cell_navstr_albumart_pane

0x3dc1,	// (0x0008033b) cell_navstr_albumart_pane_g1

0x1663,	// (0x0007dbdd) cell_navstr_albumart_pane_g2

0x1673,	// (0x0007dbed) cell_navstr_albumart_pane_g3

0x166b,	// (0x0007dbe5) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x0008c39e) cell_navstr_albumart_pane_g

0xd1ac,	// (0x00089726) bt_list_pane_ParamLimits

0xd1ac,	// (0x00089726) bt_list_pane

0xd1c5,	// (0x0008973f) bt_list_pane_t1

0xd1d4,	// (0x0008974e) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x0008c3a7) bt_list_pane_t

0x0498,	// (0x0007ca12) main_cale_prevew_pane

0xd1e3,	// (0x0008975d) popup_cale_preview_window_ParamLimits

0xd1e3,	// (0x0008975d) popup_cale_preview_window

0xf0e1,	// (0x0008b65b) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0e1,	// (0x0008b65b) bg_popup_preview_window_pane_cp05

0x3dc9,	// (0x00080343) list_cale_preview_pane_ParamLimits

0x3dc9,	// (0x00080343) list_cale_preview_pane

0xd1fe,	// (0x00089778) list_double_cale_preview_pane_ParamLimits

0xd1fe,	// (0x00089778) list_double_cale_preview_pane

0xd212,	// (0x0008978c) list_single_cale_preview_pane_ParamLimits

0xd212,	// (0x0008978c) list_single_cale_preview_pane

0xd22a,	// (0x000897a4) list_single_cale_preview_pane_g1

0xd232,	// (0x000897ac) list_single_cale_preview_pane_t1_ParamLimits

0xd232,	// (0x000897ac) list_single_cale_preview_pane_t1

0xd247,	// (0x000897c1) list_double_cale_preview_pane_g1

0xd24f,	// (0x000897c9) list_double_cale_preview_pane_t1_ParamLimits

0xd24f,	// (0x000897c9) list_double_cale_preview_pane_t1

0xd264,	// (0x000897de) list_double_cale_preview_pane_t2_ParamLimits

0xd264,	// (0x000897de) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x0008c3ac) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x0008c3ac) list_double_cale_preview_pane_t

0x0498,	// (0x0007ca12) main_ezdial_pane

0xf0e1,	// (0x0008b65b) main_sp_fs_email_pane_ParamLimits

0xca23,	// (0x00088f9d) cmail_ddmenu_btn01_pane_ParamLimits

0xca23,	// (0x00088f9d) cmail_ddmenu_btn01_pane

0xca40,	// (0x00088fba) cmail_ddmenu_btn02_pane_ParamLimits

0xca40,	// (0x00088fba) cmail_ddmenu_btn02_pane

0xca5e,	// (0x00088fd8) cmail_ddmenu_btn03_pane_ParamLimits

0xca5e,	// (0x00088fd8) cmail_ddmenu_btn03_pane

0xca8c,	// (0x00089006) main_sp_fs_ctrlbar_pane_ParamLimits

0xcaa8,	// (0x00089022) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcec5,	// (0x0008943f) list_cmail_body_pane_ParamLimits

0x3a03,	// (0x0007ff7d) bg_button_pane_cp12

0x3a0c,	// (0x0007ff86) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3a0c,	// (0x0007ff86) list_single_cmail_header_detail_pane_g3

0xcf4b,	// (0x000894c5) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcf4b,	// (0x000894c5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb7,	// (0x0008c331) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb7,	// (0x0008c331) list_single_cmail_header_detail_pane_t

0x3b3b,	// (0x000800b5) phacti_term_pane_t2_ParamLimits

0x3b3b,	// (0x000800b5) phacti_term_pane_t2

0x0001,

0xfdc1,	// (0x0008c33b) phacti_term_pane_t_ParamLimits

0xfdc1,	// (0x0008c33b) phacti_term_pane_t

0x3dd5,	// (0x0008034f) aid_size_list_single_double

0xd27c,	// (0x000897f6) popup_ezdial_listscroll_window

0xd29c,	// (0x00089816) popup_number_entry_window_cp01

0xecb9,	// (0x0008b233) bg_popup_call_pane_cp09

0x3de1,	// (0x0008035b) ezdial_list_pane

0x3de9,	// (0x00080363) scroll_pane_cp23

0x1af1,	// (0x0007e06b) bg_button_pane_cp028_ParamLimits

0x1af1,	// (0x0007e06b) bg_button_pane_cp028

0xd2aa,	// (0x00089824) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd2aa,	// (0x00089824) cmail_ddmenu_btn01_pane_g1

0xd2ba,	// (0x00089834) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd2ba,	// (0x00089834) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x0008c3b1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x0008c3b1) cmail_ddmenu_btn01_pane_g

0x3df1,	// (0x0008036b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3df1,	// (0x0008036b) cmail_ddmenu_btn01_pane_t1

0x184a,	// (0x0007ddc4) bg_button_pane_cp029_ParamLimits

0x184a,	// (0x0007ddc4) bg_button_pane_cp029

0xd2ba,	// (0x00089834) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd2ba,	// (0x00089834) cmail_ddmenu_btn02_pane_g1

0xd2d2,	// (0x0008984c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd2d2,	// (0x0008984c) cmail_ddmenu_btn02_pane_t1

0x23b9,	// (0x0007e933) bg_button_pane_cp031_ParamLimits

0x23b9,	// (0x0007e933) bg_button_pane_cp031

0xd2ba,	// (0x00089834) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd2ba,	// (0x00089834) cmail_ddmenu_btn03_pane_g1

0xd2d2,	// (0x0008984c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd2d2,	// (0x0008984c) cmail_ddmenu_btn03_pane_t1

0xa784,	// (0x00086cfe) cell_dialer2_keypad_pane_t1_ParamLimits

0xa79e,	// (0x00086d18) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa79e,	// (0x00086d18) cell_dialer2_keypad_pane_t1_copy1

0xc3ca,	// (0x00088944) ncimui_group_button_pane

0xf0e1,	// (0x0008b65b) main_sp_fs_calendar_pane_ParamLimits

0xceda,	// (0x00089454) list_single_cmail_header_caption_pane_ParamLimits

0x3b86,	// (0x00080100) aid_recal_txt_sm_pane

0x0498,	// (0x0007ca12) mian_recal_day_pane

0x3bc5,	// (0x0008013f) popup_sp_fs_cale_preview_window_ParamLimits

0x0498,	// (0x0007ca12) list_recal_day_pane

0x3e1f,	// (0x00080399) list_single_recal_day_pane_ParamLimits

0x3e1f,	// (0x00080399) list_single_recal_day_pane

0x3e31,	// (0x000803ab) list_single_recal_day_pane_g1_ParamLimits

0x3e31,	// (0x000803ab) list_single_recal_day_pane_g1

0x3e3d,	// (0x000803b7) list_single_recal_day_pane_g2_ParamLimits

0x3e3d,	// (0x000803b7) list_single_recal_day_pane_g2

0x3e49,	// (0x000803c3) list_single_recal_day_pane_g3_ParamLimits

0x3e49,	// (0x000803c3) list_single_recal_day_pane_g3

0xd2f6,	// (0x00089870) list_single_recal_day_pane_g4_ParamLimits

0xd2f6,	// (0x00089870) list_single_recal_day_pane_g4

0x3e55,	// (0x000803cf) list_single_recal_day_pane_g5_ParamLimits

0x3e55,	// (0x000803cf) list_single_recal_day_pane_g5

0x3e61,	// (0x000803db) list_single_recal_day_pane_g6_ParamLimits

0x3e61,	// (0x000803db) list_single_recal_day_pane_g6

0x0005,

0xfe46,	// (0x0008c3c0) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x0008c3c0) list_single_recal_day_pane_g

0x3e6d,	// (0x000803e7) list_single_recal_day_pane_t1

0x3e7b,	// (0x000803f5) list_single_recal_day_pane_t2

0x0001,

0xfe53,	// (0x0008c3cd) list_single_recal_day_pane_t

0xd304,	// (0x0008987e) ncimui_query_button_pane_ParamLimits

0xd304,	// (0x0008987e) ncimui_query_button_pane

0xd314,	// (0x0008988e) ncimui_query_button_pane_t1_ParamLimits

0xd314,	// (0x0008988e) ncimui_query_button_pane_t1

0x3e89,	// (0x00080403) ncimui_query_button_pane_t2_ParamLimits

0x3e89,	// (0x00080403) ncimui_query_button_pane_t2

0x0001,

0xfe58,	// (0x0008c3d2) ncimui_query_button_pane_t_ParamLimits

0xfe58,	// (0x0008c3d2) ncimui_query_button_pane_t

0xd327,	// (0x000898a1) query_button_pane_ParamLimits

0xd327,	// (0x000898a1) query_button_pane

0x0498,	// (0x0007ca12) bg_button_pane_cp0028

0x3e9c,	// (0x00080416) query_button_pane_t1

0x8bff,	// (0x00085179) main_tport_pane_ParamLimits

0xcde8,	// (0x00089362) bg_popup_window_pane_cp01_ParamLimits

0xcde8,	// (0x00089362) bg_popup_window_pane_cp01

0xcdf5,	// (0x0008936f) heading_pane_cp08_ParamLimits

0xcdf5,	// (0x0008936f) heading_pane_cp08

0xce03,	// (0x0008937d) heading_pane_cp07_ParamLimits

0xce03,	// (0x0008937d) heading_pane_cp07

0x39ce,	// (0x0007ff48) cell_tport_appsw_pane_g2

0x0002,

0xfda4,	// (0x0008c31e) cell_tport_appsw_pane_g

0x830c,	// (0x00084886) input_candi_list_open_g1

0xe80a,	// (0x0008ad84) list_cale_time_pane_g6_ParamLimits

0xe80a,	// (0x0008ad84) list_cale_time_pane_g6

0x9664,	// (0x00085bde) aid_size_touch_calib_1_ParamLimits

0x9664,	// (0x00085bde) aid_size_touch_calib_1

0x9670,	// (0x00085bea) aid_size_touch_calib_2_ParamLimits

0x9670,	// (0x00085bea) aid_size_touch_calib_2

0x967e,	// (0x00085bf8) aid_size_touch_calib_3_ParamLimits

0x967e,	// (0x00085bf8) aid_size_touch_calib_3

0x968e,	// (0x00085c08) aid_size_touch_calib_4_ParamLimits

0x968e,	// (0x00085c08) aid_size_touch_calib_4

0x969c,	// (0x00085c16) main_touch_calib_button_group_pane_ParamLimits

0x969c,	// (0x00085c16) main_touch_calib_button_group_pane

0x96aa,	// (0x00085c24) main_touch_calib_pane_g1_ParamLimits

0x96b6,	// (0x00085c30) main_touch_calib_pane_g2_ParamLimits

0x96c2,	// (0x00085c3c) main_touch_calib_pane_g3_ParamLimits

0x96ce,	// (0x00085c48) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x0008bcfe) main_touch_calib_pane_g_ParamLimits

0x96da,	// (0x00085c54) main_touch_calib_pane_t1_ParamLimits

0x96f1,	// (0x00085c6b) main_touch_calib_pane_t2_ParamLimits

0x9708,	// (0x00085c82) main_touch_calib_pane_t3_ParamLimits

0x971c,	// (0x00085c96) main_touch_calib_pane_t4_ParamLimits

0x9732,	// (0x00085cac) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0008bd07) main_touch_calib_pane_t_ParamLimits

0x208c,	// (0x0007e606) list_single_fp_cale_pane_g3_ParamLimits

0x208c,	// (0x0007e606) list_single_fp_cale_pane_g3

0xabe0,	// (0x0008715a) bg_button_pane_cp012_ParamLimits

0xabe0,	// (0x0008715a) bg_vkb2_func_pane_cp03_ParamLimits

0xb58d,	// (0x00087b07) cell_vitu2_function_top_pane_g1_ParamLimits

0xabe0,	// (0x0008715a) bg_vkb2_func_pane_cp04_ParamLimits

0xc379,	// (0x000888f3) main_ncimui_button_group_pane_ParamLimits

0xc379,	// (0x000888f3) main_ncimui_button_group_pane

0xc3b8,	// (0x00088932) main_ncimui_pane_t3_ParamLimits

0xc3b8,	// (0x00088932) main_ncimui_pane_t3

0x3ae9,	// (0x00080063) phacti_button_group_pane

0x3dd5,	// (0x0008034f) aid_size_list_single_double_ParamLimits

0xd27c,	// (0x000897f6) popup_ezdial_listscroll_window_ParamLimits

0xd29c,	// (0x00089816) popup_number_entry_window_cp01_ParamLimits

0xd334,	// (0x000898ae) phacti_button_pane_ParamLimits

0xd334,	// (0x000898ae) phacti_button_pane

0x0498,	// (0x0007ca12) bg_button_pane_cp14

0x3eaa,	// (0x00080424) phacti_button_pane_t1

0xd345,	// (0x000898bf) main_touch_calib_button_pane_ParamLimits

0xd345,	// (0x000898bf) main_touch_calib_button_pane

0xe25d,	// (0x0008a7d7) bg_button_pane_cp18_ParamLimits

0xe25d,	// (0x0008a7d7) bg_button_pane_cp18

0x3eb8,	// (0x00080432) main_touch_calib_button_pane_t1_ParamLimits

0x3eb8,	// (0x00080432) main_touch_calib_button_pane_t1

0x3ece,	// (0x00080448) main_touch_calib_button_pane_t2_ParamLimits

0x3ece,	// (0x00080448) main_touch_calib_button_pane_t2

0x0001,

0xfe5d,	// (0x0008c3d7) main_touch_calib_button_pane_t_ParamLimits

0xfe5d,	// (0x0008c3d7) main_touch_calib_button_pane_t

0x0498,	// (0x0007ca12) cell_ncimui_button_pane

0x0498,	// (0x0007ca12) bg_button_pane_cp032

0x3eec,	// (0x00080466) cell_ncimui_button_pane_t1

0xa7fa,	// (0x00086d74) image3_infobar_pane_ParamLimits

0xa7fa,	// (0x00086d74) image3_infobar_pane

0xc702,	// (0x00088c7c) fs_bigclock_status_pane_ParamLimits

0xc702,	// (0x00088c7c) fs_bigclock_status_pane

0xc70f,	// (0x00088c89) main_fs_bigclock_clock_pane_ParamLimits

0xc70f,	// (0x00088c89) main_fs_bigclock_clock_pane

0xc71f,	// (0x00088c99) main_fs_bigclock_indi_pane_ParamLimits

0xc71f,	// (0x00088c99) main_fs_bigclock_indi_pane

0xc751,	// (0x00088ccb) main_fs_bigclock_swipe_pane_ParamLimits

0xc751,	// (0x00088ccb) main_fs_bigclock_swipe_pane

0x0498,	// (0x0007ca12) main_fs_clock_dumped_data

0x337a,	// (0x0007f8f4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x337a,	// (0x0007f8f4) list_single_fs_bigclock_indicator_pane_g1

0x339a,	// (0x0007f914) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x339a,	// (0x0007f914) list_single_fs_bigclock_indicator_pane_g2

0x33b4,	// (0x0007f92e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x33b4,	// (0x0007f92e) list_single_fs_bigclock_indicator_pane_g3

0x33d0,	// (0x0007f94a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x33d0,	// (0x0007f94a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc90,	// (0x0008c20a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc90,	// (0x0008c20a) list_single_fs_bigclock_indicator_pane_g

0x33f6,	// (0x0007f970) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x33f6,	// (0x0007f970) list_single_fs_bigclock_indicator_pane_t1

0x341e,	// (0x0007f998) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x341e,	// (0x0007f998) list_single_fs_bigclock_indicator_pane_t2

0x3446,	// (0x0007f9c0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3446,	// (0x0007f9c0) list_single_fs_bigclock_indicator_pane_t3

0x3470,	// (0x0007f9ea) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3470,	// (0x0007f9ea) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc9b,	// (0x0008c215) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc9b,	// (0x0008c215) list_single_fs_bigclock_indicator_pane_t

0x3efa,	// (0x00080474) image3_infobar_fav_pane_ParamLimits

0x3efa,	// (0x00080474) image3_infobar_fav_pane

0x3f0a,	// (0x00080484) image3_infobar_loc_pane_ParamLimits

0x3f0a,	// (0x00080484) image3_infobar_loc_pane

0x3f20,	// (0x0008049a) image3_infobar_time_pane_ParamLimits

0x3f20,	// (0x0008049a) image3_infobar_time_pane

0x1d12,	// (0x0007e28c) image3_infobar_time_pane_g1

0x3f30,	// (0x000804aa) image3_infobar_time_pane_t1

0x1d12,	// (0x0007e28c) image3_infobar_loc_pane_g1

0x3f3e,	// (0x000804b8) image3_infobar_loc_pane_g2

0x0001,

0xfe62,	// (0x0008c3dc) image3_infobar_loc_pane_g

0x3f46,	// (0x000804c0) image3_infobar_loc_pane_t1

0x1d12,	// (0x0007e28c) image3_infobar_fav_pane_g1

0x3f54,	// (0x000804ce) image3_infobar_fav_pane_g2

0x0001,

0xfe67,	// (0x0008c3e1) image3_infobar_fav_pane_g

0x3f5c,	// (0x000804d6) fs_bigclock_status_battery_pane

0x3f65,	// (0x000804df) fs_bigclock_status_signal_pane

0x3f6e,	// (0x000804e8) fs_bigclock_status_title_pane

0x3f77,	// (0x000804f1) fs_bigclock_status_signal_pane_g1

0x3f80,	// (0x000804fa) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6c,	// (0x0008c3e6) fs_bigclock_status_signal_pane_g

0x3f88,	// (0x00080502) fs_bigclock_status_battery_pane_g1

0x3f91,	// (0x0008050b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe71,	// (0x0008c3eb) fs_bigclock_status_battery_pane_g

0x3f99,	// (0x00080513) fs_bigclock_status_title_pane_t1

0x1d12,	// (0x0007e28c) main_fs_bigclock_clock_pane_g1

0x3fa7,	// (0x00080521) main_fs_bigclock_clock_pane_g2

0x3fa7,	// (0x00080521) main_fs_bigclock_clock_pane_g3

0x3fa7,	// (0x00080521) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe76,	// (0x0008c3f0) main_fs_bigclock_clock_pane_g

0x3fb3,	// (0x0008052d) main_fs_bigclock_clock_pane_t1

0x3fc1,	// (0x0008053b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7f,	// (0x0008c3f9) main_fs_bigclock_clock_pane_t

0x3fd0,	// (0x0008054a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3fd0,	// (0x0008054a) list_single_fs_bigclock_indicator_pane

0xd357,	// (0x000898d1) list_single_fs_bigclock_pane_ParamLimits

0xd357,	// (0x000898d1) list_single_fs_bigclock_pane

0x3fea,	// (0x00080564) main_fs_bigclock_indicator_pane_t1

0x3ff9,	// (0x00080573) list_single_fs_bigclock_pane_g1

0x4001,	// (0x0008057b) list_single_fs_bigclock_pane_t1

0x1d12,	// (0x0007e28c) main_fs_bigclock_swipe_pane_g1

0x403f,	// (0x000805b9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe90,	// (0x0008c40a) main_fs_bigclock_swipe_pane_g

0x4047,	// (0x000805c1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4047,	// (0x000805c1) main_fs_bigclock_swipe_pane_t1

0x7a82,	// (0x00083ffc) call_type_pane_ParamLimits

0x0498,	// (0x0007ca12) main_btmg_pane

0x3cbe,	// (0x00080238) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3cbe,	// (0x00080238) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe03,	// (0x0008c37d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe03,	// (0x0008c37d) list_single_cale_mrui_row_pane_g

0x3e0f,	// (0x00080389) list_recal_vselct_arw_lo_pane

0x3e17,	// (0x00080391) list_recal_vselct_arw_up_pane

0x29d7,	// (0x0007ef51) list_recal_vselct_pane

0x4064,	// (0x000805de) btmg_button_pane

0xd3ba,	// (0x00089934) main_btmg_pane_g1

0x0498,	// (0x0007ca12) bg_button_pane_cp044

0x406e,	// (0x000805e8) btmg_button_pane_t1

0x1842,	// (0x0007ddbc) aid_listscroll_gen

0xf0e1,	// (0x0008b65b) main_cntbar_detail_pane

0x39e4,	// (0x0007ff5e) list_cmail_folder_pane

0x39f4,	// (0x0007ff6e) sp_fs_scroll_pane_cp03_ParamLimits

0x43eb,	// (0x00080965) list_single_fs_dyc_pane_cp01_ParamLimits

0x43eb,	// (0x00080965) list_single_fs_dyc_pane_cp01

0x407c,	// (0x000805f6) aid_size_cmail_indent

0x4085,	// (0x000805ff) list_single_dyc_row_pane_cp01

0xd3e2,	// (0x0008995c) cntbar_detail_list_pane_ParamLimits

0xd3e2,	// (0x0008995c) cntbar_detail_list_pane

0xd422,	// (0x0008999c) main_cntbar_detail_cont_pane_ParamLimits

0xd422,	// (0x0008999c) main_cntbar_detail_cont_pane

0x7a1c,	// (0x00083f96) scroll_pane_cp032_ParamLimits

0x7a1c,	// (0x00083f96) scroll_pane_cp032

0xd42e,	// (0x000899a8) cntbar_detail_list_event_pane_ParamLimits

0xd42e,	// (0x000899a8) cntbar_detail_list_event_pane

0xd3f0,	// (0x0008996a) cntbar_detail_list_shct_pane

0xe6bd,	// (0x0008ac37) aid_list_gen

0x408e,	// (0x00080608) aid_scroll

0x4097,	// (0x00080611) aid_size_touch_scroll_bar

0x40a0,	// (0x0008061a) aid_list_double

0x40a9,	// (0x00080623) aid_list_single

0xd43e,	// (0x000899b8) aid_list_single_lg

0x40b2,	// (0x0008062c) aid_list_z_g_a_sm

0x48af,	// (0x00080e29) aid_list_z_g_d

0x40ba,	// (0x00080634) aid_txt_z_prm

0x40c8,	// (0x00080642) aid_txt_z_prm_cp01

0x40d6,	// (0x00080650) aid_txt_z_sec

0xd447,	// (0x000899c1) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd447,	// (0x000899c1) main_cntbar_detail_cont_pane_g1

0xd454,	// (0x000899ce) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd454,	// (0x000899ce) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe95,	// (0x0008c40f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe95,	// (0x0008c40f) main_cntbar_detail_cont_pane_g

0x40e4,	// (0x0008065e) main_cntbar_detail_cont_pane_t1

0x40f2,	// (0x0008066c) main_cntbar_detail_cont_pane_t2

0x4100,	// (0x0008067a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9a,	// (0x0008c414) main_cntbar_detail_cont_pane_t

0xd460,	// (0x000899da) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd460,	// (0x000899da) cell_cntbar_detail_list_shct_pane

0x410e,	// (0x00080688) cntbar_detail_list_shct_pane_g1

0x4117,	// (0x00080691) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea1,	// (0x0008c41b) cntbar_detail_list_shct_pane_g

0xd474,	// (0x000899ee) cntbar_detail_list_event_pane_g1_ParamLimits

0xd474,	// (0x000899ee) cntbar_detail_list_event_pane_g1

0xd480,	// (0x000899fa) cntbar_detail_list_event_pane_g2_ParamLimits

0xd480,	// (0x000899fa) cntbar_detail_list_event_pane_g2

0x0005,

0xfea6,	// (0x0008c420) cntbar_detail_list_event_pane_g_ParamLimits

0xfea6,	// (0x0008c420) cntbar_detail_list_event_pane_g

0xd4ee,	// (0x00089a68) cntbar_detail_list_event_pane_t1_ParamLimits

0xd4ee,	// (0x00089a68) cntbar_detail_list_event_pane_t1

0xd503,	// (0x00089a7d) cntbar_detail_list_event_pane_t2_ParamLimits

0xd503,	// (0x00089a7d) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb3,	// (0x0008c42d) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb3,	// (0x0008c42d) cntbar_detail_list_event_pane_t

0x1d12,	// (0x0007e28c) cell_cntbar_detail_list_shct_pane_g1

0x7e1a,	// (0x00084394) navi_pane_mv_g3

0xf0e1,	// (0x0008b65b) main_cntbar_detail_pane_ParamLimits

0x0498,	// (0x0007ca12) main_notif_wgt_pane

0xa4ce,	// (0x00086a48) aid_tch_main_mp4_pane_g4

0xa6e3,	// (0x00086c5d) popup_slider_window_cp02

0x3e06,	// (0x00080380) list_recal_day_event_pane

0xd3c2,	// (0x0008993c) cntbar_detail_btn_pane_ParamLimits

0xd3c2,	// (0x0008993c) cntbar_detail_btn_pane

0xd3d2,	// (0x0008994c) cntbar_detail_btn_pane_cp01_ParamLimits

0xd3d2,	// (0x0008994c) cntbar_detail_btn_pane_cp01

0xd3f0,	// (0x0008996a) cntbar_detail_list_shct_pane_ParamLimits

0xd3fc,	// (0x00089976) cntbar_detail_pane_g1_ParamLimits

0xd3fc,	// (0x00089976) cntbar_detail_pane_g1

0xd40c,	// (0x00089986) cntbar_detail_pane_t1_ParamLimits

0xd40c,	// (0x00089986) cntbar_detail_pane_t1

0xd48c,	// (0x00089a06) cntbar_detail_list_event_pane_g3_ParamLimits

0xd48c,	// (0x00089a06) cntbar_detail_list_event_pane_g3

0xd4a4,	// (0x00089a1e) cntbar_detail_list_event_pane_g4_ParamLimits

0xd4a4,	// (0x00089a1e) cntbar_detail_list_event_pane_g4

0xd4bc,	// (0x00089a36) cntbar_detail_list_event_pane_g5_ParamLimits

0xd4bc,	// (0x00089a36) cntbar_detail_list_event_pane_g5

0xd4d4,	// (0x00089a4e) cntbar_detail_list_event_pane_g6_ParamLimits

0xd4d4,	// (0x00089a4e) cntbar_detail_list_event_pane_g6

0xd518,	// (0x00089a92) cntbar_detail_list_event_pane_t3_ParamLimits

0xd518,	// (0x00089a92) cntbar_detail_list_event_pane_t3

0xd52a,	// (0x00089aa4) popup_notif_wgt_window_ParamLimits

0xd52a,	// (0x00089aa4) popup_notif_wgt_window

0xd53a,	// (0x00089ab4) popup_submenu_window_cp01_ParamLimits

0xd53a,	// (0x00089ab4) popup_submenu_window_cp01

0xecb9,	// (0x0008b233) bg_popup_window_pane_cp10

0x4120,	// (0x0008069a) listscroll_notif_wgt_pane

0x412a,	// (0x000806a4) list_notif_wgt_window

0x4133,	// (0x000806ad) scroll_pane_cp033

0x413c,	// (0x000806b6) list_notif_wgt_row_pane_ParamLimits

0x413c,	// (0x000806b6) list_notif_wgt_row_pane

0x4150,	// (0x000806ca) aid_size_list_notif_wgt_del

0x4159,	// (0x000806d3) list_notif_wgt_row_pane_g1

0x4161,	// (0x000806db) list_notif_wgt_row_pane_g2

0x4169,	// (0x000806e3) list_notif_wgt_row_pane_g3

0x0002,

0xfeba,	// (0x0008c434) list_notif_wgt_row_pane_g

0x4172,	// (0x000806ec) list_notif_wgt_row_pane_t1

0x4180,	// (0x000806fa) list_notif_wgt_row_pane_t2

0x418e,	// (0x00080708) list_notif_wgt_row_pane_t3

0x0002,

0xfec1,	// (0x0008c43b) list_notif_wgt_row_pane_t

0x26a0,	// (0x0007ec1a) list_recal_day_event_pane_g1

0x419c,	// (0x00080716) list_recal_day_event_pane_t1

0x0498,	// (0x0007ca12) bg_button_pane_cp045

0x41ab,	// (0x00080725) cntbar_detail_btn_pane_t1

0x184a,	// (0x0007ddc4) main_callh_pane_ParamLimits

0x184a,	// (0x0007ddc4) main_callh_pane

0x0498,	// (0x0007ca12) main_coverflow0_pane

0x0498,	// (0x0007ca12) main_wgtman_pane

0xc769,	// (0x00088ce3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc769,	// (0x00088ce3) main_fs_bigclock_unlock_btn_pane

0x39c6,	// (0x0007ff40) bg_button_pane_cp16

0xce6e,	// (0x000893e8) cell_tport_appsw_pane_g3

0xd548,	// (0x00089ac2) cf0_flow_pane_ParamLimits

0xd548,	// (0x00089ac2) cf0_flow_pane

0x41b9,	// (0x00080733) listscroll_cf0_pane

0x41c2,	// (0x0008073c) main_cf0_pane_g1

0xd557,	// (0x00089ad1) main_cf0_pane_t1_ParamLimits

0xd557,	// (0x00089ad1) main_cf0_pane_t1

0xd56b,	// (0x00089ae5) main_cf0_pane_t2_ParamLimits

0xd56b,	// (0x00089ae5) main_cf0_pane_t2

0x0001,

0xfec8,	// (0x0008c442) main_cf0_pane_t_ParamLimits

0xfec8,	// (0x0008c442) main_cf0_pane_t

0x41cc,	// (0x00080746) scroll_pane_cp11

0xd57f,	// (0x00089af9) cf0_flow_pane_g1

0xd587,	// (0x00089b01) cf0_flow_pane_g2

0x0001,

0xfecd,	// (0x0008c447) cf0_flow_pane_g

0xd58f,	// (0x00089b09) cf0_flow_pane_t1

0x0498,	// (0x0007ca12) main_call6_pane

0x0498,	// (0x0007ca12) main_calllock_pane

0xd59d,	// (0x00089b17) call6_btn_grp_pane_ParamLimits

0xd59d,	// (0x00089b17) call6_btn_grp_pane

0xd5ac,	// (0x00089b26) call6_pane_g1_ParamLimits

0xd5ac,	// (0x00089b26) call6_pane_g1

0xd5bc,	// (0x00089b36) popup_call6_1st_window_ParamLimits

0xd5bc,	// (0x00089b36) popup_call6_1st_window

0xd5ca,	// (0x00089b44) popup_call6_2nd_window_ParamLimits

0xd5ca,	// (0x00089b44) popup_call6_2nd_window

0xd5d8,	// (0x00089b52) cell_call6_btn_pane_ParamLimits

0xd5d8,	// (0x00089b52) cell_call6_btn_pane

0xecb9,	// (0x0008b233) bg_popup_call2_in_pane_cp03

0x41d7,	// (0x00080751) popup_call6_1st_window_g1

0x41df,	// (0x00080759) popup_call6_1st_window_g2

0x41e7,	// (0x00080761) popup_call6_1st_window_g3

0x0002,

0xfed2,	// (0x0008c44c) popup_call6_1st_window_g

0x41ef,	// (0x00080769) popup_call6_1st_window_t1

0x41fe,	// (0x00080778) popup_call6_1st_window_t2

0x420e,	// (0x00080788) popup_call6_1st_window_t3

0x0002,

0xfed9,	// (0x0008c453) popup_call6_1st_window_t

0xecb9,	// (0x0008b233) bg_popup_call2_in_pane_cp04

0x41d7,	// (0x00080751) popup_call6_2nd_window_g1

0x41df,	// (0x00080759) popup_call6_2nd_window_g2

0x41e7,	// (0x00080761) popup_call6_2nd_window_g3

0x0002,

0xfed2,	// (0x0008c44c) popup_call6_2nd_window_g

0x41ef,	// (0x00080769) popup_call6_2nd_window_t1

0x0498,	// (0x0007ca12) bg_button_pane_cp15

0x421e,	// (0x00080798) cell_call6_btn_pane_g1

0x4227,	// (0x000807a1) cell_call6_btn_pane_t1

0xd5e7,	// (0x00089b61) listscroll_wgtman_pane_ParamLimits

0xd5e7,	// (0x00089b61) listscroll_wgtman_pane

0xd605,	// (0x00089b7f) wgtman_btn_pane_ParamLimits

0xd605,	// (0x00089b7f) wgtman_btn_pane

0xeb7f,	// (0x0008b0f9) aid_scroll_copy1

0x4236,	// (0x000807b0) list_wgtman_pane

0xd63a,	// (0x00089bb4) wgtman_btn_pane_g1_ParamLimits

0xd63a,	// (0x00089bb4) wgtman_btn_pane_g1

0xd662,	// (0x00089bdc) wgtman_btn_pane_t1_ParamLimits

0xd662,	// (0x00089bdc) wgtman_btn_pane_t1

0x4240,	// (0x000807ba) wgtman_btn_pane_t2_ParamLimits

0x4240,	// (0x000807ba) wgtman_btn_pane_t2

0x0001,

0xfee0,	// (0x0008c45a) wgtman_btn_pane_t_ParamLimits

0xfee0,	// (0x0008c45a) wgtman_btn_pane_t

0x4257,	// (0x000807d1) listrow_wgtman_pane_ParamLimits

0x4257,	// (0x000807d1) listrow_wgtman_pane

0x426b,	// (0x000807e5) listrow_wgtman_pane_g1

0xd699,	// (0x00089c13) listrow_wgtman_pane_g2

0x0001,

0xfee5,	// (0x0008c45f) listrow_wgtman_pane_g

0x4274,	// (0x000807ee) listrow_wgtman_pane_t1

0x4282,	// (0x000807fc) listrow_wgtman_pane_t2

0x0001,

0xfeea,	// (0x0008c464) listrow_wgtman_pane_t

0x4290,	// (0x0008080a) wait_bar_pane_cp09

0x4298,	// (0x00080812) main_calllock_btn_pane

0x42a2,	// (0x0008081c) main_calllock_pane_g1

0x0498,	// (0x0007ca12) bg_button_pane_cp17

0x42ae,	// (0x00080828) main_calllock_btn_pane_g1

0x42b7,	// (0x00080831) main_calllock_btn_pane_t1

0x0498,	// (0x0007ca12) main_dialer3_pane

0x0498,	// (0x0007ca12) main_fmrd2_pane

0x1d12,	// (0x0007e28c) main_fs_bigclock_unlock_btn_pane_g1

0x42ce,	// (0x00080848) main_fs_bigclock_unlock_btn_pane_t1

0xd6a3,	// (0x00089c1d) area_fmrd2_info_pane_ParamLimits

0xd6a3,	// (0x00089c1d) area_fmrd2_info_pane

0xd6b1,	// (0x00089c2b) area_fmrd2_visual_pane_ParamLimits

0xd6b1,	// (0x00089c2b) area_fmrd2_visual_pane

0xd6bf,	// (0x00089c39) fmrd2_indi_pane_ParamLimits

0xd6bf,	// (0x00089c39) fmrd2_indi_pane

0xd6cc,	// (0x00089c46) area_fmrd2_visual_pane_g1

0xd6d4,	// (0x00089c4e) area_fmrd2_visual_pane_t1

0xd6e4,	// (0x00089c5e) area_fmrd2_visual_pane_t2

0xd6f4,	// (0x00089c6e) area_fmrd2_visual_pane_t3

0x0002,

0xfef4,	// (0x0008c46e) area_fmrd2_visual_pane_t

0xd704,	// (0x00089c7e) area_fmrd2_info_pane_g1

0xd70c,	// (0x00089c86) area_fmrd2_info_pane_t1

0xd71c,	// (0x00089c96) area_fmrd2_info_pane_t2

0xd72c,	// (0x00089ca6) area_fmrd2_info_pane_t3

0xd73c,	// (0x00089cb6) area_fmrd2_info_pane_t4

0x0003,

0xfefb,	// (0x0008c475) area_fmrd2_info_pane_t

0xd74c,	// (0x00089cc6) fmrd2_indi_pane_t1

0xd75c,	// (0x00089cd6) fmrd2_indi_pane_t2

0xd76c,	// (0x00089ce6) fmrd2_indi_pane_t3

0x0002,

0xff04,	// (0x0008c47e) fmrd2_indi_pane_t

0x33df,	// (0x0007f959) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x33df,	// (0x0007f959) list_single_fs_bigclock_indicator_pane_g5

0x3485,	// (0x0007f9ff) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3485,	// (0x0007f9ff) list_single_fs_bigclock_indicator_pane_t5

0xd00b,	// (0x00089585) aid_cell_bcale_month_pane_ParamLimits

0xd00b,	// (0x00089585) aid_cell_bcale_month_pane

0xd017,	// (0x00089591) bcale_month_pane_ParamLimits

0xd017,	// (0x00089591) bcale_month_pane

0xd025,	// (0x0008959f) bcale_preview_pane_ParamLimits

0xd025,	// (0x0008959f) bcale_preview_pane

0x4001,	// (0x0008057b) list_single_fs_bigclock_pane_t1_ParamLimits

0x401b,	// (0x00080595) list_single_fs_bigclock_pane_t2_ParamLimits

0x401b,	// (0x00080595) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8b,	// (0x0008c405) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0008c405) list_single_fs_bigclock_pane_t

0x42c6,	// (0x00080840) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeef,	// (0x0008c469) main_fs_bigclock_unlock_btn_pane_g

0xd77c,	// (0x00089cf6) aid_dia3_key_size_ParamLimits

0xd77c,	// (0x00089cf6) aid_dia3_key_size

0xd788,	// (0x00089d02) aid_dia3_listrow_size_ParamLimits

0xd788,	// (0x00089d02) aid_dia3_listrow_size

0xd796,	// (0x00089d10) dia3_keypad_fun_pane_ParamLimits

0xd796,	// (0x00089d10) dia3_keypad_fun_pane

0xd7a6,	// (0x00089d20) dia3_keypad_num_pane_ParamLimits

0xd7a6,	// (0x00089d20) dia3_keypad_num_pane

0xd7b6,	// (0x00089d30) dia3_listscroll_pane_ParamLimits

0xd7b6,	// (0x00089d30) dia3_listscroll_pane

0xd7c6,	// (0x00089d40) dia3_numentry_pane_ParamLimits

0xd7c6,	// (0x00089d40) dia3_numentry_pane

0x42dc,	// (0x00080856) dia3_list_pane

0x42e7,	// (0x00080861) scroll_pane_cp12

0x0498,	// (0x0007ca12) bg_dia3_numentry_pane

0x42f2,	// (0x0008086c) dia3_numentry_pane_t1

0xd7d6,	// (0x00089d50) cell_dia3_key_num_pane

0xd7de,	// (0x00089d58) cell_dia3_key0_fun_pane_ParamLimits

0xd7de,	// (0x00089d58) cell_dia3_key0_fun_pane

0xd7eb,	// (0x00089d65) cell_dia3_key1_fun_pane_ParamLimits

0xd7eb,	// (0x00089d65) cell_dia3_key1_fun_pane

0xd7f8,	// (0x00089d72) dia3_listrow_pane

0x30f7,	// (0x0007f671) bg_dia3_numentry_pane_g1

0x0498,	// (0x0007ca12) bg_button_pane_cp21

0x4301,	// (0x0008087b) cell_dia3_key_num_pane_t1

0x430f,	// (0x00080889) cell_dia3_key_num_pane_t2

0x431e,	// (0x00080898) cell_dia3_key_num_pane_t3

0x432d,	// (0x000808a7) cell_dia3_key_num_pane_t4

0x0003,

0xff0b,	// (0x0008c485) cell_dia3_key_num_pane_t

0x0498,	// (0x0007ca12) bg_button_pane_cp19

0xd805,	// (0x00089d7f) cell_dia3_key0_fun_pane_g1

0x0498,	// (0x0007ca12) bg_button_pane_cp20

0xd80d,	// (0x00089d87) cell_dia3_key1_fun_pane_g1

0xd815,	// (0x00089d8f) area_left_week_number_pane

0xd81e,	// (0x00089d98) area_top_day_name_pane

0xd827,	// (0x00089da1) frame_month_view_pane

0xd831,	// (0x00089dab) grid_month_view_pane

0xd83b,	// (0x00089db5) cell_top_day_name_pane_ParamLimits

0xd83b,	// (0x00089db5) cell_top_day_name_pane

0xd857,	// (0x00089dd1) cell_area_left_week_number_pane_ParamLimits

0xd857,	// (0x00089dd1) cell_area_left_week_number_pane

0xd86b,	// (0x00089de5) cell_month_view_pane_ParamLimits

0xd86b,	// (0x00089de5) cell_month_view_pane

0x433c,	// (0x000808b6) frm_month_g1

0xd88a,	// (0x00089e04) frm_month_g2

0xd894,	// (0x00089e0e) frm_month_g3

0xd89e,	// (0x00089e18) frm_month_g4

0xd8a8,	// (0x00089e22) frm_month_g5

0xd8b2,	// (0x00089e2c) frm_month_g6

0xd8bc,	// (0x00089e36) frm_month_g7

0x4345,	// (0x000808bf) frm_month_g8

0xd8c6,	// (0x00089e40) frm_month_g9

0xd8cf,	// (0x00089e49) frm_month_g10

0xd8d8,	// (0x00089e52) frm_month_g11

0xd8e1,	// (0x00089e5b) frm_month_g12

0xd8ea,	// (0x00089e64) frm_month_g13

0xd8f5,	// (0x00089e6f) frm_month_g14

0xd900,	// (0x00089e7a) frm_month_g15

0xd90b,	// (0x00089e85) frm_month_g16

0x000f,

0xff14,	// (0x0008c48e) frm_month_g

0xd916,	// (0x00089e90) cell_top_day_name_pane_t1

0xd925,	// (0x00089e9f) cell_area_left_week_number_pane_g1

0xd916,	// (0x00089e90) cell_area_left_week_number_pane_t1

0x1d12,	// (0x0007e28c) cell_month_view_pane_g1

0xd92d,	// (0x00089ea7) cell_month_view_pane_t1

0x0498,	// (0x0007ca12) main_fps_pane

0x3711,	// (0x0007fc8b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3711,	// (0x0007fc8b) cmail_ddmenu_btn02_pane_cp1

0x372d,	// (0x0007fca7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x372d,	// (0x0007fca7) cmail_ddmenu_btn02_pane_cp2

0xd2c6,	// (0x00089840) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd2c6,	// (0x00089840) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x0008c3b6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x0008c3b6) cmail_ddmenu_btn02_pane_g

0xd2e4,	// (0x0008985e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd2e4,	// (0x0008985e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x0008c3bb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x0008c3bb) cmail_ddmenu_btn02_pane_t

0xd93c,	// (0x00089eb6) fps_text_pane_ParamLimits

0xd93c,	// (0x00089eb6) fps_text_pane

0xd949,	// (0x00089ec3) main_fps_pane_g1_ParamLimits

0xd949,	// (0x00089ec3) main_fps_pane_g1

0xd955,	// (0x00089ecf) wait_bar_pane_cp010_ParamLimits

0xd955,	// (0x00089ecf) wait_bar_pane_cp010

0xd961,	// (0x00089edb) fps_text_pane_t1_ParamLimits

0xd961,	// (0x00089edb) fps_text_pane_t1

0xaacb,	// (0x00087045) cam4_image_uncrop_pane_g1

0xaad4,	// (0x0008704e) cam4_image_uncrop_pane_g2

0xaadd,	// (0x00087057) cam4_image_uncrop_pane_g3

0xaae6,	// (0x00087060) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0008be96) cam4_image_uncrop_pane_g

0xd7f8,	// (0x00089d72) dia3_listrow_pane_ParamLimits

0x0498,	// (0x0007ca12) main_phob2_pane

0xce48,	// (0x000893c2) cell_tport_appsw_pane_cp02_ParamLimits

0xce48,	// (0x000893c2) cell_tport_appsw_pane_cp02

0xce57,	// (0x000893d1) cell_tport_appsw_pane_cp03_ParamLimits

0xce57,	// (0x000893d1) cell_tport_appsw_pane_cp03

0x0498,	// (0x0007ca12) phob2_contact_card_pane

0x0498,	// (0x0007ca12) phob2_listscroll_pane

0x434e,	// (0x000808c8) phob2_list_pane

0x4356,	// (0x000808d0) scroll_pane_cp034

0xd97a,	// (0x00089ef4) phob2_cc_data_pane_ParamLimits

0xd97a,	// (0x00089ef4) phob2_cc_data_pane

0xd996,	// (0x00089f10) phob2_cc_listscroll_pane_ParamLimits

0xd996,	// (0x00089f10) phob2_cc_listscroll_pane

0xd9b2,	// (0x00089f2c) list_double_large_graphic_phob2_pane_ParamLimits

0xd9b2,	// (0x00089f2c) list_double_large_graphic_phob2_pane

0xd9cc,	// (0x00089f46) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd9cc,	// (0x00089f46) list_double_large_graphic_phob2_pane_g1

0xd9d9,	// (0x00089f53) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd9d9,	// (0x00089f53) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff35,	// (0x0008c4af) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff35,	// (0x0008c4af) list_double_large_graphic_phob2_pane_g

0xd9e5,	// (0x00089f5f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd9e5,	// (0x00089f5f) list_double_large_graphic_phob2_pane_t1

0xd9fa,	// (0x00089f74) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd9fa,	// (0x00089f74) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3a,	// (0x0008c4b4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3a,	// (0x0008c4b4) list_double_large_graphic_phob2_pane_t

0x0498,	// (0x0007ca12) list_highlight_pane_cp024

0x435e,	// (0x000808d8) phob2_cc_button_pane

0xda0c,	// (0x00089f86) phob2_cc_data_pane_g1_ParamLimits

0xda0c,	// (0x00089f86) phob2_cc_data_pane_g1

0xda18,	// (0x00089f92) phob2_cc_data_pane_g2_ParamLimits

0xda18,	// (0x00089f92) phob2_cc_data_pane_g2

0x0001,

0xff3f,	// (0x0008c4b9) phob2_cc_data_pane_g_ParamLimits

0xff3f,	// (0x0008c4b9) phob2_cc_data_pane_g

0xda24,	// (0x00089f9e) phob2_cc_data_pane_t1_ParamLimits

0xda24,	// (0x00089f9e) phob2_cc_data_pane_t1

0xda36,	// (0x00089fb0) phob2_cc_data_pane_t2_ParamLimits

0xda36,	// (0x00089fb0) phob2_cc_data_pane_t2

0xda48,	// (0x00089fc2) phob2_cc_data_pane_t3_ParamLimits

0xda48,	// (0x00089fc2) phob2_cc_data_pane_t3

0x0002,

0xff44,	// (0x0008c4be) phob2_cc_data_pane_t_ParamLimits

0xff44,	// (0x0008c4be) phob2_cc_data_pane_t

0x4366,	// (0x000808e0) phob2_cc_list_pane_ParamLimits

0x4366,	// (0x000808e0) phob2_cc_list_pane

0x274b,	// (0x0007ecc5) scroll_pane_cp035_ParamLimits

0x274b,	// (0x0007ecc5) scroll_pane_cp035

0xf0e1,	// (0x0008b65b) bg_button_pane_cp033

0x4372,	// (0x000808ec) phob2_cc_button_pane_g1

0x437e,	// (0x000808f8) phob2_cc_button_pane_t1

0x4393,	// (0x0008090d) phob2_cc_button_pane_t2

0x0001,

0xff4b,	// (0x0008c4c5) phob2_cc_button_pane_t

0xda5a,	// (0x00089fd4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xda5a,	// (0x00089fd4) list_double_large_graphic_phob2_cc_pane

0xda79,	// (0x00089ff3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xda79,	// (0x00089ff3) list_double_large_graphic_phob2_cc_pane_g1

0xda8a,	// (0x0008a004) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xda8a,	// (0x0008a004) list_double_large_graphic_phob2_cc_pane_g2

0xda99,	// (0x0008a013) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xda99,	// (0x0008a013) list_double_large_graphic_phob2_cc_pane_g3

0xdaa8,	// (0x0008a022) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdaa8,	// (0x0008a022) list_double_large_graphic_phob2_cc_pane_g4

0xdab9,	// (0x0008a033) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdab9,	// (0x0008a033) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff50,	// (0x0008c4ca) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff50,	// (0x0008c4ca) list_double_large_graphic_phob2_cc_pane_g

0xdac8,	// (0x0008a042) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdac8,	// (0x0008a042) list_double_large_graphic_phob2_cc_pane_t1

0xdaf1,	// (0x0008a06b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xdaf1,	// (0x0008a06b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5b,	// (0x0008c4d5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5b,	// (0x0008c4d5) list_double_large_graphic_phob2_cc_pane_t

0x43a5,	// (0x0008091f) list_highlight_pane_cp025_ParamLimits

0x43a5,	// (0x0008091f) list_highlight_pane_cp025

0xf0e1,	// (0x0008b65b) bg_button_pane_cp033_ParamLimits

0x4372,	// (0x000808ec) phob2_cc_button_pane_g1_ParamLimits

0x437e,	// (0x000808f8) phob2_cc_button_pane_t1_ParamLimits

0x4393,	// (0x0008090d) phob2_cc_button_pane_t2_ParamLimits

0xff4b,	// (0x0008c4c5) phob2_cc_button_pane_t_ParamLimits

0x5d70,	// (0x000822ea) popup_wgtman_window

0x2553,	// (0x0007eacd) scroll_pane_cp038

0xd622,	// (0x00089b9c) wgtman_btn_pane_cp_01_ParamLimits

0xd622,	// (0x00089b9c) wgtman_btn_pane_cp_01

0x43b3,	// (0x0008092d) wgtman_content_pane

0x43bc,	// (0x00080936) wgtman_heading_pane

0x0498,	// (0x0007ca12) bg_heading_pane_cp02

0x43c5,	// (0x0008093f) wgtman_heading_pane_g1

0x43cd,	// (0x00080947) wgtman_heading_pane_t1

0x43db,	// (0x00080955) scroll_pane_cp036

0x43e3,	// (0x0008095d) wgtman_list_pane

0x3567,	// (0x0007fae1) wgtman_list_pane_t1_ParamLimits

0x3567,	// (0x0007fae1) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
