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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0003bdc9 };

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
0x34a7,	// (0x0003f270) Screen

0x34b1,	// (0x0003f27a) application_window

0x34e7,	// (0x0003f2b0) area_bottom_pane_ParamLimits

0x34e7,	// (0x0003f2b0) area_bottom_pane

0x351a,	// (0x0003f2e3) area_top_pane_ParamLimits

0x351a,	// (0x0003f2e3) area_top_pane

0xbc8b,	// (0x00047a54) call_video_uplink_pane_ParamLimits

0xbc8b,	// (0x00047a54) call_video_uplink_pane

0x359a,	// (0x0003f363) main_pane_ParamLimits

0x359a,	// (0x0003f363) main_pane

0xbf34,	// (0x00047cfd) context_pane

0x70c4,	// (0x00042e8d) navi_pane

0x70ed,	// (0x00042eb6) popup_cale_events_window_ParamLimits

0x70ed,	// (0x00042eb6) popup_cale_events_window

0xbf47,	// (0x00047d10) popup_mup_playback_window

0x7105,	// (0x00042ece) signal_pane

0x0dcd,	// (0x0003cb96) main_browser_pane

0x0f9a,	// (0x0003cd63) main_burst_pane

0x1a5e,	// (0x0003d827) main_calc_pane

0x6e64,	// (0x00042c2d) main_cale_day_pane

0x3a30,	// (0x0003f7f9) main_cale_month_pane

0x6e64,	// (0x00042c2d) main_cale_week_pane

0x0f9a,	// (0x0003cd63) main_call_pane

0x0a82,	// (0x0003c84b) main_call_poc_pane

0x0f9a,	// (0x0003cd63) main_camera_pane

0x0f9a,	// (0x0003cd63) main_chi_dic_pane

0x1770,	// (0x0003d539) main_clock_pane

0x0a82,	// (0x0003c84b) main_fmradio_pane

0x0f9a,	// (0x0003cd63) main_graph_messa_pane

0x0a82,	// (0x0003c84b) main_help_pane

0x0dcd,	// (0x0003cb96) main_im_pane

0x0cdd,	// (0x0003caa6) main_image_pane_ParamLimits

0x0cdd,	// (0x0003caa6) main_image_pane

0x0a82,	// (0x0003c84b) main_location2_pane

0x0f9a,	// (0x0003cd63) main_location_pane

0x0cdd,	// (0x0003caa6) main_messa_pane

0x0a82,	// (0x0003c84b) main_mp2_pane

0x0f9a,	// (0x0003cd63) main_mp_pane

0x0a82,	// (0x0003c84b) main_msg_pane

0x0a82,	// (0x0003c84b) main_mup_eq_pane

0x0a82,	// (0x0003c84b) main_mup_pane

0x0dcd,	// (0x0003cb96) main_notes_pane

0x0a82,	// (0x0003c84b) main_pec_pane

0x0a82,	// (0x0003c84b) main_phob_pane

0x0a82,	// (0x0003c84b) main_pinb_pane

0x0a82,	// (0x0003c84b) main_postcard_pane

0x0a82,	// (0x0003c84b) main_qdial_pane

0x0f9a,	// (0x0003cd63) main_skin_pane

0x0a82,	// (0x0003c84b) main_smil2_pane

0x0f9a,	// (0x0003cd63) main_smil_pane

0x0f9a,	// (0x0003cd63) main_video_pane

0x0f9a,	// (0x0003cd63) main_video_tele_pane

0x0cdd,	// (0x0003caa6) main_viewer_pane_ParamLimits

0x0cdd,	// (0x0003caa6) main_viewer_pane

0x0f9a,	// (0x0003cd63) main_vorec_pane

0x6eb8,	// (0x00042c81) popup_blid_sat_info_window_ParamLimits

0x6eb8,	// (0x00042c81) popup_blid_sat_info_window

0x6f0e,	// (0x00042cd7) popup_dyc_status_message_window_ParamLimits

0x6f0e,	// (0x00042cd7) popup_dyc_status_message_window

0x6f24,	// (0x00042ced) popup_grid_large_graphic_window_ParamLimits

0x6f24,	// (0x00042ced) popup_grid_large_graphic_window

0x6fba,	// (0x00042d83) popup_loc_request_window_ParamLimits

0x6fba,	// (0x00042d83) popup_loc_request_window

0x709e,	// (0x00042e67) popup_wml_address_window_ParamLimits

0x709e,	// (0x00042e67) popup_wml_address_window

0x6cbf,	// (0x00042a88) call_muted_g1

0x5ac9,	// (0x00041892) popup_call_audio_conf_window_ParamLimits

0x5ac9,	// (0x00041892) popup_call_audio_conf_window

0x6ccf,	// (0x00042a98) popup_call_audio_first_window_ParamLimits

0x6ccf,	// (0x00042a98) popup_call_audio_first_window

0x6d2d,	// (0x00042af6) popup_call_audio_in_window_ParamLimits

0x6d2d,	// (0x00042af6) popup_call_audio_in_window

0x6d59,	// (0x00042b22) popup_call_audio_out_window_ParamLimits

0x6d59,	// (0x00042b22) popup_call_audio_out_window

0x6d87,	// (0x00042b50) popup_call_audio_second_window_ParamLimits

0x6d87,	// (0x00042b50) popup_call_audio_second_window

0x6dcd,	// (0x00042b96) popup_call_audio_wait_window_ParamLimits

0x6dcd,	// (0x00042b96) popup_call_audio_wait_window

0x6e00,	// (0x00042bc9) popup_number_entry_window_ParamLimits

0x6e00,	// (0x00042bc9) popup_number_entry_window

0x0671,	// (0x0003c43a) bg_popup_call_pane_cp05_ParamLimits

0x0671,	// (0x0003c43a) bg_popup_call_pane_cp05

0x0691,	// (0x0003c45a) popup_number_entry_window_t1

0x06a4,	// (0x0003c46d) popup_number_entry_window_t2

0x06b6,	// (0x0003c47f) popup_number_entry_window_t3

0x0003,

0xf05f,	// (0x0004ae28) popup_number_entry_window_t

0x06c8,	// (0x0003c491) text_title_cp2

0x06db,	// (0x0003c4a4) bg_popup_call_pane_cp_ParamLimits

0x06db,	// (0x0003c4a4) bg_popup_call_pane_cp

0x06e9,	// (0x0003c4b2) call_thumbnail_pane

0x06f1,	// (0x0003c4ba) popup_call_audio_in_window_g1_ParamLimits

0x06f1,	// (0x0003c4ba) popup_call_audio_in_window_g1

0x06fd,	// (0x0003c4c6) popup_call_audio_in_window_g2_ParamLimits

0x06fd,	// (0x0003c4c6) popup_call_audio_in_window_g2

0x0709,	// (0x0003c4d2) popup_call_audio_in_window_g3_ParamLimits

0x0709,	// (0x0003c4d2) popup_call_audio_in_window_g3

0x0002,

0xf068,	// (0x0004ae31) popup_call_audio_in_window_g_ParamLimits

0xf068,	// (0x0004ae31) popup_call_audio_in_window_g

0x0715,	// (0x0003c4de) popup_call_audio_in_window_t1_ParamLimits

0x0715,	// (0x0003c4de) popup_call_audio_in_window_t1

0x0730,	// (0x0003c4f9) popup_call_audio_in_window_t2_ParamLimits

0x0730,	// (0x0003c4f9) popup_call_audio_in_window_t2

0x074b,	// (0x0003c514) popup_call_audio_in_window_t3_ParamLimits

0x074b,	// (0x0003c514) popup_call_audio_in_window_t3

0x0002,

0xf06f,	// (0x0004ae38) popup_call_audio_in_window_t_ParamLimits

0xf06f,	// (0x0004ae38) popup_call_audio_in_window_t

0x06db,	// (0x0003c4a4) bg_popup_call_pane_cp01_ParamLimits

0x06db,	// (0x0003c4a4) bg_popup_call_pane_cp01

0x06e9,	// (0x0003c4b2) call_thumbnail_pane_cp02

0x075e,	// (0x0003c527) call_type_pane_cp022

0x0766,	// (0x0003c52f) popup_call_audio_out_window_g1_ParamLimits

0x0766,	// (0x0003c52f) popup_call_audio_out_window_g1

0x0778,	// (0x0003c541) popup_call_audio_out_window_g2_ParamLimits

0x0778,	// (0x0003c541) popup_call_audio_out_window_g2

0x0784,	// (0x0003c54d) popup_call_audio_out_window_g3_ParamLimits

0x0784,	// (0x0003c54d) popup_call_audio_out_window_g3

0x0002,

0xf076,	// (0x0004ae3f) popup_call_audio_out_window_g_ParamLimits

0xf076,	// (0x0004ae3f) popup_call_audio_out_window_g

0x0796,	// (0x0003c55f) popup_call_audio_out_window_t1_ParamLimits

0x0796,	// (0x0003c55f) popup_call_audio_out_window_t1

0x07ae,	// (0x0003c577) popup_call_audio_out_window_t2_ParamLimits

0x07ae,	// (0x0003c577) popup_call_audio_out_window_t2

0x0001,

0xf07d,	// (0x0004ae46) popup_call_audio_out_window_t_ParamLimits

0xf07d,	// (0x0004ae46) popup_call_audio_out_window_t

0x07c3,	// (0x0003c58c) bg_popup_call_pane_ParamLimits

0x07c3,	// (0x0003c58c) bg_popup_call_pane

0x3722,	// (0x0003f4eb) call_thumbnail_pane_cp_ParamLimits

0x3722,	// (0x0003f4eb) call_thumbnail_pane_cp

0x0847,	// (0x0003c610) call_type_pane_cp01_ParamLimits

0x0847,	// (0x0003c610) call_type_pane_cp01

0x088b,	// (0x0003c654) popup_call_audio_first_window_g1_ParamLimits

0x088b,	// (0x0003c654) popup_call_audio_first_window_g1

0x08d7,	// (0x0003c6a0) popup_call_audio_first_window_g2_ParamLimits

0x08d7,	// (0x0003c6a0) popup_call_audio_first_window_g2

0x0001,

0xf082,	// (0x0004ae4b) popup_call_audio_first_window_g_ParamLimits

0xf082,	// (0x0004ae4b) popup_call_audio_first_window_g

0x091b,	// (0x0003c6e4) popup_call_audio_first_window_t1_ParamLimits

0x091b,	// (0x0003c6e4) popup_call_audio_first_window_t1

0x09c7,	// (0x0003c790) popup_call_audio_first_window_t4_ParamLimits

0x09c7,	// (0x0003c790) popup_call_audio_first_window_t4

0x0a53,	// (0x0003c81c) popup_call_audio_first_window_t5_ParamLimits

0x0a53,	// (0x0003c81c) popup_call_audio_first_window_t5

0x0002,

0xf087,	// (0x0004ae50) popup_call_audio_first_window_t_ParamLimits

0xf087,	// (0x0004ae50) popup_call_audio_first_window_t

0x0a82,	// (0x0003c84b) bg_popup_call_pane_cp02

0x0a8c,	// (0x0003c855) call_type_pane_cp023

0x0a94,	// (0x0003c85d) popup_call_audio_wait_window_g1

0x0a9c,	// (0x0003c865) popup_call_audio_wait_window_g2

0x0001,

0xf08e,	// (0x0004ae57) popup_call_audio_wait_window_g

0x0aa4,	// (0x0003c86d) popup_call_audio_wait_window_t3

0x0ab2,	// (0x0003c87b) bg_popup_call_pane_cp03_ParamLimits

0x0ab2,	// (0x0003c87b) bg_popup_call_pane_cp03

0x0b12,	// (0x0003c8db) call_thumbnail_pane_cp011_ParamLimits

0x0b12,	// (0x0003c8db) call_thumbnail_pane_cp011

0x0b1e,	// (0x0003c8e7) call_type_pane_cp034_ParamLimits

0x0b1e,	// (0x0003c8e7) call_type_pane_cp034

0x0b5a,	// (0x0003c923) popup_call_audio_second_window_g1_ParamLimits

0x0b5a,	// (0x0003c923) popup_call_audio_second_window_g1

0x0b96,	// (0x0003c95f) popup_call_audio_second_window_g2_ParamLimits

0x0b96,	// (0x0003c95f) popup_call_audio_second_window_g2

0x0001,

0xf093,	// (0x0004ae5c) popup_call_audio_second_window_g_ParamLimits

0xf093,	// (0x0004ae5c) popup_call_audio_second_window_g

0x0bd2,	// (0x0003c99b) popup_call_audio_second_window_t1_ParamLimits

0x0bd2,	// (0x0003c99b) popup_call_audio_second_window_t1

0x0c53,	// (0x0003ca1c) popup_call_audio_second_window_t2_ParamLimits

0x0c53,	// (0x0003ca1c) popup_call_audio_second_window_t2

0x0c89,	// (0x0003ca52) popup_call_audio_second_window_t3_ParamLimits

0x0c89,	// (0x0003ca52) popup_call_audio_second_window_t3

0x0002,

0xf098,	// (0x0004ae61) popup_call_audio_second_window_t_ParamLimits

0xf098,	// (0x0004ae61) popup_call_audio_second_window_t

0x0a82,	// (0x0003c84b) bg_popup_call_pane_cp04

0x0cbf,	// (0x0003ca88) list_conf_pane

0x0cc7,	// (0x0003ca90) popup_call_audio_conf_window_t1

0x0cd5,	// (0x0003ca9e) call_thumbnail_pane_g1

0x0cdd,	// (0x0003caa6) bg_pinb_pane_ParamLimits

0x0cdd,	// (0x0003caa6) bg_pinb_pane

0x0ceb,	// (0x0003cab4) find_pinb_pane

0x0cdd,	// (0x0003caa6) listscroll_pinb_pane_ParamLimits

0x0cdd,	// (0x0003caa6) listscroll_pinb_pane

0x0cf5,	// (0x0003cabe) pinb_bg_pane_g1

0x0cf5,	// (0x0003cabe) pinb_bg_pane_g2

0x0cf5,	// (0x0003cabe) pinb_bg_pane_g3

0x0cf5,	// (0x0003cabe) pinb_bg_pane_g4

0x0cf5,	// (0x0003cabe) pinb_bg_pane_g5

0x0cf5,	// (0x0003cabe) pinb_bg_pane_g6

0x0cf5,	// (0x0003cabe) pinb_bg_pane_g7

0x0cf5,	// (0x0003cabe) pinb_bg_pane_g8

0x0cf5,	// (0x0003cabe) pinb_bg_pane_g9

0x0cf5,	// (0x0003cabe) pinb_bg_pane_g10

0x0009,

0xf09f,	// (0x0004ae68) pinb_bg_pane_g

0x3751,	// (0x0003f51a) grid_pinb_pane

0x0659,	// (0x0003c422) list_pinb_pane

0x0cff,	// (0x0003cac8) scroll_pane_cp01_ParamLimits

0x0cff,	// (0x0003cac8) scroll_pane_cp01

0x0d0c,	// (0x0003cad5) find_pinb_pane_g1_ParamLimits

0x0d0c,	// (0x0003cad5) find_pinb_pane_g1

0x0d24,	// (0x0003caed) find_pinb_pane_t1

0x0d36,	// (0x0003caff) find_pinb_pane_t2

0x0001,

0xf0b9,	// (0x0004ae82) find_pinb_pane_t

0x0d4b,	// (0x0003cb14) input_focus_pane_cp01_ParamLimits

0x0d4b,	// (0x0003cb14) input_focus_pane_cp01

0x375b,	// (0x0003f524) cell_pinb_pane_ParamLimits

0x375b,	// (0x0003f524) cell_pinb_pane

0x0d57,	// (0x0003cb20) cell_pinb_pane_g1_ParamLimits

0x0d57,	// (0x0003cb20) cell_pinb_pane_g1

0x0d65,	// (0x0003cb2e) cell_pinb_pane_g2_ParamLimits

0x0d65,	// (0x0003cb2e) cell_pinb_pane_g2

0x0d65,	// (0x0003cb2e) cell_pinb_pane_g3_ParamLimits

0x0d65,	// (0x0003cb2e) cell_pinb_pane_g3

0x0002,

0xf0be,	// (0x0004ae87) cell_pinb_pane_g_ParamLimits

0xf0be,	// (0x0004ae87) cell_pinb_pane_g

0x0a82,	// (0x0003c84b) grid_highlight_pane_cp01

0x0663,	// (0x0003c42c) list_pinb_item_pane_ParamLimits

0x0663,	// (0x0003c42c) list_pinb_item_pane

0x0659,	// (0x0003c422) list_highlight_pane_cp02

0x0d73,	// (0x0003cb3c) list_pinb_item_pane_g1_ParamLimits

0x0d73,	// (0x0003cb3c) list_pinb_item_pane_g1

0x0d65,	// (0x0003cb2e) list_pinb_item_pane_g2_ParamLimits

0x0d65,	// (0x0003cb2e) list_pinb_item_pane_g2

0x0d57,	// (0x0003cb20) list_pinb_item_pane_g3_ParamLimits

0x0d57,	// (0x0003cb20) list_pinb_item_pane_g3

0x0d65,	// (0x0003cb2e) list_pinb_item_pane_g4_ParamLimits

0x0d65,	// (0x0003cb2e) list_pinb_item_pane_g4

0x0003,

0xf0c5,	// (0x0004ae8e) list_pinb_item_pane_g_ParamLimits

0xf0c5,	// (0x0004ae8e) list_pinb_item_pane_g

0x0d81,	// (0x0003cb4a) list_pinb_item_pane_t1_ParamLimits

0x0d81,	// (0x0003cb4a) list_pinb_item_pane_t1

0x378f,	// (0x0003f558) calc_display_pane

0x37ab,	// (0x0003f574) calc_paper_pane

0x37cc,	// (0x0003f595) grid_calc_pane

0x0a82,	// (0x0003c84b) bg_list_pane_cp01

0x37e8,	// (0x0003f5b1) clock_g1

0x37f0,	// (0x0003f5b9) clock_g2

0x0001,

0xf0ce,	// (0x0004ae97) clock_g

0x37f8,	// (0x0003f5c1) clock_t1_ParamLimits

0x37f8,	// (0x0003f5c1) clock_t1

0x380d,	// (0x0003f5d6) clock_t2_ParamLimits

0x380d,	// (0x0003f5d6) clock_t2

0x381f,	// (0x0003f5e8) clock_t3_ParamLimits

0x381f,	// (0x0003f5e8) clock_t3

0x3831,	// (0x0003f5fa) clock_t4_ParamLimits

0x3831,	// (0x0003f5fa) clock_t4

0x3843,	// (0x0003f60c) clock_t5_ParamLimits

0x3843,	// (0x0003f60c) clock_t5

0x3858,	// (0x0003f621) clock_t6_ParamLimits

0x3858,	// (0x0003f621) clock_t6

0x386a,	// (0x0003f633) clock_t7_ParamLimits

0x386a,	// (0x0003f633) clock_t7

0x387c,	// (0x0003f645) clock_t8_ParamLimits

0x387c,	// (0x0003f645) clock_t8

0x388e,	// (0x0003f657) clock_t9_ParamLimits

0x388e,	// (0x0003f657) clock_t9

0x0008,

0xf0d3,	// (0x0004ae9c) clock_t_ParamLimits

0xf0d3,	// (0x0004ae9c) clock_t

0x0d95,	// (0x0003cb5e) popup_clock_analogue_window_cp02

0x0d95,	// (0x0003cb5e) popup_clock_digital_window_cp01

0x0a82,	// (0x0003c84b) listscroll_help_pane

0x0a82,	// (0x0003c84b) phob_pre_status_pane

0x0d9d,	// (0x0003cb66) grid_qdial_pane

0x0cdd,	// (0x0003caa6) listscroll_mce_pane

0x0cdd,	// (0x0003caa6) bg_notes_pane

0x0da7,	// (0x0003cb70) list_notes_pane

0x38a0,	// (0x0003f669) scroll_pane_cp06

0x0db5,	// (0x0003cb7e) bg_calc_paper_pane

0xbcaf,	// (0x00047a78) list_calc_pane

0x0dcd,	// (0x0003cb96) bg_calc_display_pane

0xbcc9,	// (0x00047a92) calc_display_pane_t1

0xbcde,	// (0x00047aa7) calc_display_pane_t2

0xbcf3,	// (0x00047abc) calc_display_pane_t3

0x0002,

0xf0e6,	// (0x0004aeaf) calc_display_pane_t

0x38b2,	// (0x0003f67b) cell_calc_pane_ParamLimits

0x38b2,	// (0x0003f67b) cell_calc_pane

0x0dd9,	// (0x0003cba2) bg_calc_paper_pane_g1

0x0de5,	// (0x0003cbae) bg_calc_paper_pane_g2

0x0df1,	// (0x0003cbba) bg_calc_paper_pane_g3

0x0dfd,	// (0x0003cbc6) bg_calc_paper_pane_g4

0x0e09,	// (0x0003cbd2) bg_calc_paper_pane_g5

0x38e5,	// (0x0003f6ae) bg_calc_paper_pane_g6

0x38f4,	// (0x0003f6bd) bg_calc_paper_pane_g7

0x3903,	// (0x0003f6cc) bg_calc_paper_pane_g8

0x0007,

0xf0ed,	// (0x0004aeb6) bg_calc_paper_pane_g

0x3912,	// (0x0003f6db) calc_bg_paper_pane_g9

0x3921,	// (0x0003f6ea) list_calc_item_pane_ParamLimits

0x3921,	// (0x0003f6ea) list_calc_item_pane

0x0e15,	// (0x0003cbde) list_calc_item_pane_g1

0xbd05,	// (0x00047ace) list_calc_item_pane_t1_ParamLimits

0xbd05,	// (0x00047ace) list_calc_item_pane_t1

0x3935,	// (0x0003f6fe) list_calc_item_pane_t2_ParamLimits

0x3935,	// (0x0003f6fe) list_calc_item_pane_t2

0x0001,

0xf0fe,	// (0x0004aec7) list_calc_item_pane_t_ParamLimits

0xf0fe,	// (0x0004aec7) list_calc_item_pane_t

0x0cf5,	// (0x0003cabe) cell_calc_pane_g1

0x0e22,	// (0x0003cbeb) grid_highlight_pane_cp02

0x0e44,	// (0x0003cc0d) bg_calc_display_pane_g1

0xbd17,	// (0x00047ae0) bg_calc_display_pane_g2

0x0e4d,	// (0x0003cc16) bg_calc_display_pane_g3

0x0002,

0xf108,	// (0x0004aed1) bg_calc_display_pane_g

0x3963,	// (0x0003f72c) cell_qdial_pane_ParamLimits

0x3963,	// (0x0003f72c) cell_qdial_pane

0x3975,	// (0x0003f73e) cell_qdial_pane_g1_ParamLimits

0x3975,	// (0x0003f73e) cell_qdial_pane_g1

0x398b,	// (0x0003f754) cell_qdial_pane_g2_ParamLimits

0x398b,	// (0x0003f754) cell_qdial_pane_g2

0x0e56,	// (0x0003cc1f) cell_qdial_pane_g3_ParamLimits

0x0e56,	// (0x0003cc1f) cell_qdial_pane_g3

0x0003,

0xf10f,	// (0x0004aed8) cell_qdial_pane_g_ParamLimits

0xf10f,	// (0x0004aed8) cell_qdial_pane_g

0x39b2,	// (0x0003f77b) cell_qdial_pane_t1_ParamLimits

0x39b2,	// (0x0003f77b) cell_qdial_pane_t1

0x39ca,	// (0x0003f793) cell_qdial_pane_t2_ParamLimits

0x39ca,	// (0x0003f793) cell_qdial_pane_t2

0x39dd,	// (0x0003f7a6) cell_qdial_pane_t3_ParamLimits

0x39dd,	// (0x0003f7a6) cell_qdial_pane_t3

0x0002,

0xf118,	// (0x0004aee1) cell_qdial_pane_t_ParamLimits

0xf118,	// (0x0004aee1) cell_qdial_pane_t

0x0a82,	// (0x0003c84b) grid_highlight_pane_cp04

0x0e62,	// (0x0003cc2b) thumbnail_qdial_pane_ParamLimits

0x0e62,	// (0x0003cc2b) thumbnail_qdial_pane

0x0ebe,	// (0x0003cc87) list_help_pane

0x0ec8,	// (0x0003cc91) scroll_pane_cp02

0x39f0,	// (0x0003f7b9) help_list_pane_t1_ParamLimits

0x39f0,	// (0x0003f7b9) help_list_pane_t1

0xbd21,	// (0x00047aea) bg_notes_pane_g2

0xbd29,	// (0x00047af2) bg_notes_pane_g3

0xbd31,	// (0x00047afa) notes_bg_pane_g1

0xbd39,	// (0x00047b02) notes_bg_pane_g4

0xbd41,	// (0x00047b0a) notes_bg_pane_g5

0xbd49,	// (0x00047b12) notes_bg_pane_g6

0xbd51,	// (0x00047b1a) notes_bg_pane_g7

0xbd59,	// (0x00047b22) notes_bg_pane_g8

0xbd61,	// (0x00047b2a) notes_bg_pane_g9

0x0006,

0xf136,	// (0x0004aeff) notes_bg_pane_g

0x3a0d,	// (0x0003f7d6) list_notes_text_pane_ParamLimits

0x3a0d,	// (0x0003f7d6) list_notes_text_pane

0x0ed1,	// (0x0003cc9a) list_notes_text_pane_g1

0x2bf8,	// (0x0003e9c1) list_notes_text_pane_t1

0x3a30,	// (0x0003f7f9) listscroll_cale_week_pane

0x3a5a,	// (0x0003f823) bg_cale_heading_pane

0x0ef4,	// (0x0003ccbd) bg_cale_pane_cp01

0x3a72,	// (0x0003f83b) cale_week_corner_pane

0x3a91,	// (0x0003f85a) cale_week_day_heading_pane

0x3aae,	// (0x0003f877) cale_week_scroll_pane_g1

0x3ac1,	// (0x0003f88a) cale_week_scroll_pane_g2

0x3ad9,	// (0x0003f8a2) cale_week_scroll_pane_g3

0x3af1,	// (0x0003f8ba) cale_week_scroll_pane_g4

0x3b09,	// (0x0003f8d2) cale_week_scroll_pane_g5

0x3b21,	// (0x0003f8ea) cale_week_scroll_pane_g6

0x3b39,	// (0x0003f902) cale_week_scroll_pane_g7

0x3b51,	// (0x0003f91a) cale_week_scroll_pane_g8

0x3b6d,	// (0x0003f936) cale_week_scroll_pane_g9

0x3b85,	// (0x0003f94e) cale_week_scroll_pane_g10

0x3b9d,	// (0x0003f966) cale_week_scroll_pane_g11

0x3bb5,	// (0x0003f97e) cale_week_scroll_pane_g12

0x3bcd,	// (0x0003f996) cale_week_scroll_pane_g13

0x3be5,	// (0x0003f9ae) cale_week_scroll_pane_g14

0x3bfd,	// (0x0003f9c6) cale_week_scroll_pane_g15

0x000f,

0xf145,	// (0x0004af0e) cale_week_scroll_pane_g

0x3c31,	// (0x0003f9fa) cale_week_time_pane

0x3c4d,	// (0x0003fa16) grid_cale_week_pane

0x0f23,	// (0x0003ccec) scroll_pane_cp08

0x3c6b,	// (0x0003fa34) cell_cale_week_pane_ParamLimits

0x3c6b,	// (0x0003fa34) cell_cale_week_pane

0x3ce1,	// (0x0003faaa) cale_week_day_heading_pane_t1

0x3d0b,	// (0x0003fad4) cale_week_day_heading_pane_t2

0x3d3a,	// (0x0003fb03) cale_week_day_heading_pane_t3

0x3d69,	// (0x0003fb32) cale_week_day_heading_pane_t4

0x3d98,	// (0x0003fb61) cale_week_day_heading_pane_t5

0x3dc7,	// (0x0003fb90) cale_week_day_heading_pane_t6

0x3df6,	// (0x0003fbbf) cale_week_day_heading_pane_t7

0x0006,

0xf166,	// (0x0004af2f) cale_week_day_heading_pane_t

0x0f40,	// (0x0003cd09) bg_cale_side_pane

0x3e20,	// (0x0003fbe9) cale_week_time_pane_t1

0x3e5a,	// (0x0003fc23) cale_week_time_pane_t2

0x3e94,	// (0x0003fc5d) cale_week_time_pane_t3

0x3ece,	// (0x0003fc97) cale_week_time_pane_t4

0x3f08,	// (0x0003fcd1) cale_week_time_pane_t5

0x3f42,	// (0x0003fd0b) cale_week_time_pane_t6

0x3f7c,	// (0x0003fd45) cale_week_time_pane_t7

0x3fb6,	// (0x0003fd7f) cale_week_time_pane_t8

0x0007,

0xf175,	// (0x0004af3e) cale_week_time_pane_t

0x3ff0,	// (0x0003fdb9) cell_cale_week_pane_g2

0x400f,	// (0x0003fdd8) cell_cale_week_pane_g3_ParamLimits

0x400f,	// (0x0003fdd8) cell_cale_week_pane_g3

0x0f4e,	// (0x0003cd17) grid_highlight_pane_cp07

0x0f56,	// (0x0003cd1f) listscroll_gms_pane

0x0f60,	// (0x0003cd29) grid_gms_pane

0x0f69,	// (0x0003cd32) listscroll_gms_pane_g1

0x0f71,	// (0x0003cd3a) listscroll_gms_pane_g2

0x0001,

0xf186,	// (0x0004af4f) listscroll_gms_pane_g

0x4027,	// (0x0003fdf0) scroll_pane_cp010

0x4032,	// (0x0003fdfb) cell_gms_pane_ParamLimits

0x4032,	// (0x0003fdfb) cell_gms_pane

0x4042,	// (0x0003fe0b) cell_gms_pane_g1

0x0f79,	// (0x0003cd42) cell_gms_pane_g2

0x0ed1,	// (0x0003cc9a) cell_gms_pane_g3

0x0f81,	// (0x0003cd4a) cell_gms_pane_g4

0x0003,

0xf18b,	// (0x0004af54) cell_gms_pane_g

0x0f8a,	// (0x0003cd53) grid_highlight_pane_cp09

0x6c4d,	// (0x00042a16) phob_pre_status_pane_g1

0x6c55,	// (0x00042a1e) phob_pre_status_pane_g2

0x6c5d,	// (0x00042a26) phob_pre_status_pane_g3

0x6c65,	// (0x00042a2e) phob_pre_status_pane_g4

0x0004,

0xf579,	// (0x0004b342) phob_pre_status_pane_g

0x6c75,	// (0x00042a3e) phob_pre_status_pane_t1

0x6c83,	// (0x00042a4c) phob_pre_status_pane_t2

0x6c91,	// (0x00042a5a) phob_pre_status_pane_t3

0x0002,

0xf584,	// (0x0004b34d) phob_pre_status_pane_t

0x0f9a,	// (0x0003cd63) bg_list_pane_cp05

0x4052,	// (0x0003fe1b) grid_vorec_pane

0x0fa2,	// (0x0003cd6b) vorec_t1

0x0fb0,	// (0x0003cd79) vorec_t2

0x0fbe,	// (0x0003cd87) vorec_t3

0x405a,	// (0x0003fe23) vorec_t4

0xb4d5,	// (0x0004729e) vorec_t5

0xb4e3,	// (0x000472ac) vorec_t6

0x0004,

0xf194,	// (0x0004af5d) vorec_t

0xb4f1,	// (0x000472ba) wait_bar_pane_cp01

0x4068,	// (0x0003fe31) cell_vorec_pane_ParamLimits

0x4068,	// (0x0003fe31) cell_vorec_pane

0xbd69,	// (0x00047b32) cell_vorec_pane_g1

0x0a82,	// (0x0003c84b) grid_highlight_pane_cp05

0x1a5e,	// (0x0003d827) cams_zoom_pane

0x1a5e,	// (0x0003d827) image_vga_pane

0x0d57,	// (0x0003cb20) main_camera_pane_g1

0x0d57,	// (0x0003cb20) main_camera_pane_g2

0x0d57,	// (0x0003cb20) main_camera_pane_g3

0x0d57,	// (0x0003cb20) main_camera_pane_g4

0x0d57,	// (0x0003cb20) main_camera_pane_g5

0x0d57,	// (0x0003cb20) main_camera_pane_g6

0x0d57,	// (0x0003cb20) main_camera_pane_g7

0x0007,

0xf19f,	// (0x0004af68) main_camera_pane_g

0x1a4a,	// (0x0003d813) main_camera_pane_t1

0x1a4a,	// (0x0003d813) main_camera_pane_t2

0x0001,

0xf1b0,	// (0x0004af79) main_camera_pane_t

0x408f,	// (0x0003fe58) cams_zoom_pane_cp_ParamLimits

0x408f,	// (0x0003fe58) cams_zoom_pane_cp

0x40c3,	// (0x0003fe8c) image_cif_pane_ParamLimits

0x40c3,	// (0x0003fe8c) image_cif_pane

0x0659,	// (0x0003c422) image_subqcif_pane

0x40d5,	// (0x0003fe9e) main_video_pane_g1_ParamLimits

0x40d5,	// (0x0003fe9e) main_video_pane_g1

0x4103,	// (0x0003fecc) main_video_pane_g2_ParamLimits

0x4103,	// (0x0003fecc) main_video_pane_g2

0x413d,	// (0x0003ff06) main_video_pane_g3_ParamLimits

0x413d,	// (0x0003ff06) main_video_pane_g3

0x413d,	// (0x0003ff06) main_video_pane_g4_ParamLimits

0x413d,	// (0x0003ff06) main_video_pane_g4

0x4171,	// (0x0003ff3a) main_video_pane_g5_ParamLimits

0x4171,	// (0x0003ff3a) main_video_pane_g5

0x1001,	// (0x0003cdca) main_video_pane_g6_ParamLimits

0x1001,	// (0x0003cdca) main_video_pane_g6

0x0006,

0xf1b5,	// (0x0004af7e) main_video_pane_g_ParamLimits

0xf1b5,	// (0x0004af7e) main_video_pane_g

0x418d,	// (0x0003ff56) main_video_pane_t1_ParamLimits

0x418d,	// (0x0003ff56) main_video_pane_t1

0x101b,	// (0x0003cde4) cams_zoom_pane_g1

0x101b,	// (0x0003cde4) cams_zoom_pane_g2

0x101b,	// (0x0003cde4) cams_zoom_pane_g3

0x101b,	// (0x0003cde4) cams_zoom_pane_g4

0x0003,

0xf1c4,	// (0x0004af8d) cams_zoom_pane_g

0x41e5,	// (0x0003ffae) grid_cams_pane

0x41fa,	// (0x0003ffc3) linegrid_cams_pane

0x420b,	// (0x0003ffd4) cell_cams_pane_ParamLimits

0x420b,	// (0x0003ffd4) cell_cams_pane

0x1025,	// (0x0003cdee) cams_burst_image_pane

0x102d,	// (0x0003cdf6) cell_cams_pane_g1

0x0a82,	// (0x0003c84b) grid_highlight_pane_cp03

0x0cf5,	// (0x0003cabe) mp_bg_pane_g1

0x0659,	// (0x0003c422) bg_list_pane_cp03

0x0659,	// (0x0003c422) bg_mp_pane

0x0659,	// (0x0003c422) grid_mp_pane

0x101b,	// (0x0003cde4) media_player_g1

0x6c2e,	// (0x000429f7) media_player_t1

0x6c2e,	// (0x000429f7) media_player_t2

0x6c2e,	// (0x000429f7) media_player_t3

0x6c2e,	// (0x000429f7) media_player_t4

0x6c2e,	// (0x000429f7) media_player_t5

0x6c2e,	// (0x000429f7) media_player_t6

0x6c2e,	// (0x000429f7) media_player_t7

0x0006,

0xf563,	// (0x0004b32c) media_player_t

0x0659,	// (0x0003c422) wait_bar_pane_cp02

0xf548,	// (0x0004b311) main_usb_pane_t

0x1770,	// (0x0003d539) cell_mp_pane

0x0cf5,	// (0x0003cabe) cell_mp_pane_g1

0x0a82,	// (0x0003c84b) grid_highlight_pane_cp06

0x1035,	// (0x0003cdfe) grid_skin_colour_pane

0x103d,	// (0x0003ce06) list_highlight_pane_cp03

0x4229,	// (0x0003fff2) skin_g1

0x1045,	// (0x0003ce0e) skin_t1

0x1054,	// (0x0003ce1d) skin_t2

0x0001,

0xf1f2,	// (0x0004afbb) skin_t

0x4231,	// (0x0003fffa) cell_skin_colour_pane_ParamLimits

0x4231,	// (0x0003fffa) cell_skin_colour_pane

0x1062,	// (0x0003ce2b) cell_skin_colour_pane_g1

0x429a,	// (0x00040063) call_video_g1_ParamLimits

0x429a,	// (0x00040063) call_video_g1

0x42b0,	// (0x00040079) call_video_g2_ParamLimits

0x42b0,	// (0x00040079) call_video_g2

0x0001,

0xf1f7,	// (0x0004afc0) call_video_g_ParamLimits

0xf1f7,	// (0x0004afc0) call_video_g

0x42f8,	// (0x000400c1) call_video_uplink_pane_cp1_ParamLimits

0x42f8,	// (0x000400c1) call_video_uplink_pane_cp1

0x1074,	// (0x0003ce3d) call_video_uplink_pane_cp2

0x438d,	// (0x00040156) video_down_crop_pane_ParamLimits

0x438d,	// (0x00040156) video_down_crop_pane

0x4450,	// (0x00040219) video_down_pane_ParamLimits

0x4450,	// (0x00040219) video_down_pane

0x107c,	// (0x0003ce45) video_down_subqcif_pane_ParamLimits

0x107c,	// (0x0003ce45) video_down_subqcif_pane

0x1094,	// (0x0003ce5d) video_down_subqcif_pane_cp_ParamLimits

0x1094,	// (0x0003ce5d) video_down_subqcif_pane_cp

0x10b8,	// (0x0003ce81) im_reading_pane_ParamLimits

0x10b8,	// (0x0003ce81) im_reading_pane

0x450d,	// (0x000402d6) im_writing_pane_ParamLimits

0x450d,	// (0x000402d6) im_writing_pane

0x4523,	// (0x000402ec) im_reading_pane_t1

0x10d2,	// (0x0003ce9b) list_im_pane

0x10e3,	// (0x0003ceac) scroll_pane_cp07

0x4559,	// (0x00040322) im_writing_pane_t1_ParamLimits

0x4559,	// (0x00040322) im_writing_pane_t1

0x10fc,	// (0x0003cec5) im_writing_pane_t2_ParamLimits

0x10fc,	// (0x0003cec5) im_writing_pane_t2

0x0001,

0xf201,	// (0x0004afca) im_writing_pane_t_ParamLimits

0xf201,	// (0x0004afca) im_writing_pane_t

0x0a82,	// (0x0003c84b) input_focus_pane_cp04

0x0a82,	// (0x0003c84b) input_focus_pane_cp05

0x456e,	// (0x00040337) list_im_single_pane_ParamLimits

0x456e,	// (0x00040337) list_im_single_pane

0x1119,	// (0x0003cee2) list_single_im_pane_t1

0x0f9a,	// (0x0003cd63) blid_accuracy_pane

0x0f9a,	// (0x0003cd63) blid_compass_pane

0x6c3e,	// (0x00042a07) main_location_t1

0x6c3e,	// (0x00042a07) main_location_t2

0x6c3e,	// (0x00042a07) main_location_t3

0x0002,

0xf572,	// (0x0004b33b) main_location_t

0x0a82,	// (0x0003c84b) aid_levels_location

0x0cf5,	// (0x0003cabe) blid_accuracy_pane_g1

0x0cf5,	// (0x0003cabe) blid_accuracy_pane_g2

0x0001,

0xf255,	// (0x0004b01e) blid_accuracy_pane_g

0x1153,	// (0x0003cf1c) wml_content_pane

0x1191,	// (0x0003cf5a) wml_button_pane_ParamLimits

0x1191,	// (0x0003cf5a) wml_button_pane

0x4584,	// (0x0004034d) wml_list_single_large_pane_ParamLimits

0x4584,	// (0x0004034d) wml_list_single_large_pane

0x4598,	// (0x00040361) wml_list_single_medium_pane_ParamLimits

0x4598,	// (0x00040361) wml_list_single_medium_pane

0x45ad,	// (0x00040376) wml_list_single_small_pane_ParamLimits

0x45ad,	// (0x00040376) wml_list_single_small_pane

0x11a5,	// (0x0003cf6e) wml_selection_box_pane_ParamLimits

0x11a5,	// (0x0003cf6e) wml_selection_box_pane

0x11b8,	// (0x0003cf81) wml_list_single_pane_t1

0x11c7,	// (0x0003cf90) wml_list_single_medium_pane_t1

0x11d6,	// (0x0003cf9f) wml_list_single_large_pane_t1

0x11e5,	// (0x0003cfae) input_focus_pane_cp02_ParamLimits

0x11e5,	// (0x0003cfae) input_focus_pane_cp02

0x11f8,	// (0x0003cfc1) wml_selection_box_pane_g1

0x1201,	// (0x0003cfca) wml_selection_box_pane_t1_ParamLimits

0x1201,	// (0x0003cfca) wml_selection_box_pane_t1

0x0cdd,	// (0x0003caa6) bg_wml_button_pane_ParamLimits

0x0cdd,	// (0x0003caa6) bg_wml_button_pane

0x1219,	// (0x0003cfe2) wml_button_pane_g1

0x1221,	// (0x0003cfea) wml_button_pane_t1

0x1219,	// (0x0003cfe2) wml_button_bg_pane_g1

0x1231,	// (0x0003cffa) wml_button_bg_pane_g2

0x1239,	// (0x0003d002) wml_button_bg_pane_g3

0x1241,	// (0x0003d00a) wml_button_bg_pane_g4

0x1249,	// (0x0003d012) wml_button_bg_pane_g5

0x1251,	// (0x0003d01a) wml_button_bg_pane_g6

0x1259,	// (0x0003d022) wml_button_bg_pane_g7

0x1261,	// (0x0003d02a) wml_button_bg_pane_g8

0x1269,	// (0x0003d032) wml_button_bg_pane_g9

0x0008,

0xf206,	// (0x0004afcf) wml_button_bg_pane_g

0x45c4,	// (0x0004038d) bg_list_pane_cp02

0x1271,	// (0x0003d03a) mce_header_pane_ParamLimits

0x1271,	// (0x0003d03a) mce_header_pane

0x1285,	// (0x0003d04e) mce_icon_pane

0x1285,	// (0x0003d04e) mce_image_pane

0x128e,	// (0x0003d057) mce_text_pane_ParamLimits

0x128e,	// (0x0003d057) mce_text_pane

0x45cd,	// (0x00040396) scroll_pane_cp03

0x45cd,	// (0x00040396) scroll_pane_cp04

0x12a2,	// (0x0003d06b) scroll_pane_cp05_ParamLimits

0x12a2,	// (0x0003d06b) scroll_pane_cp05

0x45d7,	// (0x000403a0) mce_header_field_pane_ParamLimits

0x45d7,	// (0x000403a0) mce_header_field_pane

0x45ee,	// (0x000403b7) mce_header_field_pane_2_ParamLimits

0x45ee,	// (0x000403b7) mce_header_field_pane_2

0x4604,	// (0x000403cd) mce_header_field_pane_3

0x460c,	// (0x000403d5) list_single_mce_message_pane_ParamLimits

0x460c,	// (0x000403d5) list_single_mce_message_pane

0x4621,	// (0x000403ea) list_single_mce_smart_pane_ParamLimits

0x4621,	// (0x000403ea) list_single_mce_smart_pane

0x12ae,	// (0x0003d077) input_focus_pane_cp03

0x12b7,	// (0x0003d080) list_header_data_pane

0x4641,	// (0x0004040a) mce_header_field_pane_t1

0x464f,	// (0x00040418) list_single_mce_header_pane_ParamLimits

0x464f,	// (0x00040418) list_single_mce_header_pane

0x12bf,	// (0x0003d088) list_single_mce_header_pane_t1

0x12ce,	// (0x0003d097) list_single_mce_message_pane_g1

0x12d7,	// (0x0003d0a0) list_single_mce_message_pane_t1

0x4689,	// (0x00040452) bg_cale_heading_pane_cp01_ParamLimits

0x4689,	// (0x00040452) bg_cale_heading_pane_cp01

0x12e6,	// (0x0003d0af) bg_cale_pane_cp02_ParamLimits

0x12e6,	// (0x0003d0af) bg_cale_pane_cp02

0x46b8,	// (0x00040481) cale_month_corner_pane

0x46d7,	// (0x000404a0) cale_month_day_heading_pane_ParamLimits

0x46d7,	// (0x000404a0) cale_month_day_heading_pane

0x470e,	// (0x000404d7) cale_month_pane_g1_ParamLimits

0x470e,	// (0x000404d7) cale_month_pane_g1

0x4732,	// (0x000404fb) cale_month_pane_g2_ParamLimits

0x4732,	// (0x000404fb) cale_month_pane_g2

0x475a,	// (0x00040523) cale_month_pane_g3_ParamLimits

0x475a,	// (0x00040523) cale_month_pane_g3

0x4796,	// (0x0004055f) cale_month_pane_g4_ParamLimits

0x4796,	// (0x0004055f) cale_month_pane_g4

0x47d2,	// (0x0004059b) cale_month_pane_g5_ParamLimits

0x47d2,	// (0x0004059b) cale_month_pane_g5

0x480e,	// (0x000405d7) cale_month_pane_g6_ParamLimits

0x480e,	// (0x000405d7) cale_month_pane_g6

0x484a,	// (0x00040613) cale_month_pane_g7_ParamLimits

0x484a,	// (0x00040613) cale_month_pane_g7

0x4886,	// (0x0004064f) cale_month_pane_g8_ParamLimits

0x4886,	// (0x0004064f) cale_month_pane_g8

0x48ca,	// (0x00040693) cale_month_pane_g9_ParamLimits

0x48ca,	// (0x00040693) cale_month_pane_g9

0x490c,	// (0x000406d5) cale_month_pane_g10_ParamLimits

0x490c,	// (0x000406d5) cale_month_pane_g10

0x494e,	// (0x00040717) cale_month_pane_g11_ParamLimits

0x494e,	// (0x00040717) cale_month_pane_g11

0x4990,	// (0x00040759) cale_month_pane_g12_ParamLimits

0x4990,	// (0x00040759) cale_month_pane_g12

0x49d2,	// (0x0004079b) cale_month_pane_g13_ParamLimits

0x49d2,	// (0x0004079b) cale_month_pane_g13

0x000c,

0xf219,	// (0x0004afe2) cale_month_pane_g_ParamLimits

0xf219,	// (0x0004afe2) cale_month_pane_g

0x4a14,	// (0x000407dd) cale_month_week_pane

0x4a30,	// (0x000407f9) grid_cale_month_pane_ParamLimits

0x4a30,	// (0x000407f9) grid_cale_month_pane

0x4a5e,	// (0x00040827) cale_month_day_heading_pane_t1

0x4ae4,	// (0x000408ad) cale_month_day_heading_pane_t2

0x4b75,	// (0x0004093e) cale_month_day_heading_pane_t3

0x4c06,	// (0x000409cf) cale_month_day_heading_pane_t4

0x4c97,	// (0x00040a60) cale_month_day_heading_pane_t5

0x4d28,	// (0x00040af1) cale_month_day_heading_pane_t6

0x4db9,	// (0x00040b82) cale_month_day_heading_pane_t7

0x0006,

0xf234,	// (0x0004affd) cale_month_day_heading_pane_t

0x0f40,	// (0x0003cd09) bg_cale_side_pane_cp01

0x4e4e,	// (0x00040c17) cale_month_week_pane_t1

0x4e67,	// (0x00040c30) cale_month_week_pane_t2

0x4e80,	// (0x00040c49) cale_month_week_pane_t3

0x4e99,	// (0x00040c62) cale_month_week_pane_t4

0x4eb2,	// (0x00040c7b) cale_month_week_pane_t5

0x4ecb,	// (0x00040c94) cale_month_week_pane_t6

0x0005,

0xf243,	// (0x0004b00c) cale_month_week_pane_t

0x4ee4,	// (0x00040cad) cell_cale_month_pane_ParamLimits

0x4ee4,	// (0x00040cad) cell_cale_month_pane

0xbdb1,	// (0x00047b7a) cell_cale_month_pane_g1

0x4fd6,	// (0x00040d9f) cell_cale_month_pane_t1_ParamLimits

0x4fd6,	// (0x00040d9f) cell_cale_month_pane_t1

0x0f4e,	// (0x0003cd17) grid_highlight_pane_cp08

0x0cf5,	// (0x0003cabe) main_smil_g1

0x4ff6,	// (0x00040dbf) smil_status_pane

0x1325,	// (0x0003d0ee) smil_text_pane

0x6a7e,	// (0x00042847) bg_popup_call3_rect_pane_g8

0x6a86,	// (0x0004284f) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f3,	// (0x0004b2bc) bg_popup_call3_rect_pane_g

0xbfa9,	// (0x00047d72) smil_status_volume_pane_g1

0x5007,	// (0x00040dd0) smil_status_pane_t1

0xbfdc,	// (0x00047da5) volume_smil_pane

0x132f,	// (0x0003d0f8) list_smil_text_pane

0x501e,	// (0x00040de7) scroll_pane_cp011

0x5029,	// (0x00040df2) smil_text_list_pane_t1_ParamLimits

0x5029,	// (0x00040df2) smil_text_list_pane_t1

0xbdbd,	// (0x00047b86) aid_volume_smil_ParamLimits

0xbdbd,	// (0x00047b86) aid_volume_smil

0x0cf5,	// (0x0003cabe) smil_volume_pane_g1

0x0cf5,	// (0x0003cabe) smil_volume_pane_g2

0x0001,

0xf255,	// (0x0004b01e) smil_volume_pane_g

0x3a30,	// (0x0003f7f9) listscroll_cale_day_pane

0x1339,	// (0x0003d102) bg_cale_pane

0x1351,	// (0x0003d11a) list_cale_pane

0x1374,	// (0x0003d13d) scroll_pane_cp09

0x1385,	// (0x0003d14e) cale_bg_pane_g1

0x138d,	// (0x0003d156) cale_bg_pane_g2

0x1395,	// (0x0003d15e) cale_bg_pane_g3

0x139d,	// (0x0003d166) cale_bg_pane_g4

0x13a5,	// (0x0003d16e) cale_bg_pane_g5

0x13ad,	// (0x0003d176) cale_bg_pane_g6

0x13b5,	// (0x0003d17e) cale_bg_pane_g7

0x13bd,	// (0x0003d186) cale_bg_pane_g8

0x13c5,	// (0x0003d18e) cale_bg_pane_g9

0x0008,

0xf25a,	// (0x0004b023) cale_bg_pane_g

0x506d,	// (0x00040e36) list_cale_time_pane_ParamLimits

0x506d,	// (0x00040e36) list_cale_time_pane

0x13cd,	// (0x0003d196) list_cale_time_pane_g1_ParamLimits

0x13cd,	// (0x0003d196) list_cale_time_pane_g1

0x13d9,	// (0x0003d1a2) list_cale_time_pane_g2_ParamLimits

0x13d9,	// (0x0003d1a2) list_cale_time_pane_g2

0x5082,	// (0x00040e4b) list_cale_time_pane_g3_ParamLimits

0x5082,	// (0x00040e4b) list_cale_time_pane_g3

0x508e,	// (0x00040e57) list_cale_time_pane_g4_ParamLimits

0x508e,	// (0x00040e57) list_cale_time_pane_g4

0x509a,	// (0x00040e63) list_cale_time_pane_g5_ParamLimits

0x509a,	// (0x00040e63) list_cale_time_pane_g5

0x0005,

0xf26d,	// (0x0004b036) list_cale_time_pane_g_ParamLimits

0xf26d,	// (0x0004b036) list_cale_time_pane_g

0x13f3,	// (0x0003d1bc) list_cale_time_pane_t1_ParamLimits

0x13f3,	// (0x0003d1bc) list_cale_time_pane_t1

0x141b,	// (0x0003d1e4) list_cale_time_pane_t2_ParamLimits

0x141b,	// (0x0003d1e4) list_cale_time_pane_t2

0x531a,	// (0x000410e3) aid_blid_cardinal_pane

0x5358,	// (0x00041121) compass_pane_t4

0x1443,	// (0x0003d20c) list_cale_time_pane_t4_ParamLimits

0x1443,	// (0x0003d20c) list_cale_time_pane_t4

0x5366,	// (0x0004112f) compass_pane_t5

0x5374,	// (0x0004113d) compass_pane_t6

0x5382,	// (0x0004114b) compass_pane_t7

0x188d,	// (0x0003d656) navi_pane_cc_t1

0x1a32,	// (0x0003d7fb) aid_phob_thumbnail_center_pane

0x56c1,	// (0x0004148a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf27a,	// (0x0004b043) list_cale_time_pane_t_ParamLimits

0xf27a,	// (0x0004b043) list_cale_time_pane_t

0x06db,	// (0x0003c4a4) bg_popup_window_pane_cp02_ParamLimits

0x06db,	// (0x0003c4a4) bg_popup_window_pane_cp02

0x146b,	// (0x0003d234) heading_pane_cp01_ParamLimits

0x146b,	// (0x0003d234) heading_pane_cp01

0x1477,	// (0x0003d240) loc_req_pane_ParamLimits

0x1477,	// (0x0003d240) loc_req_pane

0x1487,	// (0x0003d250) loc_type_pane_ParamLimits

0x1487,	// (0x0003d250) loc_type_pane

0x1499,	// (0x0003d262) loc_type_pane_t1_ParamLimits

0x1499,	// (0x0003d262) loc_type_pane_t1

0x14ab,	// (0x0003d274) loc_type_pane_t2_ParamLimits

0x14ab,	// (0x0003d274) loc_type_pane_t2

0x14bd,	// (0x0003d286) loc_type_pane_t3_ParamLimits

0x14bd,	// (0x0003d286) loc_type_pane_t3

0x0002,

0xf281,	// (0x0004b04a) loc_type_pane_t_ParamLimits

0xf281,	// (0x0004b04a) loc_type_pane_t

0x14cf,	// (0x0003d298) list_loc_req_pane

0x14d9,	// (0x0003d2a2) scroll_pane_cp012

0x50a6,	// (0x00040e6f) list_single_loc_request_popup_menu_pane_ParamLimits

0x50a6,	// (0x00040e6f) list_single_loc_request_popup_menu_pane

0x14e2,	// (0x0003d2ab) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x14e2,	// (0x0003d2ab) list_single_loc_request_popup_menu_pane_g1

0x14ee,	// (0x0003d2b7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x14ee,	// (0x0003d2b7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf288,	// (0x0004b051) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf288,	// (0x0004b051) list_single_loc_request_popup_menu_pane_g

0x14fa,	// (0x0003d2c3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x14fa,	// (0x0003d2c3) list_single_loc_request_popup_menu_pane_t1

0x0cdd,	// (0x0003caa6) bg_popup_window_pane_cp03_ParamLimits

0x0cdd,	// (0x0003caa6) bg_popup_window_pane_cp03

0x1d04,	// (0x0003dacd) heading_loc_req_pane_ParamLimits

0x1d04,	// (0x0003dacd) heading_loc_req_pane

0x50b3,	// (0x00040e7c) popup_dyc_status_message_window_g1_ParamLimits

0x50b3,	// (0x00040e7c) popup_dyc_status_message_window_g1

0x50c7,	// (0x00040e90) popup_dyc_status_message_window_t1_ParamLimits

0x50c7,	// (0x00040e90) popup_dyc_status_message_window_t1

0x50dc,	// (0x00040ea5) popup_dyc_status_message_window_t2_ParamLimits

0x50dc,	// (0x00040ea5) popup_dyc_status_message_window_t2

0x50f1,	// (0x00040eba) popup_dyc_status_message_window_t3_ParamLimits

0x50f1,	// (0x00040eba) popup_dyc_status_message_window_t3

0x0002,

0xf28d,	// (0x0004b056) popup_dyc_status_message_window_t_ParamLimits

0xf28d,	// (0x0004b056) popup_dyc_status_message_window_t

0x0a82,	// (0x0003c84b) bg_heading_pane_cp01

0x1510,	// (0x0003d2d9) heading_loc_req_pane_g1

0x1518,	// (0x0003d2e1) heading_loc_req_pane_g2

0x1520,	// (0x0003d2e9) heading_loc_req_pane_g3

0x0002,

0xf294,	// (0x0004b05d) heading_loc_req_pane_g

0x1528,	// (0x0003d2f1) heading_loc_req_pane_t1

0x1537,	// (0x0003d300) bg_popup_sub_pane_cp01_ParamLimits

0x1537,	// (0x0003d300) bg_popup_sub_pane_cp01

0x1545,	// (0x0003d30e) popup_cale_events_window_g1_ParamLimits

0x1545,	// (0x0003d30e) popup_cale_events_window_g1

0x1565,	// (0x0003d32e) popup_cale_events_window_g2_ParamLimits

0x1565,	// (0x0003d32e) popup_cale_events_window_g2

0x0001,

0xf2c8,	// (0x0004b091) popup_cale_events_window_g_ParamLimits

0xf2c8,	// (0x0004b091) popup_cale_events_window_g

0x1585,	// (0x0003d34e) popup_cale_events_window_t1_ParamLimits

0x1585,	// (0x0003d34e) popup_cale_events_window_t1

0x1597,	// (0x0003d360) popup_cale_events_window_t2_ParamLimits

0x1597,	// (0x0003d360) popup_cale_events_window_t2

0x15d5,	// (0x0003d39e) popup_cale_events_window_t3_ParamLimits

0x15d5,	// (0x0003d39e) popup_cale_events_window_t3

0x160f,	// (0x0003d3d8) popup_cale_events_window_t4_ParamLimits

0x160f,	// (0x0003d3d8) popup_cale_events_window_t4

0x0003,

0xf2cd,	// (0x0004b096) popup_cale_events_window_t_ParamLimits

0xf2cd,	// (0x0004b096) popup_cale_events_window_t

0x5127,	// (0x00040ef0) call_type_pane

0x5137,	// (0x00040f00) popup_call_status_window_g1

0x514b,	// (0x00040f14) popup_call_status_window_g2

0x515f,	// (0x00040f28) popup_call_status_window_g3

0x0002,

0xf2d6,	// (0x0004b09f) popup_call_status_window_g

0x1645,	// (0x0003d40e) call_type_pane_g1

0x164e,	// (0x0003d417) call_type_pane_g2

0x0001,

0xf2dd,	// (0x0004b0a6) call_type_pane_g

0x0a82,	// (0x0003c84b) bg_popup_sub_pane_cp02

0x1657,	// (0x0003d420) listscroll_popup_wml_pane

0x165f,	// (0x0003d428) list_wml_pane

0x1669,	// (0x0003d432) scroll_pane_cp013

0x516f,	// (0x00040f38) list_single_graphic_popup_wml_pane_ParamLimits

0x516f,	// (0x00040f38) list_single_graphic_popup_wml_pane

0x0cf5,	// (0x0003cabe) list_single_graphic_popup_wml_pane_g1

0x1672,	// (0x0003d43b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2e2,	// (0x0004b0ab) list_single_graphic_popup_wml_pane_g

0x167a,	// (0x0003d443) list_single_graphic_popup_wml_pane_t1

0x1690,	// (0x0003d459) aid_call_pane

0x0cd5,	// (0x0003ca9e) popup_clock_analogue_window_g1

0x0cd5,	// (0x0003ca9e) popup_clock_analogue_window_g2

0xbdfd,	// (0x00047bc6) popup_clock_analogue_window_g3

0xbdfd,	// (0x00047bc6) popup_clock_analogue_window_g4

0x0cf5,	// (0x0003cabe) popup_clock_analogue_window_g5

0x0004,

0xf2e7,	// (0x0004b0b0) popup_clock_analogue_window_g

0xbe05,	// (0x00047bce) popup_clock_analogue_window_t1

0xbe13,	// (0x00047bdc) clock_digital_number_pane_ParamLimits

0xbe13,	// (0x00047bdc) clock_digital_number_pane

0xbe1f,	// (0x00047be8) clock_digital_number_pane_cp02_ParamLimits

0xbe1f,	// (0x00047be8) clock_digital_number_pane_cp02

0xbe2b,	// (0x00047bf4) clock_digital_number_pane_cp03_ParamLimits

0xbe2b,	// (0x00047bf4) clock_digital_number_pane_cp03

0xbe37,	// (0x00047c00) clock_digital_number_pane_cp04_ParamLimits

0xbe37,	// (0x00047c00) clock_digital_number_pane_cp04

0xbe43,	// (0x00047c0c) clock_digital_separator_pane_ParamLimits

0xbe43,	// (0x00047c0c) clock_digital_separator_pane

0xbe4f,	// (0x00047c18) popup_clock_digital_window_t1

0x0cf5,	// (0x0003cabe) clock_digital_number_pane_g1

0x0cf5,	// (0x0003cabe) clock_digital_number_pane_g2

0x0001,

0xf255,	// (0x0004b01e) clock_digital_number_pane_g

0x0cf5,	// (0x0003cabe) clock_digital_separator_pane_g1

0x0cf5,	// (0x0003cabe) clock_digital_separator_pane_g2

0x0001,

0xf255,	// (0x0004b01e) clock_digital_separator_pane_g

0x0a82,	// (0x0003c84b) bg_popup_window_pane_cp04

0x1698,	// (0x0003d461) heading_pane_cp03

0x0f9a,	// (0x0003cd63) listscroll_popup_gms_pane

0x0a82,	// (0x0003c84b) grid_large_graphic_popup_pane

0x16a1,	// (0x0003d46a) listscroll_popup_gms_pane_g1

0x16aa,	// (0x0003d473) listscroll_popup_gms_pane_g2

0x0001,

0xf2f2,	// (0x0004b0bb) listscroll_popup_gms_pane_g

0x16b3,	// (0x0003d47c) scroll_pane_cp014

0x0663,	// (0x0003c42c) cell_large_graphic_popup_pane_ParamLimits

0x0663,	// (0x0003c42c) cell_large_graphic_popup_pane

0x0d57,	// (0x0003cb20) cell_large_graphic_popup_pane_g1_ParamLimits

0x0d57,	// (0x0003cb20) cell_large_graphic_popup_pane_g1

0x16bb,	// (0x0003d484) cell_large_graphic_popup_pane_g2_ParamLimits

0x16bb,	// (0x0003d484) cell_large_graphic_popup_pane_g2

0x16c9,	// (0x0003d492) cell_large_graphic_popup_pane_g3_ParamLimits

0x16c9,	// (0x0003d492) cell_large_graphic_popup_pane_g3

0x16d7,	// (0x0003d4a0) cell_large_graphic_popup_pane_g4_ParamLimits

0x16d7,	// (0x0003d4a0) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f7,	// (0x0004b0c0) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f7,	// (0x0004b0c0) cell_large_graphic_popup_pane_g

0x0a82,	// (0x0003c84b) grid_highlight_pane_cp010

0x0cf5,	// (0x0003cabe) bg_popup_call_pane_g1

0x16e8,	// (0x0003d4b1) list_single_graphic_popup_conf_pane_ParamLimits

0x16e8,	// (0x0003d4b1) list_single_graphic_popup_conf_pane

0x16fb,	// (0x0003d4c4) list_highlight_pane_cp01

0x1704,	// (0x0003d4cd) list_single_graphic_popup_conf_pane_g1

0x170c,	// (0x0003d4d5) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf300,	// (0x0004b0c9) list_single_graphic_popup_conf_pane_g

0x1714,	// (0x0003d4dd) list_single_graphic_popup_conf_pane_t1

0x1722,	// (0x0003d4eb) linegrid_cams_pane_g1

0x5182,	// (0x00040f4b) linegrid_cams_pane_g2

0x0ed1,	// (0x0003cc9a) linegrid_cams_pane_g3

0x172b,	// (0x0003d4f4) linegrid_cams_pane_g4

0x518b,	// (0x00040f54) linegrid_cams_pane_g5

0x5194,	// (0x00040f5d) linegrid_cams_pane_g6

0x0f81,	// (0x0003cd4a) linegrid_cams_pane_g7

0x0006,

0xf305,	// (0x0004b0ce) linegrid_cams_pane_g

0x1734,	// (0x0003d4fd) popup_clock_analogue_window

0x1734,	// (0x0003d4fd) popup_clock_digital_window

0x0a82,	// (0x0003c84b) popup_phob_thumbnail_window

0x0cf5,	// (0x0003cabe) call_video_uplink_pane_g1

0x173d,	// (0x0003d506) call_video_uplink_pane_g2

0x0001,

0xf314,	// (0x0004b0dd) call_video_uplink_pane_g

0x0f4e,	// (0x0003cd17) video_uplink_pane

0x1745,	// (0x0003d50e) mce_image_pane_g1

0x519d,	// (0x00040f66) mce_image_pane_g2

0x51a5,	// (0x00040f6e) mce_image_pane_g3

0x51ad,	// (0x00040f76) mce_image_pane_g4

0x51b5,	// (0x00040f7e) mce_image_pane_g5

0x0004,

0xf319,	// (0x0004b0e2) mce_image_pane_g

0x174f,	// (0x0003d518) control_top_pane_stacon_cp01_ParamLimits

0x174f,	// (0x0003d518) control_top_pane_stacon_cp01

0x175f,	// (0x0003d528) uni_indicator_pane_stacon_cp01_ParamLimits

0x175f,	// (0x0003d528) uni_indicator_pane_stacon_cp01

0x1770,	// (0x0003d539) bg_popup_sub_pane_cp03

0x177a,	// (0x0003d543) chi_dic_find_pane

0x51bd,	// (0x00040f86) listscroll_chi_dic_pane

0x1782,	// (0x0003d54b) main_pane_chidic_g1

0x178a,	// (0x0003d553) chi_dic_find_pane_t1

0x1798,	// (0x0003d561) find_chidic_pane

0x17a1,	// (0x0003d56a) chi_dic_list_pane_ParamLimits

0x17a1,	// (0x0003d56a) chi_dic_list_pane

0x16b3,	// (0x0003d47c) scroll_pane_cp020

0x17b2,	// (0x0003d57b) find_chidic_pane_t1

0x0a82,	// (0x0003c84b) input_focus_pane_cp06

0x51d1,	// (0x00040f9a) list_chi_dic_pane_ParamLimits

0x51d1,	// (0x00040f9a) list_chi_dic_pane

0x51e3,	// (0x00040fac) list_chi_dic_pane_t1_ParamLimits

0x51e3,	// (0x00040fac) list_chi_dic_pane_t1

0x0a82,	// (0x0003c84b) list_highlight_pane_cp020

0x17c1,	// (0x0003d58a) bg_cale_heading_pane_g1

0x51f6,	// (0x00040fbf) bg_cale_heading_pane_g2

0x51fe,	// (0x00040fc7) bg_cale_heading_pane_g3

0x5206,	// (0x00040fcf) bg_cale_heading_pane_g4

0x520e,	// (0x00040fd7) bg_cale_heading_pane_g5

0x5216,	// (0x00040fdf) bg_cale_heading_pane_g6

0x521e,	// (0x00040fe7) bg_cale_heading_pane_g7

0x5226,	// (0x00040fef) bg_cale_heading_pane_g8

0x522e,	// (0x00040ff7) bg_cale_heading_pane_g9

0x0008,

0xf324,	// (0x0004b0ed) bg_cale_heading_pane_g

0x17c1,	// (0x0003d58a) bg_cale_side_pane_g1

0x5236,	// (0x00040fff) bg_cale_side_pane_g2

0x523e,	// (0x00041007) bg_cale_side_pane_g3

0x5246,	// (0x0004100f) bg_cale_side_pane_g4

0x524e,	// (0x00041017) bg_cale_side_pane_g5

0x5256,	// (0x0004101f) bg_cale_side_pane_g6

0x525e,	// (0x00041027) bg_cale_side_pane_g7

0x5266,	// (0x0004102f) bg_cale_side_pane_g8

0x526e,	// (0x00041037) bg_cale_side_pane_g9

0x0008,

0xf337,	// (0x0004b100) bg_cale_side_pane_g

0x5276,	// (0x0004103f) popup_call_status_window_ParamLimits

0x5276,	// (0x0004103f) popup_call_status_window

0x17c9,	// (0x0003d592) stacon_top_pane

0x17d1,	// (0x0003d59a) status_pane_ParamLimits

0x17d1,	// (0x0003d59a) status_pane

0x17eb,	// (0x0003d5b4) status_small_pane

0x17f3,	// (0x0003d5bc) control_pane

0x0a82,	// (0x0003c84b) stacon_bottom_pane

0x17fb,	// (0x0003d5c4) list_single_mce_smart_pane_t1_ParamLimits

0x17fb,	// (0x0003d5c4) list_single_mce_smart_pane_t1

0x180e,	// (0x0003d5d7) list_single_mce_smart_pane_t2_ParamLimits

0x180e,	// (0x0003d5d7) list_single_mce_smart_pane_t2

0x0001,

0xf34a,	// (0x0004b113) list_single_mce_smart_pane_t_ParamLimits

0xf34a,	// (0x0004b113) list_single_mce_smart_pane_t

0x52bd,	// (0x00041086) compass_pane

0x52c6,	// (0x0004108f) main_location2_pane_t1

0x52dc,	// (0x000410a5) main_location2_pane_t2

0x52f2,	// (0x000410bb) main_location2_pane_t3

0x0003,

0xf34f,	// (0x0004b118) main_location2_pane_t

0x1836,	// (0x0003d5ff) compass_pane_g1_ParamLimits

0x1836,	// (0x0003d5ff) compass_pane_g1

0x533a,	// (0x00041103) compass_pane_t1

0x5349,	// (0x00041112) compass_pane_t2

0x0005,

0xf358,	// (0x0004b121) compass_pane_t

0x5390,	// (0x00041159) text_secondary_cp61

0x1884,	// (0x0003d64d) navi_pane_cams_g5

0x18d0,	// (0x0003d699) navi_pane_im_t1

0x18de,	// (0x0003d6a7) navi_pane_mp_g1_ParamLimits

0x18de,	// (0x0003d6a7) navi_pane_mp_g1

0x18f2,	// (0x0003d6bb) navi_pane_mp_g2_ParamLimits

0x18f2,	// (0x0003d6bb) navi_pane_mp_g2

0x18fe,	// (0x0003d6c7) navi_pane_mp_g3_ParamLimits

0x18fe,	// (0x0003d6c7) navi_pane_mp_g3

0x0002,

0xf36c,	// (0x0004b135) navi_pane_mp_g_ParamLimits

0xf36c,	// (0x0004b135) navi_pane_mp_g

0x190a,	// (0x0003d6d3) navi_pane_mp_t1

0x1918,	// (0x0003d6e1) navi_pane_mp_t2

0x0002,

0xf373,	// (0x0004b13c) navi_pane_mp_t

0x1983,	// (0x0003d74c) navi_pane_vt_g1

0x190a,	// (0x0003d6d3) navi_pane_vt_t1

0x198b,	// (0x0003d754) navi_slider_pane

0x0f9a,	// (0x0003cd63) zooming_pane

0x1993,	// (0x0003d75c) navi_slider_pane_g1

0xbe6c,	// (0x00047c35) navi_slider_pane_g2

0x0006,

0xf37a,	// (0x0004b143) navi_slider_pane_g

0x19b7,	// (0x0003d780) aid_levels_zoom

0x19bf,	// (0x0003d788) zooming_pane_g1

0x19c7,	// (0x0003d790) zooming_pane_g2

0x19c7,	// (0x0003d790) zooming_pane_g3

0x0002,

0xf389,	// (0x0004b152) zooming_pane_g

0x19cf,	// (0x0003d798) level_10_zoom

0x19d8,	// (0x0003d7a1) level_11_zoom

0x19e1,	// (0x0003d7aa) level_1_zoom

0x19ea,	// (0x0003d7b3) level_2_zoom

0x19f3,	// (0x0003d7bc) level_3_zoom

0x19fc,	// (0x0003d7c5) level_4_zoom

0x1a05,	// (0x0003d7ce) level_5_zoom

0x1a0e,	// (0x0003d7d7) level_6_zoom

0x1a17,	// (0x0003d7e0) level_7_zoom

0x1a20,	// (0x0003d7e9) level_8_zoom

0x1a29,	// (0x0003d7f2) level_9_zoom

0x1a3a,	// (0x0003d803) popup_phob_thumbnail_window_g1

0x1a42,	// (0x0003d80b) popup_phob_thumbnail_window_g2

0x0001,

0xf390,	// (0x0004b159) popup_phob_thumbnail_window_g

0x6c9f,	// (0x00042a68) level_1_location

0x6ca7,	// (0x00042a70) level_2_location

0x6caf,	// (0x00042a78) level_3_location

0x6cb7,	// (0x00042a80) level_4_location

0x0f9a,	// (0x0003cd63) level_5_location

0x5426,	// (0x000411ef) mce_icon_pane_g1

0x542e,	// (0x000411f7) mce_icon_pane_g2

0x0001,

0xf395,	// (0x0004b15e) mce_icon_pane_g

0x1ce2,	// (0x0003daab) main_mup_pane_g1_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g1

0x1ce2,	// (0x0003daab) main_mup_pane_g2_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g2

0x1ce2,	// (0x0003daab) main_mup_pane_g3_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g3

0x1ce2,	// (0x0003daab) main_mup_pane_g4_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g4

0x1ce2,	// (0x0003daab) main_mup_pane_g5_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g5

0x1ce2,	// (0x0003daab) main_mup_pane_g6_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g6

0x1ce2,	// (0x0003daab) main_mup_pane_g7_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g7

0x1ce2,	// (0x0003daab) main_mup_pane_g8_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g8

0x1ce2,	// (0x0003daab) main_mup_pane_g9_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g9

0x1ce2,	// (0x0003daab) main_mup_pane_g10_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g10

0x1ce2,	// (0x0003daab) main_mup_pane_g11_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g11

0x0d57,	// (0x0003cb20) main_mup_pane_g12_ParamLimits

0x0d57,	// (0x0003cb20) main_mup_pane_g12

0x1ce2,	// (0x0003daab) main_mup_pane_g13_ParamLimits

0x1ce2,	// (0x0003daab) main_mup_pane_g13

0x000c,

0xf39a,	// (0x0004b163) main_mup_pane_g_ParamLimits

0xf39a,	// (0x0004b163) main_mup_pane_g

0x1cf0,	// (0x0003dab9) main_mup_pane_t1_ParamLimits

0x1cf0,	// (0x0003dab9) main_mup_pane_t1

0x1cf0,	// (0x0003dab9) main_mup_pane_t2_ParamLimits

0x1cf0,	// (0x0003dab9) main_mup_pane_t2

0x1cf0,	// (0x0003dab9) main_mup_pane_t3_ParamLimits

0x1cf0,	// (0x0003dab9) main_mup_pane_t3

0x1a4a,	// (0x0003d813) main_mup_pane_t4_ParamLimits

0x1a4a,	// (0x0003d813) main_mup_pane_t4

0x1a4a,	// (0x0003d813) main_mup_pane_t5_ParamLimits

0x1a4a,	// (0x0003d813) main_mup_pane_t5

0x0fed,	// (0x0003cdb6) main_mup_pane_t6_ParamLimits

0x0fed,	// (0x0003cdb6) main_mup_pane_t6

0x0005,

0xf3b5,	// (0x0004b17e) main_mup_pane_t_ParamLimits

0xf3b5,	// (0x0004b17e) main_mup_pane_t

0x0663,	// (0x0003c42c) mup_progress_pane_ParamLimits

0x0663,	// (0x0003c42c) mup_progress_pane

0x1cd4,	// (0x0003da9d) mup_visualizer_pane_ParamLimits

0x1cd4,	// (0x0003da9d) mup_visualizer_pane

0x1cd4,	// (0x0003da9d) mup_volume_pane_ParamLimits

0x1cd4,	// (0x0003da9d) mup_volume_pane

0x0d65,	// (0x0003cb2e) mup_visualizer_pane_g1_ParamLimits

0x0d65,	// (0x0003cb2e) mup_visualizer_pane_g1

0x1a6c,	// (0x0003d835) mup_visualizer_pane_g2_ParamLimits

0x1a6c,	// (0x0003d835) mup_visualizer_pane_g2

0x0d57,	// (0x0003cb20) mup_visualizer_pane_g3_ParamLimits

0x0d57,	// (0x0003cb20) mup_visualizer_pane_g3

0x0002,

0xf3c2,	// (0x0004b18b) mup_visualizer_pane_g_ParamLimits

0xf3c2,	// (0x0004b18b) mup_visualizer_pane_g

0x101b,	// (0x0003cde4) mup_volume_pane_g1

0x101b,	// (0x0003cde4) mup_volume_pane_g2

0x0001,

0xf3c9,	// (0x0004b192) mup_volume_pane_g

0x101b,	// (0x0003cde4) mup_progress_pane_g1

0x101b,	// (0x0003cde4) mup_progress_pane_g2

0x101b,	// (0x0003cde4) mup_progress_pane_g3

0x0002,

0xf3ce,	// (0x0004b197) mup_progress_pane_g

0x0a82,	// (0x0003c84b) bg_popup_window_pane_cp05

0x1a7a,	// (0x0003d843) heading_pane_cp02_ParamLimits

0x1a7a,	// (0x0003d843) heading_pane_cp02

0x1a94,	// (0x0003d85d) list_popup_blid_pane

0x1a9c,	// (0x0003d865) list_blid_sat_info_pane_ParamLimits

0x1a9c,	// (0x0003d865) list_blid_sat_info_pane

0x1aaf,	// (0x0003d878) list_blid_sat_info_pane_g1

0x1ab7,	// (0x0003d880) list_blid_sat_info_pane_t1

0x5508,	// (0x000412d1) mup_equalizer_pane_ParamLimits

0x5508,	// (0x000412d1) mup_equalizer_pane

0x5521,	// (0x000412ea) mup_equalizer_pane_cp1_ParamLimits

0x5521,	// (0x000412ea) mup_equalizer_pane_cp1

0x553a,	// (0x00041303) mup_equalizer_pane_cp2_ParamLimits

0x553a,	// (0x00041303) mup_equalizer_pane_cp2

0x5553,	// (0x0004131c) mup_equalizer_pane_cp3_ParamLimits

0x5553,	// (0x0004131c) mup_equalizer_pane_cp3

0x556c,	// (0x00041335) mup_equalizer_pane_cp4_ParamLimits

0x556c,	// (0x00041335) mup_equalizer_pane_cp4

0x5585,	// (0x0004134e) mup_equalizer_pane_cp5

0x5597,	// (0x00041360) mup_equalizer_pane_cp6

0x55a9,	// (0x00041372) mup_equalizer_pane_cp7

0x6b06,	// (0x000428cf) bg_popup_call_poc_act_pane_g9

0x6b0e,	// (0x000428d7) bg_popup_call_poc_act_pane_g10

0x6b16,	// (0x000428df) bg_popup_call_poc_act_pane_g11

0x000a,

0x0cdd,	// (0x0003caa6) mup_scale_pane

0x0cf5,	// (0x0003cabe) mup_scale_pane_g1

0x1ac5,	// (0x0003d88e) mup_scale_pane_g2

0x0006,

0xf3ea,	// (0x0004b1b3) mup_scale_pane_g

0x1ae9,	// (0x0003d8b2) msg_data_pane

0x1af1,	// (0x0003d8ba) scroll_pane_cp017

0x2c06,	// (0x0003e9cf) bg_list_pane_cp04_ParamLimits

0x2c06,	// (0x0003e9cf) bg_list_pane_cp04

0x1af9,	// (0x0003d8c2) msg_data_pane_g1

0x519d,	// (0x00040f66) msg_data_pane_g2

0x51a5,	// (0x00040f6e) msg_data_pane_g3

0x55cf,	// (0x00041398) msg_data_pane_g4

0x51b5,	// (0x00040f7e) msg_data_pane_g5

0x5426,	// (0x000411ef) msg_data_pane_g6

0x55d7,	// (0x000413a0) msg_data_pane_g7

0x0006,

0xf3f9,	// (0x0004b1c2) msg_data_pane_g

0x2c26,	// (0x0003e9ef) msg_text_pane_ParamLimits

0x2c26,	// (0x0003e9ef) msg_text_pane

0x55df,	// (0x000413a8) qrid_highlight_pane_cp011_ParamLimits

0x55df,	// (0x000413a8) qrid_highlight_pane_cp011

0x0a82,	// (0x0003c84b) msg_body_pane

0x0a82,	// (0x0003c84b) msg_header_pane

0x1b0a,	// (0x0003d8d3) input_focus_pane_cp07

0x2c5a,	// (0x0003ea23) msg_header_pane_t1_ParamLimits

0x2c5a,	// (0x0003ea23) msg_header_pane_t1

0x2c70,	// (0x0003ea39) msg_header_pane_t2_ParamLimits

0x2c70,	// (0x0003ea39) msg_header_pane_t2

0x0001,

0xf40d,	// (0x0004b1d6) msg_header_pane_t_ParamLimits

0xf40d,	// (0x0004b1d6) msg_header_pane_t

0x1b1f,	// (0x0003d8e8) msg_body_pane_g1

0x2c87,	// (0x0003ea50) msg_body_pane_t1_ParamLimits

0x2c87,	// (0x0003ea50) msg_body_pane_t1

0xbe7e,	// (0x00047c47) msg_body_pane_t2_ParamLimits

0xbe7e,	// (0x00047c47) msg_body_pane_t2

0xbe90,	// (0x00047c59) msg_body_pane_t3_ParamLimits

0xbe90,	// (0x00047c59) msg_body_pane_t3

0x0002,

0xf412,	// (0x0004b1db) msg_body_pane_t_ParamLimits

0xf412,	// (0x0004b1db) msg_body_pane_t

0x562b,	// (0x000413f4) main_viewer_pane_g1_ParamLimits

0x562b,	// (0x000413f4) main_viewer_pane_g1

0x5637,	// (0x00041400) main_viewer_pane_g2_ParamLimits

0x5637,	// (0x00041400) main_viewer_pane_g2

0x5643,	// (0x0004140c) main_viewer_pane_g3_ParamLimits

0x5643,	// (0x0004140c) main_viewer_pane_g3

0x5652,	// (0x0004141b) main_viewer_pane_g4_ParamLimits

0x5652,	// (0x0004141b) main_viewer_pane_g4

0xbeba,	// (0x00047c83) main_viewer_pane_g5_ParamLimits

0xbeba,	// (0x00047c83) main_viewer_pane_g5

0xbeba,	// (0x00047c83) main_viewer_pane_g7_ParamLimits

0xbeba,	// (0x00047c83) main_viewer_pane_g7

0xbecc,	// (0x00047c95) main_viewer_pane_g8_ParamLimits

0xbecc,	// (0x00047c95) main_viewer_pane_g8

0x0007,

0xf422,	// (0x0004b1eb) main_viewer_pane_g_ParamLimits

0xf422,	// (0x0004b1eb) main_viewer_pane_g

0x1b27,	// (0x0003d8f0) viewer_content_pane_ParamLimits

0x1b27,	// (0x0003d8f0) viewer_content_pane

0x5686,	// (0x0004144f) main_postcard_pane_g1_ParamLimits

0x5686,	// (0x0004144f) main_postcard_pane_g1

0x569a,	// (0x00041463) main_postcard_pane_g2_ParamLimits

0x569a,	// (0x00041463) main_postcard_pane_g2

0x56ae,	// (0x00041477) main_postcard_pane_g3_ParamLimits

0x56ae,	// (0x00041477) main_postcard_pane_g3

0x0005,

0xf433,	// (0x0004b1fc) main_postcard_pane_g_ParamLimits

0xf433,	// (0x0004b1fc) main_postcard_pane_g

0x56c1,	// (0x0004148a) main_postcard_pane_g4

0xbfbc,	// (0x00047d85) smil_status_volume_pane_g2

0x56fc,	// (0x000414c5) postcard_pane_ParamLimits

0x56fc,	// (0x000414c5) postcard_pane

0x1b43,	// (0x0003d90c) postcard_pane_g1_ParamLimits

0x1b43,	// (0x0003d90c) postcard_pane_g1

0x573c,	// (0x00041505) postcard_pane_g2_ParamLimits

0x573c,	// (0x00041505) postcard_pane_g2

0x5748,	// (0x00041511) postcard_pane_g3_ParamLimits

0x5748,	// (0x00041511) postcard_pane_g3

0x1b35,	// (0x0003d8fe) postcard_pane_g4_ParamLimits

0x1b35,	// (0x0003d8fe) postcard_pane_g4

0x5754,	// (0x0004151d) postcard_pane_g5_ParamLimits

0x5754,	// (0x0004151d) postcard_pane_g5

0x5769,	// (0x00041532) postcard_pane_g6_ParamLimits

0x5769,	// (0x00041532) postcard_pane_g6

0x1b43,	// (0x0003d90c) postcard_pane_g7_ParamLimits

0x1b43,	// (0x0003d90c) postcard_pane_g7

0x0006,

0xf440,	// (0x0004b209) postcard_pane_g_ParamLimits

0xf440,	// (0x0004b209) postcard_pane_g

0x577d,	// (0x00041546) main_mp2_pane_g1_ParamLimits

0x577d,	// (0x00041546) main_mp2_pane_g1

0x5789,	// (0x00041552) main_mp2_pane_g2_ParamLimits

0x5789,	// (0x00041552) main_mp2_pane_g2

0x5795,	// (0x0004155e) main_mp2_pane_g3_ParamLimits

0x5795,	// (0x0004155e) main_mp2_pane_g3

0x0002,

0xf44f,	// (0x0004b218) main_mp2_pane_g_ParamLimits

0xf44f,	// (0x0004b218) main_mp2_pane_g

0x57a1,	// (0x0004156a) main_mp2_pane_t1_ParamLimits

0x57a1,	// (0x0004156a) main_mp2_pane_t1

0x57b6,	// (0x0004157f) main_mp2_pane_t2_ParamLimits

0x57b6,	// (0x0004157f) main_mp2_pane_t2

0x57c8,	// (0x00041591) main_mp2_pane_t3_ParamLimits

0x57c8,	// (0x00041591) main_mp2_pane_t3

0x0002,

0xf456,	// (0x0004b21f) main_mp2_pane_t_ParamLimits

0xf456,	// (0x0004b21f) main_mp2_pane_t

0x1b51,	// (0x0003d91a) pec_content_pane_ParamLimits

0x1b51,	// (0x0003d91a) pec_content_pane

0x1189,	// (0x0003cf52) scroll_pane_cp015

0x1b63,	// (0x0003d92c) pec_attribute_pane_ParamLimits

0x1b63,	// (0x0003d92c) pec_attribute_pane

0x57da,	// (0x000415a3) pec_content_pane_g1_ParamLimits

0x57da,	// (0x000415a3) pec_content_pane_g1

0x1b73,	// (0x0003d93c) pec_content_pane_t1_ParamLimits

0x1b73,	// (0x0003d93c) pec_content_pane_t1

0x1b85,	// (0x0003d94e) pec_content_pane_t2_ParamLimits

0x1b85,	// (0x0003d94e) pec_content_pane_t2

0x0001,

0xf45d,	// (0x0004b226) pec_content_pane_t_ParamLimits

0xf45d,	// (0x0004b226) pec_content_pane_t

0x57e6,	// (0x000415af) list_single_graphic_pane_cp01_ParamLimits

0x57e6,	// (0x000415af) list_single_graphic_pane_cp01

0x0cdd,	// (0x0003caa6) bg_popup_sub_pane_cp04

0x1b97,	// (0x0003d960) popup_mup_playback_window_g1

0x1ba3,	// (0x0003d96c) popup_mup_playback_window_t1

0x1bb8,	// (0x0003d981) popup_mup_playback_window_t2

0x0001,

0xf462,	// (0x0004b22b) popup_mup_playback_window_t

0x1bef,	// (0x0003d9b8) main_image_pane_g1_ParamLimits

0x1bef,	// (0x0003d9b8) main_image_pane_g1

0x1c32,	// (0x0003d9fb) scroll_pane_cp018_ParamLimits

0x1c32,	// (0x0003d9fb) scroll_pane_cp018

0x1c4a,	// (0x0003da13) scroll_pane_cp016_ParamLimits

0x1c4a,	// (0x0003da13) scroll_pane_cp016

0x58b1,	// (0x0004167a) smil2_image_pane_ParamLimits

0x58b1,	// (0x0004167a) smil2_image_pane

0x58d9,	// (0x000416a2) smil2_root_pane_ParamLimits

0x58d9,	// (0x000416a2) smil2_root_pane

0x5911,	// (0x000416da) smil2_text_pane_ParamLimits

0x5911,	// (0x000416da) smil2_text_pane

0x0a82,	// (0x0003c84b) bg_list_pane_cp06

0x1c7e,	// (0x0003da47) grid_radio_pane

0x0a82,	// (0x0003c84b) bg_popup_window_pane_cp06

0x1c86,	// (0x0003da4f) main_fmradio_pane_t1

0x6bde,	// (0x000429a7) heading_pane_cp04

0x1c94,	// (0x0003da5d) main_fmradio_pane_t2

0x6be6,	// (0x000429af) popup_cale_lunar_info_window_g1

0x1ca2,	// (0x0003da6b) main_fmradio_pane_t3

0x6bee,	// (0x000429b7) popup_cale_lunar_info_window_g2

0x1cb0,	// (0x0003da79) main_fmradio_pane_t4

0x0001,

0x1cbe,	// (0x0003da87) main_fmradio_pane_t5

0x0004,

0xf555,	// (0x0004b31e) popup_cale_lunar_info_window_g

0xf477,	// (0x0004b240) main_fmradio_pane_t

0x1ccc,	// (0x0003da95) wait_bar_pane_cp03

0x0fda,	// (0x0003cda3) cell_fmradio_pane_ParamLimits

0x0fda,	// (0x0003cda3) cell_fmradio_pane

0x1b43,	// (0x0003d90c) cell_fmradio_pane_g1_ParamLimits

0x1b43,	// (0x0003d90c) cell_fmradio_pane_g1

0x0a82,	// (0x0003c84b) grid_highlight_pane_cp011

0x597d,	// (0x00041746) poc_content_pane_ParamLimits

0x597d,	// (0x00041746) poc_content_pane

0x5990,	// (0x00041759) scroll_pane_cp019

0x5998,	// (0x00041761) popup_call_poc_act_window_ParamLimits

0x5998,	// (0x00041761) popup_call_poc_act_window

0x59b8,	// (0x00041781) popup_call_poc_inact_window_ParamLimits

0x59b8,	// (0x00041781) popup_call_poc_inact_window

0xf519,	// (0x0004b2e2) bg_popup_call_poc_act_pane_g

0x6b1e,	// (0x000428e7) bg_popup_call_poc_inact_pane_g1

0x6b26,	// (0x000428ef) bg_popup_call_poc_inact_pane_g2

0x59cd,	// (0x00041796) popup_call_poc_act_window_g2

0x6b2e,	// (0x000428f7) bg_popup_call_poc_inact_pane_g3

0x6aa6,	// (0x0004286f) bg_popup_call_poc_inact_pane_g4

0x6b36,	// (0x000428ff) bg_popup_call_poc_inact_pane_g5

0x59d5,	// (0x0004179e) popup_call_poc_act_window_t1_ParamLimits

0x59d5,	// (0x0004179e) popup_call_poc_act_window_t1

0x59fd,	// (0x000417c6) popup_call_poc_act_window_t2_ParamLimits

0x59fd,	// (0x000417c6) popup_call_poc_act_window_t2

0x5a25,	// (0x000417ee) popup_call_poc_act_window_t3_ParamLimits

0x5a25,	// (0x000417ee) popup_call_poc_act_window_t3

0x5a4d,	// (0x00041816) popup_call_poc_act_window_t4_ParamLimits

0x5a4d,	// (0x00041816) popup_call_poc_act_window_t4

0x0003,

0xf482,	// (0x0004b24b) popup_call_poc_act_window_t_ParamLimits

0xf482,	// (0x0004b24b) popup_call_poc_act_window_t

0x6b3e,	// (0x00042907) bg_popup_call_poc_inact_pane_g6

0x6b46,	// (0x0004290f) bg_popup_call_poc_inact_pane_g7

0x6b4e,	// (0x00042917) bg_popup_call_poc_inact_pane_g8

0x5a5f,	// (0x00041828) popup_call_poc_inact_window_g2

0x6b56,	// (0x0004291f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf530,	// (0x0004b2f9) bg_popup_call_poc_inact_pane_g

0x5a67,	// (0x00041830) popup_call_poc_inact_window_t1_ParamLimits

0x5a67,	// (0x00041830) popup_call_poc_inact_window_t1

0x5a7c,	// (0x00041845) popup_call_poc_inact_window_t2_ParamLimits

0x5a7c,	// (0x00041845) popup_call_poc_inact_window_t2

0x5a91,	// (0x0004185a) popup_call_poc_inact_window_t3_ParamLimits

0x5a91,	// (0x0004185a) popup_call_poc_inact_window_t3

0x0002,

0xf48b,	// (0x0004b254) popup_call_poc_inact_window_t_ParamLimits

0xf48b,	// (0x0004b254) popup_call_poc_inact_window_t

0xbf34,	// (0x00047cfd) context_pane_ParamLimits

0x7105,	// (0x00042ece) signal_pane_ParamLimits

0x0f9a,	// (0x0003cd63) main_call2_pane

0xbf0d,	// (0x00047cd6) popup_phob_thumbnail2_window_ParamLimits

0xbf0d,	// (0x00047cd6) popup_phob_thumbnail2_window

0xbea2,	// (0x00047c6b) aid_hotspot_pointer_arrow_pane

0xbeaa,	// (0x00047c73) aid_hotspot_pointer_hand_pane

0x6c6d,	// (0x00042a36) phob_pre_status_pane_g5

0x1a5e,	// (0x0003d827) cams_zoom_pane_ParamLimits

0x1a5e,	// (0x0003d827) image_vga_pane_ParamLimits

0x0d57,	// (0x0003cb20) main_camera_pane_g1_ParamLimits

0x0d57,	// (0x0003cb20) main_camera_pane_g2_ParamLimits

0x0d57,	// (0x0003cb20) main_camera_pane_g3_ParamLimits

0x0d57,	// (0x0003cb20) main_camera_pane_g4_ParamLimits

0x0d57,	// (0x0003cb20) main_camera_pane_g5_ParamLimits

0x0d57,	// (0x0003cb20) main_camera_pane_g6_ParamLimits

0x0d57,	// (0x0003cb20) main_camera_pane_g7_ParamLimits

0xf19f,	// (0x0004af68) main_camera_pane_g_ParamLimits

0x1a4a,	// (0x0003d813) main_camera_pane_t1_ParamLimits

0x1a4a,	// (0x0003d813) main_camera_pane_t2_ParamLimits

0xf1b0,	// (0x0004af79) main_camera_pane_t_ParamLimits

0x0cdd,	// (0x0003caa6) bg_popup_preview_window_pane_cp01_ParamLimits

0x0cdd,	// (0x0003caa6) bg_popup_preview_window_pane_cp01

0x5aa6,	// (0x0004186f) popup_phob_thumbnail2_window_g1_ParamLimits

0x5aa6,	// (0x0004186f) popup_phob_thumbnail2_window_g1

0x0a82,	// (0x0003c84b) call2_cli_visual_pane

0x5ac9,	// (0x00041892) popup_call2_audio_conf_window_ParamLimits

0x5ac9,	// (0x00041892) popup_call2_audio_conf_window

0x5ae7,	// (0x000418b0) popup_call2_audio_first_window_ParamLimits

0x5ae7,	// (0x000418b0) popup_call2_audio_first_window

0x5b5d,	// (0x00041926) popup_call2_audio_in_window_ParamLimits

0x5b5d,	// (0x00041926) popup_call2_audio_in_window

0x5b91,	// (0x0004195a) popup_call2_audio_out_window_ParamLimits

0x5b91,	// (0x0004195a) popup_call2_audio_out_window

0x5be3,	// (0x000419ac) popup_call2_audio_second_window_ParamLimits

0x5be3,	// (0x000419ac) popup_call2_audio_second_window

0x5c35,	// (0x000419fe) popup_call2_audio_wait_window_ParamLimits

0x5c35,	// (0x000419fe) popup_call2_audio_wait_window

0x0a82,	// (0x0003c84b) bg_popup_call2_act_pane_cp03

0x0cbf,	// (0x0003ca88) list_conf_pane_cp

0x5c6d,	// (0x00041a36) popup_call2_audio_conf_window_t1

0x16e8,	// (0x0003d4b1) list_single_graphic_popup_conf2_pane_ParamLimits

0x16e8,	// (0x0003d4b1) list_single_graphic_popup_conf2_pane

0x16fb,	// (0x0003d4c4) list_highlight_pane_cp04

0x5c7b,	// (0x00041a44) list_single_graphic_popup_conf2_pane_g1

0x170c,	// (0x0003d4d5) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf492,	// (0x0004b25b) list_single_graphic_popup_conf2_pane_g

0x5c83,	// (0x00041a4c) list_single_graphic_popup_conf2_pane_t1

0x5c91,	// (0x00041a5a) bg_popup_call2_act_pane_cp01_ParamLimits

0x5c91,	// (0x00041a5a) bg_popup_call2_act_pane_cp01

0x5d1b,	// (0x00041ae4) call_type_pane_cp05_ParamLimits

0x5d1b,	// (0x00041ae4) call_type_pane_cp05

0x5d6f,	// (0x00041b38) popup_call2_audio_second_window_g1_ParamLimits

0x5d6f,	// (0x00041b38) popup_call2_audio_second_window_g1

0x5dc3,	// (0x00041b8c) popup_call2_audio_second_window_g2_ParamLimits

0x5dc3,	// (0x00041b8c) popup_call2_audio_second_window_g2

0x0002,

0xf497,	// (0x0004b260) popup_call2_audio_second_window_g_ParamLimits

0xf497,	// (0x0004b260) popup_call2_audio_second_window_g

0x5e28,	// (0x00041bf1) popup_call2_audio_second_window_t1_ParamLimits

0x5e28,	// (0x00041bf1) popup_call2_audio_second_window_t1

0x5ee3,	// (0x00041cac) popup_call2_audio_second_window_t2_ParamLimits

0x5ee3,	// (0x00041cac) popup_call2_audio_second_window_t2

0x5f36,	// (0x00041cff) popup_call2_audio_second_window_t3_ParamLimits

0x5f36,	// (0x00041cff) popup_call2_audio_second_window_t3

0x0003,

0xf49e,	// (0x0004b267) popup_call2_audio_second_window_t_ParamLimits

0xf49e,	// (0x0004b267) popup_call2_audio_second_window_t

0x0a82,	// (0x0003c84b) bg_popup_call2_in_pane_cp02

0x0a8c,	// (0x0003c855) call_type_pane_cp04

0x6029,	// (0x00041df2) popup_call2_audio_wait_window_g1

0x6031,	// (0x00041dfa) popup_call2_audio_wait_window_g2

0x0001,

0xf4a7,	// (0x0004b270) popup_call2_audio_wait_window_g

0x0aa4,	// (0x0003c86d) popup_call2_audio_wait_window_t3

0x6039,	// (0x00041e02) bg_popup_call2_act_pane_ParamLimits

0x6039,	// (0x00041e02) bg_popup_call2_act_pane

0x60f9,	// (0x00041ec2) call_type_pane_cp03_ParamLimits

0x60f9,	// (0x00041ec2) call_type_pane_cp03

0x615d,	// (0x00041f26) popup_call2_audio_first_window_g1_ParamLimits

0x615d,	// (0x00041f26) popup_call2_audio_first_window_g1

0x61cd,	// (0x00041f96) popup_call2_audio_first_window_g2_ParamLimits

0x61cd,	// (0x00041f96) popup_call2_audio_first_window_g2

0x6231,	// (0x00041ffa) popup_call2_audio_first_window_g3_ParamLimits

0x6231,	// (0x00041ffa) popup_call2_audio_first_window_g3

0x0004,

0xf4ac,	// (0x0004b275) popup_call2_audio_first_window_g_ParamLimits

0xf4ac,	// (0x0004b275) popup_call2_audio_first_window_g

0x62b9,	// (0x00042082) popup_call2_audio_first_window_t1_ParamLimits

0x62b9,	// (0x00042082) popup_call2_audio_first_window_t1

0x63bc,	// (0x00042185) popup_call2_audio_first_window_t4_ParamLimits

0x63bc,	// (0x00042185) popup_call2_audio_first_window_t4

0x649f,	// (0x00042268) popup_call2_audio_first_window_t5_ParamLimits

0x649f,	// (0x00042268) popup_call2_audio_first_window_t5

0x0003,

0xf4b7,	// (0x0004b280) popup_call2_audio_first_window_t_ParamLimits

0xf4b7,	// (0x0004b280) popup_call2_audio_first_window_t

0x0cd5,	// (0x0003ca9e) bg_popup_call2_act_pane_g1

0x6bf6,	// (0x000429bf) popup_cale_lunar_info_window_t1

0x6c04,	// (0x000429cd) popup_cale_lunar_info_window_t2

0x6c12,	// (0x000429db) popup_cale_lunar_info_window_t3

0x0a82,	// (0x0003c84b) bg_popup_call2_bubble_pane

0x65a0,	// (0x00042369) bg_popup_call2_in_pane_cp01_ParamLimits

0x65a0,	// (0x00042369) bg_popup_call2_in_pane_cp01

0x075e,	// (0x0003c527) call_type_pane_cp02

0x65e8,	// (0x000423b1) popup_call2_audio_out_window_g1_ParamLimits

0x65e8,	// (0x000423b1) popup_call2_audio_out_window_g1

0x6614,	// (0x000423dd) popup_call2_audio_out_window_g2_ParamLimits

0x6614,	// (0x000423dd) popup_call2_audio_out_window_g2

0x663c,	// (0x00042405) popup_call2_audio_out_window_g3_ParamLimits

0x663c,	// (0x00042405) popup_call2_audio_out_window_g3

0x0003,

0xf4c0,	// (0x0004b289) popup_call2_audio_out_window_g_ParamLimits

0xf4c0,	// (0x0004b289) popup_call2_audio_out_window_g

0x6677,	// (0x00042440) popup_call2_audio_out_window_t1_ParamLimits

0x6677,	// (0x00042440) popup_call2_audio_out_window_t1

0x66d6,	// (0x0004249f) popup_call2_audio_out_window_t2_ParamLimits

0x66d6,	// (0x0004249f) popup_call2_audio_out_window_t2

0x672a,	// (0x000424f3) popup_call2_audio_out_window_t3_ParamLimits

0x672a,	// (0x000424f3) popup_call2_audio_out_window_t3

0x6740,	// (0x00042509) popup_call2_audio_out_window_t4_ParamLimits

0x6740,	// (0x00042509) popup_call2_audio_out_window_t4

0x6756,	// (0x0004251f) popup_call2_audio_out_window_t5_ParamLimits

0x6756,	// (0x0004251f) popup_call2_audio_out_window_t5

0x0005,

0xf4c9,	// (0x0004b292) popup_call2_audio_out_window_t_ParamLimits

0xf4c9,	// (0x0004b292) popup_call2_audio_out_window_t

0x67ba,	// (0x00042583) bg_popup_call2_in_pane_ParamLimits

0x67ba,	// (0x00042583) bg_popup_call2_in_pane

0x6816,	// (0x000425df) popup_call2_audio_in_window_g1_ParamLimits

0x6816,	// (0x000425df) popup_call2_audio_in_window_g1

0x684e,	// (0x00042617) popup_call2_audio_in_window_g2_ParamLimits

0x684e,	// (0x00042617) popup_call2_audio_in_window_g2

0x6886,	// (0x0004264f) popup_call2_audio_in_window_g3_ParamLimits

0x6886,	// (0x0004264f) popup_call2_audio_in_window_g3

0x0003,

0xf4d6,	// (0x0004b29f) popup_call2_audio_in_window_g_ParamLimits

0xf4d6,	// (0x0004b29f) popup_call2_audio_in_window_g

0x68de,	// (0x000426a7) popup_call2_audio_in_window_t1_ParamLimits

0x68de,	// (0x000426a7) popup_call2_audio_in_window_t1

0x695e,	// (0x00042727) popup_call2_audio_in_window_t2_ParamLimits

0x695e,	// (0x00042727) popup_call2_audio_in_window_t2

0x69de,	// (0x000427a7) popup_call2_audio_in_window_t3_ParamLimits

0x69de,	// (0x000427a7) popup_call2_audio_in_window_t3

0x69f8,	// (0x000427c1) popup_call2_audio_in_window_t4_ParamLimits

0x69f8,	// (0x000427c1) popup_call2_audio_in_window_t4

0x6a0a,	// (0x000427d3) popup_call2_audio_in_window_t5_ParamLimits

0x6a0a,	// (0x000427d3) popup_call2_audio_in_window_t5

0x6a1f,	// (0x000427e8) popup_call2_audio_in_window_t6_ParamLimits

0x6a1f,	// (0x000427e8) popup_call2_audio_in_window_t6

0x0005,

0xf4df,	// (0x0004b2a8) popup_call2_audio_in_window_t_ParamLimits

0xf4df,	// (0x0004b2a8) popup_call2_audio_in_window_t

0x0cd5,	// (0x0003ca9e) bg_popup_call2_in_pane_g1

0x6c20,	// (0x000429e9) popup_cale_lunar_info_window_t4

0x0003,

0xf55a,	// (0x0004b323) popup_cale_lunar_info_window_t

0x0cdd,	// (0x0003caa6) bg_popup_call2_rect_pane_ParamLimits

0x0cdd,	// (0x0003caa6) bg_popup_call2_rect_pane

0x0a82,	// (0x0003c84b) call2_cli_visual_graphic_pane

0x0a82,	// (0x0003c84b) call2_cli_visual_text_pane

0xbfcf,	// (0x00047d98) smil_status_volume_pane_g3

0x0002,

0x0cf5,	// (0x0003cabe) call2_cli_visual_graphic_pane_g1

0x0cf5,	// (0x0003cabe) call2_cli_visual_graphic_pane_g2

0x0cf5,	// (0x0003cabe) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ec,	// (0x0004b2b5) call2_cli_visual_graphic_pane_g

0x6a4e,	// (0x00042817) bg_popup_call2_rect_pane_g1

0x0eb6,	// (0x0003cc7f) bg_popup_call2_rect_pane_g2

0x6a56,	// (0x0004281f) bg_popup_call2_rect_pane_g3

0x6a5e,	// (0x00042827) bg_popup_call2_rect_pane_g4

0x6a66,	// (0x0004282f) bg_popup_call2_rect_pane_g5

0x6a6e,	// (0x00042837) bg_popup_call2_rect_pane_g6

0x6a76,	// (0x0004283f) bg_popup_call2_rect_pane_g7

0x6a7e,	// (0x00042847) bg_popup_call2_rect_pane_g8

0x6a86,	// (0x0004284f) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f3,	// (0x0004b2bc) bg_popup_call2_rect_pane_g

0x6a8e,	// (0x00042857) bg_popup_call2_bubble_pane_g1

0x6a96,	// (0x0004285f) bg_popup_call2_bubble_pane_g2

0x6a9e,	// (0x00042867) bg_popup_call2_bubble_pane_g3

0x6aa6,	// (0x0004286f) bg_popup_call2_bubble_pane_g4

0x6aae,	// (0x00042877) bg_popup_call2_bubble_pane_g5

0x6ab6,	// (0x0004287f) bg_popup_call2_bubble_pane_g6

0x6abe,	// (0x00042887) bg_popup_call2_bubble_pane_g7

0x6ac6,	// (0x0004288f) bg_popup_call2_bubble_pane_g8

0x6ace,	// (0x00042897) bg_popup_call2_bubble_pane_g9

0x0008,

0xf506,	// (0x0004b2cf) bg_popup_call2_bubble_pane_g

0x3a40,	// (0x0003f809) aid_cale_week_size_cell_pane

0x407b,	// (0x0003fe44) aid_cams_cif_uncrop_pane_ParamLimits

0x407b,	// (0x0003fe44) aid_cams_cif_uncrop_pane

0x41d1,	// (0x0003ff9a) aid_cams_size_cell_ParamLimits

0x41d1,	// (0x0003ff9a) aid_cams_size_cell

0x41e5,	// (0x0003ffae) grid_cams_pane_ParamLimits

0x41fa,	// (0x0003ffc3) linegrid_cams_pane_ParamLimits

0x42c4,	// (0x0004008d) call_video_pane_t1

0x42de,	// (0x000400a7) call_video_pane_t2

0x0001,

0xf1fc,	// (0x0004afc5) call_video_pane_t

0x4663,	// (0x0004042c) aid_cale_month_size_cell_pane_ParamLimits

0x4663,	// (0x0004042c) aid_cale_month_size_cell_pane

0xf59e,	// (0x0004b367) smil_status_volume_pane_g

0xbfdc,	// (0x00047da5) volume_smil_pane_ParamLimits

0xbc5e,	// (0x00047a27) aid_popup2_width_pane

0x399c,	// (0x0003f765) cell_qdial_pane_g4_ParamLimits

0x399c,	// (0x0003f765) cell_qdial_pane_g4

0x531a,	// (0x000410e3) aid_blid_cardinal_pane_ParamLimits

0x5326,	// (0x000410ef) aid_blid_destination_pane_ParamLimits

0x5326,	// (0x000410ef) aid_blid_destination_pane

0x0cdd,	// (0x0003caa6) bg_popup_call_poc_act_pane_ParamLimits

0x0cdd,	// (0x0003caa6) bg_popup_call_poc_act_pane

0x0cdd,	// (0x0003caa6) bg_popup_call_poc_inact_pane_ParamLimits

0x0cdd,	// (0x0003caa6) bg_popup_call_poc_inact_pane

0x6ade,	// (0x000428a7) bg_popup_call_poc_act_pane_g1

0x6ae6,	// (0x000428af) bg_popup_call_poc_act_pane_g2

0x6aee,	// (0x000428b7) bg_popup_call_poc_act_pane_g3

0x6aa6,	// (0x0004286f) bg_popup_call_poc_act_pane_g4

0x6aae,	// (0x00042877) bg_popup_call_poc_act_pane_g5

0x6af6,	// (0x000428bf) bg_popup_call_poc_act_pane_g6

0x6abe,	// (0x00042887) bg_popup_call_poc_act_pane_g7

0x6afe,	// (0x000428c7) bg_popup_call_poc_act_pane_g8

0x0a82,	// (0x0003c84b) main_usb_pane

0xbeec,	// (0x00047cb5) popup_cale_lunar_info_window

0x4523,	// (0x000402ec) im_reading_pane_t1_ParamLimits

0x10d2,	// (0x0003ce9b) list_im_pane_ParamLimits

0x10e3,	// (0x0003ceac) scroll_pane_cp07_ParamLimits

0x0a82,	// (0x0003c84b) grid_highlight_pane_cp012

0x0cdd,	// (0x0003caa6) mup_scale_pane_ParamLimits

0x1b43,	// (0x0003d90c) main_usb_pane_g1_ParamLimits

0x1b43,	// (0x0003d90c) main_usb_pane_g1

0x6b5e,	// (0x00042927) main_usb_pane_g2_ParamLimits

0x6b5e,	// (0x00042927) main_usb_pane_g2

0x0001,

0xf543,	// (0x0004b30c) main_usb_pane_g_ParamLimits

0xf543,	// (0x0004b30c) main_usb_pane_g

0x6b72,	// (0x0004293b) main_usb_pane_t1_ParamLimits

0x6b72,	// (0x0004293b) main_usb_pane_t1

0x6b84,	// (0x0004294d) main_usb_pane_t2_ParamLimits

0x6b84,	// (0x0004294d) main_usb_pane_t2

0x6b96,	// (0x0004295f) main_usb_pane_t3_ParamLimits

0x6b96,	// (0x0004295f) main_usb_pane_t3

0x6ba8,	// (0x00042971) main_usb_pane_t4_ParamLimits

0x6ba8,	// (0x00042971) main_usb_pane_t4

0x6bba,	// (0x00042983) main_usb_pane_t5_ParamLimits

0x6bba,	// (0x00042983) main_usb_pane_t5

0x6bcc,	// (0x00042995) main_usb_pane_t6_ParamLimits

0x6bcc,	// (0x00042995) main_usb_pane_t6

0x0005,

0xf548,	// (0x0004b311) main_usb_pane_t_ParamLimits

0x182d,	// (0x0003d5f6) aid_text_placing

0x52c6,	// (0x0004108f) main_location2_pane_t1_ParamLimits

0x52dc,	// (0x000410a5) main_location2_pane_t2_ParamLimits

0x52f2,	// (0x000410bb) main_location2_pane_t3_ParamLimits

0x5308,	// (0x000410d1) main_location2_pane_t4_ParamLimits

0x5308,	// (0x000410d1) main_location2_pane_t4

0xf34f,	// (0x0004b118) main_location2_pane_t_ParamLimits

0x0d18,	// (0x0003cae1) find_pinb_pane_g2_ParamLimits

0x0d18,	// (0x0003cae1) find_pinb_pane_g2

0x0001,

0xf0b4,	// (0x0004ae7d) find_pinb_pane_g_ParamLimits

0xf0b4,	// (0x0004ae7d) find_pinb_pane_g

0x0d24,	// (0x0003caed) find_pinb_pane_t1_ParamLimits

0x0d36,	// (0x0003caff) find_pinb_pane_t2_ParamLimits

0xf0b9,	// (0x0004ae82) find_pinb_pane_t_ParamLimits

0x0a82,	// (0x0003c84b) main_call3_pane

0x4a5e,	// (0x00040827) cale_month_day_heading_pane_t1_ParamLimits

0x4ae4,	// (0x000408ad) cale_month_day_heading_pane_t2_ParamLimits

0x4b75,	// (0x0004093e) cale_month_day_heading_pane_t3_ParamLimits

0x4c06,	// (0x000409cf) cale_month_day_heading_pane_t4_ParamLimits

0x4c97,	// (0x00040a60) cale_month_day_heading_pane_t5_ParamLimits

0x4d28,	// (0x00040af1) cale_month_day_heading_pane_t6_ParamLimits

0x4db9,	// (0x00040b82) cale_month_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0004affd) cale_month_day_heading_pane_t_ParamLimits

0x5015,	// (0x00040dde) smil_status_volume_pane

0x5718,	// (0x000414e1) postcard_address_pane_ParamLimits

0x5718,	// (0x000414e1) postcard_address_pane

0x572a,	// (0x000414f3) postcard_message_pane_ParamLimits

0x572a,	// (0x000414f3) postcard_message_pane

0x6a34,	// (0x000427fd) call2_cli_visual_pane_t1_ParamLimits

0x6a34,	// (0x000427fd) call2_cli_visual_pane_t1

0xc009,	// (0x00047dd2) postcard_message_pane_t1_ParamLimits

0xc009,	// (0x00047dd2) postcard_message_pane_t1

0xbff1,	// (0x00047dba) postcard_address_pane_t1_ParamLimits

0xbff1,	// (0x00047dba) postcard_address_pane_t1

0x72b1,	// (0x0004307a) popup_call3_audio_in_window_ParamLimits

0x72b1,	// (0x0004307a) popup_call3_audio_in_window

0x7140,	// (0x00042f09) bg_popup_call3_in_pane_ParamLimits

0x7140,	// (0x00042f09) bg_popup_call3_in_pane

0x71b2,	// (0x00042f7b) popup_call3_audio_in_window_g1_ParamLimits

0x71b2,	// (0x00042f7b) popup_call3_audio_in_window_g1

0x71d2,	// (0x00042f9b) popup_call3_audio_in_window_g2_ParamLimits

0x71d2,	// (0x00042f9b) popup_call3_audio_in_window_g2

0x71f2,	// (0x00042fbb) popup_call3_audio_in_window_g3_ParamLimits

0x71f2,	// (0x00042fbb) popup_call3_audio_in_window_g3

0x0003,

0xf5a5,	// (0x0004b36e) popup_call3_audio_in_window_g_ParamLimits

0xf5a5,	// (0x0004b36e) popup_call3_audio_in_window_g

0x7223,	// (0x00042fec) popup_call3_audio_in_window_t1_ParamLimits

0x7223,	// (0x00042fec) popup_call3_audio_in_window_t1

0x7261,	// (0x0004302a) popup_call3_audio_in_window_t2_ParamLimits

0x7261,	// (0x0004302a) popup_call3_audio_in_window_t2

0x729f,	// (0x00043068) popup_call3_audio_in_window_t3_ParamLimits

0x729f,	// (0x00043068) popup_call3_audio_in_window_t3

0x0002,

0xf5ae,	// (0x0004b377) popup_call3_audio_in_window_t_ParamLimits

0xf5ae,	// (0x0004b377) popup_call3_audio_in_window_t

0x0f9a,	// (0x0003cd63) bg_popup_call3_rect_pane

0x6a4e,	// (0x00042817) bg_popup_call3_rect_pane_g1

0x0eb6,	// (0x0003cc7f) bg_popup_call3_rect_pane_g2

0x6a56,	// (0x0004281f) bg_popup_call3_rect_pane_g3

0x6a5e,	// (0x00042827) bg_popup_call3_rect_pane_g4

0x6a66,	// (0x0004282f) bg_popup_call3_rect_pane_g5

0x6a6e,	// (0x00042837) bg_popup_call3_rect_pane_g6

0x6a76,	// (0x0004283f) bg_popup_call3_rect_pane_g7

0x0659,	// (0x0003c422) mup_visualizer_osc_pane

0x0659,	// (0x0003c422) mup_visualizer_spec_pane

0x7170,	// (0x00042f39) call3_video_qcif_pane_ParamLimits

0x7170,	// (0x00042f39) call3_video_qcif_pane

0x7181,	// (0x00042f4a) call3_video_qcif_uncrop_pane_ParamLimits

0x7181,	// (0x00042f4a) call3_video_qcif_uncrop_pane

0x718d,	// (0x00042f56) call3_video_subqcif_pane_ParamLimits

0x718d,	// (0x00042f56) call3_video_subqcif_pane

0x71a1,	// (0x00042f6a) call3_video_subqcif_uncrop_pane_ParamLimits

0x71a1,	// (0x00042f6a) call3_video_subqcif_uncrop_pane

0x7212,	// (0x00042fdb) popup_call3_audio_in_window_g4_ParamLimits

0x7212,	// (0x00042fdb) popup_call3_audio_in_window_g4

0x0659,	// (0x0003c422) mup_spec_half_pane

0x0659,	// (0x0003c422) mup_spec_half_pane_cp

0x0659,	// (0x0003c422) mup_osc_middle_pane

0x101b,	// (0x0003cde4) mup_visualizer_osc_pane_g1

0xbf82,	// (0x00047d4b) mup_spec_bar_pane_ParamLimits

0xbf82,	// (0x00047d4b) mup_spec_bar_pane

0x101b,	// (0x0003cde4) mup_spec_bar_pane_g1

0x101b,	// (0x0003cde4) mup_spec_bar_pane_g2

0x0001,

0xf3c9,	// (0x0004b192) mup_spec_bar_pane_g

0x3a40,	// (0x0003f809) aid_cale_week_size_cell_pane_ParamLimits

0x3a5a,	// (0x0003f823) bg_cale_heading_pane_ParamLimits

0x0ef4,	// (0x0003ccbd) bg_cale_pane_cp01_ParamLimits

0x3a72,	// (0x0003f83b) cale_week_corner_pane_ParamLimits

0x3a91,	// (0x0003f85a) cale_week_day_heading_pane_ParamLimits

0x3aae,	// (0x0003f877) cale_week_scroll_pane_g1_ParamLimits

0x3ac1,	// (0x0003f88a) cale_week_scroll_pane_g2_ParamLimits

0x3ad9,	// (0x0003f8a2) cale_week_scroll_pane_g3_ParamLimits

0x3af1,	// (0x0003f8ba) cale_week_scroll_pane_g4_ParamLimits

0x3b09,	// (0x0003f8d2) cale_week_scroll_pane_g5_ParamLimits

0x3b21,	// (0x0003f8ea) cale_week_scroll_pane_g6_ParamLimits

0x3b39,	// (0x0003f902) cale_week_scroll_pane_g7_ParamLimits

0x3b51,	// (0x0003f91a) cale_week_scroll_pane_g8_ParamLimits

0x3b6d,	// (0x0003f936) cale_week_scroll_pane_g9_ParamLimits

0x3b85,	// (0x0003f94e) cale_week_scroll_pane_g10_ParamLimits

0x3b9d,	// (0x0003f966) cale_week_scroll_pane_g11_ParamLimits

0x3bb5,	// (0x0003f97e) cale_week_scroll_pane_g12_ParamLimits

0x3bcd,	// (0x0003f996) cale_week_scroll_pane_g13_ParamLimits

0x3be5,	// (0x0003f9ae) cale_week_scroll_pane_g14_ParamLimits

0x3bfd,	// (0x0003f9c6) cale_week_scroll_pane_g15_ParamLimits

0xf145,	// (0x0004af0e) cale_week_scroll_pane_g_ParamLimits

0x3c31,	// (0x0003f9fa) cale_week_time_pane_ParamLimits

0x3c4d,	// (0x0003fa16) grid_cale_week_pane_ParamLimits

0x0f11,	// (0x0003ccda) listscroll_cale_week_pane_t1

0x0f23,	// (0x0003ccec) scroll_pane_cp08_ParamLimits

0x46b8,	// (0x00040481) cale_month_corner_pane_ParamLimits

0x1313,	// (0x0003d0dc) cale_month_pane_t1

0x4a14,	// (0x000407dd) cale_month_week_pane_ParamLimits

0x5137,	// (0x00040f00) popup_call_status_window_g1_ParamLimits

0x514b,	// (0x00040f14) popup_call_status_window_g2_ParamLimits

0x515f,	// (0x00040f28) popup_call_status_window_g3_ParamLimits

0xf2d6,	// (0x0004b09f) popup_call_status_window_g_ParamLimits

0x1688,	// (0x0003d451) aid_call2_pane

0x2c4e,	// (0x0003ea17) msg_header_pane_g1

0x5718,	// (0x000414e1) postcard_address2_pane_ParamLimits

0x5718,	// (0x000414e1) postcard_address2_pane

0x572a,	// (0x000414f3) postcard_message2_pane_ParamLimits

0x572a,	// (0x000414f3) postcard_message2_pane

0x7113,	// (0x00042edc) message2_row_pane_ParamLimits

0x7113,	// (0x00042edc) message2_row_pane

0x712d,	// (0x00042ef6) address2_row_pane_ParamLimits

0x712d,	// (0x00042ef6) address2_row_pane

0xbf4f,	// (0x00047d18) postcard_message2_row_pane_g1

0xbf57,	// (0x00047d20) postcard_message2_row_pane_t1

0xbf4f,	// (0x00047d18) address2_row_pane_g1

0xbf57,	// (0x00047d20) address2_row_pane_t1

0x404a,	// (0x0003fe13) aid_size_cell_vorec

0x0a82,	// (0x0003c84b) main_rss_pane

0xbf65,	// (0x00047d2e) rss_list_single_pane_ParamLimits

0xbf65,	// (0x00047d2e) rss_list_single_pane

0xbf73,	// (0x00047d3c) rss_list_single_pane_t1

0xbf73,	// (0x00047d3c) rss_list_single_pane_t2

0x0001,

0xf599,	// (0x0004b362) rss_list_single_pane_t

0x0a82,	// (0x0003c84b) main_camera2_pane

0x0a82,	// (0x0003c84b) main_video2_pane

0xebdb,	// (0x0004a9a4) cams_zoom_pane_cp2_ParamLimits

0xebdb,	// (0x0004a9a4) cams_zoom_pane_cp2

0xebdb,	// (0x0004a9a4) image2_vga_pane_ParamLimits

0xebdb,	// (0x0004a9a4) image2_vga_pane

0xebe9,	// (0x0004a9b2) main_camera2_pane_g1_ParamLimits

0xebe9,	// (0x0004a9b2) main_camera2_pane_g1

0xebe9,	// (0x0004a9b2) main_camera2_pane_g2_ParamLimits

0xebe9,	// (0x0004a9b2) main_camera2_pane_g2

0xebe9,	// (0x0004a9b2) main_camera2_pane_g3_ParamLimits

0xebe9,	// (0x0004a9b2) main_camera2_pane_g3

0xebe9,	// (0x0004a9b2) main_camera2_pane_g4_ParamLimits

0xebe9,	// (0x0004a9b2) main_camera2_pane_g4

0xebe9,	// (0x0004a9b2) main_camera2_pane_g5_ParamLimits

0xebe9,	// (0x0004a9b2) main_camera2_pane_g5

0xebe9,	// (0x0004a9b2) main_camera2_pane_g6_ParamLimits

0xebe9,	// (0x0004a9b2) main_camera2_pane_g6

0xebe9,	// (0x0004a9b2) main_camera2_pane_g7_ParamLimits

0xebe9,	// (0x0004a9b2) main_camera2_pane_g7

0xebe9,	// (0x0004a9b2) main_camera2_pane_g8_ParamLimits

0xebe9,	// (0x0004a9b2) main_camera2_pane_g8

0x0008,

0xf5b5,	// (0x0004b37e) main_camera2_pane_g_ParamLimits

0xf5b5,	// (0x0004b37e) main_camera2_pane_g

0x72d1,	// (0x0004309a) main_camera2_pane_t1_ParamLimits

0x72d1,	// (0x0004309a) main_camera2_pane_t1

0x72d1,	// (0x0004309a) main_camera2_pane_t2_ParamLimits

0x72d1,	// (0x0004309a) main_camera2_pane_t2

0x72d1,	// (0x0004309a) main_camera2_pane_t3_ParamLimits

0x72d1,	// (0x0004309a) main_camera2_pane_t3

0x72d1,	// (0x0004309a) main_camera2_pane_t4_ParamLimits

0x72d1,	// (0x0004309a) main_camera2_pane_t4

0x0006,

0xf5c8,	// (0x0004b391) main_camera2_pane_t_ParamLimits

0xf5c8,	// (0x0004b391) main_camera2_pane_t

0xc039,	// (0x00047e02) cams_zoom_pane_cp4_ParamLimits

0xc039,	// (0x00047e02) cams_zoom_pane_cp4

0xc047,	// (0x00047e10) image2_cif_pane_ParamLimits

0xc047,	// (0x00047e10) image2_cif_pane

0x1a5e,	// (0x0003d827) image2_subqcif_pane_ParamLimits

0x1a5e,	// (0x0003d827) image2_subqcif_pane

0x72e5,	// (0x000430ae) main_video2_pane_g1_ParamLimits

0x72e5,	// (0x000430ae) main_video2_pane_g1

0x72e5,	// (0x000430ae) main_video2_pane_g2_ParamLimits

0x72e5,	// (0x000430ae) main_video2_pane_g2

0x72e5,	// (0x000430ae) main_video2_pane_g3_ParamLimits

0x72e5,	// (0x000430ae) main_video2_pane_g3

0x72e5,	// (0x000430ae) main_video2_pane_g4_ParamLimits

0x72e5,	// (0x000430ae) main_video2_pane_g4

0x72e5,	// (0x000430ae) main_video2_pane_g5_ParamLimits

0x72e5,	// (0x000430ae) main_video2_pane_g5

0x72e5,	// (0x000430ae) main_video2_pane_g6_ParamLimits

0x72e5,	// (0x000430ae) main_video2_pane_g6

0x0005,

0xf5d7,	// (0x0004b3a0) main_video2_pane_g_ParamLimits

0xf5d7,	// (0x0004b3a0) main_video2_pane_g

0x72f3,	// (0x000430bc) main_video2_pane_t1_ParamLimits

0x72f3,	// (0x000430bc) main_video2_pane_t1

0x72f3,	// (0x000430bc) main_video2_pane_t2_ParamLimits

0x72f3,	// (0x000430bc) main_video2_pane_t2

0x72f3,	// (0x000430bc) main_video2_pane_t3_ParamLimits

0x72f3,	// (0x000430bc) main_video2_pane_t3

0x0002,

0xf5e4,	// (0x0004b3ad) main_video2_pane_t_ParamLimits

0xf5e4,	// (0x0004b3ad) main_video2_pane_t

0x6cc7,	// (0x00042a90) call_muted_g2

0x0001,

0xf58b,	// (0x0004b354) call_muted_g

0x0a82,	// (0x0003c84b) main_mup2_pane

0x1ce2,	// (0x0003daab) main_mup2_pane_g1_ParamLimits

0x1ce2,	// (0x0003daab) main_mup2_pane_g1

0x1ce2,	// (0x0003daab) main_mup2_pane_g2_ParamLimits

0x1ce2,	// (0x0003daab) main_mup2_pane_g2

0x101b,	// (0x0003cde4) main_mup_pane_g13_cp1

0x0659,	// (0x0003c422) mup_volume_pane_cp1

0x1ce2,	// (0x0003daab) main_mup2_pane_g4_ParamLimits

0x1ce2,	// (0x0003daab) main_mup2_pane_g4

0x1ce2,	// (0x0003daab) main_mup2_pane_g5_ParamLimits

0x1ce2,	// (0x0003daab) main_mup2_pane_g5

0x1ce2,	// (0x0003daab) main_mup2_pane_g6_ParamLimits

0x1ce2,	// (0x0003daab) main_mup2_pane_g6

0x1ce2,	// (0x0003daab) main_mup2_pane_g7_ParamLimits

0x1ce2,	// (0x0003daab) main_mup2_pane_g7

0x0006,

0xf5eb,	// (0x0004b3b4) main_mup2_pane_g_ParamLimits

0xf5eb,	// (0x0004b3b4) main_mup2_pane_g

0x1cf0,	// (0x0003dab9) main_mup2_pane_t1_ParamLimits

0x1cf0,	// (0x0003dab9) main_mup2_pane_t1

0x1cf0,	// (0x0003dab9) main_mup2_pane_t2_ParamLimits

0x1cf0,	// (0x0003dab9) main_mup2_pane_t2

0x1cf0,	// (0x0003dab9) main_mup2_pane_t3_ParamLimits

0x1cf0,	// (0x0003dab9) main_mup2_pane_t3

0x1cf0,	// (0x0003dab9) main_mup2_pane_t4_ParamLimits

0x1cf0,	// (0x0003dab9) main_mup2_pane_t4

0x1cf0,	// (0x0003dab9) main_mup2_pane_t5_ParamLimits

0x1cf0,	// (0x0003dab9) main_mup2_pane_t5

0x1cf0,	// (0x0003dab9) main_mup2_pane_t6_ParamLimits

0x1cf0,	// (0x0003dab9) main_mup2_pane_t6

0x0005,

0xf5fa,	// (0x0004b3c3) main_mup2_pane_t_ParamLimits

0xf5fa,	// (0x0004b3c3) main_mup2_pane_t

0x1cd4,	// (0x0003da9d) mup2_visualizer_pane_ParamLimits

0x1cd4,	// (0x0003da9d) mup2_visualizer_pane

0x1cd4,	// (0x0003da9d) mup_progress_pane_cp_ParamLimits

0x1cd4,	// (0x0003da9d) mup_progress_pane_cp

0xc055,	// (0x00047e1e) mup_volume_pane_cp_ParamLimits

0xc055,	// (0x00047e1e) mup_volume_pane_cp

0x0d57,	// (0x0003cb20) mup2_visualizer_pane_g1_ParamLimits

0x0d57,	// (0x0003cb20) mup2_visualizer_pane_g1

0x0d65,	// (0x0003cb2e) mup2_visualizer_pane_g2_ParamLimits

0x0d65,	// (0x0003cb2e) mup2_visualizer_pane_g2

0x0d65,	// (0x0003cb2e) mup2_visualizer_pane_g3_ParamLimits

0x0d65,	// (0x0003cb2e) mup2_visualizer_pane_g3

0x0002,

0xf0be,	// (0x0004ae87) mup2_visualizer_pane_g_ParamLimits

0xf0be,	// (0x0004ae87) mup2_visualizer_pane_g

0x0f92,	// (0x0003cd5b) aid_size_cell_fmradio

0x6e54,	// (0x00042c1d) aid_height_parent_landcape

0x1170,	// (0x0003cf39) wml_content_pane_cp

0x1178,	// (0x0003cf41) wml_tabs_pane

0x1181,	// (0x0003cf4a) popup_wml_miniature_window

0x1189,	// (0x0003cf52) scroll_pane_cp021

0x119d,	// (0x0003cf66) wml_content_pane_comp8

0x0a82,	// (0x0003c84b) bg_popup_sub_pane_cp05

0xc06b,	// (0x00047e34) popup_wml_miniature_window_g1

0xc073,	// (0x00047e3c) wml_miniature_view_pane

0x7307,	// (0x000430d0) aid_size_wml_view

0x730f,	// (0x000430d8) wml_miniature_view_pane_g1

0x7318,	// (0x000430e1) wml_miniature_view_pane_g2

0x7321,	// (0x000430ea) wml_miniature_view_pane_g3

0x7329,	// (0x000430f2) wml_miniature_view_pane_g4

0x7331,	// (0x000430fa) wml_miniature_view_pane_g5

0x7339,	// (0x00043102) wml_miniature_view_pane_g6

0x7341,	// (0x0004310a) wml_miniature_view_pane_g7

0x7349,	// (0x00043112) wml_miniature_view_pane_g8

0x0007,

0xf607,	// (0x0004b3d0) wml_miniature_view_pane_g

0xc07b,	// (0x00047e44) background_graphic_ParamLimits

0xc07b,	// (0x00047e44) background_graphic

0xc087,	// (0x00047e50) wml_tabs_2_pane

0xc090,	// (0x00047e59) wml_tabs_3_pane_ParamLimits

0xc090,	// (0x00047e59) wml_tabs_3_pane

0xc0a2,	// (0x00047e6b) wml_tabs_4_pane_ParamLimits

0xc0a2,	// (0x00047e6b) wml_tabs_4_pane

0xc0b8,	// (0x00047e81) wml_tabs_5_pane_ParamLimits

0xc0b8,	// (0x00047e81) wml_tabs_5_pane

0xc0d2,	// (0x00047e9b) wml_tabs_pane_g2_ParamLimits

0xc0d2,	// (0x00047e9b) wml_tabs_pane_g2

0xc0e7,	// (0x00047eb0) wml_tabs_pane_g3_ParamLimits

0xc0e7,	// (0x00047eb0) wml_tabs_pane_g3

0xc0fc,	// (0x00047ec5) wml_tabs_2_active_pane_ParamLimits

0xc0fc,	// (0x00047ec5) wml_tabs_2_active_pane

0xc0fc,	// (0x00047ec5) wml_tabs_2_passive_pane_ParamLimits

0xc0fc,	// (0x00047ec5) wml_tabs_2_passive_pane

0x7351,	// (0x0004311a) wml_tabs_3_active_pane_cp_ParamLimits

0x7351,	// (0x0004311a) wml_tabs_3_active_pane_cp

0x7362,	// (0x0004312b) wml_tabs_3_passive_pane_ParamLimits

0x7362,	// (0x0004312b) wml_tabs_3_passive_pane

0x7373,	// (0x0004313c) wml_tabs_3_passive_pane_cp_ParamLimits

0x7373,	// (0x0004313c) wml_tabs_3_passive_pane_cp

0x7384,	// (0x0004314d) tabs_4_active_pane

0x738c,	// (0x00043155) tabs_4_passive_pane

0x7394,	// (0x0004315d) tabs_4_passive_pane_cp

0x739c,	// (0x00043165) tabs_4_passive_pane_cp2

0x6ad6,	// (0x0004289f) aid_height_text

0x1cd4,	// (0x0003da9d) mup_volume_cont_pane_ParamLimits

0x1cd4,	// (0x0003da9d) mup_volume_cont_pane

0x3746,	// (0x0003f50f) aid_size_cell_pinb

0x0659,	// (0x0003c422) aid_size_list_pinb

0x1cd4,	// (0x0003da9d) mup2_volume_cont_pane_ParamLimits

0x1cd4,	// (0x0003da9d) mup2_volume_cont_pane

0xc10a,	// (0x00047ed3) mup2_volume_cont_pane_g1_ParamLimits

0xc10a,	// (0x00047ed3) mup2_volume_cont_pane_g1

0x34bb,	// (0x0003f284) aid_size_cell_touch_ParamLimits

0x34bb,	// (0x0003f284) aid_size_cell_touch

0x36a6,	// (0x0003f46f) touch_pane_ParamLimits

0x36a6,	// (0x0003f46f) touch_pane

0x0659,	// (0x0003c422) main_rss2_pane

0xc129,	// (0x00047ef2) listscroll_rss2_pane

0xc132,	// (0x00047efb) rss2_navigation_pane

0xc13a,	// (0x00047f03) list_rss2_pane

0x16b3,	// (0x0003d47c) scroll_pane_cp22

0xc142,	// (0x00047f0b) rss2_navigation_pane_g1

0xc14b,	// (0x00047f14) rss2_navigation_pane_g2

0xc153,	// (0x00047f1c) rss2_navigation_pane_g3

0x0002,

0xf618,	// (0x0004b3e1) rss2_navigation_pane_g

0xc15b,	// (0x00047f24) rss2_navigation_pane_t1

0x73a4,	// (0x0004316d) rss2_list_single_pane_ParamLimits

0x73a4,	// (0x0004316d) rss2_list_single_pane

0xc169,	// (0x00047f32) rss2_list_single_pane_t2

0xc177,	// (0x00047f40) rss2_list_single_pane_t3_ParamLimits

0xc177,	// (0x00047f40) rss2_list_single_pane_t3

0xc194,	// (0x00047f5d) rss2_list_single_pane_t4

0x4fff,	// (0x00040dc8) smil_status_pane_g1

0x1a5e,	// (0x0003d827) main_image2_pane_ParamLimits

0x1a5e,	// (0x0003d827) main_image2_pane

0xebe9,	// (0x0004a9b2) main_camera2_pane_g9_ParamLimits

0xebe9,	// (0x0004a9b2) main_camera2_pane_g9

0x72d1,	// (0x0004309a) main_camera2_pane_t5_ParamLimits

0x72d1,	// (0x0004309a) main_camera2_pane_t5

0xc025,	// (0x00047dee) main_camera2_pane_t6_ParamLimits

0xc025,	// (0x00047dee) main_camera2_pane_t6

0x73b8,	// (0x00043181) main_image2_pane_g1_ParamLimits

0x73b8,	// (0x00043181) main_image2_pane_g1

0x593f,	// (0x00041708) smil2_video_pane_ParamLimits

0x593f,	// (0x00041708) smil2_video_pane

0xbc76,	// (0x00047a3f) aid_zoom_text_primary_cp

0xbc9f,	// (0x00047a68) popup_preview_fixed_window

0x10ca,	// (0x0003ce93) im_reading_pane_g1

0x72c3,	// (0x0004308c) cams2_bc_adjust_pane_cp_ParamLimits

0x72c3,	// (0x0004308c) cams2_bc_adjust_pane_cp

0x1cd4,	// (0x0003da9d) cams2_bc_adjust_pane_ParamLimits

0x1cd4,	// (0x0003da9d) cams2_bc_adjust_pane

0x101b,	// (0x0003cde4) cams2_bc_adjust_pane_g1

0x0659,	// (0x0003c422) cams2_slider_pane

0x101b,	// (0x0003cde4) cams2_slider_pane_g1

0x101b,	// (0x0003cde4) cams2_slider_pane_g2

0x0006,

0xf61f,	// (0x0004b3e8) cams2_slider_pane_g

0x378f,	// (0x0003f558) calc_display_pane_ParamLimits

0x37ab,	// (0x0003f574) calc_paper_pane_ParamLimits

0x37cc,	// (0x0003f595) grid_calc_pane_ParamLimits

0xbe4f,	// (0x00047c18) popup_clock_digital_window_t1_ParamLimits

0x1c1b,	// (0x0003d9e4) main_image_pane_t1

0x3771,	// (0x0003f53a) aid_size_cell_calc_ParamLimits

0x3771,	// (0x0003f53a) aid_size_cell_calc

0x6ea2,	// (0x00042c6b) popup_blid_sat_info2_window_ParamLimits

0x6ea2,	// (0x00042c6b) popup_blid_sat_info2_window

0xc1a2,	// (0x00047f6b) aid_size_cell_blid

0xc047,	// (0x00047e10) bg_popup_window_pane_cp07

0xc1bf,	// (0x00047f88) grid_popup_blid_pane

0xc1c7,	// (0x00047f90) heading_pane_cp05_ParamLimits

0xc1c7,	// (0x00047f90) heading_pane_cp05

0xc28f,	// (0x00048058) cell_popup_blid_pane_ParamLimits

0xc28f,	// (0x00048058) cell_popup_blid_pane

0xc2af,	// (0x00048078) cell_popup_blid_pane_g1

0xc2b7,	// (0x00048080) cell_popup_blid_pane_t1

0x1cd4,	// (0x0003da9d) mup2_indicator_pane_ParamLimits

0x1cd4,	// (0x0003da9d) mup2_indicator_pane

0x0659,	// (0x0003c422) mup2_visualizer_osc_pane

0xc055,	// (0x00047e1e) mup2_visualizer_spec_pane_ParamLimits

0xc055,	// (0x00047e1e) mup2_visualizer_spec_pane

0x0659,	// (0x0003c422) mup2_spec_half_pane

0x0659,	// (0x0003c422) mup2_spec_half_pane_cp

0xc2c5,	// (0x0004808e) mup2_spec_bar_pane_ParamLimits

0xc2c5,	// (0x0004808e) mup2_spec_bar_pane

0x101b,	// (0x0003cde4) mup2_spec_bar_pane_g1

0xc2e4,	// (0x000480ad) mup2_spec_bar_pane_g2

0x0001,

0xf645,	// (0x0004b40e) mup2_spec_bar_pane_g

0x0659,	// (0x0003c422) mup2_osc_middle_pane

0x101b,	// (0x0003cde4) mup2_visualizer_osc_pane_g1

0x0691,	// (0x0003c45a) popup_number_entry_window_t1_ParamLimits

0x06a4,	// (0x0003c46d) popup_number_entry_window_t2_ParamLimits

0x06b6,	// (0x0003c47f) popup_number_entry_window_t3_ParamLimits

0x36ee,	// (0x0003f4b7) popup_number_entry_window_t5_ParamLimits

0x36ee,	// (0x0003f4b7) popup_number_entry_window_t5

0xf05f,	// (0x0004ae28) popup_number_entry_window_t_ParamLimits

0x06c8,	// (0x0003c491) text_title_cp2_ParamLimits

0xbeb2,	// (0x00047c7b) aid_hotspot_pointer_text2_pane

0xbed8,	// (0x00047ca1) main_viewer_pane_g9_ParamLimits

0xbed8,	// (0x00047ca1) main_viewer_pane_g9

0x1313,	// (0x0003d0dc) cale_month_pane_t1_ParamLimits

0x1339,	// (0x0003d102) bg_cale_pane_ParamLimits

0x1351,	// (0x0003d11a) list_cale_pane_ParamLimits

0x1362,	// (0x0003d12b) listscroll_cale_day_pane_t1

0x1374,	// (0x0003d13d) scroll_pane_cp09_ParamLimits

0x5436,	// (0x000411ff) main_mup_eq_pane_t1_ParamLimits

0x5436,	// (0x000411ff) main_mup_eq_pane_t1

0x544e,	// (0x00041217) main_mup_eq_pane_t2_ParamLimits

0x544e,	// (0x00041217) main_mup_eq_pane_t2

0x5464,	// (0x0004122d) main_mup_eq_pane_t3_ParamLimits

0x5464,	// (0x0004122d) main_mup_eq_pane_t3

0x547a,	// (0x00041243) main_mup_eq_pane_t4_ParamLimits

0x547a,	// (0x00041243) main_mup_eq_pane_t4

0x5490,	// (0x00041259) main_mup_eq_pane_t5_ParamLimits

0x5490,	// (0x00041259) main_mup_eq_pane_t5

0x54a6,	// (0x0004126f) main_mup_eq_pane_t6_ParamLimits

0x54a6,	// (0x0004126f) main_mup_eq_pane_t6

0x54b8,	// (0x00041281) main_mup_eq_pane_t7_ParamLimits

0x54b8,	// (0x00041281) main_mup_eq_pane_t7

0x54ca,	// (0x00041293) main_mup_eq_pane_t8_ParamLimits

0x54ca,	// (0x00041293) main_mup_eq_pane_t8

0x54dc,	// (0x000412a5) main_mup_eq_pane_t9_ParamLimits

0x54dc,	// (0x000412a5) main_mup_eq_pane_t9

0x54f2,	// (0x000412bb) main_mup_eq_pane_t10_ParamLimits

0x54f2,	// (0x000412bb) main_mup_eq_pane_t10

0x0009,

0xf3d5,	// (0x0004b19e) main_mup_eq_pane_t_ParamLimits

0xf3d5,	// (0x0004b19e) main_mup_eq_pane_t

0x5585,	// (0x0004134e) mup_equalizer_pane_cp5_ParamLimits

0x5597,	// (0x00041360) mup_equalizer_pane_cp6_ParamLimits

0x55a9,	// (0x00041372) mup_equalizer_pane_cp7_ParamLimits

0x0659,	// (0x0003c422) main_gallery_pane

0xbfa1,	// (0x00047d6a) smil2_volume_pane

0xbfa9,	// (0x00047d72) smil_status_volume_pane_g1_ParamLimits

0xbfbc,	// (0x00047d85) smil_status_volume_pane_g2_ParamLimits

0xbfcf,	// (0x00047d98) smil_status_volume_pane_g3_ParamLimits

0xf59e,	// (0x0004b367) smil_status_volume_pane_g_ParamLimits

0xc047,	// (0x00047e10) bg_popup_window_pane_cp07_ParamLimits

0xc1aa,	// (0x00047f73) blid_firmament_pane

0x1a5e,	// (0x0003d827) aid_size_cell_gallery_ParamLimits

0x1a5e,	// (0x0003d827) aid_size_cell_gallery

0x73cc,	// (0x00043195) grid_gallery_pane_ParamLimits

0x73cc,	// (0x00043195) grid_gallery_pane

0x73e2,	// (0x000431ab) cell_gallery_pane_ParamLimits

0x73e2,	// (0x000431ab) cell_gallery_pane

0x1a5e,	// (0x0003d827) bg_cell_gallery_focus_pane_ParamLimits

0x1a5e,	// (0x0003d827) bg_cell_gallery_focus_pane

0x0d57,	// (0x0003cb20) cell_gallery_pane_g1_ParamLimits

0x0d57,	// (0x0003cb20) cell_gallery_pane_g1

0x0d57,	// (0x0003cb20) cell_gallery_pane_g2_ParamLimits

0x0d57,	// (0x0003cb20) cell_gallery_pane_g2

0x0d57,	// (0x0003cb20) cell_gallery_pane_g3_ParamLimits

0x0d57,	// (0x0003cb20) cell_gallery_pane_g3

0x0d65,	// (0x0003cb2e) cell_gallery_pane_g4_ParamLimits

0x0d65,	// (0x0003cb2e) cell_gallery_pane_g4

0x0003,

0xf64a,	// (0x0004b413) cell_gallery_pane_g_ParamLimits

0xf64a,	// (0x0004b413) cell_gallery_pane_g

0xc2ee,	// (0x000480b7) bg_cell_gallery_focus_pane_g1

0xc2f6,	// (0x000480bf) bg_cell_gallery_focus_pane_g2

0xc2fe,	// (0x000480c7) bg_cell_gallery_focus_pane_g3

0xc306,	// (0x000480cf) bg_cell_gallery_focus_pane_g4

0xc30e,	// (0x000480d7) bg_cell_gallery_focus_pane_g5

0xc316,	// (0x000480df) bg_cell_gallery_focus_pane_g6

0xc31e,	// (0x000480e7) bg_cell_gallery_focus_pane_g7

0xc326,	// (0x000480ef) bg_cell_gallery_focus_pane_g8

0x0007,

0xf653,	// (0x0004b41c) bg_cell_gallery_focus_pane_g

0xc32e,	// (0x000480f7) aid_firma_cardinal

0xc342,	// (0x0004810b) blid_firmament_pane_t1

0xc359,	// (0x00048122) blid_firmament_pane_t2

0xc370,	// (0x00048139) blid_firmament_pane_t3

0xc387,	// (0x00048150) blid_firmament_pane_t4

0x0003,

0xf664,	// (0x0004b42d) blid_firmament_pane_t

0xc39e,	// (0x00048167) blid_sat_info_pane

0x101b,	// (0x0003cde4) blid_sat_info_pane_g1

0x101b,	// (0x0003cde4) blid_sat_info_pane_g2

0x0001,

0xf3c9,	// (0x0004b192) blid_sat_info_pane_g

0xc3ae,	// (0x00048177) blid_sat_info_pane_t1

0xc3bc,	// (0x00048185) smil2_volume_content_pane

0xc3c5,	// (0x0004818e) smil2_volume_pane_g1

0xc3cd,	// (0x00048196) smil2_volume_content_pane_g1

0xc3d6,	// (0x0004819f) smil2_volume_content_pane_g2

0xc3df,	// (0x000481a8) smil2_volume_content_pane_g3

0xc3e8,	// (0x000481b1) smil2_volume_content_pane_g4

0xc3f1,	// (0x000481ba) smil2_volume_content_pane_g5

0xc3fa,	// (0x000481c3) smil2_volume_content_pane_g6

0xc403,	// (0x000481cc) smil2_volume_content_pane_g7

0xc40c,	// (0x000481d5) smil2_volume_content_pane_g8

0xc415,	// (0x000481de) smil2_volume_content_pane_g9

0xc41e,	// (0x000481e7) smil2_volume_content_pane_g10

0x0009,

0xf66d,	// (0x0004b436) smil2_volume_content_pane_g

0x3ce1,	// (0x0003faaa) cale_week_day_heading_pane_t1_ParamLimits

0x3d0b,	// (0x0003fad4) cale_week_day_heading_pane_t2_ParamLimits

0x3d3a,	// (0x0003fb03) cale_week_day_heading_pane_t3_ParamLimits

0x3d69,	// (0x0003fb32) cale_week_day_heading_pane_t4_ParamLimits

0x3d98,	// (0x0003fb61) cale_week_day_heading_pane_t5_ParamLimits

0x3dc7,	// (0x0003fb90) cale_week_day_heading_pane_t6_ParamLimits

0x3df6,	// (0x0003fbbf) cale_week_day_heading_pane_t7_ParamLimits

0xf166,	// (0x0004af2f) cale_week_day_heading_pane_t_ParamLimits

0x0f40,	// (0x0003cd09) bg_cale_side_pane_ParamLimits

0x3e20,	// (0x0003fbe9) cale_week_time_pane_t1_ParamLimits

0x3e5a,	// (0x0003fc23) cale_week_time_pane_t2_ParamLimits

0x3e94,	// (0x0003fc5d) cale_week_time_pane_t3_ParamLimits

0x3ece,	// (0x0003fc97) cale_week_time_pane_t4_ParamLimits

0x3f08,	// (0x0003fcd1) cale_week_time_pane_t5_ParamLimits

0x3f42,	// (0x0003fd0b) cale_week_time_pane_t6_ParamLimits

0x3f7c,	// (0x0003fd45) cale_week_time_pane_t7_ParamLimits

0x3fb6,	// (0x0003fd7f) cale_week_time_pane_t8_ParamLimits

0xf175,	// (0x0004af3e) cale_week_time_pane_t_ParamLimits

0x3ff0,	// (0x0003fdb9) cell_cale_week_pane_g2_ParamLimits

0x0f40,	// (0x0003cd09) bg_cale_side_pane_cp01_ParamLimits

0x4e4e,	// (0x00040c17) cale_month_week_pane_t1_ParamLimits

0x4e67,	// (0x00040c30) cale_month_week_pane_t2_ParamLimits

0x4e80,	// (0x00040c49) cale_month_week_pane_t3_ParamLimits

0x4e99,	// (0x00040c62) cale_month_week_pane_t4_ParamLimits

0x4eb2,	// (0x00040c7b) cale_month_week_pane_t5_ParamLimits

0x4ecb,	// (0x00040c94) cale_month_week_pane_t6_ParamLimits

0xf243,	// (0x0004b00c) cale_month_week_pane_t_ParamLimits

0xbdb1,	// (0x00047b7a) cell_cale_month_pane_g1_ParamLimits

0x0659,	// (0x0003c422) main_cale_event_viewer_pane

0x0659,	// (0x0003c422) listscroll_cale_event_viewer_pane

0xc427,	// (0x000481f0) list_cale_ev_pane

0xc42f,	// (0x000481f8) scroll_pane_cp023

0x7402,	// (0x000431cb) field_cale_ev_pane_ParamLimits

0x7402,	// (0x000431cb) field_cale_ev_pane

0xc43b,	// (0x00048204) field_cale_ev_content_pane_ParamLimits

0xc43b,	// (0x00048204) field_cale_ev_content_pane

0xc447,	// (0x00048210) field_cale_ev_pane_g1_ParamLimits

0xc447,	// (0x00048210) field_cale_ev_pane_g1

0xc453,	// (0x0004821c) field_cale_ev_pane_g2_ParamLimits

0xc453,	// (0x0004821c) field_cale_ev_pane_g2

0xc46b,	// (0x00048234) field_cale_ev_pane_g3_ParamLimits

0xc46b,	// (0x00048234) field_cale_ev_pane_g3

0x0002,

0xf682,	// (0x0004b44b) field_cale_ev_pane_g_ParamLimits

0xf682,	// (0x0004b44b) field_cale_ev_pane_g

0xc483,	// (0x0004824c) field_cale_ev_pane_t1_ParamLimits

0xc483,	// (0x0004824c) field_cale_ev_pane_t1

0x39f0,	// (0x0003f7b9) field_cale_ev_content_pane_t1_ParamLimits

0x39f0,	// (0x0003f7b9) field_cale_ev_content_pane_t1

0x1b01,	// (0x0003d8ca) bg_button_pane_cp01

0x3a30,	// (0x0003f7f9) listscroll_cale_week_pane_ParamLimits

0x0eeb,	// (0x0003ccb4) popup_toolbar_window_cp01

0x0f11,	// (0x0003ccda) listscroll_cale_week_pane_t1_ParamLimits

0x3a30,	// (0x0003f7f9) listscroll_cale_day_pane_ParamLimits

0x0eeb,	// (0x0003ccb4) popup_toolbar_window_cp02

0x1362,	// (0x0003d12b) listscroll_cale_day_pane_t1_ParamLimits

0x3a30,	// (0x0003f7f9) main_cale_month_pane_ParamLimits

0xbf1f,	// (0x00047ce8) popup_toolbar_window_cp03_ParamLimits

0xbf1f,	// (0x00047ce8) popup_toolbar_window_cp03

0x5819,	// (0x000415e2) main_image_pane_g2_ParamLimits

0x5819,	// (0x000415e2) main_image_pane_g2

0x582a,	// (0x000415f3) main_image_pane_g3_ParamLimits

0x582a,	// (0x000415f3) main_image_pane_g3

0x0002,

0xf467,	// (0x0004b230) main_image_pane_g_ParamLimits

0xf467,	// (0x0004b230) main_image_pane_g

0x1c1b,	// (0x0003d9e4) main_image_pane_t1_ParamLimits

0x583b,	// (0x00041604) main_image_pane_t2_ParamLimits

0x583b,	// (0x00041604) main_image_pane_t2

0x584d,	// (0x00041616) main_image_pane_t3_ParamLimits

0x584d,	// (0x00041616) main_image_pane_t3

0x5875,	// (0x0004163e) main_image_pane_t4_ParamLimits

0x5875,	// (0x0004163e) main_image_pane_t4

0x0003,

0xf46e,	// (0x0004b237) main_image_pane_t_ParamLimits

0xf46e,	// (0x0004b237) main_image_pane_t

0x5895,	// (0x0004165e) popup_image_details_window_cp01

0x589d,	// (0x00041666) popup_toobar_trans_pane_cp01_ParamLimits

0x589d,	// (0x00041666) popup_toobar_trans_pane_cp01

0x6f6b,	// (0x00042d34) popup_image_details_window_ParamLimits

0x6f6b,	// (0x00042d34) popup_image_details_window

0xbef4,	// (0x00047cbd) popup_image_focus_window

0xebdb,	// (0x0004a9a4) camera2_autofocus_pane_ParamLimits

0xebdb,	// (0x0004a9a4) camera2_autofocus_pane

0x0659,	// (0x0003c422) bg_popup_sub_pane_cp06

0xc49a,	// (0x00048263) popup_image_focus_window_g1

0xc4a2,	// (0x0004826b) popup_image_focus_window_g2

0xc4aa,	// (0x00048273) popup_image_focus_window_g3

0xc4b2,	// (0x0004827b) popup_image_focus_window_g4

0x0003,

0xf689,	// (0x0004b452) popup_image_focus_window_g

0xc4ba,	// (0x00048283) popup_image_focus_window_t1

0xc4c8,	// (0x00048291) popup_image_focus_window_t2

0xc4d7,	// (0x000482a0) popup_image_focus_window_t3

0x0002,

0xf692,	// (0x0004b45b) popup_image_focus_window_t

0x0d57,	// (0x0003cb20) camera2_autofocus_pane_g1

0x1a5e,	// (0x0003d827) bg_tb_trans_pane_cp01

0xc4e5,	// (0x000482ae) popup_image_details_window_g1

0xc4f8,	// (0x000482c1) popup_image_details_window_g2

0x0002,

0xf6a4,	// (0x0004b46d) popup_image_details_window_g

0xc521,	// (0x000482ea) popup_image_details_window_t1

0xc533,	// (0x000482fc) popup_image_details_window_t2

0xc54c,	// (0x00048315) popup_image_details_window_t3

0xc560,	// (0x00048329) popup_image_details_window_t4

0xc57b,	// (0x00048344) popup_image_details_window_t5

0x0004,

0xf6ab,	// (0x0004b474) popup_image_details_window_t

0x0db5,	// (0x0003cb7e) bg_calc_paper_pane_ParamLimits

0x0659,	// (0x0003c422) grid_highlight_pane_cp013

0xbcaf,	// (0x00047a78) list_calc_pane_ParamLimits

0xbcc1,	// (0x00047a8a) scroll_pane_cp024

0x0dcd,	// (0x0003cb96) bg_calc_display_pane_ParamLimits

0xbcc9,	// (0x00047a92) calc_display_pane_t1_ParamLimits

0xbcde,	// (0x00047aa7) calc_display_pane_t2_ParamLimits

0xbcf3,	// (0x00047abc) calc_display_pane_t3_ParamLimits

0xf0e6,	// (0x0004aeaf) calc_display_pane_t_ParamLimits

0x394b,	// (0x0003f714) cell_calc_pane_g2

0x0001,

0xf103,	// (0x0004aecc) cell_calc_pane_g

0x3954,	// (0x0003f71d) cell_calc_pane_t1

0x0e22,	// (0x0003cbeb) grid_highlight_pane_cp02_ParamLimits

0x0e38,	// (0x0003cc01) toolbar_button_pane_cp01_ParamLimits

0x0e38,	// (0x0003cc01) toolbar_button_pane_cp01

0x1c60,	// (0x0003da29) temp_image_control_pane_ParamLimits

0x1c60,	// (0x0003da29) temp_image_control_pane

0x1a5e,	// (0x0003d827) main_mp3_pane

0xc595,	// (0x0004835e) temp_image_control_pane_g1_ParamLimits

0xc595,	// (0x0004835e) temp_image_control_pane_g1

0xc5a3,	// (0x0004836c) temp_image_control_pane_g2_ParamLimits

0xc5a3,	// (0x0004836c) temp_image_control_pane_g2

0xc5b5,	// (0x0004837e) temp_image_control_pane_g3_ParamLimits

0xc5b5,	// (0x0004837e) temp_image_control_pane_g3

0x741c,	// (0x000431e5) temp_image_control_pane_g4_ParamLimits

0x741c,	// (0x000431e5) temp_image_control_pane_g4

0x0003,

0xf6b6,	// (0x0004b47f) temp_image_control_pane_g_ParamLimits

0xf6b6,	// (0x0004b47f) temp_image_control_pane_g

0xc595,	// (0x0004835e) main_mp3_pane_g1

0x742d,	// (0x000431f6) main_mp3_pane_g2

0x0007,

0xf6bf,	// (0x0004b488) main_mp3_pane_g

0xc5ea,	// (0x000483b3) main_mp3_pane_t1

0x0d65,	// (0x0003cb2e) main_camera_pane_g8_ParamLimits

0x0d65,	// (0x0003cb2e) main_camera_pane_g8

0x417f,	// (0x0003ff48) main_video_pane_g7_ParamLimits

0x417f,	// (0x0003ff48) main_video_pane_g7

0x0fed,	// (0x0003cdb6) main_camera2_pane_t7_ParamLimits

0x0fed,	// (0x0003cdb6) main_camera2_pane_t7

0x1130,	// (0x0003cef9) scroll_pane_cp025_ParamLimits

0x1130,	// (0x0003cef9) scroll_pane_cp025

0x1144,	// (0x0003cf0d) scroll_pane_cp026_ParamLimits

0x1144,	// (0x0003cf0d) scroll_pane_cp026

0x1153,	// (0x0003cf1c) wml_content_pane_ParamLimits

0x0659,	// (0x0003c422) main_touch_calib_pane

0x74ef,	// (0x000432b8) main_touch_calib_pane_g1

0x7501,	// (0x000432ca) main_touch_calib_pane_g2

0x7513,	// (0x000432dc) main_touch_calib_pane_g3

0x7525,	// (0x000432ee) main_touch_calib_pane_g4

0x0003,

0xf6dd,	// (0x0004b4a6) main_touch_calib_pane_g

0x7537,	// (0x00043300) main_touch_calib_pane_t1

0x754f,	// (0x00043318) main_touch_calib_pane_t2

0x0004,

0xf6e6,	// (0x0004b4af) main_touch_calib_pane_t

0x1866,	// (0x0003d62f) mup_progress_pane_cp02

0x189b,	// (0x0003d664) navi_pane_g1

0x1926,	// (0x0003d6ef) navi_pane_mp_t3

0x1a5e,	// (0x0003d827) main_mp3_pane_ParamLimits

0x70c4,	// (0x00042e8d) navi_pane_ParamLimits

0xc595,	// (0x0004835e) main_mp3_pane_g1_ParamLimits

0x742d,	// (0x000431f6) main_mp3_pane_g2_ParamLimits

0x7439,	// (0x00043202) main_mp3_pane_g3_ParamLimits

0x7439,	// (0x00043202) main_mp3_pane_g3

0x7445,	// (0x0004320e) main_mp3_pane_g4_ParamLimits

0x7445,	// (0x0004320e) main_mp3_pane_g4

0x0d57,	// (0x0003cb20) main_mp3_pane_g5_ParamLimits

0x0d57,	// (0x0003cb20) main_mp3_pane_g5

0xc5c5,	// (0x0004838e) main_mp3_pane_g6_ParamLimits

0xc5c5,	// (0x0004838e) main_mp3_pane_g6

0xc5d2,	// (0x0004839b) main_mp3_pane_g7_ParamLimits

0xc5d2,	// (0x0004839b) main_mp3_pane_g7

0xc5de,	// (0x000483a7) main_mp3_pane_g8_ParamLimits

0xc5de,	// (0x000483a7) main_mp3_pane_g8

0xf6bf,	// (0x0004b488) main_mp3_pane_g_ParamLimits

0x7451,	// (0x0004321a) main_mp3_pane_t2

0x745f,	// (0x00043228) main_mp3_pane_t3

0xc5f8,	// (0x000483c1) main_mp3_pane_t4

0xc606,	// (0x000483cf) main_mp3_pane_t5

0x0005,

0xf6d0,	// (0x0004b499) main_mp3_pane_t

0xc614,	// (0x000483dd) mup_progress_pane_cp01

0xbc76,	// (0x00047a3f) aid_zoom_text_secondary2

0xc427,	// (0x000481f0) list_cale_ev2_pane

0xc42f,	// (0x000481f8) scroll_pane_cp023_ParamLimits

0x759d,	// (0x00043366) field_cale_ev2_pane_ParamLimits

0x759d,	// (0x00043366) field_cale_ev2_pane

0xc61c,	// (0x000483e5) field_cale_ev2_pane_g1_ParamLimits

0xc61c,	// (0x000483e5) field_cale_ev2_pane_g1

0xc628,	// (0x000483f1) field_cale_ev2_pane_g2_ParamLimits

0xc628,	// (0x000483f1) field_cale_ev2_pane_g2

0xc640,	// (0x00048409) field_cale_ev2_pane_g3_ParamLimits

0xc640,	// (0x00048409) field_cale_ev2_pane_g3

0x0003,

0xf6f1,	// (0x0004b4ba) field_cale_ev2_pane_g_ParamLimits

0xf6f1,	// (0x0004b4ba) field_cale_ev2_pane_g

0xc664,	// (0x0004842d) field_cale_ev2_pane_t1_ParamLimits

0xc664,	// (0x0004842d) field_cale_ev2_pane_t1

0xc67b,	// (0x00048444) field_cale_ev2_pane_t2_ParamLimits

0xc67b,	// (0x00048444) field_cale_ev2_pane_t2

0x0001,

0xf6fa,	// (0x0004b4c3) field_cale_ev2_pane_t_ParamLimits

0xf6fa,	// (0x0004b4c3) field_cale_ev2_pane_t

0x56d4,	// (0x0004149d) main_postcard_pane_g5_ParamLimits

0x56d4,	// (0x0004149d) main_postcard_pane_g5

0x56e8,	// (0x000414b1) main_postcard_pane_g6_ParamLimits

0x56e8,	// (0x000414b1) main_postcard_pane_g6

0x1a5e,	// (0x0003d827) camera2_autofocus_pane_cp_ParamLimits

0x1a5e,	// (0x0003d827) camera2_autofocus_pane_cp

0x1a5e,	// (0x0003d827) main_mup3_pane

0x75f3,	// (0x000433bc) main_mup3_pane_g1_ParamLimits

0x75f3,	// (0x000433bc) main_mup3_pane_g1

0x7615,	// (0x000433de) main_mup3_pane_g2_ParamLimits

0x7615,	// (0x000433de) main_mup3_pane_g2

0x7688,	// (0x00043451) main_mup3_pane_g3_ParamLimits

0x7688,	// (0x00043451) main_mup3_pane_g3

0x76c6,	// (0x0004348f) main_mup3_pane_g4_ParamLimits

0x76c6,	// (0x0004348f) main_mup3_pane_g4

0x7704,	// (0x000434cd) main_mup3_pane_g5_ParamLimits

0x7704,	// (0x000434cd) main_mup3_pane_g5

0x7742,	// (0x0004350b) main_mup3_pane_g6_ParamLimits

0x7742,	// (0x0004350b) main_mup3_pane_g6

0x0d65,	// (0x0003cb2e) main_mup3_pane_g7_ParamLimits

0x0d65,	// (0x0003cb2e) main_mup3_pane_g7

0x0007,

0xf70a,	// (0x0004b4d3) main_mup3_pane_g_ParamLimits

0xf70a,	// (0x0004b4d3) main_mup3_pane_g

0x77b8,	// (0x00043581) main_mup3_pane_t1_ParamLimits

0x77b8,	// (0x00043581) main_mup3_pane_t1

0x781e,	// (0x000435e7) main_mup3_pane_t2_ParamLimits

0x781e,	// (0x000435e7) main_mup3_pane_t2

0x78e4,	// (0x000436ad) main_mup3_pane_t4_ParamLimits

0x78e4,	// (0x000436ad) main_mup3_pane_t4

0x7932,	// (0x000436fb) main_mup3_pane_t5_ParamLimits

0x7932,	// (0x000436fb) main_mup3_pane_t5

0x79e0,	// (0x000437a9) main_mup3_pane_t6_ParamLimits

0x79e0,	// (0x000437a9) main_mup3_pane_t6

0x0005,

0xf71b,	// (0x0004b4e4) main_mup3_pane_t_ParamLimits

0xf71b,	// (0x0004b4e4) main_mup3_pane_t

0x7a94,	// (0x0004385d) mup3_progress_pane_ParamLimits

0x7a94,	// (0x0004385d) mup3_progress_pane

0x7b10,	// (0x000438d9) popup_mup3_control_window_ParamLimits

0x7b10,	// (0x000438d9) popup_mup3_control_window

0xc690,	// (0x00048459) popup_mup3_text_window

0x7b3e,	// (0x00043907) mup3_progress_pane_t1

0x7b5c,	// (0x00043925) mup3_progress_pane_t2

0xc698,	// (0x00048461) mup3_progress_pane_t3

0x0002,

0xf728,	// (0x0004b4f1) mup3_progress_pane_t

0xc6b5,	// (0x0004847e) mup_progress_pane_cp03

0x0659,	// (0x0003c422) bg_tb_trans_pane_cp04

0x7b7a,	// (0x00043943) mup3_volume_pane

0x7b82,	// (0x0004394b) popup_mup3_control_window_g1

0x7b8b,	// (0x00043954) mup3_volume_pane_g1

0x7b94,	// (0x0004395d) mup3_volume_pane_g2

0x7b9d,	// (0x00043966) mup3_volume_pane_g3

0x0002,

0xf72f,	// (0x0004b4f8) mup3_volume_pane_g

0x0659,	// (0x0003c422) bg_tb_trans_pane_cp03

0xc6c5,	// (0x0004848e) popup_mup3_text_window_g1

0xc6cd,	// (0x00048496) popup_mup3_text_window_t1

0x0e15,	// (0x0003cbde) list_calc_item_pane_g1_ParamLimits

0xc120,	// (0x00047ee9) mup_volume_pane_cp_g1

0x7567,	// (0x00043330) main_touch_calib_pane_t3

0x7579,	// (0x00043342) main_touch_calib_pane_t4

0x758b,	// (0x00043354) main_touch_calib_pane_t5

0xbc56,	// (0x00047a1f) aid_cell_size_toolbar2

0xbc5e,	// (0x00047a27) aid_popup3_width_pane

0xbc66,	// (0x00047a2f) aid_zoom_text_msg_primary

0x0fcc,	// (0x0003cd95) vorec_t7

0x0dd9,	// (0x0003cba2) bg_calc_paper_pane_g1_ParamLimits

0x0de5,	// (0x0003cbae) bg_calc_paper_pane_g2_ParamLimits

0x0df1,	// (0x0003cbba) bg_calc_paper_pane_g3_ParamLimits

0x0dfd,	// (0x0003cbc6) bg_calc_paper_pane_g4_ParamLimits

0x0e09,	// (0x0003cbd2) bg_calc_paper_pane_g5_ParamLimits

0x38e5,	// (0x0003f6ae) bg_calc_paper_pane_g6_ParamLimits

0x38f4,	// (0x0003f6bd) bg_calc_paper_pane_g7_ParamLimits

0x3903,	// (0x0003f6cc) bg_calc_paper_pane_g8_ParamLimits

0xf0ed,	// (0x0004aeb6) bg_calc_paper_pane_g_ParamLimits

0x3912,	// (0x0003f6db) calc_bg_paper_pane_g9_ParamLimits

0x1a5e,	// (0x0003d827) image_qvga_pane_ParamLimits

0x1a5e,	// (0x0003d827) image_qvga_pane

0x0cdd,	// (0x0003caa6) bg_popup_sub_pane_cp04_ParamLimits

0x1b97,	// (0x0003d960) popup_mup_playback_window_g1_ParamLimits

0x1ba3,	// (0x0003d96c) popup_mup_playback_window_t1_ParamLimits

0x1bb8,	// (0x0003d981) popup_mup_playback_window_t2_ParamLimits

0xf462,	// (0x0004b22b) popup_mup_playback_window_t_ParamLimits

0x0d65,	// (0x0003cb2e) main_mup2_pane_g3_ParamLimits

0x0d65,	// (0x0003cb2e) main_mup2_pane_g3

0x435d,	// (0x00040126) popup_toolbar_window_cp04

0x5e17,	// (0x00041be0) popup_call2_audio_second_window_g3_ParamLimits

0x5e17,	// (0x00041be0) popup_call2_audio_second_window_g3

0x623f,	// (0x00042008) popup_call2_audio_first_window_g4_ParamLimits

0x623f,	// (0x00042008) popup_call2_audio_first_window_g4

0x68be,	// (0x00042687) popup_call2_audio_in_window_g4_ParamLimits

0x68be,	// (0x00042687) popup_call2_audio_in_window_g4

0x57fb,	// (0x000415c4) aid_area_sk_bg_cut_ParamLimits

0x57fb,	// (0x000415c4) aid_area_sk_bg_cut

0x1bcd,	// (0x0003d996) aid_area_sk_bg_cut_2_ParamLimits

0x1bcd,	// (0x0003d996) aid_area_sk_bg_cut_2

0x0659,	// (0x0003c422) aid_placing_details_win

0x0659,	// (0x0003c422) aid_placing_details_win_2

0x0d57,	// (0x0003cb20) camera2_autofocus_pane_g1_ParamLimits

0x3647,	// (0x0003f410) popup_fixed_preview_cale_window_ParamLimits

0x3647,	// (0x0003f410) popup_fixed_preview_cale_window

0x199c,	// (0x0003d765) navi_slider_pane_g3

0x19a5,	// (0x0003d76e) navi_slider_pane_g4

0x19ae,	// (0x0003d777) navi_slider_pane_g5

0x199c,	// (0x0003d765) navi_slider_pane_g6

0xbe75,	// (0x00047c3e) navi_slider_pane_g7

0x1ace,	// (0x0003d897) mup_scale_pane_g3

0x1ad7,	// (0x0003d8a0) mup_scale_pane_g4

0x1ae0,	// (0x0003d8a9) mup_scale_pane_g5

0x55bd,	// (0x00041386) mup_scale_pane_g6

0x55c6,	// (0x0004138f) mup_scale_pane_g7

0x101b,	// (0x0003cde4) cams2_slider_pane_g3

0x101b,	// (0x0003cde4) cams2_slider_pane_g4

0x101b,	// (0x0003cde4) cams2_slider_pane_g5

0x101b,	// (0x0003cde4) cams2_slider_pane_g6

0x101b,	// (0x0003cde4) cams2_slider_pane_g7

0x101b,	// (0x0003cde4) camera2_autofocus_pane_cp_g1

0x6e64,	// (0x00042c2d) bg_popup_preview_window_pane_cp02_ParamLimits

0x6e64,	// (0x00042c2d) bg_popup_preview_window_pane_cp02

0xc6db,	// (0x000484a4) list_fp_cale_pane_ParamLimits

0xc6db,	// (0x000484a4) list_fp_cale_pane

0xc6e7,	// (0x000484b0) popup_fixed_preview_cale_window_t1_ParamLimits

0xc6e7,	// (0x000484b0) popup_fixed_preview_cale_window_t1

0x7ba6,	// (0x0004396f) popup_fixed_preview_cale_window_t2_ParamLimits

0x7ba6,	// (0x0004396f) popup_fixed_preview_cale_window_t2

0x7bbb,	// (0x00043984) popup_fixed_preview_cale_window_t3_ParamLimits

0x7bbb,	// (0x00043984) popup_fixed_preview_cale_window_t3

0x0002,

0xf736,	// (0x0004b4ff) popup_fixed_preview_cale_window_t_ParamLimits

0xf736,	// (0x0004b4ff) popup_fixed_preview_cale_window_t

0x7bd0,	// (0x00043999) list_single_fp_cale_pane_ParamLimits

0x7bd0,	// (0x00043999) list_single_fp_cale_pane

0xc705,	// (0x000484ce) list_single_fp_cale_pane_g1_ParamLimits

0xc705,	// (0x000484ce) list_single_fp_cale_pane_g1

0xc711,	// (0x000484da) list_single_fp_cale_pane_g2_ParamLimits

0xc711,	// (0x000484da) list_single_fp_cale_pane_g2

0x0002,

0xf73d,	// (0x0004b506) list_single_fp_cale_pane_g_ParamLimits

0xf73d,	// (0x0004b506) list_single_fp_cale_pane_g

0xc72a,	// (0x000484f3) list_single_fp_cale_pane_t1_ParamLimits

0xc72a,	// (0x000484f3) list_single_fp_cale_pane_t1

0xc73c,	// (0x00048505) list_single_fp_cale_pane_t2_ParamLimits

0xc73c,	// (0x00048505) list_single_fp_cale_pane_t2

0x0001,

0xf744,	// (0x0004b50d) list_single_fp_cale_pane_t_ParamLimits

0xf744,	// (0x0004b50d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0659,	// (0x0003c422) main_dialer_pane

0x7be4,	// (0x000439ad) aid_cell_size_keypad

0x0659,	// (0x0003c422) dialer_ne_pane

0x0659,	// (0x0003c422) grid_dialer_command_1_pane

0x0659,	// (0x0003c422) grid_dialer_command_2_pane

0x0659,	// (0x0003c422) grid_dialer_keypad_pane

0x7bee,	// (0x000439b7) bg_popup_call_pane_cp06_ParamLimits

0x7bee,	// (0x000439b7) bg_popup_call_pane_cp06

0x7bee,	// (0x000439b7) dialer_ne_clear_pane_ParamLimits

0x7bee,	// (0x000439b7) dialer_ne_clear_pane

0x101b,	// (0x0003cde4) dialer_ne_pane_g1

0x0fed,	// (0x0003cdb6) dialer_ne_pane_t1_ParamLimits

0x0fed,	// (0x0003cdb6) dialer_ne_pane_t1

0x7bfc,	// (0x000439c5) dialer_ne_pane_t2_ParamLimits

0x7bfc,	// (0x000439c5) dialer_ne_pane_t2

0x7c24,	// (0x000439ed) dialer_ne_pane_t3_ParamLimits

0x7c24,	// (0x000439ed) dialer_ne_pane_t3

0x0002,

0xf749,	// (0x0004b512) dialer_ne_pane_t_ParamLimits

0xf749,	// (0x0004b512) dialer_ne_pane_t

0x7c24,	// (0x000439ed) dialer_ne_pane_t3_copy1_ParamLimits

0x7c24,	// (0x000439ed) dialer_ne_pane_t3_copy1

0x7c51,	// (0x00043a1a) cell_dialer_keypad_pane_ParamLimits

0x7c51,	// (0x00043a1a) cell_dialer_keypad_pane

0x7c66,	// (0x00043a2f) cell_dialer_command_1_pane_ParamLimits

0x7c66,	// (0x00043a2f) cell_dialer_command_1_pane

0x7c77,	// (0x00043a40) cell_dialer_command_2_pane_ParamLimits

0x7c77,	// (0x00043a40) cell_dialer_command_2_pane

0x1a5e,	// (0x0003d827) bg_button_pane_cp02_ParamLimits

0x1a5e,	// (0x0003d827) bg_button_pane_cp02

0x0d57,	// (0x0003cb20) cell_dialer_keypad_pane_g1_ParamLimits

0x0d57,	// (0x0003cb20) cell_dialer_keypad_pane_g1

0x1a5e,	// (0x0003d827) bg_button_pane_cp03_ParamLimits

0x1a5e,	// (0x0003d827) bg_button_pane_cp03

0x0d57,	// (0x0003cb20) cell_dialer_command_1_pane_g1_ParamLimits

0x0d57,	// (0x0003cb20) cell_dialer_command_1_pane_g1

0x0659,	// (0x0003c422) bg_button_pane_cp04

0x101b,	// (0x0003cde4) cell_dialer_command_2_pane_g1

0x0659,	// (0x0003c422) bg_button_pane_cp06

0x101b,	// (0x0003cde4) dialer_ne_clear_pane_g1

0x18a7,	// (0x0003d670) navi_pane_g2

0x53c3,	// (0x0004118c) navi_pane_g3

0x0002,

0xf365,	// (0x0004b12e) navi_pane_g

0x1934,	// (0x0003d6fd) navi_pane_mv_g2

0x195b,	// (0x0003d724) navi_pane_mv_g5

0x53e0,	// (0x000411a9) navi_pane_mv_t1

0x0dcd,	// (0x0003cb96) main_clock2_pane

0x7cc3,	// (0x00043a8c) main_clock2_list_pane_ParamLimits

0x7cc3,	// (0x00043a8c) main_clock2_list_pane

0x7cf5,	// (0x00043abe) main_clock2_pane_t1_ParamLimits

0x7cf5,	// (0x00043abe) main_clock2_pane_t1

0x7d2f,	// (0x00043af8) main_clock2_pane_t2_ParamLimits

0x7d2f,	// (0x00043af8) main_clock2_pane_t2

0x0004,

0xf755,	// (0x0004b51e) main_clock2_pane_t_ParamLimits

0xf755,	// (0x0004b51e) main_clock2_pane_t

0x7dc3,	// (0x00043b8c) popup_clock_analogue_window_cp03_ParamLimits

0x7dc3,	// (0x00043b8c) popup_clock_analogue_window_cp03

0x7de8,	// (0x00043bb1) popup_clock_digital_window_cp02_ParamLimits

0x7de8,	// (0x00043bb1) popup_clock_digital_window_cp02

0x7e59,	// (0x00043c22) main_clock2_list_single_pane_ParamLimits

0x7e59,	// (0x00043c22) main_clock2_list_single_pane

0x0f9a,	// (0x0003cd63) list_highlight_pane_cp05

0xc79f,	// (0x00048568) main_clock2_list_single_pane_t1

0x435d,	// (0x00040126) popup_toolbar_window_cp04_ParamLimits

0x0d65,	// (0x0003cb2e) camera2_autofocus_pane_g2_ParamLimits

0x0d65,	// (0x0003cb2e) camera2_autofocus_pane_g2

0x0d65,	// (0x0003cb2e) camera2_autofocus_pane_g3_ParamLimits

0x0d65,	// (0x0003cb2e) camera2_autofocus_pane_g3

0x0d65,	// (0x0003cb2e) camera2_autofocus_pane_g4_ParamLimits

0x0d65,	// (0x0003cb2e) camera2_autofocus_pane_g4

0x0d65,	// (0x0003cb2e) camera2_autofocus_pane_g5_ParamLimits

0x0d65,	// (0x0003cb2e) camera2_autofocus_pane_g5

0x0004,

0xf699,	// (0x0004b462) camera2_autofocus_pane_g_ParamLimits

0xf699,	// (0x0004b462) camera2_autofocus_pane_g

0x75b5,	// (0x0004337e) camera2_autofocus_pane_cp_g2

0x75bd,	// (0x00043386) camera2_autofocus_pane_cp_g3

0x75c5,	// (0x0004338e) camera2_autofocus_pane_cp_g4

0x75cd,	// (0x00043396) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ff,	// (0x0004b4c8) camera2_autofocus_pane_cp_g

0x0659,	// (0x0003c422) popup_dialer_spcha_window

0x0659,	// (0x0003c422) bg_popup_sub_pane_cp07

0x0659,	// (0x0003c422) list_spcha_pane

0xc7ad,	// (0x00048576) list_single_spcha_pane_ParamLimits

0xc7ad,	// (0x00048576) list_single_spcha_pane

0x0659,	// (0x0003c422) list_highlight_pane_cp06

0x6c2e,	// (0x000429f7) list_single_spcha_pane_t1

0x6668,	// (0x00042431) popup_call2_audio_out_window_g4_ParamLimits

0x6668,	// (0x00042431) popup_call2_audio_out_window_g4

0x0659,	// (0x0003c422) main_imed2_pane

0xbefc,	// (0x00047cc5) popup_imed_adjust2_window

0x6f81,	// (0x00042d4a) popup_imed_trans_window_ParamLimits

0x6f81,	// (0x00042d4a) popup_imed_trans_window

0xc1f3,	// (0x00047fbc) popup_blid_sat_info2_window_t1

0xc201,	// (0x00047fca) popup_blid_sat_info2_window_t2

0x000a,

0xf62e,	// (0x0004b3f7) popup_blid_sat_info2_window_t

0x7f03,	// (0x00043ccc) aid_size_cell_colour_35

0x7f23,	// (0x00043cec) aid_size_cell_colour_112

0x7f43,	// (0x00043d0c) aid_size_cell_effect

0x1cd4,	// (0x0003da9d) bg_tb_trans_pane_cp02

0x146b,	// (0x0003d234) heading_imed_pane

0x7f63,	// (0x00043d2c) listscroll_imed_pane

0xc7bf,	// (0x00048588) heading_imed_pane_g1

0xc7c7,	// (0x00048590) heading_imed_pane_t1

0xc7d5,	// (0x0004859e) grid_imed_colour_35_pane_ParamLimits

0xc7d5,	// (0x0004859e) grid_imed_colour_35_pane

0x7f6f,	// (0x00043d38) grid_imed_effect_pane

0xc7e8,	// (0x000485b1) list_imed_aspect_pane

0x7f82,	// (0x00043d4b) scroll_pane_cp027_ParamLimits

0x7f82,	// (0x00043d4b) scroll_pane_cp027

0x7f8e,	// (0x00043d57) cell_imed_effect_pane_ParamLimits

0x7f8e,	// (0x00043d57) cell_imed_effect_pane

0xc7f0,	// (0x000485b9) cell_imed_colour_pane_ParamLimits

0xc7f0,	// (0x000485b9) cell_imed_colour_pane

0xc82a,	// (0x000485f3) cell_imed_colour_pane_g1_ParamLimits

0xc82a,	// (0x000485f3) cell_imed_colour_pane_g1

0xc83b,	// (0x00048604) hgihlgiht_grid_pane_cp016_ParamLimits

0xc83b,	// (0x00048604) hgihlgiht_grid_pane_cp016

0x7fb3,	// (0x00043d7c) cell_imed_effect_pane_g1

0x7fbb,	// (0x00043d84) grid_highlight_pane_cp017

0xc84c,	// (0x00048615) list_imed_single_pane_ParamLimits

0xc84c,	// (0x00048615) list_imed_single_pane

0x0659,	// (0x0003c422) list_highlight_pane_cp07

0xc85f,	// (0x00048628) list_imed_aspect_pane_comp1_t1

0x1cd4,	// (0x0003da9d) bg_tb_trans_pane_cp05

0xc87f,	// (0x00048648) popup_imed_adjust2_window_g1

0xc8a6,	// (0x0004866f) popup_imed_adjust2_window_t1

0xc8be,	// (0x00048687) slider_imed_adjust_pane

0xc8d2,	// (0x0004869b) slider_imed_adjust_pane_g1

0xc8e2,	// (0x000486ab) slider_imed_adjust_pane_g2

0xc8f2,	// (0x000486bb) slider_imed_adjust_pane_g3

0xc903,	// (0x000486cc) slider_imed_adjust_pane_g4

0x0003,

0xf772,	// (0x0004b53b) slider_imed_adjust_pane_g

0x7fc4,	// (0x00043d8d) aid_size_cell_clipart2

0x7fd0,	// (0x00043d99) grid_imed_clipart_pane

0xc914,	// (0x000486dd) scroll_pane_cp031

0x7fda,	// (0x00043da3) cell_imed_clipart_pane_ParamLimits

0x7fda,	// (0x00043da3) cell_imed_clipart_pane

0x7ff2,	// (0x00043dbb) cell_imed_clipart_pane_g1

0x0659,	// (0x0003c422) grid_highlight_pane_cp014

0x7cd6,	// (0x00043a9f) main_clock2_pane_g1_ParamLimits

0x7cd6,	// (0x00043a9f) main_clock2_pane_g1

0x7e04,	// (0x00043bcd) aid_call2_pane_cp10

0x7e16,	// (0x00043bdf) aid_call_pane_cp10

0x1836,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g1

0x1836,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g2

0x7e28,	// (0x00043bf1) popup_clock_analogue_window_cp10_g3

0x7e28,	// (0x00043bf1) popup_clock_analogue_window_cp10_g4

0x1836,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g5

0x0004,

0xf760,	// (0x0004b529) popup_clock_analogue_window_cp10_g

0x7e3a,	// (0x00043c03) popup_clock_analogue_window_cp10_t1

0x7e6b,	// (0x00043c34) clock_digital_number_pane_cp10_ParamLimits

0x7e6b,	// (0x00043c34) clock_digital_number_pane_cp10

0x7e83,	// (0x00043c4c) clock_digital_number_pane_cp11_ParamLimits

0x7e83,	// (0x00043c4c) clock_digital_number_pane_cp11

0x7e9b,	// (0x00043c64) clock_digital_number_pane_cp12_ParamLimits

0x7e9b,	// (0x00043c64) clock_digital_number_pane_cp12

0x7eb3,	// (0x00043c7c) clock_digital_number_pane_cp13_ParamLimits

0x7eb3,	// (0x00043c7c) clock_digital_number_pane_cp13

0x7ecb,	// (0x00043c94) clock_digital_separator_pane_cp10_ParamLimits

0x7ecb,	// (0x00043c94) clock_digital_separator_pane_cp10

0x7ee3,	// (0x00043cac) popup_clock_digital_window_cp02_t1_ParamLimits

0x7ee3,	// (0x00043cac) popup_clock_digital_window_cp02_t1

0x0cd5,	// (0x0003ca9e) clock_digital_number_pane_cp10_g1

0x0cd5,	// (0x0003ca9e) clock_digital_number_pane_cp10_g2

0x0001,

0xf77b,	// (0x0004b544) clock_digital_number_pane_cp10_g

0x0cd5,	// (0x0003ca9e) clock_digital_separator_pane_cp10_g1

0x0cd5,	// (0x0003ca9e) clock_digital_separator_pane_g2_cp10

0x1963,	// (0x0003d72c) navi_pane_vded_g4

0x196c,	// (0x0003d735) navi_pane_vded_g5

0x1975,	// (0x0003d73e) navi_pane_vded_t1

0x0659,	// (0x0003c422) main_vded_pane

0x7ffb,	// (0x00043dc4) main_vded_pane_g1

0x8005,	// (0x00043dce) main_vded_pane_g2

0x800d,	// (0x00043dd6) main_vded_pane_g3

0x0002,

0xf780,	// (0x0004b549) main_vded_pane_g

0x8015,	// (0x00043dde) main_vded_pane_t1

0x8023,	// (0x00043dec) main_vded_pane_t2

0x0001,

0xf787,	// (0x0004b550) main_vded_pane_t

0x8031,	// (0x00043dfa) vded_slider_pane

0x8039,	// (0x00043e02) vded_video_pane

0xc91c,	// (0x000486e5) vded_video_pane_g1

0x8041,	// (0x00043e0a) vded_video_pane_g2

0x101b,	// (0x0003cde4) vded_video_pane_g3

0x0002,

0xf78c,	// (0x0004b555) vded_video_pane_g

0xc926,	// (0x000486ef) vded_slider_pane_g1

0xc120,	// (0x00047ee9) vded_slider_pane_g2

0xc92f,	// (0x000486f8) vded_slider_pane_g3

0xc938,	// (0x00048701) vded_slider_pane_g4

0xc941,	// (0x0004870a) vded_slider_pane_g5

0x0004,

0xf793,	// (0x0004b55c) vded_slider_pane_g

0x7afa,	// (0x000438c3) mup3_rocker_pane_ParamLimits

0x7afa,	// (0x000438c3) mup3_rocker_pane

0x804a,	// (0x00043e13) mup3_control_keys_pane_g1

0x8052,	// (0x00043e1b) mup3_control_keys_pane_g2

0x805a,	// (0x00043e23) mup3_control_keys_pane_g3

0x8062,	// (0x00043e2b) mup3_control_keys_pane_g4

0x0003,

0xf79e,	// (0x0004b567) mup3_control_keys_pane_g

0x367a,	// (0x0003f443) popup_toolbar2_fixed_window_cp01_ParamLimits

0x367a,	// (0x0003f443) popup_toolbar2_fixed_window_cp01

0x7b28,	// (0x000438f1) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7b28,	// (0x000438f1) popup_toolbar2_fixed_window_cp02

0x5f89,	// (0x00041d52) popup_call2_audio_second_window_t4_ParamLimits

0x5f89,	// (0x00041d52) popup_call2_audio_second_window_t4

0x64d5,	// (0x0004229e) popup_call2_audio_first_window_t6_ParamLimits

0x64d5,	// (0x0004229e) popup_call2_audio_first_window_t6

0x676b,	// (0x00042534) popup_call2_audio_out_window_t6_ParamLimits

0x676b,	// (0x00042534) popup_call2_audio_out_window_t6

0x0659,	// (0x0003c422) main_vitu_pane

0x1a5e,	// (0x0003d827) aid_size_cell_itu_ParamLimits

0x1a5e,	// (0x0003d827) aid_size_cell_itu

0x1a5e,	// (0x0003d827) bg_popup_window_pane_cp08_ParamLimits

0x1a5e,	// (0x0003d827) bg_popup_window_pane_cp08

0x1a5e,	// (0x0003d827) field_vitu_entry_pane_ParamLimits

0x1a5e,	// (0x0003d827) field_vitu_entry_pane

0x1a5e,	// (0x0003d827) grid_vitu_function_pane_ParamLimits

0x1a5e,	// (0x0003d827) grid_vitu_function_pane

0x1a5e,	// (0x0003d827) grid_vitu_itu_pane_ParamLimits

0x1a5e,	// (0x0003d827) grid_vitu_itu_pane

0x8072,	// (0x00043e3b) cell_vitu_itu_pane_ParamLimits

0x8072,	// (0x00043e3b) cell_vitu_itu_pane

0x1a5e,	// (0x0003d827) cell_vitu_function_pane_ParamLimits

0x1a5e,	// (0x0003d827) cell_vitu_function_pane

0x1a5e,	// (0x0003d827) bg_popup_sub_pane_cp08_ParamLimits

0x1a5e,	// (0x0003d827) bg_popup_sub_pane_cp08

0x1a4a,	// (0x0003d813) field_vitu_entry_pane_t1_ParamLimits

0x1a4a,	// (0x0003d813) field_vitu_entry_pane_t1

0xc94a,	// (0x00048713) field_vitu_entry_pane_t2_ParamLimits

0xc94a,	// (0x00048713) field_vitu_entry_pane_t2

0x0001,

0xf7ac,	// (0x0004b575) field_vitu_entry_pane_t_ParamLimits

0xf7ac,	// (0x0004b575) field_vitu_entry_pane_t

0xc047,	// (0x00047e10) bg_button_pane_cp05_ParamLimits

0xc047,	// (0x00047e10) bg_button_pane_cp05

0xc967,	// (0x00048730) cell_vitu_itu_pane_g1

0x1cf0,	// (0x0003dab9) cell_vitu_itu_pane_t1_ParamLimits

0x1cf0,	// (0x0003dab9) cell_vitu_itu_pane_t1

0x1cf0,	// (0x0003dab9) cell_vitu_itu_pane_t2_ParamLimits

0x1cf0,	// (0x0003dab9) cell_vitu_itu_pane_t2

0x0002,

0xf7b1,	// (0x0004b57a) cell_vitu_itu_pane_t_ParamLimits

0xf7b1,	// (0x0004b57a) cell_vitu_itu_pane_t

0x0659,	// (0x0003c422) bg_button_pane_cp07

0x101b,	// (0x0003cde4) cell_vitu_function_pane_g1

0xbca7,	// (0x00047a70) main_calc_pane_g1

0x34df,	// (0x0003f2a8) aid_visual_content_pane

0x0659,	// (0x0003c422) main_vradio_pane

0x0d57,	// (0x0003cb20) main_vradio_pane_g1_ParamLimits

0x0d57,	// (0x0003cb20) main_vradio_pane_g1

0x0d65,	// (0x0003cb2e) main_vradio_pane_g2_ParamLimits

0x0d65,	// (0x0003cb2e) main_vradio_pane_g2

0x0001,

0xf7b8,	// (0x0004b581) main_vradio_pane_g_ParamLimits

0xf7b8,	// (0x0004b581) main_vradio_pane_g

0x1a4a,	// (0x0003d813) main_vradio_pane_t1_ParamLimits

0x1a4a,	// (0x0003d813) main_vradio_pane_t1

0x1a4a,	// (0x0003d813) main_vradio_pane_t2_ParamLimits

0x1a4a,	// (0x0003d813) main_vradio_pane_t2

0x0fed,	// (0x0003cdb6) main_vradio_pane_t3_ParamLimits

0x0fed,	// (0x0003cdb6) main_vradio_pane_t3

0x0002,

0xf7bd,	// (0x0004b586) main_vradio_pane_t_ParamLimits

0xf7bd,	// (0x0004b586) main_vradio_pane_t

0x1a5e,	// (0x0003d827) vradio_rocker_control_pane_ParamLimits

0x1a5e,	// (0x0003d827) vradio_rocker_control_pane

0x1a5e,	// (0x0003d827) vradio_station_info_pane_ParamLimits

0x1a5e,	// (0x0003d827) vradio_station_info_pane

0x1a5e,	// (0x0003d827) vradio_frequency_info_pane_ParamLimits

0x1a5e,	// (0x0003d827) vradio_frequency_info_pane

0x101b,	// (0x0003cde4) vradio_station_info_pane_g1

0x1cf0,	// (0x0003dab9) vradio_station_info_pane_t1_ParamLimits

0x1cf0,	// (0x0003dab9) vradio_station_info_pane_t1

0x0fed,	// (0x0003cdb6) vradio_station_info_pane_t2_ParamLimits

0x0fed,	// (0x0003cdb6) vradio_station_info_pane_t2

0x0001,

0xf7c4,	// (0x0004b58d) vradio_station_info_pane_t_ParamLimits

0xf7c4,	// (0x0004b58d) vradio_station_info_pane_t

0x0659,	// (0x0003c422) vradio_tuning_pane

0x8086,	// (0x00043e4f) vradio_rocker_control_pane_g1

0xc983,	// (0x0004874c) vradio_rocker_control_pane_g2

0x808e,	// (0x00043e57) vradio_rocker_control_pane_g3

0x8096,	// (0x00043e5f) vradio_rocker_control_pane_g4

0x809e,	// (0x00043e67) vradio_rocker_control_pane_g5

0x0004,

0xf7c9,	// (0x0004b592) vradio_rocker_control_pane_g

0x101b,	// (0x0003cde4) vradio_frequency_info_pane_g1

0x1a4a,	// (0x0003d813) vradio_frequency_info_pane_t1_ParamLimits

0x1a4a,	// (0x0003d813) vradio_frequency_info_pane_t1

0x80a6,	// (0x00043e6f) vradio_tuning_pane_g1

0x80af,	// (0x00043e78) vradio_tuning_pane_t1

0xbc7e,	// (0x00047a47) area_side_right_pane_ParamLimits

0xbc7e,	// (0x00047a47) area_side_right_pane

0x6e23,	// (0x00042bec) status_small_pane_g1

0x6e2b,	// (0x00042bf4) status_small_pane_g2

0x6e34,	// (0x00042bfd) status_small_pane_g3

0x6e3d,	// (0x00042c06) status_small_pane_g4

0x0003,

0xf590,	// (0x0004b359) status_small_pane_g

0x6e46,	// (0x00042c0f) status_small_pane_t1

0x0659,	// (0x0003c422) main_video3_pane

0xc98b,	// (0x00048754) cams_zoom_vslider_pane

0xc993,	// (0x0004875c) image3_wide_pane_ParamLimits

0xc993,	// (0x0004875c) image3_wide_pane

0xc9ad,	// (0x00048776) image3_wide_small_pane

0xc9b7,	// (0x00048780) main_video3_pane_g1_ParamLimits

0xc9b7,	// (0x00048780) main_video3_pane_g1

0xc9d3,	// (0x0004879c) main_video3_pane_g2_ParamLimits

0xc9d3,	// (0x0004879c) main_video3_pane_g2

0x0001,

0xf7d4,	// (0x0004b59d) main_video3_pane_g_ParamLimits

0xf7d4,	// (0x0004b59d) main_video3_pane_g

0xc9ef,	// (0x000487b8) main_video3_pane_t1_ParamLimits

0xc9ef,	// (0x000487b8) main_video3_pane_t1

0xca1a,	// (0x000487e3) main_video3_pane_t2_ParamLimits

0xca1a,	// (0x000487e3) main_video3_pane_t2

0xca45,	// (0x0004880e) main_video3_pane_t3_ParamLimits

0xca45,	// (0x0004880e) main_video3_pane_t3

0x0002,

0xf7d9,	// (0x0004b5a2) main_video3_pane_t_ParamLimits

0xf7d9,	// (0x0004b5a2) main_video3_pane_t

0xca70,	// (0x00048839) cams_zoom_vslider_pane_g1

0xca79,	// (0x00048842) cams_zoom_vslider_pane_g2

0x0001,

0xf7e0,	// (0x0004b5a9) cams_zoom_vslider_pane_g

0xca81,	// (0x0004884a) small_slider_vertical_pane

0x101b,	// (0x0003cde4) small_slider_vertical_pane_g1

0x101b,	// (0x0003cde4) small_slider_vertical_pane_g2

0xca89,	// (0x00048852) small_slider_vertical_pane_g3

0x0002,

0xf7e5,	// (0x0004b5ae) small_slider_vertical_pane_g

0x0659,	// (0x0003c422) main_hwr_training_pane

0xca92,	// (0x0004885b) hwr_training_instruct_pane_ParamLimits

0xca92,	// (0x0004885b) hwr_training_instruct_pane

0x80be,	// (0x00043e87) hwr_training_navi_pane_ParamLimits

0x80be,	// (0x00043e87) hwr_training_navi_pane

0x80d5,	// (0x00043e9e) hwr_training_write_pane_ParamLimits

0x80d5,	// (0x00043e9e) hwr_training_write_pane

0x0659,	// (0x0003c422) bg_frame_shadow_pane

0xcac1,	// (0x0004888a) hwr_training_write_pane_g1

0xcac9,	// (0x00048892) hwr_training_write_pane_g2

0xcad1,	// (0x0004889a) hwr_training_write_pane_g3

0xcad9,	// (0x000488a2) hwr_training_write_pane_g4

0xcae1,	// (0x000488aa) hwr_training_write_pane_g5

0xcae9,	// (0x000488b2) hwr_training_write_pane_g6

0xcaf1,	// (0x000488ba) hwr_training_write_pane_g7

0x0006,

0xf7ec,	// (0x0004b5b5) hwr_training_write_pane_g

0xcaf9,	// (0x000488c2) hwr_training_navi_pane_g1_ParamLimits

0xcaf9,	// (0x000488c2) hwr_training_navi_pane_g1

0xcb0b,	// (0x000488d4) hwr_training_navi_pane_g2_ParamLimits

0xcb0b,	// (0x000488d4) hwr_training_navi_pane_g2

0xcb1d,	// (0x000488e6) hwr_training_navi_pane_g3_ParamLimits

0xcb1d,	// (0x000488e6) hwr_training_navi_pane_g3

0xcb2d,	// (0x000488f6) hwr_training_navi_pane_g4_ParamLimits

0xcb2d,	// (0x000488f6) hwr_training_navi_pane_g4

0x0004,

0xf7fb,	// (0x0004b5c4) hwr_training_navi_pane_g_ParamLimits

0xf7fb,	// (0x0004b5c4) hwr_training_navi_pane_g

0xcb3a,	// (0x00048903) hwr_training_navi_pane_t1

0x8115,	// (0x00043ede) list_single_hwr_training_instruct_pane_ParamLimits

0x8115,	// (0x00043ede) list_single_hwr_training_instruct_pane

0xcb48,	// (0x00048911) list_single_hwr_training_instruct_pane_t1

0xc2ee,	// (0x000480b7) bg_frame_shadow_pane_g1

0xcb57,	// (0x00048920) bg_frame_shadow_pane_g2

0xcb5f,	// (0x00048928) bg_frame_shadow_pane_g3

0xcb67,	// (0x00048930) bg_frame_shadow_pane_g4

0xcb6f,	// (0x00048938) bg_frame_shadow_pane_g5

0xcb77,	// (0x00048940) bg_frame_shadow_pane_g6

0xcb7f,	// (0x00048948) bg_frame_shadow_pane_g7

0x0e8e,	// (0x0003cc57) bg_frame_shadow_pane_g8

0x0007,

0xf806,	// (0x0004b5cf) bg_frame_shadow_pane_g

0x0659,	// (0x0003c422) main_video_tele_dialer_pane

0x812d,	// (0x00043ef6) aid_size_cell_video_keypad_ParamLimits

0x812d,	// (0x00043ef6) aid_size_cell_video_keypad

0x8147,	// (0x00043f10) grid_video_dialer_keypad_pane_ParamLimits

0x8147,	// (0x00043f10) grid_video_dialer_keypad_pane

0x8189,	// (0x00043f52) video_down_pane_cp_ParamLimits

0x8189,	// (0x00043f52) video_down_pane_cp

0x81b9,	// (0x00043f82) cell_video_dialer_keypad_pane_ParamLimits

0x81b9,	// (0x00043f82) cell_video_dialer_keypad_pane

0xcb87,	// (0x00048950) bg_button_pane_cp08_ParamLimits

0xcb87,	// (0x00048950) bg_button_pane_cp08

0x81db,	// (0x00043fa4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x81db,	// (0x00043fa4) cell_video_dialer_keypad_pane_g1

0x7ae4,	// (0x000438ad) mup3_rocker2_pane_ParamLimits

0x7ae4,	// (0x000438ad) mup3_rocker2_pane

0x101b,	// (0x0003cde4) mup3_rocker2_pane_g1

0x6e70,	// (0x00042c39) main_dialer2_pane

0x0659,	// (0x0003c422) main_mp4_pane

0xec13,	// (0x0004a9dc) main_mp4_pane_g1_ParamLimits

0xec13,	// (0x0004a9dc) main_mp4_pane_g1

0xec13,	// (0x0004a9dc) main_mp4_pane_g2_ParamLimits

0xec13,	// (0x0004a9dc) main_mp4_pane_g2

0x8216,	// (0x00043fdf) main_mp4_pane_g3_ParamLimits

0x8216,	// (0x00043fdf) main_mp4_pane_g3

0xec21,	// (0x0004a9ea) main_mp4_pane_g4_ParamLimits

0xec21,	// (0x0004a9ea) main_mp4_pane_g4

0xec4f,	// (0x0004aa18) main_mp4_pane_g5_ParamLimits

0xec4f,	// (0x0004aa18) main_mp4_pane_g5

0x0007,

0xf826,	// (0x0004b5ef) main_mp4_pane_g_ParamLimits

0xf826,	// (0x0004b5ef) main_mp4_pane_g

0xecc3,	// (0x0004aa8c) main_mp4_pane_t1_ParamLimits

0xecc3,	// (0x0004aa8c) main_mp4_pane_t1

0xed1b,	// (0x0004aae4) main_mp4_pane_t2_ParamLimits

0xed1b,	// (0x0004aae4) main_mp4_pane_t2

0xcb93,	// (0x0004895c) main_mp4_pane_t3_ParamLimits

0xcb93,	// (0x0004895c) main_mp4_pane_t3

0xed6d,	// (0x0004ab36) main_mp4_pane_t4_ParamLimits

0xed6d,	// (0x0004ab36) main_mp4_pane_t4

0x0003,

0xf837,	// (0x0004b600) main_mp4_pane_t_ParamLimits

0xf837,	// (0x0004b600) main_mp4_pane_t

0xedad,	// (0x0004ab76) mp4_progress_pane_ParamLimits

0xedad,	// (0x0004ab76) mp4_progress_pane

0xedf1,	// (0x0004abba) mp4_rocker_pane_ParamLimits

0xedf1,	// (0x0004abba) mp4_rocker_pane

0xcbc1,	// (0x0004898a) mp4_progress_pane_t1

0xcbd8,	// (0x000489a1) mp4_progress_pane_t2

0x0001,

0xf840,	// (0x0004b609) mp4_progress_pane_t

0xcbef,	// (0x000489b8) mup_progress_pane_cp04

0x101b,	// (0x0003cde4) mp4_rocker_pane_g1

0x8246,	// (0x0004400f) aid_cell_size_keypad2_ParamLimits

0x8246,	// (0x0004400f) aid_cell_size_keypad2

0x8260,	// (0x00044029) dialer2_ne_pane_ParamLimits

0x8260,	// (0x00044029) dialer2_ne_pane

0x8275,	// (0x0004403e) grid_dialer2_keypad_pane_ParamLimits

0x8275,	// (0x0004403e) grid_dialer2_keypad_pane

0xc047,	// (0x00047e10) bg_popup_call_pane_cp07_ParamLimits

0xc047,	// (0x00047e10) bg_popup_call_pane_cp07

0x828b,	// (0x00044054) dialer2_ne_pane_t1_ParamLimits

0x828b,	// (0x00044054) dialer2_ne_pane_t1

0x82c8,	// (0x00044091) cell_dialer2_keypad_pane_ParamLimits

0x82c8,	// (0x00044091) cell_dialer2_keypad_pane

0xcc0d,	// (0x000489d6) bg_button_pane_pane_cp04_ParamLimits

0xcc0d,	// (0x000489d6) bg_button_pane_pane_cp04

0x82ea,	// (0x000440b3) cell_dialer2_keypad_pane_g1_ParamLimits

0x82ea,	// (0x000440b3) cell_dialer2_keypad_pane_g1

0x424b,	// (0x00040014) aid_placing_vt_set_content_ParamLimits

0x424b,	// (0x00040014) aid_placing_vt_set_content

0x426d,	// (0x00040036) aid_placing_vt_set_title_ParamLimits

0x426d,	// (0x00040036) aid_placing_vt_set_title

0x0659,	// (0x0003c422) main_image3_pane

0x8379,	// (0x00044142) area_side_right_pane_cp01_ParamLimits

0x8379,	// (0x00044142) area_side_right_pane_cp01

0xec13,	// (0x0004a9dc) main_image3_pane_g1_ParamLimits

0xec13,	// (0x0004a9dc) main_image3_pane_g1

0x8390,	// (0x00044159) main_image3_pane_g2_ParamLimits

0x8390,	// (0x00044159) main_image3_pane_g2

0x83b6,	// (0x0004417f) main_image3_pane_g3_ParamLimits

0x83b6,	// (0x0004417f) main_image3_pane_g3

0x83dc,	// (0x000441a5) main_image3_pane_g4_ParamLimits

0x83dc,	// (0x000441a5) main_image3_pane_g4

0x0003,

0xf84f,	// (0x0004b618) main_image3_pane_g_ParamLimits

0xf84f,	// (0x0004b618) main_image3_pane_g

0x8402,	// (0x000441cb) main_image3_pane_t1_ParamLimits

0x8402,	// (0x000441cb) main_image3_pane_t1

0x845a,	// (0x00044223) main_image3_pane_t2_ParamLimits

0x845a,	// (0x00044223) main_image3_pane_t2

0x84ac,	// (0x00044275) main_image3_pane_t3_ParamLimits

0x84ac,	// (0x00044275) main_image3_pane_t3

0x0003,

0xf858,	// (0x0004b621) main_image3_pane_t_ParamLimits

0xf858,	// (0x0004b621) main_image3_pane_t

0x1a5e,	// (0x0003d827) grid_sctrl_middle_pane_cp01_ParamLimits

0x1a5e,	// (0x0003d827) grid_sctrl_middle_pane_cp01

0x852c,	// (0x000442f5) cell_sctrl_middle_pane_cp01_ParamLimits

0x852c,	// (0x000442f5) cell_sctrl_middle_pane_cp01

0x8549,	// (0x00044312) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8549,	// (0x00044312) cell_sctrl_middle_pane_cp01_g1

0x0659,	// (0x0003c422) main_call4_pane

0x855f,	// (0x00044328) aid_size_button_call4_ParamLimits

0x855f,	// (0x00044328) aid_size_button_call4

0x858c,	// (0x00044355) call4_windows_pane_ParamLimits

0x858c,	// (0x00044355) call4_windows_pane

0x85a2,	// (0x0004436b) grid_call4_button_pane_ParamLimits

0x85a2,	// (0x0004436b) grid_call4_button_pane

0xcc31,	// (0x000489fa) call4_windows_conf_pane

0x85c9,	// (0x00044392) popup_call4_audio_first_window_ParamLimits

0x85c9,	// (0x00044392) popup_call4_audio_first_window

0xcc64,	// (0x00048a2d) popup_call4_audio_second_window_ParamLimits

0xcc64,	// (0x00048a2d) popup_call4_audio_second_window

0xcc76,	// (0x00048a3f) popup_call4_audio_wait_window_ParamLimits

0xcc76,	// (0x00048a3f) popup_call4_audio_wait_window

0x85e9,	// (0x000443b2) cell_call4_button_pane_ParamLimits

0x85e9,	// (0x000443b2) cell_call4_button_pane

0x860e,	// (0x000443d7) bg_button_pane_cp09_ParamLimits

0x860e,	// (0x000443d7) bg_button_pane_cp09

0x861a,	// (0x000443e3) cell_call4_button_pane_g1_ParamLimits

0x861a,	// (0x000443e3) cell_call4_button_pane_g1

0x8640,	// (0x00044409) cell_call4_button_pane_t1_ParamLimits

0x8640,	// (0x00044409) cell_call4_button_pane_t1

0xcc8a,	// (0x00048a53) popup_call4_audio_conf_window_ParamLimits

0xcc8a,	// (0x00048a53) popup_call4_audio_conf_window

0x7b3e,	// (0x00043907) mup3_progress_pane_t1_ParamLimits

0x7b5c,	// (0x00043925) mup3_progress_pane_t2_ParamLimits

0xc698,	// (0x00048461) mup3_progress_pane_t3_ParamLimits

0xf728,	// (0x0004b4f1) mup3_progress_pane_t_ParamLimits

0xc6b5,	// (0x0004847e) mup_progress_pane_cp03_ParamLimits

0x806a,	// (0x00043e33) mup3_control_keys_pane_g4_copy1

0xeddb,	// (0x0004aba4) mp4_rocker2_pane_ParamLimits

0xeddb,	// (0x0004aba4) mp4_rocker2_pane

0xcc9e,	// (0x00048a67) mp4_rocker2_pane_g1

0xcca6,	// (0x00048a6f) mp4_rocker2_pane_g2

0xee73,	// (0x0004ac3c) mp4_rocker2_pane_g3

0xee7b,	// (0x0004ac44) mp4_rocker2_pane_g4

0xee83,	// (0x0004ac4c) mp4_rocker2_pane_g5

0x0004,

0xf861,	// (0x0004b62a) mp4_rocker2_pane_g

0x0659,	// (0x0003c422) main_camera4_pane

0x0659,	// (0x0003c422) main_video4_pane

0x815b,	// (0x00043f24) main_video_tele_dialer_pane_t1_ParamLimits

0x815b,	// (0x00043f24) main_video_tele_dialer_pane_t1

0x8172,	// (0x00043f3b) main_video_tele_dialer_pane_t2_ParamLimits

0x8172,	// (0x00043f3b) main_video_tele_dialer_pane_t2

0x0001,

0xf817,	// (0x0004b5e0) main_video_tele_dialer_pane_t_ParamLimits

0xf817,	// (0x0004b5e0) main_video_tele_dialer_pane_t

0x867e,	// (0x00044447) cam4_autofocus_pane_ParamLimits

0x867e,	// (0x00044447) cam4_autofocus_pane

0x8692,	// (0x0004445b) cam4_image_uncrop_pane_ParamLimits

0x8692,	// (0x0004445b) cam4_image_uncrop_pane

0x86a9,	// (0x00044472) cam4_indicators_pane_ParamLimits

0x86a9,	// (0x00044472) cam4_indicators_pane

0x86cd,	// (0x00044496) main_camera4_pane_g1_ParamLimits

0x86cd,	// (0x00044496) main_camera4_pane_g1

0x86d9,	// (0x000444a2) main_camera4_pane_g2_ParamLimits

0x86d9,	// (0x000444a2) main_camera4_pane_g2

0x86d9,	// (0x000444a2) main_camera4_pane_g3_ParamLimits

0x86d9,	// (0x000444a2) main_camera4_pane_g3

0x86e5,	// (0x000444ae) main_camera4_pane_g4_ParamLimits

0x86e5,	// (0x000444ae) main_camera4_pane_g4

0x86f1,	// (0x000444ba) main_camera4_pane_g5_ParamLimits

0x86f1,	// (0x000444ba) main_camera4_pane_g5

0x0005,

0xf86c,	// (0x0004b635) main_camera4_pane_g_ParamLimits

0xf86c,	// (0x0004b635) main_camera4_pane_g

0x870e,	// (0x000444d7) main_camera4_pane_t1_ParamLimits

0x870e,	// (0x000444d7) main_camera4_pane_t1

0x0d57,	// (0x0003cb20) bg_tb_trans_pane_cp06

0xeead,	// (0x0004ac76) cam4_indicators_pane_g1

0xeebd,	// (0x0004ac86) cam4_indicators_pane_g2

0x0002,

0xf887,	// (0x0004b650) cam4_indicators_pane_g

0xeedd,	// (0x0004aca6) cam4_indicators_pane_t1

0x8763,	// (0x0004452c) main_video4_pane_g1_ParamLimits

0x8763,	// (0x0004452c) main_video4_pane_g1

0x8775,	// (0x0004453e) main_video4_pane_g2_ParamLimits

0x8775,	// (0x0004453e) main_video4_pane_g2

0x8775,	// (0x0004453e) main_video4_pane_g3_ParamLimits

0x8775,	// (0x0004453e) main_video4_pane_g3

0x8784,	// (0x0004454d) main_video4_pane_g4_ParamLimits

0x8784,	// (0x0004454d) main_video4_pane_g4

0x0004,

0xf88e,	// (0x0004b657) main_video4_pane_g_ParamLimits

0xf88e,	// (0x0004b657) main_video4_pane_g

0x87a2,	// (0x0004456b) vid4_indicators_pane_ParamLimits

0x87a2,	// (0x0004456b) vid4_indicators_pane

0x87ca,	// (0x00044593) video4_image_uncrop_cif_pane_ParamLimits

0x87ca,	// (0x00044593) video4_image_uncrop_cif_pane

0x87e2,	// (0x000445ab) video4_image_uncrop_nhd_pane_ParamLimits

0x87e2,	// (0x000445ab) video4_image_uncrop_nhd_pane

0x87f6,	// (0x000445bf) video4_image_uncrop_vga_pane_ParamLimits

0x87f6,	// (0x000445bf) video4_image_uncrop_vga_pane

0x1a5e,	// (0x0003d827) bg_tb_trans_pane_cp07

0xeead,	// (0x0004ac76) vid4_indicators_pane_g1

0xeeff,	// (0x0004acc8) vid4_indicators_pane_g2

0xef0f,	// (0x0004acd8) vid4_indicators_pane_g3

0x0004,

0xf899,	// (0x0004b662) vid4_indicators_pane_g

0xef3c,	// (0x0004ad05) vid4_indicators_pane_t1

0x880e,	// (0x000445d7) cam4_autofocus_pane_g1

0x8816,	// (0x000445df) cam4_autofocus_pane_g2

0x881e,	// (0x000445e7) cam4_autofocus_pane_g3

0x0002,

0xf8a4,	// (0x0004b66d) cam4_autofocus_pane_g

0x8826,	// (0x000445ef) cam4_autofocus_pane_g3_copy1

0x819d,	// (0x00043f66) video_down_pane_cp_t1

0x81ab,	// (0x00043f74) video_down_pane_cp_t2

0x0001,

0xf81c,	// (0x0004b5e5) video_down_pane_cp_t

0x1a5e,	// (0x0003d827) popup_vitu2_window_ParamLimits

0x1a5e,	// (0x0003d827) popup_vitu2_window

0x882e,	// (0x000445f7) aid_size_cell2_itu2_ParamLimits

0x882e,	// (0x000445f7) aid_size_cell2_itu2

0x8854,	// (0x0004461d) aid_size_cell_itu2_ParamLimits

0x8854,	// (0x0004461d) aid_size_cell_itu2

0x7bee,	// (0x000439b7) bg_popup_window_pane_cp09_ParamLimits

0x7bee,	// (0x000439b7) bg_popup_window_pane_cp09

0x88a6,	// (0x0004466f) field_vitu2_entry_pane_ParamLimits

0x88a6,	// (0x0004466f) field_vitu2_entry_pane

0x88c0,	// (0x00044689) grid_vitu2_function_pane_ParamLimits

0x88c0,	// (0x00044689) grid_vitu2_function_pane

0x88fb,	// (0x000446c4) grid_vitu2_itu_pane_ParamLimits

0x88fb,	// (0x000446c4) grid_vitu2_itu_pane

0x8969,	// (0x00044732) cell_vitu2_itu_pane_ParamLimits

0x8969,	// (0x00044732) cell_vitu2_itu_pane

0x8991,	// (0x0004475a) cell_vitu2_function_pane_ParamLimits

0x8991,	// (0x0004475a) cell_vitu2_function_pane

0xccc0,	// (0x00048a89) bg_popup_call_pane_cp08_ParamLimits

0xccc0,	// (0x00048a89) bg_popup_call_pane_cp08

0xccd7,	// (0x00048aa0) field_vitu2_entry_pane_g1

0xcce3,	// (0x00048aac) field_vitu2_entry_pane_g2

0x0002,

0xf8ab,	// (0x0004b674) field_vitu2_entry_pane_g

0x2cb2,	// (0x0003ea7b) field_vitu2_entry_pane_t1_ParamLimits

0x2cb2,	// (0x0003ea7b) field_vitu2_entry_pane_t1

0xccef,	// (0x00048ab8) field_vitu2_entry_pane_t2_ParamLimits

0xccef,	// (0x00048ab8) field_vitu2_entry_pane_t2

0x0001,

0xf8b2,	// (0x0004b67b) field_vitu2_entry_pane_t_ParamLimits

0xf8b2,	// (0x0004b67b) field_vitu2_entry_pane_t

0x89d0,	// (0x00044799) bg_button_pane_cp010_ParamLimits

0x89d0,	// (0x00044799) bg_button_pane_cp010

0x89de,	// (0x000447a7) cell_vitu2_itu_pane_g1

0x8a04,	// (0x000447cd) cell_vitu2_itu_pane_t1_ParamLimits

0x8a04,	// (0x000447cd) cell_vitu2_itu_pane_t1

0x2ce1,	// (0x0003eaaa) cell_vitu2_itu_pane_t2_ParamLimits

0x2ce1,	// (0x0003eaaa) cell_vitu2_itu_pane_t2

0x0002,

0xf8bc,	// (0x0004b685) cell_vitu2_itu_pane_t_ParamLimits

0xf8bc,	// (0x0004b685) cell_vitu2_itu_pane_t

0x1a5e,	// (0x0003d827) bg_button_pane_cp011

0x8a62,	// (0x0004482b) cell_vitu2_function_pane_g1

0x0659,	// (0x0003c422) main_myfav_hc_pane

0x84f8,	// (0x000442c1) popup_image3_note_pane_ParamLimits

0x84f8,	// (0x000442c1) popup_image3_note_pane

0x8512,	// (0x000442db) popup_image3_tool_bar_pane_ParamLimits

0x8512,	// (0x000442db) popup_image3_tool_bar_pane

0x2d6f,	// (0x0003eb38) cell_vitu2_itu_pane_t3_ParamLimits

0x2d6f,	// (0x0003eb38) cell_vitu2_itu_pane_t3

0x0659,	// (0x0003c422) bg_popup_trans_pane

0xcd14,	// (0x00048add) grid_image3_tool_bar_pane

0xcd1e,	// (0x00048ae7) bg_popup_trans_pane_g1

0x1239,	// (0x0003d002) bg_popup_trans_pane_g2

0xcd26,	// (0x00048aef) bg_popup_trans_pane_g3

0xcd2e,	// (0x00048af7) bg_popup_trans_pane_g4

0xcd36,	// (0x00048aff) bg_popup_trans_pane_g5

0xcd3e,	// (0x00048b07) bg_popup_trans_pane_g6

0xcd46,	// (0x00048b0f) bg_popup_trans_pane_g7

0xcd4e,	// (0x00048b17) bg_popup_trans_pane_g8

0x1219,	// (0x0003cfe2) bg_popup_trans_pane_g9

0x0008,

0xf8c3,	// (0x0004b68c) bg_popup_trans_pane_g

0xcd56,	// (0x00048b1f) cell_image3_tool_bar_pane_ParamLimits

0xcd56,	// (0x00048b1f) cell_image3_tool_bar_pane

0x101b,	// (0x0003cde4) cell_image3_tool_bar_pane_g1

0x0659,	// (0x0003c422) bg_popup_trans_pane_cp1

0xcd6a,	// (0x00048b33) popup_image3_note_pane_t1

0xcd78,	// (0x00048b41) popup_image3_note_pane_t2

0xcd86,	// (0x00048b4f) popup_image3_note_pane_t3

0x0002,

0xf8d6,	// (0x0004b69f) popup_image3_note_pane_t

0xcd94,	// (0x00048b5d) popup_image3_note_pane_t3_copy1

0x8a76,	// (0x0004483f) bg_myfav_hc_instruction_pane_ParamLimits

0x8a76,	// (0x0004483f) bg_myfav_hc_instruction_pane

0x8a88,	// (0x00044851) cell_myfav_contact_pane_ParamLimits

0x8a88,	// (0x00044851) cell_myfav_contact_pane

0x8aa2,	// (0x0004486b) cell_myfav_contact_pane_cp1_ParamLimits

0x8aa2,	// (0x0004486b) cell_myfav_contact_pane_cp1

0x8ab8,	// (0x00044881) cell_myfav_contact_pane_cp2_ParamLimits

0x8ab8,	// (0x00044881) cell_myfav_contact_pane_cp2

0x8ace,	// (0x00044897) cell_myfav_contact_pane_cp3_ParamLimits

0x8ace,	// (0x00044897) cell_myfav_contact_pane_cp3

0x8ae3,	// (0x000448ac) cell_myfav_contact_pane_cp4_ParamLimits

0x8ae3,	// (0x000448ac) cell_myfav_contact_pane_cp4

0x8af7,	// (0x000448c0) cell_myfav_contact_pane_cp5_ParamLimits

0x8af7,	// (0x000448c0) cell_myfav_contact_pane_cp5

0x8b0b,	// (0x000448d4) cell_myfav_contact_pane_cp6_ParamLimits

0x8b0b,	// (0x000448d4) cell_myfav_contact_pane_cp6

0x8b1f,	// (0x000448e8) cell_myfav_contact_pane_cp7_ParamLimits

0x8b1f,	// (0x000448e8) cell_myfav_contact_pane_cp7

0xcda2,	// (0x00048b6b) listscroll_gen_pane_cp05

0x8b37,	// (0x00044900) main_myfav_hc_pane_g1_ParamLimits

0x8b37,	// (0x00044900) main_myfav_hc_pane_g1

0x8b4d,	// (0x00044916) main_myfav_hc_pane_g2_ParamLimits

0x8b4d,	// (0x00044916) main_myfav_hc_pane_g2

0x0002,

0xf8dd,	// (0x0004b6a6) main_myfav_hc_pane_g_ParamLimits

0xf8dd,	// (0x0004b6a6) main_myfav_hc_pane_g

0x8b77,	// (0x00044940) main_myfav_hc_pane_t1_ParamLimits

0x8b77,	// (0x00044940) main_myfav_hc_pane_t1

0xcdab,	// (0x00048b74) main_myfav_hc_pane_t2_ParamLimits

0xcdab,	// (0x00048b74) main_myfav_hc_pane_t2

0xcdbd,	// (0x00048b86) main_myfav_hc_pane_t3_ParamLimits

0xcdbd,	// (0x00048b86) main_myfav_hc_pane_t3

0x8b8c,	// (0x00044955) main_myfav_hc_pane_t4_ParamLimits

0x8b8c,	// (0x00044955) main_myfav_hc_pane_t4

0x0004,

0xf8e4,	// (0x0004b6ad) main_myfav_hc_pane_t_ParamLimits

0xf8e4,	// (0x0004b6ad) main_myfav_hc_pane_t

0x101b,	// (0x0003cde4) bg_myfav_hc_instruction_pane_g1

0xcdcf,	// (0x00048b98) cell_myfav_contact_pane_g1_ParamLimits

0xcdcf,	// (0x00048b98) cell_myfav_contact_pane_g1

0xcdcf,	// (0x00048b98) cell_myfav_contact_pane_g2_ParamLimits

0xcdcf,	// (0x00048b98) cell_myfav_contact_pane_g2

0xcddb,	// (0x00048ba4) cell_myfav_contact_pane_g3_ParamLimits

0xcddb,	// (0x00048ba4) cell_myfav_contact_pane_g3

0x0d65,	// (0x0003cb2e) cell_myfav_contact_pane_g4_ParamLimits

0x0d65,	// (0x0003cb2e) cell_myfav_contact_pane_g4

0xcde8,	// (0x00048bb1) cell_myfav_contact_pane_g5_ParamLimits

0xcde8,	// (0x00048bb1) cell_myfav_contact_pane_g5

0x0004,

0xf8ef,	// (0x0004b6b8) cell_myfav_contact_pane_g_ParamLimits

0xf8ef,	// (0x0004b6b8) cell_myfav_contact_pane_g

0x8b63,	// (0x0004492c) main_myfav_hc_pane_g3_ParamLimits

0x8b63,	// (0x0004492c) main_myfav_hc_pane_g3

0x3601,	// (0x0003f3ca) popup_adpt_find_window

0x8bb0,	// (0x00044979) afind_page_pane_ParamLimits

0x8bb0,	// (0x00044979) afind_page_pane

0x8bc5,	// (0x0004498e) aid_size_cell_afind_ParamLimits

0x8bc5,	// (0x0004498e) aid_size_cell_afind

0x8be3,	// (0x000449ac) bg_popup_sub_pane_cp09_ParamLimits

0x8be3,	// (0x000449ac) bg_popup_sub_pane_cp09

0x8bf0,	// (0x000449b9) find_pane_cp01_ParamLimits

0x8bf0,	// (0x000449b9) find_pane_cp01

0xcdf4,	// (0x00048bbd) grid_afind_control_pane_ParamLimits

0xcdf4,	// (0x00048bbd) grid_afind_control_pane

0x8bfd,	// (0x000449c6) grid_afind_pane_ParamLimits

0x8bfd,	// (0x000449c6) grid_afind_pane

0x8c1b,	// (0x000449e4) cell_afind_pane_ParamLimits

0x8c1b,	// (0x000449e4) cell_afind_pane

0x101b,	// (0x0003cde4) afind_page_pane_g1

0x8c6a,	// (0x00044a33) afind_page_pane_g2

0x8c72,	// (0x00044a3b) afind_page_pane_g3

0x0002,

0xf8fa,	// (0x0004b6c3) afind_page_pane_g

0x8c7a,	// (0x00044a43) afind_page_pane_t1

0xce1a,	// (0x00048be3) cell_afind_grid_control_pane_ParamLimits

0xce1a,	// (0x00048be3) cell_afind_grid_control_pane

0xcc0d,	// (0x000489d6) bg_button_pane_cp69_ParamLimits

0xcc0d,	// (0x000489d6) bg_button_pane_cp69

0x8c88,	// (0x00044a51) cell_afind_pane_g1_ParamLimits

0x8c88,	// (0x00044a51) cell_afind_pane_g1

0x8c95,	// (0x00044a5e) cell_afind_pane_t1_ParamLimits

0x8c95,	// (0x00044a5e) cell_afind_pane_t1

0x1025,	// (0x0003cdee) bg_button_pane_cp72

0xce29,	// (0x00048bf2) cell_afind_grid_control_pane_g1

0x5ab2,	// (0x0004187b) aid_image_placing_area_ParamLimits

0x5ab2,	// (0x0004187b) aid_image_placing_area

0x0d57,	// (0x0003cb20) field_vitu_entry_pane_g1_ParamLimits

0x0d57,	// (0x0003cb20) field_vitu_entry_pane_g1

0x0d57,	// (0x0003cb20) field_vitu_entry_pane_g2_ParamLimits

0x0d57,	// (0x0003cb20) field_vitu_entry_pane_g2

0x0001,

0xf7a7,	// (0x0004b570) field_vitu_entry_pane_g_ParamLimits

0xf7a7,	// (0x0004b570) field_vitu_entry_pane_g

0xc967,	// (0x00048730) cell_vitu_itu_pane_g1_ParamLimits

0xc94a,	// (0x00048713) cell_vitu_itu_pane_t3_ParamLimits

0xc94a,	// (0x00048713) cell_vitu_itu_pane_t3

0xcbc1,	// (0x0004898a) mp4_progress_pane_t1_ParamLimits

0xcbd8,	// (0x000489a1) mp4_progress_pane_t2_ParamLimits

0xf840,	// (0x0004b609) mp4_progress_pane_t_ParamLimits

0xcbef,	// (0x000489b8) mup_progress_pane_cp04_ParamLimits

0x8b9e,	// (0x00044967) main_myfav_hc_pane_t5_ParamLimits

0x8b9e,	// (0x00044967) main_myfav_hc_pane_t5

0xbc6e,	// (0x00047a37) aid_zoom_text_primary

0x3601,	// (0x0003f3ca) popup_adpt_find_window_ParamLimits

0x1a5e,	// (0x0003d827) main_cam_set_pane

0x86bb,	// (0x00044484) cam4_zoom_pane_ParamLimits

0x86bb,	// (0x00044484) cam4_zoom_pane

0x8ca7,	// (0x00044a70) main_cam_set_pane_g1_ParamLimits

0x8ca7,	// (0x00044a70) main_cam_set_pane_g1

0x8cb5,	// (0x00044a7e) main_cam_set_pane_g2_ParamLimits

0x8cb5,	// (0x00044a7e) main_cam_set_pane_g2

0x0001,

0xf901,	// (0x0004b6ca) main_cam_set_pane_g_ParamLimits

0xf901,	// (0x0004b6ca) main_cam_set_pane_g

0x8cd4,	// (0x00044a9d) main_cam_set_pane_t1_ParamLimits

0x8cd4,	// (0x00044a9d) main_cam_set_pane_t1

0x8ce6,	// (0x00044aaf) main_cset_listscroll_pane_ParamLimits

0x8ce6,	// (0x00044aaf) main_cset_listscroll_pane

0x8d08,	// (0x00044ad1) main_cset_slider_pane_ParamLimits

0x8d08,	// (0x00044ad1) main_cset_slider_pane

0xce3a,	// (0x00048c03) main_cset_list_pane_ParamLimits

0xce3a,	// (0x00048c03) main_cset_list_pane

0xce4a,	// (0x00048c13) scroll_pane_cp028

0x8d2c,	// (0x00044af5) aid_area_touch_slider

0x8d48,	// (0x00044b11) cset_slider_pane

0x8d6b,	// (0x00044b34) main_cset_slider_pane_g1

0x8d80,	// (0x00044b49) main_cset_slider_pane_g2

0x0011,

0xf906,	// (0x0004b6cf) main_cset_slider_pane_g

0xce83,	// (0x00048c4c) main_cset_slider_pane_t1

0x8e3c,	// (0x00044c05) main_cset_slider_pane_t2

0x8e56,	// (0x00044c1f) main_cset_slider_pane_t3

0x8e70,	// (0x00044c39) main_cset_slider_pane_t4

0x8e8a,	// (0x00044c53) main_cset_slider_pane_t5

0x8ea4,	// (0x00044c6d) main_cset_slider_pane_t6

0x8eb9,	// (0x00044c82) main_cset_slider_pane_t7

0x000e,

0xf92b,	// (0x0004b6f4) main_cset_slider_pane_t

0x8fbd,	// (0x00044d86) cset_list_set_pane_ParamLimits

0x8fbd,	// (0x00044d86) cset_list_set_pane

0xcf1d,	// (0x00048ce6) aid_position_infowindow_above

0xcf25,	// (0x00048cee) aid_position_infowindow_below

0x2dcd,	// (0x0003eb96) cset_list_set_pane_g1_ParamLimits

0x2dcd,	// (0x0003eb96) cset_list_set_pane_g1

0x2dd9,	// (0x0003eba2) cset_list_set_pane_g3_ParamLimits

0x2dd9,	// (0x0003eba2) cset_list_set_pane_g3

0x0001,

0xf94a,	// (0x0004b713) cset_list_set_pane_g_ParamLimits

0xf94a,	// (0x0004b713) cset_list_set_pane_g

0x2de8,	// (0x0003ebb1) cset_list_set_pane_t1_ParamLimits

0x2de8,	// (0x0003ebb1) cset_list_set_pane_t1

0x1a5e,	// (0x0003d827) list_highlight_pane_cp021_ParamLimits

0x1a5e,	// (0x0003d827) list_highlight_pane_cp021

0x1ace,	// (0x0003d897) cset_slider_pane_g1

0x1ae0,	// (0x0003d8a9) cset_slider_pane_g2

0x1ad7,	// (0x0003d8a0) cset_slider_pane_g3

0x0002,

0xf94f,	// (0x0004b718) cset_slider_pane_g

0xef56,	// (0x0004ad1f) aid_area_touch_cam4_zoom

0xef5e,	// (0x0004ad27) cam4_zoom_cont_pane

0xef66,	// (0x0004ad2f) cam4_zoom_pane_g1

0xef6e,	// (0x0004ad37) cam4_zoom_pane_g2

0x8fce,	// (0x00044d97) cam4_zoom_pane_g3

0x0002,

0xf956,	// (0x0004b71f) cam4_zoom_pane_g

0xcf2d,	// (0x00048cf6) cam4_zoom_cont_pane_g1

0xcf36,	// (0x00048cff) cam4_zoom_cont_pane_g2

0xcf3f,	// (0x00048d08) cam4_zoom_cont_pane_g3

0x0002,

0xf95d,	// (0x0004b726) cam4_zoom_cont_pane_g

0x857d,	// (0x00044346) call4_image_pane_ParamLimits

0x857d,	// (0x00044346) call4_image_pane

0xcc31,	// (0x000489fa) call4_windows_conf_pane_ParamLimits

0xcc44,	// (0x00048a0d) popup_call4_audio_in_window_ParamLimits

0xcc44,	// (0x00048a0d) popup_call4_audio_in_window

0x0659,	// (0x0003c422) bg_popup_call2_act_pane_cp02

0xcc82,	// (0x00048a4b) call4_list_conf_pane

0x101b,	// (0x0003cde4) call4_image_pane_g1

0x101b,	// (0x0003cde4) call4_image_pane_g2

0x0001,

0xf3c9,	// (0x0004b192) call4_image_pane_g

0xcf48,	// (0x00048d11) list_single_graphic_popup_conf4_pane_ParamLimits

0xcf48,	// (0x00048d11) list_single_graphic_popup_conf4_pane

0x0659,	// (0x0003c422) list_highlight_pane_cp022

0xcf5b,	// (0x00048d24) list_single_graphic_popup_conf4_pane_g1

0x170c,	// (0x0003d4d5) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf964,	// (0x0004b72d) list_single_graphic_popup_conf4_pane_g

0xcf63,	// (0x00048d2c) list_single_graphic_popup_conf4_pane_t1

0x4377,	// (0x00040140) popup_vtel_slider_window_ParamLimits

0x4377,	// (0x00040140) popup_vtel_slider_window

0xcbfb,	// (0x000489c4) dialer2_ne_pane_t2_ParamLimits

0xcbfb,	// (0x000489c4) dialer2_ne_pane_t2

0x0001,

0xf845,	// (0x0004b60e) dialer2_ne_pane_t_ParamLimits

0xf845,	// (0x0004b60e) dialer2_ne_pane_t

0xc047,	// (0x00047e10) bg_popup_sub_pane_cp010_ParamLimits

0xc047,	// (0x00047e10) bg_popup_sub_pane_cp010

0x8fd6,	// (0x00044d9f) popup_vtel_slider_window_g1_ParamLimits

0x8fd6,	// (0x00044d9f) popup_vtel_slider_window_g1

0x8fe9,	// (0x00044db2) popup_vtel_slider_window_g2_ParamLimits

0x8fe9,	// (0x00044db2) popup_vtel_slider_window_g2

0x0003,

0xf969,	// (0x0004b732) popup_vtel_slider_window_g_ParamLimits

0xf969,	// (0x0004b732) popup_vtel_slider_window_g

0x903d,	// (0x00044e06) vtel_slider_pane_ParamLimits

0x903d,	// (0x00044e06) vtel_slider_pane

0x905f,	// (0x00044e28) vtel_slider_pane_g1_ParamLimits

0x905f,	// (0x00044e28) vtel_slider_pane_g1

0x9073,	// (0x00044e3c) vtel_slider_pane_g2_ParamLimits

0x9073,	// (0x00044e3c) vtel_slider_pane_g2

0x908b,	// (0x00044e54) vtel_slider_pane_g3_ParamLimits

0x908b,	// (0x00044e54) vtel_slider_pane_g3

0x905f,	// (0x00044e28) vtel_slider_pane_g4_ParamLimits

0x905f,	// (0x00044e28) vtel_slider_pane_g4

0x90a1,	// (0x00044e6a) vtel_slider_pane_g5_ParamLimits

0x90a1,	// (0x00044e6a) vtel_slider_pane_g5

0x0004,

0xf972,	// (0x0004b73b) vtel_slider_pane_g_ParamLimits

0xf972,	// (0x0004b73b) vtel_slider_pane_g

0x1a5e,	// (0x0003d827) main_gallery2_pane

0x8880,	// (0x00044649) aid_size_row_itut2_dropdow_list_ParamLimits

0x8880,	// (0x00044649) aid_size_row_itut2_dropdow_list

0x88dc,	// (0x000446a5) grid_vitu2_function_top_pane_ParamLimits

0x88dc,	// (0x000446a5) grid_vitu2_function_top_pane

0x8924,	// (0x000446ed) popup_vitu2_dropdown_list_window_ParamLimits

0x8924,	// (0x000446ed) popup_vitu2_dropdown_list_window

0x8945,	// (0x0004470e) popup_vitu2_match_list_window

0x90b7,	// (0x00044e80) cell_vitu2_function_top_pane_ParamLimits

0x90b7,	// (0x00044e80) cell_vitu2_function_top_pane

0x90cf,	// (0x00044e98) cell_vitu2_function_top_pane_cp01_ParamLimits

0x90cf,	// (0x00044e98) cell_vitu2_function_top_pane_cp01

0x90eb,	// (0x00044eb4) cell_vitu2_function_top_wide_pane_ParamLimits

0x90eb,	// (0x00044eb4) cell_vitu2_function_top_wide_pane

0x1a5e,	// (0x0003d827) bg_button_pane_cp012

0x9108,	// (0x00044ed1) cell_vitu2_function_top_pane_g1

0xef76,	// (0x0004ad3f) bg_button_pane_cp013_ParamLimits

0xef76,	// (0x0004ad3f) bg_button_pane_cp013

0x911c,	// (0x00044ee5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x911c,	// (0x00044ee5) cell_vitu2_function_top_wide_pane_g1

0x1a5e,	// (0x0003d827) bg_popup_sub_pane_cp20

0x9134,	// (0x00044efd) list_vitu2_match_list_pane

0xcd1e,	// (0x00048ae7) bg_popup_sub_pane_cp20_g1

0xcd26,	// (0x00048aef) bg_popup_sub_pane_cp20_g2

0x1239,	// (0x0003d002) bg_popup_sub_pane_cp20_g3

0xcd2e,	// (0x00048af7) bg_popup_sub_pane_cp20_g4

0x1219,	// (0x0003cfe2) bg_popup_sub_pane_cp20_g5

0xcf79,	// (0x00048d42) bg_popup_sub_pane_cp20_g6

0xcd3e,	// (0x00048b07) bg_popup_sub_pane_cp20_g7

0xcd46,	// (0x00048b0f) bg_popup_sub_pane_cp20_g8

0xcd4e,	// (0x00048b17) bg_popup_sub_pane_cp20_g9

0x0008,

0xf97d,	// (0x0004b746) bg_popup_sub_pane_cp20_g

0xef92,	// (0x0004ad5b) list_vitu2_match_list_item_pane_ParamLimits

0xef92,	// (0x0004ad5b) list_vitu2_match_list_item_pane

0xefa4,	// (0x0004ad6d) list_vitu2_match_list_item_pane_t1

0x0659,	// (0x0003c422) bg_popup_sub_pane_cp21

0x0f9a,	// (0x0003cd63) grid_vitu2_dropdown_list_pane

0x9152,	// (0x00044f1b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9152,	// (0x00044f1b) cell_vitu2_dropdown_list_char_pane

0x9170,	// (0x00044f39) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9170,	// (0x00044f39) cell_vitu2_dropdown_list_ctrl_pane

0xcf8e,	// (0x00048d57) cell_vitu2_dropdown_list_char_pane_g1

0xcf97,	// (0x00048d60) cell_vitu2_dropdown_list_char_pane_g2

0xcfa0,	// (0x00048d69) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x0004b763) cell_vitu2_dropdown_list_char_pane_g

0x9198,	// (0x00044f61) cell_vitu2_dropdown_list_char_pane_t1

0x91a6,	// (0x00044f6f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x91a6,	// (0x00044f6f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x91b6,	// (0x00044f7f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x91b6,	// (0x00044f7f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x91c7,	// (0x00044f90) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x91c7,	// (0x00044f90) cell_vitu2_dropdown_list_ctrl_pane_g3

0x91d7,	// (0x00044fa0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x91d7,	// (0x00044fa0) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0d57,	// (0x0003cb20) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0d57,	// (0x0003cb20) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x0004b76a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x0004b76a) cell_vitu2_dropdown_list_ctrl_pane_g

0x91f3,	// (0x00044fbc) aid_size_cell_gallery2_ParamLimits

0x91f3,	// (0x00044fbc) aid_size_cell_gallery2

0x9211,	// (0x00044fda) grid_gallery2_pane_ParamLimits

0x9211,	// (0x00044fda) grid_gallery2_pane

0x7f82,	// (0x00043d4b) scroll_pane_cp029_ParamLimits

0x7f82,	// (0x00043d4b) scroll_pane_cp029

0x9225,	// (0x00044fee) cell_gallery2_pane_ParamLimits

0x9225,	// (0x00044fee) cell_gallery2_pane

0xcfa9,	// (0x00048d72) cell_gallery2_pane_g2

0x927e,	// (0x00045047) cell_gallery2_pane_g3

0xcfb1,	// (0x00048d7a) cell_gallery2_pane_g4

0xcfb9,	// (0x00048d82) cell_gallery2_pane_g5

0x0f9a,	// (0x0003cd63) grid_highlight_pane_cp10

0x8945,	// (0x0004470e) popup_vitu2_match_list_window_ParamLimits

0x8956,	// (0x0004471f) popup_vitu2_query_window_ParamLimits

0x8956,	// (0x0004471f) popup_vitu2_query_window

0x0659,	// (0x0003c422) bg_vitu2_candi_button_pane

0xcf8e,	// (0x00048d57) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcf97,	// (0x00048d60) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcfa0,	// (0x00048d69) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2dfd,	// (0x0003ebc6) bg_button_pane_cp015

0x9286,	// (0x0004504f) bg_button_pane_cp016

0x9292,	// (0x0004505b) bg_button_pane_cp017

0x1cd4,	// (0x0003da9d) bg_popup_sub_pane_cp22

0xcfc1,	// (0x00048d8a) popup_vitu2_query_window_g1

0x2e31,	// (0x0003ebfa) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x0004b775) popup_vitu2_query_window_g

0x2e45,	// (0x0003ec0e) popup_vitu2_query_window_t1_ParamLimits

0x2e45,	// (0x0003ec0e) popup_vitu2_query_window_t1

0x2e78,	// (0x0003ec41) popup_vitu2_query_window_t2_ParamLimits

0x2e78,	// (0x0003ec41) popup_vitu2_query_window_t2

0x2e8a,	// (0x0003ec53) popup_vitu2_query_window_t3_ParamLimits

0x2e8a,	// (0x0003ec53) popup_vitu2_query_window_t3

0x92b9,	// (0x00045082) popup_vitu2_query_window_t4_ParamLimits

0x92b9,	// (0x00045082) popup_vitu2_query_window_t4

0x92cb,	// (0x00045094) popup_vitu2_query_window_t5_ParamLimits

0x92cb,	// (0x00045094) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x0004b77c) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x0004b77c) popup_vitu2_query_window_t

0xce32,	// (0x00048bfb) main_cset_text_pane

0x8d2c,	// (0x00044af5) aid_area_touch_slider_ParamLimits

0x8d48,	// (0x00044b11) cset_slider_pane_ParamLimits

0x8d6b,	// (0x00044b34) main_cset_slider_pane_g1_ParamLimits

0x8d80,	// (0x00044b49) main_cset_slider_pane_g2_ParamLimits

0xce53,	// (0x00048c1c) main_cset_slider_pane_g3_ParamLimits

0xce53,	// (0x00048c1c) main_cset_slider_pane_g3

0x8d95,	// (0x00044b5e) main_cset_slider_pane_g4_ParamLimits

0x8d95,	// (0x00044b5e) main_cset_slider_pane_g4

0x8da4,	// (0x00044b6d) main_cset_slider_pane_g5_ParamLimits

0x8da4,	// (0x00044b6d) main_cset_slider_pane_g5

0x8db0,	// (0x00044b79) main_cset_slider_pane_g6_ParamLimits

0x8db0,	// (0x00044b79) main_cset_slider_pane_g6

0xf906,	// (0x0004b6cf) main_cset_slider_pane_g_ParamLimits

0xce83,	// (0x00048c4c) main_cset_slider_pane_t1_ParamLimits

0x8e3c,	// (0x00044c05) main_cset_slider_pane_t2_ParamLimits

0x8e56,	// (0x00044c1f) main_cset_slider_pane_t3_ParamLimits

0x8e70,	// (0x00044c39) main_cset_slider_pane_t4_ParamLimits

0x8e8a,	// (0x00044c53) main_cset_slider_pane_t5_ParamLimits

0x8ea4,	// (0x00044c6d) main_cset_slider_pane_t6_ParamLimits

0x8eb9,	// (0x00044c82) main_cset_slider_pane_t7_ParamLimits

0x8ee3,	// (0x00044cac) main_cset_slider_pane_t8_ParamLimits

0x8ee3,	// (0x00044cac) main_cset_slider_pane_t8

0x8f0b,	// (0x00044cd4) main_cset_slider_pane_t9_ParamLimits

0x8f0b,	// (0x00044cd4) main_cset_slider_pane_t9

0x8f33,	// (0x00044cfc) main_cset_slider_pane_t10_ParamLimits

0x8f33,	// (0x00044cfc) main_cset_slider_pane_t10

0x8f5b,	// (0x00044d24) main_cset_slider_pane_t11_ParamLimits

0x8f5b,	// (0x00044d24) main_cset_slider_pane_t11

0x8f83,	// (0x00044d4c) main_cset_slider_pane_t12_ParamLimits

0x8f83,	// (0x00044d4c) main_cset_slider_pane_t12

0x8fa0,	// (0x00044d69) main_cset_slider_pane_t13_ParamLimits

0x8fa0,	// (0x00044d69) main_cset_slider_pane_t13

0xf92b,	// (0x0004b6f4) main_cset_slider_pane_t_ParamLimits

0x0659,	// (0x0003c422) bg_popup_sub_pane_cp011

0xcfcd,	// (0x00048d96) main_cset_text_pane_g1

0xcfd5,	// (0x00048d9e) main_cset_text_pane_t1

0xcfe3,	// (0x00048dac) main_cset_text_pane_t2

0xcff1,	// (0x00048dba) main_cset_text_pane_t3

0xcfff,	// (0x00048dc8) main_cset_text_pane_t4

0xd00d,	// (0x00048dd6) main_cset_text_pane_t5

0xd01b,	// (0x00048de4) main_cset_text_pane_t6

0xd029,	// (0x00048df2) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x0004b78b) main_cset_text_pane_t

0x0659,	// (0x0003c422) main_cam4_burst_pane

0x0659,	// (0x0003c422) main_cam5_pane

0xce08,	// (0x00048bd1) bg_button_pane_cp019

0xce11,	// (0x00048bda) bg_button_pane_cp020

0xce5f,	// (0x00048c28) main_cset_slider_pane_g7_ParamLimits

0xce5f,	// (0x00048c28) main_cset_slider_pane_g7

0xce6b,	// (0x00048c34) main_cset_slider_pane_g8_ParamLimits

0xce6b,	// (0x00048c34) main_cset_slider_pane_g8

0x8dc4,	// (0x00044b8d) main_cset_slider_pane_g9_ParamLimits

0x8dc4,	// (0x00044b8d) main_cset_slider_pane_g9

0x8dd0,	// (0x00044b99) main_cset_slider_pane_g10_ParamLimits

0x8dd0,	// (0x00044b99) main_cset_slider_pane_g10

0x8ddc,	// (0x00044ba5) main_cset_slider_pane_g11_ParamLimits

0x8ddc,	// (0x00044ba5) main_cset_slider_pane_g11

0x8de8,	// (0x00044bb1) main_cset_slider_pane_g12_ParamLimits

0x8de8,	// (0x00044bb1) main_cset_slider_pane_g12

0x8df4,	// (0x00044bbd) main_cset_slider_pane_g13_ParamLimits

0x8df4,	// (0x00044bbd) main_cset_slider_pane_g13

0x8e00,	// (0x00044bc9) main_cset_slider_pane_g14_ParamLimits

0x8e00,	// (0x00044bc9) main_cset_slider_pane_g14

0x8e0c,	// (0x00044bd5) main_cset_slider_pane_g15_ParamLimits

0x8e0c,	// (0x00044bd5) main_cset_slider_pane_g15

0xceab,	// (0x00048c74) main_cset_slider_pane_t14_ParamLimits

0xceab,	// (0x00048c74) main_cset_slider_pane_t14

0xcee4,	// (0x00048cad) main_cset_slider_pane_t15_ParamLimits

0xcee4,	// (0x00048cad) main_cset_slider_pane_t15

0x92dd,	// (0x000450a6) aid_cam4_burst_size_cell_ParamLimits

0x92dd,	// (0x000450a6) aid_cam4_burst_size_cell

0x92fd,	// (0x000450c6) grid_cam4_burst_pane_ParamLimits

0x92fd,	// (0x000450c6) grid_cam4_burst_pane

0x9323,	// (0x000450ec) linegrid_cam4_burst_pane_ParamLimits

0x9323,	// (0x000450ec) linegrid_cam4_burst_pane

0x9345,	// (0x0004510e) scroll_pane_cp30_ParamLimits

0x9345,	// (0x0004510e) scroll_pane_cp30

0x9351,	// (0x0004511a) cell_cam4_burst_pane_ParamLimits

0x9351,	// (0x0004511a) cell_cam4_burst_pane

0xd037,	// (0x00048e00) linegrid_cam4_burst_pane_g1_ParamLimits

0xd037,	// (0x00048e00) linegrid_cam4_burst_pane_g1

0x9398,	// (0x00045161) linegrid_cam4_burst_pane_g2_ParamLimits

0x9398,	// (0x00045161) linegrid_cam4_burst_pane_g2

0xd044,	// (0x00048e0d) linegrid_cam4_burst_pane_g3_ParamLimits

0xd044,	// (0x00048e0d) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x0004b79a) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x0004b79a) linegrid_cam4_burst_pane_g

0x93a9,	// (0x00045172) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x93a9,	// (0x00045172) linegrid_cam4_burst_pane_g3_copy1

0xd051,	// (0x00048e1a) linegrid_cam4_burst_pane_g4_ParamLimits

0xd051,	// (0x00048e1a) linegrid_cam4_burst_pane_g4

0x93c3,	// (0x0004518c) linegrid_cam4_burst_pane_g5_ParamLimits

0x93c3,	// (0x0004518c) linegrid_cam4_burst_pane_g5

0x93d4,	// (0x0004519d) linegrid_cam4_burst_pane_g6_ParamLimits

0x93d4,	// (0x0004519d) linegrid_cam4_burst_pane_g6

0xd05e,	// (0x00048e27) linegrid_cam4_burst_pane_g7_ParamLimits

0xd05e,	// (0x00048e27) linegrid_cam4_burst_pane_g7

0x93e5,	// (0x000451ae) cell_cam4_burst_pane_g1

0xd077,	// (0x00048e40) main_cam5_pane_t1_ParamLimits

0xd077,	// (0x00048e40) main_cam5_pane_t1

0xd089,	// (0x00048e52) main_cam5_pane_t2_ParamLimits

0xd089,	// (0x00048e52) main_cam5_pane_t2

0xd09b,	// (0x00048e64) main_cam5_pane_t3_ParamLimits

0xd09b,	// (0x00048e64) main_cam5_pane_t3

0xd0ad,	// (0x00048e76) main_cam5_pane_t4_ParamLimits

0xd0ad,	// (0x00048e76) main_cam5_pane_t4

0xd0c3,	// (0x00048e8c) main_cam5_pane_t5_ParamLimits

0xd0c3,	// (0x00048e8c) main_cam5_pane_t5

0xd0d5,	// (0x00048e9e) main_cam5_pane_t6_ParamLimits

0xd0d5,	// (0x00048e9e) main_cam5_pane_t6

0xd0e7,	// (0x00048eb0) main_cam5_pane_t7_ParamLimits

0xd0e7,	// (0x00048eb0) main_cam5_pane_t7

0xd0f9,	// (0x00048ec2) main_cam5_pane_t8_ParamLimits

0xd0f9,	// (0x00048ec2) main_cam5_pane_t8

0xd115,	// (0x00048ede) main_cam5_pane_t9_ParamLimits

0xd115,	// (0x00048ede) main_cam5_pane_t9

0xd127,	// (0x00048ef0) main_cam5_pane_t10_ParamLimits

0xd127,	// (0x00048ef0) main_cam5_pane_t10

0xd139,	// (0x00048f02) main_cam5_pane_t11_ParamLimits

0xd139,	// (0x00048f02) main_cam5_pane_t11

0xd14b,	// (0x00048f14) main_cam5_pane_t12_ParamLimits

0xd14b,	// (0x00048f14) main_cam5_pane_t12

0xd160,	// (0x00048f29) main_cam5_pane_t13_ParamLimits

0xd160,	// (0x00048f29) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x0004b7a6) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x0004b7a6) main_cam5_pane_t

0x365e,	// (0x0003f427) popup_scut_keymap_window_ParamLimits

0x365e,	// (0x0003f427) popup_scut_keymap_window

0x93fa,	// (0x000451c3) aid_size_cell_brow_shortcut

0x0f9a,	// (0x0003cd63) bg_popup_window_pane_cp010

0x9406,	// (0x000451cf) grid_scut_pane

0x9410,	// (0x000451d9) cell_scut_pane_ParamLimits

0x9410,	// (0x000451d9) cell_scut_pane

0x9425,	// (0x000451ee) cell_scut_pane_g1

0xd17d,	// (0x00048f46) cell_scut_pane_t1

0xd18c,	// (0x00048f55) cell_scut_pane_t2

0x942e,	// (0x000451f7) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x0004b7c1) cell_scut_pane_t

0x7751,	// (0x0004351a) main_mup3_pane_g8_ParamLimits

0x7751,	// (0x0004351a) main_mup3_pane_g8

0x8894,	// (0x0004465d) area_vitu2_query_pane_ParamLimits

0x8894,	// (0x0004465d) area_vitu2_query_pane

0x2e0e,	// (0x0003ebd7) input_focus_pane_cp08

0xd19b,	// (0x00048f64) area_vitu2_query_pane_g1

0x2f08,	// (0x0003ecd1) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x0004b7c8) area_vitu2_query_pane_g

0x943c,	// (0x00045205) area_vitu2_query_pane_t1_ParamLimits

0x943c,	// (0x00045205) area_vitu2_query_pane_t1

0x944e,	// (0x00045217) area_vitu2_query_pane_t2_ParamLimits

0x944e,	// (0x00045217) area_vitu2_query_pane_t2

0x2f17,	// (0x0003ece0) area_vitu2_query_pane_t3_ParamLimits

0x2f17,	// (0x0003ece0) area_vitu2_query_pane_t3

0xd1a7,	// (0x00048f70) area_vitu2_query_pane_t4_ParamLimits

0xd1a7,	// (0x00048f70) area_vitu2_query_pane_t4

0xd1cf,	// (0x00048f98) area_vitu2_query_pane_t5_ParamLimits

0xd1cf,	// (0x00048f98) area_vitu2_query_pane_t5

0xd1f7,	// (0x00048fc0) area_vitu2_query_pane_t6_ParamLimits

0xd1f7,	// (0x00048fc0) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x0004b7cd) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x0004b7cd) area_vitu2_query_pane_t

0x9460,	// (0x00045229) bg_button_pane_cp018

0x946c,	// (0x00045235) bg_button_pane_cp021

0x2f3f,	// (0x0003ed08) bg_button_pane_cp022

0x2f5e,	// (0x0003ed27) input_focus_pane_cp09

0x539f,	// (0x00041168) aid_size_touch_mv_arrow_left

0x1842,	// (0x0003d60b) aid_size_touch_mv_arrow_right

0x8e24,	// (0x00044bed) main_cset_slider_pane_g16_ParamLimits

0x8e24,	// (0x00044bed) main_cset_slider_pane_g16

0x8e30,	// (0x00044bf9) main_cset_slider_pane_g17_ParamLimits

0x8e30,	// (0x00044bf9) main_cset_slider_pane_g17

0x93e5,	// (0x000451ae) cell_cam4_burst_pane_g1_ParamLimits

0x0659,	// (0x0003c422) compa_mode_pane

0x8ff9,	// (0x00044dc2) popup_vtel_slider_window_g3_ParamLimits

0x8ff9,	// (0x00044dc2) popup_vtel_slider_window_g3

0x9010,	// (0x00044dd9) popup_vtel_slider_window_g4_ParamLimits

0x9010,	// (0x00044dd9) popup_vtel_slider_window_g4

0x9027,	// (0x00044df0) popup_vtel_slider_window_t1_ParamLimits

0x9027,	// (0x00044df0) popup_vtel_slider_window_t1

0x0659,	// (0x0003c422) main_cl_pane

0xbefc,	// (0x00047cc5) popup_imed_adjust2_window_ParamLimits

0x1cd4,	// (0x0003da9d) bg_tb_trans_pane_cp05_ParamLimits

0xc87f,	// (0x00048648) popup_imed_adjust2_window_g1_ParamLimits

0xc88e,	// (0x00048657) popup_imed_adjust2_window_g2_ParamLimits

0xc88e,	// (0x00048657) popup_imed_adjust2_window_g2

0xc89a,	// (0x00048663) popup_imed_adjust2_window_g3_ParamLimits

0xc89a,	// (0x00048663) popup_imed_adjust2_window_g3

0x0002,

0xf76b,	// (0x0004b534) popup_imed_adjust2_window_g_ParamLimits

0xf76b,	// (0x0004b534) popup_imed_adjust2_window_g

0xc8a6,	// (0x0004866f) popup_imed_adjust2_window_t1_ParamLimits

0xc8be,	// (0x00048687) slider_imed_adjust_pane_ParamLimits

0xc8d2,	// (0x0004869b) slider_imed_adjust_pane_g1_ParamLimits

0xc8e2,	// (0x000486ab) slider_imed_adjust_pane_g2_ParamLimits

0xc8f2,	// (0x000486bb) slider_imed_adjust_pane_g3_ParamLimits

0xc903,	// (0x000486cc) slider_imed_adjust_pane_g4_ParamLimits

0xf772,	// (0x0004b53b) slider_imed_adjust_pane_g_ParamLimits

0x866a,	// (0x00044433) aid_touch_area_cam4_ParamLimits

0x866a,	// (0x00044433) aid_touch_area_cam4

0xee8b,	// (0x0004ac54) battery_pane_cp01

0x8702,	// (0x000444cb) main_camera4_pane_g6_ParamLimits

0x8702,	// (0x000444cb) main_camera4_pane_g6

0x8723,	// (0x000444ec) main_camera4_pane_t2_ParamLimits

0x8723,	// (0x000444ec) main_camera4_pane_t2

0x0001,

0xf879,	// (0x0004b642) main_camera4_pane_t_ParamLimits

0xf879,	// (0x0004b642) main_camera4_pane_t

0x8751,	// (0x0004451a) aid_touch_area_vid4_ParamLimits

0x8751,	// (0x0004451a) aid_touch_area_vid4

0x8793,	// (0x0004455c) main_video4_pane_g5_ParamLimits

0x8793,	// (0x0004455c) main_video4_pane_g5

0x87b4,	// (0x0004457d) vid4_progress_pane_ParamLimits

0x87b4,	// (0x0004457d) vid4_progress_pane

0xce77,	// (0x00048c40) main_cset_slider_pane_g18_ParamLimits

0xce77,	// (0x00048c40) main_cset_slider_pane_g18

0xd06b,	// (0x00048e34) cell_cam4_burst_pane_g2_ParamLimits

0xd06b,	// (0x00048e34) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x0004b7a1) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x0004b7a1) cell_cam4_burst_pane_g

0x0dcd,	// (0x0003cb96) bg_cl_pane_ParamLimits

0x0dcd,	// (0x0003cb96) bg_cl_pane

0x9478,	// (0x00045241) cl_header_pane_ParamLimits

0x9478,	// (0x00045241) cl_header_pane

0x948c,	// (0x00045255) cl_listscroll_pane_ParamLimits

0x948c,	// (0x00045255) cl_listscroll_pane

0xd243,	// (0x0004900c) bg_cl_pane_g1

0xd24b,	// (0x00049014) bg_cl_pane_g2

0xd253,	// (0x0004901c) bg_cl_pane_g3

0xd25b,	// (0x00049024) bg_cl_pane_g4

0xd263,	// (0x0004902c) bg_cl_pane_g5

0xd26b,	// (0x00049034) bg_cl_pane_g6

0xd273,	// (0x0004903c) bg_cl_pane_g7

0xd27b,	// (0x00049044) bg_cl_pane_g8

0xd283,	// (0x0004904c) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x0004b7dc) bg_cl_pane_g

0x949c,	// (0x00045265) aid_height_cl_leading_ParamLimits

0x949c,	// (0x00045265) aid_height_cl_leading

0x94a8,	// (0x00045271) aid_height_cl_text_ParamLimits

0x94a8,	// (0x00045271) aid_height_cl_text

0x1a5e,	// (0x0003d827) bg_cl_header_pane_ParamLimits

0x1a5e,	// (0x0003d827) bg_cl_header_pane

0x94c7,	// (0x00045290) cl_header_pane_g1_ParamLimits

0x94c7,	// (0x00045290) cl_header_pane_g1

0x94dd,	// (0x000452a6) cl_header_pane_t1_ParamLimits

0x94dd,	// (0x000452a6) cl_header_pane_t1

0xd28b,	// (0x00049054) cl_list_pane

0xd294,	// (0x0004905d) hc_scroll_pane_cp01

0x1219,	// (0x0003cfe2) bg_cl_header_pane_g1

0xcd1e,	// (0x00048ae7) bg_cl_header_pane_g2

0x1239,	// (0x0003d002) bg_cl_header_pane_g3

0xcd2e,	// (0x00048af7) bg_cl_header_pane_g4

0xcd26,	// (0x00048aef) bg_cl_header_pane_g5

0xcf79,	// (0x00048d42) bg_cl_header_pane_g6

0xcd46,	// (0x00048b0f) bg_cl_header_pane_g7

0xcd4e,	// (0x00048b17) bg_cl_header_pane_g8

0xcd3e,	// (0x00048b07) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x0004b7ef) bg_cl_header_pane_g

0x94f6,	// (0x000452bf) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x94f6,	// (0x000452bf) hc_cl_list_double_graphic_heading_pane

0x9506,	// (0x000452cf) hc_cl_list_single_graphic_pane_ParamLimits

0x9506,	// (0x000452cf) hc_cl_list_single_graphic_pane

0x9519,	// (0x000452e2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9519,	// (0x000452e2) hc_cl_list_single_graphic_pane_g1

0x9525,	// (0x000452ee) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9525,	// (0x000452ee) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x0004b802) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x0004b802) hc_cl_list_single_graphic_pane_g

0x9539,	// (0x00045302) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9539,	// (0x00045302) hc_cl_list_single_graphic_pane_t1

0x9519,	// (0x000452e2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9519,	// (0x000452e2) hc_cl_list_double_graphic_heading_pane_g1

0x954e,	// (0x00045317) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x954e,	// (0x00045317) hc_cl_list_double_graphic_heading_pane_g2

0x9562,	// (0x0004532b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9562,	// (0x0004532b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x0004b807) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x0004b807) hc_cl_list_double_graphic_heading_pane_g

0x9576,	// (0x0004533f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9576,	// (0x0004533f) hc_cl_list_double_graphic_heading_pane_t1

0x958b,	// (0x00045354) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x958b,	// (0x00045354) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x0004b80e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x0004b80e) hc_cl_list_double_graphic_heading_pane_t

0xefb2,	// (0x0004ad7b) vid4_progress_pane_g1

0xefc1,	// (0x0004ad8a) vid4_progress_pane_g2

0xefd0,	// (0x0004ad99) vid4_progress_pane_g3

0xefdf,	// (0x0004ada8) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x0004b813) vid4_progress_pane_g

0xefeb,	// (0x0004adb4) vid4_progress_pane_t1

0xf001,	// (0x0004adca) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x0004b81e) vid4_progress_pane_t

0xf02b,	// (0x0004adf4) wait_bar_pane_cp07

0xc1aa,	// (0x00047f73) blid_firmament_pane_ParamLimits

0xc1eb,	// (0x00047fb4) popup_blid_sat_info2_window_g1

0xc20f,	// (0x00047fd8) popup_blid_sat_info2_window_t3

0xc21d,	// (0x00047fe6) popup_blid_sat_info2_window_t4

0xc22b,	// (0x00047ff4) popup_blid_sat_info2_window_t5

0xc239,	// (0x00048002) popup_blid_sat_info2_window_t6

0xc249,	// (0x00048012) popup_blid_sat_info2_window_t7

0xc257,	// (0x00048020) popup_blid_sat_info2_window_t8

0xc265,	// (0x0004802e) popup_blid_sat_info2_window_t9

0xc273,	// (0x0004803c) popup_blid_sat_info2_window_t10

0xc32e,	// (0x000480f7) aid_firma_cardinal_ParamLimits

0xc342,	// (0x0004810b) blid_firmament_pane_t1_ParamLimits

0xc359,	// (0x00048122) blid_firmament_pane_t2_ParamLimits

0xc370,	// (0x00048139) blid_firmament_pane_t3_ParamLimits

0xc387,	// (0x00048150) blid_firmament_pane_t4_ParamLimits

0xf664,	// (0x0004b42d) blid_firmament_pane_t_ParamLimits

0xc39e,	// (0x00048167) blid_sat_info_pane_ParamLimits

0x1a5e,	// (0x0003d827) main_cam_set_pane_ParamLimits

0x7f03,	// (0x00043ccc) aid_size_cell_colour_35_ParamLimits

0x7f23,	// (0x00043cec) aid_size_cell_colour_112_ParamLimits

0x7f43,	// (0x00043d0c) aid_size_cell_effect_ParamLimits

0x1cd4,	// (0x0003da9d) bg_tb_trans_pane_cp02_ParamLimits

0x146b,	// (0x0003d234) heading_imed_pane_ParamLimits

0x7f63,	// (0x00043d2c) listscroll_imed_pane_ParamLimits

0x6251,	// (0x0004201a) popup_call2_audio_first_window_g5_ParamLimits

0x6251,	// (0x0004201a) popup_call2_audio_first_window_g5

0x8335,	// (0x000440fe) aid_size_touch_image3_arrow_left_ParamLimits

0x8335,	// (0x000440fe) aid_size_touch_image3_arrow_left

0x8355,	// (0x0004411e) aid_size_touch_image3_arrow_right_ParamLimits

0x8355,	// (0x0004411e) aid_size_touch_image3_arrow_right

0xf016,	// (0x0004addf) vid4_progress_pane_t3

0x80ec,	// (0x00043eb5) main_hwr_training_symbol_option_pane_ParamLimits

0x80ec,	// (0x00043eb5) main_hwr_training_symbol_option_pane

0xcaac,	// (0x00048875) popup_hwr_training_preview_window_ParamLimits

0xcaac,	// (0x00048875) popup_hwr_training_preview_window

0x8108,	// (0x00043ed1) hwr_training_navi_pane_g5_ParamLimits

0x8108,	// (0x00043ed1) hwr_training_navi_pane_g5

0xcd0c,	// (0x00048ad5) popup_char_count_window

0x1a5e,	// (0x0003d827) bg_popup_sub_pane_cp20_ParamLimits

0x9134,	// (0x00044efd) list_vitu2_match_list_pane_ParamLimits

0x9143,	// (0x00044f0c) vitu2_page_scroll_pane_ParamLimits

0x9143,	// (0x00044f0c) vitu2_page_scroll_pane

0xd2c8,	// (0x00049091) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd2c8,	// (0x00049091) list_single_hwr_training_symbol_option_pane

0xd2db,	// (0x000490a4) list_single_hwr_training_symbol_option_pane_g1

0xd2e3,	// (0x000490ac) list_single_hwr_training_symbol_option_pane_t1

0xd2f1,	// (0x000490ba) bg_button_pane_cp023

0xd2fa,	// (0x000490c3) bg_button_pane_cp024

0x95a9,	// (0x00045372) vitu2_page_scroll_pane_g1

0x95b1,	// (0x0004537a) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x0004b825) vitu2_page_scroll_pane_g

0x95b9,	// (0x00045382) vitu2_page_scroll_pane_t1

0xc3cd,	// (0x00048196) popup_char_count_window_g1

0xd32d,	// (0x000490f6) popup_char_count_window_g2

0xd336,	// (0x000490ff) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x0004b82a) popup_char_count_window_g

0xd33f,	// (0x00049108) popup_char_count_window_t1

0x0659,	// (0x0003c422) main_vded2_pane

0xc86d,	// (0x00048636) aid_size_cell_imed_line

0xc877,	// (0x00048640) grid_imed_line_width_pane

0xef20,	// (0x0004ace9) vid4_indicators_pane_g4

0xd34d,	// (0x00049116) cell_imed_line_width_pane_ParamLimits

0xd34d,	// (0x00049116) cell_imed_line_width_pane

0xd35f,	// (0x00049128) cell_imed_line_width_pane_g1

0xd368,	// (0x00049131) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x0004b831) cell_imed_line_width_pane_g

0x95c8,	// (0x00045391) main_vded2_pane_g1_ParamLimits

0x95c8,	// (0x00045391) main_vded2_pane_g1

0x95de,	// (0x000453a7) main_vded2_pane_g2_ParamLimits

0x95de,	// (0x000453a7) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x0004b836) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x0004b836) main_vded2_pane_g

0x95ee,	// (0x000453b7) vded2_slider_pane_ParamLimits

0x95ee,	// (0x000453b7) vded2_slider_pane

0x9601,	// (0x000453ca) aid_size_touch_vded2_end

0x9609,	// (0x000453d2) aid_size_touch_vded2_playhead

0x9611,	// (0x000453da) aid_size_touch_vded2_start

0x9619,	// (0x000453e2) vded2_slider_bg_pane

0x9622,	// (0x000453eb) vded2_slider_pane_g1

0x962b,	// (0x000453f4) vded2_slider_pane_g2

0x9633,	// (0x000453fc) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x0004b83b) vded2_slider_pane_g

0x963c,	// (0x00045405) vded2_slider_bg_pane_g1

0x9645,	// (0x0004540e) vded2_slider_bg_pane_g2

0x964e,	// (0x00045417) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x0004b842) vded2_slider_bg_pane_g

0x5661,	// (0x0004142a) aid_postcard_touch_down_pane_ParamLimits

0x5661,	// (0x0004142a) aid_postcard_touch_down_pane

0x5673,	// (0x0004143c) aid_postcard_touch_up_pane_ParamLimits

0x5673,	// (0x0004143c) aid_postcard_touch_up_pane

0x0659,	// (0x0003c422) main_blid2_pane

0xbee4,	// (0x00047cad) popup_blid2_search_window

0x0659,	// (0x0003c422) blid2_gps_pane

0x0659,	// (0x0003c422) blid2_navig_pane

0x0659,	// (0x0003c422) blid2_search_pane

0x0659,	// (0x0003c422) blid2_tripm_pane

0x9657,	// (0x00045420) blid2_search_pane_g1_ParamLimits

0x9657,	// (0x00045420) blid2_search_pane_g1

0x966b,	// (0x00045434) blid2_search_pane_t1_ParamLimits

0x966b,	// (0x00045434) blid2_search_pane_t1

0x967d,	// (0x00045446) aid_size_cell_blid2_gps_ParamLimits

0x967d,	// (0x00045446) aid_size_cell_blid2_gps

0x9695,	// (0x0004545e) blid2_gps_pane_g1_ParamLimits

0x9695,	// (0x0004545e) blid2_gps_pane_g1

0x96a9,	// (0x00045472) grid_blid2_satellite_pane_ParamLimits

0x96a9,	// (0x00045472) grid_blid2_satellite_pane

0x96bd,	// (0x00045486) blid2_navig_pane_g1_ParamLimits

0x96bd,	// (0x00045486) blid2_navig_pane_g1

0x96c9,	// (0x00045492) blid2_navig_pane_t1_ParamLimits

0x96c9,	// (0x00045492) blid2_navig_pane_t1

0x96e2,	// (0x000454ab) blid2_navig_pane_t2_ParamLimits

0x96e2,	// (0x000454ab) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x0004b849) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x0004b849) blid2_navig_pane_t

0x96fb,	// (0x000454c4) blid2_navig_ring_pane_ParamLimits

0x96fb,	// (0x000454c4) blid2_navig_ring_pane

0x9710,	// (0x000454d9) blid2_speed_pane_ParamLimits

0x9710,	// (0x000454d9) blid2_speed_pane

0x971c,	// (0x000454e5) blid2_tripm_pane_g1_ParamLimits

0x971c,	// (0x000454e5) blid2_tripm_pane_g1

0x9731,	// (0x000454fa) blid2_tripm_pane_g2_ParamLimits

0x9731,	// (0x000454fa) blid2_tripm_pane_g2

0x9745,	// (0x0004550e) blid2_tripm_pane_g3_ParamLimits

0x9745,	// (0x0004550e) blid2_tripm_pane_g3

0x9759,	// (0x00045522) blid2_tripm_pane_g4_ParamLimits

0x9759,	// (0x00045522) blid2_tripm_pane_g4

0x976d,	// (0x00045536) blid2_tripm_pane_g5_ParamLimits

0x976d,	// (0x00045536) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x0004b84e) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x0004b84e) blid2_tripm_pane_g

0x978f,	// (0x00045558) blid2_tripm_pane_t1_ParamLimits

0x978f,	// (0x00045558) blid2_tripm_pane_t1

0x97a6,	// (0x0004556f) blid2_tripm_pane_t2_ParamLimits

0x97a6,	// (0x0004556f) blid2_tripm_pane_t2

0x97bd,	// (0x00045586) blid2_tripm_pane_t3_ParamLimits

0x97bd,	// (0x00045586) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x0004b85b) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x0004b85b) blid2_tripm_pane_t

0x9800,	// (0x000455c9) cell_blid2_satellite_pane_ParamLimits

0x9800,	// (0x000455c9) cell_blid2_satellite_pane

0x9818,	// (0x000455e1) cell_blid2_satellite_pane_g1

0xd370,	// (0x00049139) cell_blid2_satellite_pane_t1

0x101b,	// (0x0003cde4) blid2_speed_pane_g1

0xd37e,	// (0x00049147) blid2_speed_pane_t1

0xd38c,	// (0x00049155) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x0004b864) blid2_speed_pane_t

0x101b,	// (0x0003cde4) blid2_navig_ring_pane_g1

0x9821,	// (0x000455ea) blid2_navig_ring_pane_g2

0x9829,	// (0x000455f2) blid2_navig_ring_pane_g3

0x9831,	// (0x000455fa) blid2_navig_ring_pane_g4

0x9839,	// (0x00045602) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x0004b869) blid2_navig_ring_pane_g

0x0659,	// (0x0003c422) bg_popup_window_pane_cp011

0xd39a,	// (0x00049163) popup_blid2_search_window_g1

0xd3a2,	// (0x0004916b) popup_blid2_search_window_t1

0xd3b0,	// (0x00049179) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x0004b874) popup_blid2_search_window_t

0x1128,	// (0x0003cef1) main_browser_pane_g1

0x0dcd,	// (0x0003cb96) main_browser_pane_ParamLimits

0x1a5e,	// (0x0003d827) bg_button_pane_cp011_ParamLimits

0x8a62,	// (0x0004482b) cell_vitu2_function_pane_g1_ParamLimits

0x1cd4,	// (0x0003da9d) bg_popup_sub_pane_cp22_ParamLimits

0x2e0e,	// (0x0003ebd7) input_focus_pane_cp08_ParamLimits

0x929e,	// (0x00045067) popup_vitu2_query_button_pane_ParamLimits

0x929e,	// (0x00045067) popup_vitu2_query_button_pane

0x2e29,	// (0x0003ebf2) popup_vitu2_query_input_button_pane

0xcfc1,	// (0x00048d8a) popup_vitu2_query_window_g1_ParamLimits

0x2e31,	// (0x0003ebfa) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x0004b775) popup_vitu2_query_window_g_ParamLimits

0x0659,	// (0x0003c422) bg_button_pane_cp026

0x9841,	// (0x0004560a) popup_vitu2_query_input_button_pane_g1

0x0659,	// (0x0003c422) bg_button_pane_cp025

0xd3be,	// (0x00049187) popup_vitu2_query_button_pane_t1

0x746d,	// (0x00043236) main_mp3_pane_t6

0x747b,	// (0x00043244) popup_slider_window_cp01

0xeea5,	// (0x0004ac6e) cam4_battery_pane

0xeea5,	// (0x0004ac6e) cam4_battery_pane_cp02

0xeea5,	// (0x0004ac6e) cam4_battery_pane_cp01

0xeea5,	// (0x0004ac6e) cam4_battery_pane_cp03

0x101b,	// (0x0003cde4) cam4_battery_pane_g1

0xd3cc,	// (0x00049195) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x0004b879) cam4_battery_pane_g

0xc281,	// (0x0004804a) popup_blid_sat_info2_window_t11

0x539f,	// (0x00041168) aid_size_touch_mv_arrow_left_ParamLimits

0x1842,	// (0x0003d60b) aid_size_touch_mv_arrow_right_ParamLimits

0x189b,	// (0x0003d664) navi_pane_g1_ParamLimits

0x18a7,	// (0x0003d670) navi_pane_g2_ParamLimits

0x53c3,	// (0x0004118c) navi_pane_g3_ParamLimits

0xf365,	// (0x0004b12e) navi_pane_g_ParamLimits

0x53e0,	// (0x000411a9) navi_pane_mv_t1_ParamLimits

0x7f6f,	// (0x00043d38) grid_imed_effect_pane_ParamLimits

0x428a,	// (0x00040053) aid_placing_vt_slider_lsc

0x106a,	// (0x0003ce33) aid_placing_vt_slider_prt

0x1a5e,	// (0x0003d827) bg_tb_trans_pane_cp01_ParamLimits

0xc4e5,	// (0x000482ae) popup_image_details_window_g1_ParamLimits

0xc4f8,	// (0x000482c1) popup_image_details_window_g2_ParamLimits

0xc50d,	// (0x000482d6) popup_image_details_window_g3_ParamLimits

0xc50d,	// (0x000482d6) popup_image_details_window_g3

0xf6a4,	// (0x0004b46d) popup_image_details_window_g_ParamLimits

0xc521,	// (0x000482ea) popup_image_details_window_t1_ParamLimits

0xc533,	// (0x000482fc) popup_image_details_window_t2_ParamLimits

0xc54c,	// (0x00048315) popup_image_details_window_t3_ParamLimits

0xc560,	// (0x00048329) popup_image_details_window_t4_ParamLimits

0xc57b,	// (0x00048344) popup_image_details_window_t5_ParamLimits

0xf6ab,	// (0x0004b474) popup_image_details_window_t_ParamLimits

0x94b4,	// (0x0004527d) cl_header_name_pane_ParamLimits

0x94b4,	// (0x0004527d) cl_header_name_pane

0x9849,	// (0x00045612) cl_header_name_pane_t1_ParamLimits

0x9849,	// (0x00045612) cl_header_name_pane_t1

0x986a,	// (0x00045633) cl_header_name_pane_t2_ParamLimits

0x986a,	// (0x00045633) cl_header_name_pane_t2

0x98ac,	// (0x00045675) cl_header_name_pane_t3_ParamLimits

0x98ac,	// (0x00045675) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x0004b87e) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x0004b87e) cl_header_name_pane_t

0x1934,	// (0x0003d6fd) navi_pane_mv_g2_ParamLimits

0xccd7,	// (0x00048aa0) field_vitu2_entry_pane_g1_ParamLimits

0xcce3,	// (0x00048aac) field_vitu2_entry_pane_g2_ParamLimits

0x1ce2,	// (0x0003daab) field_vitu2_entry_pane_g3_ParamLimits

0x1ce2,	// (0x0003daab) field_vitu2_entry_pane_g3

0xf8ab,	// (0x0004b674) field_vitu2_entry_pane_g_ParamLimits

0x89de,	// (0x000447a7) cell_vitu2_itu_pane_g1_ParamLimits

0x89f6,	// (0x000447bf) cell_vitu2_itu_pane_g2_ParamLimits

0x89f6,	// (0x000447bf) cell_vitu2_itu_pane_g2

0x0001,

0xf8b7,	// (0x0004b680) cell_vitu2_itu_pane_g_ParamLimits

0xf8b7,	// (0x0004b680) cell_vitu2_itu_pane_g

0x1a5e,	// (0x0003d827) bg_vkb2_func_pane_cp05_ParamLimits

0x1a5e,	// (0x0003d827) bg_vkb2_func_pane_cp05

0x1a5e,	// (0x0003d827) bg_vkb2_func_pane_cp03

0x1a5e,	// (0x0003d827) bg_vkb2_func_pane_cp04

0x1a5e,	// (0x0003d827) bg_vkb2_func_pane_cp10_ParamLimits

0x1a5e,	// (0x0003d827) bg_vkb2_func_pane_cp10

0x2f4e,	// (0x0003ed17) bg_vkb2_func_pane_cp08

0x9460,	// (0x00045229) bg_vkb2_func_pane_cp06

0x946c,	// (0x00045235) bg_vkb2_func_pane_cp07

0xd303,	// (0x000490cc) bg_vkb2_func_pane_cp11_ParamLimits

0xd303,	// (0x000490cc) bg_vkb2_func_pane_cp11

0xd318,	// (0x000490e1) bg_vkb2_func_pane_cp12_ParamLimits

0xd318,	// (0x000490e1) bg_vkb2_func_pane_cp12

0x0659,	// (0x0003c422) bg_vkb2_func_pane_cp09

0xcd1e,	// (0x00048ae7) bg_vkb2_func_pane_g1

0x1239,	// (0x0003d002) bg_vkb2_func_pane_g2

0xcd26,	// (0x00048aef) bg_vkb2_func_pane_g3

0xcd2e,	// (0x00048af7) bg_vkb2_func_pane_g4

0xcf79,	// (0x00048d42) bg_vkb2_func_pane_g5

0xcd46,	// (0x00048b0f) bg_vkb2_func_pane_g6

0xcd4e,	// (0x00048b17) bg_vkb2_func_pane_g7

0xcd3e,	// (0x00048b07) bg_vkb2_func_pane_g8

0x1219,	// (0x0003cfe2) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x0004b885) bg_vkb2_func_pane_g

0x977f,	// (0x00045548) blid2_tripm_pane_g6_ParamLimits

0x977f,	// (0x00045548) blid2_tripm_pane_g6

0xcbb9,	// (0x00048982) mp4_progress_pane_g1

0x97ee,	// (0x000455b7) blid2_tripm_values_pane_ParamLimits

0x97ee,	// (0x000455b7) blid2_tripm_values_pane

0x98dd,	// (0x000456a6) blid2_tripm_values_pane_t1

0x98eb,	// (0x000456b4) blid2_tripm_values_pane_t2

0x98f9,	// (0x000456c2) blid2_tripm_values_pane_t3

0x9907,	// (0x000456d0) blid2_tripm_values_pane_t4

0x9915,	// (0x000456de) blid2_tripm_values_pane_t5

0x9923,	// (0x000456ec) blid2_tripm_values_pane_t6

0x9931,	// (0x000456fa) blid2_tripm_values_pane_t7

0x993f,	// (0x00045708) blid2_tripm_values_pane_t8

0x994d,	// (0x00045716) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x0004b898) blid2_tripm_values_pane_t

0x42c4,	// (0x0004008d) call_video_pane_t1_ParamLimits

0x42de,	// (0x000400a7) call_video_pane_t2_ParamLimits

0xf1fc,	// (0x0004afc5) call_video_pane_t_ParamLimits

0x2c4e,	// (0x0003ea17) msg_header_pane_g1_ParamLimits

0x1b13,	// (0x0003d8dc) msg_header_pane_g2_ParamLimits

0x1b13,	// (0x0003d8dc) msg_header_pane_g2

0x0001,

0xf408,	// (0x0004b1d1) msg_header_pane_g_ParamLimits

0xf408,	// (0x0004b1d1) msg_header_pane_g

0x0dcd,	// (0x0003cb96) main_clock2_pane_ParamLimits

0x7c86,	// (0x00043a4f) grid_clock2_toolbar_pane_ParamLimits

0x7c86,	// (0x00043a4f) grid_clock2_toolbar_pane

0x7c86,	// (0x00043a4f) listscroll_clock2_pane_ParamLimits

0x7c86,	// (0x00043a4f) listscroll_clock2_pane

0x7d69,	// (0x00043b32) main_clock2_pane_t3_ParamLimits

0x7d69,	// (0x00043b32) main_clock2_pane_t3

0x7d8b,	// (0x00043b54) main_clock2_pane_t4_ParamLimits

0x7d8b,	// (0x00043b54) main_clock2_pane_t4

0xd3d6,	// (0x0004919f) cell_clock2_toolbar_pane

0xd3de,	// (0x000491a7) cell_clock2_toolbar_pane_cp01

0xd3de,	// (0x000491a7) cell_clock2_toolbar_pane_cp02

0xd3e6,	// (0x000491af) cell_clock2_toolbar_pane_cp03

0xd3ee,	// (0x000491b7) list_clock2_pane

0xd3f6,	// (0x000491bf) scroll_pane_cp10

0xd3fe,	// (0x000491c7) list_single_clock2_pane_ParamLimits

0xd3fe,	// (0x000491c7) list_single_clock2_pane

0x0f9a,	// (0x0003cd63) list_highlight_pane_cp08

0xd40b,	// (0x000491d4) list_single_clock2_pane_t1

0xd419,	// (0x000491e2) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x0004b8ab) list_single_clock2_pane_t

0x0659,	// (0x0003c422) bg_button_pane_cp10

0xd427,	// (0x000491f0) cell_clock2_toolbar_pane_g1

0x55f5,	// (0x000413be) aid_main_viewer_pane_g1_ParamLimits

0x55f5,	// (0x000413be) aid_main_viewer_pane_g1

0x5601,	// (0x000413ca) aid_main_viewer_pane_g2_ParamLimits

0x5601,	// (0x000413ca) aid_main_viewer_pane_g2

0x560d,	// (0x000413d6) aid_main_viewer_pane_g3_ParamLimits

0x560d,	// (0x000413d6) aid_main_viewer_pane_g3

0x561c,	// (0x000413e5) aid_main_viewer_pane_g4_ParamLimits

0x561c,	// (0x000413e5) aid_main_viewer_pane_g4

0x0003,

0xf419,	// (0x0004b1e2) aid_main_viewer_pane_g_ParamLimits

0xf419,	// (0x0004b1e2) aid_main_viewer_pane_g

0x1a5e,	// (0x0003d827) main_calc_pane_ParamLimits

0x6e70,	// (0x00042c39) main_dialer2_pane_ParamLimits

0x0659,	// (0x0003c422) main_cam6_pane

0x0659,	// (0x0003c422) main_vid6_pane

0x7c92,	// (0x00043a5b) listscroll_gen_pane_cp06_ParamLimits

0x7c92,	// (0x00043a5b) listscroll_gen_pane_cp06

0x7dac,	// (0x00043b75) main_clock2_pane_t5_ParamLimits

0x7dac,	// (0x00043b75) main_clock2_pane_t5

0x7e04,	// (0x00043bcd) aid_call2_pane_cp10_ParamLimits

0x7e16,	// (0x00043bdf) aid_call_pane_cp10_ParamLimits

0x1836,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1836,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7e28,	// (0x00043bf1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7e28,	// (0x00043bf1) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1836,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf760,	// (0x0004b529) popup_clock_analogue_window_cp10_g_ParamLimits

0x7e3a,	// (0x00043c03) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcc19,	// (0x000489e2) cell_dialer2_keypad_pane_g2_ParamLimits

0xcc19,	// (0x000489e2) cell_dialer2_keypad_pane_g2

0x0001,

0xf84a,	// (0x0004b613) cell_dialer2_keypad_pane_g_ParamLimits

0xf84a,	// (0x0004b613) cell_dialer2_keypad_pane_g

0x82fe,	// (0x000440c7) cell_dialer2_keypad_pane_t1

0x8d1e,	// (0x00044ae7) main_cset_text2_pane_ParamLimits

0x8d1e,	// (0x00044ae7) main_cset_text2_pane

0xd19b,	// (0x00048f64) area_vitu2_query_pane_g1_ParamLimits

0x2f08,	// (0x0003ecd1) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x0004b7c8) area_vitu2_query_pane_g_ParamLimits

0xd21f,	// (0x00048fe8) area_vitu2_query_pane_t7_ParamLimits

0xd21f,	// (0x00048fe8) area_vitu2_query_pane_t7

0x9460,	// (0x00045229) bg_button_pane_cp018_ParamLimits

0x946c,	// (0x00045235) bg_button_pane_cp021_ParamLimits

0x2f3f,	// (0x0003ed08) bg_button_pane_cp022_ParamLimits

0x2f4e,	// (0x0003ed17) bg_vkb2_func_pane_cp08_ParamLimits

0x9460,	// (0x00045229) bg_vkb2_func_pane_cp06_ParamLimits

0x946c,	// (0x00045235) bg_vkb2_func_pane_cp07_ParamLimits

0x2f5e,	// (0x0003ed27) input_focus_pane_cp09_ParamLimits

0xf03b,	// (0x0004ae04) cam6_autofocus_pane_ParamLimits

0xf03b,	// (0x0004ae04) cam6_autofocus_pane

0x995b,	// (0x00045724) cam6_image_uncrop_pane_ParamLimits

0x995b,	// (0x00045724) cam6_image_uncrop_pane

0x9969,	// (0x00045732) cam6_indi_pane_ParamLimits

0x9969,	// (0x00045732) cam6_indi_pane

0x997f,	// (0x00045748) cam6_mode_pane_ParamLimits

0x997f,	// (0x00045748) cam6_mode_pane

0x9991,	// (0x0004575a) cam6_timer_pane_ParamLimits

0x9991,	// (0x0004575a) cam6_timer_pane

0x999d,	// (0x00045766) cam6_zoom_pane_ParamLimits

0x999d,	// (0x00045766) cam6_zoom_pane

0x99aa,	// (0x00045773) cam6_mode_pane_g1_ParamLimits

0x99aa,	// (0x00045773) cam6_mode_pane_g1

0x99ba,	// (0x00045783) cam6_mode_pane_g2_ParamLimits

0x99ba,	// (0x00045783) cam6_mode_pane_g2

0x99ca,	// (0x00045793) cam6_mode_pane_g3_ParamLimits

0x99ca,	// (0x00045793) cam6_mode_pane_g3

0x99da,	// (0x000457a3) cam6_mode_pane_g4_ParamLimits

0x99da,	// (0x000457a3) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x0004b8b0) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x0004b8b0) cam6_mode_pane_g

0xc039,	// (0x00047e02) bg_tb_trans_pane_cp08_ParamLimits

0xc039,	// (0x00047e02) bg_tb_trans_pane_cp08

0xd42f,	// (0x000491f8) cam6_battery_pane_ParamLimits

0xd42f,	// (0x000491f8) cam6_battery_pane

0xd445,	// (0x0004920e) cam6_indi_pane_g1_ParamLimits

0xd445,	// (0x0004920e) cam6_indi_pane_g1

0xd457,	// (0x00049220) cam6_indi_pane_g2_ParamLimits

0xd457,	// (0x00049220) cam6_indi_pane_g2

0xd469,	// (0x00049232) cam6_indi_pane_g3_ParamLimits

0xd469,	// (0x00049232) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x0004b8b9) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x0004b8b9) cam6_indi_pane_g

0xd47b,	// (0x00049244) cam6_indi_pane_t1_ParamLimits

0xd47b,	// (0x00049244) cam6_indi_pane_t1

0x880e,	// (0x000445d7) cam6_autofocus_pane_g1

0x8816,	// (0x000445df) cam6_autofocus_pane_g2

0x881e,	// (0x000445e7) cam6_autofocus_pane_g3

0x8826,	// (0x000445ef) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x0004b8c0) cam6_autofocus_pane_g

0xd4a1,	// (0x0004926a) cam6_timer_pane_g1

0xd4a9,	// (0x00049272) cam6_timer_pane_t1

0xd4b7,	// (0x00049280) cam6_zoom_cont_pane

0xd4bf,	// (0x00049288) cam6_zoom_pane_g1

0xd4c8,	// (0x00049291) cam6_zoom_pane_g2

0x99ea,	// (0x000457b3) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x0004b8c9) cam6_zoom_pane_g

0x101b,	// (0x0003cde4) cam6_battery_pane_g1

0x101b,	// (0x0003cde4) cam6_battery_pane_g2

0x0001,

0xf3c9,	// (0x0004b192) cam6_battery_pane_g

0xd4bf,	// (0x00049288) cam6_zoom_cont_pane_g1

0xd4c8,	// (0x00049291) cam6_zoom_cont_pane_g2

0xd4d1,	// (0x0004929a) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x0004b8d0) cam6_zoom_cont_pane_g

0x9a08,	// (0x000457d1) cam6_mode_pane_cp_ParamLimits

0x9a08,	// (0x000457d1) cam6_mode_pane_cp

0x9a1a,	// (0x000457e3) cam6_zoom_pane_cp_ParamLimits

0x9a1a,	// (0x000457e3) cam6_zoom_pane_cp

0x9a26,	// (0x000457ef) vid6_image_uncrop_cif_pane_ParamLimits

0x9a26,	// (0x000457ef) vid6_image_uncrop_cif_pane

0x9a34,	// (0x000457fd) vid6_image_uncrop_nhd_pane_ParamLimits

0x9a34,	// (0x000457fd) vid6_image_uncrop_nhd_pane

0x9a41,	// (0x0004580a) vid6_image_uncrop_vga_pane_ParamLimits

0x9a41,	// (0x0004580a) vid6_image_uncrop_vga_pane

0x9a4e,	// (0x00045817) vid6_image_uncrop_wvga_pane_ParamLimits

0x9a4e,	// (0x00045817) vid6_image_uncrop_wvga_pane

0x9a5b,	// (0x00045824) vid6_indi_pane_ParamLimits

0x9a5b,	// (0x00045824) vid6_indi_pane

0xc039,	// (0x00047e02) bg_tb_trans_pane_cp09_ParamLimits

0xc039,	// (0x00047e02) bg_tb_trans_pane_cp09

0xd4e5,	// (0x000492ae) cam6_battery_pane_cp_ParamLimits

0xd4e5,	// (0x000492ae) cam6_battery_pane_cp

0xd4f1,	// (0x000492ba) vid6_indi_pane_g1_ParamLimits

0xd4f1,	// (0x000492ba) vid6_indi_pane_g1

0xd503,	// (0x000492cc) vid6_indi_pane_g2_ParamLimits

0xd503,	// (0x000492cc) vid6_indi_pane_g2

0xd515,	// (0x000492de) vid6_indi_pane_g3_ParamLimits

0xd515,	// (0x000492de) vid6_indi_pane_g3

0xd52a,	// (0x000492f3) vid6_indi_pane_g4_ParamLimits

0xd52a,	// (0x000492f3) vid6_indi_pane_g4

0xd53f,	// (0x00049308) vid6_indi_pane_g5_ParamLimits

0xd53f,	// (0x00049308) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x0004b8d7) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x0004b8d7) vid6_indi_pane_g

0xd559,	// (0x00049322) vid6_indi_pane_t1_ParamLimits

0xd559,	// (0x00049322) vid6_indi_pane_t1

0xd56f,	// (0x00049338) vid6_indi_pane_t2_ParamLimits

0xd56f,	// (0x00049338) vid6_indi_pane_t2

0xd597,	// (0x00049360) vid6_indi_pane_t3_ParamLimits

0xd597,	// (0x00049360) vid6_indi_pane_t3

0xd5bf,	// (0x00049388) vid6_indi_pane_t4_ParamLimits

0xd5bf,	// (0x00049388) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x0004b8e2) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x0004b8e2) vid6_indi_pane_t

0xd5e3,	// (0x000493ac) wait_bar_pane_cp08

0x9a72,	// (0x0004583b) main_cset_text2_pane_t1_ParamLimits

0x9a72,	// (0x0004583b) main_cset_text2_pane_t1

0x99f3,	// (0x000457bc) listscroll_gen_pane_cp06_t1_ParamLimits

0x99f3,	// (0x000457bc) listscroll_gen_pane_cp06_t1

0x0659,	// (0x0003c422) main_cam6_set_pane

0x0d57,	// (0x0003cb20) bg_tb_trans_pane_cp06_ParamLimits

0xeead,	// (0x0004ac76) cam4_indicators_pane_g1_ParamLimits

0xeebd,	// (0x0004ac86) cam4_indicators_pane_g2_ParamLimits

0xf887,	// (0x0004b650) cam4_indicators_pane_g_ParamLimits

0xeedd,	// (0x0004aca6) cam4_indicators_pane_t1_ParamLimits

0x1a5e,	// (0x0003d827) bg_tb_trans_pane_cp07_ParamLimits

0xeead,	// (0x0004ac76) vid4_indicators_pane_g1_ParamLimits

0xeeff,	// (0x0004acc8) vid4_indicators_pane_g2_ParamLimits

0xef0f,	// (0x0004acd8) vid4_indicators_pane_g3_ParamLimits

0xef20,	// (0x0004ace9) vid4_indicators_pane_g4_ParamLimits

0xf899,	// (0x0004b662) vid4_indicators_pane_g_ParamLimits

0xef3c,	// (0x0004ad05) vid4_indicators_pane_t1_ParamLimits

0xefb2,	// (0x0004ad7b) vid4_progress_pane_g1_ParamLimits

0xefc1,	// (0x0004ad8a) vid4_progress_pane_g2_ParamLimits

0xefd0,	// (0x0004ad99) vid4_progress_pane_g3_ParamLimits

0xefdf,	// (0x0004ada8) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x0004b813) vid4_progress_pane_g_ParamLimits

0xefeb,	// (0x0004adb4) vid4_progress_pane_t1_ParamLimits

0xf001,	// (0x0004adca) vid4_progress_pane_t2_ParamLimits

0xf016,	// (0x0004addf) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x0004b81e) vid4_progress_pane_t_ParamLimits

0xf02b,	// (0x0004adf4) wait_bar_pane_cp07_ParamLimits

0x9a8d,	// (0x00045856) main_cam6_set_pane_g2_ParamLimits

0x9a8d,	// (0x00045856) main_cam6_set_pane_g2

0x9aaf,	// (0x00045878) main_cset6_listscroll_pane_ParamLimits

0x9aaf,	// (0x00045878) main_cset6_listscroll_pane

0x9ac9,	// (0x00045892) main_cset6_slider_pane_ParamLimits

0x9ac9,	// (0x00045892) main_cset6_slider_pane

0x9adf,	// (0x000458a8) main_cset6_text2_pane_ParamLimits

0x9adf,	// (0x000458a8) main_cset6_text2_pane

0xd5f3,	// (0x000493bc) main_cset6_text_pane

0xce3a,	// (0x00048c03) main_cset_list_pane_copy1_ParamLimits

0xce3a,	// (0x00048c03) main_cset_list_pane_copy1

0xce4a,	// (0x00048c13) scroll_pane_cp028_copy1

0x9aed,	// (0x000458b6) cset_list_set_pane_copy1

0x9aff,	// (0x000458c8) aid_position_infowindow_above_copy1

0x9b07,	// (0x000458d0) aid_position_infowindow_below_copy1

0x2f82,	// (0x0003ed4b) cset_list_set_pane_g1_copy1

0x2f8a,	// (0x0003ed53) cset_list_set_pane_g3_copy1_ParamLimits

0x2f8a,	// (0x0003ed53) cset_list_set_pane_g3_copy1

0x2f99,	// (0x0003ed62) cset_list_set_pane_t1_copy1_ParamLimits

0x2f99,	// (0x0003ed62) cset_list_set_pane_t1_copy1

0x1a5e,	// (0x0003d827) list_highlight_pane_cp021_copy1_ParamLimits

0x1a5e,	// (0x0003d827) list_highlight_pane_cp021_copy1

0xd5fb,	// (0x000493c4) cset6_slider_pane_ParamLimits

0xd5fb,	// (0x000493c4) cset6_slider_pane

0xd627,	// (0x000493f0) main_cset6_slider_pane_g1_ParamLimits

0xd627,	// (0x000493f0) main_cset6_slider_pane_g1

0x9b0f,	// (0x000458d8) main_cset6_slider_pane_g2_ParamLimits

0x9b0f,	// (0x000458d8) main_cset6_slider_pane_g2

0xce5f,	// (0x00048c28) main_cset6_slider_pane_g3_ParamLimits

0xce5f,	// (0x00048c28) main_cset6_slider_pane_g3

0x8ddc,	// (0x00044ba5) main_cset6_slider_pane_g4_ParamLimits

0x8ddc,	// (0x00044ba5) main_cset6_slider_pane_g4

0x8e24,	// (0x00044bed) main_cset6_slider_pane_g5_ParamLimits

0x8e24,	// (0x00044bed) main_cset6_slider_pane_g5

0xce5f,	// (0x00048c28) main_cset6_slider_pane_g7_ParamLimits

0xce5f,	// (0x00048c28) main_cset6_slider_pane_g7

0xce6b,	// (0x00048c34) main_cset6_slider_pane_g8_ParamLimits

0xce6b,	// (0x00048c34) main_cset6_slider_pane_g8

0x8dc4,	// (0x00044b8d) main_cset6_slider_pane_g9_ParamLimits

0x8dc4,	// (0x00044b8d) main_cset6_slider_pane_g9

0x8dd0,	// (0x00044b99) main_cset6_slider_pane_g10_ParamLimits

0x8dd0,	// (0x00044b99) main_cset6_slider_pane_g10

0x8ddc,	// (0x00044ba5) main_cset6_slider_pane_g11_ParamLimits

0x8ddc,	// (0x00044ba5) main_cset6_slider_pane_g11

0x8de8,	// (0x00044bb1) main_cset6_slider_pane_g12_ParamLimits

0x8de8,	// (0x00044bb1) main_cset6_slider_pane_g12

0x8df4,	// (0x00044bbd) main_cset6_slider_pane_g13_ParamLimits

0x8df4,	// (0x00044bbd) main_cset6_slider_pane_g13

0x8e00,	// (0x00044bc9) main_cset6_slider_pane_g14_ParamLimits

0x8e00,	// (0x00044bc9) main_cset6_slider_pane_g14

0x9b37,	// (0x00045900) main_cset6_slider_pane_g15_ParamLimits

0x9b37,	// (0x00045900) main_cset6_slider_pane_g15

0x8e24,	// (0x00044bed) main_cset6_slider_pane_g16_ParamLimits

0x8e24,	// (0x00044bed) main_cset6_slider_pane_g16

0x8e30,	// (0x00044bf9) main_cset6_slider_pane_g17_ParamLimits

0x8e30,	// (0x00044bf9) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x0004b8eb) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x0004b8eb) main_cset6_slider_pane_g

0xd64f,	// (0x00049418) main_cset6_slider_pane_t1_ParamLimits

0xd64f,	// (0x00049418) main_cset6_slider_pane_t1

0xd690,	// (0x00049459) main_cset6_slider_pane_t2_ParamLimits

0xd690,	// (0x00049459) main_cset6_slider_pane_t2

0xd6bb,	// (0x00049484) main_cset6_slider_pane_t3_ParamLimits

0xd6bb,	// (0x00049484) main_cset6_slider_pane_t3

0x9b4f,	// (0x00045918) main_cset6_slider_pane_t4_ParamLimits

0x9b4f,	// (0x00045918) main_cset6_slider_pane_t4

0x9b7a,	// (0x00045943) main_cset6_slider_pane_t5_ParamLimits

0x9b7a,	// (0x00045943) main_cset6_slider_pane_t5

0xd6e6,	// (0x000494af) main_cset6_slider_pane_t7_ParamLimits

0xd6e6,	// (0x000494af) main_cset6_slider_pane_t7

0x9ba5,	// (0x0004596e) main_cset6_slider_pane_t8_ParamLimits

0x9ba5,	// (0x0004596e) main_cset6_slider_pane_t8

0x9bc9,	// (0x00045992) main_cset6_slider_pane_t9_ParamLimits

0x9bc9,	// (0x00045992) main_cset6_slider_pane_t9

0x9bed,	// (0x000459b6) main_cset6_slider_pane_t10_ParamLimits

0x9bed,	// (0x000459b6) main_cset6_slider_pane_t10

0x9c11,	// (0x000459da) main_cset6_slider_pane_t11_ParamLimits

0x9c11,	// (0x000459da) main_cset6_slider_pane_t11

0xd71c,	// (0x000494e5) main_cset6_slider_pane_t14_ParamLimits

0xd71c,	// (0x000494e5) main_cset6_slider_pane_t14

0xd755,	// (0x0004951e) main_cset6_slider_pane_t15_ParamLimits

0xd755,	// (0x0004951e) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x0004b910) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x0004b910) main_cset6_slider_pane_t

0xcf2d,	// (0x00048cf6) cset_slider_pane_g1_copy1

0xcf36,	// (0x00048cff) cset_slider_pane_g2_copy1

0xcf3f,	// (0x00048d08) cset_slider_pane_g3_copy1

0x0659,	// (0x0003c422) bg_popup_sub_pane_cp011_copy1

0xcfcd,	// (0x00048d96) main_cset_text_pane_g1_copy1

0xcfd5,	// (0x00048d9e) main_cset_text_pane_t1_copy1

0xcfe3,	// (0x00048dac) main_cset_text_pane_t2_copy1

0xcff1,	// (0x00048dba) main_cset_text_pane_t3_copy1

0xcfff,	// (0x00048dc8) main_cset_text_pane_t4_copy1

0xd00d,	// (0x00048dd6) main_cset_text_pane_t5_copy1

0xd01b,	// (0x00048de4) main_cset_text_pane_t6_copy1

0xd029,	// (0x00048df2) main_cset_text_pane_t7_copy1

0x9c35,	// (0x000459fe) main_cset_text2_pane_t1_copy1

0x1a5e,	// (0x0003d827) main_ncimui_pane

0x7088,	// (0x00042e51) popup_query_ncimui_window_ParamLimits

0x7088,	// (0x00042e51) popup_query_ncimui_window

0xc658,	// (0x00048421) field_cale_ev2_pane_g4_ParamLimits

0xc658,	// (0x00048421) field_cale_ev2_pane_g4

0x81f0,	// (0x00043fb9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x81f0,	// (0x00043fb9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf821,	// (0x0004b5ea) cell_video_dialer_keypad_pane_g_ParamLimits

0xf821,	// (0x0004b5ea) cell_video_dialer_keypad_pane_g

0x8208,	// (0x00043fd1) cell_video_dialer_keypad_pane_t1

0x0659,	// (0x0003c422) bg_popup_window_pane_cp012

0x6bde,	// (0x000429a7) heading_pane_cp06

0xd7de,	// (0x000495a7) ncim_query_content_pane

0x0659,	// (0x0003c422) bg_popup_heading_pane_cp01

0xd7e6,	// (0x000495af) ncim_heading_pane_t1

0xd7f4,	// (0x000495bd) ncim_indicator_popup_pane

0xd806,	// (0x000495cf) ncim_query_button_pane

0xd81a,	// (0x000495e3) ncim_query_content_pane_t1

0xd82c,	// (0x000495f5) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x0004b954) ncim_query_content_pane_t

0xd866,	// (0x0004962f) ncim_query_list_pane

0xd878,	// (0x00049641) ncim_query_popup_pane

0xd7f4,	// (0x000495bd) ncim_indicator_popup_pane_ParamLimits

0x9d74,	// (0x00045b3d) ncim_query_content_pane_g1_ParamLimits

0x9d74,	// (0x00045b3d) ncim_query_content_pane_g1

0xd81a,	// (0x000495e3) ncim_query_content_pane_t1_ParamLimits

0xd82c,	// (0x000495f5) ncim_query_content_pane_t2_ParamLimits

0x9d80,	// (0x00045b49) ncim_query_content_pane_t3_ParamLimits

0x9d80,	// (0x00045b49) ncim_query_content_pane_t3

0x9da8,	// (0x00045b71) ncim_query_content_pane_t4_ParamLimits

0x9da8,	// (0x00045b71) ncim_query_content_pane_t4

0x9dd0,	// (0x00045b99) ncim_query_content_pane_t5_ParamLimits

0x9dd0,	// (0x00045b99) ncim_query_content_pane_t5

0xd83e,	// (0x00049607) ncim_query_content_pane_t6_ParamLimits

0xd83e,	// (0x00049607) ncim_query_content_pane_t6

0xfb8b,	// (0x0004b954) ncim_query_content_pane_t_ParamLimits

0xd866,	// (0x0004962f) ncim_query_list_pane_ParamLimits

0xd878,	// (0x00049641) ncim_query_popup_pane_ParamLimits

0xd88c,	// (0x00049655) wait_bar_pane_cp04

0x0659,	// (0x0003c422) input_focus_pane_cp011

0xd894,	// (0x0004965d) ncim_query_popup_pane_t1

0xd8a2,	// (0x0004966b) ncim_list_query_list_pane_ParamLimits

0xd8a2,	// (0x0004966b) ncim_list_query_list_pane

0x0659,	// (0x0003c422) bg_button_pane_cp027

0xd8b5,	// (0x0004967e) ncim_query_button_pane_g1

0x0659,	// (0x0003c422) list_highlight_pane_cp012

0xd8bf,	// (0x00049688) ncim_list_query_list_pane_g1

0xd8c7,	// (0x00049690) ncim_list_query_list_pane_t1

0xeecd,	// (0x0004ac96) cam4_indicators_pane_g3_ParamLimits

0xeecd,	// (0x0004ac96) cam4_indicators_pane_g3

0xef2c,	// (0x0004acf5) vid4_indicators_pane_g5_ParamLimits

0xef2c,	// (0x0004acf5) vid4_indicators_pane_g5

0x14e2,	// (0x0003d2ab) vid4_progress_pane_g5_ParamLimits

0x14e2,	// (0x0003d2ab) vid4_progress_pane_g5

0x9c64,	// (0x00045a2d) main_ncimui_pane_g1

0x9cca,	// (0x00045a93) ncimui_group_query_pane_ParamLimits

0x9cca,	// (0x00045a93) ncimui_group_query_pane

0x9d12,	// (0x00045adb) ncimui_list_pane_ParamLimits

0x9d12,	// (0x00045adb) ncimui_list_pane

0x9d37,	// (0x00045b00) ncimui_text_pane_ParamLimits

0x9d37,	// (0x00045b00) ncimui_text_pane

0x9df8,	// (0x00045bc1) ncimui_text_pane_t1_ParamLimits

0x9df8,	// (0x00045bc1) ncimui_text_pane_t1

0xd8de,	// (0x000496a7) ncimui_list_single_graphic_pane_ParamLimits

0xd8de,	// (0x000496a7) ncimui_list_single_graphic_pane

0x9e16,	// (0x00045bdf) ncimui_query_pane_ParamLimits

0x9e16,	// (0x00045bdf) ncimui_query_pane

0x0659,	// (0x0003c422) list_highlight_pane_cp013

0xd8ee,	// (0x000496b7) ncim_list_query_list_pane_t1_copy1

0xd8fc,	// (0x000496c5) ncim_list_single_graphic_pane_g1

0xd904,	// (0x000496cd) ncim_query_button_pane_cp01

0xd910,	// (0x000496d9) ncim_query_entry_pane_ParamLimits

0xd910,	// (0x000496d9) ncim_query_entry_pane

0xd923,	// (0x000496ec) ncimui_query_pane_g1

0xd92f,	// (0x000496f8) ncimui_query_pane_t1_ParamLimits

0xd92f,	// (0x000496f8) ncimui_query_pane_t1

0x1a5e,	// (0x0003d827) input_focus_pane_cp012

0xd948,	// (0x00049711) ncim_query_entry_pane_t1

0x0dcd,	// (0x0003cb96) main_im_pane_ParamLimits

0x1a5e,	// (0x0003d827) main_mobtv_pane_ParamLimits

0x1a5e,	// (0x0003d827) main_mobtv_pane

0x8dc4,	// (0x00044b8d) main_cset6_slider_pane_g18_ParamLimits

0x8dc4,	// (0x00044b8d) main_cset6_slider_pane_g18

0x8df4,	// (0x00044bbd) main_cset6_slider_pane_g19_ParamLimits

0x8df4,	// (0x00044bbd) main_cset6_slider_pane_g19

0x0d73,	// (0x0003cb3c) bg_main_mobtv_pane_ParamLimits

0x0d73,	// (0x0003cb3c) bg_main_mobtv_pane

0x9e26,	// (0x00045bef) main_mobtv_info_pane

0x9e2f,	// (0x00045bf8) main_mobtv_loading_pane_ParamLimits

0x9e2f,	// (0x00045bf8) main_mobtv_loading_pane

0xd95a,	// (0x00049723) main_mobtv_pg_channel_list_pane

0xd964,	// (0x0004972d) main_mobtv_pg_hdr_pane

0x9e3c,	// (0x00045c05) main_mobtv_programe_curr_pane_ParamLimits

0x9e3c,	// (0x00045c05) main_mobtv_programe_curr_pane

0x9e49,	// (0x00045c12) main_mobtv_programe_next_pane_ParamLimits

0x9e49,	// (0x00045c12) main_mobtv_programe_next_pane

0xd96d,	// (0x00049736) popup_mobtv_noti_window

0x101b,	// (0x0003cde4) main_tv_pg_hdr_pane_g1

0xd975,	// (0x0004973e) main_tv_pg_hdr_pane_g2

0xd97d,	// (0x00049746) main_tv_pg_hdr_pane_g3

0xd985,	// (0x0004974e) main_tv_pg_hdr_pane_g4

0xd98d,	// (0x00049756) main_tv_pg_hdr_pane_g5

0xd995,	// (0x0004975e) main_tv_pg_hdr_pane_g6

0xd99d,	// (0x00049766) main_tv_pg_hdr_pane_g7

0xd9a5,	// (0x0004976e) main_tv_pg_hdr_pane_g8

0xd9ad,	// (0x00049776) main_tv_pg_hdr_pane_g9

0xd9b5,	// (0x0004977e) main_tv_pg_hdr_pane_g10

0xd9bf,	// (0x00049788) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x0004b961) main_tv_pg_hdr_pane_g

0xd9c9,	// (0x00049792) main_tv_pg_hdr_pane_t1

0xd9d7,	// (0x000497a0) main_tv_pg_hdr_pane_t2

0xd9e5,	// (0x000497ae) main_tv_pg_hdr_pane_t3

0xd9f3,	// (0x000497bc) main_tv_pg_hdr_pane_t4

0xda01,	// (0x000497ca) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x0004b978) main_tv_pg_hdr_pane_t

0xda0f,	// (0x000497d8) single_mobtv_pg_channel_pane_ParamLimits

0xda0f,	// (0x000497d8) single_mobtv_pg_channel_pane

0xda21,	// (0x000497ea) single_mobtv_pg_channel_table_pane

0xda2a,	// (0x000497f3) single_mobtv_pg_channel_thumb_pane

0xda33,	// (0x000497fc) single_tv_pg_channel_pane_g1

0xda3c,	// (0x00049805) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x0004b983) single_tv_pg_channel_pane_g

0x0d57,	// (0x0003cb20) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0d57,	// (0x0003cb20) bg_single_mobtv_pg_channel_thumb_pane

0xda45,	// (0x0004980e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda45,	// (0x0004980e) single_mobtv_pg_channel_thumb_pane_g1

0xda53,	// (0x0004981c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda53,	// (0x0004981c) single_mobtv_pg_channel_thumb_pane_g2

0xda5f,	// (0x00049828) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda5f,	// (0x00049828) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x0004b988) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x0004b988) single_mobtv_pg_channel_thumb_pane_g

0xda6b,	// (0x00049834) single_mobtv_pg_channel_thumb_pane_t1

0xda79,	// (0x00049842) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x0004b98f) single_mobtv_pg_channel_thumb_pane_t

0x101b,	// (0x0003cde4) bg_single_mobtv_pg_channel_table_pane_g1

0x101b,	// (0x0003cde4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c9,	// (0x0004b192) bg_single_mobtv_pg_channel_table_pane_g

0xda87,	// (0x00049850) single_mobtv_pg_channel_table_pane_t1

0xda95,	// (0x0004985e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x0004b994) single_mobtv_pg_channel_table_pane_t

0x9e5e,	// (0x00045c27) main_mobtv_info_pane_g1_ParamLimits

0x9e5e,	// (0x00045c27) main_mobtv_info_pane_g1

0x9e7a,	// (0x00045c43) main_mobtv_info_pane_t1_ParamLimits

0x9e7a,	// (0x00045c43) main_mobtv_info_pane_t1

0x9ee0,	// (0x00045ca9) main_mobtv_info_pane_t2_ParamLimits

0x9ee0,	// (0x00045ca9) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x0004b99e) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x0004b99e) main_mobtv_info_pane_t

0x9f63,	// (0x00045d2c) wait_bar_pane_cp05

0x9f73,	// (0x00045d3c) main_mobtv_loading_pane_g1_ParamLimits

0x9f73,	// (0x00045d3c) main_mobtv_loading_pane_g1

0x9f84,	// (0x00045d4d) main_mobtv_loading_pane_g2_ParamLimits

0x9f84,	// (0x00045d4d) main_mobtv_loading_pane_g2

0x9f90,	// (0x00045d59) main_mobtv_loading_pane_g3_ParamLimits

0x9f90,	// (0x00045d59) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x0004b9a5) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x0004b9a5) main_mobtv_loading_pane_g

0xdaa3,	// (0x0004986c) main_mobtv_loading_pane_t1_ParamLimits

0xdaa3,	// (0x0004986c) main_mobtv_loading_pane_t1

0xdabb,	// (0x00049884) main_mobtv_loading_pane_t2_ParamLimits

0xdabb,	// (0x00049884) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x0004b9ac) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x0004b9ac) main_mobtv_loading_pane_t

0x9fa1,	// (0x00045d6a) wait_bar_pane_cp06_ParamLimits

0x9fa1,	// (0x00045d6a) wait_bar_pane_cp06

0xdadf,	// (0x000498a8) main_mobtv_programe_curr_pane_t1

0xdaed,	// (0x000498b6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x0004b9b1) main_mobtv_programe_curr_pane_t

0xdafb,	// (0x000498c4) main_mobtv_programe_next_pane_t1

0xdb09,	// (0x000498d2) main_mobtv_programe_next_pane_t2

0xdb17,	// (0x000498e0) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x0004b9b6) main_mobtv_programe_next_pane_t

0x0659,	// (0x0003c422) bg_popup_mobtv_noti_window_pane

0xdb25,	// (0x000498ee) popup_mobtv_noti_window_g1

0xdb2d,	// (0x000498f6) popup_mobtv_noti_window_t1

0xdb3b,	// (0x00049904) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x0004b9bd) popup_mobtv_noti_window_t

0x101b,	// (0x0003cde4) bg_popup_mobtv_noti_window_pane_g1

0x0659,	// (0x0003c422) sc_clock_pane

0x0659,	// (0x0003c422) main_fs_bigclock_pane

0x97d8,	// (0x000455a1) blid2_tripm_pane_t4_ParamLimits

0x97d8,	// (0x000455a1) blid2_tripm_pane_t4

0x9fb0,	// (0x00045d79) sc_clock_pane_g1_ParamLimits

0x9fb0,	// (0x00045d79) sc_clock_pane_g1

0x9fc2,	// (0x00045d8b) sc_clock_pane_t1_ParamLimits

0x9fc2,	// (0x00045d8b) sc_clock_pane_t1

0x9fe4,	// (0x00045dad) sc_clock_pane_t2_ParamLimits

0x9fe4,	// (0x00045dad) sc_clock_pane_t2

0x9ffa,	// (0x00045dc3) sc_clock_pane_t3_ParamLimits

0x9ffa,	// (0x00045dc3) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x0004b9c2) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x0004b9c2) sc_clock_pane_t

0xa9b4,	// (0x0004677d) main_fs_bigclock_indicator_pane_ParamLimits

0xa9b4,	// (0x0004677d) main_fs_bigclock_indicator_pane

0xa096,	// (0x00045e5f) main_fs_bigclock_pane_g1_ParamLimits

0xa096,	// (0x00045e5f) main_fs_bigclock_pane_g1

0xa9c0,	// (0x00046789) main_fs_bigclock_pane_t1_ParamLimits

0xa9c0,	// (0x00046789) main_fs_bigclock_pane_t1

0xa9d2,	// (0x0004679b) main_fs_bigclock_pane_t2_ParamLimits

0xa9d2,	// (0x0004679b) main_fs_bigclock_pane_t2

0xa9e4,	// (0x000467ad) main_fs_bigclock_pane_t3_ParamLimits

0xa9e4,	// (0x000467ad) main_fs_bigclock_pane_t3

0x0002,

0xfdc2,	// (0x0004bb8b) main_fs_bigclock_pane_t_ParamLimits

0xfdc2,	// (0x0004bb8b) main_fs_bigclock_pane_t

0xe626,	// (0x0004a3ef) main_fs_bigclock_indicator_pane_g1

0xd80e,	// (0x000495d7) ncim_query_content_pane_g2_ParamLimits

0xd80e,	// (0x000495d7) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x0004b94f) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x0004b94f) ncim_query_content_pane_g

0xa011,	// (0x00045dda) sc_clock_pane_t4_ParamLimits

0xa011,	// (0x00045dda) sc_clock_pane_t4

0x1a5e,	// (0x0003d827) main_radioblah_pane

0xee41,	// (0x0004ac0a) cell_call4_button_pane_t1_copy1_ParamLimits

0xee41,	// (0x0004ac0a) cell_call4_button_pane_t1_copy1

0x9c7c,	// (0x00045a45) main_ncimui_pane_t1_ParamLimits

0x9c7c,	// (0x00045a45) main_ncimui_pane_t1

0x9c96,	// (0x00045a5f) main_ncimui_pane_t2_ParamLimits

0x9c96,	// (0x00045a5f) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x0004b948) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x0004b948) main_ncimui_pane_t

0xdc7c,	// (0x00049a45) main_radioblah_anim_pane_ParamLimits

0xdc7c,	// (0x00049a45) main_radioblah_anim_pane

0xdc8d,	// (0x00049a56) main_radioblah_info_pane_ParamLimits

0xdc8d,	// (0x00049a56) main_radioblah_info_pane

0xdca1,	// (0x00049a6a) main_radioblah_pane_t1_ParamLimits

0xdca1,	// (0x00049a6a) main_radioblah_pane_t1

0xdcbd,	// (0x00049a86) main_radioblah_pane_t2_ParamLimits

0xdcbd,	// (0x00049a86) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x0004b9e3) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x0004b9e3) main_radioblah_pane_t

0xa0e0,	// (0x00045ea9) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa0e0,	// (0x00045ea9) main_radioblah_rocker_ctrl_pane

0xdd05,	// (0x00049ace) main_radioblah_info_pane_t1_ParamLimits

0xdd05,	// (0x00049ace) main_radioblah_info_pane_t1

0xa134,	// (0x00045efd) main_radioblah_info_pane_t2_ParamLimits

0xa134,	// (0x00045efd) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x0004b9ec) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x0004b9ec) main_radioblah_info_pane_t

0x101b,	// (0x0003cde4) main_radioblah_rocker_ctrl_pane_g1

0xa1e2,	// (0x00045fab) main_radioblah_rocker_ctrl_pane_g2

0xa1ea,	// (0x00045fb3) main_radioblah_rocker_ctrl_pane_g3

0xa1f2,	// (0x00045fbb) main_radioblah_rocker_ctrl_pane_g4

0xa1fa,	// (0x00045fc3) main_radioblah_rocker_ctrl_pane_g5

0xa202,	// (0x00045fcb) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x0004b9f5) main_radioblah_rocker_ctrl_pane_g

0x9c35,	// (0x000459fe) main_cset_text2_pane_t1_copy1_ParamLimits

0xee9d,	// (0x0004ac66) cam4_image_uncrop_qvga_pane

0xeef7,	// (0x0004acc0) vid4_image_uncrop_qcif_pane

0xf03b,	// (0x0004ae04) cam6_image_uncrop_qvga_pane_ParamLimits

0xf03b,	// (0x0004ae04) cam6_image_uncrop_qvga_pane

0xd4d9,	// (0x000492a2) vid6_image_uncrop_qcif_pane_ParamLimits

0xd4d9,	// (0x000492a2) vid6_image_uncrop_qcif_pane

0x0659,	// (0x0003c422) bg_popup_preview_window_pane_cp03

0xd7b4,	// (0x0004957d) list_cset_text2_pane

0xd7bc,	// (0x00049585) main_cset6_text2_pane_g1

0xd7c4,	// (0x0004958d) main_cset6_text2_pane_t1

0xa20a,	// (0x00045fd3) list_cset_text2_pane_t1_ParamLimits

0xa20a,	// (0x00045fd3) list_cset_text2_pane_t1

0x1a5e,	// (0x0003d827) main_radioblah_pane_ParamLimits

0x9f51,	// (0x00045d1a) main_mobtv_info_pane_t3_ParamLimits

0x9f51,	// (0x00045d1a) main_mobtv_info_pane_t3

0xa0ce,	// (0x00045e97) main_radioblah_pane_g1

0xa108,	// (0x00045ed1) main_radioblah_info_pane_g1

0xa187,	// (0x00045f50) main_radioblah_info_pane_t3_ParamLimits

0xa187,	// (0x00045f50) main_radioblah_info_pane_t3

0x4fb0,	// (0x00040d79) highlight_cell_cale_month_pane_ParamLimits

0x4fb0,	// (0x00040d79) highlight_cell_cale_month_pane

0x0659,	// (0x0003c422) main_phob_fisheye_pane

0xc6f9,	// (0x000484c2) scroll_pane_cp0031_ParamLimits

0xc6f9,	// (0x000484c2) scroll_pane_cp0031

0xd5e3,	// (0x000493ac) wait_bar_pane_cp08_ParamLimits

0x9aed,	// (0x000458b6) cset_list_set_pane_copy1_ParamLimits

0xdd3f,	// (0x00049b08) highlight_cell_cale_month_pane_g1

0xa223,	// (0x00045fec) highlight_cell_cale_month_pane_t1

0xdd47,	// (0x00049b10) list_gen_pane_cp01

0xce4a,	// (0x00048c13) scroll_pane_01

0x1d22,	// (0x0003daeb) list_single_double_fisheye_pane

0xdd50,	// (0x00049b19) list_double_fisheye_pane_g1_ParamLimits

0xdd50,	// (0x00049b19) list_double_fisheye_pane_g1

0xdd5c,	// (0x00049b25) list_double_fisheye_pane_g2_ParamLimits

0xdd5c,	// (0x00049b25) list_double_fisheye_pane_g2

0x1d2b,	// (0x0003daf4) list_double_fisheye_pane_g3_ParamLimits

0x1d2b,	// (0x0003daf4) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x0004ba02) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x0004ba02) list_double_fisheye_pane_g

0xdd8d,	// (0x00049b56) list_double_fisheye_pane_t1_ParamLimits

0xdd8d,	// (0x00049b56) list_double_fisheye_pane_t1

0xdda8,	// (0x00049b71) list_double_fisheye_pane_t2_ParamLimits

0xdda8,	// (0x00049b71) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x0004ba0d) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x0004ba0d) list_double_fisheye_pane_t

0x0659,	// (0x0003c422) main_call5_pane

0xa03a,	// (0x00045e03) sc_swipe_pane_ParamLimits

0xa03a,	// (0x00045e03) sc_swipe_pane

0xa242,	// (0x0004600b) call5_image_pane_ParamLimits

0xa242,	// (0x0004600b) call5_image_pane

0xa257,	// (0x00046020) call5_swipe_1_pane_ParamLimits

0xa257,	// (0x00046020) call5_swipe_1_pane

0xa268,	// (0x00046031) call5_swipe_2_pane_ParamLimits

0xa268,	// (0x00046031) call5_swipe_2_pane

0xa28d,	// (0x00046056) popup_call5_audio_first_window_ParamLimits

0xa28d,	// (0x00046056) popup_call5_audio_first_window

0x0d57,	// (0x0003cb20) call5_swipe_1_pane_g1_ParamLimits

0x0d57,	// (0x0003cb20) call5_swipe_1_pane_g1

0xddca,	// (0x00049b93) call5_swipe_1_pane_g2_ParamLimits

0xddca,	// (0x00049b93) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x0004ba12) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x0004ba12) call5_swipe_1_pane_g

0xddd6,	// (0x00049b9f) call5_swipe_1_pane_t1_ParamLimits

0xddd6,	// (0x00049b9f) call5_swipe_1_pane_t1

0x0d57,	// (0x0003cb20) call5_swipe_2_pane_g1_ParamLimits

0x0d57,	// (0x0003cb20) call5_swipe_2_pane_g1

0xddeb,	// (0x00049bb4) call5_swipe_2_pane_g2_ParamLimits

0xddeb,	// (0x00049bb4) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x0004ba17) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x0004ba17) call5_swipe_2_pane_g

0xddf7,	// (0x00049bc0) call5_swipe_2_pane_t1_ParamLimits

0xddf7,	// (0x00049bc0) call5_swipe_2_pane_t1

0xde0c,	// (0x00049bd5) sc_swipe_pane_g1_ParamLimits

0xde0c,	// (0x00049bd5) sc_swipe_pane_g1

0xde19,	// (0x00049be2) sc_swipe_pane_g2_ParamLimits

0xde19,	// (0x00049be2) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x0004ba1c) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x0004ba1c) sc_swipe_pane_g

0xde25,	// (0x00049bee) sc_swipe_pane_t1_ParamLimits

0xde25,	// (0x00049bee) sc_swipe_pane_t1

0x0659,	// (0x0003c422) main_cmail_launcher_pane

0xa29c,	// (0x00046065) aid_size_cell_cmail_l_ParamLimits

0xa29c,	// (0x00046065) aid_size_cell_cmail_l

0xa2b5,	// (0x0004607e) grid_cmail_l_pane_ParamLimits

0xa2b5,	// (0x0004607e) grid_cmail_l_pane

0xa2ca,	// (0x00046093) cell_cmail_l_pane_ParamLimits

0xa2ca,	// (0x00046093) cell_cmail_l_pane

0xa2ec,	// (0x000460b5) cell_cmail_l_pane_g1_ParamLimits

0xa2ec,	// (0x000460b5) cell_cmail_l_pane_g1

0xa2fc,	// (0x000460c5) cell_cmail_l_pane_t1_ParamLimits

0xa2fc,	// (0x000460c5) cell_cmail_l_pane_t1

0xde3a,	// (0x00049c03) cell_cmail_l_pane_t2_ParamLimits

0xde3a,	// (0x00049c03) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x0004ba21) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x0004ba21) cell_cmail_l_pane_t

0x1a5e,	// (0x0003d827) grid_highlight_pane_cp018_ParamLimits

0x1a5e,	// (0x0003d827) grid_highlight_pane_cp018

0x356f,	// (0x0003f338) main2_pane_ParamLimits

0x356f,	// (0x0003f338) main2_pane

0x0e6e,	// (0x0003cc37) popup_sp_fs_action_menu_bg_pane_g1

0x0e76,	// (0x0003cc3f) popup_sp_fs_action_menu_bg_pane_g2

0x0e7e,	// (0x0003cc47) popup_sp_fs_action_menu_bg_pane_g3

0x0e86,	// (0x0003cc4f) popup_sp_fs_action_menu_bg_pane_g4

0x0e8e,	// (0x0003cc57) popup_sp_fs_action_menu_bg_pane_g5

0x0e96,	// (0x0003cc5f) popup_sp_fs_action_menu_bg_pane_g6

0x0e9e,	// (0x0003cc67) popup_sp_fs_action_menu_bg_pane_g7

0x0ea6,	// (0x0003cc6f) popup_sp_fs_action_menu_bg_pane_g8

0x0eae,	// (0x0003cc77) popup_sp_fs_action_menu_bg_pane_g9

0x0eb6,	// (0x0003cc7f) popup_sp_fs_action_menu_bg_pane_g10

0x0eb6,	// (0x0003cc7f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf11f,	// (0x0004aee8) popup_sp_fs_action_menu_bg_pane_g

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g3_g1

0xbd7f,	// (0x00047b48) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_x2_t3_g3_g2

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1cd,	// (0x0004af96) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1cd,	// (0x0004af96) list_medium_line_x2_t3_g3_g

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g3_t1

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g3_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g3_t2

0xbd9e,	// (0x00047b67) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbd9e,	// (0x00047b67) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x0004af9d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x0004af9d) list_medium_line_x2_t3_g3_t

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g2_g1

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x0004afa4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x0004afa4) list_medium_line_x2_t3_g2_g

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g2_t1

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g2_t2

0xbd9e,	// (0x00047b67) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbd9e,	// (0x00047b67) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x0004af9d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x0004af9d) list_medium_line_x2_t3_g2_t

0xbd73,	// (0x00047b3c) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t4_g4_g1

0xbd7f,	// (0x00047b48) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_x2_t4_g4_g2

0xbd7f,	// (0x00047b48) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_x2_t4_g4_g3

0xbd73,	// (0x00047b3c) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e0,	// (0x0004afa9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e0,	// (0x0004afa9) list_medium_line_x2_t4_g4_g

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g4_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g4_t1

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g4_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g4_t2

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g4_t3_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g4_t3

0xbd9e,	// (0x00047b67) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbd9e,	// (0x00047b67) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1e9,	// (0x0004afb2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1e9,	// (0x0004afb2) list_medium_line_x2_t4_g4_t

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g4_g1

0xbd7f,	// (0x00047b48) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_x2_t2_g4_g2

0xbd7f,	// (0x00047b48) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_x2_t2_g4_g3

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e0,	// (0x0004afa9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e0,	// (0x0004afa9) list_medium_line_x2_t2_g4_g

0xbd8b,	// (0x00047b54) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t2_g4_t1

0xbd9e,	// (0x00047b67) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbd9e,	// (0x00047b67) list_medium_line_x2_t2_g4_t2

0x0001,

0xf250,	// (0x0004b019) list_medium_line_x2_t2_g4_t_ParamLimits

0xf250,	// (0x0004b019) list_medium_line_x2_t2_g4_t

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g3_g1

0xbd7f,	// (0x00047b48) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_x2_t2_g3_g2

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1cd,	// (0x0004af96) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1cd,	// (0x0004af96) list_medium_line_x2_t2_g3_g

0xbd8b,	// (0x00047b54) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t2_g3_t1

0xbd9e,	// (0x00047b67) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbd9e,	// (0x00047b67) list_medium_line_x2_t2_g3_t2

0x0001,

0xf250,	// (0x0004b019) list_medium_line_x2_t2_g3_t_ParamLimits

0xf250,	// (0x0004b019) list_medium_line_x2_t2_g3_t

0x510d,	// (0x00040ed6) main_sp_fs_list_pane_ParamLimits

0x510d,	// (0x00040ed6) main_sp_fs_list_pane

0x511a,	// (0x00040ee3) sp_fs_scroll_pane_ParamLimits

0x511a,	// (0x00040ee3) sp_fs_scroll_pane

0xbddf,	// (0x00047ba8) list_medium_line_x2_t3_t1

0xbddf,	// (0x00047ba8) list_medium_line_x2_t3_t2

0xbdee,	// (0x00047bb7) list_medium_line_x2_t3_t3

0x0002,

0xf29b,	// (0x0004b064) list_medium_line_x2_t3_t

0xbddf,	// (0x00047ba8) list_medium_line_x3_t4_t1

0xbddf,	// (0x00047ba8) list_medium_line_x3_t4_t2

0xbddf,	// (0x00047ba8) list_medium_line_x3_t4_t3

0xbddf,	// (0x00047ba8) list_medium_line_x3_t4_t4

0x0003,

0xf2a2,	// (0x0004b06b) list_medium_line_x3_t4_t

0xbddf,	// (0x00047ba8) list_medium_line_x4_t5_t1

0xbddf,	// (0x00047ba8) list_medium_line_x4_t5_t2

0xbddf,	// (0x00047ba8) list_medium_line_x4_t5_t3

0xbddf,	// (0x00047ba8) list_medium_line_x4_t5_t4

0xbddf,	// (0x00047ba8) list_medium_line_x4_t5_t5

0x0004,

0xf2ab,	// (0x0004b074) list_medium_line_x4_t5_t

0xbd73,	// (0x00047b3c) list_medium_line_t4_g4_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_t4_g4_g1

0xbd73,	// (0x00047b3c) list_medium_line_t4_g4_g2_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_t4_g4_g2

0xbd73,	// (0x00047b3c) list_medium_line_t4_g4_g3_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_t4_g4_g3

0xbd73,	// (0x00047b3c) list_medium_line_t4_g4_g4_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_t4_g4_g4

0x0003,

0xf2b6,	// (0x0004b07f) list_medium_line_t4_g4_g_ParamLimits

0xf2b6,	// (0x0004b07f) list_medium_line_t4_g4_g

0xbd8b,	// (0x00047b54) list_medium_line_t4_g4_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t4_g4_t1

0xbd8b,	// (0x00047b54) list_medium_line_t4_g4_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t4_g4_t2

0xbd8b,	// (0x00047b54) list_medium_line_t4_g4_t3_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t4_g4_t3

0xbd8b,	// (0x00047b54) list_medium_line_t4_g4_t4_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t4_g4_t4

0x0003,

0xf2bf,	// (0x0004b088) list_medium_line_t4_g4_t_ParamLimits

0xf2bf,	// (0x0004b088) list_medium_line_t4_g4_t

0x51c6,	// (0x00040f8f) chi_dic_find_pane_g1

0x6e84,	// (0x00042c4d) main_tport_pane

0xbddf,	// (0x00047ba8) list_medium_line_plain_t1

0xbd73,	// (0x00047b3c) list_medium_line_t2_g2_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_t2_g2_g1

0xcf81,	// (0x00048d4a) list_medium_line_t2_g2_g2_ParamLimits

0xcf81,	// (0x00048d4a) list_medium_line_t2_g2_g2

0x0001,

0xf990,	// (0x0004b759) list_medium_line_t2_g2_g_ParamLimits

0xf990,	// (0x0004b759) list_medium_line_t2_g2_g

0xbd8b,	// (0x00047b54) list_medium_line_t2_g2_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t2_g2_t1

0xbd8b,	// (0x00047b54) list_medium_line_t2_g2_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t2_g2_t2

0x0001,

0xf995,	// (0x0004b75e) list_medium_line_t2_g2_t_ParamLimits

0xf995,	// (0x0004b75e) list_medium_line_t2_g2_t

0xd29d,	// (0x00049066) aid_sp_fs_list_icon_a_sm

0xd2a5,	// (0x0004906e) aid_sp_fs_list_icon_d

0xd2ad,	// (0x00049076) aid_sp_fs_text_primary

0xd2b6,	// (0x0004907f) aid_sp_fs_text_secondary

0x95a0,	// (0x00045369) list_medium_line

0x95a0,	// (0x00045369) list_medium_line_g2

0x95a0,	// (0x00045369) list_medium_line_g3

0x95a0,	// (0x00045369) list_medium_line_plain

0x95a0,	// (0x00045369) list_medium_line_plain_t2

0x95a0,	// (0x00045369) list_medium_line_plain_t3

0x95a0,	// (0x00045369) list_medium_line_right_icon

0x95a0,	// (0x00045369) list_medium_line_right_iconx2

0x95a0,	// (0x00045369) list_medium_line_t2

0x95a0,	// (0x00045369) list_medium_line_t2_g2

0x95a0,	// (0x00045369) list_medium_line_t2_g3

0x95a0,	// (0x00045369) list_medium_line_t2_right_icon

0x95a0,	// (0x00045369) list_medium_line_t2_right_iconx2

0x95a0,	// (0x00045369) list_medium_line_t3

0x95a0,	// (0x00045369) list_medium_line_t3_g2

0x95a0,	// (0x00045369) list_medium_line_t3_g3

0x95a0,	// (0x00045369) list_medium_line_t3_right_iconx2

0x1d10,	// (0x0003dad9) list_medium_line_t4_g4

0xd2bf,	// (0x00049088) list_medium_line_x2

0xd2bf,	// (0x00049088) list_medium_line_x2_t2_g2

0xd2bf,	// (0x00049088) list_medium_line_x2_t2_g3

0xd2bf,	// (0x00049088) list_medium_line_x2_t2_g4

0xd2bf,	// (0x00049088) list_medium_line_x2_t3

0xd2bf,	// (0x00049088) list_medium_line_x2_t3_g2

0xd2bf,	// (0x00049088) list_medium_line_x2_t3_g3

0xd2bf,	// (0x00049088) list_medium_line_x2_t3_g4

0xd2bf,	// (0x00049088) list_medium_line_x2_t4_g2

0xd2bf,	// (0x00049088) list_medium_line_x2_t4_g4

0x1d19,	// (0x0003dae2) list_medium_line_x3

0x1d19,	// (0x0003dae2) list_medium_line_x3_t4

0x1d19,	// (0x0003dae2) list_medium_line_x3_t4_g4

0x1d10,	// (0x0003dad9) list_medium_line_x4_t4

0x1d10,	// (0x0003dad9) list_medium_line_x4_t4_g7

0x1d10,	// (0x0003dad9) list_medium_line_x4_t5

0x2f6e,	// (0x0003ed37) list_single_fs_dyc_pane_ParamLimits

0x2f6e,	// (0x0003ed37) list_single_fs_dyc_pane

0xbd73,	// (0x00047b3c) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x4_t4_g7_g1

0x0d57,	// (0x0003cb20) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0d57,	// (0x0003cb20) list_medium_line_x4_t4_g7_g2

0xbd7f,	// (0x00047b48) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_x4_t4_g7_g3

0x0d57,	// (0x0003cb20) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0d57,	// (0x0003cb20) list_medium_line_x4_t4_g7_g4

0x0d57,	// (0x0003cb20) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0d57,	// (0x0003cb20) list_medium_line_x4_t4_g7_g5

0x0d57,	// (0x0003cb20) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0d57,	// (0x0003cb20) list_medium_line_x4_t4_g7_g6

0x0d65,	// (0x0003cb2e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0d65,	// (0x0003cb2e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x0004b929) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x0004b929) list_medium_line_x4_t4_g7_g

0xbd8b,	// (0x00047b54) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x4_t4_g7_t1

0xbd8b,	// (0x00047b54) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x4_t4_g7_t2

0xbd8b,	// (0x00047b54) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x4_t4_g7_t3

0xd78e,	// (0x00049557) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd78e,	// (0x00049557) list_medium_line_x4_t4_g7_t4

0xd7a1,	// (0x0004956a) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd7a1,	// (0x0004956a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x0004b938) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x0004b938) list_medium_line_x4_t4_g7_t

0x2fae,	// (0x0003ed77) list_single_dyc_row_pane_ParamLimits

0x2fae,	// (0x0003ed77) list_single_dyc_row_pane

0xa231,	// (0x00045ffa) call5_gesture_pane_ParamLimits

0xa231,	// (0x00045ffa) call5_gesture_pane

0xa279,	// (0x00046042) call5_windows_pane_ParamLimits

0xa279,	// (0x00046042) call5_windows_pane

0xa312,	// (0x000460db) call5_swipe_1_pane_cp_ParamLimits

0xa312,	// (0x000460db) call5_swipe_1_pane_cp

0xa31e,	// (0x000460e7) call5_swipe_2_pane_cp_ParamLimits

0xa31e,	// (0x000460e7) call5_swipe_2_pane_cp

0x0f9a,	// (0x0003cd63) call5_image_pane_cp

0xa32a,	// (0x000460f3) popup_call5_audio_first_window_cp_ParamLimits

0xa32a,	// (0x000460f3) popup_call5_audio_first_window_cp

0xde0c,	// (0x00049bd5) call5_swipe_1_pane_g1_cp_ParamLimits

0xde0c,	// (0x00049bd5) call5_swipe_1_pane_g1_cp

0xde52,	// (0x00049c1b) call5_swipe_1_pane_g2_cp

0xde25,	// (0x00049bee) call5_swipe_1_pane_t1_cp_ParamLimits

0xde25,	// (0x00049bee) call5_swipe_1_pane_t1_cp

0xde0c,	// (0x00049bd5) call5_swipe_2_pane_g1_cp_ParamLimits

0xde0c,	// (0x00049bd5) call5_swipe_2_pane_g1_cp

0xde5a,	// (0x00049c23) call5_swipe_2_pane_g2_cp

0xde62,	// (0x00049c2b) call5_swipe_2_pane_t1_cp_ParamLimits

0xde62,	// (0x00049c2b) call5_swipe_2_pane_t1_cp

0x1a5e,	// (0x0003d827) main_sp_fs_email_pane

0xde77,	// (0x00049c40) main_sp_fs_listscroll_pane_te

0xa336,	// (0x000460ff) popup_sp_fs_action_menu_pane_ParamLimits

0xa336,	// (0x000460ff) popup_sp_fs_action_menu_pane

0x101b,	// (0x0003cde4) bg_sp_fs_ctrlbar_pane_g1

0xc92f,	// (0x000486f8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc941,	// (0x0004870a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc938,	// (0x00048701) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x101b,	// (0x0003cde4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x0004ba26) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc047,	// (0x00047e10) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc047,	// (0x00047e10) bg_sp_fs_ctrlbar_ddmenu_pane

0xde80,	// (0x00049c49) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xde80,	// (0x00049c49) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde8c,	// (0x00049c55) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde8c,	// (0x00049c55) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x0004ba2f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x0004ba2f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde98,	// (0x00049c61) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde98,	// (0x00049c61) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0eb6,	// (0x0003cc7f) list_medium_line_t2_right_icon_g1

0xbddf,	// (0x00047ba8) list_medium_line_t2_right_icon_t1

0xbddf,	// (0x00047ba8) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x0004ba34) list_medium_line_t2_right_icon_t

0x1cd4,	// (0x0003da9d) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1cd4,	// (0x0003da9d) bg_sp_fs_ctrlbar_pane

0xa3ae,	// (0x00046177) main_sp_fs_ctrlbar_button_pane_cp01

0xa3b6,	// (0x0004617f) main_sp_fs_ctrlbar_ddmenu_pane

0xdeea,	// (0x00049cb3) main_sp_fs_ctrlbar_pane_g1

0xdef6,	// (0x00049cbf) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x0004ba39) main_sp_fs_ctrlbar_pane_g

0xa3f2,	// (0x000461bb) main_sp_fs_ctrlbar_pane_t1

0xa43b,	// (0x00046204) main_sp_fs_ctrlbar_pane

0xa45c,	// (0x00046225) main_sp_fs_listscroll_pane_te_cp01

0x2fcb,	// (0x0003ed94) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2fcb,	// (0x0003ed94) popup_sp_fs_action_menu_pane_cp01

0x1a5e,	// (0x0003d827) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1a5e,	// (0x0003d827) bg_sp_fs_highlight_list_pane_cp01

0x2fef,	// (0x0003edb8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2fef,	// (0x0003edb8) sp_fs_action_menu_list_gene_pane_g1

0xdf1d,	// (0x00049ce6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdf1d,	// (0x00049ce6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x0004ba47) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x0004ba47) sp_fs_action_menu_list_gene_pane_g

0x2ffe,	// (0x0003edc7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2ffe,	// (0x0003edc7) sp_fs_action_menu_list_gene_pane_t1

0xa47c,	// (0x00046245) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa47c,	// (0x00046245) sp_fs_action_menu_list_gene_pane

0xdf2a,	// (0x00049cf3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdf2a,	// (0x00049cf3) popup_sp_fs_action_menu_bg_pane

0xa499,	// (0x00046262) sp_fs_action_menu_list_pane_ParamLimits

0xa499,	// (0x00046262) sp_fs_action_menu_list_pane

0xdf38,	// (0x00049d01) sp_fs_scroll_pane_cp01_ParamLimits

0xdf38,	// (0x00049d01) sp_fs_scroll_pane_cp01

0xbddf,	// (0x00047ba8) list_medium_line_plain_t2_t1

0xbddf,	// (0x00047ba8) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x0004ba34) list_medium_line_plain_t2_t

0xbddf,	// (0x00047ba8) list_medium_line_plain_t3_t1

0xbddf,	// (0x00047ba8) list_medium_line_plain_t3_t2

0xbddf,	// (0x00047ba8) list_medium_line_plain_t3_t3

0x0002,

0xfc83,	// (0x0004ba4c) list_medium_line_plain_t3_t

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g2_g1

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x0004afa4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x0004afa4) list_medium_line_x2_t2_g2_g

0xbd8b,	// (0x00047b54) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t2_g2_t1

0xbd9e,	// (0x00047b67) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbd9e,	// (0x00047b67) list_medium_line_x2_t2_g2_t2

0x0001,

0xf250,	// (0x0004b019) list_medium_line_x2_t2_g2_t_ParamLimits

0xf250,	// (0x0004b019) list_medium_line_x2_t2_g2_t

0xbd73,	// (0x00047b3c) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t4_g2_g1

0xdf5e,	// (0x00049d27) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdf5e,	// (0x00049d27) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc8a,	// (0x0004ba53) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc8a,	// (0x0004ba53) list_medium_line_x2_t4_g2_g

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g2_t1

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g2_t2

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t4_g2_t3

0xbd9e,	// (0x00047b67) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbd9e,	// (0x00047b67) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1e9,	// (0x0004afb2) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1e9,	// (0x0004afb2) list_medium_line_x2_t4_g2_t

0x0eb6,	// (0x0003cc7f) list_medium_line_t3_right_iconx2_g1

0x101b,	// (0x0003cde4) list_medium_line_t3_right_iconx2_g2

0xdf6f,	// (0x00049d38) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8f,	// (0x0004ba58) list_medium_line_t3_right_iconx2_g

0xbddf,	// (0x00047ba8) list_medium_line_t3_right_iconx2_t1

0xbddf,	// (0x00047ba8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0004ba34) list_medium_line_t3_right_iconx2_t

0xbd73,	// (0x00047b3c) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x3_t4_g4_g1

0xbd7f,	// (0x00047b48) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_x3_t4_g4_g2

0xbd73,	// (0x00047b3c) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x3_t4_g4_g3

0xbd7f,	// (0x00047b48) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc96,	// (0x0004ba5f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc96,	// (0x0004ba5f) list_medium_line_x3_t4_g4_g

0xbd8b,	// (0x00047b54) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x3_t4_g4_t1

0xbd8b,	// (0x00047b54) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x3_t4_g4_t2

0xbd8b,	// (0x00047b54) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x3_t4_g4_t3

0xdf78,	// (0x00049d41) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdf78,	// (0x00049d41) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc9f,	// (0x0004ba68) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc9f,	// (0x0004ba68) list_medium_line_x3_t4_g4_t

0x3016,	// (0x0003eddf) list_single_dyc_row_text_pane_t1_ParamLimits

0x3016,	// (0x0003eddf) list_single_dyc_row_text_pane_t1

0x304d,	// (0x0003ee16) list_single_dyc_row_text_pane_t2_ParamLimits

0x304d,	// (0x0003ee16) list_single_dyc_row_text_pane_t2

0xdf95,	// (0x00049d5e) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf95,	// (0x00049d5e) list_single_dyc_row_text_pane_t3

0x0005,

0xfca8,	// (0x0004ba71) list_single_dyc_row_text_pane_t_ParamLimits

0xfca8,	// (0x0004ba71) list_single_dyc_row_text_pane_t

0xdfb9,	// (0x00049d82) list_single_dyc_row_pane_g1_ParamLimits

0xdfb9,	// (0x00049d82) list_single_dyc_row_pane_g1

0xdfc5,	// (0x00049d8e) list_single_dyc_row_pane_g2_ParamLimits

0xdfc5,	// (0x00049d8e) list_single_dyc_row_pane_g2

0xdfd1,	// (0x00049d9a) list_single_dyc_row_pane_g3_ParamLimits

0xdfd1,	// (0x00049d9a) list_single_dyc_row_pane_g3

0xdfdd,	// (0x00049da6) list_single_dyc_row_pane_g4_ParamLimits

0xdfdd,	// (0x00049da6) list_single_dyc_row_pane_g4

0x0003,

0xfcb5,	// (0x0004ba7e) list_single_dyc_row_pane_g_ParamLimits

0xfcb5,	// (0x0004ba7e) list_single_dyc_row_pane_g

0xdfe9,	// (0x00049db2) list_single_dyc_row_text_pane_ParamLimits

0xdfe9,	// (0x00049db2) list_single_dyc_row_text_pane

0x0659,	// (0x0003c422) bg_sp_fs_scroll_pane

0xe008,	// (0x00049dd1) thumb_sp_fs_scroll_pane

0xbd73,	// (0x00047b3c) list_medium_line_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_g1

0xbd8b,	// (0x00047b54) list_medium_line_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t1

0xbd73,	// (0x00047b3c) list_medium_line_x2_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_g1

0xcf81,	// (0x00048d4a) list_medium_line_x2_g2_ParamLimits

0xcf81,	// (0x00048d4a) list_medium_line_x2_g2

0x0001,

0xf990,	// (0x0004b759) list_medium_line_x2_g_ParamLimits

0xf990,	// (0x0004b759) list_medium_line_x2_g

0x1a4a,	// (0x0003d813) list_medium_line_x2_t1_ParamLimits

0x1a4a,	// (0x0003d813) list_medium_line_x2_t1

0xbd73,	// (0x00047b3c) list_medium_line_x3_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x3_g1

0xe011,	// (0x00049dda) list_medium_line_x3_g2_ParamLimits

0xe011,	// (0x00049dda) list_medium_line_x3_g2

0x0001,

0xfcbe,	// (0x0004ba87) list_medium_line_x3_g_ParamLimits

0xfcbe,	// (0x0004ba87) list_medium_line_x3_g

0xe01e,	// (0x00049de7) list_medium_line_x3_t1_ParamLimits

0xe01e,	// (0x00049de7) list_medium_line_x3_t1

0xe032,	// (0x00049dfb) thumb_sp_fs_scroll_pane_g1

0xe03b,	// (0x00049e04) thumb_sp_fs_scroll_pane_g2

0xe044,	// (0x00049e0d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x0004ba8c) thumb_sp_fs_scroll_pane_g

0xe032,	// (0x00049dfb) bg_sp_fs_scroll_pane_g1

0xe03b,	// (0x00049e04) bg_sp_fs_scroll_pane_g2

0xe044,	// (0x00049e0d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x0004ba8c) bg_sp_fs_scroll_pane_g

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g4_g1

0xbd7f,	// (0x00047b48) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_x2_t3_g4_g2

0xbd7f,	// (0x00047b48) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_x2_t3_g4_g3

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e0,	// (0x0004afa9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e0,	// (0x0004afa9) list_medium_line_x2_t3_g4_g

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g4_t1

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_x2_t3_g4_t2

0xbd9e,	// (0x00047b67) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbd9e,	// (0x00047b67) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x0004af9d) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x0004af9d) list_medium_line_x2_t3_g4_t

0xbd73,	// (0x00047b3c) list_medium_line_g2_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_g2_g1

0xcf81,	// (0x00048d4a) list_medium_line_g2_g2_ParamLimits

0xcf81,	// (0x00048d4a) list_medium_line_g2_g2

0x0001,

0xf990,	// (0x0004b759) list_medium_line_g2_g_ParamLimits

0xf990,	// (0x0004b759) list_medium_line_g2_g

0xbd8b,	// (0x00047b54) list_medium_line_g2_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_g2_t1

0xbd73,	// (0x00047b3c) list_medium_line_t3_g2_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_t3_g2_g1

0xcf81,	// (0x00048d4a) list_medium_line_t3_g2_g2_ParamLimits

0xcf81,	// (0x00048d4a) list_medium_line_t3_g2_g2

0x0001,

0xf990,	// (0x0004b759) list_medium_line_t3_g2_g_ParamLimits

0xf990,	// (0x0004b759) list_medium_line_t3_g2_g

0xbd8b,	// (0x00047b54) list_medium_line_t3_g2_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t3_g2_t1

0xbd8b,	// (0x00047b54) list_medium_line_t3_g2_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t3_g2_t2

0xbd8b,	// (0x00047b54) list_medium_line_t3_g2_t3_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t3_g2_t3

0x0002,

0xfcca,	// (0x0004ba93) list_medium_line_t3_g2_t_ParamLimits

0xfcca,	// (0x0004ba93) list_medium_line_t3_g2_t

0xcf2d,	// (0x00048cf6) list_medium_line_right_icon_g1

0xbddf,	// (0x00047ba8) list_medium_line_right_icon_t1

0xbd73,	// (0x00047b3c) list_medium_line_t2_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_t2_g1

0xbd8b,	// (0x00047b54) list_medium_line_t2_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t2_t1

0xbd8b,	// (0x00047b54) list_medium_line_t2_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t2_t2

0x0001,

0xf995,	// (0x0004b75e) list_medium_line_t2_t_ParamLimits

0xf995,	// (0x0004b75e) list_medium_line_t2_t

0xbd73,	// (0x00047b3c) list_medium_line_t3_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_t3_g1

0xbd8b,	// (0x00047b54) list_medium_line_t3_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t3_t1

0xbd8b,	// (0x00047b54) list_medium_line_t3_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t3_t2

0xbd8b,	// (0x00047b54) list_medium_line_t3_t3_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t3_t3

0x0002,

0xfcca,	// (0x0004ba93) list_medium_line_t3_t_ParamLimits

0xfcca,	// (0x0004ba93) list_medium_line_t3_t

0xbd73,	// (0x00047b3c) list_medium_line_g3_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_g3_g1

0xbd7f,	// (0x00047b48) list_medium_line_g3_g2_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_g3_g2

0xbd7f,	// (0x00047b48) list_medium_line_g3_g3_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_g3_g3

0x0002,

0xfcd1,	// (0x0004ba9a) list_medium_line_g3_g_ParamLimits

0xfcd1,	// (0x0004ba9a) list_medium_line_g3_g

0xbd8b,	// (0x00047b54) list_medium_line_g3_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_g3_t1

0xbd73,	// (0x00047b3c) list_medium_line_t2_g3_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_t2_g3_g1

0xbd7f,	// (0x00047b48) list_medium_line_t2_g3_g2_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_t2_g3_g2

0xbd7f,	// (0x00047b48) list_medium_line_t2_g3_g3_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_t2_g3_g3

0x0002,

0xfcd1,	// (0x0004ba9a) list_medium_line_t2_g3_g_ParamLimits

0xfcd1,	// (0x0004ba9a) list_medium_line_t2_g3_g

0xbd8b,	// (0x00047b54) list_medium_line_t2_g3_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t2_g3_t1

0xbd8b,	// (0x00047b54) list_medium_line_t2_g3_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t2_g3_t2

0x0001,

0xf995,	// (0x0004b75e) list_medium_line_t2_g3_t_ParamLimits

0xf995,	// (0x0004b75e) list_medium_line_t2_g3_t

0xbd73,	// (0x00047b3c) list_medium_line_t3_g3_g1_ParamLimits

0xbd73,	// (0x00047b3c) list_medium_line_t3_g3_g1

0xbd7f,	// (0x00047b48) list_medium_line_t3_g3_g2_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_t3_g3_g2

0xbd7f,	// (0x00047b48) list_medium_line_t3_g3_g3_ParamLimits

0xbd7f,	// (0x00047b48) list_medium_line_t3_g3_g3

0x0002,

0xfcd1,	// (0x0004ba9a) list_medium_line_t3_g3_g_ParamLimits

0xfcd1,	// (0x0004ba9a) list_medium_line_t3_g3_g

0xbd8b,	// (0x00047b54) list_medium_line_t3_g3_t1_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t3_g3_t1

0xbd8b,	// (0x00047b54) list_medium_line_t3_g3_t2_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t3_g3_t2

0xbd8b,	// (0x00047b54) list_medium_line_t3_g3_t3_ParamLimits

0xbd8b,	// (0x00047b54) list_medium_line_t3_g3_t3

0x0002,

0xfcca,	// (0x0004ba93) list_medium_line_t3_g3_t_ParamLimits

0xfcca,	// (0x0004ba93) list_medium_line_t3_g3_t

0x0eb6,	// (0x0003cc7f) list_medium_line_right_iconx2_g1

0x0eb6,	// (0x0003cc7f) list_medium_line_right_iconx2_g2

0x0001,

0xfcd8,	// (0x0004baa1) list_medium_line_right_iconx2_g

0xe04d,	// (0x00049e16) list_medium_line_right_iconx2_t1

0x0eb6,	// (0x0003cc7f) list_medium_line_t2_right_iconx2_g1

0x0eb6,	// (0x0003cc7f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd8,	// (0x0004baa1) list_medium_line_t2_right_iconx2_g

0xbddf,	// (0x00047ba8) list_medium_line_t2_right_iconx2_t1

0xbddf,	// (0x00047ba8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0004ba34) list_medium_line_t2_right_iconx2_t

0xbddf,	// (0x00047ba8) list_medium_line_x4_t4_t1

0xbddf,	// (0x00047ba8) list_medium_line_x4_t4_t2

0xbddf,	// (0x00047ba8) list_medium_line_x4_t4_t3

0xbddf,	// (0x00047ba8) list_medium_line_x4_t4_t4

0x0003,

0xf2a2,	// (0x0004b06b) list_medium_line_x4_t4_t

0xa4f0,	// (0x000462b9) tport_appsw_pane_ParamLimits

0xa4f0,	// (0x000462b9) tport_appsw_pane

0xa501,	// (0x000462ca) tport_contact_pane_ParamLimits

0xa501,	// (0x000462ca) tport_contact_pane

0xa515,	// (0x000462de) tport_listscroll_pane_ParamLimits

0xa515,	// (0x000462de) tport_listscroll_pane

0xa52d,	// (0x000462f6) cell_tport_appsw_pane_ParamLimits

0xa52d,	// (0x000462f6) cell_tport_appsw_pane

0x1ce2,	// (0x0003daab) tport_appsw_pane_g1_ParamLimits

0x1ce2,	// (0x0003daab) tport_appsw_pane_g1

0xe05c,	// (0x00049e25) tport_contact_pane_g1

0xe065,	// (0x00049e2e) tport_contact_pane_t1

0xe073,	// (0x00049e3c) tport_contact_pane_t2

0x0001,

0xfcdd,	// (0x0004baa6) tport_contact_pane_t

0xe081,	// (0x00049e4a) list_tport_pane

0x0ec8,	// (0x0003cc91) scroll_pane_cp_030

0xe092,	// (0x00049e5b) cell_tport_appsw_pane_g1

0xe0a2,	// (0x00049e6b) cell_tport_appsw_pane_t1

0xe0b0,	// (0x00049e79) grid_highlight_pane_cp019

0xa563,	// (0x0004632c) list_tport_double_graphic_pane_ParamLimits

0xa563,	// (0x0004632c) list_tport_double_graphic_pane

0x1a5e,	// (0x0003d827) list_highlight_pane_cp023_ParamLimits

0x1a5e,	// (0x0003d827) list_highlight_pane_cp023

0xa570,	// (0x00046339) list_tport_double_graphic_pane_g1_ParamLimits

0xa570,	// (0x00046339) list_tport_double_graphic_pane_g1

0xa57d,	// (0x00046346) list_tport_double_graphic_pane_t1_ParamLimits

0xa57d,	// (0x00046346) list_tport_double_graphic_pane_t1

0xa592,	// (0x0004635b) list_tport_double_graphic_pane_t2_ParamLimits

0xa592,	// (0x0004635b) list_tport_double_graphic_pane_t2

0x0001,

0xfce9,	// (0x0004bab2) list_tport_double_graphic_pane_t_ParamLimits

0xfce9,	// (0x0004bab2) list_tport_double_graphic_pane_t

0x0659,	// (0x0003c422) main_cale_note_pane

0x89b6,	// (0x0004477f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x89b6,	// (0x0004477f) cell_vitu2_function_top_wide_pane_cp01

0x9f63,	// (0x00045d2c) wait_bar_pane_cp05_ParamLimits

0x1a5e,	// (0x0003d827) listscroll_cmail_pane

0xe0c0,	// (0x00049e89) list_cmail_pane

0xa5a4,	// (0x0004636d) list_cmail_body_pane

0xa5a4,	// (0x0004636d) list_single_cmail_header_caption_pane

0xa5bb,	// (0x00046384) list_single_cmail_header_detail_pane_ParamLimits

0xa5bb,	// (0x00046384) list_single_cmail_header_detail_pane

0xe0e3,	// (0x00049eac) list_single_cmail_header_caption_pane_t1

0x3170,	// (0x0003ef39) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3170,	// (0x0003ef39) list_single_cmail_header_detail_pane_g1

0xe0fa,	// (0x00049ec3) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe0fa,	// (0x00049ec3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcee,	// (0x0004bab7) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcee,	// (0x0004bab7) list_single_cmail_header_detail_pane_g

0x3186,	// (0x0003ef4f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x3186,	// (0x0003ef4f) list_single_cmail_header_detail_pane_t1

0xe137,	// (0x00049f00) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe137,	// (0x00049f00) list_single_cmail_header_editor_pane_bg

0xe14e,	// (0x00049f17) list_cmail_body_pane_g1

0xe157,	// (0x00049f20) list_cmail_body_pane_t1

0xcd1e,	// (0x00048ae7) list_single_cmail_header_editor_pane_bg_g1

0x1239,	// (0x0003d002) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcd2e,	// (0x00048af7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcd26,	// (0x00048aef) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcf79,	// (0x00048d42) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcd4e,	// (0x00048b17) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcd3e,	// (0x00048b07) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcd46,	// (0x00048b0f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1219,	// (0x0003cfe2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa5e6,	// (0x000463af) calenote_gesture_pane_ParamLimits

0xa5e6,	// (0x000463af) calenote_gesture_pane

0xa602,	// (0x000463cb) calenote_window_pane_ParamLimits

0xa602,	// (0x000463cb) calenote_window_pane

0xe165,	// (0x00049f2e) popup_note_window_cp01

0xa61e,	// (0x000463e7) calenote_swipe_1_pane_ParamLimits

0xa61e,	// (0x000463e7) calenote_swipe_1_pane

0xa31e,	// (0x000460e7) calenote_swipe_2_pane_ParamLimits

0xa31e,	// (0x000460e7) calenote_swipe_2_pane

0xde0c,	// (0x00049bd5) calenote_swipe_1_pane_g1_ParamLimits

0xde0c,	// (0x00049bd5) calenote_swipe_1_pane_g1

0xde19,	// (0x00049be2) calenote_swipe_1_pane_g2_ParamLimits

0xde19,	// (0x00049be2) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x0004ba1c) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x0004ba1c) calenote_swipe_1_pane_g

0xe177,	// (0x00049f40) calenote_swipe_1_pane_t1_ParamLimits

0xe177,	// (0x00049f40) calenote_swipe_1_pane_t1

0xde0c,	// (0x00049bd5) calenote_swipe_2_pane_g1_ParamLimits

0xde0c,	// (0x00049bd5) calenote_swipe_2_pane_g1

0xe196,	// (0x00049f5f) calenote_swipe_2_pane_g2_ParamLimits

0xe196,	// (0x00049f5f) calenote_swipe_2_pane_g2

0x0001,

0xfcfa,	// (0x0004bac3) calenote_swipe_2_pane_g_ParamLimits

0xfcfa,	// (0x0004bac3) calenote_swipe_2_pane_g

0xe1a2,	// (0x00049f6b) calenote_swipe_2_pane_t1_ParamLimits

0xe1a2,	// (0x00049f6b) calenote_swipe_2_pane_t1

0x0659,	// (0x0003c422) main_mup_navstr_pane

0x79f2,	// (0x000437bb) main_mup3_pane_t7_ParamLimits

0x79f2,	// (0x000437bb) main_mup3_pane_t7

0xec7d,	// (0x0004aa46) main_mp4_pane_g6_ParamLimits

0xec7d,	// (0x0004aa46) main_mp4_pane_g6

0xee2f,	// (0x0004abf8) main_image3_pane_t4_ParamLimits

0xee2f,	// (0x0004abf8) main_image3_pane_t4

0xa633,	// (0x000463fc) popup_navstr_preview_pane_ParamLimits

0xa633,	// (0x000463fc) popup_navstr_preview_pane

0xa643,	// (0x0004640c) scroll_navstr_pane_ParamLimits

0xa643,	// (0x0004640c) scroll_navstr_pane

0x0659,	// (0x0003c422) bg_popup_preview_window_pane_cp04

0xe1c9,	// (0x00049f92) popup_navstr_preview_pane_t1

0xa657,	// (0x00046420) scroll_navstr_pane_g1_ParamLimits

0xa657,	// (0x00046420) scroll_navstr_pane_g1

0xa66b,	// (0x00046434) scroll_navstr_pane_t1_ParamLimits

0xa66b,	// (0x00046434) scroll_navstr_pane_t1

0xe16e,	// (0x00049f37) bg_button_pane_cp014

0xe16e,	// (0x00049f37) bg_button_pane_cp030

0xdd70,	// (0x00049b39) list_double_fisheye_pane_g4_ParamLimits

0xdd70,	// (0x00049b39) list_double_fisheye_pane_g4

0xdd7c,	// (0x00049b45) list_double_fisheye_pane_g5_ParamLimits

0xdd7c,	// (0x00049b45) list_double_fisheye_pane_g5

0xe0d7,	// (0x00049ea0) sp_fs_scroll_pane_cp03

0xdeea,	// (0x00049cb3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdef6,	// (0x00049cbf) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x0004ba39) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xa3f2,	// (0x000461bb) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe0cf,	// (0x00049e98) sp_fs_scroll_pane_cp02

0x0eda,	// (0x0003cca3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0eda,	// (0x0003cca3) popup_sp_fs_calendar_preview_list_single_pane

0x0659,	// (0x0003c422) main_cam6_pano_pane

0x1a5e,	// (0x0003d827) main_mup3_pane_ParamLimits

0x0659,	// (0x0003c422) main_phacti_pane

0x9e56,	// (0x00045c1f) bg_button_pane_cp11

0x9e6e,	// (0x00045c37) main_mobtv_info_pane_g2_ParamLimits

0x9e6e,	// (0x00045c37) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x0004b999) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x0004b999) main_mobtv_info_pane_g

0xa023,	// (0x00045dec) sc_clock_pane_t5_ParamLimits

0xa023,	// (0x00045dec) sc_clock_pane_t5

0xa0ce,	// (0x00045e97) main_radioblah_pane_g1_ParamLimits

0xdcd5,	// (0x00049a9e) main_radioblah_pane_t3_ParamLimits

0xdcd5,	// (0x00049a9e) main_radioblah_pane_t3

0xdced,	// (0x00049ab6) main_radioblah_pane_t4_ParamLimits

0xdced,	// (0x00049ab6) main_radioblah_pane_t4

0xa0f6,	// (0x00045ebf) main_radioblah_text_pane_ParamLimits

0xa0f6,	// (0x00045ebf) main_radioblah_text_pane

0xa108,	// (0x00045ed1) main_radioblah_info_pane_g1_ParamLimits

0xa19b,	// (0x00045f64) main_radioblah_info_pane_t4_ParamLimits

0xa19b,	// (0x00045f64) main_radioblah_info_pane_t4

0x1a5e,	// (0x0003d827) main_sp_fs_calendar_pane

0xa681,	// (0x0004644a) main_phacti_pane_g1

0xa689,	// (0x00046452) phacti_note_pane_ParamLimits

0xa689,	// (0x00046452) phacti_note_pane

0xe1e0,	// (0x00049fa9) phacti_term_pane_ParamLimits

0xe1e0,	// (0x00049fa9) phacti_term_pane

0xe1f5,	// (0x00049fbe) phacti_note_pane_t1_ParamLimits

0xe1f5,	// (0x00049fbe) phacti_note_pane_t1

0xe20c,	// (0x00049fd5) phacti_term_pane_g1

0xe214,	// (0x00049fdd) phacti_term_pane_t1_ParamLimits

0xe214,	// (0x00049fdd) phacti_term_pane_t1

0xe23e,	// (0x0004a007) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe246,	// (0x0004a00f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd04,	// (0x0004bacd) popup_sp_fs_calendar_preview_list_single_pane_g

0xe24e,	// (0x0004a017) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe24e,	// (0x0004a017) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe264,	// (0x0004a02d) aid_popup_sp_fs_bg_corner_pane

0x101b,	// (0x0003cde4) popup_sp_fs_calendar_preview_bg_pane_g1

0x0659,	// (0x0003c422) popup_sp_fs_calendar_preview_bg_pane

0xe26c,	// (0x0004a035) popup_sp_fs_calendar_preview_list_pane

0x1cd4,	// (0x0003da9d) bg_main_sp_fs_cale_pane_ParamLimits

0x1cd4,	// (0x0003da9d) bg_main_sp_fs_cale_pane

0xe27d,	// (0x0004a046) listscroll_cale_mrui_pane_ParamLimits

0xe27d,	// (0x0004a046) listscroll_cale_mrui_pane

0xe292,	// (0x0004a05b) listscroll_sp_fs_schedule_track_pane

0xe29b,	// (0x0004a064) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe29b,	// (0x0004a064) main_sp_fs_ctrlbar_pane_cp01

0xe2ae,	// (0x0004a077) main_sp_fs_ribbon_pane

0xe2b6,	// (0x0004a07f) popup_sp_fs_cale_preview_window

0xa6ec,	// (0x000464b5) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa6ec,	// (0x000464b5) list_single_sp_fs_schedule_track_pane

0x1a5e,	// (0x0003d827) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1a5e,	// (0x0003d827) bg_sp_fs_highlight_list_pane_cp03

0xa700,	// (0x000464c9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa700,	// (0x000464c9) list_single_sp_fs_schedule_track_pane_g1

0xa70c,	// (0x000464d5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa70c,	// (0x000464d5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd09,	// (0x0004bad2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd09,	// (0x0004bad2) list_single_sp_fs_schedule_track_pane_g

0xa718,	// (0x000464e1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa718,	// (0x000464e1) list_single_sp_fs_schedule_track_pane_t1

0xa732,	// (0x000464fb) sp_fs_schedule_track_pane_ParamLimits

0xa732,	// (0x000464fb) sp_fs_schedule_track_pane

0xe2c5,	// (0x0004a08e) sp_fs_schedule_track_pane_g1

0xe2cd,	// (0x0004a096) sp_fs_schedule_track_pane_g2

0xe2d5,	// (0x0004a09e) sp_fs_schedule_track_pane_g3

0xe2dd,	// (0x0004a0a6) sp_fs_schedule_track_pane_g4

0xe2e5,	// (0x0004a0ae) sp_fs_schedule_track_pane_g5

0x0004,

0xfd0e,	// (0x0004bad7) sp_fs_schedule_track_pane_g

0xcd1e,	// (0x00048ae7) bg_sp_fs_schedule_viewer_highlight_g1

0x1239,	// (0x0003d002) bg_sp_fs_schedule_viewer_highlight_g2

0xcd26,	// (0x00048aef) bg_sp_fs_schedule_viewer_highlight_g3

0xcd2e,	// (0x00048af7) bg_sp_fs_schedule_viewer_highlight_g4

0xcf79,	// (0x00048d42) bg_sp_fs_schedule_viewer_highlight_g5

0xcd3e,	// (0x00048b07) bg_sp_fs_schedule_viewer_highlight_g6

0xcd46,	// (0x00048b0f) bg_sp_fs_schedule_viewer_highlight_g7

0xcd4e,	// (0x00048b17) bg_sp_fs_schedule_viewer_highlight_g8

0x1219,	// (0x0003cfe2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd19,	// (0x0004bae2) bg_sp_fs_schedule_viewer_highlight_g

0x0659,	// (0x0003c422) bg_main_sp_fs_ribbon_pane

0xa743,	// (0x0004650c) main_sp_fs_ribbon_pane_g1

0xe2ed,	// (0x0004a0b6) main_sp_fs_ribbon_pane_t1

0xa74c,	// (0x00046515) main_sp_fs_ribbon_pane_t2

0xe2fc,	// (0x0004a0c5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd2c,	// (0x0004baf5) main_sp_fs_ribbon_pane_t

0xe30b,	// (0x0004a0d4) main_sp_fs_ribbon_scheduler_pane

0xe313,	// (0x0004a0dc) bg_main_sp_fs_ribbon_pane_g1

0xe31c,	// (0x0004a0e5) bg_main_sp_fs_ribbon_pane_g2

0xe325,	// (0x0004a0ee) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd33,	// (0x0004bafc) bg_main_sp_fs_ribbon_pane_g

0xe32d,	// (0x0004a0f6) main_sp_fs_ribbon_scheduler_pane_g1

0xe336,	// (0x0004a0ff) main_sp_fs_ribbon_scheduler_pane_g2

0xe33f,	// (0x0004a108) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd3a,	// (0x0004bb03) main_sp_fs_ribbon_scheduler_pane_g

0xe348,	// (0x0004a111) list_cale_mrui_pane

0xa75b,	// (0x00046524) sp_fs_scroll_pane_cp07_ParamLimits

0xa75b,	// (0x00046524) sp_fs_scroll_pane_cp07

0xa773,	// (0x0004653c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa773,	// (0x0004653c) bg_sp_fs_schedule_viewer_highlight

0xe355,	// (0x0004a11e) list_single_sp_fs_schedule_track_pane_cp01

0xe35d,	// (0x0004a126) list_sp_fs_schedule_track_pane

0xe365,	// (0x0004a12e) sp_fs_scroll_pane_cp06_ParamLimits

0xe365,	// (0x0004a12e) sp_fs_scroll_pane_cp06

0x101b,	// (0x0003cde4) bgmain_sp_fs_calendar_pane_g1

0x31c2,	// (0x0003ef8b) list_single_cale_mrui_pane_ParamLimits

0x31c2,	// (0x0003ef8b) list_single_cale_mrui_pane

0xe377,	// (0x0004a140) list_single_cale_mrui_row_pane_ParamLimits

0xe377,	// (0x0004a140) list_single_cale_mrui_row_pane

0x31e3,	// (0x0003efac) list_single_cale_mrui_row_pane_g1_ParamLimits

0x31e3,	// (0x0003efac) list_single_cale_mrui_row_pane_g1

0x321b,	// (0x0003efe4) list_single_cale_mrui_row_pane_t1_ParamLimits

0x321b,	// (0x0003efe4) list_single_cale_mrui_row_pane_t1

0x322d,	// (0x0003eff6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x322d,	// (0x0003eff6) list_single_cale_mrui_row_pane_t2

0x3293,	// (0x0003f05c) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3293,	// (0x0003f05c) list_single_cale_mrui_row_pane_t3

0x32c2,	// (0x0003f08b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x32c2,	// (0x0003f08b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd48,	// (0x0004bb11) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd48,	// (0x0004bb11) list_single_cale_mrui_row_pane_t

0x32f1,	// (0x0003f0ba) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x32f1,	// (0x0003f0ba) list_single_cmail_header_editor_pane_bg_cp01

0x3315,	// (0x0003f0de) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x3315,	// (0x0003f0de) list_single_cmail_header_editor_pane_bg_cp02

0xa783,	// (0x0004654c) main_radioblah_text_pane_t1_ParamLimits

0xa783,	// (0x0004654c) main_radioblah_text_pane_t1

0xe39a,	// (0x0004a163) cam6_indi_pane_cp01

0xe3a2,	// (0x0004a16b) cam6_mode_pane_cp01

0xe3aa,	// (0x0004a173) cam6_pano_pane

0xe3b3,	// (0x0004a17c) cam6_zoom_pane_cp01

0xe3bb,	// (0x0004a184) cam6_pano_image_pane

0xe3c4,	// (0x0004a18d) cam6_pano_pane_g1

0xda3c,	// (0x00049805) cam6_pano_pane_g2

0xe3cd,	// (0x0004a196) cam6_pano_pane_g3

0xe3d6,	// (0x0004a19f) cam6_pano_pane_g4

0xc91c,	// (0x000486e5) cam6_pano_pane_g5

0xe3df,	// (0x0004a1a8) cam6_pano_pane_g6

0xe3e7,	// (0x0004a1b0) cam6_pano_pane_g7

0xe3ef,	// (0x0004a1b8) cam6_pano_pane_g8

0xe3f8,	// (0x0004a1c1) cam6_pano_pane_g9

0x0008,

0xfd51,	// (0x0004bb1a) cam6_pano_pane_g

0x0659,	// (0x0003c422) main_browser_tag_pane

0xe1c1,	// (0x00049f8a) grid_navstr_albumart_pane

0xe401,	// (0x0004a1ca) cell_navstr_albumart_pane_ParamLimits

0xe401,	// (0x0004a1ca) cell_navstr_albumart_pane

0x1af9,	// (0x0003d8c2) cell_navstr_albumart_pane_g1

0x6a56,	// (0x0004281f) cell_navstr_albumart_pane_g2

0x6a66,	// (0x0004282f) cell_navstr_albumart_pane_g3

0x6a5e,	// (0x00042827) cell_navstr_albumart_pane_g4

0x0003,

0xfd64,	// (0x0004bb2d) cell_navstr_albumart_pane_g

0xa79c,	// (0x00046565) bt_list_pane_ParamLimits

0xa79c,	// (0x00046565) bt_list_pane

0xa7af,	// (0x00046578) bt_list_pane_t1

0xa7be,	// (0x00046587) bt_list_pane_t2

0x0001,

0xfd6d,	// (0x0004bb36) bt_list_pane_t

0x0659,	// (0x0003c422) main_cale_prevew_pane

0xa7cd,	// (0x00046596) popup_cale_preview_window_ParamLimits

0xa7cd,	// (0x00046596) popup_cale_preview_window

0x1a5e,	// (0x0003d827) bg_popup_preview_window_pane_cp05_ParamLimits

0x1a5e,	// (0x0003d827) bg_popup_preview_window_pane_cp05

0xe418,	// (0x0004a1e1) list_cale_preview_pane_ParamLimits

0xe418,	// (0x0004a1e1) list_cale_preview_pane

0xa7e2,	// (0x000465ab) list_double_cale_preview_pane_ParamLimits

0xa7e2,	// (0x000465ab) list_double_cale_preview_pane

0xa7f3,	// (0x000465bc) list_single_cale_preview_pane_ParamLimits

0xa7f3,	// (0x000465bc) list_single_cale_preview_pane

0xe424,	// (0x0004a1ed) list_single_cale_preview_pane_g1

0xe42c,	// (0x0004a1f5) list_single_cale_preview_pane_t1_ParamLimits

0xe42c,	// (0x0004a1f5) list_single_cale_preview_pane_t1

0xa807,	// (0x000465d0) list_double_cale_preview_pane_g1

0xa80f,	// (0x000465d8) list_double_cale_preview_pane_t1_ParamLimits

0xa80f,	// (0x000465d8) list_double_cale_preview_pane_t1

0xa824,	// (0x000465ed) list_double_cale_preview_pane_t2_ParamLimits

0xa824,	// (0x000465ed) list_double_cale_preview_pane_t2

0x0001,

0xfd72,	// (0x0004bb3b) list_double_cale_preview_pane_t_ParamLimits

0xfd72,	// (0x0004bb3b) list_double_cale_preview_pane_t

0x0659,	// (0x0003c422) main_ezdial_pane

0x1a5e,	// (0x0003d827) main_sp_fs_email_pane_ParamLimits

0xa368,	// (0x00046131) cmail_ddmenu_btn01_pane_ParamLimits

0xa368,	// (0x00046131) cmail_ddmenu_btn01_pane

0xa37b,	// (0x00046144) cmail_ddmenu_btn02_pane_ParamLimits

0xa37b,	// (0x00046144) cmail_ddmenu_btn02_pane

0xa39e,	// (0x00046167) cmail_ddmenu_btn03_pane_ParamLimits

0xa39e,	// (0x00046167) cmail_ddmenu_btn03_pane

0xa43b,	// (0x00046204) main_sp_fs_ctrlbar_pane_ParamLimits

0xa45c,	// (0x00046225) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa5a4,	// (0x0004636d) list_cmail_body_pane_ParamLimits

0xe0f1,	// (0x00049eba) bg_button_pane_cp12

0xe106,	// (0x00049ecf) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe106,	// (0x00049ecf) list_single_cmail_header_detail_pane_g3

0xe113,	// (0x00049edc) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe113,	// (0x00049edc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf5,	// (0x0004babe) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf5,	// (0x0004babe) list_single_cmail_header_detail_pane_t

0xe229,	// (0x00049ff2) phacti_term_pane_t2_ParamLimits

0xe229,	// (0x00049ff2) phacti_term_pane_t2

0x0001,

0xfcff,	// (0x0004bac8) phacti_term_pane_t_ParamLimits

0xfcff,	// (0x0004bac8) phacti_term_pane_t

0xe441,	// (0x0004a20a) aid_size_list_single_double

0xa83c,	// (0x00046605) popup_ezdial_listscroll_window

0xa852,	// (0x0004661b) popup_number_entry_window_cp01

0x0f9a,	// (0x0003cd63) bg_popup_call_pane_cp09

0xe44d,	// (0x0004a216) ezdial_list_pane

0xe455,	// (0x0004a21e) scroll_pane_cp23

0x1cd4,	// (0x0003da9d) bg_button_pane_cp028_ParamLimits

0x1cd4,	// (0x0003da9d) bg_button_pane_cp028

0xa85e,	// (0x00046627) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa85e,	// (0x00046627) cmail_ddmenu_btn01_pane_g1

0xa86a,	// (0x00046633) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa86a,	// (0x00046633) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd77,	// (0x0004bb40) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd77,	// (0x0004bb40) cmail_ddmenu_btn01_pane_g

0xe45d,	// (0x0004a226) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe45d,	// (0x0004a226) cmail_ddmenu_btn01_pane_t1

0x1cd4,	// (0x0003da9d) bg_button_pane_cp029_ParamLimits

0x1cd4,	// (0x0003da9d) bg_button_pane_cp029

0xa876,	// (0x0004663f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa876,	// (0x0004663f) cmail_ddmenu_btn02_pane_g1

0xa88e,	// (0x00046657) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa88e,	// (0x00046657) cmail_ddmenu_btn02_pane_t1

0x1a5e,	// (0x0003d827) bg_button_pane_cp031_ParamLimits

0x1a5e,	// (0x0003d827) bg_button_pane_cp031

0xa876,	// (0x0004663f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa876,	// (0x0004663f) cmail_ddmenu_btn03_pane_g1

0xa88e,	// (0x00046657) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa88e,	// (0x00046657) cmail_ddmenu_btn03_pane_t1

0x82fe,	// (0x000440c7) cell_dialer2_keypad_pane_t1_ParamLimits

0x8318,	// (0x000440e1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8318,	// (0x000440e1) cell_dialer2_keypad_pane_t1_copy1

0x9cc2,	// (0x00045a8b) ncimui_group_button_pane

0x1a5e,	// (0x0003d827) main_sp_fs_calendar_pane_ParamLimits

0xa5a4,	// (0x0004636d) list_single_cmail_header_caption_pane_ParamLimits

0xe274,	// (0x0004a03d) aid_recal_txt_sm_pane

0x0659,	// (0x0003c422) mian_recal_day_pane

0xe2b6,	// (0x0004a07f) popup_sp_fs_cale_preview_window_ParamLimits

0xe472,	// (0x0004a23b) list_recal_day_pane

0xe4b4,	// (0x0004a27d) list_single_recal_day_pane_ParamLimits

0xe4b4,	// (0x0004a27d) list_single_recal_day_pane

0xe4c6,	// (0x0004a28f) list_single_recal_day_pane_g1_ParamLimits

0xe4c6,	// (0x0004a28f) list_single_recal_day_pane_g1

0xe4d2,	// (0x0004a29b) list_single_recal_day_pane_g2_ParamLimits

0xe4d2,	// (0x0004a29b) list_single_recal_day_pane_g2

0xe4de,	// (0x0004a2a7) list_single_recal_day_pane_g3_ParamLimits

0xe4de,	// (0x0004a2a7) list_single_recal_day_pane_g3

0x3333,	// (0x0003f0fc) list_single_recal_day_pane_g4_ParamLimits

0x3333,	// (0x0003f0fc) list_single_recal_day_pane_g4

0xe4ea,	// (0x0004a2b3) list_single_recal_day_pane_g5_ParamLimits

0xe4ea,	// (0x0004a2b3) list_single_recal_day_pane_g5

0x334b,	// (0x0003f114) list_single_recal_day_pane_g6_ParamLimits

0x334b,	// (0x0003f114) list_single_recal_day_pane_g6

0x0004,

0xfd86,	// (0x0004bb4f) list_single_recal_day_pane_g_ParamLimits

0xfd86,	// (0x0004bb4f) list_single_recal_day_pane_g

0xe4fe,	// (0x0004a2c7) list_single_recal_day_pane_t1

0x3357,	// (0x0003f120) list_single_recal_day_pane_t2

0x0001,

0xfd91,	// (0x0004bb5a) list_single_recal_day_pane_t

0xa8b2,	// (0x0004667b) ncimui_query_button_pane_ParamLimits

0xa8b2,	// (0x0004667b) ncimui_query_button_pane

0xa8c2,	// (0x0004668b) ncimui_query_button_pane_t1_ParamLimits

0xa8c2,	// (0x0004668b) ncimui_query_button_pane_t1

0xe510,	// (0x0004a2d9) ncimui_query_button_pane_t2_ParamLimits

0xe510,	// (0x0004a2d9) ncimui_query_button_pane_t2

0x0001,

0xfd96,	// (0x0004bb5f) ncimui_query_button_pane_t_ParamLimits

0xfd96,	// (0x0004bb5f) ncimui_query_button_pane_t

0xa8d5,	// (0x0004669e) query_button_pane_ParamLimits

0xa8d5,	// (0x0004669e) query_button_pane

0x0659,	// (0x0003c422) bg_button_pane_cp0028

0xe523,	// (0x0004a2ec) query_button_pane_t1

0x6e84,	// (0x00042c4d) main_tport_pane_ParamLimits

0xa4b7,	// (0x00046280) bg_popup_window_pane_cp01_ParamLimits

0xa4b7,	// (0x00046280) bg_popup_window_pane_cp01

0xa4ce,	// (0x00046297) heading_pane_cp08_ParamLimits

0xa4ce,	// (0x00046297) heading_pane_cp08

0xa4df,	// (0x000462a8) heading_pane_cp07_ParamLimits

0xa4df,	// (0x000462a8) heading_pane_cp07

0xe092,	// (0x00049e5b) cell_tport_appsw_pane_g2

0x0002,

0xfce2,	// (0x0004baab) cell_tport_appsw_pane_g

0x2c1e,	// (0x0003e9e7) input_candi_list_open_g1

0x13e6,	// (0x0003d1af) list_cale_time_pane_g6_ParamLimits

0x13e6,	// (0x0003d1af) list_cale_time_pane_g6

0x7483,	// (0x0004324c) aid_size_touch_calib_1_ParamLimits

0x7483,	// (0x0004324c) aid_size_touch_calib_1

0x7495,	// (0x0004325e) aid_size_touch_calib_2_ParamLimits

0x7495,	// (0x0004325e) aid_size_touch_calib_2

0x74ab,	// (0x00043274) aid_size_touch_calib_3_ParamLimits

0x74ab,	// (0x00043274) aid_size_touch_calib_3

0x74c3,	// (0x0004328c) aid_size_touch_calib_4_ParamLimits

0x74c3,	// (0x0004328c) aid_size_touch_calib_4

0x74d7,	// (0x000432a0) main_touch_calib_button_group_pane_ParamLimits

0x74d7,	// (0x000432a0) main_touch_calib_button_group_pane

0x74ef,	// (0x000432b8) main_touch_calib_pane_g1_ParamLimits

0x7501,	// (0x000432ca) main_touch_calib_pane_g2_ParamLimits

0x7513,	// (0x000432dc) main_touch_calib_pane_g3_ParamLimits

0x7525,	// (0x000432ee) main_touch_calib_pane_g4_ParamLimits

0xf6dd,	// (0x0004b4a6) main_touch_calib_pane_g_ParamLimits

0x7537,	// (0x00043300) main_touch_calib_pane_t1_ParamLimits

0x754f,	// (0x00043318) main_touch_calib_pane_t2_ParamLimits

0x7567,	// (0x00043330) main_touch_calib_pane_t3_ParamLimits

0x7579,	// (0x00043342) main_touch_calib_pane_t4_ParamLimits

0x758b,	// (0x00043354) main_touch_calib_pane_t5_ParamLimits

0xf6e6,	// (0x0004b4af) main_touch_calib_pane_t_ParamLimits

0xc71d,	// (0x000484e6) list_single_fp_cale_pane_g3_ParamLimits

0xc71d,	// (0x000484e6) list_single_fp_cale_pane_g3

0x1a5e,	// (0x0003d827) bg_button_pane_cp012_ParamLimits

0x1a5e,	// (0x0003d827) bg_vkb2_func_pane_cp03_ParamLimits

0x9108,	// (0x00044ed1) cell_vitu2_function_top_pane_g1_ParamLimits

0x1a5e,	// (0x0003d827) bg_vkb2_func_pane_cp04_ParamLimits

0x9c52,	// (0x00045a1b) main_ncimui_button_group_pane_ParamLimits

0x9c52,	// (0x00045a1b) main_ncimui_button_group_pane

0x9cb0,	// (0x00045a79) main_ncimui_pane_t3_ParamLimits

0x9cb0,	// (0x00045a79) main_ncimui_pane_t3

0xe1d7,	// (0x00049fa0) phacti_button_group_pane

0xe441,	// (0x0004a20a) aid_size_list_single_double_ParamLimits

0xa83c,	// (0x00046605) popup_ezdial_listscroll_window_ParamLimits

0xa852,	// (0x0004661b) popup_number_entry_window_cp01_ParamLimits

0xa8e7,	// (0x000466b0) phacti_button_pane_ParamLimits

0xa8e7,	// (0x000466b0) phacti_button_pane

0x0659,	// (0x0003c422) bg_button_pane_cp14

0xe531,	// (0x0004a2fa) phacti_button_pane_t1

0xa8f6,	// (0x000466bf) main_touch_calib_button_pane_ParamLimits

0xa8f6,	// (0x000466bf) main_touch_calib_button_pane

0x0dcd,	// (0x0003cb96) bg_button_pane_cp18_ParamLimits

0x0dcd,	// (0x0003cb96) bg_button_pane_cp18

0xa911,	// (0x000466da) main_touch_calib_button_pane_t1_ParamLimits

0xa911,	// (0x000466da) main_touch_calib_button_pane_t1

0xa927,	// (0x000466f0) main_touch_calib_button_pane_t2_ParamLimits

0xa927,	// (0x000466f0) main_touch_calib_button_pane_t2

0x0001,

0xfd9b,	// (0x0004bb64) main_touch_calib_button_pane_t_ParamLimits

0xfd9b,	// (0x0004bb64) main_touch_calib_button_pane_t

0x0659,	// (0x0003c422) cell_ncimui_button_pane

0x0659,	// (0x0003c422) bg_button_pane_cp032

0xe53f,	// (0x0004a308) cell_ncimui_button_pane_t1

0xee0f,	// (0x0004abd8) image3_infobar_pane_ParamLimits

0xee0f,	// (0x0004abd8) image3_infobar_pane

0xa04b,	// (0x00045e14) fs_bigclock_status_pane_ParamLimits

0xa04b,	// (0x00045e14) fs_bigclock_status_pane

0xa058,	// (0x00045e21) main_fs_bigclock_clock_pane_ParamLimits

0xa058,	// (0x00045e21) main_fs_bigclock_clock_pane

0xa07a,	// (0x00045e43) main_fs_bigclock_indi_pane_ParamLimits

0xa07a,	// (0x00045e43) main_fs_bigclock_indi_pane

0xa0a4,	// (0x00045e6d) main_fs_bigclock_swipe_pane_ParamLimits

0xa0a4,	// (0x00045e6d) main_fs_bigclock_swipe_pane

0x0659,	// (0x0003c422) main_fs_clock_dumped_data

0xdb49,	// (0x00049912) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb49,	// (0x00049912) list_single_fs_bigclock_indicator_pane_g1

0xdb63,	// (0x0004992c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb63,	// (0x0004992c) list_single_fs_bigclock_indicator_pane_g2

0xdb7d,	// (0x00049946) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb7d,	// (0x00049946) list_single_fs_bigclock_indicator_pane_g3

0xdb97,	// (0x00049960) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdb97,	// (0x00049960) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x0004b9cd) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x0004b9cd) list_single_fs_bigclock_indicator_pane_g

0xdbc0,	// (0x00049989) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdbc0,	// (0x00049989) list_single_fs_bigclock_indicator_pane_t1

0xdbe8,	// (0x000499b1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdbe8,	// (0x000499b1) list_single_fs_bigclock_indicator_pane_t2

0xdc10,	// (0x000499d9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc10,	// (0x000499d9) list_single_fs_bigclock_indicator_pane_t3

0xdc38,	// (0x00049a01) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc38,	// (0x00049a01) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x0004b9d8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x0004b9d8) list_single_fs_bigclock_indicator_pane_t

0xe54d,	// (0x0004a316) image3_infobar_fav_pane_ParamLimits

0xe54d,	// (0x0004a316) image3_infobar_fav_pane

0xe55d,	// (0x0004a326) image3_infobar_loc_pane_ParamLimits

0xe55d,	// (0x0004a326) image3_infobar_loc_pane

0xe571,	// (0x0004a33a) image3_infobar_time_pane_ParamLimits

0xe571,	// (0x0004a33a) image3_infobar_time_pane

0x101b,	// (0x0003cde4) image3_infobar_time_pane_g1

0xe581,	// (0x0004a34a) image3_infobar_time_pane_t1

0x101b,	// (0x0003cde4) image3_infobar_loc_pane_g1

0xe58f,	// (0x0004a358) image3_infobar_loc_pane_g2

0x0001,

0xfda0,	// (0x0004bb69) image3_infobar_loc_pane_g

0xe597,	// (0x0004a360) image3_infobar_loc_pane_t1

0x101b,	// (0x0003cde4) image3_infobar_fav_pane_g1

0xe5a5,	// (0x0004a36e) image3_infobar_fav_pane_g2

0x0001,

0xfda5,	// (0x0004bb6e) image3_infobar_fav_pane_g

0xe5ad,	// (0x0004a376) fs_bigclock_status_battery_pane

0xe5b6,	// (0x0004a37f) fs_bigclock_status_signal_pane

0xe5bf,	// (0x0004a388) fs_bigclock_status_title_pane

0xe5c8,	// (0x0004a391) fs_bigclock_status_signal_pane_g1

0xe5d1,	// (0x0004a39a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdaa,	// (0x0004bb73) fs_bigclock_status_signal_pane_g

0xe5d9,	// (0x0004a3a2) fs_bigclock_status_battery_pane_g1

0xe5e2,	// (0x0004a3ab) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdaf,	// (0x0004bb78) fs_bigclock_status_battery_pane_g

0xe5ea,	// (0x0004a3b3) fs_bigclock_status_title_pane_t1

0xa945,	// (0x0004670e) main_fs_bigclock_clock_pane_g1

0xa957,	// (0x00046720) main_fs_bigclock_clock_pane_g2

0xa968,	// (0x00046731) main_fs_bigclock_clock_pane_g3

0xa968,	// (0x00046731) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdb4,	// (0x0004bb7d) main_fs_bigclock_clock_pane_g

0xa97b,	// (0x00046744) main_fs_bigclock_clock_pane_t1

0xa996,	// (0x0004675f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdbd,	// (0x0004bb86) main_fs_bigclock_clock_pane_t

0xe5f8,	// (0x0004a3c1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe5f8,	// (0x0004a3c1) list_single_fs_bigclock_indicator_pane

0xe609,	// (0x0004a3d2) list_single_fs_bigclock_pane_ParamLimits

0xe609,	// (0x0004a3d2) list_single_fs_bigclock_pane

0xe62f,	// (0x0004a3f8) main_fs_bigclock_indicator_pane_t1

0xe63e,	// (0x0004a407) list_single_fs_bigclock_pane_g1

0xe646,	// (0x0004a40f) list_single_fs_bigclock_pane_t1

0x101b,	// (0x0003cde4) main_fs_bigclock_swipe_pane_g1

0xe686,	// (0x0004a44f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdce,	// (0x0004bb97) main_fs_bigclock_swipe_pane_g

0xe68e,	// (0x0004a457) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe68e,	// (0x0004a457) main_fs_bigclock_swipe_pane_t1

0x5127,	// (0x00040ef0) call_type_pane_ParamLimits

0x0659,	// (0x0003c422) main_btmg_pane

0x320f,	// (0x0003efd8) list_single_cale_mrui_row_pane_g2_ParamLimits

0x320f,	// (0x0003efd8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd41,	// (0x0004bb0a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd41,	// (0x0004bb0a) list_single_cale_mrui_row_pane_g

0xe49b,	// (0x0004a264) list_recal_vselct_arw_lo_pane

0xe4a3,	// (0x0004a26c) list_recal_vselct_arw_up_pane

0xe4ab,	// (0x0004a274) list_recal_vselct_pane

0xe6ab,	// (0x0004a474) btmg_button_pane

0xa9f6,	// (0x000467bf) main_btmg_pane_g1

0x0659,	// (0x0003c422) bg_button_pane_cp044

0xe6b3,	// (0x0004a47c) btmg_button_pane_t1

0x6e5c,	// (0x00042c25) aid_listscroll_gen

0x1a5e,	// (0x0003d827) main_cntbar_detail_pane

0xe0b8,	// (0x00049e81) list_cmail_folder_pane

0xe0d7,	// (0x00049ea0) sp_fs_scroll_pane_cp03_ParamLimits

0xa5a4,	// (0x0004636d) list_single_fs_dyc_pane_cp01_ParamLimits

0xa5a4,	// (0x0004636d) list_single_fs_dyc_pane_cp01

0xe6c1,	// (0x0004a48a) aid_size_cmail_indent

0xe6ca,	// (0x0004a493) list_single_dyc_row_pane_cp01

0xaa26,	// (0x000467ef) cntbar_detail_list_pane_ParamLimits

0xaa26,	// (0x000467ef) cntbar_detail_list_pane

0xaa6c,	// (0x00046835) main_cntbar_detail_cont_pane_ParamLimits

0xaa6c,	// (0x00046835) main_cntbar_detail_cont_pane

0xaa80,	// (0x00046849) scroll_pane_cp032_ParamLimits

0xaa80,	// (0x00046849) scroll_pane_cp032

0xaa8c,	// (0x00046855) cntbar_detail_list_event_pane_ParamLimits

0xaa8c,	// (0x00046855) cntbar_detail_list_event_pane

0xaa36,	// (0x000467ff) cntbar_detail_list_shct_pane

0xe6d3,	// (0x0004a49c) aid_list_gen

0x0ec8,	// (0x0003cc91) aid_scroll

0xd294,	// (0x0004905d) aid_size_touch_scroll_bar

0xd2bf,	// (0x00049088) aid_list_double

0x95a0,	// (0x00045369) aid_list_single

0x95a0,	// (0x00045369) aid_list_single_lg

0x3369,	// (0x0003f132) aid_list_z_g_a_sm

0x3371,	// (0x0003f13a) aid_list_z_g_d

0x3379,	// (0x0003f142) aid_txt_z_prm

0xe6dc,	// (0x0004a4a5) aid_txt_z_prm_cp01

0xe6ea,	// (0x0004a4b3) aid_txt_z_sec

0xaa9d,	// (0x00046866) main_cntbar_detail_cont_pane_g1_ParamLimits

0xaa9d,	// (0x00046866) main_cntbar_detail_cont_pane_g1

0xaab1,	// (0x0004687a) main_cntbar_detail_cont_pane_g2_ParamLimits

0xaab1,	// (0x0004687a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdd3,	// (0x0004bb9c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdd3,	// (0x0004bb9c) main_cntbar_detail_cont_pane_g

0xe6f8,	// (0x0004a4c1) main_cntbar_detail_cont_pane_t1

0xe706,	// (0x0004a4cf) main_cntbar_detail_cont_pane_t2

0xe714,	// (0x0004a4dd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdd8,	// (0x0004bba1) main_cntbar_detail_cont_pane_t

0xaac1,	// (0x0004688a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xaac1,	// (0x0004688a) cell_cntbar_detail_list_shct_pane

0xe722,	// (0x0004a4eb) cntbar_detail_list_shct_pane_g1

0xe72b,	// (0x0004a4f4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfddf,	// (0x0004bba8) cntbar_detail_list_shct_pane_g

0xaad3,	// (0x0004689c) cntbar_detail_list_event_pane_g1_ParamLimits

0xaad3,	// (0x0004689c) cntbar_detail_list_event_pane_g1

0xaadf,	// (0x000468a8) cntbar_detail_list_event_pane_g2_ParamLimits

0xaadf,	// (0x000468a8) cntbar_detail_list_event_pane_g2

0x0005,

0xfde4,	// (0x0004bbad) cntbar_detail_list_event_pane_g_ParamLimits

0xfde4,	// (0x0004bbad) cntbar_detail_list_event_pane_g

0xab4b,	// (0x00046914) cntbar_detail_list_event_pane_t1_ParamLimits

0xab4b,	// (0x00046914) cntbar_detail_list_event_pane_t1

0xab60,	// (0x00046929) cntbar_detail_list_event_pane_t2_ParamLimits

0xab60,	// (0x00046929) cntbar_detail_list_event_pane_t2

0x0002,

0xfdf1,	// (0x0004bbba) cntbar_detail_list_event_pane_t_ParamLimits

0xfdf1,	// (0x0004bbba) cntbar_detail_list_event_pane_t

0x101b,	// (0x0003cde4) cell_cntbar_detail_list_shct_pane_g1

0x1953,	// (0x0003d71c) navi_pane_mv_g3

0x1a5e,	// (0x0003d827) main_cntbar_detail_pane_ParamLimits

0x0659,	// (0x0003c422) main_notif_wgt_pane

0xec0b,	// (0x0004a9d4) aid_tch_main_mp4_pane_g4

0xee07,	// (0x0004abd0) popup_slider_window_cp02

0xe491,	// (0x0004a25a) list_recal_day_event_pane

0xa9fe,	// (0x000467c7) cntbar_detail_btn_pane_ParamLimits

0xa9fe,	// (0x000467c7) cntbar_detail_btn_pane

0xaa11,	// (0x000467da) cntbar_detail_btn_pane_cp01_ParamLimits

0xaa11,	// (0x000467da) cntbar_detail_btn_pane_cp01

0xaa36,	// (0x000467ff) cntbar_detail_list_shct_pane_ParamLimits

0xaa46,	// (0x0004680f) cntbar_detail_pane_g1_ParamLimits

0xaa46,	// (0x0004680f) cntbar_detail_pane_g1

0xaa56,	// (0x0004681f) cntbar_detail_pane_t1_ParamLimits

0xaa56,	// (0x0004681f) cntbar_detail_pane_t1

0xaaeb,	// (0x000468b4) cntbar_detail_list_event_pane_g3_ParamLimits

0xaaeb,	// (0x000468b4) cntbar_detail_list_event_pane_g3

0xab03,	// (0x000468cc) cntbar_detail_list_event_pane_g4_ParamLimits

0xab03,	// (0x000468cc) cntbar_detail_list_event_pane_g4

0xab1b,	// (0x000468e4) cntbar_detail_list_event_pane_g5_ParamLimits

0xab1b,	// (0x000468e4) cntbar_detail_list_event_pane_g5

0xab33,	// (0x000468fc) cntbar_detail_list_event_pane_g6_ParamLimits

0xab33,	// (0x000468fc) cntbar_detail_list_event_pane_g6

0xab75,	// (0x0004693e) cntbar_detail_list_event_pane_t3_ParamLimits

0xab75,	// (0x0004693e) cntbar_detail_list_event_pane_t3

0xab87,	// (0x00046950) popup_notif_wgt_window_ParamLimits

0xab87,	// (0x00046950) popup_notif_wgt_window

0xab9c,	// (0x00046965) popup_submenu_window_cp01_ParamLimits

0xab9c,	// (0x00046965) popup_submenu_window_cp01

0x0f9a,	// (0x0003cd63) bg_popup_window_pane_cp10

0xe734,	// (0x0004a4fd) listscroll_notif_wgt_pane

0xe745,	// (0x0004a50e) list_notif_wgt_window

0xe74e,	// (0x0004a517) scroll_pane_cp033

0xabac,	// (0x00046975) list_notif_wgt_row_pane_ParamLimits

0xabac,	// (0x00046975) list_notif_wgt_row_pane

0xe757,	// (0x0004a520) aid_size_list_notif_wgt_del

0xe764,	// (0x0004a52d) list_notif_wgt_row_pane_g1

0xe770,	// (0x0004a539) list_notif_wgt_row_pane_g2

0xe784,	// (0x0004a54d) list_notif_wgt_row_pane_g3

0x0002,

0xfdf8,	// (0x0004bbc1) list_notif_wgt_row_pane_g

0xe791,	// (0x0004a55a) list_notif_wgt_row_pane_t1

0xe7a7,	// (0x0004a570) list_notif_wgt_row_pane_t2

0xe7b9,	// (0x0004a582) list_notif_wgt_row_pane_t3

0x0002,

0xfdff,	// (0x0004bbc8) list_notif_wgt_row_pane_t

0xcf8e,	// (0x00048d57) list_recal_day_event_pane_g1

0xe7cb,	// (0x0004a594) list_recal_day_event_pane_t1

0x0659,	// (0x0003c422) bg_button_pane_cp045

0xabbc,	// (0x00046985) cntbar_detail_btn_pane_t1

0x1cd4,	// (0x0003da9d) main_callh_pane_ParamLimits

0x1cd4,	// (0x0003da9d) main_callh_pane

0x0659,	// (0x0003c422) main_coverflow0_pane

0x0659,	// (0x0003c422) main_wgtman_pane

0xa0b8,	// (0x00045e81) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa0b8,	// (0x00045e81) main_fs_bigclock_unlock_btn_pane

0xe08a,	// (0x00049e53) bg_button_pane_cp16

0xe09a,	// (0x00049e63) cell_tport_appsw_pane_g3

0xabca,	// (0x00046993) cf0_flow_pane_ParamLimits

0xabca,	// (0x00046993) cf0_flow_pane

0xe7da,	// (0x0004a5a3) listscroll_cf0_pane

0xe7e3,	// (0x0004a5ac) main_cf0_pane_g1

0xabdf,	// (0x000469a8) main_cf0_pane_t1_ParamLimits

0xabdf,	// (0x000469a8) main_cf0_pane_t1

0xabf4,	// (0x000469bd) main_cf0_pane_t2_ParamLimits

0xabf4,	// (0x000469bd) main_cf0_pane_t2

0x0001,

0xfe0b,	// (0x0004bbd4) main_cf0_pane_t_ParamLimits

0xfe0b,	// (0x0004bbd4) main_cf0_pane_t

0xe7f5,	// (0x0004a5be) scroll_pane_cp11

0xac09,	// (0x000469d2) cf0_flow_pane_g1

0xac11,	// (0x000469da) cf0_flow_pane_g2

0x0001,

0xfe10,	// (0x0004bbd9) cf0_flow_pane_g

0xac19,	// (0x000469e2) cf0_flow_pane_t1

0x0659,	// (0x0003c422) main_call6_pane

0x0659,	// (0x0003c422) main_calllock_pane

0xac27,	// (0x000469f0) call6_btn_grp_pane_ParamLimits

0xac27,	// (0x000469f0) call6_btn_grp_pane

0xac3d,	// (0x00046a06) call6_pane_g1_ParamLimits

0xac3d,	// (0x00046a06) call6_pane_g1

0xac50,	// (0x00046a19) popup_call6_1st_window_ParamLimits

0xac50,	// (0x00046a19) popup_call6_1st_window

0xac5f,	// (0x00046a28) popup_call6_2nd_window_ParamLimits

0xac5f,	// (0x00046a28) popup_call6_2nd_window

0xac6e,	// (0x00046a37) cell_call6_btn_pane_ParamLimits

0xac6e,	// (0x00046a37) cell_call6_btn_pane

0x0f9a,	// (0x0003cd63) bg_popup_call2_in_pane_cp03

0xe7fe,	// (0x0004a5c7) popup_call6_1st_window_g1

0xe806,	// (0x0004a5cf) popup_call6_1st_window_g2

0xe80e,	// (0x0004a5d7) popup_call6_1st_window_g3

0x0002,

0xfe15,	// (0x0004bbde) popup_call6_1st_window_g

0xe816,	// (0x0004a5df) popup_call6_1st_window_t1

0xe825,	// (0x0004a5ee) popup_call6_1st_window_t2

0xe833,	// (0x0004a5fc) popup_call6_1st_window_t3

0x0002,

0xfe1c,	// (0x0004bbe5) popup_call6_1st_window_t

0x0f9a,	// (0x0003cd63) bg_popup_call2_in_pane_cp04

0xe841,	// (0x0004a60a) popup_call6_2nd_window_g1

0xe849,	// (0x0004a612) popup_call6_2nd_window_g2

0xe851,	// (0x0004a61a) popup_call6_2nd_window_g3

0x0002,

0xfe23,	// (0x0004bbec) popup_call6_2nd_window_g

0xe859,	// (0x0004a622) popup_call6_2nd_window_t1

0x0659,	// (0x0003c422) bg_button_pane_cp15

0xf047,	// (0x0004ae10) cell_call6_btn_pane_g1

0xf050,	// (0x0004ae19) cell_call6_btn_pane_t1

0xac82,	// (0x00046a4b) listscroll_wgtman_pane_ParamLimits

0xac82,	// (0x00046a4b) listscroll_wgtman_pane

0xaca3,	// (0x00046a6c) wgtman_btn_pane_ParamLimits

0xaca3,	// (0x00046a6c) wgtman_btn_pane

0x16b3,	// (0x0003d47c) aid_scroll_copy1

0xe868,	// (0x0004a631) list_wgtman_pane

0xace3,	// (0x00046aac) wgtman_btn_pane_g1_ParamLimits

0xace3,	// (0x00046aac) wgtman_btn_pane_g1

0xad0f,	// (0x00046ad8) wgtman_btn_pane_t1_ParamLimits

0xad0f,	// (0x00046ad8) wgtman_btn_pane_t1

0xe872,	// (0x0004a63b) wgtman_btn_pane_t2_ParamLimits

0xe872,	// (0x0004a63b) wgtman_btn_pane_t2

0x0001,

0xfe2a,	// (0x0004bbf3) wgtman_btn_pane_t_ParamLimits

0xfe2a,	// (0x0004bbf3) wgtman_btn_pane_t

0xad4c,	// (0x00046b15) listrow_wgtman_pane_ParamLimits

0xad4c,	// (0x00046b15) listrow_wgtman_pane

0xad5e,	// (0x00046b27) listrow_wgtman_pane_g1

0xad6b,	// (0x00046b34) listrow_wgtman_pane_g2

0x0001,

0xfe2f,	// (0x0004bbf8) listrow_wgtman_pane_g

0x3387,	// (0x0003f150) listrow_wgtman_pane_t1

0x339f,	// (0x0003f168) listrow_wgtman_pane_t2

0x0001,

0xfe34,	// (0x0004bbfd) listrow_wgtman_pane_t

0x33c5,	// (0x0003f18e) wait_bar_pane_cp09

0xe889,	// (0x0004a652) main_calllock_btn_pane

0xe891,	// (0x0004a65a) main_calllock_pane_g1

0x0659,	// (0x0003c422) bg_button_pane_cp17

0xe89a,	// (0x0004a663) main_calllock_btn_pane_g1

0xe8a3,	// (0x0004a66c) main_calllock_btn_pane_t1

0x0659,	// (0x0003c422) main_dialer3_pane

0x0659,	// (0x0003c422) main_fmrd2_pane

0x101b,	// (0x0003cde4) main_fs_bigclock_unlock_btn_pane_g1

0xe8ba,	// (0x0004a683) main_fs_bigclock_unlock_btn_pane_t1

0xad83,	// (0x00046b4c) area_fmrd2_info_pane_ParamLimits

0xad83,	// (0x00046b4c) area_fmrd2_info_pane

0xad92,	// (0x00046b5b) area_fmrd2_visual_pane_ParamLimits

0xad92,	// (0x00046b5b) area_fmrd2_visual_pane

0xada0,	// (0x00046b69) fmrd2_indi_pane_ParamLimits

0xada0,	// (0x00046b69) fmrd2_indi_pane

0xadad,	// (0x00046b76) area_fmrd2_visual_pane_g1

0xadb5,	// (0x00046b7e) area_fmrd2_visual_pane_t1

0xadc3,	// (0x00046b8c) area_fmrd2_visual_pane_t2

0xadd1,	// (0x00046b9a) area_fmrd2_visual_pane_t3

0x0002,

0xfe3e,	// (0x0004bc07) area_fmrd2_visual_pane_t

0xaddf,	// (0x00046ba8) area_fmrd2_info_pane_g1

0xade7,	// (0x00046bb0) area_fmrd2_info_pane_t1

0xadf5,	// (0x00046bbe) area_fmrd2_info_pane_t2

0xae03,	// (0x00046bcc) area_fmrd2_info_pane_t3

0xae11,	// (0x00046bda) area_fmrd2_info_pane_t4

0x0003,

0xfe45,	// (0x0004bc0e) area_fmrd2_info_pane_t

0xae1f,	// (0x00046be8) fmrd2_indi_pane_t1

0xae2d,	// (0x00046bf6) fmrd2_indi_pane_t2

0xae3b,	// (0x00046c04) fmrd2_indi_pane_t3

0x0002,

0xfe4e,	// (0x0004bc17) fmrd2_indi_pane_t

0xdba6,	// (0x0004996f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdba6,	// (0x0004996f) list_single_fs_bigclock_indicator_pane_g5

0xdc54,	// (0x00049a1d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc54,	// (0x00049a1d) list_single_fs_bigclock_indicator_pane_t5

0xa69d,	// (0x00046466) aid_cell_bcale_month_pane_ParamLimits

0xa69d,	// (0x00046466) aid_cell_bcale_month_pane

0xa6bb,	// (0x00046484) bcale_month_pane_ParamLimits

0xa6bb,	// (0x00046484) bcale_month_pane

0xa6d3,	// (0x0004649c) bcale_preview_pane_ParamLimits

0xa6d3,	// (0x0004649c) bcale_preview_pane

0xe646,	// (0x0004a40f) list_single_fs_bigclock_pane_t1_ParamLimits

0xe662,	// (0x0004a42b) list_single_fs_bigclock_pane_t2_ParamLimits

0xe662,	// (0x0004a42b) list_single_fs_bigclock_pane_t2

0x0001,

0xfdc9,	// (0x0004bb92) list_single_fs_bigclock_pane_t_ParamLimits

0xfdc9,	// (0x0004bb92) list_single_fs_bigclock_pane_t

0xe8b2,	// (0x0004a67b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe39,	// (0x0004bc02) main_fs_bigclock_unlock_btn_pane_g

0xae49,	// (0x00046c12) aid_dia3_key_size_ParamLimits

0xae49,	// (0x00046c12) aid_dia3_key_size

0xae58,	// (0x00046c21) aid_dia3_listrow_size_ParamLimits

0xae58,	// (0x00046c21) aid_dia3_listrow_size

0xae6b,	// (0x00046c34) dia3_keypad_fun_pane_ParamLimits

0xae6b,	// (0x00046c34) dia3_keypad_fun_pane

0xae7f,	// (0x00046c48) dia3_keypad_num_pane_ParamLimits

0xae7f,	// (0x00046c48) dia3_keypad_num_pane

0xae90,	// (0x00046c59) dia3_listscroll_pane_ParamLimits

0xae90,	// (0x00046c59) dia3_listscroll_pane

0xaea1,	// (0x00046c6a) dia3_numentry_pane_ParamLimits

0xaea1,	// (0x00046c6a) dia3_numentry_pane

0xe8c8,	// (0x0004a691) dia3_list_pane

0xe8d1,	// (0x0004a69a) scroll_pane_cp12

0x0659,	// (0x0003c422) bg_dia3_numentry_pane

0xaeb5,	// (0x00046c7e) dia3_numentry_pane_t1

0xaec4,	// (0x00046c8d) cell_dia3_key_num_pane

0xaecc,	// (0x00046c95) cell_dia3_key0_fun_pane_ParamLimits

0xaecc,	// (0x00046c95) cell_dia3_key0_fun_pane

0xaee0,	// (0x00046ca9) cell_dia3_key1_fun_pane_ParamLimits

0xaee0,	// (0x00046ca9) cell_dia3_key1_fun_pane

0xaef7,	// (0x00046cc0) dia3_listrow_pane

0xd8b5,	// (0x0004967e) bg_dia3_numentry_pane_g1

0x0659,	// (0x0003c422) bg_button_pane_cp21

0xe8da,	// (0x0004a6a3) cell_dia3_key_num_pane_t1

0xe8e8,	// (0x0004a6b1) cell_dia3_key_num_pane_t2

0xe8f7,	// (0x0004a6c0) cell_dia3_key_num_pane_t3

0xe906,	// (0x0004a6cf) cell_dia3_key_num_pane_t4

0x0003,

0xfe55,	// (0x0004bc1e) cell_dia3_key_num_pane_t

0x0659,	// (0x0003c422) bg_button_pane_cp19

0xe915,	// (0x0004a6de) cell_dia3_key0_fun_pane_g1

0x0659,	// (0x0003c422) bg_button_pane_cp20

0xaf09,	// (0x00046cd2) cell_dia3_key1_fun_pane_g1

0xaf11,	// (0x00046cda) area_left_week_number_pane

0xaf1d,	// (0x00046ce6) area_top_day_name_pane

0xaf2e,	// (0x00046cf7) frame_month_view_pane

0xe91d,	// (0x0004a6e6) grid_month_view_pane

0xaf3f,	// (0x00046d08) cell_top_day_name_pane_ParamLimits

0xaf3f,	// (0x00046d08) cell_top_day_name_pane

0xaf62,	// (0x00046d2b) cell_area_left_week_number_pane_ParamLimits

0xaf62,	// (0x00046d2b) cell_area_left_week_number_pane

0xaf76,	// (0x00046d3f) cell_month_view_pane_ParamLimits

0xaf76,	// (0x00046d3f) cell_month_view_pane

0xe92b,	// (0x0004a6f4) frm_month_g1

0xaf9b,	// (0x00046d64) frm_month_g2

0xafac,	// (0x00046d75) frm_month_g3

0xafbd,	// (0x00046d86) frm_month_g4

0xafce,	// (0x00046d97) frm_month_g5

0xafdf,	// (0x00046da8) frm_month_g6

0xaff0,	// (0x00046db9) frm_month_g7

0xe938,	// (0x0004a701) frm_month_g8

0xb001,	// (0x00046dca) frm_month_g9

0xb011,	// (0x00046dda) frm_month_g10

0xb021,	// (0x00046dea) frm_month_g11

0xb031,	// (0x00046dfa) frm_month_g12

0xb041,	// (0x00046e0a) frm_month_g13

0xb051,	// (0x00046e1a) frm_month_g14

0xb061,	// (0x00046e2a) frm_month_g15

0xb073,	// (0x00046e3c) frm_month_g16

0x000f,

0xfe5e,	// (0x0004bc27) frm_month_g

0xe945,	// (0x0004a70e) cell_top_day_name_pane_t1

0xb085,	// (0x00046e4e) cell_area_left_week_number_pane_g1

0xb091,	// (0x00046e5a) cell_area_left_week_number_pane_t1

0x0d57,	// (0x0003cb20) cell_month_view_pane_g1

0xb0a4,	// (0x00046e6d) cell_month_view_pane_t1

0x0659,	// (0x0003c422) main_fps_pane

0xdeb2,	// (0x00049c7b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdeb2,	// (0x00049c7b) cmail_ddmenu_btn02_pane_cp1

0xdece,	// (0x00049c97) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdece,	// (0x00049c97) cmail_ddmenu_btn02_pane_cp2

0xa882,	// (0x0004664b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa882,	// (0x0004664b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd7c,	// (0x0004bb45) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd7c,	// (0x0004bb45) cmail_ddmenu_btn02_pane_g

0xa8a0,	// (0x00046669) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa8a0,	// (0x00046669) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd81,	// (0x0004bb4a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd81,	// (0x0004bb4a) cmail_ddmenu_btn02_pane_t

0xb0b7,	// (0x00046e80) fps_text_pane_ParamLimits

0xb0b7,	// (0x00046e80) fps_text_pane

0xb0cd,	// (0x00046e96) main_fps_pane_g1_ParamLimits

0xb0cd,	// (0x00046e96) main_fps_pane_g1

0xb0e3,	// (0x00046eac) wait_bar_pane_cp010_ParamLimits

0xb0e3,	// (0x00046eac) wait_bar_pane_cp010

0xb0f4,	// (0x00046ebd) fps_text_pane_t1_ParamLimits

0xb0f4,	// (0x00046ebd) fps_text_pane_t1

0xccae,	// (0x00048a77) cam4_image_uncrop_pane_g1

0xccb7,	// (0x00048a80) cam4_image_uncrop_pane_g2

0x873f,	// (0x00044508) cam4_image_uncrop_pane_g3

0x8748,	// (0x00044511) cam4_image_uncrop_pane_g4

0x0003,

0xf87e,	// (0x0004b647) cam4_image_uncrop_pane_g

0xaef7,	// (0x00046cc0) dia3_listrow_pane_ParamLimits

0x0659,	// (0x0003c422) main_phob2_pane

0xa53e,	// (0x00046307) cell_tport_appsw_pane_cp02_ParamLimits

0xa53e,	// (0x00046307) cell_tport_appsw_pane_cp02

0xa54e,	// (0x00046317) cell_tport_appsw_pane_cp03_ParamLimits

0xa54e,	// (0x00046317) cell_tport_appsw_pane_cp03

0x0659,	// (0x0003c422) phob2_contact_card_pane

0x0659,	// (0x0003c422) phob2_listscroll_pane

0xe958,	// (0x0004a721) phob2_list_pane

0xe960,	// (0x0004a729) scroll_pane_cp034

0xb10c,	// (0x00046ed5) phob2_cc_data_pane_ParamLimits

0xb10c,	// (0x00046ed5) phob2_cc_data_pane

0xb129,	// (0x00046ef2) phob2_cc_listscroll_pane_ParamLimits

0xb129,	// (0x00046ef2) phob2_cc_listscroll_pane

0xad4c,	// (0x00046b15) list_double_large_graphic_phob2_pane_ParamLimits

0xad4c,	// (0x00046b15) list_double_large_graphic_phob2_pane

0xb145,	// (0x00046f0e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb145,	// (0x00046f0e) list_double_large_graphic_phob2_pane_g1

0x33d7,	// (0x0003f1a0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x33d7,	// (0x0003f1a0) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe7f,	// (0x0004bc48) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe7f,	// (0x0004bc48) list_double_large_graphic_phob2_pane_g

0x33fb,	// (0x0003f1c4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x33fb,	// (0x0003f1c4) list_double_large_graphic_phob2_pane_t1

0x3410,	// (0x0003f1d9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x3410,	// (0x0003f1d9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe88,	// (0x0004bc51) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe88,	// (0x0004bc51) list_double_large_graphic_phob2_pane_t

0x0659,	// (0x0003c422) list_highlight_pane_cp024

0xe968,	// (0x0004a731) phob2_cc_button_pane

0xb152,	// (0x00046f1b) phob2_cc_data_pane_g1_ParamLimits

0xb152,	// (0x00046f1b) phob2_cc_data_pane_g1

0xb169,	// (0x00046f32) phob2_cc_data_pane_g2_ParamLimits

0xb169,	// (0x00046f32) phob2_cc_data_pane_g2

0x0001,

0xfe8d,	// (0x0004bc56) phob2_cc_data_pane_g_ParamLimits

0xfe8d,	// (0x0004bc56) phob2_cc_data_pane_g

0xb17b,	// (0x00046f44) phob2_cc_data_pane_t1_ParamLimits

0xb17b,	// (0x00046f44) phob2_cc_data_pane_t1

0xb193,	// (0x00046f5c) phob2_cc_data_pane_t2_ParamLimits

0xb193,	// (0x00046f5c) phob2_cc_data_pane_t2

0xb1ab,	// (0x00046f74) phob2_cc_data_pane_t3_ParamLimits

0xb1ab,	// (0x00046f74) phob2_cc_data_pane_t3

0x0002,

0xfe92,	// (0x0004bc5b) phob2_cc_data_pane_t_ParamLimits

0xfe92,	// (0x0004bc5b) phob2_cc_data_pane_t

0xe970,	// (0x0004a739) phob2_cc_list_pane_ParamLimits

0xe970,	// (0x0004a739) phob2_cc_list_pane

0xd7d2,	// (0x0004959b) scroll_pane_cp035_ParamLimits

0xd7d2,	// (0x0004959b) scroll_pane_cp035

0x1a5e,	// (0x0003d827) bg_button_pane_cp033

0xe97c,	// (0x0004a745) phob2_cc_button_pane_g1

0xe988,	// (0x0004a751) phob2_cc_button_pane_t1

0xe99d,	// (0x0004a766) phob2_cc_button_pane_t2

0x0001,

0xfe99,	// (0x0004bc62) phob2_cc_button_pane_t

0xb1c3,	// (0x00046f8c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb1c3,	// (0x00046f8c) list_double_large_graphic_phob2_cc_pane

0xb1f1,	// (0x00046fba) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb1f1,	// (0x00046fba) list_double_large_graphic_phob2_cc_pane_g1

0x3425,	// (0x0003f1ee) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x3425,	// (0x0003f1ee) list_double_large_graphic_phob2_cc_pane_g2

0x3431,	// (0x0003f1fa) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x3431,	// (0x0003f1fa) list_double_large_graphic_phob2_cc_pane_g3

0x343d,	// (0x0003f206) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x343d,	// (0x0003f206) list_double_large_graphic_phob2_cc_pane_g4

0x3449,	// (0x0003f212) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x3449,	// (0x0003f212) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe9e,	// (0x0004bc67) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe9e,	// (0x0004bc67) list_double_large_graphic_phob2_cc_pane_g

0x3455,	// (0x0003f21e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x3455,	// (0x0003f21e) list_double_large_graphic_phob2_cc_pane_t1

0x347e,	// (0x0003f247) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x347e,	// (0x0003f247) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea9,	// (0x0004bc72) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea9,	// (0x0004bc72) list_double_large_graphic_phob2_cc_pane_t

0xe9af,	// (0x0004a778) list_highlight_pane_cp025_ParamLimits

0xe9af,	// (0x0004a778) list_highlight_pane_cp025

0x1a5e,	// (0x0003d827) bg_button_pane_cp033_ParamLimits

0xe97c,	// (0x0004a745) phob2_cc_button_pane_g1_ParamLimits

0xe988,	// (0x0004a751) phob2_cc_button_pane_t1_ParamLimits

0xe99d,	// (0x0004a766) phob2_cc_button_pane_t2_ParamLimits

0xfe99,	// (0x0004bc62) phob2_cc_button_pane_t_ParamLimits

0x369e,	// (0x0003f467) popup_wgtman_window

0xd8d5,	// (0x0004969e) scroll_pane_cp038

0xacc5,	// (0x00046a8e) wgtman_btn_pane_cp_01_ParamLimits

0xacc5,	// (0x00046a8e) wgtman_btn_pane_cp_01

0xe9bd,	// (0x0004a786) wgtman_content_pane

0xe9c6,	// (0x0004a78f) wgtman_heading_pane

0x0659,	// (0x0003c422) bg_heading_pane_cp02

0xe9cf,	// (0x0004a798) wgtman_heading_pane_g1

0xe9d7,	// (0x0004a7a0) wgtman_heading_pane_t1

0xe9e5,	// (0x0004a7ae) scroll_pane_cp036

0xe9ed,	// (0x0004a7b6) wgtman_list_pane

0xe9f5,	// (0x0004a7be) wgtman_list_pane_t1_ParamLimits

0xe9f5,	// (0x0004a7be) wgtman_list_pane_t1

0xee93,	// (0x0004ac5c) cam4_grid_pane

0x2dfd,	// (0x0003ebc6) bg_button_pane_cp015_ParamLimits

0x9286,	// (0x0004504f) bg_button_pane_cp016_ParamLimits

0x9292,	// (0x0004505b) bg_button_pane_cp017_ParamLimits

0x92ad,	// (0x00045076) popup_vitu2_query_window_g3_ParamLimits

0x92ad,	// (0x00045076) popup_vitu2_query_window_g3

0x2eb2,	// (0x0003ec7b) popup_vitu2_query_window_t6_ParamLimits

0x2eb2,	// (0x0003ec7b) popup_vitu2_query_window_t6

0x2edd,	// (0x0003eca6) popup_vitu2_query_window_t7_ParamLimits

0x2edd,	// (0x0003eca6) popup_vitu2_query_window_t7

0xccae,	// (0x00048a77) cam4_grid_pane_g1

0xccb7,	// (0x00048a80) cam4_grid_pane_g2

0xea0c,	// (0x0004a7d5) cam4_grid_pane_g3

0xea15,	// (0x0004a7de) cam4_grid_pane_g4

0x0003,

0xfeae,	// (0x0004bc77) cam4_grid_pane_g

0x428a,	// (0x00040053) aid_placing_vt_slider_lsc_ParamLimits

0x44fa,	// (0x000402c3) vidtel_button_pane_ParamLimits

0x44fa,	// (0x000402c3) vidtel_button_pane

0x0659,	// (0x0003c422) bg_button_pane_cp034

0xb1fd,	// (0x00046fc6) vidtel_button_pane_g1

0xb205,	// (0x00046fce) vidtel_button_pane_t1

0xcf71,	// (0x00048d3a) aid_size_vtel_slider_touch

0xd7d2,	// (0x0004959b) scroll_pane_cp039

0xd904,	// (0x000496cd) ncim_query_button_pane_cp01_ParamLimits

0xd923,	// (0x000496ec) ncimui_query_pane_g1_ParamLimits

0x1a5e,	// (0x0003d827) input_focus_pane_cp012_ParamLimits

0xd948,	// (0x00049711) ncim_query_entry_pane_t1_ParamLimits

0xd7d2,	// (0x0004959b) scroll_pane_cp039_ParamLimits

0x186e,	// (0x0003d637) navi_pane_bcale_mc_g1

0x1876,	// (0x0003d63f) navi_pane_bcale_mc_t1

0xdf02,	// (0x00049ccb) main_sp_fs_email_pane_g1

0xdf0e,	// (0x00049cd7) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x0004ba42) main_sp_fs_email_pane_g

0xe38d,	// (0x0004a156) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe38d,	// (0x0004a156) list_single_cale_mrui_row_pane_g3

0x3341,	// (0x0003f10a) list_single_recal_day_pane_g5_event_pane

0xe4f6,	// (0x0004a2bf) list_single_recal_day_pane_g7

0xea1e,	// (0x0004a7e7) list_recal_day_event_pane_cp01

0xea27,	// (0x0004a7f0) list_recal_vselct_arw_lo_pane_cp01

0xea2f,	// (0x0004a7f8) list_recal_vselct_arw_up_pane_cp01

0xea37,	// (0x0004a800) list_recal_vselct_pane_cp01

0xcf8e,	// (0x00048d57) list_recal_day_event_pane_cp01_g1

0xea41,	// (0x0004a80a) list_recal_day_event_pane_cp01_t1

0xe4fe,	// (0x0004a2c7) list_single_recal_day_pane_t1_ParamLimits

0x3357,	// (0x0003f120) list_single_recal_day_pane_t2_ParamLimits

0xfd91,	// (0x0004bb5a) list_single_recal_day_pane_t_ParamLimits

0x0cdd,	// (0x0003caa6) bg_notes_pane_ParamLimits

0x0da7,	// (0x0003cb70) list_notes_pane_ParamLimits

0x38a0,	// (0x0003f669) scroll_pane_cp06_ParamLimits

0x0dcd,	// (0x0003cb96) main_notes_pane_ParamLimits

0x1a5e,	// (0x0003d827) main_welc_pane

0xb242,	// (0x0004700b) main_welc_body_pane_ParamLimits

0xb242,	// (0x0004700b) main_welc_body_pane

0xb25e,	// (0x00047027) main_welc_opti_pane_ParamLimits

0xb25e,	// (0x00047027) main_welc_opti_pane

0xb2d2,	// (0x0004709b) main_welc_pane_t1_ParamLimits

0xb2d2,	// (0x0004709b) main_welc_pane_t1

0xb482,	// (0x0004724b) main_welc_body_row_pane_ParamLimits

0xb482,	// (0x0004724b) main_welc_body_row_pane

0x0663,	// (0x0003c42c) main_welc_opti_row_pane_ParamLimits

0x0663,	// (0x0003c42c) main_welc_opti_row_pane

0xea5f,	// (0x0004a828) main_welc_opti_row_pane_g1

0xb495,	// (0x0004725e) main_welc_opti_row_pane_t1

0xea67,	// (0x0004a830) main_welc_body_row_pane_t1

0xe73d,	// (0x0004a506) popup_notif_wgt_heading_pane

0xe757,	// (0x0004a520) aid_size_list_notif_wgt_del_ParamLimits

0xe764,	// (0x0004a52d) list_notif_wgt_row_pane_g1_ParamLimits

0xe770,	// (0x0004a539) list_notif_wgt_row_pane_g2_ParamLimits

0xe784,	// (0x0004a54d) list_notif_wgt_row_pane_g3_ParamLimits

0xfdf8,	// (0x0004bbc1) list_notif_wgt_row_pane_g_ParamLimits

0xe791,	// (0x0004a55a) list_notif_wgt_row_pane_t1_ParamLimits

0xe7a7,	// (0x0004a570) list_notif_wgt_row_pane_t2_ParamLimits

0xe7b9,	// (0x0004a582) list_notif_wgt_row_pane_t3_ParamLimits

0xfdff,	// (0x0004bbc8) list_notif_wgt_row_pane_t_ParamLimits

0xad5e,	// (0x00046b27) listrow_wgtman_pane_g1_ParamLimits

0xad6b,	// (0x00046b34) listrow_wgtman_pane_g2_ParamLimits

0xfe2f,	// (0x0004bbf8) listrow_wgtman_pane_g_ParamLimits

0x3387,	// (0x0003f150) listrow_wgtman_pane_t1_ParamLimits

0x339f,	// (0x0003f168) listrow_wgtman_pane_t2_ParamLimits

0xfe34,	// (0x0004bbfd) listrow_wgtman_pane_t_ParamLimits

0x33c5,	// (0x0003f18e) wait_bar_pane_cp09_ParamLimits

0x0659,	// (0x0003c422) bg_popup_heading_pane_cp02

0xea76,	// (0x0004a83f) popup_notif_wgt_heading_pane_g1

0xea7e,	// (0x0004a847) popup_notif_wgt_heading_pane_t1

0x6e98,	// (0x00042c61) main_vids_pane

0x0659,	// (0x0003c422) vids_listscroll_pane

0xb4a4,	// (0x0004726d) scroll_pane_cp040

0x0659,	// (0x0003c422) vids_list_pane

0xea8c,	// (0x0004a855) vids_list_double_pane_ParamLimits

0xea8c,	// (0x0004a855) vids_list_double_pane

0xb4af,	// (0x00047278) vids_list_double_pane_g1

0xb4b8,	// (0x00047281) vids_list_double_pane_t1

0xb4c7,	// (0x00047290) vids_list_double_pane_t2

0x0001,

0xfecd,	// (0x0004bc96) vids_list_double_pane_t

0x1a5e,	// (0x0003d827) main_ncimui_pane_ParamLimits

0x9c64,	// (0x00045a2d) main_ncimui_pane_g1_ParamLimits

0x9c70,	// (0x00045a39) main_ncimui_pane_g2_ParamLimits

0x9c70,	// (0x00045a39) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x0004b943) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x0004b943) main_ncimui_pane_g

0xb275,	// (0x0004703e) main_welc_pane_g1_ParamLimits

0xb275,	// (0x0004703e) main_welc_pane_g1

0xb288,	// (0x00047051) main_welc_pane_g2_ParamLimits

0xb288,	// (0x00047051) main_welc_pane_g2

0x0003,

0xfeb7,	// (0x0004bc80) main_welc_pane_g_ParamLimits

0xfeb7,	// (0x0004bc80) main_welc_pane_g

0x0cdd,	// (0x0003caa6) listscroll_mce_pane_ParamLimits

0x541e,	// (0x000411e7) wait_bar_pane_cp10

0x6e64,	// (0x00042c2d) main_cale_day_pane_ParamLimits

0x6e64,	// (0x00042c2d) main_cale_week_pane_ParamLimits

0x0cdd,	// (0x0003caa6) main_messa_pane_ParamLimits

0x7cb3,	// (0x00043a7c) main_clock2_btn_pane_ParamLimits

0x7cb3,	// (0x00043a7c) main_clock2_btn_pane

0xc76f,	// (0x00048538) main_clock2_btn_pane_cp01_ParamLimits

0xc76f,	// (0x00048538) main_clock2_btn_pane_cp01

0xe348,	// (0x0004a111) list_cale_mrui_pane_ParamLimits

0xe7ed,	// (0x0004a5b6) main_cf0_pane_g2

0x0001,

0xfe06,	// (0x0004bbcf) main_cf0_pane_g

0xaf11,	// (0x00046cda) area_left_week_number_pane_ParamLimits

0xaf1d,	// (0x00046ce6) area_top_day_name_pane_ParamLimits

0xaf2e,	// (0x00046cf7) frame_month_view_pane_ParamLimits

0xe91d,	// (0x0004a6e6) grid_month_view_pane_ParamLimits

0xe92b,	// (0x0004a6f4) frm_month_g1_ParamLimits

0xaf9b,	// (0x00046d64) frm_month_g2_ParamLimits

0xafac,	// (0x00046d75) frm_month_g3_ParamLimits

0xafbd,	// (0x00046d86) frm_month_g4_ParamLimits

0xafce,	// (0x00046d97) frm_month_g5_ParamLimits

0xafdf,	// (0x00046da8) frm_month_g6_ParamLimits

0xaff0,	// (0x00046db9) frm_month_g7_ParamLimits

0xe938,	// (0x0004a701) frm_month_g8_ParamLimits

0xb001,	// (0x00046dca) frm_month_g9_ParamLimits

0xb011,	// (0x00046dda) frm_month_g10_ParamLimits

0xb021,	// (0x00046dea) frm_month_g11_ParamLimits

0xb031,	// (0x00046dfa) frm_month_g12_ParamLimits

0xb041,	// (0x00046e0a) frm_month_g13_ParamLimits

0xb051,	// (0x00046e1a) frm_month_g14_ParamLimits

0xb061,	// (0x00046e2a) frm_month_g15_ParamLimits

0xb073,	// (0x00046e3c) frm_month_g16_ParamLimits

0xfe5e,	// (0x0004bc27) frm_month_g_ParamLimits

0xe945,	// (0x0004a70e) cell_top_day_name_pane_t1_ParamLimits

0xb085,	// (0x00046e4e) cell_area_left_week_number_pane_g1_ParamLimits

0xb091,	// (0x00046e5a) cell_area_left_week_number_pane_t1_ParamLimits

0x0d57,	// (0x0003cb20) cell_month_view_pane_g1_ParamLimits

0xb0a4,	// (0x00046e6d) cell_month_view_pane_t1_ParamLimits

0x0cd5,	// (0x0003ca9e) main_clock2_btn_pane_g1

0xea9c,	// (0x0004a865) main_clock2_btn_pane_t1

0x1a5e,	// (0x0003d827) listscroll_cmail_pane_ParamLimits

0xdf02,	// (0x00049ccb) main_sp_fs_email_pane_g1_ParamLimits

0xdf0e,	// (0x00049cd7) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x0004ba42) main_sp_fs_email_pane_g_ParamLimits

0xe472,	// (0x0004a23b) list_recal_day_pane_ParamLimits

0xe483,	// (0x0004a24c) mian_recal_day_pane_t1

0x30c3,	// (0x0003ee8c) list_single_dyc_row_text_pane_t4_ParamLimits

0x30c3,	// (0x0003ee8c) list_single_dyc_row_text_pane_t4

0x30fa,	// (0x0003eec3) list_single_dyc_row_text_pane_t5_ParamLimits

0x30fa,	// (0x0003eec3) list_single_dyc_row_text_pane_t5

0xdfa7,	// (0x00049d70) list_single_dyc_row_text_pane_t6_ParamLimits

0xdfa7,	// (0x00049d70) list_single_dyc_row_text_pane_t6

0x5065,	// (0x00040e2e) aid_mgn_list_cale_time_pane

0x1a5e,	// (0x0003d827) main_gallery2_pane_ParamLimits

0xc783,	// (0x0004854c) main_clock2_pane_cp01_t1

0xc791,	// (0x0004855a) main_clock2_pane_cp01_t3

0x0001,

0xf750,	// (0x0004b519) main_clock2_pane_cp01_t

0x3c15,	// (0x0003f9de) cale_week_scroll_pane_g16_ParamLimits

0x3c15,	// (0x0003f9de) cale_week_scroll_pane_g16

0x0f9a,	// (0x0003cd63) vorec_slider_pane

0xb205,	// (0x00046fce) vidtel_button_pane_t1_ParamLimits

0xa945,	// (0x0004670e) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa957,	// (0x00046720) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa968,	// (0x00046731) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa968,	// (0x00046731) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdb4,	// (0x0004bb7d) main_fs_bigclock_clock_pane_g_ParamLimits

0xa97b,	// (0x00046744) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa996,	// (0x0004675f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdbd,	// (0x0004bb86) main_fs_bigclock_clock_pane_t_ParamLimits

0x75d5,	// (0x0004339e) main_mup3_lyrics_pane_ParamLimits

0x75d5,	// (0x0004339e) main_mup3_lyrics_pane

0xb4f9,	// (0x000472c2) main_mup3_lyrics_pane_t1_ParamLimits

0xb4f9,	// (0x000472c2) main_mup3_lyrics_pane_t1

0xebf7,	// (0x0004a9c0) aid_main_mp4_pane_t1_area

0xec01,	// (0x0004a9ca) aid_main_mp4_pane_t2_area

0xecab,	// (0x0004aa74) main_mp4_pane_g7_ParamLimits

0xecab,	// (0x0004aa74) main_mp4_pane_g7

0xecb7,	// (0x0004aa80) main_mp4_pane_g8_ParamLimits

0xecb7,	// (0x0004aa80) main_mp4_pane_g8

0x85c1,	// (0x0004438a) aid_call6_pane_g1_size

0xb1dd,	// (0x00046fa6) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb1dd,	// (0x00046fa6) list_double_large_graphic_phob2_other_pane

0x17c1,	// (0x0003d58a) list_double_large_graphic_phob2_other_pane_g1

0x0659,	// (0x0003c422) list_highlight_pane_cp026

0x1a5e,	// (0x0003d827) main_welc_pane_ParamLimits

0xa3c0,	// (0x00046189) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa3c0,	// (0x00046189) main_sp_fs_ctrlbar_pane_g3

0xa3d8,	// (0x000461a1) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xa3d8,	// (0x000461a1) main_sp_fs_ctrlbar_pane_g4

0xa41a,	// (0x000461e3) toolbar2_fixed_button_pane_cp01

0xa425,	// (0x000461ee) toolbar2_fixed_button_pane_cp02

0xa430,	// (0x000461f9) toolbar2_fixed_button_pane_cp03

0xb22e,	// (0x00046ff7) list_welc_entry_pane_ParamLimits

0xb22e,	// (0x00046ff7) list_welc_entry_pane

0xb29b,	// (0x00047064) main_welc_pane_g3_ParamLimits

0xb29b,	// (0x00047064) main_welc_pane_g3

0xb2ec,	// (0x000470b5) main_welc_pane_t2_ParamLimits

0xb2ec,	// (0x000470b5) main_welc_pane_t2

0xb303,	// (0x000470cc) main_welc_pane_t3_ParamLimits

0xb303,	// (0x000470cc) main_welc_pane_t3

0x0005,

0xfec0,	// (0x0004bc89) main_welc_pane_t_ParamLimits

0xfec0,	// (0x0004bc89) main_welc_pane_t

0xb413,	// (0x000471dc) welc_button_pane_ParamLimits

0xb413,	// (0x000471dc) welc_button_pane

0xb471,	// (0x0004723a) welc_service_logo_pane_ParamLimits

0xb471,	// (0x0004723a) welc_service_logo_pane

0xb518,	// (0x000472e1) list_single_welc_entry_pane_ParamLimits

0xb518,	// (0x000472e1) list_single_welc_entry_pane

0xb529,	// (0x000472f2) list_single_welc_entry_pane_g1

0xb531,	// (0x000472fa) list_single_welc_entry_pane_t1

0xb53f,	// (0x00047308) list_single_welc_entry_pane_t2

0x0001,

0xfed2,	// (0x0004bc9b) list_single_welc_entry_pane_t

0x0659,	// (0x0003c422) bg_button_pane_cp035

0xb54d,	// (0x00047316) welc_button_pane_t1

0xeaaa,	// (0x0004a873) welc_service_logo_pane_g1

0xeab3,	// (0x0004a87c) welc_service_logo_pane_g2

0x0001,

0xfed7,	// (0x0004bca0) welc_service_logo_pane_g

0x0659,	// (0x0003c422) main_int_radio_pane

0x0e44,	// (0x0003cc0d) list_single_fs_dyc_pane_g1

0x33e3,	// (0x0003f1ac) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x33e3,	// (0x0003f1ac) list_double_large_graphic_phob2_pane_g3

0x33ef,	// (0x0003f1b8) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x33ef,	// (0x0003f1b8) list_double_large_graphic_phob2_pane_g4

0xb55b,	// (0x00047324) main_int_radio1_pane_ParamLimits

0xb55b,	// (0x00047324) main_int_radio1_pane

0xeabc,	// (0x0004a885) find_pane_cp02

0xb578,	// (0x00047341) input_focus_pane_cp12_ParamLimits

0xb578,	// (0x00047341) input_focus_pane_cp12

0xb588,	// (0x00047351) input_focus_pane_cp13_ParamLimits

0xb588,	// (0x00047351) input_focus_pane_cp13

0xb59c,	// (0x00047365) input_focus_pane_cp14_ParamLimits

0xb59c,	// (0x00047365) input_focus_pane_cp14

0xeac5,	// (0x0004a88e) int_radio1_listscroll_pane

0xb5b0,	// (0x00047379) main_int_radio1_pane_g1_ParamLimits

0xb5b0,	// (0x00047379) main_int_radio1_pane_g1

0xb5c4,	// (0x0004738d) main_int_radio1_pane_t1_ParamLimits

0xb5c4,	// (0x0004738d) main_int_radio1_pane_t1

0xb5db,	// (0x000473a4) main_int_radio1_pane_t2_ParamLimits

0xb5db,	// (0x000473a4) main_int_radio1_pane_t2

0xb5f2,	// (0x000473bb) main_int_radio1_pane_t3_ParamLimits

0xb5f2,	// (0x000473bb) main_int_radio1_pane_t3

0xb609,	// (0x000473d2) main_int_radio1_pane_t4_ParamLimits

0xb609,	// (0x000473d2) main_int_radio1_pane_t4

0xeacf,	// (0x0004a898) main_int_radio1_pane_t5_ParamLimits

0xeacf,	// (0x0004a898) main_int_radio1_pane_t5

0xb61b,	// (0x000473e4) main_int_radio1_pane_t6_ParamLimits

0xb61b,	// (0x000473e4) main_int_radio1_pane_t6

0xb630,	// (0x000473f9) main_int_radio1_pane_t7_ParamLimits

0xb630,	// (0x000473f9) main_int_radio1_pane_t7

0xb645,	// (0x0004740e) main_int_radio1_pane_t8_ParamLimits

0xb645,	// (0x0004740e) main_int_radio1_pane_t8

0xb662,	// (0x0004742b) main_int_radio1_pane_t9_ParamLimits

0xb662,	// (0x0004742b) main_int_radio1_pane_t9

0xb674,	// (0x0004743d) main_int_radio1_pane_t10_ParamLimits

0xb674,	// (0x0004743d) main_int_radio1_pane_t10

0xb698,	// (0x00047461) main_int_radio1_pane_t11_ParamLimits

0xb698,	// (0x00047461) main_int_radio1_pane_t11

0xb6bc,	// (0x00047485) main_int_radio1_pane_t12_ParamLimits

0xb6bc,	// (0x00047485) main_int_radio1_pane_t12

0x000b,

0xfedc,	// (0x0004bca5) main_int_radio1_pane_t_ParamLimits

0xfedc,	// (0x0004bca5) main_int_radio1_pane_t

0xeae1,	// (0x0004a8aa) int_radio_list_pane

0xe960,	// (0x0004a729) scroll_pane_cp037

0xeae9,	// (0x0004a8b2) list_double_large_graphic_int_radio_pane_ParamLimits

0xeae9,	// (0x0004a8b2) list_double_large_graphic_int_radio_pane

0xeafa,	// (0x0004a8c3) list_double_large_graphic_int_radio_pane_g1

0xeb03,	// (0x0004a8cc) list_double_large_graphic_int_radio_pane_t1

0xeb11,	// (0x0004a8da) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfef5,	// (0x0004bcbe) list_double_large_graphic_int_radio_pane_t

0x0659,	// (0x0003c422) list_highlight_pane_cp027

0xea4f,	// (0x0004a818) main_button_pane_4

0xb2ae,	// (0x00047077) main_welc_pane_g4_ParamLimits

0xb2ae,	// (0x00047077) main_welc_pane_g4

0xb31a,	// (0x000470e3) main_welc_pane_t4_ParamLimits

0xb31a,	// (0x000470e3) main_welc_pane_t4

0xb331,	// (0x000470fa) main_welc_pane_t5_ParamLimits

0xb331,	// (0x000470fa) main_welc_pane_t5

0xb36c,	// (0x00047135) main_welc_pane_t6_ParamLimits

0xb36c,	// (0x00047135) main_welc_pane_t6

0xb426,	// (0x000471ef) welc_button_pane_2_ParamLimits

0xb426,	// (0x000471ef) welc_button_pane_2

0xb43a,	// (0x00047203) welc_button_pane_3_ParamLimits

0xb43a,	// (0x00047203) welc_button_pane_3

0xea57,	// (0x0004a820) welc_button_pane_4

0xb451,	// (0x0004721a) welc_button_pane_5_ParamLimits

0xb451,	// (0x0004721a) welc_button_pane_5

0x34df,	// (0x0003f2a8) main_popup_welc_pane

0xeb2e,	// (0x0004a8f7) main_welc_sk_g3

0xeb38,	// (0x0004a901) main_welc_sk_g4

0xeb42,	// (0x0004a90b) main_welc_sk_t3

0xeb50,	// (0x0004a919) main_welc_sk_t4

0xeb5e,	// (0x0004a927) popup_welc_pane_t4

0xeb6c,	// (0x0004a935) popup_welc_pane_t5

0xeb7a,	// (0x0004a943) popup_welc_pane_t6

0x0659,	// (0x0003c422) main_acti_pane

0x0659,	// (0x0003c422) main_sso_pane

0xb6ce,	// (0x00047497) sso_body_pane_ParamLimits

0xb6ce,	// (0x00047497) sso_body_pane

0xb6e2,	// (0x000474ab) sso_logo_pane_ParamLimits

0xb6e2,	// (0x000474ab) sso_logo_pane

0xb70a,	// (0x000474d3) sso_sk_pane_ParamLimits

0xb70a,	// (0x000474d3) sso_sk_pane

0x101b,	// (0x0003cde4) main_sso_logo_pane_g1

0xb71c,	// (0x000474e5) sso_sk_pane_t1_ParamLimits

0xb71c,	// (0x000474e5) sso_sk_pane_t1

0xb735,	// (0x000474fe) sso_sk_pane_t2_ParamLimits

0xb735,	// (0x000474fe) sso_sk_pane_t2

0x0001,

0xfefa,	// (0x0004bcc3) sso_sk_pane_t_ParamLimits

0xfefa,	// (0x0004bcc3) sso_sk_pane_t

0xebb2,	// (0x0004a97b) aid_sso_gap

0xebbb,	// (0x0004a984) aid_sso_txt1

0xebc3,	// (0x0004a98c) aid_sso_txt2

0xebcb,	// (0x0004a994) aid_sso_txt3

0x0002,

0xfeff,	// (0x0004bcc8) aid_sso_txt

0xebd3,	// (0x0004a99c) aid_sso_widget

0xb795,	// (0x0004755e) sso_btn_pane_ParamLimits

0xb795,	// (0x0004755e) sso_btn_pane

0xb807,	// (0x000475d0) sso_option_pane_ParamLimits

0xb807,	// (0x000475d0) sso_option_pane

0xb865,	// (0x0004762e) sso_query_pane_ParamLimits

0xb865,	// (0x0004762e) sso_query_pane

0xb8a5,	// (0x0004766e) sso_query_pane_cp01_ParamLimits

0xb8a5,	// (0x0004766e) sso_query_pane_cp01

0xb8e7,	// (0x000476b0) sso_t_hdr_pane_ParamLimits

0xb8e7,	// (0x000476b0) sso_t_hdr_pane

0xb90b,	// (0x000476d4) sso_t_nml_pane_ParamLimits

0xb90b,	// (0x000476d4) sso_t_nml_pane

0xebcb,	// (0x0004a994) sso_t_sub_pane

0xb6ef,	// (0x000474b8) sso_popup_window_ParamLimits

0xb6ef,	// (0x000474b8) sso_popup_window

0xb74b,	// (0x00047514) sso_apps_pane_ParamLimits

0xb74b,	// (0x00047514) sso_apps_pane

0xb771,	// (0x0004753a) sso_body_pane_g1

0xb779,	// (0x00047542) sso_body_pane_t1

0xb787,	// (0x00047550) sso_body_pane_t2

0x0001,

0xff06,	// (0x0004bccf) sso_body_pane_t

0xb7d7,	// (0x000475a0) sso_btn_pane_cp01_ParamLimits

0xb7d7,	// (0x000475a0) sso_btn_pane_cp01

0xb83f,	// (0x00047608) sso_prog_pane_ParamLimits

0xb83f,	// (0x00047608) sso_prog_pane

0xb955,	// (0x0004771e) sso_t_hdr_pane_t1_ParamLimits

0xb955,	// (0x0004771e) sso_t_hdr_pane_t1

0x0132,	// (0x0003befb) input_focus_pane_cp10_ParamLimits

0x0132,	// (0x0003befb) input_focus_pane_cp10

0x014a,	// (0x0003bf13) sso_query_pane_t1_ParamLimits

0x014a,	// (0x0003bf13) sso_query_pane_t1

0x015d,	// (0x0003bf26) sso_query_pane_t2_ParamLimits

0x015d,	// (0x0003bf26) sso_query_pane_t2

0x0178,	// (0x0003bf41) sso_query_pane_t3_ParamLimits

0x0178,	// (0x0003bf41) sso_query_pane_t3

0x01a2,	// (0x0003bf6b) sso_query_pane_t4_ParamLimits

0x01a2,	// (0x0003bf6b) sso_query_pane_t4

0x0003,

0xff0b,	// (0x0004bcd4) sso_query_pane_t_ParamLimits

0xff0b,	// (0x0004bcd4) sso_query_pane_t

0x0659,	// (0x0003c422) bg_button_pane_cp22

0xeb1f,	// (0x0004a8e8) sso_btn_pane_t1

0xb968,	// (0x00047731) sso_t_nml_pane_t1_ParamLimits

0xb968,	// (0x00047731) sso_t_nml_pane_t1

0x01e3,	// (0x0003bfac) sso_option_row_pane_ParamLimits

0x01e3,	// (0x0003bfac) sso_option_row_pane

0x01f6,	// (0x0003bfbf) sso_t_sub_pane_t1_ParamLimits

0x01f6,	// (0x0003bfbf) sso_t_sub_pane_t1

0x1a5e,	// (0x0003d827) bg_popup_window_pane_cp11_ParamLimits

0x1a5e,	// (0x0003d827) bg_popup_window_pane_cp11

0x0209,	// (0x0003bfd2) popup_sk_window_cp01_ParamLimits

0x0209,	// (0x0003bfd2) popup_sk_window_cp01

0x0216,	// (0x0003bfdf) sso_popup_body_pane_ParamLimits

0x0216,	// (0x0003bfdf) sso_popup_body_pane

0x0223,	// (0x0003bfec) scroll_pane_cp21_ParamLimits

0x0223,	// (0x0003bfec) scroll_pane_cp21

0x0230,	// (0x0003bff9) sso_popup_body_t_pane_ParamLimits

0x0230,	// (0x0003bff9) sso_popup_body_t_pane

0x023d,	// (0x0003c006) sso_popup_body_t_hdr_pane_ParamLimits

0x023d,	// (0x0003c006) sso_popup_body_t_hdr_pane

0x0249,	// (0x0003c012) sso_popup_body_t_nml_pane_ParamLimits

0x0249,	// (0x0003c012) sso_popup_body_t_nml_pane

0x0262,	// (0x0003c02b) sso_popup_body_t_sub_pane_ParamLimits

0x0262,	// (0x0003c02b) sso_popup_body_t_sub_pane

0x0281,	// (0x0003c04a) sso_popup_body_t_hdr_pane_t1

0xb983,	// (0x0004774c) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb983,	// (0x0004774c) sso_popup_body_t_nml_pane_t1

0x02cb,	// (0x0003c094) sso_popup_body_t_sub_pane_t1_ParamLimits

0x02cb,	// (0x0003c094) sso_popup_body_t_sub_pane_t1

0x101b,	// (0x0003cde4) sso_prog_pane_g1

0xb9ba,	// (0x00047783) sso_apps_pane_comp1_ParamLimits

0xb9ba,	// (0x00047783) sso_apps_pane_comp1

0x0302,	// (0x0003c0cb) sso_apps_pane_comp1_g1

0x030a,	// (0x0003c0d3) sso_apps_pane_comp1_t1

0x0326,	// (0x0003c0ef) sso_option_row_pane_g1

0x032e,	// (0x0003c0f7) sso_option_row_pane_t1

0xb21b,	// (0x00046fe4) bg_welc_area_ParamLimits

0xb21b,	// (0x00046fe4) bg_welc_area

0xb3aa,	// (0x00047173) sso_t_hdr_pane_a_t1_ParamLimits

0xb3aa,	// (0x00047173) sso_t_hdr_pane_a_t1

0xb3c3,	// (0x0004718c) sso_t_nml_pane_a_t1_ParamLimits

0xb3c3,	// (0x0004718c) sso_t_nml_pane_a_t1

0xb3e8,	// (0x000471b1) sso_t_sub_pane_a_t1_ParamLimits

0xb3e8,	// (0x000471b1) sso_t_sub_pane_a_t1

0xeb1f,	// (0x0004a8e8) sso_btn_pane_t1_copy1

0x0659,	// (0x0003c422) welc_button_pane_2_comp1

0xeb88,	// (0x0004a951) sso_t_hdr_pane_p_t1

0xeb96,	// (0x0004a95f) sso_t_nml_pane_p_t1

0xeba4,	// (0x0004a96d) sso_t_sub_pane_p_t1

0xe0c0,	// (0x00049e89) list_cmail_pane_ParamLimits

0xb461,	// (0x0004722a) welc_button_pane_cp01_ParamLimits

0xb461,	// (0x0004722a) welc_button_pane_cp01

0x0659,	// (0x0003c422) main_att_pane

0x0318,	// (0x0003c0e1) input_focus_pane_cp10_t1

0x032e,	// (0x0003c0f7) sso_option_row_pane_t1_ParamLimits

0xb9cd,	// (0x00047796) main_att_body_pane_ParamLimits

0xb9cd,	// (0x00047796) main_att_body_pane

0xb9e3,	// (0x000477ac) att_btn_pane_ParamLimits

0xb9e3,	// (0x000477ac) att_btn_pane

0xba00,	// (0x000477c9) att_btn_pane_cp01_ParamLimits

0xba00,	// (0x000477c9) att_btn_pane_cp01

0xba1c,	// (0x000477e5) att_li_srv_pane_ParamLimits

0xba1c,	// (0x000477e5) att_li_srv_pane

0xba32,	// (0x000477fb) att_opt_pane_ParamLimits

0xba32,	// (0x000477fb) att_opt_pane

0xba78,	// (0x00047841) att_query_pane_ParamLimits

0xba78,	// (0x00047841) att_query_pane

0xbaac,	// (0x00047875) att_query_pane_cp01_ParamLimits

0xbaac,	// (0x00047875) att_query_pane_cp01

0xbae6,	// (0x000478af) att_t_hdr_pane_ParamLimits

0xbae6,	// (0x000478af) att_t_hdr_pane

0xbb2a,	// (0x000478f3) att_t_nml_pane_ParamLimits

0xbb2a,	// (0x000478f3) att_t_nml_pane

0xbb5b,	// (0x00047924) att_t_nml_pane_cp01_ParamLimits

0xbb5b,	// (0x00047924) att_t_nml_pane_cp01

0xbb81,	// (0x0004794a) att_t_nmlb_pane_ParamLimits

0xbb81,	// (0x0004794a) att_t_nmlb_pane

0xbb9a,	// (0x00047963) att_term_pane_ParamLimits

0xbb9a,	// (0x00047963) att_term_pane

0xbbde,	// (0x000479a7) main_att_body_pane_g1_ParamLimits

0xbbde,	// (0x000479a7) main_att_body_pane_g1

0x0119,	// (0x0003bee2) att_t_hdr_pane_t1_ParamLimits

0x0119,	// (0x0003bee2) att_t_hdr_pane_t1

0x0565,	// (0x0003c32e) att_t_nml_pane_t1_ParamLimits

0x0565,	// (0x0003c32e) att_t_nml_pane_t1

0x058a,	// (0x0003c353) att_btn_pane_t1

0x0659,	// (0x0003c422) bg_button_pane_cp23

0xbc22,	// (0x000479eb) att_li_srv_row_pane_ParamLimits

0xbc22,	// (0x000479eb) att_li_srv_row_pane

0x05a8,	// (0x0003c371) att_t_nmlb_pane_t1_ParamLimits

0x05a8,	// (0x0003c371) att_t_nmlb_pane_t1

0x05c1,	// (0x0003c38a) att_query_pane_t1

0x05d0,	// (0x0003c399) att_query_pane_t2

0x05df,	// (0x0003c3a8) att_query_pane_t3

0x0002,

0xff14,	// (0x0004bcdd) att_query_pane_t

0x05ee,	// (0x0003c3b7) input_focus_pane_cp11

0x05f7,	// (0x0003c3c0) att_term_pane_t1_ParamLimits

0x05f7,	// (0x0003c3c0) att_term_pane_t1

0x0659,	// (0x0003c422) att_opt_row_pane

0x0614,	// (0x0003c3dd) att_opt_row_pane_g1

0x061c,	// (0x0003c3e5) att_opt_row_pane_t1_ParamLimits

0x061c,	// (0x0003c3e5) att_opt_row_pane_t1

0xbc32,	// (0x000479fb) att_li_srv_row_pane_g1

0xbc3a,	// (0x00047a03) att_li_srv_row_pane_t1

0xbc48,	// (0x00047a11) att_li_srv_row_pane_t2

0x0001,

0xff1b,	// (0x0004bce4) att_li_srv_row_pane_t
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
