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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005bdde };

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
0x0d7d,	// (0x0005cb5b) Screen

0x0d89,	// (0x0005cb67) application_window

0x0de5,	// (0x0005cbc3) area_bottom_pane_ParamLimits

0x0de5,	// (0x0005cbc3) area_bottom_pane

0x0e3e,	// (0x0005cc1c) area_top_pane_ParamLimits

0x0e3e,	// (0x0005cc1c) area_top_pane

0x0ea2,	// (0x0005cc80) call_video_uplink_pane_ParamLimits

0x0ea2,	// (0x0005cc80) call_video_uplink_pane

0x0ee1,	// (0x0005ccbf) main_pane_ParamLimits

0x0ee1,	// (0x0005ccbf) main_pane

0xc970,	// (0x0006874e) context_pane

0x43ff,	// (0x000601dd) navi_pane

0x4425,	// (0x00060203) popup_cale_events_window_ParamLimits

0x4425,	// (0x00060203) popup_cale_events_window

0xc983,	// (0x00068761) popup_mup_playback_window

0x443d,	// (0x0006021b) signal_pane

0xa8f0,	// (0x000666ce) main_browser_pane

0xaabe,	// (0x0006689c) main_burst_pane

0x4281,	// (0x0006005f) main_calc_pane

0xc956,	// (0x00068734) main_cale_day_pane

0x164f,	// (0x0005d42d) main_cale_month_pane

0xc956,	// (0x00068734) main_cale_week_pane

0xaabe,	// (0x0006689c) main_call_pane

0xa5c4,	// (0x000663a2) main_call_poc_pane

0xaabe,	// (0x0006689c) main_camera_pane

0xaabe,	// (0x0006689c) main_chi_dic_pane

0xb2bf,	// (0x0006709d) main_clock_pane

0xa5c4,	// (0x000663a2) main_fmradio_pane

0xaabe,	// (0x0006689c) main_graph_messa_pane

0xa5c4,	// (0x000663a2) main_help_pane

0xa8f0,	// (0x000666ce) main_im_pane

0xa81f,	// (0x000665fd) main_image_pane_ParamLimits

0xa81f,	// (0x000665fd) main_image_pane

0xa5c4,	// (0x000663a2) main_location2_pane

0xaabe,	// (0x0006689c) main_location_pane

0xa81f,	// (0x000665fd) main_messa_pane

0xa5c4,	// (0x000663a2) main_mp2_pane

0xaabe,	// (0x0006689c) main_mp_pane

0xa5c4,	// (0x000663a2) main_msg_pane

0xa5c4,	// (0x000663a2) main_mup_eq_pane

0xa5c4,	// (0x000663a2) main_mup_pane

0xa8f0,	// (0x000666ce) main_notes_pane

0xa5c4,	// (0x000663a2) main_pec_pane

0xa5c4,	// (0x000663a2) main_phob_pane

0xa5c4,	// (0x000663a2) main_pinb_pane

0xa5c4,	// (0x000663a2) main_postcard_pane

0xa5c4,	// (0x000663a2) main_qdial_pane

0xaabe,	// (0x0006689c) main_skin_pane

0xa5c4,	// (0x000663a2) main_smil2_pane

0xaabe,	// (0x0006689c) main_smil_pane

0xaabe,	// (0x0006689c) main_video_pane

0xaabe,	// (0x0006689c) main_video_tele_pane

0xa81f,	// (0x000665fd) main_viewer_pane_ParamLimits

0xa81f,	// (0x000665fd) main_viewer_pane

0xaabe,	// (0x0006689c) main_vorec_pane

0x42cd,	// (0x000600ab) popup_blid_sat_info_window_ParamLimits

0x42cd,	// (0x000600ab) popup_blid_sat_info_window

0x42ed,	// (0x000600cb) popup_dyc_status_message_window_ParamLimits

0x42ed,	// (0x000600cb) popup_dyc_status_message_window

0x42fb,	// (0x000600d9) popup_grid_large_graphic_window_ParamLimits

0x42fb,	// (0x000600d9) popup_grid_large_graphic_window

0x438a,	// (0x00060168) popup_loc_request_window_ParamLimits

0x438a,	// (0x00060168) popup_loc_request_window

0x43d7,	// (0x000601b5) popup_wml_address_window_ParamLimits

0x43d7,	// (0x000601b5) popup_wml_address_window

0x4159,	// (0x0005ff37) call_muted_g1

0x3e15,	// (0x0005fbf3) popup_call_audio_conf_window_ParamLimits

0x3e15,	// (0x0005fbf3) popup_call_audio_conf_window

0x4169,	// (0x0005ff47) popup_call_audio_first_window_ParamLimits

0x4169,	// (0x0005ff47) popup_call_audio_first_window

0x41a9,	// (0x0005ff87) popup_call_audio_in_window_ParamLimits

0x41a9,	// (0x0005ff87) popup_call_audio_in_window

0x41cd,	// (0x0005ffab) popup_call_audio_out_window_ParamLimits

0x41cd,	// (0x0005ffab) popup_call_audio_out_window

0x41ef,	// (0x0005ffcd) popup_call_audio_second_window_ParamLimits

0x41ef,	// (0x0005ffcd) popup_call_audio_second_window

0x421f,	// (0x0005fffd) popup_call_audio_wait_window_ParamLimits

0x421f,	// (0x0005fffd) popup_call_audio_wait_window

0x4240,	// (0x0006001e) popup_number_entry_window_ParamLimits

0x4240,	// (0x0006001e) popup_number_entry_window

0x9c00,	// (0x000659de) bg_popup_call_pane_cp05_ParamLimits

0x9c00,	// (0x000659de) bg_popup_call_pane_cp05

0x9c20,	// (0x000659fe) popup_number_entry_window_t1

0x9c33,	// (0x00065a11) popup_number_entry_window_t2

0x9c45,	// (0x00065a23) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0006aea4) popup_number_entry_window_t

0x9c57,	// (0x00065a35) text_title_cp2

0x9c6a,	// (0x00065a48) bg_popup_call_pane_cp_ParamLimits

0x9c6a,	// (0x00065a48) bg_popup_call_pane_cp

0x9c78,	// (0x00065a56) call_thumbnail_pane

0x9c80,	// (0x00065a5e) popup_call_audio_in_window_g1_ParamLimits

0x9c80,	// (0x00065a5e) popup_call_audio_in_window_g1

0x9c8c,	// (0x00065a6a) popup_call_audio_in_window_g2_ParamLimits

0x9c8c,	// (0x00065a6a) popup_call_audio_in_window_g2

0x9c98,	// (0x00065a76) popup_call_audio_in_window_g3_ParamLimits

0x9c98,	// (0x00065a76) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0006aead) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0006aead) popup_call_audio_in_window_g

0x9ca4,	// (0x00065a82) popup_call_audio_in_window_t1_ParamLimits

0x9ca4,	// (0x00065a82) popup_call_audio_in_window_t1

0x9cc0,	// (0x00065a9e) popup_call_audio_in_window_t2_ParamLimits

0x9cc0,	// (0x00065a9e) popup_call_audio_in_window_t2

0x9cdc,	// (0x00065aba) popup_call_audio_in_window_t3_ParamLimits

0x9cdc,	// (0x00065aba) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0006aeb4) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0006aeb4) popup_call_audio_in_window_t

0x9c6a,	// (0x00065a48) bg_popup_call_pane_cp01_ParamLimits

0x9c6a,	// (0x00065a48) bg_popup_call_pane_cp01

0x9c78,	// (0x00065a56) call_thumbnail_pane_cp02

0x9cef,	// (0x00065acd) call_type_pane_cp022

0x9cf7,	// (0x00065ad5) popup_call_audio_out_window_g1_ParamLimits

0x9cf7,	// (0x00065ad5) popup_call_audio_out_window_g1

0x9d09,	// (0x00065ae7) popup_call_audio_out_window_g2_ParamLimits

0x9d09,	// (0x00065ae7) popup_call_audio_out_window_g2

0x9d15,	// (0x00065af3) popup_call_audio_out_window_g3_ParamLimits

0x9d15,	// (0x00065af3) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0006aebb) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0006aebb) popup_call_audio_out_window_g

0x9d27,	// (0x00065b05) popup_call_audio_out_window_t1_ParamLimits

0x9d27,	// (0x00065b05) popup_call_audio_out_window_t1

0x9d3f,	// (0x00065b1d) popup_call_audio_out_window_t2_ParamLimits

0x9d3f,	// (0x00065b1d) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0006aec2) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0006aec2) popup_call_audio_out_window_t

0x9d54,	// (0x00065b32) bg_popup_call_pane_ParamLimits

0x9d54,	// (0x00065b32) bg_popup_call_pane

0x10fd,	// (0x0005cedb) call_thumbnail_pane_cp_ParamLimits

0x10fd,	// (0x0005cedb) call_thumbnail_pane_cp

0x9dd8,	// (0x00065bb6) call_type_pane_cp01_ParamLimits

0x9dd8,	// (0x00065bb6) call_type_pane_cp01

0xa3b1,	// (0x0006618f) popup_call_audio_first_window_g1_ParamLimits

0xa3b1,	// (0x0006618f) popup_call_audio_first_window_g1

0xa3fd,	// (0x000661db) popup_call_audio_first_window_g2_ParamLimits

0xa3fd,	// (0x000661db) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0006aec7) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0006aec7) popup_call_audio_first_window_g

0xa441,	// (0x0006621f) popup_call_audio_first_window_t1_ParamLimits

0xa441,	// (0x0006621f) popup_call_audio_first_window_t1

0xa4ed,	// (0x000662cb) popup_call_audio_first_window_t4_ParamLimits

0xa4ed,	// (0x000662cb) popup_call_audio_first_window_t4

0xa595,	// (0x00066373) popup_call_audio_first_window_t5_ParamLimits

0xa595,	// (0x00066373) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0006aecc) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0006aecc) popup_call_audio_first_window_t

0xa5c4,	// (0x000663a2) bg_popup_call_pane_cp02

0xa5ce,	// (0x000663ac) call_type_pane_cp023

0xa5d6,	// (0x000663b4) popup_call_audio_wait_window_g1

0xa5de,	// (0x000663bc) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006aed3) popup_call_audio_wait_window_g

0xa5e6,	// (0x000663c4) popup_call_audio_wait_window_t3

0xa5f4,	// (0x000663d2) bg_popup_call_pane_cp03_ParamLimits

0xa5f4,	// (0x000663d2) bg_popup_call_pane_cp03

0xa654,	// (0x00066432) call_thumbnail_pane_cp011_ParamLimits

0xa654,	// (0x00066432) call_thumbnail_pane_cp011

0xa660,	// (0x0006643e) call_type_pane_cp034_ParamLimits

0xa660,	// (0x0006643e) call_type_pane_cp034

0xa69c,	// (0x0006647a) popup_call_audio_second_window_g1_ParamLimits

0xa69c,	// (0x0006647a) popup_call_audio_second_window_g1

0xa6d8,	// (0x000664b6) popup_call_audio_second_window_g2_ParamLimits

0xa6d8,	// (0x000664b6) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0006aed8) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0006aed8) popup_call_audio_second_window_g

0xa714,	// (0x000664f2) popup_call_audio_second_window_t1_ParamLimits

0xa714,	// (0x000664f2) popup_call_audio_second_window_t1

0xa795,	// (0x00066573) popup_call_audio_second_window_t2_ParamLimits

0xa795,	// (0x00066573) popup_call_audio_second_window_t2

0xa7cb,	// (0x000665a9) popup_call_audio_second_window_t3_ParamLimits

0xa7cb,	// (0x000665a9) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0006aedd) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0006aedd) popup_call_audio_second_window_t

0xa5c4,	// (0x000663a2) bg_popup_call_pane_cp04

0xa801,	// (0x000665df) list_conf_pane

0xa809,	// (0x000665e7) popup_call_audio_conf_window_t1

0xa817,	// (0x000665f5) call_thumbnail_pane_g1

0xa81f,	// (0x000665fd) bg_pinb_pane_ParamLimits

0xa81f,	// (0x000665fd) bg_pinb_pane

0xa82d,	// (0x0006660b) find_pinb_pane

0xa836,	// (0x00066614) listscroll_pinb_pane_ParamLimits

0xa836,	// (0x00066614) listscroll_pinb_pane

0xa845,	// (0x00066623) pinb_bg_pane_g1

0x1121,	// (0x0005ceff) pinb_bg_pane_g2

0x112d,	// (0x0005cf0b) pinb_bg_pane_g3

0x1139,	// (0x0005cf17) pinb_bg_pane_g4

0x1145,	// (0x0005cf23) pinb_bg_pane_g5

0x1151,	// (0x0005cf2f) pinb_bg_pane_g6

0x115c,	// (0x0005cf3a) pinb_bg_pane_g7

0x1167,	// (0x0005cf45) pinb_bg_pane_g8

0x1172,	// (0x0005cf50) pinb_bg_pane_g9

0x117c,	// (0x0005cf5a) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0006aee4) pinb_bg_pane_g

0x1199,	// (0x0005cf77) grid_pinb_pane

0x11a4,	// (0x0005cf82) list_pinb_pane

0x11af,	// (0x0005cf8d) scroll_pane_cp01_ParamLimits

0x11af,	// (0x0005cf8d) scroll_pane_cp01

0xa84f,	// (0x0006662d) find_pinb_pane_g1_ParamLimits

0xa84f,	// (0x0006662d) find_pinb_pane_g1

0xa867,	// (0x00066645) find_pinb_pane_t1

0xa879,	// (0x00066657) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0006aefe) find_pinb_pane_t

0xa88e,	// (0x0006666c) input_focus_pane_cp01_ParamLimits

0xa88e,	// (0x0006666c) input_focus_pane_cp01

0x11c1,	// (0x0005cf9f) cell_pinb_pane_ParamLimits

0x11c1,	// (0x0005cf9f) cell_pinb_pane

0x11ec,	// (0x0005cfca) cell_pinb_pane_g1_ParamLimits

0x11ec,	// (0x0005cfca) cell_pinb_pane_g1

0xa89a,	// (0x00066678) cell_pinb_pane_g2_ParamLimits

0xa89a,	// (0x00066678) cell_pinb_pane_g2

0xa8a6,	// (0x00066684) cell_pinb_pane_g3_ParamLimits

0xa8a6,	// (0x00066684) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0006af03) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0006af03) cell_pinb_pane_g

0xa5c4,	// (0x000663a2) grid_highlight_pane_cp01

0x1201,	// (0x0005cfdf) list_pinb_item_pane_ParamLimits

0x1201,	// (0x0005cfdf) list_pinb_item_pane

0xa5c4,	// (0x000663a2) list_highlight_pane_cp02

0x122a,	// (0x0005d008) list_pinb_item_pane_g1_ParamLimits

0x122a,	// (0x0005d008) list_pinb_item_pane_g1

0x1237,	// (0x0005d015) list_pinb_item_pane_g2_ParamLimits

0x1237,	// (0x0005d015) list_pinb_item_pane_g2

0x1243,	// (0x0005d021) list_pinb_item_pane_g3_ParamLimits

0x1243,	// (0x0005d021) list_pinb_item_pane_g3

0x1254,	// (0x0005d032) list_pinb_item_pane_g4_ParamLimits

0x1254,	// (0x0005d032) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0006af0a) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0006af0a) list_pinb_item_pane_g

0x1260,	// (0x0005d03e) list_pinb_item_pane_t1_ParamLimits

0x1260,	// (0x0005d03e) list_pinb_item_pane_t1

0x1291,	// (0x0005d06f) calc_display_pane

0x12af,	// (0x0005d08d) calc_paper_pane

0x12cb,	// (0x0005d0a9) grid_calc_pane

0xa5c4,	// (0x000663a2) bg_list_pane_cp01

0x12f7,	// (0x0005d0d5) clock_g1

0x12ff,	// (0x0005d0dd) clock_g2

0x0001,

0xf135,	// (0x0006af13) clock_g

0x1309,	// (0x0005d0e7) clock_t1_ParamLimits

0x1309,	// (0x0005d0e7) clock_t1

0x131e,	// (0x0005d0fc) clock_t2_ParamLimits

0x131e,	// (0x0005d0fc) clock_t2

0x1330,	// (0x0005d10e) clock_t3_ParamLimits

0x1330,	// (0x0005d10e) clock_t3

0x1342,	// (0x0005d120) clock_t4_ParamLimits

0x1342,	// (0x0005d120) clock_t4

0x1354,	// (0x0005d132) clock_t5_ParamLimits

0x1354,	// (0x0005d132) clock_t5

0x1369,	// (0x0005d147) clock_t6_ParamLimits

0x1369,	// (0x0005d147) clock_t6

0x137b,	// (0x0005d159) clock_t7_ParamLimits

0x137b,	// (0x0005d159) clock_t7

0x138d,	// (0x0005d16b) clock_t8_ParamLimits

0x138d,	// (0x0005d16b) clock_t8

0x13a3,	// (0x0005d181) clock_t9_ParamLimits

0x13a3,	// (0x0005d181) clock_t9

0x0008,

0xf13a,	// (0x0006af18) clock_t_ParamLimits

0xf13a,	// (0x0006af18) clock_t

0xa8b2,	// (0x00066690) popup_clock_analogue_window_cp02

0xa8b2,	// (0x00066690) popup_clock_digital_window_cp01

0xa8ba,	// (0x00066698) listscroll_help_pane

0xa5c4,	// (0x000663a2) phob_pre_status_pane

0xa8c4,	// (0x000666a2) grid_qdial_pane

0xa81f,	// (0x000665fd) listscroll_mce_pane

0xa81f,	// (0x000665fd) bg_notes_pane

0xa8ce,	// (0x000666ac) list_notes_pane

0x13b9,	// (0x0005d197) scroll_pane_cp06

0xa8dc,	// (0x000666ba) bg_calc_paper_pane

0x13c8,	// (0x0005d1a6) list_calc_pane

0xa8f0,	// (0x000666ce) bg_calc_display_pane

0x13e2,	// (0x0005d1c0) calc_display_pane_t1

0x13f7,	// (0x0005d1d5) calc_display_pane_t2

0x140c,	// (0x0005d1ea) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0006af2b) calc_display_pane_t

0x141e,	// (0x0005d1fc) cell_calc_pane_ParamLimits

0x141e,	// (0x0005d1fc) cell_calc_pane

0xa8fc,	// (0x000666da) bg_calc_paper_pane_g1

0xa908,	// (0x000666e6) bg_calc_paper_pane_g2

0xa914,	// (0x000666f2) bg_calc_paper_pane_g3

0xa920,	// (0x000666fe) bg_calc_paper_pane_g4

0xa92c,	// (0x0006670a) bg_calc_paper_pane_g5

0x144b,	// (0x0005d229) bg_calc_paper_pane_g6

0x145c,	// (0x0005d23a) bg_calc_paper_pane_g7

0x146d,	// (0x0005d24b) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0006af32) bg_calc_paper_pane_g

0x147e,	// (0x0005d25c) calc_bg_paper_pane_g9

0x148f,	// (0x0005d26d) list_calc_item_pane_ParamLimits

0x148f,	// (0x0005d26d) list_calc_item_pane

0xa938,	// (0x00066716) list_calc_item_pane_g1

0x14bc,	// (0x0005d29a) list_calc_item_pane_t1_ParamLimits

0x14bc,	// (0x0005d29a) list_calc_item_pane_t1

0x14ce,	// (0x0005d2ac) list_calc_item_pane_t2_ParamLimits

0x14ce,	// (0x0005d2ac) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0006af43) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0006af43) list_calc_item_pane_t

0xa945,	// (0x00066723) cell_calc_pane_g1

0xa94f,	// (0x0006672d) grid_highlight_pane_cp02

0x14fe,	// (0x0005d2dc) bg_calc_display_pane_g1

0x1507,	// (0x0005d2e5) bg_calc_display_pane_g2

0x1511,	// (0x0005d2ef) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0006af4d) bg_calc_display_pane_g

0x151a,	// (0x0005d2f8) cell_qdial_pane_ParamLimits

0x151a,	// (0x0005d2f8) cell_qdial_pane

0x152e,	// (0x0005d30c) cell_qdial_pane_g1_ParamLimits

0x152e,	// (0x0005d30c) cell_qdial_pane_g1

0x153b,	// (0x0005d319) cell_qdial_pane_g2_ParamLimits

0x153b,	// (0x0005d319) cell_qdial_pane_g2

0xa971,	// (0x0006674f) cell_qdial_pane_g3_ParamLimits

0xa971,	// (0x0006674f) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0006af54) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0006af54) cell_qdial_pane_g

0x1558,	// (0x0005d336) cell_qdial_pane_t1_ParamLimits

0x1558,	// (0x0005d336) cell_qdial_pane_t1

0x1570,	// (0x0005d34e) cell_qdial_pane_t2_ParamLimits

0x1570,	// (0x0005d34e) cell_qdial_pane_t2

0x1583,	// (0x0005d361) cell_qdial_pane_t3_ParamLimits

0x1583,	// (0x0005d361) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0006af5d) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0006af5d) cell_qdial_pane_t

0xa5c4,	// (0x000663a2) grid_highlight_pane_cp04

0xa97d,	// (0x0006675b) thumbnail_qdial_pane_ParamLimits

0xa97d,	// (0x0006675b) thumbnail_qdial_pane

0xa9e2,	// (0x000667c0) list_help_pane

0xa9eb,	// (0x000667c9) scroll_pane_cp02

0x1596,	// (0x0005d374) help_list_pane_t1_ParamLimits

0x1596,	// (0x0005d374) help_list_pane_t1

0x15cd,	// (0x0005d3ab) bg_notes_pane_g2

0x15d5,	// (0x0005d3b3) bg_notes_pane_g3

0x15dd,	// (0x0005d3bb) notes_bg_pane_g1

0x15e5,	// (0x0005d3c3) notes_bg_pane_g4

0x15ed,	// (0x0005d3cb) notes_bg_pane_g5

0x15f5,	// (0x0005d3d3) notes_bg_pane_g6

0x15fd,	// (0x0005d3db) notes_bg_pane_g7

0x1605,	// (0x0005d3e3) notes_bg_pane_g8

0x160d,	// (0x0005d3eb) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0006af7b) notes_bg_pane_g

0x1615,	// (0x0005d3f3) list_notes_text_pane_ParamLimits

0x1615,	// (0x0005d3f3) list_notes_text_pane

0xa9f4,	// (0x000667d2) list_notes_text_pane_g1

0x1641,	// (0x0005d41f) list_notes_text_pane_t1

0x164f,	// (0x0005d42d) listscroll_cale_week_pane

0x1674,	// (0x0005d452) bg_cale_heading_pane

0xaa17,	// (0x000667f5) bg_cale_pane_cp01

0x1696,	// (0x0005d474) cale_week_corner_pane

0x16b0,	// (0x0005d48e) cale_week_day_heading_pane

0x16d2,	// (0x0005d4b0) cale_week_scroll_pane_g1

0x16ef,	// (0x0005d4cd) cale_week_scroll_pane_g2

0x1702,	// (0x0005d4e0) cale_week_scroll_pane_g3

0x1715,	// (0x0005d4f3) cale_week_scroll_pane_g4

0x1728,	// (0x0005d506) cale_week_scroll_pane_g5

0x173b,	// (0x0005d519) cale_week_scroll_pane_g6

0x174e,	// (0x0005d52c) cale_week_scroll_pane_g7

0x1763,	// (0x0005d541) cale_week_scroll_pane_g8

0x1778,	// (0x0005d556) cale_week_scroll_pane_g9

0x178b,	// (0x0005d569) cale_week_scroll_pane_g10

0x179e,	// (0x0005d57c) cale_week_scroll_pane_g11

0x17b1,	// (0x0005d58f) cale_week_scroll_pane_g12

0x17c8,	// (0x0005d5a6) cale_week_scroll_pane_g13

0x17e3,	// (0x0005d5c1) cale_week_scroll_pane_g14

0x17fe,	// (0x0005d5dc) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0006af8a) cale_week_scroll_pane_g

0x182e,	// (0x0005d60c) cale_week_time_pane

0x1843,	// (0x0005d621) grid_cale_week_pane

0xaa46,	// (0x00066824) scroll_pane_cp08

0x1862,	// (0x0005d640) cell_cale_week_pane_ParamLimits

0x1862,	// (0x0005d640) cell_cale_week_pane

0x18c4,	// (0x0005d6a2) cale_week_day_heading_pane_t1

0x18df,	// (0x0005d6bd) cale_week_day_heading_pane_t2

0x18fa,	// (0x0005d6d8) cale_week_day_heading_pane_t3

0x1915,	// (0x0005d6f3) cale_week_day_heading_pane_t4

0x1930,	// (0x0005d70e) cale_week_day_heading_pane_t5

0x194b,	// (0x0005d729) cale_week_day_heading_pane_t6

0x1966,	// (0x0005d744) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0006afab) cale_week_day_heading_pane_t

0xaa63,	// (0x00066841) bg_cale_side_pane

0x1981,	// (0x0005d75f) cale_week_time_pane_t1

0x199b,	// (0x0005d779) cale_week_time_pane_t2

0x19b5,	// (0x0005d793) cale_week_time_pane_t3

0x19cf,	// (0x0005d7ad) cale_week_time_pane_t4

0x19e9,	// (0x0005d7c7) cale_week_time_pane_t5

0x1a03,	// (0x0005d7e1) cale_week_time_pane_t6

0x1a23,	// (0x0005d801) cale_week_time_pane_t7

0x1a45,	// (0x0005d823) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0006afba) cale_week_time_pane_t

0x1a69,	// (0x0005d847) cell_cale_week_pane_g2

0x1a8d,	// (0x0005d86b) cell_cale_week_pane_g3_ParamLimits

0x1a8d,	// (0x0005d86b) cell_cale_week_pane_g3

0xaa71,	// (0x0006684f) grid_highlight_pane_cp07

0xaa79,	// (0x00066857) listscroll_gms_pane

0xaa83,	// (0x00066861) grid_gms_pane

0xaa8c,	// (0x0006686a) listscroll_gms_pane_g1

0xaa94,	// (0x00066872) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0006afcb) listscroll_gms_pane_g

0x1aa5,	// (0x0005d883) scroll_pane_cp010

0x1ab0,	// (0x0005d88e) cell_gms_pane_ParamLimits

0x1ab0,	// (0x0005d88e) cell_gms_pane

0x1ac0,	// (0x0005d89e) cell_gms_pane_g1

0xaa9c,	// (0x0006687a) cell_gms_pane_g2

0xaaa4,	// (0x00066882) cell_gms_pane_g3

0xaaad,	// (0x0006688b) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0006afd0) cell_gms_pane_g

0xaab6,	// (0x00066894) grid_highlight_pane_cp09

0x4101,	// (0x0005fedf) phob_pre_status_pane_g1

0x4109,	// (0x0005fee7) phob_pre_status_pane_g2

0x4111,	// (0x0005feef) phob_pre_status_pane_g3

0x4119,	// (0x0005fef7) phob_pre_status_pane_g4

0x0004,

0xf4f2,	// (0x0006b2d0) phob_pre_status_pane_g

0x4129,	// (0x0005ff07) phob_pre_status_pane_t1

0x4139,	// (0x0005ff17) phob_pre_status_pane_t2

0x4149,	// (0x0005ff27) phob_pre_status_pane_t3

0x0002,

0xf4fd,	// (0x0006b2db) phob_pre_status_pane_t

0xaabe,	// (0x0006689c) bg_list_pane_cp05

0x1ad0,	// (0x0005d8ae) grid_vorec_pane

0x1ada,	// (0x0005d8b8) vorec_t1

0x1ae8,	// (0x0005d8c6) vorec_t2

0x1af6,	// (0x0005d8d4) vorec_t3

0x1b04,	// (0x0005d8e2) vorec_t4

0x9b9a,	// (0x00065978) vorec_t5

0x9ba8,	// (0x00065986) vorec_t6

0x0004,

0xf1fb,	// (0x0006afd9) vorec_t

0x9bb6,	// (0x00065994) wait_bar_pane_cp01

0x1b20,	// (0x0005d8fe) cell_vorec_pane_ParamLimits

0x1b20,	// (0x0005d8fe) cell_vorec_pane

0x1b33,	// (0x0005d911) cell_vorec_pane_g1

0xa5c4,	// (0x000663a2) grid_highlight_pane_cp05

0x1b4d,	// (0x0005d92b) cams_zoom_pane

0x1b59,	// (0x0005d937) image_vga_pane

0x1b68,	// (0x0005d946) main_camera_pane_g1

0x1b76,	// (0x0005d954) main_camera_pane_g2

0x1b82,	// (0x0005d960) main_camera_pane_g3

0x1b8e,	// (0x0005d96c) main_camera_pane_g4

0x1b9a,	// (0x0005d978) main_camera_pane_g5

0x1ba6,	// (0x0005d984) main_camera_pane_g6

0x1bb2,	// (0x0005d990) main_camera_pane_g7

0x0007,

0xf206,	// (0x0006afe4) main_camera_pane_g

0x1bbe,	// (0x0005d99c) main_camera_pane_t1

0x1bd0,	// (0x0005d9ae) main_camera_pane_t2

0x0001,

0xf217,	// (0x0006aff5) main_camera_pane_t

0x1bf1,	// (0x0005d9cf) cams_zoom_pane_cp_ParamLimits

0x1bf1,	// (0x0005d9cf) cams_zoom_pane_cp

0x1c15,	// (0x0005d9f3) image_cif_pane_ParamLimits

0x1c15,	// (0x0005d9f3) image_cif_pane

0x1c33,	// (0x0005da11) image_subqcif_pane

0x1c3b,	// (0x0005da19) main_video_pane_g1_ParamLimits

0x1c3b,	// (0x0005da19) main_video_pane_g1

0x1c5b,	// (0x0005da39) main_video_pane_g2_ParamLimits

0x1c5b,	// (0x0005da39) main_video_pane_g2

0x1c8b,	// (0x0005da69) main_video_pane_g3_ParamLimits

0x1c8b,	// (0x0005da69) main_video_pane_g3

0x1cb4,	// (0x0005da92) main_video_pane_g4_ParamLimits

0x1cb4,	// (0x0005da92) main_video_pane_g4

0x1cdd,	// (0x0005dabb) main_video_pane_g5_ParamLimits

0x1cdd,	// (0x0005dabb) main_video_pane_g5

0xaad2,	// (0x000668b0) main_video_pane_g6_ParamLimits

0xaad2,	// (0x000668b0) main_video_pane_g6

0x0006,

0xf21c,	// (0x0006affa) main_video_pane_g_ParamLimits

0xf21c,	// (0x0006affa) main_video_pane_g

0x1cff,	// (0x0005dadd) main_video_pane_t1_ParamLimits

0x1cff,	// (0x0005dadd) main_video_pane_t1

0xaaec,	// (0x000668ca) cams_zoom_pane_g1

0xaaf5,	// (0x000668d3) cams_zoom_pane_g2

0xaafe,	// (0x000668dc) cams_zoom_pane_g3

0xab07,	// (0x000668e5) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0006b009) cams_zoom_pane_g

0x1d49,	// (0x0005db27) grid_cams_pane

0x1d57,	// (0x0005db35) linegrid_cams_pane

0x1d65,	// (0x0005db43) cell_cams_pane_ParamLimits

0x1d65,	// (0x0005db43) cell_cams_pane

0xab10,	// (0x000668ee) cams_burst_image_pane

0xab18,	// (0x000668f6) cell_cams_pane_g1

0xa5c4,	// (0x000663a2) grid_highlight_pane_cp03

0xa945,	// (0x00066723) mp_bg_pane_g1

0xa5c4,	// (0x000663a2) bg_list_pane_cp03

0xc87b,	// (0x00068659) bg_mp_pane

0xc883,	// (0x00068661) grid_mp_pane

0xc88b,	// (0x00068669) media_player_g1

0xc893,	// (0x00068671) media_player_t1

0xc8a1,	// (0x0006867f) media_player_t2

0xc8af,	// (0x0006868d) media_player_t3

0xc8bd,	// (0x0006869b) media_player_t4

0xc8cb,	// (0x000686a9) media_player_t5

0xc8d9,	// (0x000686b7) media_player_t6

0xc8e7,	// (0x000686c5) media_player_t7

0x0006,

0x03bd,	// (0x0005c19b) media_player_t

0xc8f5,	// (0x000686d3) wait_bar_pane_cp02

0xf4de,	// (0x0006b2bc) main_usb_pane_t

0x40f8,	// (0x0005fed6) cell_mp_pane

0xa945,	// (0x00066723) cell_mp_pane_g1

0xa5c4,	// (0x000663a2) grid_highlight_pane_cp06

0xab20,	// (0x000668fe) grid_skin_colour_pane

0xab28,	// (0x00066906) list_highlight_pane_cp03

0x1e8c,	// (0x0005dc6a) skin_g1

0xab4e,	// (0x0006692c) skin_t1

0xab5d,	// (0x0006693b) skin_t2

0x0001,

0xf260,	// (0x0006b03e) skin_t

0x1e96,	// (0x0005dc74) cell_skin_colour_pane_ParamLimits

0x1e96,	// (0x0005dc74) cell_skin_colour_pane

0xab6b,	// (0x00066949) cell_skin_colour_pane_g1

0x1f1a,	// (0x0005dcf8) call_video_g1_ParamLimits

0x1f1a,	// (0x0005dcf8) call_video_g1

0x1f2a,	// (0x0005dd08) call_video_g2_ParamLimits

0x1f2a,	// (0x0005dd08) call_video_g2

0x0001,

0xf265,	// (0x0006b043) call_video_g_ParamLimits

0xf265,	// (0x0006b043) call_video_g

0x1f84,	// (0x0005dd62) call_video_uplink_pane_cp1_ParamLimits

0x1f84,	// (0x0005dd62) call_video_uplink_pane_cp1

0xab7d,	// (0x0006695b) call_video_uplink_pane_cp2

0x2050,	// (0x0005de2e) video_down_crop_pane_ParamLimits

0x2050,	// (0x0005de2e) video_down_crop_pane

0x2142,	// (0x0005df20) video_down_pane_ParamLimits

0x2142,	// (0x0005df20) video_down_pane

0xab85,	// (0x00066963) video_down_subqcif_pane_ParamLimits

0xab85,	// (0x00066963) video_down_subqcif_pane

0xab9d,	// (0x0006697b) video_down_subqcif_pane_cp_ParamLimits

0xab9d,	// (0x0006697b) video_down_subqcif_pane_cp

0xabc3,	// (0x000669a1) im_reading_pane_ParamLimits

0xabc3,	// (0x000669a1) im_reading_pane

0x2262,	// (0x0005e040) im_writing_pane_ParamLimits

0x2262,	// (0x0005e040) im_writing_pane

0x2280,	// (0x0005e05e) im_reading_pane_t1

0xabdd,	// (0x000669bb) list_im_pane

0xabee,	// (0x000669cc) scroll_pane_cp07

0x22d8,	// (0x0005e0b6) im_writing_pane_t1_ParamLimits

0x22d8,	// (0x0005e0b6) im_writing_pane_t1

0xac07,	// (0x000669e5) im_writing_pane_t2_ParamLimits

0xac07,	// (0x000669e5) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0006b04d) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0006b04d) im_writing_pane_t

0xa5c4,	// (0x000663a2) input_focus_pane_cp04

0xa5c4,	// (0x000663a2) input_focus_pane_cp05

0x22ea,	// (0x0005e0c8) list_im_single_pane_ParamLimits

0x22ea,	// (0x0005e0c8) list_im_single_pane

0x2311,	// (0x0005e0ef) list_single_im_pane_t1

0x40bc,	// (0x0005fe9a) blid_accuracy_pane

0x40c4,	// (0x0005fea2) blid_compass_pane

0x40ce,	// (0x0005feac) main_location_t1

0x40dc,	// (0x0005feba) main_location_t2

0x40ea,	// (0x0005fec8) main_location_t3

0x0002,

0xf4eb,	// (0x0006b2c9) main_location_t

0xa5c4,	// (0x000663a2) aid_levels_location

0xa945,	// (0x00066723) blid_accuracy_pane_g1

0xa945,	// (0x00066723) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0006b0af) blid_accuracy_pane_g

0xac4f,	// (0x00066a2d) wml_content_pane

0xac8d,	// (0x00066a6b) wml_button_pane_ParamLimits

0xac8d,	// (0x00066a6b) wml_button_pane

0x2320,	// (0x0005e0fe) wml_list_single_large_pane_ParamLimits

0x2320,	// (0x0005e0fe) wml_list_single_large_pane

0x234b,	// (0x0005e129) wml_list_single_medium_pane_ParamLimits

0x234b,	// (0x0005e129) wml_list_single_medium_pane

0x237d,	// (0x0005e15b) wml_list_single_small_pane_ParamLimits

0x237d,	// (0x0005e15b) wml_list_single_small_pane

0xaca1,	// (0x00066a7f) wml_selection_box_pane_ParamLimits

0xaca1,	// (0x00066a7f) wml_selection_box_pane

0xacb4,	// (0x00066a92) wml_list_single_pane_t1

0xacc3,	// (0x00066aa1) wml_list_single_medium_pane_t1

0xacd2,	// (0x00066ab0) wml_list_single_large_pane_t1

0xace1,	// (0x00066abf) input_focus_pane_cp02_ParamLimits

0xace1,	// (0x00066abf) input_focus_pane_cp02

0xacf4,	// (0x00066ad2) wml_selection_box_pane_g1

0xacfd,	// (0x00066adb) wml_selection_box_pane_t1_ParamLimits

0xacfd,	// (0x00066adb) wml_selection_box_pane_t1

0xa81f,	// (0x000665fd) bg_wml_button_pane_ParamLimits

0xa81f,	// (0x000665fd) bg_wml_button_pane

0xad15,	// (0x00066af3) wml_button_pane_g1

0xad1d,	// (0x00066afb) wml_button_pane_t1

0xad15,	// (0x00066af3) wml_button_bg_pane_g1

0xad2d,	// (0x00066b0b) wml_button_bg_pane_g2

0xad35,	// (0x00066b13) wml_button_bg_pane_g3

0xad3d,	// (0x00066b1b) wml_button_bg_pane_g4

0xad45,	// (0x00066b23) wml_button_bg_pane_g5

0xad4d,	// (0x00066b2b) wml_button_bg_pane_g6

0xad55,	// (0x00066b33) wml_button_bg_pane_g7

0xad5d,	// (0x00066b3b) wml_button_bg_pane_g8

0xad65,	// (0x00066b43) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0006b052) wml_button_bg_pane_g

0x23ba,	// (0x0005e198) bg_list_pane_cp02

0xad6d,	// (0x00066b4b) mce_header_pane_ParamLimits

0xad6d,	// (0x00066b4b) mce_header_pane

0xad83,	// (0x00066b61) mce_icon_pane

0xad83,	// (0x00066b61) mce_image_pane

0xad8c,	// (0x00066b6a) mce_text_pane_ParamLimits

0xad8c,	// (0x00066b6a) mce_text_pane

0x23c4,	// (0x0005e1a2) scroll_pane_cp03

0xac85,	// (0x00066a63) scroll_pane_cp04

0xad9f,	// (0x00066b7d) scroll_pane_cp05_ParamLimits

0xad9f,	// (0x00066b7d) scroll_pane_cp05

0x23ce,	// (0x0005e1ac) mce_header_field_pane_ParamLimits

0x23ce,	// (0x0005e1ac) mce_header_field_pane

0x23ee,	// (0x0005e1cc) mce_header_field_pane_2_ParamLimits

0x23ee,	// (0x0005e1cc) mce_header_field_pane_2

0x2404,	// (0x0005e1e2) mce_header_field_pane_3

0x240c,	// (0x0005e1ea) list_single_mce_message_pane_ParamLimits

0x240c,	// (0x0005e1ea) list_single_mce_message_pane

0x243a,	// (0x0005e218) list_single_mce_smart_pane_ParamLimits

0x243a,	// (0x0005e218) list_single_mce_smart_pane

0xadab,	// (0x00066b89) input_focus_pane_cp03

0xadb4,	// (0x00066b92) list_header_data_pane

0x2473,	// (0x0005e251) mce_header_field_pane_t1

0x2481,	// (0x0005e25f) list_single_mce_header_pane_ParamLimits

0x2481,	// (0x0005e25f) list_single_mce_header_pane

0xadbc,	// (0x00066b9a) list_single_mce_header_pane_t1

0xadcb,	// (0x00066ba9) list_single_mce_message_pane_g1

0xadd3,	// (0x00066bb1) list_single_mce_message_pane_t1

0x24d7,	// (0x0005e2b5) bg_cale_heading_pane_cp01_ParamLimits

0x24d7,	// (0x0005e2b5) bg_cale_heading_pane_cp01

0xade1,	// (0x00066bbf) bg_cale_pane_cp02_ParamLimits

0xade1,	// (0x00066bbf) bg_cale_pane_cp02

0x2525,	// (0x0005e303) cale_month_corner_pane

0x2544,	// (0x0005e322) cale_month_day_heading_pane_ParamLimits

0x2544,	// (0x0005e322) cale_month_day_heading_pane

0x25aa,	// (0x0005e388) cale_month_pane_g1_ParamLimits

0x25aa,	// (0x0005e388) cale_month_pane_g1

0x25ed,	// (0x0005e3cb) cale_month_pane_g2_ParamLimits

0x25ed,	// (0x0005e3cb) cale_month_pane_g2

0x2627,	// (0x0005e405) cale_month_pane_g3_ParamLimits

0x2627,	// (0x0005e405) cale_month_pane_g3

0x2677,	// (0x0005e455) cale_month_pane_g4_ParamLimits

0x2677,	// (0x0005e455) cale_month_pane_g4

0x26c7,	// (0x0005e4a5) cale_month_pane_g5_ParamLimits

0x26c7,	// (0x0005e4a5) cale_month_pane_g5

0x2717,	// (0x0005e4f5) cale_month_pane_g6_ParamLimits

0x2717,	// (0x0005e4f5) cale_month_pane_g6

0x2767,	// (0x0005e545) cale_month_pane_g7_ParamLimits

0x2767,	// (0x0005e545) cale_month_pane_g7

0x27cf,	// (0x0005e5ad) cale_month_pane_g8_ParamLimits

0x27cf,	// (0x0005e5ad) cale_month_pane_g8

0x2837,	// (0x0005e615) cale_month_pane_g9_ParamLimits

0x2837,	// (0x0005e615) cale_month_pane_g9

0x2895,	// (0x0005e673) cale_month_pane_g10_ParamLimits

0x2895,	// (0x0005e673) cale_month_pane_g10

0x28f3,	// (0x0005e6d1) cale_month_pane_g11_ParamLimits

0x28f3,	// (0x0005e6d1) cale_month_pane_g11

0x2947,	// (0x0005e725) cale_month_pane_g12_ParamLimits

0x2947,	// (0x0005e725) cale_month_pane_g12

0x299d,	// (0x0005e77b) cale_month_pane_g13_ParamLimits

0x299d,	// (0x0005e77b) cale_month_pane_g13

0x000c,

0xf287,	// (0x0006b065) cale_month_pane_g_ParamLimits

0xf287,	// (0x0006b065) cale_month_pane_g

0x29f3,	// (0x0005e7d1) cale_month_week_pane

0x2a17,	// (0x0005e7f5) grid_cale_month_pane_ParamLimits

0x2a17,	// (0x0005e7f5) grid_cale_month_pane

0x2a74,	// (0x0005e852) cale_month_day_heading_pane_t1

0x2afa,	// (0x0005e8d8) cale_month_day_heading_pane_t2

0x2b73,	// (0x0005e951) cale_month_day_heading_pane_t3

0x2bec,	// (0x0005e9ca) cale_month_day_heading_pane_t4

0x2c65,	// (0x0005ea43) cale_month_day_heading_pane_t5

0x2cde,	// (0x0005eabc) cale_month_day_heading_pane_t6

0x2d57,	// (0x0005eb35) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0006b080) cale_month_day_heading_pane_t

0xaa63,	// (0x00066841) bg_cale_side_pane_cp01

0x2de8,	// (0x0005ebc6) cale_month_week_pane_t1

0x2e01,	// (0x0005ebdf) cale_month_week_pane_t2

0x2e1a,	// (0x0005ebf8) cale_month_week_pane_t3

0x2e33,	// (0x0005ec11) cale_month_week_pane_t4

0x2e4e,	// (0x0005ec2c) cale_month_week_pane_t5

0x2e6f,	// (0x0005ec4d) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0006b08f) cale_month_week_pane_t

0x2e90,	// (0x0005ec6e) cell_cale_month_pane_ParamLimits

0x2e90,	// (0x0005ec6e) cell_cale_month_pane

0x2fe0,	// (0x0005edbe) cell_cale_month_pane_g1

0x2fec,	// (0x0005edca) cell_cale_month_pane_t1_ParamLimits

0x2fec,	// (0x0005edca) cell_cale_month_pane_t1

0xaa71,	// (0x0006684f) grid_highlight_pane_cp08

0xa945,	// (0x00066723) main_smil_g1

0x3018,	// (0x0005edf6) smil_status_pane

0xae20,	// (0x00066bfe) smil_text_pane

0xc75b,	// (0x00068539) bg_popup_call3_rect_pane_g8

0xc763,	// (0x00068541) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c6,	// (0x0006b2a4) bg_popup_call3_rect_pane_g

0xc9ea,	// (0x000687c8) smil_status_volume_pane_g1

0xae2a,	// (0x00066c08) smil_status_pane_t1

0x44f3,	// (0x000602d1) volume_smil_pane

0xae41,	// (0x00066c1f) list_smil_text_pane

0x302b,	// (0x0005ee09) scroll_pane_cp011

0x3036,	// (0x0005ee14) smil_text_list_pane_t1_ParamLimits

0x3036,	// (0x0005ee14) smil_text_list_pane_t1

0x30c3,	// (0x0005eea1) aid_volume_smil_ParamLimits

0x30c3,	// (0x0005eea1) aid_volume_smil

0xa945,	// (0x00066723) smil_volume_pane_g1

0xa945,	// (0x00066723) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0006b0af) smil_volume_pane_g

0x164f,	// (0x0005d42d) listscroll_cale_day_pane

0xae4b,	// (0x00066c29) bg_cale_pane

0xae63,	// (0x00066c41) list_cale_pane

0xae86,	// (0x00066c64) scroll_pane_cp09

0xae97,	// (0x00066c75) cale_bg_pane_g1

0xae9f,	// (0x00066c7d) cale_bg_pane_g2

0xaea7,	// (0x00066c85) cale_bg_pane_g3

0xaeaf,	// (0x00066c8d) cale_bg_pane_g4

0xaeb7,	// (0x00066c95) cale_bg_pane_g5

0xaebf,	// (0x00066c9d) cale_bg_pane_g6

0xaec7,	// (0x00066ca5) cale_bg_pane_g7

0xaecf,	// (0x00066cad) cale_bg_pane_g8

0xaed7,	// (0x00066cb5) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0006b0b4) cale_bg_pane_g

0x30ed,	// (0x0005eecb) list_cale_time_pane_ParamLimits

0x30ed,	// (0x0005eecb) list_cale_time_pane

0xaedf,	// (0x00066cbd) list_cale_time_pane_g1_ParamLimits

0xaedf,	// (0x00066cbd) list_cale_time_pane_g1

0xaeeb,	// (0x00066cc9) list_cale_time_pane_g2_ParamLimits

0xaeeb,	// (0x00066cc9) list_cale_time_pane_g2

0x3115,	// (0x0005eef3) list_cale_time_pane_g3_ParamLimits

0x3115,	// (0x0005eef3) list_cale_time_pane_g3

0x3123,	// (0x0005ef01) list_cale_time_pane_g4_ParamLimits

0x3123,	// (0x0005ef01) list_cale_time_pane_g4

0x3131,	// (0x0005ef0f) list_cale_time_pane_g5_ParamLimits

0x3131,	// (0x0005ef0f) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0006b0c7) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0006b0c7) list_cale_time_pane_g

0xaf05,	// (0x00066ce3) list_cale_time_pane_t1_ParamLimits

0xaf05,	// (0x00066ce3) list_cale_time_pane_t1

0xaf2d,	// (0x00066d0b) list_cale_time_pane_t2_ParamLimits

0xaf2d,	// (0x00066d0b) list_cale_time_pane_t2

0x34fa,	// (0x0005f2d8) aid_blid_cardinal_pane

0x353c,	// (0x0005f31a) compass_pane_t4

0xaf55,	// (0x00066d33) list_cale_time_pane_t4_ParamLimits

0xaf55,	// (0x00066d33) list_cale_time_pane_t4

0x354a,	// (0x0005f328) compass_pane_t5

0x355a,	// (0x0005f338) compass_pane_t6

0x3568,	// (0x0005f346) compass_pane_t7

0xb3d9,	// (0x000671b7) navi_pane_cc_t1

0xb5c4,	// (0x000673a2) aid_phob_thumbnail_center_pane

0x3bbd,	// (0x0005f99b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0006b0d4) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0006b0d4) list_cale_time_pane_t

0x9c6a,	// (0x00065a48) bg_popup_window_pane_cp02_ParamLimits

0x9c6a,	// (0x00065a48) bg_popup_window_pane_cp02

0xaf7d,	// (0x00066d5b) heading_pane_cp01_ParamLimits

0xaf7d,	// (0x00066d5b) heading_pane_cp01

0xaf89,	// (0x00066d67) loc_req_pane_ParamLimits

0xaf89,	// (0x00066d67) loc_req_pane

0xaf99,	// (0x00066d77) loc_type_pane_ParamLimits

0xaf99,	// (0x00066d77) loc_type_pane

0xafab,	// (0x00066d89) loc_type_pane_t1_ParamLimits

0xafab,	// (0x00066d89) loc_type_pane_t1

0xafbd,	// (0x00066d9b) loc_type_pane_t2_ParamLimits

0xafbd,	// (0x00066d9b) loc_type_pane_t2

0xafcf,	// (0x00066dad) loc_type_pane_t3_ParamLimits

0xafcf,	// (0x00066dad) loc_type_pane_t3

0x0002,

0x00e0,	// (0x0005bebe) loc_type_pane_t_ParamLimits

0x00e0,	// (0x0005bebe) loc_type_pane_t

0xafe1,	// (0x00066dbf) list_loc_req_pane

0xafeb,	// (0x00066dc9) scroll_pane_cp012

0x313f,	// (0x0005ef1d) list_single_loc_request_popup_menu_pane_ParamLimits

0x313f,	// (0x0005ef1d) list_single_loc_request_popup_menu_pane

0xaff6,	// (0x00066dd4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaff6,	// (0x00066dd4) list_single_loc_request_popup_menu_pane_g1

0xb002,	// (0x00066de0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb002,	// (0x00066de0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x00e7,	// (0x0005bec5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x00e7,	// (0x0005bec5) list_single_loc_request_popup_menu_pane_g

0xb00e,	// (0x00066dec) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb00e,	// (0x00066dec) list_single_loc_request_popup_menu_pane_t1

0x3158,	// (0x0005ef36) bg_popup_window_pane_cp03_ParamLimits

0x3158,	// (0x0005ef36) bg_popup_window_pane_cp03

0x3166,	// (0x0005ef44) heading_loc_req_pane_ParamLimits

0x3166,	// (0x0005ef44) heading_loc_req_pane

0x3172,	// (0x0005ef50) popup_dyc_status_message_window_g1_ParamLimits

0x3172,	// (0x0005ef50) popup_dyc_status_message_window_g1

0x317e,	// (0x0005ef5c) popup_dyc_status_message_window_t1_ParamLimits

0x317e,	// (0x0005ef5c) popup_dyc_status_message_window_t1

0x3190,	// (0x0005ef6e) popup_dyc_status_message_window_t2_ParamLimits

0x3190,	// (0x0005ef6e) popup_dyc_status_message_window_t2

0x31a2,	// (0x0005ef80) popup_dyc_status_message_window_t3_ParamLimits

0x31a2,	// (0x0005ef80) popup_dyc_status_message_window_t3

0x0002,

0xf2fd,	// (0x0006b0db) popup_dyc_status_message_window_t_ParamLimits

0xf2fd,	// (0x0006b0db) popup_dyc_status_message_window_t

0xa5c4,	// (0x000663a2) bg_heading_pane_cp01

0xb024,	// (0x00066e02) heading_loc_req_pane_g1

0xb02c,	// (0x00066e0a) heading_loc_req_pane_g2

0xb034,	// (0x00066e12) heading_loc_req_pane_g3

0x0002,

0xf304,	// (0x0006b0e2) heading_loc_req_pane_g

0xb03c,	// (0x00066e1a) heading_loc_req_pane_t1

0xb04b,	// (0x00066e29) bg_popup_sub_pane_cp01_ParamLimits

0xb04b,	// (0x00066e29) bg_popup_sub_pane_cp01

0xb059,	// (0x00066e37) popup_cale_events_window_g1_ParamLimits

0xb059,	// (0x00066e37) popup_cale_events_window_g1

0xb079,	// (0x00066e57) popup_cale_events_window_g2_ParamLimits

0xb079,	// (0x00066e57) popup_cale_events_window_g2

0x0001,

0xf338,	// (0x0006b116) popup_cale_events_window_g_ParamLimits

0xf338,	// (0x0006b116) popup_cale_events_window_g

0xb099,	// (0x00066e77) popup_cale_events_window_t1_ParamLimits

0xb099,	// (0x00066e77) popup_cale_events_window_t1

0xb0ab,	// (0x00066e89) popup_cale_events_window_t2_ParamLimits

0xb0ab,	// (0x00066e89) popup_cale_events_window_t2

0xb0f5,	// (0x00066ed3) popup_cale_events_window_t3_ParamLimits

0xb0f5,	// (0x00066ed3) popup_cale_events_window_t3

0xb12f,	// (0x00066f0d) popup_cale_events_window_t4_ParamLimits

0xb12f,	// (0x00066f0d) popup_cale_events_window_t4

0x0003,

0xf33d,	// (0x0006b11b) popup_cale_events_window_t_ParamLimits

0xf33d,	// (0x0006b11b) popup_cale_events_window_t

0x329d,	// (0x0005f07b) call_type_pane

0xb50f,	// (0x000672ed) popup_call_status_window_g1

0x32a9,	// (0x0005f087) popup_call_status_window_g2

0x32b5,	// (0x0005f093) popup_call_status_window_g3

0x0002,

0xf346,	// (0x0006b124) popup_call_status_window_g

0xb165,	// (0x00066f43) call_type_pane_g1

0xb16e,	// (0x00066f4c) call_type_pane_g2

0x0001,

0x013c,	// (0x0005bf1a) call_type_pane_g

0xa5c4,	// (0x000663a2) bg_popup_sub_pane_cp02

0xb177,	// (0x00066f55) listscroll_popup_wml_pane

0xb17f,	// (0x00066f5d) list_wml_pane

0xb189,	// (0x00066f67) scroll_pane_cp013

0xb194,	// (0x00066f72) list_single_graphic_popup_wml_pane_ParamLimits

0xb194,	// (0x00066f72) list_single_graphic_popup_wml_pane

0xa945,	// (0x00066723) list_single_graphic_popup_wml_pane_g1

0xb1a8,	// (0x00066f86) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf34d,	// (0x0006b12b) list_single_graphic_popup_wml_pane_g

0xb1b0,	// (0x00066f8e) list_single_graphic_popup_wml_pane_t1

0xb1c6,	// (0x00066fa4) aid_call_pane

0xa817,	// (0x000665f5) popup_clock_analogue_window_g1

0xa817,	// (0x000665f5) popup_clock_analogue_window_g2

0x32c1,	// (0x0005f09f) popup_clock_analogue_window_g3

0x32c1,	// (0x0005f09f) popup_clock_analogue_window_g4

0xa945,	// (0x00066723) popup_clock_analogue_window_g5

0x0004,

0xf352,	// (0x0006b130) popup_clock_analogue_window_g

0x32c9,	// (0x0005f0a7) popup_clock_analogue_window_t1

0x32d7,	// (0x0005f0b5) clock_digital_number_pane_ParamLimits

0x32d7,	// (0x0005f0b5) clock_digital_number_pane

0x32e3,	// (0x0005f0c1) clock_digital_number_pane_cp02_ParamLimits

0x32e3,	// (0x0005f0c1) clock_digital_number_pane_cp02

0x32ef,	// (0x0005f0cd) clock_digital_number_pane_cp03_ParamLimits

0x32ef,	// (0x0005f0cd) clock_digital_number_pane_cp03

0x32fb,	// (0x0005f0d9) clock_digital_number_pane_cp04_ParamLimits

0x32fb,	// (0x0005f0d9) clock_digital_number_pane_cp04

0x3307,	// (0x0005f0e5) clock_digital_separator_pane_ParamLimits

0x3307,	// (0x0005f0e5) clock_digital_separator_pane

0x3313,	// (0x0005f0f1) popup_clock_digital_window_t1

0xa945,	// (0x00066723) clock_digital_number_pane_g1

0xa945,	// (0x00066723) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0006b0af) clock_digital_number_pane_g

0xa945,	// (0x00066723) clock_digital_separator_pane_g1

0xa945,	// (0x00066723) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0006b0af) clock_digital_separator_pane_g

0xa5c4,	// (0x000663a2) bg_popup_window_pane_cp04

0xb1ce,	// (0x00066fac) heading_pane_cp03

0xb1d6,	// (0x00066fb4) listscroll_popup_gms_pane

0xb1de,	// (0x00066fbc) grid_large_graphic_popup_pane

0xb1e8,	// (0x00066fc6) listscroll_popup_gms_pane_g1

0xb1f0,	// (0x00066fce) listscroll_popup_gms_pane_g2

0x0001,

0x0151,	// (0x0005bf2f) listscroll_popup_gms_pane_g

0xac85,	// (0x00066a63) scroll_pane_cp014

0x3330,	// (0x0005f10e) cell_large_graphic_popup_pane_ParamLimits

0x3330,	// (0x0005f10e) cell_large_graphic_popup_pane

0x3348,	// (0x0005f126) cell_large_graphic_popup_pane_g1_ParamLimits

0x3348,	// (0x0005f126) cell_large_graphic_popup_pane_g1

0xb1f8,	// (0x00066fd6) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1f8,	// (0x00066fd6) cell_large_graphic_popup_pane_g2

0xb204,	// (0x00066fe2) cell_large_graphic_popup_pane_g3_ParamLimits

0xb204,	// (0x00066fe2) cell_large_graphic_popup_pane_g3

0xb211,	// (0x00066fef) cell_large_graphic_popup_pane_g4_ParamLimits

0xb211,	// (0x00066fef) cell_large_graphic_popup_pane_g4

0x0003,

0xf35d,	// (0x0006b13b) cell_large_graphic_popup_pane_g_ParamLimits

0xf35d,	// (0x0006b13b) cell_large_graphic_popup_pane_g

0xb221,	// (0x00066fff) grid_highlight_pane_cp010

0xa945,	// (0x00066723) bg_popup_call_pane_g1

0xb22b,	// (0x00067009) list_single_graphic_popup_conf_pane_ParamLimits

0xb22b,	// (0x00067009) list_single_graphic_popup_conf_pane

0xb23e,	// (0x0006701c) list_highlight_pane_cp01

0xb247,	// (0x00067025) list_single_graphic_popup_conf_pane_g1

0xb24f,	// (0x0006702d) list_single_graphic_popup_conf_pane_g2

0x0001,

0x015f,	// (0x0005bf3d) list_single_graphic_popup_conf_pane_g

0xb257,	// (0x00067035) list_single_graphic_popup_conf_pane_t1

0xb265,	// (0x00067043) linegrid_cams_pane_g1

0x3354,	// (0x0005f132) linegrid_cams_pane_g2

0xaaa4,	// (0x00066882) linegrid_cams_pane_g3

0xb26e,	// (0x0006704c) linegrid_cams_pane_g4

0x335d,	// (0x0005f13b) linegrid_cams_pane_g5

0x3366,	// (0x0005f144) linegrid_cams_pane_g6

0xaaad,	// (0x0006688b) linegrid_cams_pane_g7

0x0006,

0xf366,	// (0x0006b144) linegrid_cams_pane_g

0xb277,	// (0x00067055) popup_clock_analogue_window

0xb277,	// (0x00067055) popup_clock_digital_window

0xa5c4,	// (0x000663a2) popup_phob_thumbnail_window

0xa945,	// (0x00066723) call_video_uplink_pane_g1

0xb280,	// (0x0006705e) call_video_uplink_pane_g2

0x0001,

0xf375,	// (0x0006b153) call_video_uplink_pane_g

0xb288,	// (0x00067066) video_uplink_pane

0xb290,	// (0x0006706e) mce_image_pane_g1

0x336f,	// (0x0005f14d) mce_image_pane_g2

0x3377,	// (0x0005f155) mce_image_pane_g3

0x337f,	// (0x0005f15d) mce_image_pane_g4

0x3387,	// (0x0005f165) mce_image_pane_g5

0x0004,

0xf37a,	// (0x0006b158) mce_image_pane_g

0xb29a,	// (0x00067078) control_top_pane_stacon_cp01_ParamLimits

0xb29a,	// (0x00067078) control_top_pane_stacon_cp01

0xb2ae,	// (0x0006708c) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2ae,	// (0x0006708c) uni_indicator_pane_stacon_cp01

0xb2bf,	// (0x0006709d) bg_popup_sub_pane_cp03

0x338f,	// (0x0005f16d) chi_dic_find_pane

0x3397,	// (0x0005f175) listscroll_chi_dic_pane

0x33a0,	// (0x0005f17e) main_pane_chidic_g1

0x33b3,	// (0x0005f191) chi_dic_find_pane_t1

0xb2c9,	// (0x000670a7) find_chidic_pane

0xb2d2,	// (0x000670b0) chi_dic_list_pane_ParamLimits

0xb2d2,	// (0x000670b0) chi_dic_list_pane

0xb2e3,	// (0x000670c1) scroll_pane_cp020

0x33c1,	// (0x0005f19f) find_chidic_pane_t1

0xa5c4,	// (0x000663a2) input_focus_pane_cp06

0x33d0,	// (0x0005f1ae) list_chi_dic_pane_ParamLimits

0x33d0,	// (0x0005f1ae) list_chi_dic_pane

0x33ed,	// (0x0005f1cb) list_chi_dic_pane_t1_ParamLimits

0x33ed,	// (0x0005f1cb) list_chi_dic_pane_t1

0xa5c4,	// (0x000663a2) list_highlight_pane_cp020

0xb2eb,	// (0x000670c9) bg_cale_heading_pane_g1

0x3400,	// (0x0005f1de) bg_cale_heading_pane_g2

0x3408,	// (0x0005f1e6) bg_cale_heading_pane_g3

0x3410,	// (0x0005f1ee) bg_cale_heading_pane_g4

0x341a,	// (0x0005f1f8) bg_cale_heading_pane_g5

0x3424,	// (0x0005f202) bg_cale_heading_pane_g6

0x342c,	// (0x0005f20a) bg_cale_heading_pane_g7

0x3434,	// (0x0005f212) bg_cale_heading_pane_g8

0x343e,	// (0x0005f21c) bg_cale_heading_pane_g9

0x0008,

0xf385,	// (0x0006b163) bg_cale_heading_pane_g

0xb2eb,	// (0x000670c9) bg_cale_side_pane_g1

0x3448,	// (0x0005f226) bg_cale_side_pane_g2

0x3452,	// (0x0005f230) bg_cale_side_pane_g3

0x345c,	// (0x0005f23a) bg_cale_side_pane_g4

0x3466,	// (0x0005f244) bg_cale_side_pane_g5

0x3470,	// (0x0005f24e) bg_cale_side_pane_g6

0x347a,	// (0x0005f258) bg_cale_side_pane_g7

0x3484,	// (0x0005f262) bg_cale_side_pane_g8

0x348c,	// (0x0005f26a) bg_cale_side_pane_g9

0x0008,

0xf398,	// (0x0006b176) bg_cale_side_pane_g

0x3494,	// (0x0005f272) popup_call_status_window_ParamLimits

0x3494,	// (0x0005f272) popup_call_status_window

0xb2f3,	// (0x000670d1) stacon_top_pane

0xb2fb,	// (0x000670d9) status_pane_ParamLimits

0xb2fb,	// (0x000670d9) status_pane

0xb310,	// (0x000670ee) status_small_pane

0xb318,	// (0x000670f6) control_pane

0xa5c4,	// (0x000663a2) stacon_bottom_pane

0xb320,	// (0x000670fe) list_single_mce_smart_pane_t1_ParamLimits

0xb320,	// (0x000670fe) list_single_mce_smart_pane_t1

0xb333,	// (0x00067111) list_single_mce_smart_pane_t2_ParamLimits

0xb333,	// (0x00067111) list_single_mce_smart_pane_t2

0x0001,

0x01a9,	// (0x0005bf87) list_single_mce_smart_pane_t_ParamLimits

0x01a9,	// (0x0005bf87) list_single_mce_smart_pane_t

0x34a0,	// (0x0005f27e) compass_pane

0x34ac,	// (0x0005f28a) main_location2_pane_t1

0x34c0,	// (0x0005f29e) main_location2_pane_t2

0x34d4,	// (0x0005f2b2) main_location2_pane_t3

0x0003,

0xf3ab,	// (0x0006b189) main_location2_pane_t

0xb352,	// (0x00067130) compass_pane_g1_ParamLimits

0xb352,	// (0x00067130) compass_pane_g1

0x351e,	// (0x0005f2fc) compass_pane_t1

0x352d,	// (0x0005f30b) compass_pane_t2

0x0005,

0xf3b4,	// (0x0006b192) compass_pane_t

0x3578,	// (0x0005f356) text_secondary_cp61

0xb3d0,	// (0x000671ae) navi_pane_cams_g5

0xb44c,	// (0x0006722a) navi_pane_im_t1

0xb45a,	// (0x00067238) navi_pane_mp_g1_ParamLimits

0xb45a,	// (0x00067238) navi_pane_mp_g1

0xb46e,	// (0x0006724c) navi_pane_mp_g2_ParamLimits

0xb46e,	// (0x0006724c) navi_pane_mp_g2

0xb47a,	// (0x00067258) navi_pane_mp_g3_ParamLimits

0xb47a,	// (0x00067258) navi_pane_mp_g3

0x0002,

0x01cb,	// (0x0005bfa9) navi_pane_mp_g_ParamLimits

0x01cb,	// (0x0005bfa9) navi_pane_mp_g

0xb486,	// (0x00067264) navi_pane_mp_t1

0xb494,	// (0x00067272) navi_pane_mp_t2

0x0002,

0x01d2,	// (0x0005bfb0) navi_pane_mp_t

0xb4ff,	// (0x000672dd) navi_pane_vt_g1

0xb486,	// (0x00067264) navi_pane_vt_t1

0xb507,	// (0x000672e5) navi_slider_pane

0xaabe,	// (0x0006689c) zooming_pane

0xb525,	// (0x00067303) navi_slider_pane_g1

0x35b3,	// (0x0005f391) navi_slider_pane_g2

0x0006,

0xf3c1,	// (0x0006b19f) navi_slider_pane_g

0xb549,	// (0x00067327) aid_levels_zoom

0xb551,	// (0x0006732f) zooming_pane_g1

0xb559,	// (0x00067337) zooming_pane_g2

0xb559,	// (0x00067337) zooming_pane_g3

0x0002,

0xf3d0,	// (0x0006b1ae) zooming_pane_g

0xb561,	// (0x0006733f) level_10_zoom

0xb56a,	// (0x00067348) level_11_zoom

0xb573,	// (0x00067351) level_1_zoom

0xb57c,	// (0x0006735a) level_2_zoom

0xb585,	// (0x00067363) level_3_zoom

0xb58e,	// (0x0006736c) level_4_zoom

0xb597,	// (0x00067375) level_5_zoom

0xb5a0,	// (0x0006737e) level_6_zoom

0xb5a9,	// (0x00067387) level_7_zoom

0xb5b2,	// (0x00067390) level_8_zoom

0xb5bb,	// (0x00067399) level_9_zoom

0xb5cc,	// (0x000673aa) popup_phob_thumbnail_window_g1

0xb5d4,	// (0x000673b2) popup_phob_thumbnail_window_g2

0x0001,

0xf3d7,	// (0x0006b1b5) popup_phob_thumbnail_window_g

0xc8fd,	// (0x000686db) level_1_location

0xc905,	// (0x000686e3) level_2_location

0xc90d,	// (0x000686eb) level_3_location

0xc915,	// (0x000686f3) level_4_location

0xaabe,	// (0x0006689c) level_5_location

0x35c5,	// (0x0005f3a3) mce_icon_pane_g1

0x35cd,	// (0x0005f3ab) mce_icon_pane_g2

0x0001,

0xf3dc,	// (0x0006b1ba) mce_icon_pane_g

0x35d5,	// (0x0005f3b3) main_mup_pane_g1_ParamLimits

0x35d5,	// (0x0005f3b3) main_mup_pane_g1

0x35ed,	// (0x0005f3cb) main_mup_pane_g2_ParamLimits

0x35ed,	// (0x0005f3cb) main_mup_pane_g2

0x3601,	// (0x0005f3df) main_mup_pane_g3_ParamLimits

0x3601,	// (0x0005f3df) main_mup_pane_g3

0x3615,	// (0x0005f3f3) main_mup_pane_g4_ParamLimits

0x3615,	// (0x0005f3f3) main_mup_pane_g4

0x3631,	// (0x0005f40f) main_mup_pane_g5_ParamLimits

0x3631,	// (0x0005f40f) main_mup_pane_g5

0x3652,	// (0x0005f430) main_mup_pane_g6_ParamLimits

0x3652,	// (0x0005f430) main_mup_pane_g6

0x366e,	// (0x0005f44c) main_mup_pane_g7_ParamLimits

0x366e,	// (0x0005f44c) main_mup_pane_g7

0x368a,	// (0x0005f468) main_mup_pane_g8_ParamLimits

0x368a,	// (0x0005f468) main_mup_pane_g8

0x36a6,	// (0x0005f484) main_mup_pane_g9_ParamLimits

0x36a6,	// (0x0005f484) main_mup_pane_g9

0x36c5,	// (0x0005f4a3) main_mup_pane_g10_ParamLimits

0x36c5,	// (0x0005f4a3) main_mup_pane_g10

0x36e4,	// (0x0005f4c2) main_mup_pane_g11_ParamLimits

0x36e4,	// (0x0005f4c2) main_mup_pane_g11

0x36fc,	// (0x0005f4da) main_mup_pane_g12_ParamLimits

0x36fc,	// (0x0005f4da) main_mup_pane_g12

0x370a,	// (0x0005f4e8) main_mup_pane_g13_ParamLimits

0x370a,	// (0x0005f4e8) main_mup_pane_g13

0x000c,

0xf3e1,	// (0x0006b1bf) main_mup_pane_g_ParamLimits

0xf3e1,	// (0x0006b1bf) main_mup_pane_g

0x3720,	// (0x0005f4fe) main_mup_pane_t1_ParamLimits

0x3720,	// (0x0005f4fe) main_mup_pane_t1

0x373d,	// (0x0005f51b) main_mup_pane_t2_ParamLimits

0x373d,	// (0x0005f51b) main_mup_pane_t2

0x3757,	// (0x0005f535) main_mup_pane_t3_ParamLimits

0x3757,	// (0x0005f535) main_mup_pane_t3

0x3771,	// (0x0005f54f) main_mup_pane_t4_ParamLimits

0x3771,	// (0x0005f54f) main_mup_pane_t4

0x3783,	// (0x0005f561) main_mup_pane_t5_ParamLimits

0x3783,	// (0x0005f561) main_mup_pane_t5

0x3795,	// (0x0005f573) main_mup_pane_t6_ParamLimits

0x3795,	// (0x0005f573) main_mup_pane_t6

0x0005,

0xf3fc,	// (0x0006b1da) main_mup_pane_t_ParamLimits

0xf3fc,	// (0x0006b1da) main_mup_pane_t

0x37ab,	// (0x0005f589) mup_progress_pane_ParamLimits

0x37ab,	// (0x0005f589) mup_progress_pane

0x37b7,	// (0x0005f595) mup_visualizer_pane_ParamLimits

0x37b7,	// (0x0005f595) mup_visualizer_pane

0x37f5,	// (0x0005f5d3) mup_volume_pane_ParamLimits

0x37f5,	// (0x0005f5d3) mup_volume_pane

0xb50f,	// (0x000672ed) mup_visualizer_pane_g1_ParamLimits

0xb50f,	// (0x000672ed) mup_visualizer_pane_g1

0xb50f,	// (0x000672ed) mup_visualizer_pane_g2_ParamLimits

0xb50f,	// (0x000672ed) mup_visualizer_pane_g2

0xb352,	// (0x00067130) mup_visualizer_pane_g3_ParamLimits

0xb352,	// (0x00067130) mup_visualizer_pane_g3

0x0002,

0xf409,	// (0x0006b1e7) mup_visualizer_pane_g_ParamLimits

0xf409,	// (0x0006b1e7) mup_visualizer_pane_g

0xa945,	// (0x00066723) mup_volume_pane_g1

0xb5e4,	// (0x000673c2) mup_volume_pane_g2

0x0001,

0xf410,	// (0x0006b1ee) mup_volume_pane_g

0xa945,	// (0x00066723) mup_progress_pane_g1

0xb5ed,	// (0x000673cb) mup_progress_pane_g2

0xb5f6,	// (0x000673d4) mup_progress_pane_g3

0x0002,

0xf415,	// (0x0006b1f3) mup_progress_pane_g

0xa5c4,	// (0x000663a2) bg_popup_window_pane_cp05

0xb5ff,	// (0x000673dd) heading_pane_cp02_ParamLimits

0xb5ff,	// (0x000673dd) heading_pane_cp02

0xb619,	// (0x000673f7) list_popup_blid_pane

0xb621,	// (0x000673ff) list_blid_sat_info_pane_ParamLimits

0xb621,	// (0x000673ff) list_blid_sat_info_pane

0xb634,	// (0x00067412) list_blid_sat_info_pane_g1

0xb63c,	// (0x0006741a) list_blid_sat_info_pane_t1

0x3900,	// (0x0005f6de) mup_equalizer_pane_ParamLimits

0x3900,	// (0x0005f6de) mup_equalizer_pane

0x3921,	// (0x0005f6ff) mup_equalizer_pane_cp1_ParamLimits

0x3921,	// (0x0005f6ff) mup_equalizer_pane_cp1

0x3942,	// (0x0005f720) mup_equalizer_pane_cp2_ParamLimits

0x3942,	// (0x0005f720) mup_equalizer_pane_cp2

0x3963,	// (0x0005f741) mup_equalizer_pane_cp3_ParamLimits

0x3963,	// (0x0005f741) mup_equalizer_pane_cp3

0x3984,	// (0x0005f762) mup_equalizer_pane_cp4_ParamLimits

0x3984,	// (0x0005f762) mup_equalizer_pane_cp4

0x39a5,	// (0x0005f783) mup_equalizer_pane_cp5

0x39bb,	// (0x0005f799) mup_equalizer_pane_cp6

0x39d3,	// (0x0005f7b1) mup_equalizer_pane_cp7

0xc7db,	// (0x000685b9) bg_popup_call_poc_act_pane_g9

0xc7e3,	// (0x000685c1) bg_popup_call_poc_act_pane_g10

0xc7eb,	// (0x000685c9) bg_popup_call_poc_act_pane_g11

0x000a,

0xa81f,	// (0x000665fd) mup_scale_pane

0xa945,	// (0x00066723) mup_scale_pane_g1

0xb64a,	// (0x00067428) mup_scale_pane_g2

0x0006,

0xf431,	// (0x0006b20f) mup_scale_pane_g

0xb66e,	// (0x0006744c) msg_data_pane

0xb676,	// (0x00067454) scroll_pane_cp017

0x39fd,	// (0x0005f7db) bg_list_pane_cp04_ParamLimits

0x39fd,	// (0x0005f7db) bg_list_pane_cp04

0xb67e,	// (0x0006745c) msg_data_pane_g1

0x3a15,	// (0x0005f7f3) msg_data_pane_g2

0x3a1d,	// (0x0005f7fb) msg_data_pane_g3

0x3a25,	// (0x0005f803) msg_data_pane_g4

0x3a2d,	// (0x0005f80b) msg_data_pane_g5

0x3a35,	// (0x0005f813) msg_data_pane_g6

0x3a3d,	// (0x0005f81b) msg_data_pane_g7

0x0006,

0xf440,	// (0x0006b21e) msg_data_pane_g

0x3a45,	// (0x0005f823) msg_text_pane_ParamLimits

0x3a45,	// (0x0005f823) msg_text_pane

0x3a9f,	// (0x0005f87d) qrid_highlight_pane_cp011_ParamLimits

0x3a9f,	// (0x0005f87d) qrid_highlight_pane_cp011

0xa5c4,	// (0x000663a2) msg_body_pane

0xa5c4,	// (0x000663a2) msg_header_pane

0xb68f,	// (0x0006746d) input_focus_pane_cp07

0x9e24,	// (0x00065c02) msg_header_pane_t1_ParamLimits

0x9e24,	// (0x00065c02) msg_header_pane_t1

0x9e36,	// (0x00065c14) msg_header_pane_t2_ParamLimits

0x9e36,	// (0x00065c14) msg_header_pane_t2

0x0001,

0xf454,	// (0x0006b232) msg_header_pane_t_ParamLimits

0xf454,	// (0x0006b232) msg_header_pane_t

0xb6a4,	// (0x00067482) msg_body_pane_g1

0x9e48,	// (0x00065c26) msg_body_pane_t1_ParamLimits

0x9e48,	// (0x00065c26) msg_body_pane_t1

0x9e79,	// (0x00065c57) msg_body_pane_t2_ParamLimits

0x9e79,	// (0x00065c57) msg_body_pane_t2

0x9e8b,	// (0x00065c69) msg_body_pane_t3_ParamLimits

0x9e8b,	// (0x00065c69) msg_body_pane_t3

0x0002,

0xf459,	// (0x0006b237) msg_body_pane_t_ParamLimits

0xf459,	// (0x0006b237) msg_body_pane_t

0x3b19,	// (0x0005f8f7) main_viewer_pane_g1_ParamLimits

0x3b19,	// (0x0005f8f7) main_viewer_pane_g1

0x3b25,	// (0x0005f903) main_viewer_pane_g2_ParamLimits

0x3b25,	// (0x0005f903) main_viewer_pane_g2

0x3b31,	// (0x0005f90f) main_viewer_pane_g3_ParamLimits

0x3b31,	// (0x0005f90f) main_viewer_pane_g3

0x3b42,	// (0x0005f920) main_viewer_pane_g4_ParamLimits

0x3b42,	// (0x0005f920) main_viewer_pane_g4

0x3b53,	// (0x0005f931) main_viewer_pane_g5_ParamLimits

0x3b53,	// (0x0005f931) main_viewer_pane_g5

0x3b53,	// (0x0005f931) main_viewer_pane_g7_ParamLimits

0x3b53,	// (0x0005f931) main_viewer_pane_g7

0xaff6,	// (0x00066dd4) main_viewer_pane_g8_ParamLimits

0xaff6,	// (0x00066dd4) main_viewer_pane_g8

0x0007,

0xf469,	// (0x0006b247) main_viewer_pane_g_ParamLimits

0xf469,	// (0x0006b247) main_viewer_pane_g

0xb6ac,	// (0x0006748a) viewer_content_pane_ParamLimits

0xb6ac,	// (0x0006748a) viewer_content_pane

0x3b91,	// (0x0005f96f) main_postcard_pane_g1_ParamLimits

0x3b91,	// (0x0005f96f) main_postcard_pane_g1

0x3b9f,	// (0x0005f97d) main_postcard_pane_g2_ParamLimits

0x3b9f,	// (0x0005f97d) main_postcard_pane_g2

0x3bad,	// (0x0005f98b) main_postcard_pane_g3_ParamLimits

0x3bad,	// (0x0005f98b) main_postcard_pane_g3

0x0005,

0xf47a,	// (0x0006b258) main_postcard_pane_g_ParamLimits

0xf47a,	// (0x0006b258) main_postcard_pane_g

0x3bbd,	// (0x0005f99b) main_postcard_pane_g4

0xc9fd,	// (0x000687db) smil_status_volume_pane_g2

0x3be9,	// (0x0005f9c7) postcard_pane_ParamLimits

0x3be9,	// (0x0005f9c7) postcard_pane

0xb50f,	// (0x000672ed) postcard_pane_g1_ParamLimits

0xb50f,	// (0x000672ed) postcard_pane_g1

0x3c1b,	// (0x0005f9f9) postcard_pane_g2_ParamLimits

0x3c1b,	// (0x0005f9f9) postcard_pane_g2

0x3c27,	// (0x0005fa05) postcard_pane_g3_ParamLimits

0x3c27,	// (0x0005fa05) postcard_pane_g3

0xb6ba,	// (0x00067498) postcard_pane_g4_ParamLimits

0xb6ba,	// (0x00067498) postcard_pane_g4

0x3c33,	// (0x0005fa11) postcard_pane_g5_ParamLimits

0x3c33,	// (0x0005fa11) postcard_pane_g5

0x3c3f,	// (0x0005fa1d) postcard_pane_g6_ParamLimits

0x3c3f,	// (0x0005fa1d) postcard_pane_g6

0xb6c8,	// (0x000674a6) postcard_pane_g7_ParamLimits

0xb6c8,	// (0x000674a6) postcard_pane_g7

0x0006,

0xf487,	// (0x0006b265) postcard_pane_g_ParamLimits

0xf487,	// (0x0006b265) postcard_pane_g

0x3c4b,	// (0x0005fa29) main_mp2_pane_g1_ParamLimits

0x3c4b,	// (0x0005fa29) main_mp2_pane_g1

0x3c57,	// (0x0005fa35) main_mp2_pane_g2_ParamLimits

0x3c57,	// (0x0005fa35) main_mp2_pane_g2

0x3c63,	// (0x0005fa41) main_mp2_pane_g3_ParamLimits

0x3c63,	// (0x0005fa41) main_mp2_pane_g3

0x0002,

0xf496,	// (0x0006b274) main_mp2_pane_g_ParamLimits

0xf496,	// (0x0006b274) main_mp2_pane_g

0x3c6f,	// (0x0005fa4d) main_mp2_pane_t1_ParamLimits

0x3c6f,	// (0x0005fa4d) main_mp2_pane_t1

0x3c86,	// (0x0005fa64) main_mp2_pane_t2_ParamLimits

0x3c86,	// (0x0005fa64) main_mp2_pane_t2

0x3c98,	// (0x0005fa76) main_mp2_pane_t3_ParamLimits

0x3c98,	// (0x0005fa76) main_mp2_pane_t3

0x0002,

0xf49d,	// (0x0006b27b) main_mp2_pane_t_ParamLimits

0xf49d,	// (0x0006b27b) main_mp2_pane_t

0xb6d6,	// (0x000674b4) pec_content_pane_ParamLimits

0xb6d6,	// (0x000674b4) pec_content_pane

0xac85,	// (0x00066a63) scroll_pane_cp015

0xb6e8,	// (0x000674c6) pec_attribute_pane_ParamLimits

0xb6e8,	// (0x000674c6) pec_attribute_pane

0x3caa,	// (0x0005fa88) pec_content_pane_g1_ParamLimits

0x3caa,	// (0x0005fa88) pec_content_pane_g1

0xb6f8,	// (0x000674d6) pec_content_pane_t1_ParamLimits

0xb6f8,	// (0x000674d6) pec_content_pane_t1

0xb70a,	// (0x000674e8) pec_content_pane_t2_ParamLimits

0xb70a,	// (0x000674e8) pec_content_pane_t2

0x0001,

0x02bc,	// (0x0005c09a) pec_content_pane_t_ParamLimits

0x02bc,	// (0x0005c09a) pec_content_pane_t

0x3cb6,	// (0x0005fa94) list_single_graphic_pane_cp01_ParamLimits

0x3cb6,	// (0x0005fa94) list_single_graphic_pane_cp01

0xa81f,	// (0x000665fd) bg_popup_sub_pane_cp04

0xb71c,	// (0x000674fa) popup_mup_playback_window_g1

0xb728,	// (0x00067506) popup_mup_playback_window_t1

0xb73d,	// (0x0006751b) popup_mup_playback_window_t2

0x0001,

0x02c1,	// (0x0005c09f) popup_mup_playback_window_t

0xb774,	// (0x00067552) main_image_pane_g1_ParamLimits

0xb774,	// (0x00067552) main_image_pane_g1

0xb7b7,	// (0x00067595) scroll_pane_cp018_ParamLimits

0xb7b7,	// (0x00067595) scroll_pane_cp018

0xb7cf,	// (0x000675ad) scroll_pane_cp016_ParamLimits

0xb7cf,	// (0x000675ad) scroll_pane_cp016

0x3d50,	// (0x0005fb2e) smil2_image_pane_ParamLimits

0x3d50,	// (0x0005fb2e) smil2_image_pane

0x3d80,	// (0x0005fb5e) smil2_root_pane_ParamLimits

0x3d80,	// (0x0005fb5e) smil2_root_pane

0x3dac,	// (0x0005fb8a) smil2_text_pane_ParamLimits

0x3dac,	// (0x0005fb8a) smil2_text_pane

0xa5c4,	// (0x000663a2) bg_list_pane_cp06

0xb80b,	// (0x000675e9) grid_radio_pane

0xa5c4,	// (0x000663a2) bg_popup_window_pane_cp06

0xb813,	// (0x000675f1) main_fmradio_pane_t1

0xb1ce,	// (0x00066fac) heading_pane_cp04

0xb821,	// (0x000675ff) main_fmradio_pane_t2

0xc833,	// (0x00068611) popup_cale_lunar_info_window_g1

0xb82f,	// (0x0006760d) main_fmradio_pane_t3

0xc83b,	// (0x00068619) popup_cale_lunar_info_window_g2

0xb83d,	// (0x0006761b) main_fmradio_pane_t4

0x0001,

0xb84b,	// (0x00067629) main_fmradio_pane_t5

0x0004,

0x03af,	// (0x0005c18d) popup_cale_lunar_info_window_g

0x02d6,	// (0x0005c0b4) main_fmradio_pane_t

0xb859,	// (0x00067637) wait_bar_pane_cp03

0xb861,	// (0x0006763f) cell_fmradio_pane_ParamLimits

0xb861,	// (0x0006763f) cell_fmradio_pane

0xb6c8,	// (0x000674a6) cell_fmradio_pane_g1_ParamLimits

0xb6c8,	// (0x000674a6) cell_fmradio_pane_g1

0xa5c4,	// (0x000663a2) grid_highlight_pane_cp011

0xb874,	// (0x00067652) poc_content_pane_ParamLimits

0xb874,	// (0x00067652) poc_content_pane

0xb886,	// (0x00067664) scroll_pane_cp019

0x3dec,	// (0x0005fbca) popup_call_poc_act_window_ParamLimits

0x3dec,	// (0x0005fbca) popup_call_poc_act_window

0x3df9,	// (0x0005fbd7) popup_call_poc_inact_window_ParamLimits

0x3df9,	// (0x0005fbd7) popup_call_poc_inact_window

0x0373,	// (0x0005c151) bg_popup_call_poc_act_pane_g

0xc7f3,	// (0x000685d1) bg_popup_call_poc_inact_pane_g1

0xc7fb,	// (0x000685d9) bg_popup_call_poc_inact_pane_g2

0xb88e,	// (0x0006766c) popup_call_poc_act_window_g2

0xc803,	// (0x000685e1) bg_popup_call_poc_inact_pane_g3

0xc783,	// (0x00068561) bg_popup_call_poc_inact_pane_g4

0xc80b,	// (0x000685e9) bg_popup_call_poc_inact_pane_g5

0xb896,	// (0x00067674) popup_call_poc_act_window_t1_ParamLimits

0xb896,	// (0x00067674) popup_call_poc_act_window_t1

0xb8be,	// (0x0006769c) popup_call_poc_act_window_t2_ParamLimits

0xb8be,	// (0x0006769c) popup_call_poc_act_window_t2

0xb8e6,	// (0x000676c4) popup_call_poc_act_window_t3_ParamLimits

0xb8e6,	// (0x000676c4) popup_call_poc_act_window_t3

0xb90e,	// (0x000676ec) popup_call_poc_act_window_t4_ParamLimits

0xb90e,	// (0x000676ec) popup_call_poc_act_window_t4

0x0003,

0x02e1,	// (0x0005c0bf) popup_call_poc_act_window_t_ParamLimits

0x02e1,	// (0x0005c0bf) popup_call_poc_act_window_t

0xc813,	// (0x000685f1) bg_popup_call_poc_inact_pane_g6

0xc81b,	// (0x000685f9) bg_popup_call_poc_inact_pane_g7

0xc823,	// (0x00068601) bg_popup_call_poc_inact_pane_g8

0xb920,	// (0x000676fe) popup_call_poc_inact_window_g2

0xc82b,	// (0x00068609) bg_popup_call_poc_inact_pane_g9

0x0008,

0x038a,	// (0x0005c168) bg_popup_call_poc_inact_pane_g

0xb928,	// (0x00067706) popup_call_poc_inact_window_t1_ParamLimits

0xb928,	// (0x00067706) popup_call_poc_inact_window_t1

0xb93d,	// (0x0006771b) popup_call_poc_inact_window_t2_ParamLimits

0xb93d,	// (0x0006771b) popup_call_poc_inact_window_t2

0xb952,	// (0x00067730) popup_call_poc_inact_window_t3_ParamLimits

0xb952,	// (0x00067730) popup_call_poc_inact_window_t3

0x0002,

0x02ea,	// (0x0005c0c8) popup_call_poc_inact_window_t_ParamLimits

0x02ea,	// (0x0005c0c8) popup_call_poc_inact_window_t

0xc970,	// (0x0006874e) context_pane_ParamLimits

0x443d,	// (0x0006021b) signal_pane_ParamLimits

0xaabe,	// (0x0006689c) main_call2_pane

0x43b0,	// (0x0006018e) popup_phob_thumbnail2_window_ParamLimits

0x43b0,	// (0x0006018e) popup_phob_thumbnail2_window

0x3ac7,	// (0x0005f8a5) aid_hotspot_pointer_arrow_pane

0x3acf,	// (0x0005f8ad) aid_hotspot_pointer_hand_pane

0x4121,	// (0x0005feff) phob_pre_status_pane_g5

0x1b4d,	// (0x0005d92b) cams_zoom_pane_ParamLimits

0x1b59,	// (0x0005d937) image_vga_pane_ParamLimits

0x1b68,	// (0x0005d946) main_camera_pane_g1_ParamLimits

0x1b76,	// (0x0005d954) main_camera_pane_g2_ParamLimits

0x1b82,	// (0x0005d960) main_camera_pane_g3_ParamLimits

0x1b8e,	// (0x0005d96c) main_camera_pane_g4_ParamLimits

0x1b9a,	// (0x0005d978) main_camera_pane_g5_ParamLimits

0x1ba6,	// (0x0005d984) main_camera_pane_g6_ParamLimits

0x1bb2,	// (0x0005d990) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0006afe4) main_camera_pane_g_ParamLimits

0x1bbe,	// (0x0005d99c) main_camera_pane_t1_ParamLimits

0x1bd0,	// (0x0005d9ae) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0006aff5) main_camera_pane_t_ParamLimits

0xa81f,	// (0x000665fd) bg_popup_preview_window_pane_cp01_ParamLimits

0xa81f,	// (0x000665fd) bg_popup_preview_window_pane_cp01

0xb967,	// (0x00067745) popup_phob_thumbnail2_window_g1_ParamLimits

0xb967,	// (0x00067745) popup_phob_thumbnail2_window_g1

0xa5c4,	// (0x000663a2) call2_cli_visual_pane

0x3e15,	// (0x0005fbf3) popup_call2_audio_conf_window_ParamLimits

0x3e15,	// (0x0005fbf3) popup_call2_audio_conf_window

0x3e2a,	// (0x0005fc08) popup_call2_audio_first_window_ParamLimits

0x3e2a,	// (0x0005fc08) popup_call2_audio_first_window

0x3ec8,	// (0x0005fca6) popup_call2_audio_in_window_ParamLimits

0x3ec8,	// (0x0005fca6) popup_call2_audio_in_window

0x3f0a,	// (0x0005fce8) popup_call2_audio_out_window_ParamLimits

0x3f0a,	// (0x0005fce8) popup_call2_audio_out_window

0x3f6c,	// (0x0005fd4a) popup_call2_audio_second_window_ParamLimits

0x3f6c,	// (0x0005fd4a) popup_call2_audio_second_window

0x3fca,	// (0x0005fda8) popup_call2_audio_wait_window_ParamLimits

0x3fca,	// (0x0005fda8) popup_call2_audio_wait_window

0xa5c4,	// (0x000663a2) bg_popup_call2_act_pane_cp03

0xa801,	// (0x000665df) list_conf_pane_cp

0xb973,	// (0x00067751) popup_call2_audio_conf_window_t1

0xb981,	// (0x0006775f) list_single_graphic_popup_conf2_pane_ParamLimits

0xb981,	// (0x0006775f) list_single_graphic_popup_conf2_pane

0xb23e,	// (0x0006701c) list_highlight_pane_cp04

0xb994,	// (0x00067772) list_single_graphic_popup_conf2_pane_g1

0xb24f,	// (0x0006702d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x02f1,	// (0x0005c0cf) list_single_graphic_popup_conf2_pane_g

0xb99e,	// (0x0006777c) list_single_graphic_popup_conf2_pane_t1

0xb9ac,	// (0x0006778a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb9ac,	// (0x0006778a) bg_popup_call2_act_pane_cp01

0xba36,	// (0x00067814) call_type_pane_cp05_ParamLimits

0xba36,	// (0x00067814) call_type_pane_cp05

0xba8a,	// (0x00067868) popup_call2_audio_second_window_g1_ParamLimits

0xba8a,	// (0x00067868) popup_call2_audio_second_window_g1

0xbade,	// (0x000678bc) popup_call2_audio_second_window_g2_ParamLimits

0xbade,	// (0x000678bc) popup_call2_audio_second_window_g2

0x0002,

0x02f6,	// (0x0005c0d4) popup_call2_audio_second_window_g_ParamLimits

0x02f6,	// (0x0005c0d4) popup_call2_audio_second_window_g

0xbb43,	// (0x00067921) popup_call2_audio_second_window_t1_ParamLimits

0xbb43,	// (0x00067921) popup_call2_audio_second_window_t1

0xbbfe,	// (0x000679dc) popup_call2_audio_second_window_t2_ParamLimits

0xbbfe,	// (0x000679dc) popup_call2_audio_second_window_t2

0xbc51,	// (0x00067a2f) popup_call2_audio_second_window_t3_ParamLimits

0xbc51,	// (0x00067a2f) popup_call2_audio_second_window_t3

0x0003,

0x02fd,	// (0x0005c0db) popup_call2_audio_second_window_t_ParamLimits

0x02fd,	// (0x0005c0db) popup_call2_audio_second_window_t

0xa5c4,	// (0x000663a2) bg_popup_call2_in_pane_cp02

0xa5ce,	// (0x000663ac) call_type_pane_cp04

0xa5d6,	// (0x000663b4) popup_call2_audio_wait_window_g1

0xa5de,	// (0x000663bc) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006aed3) popup_call2_audio_wait_window_g

0xa5e6,	// (0x000663c4) popup_call2_audio_wait_window_t3

0xbd44,	// (0x00067b22) bg_popup_call2_act_pane_ParamLimits

0xbd44,	// (0x00067b22) bg_popup_call2_act_pane

0xbe04,	// (0x00067be2) call_type_pane_cp03_ParamLimits

0xbe04,	// (0x00067be2) call_type_pane_cp03

0xbe68,	// (0x00067c46) popup_call2_audio_first_window_g1_ParamLimits

0xbe68,	// (0x00067c46) popup_call2_audio_first_window_g1

0xbed8,	// (0x00067cb6) popup_call2_audio_first_window_g2_ParamLimits

0xbed8,	// (0x00067cb6) popup_call2_audio_first_window_g2

0xb50f,	// (0x000672ed) popup_call2_audio_first_window_g3_ParamLimits

0xb50f,	// (0x000672ed) popup_call2_audio_first_window_g3

0x0004,

0xf4b4,	// (0x0006b292) popup_call2_audio_first_window_g_ParamLimits

0xf4b4,	// (0x0006b292) popup_call2_audio_first_window_g

0xbfb6,	// (0x00067d94) popup_call2_audio_first_window_t1_ParamLimits

0xbfb6,	// (0x00067d94) popup_call2_audio_first_window_t1

0xc0b9,	// (0x00067e97) popup_call2_audio_first_window_t4_ParamLimits

0xc0b9,	// (0x00067e97) popup_call2_audio_first_window_t4

0xc19c,	// (0x00067f7a) popup_call2_audio_first_window_t5_ParamLimits

0xc19c,	// (0x00067f7a) popup_call2_audio_first_window_t5

0x0003,

0x0311,	// (0x0005c0ef) popup_call2_audio_first_window_t_ParamLimits

0x0311,	// (0x0005c0ef) popup_call2_audio_first_window_t

0xa817,	// (0x000665f5) bg_popup_call2_act_pane_g1

0xc843,	// (0x00068621) popup_cale_lunar_info_window_t1

0xc851,	// (0x0006862f) popup_cale_lunar_info_window_t2

0xc85f,	// (0x0006863d) popup_cale_lunar_info_window_t3

0xa5c4,	// (0x000663a2) bg_popup_call2_bubble_pane

0xc29d,	// (0x0006807b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc29d,	// (0x0006807b) bg_popup_call2_in_pane_cp01

0x9cef,	// (0x00065acd) call_type_pane_cp02

0xc2e5,	// (0x000680c3) popup_call2_audio_out_window_g1_ParamLimits

0xc2e5,	// (0x000680c3) popup_call2_audio_out_window_g1

0xc311,	// (0x000680ef) popup_call2_audio_out_window_g2_ParamLimits

0xc311,	// (0x000680ef) popup_call2_audio_out_window_g2

0xc339,	// (0x00068117) popup_call2_audio_out_window_g3_ParamLimits

0xc339,	// (0x00068117) popup_call2_audio_out_window_g3

0x0003,

0x031a,	// (0x0005c0f8) popup_call2_audio_out_window_g_ParamLimits

0x031a,	// (0x0005c0f8) popup_call2_audio_out_window_g

0xc374,	// (0x00068152) popup_call2_audio_out_window_t1_ParamLimits

0xc374,	// (0x00068152) popup_call2_audio_out_window_t1

0xc3d3,	// (0x000681b1) popup_call2_audio_out_window_t2_ParamLimits

0xc3d3,	// (0x000681b1) popup_call2_audio_out_window_t2

0xc427,	// (0x00068205) popup_call2_audio_out_window_t3_ParamLimits

0xc427,	// (0x00068205) popup_call2_audio_out_window_t3

0xc43d,	// (0x0006821b) popup_call2_audio_out_window_t4_ParamLimits

0xc43d,	// (0x0006821b) popup_call2_audio_out_window_t4

0xc453,	// (0x00068231) popup_call2_audio_out_window_t5_ParamLimits

0xc453,	// (0x00068231) popup_call2_audio_out_window_t5

0x0005,

0x0323,	// (0x0005c101) popup_call2_audio_out_window_t_ParamLimits

0x0323,	// (0x0005c101) popup_call2_audio_out_window_t

0xc4b7,	// (0x00068295) bg_popup_call2_in_pane_ParamLimits

0xc4b7,	// (0x00068295) bg_popup_call2_in_pane

0xc513,	// (0x000682f1) popup_call2_audio_in_window_g1_ParamLimits

0xc513,	// (0x000682f1) popup_call2_audio_in_window_g1

0xc54b,	// (0x00068329) popup_call2_audio_in_window_g2_ParamLimits

0xc54b,	// (0x00068329) popup_call2_audio_in_window_g2

0xc583,	// (0x00068361) popup_call2_audio_in_window_g3_ParamLimits

0xc583,	// (0x00068361) popup_call2_audio_in_window_g3

0x0003,

0x0330,	// (0x0005c10e) popup_call2_audio_in_window_g_ParamLimits

0x0330,	// (0x0005c10e) popup_call2_audio_in_window_g

0xc5db,	// (0x000683b9) popup_call2_audio_in_window_t1_ParamLimits

0xc5db,	// (0x000683b9) popup_call2_audio_in_window_t1

0xc65b,	// (0x00068439) popup_call2_audio_in_window_t2_ParamLimits

0xc65b,	// (0x00068439) popup_call2_audio_in_window_t2

0xc6db,	// (0x000684b9) popup_call2_audio_in_window_t3_ParamLimits

0xc6db,	// (0x000684b9) popup_call2_audio_in_window_t3

0xc6f5,	// (0x000684d3) popup_call2_audio_in_window_t4_ParamLimits

0xc6f5,	// (0x000684d3) popup_call2_audio_in_window_t4

0xc707,	// (0x000684e5) popup_call2_audio_in_window_t5_ParamLimits

0xc707,	// (0x000684e5) popup_call2_audio_in_window_t5

0xc719,	// (0x000684f7) popup_call2_audio_in_window_t6_ParamLimits

0xc719,	// (0x000684f7) popup_call2_audio_in_window_t6

0x0005,

0x0339,	// (0x0005c117) popup_call2_audio_in_window_t_ParamLimits

0x0339,	// (0x0005c117) popup_call2_audio_in_window_t

0xa817,	// (0x000665f5) bg_popup_call2_in_pane_g1

0xc86d,	// (0x0006864b) popup_cale_lunar_info_window_t4

0x0003,

0x03b4,	// (0x0005c192) popup_cale_lunar_info_window_t

0xa81f,	// (0x000665fd) bg_popup_call2_rect_pane_ParamLimits

0xa81f,	// (0x000665fd) bg_popup_call2_rect_pane

0xa5c4,	// (0x000663a2) call2_cli_visual_graphic_pane

0xa5c4,	// (0x000663a2) call2_cli_visual_text_pane

0x44e6,	// (0x000602c4) smil_status_volume_pane_g3

0x0002,

0xa945,	// (0x00066723) call2_cli_visual_graphic_pane_g1

0xa945,	// (0x00066723) call2_cli_visual_graphic_pane_g2

0xa945,	// (0x00066723) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bf,	// (0x0006b29d) call2_cli_visual_graphic_pane_g

0xc72b,	// (0x00068509) bg_popup_call2_rect_pane_g1

0xa9d1,	// (0x000667af) bg_popup_call2_rect_pane_g2

0xc733,	// (0x00068511) bg_popup_call2_rect_pane_g3

0xc73b,	// (0x00068519) bg_popup_call2_rect_pane_g4

0xc743,	// (0x00068521) bg_popup_call2_rect_pane_g5

0xc74b,	// (0x00068529) bg_popup_call2_rect_pane_g6

0xc753,	// (0x00068531) bg_popup_call2_rect_pane_g7

0xc75b,	// (0x00068539) bg_popup_call2_rect_pane_g8

0xc763,	// (0x00068541) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c6,	// (0x0006b2a4) bg_popup_call2_rect_pane_g

0xc76b,	// (0x00068549) bg_popup_call2_bubble_pane_g1

0xc773,	// (0x00068551) bg_popup_call2_bubble_pane_g2

0xc77b,	// (0x00068559) bg_popup_call2_bubble_pane_g3

0xc783,	// (0x00068561) bg_popup_call2_bubble_pane_g4

0xc78b,	// (0x00068569) bg_popup_call2_bubble_pane_g5

0xc793,	// (0x00068571) bg_popup_call2_bubble_pane_g6

0xc79b,	// (0x00068579) bg_popup_call2_bubble_pane_g7

0xc7a3,	// (0x00068581) bg_popup_call2_bubble_pane_g8

0xc7ab,	// (0x00068589) bg_popup_call2_bubble_pane_g9

0x0008,

0x0360,	// (0x0005c13e) bg_popup_call2_bubble_pane_g

0x165f,	// (0x0005d43d) aid_cale_week_size_cell_pane

0x1be2,	// (0x0005d9c0) aid_cams_cif_uncrop_pane_ParamLimits

0x1be2,	// (0x0005d9c0) aid_cams_cif_uncrop_pane

0x1d3d,	// (0x0005db1b) aid_cams_size_cell_ParamLimits

0x1d3d,	// (0x0005db1b) aid_cams_size_cell

0x1d49,	// (0x0005db27) grid_cams_pane_ParamLimits

0x1d57,	// (0x0005db35) linegrid_cams_pane_ParamLimits

0x1f42,	// (0x0005dd20) call_video_pane_t1

0x1f63,	// (0x0005dd41) call_video_pane_t2

0x0001,

0xf26a,	// (0x0006b048) call_video_pane_t

0x24b1,	// (0x0005e28f) aid_cale_month_size_cell_pane_ParamLimits

0x24b1,	// (0x0005e28f) aid_cale_month_size_cell_pane

0xf509,	// (0x0006b2e7) smil_status_volume_pane_g

0x44f3,	// (0x000602d1) volume_smil_pane_ParamLimits

0x0d9d,	// (0x0005cb7b) aid_popup2_width_pane

0x154b,	// (0x0005d329) cell_qdial_pane_g4_ParamLimits

0x154b,	// (0x0005d329) cell_qdial_pane_g4

0x34fa,	// (0x0005f2d8) aid_blid_cardinal_pane_ParamLimits

0x350a,	// (0x0005f2e8) aid_blid_destination_pane_ParamLimits

0x350a,	// (0x0005f2e8) aid_blid_destination_pane

0xa81f,	// (0x000665fd) bg_popup_call_poc_act_pane_ParamLimits

0xa81f,	// (0x000665fd) bg_popup_call_poc_act_pane

0xa81f,	// (0x000665fd) bg_popup_call_poc_inact_pane_ParamLimits

0xa81f,	// (0x000665fd) bg_popup_call_poc_inact_pane

0xc7b3,	// (0x00068591) bg_popup_call_poc_act_pane_g1

0xc7bb,	// (0x00068599) bg_popup_call_poc_act_pane_g2

0xc7c3,	// (0x000685a1) bg_popup_call_poc_act_pane_g3

0xc783,	// (0x00068561) bg_popup_call_poc_act_pane_g4

0xc78b,	// (0x00068569) bg_popup_call_poc_act_pane_g5

0xc7cb,	// (0x000685a9) bg_popup_call_poc_act_pane_g6

0xc79b,	// (0x00068579) bg_popup_call_poc_act_pane_g7

0xc7d3,	// (0x000685b1) bg_popup_call_poc_act_pane_g8

0xa5c4,	// (0x000663a2) main_usb_pane

0x42e3,	// (0x000600c1) popup_cale_lunar_info_window

0x2280,	// (0x0005e05e) im_reading_pane_t1_ParamLimits

0xabdd,	// (0x000669bb) list_im_pane_ParamLimits

0xabee,	// (0x000669cc) scroll_pane_cp07_ParamLimits

0xa5c4,	// (0x000663a2) grid_highlight_pane_cp012

0xa81f,	// (0x000665fd) mup_scale_pane_ParamLimits

0xb50f,	// (0x000672ed) main_usb_pane_g1_ParamLimits

0xb50f,	// (0x000672ed) main_usb_pane_g1

0x4044,	// (0x0005fe22) main_usb_pane_g2_ParamLimits

0x4044,	// (0x0005fe22) main_usb_pane_g2

0x0001,

0xf4d9,	// (0x0006b2b7) main_usb_pane_g_ParamLimits

0xf4d9,	// (0x0006b2b7) main_usb_pane_g

0x4050,	// (0x0005fe2e) main_usb_pane_t1_ParamLimits

0x4050,	// (0x0005fe2e) main_usb_pane_t1

0x4062,	// (0x0005fe40) main_usb_pane_t2_ParamLimits

0x4062,	// (0x0005fe40) main_usb_pane_t2

0x4074,	// (0x0005fe52) main_usb_pane_t3_ParamLimits

0x4074,	// (0x0005fe52) main_usb_pane_t3

0x4086,	// (0x0005fe64) main_usb_pane_t4_ParamLimits

0x4086,	// (0x0005fe64) main_usb_pane_t4

0x4098,	// (0x0005fe76) main_usb_pane_t5_ParamLimits

0x4098,	// (0x0005fe76) main_usb_pane_t5

0x40aa,	// (0x0005fe88) main_usb_pane_t6_ParamLimits

0x40aa,	// (0x0005fe88) main_usb_pane_t6

0x0005,

0xf4de,	// (0x0006b2bc) main_usb_pane_t_ParamLimits

0x34a0,	// (0x0005f27e) aid_text_placing

0x34ac,	// (0x0005f28a) main_location2_pane_t1_ParamLimits

0x34c0,	// (0x0005f29e) main_location2_pane_t2_ParamLimits

0x34d4,	// (0x0005f2b2) main_location2_pane_t3_ParamLimits

0x34e8,	// (0x0005f2c6) main_location2_pane_t4_ParamLimits

0x34e8,	// (0x0005f2c6) main_location2_pane_t4

0xf3ab,	// (0x0006b189) main_location2_pane_t_ParamLimits

0xa85b,	// (0x00066639) find_pinb_pane_g2_ParamLimits

0xa85b,	// (0x00066639) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0006aef9) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0006aef9) find_pinb_pane_g

0xa867,	// (0x00066645) find_pinb_pane_t1_ParamLimits

0xa879,	// (0x00066657) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0006aefe) find_pinb_pane_t_ParamLimits

0xa5c4,	// (0x000663a2) main_call3_pane

0x2a74,	// (0x0005e852) cale_month_day_heading_pane_t1_ParamLimits

0x2afa,	// (0x0005e8d8) cale_month_day_heading_pane_t2_ParamLimits

0x2b73,	// (0x0005e951) cale_month_day_heading_pane_t3_ParamLimits

0x2bec,	// (0x0005e9ca) cale_month_day_heading_pane_t4_ParamLimits

0x2c65,	// (0x0005ea43) cale_month_day_heading_pane_t5_ParamLimits

0x2cde,	// (0x0005eabc) cale_month_day_heading_pane_t6_ParamLimits

0x2d57,	// (0x0005eb35) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0006b080) cale_month_day_heading_pane_t_ParamLimits

0xae38,	// (0x00066c16) smil_status_volume_pane

0x3c03,	// (0x0005f9e1) postcard_address_pane_ParamLimits

0x3c03,	// (0x0005f9e1) postcard_address_pane

0x3c0f,	// (0x0005f9ed) postcard_message_pane_ParamLimits

0x3c0f,	// (0x0005f9ed) postcard_message_pane

0x4009,	// (0x0005fde7) call2_cli_visual_pane_t1_ParamLimits

0x4009,	// (0x0005fde7) call2_cli_visual_pane_t1

0x464a,	// (0x00060428) postcard_message_pane_t1_ParamLimits

0x464a,	// (0x00060428) postcard_message_pane_t1

0x4633,	// (0x00060411) postcard_address_pane_t1_ParamLimits

0x4633,	// (0x00060411) postcard_address_pane_t1

0x4624,	// (0x00060402) popup_call3_audio_in_window_ParamLimits

0x4624,	// (0x00060402) popup_call3_audio_in_window

0x4508,	// (0x000602e6) bg_popup_call3_in_pane_ParamLimits

0x4508,	// (0x000602e6) bg_popup_call3_in_pane

0x456a,	// (0x00060348) popup_call3_audio_in_window_g1_ParamLimits

0x456a,	// (0x00060348) popup_call3_audio_in_window_g1

0x4582,	// (0x00060360) popup_call3_audio_in_window_g2_ParamLimits

0x4582,	// (0x00060360) popup_call3_audio_in_window_g2

0x459a,	// (0x00060378) popup_call3_audio_in_window_g3_ParamLimits

0x459a,	// (0x00060378) popup_call3_audio_in_window_g3

0x0003,

0xf510,	// (0x0006b2ee) popup_call3_audio_in_window_g_ParamLimits

0xf510,	// (0x0006b2ee) popup_call3_audio_in_window_g

0x45c2,	// (0x000603a0) popup_call3_audio_in_window_t1_ParamLimits

0x45c2,	// (0x000603a0) popup_call3_audio_in_window_t1

0x45ea,	// (0x000603c8) popup_call3_audio_in_window_t2_ParamLimits

0x45ea,	// (0x000603c8) popup_call3_audio_in_window_t2

0x4612,	// (0x000603f0) popup_call3_audio_in_window_t3_ParamLimits

0x4612,	// (0x000603f0) popup_call3_audio_in_window_t3

0x0002,

0xf519,	// (0x0006b2f7) popup_call3_audio_in_window_t_ParamLimits

0xf519,	// (0x0006b2f7) popup_call3_audio_in_window_t

0xaabe,	// (0x0006689c) bg_popup_call3_rect_pane

0xc72b,	// (0x00068509) bg_popup_call3_rect_pane_g1

0xa9d1,	// (0x000667af) bg_popup_call3_rect_pane_g2

0xc733,	// (0x00068511) bg_popup_call3_rect_pane_g3

0xc73b,	// (0x00068519) bg_popup_call3_rect_pane_g4

0xc743,	// (0x00068521) bg_popup_call3_rect_pane_g5

0xc74b,	// (0x00068529) bg_popup_call3_rect_pane_g6

0xc753,	// (0x00068531) bg_popup_call3_rect_pane_g7

0x3810,	// (0x0005f5ee) mup_visualizer_osc_pane

0xb5dc,	// (0x000673ba) mup_visualizer_spec_pane

0x4528,	// (0x00060306) call3_video_qcif_pane_ParamLimits

0x4528,	// (0x00060306) call3_video_qcif_pane

0x453a,	// (0x00060318) call3_video_qcif_uncrop_pane_ParamLimits

0x453a,	// (0x00060318) call3_video_qcif_uncrop_pane

0x4548,	// (0x00060326) call3_video_subqcif_pane_ParamLimits

0x4548,	// (0x00060326) call3_video_subqcif_pane

0x455a,	// (0x00060338) call3_video_subqcif_uncrop_pane_ParamLimits

0x455a,	// (0x00060338) call3_video_subqcif_uncrop_pane

0x45b2,	// (0x00060390) popup_call3_audio_in_window_g4_ParamLimits

0x45b2,	// (0x00060390) popup_call3_audio_in_window_g4

0x44d3,	// (0x000602b1) mup_spec_half_pane

0x44dc,	// (0x000602ba) mup_spec_half_pane_cp

0xc9d0,	// (0x000687ae) mup_osc_middle_pane

0xc9d9,	// (0x000687b7) mup_visualizer_osc_pane_g1

0x44b4,	// (0x00060292) mup_spec_bar_pane_ParamLimits

0x44b4,	// (0x00060292) mup_spec_bar_pane

0xc9bd,	// (0x0006879b) mup_spec_bar_pane_g1

0xc9c7,	// (0x000687a5) mup_spec_bar_pane_g2

0x0001,

0x03f8,	// (0x0005c1d6) mup_spec_bar_pane_g

0x165f,	// (0x0005d43d) aid_cale_week_size_cell_pane_ParamLimits

0x1674,	// (0x0005d452) bg_cale_heading_pane_ParamLimits

0xaa17,	// (0x000667f5) bg_cale_pane_cp01_ParamLimits

0x1696,	// (0x0005d474) cale_week_corner_pane_ParamLimits

0x16b0,	// (0x0005d48e) cale_week_day_heading_pane_ParamLimits

0x16d2,	// (0x0005d4b0) cale_week_scroll_pane_g1_ParamLimits

0x16ef,	// (0x0005d4cd) cale_week_scroll_pane_g2_ParamLimits

0x1702,	// (0x0005d4e0) cale_week_scroll_pane_g3_ParamLimits

0x1715,	// (0x0005d4f3) cale_week_scroll_pane_g4_ParamLimits

0x1728,	// (0x0005d506) cale_week_scroll_pane_g5_ParamLimits

0x173b,	// (0x0005d519) cale_week_scroll_pane_g6_ParamLimits

0x174e,	// (0x0005d52c) cale_week_scroll_pane_g7_ParamLimits

0x1763,	// (0x0005d541) cale_week_scroll_pane_g8_ParamLimits

0x1778,	// (0x0005d556) cale_week_scroll_pane_g9_ParamLimits

0x178b,	// (0x0005d569) cale_week_scroll_pane_g10_ParamLimits

0x179e,	// (0x0005d57c) cale_week_scroll_pane_g11_ParamLimits

0x17b1,	// (0x0005d58f) cale_week_scroll_pane_g12_ParamLimits

0x17c8,	// (0x0005d5a6) cale_week_scroll_pane_g13_ParamLimits

0x17e3,	// (0x0005d5c1) cale_week_scroll_pane_g14_ParamLimits

0x17fe,	// (0x0005d5dc) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0006af8a) cale_week_scroll_pane_g_ParamLimits

0x182e,	// (0x0005d60c) cale_week_time_pane_ParamLimits

0x1843,	// (0x0005d621) grid_cale_week_pane_ParamLimits

0xaa34,	// (0x00066812) listscroll_cale_week_pane_t1

0xaa46,	// (0x00066824) scroll_pane_cp08_ParamLimits

0x2525,	// (0x0005e303) cale_month_corner_pane_ParamLimits

0xae0e,	// (0x00066bec) cale_month_pane_t1

0x29f3,	// (0x0005e7d1) cale_month_week_pane_ParamLimits

0xb50f,	// (0x000672ed) popup_call_status_window_g1_ParamLimits

0x32a9,	// (0x0005f087) popup_call_status_window_g2_ParamLimits

0x32b5,	// (0x0005f093) popup_call_status_window_g3_ParamLimits

0xf346,	// (0x0006b124) popup_call_status_window_g_ParamLimits

0xb1be,	// (0x00066f9c) aid_call2_pane

0x3abb,	// (0x0005f899) msg_header_pane_g1

0x3c03,	// (0x0005f9e1) postcard_address2_pane_ParamLimits

0x3c03,	// (0x0005f9e1) postcard_address2_pane

0x3c0f,	// (0x0005f9ed) postcard_message2_pane_ParamLimits

0x3c0f,	// (0x0005f9ed) postcard_message2_pane

0x444b,	// (0x00060229) message2_row_pane_ParamLimits

0x444b,	// (0x00060229) message2_row_pane

0x4466,	// (0x00060244) address2_row_pane_ParamLimits

0x4466,	// (0x00060244) address2_row_pane

0xc98b,	// (0x00068769) postcard_message2_row_pane_g1

0xc993,	// (0x00068771) postcard_message2_row_pane_t1

0xc98b,	// (0x00068769) address2_row_pane_g1

0xc993,	// (0x00068771) address2_row_pane_t1

0x1ac8,	// (0x0005d8a6) aid_size_cell_vorec

0xa5c4,	// (0x000663a2) main_rss_pane

0x4479,	// (0x00060257) rss_list_single_pane_ParamLimits

0x4479,	// (0x00060257) rss_list_single_pane

0xc9a1,	// (0x0006877f) rss_list_single_pane_t1

0xc9af,	// (0x0006878d) rss_list_single_pane_t2

0x0001,

0x03f3,	// (0x0005c1d1) rss_list_single_pane_t

0xa5c4,	// (0x000663a2) main_camera2_pane

0xa5c4,	// (0x000663a2) main_video2_pane

0x46ae,	// (0x0006048c) cams_zoom_pane_cp2_ParamLimits

0x46ae,	// (0x0006048c) cams_zoom_pane_cp2

0x46ba,	// (0x00060498) image2_vga_pane_ParamLimits

0x46ba,	// (0x00060498) image2_vga_pane

0x46c9,	// (0x000604a7) main_camera2_pane_g1_ParamLimits

0x46c9,	// (0x000604a7) main_camera2_pane_g1

0x46d5,	// (0x000604b3) main_camera2_pane_g2_ParamLimits

0x46d5,	// (0x000604b3) main_camera2_pane_g2

0x46e1,	// (0x000604bf) main_camera2_pane_g3_ParamLimits

0x46e1,	// (0x000604bf) main_camera2_pane_g3

0x46ed,	// (0x000604cb) main_camera2_pane_g4_ParamLimits

0x46ed,	// (0x000604cb) main_camera2_pane_g4

0x46f9,	// (0x000604d7) main_camera2_pane_g5_ParamLimits

0x46f9,	// (0x000604d7) main_camera2_pane_g5

0x4705,	// (0x000604e3) main_camera2_pane_g6_ParamLimits

0x4705,	// (0x000604e3) main_camera2_pane_g6

0x4711,	// (0x000604ef) main_camera2_pane_g7_ParamLimits

0x4711,	// (0x000604ef) main_camera2_pane_g7

0x471d,	// (0x000604fb) main_camera2_pane_g8_ParamLimits

0x471d,	// (0x000604fb) main_camera2_pane_g8

0x0008,

0xf520,	// (0x0006b2fe) main_camera2_pane_g_ParamLimits

0xf520,	// (0x0006b2fe) main_camera2_pane_g

0x4735,	// (0x00060513) main_camera2_pane_t1_ParamLimits

0x4735,	// (0x00060513) main_camera2_pane_t1

0x4747,	// (0x00060525) main_camera2_pane_t2_ParamLimits

0x4747,	// (0x00060525) main_camera2_pane_t2

0x4759,	// (0x00060537) main_camera2_pane_t3_ParamLimits

0x4759,	// (0x00060537) main_camera2_pane_t3

0x476b,	// (0x00060549) main_camera2_pane_t4_ParamLimits

0x476b,	// (0x00060549) main_camera2_pane_t4

0x0006,

0xf533,	// (0x0006b311) main_camera2_pane_t_ParamLimits

0xf533,	// (0x0006b311) main_camera2_pane_t

0x47cd,	// (0x000605ab) cams_zoom_pane_cp4_ParamLimits

0x47cd,	// (0x000605ab) cams_zoom_pane_cp4

0x47dd,	// (0x000605bb) image2_cif_pane_ParamLimits

0x47dd,	// (0x000605bb) image2_cif_pane

0x47f2,	// (0x000605d0) image2_subqcif_pane_ParamLimits

0x47f2,	// (0x000605d0) image2_subqcif_pane

0x4801,	// (0x000605df) main_video2_pane_g1_ParamLimits

0x4801,	// (0x000605df) main_video2_pane_g1

0x4813,	// (0x000605f1) main_video2_pane_g2_ParamLimits

0x4813,	// (0x000605f1) main_video2_pane_g2

0x4823,	// (0x00060601) main_video2_pane_g3_ParamLimits

0x4823,	// (0x00060601) main_video2_pane_g3

0x4833,	// (0x00060611) main_video2_pane_g4_ParamLimits

0x4833,	// (0x00060611) main_video2_pane_g4

0x4843,	// (0x00060621) main_video2_pane_g5_ParamLimits

0x4843,	// (0x00060621) main_video2_pane_g5

0x4853,	// (0x00060631) main_video2_pane_g6_ParamLimits

0x4853,	// (0x00060631) main_video2_pane_g6

0x0005,

0xf542,	// (0x0006b320) main_video2_pane_g_ParamLimits

0xf542,	// (0x0006b320) main_video2_pane_g

0x4865,	// (0x00060643) main_video2_pane_t1_ParamLimits

0x4865,	// (0x00060643) main_video2_pane_t1

0x487f,	// (0x0006065d) main_video2_pane_t2_ParamLimits

0x487f,	// (0x0006065d) main_video2_pane_t2

0x48a5,	// (0x00060683) main_video2_pane_t3_ParamLimits

0x48a5,	// (0x00060683) main_video2_pane_t3

0x0002,

0xf54f,	// (0x0006b32d) main_video2_pane_t_ParamLimits

0xf54f,	// (0x0006b32d) main_video2_pane_t

0x4161,	// (0x0005ff3f) call_muted_g2

0x0001,

0xf504,	// (0x0006b2e2) call_muted_g

0xa5c4,	// (0x000663a2) main_mup2_pane

0xca10,	// (0x000687ee) main_mup2_pane_g1_ParamLimits

0xca10,	// (0x000687ee) main_mup2_pane_g1

0x48cb,	// (0x000606a9) main_mup2_pane_g2_ParamLimits

0x48cb,	// (0x000606a9) main_mup2_pane_g2

0x4b4d,	// (0x0006092b) main_mup_pane_g13_cp1

0x4b55,	// (0x00060933) mup_volume_pane_cp1

0x48eb,	// (0x000606c9) main_mup2_pane_g4_ParamLimits

0x48eb,	// (0x000606c9) main_mup2_pane_g4

0x4900,	// (0x000606de) main_mup2_pane_g5_ParamLimits

0x4900,	// (0x000606de) main_mup2_pane_g5

0x4915,	// (0x000606f3) main_mup2_pane_g6_ParamLimits

0x4915,	// (0x000606f3) main_mup2_pane_g6

0x492a,	// (0x00060708) main_mup2_pane_g7_ParamLimits

0x492a,	// (0x00060708) main_mup2_pane_g7

0x0006,

0xf556,	// (0x0006b334) main_mup2_pane_g_ParamLimits

0xf556,	// (0x0006b334) main_mup2_pane_g

0x4946,	// (0x00060724) main_mup2_pane_t1_ParamLimits

0x4946,	// (0x00060724) main_mup2_pane_t1

0x495d,	// (0x0006073b) main_mup2_pane_t2_ParamLimits

0x495d,	// (0x0006073b) main_mup2_pane_t2

0x4974,	// (0x00060752) main_mup2_pane_t3_ParamLimits

0x4974,	// (0x00060752) main_mup2_pane_t3

0x498b,	// (0x00060769) main_mup2_pane_t4_ParamLimits

0x498b,	// (0x00060769) main_mup2_pane_t4

0x49a5,	// (0x00060783) main_mup2_pane_t5_ParamLimits

0x49a5,	// (0x00060783) main_mup2_pane_t5

0x49bf,	// (0x0006079d) main_mup2_pane_t6_ParamLimits

0x49bf,	// (0x0006079d) main_mup2_pane_t6

0x0005,

0xf565,	// (0x0006b343) main_mup2_pane_t_ParamLimits

0xf565,	// (0x0006b343) main_mup2_pane_t

0x49f7,	// (0x000607d5) mup2_visualizer_pane_ParamLimits

0x49f7,	// (0x000607d5) mup2_visualizer_pane

0x4a2d,	// (0x0006080b) mup_progress_pane_cp_ParamLimits

0x4a2d,	// (0x0006080b) mup_progress_pane_cp

0x4b38,	// (0x00060916) mup_volume_pane_cp_ParamLimits

0x4b38,	// (0x00060916) mup_volume_pane_cp

0x4a44,	// (0x00060822) mup2_visualizer_pane_g1_ParamLimits

0x4a44,	// (0x00060822) mup2_visualizer_pane_g1

0xca1c,	// (0x000687fa) mup2_visualizer_pane_g2_ParamLimits

0xca1c,	// (0x000687fa) mup2_visualizer_pane_g2

0x4a59,	// (0x00060837) mup2_visualizer_pane_g3_ParamLimits

0x4a59,	// (0x00060837) mup2_visualizer_pane_g3

0x0002,

0xf572,	// (0x0006b350) mup2_visualizer_pane_g_ParamLimits

0xf572,	// (0x0006b350) mup2_visualizer_pane_g

0xb803,	// (0x000675e1) aid_size_cell_fmradio

0x4277,	// (0x00060055) aid_height_parent_landcape

0xac6c,	// (0x00066a4a) wml_content_pane_cp

0xac74,	// (0x00066a52) wml_tabs_pane

0xac7d,	// (0x00066a5b) popup_wml_miniature_window

0xac85,	// (0x00066a63) scroll_pane_cp021

0xac99,	// (0x00066a77) wml_content_pane_comp8

0xa5c4,	// (0x000663a2) bg_popup_sub_pane_cp05

0xca3a,	// (0x00068818) popup_wml_miniature_window_g1

0xca42,	// (0x00068820) wml_miniature_view_pane

0x4a67,	// (0x00060845) aid_size_wml_view

0x4a6f,	// (0x0006084d) wml_miniature_view_pane_g1

0x4a78,	// (0x00060856) wml_miniature_view_pane_g2

0x4a81,	// (0x0006085f) wml_miniature_view_pane_g3

0x4a89,	// (0x00060867) wml_miniature_view_pane_g4

0x4a91,	// (0x0006086f) wml_miniature_view_pane_g5

0x4a99,	// (0x00060877) wml_miniature_view_pane_g6

0x4aa1,	// (0x0006087f) wml_miniature_view_pane_g7

0x4aa9,	// (0x00060887) wml_miniature_view_pane_g8

0x0007,

0xf579,	// (0x0006b357) wml_miniature_view_pane_g

0xca10,	// (0x000687ee) background_graphic_ParamLimits

0xca10,	// (0x000687ee) background_graphic

0xca4a,	// (0x00068828) wml_tabs_2_pane

0xca53,	// (0x00068831) wml_tabs_3_pane_ParamLimits

0xca53,	// (0x00068831) wml_tabs_3_pane

0xca65,	// (0x00068843) wml_tabs_4_pane_ParamLimits

0xca65,	// (0x00068843) wml_tabs_4_pane

0xca7b,	// (0x00068859) wml_tabs_5_pane_ParamLimits

0xca7b,	// (0x00068859) wml_tabs_5_pane

0xca95,	// (0x00068873) wml_tabs_pane_g2_ParamLimits

0xca95,	// (0x00068873) wml_tabs_pane_g2

0xcaa9,	// (0x00068887) wml_tabs_pane_g3_ParamLimits

0xcaa9,	// (0x00068887) wml_tabs_pane_g3

0x4ab1,	// (0x0006088f) wml_tabs_2_active_pane_ParamLimits

0x4ab1,	// (0x0006088f) wml_tabs_2_active_pane

0x4ac1,	// (0x0006089f) wml_tabs_2_passive_pane_ParamLimits

0x4ac1,	// (0x0006089f) wml_tabs_2_passive_pane

0x4ad1,	// (0x000608af) wml_tabs_3_active_pane_cp_ParamLimits

0x4ad1,	// (0x000608af) wml_tabs_3_active_pane_cp

0x4ae2,	// (0x000608c0) wml_tabs_3_passive_pane_ParamLimits

0x4ae2,	// (0x000608c0) wml_tabs_3_passive_pane

0x4af3,	// (0x000608d1) wml_tabs_3_passive_pane_cp_ParamLimits

0x4af3,	// (0x000608d1) wml_tabs_3_passive_pane_cp

0x4b04,	// (0x000608e2) tabs_4_active_pane

0x4b0c,	// (0x000608ea) tabs_4_passive_pane

0x4b14,	// (0x000608f2) tabs_4_passive_pane_cp

0x4b1c,	// (0x000608fa) tabs_4_passive_pane_cp2

0x403c,	// (0x0005fe1a) aid_height_text

0x37d9,	// (0x0005f5b7) mup_volume_cont_pane_ParamLimits

0x37d9,	// (0x0005f5b7) mup_volume_cont_pane

0x1187,	// (0x0005cf65) aid_size_cell_pinb

0x1191,	// (0x0005cf6f) aid_size_list_pinb

0x4a16,	// (0x000607f4) mup2_volume_cont_pane_ParamLimits

0x4a16,	// (0x000607f4) mup2_volume_cont_pane

0x4b24,	// (0x00060902) mup2_volume_cont_pane_g1_ParamLimits

0x4b24,	// (0x00060902) mup2_volume_cont_pane_g1

0x0da9,	// (0x0005cb87) aid_size_cell_touch_ParamLimits

0x0da9,	// (0x0005cb87) aid_size_cell_touch

0x106a,	// (0x0005ce48) touch_pane_ParamLimits

0x106a,	// (0x0005ce48) touch_pane

0x1060,	// (0x0005ce3e) main_rss2_pane

0xcac6,	// (0x000688a4) listscroll_rss2_pane

0xcacf,	// (0x000688ad) rss2_navigation_pane

0xcad7,	// (0x000688b5) list_rss2_pane

0xb2e3,	// (0x000670c1) scroll_pane_cp22

0xcadf,	// (0x000688bd) rss2_navigation_pane_g1

0xcae8,	// (0x000688c6) rss2_navigation_pane_g2

0xcaf0,	// (0x000688ce) rss2_navigation_pane_g3

0x0002,

0x047e,	// (0x0005c25c) rss2_navigation_pane_g

0xcaf8,	// (0x000688d6) rss2_navigation_pane_t1

0x4b5d,	// (0x0006093b) rss2_list_single_pane_ParamLimits

0x4b5d,	// (0x0006093b) rss2_list_single_pane

0xcb06,	// (0x000688e4) rss2_list_single_pane_t2

0xcb14,	// (0x000688f2) rss2_list_single_pane_t3_ParamLimits

0xcb14,	// (0x000688f2) rss2_list_single_pane_t3

0xcb31,	// (0x0006890f) rss2_list_single_pane_t4

0x3023,	// (0x0005ee01) smil_status_pane_g1

0x428e,	// (0x0006006c) main_image2_pane_ParamLimits

0x428e,	// (0x0006006c) main_image2_pane

0x4729,	// (0x00060507) main_camera2_pane_g9_ParamLimits

0x4729,	// (0x00060507) main_camera2_pane_g9

0x477d,	// (0x0006055b) main_camera2_pane_t5_ParamLimits

0x477d,	// (0x0006055b) main_camera2_pane_t5

0x478f,	// (0x0006056d) main_camera2_pane_t6_ParamLimits

0x478f,	// (0x0006056d) main_camera2_pane_t6

0x4b91,	// (0x0006096f) main_image2_pane_g1_ParamLimits

0x4b91,	// (0x0006096f) main_image2_pane_g1

0x3dd6,	// (0x0005fbb4) smil2_video_pane_ParamLimits

0x3dd6,	// (0x0005fbb4) smil2_video_pane

0x0cad,	// (0x0005ca8b) aid_zoom_text_primary_cp

0x0ffb,	// (0x0005cdd9) popup_preview_fixed_window

0xabd5,	// (0x000669b3) im_reading_pane_g1

0x4673,	// (0x00060451) cams2_bc_adjust_pane_cp_ParamLimits

0x4673,	// (0x00060451) cams2_bc_adjust_pane_cp

0x47bf,	// (0x0006059d) cams2_bc_adjust_pane_ParamLimits

0x47bf,	// (0x0006059d) cams2_bc_adjust_pane

0xdbdc,	// (0x000699ba) cams2_bc_adjust_pane_g1

0x4b9d,	// (0x0006097b) cams2_slider_pane

0x4ba6,	// (0x00060984) cams2_slider_pane_g1

0x4baf,	// (0x0006098d) cams2_slider_pane_g2

0x0006,

0xf58a,	// (0x0006b368) cams2_slider_pane_g

0x1291,	// (0x0005d06f) calc_display_pane_ParamLimits

0x12af,	// (0x0005d08d) calc_paper_pane_ParamLimits

0x12cb,	// (0x0005d0a9) grid_calc_pane_ParamLimits

0x3313,	// (0x0005f0f1) popup_clock_digital_window_t1_ParamLimits

0xb7a0,	// (0x0006757e) main_image_pane_t1

0x1277,	// (0x0005d055) aid_size_cell_calc_ParamLimits

0x1277,	// (0x0005d055) aid_size_cell_calc

0x42bf,	// (0x0006009d) popup_blid_sat_info2_window_ParamLimits

0x42bf,	// (0x0006009d) popup_blid_sat_info2_window

0xcb47,	// (0x00068925) aid_size_cell_blid

0xcb4f,	// (0x0006892d) bg_popup_window_pane_cp07

0xcb72,	// (0x00068950) grid_popup_blid_pane

0xcb7c,	// (0x0006895a) heading_pane_cp05_ParamLimits

0xcb7c,	// (0x0006895a) heading_pane_cp05

0xcc46,	// (0x00068a24) cell_popup_blid_pane_ParamLimits

0xcc46,	// (0x00068a24) cell_popup_blid_pane

0xcc6a,	// (0x00068a48) cell_popup_blid_pane_g1

0xcc72,	// (0x00068a50) cell_popup_blid_pane_t1

0x49dc,	// (0x000607ba) mup2_indicator_pane_ParamLimits

0x49dc,	// (0x000607ba) mup2_indicator_pane

0xaabe,	// (0x0006689c) mup2_visualizer_osc_pane

0xca28,	// (0x00068806) mup2_visualizer_spec_pane_ParamLimits

0xca28,	// (0x00068806) mup2_visualizer_spec_pane

0x4bc9,	// (0x000609a7) mup2_spec_half_pane

0x4bd2,	// (0x000609b0) mup2_spec_half_pane_cp

0x4bdc,	// (0x000609ba) mup2_spec_bar_pane_ParamLimits

0x4bdc,	// (0x000609ba) mup2_spec_bar_pane

0xc9bd,	// (0x0006879b) mup2_spec_bar_pane_g1

0xc9c7,	// (0x000687a5) mup2_spec_bar_pane_g2

0x0001,

0x03f8,	// (0x0005c1d6) mup2_spec_bar_pane_g

0x4bfb,	// (0x000609d9) mup2_osc_middle_pane

0xc9d9,	// (0x000687b7) mup2_visualizer_osc_pane_g1

0x9c20,	// (0x000659fe) popup_number_entry_window_t1_ParamLimits

0x9c33,	// (0x00065a11) popup_number_entry_window_t2_ParamLimits

0x9c45,	// (0x00065a23) popup_number_entry_window_t3_ParamLimits

0x10c1,	// (0x0005ce9f) popup_number_entry_window_t5_ParamLimits

0x10c1,	// (0x0005ce9f) popup_number_entry_window_t5

0xf0c6,	// (0x0006aea4) popup_number_entry_window_t_ParamLimits

0x9c57,	// (0x00065a35) text_title_cp2_ParamLimits

0x3ad7,	// (0x0005f8b5) aid_hotspot_pointer_text2_pane

0x3b65,	// (0x0005f943) main_viewer_pane_g9_ParamLimits

0x3b65,	// (0x0005f943) main_viewer_pane_g9

0xae0e,	// (0x00066bec) cale_month_pane_t1_ParamLimits

0xae4b,	// (0x00066c29) bg_cale_pane_ParamLimits

0xae63,	// (0x00066c41) list_cale_pane_ParamLimits

0xae74,	// (0x00066c52) listscroll_cale_day_pane_t1

0xae86,	// (0x00066c64) scroll_pane_cp09_ParamLimits

0x3818,	// (0x0005f5f6) main_mup_eq_pane_t1_ParamLimits

0x3818,	// (0x0005f5f6) main_mup_eq_pane_t1

0x3832,	// (0x0005f610) main_mup_eq_pane_t2_ParamLimits

0x3832,	// (0x0005f610) main_mup_eq_pane_t2

0x384a,	// (0x0005f628) main_mup_eq_pane_t3_ParamLimits

0x384a,	// (0x0005f628) main_mup_eq_pane_t3

0x3862,	// (0x0005f640) main_mup_eq_pane_t4_ParamLimits

0x3862,	// (0x0005f640) main_mup_eq_pane_t4

0x387a,	// (0x0005f658) main_mup_eq_pane_t5_ParamLimits

0x387a,	// (0x0005f658) main_mup_eq_pane_t5

0x3892,	// (0x0005f670) main_mup_eq_pane_t6_ParamLimits

0x3892,	// (0x0005f670) main_mup_eq_pane_t6

0x38a6,	// (0x0005f684) main_mup_eq_pane_t7_ParamLimits

0x38a6,	// (0x0005f684) main_mup_eq_pane_t7

0x38ba,	// (0x0005f698) main_mup_eq_pane_t8_ParamLimits

0x38ba,	// (0x0005f698) main_mup_eq_pane_t8

0x38d0,	// (0x0005f6ae) main_mup_eq_pane_t9_ParamLimits

0x38d0,	// (0x0005f6ae) main_mup_eq_pane_t9

0x38e8,	// (0x0005f6c6) main_mup_eq_pane_t10_ParamLimits

0x38e8,	// (0x0005f6c6) main_mup_eq_pane_t10

0x0009,

0xf41c,	// (0x0006b1fa) main_mup_eq_pane_t_ParamLimits

0xf41c,	// (0x0006b1fa) main_mup_eq_pane_t

0x39a5,	// (0x0005f783) mup_equalizer_pane_cp5_ParamLimits

0x39bb,	// (0x0005f799) mup_equalizer_pane_cp6_ParamLimits

0x39d3,	// (0x0005f7b1) mup_equalizer_pane_cp7_ParamLimits

0x1060,	// (0x0005ce3e) main_gallery_pane

0xc9e2,	// (0x000687c0) smil2_volume_pane

0xc9ea,	// (0x000687c8) smil_status_volume_pane_g1_ParamLimits

0xc9fd,	// (0x000687db) smil_status_volume_pane_g2_ParamLimits

0x44e6,	// (0x000602c4) smil_status_volume_pane_g3_ParamLimits

0xf509,	// (0x0006b2e7) smil_status_volume_pane_g_ParamLimits

0xcb4f,	// (0x0006892d) bg_popup_window_pane_cp07_ParamLimits

0xcb5d,	// (0x0006893b) blid_firmament_pane

0x4c04,	// (0x000609e2) aid_size_cell_gallery_ParamLimits

0x4c04,	// (0x000609e2) aid_size_cell_gallery

0x4c12,	// (0x000609f0) grid_gallery_pane_ParamLimits

0x4c12,	// (0x000609f0) grid_gallery_pane

0x4c22,	// (0x00060a00) cell_gallery_pane_ParamLimits

0x4c22,	// (0x00060a00) cell_gallery_pane

0xcc80,	// (0x00068a5e) bg_cell_gallery_focus_pane_ParamLimits

0xcc80,	// (0x00068a5e) bg_cell_gallery_focus_pane

0xcc92,	// (0x00068a70) cell_gallery_pane_g1_ParamLimits

0xcc92,	// (0x00068a70) cell_gallery_pane_g1

0x4c70,	// (0x00060a4e) cell_gallery_pane_g2_ParamLimits

0x4c70,	// (0x00060a4e) cell_gallery_pane_g2

0x4c7d,	// (0x00060a5b) cell_gallery_pane_g3_ParamLimits

0x4c7d,	// (0x00060a5b) cell_gallery_pane_g3

0xcc9e,	// (0x00068a7c) cell_gallery_pane_g4_ParamLimits

0xcc9e,	// (0x00068a7c) cell_gallery_pane_g4

0x0003,

0xf599,	// (0x0006b377) cell_gallery_pane_g_ParamLimits

0xf599,	// (0x0006b377) cell_gallery_pane_g

0xccaa,	// (0x00068a88) bg_cell_gallery_focus_pane_g1

0xccb2,	// (0x00068a90) bg_cell_gallery_focus_pane_g2

0xccba,	// (0x00068a98) bg_cell_gallery_focus_pane_g3

0xccc2,	// (0x00068aa0) bg_cell_gallery_focus_pane_g4

0xccca,	// (0x00068aa8) bg_cell_gallery_focus_pane_g5

0xccd2,	// (0x00068ab0) bg_cell_gallery_focus_pane_g6

0xccda,	// (0x00068ab8) bg_cell_gallery_focus_pane_g7

0xcce2,	// (0x00068ac0) bg_cell_gallery_focus_pane_g8

0x0007,

0x04b4,	// (0x0005c292) bg_cell_gallery_focus_pane_g

0xccea,	// (0x00068ac8) aid_firma_cardinal

0xccfe,	// (0x00068adc) blid_firmament_pane_t1

0xcd15,	// (0x00068af3) blid_firmament_pane_t2

0xcd2c,	// (0x00068b0a) blid_firmament_pane_t3

0xcd43,	// (0x00068b21) blid_firmament_pane_t4

0x0003,

0x04c5,	// (0x0005c2a3) blid_firmament_pane_t

0xcd5a,	// (0x00068b38) blid_sat_info_pane

0xcd6a,	// (0x00068b48) blid_sat_info_pane_g1

0xcd6a,	// (0x00068b48) blid_sat_info_pane_g2

0x0001,

0x04ce,	// (0x0005c2ac) blid_sat_info_pane_g

0xcd74,	// (0x00068b52) blid_sat_info_pane_t1

0xcd82,	// (0x00068b60) smil2_volume_content_pane

0xcd8b,	// (0x00068b69) smil2_volume_pane_g1

0xa9d9,	// (0x000667b7) smil2_volume_content_pane_g1

0xcd93,	// (0x00068b71) smil2_volume_content_pane_g2

0xcd9c,	// (0x00068b7a) smil2_volume_content_pane_g3

0xcda5,	// (0x00068b83) smil2_volume_content_pane_g4

0xcdae,	// (0x00068b8c) smil2_volume_content_pane_g5

0xcdb7,	// (0x00068b95) smil2_volume_content_pane_g6

0xcdc0,	// (0x00068b9e) smil2_volume_content_pane_g7

0xcdc9,	// (0x00068ba7) smil2_volume_content_pane_g8

0xcdd2,	// (0x00068bb0) smil2_volume_content_pane_g9

0xcddb,	// (0x00068bb9) smil2_volume_content_pane_g10

0x0009,

0xf5a2,	// (0x0006b380) smil2_volume_content_pane_g

0x18c4,	// (0x0005d6a2) cale_week_day_heading_pane_t1_ParamLimits

0x18df,	// (0x0005d6bd) cale_week_day_heading_pane_t2_ParamLimits

0x18fa,	// (0x0005d6d8) cale_week_day_heading_pane_t3_ParamLimits

0x1915,	// (0x0005d6f3) cale_week_day_heading_pane_t4_ParamLimits

0x1930,	// (0x0005d70e) cale_week_day_heading_pane_t5_ParamLimits

0x194b,	// (0x0005d729) cale_week_day_heading_pane_t6_ParamLimits

0x1966,	// (0x0005d744) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0006afab) cale_week_day_heading_pane_t_ParamLimits

0xaa63,	// (0x00066841) bg_cale_side_pane_ParamLimits

0x1981,	// (0x0005d75f) cale_week_time_pane_t1_ParamLimits

0x199b,	// (0x0005d779) cale_week_time_pane_t2_ParamLimits

0x19b5,	// (0x0005d793) cale_week_time_pane_t3_ParamLimits

0x19cf,	// (0x0005d7ad) cale_week_time_pane_t4_ParamLimits

0x19e9,	// (0x0005d7c7) cale_week_time_pane_t5_ParamLimits

0x1a03,	// (0x0005d7e1) cale_week_time_pane_t6_ParamLimits

0x1a23,	// (0x0005d801) cale_week_time_pane_t7_ParamLimits

0x1a45,	// (0x0005d823) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0006afba) cale_week_time_pane_t_ParamLimits

0x1a69,	// (0x0005d847) cell_cale_week_pane_g2_ParamLimits

0xaa63,	// (0x00066841) bg_cale_side_pane_cp01_ParamLimits

0x2de8,	// (0x0005ebc6) cale_month_week_pane_t1_ParamLimits

0x2e01,	// (0x0005ebdf) cale_month_week_pane_t2_ParamLimits

0x2e1a,	// (0x0005ebf8) cale_month_week_pane_t3_ParamLimits

0x2e33,	// (0x0005ec11) cale_month_week_pane_t4_ParamLimits

0x2e4e,	// (0x0005ec2c) cale_month_week_pane_t5_ParamLimits

0x2e6f,	// (0x0005ec4d) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0006b08f) cale_month_week_pane_t_ParamLimits

0x2fe0,	// (0x0005edbe) cell_cale_month_pane_g1_ParamLimits

0x1060,	// (0x0005ce3e) main_cale_event_viewer_pane

0x9bf6,	// (0x000659d4) listscroll_cale_event_viewer_pane

0xcde4,	// (0x00068bc2) list_cale_ev_pane

0xcdec,	// (0x00068bca) scroll_pane_cp023

0xcdf8,	// (0x00068bd6) field_cale_ev_pane_ParamLimits

0xcdf8,	// (0x00068bd6) field_cale_ev_pane

0xce16,	// (0x00068bf4) field_cale_ev_content_pane_ParamLimits

0xce16,	// (0x00068bf4) field_cale_ev_content_pane

0xce22,	// (0x00068c00) field_cale_ev_pane_g1_ParamLimits

0xce22,	// (0x00068c00) field_cale_ev_pane_g1

0xce2e,	// (0x00068c0c) field_cale_ev_pane_g2_ParamLimits

0xce2e,	// (0x00068c0c) field_cale_ev_pane_g2

0xce46,	// (0x00068c24) field_cale_ev_pane_g3_ParamLimits

0xce46,	// (0x00068c24) field_cale_ev_pane_g3

0x0002,

0x04e8,	// (0x0005c2c6) field_cale_ev_pane_g_ParamLimits

0x04e8,	// (0x0005c2c6) field_cale_ev_pane_g

0xce5e,	// (0x00068c3c) field_cale_ev_pane_t1_ParamLimits

0xce5e,	// (0x00068c3c) field_cale_ev_pane_t1

0xab30,	// (0x0006690e) field_cale_ev_content_pane_t1_ParamLimits

0xab30,	// (0x0006690e) field_cale_ev_content_pane_t1

0xb686,	// (0x00067464) bg_button_pane_cp01

0x164f,	// (0x0005d42d) listscroll_cale_week_pane_ParamLimits

0xaa0e,	// (0x000667ec) popup_toolbar_window_cp01

0xaa34,	// (0x00066812) listscroll_cale_week_pane_t1_ParamLimits

0x164f,	// (0x0005d42d) listscroll_cale_day_pane_ParamLimits

0xaa0e,	// (0x000667ec) popup_toolbar_window_cp02

0xae74,	// (0x00066c52) listscroll_cale_day_pane_t1_ParamLimits

0x164f,	// (0x0005d42d) main_cale_month_pane_ParamLimits

0x43c2,	// (0x000601a0) popup_toolbar_window_cp03_ParamLimits

0x43c2,	// (0x000601a0) popup_toolbar_window_cp03

0x3cec,	// (0x0005faca) main_image_pane_g2_ParamLimits

0x3cec,	// (0x0005faca) main_image_pane_g2

0x3cf8,	// (0x0005fad6) main_image_pane_g3_ParamLimits

0x3cf8,	// (0x0005fad6) main_image_pane_g3

0x0002,

0xf4a4,	// (0x0006b282) main_image_pane_g_ParamLimits

0xf4a4,	// (0x0006b282) main_image_pane_g

0xb7a0,	// (0x0006757e) main_image_pane_t1_ParamLimits

0x3d04,	// (0x0005fae2) main_image_pane_t2_ParamLimits

0x3d04,	// (0x0005fae2) main_image_pane_t2

0x3d16,	// (0x0005faf4) main_image_pane_t3_ParamLimits

0x3d16,	// (0x0005faf4) main_image_pane_t3

0x3d28,	// (0x0005fb06) main_image_pane_t4_ParamLimits

0x3d28,	// (0x0005fb06) main_image_pane_t4

0x0003,

0xf4ab,	// (0x0006b289) main_image_pane_t_ParamLimits

0xf4ab,	// (0x0006b289) main_image_pane_t

0x3d3a,	// (0x0005fb18) popup_image_details_window_cp01

0x3d44,	// (0x0005fb22) popup_toobar_trans_pane_cp01_ParamLimits

0x3d44,	// (0x0005fb22) popup_toobar_trans_pane_cp01

0x4312,	// (0x000600f0) popup_image_details_window_ParamLimits

0x4312,	// (0x000600f0) popup_image_details_window

0x4320,	// (0x000600fe) popup_image_focus_window

0x4665,	// (0x00060443) camera2_autofocus_pane_ParamLimits

0x4665,	// (0x00060443) camera2_autofocus_pane

0x9bf6,	// (0x000659d4) bg_popup_sub_pane_cp06

0xce75,	// (0x00068c53) popup_image_focus_window_g1

0xce7d,	// (0x00068c5b) popup_image_focus_window_g2

0xce85,	// (0x00068c63) popup_image_focus_window_g3

0xce8d,	// (0x00068c6b) popup_image_focus_window_g4

0x0003,

0x04ef,	// (0x0005c2cd) popup_image_focus_window_g

0xce95,	// (0x00068c73) popup_image_focus_window_t1

0xcea3,	// (0x00068c81) popup_image_focus_window_t2

0xceb3,	// (0x00068c91) popup_image_focus_window_t3

0x0002,

0x04f8,	// (0x0005c2d6) popup_image_focus_window_t

0xcec1,	// (0x00068c9f) camera2_autofocus_pane_g1

0xa579,	// (0x00066357) bg_tb_trans_pane_cp01

0xcecf,	// (0x00068cad) popup_image_details_window_g1

0xcee2,	// (0x00068cc0) popup_image_details_window_g2

0x0002,

0x050a,	// (0x0005c2e8) popup_image_details_window_g

0xcf0b,	// (0x00068ce9) popup_image_details_window_t1

0xcf1d,	// (0x00068cfb) popup_image_details_window_t2

0xcf36,	// (0x00068d14) popup_image_details_window_t3

0xcf4a,	// (0x00068d28) popup_image_details_window_t4

0xcf65,	// (0x00068d43) popup_image_details_window_t5

0x0004,

0x0511,	// (0x0005c2ef) popup_image_details_window_t

0xa8dc,	// (0x000666ba) bg_calc_paper_pane_ParamLimits

0x1060,	// (0x0005ce3e) grid_highlight_pane_cp013

0x13c8,	// (0x0005d1a6) list_calc_pane_ParamLimits

0x13da,	// (0x0005d1b8) scroll_pane_cp024

0xa8f0,	// (0x000666ce) bg_calc_display_pane_ParamLimits

0x13e2,	// (0x0005d1c0) calc_display_pane_t1_ParamLimits

0x13f7,	// (0x0005d1d5) calc_display_pane_t2_ParamLimits

0x140c,	// (0x0005d1ea) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0006af2b) calc_display_pane_t_ParamLimits

0x14e6,	// (0x0005d2c4) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0006af48) cell_calc_pane_g

0x14ef,	// (0x0005d2cd) cell_calc_pane_t1

0xa94f,	// (0x0006672d) grid_highlight_pane_cp02_ParamLimits

0xa965,	// (0x00066743) toolbar_button_pane_cp01_ParamLimits

0xa965,	// (0x00066743) toolbar_button_pane_cp01

0xb7e5,	// (0x000675c3) temp_image_control_pane_ParamLimits

0xb7e5,	// (0x000675c3) temp_image_control_pane

0x428e,	// (0x0006006c) main_mp3_pane

0xcf7f,	// (0x00068d5d) temp_image_control_pane_g1_ParamLimits

0xcf7f,	// (0x00068d5d) temp_image_control_pane_g1

0xcf8d,	// (0x00068d6b) temp_image_control_pane_g2_ParamLimits

0xcf8d,	// (0x00068d6b) temp_image_control_pane_g2

0xcf9f,	// (0x00068d7d) temp_image_control_pane_g3_ParamLimits

0xcf9f,	// (0x00068d7d) temp_image_control_pane_g3

0x4cba,	// (0x00060a98) temp_image_control_pane_g4_ParamLimits

0x4cba,	// (0x00060a98) temp_image_control_pane_g4

0x0003,

0xf5c2,	// (0x0006b3a0) temp_image_control_pane_g_ParamLimits

0xf5c2,	// (0x0006b3a0) temp_image_control_pane_g

0xcf7f,	// (0x00068d5d) main_mp3_pane_g1

0x4ccb,	// (0x00060aa9) main_mp3_pane_g2

0x0007,

0xf5cb,	// (0x0006b3a9) main_mp3_pane_g

0xcfe2,	// (0x00068dc0) main_mp3_pane_t1

0xaac6,	// (0x000668a4) main_camera_pane_g8_ParamLimits

0xaac6,	// (0x000668a4) main_camera_pane_g8

0x1cf3,	// (0x0005dad1) main_video_pane_g7_ParamLimits

0x1cf3,	// (0x0005dad1) main_video_pane_g7

0x47ad,	// (0x0006058b) main_camera2_pane_t7_ParamLimits

0x47ad,	// (0x0006058b) main_camera2_pane_t7

0xac2c,	// (0x00066a0a) scroll_pane_cp025_ParamLimits

0xac2c,	// (0x00066a0a) scroll_pane_cp025

0xac40,	// (0x00066a1e) scroll_pane_cp026_ParamLimits

0xac40,	// (0x00066a1e) scroll_pane_cp026

0xac4f,	// (0x00066a2d) wml_content_pane_ParamLimits

0x1060,	// (0x0005ce3e) main_touch_calib_pane

0x4d6f,	// (0x00060b4d) main_touch_calib_pane_g1

0x4d7b,	// (0x00060b59) main_touch_calib_pane_g2

0x4d87,	// (0x00060b65) main_touch_calib_pane_g3

0x4d93,	// (0x00060b71) main_touch_calib_pane_g4

0x0003,

0xf5e9,	// (0x0006b3c7) main_touch_calib_pane_g

0x4d9f,	// (0x00060b7d) main_touch_calib_pane_t1

0x4db8,	// (0x00060b96) main_touch_calib_pane_t2

0x0004,

0xf5f2,	// (0x0006b3d0) main_touch_calib_pane_t

0xb3b2,	// (0x00067190) mup_progress_pane_cp02

0xb3e7,	// (0x000671c5) navi_pane_g1

0xb4a2,	// (0x00067280) navi_pane_mp_t3

0x428e,	// (0x0006006c) main_mp3_pane_ParamLimits

0x43ff,	// (0x000601dd) navi_pane_ParamLimits

0xcf7f,	// (0x00068d5d) main_mp3_pane_g1_ParamLimits

0x4ccb,	// (0x00060aa9) main_mp3_pane_g2_ParamLimits

0x4cd7,	// (0x00060ab5) main_mp3_pane_g3_ParamLimits

0x4cd7,	// (0x00060ab5) main_mp3_pane_g3

0x4ce3,	// (0x00060ac1) main_mp3_pane_g4_ParamLimits

0x4ce3,	// (0x00060ac1) main_mp3_pane_g4

0xcfaf,	// (0x00068d8d) main_mp3_pane_g5_ParamLimits

0xcfaf,	// (0x00068d8d) main_mp3_pane_g5

0xcfbd,	// (0x00068d9b) main_mp3_pane_g6_ParamLimits

0xcfbd,	// (0x00068d9b) main_mp3_pane_g6

0xcfca,	// (0x00068da8) main_mp3_pane_g7_ParamLimits

0xcfca,	// (0x00068da8) main_mp3_pane_g7

0xcfd6,	// (0x00068db4) main_mp3_pane_g8_ParamLimits

0xcfd6,	// (0x00068db4) main_mp3_pane_g8

0xf5cb,	// (0x0006b3a9) main_mp3_pane_g_ParamLimits

0x4cef,	// (0x00060acd) main_mp3_pane_t2

0x4cff,	// (0x00060add) main_mp3_pane_t3

0xcff0,	// (0x00068dce) main_mp3_pane_t4

0xcffe,	// (0x00068ddc) main_mp3_pane_t5

0x0005,

0xf5dc,	// (0x0006b3ba) main_mp3_pane_t

0xd00c,	// (0x00068dea) mup_progress_pane_cp01

0x0cad,	// (0x0005ca8b) aid_zoom_text_secondary2

0xcde4,	// (0x00068bc2) list_cale_ev2_pane

0xcdec,	// (0x00068bca) scroll_pane_cp023_ParamLimits

0x4e13,	// (0x00060bf1) field_cale_ev2_pane_ParamLimits

0x4e13,	// (0x00060bf1) field_cale_ev2_pane

0x9e9d,	// (0x00065c7b) field_cale_ev2_pane_g1_ParamLimits

0x9e9d,	// (0x00065c7b) field_cale_ev2_pane_g1

0x9ea9,	// (0x00065c87) field_cale_ev2_pane_g2_ParamLimits

0x9ea9,	// (0x00065c87) field_cale_ev2_pane_g2

0x9ec1,	// (0x00065c9f) field_cale_ev2_pane_g3_ParamLimits

0x9ec1,	// (0x00065c9f) field_cale_ev2_pane_g3

0x0003,

0xf5fd,	// (0x0006b3db) field_cale_ev2_pane_g_ParamLimits

0xf5fd,	// (0x0006b3db) field_cale_ev2_pane_g

0x9ee5,	// (0x00065cc3) field_cale_ev2_pane_t1_ParamLimits

0x9ee5,	// (0x00065cc3) field_cale_ev2_pane_t1

0x9efc,	// (0x00065cda) field_cale_ev2_pane_t2_ParamLimits

0x9efc,	// (0x00065cda) field_cale_ev2_pane_t2

0x0001,

0xf606,	// (0x0006b3e4) field_cale_ev2_pane_t_ParamLimits

0xf606,	// (0x0006b3e4) field_cale_ev2_pane_t

0x3bcd,	// (0x0005f9ab) main_postcard_pane_g5_ParamLimits

0x3bcd,	// (0x0005f9ab) main_postcard_pane_g5

0x3bdb,	// (0x0005f9b9) main_postcard_pane_g6_ParamLimits

0x3bdb,	// (0x0005f9b9) main_postcard_pane_g6

0x1b3d,	// (0x0005d91b) camera2_autofocus_pane_cp_ParamLimits

0x1b3d,	// (0x0005d91b) camera2_autofocus_pane_cp

0x428e,	// (0x0006006c) main_mup3_pane

0x4e7c,	// (0x00060c5a) main_mup3_pane_g1_ParamLimits

0x4e7c,	// (0x00060c5a) main_mup3_pane_g1

0x4e9d,	// (0x00060c7b) main_mup3_pane_g2_ParamLimits

0x4e9d,	// (0x00060c7b) main_mup3_pane_g2

0x4f17,	// (0x00060cf5) main_mup3_pane_g3_ParamLimits

0x4f17,	// (0x00060cf5) main_mup3_pane_g3

0x4f5a,	// (0x00060d38) main_mup3_pane_g4_ParamLimits

0x4f5a,	// (0x00060d38) main_mup3_pane_g4

0x4f9d,	// (0x00060d7b) main_mup3_pane_g5_ParamLimits

0x4f9d,	// (0x00060d7b) main_mup3_pane_g5

0x4fe0,	// (0x00060dbe) main_mup3_pane_g6_ParamLimits

0x4fe0,	// (0x00060dbe) main_mup3_pane_g6

0xd014,	// (0x00068df2) main_mup3_pane_g7_ParamLimits

0xd014,	// (0x00068df2) main_mup3_pane_g7

0x0007,

0xf616,	// (0x0006b3f4) main_mup3_pane_g_ParamLimits

0xf616,	// (0x0006b3f4) main_mup3_pane_g

0x5056,	// (0x00060e34) main_mup3_pane_t1_ParamLimits

0x5056,	// (0x00060e34) main_mup3_pane_t1

0x50c5,	// (0x00060ea3) main_mup3_pane_t2_ParamLimits

0x50c5,	// (0x00060ea3) main_mup3_pane_t2

0x518e,	// (0x00060f6c) main_mup3_pane_t4_ParamLimits

0x518e,	// (0x00060f6c) main_mup3_pane_t4

0x51dc,	// (0x00060fba) main_mup3_pane_t5_ParamLimits

0x51dc,	// (0x00060fba) main_mup3_pane_t5

0x528c,	// (0x0006106a) main_mup3_pane_t6_ParamLimits

0x528c,	// (0x0006106a) main_mup3_pane_t6

0x0005,

0xf627,	// (0x0006b405) main_mup3_pane_t_ParamLimits

0xf627,	// (0x0006b405) main_mup3_pane_t

0x5338,	// (0x00061116) mup3_progress_pane_ParamLimits

0x5338,	// (0x00061116) mup3_progress_pane

0x53ac,	// (0x0006118a) popup_mup3_control_window_ParamLimits

0x53ac,	// (0x0006118a) popup_mup3_control_window

0xd022,	// (0x00068e00) popup_mup3_text_window

0x53c5,	// (0x000611a3) mup3_progress_pane_t1

0x53e4,	// (0x000611c2) mup3_progress_pane_t2

0xd02a,	// (0x00068e08) mup3_progress_pane_t3

0x0002,

0xf634,	// (0x0006b412) mup3_progress_pane_t

0xd047,	// (0x00068e25) mup_progress_pane_cp03

0x9bf6,	// (0x000659d4) bg_tb_trans_pane_cp04

0x5403,	// (0x000611e1) mup3_volume_pane

0x540b,	// (0x000611e9) popup_mup3_control_window_g1

0x5414,	// (0x000611f2) mup3_volume_pane_g1

0x541d,	// (0x000611fb) mup3_volume_pane_g2

0x5426,	// (0x00061204) mup3_volume_pane_g3

0x0002,

0xf63b,	// (0x0006b419) mup3_volume_pane_g

0x9bf6,	// (0x000659d4) bg_tb_trans_pane_cp03

0xd057,	// (0x00068e35) popup_mup3_text_window_g1

0xd05f,	// (0x00068e3d) popup_mup3_text_window_t1

0xa938,	// (0x00066716) list_calc_item_pane_g1_ParamLimits

0xcabd,	// (0x0006889b) mup_volume_pane_cp_g1

0x4dd1,	// (0x00060baf) main_touch_calib_pane_t3

0x4de7,	// (0x00060bc5) main_touch_calib_pane_t4

0x4dfd,	// (0x00060bdb) main_touch_calib_pane_t5

0x0d95,	// (0x0005cb73) aid_cell_size_toolbar2

0x0d9d,	// (0x0005cb7b) aid_popup3_width_pane

0x0ca5,	// (0x0005ca83) aid_zoom_text_msg_primary

0x1b12,	// (0x0005d8f0) vorec_t7

0xa8fc,	// (0x000666da) bg_calc_paper_pane_g1_ParamLimits

0xa908,	// (0x000666e6) bg_calc_paper_pane_g2_ParamLimits

0xa914,	// (0x000666f2) bg_calc_paper_pane_g3_ParamLimits

0xa920,	// (0x000666fe) bg_calc_paper_pane_g4_ParamLimits

0xa92c,	// (0x0006670a) bg_calc_paper_pane_g5_ParamLimits

0x144b,	// (0x0005d229) bg_calc_paper_pane_g6_ParamLimits

0x145c,	// (0x0005d23a) bg_calc_paper_pane_g7_ParamLimits

0x146d,	// (0x0005d24b) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0006af32) bg_calc_paper_pane_g_ParamLimits

0x147e,	// (0x0005d25c) calc_bg_paper_pane_g9_ParamLimits

0x1c24,	// (0x0005da02) image_qvga_pane_ParamLimits

0x1c24,	// (0x0005da02) image_qvga_pane

0xa81f,	// (0x000665fd) bg_popup_sub_pane_cp04_ParamLimits

0xb71c,	// (0x000674fa) popup_mup_playback_window_g1_ParamLimits

0xb728,	// (0x00067506) popup_mup_playback_window_t1_ParamLimits

0xb73d,	// (0x0006751b) popup_mup_playback_window_t2_ParamLimits

0x02c1,	// (0x0005c09f) popup_mup_playback_window_t_ParamLimits

0x48dc,	// (0x000606ba) main_mup2_pane_g3_ParamLimits

0x48dc,	// (0x000606ba) main_mup2_pane_g3

0x1ff0,	// (0x0005ddce) popup_toolbar_window_cp04

0xbb32,	// (0x00067910) popup_call2_audio_second_window_g3_ParamLimits

0xbb32,	// (0x00067910) popup_call2_audio_second_window_g3

0xbf3c,	// (0x00067d1a) popup_call2_audio_first_window_g4_ParamLimits

0xbf3c,	// (0x00067d1a) popup_call2_audio_first_window_g4

0xc5bb,	// (0x00068399) popup_call2_audio_in_window_g4_ParamLimits

0xc5bb,	// (0x00068399) popup_call2_audio_in_window_g4

0x3cdf,	// (0x0005fabd) aid_area_sk_bg_cut_ParamLimits

0x3cdf,	// (0x0005fabd) aid_area_sk_bg_cut

0xb752,	// (0x00067530) aid_area_sk_bg_cut_2_ParamLimits

0xb752,	// (0x00067530) aid_area_sk_bg_cut_2

0x4c60,	// (0x00060a3e) aid_placing_details_win

0x4c68,	// (0x00060a46) aid_placing_details_win_2

0xcec1,	// (0x00068c9f) camera2_autofocus_pane_g1_ParamLimits

0x0fec,	// (0x0005cdca) popup_fixed_preview_cale_window_ParamLimits

0x0fec,	// (0x0005cdca) popup_fixed_preview_cale_window

0xb52e,	// (0x0006730c) navi_slider_pane_g3

0xb537,	// (0x00067315) navi_slider_pane_g4

0xb540,	// (0x0006731e) navi_slider_pane_g5

0xb52e,	// (0x0006730c) navi_slider_pane_g6

0x35bc,	// (0x0005f39a) navi_slider_pane_g7

0xb653,	// (0x00067431) mup_scale_pane_g3

0xb65c,	// (0x0006743a) mup_scale_pane_g4

0xb665,	// (0x00067443) mup_scale_pane_g5

0x39eb,	// (0x0005f7c9) mup_scale_pane_g6

0x39f4,	// (0x0005f7d2) mup_scale_pane_g7

0xb52e,	// (0x0006730c) cams2_slider_pane_g3

0xcb3f,	// (0x0006891d) cams2_slider_pane_g4

0x4bb8,	// (0x00060996) cams2_slider_pane_g5

0xb52e,	// (0x0006730c) cams2_slider_pane_g6

0x4bc0,	// (0x0006099e) cams2_slider_pane_g7

0xcd6a,	// (0x00068b48) camera2_autofocus_pane_cp_g1

0xc956,	// (0x00068734) bg_popup_preview_window_pane_cp02_ParamLimits

0xc956,	// (0x00068734) bg_popup_preview_window_pane_cp02

0xd06d,	// (0x00068e4b) list_fp_cale_pane_ParamLimits

0xd06d,	// (0x00068e4b) list_fp_cale_pane

0xd079,	// (0x00068e57) popup_fixed_preview_cale_window_t1_ParamLimits

0xd079,	// (0x00068e57) popup_fixed_preview_cale_window_t1

0x542f,	// (0x0006120d) popup_fixed_preview_cale_window_t2_ParamLimits

0x542f,	// (0x0006120d) popup_fixed_preview_cale_window_t2

0x5444,	// (0x00061222) popup_fixed_preview_cale_window_t3_ParamLimits

0x5444,	// (0x00061222) popup_fixed_preview_cale_window_t3

0x0002,

0xf642,	// (0x0006b420) popup_fixed_preview_cale_window_t_ParamLimits

0xf642,	// (0x0006b420) popup_fixed_preview_cale_window_t

0x5459,	// (0x00061237) list_single_fp_cale_pane_ParamLimits

0x5459,	// (0x00061237) list_single_fp_cale_pane

0xd097,	// (0x00068e75) list_single_fp_cale_pane_g1_ParamLimits

0xd097,	// (0x00068e75) list_single_fp_cale_pane_g1

0xd0a3,	// (0x00068e81) list_single_fp_cale_pane_g2_ParamLimits

0xd0a3,	// (0x00068e81) list_single_fp_cale_pane_g2

0x0002,

0x05a3,	// (0x0005c381) list_single_fp_cale_pane_g_ParamLimits

0x05a3,	// (0x0005c381) list_single_fp_cale_pane_g

0xd0bc,	// (0x00068e9a) list_single_fp_cale_pane_t1_ParamLimits

0xd0bc,	// (0x00068e9a) list_single_fp_cale_pane_t1

0xd0ce,	// (0x00068eac) list_single_fp_cale_pane_t2_ParamLimits

0xd0ce,	// (0x00068eac) list_single_fp_cale_pane_t2

0x0001,

0x05aa,	// (0x0005c388) list_single_fp_cale_pane_t_ParamLimits

0x05aa,	// (0x0005c388) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1060,	// (0x0005ce3e) main_dialer_pane

0x546c,	// (0x0006124a) aid_cell_size_keypad

0x5476,	// (0x00061254) dialer_ne_pane

0x5480,	// (0x0006125e) grid_dialer_command_1_pane

0x5488,	// (0x00061266) grid_dialer_command_2_pane

0x5490,	// (0x0006126e) grid_dialer_keypad_pane

0x54a4,	// (0x00061282) bg_popup_call_pane_cp06_ParamLimits

0x54a4,	// (0x00061282) bg_popup_call_pane_cp06

0x54b0,	// (0x0006128e) dialer_ne_clear_pane_ParamLimits

0x54b0,	// (0x0006128e) dialer_ne_clear_pane

0xd101,	// (0x00068edf) dialer_ne_pane_g1

0xd109,	// (0x00068ee7) dialer_ne_pane_t1_ParamLimits

0xd109,	// (0x00068ee7) dialer_ne_pane_t1

0x54bc,	// (0x0006129a) dialer_ne_pane_t2_ParamLimits

0x54bc,	// (0x0006129a) dialer_ne_pane_t2

0x54d9,	// (0x000612b7) dialer_ne_pane_t3_ParamLimits

0x54d9,	// (0x000612b7) dialer_ne_pane_t3

0x0002,

0xf649,	// (0x0006b427) dialer_ne_pane_t_ParamLimits

0xf649,	// (0x0006b427) dialer_ne_pane_t

0x54fd,	// (0x000612db) dialer_ne_pane_t3_copy1_ParamLimits

0x54fd,	// (0x000612db) dialer_ne_pane_t3_copy1

0x5521,	// (0x000612ff) cell_dialer_keypad_pane_ParamLimits

0x5521,	// (0x000612ff) cell_dialer_keypad_pane

0x5538,	// (0x00061316) cell_dialer_command_1_pane_ParamLimits

0x5538,	// (0x00061316) cell_dialer_command_1_pane

0x554e,	// (0x0006132c) cell_dialer_command_2_pane_ParamLimits

0x554e,	// (0x0006132c) cell_dialer_command_2_pane

0xd11b,	// (0x00068ef9) bg_button_pane_cp02_ParamLimits

0xd11b,	// (0x00068ef9) bg_button_pane_cp02

0x555d,	// (0x0006133b) cell_dialer_keypad_pane_g1_ParamLimits

0x555d,	// (0x0006133b) cell_dialer_keypad_pane_g1

0xd11b,	// (0x00068ef9) bg_button_pane_cp03_ParamLimits

0xd11b,	// (0x00068ef9) bg_button_pane_cp03

0x5572,	// (0x00061350) cell_dialer_command_1_pane_g1_ParamLimits

0x5572,	// (0x00061350) cell_dialer_command_1_pane_g1

0xd127,	// (0x00068f05) bg_button_pane_cp04

0x5586,	// (0x00061364) cell_dialer_command_2_pane_g1

0xaabe,	// (0x0006689c) bg_button_pane_cp06

0xd12f,	// (0x00068f0d) dialer_ne_clear_pane_g1

0xb3f3,	// (0x000671d1) navi_pane_g2

0xb421,	// (0x000671ff) navi_pane_g3

0x0002,

0x01c4,	// (0x0005bfa2) navi_pane_g

0xb4b0,	// (0x0006728e) navi_pane_mv_g2

0xb4d7,	// (0x000672b5) navi_pane_mv_g5

0x3587,	// (0x0005f365) navi_pane_mv_t1

0xa8f0,	// (0x000666ce) main_clock2_pane

0xdbe4,	// (0x000699c2) main_clock2_list_pane_ParamLimits

0xdbe4,	// (0x000699c2) main_clock2_list_pane

0x55e2,	// (0x000613c0) main_clock2_pane_t1_ParamLimits

0x55e2,	// (0x000613c0) main_clock2_pane_t1

0x5610,	// (0x000613ee) main_clock2_pane_t2_ParamLimits

0x5610,	// (0x000613ee) main_clock2_pane_t2

0x0004,

0xf650,	// (0x0006b42e) main_clock2_pane_t_ParamLimits

0xf650,	// (0x0006b42e) main_clock2_pane_t

0x5675,	// (0x00061453) popup_clock_analogue_window_cp03_ParamLimits

0x5675,	// (0x00061453) popup_clock_analogue_window_cp03

0x5693,	// (0x00061471) popup_clock_digital_window_cp02_ParamLimits

0x5693,	// (0x00061471) popup_clock_digital_window_cp02

0x5708,	// (0x000614e6) main_clock2_list_single_pane_ParamLimits

0x5708,	// (0x000614e6) main_clock2_list_single_pane

0xaabe,	// (0x0006689c) list_highlight_pane_cp05

0xd169,	// (0x00068f47) main_clock2_list_single_pane_t1

0x1ff0,	// (0x0005ddce) popup_toolbar_window_cp04_ParamLimits

0x4c8a,	// (0x00060a68) camera2_autofocus_pane_g2_ParamLimits

0x4c8a,	// (0x00060a68) camera2_autofocus_pane_g2

0x4c96,	// (0x00060a74) camera2_autofocus_pane_g3_ParamLimits

0x4c96,	// (0x00060a74) camera2_autofocus_pane_g3

0x4ca2,	// (0x00060a80) camera2_autofocus_pane_g4_ParamLimits

0x4ca2,	// (0x00060a80) camera2_autofocus_pane_g4

0x4cae,	// (0x00060a8c) camera2_autofocus_pane_g5_ParamLimits

0x4cae,	// (0x00060a8c) camera2_autofocus_pane_g5

0x0004,

0xf5b7,	// (0x0006b395) camera2_autofocus_pane_g_ParamLimits

0xf5b7,	// (0x0006b395) camera2_autofocus_pane_g

0x4e3d,	// (0x00060c1b) camera2_autofocus_pane_cp_g2

0x4e45,	// (0x00060c23) camera2_autofocus_pane_cp_g3

0x4e4d,	// (0x00060c2b) camera2_autofocus_pane_cp_g4

0x4e55,	// (0x00060c33) camera2_autofocus_pane_cp_g5

0x0004,

0xf60b,	// (0x0006b3e9) camera2_autofocus_pane_cp_g

0x549c,	// (0x0006127a) popup_dialer_spcha_window

0x9bf6,	// (0x000659d4) bg_popup_sub_pane_cp07

0xd177,	// (0x00068f55) list_spcha_pane

0xd17f,	// (0x00068f5d) list_single_spcha_pane_ParamLimits

0xd17f,	// (0x00068f5d) list_single_spcha_pane

0x9bf6,	// (0x000659d4) list_highlight_pane_cp06

0xd190,	// (0x00068f6e) list_single_spcha_pane_t1

0xc365,	// (0x00068143) popup_call2_audio_out_window_g4_ParamLimits

0xc365,	// (0x00068143) popup_call2_audio_out_window_g4

0x1060,	// (0x0005ce3e) main_imed2_pane

0x4328,	// (0x00060106) popup_imed_adjust2_window

0x433b,	// (0x00060119) popup_imed_trans_window_ParamLimits

0x433b,	// (0x00060119) popup_imed_trans_window

0xcba8,	// (0x00068986) popup_blid_sat_info2_window_t1

0xcbb6,	// (0x00068994) popup_blid_sat_info2_window_t2

0x000a,

0x0494,	// (0x0005c272) popup_blid_sat_info2_window_t

0x57bd,	// (0x0006159b) aid_size_cell_colour_35

0x57d7,	// (0x000615b5) aid_size_cell_colour_112

0x57ee,	// (0x000615cc) aid_size_cell_effect

0xa579,	// (0x00066357) bg_tb_trans_pane_cp02

0xb0e9,	// (0x00066ec7) heading_imed_pane

0x5808,	// (0x000615e6) listscroll_imed_pane

0xd19e,	// (0x00068f7c) heading_imed_pane_g1

0xd1a6,	// (0x00068f84) heading_imed_pane_t1

0xd1b4,	// (0x00068f92) grid_imed_colour_35_pane_ParamLimits

0xd1b4,	// (0x00068f92) grid_imed_colour_35_pane

0x5814,	// (0x000615f2) grid_imed_effect_pane

0xd1cc,	// (0x00068faa) list_imed_aspect_pane

0x5824,	// (0x00061602) scroll_pane_cp027_ParamLimits

0x5824,	// (0x00061602) scroll_pane_cp027

0x5830,	// (0x0006160e) cell_imed_effect_pane_ParamLimits

0x5830,	// (0x0006160e) cell_imed_effect_pane

0xd1d4,	// (0x00068fb2) cell_imed_colour_pane_ParamLimits

0xd1d4,	// (0x00068fb2) cell_imed_colour_pane

0xd22b,	// (0x00069009) cell_imed_colour_pane_g1_ParamLimits

0xd22b,	// (0x00069009) cell_imed_colour_pane_g1

0xd23c,	// (0x0006901a) hgihlgiht_grid_pane_cp016_ParamLimits

0xd23c,	// (0x0006901a) hgihlgiht_grid_pane_cp016

0x5848,	// (0x00061626) cell_imed_effect_pane_g1

0x5850,	// (0x0006162e) grid_highlight_pane_cp017

0xd24d,	// (0x0006902b) list_imed_single_pane_ParamLimits

0xd24d,	// (0x0006902b) list_imed_single_pane

0x9bf6,	// (0x000659d4) list_highlight_pane_cp07

0xd262,	// (0x00069040) list_imed_aspect_pane_comp1_t1

0xc962,	// (0x00068740) bg_tb_trans_pane_cp05

0xd284,	// (0x00069062) popup_imed_adjust2_window_g1

0xd2ab,	// (0x00069089) popup_imed_adjust2_window_t1

0xd2c3,	// (0x000690a1) slider_imed_adjust_pane

0xd2d7,	// (0x000690b5) slider_imed_adjust_pane_g1

0xd2e7,	// (0x000690c5) slider_imed_adjust_pane_g2

0xd2f7,	// (0x000690d5) slider_imed_adjust_pane_g3

0xd308,	// (0x000690e6) slider_imed_adjust_pane_g4

0x0003,

0x05d8,	// (0x0005c3b6) slider_imed_adjust_pane_g

0x5859,	// (0x00061637) aid_size_cell_clipart2

0x5865,	// (0x00061643) grid_imed_clipart_pane

0xd319,	// (0x000690f7) scroll_pane_cp031

0x586f,	// (0x0006164d) cell_imed_clipart_pane_ParamLimits

0x586f,	// (0x0006164d) cell_imed_clipart_pane

0x5892,	// (0x00061670) cell_imed_clipart_pane_g1

0x9bf6,	// (0x000659d4) grid_highlight_pane_cp014

0x55c4,	// (0x000613a2) main_clock2_pane_g1_ParamLimits

0x55c4,	// (0x000613a2) main_clock2_pane_g1

0x56af,	// (0x0006148d) aid_call2_pane_cp10

0x56c1,	// (0x0006149f) aid_call_pane_cp10

0xb352,	// (0x00067130) popup_clock_analogue_window_cp10_g1

0xb352,	// (0x00067130) popup_clock_analogue_window_cp10_g2

0x56d3,	// (0x000614b1) popup_clock_analogue_window_cp10_g3

0x56d3,	// (0x000614b1) popup_clock_analogue_window_cp10_g4

0xb352,	// (0x00067130) popup_clock_analogue_window_cp10_g5

0x0004,

0xf65b,	// (0x0006b439) popup_clock_analogue_window_cp10_g

0x56e9,	// (0x000614c7) popup_clock_analogue_window_cp10_t1

0x571a,	// (0x000614f8) clock_digital_number_pane_cp10_ParamLimits

0x571a,	// (0x000614f8) clock_digital_number_pane_cp10

0x5734,	// (0x00061512) clock_digital_number_pane_cp11_ParamLimits

0x5734,	// (0x00061512) clock_digital_number_pane_cp11

0x574e,	// (0x0006152c) clock_digital_number_pane_cp12_ParamLimits

0x574e,	// (0x0006152c) clock_digital_number_pane_cp12

0x5768,	// (0x00061546) clock_digital_number_pane_cp13_ParamLimits

0x5768,	// (0x00061546) clock_digital_number_pane_cp13

0x5782,	// (0x00061560) clock_digital_separator_pane_cp10_ParamLimits

0x5782,	// (0x00061560) clock_digital_separator_pane_cp10

0x579c,	// (0x0006157a) popup_clock_digital_window_cp02_t1_ParamLimits

0x579c,	// (0x0006157a) popup_clock_digital_window_cp02_t1

0xa817,	// (0x000665f5) clock_digital_number_pane_cp10_g1

0xa817,	// (0x000665f5) clock_digital_number_pane_cp10_g2

0x0001,

0xf666,	// (0x0006b444) clock_digital_number_pane_cp10_g

0xa817,	// (0x000665f5) clock_digital_separator_pane_cp10_g1

0xa817,	// (0x000665f5) clock_digital_separator_pane_g2_cp10

0xb4df,	// (0x000672bd) navi_pane_vded_g4

0xb4e8,	// (0x000672c6) navi_pane_vded_g5

0xb4f1,	// (0x000672cf) navi_pane_vded_t1

0x1060,	// (0x0005ce3e) main_vded_pane

0x589b,	// (0x00061679) main_vded_pane_g1

0x58a7,	// (0x00061685) main_vded_pane_g2

0x58b1,	// (0x0006168f) main_vded_pane_g3

0x0002,

0xf66b,	// (0x0006b449) main_vded_pane_g

0x58bb,	// (0x00061699) main_vded_pane_t1

0x58c9,	// (0x000616a7) main_vded_pane_t2

0x0001,

0xf672,	// (0x0006b450) main_vded_pane_t

0x58d7,	// (0x000616b5) vded_slider_pane

0x58e1,	// (0x000616bf) vded_video_pane

0xd321,	// (0x000690ff) vded_video_pane_g1

0x58eb,	// (0x000616c9) vded_video_pane_g2

0xcd6a,	// (0x00068b48) vded_video_pane_g3

0x0002,

0xf677,	// (0x0006b455) vded_video_pane_g

0xd32b,	// (0x00069109) vded_slider_pane_g1

0xcabd,	// (0x0006889b) vded_slider_pane_g2

0xd334,	// (0x00069112) vded_slider_pane_g3

0xd33d,	// (0x0006911b) vded_slider_pane_g4

0xd346,	// (0x00069124) vded_slider_pane_g5

0x0004,

0x05f9,	// (0x0005c3d7) vded_slider_pane_g

0x539e,	// (0x0006117c) mup3_rocker_pane_ParamLimits

0x539e,	// (0x0006117c) mup3_rocker_pane

0x58f4,	// (0x000616d2) mup3_control_keys_pane_g1

0x58fc,	// (0x000616da) mup3_control_keys_pane_g2

0x5904,	// (0x000616e2) mup3_control_keys_pane_g3

0x590c,	// (0x000616ea) mup3_control_keys_pane_g4

0x0003,

0xf67e,	// (0x0006b45c) mup3_control_keys_pane_g

0x1014,	// (0x0005cdf2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1014,	// (0x0005cdf2) popup_toolbar2_fixed_window_cp01

0x53b8,	// (0x00061196) popup_toolbar2_fixed_window_cp02_ParamLimits

0x53b8,	// (0x00061196) popup_toolbar2_fixed_window_cp02

0xbca4,	// (0x00067a82) popup_call2_audio_second_window_t4_ParamLimits

0xbca4,	// (0x00067a82) popup_call2_audio_second_window_t4

0xc1d2,	// (0x00067fb0) popup_call2_audio_first_window_t6_ParamLimits

0xc1d2,	// (0x00067fb0) popup_call2_audio_first_window_t6

0xc468,	// (0x00068246) popup_call2_audio_out_window_t6_ParamLimits

0xc468,	// (0x00068246) popup_call2_audio_out_window_t6

0x1060,	// (0x0005ce3e) main_vitu_pane

0x591c,	// (0x000616fa) aid_size_cell_itu_ParamLimits

0x591c,	// (0x000616fa) aid_size_cell_itu

0xdbe4,	// (0x000699c2) bg_popup_window_pane_cp08_ParamLimits

0xdbe4,	// (0x000699c2) bg_popup_window_pane_cp08

0x592a,	// (0x00061708) field_vitu_entry_pane_ParamLimits

0x592a,	// (0x00061708) field_vitu_entry_pane

0x5939,	// (0x00061717) grid_vitu_function_pane_ParamLimits

0x5939,	// (0x00061717) grid_vitu_function_pane

0x5949,	// (0x00061727) grid_vitu_itu_pane_ParamLimits

0x5949,	// (0x00061727) grid_vitu_itu_pane

0x5959,	// (0x00061737) cell_vitu_itu_pane_ParamLimits

0x5959,	// (0x00061737) cell_vitu_itu_pane

0x596e,	// (0x0006174c) cell_vitu_function_pane_ParamLimits

0x596e,	// (0x0006174c) cell_vitu_function_pane

0xa579,	// (0x00066357) bg_popup_sub_pane_cp08_ParamLimits

0xa579,	// (0x00066357) bg_popup_sub_pane_cp08

0x5980,	// (0x0006175e) field_vitu_entry_pane_t1_ParamLimits

0x5980,	// (0x0006175e) field_vitu_entry_pane_t1

0xd367,	// (0x00069145) field_vitu_entry_pane_t2_ParamLimits

0xd367,	// (0x00069145) field_vitu_entry_pane_t2

0x0001,

0xf687,	// (0x0006b465) field_vitu_entry_pane_t_ParamLimits

0xf687,	// (0x0006b465) field_vitu_entry_pane_t

0xd384,	// (0x00069162) bg_button_pane_cp05_ParamLimits

0xd384,	// (0x00069162) bg_button_pane_cp05

0x599d,	// (0x0006177b) cell_vitu_itu_pane_g1

0x59b5,	// (0x00061793) cell_vitu_itu_pane_t1_ParamLimits

0x59b5,	// (0x00061793) cell_vitu_itu_pane_t1

0x59c7,	// (0x000617a5) cell_vitu_itu_pane_t2_ParamLimits

0x59c7,	// (0x000617a5) cell_vitu_itu_pane_t2

0x0002,

0xf68c,	// (0x0006b46a) cell_vitu_itu_pane_t_ParamLimits

0xf68c,	// (0x0006b46a) cell_vitu_itu_pane_t

0xd392,	// (0x00069170) bg_button_pane_cp07

0x59fc,	// (0x000617da) cell_vitu_function_pane_g1

0x12ef,	// (0x0005d0cd) main_calc_pane_g1

0x0dd1,	// (0x0005cbaf) aid_visual_content_pane

0x1060,	// (0x0005ce3e) main_vradio_pane

0x5a05,	// (0x000617e3) main_vradio_pane_g1_ParamLimits

0x5a05,	// (0x000617e3) main_vradio_pane_g1

0xd39c,	// (0x0006917a) main_vradio_pane_g2_ParamLimits

0xd39c,	// (0x0006917a) main_vradio_pane_g2

0x0001,

0xf693,	// (0x0006b471) main_vradio_pane_g_ParamLimits

0xf693,	// (0x0006b471) main_vradio_pane_g

0x5a15,	// (0x000617f3) main_vradio_pane_t1_ParamLimits

0x5a15,	// (0x000617f3) main_vradio_pane_t1

0x5a27,	// (0x00061805) main_vradio_pane_t2_ParamLimits

0x5a27,	// (0x00061805) main_vradio_pane_t2

0xd3a9,	// (0x00069187) main_vradio_pane_t3_ParamLimits

0xd3a9,	// (0x00069187) main_vradio_pane_t3

0x0002,

0xf698,	// (0x0006b476) main_vradio_pane_t_ParamLimits

0xf698,	// (0x0006b476) main_vradio_pane_t

0x5a39,	// (0x00061817) vradio_rocker_control_pane_ParamLimits

0x5a39,	// (0x00061817) vradio_rocker_control_pane

0x5a45,	// (0x00061823) vradio_station_info_pane_ParamLimits

0x5a45,	// (0x00061823) vradio_station_info_pane

0xd3bd,	// (0x0006919b) vradio_frequency_info_pane_ParamLimits

0xd3bd,	// (0x0006919b) vradio_frequency_info_pane

0xcd6a,	// (0x00068b48) vradio_station_info_pane_g1

0xd3cc,	// (0x000691aa) vradio_station_info_pane_t1_ParamLimits

0xd3cc,	// (0x000691aa) vradio_station_info_pane_t1

0xd3ee,	// (0x000691cc) vradio_station_info_pane_t2_ParamLimits

0xd3ee,	// (0x000691cc) vradio_station_info_pane_t2

0x0001,

0x062a,	// (0x0005c408) vradio_station_info_pane_t_ParamLimits

0x062a,	// (0x0005c408) vradio_station_info_pane_t

0xd400,	// (0x000691de) vradio_tuning_pane

0xd408,	// (0x000691e6) vradio_rocker_control_pane_g1

0xd410,	// (0x000691ee) vradio_rocker_control_pane_g2

0xd418,	// (0x000691f6) vradio_rocker_control_pane_g3

0xd420,	// (0x000691fe) vradio_rocker_control_pane_g4

0xd428,	// (0x00069206) vradio_rocker_control_pane_g5

0x0004,

0x062f,	// (0x0005c40d) vradio_rocker_control_pane_g

0x5a54,	// (0x00061832) vradio_frequency_info_pane_g1

0xd430,	// (0x0006920e) vradio_frequency_info_pane_t1_ParamLimits

0xd430,	// (0x0006920e) vradio_frequency_info_pane_t1

0x5a5e,	// (0x0006183c) vradio_tuning_pane_g1

0x5a67,	// (0x00061845) vradio_tuning_pane_t1

0x0e1a,	// (0x0005cbf8) area_side_right_pane_ParamLimits

0x0e1a,	// (0x0005cbf8) area_side_right_pane

0xc91d,	// (0x000686fb) status_small_pane_g1

0xc925,	// (0x00068703) status_small_pane_g2

0xc92e,	// (0x0006870c) status_small_pane_g3

0xc937,	// (0x00068715) status_small_pane_g4

0x0003,

0x03ea,	// (0x0005c1c8) status_small_pane_g

0xc940,	// (0x0006871e) status_small_pane_t1

0x1060,	// (0x0005ce3e) main_video3_pane

0xd444,	// (0x00069222) cams_zoom_vslider_pane

0xd44c,	// (0x0006922a) image3_wide_pane_ParamLimits

0xd44c,	// (0x0006922a) image3_wide_pane

0xd466,	// (0x00069244) image3_wide_small_pane

0xd472,	// (0x00069250) main_video3_pane_g1_ParamLimits

0xd472,	// (0x00069250) main_video3_pane_g1

0xd48e,	// (0x0006926c) main_video3_pane_g2_ParamLimits

0xd48e,	// (0x0006926c) main_video3_pane_g2

0x0001,

0x063a,	// (0x0005c418) main_video3_pane_g_ParamLimits

0x063a,	// (0x0005c418) main_video3_pane_g

0xd4aa,	// (0x00069288) main_video3_pane_t1_ParamLimits

0xd4aa,	// (0x00069288) main_video3_pane_t1

0xd4d5,	// (0x000692b3) main_video3_pane_t2_ParamLimits

0xd4d5,	// (0x000692b3) main_video3_pane_t2

0xd500,	// (0x000692de) main_video3_pane_t3_ParamLimits

0xd500,	// (0x000692de) main_video3_pane_t3

0x0002,

0x063f,	// (0x0005c41d) main_video3_pane_t_ParamLimits

0x063f,	// (0x0005c41d) main_video3_pane_t

0xd52d,	// (0x0006930b) cams_zoom_vslider_pane_g1

0xd536,	// (0x00069314) cams_zoom_vslider_pane_g2

0x0001,

0x0646,	// (0x0005c424) cams_zoom_vslider_pane_g

0xd53e,	// (0x0006931c) small_slider_vertical_pane

0xcd6a,	// (0x00068b48) small_slider_vertical_pane_g1

0xcd6a,	// (0x00068b48) small_slider_vertical_pane_g2

0xd546,	// (0x00069324) small_slider_vertical_pane_g3

0x0002,

0x064b,	// (0x0005c429) small_slider_vertical_pane_g

0x1060,	// (0x0005ce3e) main_hwr_training_pane

0xd54f,	// (0x0006932d) hwr_training_instruct_pane_ParamLimits

0xd54f,	// (0x0006932d) hwr_training_instruct_pane

0x5a76,	// (0x00061854) hwr_training_navi_pane_ParamLimits

0x5a76,	// (0x00061854) hwr_training_navi_pane

0x5a90,	// (0x0006186e) hwr_training_write_pane_ParamLimits

0x5a90,	// (0x0006186e) hwr_training_write_pane

0x9bf6,	// (0x000659d4) bg_frame_shadow_pane

0xd586,	// (0x00069364) hwr_training_write_pane_g1

0xd58e,	// (0x0006936c) hwr_training_write_pane_g2

0xd596,	// (0x00069374) hwr_training_write_pane_g3

0xd59e,	// (0x0006937c) hwr_training_write_pane_g4

0xd5a6,	// (0x00069384) hwr_training_write_pane_g5

0xd5ae,	// (0x0006938c) hwr_training_write_pane_g6

0xd5b6,	// (0x00069394) hwr_training_write_pane_g7

0x0006,

0x0652,	// (0x0005c430) hwr_training_write_pane_g

0x5ac8,	// (0x000618a6) hwr_training_navi_pane_g1_ParamLimits

0x5ac8,	// (0x000618a6) hwr_training_navi_pane_g1

0x5ada,	// (0x000618b8) hwr_training_navi_pane_g2_ParamLimits

0x5ada,	// (0x000618b8) hwr_training_navi_pane_g2

0x5aec,	// (0x000618ca) hwr_training_navi_pane_g3_ParamLimits

0x5aec,	// (0x000618ca) hwr_training_navi_pane_g3

0x5afc,	// (0x000618da) hwr_training_navi_pane_g4_ParamLimits

0x5afc,	// (0x000618da) hwr_training_navi_pane_g4

0x0004,

0xf69f,	// (0x0006b47d) hwr_training_navi_pane_g_ParamLimits

0xf69f,	// (0x0006b47d) hwr_training_navi_pane_g

0x5b16,	// (0x000618f4) hwr_training_navi_pane_t1

0x5b24,	// (0x00061902) list_single_hwr_training_instruct_pane_ParamLimits

0x5b24,	// (0x00061902) list_single_hwr_training_instruct_pane

0xd5be,	// (0x0006939c) list_single_hwr_training_instruct_pane_t1

0xccaa,	// (0x00068a88) bg_frame_shadow_pane_g1

0xd5cd,	// (0x000693ab) bg_frame_shadow_pane_g2

0xd5d5,	// (0x000693b3) bg_frame_shadow_pane_g3

0xd5dd,	// (0x000693bb) bg_frame_shadow_pane_g4

0xd5e5,	// (0x000693c3) bg_frame_shadow_pane_g5

0xd5ed,	// (0x000693cb) bg_frame_shadow_pane_g6

0xd5f5,	// (0x000693d3) bg_frame_shadow_pane_g7

0xa9a9,	// (0x00066787) bg_frame_shadow_pane_g8

0x0007,

0xf6aa,	// (0x0006b488) bg_frame_shadow_pane_g

0x1060,	// (0x0005ce3e) main_video_tele_dialer_pane

0x5b4d,	// (0x0006192b) aid_size_cell_video_keypad_ParamLimits

0x5b4d,	// (0x0006192b) aid_size_cell_video_keypad

0x5b5d,	// (0x0006193b) grid_video_dialer_keypad_pane_ParamLimits

0x5b5d,	// (0x0006193b) grid_video_dialer_keypad_pane

0x5b91,	// (0x0006196f) video_down_pane_cp_ParamLimits

0x5b91,	// (0x0006196f) video_down_pane_cp

0x5bbb,	// (0x00061999) cell_video_dialer_keypad_pane_ParamLimits

0x5bbb,	// (0x00061999) cell_video_dialer_keypad_pane

0xd5fd,	// (0x000693db) bg_button_pane_cp08_ParamLimits

0xd5fd,	// (0x000693db) bg_button_pane_cp08

0x5bd0,	// (0x000619ae) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5bd0,	// (0x000619ae) cell_video_dialer_keypad_pane_g1

0x5392,	// (0x00061170) mup3_rocker2_pane_ParamLimits

0x5392,	// (0x00061170) mup3_rocker2_pane

0xcd6a,	// (0x00068b48) mup3_rocker2_pane_g1

0x429c,	// (0x0006007a) main_dialer2_pane

0x1060,	// (0x0005ce3e) main_mp4_pane

0x5c28,	// (0x00061a06) main_mp4_pane_g1_ParamLimits

0x5c28,	// (0x00061a06) main_mp4_pane_g1

0x5c36,	// (0x00061a14) main_mp4_pane_g2_ParamLimits

0x5c36,	// (0x00061a14) main_mp4_pane_g2

0x5c44,	// (0x00061a22) main_mp4_pane_g3_ParamLimits

0x5c44,	// (0x00061a22) main_mp4_pane_g3

0x5c89,	// (0x00061a67) main_mp4_pane_g4_ParamLimits

0x5c89,	// (0x00061a67) main_mp4_pane_g4

0x5cb7,	// (0x00061a95) main_mp4_pane_g5_ParamLimits

0x5cb7,	// (0x00061a95) main_mp4_pane_g5

0x0007,

0xf6ca,	// (0x0006b4a8) main_mp4_pane_g_ParamLimits

0xf6ca,	// (0x0006b4a8) main_mp4_pane_g

0x5d2b,	// (0x00061b09) main_mp4_pane_t1_ParamLimits

0x5d2b,	// (0x00061b09) main_mp4_pane_t1

0x5d87,	// (0x00061b65) main_mp4_pane_t2_ParamLimits

0x5d87,	// (0x00061b65) main_mp4_pane_t2

0xd609,	// (0x000693e7) main_mp4_pane_t3_ParamLimits

0xd609,	// (0x000693e7) main_mp4_pane_t3

0x5dd9,	// (0x00061bb7) main_mp4_pane_t4_ParamLimits

0x5dd9,	// (0x00061bb7) main_mp4_pane_t4

0x0003,

0xf6db,	// (0x0006b4b9) main_mp4_pane_t_ParamLimits

0xf6db,	// (0x0006b4b9) main_mp4_pane_t

0x5e1d,	// (0x00061bfb) mp4_progress_pane_ParamLimits

0x5e1d,	// (0x00061bfb) mp4_progress_pane

0x5e67,	// (0x00061c45) mp4_rocker_pane_ParamLimits

0x5e67,	// (0x00061c45) mp4_rocker_pane

0xd637,	// (0x00069415) mp4_progress_pane_t1

0xd650,	// (0x0006942e) mp4_progress_pane_t2

0x0001,

0x06a6,	// (0x0005c484) mp4_progress_pane_t

0xd669,	// (0x00069447) mup_progress_pane_cp04

0xdbf2,	// (0x000699d0) mp4_rocker_pane_g1

0x5e87,	// (0x00061c65) aid_cell_size_keypad2_ParamLimits

0x5e87,	// (0x00061c65) aid_cell_size_keypad2

0x5e97,	// (0x00061c75) dialer2_ne_pane_ParamLimits

0x5e97,	// (0x00061c75) dialer2_ne_pane

0x5ea5,	// (0x00061c83) grid_dialer2_keypad_pane_ParamLimits

0x5ea5,	// (0x00061c83) grid_dialer2_keypad_pane

0xdbfc,	// (0x000699da) bg_popup_call_pane_cp07_ParamLimits

0xdbfc,	// (0x000699da) bg_popup_call_pane_cp07

0x5eb5,	// (0x00061c93) dialer2_ne_pane_t1_ParamLimits

0x5eb5,	// (0x00061c93) dialer2_ne_pane_t1

0x5eda,	// (0x00061cb8) cell_dialer2_keypad_pane_ParamLimits

0x5eda,	// (0x00061cb8) cell_dialer2_keypad_pane

0xd68e,	// (0x0006946c) bg_button_pane_pane_cp04_ParamLimits

0xd68e,	// (0x0006946c) bg_button_pane_pane_cp04

0x5eef,	// (0x00061ccd) cell_dialer2_keypad_pane_g1_ParamLimits

0x5eef,	// (0x00061ccd) cell_dialer2_keypad_pane_g1

0x1eb2,	// (0x0005dc90) aid_placing_vt_set_content_ParamLimits

0x1eb2,	// (0x0005dc90) aid_placing_vt_set_content

0x1ede,	// (0x0005dcbc) aid_placing_vt_set_title_ParamLimits

0x1ede,	// (0x0005dcbc) aid_placing_vt_set_title

0x1060,	// (0x0005ce3e) main_image3_pane

0x5f89,	// (0x00061d67) area_side_right_pane_cp01_ParamLimits

0x5f89,	// (0x00061d67) area_side_right_pane_cp01

0x5fb6,	// (0x00061d94) main_image3_pane_g1_ParamLimits

0x5fb6,	// (0x00061d94) main_image3_pane_g1

0x5fc4,	// (0x00061da2) main_image3_pane_g2_ParamLimits

0x5fc4,	// (0x00061da2) main_image3_pane_g2

0x5fdd,	// (0x00061dbb) main_image3_pane_g3_ParamLimits

0x5fdd,	// (0x00061dbb) main_image3_pane_g3

0x5ff6,	// (0x00061dd4) main_image3_pane_g4_ParamLimits

0x5ff6,	// (0x00061dd4) main_image3_pane_g4

0x0003,

0xf6ee,	// (0x0006b4cc) main_image3_pane_g_ParamLimits

0xf6ee,	// (0x0006b4cc) main_image3_pane_g

0x600f,	// (0x00061ded) main_image3_pane_t1_ParamLimits

0x600f,	// (0x00061ded) main_image3_pane_t1

0x6034,	// (0x00061e12) main_image3_pane_t2_ParamLimits

0x6034,	// (0x00061e12) main_image3_pane_t2

0x6053,	// (0x00061e31) main_image3_pane_t3_ParamLimits

0x6053,	// (0x00061e31) main_image3_pane_t3

0x0003,

0xf6f7,	// (0x0006b4d5) main_image3_pane_t_ParamLimits

0xf6f7,	// (0x0006b4d5) main_image3_pane_t

0xdbe4,	// (0x000699c2) grid_sctrl_middle_pane_cp01_ParamLimits

0xdbe4,	// (0x000699c2) grid_sctrl_middle_pane_cp01

0x60b4,	// (0x00061e92) cell_sctrl_middle_pane_cp01_ParamLimits

0x60b4,	// (0x00061e92) cell_sctrl_middle_pane_cp01

0x60c5,	// (0x00061ea3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x60c5,	// (0x00061ea3) cell_sctrl_middle_pane_cp01_g1

0x1060,	// (0x0005ce3e) main_call4_pane

0x60d2,	// (0x00061eb0) aid_size_button_call4_ParamLimits

0x60d2,	// (0x00061eb0) aid_size_button_call4

0x6108,	// (0x00061ee6) call4_windows_pane_ParamLimits

0x6108,	// (0x00061ee6) call4_windows_pane

0x611d,	// (0x00061efb) grid_call4_button_pane_ParamLimits

0x611d,	// (0x00061efb) grid_call4_button_pane

0x614b,	// (0x00061f29) call4_windows_conf_pane

0x6162,	// (0x00061f40) popup_call4_audio_first_window_ParamLimits

0x6162,	// (0x00061f40) popup_call4_audio_first_window

0x61b2,	// (0x00061f90) popup_call4_audio_second_window_ParamLimits

0x61b2,	// (0x00061f90) popup_call4_audio_second_window

0x61cb,	// (0x00061fa9) popup_call4_audio_wait_window_ParamLimits

0x61cb,	// (0x00061fa9) popup_call4_audio_wait_window

0x61d9,	// (0x00061fb7) cell_call4_button_pane_ParamLimits

0x61d9,	// (0x00061fb7) cell_call4_button_pane

0x61fc,	// (0x00061fda) bg_button_pane_cp09_ParamLimits

0x61fc,	// (0x00061fda) bg_button_pane_cp09

0x6208,	// (0x00061fe6) cell_call4_button_pane_g1_ParamLimits

0x6208,	// (0x00061fe6) cell_call4_button_pane_g1

0x6215,	// (0x00061ff3) cell_call4_button_pane_t1_ParamLimits

0x6215,	// (0x00061ff3) cell_call4_button_pane_t1

0xd6a2,	// (0x00069480) popup_call4_audio_conf_window_ParamLimits

0xd6a2,	// (0x00069480) popup_call4_audio_conf_window

0x53c5,	// (0x000611a3) mup3_progress_pane_t1_ParamLimits

0x53e4,	// (0x000611c2) mup3_progress_pane_t2_ParamLimits

0xd02a,	// (0x00068e08) mup3_progress_pane_t3_ParamLimits

0xf634,	// (0x0006b412) mup3_progress_pane_t_ParamLimits

0xd047,	// (0x00068e25) mup_progress_pane_cp03_ParamLimits

0x5914,	// (0x000616f2) mup3_control_keys_pane_g4_copy1

0x5e4b,	// (0x00061c29) mp4_rocker2_pane_ParamLimits

0x5e4b,	// (0x00061c29) mp4_rocker2_pane

0xd6b6,	// (0x00069494) mp4_rocker2_pane_g1

0xd6be,	// (0x0006949c) mp4_rocker2_pane_g2

0x6259,	// (0x00062037) mp4_rocker2_pane_g3

0x6261,	// (0x0006203f) mp4_rocker2_pane_g4

0x6269,	// (0x00062047) mp4_rocker2_pane_g5

0x0004,

0xf700,	// (0x0006b4de) mp4_rocker2_pane_g

0x1060,	// (0x0005ce3e) main_camera4_pane

0x1060,	// (0x0005ce3e) main_video4_pane

0x5b6d,	// (0x0006194b) main_video_tele_dialer_pane_t1_ParamLimits

0x5b6d,	// (0x0006194b) main_video_tele_dialer_pane_t1

0x5b7f,	// (0x0006195d) main_video_tele_dialer_pane_t2_ParamLimits

0x5b7f,	// (0x0006195d) main_video_tele_dialer_pane_t2

0x0001,

0xf6bb,	// (0x0006b499) main_video_tele_dialer_pane_t_ParamLimits

0xf6bb,	// (0x0006b499) main_video_tele_dialer_pane_t

0x6289,	// (0x00062067) cam4_autofocus_pane_ParamLimits

0x6289,	// (0x00062067) cam4_autofocus_pane

0x62a3,	// (0x00062081) cam4_image_uncrop_pane_ParamLimits

0x62a3,	// (0x00062081) cam4_image_uncrop_pane

0x62ba,	// (0x00062098) cam4_indicators_pane_ParamLimits

0x62ba,	// (0x00062098) cam4_indicators_pane

0x62d6,	// (0x000620b4) main_camera4_pane_g1_ParamLimits

0x62d6,	// (0x000620b4) main_camera4_pane_g1

0x62e2,	// (0x000620c0) main_camera4_pane_g2_ParamLimits

0x62e2,	// (0x000620c0) main_camera4_pane_g2

0x62e2,	// (0x000620c0) main_camera4_pane_g3_ParamLimits

0x62e2,	// (0x000620c0) main_camera4_pane_g3

0x62ee,	// (0x000620cc) main_camera4_pane_g4_ParamLimits

0x62ee,	// (0x000620cc) main_camera4_pane_g4

0x62fa,	// (0x000620d8) main_camera4_pane_g5_ParamLimits

0x62fa,	// (0x000620d8) main_camera4_pane_g5

0x0005,

0xf70b,	// (0x0006b4e9) main_camera4_pane_g_ParamLimits

0xf70b,	// (0x0006b4e9) main_camera4_pane_g

0x6314,	// (0x000620f2) main_camera4_pane_t1_ParamLimits

0x6314,	// (0x000620f2) main_camera4_pane_t1

0x635c,	// (0x0006213a) bg_tb_trans_pane_cp06

0x6372,	// (0x00062150) cam4_indicators_pane_g1

0x6383,	// (0x00062161) cam4_indicators_pane_g2

0x0002,

0xf726,	// (0x0006b504) cam4_indicators_pane_g

0x639b,	// (0x00062179) cam4_indicators_pane_t1

0x63c5,	// (0x000621a3) main_video4_pane_g1_ParamLimits

0x63c5,	// (0x000621a3) main_video4_pane_g1

0x63d1,	// (0x000621af) main_video4_pane_g2_ParamLimits

0x63d1,	// (0x000621af) main_video4_pane_g2

0x63dd,	// (0x000621bb) main_video4_pane_g3_ParamLimits

0x63dd,	// (0x000621bb) main_video4_pane_g3

0x63e9,	// (0x000621c7) main_video4_pane_g4_ParamLimits

0x63e9,	// (0x000621c7) main_video4_pane_g4

0x0004,

0xf72d,	// (0x0006b50b) main_video4_pane_g_ParamLimits

0xf72d,	// (0x0006b50b) main_video4_pane_g

0x6409,	// (0x000621e7) vid4_indicators_pane_ParamLimits

0x6409,	// (0x000621e7) vid4_indicators_pane

0x6428,	// (0x00062206) video4_image_uncrop_cif_pane_ParamLimits

0x6428,	// (0x00062206) video4_image_uncrop_cif_pane

0x6437,	// (0x00062215) video4_image_uncrop_nhd_pane_ParamLimits

0x6437,	// (0x00062215) video4_image_uncrop_nhd_pane

0x62a3,	// (0x00062081) video4_image_uncrop_vga_pane_ParamLimits

0x62a3,	// (0x00062081) video4_image_uncrop_vga_pane

0x428e,	// (0x0006006c) bg_tb_trans_pane_cp07

0x644c,	// (0x0006222a) vid4_indicators_pane_g1

0x6460,	// (0x0006223e) vid4_indicators_pane_g2

0x6474,	// (0x00062252) vid4_indicators_pane_g3

0x0004,

0xf738,	// (0x0006b516) vid4_indicators_pane_g

0x64a1,	// (0x0006227f) vid4_indicators_pane_t1

0x64b8,	// (0x00062296) cam4_autofocus_pane_g1

0x64c0,	// (0x0006229e) cam4_autofocus_pane_g2

0x64c8,	// (0x000622a6) cam4_autofocus_pane_g3

0x0002,

0xf743,	// (0x0006b521) cam4_autofocus_pane_g

0x64d0,	// (0x000622ae) cam4_autofocus_pane_g3_copy1

0x5b9f,	// (0x0006197d) video_down_pane_cp_t1

0x5bad,	// (0x0006198b) video_down_pane_cp_t2

0x0001,

0xf6c0,	// (0x0006b49e) video_down_pane_cp_t

0x1046,	// (0x0005ce24) popup_vitu2_window_ParamLimits

0x1046,	// (0x0005ce24) popup_vitu2_window

0x64d8,	// (0x000622b6) aid_size_cell2_itu2_ParamLimits

0x64d8,	// (0x000622b6) aid_size_cell2_itu2

0x64fa,	// (0x000622d8) aid_size_cell_itu2_ParamLimits

0x64fa,	// (0x000622d8) aid_size_cell_itu2

0x653e,	// (0x0006231c) bg_popup_window_pane_cp09_ParamLimits

0x653e,	// (0x0006231c) bg_popup_window_pane_cp09

0x654c,	// (0x0006232a) field_vitu2_entry_pane_ParamLimits

0x654c,	// (0x0006232a) field_vitu2_entry_pane

0x656c,	// (0x0006234a) grid_vitu2_function_pane_ParamLimits

0x656c,	// (0x0006234a) grid_vitu2_function_pane

0x65b0,	// (0x0006238e) grid_vitu2_itu_pane_ParamLimits

0x65b0,	// (0x0006238e) grid_vitu2_itu_pane

0x662a,	// (0x00062408) cell_vitu2_itu_pane_ParamLimits

0x662a,	// (0x00062408) cell_vitu2_itu_pane

0x6643,	// (0x00062421) cell_vitu2_function_pane_ParamLimits

0x6643,	// (0x00062421) cell_vitu2_function_pane

0xd6c6,	// (0x000694a4) bg_popup_call_pane_cp08_ParamLimits

0xd6c6,	// (0x000694a4) bg_popup_call_pane_cp08

0xd6dd,	// (0x000694bb) field_vitu2_entry_pane_g1

0xd6e9,	// (0x000694c7) field_vitu2_entry_pane_g2

0x0002,

0x0711,	// (0x0005c4ef) field_vitu2_entry_pane_g

0x6684,	// (0x00062462) field_vitu2_entry_pane_t1_ParamLimits

0x6684,	// (0x00062462) field_vitu2_entry_pane_t1

0x9f11,	// (0x00065cef) field_vitu2_entry_pane_t2_ParamLimits

0x9f11,	// (0x00065cef) field_vitu2_entry_pane_t2

0x0001,

0xf74a,	// (0x0006b528) field_vitu2_entry_pane_t_ParamLimits

0xf74a,	// (0x0006b528) field_vitu2_entry_pane_t

0x66b6,	// (0x00062494) bg_button_pane_cp010_ParamLimits

0x66b6,	// (0x00062494) bg_button_pane_cp010

0x66c4,	// (0x000624a2) cell_vitu2_itu_pane_g1

0x66e4,	// (0x000624c2) cell_vitu2_itu_pane_t1_ParamLimits

0x66e4,	// (0x000624c2) cell_vitu2_itu_pane_t1

0x0cb5,	// (0x0005ca93) cell_vitu2_itu_pane_t2_ParamLimits

0x0cb5,	// (0x0005ca93) cell_vitu2_itu_pane_t2

0x0002,

0xf754,	// (0x0006b532) cell_vitu2_itu_pane_t_ParamLimits

0xf754,	// (0x0006b532) cell_vitu2_itu_pane_t

0x428e,	// (0x0006006c) bg_button_pane_cp011

0x6730,	// (0x0006250e) cell_vitu2_function_pane_g1

0x1060,	// (0x0005ce3e) main_myfav_hc_pane

0x6095,	// (0x00061e73) popup_image3_note_pane_ParamLimits

0x6095,	// (0x00061e73) popup_image3_note_pane

0x60a3,	// (0x00061e81) popup_image3_tool_bar_pane_ParamLimits

0x60a3,	// (0x00061e81) popup_image3_tool_bar_pane

0x0d2b,	// (0x0005cb09) cell_vitu2_itu_pane_t3_ParamLimits

0x0d2b,	// (0x0005cb09) cell_vitu2_itu_pane_t3

0x9bf6,	// (0x000659d4) bg_popup_trans_pane

0xd70b,	// (0x000694e9) grid_image3_tool_bar_pane

0xd715,	// (0x000694f3) bg_popup_trans_pane_g1

0xad35,	// (0x00066b13) bg_popup_trans_pane_g2

0xd71d,	// (0x000694fb) bg_popup_trans_pane_g3

0xd725,	// (0x00069503) bg_popup_trans_pane_g4

0xd72d,	// (0x0006950b) bg_popup_trans_pane_g5

0xd735,	// (0x00069513) bg_popup_trans_pane_g6

0xd73d,	// (0x0006951b) bg_popup_trans_pane_g7

0xd745,	// (0x00069523) bg_popup_trans_pane_g8

0xad15,	// (0x00066af3) bg_popup_trans_pane_g9

0x0008,

0xf75b,	// (0x0006b539) bg_popup_trans_pane_g

0xd74d,	// (0x0006952b) cell_image3_tool_bar_pane_ParamLimits

0xd74d,	// (0x0006952b) cell_image3_tool_bar_pane

0xcd6a,	// (0x00068b48) cell_image3_tool_bar_pane_g1

0x9bf6,	// (0x000659d4) bg_popup_trans_pane_cp1

0xd761,	// (0x0006953f) popup_image3_note_pane_t1

0xd76f,	// (0x0006954d) popup_image3_note_pane_t2

0xd77d,	// (0x0006955b) popup_image3_note_pane_t3

0x0002,

0x073c,	// (0x0005c51a) popup_image3_note_pane_t

0xd78b,	// (0x00069569) popup_image3_note_pane_t3_copy1

0x6744,	// (0x00062522) bg_myfav_hc_instruction_pane_ParamLimits

0x6744,	// (0x00062522) bg_myfav_hc_instruction_pane

0x675c,	// (0x0006253a) cell_myfav_contact_pane_ParamLimits

0x675c,	// (0x0006253a) cell_myfav_contact_pane

0x6776,	// (0x00062554) cell_myfav_contact_pane_cp1_ParamLimits

0x6776,	// (0x00062554) cell_myfav_contact_pane_cp1

0x678e,	// (0x0006256c) cell_myfav_contact_pane_cp2_ParamLimits

0x678e,	// (0x0006256c) cell_myfav_contact_pane_cp2

0x67a6,	// (0x00062584) cell_myfav_contact_pane_cp3_ParamLimits

0x67a6,	// (0x00062584) cell_myfav_contact_pane_cp3

0x67bd,	// (0x0006259b) cell_myfav_contact_pane_cp4_ParamLimits

0x67bd,	// (0x0006259b) cell_myfav_contact_pane_cp4

0x67d3,	// (0x000625b1) cell_myfav_contact_pane_cp5_ParamLimits

0x67d3,	// (0x000625b1) cell_myfav_contact_pane_cp5

0x67e7,	// (0x000625c5) cell_myfav_contact_pane_cp6_ParamLimits

0x67e7,	// (0x000625c5) cell_myfav_contact_pane_cp6

0x67fb,	// (0x000625d9) cell_myfav_contact_pane_cp7_ParamLimits

0x67fb,	// (0x000625d9) cell_myfav_contact_pane_cp7

0xd799,	// (0x00069577) listscroll_gen_pane_cp05

0x6813,	// (0x000625f1) main_myfav_hc_pane_g1_ParamLimits

0x6813,	// (0x000625f1) main_myfav_hc_pane_g1

0x6829,	// (0x00062607) main_myfav_hc_pane_g2_ParamLimits

0x6829,	// (0x00062607) main_myfav_hc_pane_g2

0x0002,

0xf76e,	// (0x0006b54c) main_myfav_hc_pane_g_ParamLimits

0xf76e,	// (0x0006b54c) main_myfav_hc_pane_g

0x6859,	// (0x00062637) main_myfav_hc_pane_t1_ParamLimits

0x6859,	// (0x00062637) main_myfav_hc_pane_t1

0xd7a2,	// (0x00069580) main_myfav_hc_pane_t2_ParamLimits

0xd7a2,	// (0x00069580) main_myfav_hc_pane_t2

0xd7b4,	// (0x00069592) main_myfav_hc_pane_t3_ParamLimits

0xd7b4,	// (0x00069592) main_myfav_hc_pane_t3

0x6870,	// (0x0006264e) main_myfav_hc_pane_t4_ParamLimits

0x6870,	// (0x0006264e) main_myfav_hc_pane_t4

0x0004,

0xf775,	// (0x0006b553) main_myfav_hc_pane_t_ParamLimits

0xf775,	// (0x0006b553) main_myfav_hc_pane_t

0xcd6a,	// (0x00068b48) bg_myfav_hc_instruction_pane_g1

0xd7c6,	// (0x000695a4) cell_myfav_contact_pane_g1_ParamLimits

0xd7c6,	// (0x000695a4) cell_myfav_contact_pane_g1

0xd7c6,	// (0x000695a4) cell_myfav_contact_pane_g2_ParamLimits

0xd7c6,	// (0x000695a4) cell_myfav_contact_pane_g2

0xd7d2,	// (0x000695b0) cell_myfav_contact_pane_g3_ParamLimits

0xd7d2,	// (0x000695b0) cell_myfav_contact_pane_g3

0xd014,	// (0x00068df2) cell_myfav_contact_pane_g4_ParamLimits

0xd014,	// (0x00068df2) cell_myfav_contact_pane_g4

0xd7df,	// (0x000695bd) cell_myfav_contact_pane_g5_ParamLimits

0xd7df,	// (0x000695bd) cell_myfav_contact_pane_g5

0x0004,

0x0755,	// (0x0005c533) cell_myfav_contact_pane_g_ParamLimits

0x0755,	// (0x0005c533) cell_myfav_contact_pane_g

0x6841,	// (0x0006261f) main_myfav_hc_pane_g3_ParamLimits

0x6841,	// (0x0006261f) main_myfav_hc_pane_g3

0x0f4f,	// (0x0005cd2d) popup_adpt_find_window

0x689a,	// (0x00062678) afind_page_pane_ParamLimits

0x689a,	// (0x00062678) afind_page_pane

0x68a7,	// (0x00062685) aid_size_cell_afind_ParamLimits

0x68a7,	// (0x00062685) aid_size_cell_afind

0x68c1,	// (0x0006269f) bg_popup_sub_pane_cp09_ParamLimits

0x68c1,	// (0x0006269f) bg_popup_sub_pane_cp09

0x68ce,	// (0x000626ac) find_pane_cp01_ParamLimits

0x68ce,	// (0x000626ac) find_pane_cp01

0xd7eb,	// (0x000695c9) grid_afind_control_pane_ParamLimits

0xd7eb,	// (0x000695c9) grid_afind_control_pane

0x68db,	// (0x000626b9) grid_afind_pane_ParamLimits

0x68db,	// (0x000626b9) grid_afind_pane

0x68f5,	// (0x000626d3) cell_afind_pane_ParamLimits

0x68f5,	// (0x000626d3) cell_afind_pane

0xcd6a,	// (0x00068b48) afind_page_pane_g1

0x693d,	// (0x0006271b) afind_page_pane_g2

0x6946,	// (0x00062724) afind_page_pane_g3

0x0002,

0xf780,	// (0x0006b55e) afind_page_pane_g

0x694f,	// (0x0006272d) afind_page_pane_t1

0xd7ff,	// (0x000695dd) cell_afind_grid_control_pane_ParamLimits

0xd7ff,	// (0x000695dd) cell_afind_grid_control_pane

0xd68e,	// (0x0006946c) bg_button_pane_cp69_ParamLimits

0xd68e,	// (0x0006946c) bg_button_pane_cp69

0x696f,	// (0x0006274d) cell_afind_pane_g1_ParamLimits

0x696f,	// (0x0006274d) cell_afind_pane_g1

0x697c,	// (0x0006275a) cell_afind_pane_t1_ParamLimits

0x697c,	// (0x0006275a) cell_afind_pane_t1

0xab10,	// (0x000668ee) bg_button_pane_cp72

0xd80e,	// (0x000695ec) cell_afind_grid_control_pane_g1

0x3e06,	// (0x0005fbe4) aid_image_placing_area_ParamLimits

0x3e06,	// (0x0005fbe4) aid_image_placing_area

0xd34f,	// (0x0006912d) field_vitu_entry_pane_g1_ParamLimits

0xd34f,	// (0x0006912d) field_vitu_entry_pane_g1

0xd35b,	// (0x00069139) field_vitu_entry_pane_g2_ParamLimits

0xd35b,	// (0x00069139) field_vitu_entry_pane_g2

0x0001,

0x060d,	// (0x0005c3eb) field_vitu_entry_pane_g_ParamLimits

0x060d,	// (0x0005c3eb) field_vitu_entry_pane_g

0x599d,	// (0x0006177b) cell_vitu_itu_pane_g1_ParamLimits

0x59df,	// (0x000617bd) cell_vitu_itu_pane_t3_ParamLimits

0x59df,	// (0x000617bd) cell_vitu_itu_pane_t3

0xd637,	// (0x00069415) mp4_progress_pane_t1_ParamLimits

0xd650,	// (0x0006942e) mp4_progress_pane_t2_ParamLimits

0x06a6,	// (0x0005c484) mp4_progress_pane_t_ParamLimits

0xd669,	// (0x00069447) mup_progress_pane_cp04_ParamLimits

0x6884,	// (0x00062662) main_myfav_hc_pane_t5_ParamLimits

0x6884,	// (0x00062662) main_myfav_hc_pane_t5

0x0ddd,	// (0x0005cbbb) aid_zoom_text_primary

0x0f4f,	// (0x0005cd2d) popup_adpt_find_window_ParamLimits

0x428e,	// (0x0006006c) main_cam_set_pane

0x62c8,	// (0x000620a6) cam4_zoom_pane_ParamLimits

0x62c8,	// (0x000620a6) cam4_zoom_pane

0x698e,	// (0x0006276c) main_cam_set_pane_g1_ParamLimits

0x698e,	// (0x0006276c) main_cam_set_pane_g1

0x699c,	// (0x0006277a) main_cam_set_pane_g2_ParamLimits

0x699c,	// (0x0006277a) main_cam_set_pane_g2

0x0001,

0xf787,	// (0x0006b565) main_cam_set_pane_g_ParamLimits

0xf787,	// (0x0006b565) main_cam_set_pane_g

0x69a8,	// (0x00062786) main_cam_set_pane_t1_ParamLimits

0x69a8,	// (0x00062786) main_cam_set_pane_t1

0x69c4,	// (0x000627a2) main_cset_listscroll_pane_ParamLimits

0x69c4,	// (0x000627a2) main_cset_listscroll_pane

0x69ef,	// (0x000627cd) main_cset_slider_pane_ParamLimits

0x69ef,	// (0x000627cd) main_cset_slider_pane

0xd81f,	// (0x000695fd) main_cset_list_pane_ParamLimits

0xd81f,	// (0x000695fd) main_cset_list_pane

0xd82f,	// (0x0006960d) scroll_pane_cp028

0x6a0e,	// (0x000627ec) aid_area_touch_slider

0x6a2a,	// (0x00062808) cset_slider_pane

0x6a54,	// (0x00062832) main_cset_slider_pane_g1

0x6a69,	// (0x00062847) main_cset_slider_pane_g2

0x0011,

0xf78c,	// (0x0006b56a) main_cset_slider_pane_g

0xd868,	// (0x00069646) main_cset_slider_pane_t1

0x6b2f,	// (0x0006290d) main_cset_slider_pane_t2

0x6b49,	// (0x00062927) main_cset_slider_pane_t3

0x6b63,	// (0x00062941) main_cset_slider_pane_t4

0x6b81,	// (0x0006295f) main_cset_slider_pane_t5

0x6b9f,	// (0x0006297d) main_cset_slider_pane_t6

0x6bb6,	// (0x00062994) main_cset_slider_pane_t7

0x000e,

0xf7b1,	// (0x0006b58f) main_cset_slider_pane_t

0x6cc4,	// (0x00062aa2) cset_list_set_pane_ParamLimits

0x6cc4,	// (0x00062aa2) cset_list_set_pane

0x6cdd,	// (0x00062abb) aid_position_infowindow_above

0x6ce5,	// (0x00062ac3) aid_position_infowindow_below

0x6ced,	// (0x00062acb) cset_list_set_pane_g1_ParamLimits

0x6ced,	// (0x00062acb) cset_list_set_pane_g1

0x6cf9,	// (0x00062ad7) cset_list_set_pane_g3_ParamLimits

0x6cf9,	// (0x00062ad7) cset_list_set_pane_g3

0x0001,

0xf7d0,	// (0x0006b5ae) cset_list_set_pane_g_ParamLimits

0xf7d0,	// (0x0006b5ae) cset_list_set_pane_g

0x6d08,	// (0x00062ae6) cset_list_set_pane_t1_ParamLimits

0x6d08,	// (0x00062ae6) cset_list_set_pane_t1

0xa579,	// (0x00066357) list_highlight_pane_cp021_ParamLimits

0xa579,	// (0x00066357) list_highlight_pane_cp021

0xb653,	// (0x00067431) cset_slider_pane_g1

0xb665,	// (0x00067443) cset_slider_pane_g2

0xb65c,	// (0x0006743a) cset_slider_pane_g3

0x0002,

0x07b5,	// (0x0005c593) cset_slider_pane_g

0x6d1d,	// (0x00062afb) aid_area_touch_cam4_zoom

0x6d25,	// (0x00062b03) cam4_zoom_cont_pane

0x6d2d,	// (0x00062b0b) cam4_zoom_pane_g1

0x6d35,	// (0x00062b13) cam4_zoom_pane_g2

0x6d3d,	// (0x00062b1b) cam4_zoom_pane_g3

0x0002,

0xf7d5,	// (0x0006b5b3) cam4_zoom_pane_g

0x6d45,	// (0x00062b23) cam4_zoom_cont_pane_g1

0x6d4e,	// (0x00062b2c) cam4_zoom_cont_pane_g2

0x6d57,	// (0x00062b35) cam4_zoom_cont_pane_g3

0x0002,

0xf7dc,	// (0x0006b5ba) cam4_zoom_cont_pane_g

0x60ec,	// (0x00061eca) call4_image_pane_ParamLimits

0x60ec,	// (0x00061eca) call4_image_pane

0x614b,	// (0x00061f29) call4_windows_conf_pane_ParamLimits

0x6190,	// (0x00061f6e) popup_call4_audio_in_window_ParamLimits

0x6190,	// (0x00061f6e) popup_call4_audio_in_window

0x9bf6,	// (0x000659d4) bg_popup_call2_act_pane_cp02

0xd69a,	// (0x00069478) call4_list_conf_pane

0xcd6a,	// (0x00068b48) call4_image_pane_g1

0xcd6a,	// (0x00068b48) call4_image_pane_g2

0x0001,

0x04ce,	// (0x0005c2ac) call4_image_pane_g

0xd920,	// (0x000696fe) list_single_graphic_popup_conf4_pane_ParamLimits

0xd920,	// (0x000696fe) list_single_graphic_popup_conf4_pane

0x9bf6,	// (0x000659d4) list_highlight_pane_cp022

0xd933,	// (0x00069711) list_single_graphic_popup_conf4_pane_g1

0xb24f,	// (0x0006702d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0x07ca,	// (0x0005c5a8) list_single_graphic_popup_conf4_pane_g

0xd93b,	// (0x00069719) list_single_graphic_popup_conf4_pane_t1

0x2042,	// (0x0005de20) popup_vtel_slider_window_ParamLimits

0x2042,	// (0x0005de20) popup_vtel_slider_window

0xd67c,	// (0x0006945a) dialer2_ne_pane_t2_ParamLimits

0xd67c,	// (0x0006945a) dialer2_ne_pane_t2

0x0001,

0xf6e4,	// (0x0006b4c2) dialer2_ne_pane_t_ParamLimits

0xf6e4,	// (0x0006b4c2) dialer2_ne_pane_t

0xa579,	// (0x00066357) bg_popup_sub_pane_cp010_ParamLimits

0xa579,	// (0x00066357) bg_popup_sub_pane_cp010

0x6d60,	// (0x00062b3e) popup_vtel_slider_window_g1_ParamLimits

0x6d60,	// (0x00062b3e) popup_vtel_slider_window_g1

0x6d6c,	// (0x00062b4a) popup_vtel_slider_window_g2_ParamLimits

0x6d6c,	// (0x00062b4a) popup_vtel_slider_window_g2

0x0003,

0xf7e3,	// (0x0006b5c1) popup_vtel_slider_window_g_ParamLimits

0xf7e3,	// (0x0006b5c1) popup_vtel_slider_window_g

0x6db4,	// (0x00062b92) vtel_slider_pane_ParamLimits

0x6db4,	// (0x00062b92) vtel_slider_pane

0x6dc3,	// (0x00062ba1) vtel_slider_pane_g1_ParamLimits

0x6dc3,	// (0x00062ba1) vtel_slider_pane_g1

0x6dd0,	// (0x00062bae) vtel_slider_pane_g2_ParamLimits

0x6dd0,	// (0x00062bae) vtel_slider_pane_g2

0x6ddd,	// (0x00062bbb) vtel_slider_pane_g3_ParamLimits

0x6ddd,	// (0x00062bbb) vtel_slider_pane_g3

0x6dc3,	// (0x00062ba1) vtel_slider_pane_g4_ParamLimits

0x6dc3,	// (0x00062ba1) vtel_slider_pane_g4

0x6dea,	// (0x00062bc8) vtel_slider_pane_g5_ParamLimits

0x6dea,	// (0x00062bc8) vtel_slider_pane_g5

0x0004,

0xf7ec,	// (0x0006b5ca) vtel_slider_pane_g_ParamLimits

0xf7ec,	// (0x0006b5ca) vtel_slider_pane_g

0x428e,	// (0x0006006c) main_gallery2_pane

0x6520,	// (0x000622fe) aid_size_row_itut2_dropdow_list_ParamLimits

0x6520,	// (0x000622fe) aid_size_row_itut2_dropdow_list

0x658e,	// (0x0006236c) grid_vitu2_function_top_pane_ParamLimits

0x658e,	// (0x0006236c) grid_vitu2_function_top_pane

0x65e8,	// (0x000623c6) popup_vitu2_dropdown_list_window_ParamLimits

0x65e8,	// (0x000623c6) popup_vitu2_dropdown_list_window

0x6608,	// (0x000623e6) popup_vitu2_match_list_window

0x6e05,	// (0x00062be3) cell_vitu2_function_top_pane_ParamLimits

0x6e05,	// (0x00062be3) cell_vitu2_function_top_pane

0x6e1f,	// (0x00062bfd) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e1f,	// (0x00062bfd) cell_vitu2_function_top_pane_cp01

0x6e3b,	// (0x00062c19) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e3b,	// (0x00062c19) cell_vitu2_function_top_wide_pane

0x428e,	// (0x0006006c) bg_button_pane_cp012

0x6e57,	// (0x00062c35) cell_vitu2_function_top_pane_g1

0x6e6b,	// (0x00062c49) bg_button_pane_cp013_ParamLimits

0x6e6b,	// (0x00062c49) bg_button_pane_cp013

0x6e87,	// (0x00062c65) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e87,	// (0x00062c65) cell_vitu2_function_top_wide_pane_g1

0x1046,	// (0x0005ce24) bg_popup_sub_pane_cp20

0x6e9f,	// (0x00062c7d) list_vitu2_match_list_pane

0xd715,	// (0x000694f3) bg_popup_sub_pane_cp20_g1

0xd71d,	// (0x000694fb) bg_popup_sub_pane_cp20_g2

0xad35,	// (0x00066b13) bg_popup_sub_pane_cp20_g3

0xd725,	// (0x00069503) bg_popup_sub_pane_cp20_g4

0xad15,	// (0x00066af3) bg_popup_sub_pane_cp20_g5

0xd951,	// (0x0006972f) bg_popup_sub_pane_cp20_g6

0xd735,	// (0x00069513) bg_popup_sub_pane_cp20_g7

0xd73d,	// (0x0006951b) bg_popup_sub_pane_cp20_g8

0xd745,	// (0x00069523) bg_popup_sub_pane_cp20_g9

0x0008,

0xf7f7,	// (0x0006b5d5) bg_popup_sub_pane_cp20_g

0x6eb7,	// (0x00062c95) list_vitu2_match_list_item_pane_ParamLimits

0x6eb7,	// (0x00062c95) list_vitu2_match_list_item_pane

0x6ec9,	// (0x00062ca7) list_vitu2_match_list_item_pane_t1

0x1060,	// (0x0005ce3e) bg_popup_sub_pane_cp21

0x6f1f,	// (0x00062cfd) grid_vitu2_dropdown_list_pane

0x6f27,	// (0x00062d05) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f27,	// (0x00062d05) cell_vitu2_dropdown_list_char_pane

0x6f48,	// (0x00062d26) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f48,	// (0x00062d26) cell_vitu2_dropdown_list_ctrl_pane

0xd959,	// (0x00069737) cell_vitu2_dropdown_list_char_pane_g1

0xd962,	// (0x00069740) cell_vitu2_dropdown_list_char_pane_g2

0xd96b,	// (0x00069749) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x0800,	// (0x0005c5de) cell_vitu2_dropdown_list_char_pane_g

0x6f74,	// (0x00062d52) cell_vitu2_dropdown_list_char_pane_t1

0x6f82,	// (0x00062d60) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f82,	// (0x00062d60) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f92,	// (0x00062d70) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f92,	// (0x00062d70) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6fa3,	// (0x00062d81) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6fa3,	// (0x00062d81) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6fb3,	// (0x00062d91) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6fb3,	// (0x00062d91) cell_vitu2_dropdown_list_ctrl_pane_g4

0x635c,	// (0x0006213a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x635c,	// (0x0006213a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf814,	// (0x0006b5f2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf814,	// (0x0006b5f2) cell_vitu2_dropdown_list_ctrl_pane_g

0x6fcf,	// (0x00062dad) aid_size_cell_gallery2_ParamLimits

0x6fcf,	// (0x00062dad) aid_size_cell_gallery2

0x6fe9,	// (0x00062dc7) grid_gallery2_pane_ParamLimits

0x6fe9,	// (0x00062dc7) grid_gallery2_pane

0x7000,	// (0x00062dde) scroll_pane_cp029_ParamLimits

0x7000,	// (0x00062dde) scroll_pane_cp029

0x7010,	// (0x00062dee) cell_gallery2_pane_ParamLimits

0x7010,	// (0x00062dee) cell_gallery2_pane

0xd974,	// (0x00069752) cell_gallery2_pane_g2

0x7065,	// (0x00062e43) cell_gallery2_pane_g3

0xd97c,	// (0x0006975a) cell_gallery2_pane_g4

0xd984,	// (0x00069762) cell_gallery2_pane_g5

0xaabe,	// (0x0006689c) grid_highlight_pane_cp10

0x6608,	// (0x000623e6) popup_vitu2_match_list_window_ParamLimits

0x661a,	// (0x000623f8) popup_vitu2_query_window_ParamLimits

0x661a,	// (0x000623f8) popup_vitu2_query_window

0x1060,	// (0x0005ce3e) bg_vitu2_candi_button_pane

0xd959,	// (0x00069737) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd962,	// (0x00069740) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd96b,	// (0x00069749) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x706d,	// (0x00062e4b) bg_button_pane_cp015

0x707f,	// (0x00062e5d) bg_button_pane_cp016

0x7092,	// (0x00062e70) bg_button_pane_cp017

0xc962,	// (0x00068740) bg_popup_sub_pane_cp22

0xd98c,	// (0x0006976a) popup_vitu2_query_window_g1

0x70d7,	// (0x00062eb5) popup_vitu2_query_window_g2

0x0002,

0xf81f,	// (0x0006b5fd) popup_vitu2_query_window_g

0x70f4,	// (0x00062ed2) popup_vitu2_query_window_t1_ParamLimits

0x70f4,	// (0x00062ed2) popup_vitu2_query_window_t1

0x7127,	// (0x00062f05) popup_vitu2_query_window_t2_ParamLimits

0x7127,	// (0x00062f05) popup_vitu2_query_window_t2

0x7139,	// (0x00062f17) popup_vitu2_query_window_t3_ParamLimits

0x7139,	// (0x00062f17) popup_vitu2_query_window_t3

0x7161,	// (0x00062f3f) popup_vitu2_query_window_t4_ParamLimits

0x7161,	// (0x00062f3f) popup_vitu2_query_window_t4

0x7182,	// (0x00062f60) popup_vitu2_query_window_t5_ParamLimits

0x7182,	// (0x00062f60) popup_vitu2_query_window_t5

0x0006,

0xf826,	// (0x0006b604) popup_vitu2_query_window_t_ParamLimits

0xf826,	// (0x0006b604) popup_vitu2_query_window_t

0xd817,	// (0x000695f5) main_cset_text_pane

0x6a0e,	// (0x000627ec) aid_area_touch_slider_ParamLimits

0x6a2a,	// (0x00062808) cset_slider_pane_ParamLimits

0x6a54,	// (0x00062832) main_cset_slider_pane_g1_ParamLimits

0x6a69,	// (0x00062847) main_cset_slider_pane_g2_ParamLimits

0xd838,	// (0x00069616) main_cset_slider_pane_g3_ParamLimits

0xd838,	// (0x00069616) main_cset_slider_pane_g3

0x6a7e,	// (0x0006285c) main_cset_slider_pane_g4_ParamLimits

0x6a7e,	// (0x0006285c) main_cset_slider_pane_g4

0x6a8d,	// (0x0006286b) main_cset_slider_pane_g5_ParamLimits

0x6a8d,	// (0x0006286b) main_cset_slider_pane_g5

0x6a9b,	// (0x00062879) main_cset_slider_pane_g6_ParamLimits

0x6a9b,	// (0x00062879) main_cset_slider_pane_g6

0xf78c,	// (0x0006b56a) main_cset_slider_pane_g_ParamLimits

0xd868,	// (0x00069646) main_cset_slider_pane_t1_ParamLimits

0x6b2f,	// (0x0006290d) main_cset_slider_pane_t2_ParamLimits

0x6b49,	// (0x00062927) main_cset_slider_pane_t3_ParamLimits

0x6b63,	// (0x00062941) main_cset_slider_pane_t4_ParamLimits

0x6b81,	// (0x0006295f) main_cset_slider_pane_t5_ParamLimits

0x6b9f,	// (0x0006297d) main_cset_slider_pane_t6_ParamLimits

0x6bb6,	// (0x00062994) main_cset_slider_pane_t7_ParamLimits

0x6be4,	// (0x000629c2) main_cset_slider_pane_t8_ParamLimits

0x6be4,	// (0x000629c2) main_cset_slider_pane_t8

0x6c0c,	// (0x000629ea) main_cset_slider_pane_t9_ParamLimits

0x6c0c,	// (0x000629ea) main_cset_slider_pane_t9

0x6c34,	// (0x00062a12) main_cset_slider_pane_t10_ParamLimits

0x6c34,	// (0x00062a12) main_cset_slider_pane_t10

0x6c5c,	// (0x00062a3a) main_cset_slider_pane_t11_ParamLimits

0x6c5c,	// (0x00062a3a) main_cset_slider_pane_t11

0x6c86,	// (0x00062a64) main_cset_slider_pane_t12_ParamLimits

0x6c86,	// (0x00062a64) main_cset_slider_pane_t12

0x6ca5,	// (0x00062a83) main_cset_slider_pane_t13_ParamLimits

0x6ca5,	// (0x00062a83) main_cset_slider_pane_t13

0xf7b1,	// (0x0006b58f) main_cset_slider_pane_t_ParamLimits

0x9bf6,	// (0x000659d4) bg_popup_sub_pane_cp011

0xd998,	// (0x00069776) main_cset_text_pane_g1

0xd9a0,	// (0x0006977e) main_cset_text_pane_t1

0xd9ae,	// (0x0006978c) main_cset_text_pane_t2

0xd9bc,	// (0x0006979a) main_cset_text_pane_t3

0xd9ca,	// (0x000697a8) main_cset_text_pane_t4

0xd9d8,	// (0x000697b6) main_cset_text_pane_t5

0xd9e6,	// (0x000697c4) main_cset_text_pane_t6

0xd9f4,	// (0x000697d2) main_cset_text_pane_t7

0x0006,

0x0828,	// (0x0005c606) main_cset_text_pane_t

0x1060,	// (0x0005ce3e) main_cam4_burst_pane

0x1060,	// (0x0005ce3e) main_cam5_pane

0x695d,	// (0x0006273b) bg_button_pane_cp019

0x6966,	// (0x00062744) bg_button_pane_cp020

0xd844,	// (0x00069622) main_cset_slider_pane_g7_ParamLimits

0xd844,	// (0x00069622) main_cset_slider_pane_g7

0xd850,	// (0x0006962e) main_cset_slider_pane_g8_ParamLimits

0xd850,	// (0x0006962e) main_cset_slider_pane_g8

0x6aaf,	// (0x0006288d) main_cset_slider_pane_g9_ParamLimits

0x6aaf,	// (0x0006288d) main_cset_slider_pane_g9

0x6abb,	// (0x00062899) main_cset_slider_pane_g10_ParamLimits

0x6abb,	// (0x00062899) main_cset_slider_pane_g10

0x6ac7,	// (0x000628a5) main_cset_slider_pane_g11_ParamLimits

0x6ac7,	// (0x000628a5) main_cset_slider_pane_g11

0x6ad3,	// (0x000628b1) main_cset_slider_pane_g12_ParamLimits

0x6ad3,	// (0x000628b1) main_cset_slider_pane_g12

0x6adf,	// (0x000628bd) main_cset_slider_pane_g13_ParamLimits

0x6adf,	// (0x000628bd) main_cset_slider_pane_g13

0x6aed,	// (0x000628cb) main_cset_slider_pane_g14_ParamLimits

0x6aed,	// (0x000628cb) main_cset_slider_pane_g14

0x6afb,	// (0x000628d9) main_cset_slider_pane_g15_ParamLimits

0x6afb,	// (0x000628d9) main_cset_slider_pane_g15

0xd896,	// (0x00069674) main_cset_slider_pane_t14_ParamLimits

0xd896,	// (0x00069674) main_cset_slider_pane_t14

0xd8cf,	// (0x000696ad) main_cset_slider_pane_t15_ParamLimits

0xd8cf,	// (0x000696ad) main_cset_slider_pane_t15

0x71f9,	// (0x00062fd7) aid_cam4_burst_size_cell_ParamLimits

0x71f9,	// (0x00062fd7) aid_cam4_burst_size_cell

0x7215,	// (0x00062ff3) grid_cam4_burst_pane_ParamLimits

0x7215,	// (0x00062ff3) grid_cam4_burst_pane

0x7245,	// (0x00063023) linegrid_cam4_burst_pane_ParamLimits

0x7245,	// (0x00063023) linegrid_cam4_burst_pane

0x7265,	// (0x00063043) scroll_pane_cp30_ParamLimits

0x7265,	// (0x00063043) scroll_pane_cp30

0x7271,	// (0x0006304f) cell_cam4_burst_pane_ParamLimits

0x7271,	// (0x0006304f) cell_cam4_burst_pane

0xda02,	// (0x000697e0) linegrid_cam4_burst_pane_g1_ParamLimits

0xda02,	// (0x000697e0) linegrid_cam4_burst_pane_g1

0x72ad,	// (0x0006308b) linegrid_cam4_burst_pane_g2_ParamLimits

0x72ad,	// (0x0006308b) linegrid_cam4_burst_pane_g2

0xda0f,	// (0x000697ed) linegrid_cam4_burst_pane_g3_ParamLimits

0xda0f,	// (0x000697ed) linegrid_cam4_burst_pane_g3

0x0002,

0xf835,	// (0x0006b613) linegrid_cam4_burst_pane_g_ParamLimits

0xf835,	// (0x0006b613) linegrid_cam4_burst_pane_g

0x72be,	// (0x0006309c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x72be,	// (0x0006309c) linegrid_cam4_burst_pane_g3_copy1

0xda1c,	// (0x000697fa) linegrid_cam4_burst_pane_g4_ParamLimits

0xda1c,	// (0x000697fa) linegrid_cam4_burst_pane_g4

0x72d8,	// (0x000630b6) linegrid_cam4_burst_pane_g5_ParamLimits

0x72d8,	// (0x000630b6) linegrid_cam4_burst_pane_g5

0x72e9,	// (0x000630c7) linegrid_cam4_burst_pane_g6_ParamLimits

0x72e9,	// (0x000630c7) linegrid_cam4_burst_pane_g6

0xda29,	// (0x00069807) linegrid_cam4_burst_pane_g7_ParamLimits

0xda29,	// (0x00069807) linegrid_cam4_burst_pane_g7

0x72fa,	// (0x000630d8) cell_cam4_burst_pane_g1

0xda42,	// (0x00069820) main_cam5_pane_t1_ParamLimits

0xda42,	// (0x00069820) main_cam5_pane_t1

0xda54,	// (0x00069832) main_cam5_pane_t2_ParamLimits

0xda54,	// (0x00069832) main_cam5_pane_t2

0xda66,	// (0x00069844) main_cam5_pane_t3_ParamLimits

0xda66,	// (0x00069844) main_cam5_pane_t3

0xda78,	// (0x00069856) main_cam5_pane_t4_ParamLimits

0xda78,	// (0x00069856) main_cam5_pane_t4

0xda90,	// (0x0006986e) main_cam5_pane_t5_ParamLimits

0xda90,	// (0x0006986e) main_cam5_pane_t5

0xdaa4,	// (0x00069882) main_cam5_pane_t6_ParamLimits

0xdaa4,	// (0x00069882) main_cam5_pane_t6

0xdab8,	// (0x00069896) main_cam5_pane_t7_ParamLimits

0xdab8,	// (0x00069896) main_cam5_pane_t7

0xdaca,	// (0x000698a8) main_cam5_pane_t8_ParamLimits

0xdaca,	// (0x000698a8) main_cam5_pane_t8

0xdae6,	// (0x000698c4) main_cam5_pane_t9_ParamLimits

0xdae6,	// (0x000698c4) main_cam5_pane_t9

0xdaf8,	// (0x000698d6) main_cam5_pane_t10_ParamLimits

0xdaf8,	// (0x000698d6) main_cam5_pane_t10

0xdb0a,	// (0x000698e8) main_cam5_pane_t11_ParamLimits

0xdb0a,	// (0x000698e8) main_cam5_pane_t11

0xdb1c,	// (0x000698fa) main_cam5_pane_t12_ParamLimits

0xdb1c,	// (0x000698fa) main_cam5_pane_t12

0xdb31,	// (0x0006990f) main_cam5_pane_t13_ParamLimits

0xdb31,	// (0x0006990f) main_cam5_pane_t13

0x000c,

0x0843,	// (0x0005c621) main_cam5_pane_t_ParamLimits

0x0843,	// (0x0005c621) main_cam5_pane_t

0x1005,	// (0x0005cde3) popup_scut_keymap_window_ParamLimits

0x1005,	// (0x0005cde3) popup_scut_keymap_window

0x730d,	// (0x000630eb) aid_size_cell_brow_shortcut

0xaabe,	// (0x0006689c) bg_popup_window_pane_cp010

0x7319,	// (0x000630f7) grid_scut_pane

0x7325,	// (0x00063103) cell_scut_pane_ParamLimits

0x7325,	// (0x00063103) cell_scut_pane

0x733c,	// (0x0006311a) cell_scut_pane_g1

0xdb4e,	// (0x0006992c) cell_scut_pane_t1

0xdb5d,	// (0x0006993b) cell_scut_pane_t2

0x7345,	// (0x00063123) cell_scut_pane_t3

0x0002,

0xf841,	// (0x0006b61f) cell_scut_pane_t

0x4fee,	// (0x00060dcc) main_mup3_pane_g8_ParamLimits

0x4fee,	// (0x00060dcc) main_mup3_pane_g8

0x652e,	// (0x0006230c) area_vitu2_query_pane_ParamLimits

0x652e,	// (0x0006230c) area_vitu2_query_pane

0x70a5,	// (0x00062e83) input_focus_pane_cp08

0xdb6c,	// (0x0006994a) area_vitu2_query_pane_g1

0x7353,	// (0x00063131) area_vitu2_query_pane_g2

0x0001,

0xf848,	// (0x0006b626) area_vitu2_query_pane_g

0x7364,	// (0x00063142) area_vitu2_query_pane_t1_ParamLimits

0x7364,	// (0x00063142) area_vitu2_query_pane_t1

0x7378,	// (0x00063156) area_vitu2_query_pane_t2_ParamLimits

0x7378,	// (0x00063156) area_vitu2_query_pane_t2

0x738c,	// (0x0006316a) area_vitu2_query_pane_t3_ParamLimits

0x738c,	// (0x0006316a) area_vitu2_query_pane_t3

0x9f2e,	// (0x00065d0c) area_vitu2_query_pane_t4_ParamLimits

0x9f2e,	// (0x00065d0c) area_vitu2_query_pane_t4

0x9f56,	// (0x00065d34) area_vitu2_query_pane_t5_ParamLimits

0x9f56,	// (0x00065d34) area_vitu2_query_pane_t5

0x9f7e,	// (0x00065d5c) area_vitu2_query_pane_t6_ParamLimits

0x9f7e,	// (0x00065d5c) area_vitu2_query_pane_t6

0x0006,

0xf84d,	// (0x0006b62b) area_vitu2_query_pane_t_ParamLimits

0xf84d,	// (0x0006b62b) area_vitu2_query_pane_t

0x73b4,	// (0x00063192) bg_button_pane_cp018

0x73c2,	// (0x000631a0) bg_button_pane_cp021

0x73ce,	// (0x000631ac) bg_button_pane_cp022

0x73df,	// (0x000631bd) input_focus_pane_cp09

0xb35e,	// (0x0006713c) aid_size_touch_mv_arrow_left

0xb389,	// (0x00067167) aid_size_touch_mv_arrow_right

0x6b13,	// (0x000628f1) main_cset_slider_pane_g16_ParamLimits

0x6b13,	// (0x000628f1) main_cset_slider_pane_g16

0x6b21,	// (0x000628ff) main_cset_slider_pane_g17_ParamLimits

0x6b21,	// (0x000628ff) main_cset_slider_pane_g17

0x72fa,	// (0x000630d8) cell_cam4_burst_pane_g1_ParamLimits

0x9bf6,	// (0x000659d4) compa_mode_pane

0x6d78,	// (0x00062b56) popup_vtel_slider_window_g3_ParamLimits

0x6d78,	// (0x00062b56) popup_vtel_slider_window_g3

0x6d8c,	// (0x00062b6a) popup_vtel_slider_window_g4_ParamLimits

0x6d8c,	// (0x00062b6a) popup_vtel_slider_window_g4

0x6da0,	// (0x00062b7e) popup_vtel_slider_window_t1_ParamLimits

0x6da0,	// (0x00062b7e) popup_vtel_slider_window_t1

0x1060,	// (0x0005ce3e) main_cl_pane

0x4328,	// (0x00060106) popup_imed_adjust2_window_ParamLimits

0xc962,	// (0x00068740) bg_tb_trans_pane_cp05_ParamLimits

0xd284,	// (0x00069062) popup_imed_adjust2_window_g1_ParamLimits

0xd293,	// (0x00069071) popup_imed_adjust2_window_g2_ParamLimits

0xd293,	// (0x00069071) popup_imed_adjust2_window_g2

0xd29f,	// (0x0006907d) popup_imed_adjust2_window_g3_ParamLimits

0xd29f,	// (0x0006907d) popup_imed_adjust2_window_g3

0x0002,

0x05d1,	// (0x0005c3af) popup_imed_adjust2_window_g_ParamLimits

0x05d1,	// (0x0005c3af) popup_imed_adjust2_window_g

0xd2ab,	// (0x00069089) popup_imed_adjust2_window_t1_ParamLimits

0xd2c3,	// (0x000690a1) slider_imed_adjust_pane_ParamLimits

0xd2d7,	// (0x000690b5) slider_imed_adjust_pane_g1_ParamLimits

0xd2e7,	// (0x000690c5) slider_imed_adjust_pane_g2_ParamLimits

0xd2f7,	// (0x000690d5) slider_imed_adjust_pane_g3_ParamLimits

0xd308,	// (0x000690e6) slider_imed_adjust_pane_g4_ParamLimits

0x05d8,	// (0x0005c3b6) slider_imed_adjust_pane_g_ParamLimits

0x6271,	// (0x0006204f) aid_touch_area_cam4_ParamLimits

0x6271,	// (0x0006204f) aid_touch_area_cam4

0x6281,	// (0x0006205f) battery_pane_cp01

0x6308,	// (0x000620e6) main_camera4_pane_g6_ParamLimits

0x6308,	// (0x000620e6) main_camera4_pane_g6

0x6326,	// (0x00062104) main_camera4_pane_t2_ParamLimits

0x6326,	// (0x00062104) main_camera4_pane_t2

0x0001,

0xf718,	// (0x0006b4f6) main_camera4_pane_t_ParamLimits

0xf718,	// (0x0006b4f6) main_camera4_pane_t

0x63b5,	// (0x00062193) aid_touch_area_vid4_ParamLimits

0x63b5,	// (0x00062193) aid_touch_area_vid4

0x63f5,	// (0x000621d3) main_video4_pane_g5_ParamLimits

0x63f5,	// (0x000621d3) main_video4_pane_g5

0x6419,	// (0x000621f7) vid4_progress_pane_ParamLimits

0x6419,	// (0x000621f7) vid4_progress_pane

0xd85c,	// (0x0006963a) main_cset_slider_pane_g18_ParamLimits

0xd85c,	// (0x0006963a) main_cset_slider_pane_g18

0xda36,	// (0x00069814) cell_cam4_burst_pane_g2_ParamLimits

0xda36,	// (0x00069814) cell_cam4_burst_pane_g2

0x0001,

0xf83c,	// (0x0006b61a) cell_cam4_burst_pane_g_ParamLimits

0xf83c,	// (0x0006b61a) cell_cam4_burst_pane_g

0x73f0,	// (0x000631ce) bg_cl_pane_ParamLimits

0x73f0,	// (0x000631ce) bg_cl_pane

0x73fc,	// (0x000631da) cl_header_pane_ParamLimits

0x73fc,	// (0x000631da) cl_header_pane

0x7408,	// (0x000631e6) cl_listscroll_pane_ParamLimits

0x7408,	// (0x000631e6) cl_listscroll_pane

0xdb78,	// (0x00069956) bg_cl_pane_g1

0xdb80,	// (0x0006995e) bg_cl_pane_g2

0xdb88,	// (0x00069966) bg_cl_pane_g3

0xdb90,	// (0x0006996e) bg_cl_pane_g4

0xdb98,	// (0x00069976) bg_cl_pane_g5

0xdba0,	// (0x0006997e) bg_cl_pane_g6

0xdba8,	// (0x00069986) bg_cl_pane_g7

0xdbb0,	// (0x0006998e) bg_cl_pane_g8

0xdbb8,	// (0x00069996) bg_cl_pane_g9

0x0008,

0x0879,	// (0x0005c657) bg_cl_pane_g

0x7414,	// (0x000631f2) aid_height_cl_leading_ParamLimits

0x7414,	// (0x000631f2) aid_height_cl_leading

0x7420,	// (0x000631fe) aid_height_cl_text_ParamLimits

0x7420,	// (0x000631fe) aid_height_cl_text

0xdbe4,	// (0x000699c2) bg_cl_header_pane_ParamLimits

0xdbe4,	// (0x000699c2) bg_cl_header_pane

0x7438,	// (0x00063216) cl_header_pane_g1_ParamLimits

0x7438,	// (0x00063216) cl_header_pane_g1

0x7445,	// (0x00063223) cl_header_pane_t1_ParamLimits

0x7445,	// (0x00063223) cl_header_pane_t1

0xdbc0,	// (0x0006999e) cl_list_pane

0xd82f,	// (0x0006960d) hc_scroll_pane_cp01

0xad15,	// (0x00066af3) bg_cl_header_pane_g1

0xd715,	// (0x000694f3) bg_cl_header_pane_g2

0xad35,	// (0x00066b13) bg_cl_header_pane_g3

0xd725,	// (0x00069503) bg_cl_header_pane_g4

0xd71d,	// (0x000694fb) bg_cl_header_pane_g5

0xd951,	// (0x0006972f) bg_cl_header_pane_g6

0xd73d,	// (0x0006951b) bg_cl_header_pane_g7

0xd745,	// (0x00069523) bg_cl_header_pane_g8

0xd735,	// (0x00069513) bg_cl_header_pane_g9

0x0008,

0xf85c,	// (0x0006b63a) bg_cl_header_pane_g

0x7457,	// (0x00063235) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7457,	// (0x00063235) hc_cl_list_double_graphic_heading_pane

0x746b,	// (0x00063249) hc_cl_list_single_graphic_pane_ParamLimits

0x746b,	// (0x00063249) hc_cl_list_single_graphic_pane

0x7485,	// (0x00063263) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7485,	// (0x00063263) hc_cl_list_single_graphic_pane_g1

0x7491,	// (0x0006326f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7491,	// (0x0006326f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf86f,	// (0x0006b64d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf86f,	// (0x0006b64d) hc_cl_list_single_graphic_pane_g

0x74a5,	// (0x00063283) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x74a5,	// (0x00063283) hc_cl_list_single_graphic_pane_t1

0x7485,	// (0x00063263) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7485,	// (0x00063263) hc_cl_list_double_graphic_heading_pane_g1

0x74ba,	// (0x00063298) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x74ba,	// (0x00063298) hc_cl_list_double_graphic_heading_pane_g2

0x74ce,	// (0x000632ac) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x74ce,	// (0x000632ac) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf874,	// (0x0006b652) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf874,	// (0x0006b652) hc_cl_list_double_graphic_heading_pane_g

0x74e2,	// (0x000632c0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74e2,	// (0x000632c0) hc_cl_list_double_graphic_heading_pane_t1

0x74f7,	// (0x000632d5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74f7,	// (0x000632d5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf87b,	// (0x0006b659) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf87b,	// (0x0006b659) hc_cl_list_double_graphic_heading_pane_t

0x7514,	// (0x000632f2) vid4_progress_pane_g1

0x7524,	// (0x00063302) vid4_progress_pane_g2

0x7534,	// (0x00063312) vid4_progress_pane_g3

0x7546,	// (0x00063324) vid4_progress_pane_g4

0x0004,

0xf880,	// (0x0006b65e) vid4_progress_pane_g

0x755e,	// (0x0006333c) vid4_progress_pane_t1

0x7574,	// (0x00063352) vid4_progress_pane_t2

0x0002,

0xf88b,	// (0x0006b669) vid4_progress_pane_t

0x759f,	// (0x0006337d) wait_bar_pane_cp07

0xcb5d,	// (0x0006893b) blid_firmament_pane_ParamLimits

0xcba0,	// (0x0006897e) popup_blid_sat_info2_window_g1

0xcbc4,	// (0x000689a2) popup_blid_sat_info2_window_t3

0xcbd2,	// (0x000689b0) popup_blid_sat_info2_window_t4

0xcbe0,	// (0x000689be) popup_blid_sat_info2_window_t5

0xcbee,	// (0x000689cc) popup_blid_sat_info2_window_t6

0xcbfe,	// (0x000689dc) popup_blid_sat_info2_window_t7

0xcc0c,	// (0x000689ea) popup_blid_sat_info2_window_t8

0xcc1a,	// (0x000689f8) popup_blid_sat_info2_window_t9

0xcc28,	// (0x00068a06) popup_blid_sat_info2_window_t10

0xccea,	// (0x00068ac8) aid_firma_cardinal_ParamLimits

0xccfe,	// (0x00068adc) blid_firmament_pane_t1_ParamLimits

0xcd15,	// (0x00068af3) blid_firmament_pane_t2_ParamLimits

0xcd2c,	// (0x00068b0a) blid_firmament_pane_t3_ParamLimits

0xcd43,	// (0x00068b21) blid_firmament_pane_t4_ParamLimits

0x04c5,	// (0x0005c2a3) blid_firmament_pane_t_ParamLimits

0xcd5a,	// (0x00068b38) blid_sat_info_pane_ParamLimits

0x428e,	// (0x0006006c) main_cam_set_pane_ParamLimits

0x57bd,	// (0x0006159b) aid_size_cell_colour_35_ParamLimits

0x57d7,	// (0x000615b5) aid_size_cell_colour_112_ParamLimits

0x57ee,	// (0x000615cc) aid_size_cell_effect_ParamLimits

0xa579,	// (0x00066357) bg_tb_trans_pane_cp02_ParamLimits

0xb0e9,	// (0x00066ec7) heading_imed_pane_ParamLimits

0x5808,	// (0x000615e6) listscroll_imed_pane_ParamLimits

0xbf4e,	// (0x00067d2c) popup_call2_audio_first_window_g5_ParamLimits

0xbf4e,	// (0x00067d2c) popup_call2_audio_first_window_g5

0x5f57,	// (0x00061d35) aid_size_touch_image3_arrow_left_ParamLimits

0x5f57,	// (0x00061d35) aid_size_touch_image3_arrow_left

0x5f6d,	// (0x00061d4b) aid_size_touch_image3_arrow_right_ParamLimits

0x5f6d,	// (0x00061d4b) aid_size_touch_image3_arrow_right

0x7589,	// (0x00063367) vid4_progress_pane_t3

0x5aa8,	// (0x00061886) main_hwr_training_symbol_option_pane_ParamLimits

0x5aa8,	// (0x00061886) main_hwr_training_symbol_option_pane

0xd571,	// (0x0006934f) popup_hwr_training_preview_window_ParamLimits

0xd571,	// (0x0006934f) popup_hwr_training_preview_window

0x5b09,	// (0x000618e7) hwr_training_navi_pane_g5_ParamLimits

0x5b09,	// (0x000618e7) hwr_training_navi_pane_g5

0xd703,	// (0x000694e1) popup_char_count_window

0x1046,	// (0x0005ce24) bg_popup_sub_pane_cp20_ParamLimits

0x6e9f,	// (0x00062c7d) list_vitu2_match_list_pane_ParamLimits

0x6eab,	// (0x00062c89) vitu2_page_scroll_pane_ParamLimits

0x6eab,	// (0x00062c89) vitu2_page_scroll_pane

0xdbc9,	// (0x000699a7) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbc9,	// (0x000699a7) list_single_hwr_training_symbol_option_pane

0xdc0a,	// (0x000699e8) list_single_hwr_training_symbol_option_pane_g1

0xdc12,	// (0x000699f0) list_single_hwr_training_symbol_option_pane_t1

0xdc20,	// (0x000699fe) bg_button_pane_cp023

0xdc29,	// (0x00069a07) bg_button_pane_cp024

0x75e8,	// (0x000633c6) vitu2_page_scroll_pane_g1

0x75f0,	// (0x000633ce) vitu2_page_scroll_pane_g2

0x0001,

0xf892,	// (0x0006b670) vitu2_page_scroll_pane_g

0x75f8,	// (0x000633d6) vitu2_page_scroll_pane_t1

0xa9d9,	// (0x000667b7) popup_char_count_window_g1

0xdc5c,	// (0x00069a3a) popup_char_count_window_g2

0xd216,	// (0x00068ff4) popup_char_count_window_g3

0x0002,

0xf897,	// (0x0006b675) popup_char_count_window_g

0xdc65,	// (0x00069a43) popup_char_count_window_t1

0x1060,	// (0x0005ce3e) main_vded2_pane

0xd270,	// (0x0006904e) aid_size_cell_imed_line

0xd27a,	// (0x00069058) grid_imed_line_width_pane

0x6485,	// (0x00062263) vid4_indicators_pane_g4

0xdc73,	// (0x00069a51) cell_imed_line_width_pane_ParamLimits

0xdc73,	// (0x00069a51) cell_imed_line_width_pane

0xdc87,	// (0x00069a65) cell_imed_line_width_pane_g1

0xdbdc,	// (0x000699ba) cell_imed_line_width_pane_g2

0x0001,

0xf89e,	// (0x0006b67c) cell_imed_line_width_pane_g

0x7607,	// (0x000633e5) main_vded2_pane_g1_ParamLimits

0x7607,	// (0x000633e5) main_vded2_pane_g1

0x7614,	// (0x000633f2) main_vded2_pane_g2_ParamLimits

0x7614,	// (0x000633f2) main_vded2_pane_g2

0x0001,

0xf8a3,	// (0x0006b681) main_vded2_pane_g_ParamLimits

0xf8a3,	// (0x0006b681) main_vded2_pane_g

0x7622,	// (0x00063400) vded2_slider_pane_ParamLimits

0x7622,	// (0x00063400) vded2_slider_pane

0x762f,	// (0x0006340d) aid_size_touch_vded2_end

0x7639,	// (0x00063417) aid_size_touch_vded2_playhead

0xdc90,	// (0x00069a6e) aid_size_touch_vded2_start

0xdc98,	// (0x00069a76) vded2_slider_bg_pane

0xdca1,	// (0x00069a7f) vded2_slider_pane_g1

0xdcaa,	// (0x00069a88) vded2_slider_pane_g2

0x7641,	// (0x0006341f) vded2_slider_pane_g3

0x0002,

0xf8a8,	// (0x0006b686) vded2_slider_pane_g

0xdcb2,	// (0x00069a90) vded2_slider_bg_pane_g1

0xdcbb,	// (0x00069a99) vded2_slider_bg_pane_g2

0xdcc4,	// (0x00069aa2) vded2_slider_bg_pane_g3

0x0002,

0xf8af,	// (0x0006b68d) vded2_slider_bg_pane_g

0x3b71,	// (0x0005f94f) aid_postcard_touch_down_pane_ParamLimits

0x3b71,	// (0x0005f94f) aid_postcard_touch_down_pane

0x3b81,	// (0x0005f95f) aid_postcard_touch_up_pane_ParamLimits

0x3b81,	// (0x0005f95f) aid_postcard_touch_up_pane

0x1060,	// (0x0005ce3e) main_blid2_pane

0x42b7,	// (0x00060095) popup_blid2_search_window

0x9bf6,	// (0x000659d4) blid2_gps_pane

0x9bf6,	// (0x000659d4) blid2_navig_pane

0x9bf6,	// (0x000659d4) blid2_search_pane

0x9bf6,	// (0x000659d4) blid2_tripm_pane

0x764a,	// (0x00063428) blid2_search_pane_g1_ParamLimits

0x764a,	// (0x00063428) blid2_search_pane_g1

0x765a,	// (0x00063438) blid2_search_pane_t1_ParamLimits

0x765a,	// (0x00063438) blid2_search_pane_t1

0x766c,	// (0x0006344a) aid_size_cell_blid2_gps_ParamLimits

0x766c,	// (0x0006344a) aid_size_cell_blid2_gps

0x767c,	// (0x0006345a) blid2_gps_pane_g1_ParamLimits

0x767c,	// (0x0006345a) blid2_gps_pane_g1

0x7688,	// (0x00063466) grid_blid2_satellite_pane_ParamLimits

0x7688,	// (0x00063466) grid_blid2_satellite_pane

0x7698,	// (0x00063476) blid2_navig_pane_g1_ParamLimits

0x7698,	// (0x00063476) blid2_navig_pane_g1

0x76a4,	// (0x00063482) blid2_navig_pane_t1_ParamLimits

0x76a4,	// (0x00063482) blid2_navig_pane_t1

0x76b6,	// (0x00063494) blid2_navig_pane_t2_ParamLimits

0x76b6,	// (0x00063494) blid2_navig_pane_t2

0x0001,

0xf8b6,	// (0x0006b694) blid2_navig_pane_t_ParamLimits

0xf8b6,	// (0x0006b694) blid2_navig_pane_t

0x76c8,	// (0x000634a6) blid2_navig_ring_pane_ParamLimits

0x76c8,	// (0x000634a6) blid2_navig_ring_pane

0x76d8,	// (0x000634b6) blid2_speed_pane_ParamLimits

0x76d8,	// (0x000634b6) blid2_speed_pane

0x76e4,	// (0x000634c2) blid2_tripm_pane_g1_ParamLimits

0x76e4,	// (0x000634c2) blid2_tripm_pane_g1

0x76f4,	// (0x000634d2) blid2_tripm_pane_g2_ParamLimits

0x76f4,	// (0x000634d2) blid2_tripm_pane_g2

0x7700,	// (0x000634de) blid2_tripm_pane_g3_ParamLimits

0x7700,	// (0x000634de) blid2_tripm_pane_g3

0x770c,	// (0x000634ea) blid2_tripm_pane_g4_ParamLimits

0x770c,	// (0x000634ea) blid2_tripm_pane_g4

0x7718,	// (0x000634f6) blid2_tripm_pane_g5_ParamLimits

0x7718,	// (0x000634f6) blid2_tripm_pane_g5

0x0005,

0xf8bb,	// (0x0006b699) blid2_tripm_pane_g_ParamLimits

0xf8bb,	// (0x0006b699) blid2_tripm_pane_g

0x7734,	// (0x00063512) blid2_tripm_pane_t1_ParamLimits

0x7734,	// (0x00063512) blid2_tripm_pane_t1

0x7748,	// (0x00063526) blid2_tripm_pane_t2_ParamLimits

0x7748,	// (0x00063526) blid2_tripm_pane_t2

0x775a,	// (0x00063538) blid2_tripm_pane_t3_ParamLimits

0x775a,	// (0x00063538) blid2_tripm_pane_t3

0x0003,

0xf8c8,	// (0x0006b6a6) blid2_tripm_pane_t_ParamLimits

0xf8c8,	// (0x0006b6a6) blid2_tripm_pane_t

0x778c,	// (0x0006356a) cell_blid2_satellite_pane_ParamLimits

0x778c,	// (0x0006356a) cell_blid2_satellite_pane

0x77a6,	// (0x00063584) cell_blid2_satellite_pane_g1

0xdccd,	// (0x00069aab) cell_blid2_satellite_pane_t1

0xcd6a,	// (0x00068b48) blid2_speed_pane_g1

0xdcdb,	// (0x00069ab9) blid2_speed_pane_t1

0xdce9,	// (0x00069ac7) blid2_speed_pane_t2

0x0001,

0xf8d1,	// (0x0006b6af) blid2_speed_pane_t

0xcd6a,	// (0x00068b48) blid2_navig_ring_pane_g1

0x77af,	// (0x0006358d) blid2_navig_ring_pane_g2

0x77b7,	// (0x00063595) blid2_navig_ring_pane_g3

0x77bf,	// (0x0006359d) blid2_navig_ring_pane_g4

0x77c7,	// (0x000635a5) blid2_navig_ring_pane_g5

0x0004,

0xf8d6,	// (0x0006b6b4) blid2_navig_ring_pane_g

0x9bf6,	// (0x000659d4) bg_popup_window_pane_cp011

0xdcf7,	// (0x00069ad5) popup_blid2_search_window_g1

0xdcff,	// (0x00069add) popup_blid2_search_window_t1

0xdd0d,	// (0x00069aeb) popup_blid2_search_window_t2

0x0001,

0xf8e1,	// (0x0006b6bf) popup_blid2_search_window_t

0xac24,	// (0x00066a02) main_browser_pane_g1

0xa8f0,	// (0x000666ce) main_browser_pane_ParamLimits

0x428e,	// (0x0006006c) bg_button_pane_cp011_ParamLimits

0x6730,	// (0x0006250e) cell_vitu2_function_pane_g1_ParamLimits

0xc962,	// (0x00068740) bg_popup_sub_pane_cp22_ParamLimits

0x70a5,	// (0x00062e83) input_focus_pane_cp08_ParamLimits

0x70bc,	// (0x00062e9a) popup_vitu2_query_button_pane_ParamLimits

0x70bc,	// (0x00062e9a) popup_vitu2_query_button_pane

0x70cd,	// (0x00062eab) popup_vitu2_query_input_button_pane

0xd98c,	// (0x0006976a) popup_vitu2_query_window_g1_ParamLimits

0x70d7,	// (0x00062eb5) popup_vitu2_query_window_g2_ParamLimits

0xf81f,	// (0x0006b5fd) popup_vitu2_query_window_g_ParamLimits

0x9bf6,	// (0x000659d4) bg_button_pane_cp026

0x77cf,	// (0x000635ad) popup_vitu2_query_input_button_pane_g1

0x9bf6,	// (0x000659d4) bg_button_pane_cp025

0xdd1b,	// (0x00069af9) popup_vitu2_query_button_pane_t1

0x4d0f,	// (0x00060aed) main_mp3_pane_t6

0x4d1f,	// (0x00060afd) popup_slider_window_cp01

0x636a,	// (0x00062148) cam4_battery_pane

0x6444,	// (0x00062222) cam4_battery_pane_cp02

0x750c,	// (0x000632ea) cam4_battery_pane_cp01

0x750c,	// (0x000632ea) cam4_battery_pane_cp03

0xdbf2,	// (0x000699d0) cam4_battery_pane_g1

0xcd6a,	// (0x00068b48) cam4_battery_pane_g2

0x0001,

0xf8e6,	// (0x0006b6c4) cam4_battery_pane_g

0xcc36,	// (0x00068a14) popup_blid_sat_info2_window_t11

0xb35e,	// (0x0006713c) aid_size_touch_mv_arrow_left_ParamLimits

0xb389,	// (0x00067167) aid_size_touch_mv_arrow_right_ParamLimits

0xb3e7,	// (0x000671c5) navi_pane_g1_ParamLimits

0xb3f3,	// (0x000671d1) navi_pane_g2_ParamLimits

0xb421,	// (0x000671ff) navi_pane_g3_ParamLimits

0x01c4,	// (0x0005bfa2) navi_pane_g_ParamLimits

0x3587,	// (0x0005f365) navi_pane_mv_t1_ParamLimits

0x5814,	// (0x000615f2) grid_imed_effect_pane_ParamLimits

0x1f02,	// (0x0005dce0) aid_placing_vt_slider_lsc

0xab73,	// (0x00066951) aid_placing_vt_slider_prt

0xa579,	// (0x00066357) bg_tb_trans_pane_cp01_ParamLimits

0xcecf,	// (0x00068cad) popup_image_details_window_g1_ParamLimits

0xcee2,	// (0x00068cc0) popup_image_details_window_g2_ParamLimits

0xcef7,	// (0x00068cd5) popup_image_details_window_g3_ParamLimits

0xcef7,	// (0x00068cd5) popup_image_details_window_g3

0x050a,	// (0x0005c2e8) popup_image_details_window_g_ParamLimits

0xcf0b,	// (0x00068ce9) popup_image_details_window_t1_ParamLimits

0xcf1d,	// (0x00068cfb) popup_image_details_window_t2_ParamLimits

0xcf36,	// (0x00068d14) popup_image_details_window_t3_ParamLimits

0xcf4a,	// (0x00068d28) popup_image_details_window_t4_ParamLimits

0xcf65,	// (0x00068d43) popup_image_details_window_t5_ParamLimits

0x0511,	// (0x0005c2ef) popup_image_details_window_t_ParamLimits

0x742c,	// (0x0006320a) cl_header_name_pane_ParamLimits

0x742c,	// (0x0006320a) cl_header_name_pane

0x77d7,	// (0x000635b5) cl_header_name_pane_t1_ParamLimits

0x77d7,	// (0x000635b5) cl_header_name_pane_t1

0x77ee,	// (0x000635cc) cl_header_name_pane_t2_ParamLimits

0x77ee,	// (0x000635cc) cl_header_name_pane_t2

0x7818,	// (0x000635f6) cl_header_name_pane_t3_ParamLimits

0x7818,	// (0x000635f6) cl_header_name_pane_t3

0x0002,

0xf8eb,	// (0x0006b6c9) cl_header_name_pane_t_ParamLimits

0xf8eb,	// (0x0006b6c9) cl_header_name_pane_t

0xb4b0,	// (0x0006728e) navi_pane_mv_g2_ParamLimits

0xd6dd,	// (0x000694bb) field_vitu2_entry_pane_g1_ParamLimits

0xd6e9,	// (0x000694c7) field_vitu2_entry_pane_g2_ParamLimits

0xd6f5,	// (0x000694d3) field_vitu2_entry_pane_g3_ParamLimits

0xd6f5,	// (0x000694d3) field_vitu2_entry_pane_g3

0x0711,	// (0x0005c4ef) field_vitu2_entry_pane_g_ParamLimits

0x66c4,	// (0x000624a2) cell_vitu2_itu_pane_g1_ParamLimits

0x66d6,	// (0x000624b4) cell_vitu2_itu_pane_g2_ParamLimits

0x66d6,	// (0x000624b4) cell_vitu2_itu_pane_g2

0x0001,

0xf74f,	// (0x0006b52d) cell_vitu2_itu_pane_g_ParamLimits

0xf74f,	// (0x0006b52d) cell_vitu2_itu_pane_g

0x428e,	// (0x0006006c) bg_vkb2_func_pane_cp05_ParamLimits

0x428e,	// (0x0006006c) bg_vkb2_func_pane_cp05

0x428e,	// (0x0006006c) bg_vkb2_func_pane_cp03

0x428e,	// (0x0006006c) bg_vkb2_func_pane_cp04

0x428e,	// (0x0006006c) bg_vkb2_func_pane_cp10_ParamLimits

0x428e,	// (0x0006006c) bg_vkb2_func_pane_cp10

0x73ce,	// (0x000631ac) bg_vkb2_func_pane_cp08

0x73b4,	// (0x00063192) bg_vkb2_func_pane_cp06

0x73c2,	// (0x000631a0) bg_vkb2_func_pane_cp07

0xdc32,	// (0x00069a10) bg_vkb2_func_pane_cp11_ParamLimits

0xdc32,	// (0x00069a10) bg_vkb2_func_pane_cp11

0xdc47,	// (0x00069a25) bg_vkb2_func_pane_cp12_ParamLimits

0xdc47,	// (0x00069a25) bg_vkb2_func_pane_cp12

0x9bf6,	// (0x000659d4) bg_vkb2_func_pane_cp09

0xd715,	// (0x000694f3) bg_vkb2_func_pane_g1

0xad35,	// (0x00066b13) bg_vkb2_func_pane_g2

0xd71d,	// (0x000694fb) bg_vkb2_func_pane_g3

0xd725,	// (0x00069503) bg_vkb2_func_pane_g4

0xd951,	// (0x0006972f) bg_vkb2_func_pane_g5

0xd73d,	// (0x0006951b) bg_vkb2_func_pane_g6

0xd745,	// (0x00069523) bg_vkb2_func_pane_g7

0xd735,	// (0x00069513) bg_vkb2_func_pane_g8

0xad15,	// (0x00066af3) bg_vkb2_func_pane_g9

0x0008,

0xf8f2,	// (0x0006b6d0) bg_vkb2_func_pane_g

0x7726,	// (0x00063504) blid2_tripm_pane_g6_ParamLimits

0x7726,	// (0x00063504) blid2_tripm_pane_g6

0xd62f,	// (0x0006940d) mp4_progress_pane_g1

0x7780,	// (0x0006355e) blid2_tripm_values_pane_ParamLimits

0x7780,	// (0x0006355e) blid2_tripm_values_pane

0x783d,	// (0x0006361b) blid2_tripm_values_pane_t1

0x784b,	// (0x00063629) blid2_tripm_values_pane_t2

0x7859,	// (0x00063637) blid2_tripm_values_pane_t3

0x7867,	// (0x00063645) blid2_tripm_values_pane_t4

0x7875,	// (0x00063653) blid2_tripm_values_pane_t5

0x7883,	// (0x00063661) blid2_tripm_values_pane_t6

0x7891,	// (0x0006366f) blid2_tripm_values_pane_t7

0x789f,	// (0x0006367d) blid2_tripm_values_pane_t8

0x78ad,	// (0x0006368b) blid2_tripm_values_pane_t9

0x0008,

0xf905,	// (0x0006b6e3) blid2_tripm_values_pane_t

0x1f42,	// (0x0005dd20) call_video_pane_t1_ParamLimits

0x1f63,	// (0x0005dd41) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0006b048) call_video_pane_t_ParamLimits

0x3abb,	// (0x0005f899) msg_header_pane_g1_ParamLimits

0xb698,	// (0x00067476) msg_header_pane_g2_ParamLimits

0xb698,	// (0x00067476) msg_header_pane_g2

0x0001,

0xf44f,	// (0x0006b22d) msg_header_pane_g_ParamLimits

0xf44f,	// (0x0006b22d) msg_header_pane_g

0xa8f0,	// (0x000666ce) main_clock2_pane_ParamLimits

0x558e,	// (0x0006136c) grid_clock2_toolbar_pane_ParamLimits

0x558e,	// (0x0006136c) grid_clock2_toolbar_pane

0x558e,	// (0x0006136c) listscroll_clock2_pane_ParamLimits

0x558e,	// (0x0006136c) listscroll_clock2_pane

0x563e,	// (0x0006141c) main_clock2_pane_t3_ParamLimits

0x563e,	// (0x0006141c) main_clock2_pane_t3

0x5650,	// (0x0006142e) main_clock2_pane_t4_ParamLimits

0x5650,	// (0x0006142e) main_clock2_pane_t4

0xdd3b,	// (0x00069b19) cell_clock2_toolbar_pane

0xdd43,	// (0x00069b21) cell_clock2_toolbar_pane_cp01

0xdd43,	// (0x00069b21) cell_clock2_toolbar_pane_cp02

0xdd4b,	// (0x00069b29) cell_clock2_toolbar_pane_cp03

0xdd53,	// (0x00069b31) list_clock2_pane

0xb2e3,	// (0x000670c1) scroll_pane_cp10

0xdd5b,	// (0x00069b39) list_single_clock2_pane_ParamLimits

0xdd5b,	// (0x00069b39) list_single_clock2_pane

0xaabe,	// (0x0006689c) list_highlight_pane_cp08

0xdd68,	// (0x00069b46) list_single_clock2_pane_t1

0xdd76,	// (0x00069b54) list_single_clock2_pane_t2

0x0001,

0xf918,	// (0x0006b6f6) list_single_clock2_pane_t

0x9bf6,	// (0x000659d4) bg_button_pane_cp10

0xdd84,	// (0x00069b62) cell_clock2_toolbar_pane_g1

0x3adf,	// (0x0005f8bd) aid_main_viewer_pane_g1_ParamLimits

0x3adf,	// (0x0005f8bd) aid_main_viewer_pane_g1

0x3aeb,	// (0x0005f8c9) aid_main_viewer_pane_g2_ParamLimits

0x3aeb,	// (0x0005f8c9) aid_main_viewer_pane_g2

0x3af7,	// (0x0005f8d5) aid_main_viewer_pane_g3_ParamLimits

0x3af7,	// (0x0005f8d5) aid_main_viewer_pane_g3

0x3b08,	// (0x0005f8e6) aid_main_viewer_pane_g4_ParamLimits

0x3b08,	// (0x0005f8e6) aid_main_viewer_pane_g4

0x0003,

0xf460,	// (0x0006b23e) aid_main_viewer_pane_g_ParamLimits

0xf460,	// (0x0006b23e) aid_main_viewer_pane_g

0x4281,	// (0x0006005f) main_calc_pane_ParamLimits

0x429c,	// (0x0006007a) main_dialer2_pane_ParamLimits

0x1060,	// (0x0005ce3e) main_cam6_pane

0x1060,	// (0x0005ce3e) main_vid6_pane

0x559a,	// (0x00061378) listscroll_gen_pane_cp06_ParamLimits

0x559a,	// (0x00061378) listscroll_gen_pane_cp06

0x5662,	// (0x00061440) main_clock2_pane_t5_ParamLimits

0x5662,	// (0x00061440) main_clock2_pane_t5

0x56af,	// (0x0006148d) aid_call2_pane_cp10_ParamLimits

0x56c1,	// (0x0006149f) aid_call_pane_cp10_ParamLimits

0xb352,	// (0x00067130) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb352,	// (0x00067130) popup_clock_analogue_window_cp10_g2_ParamLimits

0x56d3,	// (0x000614b1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x56d3,	// (0x000614b1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb352,	// (0x00067130) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf65b,	// (0x0006b439) popup_clock_analogue_window_cp10_g_ParamLimits

0x56e9,	// (0x000614c7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5f04,	// (0x00061ce2) cell_dialer2_keypad_pane_g2_ParamLimits

0x5f04,	// (0x00061ce2) cell_dialer2_keypad_pane_g2

0x0001,

0xf6e9,	// (0x0006b4c7) cell_dialer2_keypad_pane_g_ParamLimits

0xf6e9,	// (0x0006b4c7) cell_dialer2_keypad_pane_g

0x5f20,	// (0x00061cfe) cell_dialer2_keypad_pane_t1

0x69fb,	// (0x000627d9) main_cset_text2_pane_ParamLimits

0x69fb,	// (0x000627d9) main_cset_text2_pane

0xdb6c,	// (0x0006994a) area_vitu2_query_pane_g1_ParamLimits

0x7353,	// (0x00063131) area_vitu2_query_pane_g2_ParamLimits

0xf848,	// (0x0006b626) area_vitu2_query_pane_g_ParamLimits

0x9fa6,	// (0x00065d84) area_vitu2_query_pane_t7_ParamLimits

0x9fa6,	// (0x00065d84) area_vitu2_query_pane_t7

0x73b4,	// (0x00063192) bg_button_pane_cp018_ParamLimits

0x73c2,	// (0x000631a0) bg_button_pane_cp021_ParamLimits

0x73ce,	// (0x000631ac) bg_button_pane_cp022_ParamLimits

0x73ce,	// (0x000631ac) bg_vkb2_func_pane_cp08_ParamLimits

0x73b4,	// (0x00063192) bg_vkb2_func_pane_cp06_ParamLimits

0x73c2,	// (0x000631a0) bg_vkb2_func_pane_cp07_ParamLimits

0x73df,	// (0x000631bd) input_focus_pane_cp09_ParamLimits

0x78bb,	// (0x00063699) cam6_autofocus_pane_ParamLimits

0x78bb,	// (0x00063699) cam6_autofocus_pane

0x78dd,	// (0x000636bb) cam6_image_uncrop_pane_ParamLimits

0x78dd,	// (0x000636bb) cam6_image_uncrop_pane

0x790a,	// (0x000636e8) cam6_indi_pane_ParamLimits

0x790a,	// (0x000636e8) cam6_indi_pane

0x7924,	// (0x00063702) cam6_mode_pane_ParamLimits

0x7924,	// (0x00063702) cam6_mode_pane

0x7938,	// (0x00063716) cam6_timer_pane_ParamLimits

0x7938,	// (0x00063716) cam6_timer_pane

0x7949,	// (0x00063727) cam6_zoom_pane_ParamLimits

0x7949,	// (0x00063727) cam6_zoom_pane

0x7961,	// (0x0006373f) cam6_mode_pane_g1_ParamLimits

0x7961,	// (0x0006373f) cam6_mode_pane_g1

0x796d,	// (0x0006374b) cam6_mode_pane_g2_ParamLimits

0x796d,	// (0x0006374b) cam6_mode_pane_g2

0x7979,	// (0x00063757) cam6_mode_pane_g3_ParamLimits

0x7979,	// (0x00063757) cam6_mode_pane_g3

0x7985,	// (0x00063763) cam6_mode_pane_g4_ParamLimits

0x7985,	// (0x00063763) cam6_mode_pane_g4

0x0003,

0xf91d,	// (0x0006b6fb) cam6_mode_pane_g_ParamLimits

0xf91d,	// (0x0006b6fb) cam6_mode_pane_g

0xdbfc,	// (0x000699da) bg_tb_trans_pane_cp08_ParamLimits

0xdbfc,	// (0x000699da) bg_tb_trans_pane_cp08

0xdd8c,	// (0x00069b6a) cam6_battery_pane_ParamLimits

0xdd8c,	// (0x00069b6a) cam6_battery_pane

0xdda2,	// (0x00069b80) cam6_indi_pane_g1_ParamLimits

0xdda2,	// (0x00069b80) cam6_indi_pane_g1

0xddb4,	// (0x00069b92) cam6_indi_pane_g2_ParamLimits

0xddb4,	// (0x00069b92) cam6_indi_pane_g2

0xddc6,	// (0x00069ba4) cam6_indi_pane_g3_ParamLimits

0xddc6,	// (0x00069ba4) cam6_indi_pane_g3

0x0002,

0xf926,	// (0x0006b704) cam6_indi_pane_g_ParamLimits

0xf926,	// (0x0006b704) cam6_indi_pane_g

0xddd8,	// (0x00069bb6) cam6_indi_pane_t1_ParamLimits

0xddd8,	// (0x00069bb6) cam6_indi_pane_t1

0x64c0,	// (0x0006229e) cam6_autofocus_pane_g1

0x64b8,	// (0x00062296) cam6_autofocus_pane_g2

0x64d0,	// (0x000622ae) cam6_autofocus_pane_g3

0x64c8,	// (0x000622a6) cam6_autofocus_pane_g4

0x0003,

0xf92d,	// (0x0006b70b) cam6_autofocus_pane_g

0xddfe,	// (0x00069bdc) cam6_timer_pane_g1

0xde06,	// (0x00069be4) cam6_timer_pane_t1

0xde14,	// (0x00069bf2) cam6_zoom_cont_pane

0xde1c,	// (0x00069bfa) cam6_zoom_pane_g1

0xde24,	// (0x00069c02) cam6_zoom_pane_g2

0x7991,	// (0x0006376f) cam6_zoom_pane_g3

0x0002,

0xf936,	// (0x0006b714) cam6_zoom_pane_g

0xcd6a,	// (0x00068b48) cam6_battery_pane_g1

0xcd6a,	// (0x00068b48) cam6_battery_pane_g2

0x0001,

0x04ce,	// (0x0005c2ac) cam6_battery_pane_g

0xde2c,	// (0x00069c0a) cam6_zoom_cont_pane_g1

0xde35,	// (0x00069c13) cam6_zoom_cont_pane_g2

0xde3e,	// (0x00069c1c) cam6_zoom_cont_pane_g3

0x0002,

0xf93d,	// (0x0006b71b) cam6_zoom_cont_pane_g

0x79ae,	// (0x0006378c) cam6_mode_pane_cp_ParamLimits

0x79ae,	// (0x0006378c) cam6_mode_pane_cp

0x79c2,	// (0x000637a0) cam6_zoom_pane_cp_ParamLimits

0x79c2,	// (0x000637a0) cam6_zoom_pane_cp

0x79da,	// (0x000637b8) vid6_image_uncrop_cif_pane_ParamLimits

0x79da,	// (0x000637b8) vid6_image_uncrop_cif_pane

0x7a06,	// (0x000637e4) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a06,	// (0x000637e4) vid6_image_uncrop_nhd_pane

0x7a23,	// (0x00063801) vid6_image_uncrop_vga_pane_ParamLimits

0x7a23,	// (0x00063801) vid6_image_uncrop_vga_pane

0x7a42,	// (0x00063820) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a42,	// (0x00063820) vid6_image_uncrop_wvga_pane

0x7a5f,	// (0x0006383d) vid6_indi_pane_ParamLimits

0x7a5f,	// (0x0006383d) vid6_indi_pane

0xdbfc,	// (0x000699da) bg_tb_trans_pane_cp09_ParamLimits

0xdbfc,	// (0x000699da) bg_tb_trans_pane_cp09

0xde56,	// (0x00069c34) cam6_battery_pane_cp_ParamLimits

0xde56,	// (0x00069c34) cam6_battery_pane_cp

0xde62,	// (0x00069c40) vid6_indi_pane_g1_ParamLimits

0xde62,	// (0x00069c40) vid6_indi_pane_g1

0xde92,	// (0x00069c70) vid6_indi_pane_g2_ParamLimits

0xde92,	// (0x00069c70) vid6_indi_pane_g2

0xdea4,	// (0x00069c82) vid6_indi_pane_g3_ParamLimits

0xdea4,	// (0x00069c82) vid6_indi_pane_g3

0xdeb9,	// (0x00069c97) vid6_indi_pane_g4_ParamLimits

0xdeb9,	// (0x00069c97) vid6_indi_pane_g4

0xdece,	// (0x00069cac) vid6_indi_pane_g5_ParamLimits

0xdece,	// (0x00069cac) vid6_indi_pane_g5

0x0004,

0xf944,	// (0x0006b722) vid6_indi_pane_g_ParamLimits

0xf944,	// (0x0006b722) vid6_indi_pane_g

0xdee8,	// (0x00069cc6) vid6_indi_pane_t1_ParamLimits

0xdee8,	// (0x00069cc6) vid6_indi_pane_t1

0xdefe,	// (0x00069cdc) vid6_indi_pane_t2_ParamLimits

0xdefe,	// (0x00069cdc) vid6_indi_pane_t2

0xdf26,	// (0x00069d04) vid6_indi_pane_t3_ParamLimits

0xdf26,	// (0x00069d04) vid6_indi_pane_t3

0xdf4e,	// (0x00069d2c) vid6_indi_pane_t4_ParamLimits

0xdf4e,	// (0x00069d2c) vid6_indi_pane_t4

0x0003,

0x097f,	// (0x0005c75d) vid6_indi_pane_t_ParamLimits

0x097f,	// (0x0005c75d) vid6_indi_pane_t

0xdf72,	// (0x00069d50) wait_bar_pane_cp08

0x7a82,	// (0x00063860) main_cset_text2_pane_t1_ParamLimits

0x7a82,	// (0x00063860) main_cset_text2_pane_t1

0x7999,	// (0x00063777) listscroll_gen_pane_cp06_t1_ParamLimits

0x7999,	// (0x00063777) listscroll_gen_pane_cp06_t1

0x1060,	// (0x0005ce3e) main_cam6_set_pane

0x635c,	// (0x0006213a) bg_tb_trans_pane_cp06_ParamLimits

0x6372,	// (0x00062150) cam4_indicators_pane_g1_ParamLimits

0x6383,	// (0x00062161) cam4_indicators_pane_g2_ParamLimits

0xf726,	// (0x0006b504) cam4_indicators_pane_g_ParamLimits

0x639b,	// (0x00062179) cam4_indicators_pane_t1_ParamLimits

0x428e,	// (0x0006006c) bg_tb_trans_pane_cp07_ParamLimits

0x644c,	// (0x0006222a) vid4_indicators_pane_g1_ParamLimits

0x6460,	// (0x0006223e) vid4_indicators_pane_g2_ParamLimits

0x6474,	// (0x00062252) vid4_indicators_pane_g3_ParamLimits

0x6485,	// (0x00062263) vid4_indicators_pane_g4_ParamLimits

0xf738,	// (0x0006b516) vid4_indicators_pane_g_ParamLimits

0x64a1,	// (0x0006227f) vid4_indicators_pane_t1_ParamLimits

0x7514,	// (0x000632f2) vid4_progress_pane_g1_ParamLimits

0x7524,	// (0x00063302) vid4_progress_pane_g2_ParamLimits

0x7534,	// (0x00063312) vid4_progress_pane_g3_ParamLimits

0x7546,	// (0x00063324) vid4_progress_pane_g4_ParamLimits

0xf880,	// (0x0006b65e) vid4_progress_pane_g_ParamLimits

0x755e,	// (0x0006333c) vid4_progress_pane_t1_ParamLimits

0x7574,	// (0x00063352) vid4_progress_pane_t2_ParamLimits

0x7589,	// (0x00063367) vid4_progress_pane_t3_ParamLimits

0xf88b,	// (0x0006b669) vid4_progress_pane_t_ParamLimits

0x759f,	// (0x0006337d) wait_bar_pane_cp07_ParamLimits

0x7ab9,	// (0x00063897) main_cam6_set_pane_g2_ParamLimits

0x7ab9,	// (0x00063897) main_cam6_set_pane_g2

0x7ac5,	// (0x000638a3) main_cset6_listscroll_pane_ParamLimits

0x7ac5,	// (0x000638a3) main_cset6_listscroll_pane

0x7af0,	// (0x000638ce) main_cset6_slider_pane_ParamLimits

0x7af0,	// (0x000638ce) main_cset6_slider_pane

0x7afc,	// (0x000638da) main_cset6_text2_pane_ParamLimits

0x7afc,	// (0x000638da) main_cset6_text2_pane

0xdf81,	// (0x00069d5f) main_cset6_text_pane

0xdf89,	// (0x00069d67) main_cset_list_pane_copy1_ParamLimits

0xdf89,	// (0x00069d67) main_cset_list_pane_copy1

0xdf99,	// (0x00069d77) scroll_pane_cp028_copy1

0x7b0f,	// (0x000638ed) cset_list_set_pane_copy1

0x7b25,	// (0x00063903) aid_position_infowindow_above_copy1

0x7b2d,	// (0x0006390b) aid_position_infowindow_below_copy1

0x7b35,	// (0x00063913) cset_list_set_pane_g1_copy1

0x6cf9,	// (0x00062ad7) cset_list_set_pane_g3_copy1_ParamLimits

0x6cf9,	// (0x00062ad7) cset_list_set_pane_g3_copy1

0x6d08,	// (0x00062ae6) cset_list_set_pane_t1_copy1_ParamLimits

0x6d08,	// (0x00062ae6) cset_list_set_pane_t1_copy1

0xa579,	// (0x00066357) list_highlight_pane_cp021_copy1_ParamLimits

0xa579,	// (0x00066357) list_highlight_pane_cp021_copy1

0xdfa2,	// (0x00069d80) cset6_slider_pane_ParamLimits

0xdfa2,	// (0x00069d80) cset6_slider_pane

0xdfce,	// (0x00069dac) main_cset6_slider_pane_g1_ParamLimits

0xdfce,	// (0x00069dac) main_cset6_slider_pane_g1

0x7b3d,	// (0x0006391b) main_cset6_slider_pane_g2_ParamLimits

0x7b3d,	// (0x0006391b) main_cset6_slider_pane_g2

0xdff6,	// (0x00069dd4) main_cset6_slider_pane_g3_ParamLimits

0xdff6,	// (0x00069dd4) main_cset6_slider_pane_g3

0x7b65,	// (0x00063943) main_cset6_slider_pane_g4_ParamLimits

0x7b65,	// (0x00063943) main_cset6_slider_pane_g4

0x7b71,	// (0x0006394f) main_cset6_slider_pane_g5_ParamLimits

0x7b71,	// (0x0006394f) main_cset6_slider_pane_g5

0xd844,	// (0x00069622) main_cset6_slider_pane_g7_ParamLimits

0xd844,	// (0x00069622) main_cset6_slider_pane_g7

0xd850,	// (0x0006962e) main_cset6_slider_pane_g8_ParamLimits

0xd850,	// (0x0006962e) main_cset6_slider_pane_g8

0x7b7f,	// (0x0006395d) main_cset6_slider_pane_g9_ParamLimits

0x7b7f,	// (0x0006395d) main_cset6_slider_pane_g9

0x7b8b,	// (0x00063969) main_cset6_slider_pane_g10_ParamLimits

0x7b8b,	// (0x00063969) main_cset6_slider_pane_g10

0x7b97,	// (0x00063975) main_cset6_slider_pane_g11_ParamLimits

0x7b97,	// (0x00063975) main_cset6_slider_pane_g11

0x7ba3,	// (0x00063981) main_cset6_slider_pane_g12_ParamLimits

0x7ba3,	// (0x00063981) main_cset6_slider_pane_g12

0xd908,	// (0x000696e6) main_cset6_slider_pane_g13_ParamLimits

0xd908,	// (0x000696e6) main_cset6_slider_pane_g13

0xd914,	// (0x000696f2) main_cset6_slider_pane_g14_ParamLimits

0xd914,	// (0x000696f2) main_cset6_slider_pane_g14

0x7baf,	// (0x0006398d) main_cset6_slider_pane_g15_ParamLimits

0x7baf,	// (0x0006398d) main_cset6_slider_pane_g15

0x7bc7,	// (0x000639a5) main_cset6_slider_pane_g16_ParamLimits

0x7bc7,	// (0x000639a5) main_cset6_slider_pane_g16

0x7bd5,	// (0x000639b3) main_cset6_slider_pane_g17_ParamLimits

0x7bd5,	// (0x000639b3) main_cset6_slider_pane_g17

0x0011,

0xf94f,	// (0x0006b72d) main_cset6_slider_pane_g_ParamLimits

0xf94f,	// (0x0006b72d) main_cset6_slider_pane_g

0xe00e,	// (0x00069dec) main_cset6_slider_pane_t1_ParamLimits

0xe00e,	// (0x00069dec) main_cset6_slider_pane_t1

0x7bef,	// (0x000639cd) main_cset6_slider_pane_t2_ParamLimits

0x7bef,	// (0x000639cd) main_cset6_slider_pane_t2

0x7c1a,	// (0x000639f8) main_cset6_slider_pane_t3_ParamLimits

0x7c1a,	// (0x000639f8) main_cset6_slider_pane_t3

0x7c45,	// (0x00063a23) main_cset6_slider_pane_t4_ParamLimits

0x7c45,	// (0x00063a23) main_cset6_slider_pane_t4

0x7c70,	// (0x00063a4e) main_cset6_slider_pane_t5_ParamLimits

0x7c70,	// (0x00063a4e) main_cset6_slider_pane_t5

0xe04f,	// (0x00069e2d) main_cset6_slider_pane_t7_ParamLimits

0xe04f,	// (0x00069e2d) main_cset6_slider_pane_t7

0x7c9d,	// (0x00063a7b) main_cset6_slider_pane_t8_ParamLimits

0x7c9d,	// (0x00063a7b) main_cset6_slider_pane_t8

0x7cc1,	// (0x00063a9f) main_cset6_slider_pane_t9_ParamLimits

0x7cc1,	// (0x00063a9f) main_cset6_slider_pane_t9

0x7ce5,	// (0x00063ac3) main_cset6_slider_pane_t10_ParamLimits

0x7ce5,	// (0x00063ac3) main_cset6_slider_pane_t10

0x7d09,	// (0x00063ae7) main_cset6_slider_pane_t11_ParamLimits

0x7d09,	// (0x00063ae7) main_cset6_slider_pane_t11

0xe085,	// (0x00069e63) main_cset6_slider_pane_t14_ParamLimits

0xe085,	// (0x00069e63) main_cset6_slider_pane_t14

0xe0be,	// (0x00069e9c) main_cset6_slider_pane_t15_ParamLimits

0xe0be,	// (0x00069e9c) main_cset6_slider_pane_t15

0x000b,

0xf974,	// (0x0006b752) main_cset6_slider_pane_t_ParamLimits

0xf974,	// (0x0006b752) main_cset6_slider_pane_t

0xd546,	// (0x00069324) cset_slider_pane_g1_copy1

0xde74,	// (0x00069c52) cset_slider_pane_g2_copy1

0xde7d,	// (0x00069c5b) cset_slider_pane_g3_copy1

0x9bf6,	// (0x000659d4) bg_popup_sub_pane_cp011_copy1

0xe0f7,	// (0x00069ed5) main_cset_text_pane_g1_copy1

0xd9a0,	// (0x0006977e) main_cset_text_pane_t1_copy1

0xd9ae,	// (0x0006978c) main_cset_text_pane_t2_copy1

0xd9bc,	// (0x0006979a) main_cset_text_pane_t3_copy1

0xd9ca,	// (0x000697a8) main_cset_text_pane_t4_copy1

0xd9d8,	// (0x000697b6) main_cset_text_pane_t5_copy1

0xe0ff,	// (0x00069edd) main_cset_text_pane_t6_copy1

0xe10d,	// (0x00069eeb) main_cset_text_pane_t7_copy1

0x7e05,	// (0x00063be3) main_cset_text2_pane_t1_copy1

0x428e,	// (0x0006006c) main_ncimui_pane

0x42ed,	// (0x000600cb) popup_query_ncimui_window_ParamLimits

0x42ed,	// (0x000600cb) popup_query_ncimui_window

0x9ed9,	// (0x00065cb7) field_cale_ev2_pane_g4_ParamLimits

0x9ed9,	// (0x00065cb7) field_cale_ev2_pane_g4

0x5be4,	// (0x000619c2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5be4,	// (0x000619c2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6c5,	// (0x0006b4a3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6c5,	// (0x0006b4a3) cell_video_dialer_keypad_pane_g

0x5bfc,	// (0x000619da) cell_video_dialer_keypad_pane_t1

0x9bf6,	// (0x000659d4) bg_popup_window_pane_cp012

0xb1ce,	// (0x00066fac) heading_pane_cp06

0xe139,	// (0x00069f17) ncim_query_content_pane

0x9bf6,	// (0x000659d4) bg_popup_heading_pane_cp01

0xe141,	// (0x00069f1f) ncim_heading_pane_t1

0xe14f,	// (0x00069f2d) ncim_indicator_popup_pane

0xe161,	// (0x00069f3f) ncim_query_button_pane

0xe175,	// (0x00069f53) ncim_query_content_pane_t1

0xe187,	// (0x00069f65) ncim_query_content_pane_t2

0x0005,

0xf9b8,	// (0x0006b796) ncim_query_content_pane_t

0xe1c1,	// (0x00069f9f) ncim_query_list_pane

0xe1d3,	// (0x00069fb1) ncim_query_popup_pane

0xe14f,	// (0x00069f2d) ncim_indicator_popup_pane_ParamLimits

0x7f59,	// (0x00063d37) ncim_query_content_pane_g1_ParamLimits

0x7f59,	// (0x00063d37) ncim_query_content_pane_g1

0xe175,	// (0x00069f53) ncim_query_content_pane_t1_ParamLimits

0xe187,	// (0x00069f65) ncim_query_content_pane_t2_ParamLimits

0x7f65,	// (0x00063d43) ncim_query_content_pane_t3_ParamLimits

0x7f65,	// (0x00063d43) ncim_query_content_pane_t3

0x7f82,	// (0x00063d60) ncim_query_content_pane_t4_ParamLimits

0x7f82,	// (0x00063d60) ncim_query_content_pane_t4

0x7f9f,	// (0x00063d7d) ncim_query_content_pane_t5_ParamLimits

0x7f9f,	// (0x00063d7d) ncim_query_content_pane_t5

0xe199,	// (0x00069f77) ncim_query_content_pane_t6_ParamLimits

0xe199,	// (0x00069f77) ncim_query_content_pane_t6

0xf9b8,	// (0x0006b796) ncim_query_content_pane_t_ParamLimits

0xe1c1,	// (0x00069f9f) ncim_query_list_pane_ParamLimits

0xe1d3,	// (0x00069fb1) ncim_query_popup_pane_ParamLimits

0xe1e7,	// (0x00069fc5) wait_bar_pane_cp04

0x9bf6,	// (0x000659d4) input_focus_pane_cp011

0xe1ef,	// (0x00069fcd) ncim_query_popup_pane_t1

0xe1fd,	// (0x00069fdb) ncim_list_query_list_pane_ParamLimits

0xe1fd,	// (0x00069fdb) ncim_list_query_list_pane

0x9bf6,	// (0x000659d4) bg_button_pane_cp027

0xe20a,	// (0x00069fe8) ncim_query_button_pane_g1

0x9bf6,	// (0x000659d4) list_highlight_pane_cp012

0xe214,	// (0x00069ff2) ncim_list_query_list_pane_g1

0xe21c,	// (0x00069ffa) ncim_list_query_list_pane_t1

0x638f,	// (0x0006216d) cam4_indicators_pane_g3_ParamLimits

0x638f,	// (0x0006216d) cam4_indicators_pane_g3

0x6491,	// (0x0006226f) vid4_indicators_pane_g5_ParamLimits

0x6491,	// (0x0006226f) vid4_indicators_pane_g5

0x7552,	// (0x00063330) vid4_progress_pane_g5_ParamLimits

0x7552,	// (0x00063330) vid4_progress_pane_g5

0x7e45,	// (0x00063c23) main_ncimui_pane_g1

0x7ead,	// (0x00063c8b) ncimui_group_query_pane_ParamLimits

0x7ead,	// (0x00063c8b) ncimui_group_query_pane

0x7ef5,	// (0x00063cd3) ncimui_list_pane_ParamLimits

0x7ef5,	// (0x00063cd3) ncimui_list_pane

0x7f1c,	// (0x00063cfa) ncimui_text_pane_ParamLimits

0x7f1c,	// (0x00063cfa) ncimui_text_pane

0x7fbc,	// (0x00063d9a) ncimui_text_pane_t1_ParamLimits

0x7fbc,	// (0x00063d9a) ncimui_text_pane_t1

0xe22a,	// (0x0006a008) ncimui_list_single_graphic_pane_ParamLimits

0xe22a,	// (0x0006a008) ncimui_list_single_graphic_pane

0x7fdb,	// (0x00063db9) ncimui_query_pane_ParamLimits

0x7fdb,	// (0x00063db9) ncimui_query_pane

0x9bf6,	// (0x000659d4) list_highlight_pane_cp013

0xe23a,	// (0x0006a018) ncim_list_query_list_pane_t1_copy1

0xe248,	// (0x0006a026) ncim_list_single_graphic_pane_g1

0x7fee,	// (0x00063dcc) ncim_query_button_pane_cp01

0x7ffa,	// (0x00063dd8) ncim_query_entry_pane_ParamLimits

0x7ffa,	// (0x00063dd8) ncim_query_entry_pane

0x800d,	// (0x00063deb) ncimui_query_pane_g1

0x8019,	// (0x00063df7) ncimui_query_pane_t1_ParamLimits

0x8019,	// (0x00063df7) ncimui_query_pane_t1

0xa579,	// (0x00066357) input_focus_pane_cp012

0xe250,	// (0x0006a02e) ncim_query_entry_pane_t1

0xa8f0,	// (0x000666ce) main_im_pane_ParamLimits

0x428e,	// (0x0006006c) main_mobtv_pane_ParamLimits

0x428e,	// (0x0006006c) main_mobtv_pane

0x7be3,	// (0x000639c1) main_cset6_slider_pane_g18_ParamLimits

0x7be3,	// (0x000639c1) main_cset6_slider_pane_g18

0xe002,	// (0x00069de0) main_cset6_slider_pane_g19_ParamLimits

0xe002,	// (0x00069de0) main_cset6_slider_pane_g19

0xd6f5,	// (0x000694d3) bg_main_mobtv_pane_ParamLimits

0xd6f5,	// (0x000694d3) bg_main_mobtv_pane

0x8032,	// (0x00063e10) main_mobtv_info_pane

0x803d,	// (0x00063e1b) main_mobtv_loading_pane_ParamLimits

0x803d,	// (0x00063e1b) main_mobtv_loading_pane

0xe262,	// (0x0006a040) main_mobtv_pg_channel_list_pane

0xe26c,	// (0x0006a04a) main_mobtv_pg_hdr_pane

0x804a,	// (0x00063e28) main_mobtv_programe_curr_pane_ParamLimits

0x804a,	// (0x00063e28) main_mobtv_programe_curr_pane

0x8057,	// (0x00063e35) main_mobtv_programe_next_pane_ParamLimits

0x8057,	// (0x00063e35) main_mobtv_programe_next_pane

0xe275,	// (0x0006a053) popup_mobtv_noti_window

0xcd6a,	// (0x00068b48) main_tv_pg_hdr_pane_g1

0xe27d,	// (0x0006a05b) main_tv_pg_hdr_pane_g2

0xe285,	// (0x0006a063) main_tv_pg_hdr_pane_g3

0xe28d,	// (0x0006a06b) main_tv_pg_hdr_pane_g4

0xe295,	// (0x0006a073) main_tv_pg_hdr_pane_g5

0xe29f,	// (0x0006a07d) main_tv_pg_hdr_pane_g6

0xe2a9,	// (0x0006a087) main_tv_pg_hdr_pane_g7

0xe2b3,	// (0x0006a091) main_tv_pg_hdr_pane_g8

0xe2bd,	// (0x0006a09b) main_tv_pg_hdr_pane_g9

0xe2c7,	// (0x0006a0a5) main_tv_pg_hdr_pane_g10

0xe2d1,	// (0x0006a0af) main_tv_pg_hdr_pane_g11

0x000a,

0x09fe,	// (0x0005c7dc) main_tv_pg_hdr_pane_g

0xe2db,	// (0x0006a0b9) main_tv_pg_hdr_pane_t1

0xe2e9,	// (0x0006a0c7) main_tv_pg_hdr_pane_t2

0xe2f7,	// (0x0006a0d5) main_tv_pg_hdr_pane_t3

0xe307,	// (0x0006a0e5) main_tv_pg_hdr_pane_t4

0xe317,	// (0x0006a0f5) main_tv_pg_hdr_pane_t5

0x0004,

0x0a15,	// (0x0005c7f3) main_tv_pg_hdr_pane_t

0xe327,	// (0x0006a105) single_mobtv_pg_channel_pane_ParamLimits

0xe327,	// (0x0006a105) single_mobtv_pg_channel_pane

0xe339,	// (0x0006a117) single_mobtv_pg_channel_table_pane

0xae38,	// (0x00066c16) single_mobtv_pg_channel_thumb_pane

0xe342,	// (0x0006a120) single_tv_pg_channel_pane_g1

0xe34b,	// (0x0006a129) single_tv_pg_channel_pane_g2

0x0001,

0x0a20,	// (0x0005c7fe) single_tv_pg_channel_pane_g

0xcfaf,	// (0x00068d8d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfaf,	// (0x00068d8d) bg_single_mobtv_pg_channel_thumb_pane

0xe354,	// (0x0006a132) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe354,	// (0x0006a132) single_mobtv_pg_channel_thumb_pane_g1

0xe362,	// (0x0006a140) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe362,	// (0x0006a140) single_mobtv_pg_channel_thumb_pane_g2

0xe36e,	// (0x0006a14c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe36e,	// (0x0006a14c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0a25,	// (0x0005c803) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0a25,	// (0x0005c803) single_mobtv_pg_channel_thumb_pane_g

0xe37a,	// (0x0006a158) single_mobtv_pg_channel_thumb_pane_t1

0xe388,	// (0x0006a166) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0a2c,	// (0x0005c80a) single_mobtv_pg_channel_thumb_pane_t

0xcd6a,	// (0x00068b48) bg_single_mobtv_pg_channel_table_pane_g1

0xcd6a,	// (0x00068b48) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x04ce,	// (0x0005c2ac) bg_single_mobtv_pg_channel_table_pane_g

0xe396,	// (0x0006a174) single_mobtv_pg_channel_table_pane_t1

0xe3a4,	// (0x0006a182) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0a31,	// (0x0005c80f) single_mobtv_pg_channel_table_pane_t

0x806c,	// (0x00063e4a) main_mobtv_info_pane_g1_ParamLimits

0x806c,	// (0x00063e4a) main_mobtv_info_pane_g1

0x8088,	// (0x00063e66) main_mobtv_info_pane_t1_ParamLimits

0x8088,	// (0x00063e66) main_mobtv_info_pane_t1

0x8100,	// (0x00063ede) main_mobtv_info_pane_t2_ParamLimits

0x8100,	// (0x00063ede) main_mobtv_info_pane_t2

0x0002,

0xf9ca,	// (0x0006b7a8) main_mobtv_info_pane_t_ParamLimits

0xf9ca,	// (0x0006b7a8) main_mobtv_info_pane_t

0x818f,	// (0x00063f6d) wait_bar_pane_cp05

0x81a1,	// (0x00063f7f) main_mobtv_loading_pane_g1_ParamLimits

0x81a1,	// (0x00063f7f) main_mobtv_loading_pane_g1

0x81af,	// (0x00063f8d) main_mobtv_loading_pane_g2_ParamLimits

0x81af,	// (0x00063f8d) main_mobtv_loading_pane_g2

0x81bb,	// (0x00063f99) main_mobtv_loading_pane_g3_ParamLimits

0x81bb,	// (0x00063f99) main_mobtv_loading_pane_g3

0x0002,

0xf9d1,	// (0x0006b7af) main_mobtv_loading_pane_g_ParamLimits

0xf9d1,	// (0x0006b7af) main_mobtv_loading_pane_g

0xe3b2,	// (0x0006a190) main_mobtv_loading_pane_t1_ParamLimits

0xe3b2,	// (0x0006a190) main_mobtv_loading_pane_t1

0xe3ca,	// (0x0006a1a8) main_mobtv_loading_pane_t2_ParamLimits

0xe3ca,	// (0x0006a1a8) main_mobtv_loading_pane_t2

0x0001,

0x0a49,	// (0x0005c827) main_mobtv_loading_pane_t_ParamLimits

0x0a49,	// (0x0005c827) main_mobtv_loading_pane_t

0x81c9,	// (0x00063fa7) wait_bar_pane_cp06_ParamLimits

0x81c9,	// (0x00063fa7) wait_bar_pane_cp06

0xe3ee,	// (0x0006a1cc) main_mobtv_programe_curr_pane_t1

0xe3fc,	// (0x0006a1da) main_mobtv_programe_curr_pane_t2

0x0001,

0x0a4e,	// (0x0005c82c) main_mobtv_programe_curr_pane_t

0xe40a,	// (0x0006a1e8) main_mobtv_programe_next_pane_t1

0xe418,	// (0x0006a1f6) main_mobtv_programe_next_pane_t2

0xe426,	// (0x0006a204) main_mobtv_programe_next_pane_t3

0x0002,

0x0a53,	// (0x0005c831) main_mobtv_programe_next_pane_t

0x9bf6,	// (0x000659d4) bg_popup_mobtv_noti_window_pane

0xe434,	// (0x0006a212) popup_mobtv_noti_window_g1

0xe43c,	// (0x0006a21a) popup_mobtv_noti_window_t1

0xe44a,	// (0x0006a228) popup_mobtv_noti_window_t2

0x0001,

0x0a5a,	// (0x0005c838) popup_mobtv_noti_window_t

0xcd6a,	// (0x00068b48) bg_popup_mobtv_noti_window_pane_g1

0x1060,	// (0x0005ce3e) sc_clock_pane

0x1060,	// (0x0005ce3e) main_fs_bigclock_pane

0x776e,	// (0x0006354c) blid2_tripm_pane_t4_ParamLimits

0x776e,	// (0x0006354c) blid2_tripm_pane_t4

0x81d5,	// (0x00063fb3) sc_clock_pane_g1_ParamLimits

0x81d5,	// (0x00063fb3) sc_clock_pane_g1

0x81e3,	// (0x00063fc1) sc_clock_pane_t1_ParamLimits

0x81e3,	// (0x00063fc1) sc_clock_pane_t1

0x81f6,	// (0x00063fd4) sc_clock_pane_t2_ParamLimits

0x81f6,	// (0x00063fd4) sc_clock_pane_t2

0x8208,	// (0x00063fe6) sc_clock_pane_t3_ParamLimits

0x8208,	// (0x00063fe6) sc_clock_pane_t3

0x0004,

0xf9d8,	// (0x0006b7b6) sc_clock_pane_t_ParamLimits

0xf9d8,	// (0x0006b7b6) sc_clock_pane_t

0x90f2,	// (0x00064ed0) main_fs_bigclock_indicator_pane_ParamLimits

0x90f2,	// (0x00064ed0) main_fs_bigclock_indicator_pane

0x828b,	// (0x00064069) main_fs_bigclock_pane_g1_ParamLimits

0x828b,	// (0x00064069) main_fs_bigclock_pane_g1

0x90fe,	// (0x00064edc) main_fs_bigclock_pane_t1_ParamLimits

0x90fe,	// (0x00064edc) main_fs_bigclock_pane_t1

0x9110,	// (0x00064eee) main_fs_bigclock_pane_t2_ParamLimits

0x9110,	// (0x00064eee) main_fs_bigclock_pane_t2

0x9124,	// (0x00064f02) main_fs_bigclock_pane_t3_ParamLimits

0x9124,	// (0x00064f02) main_fs_bigclock_pane_t3

0x0002,

0xfbb0,	// (0x0006b98e) main_fs_bigclock_pane_t_ParamLimits

0xfbb0,	// (0x0006b98e) main_fs_bigclock_pane_t

0xeccc,	// (0x0006aaaa) main_fs_bigclock_indicator_pane_g1

0xe169,	// (0x00069f47) ncim_query_content_pane_g2_ParamLimits

0xe169,	// (0x00069f47) ncim_query_content_pane_g2

0x0001,

0xf9b3,	// (0x0006b791) ncim_query_content_pane_g_ParamLimits

0xf9b3,	// (0x0006b791) ncim_query_content_pane_g

0x821c,	// (0x00063ffa) sc_clock_pane_t4_ParamLimits

0x821c,	// (0x00063ffa) sc_clock_pane_t4

0x428e,	// (0x0006006c) main_radioblah_pane

0x6227,	// (0x00062005) cell_call4_button_pane_t1_copy1_ParamLimits

0x6227,	// (0x00062005) cell_call4_button_pane_t1_copy1

0x7e5f,	// (0x00063c3d) main_ncimui_pane_t1_ParamLimits

0x7e5f,	// (0x00063c3d) main_ncimui_pane_t1

0x7e79,	// (0x00063c57) main_ncimui_pane_t2_ParamLimits

0x7e79,	// (0x00063c57) main_ncimui_pane_t2

0x0002,

0xf9ac,	// (0x0006b78a) main_ncimui_pane_t_ParamLimits

0xf9ac,	// (0x0006b78a) main_ncimui_pane_t

0xe590,	// (0x0006a36e) main_radioblah_anim_pane_ParamLimits

0xe590,	// (0x0006a36e) main_radioblah_anim_pane

0xe5a1,	// (0x0006a37f) main_radioblah_info_pane_ParamLimits

0xe5a1,	// (0x0006a37f) main_radioblah_info_pane

0xe5b5,	// (0x0006a393) main_radioblah_pane_t1_ParamLimits

0xe5b5,	// (0x0006a393) main_radioblah_pane_t1

0xe5d1,	// (0x0006a3af) main_radioblah_pane_t2_ParamLimits

0xe5d1,	// (0x0006a3af) main_radioblah_pane_t2

0x0003,

0x0a80,	// (0x0005c85e) main_radioblah_pane_t_ParamLimits

0x0a80,	// (0x0005c85e) main_radioblah_pane_t

0x82e1,	// (0x000640bf) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82e1,	// (0x000640bf) main_radioblah_rocker_ctrl_pane

0xe619,	// (0x0006a3f7) main_radioblah_info_pane_t1_ParamLimits

0xe619,	// (0x0006a3f7) main_radioblah_info_pane_t1

0x8326,	// (0x00064104) main_radioblah_info_pane_t2_ParamLimits

0x8326,	// (0x00064104) main_radioblah_info_pane_t2

0x0003,

0xf9e3,	// (0x0006b7c1) main_radioblah_info_pane_t_ParamLimits

0xf9e3,	// (0x0006b7c1) main_radioblah_info_pane_t

0xcd6a,	// (0x00068b48) main_radioblah_rocker_ctrl_pane_g1

0x83d6,	// (0x000641b4) main_radioblah_rocker_ctrl_pane_g2

0x83de,	// (0x000641bc) main_radioblah_rocker_ctrl_pane_g3

0x83e6,	// (0x000641c4) main_radioblah_rocker_ctrl_pane_g4

0x83ee,	// (0x000641cc) main_radioblah_rocker_ctrl_pane_g5

0x83f6,	// (0x000641d4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf9ec,	// (0x0006b7ca) main_radioblah_rocker_ctrl_pane_g

0x7e05,	// (0x00063be3) main_cset_text2_pane_t1_copy1_ParamLimits

0x62b2,	// (0x00062090) cam4_image_uncrop_qvga_pane

0x6401,	// (0x000621df) vid4_image_uncrop_qcif_pane

0x78fc,	// (0x000636da) cam6_image_uncrop_qvga_pane_ParamLimits

0x78fc,	// (0x000636da) cam6_image_uncrop_qvga_pane

0xde46,	// (0x00069c24) vid6_image_uncrop_qcif_pane_ParamLimits

0xde46,	// (0x00069c24) vid6_image_uncrop_qcif_pane

0x9bf6,	// (0x000659d4) bg_popup_preview_window_pane_cp03

0xe11b,	// (0x00069ef9) list_cset_text2_pane

0xe123,	// (0x00069f01) main_cset6_text2_pane_g1

0xe12b,	// (0x00069f09) main_cset6_text2_pane_t1

0x83fe,	// (0x000641dc) list_cset_text2_pane_t1_ParamLimits

0x83fe,	// (0x000641dc) list_cset_text2_pane_t1

0x428e,	// (0x0006006c) main_radioblah_pane_ParamLimits

0x817b,	// (0x00063f59) main_mobtv_info_pane_t3_ParamLimits

0x817b,	// (0x00063f59) main_mobtv_info_pane_t3

0x82cf,	// (0x000640ad) main_radioblah_pane_g1

0x82fa,	// (0x000640d8) main_radioblah_info_pane_g1

0x837b,	// (0x00064159) main_radioblah_info_pane_t3_ParamLimits

0x837b,	// (0x00064159) main_radioblah_info_pane_t3

0x2f90,	// (0x0005ed6e) highlight_cell_cale_month_pane_ParamLimits

0x2f90,	// (0x0005ed6e) highlight_cell_cale_month_pane

0x1060,	// (0x0005ce3e) main_phob_fisheye_pane

0xd08b,	// (0x00068e69) scroll_pane_cp0031_ParamLimits

0xd08b,	// (0x00068e69) scroll_pane_cp0031

0xdf72,	// (0x00069d50) wait_bar_pane_cp08_ParamLimits

0x7b0f,	// (0x000638ed) cset_list_set_pane_copy1_ParamLimits

0xe653,	// (0x0006a431) highlight_cell_cale_month_pane_g1

0x841f,	// (0x000641fd) highlight_cell_cale_month_pane_t1

0xdbc0,	// (0x0006999e) list_gen_pane_cp01

0xd82f,	// (0x0006960d) scroll_pane_01

0x842d,	// (0x0006420b) list_single_double_fisheye_pane

0x8436,	// (0x00064214) list_double_fisheye_pane_g1_ParamLimits

0x8436,	// (0x00064214) list_double_fisheye_pane_g1

0x8442,	// (0x00064220) list_double_fisheye_pane_g2_ParamLimits

0x8442,	// (0x00064220) list_double_fisheye_pane_g2

0x8456,	// (0x00064234) list_double_fisheye_pane_g3_ParamLimits

0x8456,	// (0x00064234) list_double_fisheye_pane_g3

0x0004,

0xf9f9,	// (0x0006b7d7) list_double_fisheye_pane_g_ParamLimits

0xf9f9,	// (0x0006b7d7) list_double_fisheye_pane_g

0x847f,	// (0x0006425d) list_double_fisheye_pane_t1_ParamLimits

0x847f,	// (0x0006425d) list_double_fisheye_pane_t1

0x849a,	// (0x00064278) list_double_fisheye_pane_t2_ParamLimits

0x849a,	// (0x00064278) list_double_fisheye_pane_t2

0x0001,

0xfa04,	// (0x0006b7e2) list_double_fisheye_pane_t_ParamLimits

0xfa04,	// (0x0006b7e2) list_double_fisheye_pane_t

0x1060,	// (0x0005ce3e) main_call5_pane

0x8242,	// (0x00064020) sc_swipe_pane_ParamLimits

0x8242,	// (0x00064020) sc_swipe_pane

0x84c8,	// (0x000642a6) call5_image_pane_ParamLimits

0x84c8,	// (0x000642a6) call5_image_pane

0x84d8,	// (0x000642b6) call5_swipe_1_pane_ParamLimits

0x84d8,	// (0x000642b6) call5_swipe_1_pane

0x84e4,	// (0x000642c2) call5_swipe_2_pane_ParamLimits

0x84e4,	// (0x000642c2) call5_swipe_2_pane

0x84fe,	// (0x000642dc) popup_call5_audio_first_window_ParamLimits

0x84fe,	// (0x000642dc) popup_call5_audio_first_window

0xcfaf,	// (0x00068d8d) call5_swipe_1_pane_g1_ParamLimits

0xcfaf,	// (0x00068d8d) call5_swipe_1_pane_g1

0xe65b,	// (0x0006a439) call5_swipe_1_pane_g2_ParamLimits

0xe65b,	// (0x0006a439) call5_swipe_1_pane_g2

0x0001,

0xfa09,	// (0x0006b7e7) call5_swipe_1_pane_g_ParamLimits

0xfa09,	// (0x0006b7e7) call5_swipe_1_pane_g

0xe667,	// (0x0006a445) call5_swipe_1_pane_t1_ParamLimits

0xe667,	// (0x0006a445) call5_swipe_1_pane_t1

0xcfaf,	// (0x00068d8d) call5_swipe_2_pane_g1_ParamLimits

0xcfaf,	// (0x00068d8d) call5_swipe_2_pane_g1

0xe67c,	// (0x0006a45a) call5_swipe_2_pane_g2_ParamLimits

0xe67c,	// (0x0006a45a) call5_swipe_2_pane_g2

0x0001,

0xfa0e,	// (0x0006b7ec) call5_swipe_2_pane_g_ParamLimits

0xfa0e,	// (0x0006b7ec) call5_swipe_2_pane_g

0xe688,	// (0x0006a466) call5_swipe_2_pane_t1_ParamLimits

0xe688,	// (0x0006a466) call5_swipe_2_pane_t1

0xe69d,	// (0x0006a47b) sc_swipe_pane_g1_ParamLimits

0xe69d,	// (0x0006a47b) sc_swipe_pane_g1

0xe6c5,	// (0x0006a4a3) sc_swipe_pane_g2_ParamLimits

0xe6c5,	// (0x0006a4a3) sc_swipe_pane_g2

0x0001,

0xfa13,	// (0x0006b7f1) sc_swipe_pane_g_ParamLimits

0xfa13,	// (0x0006b7f1) sc_swipe_pane_g

0xe6d1,	// (0x0006a4af) sc_swipe_pane_t1_ParamLimits

0xe6d1,	// (0x0006a4af) sc_swipe_pane_t1

0x1060,	// (0x0005ce3e) main_cmail_launcher_pane

0x850c,	// (0x000642ea) aid_size_cell_cmail_l_ParamLimits

0x850c,	// (0x000642ea) aid_size_cell_cmail_l

0x851a,	// (0x000642f8) grid_cmail_l_pane_ParamLimits

0x851a,	// (0x000642f8) grid_cmail_l_pane

0x852a,	// (0x00064308) cell_cmail_l_pane_ParamLimits

0x852a,	// (0x00064308) cell_cmail_l_pane

0xe6e6,	// (0x0006a4c4) cell_cmail_l_pane_g1_ParamLimits

0xe6e6,	// (0x0006a4c4) cell_cmail_l_pane_g1

0xe6f2,	// (0x0006a4d0) cell_cmail_l_pane_t1_ParamLimits

0xe6f2,	// (0x0006a4d0) cell_cmail_l_pane_t1

0xe708,	// (0x0006a4e6) cell_cmail_l_pane_t2_ParamLimits

0xe708,	// (0x0006a4e6) cell_cmail_l_pane_t2

0x0001,

0xfa18,	// (0x0006b7f6) cell_cmail_l_pane_t_ParamLimits

0xfa18,	// (0x0006b7f6) cell_cmail_l_pane_t

0xa579,	// (0x00066357) grid_highlight_pane_cp018_ParamLimits

0xa579,	// (0x00066357) grid_highlight_pane_cp018

0x0eb6,	// (0x0005cc94) main2_pane_ParamLimits

0x0eb6,	// (0x0005cc94) main2_pane

0xa989,	// (0x00066767) popup_sp_fs_action_menu_bg_pane_g1

0xa991,	// (0x0006676f) popup_sp_fs_action_menu_bg_pane_g2

0xa999,	// (0x00066777) popup_sp_fs_action_menu_bg_pane_g3

0xa9a1,	// (0x0006677f) popup_sp_fs_action_menu_bg_pane_g4

0xa9a9,	// (0x00066787) popup_sp_fs_action_menu_bg_pane_g5

0xa9b1,	// (0x0006678f) popup_sp_fs_action_menu_bg_pane_g6

0xa9b9,	// (0x00066797) popup_sp_fs_action_menu_bg_pane_g7

0xa9c1,	// (0x0006679f) popup_sp_fs_action_menu_bg_pane_g8

0xa9c9,	// (0x000667a7) popup_sp_fs_action_menu_bg_pane_g9

0xa9d1,	// (0x000667af) popup_sp_fs_action_menu_bg_pane_g10

0xa9d1,	// (0x000667af) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0006af64) popup_sp_fs_action_menu_bg_pane_g

0x1d78,	// (0x0005db56) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x2_t3_g3_g1

0x1d84,	// (0x0005db62) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1d84,	// (0x0005db62) list_medium_line_x2_t3_g3_g2

0x1d90,	// (0x0005db6e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d90,	// (0x0005db6e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0006b012) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0006b012) list_medium_line_x2_t3_g3_g

0x1d9c,	// (0x0005db7a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d9c,	// (0x0005db7a) list_medium_line_x2_t3_g3_t1

0x1db1,	// (0x0005db8f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1db1,	// (0x0005db8f) list_medium_line_x2_t3_g3_t2

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0006b019) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0006b019) list_medium_line_x2_t3_g3_t

0x1d78,	// (0x0005db56) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x2_t3_g2_g1

0x1d90,	// (0x0005db6e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d90,	// (0x0005db6e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0006b020) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0006b020) list_medium_line_x2_t3_g2_g

0x1dd8,	// (0x0005dbb6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1dd8,	// (0x0005dbb6) list_medium_line_x2_t3_g2_t1

0x1ded,	// (0x0005dbcb) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1ded,	// (0x0005dbcb) list_medium_line_x2_t3_g2_t2

0x1dff,	// (0x0005dbdd) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1dff,	// (0x0005dbdd) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0006b025) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0006b025) list_medium_line_x2_t3_g2_t

0x1d78,	// (0x0005db56) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x2_t4_g4_g1

0x1e1d,	// (0x0005dbfb) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1e1d,	// (0x0005dbfb) list_medium_line_x2_t4_g4_g2

0x1d84,	// (0x0005db62) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1d84,	// (0x0005db62) list_medium_line_x2_t4_g4_g3

0x1e29,	// (0x0005dc07) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1e29,	// (0x0005dc07) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0006b02c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0006b02c) list_medium_line_x2_t4_g4_g

0x1e35,	// (0x0005dc13) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e35,	// (0x0005dc13) list_medium_line_x2_t4_g4_t1

0x1e4f,	// (0x0005dc2d) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e4f,	// (0x0005dc2d) list_medium_line_x2_t4_g4_t2

0x1e65,	// (0x0005dc43) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e65,	// (0x0005dc43) list_medium_line_x2_t4_g4_t3

0x1e7a,	// (0x0005dc58) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e7a,	// (0x0005dc58) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0006b035) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0006b035) list_medium_line_x2_t4_g4_t

0x1d78,	// (0x0005db56) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x2_t2_g4_g1

0x1e1d,	// (0x0005dbfb) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1e1d,	// (0x0005dbfb) list_medium_line_x2_t2_g4_g2

0x1d84,	// (0x0005db62) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1d84,	// (0x0005db62) list_medium_line_x2_t2_g4_g3

0x1d90,	// (0x0005db6e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d90,	// (0x0005db6e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0006b09c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0006b09c) list_medium_line_x2_t2_g4_g

0x2fb6,	// (0x0005ed94) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2fb6,	// (0x0005ed94) list_medium_line_x2_t2_g4_t1

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0006b0a5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0006b0a5) list_medium_line_x2_t2_g4_t

0x1d78,	// (0x0005db56) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x2_t2_g3_g1

0x1d84,	// (0x0005db62) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1d84,	// (0x0005db62) list_medium_line_x2_t2_g3_g2

0x1d90,	// (0x0005db6e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d90,	// (0x0005db6e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0006b012) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0006b012) list_medium_line_x2_t2_g3_g

0x2fcb,	// (0x0005eda9) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2fcb,	// (0x0005eda9) list_medium_line_x2_t2_g3_t1

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0006b0aa) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0006b0aa) list_medium_line_x2_t2_g3_t

0x31b4,	// (0x0005ef92) main_sp_fs_list_pane_ParamLimits

0x31b4,	// (0x0005ef92) main_sp_fs_list_pane

0x31c0,	// (0x0005ef9e) sp_fs_scroll_pane_ParamLimits

0x31c0,	// (0x0005ef9e) sp_fs_scroll_pane

0x31cc,	// (0x0005efaa) list_medium_line_x2_t3_t1

0x31dc,	// (0x0005efba) list_medium_line_x2_t3_t2

0x31ea,	// (0x0005efc8) list_medium_line_x2_t3_t3

0x0002,

0xf30b,	// (0x0006b0e9) list_medium_line_x2_t3_t

0x31f8,	// (0x0005efd6) list_medium_line_x3_t4_t1

0x3208,	// (0x0005efe6) list_medium_line_x3_t4_t2

0x3216,	// (0x0005eff4) list_medium_line_x3_t4_t3

0x31ea,	// (0x0005efc8) list_medium_line_x3_t4_t4

0x0003,

0xf312,	// (0x0006b0f0) list_medium_line_x3_t4_t

0x3224,	// (0x0005f002) list_medium_line_x4_t5_t1

0x3234,	// (0x0005f012) list_medium_line_x4_t5_t2

0x3216,	// (0x0005eff4) list_medium_line_x4_t5_t3

0x3242,	// (0x0005f020) list_medium_line_x4_t5_t4

0x31ea,	// (0x0005efc8) list_medium_line_x4_t5_t5

0x0004,

0xf31b,	// (0x0006b0f9) list_medium_line_x4_t5_t

0x1d78,	// (0x0005db56) list_medium_line_t4_g4_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_t4_g4_g1

0x1e29,	// (0x0005dc07) list_medium_line_t4_g4_g2_ParamLimits

0x1e29,	// (0x0005dc07) list_medium_line_t4_g4_g2

0x3250,	// (0x0005f02e) list_medium_line_t4_g4_g3_ParamLimits

0x3250,	// (0x0005f02e) list_medium_line_t4_g4_g3

0x1d90,	// (0x0005db6e) list_medium_line_t4_g4_g4_ParamLimits

0x1d90,	// (0x0005db6e) list_medium_line_t4_g4_g4

0x0003,

0xf326,	// (0x0006b104) list_medium_line_t4_g4_g_ParamLimits

0xf326,	// (0x0006b104) list_medium_line_t4_g4_g

0x325c,	// (0x0005f03a) list_medium_line_t4_g4_t1_ParamLimits

0x325c,	// (0x0005f03a) list_medium_line_t4_g4_t1

0x3271,	// (0x0005f04f) list_medium_line_t4_g4_t2_ParamLimits

0x3271,	// (0x0005f04f) list_medium_line_t4_g4_t2

0x3287,	// (0x0005f065) list_medium_line_t4_g4_t3_ParamLimits

0x3287,	// (0x0005f065) list_medium_line_t4_g4_t3

0x1dc3,	// (0x0005dba1) list_medium_line_t4_g4_t4_ParamLimits

0x1dc3,	// (0x0005dba1) list_medium_line_t4_g4_t4

0x0003,

0xf32f,	// (0x0006b10d) list_medium_line_t4_g4_t_ParamLimits

0xf32f,	// (0x0006b10d) list_medium_line_t4_g4_t

0x33a8,	// (0x0005f186) chi_dic_find_pane_g1

0x42aa,	// (0x00060088) main_tport_pane

0x6df7,	// (0x00062bd5) list_medium_line_plain_t1

0x6ed7,	// (0x00062cb5) list_medium_line_t2_g2_g1_ParamLimits

0x6ed7,	// (0x00062cb5) list_medium_line_t2_g2_g1

0x6ee3,	// (0x00062cc1) list_medium_line_t2_g2_g2_ParamLimits

0x6ee3,	// (0x00062cc1) list_medium_line_t2_g2_g2

0x0001,

0xf80a,	// (0x0006b5e8) list_medium_line_t2_g2_g_ParamLimits

0xf80a,	// (0x0006b5e8) list_medium_line_t2_g2_g

0x6eef,	// (0x00062ccd) list_medium_line_t2_g2_t1_ParamLimits

0x6eef,	// (0x00062ccd) list_medium_line_t2_g2_t1

0x6f09,	// (0x00062ce7) list_medium_line_t2_g2_t2_ParamLimits

0x6f09,	// (0x00062ce7) list_medium_line_t2_g2_t2

0x0001,

0xf80f,	// (0x0006b5ed) list_medium_line_t2_g2_t_ParamLimits

0xf80f,	// (0x0006b5ed) list_medium_line_t2_g2_t

0x9fca,	// (0x00065da8) aid_sp_fs_list_icon_a_sm

0x9fd2,	// (0x00065db0) aid_sp_fs_list_icon_d

0x9fda,	// (0x00065db8) aid_sp_fs_text_primary

0xe820,	// (0x0006a5fe) aid_sp_fs_text_secondary

0x75b0,	// (0x0006338e) list_medium_line

0x75b0,	// (0x0006338e) list_medium_line_g2

0x75b0,	// (0x0006338e) list_medium_line_g3

0x75b0,	// (0x0006338e) list_medium_line_plain

0x75b0,	// (0x0006338e) list_medium_line_plain_t2

0x75b0,	// (0x0006338e) list_medium_line_plain_t3

0x75b0,	// (0x0006338e) list_medium_line_right_icon

0x75b0,	// (0x0006338e) list_medium_line_right_iconx2

0x75b0,	// (0x0006338e) list_medium_line_t2

0x75b0,	// (0x0006338e) list_medium_line_t2_g2

0x75b0,	// (0x0006338e) list_medium_line_t2_g3

0x75b0,	// (0x0006338e) list_medium_line_t2_right_icon

0x75b0,	// (0x0006338e) list_medium_line_t2_right_iconx2

0x75b0,	// (0x0006338e) list_medium_line_t3

0x75b0,	// (0x0006338e) list_medium_line_t3_g2

0x75b0,	// (0x0006338e) list_medium_line_t3_g3

0x75b0,	// (0x0006338e) list_medium_line_t3_right_iconx2

0x75b9,	// (0x00063397) list_medium_line_t4_g4

0x75c2,	// (0x000633a0) list_medium_line_x2

0x75c2,	// (0x000633a0) list_medium_line_x2_t2_g2

0x75c2,	// (0x000633a0) list_medium_line_x2_t2_g3

0x75c2,	// (0x000633a0) list_medium_line_x2_t2_g4

0x75c2,	// (0x000633a0) list_medium_line_x2_t3

0x75c2,	// (0x000633a0) list_medium_line_x2_t3_g2

0x75c2,	// (0x000633a0) list_medium_line_x2_t3_g3

0x75c2,	// (0x000633a0) list_medium_line_x2_t3_g4

0x75c2,	// (0x000633a0) list_medium_line_x2_t4_g2

0x75c2,	// (0x000633a0) list_medium_line_x2_t4_g4

0x75cb,	// (0x000633a9) list_medium_line_x3

0x75cb,	// (0x000633a9) list_medium_line_x3_t4

0x75cb,	// (0x000633a9) list_medium_line_x3_t4_g4

0x75b9,	// (0x00063397) list_medium_line_x4_t4

0x75b9,	// (0x00063397) list_medium_line_x4_t4_g7

0x75b9,	// (0x00063397) list_medium_line_x4_t5

0x75d4,	// (0x000633b2) list_single_fs_dyc_pane_ParamLimits

0x75d4,	// (0x000633b2) list_single_fs_dyc_pane

0x1d78,	// (0x0005db56) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x4_t4_g7_g1

0x7d2f,	// (0x00063b0d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d2f,	// (0x00063b0d) list_medium_line_x4_t4_g7_g2

0x7d3b,	// (0x00063b19) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d3b,	// (0x00063b19) list_medium_line_x4_t4_g7_g3

0x7d4a,	// (0x00063b28) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d4a,	// (0x00063b28) list_medium_line_x4_t4_g7_g4

0x7d56,	// (0x00063b34) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d56,	// (0x00063b34) list_medium_line_x4_t4_g7_g5

0x7d65,	// (0x00063b43) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d65,	// (0x00063b43) list_medium_line_x4_t4_g7_g6

0x7d74,	// (0x00063b52) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d74,	// (0x00063b52) list_medium_line_x4_t4_g7_g7

0x0006,

0xf98d,	// (0x0006b76b) list_medium_line_x4_t4_g7_g_ParamLimits

0xf98d,	// (0x0006b76b) list_medium_line_x4_t4_g7_g

0x7d80,	// (0x00063b5e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d80,	// (0x00063b5e) list_medium_line_x4_t4_g7_t1

0x7d95,	// (0x00063b73) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d95,	// (0x00063b73) list_medium_line_x4_t4_g7_t2

0x7daa,	// (0x00063b88) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7daa,	// (0x00063b88) list_medium_line_x4_t4_g7_t3

0x7dbf,	// (0x00063b9d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7dbf,	// (0x00063b9d) list_medium_line_x4_t4_g7_t4

0x7dd1,	// (0x00063baf) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7dd1,	// (0x00063baf) list_medium_line_x4_t4_g7_t5

0x0004,

0xf99c,	// (0x0006b77a) list_medium_line_x4_t4_g7_t_ParamLimits

0xf99c,	// (0x0006b77a) list_medium_line_x4_t4_g7_t

0x7de3,	// (0x00063bc1) list_single_dyc_row_pane_ParamLimits

0x7de3,	// (0x00063bc1) list_single_dyc_row_pane

0x84bc,	// (0x0006429a) call5_gesture_pane_ParamLimits

0x84bc,	// (0x0006429a) call5_gesture_pane

0x84f0,	// (0x000642ce) call5_windows_pane_ParamLimits

0x84f0,	// (0x000642ce) call5_windows_pane

0x8543,	// (0x00064321) call5_swipe_1_pane_cp_ParamLimits

0x8543,	// (0x00064321) call5_swipe_1_pane_cp

0x854f,	// (0x0006432d) call5_swipe_2_pane_cp_ParamLimits

0x854f,	// (0x0006432d) call5_swipe_2_pane_cp

0xaabe,	// (0x0006689c) call5_image_pane_cp

0x855b,	// (0x00064339) popup_call5_audio_first_window_cp_ParamLimits

0x855b,	// (0x00064339) popup_call5_audio_first_window_cp

0xe69d,	// (0x0006a47b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe69d,	// (0x0006a47b) call5_swipe_1_pane_g1_cp

0xe725,	// (0x0006a503) call5_swipe_1_pane_g2_cp

0xe6d1,	// (0x0006a4af) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6d1,	// (0x0006a4af) call5_swipe_1_pane_t1_cp

0xe69d,	// (0x0006a47b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe69d,	// (0x0006a47b) call5_swipe_2_pane_g1_cp

0xe72d,	// (0x0006a50b) call5_swipe_2_pane_g2_cp

0xe735,	// (0x0006a513) call5_swipe_2_pane_t1_cp_ParamLimits

0xe735,	// (0x0006a513) call5_swipe_2_pane_t1_cp

0xa579,	// (0x00066357) main_sp_fs_email_pane

0xe74a,	// (0x0006a528) main_sp_fs_listscroll_pane_te

0x9fe3,	// (0x00065dc1) popup_sp_fs_action_menu_pane_ParamLimits

0x9fe3,	// (0x00065dc1) popup_sp_fs_action_menu_pane

0xcd6a,	// (0x00068b48) bg_sp_fs_ctrlbar_pane_g1

0xe753,	// (0x0006a531) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe75c,	// (0x0006a53a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe765,	// (0x0006a543) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd6a,	// (0x00068b48) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa1d,	// (0x0006b7fb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb4f,	// (0x0006892d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb4f,	// (0x0006892d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe76e,	// (0x0006a54c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe76e,	// (0x0006a54c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe77a,	// (0x0006a558) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe77a,	// (0x0006a558) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfa26,	// (0x0006b804) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfa26,	// (0x0006b804) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe786,	// (0x0006a564) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe786,	// (0x0006a564) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8569,	// (0x00064347) list_medium_line_t2_right_icon_g1

0x8571,	// (0x0006434f) list_medium_line_t2_right_icon_t1

0x8581,	// (0x0006435f) list_medium_line_t2_right_icon_t2

0x0001,

0xfa2b,	// (0x0006b809) list_medium_line_t2_right_icon_t

0xc962,	// (0x00068740) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc962,	// (0x00068740) bg_sp_fs_ctrlbar_pane

0x85d2,	// (0x000643b0) main_sp_fs_ctrlbar_button_pane_cp01

0x85da,	// (0x000643b8) main_sp_fs_ctrlbar_ddmenu_pane

0xe7d8,	// (0x0006a5b6) main_sp_fs_ctrlbar_pane_g1

0xe7e4,	// (0x0006a5c2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfa30,	// (0x0006b80e) main_sp_fs_ctrlbar_pane_g

0xe7f0,	// (0x0006a5ce) main_sp_fs_ctrlbar_pane_t1

0x85e4,	// (0x000643c2) main_sp_fs_ctrlbar_pane

0x85fa,	// (0x000643d8) main_sp_fs_listscroll_pane_te_cp01

0x860b,	// (0x000643e9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x860b,	// (0x000643e9) popup_sp_fs_action_menu_pane_cp01

0xa579,	// (0x00066357) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa579,	// (0x00066357) bg_sp_fs_highlight_list_pane_cp01

0xa025,	// (0x00065e03) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa025,	// (0x00065e03) sp_fs_action_menu_list_gene_pane_g1

0xe829,	// (0x0006a607) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe829,	// (0x0006a607) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa3a,	// (0x0006b818) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa3a,	// (0x0006b818) sp_fs_action_menu_list_gene_pane_g

0xa034,	// (0x00065e12) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa034,	// (0x00065e12) sp_fs_action_menu_list_gene_pane_t1

0xa04c,	// (0x00065e2a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa04c,	// (0x00065e2a) sp_fs_action_menu_list_gene_pane

0xe836,	// (0x0006a614) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe836,	// (0x0006a614) popup_sp_fs_action_menu_bg_pane

0xa06b,	// (0x00065e49) sp_fs_action_menu_list_pane_ParamLimits

0xa06b,	// (0x00065e49) sp_fs_action_menu_list_pane

0xa08b,	// (0x00065e69) sp_fs_scroll_pane_cp01_ParamLimits

0xa08b,	// (0x00065e69) sp_fs_scroll_pane_cp01

0x8635,	// (0x00064413) list_medium_line_plain_t2_t1

0x8645,	// (0x00064423) list_medium_line_plain_t2_t2

0x0001,

0xfa3f,	// (0x0006b81d) list_medium_line_plain_t2_t

0x8653,	// (0x00064431) list_medium_line_plain_t3_t1

0x8663,	// (0x00064441) list_medium_line_plain_t3_t2

0x8671,	// (0x0006444f) list_medium_line_plain_t3_t3

0x0002,

0xfa44,	// (0x0006b822) list_medium_line_plain_t3_t

0x1d78,	// (0x0005db56) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x2_t2_g2_g1

0x1d90,	// (0x0005db6e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d90,	// (0x0005db6e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0006b020) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0006b020) list_medium_line_x2_t2_g2_g

0x325c,	// (0x0005f03a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x325c,	// (0x0005f03a) list_medium_line_x2_t2_g2_t1

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa4b,	// (0x0006b829) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa4b,	// (0x0006b829) list_medium_line_x2_t2_g2_t

0x1d78,	// (0x0005db56) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x2_t4_g2_g1

0x867f,	// (0x0006445d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x867f,	// (0x0006445d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa50,	// (0x0006b82e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa50,	// (0x0006b82e) list_medium_line_x2_t4_g2_g

0x8691,	// (0x0006446f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8691,	// (0x0006446f) list_medium_line_x2_t4_g2_t1

0x86ab,	// (0x00064489) list_medium_line_x2_t4_g2_t2_ParamLimits

0x86ab,	// (0x00064489) list_medium_line_x2_t4_g2_t2

0x86c1,	// (0x0006449f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x86c1,	// (0x0006449f) list_medium_line_x2_t4_g2_t3

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa55,	// (0x0006b833) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa55,	// (0x0006b833) list_medium_line_x2_t4_g2_t

0x86d6,	// (0x000644b4) list_medium_line_t3_right_iconx2_g1

0x8569,	// (0x00064347) list_medium_line_t3_right_iconx2_g2

0x86de,	// (0x000644bc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa5e,	// (0x0006b83c) list_medium_line_t3_right_iconx2_g

0x86e6,	// (0x000644c4) list_medium_line_t3_right_iconx2_t1

0x86f6,	// (0x000644d4) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa65,	// (0x0006b843) list_medium_line_t3_right_iconx2_t

0x1d78,	// (0x0005db56) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x3_t4_g4_g1

0x1d84,	// (0x0005db62) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1d84,	// (0x0005db62) list_medium_line_x3_t4_g4_g2

0x1e29,	// (0x0005dc07) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1e29,	// (0x0005dc07) list_medium_line_x3_t4_g4_g3

0x8704,	// (0x000644e2) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8704,	// (0x000644e2) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa6a,	// (0x0006b848) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa6a,	// (0x0006b848) list_medium_line_x3_t4_g4_g

0x8710,	// (0x000644ee) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8710,	// (0x000644ee) list_medium_line_x3_t4_g4_t1

0x8727,	// (0x00064505) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8727,	// (0x00064505) list_medium_line_x3_t4_g4_t2

0x873c,	// (0x0006451a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x873c,	// (0x0006451a) list_medium_line_x3_t4_g4_t3

0x8751,	// (0x0006452f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8751,	// (0x0006452f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa73,	// (0x0006b851) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa73,	// (0x0006b851) list_medium_line_x3_t4_g4_t

0x876e,	// (0x0006454c) list_single_dyc_row_text_pane_t1_ParamLimits

0x876e,	// (0x0006454c) list_single_dyc_row_text_pane_t1

0x87a5,	// (0x00064583) list_single_dyc_row_text_pane_t2_ParamLimits

0x87a5,	// (0x00064583) list_single_dyc_row_text_pane_t2

0xa0b1,	// (0x00065e8f) list_single_dyc_row_text_pane_t3_ParamLimits

0xa0b1,	// (0x00065e8f) list_single_dyc_row_text_pane_t3

0x0005,

0xfa7c,	// (0x0006b85a) list_single_dyc_row_text_pane_t_ParamLimits

0xfa7c,	// (0x0006b85a) list_single_dyc_row_text_pane_t

0xa0d5,	// (0x00065eb3) list_single_dyc_row_pane_g1_ParamLimits

0xa0d5,	// (0x00065eb3) list_single_dyc_row_pane_g1

0xa0e1,	// (0x00065ebf) list_single_dyc_row_pane_g2_ParamLimits

0xa0e1,	// (0x00065ebf) list_single_dyc_row_pane_g2

0xa0ed,	// (0x00065ecb) list_single_dyc_row_pane_g3_ParamLimits

0xa0ed,	// (0x00065ecb) list_single_dyc_row_pane_g3

0xa0f9,	// (0x00065ed7) list_single_dyc_row_pane_g4_ParamLimits

0xa0f9,	// (0x00065ed7) list_single_dyc_row_pane_g4

0x0003,

0xfa89,	// (0x0006b867) list_single_dyc_row_pane_g_ParamLimits

0xfa89,	// (0x0006b867) list_single_dyc_row_pane_g

0xa105,	// (0x00065ee3) list_single_dyc_row_text_pane_ParamLimits

0xa105,	// (0x00065ee3) list_single_dyc_row_text_pane

0x9bf6,	// (0x000659d4) bg_sp_fs_scroll_pane

0xe844,	// (0x0006a622) thumb_sp_fs_scroll_pane

0x6ed7,	// (0x00062cb5) list_medium_line_g1_ParamLimits

0x6ed7,	// (0x00062cb5) list_medium_line_g1

0x88c8,	// (0x000646a6) list_medium_line_t1_ParamLimits

0x88c8,	// (0x000646a6) list_medium_line_t1

0x1d78,	// (0x0005db56) list_medium_line_x2_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x2_g1

0x1d84,	// (0x0005db62) list_medium_line_x2_g2_ParamLimits

0x1d84,	// (0x0005db62) list_medium_line_x2_g2

0x0001,

0xfa92,	// (0x0006b870) list_medium_line_x2_g_ParamLimits

0xfa92,	// (0x0006b870) list_medium_line_x2_g

0xa124,	// (0x00065f02) list_medium_line_x2_t1_ParamLimits

0xa124,	// (0x00065f02) list_medium_line_x2_t1

0x1d78,	// (0x0005db56) list_medium_line_x3_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x3_g1

0x1d84,	// (0x0005db62) list_medium_line_x3_g2_ParamLimits

0x1d84,	// (0x0005db62) list_medium_line_x3_g2

0x0001,

0xfa92,	// (0x0006b870) list_medium_line_x3_g_ParamLimits

0xfa92,	// (0x0006b870) list_medium_line_x3_g

0xa124,	// (0x00065f02) list_medium_line_x3_t1_ParamLimits

0xa124,	// (0x00065f02) list_medium_line_x3_t1

0xe84d,	// (0x0006a62b) thumb_sp_fs_scroll_pane_g1

0xe856,	// (0x0006a634) thumb_sp_fs_scroll_pane_g2

0xe85f,	// (0x0006a63d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfa97,	// (0x0006b875) thumb_sp_fs_scroll_pane_g

0xe84d,	// (0x0006a62b) bg_sp_fs_scroll_pane_g1

0xe856,	// (0x0006a634) bg_sp_fs_scroll_pane_g2

0xe85f,	// (0x0006a63d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfa97,	// (0x0006b875) bg_sp_fs_scroll_pane_g

0x1d78,	// (0x0005db56) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d78,	// (0x0005db56) list_medium_line_x2_t3_g4_g1

0x1e1d,	// (0x0005dbfb) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1e1d,	// (0x0005dbfb) list_medium_line_x2_t3_g4_g2

0x1d84,	// (0x0005db62) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1d84,	// (0x0005db62) list_medium_line_x2_t3_g4_g3

0x1d90,	// (0x0005db6e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d90,	// (0x0005db6e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0006b09c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0006b09c) list_medium_line_x2_t3_g4_g

0x88dd,	// (0x000646bb) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88dd,	// (0x000646bb) list_medium_line_x2_t3_g4_t1

0x88f3,	// (0x000646d1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88f3,	// (0x000646d1) list_medium_line_x2_t3_g4_t2

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1dc3,	// (0x0005dba1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfa9e,	// (0x0006b87c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfa9e,	// (0x0006b87c) list_medium_line_x2_t3_g4_t

0x6ed7,	// (0x00062cb5) list_medium_line_g2_g1_ParamLimits

0x6ed7,	// (0x00062cb5) list_medium_line_g2_g1

0x6ee3,	// (0x00062cc1) list_medium_line_g2_g2_ParamLimits

0x6ee3,	// (0x00062cc1) list_medium_line_g2_g2

0x0001,

0xf80a,	// (0x0006b5e8) list_medium_line_g2_g_ParamLimits

0xf80a,	// (0x0006b5e8) list_medium_line_g2_g

0x890d,	// (0x000646eb) list_medium_line_g2_t1_ParamLimits

0x890d,	// (0x000646eb) list_medium_line_g2_t1

0x6ed7,	// (0x00062cb5) list_medium_line_t3_g2_g1_ParamLimits

0x6ed7,	// (0x00062cb5) list_medium_line_t3_g2_g1

0x6ee3,	// (0x00062cc1) list_medium_line_t3_g2_g2_ParamLimits

0x6ee3,	// (0x00062cc1) list_medium_line_t3_g2_g2

0x0001,

0xf80a,	// (0x0006b5e8) list_medium_line_t3_g2_g_ParamLimits

0xf80a,	// (0x0006b5e8) list_medium_line_t3_g2_g

0x8922,	// (0x00064700) list_medium_line_t3_g2_t1_ParamLimits

0x8922,	// (0x00064700) list_medium_line_t3_g2_t1

0x893c,	// (0x0006471a) list_medium_line_t3_g2_t2_ParamLimits

0x893c,	// (0x0006471a) list_medium_line_t3_g2_t2

0x8952,	// (0x00064730) list_medium_line_t3_g2_t3_ParamLimits

0x8952,	// (0x00064730) list_medium_line_t3_g2_t3

0x0002,

0xfaa5,	// (0x0006b883) list_medium_line_t3_g2_t_ParamLimits

0xfaa5,	// (0x0006b883) list_medium_line_t3_g2_t

0x8569,	// (0x00064347) list_medium_line_right_icon_g1

0x8968,	// (0x00064746) list_medium_line_right_icon_t1

0x6ed7,	// (0x00062cb5) list_medium_line_t2_g1_ParamLimits

0x6ed7,	// (0x00062cb5) list_medium_line_t2_g1

0x8976,	// (0x00064754) list_medium_line_t2_t1_ParamLimits

0x8976,	// (0x00064754) list_medium_line_t2_t1

0x8990,	// (0x0006476e) list_medium_line_t2_t2_ParamLimits

0x8990,	// (0x0006476e) list_medium_line_t2_t2

0x0001,

0xfaac,	// (0x0006b88a) list_medium_line_t2_t_ParamLimits

0xfaac,	// (0x0006b88a) list_medium_line_t2_t

0x6ed7,	// (0x00062cb5) list_medium_line_t3_g1_ParamLimits

0x6ed7,	// (0x00062cb5) list_medium_line_t3_g1

0x89a5,	// (0x00064783) list_medium_line_t3_t1_ParamLimits

0x89a5,	// (0x00064783) list_medium_line_t3_t1

0x89bf,	// (0x0006479d) list_medium_line_t3_t2_ParamLimits

0x89bf,	// (0x0006479d) list_medium_line_t3_t2

0x89d5,	// (0x000647b3) list_medium_line_t3_t3_ParamLimits

0x89d5,	// (0x000647b3) list_medium_line_t3_t3

0x0002,

0xfab1,	// (0x0006b88f) list_medium_line_t3_t_ParamLimits

0xfab1,	// (0x0006b88f) list_medium_line_t3_t

0x6ed7,	// (0x00062cb5) list_medium_line_g3_g1_ParamLimits

0x6ed7,	// (0x00062cb5) list_medium_line_g3_g1

0x89ea,	// (0x000647c8) list_medium_line_g3_g2_ParamLimits

0x89ea,	// (0x000647c8) list_medium_line_g3_g2

0x6ee3,	// (0x00062cc1) list_medium_line_g3_g3_ParamLimits

0x6ee3,	// (0x00062cc1) list_medium_line_g3_g3

0x0002,

0xfab8,	// (0x0006b896) list_medium_line_g3_g_ParamLimits

0xfab8,	// (0x0006b896) list_medium_line_g3_g

0x89f6,	// (0x000647d4) list_medium_line_g3_t1_ParamLimits

0x89f6,	// (0x000647d4) list_medium_line_g3_t1

0x6ed7,	// (0x00062cb5) list_medium_line_t2_g3_g1_ParamLimits

0x6ed7,	// (0x00062cb5) list_medium_line_t2_g3_g1

0x89ea,	// (0x000647c8) list_medium_line_t2_g3_g2_ParamLimits

0x89ea,	// (0x000647c8) list_medium_line_t2_g3_g2

0x6ee3,	// (0x00062cc1) list_medium_line_t2_g3_g3_ParamLimits

0x6ee3,	// (0x00062cc1) list_medium_line_t2_g3_g3

0x0002,

0xfab8,	// (0x0006b896) list_medium_line_t2_g3_g_ParamLimits

0xfab8,	// (0x0006b896) list_medium_line_t2_g3_g

0x8a0b,	// (0x000647e9) list_medium_line_t2_g3_t1_ParamLimits

0x8a0b,	// (0x000647e9) list_medium_line_t2_g3_t1

0x8a25,	// (0x00064803) list_medium_line_t2_g3_t2_ParamLimits

0x8a25,	// (0x00064803) list_medium_line_t2_g3_t2

0x0001,

0xfabf,	// (0x0006b89d) list_medium_line_t2_g3_t_ParamLimits

0xfabf,	// (0x0006b89d) list_medium_line_t2_g3_t

0x6ed7,	// (0x00062cb5) list_medium_line_t3_g3_g1_ParamLimits

0x6ed7,	// (0x00062cb5) list_medium_line_t3_g3_g1

0x89ea,	// (0x000647c8) list_medium_line_t3_g3_g2_ParamLimits

0x89ea,	// (0x000647c8) list_medium_line_t3_g3_g2

0x6ee3,	// (0x00062cc1) list_medium_line_t3_g3_g3_ParamLimits

0x6ee3,	// (0x00062cc1) list_medium_line_t3_g3_g3

0x0002,

0xfab8,	// (0x0006b896) list_medium_line_t3_g3_g_ParamLimits

0xfab8,	// (0x0006b896) list_medium_line_t3_g3_g

0x8a3b,	// (0x00064819) list_medium_line_t3_g3_t1_ParamLimits

0x8a3b,	// (0x00064819) list_medium_line_t3_g3_t1

0x8a54,	// (0x00064832) list_medium_line_t3_g3_t2_ParamLimits

0x8a54,	// (0x00064832) list_medium_line_t3_g3_t2

0x8a6a,	// (0x00064848) list_medium_line_t3_g3_t3_ParamLimits

0x8a6a,	// (0x00064848) list_medium_line_t3_g3_t3

0x0002,

0xfac4,	// (0x0006b8a2) list_medium_line_t3_g3_t_ParamLimits

0xfac4,	// (0x0006b8a2) list_medium_line_t3_g3_t

0x86d6,	// (0x000644b4) list_medium_line_right_iconx2_g1

0x8569,	// (0x00064347) list_medium_line_right_iconx2_g2

0x0001,

0xfacb,	// (0x0006b8a9) list_medium_line_right_iconx2_g

0x8a80,	// (0x0006485e) list_medium_line_right_iconx2_t1

0x86d6,	// (0x000644b4) list_medium_line_t2_right_iconx2_g1

0x8569,	// (0x00064347) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfacb,	// (0x0006b8a9) list_medium_line_t2_right_iconx2_g

0x8a8e,	// (0x0006486c) list_medium_line_t2_right_iconx2_t1

0x8a9e,	// (0x0006487c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfad0,	// (0x0006b8ae) list_medium_line_t2_right_iconx2_t

0x8aac,	// (0x0006488a) list_medium_line_x4_t4_t1

0x8aba,	// (0x00064898) list_medium_line_x4_t4_t2

0x8aca,	// (0x000648a8) list_medium_line_x4_t4_t3

0x8ada,	// (0x000648b8) list_medium_line_x4_t4_t4

0x0003,

0xfad5,	// (0x0006b8b3) list_medium_line_x4_t4_t

0x8b14,	// (0x000648f2) tport_appsw_pane_ParamLimits

0x8b14,	// (0x000648f2) tport_appsw_pane

0x8b22,	// (0x00064900) tport_contact_pane_ParamLimits

0x8b22,	// (0x00064900) tport_contact_pane

0x8b32,	// (0x00064910) tport_listscroll_pane_ParamLimits

0x8b32,	// (0x00064910) tport_listscroll_pane

0x8b42,	// (0x00064920) cell_tport_appsw_pane_ParamLimits

0x8b42,	// (0x00064920) cell_tport_appsw_pane

0xd014,	// (0x00068df2) tport_appsw_pane_g1_ParamLimits

0xd014,	// (0x00068df2) tport_appsw_pane_g1

0xe868,	// (0x0006a646) tport_contact_pane_g1

0xe871,	// (0x0006a64f) tport_contact_pane_t1

0xe87f,	// (0x0006a65d) tport_contact_pane_t2

0x0001,

0xfade,	// (0x0006b8bc) tport_contact_pane_t

0xe88d,	// (0x0006a66b) list_tport_pane

0xe896,	// (0x0006a674) scroll_pane_cp_030

0x8b75,	// (0x00064953) cell_tport_appsw_pane_g1

0x8b85,	// (0x00064963) cell_tport_appsw_pane_t1

0x8b93,	// (0x00064971) grid_highlight_pane_cp019

0x8b9b,	// (0x00064979) list_tport_double_graphic_pane_ParamLimits

0x8b9b,	// (0x00064979) list_tport_double_graphic_pane

0xa579,	// (0x00066357) list_highlight_pane_cp023_ParamLimits

0xa579,	// (0x00066357) list_highlight_pane_cp023

0x8bac,	// (0x0006498a) list_tport_double_graphic_pane_g1_ParamLimits

0x8bac,	// (0x0006498a) list_tport_double_graphic_pane_g1

0x8bb9,	// (0x00064997) list_tport_double_graphic_pane_t1_ParamLimits

0x8bb9,	// (0x00064997) list_tport_double_graphic_pane_t1

0x8bce,	// (0x000649ac) list_tport_double_graphic_pane_t2_ParamLimits

0x8bce,	// (0x000649ac) list_tport_double_graphic_pane_t2

0x0001,

0xfaea,	// (0x0006b8c8) list_tport_double_graphic_pane_t_ParamLimits

0xfaea,	// (0x0006b8c8) list_tport_double_graphic_pane_t

0x9bf6,	// (0x000659d4) main_cale_note_pane

0x666a,	// (0x00062448) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x666a,	// (0x00062448) cell_vitu2_function_top_wide_pane_cp01

0x818f,	// (0x00063f6d) wait_bar_pane_cp05_ParamLimits

0xa579,	// (0x00066357) listscroll_cmail_pane

0xe89f,	// (0x0006a67d) list_cmail_pane

0x8be0,	// (0x000649be) list_cmail_body_pane

0x8c08,	// (0x000649e6) list_single_cmail_header_caption_pane

0x8c34,	// (0x00064a12) list_single_cmail_header_detail_pane_ParamLimits

0x8c34,	// (0x00064a12) list_single_cmail_header_detail_pane

0xe8af,	// (0x0006a68d) list_single_cmail_header_caption_pane_t1

0x8c6d,	// (0x00064a4b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c6d,	// (0x00064a4b) list_single_cmail_header_detail_pane_g1

0xa13a,	// (0x00065f18) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa13a,	// (0x00065f18) list_single_cmail_header_detail_pane_g2

0x0002,

0xfaef,	// (0x0006b8cd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfaef,	// (0x0006b8cd) list_single_cmail_header_detail_pane_g

0xa146,	// (0x00065f24) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa146,	// (0x00065f24) list_single_cmail_header_detail_pane_t1

0xa1a6,	// (0x00065f84) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa1a6,	// (0x00065f84) list_single_cmail_header_editor_pane_bg

0xe34b,	// (0x0006a129) list_cmail_body_pane_g1

0xe8d3,	// (0x0006a6b1) list_cmail_body_pane_t1

0xd715,	// (0x000694f3) list_single_cmail_header_editor_pane_bg_g1

0xad35,	// (0x00066b13) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd725,	// (0x00069503) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd71d,	// (0x000694fb) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd951,	// (0x0006972f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd745,	// (0x00069523) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd735,	// (0x00069513) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd73d,	// (0x0006951b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xad15,	// (0x00066af3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c83,	// (0x00064a61) calenote_gesture_pane_ParamLimits

0x8c83,	// (0x00064a61) calenote_gesture_pane

0x8c9d,	// (0x00064a7b) calenote_window_pane_ParamLimits

0x8c9d,	// (0x00064a7b) calenote_window_pane

0xe8e1,	// (0x0006a6bf) popup_note_window_cp01

0x8cb5,	// (0x00064a93) calenote_swipe_1_pane_ParamLimits

0x8cb5,	// (0x00064a93) calenote_swipe_1_pane

0x854f,	// (0x0006432d) calenote_swipe_2_pane_ParamLimits

0x854f,	// (0x0006432d) calenote_swipe_2_pane

0xe69d,	// (0x0006a47b) calenote_swipe_1_pane_g1_ParamLimits

0xe69d,	// (0x0006a47b) calenote_swipe_1_pane_g1

0xe6c5,	// (0x0006a4a3) calenote_swipe_1_pane_g2_ParamLimits

0xe6c5,	// (0x0006a4a3) calenote_swipe_1_pane_g2

0x0001,

0xfa13,	// (0x0006b7f1) calenote_swipe_1_pane_g_ParamLimits

0xfa13,	// (0x0006b7f1) calenote_swipe_1_pane_g

0xe8f3,	// (0x0006a6d1) calenote_swipe_1_pane_t1_ParamLimits

0xe8f3,	// (0x0006a6d1) calenote_swipe_1_pane_t1

0xe69d,	// (0x0006a47b) calenote_swipe_2_pane_g1_ParamLimits

0xe69d,	// (0x0006a47b) calenote_swipe_2_pane_g1

0xe912,	// (0x0006a6f0) calenote_swipe_2_pane_g2_ParamLimits

0xe912,	// (0x0006a6f0) calenote_swipe_2_pane_g2

0x0001,

0xfafb,	// (0x0006b8d9) calenote_swipe_2_pane_g_ParamLimits

0xfafb,	// (0x0006b8d9) calenote_swipe_2_pane_g

0xe91e,	// (0x0006a6fc) calenote_swipe_2_pane_t1_ParamLimits

0xe91e,	// (0x0006a6fc) calenote_swipe_2_pane_t1

0x9bf6,	// (0x000659d4) main_mup_navstr_pane

0x529e,	// (0x0006107c) main_mup3_pane_t7_ParamLimits

0x529e,	// (0x0006107c) main_mup3_pane_t7

0x5ce5,	// (0x00061ac3) main_mp4_pane_g6_ParamLimits

0x5ce5,	// (0x00061ac3) main_mp4_pane_g6

0x6083,	// (0x00061e61) main_image3_pane_t4_ParamLimits

0x6083,	// (0x00061e61) main_image3_pane_t4

0x8cc8,	// (0x00064aa6) popup_navstr_preview_pane_ParamLimits

0x8cc8,	// (0x00064aa6) popup_navstr_preview_pane

0x8cd4,	// (0x00064ab2) scroll_navstr_pane_ParamLimits

0x8cd4,	// (0x00064ab2) scroll_navstr_pane

0x9bf6,	// (0x000659d4) bg_popup_preview_window_pane_cp04

0xe945,	// (0x0006a723) popup_navstr_preview_pane_t1

0x8ce0,	// (0x00064abe) scroll_navstr_pane_g1_ParamLimits

0x8ce0,	// (0x00064abe) scroll_navstr_pane_g1

0x8ced,	// (0x00064acb) scroll_navstr_pane_t1_ParamLimits

0x8ced,	// (0x00064acb) scroll_navstr_pane_t1

0xe8ea,	// (0x0006a6c8) bg_button_pane_cp014

0xe8ea,	// (0x0006a6c8) bg_button_pane_cp030

0x8462,	// (0x00064240) list_double_fisheye_pane_g4_ParamLimits

0x8462,	// (0x00064240) list_double_fisheye_pane_g4

0x846e,	// (0x0006424c) list_double_fisheye_pane_g5_ParamLimits

0x846e,	// (0x0006424c) list_double_fisheye_pane_g5

0xd21f,	// (0x00068ffd) sp_fs_scroll_pane_cp03

0xe7d8,	// (0x0006a5b6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7e4,	// (0x0006a5c2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfa30,	// (0x0006b80e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7f0,	// (0x0006a5ce) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8a7,	// (0x0006a685) sp_fs_scroll_pane_cp02

0xa9fd,	// (0x000667db) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9fd,	// (0x000667db) popup_sp_fs_calendar_preview_list_single_pane

0x9bf6,	// (0x000659d4) main_cam6_pano_pane

0x428e,	// (0x0006006c) main_mup3_pane_ParamLimits

0x9bf6,	// (0x000659d4) main_phacti_pane

0x8064,	// (0x00063e42) bg_button_pane_cp11

0x807c,	// (0x00063e5a) main_mobtv_info_pane_g2_ParamLimits

0x807c,	// (0x00063e5a) main_mobtv_info_pane_g2

0x0001,

0xf9c5,	// (0x0006b7a3) main_mobtv_info_pane_g_ParamLimits

0xf9c5,	// (0x0006b7a3) main_mobtv_info_pane_g

0x822e,	// (0x0006400c) sc_clock_pane_t5_ParamLimits

0x822e,	// (0x0006400c) sc_clock_pane_t5

0x82cf,	// (0x000640ad) main_radioblah_pane_g1_ParamLimits

0xe5e9,	// (0x0006a3c7) main_radioblah_pane_t3_ParamLimits

0xe5e9,	// (0x0006a3c7) main_radioblah_pane_t3

0xe601,	// (0x0006a3df) main_radioblah_pane_t4_ParamLimits

0xe601,	// (0x0006a3df) main_radioblah_pane_t4

0x82ed,	// (0x000640cb) main_radioblah_text_pane_ParamLimits

0x82ed,	// (0x000640cb) main_radioblah_text_pane

0x82fa,	// (0x000640d8) main_radioblah_info_pane_g1_ParamLimits

0x838f,	// (0x0006416d) main_radioblah_info_pane_t4_ParamLimits

0x838f,	// (0x0006416d) main_radioblah_info_pane_t4

0xa579,	// (0x00066357) main_sp_fs_calendar_pane

0x8cff,	// (0x00064add) main_phacti_pane_g1

0x8d07,	// (0x00064ae5) phacti_note_pane_ParamLimits

0x8d07,	// (0x00064ae5) phacti_note_pane

0xe95c,	// (0x0006a73a) phacti_term_pane_ParamLimits

0xe95c,	// (0x0006a73a) phacti_term_pane

0xe971,	// (0x0006a74f) phacti_note_pane_t1_ParamLimits

0xe971,	// (0x0006a74f) phacti_note_pane_t1

0xa1bd,	// (0x00065f9b) phacti_term_pane_g1

0xa1c5,	// (0x00065fa3) phacti_term_pane_t1_ParamLimits

0xa1c5,	// (0x00065fa3) phacti_term_pane_t1

0xe988,	// (0x0006a766) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe990,	// (0x0006a76e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb05,	// (0x0006b8e3) popup_sp_fs_calendar_preview_list_single_pane_g

0xe998,	// (0x0006a776) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe998,	// (0x0006a776) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9ae,	// (0x0006a78c) aid_popup_sp_fs_bg_corner_pane

0xcd6a,	// (0x00068b48) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bf6,	// (0x000659d4) popup_sp_fs_calendar_preview_bg_pane

0xa1ef,	// (0x00065fcd) popup_sp_fs_calendar_preview_list_pane

0xc962,	// (0x00068740) bg_main_sp_fs_cale_pane_ParamLimits

0xc962,	// (0x00068740) bg_main_sp_fs_cale_pane

0xa200,	// (0x00065fde) listscroll_cale_mrui_pane_ParamLimits

0xa200,	// (0x00065fde) listscroll_cale_mrui_pane

0xa215,	// (0x00065ff3) listscroll_sp_fs_schedule_track_pane

0xa21e,	// (0x00065ffc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa21e,	// (0x00065ffc) main_sp_fs_ctrlbar_pane_cp01

0xe9b6,	// (0x0006a794) main_sp_fs_ribbon_pane

0xa231,	// (0x0006600f) popup_sp_fs_cale_preview_window

0x8d6a,	// (0x00064b48) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d6a,	// (0x00064b48) list_single_sp_fs_schedule_track_pane

0xdbe4,	// (0x000699c2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdbe4,	// (0x000699c2) bg_sp_fs_highlight_list_pane_cp03

0x8d8d,	// (0x00064b6b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d8d,	// (0x00064b6b) list_single_sp_fs_schedule_track_pane_g1

0x8d99,	// (0x00064b77) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d99,	// (0x00064b77) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb0a,	// (0x0006b8e8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb0a,	// (0x0006b8e8) list_single_sp_fs_schedule_track_pane_g

0x8da5,	// (0x00064b83) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8da5,	// (0x00064b83) list_single_sp_fs_schedule_track_pane_t1

0x8dbd,	// (0x00064b9b) sp_fs_schedule_track_pane_ParamLimits

0x8dbd,	// (0x00064b9b) sp_fs_schedule_track_pane

0xe9be,	// (0x0006a79c) sp_fs_schedule_track_pane_g1

0xe9c6,	// (0x0006a7a4) sp_fs_schedule_track_pane_g2

0xe9ce,	// (0x0006a7ac) sp_fs_schedule_track_pane_g3

0xe9d6,	// (0x0006a7b4) sp_fs_schedule_track_pane_g4

0xe9de,	// (0x0006a7bc) sp_fs_schedule_track_pane_g5

0x0004,

0xfb0f,	// (0x0006b8ed) sp_fs_schedule_track_pane_g

0xd715,	// (0x000694f3) bg_sp_fs_schedule_viewer_highlight_g1

0xad35,	// (0x00066b13) bg_sp_fs_schedule_viewer_highlight_g2

0xd71d,	// (0x000694fb) bg_sp_fs_schedule_viewer_highlight_g3

0xd725,	// (0x00069503) bg_sp_fs_schedule_viewer_highlight_g4

0xd951,	// (0x0006972f) bg_sp_fs_schedule_viewer_highlight_g5

0xd735,	// (0x00069513) bg_sp_fs_schedule_viewer_highlight_g6

0xd73d,	// (0x0006951b) bg_sp_fs_schedule_viewer_highlight_g7

0xd745,	// (0x00069523) bg_sp_fs_schedule_viewer_highlight_g8

0xad15,	// (0x00066af3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb1a,	// (0x0006b8f8) bg_sp_fs_schedule_viewer_highlight_g

0x9bf6,	// (0x000659d4) bg_main_sp_fs_ribbon_pane

0x8dcd,	// (0x00064bab) main_sp_fs_ribbon_pane_g1

0xe9e6,	// (0x0006a7c4) main_sp_fs_ribbon_pane_t1

0x8dd6,	// (0x00064bb4) main_sp_fs_ribbon_pane_t2

0xe9f5,	// (0x0006a7d3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb2d,	// (0x0006b90b) main_sp_fs_ribbon_pane_t

0xea04,	// (0x0006a7e2) main_sp_fs_ribbon_scheduler_pane

0xea0c,	// (0x0006a7ea) bg_main_sp_fs_ribbon_pane_g1

0xea15,	// (0x0006a7f3) bg_main_sp_fs_ribbon_pane_g2

0xea1e,	// (0x0006a7fc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfb34,	// (0x0006b912) bg_main_sp_fs_ribbon_pane_g

0xea26,	// (0x0006a804) main_sp_fs_ribbon_scheduler_pane_g1

0xea2f,	// (0x0006a80d) main_sp_fs_ribbon_scheduler_pane_g2

0xea38,	// (0x0006a816) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfb3b,	// (0x0006b919) main_sp_fs_ribbon_scheduler_pane_g

0xea41,	// (0x0006a81f) list_cale_mrui_pane

0x8de5,	// (0x00064bc3) sp_fs_scroll_pane_cp07_ParamLimits

0x8de5,	// (0x00064bc3) sp_fs_scroll_pane_cp07

0x8e01,	// (0x00064bdf) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e01,	// (0x00064bdf) bg_sp_fs_schedule_viewer_highlight

0xea4e,	// (0x0006a82c) list_single_sp_fs_schedule_track_pane_cp01

0xea56,	// (0x0006a834) list_sp_fs_schedule_track_pane

0xea5e,	// (0x0006a83c) sp_fs_scroll_pane_cp06_ParamLimits

0xea5e,	// (0x0006a83c) sp_fs_scroll_pane_cp06

0xcd6a,	// (0x00068b48) bgmain_sp_fs_calendar_pane_g1

0x8e0e,	// (0x00064bec) list_single_cale_mrui_pane_ParamLimits

0x8e0e,	// (0x00064bec) list_single_cale_mrui_pane

0xa243,	// (0x00066021) list_single_cale_mrui_row_pane_ParamLimits

0xa243,	// (0x00066021) list_single_cale_mrui_row_pane

0xa250,	// (0x0006602e) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa250,	// (0x0006602e) list_single_cale_mrui_row_pane_g1

0xa288,	// (0x00066066) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa288,	// (0x00066066) list_single_cale_mrui_row_pane_t1

0x8e3f,	// (0x00064c1d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e3f,	// (0x00064c1d) list_single_cale_mrui_row_pane_t2

0xa29a,	// (0x00066078) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa29a,	// (0x00066078) list_single_cale_mrui_row_pane_t3

0xa2c9,	// (0x000660a7) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa2c9,	// (0x000660a7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb49,	// (0x0006b927) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb49,	// (0x0006b927) list_single_cale_mrui_row_pane_t

0x8ea5,	// (0x00064c83) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ea5,	// (0x00064c83) list_single_cmail_header_editor_pane_bg_cp01

0x8ec5,	// (0x00064ca3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ec5,	// (0x00064ca3) list_single_cmail_header_editor_pane_bg_cp02

0x8ee1,	// (0x00064cbf) main_radioblah_text_pane_t1_ParamLimits

0x8ee1,	// (0x00064cbf) main_radioblah_text_pane_t1

0xea7d,	// (0x0006a85b) cam6_indi_pane_cp01

0xea85,	// (0x0006a863) cam6_mode_pane_cp01

0xea8d,	// (0x0006a86b) cam6_pano_pane

0xea96,	// (0x0006a874) cam6_zoom_pane_cp01

0xea9e,	// (0x0006a87c) cam6_pano_image_pane

0xeaa9,	// (0x0006a887) cam6_pano_pane_g1

0xe34b,	// (0x0006a129) cam6_pano_pane_g2

0xeab2,	// (0x0006a890) cam6_pano_pane_g3

0xeabb,	// (0x0006a899) cam6_pano_pane_g4

0xd321,	// (0x000690ff) cam6_pano_pane_g5

0xeac4,	// (0x0006a8a2) cam6_pano_pane_g6

0xeace,	// (0x0006a8ac) cam6_pano_pane_g7

0xead6,	// (0x0006a8b4) cam6_pano_pane_g8

0xeadf,	// (0x0006a8bd) cam6_pano_pane_g9

0x0008,

0x0ba7,	// (0x0005c985) cam6_pano_pane_g

0x9bf6,	// (0x000659d4) main_browser_tag_pane

0xe93d,	// (0x0006a71b) grid_navstr_albumart_pane

0xeaea,	// (0x0006a8c8) cell_navstr_albumart_pane_ParamLimits

0xeaea,	// (0x0006a8c8) cell_navstr_albumart_pane

0xeb0a,	// (0x0006a8e8) cell_navstr_albumart_pane_g1

0xc733,	// (0x00068511) cell_navstr_albumart_pane_g2

0xc743,	// (0x00068521) cell_navstr_albumart_pane_g3

0xc73b,	// (0x00068519) cell_navstr_albumart_pane_g4

0x0003,

0xfb52,	// (0x0006b930) cell_navstr_albumart_pane_g

0x8efc,	// (0x00064cda) bt_list_pane_ParamLimits

0x8efc,	// (0x00064cda) bt_list_pane

0x8f1d,	// (0x00064cfb) bt_list_pane_t1

0x8f2c,	// (0x00064d0a) bt_list_pane_t2

0x0001,

0xfb5b,	// (0x0006b939) bt_list_pane_t

0x9bf6,	// (0x000659d4) main_cale_prevew_pane

0x8f3b,	// (0x00064d19) popup_cale_preview_window_ParamLimits

0x8f3b,	// (0x00064d19) popup_cale_preview_window

0xa579,	// (0x00066357) bg_popup_preview_window_pane_cp05_ParamLimits

0xa579,	// (0x00066357) bg_popup_preview_window_pane_cp05

0xeb12,	// (0x0006a8f0) list_cale_preview_pane_ParamLimits

0xeb12,	// (0x0006a8f0) list_cale_preview_pane

0x8f54,	// (0x00064d32) list_double_cale_preview_pane_ParamLimits

0x8f54,	// (0x00064d32) list_double_cale_preview_pane

0x8f66,	// (0x00064d44) list_single_cale_preview_pane_ParamLimits

0x8f66,	// (0x00064d44) list_single_cale_preview_pane

0x8f7a,	// (0x00064d58) list_single_cale_preview_pane_g1

0x8f82,	// (0x00064d60) list_single_cale_preview_pane_t1_ParamLimits

0x8f82,	// (0x00064d60) list_single_cale_preview_pane_t1

0x8f97,	// (0x00064d75) list_double_cale_preview_pane_g1

0x8f9f,	// (0x00064d7d) list_double_cale_preview_pane_t1_ParamLimits

0x8f9f,	// (0x00064d7d) list_double_cale_preview_pane_t1

0x8fb4,	// (0x00064d92) list_double_cale_preview_pane_t2_ParamLimits

0x8fb4,	// (0x00064d92) list_double_cale_preview_pane_t2

0x0001,

0xfb60,	// (0x0006b93e) list_double_cale_preview_pane_t_ParamLimits

0xfb60,	// (0x0006b93e) list_double_cale_preview_pane_t

0x9bf6,	// (0x000659d4) main_ezdial_pane

0xa579,	// (0x00066357) main_sp_fs_email_pane_ParamLimits

0x858f,	// (0x0006436d) cmail_ddmenu_btn01_pane_ParamLimits

0x858f,	// (0x0006436d) cmail_ddmenu_btn01_pane

0x85a4,	// (0x00064382) cmail_ddmenu_btn02_pane_ParamLimits

0x85a4,	// (0x00064382) cmail_ddmenu_btn02_pane

0x85bc,	// (0x0006439a) cmail_ddmenu_btn03_pane_ParamLimits

0x85bc,	// (0x0006439a) cmail_ddmenu_btn03_pane

0x85e4,	// (0x000643c2) main_sp_fs_ctrlbar_pane_ParamLimits

0x85fa,	// (0x000643d8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8be0,	// (0x000649be) list_cmail_body_pane_ParamLimits

0xe8bd,	// (0x0006a69b) bg_button_pane_cp12

0xe8c6,	// (0x0006a6a4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8c6,	// (0x0006a6a4) list_single_cmail_header_detail_pane_g3

0xa182,	// (0x00065f60) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa182,	// (0x00065f60) list_single_cmail_header_detail_pane_t2

0x0001,

0xfaf6,	// (0x0006b8d4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfaf6,	// (0x0006b8d4) list_single_cmail_header_detail_pane_t

0xa1da,	// (0x00065fb8) phacti_term_pane_t2_ParamLimits

0xa1da,	// (0x00065fb8) phacti_term_pane_t2

0x0001,

0xfb00,	// (0x0006b8de) phacti_term_pane_t_ParamLimits

0xfb00,	// (0x0006b8de) phacti_term_pane_t

0xeb1e,	// (0x0006a8fc) aid_size_list_single_double

0x8fcc,	// (0x00064daa) popup_ezdial_listscroll_window

0x8ff0,	// (0x00064dce) popup_number_entry_window_cp01

0xaabe,	// (0x0006689c) bg_popup_call_pane_cp09

0xeb2a,	// (0x0006a908) ezdial_list_pane

0xeb32,	// (0x0006a910) scroll_pane_cp23

0xcb4f,	// (0x0006892d) bg_button_pane_cp028_ParamLimits

0xcb4f,	// (0x0006892d) bg_button_pane_cp028

0x8ffe,	// (0x00064ddc) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8ffe,	// (0x00064ddc) cmail_ddmenu_btn01_pane_g1

0x900e,	// (0x00064dec) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x900e,	// (0x00064dec) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb65,	// (0x0006b943) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb65,	// (0x0006b943) cmail_ddmenu_btn01_pane_g

0xeb3a,	// (0x0006a918) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3a,	// (0x0006a918) cmail_ddmenu_btn01_pane_t1

0xc962,	// (0x00068740) bg_button_pane_cp029_ParamLimits

0xc962,	// (0x00068740) bg_button_pane_cp029

0x900e,	// (0x00064dec) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x900e,	// (0x00064dec) cmail_ddmenu_btn02_pane_g1

0x9026,	// (0x00064e04) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9026,	// (0x00064e04) cmail_ddmenu_btn02_pane_t1

0xdbe4,	// (0x000699c2) bg_button_pane_cp031_ParamLimits

0xdbe4,	// (0x000699c2) bg_button_pane_cp031

0x900e,	// (0x00064dec) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x900e,	// (0x00064dec) cmail_ddmenu_btn03_pane_g1

0x9026,	// (0x00064e04) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9026,	// (0x00064e04) cmail_ddmenu_btn03_pane_t1

0x5f20,	// (0x00061cfe) cell_dialer2_keypad_pane_t1_ParamLimits

0x5f3a,	// (0x00061d18) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5f3a,	// (0x00061d18) cell_dialer2_keypad_pane_t1_copy1

0x7ea5,	// (0x00063c83) ncimui_group_button_pane

0xa579,	// (0x00066357) main_sp_fs_calendar_pane_ParamLimits

0x8c08,	// (0x000649e6) list_single_cmail_header_caption_pane_ParamLimits

0xa1f7,	// (0x00065fd5) aid_recal_txt_sm_pane

0x9bf6,	// (0x000659d4) mian_recal_day_pane

0xa231,	// (0x0006600f) popup_sp_fs_cale_preview_window_ParamLimits

0xeb4f,	// (0x0006a92d) list_recal_day_pane

0xa313,	// (0x000660f1) list_single_recal_day_pane_ParamLimits

0xa313,	// (0x000660f1) list_single_recal_day_pane

0xeb76,	// (0x0006a954) list_single_recal_day_pane_g1_ParamLimits

0xeb76,	// (0x0006a954) list_single_recal_day_pane_g1

0xa325,	// (0x00066103) list_single_recal_day_pane_g2_ParamLimits

0xa325,	// (0x00066103) list_single_recal_day_pane_g2

0xa331,	// (0x0006610f) list_single_recal_day_pane_g3_ParamLimits

0xa331,	// (0x0006610f) list_single_recal_day_pane_g3

0x904a,	// (0x00064e28) list_single_recal_day_pane_g4_ParamLimits

0x904a,	// (0x00064e28) list_single_recal_day_pane_g4

0xa33d,	// (0x0006611b) list_single_recal_day_pane_g5_ParamLimits

0xa33d,	// (0x0006611b) list_single_recal_day_pane_g5

0xa349,	// (0x00066127) list_single_recal_day_pane_g6_ParamLimits

0xa349,	// (0x00066127) list_single_recal_day_pane_g6

0x0004,

0xfb74,	// (0x0006b952) list_single_recal_day_pane_g_ParamLimits

0xfb74,	// (0x0006b952) list_single_recal_day_pane_g

0xa35d,	// (0x0006613b) list_single_recal_day_pane_t1

0xa36f,	// (0x0006614d) list_single_recal_day_pane_t2

0x0001,

0xfb7f,	// (0x0006b95d) list_single_recal_day_pane_t

0x9062,	// (0x00064e40) ncimui_query_button_pane_ParamLimits

0x9062,	// (0x00064e40) ncimui_query_button_pane

0x9072,	// (0x00064e50) ncimui_query_button_pane_t1_ParamLimits

0x9072,	// (0x00064e50) ncimui_query_button_pane_t1

0xeb82,	// (0x0006a960) ncimui_query_button_pane_t2_ParamLimits

0xeb82,	// (0x0006a960) ncimui_query_button_pane_t2

0x0001,

0xfb84,	// (0x0006b962) ncimui_query_button_pane_t_ParamLimits

0xfb84,	// (0x0006b962) ncimui_query_button_pane_t

0x9085,	// (0x00064e63) query_button_pane_ParamLimits

0x9085,	// (0x00064e63) query_button_pane

0x9bf6,	// (0x000659d4) bg_button_pane_cp0028

0xeb95,	// (0x0006a973) query_button_pane_t1

0x42aa,	// (0x00060088) main_tport_pane_ParamLimits

0x8aea,	// (0x000648c8) bg_popup_window_pane_cp01_ParamLimits

0x8aea,	// (0x000648c8) bg_popup_window_pane_cp01

0x8af8,	// (0x000648d6) heading_pane_cp08_ParamLimits

0x8af8,	// (0x000648d6) heading_pane_cp08

0x8b06,	// (0x000648e4) heading_pane_cp07_ParamLimits

0x8b06,	// (0x000648e4) heading_pane_cp07

0x8b75,	// (0x00064953) cell_tport_appsw_pane_g2

0x0002,

0xfae3,	// (0x0006b8c1) cell_tport_appsw_pane_g

0x9e1c,	// (0x00065bfa) input_candi_list_open_g1

0xaef8,	// (0x00066cd6) list_cale_time_pane_g6_ParamLimits

0xaef8,	// (0x00066cd6) list_cale_time_pane_g6

0x4d29,	// (0x00060b07) aid_size_touch_calib_1_ParamLimits

0x4d29,	// (0x00060b07) aid_size_touch_calib_1

0x4d35,	// (0x00060b13) aid_size_touch_calib_2_ParamLimits

0x4d35,	// (0x00060b13) aid_size_touch_calib_2

0x4d43,	// (0x00060b21) aid_size_touch_calib_3_ParamLimits

0x4d43,	// (0x00060b21) aid_size_touch_calib_3

0x4d53,	// (0x00060b31) aid_size_touch_calib_4_ParamLimits

0x4d53,	// (0x00060b31) aid_size_touch_calib_4

0x4d61,	// (0x00060b3f) main_touch_calib_button_group_pane_ParamLimits

0x4d61,	// (0x00060b3f) main_touch_calib_button_group_pane

0x4d6f,	// (0x00060b4d) main_touch_calib_pane_g1_ParamLimits

0x4d7b,	// (0x00060b59) main_touch_calib_pane_g2_ParamLimits

0x4d87,	// (0x00060b65) main_touch_calib_pane_g3_ParamLimits

0x4d93,	// (0x00060b71) main_touch_calib_pane_g4_ParamLimits

0xf5e9,	// (0x0006b3c7) main_touch_calib_pane_g_ParamLimits

0x4d9f,	// (0x00060b7d) main_touch_calib_pane_t1_ParamLimits

0x4db8,	// (0x00060b96) main_touch_calib_pane_t2_ParamLimits

0x4dd1,	// (0x00060baf) main_touch_calib_pane_t3_ParamLimits

0x4de7,	// (0x00060bc5) main_touch_calib_pane_t4_ParamLimits

0x4dfd,	// (0x00060bdb) main_touch_calib_pane_t5_ParamLimits

0xf5f2,	// (0x0006b3d0) main_touch_calib_pane_t_ParamLimits

0xd0af,	// (0x00068e8d) list_single_fp_cale_pane_g3_ParamLimits

0xd0af,	// (0x00068e8d) list_single_fp_cale_pane_g3

0x428e,	// (0x0006006c) bg_button_pane_cp012_ParamLimits

0x428e,	// (0x0006006c) bg_vkb2_func_pane_cp03_ParamLimits

0x6e57,	// (0x00062c35) cell_vitu2_function_top_pane_g1_ParamLimits

0x428e,	// (0x0006006c) bg_vkb2_func_pane_cp04_ParamLimits

0x7e2d,	// (0x00063c0b) main_ncimui_button_group_pane_ParamLimits

0x7e2d,	// (0x00063c0b) main_ncimui_button_group_pane

0x7e93,	// (0x00063c71) main_ncimui_pane_t3_ParamLimits

0x7e93,	// (0x00063c71) main_ncimui_pane_t3

0xe953,	// (0x0006a731) phacti_button_group_pane

0xeb1e,	// (0x0006a8fc) aid_size_list_single_double_ParamLimits

0x8fcc,	// (0x00064daa) popup_ezdial_listscroll_window_ParamLimits

0x8ff0,	// (0x00064dce) popup_number_entry_window_cp01_ParamLimits

0x9092,	// (0x00064e70) phacti_button_pane_ParamLimits

0x9092,	// (0x00064e70) phacti_button_pane

0x9bf6,	// (0x000659d4) bg_button_pane_cp14

0xeba3,	// (0x0006a981) phacti_button_pane_t1

0x90a3,	// (0x00064e81) main_touch_calib_button_pane_ParamLimits

0x90a3,	// (0x00064e81) main_touch_calib_button_pane

0xa8f0,	// (0x000666ce) bg_button_pane_cp18_ParamLimits

0xa8f0,	// (0x000666ce) bg_button_pane_cp18

0xebb1,	// (0x0006a98f) main_touch_calib_button_pane_t1_ParamLimits

0xebb1,	// (0x0006a98f) main_touch_calib_button_pane_t1

0xebc7,	// (0x0006a9a5) main_touch_calib_button_pane_t2_ParamLimits

0xebc7,	// (0x0006a9a5) main_touch_calib_button_pane_t2

0x0001,

0xfb89,	// (0x0006b967) main_touch_calib_button_pane_t_ParamLimits

0xfb89,	// (0x0006b967) main_touch_calib_button_pane_t

0x9bf6,	// (0x000659d4) cell_ncimui_button_pane

0x9bf6,	// (0x000659d4) bg_button_pane_cp032

0xebe5,	// (0x0006a9c3) cell_ncimui_button_pane_t1

0x5f96,	// (0x00061d74) image3_infobar_pane_ParamLimits

0x5f96,	// (0x00061d74) image3_infobar_pane

0x8250,	// (0x0006402e) fs_bigclock_status_pane_ParamLimits

0x8250,	// (0x0006402e) fs_bigclock_status_pane

0x825d,	// (0x0006403b) main_fs_bigclock_clock_pane_ParamLimits

0x825d,	// (0x0006403b) main_fs_bigclock_clock_pane

0x8271,	// (0x0006404f) main_fs_bigclock_indi_pane_ParamLimits

0x8271,	// (0x0006404f) main_fs_bigclock_indi_pane

0x8299,	// (0x00064077) main_fs_bigclock_swipe_pane_ParamLimits

0x8299,	// (0x00064077) main_fs_bigclock_swipe_pane

0x9bf6,	// (0x000659d4) main_fs_clock_dumped_data

0xe458,	// (0x0006a236) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe458,	// (0x0006a236) list_single_fs_bigclock_indicator_pane_g1

0xe474,	// (0x0006a252) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe474,	// (0x0006a252) list_single_fs_bigclock_indicator_pane_g2

0xe48e,	// (0x0006a26c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe48e,	// (0x0006a26c) list_single_fs_bigclock_indicator_pane_g3

0xe4a8,	// (0x0006a286) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4a8,	// (0x0006a286) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0a6a,	// (0x0005c848) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0a6a,	// (0x0005c848) list_single_fs_bigclock_indicator_pane_g

0xe4d3,	// (0x0006a2b1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4d3,	// (0x0006a2b1) list_single_fs_bigclock_indicator_pane_t1

0xe4fb,	// (0x0006a2d9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4fb,	// (0x0006a2d9) list_single_fs_bigclock_indicator_pane_t2

0xe523,	// (0x0006a301) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe523,	// (0x0006a301) list_single_fs_bigclock_indicator_pane_t3

0xe54b,	// (0x0006a329) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe54b,	// (0x0006a329) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0a75,	// (0x0005c853) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0a75,	// (0x0005c853) list_single_fs_bigclock_indicator_pane_t

0xebf3,	// (0x0006a9d1) image3_infobar_fav_pane_ParamLimits

0xebf3,	// (0x0006a9d1) image3_infobar_fav_pane

0xec03,	// (0x0006a9e1) image3_infobar_loc_pane_ParamLimits

0xec03,	// (0x0006a9e1) image3_infobar_loc_pane

0xec17,	// (0x0006a9f5) image3_infobar_time_pane_ParamLimits

0xec17,	// (0x0006a9f5) image3_infobar_time_pane

0xcd6a,	// (0x00068b48) image3_infobar_time_pane_g1

0xec27,	// (0x0006aa05) image3_infobar_time_pane_t1

0xcd6a,	// (0x00068b48) image3_infobar_loc_pane_g1

0xec35,	// (0x0006aa13) image3_infobar_loc_pane_g2

0x0001,

0xfb8e,	// (0x0006b96c) image3_infobar_loc_pane_g

0xec3d,	// (0x0006aa1b) image3_infobar_loc_pane_t1

0xcd6a,	// (0x00068b48) image3_infobar_fav_pane_g1

0xec4b,	// (0x0006aa29) image3_infobar_fav_pane_g2

0x0001,

0xfb93,	// (0x0006b971) image3_infobar_fav_pane_g

0xec53,	// (0x0006aa31) fs_bigclock_status_battery_pane

0xec5c,	// (0x0006aa3a) fs_bigclock_status_signal_pane

0xec65,	// (0x0006aa43) fs_bigclock_status_title_pane

0xec6e,	// (0x0006aa4c) fs_bigclock_status_signal_pane_g1

0xec77,	// (0x0006aa55) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb98,	// (0x0006b976) fs_bigclock_status_signal_pane_g

0xec7f,	// (0x0006aa5d) fs_bigclock_status_battery_pane_g1

0xec88,	// (0x0006aa66) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb9d,	// (0x0006b97b) fs_bigclock_status_battery_pane_g

0xec90,	// (0x0006aa6e) fs_bigclock_status_title_pane_t1

0x90b3,	// (0x00064e91) main_fs_bigclock_clock_pane_g1

0x90b3,	// (0x00064e91) main_fs_bigclock_clock_pane_g2

0x90c0,	// (0x00064e9e) main_fs_bigclock_clock_pane_g3

0x90c0,	// (0x00064e9e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfba2,	// (0x0006b980) main_fs_bigclock_clock_pane_g

0x90cc,	// (0x00064eaa) main_fs_bigclock_clock_pane_t1

0x90df,	// (0x00064ebd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbab,	// (0x0006b989) main_fs_bigclock_clock_pane_t

0xec9e,	// (0x0006aa7c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec9e,	// (0x0006aa7c) list_single_fs_bigclock_indicator_pane

0xecaf,	// (0x0006aa8d) list_single_fs_bigclock_pane_ParamLimits

0xecaf,	// (0x0006aa8d) list_single_fs_bigclock_pane

0xecd5,	// (0x0006aab3) main_fs_bigclock_indicator_pane_t1

0xece4,	// (0x0006aac2) list_single_fs_bigclock_pane_g1

0xecec,	// (0x0006aaca) list_single_fs_bigclock_pane_t1

0xcd6a,	// (0x00068b48) main_fs_bigclock_swipe_pane_g1

0xed2f,	// (0x0006ab0d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfbbc,	// (0x0006b99a) main_fs_bigclock_swipe_pane_g

0xed37,	// (0x0006ab15) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed37,	// (0x0006ab15) main_fs_bigclock_swipe_pane_t1

0x329d,	// (0x0005f07b) call_type_pane_ParamLimits

0x9bf6,	// (0x000659d4) main_btmg_pane

0xa27c,	// (0x0006605a) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa27c,	// (0x0006605a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb42,	// (0x0006b920) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb42,	// (0x0006b920) list_single_cale_mrui_row_pane_g

0xa302,	// (0x000660e0) list_recal_vselct_arw_lo_pane

0xeb6e,	// (0x0006a94c) list_recal_vselct_arw_up_pane

0xa30a,	// (0x000660e8) list_recal_vselct_pane

0x9136,	// (0x00064f14) btmg_button_pane

0x9142,	// (0x00064f20) main_btmg_pane_g1

0x9bf6,	// (0x000659d4) bg_button_pane_cp044

0xed54,	// (0x0006ab32) btmg_button_pane_t1

0xc94e,	// (0x0006872c) aid_listscroll_gen

0xa579,	// (0x00066357) main_cntbar_detail_pane

0xe89f,	// (0x0006a67d) list_cmail_folder_pane

0xd21f,	// (0x00068ffd) sp_fs_scroll_pane_cp03_ParamLimits

0x914a,	// (0x00064f28) list_single_fs_dyc_pane_cp01_ParamLimits

0x914a,	// (0x00064f28) list_single_fs_dyc_pane_cp01

0xed62,	// (0x0006ab40) aid_size_cmail_indent

0xa381,	// (0x0006615f) list_single_dyc_row_pane_cp01

0x9199,	// (0x00064f77) cntbar_detail_list_pane_ParamLimits

0x9199,	// (0x00064f77) cntbar_detail_list_pane

0x91d3,	// (0x00064fb1) main_cntbar_detail_cont_pane_ParamLimits

0x91d3,	// (0x00064fb1) main_cntbar_detail_cont_pane

0x31c0,	// (0x0005ef9e) scroll_pane_cp032_ParamLimits

0x31c0,	// (0x0005ef9e) scroll_pane_cp032

0x91df,	// (0x00064fbd) cntbar_detail_list_event_pane_ParamLimits

0x91df,	// (0x00064fbd) cntbar_detail_list_event_pane

0x91a5,	// (0x00064f83) cntbar_detail_list_shct_pane

0xad83,	// (0x00066b61) aid_list_gen

0xed6b,	// (0x0006ab49) aid_scroll

0xed74,	// (0x0006ab52) aid_size_touch_scroll_bar

0x75c2,	// (0x000633a0) aid_list_double

0xa38a,	// (0x00066168) aid_list_single

0x75b0,	// (0x0006338e) aid_list_single_lg

0xa393,	// (0x00066171) aid_list_z_g_a_sm

0xa39b,	// (0x00066179) aid_list_z_g_d

0xa3a3,	// (0x00066181) aid_txt_z_prm

0x91f3,	// (0x00064fd1) aid_txt_z_prm_cp01

0x9201,	// (0x00064fdf) aid_txt_z_sec

0x920f,	// (0x00064fed) main_cntbar_detail_cont_pane_g1_ParamLimits

0x920f,	// (0x00064fed) main_cntbar_detail_cont_pane_g1

0x921c,	// (0x00064ffa) main_cntbar_detail_cont_pane_g2_ParamLimits

0x921c,	// (0x00064ffa) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbc1,	// (0x0006b99f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbc1,	// (0x0006b99f) main_cntbar_detail_cont_pane_g

0xed7d,	// (0x0006ab5b) main_cntbar_detail_cont_pane_t1

0xed8b,	// (0x0006ab69) main_cntbar_detail_cont_pane_t2

0xed99,	// (0x0006ab77) main_cntbar_detail_cont_pane_t3

0x0002,

0xfbc6,	// (0x0006b9a4) main_cntbar_detail_cont_pane_t

0x9228,	// (0x00065006) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9228,	// (0x00065006) cell_cntbar_detail_list_shct_pane

0xeda7,	// (0x0006ab85) cntbar_detail_list_shct_pane_g1

0xedb0,	// (0x0006ab8e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfbcd,	// (0x0006b9ab) cntbar_detail_list_shct_pane_g

0x923c,	// (0x0006501a) cntbar_detail_list_event_pane_g1_ParamLimits

0x923c,	// (0x0006501a) cntbar_detail_list_event_pane_g1

0x9248,	// (0x00065026) cntbar_detail_list_event_pane_g2_ParamLimits

0x9248,	// (0x00065026) cntbar_detail_list_event_pane_g2

0x0005,

0xfbd2,	// (0x0006b9b0) cntbar_detail_list_event_pane_g_ParamLimits

0xfbd2,	// (0x0006b9b0) cntbar_detail_list_event_pane_g

0x92b4,	// (0x00065092) cntbar_detail_list_event_pane_t1_ParamLimits

0x92b4,	// (0x00065092) cntbar_detail_list_event_pane_t1

0x92c9,	// (0x000650a7) cntbar_detail_list_event_pane_t2_ParamLimits

0x92c9,	// (0x000650a7) cntbar_detail_list_event_pane_t2

0x0002,

0xfbdf,	// (0x0006b9bd) cntbar_detail_list_event_pane_t_ParamLimits

0xfbdf,	// (0x0006b9bd) cntbar_detail_list_event_pane_t

0xcd6a,	// (0x00068b48) cell_cntbar_detail_list_shct_pane_g1

0xb4cf,	// (0x000672ad) navi_pane_mv_g3

0xa579,	// (0x00066357) main_cntbar_detail_pane_ParamLimits

0x9bf6,	// (0x000659d4) main_notif_wgt_pane

0x5c20,	// (0x000619fe) aid_tch_main_mp4_pane_g4

0x5e7f,	// (0x00061c5d) popup_slider_window_cp02

0xa2f8,	// (0x000660d6) list_recal_day_event_pane

0x9179,	// (0x00064f57) cntbar_detail_btn_pane_ParamLimits

0x9179,	// (0x00064f57) cntbar_detail_btn_pane

0x9189,	// (0x00064f67) cntbar_detail_btn_pane_cp01_ParamLimits

0x9189,	// (0x00064f67) cntbar_detail_btn_pane_cp01

0x91a5,	// (0x00064f83) cntbar_detail_list_shct_pane_ParamLimits

0x91b1,	// (0x00064f8f) cntbar_detail_pane_g1_ParamLimits

0x91b1,	// (0x00064f8f) cntbar_detail_pane_g1

0x91bd,	// (0x00064f9b) cntbar_detail_pane_t1_ParamLimits

0x91bd,	// (0x00064f9b) cntbar_detail_pane_t1

0x9254,	// (0x00065032) cntbar_detail_list_event_pane_g3_ParamLimits

0x9254,	// (0x00065032) cntbar_detail_list_event_pane_g3

0x926c,	// (0x0006504a) cntbar_detail_list_event_pane_g4_ParamLimits

0x926c,	// (0x0006504a) cntbar_detail_list_event_pane_g4

0x9284,	// (0x00065062) cntbar_detail_list_event_pane_g5_ParamLimits

0x9284,	// (0x00065062) cntbar_detail_list_event_pane_g5

0x929c,	// (0x0006507a) cntbar_detail_list_event_pane_g6_ParamLimits

0x929c,	// (0x0006507a) cntbar_detail_list_event_pane_g6

0x92de,	// (0x000650bc) cntbar_detail_list_event_pane_t3_ParamLimits

0x92de,	// (0x000650bc) cntbar_detail_list_event_pane_t3

0x92f0,	// (0x000650ce) popup_notif_wgt_window_ParamLimits

0x92f0,	// (0x000650ce) popup_notif_wgt_window

0x9300,	// (0x000650de) popup_submenu_window_cp01_ParamLimits

0x9300,	// (0x000650de) popup_submenu_window_cp01

0xaabe,	// (0x0006689c) bg_popup_window_pane_cp10

0xedb9,	// (0x0006ab97) listscroll_notif_wgt_pane

0xedcb,	// (0x0006aba9) list_notif_wgt_window

0xedd4,	// (0x0006abb2) scroll_pane_cp033

0x930e,	// (0x000650ec) list_notif_wgt_row_pane_ParamLimits

0x930e,	// (0x000650ec) list_notif_wgt_row_pane

0xeddd,	// (0x0006abbb) aid_size_list_notif_wgt_del

0xedea,	// (0x0006abc8) list_notif_wgt_row_pane_g1

0xedf6,	// (0x0006abd4) list_notif_wgt_row_pane_g2

0xee05,	// (0x0006abe3) list_notif_wgt_row_pane_g3

0x0002,

0xfbe6,	// (0x0006b9c4) list_notif_wgt_row_pane_g

0xee12,	// (0x0006abf0) list_notif_wgt_row_pane_t1

0xee28,	// (0x0006ac06) list_notif_wgt_row_pane_t2

0xee3a,	// (0x0006ac18) list_notif_wgt_row_pane_t3

0x0002,

0xfbed,	// (0x0006b9cb) list_notif_wgt_row_pane_t

0xd96b,	// (0x00069749) list_recal_day_event_pane_g1

0xee4c,	// (0x0006ac2a) list_recal_day_event_pane_t1

0x9bf6,	// (0x000659d4) bg_button_pane_cp045

0x9320,	// (0x000650fe) cntbar_detail_btn_pane_t1

0xc962,	// (0x00068740) main_callh_pane_ParamLimits

0xc962,	// (0x00068740) main_callh_pane

0x9bf6,	// (0x000659d4) main_coverflow0_pane

0x9bf6,	// (0x000659d4) main_wgtman_pane

0x82b1,	// (0x0006408f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82b1,	// (0x0006408f) main_fs_bigclock_unlock_btn_pane

0x8b6d,	// (0x0006494b) bg_button_pane_cp16

0x8b7d,	// (0x0006495b) cell_tport_appsw_pane_g3

0x932e,	// (0x0006510c) cf0_flow_pane_ParamLimits

0x932e,	// (0x0006510c) cf0_flow_pane

0xee5b,	// (0x0006ac39) listscroll_cf0_pane

0xee66,	// (0x0006ac44) main_cf0_pane_g1

0x933d,	// (0x0006511b) main_cf0_pane_t1_ParamLimits

0x933d,	// (0x0006511b) main_cf0_pane_t1

0x9351,	// (0x0006512f) main_cf0_pane_t2_ParamLimits

0x9351,	// (0x0006512f) main_cf0_pane_t2

0x0001,

0xfbf9,	// (0x0006b9d7) main_cf0_pane_t_ParamLimits

0xfbf9,	// (0x0006b9d7) main_cf0_pane_t

0xee78,	// (0x0006ac56) scroll_pane_cp11

0x9365,	// (0x00065143) cf0_flow_pane_g1

0x936d,	// (0x0006514b) cf0_flow_pane_g2

0x0001,

0xfbfe,	// (0x0006b9dc) cf0_flow_pane_g

0x9375,	// (0x00065153) cf0_flow_pane_t1

0x9bf6,	// (0x000659d4) main_call6_pane

0x9bf6,	// (0x000659d4) main_calllock_pane

0x9383,	// (0x00065161) call6_btn_grp_pane_ParamLimits

0x9383,	// (0x00065161) call6_btn_grp_pane

0x9392,	// (0x00065170) call6_pane_g1_ParamLimits

0x9392,	// (0x00065170) call6_pane_g1

0x93a2,	// (0x00065180) popup_call6_1st_window_ParamLimits

0x93a2,	// (0x00065180) popup_call6_1st_window

0x93b0,	// (0x0006518e) popup_call6_2nd_window_ParamLimits

0x93b0,	// (0x0006518e) popup_call6_2nd_window

0x93be,	// (0x0006519c) cell_call6_btn_pane_ParamLimits

0x93be,	// (0x0006519c) cell_call6_btn_pane

0xaabe,	// (0x0006689c) bg_popup_call2_in_pane_cp03

0xee83,	// (0x0006ac61) popup_call6_1st_window_g1

0xee8b,	// (0x0006ac69) popup_call6_1st_window_g2

0xee93,	// (0x0006ac71) popup_call6_1st_window_g3

0x0002,

0xfc03,	// (0x0006b9e1) popup_call6_1st_window_g

0xee9b,	// (0x0006ac79) popup_call6_1st_window_t1

0xeeaa,	// (0x0006ac88) popup_call6_1st_window_t2

0xeeb8,	// (0x0006ac96) popup_call6_1st_window_t3

0x0002,

0xfc0a,	// (0x0006b9e8) popup_call6_1st_window_t

0xaabe,	// (0x0006689c) bg_popup_call2_in_pane_cp04

0xee83,	// (0x0006ac61) popup_call6_2nd_window_g1

0xee8b,	// (0x0006ac69) popup_call6_2nd_window_g2

0xee93,	// (0x0006ac71) popup_call6_2nd_window_g3

0x0002,

0xfc03,	// (0x0006b9e1) popup_call6_2nd_window_g

0xee9b,	// (0x0006ac79) popup_call6_2nd_window_t1

0x1060,	// (0x0005ce3e) bg_button_pane_cp15

0x93cd,	// (0x000651ab) cell_call6_btn_pane_g1

0x93d6,	// (0x000651b4) cell_call6_btn_pane_t1

0x93e5,	// (0x000651c3) listscroll_wgtman_pane_ParamLimits

0x93e5,	// (0x000651c3) listscroll_wgtman_pane

0x9401,	// (0x000651df) wgtman_btn_pane_ParamLimits

0x9401,	// (0x000651df) wgtman_btn_pane

0xb2e3,	// (0x000670c1) aid_scroll_copy1

0xeec6,	// (0x0006aca4) list_wgtman_pane

0x9436,	// (0x00065214) wgtman_btn_pane_g1_ParamLimits

0x9436,	// (0x00065214) wgtman_btn_pane_g1

0x945e,	// (0x0006523c) wgtman_btn_pane_t1_ParamLimits

0x945e,	// (0x0006523c) wgtman_btn_pane_t1

0xeed0,	// (0x0006acae) wgtman_btn_pane_t2_ParamLimits

0xeed0,	// (0x0006acae) wgtman_btn_pane_t2

0x0001,

0xfc11,	// (0x0006b9ef) wgtman_btn_pane_t_ParamLimits

0xfc11,	// (0x0006b9ef) wgtman_btn_pane_t

0x9495,	// (0x00065273) listrow_wgtman_pane_ParamLimits

0x9495,	// (0x00065273) listrow_wgtman_pane

0x94b1,	// (0x0006528f) listrow_wgtman_pane_g1

0x94be,	// (0x0006529c) listrow_wgtman_pane_g2

0x0001,

0xfc16,	// (0x0006b9f4) listrow_wgtman_pane_g

0x94dc,	// (0x000652ba) listrow_wgtman_pane_t1

0x94f4,	// (0x000652d2) listrow_wgtman_pane_t2

0x0001,

0xfc1b,	// (0x0006b9f9) listrow_wgtman_pane_t

0x951a,	// (0x000652f8) wait_bar_pane_cp09

0xeef0,	// (0x0006acce) main_calllock_btn_pane

0xeefa,	// (0x0006acd8) main_calllock_pane_g1

0x9bf6,	// (0x000659d4) bg_button_pane_cp17

0xeee7,	// (0x0006acc5) main_calllock_btn_pane_g1

0xef06,	// (0x0006ace4) main_calllock_btn_pane_t1

0x9bf6,	// (0x000659d4) main_dialer3_pane

0x9bf6,	// (0x000659d4) main_fmrd2_pane

0xcd6a,	// (0x00068b48) main_fs_bigclock_unlock_btn_pane_g1

0x9534,	// (0x00065312) main_fs_bigclock_unlock_btn_pane_t1

0x9542,	// (0x00065320) area_fmrd2_info_pane_ParamLimits

0x9542,	// (0x00065320) area_fmrd2_info_pane

0x9550,	// (0x0006532e) area_fmrd2_visual_pane_ParamLimits

0x9550,	// (0x0006532e) area_fmrd2_visual_pane

0x955e,	// (0x0006533c) fmrd2_indi_pane_ParamLimits

0x955e,	// (0x0006533c) fmrd2_indi_pane

0x956b,	// (0x00065349) area_fmrd2_visual_pane_g1

0x9573,	// (0x00065351) area_fmrd2_visual_pane_t1

0x9583,	// (0x00065361) area_fmrd2_visual_pane_t2

0x9593,	// (0x00065371) area_fmrd2_visual_pane_t3

0x0002,

0xfc25,	// (0x0006ba03) area_fmrd2_visual_pane_t

0x95a3,	// (0x00065381) area_fmrd2_info_pane_g1

0x95ab,	// (0x00065389) area_fmrd2_info_pane_t1

0x95bb,	// (0x00065399) area_fmrd2_info_pane_t2

0x95cb,	// (0x000653a9) area_fmrd2_info_pane_t3

0x95db,	// (0x000653b9) area_fmrd2_info_pane_t4

0x0003,

0xfc2c,	// (0x0006ba0a) area_fmrd2_info_pane_t

0x95e9,	// (0x000653c7) fmrd2_indi_pane_t1

0x95f9,	// (0x000653d7) fmrd2_indi_pane_t2

0x9609,	// (0x000653e7) fmrd2_indi_pane_t3

0x0002,

0xfc35,	// (0x0006ba13) fmrd2_indi_pane_t

0xe4b7,	// (0x0006a295) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4b7,	// (0x0006a295) list_single_fs_bigclock_indicator_pane_g5

0xe568,	// (0x0006a346) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe568,	// (0x0006a346) list_single_fs_bigclock_indicator_pane_t5

0x8d1d,	// (0x00064afb) aid_cell_bcale_month_pane_ParamLimits

0x8d1d,	// (0x00064afb) aid_cell_bcale_month_pane

0x8d3b,	// (0x00064b19) bcale_month_pane_ParamLimits

0x8d3b,	// (0x00064b19) bcale_month_pane

0x8d59,	// (0x00064b37) bcale_preview_pane_ParamLimits

0x8d59,	// (0x00064b37) bcale_preview_pane

0xecec,	// (0x0006aaca) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0b,	// (0x0006aae9) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0b,	// (0x0006aae9) list_single_fs_bigclock_pane_t2

0x0001,

0xfbb7,	// (0x0006b995) list_single_fs_bigclock_pane_t_ParamLimits

0xfbb7,	// (0x0006b995) list_single_fs_bigclock_pane_t

0x952c,	// (0x0006530a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc20,	// (0x0006b9fe) main_fs_bigclock_unlock_btn_pane_g

0x9617,	// (0x000653f5) aid_dia3_key_size_ParamLimits

0x9617,	// (0x000653f5) aid_dia3_key_size

0x9623,	// (0x00065401) aid_dia3_listrow_size_ParamLimits

0x9623,	// (0x00065401) aid_dia3_listrow_size

0x9633,	// (0x00065411) dia3_keypad_fun_pane_ParamLimits

0x9633,	// (0x00065411) dia3_keypad_fun_pane

0x9645,	// (0x00065423) dia3_keypad_num_pane_ParamLimits

0x9645,	// (0x00065423) dia3_keypad_num_pane

0x9657,	// (0x00065435) dia3_listscroll_pane_ParamLimits

0x9657,	// (0x00065435) dia3_listscroll_pane

0x9665,	// (0x00065443) dia3_numentry_pane_ParamLimits

0x9665,	// (0x00065443) dia3_numentry_pane

0xef15,	// (0x0006acf3) dia3_list_pane

0xef20,	// (0x0006acfe) scroll_pane_cp12

0x9bf6,	// (0x000659d4) bg_dia3_numentry_pane

0x9673,	// (0x00065451) dia3_numentry_pane_t1

0x9682,	// (0x00065460) cell_dia3_key_num_pane

0x968a,	// (0x00065468) cell_dia3_key0_fun_pane_ParamLimits

0x968a,	// (0x00065468) cell_dia3_key0_fun_pane

0x9697,	// (0x00065475) cell_dia3_key1_fun_pane_ParamLimits

0x9697,	// (0x00065475) cell_dia3_key1_fun_pane

0x96a4,	// (0x00065482) dia3_listrow_pane

0xe20a,	// (0x00069fe8) bg_dia3_numentry_pane_g1

0x9bf6,	// (0x000659d4) bg_button_pane_cp21

0xef2b,	// (0x0006ad09) cell_dia3_key_num_pane_t1

0xef39,	// (0x0006ad17) cell_dia3_key_num_pane_t2

0xef48,	// (0x0006ad26) cell_dia3_key_num_pane_t3

0xef57,	// (0x0006ad35) cell_dia3_key_num_pane_t4

0x0003,

0xfc3c,	// (0x0006ba1a) cell_dia3_key_num_pane_t

0x9bf6,	// (0x000659d4) bg_button_pane_cp19

0x96b1,	// (0x0006548f) cell_dia3_key0_fun_pane_g1

0x9bf6,	// (0x000659d4) bg_button_pane_cp20

0x96b9,	// (0x00065497) cell_dia3_key1_fun_pane_g1

0x96c1,	// (0x0006549f) area_left_week_number_pane

0x96d4,	// (0x000654b2) area_top_day_name_pane

0x96e2,	// (0x000654c0) frame_month_view_pane

0xef66,	// (0x0006ad44) grid_month_view_pane

0x96f7,	// (0x000654d5) cell_top_day_name_pane_ParamLimits

0x96f7,	// (0x000654d5) cell_top_day_name_pane

0x9711,	// (0x000654ef) cell_area_left_week_number_pane_ParamLimits

0x9711,	// (0x000654ef) cell_area_left_week_number_pane

0x9734,	// (0x00065512) cell_month_view_pane_ParamLimits

0x9734,	// (0x00065512) cell_month_view_pane

0xef74,	// (0x0006ad52) frm_month_g1

0x9760,	// (0x0006553e) frm_month_g2

0x9771,	// (0x0006554f) frm_month_g3

0x9782,	// (0x00065560) frm_month_g4

0x9793,	// (0x00065571) frm_month_g5

0x97a6,	// (0x00065584) frm_month_g6

0x97b9,	// (0x00065597) frm_month_g7

0xef81,	// (0x0006ad5f) frm_month_g8

0x97cc,	// (0x000655aa) frm_month_g9

0x97d9,	// (0x000655b7) frm_month_g10

0x97e6,	// (0x000655c4) frm_month_g11

0x97f3,	// (0x000655d1) frm_month_g12

0x9800,	// (0x000655de) frm_month_g13

0x980d,	// (0x000655eb) frm_month_g14

0x981c,	// (0x000655fa) frm_month_g15

0x982b,	// (0x00065609) frm_month_g16

0x000f,

0xfc45,	// (0x0006ba23) frm_month_g

0xef8e,	// (0x0006ad6c) cell_top_day_name_pane_t1

0x983a,	// (0x00065618) cell_area_left_week_number_pane_g1

0x9849,	// (0x00065627) cell_area_left_week_number_pane_t1

0xcfaf,	// (0x00068d8d) cell_month_view_pane_g1

0x985f,	// (0x0006563d) cell_month_view_pane_t1

0x9bf6,	// (0x000659d4) main_fps_pane

0xe7a0,	// (0x0006a57e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7a0,	// (0x0006a57e) cmail_ddmenu_btn02_pane_cp1

0xe7bc,	// (0x0006a59a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7bc,	// (0x0006a59a) cmail_ddmenu_btn02_pane_cp2

0x901a,	// (0x00064df8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x901a,	// (0x00064df8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb6a,	// (0x0006b948) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb6a,	// (0x0006b948) cmail_ddmenu_btn02_pane_g

0x9038,	// (0x00064e16) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9038,	// (0x00064e16) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb6f,	// (0x0006b94d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb6f,	// (0x0006b94d) cmail_ddmenu_btn02_pane_t

0x9875,	// (0x00065653) fps_text_pane_ParamLimits

0x9875,	// (0x00065653) fps_text_pane

0x9882,	// (0x00065660) main_fps_pane_g1_ParamLimits

0x9882,	// (0x00065660) main_fps_pane_g1

0x9890,	// (0x0006566e) wait_bar_pane_cp010_ParamLimits

0x9890,	// (0x0006566e) wait_bar_pane_cp010

0x989c,	// (0x0006567a) fps_text_pane_t1_ParamLimits

0x989c,	// (0x0006567a) fps_text_pane_t1

0x6338,	// (0x00062116) cam4_image_uncrop_pane_g1

0x6341,	// (0x0006211f) cam4_image_uncrop_pane_g2

0x634a,	// (0x00062128) cam4_image_uncrop_pane_g3

0x6353,	// (0x00062131) cam4_image_uncrop_pane_g4

0x0003,

0xf71d,	// (0x0006b4fb) cam4_image_uncrop_pane_g

0x96a4,	// (0x00065482) dia3_listrow_pane_ParamLimits

0x9bf6,	// (0x000659d4) main_phob2_pane

0x8b4f,	// (0x0006492d) cell_tport_appsw_pane_cp02_ParamLimits

0x8b4f,	// (0x0006492d) cell_tport_appsw_pane_cp02

0x8b5e,	// (0x0006493c) cell_tport_appsw_pane_cp03_ParamLimits

0x8b5e,	// (0x0006493c) cell_tport_appsw_pane_cp03

0x9bf6,	// (0x000659d4) phob2_contact_card_pane

0x9bf6,	// (0x000659d4) phob2_listscroll_pane

0xefa1,	// (0x0006ad7f) phob2_list_pane

0xefa9,	// (0x0006ad87) scroll_pane_cp034

0x98b5,	// (0x00065693) phob2_cc_data_pane_ParamLimits

0x98b5,	// (0x00065693) phob2_cc_data_pane

0x98cf,	// (0x000656ad) phob2_cc_listscroll_pane_ParamLimits

0x98cf,	// (0x000656ad) phob2_cc_listscroll_pane

0x98e9,	// (0x000656c7) list_double_large_graphic_phob2_pane_ParamLimits

0x98e9,	// (0x000656c7) list_double_large_graphic_phob2_pane

0x9908,	// (0x000656e6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9908,	// (0x000656e6) list_double_large_graphic_phob2_pane_g1

0x991e,	// (0x000656fc) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x991e,	// (0x000656fc) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc66,	// (0x0006ba44) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc66,	// (0x0006ba44) list_double_large_graphic_phob2_pane_g

0x992a,	// (0x00065708) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x992a,	// (0x00065708) list_double_large_graphic_phob2_pane_t1

0x9940,	// (0x0006571e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9940,	// (0x0006571e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc6b,	// (0x0006ba49) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc6b,	// (0x0006ba49) list_double_large_graphic_phob2_pane_t

0x9bf6,	// (0x000659d4) list_highlight_pane_cp024

0x9955,	// (0x00065733) phob2_cc_button_pane

0x995d,	// (0x0006573b) phob2_cc_data_pane_g1_ParamLimits

0x995d,	// (0x0006573b) phob2_cc_data_pane_g1

0x9969,	// (0x00065747) phob2_cc_data_pane_g2_ParamLimits

0x9969,	// (0x00065747) phob2_cc_data_pane_g2

0x0001,

0xfc70,	// (0x0006ba4e) phob2_cc_data_pane_g_ParamLimits

0xfc70,	// (0x0006ba4e) phob2_cc_data_pane_g

0x9975,	// (0x00065753) phob2_cc_data_pane_t1_ParamLimits

0x9975,	// (0x00065753) phob2_cc_data_pane_t1

0x9987,	// (0x00065765) phob2_cc_data_pane_t2_ParamLimits

0x9987,	// (0x00065765) phob2_cc_data_pane_t2

0x9999,	// (0x00065777) phob2_cc_data_pane_t3_ParamLimits

0x9999,	// (0x00065777) phob2_cc_data_pane_t3

0x0002,

0xfc75,	// (0x0006ba53) phob2_cc_data_pane_t_ParamLimits

0xfc75,	// (0x0006ba53) phob2_cc_data_pane_t

0xefb1,	// (0x0006ad8f) phob2_cc_list_pane_ParamLimits

0xefb1,	// (0x0006ad8f) phob2_cc_list_pane

0xde86,	// (0x00069c64) scroll_pane_cp035_ParamLimits

0xde86,	// (0x00069c64) scroll_pane_cp035

0xa579,	// (0x00066357) bg_button_pane_cp033

0xefbd,	// (0x0006ad9b) phob2_cc_button_pane_g1

0xefc9,	// (0x0006ada7) phob2_cc_button_pane_t1

0xefde,	// (0x0006adbc) phob2_cc_button_pane_t2

0x0001,

0xfc7c,	// (0x0006ba5a) phob2_cc_button_pane_t

0x99ab,	// (0x00065789) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x99ab,	// (0x00065789) list_double_large_graphic_phob2_cc_pane

0x9a1f,	// (0x000657fd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a1f,	// (0x000657fd) list_double_large_graphic_phob2_cc_pane_g1

0x9a30,	// (0x0006580e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a30,	// (0x0006580e) list_double_large_graphic_phob2_cc_pane_g2

0x9a3c,	// (0x0006581a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a3c,	// (0x0006581a) list_double_large_graphic_phob2_cc_pane_g3

0x9a48,	// (0x00065826) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a48,	// (0x00065826) list_double_large_graphic_phob2_cc_pane_g4

0x9a54,	// (0x00065832) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a54,	// (0x00065832) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc81,	// (0x0006ba5f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc81,	// (0x0006ba5f) list_double_large_graphic_phob2_cc_pane_g

0x9a60,	// (0x0006583e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a60,	// (0x0006583e) list_double_large_graphic_phob2_cc_pane_t1

0x9a89,	// (0x00065867) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a89,	// (0x00065867) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc8c,	// (0x0006ba6a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc8c,	// (0x0006ba6a) list_double_large_graphic_phob2_cc_pane_t

0xeff0,	// (0x0006adce) list_highlight_pane_cp025_ParamLimits

0xeff0,	// (0x0006adce) list_highlight_pane_cp025

0xa579,	// (0x00066357) bg_button_pane_cp033_ParamLimits

0xefbd,	// (0x0006ad9b) phob2_cc_button_pane_g1_ParamLimits

0xefc9,	// (0x0006ada7) phob2_cc_button_pane_t1_ParamLimits

0xefde,	// (0x0006adbc) phob2_cc_button_pane_t2_ParamLimits

0xfc7c,	// (0x0006ba5a) phob2_cc_button_pane_t_ParamLimits

0x1054,	// (0x0005ce32) popup_wgtman_window

0xd82f,	// (0x0006960d) scroll_pane_cp038

0x941e,	// (0x000651fc) wgtman_btn_pane_cp_01_ParamLimits

0x941e,	// (0x000651fc) wgtman_btn_pane_cp_01

0xeffe,	// (0x0006addc) wgtman_content_pane

0xf007,	// (0x0006ade5) wgtman_heading_pane

0x9bf6,	// (0x000659d4) bg_heading_pane_cp02

0xf010,	// (0x0006adee) wgtman_heading_pane_g1

0xf018,	// (0x0006adf6) wgtman_heading_pane_t1

0xf026,	// (0x0006ae04) scroll_pane_cp036

0xf02e,	// (0x0006ae0c) wgtman_list_pane

0xe6aa,	// (0x0006a488) wgtman_list_pane_t1_ParamLimits

0xe6aa,	// (0x0006a488) wgtman_list_pane_t1

0x6297,	// (0x00062075) cam4_grid_pane

0x706d,	// (0x00062e4b) bg_button_pane_cp015_ParamLimits

0x707f,	// (0x00062e5d) bg_button_pane_cp016_ParamLimits

0x7092,	// (0x00062e70) bg_button_pane_cp017_ParamLimits

0x70e8,	// (0x00062ec6) popup_vitu2_query_window_g3_ParamLimits

0x70e8,	// (0x00062ec6) popup_vitu2_query_window_g3

0x71a3,	// (0x00062f81) popup_vitu2_query_window_t6_ParamLimits

0x71a3,	// (0x00062f81) popup_vitu2_query_window_t6

0x71ce,	// (0x00062fac) popup_vitu2_query_window_t7_ParamLimits

0x71ce,	// (0x00062fac) popup_vitu2_query_window_t7

0xdd29,	// (0x00069b07) cam4_grid_pane_g1

0xdd32,	// (0x00069b10) cam4_grid_pane_g2

0xf036,	// (0x0006ae14) cam4_grid_pane_g3

0xf03f,	// (0x0006ae1d) cam4_grid_pane_g4

0x0003,

0x0c92,	// (0x0005ca70) cam4_grid_pane_g

0x1f02,	// (0x0005dce0) aid_placing_vt_slider_lsc_ParamLimits

0x2242,	// (0x0005e020) vidtel_button_pane_ParamLimits

0x2242,	// (0x0005e020) vidtel_button_pane

0x9bf6,	// (0x000659d4) bg_button_pane_cp034

0xf04a,	// (0x0006ae28) vidtel_button_pane_g1

0xf052,	// (0x0006ae30) vidtel_button_pane_t1

0xd949,	// (0x00069727) aid_size_vtel_slider_touch

0xde86,	// (0x00069c64) scroll_pane_cp039

0x7fee,	// (0x00063dcc) ncim_query_button_pane_cp01_ParamLimits

0x800d,	// (0x00063deb) ncimui_query_pane_g1_ParamLimits

0xa579,	// (0x00066357) input_focus_pane_cp012_ParamLimits

0xe250,	// (0x0006a02e) ncim_query_entry_pane_t1_ParamLimits

0xde86,	// (0x00069c64) scroll_pane_cp039_ParamLimits

0xb3ba,	// (0x00067198) navi_pane_bcale_mc_g1

0xb3c2,	// (0x000671a0) navi_pane_bcale_mc_t1

0xe805,	// (0x0006a5e3) main_sp_fs_email_pane_g1

0xe811,	// (0x0006a5ef) main_sp_fs_email_pane_g2

0x0001,

0xfa35,	// (0x0006b813) main_sp_fs_email_pane_g

0xea70,	// (0x0006a84e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea70,	// (0x0006a84e) list_single_cale_mrui_row_pane_g3

0x9058,	// (0x00064e36) list_single_recal_day_pane_g5_event_pane

0xa355,	// (0x00066133) list_single_recal_day_pane_g7

0xf068,	// (0x0006ae46) list_recal_day_event_pane_cp01

0xf071,	// (0x0006ae4f) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0006ae57) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0006ae5f) list_recal_vselct_pane_cp01

0xd96b,	// (0x00069749) list_recal_day_event_pane_cp01_g1

0xa587,	// (0x00066365) list_recal_day_event_pane_cp01_t1

0xa35d,	// (0x0006613b) list_single_recal_day_pane_t1_ParamLimits

0xa36f,	// (0x0006614d) list_single_recal_day_pane_t2_ParamLimits

0xfb7f,	// (0x0006b95d) list_single_recal_day_pane_t_ParamLimits

0xa81f,	// (0x000665fd) bg_notes_pane_ParamLimits

0xa8ce,	// (0x000666ac) list_notes_pane_ParamLimits

0x13b9,	// (0x0005d197) scroll_pane_cp06_ParamLimits

0xa8f0,	// (0x000666ce) main_notes_pane_ParamLimits

0x9bf6,	// (0x000659d4) main_welc_pane

0x9ab2,	// (0x00065890) main_welc_body_pane_ParamLimits

0x9ab2,	// (0x00065890) main_welc_body_pane

0x9acb,	// (0x000658a9) main_welc_opti_pane_ParamLimits

0x9acb,	// (0x000658a9) main_welc_opti_pane

0x9afe,	// (0x000658dc) main_welc_pane_t1_ParamLimits

0x9afe,	// (0x000658dc) main_welc_pane_t1

0x9b18,	// (0x000658f6) main_welc_body_row_pane_ParamLimits

0x9b18,	// (0x000658f6) main_welc_body_row_pane

0xdbe4,	// (0x000699c2) main_welc_opti_row_pane_ParamLimits

0xdbe4,	// (0x000699c2) main_welc_opti_row_pane

0xf08b,	// (0x0006ae69) main_welc_opti_row_pane_g1

0x9b41,	// (0x0006591f) main_welc_opti_row_pane_t1

0xf093,	// (0x0006ae71) main_welc_body_row_pane_t1

0xedc3,	// (0x0006aba1) popup_notif_wgt_heading_pane

0xeddd,	// (0x0006abbb) aid_size_list_notif_wgt_del_ParamLimits

0xedea,	// (0x0006abc8) list_notif_wgt_row_pane_g1_ParamLimits

0xedf6,	// (0x0006abd4) list_notif_wgt_row_pane_g2_ParamLimits

0xee05,	// (0x0006abe3) list_notif_wgt_row_pane_g3_ParamLimits

0xfbe6,	// (0x0006b9c4) list_notif_wgt_row_pane_g_ParamLimits

0xee12,	// (0x0006abf0) list_notif_wgt_row_pane_t1_ParamLimits

0xee28,	// (0x0006ac06) list_notif_wgt_row_pane_t2_ParamLimits

0xee3a,	// (0x0006ac18) list_notif_wgt_row_pane_t3_ParamLimits

0xfbed,	// (0x0006b9cb) list_notif_wgt_row_pane_t_ParamLimits

0x94b1,	// (0x0006528f) listrow_wgtman_pane_g1_ParamLimits

0x94be,	// (0x0006529c) listrow_wgtman_pane_g2_ParamLimits

0xfc16,	// (0x0006b9f4) listrow_wgtman_pane_g_ParamLimits

0x94dc,	// (0x000652ba) listrow_wgtman_pane_t1_ParamLimits

0x94f4,	// (0x000652d2) listrow_wgtman_pane_t2_ParamLimits

0xfc1b,	// (0x0006b9f9) listrow_wgtman_pane_t_ParamLimits

0x951a,	// (0x000652f8) wait_bar_pane_cp09_ParamLimits

0x9bf6,	// (0x000659d4) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0006ae80) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0006ae88) popup_notif_wgt_heading_pane_t1

0x9bf6,	// (0x000659d4) main_vids_pane

0x9bf6,	// (0x000659d4) vids_listscroll_pane

0x9b50,	// (0x0006592e) scroll_pane_cp040

0x9bf6,	// (0x000659d4) vids_list_pane

0x9b5b,	// (0x00065939) vids_list_double_pane_ParamLimits

0x9b5b,	// (0x00065939) vids_list_double_pane

0x9b73,	// (0x00065951) vids_list_double_pane_g1

0x9b7c,	// (0x0006595a) vids_list_double_pane_t1

0x9b8c,	// (0x0006596a) vids_list_double_pane_t2

0x0001,

0xfc96,	// (0x0006ba74) vids_list_double_pane_t

0x428e,	// (0x0006006c) main_ncimui_pane_ParamLimits

0x7e45,	// (0x00063c23) main_ncimui_pane_g1_ParamLimits

0x7e51,	// (0x00063c2f) main_ncimui_pane_g2_ParamLimits

0x7e51,	// (0x00063c2f) main_ncimui_pane_g2

0x0001,

0xf9a7,	// (0x0006b785) main_ncimui_pane_g_ParamLimits

0xf9a7,	// (0x0006b785) main_ncimui_pane_g

0x9ae4,	// (0x000658c2) main_welc_pane_g1_ParamLimits

0x9ae4,	// (0x000658c2) main_welc_pane_g1

0x9af0,	// (0x000658ce) main_welc_pane_g2_ParamLimits

0x9af0,	// (0x000658ce) main_welc_pane_g2

0x0001,

0xfc91,	// (0x0006ba6f) main_welc_pane_g_ParamLimits

0xfc91,	// (0x0006ba6f) main_welc_pane_g

0xa81f,	// (0x000665fd) listscroll_mce_pane_ParamLimits

0xb51d,	// (0x000672fb) wait_bar_pane_cp10

0xc956,	// (0x00068734) main_cale_day_pane_ParamLimits

0xc956,	// (0x00068734) main_cale_week_pane_ParamLimits

0xa81f,	// (0x000665fd) main_messa_pane_ParamLimits

0x55b8,	// (0x00061396) main_clock2_btn_pane_ParamLimits

0x55b8,	// (0x00061396) main_clock2_btn_pane

0xd137,	// (0x00068f15) main_clock2_btn_pane_cp01_ParamLimits

0xd137,	// (0x00068f15) main_clock2_btn_pane_cp01

0xea41,	// (0x0006a81f) list_cale_mrui_pane_ParamLimits

0xee70,	// (0x0006ac4e) main_cf0_pane_g2

0x0001,

0xfbf4,	// (0x0006b9d2) main_cf0_pane_g

0x96c1,	// (0x0006549f) area_left_week_number_pane_ParamLimits

0x96d4,	// (0x000654b2) area_top_day_name_pane_ParamLimits

0x96e2,	// (0x000654c0) frame_month_view_pane_ParamLimits

0xef66,	// (0x0006ad44) grid_month_view_pane_ParamLimits

0xef74,	// (0x0006ad52) frm_month_g1_ParamLimits

0x9760,	// (0x0006553e) frm_month_g2_ParamLimits

0x9771,	// (0x0006554f) frm_month_g3_ParamLimits

0x9782,	// (0x00065560) frm_month_g4_ParamLimits

0x9793,	// (0x00065571) frm_month_g5_ParamLimits

0x97a6,	// (0x00065584) frm_month_g6_ParamLimits

0x97b9,	// (0x00065597) frm_month_g7_ParamLimits

0xef81,	// (0x0006ad5f) frm_month_g8_ParamLimits

0x97cc,	// (0x000655aa) frm_month_g9_ParamLimits

0x97d9,	// (0x000655b7) frm_month_g10_ParamLimits

0x97e6,	// (0x000655c4) frm_month_g11_ParamLimits

0x97f3,	// (0x000655d1) frm_month_g12_ParamLimits

0x9800,	// (0x000655de) frm_month_g13_ParamLimits

0x980d,	// (0x000655eb) frm_month_g14_ParamLimits

0x981c,	// (0x000655fa) frm_month_g15_ParamLimits

0x982b,	// (0x00065609) frm_month_g16_ParamLimits

0xfc45,	// (0x0006ba23) frm_month_g_ParamLimits

0xef8e,	// (0x0006ad6c) cell_top_day_name_pane_t1_ParamLimits

0x983a,	// (0x00065618) cell_area_left_week_number_pane_g1_ParamLimits

0x9849,	// (0x00065627) cell_area_left_week_number_pane_t1_ParamLimits

0xcfaf,	// (0x00068d8d) cell_month_view_pane_g1_ParamLimits

0x985f,	// (0x0006563d) cell_month_view_pane_t1_ParamLimits

0xa817,	// (0x000665f5) main_clock2_btn_pane_g1

0xf0b8,	// (0x0006ae96) main_clock2_btn_pane_t1

0xa579,	// (0x00066357) listscroll_cmail_pane_ParamLimits

0xe805,	// (0x0006a5e3) main_sp_fs_email_pane_g1_ParamLimits

0xe811,	// (0x0006a5ef) main_sp_fs_email_pane_g2_ParamLimits

0xfa35,	// (0x0006b813) main_sp_fs_email_pane_g_ParamLimits

0xeb4f,	// (0x0006a92d) list_recal_day_pane_ParamLimits

0xeb60,	// (0x0006a93e) mian_recal_day_pane_t1

0x881b,	// (0x000645f9) list_single_dyc_row_text_pane_t4_ParamLimits

0x881b,	// (0x000645f9) list_single_dyc_row_text_pane_t4

0x8852,	// (0x00064630) list_single_dyc_row_text_pane_t5_ParamLimits

0x8852,	// (0x00064630) list_single_dyc_row_text_pane_t5

0xa0c3,	// (0x00065ea1) list_single_dyc_row_text_pane_t6_ParamLimits

0xa0c3,	// (0x00065ea1) list_single_dyc_row_text_pane_t6

0x30e5,	// (0x0005eec3) aid_mgn_list_cale_time_pane

0x428e,	// (0x0006006c) main_gallery2_pane_ParamLimits

0xd14d,	// (0x00068f2b) main_clock2_pane_cp01_t1

0xd15b,	// (0x00068f39) main_clock2_pane_cp01_t3

0x0001,

0x05b6,	// (0x0005c394) main_clock2_pane_cp01_t

0x1819,	// (0x0005d5f7) cale_week_scroll_pane_g16_ParamLimits

0x1819,	// (0x0005d5f7) cale_week_scroll_pane_g16

0xaabe,	// (0x0006689c) vorec_slider_pane

0xf052,	// (0x0006ae30) vidtel_button_pane_t1_ParamLimits

0x90b3,	// (0x00064e91) main_fs_bigclock_clock_pane_g1_ParamLimits

0x90b3,	// (0x00064e91) main_fs_bigclock_clock_pane_g2_ParamLimits

0x90c0,	// (0x00064e9e) main_fs_bigclock_clock_pane_g3_ParamLimits

0x90c0,	// (0x00064e9e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfba2,	// (0x0006b980) main_fs_bigclock_clock_pane_g_ParamLimits

0x90cc,	// (0x00064eaa) main_fs_bigclock_clock_pane_t1_ParamLimits

0x90df,	// (0x00064ebd) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfbab,	// (0x0006b989) main_fs_bigclock_clock_pane_t_ParamLimits

0x4e5d,	// (0x00060c3b) main_mup3_lyrics_pane_ParamLimits

0x4e5d,	// (0x00060c3b) main_mup3_lyrics_pane

0x9bc0,	// (0x0006599e) main_mup3_lyrics_pane_t1_ParamLimits

0x9bc0,	// (0x0006599e) main_mup3_lyrics_pane_t1

0x5c0a,	// (0x000619e8) aid_main_mp4_pane_t1_area

0x5c14,	// (0x000619f2) aid_main_mp4_pane_t2_area

0x5d13,	// (0x00061af1) main_mp4_pane_g7_ParamLimits

0x5d13,	// (0x00061af1) main_mp4_pane_g7

0x5d1f,	// (0x00061afd) main_mp4_pane_g8_ParamLimits

0x5d1f,	// (0x00061afd) main_mp4_pane_g8

0x613f,	// (0x00061f1d) aid_call6_pane_g1_size

0x99f1,	// (0x000657cf) list_double_large_graphic_phob2_other_pane_ParamLimits

0x99f1,	// (0x000657cf) list_double_large_graphic_phob2_other_pane

0xae97,	// (0x00066c75) list_double_large_graphic_phob2_other_pane_g1

0x9bf6,	// (0x000659d4) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
