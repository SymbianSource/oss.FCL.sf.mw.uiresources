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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004c092 };

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
0x5af7,	// (0x00051b89) Screen

0x5b03,	// (0x00051b95) application_window

0x5b43,	// (0x00051bd5) area_bottom_pane_ParamLimits

0x5b43,	// (0x00051bd5) area_bottom_pane

0x5b78,	// (0x00051c0a) area_top_pane_ParamLimits

0x5b78,	// (0x00051c0a) area_top_pane

0x1b14,	// (0x0004dba6) call_video_uplink_pane_ParamLimits

0x1b14,	// (0x0004dba6) call_video_uplink_pane

0x5c05,	// (0x00051c97) main_pane_ParamLimits

0x5c05,	// (0x00051c97) main_pane

0x41cf,	// (0x00050261) context_pane

0x8dd4,	// (0x00054e66) navi_pane

0x8df4,	// (0x00054e86) popup_cale_events_window_ParamLimits

0x8df4,	// (0x00054e86) popup_cale_events_window

0x41e2,	// (0x00050274) popup_mup_playback_window

0x8e0c,	// (0x00054e9e) signal_pane

0x22ad,	// (0x0004e33f) main_browser_pane

0x2d35,	// (0x0004edc7) main_burst_pane

0x8caa,	// (0x00054d3c) main_calc_pane

0x2d35,	// (0x0004edc7) main_cale_day_pane

0x22ad,	// (0x0004e33f) main_cale_month_pane

0x2d35,	// (0x0004edc7) main_cale_week_pane

0x2d35,	// (0x0004edc7) main_call_pane

0x1f43,	// (0x0004dfd5) main_call_poc_pane

0x2d35,	// (0x0004edc7) main_camera_pane

0x2d35,	// (0x0004edc7) main_chi_dic_pane

0x2bc4,	// (0x0004ec56) main_clock_pane

0x1f43,	// (0x0004dfd5) main_fmradio_pane

0x2d35,	// (0x0004edc7) main_graph_messa_pane

0x1f43,	// (0x0004dfd5) main_help_pane

0x22ad,	// (0x0004e33f) main_im_pane

0x219e,	// (0x0004e230) main_image_pane_ParamLimits

0x219e,	// (0x0004e230) main_image_pane

0x1f43,	// (0x0004dfd5) main_location2_pane

0x2d35,	// (0x0004edc7) main_location_pane

0x1f43,	// (0x0004dfd5) main_messa_pane

0x1f43,	// (0x0004dfd5) main_mp2_pane

0x2d35,	// (0x0004edc7) main_mp_pane

0x1f43,	// (0x0004dfd5) main_msg_pane

0x1f43,	// (0x0004dfd5) main_mup_eq_pane

0x1f43,	// (0x0004dfd5) main_mup_pane

0x2d35,	// (0x0004edc7) main_notes_pane

0x1f43,	// (0x0004dfd5) main_pec_pane

0x1f43,	// (0x0004dfd5) main_phob_pane

0x1f43,	// (0x0004dfd5) main_pinb_pane

0x1f43,	// (0x0004dfd5) main_postcard_pane

0x1f43,	// (0x0004dfd5) main_qdial_pane

0x2d35,	// (0x0004edc7) main_skin_pane

0x1f43,	// (0x0004dfd5) main_smil2_pane

0x2d35,	// (0x0004edc7) main_smil_pane

0x2d35,	// (0x0004edc7) main_video_pane

0x2d35,	// (0x0004edc7) main_video_tele_pane

0x219e,	// (0x0004e230) main_viewer_pane_ParamLimits

0x219e,	// (0x0004e230) main_viewer_pane

0x2d35,	// (0x0004edc7) main_vorec_pane

0x8ce0,	// (0x00054d72) popup_blid_sat_info_window_ParamLimits

0x8ce0,	// (0x00054d72) popup_blid_sat_info_window

0x8cf6,	// (0x00054d88) popup_dyc_status_message_window_ParamLimits

0x8cf6,	// (0x00054d88) popup_dyc_status_message_window

0x8d04,	// (0x00054d96) popup_grid_large_graphic_window_ParamLimits

0x8d04,	// (0x00054d96) popup_grid_large_graphic_window

0x8d78,	// (0x00054e0a) popup_loc_request_window_ParamLimits

0x8d78,	// (0x00054e0a) popup_loc_request_window

0x8dac,	// (0x00054e3e) popup_wml_address_window_ParamLimits

0x8dac,	// (0x00054e3e) popup_wml_address_window

0x8b82,	// (0x00054c14) call_muted_g1

0x8841,	// (0x000548d3) popup_call_audio_conf_window_ParamLimits

0x8841,	// (0x000548d3) popup_call_audio_conf_window

0x8b92,	// (0x00054c24) popup_call_audio_first_window_ParamLimits

0x8b92,	// (0x00054c24) popup_call_audio_first_window

0x8bd2,	// (0x00054c64) popup_call_audio_in_window_ParamLimits

0x8bd2,	// (0x00054c64) popup_call_audio_in_window

0x8bf6,	// (0x00054c88) popup_call_audio_out_window_ParamLimits

0x8bf6,	// (0x00054c88) popup_call_audio_out_window

0x8c18,	// (0x00054caa) popup_call_audio_second_window_ParamLimits

0x8c18,	// (0x00054caa) popup_call_audio_second_window

0x8c48,	// (0x00054cda) popup_call_audio_wait_window_ParamLimits

0x8c48,	// (0x00054cda) popup_call_audio_wait_window

0x8c69,	// (0x00054cfb) popup_number_entry_window_ParamLimits

0x8c69,	// (0x00054cfb) popup_number_entry_window

0x1b32,	// (0x0004dbc4) bg_popup_call_pane_cp05_ParamLimits

0x1b32,	// (0x0004dbc4) bg_popup_call_pane_cp05

0x1b52,	// (0x0004dbe4) popup_number_entry_window_t1

0x1b65,	// (0x0004dbf7) popup_number_entry_window_t2

0x1b77,	// (0x0004dc09) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0005b17e) popup_number_entry_window_t

0x1b89,	// (0x0004dc1b) text_title_cp2

0x1b9c,	// (0x0004dc2e) bg_popup_call_pane_cp_ParamLimits

0x1b9c,	// (0x0004dc2e) bg_popup_call_pane_cp

0x1baa,	// (0x0004dc3c) call_thumbnail_pane

0x1bb2,	// (0x0004dc44) popup_call_audio_in_window_g1_ParamLimits

0x1bb2,	// (0x0004dc44) popup_call_audio_in_window_g1

0x1bbe,	// (0x0004dc50) popup_call_audio_in_window_g2_ParamLimits

0x1bbe,	// (0x0004dc50) popup_call_audio_in_window_g2

0x1bca,	// (0x0004dc5c) popup_call_audio_in_window_g3_ParamLimits

0x1bca,	// (0x0004dc5c) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0005b187) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0005b187) popup_call_audio_in_window_g

0x1bd6,	// (0x0004dc68) popup_call_audio_in_window_t1_ParamLimits

0x1bd6,	// (0x0004dc68) popup_call_audio_in_window_t1

0x1bf1,	// (0x0004dc83) popup_call_audio_in_window_t2_ParamLimits

0x1bf1,	// (0x0004dc83) popup_call_audio_in_window_t2

0x1c0c,	// (0x0004dc9e) popup_call_audio_in_window_t3_ParamLimits

0x1c0c,	// (0x0004dc9e) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0005b18e) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0005b18e) popup_call_audio_in_window_t

0x1b9c,	// (0x0004dc2e) bg_popup_call_pane_cp01_ParamLimits

0x1b9c,	// (0x0004dc2e) bg_popup_call_pane_cp01

0x1baa,	// (0x0004dc3c) call_thumbnail_pane_cp02

0x1c1f,	// (0x0004dcb1) call_type_pane_cp022

0x1c27,	// (0x0004dcb9) popup_call_audio_out_window_g1_ParamLimits

0x1c27,	// (0x0004dcb9) popup_call_audio_out_window_g1

0x1c39,	// (0x0004dccb) popup_call_audio_out_window_g2_ParamLimits

0x1c39,	// (0x0004dccb) popup_call_audio_out_window_g2

0x1c45,	// (0x0004dcd7) popup_call_audio_out_window_g3_ParamLimits

0x1c45,	// (0x0004dcd7) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0005b195) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0005b195) popup_call_audio_out_window_g

0x1c57,	// (0x0004dce9) popup_call_audio_out_window_t1_ParamLimits

0x1c57,	// (0x0004dce9) popup_call_audio_out_window_t1

0x1c6f,	// (0x0004dd01) popup_call_audio_out_window_t2_ParamLimits

0x1c6f,	// (0x0004dd01) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0005b19c) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0005b19c) popup_call_audio_out_window_t

0x1c84,	// (0x0004dd16) bg_popup_call_pane_ParamLimits

0x1c84,	// (0x0004dd16) bg_popup_call_pane

0x5dec,	// (0x00051e7e) call_thumbnail_pane_cp_ParamLimits

0x5dec,	// (0x00051e7e) call_thumbnail_pane_cp

0x1d08,	// (0x0004dd9a) call_type_pane_cp01_ParamLimits

0x1d08,	// (0x0004dd9a) call_type_pane_cp01

0x1d4c,	// (0x0004ddde) popup_call_audio_first_window_g1_ParamLimits

0x1d4c,	// (0x0004ddde) popup_call_audio_first_window_g1

0x1d98,	// (0x0004de2a) popup_call_audio_first_window_g2_ParamLimits

0x1d98,	// (0x0004de2a) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0005b1a1) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0005b1a1) popup_call_audio_first_window_g

0x1ddc,	// (0x0004de6e) popup_call_audio_first_window_t1_ParamLimits

0x1ddc,	// (0x0004de6e) popup_call_audio_first_window_t1

0x1e88,	// (0x0004df1a) popup_call_audio_first_window_t4_ParamLimits

0x1e88,	// (0x0004df1a) popup_call_audio_first_window_t4

0x1f14,	// (0x0004dfa6) popup_call_audio_first_window_t5_ParamLimits

0x1f14,	// (0x0004dfa6) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0005b1a6) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0005b1a6) popup_call_audio_first_window_t

0x1f43,	// (0x0004dfd5) bg_popup_call_pane_cp02

0x1f4d,	// (0x0004dfdf) call_type_pane_cp023

0x1f55,	// (0x0004dfe7) popup_call_audio_wait_window_g1

0x1f5d,	// (0x0004dfef) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005b1ad) popup_call_audio_wait_window_g

0x1f65,	// (0x0004dff7) popup_call_audio_wait_window_t3

0x1f73,	// (0x0004e005) bg_popup_call_pane_cp03_ParamLimits

0x1f73,	// (0x0004e005) bg_popup_call_pane_cp03

0x1fd3,	// (0x0004e065) call_thumbnail_pane_cp011_ParamLimits

0x1fd3,	// (0x0004e065) call_thumbnail_pane_cp011

0x1fdf,	// (0x0004e071) call_type_pane_cp034_ParamLimits

0x1fdf,	// (0x0004e071) call_type_pane_cp034

0x201b,	// (0x0004e0ad) popup_call_audio_second_window_g1_ParamLimits

0x201b,	// (0x0004e0ad) popup_call_audio_second_window_g1

0x2057,	// (0x0004e0e9) popup_call_audio_second_window_g2_ParamLimits

0x2057,	// (0x0004e0e9) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0005b1b2) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0005b1b2) popup_call_audio_second_window_g

0x2093,	// (0x0004e125) popup_call_audio_second_window_t1_ParamLimits

0x2093,	// (0x0004e125) popup_call_audio_second_window_t1

0x2114,	// (0x0004e1a6) popup_call_audio_second_window_t2_ParamLimits

0x2114,	// (0x0004e1a6) popup_call_audio_second_window_t2

0x214a,	// (0x0004e1dc) popup_call_audio_second_window_t3_ParamLimits

0x214a,	// (0x0004e1dc) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0005b1b7) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0005b1b7) popup_call_audio_second_window_t

0x1f43,	// (0x0004dfd5) bg_popup_call_pane_cp04

0x2180,	// (0x0004e212) list_conf_pane

0x2188,	// (0x0004e21a) popup_call_audio_conf_window_t1

0x2196,	// (0x0004e228) call_thumbnail_pane_g1

0x219e,	// (0x0004e230) bg_pinb_pane_ParamLimits

0x219e,	// (0x0004e230) bg_pinb_pane

0x21ac,	// (0x0004e23e) find_pinb_pane

0x21b5,	// (0x0004e247) listscroll_pinb_pane_ParamLimits

0x21b5,	// (0x0004e247) listscroll_pinb_pane

0x21c4,	// (0x0004e256) pinb_bg_pane_g1

0x5e10,	// (0x00051ea2) pinb_bg_pane_g2

0x5e1c,	// (0x00051eae) pinb_bg_pane_g3

0x5e28,	// (0x00051eba) pinb_bg_pane_g4

0x5e34,	// (0x00051ec6) pinb_bg_pane_g5

0x5e40,	// (0x00051ed2) pinb_bg_pane_g6

0x5e4b,	// (0x00051edd) pinb_bg_pane_g7

0x5e56,	// (0x00051ee8) pinb_bg_pane_g8

0x5e61,	// (0x00051ef3) pinb_bg_pane_g9

0x5e6b,	// (0x00051efd) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0005b1be) pinb_bg_pane_g

0x5e80,	// (0x00051f12) grid_pinb_pane

0x5e8b,	// (0x00051f1d) list_pinb_pane

0x5e96,	// (0x00051f28) scroll_pane_cp01_ParamLimits

0x5e96,	// (0x00051f28) scroll_pane_cp01

0x21d6,	// (0x0004e268) find_pinb_pane_g1_ParamLimits

0x21d6,	// (0x0004e268) find_pinb_pane_g1

0x21ee,	// (0x0004e280) find_pinb_pane_t1

0x2200,	// (0x0004e292) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0005b1d8) find_pinb_pane_t

0x2215,	// (0x0004e2a7) input_focus_pane_cp01_ParamLimits

0x2215,	// (0x0004e2a7) input_focus_pane_cp01

0x5ea8,	// (0x00051f3a) cell_pinb_pane_ParamLimits

0x5ea8,	// (0x00051f3a) cell_pinb_pane

0x5ed6,	// (0x00051f68) cell_pinb_pane_g1_ParamLimits

0x5ed6,	// (0x00051f68) cell_pinb_pane_g1

0x5eeb,	// (0x00051f7d) cell_pinb_pane_g2_ParamLimits

0x5eeb,	// (0x00051f7d) cell_pinb_pane_g2

0x2221,	// (0x0004e2b3) cell_pinb_pane_g3_ParamLimits

0x2221,	// (0x0004e2b3) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0005b1dd) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0005b1dd) cell_pinb_pane_g

0x1f43,	// (0x0004dfd5) grid_highlight_pane_cp01

0x5ef7,	// (0x00051f89) list_pinb_item_pane_ParamLimits

0x5ef7,	// (0x00051f89) list_pinb_item_pane

0x1f43,	// (0x0004dfd5) list_highlight_pane_cp02

0x222d,	// (0x0004e2bf) list_pinb_item_pane_g1_ParamLimits

0x222d,	// (0x0004e2bf) list_pinb_item_pane_g1

0x223a,	// (0x0004e2cc) list_pinb_item_pane_g2_ParamLimits

0x223a,	// (0x0004e2cc) list_pinb_item_pane_g2

0x5f21,	// (0x00051fb3) list_pinb_item_pane_g3_ParamLimits

0x5f21,	// (0x00051fb3) list_pinb_item_pane_g3

0x2246,	// (0x0004e2d8) list_pinb_item_pane_g4_ParamLimits

0x2246,	// (0x0004e2d8) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0005b1e4) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0005b1e4) list_pinb_item_pane_g

0x2252,	// (0x0004e2e4) list_pinb_item_pane_t1_ParamLimits

0x2252,	// (0x0004e2e4) list_pinb_item_pane_t1

0x5f4c,	// (0x00051fde) calc_display_pane

0x5f6a,	// (0x00051ffc) calc_paper_pane

0x5f86,	// (0x00052018) grid_calc_pane

0x1f43,	// (0x0004dfd5) bg_list_pane_cp01

0x5fb2,	// (0x00052044) clock_g1

0x5fba,	// (0x0005204c) clock_g2

0x0001,

0xf15b,	// (0x0005b1ed) clock_g

0x5fc4,	// (0x00052056) clock_t1_ParamLimits

0x5fc4,	// (0x00052056) clock_t1

0x5fd9,	// (0x0005206b) clock_t2_ParamLimits

0x5fd9,	// (0x0005206b) clock_t2

0x5feb,	// (0x0005207d) clock_t3_ParamLimits

0x5feb,	// (0x0005207d) clock_t3

0x5ffd,	// (0x0005208f) clock_t4_ParamLimits

0x5ffd,	// (0x0005208f) clock_t4

0x600f,	// (0x000520a1) clock_t5_ParamLimits

0x600f,	// (0x000520a1) clock_t5

0x6024,	// (0x000520b6) clock_t6_ParamLimits

0x6024,	// (0x000520b6) clock_t6

0x6036,	// (0x000520c8) clock_t7_ParamLimits

0x6036,	// (0x000520c8) clock_t7

0x6048,	// (0x000520da) clock_t8_ParamLimits

0x6048,	// (0x000520da) clock_t8

0x605e,	// (0x000520f0) clock_t9_ParamLimits

0x605e,	// (0x000520f0) clock_t9

0x0008,

0xf160,	// (0x0005b1f2) clock_t_ParamLimits

0xf160,	// (0x0005b1f2) clock_t

0x2269,	// (0x0004e2fb) popup_clock_analogue_window_cp02

0x2269,	// (0x0004e2fb) popup_clock_digital_window_cp01

0x2271,	// (0x0004e303) listscroll_help_pane

0x1f43,	// (0x0004dfd5) phob_pre_status_pane

0x227b,	// (0x0004e30d) grid_qdial_pane

0x1f43,	// (0x0004dfd5) listscroll_mce_pane

0x2285,	// (0x0004e317) bg_notes_pane

0x228f,	// (0x0004e321) list_notes_pane

0x6074,	// (0x00052106) scroll_pane_cp06

0x2299,	// (0x0004e32b) bg_calc_paper_pane

0x6089,	// (0x0005211b) list_calc_pane

0x22ad,	// (0x0004e33f) bg_calc_display_pane

0x60a3,	// (0x00052135) calc_display_pane_t1

0x60b8,	// (0x0005214a) calc_display_pane_t2

0x60cd,	// (0x0005215f) calc_display_pane_t3

0x0002,

0xf173,	// (0x0005b205) calc_display_pane_t

0x60df,	// (0x00052171) cell_calc_pane_ParamLimits

0x60df,	// (0x00052171) cell_calc_pane

0x22b9,	// (0x0004e34b) bg_calc_paper_pane_g1

0x22d1,	// (0x0004e363) bg_calc_paper_pane_g2

0x22c5,	// (0x0004e357) bg_calc_paper_pane_g3

0x22e9,	// (0x0004e37b) bg_calc_paper_pane_g4

0x22dd,	// (0x0004e36f) bg_calc_paper_pane_g5

0x610c,	// (0x0005219e) bg_calc_paper_pane_g6

0x611d,	// (0x000521af) bg_calc_paper_pane_g7

0x612e,	// (0x000521c0) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0005b20c) bg_calc_paper_pane_g

0x613f,	// (0x000521d1) calc_bg_paper_pane_g9

0x6150,	// (0x000521e2) list_calc_item_pane_ParamLimits

0x6150,	// (0x000521e2) list_calc_item_pane

0x22f5,	// (0x0004e387) list_calc_item_pane_g1

0x618a,	// (0x0005221c) list_calc_item_pane_t1_ParamLimits

0x618a,	// (0x0005221c) list_calc_item_pane_t1

0x619c,	// (0x0005222e) list_calc_item_pane_t2_ParamLimits

0x619c,	// (0x0005222e) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0005b21d) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0005b21d) list_calc_item_pane_t

0x2302,	// (0x0004e394) cell_calc_pane_g1

0x230c,	// (0x0004e39e) grid_highlight_pane_cp02

0x2337,	// (0x0004e3c9) bg_calc_display_pane_g1

0x61cc,	// (0x0005225e) bg_calc_display_pane_g2

0x232e,	// (0x0004e3c0) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0005b227) bg_calc_display_pane_g

0x61d6,	// (0x00052268) cell_qdial_pane_ParamLimits

0x61d6,	// (0x00052268) cell_qdial_pane

0x61ea,	// (0x0005227c) cell_qdial_pane_g1_ParamLimits

0x61ea,	// (0x0005227c) cell_qdial_pane_g1

0x61f7,	// (0x00052289) cell_qdial_pane_g2_ParamLimits

0x61f7,	// (0x00052289) cell_qdial_pane_g2

0x2340,	// (0x0004e3d2) cell_qdial_pane_g3_ParamLimits

0x2340,	// (0x0004e3d2) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0005b22e) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0005b22e) cell_qdial_pane_g

0x6215,	// (0x000522a7) cell_qdial_pane_t1_ParamLimits

0x6215,	// (0x000522a7) cell_qdial_pane_t1

0x622d,	// (0x000522bf) cell_qdial_pane_t2_ParamLimits

0x622d,	// (0x000522bf) cell_qdial_pane_t2

0x6240,	// (0x000522d2) cell_qdial_pane_t3_ParamLimits

0x6240,	// (0x000522d2) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0005b237) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0005b237) cell_qdial_pane_t

0x1f43,	// (0x0004dfd5) grid_highlight_pane_cp04

0x234c,	// (0x0004e3de) thumbnail_qdial_pane_ParamLimits

0x234c,	// (0x0004e3de) thumbnail_qdial_pane

0x23a8,	// (0x0004e43a) list_help_pane

0x23b1,	// (0x0004e443) scroll_pane_cp02

0x6253,	// (0x000522e5) help_list_pane_t1_ParamLimits

0x6253,	// (0x000522e5) help_list_pane_t1

0x6291,	// (0x00052323) bg_notes_pane_g2

0x6299,	// (0x0005232b) bg_notes_pane_g3

0x62a1,	// (0x00052333) notes_bg_pane_g1

0x62a9,	// (0x0005233b) notes_bg_pane_g4

0x62b1,	// (0x00052343) notes_bg_pane_g5

0x62b9,	// (0x0005234b) notes_bg_pane_g6

0x62c1,	// (0x00052353) notes_bg_pane_g7

0x62c9,	// (0x0005235b) notes_bg_pane_g8

0x62d1,	// (0x00052363) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0005b255) notes_bg_pane_g

0x62d9,	// (0x0005236b) list_notes_text_pane_ParamLimits

0x62d9,	// (0x0005236b) list_notes_text_pane

0x23ba,	// (0x0004e44c) list_notes_text_pane_g1

0x6309,	// (0x0005239b) list_notes_text_pane_t1

0x22ad,	// (0x0004e33f) listscroll_cale_week_pane

0x6334,	// (0x000523c6) bg_cale_heading_pane

0x23d4,	// (0x0004e466) bg_cale_pane_cp01

0x6350,	// (0x000523e2) cale_week_corner_pane

0x6361,	// (0x000523f3) cale_week_day_heading_pane

0x637d,	// (0x0005240f) cale_week_scroll_pane_g1

0x6396,	// (0x00052428) cale_week_scroll_pane_g2

0x63a7,	// (0x00052439) cale_week_scroll_pane_g3

0x63b8,	// (0x0005244a) cale_week_scroll_pane_g4

0x63c9,	// (0x0005245b) cale_week_scroll_pane_g5

0x63da,	// (0x0005246c) cale_week_scroll_pane_g6

0x63eb,	// (0x0005247d) cale_week_scroll_pane_g7

0x63fe,	// (0x00052490) cale_week_scroll_pane_g8

0x6411,	// (0x000524a3) cale_week_scroll_pane_g9

0x6422,	// (0x000524b4) cale_week_scroll_pane_g10

0x6433,	// (0x000524c5) cale_week_scroll_pane_g11

0x6444,	// (0x000524d6) cale_week_scroll_pane_g12

0x645d,	// (0x000524ef) cale_week_scroll_pane_g13

0x6476,	// (0x00052508) cale_week_scroll_pane_g14

0x648f,	// (0x00052521) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0005b264) cale_week_scroll_pane_g

0x64a8,	// (0x0005253a) cale_week_time_pane

0x64bb,	// (0x0005254d) grid_cale_week_pane

0x64d8,	// (0x0005256a) scroll_pane_cp08

0x64f2,	// (0x00052584) cell_cale_week_pane_ParamLimits

0x64f2,	// (0x00052584) cell_cale_week_pane

0x6542,	// (0x000525d4) cale_week_day_heading_pane_t1

0x6556,	// (0x000525e8) cale_week_day_heading_pane_t2

0x656a,	// (0x000525fc) cale_week_day_heading_pane_t3

0x657e,	// (0x00052610) cale_week_day_heading_pane_t4

0x6592,	// (0x00052624) cale_week_day_heading_pane_t5

0x65a6,	// (0x00052638) cale_week_day_heading_pane_t6

0x65ba,	// (0x0005264c) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0005b283) cale_week_day_heading_pane_t

0x23ff,	// (0x0004e491) bg_cale_side_pane

0x65ce,	// (0x00052660) cale_week_time_pane_t1

0x65e6,	// (0x00052678) cale_week_time_pane_t2

0x65fe,	// (0x00052690) cale_week_time_pane_t3

0x6616,	// (0x000526a8) cale_week_time_pane_t4

0x662e,	// (0x000526c0) cale_week_time_pane_t5

0x6646,	// (0x000526d8) cale_week_time_pane_t6

0x6666,	// (0x000526f8) cale_week_time_pane_t7

0x6686,	// (0x00052718) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0005b292) cale_week_time_pane_t

0x66a6,	// (0x00052738) cell_cale_week_pane_g2

0x66b7,	// (0x00052749) cell_cale_week_pane_g3_ParamLimits

0x66b7,	// (0x00052749) cell_cale_week_pane_g3

0x240d,	// (0x0004e49f) grid_highlight_pane_cp07

0x2415,	// (0x0004e4a7) listscroll_gms_pane

0x241f,	// (0x0004e4b1) grid_gms_pane

0x2428,	// (0x0004e4ba) listscroll_gms_pane_g1

0x2430,	// (0x0004e4c2) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0005b2a3) listscroll_gms_pane_g

0x66cf,	// (0x00052761) scroll_pane_cp010

0x66da,	// (0x0005276c) cell_gms_pane_ParamLimits

0x66da,	// (0x0005276c) cell_gms_pane

0x66ec,	// (0x0005277e) cell_gms_pane_g1

0x2438,	// (0x0004e4ca) cell_gms_pane_g2

0x23ba,	// (0x0004e44c) cell_gms_pane_g3

0x2440,	// (0x0004e4d2) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0005b2a8) cell_gms_pane_g

0x2449,	// (0x0004e4db) grid_highlight_pane_cp09

0x8b2a,	// (0x00054bbc) phob_pre_status_pane_g1

0x8b32,	// (0x00054bc4) phob_pre_status_pane_g2

0x8b3a,	// (0x00054bcc) phob_pre_status_pane_g3

0x8b42,	// (0x00054bd4) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0005b697) phob_pre_status_pane_g

0x8b52,	// (0x00054be4) phob_pre_status_pane_t1

0x8b62,	// (0x00054bf4) phob_pre_status_pane_t2

0x8b72,	// (0x00054c04) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0005b6a2) phob_pre_status_pane_t

0x1f43,	// (0x0004dfd5) bg_list_pane_cp05

0x66fc,	// (0x0005278e) grid_vorec_pane

0x6704,	// (0x00052796) vorec_t1

0x6712,	// (0x000527a4) vorec_t2

0x6720,	// (0x000527b2) vorec_t3

0x672e,	// (0x000527c0) vorec_t4

0x673c,	// (0x000527ce) vorec_t5

0x674a,	// (0x000527dc) vorec_t6

0x0006,

0xf21f,	// (0x0005b2b1) vorec_t

0x6766,	// (0x000527f8) wait_bar_pane_cp01

0x2451,	// (0x0004e4e3) cell_vorec_pane_ParamLimits

0x2451,	// (0x0004e4e3) cell_vorec_pane

0x2464,	// (0x0004e4f6) cell_vorec_pane_g1

0x1f43,	// (0x0004dfd5) grid_highlight_pane_cp05

0x677e,	// (0x00052810) cams_zoom_pane

0x678a,	// (0x0005281c) image_vga_pane

0x6799,	// (0x0005282b) main_camera_pane_g1

0x67a7,	// (0x00052839) main_camera_pane_g2

0x67b5,	// (0x00052847) main_camera_pane_g3

0x67c1,	// (0x00052853) main_camera_pane_g4

0x67cd,	// (0x0005285f) main_camera_pane_g5

0x67d9,	// (0x0005286b) main_camera_pane_g6

0x67e5,	// (0x00052877) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0005b2c0) main_camera_pane_g

0x67f1,	// (0x00052883) main_camera_pane_t1

0x6803,	// (0x00052895) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0005b2d1) main_camera_pane_t

0x6824,	// (0x000528b6) cams_zoom_pane_cp_ParamLimits

0x6824,	// (0x000528b6) cams_zoom_pane_cp

0x6848,	// (0x000528da) image_cif_pane_ParamLimits

0x6848,	// (0x000528da) image_cif_pane

0x6866,	// (0x000528f8) image_subqcif_pane

0x686e,	// (0x00052900) main_video_pane_g1_ParamLimits

0x686e,	// (0x00052900) main_video_pane_g1

0x688e,	// (0x00052920) main_video_pane_g2_ParamLimits

0x688e,	// (0x00052920) main_video_pane_g2

0x68c0,	// (0x00052952) main_video_pane_g3_ParamLimits

0x68c0,	// (0x00052952) main_video_pane_g3

0x68eb,	// (0x0005297d) main_video_pane_g4_ParamLimits

0x68eb,	// (0x0005297d) main_video_pane_g4

0x6916,	// (0x000529a8) main_video_pane_g5_ParamLimits

0x6916,	// (0x000529a8) main_video_pane_g5

0x247a,	// (0x0004e50c) main_video_pane_g6_ParamLimits

0x247a,	// (0x0004e50c) main_video_pane_g6

0x0006,

0xf244,	// (0x0005b2d6) main_video_pane_g_ParamLimits

0xf244,	// (0x0005b2d6) main_video_pane_g

0x693a,	// (0x000529cc) main_video_pane_t1_ParamLimits

0x693a,	// (0x000529cc) main_video_pane_t1

0x2494,	// (0x0004e526) cams_zoom_pane_g1

0x249d,	// (0x0004e52f) cams_zoom_pane_g2

0x24a6,	// (0x0004e538) cams_zoom_pane_g3

0x24af,	// (0x0004e541) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0005b2e5) cams_zoom_pane_g

0x6984,	// (0x00052a16) grid_cams_pane

0x6992,	// (0x00052a24) linegrid_cams_pane

0x69a0,	// (0x00052a32) cell_cams_pane_ParamLimits

0x69a0,	// (0x00052a32) cell_cams_pane

0x24b8,	// (0x0004e54a) cams_burst_image_pane

0x24c0,	// (0x0004e552) cell_cams_pane_g1

0x1f43,	// (0x0004dfd5) grid_highlight_pane_cp03

0x2302,	// (0x0004e394) mp_bg_pane_g1

0x1f43,	// (0x0004dfd5) bg_list_pane_cp03

0x40a7,	// (0x00050139) bg_mp_pane

0x40af,	// (0x00050141) grid_mp_pane

0x40b7,	// (0x00050149) media_player_g1

0x40bf,	// (0x00050151) media_player_t1

0x40cd,	// (0x0005015f) media_player_t2

0x40db,	// (0x0005016d) media_player_t3

0x40e9,	// (0x0005017b) media_player_t4

0x40f7,	// (0x00050189) media_player_t5

0x4105,	// (0x00050197) media_player_t6

0x4113,	// (0x000501a5) media_player_t7

0x0006,

0xf5ef,	// (0x0005b681) media_player_t

0x4121,	// (0x000501b3) wait_bar_pane_cp02

0xf5d4,	// (0x0005b666) main_usb_pane_t

0x8b21,	// (0x00054bb3) cell_mp_pane

0x2302,	// (0x0004e394) cell_mp_pane_g1

0x1f43,	// (0x0004dfd5) grid_highlight_pane_cp06

0x24c8,	// (0x0004e55a) grid_skin_colour_pane

0x24d0,	// (0x0004e562) list_highlight_pane_cp03

0x6a05,	// (0x00052a97) skin_g1

0x24d8,	// (0x0004e56a) skin_t1

0x24e7,	// (0x0004e579) skin_t2

0x0001,

0xf288,	// (0x0005b31a) skin_t

0x6a0f,	// (0x00052aa1) cell_skin_colour_pane_ParamLimits

0x6a0f,	// (0x00052aa1) cell_skin_colour_pane

0x24f5,	// (0x0004e587) cell_skin_colour_pane_g1

0x6a93,	// (0x00052b25) call_video_g1_ParamLimits

0x6a93,	// (0x00052b25) call_video_g1

0x6aa3,	// (0x00052b35) call_video_g2_ParamLimits

0x6aa3,	// (0x00052b35) call_video_g2

0x0001,

0xf28d,	// (0x0005b31f) call_video_g_ParamLimits

0xf28d,	// (0x0005b31f) call_video_g

0x6afd,	// (0x00052b8f) call_video_uplink_pane_cp1_ParamLimits

0x6afd,	// (0x00052b8f) call_video_uplink_pane_cp1

0x2507,	// (0x0004e599) call_video_uplink_pane_cp2

0x6bc9,	// (0x00052c5b) video_down_crop_pane_ParamLimits

0x6bc9,	// (0x00052c5b) video_down_crop_pane

0x6cbb,	// (0x00052d4d) video_down_pane_ParamLimits

0x6cbb,	// (0x00052d4d) video_down_pane

0x250f,	// (0x0004e5a1) video_down_subqcif_pane_ParamLimits

0x250f,	// (0x0004e5a1) video_down_subqcif_pane

0x2527,	// (0x0004e5b9) video_down_subqcif_pane_cp_ParamLimits

0x2527,	// (0x0004e5b9) video_down_subqcif_pane_cp

0x254b,	// (0x0004e5dd) im_reading_pane_ParamLimits

0x254b,	// (0x0004e5dd) im_reading_pane

0x6ddd,	// (0x00052e6f) im_writing_pane_ParamLimits

0x6ddd,	// (0x00052e6f) im_writing_pane

0x6dfb,	// (0x00052e8d) im_reading_pane_t1

0x2565,	// (0x0004e5f7) list_im_pane

0x2576,	// (0x0004e608) scroll_pane_cp07

0x6e5b,	// (0x00052eed) im_writing_pane_t1_ParamLimits

0x6e5b,	// (0x00052eed) im_writing_pane_t1

0x258f,	// (0x0004e621) im_writing_pane_t2_ParamLimits

0x258f,	// (0x0004e621) im_writing_pane_t2

0x0001,

0xf297,	// (0x0005b329) im_writing_pane_t_ParamLimits

0xf297,	// (0x0005b329) im_writing_pane_t

0x1f43,	// (0x0004dfd5) input_focus_pane_cp04

0x1f43,	// (0x0004dfd5) input_focus_pane_cp05

0x6e6d,	// (0x00052eff) list_im_single_pane_ParamLimits

0x6e6d,	// (0x00052eff) list_im_single_pane

0x6e99,	// (0x00052f2b) list_single_im_pane_t1

0x8ae5,	// (0x00054b77) blid_accuracy_pane

0x8aed,	// (0x00054b7f) blid_compass_pane

0x8af7,	// (0x00054b89) main_location_t1

0x8b05,	// (0x00054b97) main_location_t2

0x8b13,	// (0x00054ba5) main_location_t3

0x0002,

0xf5fe,	// (0x0005b690) main_location_t

0x1f43,	// (0x0004dfd5) aid_levels_location

0x2302,	// (0x0004e394) blid_accuracy_pane_g1

0x2302,	// (0x0004e394) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0005b38b) blid_accuracy_pane_g

0x25d7,	// (0x0004e669) wml_content_pane

0x2615,	// (0x0004e6a7) wml_button_pane_ParamLimits

0x2615,	// (0x0004e6a7) wml_button_pane

0x6ea8,	// (0x00052f3a) wml_list_single_large_pane_ParamLimits

0x6ea8,	// (0x00052f3a) wml_list_single_large_pane

0x6eda,	// (0x00052f6c) wml_list_single_medium_pane_ParamLimits

0x6eda,	// (0x00052f6c) wml_list_single_medium_pane

0x6f13,	// (0x00052fa5) wml_list_single_small_pane_ParamLimits

0x6f13,	// (0x00052fa5) wml_list_single_small_pane

0x2629,	// (0x0004e6bb) wml_selection_box_pane_ParamLimits

0x2629,	// (0x0004e6bb) wml_selection_box_pane

0x263c,	// (0x0004e6ce) wml_list_single_pane_t1

0x264b,	// (0x0004e6dd) wml_list_single_medium_pane_t1

0x265a,	// (0x0004e6ec) wml_list_single_large_pane_t1

0x2669,	// (0x0004e6fb) input_focus_pane_cp02_ParamLimits

0x2669,	// (0x0004e6fb) input_focus_pane_cp02

0x267c,	// (0x0004e70e) wml_selection_box_pane_g1

0x2685,	// (0x0004e717) wml_selection_box_pane_t1_ParamLimits

0x2685,	// (0x0004e717) wml_selection_box_pane_t1

0x219e,	// (0x0004e230) bg_wml_button_pane_ParamLimits

0x219e,	// (0x0004e230) bg_wml_button_pane

0x269d,	// (0x0004e72f) wml_button_pane_g1

0x26a5,	// (0x0004e737) wml_button_pane_t1

0x269d,	// (0x0004e72f) wml_button_bg_pane_g1

0x26b5,	// (0x0004e747) wml_button_bg_pane_g2

0x26bd,	// (0x0004e74f) wml_button_bg_pane_g3

0x26c5,	// (0x0004e757) wml_button_bg_pane_g4

0x26cd,	// (0x0004e75f) wml_button_bg_pane_g5

0x26d5,	// (0x0004e767) wml_button_bg_pane_g6

0x26dd,	// (0x0004e76f) wml_button_bg_pane_g7

0x26e5,	// (0x0004e777) wml_button_bg_pane_g8

0x26ed,	// (0x0004e77f) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0005b32e) wml_button_bg_pane_g

0x6f5b,	// (0x00052fed) bg_list_pane_cp02

0x26f5,	// (0x0004e787) mce_header_pane_ParamLimits

0x26f5,	// (0x0004e787) mce_header_pane

0x270b,	// (0x0004e79d) mce_icon_pane

0x270b,	// (0x0004e79d) mce_image_pane

0x2714,	// (0x0004e7a6) mce_text_pane_ParamLimits

0x2714,	// (0x0004e7a6) mce_text_pane

0x6f65,	// (0x00052ff7) scroll_pane_cp03

0x260d,	// (0x0004e69f) scroll_pane_cp04

0x2727,	// (0x0004e7b9) scroll_pane_cp05_ParamLimits

0x2727,	// (0x0004e7b9) scroll_pane_cp05

0x6f6f,	// (0x00053001) mce_header_field_pane_ParamLimits

0x6f6f,	// (0x00053001) mce_header_field_pane

0x6f8f,	// (0x00053021) mce_header_field_pane_2_ParamLimits

0x6f8f,	// (0x00053021) mce_header_field_pane_2

0x6fa5,	// (0x00053037) mce_header_field_pane_3

0x6fad,	// (0x0005303f) list_single_mce_message_pane_ParamLimits

0x6fad,	// (0x0005303f) list_single_mce_message_pane

0x6fdd,	// (0x0005306f) list_single_mce_smart_pane_ParamLimits

0x6fdd,	// (0x0005306f) list_single_mce_smart_pane

0x2733,	// (0x0004e7c5) input_focus_pane_cp03

0x273c,	// (0x0004e7ce) list_header_data_pane

0x7018,	// (0x000530aa) mce_header_field_pane_t1

0x7028,	// (0x000530ba) list_single_mce_header_pane_ParamLimits

0x7028,	// (0x000530ba) list_single_mce_header_pane

0x2744,	// (0x0004e7d6) list_single_mce_header_pane_t1

0x2753,	// (0x0004e7e5) list_single_mce_message_pane_g1

0x275b,	// (0x0004e7ed) list_single_mce_message_pane_t1

0x707a,	// (0x0005310c) bg_cale_heading_pane_cp01_ParamLimits

0x707a,	// (0x0005310c) bg_cale_heading_pane_cp01

0x2769,	// (0x0004e7fb) bg_cale_pane_cp02_ParamLimits

0x2769,	// (0x0004e7fb) bg_cale_pane_cp02

0x70ad,	// (0x0005313f) cale_month_corner_pane

0x70c3,	// (0x00053155) cale_month_day_heading_pane_ParamLimits

0x70c3,	// (0x00053155) cale_month_day_heading_pane

0x7106,	// (0x00053198) cale_month_pane_g1_ParamLimits

0x7106,	// (0x00053198) cale_month_pane_g1

0x7132,	// (0x000531c4) cale_month_pane_g2_ParamLimits

0x7132,	// (0x000531c4) cale_month_pane_g2

0x7155,	// (0x000531e7) cale_month_pane_g3_ParamLimits

0x7155,	// (0x000531e7) cale_month_pane_g3

0x7191,	// (0x00053223) cale_month_pane_g4_ParamLimits

0x7191,	// (0x00053223) cale_month_pane_g4

0x71cd,	// (0x0005325f) cale_month_pane_g5_ParamLimits

0x71cd,	// (0x0005325f) cale_month_pane_g5

0x7209,	// (0x0005329b) cale_month_pane_g6_ParamLimits

0x7209,	// (0x0005329b) cale_month_pane_g6

0x7245,	// (0x000532d7) cale_month_pane_g7_ParamLimits

0x7245,	// (0x000532d7) cale_month_pane_g7

0x7291,	// (0x00053323) cale_month_pane_g8_ParamLimits

0x7291,	// (0x00053323) cale_month_pane_g8

0x72dd,	// (0x0005336f) cale_month_pane_g9_ParamLimits

0x72dd,	// (0x0005336f) cale_month_pane_g9

0x7323,	// (0x000533b5) cale_month_pane_g10_ParamLimits

0x7323,	// (0x000533b5) cale_month_pane_g10

0x7369,	// (0x000533fb) cale_month_pane_g11_ParamLimits

0x7369,	// (0x000533fb) cale_month_pane_g11

0x73a7,	// (0x00053439) cale_month_pane_g12_ParamLimits

0x73a7,	// (0x00053439) cale_month_pane_g12

0x73e5,	// (0x00053477) cale_month_pane_g13_ParamLimits

0x73e5,	// (0x00053477) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0005b341) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0005b341) cale_month_pane_g

0x7423,	// (0x000534b5) cale_month_week_pane

0x7436,	// (0x000534c8) grid_cale_month_pane_ParamLimits

0x7436,	// (0x000534c8) grid_cale_month_pane

0x7474,	// (0x00053506) cale_month_day_heading_pane_t1

0x74d2,	// (0x00053564) cale_month_day_heading_pane_t2

0x7537,	// (0x000535c9) cale_month_day_heading_pane_t3

0x759c,	// (0x0005362e) cale_month_day_heading_pane_t4

0x7601,	// (0x00053693) cale_month_day_heading_pane_t5

0x7666,	// (0x000536f8) cale_month_day_heading_pane_t6

0x76d3,	// (0x00053765) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0005b35c) cale_month_day_heading_pane_t

0x23ff,	// (0x0004e491) bg_cale_side_pane_cp01

0x7748,	// (0x000537da) cale_month_week_pane_t1

0x775f,	// (0x000537f1) cale_month_week_pane_t2

0x7776,	// (0x00053808) cale_month_week_pane_t3

0x778d,	// (0x0005381f) cale_month_week_pane_t4

0x77a4,	// (0x00053836) cale_month_week_pane_t5

0x77c3,	// (0x00053855) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0005b36b) cale_month_week_pane_t

0x77e2,	// (0x00053874) cell_cale_month_pane_ParamLimits

0x77e2,	// (0x00053874) cell_cale_month_pane

0x78b0,	// (0x00053942) cell_cale_month_pane_g1

0x78bc,	// (0x0005394e) cell_cale_month_pane_t1_ParamLimits

0x78bc,	// (0x0005394e) cell_cale_month_pane_t1

0x240d,	// (0x0004e49f) grid_highlight_pane_cp08

0x2302,	// (0x0004e394) main_smil_g1

0x78d8,	// (0x0005396a) smil_status_pane

0x279e,	// (0x0004e830) smil_text_pane

0x3fbf,	// (0x00050051) bg_popup_call3_rect_pane_g8

0x3fc7,	// (0x00050059) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0005b624) bg_popup_call3_rect_pane_g

0x425c,	// (0x000502ee) smil_status_volume_pane_g1

0x27a8,	// (0x0004e83a) smil_status_pane_t1

0x8ec9,	// (0x00054f5b) volume_smil_pane

0x27bf,	// (0x0004e851) list_smil_text_pane

0x78eb,	// (0x0005397d) scroll_pane_cp011

0x78f6,	// (0x00053988) smil_text_list_pane_t1_ParamLimits

0x78f6,	// (0x00053988) smil_text_list_pane_t1

0x79a1,	// (0x00053a33) aid_volume_smil_ParamLimits

0x79a1,	// (0x00053a33) aid_volume_smil

0x2302,	// (0x0004e394) smil_volume_pane_g1

0x2302,	// (0x0004e394) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0005b38b) smil_volume_pane_g

0x22ad,	// (0x0004e33f) listscroll_cale_day_pane

0x27c9,	// (0x0004e85b) bg_cale_pane

0x27e1,	// (0x0004e873) list_cale_pane

0x27f2,	// (0x0004e884) scroll_pane_cp09

0x2803,	// (0x0004e895) cale_bg_pane_g1

0x280b,	// (0x0004e89d) cale_bg_pane_g2

0x2813,	// (0x0004e8a5) cale_bg_pane_g3

0x281b,	// (0x0004e8ad) cale_bg_pane_g4

0x2823,	// (0x0004e8b5) cale_bg_pane_g5

0x282b,	// (0x0004e8bd) cale_bg_pane_g6

0x2833,	// (0x0004e8c5) cale_bg_pane_g7

0x283b,	// (0x0004e8cd) cale_bg_pane_g8

0x2843,	// (0x0004e8d5) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0005b390) cale_bg_pane_g

0x79c3,	// (0x00053a55) list_cale_time_pane_ParamLimits

0x79c3,	// (0x00053a55) list_cale_time_pane

0x79e4,	// (0x00053a76) list_cale_time_pane_g1_ParamLimits

0x79e4,	// (0x00053a76) list_cale_time_pane_g1

0x284b,	// (0x0004e8dd) list_cale_time_pane_g2_ParamLimits

0x284b,	// (0x0004e8dd) list_cale_time_pane_g2

0x79f0,	// (0x00053a82) list_cale_time_pane_g3_ParamLimits

0x79f0,	// (0x00053a82) list_cale_time_pane_g3

0x7a0c,	// (0x00053a9e) list_cale_time_pane_g4_ParamLimits

0x7a0c,	// (0x00053a9e) list_cale_time_pane_g4

0x7a1a,	// (0x00053aac) list_cale_time_pane_g5_ParamLimits

0x7a1a,	// (0x00053aac) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0005b3a3) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0005b3a3) list_cale_time_pane_g

0x7a28,	// (0x00053aba) list_cale_time_pane_t1_ParamLimits

0x7a28,	// (0x00053aba) list_cale_time_pane_t1

0x7a50,	// (0x00053ae2) list_cale_time_pane_t2_ParamLimits

0x7a50,	// (0x00053ae2) list_cale_time_pane_t2

0x7daa,	// (0x00053e3c) aid_blid_cardinal_pane

0x7dec,	// (0x00053e7e) compass_pane_t4

0x7a78,	// (0x00053b0a) list_cale_time_pane_t4_ParamLimits

0x7a78,	// (0x00053b0a) list_cale_time_pane_t4

0x7dfa,	// (0x00053e8c) compass_pane_t5

0x7e0a,	// (0x00053e9c) compass_pane_t6

0x7e18,	// (0x00053eaa) compass_pane_t7

0x2c87,	// (0x0004ed19) navi_pane_cc_t1

0x2ddc,	// (0x0004ee6e) aid_phob_thumbnail_center_pane

0x85db,	// (0x0005466d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0005b3b0) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0005b3b0) list_cale_time_pane_t

0x1b9c,	// (0x0004dc2e) bg_popup_window_pane_cp02_ParamLimits

0x1b9c,	// (0x0004dc2e) bg_popup_window_pane_cp02

0x2865,	// (0x0004e8f7) heading_pane_cp01_ParamLimits

0x2865,	// (0x0004e8f7) heading_pane_cp01

0x2871,	// (0x0004e903) loc_req_pane_ParamLimits

0x2871,	// (0x0004e903) loc_req_pane

0x2881,	// (0x0004e913) loc_type_pane_ParamLimits

0x2881,	// (0x0004e913) loc_type_pane

0x2893,	// (0x0004e925) loc_type_pane_t1_ParamLimits

0x2893,	// (0x0004e925) loc_type_pane_t1

0x28a5,	// (0x0004e937) loc_type_pane_t2_ParamLimits

0x28a5,	// (0x0004e937) loc_type_pane_t2

0x28b7,	// (0x0004e949) loc_type_pane_t3_ParamLimits

0x28b7,	// (0x0004e949) loc_type_pane_t3

0x0002,

0xf325,	// (0x0005b3b7) loc_type_pane_t_ParamLimits

0xf325,	// (0x0005b3b7) loc_type_pane_t

0x28c9,	// (0x0004e95b) list_loc_req_pane

0x28d3,	// (0x0004e965) scroll_pane_cp012

0x7aa0,	// (0x00053b32) list_single_loc_request_popup_menu_pane_ParamLimits

0x7aa0,	// (0x00053b32) list_single_loc_request_popup_menu_pane

0x28de,	// (0x0004e970) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x28de,	// (0x0004e970) list_single_loc_request_popup_menu_pane_g1

0x28ea,	// (0x0004e97c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x28ea,	// (0x0004e97c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0005b3be) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0005b3be) list_single_loc_request_popup_menu_pane_g

0x28f6,	// (0x0004e988) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x28f6,	// (0x0004e988) list_single_loc_request_popup_menu_pane_t1

0x7ab2,	// (0x00053b44) bg_popup_window_pane_cp03_ParamLimits

0x7ab2,	// (0x00053b44) bg_popup_window_pane_cp03

0x7ac0,	// (0x00053b52) heading_loc_req_pane_ParamLimits

0x7ac0,	// (0x00053b52) heading_loc_req_pane

0x7acc,	// (0x00053b5e) popup_dyc_status_message_window_g1_ParamLimits

0x7acc,	// (0x00053b5e) popup_dyc_status_message_window_g1

0x7ad8,	// (0x00053b6a) popup_dyc_status_message_window_t1_ParamLimits

0x7ad8,	// (0x00053b6a) popup_dyc_status_message_window_t1

0x7aea,	// (0x00053b7c) popup_dyc_status_message_window_t2_ParamLimits

0x7aea,	// (0x00053b7c) popup_dyc_status_message_window_t2

0x7afc,	// (0x00053b8e) popup_dyc_status_message_window_t3_ParamLimits

0x7afc,	// (0x00053b8e) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0005b3c3) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0005b3c3) popup_dyc_status_message_window_t

0x1f43,	// (0x0004dfd5) bg_heading_pane_cp01

0x290c,	// (0x0004e99e) heading_loc_req_pane_g1

0x2914,	// (0x0004e9a6) heading_loc_req_pane_g2

0x291c,	// (0x0004e9ae) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0005b3ca) heading_loc_req_pane_g

0x2924,	// (0x0004e9b6) heading_loc_req_pane_t1

0x2933,	// (0x0004e9c5) bg_popup_sub_pane_cp01_ParamLimits

0x2933,	// (0x0004e9c5) bg_popup_sub_pane_cp01

0x2941,	// (0x0004e9d3) popup_cale_events_window_g1_ParamLimits

0x2941,	// (0x0004e9d3) popup_cale_events_window_g1

0x2961,	// (0x0004e9f3) popup_cale_events_window_g2_ParamLimits

0x2961,	// (0x0004e9f3) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0005b3fe) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0005b3fe) popup_cale_events_window_g

0x2981,	// (0x0004ea13) popup_cale_events_window_t1_ParamLimits

0x2981,	// (0x0004ea13) popup_cale_events_window_t1

0x2993,	// (0x0004ea25) popup_cale_events_window_t2_ParamLimits

0x2993,	// (0x0004ea25) popup_cale_events_window_t2

0x29d1,	// (0x0004ea63) popup_cale_events_window_t3_ParamLimits

0x29d1,	// (0x0004ea63) popup_cale_events_window_t3

0x2a0b,	// (0x0004ea9d) popup_cale_events_window_t4_ParamLimits

0x2a0b,	// (0x0004ea9d) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0005b403) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0005b403) popup_cale_events_window_t

0x7b80,	// (0x00053c12) call_type_pane

0x2ab2,	// (0x0004eb44) popup_call_status_window_g1

0x7b8c,	// (0x00053c1e) popup_call_status_window_g2

0x7b98,	// (0x00053c2a) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0005b40c) popup_call_status_window_g

0x2a41,	// (0x0004ead3) call_type_pane_g1

0x2a4a,	// (0x0004eadc) call_type_pane_g2

0x0001,

0xf381,	// (0x0005b413) call_type_pane_g

0x1f43,	// (0x0004dfd5) bg_popup_sub_pane_cp02

0x2a53,	// (0x0004eae5) listscroll_popup_wml_pane

0x2a5b,	// (0x0004eaed) list_wml_pane

0x2a65,	// (0x0004eaf7) scroll_pane_cp013

0x2a70,	// (0x0004eb02) list_single_graphic_popup_wml_pane_ParamLimits

0x2a70,	// (0x0004eb02) list_single_graphic_popup_wml_pane

0x2302,	// (0x0004e394) list_single_graphic_popup_wml_pane_g1

0x2a84,	// (0x0004eb16) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0005b418) list_single_graphic_popup_wml_pane_g

0x2a8c,	// (0x0004eb1e) list_single_graphic_popup_wml_pane_t1

0x2a9a,	// (0x0004eb2c) aid_call_pane

0x2196,	// (0x0004e228) popup_clock_analogue_window_g1

0x2196,	// (0x0004e228) popup_clock_analogue_window_g2

0x7ba4,	// (0x00053c36) popup_clock_analogue_window_g3

0x7ba4,	// (0x00053c36) popup_clock_analogue_window_g4

0x2302,	// (0x0004e394) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0005b41d) popup_clock_analogue_window_g

0x7bac,	// (0x00053c3e) popup_clock_analogue_window_t1

0x7bba,	// (0x00053c4c) clock_digital_number_pane_ParamLimits

0x7bba,	// (0x00053c4c) clock_digital_number_pane

0x7bc6,	// (0x00053c58) clock_digital_number_pane_cp02_ParamLimits

0x7bc6,	// (0x00053c58) clock_digital_number_pane_cp02

0x7bd2,	// (0x00053c64) clock_digital_number_pane_cp03_ParamLimits

0x7bd2,	// (0x00053c64) clock_digital_number_pane_cp03

0x7bde,	// (0x00053c70) clock_digital_number_pane_cp04_ParamLimits

0x7bde,	// (0x00053c70) clock_digital_number_pane_cp04

0x7bea,	// (0x00053c7c) clock_digital_separator_pane_ParamLimits

0x7bea,	// (0x00053c7c) clock_digital_separator_pane

0x7bf6,	// (0x00053c88) popup_clock_digital_window_t1

0x2302,	// (0x0004e394) clock_digital_number_pane_g1

0x2302,	// (0x0004e394) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0005b38b) clock_digital_number_pane_g

0x2302,	// (0x0004e394) clock_digital_separator_pane_g1

0x2302,	// (0x0004e394) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0005b38b) clock_digital_separator_pane_g

0x1f43,	// (0x0004dfd5) bg_popup_window_pane_cp04

0x2aaa,	// (0x0004eb3c) heading_pane_cp03

0x2ac0,	// (0x0004eb52) listscroll_popup_gms_pane

0x2ac8,	// (0x0004eb5a) grid_large_graphic_popup_pane

0x2ad2,	// (0x0004eb64) listscroll_popup_gms_pane_g1

0x2ada,	// (0x0004eb6c) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0005b428) listscroll_popup_gms_pane_g

0x260d,	// (0x0004e69f) scroll_pane_cp014

0x2ae2,	// (0x0004eb74) cell_large_graphic_popup_pane_ParamLimits

0x2ae2,	// (0x0004eb74) cell_large_graphic_popup_pane

0x2afa,	// (0x0004eb8c) cell_large_graphic_popup_pane_g1_ParamLimits

0x2afa,	// (0x0004eb8c) cell_large_graphic_popup_pane_g1

0x2b06,	// (0x0004eb98) cell_large_graphic_popup_pane_g2_ParamLimits

0x2b06,	// (0x0004eb98) cell_large_graphic_popup_pane_g2

0x2b12,	// (0x0004eba4) cell_large_graphic_popup_pane_g3_ParamLimits

0x2b12,	// (0x0004eba4) cell_large_graphic_popup_pane_g3

0x2b1f,	// (0x0004ebb1) cell_large_graphic_popup_pane_g4_ParamLimits

0x2b1f,	// (0x0004ebb1) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0005b42d) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0005b42d) cell_large_graphic_popup_pane_g

0x2b2f,	// (0x0004ebc1) grid_highlight_pane_cp010

0x2302,	// (0x0004e394) bg_popup_call_pane_g1

0x2b39,	// (0x0004ebcb) list_single_graphic_popup_conf_pane_ParamLimits

0x2b39,	// (0x0004ebcb) list_single_graphic_popup_conf_pane

0x2b4b,	// (0x0004ebdd) list_highlight_pane_cp01

0x2b54,	// (0x0004ebe6) list_single_graphic_popup_conf_pane_g1

0x2b5c,	// (0x0004ebee) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0005b436) list_single_graphic_popup_conf_pane_g

0x2b64,	// (0x0004ebf6) list_single_graphic_popup_conf_pane_t1

0x2b72,	// (0x0004ec04) linegrid_cams_pane_g1

0x7c13,	// (0x00053ca5) linegrid_cams_pane_g2

0x23ba,	// (0x0004e44c) linegrid_cams_pane_g3

0x2b7b,	// (0x0004ec0d) linegrid_cams_pane_g4

0x7c1c,	// (0x00053cae) linegrid_cams_pane_g5

0x7c25,	// (0x00053cb7) linegrid_cams_pane_g6

0x2440,	// (0x0004e4d2) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0005b43b) linegrid_cams_pane_g

0x2b84,	// (0x0004ec16) popup_clock_analogue_window

0x2b84,	// (0x0004ec16) popup_clock_digital_window

0x1f43,	// (0x0004dfd5) popup_phob_thumbnail_window

0x2302,	// (0x0004e394) call_video_uplink_pane_g1

0x2b8d,	// (0x0004ec1f) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0005b44a) call_video_uplink_pane_g

0x240d,	// (0x0004e49f) video_uplink_pane

0x2b95,	// (0x0004ec27) mce_image_pane_g1

0x7c2e,	// (0x00053cc0) mce_image_pane_g2

0x7c36,	// (0x00053cc8) mce_image_pane_g3

0x7c3e,	// (0x00053cd0) mce_image_pane_g4

0x7c46,	// (0x00053cd8) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0005b44f) mce_image_pane_g

0x2b9f,	// (0x0004ec31) control_top_pane_stacon_cp01_ParamLimits

0x2b9f,	// (0x0004ec31) control_top_pane_stacon_cp01

0x2bb3,	// (0x0004ec45) uni_indicator_pane_stacon_cp01_ParamLimits

0x2bb3,	// (0x0004ec45) uni_indicator_pane_stacon_cp01

0x2bc4,	// (0x0004ec56) bg_popup_sub_pane_cp03

0x7c4e,	// (0x00053ce0) chi_dic_find_pane

0x7c56,	// (0x00053ce8) listscroll_chi_dic_pane

0x7c5f,	// (0x00053cf1) main_pane_chidic_g1

0x7c72,	// (0x00053d04) chi_dic_find_pane_t1

0x2bce,	// (0x0004ec60) find_chidic_pane

0x2bd7,	// (0x0004ec69) chi_dic_list_pane_ParamLimits

0x2bd7,	// (0x0004ec69) chi_dic_list_pane

0x2be8,	// (0x0004ec7a) scroll_pane_cp020

0x7c80,	// (0x00053d12) find_chidic_pane_t1

0x1f43,	// (0x0004dfd5) input_focus_pane_cp06

0x7c8f,	// (0x00053d21) list_chi_dic_pane_ParamLimits

0x7c8f,	// (0x00053d21) list_chi_dic_pane

0x2bf0,	// (0x0004ec82) list_chi_dic_pane_t1_ParamLimits

0x2bf0,	// (0x0004ec82) list_chi_dic_pane_t1

0x1f43,	// (0x0004dfd5) list_highlight_pane_cp020

0x2c03,	// (0x0004ec95) bg_cale_heading_pane_g1

0x7cb0,	// (0x00053d42) bg_cale_heading_pane_g2

0x7cb8,	// (0x00053d4a) bg_cale_heading_pane_g3

0x7cc0,	// (0x00053d52) bg_cale_heading_pane_g4

0x7cca,	// (0x00053d5c) bg_cale_heading_pane_g5

0x7cd4,	// (0x00053d66) bg_cale_heading_pane_g6

0x7cdc,	// (0x00053d6e) bg_cale_heading_pane_g7

0x7ce4,	// (0x00053d76) bg_cale_heading_pane_g8

0x7cee,	// (0x00053d80) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0005b45a) bg_cale_heading_pane_g

0x2c03,	// (0x0004ec95) bg_cale_side_pane_g1

0x7cf8,	// (0x00053d8a) bg_cale_side_pane_g2

0x7d02,	// (0x00053d94) bg_cale_side_pane_g3

0x7d0c,	// (0x00053d9e) bg_cale_side_pane_g4

0x7d16,	// (0x00053da8) bg_cale_side_pane_g5

0x7d20,	// (0x00053db2) bg_cale_side_pane_g6

0x7d2a,	// (0x00053dbc) bg_cale_side_pane_g7

0x7d34,	// (0x00053dc6) bg_cale_side_pane_g8

0x7d3c,	// (0x00053dce) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0005b46d) bg_cale_side_pane_g

0x7d44,	// (0x00053dd6) popup_call_status_window_ParamLimits

0x7d44,	// (0x00053dd6) popup_call_status_window

0x2c0b,	// (0x0004ec9d) stacon_top_pane

0x2c13,	// (0x0004eca5) status_pane_ParamLimits

0x2c13,	// (0x0004eca5) status_pane

0x2c28,	// (0x0004ecba) status_small_pane

0x2c30,	// (0x0004ecc2) control_pane

0x1f43,	// (0x0004dfd5) stacon_bottom_pane

0x2c38,	// (0x0004ecca) list_single_mce_smart_pane_t1_ParamLimits

0x2c38,	// (0x0004ecca) list_single_mce_smart_pane_t1

0x2c4b,	// (0x0004ecdd) list_single_mce_smart_pane_t2_ParamLimits

0x2c4b,	// (0x0004ecdd) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0005b480) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0005b480) list_single_mce_smart_pane_t

0x7d50,	// (0x00053de2) compass_pane

0x7d5c,	// (0x00053dee) main_location2_pane_t1

0x7d70,	// (0x00053e02) main_location2_pane_t2

0x7d84,	// (0x00053e16) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0005b485) main_location2_pane_t

0x2c6a,	// (0x0004ecfc) compass_pane_g1_ParamLimits

0x2c6a,	// (0x0004ecfc) compass_pane_g1

0x7dce,	// (0x00053e60) compass_pane_t1

0x7ddd,	// (0x00053e6f) compass_pane_t2

0x0005,

0xf3fc,	// (0x0005b48e) compass_pane_t

0x7e28,	// (0x00053eba) text_secondary_cp61

0x2c7e,	// (0x0004ed10) navi_pane_cams_g5

0x2ca1,	// (0x0004ed33) navi_pane_im_t1

0x2caf,	// (0x0004ed41) navi_pane_mp_g1_ParamLimits

0x2caf,	// (0x0004ed41) navi_pane_mp_g1

0x2cc3,	// (0x0004ed55) navi_pane_mp_g2_ParamLimits

0x2cc3,	// (0x0004ed55) navi_pane_mp_g2

0x2ccf,	// (0x0004ed61) navi_pane_mp_g3_ParamLimits

0x2ccf,	// (0x0004ed61) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0005b4a2) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0005b4a2) navi_pane_mp_g

0x2cdb,	// (0x0004ed6d) navi_pane_mp_t1

0x2ce9,	// (0x0004ed7b) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0005b4a9) navi_pane_mp_t

0x2d25,	// (0x0004edb7) navi_pane_vt_g1

0x2cdb,	// (0x0004ed6d) navi_pane_vt_t1

0x2d2d,	// (0x0004edbf) navi_slider_pane

0x2d35,	// (0x0004edc7) zooming_pane

0x2d3d,	// (0x0004edcf) navi_slider_pane_g1

0x7f3f,	// (0x00053fd1) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0005b4b0) navi_slider_pane_g

0x2d61,	// (0x0004edf3) aid_levels_zoom

0x2d69,	// (0x0004edfb) zooming_pane_g1

0x2d71,	// (0x0004ee03) zooming_pane_g2

0x2d71,	// (0x0004ee03) zooming_pane_g3

0x0002,

0xf42d,	// (0x0005b4bf) zooming_pane_g

0x2d79,	// (0x0004ee0b) level_10_zoom

0x2d82,	// (0x0004ee14) level_11_zoom

0x2d8b,	// (0x0004ee1d) level_1_zoom

0x2d94,	// (0x0004ee26) level_2_zoom

0x2d9d,	// (0x0004ee2f) level_3_zoom

0x2da6,	// (0x0004ee38) level_4_zoom

0x2daf,	// (0x0004ee41) level_5_zoom

0x2db8,	// (0x0004ee4a) level_6_zoom

0x2dc1,	// (0x0004ee53) level_7_zoom

0x2dca,	// (0x0004ee5c) level_8_zoom

0x2dd3,	// (0x0004ee65) level_9_zoom

0x2de4,	// (0x0004ee76) popup_phob_thumbnail_window_g1

0x2dec,	// (0x0004ee7e) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0005b4c6) popup_phob_thumbnail_window_g

0x4129,	// (0x000501bb) level_1_location

0x4131,	// (0x000501c3) level_2_location

0x4139,	// (0x000501cb) level_3_location

0x4141,	// (0x000501d3) level_4_location

0x2d35,	// (0x0004edc7) level_5_location

0x7f51,	// (0x00053fe3) mce_icon_pane_g1

0x7f59,	// (0x00053feb) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0005b4cb) mce_icon_pane_g

0x7f61,	// (0x00053ff3) main_mup_pane_g1_ParamLimits

0x7f61,	// (0x00053ff3) main_mup_pane_g1

0x7f79,	// (0x0005400b) main_mup_pane_g2_ParamLimits

0x7f79,	// (0x0005400b) main_mup_pane_g2

0x7f95,	// (0x00054027) main_mup_pane_g3_ParamLimits

0x7f95,	// (0x00054027) main_mup_pane_g3

0x7fb1,	// (0x00054043) main_mup_pane_g4_ParamLimits

0x7fb1,	// (0x00054043) main_mup_pane_g4

0x7fcd,	// (0x0005405f) main_mup_pane_g5_ParamLimits

0x7fcd,	// (0x0005405f) main_mup_pane_g5

0x7fee,	// (0x00054080) main_mup_pane_g6_ParamLimits

0x7fee,	// (0x00054080) main_mup_pane_g6

0x800a,	// (0x0005409c) main_mup_pane_g7_ParamLimits

0x800a,	// (0x0005409c) main_mup_pane_g7

0x8026,	// (0x000540b8) main_mup_pane_g8_ParamLimits

0x8026,	// (0x000540b8) main_mup_pane_g8

0x8042,	// (0x000540d4) main_mup_pane_g9_ParamLimits

0x8042,	// (0x000540d4) main_mup_pane_g9

0x8061,	// (0x000540f3) main_mup_pane_g10_ParamLimits

0x8061,	// (0x000540f3) main_mup_pane_g10

0x8080,	// (0x00054112) main_mup_pane_g11_ParamLimits

0x8080,	// (0x00054112) main_mup_pane_g11

0x8098,	// (0x0005412a) main_mup_pane_g12_ParamLimits

0x8098,	// (0x0005412a) main_mup_pane_g12

0x80a6,	// (0x00054138) main_mup_pane_g13_ParamLimits

0x80a6,	// (0x00054138) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0005b4d0) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0005b4d0) main_mup_pane_g

0x80bc,	// (0x0005414e) main_mup_pane_t1_ParamLimits

0x80bc,	// (0x0005414e) main_mup_pane_t1

0x80d9,	// (0x0005416b) main_mup_pane_t2_ParamLimits

0x80d9,	// (0x0005416b) main_mup_pane_t2

0x80f3,	// (0x00054185) main_mup_pane_t3_ParamLimits

0x80f3,	// (0x00054185) main_mup_pane_t3

0x810d,	// (0x0005419f) main_mup_pane_t4_ParamLimits

0x810d,	// (0x0005419f) main_mup_pane_t4

0x811f,	// (0x000541b1) main_mup_pane_t5_ParamLimits

0x811f,	// (0x000541b1) main_mup_pane_t5

0x8131,	// (0x000541c3) main_mup_pane_t6_ParamLimits

0x8131,	// (0x000541c3) main_mup_pane_t6

0x0005,

0xf459,	// (0x0005b4eb) main_mup_pane_t_ParamLimits

0xf459,	// (0x0005b4eb) main_mup_pane_t

0x8147,	// (0x000541d9) mup_progress_pane_ParamLimits

0x8147,	// (0x000541d9) mup_progress_pane

0x8153,	// (0x000541e5) mup_visualizer_pane_ParamLimits

0x8153,	// (0x000541e5) mup_visualizer_pane

0x8191,	// (0x00054223) mup_volume_pane_ParamLimits

0x8191,	// (0x00054223) mup_volume_pane

0x2ab2,	// (0x0004eb44) mup_visualizer_pane_g1_ParamLimits

0x2ab2,	// (0x0004eb44) mup_visualizer_pane_g1

0x2ab2,	// (0x0004eb44) mup_visualizer_pane_g2_ParamLimits

0x2ab2,	// (0x0004eb44) mup_visualizer_pane_g2

0x2c6a,	// (0x0004ecfc) mup_visualizer_pane_g3_ParamLimits

0x2c6a,	// (0x0004ecfc) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0005b4f8) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0005b4f8) mup_visualizer_pane_g

0x2302,	// (0x0004e394) mup_volume_pane_g1

0x2dfc,	// (0x0004ee8e) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0005b4ff) mup_volume_pane_g

0x2302,	// (0x0004e394) mup_progress_pane_g1

0x2e05,	// (0x0004ee97) mup_progress_pane_g2

0x2e0e,	// (0x0004eea0) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0005b504) mup_progress_pane_g

0x1f43,	// (0x0004dfd5) bg_popup_window_pane_cp05

0x2e17,	// (0x0004eea9) heading_pane_cp02_ParamLimits

0x2e17,	// (0x0004eea9) heading_pane_cp02

0x2e31,	// (0x0004eec3) list_popup_blid_pane

0x2e39,	// (0x0004eecb) list_blid_sat_info_pane_ParamLimits

0x2e39,	// (0x0004eecb) list_blid_sat_info_pane

0x2e4c,	// (0x0004eede) list_blid_sat_info_pane_g1

0x2e54,	// (0x0004eee6) list_blid_sat_info_pane_t1

0x829c,	// (0x0005432e) mup_equalizer_pane_ParamLimits

0x829c,	// (0x0005432e) mup_equalizer_pane

0x82bd,	// (0x0005434f) mup_equalizer_pane_cp1_ParamLimits

0x82bd,	// (0x0005434f) mup_equalizer_pane_cp1

0x82de,	// (0x00054370) mup_equalizer_pane_cp2_ParamLimits

0x82de,	// (0x00054370) mup_equalizer_pane_cp2

0x82ff,	// (0x00054391) mup_equalizer_pane_cp3_ParamLimits

0x82ff,	// (0x00054391) mup_equalizer_pane_cp3

0x8320,	// (0x000543b2) mup_equalizer_pane_cp4_ParamLimits

0x8320,	// (0x000543b2) mup_equalizer_pane_cp4

0x8341,	// (0x000543d3) mup_equalizer_pane_cp5

0x8357,	// (0x000543e9) mup_equalizer_pane_cp6

0x836f,	// (0x00054401) mup_equalizer_pane_cp7

0x4047,	// (0x000500d9) bg_popup_call_poc_act_pane_g9

0x404f,	// (0x000500e1) bg_popup_call_poc_act_pane_g10

0x4057,	// (0x000500e9) bg_popup_call_poc_act_pane_g11

0x000a,

0x219e,	// (0x0004e230) mup_scale_pane

0x2302,	// (0x0004e394) mup_scale_pane_g1

0x2e62,	// (0x0004eef4) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0005b520) mup_scale_pane_g

0x2e86,	// (0x0004ef18) msg_data_pane

0x2e8e,	// (0x0004ef20) scroll_pane_cp017

0x8399,	// (0x0005442b) bg_list_pane_cp04_ParamLimits

0x8399,	// (0x0005442b) bg_list_pane_cp04

0x2e96,	// (0x0004ef28) msg_data_pane_g1

0x83b9,	// (0x0005444b) msg_data_pane_g2

0x7c36,	// (0x00053cc8) msg_data_pane_g3

0x83c1,	// (0x00054453) msg_data_pane_g4

0x83c9,	// (0x0005445b) msg_data_pane_g5

0x83d1,	// (0x00054463) msg_data_pane_g6

0x83d9,	// (0x0005446b) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0005b52f) msg_data_pane_g

0x83e1,	// (0x00054473) msg_text_pane_ParamLimits

0x83e1,	// (0x00054473) msg_text_pane

0x8434,	// (0x000544c6) qrid_highlight_pane_cp011_ParamLimits

0x8434,	// (0x000544c6) qrid_highlight_pane_cp011

0x1f43,	// (0x0004dfd5) msg_body_pane

0x1f43,	// (0x0004dfd5) msg_header_pane

0x2ea7,	// (0x0004ef39) input_focus_pane_cp07

0x845e,	// (0x000544f0) msg_header_pane_t1_ParamLimits

0x845e,	// (0x000544f0) msg_header_pane_t1

0x8472,	// (0x00054504) msg_header_pane_t2_ParamLimits

0x8472,	// (0x00054504) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0005b543) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0005b543) msg_header_pane_t

0x2ebc,	// (0x0004ef4e) msg_body_pane_g1

0x8484,	// (0x00054516) msg_body_pane_t1_ParamLimits

0x8484,	// (0x00054516) msg_body_pane_t1

0x84b5,	// (0x00054547) msg_body_pane_t2_ParamLimits

0x84b5,	// (0x00054547) msg_body_pane_t2

0x84c7,	// (0x00054559) msg_body_pane_t3_ParamLimits

0x84c7,	// (0x00054559) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0005b548) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0005b548) msg_body_pane_t

0x852b,	// (0x000545bd) main_viewer_pane_g1_ParamLimits

0x852b,	// (0x000545bd) main_viewer_pane_g1

0x8537,	// (0x000545c9) main_viewer_pane_g2_ParamLimits

0x8537,	// (0x000545c9) main_viewer_pane_g2

0x8543,	// (0x000545d5) main_viewer_pane_g3_ParamLimits

0x8543,	// (0x000545d5) main_viewer_pane_g3

0x8554,	// (0x000545e6) main_viewer_pane_g4_ParamLimits

0x8554,	// (0x000545e6) main_viewer_pane_g4

0x8565,	// (0x000545f7) main_viewer_pane_g5_ParamLimits

0x8565,	// (0x000545f7) main_viewer_pane_g5

0x8565,	// (0x000545f7) main_viewer_pane_g7_ParamLimits

0x8565,	// (0x000545f7) main_viewer_pane_g7

0x8577,	// (0x00054609) main_viewer_pane_g8_ParamLimits

0x8577,	// (0x00054609) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0005b558) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0005b558) main_viewer_pane_g

0x2ec4,	// (0x0004ef56) viewer_content_pane_ParamLimits

0x2ec4,	// (0x0004ef56) viewer_content_pane

0x85af,	// (0x00054641) main_postcard_pane_g1_ParamLimits

0x85af,	// (0x00054641) main_postcard_pane_g1

0x85bd,	// (0x0005464f) main_postcard_pane_g2_ParamLimits

0x85bd,	// (0x0005464f) main_postcard_pane_g2

0x85cb,	// (0x0005465d) main_postcard_pane_g3_ParamLimits

0x85cb,	// (0x0005465d) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0005b569) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0005b569) main_postcard_pane_g

0x85db,	// (0x0005466d) main_postcard_pane_g4

0x4249,	// (0x000502db) smil_status_volume_pane_g2

0x8607,	// (0x00054699) postcard_pane_ParamLimits

0x8607,	// (0x00054699) postcard_pane

0x2ab2,	// (0x0004eb44) postcard_pane_g1_ParamLimits

0x2ab2,	// (0x0004eb44) postcard_pane_g1

0x8639,	// (0x000546cb) postcard_pane_g2_ParamLimits

0x8639,	// (0x000546cb) postcard_pane_g2

0x8645,	// (0x000546d7) postcard_pane_g3_ParamLimits

0x8645,	// (0x000546d7) postcard_pane_g3

0x2ee0,	// (0x0004ef72) postcard_pane_g4_ParamLimits

0x2ee0,	// (0x0004ef72) postcard_pane_g4

0x8651,	// (0x000546e3) postcard_pane_g5_ParamLimits

0x8651,	// (0x000546e3) postcard_pane_g5

0x865d,	// (0x000546ef) postcard_pane_g6_ParamLimits

0x865d,	// (0x000546ef) postcard_pane_g6

0x2ed2,	// (0x0004ef64) postcard_pane_g7_ParamLimits

0x2ed2,	// (0x0004ef64) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0005b576) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0005b576) postcard_pane_g

0x8669,	// (0x000546fb) main_mp2_pane_g1_ParamLimits

0x8669,	// (0x000546fb) main_mp2_pane_g1

0x8675,	// (0x00054707) main_mp2_pane_g2_ParamLimits

0x8675,	// (0x00054707) main_mp2_pane_g2

0x8681,	// (0x00054713) main_mp2_pane_g3_ParamLimits

0x8681,	// (0x00054713) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0005b585) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0005b585) main_mp2_pane_g

0x868d,	// (0x0005471f) main_mp2_pane_t1_ParamLimits

0x868d,	// (0x0005471f) main_mp2_pane_t1

0x86a4,	// (0x00054736) main_mp2_pane_t2_ParamLimits

0x86a4,	// (0x00054736) main_mp2_pane_t2

0x86b6,	// (0x00054748) main_mp2_pane_t3_ParamLimits

0x86b6,	// (0x00054748) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0005b58c) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0005b58c) main_mp2_pane_t

0x2eee,	// (0x0004ef80) pec_content_pane_ParamLimits

0x2eee,	// (0x0004ef80) pec_content_pane

0x260d,	// (0x0004e69f) scroll_pane_cp015

0x2f00,	// (0x0004ef92) pec_attribute_pane_ParamLimits

0x2f00,	// (0x0004ef92) pec_attribute_pane

0x86c8,	// (0x0005475a) pec_content_pane_g1_ParamLimits

0x86c8,	// (0x0005475a) pec_content_pane_g1

0x2f10,	// (0x0004efa2) pec_content_pane_t1_ParamLimits

0x2f10,	// (0x0004efa2) pec_content_pane_t1

0x2f22,	// (0x0004efb4) pec_content_pane_t2_ParamLimits

0x2f22,	// (0x0004efb4) pec_content_pane_t2

0x0001,

0xf501,	// (0x0005b593) pec_content_pane_t_ParamLimits

0xf501,	// (0x0005b593) pec_content_pane_t

0x86d4,	// (0x00054766) list_single_graphic_pane_cp01_ParamLimits

0x86d4,	// (0x00054766) list_single_graphic_pane_cp01

0x219e,	// (0x0004e230) bg_popup_sub_pane_cp04

0x2f34,	// (0x0004efc6) popup_mup_playback_window_g1

0x2f40,	// (0x0004efd2) popup_mup_playback_window_t1

0x2f55,	// (0x0004efe7) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0005b598) popup_mup_playback_window_t

0x2f8c,	// (0x0004f01e) main_image_pane_g1_ParamLimits

0x2f8c,	// (0x0004f01e) main_image_pane_g1

0x2fcf,	// (0x0004f061) scroll_pane_cp018_ParamLimits

0x2fcf,	// (0x0004f061) scroll_pane_cp018

0x2fe7,	// (0x0004f079) scroll_pane_cp016_ParamLimits

0x2fe7,	// (0x0004f079) scroll_pane_cp016

0x8778,	// (0x0005480a) smil2_image_pane_ParamLimits

0x8778,	// (0x0005480a) smil2_image_pane

0x87ac,	// (0x0005483e) smil2_root_pane_ParamLimits

0x87ac,	// (0x0005483e) smil2_root_pane

0x87d8,	// (0x0005486a) smil2_text_pane_ParamLimits

0x87d8,	// (0x0005486a) smil2_text_pane

0x1f43,	// (0x0004dfd5) bg_list_pane_cp06

0x3023,	// (0x0004f0b5) grid_radio_pane

0x1f43,	// (0x0004dfd5) bg_popup_window_pane_cp06

0x302b,	// (0x0004f0bd) main_fmradio_pane_t1

0x2aaa,	// (0x0004eb3c) heading_pane_cp04

0x3039,	// (0x0004f0cb) main_fmradio_pane_t2

0x405f,	// (0x000500f1) popup_cale_lunar_info_window_g1

0x3047,	// (0x0004f0d9) main_fmradio_pane_t3

0x4067,	// (0x000500f9) popup_cale_lunar_info_window_g2

0x3055,	// (0x0004f0e7) main_fmradio_pane_t4

0x0001,

0x3063,	// (0x0004f0f5) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0005b673) popup_cale_lunar_info_window_g

0xf51b,	// (0x0005b5ad) main_fmradio_pane_t

0x3071,	// (0x0004f103) wait_bar_pane_cp03

0x3079,	// (0x0004f10b) cell_fmradio_pane_ParamLimits

0x3079,	// (0x0004f10b) cell_fmradio_pane

0x2ed2,	// (0x0004ef64) cell_fmradio_pane_g1_ParamLimits

0x2ed2,	// (0x0004ef64) cell_fmradio_pane_g1

0x1f43,	// (0x0004dfd5) grid_highlight_pane_cp011

0x308c,	// (0x0004f11e) poc_content_pane_ParamLimits

0x308c,	// (0x0004f11e) poc_content_pane

0x309e,	// (0x0004f130) scroll_pane_cp019

0x8818,	// (0x000548aa) popup_call_poc_act_window_ParamLimits

0x8818,	// (0x000548aa) popup_call_poc_act_window

0x8825,	// (0x000548b7) popup_call_poc_inact_window_ParamLimits

0x8825,	// (0x000548b7) popup_call_poc_inact_window

0xf5b8,	// (0x0005b64a) bg_popup_call_poc_act_pane_g

0x3fcf,	// (0x00050061) bg_popup_call_poc_inact_pane_g1

0x3fd7,	// (0x00050069) bg_popup_call_poc_inact_pane_g2

0x30a6,	// (0x0004f138) popup_call_poc_act_window_g2

0x3fdf,	// (0x00050071) bg_popup_call_poc_inact_pane_g3

0x3fe7,	// (0x00050079) bg_popup_call_poc_inact_pane_g4

0x3fef,	// (0x00050081) bg_popup_call_poc_inact_pane_g5

0x30ae,	// (0x0004f140) popup_call_poc_act_window_t1_ParamLimits

0x30ae,	// (0x0004f140) popup_call_poc_act_window_t1

0x30d6,	// (0x0004f168) popup_call_poc_act_window_t2_ParamLimits

0x30d6,	// (0x0004f168) popup_call_poc_act_window_t2

0x30fe,	// (0x0004f190) popup_call_poc_act_window_t3_ParamLimits

0x30fe,	// (0x0004f190) popup_call_poc_act_window_t3

0x3126,	// (0x0004f1b8) popup_call_poc_act_window_t4_ParamLimits

0x3126,	// (0x0004f1b8) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0005b5b8) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0005b5b8) popup_call_poc_act_window_t

0x3ff7,	// (0x00050089) bg_popup_call_poc_inact_pane_g6

0x3fff,	// (0x00050091) bg_popup_call_poc_inact_pane_g7

0x4007,	// (0x00050099) bg_popup_call_poc_inact_pane_g8

0x3138,	// (0x0004f1ca) popup_call_poc_inact_window_g2

0x400f,	// (0x000500a1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0005b637) bg_popup_call_poc_inact_pane_g

0x3140,	// (0x0004f1d2) popup_call_poc_inact_window_t1_ParamLimits

0x3140,	// (0x0004f1d2) popup_call_poc_inact_window_t1

0x3155,	// (0x0004f1e7) popup_call_poc_inact_window_t2_ParamLimits

0x3155,	// (0x0004f1e7) popup_call_poc_inact_window_t2

0x316a,	// (0x0004f1fc) popup_call_poc_inact_window_t3_ParamLimits

0x316a,	// (0x0004f1fc) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0005b5c1) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0005b5c1) popup_call_poc_inact_window_t

0x41cf,	// (0x00050261) context_pane_ParamLimits

0x8e0c,	// (0x00054e9e) signal_pane_ParamLimits

0x2d35,	// (0x0004edc7) main_call2_pane

0x41bd,	// (0x0005024f) popup_phob_thumbnail2_window_ParamLimits

0x41bd,	// (0x0005024f) popup_phob_thumbnail2_window

0x84d9,	// (0x0005456b) aid_hotspot_pointer_arrow_pane

0x84e1,	// (0x00054573) aid_hotspot_pointer_hand_pane

0x8b4a,	// (0x00054bdc) phob_pre_status_pane_g5

0x677e,	// (0x00052810) cams_zoom_pane_ParamLimits

0x678a,	// (0x0005281c) image_vga_pane_ParamLimits

0x6799,	// (0x0005282b) main_camera_pane_g1_ParamLimits

0x67a7,	// (0x00052839) main_camera_pane_g2_ParamLimits

0x67b5,	// (0x00052847) main_camera_pane_g3_ParamLimits

0x67c1,	// (0x00052853) main_camera_pane_g4_ParamLimits

0x67cd,	// (0x0005285f) main_camera_pane_g5_ParamLimits

0x67d9,	// (0x0005286b) main_camera_pane_g6_ParamLimits

0x67e5,	// (0x00052877) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0005b2c0) main_camera_pane_g_ParamLimits

0x67f1,	// (0x00052883) main_camera_pane_t1_ParamLimits

0x6803,	// (0x00052895) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0005b2d1) main_camera_pane_t_ParamLimits

0x219e,	// (0x0004e230) bg_popup_preview_window_pane_cp01_ParamLimits

0x219e,	// (0x0004e230) bg_popup_preview_window_pane_cp01

0x317f,	// (0x0004f211) popup_phob_thumbnail2_window_g1_ParamLimits

0x317f,	// (0x0004f211) popup_phob_thumbnail2_window_g1

0x1f43,	// (0x0004dfd5) call2_cli_visual_pane

0x8841,	// (0x000548d3) popup_call2_audio_conf_window_ParamLimits

0x8841,	// (0x000548d3) popup_call2_audio_conf_window

0x8856,	// (0x000548e8) popup_call2_audio_first_window_ParamLimits

0x8856,	// (0x000548e8) popup_call2_audio_first_window

0x88f4,	// (0x00054986) popup_call2_audio_in_window_ParamLimits

0x88f4,	// (0x00054986) popup_call2_audio_in_window

0x8936,	// (0x000549c8) popup_call2_audio_out_window_ParamLimits

0x8936,	// (0x000549c8) popup_call2_audio_out_window

0x8998,	// (0x00054a2a) popup_call2_audio_second_window_ParamLimits

0x8998,	// (0x00054a2a) popup_call2_audio_second_window

0x89f6,	// (0x00054a88) popup_call2_audio_wait_window_ParamLimits

0x89f6,	// (0x00054a88) popup_call2_audio_wait_window

0x1f43,	// (0x0004dfd5) bg_popup_call2_act_pane_cp03

0x2180,	// (0x0004e212) list_conf_pane_cp

0x318b,	// (0x0004f21d) popup_call2_audio_conf_window_t1

0x3199,	// (0x0004f22b) list_single_graphic_popup_conf2_pane_ParamLimits

0x3199,	// (0x0004f22b) list_single_graphic_popup_conf2_pane

0x2b4b,	// (0x0004ebdd) list_highlight_pane_cp04

0x31ac,	// (0x0004f23e) list_single_graphic_popup_conf2_pane_g1

0x2b5c,	// (0x0004ebee) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0005b5c8) list_single_graphic_popup_conf2_pane_g

0x31b6,	// (0x0004f248) list_single_graphic_popup_conf2_pane_t1

0x31c4,	// (0x0004f256) bg_popup_call2_act_pane_cp01_ParamLimits

0x31c4,	// (0x0004f256) bg_popup_call2_act_pane_cp01

0x324e,	// (0x0004f2e0) call_type_pane_cp05_ParamLimits

0x324e,	// (0x0004f2e0) call_type_pane_cp05

0x32a2,	// (0x0004f334) popup_call2_audio_second_window_g1_ParamLimits

0x32a2,	// (0x0004f334) popup_call2_audio_second_window_g1

0x32f6,	// (0x0004f388) popup_call2_audio_second_window_g2_ParamLimits

0x32f6,	// (0x0004f388) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0005b5cd) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0005b5cd) popup_call2_audio_second_window_g

0x335b,	// (0x0004f3ed) popup_call2_audio_second_window_t1_ParamLimits

0x335b,	// (0x0004f3ed) popup_call2_audio_second_window_t1

0x3416,	// (0x0004f4a8) popup_call2_audio_second_window_t2_ParamLimits

0x3416,	// (0x0004f4a8) popup_call2_audio_second_window_t2

0x3469,	// (0x0004f4fb) popup_call2_audio_second_window_t3_ParamLimits

0x3469,	// (0x0004f4fb) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0005b5d4) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0005b5d4) popup_call2_audio_second_window_t

0x1f43,	// (0x0004dfd5) bg_popup_call2_in_pane_cp02

0x1f4d,	// (0x0004dfdf) call_type_pane_cp04

0x1f55,	// (0x0004dfe7) popup_call2_audio_wait_window_g1

0x1f5d,	// (0x0004dfef) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0005b1ad) popup_call2_audio_wait_window_g

0x1f65,	// (0x0004dff7) popup_call2_audio_wait_window_t3

0x355c,	// (0x0004f5ee) bg_popup_call2_act_pane_ParamLimits

0x355c,	// (0x0004f5ee) bg_popup_call2_act_pane

0x364d,	// (0x0004f6df) call_type_pane_cp03_ParamLimits

0x364d,	// (0x0004f6df) call_type_pane_cp03

0x36b1,	// (0x0004f743) popup_call2_audio_first_window_g1_ParamLimits

0x36b1,	// (0x0004f743) popup_call2_audio_first_window_g1

0x372d,	// (0x0004f7bf) popup_call2_audio_first_window_g2_ParamLimits

0x372d,	// (0x0004f7bf) popup_call2_audio_first_window_g2

0x2ab2,	// (0x0004eb44) popup_call2_audio_first_window_g3_ParamLimits

0x2ab2,	// (0x0004eb44) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0005b5dd) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0005b5dd) popup_call2_audio_first_window_g

0x380b,	// (0x0004f89d) popup_call2_audio_first_window_t1_ParamLimits

0x380b,	// (0x0004f89d) popup_call2_audio_first_window_t1

0x390e,	// (0x0004f9a0) popup_call2_audio_first_window_t4_ParamLimits

0x390e,	// (0x0004f9a0) popup_call2_audio_first_window_t4

0x39fa,	// (0x0004fa8c) popup_call2_audio_first_window_t5_ParamLimits

0x39fa,	// (0x0004fa8c) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0005b5e8) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0005b5e8) popup_call2_audio_first_window_t

0x2196,	// (0x0004e228) bg_popup_call2_act_pane_g1

0x406f,	// (0x00050101) popup_cale_lunar_info_window_t1

0x407d,	// (0x0005010f) popup_cale_lunar_info_window_t2

0x408b,	// (0x0005011d) popup_cale_lunar_info_window_t3

0x1f43,	// (0x0004dfd5) bg_popup_call2_bubble_pane

0x3afb,	// (0x0004fb8d) bg_popup_call2_in_pane_cp01_ParamLimits

0x3afb,	// (0x0004fb8d) bg_popup_call2_in_pane_cp01

0x1c1f,	// (0x0004dcb1) call_type_pane_cp02

0x3b43,	// (0x0004fbd5) popup_call2_audio_out_window_g1_ParamLimits

0x3b43,	// (0x0004fbd5) popup_call2_audio_out_window_g1

0x3b6f,	// (0x0004fc01) popup_call2_audio_out_window_g2_ParamLimits

0x3b6f,	// (0x0004fc01) popup_call2_audio_out_window_g2

0x3b97,	// (0x0004fc29) popup_call2_audio_out_window_g3_ParamLimits

0x3b97,	// (0x0004fc29) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0005b5f1) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0005b5f1) popup_call2_audio_out_window_g

0x3bd2,	// (0x0004fc64) popup_call2_audio_out_window_t1_ParamLimits

0x3bd2,	// (0x0004fc64) popup_call2_audio_out_window_t1

0x3c31,	// (0x0004fcc3) popup_call2_audio_out_window_t2_ParamLimits

0x3c31,	// (0x0004fcc3) popup_call2_audio_out_window_t2

0x3c85,	// (0x0004fd17) popup_call2_audio_out_window_t3_ParamLimits

0x3c85,	// (0x0004fd17) popup_call2_audio_out_window_t3

0x3c9b,	// (0x0004fd2d) popup_call2_audio_out_window_t4_ParamLimits

0x3c9b,	// (0x0004fd2d) popup_call2_audio_out_window_t4

0x3cb1,	// (0x0004fd43) popup_call2_audio_out_window_t5_ParamLimits

0x3cb1,	// (0x0004fd43) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0005b5fa) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0005b5fa) popup_call2_audio_out_window_t

0x3d15,	// (0x0004fda7) bg_popup_call2_in_pane_ParamLimits

0x3d15,	// (0x0004fda7) bg_popup_call2_in_pane

0x3d71,	// (0x0004fe03) popup_call2_audio_in_window_g1_ParamLimits

0x3d71,	// (0x0004fe03) popup_call2_audio_in_window_g1

0x3da9,	// (0x0004fe3b) popup_call2_audio_in_window_g2_ParamLimits

0x3da9,	// (0x0004fe3b) popup_call2_audio_in_window_g2

0x3de1,	// (0x0004fe73) popup_call2_audio_in_window_g3_ParamLimits

0x3de1,	// (0x0004fe73) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0005b607) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0005b607) popup_call2_audio_in_window_g

0x3e39,	// (0x0004fecb) popup_call2_audio_in_window_t1_ParamLimits

0x3e39,	// (0x0004fecb) popup_call2_audio_in_window_t1

0x3eb9,	// (0x0004ff4b) popup_call2_audio_in_window_t2_ParamLimits

0x3eb9,	// (0x0004ff4b) popup_call2_audio_in_window_t2

0x3f39,	// (0x0004ffcb) popup_call2_audio_in_window_t3_ParamLimits

0x3f39,	// (0x0004ffcb) popup_call2_audio_in_window_t3

0x3f53,	// (0x0004ffe5) popup_call2_audio_in_window_t4_ParamLimits

0x3f53,	// (0x0004ffe5) popup_call2_audio_in_window_t4

0x3f65,	// (0x0004fff7) popup_call2_audio_in_window_t5_ParamLimits

0x3f65,	// (0x0004fff7) popup_call2_audio_in_window_t5

0x3f7a,	// (0x0005000c) popup_call2_audio_in_window_t6_ParamLimits

0x3f7a,	// (0x0005000c) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0005b610) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0005b610) popup_call2_audio_in_window_t

0x2196,	// (0x0004e228) bg_popup_call2_in_pane_g1

0x4099,	// (0x0005012b) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0005b678) popup_cale_lunar_info_window_t

0x219e,	// (0x0004e230) bg_popup_call2_rect_pane_ParamLimits

0x219e,	// (0x0004e230) bg_popup_call2_rect_pane

0x1f43,	// (0x0004dfd5) call2_cli_visual_graphic_pane

0x1f43,	// (0x0004dfd5) call2_cli_visual_text_pane

0x8ebc,	// (0x00054f4e) smil_status_volume_pane_g3

0x0002,

0x2302,	// (0x0004e394) call2_cli_visual_graphic_pane_g1

0x2302,	// (0x0004e394) call2_cli_visual_graphic_pane_g2

0x2302,	// (0x0004e394) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0005b61d) call2_cli_visual_graphic_pane_g

0x3f8f,	// (0x00050021) bg_popup_call2_rect_pane_g1

0x23a0,	// (0x0004e432) bg_popup_call2_rect_pane_g2

0x3f97,	// (0x00050029) bg_popup_call2_rect_pane_g3

0x3f9f,	// (0x00050031) bg_popup_call2_rect_pane_g4

0x3fa7,	// (0x00050039) bg_popup_call2_rect_pane_g5

0x3faf,	// (0x00050041) bg_popup_call2_rect_pane_g6

0x3fb7,	// (0x00050049) bg_popup_call2_rect_pane_g7

0x3fbf,	// (0x00050051) bg_popup_call2_rect_pane_g8

0x3fc7,	// (0x00050059) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0005b624) bg_popup_call2_rect_pane_g

0x3fcf,	// (0x00050061) bg_popup_call2_bubble_pane_g1

0x3fd7,	// (0x00050069) bg_popup_call2_bubble_pane_g2

0x3fdf,	// (0x00050071) bg_popup_call2_bubble_pane_g3

0x3fe7,	// (0x00050079) bg_popup_call2_bubble_pane_g4

0x3fef,	// (0x00050081) bg_popup_call2_bubble_pane_g5

0x3ff7,	// (0x00050089) bg_popup_call2_bubble_pane_g6

0x3fff,	// (0x00050091) bg_popup_call2_bubble_pane_g7

0x4007,	// (0x00050099) bg_popup_call2_bubble_pane_g8

0x400f,	// (0x000500a1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0005b637) bg_popup_call2_bubble_pane_g

0x6321,	// (0x000523b3) aid_cale_week_size_cell_pane

0x6815,	// (0x000528a7) aid_cams_cif_uncrop_pane_ParamLimits

0x6815,	// (0x000528a7) aid_cams_cif_uncrop_pane

0x6978,	// (0x00052a0a) aid_cams_size_cell_ParamLimits

0x6978,	// (0x00052a0a) aid_cams_size_cell

0x6984,	// (0x00052a16) grid_cams_pane_ParamLimits

0x6992,	// (0x00052a24) linegrid_cams_pane_ParamLimits

0x6abb,	// (0x00052b4d) call_video_pane_t1

0x6adc,	// (0x00052b6e) call_video_pane_t2

0x0001,

0xf292,	// (0x0005b324) call_video_pane_t

0x705c,	// (0x000530ee) aid_cale_month_size_cell_pane_ParamLimits

0x705c,	// (0x000530ee) aid_cale_month_size_cell_pane

0xf62f,	// (0x0005b6c1) smil_status_volume_pane_g

0x8ec9,	// (0x00054f5b) volume_smil_pane_ParamLimits

0x0444,	// (0x0004c4d6) aid_popup2_width_pane

0x6208,	// (0x0005229a) cell_qdial_pane_g4_ParamLimits

0x6208,	// (0x0005229a) cell_qdial_pane_g4

0x7daa,	// (0x00053e3c) aid_blid_cardinal_pane_ParamLimits

0x7dba,	// (0x00053e4c) aid_blid_destination_pane_ParamLimits

0x7dba,	// (0x00053e4c) aid_blid_destination_pane

0x219e,	// (0x0004e230) bg_popup_call_poc_act_pane_ParamLimits

0x219e,	// (0x0004e230) bg_popup_call_poc_act_pane

0x219e,	// (0x0004e230) bg_popup_call_poc_inact_pane_ParamLimits

0x219e,	// (0x0004e230) bg_popup_call_poc_inact_pane

0x401f,	// (0x000500b1) bg_popup_call_poc_act_pane_g1

0x4027,	// (0x000500b9) bg_popup_call_poc_act_pane_g2

0x402f,	// (0x000500c1) bg_popup_call_poc_act_pane_g3

0x3fe7,	// (0x00050079) bg_popup_call_poc_act_pane_g4

0x3fef,	// (0x00050081) bg_popup_call_poc_act_pane_g5

0x4037,	// (0x000500c9) bg_popup_call_poc_act_pane_g6

0x3fff,	// (0x00050091) bg_popup_call_poc_act_pane_g7

0x403f,	// (0x000500d1) bg_popup_call_poc_act_pane_g8

0x1f43,	// (0x0004dfd5) main_usb_pane

0x4198,	// (0x0005022a) popup_cale_lunar_info_window

0x6dfb,	// (0x00052e8d) im_reading_pane_t1_ParamLimits

0x2565,	// (0x0004e5f7) list_im_pane_ParamLimits

0x2576,	// (0x0004e608) scroll_pane_cp07_ParamLimits

0x1f43,	// (0x0004dfd5) grid_highlight_pane_cp012

0x219e,	// (0x0004e230) mup_scale_pane_ParamLimits

0x2ab2,	// (0x0004eb44) main_usb_pane_g1_ParamLimits

0x2ab2,	// (0x0004eb44) main_usb_pane_g1

0x8a6d,	// (0x00054aff) main_usb_pane_g2_ParamLimits

0x8a6d,	// (0x00054aff) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0005b661) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0005b661) main_usb_pane_g

0x8a79,	// (0x00054b0b) main_usb_pane_t1_ParamLimits

0x8a79,	// (0x00054b0b) main_usb_pane_t1

0x8a8b,	// (0x00054b1d) main_usb_pane_t2_ParamLimits

0x8a8b,	// (0x00054b1d) main_usb_pane_t2

0x8a9d,	// (0x00054b2f) main_usb_pane_t3_ParamLimits

0x8a9d,	// (0x00054b2f) main_usb_pane_t3

0x8aaf,	// (0x00054b41) main_usb_pane_t4_ParamLimits

0x8aaf,	// (0x00054b41) main_usb_pane_t4

0x8ac1,	// (0x00054b53) main_usb_pane_t5_ParamLimits

0x8ac1,	// (0x00054b53) main_usb_pane_t5

0x8ad3,	// (0x00054b65) main_usb_pane_t6_ParamLimits

0x8ad3,	// (0x00054b65) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0005b666) main_usb_pane_t_ParamLimits

0x7d50,	// (0x00053de2) aid_text_placing

0x7d5c,	// (0x00053dee) main_location2_pane_t1_ParamLimits

0x7d70,	// (0x00053e02) main_location2_pane_t2_ParamLimits

0x7d84,	// (0x00053e16) main_location2_pane_t3_ParamLimits

0x7d98,	// (0x00053e2a) main_location2_pane_t4_ParamLimits

0x7d98,	// (0x00053e2a) main_location2_pane_t4

0xf3f3,	// (0x0005b485) main_location2_pane_t_ParamLimits

0x21e2,	// (0x0004e274) find_pinb_pane_g2_ParamLimits

0x21e2,	// (0x0004e274) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0005b1d3) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0005b1d3) find_pinb_pane_g

0x21ee,	// (0x0004e280) find_pinb_pane_t1_ParamLimits

0x2200,	// (0x0004e292) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0005b1d8) find_pinb_pane_t_ParamLimits

0x1f43,	// (0x0004dfd5) main_call3_pane

0x7474,	// (0x00053506) cale_month_day_heading_pane_t1_ParamLimits

0x74d2,	// (0x00053564) cale_month_day_heading_pane_t2_ParamLimits

0x7537,	// (0x000535c9) cale_month_day_heading_pane_t3_ParamLimits

0x759c,	// (0x0005362e) cale_month_day_heading_pane_t4_ParamLimits

0x7601,	// (0x00053693) cale_month_day_heading_pane_t5_ParamLimits

0x7666,	// (0x000536f8) cale_month_day_heading_pane_t6_ParamLimits

0x76d3,	// (0x00053765) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0005b35c) cale_month_day_heading_pane_t_ParamLimits

0x27b6,	// (0x0004e848) smil_status_volume_pane

0x8621,	// (0x000546b3) postcard_address_pane_ParamLimits

0x8621,	// (0x000546b3) postcard_address_pane

0x862d,	// (0x000546bf) postcard_message_pane_ParamLimits

0x862d,	// (0x000546bf) postcard_message_pane

0x8a35,	// (0x00054ac7) call2_cli_visual_pane_t1_ParamLimits

0x8a35,	// (0x00054ac7) call2_cli_visual_pane_t1

0x901c,	// (0x000550ae) postcard_message_pane_t1_ParamLimits

0x901c,	// (0x000550ae) postcard_message_pane_t1

0x9005,	// (0x00055097) postcard_address_pane_t1_ParamLimits

0x9005,	// (0x00055097) postcard_address_pane_t1

0x8ff6,	// (0x00055088) popup_call3_audio_in_window_ParamLimits

0x8ff6,	// (0x00055088) popup_call3_audio_in_window

0x8ede,	// (0x00054f70) bg_popup_call3_in_pane_ParamLimits

0x8ede,	// (0x00054f70) bg_popup_call3_in_pane

0x8f3c,	// (0x00054fce) popup_call3_audio_in_window_g1_ParamLimits

0x8f3c,	// (0x00054fce) popup_call3_audio_in_window_g1

0x8f54,	// (0x00054fe6) popup_call3_audio_in_window_g2_ParamLimits

0x8f54,	// (0x00054fe6) popup_call3_audio_in_window_g2

0x8f6c,	// (0x00054ffe) popup_call3_audio_in_window_g3_ParamLimits

0x8f6c,	// (0x00054ffe) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0005b6c8) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0005b6c8) popup_call3_audio_in_window_g

0x8f94,	// (0x00055026) popup_call3_audio_in_window_t1_ParamLimits

0x8f94,	// (0x00055026) popup_call3_audio_in_window_t1

0x8fbc,	// (0x0005504e) popup_call3_audio_in_window_t2_ParamLimits

0x8fbc,	// (0x0005504e) popup_call3_audio_in_window_t2

0x8fe4,	// (0x00055076) popup_call3_audio_in_window_t3_ParamLimits

0x8fe4,	// (0x00055076) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0005b6d1) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0005b6d1) popup_call3_audio_in_window_t

0x2d35,	// (0x0004edc7) bg_popup_call3_rect_pane

0x3f8f,	// (0x00050021) bg_popup_call3_rect_pane_g1

0x23a0,	// (0x0004e432) bg_popup_call3_rect_pane_g2

0x3f97,	// (0x00050029) bg_popup_call3_rect_pane_g3

0x3f9f,	// (0x00050031) bg_popup_call3_rect_pane_g4

0x3fa7,	// (0x00050039) bg_popup_call3_rect_pane_g5

0x3faf,	// (0x00050041) bg_popup_call3_rect_pane_g6

0x3fb7,	// (0x00050049) bg_popup_call3_rect_pane_g7

0x81ac,	// (0x0005423e) mup_visualizer_osc_pane

0x2df4,	// (0x0004ee86) mup_visualizer_spec_pane

0x8efe,	// (0x00054f90) call3_video_qcif_pane_ParamLimits

0x8efe,	// (0x00054f90) call3_video_qcif_pane

0x8f0e,	// (0x00054fa0) call3_video_qcif_uncrop_pane_ParamLimits

0x8f0e,	// (0x00054fa0) call3_video_qcif_uncrop_pane

0x8f1a,	// (0x00054fac) call3_video_subqcif_pane_ParamLimits

0x8f1a,	// (0x00054fac) call3_video_subqcif_pane

0x8f2c,	// (0x00054fbe) call3_video_subqcif_uncrop_pane_ParamLimits

0x8f2c,	// (0x00054fbe) call3_video_subqcif_uncrop_pane

0x8f84,	// (0x00055016) popup_call3_audio_in_window_g4_ParamLimits

0x8f84,	// (0x00055016) popup_call3_audio_in_window_g4

0x8eab,	// (0x00054f3d) mup_spec_half_pane

0x8eb4,	// (0x00054f46) mup_spec_half_pane_cp

0x422f,	// (0x000502c1) mup_osc_middle_pane

0x4238,	// (0x000502ca) mup_visualizer_osc_pane_g1

0x8e8c,	// (0x00054f1e) mup_spec_bar_pane_ParamLimits

0x8e8c,	// (0x00054f1e) mup_spec_bar_pane

0x421c,	// (0x000502ae) mup_spec_bar_pane_g1

0x4226,	// (0x000502b8) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0005b6bc) mup_spec_bar_pane_g

0x6321,	// (0x000523b3) aid_cale_week_size_cell_pane_ParamLimits

0x6334,	// (0x000523c6) bg_cale_heading_pane_ParamLimits

0x23d4,	// (0x0004e466) bg_cale_pane_cp01_ParamLimits

0x6350,	// (0x000523e2) cale_week_corner_pane_ParamLimits

0x6361,	// (0x000523f3) cale_week_day_heading_pane_ParamLimits

0x637d,	// (0x0005240f) cale_week_scroll_pane_g1_ParamLimits

0x6396,	// (0x00052428) cale_week_scroll_pane_g2_ParamLimits

0x63a7,	// (0x00052439) cale_week_scroll_pane_g3_ParamLimits

0x63b8,	// (0x0005244a) cale_week_scroll_pane_g4_ParamLimits

0x63c9,	// (0x0005245b) cale_week_scroll_pane_g5_ParamLimits

0x63da,	// (0x0005246c) cale_week_scroll_pane_g6_ParamLimits

0x63eb,	// (0x0005247d) cale_week_scroll_pane_g7_ParamLimits

0x63fe,	// (0x00052490) cale_week_scroll_pane_g8_ParamLimits

0x6411,	// (0x000524a3) cale_week_scroll_pane_g9_ParamLimits

0x6422,	// (0x000524b4) cale_week_scroll_pane_g10_ParamLimits

0x6433,	// (0x000524c5) cale_week_scroll_pane_g11_ParamLimits

0x6444,	// (0x000524d6) cale_week_scroll_pane_g12_ParamLimits

0x645d,	// (0x000524ef) cale_week_scroll_pane_g13_ParamLimits

0x6476,	// (0x00052508) cale_week_scroll_pane_g14_ParamLimits

0x648f,	// (0x00052521) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0005b264) cale_week_scroll_pane_g_ParamLimits

0x64a8,	// (0x0005253a) cale_week_time_pane_ParamLimits

0x64bb,	// (0x0005254d) grid_cale_week_pane_ParamLimits

0x23ed,	// (0x0004e47f) listscroll_cale_week_pane_t1

0x64d8,	// (0x0005256a) scroll_pane_cp08_ParamLimits

0x70ad,	// (0x0005313f) cale_month_corner_pane_ParamLimits

0x278c,	// (0x0004e81e) cale_month_pane_t1

0x7423,	// (0x000534b5) cale_month_week_pane_ParamLimits

0x2ab2,	// (0x0004eb44) popup_call_status_window_g1_ParamLimits

0x7b8c,	// (0x00053c1e) popup_call_status_window_g2_ParamLimits

0x7b98,	// (0x00053c2a) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0005b40c) popup_call_status_window_g_ParamLimits

0x2aa2,	// (0x0004eb34) aid_call2_pane

0x8450,	// (0x000544e2) msg_header_pane_g1

0x8621,	// (0x000546b3) postcard_address2_pane_ParamLimits

0x8621,	// (0x000546b3) postcard_address2_pane

0x862d,	// (0x000546bf) postcard_message2_pane_ParamLimits

0x862d,	// (0x000546bf) postcard_message2_pane

0x8e1a,	// (0x00054eac) message2_row_pane_ParamLimits

0x8e1a,	// (0x00054eac) message2_row_pane

0x8e37,	// (0x00054ec9) address2_row_pane_ParamLimits

0x8e37,	// (0x00054ec9) address2_row_pane

0x41ea,	// (0x0005027c) postcard_message2_row_pane_g1

0x41f2,	// (0x00050284) postcard_message2_row_pane_t1

0x41ea,	// (0x0005027c) address2_row_pane_g1

0x41f2,	// (0x00050284) address2_row_pane_t1

0x66f4,	// (0x00052786) aid_size_cell_vorec

0x1f43,	// (0x0004dfd5) main_rss_pane

0x8e4a,	// (0x00054edc) rss_list_single_pane_ParamLimits

0x8e4a,	// (0x00054edc) rss_list_single_pane

0x4200,	// (0x00050292) rss_list_single_pane_t1

0x420e,	// (0x000502a0) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0005b6b7) rss_list_single_pane_t

0x1f43,	// (0x0004dfd5) main_camera2_pane

0x1f43,	// (0x0004dfd5) main_video2_pane

0x9080,	// (0x00055112) cams_zoom_pane_cp2_ParamLimits

0x9080,	// (0x00055112) cams_zoom_pane_cp2

0x908c,	// (0x0005511e) image2_vga_pane_ParamLimits

0x908c,	// (0x0005511e) image2_vga_pane

0x909b,	// (0x0005512d) main_camera2_pane_g1_ParamLimits

0x909b,	// (0x0005512d) main_camera2_pane_g1

0x90a7,	// (0x00055139) main_camera2_pane_g2_ParamLimits

0x90a7,	// (0x00055139) main_camera2_pane_g2

0x90b3,	// (0x00055145) main_camera2_pane_g3_ParamLimits

0x90b3,	// (0x00055145) main_camera2_pane_g3

0x90bf,	// (0x00055151) main_camera2_pane_g4_ParamLimits

0x90bf,	// (0x00055151) main_camera2_pane_g4

0x90cb,	// (0x0005515d) main_camera2_pane_g5_ParamLimits

0x90cb,	// (0x0005515d) main_camera2_pane_g5

0x90d7,	// (0x00055169) main_camera2_pane_g6_ParamLimits

0x90d7,	// (0x00055169) main_camera2_pane_g6

0x90e3,	// (0x00055175) main_camera2_pane_g7_ParamLimits

0x90e3,	// (0x00055175) main_camera2_pane_g7

0x90ef,	// (0x00055181) main_camera2_pane_g8_ParamLimits

0x90ef,	// (0x00055181) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0005b6d8) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0005b6d8) main_camera2_pane_g

0x9107,	// (0x00055199) main_camera2_pane_t1_ParamLimits

0x9107,	// (0x00055199) main_camera2_pane_t1

0x9119,	// (0x000551ab) main_camera2_pane_t2_ParamLimits

0x9119,	// (0x000551ab) main_camera2_pane_t2

0x912b,	// (0x000551bd) main_camera2_pane_t3_ParamLimits

0x912b,	// (0x000551bd) main_camera2_pane_t3

0x913d,	// (0x000551cf) main_camera2_pane_t4_ParamLimits

0x913d,	// (0x000551cf) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0005b6eb) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0005b6eb) main_camera2_pane_t

0x919f,	// (0x00055231) cams_zoom_pane_cp4_ParamLimits

0x919f,	// (0x00055231) cams_zoom_pane_cp4

0x91af,	// (0x00055241) image2_cif_pane_ParamLimits

0x91af,	// (0x00055241) image2_cif_pane

0x91c4,	// (0x00055256) image2_subqcif_pane_ParamLimits

0x91c4,	// (0x00055256) image2_subqcif_pane

0x91d3,	// (0x00055265) main_video2_pane_g1_ParamLimits

0x91d3,	// (0x00055265) main_video2_pane_g1

0x91e5,	// (0x00055277) main_video2_pane_g2_ParamLimits

0x91e5,	// (0x00055277) main_video2_pane_g2

0x91f5,	// (0x00055287) main_video2_pane_g3_ParamLimits

0x91f5,	// (0x00055287) main_video2_pane_g3

0x9205,	// (0x00055297) main_video2_pane_g4_ParamLimits

0x9205,	// (0x00055297) main_video2_pane_g4

0x9215,	// (0x000552a7) main_video2_pane_g5_ParamLimits

0x9215,	// (0x000552a7) main_video2_pane_g5

0x9225,	// (0x000552b7) main_video2_pane_g6_ParamLimits

0x9225,	// (0x000552b7) main_video2_pane_g6

0x0005,

0xf668,	// (0x0005b6fa) main_video2_pane_g_ParamLimits

0xf668,	// (0x0005b6fa) main_video2_pane_g

0x9237,	// (0x000552c9) main_video2_pane_t1_ParamLimits

0x9237,	// (0x000552c9) main_video2_pane_t1

0x9251,	// (0x000552e3) main_video2_pane_t2_ParamLimits

0x9251,	// (0x000552e3) main_video2_pane_t2

0x9277,	// (0x00055309) main_video2_pane_t3_ParamLimits

0x9277,	// (0x00055309) main_video2_pane_t3

0x0002,

0xf675,	// (0x0005b707) main_video2_pane_t_ParamLimits

0xf675,	// (0x0005b707) main_video2_pane_t

0x8b8a,	// (0x00054c1c) call_muted_g2

0x0001,

0xf617,	// (0x0005b6a9) call_muted_g

0x1f43,	// (0x0004dfd5) main_mup2_pane

0x429d,	// (0x0005032f) main_mup2_pane_g1_ParamLimits

0x429d,	// (0x0005032f) main_mup2_pane_g1

0x929d,	// (0x0005532f) main_mup2_pane_g2_ParamLimits

0x929d,	// (0x0005532f) main_mup2_pane_g2

0x951f,	// (0x000555b1) main_mup_pane_g13_cp1

0x9527,	// (0x000555b9) mup_volume_pane_cp1

0x92bd,	// (0x0005534f) main_mup2_pane_g4_ParamLimits

0x92bd,	// (0x0005534f) main_mup2_pane_g4

0x92d2,	// (0x00055364) main_mup2_pane_g5_ParamLimits

0x92d2,	// (0x00055364) main_mup2_pane_g5

0x92e7,	// (0x00055379) main_mup2_pane_g6_ParamLimits

0x92e7,	// (0x00055379) main_mup2_pane_g6

0x92fc,	// (0x0005538e) main_mup2_pane_g7_ParamLimits

0x92fc,	// (0x0005538e) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0005b70e) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0005b70e) main_mup2_pane_g

0x9318,	// (0x000553aa) main_mup2_pane_t1_ParamLimits

0x9318,	// (0x000553aa) main_mup2_pane_t1

0x932f,	// (0x000553c1) main_mup2_pane_t2_ParamLimits

0x932f,	// (0x000553c1) main_mup2_pane_t2

0x9346,	// (0x000553d8) main_mup2_pane_t3_ParamLimits

0x9346,	// (0x000553d8) main_mup2_pane_t3

0x935d,	// (0x000553ef) main_mup2_pane_t4_ParamLimits

0x935d,	// (0x000553ef) main_mup2_pane_t4

0x9377,	// (0x00055409) main_mup2_pane_t5_ParamLimits

0x9377,	// (0x00055409) main_mup2_pane_t5

0x9391,	// (0x00055423) main_mup2_pane_t6_ParamLimits

0x9391,	// (0x00055423) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0005b71d) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0005b71d) main_mup2_pane_t

0x93c9,	// (0x0005545b) mup2_visualizer_pane_ParamLimits

0x93c9,	// (0x0005545b) mup2_visualizer_pane

0x93ff,	// (0x00055491) mup_progress_pane_cp_ParamLimits

0x93ff,	// (0x00055491) mup_progress_pane_cp

0x950a,	// (0x0005559c) mup_volume_pane_cp_ParamLimits

0x950a,	// (0x0005559c) mup_volume_pane_cp

0x9416,	// (0x000554a8) mup2_visualizer_pane_g1_ParamLimits

0x9416,	// (0x000554a8) mup2_visualizer_pane_g1

0x426f,	// (0x00050301) mup2_visualizer_pane_g2_ParamLimits

0x426f,	// (0x00050301) mup2_visualizer_pane_g2

0x942b,	// (0x000554bd) mup2_visualizer_pane_g3_ParamLimits

0x942b,	// (0x000554bd) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0005b72a) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0005b72a) mup2_visualizer_pane_g

0x301b,	// (0x0004f0ad) aid_size_cell_fmradio

0x8ca0,	// (0x00054d32) aid_height_parent_landcape

0x25f4,	// (0x0004e686) wml_content_pane_cp

0x25fc,	// (0x0004e68e) wml_tabs_pane

0x2605,	// (0x0004e697) popup_wml_miniature_window

0x260d,	// (0x0004e69f) scroll_pane_cp021

0x2621,	// (0x0004e6b3) wml_content_pane_comp8

0x1f43,	// (0x0004dfd5) bg_popup_sub_pane_cp05

0x428d,	// (0x0005031f) popup_wml_miniature_window_g1

0x4295,	// (0x00050327) wml_miniature_view_pane

0x9439,	// (0x000554cb) aid_size_wml_view

0x9441,	// (0x000554d3) wml_miniature_view_pane_g1

0x944a,	// (0x000554dc) wml_miniature_view_pane_g2

0x9453,	// (0x000554e5) wml_miniature_view_pane_g3

0x945b,	// (0x000554ed) wml_miniature_view_pane_g4

0x9463,	// (0x000554f5) wml_miniature_view_pane_g5

0x946b,	// (0x000554fd) wml_miniature_view_pane_g6

0x9473,	// (0x00055505) wml_miniature_view_pane_g7

0x947b,	// (0x0005550d) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0005b731) wml_miniature_view_pane_g

0x429d,	// (0x0005032f) background_graphic_ParamLimits

0x429d,	// (0x0005032f) background_graphic

0x42a9,	// (0x0005033b) wml_tabs_2_pane

0x42b2,	// (0x00050344) wml_tabs_3_pane_ParamLimits

0x42b2,	// (0x00050344) wml_tabs_3_pane

0x42c4,	// (0x00050356) wml_tabs_4_pane_ParamLimits

0x42c4,	// (0x00050356) wml_tabs_4_pane

0x42da,	// (0x0005036c) wml_tabs_5_pane_ParamLimits

0x42da,	// (0x0005036c) wml_tabs_5_pane

0x42f4,	// (0x00050386) wml_tabs_pane_g2_ParamLimits

0x42f4,	// (0x00050386) wml_tabs_pane_g2

0x4308,	// (0x0005039a) wml_tabs_pane_g3_ParamLimits

0x4308,	// (0x0005039a) wml_tabs_pane_g3

0x9483,	// (0x00055515) wml_tabs_2_active_pane_ParamLimits

0x9483,	// (0x00055515) wml_tabs_2_active_pane

0x9493,	// (0x00055525) wml_tabs_2_passive_pane_ParamLimits

0x9493,	// (0x00055525) wml_tabs_2_passive_pane

0x94a3,	// (0x00055535) wml_tabs_3_active_pane_cp_ParamLimits

0x94a3,	// (0x00055535) wml_tabs_3_active_pane_cp

0x94b4,	// (0x00055546) wml_tabs_3_passive_pane_ParamLimits

0x94b4,	// (0x00055546) wml_tabs_3_passive_pane

0x94c5,	// (0x00055557) wml_tabs_3_passive_pane_cp_ParamLimits

0x94c5,	// (0x00055557) wml_tabs_3_passive_pane_cp

0x94d6,	// (0x00055568) tabs_4_active_pane

0x94de,	// (0x00055570) tabs_4_passive_pane

0x94e6,	// (0x00055578) tabs_4_passive_pane_cp

0x94ee,	// (0x00055580) tabs_4_passive_pane_cp2

0x4017,	// (0x000500a9) aid_height_text

0x8175,	// (0x00054207) mup_volume_cont_pane_ParamLimits

0x8175,	// (0x00054207) mup_volume_cont_pane

0x5e76,	// (0x00051f08) aid_size_cell_pinb

0x21ce,	// (0x0004e260) aid_size_list_pinb

0x93e8,	// (0x0005547a) mup2_volume_cont_pane_ParamLimits

0x93e8,	// (0x0005547a) mup2_volume_cont_pane

0x94f6,	// (0x00055588) mup2_volume_cont_pane_g1_ParamLimits

0x94f6,	// (0x00055588) mup2_volume_cont_pane_g1

0x5b0f,	// (0x00051ba1) aid_size_cell_touch_ParamLimits

0x5b0f,	// (0x00051ba1) aid_size_cell_touch

0x5d56,	// (0x00051de8) touch_pane_ParamLimits

0x5d56,	// (0x00051de8) touch_pane

0x0432,	// (0x0004c4c4) main_rss2_pane

0x4325,	// (0x000503b7) listscroll_rss2_pane

0x432e,	// (0x000503c0) rss2_navigation_pane

0x4336,	// (0x000503c8) list_rss2_pane

0x2be8,	// (0x0004ec7a) scroll_pane_cp22

0x433e,	// (0x000503d0) rss2_navigation_pane_g1

0x4347,	// (0x000503d9) rss2_navigation_pane_g2

0x434f,	// (0x000503e1) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0005b742) rss2_navigation_pane_g

0x4357,	// (0x000503e9) rss2_navigation_pane_t1

0x952f,	// (0x000555c1) rss2_list_single_pane_ParamLimits

0x952f,	// (0x000555c1) rss2_list_single_pane

0x4365,	// (0x000503f7) rss2_list_single_pane_t2

0x4373,	// (0x00050405) rss2_list_single_pane_t3_ParamLimits

0x4373,	// (0x00050405) rss2_list_single_pane_t3

0x4390,	// (0x00050422) rss2_list_single_pane_t4

0x78e3,	// (0x00053975) smil_status_pane_g1

0x361c,	// (0x0004f6ae) main_image2_pane_ParamLimits

0x361c,	// (0x0004f6ae) main_image2_pane

0x90fb,	// (0x0005518d) main_camera2_pane_g9_ParamLimits

0x90fb,	// (0x0005518d) main_camera2_pane_g9

0x914f,	// (0x000551e1) main_camera2_pane_t5_ParamLimits

0x914f,	// (0x000551e1) main_camera2_pane_t5

0x9161,	// (0x000551f3) main_camera2_pane_t6_ParamLimits

0x9161,	// (0x000551f3) main_camera2_pane_t6

0x956b,	// (0x000555fd) main_image2_pane_g1_ParamLimits

0x956b,	// (0x000555fd) main_image2_pane_g1

0x8802,	// (0x00054894) smil2_video_pane_ParamLimits

0x8802,	// (0x00054894) smil2_video_pane

0x0460,	// (0x0004c4f2) aid_zoom_text_primary_cp

0x1b28,	// (0x0004dbba) popup_preview_fixed_window

0x255d,	// (0x0004e5ef) im_reading_pane_g1

0x9045,	// (0x000550d7) cams2_bc_adjust_pane_cp_ParamLimits

0x9045,	// (0x000550d7) cams2_bc_adjust_pane_cp

0x9191,	// (0x00055223) cams2_bc_adjust_pane_ParamLimits

0x9191,	// (0x00055223) cams2_bc_adjust_pane

0x44ff,	// (0x00050591) cams2_bc_adjust_pane_g1

0x9577,	// (0x00055609) cams2_slider_pane

0x9580,	// (0x00055612) cams2_slider_pane_g1

0x9589,	// (0x0005561b) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0005b749) cams2_slider_pane_g

0x5f4c,	// (0x00051fde) calc_display_pane_ParamLimits

0x5f6a,	// (0x00051ffc) calc_paper_pane_ParamLimits

0x5f86,	// (0x00052018) grid_calc_pane_ParamLimits

0x7bf6,	// (0x00053c88) popup_clock_digital_window_t1_ParamLimits

0x2fb8,	// (0x0004f04a) main_image_pane_t1

0x5f32,	// (0x00051fc4) aid_size_cell_calc_ParamLimits

0x5f32,	// (0x00051fc4) aid_size_cell_calc

0x8cd2,	// (0x00054d64) popup_blid_sat_info2_window_ParamLimits

0x8cd2,	// (0x00054d64) popup_blid_sat_info2_window

0x43a6,	// (0x00050438) aid_size_cell_blid

0x43ae,	// (0x00050440) bg_popup_window_pane_cp07

0x43d1,	// (0x00050463) grid_popup_blid_pane

0x43db,	// (0x0005046d) heading_pane_cp05_ParamLimits

0x43db,	// (0x0005046d) heading_pane_cp05

0x44a5,	// (0x00050537) cell_popup_blid_pane_ParamLimits

0x44a5,	// (0x00050537) cell_popup_blid_pane

0x44cb,	// (0x0005055d) cell_popup_blid_pane_g1

0x44d3,	// (0x00050565) cell_popup_blid_pane_t1

0x93ae,	// (0x00055440) mup2_indicator_pane_ParamLimits

0x93ae,	// (0x00055440) mup2_indicator_pane

0x2d35,	// (0x0004edc7) mup2_visualizer_osc_pane

0x427b,	// (0x0005030d) mup2_visualizer_spec_pane_ParamLimits

0x427b,	// (0x0005030d) mup2_visualizer_spec_pane

0x95a3,	// (0x00055635) mup2_spec_half_pane

0x95ac,	// (0x0005563e) mup2_spec_half_pane_cp

0x95b6,	// (0x00055648) mup2_spec_bar_pane_ParamLimits

0x95b6,	// (0x00055648) mup2_spec_bar_pane

0x421c,	// (0x000502ae) mup2_spec_bar_pane_g1

0x4226,	// (0x000502b8) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0005b6bc) mup2_spec_bar_pane_g

0x95d5,	// (0x00055667) mup2_osc_middle_pane

0x4238,	// (0x000502ca) mup2_visualizer_osc_pane_g1

0x1b52,	// (0x0004dbe4) popup_number_entry_window_t1_ParamLimits

0x1b65,	// (0x0004dbf7) popup_number_entry_window_t2_ParamLimits

0x1b77,	// (0x0004dc09) popup_number_entry_window_t3_ParamLimits

0x5dad,	// (0x00051e3f) popup_number_entry_window_t5_ParamLimits

0x5dad,	// (0x00051e3f) popup_number_entry_window_t5

0xf0ec,	// (0x0005b17e) popup_number_entry_window_t_ParamLimits

0x1b89,	// (0x0004dc1b) text_title_cp2_ParamLimits

0x84e9,	// (0x0005457b) aid_hotspot_pointer_text2_pane

0x8583,	// (0x00054615) main_viewer_pane_g9_ParamLimits

0x8583,	// (0x00054615) main_viewer_pane_g9

0x278c,	// (0x0004e81e) cale_month_pane_t1_ParamLimits

0x27c9,	// (0x0004e85b) bg_cale_pane_ParamLimits

0x27e1,	// (0x0004e873) list_cale_pane_ParamLimits

0x23ed,	// (0x0004e47f) listscroll_cale_day_pane_t1

0x27f2,	// (0x0004e884) scroll_pane_cp09_ParamLimits

0x81b4,	// (0x00054246) main_mup_eq_pane_t1_ParamLimits

0x81b4,	// (0x00054246) main_mup_eq_pane_t1

0x81ce,	// (0x00054260) main_mup_eq_pane_t2_ParamLimits

0x81ce,	// (0x00054260) main_mup_eq_pane_t2

0x81e6,	// (0x00054278) main_mup_eq_pane_t3_ParamLimits

0x81e6,	// (0x00054278) main_mup_eq_pane_t3

0x81fe,	// (0x00054290) main_mup_eq_pane_t4_ParamLimits

0x81fe,	// (0x00054290) main_mup_eq_pane_t4

0x8216,	// (0x000542a8) main_mup_eq_pane_t5_ParamLimits

0x8216,	// (0x000542a8) main_mup_eq_pane_t5

0x822e,	// (0x000542c0) main_mup_eq_pane_t6_ParamLimits

0x822e,	// (0x000542c0) main_mup_eq_pane_t6

0x8242,	// (0x000542d4) main_mup_eq_pane_t7_ParamLimits

0x8242,	// (0x000542d4) main_mup_eq_pane_t7

0x8256,	// (0x000542e8) main_mup_eq_pane_t8_ParamLimits

0x8256,	// (0x000542e8) main_mup_eq_pane_t8

0x826c,	// (0x000542fe) main_mup_eq_pane_t9_ParamLimits

0x826c,	// (0x000542fe) main_mup_eq_pane_t9

0x8284,	// (0x00054316) main_mup_eq_pane_t10_ParamLimits

0x8284,	// (0x00054316) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0005b50b) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0005b50b) main_mup_eq_pane_t

0x8341,	// (0x000543d3) mup_equalizer_pane_cp5_ParamLimits

0x8357,	// (0x000543e9) mup_equalizer_pane_cp6_ParamLimits

0x836f,	// (0x00054401) mup_equalizer_pane_cp7_ParamLimits

0x0432,	// (0x0004c4c4) main_gallery_pane

0x4241,	// (0x000502d3) smil2_volume_pane

0x425c,	// (0x000502ee) smil_status_volume_pane_g1_ParamLimits

0x4249,	// (0x000502db) smil_status_volume_pane_g2_ParamLimits

0x8ebc,	// (0x00054f4e) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0005b6c1) smil_status_volume_pane_g_ParamLimits

0x43ae,	// (0x00050440) bg_popup_window_pane_cp07_ParamLimits

0x43bc,	// (0x0005044e) blid_firmament_pane

0x95de,	// (0x00055670) aid_size_cell_gallery_ParamLimits

0x95de,	// (0x00055670) aid_size_cell_gallery

0x95ec,	// (0x0005567e) grid_gallery_pane_ParamLimits

0x95ec,	// (0x0005567e) grid_gallery_pane

0x95fc,	// (0x0005568e) cell_gallery_pane_ParamLimits

0x95fc,	// (0x0005568e) cell_gallery_pane

0x44e1,	// (0x00050573) bg_cell_gallery_focus_pane_ParamLimits

0x44e1,	// (0x00050573) bg_cell_gallery_focus_pane

0x44f3,	// (0x00050585) cell_gallery_pane_g1_ParamLimits

0x44f3,	// (0x00050585) cell_gallery_pane_g1

0x964a,	// (0x000556dc) cell_gallery_pane_g2_ParamLimits

0x964a,	// (0x000556dc) cell_gallery_pane_g2

0x9657,	// (0x000556e9) cell_gallery_pane_g3_ParamLimits

0x9657,	// (0x000556e9) cell_gallery_pane_g3

0x4507,	// (0x00050599) cell_gallery_pane_g4_ParamLimits

0x4507,	// (0x00050599) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0005b76f) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0005b76f) cell_gallery_pane_g

0x4513,	// (0x000505a5) bg_cell_gallery_focus_pane_g1

0x451b,	// (0x000505ad) bg_cell_gallery_focus_pane_g2

0x4523,	// (0x000505b5) bg_cell_gallery_focus_pane_g3

0x452b,	// (0x000505bd) bg_cell_gallery_focus_pane_g4

0x4533,	// (0x000505c5) bg_cell_gallery_focus_pane_g5

0x453b,	// (0x000505cd) bg_cell_gallery_focus_pane_g6

0x4543,	// (0x000505d5) bg_cell_gallery_focus_pane_g7

0x454b,	// (0x000505dd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0005b778) bg_cell_gallery_focus_pane_g

0x4553,	// (0x000505e5) aid_firma_cardinal

0x4567,	// (0x000505f9) blid_firmament_pane_t1

0x457e,	// (0x00050610) blid_firmament_pane_t2

0x4595,	// (0x00050627) blid_firmament_pane_t3

0x45ac,	// (0x0005063e) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0005b789) blid_firmament_pane_t

0x45c3,	// (0x00050655) blid_sat_info_pane

0x45d3,	// (0x00050665) blid_sat_info_pane_g1

0x45d3,	// (0x00050665) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0005b792) blid_sat_info_pane_g

0x45dd,	// (0x0005066f) blid_sat_info_pane_t1

0x45eb,	// (0x0005067d) smil2_volume_content_pane

0x45f4,	// (0x00050686) smil2_volume_pane_g1

0x45fc,	// (0x0005068e) smil2_volume_content_pane_g1

0x4605,	// (0x00050697) smil2_volume_content_pane_g2

0x460e,	// (0x000506a0) smil2_volume_content_pane_g3

0x4617,	// (0x000506a9) smil2_volume_content_pane_g4

0x4620,	// (0x000506b2) smil2_volume_content_pane_g5

0x4629,	// (0x000506bb) smil2_volume_content_pane_g6

0x4632,	// (0x000506c4) smil2_volume_content_pane_g7

0x463b,	// (0x000506cd) smil2_volume_content_pane_g8

0x4644,	// (0x000506d6) smil2_volume_content_pane_g9

0x464d,	// (0x000506df) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0005b797) smil2_volume_content_pane_g

0x6542,	// (0x000525d4) cale_week_day_heading_pane_t1_ParamLimits

0x6556,	// (0x000525e8) cale_week_day_heading_pane_t2_ParamLimits

0x656a,	// (0x000525fc) cale_week_day_heading_pane_t3_ParamLimits

0x657e,	// (0x00052610) cale_week_day_heading_pane_t4_ParamLimits

0x6592,	// (0x00052624) cale_week_day_heading_pane_t5_ParamLimits

0x65a6,	// (0x00052638) cale_week_day_heading_pane_t6_ParamLimits

0x65ba,	// (0x0005264c) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0005b283) cale_week_day_heading_pane_t_ParamLimits

0x23ff,	// (0x0004e491) bg_cale_side_pane_ParamLimits

0x65ce,	// (0x00052660) cale_week_time_pane_t1_ParamLimits

0x65e6,	// (0x00052678) cale_week_time_pane_t2_ParamLimits

0x65fe,	// (0x00052690) cale_week_time_pane_t3_ParamLimits

0x6616,	// (0x000526a8) cale_week_time_pane_t4_ParamLimits

0x662e,	// (0x000526c0) cale_week_time_pane_t5_ParamLimits

0x6646,	// (0x000526d8) cale_week_time_pane_t6_ParamLimits

0x6666,	// (0x000526f8) cale_week_time_pane_t7_ParamLimits

0x6686,	// (0x00052718) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0005b292) cale_week_time_pane_t_ParamLimits

0x66a6,	// (0x00052738) cell_cale_week_pane_g2_ParamLimits

0x23ff,	// (0x0004e491) bg_cale_side_pane_cp01_ParamLimits

0x7748,	// (0x000537da) cale_month_week_pane_t1_ParamLimits

0x775f,	// (0x000537f1) cale_month_week_pane_t2_ParamLimits

0x7776,	// (0x00053808) cale_month_week_pane_t3_ParamLimits

0x778d,	// (0x0005381f) cale_month_week_pane_t4_ParamLimits

0x77a4,	// (0x00053836) cale_month_week_pane_t5_ParamLimits

0x77c3,	// (0x00053855) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0005b36b) cale_month_week_pane_t_ParamLimits

0x78b0,	// (0x00053942) cell_cale_month_pane_g1_ParamLimits

0x0432,	// (0x0004c4c4) main_cale_event_viewer_pane

0x0432,	// (0x0004c4c4) listscroll_cale_event_viewer_pane

0x4656,	// (0x000506e8) list_cale_ev_pane

0x465e,	// (0x000506f0) scroll_pane_cp023

0x466a,	// (0x000506fc) field_cale_ev_pane_ParamLimits

0x466a,	// (0x000506fc) field_cale_ev_pane

0x4684,	// (0x00050716) field_cale_ev_content_pane_ParamLimits

0x4684,	// (0x00050716) field_cale_ev_content_pane

0x4690,	// (0x00050722) field_cale_ev_pane_g1_ParamLimits

0x4690,	// (0x00050722) field_cale_ev_pane_g1

0x469c,	// (0x0005072e) field_cale_ev_pane_g2_ParamLimits

0x469c,	// (0x0005072e) field_cale_ev_pane_g2

0x46b4,	// (0x00050746) field_cale_ev_pane_g3_ParamLimits

0x46b4,	// (0x00050746) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0005b7ac) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0005b7ac) field_cale_ev_pane_g

0x46cc,	// (0x0005075e) field_cale_ev_pane_t1_ParamLimits

0x46cc,	// (0x0005075e) field_cale_ev_pane_t1

0x46e3,	// (0x00050775) field_cale_ev_content_pane_t1_ParamLimits

0x46e3,	// (0x00050775) field_cale_ev_content_pane_t1

0x2e9e,	// (0x0004ef30) bg_button_pane_cp01

0x22ad,	// (0x0004e33f) listscroll_cale_week_pane_ParamLimits

0x6317,	// (0x000523a9) popup_toolbar_window_cp01

0x23ed,	// (0x0004e47f) listscroll_cale_week_pane_t1_ParamLimits

0x22ad,	// (0x0004e33f) listscroll_cale_day_pane_ParamLimits

0x6317,	// (0x000523a9) popup_toolbar_window_cp02

0x23ed,	// (0x0004e47f) listscroll_cale_day_pane_t1_ParamLimits

0x22ad,	// (0x0004e33f) main_cale_month_pane_ParamLimits

0x8d96,	// (0x00054e28) popup_toolbar_window_cp03_ParamLimits

0x8d96,	// (0x00054e28) popup_toolbar_window_cp03

0x8714,	// (0x000547a6) main_image_pane_g2_ParamLimits

0x8714,	// (0x000547a6) main_image_pane_g2

0x8720,	// (0x000547b2) main_image_pane_g3_ParamLimits

0x8720,	// (0x000547b2) main_image_pane_g3

0x0002,

0xf50b,	// (0x0005b59d) main_image_pane_g_ParamLimits

0xf50b,	// (0x0005b59d) main_image_pane_g

0x2fb8,	// (0x0004f04a) main_image_pane_t1_ParamLimits

0x872c,	// (0x000547be) main_image_pane_t2_ParamLimits

0x872c,	// (0x000547be) main_image_pane_t2

0x873e,	// (0x000547d0) main_image_pane_t3_ParamLimits

0x873e,	// (0x000547d0) main_image_pane_t3

0x8750,	// (0x000547e2) main_image_pane_t4_ParamLimits

0x8750,	// (0x000547e2) main_image_pane_t4

0x0003,

0xf512,	// (0x0005b5a4) main_image_pane_t_ParamLimits

0xf512,	// (0x0005b5a4) main_image_pane_t

0x8762,	// (0x000547f4) popup_image_details_window_cp01

0x876c,	// (0x000547fe) popup_toobar_trans_pane_cp01_ParamLimits

0x876c,	// (0x000547fe) popup_toobar_trans_pane_cp01

0x8d1b,	// (0x00054dad) popup_image_details_window_ParamLimits

0x8d1b,	// (0x00054dad) popup_image_details_window

0x41a2,	// (0x00050234) popup_image_focus_window

0x9037,	// (0x000550c9) camera2_autofocus_pane_ParamLimits

0x9037,	// (0x000550c9) camera2_autofocus_pane

0x0432,	// (0x0004c4c4) bg_popup_sub_pane_cp06

0x4700,	// (0x00050792) popup_image_focus_window_g1

0x4708,	// (0x0005079a) popup_image_focus_window_g2

0x4710,	// (0x000507a2) popup_image_focus_window_g3

0x4718,	// (0x000507aa) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0005b7b3) popup_image_focus_window_g

0x4720,	// (0x000507b2) popup_image_focus_window_t1

0x472e,	// (0x000507c0) popup_image_focus_window_t2

0x473e,	// (0x000507d0) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0005b7bc) popup_image_focus_window_t

0x474c,	// (0x000507de) camera2_autofocus_pane_g1

0x361c,	// (0x0004f6ae) bg_tb_trans_pane_cp01

0x475a,	// (0x000507ec) popup_image_details_window_g1

0x476d,	// (0x000507ff) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0005b7ce) popup_image_details_window_g

0x4796,	// (0x00050828) popup_image_details_window_t1

0x47a8,	// (0x0005083a) popup_image_details_window_t2

0x47c1,	// (0x00050853) popup_image_details_window_t3

0x47d5,	// (0x00050867) popup_image_details_window_t4

0x47f0,	// (0x00050882) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0005b7d5) popup_image_details_window_t

0x2299,	// (0x0004e32b) bg_calc_paper_pane_ParamLimits

0x607f,	// (0x00052111) grid_highlight_pane_cp013

0x6089,	// (0x0005211b) list_calc_pane_ParamLimits

0x609b,	// (0x0005212d) scroll_pane_cp024

0x22ad,	// (0x0004e33f) bg_calc_display_pane_ParamLimits

0x60a3,	// (0x00052135) calc_display_pane_t1_ParamLimits

0x60b8,	// (0x0005214a) calc_display_pane_t2_ParamLimits

0x60cd,	// (0x0005215f) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0005b205) calc_display_pane_t_ParamLimits

0x61b4,	// (0x00052246) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0005b222) cell_calc_pane_g

0x61bd,	// (0x0005224f) cell_calc_pane_t1

0x230c,	// (0x0004e39e) grid_highlight_pane_cp02_ParamLimits

0x2322,	// (0x0004e3b4) toolbar_button_pane_cp01_ParamLimits

0x2322,	// (0x0004e3b4) toolbar_button_pane_cp01

0x2ffd,	// (0x0004f08f) temp_image_control_pane_ParamLimits

0x2ffd,	// (0x0004f08f) temp_image_control_pane

0x361c,	// (0x0004f6ae) main_mp3_pane

0x480a,	// (0x0005089c) temp_image_control_pane_g1_ParamLimits

0x480a,	// (0x0005089c) temp_image_control_pane_g1

0x4818,	// (0x000508aa) temp_image_control_pane_g2_ParamLimits

0x4818,	// (0x000508aa) temp_image_control_pane_g2

0x482a,	// (0x000508bc) temp_image_control_pane_g3_ParamLimits

0x482a,	// (0x000508bc) temp_image_control_pane_g3

0x9694,	// (0x00055726) temp_image_control_pane_g4_ParamLimits

0x9694,	// (0x00055726) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0005b7e0) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0005b7e0) temp_image_control_pane_g

0x480a,	// (0x0005089c) main_mp3_pane_g1

0x96a5,	// (0x00055737) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0005b7e9) main_mp3_pane_g

0x486d,	// (0x000508ff) main_mp3_pane_t1

0x246e,	// (0x0004e500) main_camera_pane_g8_ParamLimits

0x246e,	// (0x0004e500) main_camera_pane_g8

0x692e,	// (0x000529c0) main_video_pane_g7_ParamLimits

0x692e,	// (0x000529c0) main_video_pane_g7

0x917f,	// (0x00055211) main_camera2_pane_t7_ParamLimits

0x917f,	// (0x00055211) main_camera2_pane_t7

0x25b4,	// (0x0004e646) scroll_pane_cp025_ParamLimits

0x25b4,	// (0x0004e646) scroll_pane_cp025

0x25c8,	// (0x0004e65a) scroll_pane_cp026_ParamLimits

0x25c8,	// (0x0004e65a) scroll_pane_cp026

0x25d7,	// (0x0004e669) wml_content_pane_ParamLimits

0x0432,	// (0x0004c4c4) main_touch_calib_pane

0x9749,	// (0x000557db) main_touch_calib_pane_g1

0x9755,	// (0x000557e7) main_touch_calib_pane_g2

0x9761,	// (0x000557f3) main_touch_calib_pane_g3

0x976d,	// (0x000557ff) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0005b807) main_touch_calib_pane_g

0x9779,	// (0x0005580b) main_touch_calib_pane_t1

0x9790,	// (0x00055822) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0005b810) main_touch_calib_pane_t

0x2c76,	// (0x0004ed08) mup_progress_pane_cp02

0x2c95,	// (0x0004ed27) navi_pane_g1

0x2cf7,	// (0x0004ed89) navi_pane_mp_t3

0x361c,	// (0x0004f6ae) main_mp3_pane_ParamLimits

0x8dd4,	// (0x00054e66) navi_pane_ParamLimits

0x480a,	// (0x0005089c) main_mp3_pane_g1_ParamLimits

0x96a5,	// (0x00055737) main_mp3_pane_g2_ParamLimits

0x96b1,	// (0x00055743) main_mp3_pane_g3_ParamLimits

0x96b1,	// (0x00055743) main_mp3_pane_g3

0x96bd,	// (0x0005574f) main_mp3_pane_g4_ParamLimits

0x96bd,	// (0x0005574f) main_mp3_pane_g4

0x483a,	// (0x000508cc) main_mp3_pane_g5_ParamLimits

0x483a,	// (0x000508cc) main_mp3_pane_g5

0x4848,	// (0x000508da) main_mp3_pane_g6_ParamLimits

0x4848,	// (0x000508da) main_mp3_pane_g6

0x4855,	// (0x000508e7) main_mp3_pane_g7_ParamLimits

0x4855,	// (0x000508e7) main_mp3_pane_g7

0x4861,	// (0x000508f3) main_mp3_pane_g8_ParamLimits

0x4861,	// (0x000508f3) main_mp3_pane_g8

0xf757,	// (0x0005b7e9) main_mp3_pane_g_ParamLimits

0x96c9,	// (0x0005575b) main_mp3_pane_t2

0x96d9,	// (0x0005576b) main_mp3_pane_t3

0x487b,	// (0x0005090d) main_mp3_pane_t4

0x4889,	// (0x0005091b) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0005b7fa) main_mp3_pane_t

0x4897,	// (0x00050929) mup_progress_pane_cp01

0x0460,	// (0x0004c4f2) aid_zoom_text_secondary2

0x4656,	// (0x000506e8) list_cale_ev2_pane

0x465e,	// (0x000506f0) scroll_pane_cp023_ParamLimits

0x97e3,	// (0x00055875) field_cale_ev2_pane_ParamLimits

0x97e3,	// (0x00055875) field_cale_ev2_pane

0x088d,	// (0x0004c91f) field_cale_ev2_pane_g1_ParamLimits

0x088d,	// (0x0004c91f) field_cale_ev2_pane_g1

0x0899,	// (0x0004c92b) field_cale_ev2_pane_g2_ParamLimits

0x0899,	// (0x0004c92b) field_cale_ev2_pane_g2

0x08b1,	// (0x0004c943) field_cale_ev2_pane_g3_ParamLimits

0x08b1,	// (0x0004c943) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0005b81b) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0005b81b) field_cale_ev2_pane_g

0x9817,	// (0x000558a9) field_cale_ev2_pane_t1_ParamLimits

0x9817,	// (0x000558a9) field_cale_ev2_pane_t1

0x982e,	// (0x000558c0) field_cale_ev2_pane_t2_ParamLimits

0x982e,	// (0x000558c0) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0005b824) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0005b824) field_cale_ev2_pane_t

0x85eb,	// (0x0005467d) main_postcard_pane_g5_ParamLimits

0x85eb,	// (0x0005467d) main_postcard_pane_g5

0x85f9,	// (0x0005468b) main_postcard_pane_g6_ParamLimits

0x85f9,	// (0x0005468b) main_postcard_pane_g6

0x676e,	// (0x00052800) camera2_autofocus_pane_cp_ParamLimits

0x676e,	// (0x00052800) camera2_autofocus_pane_cp

0x361c,	// (0x0004f6ae) main_mup3_pane

0x9863,	// (0x000558f5) main_mup3_pane_g1_ParamLimits

0x9863,	// (0x000558f5) main_mup3_pane_g1

0x9884,	// (0x00055916) main_mup3_pane_g2_ParamLimits

0x9884,	// (0x00055916) main_mup3_pane_g2

0x98ff,	// (0x00055991) main_mup3_pane_g3_ParamLimits

0x98ff,	// (0x00055991) main_mup3_pane_g3

0x993e,	// (0x000559d0) main_mup3_pane_g4_ParamLimits

0x993e,	// (0x000559d0) main_mup3_pane_g4

0x997d,	// (0x00055a0f) main_mup3_pane_g5_ParamLimits

0x997d,	// (0x00055a0f) main_mup3_pane_g5

0x99be,	// (0x00055a50) main_mup3_pane_g6_ParamLimits

0x99be,	// (0x00055a50) main_mup3_pane_g6

0x489f,	// (0x00050931) main_mup3_pane_g7_ParamLimits

0x489f,	// (0x00050931) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0005b834) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0005b834) main_mup3_pane_g

0x9a30,	// (0x00055ac2) main_mup3_pane_t1_ParamLimits

0x9a30,	// (0x00055ac2) main_mup3_pane_t1

0x9a9f,	// (0x00055b31) main_mup3_pane_t2_ParamLimits

0x9a9f,	// (0x00055b31) main_mup3_pane_t2

0x9b68,	// (0x00055bfa) main_mup3_pane_t4_ParamLimits

0x9b68,	// (0x00055bfa) main_mup3_pane_t4

0x9bba,	// (0x00055c4c) main_mup3_pane_t5_ParamLimits

0x9bba,	// (0x00055c4c) main_mup3_pane_t5

0x9c62,	// (0x00055cf4) main_mup3_pane_t6_ParamLimits

0x9c62,	// (0x00055cf4) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0005b845) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0005b845) main_mup3_pane_t

0x9d0a,	// (0x00055d9c) mup3_progress_pane_ParamLimits

0x9d0a,	// (0x00055d9c) mup3_progress_pane

0x9d6f,	// (0x00055e01) popup_mup3_control_window_ParamLimits

0x9d6f,	// (0x00055e01) popup_mup3_control_window

0x48ad,	// (0x0005093f) popup_mup3_text_window

0x9d88,	// (0x00055e1a) mup3_progress_pane_t1

0x9d9f,	// (0x00055e31) mup3_progress_pane_t2

0x48b5,	// (0x00050947) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0005b852) mup3_progress_pane_t

0x48cc,	// (0x0005095e) mup_progress_pane_cp03

0x0432,	// (0x0004c4c4) bg_tb_trans_pane_cp04

0x9db6,	// (0x00055e48) mup3_volume_pane

0x9dbe,	// (0x00055e50) popup_mup3_control_window_g1

0x9dc7,	// (0x00055e59) mup3_volume_pane_g1

0x9dd0,	// (0x00055e62) mup3_volume_pane_g2

0x9dd9,	// (0x00055e6b) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0005b859) mup3_volume_pane_g

0x0432,	// (0x0004c4c4) bg_tb_trans_pane_cp03

0x48dc,	// (0x0005096e) popup_mup3_text_window_g1

0x48e4,	// (0x00050976) popup_mup3_text_window_t1

0x22f5,	// (0x0004e387) list_calc_item_pane_g1_ParamLimits

0x431c,	// (0x000503ae) mup_volume_pane_cp_g1

0x97a7,	// (0x00055839) main_touch_calib_pane_t3

0x97bb,	// (0x0005584d) main_touch_calib_pane_t4

0x97cf,	// (0x00055861) main_touch_calib_pane_t5

0x043c,	// (0x0004c4ce) aid_cell_size_toolbar2

0x0444,	// (0x0004c4d6) aid_popup3_width_pane

0x0450,	// (0x0004c4e2) aid_zoom_text_msg_primary

0x6758,	// (0x000527ea) vorec_t7

0x22b9,	// (0x0004e34b) bg_calc_paper_pane_g1_ParamLimits

0x22d1,	// (0x0004e363) bg_calc_paper_pane_g2_ParamLimits

0x22c5,	// (0x0004e357) bg_calc_paper_pane_g3_ParamLimits

0x22e9,	// (0x0004e37b) bg_calc_paper_pane_g4_ParamLimits

0x22dd,	// (0x0004e36f) bg_calc_paper_pane_g5_ParamLimits

0x610c,	// (0x0005219e) bg_calc_paper_pane_g6_ParamLimits

0x611d,	// (0x000521af) bg_calc_paper_pane_g7_ParamLimits

0x612e,	// (0x000521c0) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0005b20c) bg_calc_paper_pane_g_ParamLimits

0x613f,	// (0x000521d1) calc_bg_paper_pane_g9_ParamLimits

0x6857,	// (0x000528e9) image_qvga_pane_ParamLimits

0x6857,	// (0x000528e9) image_qvga_pane

0x219e,	// (0x0004e230) bg_popup_sub_pane_cp04_ParamLimits

0x2f34,	// (0x0004efc6) popup_mup_playback_window_g1_ParamLimits

0x2f40,	// (0x0004efd2) popup_mup_playback_window_t1_ParamLimits

0x2f55,	// (0x0004efe7) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0005b598) popup_mup_playback_window_t_ParamLimits

0x92ae,	// (0x00055340) main_mup2_pane_g3_ParamLimits

0x92ae,	// (0x00055340) main_mup2_pane_g3

0x6b69,	// (0x00052bfb) popup_toolbar_window_cp04

0x334a,	// (0x0004f3dc) popup_call2_audio_second_window_g3_ParamLimits

0x334a,	// (0x0004f3dc) popup_call2_audio_second_window_g3

0x3791,	// (0x0004f823) popup_call2_audio_first_window_g4_ParamLimits

0x3791,	// (0x0004f823) popup_call2_audio_first_window_g4

0x3e19,	// (0x0004feab) popup_call2_audio_in_window_g4_ParamLimits

0x3e19,	// (0x0004feab) popup_call2_audio_in_window_g4

0x8707,	// (0x00054799) aid_area_sk_bg_cut_ParamLimits

0x8707,	// (0x00054799) aid_area_sk_bg_cut

0x2f6a,	// (0x0004effc) aid_area_sk_bg_cut_2_ParamLimits

0x2f6a,	// (0x0004effc) aid_area_sk_bg_cut_2

0x963a,	// (0x000556cc) aid_placing_details_win

0x9642,	// (0x000556d4) aid_placing_details_win_2

0x474c,	// (0x000507de) camera2_autofocus_pane_g1_ParamLimits

0x5d10,	// (0x00051da2) popup_fixed_preview_cale_window_ParamLimits

0x5d10,	// (0x00051da2) popup_fixed_preview_cale_window

0x2d58,	// (0x0004edea) navi_slider_pane_g3

0x2d4f,	// (0x0004ede1) navi_slider_pane_g4

0x2d46,	// (0x0004edd8) navi_slider_pane_g5

0x2d58,	// (0x0004edea) navi_slider_pane_g6

0x7f48,	// (0x00053fda) navi_slider_pane_g7

0x2e6b,	// (0x0004eefd) mup_scale_pane_g3

0x2e74,	// (0x0004ef06) mup_scale_pane_g4

0x2e7d,	// (0x0004ef0f) mup_scale_pane_g5

0x8387,	// (0x00054419) mup_scale_pane_g6

0x8390,	// (0x00054422) mup_scale_pane_g7

0x2d58,	// (0x0004edea) cams2_slider_pane_g3

0x439e,	// (0x00050430) cams2_slider_pane_g4

0x9592,	// (0x00055624) cams2_slider_pane_g5

0x2d58,	// (0x0004edea) cams2_slider_pane_g6

0x959a,	// (0x0005562c) cams2_slider_pane_g7

0x45d3,	// (0x00050665) camera2_autofocus_pane_cp_g1

0x48f2,	// (0x00050984) bg_popup_preview_window_pane_cp02_ParamLimits

0x48f2,	// (0x00050984) bg_popup_preview_window_pane_cp02

0x48fe,	// (0x00050990) list_fp_cale_pane_ParamLimits

0x48fe,	// (0x00050990) list_fp_cale_pane

0x490a,	// (0x0005099c) popup_fixed_preview_cale_window_t1_ParamLimits

0x490a,	// (0x0005099c) popup_fixed_preview_cale_window_t1

0x9de2,	// (0x00055e74) popup_fixed_preview_cale_window_t2_ParamLimits

0x9de2,	// (0x00055e74) popup_fixed_preview_cale_window_t2

0x9df7,	// (0x00055e89) popup_fixed_preview_cale_window_t3_ParamLimits

0x9df7,	// (0x00055e89) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0005b860) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0005b860) popup_fixed_preview_cale_window_t

0x9e0c,	// (0x00055e9e) list_single_fp_cale_pane_ParamLimits

0x9e0c,	// (0x00055e9e) list_single_fp_cale_pane

0x4928,	// (0x000509ba) list_single_fp_cale_pane_g1_ParamLimits

0x4928,	// (0x000509ba) list_single_fp_cale_pane_g1

0x4934,	// (0x000509c6) list_single_fp_cale_pane_g2_ParamLimits

0x4934,	// (0x000509c6) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0005b867) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0005b867) list_single_fp_cale_pane_g

0x494d,	// (0x000509df) list_single_fp_cale_pane_t1_ParamLimits

0x494d,	// (0x000509df) list_single_fp_cale_pane_t1

0x495f,	// (0x000509f1) list_single_fp_cale_pane_t2_ParamLimits

0x495f,	// (0x000509f1) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0005b86e) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0005b86e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0432,	// (0x0004c4c4) main_dialer_pane

0x9e21,	// (0x00055eb3) aid_cell_size_keypad

0x9e2b,	// (0x00055ebd) dialer_ne_pane

0x9e35,	// (0x00055ec7) grid_dialer_command_1_pane

0x9e3d,	// (0x00055ecf) grid_dialer_command_2_pane

0x9e45,	// (0x00055ed7) grid_dialer_keypad_pane

0x9e59,	// (0x00055eeb) bg_popup_call_pane_cp06_ParamLimits

0x9e59,	// (0x00055eeb) bg_popup_call_pane_cp06

0x9e65,	// (0x00055ef7) dialer_ne_clear_pane_ParamLimits

0x9e65,	// (0x00055ef7) dialer_ne_clear_pane

0x4992,	// (0x00050a24) dialer_ne_pane_g1

0x499a,	// (0x00050a2c) dialer_ne_pane_t1_ParamLimits

0x499a,	// (0x00050a2c) dialer_ne_pane_t1

0x9e71,	// (0x00055f03) dialer_ne_pane_t2_ParamLimits

0x9e71,	// (0x00055f03) dialer_ne_pane_t2

0x9e8e,	// (0x00055f20) dialer_ne_pane_t3_ParamLimits

0x9e8e,	// (0x00055f20) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0005b873) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0005b873) dialer_ne_pane_t

0x9eb2,	// (0x00055f44) dialer_ne_pane_t3_copy1_ParamLimits

0x9eb2,	// (0x00055f44) dialer_ne_pane_t3_copy1

0x9ed6,	// (0x00055f68) cell_dialer_keypad_pane_ParamLimits

0x9ed6,	// (0x00055f68) cell_dialer_keypad_pane

0x9eed,	// (0x00055f7f) cell_dialer_command_1_pane_ParamLimits

0x9eed,	// (0x00055f7f) cell_dialer_command_1_pane

0x9f03,	// (0x00055f95) cell_dialer_command_2_pane_ParamLimits

0x9f03,	// (0x00055f95) cell_dialer_command_2_pane

0x49ac,	// (0x00050a3e) bg_button_pane_cp02_ParamLimits

0x49ac,	// (0x00050a3e) bg_button_pane_cp02

0x9f12,	// (0x00055fa4) cell_dialer_keypad_pane_g1_ParamLimits

0x9f12,	// (0x00055fa4) cell_dialer_keypad_pane_g1

0x49ac,	// (0x00050a3e) bg_button_pane_cp03_ParamLimits

0x49ac,	// (0x00050a3e) bg_button_pane_cp03

0x9f27,	// (0x00055fb9) cell_dialer_command_1_pane_g1_ParamLimits

0x9f27,	// (0x00055fb9) cell_dialer_command_1_pane_g1

0x49b8,	// (0x00050a4a) bg_button_pane_cp04

0x9f3a,	// (0x00055fcc) cell_dialer_command_2_pane_g1

0x2d35,	// (0x0004edc7) bg_button_pane_cp06

0x49c0,	// (0x00050a52) dialer_ne_clear_pane_g1

0x7e8b,	// (0x00053f1d) navi_pane_g2

0x7eb9,	// (0x00053f4b) navi_pane_g3

0x0002,

0xf409,	// (0x0005b49b) navi_pane_g

0x7ee4,	// (0x00053f76) navi_pane_mv_g2

0x7f0b,	// (0x00053f9d) navi_pane_mv_g5

0x7f13,	// (0x00053fa5) navi_pane_mv_t1

0x22ad,	// (0x0004e33f) main_clock2_pane

0x9f68,	// (0x00055ffa) main_clock2_list_pane_ParamLimits

0x9f68,	// (0x00055ffa) main_clock2_list_pane

0x9f90,	// (0x00056022) main_clock2_pane_t1_ParamLimits

0x9f90,	// (0x00056022) main_clock2_pane_t1

0x9fc0,	// (0x00056052) main_clock2_pane_t2_ParamLimits

0x9fc0,	// (0x00056052) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0005b87a) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0005b87a) main_clock2_pane_t

0xa027,	// (0x000560b9) popup_clock_analogue_window_cp03_ParamLimits

0xa027,	// (0x000560b9) popup_clock_analogue_window_cp03

0xa047,	// (0x000560d9) popup_clock_digital_window_cp02_ParamLimits

0xa047,	// (0x000560d9) popup_clock_digital_window_cp02

0xa0bc,	// (0x0005614e) main_clock2_list_single_pane_ParamLimits

0xa0bc,	// (0x0005614e) main_clock2_list_single_pane

0x2d35,	// (0x0004edc7) list_highlight_pane_cp05

0x49c8,	// (0x00050a5a) main_clock2_list_single_pane_t1

0x6b69,	// (0x00052bfb) popup_toolbar_window_cp04_ParamLimits

0x9664,	// (0x000556f6) camera2_autofocus_pane_g2_ParamLimits

0x9664,	// (0x000556f6) camera2_autofocus_pane_g2

0x9670,	// (0x00055702) camera2_autofocus_pane_g3_ParamLimits

0x9670,	// (0x00055702) camera2_autofocus_pane_g3

0x967c,	// (0x0005570e) camera2_autofocus_pane_g4_ParamLimits

0x967c,	// (0x0005570e) camera2_autofocus_pane_g4

0x9688,	// (0x0005571a) camera2_autofocus_pane_g5_ParamLimits

0x9688,	// (0x0005571a) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0005b7c3) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0005b7c3) camera2_autofocus_pane_g

0x9843,	// (0x000558d5) camera2_autofocus_pane_cp_g2

0x984b,	// (0x000558dd) camera2_autofocus_pane_cp_g3

0x9853,	// (0x000558e5) camera2_autofocus_pane_cp_g4

0x985b,	// (0x000558ed) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0005b829) camera2_autofocus_pane_cp_g

0x9e51,	// (0x00055ee3) popup_dialer_spcha_window

0x0432,	// (0x0004c4c4) bg_popup_sub_pane_cp07

0x49d6,	// (0x00050a68) list_spcha_pane

0x49de,	// (0x00050a70) list_single_spcha_pane_ParamLimits

0x49de,	// (0x00050a70) list_single_spcha_pane

0x0432,	// (0x0004c4c4) list_highlight_pane_cp06

0x49ef,	// (0x00050a81) list_single_spcha_pane_t1

0x3bc3,	// (0x0004fc55) popup_call2_audio_out_window_g4_ParamLimits

0x3bc3,	// (0x0004fc55) popup_call2_audio_out_window_g4

0x0432,	// (0x0004c4c4) main_imed2_pane

0x41aa,	// (0x0005023c) popup_imed_adjust2_window

0x8d29,	// (0x00054dbb) popup_imed_trans_window_ParamLimits

0x8d29,	// (0x00054dbb) popup_imed_trans_window

0x4407,	// (0x00050499) popup_blid_sat_info2_window_t1

0x4415,	// (0x000504a7) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0005b758) popup_blid_sat_info2_window_t

0xa166,	// (0x000561f8) aid_size_cell_colour_35

0xa180,	// (0x00056212) aid_size_cell_colour_112

0xa197,	// (0x00056229) aid_size_cell_effect

0x361c,	// (0x0004f6ae) bg_tb_trans_pane_cp02

0x3641,	// (0x0004f6d3) heading_imed_pane

0xa1b1,	// (0x00056243) listscroll_imed_pane

0x49fd,	// (0x00050a8f) heading_imed_pane_g1

0x4a05,	// (0x00050a97) heading_imed_pane_t1

0x4a13,	// (0x00050aa5) grid_imed_colour_35_pane_ParamLimits

0x4a13,	// (0x00050aa5) grid_imed_colour_35_pane

0xa1bd,	// (0x0005624f) grid_imed_effect_pane

0x4a2e,	// (0x00050ac0) list_imed_aspect_pane

0xa1cd,	// (0x0005625f) scroll_pane_cp027_ParamLimits

0xa1cd,	// (0x0005625f) scroll_pane_cp027

0xa1d9,	// (0x0005626b) cell_imed_effect_pane_ParamLimits

0xa1d9,	// (0x0005626b) cell_imed_effect_pane

0x4a36,	// (0x00050ac8) cell_imed_colour_pane_ParamLimits

0x4a36,	// (0x00050ac8) cell_imed_colour_pane

0x4a78,	// (0x00050b0a) cell_imed_colour_pane_g1_ParamLimits

0x4a78,	// (0x00050b0a) cell_imed_colour_pane_g1

0x4a89,	// (0x00050b1b) hgihlgiht_grid_pane_cp016_ParamLimits

0x4a89,	// (0x00050b1b) hgihlgiht_grid_pane_cp016

0xa1f1,	// (0x00056283) cell_imed_effect_pane_g1

0xa1f9,	// (0x0005628b) grid_highlight_pane_cp017

0x362a,	// (0x0004f6bc) list_imed_single_pane_ParamLimits

0x362a,	// (0x0004f6bc) list_imed_single_pane

0x0432,	// (0x0004c4c4) list_highlight_pane_cp07

0x4a9a,	// (0x00050b2c) list_imed_aspect_pane_comp1_t1

0x4182,	// (0x00050214) bg_tb_trans_pane_cp05

0x4abc,	// (0x00050b4e) popup_imed_adjust2_window_g1

0x4ae3,	// (0x00050b75) popup_imed_adjust2_window_t1

0x4afb,	// (0x00050b8d) slider_imed_adjust_pane

0x4b0f,	// (0x00050ba1) slider_imed_adjust_pane_g1

0x4b1f,	// (0x00050bb1) slider_imed_adjust_pane_g2

0x4b2f,	// (0x00050bc1) slider_imed_adjust_pane_g3

0x4b40,	// (0x00050bd2) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0005b897) slider_imed_adjust_pane_g

0xa202,	// (0x00056294) aid_size_cell_clipart2

0xa20e,	// (0x000562a0) grid_imed_clipart_pane

0x4b51,	// (0x00050be3) scroll_pane_cp031

0xa218,	// (0x000562aa) cell_imed_clipart_pane_ParamLimits

0xa218,	// (0x000562aa) cell_imed_clipart_pane

0xa23f,	// (0x000562d1) cell_imed_clipart_pane_g1

0x0432,	// (0x0004c4c4) grid_highlight_pane_cp014

0x9f74,	// (0x00056006) main_clock2_pane_g1_ParamLimits

0x9f74,	// (0x00056006) main_clock2_pane_g1

0xa063,	// (0x000560f5) aid_call2_pane_cp10

0xa075,	// (0x00056107) aid_call_pane_cp10

0x2c6a,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g1

0x2c6a,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g2

0xa087,	// (0x00056119) popup_clock_analogue_window_cp10_g3

0xa087,	// (0x00056119) popup_clock_analogue_window_cp10_g4

0x2c6a,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0005b885) popup_clock_analogue_window_cp10_g

0xa09d,	// (0x0005612f) popup_clock_analogue_window_cp10_t1

0xa0ce,	// (0x00056160) clock_digital_number_pane_cp10_ParamLimits

0xa0ce,	// (0x00056160) clock_digital_number_pane_cp10

0xa0e6,	// (0x00056178) clock_digital_number_pane_cp11_ParamLimits

0xa0e6,	// (0x00056178) clock_digital_number_pane_cp11

0xa0fe,	// (0x00056190) clock_digital_number_pane_cp12_ParamLimits

0xa0fe,	// (0x00056190) clock_digital_number_pane_cp12

0xa116,	// (0x000561a8) clock_digital_number_pane_cp13_ParamLimits

0xa116,	// (0x000561a8) clock_digital_number_pane_cp13

0xa12e,	// (0x000561c0) clock_digital_separator_pane_cp10_ParamLimits

0xa12e,	// (0x000561c0) clock_digital_separator_pane_cp10

0xa146,	// (0x000561d8) popup_clock_digital_window_cp02_t1_ParamLimits

0xa146,	// (0x000561d8) popup_clock_digital_window_cp02_t1

0x2196,	// (0x0004e228) clock_digital_number_pane_cp10_g1

0x2196,	// (0x0004e228) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0005b8a0) clock_digital_number_pane_cp10_g

0x2196,	// (0x0004e228) clock_digital_separator_pane_cp10_g1

0x2196,	// (0x0004e228) clock_digital_separator_pane_g2_cp10

0x2d05,	// (0x0004ed97) navi_pane_vded_g4

0x2d0e,	// (0x0004eda0) navi_pane_vded_g5

0x2d17,	// (0x0004eda9) navi_pane_vded_t1

0x0432,	// (0x0004c4c4) main_vded_pane

0xa248,	// (0x000562da) main_vded_pane_g1

0xa254,	// (0x000562e6) main_vded_pane_g2

0xa25e,	// (0x000562f0) main_vded_pane_g3

0x0002,

0xf813,	// (0x0005b8a5) main_vded_pane_g

0xa268,	// (0x000562fa) main_vded_pane_t1

0xa276,	// (0x00056308) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0005b8ac) main_vded_pane_t

0xa284,	// (0x00056316) vded_slider_pane

0xa28e,	// (0x00056320) vded_video_pane

0x4b59,	// (0x00050beb) vded_video_pane_g1

0xa298,	// (0x0005632a) vded_video_pane_g2

0x45d3,	// (0x00050665) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0005b8b1) vded_video_pane_g

0x4b63,	// (0x00050bf5) vded_slider_pane_g1

0x431c,	// (0x000503ae) vded_slider_pane_g2

0x4b6c,	// (0x00050bfe) vded_slider_pane_g3

0x4b75,	// (0x00050c07) vded_slider_pane_g4

0x4b7e,	// (0x00050c10) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0005b8b8) vded_slider_pane_g

0x9d61,	// (0x00055df3) mup3_rocker_pane_ParamLimits

0x9d61,	// (0x00055df3) mup3_rocker_pane

0xa2a1,	// (0x00056333) mup3_control_keys_pane_g1

0xa2a9,	// (0x0005633b) mup3_control_keys_pane_g2

0xa2b1,	// (0x00056343) mup3_control_keys_pane_g3

0xa2b9,	// (0x0005634b) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0005b8c3) mup3_control_keys_pane_g

0x5d2e,	// (0x00051dc0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5d2e,	// (0x00051dc0) popup_toolbar2_fixed_window_cp01

0x9d7b,	// (0x00055e0d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9d7b,	// (0x00055e0d) popup_toolbar2_fixed_window_cp02

0x34bc,	// (0x0004f54e) popup_call2_audio_second_window_t4_ParamLimits

0x34bc,	// (0x0004f54e) popup_call2_audio_second_window_t4

0x3a30,	// (0x0004fac2) popup_call2_audio_first_window_t6_ParamLimits

0x3a30,	// (0x0004fac2) popup_call2_audio_first_window_t6

0x3cc6,	// (0x0004fd58) popup_call2_audio_out_window_t6_ParamLimits

0x3cc6,	// (0x0004fd58) popup_call2_audio_out_window_t6

0x0432,	// (0x0004c4c4) main_vitu_pane

0xa2c9,	// (0x0005635b) aid_size_cell_itu_ParamLimits

0xa2c9,	// (0x0005635b) aid_size_cell_itu

0x0bcd,	// (0x0004cc5f) bg_popup_window_pane_cp08_ParamLimits

0x0bcd,	// (0x0004cc5f) bg_popup_window_pane_cp08

0xa2d7,	// (0x00056369) field_vitu_entry_pane_ParamLimits

0xa2d7,	// (0x00056369) field_vitu_entry_pane

0xa2e6,	// (0x00056378) grid_vitu_function_pane_ParamLimits

0xa2e6,	// (0x00056378) grid_vitu_function_pane

0xa2f6,	// (0x00056388) grid_vitu_itu_pane_ParamLimits

0xa2f6,	// (0x00056388) grid_vitu_itu_pane

0xa306,	// (0x00056398) cell_vitu_itu_pane_ParamLimits

0xa306,	// (0x00056398) cell_vitu_itu_pane

0xa31b,	// (0x000563ad) cell_vitu_function_pane_ParamLimits

0xa31b,	// (0x000563ad) cell_vitu_function_pane

0x361c,	// (0x0004f6ae) bg_popup_sub_pane_cp08_ParamLimits

0x361c,	// (0x0004f6ae) bg_popup_sub_pane_cp08

0xa32f,	// (0x000563c1) field_vitu_entry_pane_t1_ParamLimits

0xa32f,	// (0x000563c1) field_vitu_entry_pane_t1

0x4b9f,	// (0x00050c31) field_vitu_entry_pane_t2_ParamLimits

0x4b9f,	// (0x00050c31) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0005b8d1) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0005b8d1) field_vitu_entry_pane_t

0x4bbc,	// (0x00050c4e) bg_button_pane_cp05_ParamLimits

0x4bbc,	// (0x00050c4e) bg_button_pane_cp05

0xa34c,	// (0x000563de) cell_vitu_itu_pane_g1

0xa364,	// (0x000563f6) cell_vitu_itu_pane_t1_ParamLimits

0xa364,	// (0x000563f6) cell_vitu_itu_pane_t1

0xa376,	// (0x00056408) cell_vitu_itu_pane_t2_ParamLimits

0xa376,	// (0x00056408) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0005b8d6) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0005b8d6) cell_vitu_itu_pane_t

0x4bca,	// (0x00050c5c) bg_button_pane_cp07

0xa3ab,	// (0x0005643d) cell_vitu_function_pane_g1

0x5faa,	// (0x0005203c) main_calc_pane_g1

0x5b37,	// (0x00051bc9) aid_visual_content_pane

0x0432,	// (0x0004c4c4) main_vradio_pane

0xa3b4,	// (0x00056446) main_vradio_pane_g1_ParamLimits

0xa3b4,	// (0x00056446) main_vradio_pane_g1

0x4bd4,	// (0x00050c66) main_vradio_pane_g2_ParamLimits

0x4bd4,	// (0x00050c66) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0005b8dd) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0005b8dd) main_vradio_pane_g

0xa3c4,	// (0x00056456) main_vradio_pane_t1_ParamLimits

0xa3c4,	// (0x00056456) main_vradio_pane_t1

0xa3d6,	// (0x00056468) main_vradio_pane_t2_ParamLimits

0xa3d6,	// (0x00056468) main_vradio_pane_t2

0x4be1,	// (0x00050c73) main_vradio_pane_t3_ParamLimits

0x4be1,	// (0x00050c73) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0005b8e2) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0005b8e2) main_vradio_pane_t

0xa3e8,	// (0x0005647a) vradio_rocker_control_pane_ParamLimits

0xa3e8,	// (0x0005647a) vradio_rocker_control_pane

0xa3f4,	// (0x00056486) vradio_station_info_pane_ParamLimits

0xa3f4,	// (0x00056486) vradio_station_info_pane

0x4bf5,	// (0x00050c87) vradio_frequency_info_pane_ParamLimits

0x4bf5,	// (0x00050c87) vradio_frequency_info_pane

0x45d3,	// (0x00050665) vradio_station_info_pane_g1

0x4c04,	// (0x00050c96) vradio_station_info_pane_t1_ParamLimits

0x4c04,	// (0x00050c96) vradio_station_info_pane_t1

0x4c26,	// (0x00050cb8) vradio_station_info_pane_t2_ParamLimits

0x4c26,	// (0x00050cb8) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0005b8e9) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0005b8e9) vradio_station_info_pane_t

0x4c38,	// (0x00050cca) vradio_tuning_pane

0x4c40,	// (0x00050cd2) vradio_rocker_control_pane_g1

0x4c48,	// (0x00050cda) vradio_rocker_control_pane_g2

0x4c50,	// (0x00050ce2) vradio_rocker_control_pane_g3

0x4c58,	// (0x00050cea) vradio_rocker_control_pane_g4

0x4c60,	// (0x00050cf2) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0005b8ee) vradio_rocker_control_pane_g

0xa403,	// (0x00056495) vradio_frequency_info_pane_g1

0x4c68,	// (0x00050cfa) vradio_frequency_info_pane_t1_ParamLimits

0x4c68,	// (0x00050cfa) vradio_frequency_info_pane_t1

0xa40d,	// (0x0005649f) vradio_tuning_pane_g1

0xa416,	// (0x000564a8) vradio_tuning_pane_t1

0x0468,	// (0x0004c4fa) area_side_right_pane_ParamLimits

0x0468,	// (0x0004c4fa) area_side_right_pane

0x4149,	// (0x000501db) status_small_pane_g1

0x4151,	// (0x000501e3) status_small_pane_g2

0x415a,	// (0x000501ec) status_small_pane_g3

0x4163,	// (0x000501f5) status_small_pane_g4

0x0003,

0xf61c,	// (0x0005b6ae) status_small_pane_g

0x416c,	// (0x000501fe) status_small_pane_t1

0x0432,	// (0x0004c4c4) main_video3_pane

0x4c7c,	// (0x00050d0e) cams_zoom_vslider_pane

0x4c84,	// (0x00050d16) image3_wide_pane_ParamLimits

0x4c84,	// (0x00050d16) image3_wide_pane

0x4c9e,	// (0x00050d30) image3_wide_small_pane

0x4caa,	// (0x00050d3c) main_video3_pane_g1_ParamLimits

0x4caa,	// (0x00050d3c) main_video3_pane_g1

0x4cc6,	// (0x00050d58) main_video3_pane_g2_ParamLimits

0x4cc6,	// (0x00050d58) main_video3_pane_g2

0x0001,

0xf867,	// (0x0005b8f9) main_video3_pane_g_ParamLimits

0xf867,	// (0x0005b8f9) main_video3_pane_g

0x4ce2,	// (0x00050d74) main_video3_pane_t1_ParamLimits

0x4ce2,	// (0x00050d74) main_video3_pane_t1

0x4d0d,	// (0x00050d9f) main_video3_pane_t2_ParamLimits

0x4d0d,	// (0x00050d9f) main_video3_pane_t2

0x4d38,	// (0x00050dca) main_video3_pane_t3_ParamLimits

0x4d38,	// (0x00050dca) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0005b8fe) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0005b8fe) main_video3_pane_t

0x4d65,	// (0x00050df7) cams_zoom_vslider_pane_g1

0x4d6e,	// (0x00050e00) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0005b905) cams_zoom_vslider_pane_g

0x4d76,	// (0x00050e08) small_slider_vertical_pane

0x45d3,	// (0x00050665) small_slider_vertical_pane_g1

0x45d3,	// (0x00050665) small_slider_vertical_pane_g2

0x4d7e,	// (0x00050e10) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0005b90a) small_slider_vertical_pane_g

0x0432,	// (0x0004c4c4) main_hwr_training_pane

0x4d87,	// (0x00050e19) hwr_training_instruct_pane_ParamLimits

0x4d87,	// (0x00050e19) hwr_training_instruct_pane

0xa425,	// (0x000564b7) hwr_training_navi_pane_ParamLimits

0xa425,	// (0x000564b7) hwr_training_navi_pane

0xa43f,	// (0x000564d1) hwr_training_write_pane_ParamLimits

0xa43f,	// (0x000564d1) hwr_training_write_pane

0x0432,	// (0x0004c4c4) bg_frame_shadow_pane

0x4dbe,	// (0x00050e50) hwr_training_write_pane_g1

0x4dc6,	// (0x00050e58) hwr_training_write_pane_g2

0x4dce,	// (0x00050e60) hwr_training_write_pane_g3

0x4dd6,	// (0x00050e68) hwr_training_write_pane_g4

0x4dde,	// (0x00050e70) hwr_training_write_pane_g5

0x4de6,	// (0x00050e78) hwr_training_write_pane_g6

0x4dee,	// (0x00050e80) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0005b911) hwr_training_write_pane_g

0xa477,	// (0x00056509) hwr_training_navi_pane_g1_ParamLimits

0xa477,	// (0x00056509) hwr_training_navi_pane_g1

0xa489,	// (0x0005651b) hwr_training_navi_pane_g2_ParamLimits

0xa489,	// (0x0005651b) hwr_training_navi_pane_g2

0xa49b,	// (0x0005652d) hwr_training_navi_pane_g3_ParamLimits

0xa49b,	// (0x0005652d) hwr_training_navi_pane_g3

0xa4ab,	// (0x0005653d) hwr_training_navi_pane_g4_ParamLimits

0xa4ab,	// (0x0005653d) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0005b920) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0005b920) hwr_training_navi_pane_g

0xa4c5,	// (0x00056557) hwr_training_navi_pane_t1

0xa4d3,	// (0x00056565) list_single_hwr_training_instruct_pane_ParamLimits

0xa4d3,	// (0x00056565) list_single_hwr_training_instruct_pane

0x4df6,	// (0x00050e88) list_single_hwr_training_instruct_pane_t1

0x4513,	// (0x000505a5) bg_frame_shadow_pane_g1

0x4e05,	// (0x00050e97) bg_frame_shadow_pane_g2

0x4e0d,	// (0x00050e9f) bg_frame_shadow_pane_g3

0x4e15,	// (0x00050ea7) bg_frame_shadow_pane_g4

0x4e1d,	// (0x00050eaf) bg_frame_shadow_pane_g5

0x4e25,	// (0x00050eb7) bg_frame_shadow_pane_g6

0x4e2d,	// (0x00050ebf) bg_frame_shadow_pane_g7

0x2378,	// (0x0004e40a) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0005b92b) bg_frame_shadow_pane_g

0x0432,	// (0x0004c4c4) main_video_tele_dialer_pane

0xa509,	// (0x0005659b) aid_size_cell_video_keypad_ParamLimits

0xa509,	// (0x0005659b) aid_size_cell_video_keypad

0xa519,	// (0x000565ab) grid_video_dialer_keypad_pane_ParamLimits

0xa519,	// (0x000565ab) grid_video_dialer_keypad_pane

0xa54b,	// (0x000565dd) video_down_pane_cp_ParamLimits

0xa54b,	// (0x000565dd) video_down_pane_cp

0xa573,	// (0x00056605) cell_video_dialer_keypad_pane_ParamLimits

0xa573,	// (0x00056605) cell_video_dialer_keypad_pane

0x4e35,	// (0x00050ec7) bg_button_pane_cp08_ParamLimits

0x4e35,	// (0x00050ec7) bg_button_pane_cp08

0xa588,	// (0x0005661a) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa588,	// (0x0005661a) cell_video_dialer_keypad_pane_g1

0x9d55,	// (0x00055de7) mup3_rocker2_pane_ParamLimits

0x9d55,	// (0x00055de7) mup3_rocker2_pane

0x45d3,	// (0x00050665) mup3_rocker2_pane_g1

0x8cb7,	// (0x00054d49) main_dialer2_pane

0x0432,	// (0x0004c4c4) main_mp4_pane

0xa5c7,	// (0x00056659) main_mp4_pane_g1_ParamLimits

0xa5c7,	// (0x00056659) main_mp4_pane_g1

0xa5d5,	// (0x00056667) main_mp4_pane_g2_ParamLimits

0xa5d5,	// (0x00056667) main_mp4_pane_g2

0xa5e3,	// (0x00056675) main_mp4_pane_g3_ParamLimits

0xa5e3,	// (0x00056675) main_mp4_pane_g3

0xa628,	// (0x000566ba) main_mp4_pane_g4_ParamLimits

0xa628,	// (0x000566ba) main_mp4_pane_g4

0xa650,	// (0x000566e2) main_mp4_pane_g5_ParamLimits

0xa650,	// (0x000566e2) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0005b94b) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0005b94b) main_mp4_pane_g

0xa6a0,	// (0x00056732) main_mp4_pane_t1_ParamLimits

0xa6a0,	// (0x00056732) main_mp4_pane_t1

0xa6fc,	// (0x0005678e) main_mp4_pane_t2_ParamLimits

0xa6fc,	// (0x0005678e) main_mp4_pane_t2

0xdf7c,	// (0x0005a00e) main_mp4_pane_t3_ParamLimits

0xdf7c,	// (0x0005a00e) main_mp4_pane_t3

0xa74e,	// (0x000567e0) main_mp4_pane_t4_ParamLimits

0xa74e,	// (0x000567e0) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0005b958) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0005b958) main_mp4_pane_t

0xa792,	// (0x00056824) mp4_progress_pane_ParamLimits

0xa792,	// (0x00056824) mp4_progress_pane

0xa7dc,	// (0x0005686e) mp4_rocker_pane_ParamLimits

0xa7dc,	// (0x0005686e) mp4_rocker_pane

0xdfa4,	// (0x0005a036) mp4_progress_pane_t1

0xdfbd,	// (0x0005a04f) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0005b961) mp4_progress_pane_t

0xdfd6,	// (0x0005a068) mup_progress_pane_cp04

0xdfe2,	// (0x0005a074) mp4_rocker_pane_g1

0xa7fc,	// (0x0005688e) aid_cell_size_keypad2_ParamLimits

0xa7fc,	// (0x0005688e) aid_cell_size_keypad2

0xa80c,	// (0x0005689e) dialer2_ne_pane_ParamLimits

0xa80c,	// (0x0005689e) dialer2_ne_pane

0xa81a,	// (0x000568ac) grid_dialer2_keypad_pane_ParamLimits

0xa81a,	// (0x000568ac) grid_dialer2_keypad_pane

0xdfec,	// (0x0005a07e) bg_popup_call_pane_cp07_ParamLimits

0xdfec,	// (0x0005a07e) bg_popup_call_pane_cp07

0xa82a,	// (0x000568bc) dialer2_ne_pane_t1_ParamLimits

0xa82a,	// (0x000568bc) dialer2_ne_pane_t1

0xa84f,	// (0x000568e1) cell_dialer2_keypad_pane_ParamLimits

0xa84f,	// (0x000568e1) cell_dialer2_keypad_pane

0xe00c,	// (0x0005a09e) bg_button_pane_pane_cp04_ParamLimits

0xe00c,	// (0x0005a09e) bg_button_pane_pane_cp04

0xa866,	// (0x000568f8) cell_dialer2_keypad_pane_g1_ParamLimits

0xa866,	// (0x000568f8) cell_dialer2_keypad_pane_g1

0x6a2b,	// (0x00052abd) aid_placing_vt_set_content_ParamLimits

0x6a2b,	// (0x00052abd) aid_placing_vt_set_content

0x6a57,	// (0x00052ae9) aid_placing_vt_set_title_ParamLimits

0x6a57,	// (0x00052ae9) aid_placing_vt_set_title

0x0432,	// (0x0004c4c4) main_image3_pane

0xa900,	// (0x00056992) area_side_right_pane_cp01_ParamLimits

0xa900,	// (0x00056992) area_side_right_pane_cp01

0xa92d,	// (0x000569bf) main_image3_pane_g1_ParamLimits

0xa92d,	// (0x000569bf) main_image3_pane_g1

0xa93b,	// (0x000569cd) main_image3_pane_g2_ParamLimits

0xa93b,	// (0x000569cd) main_image3_pane_g2

0xa954,	// (0x000569e6) main_image3_pane_g3_ParamLimits

0xa954,	// (0x000569e6) main_image3_pane_g3

0xa96d,	// (0x000569ff) main_image3_pane_g4_ParamLimits

0xa96d,	// (0x000569ff) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0005b970) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0005b970) main_image3_pane_g

0xa986,	// (0x00056a18) main_image3_pane_t1_ParamLimits

0xa986,	// (0x00056a18) main_image3_pane_t1

0xa9ab,	// (0x00056a3d) main_image3_pane_t2_ParamLimits

0xa9ab,	// (0x00056a3d) main_image3_pane_t2

0xa9ca,	// (0x00056a5c) main_image3_pane_t3_ParamLimits

0xa9ca,	// (0x00056a5c) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0005b979) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0005b979) main_image3_pane_t

0x0bcd,	// (0x0004cc5f) grid_sctrl_middle_pane_cp01_ParamLimits

0x0bcd,	// (0x0004cc5f) grid_sctrl_middle_pane_cp01

0xaa2b,	// (0x00056abd) cell_sctrl_middle_pane_cp01_ParamLimits

0xaa2b,	// (0x00056abd) cell_sctrl_middle_pane_cp01

0xaa3c,	// (0x00056ace) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaa3c,	// (0x00056ace) cell_sctrl_middle_pane_cp01_g1

0x0432,	// (0x0004c4c4) main_call4_pane

0xaa49,	// (0x00056adb) aid_size_button_call4_ParamLimits

0xaa49,	// (0x00056adb) aid_size_button_call4

0xaa79,	// (0x00056b0b) call4_windows_pane_ParamLimits

0xaa79,	// (0x00056b0b) call4_windows_pane

0xaa93,	// (0x00056b25) grid_call4_button_pane_ParamLimits

0xaa93,	// (0x00056b25) grid_call4_button_pane

0xe018,	// (0x0005a0aa) call4_windows_conf_pane

0xe02d,	// (0x0005a0bf) popup_call4_audio_first_window_ParamLimits

0xe02d,	// (0x0005a0bf) popup_call4_audio_first_window

0xe079,	// (0x0005a10b) popup_call4_audio_second_window_ParamLimits

0xe079,	// (0x0005a10b) popup_call4_audio_second_window

0xe08d,	// (0x0005a11f) popup_call4_audio_wait_window_ParamLimits

0xe08d,	// (0x0005a11f) popup_call4_audio_wait_window

0xaab7,	// (0x00056b49) cell_call4_button_pane_ParamLimits

0xaab7,	// (0x00056b49) cell_call4_button_pane

0xaadc,	// (0x00056b6e) bg_button_pane_cp09_ParamLimits

0xaadc,	// (0x00056b6e) bg_button_pane_cp09

0xaae8,	// (0x00056b7a) cell_call4_button_pane_g1_ParamLimits

0xaae8,	// (0x00056b7a) cell_call4_button_pane_g1

0xaaf5,	// (0x00056b87) cell_call4_button_pane_t1_ParamLimits

0xaaf5,	// (0x00056b87) cell_call4_button_pane_t1

0xe0d5,	// (0x0005a167) popup_call4_audio_conf_window_ParamLimits

0xe0d5,	// (0x0005a167) popup_call4_audio_conf_window

0x9d88,	// (0x00055e1a) mup3_progress_pane_t1_ParamLimits

0x9d9f,	// (0x00055e31) mup3_progress_pane_t2_ParamLimits

0x48b5,	// (0x00050947) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0005b852) mup3_progress_pane_t_ParamLimits

0x48cc,	// (0x0005095e) mup_progress_pane_cp03_ParamLimits

0xa2c1,	// (0x00056353) mup3_control_keys_pane_g4_copy1

0xa7c0,	// (0x00056852) mp4_rocker2_pane_ParamLimits

0xa7c0,	// (0x00056852) mp4_rocker2_pane

0xe0e9,	// (0x0005a17b) mp4_rocker2_pane_g1

0xe0f1,	// (0x0005a183) mp4_rocker2_pane_g2

0xab07,	// (0x00056b99) mp4_rocker2_pane_g3

0xab0f,	// (0x00056ba1) mp4_rocker2_pane_g4

0xab17,	// (0x00056ba9) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0005b982) mp4_rocker2_pane_g

0x0432,	// (0x0004c4c4) main_camera4_pane

0x0432,	// (0x0004c4c4) main_video4_pane

0xa527,	// (0x000565b9) main_video_tele_dialer_pane_t1_ParamLimits

0xa527,	// (0x000565b9) main_video_tele_dialer_pane_t1

0xa539,	// (0x000565cb) main_video_tele_dialer_pane_t2_ParamLimits

0xa539,	// (0x000565cb) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0005b93c) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0005b93c) main_video_tele_dialer_pane_t

0xab37,	// (0x00056bc9) cam4_autofocus_pane_ParamLimits

0xab37,	// (0x00056bc9) cam4_autofocus_pane

0xab51,	// (0x00056be3) cam4_image_uncrop_pane_ParamLimits

0xab51,	// (0x00056be3) cam4_image_uncrop_pane

0xab68,	// (0x00056bfa) cam4_indicators_pane_ParamLimits

0xab68,	// (0x00056bfa) cam4_indicators_pane

0xab84,	// (0x00056c16) main_camera4_pane_g1_ParamLimits

0xab84,	// (0x00056c16) main_camera4_pane_g1

0xab90,	// (0x00056c22) main_camera4_pane_g2_ParamLimits

0xab90,	// (0x00056c22) main_camera4_pane_g2

0xab90,	// (0x00056c22) main_camera4_pane_g3_ParamLimits

0xab90,	// (0x00056c22) main_camera4_pane_g3

0xab9c,	// (0x00056c2e) main_camera4_pane_g4_ParamLimits

0xab9c,	// (0x00056c2e) main_camera4_pane_g4

0xaba8,	// (0x00056c3a) main_camera4_pane_g5_ParamLimits

0xaba8,	// (0x00056c3a) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0005b98d) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0005b98d) main_camera4_pane_g

0xabc2,	// (0x00056c54) main_camera4_pane_t1_ParamLimits

0xabc2,	// (0x00056c54) main_camera4_pane_t1

0xac0a,	// (0x00056c9c) bg_tb_trans_pane_cp06

0xac20,	// (0x00056cb2) cam4_indicators_pane_g1

0xac31,	// (0x00056cc3) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0005b9a8) cam4_indicators_pane_g

0xac4f,	// (0x00056ce1) cam4_indicators_pane_t1

0xac79,	// (0x00056d0b) main_video4_pane_g1_ParamLimits

0xac79,	// (0x00056d0b) main_video4_pane_g1

0xac85,	// (0x00056d17) main_video4_pane_g2_ParamLimits

0xac85,	// (0x00056d17) main_video4_pane_g2

0xac91,	// (0x00056d23) main_video4_pane_g3_ParamLimits

0xac91,	// (0x00056d23) main_video4_pane_g3

0xac9d,	// (0x00056d2f) main_video4_pane_g4_ParamLimits

0xac9d,	// (0x00056d2f) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0005b9af) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0005b9af) main_video4_pane_g

0xacbd,	// (0x00056d4f) vid4_indicators_pane_ParamLimits

0xacbd,	// (0x00056d4f) vid4_indicators_pane

0xacdb,	// (0x00056d6d) video4_image_uncrop_cif_pane_ParamLimits

0xacdb,	// (0x00056d6d) video4_image_uncrop_cif_pane

0xacea,	// (0x00056d7c) video4_image_uncrop_nhd_pane_ParamLimits

0xacea,	// (0x00056d7c) video4_image_uncrop_nhd_pane

0xab51,	// (0x00056be3) video4_image_uncrop_vga_pane_ParamLimits

0xab51,	// (0x00056be3) video4_image_uncrop_vga_pane

0xacf7,	// (0x00056d89) bg_tb_trans_pane_cp07

0xac20,	// (0x00056cb2) vid4_indicators_pane_g1

0xad0d,	// (0x00056d9f) vid4_indicators_pane_g2

0xad1e,	// (0x00056db0) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0005b9ba) vid4_indicators_pane_g

0xad4b,	// (0x00056ddd) vid4_indicators_pane_t1

0xad64,	// (0x00056df6) cam4_autofocus_pane_g1

0xad6c,	// (0x00056dfe) cam4_autofocus_pane_g2

0xad74,	// (0x00056e06) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0005b9c5) cam4_autofocus_pane_g

0xad7c,	// (0x00056e0e) cam4_autofocus_pane_g3_copy1

0xa557,	// (0x000565e9) video_down_pane_cp_t1

0xa565,	// (0x000565f7) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0005b941) video_down_pane_cp_t

0x0bcd,	// (0x0004cc5f) popup_vitu2_window_ParamLimits

0x0bcd,	// (0x0004cc5f) popup_vitu2_window

0xad84,	// (0x00056e16) aid_size_cell2_itu2_ParamLimits

0xad84,	// (0x00056e16) aid_size_cell2_itu2

0xada6,	// (0x00056e38) aid_size_cell_itu2_ParamLimits

0xada6,	// (0x00056e38) aid_size_cell_itu2

0xadea,	// (0x00056e7c) bg_popup_window_pane_cp09_ParamLimits

0xadea,	// (0x00056e7c) bg_popup_window_pane_cp09

0xadf8,	// (0x00056e8a) field_vitu2_entry_pane_ParamLimits

0xadf8,	// (0x00056e8a) field_vitu2_entry_pane

0xae18,	// (0x00056eaa) grid_vitu2_function_pane_ParamLimits

0xae18,	// (0x00056eaa) grid_vitu2_function_pane

0xae5c,	// (0x00056eee) grid_vitu2_itu_pane_ParamLimits

0xae5c,	// (0x00056eee) grid_vitu2_itu_pane

0xaed2,	// (0x00056f64) cell_vitu2_itu_pane_ParamLimits

0xaed2,	// (0x00056f64) cell_vitu2_itu_pane

0xaee7,	// (0x00056f79) cell_vitu2_function_pane_ParamLimits

0xaee7,	// (0x00056f79) cell_vitu2_function_pane

0xe0f9,	// (0x0005a18b) bg_popup_call_pane_cp08_ParamLimits

0xe0f9,	// (0x0005a18b) bg_popup_call_pane_cp08

0xe112,	// (0x0005a1a4) field_vitu2_entry_pane_g1

0xe11e,	// (0x0005a1b0) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0005b9cc) field_vitu2_entry_pane_g

0x0be3,	// (0x0004cc75) field_vitu2_entry_pane_t1_ParamLimits

0x0be3,	// (0x0004cc75) field_vitu2_entry_pane_t1

0x0c15,	// (0x0004cca7) field_vitu2_entry_pane_t2_ParamLimits

0x0c15,	// (0x0004cca7) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0005b9d3) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0005b9d3) field_vitu2_entry_pane_t

0xaf28,	// (0x00056fba) bg_button_pane_cp010_ParamLimits

0xaf28,	// (0x00056fba) bg_button_pane_cp010

0xaf36,	// (0x00056fc8) cell_vitu2_itu_pane_g1

0xaf54,	// (0x00056fe6) cell_vitu2_itu_pane_t1_ParamLimits

0xaf54,	// (0x00056fe6) cell_vitu2_itu_pane_t1

0x5a3c,	// (0x00051ace) cell_vitu2_itu_pane_t2_ParamLimits

0x5a3c,	// (0x00051ace) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0005b9dd) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0005b9dd) cell_vitu2_itu_pane_t

0xacf7,	// (0x00056d89) bg_button_pane_cp011

0xafa6,	// (0x00057038) cell_vitu2_function_pane_g1

0x0432,	// (0x0004c4c4) main_myfav_hc_pane

0xaa0c,	// (0x00056a9e) popup_image3_note_pane_ParamLimits

0xaa0c,	// (0x00056a9e) popup_image3_note_pane

0xaa1a,	// (0x00056aac) popup_image3_tool_bar_pane_ParamLimits

0xaa1a,	// (0x00056aac) popup_image3_tool_bar_pane

0x5aaa,	// (0x00051b3c) cell_vitu2_itu_pane_t3_ParamLimits

0x5aaa,	// (0x00051b3c) cell_vitu2_itu_pane_t3

0x0432,	// (0x0004c4c4) bg_popup_trans_pane

0xe140,	// (0x0005a1d2) grid_image3_tool_bar_pane

0xe14a,	// (0x0005a1dc) bg_popup_trans_pane_g1

0x26bd,	// (0x0004e74f) bg_popup_trans_pane_g2

0xe152,	// (0x0005a1e4) bg_popup_trans_pane_g3

0xe15a,	// (0x0005a1ec) bg_popup_trans_pane_g4

0xe162,	// (0x0005a1f4) bg_popup_trans_pane_g5

0xe16a,	// (0x0005a1fc) bg_popup_trans_pane_g6

0xe172,	// (0x0005a204) bg_popup_trans_pane_g7

0xe17a,	// (0x0005a20c) bg_popup_trans_pane_g8

0x269d,	// (0x0004e72f) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0005b9e4) bg_popup_trans_pane_g

0xe182,	// (0x0005a214) cell_image3_tool_bar_pane_ParamLimits

0xe182,	// (0x0005a214) cell_image3_tool_bar_pane

0x45d3,	// (0x00050665) cell_image3_tool_bar_pane_g1

0x0432,	// (0x0004c4c4) bg_popup_trans_pane_cp1

0xe196,	// (0x0005a228) popup_image3_note_pane_t1

0xe1a4,	// (0x0005a236) popup_image3_note_pane_t2

0xe1b2,	// (0x0005a244) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0005b9f7) popup_image3_note_pane_t

0xe1c0,	// (0x0005a252) popup_image3_note_pane_t3_copy1

0xafba,	// (0x0005704c) bg_myfav_hc_instruction_pane_ParamLimits

0xafba,	// (0x0005704c) bg_myfav_hc_instruction_pane

0xafd2,	// (0x00057064) cell_myfav_contact_pane_ParamLimits

0xafd2,	// (0x00057064) cell_myfav_contact_pane

0xafec,	// (0x0005707e) cell_myfav_contact_pane_cp1_ParamLimits

0xafec,	// (0x0005707e) cell_myfav_contact_pane_cp1

0xb004,	// (0x00057096) cell_myfav_contact_pane_cp2_ParamLimits

0xb004,	// (0x00057096) cell_myfav_contact_pane_cp2

0xb01c,	// (0x000570ae) cell_myfav_contact_pane_cp3_ParamLimits

0xb01c,	// (0x000570ae) cell_myfav_contact_pane_cp3

0xb033,	// (0x000570c5) cell_myfav_contact_pane_cp4_ParamLimits

0xb033,	// (0x000570c5) cell_myfav_contact_pane_cp4

0xb049,	// (0x000570db) cell_myfav_contact_pane_cp5_ParamLimits

0xb049,	// (0x000570db) cell_myfav_contact_pane_cp5

0xb05d,	// (0x000570ef) cell_myfav_contact_pane_cp6_ParamLimits

0xb05d,	// (0x000570ef) cell_myfav_contact_pane_cp6

0xb071,	// (0x00057103) cell_myfav_contact_pane_cp7_ParamLimits

0xb071,	// (0x00057103) cell_myfav_contact_pane_cp7

0xe1ce,	// (0x0005a260) listscroll_gen_pane_cp05

0xb089,	// (0x0005711b) main_myfav_hc_pane_g1_ParamLimits

0xb089,	// (0x0005711b) main_myfav_hc_pane_g1

0xb0a1,	// (0x00057133) main_myfav_hc_pane_g2_ParamLimits

0xb0a1,	// (0x00057133) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0005b9fe) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0005b9fe) main_myfav_hc_pane_g

0xb0d1,	// (0x00057163) main_myfav_hc_pane_t1_ParamLimits

0xb0d1,	// (0x00057163) main_myfav_hc_pane_t1

0xe1d7,	// (0x0005a269) main_myfav_hc_pane_t2_ParamLimits

0xe1d7,	// (0x0005a269) main_myfav_hc_pane_t2

0xe1e9,	// (0x0005a27b) main_myfav_hc_pane_t3_ParamLimits

0xe1e9,	// (0x0005a27b) main_myfav_hc_pane_t3

0xb0e8,	// (0x0005717a) main_myfav_hc_pane_t4_ParamLimits

0xb0e8,	// (0x0005717a) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0005ba05) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0005ba05) main_myfav_hc_pane_t

0x45d3,	// (0x00050665) bg_myfav_hc_instruction_pane_g1

0xe1fb,	// (0x0005a28d) cell_myfav_contact_pane_g1_ParamLimits

0xe1fb,	// (0x0005a28d) cell_myfav_contact_pane_g1

0xe1fb,	// (0x0005a28d) cell_myfav_contact_pane_g2_ParamLimits

0xe1fb,	// (0x0005a28d) cell_myfav_contact_pane_g2

0xe207,	// (0x0005a299) cell_myfav_contact_pane_g3_ParamLimits

0xe207,	// (0x0005a299) cell_myfav_contact_pane_g3

0x489f,	// (0x00050931) cell_myfav_contact_pane_g4_ParamLimits

0x489f,	// (0x00050931) cell_myfav_contact_pane_g4

0xe214,	// (0x0005a2a6) cell_myfav_contact_pane_g5_ParamLimits

0xe214,	// (0x0005a2a6) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0005ba10) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0005ba10) cell_myfav_contact_pane_g

0xb0b9,	// (0x0005714b) main_myfav_hc_pane_g3_ParamLimits

0xb0b9,	// (0x0005714b) main_myfav_hc_pane_g3

0x5c73,	// (0x00051d05) popup_adpt_find_window

0xb112,	// (0x000571a4) afind_page_pane_ParamLimits

0xb112,	// (0x000571a4) afind_page_pane

0xb11f,	// (0x000571b1) aid_size_cell_afind_ParamLimits

0xb11f,	// (0x000571b1) aid_size_cell_afind

0xb139,	// (0x000571cb) bg_popup_sub_pane_cp09_ParamLimits

0xb139,	// (0x000571cb) bg_popup_sub_pane_cp09

0xb146,	// (0x000571d8) find_pane_cp01_ParamLimits

0xb146,	// (0x000571d8) find_pane_cp01

0xe220,	// (0x0005a2b2) grid_afind_control_pane_ParamLimits

0xe220,	// (0x0005a2b2) grid_afind_control_pane

0xb153,	// (0x000571e5) grid_afind_pane_ParamLimits

0xb153,	// (0x000571e5) grid_afind_pane

0xb16f,	// (0x00057201) cell_afind_pane_ParamLimits

0xb16f,	// (0x00057201) cell_afind_pane

0x45d3,	// (0x00050665) afind_page_pane_g1

0xb1b7,	// (0x00057249) afind_page_pane_g2

0xb1c0,	// (0x00057252) afind_page_pane_g3

0x0002,

0xf989,	// (0x0005ba1b) afind_page_pane_g

0xb1c9,	// (0x0005725b) afind_page_pane_t1

0xe234,	// (0x0005a2c6) cell_afind_grid_control_pane_ParamLimits

0xe234,	// (0x0005a2c6) cell_afind_grid_control_pane

0xe00c,	// (0x0005a09e) bg_button_pane_cp69_ParamLimits

0xe00c,	// (0x0005a09e) bg_button_pane_cp69

0xb1e0,	// (0x00057272) cell_afind_pane_g1_ParamLimits

0xb1e0,	// (0x00057272) cell_afind_pane_g1

0xb1ed,	// (0x0005727f) cell_afind_pane_t1_ParamLimits

0xb1ed,	// (0x0005727f) cell_afind_pane_t1

0x24b8,	// (0x0004e54a) bg_button_pane_cp72

0xe243,	// (0x0005a2d5) cell_afind_grid_control_pane_g1

0x8832,	// (0x000548c4) aid_image_placing_area_ParamLimits

0x8832,	// (0x000548c4) aid_image_placing_area

0x4b87,	// (0x00050c19) field_vitu_entry_pane_g1_ParamLimits

0x4b87,	// (0x00050c19) field_vitu_entry_pane_g1

0x4b93,	// (0x00050c25) field_vitu_entry_pane_g2_ParamLimits

0x4b93,	// (0x00050c25) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0005b8cc) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0005b8cc) field_vitu_entry_pane_g

0xa34c,	// (0x000563de) cell_vitu_itu_pane_g1_ParamLimits

0xa38e,	// (0x00056420) cell_vitu_itu_pane_t3_ParamLimits

0xa38e,	// (0x00056420) cell_vitu_itu_pane_t3

0xdfa4,	// (0x0005a036) mp4_progress_pane_t1_ParamLimits

0xdfbd,	// (0x0005a04f) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0005b961) mp4_progress_pane_t_ParamLimits

0xdfd6,	// (0x0005a068) mup_progress_pane_cp04_ParamLimits

0xb0fc,	// (0x0005718e) main_myfav_hc_pane_t5_ParamLimits

0xb0fc,	// (0x0005718e) main_myfav_hc_pane_t5

0x0458,	// (0x0004c4ea) aid_zoom_text_primary

0x5c73,	// (0x00051d05) popup_adpt_find_window_ParamLimits

0x361c,	// (0x0004f6ae) main_cam_set_pane

0xab76,	// (0x00056c08) cam4_zoom_pane_ParamLimits

0xab76,	// (0x00056c08) cam4_zoom_pane

0xb1ff,	// (0x00057291) main_cam_set_pane_g1_ParamLimits

0xb1ff,	// (0x00057291) main_cam_set_pane_g1

0xb20d,	// (0x0005729f) main_cam_set_pane_g2_ParamLimits

0xb20d,	// (0x0005729f) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0005ba22) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0005ba22) main_cam_set_pane_g

0xb219,	// (0x000572ab) main_cam_set_pane_t1_ParamLimits

0xb219,	// (0x000572ab) main_cam_set_pane_t1

0xb235,	// (0x000572c7) main_cset_listscroll_pane_ParamLimits

0xb235,	// (0x000572c7) main_cset_listscroll_pane

0xb260,	// (0x000572f2) main_cset_slider_pane_ParamLimits

0xb260,	// (0x000572f2) main_cset_slider_pane

0xe254,	// (0x0005a2e6) main_cset_list_pane_ParamLimits

0xe254,	// (0x0005a2e6) main_cset_list_pane

0xe264,	// (0x0005a2f6) scroll_pane_cp028

0xb27f,	// (0x00057311) aid_area_touch_slider

0xb29b,	// (0x0005732d) cset_slider_pane

0xb2c5,	// (0x00057357) main_cset_slider_pane_g1

0xb2da,	// (0x0005736c) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0005ba27) main_cset_slider_pane_g

0xe29d,	// (0x0005a32f) main_cset_slider_pane_t1

0xb3a2,	// (0x00057434) main_cset_slider_pane_t2

0xb3bc,	// (0x0005744e) main_cset_slider_pane_t3

0xb3d6,	// (0x00057468) main_cset_slider_pane_t4

0xb3f4,	// (0x00057486) main_cset_slider_pane_t5

0xb416,	// (0x000574a8) main_cset_slider_pane_t6

0xb42d,	// (0x000574bf) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0005ba4c) main_cset_slider_pane_t

0xb53b,	// (0x000575cd) cset_list_set_pane_ParamLimits

0xb53b,	// (0x000575cd) cset_list_set_pane

0xb558,	// (0x000575ea) aid_position_infowindow_above

0xb560,	// (0x000575f2) aid_position_infowindow_below

0xb568,	// (0x000575fa) cset_list_set_pane_g1_ParamLimits

0xb568,	// (0x000575fa) cset_list_set_pane_g1

0x0e33,	// (0x0004cec5) cset_list_set_pane_g3_ParamLimits

0x0e33,	// (0x0004cec5) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0005ba6b) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0005ba6b) cset_list_set_pane_g

0xb574,	// (0x00057606) cset_list_set_pane_t1_ParamLimits

0xb574,	// (0x00057606) cset_list_set_pane_t1

0x361c,	// (0x0004f6ae) list_highlight_pane_cp021_ParamLimits

0x361c,	// (0x0004f6ae) list_highlight_pane_cp021

0x2e6b,	// (0x0004eefd) cset_slider_pane_g1

0x2e7d,	// (0x0004ef0f) cset_slider_pane_g2

0x2e74,	// (0x0004ef06) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0005ba70) cset_slider_pane_g

0xb589,	// (0x0005761b) aid_area_touch_cam4_zoom

0xb591,	// (0x00057623) cam4_zoom_cont_pane

0xb599,	// (0x0005762b) cam4_zoom_pane_g1

0xb5a1,	// (0x00057633) cam4_zoom_pane_g2

0xb5a9,	// (0x0005763b) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0005ba77) cam4_zoom_pane_g

0xb5b1,	// (0x00057643) cam4_zoom_cont_pane_g1

0xb5ba,	// (0x0005764c) cam4_zoom_cont_pane_g2

0xb5c3,	// (0x00057655) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0005ba7e) cam4_zoom_cont_pane_g

0xaa63,	// (0x00056af5) call4_image_pane_ParamLimits

0xaa63,	// (0x00056af5) call4_image_pane

0xe018,	// (0x0005a0aa) call4_windows_conf_pane_ParamLimits

0xe057,	// (0x0005a0e9) popup_call4_audio_in_window_ParamLimits

0xe057,	// (0x0005a0e9) popup_call4_audio_in_window

0x0432,	// (0x0004c4c4) bg_popup_call2_act_pane_cp02

0xe0cd,	// (0x0005a15f) call4_list_conf_pane

0x45d3,	// (0x00050665) call4_image_pane_g1

0x45d3,	// (0x00050665) call4_image_pane_g2

0x0001,

0xf700,	// (0x0005b792) call4_image_pane_g

0xe33d,	// (0x0005a3cf) list_single_graphic_popup_conf4_pane_ParamLimits

0xe33d,	// (0x0005a3cf) list_single_graphic_popup_conf4_pane

0x0432,	// (0x0004c4c4) list_highlight_pane_cp022

0xe350,	// (0x0005a3e2) list_single_graphic_popup_conf4_pane_g1

0x2b5c,	// (0x0004ebee) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0005ba85) list_single_graphic_popup_conf4_pane_g

0xe358,	// (0x0005a3ea) list_single_graphic_popup_conf4_pane_t1

0x6bbb,	// (0x00052c4d) popup_vtel_slider_window_ParamLimits

0x6bbb,	// (0x00052c4d) popup_vtel_slider_window

0xdffa,	// (0x0005a08c) dialer2_ne_pane_t2_ParamLimits

0xdffa,	// (0x0005a08c) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0005b966) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0005b966) dialer2_ne_pane_t

0x361c,	// (0x0004f6ae) bg_popup_sub_pane_cp010_ParamLimits

0x361c,	// (0x0004f6ae) bg_popup_sub_pane_cp010

0xb5cc,	// (0x0005765e) popup_vtel_slider_window_g1_ParamLimits

0xb5cc,	// (0x0005765e) popup_vtel_slider_window_g1

0xb5d8,	// (0x0005766a) popup_vtel_slider_window_g2_ParamLimits

0xb5d8,	// (0x0005766a) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0005ba8a) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0005ba8a) popup_vtel_slider_window_g

0xb620,	// (0x000576b2) vtel_slider_pane_ParamLimits

0xb620,	// (0x000576b2) vtel_slider_pane

0xb62f,	// (0x000576c1) vtel_slider_pane_g1_ParamLimits

0xb62f,	// (0x000576c1) vtel_slider_pane_g1

0xb63c,	// (0x000576ce) vtel_slider_pane_g2_ParamLimits

0xb63c,	// (0x000576ce) vtel_slider_pane_g2

0xb649,	// (0x000576db) vtel_slider_pane_g3_ParamLimits

0xb649,	// (0x000576db) vtel_slider_pane_g3

0xb62f,	// (0x000576c1) vtel_slider_pane_g4_ParamLimits

0xb62f,	// (0x000576c1) vtel_slider_pane_g4

0xb656,	// (0x000576e8) vtel_slider_pane_g5_ParamLimits

0xb656,	// (0x000576e8) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0005ba93) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0005ba93) vtel_slider_pane_g

0x0432,	// (0x0004c4c4) main_gallery2_pane

0xadcc,	// (0x00056e5e) aid_size_row_itut2_dropdow_list_ParamLimits

0xadcc,	// (0x00056e5e) aid_size_row_itut2_dropdow_list

0xae3a,	// (0x00056ecc) grid_vitu2_function_top_pane_ParamLimits

0xae3a,	// (0x00056ecc) grid_vitu2_function_top_pane

0xae90,	// (0x00056f22) popup_vitu2_dropdown_list_window_ParamLimits

0xae90,	// (0x00056f22) popup_vitu2_dropdown_list_window

0xaeb0,	// (0x00056f42) popup_vitu2_match_list_window

0xb663,	// (0x000576f5) cell_vitu2_function_top_pane_ParamLimits

0xb663,	// (0x000576f5) cell_vitu2_function_top_pane

0xb683,	// (0x00057715) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb683,	// (0x00057715) cell_vitu2_function_top_pane_cp01

0xb6a1,	// (0x00057733) cell_vitu2_function_top_wide_pane_ParamLimits

0xb6a1,	// (0x00057733) cell_vitu2_function_top_wide_pane

0xacf7,	// (0x00056d89) bg_button_pane_cp012

0xb6bf,	// (0x00057751) cell_vitu2_function_top_pane_g1

0xb6ce,	// (0x00057760) bg_button_pane_cp013_ParamLimits

0xb6ce,	// (0x00057760) bg_button_pane_cp013

0xb6ea,	// (0x0005777c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb6ea,	// (0x0005777c) cell_vitu2_function_top_wide_pane_g1

0xb702,	// (0x00057794) bg_popup_sub_pane_cp20

0xb710,	// (0x000577a2) list_vitu2_match_list_pane

0xe14a,	// (0x0005a1dc) bg_popup_sub_pane_cp20_g1

0xe152,	// (0x0005a1e4) bg_popup_sub_pane_cp20_g2

0x26bd,	// (0x0004e74f) bg_popup_sub_pane_cp20_g3

0xe15a,	// (0x0005a1ec) bg_popup_sub_pane_cp20_g4

0x269d,	// (0x0004e72f) bg_popup_sub_pane_cp20_g5

0xe36e,	// (0x0005a400) bg_popup_sub_pane_cp20_g6

0xe16a,	// (0x0005a1fc) bg_popup_sub_pane_cp20_g7

0xe172,	// (0x0005a204) bg_popup_sub_pane_cp20_g8

0xe17a,	// (0x0005a20c) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0005ba9e) bg_popup_sub_pane_cp20_g

0xb728,	// (0x000577ba) list_vitu2_match_list_item_pane_ParamLimits

0xb728,	// (0x000577ba) list_vitu2_match_list_item_pane

0xb73a,	// (0x000577cc) list_vitu2_match_list_item_pane_t1

0x607f,	// (0x00052111) bg_popup_sub_pane_cp21

0xb777,	// (0x00057809) grid_vitu2_dropdown_list_pane

0xb77f,	// (0x00057811) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb77f,	// (0x00057811) cell_vitu2_dropdown_list_char_pane

0xb7a0,	// (0x00057832) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb7a0,	// (0x00057832) cell_vitu2_dropdown_list_ctrl_pane

0xe376,	// (0x0005a408) cell_vitu2_dropdown_list_char_pane_g1

0xe37f,	// (0x0005a411) cell_vitu2_dropdown_list_char_pane_g2

0xe388,	// (0x0005a41a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0005babb) cell_vitu2_dropdown_list_char_pane_g

0xb7cc,	// (0x0005785e) cell_vitu2_dropdown_list_char_pane_t1

0xb7da,	// (0x0005786c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb7da,	// (0x0005786c) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb7ea,	// (0x0005787c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb7ea,	// (0x0005787c) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb7fb,	// (0x0005788d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb7fb,	// (0x0005788d) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb80b,	// (0x0005789d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb80b,	// (0x0005789d) cell_vitu2_dropdown_list_ctrl_pane_g4

0xac0a,	// (0x00056c9c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xac0a,	// (0x00056c9c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0005bac2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0005bac2) cell_vitu2_dropdown_list_ctrl_pane_g

0xb827,	// (0x000578b9) aid_size_cell_gallery2_ParamLimits

0xb827,	// (0x000578b9) aid_size_cell_gallery2

0xb835,	// (0x000578c7) grid_gallery2_pane_ParamLimits

0xb835,	// (0x000578c7) grid_gallery2_pane

0xb844,	// (0x000578d6) scroll_pane_cp029_ParamLimits

0xb844,	// (0x000578d6) scroll_pane_cp029

0xb850,	// (0x000578e2) cell_gallery2_pane_ParamLimits

0xb850,	// (0x000578e2) cell_gallery2_pane

0xe391,	// (0x0005a423) cell_gallery2_pane_g2

0xb881,	// (0x00057913) cell_gallery2_pane_g3

0xe39b,	// (0x0005a42d) cell_gallery2_pane_g4

0xe3a3,	// (0x0005a435) cell_gallery2_pane_g5

0x2d35,	// (0x0004edc7) grid_highlight_pane_cp10

0xaeb0,	// (0x00056f42) popup_vitu2_match_list_window_ParamLimits

0xaec2,	// (0x00056f54) popup_vitu2_query_window_ParamLimits

0xaec2,	// (0x00056f54) popup_vitu2_query_window

0x607f,	// (0x00052111) bg_vitu2_candi_button_pane

0xe376,	// (0x0005a408) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe37f,	// (0x0005a411) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe388,	// (0x0005a41a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb889,	// (0x0005791b) bg_button_pane_cp015

0xb89b,	// (0x0005792d) bg_button_pane_cp016

0xb8ae,	// (0x00057940) bg_button_pane_cp017

0x4182,	// (0x00050214) bg_popup_sub_pane_cp22

0xe3ab,	// (0x0005a43d) popup_vitu2_query_window_g1

0xb8f3,	// (0x00057985) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0005bacd) popup_vitu2_query_window_g

0xb910,	// (0x000579a2) popup_vitu2_query_window_t1_ParamLimits

0xb910,	// (0x000579a2) popup_vitu2_query_window_t1

0xb943,	// (0x000579d5) popup_vitu2_query_window_t2_ParamLimits

0xb943,	// (0x000579d5) popup_vitu2_query_window_t2

0xb955,	// (0x000579e7) popup_vitu2_query_window_t3_ParamLimits

0xb955,	// (0x000579e7) popup_vitu2_query_window_t3

0xb97d,	// (0x00057a0f) popup_vitu2_query_window_t4_ParamLimits

0xb97d,	// (0x00057a0f) popup_vitu2_query_window_t4

0xb99e,	// (0x00057a30) popup_vitu2_query_window_t5_ParamLimits

0xb99e,	// (0x00057a30) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0005bad4) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0005bad4) popup_vitu2_query_window_t

0xe24c,	// (0x0005a2de) main_cset_text_pane

0xb27f,	// (0x00057311) aid_area_touch_slider_ParamLimits

0xb29b,	// (0x0005732d) cset_slider_pane_ParamLimits

0xb2c5,	// (0x00057357) main_cset_slider_pane_g1_ParamLimits

0xb2da,	// (0x0005736c) main_cset_slider_pane_g2_ParamLimits

0xe26d,	// (0x0005a2ff) main_cset_slider_pane_g3_ParamLimits

0xe26d,	// (0x0005a2ff) main_cset_slider_pane_g3

0xb2ef,	// (0x00057381) main_cset_slider_pane_g4_ParamLimits

0xb2ef,	// (0x00057381) main_cset_slider_pane_g4

0xb2fe,	// (0x00057390) main_cset_slider_pane_g5_ParamLimits

0xb2fe,	// (0x00057390) main_cset_slider_pane_g5

0xb30c,	// (0x0005739e) main_cset_slider_pane_g6_ParamLimits

0xb30c,	// (0x0005739e) main_cset_slider_pane_g6

0xf995,	// (0x0005ba27) main_cset_slider_pane_g_ParamLimits

0xe29d,	// (0x0005a32f) main_cset_slider_pane_t1_ParamLimits

0xb3a2,	// (0x00057434) main_cset_slider_pane_t2_ParamLimits

0xb3bc,	// (0x0005744e) main_cset_slider_pane_t3_ParamLimits

0xb3d6,	// (0x00057468) main_cset_slider_pane_t4_ParamLimits

0xb3f4,	// (0x00057486) main_cset_slider_pane_t5_ParamLimits

0xb416,	// (0x000574a8) main_cset_slider_pane_t6_ParamLimits

0xb42d,	// (0x000574bf) main_cset_slider_pane_t7_ParamLimits

0xb45b,	// (0x000574ed) main_cset_slider_pane_t8_ParamLimits

0xb45b,	// (0x000574ed) main_cset_slider_pane_t8

0xb483,	// (0x00057515) main_cset_slider_pane_t9_ParamLimits

0xb483,	// (0x00057515) main_cset_slider_pane_t9

0xb4ab,	// (0x0005753d) main_cset_slider_pane_t10_ParamLimits

0xb4ab,	// (0x0005753d) main_cset_slider_pane_t10

0xb4d3,	// (0x00057565) main_cset_slider_pane_t11_ParamLimits

0xb4d3,	// (0x00057565) main_cset_slider_pane_t11

0xb4fd,	// (0x0005758f) main_cset_slider_pane_t12_ParamLimits

0xb4fd,	// (0x0005758f) main_cset_slider_pane_t12

0xb51c,	// (0x000575ae) main_cset_slider_pane_t13_ParamLimits

0xb51c,	// (0x000575ae) main_cset_slider_pane_t13

0xf9ba,	// (0x0005ba4c) main_cset_slider_pane_t_ParamLimits

0x0432,	// (0x0004c4c4) bg_popup_sub_pane_cp011

0xe3b7,	// (0x0005a449) main_cset_text_pane_g1

0xe3bf,	// (0x0005a451) main_cset_text_pane_t1

0xe3cd,	// (0x0005a45f) main_cset_text_pane_t2

0xe3db,	// (0x0005a46d) main_cset_text_pane_t3

0xe3e9,	// (0x0005a47b) main_cset_text_pane_t4

0xe3f7,	// (0x0005a489) main_cset_text_pane_t5

0xe405,	// (0x0005a497) main_cset_text_pane_t6

0xe413,	// (0x0005a4a5) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0005bae3) main_cset_text_pane_t

0x0432,	// (0x0004c4c4) main_cam4_burst_pane

0x0432,	// (0x0004c4c4) main_cam5_pane

0x27b6,	// (0x0004e848) bg_button_pane_cp019

0xb1d7,	// (0x00057269) bg_button_pane_cp020

0xe279,	// (0x0005a30b) main_cset_slider_pane_g7_ParamLimits

0xe279,	// (0x0005a30b) main_cset_slider_pane_g7

0xe285,	// (0x0005a317) main_cset_slider_pane_g8_ParamLimits

0xe285,	// (0x0005a317) main_cset_slider_pane_g8

0xb322,	// (0x000573b4) main_cset_slider_pane_g9_ParamLimits

0xb322,	// (0x000573b4) main_cset_slider_pane_g9

0xb32e,	// (0x000573c0) main_cset_slider_pane_g10_ParamLimits

0xb32e,	// (0x000573c0) main_cset_slider_pane_g10

0xb33a,	// (0x000573cc) main_cset_slider_pane_g11_ParamLimits

0xb33a,	// (0x000573cc) main_cset_slider_pane_g11

0xb346,	// (0x000573d8) main_cset_slider_pane_g12_ParamLimits

0xb346,	// (0x000573d8) main_cset_slider_pane_g12

0xb352,	// (0x000573e4) main_cset_slider_pane_g13_ParamLimits

0xb352,	// (0x000573e4) main_cset_slider_pane_g13

0xb360,	// (0x000573f2) main_cset_slider_pane_g14_ParamLimits

0xb360,	// (0x000573f2) main_cset_slider_pane_g14

0xb36e,	// (0x00057400) main_cset_slider_pane_g15_ParamLimits

0xb36e,	// (0x00057400) main_cset_slider_pane_g15

0xe2cb,	// (0x0005a35d) main_cset_slider_pane_t14_ParamLimits

0xe2cb,	// (0x0005a35d) main_cset_slider_pane_t14

0xe304,	// (0x0005a396) main_cset_slider_pane_t15_ParamLimits

0xe304,	// (0x0005a396) main_cset_slider_pane_t15

0xba15,	// (0x00057aa7) aid_cam4_burst_size_cell_ParamLimits

0xba15,	// (0x00057aa7) aid_cam4_burst_size_cell

0xba31,	// (0x00057ac3) grid_cam4_burst_pane_ParamLimits

0xba31,	// (0x00057ac3) grid_cam4_burst_pane

0xba61,	// (0x00057af3) linegrid_cam4_burst_pane_ParamLimits

0xba61,	// (0x00057af3) linegrid_cam4_burst_pane

0xba83,	// (0x00057b15) scroll_pane_cp30_ParamLimits

0xba83,	// (0x00057b15) scroll_pane_cp30

0xba8f,	// (0x00057b21) cell_cam4_burst_pane_ParamLimits

0xba8f,	// (0x00057b21) cell_cam4_burst_pane

0xe421,	// (0x0005a4b3) linegrid_cam4_burst_pane_g1_ParamLimits

0xe421,	// (0x0005a4b3) linegrid_cam4_burst_pane_g1

0xbacb,	// (0x00057b5d) linegrid_cam4_burst_pane_g2_ParamLimits

0xbacb,	// (0x00057b5d) linegrid_cam4_burst_pane_g2

0xe42e,	// (0x0005a4c0) linegrid_cam4_burst_pane_g3_ParamLimits

0xe42e,	// (0x0005a4c0) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0005baf2) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0005baf2) linegrid_cam4_burst_pane_g

0xbadc,	// (0x00057b6e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbadc,	// (0x00057b6e) linegrid_cam4_burst_pane_g3_copy1

0xe43b,	// (0x0005a4cd) linegrid_cam4_burst_pane_g4_ParamLimits

0xe43b,	// (0x0005a4cd) linegrid_cam4_burst_pane_g4

0xbaf6,	// (0x00057b88) linegrid_cam4_burst_pane_g5_ParamLimits

0xbaf6,	// (0x00057b88) linegrid_cam4_burst_pane_g5

0xbb07,	// (0x00057b99) linegrid_cam4_burst_pane_g6_ParamLimits

0xbb07,	// (0x00057b99) linegrid_cam4_burst_pane_g6

0xe448,	// (0x0005a4da) linegrid_cam4_burst_pane_g7_ParamLimits

0xe448,	// (0x0005a4da) linegrid_cam4_burst_pane_g7

0xbb18,	// (0x00057baa) cell_cam4_burst_pane_g1

0xe461,	// (0x0005a4f3) main_cam5_pane_t1_ParamLimits

0xe461,	// (0x0005a4f3) main_cam5_pane_t1

0xe473,	// (0x0005a505) main_cam5_pane_t2_ParamLimits

0xe473,	// (0x0005a505) main_cam5_pane_t2

0xe485,	// (0x0005a517) main_cam5_pane_t3_ParamLimits

0xe485,	// (0x0005a517) main_cam5_pane_t3

0xe497,	// (0x0005a529) main_cam5_pane_t4_ParamLimits

0xe497,	// (0x0005a529) main_cam5_pane_t4

0xe4ad,	// (0x0005a53f) main_cam5_pane_t5_ParamLimits

0xe4ad,	// (0x0005a53f) main_cam5_pane_t5

0xe4bf,	// (0x0005a551) main_cam5_pane_t6_ParamLimits

0xe4bf,	// (0x0005a551) main_cam5_pane_t6

0xe4d3,	// (0x0005a565) main_cam5_pane_t7_ParamLimits

0xe4d3,	// (0x0005a565) main_cam5_pane_t7

0xe4e5,	// (0x0005a577) main_cam5_pane_t8_ParamLimits

0xe4e5,	// (0x0005a577) main_cam5_pane_t8

0xe501,	// (0x0005a593) main_cam5_pane_t9_ParamLimits

0xe501,	// (0x0005a593) main_cam5_pane_t9

0xe513,	// (0x0005a5a5) main_cam5_pane_t10_ParamLimits

0xe513,	// (0x0005a5a5) main_cam5_pane_t10

0xe525,	// (0x0005a5b7) main_cam5_pane_t11_ParamLimits

0xe525,	// (0x0005a5b7) main_cam5_pane_t11

0xe537,	// (0x0005a5c9) main_cam5_pane_t12_ParamLimits

0xe537,	// (0x0005a5c9) main_cam5_pane_t12

0xe54c,	// (0x0005a5de) main_cam5_pane_t13_ParamLimits

0xe54c,	// (0x0005a5de) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0005bafe) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0005bafe) main_cam5_pane_t

0x5d1f,	// (0x00051db1) popup_scut_keymap_window_ParamLimits

0x5d1f,	// (0x00051db1) popup_scut_keymap_window

0xbb2b,	// (0x00057bbd) aid_size_cell_brow_shortcut

0x2d35,	// (0x0004edc7) bg_popup_window_pane_cp010

0xbb37,	// (0x00057bc9) grid_scut_pane

0xbb43,	// (0x00057bd5) cell_scut_pane_ParamLimits

0xbb43,	// (0x00057bd5) cell_scut_pane

0xbb5a,	// (0x00057bec) cell_scut_pane_g1

0xe569,	// (0x0005a5fb) cell_scut_pane_t1

0xe578,	// (0x0005a60a) cell_scut_pane_t2

0xbb63,	// (0x00057bf5) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0005bb19) cell_scut_pane_t

0x99cc,	// (0x00055a5e) main_mup3_pane_g8_ParamLimits

0x99cc,	// (0x00055a5e) main_mup3_pane_g8

0xadda,	// (0x00056e6c) area_vitu2_query_pane_ParamLimits

0xadda,	// (0x00056e6c) area_vitu2_query_pane

0xb8c1,	// (0x00057953) input_focus_pane_cp08

0xe587,	// (0x0005a619) area_vitu2_query_pane_g1

0xbb71,	// (0x00057c03) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0005bb20) area_vitu2_query_pane_g

0xbb82,	// (0x00057c14) area_vitu2_query_pane_t1_ParamLimits

0xbb82,	// (0x00057c14) area_vitu2_query_pane_t1

0xbb96,	// (0x00057c28) area_vitu2_query_pane_t2_ParamLimits

0xbb96,	// (0x00057c28) area_vitu2_query_pane_t2

0xbbaa,	// (0x00057c3c) area_vitu2_query_pane_t3_ParamLimits

0xbbaa,	// (0x00057c3c) area_vitu2_query_pane_t3

0x0cb4,	// (0x0004cd46) area_vitu2_query_pane_t4_ParamLimits

0x0cb4,	// (0x0004cd46) area_vitu2_query_pane_t4

0x0cdc,	// (0x0004cd6e) area_vitu2_query_pane_t5_ParamLimits

0x0cdc,	// (0x0004cd6e) area_vitu2_query_pane_t5

0x0d04,	// (0x0004cd96) area_vitu2_query_pane_t6_ParamLimits

0x0d04,	// (0x0004cd96) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0005bb25) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0005bb25) area_vitu2_query_pane_t

0xbbd2,	// (0x00057c64) bg_button_pane_cp018

0xbbe0,	// (0x00057c72) bg_button_pane_cp021

0xbbec,	// (0x00057c7e) bg_button_pane_cp022

0xbbfd,	// (0x00057c8f) input_focus_pane_cp09

0x7e37,	// (0x00053ec9) aid_size_touch_mv_arrow_left

0x7e62,	// (0x00053ef4) aid_size_touch_mv_arrow_right

0xb386,	// (0x00057418) main_cset_slider_pane_g16_ParamLimits

0xb386,	// (0x00057418) main_cset_slider_pane_g16

0xb394,	// (0x00057426) main_cset_slider_pane_g17_ParamLimits

0xb394,	// (0x00057426) main_cset_slider_pane_g17

0xbb18,	// (0x00057baa) cell_cam4_burst_pane_g1_ParamLimits

0x0432,	// (0x0004c4c4) compa_mode_pane

0xb5e4,	// (0x00057676) popup_vtel_slider_window_g3_ParamLimits

0xb5e4,	// (0x00057676) popup_vtel_slider_window_g3

0xb5f8,	// (0x0005768a) popup_vtel_slider_window_g4_ParamLimits

0xb5f8,	// (0x0005768a) popup_vtel_slider_window_g4

0xb60c,	// (0x0005769e) popup_vtel_slider_window_t1_ParamLimits

0xb60c,	// (0x0005769e) popup_vtel_slider_window_t1

0x0432,	// (0x0004c4c4) main_cl_pane

0x41aa,	// (0x0005023c) popup_imed_adjust2_window_ParamLimits

0x4182,	// (0x00050214) bg_tb_trans_pane_cp05_ParamLimits

0x4abc,	// (0x00050b4e) popup_imed_adjust2_window_g1_ParamLimits

0x4acb,	// (0x00050b5d) popup_imed_adjust2_window_g2_ParamLimits

0x4acb,	// (0x00050b5d) popup_imed_adjust2_window_g2

0x4ad7,	// (0x00050b69) popup_imed_adjust2_window_g3_ParamLimits

0x4ad7,	// (0x00050b69) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0005b890) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0005b890) popup_imed_adjust2_window_g

0x4ae3,	// (0x00050b75) popup_imed_adjust2_window_t1_ParamLimits

0x4afb,	// (0x00050b8d) slider_imed_adjust_pane_ParamLimits

0x4b0f,	// (0x00050ba1) slider_imed_adjust_pane_g1_ParamLimits

0x4b1f,	// (0x00050bb1) slider_imed_adjust_pane_g2_ParamLimits

0x4b2f,	// (0x00050bc1) slider_imed_adjust_pane_g3_ParamLimits

0x4b40,	// (0x00050bd2) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0005b897) slider_imed_adjust_pane_g_ParamLimits

0xab1f,	// (0x00056bb1) aid_touch_area_cam4_ParamLimits

0xab1f,	// (0x00056bb1) aid_touch_area_cam4

0xab2f,	// (0x00056bc1) battery_pane_cp01

0xabb6,	// (0x00056c48) main_camera4_pane_g6_ParamLimits

0xabb6,	// (0x00056c48) main_camera4_pane_g6

0xabd4,	// (0x00056c66) main_camera4_pane_t2_ParamLimits

0xabd4,	// (0x00056c66) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0005b99a) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0005b99a) main_camera4_pane_t

0xac69,	// (0x00056cfb) aid_touch_area_vid4_ParamLimits

0xac69,	// (0x00056cfb) aid_touch_area_vid4

0xaca9,	// (0x00056d3b) main_video4_pane_g5_ParamLimits

0xaca9,	// (0x00056d3b) main_video4_pane_g5

0xaccb,	// (0x00056d5d) vid4_progress_pane_ParamLimits

0xaccb,	// (0x00056d5d) vid4_progress_pane

0xe291,	// (0x0005a323) main_cset_slider_pane_g18_ParamLimits

0xe291,	// (0x0005a323) main_cset_slider_pane_g18

0xe455,	// (0x0005a4e7) cell_cam4_burst_pane_g2_ParamLimits

0xe455,	// (0x0005a4e7) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0005baf9) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0005baf9) cell_cam4_burst_pane_g

0xbc0e,	// (0x00057ca0) bg_cl_pane_ParamLimits

0xbc0e,	// (0x00057ca0) bg_cl_pane

0xbc1a,	// (0x00057cac) cl_header_pane_ParamLimits

0xbc1a,	// (0x00057cac) cl_header_pane

0xbc26,	// (0x00057cb8) cl_listscroll_pane_ParamLimits

0xbc26,	// (0x00057cb8) cl_listscroll_pane

0xe593,	// (0x0005a625) bg_cl_pane_g1

0xe59b,	// (0x0005a62d) bg_cl_pane_g2

0xe5a3,	// (0x0005a635) bg_cl_pane_g3

0xe5ab,	// (0x0005a63d) bg_cl_pane_g4

0xe5b3,	// (0x0005a645) bg_cl_pane_g5

0xe5bb,	// (0x0005a64d) bg_cl_pane_g6

0xe5c3,	// (0x0005a655) bg_cl_pane_g7

0xe5cb,	// (0x0005a65d) bg_cl_pane_g8

0xe5d3,	// (0x0005a665) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0005bb34) bg_cl_pane_g

0xbc32,	// (0x00057cc4) aid_height_cl_leading_ParamLimits

0xbc32,	// (0x00057cc4) aid_height_cl_leading

0xbc3e,	// (0x00057cd0) aid_height_cl_text_ParamLimits

0xbc3e,	// (0x00057cd0) aid_height_cl_text

0x0bcd,	// (0x0004cc5f) bg_cl_header_pane_ParamLimits

0x0bcd,	// (0x0004cc5f) bg_cl_header_pane

0xbc56,	// (0x00057ce8) cl_header_pane_g1_ParamLimits

0xbc56,	// (0x00057ce8) cl_header_pane_g1

0xbc63,	// (0x00057cf5) cl_header_pane_t1_ParamLimits

0xbc63,	// (0x00057cf5) cl_header_pane_t1

0xe5db,	// (0x0005a66d) cl_list_pane

0xe264,	// (0x0005a2f6) hc_scroll_pane_cp01

0x269d,	// (0x0004e72f) bg_cl_header_pane_g1

0xe14a,	// (0x0005a1dc) bg_cl_header_pane_g2

0x26bd,	// (0x0004e74f) bg_cl_header_pane_g3

0xe15a,	// (0x0005a1ec) bg_cl_header_pane_g4

0xe152,	// (0x0005a1e4) bg_cl_header_pane_g5

0xe36e,	// (0x0005a400) bg_cl_header_pane_g6

0xe172,	// (0x0005a204) bg_cl_header_pane_g7

0xe17a,	// (0x0005a20c) bg_cl_header_pane_g8

0xe16a,	// (0x0005a1fc) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0005bb47) bg_cl_header_pane_g

0xbc75,	// (0x00057d07) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbc75,	// (0x00057d07) hc_cl_list_double_graphic_heading_pane

0xbc8c,	// (0x00057d1e) hc_cl_list_single_graphic_pane_ParamLimits

0xbc8c,	// (0x00057d1e) hc_cl_list_single_graphic_pane

0xbcac,	// (0x00057d3e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbcac,	// (0x00057d3e) hc_cl_list_single_graphic_pane_g1

0xbcb8,	// (0x00057d4a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbcb8,	// (0x00057d4a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0005bb5a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0005bb5a) hc_cl_list_single_graphic_pane_g

0xbccc,	// (0x00057d5e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbccc,	// (0x00057d5e) hc_cl_list_single_graphic_pane_t1

0xbcac,	// (0x00057d3e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbcac,	// (0x00057d3e) hc_cl_list_double_graphic_heading_pane_g1

0xbce1,	// (0x00057d73) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbce1,	// (0x00057d73) hc_cl_list_double_graphic_heading_pane_g2

0xbcf5,	// (0x00057d87) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbcf5,	// (0x00057d87) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0005bb5f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0005bb5f) hc_cl_list_double_graphic_heading_pane_g

0xbd09,	// (0x00057d9b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbd09,	// (0x00057d9b) hc_cl_list_double_graphic_heading_pane_t1

0xbd1e,	// (0x00057db0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbd1e,	// (0x00057db0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0005bb66) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0005bb66) hc_cl_list_double_graphic_heading_pane_t

0xbd3b,	// (0x00057dcd) vid4_progress_pane_g1

0xbd4b,	// (0x00057ddd) vid4_progress_pane_g2

0x28de,	// (0x0004e970) vid4_progress_pane_g3

0xac31,	// (0x00056cc3) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0005bb6b) vid4_progress_pane_g

0xbd5b,	// (0x00057ded) vid4_progress_pane_t1

0xbd70,	// (0x00057e02) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0005bb76) vid4_progress_pane_t

0xbd9b,	// (0x00057e2d) wait_bar_pane_cp07

0x43bc,	// (0x0005044e) blid_firmament_pane_ParamLimits

0x43ff,	// (0x00050491) popup_blid_sat_info2_window_g1

0x4423,	// (0x000504b5) popup_blid_sat_info2_window_t3

0x4431,	// (0x000504c3) popup_blid_sat_info2_window_t4

0x443f,	// (0x000504d1) popup_blid_sat_info2_window_t5

0x444d,	// (0x000504df) popup_blid_sat_info2_window_t6

0x445d,	// (0x000504ef) popup_blid_sat_info2_window_t7

0x446b,	// (0x000504fd) popup_blid_sat_info2_window_t8

0x4479,	// (0x0005050b) popup_blid_sat_info2_window_t9

0x4487,	// (0x00050519) popup_blid_sat_info2_window_t10

0x4553,	// (0x000505e5) aid_firma_cardinal_ParamLimits

0x4567,	// (0x000505f9) blid_firmament_pane_t1_ParamLimits

0x457e,	// (0x00050610) blid_firmament_pane_t2_ParamLimits

0x4595,	// (0x00050627) blid_firmament_pane_t3_ParamLimits

0x45ac,	// (0x0005063e) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0005b789) blid_firmament_pane_t_ParamLimits

0x45c3,	// (0x00050655) blid_sat_info_pane_ParamLimits

0x361c,	// (0x0004f6ae) main_cam_set_pane_ParamLimits

0xa166,	// (0x000561f8) aid_size_cell_colour_35_ParamLimits

0xa180,	// (0x00056212) aid_size_cell_colour_112_ParamLimits

0xa197,	// (0x00056229) aid_size_cell_effect_ParamLimits

0x361c,	// (0x0004f6ae) bg_tb_trans_pane_cp02_ParamLimits

0x3641,	// (0x0004f6d3) heading_imed_pane_ParamLimits

0xa1b1,	// (0x00056243) listscroll_imed_pane_ParamLimits

0x37a3,	// (0x0004f835) popup_call2_audio_first_window_g5_ParamLimits

0x37a3,	// (0x0004f835) popup_call2_audio_first_window_g5

0xa8ce,	// (0x00056960) aid_size_touch_image3_arrow_left_ParamLimits

0xa8ce,	// (0x00056960) aid_size_touch_image3_arrow_left

0xa8e4,	// (0x00056976) aid_size_touch_image3_arrow_right_ParamLimits

0xa8e4,	// (0x00056976) aid_size_touch_image3_arrow_right

0xbd86,	// (0x00057e18) vid4_progress_pane_t3

0xa457,	// (0x000564e9) main_hwr_training_symbol_option_pane_ParamLimits

0xa457,	// (0x000564e9) main_hwr_training_symbol_option_pane

0x4da9,	// (0x00050e3b) popup_hwr_training_preview_window_ParamLimits

0x4da9,	// (0x00050e3b) popup_hwr_training_preview_window

0xa4b8,	// (0x0005654a) hwr_training_navi_pane_g5_ParamLimits

0xa4b8,	// (0x0005654a) hwr_training_navi_pane_g5

0xe138,	// (0x0005a1ca) popup_char_count_window

0xb702,	// (0x00057794) bg_popup_sub_pane_cp20_ParamLimits

0xb710,	// (0x000577a2) list_vitu2_match_list_pane_ParamLimits

0xb71c,	// (0x000577ae) vitu2_page_scroll_pane_ParamLimits

0xb71c,	// (0x000577ae) vitu2_page_scroll_pane

0xe5e4,	// (0x0005a676) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe5e4,	// (0x0005a676) list_single_hwr_training_symbol_option_pane

0xe5f7,	// (0x0005a689) list_single_hwr_training_symbol_option_pane_g1

0xe5ff,	// (0x0005a691) list_single_hwr_training_symbol_option_pane_t1

0xe60d,	// (0x0005a69f) bg_button_pane_cp023

0xe616,	// (0x0005a6a8) bg_button_pane_cp024

0xbdab,	// (0x00057e3d) vitu2_page_scroll_pane_g1

0xbdb3,	// (0x00057e45) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0005bb7d) vitu2_page_scroll_pane_g

0xbdbb,	// (0x00057e4d) vitu2_page_scroll_pane_t1

0x431c,	// (0x000503ae) popup_char_count_window_g1

0xe649,	// (0x0005a6db) popup_char_count_window_g2

0xe652,	// (0x0005a6e4) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0005bb82) popup_char_count_window_g

0xe65b,	// (0x0005a6ed) popup_char_count_window_t1

0x0432,	// (0x0004c4c4) main_vded2_pane

0x4aa8,	// (0x00050b3a) aid_size_cell_imed_line

0x4ab2,	// (0x00050b44) grid_imed_line_width_pane

0xad2f,	// (0x00056dc1) vid4_indicators_pane_g4

0xe669,	// (0x0005a6fb) cell_imed_line_width_pane_ParamLimits

0xe669,	// (0x0005a6fb) cell_imed_line_width_pane

0xe67d,	// (0x0005a70f) cell_imed_line_width_pane_g1

0x44ff,	// (0x00050591) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0005bb89) cell_imed_line_width_pane_g

0xbdca,	// (0x00057e5c) main_vded2_pane_g1_ParamLimits

0xbdca,	// (0x00057e5c) main_vded2_pane_g1

0xbdd7,	// (0x00057e69) main_vded2_pane_g2_ParamLimits

0xbdd7,	// (0x00057e69) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0005bb8e) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0005bb8e) main_vded2_pane_g

0xbde5,	// (0x00057e77) vded2_slider_pane_ParamLimits

0xbde5,	// (0x00057e77) vded2_slider_pane

0xbdf2,	// (0x00057e84) aid_size_touch_vded2_end

0xbdfc,	// (0x00057e8e) aid_size_touch_vded2_playhead

0xe686,	// (0x0005a718) aid_size_touch_vded2_start

0xe68e,	// (0x0005a720) vded2_slider_bg_pane

0xe697,	// (0x0005a729) vded2_slider_pane_g1

0xe6a0,	// (0x0005a732) vded2_slider_pane_g2

0xbe04,	// (0x00057e96) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0005bb93) vded2_slider_pane_g

0xe6a8,	// (0x0005a73a) vded2_slider_bg_pane_g1

0xe6b1,	// (0x0005a743) vded2_slider_bg_pane_g2

0xe6ba,	// (0x0005a74c) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0005bb9a) vded2_slider_bg_pane_g

0x858f,	// (0x00054621) aid_postcard_touch_down_pane_ParamLimits

0x858f,	// (0x00054621) aid_postcard_touch_down_pane

0x859f,	// (0x00054631) aid_postcard_touch_up_pane_ParamLimits

0x859f,	// (0x00054631) aid_postcard_touch_up_pane

0x0432,	// (0x0004c4c4) main_blid2_pane

0x4190,	// (0x00050222) popup_blid2_search_window

0x0432,	// (0x0004c4c4) blid2_gps_pane

0x0432,	// (0x0004c4c4) blid2_navig_pane

0x0432,	// (0x0004c4c4) blid2_search_pane

0x0432,	// (0x0004c4c4) blid2_tripm_pane

0xbe0d,	// (0x00057e9f) blid2_search_pane_g1_ParamLimits

0xbe0d,	// (0x00057e9f) blid2_search_pane_g1

0xbe1d,	// (0x00057eaf) blid2_search_pane_t1_ParamLimits

0xbe1d,	// (0x00057eaf) blid2_search_pane_t1

0xbe2f,	// (0x00057ec1) aid_size_cell_blid2_gps_ParamLimits

0xbe2f,	// (0x00057ec1) aid_size_cell_blid2_gps

0xbe3f,	// (0x00057ed1) blid2_gps_pane_g1_ParamLimits

0xbe3f,	// (0x00057ed1) blid2_gps_pane_g1

0xbe4b,	// (0x00057edd) grid_blid2_satellite_pane_ParamLimits

0xbe4b,	// (0x00057edd) grid_blid2_satellite_pane

0xbe5b,	// (0x00057eed) blid2_navig_pane_g1_ParamLimits

0xbe5b,	// (0x00057eed) blid2_navig_pane_g1

0xbe67,	// (0x00057ef9) blid2_navig_pane_t1_ParamLimits

0xbe67,	// (0x00057ef9) blid2_navig_pane_t1

0xbe79,	// (0x00057f0b) blid2_navig_pane_t2_ParamLimits

0xbe79,	// (0x00057f0b) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0005bba1) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0005bba1) blid2_navig_pane_t

0xbe8b,	// (0x00057f1d) blid2_navig_ring_pane_ParamLimits

0xbe8b,	// (0x00057f1d) blid2_navig_ring_pane

0xbe9b,	// (0x00057f2d) blid2_speed_pane_ParamLimits

0xbe9b,	// (0x00057f2d) blid2_speed_pane

0xbea7,	// (0x00057f39) blid2_tripm_pane_g1_ParamLimits

0xbea7,	// (0x00057f39) blid2_tripm_pane_g1

0xbeb7,	// (0x00057f49) blid2_tripm_pane_g2_ParamLimits

0xbeb7,	// (0x00057f49) blid2_tripm_pane_g2

0xbec3,	// (0x00057f55) blid2_tripm_pane_g3_ParamLimits

0xbec3,	// (0x00057f55) blid2_tripm_pane_g3

0xbecf,	// (0x00057f61) blid2_tripm_pane_g4_ParamLimits

0xbecf,	// (0x00057f61) blid2_tripm_pane_g4

0xbedb,	// (0x00057f6d) blid2_tripm_pane_g5_ParamLimits

0xbedb,	// (0x00057f6d) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0005bba6) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0005bba6) blid2_tripm_pane_g

0xbef7,	// (0x00057f89) blid2_tripm_pane_t1_ParamLimits

0xbef7,	// (0x00057f89) blid2_tripm_pane_t1

0xbf0b,	// (0x00057f9d) blid2_tripm_pane_t2_ParamLimits

0xbf0b,	// (0x00057f9d) blid2_tripm_pane_t2

0xbf1f,	// (0x00057fb1) blid2_tripm_pane_t3_ParamLimits

0xbf1f,	// (0x00057fb1) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0005bbb3) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0005bbb3) blid2_tripm_pane_t

0xbf51,	// (0x00057fe3) cell_blid2_satellite_pane_ParamLimits

0xbf51,	// (0x00057fe3) cell_blid2_satellite_pane

0xbf6b,	// (0x00057ffd) cell_blid2_satellite_pane_g1

0xe6c3,	// (0x0005a755) cell_blid2_satellite_pane_t1

0x45d3,	// (0x00050665) blid2_speed_pane_g1

0xe6d1,	// (0x0005a763) blid2_speed_pane_t1

0xe6df,	// (0x0005a771) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0005bbbc) blid2_speed_pane_t

0x45d3,	// (0x00050665) blid2_navig_ring_pane_g1

0xbf74,	// (0x00058006) blid2_navig_ring_pane_g2

0xbf7c,	// (0x0005800e) blid2_navig_ring_pane_g3

0xbf84,	// (0x00058016) blid2_navig_ring_pane_g4

0xbf8c,	// (0x0005801e) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0005bbc1) blid2_navig_ring_pane_g

0x0432,	// (0x0004c4c4) bg_popup_window_pane_cp011

0xe6ed,	// (0x0005a77f) popup_blid2_search_window_g1

0xe6f5,	// (0x0005a787) popup_blid2_search_window_t1

0xe703,	// (0x0005a795) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0005bbcc) popup_blid2_search_window_t

0x25ac,	// (0x0004e63e) main_browser_pane_g1

0x22ad,	// (0x0004e33f) main_browser_pane_ParamLimits

0xacf7,	// (0x00056d89) bg_button_pane_cp011_ParamLimits

0xafa6,	// (0x00057038) cell_vitu2_function_pane_g1_ParamLimits

0x4182,	// (0x00050214) bg_popup_sub_pane_cp22_ParamLimits

0xb8c1,	// (0x00057953) input_focus_pane_cp08_ParamLimits

0xb8d8,	// (0x0005796a) popup_vitu2_query_button_pane_ParamLimits

0xb8d8,	// (0x0005796a) popup_vitu2_query_button_pane

0xb8e9,	// (0x0005797b) popup_vitu2_query_input_button_pane

0xe3ab,	// (0x0005a43d) popup_vitu2_query_window_g1_ParamLimits

0xb8f3,	// (0x00057985) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0005bacd) popup_vitu2_query_window_g_ParamLimits

0x0432,	// (0x0004c4c4) bg_button_pane_cp026

0xbf94,	// (0x00058026) popup_vitu2_query_input_button_pane_g1

0x0432,	// (0x0004c4c4) bg_button_pane_cp025

0xe711,	// (0x0005a7a3) popup_vitu2_query_button_pane_t1

0x96e9,	// (0x0005577b) main_mp3_pane_t6

0x96f9,	// (0x0005578b) popup_slider_window_cp01

0xac18,	// (0x00056caa) cam4_battery_pane

0xad05,	// (0x00056d97) cam4_battery_pane_cp02

0xbd33,	// (0x00057dc5) cam4_battery_pane_cp01

0xbd33,	// (0x00057dc5) cam4_battery_pane_cp03

0xdfe2,	// (0x0005a074) cam4_battery_pane_g1

0x45d3,	// (0x00050665) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0005bbd1) cam4_battery_pane_g

0x4495,	// (0x00050527) popup_blid_sat_info2_window_t11

0x7e37,	// (0x00053ec9) aid_size_touch_mv_arrow_left_ParamLimits

0x7e62,	// (0x00053ef4) aid_size_touch_mv_arrow_right_ParamLimits

0x2c95,	// (0x0004ed27) navi_pane_g1_ParamLimits

0x7e8b,	// (0x00053f1d) navi_pane_g2_ParamLimits

0x7eb9,	// (0x00053f4b) navi_pane_g3_ParamLimits

0xf409,	// (0x0005b49b) navi_pane_g_ParamLimits

0x7f13,	// (0x00053fa5) navi_pane_mv_t1_ParamLimits

0xa1bd,	// (0x0005624f) grid_imed_effect_pane_ParamLimits

0x6a7b,	// (0x00052b0d) aid_placing_vt_slider_lsc

0x24fd,	// (0x0004e58f) aid_placing_vt_slider_prt

0x361c,	// (0x0004f6ae) bg_tb_trans_pane_cp01_ParamLimits

0x475a,	// (0x000507ec) popup_image_details_window_g1_ParamLimits

0x476d,	// (0x000507ff) popup_image_details_window_g2_ParamLimits

0x4782,	// (0x00050814) popup_image_details_window_g3_ParamLimits

0x4782,	// (0x00050814) popup_image_details_window_g3

0xf73c,	// (0x0005b7ce) popup_image_details_window_g_ParamLimits

0x4796,	// (0x00050828) popup_image_details_window_t1_ParamLimits

0x47a8,	// (0x0005083a) popup_image_details_window_t2_ParamLimits

0x47c1,	// (0x00050853) popup_image_details_window_t3_ParamLimits

0x47d5,	// (0x00050867) popup_image_details_window_t4_ParamLimits

0x47f0,	// (0x00050882) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0005b7d5) popup_image_details_window_t_ParamLimits

0xbc4a,	// (0x00057cdc) cl_header_name_pane_ParamLimits

0xbc4a,	// (0x00057cdc) cl_header_name_pane

0xbf9c,	// (0x0005802e) cl_header_name_pane_t1_ParamLimits

0xbf9c,	// (0x0005802e) cl_header_name_pane_t1

0xbfb3,	// (0x00058045) cl_header_name_pane_t2_ParamLimits

0xbfb3,	// (0x00058045) cl_header_name_pane_t2

0xbfdd,	// (0x0005806f) cl_header_name_pane_t3_ParamLimits

0xbfdd,	// (0x0005806f) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0005bbd6) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0005bbd6) cl_header_name_pane_t

0x7ee4,	// (0x00053f76) navi_pane_mv_g2_ParamLimits

0xe112,	// (0x0005a1a4) field_vitu2_entry_pane_g1_ParamLimits

0xe11e,	// (0x0005a1b0) field_vitu2_entry_pane_g2_ParamLimits

0xe12a,	// (0x0005a1bc) field_vitu2_entry_pane_g3_ParamLimits

0xe12a,	// (0x0005a1bc) field_vitu2_entry_pane_g3

0xf93a,	// (0x0005b9cc) field_vitu2_entry_pane_g_ParamLimits

0xaf36,	// (0x00056fc8) cell_vitu2_itu_pane_g1_ParamLimits

0xaf46,	// (0x00056fd8) cell_vitu2_itu_pane_g2_ParamLimits

0xaf46,	// (0x00056fd8) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0005b9d8) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0005b9d8) cell_vitu2_itu_pane_g

0xacf7,	// (0x00056d89) bg_vkb2_func_pane_cp05_ParamLimits

0xacf7,	// (0x00056d89) bg_vkb2_func_pane_cp05

0xacf7,	// (0x00056d89) bg_vkb2_func_pane_cp03

0xacf7,	// (0x00056d89) bg_vkb2_func_pane_cp04

0xacf7,	// (0x00056d89) bg_vkb2_func_pane_cp10_ParamLimits

0xacf7,	// (0x00056d89) bg_vkb2_func_pane_cp10

0xbbec,	// (0x00057c7e) bg_vkb2_func_pane_cp08

0xbbd2,	// (0x00057c64) bg_vkb2_func_pane_cp06

0xbbe0,	// (0x00057c72) bg_vkb2_func_pane_cp07

0xe61f,	// (0x0005a6b1) bg_vkb2_func_pane_cp11_ParamLimits

0xe61f,	// (0x0005a6b1) bg_vkb2_func_pane_cp11

0xe634,	// (0x0005a6c6) bg_vkb2_func_pane_cp12_ParamLimits

0xe634,	// (0x0005a6c6) bg_vkb2_func_pane_cp12

0x0432,	// (0x0004c4c4) bg_vkb2_func_pane_cp09

0xe14a,	// (0x0005a1dc) bg_vkb2_func_pane_g1

0x26bd,	// (0x0004e74f) bg_vkb2_func_pane_g2

0xe152,	// (0x0005a1e4) bg_vkb2_func_pane_g3

0xe15a,	// (0x0005a1ec) bg_vkb2_func_pane_g4

0xe36e,	// (0x0005a400) bg_vkb2_func_pane_g5

0xe172,	// (0x0005a204) bg_vkb2_func_pane_g6

0xe17a,	// (0x0005a20c) bg_vkb2_func_pane_g7

0xe16a,	// (0x0005a1fc) bg_vkb2_func_pane_g8

0x269d,	// (0x0004e72f) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0005bbdd) bg_vkb2_func_pane_g

0xbee9,	// (0x00057f7b) blid2_tripm_pane_g6_ParamLimits

0xbee9,	// (0x00057f7b) blid2_tripm_pane_g6

0xdf9c,	// (0x0005a02e) mp4_progress_pane_g1

0xbf45,	// (0x00057fd7) blid2_tripm_values_pane_ParamLimits

0xbf45,	// (0x00057fd7) blid2_tripm_values_pane

0xc002,	// (0x00058094) blid2_tripm_values_pane_t1

0xc010,	// (0x000580a2) blid2_tripm_values_pane_t2

0xc01e,	// (0x000580b0) blid2_tripm_values_pane_t3

0xc02c,	// (0x000580be) blid2_tripm_values_pane_t4

0xc03a,	// (0x000580cc) blid2_tripm_values_pane_t5

0xc048,	// (0x000580da) blid2_tripm_values_pane_t6

0xc056,	// (0x000580e8) blid2_tripm_values_pane_t7

0xc064,	// (0x000580f6) blid2_tripm_values_pane_t8

0xc072,	// (0x00058104) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0005bbf0) blid2_tripm_values_pane_t

0x6abb,	// (0x00052b4d) call_video_pane_t1_ParamLimits

0x6adc,	// (0x00052b6e) call_video_pane_t2_ParamLimits

0xf292,	// (0x0005b324) call_video_pane_t_ParamLimits

0x8450,	// (0x000544e2) msg_header_pane_g1_ParamLimits

0x2eb0,	// (0x0004ef42) msg_header_pane_g2_ParamLimits

0x2eb0,	// (0x0004ef42) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0005b53e) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0005b53e) msg_header_pane_g

0x22ad,	// (0x0004e33f) main_clock2_pane_ParamLimits

0x9f42,	// (0x00055fd4) grid_clock2_toolbar_pane_ParamLimits

0x9f42,	// (0x00055fd4) grid_clock2_toolbar_pane

0x9f42,	// (0x00055fd4) listscroll_clock2_pane_ParamLimits

0x9f42,	// (0x00055fd4) listscroll_clock2_pane

0x9ff0,	// (0x00056082) main_clock2_pane_t3_ParamLimits

0x9ff0,	// (0x00056082) main_clock2_pane_t3

0xa002,	// (0x00056094) main_clock2_pane_t4_ParamLimits

0xa002,	// (0x00056094) main_clock2_pane_t4

0xe71f,	// (0x0005a7b1) cell_clock2_toolbar_pane

0xe727,	// (0x0005a7b9) cell_clock2_toolbar_pane_cp01

0xe727,	// (0x0005a7b9) cell_clock2_toolbar_pane_cp02

0xe72f,	// (0x0005a7c1) cell_clock2_toolbar_pane_cp03

0xe737,	// (0x0005a7c9) list_clock2_pane

0x2be8,	// (0x0004ec7a) scroll_pane_cp10

0xe73f,	// (0x0005a7d1) list_single_clock2_pane_ParamLimits

0xe73f,	// (0x0005a7d1) list_single_clock2_pane

0x2d35,	// (0x0004edc7) list_highlight_pane_cp08

0xe74c,	// (0x0005a7de) list_single_clock2_pane_t1

0xe75a,	// (0x0005a7ec) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0005bc03) list_single_clock2_pane_t

0x0432,	// (0x0004c4c4) bg_button_pane_cp10

0xe768,	// (0x0005a7fa) cell_clock2_toolbar_pane_g1

0x84f1,	// (0x00054583) aid_main_viewer_pane_g1_ParamLimits

0x84f1,	// (0x00054583) aid_main_viewer_pane_g1

0x84fd,	// (0x0005458f) aid_main_viewer_pane_g2_ParamLimits

0x84fd,	// (0x0005458f) aid_main_viewer_pane_g2

0x8509,	// (0x0005459b) aid_main_viewer_pane_g3_ParamLimits

0x8509,	// (0x0005459b) aid_main_viewer_pane_g3

0x851a,	// (0x000545ac) aid_main_viewer_pane_g4_ParamLimits

0x851a,	// (0x000545ac) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0005b54f) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0005b54f) aid_main_viewer_pane_g

0x8caa,	// (0x00054d3c) main_calc_pane_ParamLimits

0x8cb7,	// (0x00054d49) main_dialer2_pane_ParamLimits

0x0432,	// (0x0004c4c4) main_cam6_pane

0x0432,	// (0x0004c4c4) main_vid6_pane

0x9f4e,	// (0x00055fe0) listscroll_gen_pane_cp06_ParamLimits

0x9f4e,	// (0x00055fe0) listscroll_gen_pane_cp06

0xa014,	// (0x000560a6) main_clock2_pane_t5_ParamLimits

0xa014,	// (0x000560a6) main_clock2_pane_t5

0xa063,	// (0x000560f5) aid_call2_pane_cp10_ParamLimits

0xa075,	// (0x00056107) aid_call_pane_cp10_ParamLimits

0x2c6a,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2c6a,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa087,	// (0x00056119) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa087,	// (0x00056119) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2c6a,	// (0x0004ecfc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0005b885) popup_clock_analogue_window_cp10_g_ParamLimits

0xa09d,	// (0x0005612f) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa87b,	// (0x0005690d) cell_dialer2_keypad_pane_g2_ParamLimits

0xa87b,	// (0x0005690d) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0005b96b) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0005b96b) cell_dialer2_keypad_pane_g

0xa897,	// (0x00056929) cell_dialer2_keypad_pane_t1

0xb26c,	// (0x000572fe) main_cset_text2_pane_ParamLimits

0xb26c,	// (0x000572fe) main_cset_text2_pane

0xe587,	// (0x0005a619) area_vitu2_query_pane_g1_ParamLimits

0xbb71,	// (0x00057c03) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0005bb20) area_vitu2_query_pane_g_ParamLimits

0x0d2c,	// (0x0004cdbe) area_vitu2_query_pane_t7_ParamLimits

0x0d2c,	// (0x0004cdbe) area_vitu2_query_pane_t7

0xbbd2,	// (0x00057c64) bg_button_pane_cp018_ParamLimits

0xbbe0,	// (0x00057c72) bg_button_pane_cp021_ParamLimits

0xbbec,	// (0x00057c7e) bg_button_pane_cp022_ParamLimits

0xbbec,	// (0x00057c7e) bg_vkb2_func_pane_cp08_ParamLimits

0xbbd2,	// (0x00057c64) bg_vkb2_func_pane_cp06_ParamLimits

0xbbe0,	// (0x00057c72) bg_vkb2_func_pane_cp07_ParamLimits

0xbbfd,	// (0x00057c8f) input_focus_pane_cp09_ParamLimits

0xc080,	// (0x00058112) cam6_autofocus_pane_ParamLimits

0xc080,	// (0x00058112) cam6_autofocus_pane

0xc0a2,	// (0x00058134) cam6_image_uncrop_pane_ParamLimits

0xc0a2,	// (0x00058134) cam6_image_uncrop_pane

0xc0cf,	// (0x00058161) cam6_indi_pane_ParamLimits

0xc0cf,	// (0x00058161) cam6_indi_pane

0xc0e9,	// (0x0005817b) cam6_mode_pane_ParamLimits

0xc0e9,	// (0x0005817b) cam6_mode_pane

0xc0fd,	// (0x0005818f) cam6_timer_pane_ParamLimits

0xc0fd,	// (0x0005818f) cam6_timer_pane

0xc109,	// (0x0005819b) cam6_zoom_pane_ParamLimits

0xc109,	// (0x0005819b) cam6_zoom_pane

0xc121,	// (0x000581b3) cam6_mode_pane_g1_ParamLimits

0xc121,	// (0x000581b3) cam6_mode_pane_g1

0xc12d,	// (0x000581bf) cam6_mode_pane_g2_ParamLimits

0xc12d,	// (0x000581bf) cam6_mode_pane_g2

0xc139,	// (0x000581cb) cam6_mode_pane_g3_ParamLimits

0xc139,	// (0x000581cb) cam6_mode_pane_g3

0xc145,	// (0x000581d7) cam6_mode_pane_g4_ParamLimits

0xc145,	// (0x000581d7) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0005bc08) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0005bc08) cam6_mode_pane_g

0xdfec,	// (0x0005a07e) bg_tb_trans_pane_cp08_ParamLimits

0xdfec,	// (0x0005a07e) bg_tb_trans_pane_cp08

0xe770,	// (0x0005a802) cam6_battery_pane_ParamLimits

0xe770,	// (0x0005a802) cam6_battery_pane

0xe786,	// (0x0005a818) cam6_indi_pane_g1_ParamLimits

0xe786,	// (0x0005a818) cam6_indi_pane_g1

0xe798,	// (0x0005a82a) cam6_indi_pane_g2_ParamLimits

0xe798,	// (0x0005a82a) cam6_indi_pane_g2

0xe7aa,	// (0x0005a83c) cam6_indi_pane_g3_ParamLimits

0xe7aa,	// (0x0005a83c) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0005bc11) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0005bc11) cam6_indi_pane_g

0xe7bc,	// (0x0005a84e) cam6_indi_pane_t1_ParamLimits

0xe7bc,	// (0x0005a84e) cam6_indi_pane_t1

0xad6c,	// (0x00056dfe) cam6_autofocus_pane_g1

0xad64,	// (0x00056df6) cam6_autofocus_pane_g2

0xad7c,	// (0x00056e0e) cam6_autofocus_pane_g3

0xad74,	// (0x00056e06) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0005bc18) cam6_autofocus_pane_g

0xe7e2,	// (0x0005a874) cam6_timer_pane_g1

0xe7ea,	// (0x0005a87c) cam6_timer_pane_t1

0xe7f8,	// (0x0005a88a) cam6_zoom_cont_pane

0xe800,	// (0x0005a892) cam6_zoom_pane_g1

0xe808,	// (0x0005a89a) cam6_zoom_pane_g2

0xc151,	// (0x000581e3) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0005bc21) cam6_zoom_pane_g

0x45d3,	// (0x00050665) cam6_battery_pane_g1

0x45d3,	// (0x00050665) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0005b792) cam6_battery_pane_g

0xe810,	// (0x0005a8a2) cam6_zoom_cont_pane_g1

0xe819,	// (0x0005a8ab) cam6_zoom_cont_pane_g2

0xe822,	// (0x0005a8b4) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0005bc28) cam6_zoom_cont_pane_g

0xc16b,	// (0x000581fd) cam6_mode_pane_cp_ParamLimits

0xc16b,	// (0x000581fd) cam6_mode_pane_cp

0xc17f,	// (0x00058211) cam6_zoom_pane_cp_ParamLimits

0xc17f,	// (0x00058211) cam6_zoom_pane_cp

0xc197,	// (0x00058229) vid6_image_uncrop_cif_pane_ParamLimits

0xc197,	// (0x00058229) vid6_image_uncrop_cif_pane

0xc1c3,	// (0x00058255) vid6_image_uncrop_nhd_pane_ParamLimits

0xc1c3,	// (0x00058255) vid6_image_uncrop_nhd_pane

0xc1e0,	// (0x00058272) vid6_image_uncrop_vga_pane_ParamLimits

0xc1e0,	// (0x00058272) vid6_image_uncrop_vga_pane

0xc1ff,	// (0x00058291) vid6_image_uncrop_wvga_pane_ParamLimits

0xc1ff,	// (0x00058291) vid6_image_uncrop_wvga_pane

0xc21c,	// (0x000582ae) vid6_indi_pane_ParamLimits

0xc21c,	// (0x000582ae) vid6_indi_pane

0xdfec,	// (0x0005a07e) bg_tb_trans_pane_cp09_ParamLimits

0xdfec,	// (0x0005a07e) bg_tb_trans_pane_cp09

0xe83a,	// (0x0005a8cc) cam6_battery_pane_cp_ParamLimits

0xe83a,	// (0x0005a8cc) cam6_battery_pane_cp

0xe846,	// (0x0005a8d8) vid6_indi_pane_g1_ParamLimits

0xe846,	// (0x0005a8d8) vid6_indi_pane_g1

0xe858,	// (0x0005a8ea) vid6_indi_pane_g2_ParamLimits

0xe858,	// (0x0005a8ea) vid6_indi_pane_g2

0xe86a,	// (0x0005a8fc) vid6_indi_pane_g3_ParamLimits

0xe86a,	// (0x0005a8fc) vid6_indi_pane_g3

0xe87f,	// (0x0005a911) vid6_indi_pane_g4_ParamLimits

0xe87f,	// (0x0005a911) vid6_indi_pane_g4

0xe894,	// (0x0005a926) vid6_indi_pane_g5_ParamLimits

0xe894,	// (0x0005a926) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0005bc2f) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0005bc2f) vid6_indi_pane_g

0xe8ae,	// (0x0005a940) vid6_indi_pane_t1_ParamLimits

0xe8ae,	// (0x0005a940) vid6_indi_pane_t1

0xe8c4,	// (0x0005a956) vid6_indi_pane_t2_ParamLimits

0xe8c4,	// (0x0005a956) vid6_indi_pane_t2

0xe8ec,	// (0x0005a97e) vid6_indi_pane_t3_ParamLimits

0xe8ec,	// (0x0005a97e) vid6_indi_pane_t3

0xe914,	// (0x0005a9a6) vid6_indi_pane_t4_ParamLimits

0xe914,	// (0x0005a9a6) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0005bc3a) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0005bc3a) vid6_indi_pane_t

0xe938,	// (0x0005a9ca) wait_bar_pane_cp08

0xc23f,	// (0x000582d1) main_cset_text2_pane_t1_ParamLimits

0xc23f,	// (0x000582d1) main_cset_text2_pane_t1

0xc159,	// (0x000581eb) listscroll_gen_pane_cp06_t1_ParamLimits

0xc159,	// (0x000581eb) listscroll_gen_pane_cp06_t1

0x0432,	// (0x0004c4c4) main_cam6_set_pane

0xac0a,	// (0x00056c9c) bg_tb_trans_pane_cp06_ParamLimits

0xac20,	// (0x00056cb2) cam4_indicators_pane_g1_ParamLimits

0xac31,	// (0x00056cc3) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0005b9a8) cam4_indicators_pane_g_ParamLimits

0xac4f,	// (0x00056ce1) cam4_indicators_pane_t1_ParamLimits

0xacf7,	// (0x00056d89) bg_tb_trans_pane_cp07_ParamLimits

0xac20,	// (0x00056cb2) vid4_indicators_pane_g1_ParamLimits

0xad0d,	// (0x00056d9f) vid4_indicators_pane_g2_ParamLimits

0xad1e,	// (0x00056db0) vid4_indicators_pane_g3_ParamLimits

0xad2f,	// (0x00056dc1) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0005b9ba) vid4_indicators_pane_g_ParamLimits

0xad4b,	// (0x00056ddd) vid4_indicators_pane_t1_ParamLimits

0xbd3b,	// (0x00057dcd) vid4_progress_pane_g1_ParamLimits

0xbd4b,	// (0x00057ddd) vid4_progress_pane_g2_ParamLimits

0x28de,	// (0x0004e970) vid4_progress_pane_g3_ParamLimits

0xac31,	// (0x00056cc3) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0005bb6b) vid4_progress_pane_g_ParamLimits

0xbd5b,	// (0x00057ded) vid4_progress_pane_t1_ParamLimits

0xbd70,	// (0x00057e02) vid4_progress_pane_t2_ParamLimits

0xbd86,	// (0x00057e18) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0005bb76) vid4_progress_pane_t_ParamLimits

0xbd9b,	// (0x00057e2d) wait_bar_pane_cp07_ParamLimits

0xc27d,	// (0x0005830f) main_cam6_set_pane_g2_ParamLimits

0xc27d,	// (0x0005830f) main_cam6_set_pane_g2

0xc289,	// (0x0005831b) main_cset6_listscroll_pane_ParamLimits

0xc289,	// (0x0005831b) main_cset6_listscroll_pane

0xc2b4,	// (0x00058346) main_cset6_slider_pane_ParamLimits

0xc2b4,	// (0x00058346) main_cset6_slider_pane

0xc2c0,	// (0x00058352) main_cset6_text2_pane_ParamLimits

0xc2c0,	// (0x00058352) main_cset6_text2_pane

0xe947,	// (0x0005a9d9) main_cset6_text_pane

0xe94f,	// (0x0005a9e1) main_cset_list_pane_copy1_ParamLimits

0xe94f,	// (0x0005a9e1) main_cset_list_pane_copy1

0xe95f,	// (0x0005a9f1) scroll_pane_cp028_copy1

0xc2d3,	// (0x00058365) cset_list_set_pane_copy1

0xc2ed,	// (0x0005837f) aid_position_infowindow_above_copy1

0xc2f5,	// (0x00058387) aid_position_infowindow_below_copy1

0xc2fd,	// (0x0005838f) cset_list_set_pane_g1_copy1

0x0e33,	// (0x0004cec5) cset_list_set_pane_g3_copy1_ParamLimits

0x0e33,	// (0x0004cec5) cset_list_set_pane_g3_copy1

0xb574,	// (0x00057606) cset_list_set_pane_t1_copy1_ParamLimits

0xb574,	// (0x00057606) cset_list_set_pane_t1_copy1

0x361c,	// (0x0004f6ae) list_highlight_pane_cp021_copy1_ParamLimits

0x361c,	// (0x0004f6ae) list_highlight_pane_cp021_copy1

0xe968,	// (0x0005a9fa) cset6_slider_pane_ParamLimits

0xe968,	// (0x0005a9fa) cset6_slider_pane

0xe994,	// (0x0005aa26) main_cset6_slider_pane_g1_ParamLimits

0xe994,	// (0x0005aa26) main_cset6_slider_pane_g1

0xc305,	// (0x00058397) main_cset6_slider_pane_g2_ParamLimits

0xc305,	// (0x00058397) main_cset6_slider_pane_g2

0xe279,	// (0x0005a30b) main_cset6_slider_pane_g3_ParamLimits

0xe279,	// (0x0005a30b) main_cset6_slider_pane_g3

0xc32d,	// (0x000583bf) main_cset6_slider_pane_g4_ParamLimits

0xc32d,	// (0x000583bf) main_cset6_slider_pane_g4

0xc339,	// (0x000583cb) main_cset6_slider_pane_g5_ParamLimits

0xc339,	// (0x000583cb) main_cset6_slider_pane_g5

0xe279,	// (0x0005a30b) main_cset6_slider_pane_g7_ParamLimits

0xe279,	// (0x0005a30b) main_cset6_slider_pane_g7

0xe285,	// (0x0005a317) main_cset6_slider_pane_g8_ParamLimits

0xe285,	// (0x0005a317) main_cset6_slider_pane_g8

0xc347,	// (0x000583d9) main_cset6_slider_pane_g9_ParamLimits

0xc347,	// (0x000583d9) main_cset6_slider_pane_g9

0xc353,	// (0x000583e5) main_cset6_slider_pane_g10_ParamLimits

0xc353,	// (0x000583e5) main_cset6_slider_pane_g10

0xc32d,	// (0x000583bf) main_cset6_slider_pane_g11_ParamLimits

0xc32d,	// (0x000583bf) main_cset6_slider_pane_g11

0xc35f,	// (0x000583f1) main_cset6_slider_pane_g12_ParamLimits

0xc35f,	// (0x000583f1) main_cset6_slider_pane_g12

0xc36b,	// (0x000583fd) main_cset6_slider_pane_g13_ParamLimits

0xc36b,	// (0x000583fd) main_cset6_slider_pane_g13

0xc379,	// (0x0005840b) main_cset6_slider_pane_g14_ParamLimits

0xc379,	// (0x0005840b) main_cset6_slider_pane_g14

0xc387,	// (0x00058419) main_cset6_slider_pane_g15_ParamLimits

0xc387,	// (0x00058419) main_cset6_slider_pane_g15

0xc339,	// (0x000583cb) main_cset6_slider_pane_g16_ParamLimits

0xc339,	// (0x000583cb) main_cset6_slider_pane_g16

0xc39f,	// (0x00058431) main_cset6_slider_pane_g17_ParamLimits

0xc39f,	// (0x00058431) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0005bc43) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0005bc43) main_cset6_slider_pane_g

0xe9bc,	// (0x0005aa4e) main_cset6_slider_pane_t1_ParamLimits

0xe9bc,	// (0x0005aa4e) main_cset6_slider_pane_t1

0xc3ad,	// (0x0005843f) main_cset6_slider_pane_t2_ParamLimits

0xc3ad,	// (0x0005843f) main_cset6_slider_pane_t2

0xc3d8,	// (0x0005846a) main_cset6_slider_pane_t3_ParamLimits

0xc3d8,	// (0x0005846a) main_cset6_slider_pane_t3

0xc403,	// (0x00058495) main_cset6_slider_pane_t4_ParamLimits

0xc403,	// (0x00058495) main_cset6_slider_pane_t4

0xc430,	// (0x000584c2) main_cset6_slider_pane_t5_ParamLimits

0xc430,	// (0x000584c2) main_cset6_slider_pane_t5

0xe9fd,	// (0x0005aa8f) main_cset6_slider_pane_t7_ParamLimits

0xe9fd,	// (0x0005aa8f) main_cset6_slider_pane_t7

0xc45d,	// (0x000584ef) main_cset6_slider_pane_t8_ParamLimits

0xc45d,	// (0x000584ef) main_cset6_slider_pane_t8

0xc481,	// (0x00058513) main_cset6_slider_pane_t9_ParamLimits

0xc481,	// (0x00058513) main_cset6_slider_pane_t9

0xc4a5,	// (0x00058537) main_cset6_slider_pane_t10_ParamLimits

0xc4a5,	// (0x00058537) main_cset6_slider_pane_t10

0xc4c9,	// (0x0005855b) main_cset6_slider_pane_t11_ParamLimits

0xc4c9,	// (0x0005855b) main_cset6_slider_pane_t11

0xea33,	// (0x0005aac5) main_cset6_slider_pane_t14_ParamLimits

0xea33,	// (0x0005aac5) main_cset6_slider_pane_t14

0xea6c,	// (0x0005aafe) main_cset6_slider_pane_t15_ParamLimits

0xea6c,	// (0x0005aafe) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0005bc68) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0005bc68) main_cset6_slider_pane_t

0xeaa5,	// (0x0005ab37) cset_slider_pane_g1_copy1

0xeaae,	// (0x0005ab40) cset_slider_pane_g2_copy1

0xeab7,	// (0x0005ab49) cset_slider_pane_g3_copy1

0x0432,	// (0x0004c4c4) bg_popup_sub_pane_cp011_copy1

0xe3b7,	// (0x0005a449) main_cset_text_pane_g1_copy1

0xe3bf,	// (0x0005a451) main_cset_text_pane_t1_copy1

0xe3cd,	// (0x0005a45f) main_cset_text_pane_t2_copy1

0xe3db,	// (0x0005a46d) main_cset_text_pane_t3_copy1

0xe3e9,	// (0x0005a47b) main_cset_text_pane_t4_copy1

0xe3f7,	// (0x0005a489) main_cset_text_pane_t5_copy1

0xe405,	// (0x0005a497) main_cset_text_pane_t6_copy1

0xe413,	// (0x0005a4a5) main_cset_text_pane_t7_copy1

0xc4ef,	// (0x00058581) main_cset_text2_pane_t1_copy1

0x0432,	// (0x0004c4c4) main_ncimui_pane

0x8cf6,	// (0x00054d88) popup_query_ncimui_window_ParamLimits

0x8cf6,	// (0x00054d88) popup_query_ncimui_window

0x08c9,	// (0x0004c95b) field_cale_ev2_pane_g4_ParamLimits

0x08c9,	// (0x0004c95b) field_cale_ev2_pane_g4

0xa599,	// (0x0005662b) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa599,	// (0x0005662b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0005b946) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0005b946) cell_video_dialer_keypad_pane_g

0xa5b1,	// (0x00056643) cell_video_dialer_keypad_pane_t1

0x0432,	// (0x0004c4c4) bg_popup_window_pane_cp012

0x2aaa,	// (0x0004eb3c) heading_pane_cp06

0xeaea,	// (0x0005ab7c) ncim_query_content_pane

0x0432,	// (0x0004c4c4) bg_popup_heading_pane_cp01

0xeaf2,	// (0x0005ab84) ncim_heading_pane_t1

0xeb00,	// (0x0005ab92) ncim_indicator_popup_pane

0xeb12,	// (0x0005aba4) ncim_query_button_pane

0xeb26,	// (0x0005abb8) ncim_query_content_pane_t1

0xeb38,	// (0x0005abca) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0005bca7) ncim_query_content_pane_t

0xeb72,	// (0x0005ac04) ncim_query_list_pane

0xeb84,	// (0x0005ac16) ncim_query_popup_pane

0xeb00,	// (0x0005ab92) ncim_indicator_popup_pane_ParamLimits

0xc61c,	// (0x000586ae) ncim_query_content_pane_g1_ParamLimits

0xc61c,	// (0x000586ae) ncim_query_content_pane_g1

0xeb26,	// (0x0005abb8) ncim_query_content_pane_t1_ParamLimits

0xeb38,	// (0x0005abca) ncim_query_content_pane_t2_ParamLimits

0xc628,	// (0x000586ba) ncim_query_content_pane_t3_ParamLimits

0xc628,	// (0x000586ba) ncim_query_content_pane_t3

0xc645,	// (0x000586d7) ncim_query_content_pane_t4_ParamLimits

0xc645,	// (0x000586d7) ncim_query_content_pane_t4

0xc662,	// (0x000586f4) ncim_query_content_pane_t5_ParamLimits

0xc662,	// (0x000586f4) ncim_query_content_pane_t5

0xeb4a,	// (0x0005abdc) ncim_query_content_pane_t6_ParamLimits

0xeb4a,	// (0x0005abdc) ncim_query_content_pane_t6

0xfc15,	// (0x0005bca7) ncim_query_content_pane_t_ParamLimits

0xeb72,	// (0x0005ac04) ncim_query_list_pane_ParamLimits

0xeb84,	// (0x0005ac16) ncim_query_popup_pane_ParamLimits

0xeb98,	// (0x0005ac2a) wait_bar_pane_cp04

0x0432,	// (0x0004c4c4) input_focus_pane_cp011

0xeba0,	// (0x0005ac32) ncim_query_popup_pane_t1

0xebae,	// (0x0005ac40) ncim_list_query_list_pane_ParamLimits

0xebae,	// (0x0005ac40) ncim_list_query_list_pane

0x0432,	// (0x0004c4c4) bg_button_pane_cp027

0xebc1,	// (0x0005ac53) ncim_query_button_pane_g1

0x0432,	// (0x0004c4c4) list_highlight_pane_cp012

0xebcb,	// (0x0005ac5d) ncim_list_query_list_pane_g1

0xebd3,	// (0x0005ac65) ncim_list_query_list_pane_t1

0xac40,	// (0x00056cd2) cam4_indicators_pane_g3_ParamLimits

0xac40,	// (0x00056cd2) cam4_indicators_pane_g3

0xad3b,	// (0x00056dcd) vid4_indicators_pane_g5_ParamLimits

0xad3b,	// (0x00056dcd) vid4_indicators_pane_g5

0xac40,	// (0x00056cd2) vid4_progress_pane_g5_ParamLimits

0xac40,	// (0x00056cd2) vid4_progress_pane_g5

0xc535,	// (0x000585c7) main_ncimui_pane_g1

0xc58b,	// (0x0005861d) ncimui_group_query_pane_ParamLimits

0xc58b,	// (0x0005861d) ncimui_group_query_pane

0xc5c7,	// (0x00058659) ncimui_list_pane_ParamLimits

0xc5c7,	// (0x00058659) ncimui_list_pane

0xc5e8,	// (0x0005867a) ncimui_text_pane_ParamLimits

0xc5e8,	// (0x0005867a) ncimui_text_pane

0xc67f,	// (0x00058711) ncimui_text_pane_t1_ParamLimits

0xc67f,	// (0x00058711) ncimui_text_pane_t1

0xebe1,	// (0x0005ac73) ncimui_list_single_graphic_pane_ParamLimits

0xebe1,	// (0x0005ac73) ncimui_list_single_graphic_pane

0xc69e,	// (0x00058730) ncimui_query_pane_ParamLimits

0xc69e,	// (0x00058730) ncimui_query_pane

0x0432,	// (0x0004c4c4) list_highlight_pane_cp013

0xebf1,	// (0x0005ac83) ncim_list_query_list_pane_t1_copy1

0xebcb,	// (0x0005ac5d) ncim_list_single_graphic_pane_g1

0xebff,	// (0x0005ac91) ncim_query_button_pane_cp01

0xec0b,	// (0x0005ac9d) ncim_query_entry_pane_ParamLimits

0xec0b,	// (0x0005ac9d) ncim_query_entry_pane

0xec1e,	// (0x0005acb0) ncimui_query_pane_g1

0xec2a,	// (0x0005acbc) ncimui_query_pane_t1_ParamLimits

0xec2a,	// (0x0005acbc) ncimui_query_pane_t1

0x361c,	// (0x0004f6ae) input_focus_pane_cp012

0xec43,	// (0x0005acd5) ncim_query_entry_pane_t1

0x22ad,	// (0x0004e33f) main_im_pane_ParamLimits

0x361c,	// (0x0004f6ae) main_mobtv_pane_ParamLimits

0x361c,	// (0x0004f6ae) main_mobtv_pane

0xc347,	// (0x000583d9) main_cset6_slider_pane_g18_ParamLimits

0xc347,	// (0x000583d9) main_cset6_slider_pane_g18

0xc36b,	// (0x000583fd) main_cset6_slider_pane_g19_ParamLimits

0xc36b,	// (0x000583fd) main_cset6_slider_pane_g19

0xe12a,	// (0x0005a1bc) bg_main_mobtv_pane_ParamLimits

0xe12a,	// (0x0005a1bc) bg_main_mobtv_pane

0xc6b1,	// (0x00058743) main_mobtv_info_pane

0xc6bc,	// (0x0005874e) main_mobtv_loading_pane_ParamLimits

0xc6bc,	// (0x0005874e) main_mobtv_loading_pane

0xec55,	// (0x0005ace7) main_mobtv_pg_channel_list_pane

0xec5f,	// (0x0005acf1) main_mobtv_pg_hdr_pane

0xc6c9,	// (0x0005875b) main_mobtv_programe_curr_pane_ParamLimits

0xc6c9,	// (0x0005875b) main_mobtv_programe_curr_pane

0xc6d6,	// (0x00058768) main_mobtv_programe_next_pane_ParamLimits

0xc6d6,	// (0x00058768) main_mobtv_programe_next_pane

0xec68,	// (0x0005acfa) popup_mobtv_noti_window

0x45d3,	// (0x00050665) main_tv_pg_hdr_pane_g1

0xec70,	// (0x0005ad02) main_tv_pg_hdr_pane_g2

0xec78,	// (0x0005ad0a) main_tv_pg_hdr_pane_g3

0xec80,	// (0x0005ad12) main_tv_pg_hdr_pane_g4

0xec88,	// (0x0005ad1a) main_tv_pg_hdr_pane_g5

0xec92,	// (0x0005ad24) main_tv_pg_hdr_pane_g6

0xec9c,	// (0x0005ad2e) main_tv_pg_hdr_pane_g7

0xeca6,	// (0x0005ad38) main_tv_pg_hdr_pane_g8

0xecb0,	// (0x0005ad42) main_tv_pg_hdr_pane_g9

0xecba,	// (0x0005ad4c) main_tv_pg_hdr_pane_g10

0xecc4,	// (0x0005ad56) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0005bcb4) main_tv_pg_hdr_pane_g

0xecce,	// (0x0005ad60) main_tv_pg_hdr_pane_t1

0xecdc,	// (0x0005ad6e) main_tv_pg_hdr_pane_t2

0xecea,	// (0x0005ad7c) main_tv_pg_hdr_pane_t3

0xecfa,	// (0x0005ad8c) main_tv_pg_hdr_pane_t4

0xed0a,	// (0x0005ad9c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0005bccb) main_tv_pg_hdr_pane_t

0xed1a,	// (0x0005adac) single_mobtv_pg_channel_pane_ParamLimits

0xed1a,	// (0x0005adac) single_mobtv_pg_channel_pane

0xed2c,	// (0x0005adbe) single_mobtv_pg_channel_table_pane

0xed35,	// (0x0005adc7) single_mobtv_pg_channel_thumb_pane

0xed3e,	// (0x0005add0) single_tv_pg_channel_pane_g1

0xed47,	// (0x0005add9) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0005bcd6) single_tv_pg_channel_pane_g

0x483a,	// (0x000508cc) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x483a,	// (0x000508cc) bg_single_mobtv_pg_channel_thumb_pane

0xed50,	// (0x0005ade2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xed50,	// (0x0005ade2) single_mobtv_pg_channel_thumb_pane_g1

0xed5e,	// (0x0005adf0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xed5e,	// (0x0005adf0) single_mobtv_pg_channel_thumb_pane_g2

0xed6a,	// (0x0005adfc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xed6a,	// (0x0005adfc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0005bcdb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0005bcdb) single_mobtv_pg_channel_thumb_pane_g

0xed76,	// (0x0005ae08) single_mobtv_pg_channel_thumb_pane_t1

0xed84,	// (0x0005ae16) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0005bce2) single_mobtv_pg_channel_thumb_pane_t

0x45d3,	// (0x00050665) bg_single_mobtv_pg_channel_table_pane_g1

0x45d3,	// (0x00050665) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0005b792) bg_single_mobtv_pg_channel_table_pane_g

0xed92,	// (0x0005ae24) single_mobtv_pg_channel_table_pane_t1

0xeda0,	// (0x0005ae32) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0005bce7) single_mobtv_pg_channel_table_pane_t

0xc6eb,	// (0x0005877d) main_mobtv_info_pane_g1_ParamLimits

0xc6eb,	// (0x0005877d) main_mobtv_info_pane_g1

0xc707,	// (0x00058799) main_mobtv_info_pane_t1_ParamLimits

0xc707,	// (0x00058799) main_mobtv_info_pane_t1

0xc77f,	// (0x00058811) main_mobtv_info_pane_t2_ParamLimits

0xc77f,	// (0x00058811) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0005bcf1) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0005bcf1) main_mobtv_info_pane_t

0xc80e,	// (0x000588a0) wait_bar_pane_cp05

0xc820,	// (0x000588b2) main_mobtv_loading_pane_g1_ParamLimits

0xc820,	// (0x000588b2) main_mobtv_loading_pane_g1

0xc82e,	// (0x000588c0) main_mobtv_loading_pane_g2_ParamLimits

0xc82e,	// (0x000588c0) main_mobtv_loading_pane_g2

0xc83a,	// (0x000588cc) main_mobtv_loading_pane_g3_ParamLimits

0xc83a,	// (0x000588cc) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0005bcf8) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0005bcf8) main_mobtv_loading_pane_g

0xedc0,	// (0x0005ae52) main_mobtv_loading_pane_t1_ParamLimits

0xedc0,	// (0x0005ae52) main_mobtv_loading_pane_t1

0xedd8,	// (0x0005ae6a) main_mobtv_loading_pane_t2_ParamLimits

0xedd8,	// (0x0005ae6a) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0005bcff) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0005bcff) main_mobtv_loading_pane_t

0xc848,	// (0x000588da) wait_bar_pane_cp06_ParamLimits

0xc848,	// (0x000588da) wait_bar_pane_cp06

0xedfc,	// (0x0005ae8e) main_mobtv_programe_curr_pane_t1

0xee0a,	// (0x0005ae9c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0005bd04) main_mobtv_programe_curr_pane_t

0xee18,	// (0x0005aeaa) main_mobtv_programe_next_pane_t1

0xee26,	// (0x0005aeb8) main_mobtv_programe_next_pane_t2

0xee34,	// (0x0005aec6) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0005bd09) main_mobtv_programe_next_pane_t

0x0432,	// (0x0004c4c4) bg_popup_mobtv_noti_window_pane

0xee42,	// (0x0005aed4) popup_mobtv_noti_window_g1

0xee4a,	// (0x0005aedc) popup_mobtv_noti_window_t1

0xee58,	// (0x0005aeea) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0005bd10) popup_mobtv_noti_window_t

0x45d3,	// (0x00050665) bg_popup_mobtv_noti_window_pane_g1

0x0432,	// (0x0004c4c4) sc_clock_pane

0x0432,	// (0x0004c4c4) main_fs_bigclock_pane

0xbf33,	// (0x00057fc5) blid2_tripm_pane_t4_ParamLimits

0xbf33,	// (0x00057fc5) blid2_tripm_pane_t4

0xc854,	// (0x000588e6) sc_clock_pane_g1_ParamLimits

0xc854,	// (0x000588e6) sc_clock_pane_g1

0xc862,	// (0x000588f4) sc_clock_pane_t1_ParamLimits

0xc862,	// (0x000588f4) sc_clock_pane_t1

0xc875,	// (0x00058907) sc_clock_pane_t2_ParamLimits

0xc875,	// (0x00058907) sc_clock_pane_t2

0xc887,	// (0x00058919) sc_clock_pane_t3_ParamLimits

0xc887,	// (0x00058919) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0005bd15) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0005bd15) sc_clock_pane_t

0xd71b,	// (0x000597ad) main_fs_bigclock_indicator_pane_ParamLimits

0xd71b,	// (0x000597ad) main_fs_bigclock_indicator_pane

0xc925,	// (0x000589b7) main_fs_bigclock_pane_g1_ParamLimits

0xc925,	// (0x000589b7) main_fs_bigclock_pane_g1

0xd727,	// (0x000597b9) main_fs_bigclock_pane_t1_ParamLimits

0xd727,	// (0x000597b9) main_fs_bigclock_pane_t1

0xd739,	// (0x000597cb) main_fs_bigclock_pane_t2_ParamLimits

0xd739,	// (0x000597cb) main_fs_bigclock_pane_t2

0xd74b,	// (0x000597dd) main_fs_bigclock_pane_t3_ParamLimits

0xd74b,	// (0x000597dd) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0005bf14) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0005bf14) main_fs_bigclock_pane_t

0x1729,	// (0x0004d7bb) main_fs_bigclock_indicator_pane_g1

0xeb1a,	// (0x0005abac) ncim_query_content_pane_g2_ParamLimits

0xeb1a,	// (0x0005abac) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0005bca2) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0005bca2) ncim_query_content_pane_g

0xc89b,	// (0x0005892d) sc_clock_pane_t4_ParamLimits

0xc89b,	// (0x0005892d) sc_clock_pane_t4

0x361c,	// (0x0004f6ae) main_radioblah_pane

0xe09b,	// (0x0005a12d) cell_call4_button_pane_t1_copy1_ParamLimits

0xe09b,	// (0x0005a12d) cell_call4_button_pane_t1_copy1

0xc53d,	// (0x000585cf) main_ncimui_pane_t1_ParamLimits

0xc53d,	// (0x000585cf) main_ncimui_pane_t1

0xc557,	// (0x000585e9) main_ncimui_pane_t2_ParamLimits

0xc557,	// (0x000585e9) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0005bc9b) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0005bc9b) main_ncimui_pane_t

0xee66,	// (0x0005aef8) main_radioblah_anim_pane_ParamLimits

0xee66,	// (0x0005aef8) main_radioblah_anim_pane

0xee77,	// (0x0005af09) main_radioblah_info_pane_ParamLimits

0xee77,	// (0x0005af09) main_radioblah_info_pane

0xee8b,	// (0x0005af1d) main_radioblah_pane_t1_ParamLimits

0xee8b,	// (0x0005af1d) main_radioblah_pane_t1

0xeea7,	// (0x0005af39) main_radioblah_pane_t2_ParamLimits

0xeea7,	// (0x0005af39) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0005bd36) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0005bd36) main_radioblah_pane_t

0xcaa1,	// (0x00058b33) main_radioblah_rocker_ctrl_pane_ParamLimits

0xcaa1,	// (0x00058b33) main_radioblah_rocker_ctrl_pane

0xeeef,	// (0x0005af81) main_radioblah_info_pane_t1_ParamLimits

0xeeef,	// (0x0005af81) main_radioblah_info_pane_t1

0xcae6,	// (0x00058b78) main_radioblah_info_pane_t2_ParamLimits

0xcae6,	// (0x00058b78) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0005bd3f) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0005bd3f) main_radioblah_info_pane_t

0x45d3,	// (0x00050665) main_radioblah_rocker_ctrl_pane_g1

0xcb96,	// (0x00058c28) main_radioblah_rocker_ctrl_pane_g2

0xcb9e,	// (0x00058c30) main_radioblah_rocker_ctrl_pane_g3

0xcba6,	// (0x00058c38) main_radioblah_rocker_ctrl_pane_g4

0xcbae,	// (0x00058c40) main_radioblah_rocker_ctrl_pane_g5

0xcbb6,	// (0x00058c48) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0005bd48) main_radioblah_rocker_ctrl_pane_g

0xc4ef,	// (0x00058581) main_cset_text2_pane_t1_copy1_ParamLimits

0xab60,	// (0x00056bf2) cam4_image_uncrop_qvga_pane

0xacb5,	// (0x00056d47) vid4_image_uncrop_qcif_pane

0xc0c1,	// (0x00058153) cam6_image_uncrop_qvga_pane_ParamLimits

0xc0c1,	// (0x00058153) cam6_image_uncrop_qvga_pane

0xe82a,	// (0x0005a8bc) vid6_image_uncrop_qcif_pane_ParamLimits

0xe82a,	// (0x0005a8bc) vid6_image_uncrop_qcif_pane

0x0432,	// (0x0004c4c4) bg_popup_preview_window_pane_cp03

0xeac0,	// (0x0005ab52) list_cset_text2_pane

0xeac8,	// (0x0005ab5a) main_cset6_text2_pane_g1

0xead0,	// (0x0005ab62) main_cset6_text2_pane_t1

0xcbbe,	// (0x00058c50) list_cset_text2_pane_t1_ParamLimits

0xcbbe,	// (0x00058c50) list_cset_text2_pane_t1

0x361c,	// (0x0004f6ae) main_radioblah_pane_ParamLimits

0xc7fa,	// (0x0005888c) main_mobtv_info_pane_t3_ParamLimits

0xc7fa,	// (0x0005888c) main_mobtv_info_pane_t3

0xca8f,	// (0x00058b21) main_radioblah_pane_g1

0xcaba,	// (0x00058b4c) main_radioblah_info_pane_g1

0xcb3b,	// (0x00058bcd) main_radioblah_info_pane_t3_ParamLimits

0xcb3b,	// (0x00058bcd) main_radioblah_info_pane_t3

0x7892,	// (0x00053924) highlight_cell_cale_month_pane_ParamLimits

0x7892,	// (0x00053924) highlight_cell_cale_month_pane

0x0432,	// (0x0004c4c4) main_phob_fisheye_pane

0x491c,	// (0x000509ae) scroll_pane_cp0031_ParamLimits

0x491c,	// (0x000509ae) scroll_pane_cp0031

0xe938,	// (0x0005a9ca) wait_bar_pane_cp08_ParamLimits

0xc2d3,	// (0x00058365) cset_list_set_pane_copy1_ParamLimits

0xef29,	// (0x0005afbb) highlight_cell_cale_month_pane_g1

0xcbe9,	// (0x00058c7b) highlight_cell_cale_month_pane_t1

0xe5db,	// (0x0005a66d) list_gen_pane_cp01

0xe264,	// (0x0005a2f6) scroll_pane_01

0xcbf7,	// (0x00058c89) list_single_double_fisheye_pane

0xcc00,	// (0x00058c92) list_double_fisheye_pane_g1_ParamLimits

0xcc00,	// (0x00058c92) list_double_fisheye_pane_g1

0xcc0c,	// (0x00058c9e) list_double_fisheye_pane_g2_ParamLimits

0xcc0c,	// (0x00058c9e) list_double_fisheye_pane_g2

0xcc20,	// (0x00058cb2) list_double_fisheye_pane_g3_ParamLimits

0xcc20,	// (0x00058cb2) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0005bd55) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0005bd55) list_double_fisheye_pane_g

0xcc49,	// (0x00058cdb) list_double_fisheye_pane_t1_ParamLimits

0xcc49,	// (0x00058cdb) list_double_fisheye_pane_t1

0xcc64,	// (0x00058cf6) list_double_fisheye_pane_t2_ParamLimits

0xcc64,	// (0x00058cf6) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0005bd60) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0005bd60) list_double_fisheye_pane_t

0x0432,	// (0x0004c4c4) main_call5_pane

0xc8c1,	// (0x00058953) sc_swipe_pane_ParamLimits

0xc8c1,	// (0x00058953) sc_swipe_pane

0xcc92,	// (0x00058d24) call5_image_pane_ParamLimits

0xcc92,	// (0x00058d24) call5_image_pane

0xcca2,	// (0x00058d34) call5_swipe_1_pane_ParamLimits

0xcca2,	// (0x00058d34) call5_swipe_1_pane

0xccae,	// (0x00058d40) call5_swipe_2_pane_ParamLimits

0xccae,	// (0x00058d40) call5_swipe_2_pane

0xccc8,	// (0x00058d5a) popup_call5_audio_first_window_ParamLimits

0xccc8,	// (0x00058d5a) popup_call5_audio_first_window

0x483a,	// (0x000508cc) call5_swipe_1_pane_g1_ParamLimits

0x483a,	// (0x000508cc) call5_swipe_1_pane_g1

0xef31,	// (0x0005afc3) call5_swipe_1_pane_g2_ParamLimits

0xef31,	// (0x0005afc3) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0005bd65) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0005bd65) call5_swipe_1_pane_g

0xef3d,	// (0x0005afcf) call5_swipe_1_pane_t1_ParamLimits

0xef3d,	// (0x0005afcf) call5_swipe_1_pane_t1

0x483a,	// (0x000508cc) call5_swipe_2_pane_g1_ParamLimits

0x483a,	// (0x000508cc) call5_swipe_2_pane_g1

0xef52,	// (0x0005afe4) call5_swipe_2_pane_g2_ParamLimits

0xef52,	// (0x0005afe4) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0005bd6a) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0005bd6a) call5_swipe_2_pane_g

0xef5e,	// (0x0005aff0) call5_swipe_2_pane_t1_ParamLimits

0xef5e,	// (0x0005aff0) call5_swipe_2_pane_t1

0xef73,	// (0x0005b005) sc_swipe_pane_g1_ParamLimits

0xef73,	// (0x0005b005) sc_swipe_pane_g1

0xef80,	// (0x0005b012) sc_swipe_pane_g2_ParamLimits

0xef80,	// (0x0005b012) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0005bd6f) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0005bd6f) sc_swipe_pane_g

0xef8c,	// (0x0005b01e) sc_swipe_pane_t1_ParamLimits

0xef8c,	// (0x0005b01e) sc_swipe_pane_t1

0x0432,	// (0x0004c4c4) main_cmail_launcher_pane

0xccd6,	// (0x00058d68) aid_size_cell_cmail_l_ParamLimits

0xccd6,	// (0x00058d68) aid_size_cell_cmail_l

0xcce6,	// (0x00058d78) grid_cmail_l_pane_ParamLimits

0xcce6,	// (0x00058d78) grid_cmail_l_pane

0xccf6,	// (0x00058d88) cell_cmail_l_pane_ParamLimits

0xccf6,	// (0x00058d88) cell_cmail_l_pane

0xcd0a,	// (0x00058d9c) cell_cmail_l_pane_g1_ParamLimits

0xcd0a,	// (0x00058d9c) cell_cmail_l_pane_g1

0xcd16,	// (0x00058da8) cell_cmail_l_pane_t1_ParamLimits

0xcd16,	// (0x00058da8) cell_cmail_l_pane_t1

0xefa1,	// (0x0005b033) cell_cmail_l_pane_t2_ParamLimits

0xefa1,	// (0x0005b033) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0005bd74) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0005bd74) cell_cmail_l_pane_t

0x361c,	// (0x0004f6ae) grid_highlight_pane_cp018_ParamLimits

0x361c,	// (0x0004f6ae) grid_highlight_pane_cp018

0x5bdc,	// (0x00051c6e) main2_pane_ParamLimits

0x5bdc,	// (0x00051c6e) main2_pane

0x2358,	// (0x0004e3ea) popup_sp_fs_action_menu_bg_pane_g1

0x2360,	// (0x0004e3f2) popup_sp_fs_action_menu_bg_pane_g2

0x2368,	// (0x0004e3fa) popup_sp_fs_action_menu_bg_pane_g3

0x2370,	// (0x0004e402) popup_sp_fs_action_menu_bg_pane_g4

0x2378,	// (0x0004e40a) popup_sp_fs_action_menu_bg_pane_g5

0x2380,	// (0x0004e412) popup_sp_fs_action_menu_bg_pane_g6

0x2388,	// (0x0004e41a) popup_sp_fs_action_menu_bg_pane_g7

0x2390,	// (0x0004e422) popup_sp_fs_action_menu_bg_pane_g8

0x2398,	// (0x0004e42a) popup_sp_fs_action_menu_bg_pane_g9

0x23a0,	// (0x0004e432) popup_sp_fs_action_menu_bg_pane_g10

0x23a0,	// (0x0004e432) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0005b23e) popup_sp_fs_action_menu_bg_pane_g

0x059e,	// (0x0004c630) list_medium_line_x2_t3_g3_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x2_t3_g3_g1

0x05aa,	// (0x0004c63c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x05aa,	// (0x0004c63c) list_medium_line_x2_t3_g3_g2

0x05b6,	// (0x0004c648) list_medium_line_x2_t3_g3_g3_ParamLimits

0x05b6,	// (0x0004c648) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0005b2ee) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0005b2ee) list_medium_line_x2_t3_g3_g

0x05c2,	// (0x0004c654) list_medium_line_x2_t3_g3_t1_ParamLimits

0x05c2,	// (0x0004c654) list_medium_line_x2_t3_g3_t1

0x69b3,	// (0x00052a45) list_medium_line_x2_t3_g3_t2_ParamLimits

0x69b3,	// (0x00052a45) list_medium_line_x2_t3_g3_t2

0x05d7,	// (0x0004c669) list_medium_line_x2_t3_g3_t3_ParamLimits

0x05d7,	// (0x0004c669) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0005b2f5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0005b2f5) list_medium_line_x2_t3_g3_t

0x059e,	// (0x0004c630) list_medium_line_x2_t3_g2_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x2_t3_g2_g1

0x05b6,	// (0x0004c648) list_medium_line_x2_t3_g2_g2_ParamLimits

0x05b6,	// (0x0004c648) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0005b2fc) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0005b2fc) list_medium_line_x2_t3_g2_g

0x05ec,	// (0x0004c67e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x05ec,	// (0x0004c67e) list_medium_line_x2_t3_g2_t1

0x0602,	// (0x0004c694) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0602,	// (0x0004c694) list_medium_line_x2_t3_g2_t2

0x05d7,	// (0x0004c669) list_medium_line_x2_t3_g2_t3_ParamLimits

0x05d7,	// (0x0004c669) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0005b301) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0005b301) list_medium_line_x2_t3_g2_t

0x059e,	// (0x0004c630) list_medium_line_x2_t4_g4_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x2_t4_g4_g1

0x0614,	// (0x0004c6a6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0614,	// (0x0004c6a6) list_medium_line_x2_t4_g4_g2

0x05aa,	// (0x0004c63c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x05aa,	// (0x0004c63c) list_medium_line_x2_t4_g4_g3

0x0620,	// (0x0004c6b2) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0620,	// (0x0004c6b2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0005b308) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0005b308) list_medium_line_x2_t4_g4_g

0x69c7,	// (0x00052a59) list_medium_line_x2_t4_g4_t1_ParamLimits

0x69c7,	// (0x00052a59) list_medium_line_x2_t4_g4_t1

0x69de,	// (0x00052a70) list_medium_line_x2_t4_g4_t2_ParamLimits

0x69de,	// (0x00052a70) list_medium_line_x2_t4_g4_t2

0x69f3,	// (0x00052a85) list_medium_line_x2_t4_g4_t3_ParamLimits

0x69f3,	// (0x00052a85) list_medium_line_x2_t4_g4_t3

0x062c,	// (0x0004c6be) list_medium_line_x2_t4_g4_t4_ParamLimits

0x062c,	// (0x0004c6be) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0005b311) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0005b311) list_medium_line_x2_t4_g4_t

0x059e,	// (0x0004c630) list_medium_line_x2_t2_g4_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x2_t2_g4_g1

0x0614,	// (0x0004c6a6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0614,	// (0x0004c6a6) list_medium_line_x2_t2_g4_g2

0x05aa,	// (0x0004c63c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x05aa,	// (0x0004c63c) list_medium_line_x2_t2_g4_g3

0x05b6,	// (0x0004c648) list_medium_line_x2_t2_g4_g4_ParamLimits

0x05b6,	// (0x0004c648) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0005b378) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0005b378) list_medium_line_x2_t2_g4_g

0x063e,	// (0x0004c6d0) list_medium_line_x2_t2_g4_t1_ParamLimits

0x063e,	// (0x0004c6d0) list_medium_line_x2_t2_g4_t1

0x05d7,	// (0x0004c669) list_medium_line_x2_t2_g4_t2_ParamLimits

0x05d7,	// (0x0004c669) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0005b381) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0005b381) list_medium_line_x2_t2_g4_t

0x059e,	// (0x0004c630) list_medium_line_x2_t2_g3_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x2_t2_g3_g1

0x05aa,	// (0x0004c63c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x05aa,	// (0x0004c63c) list_medium_line_x2_t2_g3_g2

0x05b6,	// (0x0004c648) list_medium_line_x2_t2_g3_g3_ParamLimits

0x05b6,	// (0x0004c648) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0005b2ee) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0005b2ee) list_medium_line_x2_t2_g3_g

0x0653,	// (0x0004c6e5) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0653,	// (0x0004c6e5) list_medium_line_x2_t2_g3_t1

0x05d7,	// (0x0004c669) list_medium_line_x2_t2_g3_t2_ParamLimits

0x05d7,	// (0x0004c669) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0005b386) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0005b386) list_medium_line_x2_t2_g3_t

0x7b0e,	// (0x00053ba0) main_sp_fs_list_pane_ParamLimits

0x7b0e,	// (0x00053ba0) main_sp_fs_list_pane

0x7b1a,	// (0x00053bac) sp_fs_scroll_pane_ParamLimits

0x7b1a,	// (0x00053bac) sp_fs_scroll_pane

0x7b26,	// (0x00053bb8) list_medium_line_x2_t3_t1

0x7b36,	// (0x00053bc8) list_medium_line_x2_t3_t2

0x0696,	// (0x0004c728) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0005b3d1) list_medium_line_x2_t3_t

0x7b44,	// (0x00053bd6) list_medium_line_x3_t4_t1

0x7b54,	// (0x00053be6) list_medium_line_x3_t4_t2

0x06a4,	// (0x0004c736) list_medium_line_x3_t4_t3

0x0696,	// (0x0004c728) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0005b3d8) list_medium_line_x3_t4_t

0x7b62,	// (0x00053bf4) list_medium_line_x4_t5_t1

0x7b72,	// (0x00053c04) list_medium_line_x4_t5_t2

0x06a4,	// (0x0004c736) list_medium_line_x4_t5_t3

0x06b2,	// (0x0004c744) list_medium_line_x4_t5_t4

0x0696,	// (0x0004c728) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0005b3e1) list_medium_line_x4_t5_t

0x059e,	// (0x0004c630) list_medium_line_t4_g4_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_t4_g4_g1

0x0620,	// (0x0004c6b2) list_medium_line_t4_g4_g2_ParamLimits

0x0620,	// (0x0004c6b2) list_medium_line_t4_g4_g2

0x06c0,	// (0x0004c752) list_medium_line_t4_g4_g3_ParamLimits

0x06c0,	// (0x0004c752) list_medium_line_t4_g4_g3

0x05b6,	// (0x0004c648) list_medium_line_t4_g4_g4_ParamLimits

0x05b6,	// (0x0004c648) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0005b3ec) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0005b3ec) list_medium_line_t4_g4_g

0x06cc,	// (0x0004c75e) list_medium_line_t4_g4_t1_ParamLimits

0x06cc,	// (0x0004c75e) list_medium_line_t4_g4_t1

0x06e1,	// (0x0004c773) list_medium_line_t4_g4_t2_ParamLimits

0x06e1,	// (0x0004c773) list_medium_line_t4_g4_t2

0x06f6,	// (0x0004c788) list_medium_line_t4_g4_t3_ParamLimits

0x06f6,	// (0x0004c788) list_medium_line_t4_g4_t3

0x05d7,	// (0x0004c669) list_medium_line_t4_g4_t4_ParamLimits

0x05d7,	// (0x0004c669) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0005b3f5) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0005b3f5) list_medium_line_t4_g4_t

0x7c67,	// (0x00053cf9) chi_dic_find_pane_g1

0x8cc5,	// (0x00054d57) main_tport_pane

0x0c52,	// (0x0004cce4) list_medium_line_plain_t1

0x0c9c,	// (0x0004cd2e) list_medium_line_t2_g2_g1_ParamLimits

0x0c9c,	// (0x0004cd2e) list_medium_line_t2_g2_g1

0x0ca8,	// (0x0004cd3a) list_medium_line_t2_g2_g2_ParamLimits

0x0ca8,	// (0x0004cd3a) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0005bab1) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0005bab1) list_medium_line_t2_g2_g

0xb748,	// (0x000577da) list_medium_line_t2_g2_t1_ParamLimits

0xb748,	// (0x000577da) list_medium_line_t2_g2_t1

0xb762,	// (0x000577f4) list_medium_line_t2_g2_t2_ParamLimits

0xb762,	// (0x000577f4) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0005bab6) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0005bab6) list_medium_line_t2_g2_t

0x0dd4,	// (0x0004ce66) aid_sp_fs_list_icon_a_sm

0x0ddc,	// (0x0004ce6e) aid_sp_fs_list_icon_d

0x0de4,	// (0x0004ce76) aid_sp_fs_text_primary

0x0ded,	// (0x0004ce7f) aid_sp_fs_text_secondary

0x39f1,	// (0x0004fa83) list_medium_line

0x39f1,	// (0x0004fa83) list_medium_line_g2

0x39f1,	// (0x0004fa83) list_medium_line_g3

0x39f1,	// (0x0004fa83) list_medium_line_plain

0x39f1,	// (0x0004fa83) list_medium_line_plain_t2

0x39f1,	// (0x0004fa83) list_medium_line_plain_t3

0x39f1,	// (0x0004fa83) list_medium_line_right_icon

0x39f1,	// (0x0004fa83) list_medium_line_right_iconx2

0x39f1,	// (0x0004fa83) list_medium_line_t2

0x39f1,	// (0x0004fa83) list_medium_line_t2_g2

0x39f1,	// (0x0004fa83) list_medium_line_t2_g3

0x39f1,	// (0x0004fa83) list_medium_line_t2_right_icon

0x39f1,	// (0x0004fa83) list_medium_line_t2_right_iconx2

0x39f1,	// (0x0004fa83) list_medium_line_t3

0x39f1,	// (0x0004fa83) list_medium_line_t3_g2

0x39f1,	// (0x0004fa83) list_medium_line_t3_g3

0x39f1,	// (0x0004fa83) list_medium_line_t3_right_iconx2

0x0df6,	// (0x0004ce88) list_medium_line_t4_g4

0x0dff,	// (0x0004ce91) list_medium_line_x2

0x0dff,	// (0x0004ce91) list_medium_line_x2_t2_g2

0x0dff,	// (0x0004ce91) list_medium_line_x2_t2_g3

0x0dff,	// (0x0004ce91) list_medium_line_x2_t2_g4

0x0dff,	// (0x0004ce91) list_medium_line_x2_t3

0x0dff,	// (0x0004ce91) list_medium_line_x2_t3_g2

0x0dff,	// (0x0004ce91) list_medium_line_x2_t3_g3

0x0dff,	// (0x0004ce91) list_medium_line_x2_t3_g4

0x0dff,	// (0x0004ce91) list_medium_line_x2_t4_g2

0x0dff,	// (0x0004ce91) list_medium_line_x2_t4_g4

0x0e08,	// (0x0004ce9a) list_medium_line_x3

0x0e08,	// (0x0004ce9a) list_medium_line_x3_t4

0x0e08,	// (0x0004ce9a) list_medium_line_x3_t4_g4

0x0df6,	// (0x0004ce88) list_medium_line_x4_t4

0x0df6,	// (0x0004ce88) list_medium_line_x4_t4_g7

0x0df6,	// (0x0004ce88) list_medium_line_x4_t5

0x0e11,	// (0x0004cea3) list_single_fs_dyc_pane_ParamLimits

0x0e11,	// (0x0004cea3) list_single_fs_dyc_pane

0x059e,	// (0x0004c630) list_medium_line_x4_t4_g7_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x4_t4_g7_g1

0x0e42,	// (0x0004ced4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0e42,	// (0x0004ced4) list_medium_line_x4_t4_g7_g2

0x0e4e,	// (0x0004cee0) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0e4e,	// (0x0004cee0) list_medium_line_x4_t4_g7_g3

0x0e5d,	// (0x0004ceef) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0e5d,	// (0x0004ceef) list_medium_line_x4_t4_g7_g4

0x0e69,	// (0x0004cefb) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0e69,	// (0x0004cefb) list_medium_line_x4_t4_g7_g5

0x0e78,	// (0x0004cf0a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0e78,	// (0x0004cf0a) list_medium_line_x4_t4_g7_g6

0x0e87,	// (0x0004cf19) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0e87,	// (0x0004cf19) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0005bc81) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0005bc81) list_medium_line_x4_t4_g7_g

0x0e93,	// (0x0004cf25) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0e93,	// (0x0004cf25) list_medium_line_x4_t4_g7_t1

0x0ea8,	// (0x0004cf3a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0ea8,	// (0x0004cf3a) list_medium_line_x4_t4_g7_t2

0x0ebd,	// (0x0004cf4f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0ebd,	// (0x0004cf4f) list_medium_line_x4_t4_g7_t3

0x0ed2,	// (0x0004cf64) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0ed2,	// (0x0004cf64) list_medium_line_x4_t4_g7_t4

0x0ee4,	// (0x0004cf76) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0ee4,	// (0x0004cf76) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0005bc90) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0005bc90) list_medium_line_x4_t4_g7_t

0x0ef6,	// (0x0004cf88) list_single_dyc_row_pane_ParamLimits

0x0ef6,	// (0x0004cf88) list_single_dyc_row_pane

0xcc86,	// (0x00058d18) call5_gesture_pane_ParamLimits

0xcc86,	// (0x00058d18) call5_gesture_pane

0xccba,	// (0x00058d4c) call5_windows_pane_ParamLimits

0xccba,	// (0x00058d4c) call5_windows_pane

0xcd2c,	// (0x00058dbe) call5_swipe_1_pane_cp_ParamLimits

0xcd2c,	// (0x00058dbe) call5_swipe_1_pane_cp

0xcd38,	// (0x00058dca) call5_swipe_2_pane_cp_ParamLimits

0xcd38,	// (0x00058dca) call5_swipe_2_pane_cp

0x2d35,	// (0x0004edc7) call5_image_pane_cp

0xcd44,	// (0x00058dd6) popup_call5_audio_first_window_cp_ParamLimits

0xcd44,	// (0x00058dd6) popup_call5_audio_first_window_cp

0xef73,	// (0x0005b005) call5_swipe_1_pane_g1_cp_ParamLimits

0xef73,	// (0x0005b005) call5_swipe_1_pane_g1_cp

0xefb3,	// (0x0005b045) call5_swipe_1_pane_g2_cp

0xef8c,	// (0x0005b01e) call5_swipe_1_pane_t1_cp_ParamLimits

0xef8c,	// (0x0005b01e) call5_swipe_1_pane_t1_cp

0xef73,	// (0x0005b005) call5_swipe_2_pane_g1_cp_ParamLimits

0xef73,	// (0x0005b005) call5_swipe_2_pane_g1_cp

0xefbb,	// (0x0005b04d) call5_swipe_2_pane_g2_cp

0xefc3,	// (0x0005b055) call5_swipe_2_pane_t1_cp_ParamLimits

0xefc3,	// (0x0005b055) call5_swipe_2_pane_t1_cp

0x361c,	// (0x0004f6ae) main_sp_fs_email_pane

0xefd8,	// (0x0005b06a) main_sp_fs_listscroll_pane_te

0x0f13,	// (0x0004cfa5) popup_sp_fs_action_menu_pane_ParamLimits

0x0f13,	// (0x0004cfa5) popup_sp_fs_action_menu_pane

0x45d3,	// (0x00050665) bg_sp_fs_ctrlbar_pane_g1

0xefe1,	// (0x0005b073) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xefea,	// (0x0005b07c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xeff3,	// (0x0005b085) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x45d3,	// (0x00050665) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0005bd79) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x43ae,	// (0x00050440) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x43ae,	// (0x00050440) bg_sp_fs_ctrlbar_ddmenu_pane

0xeffc,	// (0x0005b08e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xeffc,	// (0x0005b08e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf008,	// (0x0005b09a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf008,	// (0x0005b09a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0005bd82) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0005bd82) main_sp_fs_ctrlbar_ddmenu_pane_g

0xf014,	// (0x0005b0a6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xf014,	// (0x0005b0a6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0f53,	// (0x0004cfe5) list_medium_line_t2_right_icon_g1

0xcd50,	// (0x00058de2) list_medium_line_t2_right_icon_t1

0xcd60,	// (0x00058df2) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0005bd87) list_medium_line_t2_right_icon_t

0x4182,	// (0x00050214) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4182,	// (0x00050214) bg_sp_fs_ctrlbar_pane

0xcdc5,	// (0x00058e57) main_sp_fs_ctrlbar_button_pane_cp01

0xcdcd,	// (0x00058e5f) main_sp_fs_ctrlbar_ddmenu_pane

0x3721,	// (0x0004f7b3) main_sp_fs_ctrlbar_pane_g1

0xf066,	// (0x0005b0f8) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0005bd8c) main_sp_fs_ctrlbar_pane_g

0xf072,	// (0x0005b104) main_sp_fs_ctrlbar_pane_t1

0xcdd7,	// (0x00058e69) main_sp_fs_ctrlbar_pane

0xcdf3,	// (0x00058e85) main_sp_fs_listscroll_pane_te_cp01

0xce04,	// (0x00058e96) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xce04,	// (0x00058e96) popup_sp_fs_action_menu_pane_cp01

0x361c,	// (0x0004f6ae) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x361c,	// (0x0004f6ae) bg_sp_fs_highlight_list_pane_cp01

0x0f5b,	// (0x0004cfed) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x0f5b,	// (0x0004cfed) sp_fs_action_menu_list_gene_pane_g1

0xf087,	// (0x0005b119) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf087,	// (0x0005b119) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0005bd91) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0005bd91) sp_fs_action_menu_list_gene_pane_g

0x0f6a,	// (0x0004cffc) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0f6a,	// (0x0004cffc) sp_fs_action_menu_list_gene_pane_t1

0x0f82,	// (0x0004d014) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0f82,	// (0x0004d014) sp_fs_action_menu_list_gene_pane

0xf094,	// (0x0005b126) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xf094,	// (0x0005b126) popup_sp_fs_action_menu_bg_pane

0x0f9f,	// (0x0004d031) sp_fs_action_menu_list_pane_ParamLimits

0x0f9f,	// (0x0004d031) sp_fs_action_menu_list_pane

0xf0a2,	// (0x0005b134) sp_fs_scroll_pane_cp01_ParamLimits

0xf0a2,	// (0x0005b134) sp_fs_scroll_pane_cp01

0xce1c,	// (0x00058eae) list_medium_line_plain_t2_t1

0xce2c,	// (0x00058ebe) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0005bd96) list_medium_line_plain_t2_t

0xce3a,	// (0x00058ecc) list_medium_line_plain_t3_t1

0xce4a,	// (0x00058edc) list_medium_line_plain_t3_t2

0xce58,	// (0x00058eea) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0005bd9b) list_medium_line_plain_t3_t

0x059e,	// (0x0004c630) list_medium_line_x2_t2_g2_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x2_t2_g2_g1

0x05b6,	// (0x0004c648) list_medium_line_x2_t2_g2_g2_ParamLimits

0x05b6,	// (0x0004c648) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0005b2fc) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0005b2fc) list_medium_line_x2_t2_g2_g

0x06cc,	// (0x0004c75e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x06cc,	// (0x0004c75e) list_medium_line_x2_t2_g2_t1

0x05d7,	// (0x0004c669) list_medium_line_x2_t2_g2_t2_ParamLimits

0x05d7,	// (0x0004c669) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0005bda2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0005bda2) list_medium_line_x2_t2_g2_t

0x059e,	// (0x0004c630) list_medium_line_x2_t4_g2_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x2_t4_g2_g1

0x0fbd,	// (0x0004d04f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0fbd,	// (0x0004d04f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0005bda7) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0005bda7) list_medium_line_x2_t4_g2_g

0xce66,	// (0x00058ef8) list_medium_line_x2_t4_g2_t1_ParamLimits

0xce66,	// (0x00058ef8) list_medium_line_x2_t4_g2_t1

0xce80,	// (0x00058f12) list_medium_line_x2_t4_g2_t2_ParamLimits

0xce80,	// (0x00058f12) list_medium_line_x2_t4_g2_t2

0xce95,	// (0x00058f27) list_medium_line_x2_t4_g2_t3_ParamLimits

0xce95,	// (0x00058f27) list_medium_line_x2_t4_g2_t3

0x05d7,	// (0x0004c669) list_medium_line_x2_t4_g2_t4_ParamLimits

0x05d7,	// (0x0004c669) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0005bdac) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0005bdac) list_medium_line_x2_t4_g2_t

0x0fcf,	// (0x0004d061) list_medium_line_t3_right_iconx2_g1

0x0f53,	// (0x0004cfe5) list_medium_line_t3_right_iconx2_g2

0xceaa,	// (0x00058f3c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0005bdb5) list_medium_line_t3_right_iconx2_g

0xceb2,	// (0x00058f44) list_medium_line_t3_right_iconx2_t1

0xcec2,	// (0x00058f54) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0005bdbc) list_medium_line_t3_right_iconx2_t

0x059e,	// (0x0004c630) list_medium_line_x3_t4_g4_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x3_t4_g4_g1

0x05aa,	// (0x0004c63c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x05aa,	// (0x0004c63c) list_medium_line_x3_t4_g4_g2

0x0620,	// (0x0004c6b2) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0620,	// (0x0004c6b2) list_medium_line_x3_t4_g4_g3

0x0fd7,	// (0x0004d069) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0fd7,	// (0x0004d069) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0005bdc1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0005bdc1) list_medium_line_x3_t4_g4_g

0xced0,	// (0x00058f62) list_medium_line_x3_t4_g4_t1_ParamLimits

0xced0,	// (0x00058f62) list_medium_line_x3_t4_g4_t1

0xcee7,	// (0x00058f79) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcee7,	// (0x00058f79) list_medium_line_x3_t4_g4_t2

0x06e1,	// (0x0004c773) list_medium_line_x3_t4_g4_t3_ParamLimits

0x06e1,	// (0x0004c773) list_medium_line_x3_t4_g4_t3

0x0fe3,	// (0x0004d075) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0fe3,	// (0x0004d075) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0005bdca) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0005bdca) list_medium_line_x3_t4_g4_t

0xcefc,	// (0x00058f8e) list_single_dyc_row_text_pane_t1_ParamLimits

0xcefc,	// (0x00058f8e) list_single_dyc_row_text_pane_t1

0xcf33,	// (0x00058fc5) list_single_dyc_row_text_pane_t2_ParamLimits

0xcf33,	// (0x00058fc5) list_single_dyc_row_text_pane_t2

0x1000,	// (0x0004d092) list_single_dyc_row_text_pane_t3_ParamLimits

0x1000,	// (0x0004d092) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0005bdd3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0005bdd3) list_single_dyc_row_text_pane_t

0x1012,	// (0x0004d0a4) list_single_dyc_row_pane_g1_ParamLimits

0x1012,	// (0x0004d0a4) list_single_dyc_row_pane_g1

0x101e,	// (0x0004d0b0) list_single_dyc_row_pane_g2_ParamLimits

0x101e,	// (0x0004d0b0) list_single_dyc_row_pane_g2

0x102a,	// (0x0004d0bc) list_single_dyc_row_pane_g3_ParamLimits

0x102a,	// (0x0004d0bc) list_single_dyc_row_pane_g3

0x1036,	// (0x0004d0c8) list_single_dyc_row_pane_g4_ParamLimits

0x1036,	// (0x0004d0c8) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0005bdda) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0005bdda) list_single_dyc_row_pane_g

0x1042,	// (0x0004d0d4) list_single_dyc_row_text_pane_ParamLimits

0x1042,	// (0x0004d0d4) list_single_dyc_row_text_pane

0x0432,	// (0x0004c4c4) bg_sp_fs_scroll_pane

0xf0c8,	// (0x0005b15a) thumb_sp_fs_scroll_pane

0x0c9c,	// (0x0004cd2e) list_medium_line_g1_ParamLimits

0x0c9c,	// (0x0004cd2e) list_medium_line_g1

0x1061,	// (0x0004d0f3) list_medium_line_t1_ParamLimits

0x1061,	// (0x0004d0f3) list_medium_line_t1

0x059e,	// (0x0004c630) list_medium_line_x2_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x2_g1

0x05aa,	// (0x0004c63c) list_medium_line_x2_g2_ParamLimits

0x05aa,	// (0x0004c63c) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0005bde3) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0005bde3) list_medium_line_x2_g

0x1076,	// (0x0004d108) list_medium_line_x2_t1_ParamLimits

0x1076,	// (0x0004d108) list_medium_line_x2_t1

0x059e,	// (0x0004c630) list_medium_line_x3_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x3_g1

0x05aa,	// (0x0004c63c) list_medium_line_x3_g2_ParamLimits

0x05aa,	// (0x0004c63c) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0005bde3) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0005bde3) list_medium_line_x3_g

0x1076,	// (0x0004d108) list_medium_line_x3_t1_ParamLimits

0x1076,	// (0x0004d108) list_medium_line_x3_t1

0xf0d1,	// (0x0005b163) thumb_sp_fs_scroll_pane_g1

0xf0da,	// (0x0005b16c) thumb_sp_fs_scroll_pane_g2

0xf0e3,	// (0x0005b175) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005bde8) thumb_sp_fs_scroll_pane_g

0xf0d1,	// (0x0005b163) bg_sp_fs_scroll_pane_g1

0xf0da,	// (0x0005b16c) bg_sp_fs_scroll_pane_g2

0xf0e3,	// (0x0005b175) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005bde8) bg_sp_fs_scroll_pane_g

0x059e,	// (0x0004c630) list_medium_line_x2_t3_g4_g1_ParamLimits

0x059e,	// (0x0004c630) list_medium_line_x2_t3_g4_g1

0x0614,	// (0x0004c6a6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0614,	// (0x0004c6a6) list_medium_line_x2_t3_g4_g2

0x05aa,	// (0x0004c63c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x05aa,	// (0x0004c63c) list_medium_line_x2_t3_g4_g3

0x05b6,	// (0x0004c648) list_medium_line_x2_t3_g4_g4_ParamLimits

0x05b6,	// (0x0004c648) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0005b378) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0005b378) list_medium_line_x2_t3_g4_g

0xcf8d,	// (0x0005901f) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcf8d,	// (0x0005901f) list_medium_line_x2_t3_g4_t1

0xcfa3,	// (0x00059035) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcfa3,	// (0x00059035) list_medium_line_x2_t3_g4_t2

0x05d7,	// (0x0004c669) list_medium_line_x2_t3_g4_t3_ParamLimits

0x05d7,	// (0x0004c669) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0005bdef) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0005bdef) list_medium_line_x2_t3_g4_t

0x0c9c,	// (0x0004cd2e) list_medium_line_g2_g1_ParamLimits

0x0c9c,	// (0x0004cd2e) list_medium_line_g2_g1

0x0ca8,	// (0x0004cd3a) list_medium_line_g2_g2_ParamLimits

0x0ca8,	// (0x0004cd3a) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0005bab1) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0005bab1) list_medium_line_g2_g

0x108c,	// (0x0004d11e) list_medium_line_g2_t1_ParamLimits

0x108c,	// (0x0004d11e) list_medium_line_g2_t1

0x0c9c,	// (0x0004cd2e) list_medium_line_t3_g2_g1_ParamLimits

0x0c9c,	// (0x0004cd2e) list_medium_line_t3_g2_g1

0x0ca8,	// (0x0004cd3a) list_medium_line_t3_g2_g2_ParamLimits

0x0ca8,	// (0x0004cd3a) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0005bab1) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0005bab1) list_medium_line_t3_g2_g

0xcfbc,	// (0x0005904e) list_medium_line_t3_g2_t1_ParamLimits

0xcfbc,	// (0x0005904e) list_medium_line_t3_g2_t1

0xcfd6,	// (0x00059068) list_medium_line_t3_g2_t2_ParamLimits

0xcfd6,	// (0x00059068) list_medium_line_t3_g2_t2

0xcfeb,	// (0x0005907d) list_medium_line_t3_g2_t3_ParamLimits

0xcfeb,	// (0x0005907d) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0005bdf6) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0005bdf6) list_medium_line_t3_g2_t

0x0f53,	// (0x0004cfe5) list_medium_line_right_icon_g1

0x10a1,	// (0x0004d133) list_medium_line_right_icon_t1

0x0c9c,	// (0x0004cd2e) list_medium_line_t2_g1_ParamLimits

0x0c9c,	// (0x0004cd2e) list_medium_line_t2_g1

0xd001,	// (0x00059093) list_medium_line_t2_t1_ParamLimits

0xd001,	// (0x00059093) list_medium_line_t2_t1

0xd018,	// (0x000590aa) list_medium_line_t2_t2_ParamLimits

0xd018,	// (0x000590aa) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0005bdfd) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0005bdfd) list_medium_line_t2_t

0x0c9c,	// (0x0004cd2e) list_medium_line_t3_g1_ParamLimits

0x0c9c,	// (0x0004cd2e) list_medium_line_t3_g1

0xd02a,	// (0x000590bc) list_medium_line_t3_t1_ParamLimits

0xd02a,	// (0x000590bc) list_medium_line_t3_t1

0xd041,	// (0x000590d3) list_medium_line_t3_t2_ParamLimits

0xd041,	// (0x000590d3) list_medium_line_t3_t2

0xd056,	// (0x000590e8) list_medium_line_t3_t3_ParamLimits

0xd056,	// (0x000590e8) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0005be02) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0005be02) list_medium_line_t3_t

0x0c9c,	// (0x0004cd2e) list_medium_line_g3_g1_ParamLimits

0x0c9c,	// (0x0004cd2e) list_medium_line_g3_g1

0x10af,	// (0x0004d141) list_medium_line_g3_g2_ParamLimits

0x10af,	// (0x0004d141) list_medium_line_g3_g2

0x0ca8,	// (0x0004cd3a) list_medium_line_g3_g3_ParamLimits

0x0ca8,	// (0x0004cd3a) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0005be09) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0005be09) list_medium_line_g3_g

0x10bb,	// (0x0004d14d) list_medium_line_g3_t1_ParamLimits

0x10bb,	// (0x0004d14d) list_medium_line_g3_t1

0x0c9c,	// (0x0004cd2e) list_medium_line_t2_g3_g1_ParamLimits

0x0c9c,	// (0x0004cd2e) list_medium_line_t2_g3_g1

0x10af,	// (0x0004d141) list_medium_line_t2_g3_g2_ParamLimits

0x10af,	// (0x0004d141) list_medium_line_t2_g3_g2

0x0ca8,	// (0x0004cd3a) list_medium_line_t2_g3_g3_ParamLimits

0x0ca8,	// (0x0004cd3a) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0005be09) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0005be09) list_medium_line_t2_g3_g

0xd068,	// (0x000590fa) list_medium_line_t2_g3_t1_ParamLimits

0xd068,	// (0x000590fa) list_medium_line_t2_g3_t1

0xd082,	// (0x00059114) list_medium_line_t2_g3_t2_ParamLimits

0xd082,	// (0x00059114) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0005be10) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0005be10) list_medium_line_t2_g3_t

0x0c9c,	// (0x0004cd2e) list_medium_line_t3_g3_g1_ParamLimits

0x0c9c,	// (0x0004cd2e) list_medium_line_t3_g3_g1

0x10af,	// (0x0004d141) list_medium_line_t3_g3_g2_ParamLimits

0x10af,	// (0x0004d141) list_medium_line_t3_g3_g2

0x0ca8,	// (0x0004cd3a) list_medium_line_t3_g3_g3_ParamLimits

0x0ca8,	// (0x0004cd3a) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0005be09) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0005be09) list_medium_line_t3_g3_g

0xd097,	// (0x00059129) list_medium_line_t3_g3_t1_ParamLimits

0xd097,	// (0x00059129) list_medium_line_t3_g3_t1

0xd0b0,	// (0x00059142) list_medium_line_t3_g3_t2_ParamLimits

0xd0b0,	// (0x00059142) list_medium_line_t3_g3_t2

0xd0c6,	// (0x00059158) list_medium_line_t3_g3_t3_ParamLimits

0xd0c6,	// (0x00059158) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0005be15) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0005be15) list_medium_line_t3_g3_t

0x0fcf,	// (0x0004d061) list_medium_line_right_iconx2_g1

0x0f53,	// (0x0004cfe5) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005be1c) list_medium_line_right_iconx2_g

0x10d0,	// (0x0004d162) list_medium_line_right_iconx2_t1

0x0fcf,	// (0x0004d061) list_medium_line_t2_right_iconx2_g1

0x0f53,	// (0x0004cfe5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005be1c) list_medium_line_t2_right_iconx2_g

0xd0dc,	// (0x0005916e) list_medium_line_t2_right_iconx2_t1

0xd0ec,	// (0x0005917e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0005be21) list_medium_line_t2_right_iconx2_t

0x10de,	// (0x0004d170) list_medium_line_x4_t4_t1

0xd0fa,	// (0x0005918c) list_medium_line_x4_t4_t2

0xd10a,	// (0x0005919c) list_medium_line_x4_t4_t3

0xd11a,	// (0x000591ac) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0005be26) list_medium_line_x4_t4_t

0xd153,	// (0x000591e5) tport_appsw_pane_ParamLimits

0xd153,	// (0x000591e5) tport_appsw_pane

0xd15f,	// (0x000591f1) tport_contact_pane_ParamLimits

0xd15f,	// (0x000591f1) tport_contact_pane

0xd16f,	// (0x00059201) tport_listscroll_pane_ParamLimits

0xd16f,	// (0x00059201) tport_listscroll_pane

0xd17f,	// (0x00059211) cell_tport_appsw_pane_ParamLimits

0xd17f,	// (0x00059211) cell_tport_appsw_pane

0x489f,	// (0x00050931) tport_appsw_pane_g1_ParamLimits

0x489f,	// (0x00050931) tport_appsw_pane_g1

0x10ec,	// (0x0004d17e) tport_contact_pane_g1

0x10f5,	// (0x0004d187) tport_contact_pane_t1

0x1103,	// (0x0004d195) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0005be2f) tport_contact_pane_t

0x1111,	// (0x0004d1a3) list_tport_pane

0x111a,	// (0x0004d1ac) scroll_pane_cp_030

0x112b,	// (0x0004d1bd) cell_tport_appsw_pane_g1

0x113b,	// (0x0004d1cd) cell_tport_appsw_pane_t1

0x0432,	// (0x0004c4c4) grid_highlight_pane_cp019

0xd1aa,	// (0x0005923c) list_tport_double_graphic_pane_ParamLimits

0xd1aa,	// (0x0005923c) list_tport_double_graphic_pane

0x361c,	// (0x0004f6ae) list_highlight_pane_cp023_ParamLimits

0x361c,	// (0x0004f6ae) list_highlight_pane_cp023

0xd1bd,	// (0x0005924f) list_tport_double_graphic_pane_g1_ParamLimits

0xd1bd,	// (0x0005924f) list_tport_double_graphic_pane_g1

0xd1ca,	// (0x0005925c) list_tport_double_graphic_pane_t1_ParamLimits

0xd1ca,	// (0x0005925c) list_tport_double_graphic_pane_t1

0xd1df,	// (0x00059271) list_tport_double_graphic_pane_t2_ParamLimits

0xd1df,	// (0x00059271) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0005be3b) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0005be3b) list_tport_double_graphic_pane_t

0x0432,	// (0x0004c4c4) main_cale_note_pane

0xaf0e,	// (0x00056fa0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaf0e,	// (0x00056fa0) cell_vitu2_function_top_wide_pane_cp01

0xc80e,	// (0x000588a0) wait_bar_pane_cp05_ParamLimits

0x0432,	// (0x0004c4c4) listscroll_cmail_pane

0x1151,	// (0x0004d1e3) list_cmail_pane

0xd1fb,	// (0x0005928d) list_cmail_body_pane

0xd21f,	// (0x000592b1) list_single_cmail_header_caption_pane

0xd24d,	// (0x000592df) list_single_cmail_header_detail_pane_ParamLimits

0xd24d,	// (0x000592df) list_single_cmail_header_detail_pane

0xd285,	// (0x00059317) list_single_cmail_header_caption_pane_t1

0xd295,	// (0x00059327) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd295,	// (0x00059327) list_single_cmail_header_detail_pane_g1

0x1171,	// (0x0004d203) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1171,	// (0x0004d203) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0005be40) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0005be40) list_single_cmail_header_detail_pane_g

0x118a,	// (0x0004d21c) list_single_cmail_header_detail_pane_t1_ParamLimits

0x118a,	// (0x0004d21c) list_single_cmail_header_detail_pane_t1

0x11bc,	// (0x0004d24e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x11bc,	// (0x0004d24e) list_single_cmail_header_editor_pane_bg

0x11ce,	// (0x0004d260) list_cmail_body_pane_g1

0x11d7,	// (0x0004d269) list_cmail_body_pane_t1

0xe14a,	// (0x0005a1dc) list_single_cmail_header_editor_pane_bg_g1

0x26bd,	// (0x0004e74f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe15a,	// (0x0005a1ec) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe152,	// (0x0005a1e4) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe36e,	// (0x0005a400) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe17a,	// (0x0005a20c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe16a,	// (0x0005a1fc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe172,	// (0x0005a204) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x269d,	// (0x0004e72f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd2d3,	// (0x00059365) calenote_gesture_pane_ParamLimits

0xd2d3,	// (0x00059365) calenote_gesture_pane

0xd2ed,	// (0x0005937f) calenote_window_pane_ParamLimits

0xd2ed,	// (0x0005937f) calenote_window_pane

0x11e5,	// (0x0004d277) popup_note_window_cp01

0xd305,	// (0x00059397) calenote_swipe_1_pane_ParamLimits

0xd305,	// (0x00059397) calenote_swipe_1_pane

0xcd38,	// (0x00058dca) calenote_swipe_2_pane_ParamLimits

0xcd38,	// (0x00058dca) calenote_swipe_2_pane

0xef73,	// (0x0005b005) calenote_swipe_1_pane_g1_ParamLimits

0xef73,	// (0x0005b005) calenote_swipe_1_pane_g1

0xef80,	// (0x0005b012) calenote_swipe_1_pane_g2_ParamLimits

0xef80,	// (0x0005b012) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0005bd6f) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0005bd6f) calenote_swipe_1_pane_g

0x11f7,	// (0x0004d289) calenote_swipe_1_pane_t1_ParamLimits

0x11f7,	// (0x0004d289) calenote_swipe_1_pane_t1

0xef73,	// (0x0005b005) calenote_swipe_2_pane_g1_ParamLimits

0xef73,	// (0x0005b005) calenote_swipe_2_pane_g1

0x1216,	// (0x0004d2a8) calenote_swipe_2_pane_g2_ParamLimits

0x1216,	// (0x0004d2a8) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0005be4c) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0005be4c) calenote_swipe_2_pane_g

0x1222,	// (0x0004d2b4) calenote_swipe_2_pane_t1_ParamLimits

0x1222,	// (0x0004d2b4) calenote_swipe_2_pane_t1

0x0432,	// (0x0004c4c4) main_mup_navstr_pane

0x9c74,	// (0x00055d06) main_mup3_pane_t7_ParamLimits

0x9c74,	// (0x00055d06) main_mup3_pane_t7

0xa678,	// (0x0005670a) main_mp4_pane_g6_ParamLimits

0xa678,	// (0x0005670a) main_mp4_pane_g6

0xa9fa,	// (0x00056a8c) main_image3_pane_t4_ParamLimits

0xa9fa,	// (0x00056a8c) main_image3_pane_t4

0xd318,	// (0x000593aa) popup_navstr_preview_pane_ParamLimits

0xd318,	// (0x000593aa) popup_navstr_preview_pane

0xd324,	// (0x000593b6) scroll_navstr_pane_ParamLimits

0xd324,	// (0x000593b6) scroll_navstr_pane

0x0432,	// (0x0004c4c4) bg_popup_preview_window_pane_cp04

0x1249,	// (0x0004d2db) popup_navstr_preview_pane_t1

0xd330,	// (0x000593c2) scroll_navstr_pane_g1_ParamLimits

0xd330,	// (0x000593c2) scroll_navstr_pane_g1

0xd33d,	// (0x000593cf) scroll_navstr_pane_t1_ParamLimits

0xd33d,	// (0x000593cf) scroll_navstr_pane_t1

0x11ee,	// (0x0004d280) bg_button_pane_cp014

0x11ee,	// (0x0004d280) bg_button_pane_cp030

0xcc2c,	// (0x00058cbe) list_double_fisheye_pane_g4_ParamLimits

0xcc2c,	// (0x00058cbe) list_double_fisheye_pane_g4

0xcc38,	// (0x00058cca) list_double_fisheye_pane_g5_ParamLimits

0xcc38,	// (0x00058cca) list_double_fisheye_pane_g5

0x1159,	// (0x0004d1eb) sp_fs_scroll_pane_cp03

0x3721,	// (0x0004f7b3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf066,	// (0x0005b0f8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0005bd8c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf072,	// (0x0005b104) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd1f1,	// (0x00059283) sp_fs_scroll_pane_cp02

0x23c3,	// (0x0004e455) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x23c3,	// (0x0004e455) popup_sp_fs_calendar_preview_list_single_pane

0x0432,	// (0x0004c4c4) main_cam6_pano_pane

0x361c,	// (0x0004f6ae) main_mup3_pane_ParamLimits

0x0432,	// (0x0004c4c4) main_phacti_pane

0xc6e3,	// (0x00058775) bg_button_pane_cp11

0xc6fb,	// (0x0005878d) main_mobtv_info_pane_g2_ParamLimits

0xc6fb,	// (0x0005878d) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0005bcec) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0005bcec) main_mobtv_info_pane_g

0xc8ad,	// (0x0005893f) sc_clock_pane_t5_ParamLimits

0xc8ad,	// (0x0005893f) sc_clock_pane_t5

0xca8f,	// (0x00058b21) main_radioblah_pane_g1_ParamLimits

0xeebf,	// (0x0005af51) main_radioblah_pane_t3_ParamLimits

0xeebf,	// (0x0005af51) main_radioblah_pane_t3

0xeed7,	// (0x0005af69) main_radioblah_pane_t4_ParamLimits

0xeed7,	// (0x0005af69) main_radioblah_pane_t4

0xcaad,	// (0x00058b3f) main_radioblah_text_pane_ParamLimits

0xcaad,	// (0x00058b3f) main_radioblah_text_pane

0xcaba,	// (0x00058b4c) main_radioblah_info_pane_g1_ParamLimits

0xcb4f,	// (0x00058be1) main_radioblah_info_pane_t4_ParamLimits

0xcb4f,	// (0x00058be1) main_radioblah_info_pane_t4

0x361c,	// (0x0004f6ae) main_sp_fs_calendar_pane

0xd34f,	// (0x000593e1) main_phacti_pane_g1

0xd357,	// (0x000593e9) phacti_note_pane_ParamLimits

0xd357,	// (0x000593e9) phacti_note_pane

0x1260,	// (0x0004d2f2) phacti_term_pane_ParamLimits

0x1260,	// (0x0004d2f2) phacti_term_pane

0x1275,	// (0x0004d307) phacti_note_pane_t1_ParamLimits

0x1275,	// (0x0004d307) phacti_note_pane_t1

0x128c,	// (0x0004d31e) phacti_term_pane_g1

0x1294,	// (0x0004d326) phacti_term_pane_t1_ParamLimits

0x1294,	// (0x0004d326) phacti_term_pane_t1

0x12be,	// (0x0004d350) popup_sp_fs_calendar_preview_list_single_pane_g1

0x12c6,	// (0x0004d358) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0005be56) popup_sp_fs_calendar_preview_list_single_pane_g

0x12ce,	// (0x0004d360) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x12ce,	// (0x0004d360) popup_sp_fs_calendar_preview_list_single_pane_t1

0x12e4,	// (0x0004d376) aid_popup_sp_fs_bg_corner_pane

0x45d3,	// (0x00050665) popup_sp_fs_calendar_preview_bg_pane_g1

0x0432,	// (0x0004c4c4) popup_sp_fs_calendar_preview_bg_pane

0x12ec,	// (0x0004d37e) popup_sp_fs_calendar_preview_list_pane

0x361c,	// (0x0004f6ae) bg_main_sp_fs_cale_pane_ParamLimits

0x361c,	// (0x0004f6ae) bg_main_sp_fs_cale_pane

0x12f4,	// (0x0004d386) listscroll_cale_mrui_pane_ParamLimits

0x12f4,	// (0x0004d386) listscroll_cale_mrui_pane

0x1308,	// (0x0004d39a) listscroll_sp_fs_schedule_track_pane

0x1311,	// (0x0004d3a3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1311,	// (0x0004d3a3) main_sp_fs_ctrlbar_pane_cp01

0x1322,	// (0x0004d3b4) main_sp_fs_ribbon_pane

0x132a,	// (0x0004d3bc) popup_sp_fs_cale_preview_window

0xd39a,	// (0x0005942c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd39a,	// (0x0005942c) list_single_sp_fs_schedule_track_pane

0x0bcd,	// (0x0004cc5f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0bcd,	// (0x0004cc5f) bg_sp_fs_highlight_list_pane_cp03

0xd3bc,	// (0x0005944e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd3bc,	// (0x0005944e) list_single_sp_fs_schedule_track_pane_g1

0xd3c8,	// (0x0005945a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd3c8,	// (0x0005945a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0005be5b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0005be5b) list_single_sp_fs_schedule_track_pane_g

0xd3d4,	// (0x00059466) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd3d4,	// (0x00059466) list_single_sp_fs_schedule_track_pane_t1

0xd3ec,	// (0x0005947e) sp_fs_schedule_track_pane_ParamLimits

0xd3ec,	// (0x0005947e) sp_fs_schedule_track_pane

0x133c,	// (0x0004d3ce) sp_fs_schedule_track_pane_g1

0x1344,	// (0x0004d3d6) sp_fs_schedule_track_pane_g2

0x134c,	// (0x0004d3de) sp_fs_schedule_track_pane_g3

0x1354,	// (0x0004d3e6) sp_fs_schedule_track_pane_g4

0x135c,	// (0x0004d3ee) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0005be60) sp_fs_schedule_track_pane_g

0xe14a,	// (0x0005a1dc) bg_sp_fs_schedule_viewer_highlight_g1

0x26bd,	// (0x0004e74f) bg_sp_fs_schedule_viewer_highlight_g2

0xe152,	// (0x0005a1e4) bg_sp_fs_schedule_viewer_highlight_g3

0xe15a,	// (0x0005a1ec) bg_sp_fs_schedule_viewer_highlight_g4

0xe36e,	// (0x0005a400) bg_sp_fs_schedule_viewer_highlight_g5

0xe16a,	// (0x0005a1fc) bg_sp_fs_schedule_viewer_highlight_g6

0xe172,	// (0x0005a204) bg_sp_fs_schedule_viewer_highlight_g7

0xe17a,	// (0x0005a20c) bg_sp_fs_schedule_viewer_highlight_g8

0x269d,	// (0x0004e72f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0005be6b) bg_sp_fs_schedule_viewer_highlight_g

0x0432,	// (0x0004c4c4) bg_main_sp_fs_ribbon_pane

0xd3fc,	// (0x0005948e) main_sp_fs_ribbon_pane_g1

0x1364,	// (0x0004d3f6) main_sp_fs_ribbon_pane_t1

0xd405,	// (0x00059497) main_sp_fs_ribbon_pane_t2

0x1373,	// (0x0004d405) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0005be7e) main_sp_fs_ribbon_pane_t

0x1382,	// (0x0004d414) main_sp_fs_ribbon_scheduler_pane

0x138a,	// (0x0004d41c) bg_main_sp_fs_ribbon_pane_g1

0x1393,	// (0x0004d425) bg_main_sp_fs_ribbon_pane_g2

0x139c,	// (0x0004d42e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0005be85) bg_main_sp_fs_ribbon_pane_g

0x13a4,	// (0x0004d436) main_sp_fs_ribbon_scheduler_pane_g1

0x13ad,	// (0x0004d43f) main_sp_fs_ribbon_scheduler_pane_g2

0x13b6,	// (0x0004d448) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0005be8c) main_sp_fs_ribbon_scheduler_pane_g

0x13bf,	// (0x0004d451) list_cale_mrui_pane

0xd414,	// (0x000594a6) sp_fs_scroll_pane_cp07_ParamLimits

0xd414,	// (0x000594a6) sp_fs_scroll_pane_cp07

0xd42a,	// (0x000594bc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd42a,	// (0x000594bc) bg_sp_fs_schedule_viewer_highlight

0x13c8,	// (0x0004d45a) list_single_sp_fs_schedule_track_pane_cp01

0x13d0,	// (0x0004d462) list_sp_fs_schedule_track_pane

0x13d8,	// (0x0004d46a) sp_fs_scroll_pane_cp06_ParamLimits

0x13d8,	// (0x0004d46a) sp_fs_scroll_pane_cp06

0x45d3,	// (0x00050665) bgmain_sp_fs_calendar_pane_g1

0xd437,	// (0x000594c9) list_single_cale_mrui_pane_ParamLimits

0xd437,	// (0x000594c9) list_single_cale_mrui_pane

0x13ea,	// (0x0004d47c) list_single_cale_mrui_row_pane_ParamLimits

0x13ea,	// (0x0004d47c) list_single_cale_mrui_row_pane

0x13f7,	// (0x0004d489) list_single_cale_mrui_row_pane_g1_ParamLimits

0x13f7,	// (0x0004d489) list_single_cale_mrui_row_pane_g1

0x142f,	// (0x0004d4c1) list_single_cale_mrui_row_pane_t1_ParamLimits

0x142f,	// (0x0004d4c1) list_single_cale_mrui_row_pane_t1

0xd466,	// (0x000594f8) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd466,	// (0x000594f8) list_single_cale_mrui_row_pane_t2

0x1441,	// (0x0004d4d3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1441,	// (0x0004d4d3) list_single_cale_mrui_row_pane_t3

0x1470,	// (0x0004d502) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1470,	// (0x0004d502) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x0005be98) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x0005be98) list_single_cale_mrui_row_pane_t

0xd4cc,	// (0x0005955e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd4cc,	// (0x0005955e) list_single_cmail_header_editor_pane_bg_cp01

0xd4ee,	// (0x00059580) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd4ee,	// (0x00059580) list_single_cmail_header_editor_pane_bg_cp02

0xd50a,	// (0x0005959c) main_radioblah_text_pane_t1_ParamLimits

0xd50a,	// (0x0005959c) main_radioblah_text_pane_t1

0x149f,	// (0x0004d531) cam6_indi_pane_cp01

0x14a7,	// (0x0004d539) cam6_mode_pane_cp01

0x14af,	// (0x0004d541) cam6_pano_pane

0x14b8,	// (0x0004d54a) cam6_zoom_pane_cp01

0x14c0,	// (0x0004d552) cam6_pano_image_pane

0x14cb,	// (0x0004d55d) cam6_pano_pane_g1

0xed47,	// (0x0005add9) cam6_pano_pane_g2

0x14d4,	// (0x0004d566) cam6_pano_pane_g3

0x14dd,	// (0x0004d56f) cam6_pano_pane_g4

0x4b59,	// (0x00050beb) cam6_pano_pane_g5

0x14e6,	// (0x0004d578) cam6_pano_pane_g6

0x14f0,	// (0x0004d582) cam6_pano_pane_g7

0x14f8,	// (0x0004d58a) cam6_pano_pane_g8

0x1501,	// (0x0004d593) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x0005bea1) cam6_pano_pane_g

0x0432,	// (0x0004c4c4) main_browser_tag_pane

0x1241,	// (0x0004d2d3) grid_navstr_albumart_pane

0x150c,	// (0x0004d59e) cell_navstr_albumart_pane_ParamLimits

0x150c,	// (0x0004d59e) cell_navstr_albumart_pane

0x2e96,	// (0x0004ef28) cell_navstr_albumart_pane_g1

0x3f97,	// (0x00050029) cell_navstr_albumart_pane_g2

0x3fa7,	// (0x00050039) cell_navstr_albumart_pane_g3

0x3f9f,	// (0x00050031) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x0005beb4) cell_navstr_albumart_pane_g

0xd527,	// (0x000595b9) bt_list_pane_ParamLimits

0xd527,	// (0x000595b9) bt_list_pane

0xd54e,	// (0x000595e0) bt_list_pane_t1

0xd55d,	// (0x000595ef) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x0005bebd) bt_list_pane_t

0x0432,	// (0x0004c4c4) main_cale_prevew_pane

0xd56c,	// (0x000595fe) popup_cale_preview_window_ParamLimits

0xd56c,	// (0x000595fe) popup_cale_preview_window

0x361c,	// (0x0004f6ae) bg_popup_preview_window_pane_cp05_ParamLimits

0x361c,	// (0x0004f6ae) bg_popup_preview_window_pane_cp05

0x152e,	// (0x0004d5c0) list_cale_preview_pane_ParamLimits

0x152e,	// (0x0004d5c0) list_cale_preview_pane

0xd583,	// (0x00059615) list_double_cale_preview_pane_ParamLimits

0xd583,	// (0x00059615) list_double_cale_preview_pane

0xd595,	// (0x00059627) list_single_cale_preview_pane_ParamLimits

0xd595,	// (0x00059627) list_single_cale_preview_pane

0xd5a9,	// (0x0005963b) list_single_cale_preview_pane_g1

0xd5b1,	// (0x00059643) list_single_cale_preview_pane_t1_ParamLimits

0xd5b1,	// (0x00059643) list_single_cale_preview_pane_t1

0xd5c6,	// (0x00059658) list_double_cale_preview_pane_g1

0xd5ce,	// (0x00059660) list_double_cale_preview_pane_t1_ParamLimits

0xd5ce,	// (0x00059660) list_double_cale_preview_pane_t1

0xd5e3,	// (0x00059675) list_double_cale_preview_pane_t2_ParamLimits

0xd5e3,	// (0x00059675) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x0005bec2) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x0005bec2) list_double_cale_preview_pane_t

0x0432,	// (0x0004c4c4) main_ezdial_pane

0x361c,	// (0x0004f6ae) main_sp_fs_email_pane_ParamLimits

0xcd6e,	// (0x00058e00) cmail_ddmenu_btn01_pane_ParamLimits

0xcd6e,	// (0x00058e00) cmail_ddmenu_btn01_pane

0xcd8b,	// (0x00058e1d) cmail_ddmenu_btn02_pane_ParamLimits

0xcd8b,	// (0x00058e1d) cmail_ddmenu_btn02_pane

0xcda9,	// (0x00058e3b) cmail_ddmenu_btn03_pane_ParamLimits

0xcda9,	// (0x00058e3b) cmail_ddmenu_btn03_pane

0xcdd7,	// (0x00058e69) main_sp_fs_ctrlbar_pane_ParamLimits

0xcdf3,	// (0x00058e85) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd1fb,	// (0x0005928d) list_cmail_body_pane_ParamLimits

0x1168,	// (0x0004d1fa) bg_button_pane_cp12

0x117d,	// (0x0004d20f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x117d,	// (0x0004d20f) list_single_cmail_header_detail_pane_g3

0xd2ad,	// (0x0005933f) list_single_cmail_header_detail_pane_t2_ParamLimits

0xd2ad,	// (0x0005933f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0005be47) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0005be47) list_single_cmail_header_detail_pane_t

0x12a9,	// (0x0004d33b) phacti_term_pane_t2_ParamLimits

0x12a9,	// (0x0004d33b) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0005be51) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0005be51) phacti_term_pane_t

0x153a,	// (0x0004d5cc) aid_size_list_single_double

0xd5fb,	// (0x0005968d) popup_ezdial_listscroll_window

0xd61c,	// (0x000596ae) popup_number_entry_window_cp01

0x2d35,	// (0x0004edc7) bg_popup_call_pane_cp09

0x1546,	// (0x0004d5d8) ezdial_list_pane

0x154e,	// (0x0004d5e0) scroll_pane_cp23

0x43ae,	// (0x00050440) bg_button_pane_cp028_ParamLimits

0x43ae,	// (0x00050440) bg_button_pane_cp028

0xd62a,	// (0x000596bc) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd62a,	// (0x000596bc) cmail_ddmenu_btn01_pane_g1

0xd63c,	// (0x000596ce) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd63c,	// (0x000596ce) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x0005bec7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x0005bec7) cmail_ddmenu_btn01_pane_g

0x1556,	// (0x0004d5e8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1556,	// (0x0004d5e8) cmail_ddmenu_btn01_pane_t1

0x4182,	// (0x00050214) bg_button_pane_cp029_ParamLimits

0x4182,	// (0x00050214) bg_button_pane_cp029

0xd63c,	// (0x000596ce) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd63c,	// (0x000596ce) cmail_ddmenu_btn02_pane_g1

0xd654,	// (0x000596e6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd654,	// (0x000596e6) cmail_ddmenu_btn02_pane_t1

0x0bcd,	// (0x0004cc5f) bg_button_pane_cp031_ParamLimits

0x0bcd,	// (0x0004cc5f) bg_button_pane_cp031

0xd63c,	// (0x000596ce) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd63c,	// (0x000596ce) cmail_ddmenu_btn03_pane_g1

0xd654,	// (0x000596e6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd654,	// (0x000596e6) cmail_ddmenu_btn03_pane_t1

0xa897,	// (0x00056929) cell_dialer2_keypad_pane_t1_ParamLimits

0xa8b1,	// (0x00056943) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa8b1,	// (0x00056943) cell_dialer2_keypad_pane_t1_copy1

0xc583,	// (0x00058615) ncimui_group_button_pane

0x361c,	// (0x0004f6ae) main_sp_fs_calendar_pane_ParamLimits

0xd21f,	// (0x000592b1) list_single_cmail_header_caption_pane_ParamLimits

0x0ded,	// (0x0004ce7f) aid_recal_txt_sm_pane

0x0432,	// (0x0004c4c4) mian_recal_day_pane

0x132a,	// (0x0004d3bc) popup_sp_fs_cale_preview_window_ParamLimits

0x0432,	// (0x0004c4c4) list_recal_day_pane

0x1584,	// (0x0004d616) list_single_recal_day_pane_ParamLimits

0x1584,	// (0x0004d616) list_single_recal_day_pane

0x1596,	// (0x0004d628) list_single_recal_day_pane_g1_ParamLimits

0x1596,	// (0x0004d628) list_single_recal_day_pane_g1

0x15a2,	// (0x0004d634) list_single_recal_day_pane_g2_ParamLimits

0x15a2,	// (0x0004d634) list_single_recal_day_pane_g2

0x15b1,	// (0x0004d643) list_single_recal_day_pane_g3_ParamLimits

0x15b1,	// (0x0004d643) list_single_recal_day_pane_g3

0xd678,	// (0x0005970a) list_single_recal_day_pane_g4_ParamLimits

0xd678,	// (0x0005970a) list_single_recal_day_pane_g4

0x15bd,	// (0x0004d64f) list_single_recal_day_pane_g5_ParamLimits

0x15bd,	// (0x0004d64f) list_single_recal_day_pane_g5

0x15cc,	// (0x0004d65e) list_single_recal_day_pane_g6_ParamLimits

0x15cc,	// (0x0004d65e) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x0005bed6) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x0005bed6) list_single_recal_day_pane_g

0x15d8,	// (0x0004d66a) list_single_recal_day_pane_t1

0x15e6,	// (0x0004d678) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0005bee3) list_single_recal_day_pane_t

0xd68b,	// (0x0005971d) ncimui_query_button_pane_ParamLimits

0xd68b,	// (0x0005971d) ncimui_query_button_pane

0xd69b,	// (0x0005972d) ncimui_query_button_pane_t1_ParamLimits

0xd69b,	// (0x0005972d) ncimui_query_button_pane_t1

0x15f4,	// (0x0004d686) ncimui_query_button_pane_t2_ParamLimits

0x15f4,	// (0x0004d686) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0005bee8) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0005bee8) ncimui_query_button_pane_t

0xd6ae,	// (0x00059740) query_button_pane_ParamLimits

0xd6ae,	// (0x00059740) query_button_pane

0x0432,	// (0x0004c4c4) bg_button_pane_cp0028

0x1607,	// (0x0004d699) query_button_pane_t1

0x8cc5,	// (0x00054d57) main_tport_pane_ParamLimits

0xd12a,	// (0x000591bc) bg_popup_window_pane_cp01_ParamLimits

0xd12a,	// (0x000591bc) bg_popup_window_pane_cp01

0xd137,	// (0x000591c9) heading_pane_cp08_ParamLimits

0xd137,	// (0x000591c9) heading_pane_cp08

0xd145,	// (0x000591d7) heading_pane_cp07_ParamLimits

0xd145,	// (0x000591d7) heading_pane_cp07

0x112b,	// (0x0004d1bd) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0005be34) cell_tport_appsw_pane_g

0x83b1,	// (0x00054443) input_candi_list_open_g1

0x2858,	// (0x0004e8ea) list_cale_time_pane_g6_ParamLimits

0x2858,	// (0x0004e8ea) list_cale_time_pane_g6

0x9703,	// (0x00055795) aid_size_touch_calib_1_ParamLimits

0x9703,	// (0x00055795) aid_size_touch_calib_1

0x970f,	// (0x000557a1) aid_size_touch_calib_2_ParamLimits

0x970f,	// (0x000557a1) aid_size_touch_calib_2

0x971d,	// (0x000557af) aid_size_touch_calib_3_ParamLimits

0x971d,	// (0x000557af) aid_size_touch_calib_3

0x972d,	// (0x000557bf) aid_size_touch_calib_4_ParamLimits

0x972d,	// (0x000557bf) aid_size_touch_calib_4

0x973b,	// (0x000557cd) main_touch_calib_button_group_pane_ParamLimits

0x973b,	// (0x000557cd) main_touch_calib_button_group_pane

0x9749,	// (0x000557db) main_touch_calib_pane_g1_ParamLimits

0x9755,	// (0x000557e7) main_touch_calib_pane_g2_ParamLimits

0x9761,	// (0x000557f3) main_touch_calib_pane_g3_ParamLimits

0x976d,	// (0x000557ff) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0005b807) main_touch_calib_pane_g_ParamLimits

0x9779,	// (0x0005580b) main_touch_calib_pane_t1_ParamLimits

0x9790,	// (0x00055822) main_touch_calib_pane_t2_ParamLimits

0x97a7,	// (0x00055839) main_touch_calib_pane_t3_ParamLimits

0x97bb,	// (0x0005584d) main_touch_calib_pane_t4_ParamLimits

0x97cf,	// (0x00055861) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0005b810) main_touch_calib_pane_t_ParamLimits

0x4940,	// (0x000509d2) list_single_fp_cale_pane_g3_ParamLimits

0x4940,	// (0x000509d2) list_single_fp_cale_pane_g3

0xacf7,	// (0x00056d89) bg_button_pane_cp012_ParamLimits

0xacf7,	// (0x00056d89) bg_vkb2_func_pane_cp03_ParamLimits

0xb6bf,	// (0x00057751) cell_vitu2_function_top_pane_g1_ParamLimits

0xacf7,	// (0x00056d89) bg_vkb2_func_pane_cp04_ParamLimits

0xc521,	// (0x000585b3) main_ncimui_button_group_pane_ParamLimits

0xc521,	// (0x000585b3) main_ncimui_button_group_pane

0xc571,	// (0x00058603) main_ncimui_pane_t3_ParamLimits

0xc571,	// (0x00058603) main_ncimui_pane_t3

0x1257,	// (0x0004d2e9) phacti_button_group_pane

0x153a,	// (0x0004d5cc) aid_size_list_single_double_ParamLimits

0xd5fb,	// (0x0005968d) popup_ezdial_listscroll_window_ParamLimits

0xd61c,	// (0x000596ae) popup_number_entry_window_cp01_ParamLimits

0xd6bb,	// (0x0005974d) phacti_button_pane_ParamLimits

0xd6bb,	// (0x0005974d) phacti_button_pane

0x0432,	// (0x0004c4c4) bg_button_pane_cp14

0x1615,	// (0x0004d6a7) phacti_button_pane_t1

0xd6cc,	// (0x0005975e) main_touch_calib_button_pane_ParamLimits

0xd6cc,	// (0x0005975e) main_touch_calib_button_pane

0x22ad,	// (0x0004e33f) bg_button_pane_cp18_ParamLimits

0x22ad,	// (0x0004e33f) bg_button_pane_cp18

0x1623,	// (0x0004d6b5) main_touch_calib_button_pane_t1_ParamLimits

0x1623,	// (0x0004d6b5) main_touch_calib_button_pane_t1

0x1639,	// (0x0004d6cb) main_touch_calib_button_pane_t2_ParamLimits

0x1639,	// (0x0004d6cb) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0005beed) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0005beed) main_touch_calib_button_pane_t

0x0432,	// (0x0004c4c4) cell_ncimui_button_pane

0x0432,	// (0x0004c4c4) bg_button_pane_cp032

0x1657,	// (0x0004d6e9) cell_ncimui_button_pane_t1

0xa90d,	// (0x0005699f) image3_infobar_pane_ParamLimits

0xa90d,	// (0x0005699f) image3_infobar_pane

0xc8cf,	// (0x00058961) fs_bigclock_status_pane_ParamLimits

0xc8cf,	// (0x00058961) fs_bigclock_status_pane

0xc8dc,	// (0x0005896e) main_fs_bigclock_clock_pane_ParamLimits

0xc8dc,	// (0x0005896e) main_fs_bigclock_clock_pane

0xc900,	// (0x00058992) main_fs_bigclock_indi_pane_ParamLimits

0xc900,	// (0x00058992) main_fs_bigclock_indi_pane

0xc933,	// (0x000589c5) main_fs_bigclock_swipe_pane_ParamLimits

0xc933,	// (0x000589c5) main_fs_bigclock_swipe_pane

0x0432,	// (0x0004c4c4) main_fs_clock_dumped_data

0xc965,	// (0x000589f7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc965,	// (0x000589f7) list_single_fs_bigclock_indicator_pane_g1

0xc989,	// (0x00058a1b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc989,	// (0x00058a1b) list_single_fs_bigclock_indicator_pane_g2

0xc9a3,	// (0x00058a35) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc9a3,	// (0x00058a35) list_single_fs_bigclock_indicator_pane_g3

0xc9bd,	// (0x00058a4f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc9bd,	// (0x00058a4f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0005bd20) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0005bd20) list_single_fs_bigclock_indicator_pane_g

0xc9e3,	// (0x00058a75) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc9e3,	// (0x00058a75) list_single_fs_bigclock_indicator_pane_t1

0xca0b,	// (0x00058a9d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xca0b,	// (0x00058a9d) list_single_fs_bigclock_indicator_pane_t2

0xca33,	// (0x00058ac5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xca33,	// (0x00058ac5) list_single_fs_bigclock_indicator_pane_t3

0xca5b,	// (0x00058aed) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xca5b,	// (0x00058aed) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0005bd2b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0005bd2b) list_single_fs_bigclock_indicator_pane_t

0x1665,	// (0x0004d6f7) image3_infobar_fav_pane_ParamLimits

0x1665,	// (0x0004d6f7) image3_infobar_fav_pane

0x1675,	// (0x0004d707) image3_infobar_loc_pane_ParamLimits

0x1675,	// (0x0004d707) image3_infobar_loc_pane

0x1689,	// (0x0004d71b) image3_infobar_time_pane_ParamLimits

0x1689,	// (0x0004d71b) image3_infobar_time_pane

0x45d3,	// (0x00050665) image3_infobar_time_pane_g1

0x1699,	// (0x0004d72b) image3_infobar_time_pane_t1

0x45d3,	// (0x00050665) image3_infobar_loc_pane_g1

0x16a7,	// (0x0004d739) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0005bef2) image3_infobar_loc_pane_g

0x16af,	// (0x0004d741) image3_infobar_loc_pane_t1

0x45d3,	// (0x00050665) image3_infobar_fav_pane_g1

0x16bd,	// (0x0004d74f) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0005bef7) image3_infobar_fav_pane_g

0x16c5,	// (0x0004d757) fs_bigclock_status_battery_pane

0x16ce,	// (0x0004d760) fs_bigclock_status_signal_pane

0x16d7,	// (0x0004d769) fs_bigclock_status_title_pane

0x16e0,	// (0x0004d772) fs_bigclock_status_signal_pane_g1

0x16e9,	// (0x0004d77b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0005befc) fs_bigclock_status_signal_pane_g

0x16f1,	// (0x0004d783) fs_bigclock_status_battery_pane_g1

0x16fa,	// (0x0004d78c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0005bf01) fs_bigclock_status_battery_pane_g

0x1702,	// (0x0004d794) fs_bigclock_status_title_pane_t1

0x45d3,	// (0x00050665) main_fs_bigclock_clock_pane_g1

0x1710,	// (0x0004d7a2) main_fs_bigclock_clock_pane_g2

0x1710,	// (0x0004d7a2) main_fs_bigclock_clock_pane_g3

0x1710,	// (0x0004d7a2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0005bf06) main_fs_bigclock_clock_pane_g

0xd6dc,	// (0x0005976e) main_fs_bigclock_clock_pane_t1

0xd6ea,	// (0x0005977c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0005bf0f) main_fs_bigclock_clock_pane_t

0x1718,	// (0x0004d7aa) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1718,	// (0x0004d7aa) list_single_fs_bigclock_indicator_pane

0xd6f9,	// (0x0005978b) list_single_fs_bigclock_pane_ParamLimits

0xd6f9,	// (0x0005978b) list_single_fs_bigclock_pane

0x1732,	// (0x0004d7c4) main_fs_bigclock_indicator_pane_t1

0x1741,	// (0x0004d7d3) list_single_fs_bigclock_pane_g1

0x1749,	// (0x0004d7db) list_single_fs_bigclock_pane_t1

0x45d3,	// (0x00050665) main_fs_bigclock_swipe_pane_g1

0x1789,	// (0x0004d81b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0005bf20) main_fs_bigclock_swipe_pane_g

0x1791,	// (0x0004d823) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1791,	// (0x0004d823) main_fs_bigclock_swipe_pane_t1

0x7b80,	// (0x00053c12) call_type_pane_ParamLimits

0x0432,	// (0x0004c4c4) main_btmg_pane

0x1423,	// (0x0004d4b5) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1423,	// (0x0004d4b5) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x0005be93) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0005be93) list_single_cale_mrui_row_pane_g

0x1574,	// (0x0004d606) list_recal_vselct_arw_lo_pane

0x157c,	// (0x0004d60e) list_recal_vselct_arw_up_pane

0x0de4,	// (0x0004ce76) list_recal_vselct_pane

0x17ae,	// (0x0004d840) btmg_button_pane

0xd75d,	// (0x000597ef) main_btmg_pane_g1

0x0432,	// (0x0004c4c4) bg_button_pane_cp044

0x17b8,	// (0x0004d84a) btmg_button_pane_t1

0x417a,	// (0x0005020c) aid_listscroll_gen

0x361c,	// (0x0004f6ae) main_cntbar_detail_pane

0x1149,	// (0x0004d1db) list_cmail_folder_pane

0x1159,	// (0x0004d1eb) sp_fs_scroll_pane_cp03_ParamLimits

0xd765,	// (0x000597f7) list_single_fs_dyc_pane_cp01_ParamLimits

0xd765,	// (0x000597f7) list_single_fs_dyc_pane_cp01

0x17c6,	// (0x0004d858) aid_size_cmail_indent

0x17cf,	// (0x0004d861) list_single_dyc_row_pane_cp01

0xd7b6,	// (0x00059848) cntbar_detail_list_pane_ParamLimits

0xd7b6,	// (0x00059848) cntbar_detail_list_pane

0xd7f0,	// (0x00059882) main_cntbar_detail_cont_pane_ParamLimits

0xd7f0,	// (0x00059882) main_cntbar_detail_cont_pane

0x7b1a,	// (0x00053bac) scroll_pane_cp032_ParamLimits

0x7b1a,	// (0x00053bac) scroll_pane_cp032

0xd7fc,	// (0x0005988e) cntbar_detail_list_event_pane_ParamLimits

0xd7fc,	// (0x0005988e) cntbar_detail_list_event_pane

0xd7c2,	// (0x00059854) cntbar_detail_list_shct_pane

0x270b,	// (0x0004e79d) aid_list_gen

0x17d8,	// (0x0004d86a) aid_scroll

0x17e1,	// (0x0004d873) aid_size_touch_scroll_bar

0xd810,	// (0x000598a2) aid_list_double

0x17f3,	// (0x0004d885) aid_list_single

0xd819,	// (0x000598ab) aid_list_single_lg

0x1805,	// (0x0004d897) aid_list_z_g_a_sm

0x180d,	// (0x0004d89f) aid_list_z_g_d

0x1815,	// (0x0004d8a7) aid_txt_z_prm

0xd822,	// (0x000598b4) aid_txt_z_prm_cp01

0xd830,	// (0x000598c2) aid_txt_z_sec

0xd83e,	// (0x000598d0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd83e,	// (0x000598d0) main_cntbar_detail_cont_pane_g1

0xd84b,	// (0x000598dd) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd84b,	// (0x000598dd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0005bf25) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0005bf25) main_cntbar_detail_cont_pane_g

0x1823,	// (0x0004d8b5) main_cntbar_detail_cont_pane_t1

0x1831,	// (0x0004d8c3) main_cntbar_detail_cont_pane_t2

0x183f,	// (0x0004d8d1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0005bf2a) main_cntbar_detail_cont_pane_t

0xd857,	// (0x000598e9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd857,	// (0x000598e9) cell_cntbar_detail_list_shct_pane

0x184d,	// (0x0004d8df) cntbar_detail_list_shct_pane_g1

0x1856,	// (0x0004d8e8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0005bf31) cntbar_detail_list_shct_pane_g

0xd86b,	// (0x000598fd) cntbar_detail_list_event_pane_g1_ParamLimits

0xd86b,	// (0x000598fd) cntbar_detail_list_event_pane_g1

0xd877,	// (0x00059909) cntbar_detail_list_event_pane_g2_ParamLimits

0xd877,	// (0x00059909) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0005bf36) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0005bf36) cntbar_detail_list_event_pane_g

0xd8e3,	// (0x00059975) cntbar_detail_list_event_pane_t1_ParamLimits

0xd8e3,	// (0x00059975) cntbar_detail_list_event_pane_t1

0xd8f8,	// (0x0005998a) cntbar_detail_list_event_pane_t2_ParamLimits

0xd8f8,	// (0x0005998a) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0005bf43) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0005bf43) cntbar_detail_list_event_pane_t

0x45d3,	// (0x00050665) cell_cntbar_detail_list_shct_pane_g1

0x7f03,	// (0x00053f95) navi_pane_mv_g3

0x361c,	// (0x0004f6ae) main_cntbar_detail_pane_ParamLimits

0x0432,	// (0x0004c4c4) main_notif_wgt_pane

0xa5bf,	// (0x00056651) aid_tch_main_mp4_pane_g4

0xa7f4,	// (0x00056886) popup_slider_window_cp02

0x156b,	// (0x0004d5fd) list_recal_day_event_pane

0xd796,	// (0x00059828) cntbar_detail_btn_pane_ParamLimits

0xd796,	// (0x00059828) cntbar_detail_btn_pane

0xd7a6,	// (0x00059838) cntbar_detail_btn_pane_cp01_ParamLimits

0xd7a6,	// (0x00059838) cntbar_detail_btn_pane_cp01

0xd7c2,	// (0x00059854) cntbar_detail_list_shct_pane_ParamLimits

0xd7ce,	// (0x00059860) cntbar_detail_pane_g1_ParamLimits

0xd7ce,	// (0x00059860) cntbar_detail_pane_g1

0xd7da,	// (0x0005986c) cntbar_detail_pane_t1_ParamLimits

0xd7da,	// (0x0005986c) cntbar_detail_pane_t1

0xd883,	// (0x00059915) cntbar_detail_list_event_pane_g3_ParamLimits

0xd883,	// (0x00059915) cntbar_detail_list_event_pane_g3

0xd89b,	// (0x0005992d) cntbar_detail_list_event_pane_g4_ParamLimits

0xd89b,	// (0x0005992d) cntbar_detail_list_event_pane_g4

0xd8b3,	// (0x00059945) cntbar_detail_list_event_pane_g5_ParamLimits

0xd8b3,	// (0x00059945) cntbar_detail_list_event_pane_g5

0xd8cb,	// (0x0005995d) cntbar_detail_list_event_pane_g6_ParamLimits

0xd8cb,	// (0x0005995d) cntbar_detail_list_event_pane_g6

0xd90d,	// (0x0005999f) cntbar_detail_list_event_pane_t3_ParamLimits

0xd90d,	// (0x0005999f) cntbar_detail_list_event_pane_t3

0xd91f,	// (0x000599b1) popup_notif_wgt_window_ParamLimits

0xd91f,	// (0x000599b1) popup_notif_wgt_window

0xd92f,	// (0x000599c1) popup_submenu_window_cp01_ParamLimits

0xd92f,	// (0x000599c1) popup_submenu_window_cp01

0x2d35,	// (0x0004edc7) bg_popup_window_pane_cp10

0x185f,	// (0x0004d8f1) listscroll_notif_wgt_pane

0x1869,	// (0x0004d8fb) list_notif_wgt_window

0x1872,	// (0x0004d904) scroll_pane_cp033

0x187b,	// (0x0004d90d) list_notif_wgt_row_pane_ParamLimits

0x187b,	// (0x0004d90d) list_notif_wgt_row_pane

0x188f,	// (0x0004d921) aid_size_list_notif_wgt_del

0x1898,	// (0x0004d92a) list_notif_wgt_row_pane_g1

0x18a0,	// (0x0004d932) list_notif_wgt_row_pane_g2

0x18a8,	// (0x0004d93a) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0005bf4a) list_notif_wgt_row_pane_g

0x18b1,	// (0x0004d943) list_notif_wgt_row_pane_t1

0x18bf,	// (0x0004d951) list_notif_wgt_row_pane_t2

0x18cd,	// (0x0004d95f) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0005bf51) list_notif_wgt_row_pane_t

0xe388,	// (0x0005a41a) list_recal_day_event_pane_g1

0x18db,	// (0x0004d96d) list_recal_day_event_pane_t1

0x0432,	// (0x0004c4c4) bg_button_pane_cp045

0x18ea,	// (0x0004d97c) cntbar_detail_btn_pane_t1

0x4182,	// (0x00050214) main_callh_pane_ParamLimits

0x4182,	// (0x00050214) main_callh_pane

0x0432,	// (0x0004c4c4) main_coverflow0_pane

0x0432,	// (0x0004c4c4) main_wgtman_pane

0xc94b,	// (0x000589dd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc94b,	// (0x000589dd) main_fs_bigclock_unlock_btn_pane

0x1123,	// (0x0004d1b5) bg_button_pane_cp16

0x1133,	// (0x0004d1c5) cell_tport_appsw_pane_g3

0xd93d,	// (0x000599cf) cf0_flow_pane_ParamLimits

0xd93d,	// (0x000599cf) cf0_flow_pane

0x18f8,	// (0x0004d98a) listscroll_cf0_pane

0x1901,	// (0x0004d993) main_cf0_pane_g1

0xd94c,	// (0x000599de) main_cf0_pane_t1_ParamLimits

0xd94c,	// (0x000599de) main_cf0_pane_t1

0xd960,	// (0x000599f2) main_cf0_pane_t2_ParamLimits

0xd960,	// (0x000599f2) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0005bf58) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0005bf58) main_cf0_pane_t

0x190b,	// (0x0004d99d) scroll_pane_cp11

0xd974,	// (0x00059a06) cf0_flow_pane_g1

0xd97c,	// (0x00059a0e) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0005bf5d) cf0_flow_pane_g

0xd984,	// (0x00059a16) cf0_flow_pane_t1

0x0432,	// (0x0004c4c4) main_call6_pane

0x0432,	// (0x0004c4c4) main_calllock_pane

0xd992,	// (0x00059a24) call6_btn_grp_pane_ParamLimits

0xd992,	// (0x00059a24) call6_btn_grp_pane

0xd9a1,	// (0x00059a33) call6_pane_g1_ParamLimits

0xd9a1,	// (0x00059a33) call6_pane_g1

0xd9b0,	// (0x00059a42) popup_call6_1st_window_ParamLimits

0xd9b0,	// (0x00059a42) popup_call6_1st_window

0xd9be,	// (0x00059a50) popup_call6_2nd_window_ParamLimits

0xd9be,	// (0x00059a50) popup_call6_2nd_window

0xd9cc,	// (0x00059a5e) cell_call6_btn_pane_ParamLimits

0xd9cc,	// (0x00059a5e) cell_call6_btn_pane

0x2d35,	// (0x0004edc7) bg_popup_call2_in_pane_cp03

0x1916,	// (0x0004d9a8) popup_call6_1st_window_g1

0x191e,	// (0x0004d9b0) popup_call6_1st_window_g2

0x1926,	// (0x0004d9b8) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0005bf62) popup_call6_1st_window_g

0x192e,	// (0x0004d9c0) popup_call6_1st_window_t1

0x193d,	// (0x0004d9cf) popup_call6_1st_window_t2

0x194d,	// (0x0004d9df) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0005bf69) popup_call6_1st_window_t

0x2d35,	// (0x0004edc7) bg_popup_call2_in_pane_cp04

0x1916,	// (0x0004d9a8) popup_call6_2nd_window_g1

0x191e,	// (0x0004d9b0) popup_call6_2nd_window_g2

0x1926,	// (0x0004d9b8) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0005bf62) popup_call6_2nd_window_g

0x192e,	// (0x0004d9c0) popup_call6_2nd_window_t1

0x0432,	// (0x0004c4c4) bg_button_pane_cp15

0x195d,	// (0x0004d9ef) cell_call6_btn_pane_g1

0x1966,	// (0x0004d9f8) cell_call6_btn_pane_t1

0xd9db,	// (0x00059a6d) listscroll_wgtman_pane_ParamLimits

0xd9db,	// (0x00059a6d) listscroll_wgtman_pane

0xd9f9,	// (0x00059a8b) wgtman_btn_pane_ParamLimits

0xd9f9,	// (0x00059a8b) wgtman_btn_pane

0x2be8,	// (0x0004ec7a) aid_scroll_copy1

0x1975,	// (0x0004da07) list_wgtman_pane

0xda2e,	// (0x00059ac0) wgtman_btn_pane_g1_ParamLimits

0xda2e,	// (0x00059ac0) wgtman_btn_pane_g1

0xda56,	// (0x00059ae8) wgtman_btn_pane_t1_ParamLimits

0xda56,	// (0x00059ae8) wgtman_btn_pane_t1

0x197f,	// (0x0004da11) wgtman_btn_pane_t2_ParamLimits

0x197f,	// (0x0004da11) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0005bf70) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0005bf70) wgtman_btn_pane_t

0xda8d,	// (0x00059b1f) listrow_wgtman_pane_ParamLimits

0xda8d,	// (0x00059b1f) listrow_wgtman_pane

0xdaa9,	// (0x00059b3b) listrow_wgtman_pane_g1

0xdab2,	// (0x00059b44) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0005bf75) listrow_wgtman_pane_g

0xdabc,	// (0x00059b4e) listrow_wgtman_pane_t1

0xdaca,	// (0x00059b5c) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0005bf7a) listrow_wgtman_pane_t

0xdad8,	// (0x00059b6a) wait_bar_pane_cp09

0x1996,	// (0x0004da28) main_calllock_btn_pane

0x19a0,	// (0x0004da32) main_calllock_pane_g1

0x0432,	// (0x0004c4c4) bg_button_pane_cp17

0x19ab,	// (0x0004da3d) main_calllock_btn_pane_g1

0x19b4,	// (0x0004da46) main_calllock_btn_pane_t1

0x0432,	// (0x0004c4c4) main_dialer3_pane

0x0432,	// (0x0004c4c4) main_fmrd2_pane

0x45d3,	// (0x00050665) main_fs_bigclock_unlock_btn_pane_g1

0x19cb,	// (0x0004da5d) main_fs_bigclock_unlock_btn_pane_t1

0xdae0,	// (0x00059b72) area_fmrd2_info_pane_ParamLimits

0xdae0,	// (0x00059b72) area_fmrd2_info_pane

0xdaee,	// (0x00059b80) area_fmrd2_visual_pane_ParamLimits

0xdaee,	// (0x00059b80) area_fmrd2_visual_pane

0xdafc,	// (0x00059b8e) fmrd2_indi_pane_ParamLimits

0xdafc,	// (0x00059b8e) fmrd2_indi_pane

0xdb09,	// (0x00059b9b) area_fmrd2_visual_pane_g1

0xdb11,	// (0x00059ba3) area_fmrd2_visual_pane_t1

0xdb21,	// (0x00059bb3) area_fmrd2_visual_pane_t2

0xdb31,	// (0x00059bc3) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0005bf84) area_fmrd2_visual_pane_t

0xdb41,	// (0x00059bd3) area_fmrd2_info_pane_g1

0xdb49,	// (0x00059bdb) area_fmrd2_info_pane_t1

0xdb59,	// (0x00059beb) area_fmrd2_info_pane_t2

0xdb69,	// (0x00059bfb) area_fmrd2_info_pane_t3

0xdb79,	// (0x00059c0b) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0005bf8b) area_fmrd2_info_pane_t

0xdb87,	// (0x00059c19) fmrd2_indi_pane_t1

0xdb97,	// (0x00059c29) fmrd2_indi_pane_t2

0xdba7,	// (0x00059c39) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0005bf94) fmrd2_indi_pane_t

0xc9cc,	// (0x00058a5e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc9cc,	// (0x00058a5e) list_single_fs_bigclock_indicator_pane_g5

0xca70,	// (0x00058b02) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xca70,	// (0x00058b02) list_single_fs_bigclock_indicator_pane_t5

0xd36d,	// (0x000593ff) aid_cell_bcale_month_pane_ParamLimits

0xd36d,	// (0x000593ff) aid_cell_bcale_month_pane

0xd379,	// (0x0005940b) bcale_month_pane_ParamLimits

0xd379,	// (0x0005940b) bcale_month_pane

0xd389,	// (0x0005941b) bcale_preview_pane_ParamLimits

0xd389,	// (0x0005941b) bcale_preview_pane

0x1749,	// (0x0004d7db) list_single_fs_bigclock_pane_t1_ParamLimits

0x1765,	// (0x0004d7f7) list_single_fs_bigclock_pane_t2_ParamLimits

0x1765,	// (0x0004d7f7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0005bf1b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0005bf1b) list_single_fs_bigclock_pane_t

0x19c3,	// (0x0004da55) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0005bf7f) main_fs_bigclock_unlock_btn_pane_g

0xdbb5,	// (0x00059c47) aid_dia3_key_size_ParamLimits

0xdbb5,	// (0x00059c47) aid_dia3_key_size

0xdbc1,	// (0x00059c53) aid_dia3_listrow_size_ParamLimits

0xdbc1,	// (0x00059c53) aid_dia3_listrow_size

0xdbd1,	// (0x00059c63) dia3_keypad_fun_pane_ParamLimits

0xdbd1,	// (0x00059c63) dia3_keypad_fun_pane

0xdbe3,	// (0x00059c75) dia3_keypad_num_pane_ParamLimits

0xdbe3,	// (0x00059c75) dia3_keypad_num_pane

0xdbf5,	// (0x00059c87) dia3_listscroll_pane_ParamLimits

0xdbf5,	// (0x00059c87) dia3_listscroll_pane

0xdc03,	// (0x00059c95) dia3_numentry_pane_ParamLimits

0xdc03,	// (0x00059c95) dia3_numentry_pane

0x19d9,	// (0x0004da6b) dia3_list_pane

0x19e4,	// (0x0004da76) scroll_pane_cp12

0x0432,	// (0x0004c4c4) bg_dia3_numentry_pane

0xdc11,	// (0x00059ca3) dia3_numentry_pane_t1

0xdc20,	// (0x00059cb2) cell_dia3_key_num_pane

0xdc28,	// (0x00059cba) cell_dia3_key0_fun_pane_ParamLimits

0xdc28,	// (0x00059cba) cell_dia3_key0_fun_pane

0xdc35,	// (0x00059cc7) cell_dia3_key1_fun_pane_ParamLimits

0xdc35,	// (0x00059cc7) cell_dia3_key1_fun_pane

0xdc42,	// (0x00059cd4) dia3_listrow_pane

0xebc1,	// (0x0005ac53) bg_dia3_numentry_pane_g1

0x0432,	// (0x0004c4c4) bg_button_pane_cp21

0x19ef,	// (0x0004da81) cell_dia3_key_num_pane_t1

0x19fd,	// (0x0004da8f) cell_dia3_key_num_pane_t2

0x1a0c,	// (0x0004da9e) cell_dia3_key_num_pane_t3

0x1a1b,	// (0x0004daad) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0005bf9b) cell_dia3_key_num_pane_t

0x0432,	// (0x0004c4c4) bg_button_pane_cp19

0xdc4f,	// (0x00059ce1) cell_dia3_key0_fun_pane_g1

0x0432,	// (0x0004c4c4) bg_button_pane_cp20

0xdc57,	// (0x00059ce9) cell_dia3_key1_fun_pane_g1

0xdc5f,	// (0x00059cf1) area_left_week_number_pane

0xdc68,	// (0x00059cfa) area_top_day_name_pane

0xdc71,	// (0x00059d03) frame_month_view_pane

0xdc7b,	// (0x00059d0d) grid_month_view_pane

0xdc85,	// (0x00059d17) cell_top_day_name_pane_ParamLimits

0xdc85,	// (0x00059d17) cell_top_day_name_pane

0xdc9f,	// (0x00059d31) cell_area_left_week_number_pane_ParamLimits

0xdc9f,	// (0x00059d31) cell_area_left_week_number_pane

0xdcb3,	// (0x00059d45) cell_month_view_pane_ParamLimits

0xdcb3,	// (0x00059d45) cell_month_view_pane

0x1a2a,	// (0x0004dabc) frm_month_g1

0xdcd0,	// (0x00059d62) frm_month_g2

0xdcda,	// (0x00059d6c) frm_month_g3

0xdce4,	// (0x00059d76) frm_month_g4

0xdcee,	// (0x00059d80) frm_month_g5

0xdcf8,	// (0x00059d8a) frm_month_g6

0xdd02,	// (0x00059d94) frm_month_g7

0x1a33,	// (0x0004dac5) frm_month_g8

0xdd0c,	// (0x00059d9e) frm_month_g9

0xdd15,	// (0x00059da7) frm_month_g10

0xdd1e,	// (0x00059db0) frm_month_g11

0xdd27,	// (0x00059db9) frm_month_g12

0xdd30,	// (0x00059dc2) frm_month_g13

0xdd39,	// (0x00059dcb) frm_month_g14

0xdd42,	// (0x00059dd4) frm_month_g15

0xdd4d,	// (0x00059ddf) frm_month_g16

0x000f,

0xff12,	// (0x0005bfa4) frm_month_g

0xdd58,	// (0x00059dea) cell_top_day_name_pane_t1

0xdd67,	// (0x00059df9) cell_area_left_week_number_pane_g1

0xdd58,	// (0x00059dea) cell_area_left_week_number_pane_t1

0x45d3,	// (0x00050665) cell_month_view_pane_g1

0xdd6f,	// (0x00059e01) cell_month_view_pane_t1

0x0432,	// (0x0004c4c4) main_fps_pane

0xf02e,	// (0x0005b0c0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf02e,	// (0x0005b0c0) cmail_ddmenu_btn02_pane_cp1

0xf04a,	// (0x0005b0dc) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf04a,	// (0x0005b0dc) cmail_ddmenu_btn02_pane_cp2

0xd648,	// (0x000596da) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd648,	// (0x000596da) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x0005becc) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x0005becc) cmail_ddmenu_btn02_pane_g

0xd666,	// (0x000596f8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd666,	// (0x000596f8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x0005bed1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x0005bed1) cmail_ddmenu_btn02_pane_t

0xdd7e,	// (0x00059e10) fps_text_pane_ParamLimits

0xdd7e,	// (0x00059e10) fps_text_pane

0xdd8b,	// (0x00059e1d) main_fps_pane_g1_ParamLimits

0xdd8b,	// (0x00059e1d) main_fps_pane_g1

0xdd99,	// (0x00059e2b) wait_bar_pane_cp010_ParamLimits

0xdd99,	// (0x00059e2b) wait_bar_pane_cp010

0xdda5,	// (0x00059e37) fps_text_pane_t1_ParamLimits

0xdda5,	// (0x00059e37) fps_text_pane_t1

0xabe6,	// (0x00056c78) cam4_image_uncrop_pane_g1

0xabef,	// (0x00056c81) cam4_image_uncrop_pane_g2

0xabf8,	// (0x00056c8a) cam4_image_uncrop_pane_g3

0xac01,	// (0x00056c93) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0005b99f) cam4_image_uncrop_pane_g

0xdc42,	// (0x00059cd4) dia3_listrow_pane_ParamLimits

0x0432,	// (0x0004c4c4) main_phob2_pane

0xd18c,	// (0x0005921e) cell_tport_appsw_pane_cp02_ParamLimits

0xd18c,	// (0x0005921e) cell_tport_appsw_pane_cp02

0xd19b,	// (0x0005922d) cell_tport_appsw_pane_cp03_ParamLimits

0xd19b,	// (0x0005922d) cell_tport_appsw_pane_cp03

0x0432,	// (0x0004c4c4) phob2_contact_card_pane

0x0432,	// (0x0004c4c4) phob2_listscroll_pane

0x1a3c,	// (0x0004dace) phob2_list_pane

0x1a44,	// (0x0004dad6) scroll_pane_cp034

0xddbe,	// (0x00059e50) phob2_cc_data_pane_ParamLimits

0xddbe,	// (0x00059e50) phob2_cc_data_pane

0xddd8,	// (0x00059e6a) phob2_cc_listscroll_pane_ParamLimits

0xddd8,	// (0x00059e6a) phob2_cc_listscroll_pane

0xddf2,	// (0x00059e84) list_double_large_graphic_phob2_pane_ParamLimits

0xddf2,	// (0x00059e84) list_double_large_graphic_phob2_pane

0xde15,	// (0x00059ea7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xde15,	// (0x00059ea7) list_double_large_graphic_phob2_pane_g1

0xde22,	// (0x00059eb4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xde22,	// (0x00059eb4) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0005bfc5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0005bfc5) list_double_large_graphic_phob2_pane_g

0xde2e,	// (0x00059ec0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xde2e,	// (0x00059ec0) list_double_large_graphic_phob2_pane_t1

0xde43,	// (0x00059ed5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xde43,	// (0x00059ed5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0005bfca) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0005bfca) list_double_large_graphic_phob2_pane_t

0x0432,	// (0x0004c4c4) list_highlight_pane_cp024

0x1a4c,	// (0x0004dade) phob2_cc_button_pane

0xde55,	// (0x00059ee7) phob2_cc_data_pane_g1_ParamLimits

0xde55,	// (0x00059ee7) phob2_cc_data_pane_g1

0xde61,	// (0x00059ef3) phob2_cc_data_pane_g2_ParamLimits

0xde61,	// (0x00059ef3) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0005bfcf) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0005bfcf) phob2_cc_data_pane_g

0xde6d,	// (0x00059eff) phob2_cc_data_pane_t1_ParamLimits

0xde6d,	// (0x00059eff) phob2_cc_data_pane_t1

0xde7f,	// (0x00059f11) phob2_cc_data_pane_t2_ParamLimits

0xde7f,	// (0x00059f11) phob2_cc_data_pane_t2

0xde91,	// (0x00059f23) phob2_cc_data_pane_t3_ParamLimits

0xde91,	// (0x00059f23) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0005bfd4) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0005bfd4) phob2_cc_data_pane_t

0x1a54,	// (0x0004dae6) phob2_cc_list_pane_ParamLimits

0x1a54,	// (0x0004dae6) phob2_cc_list_pane

0xeade,	// (0x0005ab70) scroll_pane_cp035_ParamLimits

0xeade,	// (0x0005ab70) scroll_pane_cp035

0x361c,	// (0x0004f6ae) bg_button_pane_cp033

0x1a60,	// (0x0004daf2) phob2_cc_button_pane_g1

0x1a6c,	// (0x0004dafe) phob2_cc_button_pane_t1

0x1a81,	// (0x0004db13) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0005bfdb) phob2_cc_button_pane_t

0xdea3,	// (0x00059f35) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdea3,	// (0x00059f35) list_double_large_graphic_phob2_cc_pane

0xded3,	// (0x00059f65) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xded3,	// (0x00059f65) list_double_large_graphic_phob2_cc_pane_g1

0xdee4,	// (0x00059f76) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdee4,	// (0x00059f76) list_double_large_graphic_phob2_cc_pane_g2

0xdef3,	// (0x00059f85) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdef3,	// (0x00059f85) list_double_large_graphic_phob2_cc_pane_g3

0xdf02,	// (0x00059f94) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdf02,	// (0x00059f94) list_double_large_graphic_phob2_cc_pane_g4

0xdf13,	// (0x00059fa5) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdf13,	// (0x00059fa5) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0005bfe0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0005bfe0) list_double_large_graphic_phob2_cc_pane_g

0xdf22,	// (0x00059fb4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdf22,	// (0x00059fb4) list_double_large_graphic_phob2_cc_pane_t1

0xdf4b,	// (0x00059fdd) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xdf4b,	// (0x00059fdd) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0005bfeb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0005bfeb) list_double_large_graphic_phob2_cc_pane_t

0x1a93,	// (0x0004db25) list_highlight_pane_cp025_ParamLimits

0x1a93,	// (0x0004db25) list_highlight_pane_cp025

0x361c,	// (0x0004f6ae) bg_button_pane_cp033_ParamLimits

0x1a60,	// (0x0004daf2) phob2_cc_button_pane_g1_ParamLimits

0x1a6c,	// (0x0004dafe) phob2_cc_button_pane_t1_ParamLimits

0x1a81,	// (0x0004db13) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0005bfdb) phob2_cc_button_pane_t_ParamLimits

0x5b37,	// (0x00051bc9) popup_wgtman_window

0xe264,	// (0x0005a2f6) scroll_pane_cp038

0xda16,	// (0x00059aa8) wgtman_btn_pane_cp_01_ParamLimits

0xda16,	// (0x00059aa8) wgtman_btn_pane_cp_01

0x1aa1,	// (0x0004db33) wgtman_content_pane

0x17ea,	// (0x0004d87c) wgtman_heading_pane

0x0432,	// (0x0004c4c4) bg_heading_pane_cp02

0x1aaa,	// (0x0004db3c) wgtman_heading_pane_g1

0x1ab2,	// (0x0004db44) wgtman_heading_pane_t1

0x1ac0,	// (0x0004db52) scroll_pane_cp036

0x1ac8,	// (0x0004db5a) wgtman_list_pane

0x1ad0,	// (0x0004db62) wgtman_list_pane_t1_ParamLimits

0x1ad0,	// (0x0004db62) wgtman_list_pane_t1

0xab45,	// (0x00056bd7) cam4_grid_pane

0xb889,	// (0x0005791b) bg_button_pane_cp015_ParamLimits

0xb89b,	// (0x0005792d) bg_button_pane_cp016_ParamLimits

0xb8ae,	// (0x00057940) bg_button_pane_cp017_ParamLimits

0xb904,	// (0x00057996) popup_vitu2_query_window_g3_ParamLimits

0xb904,	// (0x00057996) popup_vitu2_query_window_g3

0xb9bf,	// (0x00057a51) popup_vitu2_query_window_t6_ParamLimits

0xb9bf,	// (0x00057a51) popup_vitu2_query_window_t6

0xb9ea,	// (0x00057a7c) popup_vitu2_query_window_t7_ParamLimits

0xb9ea,	// (0x00057a7c) popup_vitu2_query_window_t7

0xedae,	// (0x0005ae40) cam4_grid_pane_g1

0xedb7,	// (0x0005ae49) cam4_grid_pane_g2

0x1af2,	// (0x0004db84) cam4_grid_pane_g3

0x1afb,	// (0x0004db8d) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0005bff0) cam4_grid_pane_g

0x6a7b,	// (0x00052b0d) aid_placing_vt_slider_lsc_ParamLimits

0x6dbb,	// (0x00052e4d) vidtel_button_pane_ParamLimits

0x6dbb,	// (0x00052e4d) vidtel_button_pane

0x0432,	// (0x0004c4c4) bg_button_pane_cp034

0xdf74,	// (0x0005a006) vidtel_button_pane_g1

0x1b06,	// (0x0004db98) vidtel_button_pane_t1

0xe366,	// (0x0005a3f8) aid_size_vtel_slider_touch

0xeade,	// (0x0005ab70) scroll_pane_cp039

0xebff,	// (0x0005ac91) ncim_query_button_pane_cp01_ParamLimits

0xec1e,	// (0x0005acb0) ncimui_query_pane_g1_ParamLimits

0x361c,	// (0x0004f6ae) input_focus_pane_cp012_ParamLimits

0xec43,	// (0x0005acd5) ncim_query_entry_pane_t1_ParamLimits

0xeade,	// (0x0005ab70) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
