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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004e79b };

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
0x0bc4,	// (0x0004f35f) Screen

0x0bd0,	// (0x0004f36b) application_window

0x0c1c,	// (0x0004f3b7) area_bottom_pane_ParamLimits

0x0c1c,	// (0x0004f3b7) area_bottom_pane

0x0c55,	// (0x0004f3f0) area_top_pane_ParamLimits

0x0c55,	// (0x0004f3f0) area_top_pane

0x9aa9,	// (0x00058244) call_video_uplink_pane_ParamLimits

0x9aa9,	// (0x00058244) call_video_uplink_pane

0x0ce3,	// (0x0004f47e) main_pane_ParamLimits

0x0ce3,	// (0x0004f47e) main_pane

0xc9da,	// (0x0005b175) context_pane

0x4291,	// (0x00052a2c) navi_pane

0x42c5,	// (0x00052a60) popup_cale_events_window_ParamLimits

0x42c5,	// (0x00052a60) popup_cale_events_window

0xc9ed,	// (0x0005b188) popup_mup_playback_window

0x42dd,	// (0x00052a78) signal_pane

0xa251,	// (0x000589ec) main_browser_pane

0xa465,	// (0x00058c00) main_burst_pane

0x3fa9,	// (0x00052744) main_calc_pane

0xc9c0,	// (0x0005b15b) main_cale_day_pane

0x1302,	// (0x0004fa9d) main_cale_month_pane

0xc9c0,	// (0x0005b15b) main_cale_week_pane

0xa465,	// (0x00058c00) main_call_pane

0x9f0f,	// (0x000586aa) main_call_poc_pane

0xa465,	// (0x00058c00) main_camera_pane

0xa465,	// (0x00058c00) main_chi_dic_pane

0xb35b,	// (0x00059af6) main_clock_pane

0x9f0f,	// (0x000586aa) main_fmradio_pane

0xa465,	// (0x00058c00) main_graph_messa_pane

0x9f0f,	// (0x000586aa) main_help_pane

0xa251,	// (0x000589ec) main_im_pane

0xa16a,	// (0x00058905) main_image_pane_ParamLimits

0xa16a,	// (0x00058905) main_image_pane

0x9f0f,	// (0x000586aa) main_location2_pane

0xa465,	// (0x00058c00) main_location_pane

0xa16a,	// (0x00058905) main_messa_pane

0x9f0f,	// (0x000586aa) main_mp2_pane

0xa465,	// (0x00058c00) main_mp_pane

0x9f0f,	// (0x000586aa) main_msg_pane

0x9f0f,	// (0x000586aa) main_mup_eq_pane

0x9f0f,	// (0x000586aa) main_mup_pane

0xa251,	// (0x000589ec) main_notes_pane

0x9f0f,	// (0x000586aa) main_pec_pane

0x9f0f,	// (0x000586aa) main_phob_pane

0x9f0f,	// (0x000586aa) main_pinb_pane

0x9f0f,	// (0x000586aa) main_postcard_pane

0x9f0f,	// (0x000586aa) main_qdial_pane

0xa465,	// (0x00058c00) main_skin_pane

0x9f0f,	// (0x000586aa) main_smil2_pane

0xa465,	// (0x00058c00) main_smil_pane

0xa465,	// (0x00058c00) main_video_pane

0xa465,	// (0x00058c00) main_video_tele_pane

0xa16a,	// (0x00058905) main_viewer_pane_ParamLimits

0xa16a,	// (0x00058905) main_viewer_pane

0xa465,	// (0x00058c00) main_vorec_pane

0x3fff,	// (0x0005279a) popup_blid_sat_info_window_ParamLimits

0x3fff,	// (0x0005279a) popup_blid_sat_info_window

0x4063,	// (0x000527fe) popup_dyc_status_message_window_ParamLimits

0x4063,	// (0x000527fe) popup_dyc_status_message_window

0x407d,	// (0x00052818) popup_grid_large_graphic_window_ParamLimits

0x407d,	// (0x00052818) popup_grid_large_graphic_window

0x413f,	// (0x000528da) popup_loc_request_window_ParamLimits

0x413f,	// (0x000528da) popup_loc_request_window

0x4265,	// (0x00052a00) popup_wml_address_window_ParamLimits

0x4265,	// (0x00052a00) popup_wml_address_window

0x3de7,	// (0x00052582) call_muted_g1

0x3a78,	// (0x00052213) popup_call_audio_conf_window_ParamLimits

0x3a78,	// (0x00052213) popup_call_audio_conf_window

0x3df7,	// (0x00052592) popup_call_audio_first_window_ParamLimits

0x3df7,	// (0x00052592) popup_call_audio_first_window

0x3e6d,	// (0x00052608) popup_call_audio_in_window_ParamLimits

0x3e6d,	// (0x00052608) popup_call_audio_in_window

0x3ea9,	// (0x00052644) popup_call_audio_out_window_ParamLimits

0x3ea9,	// (0x00052644) popup_call_audio_out_window

0x3ee3,	// (0x0005267e) popup_call_audio_second_window_ParamLimits

0x3ee3,	// (0x0005267e) popup_call_audio_second_window

0x3f39,	// (0x000526d4) popup_call_audio_wait_window_ParamLimits

0x3f39,	// (0x000526d4) popup_call_audio_wait_window

0x3f6e,	// (0x00052709) popup_number_entry_window_ParamLimits

0x3f6e,	// (0x00052709) popup_number_entry_window

0x9ac7,	// (0x00058262) bg_popup_call_pane_cp05_ParamLimits

0x9ac7,	// (0x00058262) bg_popup_call_pane_cp05

0x9ae7,	// (0x00058282) popup_number_entry_window_t1

0x9afa,	// (0x00058295) popup_number_entry_window_t2

0x9b0c,	// (0x000582a7) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0005d861) popup_number_entry_window_t

0x9b53,	// (0x000582ee) text_title_cp2

0x9b66,	// (0x00058301) bg_popup_call_pane_cp_ParamLimits

0x9b66,	// (0x00058301) bg_popup_call_pane_cp

0x9b74,	// (0x0005830f) call_thumbnail_pane

0x9b7c,	// (0x00058317) popup_call_audio_in_window_g1_ParamLimits

0x9b7c,	// (0x00058317) popup_call_audio_in_window_g1

0x9b88,	// (0x00058323) popup_call_audio_in_window_g2_ParamLimits

0x9b88,	// (0x00058323) popup_call_audio_in_window_g2

0x9b94,	// (0x0005832f) popup_call_audio_in_window_g3_ParamLimits

0x9b94,	// (0x0005832f) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0005d86a) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0005d86a) popup_call_audio_in_window_g

0x9ba0,	// (0x0005833b) popup_call_audio_in_window_t1_ParamLimits

0x9ba0,	// (0x0005833b) popup_call_audio_in_window_t1

0x9bbc,	// (0x00058357) popup_call_audio_in_window_t2_ParamLimits

0x9bbc,	// (0x00058357) popup_call_audio_in_window_t2

0x9bd8,	// (0x00058373) popup_call_audio_in_window_t3_ParamLimits

0x9bd8,	// (0x00058373) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0005d871) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0005d871) popup_call_audio_in_window_t

0x9b66,	// (0x00058301) bg_popup_call_pane_cp01_ParamLimits

0x9b66,	// (0x00058301) bg_popup_call_pane_cp01

0x9b74,	// (0x0005830f) call_thumbnail_pane_cp02

0x9beb,	// (0x00058386) call_type_pane_cp022

0x9bf3,	// (0x0005838e) popup_call_audio_out_window_g1_ParamLimits

0x9bf3,	// (0x0005838e) popup_call_audio_out_window_g1

0x9c05,	// (0x000583a0) popup_call_audio_out_window_g2_ParamLimits

0x9c05,	// (0x000583a0) popup_call_audio_out_window_g2

0x9c11,	// (0x000583ac) popup_call_audio_out_window_g3_ParamLimits

0x9c11,	// (0x000583ac) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0005d878) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0005d878) popup_call_audio_out_window_g

0x9c23,	// (0x000583be) popup_call_audio_out_window_t1_ParamLimits

0x9c23,	// (0x000583be) popup_call_audio_out_window_t1

0x9c3b,	// (0x000583d6) popup_call_audio_out_window_t2_ParamLimits

0x9c3b,	// (0x000583d6) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0005d87f) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0005d87f) popup_call_audio_out_window_t

0x9c50,	// (0x000583eb) bg_popup_call_pane_ParamLimits

0x9c50,	// (0x000583eb) bg_popup_call_pane

0x0e6c,	// (0x0004f607) call_thumbnail_pane_cp_ParamLimits

0x0e6c,	// (0x0004f607) call_thumbnail_pane_cp

0x9cd4,	// (0x0005846f) call_type_pane_cp01_ParamLimits

0x9cd4,	// (0x0005846f) call_type_pane_cp01

0x9d18,	// (0x000584b3) popup_call_audio_first_window_g1_ParamLimits

0x9d18,	// (0x000584b3) popup_call_audio_first_window_g1

0x9d64,	// (0x000584ff) popup_call_audio_first_window_g2_ParamLimits

0x9d64,	// (0x000584ff) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0005d884) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0005d884) popup_call_audio_first_window_g

0x9da8,	// (0x00058543) popup_call_audio_first_window_t1_ParamLimits

0x9da8,	// (0x00058543) popup_call_audio_first_window_t1

0x9e54,	// (0x000585ef) popup_call_audio_first_window_t4_ParamLimits

0x9e54,	// (0x000585ef) popup_call_audio_first_window_t4

0x9ee0,	// (0x0005867b) popup_call_audio_first_window_t5_ParamLimits

0x9ee0,	// (0x0005867b) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0005d889) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0005d889) popup_call_audio_first_window_t

0x9f0f,	// (0x000586aa) bg_popup_call_pane_cp02

0x9f19,	// (0x000586b4) call_type_pane_cp023

0x9f21,	// (0x000586bc) popup_call_audio_wait_window_g1

0x9f29,	// (0x000586c4) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005d890) popup_call_audio_wait_window_g

0x9f31,	// (0x000586cc) popup_call_audio_wait_window_t3

0x9f3f,	// (0x000586da) bg_popup_call_pane_cp03_ParamLimits

0x9f3f,	// (0x000586da) bg_popup_call_pane_cp03

0x9f9f,	// (0x0005873a) call_thumbnail_pane_cp011_ParamLimits

0x9f9f,	// (0x0005873a) call_thumbnail_pane_cp011

0x9fab,	// (0x00058746) call_type_pane_cp034_ParamLimits

0x9fab,	// (0x00058746) call_type_pane_cp034

0x9fe7,	// (0x00058782) popup_call_audio_second_window_g1_ParamLimits

0x9fe7,	// (0x00058782) popup_call_audio_second_window_g1

0xa023,	// (0x000587be) popup_call_audio_second_window_g2_ParamLimits

0xa023,	// (0x000587be) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0005d895) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0005d895) popup_call_audio_second_window_g

0xa05f,	// (0x000587fa) popup_call_audio_second_window_t1_ParamLimits

0xa05f,	// (0x000587fa) popup_call_audio_second_window_t1

0xa0e0,	// (0x0005887b) popup_call_audio_second_window_t2_ParamLimits

0xa0e0,	// (0x0005887b) popup_call_audio_second_window_t2

0xa116,	// (0x000588b1) popup_call_audio_second_window_t3_ParamLimits

0xa116,	// (0x000588b1) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0005d89a) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0005d89a) popup_call_audio_second_window_t

0x9f0f,	// (0x000586aa) bg_popup_call_pane_cp04

0xa14c,	// (0x000588e7) list_conf_pane

0xa154,	// (0x000588ef) popup_call_audio_conf_window_t1

0xa162,	// (0x000588fd) call_thumbnail_pane_g1

0xa16a,	// (0x00058905) bg_pinb_pane_ParamLimits

0xa16a,	// (0x00058905) bg_pinb_pane

0xa178,	// (0x00058913) find_pinb_pane

0xa181,	// (0x0005891c) listscroll_pinb_pane_ParamLimits

0xa181,	// (0x0005891c) listscroll_pinb_pane

0xa190,	// (0x0005892b) pinb_bg_pane_g1

0x0e90,	// (0x0004f62b) pinb_bg_pane_g2

0x0e9c,	// (0x0004f637) pinb_bg_pane_g3

0x0ea8,	// (0x0004f643) pinb_bg_pane_g4

0x0eb4,	// (0x0004f64f) pinb_bg_pane_g5

0x0ec0,	// (0x0004f65b) pinb_bg_pane_g6

0x0ecb,	// (0x0004f666) pinb_bg_pane_g7

0x0ed6,	// (0x0004f671) pinb_bg_pane_g8

0x0ee1,	// (0x0004f67c) pinb_bg_pane_g9

0x0eeb,	// (0x0004f686) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0005d8a1) pinb_bg_pane_g

0x0f08,	// (0x0004f6a3) grid_pinb_pane

0x0f13,	// (0x0004f6ae) list_pinb_pane

0x0f1e,	// (0x0004f6b9) scroll_pane_cp01_ParamLimits

0x0f1e,	// (0x0004f6b9) scroll_pane_cp01

0xa19a,	// (0x00058935) find_pinb_pane_g1_ParamLimits

0xa19a,	// (0x00058935) find_pinb_pane_g1

0xa1b2,	// (0x0005894d) find_pinb_pane_t1

0xa1c4,	// (0x0005895f) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0005d8bb) find_pinb_pane_t

0xa1d9,	// (0x00058974) input_focus_pane_cp01_ParamLimits

0xa1d9,	// (0x00058974) input_focus_pane_cp01

0x0f30,	// (0x0004f6cb) cell_pinb_pane_ParamLimits

0x0f30,	// (0x0004f6cb) cell_pinb_pane

0x0f52,	// (0x0004f6ed) cell_pinb_pane_g1_ParamLimits

0x0f52,	// (0x0004f6ed) cell_pinb_pane_g1

0x0f66,	// (0x0004f701) cell_pinb_pane_g2_ParamLimits

0x0f66,	// (0x0004f701) cell_pinb_pane_g2

0xa1e5,	// (0x00058980) cell_pinb_pane_g3_ParamLimits

0xa1e5,	// (0x00058980) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0005d8c0) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0005d8c0) cell_pinb_pane_g

0x9f0f,	// (0x000586aa) grid_highlight_pane_cp01

0x0f72,	// (0x0004f70d) list_pinb_item_pane_ParamLimits

0x0f72,	// (0x0004f70d) list_pinb_item_pane

0x9f0f,	// (0x000586aa) list_highlight_pane_cp02

0x0f85,	// (0x0004f720) list_pinb_item_pane_g1_ParamLimits

0x0f85,	// (0x0004f720) list_pinb_item_pane_g1

0x0f92,	// (0x0004f72d) list_pinb_item_pane_g2_ParamLimits

0x0f92,	// (0x0004f72d) list_pinb_item_pane_g2

0x0f9e,	// (0x0004f739) list_pinb_item_pane_g3_ParamLimits

0x0f9e,	// (0x0004f739) list_pinb_item_pane_g3

0x0faf,	// (0x0004f74a) list_pinb_item_pane_g4_ParamLimits

0x0faf,	// (0x0004f74a) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0005d8c7) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0005d8c7) list_pinb_item_pane_g

0x0fbb,	// (0x0004f756) list_pinb_item_pane_t1_ParamLimits

0x0fbb,	// (0x0004f756) list_pinb_item_pane_t1

0x0ff2,	// (0x0004f78d) calc_display_pane

0x1017,	// (0x0004f7b2) calc_paper_pane

0x103a,	// (0x0004f7d5) grid_calc_pane

0x9f0f,	// (0x000586aa) bg_list_pane_cp01

0x1068,	// (0x0004f803) clock_g1

0x1070,	// (0x0004f80b) clock_g2

0x0001,

0xf135,	// (0x0005d8d0) clock_g

0x1078,	// (0x0004f813) clock_t1_ParamLimits

0x1078,	// (0x0004f813) clock_t1

0x108d,	// (0x0004f828) clock_t2_ParamLimits

0x108d,	// (0x0004f828) clock_t2

0x109f,	// (0x0004f83a) clock_t3_ParamLimits

0x109f,	// (0x0004f83a) clock_t3

0x10b1,	// (0x0004f84c) clock_t4_ParamLimits

0x10b1,	// (0x0004f84c) clock_t4

0x10c3,	// (0x0004f85e) clock_t5_ParamLimits

0x10c3,	// (0x0004f85e) clock_t5

0x10d8,	// (0x0004f873) clock_t6_ParamLimits

0x10d8,	// (0x0004f873) clock_t6

0x10ea,	// (0x0004f885) clock_t7_ParamLimits

0x10ea,	// (0x0004f885) clock_t7

0x10fc,	// (0x0004f897) clock_t8_ParamLimits

0x10fc,	// (0x0004f897) clock_t8

0x1110,	// (0x0004f8ab) clock_t9_ParamLimits

0x1110,	// (0x0004f8ab) clock_t9

0x0008,

0xf13a,	// (0x0005d8d5) clock_t_ParamLimits

0xf13a,	// (0x0005d8d5) clock_t

0xa1f9,	// (0x00058994) popup_clock_analogue_window_cp02

0xa1f9,	// (0x00058994) popup_clock_digital_window_cp01

0xa201,	// (0x0005899c) listscroll_help_pane

0x9f0f,	// (0x000586aa) phob_pre_status_pane

0xa20b,	// (0x000589a6) grid_qdial_pane

0xa16a,	// (0x00058905) listscroll_mce_pane

0xa16a,	// (0x00058905) bg_notes_pane

0xa215,	// (0x000589b0) list_notes_pane

0x1126,	// (0x0004f8c1) scroll_pane_cp06

0xa223,	// (0x000589be) bg_calc_paper_pane

0xa237,	// (0x000589d2) list_calc_pane

0xa251,	// (0x000589ec) bg_calc_display_pane

0x113a,	// (0x0004f8d5) calc_display_pane_t1

0x114c,	// (0x0004f8e7) calc_display_pane_t2

0xa25d,	// (0x000589f8) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0005d8e8) calc_display_pane_t

0x115e,	// (0x0004f8f9) cell_calc_pane_ParamLimits

0x115e,	// (0x0004f8f9) cell_calc_pane

0xa26f,	// (0x00058a0a) bg_calc_paper_pane_g1

0xa27b,	// (0x00058a16) bg_calc_paper_pane_g2

0xa287,	// (0x00058a22) bg_calc_paper_pane_g3

0xa293,	// (0x00058a2e) bg_calc_paper_pane_g4

0xa29f,	// (0x00058a3a) bg_calc_paper_pane_g5

0x1199,	// (0x0004f934) bg_calc_paper_pane_g6

0x11a7,	// (0x0004f942) bg_calc_paper_pane_g7

0x11b5,	// (0x0004f950) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0005d8ef) bg_calc_paper_pane_g

0x11c8,	// (0x0004f963) calc_bg_paper_pane_g9

0x11db,	// (0x0004f976) list_calc_item_pane_ParamLimits

0x11db,	// (0x0004f976) list_calc_item_pane

0xa2ab,	// (0x00058a46) list_calc_item_pane_g1

0xa2b8,	// (0x00058a53) list_calc_item_pane_t1_ParamLimits

0xa2b8,	// (0x00058a53) list_calc_item_pane_t1

0x11f3,	// (0x0004f98e) list_calc_item_pane_t2_ParamLimits

0x11f3,	// (0x0004f98e) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0005d900) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0005d900) list_calc_item_pane_t

0xa2ca,	// (0x00058a65) cell_calc_pane_g1

0xa2d4,	// (0x00058a6f) grid_highlight_pane_cp02

0xad17,	// (0x000594b2) bg_calc_display_pane_g1

0x1225,	// (0x0004f9c0) bg_calc_display_pane_g2

0x122f,	// (0x0004f9ca) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0005d90a) bg_calc_display_pane_g

0x1238,	// (0x0004f9d3) cell_qdial_pane_ParamLimits

0x1238,	// (0x0004f9d3) cell_qdial_pane

0x124c,	// (0x0004f9e7) cell_qdial_pane_g1_ParamLimits

0x124c,	// (0x0004f9e7) cell_qdial_pane_g1

0x1262,	// (0x0004f9fd) cell_qdial_pane_g2_ParamLimits

0x1262,	// (0x0004f9fd) cell_qdial_pane_g2

0xa2f6,	// (0x00058a91) cell_qdial_pane_g3_ParamLimits

0xa2f6,	// (0x00058a91) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0005d911) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0005d911) cell_qdial_pane_g

0x1289,	// (0x0004fa24) cell_qdial_pane_t1_ParamLimits

0x1289,	// (0x0004fa24) cell_qdial_pane_t1

0x12a1,	// (0x0004fa3c) cell_qdial_pane_t2_ParamLimits

0x12a1,	// (0x0004fa3c) cell_qdial_pane_t2

0x12b4,	// (0x0004fa4f) cell_qdial_pane_t3_ParamLimits

0x12b4,	// (0x0004fa4f) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0005d91a) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0005d91a) cell_qdial_pane_t

0x9f0f,	// (0x000586aa) grid_highlight_pane_cp04

0xa302,	// (0x00058a9d) thumbnail_qdial_pane_ParamLimits

0xa302,	// (0x00058a9d) thumbnail_qdial_pane

0xa35e,	// (0x00058af9) list_help_pane

0xa367,	// (0x00058b02) scroll_pane_cp02

0x12c7,	// (0x0004fa62) help_list_pane_t1_ParamLimits

0x12c7,	// (0x0004fa62) help_list_pane_t1

0xa370,	// (0x00058b0b) bg_notes_pane_g2

0xa378,	// (0x00058b13) bg_notes_pane_g3

0xa380,	// (0x00058b1b) notes_bg_pane_g1

0xa388,	// (0x00058b23) notes_bg_pane_g4

0xa390,	// (0x00058b2b) notes_bg_pane_g5

0xa398,	// (0x00058b33) notes_bg_pane_g6

0xa3a0,	// (0x00058b3b) notes_bg_pane_g7

0xa3a8,	// (0x00058b43) notes_bg_pane_g8

0xa3b0,	// (0x00058b4b) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0005d938) notes_bg_pane_g

0x12eb,	// (0x0004fa86) list_notes_text_pane_ParamLimits

0x12eb,	// (0x0004fa86) list_notes_text_pane

0xa3b8,	// (0x00058b53) list_notes_text_pane_g1

0xfb7d,	// (0x0004e318) list_notes_text_pane_t1

0x1302,	// (0x0004fa9d) listscroll_cale_week_pane

0x132c,	// (0x0004fac7) bg_cale_heading_pane

0x1350,	// (0x0004faeb) bg_cale_pane_cp01

0x136d,	// (0x0004fb08) cale_week_corner_pane

0x138c,	// (0x0004fb27) cale_week_day_heading_pane

0x13b5,	// (0x0004fb50) cale_week_scroll_pane_g1

0x13d4,	// (0x0004fb6f) cale_week_scroll_pane_g2

0x13ec,	// (0x0004fb87) cale_week_scroll_pane_g3

0x1404,	// (0x0004fb9f) cale_week_scroll_pane_g4

0x141c,	// (0x0004fbb7) cale_week_scroll_pane_g5

0x143c,	// (0x0004fbd7) cale_week_scroll_pane_g6

0x145c,	// (0x0004fbf7) cale_week_scroll_pane_g7

0x1480,	// (0x0004fc1b) cale_week_scroll_pane_g8

0x14a4,	// (0x0004fc3f) cale_week_scroll_pane_g9

0x14bc,	// (0x0004fc57) cale_week_scroll_pane_g10

0x14d4,	// (0x0004fc6f) cale_week_scroll_pane_g11

0x14ec,	// (0x0004fc87) cale_week_scroll_pane_g12

0x1510,	// (0x0004fcab) cale_week_scroll_pane_g13

0x1510,	// (0x0004fcab) cale_week_scroll_pane_g14

0x1510,	// (0x0004fcab) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0005d947) cale_week_scroll_pane_g

0x1558,	// (0x0004fcf3) cale_week_time_pane

0x157c,	// (0x0004fd17) grid_cale_week_pane

0xa3ed,	// (0x00058b88) scroll_pane_cp08

0x15ae,	// (0x0004fd49) cell_cale_week_pane_ParamLimits

0x15ae,	// (0x0004fd49) cell_cale_week_pane

0x164a,	// (0x0004fde5) cale_week_day_heading_pane_t1

0x1674,	// (0x0004fe0f) cale_week_day_heading_pane_t2

0x16a3,	// (0x0004fe3e) cale_week_day_heading_pane_t3

0x16d2,	// (0x0004fe6d) cale_week_day_heading_pane_t4

0x1701,	// (0x0004fe9c) cale_week_day_heading_pane_t5

0x1734,	// (0x0004fecf) cale_week_day_heading_pane_t6

0x176b,	// (0x0004ff06) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0005d968) cale_week_day_heading_pane_t

0xa40a,	// (0x00058ba5) bg_cale_side_pane

0x1795,	// (0x0004ff30) cale_week_time_pane_t1

0x17af,	// (0x0004ff4a) cale_week_time_pane_t2

0x17c9,	// (0x0004ff64) cale_week_time_pane_t3

0x17e3,	// (0x0004ff7e) cale_week_time_pane_t4

0x17fd,	// (0x0004ff98) cale_week_time_pane_t5

0x1817,	// (0x0004ffb2) cale_week_time_pane_t6

0x1837,	// (0x0004ffd2) cale_week_time_pane_t7

0x185d,	// (0x0004fff8) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0005d977) cale_week_time_pane_t

0x1883,	// (0x0005001e) cell_cale_week_pane_g2

0x18a7,	// (0x00050042) cell_cale_week_pane_g3_ParamLimits

0x18a7,	// (0x00050042) cell_cale_week_pane_g3

0xa418,	// (0x00058bb3) grid_highlight_pane_cp07

0xa420,	// (0x00058bbb) listscroll_gms_pane

0xa42a,	// (0x00058bc5) grid_gms_pane

0xa433,	// (0x00058bce) listscroll_gms_pane_g1

0xa43b,	// (0x00058bd6) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0005d988) listscroll_gms_pane_g

0x18bf,	// (0x0005005a) scroll_pane_cp010

0x18ca,	// (0x00050065) cell_gms_pane_ParamLimits

0x18ca,	// (0x00050065) cell_gms_pane

0x18e1,	// (0x0005007c) cell_gms_pane_g1

0xa443,	// (0x00058bde) cell_gms_pane_g2

0xa44b,	// (0x00058be6) cell_gms_pane_g3

0xa454,	// (0x00058bef) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0005d98d) cell_gms_pane_g

0xa45d,	// (0x00058bf8) grid_highlight_pane_cp09

0x3d8f,	// (0x0005252a) phob_pre_status_pane_g1

0x3d97,	// (0x00052532) phob_pre_status_pane_g2

0x3d9f,	// (0x0005253a) phob_pre_status_pane_g3

0x3da7,	// (0x00052542) phob_pre_status_pane_g4

0x0004,

0xf5e4,	// (0x0005dd7f) phob_pre_status_pane_g

0x3db7,	// (0x00052552) phob_pre_status_pane_t1

0x3dc7,	// (0x00052562) phob_pre_status_pane_t2

0x3dd7,	// (0x00052572) phob_pre_status_pane_t3

0x0002,

0xf5ef,	// (0x0005dd8a) phob_pre_status_pane_t

0xa465,	// (0x00058c00) bg_list_pane_cp05

0x18f1,	// (0x0005008c) grid_vorec_pane

0x18fb,	// (0x00050096) vorec_t1

0x1909,	// (0x000500a4) vorec_t2

0x1917,	// (0x000500b2) vorec_t3

0x1925,	// (0x000500c0) vorec_t4

0x9a11,	// (0x000581ac) vorec_t5

0x9a1f,	// (0x000581ba) vorec_t6

0x0004,

0xf1fb,	// (0x0005d996) vorec_t

0x9a2d,	// (0x000581c8) wait_bar_pane_cp01

0xad20,	// (0x000594bb) cell_vorec_pane_ParamLimits

0xad20,	// (0x000594bb) cell_vorec_pane

0xa46d,	// (0x00058c08) cell_vorec_pane_g1

0x9f0f,	// (0x000586aa) grid_highlight_pane_cp05

0x1957,	// (0x000500f2) cams_zoom_pane

0x1966,	// (0x00050101) image_vga_pane

0x1980,	// (0x0005011b) main_camera_pane_g1

0x1992,	// (0x0005012d) main_camera_pane_g2

0x19a2,	// (0x0005013d) main_camera_pane_g3

0x19b6,	// (0x00050151) main_camera_pane_g4

0x19ca,	// (0x00050165) main_camera_pane_g5

0x19de,	// (0x00050179) main_camera_pane_g6

0x19f2,	// (0x0005018d) main_camera_pane_g7

0x0007,

0xf206,	// (0x0005d9a1) main_camera_pane_g

0x1a06,	// (0x000501a1) main_camera_pane_t1

0x1a1c,	// (0x000501b7) main_camera_pane_t2

0x0001,

0xf217,	// (0x0005d9b2) main_camera_pane_t

0x1a5a,	// (0x000501f5) cams_zoom_pane_cp_ParamLimits

0x1a5a,	// (0x000501f5) cams_zoom_pane_cp

0x1a82,	// (0x0005021d) image_cif_pane_ParamLimits

0x1a82,	// (0x0005021d) image_cif_pane

0x1abd,	// (0x00050258) image_subqcif_pane

0x1ac7,	// (0x00050262) main_video_pane_g1_ParamLimits

0x1ac7,	// (0x00050262) main_video_pane_g1

0x1aeb,	// (0x00050286) main_video_pane_g2_ParamLimits

0x1aeb,	// (0x00050286) main_video_pane_g2

0x1b21,	// (0x000502bc) main_video_pane_g3_ParamLimits

0x1b21,	// (0x000502bc) main_video_pane_g3

0x1b4f,	// (0x000502ea) main_video_pane_g4_ParamLimits

0x1b4f,	// (0x000502ea) main_video_pane_g4

0x1b7d,	// (0x00050318) main_video_pane_g5_ParamLimits

0x1b7d,	// (0x00050318) main_video_pane_g5

0xa483,	// (0x00058c1e) main_video_pane_g6_ParamLimits

0xa483,	// (0x00058c1e) main_video_pane_g6

0x0006,

0xf21c,	// (0x0005d9b7) main_video_pane_g_ParamLimits

0xf21c,	// (0x0005d9b7) main_video_pane_g

0x1ba6,	// (0x00050341) main_video_pane_t1_ParamLimits

0x1ba6,	// (0x00050341) main_video_pane_t1

0xa49d,	// (0x00058c38) cams_zoom_pane_g1

0xa4a6,	// (0x00058c41) cams_zoom_pane_g2

0xa4af,	// (0x00058c4a) cams_zoom_pane_g3

0xa4b8,	// (0x00058c53) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0005d9c6) cams_zoom_pane_g

0x1c03,	// (0x0005039e) grid_cams_pane

0x1c1d,	// (0x000503b8) linegrid_cams_pane

0x1c2f,	// (0x000503ca) cell_cams_pane_ParamLimits

0x1c2f,	// (0x000503ca) cell_cams_pane

0xa4c1,	// (0x00058c5c) cams_burst_image_pane

0xa4c9,	// (0x00058c64) cell_cams_pane_g1

0x9f0f,	// (0x000586aa) grid_highlight_pane_cp03

0xa2ca,	// (0x00058a65) mp_bg_pane_g1

0x9f0f,	// (0x000586aa) bg_list_pane_cp03

0xc8e3,	// (0x0005b07e) bg_mp_pane

0xc8eb,	// (0x0005b086) grid_mp_pane

0xc8f3,	// (0x0005b08e) media_player_g1

0xc8fd,	// (0x0005b098) media_player_t1

0xc90b,	// (0x0005b0a6) media_player_t2

0xc919,	// (0x0005b0b4) media_player_t3

0xc927,	// (0x0005b0c2) media_player_t4

0xc935,	// (0x0005b0d0) media_player_t5

0xc943,	// (0x0005b0de) media_player_t6

0xc951,	// (0x0005b0ec) media_player_t7

0x0006,

0xf5ce,	// (0x0005dd69) media_player_t

0xc95f,	// (0x0005b0fa) wait_bar_pane_cp02

0xf5b3,	// (0x0005dd4e) main_usb_pane_t

0x3d86,	// (0x00052521) cell_mp_pane

0xa2ca,	// (0x00058a65) cell_mp_pane_g1

0x9f0f,	// (0x000586aa) grid_highlight_pane_cp06

0xa4d1,	// (0x00058c6c) grid_skin_colour_pane

0xa4d9,	// (0x00058c74) list_highlight_pane_cp03

0x1c51,	// (0x000503ec) skin_g1

0xa4e1,	// (0x00058c7c) skin_t1

0xa4f0,	// (0x00058c8b) skin_t2

0x0001,

0xf260,	// (0x0005d9fb) skin_t

0x1c5b,	// (0x000503f6) cell_skin_colour_pane_ParamLimits

0x1c5b,	// (0x000503f6) cell_skin_colour_pane

0xa4fe,	// (0x00058c99) cell_skin_colour_pane_g1

0x1cce,	// (0x00050469) call_video_g1_ParamLimits

0x1cce,	// (0x00050469) call_video_g1

0x1cea,	// (0x00050485) call_video_g2_ParamLimits

0x1cea,	// (0x00050485) call_video_g2

0x0001,

0xf265,	// (0x0005da00) call_video_g_ParamLimits

0xf265,	// (0x0005da00) call_video_g

0x1d2f,	// (0x000504ca) call_video_uplink_pane_cp1_ParamLimits

0x1d2f,	// (0x000504ca) call_video_uplink_pane_cp1

0xa510,	// (0x00058cab) call_video_uplink_pane_cp2

0x1dd0,	// (0x0005056b) video_down_crop_pane_ParamLimits

0x1dd0,	// (0x0005056b) video_down_crop_pane

0x1eb9,	// (0x00050654) video_down_pane_ParamLimits

0x1eb9,	// (0x00050654) video_down_pane

0xa518,	// (0x00058cb3) video_down_subqcif_pane_ParamLimits

0xa518,	// (0x00058cb3) video_down_subqcif_pane

0xa532,	// (0x00058ccd) video_down_subqcif_pane_cp_ParamLimits

0xa532,	// (0x00058ccd) video_down_subqcif_pane_cp

0xa55a,	// (0x00058cf5) im_reading_pane_ParamLimits

0xa55a,	// (0x00058cf5) im_reading_pane

0x1fc4,	// (0x0005075f) im_writing_pane_ParamLimits

0x1fc4,	// (0x0005075f) im_writing_pane

0x1fe2,	// (0x0005077d) im_reading_pane_t1

0xa574,	// (0x00058d0f) list_im_pane

0xa585,	// (0x00058d20) scroll_pane_cp07

0x2021,	// (0x000507bc) im_writing_pane_t1_ParamLimits

0x2021,	// (0x000507bc) im_writing_pane_t1

0xa59e,	// (0x00058d39) im_writing_pane_t2_ParamLimits

0xa59e,	// (0x00058d39) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0005da0a) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0005da0a) im_writing_pane_t

0x9f0f,	// (0x000586aa) input_focus_pane_cp04

0x9f0f,	// (0x000586aa) input_focus_pane_cp05

0x2036,	// (0x000507d1) list_im_single_pane_ParamLimits

0x2036,	// (0x000507d1) list_im_single_pane

0x204f,	// (0x000507ea) list_single_im_pane_t1

0x3d46,	// (0x000524e1) blid_accuracy_pane

0x3d4e,	// (0x000524e9) blid_compass_pane

0x3d58,	// (0x000524f3) main_location_t1

0x3d68,	// (0x00052503) main_location_t2

0x3d78,	// (0x00052513) main_location_t3

0x0002,

0xf5dd,	// (0x0005dd78) main_location_t

0x9f0f,	// (0x000586aa) aid_levels_location

0xa2ca,	// (0x00058a65) blid_accuracy_pane_g1

0xa2ca,	// (0x00058a65) blid_accuracy_pane_g2

0x0001,

0xf2d8,	// (0x0005da73) blid_accuracy_pane_g

0xa5e6,	// (0x00058d81) wml_content_pane

0xa624,	// (0x00058dbf) wml_button_pane_ParamLimits

0xa624,	// (0x00058dbf) wml_button_pane

0x205e,	// (0x000507f9) wml_list_single_large_pane_ParamLimits

0x205e,	// (0x000507f9) wml_list_single_large_pane

0x2077,	// (0x00050812) wml_list_single_medium_pane_ParamLimits

0x2077,	// (0x00050812) wml_list_single_medium_pane

0x2091,	// (0x0005082c) wml_list_single_small_pane_ParamLimits

0x2091,	// (0x0005082c) wml_list_single_small_pane

0xad3d,	// (0x000594d8) wml_selection_box_pane_ParamLimits

0xad3d,	// (0x000594d8) wml_selection_box_pane

0xad50,	// (0x000594eb) wml_list_single_pane_t1

0xad5f,	// (0x000594fa) wml_list_single_medium_pane_t1

0xad6e,	// (0x00059509) wml_list_single_large_pane_t1

0xad7d,	// (0x00059518) input_focus_pane_cp02_ParamLimits

0xad7d,	// (0x00059518) input_focus_pane_cp02

0xad90,	// (0x0005952b) wml_selection_box_pane_g1

0xad99,	// (0x00059534) wml_selection_box_pane_t1_ParamLimits

0xad99,	// (0x00059534) wml_selection_box_pane_t1

0xa16a,	// (0x00058905) bg_wml_button_pane_ParamLimits

0xa16a,	// (0x00058905) bg_wml_button_pane

0xadb1,	// (0x0005954c) wml_button_pane_g1

0xadb9,	// (0x00059554) wml_button_pane_t1

0xadb1,	// (0x0005954c) wml_button_bg_pane_g1

0xadc9,	// (0x00059564) wml_button_bg_pane_g2

0xadd1,	// (0x0005956c) wml_button_bg_pane_g3

0xadd9,	// (0x00059574) wml_button_bg_pane_g4

0xade1,	// (0x0005957c) wml_button_bg_pane_g5

0xade9,	// (0x00059584) wml_button_bg_pane_g6

0xadf1,	// (0x0005958c) wml_button_bg_pane_g7

0xadf9,	// (0x00059594) wml_button_bg_pane_g8

0xae01,	// (0x0005959c) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0005da0f) wml_button_bg_pane_g

0x20b0,	// (0x0005084b) bg_list_pane_cp02

0xae09,	// (0x000595a4) mce_header_pane_ParamLimits

0xae09,	// (0x000595a4) mce_header_pane

0xae1f,	// (0x000595ba) mce_icon_pane

0xae1f,	// (0x000595ba) mce_image_pane

0xae28,	// (0x000595c3) mce_text_pane_ParamLimits

0xae28,	// (0x000595c3) mce_text_pane

0x20ba,	// (0x00050855) scroll_pane_cp03

0xa61c,	// (0x00058db7) scroll_pane_cp04

0xae3b,	// (0x000595d6) scroll_pane_cp05_ParamLimits

0xae3b,	// (0x000595d6) scroll_pane_cp05

0x20c4,	// (0x0005085f) mce_header_field_pane_ParamLimits

0x20c4,	// (0x0005085f) mce_header_field_pane

0x20dd,	// (0x00050878) mce_header_field_pane_2_ParamLimits

0x20dd,	// (0x00050878) mce_header_field_pane_2

0x20f3,	// (0x0005088e) mce_header_field_pane_3

0x20fb,	// (0x00050896) list_single_mce_message_pane_ParamLimits

0x20fb,	// (0x00050896) list_single_mce_message_pane

0x2117,	// (0x000508b2) list_single_mce_smart_pane_ParamLimits

0x2117,	// (0x000508b2) list_single_mce_smart_pane

0xae47,	// (0x000595e2) input_focus_pane_cp03

0xae50,	// (0x000595eb) list_header_data_pane

0x213e,	// (0x000508d9) mce_header_field_pane_t1

0x214e,	// (0x000508e9) list_single_mce_header_pane_ParamLimits

0x214e,	// (0x000508e9) list_single_mce_header_pane

0xae58,	// (0x000595f3) list_single_mce_header_pane_t1

0xae67,	// (0x00059602) list_single_mce_message_pane_g1

0xae6f,	// (0x0005960a) list_single_mce_message_pane_t1

0x2188,	// (0x00050923) bg_cale_heading_pane_cp01_ParamLimits

0x2188,	// (0x00050923) bg_cale_heading_pane_cp01

0xae7d,	// (0x00059618) bg_cale_pane_cp02_ParamLimits

0xae7d,	// (0x00059618) bg_cale_pane_cp02

0x21da,	// (0x00050975) cale_month_corner_pane

0x21f9,	// (0x00050994) cale_month_day_heading_pane_ParamLimits

0x21f9,	// (0x00050994) cale_month_day_heading_pane

0x2263,	// (0x000509fe) cale_month_pane_g1_ParamLimits

0x2263,	// (0x000509fe) cale_month_pane_g1

0x22aa,	// (0x00050a45) cale_month_pane_g2_ParamLimits

0x22aa,	// (0x00050a45) cale_month_pane_g2

0x22e6,	// (0x00050a81) cale_month_pane_g3_ParamLimits

0x22e6,	// (0x00050a81) cale_month_pane_g3

0x233a,	// (0x00050ad5) cale_month_pane_g4_ParamLimits

0x233a,	// (0x00050ad5) cale_month_pane_g4

0x238e,	// (0x00050b29) cale_month_pane_g5_ParamLimits

0x238e,	// (0x00050b29) cale_month_pane_g5

0x23ea,	// (0x00050b85) cale_month_pane_g6_ParamLimits

0x23ea,	// (0x00050b85) cale_month_pane_g6

0x2452,	// (0x00050bed) cale_month_pane_g7_ParamLimits

0x2452,	// (0x00050bed) cale_month_pane_g7

0x24be,	// (0x00050c59) cale_month_pane_g8_ParamLimits

0x24be,	// (0x00050c59) cale_month_pane_g8

0x252a,	// (0x00050cc5) cale_month_pane_g9_ParamLimits

0x252a,	// (0x00050cc5) cale_month_pane_g9

0x258e,	// (0x00050d29) cale_month_pane_g10_ParamLimits

0x258e,	// (0x00050d29) cale_month_pane_g10

0x25e0,	// (0x00050d7b) cale_month_pane_g11_ParamLimits

0x25e0,	// (0x00050d7b) cale_month_pane_g11

0x2632,	// (0x00050dcd) cale_month_pane_g12_ParamLimits

0x2632,	// (0x00050dcd) cale_month_pane_g12

0x268a,	// (0x00050e25) cale_month_pane_g13_ParamLimits

0x268a,	// (0x00050e25) cale_month_pane_g13

0x000c,

0xf287,	// (0x0005da22) cale_month_pane_g_ParamLimits

0xf287,	// (0x0005da22) cale_month_pane_g

0x26e2,	// (0x00050e7d) cale_month_week_pane

0x2706,	// (0x00050ea1) grid_cale_month_pane_ParamLimits

0x2706,	// (0x00050ea1) grid_cale_month_pane

0x2767,	// (0x00050f02) cale_month_day_heading_pane_t1

0x27ed,	// (0x00050f88) cale_month_day_heading_pane_t2

0x2866,	// (0x00051001) cale_month_day_heading_pane_t3

0x28df,	// (0x0005107a) cale_month_day_heading_pane_t4

0x2960,	// (0x000510fb) cale_month_day_heading_pane_t5

0x29e9,	// (0x00051184) cale_month_day_heading_pane_t6

0x2a7a,	// (0x00051215) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0005da3d) cale_month_day_heading_pane_t

0xa40a,	// (0x00058ba5) bg_cale_side_pane_cp01

0x2b0b,	// (0x000512a6) cale_month_week_pane_t1

0x2b24,	// (0x000512bf) cale_month_week_pane_t2

0x2b3d,	// (0x000512d8) cale_month_week_pane_t3

0x2b56,	// (0x000512f1) cale_month_week_pane_t4

0x2b6f,	// (0x0005130a) cale_month_week_pane_t5

0x2b88,	// (0x00051323) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0005da4c) cale_month_week_pane_t

0x2bad,	// (0x00051348) cell_cale_month_pane_ParamLimits

0x2bad,	// (0x00051348) cell_cale_month_pane

0xa630,	// (0x00058dcb) cell_cale_month_pane_g1

0x2cf7,	// (0x00051492) cell_cale_month_pane_t1_ParamLimits

0x2cf7,	// (0x00051492) cell_cale_month_pane_t1

0xa418,	// (0x00058bb3) grid_highlight_pane_cp08

0xa2ca,	// (0x00058a65) main_smil_g1

0x2d23,	// (0x000514be) smil_status_pane

0xaebc,	// (0x00059657) smil_text_pane

0xc801,	// (0x0005af9c) bg_popup_call3_rect_pane_g8

0xc809,	// (0x0005afa4) bg_popup_call3_rect_pane_g9

0x0008,

0xf571,	// (0x0005dd0c) bg_popup_call3_rect_pane_g

0xca67,	// (0x0005b202) smil_status_volume_pane_g1

0xaec6,	// (0x00059661) smil_status_pane_t1

0xa786,	// (0x00058f21) volume_smil_pane

0xaedd,	// (0x00059678) list_smil_text_pane

0x2d38,	// (0x000514d3) scroll_pane_cp011

0x2d43,	// (0x000514de) smil_text_list_pane_t1_ParamLimits

0x2d43,	// (0x000514de) smil_text_list_pane_t1

0xa63c,	// (0x00058dd7) aid_volume_smil_ParamLimits

0xa63c,	// (0x00058dd7) aid_volume_smil

0xa2ca,	// (0x00058a65) smil_volume_pane_g1

0xa2ca,	// (0x00058a65) smil_volume_pane_g2

0x0001,

0xf2d8,	// (0x0005da73) smil_volume_pane_g

0x1302,	// (0x0004fa9d) listscroll_cale_day_pane

0xaee7,	// (0x00059682) bg_cale_pane

0xaeff,	// (0x0005969a) list_cale_pane

0xaf22,	// (0x000596bd) scroll_pane_cp09

0xaf33,	// (0x000596ce) cale_bg_pane_g1

0xaf3b,	// (0x000596d6) cale_bg_pane_g2

0xaf43,	// (0x000596de) cale_bg_pane_g3

0xaf4b,	// (0x000596e6) cale_bg_pane_g4

0xaf53,	// (0x000596ee) cale_bg_pane_g5

0xaf5b,	// (0x000596f6) cale_bg_pane_g6

0xaf63,	// (0x000596fe) cale_bg_pane_g7

0xaf6b,	// (0x00059706) cale_bg_pane_g8

0xaf73,	// (0x0005970e) cale_bg_pane_g9

0x0008,

0xf2dd,	// (0x0005da78) cale_bg_pane_g

0x2d96,	// (0x00051531) list_cale_time_pane_ParamLimits

0x2d96,	// (0x00051531) list_cale_time_pane

0xaf7b,	// (0x00059716) list_cale_time_pane_g1_ParamLimits

0xaf7b,	// (0x00059716) list_cale_time_pane_g1

0xaf87,	// (0x00059722) list_cale_time_pane_g2_ParamLimits

0xaf87,	// (0x00059722) list_cale_time_pane_g2

0x2db0,	// (0x0005154b) list_cale_time_pane_g3_ParamLimits

0x2db0,	// (0x0005154b) list_cale_time_pane_g3

0x2dbe,	// (0x00051559) list_cale_time_pane_g4_ParamLimits

0x2dbe,	// (0x00051559) list_cale_time_pane_g4

0x2dcc,	// (0x00051567) list_cale_time_pane_g5_ParamLimits

0x2dcc,	// (0x00051567) list_cale_time_pane_g5

0x0005,

0xf2f0,	// (0x0005da8b) list_cale_time_pane_g_ParamLimits

0xf2f0,	// (0x0005da8b) list_cale_time_pane_g

0xafa1,	// (0x0005973c) list_cale_time_pane_t1_ParamLimits

0xafa1,	// (0x0005973c) list_cale_time_pane_t1

0xafc9,	// (0x00059764) list_cale_time_pane_t2_ParamLimits

0xafc9,	// (0x00059764) list_cale_time_pane_t2

0x30a2,	// (0x0005183d) aid_blid_cardinal_pane

0x30e4,	// (0x0005187f) compass_pane_t4

0xaff1,	// (0x0005978c) list_cale_time_pane_t4_ParamLimits

0xaff1,	// (0x0005978c) list_cale_time_pane_t4

0x30f2,	// (0x0005188d) compass_pane_t5

0x3102,	// (0x0005189d) compass_pane_t6

0x3110,	// (0x000518ab) compass_pane_t7

0xb475,	// (0x00059c10) navi_pane_cc_t1

0xb654,	// (0x00059def) aid_phob_thumbnail_center_pane

0x3709,	// (0x00051ea4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fd,	// (0x0005da98) list_cale_time_pane_t_ParamLimits

0xf2fd,	// (0x0005da98) list_cale_time_pane_t

0x9b66,	// (0x00058301) bg_popup_window_pane_cp02_ParamLimits

0x9b66,	// (0x00058301) bg_popup_window_pane_cp02

0xb019,	// (0x000597b4) heading_pane_cp01_ParamLimits

0xb019,	// (0x000597b4) heading_pane_cp01

0xb025,	// (0x000597c0) loc_req_pane_ParamLimits

0xb025,	// (0x000597c0) loc_req_pane

0xb035,	// (0x000597d0) loc_type_pane_ParamLimits

0xb035,	// (0x000597d0) loc_type_pane

0xb047,	// (0x000597e2) loc_type_pane_t1_ParamLimits

0xb047,	// (0x000597e2) loc_type_pane_t1

0xb059,	// (0x000597f4) loc_type_pane_t2_ParamLimits

0xb059,	// (0x000597f4) loc_type_pane_t2

0xb06b,	// (0x00059806) loc_type_pane_t3_ParamLimits

0xb06b,	// (0x00059806) loc_type_pane_t3

0x0002,

0xf304,	// (0x0005da9f) loc_type_pane_t_ParamLimits

0xf304,	// (0x0005da9f) loc_type_pane_t

0xb07d,	// (0x00059818) list_loc_req_pane

0xb087,	// (0x00059822) scroll_pane_cp012

0x2dda,	// (0x00051575) list_single_loc_request_popup_menu_pane_ParamLimits

0x2dda,	// (0x00051575) list_single_loc_request_popup_menu_pane

0xb092,	// (0x0005982d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb092,	// (0x0005982d) list_single_loc_request_popup_menu_pane_g1

0xb09e,	// (0x00059839) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb09e,	// (0x00059839) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30b,	// (0x0005daa6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30b,	// (0x0005daa6) list_single_loc_request_popup_menu_pane_g

0xb0aa,	// (0x00059845) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb0aa,	// (0x00059845) list_single_loc_request_popup_menu_pane_t1

0xa16a,	// (0x00058905) bg_popup_window_pane_cp03_ParamLimits

0xa16a,	// (0x00058905) bg_popup_window_pane_cp03

0xb0c0,	// (0x0005985b) heading_loc_req_pane_ParamLimits

0xb0c0,	// (0x0005985b) heading_loc_req_pane

0x2de7,	// (0x00051582) popup_dyc_status_message_window_g1_ParamLimits

0x2de7,	// (0x00051582) popup_dyc_status_message_window_g1

0x2dfb,	// (0x00051596) popup_dyc_status_message_window_t1_ParamLimits

0x2dfb,	// (0x00051596) popup_dyc_status_message_window_t1

0x2e10,	// (0x000515ab) popup_dyc_status_message_window_t2_ParamLimits

0x2e10,	// (0x000515ab) popup_dyc_status_message_window_t2

0x2e25,	// (0x000515c0) popup_dyc_status_message_window_t3_ParamLimits

0x2e25,	// (0x000515c0) popup_dyc_status_message_window_t3

0x0002,

0xf310,	// (0x0005daab) popup_dyc_status_message_window_t_ParamLimits

0xf310,	// (0x0005daab) popup_dyc_status_message_window_t

0x9f0f,	// (0x000586aa) bg_heading_pane_cp01

0xb0cc,	// (0x00059867) heading_loc_req_pane_g1

0xb0d4,	// (0x0005986f) heading_loc_req_pane_g2

0xb0dc,	// (0x00059877) heading_loc_req_pane_g3

0x0002,

0xf317,	// (0x0005dab2) heading_loc_req_pane_g

0xb0e4,	// (0x0005987f) heading_loc_req_pane_t1

0xb0f4,	// (0x0005988f) bg_popup_sub_pane_cp01_ParamLimits

0xb0f4,	// (0x0005988f) bg_popup_sub_pane_cp01

0xb102,	// (0x0005989d) popup_cale_events_window_g1_ParamLimits

0xb102,	// (0x0005989d) popup_cale_events_window_g1

0xb122,	// (0x000598bd) popup_cale_events_window_g2_ParamLimits

0xb122,	// (0x000598bd) popup_cale_events_window_g2

0x0001,

0xf34b,	// (0x0005dae6) popup_cale_events_window_g_ParamLimits

0xf34b,	// (0x0005dae6) popup_cale_events_window_g

0xb142,	// (0x000598dd) popup_cale_events_window_t1_ParamLimits

0xb142,	// (0x000598dd) popup_cale_events_window_t1

0xb154,	// (0x000598ef) popup_cale_events_window_t2_ParamLimits

0xb154,	// (0x000598ef) popup_cale_events_window_t2

0xb192,	// (0x0005992d) popup_cale_events_window_t3_ParamLimits

0xb192,	// (0x0005992d) popup_cale_events_window_t3

0xb1cc,	// (0x00059967) popup_cale_events_window_t4_ParamLimits

0xb1cc,	// (0x00059967) popup_cale_events_window_t4

0x0003,

0xf350,	// (0x0005daeb) popup_cale_events_window_t_ParamLimits

0xf350,	// (0x0005daeb) popup_cale_events_window_t

0x2e4d,	// (0x000515e8) call_type_pane

0x2e5d,	// (0x000515f8) popup_call_status_window_g1

0x2e71,	// (0x0005160c) popup_call_status_window_g2

0x2e85,	// (0x00051620) popup_call_status_window_g3

0x0002,

0xf359,	// (0x0005daf4) popup_call_status_window_g

0xb202,	// (0x0005999d) call_type_pane_g1

0xb20b,	// (0x000599a6) call_type_pane_g2

0x0001,

0xf360,	// (0x0005dafb) call_type_pane_g

0x9f0f,	// (0x000586aa) bg_popup_sub_pane_cp02

0xb214,	// (0x000599af) listscroll_popup_wml_pane

0xb21c,	// (0x000599b7) list_wml_pane

0xb226,	// (0x000599c1) scroll_pane_cp013

0xb231,	// (0x000599cc) list_single_graphic_popup_wml_pane_ParamLimits

0xb231,	// (0x000599cc) list_single_graphic_popup_wml_pane

0xa2ca,	// (0x00058a65) list_single_graphic_popup_wml_pane_g1

0xb245,	// (0x000599e0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf365,	// (0x0005db00) list_single_graphic_popup_wml_pane_g

0xb24d,	// (0x000599e8) list_single_graphic_popup_wml_pane_t1

0xb263,	// (0x000599fe) aid_call_pane

0xa162,	// (0x000588fd) popup_clock_analogue_window_g1

0xa162,	// (0x000588fd) popup_clock_analogue_window_g2

0xa65e,	// (0x00058df9) popup_clock_analogue_window_g3

0xa65e,	// (0x00058df9) popup_clock_analogue_window_g4

0xa2ca,	// (0x00058a65) popup_clock_analogue_window_g5

0x0004,

0xf36a,	// (0x0005db05) popup_clock_analogue_window_g

0xa666,	// (0x00058e01) popup_clock_analogue_window_t1

0xa674,	// (0x00058e0f) clock_digital_number_pane_ParamLimits

0xa674,	// (0x00058e0f) clock_digital_number_pane

0xa680,	// (0x00058e1b) clock_digital_number_pane_cp02_ParamLimits

0xa680,	// (0x00058e1b) clock_digital_number_pane_cp02

0xa68c,	// (0x00058e27) clock_digital_number_pane_cp03_ParamLimits

0xa68c,	// (0x00058e27) clock_digital_number_pane_cp03

0xa698,	// (0x00058e33) clock_digital_number_pane_cp04_ParamLimits

0xa698,	// (0x00058e33) clock_digital_number_pane_cp04

0xa6a4,	// (0x00058e3f) clock_digital_separator_pane_ParamLimits

0xa6a4,	// (0x00058e3f) clock_digital_separator_pane

0xa6b0,	// (0x00058e4b) popup_clock_digital_window_t1

0xa2ca,	// (0x00058a65) clock_digital_number_pane_g1

0xa2ca,	// (0x00058a65) clock_digital_number_pane_g2

0x0001,

0xf2d8,	// (0x0005da73) clock_digital_number_pane_g

0xa2ca,	// (0x00058a65) clock_digital_separator_pane_g1

0xa2ca,	// (0x00058a65) clock_digital_separator_pane_g2

0x0001,

0xf2d8,	// (0x0005da73) clock_digital_separator_pane_g

0x9f0f,	// (0x000586aa) bg_popup_window_pane_cp04

0xb26b,	// (0x00059a06) heading_pane_cp03

0xb273,	// (0x00059a0e) listscroll_popup_gms_pane

0xb27b,	// (0x00059a16) grid_large_graphic_popup_pane

0xb285,	// (0x00059a20) listscroll_popup_gms_pane_g1

0xb28d,	// (0x00059a28) listscroll_popup_gms_pane_g2

0x0001,

0xf375,	// (0x0005db10) listscroll_popup_gms_pane_g

0xa61c,	// (0x00058db7) scroll_pane_cp014

0x2e95,	// (0x00051630) cell_large_graphic_popup_pane_ParamLimits

0x2e95,	// (0x00051630) cell_large_graphic_popup_pane

0x2ead,	// (0x00051648) cell_large_graphic_popup_pane_g1_ParamLimits

0x2ead,	// (0x00051648) cell_large_graphic_popup_pane_g1

0xb295,	// (0x00059a30) cell_large_graphic_popup_pane_g2_ParamLimits

0xb295,	// (0x00059a30) cell_large_graphic_popup_pane_g2

0xb2a1,	// (0x00059a3c) cell_large_graphic_popup_pane_g3_ParamLimits

0xb2a1,	// (0x00059a3c) cell_large_graphic_popup_pane_g3

0xb2ae,	// (0x00059a49) cell_large_graphic_popup_pane_g4_ParamLimits

0xb2ae,	// (0x00059a49) cell_large_graphic_popup_pane_g4

0x0003,

0xf37a,	// (0x0005db15) cell_large_graphic_popup_pane_g_ParamLimits

0xf37a,	// (0x0005db15) cell_large_graphic_popup_pane_g

0xb2be,	// (0x00059a59) grid_highlight_pane_cp010

0xa2ca,	// (0x00058a65) bg_popup_call_pane_g1

0xb2c8,	// (0x00059a63) list_single_graphic_popup_conf_pane_ParamLimits

0xb2c8,	// (0x00059a63) list_single_graphic_popup_conf_pane

0xb2da,	// (0x00059a75) list_highlight_pane_cp01

0xb2e3,	// (0x00059a7e) list_single_graphic_popup_conf_pane_g1

0xb2eb,	// (0x00059a86) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf383,	// (0x0005db1e) list_single_graphic_popup_conf_pane_g

0xb2f3,	// (0x00059a8e) list_single_graphic_popup_conf_pane_t1

0xb301,	// (0x00059a9c) linegrid_cams_pane_g1

0x2eb9,	// (0x00051654) linegrid_cams_pane_g2

0xa44b,	// (0x00058be6) linegrid_cams_pane_g3

0xb30a,	// (0x00059aa5) linegrid_cams_pane_g4

0x2ec2,	// (0x0005165d) linegrid_cams_pane_g5

0x2ecb,	// (0x00051666) linegrid_cams_pane_g6

0xa454,	// (0x00058bef) linegrid_cams_pane_g7

0x0006,

0xf388,	// (0x0005db23) linegrid_cams_pane_g

0xb313,	// (0x00059aae) popup_clock_analogue_window

0xb313,	// (0x00059aae) popup_clock_digital_window

0x9f0f,	// (0x000586aa) popup_phob_thumbnail_window

0xa2ca,	// (0x00058a65) call_video_uplink_pane_g1

0xb31c,	// (0x00059ab7) call_video_uplink_pane_g2

0x0001,

0xf397,	// (0x0005db32) call_video_uplink_pane_g

0xb324,	// (0x00059abf) video_uplink_pane

0xb32c,	// (0x00059ac7) mce_image_pane_g1

0x2ed6,	// (0x00051671) mce_image_pane_g2

0x2ee0,	// (0x0005167b) mce_image_pane_g3

0x2eea,	// (0x00051685) mce_image_pane_g4

0x2ef2,	// (0x0005168d) mce_image_pane_g5

0x0004,

0xf39c,	// (0x0005db37) mce_image_pane_g

0xb336,	// (0x00059ad1) control_top_pane_stacon_cp01_ParamLimits

0xb336,	// (0x00059ad1) control_top_pane_stacon_cp01

0xb34a,	// (0x00059ae5) uni_indicator_pane_stacon_cp01_ParamLimits

0xb34a,	// (0x00059ae5) uni_indicator_pane_stacon_cp01

0xb35b,	// (0x00059af6) bg_popup_sub_pane_cp03

0x2efa,	// (0x00051695) chi_dic_find_pane

0x2f02,	// (0x0005169d) listscroll_chi_dic_pane

0x2f0b,	// (0x000516a6) main_pane_chidic_g1

0x2f1e,	// (0x000516b9) chi_dic_find_pane_t1

0xb365,	// (0x00059b00) find_chidic_pane

0xb36e,	// (0x00059b09) chi_dic_list_pane_ParamLimits

0xb36e,	// (0x00059b09) chi_dic_list_pane

0xb37f,	// (0x00059b1a) scroll_pane_cp020

0x2f2c,	// (0x000516c7) find_chidic_pane_t1

0x9f0f,	// (0x000586aa) input_focus_pane_cp06

0x2f3b,	// (0x000516d6) list_chi_dic_pane_ParamLimits

0x2f3b,	// (0x000516d6) list_chi_dic_pane

0x2f4d,	// (0x000516e8) list_chi_dic_pane_t1_ParamLimits

0x2f4d,	// (0x000516e8) list_chi_dic_pane_t1

0x9f0f,	// (0x000586aa) list_highlight_pane_cp020

0xb387,	// (0x00059b22) bg_cale_heading_pane_g1

0x2f60,	// (0x000516fb) bg_cale_heading_pane_g2

0x2f68,	// (0x00051703) bg_cale_heading_pane_g3

0x2f70,	// (0x0005170b) bg_cale_heading_pane_g4

0x2f7a,	// (0x00051715) bg_cale_heading_pane_g5

0x2f84,	// (0x0005171f) bg_cale_heading_pane_g6

0x2f8c,	// (0x00051727) bg_cale_heading_pane_g7

0x2f94,	// (0x0005172f) bg_cale_heading_pane_g8

0x2f9e,	// (0x00051739) bg_cale_heading_pane_g9

0x0008,

0xf3a7,	// (0x0005db42) bg_cale_heading_pane_g

0xb387,	// (0x00059b22) bg_cale_side_pane_g1

0x2fa8,	// (0x00051743) bg_cale_side_pane_g2

0x2fb2,	// (0x0005174d) bg_cale_side_pane_g3

0x2fbc,	// (0x00051757) bg_cale_side_pane_g4

0x2fc6,	// (0x00051761) bg_cale_side_pane_g5

0x2fd0,	// (0x0005176b) bg_cale_side_pane_g6

0x2fda,	// (0x00051775) bg_cale_side_pane_g7

0x2fe4,	// (0x0005177f) bg_cale_side_pane_g8

0x2fec,	// (0x00051787) bg_cale_side_pane_g9

0x0008,

0xf3ba,	// (0x0005db55) bg_cale_side_pane_g

0x2ff4,	// (0x0005178f) popup_call_status_window_ParamLimits

0x2ff4,	// (0x0005178f) popup_call_status_window

0xb38f,	// (0x00059b2a) stacon_top_pane

0xb397,	// (0x00059b32) status_pane_ParamLimits

0xb397,	// (0x00059b32) status_pane

0xb3ac,	// (0x00059b47) status_small_pane

0xb3b4,	// (0x00059b4f) control_pane

0x9f0f,	// (0x000586aa) stacon_bottom_pane

0xb3bc,	// (0x00059b57) list_single_mce_smart_pane_t1_ParamLimits

0xb3bc,	// (0x00059b57) list_single_mce_smart_pane_t1

0xb3cf,	// (0x00059b6a) list_single_mce_smart_pane_t2_ParamLimits

0xb3cf,	// (0x00059b6a) list_single_mce_smart_pane_t2

0x0001,

0xf3cd,	// (0x0005db68) list_single_mce_smart_pane_t_ParamLimits

0xf3cd,	// (0x0005db68) list_single_mce_smart_pane_t

0x3041,	// (0x000517dc) compass_pane

0x304c,	// (0x000517e7) main_location2_pane_t1

0x3062,	// (0x000517fd) main_location2_pane_t2

0x3078,	// (0x00051813) main_location2_pane_t3

0x0003,

0xf3d2,	// (0x0005db6d) main_location2_pane_t

0xb3ee,	// (0x00059b89) compass_pane_g1_ParamLimits

0xb3ee,	// (0x00059b89) compass_pane_g1

0x30c6,	// (0x00051861) compass_pane_t1

0x30d5,	// (0x00051870) compass_pane_t2

0x0005,

0xf3db,	// (0x0005db76) compass_pane_t

0x3120,	// (0x000518bb) text_secondary_cp61

0xb46c,	// (0x00059c07) navi_pane_cams_g5

0xb4e8,	// (0x00059c83) navi_pane_im_t1

0xb4f6,	// (0x00059c91) navi_pane_mp_g1_ParamLimits

0xb4f6,	// (0x00059c91) navi_pane_mp_g1

0xb50a,	// (0x00059ca5) navi_pane_mp_g2_ParamLimits

0xb50a,	// (0x00059ca5) navi_pane_mp_g2

0xb516,	// (0x00059cb1) navi_pane_mp_g3_ParamLimits

0xb516,	// (0x00059cb1) navi_pane_mp_g3

0x0002,

0xf3ef,	// (0x0005db8a) navi_pane_mp_g_ParamLimits

0xf3ef,	// (0x0005db8a) navi_pane_mp_g

0xb522,	// (0x00059cbd) navi_pane_mp_t1

0xb530,	// (0x00059ccb) navi_pane_mp_t2

0x0002,

0xf3f6,	// (0x0005db91) navi_pane_mp_t

0xb59d,	// (0x00059d38) navi_pane_vt_g1

0xb522,	// (0x00059cbd) navi_pane_vt_t1

0xb5a5,	// (0x00059d40) navi_slider_pane

0xa465,	// (0x00058c00) zooming_pane

0xb5b5,	// (0x00059d50) navi_slider_pane_g1

0xa6cd,	// (0x00058e68) navi_slider_pane_g2

0x0006,

0xf3fd,	// (0x0005db98) navi_slider_pane_g

0xb5d9,	// (0x00059d74) aid_levels_zoom

0xb5e1,	// (0x00059d7c) zooming_pane_g1

0xb5e9,	// (0x00059d84) zooming_pane_g2

0xb5e9,	// (0x00059d84) zooming_pane_g3

0x0002,

0xf40c,	// (0x0005dba7) zooming_pane_g

0xb5f1,	// (0x00059d8c) level_10_zoom

0xb5fa,	// (0x00059d95) level_11_zoom

0xb603,	// (0x00059d9e) level_1_zoom

0xb60c,	// (0x00059da7) level_2_zoom

0xb615,	// (0x00059db0) level_3_zoom

0xb61e,	// (0x00059db9) level_4_zoom

0xb627,	// (0x00059dc2) level_5_zoom

0xb630,	// (0x00059dcb) level_6_zoom

0xb639,	// (0x00059dd4) level_7_zoom

0xb642,	// (0x00059ddd) level_8_zoom

0xb64b,	// (0x00059de6) level_9_zoom

0xb65c,	// (0x00059df7) popup_phob_thumbnail_window_g1

0xb664,	// (0x00059dff) popup_phob_thumbnail_window_g2

0x0001,

0xf413,	// (0x0005dbae) popup_phob_thumbnail_window_g

0xc967,	// (0x0005b102) level_1_location

0xc96f,	// (0x0005b10a) level_2_location

0xc977,	// (0x0005b112) level_3_location

0xc97f,	// (0x0005b11a) level_4_location

0xa465,	// (0x00058c00) level_5_location

0x3171,	// (0x0005190c) mce_icon_pane_g1

0x317b,	// (0x00051916) mce_icon_pane_g2

0x0001,

0xf418,	// (0x0005dbb3) mce_icon_pane_g

0x3183,	// (0x0005191e) main_mup_pane_g1_ParamLimits

0x3183,	// (0x0005191e) main_mup_pane_g1

0x3199,	// (0x00051934) main_mup_pane_g2_ParamLimits

0x3199,	// (0x00051934) main_mup_pane_g2

0x31b1,	// (0x0005194c) main_mup_pane_g3_ParamLimits

0x31b1,	// (0x0005194c) main_mup_pane_g3

0x31c9,	// (0x00051964) main_mup_pane_g4_ParamLimits

0x31c9,	// (0x00051964) main_mup_pane_g4

0x31db,	// (0x00051976) main_mup_pane_g5_ParamLimits

0x31db,	// (0x00051976) main_mup_pane_g5

0x31f7,	// (0x00051992) main_mup_pane_g6_ParamLimits

0x31f7,	// (0x00051992) main_mup_pane_g6

0x3211,	// (0x000519ac) main_mup_pane_g7_ParamLimits

0x3211,	// (0x000519ac) main_mup_pane_g7

0x322f,	// (0x000519ca) main_mup_pane_g8_ParamLimits

0x322f,	// (0x000519ca) main_mup_pane_g8

0x324d,	// (0x000519e8) main_mup_pane_g9_ParamLimits

0x324d,	// (0x000519e8) main_mup_pane_g9

0x3269,	// (0x00051a04) main_mup_pane_g10_ParamLimits

0x3269,	// (0x00051a04) main_mup_pane_g10

0x3287,	// (0x00051a22) main_mup_pane_g11_ParamLimits

0x3287,	// (0x00051a22) main_mup_pane_g11

0x32a1,	// (0x00051a3c) main_mup_pane_g12_ParamLimits

0x32a1,	// (0x00051a3c) main_mup_pane_g12

0x32b7,	// (0x00051a52) main_mup_pane_g13_ParamLimits

0x32b7,	// (0x00051a52) main_mup_pane_g13

0x000c,

0xf41d,	// (0x0005dbb8) main_mup_pane_g_ParamLimits

0xf41d,	// (0x0005dbb8) main_mup_pane_g

0x32cb,	// (0x00051a66) main_mup_pane_t1_ParamLimits

0x32cb,	// (0x00051a66) main_mup_pane_t1

0x32e7,	// (0x00051a82) main_mup_pane_t2_ParamLimits

0x32e7,	// (0x00051a82) main_mup_pane_t2

0x32ff,	// (0x00051a9a) main_mup_pane_t3_ParamLimits

0x32ff,	// (0x00051a9a) main_mup_pane_t3

0x3317,	// (0x00051ab2) main_mup_pane_t4_ParamLimits

0x3317,	// (0x00051ab2) main_mup_pane_t4

0x3335,	// (0x00051ad0) main_mup_pane_t5_ParamLimits

0x3335,	// (0x00051ad0) main_mup_pane_t5

0x334a,	// (0x00051ae5) main_mup_pane_t6_ParamLimits

0x334a,	// (0x00051ae5) main_mup_pane_t6

0x0005,

0xf438,	// (0x0005dbd3) main_mup_pane_t_ParamLimits

0xf438,	// (0x0005dbd3) main_mup_pane_t

0x335c,	// (0x00051af7) mup_progress_pane_ParamLimits

0x335c,	// (0x00051af7) mup_progress_pane

0x3368,	// (0x00051b03) mup_visualizer_pane_ParamLimits

0x3368,	// (0x00051b03) mup_visualizer_pane

0x339c,	// (0x00051b37) mup_volume_pane_ParamLimits

0x339c,	// (0x00051b37) mup_volume_pane

0xb66c,	// (0x00059e07) mup_visualizer_pane_g1_ParamLimits

0xb66c,	// (0x00059e07) mup_visualizer_pane_g1

0xb66c,	// (0x00059e07) mup_visualizer_pane_g2_ParamLimits

0xb66c,	// (0x00059e07) mup_visualizer_pane_g2

0xb3ee,	// (0x00059b89) mup_visualizer_pane_g3_ParamLimits

0xb3ee,	// (0x00059b89) mup_visualizer_pane_g3

0x0002,

0xf445,	// (0x0005dbe0) mup_visualizer_pane_g_ParamLimits

0xf445,	// (0x0005dbe0) mup_visualizer_pane_g

0xa2ca,	// (0x00058a65) mup_volume_pane_g1

0xb682,	// (0x00059e1d) mup_volume_pane_g2

0x0001,

0xf44c,	// (0x0005dbe7) mup_volume_pane_g

0xa2ca,	// (0x00058a65) mup_progress_pane_g1

0xb68b,	// (0x00059e26) mup_progress_pane_g2

0xb694,	// (0x00059e2f) mup_progress_pane_g3

0x0002,

0xf451,	// (0x0005dbec) mup_progress_pane_g

0x9f0f,	// (0x000586aa) bg_popup_window_pane_cp05

0xb69d,	// (0x00059e38) heading_pane_cp02_ParamLimits

0xb69d,	// (0x00059e38) heading_pane_cp02

0xb6b9,	// (0x00059e54) list_popup_blid_pane

0xb6c1,	// (0x00059e5c) list_blid_sat_info_pane_ParamLimits

0xb6c1,	// (0x00059e5c) list_blid_sat_info_pane

0xb6d4,	// (0x00059e6f) list_blid_sat_info_pane_g1

0xb6dc,	// (0x00059e77) list_blid_sat_info_pane_t1

0x34c6,	// (0x00051c61) mup_equalizer_pane_ParamLimits

0x34c6,	// (0x00051c61) mup_equalizer_pane

0x34e7,	// (0x00051c82) mup_equalizer_pane_cp1_ParamLimits

0x34e7,	// (0x00051c82) mup_equalizer_pane_cp1

0x3508,	// (0x00051ca3) mup_equalizer_pane_cp2_ParamLimits

0x3508,	// (0x00051ca3) mup_equalizer_pane_cp2

0x352d,	// (0x00051cc8) mup_equalizer_pane_cp3_ParamLimits

0x352d,	// (0x00051cc8) mup_equalizer_pane_cp3

0x3556,	// (0x00051cf1) mup_equalizer_pane_cp4_ParamLimits

0x3556,	// (0x00051cf1) mup_equalizer_pane_cp4

0x357f,	// (0x00051d1a) mup_equalizer_pane_cp5

0x3597,	// (0x00051d32) mup_equalizer_pane_cp6

0x35af,	// (0x00051d4a) mup_equalizer_pane_cp7

0xc881,	// (0x0005b01c) bg_popup_call_poc_act_pane_g9

0xc889,	// (0x0005b024) bg_popup_call_poc_act_pane_g10

0xc891,	// (0x0005b02c) bg_popup_call_poc_act_pane_g11

0x000a,

0xa16a,	// (0x00058905) mup_scale_pane

0xa2ca,	// (0x00058a65) mup_scale_pane_g1

0xb6ea,	// (0x00059e85) mup_scale_pane_g2

0x0006,

0xf46d,	// (0x0005dc08) mup_scale_pane_g

0xb70e,	// (0x00059ea9) msg_data_pane

0xb716,	// (0x00059eb1) scroll_pane_cp017

0xfd9d,	// (0x0004e538) bg_list_pane_cp04_ParamLimits

0xfd9d,	// (0x0004e538) bg_list_pane_cp04

0xb71e,	// (0x00059eb9) msg_data_pane_g1

0x35d9,	// (0x00051d74) msg_data_pane_g2

0x35e3,	// (0x00051d7e) msg_data_pane_g3

0x35ed,	// (0x00051d88) msg_data_pane_g4

0x35f5,	// (0x00051d90) msg_data_pane_g5

0x35fd,	// (0x00051d98) msg_data_pane_g6

0x3605,	// (0x00051da0) msg_data_pane_g7

0x0006,

0xf47c,	// (0x0005dc17) msg_data_pane_g

0xfdc3,	// (0x0004e55e) msg_text_pane_ParamLimits

0xfdc3,	// (0x0004e55e) msg_text_pane

0x360d,	// (0x00051da8) qrid_highlight_pane_cp011_ParamLimits

0x360d,	// (0x00051da8) qrid_highlight_pane_cp011

0x9f0f,	// (0x000586aa) msg_body_pane

0x9f0f,	// (0x000586aa) msg_header_pane

0xb72f,	// (0x00059eca) input_focus_pane_cp07

0xfe0e,	// (0x0004e5a9) msg_header_pane_t1_ParamLimits

0xfe0e,	// (0x0004e5a9) msg_header_pane_t1

0xfe20,	// (0x0004e5bb) msg_header_pane_t2_ParamLimits

0xfe20,	// (0x0004e5bb) msg_header_pane_t2

0x0001,

0xf490,	// (0x0005dc2b) msg_header_pane_t_ParamLimits

0xf490,	// (0x0005dc2b) msg_header_pane_t

0xb744,	// (0x00059edf) msg_body_pane_g1

0xfe32,	// (0x0004e5cd) msg_body_pane_t1_ParamLimits

0xfe32,	// (0x0004e5cd) msg_body_pane_t1

0xfe63,	// (0x0004e5fe) msg_body_pane_t2_ParamLimits

0xfe63,	// (0x0004e5fe) msg_body_pane_t2

0xfe75,	// (0x0004e610) msg_body_pane_t3_ParamLimits

0xfe75,	// (0x0004e610) msg_body_pane_t3

0x0002,

0xf495,	// (0x0005dc30) msg_body_pane_t_ParamLimits

0xf495,	// (0x0005dc30) msg_body_pane_t

0x365d,	// (0x00051df8) main_viewer_pane_g1_ParamLimits

0x365d,	// (0x00051df8) main_viewer_pane_g1

0x366b,	// (0x00051e06) main_viewer_pane_g2_ParamLimits

0x366b,	// (0x00051e06) main_viewer_pane_g2

0x3679,	// (0x00051e14) main_viewer_pane_g3_ParamLimits

0x3679,	// (0x00051e14) main_viewer_pane_g3

0x3688,	// (0x00051e23) main_viewer_pane_g4_ParamLimits

0x3688,	// (0x00051e23) main_viewer_pane_g4

0xa6f7,	// (0x00058e92) main_viewer_pane_g5_ParamLimits

0xa6f7,	// (0x00058e92) main_viewer_pane_g5

0xa6f7,	// (0x00058e92) main_viewer_pane_g7_ParamLimits

0xa6f7,	// (0x00058e92) main_viewer_pane_g7

0xa709,	// (0x00058ea4) main_viewer_pane_g8_ParamLimits

0xa709,	// (0x00058ea4) main_viewer_pane_g8

0x0007,

0xf4a5,	// (0x0005dc40) main_viewer_pane_g_ParamLimits

0xf4a5,	// (0x0005dc40) main_viewer_pane_g

0xb74c,	// (0x00059ee7) viewer_content_pane_ParamLimits

0xb74c,	// (0x00059ee7) viewer_content_pane

0x36c6,	// (0x00051e61) main_postcard_pane_g1_ParamLimits

0x36c6,	// (0x00051e61) main_postcard_pane_g1

0x36dc,	// (0x00051e77) main_postcard_pane_g2_ParamLimits

0x36dc,	// (0x00051e77) main_postcard_pane_g2

0x36f2,	// (0x00051e8d) main_postcard_pane_g3_ParamLimits

0x36f2,	// (0x00051e8d) main_postcard_pane_g3

0x0005,

0xf4b6,	// (0x0005dc51) main_postcard_pane_g_ParamLimits

0xf4b6,	// (0x0005dc51) main_postcard_pane_g

0x3709,	// (0x00051ea4) main_postcard_pane_g4

0xca7a,	// (0x0005b215) smil_status_volume_pane_g2

0x374c,	// (0x00051ee7) postcard_pane_ParamLimits

0x374c,	// (0x00051ee7) postcard_pane

0xb75a,	// (0x00059ef5) postcard_pane_g1_ParamLimits

0xb75a,	// (0x00059ef5) postcard_pane_g1

0x379c,	// (0x00051f37) postcard_pane_g2_ParamLimits

0x379c,	// (0x00051f37) postcard_pane_g2

0x37a8,	// (0x00051f43) postcard_pane_g3_ParamLimits

0x37a8,	// (0x00051f43) postcard_pane_g3

0xb768,	// (0x00059f03) postcard_pane_g4_ParamLimits

0xb768,	// (0x00059f03) postcard_pane_g4

0x37b4,	// (0x00051f4f) postcard_pane_g5_ParamLimits

0x37b4,	// (0x00051f4f) postcard_pane_g5

0x37c9,	// (0x00051f64) postcard_pane_g6_ParamLimits

0x37c9,	// (0x00051f64) postcard_pane_g6

0xb75a,	// (0x00059ef5) postcard_pane_g7_ParamLimits

0xb75a,	// (0x00059ef5) postcard_pane_g7

0x0006,

0xf4c3,	// (0x0005dc5e) postcard_pane_g_ParamLimits

0xf4c3,	// (0x0005dc5e) postcard_pane_g

0x37e1,	// (0x00051f7c) main_mp2_pane_g1_ParamLimits

0x37e1,	// (0x00051f7c) main_mp2_pane_g1

0x37ef,	// (0x00051f8a) main_mp2_pane_g2_ParamLimits

0x37ef,	// (0x00051f8a) main_mp2_pane_g2

0x37fb,	// (0x00051f96) main_mp2_pane_g3_ParamLimits

0x37fb,	// (0x00051f96) main_mp2_pane_g3

0x0002,

0xf4d2,	// (0x0005dc6d) main_mp2_pane_g_ParamLimits

0xf4d2,	// (0x0005dc6d) main_mp2_pane_g

0x3807,	// (0x00051fa2) main_mp2_pane_t1_ParamLimits

0x3807,	// (0x00051fa2) main_mp2_pane_t1

0x381e,	// (0x00051fb9) main_mp2_pane_t2_ParamLimits

0x381e,	// (0x00051fb9) main_mp2_pane_t2

0x3832,	// (0x00051fcd) main_mp2_pane_t3_ParamLimits

0x3832,	// (0x00051fcd) main_mp2_pane_t3

0x0002,

0xf4d9,	// (0x0005dc74) main_mp2_pane_t_ParamLimits

0xf4d9,	// (0x0005dc74) main_mp2_pane_t

0xb776,	// (0x00059f11) pec_content_pane_ParamLimits

0xb776,	// (0x00059f11) pec_content_pane

0xa61c,	// (0x00058db7) scroll_pane_cp015

0xb788,	// (0x00059f23) pec_attribute_pane_ParamLimits

0xb788,	// (0x00059f23) pec_attribute_pane

0x3844,	// (0x00051fdf) pec_content_pane_g1_ParamLimits

0x3844,	// (0x00051fdf) pec_content_pane_g1

0xb798,	// (0x00059f33) pec_content_pane_t1_ParamLimits

0xb798,	// (0x00059f33) pec_content_pane_t1

0xb7aa,	// (0x00059f45) pec_content_pane_t2_ParamLimits

0xb7aa,	// (0x00059f45) pec_content_pane_t2

0x0001,

0xf4e0,	// (0x0005dc7b) pec_content_pane_t_ParamLimits

0xf4e0,	// (0x0005dc7b) pec_content_pane_t

0x3850,	// (0x00051feb) list_single_graphic_pane_cp01_ParamLimits

0x3850,	// (0x00051feb) list_single_graphic_pane_cp01

0xa16a,	// (0x00058905) bg_popup_sub_pane_cp04

0xb7bc,	// (0x00059f57) popup_mup_playback_window_g1

0xb7c8,	// (0x00059f63) popup_mup_playback_window_t1

0xb7dd,	// (0x00059f78) popup_mup_playback_window_t2

0x0001,

0xf4e5,	// (0x0005dc80) popup_mup_playback_window_t

0xb814,	// (0x00059faf) main_image_pane_g1_ParamLimits

0xb814,	// (0x00059faf) main_image_pane_g1

0xb857,	// (0x00059ff2) scroll_pane_cp018_ParamLimits

0xb857,	// (0x00059ff2) scroll_pane_cp018

0xb86f,	// (0x0005a00a) scroll_pane_cp016_ParamLimits

0xb86f,	// (0x0005a00a) scroll_pane_cp016

0x3922,	// (0x000520bd) smil2_image_pane_ParamLimits

0x3922,	// (0x000520bd) smil2_image_pane

0x3958,	// (0x000520f3) smil2_root_pane_ParamLimits

0x3958,	// (0x000520f3) smil2_root_pane

0x3990,	// (0x0005212b) smil2_text_pane_ParamLimits

0x3990,	// (0x0005212b) smil2_text_pane

0x9f0f,	// (0x000586aa) bg_list_pane_cp06

0xb8ab,	// (0x0005a046) grid_radio_pane

0x9f0f,	// (0x000586aa) bg_popup_window_pane_cp06

0xb8b5,	// (0x0005a050) main_fmradio_pane_t1

0xb26b,	// (0x00059a06) heading_pane_cp04

0xb8c3,	// (0x0005a05e) main_fmradio_pane_t2

0xc899,	// (0x0005b034) popup_cale_lunar_info_window_g1

0xb8d1,	// (0x0005a06c) main_fmradio_pane_t3

0xc8a1,	// (0x0005b03c) popup_cale_lunar_info_window_g2

0xb8e1,	// (0x0005a07c) main_fmradio_pane_t4

0x0001,

0xb8ef,	// (0x0005a08a) main_fmradio_pane_t5

0x0004,

0xf5c0,	// (0x0005dd5b) popup_cale_lunar_info_window_g

0xf4fa,	// (0x0005dc95) main_fmradio_pane_t

0xb8fd,	// (0x0005a098) wait_bar_pane_cp03

0xb905,	// (0x0005a0a0) cell_fmradio_pane_ParamLimits

0xb905,	// (0x0005a0a0) cell_fmradio_pane

0xb75a,	// (0x00059ef5) cell_fmradio_pane_g1_ParamLimits

0xb75a,	// (0x00059ef5) cell_fmradio_pane_g1

0x9f0f,	// (0x000586aa) grid_highlight_pane_cp011

0xb91a,	// (0x0005a0b5) poc_content_pane_ParamLimits

0xb91a,	// (0x0005a0b5) poc_content_pane

0xb92c,	// (0x0005a0c7) scroll_pane_cp019

0x3a20,	// (0x000521bb) popup_call_poc_act_window_ParamLimits

0x3a20,	// (0x000521bb) popup_call_poc_act_window

0x3a44,	// (0x000521df) popup_call_poc_inact_window_ParamLimits

0x3a44,	// (0x000521df) popup_call_poc_inact_window

0xf597,	// (0x0005dd32) bg_popup_call_poc_act_pane_g

0xc811,	// (0x0005afac) bg_popup_call_poc_inact_pane_g1

0xc819,	// (0x0005afb4) bg_popup_call_poc_inact_pane_g2

0xb934,	// (0x0005a0cf) popup_call_poc_act_window_g2

0xc821,	// (0x0005afbc) bg_popup_call_poc_inact_pane_g3

0xc829,	// (0x0005afc4) bg_popup_call_poc_inact_pane_g4

0xc831,	// (0x0005afcc) bg_popup_call_poc_inact_pane_g5

0xb93c,	// (0x0005a0d7) popup_call_poc_act_window_t1_ParamLimits

0xb93c,	// (0x0005a0d7) popup_call_poc_act_window_t1

0xb964,	// (0x0005a0ff) popup_call_poc_act_window_t2_ParamLimits

0xb964,	// (0x0005a0ff) popup_call_poc_act_window_t2

0xb98c,	// (0x0005a127) popup_call_poc_act_window_t3_ParamLimits

0xb98c,	// (0x0005a127) popup_call_poc_act_window_t3

0xb9b4,	// (0x0005a14f) popup_call_poc_act_window_t4_ParamLimits

0xb9b4,	// (0x0005a14f) popup_call_poc_act_window_t4

0x0003,

0xf505,	// (0x0005dca0) popup_call_poc_act_window_t_ParamLimits

0xf505,	// (0x0005dca0) popup_call_poc_act_window_t

0xc839,	// (0x0005afd4) bg_popup_call_poc_inact_pane_g6

0xc841,	// (0x0005afdc) bg_popup_call_poc_inact_pane_g7

0xc849,	// (0x0005afe4) bg_popup_call_poc_inact_pane_g8

0xb9c6,	// (0x0005a161) popup_call_poc_inact_window_g2

0xc851,	// (0x0005afec) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf584,	// (0x0005dd1f) bg_popup_call_poc_inact_pane_g

0xb9ce,	// (0x0005a169) popup_call_poc_inact_window_t1_ParamLimits

0xb9ce,	// (0x0005a169) popup_call_poc_inact_window_t1

0xb9e3,	// (0x0005a17e) popup_call_poc_inact_window_t2_ParamLimits

0xb9e3,	// (0x0005a17e) popup_call_poc_inact_window_t2

0xb9f8,	// (0x0005a193) popup_call_poc_inact_window_t3_ParamLimits

0xb9f8,	// (0x0005a193) popup_call_poc_inact_window_t3

0x0002,

0xf50e,	// (0x0005dca9) popup_call_poc_inact_window_t_ParamLimits

0xf50e,	// (0x0005dca9) popup_call_poc_inact_window_t

0xc9da,	// (0x0005b175) context_pane_ParamLimits

0x42dd,	// (0x00052a78) signal_pane_ParamLimits

0xa465,	// (0x00058c00) main_call2_pane

0xa752,	// (0x00058eed) popup_phob_thumbnail2_window_ParamLimits

0xa752,	// (0x00058eed) popup_phob_thumbnail2_window

0xa6df,	// (0x00058e7a) aid_hotspot_pointer_arrow_pane

0xa6e7,	// (0x00058e82) aid_hotspot_pointer_hand_pane

0x3daf,	// (0x0005254a) phob_pre_status_pane_g5

0x1957,	// (0x000500f2) cams_zoom_pane_ParamLimits

0x1966,	// (0x00050101) image_vga_pane_ParamLimits

0x1980,	// (0x0005011b) main_camera_pane_g1_ParamLimits

0x1992,	// (0x0005012d) main_camera_pane_g2_ParamLimits

0x19a2,	// (0x0005013d) main_camera_pane_g3_ParamLimits

0x19b6,	// (0x00050151) main_camera_pane_g4_ParamLimits

0x19ca,	// (0x00050165) main_camera_pane_g5_ParamLimits

0x19de,	// (0x00050179) main_camera_pane_g6_ParamLimits

0x19f2,	// (0x0005018d) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0005d9a1) main_camera_pane_g_ParamLimits

0x1a06,	// (0x000501a1) main_camera_pane_t1_ParamLimits

0x1a1c,	// (0x000501b7) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0005d9b2) main_camera_pane_t_ParamLimits

0xa16a,	// (0x00058905) bg_popup_preview_window_pane_cp01_ParamLimits

0xa16a,	// (0x00058905) bg_popup_preview_window_pane_cp01

0xba0d,	// (0x0005a1a8) popup_phob_thumbnail2_window_g1_ParamLimits

0xba0d,	// (0x0005a1a8) popup_phob_thumbnail2_window_g1

0x9f0f,	// (0x000586aa) call2_cli_visual_pane

0x3a78,	// (0x00052213) popup_call2_audio_conf_window_ParamLimits

0x3a78,	// (0x00052213) popup_call2_audio_conf_window

0x3aa0,	// (0x0005223b) popup_call2_audio_first_window_ParamLimits

0x3aa0,	// (0x0005223b) popup_call2_audio_first_window

0x3b36,	// (0x000522d1) popup_call2_audio_in_window_ParamLimits

0x3b36,	// (0x000522d1) popup_call2_audio_in_window

0x3b82,	// (0x0005231d) popup_call2_audio_out_window_ParamLimits

0x3b82,	// (0x0005231d) popup_call2_audio_out_window

0x3bf4,	// (0x0005238f) popup_call2_audio_second_window_ParamLimits

0x3bf4,	// (0x0005238f) popup_call2_audio_second_window

0x3c5a,	// (0x000523f5) popup_call2_audio_wait_window_ParamLimits

0x3c5a,	// (0x000523f5) popup_call2_audio_wait_window

0x9f0f,	// (0x000586aa) bg_popup_call2_act_pane_cp03

0xa14c,	// (0x000588e7) list_conf_pane_cp

0xba19,	// (0x0005a1b4) popup_call2_audio_conf_window_t1

0xba27,	// (0x0005a1c2) list_single_graphic_popup_conf2_pane_ParamLimits

0xba27,	// (0x0005a1c2) list_single_graphic_popup_conf2_pane

0xb2da,	// (0x00059a75) list_highlight_pane_cp04

0xba3a,	// (0x0005a1d5) list_single_graphic_popup_conf2_pane_g1

0xb2eb,	// (0x00059a86) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf515,	// (0x0005dcb0) list_single_graphic_popup_conf2_pane_g

0xba44,	// (0x0005a1df) list_single_graphic_popup_conf2_pane_t1

0xba52,	// (0x0005a1ed) bg_popup_call2_act_pane_cp01_ParamLimits

0xba52,	// (0x0005a1ed) bg_popup_call2_act_pane_cp01

0xbadc,	// (0x0005a277) call_type_pane_cp05_ParamLimits

0xbadc,	// (0x0005a277) call_type_pane_cp05

0xbb30,	// (0x0005a2cb) popup_call2_audio_second_window_g1_ParamLimits

0xbb30,	// (0x0005a2cb) popup_call2_audio_second_window_g1

0xbb84,	// (0x0005a31f) popup_call2_audio_second_window_g2_ParamLimits

0xbb84,	// (0x0005a31f) popup_call2_audio_second_window_g2

0x0002,

0xf51a,	// (0x0005dcb5) popup_call2_audio_second_window_g_ParamLimits

0xf51a,	// (0x0005dcb5) popup_call2_audio_second_window_g

0xbbe9,	// (0x0005a384) popup_call2_audio_second_window_t1_ParamLimits

0xbbe9,	// (0x0005a384) popup_call2_audio_second_window_t1

0xbca4,	// (0x0005a43f) popup_call2_audio_second_window_t2_ParamLimits

0xbca4,	// (0x0005a43f) popup_call2_audio_second_window_t2

0xbcf7,	// (0x0005a492) popup_call2_audio_second_window_t3_ParamLimits

0xbcf7,	// (0x0005a492) popup_call2_audio_second_window_t3

0x0003,

0xf521,	// (0x0005dcbc) popup_call2_audio_second_window_t_ParamLimits

0xf521,	// (0x0005dcbc) popup_call2_audio_second_window_t

0x9f0f,	// (0x000586aa) bg_popup_call2_in_pane_cp02

0x9f19,	// (0x000586b4) call_type_pane_cp04

0x9f21,	// (0x000586bc) popup_call2_audio_wait_window_g1

0x9f29,	// (0x000586c4) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005d890) popup_call2_audio_wait_window_g

0x9f31,	// (0x000586cc) popup_call2_audio_wait_window_t3

0xbdea,	// (0x0005a585) bg_popup_call2_act_pane_ParamLimits

0xbdea,	// (0x0005a585) bg_popup_call2_act_pane

0xbeaa,	// (0x0005a645) call_type_pane_cp03_ParamLimits

0xbeaa,	// (0x0005a645) call_type_pane_cp03

0xbf0e,	// (0x0005a6a9) popup_call2_audio_first_window_g1_ParamLimits

0xbf0e,	// (0x0005a6a9) popup_call2_audio_first_window_g1

0xbf7e,	// (0x0005a719) popup_call2_audio_first_window_g2_ParamLimits

0xbf7e,	// (0x0005a719) popup_call2_audio_first_window_g2

0xb66c,	// (0x00059e07) popup_call2_audio_first_window_g3_ParamLimits

0xb66c,	// (0x00059e07) popup_call2_audio_first_window_g3

0x0004,

0xf52a,	// (0x0005dcc5) popup_call2_audio_first_window_g_ParamLimits

0xf52a,	// (0x0005dcc5) popup_call2_audio_first_window_g

0xc05c,	// (0x0005a7f7) popup_call2_audio_first_window_t1_ParamLimits

0xc05c,	// (0x0005a7f7) popup_call2_audio_first_window_t1

0xc15f,	// (0x0005a8fa) popup_call2_audio_first_window_t4_ParamLimits

0xc15f,	// (0x0005a8fa) popup_call2_audio_first_window_t4

0xc242,	// (0x0005a9dd) popup_call2_audio_first_window_t5_ParamLimits

0xc242,	// (0x0005a9dd) popup_call2_audio_first_window_t5

0x0003,

0xf535,	// (0x0005dcd0) popup_call2_audio_first_window_t_ParamLimits

0xf535,	// (0x0005dcd0) popup_call2_audio_first_window_t

0xa162,	// (0x000588fd) bg_popup_call2_act_pane_g1

0xc8ab,	// (0x0005b046) popup_cale_lunar_info_window_t1

0xc8b9,	// (0x0005b054) popup_cale_lunar_info_window_t2

0xc8c7,	// (0x0005b062) popup_cale_lunar_info_window_t3

0x9f0f,	// (0x000586aa) bg_popup_call2_bubble_pane

0xc343,	// (0x0005aade) bg_popup_call2_in_pane_cp01_ParamLimits

0xc343,	// (0x0005aade) bg_popup_call2_in_pane_cp01

0x9beb,	// (0x00058386) call_type_pane_cp02

0xc38b,	// (0x0005ab26) popup_call2_audio_out_window_g1_ParamLimits

0xc38b,	// (0x0005ab26) popup_call2_audio_out_window_g1

0xc3b7,	// (0x0005ab52) popup_call2_audio_out_window_g2_ParamLimits

0xc3b7,	// (0x0005ab52) popup_call2_audio_out_window_g2

0xc3df,	// (0x0005ab7a) popup_call2_audio_out_window_g3_ParamLimits

0xc3df,	// (0x0005ab7a) popup_call2_audio_out_window_g3

0x0003,

0xf53e,	// (0x0005dcd9) popup_call2_audio_out_window_g_ParamLimits

0xf53e,	// (0x0005dcd9) popup_call2_audio_out_window_g

0xc41a,	// (0x0005abb5) popup_call2_audio_out_window_t1_ParamLimits

0xc41a,	// (0x0005abb5) popup_call2_audio_out_window_t1

0xc479,	// (0x0005ac14) popup_call2_audio_out_window_t2_ParamLimits

0xc479,	// (0x0005ac14) popup_call2_audio_out_window_t2

0xc4cd,	// (0x0005ac68) popup_call2_audio_out_window_t3_ParamLimits

0xc4cd,	// (0x0005ac68) popup_call2_audio_out_window_t3

0xc4e3,	// (0x0005ac7e) popup_call2_audio_out_window_t4_ParamLimits

0xc4e3,	// (0x0005ac7e) popup_call2_audio_out_window_t4

0xc4f9,	// (0x0005ac94) popup_call2_audio_out_window_t5_ParamLimits

0xc4f9,	// (0x0005ac94) popup_call2_audio_out_window_t5

0x0005,

0xf547,	// (0x0005dce2) popup_call2_audio_out_window_t_ParamLimits

0xf547,	// (0x0005dce2) popup_call2_audio_out_window_t

0xc55d,	// (0x0005acf8) bg_popup_call2_in_pane_ParamLimits

0xc55d,	// (0x0005acf8) bg_popup_call2_in_pane

0xc5b9,	// (0x0005ad54) popup_call2_audio_in_window_g1_ParamLimits

0xc5b9,	// (0x0005ad54) popup_call2_audio_in_window_g1

0xc5f1,	// (0x0005ad8c) popup_call2_audio_in_window_g2_ParamLimits

0xc5f1,	// (0x0005ad8c) popup_call2_audio_in_window_g2

0xc629,	// (0x0005adc4) popup_call2_audio_in_window_g3_ParamLimits

0xc629,	// (0x0005adc4) popup_call2_audio_in_window_g3

0x0003,

0xf554,	// (0x0005dcef) popup_call2_audio_in_window_g_ParamLimits

0xf554,	// (0x0005dcef) popup_call2_audio_in_window_g

0xc681,	// (0x0005ae1c) popup_call2_audio_in_window_t1_ParamLimits

0xc681,	// (0x0005ae1c) popup_call2_audio_in_window_t1

0xc701,	// (0x0005ae9c) popup_call2_audio_in_window_t2_ParamLimits

0xc701,	// (0x0005ae9c) popup_call2_audio_in_window_t2

0xc781,	// (0x0005af1c) popup_call2_audio_in_window_t3_ParamLimits

0xc781,	// (0x0005af1c) popup_call2_audio_in_window_t3

0xc79b,	// (0x0005af36) popup_call2_audio_in_window_t4_ParamLimits

0xc79b,	// (0x0005af36) popup_call2_audio_in_window_t4

0xc7ad,	// (0x0005af48) popup_call2_audio_in_window_t5_ParamLimits

0xc7ad,	// (0x0005af48) popup_call2_audio_in_window_t5

0xc7bf,	// (0x0005af5a) popup_call2_audio_in_window_t6_ParamLimits

0xc7bf,	// (0x0005af5a) popup_call2_audio_in_window_t6

0x0005,

0xf55d,	// (0x0005dcf8) popup_call2_audio_in_window_t_ParamLimits

0xf55d,	// (0x0005dcf8) popup_call2_audio_in_window_t

0xa162,	// (0x000588fd) bg_popup_call2_in_pane_g1

0xc8d5,	// (0x0005b070) popup_cale_lunar_info_window_t4

0x0003,

0xf5c5,	// (0x0005dd60) popup_cale_lunar_info_window_t

0xa16a,	// (0x00058905) bg_popup_call2_rect_pane_ParamLimits

0xa16a,	// (0x00058905) bg_popup_call2_rect_pane

0x9f0f,	// (0x000586aa) call2_cli_visual_graphic_pane

0x9f0f,	// (0x000586aa) call2_cli_visual_text_pane

0xa779,	// (0x00058f14) smil_status_volume_pane_g3

0x0002,

0xa2ca,	// (0x00058a65) call2_cli_visual_graphic_pane_g1

0xa2ca,	// (0x00058a65) call2_cli_visual_graphic_pane_g2

0xa2ca,	// (0x00058a65) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56a,	// (0x0005dd05) call2_cli_visual_graphic_pane_g

0xc7d1,	// (0x0005af6c) bg_popup_call2_rect_pane_g1

0xa356,	// (0x00058af1) bg_popup_call2_rect_pane_g2

0xc7d9,	// (0x0005af74) bg_popup_call2_rect_pane_g3

0xc7e1,	// (0x0005af7c) bg_popup_call2_rect_pane_g4

0xc7e9,	// (0x0005af84) bg_popup_call2_rect_pane_g5

0xc7f1,	// (0x0005af8c) bg_popup_call2_rect_pane_g6

0xc7f9,	// (0x0005af94) bg_popup_call2_rect_pane_g7

0xc801,	// (0x0005af9c) bg_popup_call2_rect_pane_g8

0xc809,	// (0x0005afa4) bg_popup_call2_rect_pane_g9

0x0008,

0xf571,	// (0x0005dd0c) bg_popup_call2_rect_pane_g

0xc811,	// (0x0005afac) bg_popup_call2_bubble_pane_g1

0xc819,	// (0x0005afb4) bg_popup_call2_bubble_pane_g2

0xc821,	// (0x0005afbc) bg_popup_call2_bubble_pane_g3

0xc829,	// (0x0005afc4) bg_popup_call2_bubble_pane_g4

0xc831,	// (0x0005afcc) bg_popup_call2_bubble_pane_g5

0xc839,	// (0x0005afd4) bg_popup_call2_bubble_pane_g6

0xc841,	// (0x0005afdc) bg_popup_call2_bubble_pane_g7

0xc849,	// (0x0005afe4) bg_popup_call2_bubble_pane_g8

0xc851,	// (0x0005afec) bg_popup_call2_bubble_pane_g9

0x0008,

0xf584,	// (0x0005dd1f) bg_popup_call2_bubble_pane_g

0x1312,	// (0x0004faad) aid_cale_week_size_cell_pane

0x1a36,	// (0x000501d1) aid_cams_cif_uncrop_pane_ParamLimits

0x1a36,	// (0x000501d1) aid_cams_cif_uncrop_pane

0x1bef,	// (0x0005038a) aid_cams_size_cell_ParamLimits

0x1bef,	// (0x0005038a) aid_cams_size_cell

0x1c03,	// (0x0005039e) grid_cams_pane_ParamLimits

0x1c1d,	// (0x000503b8) linegrid_cams_pane_ParamLimits

0x1cfb,	// (0x00050496) call_video_pane_t1

0x1d15,	// (0x000504b0) call_video_pane_t2

0x0001,

0xf26a,	// (0x0005da05) call_video_pane_t

0x2162,	// (0x000508fd) aid_cale_month_size_cell_pane_ParamLimits

0x2162,	// (0x000508fd) aid_cale_month_size_cell_pane

0xf60e,	// (0x0005dda9) smil_status_volume_pane_g

0xa786,	// (0x00058f21) volume_smil_pane_ParamLimits

0x9a6c,	// (0x00058207) aid_popup2_width_pane

0x1273,	// (0x0004fa0e) cell_qdial_pane_g4_ParamLimits

0x1273,	// (0x0004fa0e) cell_qdial_pane_g4

0x30a2,	// (0x0005183d) aid_blid_cardinal_pane_ParamLimits

0x30b2,	// (0x0005184d) aid_blid_destination_pane_ParamLimits

0x30b2,	// (0x0005184d) aid_blid_destination_pane

0xa16a,	// (0x00058905) bg_popup_call_poc_act_pane_ParamLimits

0xa16a,	// (0x00058905) bg_popup_call_poc_act_pane

0xa16a,	// (0x00058905) bg_popup_call_poc_inact_pane_ParamLimits

0xa16a,	// (0x00058905) bg_popup_call_poc_inact_pane

0xc859,	// (0x0005aff4) bg_popup_call_poc_act_pane_g1

0xc861,	// (0x0005affc) bg_popup_call_poc_act_pane_g2

0xc869,	// (0x0005b004) bg_popup_call_poc_act_pane_g3

0xc829,	// (0x0005afc4) bg_popup_call_poc_act_pane_g4

0xc831,	// (0x0005afcc) bg_popup_call_poc_act_pane_g5

0xc871,	// (0x0005b00c) bg_popup_call_poc_act_pane_g6

0xc841,	// (0x0005afdc) bg_popup_call_poc_act_pane_g7

0xc879,	// (0x0005b014) bg_popup_call_poc_act_pane_g8

0x9f0f,	// (0x000586aa) main_usb_pane

0xa729,	// (0x00058ec4) popup_cale_lunar_info_window

0x1fe2,	// (0x0005077d) im_reading_pane_t1_ParamLimits

0xa574,	// (0x00058d0f) list_im_pane_ParamLimits

0xa585,	// (0x00058d20) scroll_pane_cp07_ParamLimits

0x9f0f,	// (0x000586aa) grid_highlight_pane_cp012

0xa16a,	// (0x00058905) mup_scale_pane_ParamLimits

0xb75a,	// (0x00059ef5) main_usb_pane_g1_ParamLimits

0xb75a,	// (0x00059ef5) main_usb_pane_g1

0x3cbb,	// (0x00052456) main_usb_pane_g2_ParamLimits

0x3cbb,	// (0x00052456) main_usb_pane_g2

0x0001,

0xf5ae,	// (0x0005dd49) main_usb_pane_g_ParamLimits

0xf5ae,	// (0x0005dd49) main_usb_pane_g

0x3cd1,	// (0x0005246c) main_usb_pane_t1_ParamLimits

0x3cd1,	// (0x0005246c) main_usb_pane_t1

0x3ce3,	// (0x0005247e) main_usb_pane_t2_ParamLimits

0x3ce3,	// (0x0005247e) main_usb_pane_t2

0x3cf5,	// (0x00052490) main_usb_pane_t3_ParamLimits

0x3cf5,	// (0x00052490) main_usb_pane_t3

0x3d07,	// (0x000524a2) main_usb_pane_t4_ParamLimits

0x3d07,	// (0x000524a2) main_usb_pane_t4

0x3d1c,	// (0x000524b7) main_usb_pane_t5_ParamLimits

0x3d1c,	// (0x000524b7) main_usb_pane_t5

0x3d31,	// (0x000524cc) main_usb_pane_t6_ParamLimits

0x3d31,	// (0x000524cc) main_usb_pane_t6

0x0005,

0xf5b3,	// (0x0005dd4e) main_usb_pane_t_ParamLimits

0x3041,	// (0x000517dc) aid_text_placing

0x304c,	// (0x000517e7) main_location2_pane_t1_ParamLimits

0x3062,	// (0x000517fd) main_location2_pane_t2_ParamLimits

0x3078,	// (0x00051813) main_location2_pane_t3_ParamLimits

0x308e,	// (0x00051829) main_location2_pane_t4_ParamLimits

0x308e,	// (0x00051829) main_location2_pane_t4

0xf3d2,	// (0x0005db6d) main_location2_pane_t_ParamLimits

0xa1a6,	// (0x00058941) find_pinb_pane_g2_ParamLimits

0xa1a6,	// (0x00058941) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0005d8b6) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0005d8b6) find_pinb_pane_g

0xa1b2,	// (0x0005894d) find_pinb_pane_t1_ParamLimits

0xa1c4,	// (0x0005895f) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0005d8bb) find_pinb_pane_t_ParamLimits

0x9f0f,	// (0x000586aa) main_call3_pane

0x2767,	// (0x00050f02) cale_month_day_heading_pane_t1_ParamLimits

0x27ed,	// (0x00050f88) cale_month_day_heading_pane_t2_ParamLimits

0x2866,	// (0x00051001) cale_month_day_heading_pane_t3_ParamLimits

0x28df,	// (0x0005107a) cale_month_day_heading_pane_t4_ParamLimits

0x2960,	// (0x000510fb) cale_month_day_heading_pane_t5_ParamLimits

0x29e9,	// (0x00051184) cale_month_day_heading_pane_t6_ParamLimits

0x2a7a,	// (0x00051215) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0005da3d) cale_month_day_heading_pane_t_ParamLimits

0xaed4,	// (0x0005966f) smil_status_volume_pane

0x3770,	// (0x00051f0b) postcard_address_pane_ParamLimits

0x3770,	// (0x00051f0b) postcard_address_pane

0x3786,	// (0x00051f21) postcard_message_pane_ParamLimits

0x3786,	// (0x00051f21) postcard_message_pane

0x3c94,	// (0x0005242f) call2_cli_visual_pane_t1_ParamLimits

0x3c94,	// (0x0005242f) call2_cli_visual_pane_t1

0x44ee,	// (0x00052c89) postcard_message_pane_t1_ParamLimits

0x44ee,	// (0x00052c89) postcard_message_pane_t1

0xca8d,	// (0x0005b228) postcard_address_pane_t1_ParamLimits

0xca8d,	// (0x0005b228) postcard_address_pane_t1

0x44da,	// (0x00052c75) popup_call3_audio_in_window_ParamLimits

0x44da,	// (0x00052c75) popup_call3_audio_in_window

0x435f,	// (0x00052afa) bg_popup_call3_in_pane_ParamLimits

0x435f,	// (0x00052afa) bg_popup_call3_in_pane

0x43db,	// (0x00052b76) popup_call3_audio_in_window_g1_ParamLimits

0x43db,	// (0x00052b76) popup_call3_audio_in_window_g1

0x43fb,	// (0x00052b96) popup_call3_audio_in_window_g2_ParamLimits

0x43fb,	// (0x00052b96) popup_call3_audio_in_window_g2

0x441b,	// (0x00052bb6) popup_call3_audio_in_window_g3_ParamLimits

0x441b,	// (0x00052bb6) popup_call3_audio_in_window_g3

0x0003,

0xf615,	// (0x0005ddb0) popup_call3_audio_in_window_g_ParamLimits

0xf615,	// (0x0005ddb0) popup_call3_audio_in_window_g

0x444c,	// (0x00052be7) popup_call3_audio_in_window_t1_ParamLimits

0x444c,	// (0x00052be7) popup_call3_audio_in_window_t1

0x448a,	// (0x00052c25) popup_call3_audio_in_window_t2_ParamLimits

0x448a,	// (0x00052c25) popup_call3_audio_in_window_t2

0x44c8,	// (0x00052c63) popup_call3_audio_in_window_t3_ParamLimits

0x44c8,	// (0x00052c63) popup_call3_audio_in_window_t3

0x0002,

0xf61e,	// (0x0005ddb9) popup_call3_audio_in_window_t_ParamLimits

0xf61e,	// (0x0005ddb9) popup_call3_audio_in_window_t

0xa465,	// (0x00058c00) bg_popup_call3_rect_pane

0xc7d1,	// (0x0005af6c) bg_popup_call3_rect_pane_g1

0xa356,	// (0x00058af1) bg_popup_call3_rect_pane_g2

0xc7d9,	// (0x0005af74) bg_popup_call3_rect_pane_g3

0xc7e1,	// (0x0005af7c) bg_popup_call3_rect_pane_g4

0xc7e9,	// (0x0005af84) bg_popup_call3_rect_pane_g5

0xc7f1,	// (0x0005af8c) bg_popup_call3_rect_pane_g6

0xc7f9,	// (0x0005af94) bg_popup_call3_rect_pane_g7

0x33b2,	// (0x00051b4d) mup_visualizer_osc_pane

0xb67a,	// (0x00059e15) mup_visualizer_spec_pane

0x438f,	// (0x00052b2a) call3_video_qcif_pane_ParamLimits

0x438f,	// (0x00052b2a) call3_video_qcif_pane

0x43a2,	// (0x00052b3d) call3_video_qcif_uncrop_pane_ParamLimits

0x43a2,	// (0x00052b3d) call3_video_qcif_uncrop_pane

0x43b2,	// (0x00052b4d) call3_video_subqcif_pane_ParamLimits

0x43b2,	// (0x00052b4d) call3_video_subqcif_pane

0x43c8,	// (0x00052b63) call3_video_subqcif_uncrop_pane_ParamLimits

0x43c8,	// (0x00052b63) call3_video_subqcif_uncrop_pane

0x443b,	// (0x00052bd6) popup_call3_audio_in_window_g4_ParamLimits

0x443b,	// (0x00052bd6) popup_call3_audio_in_window_g4

0x434e,	// (0x00052ae9) mup_spec_half_pane

0x4357,	// (0x00052af2) mup_spec_half_pane_cp

0xca4d,	// (0x0005b1e8) mup_osc_middle_pane

0xca56,	// (0x0005b1f1) mup_visualizer_osc_pane_g1

0x432e,	// (0x00052ac9) mup_spec_bar_pane_ParamLimits

0x432e,	// (0x00052ac9) mup_spec_bar_pane

0xca3a,	// (0x0005b1d5) mup_spec_bar_pane_g1

0xca44,	// (0x0005b1df) mup_spec_bar_pane_g2

0x0001,

0xf609,	// (0x0005dda4) mup_spec_bar_pane_g

0x1312,	// (0x0004faad) aid_cale_week_size_cell_pane_ParamLimits

0x132c,	// (0x0004fac7) bg_cale_heading_pane_ParamLimits

0x1350,	// (0x0004faeb) bg_cale_pane_cp01_ParamLimits

0x136d,	// (0x0004fb08) cale_week_corner_pane_ParamLimits

0x138c,	// (0x0004fb27) cale_week_day_heading_pane_ParamLimits

0x13b5,	// (0x0004fb50) cale_week_scroll_pane_g1_ParamLimits

0x13d4,	// (0x0004fb6f) cale_week_scroll_pane_g2_ParamLimits

0x13ec,	// (0x0004fb87) cale_week_scroll_pane_g3_ParamLimits

0x1404,	// (0x0004fb9f) cale_week_scroll_pane_g4_ParamLimits

0x141c,	// (0x0004fbb7) cale_week_scroll_pane_g5_ParamLimits

0x143c,	// (0x0004fbd7) cale_week_scroll_pane_g6_ParamLimits

0x145c,	// (0x0004fbf7) cale_week_scroll_pane_g7_ParamLimits

0x1480,	// (0x0004fc1b) cale_week_scroll_pane_g8_ParamLimits

0x14a4,	// (0x0004fc3f) cale_week_scroll_pane_g9_ParamLimits

0x14bc,	// (0x0004fc57) cale_week_scroll_pane_g10_ParamLimits

0x14d4,	// (0x0004fc6f) cale_week_scroll_pane_g11_ParamLimits

0x14ec,	// (0x0004fc87) cale_week_scroll_pane_g12_ParamLimits

0x1510,	// (0x0004fcab) cale_week_scroll_pane_g13_ParamLimits

0x1510,	// (0x0004fcab) cale_week_scroll_pane_g14_ParamLimits

0x1510,	// (0x0004fcab) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0005d947) cale_week_scroll_pane_g_ParamLimits

0x1558,	// (0x0004fcf3) cale_week_time_pane_ParamLimits

0x157c,	// (0x0004fd17) grid_cale_week_pane_ParamLimits

0xa3db,	// (0x00058b76) listscroll_cale_week_pane_t1

0xa3ed,	// (0x00058b88) scroll_pane_cp08_ParamLimits

0x21da,	// (0x00050975) cale_month_corner_pane_ParamLimits

0xaeaa,	// (0x00059645) cale_month_pane_t1

0x26e2,	// (0x00050e7d) cale_month_week_pane_ParamLimits

0x2e5d,	// (0x000515f8) popup_call_status_window_g1_ParamLimits

0x2e71,	// (0x0005160c) popup_call_status_window_g2_ParamLimits

0x2e85,	// (0x00051620) popup_call_status_window_g3_ParamLimits

0xf359,	// (0x0005daf4) popup_call_status_window_g_ParamLimits

0xb25b,	// (0x000599f6) aid_call2_pane

0xfe00,	// (0x0004e59b) msg_header_pane_g1

0x3770,	// (0x00051f0b) postcard_address2_pane_ParamLimits

0x3770,	// (0x00051f0b) postcard_address2_pane

0x3786,	// (0x00051f21) postcard_message2_pane_ParamLimits

0x3786,	// (0x00051f21) postcard_message2_pane

0x42eb,	// (0x00052a86) message2_row_pane_ParamLimits

0x42eb,	// (0x00052a86) message2_row_pane

0xc9f5,	// (0x0005b190) address2_row_pane_ParamLimits

0xc9f5,	// (0x0005b190) address2_row_pane

0xca08,	// (0x0005b1a3) postcard_message2_row_pane_g1

0xca10,	// (0x0005b1ab) postcard_message2_row_pane_t1

0xca08,	// (0x0005b1a3) address2_row_pane_g1

0xca10,	// (0x0005b1ab) address2_row_pane_t1

0x18e9,	// (0x00050084) aid_size_cell_vorec

0x9f0f,	// (0x000586aa) main_rss_pane

0x430e,	// (0x00052aa9) rss_list_single_pane_ParamLimits

0x430e,	// (0x00052aa9) rss_list_single_pane

0xca1e,	// (0x0005b1b9) rss_list_single_pane_t1

0xca2c,	// (0x0005b1c7) rss_list_single_pane_t2

0x0001,

0xf604,	// (0x0005dd9f) rss_list_single_pane_t

0x9f0f,	// (0x000586aa) main_camera2_pane

0x9f0f,	// (0x000586aa) main_video2_pane

0x455d,	// (0x00052cf8) cams_zoom_pane_cp2_ParamLimits

0x455d,	// (0x00052cf8) cams_zoom_pane_cp2

0x4574,	// (0x00052d0f) image2_vga_pane_ParamLimits

0x4574,	// (0x00052d0f) image2_vga_pane

0x45bc,	// (0x00052d57) main_camera2_pane_g1_ParamLimits

0x45bc,	// (0x00052d57) main_camera2_pane_g1

0x45dc,	// (0x00052d77) main_camera2_pane_g2_ParamLimits

0x45dc,	// (0x00052d77) main_camera2_pane_g2

0x45f3,	// (0x00052d8e) main_camera2_pane_g3_ParamLimits

0x45f3,	// (0x00052d8e) main_camera2_pane_g3

0x460a,	// (0x00052da5) main_camera2_pane_g4_ParamLimits

0x460a,	// (0x00052da5) main_camera2_pane_g4

0x4621,	// (0x00052dbc) main_camera2_pane_g5_ParamLimits

0x4621,	// (0x00052dbc) main_camera2_pane_g5

0x4638,	// (0x00052dd3) main_camera2_pane_g6_ParamLimits

0x4638,	// (0x00052dd3) main_camera2_pane_g6

0x464f,	// (0x00052dea) main_camera2_pane_g7_ParamLimits

0x464f,	// (0x00052dea) main_camera2_pane_g7

0x4666,	// (0x00052e01) main_camera2_pane_g8_ParamLimits

0x4666,	// (0x00052e01) main_camera2_pane_g8

0x0008,

0xf625,	// (0x0005ddc0) main_camera2_pane_g_ParamLimits

0xf625,	// (0x0005ddc0) main_camera2_pane_g

0x4694,	// (0x00052e2f) main_camera2_pane_t1_ParamLimits

0x4694,	// (0x00052e2f) main_camera2_pane_t1

0x46c9,	// (0x00052e64) main_camera2_pane_t2_ParamLimits

0x46c9,	// (0x00052e64) main_camera2_pane_t2

0x46e6,	// (0x00052e81) main_camera2_pane_t3_ParamLimits

0x46e6,	// (0x00052e81) main_camera2_pane_t3

0x4744,	// (0x00052edf) main_camera2_pane_t4_ParamLimits

0x4744,	// (0x00052edf) main_camera2_pane_t4

0x0006,

0xf638,	// (0x0005ddd3) main_camera2_pane_t_ParamLimits

0xf638,	// (0x0005ddd3) main_camera2_pane_t

0x47cd,	// (0x00052f68) cams_zoom_pane_cp4_ParamLimits

0x47cd,	// (0x00052f68) cams_zoom_pane_cp4

0x47e3,	// (0x00052f7e) image2_cif_pane_ParamLimits

0x47e3,	// (0x00052f7e) image2_cif_pane

0x480e,	// (0x00052fa9) image2_subqcif_pane_ParamLimits

0x480e,	// (0x00052fa9) image2_subqcif_pane

0x4829,	// (0x00052fc4) main_video2_pane_g1_ParamLimits

0x4829,	// (0x00052fc4) main_video2_pane_g1

0x4843,	// (0x00052fde) main_video2_pane_g2_ParamLimits

0x4843,	// (0x00052fde) main_video2_pane_g2

0x4859,	// (0x00052ff4) main_video2_pane_g3_ParamLimits

0x4859,	// (0x00052ff4) main_video2_pane_g3

0x486f,	// (0x0005300a) main_video2_pane_g4_ParamLimits

0x486f,	// (0x0005300a) main_video2_pane_g4

0x4885,	// (0x00053020) main_video2_pane_g5_ParamLimits

0x4885,	// (0x00053020) main_video2_pane_g5

0x489b,	// (0x00053036) main_video2_pane_g6_ParamLimits

0x489b,	// (0x00053036) main_video2_pane_g6

0x0005,

0xf647,	// (0x0005dde2) main_video2_pane_g_ParamLimits

0xf647,	// (0x0005dde2) main_video2_pane_g

0x48b5,	// (0x00053050) main_video2_pane_t1_ParamLimits

0x48b5,	// (0x00053050) main_video2_pane_t1

0x48d9,	// (0x00053074) main_video2_pane_t2_ParamLimits

0x48d9,	// (0x00053074) main_video2_pane_t2

0x4929,	// (0x000530c4) main_video2_pane_t3_ParamLimits

0x4929,	// (0x000530c4) main_video2_pane_t3

0x0002,

0xf654,	// (0x0005ddef) main_video2_pane_t_ParamLimits

0xf654,	// (0x0005ddef) main_video2_pane_t

0x3def,	// (0x0005258a) call_muted_g2

0x0001,

0xf5f6,	// (0x0005dd91) call_muted_g

0x9f0f,	// (0x000586aa) main_mup2_pane

0x4971,	// (0x0005310c) main_mup2_pane_g1_ParamLimits

0x4971,	// (0x0005310c) main_mup2_pane_g1

0x497d,	// (0x00053118) main_mup2_pane_g2_ParamLimits

0x497d,	// (0x00053118) main_mup2_pane_g2

0xa7ef,	// (0x00058f8a) main_mup_pane_g13_cp1

0xa7f7,	// (0x00058f92) mup_volume_pane_cp1

0x499b,	// (0x00053136) main_mup2_pane_g4_ParamLimits

0x499b,	// (0x00053136) main_mup2_pane_g4

0x49ad,	// (0x00053148) main_mup2_pane_g5_ParamLimits

0x49ad,	// (0x00053148) main_mup2_pane_g5

0x49bf,	// (0x0005315a) main_mup2_pane_g6_ParamLimits

0x49bf,	// (0x0005315a) main_mup2_pane_g6

0x49d1,	// (0x0005316c) main_mup2_pane_g7_ParamLimits

0x49d1,	// (0x0005316c) main_mup2_pane_g7

0x0006,

0xf65b,	// (0x0005ddf6) main_mup2_pane_g_ParamLimits

0xf65b,	// (0x0005ddf6) main_mup2_pane_g

0x49e9,	// (0x00053184) main_mup2_pane_t1_ParamLimits

0x49e9,	// (0x00053184) main_mup2_pane_t1

0x49ff,	// (0x0005319a) main_mup2_pane_t2_ParamLimits

0x49ff,	// (0x0005319a) main_mup2_pane_t2

0x4a15,	// (0x000531b0) main_mup2_pane_t3_ParamLimits

0x4a15,	// (0x000531b0) main_mup2_pane_t3

0x4a2b,	// (0x000531c6) main_mup2_pane_t4_ParamLimits

0x4a2b,	// (0x000531c6) main_mup2_pane_t4

0x4a43,	// (0x000531de) main_mup2_pane_t5_ParamLimits

0x4a43,	// (0x000531de) main_mup2_pane_t5

0x4a5b,	// (0x000531f6) main_mup2_pane_t6_ParamLimits

0x4a5b,	// (0x000531f6) main_mup2_pane_t6

0x0005,

0xf66a,	// (0x0005de05) main_mup2_pane_t_ParamLimits

0xf66a,	// (0x0005de05) main_mup2_pane_t

0x4a8b,	// (0x00053226) mup2_visualizer_pane_ParamLimits

0x4a8b,	// (0x00053226) mup2_visualizer_pane

0x4ab9,	// (0x00053254) mup_progress_pane_cp_ParamLimits

0x4ab9,	// (0x00053254) mup_progress_pane_cp

0xa7da,	// (0x00058f75) mup_volume_pane_cp_ParamLimits

0xa7da,	// (0x00058f75) mup_volume_pane_cp

0x4acf,	// (0x0005326a) mup2_visualizer_pane_g1_ParamLimits

0x4acf,	// (0x0005326a) mup2_visualizer_pane_g1

0xcaa4,	// (0x0005b23f) mup2_visualizer_pane_g2_ParamLimits

0xcaa4,	// (0x0005b23f) mup2_visualizer_pane_g2

0x4ae4,	// (0x0005327f) mup2_visualizer_pane_g3_ParamLimits

0x4ae4,	// (0x0005327f) mup2_visualizer_pane_g3

0x0002,

0xf677,	// (0x0005de12) mup2_visualizer_pane_g_ParamLimits

0xf677,	// (0x0005de12) mup2_visualizer_pane_g

0xb8a3,	// (0x0005a03e) aid_size_cell_fmradio

0x3f9f,	// (0x0005273a) aid_height_parent_landcape

0xa603,	// (0x00058d9e) wml_content_pane_cp

0xa60b,	// (0x00058da6) wml_tabs_pane

0xa614,	// (0x00058daf) popup_wml_miniature_window

0xa61c,	// (0x00058db7) scroll_pane_cp021

0xad35,	// (0x000594d0) wml_content_pane_comp8

0x9f0f,	// (0x000586aa) bg_popup_sub_pane_cp05

0xcac2,	// (0x0005b25d) popup_wml_miniature_window_g1

0xcaca,	// (0x0005b265) wml_miniature_view_pane

0x4af0,	// (0x0005328b) aid_size_wml_view

0x4af8,	// (0x00053293) wml_miniature_view_pane_g1

0x4b01,	// (0x0005329c) wml_miniature_view_pane_g2

0x4b0a,	// (0x000532a5) wml_miniature_view_pane_g3

0x4b12,	// (0x000532ad) wml_miniature_view_pane_g4

0x4b1a,	// (0x000532b5) wml_miniature_view_pane_g5

0x4b22,	// (0x000532bd) wml_miniature_view_pane_g6

0x4b2a,	// (0x000532c5) wml_miniature_view_pane_g7

0x4b32,	// (0x000532cd) wml_miniature_view_pane_g8

0x0007,

0xf67e,	// (0x0005de19) wml_miniature_view_pane_g

0xcad2,	// (0x0005b26d) background_graphic_ParamLimits

0xcad2,	// (0x0005b26d) background_graphic

0xcade,	// (0x0005b279) wml_tabs_2_pane

0xcae7,	// (0x0005b282) wml_tabs_3_pane_ParamLimits

0xcae7,	// (0x0005b282) wml_tabs_3_pane

0xcaf9,	// (0x0005b294) wml_tabs_4_pane_ParamLimits

0xcaf9,	// (0x0005b294) wml_tabs_4_pane

0xcb0f,	// (0x0005b2aa) wml_tabs_5_pane_ParamLimits

0xcb0f,	// (0x0005b2aa) wml_tabs_5_pane

0xcb29,	// (0x0005b2c4) wml_tabs_pane_g2_ParamLimits

0xcb29,	// (0x0005b2c4) wml_tabs_pane_g2

0xcb3d,	// (0x0005b2d8) wml_tabs_pane_g3_ParamLimits

0xcb3d,	// (0x0005b2d8) wml_tabs_pane_g3

0x4b3a,	// (0x000532d5) wml_tabs_2_active_pane_ParamLimits

0x4b3a,	// (0x000532d5) wml_tabs_2_active_pane

0x4b4e,	// (0x000532e9) wml_tabs_2_passive_pane_ParamLimits

0x4b4e,	// (0x000532e9) wml_tabs_2_passive_pane

0x4b62,	// (0x000532fd) wml_tabs_3_active_pane_cp_ParamLimits

0x4b62,	// (0x000532fd) wml_tabs_3_active_pane_cp

0x4b77,	// (0x00053312) wml_tabs_3_passive_pane_ParamLimits

0x4b77,	// (0x00053312) wml_tabs_3_passive_pane

0x4b8a,	// (0x00053325) wml_tabs_3_passive_pane_cp_ParamLimits

0x4b8a,	// (0x00053325) wml_tabs_3_passive_pane_cp

0x4ba1,	// (0x0005333c) tabs_4_active_pane

0x4ba9,	// (0x00053344) tabs_4_passive_pane

0x4bb3,	// (0x0005334e) tabs_4_passive_pane_cp

0x4bbb,	// (0x00053356) tabs_4_passive_pane_cp2

0x3cb3,	// (0x0005244e) aid_height_text

0x3384,	// (0x00051b1f) mup_volume_cont_pane_ParamLimits

0x3384,	// (0x00051b1f) mup_volume_cont_pane

0x0ef6,	// (0x0004f691) aid_size_cell_pinb

0x0f00,	// (0x0004f69b) aid_size_list_pinb

0x4aa5,	// (0x00053240) mup2_volume_cont_pane_ParamLimits

0x4aa5,	// (0x00053240) mup2_volume_cont_pane

0xa7c6,	// (0x00058f61) mup2_volume_cont_pane_g1_ParamLimits

0xa7c6,	// (0x00058f61) mup2_volume_cont_pane_g1

0x0bdc,	// (0x0004f377) aid_size_cell_touch_ParamLimits

0x0bdc,	// (0x0004f377) aid_size_cell_touch

0x0e1a,	// (0x0004f5b5) touch_pane_ParamLimits

0x0e1a,	// (0x0004f5b5) touch_pane

0x9a5a,	// (0x000581f5) main_rss2_pane

0xcb5a,	// (0x0005b2f5) listscroll_rss2_pane

0xcb63,	// (0x0005b2fe) rss2_navigation_pane

0xcb6b,	// (0x0005b306) list_rss2_pane

0xb37f,	// (0x00059b1a) scroll_pane_cp22

0xcb73,	// (0x0005b30e) rss2_navigation_pane_g1

0xcb7c,	// (0x0005b317) rss2_navigation_pane_g2

0xcb84,	// (0x0005b31f) rss2_navigation_pane_g3

0x0002,

0xf68f,	// (0x0005de2a) rss2_navigation_pane_g

0xcb8c,	// (0x0005b327) rss2_navigation_pane_t1

0x4bc5,	// (0x00053360) rss2_list_single_pane_ParamLimits

0x4bc5,	// (0x00053360) rss2_list_single_pane

0xcb9a,	// (0x0005b335) rss2_list_single_pane_t2

0xcba8,	// (0x0005b343) rss2_list_single_pane_t3_ParamLimits

0xcba8,	// (0x0005b343) rss2_list_single_pane_t3

0xcbc5,	// (0x0005b360) rss2_list_single_pane_t4

0x2d2e,	// (0x000514c9) smil_status_pane_g1

0xad09,	// (0x000594a4) main_image2_pane_ParamLimits

0xad09,	// (0x000594a4) main_image2_pane

0x467d,	// (0x00052e18) main_camera2_pane_g9_ParamLimits

0x467d,	// (0x00052e18) main_camera2_pane_g9

0x4799,	// (0x00052f34) main_camera2_pane_t5_ParamLimits

0x4799,	// (0x00052f34) main_camera2_pane_t5

0xa79b,	// (0x00058f36) main_camera2_pane_t6_ParamLimits

0xa79b,	// (0x00058f36) main_camera2_pane_t6

0x4bdf,	// (0x0005337a) main_image2_pane_g1_ParamLimits

0x4bdf,	// (0x0005337a) main_image2_pane_g1

0x39ca,	// (0x00052165) smil2_video_pane_ParamLimits

0x39ca,	// (0x00052165) smil2_video_pane

0x0c14,	// (0x0004f3af) aid_zoom_text_primary_cp

0x9abd,	// (0x00058258) popup_preview_fixed_window

0xa56c,	// (0x00058d07) im_reading_pane_g1

0x454f,	// (0x00052cea) cams2_bc_adjust_pane_cp_ParamLimits

0x454f,	// (0x00052cea) cams2_bc_adjust_pane_cp

0x47bf,	// (0x00052f5a) cams2_bc_adjust_pane_ParamLimits

0x47bf,	// (0x00052f5a) cams2_bc_adjust_pane

0xa7ff,	// (0x00058f9a) cams2_bc_adjust_pane_g1

0xa807,	// (0x00058fa2) cams2_slider_pane

0xa810,	// (0x00058fab) cams2_slider_pane_g1

0xa819,	// (0x00058fb4) cams2_slider_pane_g2

0x0006,

0xf696,	// (0x0005de31) cams2_slider_pane_g

0x0ff2,	// (0x0004f78d) calc_display_pane_ParamLimits

0x1017,	// (0x0004f7b2) calc_paper_pane_ParamLimits

0x103a,	// (0x0004f7d5) grid_calc_pane_ParamLimits

0xa6b0,	// (0x00058e4b) popup_clock_digital_window_t1_ParamLimits

0xb840,	// (0x00059fdb) main_image_pane_t1

0x0fd2,	// (0x0004f76d) aid_size_cell_calc_ParamLimits

0x0fd2,	// (0x0004f76d) aid_size_cell_calc

0x3fe5,	// (0x00052780) popup_blid_sat_info2_window_ParamLimits

0x3fe5,	// (0x00052780) popup_blid_sat_info2_window

0xcbdb,	// (0x0005b376) aid_size_cell_blid

0xcbe3,	// (0x0005b37e) bg_popup_window_pane_cp07

0xcc06,	// (0x0005b3a1) grid_popup_blid_pane

0xcc10,	// (0x0005b3ab) heading_pane_cp05_ParamLimits

0xcc10,	// (0x0005b3ab) heading_pane_cp05

0xccda,	// (0x0005b475) cell_popup_blid_pane_ParamLimits

0xccda,	// (0x0005b475) cell_popup_blid_pane

0xcd04,	// (0x0005b49f) cell_popup_blid_pane_g1

0xcd0c,	// (0x0005b4a7) cell_popup_blid_pane_t1

0x4a75,	// (0x00053210) mup2_indicator_pane_ParamLimits

0x4a75,	// (0x00053210) mup2_indicator_pane

0xa465,	// (0x00058c00) mup2_visualizer_osc_pane

0xcab0,	// (0x0005b24b) mup2_visualizer_spec_pane_ParamLimits

0xcab0,	// (0x0005b24b) mup2_visualizer_spec_pane

0x4bf5,	// (0x00053390) mup2_spec_half_pane

0x4bfe,	// (0x00053399) mup2_spec_half_pane_cp

0x4c06,	// (0x000533a1) mup2_spec_bar_pane_ParamLimits

0x4c06,	// (0x000533a1) mup2_spec_bar_pane

0xca3a,	// (0x0005b1d5) mup2_spec_bar_pane_g1

0xca44,	// (0x0005b1df) mup2_spec_bar_pane_g2

0x0001,

0xf609,	// (0x0005dda4) mup2_spec_bar_pane_g

0x4c26,	// (0x000533c1) mup2_osc_middle_pane

0xca56,	// (0x0005b1f1) mup2_visualizer_osc_pane_g1

0x9ae7,	// (0x00058282) popup_number_entry_window_t1_ParamLimits

0x9afa,	// (0x00058295) popup_number_entry_window_t2_ParamLimits

0x9b0c,	// (0x000582a7) popup_number_entry_window_t3_ParamLimits

0x9b1e,	// (0x000582b9) popup_number_entry_window_t5_ParamLimits

0x9b1e,	// (0x000582b9) popup_number_entry_window_t5

0xf0c6,	// (0x0005d861) popup_number_entry_window_t_ParamLimits

0x9b53,	// (0x000582ee) text_title_cp2_ParamLimits

0xa6ef,	// (0x00058e8a) aid_hotspot_pointer_text2_pane

0xa715,	// (0x00058eb0) main_viewer_pane_g9_ParamLimits

0xa715,	// (0x00058eb0) main_viewer_pane_g9

0xaeaa,	// (0x00059645) cale_month_pane_t1_ParamLimits

0xaee7,	// (0x00059682) bg_cale_pane_ParamLimits

0xaeff,	// (0x0005969a) list_cale_pane_ParamLimits

0xaf10,	// (0x000596ab) listscroll_cale_day_pane_t1

0xaf22,	// (0x000596bd) scroll_pane_cp09_ParamLimits

0x33ba,	// (0x00051b55) main_mup_eq_pane_t1_ParamLimits

0x33ba,	// (0x00051b55) main_mup_eq_pane_t1

0x33d6,	// (0x00051b71) main_mup_eq_pane_t2_ParamLimits

0x33d6,	// (0x00051b71) main_mup_eq_pane_t2

0x33f2,	// (0x00051b8d) main_mup_eq_pane_t3_ParamLimits

0x33f2,	// (0x00051b8d) main_mup_eq_pane_t3

0x3410,	// (0x00051bab) main_mup_eq_pane_t4_ParamLimits

0x3410,	// (0x00051bab) main_mup_eq_pane_t4

0x342e,	// (0x00051bc9) main_mup_eq_pane_t5_ParamLimits

0x342e,	// (0x00051bc9) main_mup_eq_pane_t5

0x344c,	// (0x00051be7) main_mup_eq_pane_t6_ParamLimits

0x344c,	// (0x00051be7) main_mup_eq_pane_t6

0x3462,	// (0x00051bfd) main_mup_eq_pane_t7_ParamLimits

0x3462,	// (0x00051bfd) main_mup_eq_pane_t7

0x3478,	// (0x00051c13) main_mup_eq_pane_t8_ParamLimits

0x3478,	// (0x00051c13) main_mup_eq_pane_t8

0x348e,	// (0x00051c29) main_mup_eq_pane_t9_ParamLimits

0x348e,	// (0x00051c29) main_mup_eq_pane_t9

0x34aa,	// (0x00051c45) main_mup_eq_pane_t10_ParamLimits

0x34aa,	// (0x00051c45) main_mup_eq_pane_t10

0x0009,

0xf458,	// (0x0005dbf3) main_mup_eq_pane_t_ParamLimits

0xf458,	// (0x0005dbf3) main_mup_eq_pane_t

0x357f,	// (0x00051d1a) mup_equalizer_pane_cp5_ParamLimits

0x3597,	// (0x00051d32) mup_equalizer_pane_cp6_ParamLimits

0x35af,	// (0x00051d4a) mup_equalizer_pane_cp7_ParamLimits

0x9a5a,	// (0x000581f5) main_gallery_pane

0xca5f,	// (0x0005b1fa) smil2_volume_pane

0xca67,	// (0x0005b202) smil_status_volume_pane_g1_ParamLimits

0xca7a,	// (0x0005b215) smil_status_volume_pane_g2_ParamLimits

0xa779,	// (0x00058f14) smil_status_volume_pane_g3_ParamLimits

0xf60e,	// (0x0005dda9) smil_status_volume_pane_g_ParamLimits

0xcbe3,	// (0x0005b37e) bg_popup_window_pane_cp07_ParamLimits

0xcbf1,	// (0x0005b38c) blid_firmament_pane

0x4c2f,	// (0x000533ca) aid_size_cell_gallery_ParamLimits

0x4c2f,	// (0x000533ca) aid_size_cell_gallery

0x4c45,	// (0x000533e0) grid_gallery_pane_ParamLimits

0x4c45,	// (0x000533e0) grid_gallery_pane

0x4c60,	// (0x000533fb) cell_gallery_pane_ParamLimits

0x4c60,	// (0x000533fb) cell_gallery_pane

0xcd1a,	// (0x0005b4b5) bg_cell_gallery_focus_pane_ParamLimits

0xcd1a,	// (0x0005b4b5) bg_cell_gallery_focus_pane

0xcd2c,	// (0x0005b4c7) cell_gallery_pane_g1_ParamLimits

0xcd2c,	// (0x0005b4c7) cell_gallery_pane_g1

0x4cb1,	// (0x0005344c) cell_gallery_pane_g2_ParamLimits

0x4cb1,	// (0x0005344c) cell_gallery_pane_g2

0x4cbe,	// (0x00053459) cell_gallery_pane_g3_ParamLimits

0x4cbe,	// (0x00053459) cell_gallery_pane_g3

0xcd38,	// (0x0005b4d3) cell_gallery_pane_g4_ParamLimits

0xcd38,	// (0x0005b4d3) cell_gallery_pane_g4

0x0003,

0xf6bc,	// (0x0005de57) cell_gallery_pane_g_ParamLimits

0xf6bc,	// (0x0005de57) cell_gallery_pane_g

0xcd44,	// (0x0005b4df) bg_cell_gallery_focus_pane_g1

0xcd4c,	// (0x0005b4e7) bg_cell_gallery_focus_pane_g2

0xcd54,	// (0x0005b4ef) bg_cell_gallery_focus_pane_g3

0xcd5c,	// (0x0005b4f7) bg_cell_gallery_focus_pane_g4

0xcd64,	// (0x0005b4ff) bg_cell_gallery_focus_pane_g5

0xcd6c,	// (0x0005b507) bg_cell_gallery_focus_pane_g6

0xcd74,	// (0x0005b50f) bg_cell_gallery_focus_pane_g7

0xcd7c,	// (0x0005b517) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c5,	// (0x0005de60) bg_cell_gallery_focus_pane_g

0xcd84,	// (0x0005b51f) aid_firma_cardinal

0xcd98,	// (0x0005b533) blid_firmament_pane_t1

0xcdaf,	// (0x0005b54a) blid_firmament_pane_t2

0xcdc6,	// (0x0005b561) blid_firmament_pane_t3

0xcddd,	// (0x0005b578) blid_firmament_pane_t4

0x0003,

0xf6d6,	// (0x0005de71) blid_firmament_pane_t

0xcdf4,	// (0x0005b58f) blid_sat_info_pane

0xce04,	// (0x0005b59f) blid_sat_info_pane_g1

0xce04,	// (0x0005b59f) blid_sat_info_pane_g2

0x0001,

0xf6df,	// (0x0005de7a) blid_sat_info_pane_g

0xce0e,	// (0x0005b5a9) blid_sat_info_pane_t1

0xce1c,	// (0x0005b5b7) smil2_volume_content_pane

0xce25,	// (0x0005b5c0) smil2_volume_pane_g1

0xad17,	// (0x000594b2) smil2_volume_content_pane_g1

0xce2d,	// (0x0005b5c8) smil2_volume_content_pane_g2

0xce36,	// (0x0005b5d1) smil2_volume_content_pane_g3

0xce3f,	// (0x0005b5da) smil2_volume_content_pane_g4

0xce48,	// (0x0005b5e3) smil2_volume_content_pane_g5

0xce51,	// (0x0005b5ec) smil2_volume_content_pane_g6

0xce5a,	// (0x0005b5f5) smil2_volume_content_pane_g7

0xce63,	// (0x0005b5fe) smil2_volume_content_pane_g8

0xce6c,	// (0x0005b607) smil2_volume_content_pane_g9

0xce75,	// (0x0005b610) smil2_volume_content_pane_g10

0x0009,

0xf6e4,	// (0x0005de7f) smil2_volume_content_pane_g

0x164a,	// (0x0004fde5) cale_week_day_heading_pane_t1_ParamLimits

0x1674,	// (0x0004fe0f) cale_week_day_heading_pane_t2_ParamLimits

0x16a3,	// (0x0004fe3e) cale_week_day_heading_pane_t3_ParamLimits

0x16d2,	// (0x0004fe6d) cale_week_day_heading_pane_t4_ParamLimits

0x1701,	// (0x0004fe9c) cale_week_day_heading_pane_t5_ParamLimits

0x1734,	// (0x0004fecf) cale_week_day_heading_pane_t6_ParamLimits

0x176b,	// (0x0004ff06) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0005d968) cale_week_day_heading_pane_t_ParamLimits

0xa40a,	// (0x00058ba5) bg_cale_side_pane_ParamLimits

0x1795,	// (0x0004ff30) cale_week_time_pane_t1_ParamLimits

0x17af,	// (0x0004ff4a) cale_week_time_pane_t2_ParamLimits

0x17c9,	// (0x0004ff64) cale_week_time_pane_t3_ParamLimits

0x17e3,	// (0x0004ff7e) cale_week_time_pane_t4_ParamLimits

0x17fd,	// (0x0004ff98) cale_week_time_pane_t5_ParamLimits

0x1817,	// (0x0004ffb2) cale_week_time_pane_t6_ParamLimits

0x1837,	// (0x0004ffd2) cale_week_time_pane_t7_ParamLimits

0x185d,	// (0x0004fff8) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0005d977) cale_week_time_pane_t_ParamLimits

0x1883,	// (0x0005001e) cell_cale_week_pane_g2_ParamLimits

0xa40a,	// (0x00058ba5) bg_cale_side_pane_cp01_ParamLimits

0x2b0b,	// (0x000512a6) cale_month_week_pane_t1_ParamLimits

0x2b24,	// (0x000512bf) cale_month_week_pane_t2_ParamLimits

0x2b3d,	// (0x000512d8) cale_month_week_pane_t3_ParamLimits

0x2b56,	// (0x000512f1) cale_month_week_pane_t4_ParamLimits

0x2b6f,	// (0x0005130a) cale_month_week_pane_t5_ParamLimits

0x2b88,	// (0x00051323) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0005da4c) cale_month_week_pane_t_ParamLimits

0xa630,	// (0x00058dcb) cell_cale_month_pane_g1_ParamLimits

0x9a5a,	// (0x000581f5) main_cale_event_viewer_pane

0x9a5a,	// (0x000581f5) listscroll_cale_event_viewer_pane

0xce7e,	// (0x0005b619) list_cale_ev_pane

0xce86,	// (0x0005b621) scroll_pane_cp023

0x4ccb,	// (0x00053466) field_cale_ev_pane_ParamLimits

0x4ccb,	// (0x00053466) field_cale_ev_pane

0xce92,	// (0x0005b62d) field_cale_ev_content_pane_ParamLimits

0xce92,	// (0x0005b62d) field_cale_ev_content_pane

0xce9e,	// (0x0005b639) field_cale_ev_pane_g1_ParamLimits

0xce9e,	// (0x0005b639) field_cale_ev_pane_g1

0xceaa,	// (0x0005b645) field_cale_ev_pane_g2_ParamLimits

0xceaa,	// (0x0005b645) field_cale_ev_pane_g2

0xcec2,	// (0x0005b65d) field_cale_ev_pane_g3_ParamLimits

0xcec2,	// (0x0005b65d) field_cale_ev_pane_g3

0x0002,

0xf6f9,	// (0x0005de94) field_cale_ev_pane_g_ParamLimits

0xf6f9,	// (0x0005de94) field_cale_ev_pane_g

0xceda,	// (0x0005b675) field_cale_ev_pane_t1_ParamLimits

0xceda,	// (0x0005b675) field_cale_ev_pane_t1

0x4cef,	// (0x0005348a) field_cale_ev_content_pane_t1_ParamLimits

0x4cef,	// (0x0005348a) field_cale_ev_content_pane_t1

0xb726,	// (0x00059ec1) bg_button_pane_cp01

0x1302,	// (0x0004fa9d) listscroll_cale_week_pane_ParamLimits

0xa3d2,	// (0x00058b6d) popup_toolbar_window_cp01

0xa3db,	// (0x00058b76) listscroll_cale_week_pane_t1_ParamLimits

0x1302,	// (0x0004fa9d) listscroll_cale_day_pane_ParamLimits

0xa3d2,	// (0x00058b6d) popup_toolbar_window_cp02

0xaf10,	// (0x000596ab) listscroll_cale_day_pane_t1_ParamLimits

0x1302,	// (0x0004fa9d) main_cale_month_pane_ParamLimits

0xa764,	// (0x00058eff) popup_toolbar_window_cp03_ParamLimits

0xa764,	// (0x00058eff) popup_toolbar_window_cp03

0x3888,	// (0x00052023) main_image_pane_g2_ParamLimits

0x3888,	// (0x00052023) main_image_pane_g2

0x3899,	// (0x00052034) main_image_pane_g3_ParamLimits

0x3899,	// (0x00052034) main_image_pane_g3

0x0002,

0xf4ea,	// (0x0005dc85) main_image_pane_g_ParamLimits

0xf4ea,	// (0x0005dc85) main_image_pane_g

0xb840,	// (0x00059fdb) main_image_pane_t1_ParamLimits

0x38aa,	// (0x00052045) main_image_pane_t2_ParamLimits

0x38aa,	// (0x00052045) main_image_pane_t2

0x38bc,	// (0x00052057) main_image_pane_t3_ParamLimits

0x38bc,	// (0x00052057) main_image_pane_t3

0x38e4,	// (0x0005207f) main_image_pane_t4_ParamLimits

0x38e4,	// (0x0005207f) main_image_pane_t4

0x0003,

0xf4f1,	// (0x0005dc8c) main_image_pane_t_ParamLimits

0xf4f1,	// (0x0005dc8c) main_image_pane_t

0x3904,	// (0x0005209f) popup_image_details_window_cp01

0x390e,	// (0x000520a9) popup_toobar_trans_pane_cp01_ParamLimits

0x390e,	// (0x000520a9) popup_toobar_trans_pane_cp01

0x40d8,	// (0x00052873) popup_image_details_window_ParamLimits

0x40d8,	// (0x00052873) popup_image_details_window

0xa735,	// (0x00058ed0) popup_image_focus_window

0x4509,	// (0x00052ca4) camera2_autofocus_pane_ParamLimits

0x4509,	// (0x00052ca4) camera2_autofocus_pane

0x9a5a,	// (0x000581f5) bg_popup_sub_pane_cp06

0xcef1,	// (0x0005b68c) popup_image_focus_window_g1

0xcef9,	// (0x0005b694) popup_image_focus_window_g2

0xcf01,	// (0x0005b69c) popup_image_focus_window_g3

0xcf09,	// (0x0005b6a4) popup_image_focus_window_g4

0x0003,

0xf700,	// (0x0005de9b) popup_image_focus_window_g

0xcf11,	// (0x0005b6ac) popup_image_focus_window_t1

0xcf1f,	// (0x0005b6ba) popup_image_focus_window_t2

0xcf2f,	// (0x0005b6ca) popup_image_focus_window_t3

0x0002,

0xf709,	// (0x0005dea4) popup_image_focus_window_t

0xcf3d,	// (0x0005b6d8) camera2_autofocus_pane_g1

0xad09,	// (0x000594a4) bg_tb_trans_pane_cp01

0xcf4b,	// (0x0005b6e6) popup_image_details_window_g1

0xcf5e,	// (0x0005b6f9) popup_image_details_window_g2

0x0002,

0xf71b,	// (0x0005deb6) popup_image_details_window_g

0xcf87,	// (0x0005b722) popup_image_details_window_t1

0xcf99,	// (0x0005b734) popup_image_details_window_t2

0xcfb2,	// (0x0005b74d) popup_image_details_window_t3

0xcfc6,	// (0x0005b761) popup_image_details_window_t4

0xcfe1,	// (0x0005b77c) popup_image_details_window_t5

0x0004,

0xf722,	// (0x0005debd) popup_image_details_window_t

0xa223,	// (0x000589be) bg_calc_paper_pane_ParamLimits

0x9a5a,	// (0x000581f5) grid_highlight_pane_cp013

0xa237,	// (0x000589d2) list_calc_pane_ParamLimits

0xa249,	// (0x000589e4) scroll_pane_cp024

0xa251,	// (0x000589ec) bg_calc_display_pane_ParamLimits

0x113a,	// (0x0004f8d5) calc_display_pane_t1_ParamLimits

0x114c,	// (0x0004f8e7) calc_display_pane_t2_ParamLimits

0xa25d,	// (0x000589f8) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0005d8e8) calc_display_pane_t_ParamLimits

0x120d,	// (0x0004f9a8) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0005d905) cell_calc_pane_g

0x1216,	// (0x0004f9b1) cell_calc_pane_t1

0xa2d4,	// (0x00058a6f) grid_highlight_pane_cp02_ParamLimits

0xa2ea,	// (0x00058a85) toolbar_button_pane_cp01_ParamLimits

0xa2ea,	// (0x00058a85) toolbar_button_pane_cp01

0xb885,	// (0x0005a020) temp_image_control_pane_ParamLimits

0xb885,	// (0x0005a020) temp_image_control_pane

0xad09,	// (0x000594a4) main_mp3_pane

0xcffb,	// (0x0005b796) temp_image_control_pane_g1_ParamLimits

0xcffb,	// (0x0005b796) temp_image_control_pane_g1

0xd009,	// (0x0005b7a4) temp_image_control_pane_g2_ParamLimits

0xd009,	// (0x0005b7a4) temp_image_control_pane_g2

0xd01b,	// (0x0005b7b6) temp_image_control_pane_g3_ParamLimits

0xd01b,	// (0x0005b7b6) temp_image_control_pane_g3

0x4d40,	// (0x000534db) temp_image_control_pane_g4_ParamLimits

0x4d40,	// (0x000534db) temp_image_control_pane_g4

0x0003,

0xf72d,	// (0x0005dec8) temp_image_control_pane_g_ParamLimits

0xf72d,	// (0x0005dec8) temp_image_control_pane_g

0xcffb,	// (0x0005b796) main_mp3_pane_g1

0x4d53,	// (0x000534ee) main_mp3_pane_g2

0x0007,

0xf736,	// (0x0005ded1) main_mp3_pane_g

0xd05e,	// (0x0005b7f9) main_mp3_pane_t1

0xa477,	// (0x00058c12) main_camera_pane_g8_ParamLimits

0xa477,	// (0x00058c12) main_camera_pane_g8

0x1b95,	// (0x00050330) main_video_pane_g7_ParamLimits

0x1b95,	// (0x00050330) main_video_pane_g7

0xa7b4,	// (0x00058f4f) main_camera2_pane_t7_ParamLimits

0xa7b4,	// (0x00058f4f) main_camera2_pane_t7

0xa5c3,	// (0x00058d5e) scroll_pane_cp025_ParamLimits

0xa5c3,	// (0x00058d5e) scroll_pane_cp025

0xa5d7,	// (0x00058d72) scroll_pane_cp026_ParamLimits

0xa5d7,	// (0x00058d72) scroll_pane_cp026

0xa5e6,	// (0x00058d81) wml_content_pane_ParamLimits

0x9a5a,	// (0x000581f5) main_touch_calib_pane

0x4e25,	// (0x000535c0) main_touch_calib_pane_g1

0x4e37,	// (0x000535d2) main_touch_calib_pane_g2

0x4e49,	// (0x000535e4) main_touch_calib_pane_g3

0x4e5b,	// (0x000535f6) main_touch_calib_pane_g4

0x0003,

0xf754,	// (0x0005deef) main_touch_calib_pane_g

0x4e6d,	// (0x00053608) main_touch_calib_pane_t1

0x4e87,	// (0x00053622) main_touch_calib_pane_t2

0x0004,

0xf75d,	// (0x0005def8) main_touch_calib_pane_t

0xb44e,	// (0x00059be9) mup_progress_pane_cp02

0xb483,	// (0x00059c1e) navi_pane_g1

0xb53e,	// (0x00059cd9) navi_pane_mp_t3

0xad09,	// (0x000594a4) main_mp3_pane_ParamLimits

0x4291,	// (0x00052a2c) navi_pane_ParamLimits

0xcffb,	// (0x0005b796) main_mp3_pane_g1_ParamLimits

0x4d53,	// (0x000534ee) main_mp3_pane_g2_ParamLimits

0x4d5f,	// (0x000534fa) main_mp3_pane_g3_ParamLimits

0x4d5f,	// (0x000534fa) main_mp3_pane_g3

0x4d6d,	// (0x00053508) main_mp3_pane_g4_ParamLimits

0x4d6d,	// (0x00053508) main_mp3_pane_g4

0xd02b,	// (0x0005b7c6) main_mp3_pane_g5_ParamLimits

0xd02b,	// (0x0005b7c6) main_mp3_pane_g5

0xd039,	// (0x0005b7d4) main_mp3_pane_g6_ParamLimits

0xd039,	// (0x0005b7d4) main_mp3_pane_g6

0xd046,	// (0x0005b7e1) main_mp3_pane_g7_ParamLimits

0xd046,	// (0x0005b7e1) main_mp3_pane_g7

0xd052,	// (0x0005b7ed) main_mp3_pane_g8_ParamLimits

0xd052,	// (0x0005b7ed) main_mp3_pane_g8

0xf736,	// (0x0005ded1) main_mp3_pane_g_ParamLimits

0x4d79,	// (0x00053514) main_mp3_pane_t2

0x4d87,	// (0x00053522) main_mp3_pane_t3

0xd06c,	// (0x0005b807) main_mp3_pane_t4

0xd07a,	// (0x0005b815) main_mp3_pane_t5

0x0005,

0xf747,	// (0x0005dee2) main_mp3_pane_t

0xd088,	// (0x0005b823) mup_progress_pane_cp01

0x0c14,	// (0x0004f3af) aid_zoom_text_secondary2

0xce7e,	// (0x0005b619) list_cale_ev2_pane

0xce86,	// (0x0005b621) scroll_pane_cp023_ParamLimits

0x4ee1,	// (0x0005367c) field_cale_ev2_pane_ParamLimits

0x4ee1,	// (0x0005367c) field_cale_ev2_pane

0xfe87,	// (0x0004e622) field_cale_ev2_pane_g1_ParamLimits

0xfe87,	// (0x0004e622) field_cale_ev2_pane_g1

0xfe93,	// (0x0004e62e) field_cale_ev2_pane_g2_ParamLimits

0xfe93,	// (0x0004e62e) field_cale_ev2_pane_g2

0xfeab,	// (0x0004e646) field_cale_ev2_pane_g3_ParamLimits

0xfeab,	// (0x0004e646) field_cale_ev2_pane_g3

0x0003,

0xf768,	// (0x0005df03) field_cale_ev2_pane_g_ParamLimits

0xf768,	// (0x0005df03) field_cale_ev2_pane_g

0xfec3,	// (0x0004e65e) field_cale_ev2_pane_t1_ParamLimits

0xfec3,	// (0x0004e65e) field_cale_ev2_pane_t1

0xfeda,	// (0x0004e675) field_cale_ev2_pane_t2_ParamLimits

0xfeda,	// (0x0004e675) field_cale_ev2_pane_t2

0x0001,

0xf771,	// (0x0005df0c) field_cale_ev2_pane_t_ParamLimits

0xf771,	// (0x0005df0c) field_cale_ev2_pane_t

0x3720,	// (0x00051ebb) main_postcard_pane_g5_ParamLimits

0x3720,	// (0x00051ebb) main_postcard_pane_g5

0x3736,	// (0x00051ed1) main_postcard_pane_g6_ParamLimits

0x3736,	// (0x00051ed1) main_postcard_pane_g6

0x1941,	// (0x000500dc) camera2_autofocus_pane_cp_ParamLimits

0x1941,	// (0x000500dc) camera2_autofocus_pane_cp

0xad09,	// (0x000594a4) main_mup3_pane

0x4f5b,	// (0x000536f6) main_mup3_pane_g1_ParamLimits

0x4f5b,	// (0x000536f6) main_mup3_pane_g1

0x4f7d,	// (0x00053718) main_mup3_pane_g2_ParamLimits

0x4f7d,	// (0x00053718) main_mup3_pane_g2

0x4ff8,	// (0x00053793) main_mup3_pane_g3_ParamLimits

0x4ff8,	// (0x00053793) main_mup3_pane_g3

0x5062,	// (0x000537fd) main_mup3_pane_g4_ParamLimits

0x5062,	// (0x000537fd) main_mup3_pane_g4

0x50cc,	// (0x00053867) main_mup3_pane_g5_ParamLimits

0x50cc,	// (0x00053867) main_mup3_pane_g5

0x5136,	// (0x000538d1) main_mup3_pane_g6_ParamLimits

0x5136,	// (0x000538d1) main_mup3_pane_g6

0xd090,	// (0x0005b82b) main_mup3_pane_g7_ParamLimits

0xd090,	// (0x0005b82b) main_mup3_pane_g7

0x0007,

0xf781,	// (0x0005df1c) main_mup3_pane_g_ParamLimits

0xf781,	// (0x0005df1c) main_mup3_pane_g

0x51b6,	// (0x00053951) main_mup3_pane_t1_ParamLimits

0x51b6,	// (0x00053951) main_mup3_pane_t1

0x5228,	// (0x000539c3) main_mup3_pane_t2_ParamLimits

0x5228,	// (0x000539c3) main_mup3_pane_t2

0x52fa,	// (0x00053a95) main_mup3_pane_t4_ParamLimits

0x52fa,	// (0x00053a95) main_mup3_pane_t4

0x5358,	// (0x00053af3) main_mup3_pane_t5_ParamLimits

0x5358,	// (0x00053af3) main_mup3_pane_t5

0x5414,	// (0x00053baf) main_mup3_pane_t6_ParamLimits

0x5414,	// (0x00053baf) main_mup3_pane_t6

0x0005,

0xf792,	// (0x0005df2d) main_mup3_pane_t_ParamLimits

0xf792,	// (0x0005df2d) main_mup3_pane_t

0x54cc,	// (0x00053c67) mup3_progress_pane_ParamLimits

0x54cc,	// (0x00053c67) mup3_progress_pane

0x5564,	// (0x00053cff) popup_mup3_control_window_ParamLimits

0x5564,	// (0x00053cff) popup_mup3_control_window

0xd09e,	// (0x0005b839) popup_mup3_text_window

0x559a,	// (0x00053d35) mup3_progress_pane_t1

0x55b9,	// (0x00053d54) mup3_progress_pane_t2

0xd0a6,	// (0x0005b841) mup3_progress_pane_t3

0x0002,

0xf79f,	// (0x0005df3a) mup3_progress_pane_t

0xd0c3,	// (0x0005b85e) mup_progress_pane_cp03

0x9a5a,	// (0x000581f5) bg_tb_trans_pane_cp04

0x55d8,	// (0x00053d73) mup3_volume_pane

0x55e0,	// (0x00053d7b) popup_mup3_control_window_g1

0x55e9,	// (0x00053d84) mup3_volume_pane_g1

0x55f2,	// (0x00053d8d) mup3_volume_pane_g2

0x55fb,	// (0x00053d96) mup3_volume_pane_g3

0x0002,

0xf7a6,	// (0x0005df41) mup3_volume_pane_g

0x9a5a,	// (0x000581f5) bg_tb_trans_pane_cp03

0xd0d3,	// (0x0005b86e) popup_mup3_text_window_g1

0xd0db,	// (0x0005b876) popup_mup3_text_window_t1

0xa2ab,	// (0x00058a46) list_calc_item_pane_g1_ParamLimits

0xcb51,	// (0x0005b2ec) mup_volume_pane_cp_g1

0x4ea1,	// (0x0005363c) main_touch_calib_pane_t3

0x4eb5,	// (0x00053650) main_touch_calib_pane_t4

0x4ecb,	// (0x00053666) main_touch_calib_pane_t5

0x9a64,	// (0x000581ff) aid_cell_size_toolbar2

0x9a6c,	// (0x00058207) aid_popup3_width_pane

0x0c0c,	// (0x0004f3a7) aid_zoom_text_msg_primary

0x1933,	// (0x000500ce) vorec_t7

0xa26f,	// (0x00058a0a) bg_calc_paper_pane_g1_ParamLimits

0xa27b,	// (0x00058a16) bg_calc_paper_pane_g2_ParamLimits

0xa287,	// (0x00058a22) bg_calc_paper_pane_g3_ParamLimits

0xa293,	// (0x00058a2e) bg_calc_paper_pane_g4_ParamLimits

0xa29f,	// (0x00058a3a) bg_calc_paper_pane_g5_ParamLimits

0x1199,	// (0x0004f934) bg_calc_paper_pane_g6_ParamLimits

0x11a7,	// (0x0004f942) bg_calc_paper_pane_g7_ParamLimits

0x11b5,	// (0x0004f950) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0005d8ef) bg_calc_paper_pane_g_ParamLimits

0x11c8,	// (0x0004f963) calc_bg_paper_pane_g9_ParamLimits

0x1aa3,	// (0x0005023e) image_qvga_pane_ParamLimits

0x1aa3,	// (0x0005023e) image_qvga_pane

0xa16a,	// (0x00058905) bg_popup_sub_pane_cp04_ParamLimits

0xb7bc,	// (0x00059f57) popup_mup_playback_window_g1_ParamLimits

0xb7c8,	// (0x00059f63) popup_mup_playback_window_t1_ParamLimits

0xb7dd,	// (0x00059f78) popup_mup_playback_window_t2_ParamLimits

0xf4e5,	// (0x0005dc80) popup_mup_playback_window_t_ParamLimits

0x498d,	// (0x00053128) main_mup2_pane_g3_ParamLimits

0x498d,	// (0x00053128) main_mup2_pane_g3

0x1d94,	// (0x0005052f) popup_toolbar_window_cp04

0xbbd8,	// (0x0005a373) popup_call2_audio_second_window_g3_ParamLimits

0xbbd8,	// (0x0005a373) popup_call2_audio_second_window_g3

0xbfe2,	// (0x0005a77d) popup_call2_audio_first_window_g4_ParamLimits

0xbfe2,	// (0x0005a77d) popup_call2_audio_first_window_g4

0xc661,	// (0x0005adfc) popup_call2_audio_in_window_g4_ParamLimits

0xc661,	// (0x0005adfc) popup_call2_audio_in_window_g4

0x386a,	// (0x00052005) aid_area_sk_bg_cut_ParamLimits

0x386a,	// (0x00052005) aid_area_sk_bg_cut

0xb7f2,	// (0x00059f8d) aid_area_sk_bg_cut_2_ParamLimits

0xb7f2,	// (0x00059f8d) aid_area_sk_bg_cut_2

0x4ca1,	// (0x0005343c) aid_placing_details_win

0x4ca9,	// (0x00053444) aid_placing_details_win_2

0xcf3d,	// (0x0005b6d8) camera2_autofocus_pane_g1_ParamLimits

0x0db5,	// (0x0004f550) popup_fixed_preview_cale_window_ParamLimits

0x0db5,	// (0x0004f550) popup_fixed_preview_cale_window

0xb5be,	// (0x00059d59) navi_slider_pane_g3

0xb5c7,	// (0x00059d62) navi_slider_pane_g4

0xb5d0,	// (0x00059d6b) navi_slider_pane_g5

0xb5be,	// (0x00059d59) navi_slider_pane_g6

0xa6d6,	// (0x00058e71) navi_slider_pane_g7

0xb6f3,	// (0x00059e8e) mup_scale_pane_g3

0xb6fc,	// (0x00059e97) mup_scale_pane_g4

0xb705,	// (0x00059ea0) mup_scale_pane_g5

0x35c7,	// (0x00051d62) mup_scale_pane_g6

0x35d0,	// (0x00051d6b) mup_scale_pane_g7

0xb5be,	// (0x00059d59) cams2_slider_pane_g3

0xcbd3,	// (0x0005b36e) cams2_slider_pane_g4

0xa822,	// (0x00058fbd) cams2_slider_pane_g5

0xb5be,	// (0x00059d59) cams2_slider_pane_g6

0xa82a,	// (0x00058fc5) cams2_slider_pane_g7

0xce04,	// (0x0005b59f) camera2_autofocus_pane_cp_g1

0xc9c0,	// (0x0005b15b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc9c0,	// (0x0005b15b) bg_popup_preview_window_pane_cp02

0xd0e9,	// (0x0005b884) list_fp_cale_pane_ParamLimits

0xd0e9,	// (0x0005b884) list_fp_cale_pane

0xd0f5,	// (0x0005b890) popup_fixed_preview_cale_window_t1_ParamLimits

0xd0f5,	// (0x0005b890) popup_fixed_preview_cale_window_t1

0x5604,	// (0x00053d9f) popup_fixed_preview_cale_window_t2_ParamLimits

0x5604,	// (0x00053d9f) popup_fixed_preview_cale_window_t2

0x5619,	// (0x00053db4) popup_fixed_preview_cale_window_t3_ParamLimits

0x5619,	// (0x00053db4) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ad,	// (0x0005df48) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ad,	// (0x0005df48) popup_fixed_preview_cale_window_t

0x5630,	// (0x00053dcb) list_single_fp_cale_pane_ParamLimits

0x5630,	// (0x00053dcb) list_single_fp_cale_pane

0xd113,	// (0x0005b8ae) list_single_fp_cale_pane_g1_ParamLimits

0xd113,	// (0x0005b8ae) list_single_fp_cale_pane_g1

0xd11f,	// (0x0005b8ba) list_single_fp_cale_pane_g2_ParamLimits

0xd11f,	// (0x0005b8ba) list_single_fp_cale_pane_g2

0x0002,

0xf7b4,	// (0x0005df4f) list_single_fp_cale_pane_g_ParamLimits

0xf7b4,	// (0x0005df4f) list_single_fp_cale_pane_g

0xd138,	// (0x0005b8d3) list_single_fp_cale_pane_t1_ParamLimits

0xd138,	// (0x0005b8d3) list_single_fp_cale_pane_t1

0xd14a,	// (0x0005b8e5) list_single_fp_cale_pane_t2_ParamLimits

0xd14a,	// (0x0005b8e5) list_single_fp_cale_pane_t2

0x0001,

0xf7bb,	// (0x0005df56) list_single_fp_cale_pane_t_ParamLimits

0xf7bb,	// (0x0005df56) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9a5a,	// (0x000581f5) main_dialer_pane

0x5648,	// (0x00053de3) aid_cell_size_keypad

0x5652,	// (0x00053ded) dialer_ne_pane

0x565c,	// (0x00053df7) grid_dialer_command_1_pane

0x5664,	// (0x00053dff) grid_dialer_command_2_pane

0x566c,	// (0x00053e07) grid_dialer_keypad_pane

0x5680,	// (0x00053e1b) bg_popup_call_pane_cp06_ParamLimits

0x5680,	// (0x00053e1b) bg_popup_call_pane_cp06

0x568c,	// (0x00053e27) dialer_ne_clear_pane_ParamLimits

0x568c,	// (0x00053e27) dialer_ne_clear_pane

0xd17d,	// (0x0005b918) dialer_ne_pane_g1

0xd185,	// (0x0005b920) dialer_ne_pane_t1_ParamLimits

0xd185,	// (0x0005b920) dialer_ne_pane_t1

0x5698,	// (0x00053e33) dialer_ne_pane_t2_ParamLimits

0x5698,	// (0x00053e33) dialer_ne_pane_t2

0x56c2,	// (0x00053e5d) dialer_ne_pane_t3_ParamLimits

0x56c2,	// (0x00053e5d) dialer_ne_pane_t3

0x0002,

0xf7c0,	// (0x0005df5b) dialer_ne_pane_t_ParamLimits

0xf7c0,	// (0x0005df5b) dialer_ne_pane_t

0x56f2,	// (0x00053e8d) dialer_ne_pane_t3_copy1_ParamLimits

0x56f2,	// (0x00053e8d) dialer_ne_pane_t3_copy1

0x5721,	// (0x00053ebc) cell_dialer_keypad_pane_ParamLimits

0x5721,	// (0x00053ebc) cell_dialer_keypad_pane

0x5738,	// (0x00053ed3) cell_dialer_command_1_pane_ParamLimits

0x5738,	// (0x00053ed3) cell_dialer_command_1_pane

0x574e,	// (0x00053ee9) cell_dialer_command_2_pane_ParamLimits

0x574e,	// (0x00053ee9) cell_dialer_command_2_pane

0xd197,	// (0x0005b932) bg_button_pane_cp02_ParamLimits

0xd197,	// (0x0005b932) bg_button_pane_cp02

0x575d,	// (0x00053ef8) cell_dialer_keypad_pane_g1_ParamLimits

0x575d,	// (0x00053ef8) cell_dialer_keypad_pane_g1

0xd197,	// (0x0005b932) bg_button_pane_cp03_ParamLimits

0xd197,	// (0x0005b932) bg_button_pane_cp03

0x576e,	// (0x00053f09) cell_dialer_command_1_pane_g1_ParamLimits

0x576e,	// (0x00053f09) cell_dialer_command_1_pane_g1

0xd1a3,	// (0x0005b93e) bg_button_pane_cp04

0x5782,	// (0x00053f1d) cell_dialer_command_2_pane_g1

0xa465,	// (0x00058c00) bg_button_pane_cp06

0xd1ab,	// (0x0005b946) dialer_ne_clear_pane_g1

0xb48f,	// (0x00059c2a) navi_pane_g2

0xb4bd,	// (0x00059c58) navi_pane_g3

0x0002,

0xf3e8,	// (0x0005db83) navi_pane_g

0xb54c,	// (0x00059ce7) navi_pane_mv_g2

0xb575,	// (0x00059d10) navi_pane_mv_g5

0x312f,	// (0x000518ca) navi_pane_mv_t1

0xa251,	// (0x000589ec) main_clock2_pane

0xad09,	// (0x000594a4) main_clock2_list_pane_ParamLimits

0xad09,	// (0x000594a4) main_clock2_list_pane

0x57ee,	// (0x00053f89) main_clock2_pane_t1_ParamLimits

0x57ee,	// (0x00053f89) main_clock2_pane_t1

0x5829,	// (0x00053fc4) main_clock2_pane_t2_ParamLimits

0x5829,	// (0x00053fc4) main_clock2_pane_t2

0x0004,

0xf7cc,	// (0x0005df67) main_clock2_pane_t_ParamLimits

0xf7cc,	// (0x0005df67) main_clock2_pane_t

0x58c8,	// (0x00054063) popup_clock_analogue_window_cp03_ParamLimits

0x58c8,	// (0x00054063) popup_clock_analogue_window_cp03

0x58ed,	// (0x00054088) popup_clock_digital_window_cp02_ParamLimits

0x58ed,	// (0x00054088) popup_clock_digital_window_cp02

0x5966,	// (0x00054101) main_clock2_list_single_pane_ParamLimits

0x5966,	// (0x00054101) main_clock2_list_single_pane

0xa465,	// (0x00058c00) list_highlight_pane_cp05

0xd1e3,	// (0x0005b97e) main_clock2_list_single_pane_t1

0x1d94,	// (0x0005052f) popup_toolbar_window_cp04_ParamLimits

0x4d10,	// (0x000534ab) camera2_autofocus_pane_g2_ParamLimits

0x4d10,	// (0x000534ab) camera2_autofocus_pane_g2

0x4d1c,	// (0x000534b7) camera2_autofocus_pane_g3_ParamLimits

0x4d1c,	// (0x000534b7) camera2_autofocus_pane_g3

0x4d28,	// (0x000534c3) camera2_autofocus_pane_g4_ParamLimits

0x4d28,	// (0x000534c3) camera2_autofocus_pane_g4

0x4d34,	// (0x000534cf) camera2_autofocus_pane_g5_ParamLimits

0x4d34,	// (0x000534cf) camera2_autofocus_pane_g5

0x0004,

0xf710,	// (0x0005deab) camera2_autofocus_pane_g_ParamLimits

0xf710,	// (0x0005deab) camera2_autofocus_pane_g

0x4f11,	// (0x000536ac) camera2_autofocus_pane_cp_g2

0x4f19,	// (0x000536b4) camera2_autofocus_pane_cp_g3

0x4f21,	// (0x000536bc) camera2_autofocus_pane_cp_g4

0x4f29,	// (0x000536c4) camera2_autofocus_pane_cp_g5

0x0004,

0xf776,	// (0x0005df11) camera2_autofocus_pane_cp_g

0x5678,	// (0x00053e13) popup_dialer_spcha_window

0x9a5a,	// (0x000581f5) bg_popup_sub_pane_cp07

0xd1f1,	// (0x0005b98c) list_spcha_pane

0xd1f9,	// (0x0005b994) list_single_spcha_pane_ParamLimits

0xd1f9,	// (0x0005b994) list_single_spcha_pane

0x9a5a,	// (0x000581f5) list_highlight_pane_cp06

0xd20a,	// (0x0005b9a5) list_single_spcha_pane_t1

0xc40b,	// (0x0005aba6) popup_call2_audio_out_window_g4_ParamLimits

0xc40b,	// (0x0005aba6) popup_call2_audio_out_window_g4

0x9a5a,	// (0x000581f5) main_imed2_pane

0xa73f,	// (0x00058eda) popup_imed_adjust2_window

0x40f0,	// (0x0005288b) popup_imed_trans_window_ParamLimits

0x40f0,	// (0x0005288b) popup_imed_trans_window

0xcc3c,	// (0x0005b3d7) popup_blid_sat_info2_window_t1

0xcc4a,	// (0x0005b3e5) popup_blid_sat_info2_window_t2

0x000a,

0xf6a5,	// (0x0005de40) popup_blid_sat_info2_window_t

0x5a21,	// (0x000541bc) aid_size_cell_colour_35

0x5a41,	// (0x000541dc) aid_size_cell_colour_112

0x5a61,	// (0x000541fc) aid_size_cell_effect

0xc9cc,	// (0x0005b167) bg_tb_trans_pane_cp02

0xb019,	// (0x000597b4) heading_imed_pane

0x5a81,	// (0x0005421c) listscroll_imed_pane

0xd218,	// (0x0005b9b3) heading_imed_pane_g1

0xd220,	// (0x0005b9bb) heading_imed_pane_t1

0xd22e,	// (0x0005b9c9) grid_imed_colour_35_pane_ParamLimits

0xd22e,	// (0x0005b9c9) grid_imed_colour_35_pane

0x5a8d,	// (0x00054228) grid_imed_effect_pane

0xd24a,	// (0x0005b9e5) list_imed_aspect_pane

0x5aa4,	// (0x0005423f) scroll_pane_cp027_ParamLimits

0x5aa4,	// (0x0005423f) scroll_pane_cp027

0x5ab5,	// (0x00054250) cell_imed_effect_pane_ParamLimits

0x5ab5,	// (0x00054250) cell_imed_effect_pane

0xd252,	// (0x0005b9ed) cell_imed_colour_pane_ParamLimits

0xd252,	// (0x0005b9ed) cell_imed_colour_pane

0xd2a8,	// (0x0005ba43) cell_imed_colour_pane_g1_ParamLimits

0xd2a8,	// (0x0005ba43) cell_imed_colour_pane_g1

0xd2b9,	// (0x0005ba54) hgihlgiht_grid_pane_cp016_ParamLimits

0xd2b9,	// (0x0005ba54) hgihlgiht_grid_pane_cp016

0x5ae0,	// (0x0005427b) cell_imed_effect_pane_g1

0x5ae8,	// (0x00054283) grid_highlight_pane_cp017

0xd2ca,	// (0x0005ba65) list_imed_single_pane_ParamLimits

0xd2ca,	// (0x0005ba65) list_imed_single_pane

0x9a5a,	// (0x000581f5) list_highlight_pane_cp07

0xd2de,	// (0x0005ba79) list_imed_aspect_pane_comp1_t1

0xc9cc,	// (0x0005b167) bg_tb_trans_pane_cp05

0xd300,	// (0x0005ba9b) popup_imed_adjust2_window_g1

0xd327,	// (0x0005bac2) popup_imed_adjust2_window_t1

0xd33f,	// (0x0005bada) slider_imed_adjust_pane

0xd353,	// (0x0005baee) slider_imed_adjust_pane_g1

0xd363,	// (0x0005bafe) slider_imed_adjust_pane_g2

0xd373,	// (0x0005bb0e) slider_imed_adjust_pane_g3

0xd384,	// (0x0005bb1f) slider_imed_adjust_pane_g4

0x0003,

0xf7e9,	// (0x0005df84) slider_imed_adjust_pane_g

0x5af1,	// (0x0005428c) aid_size_cell_clipart2

0xd395,	// (0x0005bb30) grid_imed_clipart_pane

0xd39f,	// (0x0005bb3a) scroll_pane_cp031

0x5afd,	// (0x00054298) cell_imed_clipart_pane_ParamLimits

0x5afd,	// (0x00054298) cell_imed_clipart_pane

0x5b1a,	// (0x000542b5) cell_imed_clipart_pane_g1

0x9a5a,	// (0x000581f5) grid_highlight_pane_cp014

0x57cc,	// (0x00053f67) main_clock2_pane_g1_ParamLimits

0x57cc,	// (0x00053f67) main_clock2_pane_g1

0x590d,	// (0x000540a8) aid_call2_pane_cp10

0x591f,	// (0x000540ba) aid_call_pane_cp10

0xb3ee,	// (0x00059b89) popup_clock_analogue_window_cp10_g1

0xb3ee,	// (0x00059b89) popup_clock_analogue_window_cp10_g2

0x5931,	// (0x000540cc) popup_clock_analogue_window_cp10_g3

0x5931,	// (0x000540cc) popup_clock_analogue_window_cp10_g4

0xb3ee,	// (0x00059b89) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d7,	// (0x0005df72) popup_clock_analogue_window_cp10_g

0x5947,	// (0x000540e2) popup_clock_analogue_window_cp10_t1

0x5978,	// (0x00054113) clock_digital_number_pane_cp10_ParamLimits

0x5978,	// (0x00054113) clock_digital_number_pane_cp10

0x5992,	// (0x0005412d) clock_digital_number_pane_cp11_ParamLimits

0x5992,	// (0x0005412d) clock_digital_number_pane_cp11

0x59ac,	// (0x00054147) clock_digital_number_pane_cp12_ParamLimits

0x59ac,	// (0x00054147) clock_digital_number_pane_cp12

0x59c8,	// (0x00054163) clock_digital_number_pane_cp13_ParamLimits

0x59c8,	// (0x00054163) clock_digital_number_pane_cp13

0x59e4,	// (0x0005417f) clock_digital_separator_pane_cp10_ParamLimits

0x59e4,	// (0x0005417f) clock_digital_separator_pane_cp10

0x5a00,	// (0x0005419b) popup_clock_digital_window_cp02_t1_ParamLimits

0x5a00,	// (0x0005419b) popup_clock_digital_window_cp02_t1

0xa162,	// (0x000588fd) clock_digital_number_pane_cp10_g1

0xa162,	// (0x000588fd) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f2,	// (0x0005df8d) clock_digital_number_pane_cp10_g

0xa162,	// (0x000588fd) clock_digital_separator_pane_cp10_g1

0xa162,	// (0x000588fd) clock_digital_separator_pane_g2_cp10

0xb57d,	// (0x00059d18) navi_pane_vded_g4

0xb586,	// (0x00059d21) navi_pane_vded_g5

0xb58f,	// (0x00059d2a) navi_pane_vded_t1

0x9a5a,	// (0x000581f5) main_vded_pane

0x5b23,	// (0x000542be) main_vded_pane_g1

0x5b2f,	// (0x000542ca) main_vded_pane_g2

0x5b3b,	// (0x000542d6) main_vded_pane_g3

0x0002,

0xf7f7,	// (0x0005df92) main_vded_pane_g

0x5b47,	// (0x000542e2) main_vded_pane_t1

0x5b55,	// (0x000542f0) main_vded_pane_t2

0x0001,

0xf7fe,	// (0x0005df99) main_vded_pane_t

0x5b63,	// (0x000542fe) vded_slider_pane

0x5b6d,	// (0x00054308) vded_video_pane

0xd3a7,	// (0x0005bb42) vded_video_pane_g1

0x5b79,	// (0x00054314) vded_video_pane_g2

0xce04,	// (0x0005b59f) vded_video_pane_g3

0x0002,

0xf803,	// (0x0005df9e) vded_video_pane_g

0xd3b1,	// (0x0005bb4c) vded_slider_pane_g1

0xcb51,	// (0x0005b2ec) vded_slider_pane_g2

0xd3ba,	// (0x0005bb55) vded_slider_pane_g3

0xd3c3,	// (0x0005bb5e) vded_slider_pane_g4

0xd3cc,	// (0x0005bb67) vded_slider_pane_g5

0x0004,

0xf80a,	// (0x0005dfa5) vded_slider_pane_g

0x554e,	// (0x00053ce9) mup3_rocker_pane_ParamLimits

0x554e,	// (0x00053ce9) mup3_rocker_pane

0x5b82,	// (0x0005431d) mup3_control_keys_pane_g1

0x5b8a,	// (0x00054325) mup3_control_keys_pane_g2

0x5b92,	// (0x0005432d) mup3_control_keys_pane_g3

0x5b9a,	// (0x00054335) mup3_control_keys_pane_g4

0x0003,

0xf815,	// (0x0005dfb0) mup3_control_keys_pane_g

0x0dea,	// (0x0004f585) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dea,	// (0x0004f585) popup_toolbar2_fixed_window_cp01

0x5584,	// (0x00053d1f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5584,	// (0x00053d1f) popup_toolbar2_fixed_window_cp02

0xbd4a,	// (0x0005a4e5) popup_call2_audio_second_window_t4_ParamLimits

0xbd4a,	// (0x0005a4e5) popup_call2_audio_second_window_t4

0xc278,	// (0x0005aa13) popup_call2_audio_first_window_t6_ParamLimits

0xc278,	// (0x0005aa13) popup_call2_audio_first_window_t6

0xc50e,	// (0x0005aca9) popup_call2_audio_out_window_t6_ParamLimits

0xc50e,	// (0x0005aca9) popup_call2_audio_out_window_t6

0x9a5a,	// (0x000581f5) main_vitu_pane

0x5baa,	// (0x00054345) aid_size_cell_itu_ParamLimits

0x5baa,	// (0x00054345) aid_size_cell_itu

0xad09,	// (0x000594a4) bg_popup_window_pane_cp08_ParamLimits

0xad09,	// (0x000594a4) bg_popup_window_pane_cp08

0x5bc0,	// (0x0005435b) field_vitu_entry_pane_ParamLimits

0x5bc0,	// (0x0005435b) field_vitu_entry_pane

0x5bd7,	// (0x00054372) grid_vitu_function_pane_ParamLimits

0x5bd7,	// (0x00054372) grid_vitu_function_pane

0x5bf2,	// (0x0005438d) grid_vitu_itu_pane_ParamLimits

0x5bf2,	// (0x0005438d) grid_vitu_itu_pane

0x5c10,	// (0x000543ab) cell_vitu_itu_pane_ParamLimits

0x5c10,	// (0x000543ab) cell_vitu_itu_pane

0x5c36,	// (0x000543d1) cell_vitu_function_pane_ParamLimits

0x5c36,	// (0x000543d1) cell_vitu_function_pane

0xad09,	// (0x000594a4) bg_popup_sub_pane_cp08_ParamLimits

0xad09,	// (0x000594a4) bg_popup_sub_pane_cp08

0x5c51,	// (0x000543ec) field_vitu_entry_pane_t1_ParamLimits

0x5c51,	// (0x000543ec) field_vitu_entry_pane_t1

0xd3ed,	// (0x0005bb88) field_vitu_entry_pane_t2_ParamLimits

0xd3ed,	// (0x0005bb88) field_vitu_entry_pane_t2

0x0001,

0xf823,	// (0x0005dfbe) field_vitu_entry_pane_t_ParamLimits

0xf823,	// (0x0005dfbe) field_vitu_entry_pane_t

0xd40a,	// (0x0005bba5) bg_button_pane_cp05_ParamLimits

0xd40a,	// (0x0005bba5) bg_button_pane_cp05

0x5c71,	// (0x0005440c) cell_vitu_itu_pane_g1

0x5c89,	// (0x00054424) cell_vitu_itu_pane_t1_ParamLimits

0x5c89,	// (0x00054424) cell_vitu_itu_pane_t1

0x5c9b,	// (0x00054436) cell_vitu_itu_pane_t2_ParamLimits

0x5c9b,	// (0x00054436) cell_vitu_itu_pane_t2

0x0002,

0xf828,	// (0x0005dfc3) cell_vitu_itu_pane_t_ParamLimits

0xf828,	// (0x0005dfc3) cell_vitu_itu_pane_t

0xd418,	// (0x0005bbb3) bg_button_pane_cp07

0x5cd0,	// (0x0005446b) cell_vitu_function_pane_g1

0xa1f1,	// (0x0005898c) main_calc_pane_g1

0x0c00,	// (0x0004f39b) aid_visual_content_pane

0x9a5a,	// (0x000581f5) main_vradio_pane

0x5cd9,	// (0x00054474) main_vradio_pane_g1_ParamLimits

0x5cd9,	// (0x00054474) main_vradio_pane_g1

0xd422,	// (0x0005bbbd) main_vradio_pane_g2_ParamLimits

0xd422,	// (0x0005bbbd) main_vradio_pane_g2

0x0001,

0xf82f,	// (0x0005dfca) main_vradio_pane_g_ParamLimits

0xf82f,	// (0x0005dfca) main_vradio_pane_g

0x5cf0,	// (0x0005448b) main_vradio_pane_t1_ParamLimits

0x5cf0,	// (0x0005448b) main_vradio_pane_t1

0x5d05,	// (0x000544a0) main_vradio_pane_t2_ParamLimits

0x5d05,	// (0x000544a0) main_vradio_pane_t2

0xd42f,	// (0x0005bbca) main_vradio_pane_t3_ParamLimits

0xd42f,	// (0x0005bbca) main_vradio_pane_t3

0x0002,

0xf834,	// (0x0005dfcf) main_vradio_pane_t_ParamLimits

0xf834,	// (0x0005dfcf) main_vradio_pane_t

0x5d1a,	// (0x000544b5) vradio_rocker_control_pane_ParamLimits

0x5d1a,	// (0x000544b5) vradio_rocker_control_pane

0x5d2c,	// (0x000544c7) vradio_station_info_pane_ParamLimits

0x5d2c,	// (0x000544c7) vradio_station_info_pane

0xd443,	// (0x0005bbde) vradio_frequency_info_pane_ParamLimits

0xd443,	// (0x0005bbde) vradio_frequency_info_pane

0xce04,	// (0x0005b59f) vradio_station_info_pane_g1

0xd452,	// (0x0005bbed) vradio_station_info_pane_t1_ParamLimits

0xd452,	// (0x0005bbed) vradio_station_info_pane_t1

0xd474,	// (0x0005bc0f) vradio_station_info_pane_t2_ParamLimits

0xd474,	// (0x0005bc0f) vradio_station_info_pane_t2

0x0001,

0xf83b,	// (0x0005dfd6) vradio_station_info_pane_t_ParamLimits

0xf83b,	// (0x0005dfd6) vradio_station_info_pane_t

0xd486,	// (0x0005bc21) vradio_tuning_pane

0xd48e,	// (0x0005bc29) vradio_rocker_control_pane_g1

0xd496,	// (0x0005bc31) vradio_rocker_control_pane_g2

0xd49e,	// (0x0005bc39) vradio_rocker_control_pane_g3

0xd4a6,	// (0x0005bc41) vradio_rocker_control_pane_g4

0xd4ae,	// (0x0005bc49) vradio_rocker_control_pane_g5

0x0004,

0xf840,	// (0x0005dfdb) vradio_rocker_control_pane_g

0x5d3c,	// (0x000544d7) vradio_frequency_info_pane_g1

0xd4b6,	// (0x0005bc51) vradio_frequency_info_pane_t1_ParamLimits

0xd4b6,	// (0x0005bc51) vradio_frequency_info_pane_t1

0x5d46,	// (0x000544e1) vradio_tuning_pane_g1

0x5d51,	// (0x000544ec) vradio_tuning_pane_t1

0x9a80,	// (0x0005821b) area_side_right_pane_ParamLimits

0x9a80,	// (0x0005821b) area_side_right_pane

0xc987,	// (0x0005b122) status_small_pane_g1

0xc98f,	// (0x0005b12a) status_small_pane_g2

0xc998,	// (0x0005b133) status_small_pane_g3

0xc9a1,	// (0x0005b13c) status_small_pane_g4

0x0003,

0xf5fb,	// (0x0005dd96) status_small_pane_g

0xc9aa,	// (0x0005b145) status_small_pane_t1

0x9a5a,	// (0x000581f5) main_video3_pane

0xd4ca,	// (0x0005bc65) cams_zoom_vslider_pane

0xd4d2,	// (0x0005bc6d) image3_wide_pane_ParamLimits

0xd4d2,	// (0x0005bc6d) image3_wide_pane

0xd4ec,	// (0x0005bc87) image3_wide_small_pane

0xd4f8,	// (0x0005bc93) main_video3_pane_g1_ParamLimits

0xd4f8,	// (0x0005bc93) main_video3_pane_g1

0xd514,	// (0x0005bcaf) main_video3_pane_g2_ParamLimits

0xd514,	// (0x0005bcaf) main_video3_pane_g2

0x0001,

0xf84b,	// (0x0005dfe6) main_video3_pane_g_ParamLimits

0xf84b,	// (0x0005dfe6) main_video3_pane_g

0xd530,	// (0x0005bccb) main_video3_pane_t1_ParamLimits

0xd530,	// (0x0005bccb) main_video3_pane_t1

0xd55b,	// (0x0005bcf6) main_video3_pane_t2_ParamLimits

0xd55b,	// (0x0005bcf6) main_video3_pane_t2

0xd588,	// (0x0005bd23) main_video3_pane_t3_ParamLimits

0xd588,	// (0x0005bd23) main_video3_pane_t3

0x0002,

0xf850,	// (0x0005dfeb) main_video3_pane_t_ParamLimits

0xf850,	// (0x0005dfeb) main_video3_pane_t

0xd5b5,	// (0x0005bd50) cams_zoom_vslider_pane_g1

0xd5be,	// (0x0005bd59) cams_zoom_vslider_pane_g2

0x0001,

0xf857,	// (0x0005dff2) cams_zoom_vslider_pane_g

0xd5c6,	// (0x0005bd61) small_slider_vertical_pane

0xce04,	// (0x0005b59f) small_slider_vertical_pane_g1

0xce04,	// (0x0005b59f) small_slider_vertical_pane_g2

0xd5ce,	// (0x0005bd69) small_slider_vertical_pane_g3

0x0002,

0xf85c,	// (0x0005dff7) small_slider_vertical_pane_g

0x9a5a,	// (0x000581f5) main_hwr_training_pane

0xd5d7,	// (0x0005bd72) hwr_training_instruct_pane_ParamLimits

0xd5d7,	// (0x0005bd72) hwr_training_instruct_pane

0x5d60,	// (0x000544fb) hwr_training_navi_pane_ParamLimits

0x5d60,	// (0x000544fb) hwr_training_navi_pane

0x5d7f,	// (0x0005451a) hwr_training_write_pane_ParamLimits

0x5d7f,	// (0x0005451a) hwr_training_write_pane

0x9a5a,	// (0x000581f5) bg_frame_shadow_pane

0xd60e,	// (0x0005bda9) hwr_training_write_pane_g1

0xd616,	// (0x0005bdb1) hwr_training_write_pane_g2

0xd61e,	// (0x0005bdb9) hwr_training_write_pane_g3

0xd626,	// (0x0005bdc1) hwr_training_write_pane_g4

0xd62e,	// (0x0005bdc9) hwr_training_write_pane_g5

0xd636,	// (0x0005bdd1) hwr_training_write_pane_g6

0xd63e,	// (0x0005bdd9) hwr_training_write_pane_g7

0x0006,

0xf863,	// (0x0005dffe) hwr_training_write_pane_g

0xa833,	// (0x00058fce) hwr_training_navi_pane_g1_ParamLimits

0xa833,	// (0x00058fce) hwr_training_navi_pane_g1

0xa845,	// (0x00058fe0) hwr_training_navi_pane_g2_ParamLimits

0xa845,	// (0x00058fe0) hwr_training_navi_pane_g2

0xa857,	// (0x00058ff2) hwr_training_navi_pane_g3_ParamLimits

0xa857,	// (0x00058ff2) hwr_training_navi_pane_g3

0xa867,	// (0x00059002) hwr_training_navi_pane_g4_ParamLimits

0xa867,	// (0x00059002) hwr_training_navi_pane_g4

0x0004,

0xf872,	// (0x0005e00d) hwr_training_navi_pane_g_ParamLimits

0xf872,	// (0x0005e00d) hwr_training_navi_pane_g

0xa874,	// (0x0005900f) hwr_training_navi_pane_t1

0x5dc7,	// (0x00054562) list_single_hwr_training_instruct_pane_ParamLimits

0x5dc7,	// (0x00054562) list_single_hwr_training_instruct_pane

0xd646,	// (0x0005bde1) list_single_hwr_training_instruct_pane_t1

0xcd44,	// (0x0005b4df) bg_frame_shadow_pane_g1

0xd655,	// (0x0005bdf0) bg_frame_shadow_pane_g2

0xd65d,	// (0x0005bdf8) bg_frame_shadow_pane_g3

0xd665,	// (0x0005be00) bg_frame_shadow_pane_g4

0xd66d,	// (0x0005be08) bg_frame_shadow_pane_g5

0xd675,	// (0x0005be10) bg_frame_shadow_pane_g6

0xd67d,	// (0x0005be18) bg_frame_shadow_pane_g7

0xa32e,	// (0x00058ac9) bg_frame_shadow_pane_g8

0x0007,

0xf87d,	// (0x0005e018) bg_frame_shadow_pane_g

0x9a5a,	// (0x000581f5) main_video_tele_dialer_pane

0x5de3,	// (0x0005457e) aid_size_cell_video_keypad_ParamLimits

0x5de3,	// (0x0005457e) aid_size_cell_video_keypad

0x5dfd,	// (0x00054598) grid_video_dialer_keypad_pane_ParamLimits

0x5dfd,	// (0x00054598) grid_video_dialer_keypad_pane

0x5e49,	// (0x000545e4) video_down_pane_cp_ParamLimits

0x5e49,	// (0x000545e4) video_down_pane_cp

0x5e7b,	// (0x00054616) cell_video_dialer_keypad_pane_ParamLimits

0x5e7b,	// (0x00054616) cell_video_dialer_keypad_pane

0xd685,	// (0x0005be20) bg_button_pane_cp08_ParamLimits

0xd685,	// (0x0005be20) bg_button_pane_cp08

0x5ea1,	// (0x0005463c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5ea1,	// (0x0005463c) cell_video_dialer_keypad_pane_g1

0x5538,	// (0x00053cd3) mup3_rocker2_pane_ParamLimits

0x5538,	// (0x00053cd3) mup3_rocker2_pane

0xce04,	// (0x0005b59f) mup3_rocker2_pane_g1

0x3fbd,	// (0x00052758) main_dialer2_pane

0x9a5a,	// (0x000581f5) main_mp4_pane

0xa8a0,	// (0x0005903b) main_mp4_pane_g1_ParamLimits

0xa8a0,	// (0x0005903b) main_mp4_pane_g1

0xa8a0,	// (0x0005903b) main_mp4_pane_g2_ParamLimits

0xa8a0,	// (0x0005903b) main_mp4_pane_g2

0x5edc,	// (0x00054677) main_mp4_pane_g3_ParamLimits

0x5edc,	// (0x00054677) main_mp4_pane_g3

0xa8ae,	// (0x00059049) main_mp4_pane_g4_ParamLimits

0xa8ae,	// (0x00059049) main_mp4_pane_g4

0xa8dc,	// (0x00059077) main_mp4_pane_g5_ParamLimits

0xa8dc,	// (0x00059077) main_mp4_pane_g5

0x0007,

0xf89d,	// (0x0005e038) main_mp4_pane_g_ParamLimits

0xf89d,	// (0x0005e038) main_mp4_pane_g

0xa950,	// (0x000590eb) main_mp4_pane_t1_ParamLimits

0xa950,	// (0x000590eb) main_mp4_pane_t1

0xa9ac,	// (0x00059147) main_mp4_pane_t2_ParamLimits

0xa9ac,	// (0x00059147) main_mp4_pane_t2

0xd691,	// (0x0005be2c) main_mp4_pane_t3_ParamLimits

0xd691,	// (0x0005be2c) main_mp4_pane_t3

0xa9fe,	// (0x00059199) main_mp4_pane_t4_ParamLimits

0xa9fe,	// (0x00059199) main_mp4_pane_t4

0x0003,

0xf8ae,	// (0x0005e049) main_mp4_pane_t_ParamLimits

0xf8ae,	// (0x0005e049) main_mp4_pane_t

0xaa3e,	// (0x000591d9) mp4_progress_pane_ParamLimits

0xaa3e,	// (0x000591d9) mp4_progress_pane

0xaa88,	// (0x00059223) mp4_rocker_pane_ParamLimits

0xaa88,	// (0x00059223) mp4_rocker_pane

0xd6bf,	// (0x0005be5a) mp4_progress_pane_t1

0xd6d8,	// (0x0005be73) mp4_progress_pane_t2

0x0001,

0xf8b7,	// (0x0005e052) mp4_progress_pane_t

0xd6f1,	// (0x0005be8c) mup_progress_pane_cp04

0xce04,	// (0x0005b59f) mp4_rocker_pane_g1

0x5f26,	// (0x000546c1) aid_cell_size_keypad2_ParamLimits

0x5f26,	// (0x000546c1) aid_cell_size_keypad2

0x5f3c,	// (0x000546d7) dialer2_ne_pane_ParamLimits

0x5f3c,	// (0x000546d7) dialer2_ne_pane

0x5f54,	// (0x000546ef) grid_dialer2_keypad_pane_ParamLimits

0x5f54,	// (0x000546ef) grid_dialer2_keypad_pane

0xcbe3,	// (0x0005b37e) bg_popup_call_pane_cp07_ParamLimits

0xcbe3,	// (0x0005b37e) bg_popup_call_pane_cp07

0x5f70,	// (0x0005470b) dialer2_ne_pane_t1_ParamLimits

0x5f70,	// (0x0005470b) dialer2_ne_pane_t1

0x5fb0,	// (0x0005474b) cell_dialer2_keypad_pane_ParamLimits

0x5fb0,	// (0x0005474b) cell_dialer2_keypad_pane

0xd716,	// (0x0005beb1) bg_button_pane_pane_cp04_ParamLimits

0xd716,	// (0x0005beb1) bg_button_pane_pane_cp04

0x5fd6,	// (0x00054771) cell_dialer2_keypad_pane_g1_ParamLimits

0x5fd6,	// (0x00054771) cell_dialer2_keypad_pane_g1

0x1c7b,	// (0x00050416) aid_placing_vt_set_content_ParamLimits

0x1c7b,	// (0x00050416) aid_placing_vt_set_content

0x1c9f,	// (0x0005043a) aid_placing_vt_set_title_ParamLimits

0x1c9f,	// (0x0005043a) aid_placing_vt_set_title

0x9a5a,	// (0x000581f5) main_image3_pane

0x609c,	// (0x00054837) area_side_right_pane_cp01_ParamLimits

0x609c,	// (0x00054837) area_side_right_pane_cp01

0xa8a0,	// (0x0005903b) main_image3_pane_g1_ParamLimits

0xa8a0,	// (0x0005903b) main_image3_pane_g1

0x60b5,	// (0x00054850) main_image3_pane_g2_ParamLimits

0x60b5,	// (0x00054850) main_image3_pane_g2

0x60dd,	// (0x00054878) main_image3_pane_g3_ParamLimits

0x60dd,	// (0x00054878) main_image3_pane_g3

0x6107,	// (0x000548a2) main_image3_pane_g4_ParamLimits

0x6107,	// (0x000548a2) main_image3_pane_g4

0x0003,

0xf8c6,	// (0x0005e061) main_image3_pane_g_ParamLimits

0xf8c6,	// (0x0005e061) main_image3_pane_g

0x6131,	// (0x000548cc) main_image3_pane_t1_ParamLimits

0x6131,	// (0x000548cc) main_image3_pane_t1

0x6189,	// (0x00054924) main_image3_pane_t2_ParamLimits

0x6189,	// (0x00054924) main_image3_pane_t2

0x61db,	// (0x00054976) main_image3_pane_t3_ParamLimits

0x61db,	// (0x00054976) main_image3_pane_t3

0x0003,

0xf8cf,	// (0x0005e06a) main_image3_pane_t_ParamLimits

0xf8cf,	// (0x0005e06a) main_image3_pane_t

0xad09,	// (0x000594a4) grid_sctrl_middle_pane_cp01_ParamLimits

0xad09,	// (0x000594a4) grid_sctrl_middle_pane_cp01

0x6263,	// (0x000549fe) cell_sctrl_middle_pane_cp01_ParamLimits

0x6263,	// (0x000549fe) cell_sctrl_middle_pane_cp01

0x6280,	// (0x00054a1b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6280,	// (0x00054a1b) cell_sctrl_middle_pane_cp01_g1

0x9a5a,	// (0x000581f5) main_call4_pane

0x6295,	// (0x00054a30) aid_size_button_call4_ParamLimits

0x6295,	// (0x00054a30) aid_size_button_call4

0x62c8,	// (0x00054a63) call4_windows_pane_ParamLimits

0x62c8,	// (0x00054a63) call4_windows_pane

0x62e7,	// (0x00054a82) grid_call4_button_pane_ParamLimits

0x62e7,	// (0x00054a82) grid_call4_button_pane

0x631e,	// (0x00054ab9) call4_windows_conf_pane

0x6339,	// (0x00054ad4) popup_call4_audio_first_window_ParamLimits

0x6339,	// (0x00054ad4) popup_call4_audio_first_window

0x638b,	// (0x00054b26) popup_call4_audio_second_window_ParamLimits

0x638b,	// (0x00054b26) popup_call4_audio_second_window

0x63a4,	// (0x00054b3f) popup_call4_audio_wait_window_ParamLimits

0x63a4,	// (0x00054b3f) popup_call4_audio_wait_window

0x63b2,	// (0x00054b4d) cell_call4_button_pane_ParamLimits

0x63b2,	// (0x00054b4d) cell_call4_button_pane

0x63d9,	// (0x00054b74) bg_button_pane_cp09_ParamLimits

0x63d9,	// (0x00054b74) bg_button_pane_cp09

0x63e5,	// (0x00054b80) cell_call4_button_pane_g1_ParamLimits

0x63e5,	// (0x00054b80) cell_call4_button_pane_g1

0x640b,	// (0x00054ba6) cell_call4_button_pane_t1_ParamLimits

0x640b,	// (0x00054ba6) cell_call4_button_pane_t1

0xd72a,	// (0x0005bec5) popup_call4_audio_conf_window_ParamLimits

0xd72a,	// (0x0005bec5) popup_call4_audio_conf_window

0x559a,	// (0x00053d35) mup3_progress_pane_t1_ParamLimits

0x55b9,	// (0x00053d54) mup3_progress_pane_t2_ParamLimits

0xd0a6,	// (0x0005b841) mup3_progress_pane_t3_ParamLimits

0xf79f,	// (0x0005df3a) mup3_progress_pane_t_ParamLimits

0xd0c3,	// (0x0005b85e) mup_progress_pane_cp03_ParamLimits

0x5ba2,	// (0x0005433d) mup3_control_keys_pane_g4_copy1

0xaa6c,	// (0x00059207) mp4_rocker2_pane_ParamLimits

0xaa6c,	// (0x00059207) mp4_rocker2_pane

0xd744,	// (0x0005bedf) mp4_rocker2_pane_g1

0xd74c,	// (0x0005bee7) mp4_rocker2_pane_g2

0xab0e,	// (0x000592a9) mp4_rocker2_pane_g3

0xab16,	// (0x000592b1) mp4_rocker2_pane_g4

0xab1e,	// (0x000592b9) mp4_rocker2_pane_g5

0x0004,

0xf8d8,	// (0x0005e073) mp4_rocker2_pane_g

0x9a5a,	// (0x000581f5) main_camera4_pane

0x9a5a,	// (0x000581f5) main_video4_pane

0x5e17,	// (0x000545b2) main_video_tele_dialer_pane_t1_ParamLimits

0x5e17,	// (0x000545b2) main_video_tele_dialer_pane_t1

0x5e30,	// (0x000545cb) main_video_tele_dialer_pane_t2_ParamLimits

0x5e30,	// (0x000545cb) main_video_tele_dialer_pane_t2

0x0001,

0xf88e,	// (0x0005e029) main_video_tele_dialer_pane_t_ParamLimits

0xf88e,	// (0x0005e029) main_video_tele_dialer_pane_t

0x6449,	// (0x00054be4) cam4_autofocus_pane_ParamLimits

0x6449,	// (0x00054be4) cam4_autofocus_pane

0x645f,	// (0x00054bfa) cam4_image_uncrop_pane_ParamLimits

0x645f,	// (0x00054bfa) cam4_image_uncrop_pane

0x6478,	// (0x00054c13) cam4_indicators_pane_ParamLimits

0x6478,	// (0x00054c13) cam4_indicators_pane

0x64a8,	// (0x00054c43) main_camera4_pane_g1_ParamLimits

0x64a8,	// (0x00054c43) main_camera4_pane_g1

0x64ba,	// (0x00054c55) main_camera4_pane_g2_ParamLimits

0x64ba,	// (0x00054c55) main_camera4_pane_g2

0x64cd,	// (0x00054c68) main_camera4_pane_g3_ParamLimits

0x64cd,	// (0x00054c68) main_camera4_pane_g3

0x64e0,	// (0x00054c7b) main_camera4_pane_g4_ParamLimits

0x64e0,	// (0x00054c7b) main_camera4_pane_g4

0x64f3,	// (0x00054c8e) main_camera4_pane_g5_ParamLimits

0x64f3,	// (0x00054c8e) main_camera4_pane_g5

0x0005,

0xf8e3,	// (0x0005e07e) main_camera4_pane_g_ParamLimits

0xf8e3,	// (0x0005e07e) main_camera4_pane_g

0x6517,	// (0x00054cb2) main_camera4_pane_t1_ParamLimits

0x6517,	// (0x00054cb2) main_camera4_pane_t1

0xd02b,	// (0x0005b7c6) bg_tb_trans_pane_cp06

0xab4c,	// (0x000592e7) cam4_indicators_pane_g1

0xab5d,	// (0x000592f8) cam4_indicators_pane_g2

0x0002,

0xf8fe,	// (0x0005e099) cam4_indicators_pane_g

0xab75,	// (0x00059310) cam4_indicators_pane_t1

0x657b,	// (0x00054d16) main_video4_pane_g1_ParamLimits

0x657b,	// (0x00054d16) main_video4_pane_g1

0x658a,	// (0x00054d25) main_video4_pane_g2_ParamLimits

0x658a,	// (0x00054d25) main_video4_pane_g2

0x6599,	// (0x00054d34) main_video4_pane_g3_ParamLimits

0x6599,	// (0x00054d34) main_video4_pane_g3

0x65a8,	// (0x00054d43) main_video4_pane_g4_ParamLimits

0x65a8,	// (0x00054d43) main_video4_pane_g4

0x0004,

0xf905,	// (0x0005e0a0) main_video4_pane_g_ParamLimits

0xf905,	// (0x0005e0a0) main_video4_pane_g

0x65c6,	// (0x00054d61) vid4_indicators_pane_ParamLimits

0x65c6,	// (0x00054d61) vid4_indicators_pane

0x65f4,	// (0x00054d8f) video4_image_uncrop_cif_pane_ParamLimits

0x65f4,	// (0x00054d8f) video4_image_uncrop_cif_pane

0x660e,	// (0x00054da9) video4_image_uncrop_nhd_pane_ParamLimits

0x660e,	// (0x00054da9) video4_image_uncrop_nhd_pane

0x645f,	// (0x00054bfa) video4_image_uncrop_vga_pane_ParamLimits

0x645f,	// (0x00054bfa) video4_image_uncrop_vga_pane

0xad09,	// (0x000594a4) bg_tb_trans_pane_cp07

0xaba3,	// (0x0005933e) vid4_indicators_pane_g1

0xabb9,	// (0x00059354) vid4_indicators_pane_g2

0xabcd,	// (0x00059368) vid4_indicators_pane_g3

0x0004,

0xf910,	// (0x0005e0ab) vid4_indicators_pane_g

0xabfe,	// (0x00059399) vid4_indicators_pane_t1

0x6624,	// (0x00054dbf) cam4_autofocus_pane_g1

0x662c,	// (0x00054dc7) cam4_autofocus_pane_g2

0x6634,	// (0x00054dcf) cam4_autofocus_pane_g3

0x0002,

0xf91b,	// (0x0005e0b6) cam4_autofocus_pane_g

0x663c,	// (0x00054dd7) cam4_autofocus_pane_g3_copy1

0x5e5f,	// (0x000545fa) video_down_pane_cp_t1

0x5e6d,	// (0x00054608) video_down_pane_cp_t2

0x0001,

0xf893,	// (0x0005e02e) video_down_pane_cp_t

0xad09,	// (0x000594a4) popup_vitu2_window_ParamLimits

0xad09,	// (0x000594a4) popup_vitu2_window

0x6644,	// (0x00054ddf) aid_size_cell2_itu2_ParamLimits

0x6644,	// (0x00054ddf) aid_size_cell2_itu2

0x666a,	// (0x00054e05) aid_size_cell_itu2_ParamLimits

0x666a,	// (0x00054e05) aid_size_cell_itu2

0x66ca,	// (0x00054e65) bg_popup_window_pane_cp09_ParamLimits

0x66ca,	// (0x00054e65) bg_popup_window_pane_cp09

0x66d8,	// (0x00054e73) field_vitu2_entry_pane_ParamLimits

0x66d8,	// (0x00054e73) field_vitu2_entry_pane

0x6700,	// (0x00054e9b) grid_vitu2_function_pane_ParamLimits

0x6700,	// (0x00054e9b) grid_vitu2_function_pane

0x6751,	// (0x00054eec) grid_vitu2_itu_pane_ParamLimits

0x6751,	// (0x00054eec) grid_vitu2_itu_pane

0x67e1,	// (0x00054f7c) cell_vitu2_itu_pane_ParamLimits

0x67e1,	// (0x00054f7c) cell_vitu2_itu_pane

0x680e,	// (0x00054fa9) cell_vitu2_function_pane_ParamLimits

0x680e,	// (0x00054fa9) cell_vitu2_function_pane

0xd754,	// (0x0005beef) bg_popup_call_pane_cp08_ParamLimits

0xd754,	// (0x0005beef) bg_popup_call_pane_cp08

0xd76b,	// (0x0005bf06) field_vitu2_entry_pane_g1

0xd777,	// (0x0005bf12) field_vitu2_entry_pane_g2

0x0002,

0xf922,	// (0x0005e0bd) field_vitu2_entry_pane_g

0xfeef,	// (0x0004e68a) field_vitu2_entry_pane_t1_ParamLimits

0xfeef,	// (0x0004e68a) field_vitu2_entry_pane_t1

0x6852,	// (0x00054fed) field_vitu2_entry_pane_t2_ParamLimits

0x6852,	// (0x00054fed) field_vitu2_entry_pane_t2

0x0001,

0xf929,	// (0x0005e0c4) field_vitu2_entry_pane_t_ParamLimits

0xf929,	// (0x0005e0c4) field_vitu2_entry_pane_t

0x686f,	// (0x0005500a) bg_button_pane_cp010_ParamLimits

0x686f,	// (0x0005500a) bg_button_pane_cp010

0xac15,	// (0x000593b0) cell_vitu2_itu_pane_g1

0x688b,	// (0x00055026) cell_vitu2_itu_pane_t1_ParamLimits

0x688b,	// (0x00055026) cell_vitu2_itu_pane_t1

0xff1e,	// (0x0004e6b9) cell_vitu2_itu_pane_t2_ParamLimits

0xff1e,	// (0x0004e6b9) cell_vitu2_itu_pane_t2

0x0002,

0xf933,	// (0x0005e0ce) cell_vitu2_itu_pane_t_ParamLimits

0xf933,	// (0x0005e0ce) cell_vitu2_itu_pane_t

0xad09,	// (0x000594a4) bg_button_pane_cp011

0x68e9,	// (0x00055084) cell_vitu2_function_pane_g1

0x9a5a,	// (0x000581f5) main_myfav_hc_pane

0x622b,	// (0x000549c6) popup_image3_note_pane_ParamLimits

0x622b,	// (0x000549c6) popup_image3_note_pane

0x6247,	// (0x000549e2) popup_image3_tool_bar_pane_ParamLimits

0x6247,	// (0x000549e2) popup_image3_tool_bar_pane

0xffac,	// (0x0004e747) cell_vitu2_itu_pane_t3_ParamLimits

0xffac,	// (0x0004e747) cell_vitu2_itu_pane_t3

0x9a5a,	// (0x000581f5) bg_popup_trans_pane

0xd799,	// (0x0005bf34) grid_image3_tool_bar_pane

0xd7a3,	// (0x0005bf3e) bg_popup_trans_pane_g1

0xadd1,	// (0x0005956c) bg_popup_trans_pane_g2

0xd7ab,	// (0x0005bf46) bg_popup_trans_pane_g3

0xd7b3,	// (0x0005bf4e) bg_popup_trans_pane_g4

0xd7bb,	// (0x0005bf56) bg_popup_trans_pane_g5

0xd7c3,	// (0x0005bf5e) bg_popup_trans_pane_g6

0xd7cb,	// (0x0005bf66) bg_popup_trans_pane_g7

0xd7d3,	// (0x0005bf6e) bg_popup_trans_pane_g8

0xadb1,	// (0x0005954c) bg_popup_trans_pane_g9

0x0008,

0xf93a,	// (0x0005e0d5) bg_popup_trans_pane_g

0xd7db,	// (0x0005bf76) cell_image3_tool_bar_pane_ParamLimits

0xd7db,	// (0x0005bf76) cell_image3_tool_bar_pane

0xce04,	// (0x0005b59f) cell_image3_tool_bar_pane_g1

0x9a5a,	// (0x000581f5) bg_popup_trans_pane_cp1

0xd7f1,	// (0x0005bf8c) popup_image3_note_pane_t1

0xd7ff,	// (0x0005bf9a) popup_image3_note_pane_t2

0xd80d,	// (0x0005bfa8) popup_image3_note_pane_t3

0x0002,

0xf94d,	// (0x0005e0e8) popup_image3_note_pane_t

0xd81d,	// (0x0005bfb8) popup_image3_note_pane_t3_copy1

0x68fd,	// (0x00055098) bg_myfav_hc_instruction_pane_ParamLimits

0x68fd,	// (0x00055098) bg_myfav_hc_instruction_pane

0x6915,	// (0x000550b0) cell_myfav_contact_pane_ParamLimits

0x6915,	// (0x000550b0) cell_myfav_contact_pane

0x6931,	// (0x000550cc) cell_myfav_contact_pane_cp1_ParamLimits

0x6931,	// (0x000550cc) cell_myfav_contact_pane_cp1

0x6949,	// (0x000550e4) cell_myfav_contact_pane_cp2_ParamLimits

0x6949,	// (0x000550e4) cell_myfav_contact_pane_cp2

0x6961,	// (0x000550fc) cell_myfav_contact_pane_cp3_ParamLimits

0x6961,	// (0x000550fc) cell_myfav_contact_pane_cp3

0x6978,	// (0x00055113) cell_myfav_contact_pane_cp4_ParamLimits

0x6978,	// (0x00055113) cell_myfav_contact_pane_cp4

0x6990,	// (0x0005512b) cell_myfav_contact_pane_cp5_ParamLimits

0x6990,	// (0x0005512b) cell_myfav_contact_pane_cp5

0x69a4,	// (0x0005513f) cell_myfav_contact_pane_cp6_ParamLimits

0x69a4,	// (0x0005513f) cell_myfav_contact_pane_cp6

0x69ba,	// (0x00055155) cell_myfav_contact_pane_cp7_ParamLimits

0x69ba,	// (0x00055155) cell_myfav_contact_pane_cp7

0xd82b,	// (0x0005bfc6) listscroll_gen_pane_cp05

0x69d2,	// (0x0005516d) main_myfav_hc_pane_g1_ParamLimits

0x69d2,	// (0x0005516d) main_myfav_hc_pane_g1

0x69ec,	// (0x00055187) main_myfav_hc_pane_g2_ParamLimits

0x69ec,	// (0x00055187) main_myfav_hc_pane_g2

0x0002,

0xf954,	// (0x0005e0ef) main_myfav_hc_pane_g_ParamLimits

0xf954,	// (0x0005e0ef) main_myfav_hc_pane_g

0x6a20,	// (0x000551bb) main_myfav_hc_pane_t1_ParamLimits

0x6a20,	// (0x000551bb) main_myfav_hc_pane_t1

0xd834,	// (0x0005bfcf) main_myfav_hc_pane_t2_ParamLimits

0xd834,	// (0x0005bfcf) main_myfav_hc_pane_t2

0xd846,	// (0x0005bfe1) main_myfav_hc_pane_t3_ParamLimits

0xd846,	// (0x0005bfe1) main_myfav_hc_pane_t3

0x6a37,	// (0x000551d2) main_myfav_hc_pane_t4_ParamLimits

0x6a37,	// (0x000551d2) main_myfav_hc_pane_t4

0x0004,

0xf95b,	// (0x0005e0f6) main_myfav_hc_pane_t_ParamLimits

0xf95b,	// (0x0005e0f6) main_myfav_hc_pane_t

0xce04,	// (0x0005b59f) bg_myfav_hc_instruction_pane_g1

0xd858,	// (0x0005bff3) cell_myfav_contact_pane_g1_ParamLimits

0xd858,	// (0x0005bff3) cell_myfav_contact_pane_g1

0xd858,	// (0x0005bff3) cell_myfav_contact_pane_g2_ParamLimits

0xd858,	// (0x0005bff3) cell_myfav_contact_pane_g2

0xd864,	// (0x0005bfff) cell_myfav_contact_pane_g3_ParamLimits

0xd864,	// (0x0005bfff) cell_myfav_contact_pane_g3

0xd090,	// (0x0005b82b) cell_myfav_contact_pane_g4_ParamLimits

0xd090,	// (0x0005b82b) cell_myfav_contact_pane_g4

0xd871,	// (0x0005c00c) cell_myfav_contact_pane_g5_ParamLimits

0xd871,	// (0x0005c00c) cell_myfav_contact_pane_g5

0x0004,

0xf966,	// (0x0005e101) cell_myfav_contact_pane_g_ParamLimits

0xf966,	// (0x0005e101) cell_myfav_contact_pane_g

0x6a06,	// (0x000551a1) main_myfav_hc_pane_g3_ParamLimits

0x6a06,	// (0x000551a1) main_myfav_hc_pane_g3

0x0d4d,	// (0x0004f4e8) popup_adpt_find_window

0x6a61,	// (0x000551fc) afind_page_pane_ParamLimits

0x6a61,	// (0x000551fc) afind_page_pane

0x6a76,	// (0x00055211) aid_size_cell_afind_ParamLimits

0x6a76,	// (0x00055211) aid_size_cell_afind

0x6a94,	// (0x0005522f) bg_popup_sub_pane_cp09_ParamLimits

0x6a94,	// (0x0005522f) bg_popup_sub_pane_cp09

0x6aa1,	// (0x0005523c) find_pane_cp01_ParamLimits

0x6aa1,	// (0x0005523c) find_pane_cp01

0xd87d,	// (0x0005c018) grid_afind_control_pane_ParamLimits

0xd87d,	// (0x0005c018) grid_afind_control_pane

0x6aae,	// (0x00055249) grid_afind_pane_ParamLimits

0x6aae,	// (0x00055249) grid_afind_pane

0x6ad0,	// (0x0005526b) cell_afind_pane_ParamLimits

0x6ad0,	// (0x0005526b) cell_afind_pane

0xce04,	// (0x0005b59f) afind_page_pane_g1

0x6b3d,	// (0x000552d8) afind_page_pane_g2

0x6b46,	// (0x000552e1) afind_page_pane_g3

0x0002,

0xf971,	// (0x0005e10c) afind_page_pane_g

0x6b4f,	// (0x000552ea) afind_page_pane_t1

0xd891,	// (0x0005c02c) cell_afind_grid_control_pane_ParamLimits

0xd891,	// (0x0005c02c) cell_afind_grid_control_pane

0xd716,	// (0x0005beb1) bg_button_pane_cp69_ParamLimits

0xd716,	// (0x0005beb1) bg_button_pane_cp69

0x6b6f,	// (0x0005530a) cell_afind_pane_g1_ParamLimits

0x6b6f,	// (0x0005530a) cell_afind_pane_g1

0x6b7c,	// (0x00055317) cell_afind_pane_t1_ParamLimits

0x6b7c,	// (0x00055317) cell_afind_pane_t1

0xa4c1,	// (0x00058c5c) bg_button_pane_cp72

0xd8a0,	// (0x0005c03b) cell_afind_grid_control_pane_g1

0x3a5d,	// (0x000521f8) aid_image_placing_area_ParamLimits

0x3a5d,	// (0x000521f8) aid_image_placing_area

0xd3d5,	// (0x0005bb70) field_vitu_entry_pane_g1_ParamLimits

0xd3d5,	// (0x0005bb70) field_vitu_entry_pane_g1

0xd3e1,	// (0x0005bb7c) field_vitu_entry_pane_g2_ParamLimits

0xd3e1,	// (0x0005bb7c) field_vitu_entry_pane_g2

0x0001,

0xf81e,	// (0x0005dfb9) field_vitu_entry_pane_g_ParamLimits

0xf81e,	// (0x0005dfb9) field_vitu_entry_pane_g

0x5c71,	// (0x0005440c) cell_vitu_itu_pane_g1_ParamLimits

0x5cb3,	// (0x0005444e) cell_vitu_itu_pane_t3_ParamLimits

0x5cb3,	// (0x0005444e) cell_vitu_itu_pane_t3

0xd6bf,	// (0x0005be5a) mp4_progress_pane_t1_ParamLimits

0xd6d8,	// (0x0005be73) mp4_progress_pane_t2_ParamLimits

0xf8b7,	// (0x0005e052) mp4_progress_pane_t_ParamLimits

0xd6f1,	// (0x0005be8c) mup_progress_pane_cp04_ParamLimits

0x6a4b,	// (0x000551e6) main_myfav_hc_pane_t5_ParamLimits

0x6a4b,	// (0x000551e6) main_myfav_hc_pane_t5

0x9a78,	// (0x00058213) aid_zoom_text_primary

0x0d4d,	// (0x0004f4e8) popup_adpt_find_window_ParamLimits

0xad09,	// (0x000594a4) main_cam_set_pane

0x6491,	// (0x00054c2c) cam4_zoom_pane_ParamLimits

0x6491,	// (0x00054c2c) cam4_zoom_pane

0x6b8e,	// (0x00055329) main_cam_set_pane_g1_ParamLimits

0x6b8e,	// (0x00055329) main_cam_set_pane_g1

0x6b9c,	// (0x00055337) main_cam_set_pane_g2_ParamLimits

0x6b9c,	// (0x00055337) main_cam_set_pane_g2

0x0001,

0xf978,	// (0x0005e113) main_cam_set_pane_g_ParamLimits

0xf978,	// (0x0005e113) main_cam_set_pane_g

0x6bbd,	// (0x00055358) main_cam_set_pane_t1_ParamLimits

0x6bbd,	// (0x00055358) main_cam_set_pane_t1

0x6bd8,	// (0x00055373) main_cset_listscroll_pane_ParamLimits

0x6bd8,	// (0x00055373) main_cset_listscroll_pane

0x6bfc,	// (0x00055397) main_cset_slider_pane_ParamLimits

0x6bfc,	// (0x00055397) main_cset_slider_pane

0xd8b1,	// (0x0005c04c) main_cset_list_pane_ParamLimits

0xd8b1,	// (0x0005c04c) main_cset_list_pane

0xd8c1,	// (0x0005c05c) scroll_pane_cp028

0x6c26,	// (0x000553c1) aid_area_touch_slider

0x6c42,	// (0x000553dd) cset_slider_pane

0x6c6c,	// (0x00055407) main_cset_slider_pane_g1

0x6c81,	// (0x0005541c) main_cset_slider_pane_g2

0x0011,

0xf97d,	// (0x0005e118) main_cset_slider_pane_g

0xd8fa,	// (0x0005c095) main_cset_slider_pane_t1

0x6d43,	// (0x000554de) main_cset_slider_pane_t2

0x6d5d,	// (0x000554f8) main_cset_slider_pane_t3

0x6d77,	// (0x00055512) main_cset_slider_pane_t4

0x6d91,	// (0x0005552c) main_cset_slider_pane_t5

0x6daf,	// (0x0005554a) main_cset_slider_pane_t6

0x6dc6,	// (0x00055561) main_cset_slider_pane_t7

0x000e,

0xf9a2,	// (0x0005e13d) main_cset_slider_pane_t

0x6ed2,	// (0x0005566d) cset_list_set_pane_ParamLimits

0x6ed2,	// (0x0005566d) cset_list_set_pane

0x6ee6,	// (0x00055681) aid_position_infowindow_above

0x6eee,	// (0x00055689) aid_position_infowindow_below

0x000a,	// (0x0004e7a5) cset_list_set_pane_g1_ParamLimits

0x000a,	// (0x0004e7a5) cset_list_set_pane_g1

0x0016,	// (0x0004e7b1) cset_list_set_pane_g3_ParamLimits

0x0016,	// (0x0004e7b1) cset_list_set_pane_g3

0x0001,

0xf9c1,	// (0x0005e15c) cset_list_set_pane_g_ParamLimits

0xf9c1,	// (0x0005e15c) cset_list_set_pane_g

0x0025,	// (0x0004e7c0) cset_list_set_pane_t1_ParamLimits

0x0025,	// (0x0004e7c0) cset_list_set_pane_t1

0xad09,	// (0x000594a4) list_highlight_pane_cp021_ParamLimits

0xad09,	// (0x000594a4) list_highlight_pane_cp021

0xb6f3,	// (0x00059e8e) cset_slider_pane_g1

0xb705,	// (0x00059ea0) cset_slider_pane_g2

0xb6fc,	// (0x00059e97) cset_slider_pane_g3

0x0002,

0xf9c6,	// (0x0005e161) cset_slider_pane_g

0xd99a,	// (0x0005c135) aid_area_touch_cam4_zoom

0x6ef6,	// (0x00055691) cam4_zoom_cont_pane

0x6efe,	// (0x00055699) cam4_zoom_pane_g1

0x6f06,	// (0x000556a1) cam4_zoom_pane_g2

0x6f0e,	// (0x000556a9) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0005e168) cam4_zoom_pane_g

0xac27,	// (0x000593c2) cam4_zoom_cont_pane_g1

0xac30,	// (0x000593cb) cam4_zoom_cont_pane_g2

0xac39,	// (0x000593d4) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x0005e16f) cam4_zoom_cont_pane_g

0x62b3,	// (0x00054a4e) call4_image_pane_ParamLimits

0x62b3,	// (0x00054a4e) call4_image_pane

0x631e,	// (0x00054ab9) call4_windows_conf_pane_ParamLimits

0x6369,	// (0x00054b04) popup_call4_audio_in_window_ParamLimits

0x6369,	// (0x00054b04) popup_call4_audio_in_window

0x9a5a,	// (0x000581f5) bg_popup_call2_act_pane_cp02

0xd722,	// (0x0005bebd) call4_list_conf_pane

0xce04,	// (0x0005b59f) call4_image_pane_g1

0xce04,	// (0x0005b59f) call4_image_pane_g2

0x0001,

0xf6df,	// (0x0005de7a) call4_image_pane_g

0xd9a3,	// (0x0005c13e) list_single_graphic_popup_conf4_pane_ParamLimits

0xd9a3,	// (0x0005c13e) list_single_graphic_popup_conf4_pane

0x9a5a,	// (0x000581f5) list_highlight_pane_cp022

0xd9b8,	// (0x0005c153) list_single_graphic_popup_conf4_pane_g1

0xb2eb,	// (0x00059a86) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0005e176) list_single_graphic_popup_conf4_pane_g

0xd9c0,	// (0x0005c15b) list_single_graphic_popup_conf4_pane_t1

0x1db6,	// (0x00050551) popup_vtel_slider_window_ParamLimits

0x1db6,	// (0x00050551) popup_vtel_slider_window

0xd704,	// (0x0005be9f) dialer2_ne_pane_t2_ParamLimits

0xd704,	// (0x0005be9f) dialer2_ne_pane_t2

0x0001,

0xf8bc,	// (0x0005e057) dialer2_ne_pane_t_ParamLimits

0xf8bc,	// (0x0005e057) dialer2_ne_pane_t

0xcbe3,	// (0x0005b37e) bg_popup_sub_pane_cp010_ParamLimits

0xcbe3,	// (0x0005b37e) bg_popup_sub_pane_cp010

0x6f17,	// (0x000556b2) popup_vtel_slider_window_g1_ParamLimits

0x6f17,	// (0x000556b2) popup_vtel_slider_window_g1

0x6f2a,	// (0x000556c5) popup_vtel_slider_window_g2_ParamLimits

0x6f2a,	// (0x000556c5) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x0005e17b) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x0005e17b) popup_vtel_slider_window_g

0x6f80,	// (0x0005571b) vtel_slider_pane_ParamLimits

0x6f80,	// (0x0005571b) vtel_slider_pane

0x6fa2,	// (0x0005573d) vtel_slider_pane_g1_ParamLimits

0x6fa2,	// (0x0005573d) vtel_slider_pane_g1

0x6fb6,	// (0x00055751) vtel_slider_pane_g2_ParamLimits

0x6fb6,	// (0x00055751) vtel_slider_pane_g2

0x6fce,	// (0x00055769) vtel_slider_pane_g3_ParamLimits

0x6fce,	// (0x00055769) vtel_slider_pane_g3

0x6fa2,	// (0x0005573d) vtel_slider_pane_g4_ParamLimits

0x6fa2,	// (0x0005573d) vtel_slider_pane_g4

0x6fe4,	// (0x0005577f) vtel_slider_pane_g5_ParamLimits

0x6fe4,	// (0x0005577f) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0005e184) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0005e184) vtel_slider_pane_g

0xad09,	// (0x000594a4) main_gallery2_pane

0x6696,	// (0x00054e31) aid_size_row_itut2_dropdow_list_ParamLimits

0x6696,	// (0x00054e31) aid_size_row_itut2_dropdow_list

0x6728,	// (0x00054ec3) grid_vitu2_function_top_pane_ParamLimits

0x6728,	// (0x00054ec3) grid_vitu2_function_top_pane

0x678c,	// (0x00054f27) popup_vitu2_dropdown_list_window_ParamLimits

0x678c,	// (0x00054f27) popup_vitu2_dropdown_list_window

0x67b5,	// (0x00054f50) popup_vitu2_match_list_window

0x6ffa,	// (0x00055795) cell_vitu2_function_top_pane_ParamLimits

0x6ffa,	// (0x00055795) cell_vitu2_function_top_pane

0x701c,	// (0x000557b7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x701c,	// (0x000557b7) cell_vitu2_function_top_pane_cp01

0x7038,	// (0x000557d3) cell_vitu2_function_top_wide_pane_ParamLimits

0x7038,	// (0x000557d3) cell_vitu2_function_top_wide_pane

0xad09,	// (0x000594a4) bg_button_pane_cp012

0x7054,	// (0x000557ef) cell_vitu2_function_top_pane_g1

0xac42,	// (0x000593dd) bg_button_pane_cp013_ParamLimits

0xac42,	// (0x000593dd) bg_button_pane_cp013

0x7068,	// (0x00055803) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7068,	// (0x00055803) cell_vitu2_function_top_wide_pane_g1

0xad09,	// (0x000594a4) bg_popup_sub_pane_cp20

0x7080,	// (0x0005581b) list_vitu2_match_list_pane

0xd7a3,	// (0x0005bf3e) bg_popup_sub_pane_cp20_g1

0xd7ab,	// (0x0005bf46) bg_popup_sub_pane_cp20_g2

0xadd1,	// (0x0005956c) bg_popup_sub_pane_cp20_g3

0xd7b3,	// (0x0005bf4e) bg_popup_sub_pane_cp20_g4

0xadb1,	// (0x0005954c) bg_popup_sub_pane_cp20_g5

0xd9d6,	// (0x0005c171) bg_popup_sub_pane_cp20_g6

0xd7c3,	// (0x0005bf5e) bg_popup_sub_pane_cp20_g7

0xd7cb,	// (0x0005bf66) bg_popup_sub_pane_cp20_g8

0xd7d3,	// (0x0005bf6e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x0005e18f) bg_popup_sub_pane_cp20_g

0xac5e,	// (0x000593f9) list_vitu2_match_list_item_pane_ParamLimits

0xac5e,	// (0x000593f9) list_vitu2_match_list_item_pane

0xac70,	// (0x0005940b) list_vitu2_match_list_item_pane_t1

0x9a5a,	// (0x000581f5) bg_popup_sub_pane_cp21

0xb214,	// (0x000599af) grid_vitu2_dropdown_list_pane

0x709e,	// (0x00055839) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x709e,	// (0x00055839) cell_vitu2_dropdown_list_char_pane

0x70c1,	// (0x0005585c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x70c1,	// (0x0005585c) cell_vitu2_dropdown_list_ctrl_pane

0xd9de,	// (0x0005c179) cell_vitu2_dropdown_list_char_pane_g1

0xd9e7,	// (0x0005c182) cell_vitu2_dropdown_list_char_pane_g2

0xd9f0,	// (0x0005c18b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x0005e1ac) cell_vitu2_dropdown_list_char_pane_g

0x70ef,	// (0x0005588a) cell_vitu2_dropdown_list_char_pane_t1

0x70fd,	// (0x00055898) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70fd,	// (0x00055898) cell_vitu2_dropdown_list_ctrl_pane_g1

0x710d,	// (0x000558a8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x710d,	// (0x000558a8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x711e,	// (0x000558b9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x711e,	// (0x000558b9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x712e,	// (0x000558c9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x712e,	// (0x000558c9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd02b,	// (0x0005b7c6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd02b,	// (0x0005b7c6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x0005e1b3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x0005e1b3) cell_vitu2_dropdown_list_ctrl_pane_g

0x714a,	// (0x000558e5) aid_size_cell_gallery2_ParamLimits

0x714a,	// (0x000558e5) aid_size_cell_gallery2

0x7168,	// (0x00055903) grid_gallery2_pane_ParamLimits

0x7168,	// (0x00055903) grid_gallery2_pane

0x7182,	// (0x0005591d) scroll_pane_cp029_ParamLimits

0x7182,	// (0x0005591d) scroll_pane_cp029

0x7193,	// (0x0005592e) cell_gallery2_pane_ParamLimits

0x7193,	// (0x0005592e) cell_gallery2_pane

0xd9f9,	// (0x0005c194) cell_gallery2_pane_g2

0x71f7,	// (0x00055992) cell_gallery2_pane_g3

0xda01,	// (0x0005c19c) cell_gallery2_pane_g4

0xda09,	// (0x0005c1a4) cell_gallery2_pane_g5

0xa465,	// (0x00058c00) grid_highlight_pane_cp10

0x67b5,	// (0x00054f50) popup_vitu2_match_list_window_ParamLimits

0x67cc,	// (0x00054f67) popup_vitu2_query_window_ParamLimits

0x67cc,	// (0x00054f67) popup_vitu2_query_window

0x9a5a,	// (0x000581f5) bg_vitu2_candi_button_pane

0xd9de,	// (0x0005c179) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd9e7,	// (0x0005c182) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd9f0,	// (0x0005c18b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0094,	// (0x0004e82f) bg_button_pane_cp015

0x71ff,	// (0x0005599a) bg_button_pane_cp016

0x7212,	// (0x000559ad) bg_button_pane_cp017

0xc9cc,	// (0x0005b167) bg_popup_sub_pane_cp22

0xda11,	// (0x0005c1ac) popup_vitu2_query_window_g1

0x00c9,	// (0x0004e864) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x0005e1be) popup_vitu2_query_window_g

0x00e8,	// (0x0004e883) popup_vitu2_query_window_t1_ParamLimits

0x00e8,	// (0x0004e883) popup_vitu2_query_window_t1

0x011d,	// (0x0004e8b8) popup_vitu2_query_window_t2_ParamLimits

0x011d,	// (0x0004e8b8) popup_vitu2_query_window_t2

0x012f,	// (0x0004e8ca) popup_vitu2_query_window_t3_ParamLimits

0x012f,	// (0x0004e8ca) popup_vitu2_query_window_t3

0x7236,	// (0x000559d1) popup_vitu2_query_window_t4_ParamLimits

0x7236,	// (0x000559d1) popup_vitu2_query_window_t4

0x7257,	// (0x000559f2) popup_vitu2_query_window_t5_ParamLimits

0x7257,	// (0x000559f2) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0005e1c5) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0005e1c5) popup_vitu2_query_window_t

0xd8a9,	// (0x0005c044) main_cset_text_pane

0x6c26,	// (0x000553c1) aid_area_touch_slider_ParamLimits

0x6c42,	// (0x000553dd) cset_slider_pane_ParamLimits

0x6c6c,	// (0x00055407) main_cset_slider_pane_g1_ParamLimits

0x6c81,	// (0x0005541c) main_cset_slider_pane_g2_ParamLimits

0xd8ca,	// (0x0005c065) main_cset_slider_pane_g3_ParamLimits

0xd8ca,	// (0x0005c065) main_cset_slider_pane_g3

0x6c96,	// (0x00055431) main_cset_slider_pane_g4_ParamLimits

0x6c96,	// (0x00055431) main_cset_slider_pane_g4

0x6ca5,	// (0x00055440) main_cset_slider_pane_g5_ParamLimits

0x6ca5,	// (0x00055440) main_cset_slider_pane_g5

0x6cb3,	// (0x0005544e) main_cset_slider_pane_g6_ParamLimits

0x6cb3,	// (0x0005544e) main_cset_slider_pane_g6

0xf97d,	// (0x0005e118) main_cset_slider_pane_g_ParamLimits

0xd8fa,	// (0x0005c095) main_cset_slider_pane_t1_ParamLimits

0x6d43,	// (0x000554de) main_cset_slider_pane_t2_ParamLimits

0x6d5d,	// (0x000554f8) main_cset_slider_pane_t3_ParamLimits

0x6d77,	// (0x00055512) main_cset_slider_pane_t4_ParamLimits

0x6d91,	// (0x0005552c) main_cset_slider_pane_t5_ParamLimits

0x6daf,	// (0x0005554a) main_cset_slider_pane_t6_ParamLimits

0x6dc6,	// (0x00055561) main_cset_slider_pane_t7_ParamLimits

0x6df4,	// (0x0005558f) main_cset_slider_pane_t8_ParamLimits

0x6df4,	// (0x0005558f) main_cset_slider_pane_t8

0x6e1c,	// (0x000555b7) main_cset_slider_pane_t9_ParamLimits

0x6e1c,	// (0x000555b7) main_cset_slider_pane_t9

0x6e44,	// (0x000555df) main_cset_slider_pane_t10_ParamLimits

0x6e44,	// (0x000555df) main_cset_slider_pane_t10

0x6e6c,	// (0x00055607) main_cset_slider_pane_t11_ParamLimits

0x6e6c,	// (0x00055607) main_cset_slider_pane_t11

0x6e96,	// (0x00055631) main_cset_slider_pane_t12_ParamLimits

0x6e96,	// (0x00055631) main_cset_slider_pane_t12

0x6eb3,	// (0x0005564e) main_cset_slider_pane_t13_ParamLimits

0x6eb3,	// (0x0005564e) main_cset_slider_pane_t13

0xf9a2,	// (0x0005e13d) main_cset_slider_pane_t_ParamLimits

0x9a5a,	// (0x000581f5) bg_popup_sub_pane_cp011

0xda1d,	// (0x0005c1b8) main_cset_text_pane_g1

0xda25,	// (0x0005c1c0) main_cset_text_pane_t1

0xda33,	// (0x0005c1ce) main_cset_text_pane_t2

0xda41,	// (0x0005c1dc) main_cset_text_pane_t3

0xda4f,	// (0x0005c1ea) main_cset_text_pane_t4

0xda5d,	// (0x0005c1f8) main_cset_text_pane_t5

0xda6b,	// (0x0005c206) main_cset_text_pane_t6

0xda79,	// (0x0005c214) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0005e1d4) main_cset_text_pane_t

0x9a5a,	// (0x000581f5) main_cam4_burst_pane

0x9a5a,	// (0x000581f5) main_cam5_pane

0x6b5d,	// (0x000552f8) bg_button_pane_cp019

0x6b66,	// (0x00055301) bg_button_pane_cp020

0xd8d6,	// (0x0005c071) main_cset_slider_pane_g7_ParamLimits

0xd8d6,	// (0x0005c071) main_cset_slider_pane_g7

0xd8e2,	// (0x0005c07d) main_cset_slider_pane_g8_ParamLimits

0xd8e2,	// (0x0005c07d) main_cset_slider_pane_g8

0x6cc7,	// (0x00055462) main_cset_slider_pane_g9_ParamLimits

0x6cc7,	// (0x00055462) main_cset_slider_pane_g9

0x6cd3,	// (0x0005546e) main_cset_slider_pane_g10_ParamLimits

0x6cd3,	// (0x0005546e) main_cset_slider_pane_g10

0x6cdf,	// (0x0005547a) main_cset_slider_pane_g11_ParamLimits

0x6cdf,	// (0x0005547a) main_cset_slider_pane_g11

0x6ceb,	// (0x00055486) main_cset_slider_pane_g12_ParamLimits

0x6ceb,	// (0x00055486) main_cset_slider_pane_g12

0x6cf7,	// (0x00055492) main_cset_slider_pane_g13_ParamLimits

0x6cf7,	// (0x00055492) main_cset_slider_pane_g13

0x6d03,	// (0x0005549e) main_cset_slider_pane_g14_ParamLimits

0x6d03,	// (0x0005549e) main_cset_slider_pane_g14

0x6d0f,	// (0x000554aa) main_cset_slider_pane_g15_ParamLimits

0x6d0f,	// (0x000554aa) main_cset_slider_pane_g15

0xd928,	// (0x0005c0c3) main_cset_slider_pane_t14_ParamLimits

0xd928,	// (0x0005c0c3) main_cset_slider_pane_t14

0xd961,	// (0x0005c0fc) main_cset_slider_pane_t15_ParamLimits

0xd961,	// (0x0005c0fc) main_cset_slider_pane_t15

0x7278,	// (0x00055a13) aid_cam4_burst_size_cell_ParamLimits

0x7278,	// (0x00055a13) aid_cam4_burst_size_cell

0x7298,	// (0x00055a33) grid_cam4_burst_pane_ParamLimits

0x7298,	// (0x00055a33) grid_cam4_burst_pane

0x72d2,	// (0x00055a6d) linegrid_cam4_burst_pane_ParamLimits

0x72d2,	// (0x00055a6d) linegrid_cam4_burst_pane

0xda87,	// (0x0005c222) scroll_pane_cp30_ParamLimits

0xda87,	// (0x0005c222) scroll_pane_cp30

0x72f4,	// (0x00055a8f) cell_cam4_burst_pane_ParamLimits

0x72f4,	// (0x00055a8f) cell_cam4_burst_pane

0xda93,	// (0x0005c22e) linegrid_cam4_burst_pane_g1_ParamLimits

0xda93,	// (0x0005c22e) linegrid_cam4_burst_pane_g1

0x7349,	// (0x00055ae4) linegrid_cam4_burst_pane_g2_ParamLimits

0x7349,	// (0x00055ae4) linegrid_cam4_burst_pane_g2

0xdaa0,	// (0x0005c23b) linegrid_cam4_burst_pane_g3_ParamLimits

0xdaa0,	// (0x0005c23b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x0005e1e3) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005e1e3) linegrid_cam4_burst_pane_g

0x735a,	// (0x00055af5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x735a,	// (0x00055af5) linegrid_cam4_burst_pane_g3_copy1

0xdaad,	// (0x0005c248) linegrid_cam4_burst_pane_g4_ParamLimits

0xdaad,	// (0x0005c248) linegrid_cam4_burst_pane_g4

0x7378,	// (0x00055b13) linegrid_cam4_burst_pane_g5_ParamLimits

0x7378,	// (0x00055b13) linegrid_cam4_burst_pane_g5

0x7389,	// (0x00055b24) linegrid_cam4_burst_pane_g6_ParamLimits

0x7389,	// (0x00055b24) linegrid_cam4_burst_pane_g6

0xdaba,	// (0x0005c255) linegrid_cam4_burst_pane_g7_ParamLimits

0xdaba,	// (0x0005c255) linegrid_cam4_burst_pane_g7

0x73a0,	// (0x00055b3b) cell_cam4_burst_pane_g1

0xdad3,	// (0x0005c26e) main_cam5_pane_t1_ParamLimits

0xdad3,	// (0x0005c26e) main_cam5_pane_t1

0xdae5,	// (0x0005c280) main_cam5_pane_t2_ParamLimits

0xdae5,	// (0x0005c280) main_cam5_pane_t2

0xdaf7,	// (0x0005c292) main_cam5_pane_t3_ParamLimits

0xdaf7,	// (0x0005c292) main_cam5_pane_t3

0xdb09,	// (0x0005c2a4) main_cam5_pane_t4_ParamLimits

0xdb09,	// (0x0005c2a4) main_cam5_pane_t4

0xdb21,	// (0x0005c2bc) main_cam5_pane_t5_ParamLimits

0xdb21,	// (0x0005c2bc) main_cam5_pane_t5

0xdb35,	// (0x0005c2d0) main_cam5_pane_t6_ParamLimits

0xdb35,	// (0x0005c2d0) main_cam5_pane_t6

0xdb49,	// (0x0005c2e4) main_cam5_pane_t7_ParamLimits

0xdb49,	// (0x0005c2e4) main_cam5_pane_t7

0xdb5b,	// (0x0005c2f6) main_cam5_pane_t8_ParamLimits

0xdb5b,	// (0x0005c2f6) main_cam5_pane_t8

0xdb79,	// (0x0005c314) main_cam5_pane_t9_ParamLimits

0xdb79,	// (0x0005c314) main_cam5_pane_t9

0xdb8b,	// (0x0005c326) main_cam5_pane_t10_ParamLimits

0xdb8b,	// (0x0005c326) main_cam5_pane_t10

0xdb9d,	// (0x0005c338) main_cam5_pane_t11_ParamLimits

0xdb9d,	// (0x0005c338) main_cam5_pane_t11

0xdbb1,	// (0x0005c34c) main_cam5_pane_t12_ParamLimits

0xdbb1,	// (0x0005c34c) main_cam5_pane_t12

0xdbc8,	// (0x0005c363) main_cam5_pane_t13_ParamLimits

0xdbc8,	// (0x0005c363) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x0005e1ef) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x0005e1ef) main_cam5_pane_t

0x0dce,	// (0x0004f569) popup_scut_keymap_window_ParamLimits

0x0dce,	// (0x0004f569) popup_scut_keymap_window

0x73b3,	// (0x00055b4e) aid_size_cell_brow_shortcut

0xa465,	// (0x00058c00) bg_popup_window_pane_cp010

0x73bf,	// (0x00055b5a) grid_scut_pane

0x73cb,	// (0x00055b66) cell_scut_pane_ParamLimits

0x73cb,	// (0x00055b66) cell_scut_pane

0x73e4,	// (0x00055b7f) cell_scut_pane_g1

0xdbeb,	// (0x0005c386) cell_scut_pane_t1

0xdbfa,	// (0x0005c395) cell_scut_pane_t2

0x73ed,	// (0x00055b88) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x0005e20a) cell_scut_pane_t

0x5149,	// (0x000538e4) main_mup3_pane_g8_ParamLimits

0x5149,	// (0x000538e4) main_mup3_pane_g8

0x66b2,	// (0x00054e4d) area_vitu2_query_pane_ParamLimits

0x66b2,	// (0x00054e4d) area_vitu2_query_pane

0x00a8,	// (0x0004e843) input_focus_pane_cp08

0xdc09,	// (0x0005c3a4) area_vitu2_query_pane_g1

0x01ad,	// (0x0004e948) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x0005e211) area_vitu2_query_pane_g

0x73fb,	// (0x00055b96) area_vitu2_query_pane_t1_ParamLimits

0x73fb,	// (0x00055b96) area_vitu2_query_pane_t1

0x740f,	// (0x00055baa) area_vitu2_query_pane_t2_ParamLimits

0x740f,	// (0x00055baa) area_vitu2_query_pane_t2

0x01be,	// (0x0004e959) area_vitu2_query_pane_t3_ParamLimits

0x01be,	// (0x0004e959) area_vitu2_query_pane_t3

0x7423,	// (0x00055bbe) area_vitu2_query_pane_t4_ParamLimits

0x7423,	// (0x00055bbe) area_vitu2_query_pane_t4

0x744b,	// (0x00055be6) area_vitu2_query_pane_t5_ParamLimits

0x744b,	// (0x00055be6) area_vitu2_query_pane_t5

0x7473,	// (0x00055c0e) area_vitu2_query_pane_t6_ParamLimits

0x7473,	// (0x00055c0e) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x0005e216) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x0005e216) area_vitu2_query_pane_t

0x74bf,	// (0x00055c5a) bg_button_pane_cp018

0x74cd,	// (0x00055c68) bg_button_pane_cp021

0x01e6,	// (0x0004e981) bg_button_pane_cp022

0x01f7,	// (0x0004e992) input_focus_pane_cp09

0xb3fa,	// (0x00059b95) aid_size_touch_mv_arrow_left

0xb425,	// (0x00059bc0) aid_size_touch_mv_arrow_right

0x6d27,	// (0x000554c2) main_cset_slider_pane_g16_ParamLimits

0x6d27,	// (0x000554c2) main_cset_slider_pane_g16

0x6d35,	// (0x000554d0) main_cset_slider_pane_g17_ParamLimits

0x6d35,	// (0x000554d0) main_cset_slider_pane_g17

0x73a0,	// (0x00055b3b) cell_cam4_burst_pane_g1_ParamLimits

0x9a5a,	// (0x000581f5) compa_mode_pane

0x6f3a,	// (0x000556d5) popup_vtel_slider_window_g3_ParamLimits

0x6f3a,	// (0x000556d5) popup_vtel_slider_window_g3

0x6f51,	// (0x000556ec) popup_vtel_slider_window_g4_ParamLimits

0x6f51,	// (0x000556ec) popup_vtel_slider_window_g4

0x6f68,	// (0x00055703) popup_vtel_slider_window_t1_ParamLimits

0x6f68,	// (0x00055703) popup_vtel_slider_window_t1

0x9a5a,	// (0x000581f5) main_cl_pane

0xa73f,	// (0x00058eda) popup_imed_adjust2_window_ParamLimits

0xc9cc,	// (0x0005b167) bg_tb_trans_pane_cp05_ParamLimits

0xd300,	// (0x0005ba9b) popup_imed_adjust2_window_g1_ParamLimits

0xd30f,	// (0x0005baaa) popup_imed_adjust2_window_g2_ParamLimits

0xd30f,	// (0x0005baaa) popup_imed_adjust2_window_g2

0xd31b,	// (0x0005bab6) popup_imed_adjust2_window_g3_ParamLimits

0xd31b,	// (0x0005bab6) popup_imed_adjust2_window_g3

0x0002,

0xf7e2,	// (0x0005df7d) popup_imed_adjust2_window_g_ParamLimits

0xf7e2,	// (0x0005df7d) popup_imed_adjust2_window_g

0xd327,	// (0x0005bac2) popup_imed_adjust2_window_t1_ParamLimits

0xd33f,	// (0x0005bada) slider_imed_adjust_pane_ParamLimits

0xd353,	// (0x0005baee) slider_imed_adjust_pane_g1_ParamLimits

0xd363,	// (0x0005bafe) slider_imed_adjust_pane_g2_ParamLimits

0xd373,	// (0x0005bb0e) slider_imed_adjust_pane_g3_ParamLimits

0xd384,	// (0x0005bb1f) slider_imed_adjust_pane_g4_ParamLimits

0xf7e9,	// (0x0005df84) slider_imed_adjust_pane_g_ParamLimits

0x6431,	// (0x00054bcc) aid_touch_area_cam4_ParamLimits

0x6431,	// (0x00054bcc) aid_touch_area_cam4

0xab26,	// (0x000592c1) battery_pane_cp01

0x6504,	// (0x00054c9f) main_camera4_pane_g6_ParamLimits

0x6504,	// (0x00054c9f) main_camera4_pane_g6

0x652e,	// (0x00054cc9) main_camera4_pane_t2_ParamLimits

0x652e,	// (0x00054cc9) main_camera4_pane_t2

0x0001,

0xf8f0,	// (0x0005e08b) main_camera4_pane_t_ParamLimits

0xf8f0,	// (0x0005e08b) main_camera4_pane_t

0x6563,	// (0x00054cfe) aid_touch_area_vid4_ParamLimits

0x6563,	// (0x00054cfe) aid_touch_area_vid4

0x65b7,	// (0x00054d52) main_video4_pane_g5_ParamLimits

0x65b7,	// (0x00054d52) main_video4_pane_g5

0x65dc,	// (0x00054d77) vid4_progress_pane_ParamLimits

0x65dc,	// (0x00054d77) vid4_progress_pane

0xd8ee,	// (0x0005c089) main_cset_slider_pane_g18_ParamLimits

0xd8ee,	// (0x0005c089) main_cset_slider_pane_g18

0xdac7,	// (0x0005c262) cell_cam4_burst_pane_g2_ParamLimits

0xdac7,	// (0x0005c262) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x0005e1ea) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0005e1ea) cell_cam4_burst_pane_g

0xa251,	// (0x000589ec) bg_cl_pane_ParamLimits

0xa251,	// (0x000589ec) bg_cl_pane

0x74d9,	// (0x00055c74) cl_header_pane_ParamLimits

0x74d9,	// (0x00055c74) cl_header_pane

0x74ed,	// (0x00055c88) cl_listscroll_pane_ParamLimits

0x74ed,	// (0x00055c88) cl_listscroll_pane

0xdc15,	// (0x0005c3b0) bg_cl_pane_g1

0xdc1d,	// (0x0005c3b8) bg_cl_pane_g2

0xdc25,	// (0x0005c3c0) bg_cl_pane_g3

0xdc2d,	// (0x0005c3c8) bg_cl_pane_g4

0xdc35,	// (0x0005c3d0) bg_cl_pane_g5

0xdc3d,	// (0x0005c3d8) bg_cl_pane_g6

0xdc45,	// (0x0005c3e0) bg_cl_pane_g7

0xdc4d,	// (0x0005c3e8) bg_cl_pane_g8

0xdc55,	// (0x0005c3f0) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x0005e225) bg_cl_pane_g

0x74fd,	// (0x00055c98) aid_height_cl_leading_ParamLimits

0x74fd,	// (0x00055c98) aid_height_cl_leading

0x7509,	// (0x00055ca4) aid_height_cl_text_ParamLimits

0x7509,	// (0x00055ca4) aid_height_cl_text

0xad09,	// (0x000594a4) bg_cl_header_pane_ParamLimits

0xad09,	// (0x000594a4) bg_cl_header_pane

0x7528,	// (0x00055cc3) cl_header_pane_g1_ParamLimits

0x7528,	// (0x00055cc3) cl_header_pane_g1

0x753e,	// (0x00055cd9) cl_header_pane_t1_ParamLimits

0x753e,	// (0x00055cd9) cl_header_pane_t1

0xdc5d,	// (0x0005c3f8) cl_list_pane

0xd8c1,	// (0x0005c05c) hc_scroll_pane_cp01

0xadb1,	// (0x0005954c) bg_cl_header_pane_g1

0xd7a3,	// (0x0005bf3e) bg_cl_header_pane_g2

0xadd1,	// (0x0005956c) bg_cl_header_pane_g3

0xd7b3,	// (0x0005bf4e) bg_cl_header_pane_g4

0xd7ab,	// (0x0005bf46) bg_cl_header_pane_g5

0xd9d6,	// (0x0005c171) bg_cl_header_pane_g6

0xd7cb,	// (0x0005bf66) bg_cl_header_pane_g7

0xd7d3,	// (0x0005bf6e) bg_cl_header_pane_g8

0xd7c3,	// (0x0005bf5e) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x0005e238) bg_cl_header_pane_g

0x7557,	// (0x00055cf2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7557,	// (0x00055cf2) hc_cl_list_double_graphic_heading_pane

0x756a,	// (0x00055d05) hc_cl_list_single_graphic_pane_ParamLimits

0x756a,	// (0x00055d05) hc_cl_list_single_graphic_pane

0x7582,	// (0x00055d1d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7582,	// (0x00055d1d) hc_cl_list_single_graphic_pane_g1

0x758e,	// (0x00055d29) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x758e,	// (0x00055d29) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x0005e24b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x0005e24b) hc_cl_list_single_graphic_pane_g

0x75a2,	// (0x00055d3d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75a2,	// (0x00055d3d) hc_cl_list_single_graphic_pane_t1

0x7582,	// (0x00055d1d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7582,	// (0x00055d1d) hc_cl_list_double_graphic_heading_pane_g1

0x75b7,	// (0x00055d52) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75b7,	// (0x00055d52) hc_cl_list_double_graphic_heading_pane_g2

0x75cb,	// (0x00055d66) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75cb,	// (0x00055d66) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x0005e250) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x0005e250) hc_cl_list_double_graphic_heading_pane_g

0x75df,	// (0x00055d7a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75df,	// (0x00055d7a) hc_cl_list_double_graphic_heading_pane_t1

0x75f4,	// (0x00055d8f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75f4,	// (0x00055d8f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0005e257) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0005e257) hc_cl_list_double_graphic_heading_pane_t

0xac86,	// (0x00059421) vid4_progress_pane_g1

0xac96,	// (0x00059431) vid4_progress_pane_g2

0x7609,	// (0x00055da4) vid4_progress_pane_g3

0xab5d,	// (0x000592f8) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x0005e25c) vid4_progress_pane_g

0x761b,	// (0x00055db6) vid4_progress_pane_t1

0xaca6,	// (0x00059441) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0005e267) vid4_progress_pane_t

0x7633,	// (0x00055dce) wait_bar_pane_cp07

0xcbf1,	// (0x0005b38c) blid_firmament_pane_ParamLimits

0xcc34,	// (0x0005b3cf) popup_blid_sat_info2_window_g1

0xcc58,	// (0x0005b3f3) popup_blid_sat_info2_window_t3

0xcc66,	// (0x0005b401) popup_blid_sat_info2_window_t4

0xcc74,	// (0x0005b40f) popup_blid_sat_info2_window_t5

0xcc82,	// (0x0005b41d) popup_blid_sat_info2_window_t6

0xcc92,	// (0x0005b42d) popup_blid_sat_info2_window_t7

0xcca0,	// (0x0005b43b) popup_blid_sat_info2_window_t8

0xccae,	// (0x0005b449) popup_blid_sat_info2_window_t9

0xccbc,	// (0x0005b457) popup_blid_sat_info2_window_t10

0xcd84,	// (0x0005b51f) aid_firma_cardinal_ParamLimits

0xcd98,	// (0x0005b533) blid_firmament_pane_t1_ParamLimits

0xcdaf,	// (0x0005b54a) blid_firmament_pane_t2_ParamLimits

0xcdc6,	// (0x0005b561) blid_firmament_pane_t3_ParamLimits

0xcddd,	// (0x0005b578) blid_firmament_pane_t4_ParamLimits

0xf6d6,	// (0x0005de71) blid_firmament_pane_t_ParamLimits

0xcdf4,	// (0x0005b58f) blid_sat_info_pane_ParamLimits

0xad09,	// (0x000594a4) main_cam_set_pane_ParamLimits

0x5a21,	// (0x000541bc) aid_size_cell_colour_35_ParamLimits

0x5a41,	// (0x000541dc) aid_size_cell_colour_112_ParamLimits

0x5a61,	// (0x000541fc) aid_size_cell_effect_ParamLimits

0xc9cc,	// (0x0005b167) bg_tb_trans_pane_cp02_ParamLimits

0xb019,	// (0x000597b4) heading_imed_pane_ParamLimits

0x5a81,	// (0x0005421c) listscroll_imed_pane_ParamLimits

0xbff4,	// (0x0005a78f) popup_call2_audio_first_window_g5_ParamLimits

0xbff4,	// (0x0005a78f) popup_call2_audio_first_window_g5

0x603e,	// (0x000547d9) aid_size_touch_image3_arrow_left_ParamLimits

0x603e,	// (0x000547d9) aid_size_touch_image3_arrow_left

0x606a,	// (0x00054805) aid_size_touch_image3_arrow_right_ParamLimits

0x606a,	// (0x00054805) aid_size_touch_image3_arrow_right

0xacbb,	// (0x00059456) vid4_progress_pane_t3

0x5d9a,	// (0x00054535) main_hwr_training_symbol_option_pane_ParamLimits

0x5d9a,	// (0x00054535) main_hwr_training_symbol_option_pane

0xd5f9,	// (0x0005bd94) popup_hwr_training_preview_window_ParamLimits

0xd5f9,	// (0x0005bd94) popup_hwr_training_preview_window

0x5dba,	// (0x00054555) hwr_training_navi_pane_g5_ParamLimits

0x5dba,	// (0x00054555) hwr_training_navi_pane_g5

0xd791,	// (0x0005bf2c) popup_char_count_window

0xad09,	// (0x000594a4) bg_popup_sub_pane_cp20_ParamLimits

0x7080,	// (0x0005581b) list_vitu2_match_list_pane_ParamLimits

0x708f,	// (0x0005582a) vitu2_page_scroll_pane_ParamLimits

0x708f,	// (0x0005582a) vitu2_page_scroll_pane

0xdc66,	// (0x0005c401) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdc66,	// (0x0005c401) list_single_hwr_training_symbol_option_pane

0xdc79,	// (0x0005c414) list_single_hwr_training_symbol_option_pane_g1

0xdc81,	// (0x0005c41c) list_single_hwr_training_symbol_option_pane_t1

0xdc8f,	// (0x0005c42a) bg_button_pane_cp023

0xdc98,	// (0x0005c433) bg_button_pane_cp024

0x7668,	// (0x00055e03) vitu2_page_scroll_pane_g1

0x7670,	// (0x00055e0b) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x0005e26e) vitu2_page_scroll_pane_g

0x767a,	// (0x00055e15) vitu2_page_scroll_pane_t1

0xdccb,	// (0x0005c466) popup_char_count_window_g1

0xdcd4,	// (0x0005c46f) popup_char_count_window_g2

0xdcdd,	// (0x0005c478) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x0005e273) popup_char_count_window_g

0xdce6,	// (0x0005c481) popup_char_count_window_t1

0x9a5a,	// (0x000581f5) main_vded2_pane

0xd2ec,	// (0x0005ba87) aid_size_cell_imed_line

0xd2f6,	// (0x0005ba91) grid_imed_line_width_pane

0xabe0,	// (0x0005937b) vid4_indicators_pane_g4

0xdcf4,	// (0x0005c48f) cell_imed_line_width_pane_ParamLimits

0xdcf4,	// (0x0005c48f) cell_imed_line_width_pane

0xdd0a,	// (0x0005c4a5) cell_imed_line_width_pane_g1

0xdd13,	// (0x0005c4ae) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x0005e27a) cell_imed_line_width_pane_g

0x7689,	// (0x00055e24) main_vded2_pane_g1_ParamLimits

0x7689,	// (0x00055e24) main_vded2_pane_g1

0x76a4,	// (0x00055e3f) main_vded2_pane_g2_ParamLimits

0x76a4,	// (0x00055e3f) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x0005e27f) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x0005e27f) main_vded2_pane_g

0x76b6,	// (0x00055e51) vded2_slider_pane_ParamLimits

0x76b6,	// (0x00055e51) vded2_slider_pane

0x76c6,	// (0x00055e61) aid_size_touch_vded2_end

0x76d0,	// (0x00055e6b) aid_size_touch_vded2_playhead

0xdd1b,	// (0x0005c4b6) aid_size_touch_vded2_start

0xdd23,	// (0x0005c4be) vded2_slider_bg_pane

0xdd2c,	// (0x0005c4c7) vded2_slider_pane_g1

0xdd35,	// (0x0005c4d0) vded2_slider_pane_g2

0x76da,	// (0x00055e75) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0005e284) vded2_slider_pane_g

0xdd3d,	// (0x0005c4d8) vded2_slider_bg_pane_g1

0xdd46,	// (0x0005c4e1) vded2_slider_bg_pane_g2

0xdd4f,	// (0x0005c4ea) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x0005e28b) vded2_slider_bg_pane_g

0x3697,	// (0x00051e32) aid_postcard_touch_down_pane_ParamLimits

0x3697,	// (0x00051e32) aid_postcard_touch_down_pane

0x36af,	// (0x00051e4a) aid_postcard_touch_up_pane_ParamLimits

0x36af,	// (0x00051e4a) aid_postcard_touch_up_pane

0x9a5a,	// (0x000581f5) main_blid2_pane

0xa721,	// (0x00058ebc) popup_blid2_search_window

0x9a5a,	// (0x000581f5) blid2_gps_pane

0x9a5a,	// (0x000581f5) blid2_navig_pane

0x9a5a,	// (0x000581f5) blid2_search_pane

0x9a5a,	// (0x000581f5) blid2_tripm_pane

0x76e5,	// (0x00055e80) blid2_search_pane_g1_ParamLimits

0x76e5,	// (0x00055e80) blid2_search_pane_g1

0x76f8,	// (0x00055e93) blid2_search_pane_t1_ParamLimits

0x76f8,	// (0x00055e93) blid2_search_pane_t1

0x770a,	// (0x00055ea5) aid_size_cell_blid2_gps_ParamLimits

0x770a,	// (0x00055ea5) aid_size_cell_blid2_gps

0x7722,	// (0x00055ebd) blid2_gps_pane_g1_ParamLimits

0x7722,	// (0x00055ebd) blid2_gps_pane_g1

0x7736,	// (0x00055ed1) grid_blid2_satellite_pane_ParamLimits

0x7736,	// (0x00055ed1) grid_blid2_satellite_pane

0x774e,	// (0x00055ee9) blid2_navig_pane_g1_ParamLimits

0x774e,	// (0x00055ee9) blid2_navig_pane_g1

0x775a,	// (0x00055ef5) blid2_navig_pane_t1_ParamLimits

0x775a,	// (0x00055ef5) blid2_navig_pane_t1

0x7775,	// (0x00055f10) blid2_navig_pane_t2_ParamLimits

0x7775,	// (0x00055f10) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0005e292) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0005e292) blid2_navig_pane_t

0x7790,	// (0x00055f2b) blid2_navig_ring_pane_ParamLimits

0x7790,	// (0x00055f2b) blid2_navig_ring_pane

0x77ab,	// (0x00055f46) blid2_speed_pane_ParamLimits

0x77ab,	// (0x00055f46) blid2_speed_pane

0x77b7,	// (0x00055f52) blid2_tripm_pane_g1_ParamLimits

0x77b7,	// (0x00055f52) blid2_tripm_pane_g1

0x77d2,	// (0x00055f6d) blid2_tripm_pane_g2_ParamLimits

0x77d2,	// (0x00055f6d) blid2_tripm_pane_g2

0x77e6,	// (0x00055f81) blid2_tripm_pane_g3_ParamLimits

0x77e6,	// (0x00055f81) blid2_tripm_pane_g3

0x77fa,	// (0x00055f95) blid2_tripm_pane_g4_ParamLimits

0x77fa,	// (0x00055f95) blid2_tripm_pane_g4

0x780e,	// (0x00055fa9) blid2_tripm_pane_g5_ParamLimits

0x780e,	// (0x00055fa9) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0005e297) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0005e297) blid2_tripm_pane_g

0x7834,	// (0x00055fcf) blid2_tripm_pane_t1_ParamLimits

0x7834,	// (0x00055fcf) blid2_tripm_pane_t1

0x784d,	// (0x00055fe8) blid2_tripm_pane_t2_ParamLimits

0x784d,	// (0x00055fe8) blid2_tripm_pane_t2

0x7866,	// (0x00056001) blid2_tripm_pane_t3_ParamLimits

0x7866,	// (0x00056001) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0005e2a4) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0005e2a4) blid2_tripm_pane_t

0x78ad,	// (0x00056048) cell_blid2_satellite_pane_ParamLimits

0x78ad,	// (0x00056048) cell_blid2_satellite_pane

0x78c9,	// (0x00056064) cell_blid2_satellite_pane_g1

0xdd58,	// (0x0005c4f3) cell_blid2_satellite_pane_t1

0xce04,	// (0x0005b59f) blid2_speed_pane_g1

0xdd66,	// (0x0005c501) blid2_speed_pane_t1

0xdd74,	// (0x0005c50f) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x0005e2ad) blid2_speed_pane_t

0xce04,	// (0x0005b59f) blid2_navig_ring_pane_g1

0x78d2,	// (0x0005606d) blid2_navig_ring_pane_g2

0x78da,	// (0x00056075) blid2_navig_ring_pane_g3

0x78e2,	// (0x0005607d) blid2_navig_ring_pane_g4

0x78ea,	// (0x00056085) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0005e2b2) blid2_navig_ring_pane_g

0x9a5a,	// (0x000581f5) bg_popup_window_pane_cp011

0xdd82,	// (0x0005c51d) popup_blid2_search_window_g1

0xdd8a,	// (0x0005c525) popup_blid2_search_window_t1

0xdd98,	// (0x0005c533) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x0005e2bd) popup_blid2_search_window_t

0xa5bb,	// (0x00058d56) main_browser_pane_g1

0xa251,	// (0x000589ec) main_browser_pane_ParamLimits

0xad09,	// (0x000594a4) bg_button_pane_cp011_ParamLimits

0x68e9,	// (0x00055084) cell_vitu2_function_pane_g1_ParamLimits

0xc9cc,	// (0x0005b167) bg_popup_sub_pane_cp22_ParamLimits

0x00a8,	// (0x0004e843) input_focus_pane_cp08_ParamLimits

0x7225,	// (0x000559c0) popup_vitu2_query_button_pane_ParamLimits

0x7225,	// (0x000559c0) popup_vitu2_query_button_pane

0x00bf,	// (0x0004e85a) popup_vitu2_query_input_button_pane

0xda11,	// (0x0005c1ac) popup_vitu2_query_window_g1_ParamLimits

0x00c9,	// (0x0004e864) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x0005e1be) popup_vitu2_query_window_g_ParamLimits

0x9a5a,	// (0x000581f5) bg_button_pane_cp026

0x78f2,	// (0x0005608d) popup_vitu2_query_input_button_pane_g1

0x9a5a,	// (0x000581f5) bg_button_pane_cp025

0xdda6,	// (0x0005c541) popup_vitu2_query_button_pane_t1

0x4d95,	// (0x00053530) main_mp3_pane_t6

0x4da3,	// (0x0005353e) popup_slider_window_cp01

0xab44,	// (0x000592df) cam4_battery_pane

0xab99,	// (0x00059334) cam4_battery_pane_cp02

0xac7e,	// (0x00059419) cam4_battery_pane_cp01

0xac7e,	// (0x00059419) cam4_battery_pane_cp03

0xce04,	// (0x0005b59f) cam4_battery_pane_g1

0xddb4,	// (0x0005c54f) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x0005e2c2) cam4_battery_pane_g

0xccca,	// (0x0005b465) popup_blid_sat_info2_window_t11

0xb3fa,	// (0x00059b95) aid_size_touch_mv_arrow_left_ParamLimits

0xb425,	// (0x00059bc0) aid_size_touch_mv_arrow_right_ParamLimits

0xb483,	// (0x00059c1e) navi_pane_g1_ParamLimits

0xb48f,	// (0x00059c2a) navi_pane_g2_ParamLimits

0xb4bd,	// (0x00059c58) navi_pane_g3_ParamLimits

0xf3e8,	// (0x0005db83) navi_pane_g_ParamLimits

0x312f,	// (0x000518ca) navi_pane_mv_t1_ParamLimits

0x5a8d,	// (0x00054228) grid_imed_effect_pane_ParamLimits

0x1cbe,	// (0x00050459) aid_placing_vt_slider_lsc

0xa506,	// (0x00058ca1) aid_placing_vt_slider_prt

0xad09,	// (0x000594a4) bg_tb_trans_pane_cp01_ParamLimits

0xcf4b,	// (0x0005b6e6) popup_image_details_window_g1_ParamLimits

0xcf5e,	// (0x0005b6f9) popup_image_details_window_g2_ParamLimits

0xcf73,	// (0x0005b70e) popup_image_details_window_g3_ParamLimits

0xcf73,	// (0x0005b70e) popup_image_details_window_g3

0xf71b,	// (0x0005deb6) popup_image_details_window_g_ParamLimits

0xcf87,	// (0x0005b722) popup_image_details_window_t1_ParamLimits

0xcf99,	// (0x0005b734) popup_image_details_window_t2_ParamLimits

0xcfb2,	// (0x0005b74d) popup_image_details_window_t3_ParamLimits

0xcfc6,	// (0x0005b761) popup_image_details_window_t4_ParamLimits

0xcfe1,	// (0x0005b77c) popup_image_details_window_t5_ParamLimits

0xf722,	// (0x0005debd) popup_image_details_window_t_ParamLimits

0x7515,	// (0x00055cb0) cl_header_name_pane_ParamLimits

0x7515,	// (0x00055cb0) cl_header_name_pane

0x78fa,	// (0x00056095) cl_header_name_pane_t1_ParamLimits

0x78fa,	// (0x00056095) cl_header_name_pane_t1

0x791b,	// (0x000560b6) cl_header_name_pane_t2_ParamLimits

0x791b,	// (0x000560b6) cl_header_name_pane_t2

0x795d,	// (0x000560f8) cl_header_name_pane_t3_ParamLimits

0x795d,	// (0x000560f8) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0005e2c7) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0005e2c7) cl_header_name_pane_t

0xb54c,	// (0x00059ce7) navi_pane_mv_g2_ParamLimits

0xd76b,	// (0x0005bf06) field_vitu2_entry_pane_g1_ParamLimits

0xd777,	// (0x0005bf12) field_vitu2_entry_pane_g2_ParamLimits

0xd783,	// (0x0005bf1e) field_vitu2_entry_pane_g3_ParamLimits

0xd783,	// (0x0005bf1e) field_vitu2_entry_pane_g3

0xf922,	// (0x0005e0bd) field_vitu2_entry_pane_g_ParamLimits

0xac15,	// (0x000593b0) cell_vitu2_itu_pane_g1_ParamLimits

0x687d,	// (0x00055018) cell_vitu2_itu_pane_g2_ParamLimits

0x687d,	// (0x00055018) cell_vitu2_itu_pane_g2

0x0001,

0xf92e,	// (0x0005e0c9) cell_vitu2_itu_pane_g_ParamLimits

0xf92e,	// (0x0005e0c9) cell_vitu2_itu_pane_g

0xad09,	// (0x000594a4) bg_vkb2_func_pane_cp05_ParamLimits

0xad09,	// (0x000594a4) bg_vkb2_func_pane_cp05

0xad09,	// (0x000594a4) bg_vkb2_func_pane_cp03

0xad09,	// (0x000594a4) bg_vkb2_func_pane_cp04

0xad09,	// (0x000594a4) bg_vkb2_func_pane_cp10_ParamLimits

0xad09,	// (0x000594a4) bg_vkb2_func_pane_cp10

0x01e6,	// (0x0004e981) bg_vkb2_func_pane_cp08

0x74bf,	// (0x00055c5a) bg_vkb2_func_pane_cp06

0x74cd,	// (0x00055c68) bg_vkb2_func_pane_cp07

0xdca1,	// (0x0005c43c) bg_vkb2_func_pane_cp11_ParamLimits

0xdca1,	// (0x0005c43c) bg_vkb2_func_pane_cp11

0xdcb6,	// (0x0005c451) bg_vkb2_func_pane_cp12_ParamLimits

0xdcb6,	// (0x0005c451) bg_vkb2_func_pane_cp12

0x9a5a,	// (0x000581f5) bg_vkb2_func_pane_cp09

0xd7a3,	// (0x0005bf3e) bg_vkb2_func_pane_g1

0xadd1,	// (0x0005956c) bg_vkb2_func_pane_g2

0xd7ab,	// (0x0005bf46) bg_vkb2_func_pane_g3

0xd7b3,	// (0x0005bf4e) bg_vkb2_func_pane_g4

0xd9d6,	// (0x0005c171) bg_vkb2_func_pane_g5

0xd7cb,	// (0x0005bf66) bg_vkb2_func_pane_g6

0xd7d3,	// (0x0005bf6e) bg_vkb2_func_pane_g7

0xd7c3,	// (0x0005bf5e) bg_vkb2_func_pane_g8

0xadb1,	// (0x0005954c) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x0005e2ce) bg_vkb2_func_pane_g

0x7822,	// (0x00055fbd) blid2_tripm_pane_g6_ParamLimits

0x7822,	// (0x00055fbd) blid2_tripm_pane_g6

0xd6b7,	// (0x0005be52) mp4_progress_pane_g1

0x7899,	// (0x00056034) blid2_tripm_values_pane_ParamLimits

0x7899,	// (0x00056034) blid2_tripm_values_pane

0x798e,	// (0x00056129) blid2_tripm_values_pane_t1

0x799c,	// (0x00056137) blid2_tripm_values_pane_t2

0x79aa,	// (0x00056145) blid2_tripm_values_pane_t3

0x79b8,	// (0x00056153) blid2_tripm_values_pane_t4

0x79c6,	// (0x00056161) blid2_tripm_values_pane_t5

0x79d4,	// (0x0005616f) blid2_tripm_values_pane_t6

0x79e2,	// (0x0005617d) blid2_tripm_values_pane_t7

0x79f0,	// (0x0005618b) blid2_tripm_values_pane_t8

0x79fe,	// (0x00056199) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x0005e2e1) blid2_tripm_values_pane_t

0x1cfb,	// (0x00050496) call_video_pane_t1_ParamLimits

0x1d15,	// (0x000504b0) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0005da05) call_video_pane_t_ParamLimits

0xfe00,	// (0x0004e59b) msg_header_pane_g1_ParamLimits

0xb738,	// (0x00059ed3) msg_header_pane_g2_ParamLimits

0xb738,	// (0x00059ed3) msg_header_pane_g2

0x0001,

0xf48b,	// (0x0005dc26) msg_header_pane_g_ParamLimits

0xf48b,	// (0x0005dc26) msg_header_pane_g

0xa251,	// (0x000589ec) main_clock2_pane_ParamLimits

0x578a,	// (0x00053f25) grid_clock2_toolbar_pane_ParamLimits

0x578a,	// (0x00053f25) grid_clock2_toolbar_pane

0x578a,	// (0x00053f25) listscroll_clock2_pane_ParamLimits

0x578a,	// (0x00053f25) listscroll_clock2_pane

0x5869,	// (0x00054004) main_clock2_pane_t3_ParamLimits

0x5869,	// (0x00054004) main_clock2_pane_t3

0x588c,	// (0x00054027) main_clock2_pane_t4_ParamLimits

0x588c,	// (0x00054027) main_clock2_pane_t4

0xddbe,	// (0x0005c559) cell_clock2_toolbar_pane

0xddc6,	// (0x0005c561) cell_clock2_toolbar_pane_cp01

0xddc6,	// (0x0005c561) cell_clock2_toolbar_pane_cp02

0xddce,	// (0x0005c569) cell_clock2_toolbar_pane_cp03

0xddd6,	// (0x0005c571) list_clock2_pane

0xb37f,	// (0x00059b1a) scroll_pane_cp10

0xddde,	// (0x0005c579) list_single_clock2_pane_ParamLimits

0xddde,	// (0x0005c579) list_single_clock2_pane

0xa465,	// (0x00058c00) list_highlight_pane_cp08

0xddeb,	// (0x0005c586) list_single_clock2_pane_t1

0xddf9,	// (0x0005c594) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x0005e2f4) list_single_clock2_pane_t

0x9a5a,	// (0x000581f5) bg_button_pane_cp10

0xde07,	// (0x0005c5a2) cell_clock2_toolbar_pane_g1

0x3623,	// (0x00051dbe) aid_main_viewer_pane_g1_ParamLimits

0x3623,	// (0x00051dbe) aid_main_viewer_pane_g1

0x3631,	// (0x00051dcc) aid_main_viewer_pane_g2_ParamLimits

0x3631,	// (0x00051dcc) aid_main_viewer_pane_g2

0x363f,	// (0x00051dda) aid_main_viewer_pane_g3_ParamLimits

0x363f,	// (0x00051dda) aid_main_viewer_pane_g3

0x364e,	// (0x00051de9) aid_main_viewer_pane_g4_ParamLimits

0x364e,	// (0x00051de9) aid_main_viewer_pane_g4

0x0003,

0xf49c,	// (0x0005dc37) aid_main_viewer_pane_g_ParamLimits

0xf49c,	// (0x0005dc37) aid_main_viewer_pane_g

0x3fa9,	// (0x00052744) main_calc_pane_ParamLimits

0x3fbd,	// (0x00052758) main_dialer2_pane_ParamLimits

0x9a5a,	// (0x000581f5) main_cam6_pane

0x9a5a,	// (0x000581f5) main_vid6_pane

0x5796,	// (0x00053f31) listscroll_gen_pane_cp06_ParamLimits

0x5796,	// (0x00053f31) listscroll_gen_pane_cp06

0x58af,	// (0x0005404a) main_clock2_pane_t5_ParamLimits

0x58af,	// (0x0005404a) main_clock2_pane_t5

0x590d,	// (0x000540a8) aid_call2_pane_cp10_ParamLimits

0x591f,	// (0x000540ba) aid_call_pane_cp10_ParamLimits

0xb3ee,	// (0x00059b89) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb3ee,	// (0x00059b89) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5931,	// (0x000540cc) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5931,	// (0x000540cc) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb3ee,	// (0x00059b89) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d7,	// (0x0005df72) popup_clock_analogue_window_cp10_g_ParamLimits

0x5947,	// (0x000540e2) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5feb,	// (0x00054786) cell_dialer2_keypad_pane_g2_ParamLimits

0x5feb,	// (0x00054786) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c1,	// (0x0005e05c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c1,	// (0x0005e05c) cell_dialer2_keypad_pane_g

0x6007,	// (0x000547a2) cell_dialer2_keypad_pane_t1

0x6c18,	// (0x000553b3) main_cset_text2_pane_ParamLimits

0x6c18,	// (0x000553b3) main_cset_text2_pane

0xdc09,	// (0x0005c3a4) area_vitu2_query_pane_g1_ParamLimits

0x01ad,	// (0x0004e948) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x0005e211) area_vitu2_query_pane_g_ParamLimits

0x749b,	// (0x00055c36) area_vitu2_query_pane_t7_ParamLimits

0x749b,	// (0x00055c36) area_vitu2_query_pane_t7

0x74bf,	// (0x00055c5a) bg_button_pane_cp018_ParamLimits

0x74cd,	// (0x00055c68) bg_button_pane_cp021_ParamLimits

0x01e6,	// (0x0004e981) bg_button_pane_cp022_ParamLimits

0x01e6,	// (0x0004e981) bg_vkb2_func_pane_cp08_ParamLimits

0x74bf,	// (0x00055c5a) bg_vkb2_func_pane_cp06_ParamLimits

0x74cd,	// (0x00055c68) bg_vkb2_func_pane_cp07_ParamLimits

0x01f7,	// (0x0004e992) input_focus_pane_cp09_ParamLimits

0xacd0,	// (0x0005946b) cam6_autofocus_pane_ParamLimits

0xacd0,	// (0x0005946b) cam6_autofocus_pane

0x7a0c,	// (0x000561a7) cam6_image_uncrop_pane_ParamLimits

0x7a0c,	// (0x000561a7) cam6_image_uncrop_pane

0x7a1b,	// (0x000561b6) cam6_indi_pane_ParamLimits

0x7a1b,	// (0x000561b6) cam6_indi_pane

0x7a31,	// (0x000561cc) cam6_mode_pane_ParamLimits

0x7a31,	// (0x000561cc) cam6_mode_pane

0x7a43,	// (0x000561de) cam6_timer_pane_ParamLimits

0x7a43,	// (0x000561de) cam6_timer_pane

0x7a4f,	// (0x000561ea) cam6_zoom_pane_ParamLimits

0x7a4f,	// (0x000561ea) cam6_zoom_pane

0x7a5d,	// (0x000561f8) cam6_mode_pane_g1_ParamLimits

0x7a5d,	// (0x000561f8) cam6_mode_pane_g1

0x7a6d,	// (0x00056208) cam6_mode_pane_g2_ParamLimits

0x7a6d,	// (0x00056208) cam6_mode_pane_g2

0x7a7d,	// (0x00056218) cam6_mode_pane_g3_ParamLimits

0x7a7d,	// (0x00056218) cam6_mode_pane_g3

0x7a8d,	// (0x00056228) cam6_mode_pane_g4_ParamLimits

0x7a8d,	// (0x00056228) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x0005e2f9) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x0005e2f9) cam6_mode_pane_g

0xde0f,	// (0x0005c5aa) bg_tb_trans_pane_cp08_ParamLimits

0xde0f,	// (0x0005c5aa) bg_tb_trans_pane_cp08

0xde1d,	// (0x0005c5b8) cam6_battery_pane_ParamLimits

0xde1d,	// (0x0005c5b8) cam6_battery_pane

0xde33,	// (0x0005c5ce) cam6_indi_pane_g1_ParamLimits

0xde33,	// (0x0005c5ce) cam6_indi_pane_g1

0xde45,	// (0x0005c5e0) cam6_indi_pane_g2_ParamLimits

0xde45,	// (0x0005c5e0) cam6_indi_pane_g2

0xde57,	// (0x0005c5f2) cam6_indi_pane_g3_ParamLimits

0xde57,	// (0x0005c5f2) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x0005e302) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x0005e302) cam6_indi_pane_g

0xde69,	// (0x0005c604) cam6_indi_pane_t1_ParamLimits

0xde69,	// (0x0005c604) cam6_indi_pane_t1

0x6624,	// (0x00054dbf) cam6_autofocus_pane_g1

0x662c,	// (0x00054dc7) cam6_autofocus_pane_g2

0x6634,	// (0x00054dcf) cam6_autofocus_pane_g3

0x663c,	// (0x00054dd7) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x0005e309) cam6_autofocus_pane_g

0xde8f,	// (0x0005c62a) cam6_timer_pane_g1

0xde97,	// (0x0005c632) cam6_timer_pane_t1

0xdea5,	// (0x0005c640) cam6_zoom_cont_pane

0xdead,	// (0x0005c648) cam6_zoom_pane_g1

0xdeb5,	// (0x0005c650) cam6_zoom_pane_g2

0x7a9d,	// (0x00056238) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x0005e312) cam6_zoom_pane_g

0xce04,	// (0x0005b59f) cam6_battery_pane_g1

0xce04,	// (0x0005b59f) cam6_battery_pane_g2

0x0001,

0xf6df,	// (0x0005de7a) cam6_battery_pane_g

0xdebd,	// (0x0005c658) cam6_zoom_cont_pane_g1

0xdec6,	// (0x0005c661) cam6_zoom_cont_pane_g2

0xdecf,	// (0x0005c66a) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x0005e319) cam6_zoom_cont_pane_g

0x7aba,	// (0x00056255) cam6_mode_pane_cp_ParamLimits

0x7aba,	// (0x00056255) cam6_mode_pane_cp

0x7a4f,	// (0x000561ea) cam6_zoom_pane_cp_ParamLimits

0x7a4f,	// (0x000561ea) cam6_zoom_pane_cp

0x7acc,	// (0x00056267) vid6_image_uncrop_cif_pane_ParamLimits

0x7acc,	// (0x00056267) vid6_image_uncrop_cif_pane

0x7adc,	// (0x00056277) vid6_image_uncrop_nhd_pane_ParamLimits

0x7adc,	// (0x00056277) vid6_image_uncrop_nhd_pane

0x7a0c,	// (0x000561a7) vid6_image_uncrop_vga_pane_ParamLimits

0x7a0c,	// (0x000561a7) vid6_image_uncrop_vga_pane

0x7aeb,	// (0x00056286) vid6_image_uncrop_wvga_pane_ParamLimits

0x7aeb,	// (0x00056286) vid6_image_uncrop_wvga_pane

0x7afa,	// (0x00056295) vid6_indi_pane_ParamLimits

0x7afa,	// (0x00056295) vid6_indi_pane

0xde0f,	// (0x0005c5aa) bg_tb_trans_pane_cp09_ParamLimits

0xde0f,	// (0x0005c5aa) bg_tb_trans_pane_cp09

0xdee7,	// (0x0005c682) cam6_battery_pane_cp_ParamLimits

0xdee7,	// (0x0005c682) cam6_battery_pane_cp

0xdef3,	// (0x0005c68e) vid6_indi_pane_g1_ParamLimits

0xdef3,	// (0x0005c68e) vid6_indi_pane_g1

0xdf05,	// (0x0005c6a0) vid6_indi_pane_g2_ParamLimits

0xdf05,	// (0x0005c6a0) vid6_indi_pane_g2

0xdf17,	// (0x0005c6b2) vid6_indi_pane_g3_ParamLimits

0xdf17,	// (0x0005c6b2) vid6_indi_pane_g3

0xdf2e,	// (0x0005c6c9) vid6_indi_pane_g4_ParamLimits

0xdf2e,	// (0x0005c6c9) vid6_indi_pane_g4

0xdf45,	// (0x0005c6e0) vid6_indi_pane_g5_ParamLimits

0xdf45,	// (0x0005c6e0) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x0005e320) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x0005e320) vid6_indi_pane_g

0xdf5f,	// (0x0005c6fa) vid6_indi_pane_t1_ParamLimits

0xdf5f,	// (0x0005c6fa) vid6_indi_pane_t1

0xdf75,	// (0x0005c710) vid6_indi_pane_t2_ParamLimits

0xdf75,	// (0x0005c710) vid6_indi_pane_t2

0xdf9d,	// (0x0005c738) vid6_indi_pane_t3_ParamLimits

0xdf9d,	// (0x0005c738) vid6_indi_pane_t3

0xdfc5,	// (0x0005c760) vid6_indi_pane_t4_ParamLimits

0xdfc5,	// (0x0005c760) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x0005e32b) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x0005e32b) vid6_indi_pane_t

0xdfe9,	// (0x0005c784) wait_bar_pane_cp08

0x7b12,	// (0x000562ad) main_cset_text2_pane_t1_ParamLimits

0x7b12,	// (0x000562ad) main_cset_text2_pane_t1

0x7aa5,	// (0x00056240) listscroll_gen_pane_cp06_t1_ParamLimits

0x7aa5,	// (0x00056240) listscroll_gen_pane_cp06_t1

0x9a5a,	// (0x000581f5) main_cam6_set_pane

0xd02b,	// (0x0005b7c6) bg_tb_trans_pane_cp06_ParamLimits

0xab4c,	// (0x000592e7) cam4_indicators_pane_g1_ParamLimits

0xab5d,	// (0x000592f8) cam4_indicators_pane_g2_ParamLimits

0xf8fe,	// (0x0005e099) cam4_indicators_pane_g_ParamLimits

0xab75,	// (0x00059310) cam4_indicators_pane_t1_ParamLimits

0xad09,	// (0x000594a4) bg_tb_trans_pane_cp07_ParamLimits

0xaba3,	// (0x0005933e) vid4_indicators_pane_g1_ParamLimits

0xabb9,	// (0x00059354) vid4_indicators_pane_g2_ParamLimits

0xabcd,	// (0x00059368) vid4_indicators_pane_g3_ParamLimits

0xabe0,	// (0x0005937b) vid4_indicators_pane_g4_ParamLimits

0xf910,	// (0x0005e0ab) vid4_indicators_pane_g_ParamLimits

0xabfe,	// (0x00059399) vid4_indicators_pane_t1_ParamLimits

0xac86,	// (0x00059421) vid4_progress_pane_g1_ParamLimits

0xac96,	// (0x00059431) vid4_progress_pane_g2_ParamLimits

0x7609,	// (0x00055da4) vid4_progress_pane_g3_ParamLimits

0xab5d,	// (0x000592f8) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x0005e25c) vid4_progress_pane_g_ParamLimits

0x761b,	// (0x00055db6) vid4_progress_pane_t1_ParamLimits

0xaca6,	// (0x00059441) vid4_progress_pane_t2_ParamLimits

0xacbb,	// (0x00059456) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0005e267) vid4_progress_pane_t_ParamLimits

0x7633,	// (0x00055dce) wait_bar_pane_cp07_ParamLimits

0x7b33,	// (0x000562ce) main_cam6_set_pane_g2_ParamLimits

0x7b33,	// (0x000562ce) main_cam6_set_pane_g2

0x7b59,	// (0x000562f4) main_cset6_listscroll_pane_ParamLimits

0x7b59,	// (0x000562f4) main_cset6_listscroll_pane

0x7b77,	// (0x00056312) main_cset6_slider_pane_ParamLimits

0x7b77,	// (0x00056312) main_cset6_slider_pane

0x7b8d,	// (0x00056328) main_cset6_text2_pane_ParamLimits

0x7b8d,	// (0x00056328) main_cset6_text2_pane

0xdff8,	// (0x0005c793) main_cset6_text_pane

0xe000,	// (0x0005c79b) main_cset_list_pane_copy1_ParamLimits

0xe000,	// (0x0005c79b) main_cset_list_pane_copy1

0xe010,	// (0x0005c7ab) scroll_pane_cp028_copy1

0x7b9b,	// (0x00056336) cset_list_set_pane_copy1

0x7baf,	// (0x0005634a) aid_position_infowindow_above_copy1

0x7bb7,	// (0x00056352) aid_position_infowindow_below_copy1

0x022e,	// (0x0004e9c9) cset_list_set_pane_g1_copy1

0x0236,	// (0x0004e9d1) cset_list_set_pane_g3_copy1_ParamLimits

0x0236,	// (0x0004e9d1) cset_list_set_pane_g3_copy1

0x0245,	// (0x0004e9e0) cset_list_set_pane_t1_copy1_ParamLimits

0x0245,	// (0x0004e9e0) cset_list_set_pane_t1_copy1

0xad09,	// (0x000594a4) list_highlight_pane_cp021_copy1_ParamLimits

0xad09,	// (0x000594a4) list_highlight_pane_cp021_copy1

0xe019,	// (0x0005c7b4) cset6_slider_pane_ParamLimits

0xe019,	// (0x0005c7b4) cset6_slider_pane

0xe045,	// (0x0005c7e0) main_cset6_slider_pane_g1_ParamLimits

0xe045,	// (0x0005c7e0) main_cset6_slider_pane_g1

0x7bbf,	// (0x0005635a) main_cset6_slider_pane_g2_ParamLimits

0x7bbf,	// (0x0005635a) main_cset6_slider_pane_g2

0xe06d,	// (0x0005c808) main_cset6_slider_pane_g3_ParamLimits

0xe06d,	// (0x0005c808) main_cset6_slider_pane_g3

0x7be7,	// (0x00056382) main_cset6_slider_pane_g4_ParamLimits

0x7be7,	// (0x00056382) main_cset6_slider_pane_g4

0x7bf3,	// (0x0005638e) main_cset6_slider_pane_g5_ParamLimits

0x7bf3,	// (0x0005638e) main_cset6_slider_pane_g5

0xd8d6,	// (0x0005c071) main_cset6_slider_pane_g7_ParamLimits

0xd8d6,	// (0x0005c071) main_cset6_slider_pane_g7

0xd8e2,	// (0x0005c07d) main_cset6_slider_pane_g8_ParamLimits

0xd8e2,	// (0x0005c07d) main_cset6_slider_pane_g8

0x6cc7,	// (0x00055462) main_cset6_slider_pane_g9_ParamLimits

0x6cc7,	// (0x00055462) main_cset6_slider_pane_g9

0x6cd3,	// (0x0005546e) main_cset6_slider_pane_g10_ParamLimits

0x6cd3,	// (0x0005546e) main_cset6_slider_pane_g10

0x6cdf,	// (0x0005547a) main_cset6_slider_pane_g11_ParamLimits

0x6cdf,	// (0x0005547a) main_cset6_slider_pane_g11

0x6ceb,	// (0x00055486) main_cset6_slider_pane_g12_ParamLimits

0x6ceb,	// (0x00055486) main_cset6_slider_pane_g12

0x6cf7,	// (0x00055492) main_cset6_slider_pane_g13_ParamLimits

0x6cf7,	// (0x00055492) main_cset6_slider_pane_g13

0x6d03,	// (0x0005549e) main_cset6_slider_pane_g14_ParamLimits

0x6d03,	// (0x0005549e) main_cset6_slider_pane_g14

0x7c01,	// (0x0005639c) main_cset6_slider_pane_g15_ParamLimits

0x7c01,	// (0x0005639c) main_cset6_slider_pane_g15

0x6d27,	// (0x000554c2) main_cset6_slider_pane_g16_ParamLimits

0x6d27,	// (0x000554c2) main_cset6_slider_pane_g16

0x6d35,	// (0x000554d0) main_cset6_slider_pane_g17_ParamLimits

0x6d35,	// (0x000554d0) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x0005e334) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x0005e334) main_cset6_slider_pane_g

0xe079,	// (0x0005c814) main_cset6_slider_pane_t1_ParamLimits

0xe079,	// (0x0005c814) main_cset6_slider_pane_t1

0x7c31,	// (0x000563cc) main_cset6_slider_pane_t2_ParamLimits

0x7c31,	// (0x000563cc) main_cset6_slider_pane_t2

0x7c5c,	// (0x000563f7) main_cset6_slider_pane_t3_ParamLimits

0x7c5c,	// (0x000563f7) main_cset6_slider_pane_t3

0x7c87,	// (0x00056422) main_cset6_slider_pane_t4_ParamLimits

0x7c87,	// (0x00056422) main_cset6_slider_pane_t4

0x7cb4,	// (0x0005644f) main_cset6_slider_pane_t5_ParamLimits

0x7cb4,	// (0x0005644f) main_cset6_slider_pane_t5

0xe0ba,	// (0x0005c855) main_cset6_slider_pane_t7_ParamLimits

0xe0ba,	// (0x0005c855) main_cset6_slider_pane_t7

0x7ce1,	// (0x0005647c) main_cset6_slider_pane_t8_ParamLimits

0x7ce1,	// (0x0005647c) main_cset6_slider_pane_t8

0x7d05,	// (0x000564a0) main_cset6_slider_pane_t9_ParamLimits

0x7d05,	// (0x000564a0) main_cset6_slider_pane_t9

0x7d29,	// (0x000564c4) main_cset6_slider_pane_t10_ParamLimits

0x7d29,	// (0x000564c4) main_cset6_slider_pane_t10

0x7d4d,	// (0x000564e8) main_cset6_slider_pane_t11_ParamLimits

0x7d4d,	// (0x000564e8) main_cset6_slider_pane_t11

0xe0f0,	// (0x0005c88b) main_cset6_slider_pane_t14_ParamLimits

0xe0f0,	// (0x0005c88b) main_cset6_slider_pane_t14

0xe129,	// (0x0005c8c4) main_cset6_slider_pane_t15_ParamLimits

0xe129,	// (0x0005c8c4) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0005e359) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0005e359) main_cset6_slider_pane_t

0xe162,	// (0x0005c8fd) cset_slider_pane_g1_copy1

0xe16b,	// (0x0005c906) cset_slider_pane_g2_copy1

0xe174,	// (0x0005c90f) cset_slider_pane_g3_copy1

0x9a5a,	// (0x000581f5) bg_popup_sub_pane_cp011_copy1

0xe17d,	// (0x0005c918) main_cset_text_pane_g1_copy1

0xda25,	// (0x0005c1c0) main_cset_text_pane_t1_copy1

0xda33,	// (0x0005c1ce) main_cset_text_pane_t2_copy1

0xda41,	// (0x0005c1dc) main_cset_text_pane_t3_copy1

0xda4f,	// (0x0005c1ea) main_cset_text_pane_t4_copy1

0xda5d,	// (0x0005c1f8) main_cset_text_pane_t5_copy1

0xe185,	// (0x0005c920) main_cset_text_pane_t6_copy1

0xe193,	// (0x0005c92e) main_cset_text_pane_t7_copy1

0x7b12,	// (0x000562ad) main_cset_text2_pane_t1_copy1

0xad09,	// (0x000594a4) main_ncimui_pane

0x424b,	// (0x000529e6) popup_query_ncimui_window_ParamLimits

0x424b,	// (0x000529e6) popup_query_ncimui_window

0x4f05,	// (0x000536a0) field_cale_ev2_pane_g4_ParamLimits

0x4f05,	// (0x000536a0) field_cale_ev2_pane_g4

0x5eb6,	// (0x00054651) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5eb6,	// (0x00054651) cell_video_dialer_keypad_pane_g2

0x0001,

0xf898,	// (0x0005e033) cell_video_dialer_keypad_pane_g_ParamLimits

0xf898,	// (0x0005e033) cell_video_dialer_keypad_pane_g

0x5ece,	// (0x00054669) cell_video_dialer_keypad_pane_t1

0x9a5a,	// (0x000581f5) bg_popup_window_pane_cp012

0xb26b,	// (0x00059a06) heading_pane_cp06

0xe1bf,	// (0x0005c95a) ncim_query_content_pane

0x9a5a,	// (0x000581f5) bg_popup_heading_pane_cp01

0xe1c7,	// (0x0005c962) ncim_heading_pane_t1

0xe1d5,	// (0x0005c970) ncim_indicator_popup_pane

0xe1e7,	// (0x0005c982) ncim_query_button_pane

0xe1fd,	// (0x0005c998) ncim_query_content_pane_t1

0xe20f,	// (0x0005c9aa) ncim_query_content_pane_t2

0x0005,

0xfc02,	// (0x0005e39d) ncim_query_content_pane_t

0xe249,	// (0x0005c9e4) ncim_query_list_pane

0xe25b,	// (0x0005c9f6) ncim_query_popup_pane

0xe1d5,	// (0x0005c970) ncim_indicator_popup_pane_ParamLimits

0x7e9c,	// (0x00056637) ncim_query_content_pane_g1_ParamLimits

0x7e9c,	// (0x00056637) ncim_query_content_pane_g1

0xe1fd,	// (0x0005c998) ncim_query_content_pane_t1_ParamLimits

0xe20f,	// (0x0005c9aa) ncim_query_content_pane_t2_ParamLimits

0x7ea8,	// (0x00056643) ncim_query_content_pane_t3_ParamLimits

0x7ea8,	// (0x00056643) ncim_query_content_pane_t3

0x7ed0,	// (0x0005666b) ncim_query_content_pane_t4_ParamLimits

0x7ed0,	// (0x0005666b) ncim_query_content_pane_t4

0x7ef8,	// (0x00056693) ncim_query_content_pane_t5_ParamLimits

0x7ef8,	// (0x00056693) ncim_query_content_pane_t5

0xe221,	// (0x0005c9bc) ncim_query_content_pane_t6_ParamLimits

0xe221,	// (0x0005c9bc) ncim_query_content_pane_t6

0xfc02,	// (0x0005e39d) ncim_query_content_pane_t_ParamLimits

0xe249,	// (0x0005c9e4) ncim_query_list_pane_ParamLimits

0xe25b,	// (0x0005c9f6) ncim_query_popup_pane_ParamLimits

0xe26f,	// (0x0005ca0a) wait_bar_pane_cp04

0x9a5a,	// (0x000581f5) input_focus_pane_cp011

0xe277,	// (0x0005ca12) ncim_query_popup_pane_t1

0xe285,	// (0x0005ca20) ncim_list_query_list_pane_ParamLimits

0xe285,	// (0x0005ca20) ncim_list_query_list_pane

0x9a5a,	// (0x000581f5) bg_button_pane_cp027

0xe298,	// (0x0005ca33) ncim_query_button_pane_g1

0x9a5a,	// (0x000581f5) list_highlight_pane_cp012

0xe2a2,	// (0x0005ca3d) ncim_list_query_list_pane_g1

0xe2aa,	// (0x0005ca45) ncim_list_query_list_pane_t1

0xab69,	// (0x00059304) cam4_indicators_pane_g3_ParamLimits

0xab69,	// (0x00059304) cam4_indicators_pane_g3

0xabec,	// (0x00059387) vid4_indicators_pane_g5_ParamLimits

0xabec,	// (0x00059387) vid4_indicators_pane_g5

0xab69,	// (0x00059304) vid4_progress_pane_g5_ParamLimits

0xab69,	// (0x00059304) vid4_progress_pane_g5

0x7d87,	// (0x00056522) main_ncimui_pane_g1

0x7df0,	// (0x0005658b) ncimui_group_query_pane_ParamLimits

0x7df0,	// (0x0005658b) ncimui_group_query_pane

0x7e38,	// (0x000565d3) ncimui_list_pane_ParamLimits

0x7e38,	// (0x000565d3) ncimui_list_pane

0x7e5f,	// (0x000565fa) ncimui_text_pane_ParamLimits

0x7e5f,	// (0x000565fa) ncimui_text_pane

0x7f20,	// (0x000566bb) ncimui_text_pane_t1_ParamLimits

0x7f20,	// (0x000566bb) ncimui_text_pane_t1

0xe2b8,	// (0x0005ca53) ncimui_list_single_graphic_pane_ParamLimits

0xe2b8,	// (0x0005ca53) ncimui_list_single_graphic_pane

0x7f3e,	// (0x000566d9) ncimui_query_pane_ParamLimits

0x7f3e,	// (0x000566d9) ncimui_query_pane

0x9a5a,	// (0x000581f5) list_highlight_pane_cp013

0xe2c8,	// (0x0005ca63) ncim_list_query_list_pane_t1_copy1

0xe2a2,	// (0x0005ca3d) ncim_list_single_graphic_pane_g1

0x7f51,	// (0x000566ec) ncim_query_button_pane_cp01

0x7f5d,	// (0x000566f8) ncim_query_entry_pane_ParamLimits

0x7f5d,	// (0x000566f8) ncim_query_entry_pane

0x7f70,	// (0x0005670b) ncimui_query_pane_g1

0x7f7c,	// (0x00056717) ncimui_query_pane_t1_ParamLimits

0x7f7c,	// (0x00056717) ncimui_query_pane_t1

0xad09,	// (0x000594a4) input_focus_pane_cp012

0xe2d6,	// (0x0005ca71) ncim_query_entry_pane_t1

0xa251,	// (0x000589ec) main_im_pane_ParamLimits

0xad09,	// (0x000594a4) main_mobtv_pane_ParamLimits

0xad09,	// (0x000594a4) main_mobtv_pane

0x7c19,	// (0x000563b4) main_cset6_slider_pane_g18_ParamLimits

0x7c19,	// (0x000563b4) main_cset6_slider_pane_g18

0x7c25,	// (0x000563c0) main_cset6_slider_pane_g19_ParamLimits

0x7c25,	// (0x000563c0) main_cset6_slider_pane_g19

0xacde,	// (0x00059479) bg_main_mobtv_pane_ParamLimits

0xacde,	// (0x00059479) bg_main_mobtv_pane

0x7f95,	// (0x00056730) main_mobtv_info_pane

0x7fa0,	// (0x0005673b) main_mobtv_loading_pane_ParamLimits

0x7fa0,	// (0x0005673b) main_mobtv_loading_pane

0xe2e8,	// (0x0005ca83) main_mobtv_pg_channel_list_pane

0xe2f2,	// (0x0005ca8d) main_mobtv_pg_hdr_pane

0x7fad,	// (0x00056748) main_mobtv_programe_curr_pane_ParamLimits

0x7fad,	// (0x00056748) main_mobtv_programe_curr_pane

0x7fba,	// (0x00056755) main_mobtv_programe_next_pane_ParamLimits

0x7fba,	// (0x00056755) main_mobtv_programe_next_pane

0xe2fb,	// (0x0005ca96) popup_mobtv_noti_window

0xce04,	// (0x0005b59f) main_tv_pg_hdr_pane_g1

0xe305,	// (0x0005caa0) main_tv_pg_hdr_pane_g2

0xe30d,	// (0x0005caa8) main_tv_pg_hdr_pane_g3

0xe315,	// (0x0005cab0) main_tv_pg_hdr_pane_g4

0xe31d,	// (0x0005cab8) main_tv_pg_hdr_pane_g5

0xe327,	// (0x0005cac2) main_tv_pg_hdr_pane_g6

0xe331,	// (0x0005cacc) main_tv_pg_hdr_pane_g7

0xe33b,	// (0x0005cad6) main_tv_pg_hdr_pane_g8

0xe345,	// (0x0005cae0) main_tv_pg_hdr_pane_g9

0xe34f,	// (0x0005caea) main_tv_pg_hdr_pane_g10

0xe359,	// (0x0005caf4) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0f,	// (0x0005e3aa) main_tv_pg_hdr_pane_g

0xe363,	// (0x0005cafe) main_tv_pg_hdr_pane_t1

0xe371,	// (0x0005cb0c) main_tv_pg_hdr_pane_t2

0xe37f,	// (0x0005cb1a) main_tv_pg_hdr_pane_t3

0xe38f,	// (0x0005cb2a) main_tv_pg_hdr_pane_t4

0xe39f,	// (0x0005cb3a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc26,	// (0x0005e3c1) main_tv_pg_hdr_pane_t

0xe3af,	// (0x0005cb4a) single_mobtv_pg_channel_pane_ParamLimits

0xe3af,	// (0x0005cb4a) single_mobtv_pg_channel_pane

0xe3c1,	// (0x0005cb5c) single_mobtv_pg_channel_table_pane

0xe3ca,	// (0x0005cb65) single_mobtv_pg_channel_thumb_pane

0xe3d3,	// (0x0005cb6e) single_tv_pg_channel_pane_g1

0xe3dc,	// (0x0005cb77) single_tv_pg_channel_pane_g2

0x0001,

0xfc31,	// (0x0005e3cc) single_tv_pg_channel_pane_g

0xd02b,	// (0x0005b7c6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd02b,	// (0x0005b7c6) bg_single_mobtv_pg_channel_thumb_pane

0xe3e5,	// (0x0005cb80) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe3e5,	// (0x0005cb80) single_mobtv_pg_channel_thumb_pane_g1

0xe3f3,	// (0x0005cb8e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe3f3,	// (0x0005cb8e) single_mobtv_pg_channel_thumb_pane_g2

0xe3ff,	// (0x0005cb9a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe3ff,	// (0x0005cb9a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc36,	// (0x0005e3d1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc36,	// (0x0005e3d1) single_mobtv_pg_channel_thumb_pane_g

0xe40b,	// (0x0005cba6) single_mobtv_pg_channel_thumb_pane_t1

0xe419,	// (0x0005cbb4) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3d,	// (0x0005e3d8) single_mobtv_pg_channel_thumb_pane_t

0xce04,	// (0x0005b59f) bg_single_mobtv_pg_channel_table_pane_g1

0xce04,	// (0x0005b59f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6df,	// (0x0005de7a) bg_single_mobtv_pg_channel_table_pane_g

0xe427,	// (0x0005cbc2) single_mobtv_pg_channel_table_pane_t1

0xe435,	// (0x0005cbd0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc42,	// (0x0005e3dd) single_mobtv_pg_channel_table_pane_t

0x7fcf,	// (0x0005676a) main_mobtv_info_pane_g1_ParamLimits

0x7fcf,	// (0x0005676a) main_mobtv_info_pane_g1

0x7fed,	// (0x00056788) main_mobtv_info_pane_t1_ParamLimits

0x7fed,	// (0x00056788) main_mobtv_info_pane_t1

0x8065,	// (0x00056800) main_mobtv_info_pane_t2_ParamLimits

0x8065,	// (0x00056800) main_mobtv_info_pane_t2

0x0002,

0xfc4c,	// (0x0005e3e7) main_mobtv_info_pane_t_ParamLimits

0xfc4c,	// (0x0005e3e7) main_mobtv_info_pane_t

0x80f6,	// (0x00056891) wait_bar_pane_cp05

0x8108,	// (0x000568a3) main_mobtv_loading_pane_g1_ParamLimits

0x8108,	// (0x000568a3) main_mobtv_loading_pane_g1

0x8119,	// (0x000568b4) main_mobtv_loading_pane_g2_ParamLimits

0x8119,	// (0x000568b4) main_mobtv_loading_pane_g2

0x8125,	// (0x000568c0) main_mobtv_loading_pane_g3_ParamLimits

0x8125,	// (0x000568c0) main_mobtv_loading_pane_g3

0x0002,

0xfc53,	// (0x0005e3ee) main_mobtv_loading_pane_g_ParamLimits

0xfc53,	// (0x0005e3ee) main_mobtv_loading_pane_g

0xe443,	// (0x0005cbde) main_mobtv_loading_pane_t1_ParamLimits

0xe443,	// (0x0005cbde) main_mobtv_loading_pane_t1

0xe45b,	// (0x0005cbf6) main_mobtv_loading_pane_t2_ParamLimits

0xe45b,	// (0x0005cbf6) main_mobtv_loading_pane_t2

0x0001,

0xfc5a,	// (0x0005e3f5) main_mobtv_loading_pane_t_ParamLimits

0xfc5a,	// (0x0005e3f5) main_mobtv_loading_pane_t

0x8138,	// (0x000568d3) wait_bar_pane_cp06_ParamLimits

0x8138,	// (0x000568d3) wait_bar_pane_cp06

0xe47f,	// (0x0005cc1a) main_mobtv_programe_curr_pane_t1

0xe48d,	// (0x0005cc28) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5f,	// (0x0005e3fa) main_mobtv_programe_curr_pane_t

0xe49b,	// (0x0005cc36) main_mobtv_programe_next_pane_t1

0xe4a9,	// (0x0005cc44) main_mobtv_programe_next_pane_t2

0xe4b7,	// (0x0005cc52) main_mobtv_programe_next_pane_t3

0x0002,

0xfc64,	// (0x0005e3ff) main_mobtv_programe_next_pane_t

0x9a5a,	// (0x000581f5) bg_popup_mobtv_noti_window_pane

0xe4c5,	// (0x0005cc60) popup_mobtv_noti_window_g1

0xe4cd,	// (0x0005cc68) popup_mobtv_noti_window_t1

0xe4db,	// (0x0005cc76) popup_mobtv_noti_window_t2

0x0001,

0xfc6b,	// (0x0005e406) popup_mobtv_noti_window_t

0xce04,	// (0x0005b59f) bg_popup_mobtv_noti_window_pane_g1

0x9a5a,	// (0x000581f5) sc_clock_pane

0x9a5a,	// (0x000581f5) main_fs_bigclock_pane

0x7883,	// (0x0005601e) blid2_tripm_pane_t4_ParamLimits

0x7883,	// (0x0005601e) blid2_tripm_pane_t4

0x8147,	// (0x000568e2) sc_clock_pane_g1_ParamLimits

0x8147,	// (0x000568e2) sc_clock_pane_g1

0x8159,	// (0x000568f4) sc_clock_pane_t1_ParamLimits

0x8159,	// (0x000568f4) sc_clock_pane_t1

0x817d,	// (0x00056918) sc_clock_pane_t2_ParamLimits

0x817d,	// (0x00056918) sc_clock_pane_t2

0x8195,	// (0x00056930) sc_clock_pane_t3_ParamLimits

0x8195,	// (0x00056930) sc_clock_pane_t3

0x0004,

0xfc70,	// (0x0005e40b) sc_clock_pane_t_ParamLimits

0xfc70,	// (0x0005e40b) sc_clock_pane_t

0x8f6d,	// (0x00057708) main_fs_bigclock_indicator_pane_ParamLimits

0x8f6d,	// (0x00057708) main_fs_bigclock_indicator_pane

0x825b,	// (0x000569f6) main_fs_bigclock_pane_g1_ParamLimits

0x825b,	// (0x000569f6) main_fs_bigclock_pane_g1

0x8f79,	// (0x00057714) main_fs_bigclock_pane_t1_ParamLimits

0x8f79,	// (0x00057714) main_fs_bigclock_pane_t1

0x8f8b,	// (0x00057726) main_fs_bigclock_pane_t2_ParamLimits

0x8f8b,	// (0x00057726) main_fs_bigclock_pane_t2

0x8f9f,	// (0x0005773a) main_fs_bigclock_pane_t3_ParamLimits

0x8f9f,	// (0x0005773a) main_fs_bigclock_pane_t3

0x0002,

0xfe7a,	// (0x0005e615) main_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0005e615) main_fs_bigclock_pane_t

0xec75,	// (0x0005d410) main_fs_bigclock_indicator_pane_g1

0xe1ef,	// (0x0005c98a) ncim_query_content_pane_g2_ParamLimits

0xe1ef,	// (0x0005c98a) ncim_query_content_pane_g2

0x0001,

0xfbfd,	// (0x0005e398) ncim_query_content_pane_g_ParamLimits

0xfbfd,	// (0x0005e398) ncim_query_content_pane_g

0x81ac,	// (0x00056947) sc_clock_pane_t4_ParamLimits

0x81ac,	// (0x00056947) sc_clock_pane_t4

0xad09,	// (0x000594a4) main_radioblah_pane

0xaadc,	// (0x00059277) cell_call4_button_pane_t1_copy1_ParamLimits

0xaadc,	// (0x00059277) cell_call4_button_pane_t1_copy1

0x7d9f,	// (0x0005653a) main_ncimui_pane_t1_ParamLimits

0x7d9f,	// (0x0005653a) main_ncimui_pane_t1

0x7db9,	// (0x00056554) main_ncimui_pane_t2_ParamLimits

0x7db9,	// (0x00056554) main_ncimui_pane_t2

0x0002,

0xfbf6,	// (0x0005e391) main_ncimui_pane_t_ParamLimits

0xfbf6,	// (0x0005e391) main_ncimui_pane_t

0xe4e9,	// (0x0005cc84) main_radioblah_anim_pane_ParamLimits

0xe4e9,	// (0x0005cc84) main_radioblah_anim_pane

0xe4fa,	// (0x0005cc95) main_radioblah_info_pane_ParamLimits

0xe4fa,	// (0x0005cc95) main_radioblah_info_pane

0xe50e,	// (0x0005cca9) main_radioblah_pane_t1_ParamLimits

0xe50e,	// (0x0005cca9) main_radioblah_pane_t1

0xe555,	// (0x0005ccf0) main_radioblah_pane_t2_ParamLimits

0xe555,	// (0x0005ccf0) main_radioblah_pane_t2

0x0003,

0xfc91,	// (0x0005e42c) main_radioblah_pane_t_ParamLimits

0xfc91,	// (0x0005e42c) main_radioblah_pane_t

0x8404,	// (0x00056b9f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8404,	// (0x00056b9f) main_radioblah_rocker_ctrl_pane

0xe59d,	// (0x0005cd38) main_radioblah_info_pane_t1_ParamLimits

0xe59d,	// (0x0005cd38) main_radioblah_info_pane_t1

0x845c,	// (0x00056bf7) main_radioblah_info_pane_t2_ParamLimits

0x845c,	// (0x00056bf7) main_radioblah_info_pane_t2

0x0003,

0xfc9a,	// (0x0005e435) main_radioblah_info_pane_t_ParamLimits

0xfc9a,	// (0x0005e435) main_radioblah_info_pane_t

0xce04,	// (0x0005b59f) main_radioblah_rocker_ctrl_pane_g1

0x850c,	// (0x00056ca7) main_radioblah_rocker_ctrl_pane_g2

0x8514,	// (0x00056caf) main_radioblah_rocker_ctrl_pane_g3

0x851c,	// (0x00056cb7) main_radioblah_rocker_ctrl_pane_g4

0x8524,	// (0x00056cbf) main_radioblah_rocker_ctrl_pane_g5

0x852c,	// (0x00056cc7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca3,	// (0x0005e43e) main_radioblah_rocker_ctrl_pane_g

0x7b12,	// (0x000562ad) main_cset_text2_pane_t1_copy1_ParamLimits

0xab3a,	// (0x000592d5) cam4_image_uncrop_qvga_pane

0xab8f,	// (0x0005932a) vid4_image_uncrop_qcif_pane

0xacd0,	// (0x0005946b) cam6_image_uncrop_qvga_pane_ParamLimits

0xacd0,	// (0x0005946b) cam6_image_uncrop_qvga_pane

0xded7,	// (0x0005c672) vid6_image_uncrop_qcif_pane_ParamLimits

0xded7,	// (0x0005c672) vid6_image_uncrop_qcif_pane

0x9a5a,	// (0x000581f5) bg_popup_preview_window_pane_cp03

0xe1a1,	// (0x0005c93c) list_cset_text2_pane

0xe1a9,	// (0x0005c944) main_cset6_text2_pane_g1

0xe1b1,	// (0x0005c94c) main_cset6_text2_pane_t1

0xe5d7,	// (0x0005cd72) list_cset_text2_pane_t1_ParamLimits

0xe5d7,	// (0x0005cd72) list_cset_text2_pane_t1

0xad09,	// (0x000594a4) main_radioblah_pane_ParamLimits

0x80e2,	// (0x0005687d) main_mobtv_info_pane_t3_ParamLimits

0x80e2,	// (0x0005687d) main_mobtv_info_pane_t3

0x83f2,	// (0x00056b8d) main_radioblah_pane_g1

0x842c,	// (0x00056bc7) main_radioblah_info_pane_g1

0x84b1,	// (0x00056c4c) main_radioblah_info_pane_t3_ParamLimits

0x84b1,	// (0x00056c4c) main_radioblah_info_pane_t3

0x2cd1,	// (0x0005146c) highlight_cell_cale_month_pane_ParamLimits

0x2cd1,	// (0x0005146c) highlight_cell_cale_month_pane

0x9a5a,	// (0x000581f5) main_phob_fisheye_pane

0xd107,	// (0x0005b8a2) scroll_pane_cp0031_ParamLimits

0xd107,	// (0x0005b8a2) scroll_pane_cp0031

0xdfe9,	// (0x0005c784) wait_bar_pane_cp08_ParamLimits

0x7b9b,	// (0x00056336) cset_list_set_pane_copy1_ParamLimits

0xe5f1,	// (0x0005cd8c) highlight_cell_cale_month_pane_g1

0x8534,	// (0x00056ccf) highlight_cell_cale_month_pane_t1

0xdc5d,	// (0x0005c3f8) list_gen_pane_cp01

0xd8c1,	// (0x0005c05c) scroll_pane_01

0x8542,	// (0x00056cdd) list_single_double_fisheye_pane

0x0330,	// (0x0004eacb) list_double_fisheye_pane_g1_ParamLimits

0x0330,	// (0x0004eacb) list_double_fisheye_pane_g1

0x033c,	// (0x0004ead7) list_double_fisheye_pane_g2_ParamLimits

0x033c,	// (0x0004ead7) list_double_fisheye_pane_g2

0x854b,	// (0x00056ce6) list_double_fisheye_pane_g3_ParamLimits

0x854b,	// (0x00056ce6) list_double_fisheye_pane_g3

0x0004,

0xfcb0,	// (0x0005e44b) list_double_fisheye_pane_g_ParamLimits

0xfcb0,	// (0x0005e44b) list_double_fisheye_pane_g

0x036d,	// (0x0004eb08) list_double_fisheye_pane_t1_ParamLimits

0x036d,	// (0x0004eb08) list_double_fisheye_pane_t1

0x0388,	// (0x0004eb23) list_double_fisheye_pane_t2_ParamLimits

0x0388,	// (0x0004eb23) list_double_fisheye_pane_t2

0x0001,

0xfcbb,	// (0x0005e456) list_double_fisheye_pane_t_ParamLimits

0xfcbb,	// (0x0005e456) list_double_fisheye_pane_t

0x9a5a,	// (0x000581f5) main_call5_pane

0x81d7,	// (0x00056972) sc_swipe_pane_ParamLimits

0x81d7,	// (0x00056972) sc_swipe_pane

0x856a,	// (0x00056d05) call5_image_pane_ParamLimits

0x856a,	// (0x00056d05) call5_image_pane

0x8587,	// (0x00056d22) call5_swipe_1_pane_ParamLimits

0x8587,	// (0x00056d22) call5_swipe_1_pane

0x859a,	// (0x00056d35) call5_swipe_2_pane_ParamLimits

0x859a,	// (0x00056d35) call5_swipe_2_pane

0x85c5,	// (0x00056d60) popup_call5_audio_first_window_ParamLimits

0x85c5,	// (0x00056d60) popup_call5_audio_first_window

0xd02b,	// (0x0005b7c6) call5_swipe_1_pane_g1_ParamLimits

0xd02b,	// (0x0005b7c6) call5_swipe_1_pane_g1

0xe5f9,	// (0x0005cd94) call5_swipe_1_pane_g2_ParamLimits

0xe5f9,	// (0x0005cd94) call5_swipe_1_pane_g2

0x0001,

0xfcc0,	// (0x0005e45b) call5_swipe_1_pane_g_ParamLimits

0xfcc0,	// (0x0005e45b) call5_swipe_1_pane_g

0xe605,	// (0x0005cda0) call5_swipe_1_pane_t1_ParamLimits

0xe605,	// (0x0005cda0) call5_swipe_1_pane_t1

0xd02b,	// (0x0005b7c6) call5_swipe_2_pane_g1_ParamLimits

0xd02b,	// (0x0005b7c6) call5_swipe_2_pane_g1

0xe61a,	// (0x0005cdb5) call5_swipe_2_pane_g2_ParamLimits

0xe61a,	// (0x0005cdb5) call5_swipe_2_pane_g2

0x0001,

0xfcc5,	// (0x0005e460) call5_swipe_2_pane_g_ParamLimits

0xfcc5,	// (0x0005e460) call5_swipe_2_pane_g

0xe626,	// (0x0005cdc1) call5_swipe_2_pane_t1_ParamLimits

0xe626,	// (0x0005cdc1) call5_swipe_2_pane_t1

0xe63b,	// (0x0005cdd6) sc_swipe_pane_g1_ParamLimits

0xe63b,	// (0x0005cdd6) sc_swipe_pane_g1

0xe648,	// (0x0005cde3) sc_swipe_pane_g2_ParamLimits

0xe648,	// (0x0005cde3) sc_swipe_pane_g2

0x0001,

0xfcca,	// (0x0005e465) sc_swipe_pane_g_ParamLimits

0xfcca,	// (0x0005e465) sc_swipe_pane_g

0xe654,	// (0x0005cdef) sc_swipe_pane_t1_ParamLimits

0xe654,	// (0x0005cdef) sc_swipe_pane_t1

0x9a5a,	// (0x000581f5) main_cmail_launcher_pane

0x85da,	// (0x00056d75) aid_size_cell_cmail_l_ParamLimits

0x85da,	// (0x00056d75) aid_size_cell_cmail_l

0x85e8,	// (0x00056d83) grid_cmail_l_pane_ParamLimits

0x85e8,	// (0x00056d83) grid_cmail_l_pane

0x8601,	// (0x00056d9c) cell_cmail_l_pane_ParamLimits

0x8601,	// (0x00056d9c) cell_cmail_l_pane

0xe669,	// (0x0005ce04) cell_cmail_l_pane_g1_ParamLimits

0xe669,	// (0x0005ce04) cell_cmail_l_pane_g1

0xe675,	// (0x0005ce10) cell_cmail_l_pane_t1_ParamLimits

0xe675,	// (0x0005ce10) cell_cmail_l_pane_t1

0xe68b,	// (0x0005ce26) cell_cmail_l_pane_t2_ParamLimits

0xe68b,	// (0x0005ce26) cell_cmail_l_pane_t2

0x0001,

0xfccf,	// (0x0005e46a) cell_cmail_l_pane_t_ParamLimits

0xfccf,	// (0x0005e46a) cell_cmail_l_pane_t

0xad09,	// (0x000594a4) grid_highlight_pane_cp018_ParamLimits

0xad09,	// (0x000594a4) grid_highlight_pane_cp018

0x0cb2,	// (0x0004f44d) main2_pane_ParamLimits

0x0cb2,	// (0x0004f44d) main2_pane

0xa30e,	// (0x00058aa9) popup_sp_fs_action_menu_bg_pane_g1

0xa316,	// (0x00058ab1) popup_sp_fs_action_menu_bg_pane_g2

0xa31e,	// (0x00058ab9) popup_sp_fs_action_menu_bg_pane_g3

0xa326,	// (0x00058ac1) popup_sp_fs_action_menu_bg_pane_g4

0xa32e,	// (0x00058ac9) popup_sp_fs_action_menu_bg_pane_g5

0xa336,	// (0x00058ad1) popup_sp_fs_action_menu_bg_pane_g6

0xa33e,	// (0x00058ad9) popup_sp_fs_action_menu_bg_pane_g7

0xa346,	// (0x00058ae1) popup_sp_fs_action_menu_bg_pane_g8

0xa34e,	// (0x00058ae9) popup_sp_fs_action_menu_bg_pane_g9

0xa356,	// (0x00058af1) popup_sp_fs_action_menu_bg_pane_g10

0xa356,	// (0x00058af1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0005d921) popup_sp_fs_action_menu_bg_pane_g

0xfb8b,	// (0x0004e326) list_medium_line_x2_t3_g3_g1_ParamLimits

0xfb8b,	// (0x0004e326) list_medium_line_x2_t3_g3_g1

0xfb97,	// (0x0004e332) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfb97,	// (0x0004e332) list_medium_line_x2_t3_g3_g2

0xfba3,	// (0x0004e33e) list_medium_line_x2_t3_g3_g3_ParamLimits

0xfba3,	// (0x0004e33e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0005d9cf) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0005d9cf) list_medium_line_x2_t3_g3_g

0xfbaf,	// (0x0004e34a) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfbaf,	// (0x0004e34a) list_medium_line_x2_t3_g3_t1

0xfbc4,	// (0x0004e35f) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfbc4,	// (0x0004e35f) list_medium_line_x2_t3_g3_t2

0xfbd8,	// (0x0004e373) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfbd8,	// (0x0004e373) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0005d9d6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0005d9d6) list_medium_line_x2_t3_g3_t

0xf044,	// (0x0005d7df) list_medium_line_x2_t3_g2_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_x2_t3_g2_g1

0xf050,	// (0x0005d7eb) list_medium_line_x2_t3_g2_g2_ParamLimits

0xf050,	// (0x0005d7eb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0005d9dd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0005d9dd) list_medium_line_x2_t3_g2_g

0xfbed,	// (0x0004e388) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfbed,	// (0x0004e388) list_medium_line_x2_t3_g2_t1

0xfc03,	// (0x0004e39e) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfc03,	// (0x0004e39e) list_medium_line_x2_t3_g2_t2

0xfc15,	// (0x0004e3b0) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfc15,	// (0x0004e3b0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0005d9e2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0005d9e2) list_medium_line_x2_t3_g2_t

0xf044,	// (0x0005d7df) list_medium_line_x2_t4_g4_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_x2_t4_g4_g1

0xfc33,	// (0x0004e3ce) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfc33,	// (0x0004e3ce) list_medium_line_x2_t4_g4_g2

0xf05c,	// (0x0005d7f7) list_medium_line_x2_t4_g4_g3_ParamLimits

0xf05c,	// (0x0005d7f7) list_medium_line_x2_t4_g4_g3

0xfc3f,	// (0x0004e3da) list_medium_line_x2_t4_g4_g4_ParamLimits

0xfc3f,	// (0x0004e3da) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0005d9e9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0005d9e9) list_medium_line_x2_t4_g4_g

0xfc4b,	// (0x0004e3e6) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfc4b,	// (0x0004e3e6) list_medium_line_x2_t4_g4_t1

0xfc65,	// (0x0004e400) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfc65,	// (0x0004e400) list_medium_line_x2_t4_g4_t2

0xfc7b,	// (0x0004e416) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfc7b,	// (0x0004e416) list_medium_line_x2_t4_g4_t3

0xfc90,	// (0x0004e42b) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfc90,	// (0x0004e42b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0005d9f2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0005d9f2) list_medium_line_x2_t4_g4_t

0xf044,	// (0x0005d7df) list_medium_line_x2_t2_g4_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_x2_t2_g4_g1

0xf068,	// (0x0005d803) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf068,	// (0x0005d803) list_medium_line_x2_t2_g4_g2

0xf05c,	// (0x0005d7f7) list_medium_line_x2_t2_g4_g3_ParamLimits

0xf05c,	// (0x0005d7f7) list_medium_line_x2_t2_g4_g3

0xf050,	// (0x0005d7eb) list_medium_line_x2_t2_g4_g4_ParamLimits

0xf050,	// (0x0005d7eb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0005da59) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0005da59) list_medium_line_x2_t2_g4_g

0xfca2,	// (0x0004e43d) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfca2,	// (0x0004e43d) list_medium_line_x2_t2_g4_t1

0xf074,	// (0x0005d80f) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf074,	// (0x0005d80f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0005da62) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0005da62) list_medium_line_x2_t2_g4_t

0xf044,	// (0x0005d7df) list_medium_line_x2_t2_g3_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_x2_t2_g3_g1

0xf05c,	// (0x0005d7f7) list_medium_line_x2_t2_g3_g2_ParamLimits

0xf05c,	// (0x0005d7f7) list_medium_line_x2_t2_g3_g2

0xf050,	// (0x0005d7eb) list_medium_line_x2_t2_g3_g3_ParamLimits

0xf050,	// (0x0005d7eb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2cc,	// (0x0005da67) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2cc,	// (0x0005da67) list_medium_line_x2_t2_g3_g

0xfcb7,	// (0x0004e452) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfcb7,	// (0x0004e452) list_medium_line_x2_t2_g3_t1

0xf074,	// (0x0005d80f) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf074,	// (0x0005d80f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d3,	// (0x0005da6e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d3,	// (0x0005da6e) list_medium_line_x2_t2_g3_t

0x2e41,	// (0x000515dc) main_sp_fs_list_pane_ParamLimits

0x2e41,	// (0x000515dc) main_sp_fs_list_pane

0xd29c,	// (0x0005ba37) sp_fs_scroll_pane_ParamLimits

0xd29c,	// (0x0005ba37) sp_fs_scroll_pane

0xfccc,	// (0x0004e467) list_medium_line_x2_t3_t1

0xfcdc,	// (0x0004e477) list_medium_line_x2_t3_t2

0xfcea,	// (0x0004e485) list_medium_line_x2_t3_t3

0x0002,

0xf31e,	// (0x0005dab9) list_medium_line_x2_t3_t

0xfcf8,	// (0x0004e493) list_medium_line_x3_t4_t1

0xfd08,	// (0x0004e4a3) list_medium_line_x3_t4_t2

0xfd16,	// (0x0004e4b1) list_medium_line_x3_t4_t3

0xf089,	// (0x0005d824) list_medium_line_x3_t4_t4

0x0003,

0xf325,	// (0x0005dac0) list_medium_line_x3_t4_t

0xfd24,	// (0x0004e4bf) list_medium_line_x4_t5_t1

0xfd34,	// (0x0004e4cf) list_medium_line_x4_t5_t2

0xf097,	// (0x0005d832) list_medium_line_x4_t5_t3

0xfd42,	// (0x0004e4dd) list_medium_line_x4_t5_t4

0xf089,	// (0x0005d824) list_medium_line_x4_t5_t5

0x0004,

0xf32e,	// (0x0005dac9) list_medium_line_x4_t5_t

0xf044,	// (0x0005d7df) list_medium_line_t4_g4_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_t4_g4_g1

0xf0a5,	// (0x0005d840) list_medium_line_t4_g4_g2_ParamLimits

0xf0a5,	// (0x0005d840) list_medium_line_t4_g4_g2

0xfd50,	// (0x0004e4eb) list_medium_line_t4_g4_g3_ParamLimits

0xfd50,	// (0x0004e4eb) list_medium_line_t4_g4_g3

0xf050,	// (0x0005d7eb) list_medium_line_t4_g4_g4_ParamLimits

0xf050,	// (0x0005d7eb) list_medium_line_t4_g4_g4

0x0003,

0xf339,	// (0x0005dad4) list_medium_line_t4_g4_g_ParamLimits

0xf339,	// (0x0005dad4) list_medium_line_t4_g4_g

0xfd5c,	// (0x0004e4f7) list_medium_line_t4_g4_t1_ParamLimits

0xfd5c,	// (0x0004e4f7) list_medium_line_t4_g4_t1

0xfd71,	// (0x0004e50c) list_medium_line_t4_g4_t2_ParamLimits

0xfd71,	// (0x0004e50c) list_medium_line_t4_g4_t2

0xfd87,	// (0x0004e522) list_medium_line_t4_g4_t3_ParamLimits

0xfd87,	// (0x0004e522) list_medium_line_t4_g4_t3

0xf074,	// (0x0005d80f) list_medium_line_t4_g4_t4_ParamLimits

0xf074,	// (0x0005d80f) list_medium_line_t4_g4_t4

0x0003,

0xf342,	// (0x0005dadd) list_medium_line_t4_g4_t_ParamLimits

0xf342,	// (0x0005dadd) list_medium_line_t4_g4_t

0x2f13,	// (0x000516ae) chi_dic_find_pane_g1

0x3fd1,	// (0x0005276c) main_tport_pane

0x003a,	// (0x0004e7d5) list_medium_line_plain_t1

0x0048,	// (0x0004e7e3) list_medium_line_t2_g2_g1_ParamLimits

0x0048,	// (0x0004e7e3) list_medium_line_t2_g2_g1

0x0054,	// (0x0004e7ef) list_medium_line_t2_g2_g2_ParamLimits

0x0054,	// (0x0004e7ef) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x0005e1a2) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x0005e1a2) list_medium_line_t2_g2_g

0x0060,	// (0x0004e7fb) list_medium_line_t2_g2_t1_ParamLimits

0x0060,	// (0x0004e7fb) list_medium_line_t2_g2_t1

0x007a,	// (0x0004e815) list_medium_line_t2_g2_t2_ParamLimits

0x007a,	// (0x0004e815) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0005e1a7) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0005e1a7) list_medium_line_t2_g2_t

0x7646,	// (0x00055de1) aid_sp_fs_list_icon_a_sm

0x764e,	// (0x00055de9) aid_sp_fs_list_icon_d

0x7656,	// (0x00055df1) aid_sp_fs_text_primary

0xe54c,	// (0x0005cce7) aid_sp_fs_text_secondary

0x765f,	// (0x00055dfa) list_medium_line

0x765f,	// (0x00055dfa) list_medium_line_g2

0x765f,	// (0x00055dfa) list_medium_line_g3

0x765f,	// (0x00055dfa) list_medium_line_plain

0x765f,	// (0x00055dfa) list_medium_line_plain_t2

0x765f,	// (0x00055dfa) list_medium_line_plain_t3

0x765f,	// (0x00055dfa) list_medium_line_right_icon

0x765f,	// (0x00055dfa) list_medium_line_right_iconx2

0x765f,	// (0x00055dfa) list_medium_line_t2

0x765f,	// (0x00055dfa) list_medium_line_t2_g2

0x765f,	// (0x00055dfa) list_medium_line_t2_g3

0x765f,	// (0x00055dfa) list_medium_line_t2_right_icon

0x765f,	// (0x00055dfa) list_medium_line_t2_right_iconx2

0x765f,	// (0x00055dfa) list_medium_line_t3

0x765f,	// (0x00055dfa) list_medium_line_t3_g2

0x765f,	// (0x00055dfa) list_medium_line_t3_g3

0x765f,	// (0x00055dfa) list_medium_line_t3_right_iconx2

0x0208,	// (0x0004e9a3) list_medium_line_t4_g4

0x765f,	// (0x00055dfa) list_medium_line_x2

0x765f,	// (0x00055dfa) list_medium_line_x2_t2_g2

0x765f,	// (0x00055dfa) list_medium_line_x2_t2_g3

0x765f,	// (0x00055dfa) list_medium_line_x2_t2_g4

0x765f,	// (0x00055dfa) list_medium_line_x2_t3

0x765f,	// (0x00055dfa) list_medium_line_x2_t3_g2

0x765f,	// (0x00055dfa) list_medium_line_x2_t3_g3

0x765f,	// (0x00055dfa) list_medium_line_x2_t3_g4

0x765f,	// (0x00055dfa) list_medium_line_x2_t4_g2

0x765f,	// (0x00055dfa) list_medium_line_x2_t4_g4

0x0211,	// (0x0004e9ac) list_medium_line_x3

0x0211,	// (0x0004e9ac) list_medium_line_x3_t4

0x0211,	// (0x0004e9ac) list_medium_line_x3_t4_g4

0x0208,	// (0x0004e9a3) list_medium_line_x4_t4

0x0208,	// (0x0004e9a3) list_medium_line_x4_t4_g7

0x0208,	// (0x0004e9a3) list_medium_line_x4_t5

0x021a,	// (0x0004e9b5) list_single_fs_dyc_pane_ParamLimits

0x021a,	// (0x0004e9b5) list_single_fs_dyc_pane

0xf044,	// (0x0005d7df) list_medium_line_x4_t4_g7_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_x4_t4_g7_g1

0x025a,	// (0x0004e9f5) list_medium_line_x4_t4_g7_g2_ParamLimits

0x025a,	// (0x0004e9f5) list_medium_line_x4_t4_g7_g2

0x0266,	// (0x0004ea01) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0266,	// (0x0004ea01) list_medium_line_x4_t4_g7_g3

0x0275,	// (0x0004ea10) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0275,	// (0x0004ea10) list_medium_line_x4_t4_g7_g4

0x0281,	// (0x0004ea1c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0281,	// (0x0004ea1c) list_medium_line_x4_t4_g7_g5

0x0290,	// (0x0004ea2b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0290,	// (0x0004ea2b) list_medium_line_x4_t4_g7_g6

0x029f,	// (0x0004ea3a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x029f,	// (0x0004ea3a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x0005e372) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x0005e372) list_medium_line_x4_t4_g7_g

0x02ab,	// (0x0004ea46) list_medium_line_x4_t4_g7_t1_ParamLimits

0x02ab,	// (0x0004ea46) list_medium_line_x4_t4_g7_t1

0x02c0,	// (0x0004ea5b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x02c0,	// (0x0004ea5b) list_medium_line_x4_t4_g7_t2

0x02d5,	// (0x0004ea70) list_medium_line_x4_t4_g7_t3_ParamLimits

0x02d5,	// (0x0004ea70) list_medium_line_x4_t4_g7_t3

0x02ea,	// (0x0004ea85) list_medium_line_x4_t4_g7_t4_ParamLimits

0x02ea,	// (0x0004ea85) list_medium_line_x4_t4_g7_t4

0x02fc,	// (0x0004ea97) list_medium_line_x4_t4_g7_t5_ParamLimits

0x02fc,	// (0x0004ea97) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x0005e381) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x0005e381) list_medium_line_x4_t4_g7_t

0x030e,	// (0x0004eaa9) list_single_dyc_row_pane_ParamLimits

0x030e,	// (0x0004eaa9) list_single_dyc_row_pane

0x8557,	// (0x00056cf2) call5_gesture_pane_ParamLimits

0x8557,	// (0x00056cf2) call5_gesture_pane

0x85ad,	// (0x00056d48) call5_windows_pane_ParamLimits

0x85ad,	// (0x00056d48) call5_windows_pane

0x8613,	// (0x00056dae) call5_swipe_1_pane_cp_ParamLimits

0x8613,	// (0x00056dae) call5_swipe_1_pane_cp

0x861f,	// (0x00056dba) call5_swipe_2_pane_cp_ParamLimits

0x861f,	// (0x00056dba) call5_swipe_2_pane_cp

0xa465,	// (0x00058c00) call5_image_pane_cp

0x862b,	// (0x00056dc6) popup_call5_audio_first_window_cp_ParamLimits

0x862b,	// (0x00056dc6) popup_call5_audio_first_window_cp

0xe63b,	// (0x0005cdd6) call5_swipe_1_pane_g1_cp_ParamLimits

0xe63b,	// (0x0005cdd6) call5_swipe_1_pane_g1_cp

0xe6a8,	// (0x0005ce43) call5_swipe_1_pane_g2_cp

0xe654,	// (0x0005cdef) call5_swipe_1_pane_t1_cp_ParamLimits

0xe654,	// (0x0005cdef) call5_swipe_1_pane_t1_cp

0xe63b,	// (0x0005cdd6) call5_swipe_2_pane_g1_cp_ParamLimits

0xe63b,	// (0x0005cdd6) call5_swipe_2_pane_g1_cp

0xe6b0,	// (0x0005ce4b) call5_swipe_2_pane_g2_cp

0xe6b8,	// (0x0005ce53) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6b8,	// (0x0005ce53) call5_swipe_2_pane_t1_cp

0xad09,	// (0x000594a4) main_sp_fs_email_pane

0xd99a,	// (0x0005c135) main_sp_fs_listscroll_pane_te

0x03aa,	// (0x0004eb45) popup_sp_fs_action_menu_pane_ParamLimits

0x03aa,	// (0x0004eb45) popup_sp_fs_action_menu_pane

0xce04,	// (0x0005b59f) bg_sp_fs_ctrlbar_pane_g1

0xe6cd,	// (0x0005ce68) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6d6,	// (0x0005ce71) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6df,	// (0x0005ce7a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce04,	// (0x0005b59f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd4,	// (0x0005e46f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcbe3,	// (0x0005b37e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcbe3,	// (0x0005b37e) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6e8,	// (0x0005ce83) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6e8,	// (0x0005ce83) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f4,	// (0x0005ce8f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6f4,	// (0x0005ce8f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdd,	// (0x0005e478) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdd,	// (0x0005e478) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe700,	// (0x0005ce9b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe700,	// (0x0005ce9b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x03f0,	// (0x0004eb8b) list_medium_line_t2_right_icon_g1

0x03f8,	// (0x0004eb93) list_medium_line_t2_right_icon_t1

0x0408,	// (0x0004eba3) list_medium_line_t2_right_icon_t2

0x0001,

0xfce2,	// (0x0005e47d) list_medium_line_t2_right_icon_t

0xc9cc,	// (0x0005b167) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc9cc,	// (0x0005b167) bg_sp_fs_ctrlbar_pane

0x8683,	// (0x00056e1e) main_sp_fs_ctrlbar_button_pane_cp01

0x868d,	// (0x00056e28) main_sp_fs_ctrlbar_ddmenu_pane

0xe754,	// (0x0005ceef) main_sp_fs_ctrlbar_pane_g1

0xe760,	// (0x0005cefb) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce7,	// (0x0005e482) main_sp_fs_ctrlbar_pane_g

0xe76c,	// (0x0005cf07) main_sp_fs_ctrlbar_pane_t1

0x8697,	// (0x00056e32) main_sp_fs_ctrlbar_pane

0x86bb,	// (0x00056e56) main_sp_fs_listscroll_pane_te_cp01

0x041a,	// (0x0004ebb5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x041a,	// (0x0004ebb5) popup_sp_fs_action_menu_pane_cp01

0xad09,	// (0x000594a4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xad09,	// (0x000594a4) bg_sp_fs_highlight_list_pane_cp01

0x86db,	// (0x00056e76) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x86db,	// (0x00056e76) sp_fs_action_menu_list_gene_pane_g1

0xe79c,	// (0x0005cf37) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe79c,	// (0x0005cf37) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf1,	// (0x0005e48c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf1,	// (0x0005e48c) sp_fs_action_menu_list_gene_pane_g

0x86ea,	// (0x00056e85) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x86ea,	// (0x00056e85) sp_fs_action_menu_list_gene_pane_t1

0x8702,	// (0x00056e9d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8702,	// (0x00056e9d) sp_fs_action_menu_list_gene_pane

0xe7a9,	// (0x0005cf44) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7a9,	// (0x0005cf44) popup_sp_fs_action_menu_bg_pane

0x8725,	// (0x00056ec0) sp_fs_action_menu_list_pane_ParamLimits

0x8725,	// (0x00056ec0) sp_fs_action_menu_list_pane

0x044a,	// (0x0004ebe5) sp_fs_scroll_pane_cp01_ParamLimits

0x044a,	// (0x0004ebe5) sp_fs_scroll_pane_cp01

0x0470,	// (0x0004ec0b) list_medium_line_plain_t2_t1

0x0480,	// (0x0004ec1b) list_medium_line_plain_t2_t2

0x0001,

0xfcf6,	// (0x0005e491) list_medium_line_plain_t2_t

0x0490,	// (0x0004ec2b) list_medium_line_plain_t3_t1

0x04a0,	// (0x0004ec3b) list_medium_line_plain_t3_t2

0x04ae,	// (0x0004ec49) list_medium_line_plain_t3_t3

0x0002,

0xfcfb,	// (0x0005e496) list_medium_line_plain_t3_t

0xf044,	// (0x0005d7df) list_medium_line_x2_t2_g2_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_x2_t2_g2_g1

0xf050,	// (0x0005d7eb) list_medium_line_x2_t2_g2_g2_ParamLimits

0xf050,	// (0x0005d7eb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0005d9dd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0005d9dd) list_medium_line_x2_t2_g2_g

0xf0b1,	// (0x0005d84c) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf0b1,	// (0x0005d84c) list_medium_line_x2_t2_g2_t1

0xf074,	// (0x0005d80f) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf074,	// (0x0005d80f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd02,	// (0x0005e49d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd02,	// (0x0005e49d) list_medium_line_x2_t2_g2_t

0xf044,	// (0x0005d7df) list_medium_line_x2_t4_g2_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_x2_t4_g2_g1

0x04bc,	// (0x0004ec57) list_medium_line_x2_t4_g2_g2_ParamLimits

0x04bc,	// (0x0004ec57) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd07,	// (0x0005e4a2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd07,	// (0x0005e4a2) list_medium_line_x2_t4_g2_g

0x04ce,	// (0x0004ec69) list_medium_line_x2_t4_g2_t1_ParamLimits

0x04ce,	// (0x0004ec69) list_medium_line_x2_t4_g2_t1

0x04e8,	// (0x0004ec83) list_medium_line_x2_t4_g2_t2_ParamLimits

0x04e8,	// (0x0004ec83) list_medium_line_x2_t4_g2_t2

0x04fe,	// (0x0004ec99) list_medium_line_x2_t4_g2_t3_ParamLimits

0x04fe,	// (0x0004ec99) list_medium_line_x2_t4_g2_t3

0xf074,	// (0x0005d80f) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf074,	// (0x0005d80f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0c,	// (0x0005e4a7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0c,	// (0x0005e4a7) list_medium_line_x2_t4_g2_t

0x0513,	// (0x0004ecae) list_medium_line_t3_right_iconx2_g1

0x03f0,	// (0x0004eb8b) list_medium_line_t3_right_iconx2_g2

0x051b,	// (0x0004ecb6) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd15,	// (0x0005e4b0) list_medium_line_t3_right_iconx2_g

0x0525,	// (0x0004ecc0) list_medium_line_t3_right_iconx2_t1

0x0535,	// (0x0004ecd0) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1c,	// (0x0005e4b7) list_medium_line_t3_right_iconx2_t

0xf044,	// (0x0005d7df) list_medium_line_x3_t4_g4_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_x3_t4_g4_g1

0xf05c,	// (0x0005d7f7) list_medium_line_x3_t4_g4_g2_ParamLimits

0xf05c,	// (0x0005d7f7) list_medium_line_x3_t4_g4_g2

0xf0a5,	// (0x0005d840) list_medium_line_x3_t4_g4_g3_ParamLimits

0xf0a5,	// (0x0005d840) list_medium_line_x3_t4_g4_g3

0x0543,	// (0x0004ecde) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0543,	// (0x0004ecde) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd21,	// (0x0005e4bc) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd21,	// (0x0005e4bc) list_medium_line_x3_t4_g4_g

0x054f,	// (0x0004ecea) list_medium_line_x3_t4_g4_t1_ParamLimits

0x054f,	// (0x0004ecea) list_medium_line_x3_t4_g4_t1

0x0566,	// (0x0004ed01) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0566,	// (0x0004ed01) list_medium_line_x3_t4_g4_t2

0x057f,	// (0x0004ed1a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x057f,	// (0x0004ed1a) list_medium_line_x3_t4_g4_t3

0x0594,	// (0x0004ed2f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0594,	// (0x0004ed2f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2a,	// (0x0005e4c5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2a,	// (0x0005e4c5) list_medium_line_x3_t4_g4_t

0x05b1,	// (0x0004ed4c) list_single_dyc_row_text_pane_t1_ParamLimits

0x05b1,	// (0x0004ed4c) list_single_dyc_row_text_pane_t1

0x05fa,	// (0x0004ed95) list_single_dyc_row_text_pane_t2_ParamLimits

0x05fa,	// (0x0004ed95) list_single_dyc_row_text_pane_t2

0x8749,	// (0x00056ee4) list_single_dyc_row_text_pane_t3_ParamLimits

0x8749,	// (0x00056ee4) list_single_dyc_row_text_pane_t3

0x0005,

0xfd33,	// (0x0005e4ce) list_single_dyc_row_text_pane_t_ParamLimits

0xfd33,	// (0x0005e4ce) list_single_dyc_row_text_pane_t

0x876d,	// (0x00056f08) list_single_dyc_row_pane_g1_ParamLimits

0x876d,	// (0x00056f08) list_single_dyc_row_pane_g1

0x8779,	// (0x00056f14) list_single_dyc_row_pane_g2_ParamLimits

0x8779,	// (0x00056f14) list_single_dyc_row_pane_g2

0x8785,	// (0x00056f20) list_single_dyc_row_pane_g3_ParamLimits

0x8785,	// (0x00056f20) list_single_dyc_row_pane_g3

0x8791,	// (0x00056f2c) list_single_dyc_row_pane_g4_ParamLimits

0x8791,	// (0x00056f2c) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0005e4db) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0005e4db) list_single_dyc_row_pane_g

0x879d,	// (0x00056f38) list_single_dyc_row_text_pane_ParamLimits

0x879d,	// (0x00056f38) list_single_dyc_row_text_pane

0x9a5a,	// (0x000581f5) bg_sp_fs_scroll_pane

0xe7b7,	// (0x0005cf52) thumb_sp_fs_scroll_pane

0x0048,	// (0x0004e7e3) list_medium_line_g1_ParamLimits

0x0048,	// (0x0004e7e3) list_medium_line_g1

0x072f,	// (0x0004eeca) list_medium_line_t1_ParamLimits

0x072f,	// (0x0004eeca) list_medium_line_t1

0xf044,	// (0x0005d7df) list_medium_line_x2_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_x2_g1

0xf05c,	// (0x0005d7f7) list_medium_line_x2_g2_ParamLimits

0xf05c,	// (0x0005d7f7) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0005e4e4) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0005e4e4) list_medium_line_x2_g

0x87bc,	// (0x00056f57) list_medium_line_x2_t1_ParamLimits

0x87bc,	// (0x00056f57) list_medium_line_x2_t1

0xf044,	// (0x0005d7df) list_medium_line_x3_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_x3_g1

0xf05c,	// (0x0005d7f7) list_medium_line_x3_g2_ParamLimits

0xf05c,	// (0x0005d7f7) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0005e4e4) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0005e4e4) list_medium_line_x3_g

0x87bc,	// (0x00056f57) list_medium_line_x3_t1_ParamLimits

0x87bc,	// (0x00056f57) list_medium_line_x3_t1

0xe7c0,	// (0x0005cf5b) thumb_sp_fs_scroll_pane_g1

0xe7c9,	// (0x0005cf64) thumb_sp_fs_scroll_pane_g2

0xe7d2,	// (0x0005cf6d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005e4e9) thumb_sp_fs_scroll_pane_g

0xe7c0,	// (0x0005cf5b) bg_sp_fs_scroll_pane_g1

0xe7c9,	// (0x0005cf64) bg_sp_fs_scroll_pane_g2

0xe7d2,	// (0x0005cf6d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0005e4e9) bg_sp_fs_scroll_pane_g

0xf044,	// (0x0005d7df) list_medium_line_x2_t3_g4_g1_ParamLimits

0xf044,	// (0x0005d7df) list_medium_line_x2_t3_g4_g1

0xf068,	// (0x0005d803) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf068,	// (0x0005d803) list_medium_line_x2_t3_g4_g2

0xf05c,	// (0x0005d7f7) list_medium_line_x2_t3_g4_g3_ParamLimits

0xf05c,	// (0x0005d7f7) list_medium_line_x2_t3_g4_g3

0xf050,	// (0x0005d7eb) list_medium_line_x2_t3_g4_g4_ParamLimits

0xf050,	// (0x0005d7eb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0005da59) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0005da59) list_medium_line_x2_t3_g4_g

0x0744,	// (0x0004eedf) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0744,	// (0x0004eedf) list_medium_line_x2_t3_g4_t1

0x075a,	// (0x0004eef5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x075a,	// (0x0004eef5) list_medium_line_x2_t3_g4_t2

0xf074,	// (0x0005d80f) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf074,	// (0x0005d80f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0005e4f0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0005e4f0) list_medium_line_x2_t3_g4_t

0x0048,	// (0x0004e7e3) list_medium_line_g2_g1_ParamLimits

0x0048,	// (0x0004e7e3) list_medium_line_g2_g1

0x0054,	// (0x0004e7ef) list_medium_line_g2_g2_ParamLimits

0x0054,	// (0x0004e7ef) list_medium_line_g2_g2

0x0001,

0xfa07,	// (0x0005e1a2) list_medium_line_g2_g_ParamLimits

0xfa07,	// (0x0005e1a2) list_medium_line_g2_g

0x0774,	// (0x0004ef0f) list_medium_line_g2_t1_ParamLimits

0x0774,	// (0x0004ef0f) list_medium_line_g2_t1

0x0048,	// (0x0004e7e3) list_medium_line_t3_g2_g1_ParamLimits

0x0048,	// (0x0004e7e3) list_medium_line_t3_g2_g1

0x0054,	// (0x0004e7ef) list_medium_line_t3_g2_g2_ParamLimits

0x0054,	// (0x0004e7ef) list_medium_line_t3_g2_g2

0x0001,

0xfa07,	// (0x0005e1a2) list_medium_line_t3_g2_g_ParamLimits

0xfa07,	// (0x0005e1a2) list_medium_line_t3_g2_g

0x0789,	// (0x0004ef24) list_medium_line_t3_g2_t1_ParamLimits

0x0789,	// (0x0004ef24) list_medium_line_t3_g2_t1

0x07a3,	// (0x0004ef3e) list_medium_line_t3_g2_t2_ParamLimits

0x07a3,	// (0x0004ef3e) list_medium_line_t3_g2_t2

0x07b9,	// (0x0004ef54) list_medium_line_t3_g2_t3_ParamLimits

0x07b9,	// (0x0004ef54) list_medium_line_t3_g2_t3

0x0002,

0xfd5c,	// (0x0005e4f7) list_medium_line_t3_g2_t_ParamLimits

0xfd5c,	// (0x0005e4f7) list_medium_line_t3_g2_t

0x03f0,	// (0x0004eb8b) list_medium_line_right_icon_g1

0x07d3,	// (0x0004ef6e) list_medium_line_right_icon_t1

0x0048,	// (0x0004e7e3) list_medium_line_t2_g1_ParamLimits

0x0048,	// (0x0004e7e3) list_medium_line_t2_g1

0x07e1,	// (0x0004ef7c) list_medium_line_t2_t1_ParamLimits

0x07e1,	// (0x0004ef7c) list_medium_line_t2_t1

0x07fb,	// (0x0004ef96) list_medium_line_t2_t2_ParamLimits

0x07fb,	// (0x0004ef96) list_medium_line_t2_t2

0x0001,

0xfd63,	// (0x0005e4fe) list_medium_line_t2_t_ParamLimits

0xfd63,	// (0x0005e4fe) list_medium_line_t2_t

0x0048,	// (0x0004e7e3) list_medium_line_t3_g1_ParamLimits

0x0048,	// (0x0004e7e3) list_medium_line_t3_g1

0x0814,	// (0x0004efaf) list_medium_line_t3_t1_ParamLimits

0x0814,	// (0x0004efaf) list_medium_line_t3_t1

0x082e,	// (0x0004efc9) list_medium_line_t3_t2_ParamLimits

0x082e,	// (0x0004efc9) list_medium_line_t3_t2

0x0844,	// (0x0004efdf) list_medium_line_t3_t3_ParamLimits

0x0844,	// (0x0004efdf) list_medium_line_t3_t3

0x0002,

0xfd68,	// (0x0005e503) list_medium_line_t3_t_ParamLimits

0xfd68,	// (0x0005e503) list_medium_line_t3_t

0x0048,	// (0x0004e7e3) list_medium_line_g3_g1_ParamLimits

0x0048,	// (0x0004e7e3) list_medium_line_g3_g1

0x0859,	// (0x0004eff4) list_medium_line_g3_g2_ParamLimits

0x0859,	// (0x0004eff4) list_medium_line_g3_g2

0x0054,	// (0x0004e7ef) list_medium_line_g3_g3_ParamLimits

0x0054,	// (0x0004e7ef) list_medium_line_g3_g3

0x0002,

0xfd6f,	// (0x0005e50a) list_medium_line_g3_g_ParamLimits

0xfd6f,	// (0x0005e50a) list_medium_line_g3_g

0x0865,	// (0x0004f000) list_medium_line_g3_t1_ParamLimits

0x0865,	// (0x0004f000) list_medium_line_g3_t1

0x0048,	// (0x0004e7e3) list_medium_line_t2_g3_g1_ParamLimits

0x0048,	// (0x0004e7e3) list_medium_line_t2_g3_g1

0x0859,	// (0x0004eff4) list_medium_line_t2_g3_g2_ParamLimits

0x0859,	// (0x0004eff4) list_medium_line_t2_g3_g2

0x0054,	// (0x0004e7ef) list_medium_line_t2_g3_g3_ParamLimits

0x0054,	// (0x0004e7ef) list_medium_line_t2_g3_g3

0x0002,

0xfd6f,	// (0x0005e50a) list_medium_line_t2_g3_g_ParamLimits

0xfd6f,	// (0x0005e50a) list_medium_line_t2_g3_g

0x087a,	// (0x0004f015) list_medium_line_t2_g3_t1_ParamLimits

0x087a,	// (0x0004f015) list_medium_line_t2_g3_t1

0x0894,	// (0x0004f02f) list_medium_line_t2_g3_t2_ParamLimits

0x0894,	// (0x0004f02f) list_medium_line_t2_g3_t2

0x0001,

0xfd76,	// (0x0005e511) list_medium_line_t2_g3_t_ParamLimits

0xfd76,	// (0x0005e511) list_medium_line_t2_g3_t

0x0048,	// (0x0004e7e3) list_medium_line_t3_g3_g1_ParamLimits

0x0048,	// (0x0004e7e3) list_medium_line_t3_g3_g1

0x0859,	// (0x0004eff4) list_medium_line_t3_g3_g2_ParamLimits

0x0859,	// (0x0004eff4) list_medium_line_t3_g3_g2

0x0054,	// (0x0004e7ef) list_medium_line_t3_g3_g3_ParamLimits

0x0054,	// (0x0004e7ef) list_medium_line_t3_g3_g3

0x0002,

0xfd6f,	// (0x0005e50a) list_medium_line_t3_g3_g_ParamLimits

0xfd6f,	// (0x0005e50a) list_medium_line_t3_g3_g

0x08ae,	// (0x0004f049) list_medium_line_t3_g3_t1_ParamLimits

0x08ae,	// (0x0004f049) list_medium_line_t3_g3_t1

0x08c7,	// (0x0004f062) list_medium_line_t3_g3_t2_ParamLimits

0x08c7,	// (0x0004f062) list_medium_line_t3_g3_t2

0x08dd,	// (0x0004f078) list_medium_line_t3_g3_t3_ParamLimits

0x08dd,	// (0x0004f078) list_medium_line_t3_g3_t3

0x0002,

0xfd7b,	// (0x0005e516) list_medium_line_t3_g3_t_ParamLimits

0xfd7b,	// (0x0005e516) list_medium_line_t3_g3_t

0x0513,	// (0x0004ecae) list_medium_line_right_iconx2_g1

0x03f0,	// (0x0004eb8b) list_medium_line_right_iconx2_g2

0x0001,

0xfd82,	// (0x0005e51d) list_medium_line_right_iconx2_g

0x08f7,	// (0x0004f092) list_medium_line_right_iconx2_t1

0x0513,	// (0x0004ecae) list_medium_line_t2_right_iconx2_g1

0x03f0,	// (0x0004eb8b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd82,	// (0x0005e51d) list_medium_line_t2_right_iconx2_g

0x0905,	// (0x0004f0a0) list_medium_line_t2_right_iconx2_t1

0x0915,	// (0x0004f0b0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd87,	// (0x0005e522) list_medium_line_t2_right_iconx2_t

0x0927,	// (0x0004f0c2) list_medium_line_x4_t4_t1

0x0935,	// (0x0004f0d0) list_medium_line_x4_t4_t2

0x0945,	// (0x0004f0e0) list_medium_line_x4_t4_t3

0x0955,	// (0x0004f0f0) list_medium_line_x4_t4_t4

0x0003,

0xfd8c,	// (0x0005e527) list_medium_line_x4_t4_t

0x8813,	// (0x00056fae) tport_appsw_pane_ParamLimits

0x8813,	// (0x00056fae) tport_appsw_pane

0x882a,	// (0x00056fc5) tport_contact_pane_ParamLimits

0x882a,	// (0x00056fc5) tport_contact_pane

0x8842,	// (0x00056fdd) tport_listscroll_pane_ParamLimits

0x8842,	// (0x00056fdd) tport_listscroll_pane

0x8856,	// (0x00056ff1) cell_tport_appsw_pane_ParamLimits

0x8856,	// (0x00056ff1) cell_tport_appsw_pane

0xd783,	// (0x0005bf1e) tport_appsw_pane_g1_ParamLimits

0xd783,	// (0x0005bf1e) tport_appsw_pane_g1

0xe7db,	// (0x0005cf76) tport_contact_pane_g1

0xe7e4,	// (0x0005cf7f) tport_contact_pane_t1

0xe7f2,	// (0x0005cf8d) tport_contact_pane_t2

0x0001,

0xfd95,	// (0x0005e530) tport_contact_pane_t

0xe800,	// (0x0005cf9b) list_tport_pane

0xe809,	// (0x0005cfa4) scroll_pane_cp_030

0x88a0,	// (0x0005703b) cell_tport_appsw_pane_g1

0x88b0,	// (0x0005704b) cell_tport_appsw_pane_t1

0x88be,	// (0x00057059) grid_highlight_pane_cp019

0x88c6,	// (0x00057061) list_tport_double_graphic_pane_ParamLimits

0x88c6,	// (0x00057061) list_tport_double_graphic_pane

0xad09,	// (0x000594a4) list_highlight_pane_cp023_ParamLimits

0xad09,	// (0x000594a4) list_highlight_pane_cp023

0x88dd,	// (0x00057078) list_tport_double_graphic_pane_g1_ParamLimits

0x88dd,	// (0x00057078) list_tport_double_graphic_pane_g1

0x88ea,	// (0x00057085) list_tport_double_graphic_pane_t1_ParamLimits

0x88ea,	// (0x00057085) list_tport_double_graphic_pane_t1

0x88ff,	// (0x0005709a) list_tport_double_graphic_pane_t2_ParamLimits

0x88ff,	// (0x0005709a) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x0005e53c) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x0005e53c) list_tport_double_graphic_pane_t

0x9a5a,	// (0x000581f5) main_cale_note_pane

0x6837,	// (0x00054fd2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6837,	// (0x00054fd2) cell_vitu2_function_top_wide_pane_cp01

0x80f6,	// (0x00056891) wait_bar_pane_cp05_ParamLimits

0xad09,	// (0x000594a4) listscroll_cmail_pane

0xe812,	// (0x0005cfad) list_cmail_pane

0x8911,	// (0x000570ac) list_cmail_body_pane

0x8928,	// (0x000570c3) list_single_cmail_header_caption_pane

0xe822,	// (0x0005cfbd) list_single_cmail_header_detail_pane_ParamLimits

0xe822,	// (0x0005cfbd) list_single_cmail_header_detail_pane

0xe854,	// (0x0005cfef) list_single_cmail_header_caption_pane_t1

0x0965,	// (0x0004f100) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0965,	// (0x0004f100) list_single_cmail_header_detail_pane_g1

0x8945,	// (0x000570e0) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8945,	// (0x000570e0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x0005e541) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x0005e541) list_single_cmail_header_detail_pane_g

0x8951,	// (0x000570ec) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8951,	// (0x000570ec) list_single_cmail_header_detail_pane_t1

0x89b1,	// (0x0005714c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x89b1,	// (0x0005714c) list_single_cmail_header_editor_pane_bg

0xe3dc,	// (0x0005cb77) list_cmail_body_pane_g1

0xe878,	// (0x0005d013) list_cmail_body_pane_t1

0xd7a3,	// (0x0005bf3e) list_single_cmail_header_editor_pane_bg_g1

0xadd1,	// (0x0005956c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd7b3,	// (0x0005bf4e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd7ab,	// (0x0005bf46) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd9d6,	// (0x0005c171) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd7d3,	// (0x0005bf6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd7c3,	// (0x0005bf5e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd7cb,	// (0x0005bf66) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xadb1,	// (0x0005954c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89c8,	// (0x00057163) calenote_gesture_pane_ParamLimits

0x89c8,	// (0x00057163) calenote_gesture_pane

0x89e8,	// (0x00057183) calenote_window_pane_ParamLimits

0x89e8,	// (0x00057183) calenote_window_pane

0xe886,	// (0x0005d021) popup_note_window_cp01

0x8a04,	// (0x0005719f) calenote_swipe_1_pane_ParamLimits

0x8a04,	// (0x0005719f) calenote_swipe_1_pane

0x861f,	// (0x00056dba) calenote_swipe_2_pane_ParamLimits

0x861f,	// (0x00056dba) calenote_swipe_2_pane

0xe63b,	// (0x0005cdd6) calenote_swipe_1_pane_g1_ParamLimits

0xe63b,	// (0x0005cdd6) calenote_swipe_1_pane_g1

0xe648,	// (0x0005cde3) calenote_swipe_1_pane_g2_ParamLimits

0xe648,	// (0x0005cde3) calenote_swipe_1_pane_g2

0x0001,

0xfcca,	// (0x0005e465) calenote_swipe_1_pane_g_ParamLimits

0xfcca,	// (0x0005e465) calenote_swipe_1_pane_g

0xe898,	// (0x0005d033) calenote_swipe_1_pane_t1_ParamLimits

0xe898,	// (0x0005d033) calenote_swipe_1_pane_t1

0xe63b,	// (0x0005cdd6) calenote_swipe_2_pane_g1_ParamLimits

0xe63b,	// (0x0005cdd6) calenote_swipe_2_pane_g1

0xe8b7,	// (0x0005d052) calenote_swipe_2_pane_g2_ParamLimits

0xe8b7,	// (0x0005d052) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x0005e54d) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x0005e54d) calenote_swipe_2_pane_g

0xe8c3,	// (0x0005d05e) calenote_swipe_2_pane_t1_ParamLimits

0xe8c3,	// (0x0005d05e) calenote_swipe_2_pane_t1

0x9a5a,	// (0x000581f5) main_mup_navstr_pane

0x5426,	// (0x00053bc1) main_mup3_pane_t7_ParamLimits

0x5426,	// (0x00053bc1) main_mup3_pane_t7

0xa90a,	// (0x000590a5) main_mp4_pane_g6_ParamLimits

0xa90a,	// (0x000590a5) main_mp4_pane_g6

0xaaca,	// (0x00059265) main_image3_pane_t4_ParamLimits

0xaaca,	// (0x00059265) main_image3_pane_t4

0x8a19,	// (0x000571b4) popup_navstr_preview_pane_ParamLimits

0x8a19,	// (0x000571b4) popup_navstr_preview_pane

0x8a29,	// (0x000571c4) scroll_navstr_pane_ParamLimits

0x8a29,	// (0x000571c4) scroll_navstr_pane

0x9a5a,	// (0x000581f5) bg_popup_preview_window_pane_cp04

0xe8ea,	// (0x0005d085) popup_navstr_preview_pane_t1

0x8a3d,	// (0x000571d8) scroll_navstr_pane_g1_ParamLimits

0x8a3d,	// (0x000571d8) scroll_navstr_pane_g1

0x8a51,	// (0x000571ec) scroll_navstr_pane_t1_ParamLimits

0x8a51,	// (0x000571ec) scroll_navstr_pane_t1

0xe88f,	// (0x0005d02a) bg_button_pane_cp014

0xe88f,	// (0x0005d02a) bg_button_pane_cp030

0x0350,	// (0x0004eaeb) list_double_fisheye_pane_g4_ParamLimits

0x0350,	// (0x0004eaeb) list_double_fisheye_pane_g4

0x035c,	// (0x0004eaf7) list_double_fisheye_pane_g5_ParamLimits

0x035c,	// (0x0004eaf7) list_double_fisheye_pane_g5

0xd29c,	// (0x0005ba37) sp_fs_scroll_pane_cp03

0xe754,	// (0x0005ceef) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe760,	// (0x0005cefb) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce7,	// (0x0005e482) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe76c,	// (0x0005cf07) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe81a,	// (0x0005cfb5) sp_fs_scroll_pane_cp02

0xa3c1,	// (0x00058b5c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa3c1,	// (0x00058b5c) popup_sp_fs_calendar_preview_list_single_pane

0x9a5a,	// (0x000581f5) main_cam6_pano_pane

0xad09,	// (0x000594a4) main_mup3_pane_ParamLimits

0x9a5a,	// (0x000581f5) main_phacti_pane

0x7fc7,	// (0x00056762) bg_button_pane_cp11

0x7fe1,	// (0x0005677c) main_mobtv_info_pane_g2_ParamLimits

0x7fe1,	// (0x0005677c) main_mobtv_info_pane_g2

0x0001,

0xfc47,	// (0x0005e3e2) main_mobtv_info_pane_g_ParamLimits

0xfc47,	// (0x0005e3e2) main_mobtv_info_pane_g

0x81be,	// (0x00056959) sc_clock_pane_t5_ParamLimits

0x81be,	// (0x00056959) sc_clock_pane_t5

0x83f2,	// (0x00056b8d) main_radioblah_pane_g1_ParamLimits

0xe56d,	// (0x0005cd08) main_radioblah_pane_t3_ParamLimits

0xe56d,	// (0x0005cd08) main_radioblah_pane_t3

0xe585,	// (0x0005cd20) main_radioblah_pane_t4_ParamLimits

0xe585,	// (0x0005cd20) main_radioblah_pane_t4

0x841a,	// (0x00056bb5) main_radioblah_text_pane_ParamLimits

0x841a,	// (0x00056bb5) main_radioblah_text_pane

0x842c,	// (0x00056bc7) main_radioblah_info_pane_g1_ParamLimits

0x84c5,	// (0x00056c60) main_radioblah_info_pane_t4_ParamLimits

0x84c5,	// (0x00056c60) main_radioblah_info_pane_t4

0xad09,	// (0x000594a4) main_sp_fs_calendar_pane

0x8a68,	// (0x00057203) main_phacti_pane_g1

0x8a70,	// (0x0005720b) phacti_note_pane_ParamLimits

0x8a70,	// (0x0005720b) phacti_note_pane

0xe901,	// (0x0005d09c) phacti_term_pane_ParamLimits

0xe901,	// (0x0005d09c) phacti_term_pane

0xe916,	// (0x0005d0b1) phacti_note_pane_t1_ParamLimits

0xe916,	// (0x0005d0b1) phacti_note_pane_t1

0x8a84,	// (0x0005721f) phacti_term_pane_g1

0x8a8c,	// (0x00057227) phacti_term_pane_t1_ParamLimits

0x8a8c,	// (0x00057227) phacti_term_pane_t1

0xe92d,	// (0x0005d0c8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe935,	// (0x0005d0d0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbc,	// (0x0005e557) popup_sp_fs_calendar_preview_list_single_pane_g

0xe93d,	// (0x0005d0d8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe93d,	// (0x0005d0d8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe953,	// (0x0005d0ee) aid_popup_sp_fs_bg_corner_pane

0xce04,	// (0x0005b59f) popup_sp_fs_calendar_preview_bg_pane_g1

0x9a5a,	// (0x000581f5) popup_sp_fs_calendar_preview_bg_pane

0xe95b,	// (0x0005d0f6) popup_sp_fs_calendar_preview_list_pane

0xc9cc,	// (0x0005b167) bg_main_sp_fs_cale_pane_ParamLimits

0xc9cc,	// (0x0005b167) bg_main_sp_fs_cale_pane

0x8b20,	// (0x000572bb) listscroll_cale_mrui_pane_ParamLimits

0x8b20,	// (0x000572bb) listscroll_cale_mrui_pane

0x8b35,	// (0x000572d0) listscroll_sp_fs_schedule_track_pane

0x8b3e,	// (0x000572d9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8b3e,	// (0x000572d9) main_sp_fs_ctrlbar_pane_cp01

0xe963,	// (0x0005d0fe) main_sp_fs_ribbon_pane

0x8b51,	// (0x000572ec) popup_sp_fs_cale_preview_window

0x8b63,	// (0x000572fe) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8b63,	// (0x000572fe) list_single_sp_fs_schedule_track_pane

0xad09,	// (0x000594a4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xad09,	// (0x000594a4) bg_sp_fs_highlight_list_pane_cp03

0x8b77,	// (0x00057312) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8b77,	// (0x00057312) list_single_sp_fs_schedule_track_pane_g1

0x8b83,	// (0x0005731e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8b83,	// (0x0005731e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc1,	// (0x0005e55c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc1,	// (0x0005e55c) list_single_sp_fs_schedule_track_pane_g

0x8b8f,	// (0x0005732a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8b8f,	// (0x0005732a) list_single_sp_fs_schedule_track_pane_t1

0x8bb1,	// (0x0005734c) sp_fs_schedule_track_pane_ParamLimits

0x8bb1,	// (0x0005734c) sp_fs_schedule_track_pane

0xe96b,	// (0x0005d106) sp_fs_schedule_track_pane_g1

0xe973,	// (0x0005d10e) sp_fs_schedule_track_pane_g2

0xe97b,	// (0x0005d116) sp_fs_schedule_track_pane_g3

0xe983,	// (0x0005d11e) sp_fs_schedule_track_pane_g4

0xe98b,	// (0x0005d126) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc6,	// (0x0005e561) sp_fs_schedule_track_pane_g

0xd7a3,	// (0x0005bf3e) bg_sp_fs_schedule_viewer_highlight_g1

0xadd1,	// (0x0005956c) bg_sp_fs_schedule_viewer_highlight_g2

0xd7ab,	// (0x0005bf46) bg_sp_fs_schedule_viewer_highlight_g3

0xd7b3,	// (0x0005bf4e) bg_sp_fs_schedule_viewer_highlight_g4

0xd9d6,	// (0x0005c171) bg_sp_fs_schedule_viewer_highlight_g5

0xd7c3,	// (0x0005bf5e) bg_sp_fs_schedule_viewer_highlight_g6

0xd7cb,	// (0x0005bf66) bg_sp_fs_schedule_viewer_highlight_g7

0xd7d3,	// (0x0005bf6e) bg_sp_fs_schedule_viewer_highlight_g8

0xadb1,	// (0x0005954c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd1,	// (0x0005e56c) bg_sp_fs_schedule_viewer_highlight_g

0x9a5a,	// (0x000581f5) bg_main_sp_fs_ribbon_pane

0x8bc6,	// (0x00057361) main_sp_fs_ribbon_pane_g1

0xe993,	// (0x0005d12e) main_sp_fs_ribbon_pane_t1

0x8bcf,	// (0x0005736a) main_sp_fs_ribbon_pane_t2

0xe9a2,	// (0x0005d13d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde4,	// (0x0005e57f) main_sp_fs_ribbon_pane_t

0xe9b1,	// (0x0005d14c) main_sp_fs_ribbon_scheduler_pane

0xe9b9,	// (0x0005d154) bg_main_sp_fs_ribbon_pane_g1

0xe9c2,	// (0x0005d15d) bg_main_sp_fs_ribbon_pane_g2

0xe9cb,	// (0x0005d166) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdeb,	// (0x0005e586) bg_main_sp_fs_ribbon_pane_g

0xe9d3,	// (0x0005d16e) main_sp_fs_ribbon_scheduler_pane_g1

0xe9dc,	// (0x0005d177) main_sp_fs_ribbon_scheduler_pane_g2

0xe9e5,	// (0x0005d180) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf2,	// (0x0005e58d) main_sp_fs_ribbon_scheduler_pane_g

0xe9ee,	// (0x0005d189) list_cale_mrui_pane

0x8bde,	// (0x00057379) sp_fs_scroll_pane_cp07_ParamLimits

0x8bde,	// (0x00057379) sp_fs_scroll_pane_cp07

0x8bfa,	// (0x00057395) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8bfa,	// (0x00057395) bg_sp_fs_schedule_viewer_highlight

0xe9fb,	// (0x0005d196) list_single_sp_fs_schedule_track_pane_cp01

0xea03,	// (0x0005d19e) list_sp_fs_schedule_track_pane

0xea0b,	// (0x0005d1a6) sp_fs_scroll_pane_cp06_ParamLimits

0xea0b,	// (0x0005d1a6) sp_fs_scroll_pane_cp06

0xce04,	// (0x0005b59f) bgmain_sp_fs_calendar_pane_g1

0x097d,	// (0x0004f118) list_single_cale_mrui_pane_ParamLimits

0x097d,	// (0x0004f118) list_single_cale_mrui_pane

0x8c0c,	// (0x000573a7) list_single_cale_mrui_row_pane_ParamLimits

0x8c0c,	// (0x000573a7) list_single_cale_mrui_row_pane

0x8c19,	// (0x000573b4) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8c19,	// (0x000573b4) list_single_cale_mrui_row_pane_g1

0x8c51,	// (0x000573ec) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8c51,	// (0x000573ec) list_single_cale_mrui_row_pane_t1

0x09a1,	// (0x0004f13c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x09a1,	// (0x0004f13c) list_single_cale_mrui_row_pane_t2

0x8c63,	// (0x000573fe) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8c63,	// (0x000573fe) list_single_cale_mrui_row_pane_t3

0x8c92,	// (0x0005742d) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8c92,	// (0x0005742d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe00,	// (0x0005e59b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe00,	// (0x0005e59b) list_single_cale_mrui_row_pane_t

0x0a07,	// (0x0004f1a2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0a07,	// (0x0004f1a2) list_single_cmail_header_editor_pane_bg_cp01

0x0a2b,	// (0x0004f1c6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0a2b,	// (0x0004f1c6) list_single_cmail_header_editor_pane_bg_cp02

0x8cc1,	// (0x0005745c) main_radioblah_text_pane_t1_ParamLimits

0x8cc1,	// (0x0005745c) main_radioblah_text_pane_t1

0xea2a,	// (0x0005d1c5) cam6_indi_pane_cp01

0xea32,	// (0x0005d1cd) cam6_mode_pane_cp01

0xea3a,	// (0x0005d1d5) cam6_pano_pane

0xea43,	// (0x0005d1de) cam6_zoom_pane_cp01

0xea4d,	// (0x0005d1e8) cam6_pano_image_pane

0xea56,	// (0x0005d1f1) cam6_pano_pane_g1

0xe3dc,	// (0x0005cb77) cam6_pano_pane_g2

0xea5f,	// (0x0005d1fa) cam6_pano_pane_g3

0xea68,	// (0x0005d203) cam6_pano_pane_g4

0xd3a7,	// (0x0005bb42) cam6_pano_pane_g5

0xea71,	// (0x0005d20c) cam6_pano_pane_g6

0xea79,	// (0x0005d214) cam6_pano_pane_g7

0xea81,	// (0x0005d21c) cam6_pano_pane_g8

0xea8a,	// (0x0005d225) cam6_pano_pane_g9

0x0008,

0xfe09,	// (0x0005e5a4) cam6_pano_pane_g

0x9a5a,	// (0x000581f5) main_browser_tag_pane

0xe8e2,	// (0x0005d07d) grid_navstr_albumart_pane

0xea95,	// (0x0005d230) cell_navstr_albumart_pane_ParamLimits

0xea95,	// (0x0005d230) cell_navstr_albumart_pane

0xeab1,	// (0x0005d24c) cell_navstr_albumart_pane_g1

0xc7d9,	// (0x0005af74) cell_navstr_albumart_pane_g2

0xc7e9,	// (0x0005af84) cell_navstr_albumart_pane_g3

0xc7e1,	// (0x0005af7c) cell_navstr_albumart_pane_g4

0x0003,

0xfe1c,	// (0x0005e5b7) cell_navstr_albumart_pane_g

0x8cdc,	// (0x00057477) bt_list_pane_ParamLimits

0x8cdc,	// (0x00057477) bt_list_pane

0x8cf2,	// (0x0005748d) bt_list_pane_t1

0x8d01,	// (0x0005749c) bt_list_pane_t2

0x0001,

0xfe25,	// (0x0005e5c0) bt_list_pane_t

0x9a5a,	// (0x000581f5) main_cale_prevew_pane

0x8d10,	// (0x000574ab) popup_cale_preview_window_ParamLimits

0x8d10,	// (0x000574ab) popup_cale_preview_window

0xad09,	// (0x000594a4) bg_popup_preview_window_pane_cp05_ParamLimits

0xad09,	// (0x000594a4) bg_popup_preview_window_pane_cp05

0xeab9,	// (0x0005d254) list_cale_preview_pane_ParamLimits

0xeab9,	// (0x0005d254) list_cale_preview_pane

0x8d2d,	// (0x000574c8) list_double_cale_preview_pane_ParamLimits

0x8d2d,	// (0x000574c8) list_double_cale_preview_pane

0x8d41,	// (0x000574dc) list_single_cale_preview_pane_ParamLimits

0x8d41,	// (0x000574dc) list_single_cale_preview_pane

0x8d59,	// (0x000574f4) list_single_cale_preview_pane_g1

0x8d61,	// (0x000574fc) list_single_cale_preview_pane_t1_ParamLimits

0x8d61,	// (0x000574fc) list_single_cale_preview_pane_t1

0x8d76,	// (0x00057511) list_double_cale_preview_pane_g1

0x8d7e,	// (0x00057519) list_double_cale_preview_pane_t1_ParamLimits

0x8d7e,	// (0x00057519) list_double_cale_preview_pane_t1

0x8d93,	// (0x0005752e) list_double_cale_preview_pane_t2_ParamLimits

0x8d93,	// (0x0005752e) list_double_cale_preview_pane_t2

0x0001,

0xfe2a,	// (0x0005e5c5) list_double_cale_preview_pane_t_ParamLimits

0xfe2a,	// (0x0005e5c5) list_double_cale_preview_pane_t

0x9a5a,	// (0x000581f5) main_ezdial_pane

0xad09,	// (0x000594a4) main_sp_fs_email_pane_ParamLimits

0x8639,	// (0x00056dd4) cmail_ddmenu_btn01_pane_ParamLimits

0x8639,	// (0x00056dd4) cmail_ddmenu_btn01_pane

0x864c,	// (0x00056de7) cmail_ddmenu_btn02_pane_ParamLimits

0x864c,	// (0x00056de7) cmail_ddmenu_btn02_pane

0x866f,	// (0x00056e0a) cmail_ddmenu_btn03_pane_ParamLimits

0x866f,	// (0x00056e0a) cmail_ddmenu_btn03_pane

0x8697,	// (0x00056e32) main_sp_fs_ctrlbar_pane_ParamLimits

0x86bb,	// (0x00056e56) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8911,	// (0x000570ac) list_cmail_body_pane_ParamLimits

0xe862,	// (0x0005cffd) bg_button_pane_cp12

0xe86b,	// (0x0005d006) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe86b,	// (0x0005d006) list_single_cmail_header_detail_pane_g3

0x898d,	// (0x00057128) list_single_cmail_header_detail_pane_t2_ParamLimits

0x898d,	// (0x00057128) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0005e548) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0005e548) list_single_cmail_header_detail_pane_t

0x8aa1,	// (0x0005723c) phacti_term_pane_t2_ParamLimits

0x8aa1,	// (0x0005723c) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x0005e552) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x0005e552) phacti_term_pane_t

0xeac5,	// (0x0005d260) aid_size_list_single_double

0x8dab,	// (0x00057546) popup_ezdial_listscroll_window

0x8dc7,	// (0x00057562) popup_number_entry_window_cp01

0xa465,	// (0x00058c00) bg_popup_call_pane_cp09

0xead1,	// (0x0005d26c) ezdial_list_pane

0xead9,	// (0x0005d274) scroll_pane_cp23

0xc9cc,	// (0x0005b167) bg_button_pane_cp028_ParamLimits

0xc9cc,	// (0x0005b167) bg_button_pane_cp028

0x8dd5,	// (0x00057570) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8dd5,	// (0x00057570) cmail_ddmenu_btn01_pane_g1

0x8de1,	// (0x0005757c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8de1,	// (0x0005757c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2f,	// (0x0005e5ca) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2f,	// (0x0005e5ca) cmail_ddmenu_btn01_pane_g

0xeae1,	// (0x0005d27c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae1,	// (0x0005d27c) cmail_ddmenu_btn01_pane_t1

0xc9cc,	// (0x0005b167) bg_button_pane_cp029_ParamLimits

0xc9cc,	// (0x0005b167) bg_button_pane_cp029

0x8ded,	// (0x00057588) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ded,	// (0x00057588) cmail_ddmenu_btn02_pane_g1

0x8e05,	// (0x000575a0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e05,	// (0x000575a0) cmail_ddmenu_btn02_pane_t1

0xad09,	// (0x000594a4) bg_button_pane_cp031_ParamLimits

0xad09,	// (0x000594a4) bg_button_pane_cp031

0x8ded,	// (0x00057588) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ded,	// (0x00057588) cmail_ddmenu_btn03_pane_g1

0x8e05,	// (0x000575a0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e05,	// (0x000575a0) cmail_ddmenu_btn03_pane_t1

0x6007,	// (0x000547a2) cell_dialer2_keypad_pane_t1_ParamLimits

0x6021,	// (0x000547bc) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6021,	// (0x000547bc) cell_dialer2_keypad_pane_t1_copy1

0x7de8,	// (0x00056583) ncimui_group_button_pane

0xad09,	// (0x000594a4) main_sp_fs_calendar_pane_ParamLimits

0x8928,	// (0x000570c3) list_single_cmail_header_caption_pane_ParamLimits

0x8ad4,	// (0x0005726f) aid_recal_txt_sm_pane

0x9a5a,	// (0x000581f5) mian_recal_day_pane

0x8b51,	// (0x000572ec) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf6,	// (0x0005d291) list_recal_day_pane

0x8e45,	// (0x000575e0) list_single_recal_day_pane_ParamLimits

0x8e45,	// (0x000575e0) list_single_recal_day_pane

0xeb1d,	// (0x0005d2b8) list_single_recal_day_pane_g1_ParamLimits

0xeb1d,	// (0x0005d2b8) list_single_recal_day_pane_g1

0x8e57,	// (0x000575f2) list_single_recal_day_pane_g2_ParamLimits

0x8e57,	// (0x000575f2) list_single_recal_day_pane_g2

0x8e63,	// (0x000575fe) list_single_recal_day_pane_g3_ParamLimits

0x8e63,	// (0x000575fe) list_single_recal_day_pane_g3

0x0a49,	// (0x0004f1e4) list_single_recal_day_pane_g4_ParamLimits

0x0a49,	// (0x0004f1e4) list_single_recal_day_pane_g4

0x8e6f,	// (0x0005760a) list_single_recal_day_pane_g5_ParamLimits

0x8e6f,	// (0x0005760a) list_single_recal_day_pane_g5

0x8e7b,	// (0x00057616) list_single_recal_day_pane_g6_ParamLimits

0x8e7b,	// (0x00057616) list_single_recal_day_pane_g6

0x0004,

0xfe3e,	// (0x0005e5d9) list_single_recal_day_pane_g_ParamLimits

0xfe3e,	// (0x0005e5d9) list_single_recal_day_pane_g

0x8e8f,	// (0x0005762a) list_single_recal_day_pane_t1

0x8ea1,	// (0x0005763c) list_single_recal_day_pane_t2

0x0001,

0xfe49,	// (0x0005e5e4) list_single_recal_day_pane_t

0x8eb3,	// (0x0005764e) ncimui_query_button_pane_ParamLimits

0x8eb3,	// (0x0005764e) ncimui_query_button_pane

0x8ec3,	// (0x0005765e) ncimui_query_button_pane_t1_ParamLimits

0x8ec3,	// (0x0005765e) ncimui_query_button_pane_t1

0xeb29,	// (0x0005d2c4) ncimui_query_button_pane_t2_ParamLimits

0xeb29,	// (0x0005d2c4) ncimui_query_button_pane_t2

0x0001,

0xfe4e,	// (0x0005e5e9) ncimui_query_button_pane_t_ParamLimits

0xfe4e,	// (0x0005e5e9) ncimui_query_button_pane_t

0x8ed6,	// (0x00057671) query_button_pane_ParamLimits

0x8ed6,	// (0x00057671) query_button_pane

0x9a5a,	// (0x000581f5) bg_button_pane_cp0028

0xeb3c,	// (0x0005d2d7) query_button_pane_t1

0x3fd1,	// (0x0005276c) main_tport_pane_ParamLimits

0x87d2,	// (0x00056f6d) bg_popup_window_pane_cp01_ParamLimits

0x87d2,	// (0x00056f6d) bg_popup_window_pane_cp01

0x87eb,	// (0x00056f86) heading_pane_cp08_ParamLimits

0x87eb,	// (0x00056f86) heading_pane_cp08

0x87fe,	// (0x00056f99) heading_pane_cp07_ParamLimits

0x87fe,	// (0x00056f99) heading_pane_cp07

0x88a0,	// (0x0005703b) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x0005e535) cell_tport_appsw_pane_g

0xfdbb,	// (0x0004e556) input_candi_list_open_g1

0xaf94,	// (0x0005972f) list_cale_time_pane_g6_ParamLimits

0xaf94,	// (0x0005972f) list_cale_time_pane_g6

0x4dad,	// (0x00053548) aid_size_touch_calib_1_ParamLimits

0x4dad,	// (0x00053548) aid_size_touch_calib_1

0x4dbf,	// (0x0005355a) aid_size_touch_calib_2_ParamLimits

0x4dbf,	// (0x0005355a) aid_size_touch_calib_2

0x4dd7,	// (0x00053572) aid_size_touch_calib_3_ParamLimits

0x4dd7,	// (0x00053572) aid_size_touch_calib_3

0x4df5,	// (0x00053590) aid_size_touch_calib_4_ParamLimits

0x4df5,	// (0x00053590) aid_size_touch_calib_4

0x4e0d,	// (0x000535a8) main_touch_calib_button_group_pane_ParamLimits

0x4e0d,	// (0x000535a8) main_touch_calib_button_group_pane

0x4e25,	// (0x000535c0) main_touch_calib_pane_g1_ParamLimits

0x4e37,	// (0x000535d2) main_touch_calib_pane_g2_ParamLimits

0x4e49,	// (0x000535e4) main_touch_calib_pane_g3_ParamLimits

0x4e5b,	// (0x000535f6) main_touch_calib_pane_g4_ParamLimits

0xf754,	// (0x0005deef) main_touch_calib_pane_g_ParamLimits

0x4e6d,	// (0x00053608) main_touch_calib_pane_t1_ParamLimits

0x4e87,	// (0x00053622) main_touch_calib_pane_t2_ParamLimits

0x4ea1,	// (0x0005363c) main_touch_calib_pane_t3_ParamLimits

0x4eb5,	// (0x00053650) main_touch_calib_pane_t4_ParamLimits

0x4ecb,	// (0x00053666) main_touch_calib_pane_t5_ParamLimits

0xf75d,	// (0x0005def8) main_touch_calib_pane_t_ParamLimits

0xd12b,	// (0x0005b8c6) list_single_fp_cale_pane_g3_ParamLimits

0xd12b,	// (0x0005b8c6) list_single_fp_cale_pane_g3

0xad09,	// (0x000594a4) bg_button_pane_cp012_ParamLimits

0xad09,	// (0x000594a4) bg_vkb2_func_pane_cp03_ParamLimits

0x7054,	// (0x000557ef) cell_vitu2_function_top_pane_g1_ParamLimits

0xad09,	// (0x000594a4) bg_vkb2_func_pane_cp04_ParamLimits

0x7d73,	// (0x0005650e) main_ncimui_button_group_pane_ParamLimits

0x7d73,	// (0x0005650e) main_ncimui_button_group_pane

0x7dd3,	// (0x0005656e) main_ncimui_pane_t3_ParamLimits

0x7dd3,	// (0x0005656e) main_ncimui_pane_t3

0xe8f8,	// (0x0005d093) phacti_button_group_pane

0xeac5,	// (0x0005d260) aid_size_list_single_double_ParamLimits

0x8dab,	// (0x00057546) popup_ezdial_listscroll_window_ParamLimits

0x8dc7,	// (0x00057562) popup_number_entry_window_cp01_ParamLimits

0x8ee9,	// (0x00057684) phacti_button_pane_ParamLimits

0x8ee9,	// (0x00057684) phacti_button_pane

0x9a5a,	// (0x000581f5) bg_button_pane_cp14

0xeb4a,	// (0x0005d2e5) phacti_button_pane_t1

0x8efa,	// (0x00057695) main_touch_calib_button_pane_ParamLimits

0x8efa,	// (0x00057695) main_touch_calib_button_pane

0xa251,	// (0x000589ec) bg_button_pane_cp18_ParamLimits

0xa251,	// (0x000589ec) bg_button_pane_cp18

0xeb58,	// (0x0005d2f3) main_touch_calib_button_pane_t1_ParamLimits

0xeb58,	// (0x0005d2f3) main_touch_calib_button_pane_t1

0xeb6e,	// (0x0005d309) main_touch_calib_button_pane_t2_ParamLimits

0xeb6e,	// (0x0005d309) main_touch_calib_button_pane_t2

0x0001,

0xfe53,	// (0x0005e5ee) main_touch_calib_button_pane_t_ParamLimits

0xfe53,	// (0x0005e5ee) main_touch_calib_button_pane_t

0x9a5a,	// (0x000581f5) cell_ncimui_button_pane

0x9a5a,	// (0x000581f5) bg_button_pane_cp032

0xeb8c,	// (0x0005d327) cell_ncimui_button_pane_t1

0xaaa8,	// (0x00059243) image3_infobar_pane_ParamLimits

0xaaa8,	// (0x00059243) image3_infobar_pane

0x81ea,	// (0x00056985) fs_bigclock_status_pane_ParamLimits

0x81ea,	// (0x00056985) fs_bigclock_status_pane

0x81f7,	// (0x00056992) main_fs_bigclock_clock_pane_ParamLimits

0x81f7,	// (0x00056992) main_fs_bigclock_clock_pane

0x8229,	// (0x000569c4) main_fs_bigclock_indi_pane_ParamLimits

0x8229,	// (0x000569c4) main_fs_bigclock_indi_pane

0x8269,	// (0x00056a04) main_fs_bigclock_swipe_pane_ParamLimits

0x8269,	// (0x00056a04) main_fs_bigclock_swipe_pane

0x9a5a,	// (0x000581f5) main_fs_clock_dumped_data

0x82b5,	// (0x00056a50) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x82b5,	// (0x00056a50) list_single_fs_bigclock_indicator_pane_g1

0x82ce,	// (0x00056a69) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x82ce,	// (0x00056a69) list_single_fs_bigclock_indicator_pane_g2

0x82e8,	// (0x00056a83) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x82e8,	// (0x00056a83) list_single_fs_bigclock_indicator_pane_g3

0x8302,	// (0x00056a9d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8302,	// (0x00056a9d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7b,	// (0x0005e416) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7b,	// (0x0005e416) list_single_fs_bigclock_indicator_pane_g

0x8331,	// (0x00056acc) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8331,	// (0x00056acc) list_single_fs_bigclock_indicator_pane_t1

0x8359,	// (0x00056af4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8359,	// (0x00056af4) list_single_fs_bigclock_indicator_pane_t2

0x8381,	// (0x00056b1c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8381,	// (0x00056b1c) list_single_fs_bigclock_indicator_pane_t3

0x83a9,	// (0x00056b44) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x83a9,	// (0x00056b44) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc86,	// (0x0005e421) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc86,	// (0x0005e421) list_single_fs_bigclock_indicator_pane_t

0xeb9a,	// (0x0005d335) image3_infobar_fav_pane_ParamLimits

0xeb9a,	// (0x0005d335) image3_infobar_fav_pane

0xebaa,	// (0x0005d345) image3_infobar_loc_pane_ParamLimits

0xebaa,	// (0x0005d345) image3_infobar_loc_pane

0xebc0,	// (0x0005d35b) image3_infobar_time_pane_ParamLimits

0xebc0,	// (0x0005d35b) image3_infobar_time_pane

0xce04,	// (0x0005b59f) image3_infobar_time_pane_g1

0xebd0,	// (0x0005d36b) image3_infobar_time_pane_t1

0xce04,	// (0x0005b59f) image3_infobar_loc_pane_g1

0xebde,	// (0x0005d379) image3_infobar_loc_pane_g2

0x0001,

0xfe58,	// (0x0005e5f3) image3_infobar_loc_pane_g

0xebe6,	// (0x0005d381) image3_infobar_loc_pane_t1

0xce04,	// (0x0005b59f) image3_infobar_fav_pane_g1

0xebf4,	// (0x0005d38f) image3_infobar_fav_pane_g2

0x0001,

0xfe5d,	// (0x0005e5f8) image3_infobar_fav_pane_g

0xebfc,	// (0x0005d397) fs_bigclock_status_battery_pane

0xec05,	// (0x0005d3a0) fs_bigclock_status_signal_pane

0xec0e,	// (0x0005d3a9) fs_bigclock_status_title_pane

0xec17,	// (0x0005d3b2) fs_bigclock_status_signal_pane_g1

0xec20,	// (0x0005d3bb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe62,	// (0x0005e5fd) fs_bigclock_status_signal_pane_g

0xec28,	// (0x0005d3c3) fs_bigclock_status_battery_pane_g1

0xec31,	// (0x0005d3cc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe67,	// (0x0005e602) fs_bigclock_status_battery_pane_g

0xec39,	// (0x0005d3d4) fs_bigclock_status_title_pane_t1

0x8f0f,	// (0x000576aa) main_fs_bigclock_clock_pane_g1

0x8f0f,	// (0x000576aa) main_fs_bigclock_clock_pane_g2

0x8f22,	// (0x000576bd) main_fs_bigclock_clock_pane_g3

0x8f22,	// (0x000576bd) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6c,	// (0x0005e607) main_fs_bigclock_clock_pane_g

0x8f39,	// (0x000576d4) main_fs_bigclock_clock_pane_t1

0x8f4f,	// (0x000576ea) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe75,	// (0x0005e610) main_fs_bigclock_clock_pane_t

0xec47,	// (0x0005d3e2) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec47,	// (0x0005d3e2) list_single_fs_bigclock_indicator_pane

0xec58,	// (0x0005d3f3) list_single_fs_bigclock_pane_ParamLimits

0xec58,	// (0x0005d3f3) list_single_fs_bigclock_pane

0xec7e,	// (0x0005d419) main_fs_bigclock_indicator_pane_t1

0xec8d,	// (0x0005d428) list_single_fs_bigclock_pane_g1

0xec95,	// (0x0005d430) list_single_fs_bigclock_pane_t1

0xce04,	// (0x0005b59f) main_fs_bigclock_swipe_pane_g1

0xecd8,	// (0x0005d473) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe86,	// (0x0005e621) main_fs_bigclock_swipe_pane_g

0xece0,	// (0x0005d47b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xece0,	// (0x0005d47b) main_fs_bigclock_swipe_pane_t1

0x2e4d,	// (0x000515e8) call_type_pane_ParamLimits

0x9a5a,	// (0x000581f5) main_btmg_pane

0x8c45,	// (0x000573e0) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8c45,	// (0x000573e0) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf9,	// (0x0005e594) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf9,	// (0x0005e594) list_single_cale_mrui_row_pane_g

0x8e33,	// (0x000575ce) list_recal_vselct_arw_lo_pane

0xeb15,	// (0x0005d2b0) list_recal_vselct_arw_up_pane

0x8e3b,	// (0x000575d6) list_recal_vselct_pane

0x8fb1,	// (0x0005774c) btmg_button_pane

0x8fbb,	// (0x00057756) main_btmg_pane_g1

0x9a5a,	// (0x000581f5) bg_button_pane_cp044

0xecfd,	// (0x0005d498) btmg_button_pane_t1

0xc9b8,	// (0x0005b153) aid_listscroll_gen

0xad09,	// (0x000594a4) main_cntbar_detail_pane

0xe812,	// (0x0005cfad) list_cmail_folder_pane

0xd29c,	// (0x0005ba37) sp_fs_scroll_pane_cp03_ParamLimits

0x0a61,	// (0x0004f1fc) list_single_fs_dyc_pane_cp01_ParamLimits

0x0a61,	// (0x0004f1fc) list_single_fs_dyc_pane_cp01

0xed0b,	// (0x0005d4a6) aid_size_cmail_indent

0x8fc5,	// (0x00057760) list_single_dyc_row_pane_cp01

0x9002,	// (0x0005779d) cntbar_detail_list_pane_ParamLimits

0x9002,	// (0x0005779d) cntbar_detail_list_pane

0x9054,	// (0x000577ef) main_cntbar_detail_cont_pane_ParamLimits

0x9054,	// (0x000577ef) main_cntbar_detail_cont_pane

0xd29c,	// (0x0005ba37) scroll_pane_cp032_ParamLimits

0xd29c,	// (0x0005ba37) scroll_pane_cp032

0x9068,	// (0x00057803) cntbar_detail_list_event_pane_ParamLimits

0x9068,	// (0x00057803) cntbar_detail_list_event_pane

0x9014,	// (0x000577af) cntbar_detail_list_shct_pane

0xae1f,	// (0x000595ba) aid_list_gen

0xed14,	// (0x0005d4af) aid_scroll

0xed1d,	// (0x0005d4b8) aid_size_touch_scroll_bar

0x765f,	// (0x00055dfa) aid_list_double

0x0a7c,	// (0x0004f217) aid_list_single

0x765f,	// (0x00055dfa) aid_list_single_lg

0x0a85,	// (0x0004f220) aid_list_z_g_a_sm

0x0a8d,	// (0x0004f228) aid_list_z_g_d

0x0a95,	// (0x0004f230) aid_txt_z_prm

0x0aa3,	// (0x0004f23e) aid_txt_z_prm_cp01

0x0ab1,	// (0x0004f24c) aid_txt_z_sec

0x9078,	// (0x00057813) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9078,	// (0x00057813) main_cntbar_detail_cont_pane_g1

0x908c,	// (0x00057827) main_cntbar_detail_cont_pane_g2_ParamLimits

0x908c,	// (0x00057827) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8b,	// (0x0005e626) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8b,	// (0x0005e626) main_cntbar_detail_cont_pane_g

0xed26,	// (0x0005d4c1) main_cntbar_detail_cont_pane_t1

0xed34,	// (0x0005d4cf) main_cntbar_detail_cont_pane_t2

0xed42,	// (0x0005d4dd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe90,	// (0x0005e62b) main_cntbar_detail_cont_pane_t

0x909c,	// (0x00057837) cell_cntbar_detail_list_shct_pane_ParamLimits

0x909c,	// (0x00057837) cell_cntbar_detail_list_shct_pane

0xed50,	// (0x0005d4eb) cntbar_detail_list_shct_pane_g1

0xed59,	// (0x0005d4f4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe97,	// (0x0005e632) cntbar_detail_list_shct_pane_g

0x90ae,	// (0x00057849) cntbar_detail_list_event_pane_g1_ParamLimits

0x90ae,	// (0x00057849) cntbar_detail_list_event_pane_g1

0x90ba,	// (0x00057855) cntbar_detail_list_event_pane_g2_ParamLimits

0x90ba,	// (0x00057855) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9c,	// (0x0005e637) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9c,	// (0x0005e637) cntbar_detail_list_event_pane_g

0x9128,	// (0x000578c3) cntbar_detail_list_event_pane_t1_ParamLimits

0x9128,	// (0x000578c3) cntbar_detail_list_event_pane_t1

0x913d,	// (0x000578d8) cntbar_detail_list_event_pane_t2_ParamLimits

0x913d,	// (0x000578d8) cntbar_detail_list_event_pane_t2

0x0002,

0xfea9,	// (0x0005e644) cntbar_detail_list_event_pane_t_ParamLimits

0xfea9,	// (0x0005e644) cntbar_detail_list_event_pane_t

0xce04,	// (0x0005b59f) cell_cntbar_detail_list_shct_pane_g1

0xb56d,	// (0x00059d08) navi_pane_mv_g3

0xad09,	// (0x000594a4) main_cntbar_detail_pane_ParamLimits

0x9a5a,	// (0x000581f5) main_notif_wgt_pane

0xa898,	// (0x00059033) aid_tch_main_mp4_pane_g4

0xaaa0,	// (0x0005923b) popup_slider_window_cp02

0x8e29,	// (0x000575c4) list_recal_day_event_pane

0x8fce,	// (0x00057769) cntbar_detail_btn_pane_ParamLimits

0x8fce,	// (0x00057769) cntbar_detail_btn_pane

0x8fe7,	// (0x00057782) cntbar_detail_btn_pane_cp01_ParamLimits

0x8fe7,	// (0x00057782) cntbar_detail_btn_pane_cp01

0x9014,	// (0x000577af) cntbar_detail_list_shct_pane_ParamLimits

0x9024,	// (0x000577bf) cntbar_detail_pane_g1_ParamLimits

0x9024,	// (0x000577bf) cntbar_detail_pane_g1

0x9038,	// (0x000577d3) cntbar_detail_pane_t1_ParamLimits

0x9038,	// (0x000577d3) cntbar_detail_pane_t1

0x90c6,	// (0x00057861) cntbar_detail_list_event_pane_g3_ParamLimits

0x90c6,	// (0x00057861) cntbar_detail_list_event_pane_g3

0x90de,	// (0x00057879) cntbar_detail_list_event_pane_g4_ParamLimits

0x90de,	// (0x00057879) cntbar_detail_list_event_pane_g4

0x90f6,	// (0x00057891) cntbar_detail_list_event_pane_g5_ParamLimits

0x90f6,	// (0x00057891) cntbar_detail_list_event_pane_g5

0x910e,	// (0x000578a9) cntbar_detail_list_event_pane_g6_ParamLimits

0x910e,	// (0x000578a9) cntbar_detail_list_event_pane_g6

0x9152,	// (0x000578ed) cntbar_detail_list_event_pane_t3_ParamLimits

0x9152,	// (0x000578ed) cntbar_detail_list_event_pane_t3

0x9164,	// (0x000578ff) popup_notif_wgt_window_ParamLimits

0x9164,	// (0x000578ff) popup_notif_wgt_window

0x917d,	// (0x00057918) popup_submenu_window_cp01_ParamLimits

0x917d,	// (0x00057918) popup_submenu_window_cp01

0xa465,	// (0x00058c00) bg_popup_window_pane_cp10

0xed62,	// (0x0005d4fd) listscroll_notif_wgt_pane

0xed74,	// (0x0005d50f) list_notif_wgt_window

0xed7d,	// (0x0005d518) scroll_pane_cp033

0x9191,	// (0x0005792c) list_notif_wgt_row_pane_ParamLimits

0x9191,	// (0x0005792c) list_notif_wgt_row_pane

0xed86,	// (0x0005d521) aid_size_list_notif_wgt_del

0xed93,	// (0x0005d52e) list_notif_wgt_row_pane_g1

0xed9f,	// (0x0005d53a) list_notif_wgt_row_pane_g2

0xedae,	// (0x0005d549) list_notif_wgt_row_pane_g3

0x0002,

0xfeb0,	// (0x0005e64b) list_notif_wgt_row_pane_g

0xedbb,	// (0x0005d556) list_notif_wgt_row_pane_t1

0xedd1,	// (0x0005d56c) list_notif_wgt_row_pane_t2

0xede3,	// (0x0005d57e) list_notif_wgt_row_pane_t3

0x0002,

0xfeb7,	// (0x0005e652) list_notif_wgt_row_pane_t

0xd9de,	// (0x0005c179) list_recal_day_event_pane_g1

0xedf5,	// (0x0005d590) list_recal_day_event_pane_t1

0x9a5a,	// (0x000581f5) bg_button_pane_cp045

0x91a1,	// (0x0005793c) cntbar_detail_btn_pane_t1

0xc9cc,	// (0x0005b167) main_callh_pane_ParamLimits

0xc9cc,	// (0x0005b167) main_callh_pane

0x9a5a,	// (0x000581f5) main_coverflow0_pane

0x9a5a,	// (0x000581f5) main_wgtman_pane

0x828a,	// (0x00056a25) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x828a,	// (0x00056a25) main_fs_bigclock_unlock_btn_pane

0x8898,	// (0x00057033) bg_button_pane_cp16

0x88a8,	// (0x00057043) cell_tport_appsw_pane_g3

0x91af,	// (0x0005794a) cf0_flow_pane_ParamLimits

0x91af,	// (0x0005794a) cf0_flow_pane

0xee04,	// (0x0005d59f) listscroll_cf0_pane

0xee0f,	// (0x0005d5aa) main_cf0_pane_g1

0x91c4,	// (0x0005795f) main_cf0_pane_t1_ParamLimits

0x91c4,	// (0x0005795f) main_cf0_pane_t1

0x91db,	// (0x00057976) main_cf0_pane_t2_ParamLimits

0x91db,	// (0x00057976) main_cf0_pane_t2

0x0001,

0xfec3,	// (0x0005e65e) main_cf0_pane_t_ParamLimits

0xfec3,	// (0x0005e65e) main_cf0_pane_t

0xee21,	// (0x0005d5bc) scroll_pane_cp11

0x91f2,	// (0x0005798d) cf0_flow_pane_g1

0x91fe,	// (0x00057999) cf0_flow_pane_g2

0x0001,

0xfec8,	// (0x0005e663) cf0_flow_pane_g

0x920a,	// (0x000579a5) cf0_flow_pane_t1

0x9a5a,	// (0x000581f5) main_call6_pane

0x9a5a,	// (0x000581f5) main_calllock_pane

0x921c,	// (0x000579b7) call6_btn_grp_pane_ParamLimits

0x921c,	// (0x000579b7) call6_btn_grp_pane

0x9236,	// (0x000579d1) call6_pane_g1_ParamLimits

0x9236,	// (0x000579d1) call6_pane_g1

0x924f,	// (0x000579ea) popup_call6_1st_window_ParamLimits

0x924f,	// (0x000579ea) popup_call6_1st_window

0x9263,	// (0x000579fe) popup_call6_2nd_window_ParamLimits

0x9263,	// (0x000579fe) popup_call6_2nd_window

0x9277,	// (0x00057a12) cell_call6_btn_pane_ParamLimits

0x9277,	// (0x00057a12) cell_call6_btn_pane

0xa465,	// (0x00058c00) bg_popup_call2_in_pane_cp03

0xee2c,	// (0x0005d5c7) popup_call6_1st_window_g1

0xee34,	// (0x0005d5cf) popup_call6_1st_window_g2

0xee3c,	// (0x0005d5d7) popup_call6_1st_window_g3

0x0002,

0xfecd,	// (0x0005e668) popup_call6_1st_window_g

0xee44,	// (0x0005d5df) popup_call6_1st_window_t1

0xee53,	// (0x0005d5ee) popup_call6_1st_window_t2

0xee63,	// (0x0005d5fe) popup_call6_1st_window_t3

0x0002,

0xfed4,	// (0x0005e66f) popup_call6_1st_window_t

0xa465,	// (0x00058c00) bg_popup_call2_in_pane_cp04

0xee2c,	// (0x0005d5c7) popup_call6_2nd_window_g1

0xee34,	// (0x0005d5cf) popup_call6_2nd_window_g2

0xee3c,	// (0x0005d5d7) popup_call6_2nd_window_g3

0x0002,

0xfecd,	// (0x0005e668) popup_call6_2nd_window_g

0xee44,	// (0x0005d5df) popup_call6_2nd_window_t1

0x9a5a,	// (0x000581f5) bg_button_pane_cp15

0xee73,	// (0x0005d60e) cell_call6_btn_pane_g1

0xacec,	// (0x00059487) cell_call6_btn_pane_t1

0x928b,	// (0x00057a26) listscroll_wgtman_pane_ParamLimits

0x928b,	// (0x00057a26) listscroll_wgtman_pane

0x92ac,	// (0x00057a47) wgtman_btn_pane_ParamLimits

0x92ac,	// (0x00057a47) wgtman_btn_pane

0xb37f,	// (0x00059b1a) aid_scroll_copy1

0xee7c,	// (0x0005d617) list_wgtman_pane

0x92ef,	// (0x00057a8a) wgtman_btn_pane_g1_ParamLimits

0x92ef,	// (0x00057a8a) wgtman_btn_pane_g1

0x931b,	// (0x00057ab6) wgtman_btn_pane_t1_ParamLimits

0x931b,	// (0x00057ab6) wgtman_btn_pane_t1

0xee86,	// (0x0005d621) wgtman_btn_pane_t2_ParamLimits

0xee86,	// (0x0005d621) wgtman_btn_pane_t2

0x0001,

0xfedb,	// (0x0005e676) wgtman_btn_pane_t_ParamLimits

0xfedb,	// (0x0005e676) wgtman_btn_pane_t

0x9358,	// (0x00057af3) listrow_wgtman_pane_ParamLimits

0x9358,	// (0x00057af3) listrow_wgtman_pane

0x936c,	// (0x00057b07) listrow_wgtman_pane_g1

0x9379,	// (0x00057b14) listrow_wgtman_pane_g2

0x0001,

0xfee0,	// (0x0005e67b) listrow_wgtman_pane_g

0x0abf,	// (0x0004f25a) listrow_wgtman_pane_t1

0x0ad7,	// (0x0004f272) listrow_wgtman_pane_t2

0x0001,

0xfee5,	// (0x0005e680) listrow_wgtman_pane_t

0x0afd,	// (0x0004f298) wait_bar_pane_cp09

0xee9d,	// (0x0005d638) main_calllock_btn_pane

0xeea7,	// (0x0005d642) main_calllock_pane_g1

0x9a5a,	// (0x000581f5) bg_button_pane_cp17

0xee73,	// (0x0005d60e) main_calllock_btn_pane_g1

0xeeb3,	// (0x0005d64e) main_calllock_btn_pane_t1

0x9a5a,	// (0x000581f5) main_dialer3_pane

0x9a5a,	// (0x000581f5) main_fmrd2_pane

0xce04,	// (0x0005b59f) main_fs_bigclock_unlock_btn_pane_g1

0x939f,	// (0x00057b3a) main_fs_bigclock_unlock_btn_pane_t1

0x93ad,	// (0x00057b48) area_fmrd2_info_pane_ParamLimits

0x93ad,	// (0x00057b48) area_fmrd2_info_pane

0x93be,	// (0x00057b59) area_fmrd2_visual_pane_ParamLimits

0x93be,	// (0x00057b59) area_fmrd2_visual_pane

0x93cc,	// (0x00057b67) fmrd2_indi_pane_ParamLimits

0x93cc,	// (0x00057b67) fmrd2_indi_pane

0x93d9,	// (0x00057b74) area_fmrd2_visual_pane_g1

0x93e1,	// (0x00057b7c) area_fmrd2_visual_pane_t1

0x93f1,	// (0x00057b8c) area_fmrd2_visual_pane_t2

0x9401,	// (0x00057b9c) area_fmrd2_visual_pane_t3

0x0002,

0xfeef,	// (0x0005e68a) area_fmrd2_visual_pane_t

0x9411,	// (0x00057bac) area_fmrd2_info_pane_g1

0x9419,	// (0x00057bb4) area_fmrd2_info_pane_t1

0x9429,	// (0x00057bc4) area_fmrd2_info_pane_t2

0x9439,	// (0x00057bd4) area_fmrd2_info_pane_t3

0x9449,	// (0x00057be4) area_fmrd2_info_pane_t4

0x0003,

0xfef6,	// (0x0005e691) area_fmrd2_info_pane_t

0x9459,	// (0x00057bf4) fmrd2_indi_pane_t1

0x9469,	// (0x00057c04) fmrd2_indi_pane_t2

0x9479,	// (0x00057c14) fmrd2_indi_pane_t3

0x0002,

0xfeff,	// (0x0005e69a) fmrd2_indi_pane_t

0x8313,	// (0x00056aae) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8313,	// (0x00056aae) list_single_fs_bigclock_indicator_pane_g5

0x83c8,	// (0x00056b63) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x83c8,	// (0x00056b63) list_single_fs_bigclock_indicator_pane_t5

0x8ab6,	// (0x00057251) aid_cell_bcale_month_pane_ParamLimits

0x8ab6,	// (0x00057251) aid_cell_bcale_month_pane

0x8add,	// (0x00057278) bcale_month_pane_ParamLimits

0x8add,	// (0x00057278) bcale_month_pane

0x8b01,	// (0x0005729c) bcale_preview_pane_ParamLimits

0x8b01,	// (0x0005729c) bcale_preview_pane

0xec95,	// (0x0005d430) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb4,	// (0x0005d44f) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb4,	// (0x0005d44f) list_single_fs_bigclock_pane_t2

0x0001,

0xfe81,	// (0x0005e61c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0005e61c) list_single_fs_bigclock_pane_t

0x9397,	// (0x00057b32) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeea,	// (0x0005e685) main_fs_bigclock_unlock_btn_pane_g

0x9489,	// (0x00057c24) aid_dia3_key_size_ParamLimits

0x9489,	// (0x00057c24) aid_dia3_key_size

0x949d,	// (0x00057c38) aid_dia3_listrow_size_ParamLimits

0x949d,	// (0x00057c38) aid_dia3_listrow_size

0x94b7,	// (0x00057c52) dia3_keypad_fun_pane_ParamLimits

0x94b7,	// (0x00057c52) dia3_keypad_fun_pane

0x94d3,	// (0x00057c6e) dia3_keypad_num_pane_ParamLimits

0x94d3,	// (0x00057c6e) dia3_keypad_num_pane

0x94ef,	// (0x00057c8a) dia3_listscroll_pane_ParamLimits

0x94ef,	// (0x00057c8a) dia3_listscroll_pane

0x9505,	// (0x00057ca0) dia3_numentry_pane_ParamLimits

0x9505,	// (0x00057ca0) dia3_numentry_pane

0xeec2,	// (0x0005d65d) dia3_list_pane

0x951e,	// (0x00057cb9) scroll_pane_cp12

0x9a5a,	// (0x000581f5) bg_dia3_numentry_pane

0x9529,	// (0x00057cc4) dia3_numentry_pane_t1

0x9538,	// (0x00057cd3) cell_dia3_key_num_pane

0x9540,	// (0x00057cdb) cell_dia3_key0_fun_pane_ParamLimits

0x9540,	// (0x00057cdb) cell_dia3_key0_fun_pane

0x9554,	// (0x00057cef) cell_dia3_key1_fun_pane_ParamLimits

0x9554,	// (0x00057cef) cell_dia3_key1_fun_pane

0x956b,	// (0x00057d06) dia3_listrow_pane

0xe298,	// (0x0005ca33) bg_dia3_numentry_pane_g1

0x9a5a,	// (0x000581f5) bg_button_pane_cp21

0x957d,	// (0x00057d18) cell_dia3_key_num_pane_t1

0x958b,	// (0x00057d26) cell_dia3_key_num_pane_t2

0x959a,	// (0x00057d35) cell_dia3_key_num_pane_t3

0x95a9,	// (0x00057d44) cell_dia3_key_num_pane_t4

0x0003,

0xff06,	// (0x0005e6a1) cell_dia3_key_num_pane_t

0x9a5a,	// (0x000581f5) bg_button_pane_cp19

0x95b8,	// (0x00057d53) cell_dia3_key0_fun_pane_g1

0x9a5a,	// (0x000581f5) bg_button_pane_cp20

0x95b8,	// (0x00057d53) cell_dia3_key1_fun_pane_g1

0x95c0,	// (0x00057d5b) area_left_week_number_pane

0x95ce,	// (0x00057d69) area_top_day_name_pane

0x95e1,	// (0x00057d7c) frame_month_view_pane

0xeecd,	// (0x0005d668) grid_month_view_pane

0x95f6,	// (0x00057d91) cell_top_day_name_pane_ParamLimits

0x95f6,	// (0x00057d91) cell_top_day_name_pane

0x9625,	// (0x00057dc0) cell_area_left_week_number_pane_ParamLimits

0x9625,	// (0x00057dc0) cell_area_left_week_number_pane

0x963b,	// (0x00057dd6) cell_month_view_pane_ParamLimits

0x963b,	// (0x00057dd6) cell_month_view_pane

0xeedb,	// (0x0005d676) frm_month_g1

0x966c,	// (0x00057e07) frm_month_g2

0x967f,	// (0x00057e1a) frm_month_g3

0x9692,	// (0x00057e2d) frm_month_g4

0x96a5,	// (0x00057e40) frm_month_g5

0x96b8,	// (0x00057e53) frm_month_g6

0x96cd,	// (0x00057e68) frm_month_g7

0xeee8,	// (0x0005d683) frm_month_g8

0x96e2,	// (0x00057e7d) frm_month_g9

0x96f2,	// (0x00057e8d) frm_month_g10

0x9702,	// (0x00057e9d) frm_month_g11

0x9712,	// (0x00057ead) frm_month_g12

0x9724,	// (0x00057ebf) frm_month_g13

0x9738,	// (0x00057ed3) frm_month_g14

0x974c,	// (0x00057ee7) frm_month_g15

0x9760,	// (0x00057efb) frm_month_g16

0x000f,

0xff0f,	// (0x0005e6aa) frm_month_g

0xeef5,	// (0x0005d690) cell_top_day_name_pane_t1

0x9774,	// (0x00057f0f) cell_area_left_week_number_pane_g1

0x9780,	// (0x00057f1b) cell_area_left_week_number_pane_t1

0xd02b,	// (0x0005b7c6) cell_month_view_pane_g1

0x9793,	// (0x00057f2e) cell_month_view_pane_t1

0x9a5a,	// (0x000581f5) main_fps_pane

0xe71a,	// (0x0005ceb5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe71a,	// (0x0005ceb5) cmail_ddmenu_btn02_pane_cp1

0xe736,	// (0x0005ced1) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe736,	// (0x0005ced1) cmail_ddmenu_btn02_pane_cp2

0x8df9,	// (0x00057594) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8df9,	// (0x00057594) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe34,	// (0x0005e5cf) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe34,	// (0x0005e5cf) cmail_ddmenu_btn02_pane_g

0x8e17,	// (0x000575b2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8e17,	// (0x000575b2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe39,	// (0x0005e5d4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe39,	// (0x0005e5d4) cmail_ddmenu_btn02_pane_t

0x97a6,	// (0x00057f41) fps_text_pane_ParamLimits

0x97a6,	// (0x00057f41) fps_text_pane

0x97bd,	// (0x00057f58) main_fps_pane_g1_ParamLimits

0x97bd,	// (0x00057f58) main_fps_pane_g1

0x97d5,	// (0x00057f70) wait_bar_pane_cp010_ParamLimits

0x97d5,	// (0x00057f70) wait_bar_pane_cp010

0x97e8,	// (0x00057f83) fps_text_pane_t1_ParamLimits

0x97e8,	// (0x00057f83) fps_text_pane_t1

0xe538,	// (0x0005ccd3) cam4_image_uncrop_pane_g1

0xe541,	// (0x0005ccdc) cam4_image_uncrop_pane_g2

0x654f,	// (0x00054cea) cam4_image_uncrop_pane_g3

0x6558,	// (0x00054cf3) cam4_image_uncrop_pane_g4

0x0003,

0xf8f5,	// (0x0005e090) cam4_image_uncrop_pane_g

0x956b,	// (0x00057d06) dia3_listrow_pane_ParamLimits

0x9a5a,	// (0x000581f5) main_phob2_pane

0x886b,	// (0x00057006) cell_tport_appsw_pane_cp02_ParamLimits

0x886b,	// (0x00057006) cell_tport_appsw_pane_cp02

0x887f,	// (0x0005701a) cell_tport_appsw_pane_cp03_ParamLimits

0x887f,	// (0x0005701a) cell_tport_appsw_pane_cp03

0x9a5a,	// (0x000581f5) phob2_contact_card_pane

0x9a5a,	// (0x000581f5) phob2_listscroll_pane

0xef08,	// (0x0005d6a3) phob2_list_pane

0xef10,	// (0x0005d6ab) scroll_pane_cp034

0x9800,	// (0x00057f9b) phob2_cc_data_pane_ParamLimits

0x9800,	// (0x00057f9b) phob2_cc_data_pane

0x9819,	// (0x00057fb4) phob2_cc_listscroll_pane_ParamLimits

0x9819,	// (0x00057fb4) phob2_cc_listscroll_pane

0x9358,	// (0x00057af3) list_double_large_graphic_phob2_pane_ParamLimits

0x9358,	// (0x00057af3) list_double_large_graphic_phob2_pane

0x983b,	// (0x00057fd6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x983b,	// (0x00057fd6) list_double_large_graphic_phob2_pane_g1

0x0b0f,	// (0x0004f2aa) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0b0f,	// (0x0004f2aa) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff30,	// (0x0005e6cb) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff30,	// (0x0005e6cb) list_double_large_graphic_phob2_pane_g

0x0b1b,	// (0x0004f2b6) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0b1b,	// (0x0004f2b6) list_double_large_graphic_phob2_pane_t1

0x0b30,	// (0x0004f2cb) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0b30,	// (0x0004f2cb) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff35,	// (0x0005e6d0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff35,	// (0x0005e6d0) list_double_large_graphic_phob2_pane_t

0x9a5a,	// (0x000581f5) list_highlight_pane_cp024

0x9851,	// (0x00057fec) phob2_cc_button_pane

0x985b,	// (0x00057ff6) phob2_cc_data_pane_g1_ParamLimits

0x985b,	// (0x00057ff6) phob2_cc_data_pane_g1

0x9873,	// (0x0005800e) phob2_cc_data_pane_g2_ParamLimits

0x9873,	// (0x0005800e) phob2_cc_data_pane_g2

0x0001,

0xff3a,	// (0x0005e6d5) phob2_cc_data_pane_g_ParamLimits

0xff3a,	// (0x0005e6d5) phob2_cc_data_pane_g

0x9883,	// (0x0005801e) phob2_cc_data_pane_t1_ParamLimits

0x9883,	// (0x0005801e) phob2_cc_data_pane_t1

0x98a5,	// (0x00058040) phob2_cc_data_pane_t2_ParamLimits

0x98a5,	// (0x00058040) phob2_cc_data_pane_t2

0x98c7,	// (0x00058062) phob2_cc_data_pane_t3_ParamLimits

0x98c7,	// (0x00058062) phob2_cc_data_pane_t3

0x0002,

0xff3f,	// (0x0005e6da) phob2_cc_data_pane_t_ParamLimits

0xff3f,	// (0x0005e6da) phob2_cc_data_pane_t

0xef18,	// (0x0005d6b3) phob2_cc_list_pane_ParamLimits

0xef18,	// (0x0005d6b3) phob2_cc_list_pane

0xda87,	// (0x0005c222) scroll_pane_cp035_ParamLimits

0xda87,	// (0x0005c222) scroll_pane_cp035

0xad09,	// (0x000594a4) bg_button_pane_cp033

0xef24,	// (0x0005d6bf) phob2_cc_button_pane_g1

0xef30,	// (0x0005d6cb) phob2_cc_button_pane_t1

0xef45,	// (0x0005d6e0) phob2_cc_button_pane_t2

0x0001,

0xff46,	// (0x0005e6e1) phob2_cc_button_pane_t

0x98e9,	// (0x00058084) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98e9,	// (0x00058084) list_double_large_graphic_phob2_cc_pane

0x9927,	// (0x000580c2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9927,	// (0x000580c2) list_double_large_graphic_phob2_cc_pane_g1

0x0b42,	// (0x0004f2dd) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0b42,	// (0x0004f2dd) list_double_large_graphic_phob2_cc_pane_g2

0x0b4e,	// (0x0004f2e9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0b4e,	// (0x0004f2e9) list_double_large_graphic_phob2_cc_pane_g3

0x0b5a,	// (0x0004f2f5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0b5a,	// (0x0004f2f5) list_double_large_graphic_phob2_cc_pane_g4

0x0b66,	// (0x0004f301) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0b66,	// (0x0004f301) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4b,	// (0x0005e6e6) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4b,	// (0x0005e6e6) list_double_large_graphic_phob2_cc_pane_g

0x0b72,	// (0x0004f30d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0b72,	// (0x0004f30d) list_double_large_graphic_phob2_cc_pane_t1

0x0b9b,	// (0x0004f336) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0b9b,	// (0x0004f336) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff56,	// (0x0005e6f1) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff56,	// (0x0005e6f1) list_double_large_graphic_phob2_cc_pane_t

0xef57,	// (0x0005d6f2) list_highlight_pane_cp025_ParamLimits

0xef57,	// (0x0005d6f2) list_highlight_pane_cp025

0xad09,	// (0x000594a4) bg_button_pane_cp033_ParamLimits

0xef24,	// (0x0005d6bf) phob2_cc_button_pane_g1_ParamLimits

0xef30,	// (0x0005d6cb) phob2_cc_button_pane_t1_ParamLimits

0xef45,	// (0x0005d6e0) phob2_cc_button_pane_t2_ParamLimits

0xff46,	// (0x0005e6e1) phob2_cc_button_pane_t_ParamLimits

0x0e0e,	// (0x0004f5a9) popup_wgtman_window

0xd8c1,	// (0x0005c05c) scroll_pane_cp038

0x92d1,	// (0x00057a6c) wgtman_btn_pane_cp_01_ParamLimits

0x92d1,	// (0x00057a6c) wgtman_btn_pane_cp_01

0xef65,	// (0x0005d700) wgtman_content_pane

0xef6e,	// (0x0005d709) wgtman_heading_pane

0x9a5a,	// (0x000581f5) bg_heading_pane_cp02

0xef77,	// (0x0005d712) wgtman_heading_pane_g1

0xef7f,	// (0x0005d71a) wgtman_heading_pane_t1

0xef8d,	// (0x0005d728) scroll_pane_cp036

0xef95,	// (0x0005d730) wgtman_list_pane

0xe5d7,	// (0x0005cd72) wgtman_list_pane_t1_ParamLimits

0xe5d7,	// (0x0005cd72) wgtman_list_pane_t1

0xab2e,	// (0x000592c9) cam4_grid_pane

0x0094,	// (0x0004e82f) bg_button_pane_cp015_ParamLimits

0x71ff,	// (0x0005599a) bg_button_pane_cp016_ParamLimits

0x7212,	// (0x000559ad) bg_button_pane_cp017_ParamLimits

0x00dc,	// (0x0004e877) popup_vitu2_query_window_g3_ParamLimits

0x00dc,	// (0x0004e877) popup_vitu2_query_window_g3

0x0157,	// (0x0004e8f2) popup_vitu2_query_window_t6_ParamLimits

0x0157,	// (0x0004e8f2) popup_vitu2_query_window_t6

0x0182,	// (0x0004e91d) popup_vitu2_query_window_t7_ParamLimits

0x0182,	// (0x0004e91d) popup_vitu2_query_window_t7

0xe538,	// (0x0005ccd3) cam4_grid_pane_g1

0xe541,	// (0x0005ccdc) cam4_grid_pane_g2

0xef9d,	// (0x0005d738) cam4_grid_pane_g3

0xefa6,	// (0x0005d741) cam4_grid_pane_g4

0x0003,

0xff5b,	// (0x0005e6f6) cam4_grid_pane_g

0x1cbe,	// (0x00050459) aid_placing_vt_slider_lsc_ParamLimits

0x1fab,	// (0x00050746) vidtel_button_pane_ParamLimits

0x1fab,	// (0x00050746) vidtel_button_pane

0x9a5a,	// (0x000581f5) bg_button_pane_cp034

0xefb1,	// (0x0005d74c) vidtel_button_pane_g1

0xefb9,	// (0x0005d754) vidtel_button_pane_t1

0xd9ce,	// (0x0005c169) aid_size_vtel_slider_touch

0xda87,	// (0x0005c222) scroll_pane_cp039

0x7f51,	// (0x000566ec) ncim_query_button_pane_cp01_ParamLimits

0x7f70,	// (0x0005670b) ncimui_query_pane_g1_ParamLimits

0xad09,	// (0x000594a4) input_focus_pane_cp012_ParamLimits

0xe2d6,	// (0x0005ca71) ncim_query_entry_pane_t1_ParamLimits

0xda87,	// (0x0005c222) scroll_pane_cp039_ParamLimits

0xb456,	// (0x00059bf1) navi_pane_bcale_mc_g1

0xb45e,	// (0x00059bf9) navi_pane_bcale_mc_t1

0xe781,	// (0x0005cf1c) main_sp_fs_email_pane_g1

0xe78d,	// (0x0005cf28) main_sp_fs_email_pane_g2

0x0001,

0xfcec,	// (0x0005e487) main_sp_fs_email_pane_g

0xea1d,	// (0x0005d1b8) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea1d,	// (0x0005d1b8) list_single_cale_mrui_row_pane_g3

0x0a57,	// (0x0004f1f2) list_single_recal_day_pane_g5_event_pane

0x8e87,	// (0x00057622) list_single_recal_day_pane_g7

0xefcf,	// (0x0005d76a) list_recal_day_event_pane_cp01

0xefd8,	// (0x0005d773) list_recal_vselct_arw_lo_pane_cp01

0xefe0,	// (0x0005d77b) list_recal_vselct_arw_up_pane_cp01

0xefe8,	// (0x0005d783) list_recal_vselct_pane_cp01

0xd9de,	// (0x0005c179) list_recal_day_event_pane_cp01_g1

0xacfb,	// (0x00059496) list_recal_day_event_pane_cp01_t1

0x8e8f,	// (0x0005762a) list_single_recal_day_pane_t1_ParamLimits

0x8ea1,	// (0x0005763c) list_single_recal_day_pane_t2_ParamLimits

0xfe49,	// (0x0005e5e4) list_single_recal_day_pane_t_ParamLimits

0xa16a,	// (0x00058905) bg_notes_pane_ParamLimits

0xa215,	// (0x000589b0) list_notes_pane_ParamLimits

0x1126,	// (0x0004f8c1) scroll_pane_cp06_ParamLimits

0xa251,	// (0x000589ec) main_notes_pane_ParamLimits

0x9a5a,	// (0x000581f5) main_welc_pane

0x9933,	// (0x000580ce) main_welc_body_pane_ParamLimits

0x9933,	// (0x000580ce) main_welc_body_pane

0x9952,	// (0x000580ed) main_welc_opti_pane_ParamLimits

0x9952,	// (0x000580ed) main_welc_opti_pane

0x999b,	// (0x00058136) main_welc_pane_t1_ParamLimits

0x999b,	// (0x00058136) main_welc_pane_t1

0xeff2,	// (0x0005d78d) main_welc_body_row_pane_ParamLimits

0xeff2,	// (0x0005d78d) main_welc_body_row_pane

0xe52a,	// (0x0005ccc5) main_welc_opti_row_pane_ParamLimits

0xe52a,	// (0x0005ccc5) main_welc_opti_row_pane

0xf009,	// (0x0005d7a4) main_welc_opti_row_pane_g1

0x99bd,	// (0x00058158) main_welc_opti_row_pane_t1

0xf011,	// (0x0005d7ac) main_welc_body_row_pane_t1

0xed6c,	// (0x0005d507) popup_notif_wgt_heading_pane

0xed86,	// (0x0005d521) aid_size_list_notif_wgt_del_ParamLimits

0xed93,	// (0x0005d52e) list_notif_wgt_row_pane_g1_ParamLimits

0xed9f,	// (0x0005d53a) list_notif_wgt_row_pane_g2_ParamLimits

0xedae,	// (0x0005d549) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb0,	// (0x0005e64b) list_notif_wgt_row_pane_g_ParamLimits

0xedbb,	// (0x0005d556) list_notif_wgt_row_pane_t1_ParamLimits

0xedd1,	// (0x0005d56c) list_notif_wgt_row_pane_t2_ParamLimits

0xede3,	// (0x0005d57e) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb7,	// (0x0005e652) list_notif_wgt_row_pane_t_ParamLimits

0x936c,	// (0x00057b07) listrow_wgtman_pane_g1_ParamLimits

0x9379,	// (0x00057b14) listrow_wgtman_pane_g2_ParamLimits

0xfee0,	// (0x0005e67b) listrow_wgtman_pane_g_ParamLimits

0x0abf,	// (0x0004f25a) listrow_wgtman_pane_t1_ParamLimits

0x0ad7,	// (0x0004f272) listrow_wgtman_pane_t2_ParamLimits

0xfee5,	// (0x0005e680) listrow_wgtman_pane_t_ParamLimits

0x0afd,	// (0x0004f298) wait_bar_pane_cp09_ParamLimits

0x9a5a,	// (0x000581f5) bg_popup_heading_pane_cp02

0xf020,	// (0x0005d7bb) popup_notif_wgt_heading_pane_g1

0xf028,	// (0x0005d7c3) popup_notif_wgt_heading_pane_t1

0x9a5a,	// (0x000581f5) main_vids_pane

0x9a5a,	// (0x000581f5) vids_listscroll_pane

0x99cc,	// (0x00058167) scroll_pane_cp040

0x9a5a,	// (0x000581f5) vids_list_pane

0x99d7,	// (0x00058172) vids_list_double_pane_ParamLimits

0x99d7,	// (0x00058172) vids_list_double_pane

0x99e8,	// (0x00058183) vids_list_double_pane_g1

0x99f1,	// (0x0005818c) vids_list_double_pane_t1

0x9a01,	// (0x0005819c) vids_list_double_pane_t2

0x0001,

0xff69,	// (0x0005e704) vids_list_double_pane_t

0xad09,	// (0x000594a4) main_ncimui_pane_ParamLimits

0x7d87,	// (0x00056522) main_ncimui_pane_g1_ParamLimits

0x7d93,	// (0x0005652e) main_ncimui_pane_g2_ParamLimits

0x7d93,	// (0x0005652e) main_ncimui_pane_g2

0x0001,

0xfbf1,	// (0x0005e38c) main_ncimui_pane_g_ParamLimits

0xfbf1,	// (0x0005e38c) main_ncimui_pane_g

0x9971,	// (0x0005810c) main_welc_pane_g1_ParamLimits

0x9971,	// (0x0005810c) main_welc_pane_g1

0x9986,	// (0x00058121) main_welc_pane_g2_ParamLimits

0x9986,	// (0x00058121) main_welc_pane_g2

0x0001,

0xff64,	// (0x0005e6ff) main_welc_pane_g_ParamLimits

0xff64,	// (0x0005e6ff) main_welc_pane_g

0xa16a,	// (0x00058905) listscroll_mce_pane_ParamLimits

0xb5ad,	// (0x00059d48) wait_bar_pane_cp10

0xc9c0,	// (0x0005b15b) main_cale_day_pane_ParamLimits

0xc9c0,	// (0x0005b15b) main_cale_week_pane_ParamLimits

0xa16a,	// (0x00058905) main_messa_pane_ParamLimits

0x57ba,	// (0x00053f55) main_clock2_btn_pane_ParamLimits

0x57ba,	// (0x00053f55) main_clock2_btn_pane

0xd1b3,	// (0x0005b94e) main_clock2_btn_pane_cp01_ParamLimits

0xd1b3,	// (0x0005b94e) main_clock2_btn_pane_cp01

0xe9ee,	// (0x0005d189) list_cale_mrui_pane_ParamLimits

0xee19,	// (0x0005d5b4) main_cf0_pane_g2

0x0001,

0xfebe,	// (0x0005e659) main_cf0_pane_g

0x95c0,	// (0x00057d5b) area_left_week_number_pane_ParamLimits

0x95ce,	// (0x00057d69) area_top_day_name_pane_ParamLimits

0x95e1,	// (0x00057d7c) frame_month_view_pane_ParamLimits

0xeecd,	// (0x0005d668) grid_month_view_pane_ParamLimits

0xeedb,	// (0x0005d676) frm_month_g1_ParamLimits

0x966c,	// (0x00057e07) frm_month_g2_ParamLimits

0x967f,	// (0x00057e1a) frm_month_g3_ParamLimits

0x9692,	// (0x00057e2d) frm_month_g4_ParamLimits

0x96a5,	// (0x00057e40) frm_month_g5_ParamLimits

0x96b8,	// (0x00057e53) frm_month_g6_ParamLimits

0x96cd,	// (0x00057e68) frm_month_g7_ParamLimits

0xeee8,	// (0x0005d683) frm_month_g8_ParamLimits

0x96e2,	// (0x00057e7d) frm_month_g9_ParamLimits

0x96f2,	// (0x00057e8d) frm_month_g10_ParamLimits

0x9702,	// (0x00057e9d) frm_month_g11_ParamLimits

0x9712,	// (0x00057ead) frm_month_g12_ParamLimits

0x9724,	// (0x00057ebf) frm_month_g13_ParamLimits

0x9738,	// (0x00057ed3) frm_month_g14_ParamLimits

0x974c,	// (0x00057ee7) frm_month_g15_ParamLimits

0x9760,	// (0x00057efb) frm_month_g16_ParamLimits

0xff0f,	// (0x0005e6aa) frm_month_g_ParamLimits

0xeef5,	// (0x0005d690) cell_top_day_name_pane_t1_ParamLimits

0x9774,	// (0x00057f0f) cell_area_left_week_number_pane_g1_ParamLimits

0x9780,	// (0x00057f1b) cell_area_left_week_number_pane_t1_ParamLimits

0xd02b,	// (0x0005b7c6) cell_month_view_pane_g1_ParamLimits

0x9793,	// (0x00057f2e) cell_month_view_pane_t1_ParamLimits

0xa162,	// (0x000588fd) main_clock2_btn_pane_g1

0xf036,	// (0x0005d7d1) main_clock2_btn_pane_t1

0xad09,	// (0x000594a4) listscroll_cmail_pane_ParamLimits

0xe781,	// (0x0005cf1c) main_sp_fs_email_pane_g1_ParamLimits

0xe78d,	// (0x0005cf28) main_sp_fs_email_pane_g2_ParamLimits

0xfcec,	// (0x0005e487) main_sp_fs_email_pane_g_ParamLimits

0xeaf6,	// (0x0005d291) list_recal_day_pane_ParamLimits

0xeb07,	// (0x0005d2a2) mian_recal_day_pane_t1

0x0670,	// (0x0004ee0b) list_single_dyc_row_text_pane_t4_ParamLimits

0x0670,	// (0x0004ee0b) list_single_dyc_row_text_pane_t4

0x06b9,	// (0x0004ee54) list_single_dyc_row_text_pane_t5_ParamLimits

0x06b9,	// (0x0004ee54) list_single_dyc_row_text_pane_t5

0x875b,	// (0x00056ef6) list_single_dyc_row_text_pane_t6_ParamLimits

0x875b,	// (0x00056ef6) list_single_dyc_row_text_pane_t6

0x2d8e,	// (0x00051529) aid_mgn_list_cale_time_pane

0xad09,	// (0x000594a4) main_gallery2_pane_ParamLimits

0xd1c7,	// (0x0005b962) main_clock2_pane_cp01_t1

0xd1d5,	// (0x0005b970) main_clock2_pane_cp01_t3

0x0001,

0xf7c7,	// (0x0005df62) main_clock2_pane_cp01_t

0x1534,	// (0x0004fccf) cale_week_scroll_pane_g16_ParamLimits

0x1534,	// (0x0004fccf) cale_week_scroll_pane_g16

0xa465,	// (0x00058c00) vorec_slider_pane

0xefb9,	// (0x0005d754) vidtel_button_pane_t1_ParamLimits

0x8f0f,	// (0x000576aa) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8f0f,	// (0x000576aa) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8f22,	// (0x000576bd) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8f22,	// (0x000576bd) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe6c,	// (0x0005e607) main_fs_bigclock_clock_pane_g_ParamLimits

0x8f39,	// (0x000576d4) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8f4f,	// (0x000576ea) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe75,	// (0x0005e610) main_fs_bigclock_clock_pane_t_ParamLimits

0x4f31,	// (0x000536cc) main_mup3_lyrics_pane_ParamLimits

0x4f31,	// (0x000536cc) main_mup3_lyrics_pane

0x9a37,	// (0x000581d2) main_mup3_lyrics_pane_t1_ParamLimits

0x9a37,	// (0x000581d2) main_mup3_lyrics_pane_t1

0xa882,	// (0x0005901d) aid_main_mp4_pane_t1_area

0xa88c,	// (0x00059027) aid_main_mp4_pane_t2_area

0xa938,	// (0x000590d3) main_mp4_pane_g7_ParamLimits

0xa938,	// (0x000590d3) main_mp4_pane_g7

0xa944,	// (0x000590df) main_mp4_pane_g8_ParamLimits

0xa944,	// (0x000590df) main_mp4_pane_g8

0x6312,	// (0x00054aad) aid_call6_pane_g1_size

0x9917,	// (0x000580b2) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9917,	// (0x000580b2) list_double_large_graphic_phob2_other_pane

0x9a52,	// (0x000581ed) list_double_large_graphic_phob2_other_pane_g1

0x9a5a,	// (0x000581f5) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
