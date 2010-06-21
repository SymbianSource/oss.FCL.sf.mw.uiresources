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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005dc22 };

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
0x0bbf,	// (0x0005e7e1) Screen

0x0bcb,	// (0x0005e7ed) application_window

0x0c27,	// (0x0005e849) area_bottom_pane_ParamLimits

0x0c27,	// (0x0005e849) area_bottom_pane

0x0c85,	// (0x0005e8a7) area_top_pane_ParamLimits

0x0c85,	// (0x0005e8a7) area_top_pane

0x0ce9,	// (0x0005e90b) call_video_uplink_pane_ParamLimits

0x0ce9,	// (0x0005e90b) call_video_uplink_pane

0x0d28,	// (0x0005e94a) main_pane_ParamLimits

0x0d28,	// (0x0005e94a) main_pane

0xca5c,	// (0x0006a67e) context_pane

0x43e6,	// (0x00062008) navi_pane

0x440e,	// (0x00062030) popup_cale_events_window_ParamLimits

0x440e,	// (0x00062030) popup_cale_events_window

0xca6f,	// (0x0006a691) popup_mup_playback_window

0x4426,	// (0x00062048) signal_pane

0xaa14,	// (0x00068636) main_browser_pane

0xabbc,	// (0x000687de) main_burst_pane

0x4236,	// (0x00061e58) main_calc_pane

0xca42,	// (0x0006a664) main_cale_day_pane

0x4243,	// (0x00061e65) main_cale_month_pane

0xca42,	// (0x0006a664) main_cale_week_pane

0xabbc,	// (0x000687de) main_call_pane

0xa2d6,	// (0x00067ef8) main_call_poc_pane

0xabbc,	// (0x000687de) main_camera_pane

0xabbc,	// (0x000687de) main_chi_dic_pane

0xb3dd,	// (0x00068fff) main_clock_pane

0xa2d6,	// (0x00067ef8) main_fmradio_pane

0xabbc,	// (0x000687de) main_graph_messa_pane

0xa2d6,	// (0x00067ef8) main_help_pane

0xaa14,	// (0x00068636) main_im_pane

0xa531,	// (0x00068153) main_image_pane_ParamLimits

0xa531,	// (0x00068153) main_image_pane

0xa2d6,	// (0x00067ef8) main_location2_pane

0xabbc,	// (0x000687de) main_location_pane

0xa531,	// (0x00068153) main_messa_pane

0xa2d6,	// (0x00067ef8) main_mp2_pane

0xabbc,	// (0x000687de) main_mp_pane

0xa2d6,	// (0x00067ef8) main_msg_pane

0xa2d6,	// (0x00067ef8) main_mup_eq_pane

0xa2d6,	// (0x00067ef8) main_mup_pane

0xaa14,	// (0x00068636) main_notes_pane

0xa2d6,	// (0x00067ef8) main_pec_pane

0xa2d6,	// (0x00067ef8) main_phob_pane

0xa2d6,	// (0x00067ef8) main_pinb_pane

0xa2d6,	// (0x00067ef8) main_postcard_pane

0xa2d6,	// (0x00067ef8) main_qdial_pane

0xabbc,	// (0x000687de) main_skin_pane

0xa2d6,	// (0x00067ef8) main_smil2_pane

0xabbc,	// (0x000687de) main_smil_pane

0xabbc,	// (0x000687de) main_video_pane

0xabbc,	// (0x000687de) main_video_tele_pane

0xa531,	// (0x00068153) main_viewer_pane_ParamLimits

0xa531,	// (0x00068153) main_viewer_pane

0xabbc,	// (0x000687de) main_vorec_pane

0x4296,	// (0x00061eb8) popup_blid_sat_info_window_ParamLimits

0x4296,	// (0x00061eb8) popup_blid_sat_info_window

0x42bc,	// (0x00061ede) popup_dyc_status_message_window_ParamLimits

0x42bc,	// (0x00061ede) popup_dyc_status_message_window

0x42cc,	// (0x00061eee) popup_grid_large_graphic_window_ParamLimits

0x42cc,	// (0x00061eee) popup_grid_large_graphic_window

0x4361,	// (0x00061f83) popup_loc_request_window_ParamLimits

0x4361,	// (0x00061f83) popup_loc_request_window

0x43ba,	// (0x00061fdc) popup_wml_address_window_ParamLimits

0x43ba,	// (0x00061fdc) popup_wml_address_window

0x410e,	// (0x00061d30) call_muted_g1

0x3dcd,	// (0x000619ef) popup_call_audio_conf_window_ParamLimits

0x3dcd,	// (0x000619ef) popup_call_audio_conf_window

0x411e,	// (0x00061d40) popup_call_audio_first_window_ParamLimits

0x411e,	// (0x00061d40) popup_call_audio_first_window

0x415e,	// (0x00061d80) popup_call_audio_in_window_ParamLimits

0x415e,	// (0x00061d80) popup_call_audio_in_window

0x4182,	// (0x00061da4) popup_call_audio_out_window_ParamLimits

0x4182,	// (0x00061da4) popup_call_audio_out_window

0x41a4,	// (0x00061dc6) popup_call_audio_second_window_ParamLimits

0x41a4,	// (0x00061dc6) popup_call_audio_second_window

0x41d4,	// (0x00061df6) popup_call_audio_wait_window_ParamLimits

0x41d4,	// (0x00061df6) popup_call_audio_wait_window

0x41f5,	// (0x00061e17) popup_number_entry_window_ParamLimits

0x41f5,	// (0x00061e17) popup_number_entry_window

0x9e8e,	// (0x00067ab0) bg_popup_call_pane_cp05_ParamLimits

0x9e8e,	// (0x00067ab0) bg_popup_call_pane_cp05

0x9eae,	// (0x00067ad0) popup_number_entry_window_t1

0x9ec1,	// (0x00067ae3) popup_number_entry_window_t2

0x9ed3,	// (0x00067af5) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0006cce8) popup_number_entry_window_t

0x9f1a,	// (0x00067b3c) text_title_cp2

0x9f2d,	// (0x00067b4f) bg_popup_call_pane_cp_ParamLimits

0x9f2d,	// (0x00067b4f) bg_popup_call_pane_cp

0x9f3b,	// (0x00067b5d) call_thumbnail_pane

0x9f43,	// (0x00067b65) popup_call_audio_in_window_g1_ParamLimits

0x9f43,	// (0x00067b65) popup_call_audio_in_window_g1

0x9f4f,	// (0x00067b71) popup_call_audio_in_window_g2_ParamLimits

0x9f4f,	// (0x00067b71) popup_call_audio_in_window_g2

0x9f5b,	// (0x00067b7d) popup_call_audio_in_window_g3_ParamLimits

0x9f5b,	// (0x00067b7d) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0006ccf1) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0006ccf1) popup_call_audio_in_window_g

0x9f67,	// (0x00067b89) popup_call_audio_in_window_t1_ParamLimits

0x9f67,	// (0x00067b89) popup_call_audio_in_window_t1

0x9f83,	// (0x00067ba5) popup_call_audio_in_window_t2_ParamLimits

0x9f83,	// (0x00067ba5) popup_call_audio_in_window_t2

0x9f9f,	// (0x00067bc1) popup_call_audio_in_window_t3_ParamLimits

0x9f9f,	// (0x00067bc1) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0006ccf8) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0006ccf8) popup_call_audio_in_window_t

0x9f2d,	// (0x00067b4f) bg_popup_call_pane_cp01_ParamLimits

0x9f2d,	// (0x00067b4f) bg_popup_call_pane_cp01

0x9f3b,	// (0x00067b5d) call_thumbnail_pane_cp02

0x9fb2,	// (0x00067bd4) call_type_pane_cp022

0x9fba,	// (0x00067bdc) popup_call_audio_out_window_g1_ParamLimits

0x9fba,	// (0x00067bdc) popup_call_audio_out_window_g1

0x9fcc,	// (0x00067bee) popup_call_audio_out_window_g2_ParamLimits

0x9fcc,	// (0x00067bee) popup_call_audio_out_window_g2

0x9fd8,	// (0x00067bfa) popup_call_audio_out_window_g3_ParamLimits

0x9fd8,	// (0x00067bfa) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0006ccff) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0006ccff) popup_call_audio_out_window_g

0x9fea,	// (0x00067c0c) popup_call_audio_out_window_t1_ParamLimits

0x9fea,	// (0x00067c0c) popup_call_audio_out_window_t1

0xa002,	// (0x00067c24) popup_call_audio_out_window_t2_ParamLimits

0xa002,	// (0x00067c24) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0006cd06) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0006cd06) popup_call_audio_out_window_t

0xa017,	// (0x00067c39) bg_popup_call_pane_ParamLimits

0xa017,	// (0x00067c39) bg_popup_call_pane

0x0f0b,	// (0x0005eb2d) call_thumbnail_pane_cp_ParamLimits

0x0f0b,	// (0x0005eb2d) call_thumbnail_pane_cp

0xa09b,	// (0x00067cbd) call_type_pane_cp01_ParamLimits

0xa09b,	// (0x00067cbd) call_type_pane_cp01

0xa0df,	// (0x00067d01) popup_call_audio_first_window_g1_ParamLimits

0xa0df,	// (0x00067d01) popup_call_audio_first_window_g1

0xa12b,	// (0x00067d4d) popup_call_audio_first_window_g2_ParamLimits

0xa12b,	// (0x00067d4d) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0006cd0b) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0006cd0b) popup_call_audio_first_window_g

0xa16f,	// (0x00067d91) popup_call_audio_first_window_t1_ParamLimits

0xa16f,	// (0x00067d91) popup_call_audio_first_window_t1

0xa21b,	// (0x00067e3d) popup_call_audio_first_window_t4_ParamLimits

0xa21b,	// (0x00067e3d) popup_call_audio_first_window_t4

0xa2a7,	// (0x00067ec9) popup_call_audio_first_window_t5_ParamLimits

0xa2a7,	// (0x00067ec9) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0006cd10) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0006cd10) popup_call_audio_first_window_t

0xa2d6,	// (0x00067ef8) bg_popup_call_pane_cp02

0xa2e0,	// (0x00067f02) call_type_pane_cp023

0xa2e8,	// (0x00067f0a) popup_call_audio_wait_window_g1

0xa2f0,	// (0x00067f12) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006cd17) popup_call_audio_wait_window_g

0xa2f8,	// (0x00067f1a) popup_call_audio_wait_window_t3

0xa306,	// (0x00067f28) bg_popup_call_pane_cp03_ParamLimits

0xa306,	// (0x00067f28) bg_popup_call_pane_cp03

0xa366,	// (0x00067f88) call_thumbnail_pane_cp011_ParamLimits

0xa366,	// (0x00067f88) call_thumbnail_pane_cp011

0xa372,	// (0x00067f94) call_type_pane_cp034_ParamLimits

0xa372,	// (0x00067f94) call_type_pane_cp034

0xa3ae,	// (0x00067fd0) popup_call_audio_second_window_g1_ParamLimits

0xa3ae,	// (0x00067fd0) popup_call_audio_second_window_g1

0xa3ea,	// (0x0006800c) popup_call_audio_second_window_g2_ParamLimits

0xa3ea,	// (0x0006800c) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0006cd1c) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0006cd1c) popup_call_audio_second_window_g

0xa426,	// (0x00068048) popup_call_audio_second_window_t1_ParamLimits

0xa426,	// (0x00068048) popup_call_audio_second_window_t1

0xa4a7,	// (0x000680c9) popup_call_audio_second_window_t2_ParamLimits

0xa4a7,	// (0x000680c9) popup_call_audio_second_window_t2

0xa4dd,	// (0x000680ff) popup_call_audio_second_window_t3_ParamLimits

0xa4dd,	// (0x000680ff) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0006cd21) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0006cd21) popup_call_audio_second_window_t

0xa2d6,	// (0x00067ef8) bg_popup_call_pane_cp04

0xa513,	// (0x00068135) list_conf_pane

0xa51b,	// (0x0006813d) popup_call_audio_conf_window_t1

0xa529,	// (0x0006814b) call_thumbnail_pane_g1

0xa531,	// (0x00068153) bg_pinb_pane_ParamLimits

0xa531,	// (0x00068153) bg_pinb_pane

0xa53f,	// (0x00068161) find_pinb_pane

0xa548,	// (0x0006816a) listscroll_pinb_pane_ParamLimits

0xa548,	// (0x0006816a) listscroll_pinb_pane

0xa557,	// (0x00068179) pinb_bg_pane_g1

0x0f2f,	// (0x0005eb51) pinb_bg_pane_g2

0x0f3b,	// (0x0005eb5d) pinb_bg_pane_g3

0x0f47,	// (0x0005eb69) pinb_bg_pane_g4

0x0f53,	// (0x0005eb75) pinb_bg_pane_g5

0x0f5f,	// (0x0005eb81) pinb_bg_pane_g6

0x0f6a,	// (0x0005eb8c) pinb_bg_pane_g7

0x0f75,	// (0x0005eb97) pinb_bg_pane_g8

0x0f80,	// (0x0005eba2) pinb_bg_pane_g9

0x0f8a,	// (0x0005ebac) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0006cd28) pinb_bg_pane_g

0x0fa7,	// (0x0005ebc9) grid_pinb_pane

0x0fb2,	// (0x0005ebd4) list_pinb_pane

0x0fbd,	// (0x0005ebdf) scroll_pane_cp01_ParamLimits

0x0fbd,	// (0x0005ebdf) scroll_pane_cp01

0xa561,	// (0x00068183) find_pinb_pane_g1_ParamLimits

0xa561,	// (0x00068183) find_pinb_pane_g1

0xa579,	// (0x0006819b) find_pinb_pane_t1

0xa58b,	// (0x000681ad) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0006cd42) find_pinb_pane_t

0xa5a0,	// (0x000681c2) input_focus_pane_cp01_ParamLimits

0xa5a0,	// (0x000681c2) input_focus_pane_cp01

0x0fcf,	// (0x0005ebf1) cell_pinb_pane_ParamLimits

0x0fcf,	// (0x0005ebf1) cell_pinb_pane

0x0ff4,	// (0x0005ec16) cell_pinb_pane_g1_ParamLimits

0x0ff4,	// (0x0005ec16) cell_pinb_pane_g1

0x1009,	// (0x0005ec2b) cell_pinb_pane_g2_ParamLimits

0x1009,	// (0x0005ec2b) cell_pinb_pane_g2

0xa5ac,	// (0x000681ce) cell_pinb_pane_g3_ParamLimits

0xa5ac,	// (0x000681ce) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0006cd47) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0006cd47) cell_pinb_pane_g

0xa2d6,	// (0x00067ef8) grid_highlight_pane_cp01

0x1015,	// (0x0005ec37) list_pinb_item_pane_ParamLimits

0x1015,	// (0x0005ec37) list_pinb_item_pane

0xa2d6,	// (0x00067ef8) list_highlight_pane_cp02

0x1033,	// (0x0005ec55) list_pinb_item_pane_g1_ParamLimits

0x1033,	// (0x0005ec55) list_pinb_item_pane_g1

0x1040,	// (0x0005ec62) list_pinb_item_pane_g2_ParamLimits

0x1040,	// (0x0005ec62) list_pinb_item_pane_g2

0x104c,	// (0x0005ec6e) list_pinb_item_pane_g3_ParamLimits

0x104c,	// (0x0005ec6e) list_pinb_item_pane_g3

0x105d,	// (0x0005ec7f) list_pinb_item_pane_g4_ParamLimits

0x105d,	// (0x0005ec7f) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0006cd4e) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0006cd4e) list_pinb_item_pane_g

0x1069,	// (0x0005ec8b) list_pinb_item_pane_t1_ParamLimits

0x1069,	// (0x0005ec8b) list_pinb_item_pane_t1

0x109a,	// (0x0005ecbc) calc_display_pane

0x10b8,	// (0x0005ecda) calc_paper_pane

0x10d4,	// (0x0005ecf6) grid_calc_pane

0xa2d6,	// (0x00067ef8) bg_list_pane_cp01

0x1100,	// (0x0005ed22) clock_g1

0x1108,	// (0x0005ed2a) clock_g2

0x0001,

0xf135,	// (0x0006cd57) clock_g

0x1112,	// (0x0005ed34) clock_t1_ParamLimits

0x1112,	// (0x0005ed34) clock_t1

0x1127,	// (0x0005ed49) clock_t2_ParamLimits

0x1127,	// (0x0005ed49) clock_t2

0x1139,	// (0x0005ed5b) clock_t3_ParamLimits

0x1139,	// (0x0005ed5b) clock_t3

0x114b,	// (0x0005ed6d) clock_t4_ParamLimits

0x114b,	// (0x0005ed6d) clock_t4

0x115d,	// (0x0005ed7f) clock_t5_ParamLimits

0x115d,	// (0x0005ed7f) clock_t5

0x1172,	// (0x0005ed94) clock_t6_ParamLimits

0x1172,	// (0x0005ed94) clock_t6

0x1184,	// (0x0005eda6) clock_t7_ParamLimits

0x1184,	// (0x0005eda6) clock_t7

0x1196,	// (0x0005edb8) clock_t8_ParamLimits

0x1196,	// (0x0005edb8) clock_t8

0x11ac,	// (0x0005edce) clock_t9_ParamLimits

0x11ac,	// (0x0005edce) clock_t9

0x0008,

0xf13a,	// (0x0006cd5c) clock_t_ParamLimits

0xf13a,	// (0x0006cd5c) clock_t

0xa5b8,	// (0x000681da) popup_clock_analogue_window_cp02

0xa5b8,	// (0x000681da) popup_clock_digital_window_cp01

0xa5c0,	// (0x000681e2) listscroll_help_pane

0xa2d6,	// (0x00067ef8) phob_pre_status_pane

0xa5ca,	// (0x000681ec) grid_qdial_pane

0xa531,	// (0x00068153) listscroll_mce_pane

0xa531,	// (0x00068153) bg_notes_pane

0xa5d4,	// (0x000681f6) list_notes_pane

0x11c2,	// (0x0005ede4) scroll_pane_cp06

0xa5e2,	// (0x00068204) bg_calc_paper_pane

0x11d1,	// (0x0005edf3) list_calc_pane

0xaa14,	// (0x00068636) bg_calc_display_pane

0x11eb,	// (0x0005ee0d) calc_display_pane_t1

0x1200,	// (0x0005ee22) calc_display_pane_t2

0x1215,	// (0x0005ee37) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0006cd6f) calc_display_pane_t

0x1227,	// (0x0005ee49) cell_calc_pane_ParamLimits

0x1227,	// (0x0005ee49) cell_calc_pane

0xaa20,	// (0x00068642) bg_calc_paper_pane_g1

0xaa2c,	// (0x0006864e) bg_calc_paper_pane_g2

0xaa38,	// (0x0006865a) bg_calc_paper_pane_g3

0xaa44,	// (0x00068666) bg_calc_paper_pane_g4

0xaa50,	// (0x00068672) bg_calc_paper_pane_g5

0x1256,	// (0x0005ee78) bg_calc_paper_pane_g6

0x1267,	// (0x0005ee89) bg_calc_paper_pane_g7

0x1278,	// (0x0005ee9a) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0006cd76) bg_calc_paper_pane_g

0x1289,	// (0x0005eeab) calc_bg_paper_pane_g9

0x129a,	// (0x0005eebc) list_calc_item_pane_ParamLimits

0x129a,	// (0x0005eebc) list_calc_item_pane

0xaa5c,	// (0x0006867e) list_calc_item_pane_g1

0x12bb,	// (0x0005eedd) list_calc_item_pane_t1_ParamLimits

0x12bb,	// (0x0005eedd) list_calc_item_pane_t1

0x12cd,	// (0x0005eeef) list_calc_item_pane_t2_ParamLimits

0x12cd,	// (0x0005eeef) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0006cd87) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0006cd87) list_calc_item_pane_t

0xaa69,	// (0x0006868b) cell_calc_pane_g1

0xaa73,	// (0x00068695) grid_highlight_pane_cp02

0xd9e3,	// (0x0006b605) bg_calc_display_pane_g1

0x12fd,	// (0x0005ef1f) bg_calc_display_pane_g2

0xd9ec,	// (0x0006b60e) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0006cd91) bg_calc_display_pane_g

0x1307,	// (0x0005ef29) cell_qdial_pane_ParamLimits

0x1307,	// (0x0005ef29) cell_qdial_pane

0x131d,	// (0x0005ef3f) cell_qdial_pane_g1_ParamLimits

0x131d,	// (0x0005ef3f) cell_qdial_pane_g1

0x132a,	// (0x0005ef4c) cell_qdial_pane_g2_ParamLimits

0x132a,	// (0x0005ef4c) cell_qdial_pane_g2

0xaa95,	// (0x000686b7) cell_qdial_pane_g3_ParamLimits

0xaa95,	// (0x000686b7) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0006cd98) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0006cd98) cell_qdial_pane_g

0x1348,	// (0x0005ef6a) cell_qdial_pane_t1_ParamLimits

0x1348,	// (0x0005ef6a) cell_qdial_pane_t1

0x1360,	// (0x0005ef82) cell_qdial_pane_t2_ParamLimits

0x1360,	// (0x0005ef82) cell_qdial_pane_t2

0x1373,	// (0x0005ef95) cell_qdial_pane_t3_ParamLimits

0x1373,	// (0x0005ef95) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0006cda1) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0006cda1) cell_qdial_pane_t

0xa2d6,	// (0x00067ef8) grid_highlight_pane_cp04

0xaaa1,	// (0x000686c3) thumbnail_qdial_pane_ParamLimits

0xaaa1,	// (0x000686c3) thumbnail_qdial_pane

0xaafd,	// (0x0006871f) list_help_pane

0xab06,	// (0x00068728) scroll_pane_cp02

0x1386,	// (0x0005efa8) help_list_pane_t1_ParamLimits

0x1386,	// (0x0005efa8) help_list_pane_t1

0x13ad,	// (0x0005efcf) bg_notes_pane_g2

0x13b5,	// (0x0005efd7) bg_notes_pane_g3

0x13bd,	// (0x0005efdf) notes_bg_pane_g1

0x13c5,	// (0x0005efe7) notes_bg_pane_g4

0x13cd,	// (0x0005efef) notes_bg_pane_g5

0x13d5,	// (0x0005eff7) notes_bg_pane_g6

0x13dd,	// (0x0005efff) notes_bg_pane_g7

0x13e5,	// (0x0005f007) notes_bg_pane_g8

0x13ed,	// (0x0005f00f) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0006cdbf) notes_bg_pane_g

0x13f5,	// (0x0005f017) list_notes_text_pane_ParamLimits

0x13f5,	// (0x0005f017) list_notes_text_pane

0xab0f,	// (0x00068731) list_notes_text_pane_g1

0x141d,	// (0x0005f03f) list_notes_text_pane_t1

0x142b,	// (0x0005f04d) listscroll_cale_week_pane

0x1457,	// (0x0005f079) bg_cale_heading_pane

0x1480,	// (0x0005f0a2) bg_cale_pane_cp01

0x14a2,	// (0x0005f0c4) cale_week_corner_pane

0x14c1,	// (0x0005f0e3) cale_week_day_heading_pane

0x14ef,	// (0x0005f111) cale_week_scroll_pane_g1

0x1513,	// (0x0005f135) cale_week_scroll_pane_g2

0x152b,	// (0x0005f14d) cale_week_scroll_pane_g3

0x1543,	// (0x0005f165) cale_week_scroll_pane_g4

0x155b,	// (0x0005f17d) cale_week_scroll_pane_g5

0x1573,	// (0x0005f195) cale_week_scroll_pane_g6

0x1593,	// (0x0005f1b5) cale_week_scroll_pane_g7

0x15b3,	// (0x0005f1d5) cale_week_scroll_pane_g8

0x15d3,	// (0x0005f1f5) cale_week_scroll_pane_g9

0x15f0,	// (0x0005f212) cale_week_scroll_pane_g10

0x160d,	// (0x0005f22f) cale_week_scroll_pane_g11

0x162c,	// (0x0005f24e) cale_week_scroll_pane_g12

0x1651,	// (0x0005f273) cale_week_scroll_pane_g13

0x167a,	// (0x0005f29c) cale_week_scroll_pane_g14

0x16a3,	// (0x0005f2c5) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0006cdce) cale_week_scroll_pane_g

0x16ec,	// (0x0005f30e) cale_week_time_pane

0x170c,	// (0x0005f32e) grid_cale_week_pane

0xab44,	// (0x00068766) scroll_pane_cp08

0x173d,	// (0x0005f35f) cell_cale_week_pane_ParamLimits

0x173d,	// (0x0005f35f) cell_cale_week_pane

0x17cd,	// (0x0005f3ef) cale_week_day_heading_pane_t1

0x17f5,	// (0x0005f417) cale_week_day_heading_pane_t2

0x1822,	// (0x0005f444) cale_week_day_heading_pane_t3

0x184f,	// (0x0005f471) cale_week_day_heading_pane_t4

0x187c,	// (0x0005f49e) cale_week_day_heading_pane_t5

0x18a9,	// (0x0005f4cb) cale_week_day_heading_pane_t6

0x18d6,	// (0x0005f4f8) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0006cdef) cale_week_day_heading_pane_t

0xab61,	// (0x00068783) bg_cale_side_pane

0x18fe,	// (0x0005f520) cale_week_time_pane_t1

0x1922,	// (0x0005f544) cale_week_time_pane_t2

0x1946,	// (0x0005f568) cale_week_time_pane_t3

0x196a,	// (0x0005f58c) cale_week_time_pane_t4

0x198e,	// (0x0005f5b0) cale_week_time_pane_t5

0x19b4,	// (0x0005f5d6) cale_week_time_pane_t6

0x19dc,	// (0x0005f5fe) cale_week_time_pane_t7

0x1a08,	// (0x0005f62a) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0006cdfe) cale_week_time_pane_t

0x1a38,	// (0x0005f65a) cell_cale_week_pane_g2

0x1a5c,	// (0x0005f67e) cell_cale_week_pane_g3_ParamLimits

0x1a5c,	// (0x0005f67e) cell_cale_week_pane_g3

0xab6f,	// (0x00068791) grid_highlight_pane_cp07

0xab77,	// (0x00068799) listscroll_gms_pane

0xab81,	// (0x000687a3) grid_gms_pane

0xab8a,	// (0x000687ac) listscroll_gms_pane_g1

0xab92,	// (0x000687b4) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0006ce0f) listscroll_gms_pane_g

0x1a74,	// (0x0005f696) scroll_pane_cp010

0x1a7f,	// (0x0005f6a1) cell_gms_pane_ParamLimits

0x1a7f,	// (0x0005f6a1) cell_gms_pane

0x1a92,	// (0x0005f6b4) cell_gms_pane_g1

0xab9a,	// (0x000687bc) cell_gms_pane_g2

0xaba2,	// (0x000687c4) cell_gms_pane_g3

0xabab,	// (0x000687cd) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0006ce14) cell_gms_pane_g

0xabb4,	// (0x000687d6) grid_highlight_pane_cp09

0x40b6,	// (0x00061cd8) phob_pre_status_pane_g1

0x40be,	// (0x00061ce0) phob_pre_status_pane_g2

0x40c6,	// (0x00061ce8) phob_pre_status_pane_g3

0x40ce,	// (0x00061cf0) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0006d1ff) phob_pre_status_pane_g

0x40de,	// (0x00061d00) phob_pre_status_pane_t1

0x40ee,	// (0x00061d10) phob_pre_status_pane_t2

0x40fe,	// (0x00061d20) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0006d20a) phob_pre_status_pane_t

0xabbc,	// (0x000687de) bg_list_pane_cp05

0x1aa2,	// (0x0005f6c4) grid_vorec_pane

0x1aac,	// (0x0005f6ce) vorec_t1

0x1aba,	// (0x0005f6dc) vorec_t2

0x1ac8,	// (0x0005f6ea) vorec_t3

0x1ad6,	// (0x0005f6f8) vorec_t4

0x9e2f,	// (0x00067a51) vorec_t5

0x9e3d,	// (0x00067a5f) vorec_t6

0x0004,

0xf1fb,	// (0x0006ce1d) vorec_t

0x9e4b,	// (0x00067a6d) wait_bar_pane_cp01

0x1af2,	// (0x0005f714) cell_vorec_pane_ParamLimits

0x1af2,	// (0x0005f714) cell_vorec_pane

0x1b07,	// (0x0005f729) cell_vorec_pane_g1

0xa2d6,	// (0x00067ef8) grid_highlight_pane_cp05

0x1b1f,	// (0x0005f741) cams_zoom_pane

0x1b2b,	// (0x0005f74d) image_vga_pane

0x1b3a,	// (0x0005f75c) main_camera_pane_g1

0x1b48,	// (0x0005f76a) main_camera_pane_g2

0x1b54,	// (0x0005f776) main_camera_pane_g3

0x1b62,	// (0x0005f784) main_camera_pane_g4

0x1b70,	// (0x0005f792) main_camera_pane_g5

0x1b7e,	// (0x0005f7a0) main_camera_pane_g6

0x1b8c,	// (0x0005f7ae) main_camera_pane_g7

0x0007,

0xf206,	// (0x0006ce28) main_camera_pane_g

0x1b9a,	// (0x0005f7bc) main_camera_pane_t1

0x1bac,	// (0x0005f7ce) main_camera_pane_t2

0x0001,

0xf217,	// (0x0006ce39) main_camera_pane_t

0x1bcf,	// (0x0005f7f1) cams_zoom_pane_cp_ParamLimits

0x1bcf,	// (0x0005f7f1) cams_zoom_pane_cp

0x1bf3,	// (0x0005f815) image_cif_pane_ParamLimits

0x1bf3,	// (0x0005f815) image_cif_pane

0x1c11,	// (0x0005f833) image_subqcif_pane

0x1c1b,	// (0x0005f83d) main_video_pane_g1_ParamLimits

0x1c1b,	// (0x0005f83d) main_video_pane_g1

0x1c3b,	// (0x0005f85d) main_video_pane_g2_ParamLimits

0x1c3b,	// (0x0005f85d) main_video_pane_g2

0x1c6b,	// (0x0005f88d) main_video_pane_g3_ParamLimits

0x1c6b,	// (0x0005f88d) main_video_pane_g3

0x1c94,	// (0x0005f8b6) main_video_pane_g4_ParamLimits

0x1c94,	// (0x0005f8b6) main_video_pane_g4

0x1cbd,	// (0x0005f8df) main_video_pane_g5_ParamLimits

0x1cbd,	// (0x0005f8df) main_video_pane_g5

0xabd0,	// (0x000687f2) main_video_pane_g6_ParamLimits

0xabd0,	// (0x000687f2) main_video_pane_g6

0x0006,

0xf21c,	// (0x0006ce3e) main_video_pane_g_ParamLimits

0xf21c,	// (0x0006ce3e) main_video_pane_g

0x1cdf,	// (0x0005f901) main_video_pane_t1_ParamLimits

0x1cdf,	// (0x0005f901) main_video_pane_t1

0xabea,	// (0x0006880c) cams_zoom_pane_g1

0xabf3,	// (0x00068815) cams_zoom_pane_g2

0xabfc,	// (0x0006881e) cams_zoom_pane_g3

0xac05,	// (0x00068827) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0006ce4d) cams_zoom_pane_g

0x1d29,	// (0x0005f94b) grid_cams_pane

0x1d37,	// (0x0005f959) linegrid_cams_pane

0x1d43,	// (0x0005f965) cell_cams_pane_ParamLimits

0x1d43,	// (0x0005f965) cell_cams_pane

0xac0e,	// (0x00068830) cams_burst_image_pane

0xac16,	// (0x00068838) cell_cams_pane_g1

0xa2d6,	// (0x00067ef8) grid_highlight_pane_cp03

0xaa69,	// (0x0006868b) mp_bg_pane_g1

0xa2d6,	// (0x00067ef8) bg_list_pane_cp03

0xc965,	// (0x0006a587) bg_mp_pane

0xc96d,	// (0x0006a58f) grid_mp_pane

0xc975,	// (0x0006a597) media_player_g1

0xc97f,	// (0x0006a5a1) media_player_t1

0xc98d,	// (0x0006a5af) media_player_t2

0xc99b,	// (0x0006a5bd) media_player_t3

0xc9a9,	// (0x0006a5cb) media_player_t4

0xc9b7,	// (0x0006a5d9) media_player_t5

0xc9c5,	// (0x0006a5e7) media_player_t6

0xc9d3,	// (0x0006a5f5) media_player_t7

0x0006,

0xf5c7,	// (0x0006d1e9) media_player_t

0xc9e1,	// (0x0006a603) wait_bar_pane_cp02

0xf5ac,	// (0x0006d1ce) main_usb_pane_t

0x40ad,	// (0x00061ccf) cell_mp_pane

0xaa69,	// (0x0006868b) cell_mp_pane_g1

0xa2d6,	// (0x00067ef8) grid_highlight_pane_cp06

0xac1e,	// (0x00068840) grid_skin_colour_pane

0xac26,	// (0x00068848) list_highlight_pane_cp03

0x1e6f,	// (0x0005fa91) skin_g1

0xac2e,	// (0x00068850) skin_t1

0xac3d,	// (0x0006885f) skin_t2

0x0001,

0xf260,	// (0x0006ce82) skin_t

0x1e79,	// (0x0005fa9b) cell_skin_colour_pane_ParamLimits

0x1e79,	// (0x0005fa9b) cell_skin_colour_pane

0xac4b,	// (0x0006886d) cell_skin_colour_pane_g1

0x1ef9,	// (0x0005fb1b) call_video_g1_ParamLimits

0x1ef9,	// (0x0005fb1b) call_video_g1

0x1f09,	// (0x0005fb2b) call_video_g2_ParamLimits

0x1f09,	// (0x0005fb2b) call_video_g2

0x0001,

0xf265,	// (0x0006ce87) call_video_g_ParamLimits

0xf265,	// (0x0006ce87) call_video_g

0x1f59,	// (0x0005fb7b) call_video_uplink_pane_cp1_ParamLimits

0x1f59,	// (0x0005fb7b) call_video_uplink_pane_cp1

0xac5d,	// (0x0006887f) call_video_uplink_pane_cp2

0x2027,	// (0x0005fc49) video_down_crop_pane_ParamLimits

0x2027,	// (0x0005fc49) video_down_crop_pane

0x2119,	// (0x0005fd3b) video_down_pane_ParamLimits

0x2119,	// (0x0005fd3b) video_down_pane

0xac65,	// (0x00068887) video_down_subqcif_pane_ParamLimits

0xac65,	// (0x00068887) video_down_subqcif_pane

0xac7f,	// (0x000688a1) video_down_subqcif_pane_cp_ParamLimits

0xac7f,	// (0x000688a1) video_down_subqcif_pane_cp

0xaca7,	// (0x000688c9) im_reading_pane_ParamLimits

0xaca7,	// (0x000688c9) im_reading_pane

0x2236,	// (0x0005fe58) im_writing_pane_ParamLimits

0x2236,	// (0x0005fe58) im_writing_pane

0x2254,	// (0x0005fe76) im_reading_pane_t1

0xacc1,	// (0x000688e3) list_im_pane

0xacd2,	// (0x000688f4) scroll_pane_cp07

0x2296,	// (0x0005feb8) im_writing_pane_t1_ParamLimits

0x2296,	// (0x0005feb8) im_writing_pane_t1

0xaceb,	// (0x0006890d) im_writing_pane_t2_ParamLimits

0xaceb,	// (0x0006890d) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0006ce91) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0006ce91) im_writing_pane_t

0xa2d6,	// (0x00067ef8) input_focus_pane_cp04

0xa2d6,	// (0x00067ef8) input_focus_pane_cp05

0x22a8,	// (0x0005feca) list_im_single_pane_ParamLimits

0x22a8,	// (0x0005feca) list_im_single_pane

0x22c1,	// (0x0005fee3) list_single_im_pane_t1

0x4071,	// (0x00061c93) blid_accuracy_pane

0x4079,	// (0x00061c9b) blid_compass_pane

0x4083,	// (0x00061ca5) main_location_t1

0x4091,	// (0x00061cb3) main_location_t2

0x409f,	// (0x00061cc1) main_location_t3

0x0002,

0xf5d6,	// (0x0006d1f8) main_location_t

0xa2d6,	// (0x00067ef8) aid_levels_location

0xaa69,	// (0x0006868b) blid_accuracy_pane_g1

0xaa69,	// (0x0006868b) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0006cef3) blid_accuracy_pane_g

0xad33,	// (0x00068955) wml_content_pane

0xad71,	// (0x00068993) wml_button_pane_ParamLimits

0xad71,	// (0x00068993) wml_button_pane

0x22d0,	// (0x0005fef2) wml_list_single_large_pane_ParamLimits

0x22d0,	// (0x0005fef2) wml_list_single_large_pane

0x22f2,	// (0x0005ff14) wml_list_single_medium_pane_ParamLimits

0x22f2,	// (0x0005ff14) wml_list_single_medium_pane

0x2315,	// (0x0005ff37) wml_list_single_small_pane_ParamLimits

0x2315,	// (0x0005ff37) wml_list_single_small_pane

0xad85,	// (0x000689a7) wml_selection_box_pane_ParamLimits

0xad85,	// (0x000689a7) wml_selection_box_pane

0xad98,	// (0x000689ba) wml_list_single_pane_t1

0xada7,	// (0x000689c9) wml_list_single_medium_pane_t1

0xadb6,	// (0x000689d8) wml_list_single_large_pane_t1

0xadc5,	// (0x000689e7) input_focus_pane_cp02_ParamLimits

0xadc5,	// (0x000689e7) input_focus_pane_cp02

0xadd8,	// (0x000689fa) wml_selection_box_pane_g1

0xade1,	// (0x00068a03) wml_selection_box_pane_t1_ParamLimits

0xade1,	// (0x00068a03) wml_selection_box_pane_t1

0xa531,	// (0x00068153) bg_wml_button_pane_ParamLimits

0xa531,	// (0x00068153) bg_wml_button_pane

0xadf9,	// (0x00068a1b) wml_button_pane_g1

0xae01,	// (0x00068a23) wml_button_pane_t1

0xadf9,	// (0x00068a1b) wml_button_bg_pane_g1

0xae11,	// (0x00068a33) wml_button_bg_pane_g2

0xae19,	// (0x00068a3b) wml_button_bg_pane_g3

0xae5b,	// (0x00068a7d) wml_button_bg_pane_g4

0xae63,	// (0x00068a85) wml_button_bg_pane_g5

0xae6b,	// (0x00068a8d) wml_button_bg_pane_g6

0xae73,	// (0x00068a95) wml_button_bg_pane_g7

0xae7b,	// (0x00068a9d) wml_button_bg_pane_g8

0xae83,	// (0x00068aa5) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0006ce96) wml_button_bg_pane_g

0x233d,	// (0x0005ff5f) bg_list_pane_cp02

0xae8b,	// (0x00068aad) mce_header_pane_ParamLimits

0xae8b,	// (0x00068aad) mce_header_pane

0xaea1,	// (0x00068ac3) mce_icon_pane

0xaea1,	// (0x00068ac3) mce_image_pane

0xaeaa,	// (0x00068acc) mce_text_pane_ParamLimits

0xaeaa,	// (0x00068acc) mce_text_pane

0x2347,	// (0x0005ff69) scroll_pane_cp03

0xad69,	// (0x0006898b) scroll_pane_cp04

0xaebd,	// (0x00068adf) scroll_pane_cp05_ParamLimits

0xaebd,	// (0x00068adf) scroll_pane_cp05

0x2351,	// (0x0005ff73) mce_header_field_pane_ParamLimits

0x2351,	// (0x0005ff73) mce_header_field_pane

0x2373,	// (0x0005ff95) mce_header_field_pane_2_ParamLimits

0x2373,	// (0x0005ff95) mce_header_field_pane_2

0x2389,	// (0x0005ffab) mce_header_field_pane_3

0x2391,	// (0x0005ffb3) list_single_mce_message_pane_ParamLimits

0x2391,	// (0x0005ffb3) list_single_mce_message_pane

0x23b0,	// (0x0005ffd2) list_single_mce_smart_pane_ParamLimits

0x23b0,	// (0x0005ffd2) list_single_mce_smart_pane

0xaec9,	// (0x00068aeb) input_focus_pane_cp03

0xaed2,	// (0x00068af4) list_header_data_pane

0x23da,	// (0x0005fffc) mce_header_field_pane_t1

0x23ea,	// (0x0006000c) list_single_mce_header_pane_ParamLimits

0x23ea,	// (0x0006000c) list_single_mce_header_pane

0xaeda,	// (0x00068afc) list_single_mce_header_pane_t1

0xaee9,	// (0x00068b0b) list_single_mce_message_pane_g1

0xaef1,	// (0x00068b13) list_single_mce_message_pane_t1

0x242e,	// (0x00060050) bg_cale_heading_pane_cp01_ParamLimits

0x242e,	// (0x00060050) bg_cale_heading_pane_cp01

0xaeff,	// (0x00068b21) bg_cale_pane_cp02_ParamLimits

0xaeff,	// (0x00068b21) bg_cale_pane_cp02

0x2480,	// (0x000600a2) cale_month_corner_pane

0x249f,	// (0x000600c1) cale_month_day_heading_pane_ParamLimits

0x249f,	// (0x000600c1) cale_month_day_heading_pane

0x2501,	// (0x00060123) cale_month_pane_g1_ParamLimits

0x2501,	// (0x00060123) cale_month_pane_g1

0x2548,	// (0x0006016a) cale_month_pane_g2_ParamLimits

0x2548,	// (0x0006016a) cale_month_pane_g2

0x2580,	// (0x000601a2) cale_month_pane_g3_ParamLimits

0x2580,	// (0x000601a2) cale_month_pane_g3

0x25d4,	// (0x000601f6) cale_month_pane_g4_ParamLimits

0x25d4,	// (0x000601f6) cale_month_pane_g4

0x2628,	// (0x0006024a) cale_month_pane_g5_ParamLimits

0x2628,	// (0x0006024a) cale_month_pane_g5

0x267c,	// (0x0006029e) cale_month_pane_g6_ParamLimits

0x267c,	// (0x0006029e) cale_month_pane_g6

0x26e0,	// (0x00060302) cale_month_pane_g7_ParamLimits

0x26e0,	// (0x00060302) cale_month_pane_g7

0x2744,	// (0x00060366) cale_month_pane_g8_ParamLimits

0x2744,	// (0x00060366) cale_month_pane_g8

0x27a8,	// (0x000603ca) cale_month_pane_g9_ParamLimits

0x27a8,	// (0x000603ca) cale_month_pane_g9

0x2802,	// (0x00060424) cale_month_pane_g10_ParamLimits

0x2802,	// (0x00060424) cale_month_pane_g10

0x2854,	// (0x00060476) cale_month_pane_g11_ParamLimits

0x2854,	// (0x00060476) cale_month_pane_g11

0x28a2,	// (0x000604c4) cale_month_pane_g12_ParamLimits

0x28a2,	// (0x000604c4) cale_month_pane_g12

0x28f2,	// (0x00060514) cale_month_pane_g13_ParamLimits

0x28f2,	// (0x00060514) cale_month_pane_g13

0x000c,

0xf287,	// (0x0006cea9) cale_month_pane_g_ParamLimits

0xf287,	// (0x0006cea9) cale_month_pane_g

0x2942,	// (0x00060564) cale_month_week_pane

0x2962,	// (0x00060584) grid_cale_month_pane_ParamLimits

0x2962,	// (0x00060584) grid_cale_month_pane

0x29bb,	// (0x000605dd) cale_month_day_heading_pane_t1

0x2a3d,	// (0x0006065f) cale_month_day_heading_pane_t2

0x2ab6,	// (0x000606d8) cale_month_day_heading_pane_t3

0x2b2f,	// (0x00060751) cale_month_day_heading_pane_t4

0x2ba8,	// (0x000607ca) cale_month_day_heading_pane_t5

0x2c29,	// (0x0006084b) cale_month_day_heading_pane_t6

0x2cb2,	// (0x000608d4) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0006cec4) cale_month_day_heading_pane_t

0xab61,	// (0x00068783) bg_cale_side_pane_cp01

0x2d3b,	// (0x0006095d) cale_month_week_pane_t1

0x2d54,	// (0x00060976) cale_month_week_pane_t2

0x2d6d,	// (0x0006098f) cale_month_week_pane_t3

0x2d86,	// (0x000609a8) cale_month_week_pane_t4

0x2d9f,	// (0x000609c1) cale_month_week_pane_t5

0x2dbc,	// (0x000609de) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0006ced3) cale_month_week_pane_t

0x2ddf,	// (0x00060a01) cell_cale_month_pane_ParamLimits

0x2ddf,	// (0x00060a01) cell_cale_month_pane

0x2f37,	// (0x00060b59) cell_cale_month_pane_g1

0x2f43,	// (0x00060b65) cell_cale_month_pane_t1_ParamLimits

0x2f43,	// (0x00060b65) cell_cale_month_pane_t1

0xab6f,	// (0x00068791) grid_highlight_pane_cp08

0xaa69,	// (0x0006868b) main_smil_g1

0x2f6f,	// (0x00060b91) smil_status_pane

0xaf3e,	// (0x00068b60) smil_text_pane

0xc883,	// (0x0006a4a5) bg_popup_call3_rect_pane_g8

0xc88b,	// (0x0006a4ad) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0006d18c) bg_popup_call3_rect_pane_g

0xcae9,	// (0x0006a70b) smil_status_volume_pane_g1

0xaf48,	// (0x00068b6a) smil_status_pane_t1

0x44b8,	// (0x000620da) volume_smil_pane

0xaf5f,	// (0x00068b81) list_smil_text_pane

0x2f82,	// (0x00060ba4) scroll_pane_cp011

0x2f8d,	// (0x00060baf) smil_text_list_pane_t1_ParamLimits

0x2f8d,	// (0x00060baf) smil_text_list_pane_t1

0x2fe1,	// (0x00060c03) aid_volume_smil_ParamLimits

0x2fe1,	// (0x00060c03) aid_volume_smil

0xaa69,	// (0x0006868b) smil_volume_pane_g1

0xaa69,	// (0x0006868b) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0006cef3) smil_volume_pane_g

0x142b,	// (0x0005f04d) listscroll_cale_day_pane

0xaf69,	// (0x00068b8b) bg_cale_pane

0xaf81,	// (0x00068ba3) list_cale_pane

0xafa4,	// (0x00068bc6) scroll_pane_cp09

0xafb5,	// (0x00068bd7) cale_bg_pane_g1

0xafbd,	// (0x00068bdf) cale_bg_pane_g2

0xafc5,	// (0x00068be7) cale_bg_pane_g3

0xafcd,	// (0x00068bef) cale_bg_pane_g4

0xafd5,	// (0x00068bf7) cale_bg_pane_g5

0xafdd,	// (0x00068bff) cale_bg_pane_g6

0xafe5,	// (0x00068c07) cale_bg_pane_g7

0xafed,	// (0x00068c0f) cale_bg_pane_g8

0xaff5,	// (0x00068c17) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0006cef8) cale_bg_pane_g

0x300b,	// (0x00060c2d) list_cale_time_pane_ParamLimits

0x300b,	// (0x00060c2d) list_cale_time_pane

0xaffd,	// (0x00068c1f) list_cale_time_pane_g1_ParamLimits

0xaffd,	// (0x00068c1f) list_cale_time_pane_g1

0xb009,	// (0x00068c2b) list_cale_time_pane_g2_ParamLimits

0xb009,	// (0x00068c2b) list_cale_time_pane_g2

0x3022,	// (0x00060c44) list_cale_time_pane_g3_ParamLimits

0x3022,	// (0x00060c44) list_cale_time_pane_g3

0x3030,	// (0x00060c52) list_cale_time_pane_g4_ParamLimits

0x3030,	// (0x00060c52) list_cale_time_pane_g4

0x303e,	// (0x00060c60) list_cale_time_pane_g5_ParamLimits

0x303e,	// (0x00060c60) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0006cf0b) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0006cf0b) list_cale_time_pane_g

0xb023,	// (0x00068c45) list_cale_time_pane_t1_ParamLimits

0xb023,	// (0x00068c45) list_cale_time_pane_t1

0xb04b,	// (0x00068c6d) list_cale_time_pane_t2_ParamLimits

0xb04b,	// (0x00068c6d) list_cale_time_pane_t2

0x33f2,	// (0x00061014) aid_blid_cardinal_pane

0x3434,	// (0x00061056) compass_pane_t4

0xb073,	// (0x00068c95) list_cale_time_pane_t4_ParamLimits

0xb073,	// (0x00068c95) list_cale_time_pane_t4

0x3442,	// (0x00061064) compass_pane_t5

0x3452,	// (0x00061074) compass_pane_t6

0x3460,	// (0x00061082) compass_pane_t7

0xb4f7,	// (0x00069119) navi_pane_cc_t1

0xb6d6,	// (0x000692f8) aid_phob_thumbnail_center_pane

0x3b6d,	// (0x0006178f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0006cf18) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0006cf18) list_cale_time_pane_t

0x9f2d,	// (0x00067b4f) bg_popup_window_pane_cp02_ParamLimits

0x9f2d,	// (0x00067b4f) bg_popup_window_pane_cp02

0xb09b,	// (0x00068cbd) heading_pane_cp01_ParamLimits

0xb09b,	// (0x00068cbd) heading_pane_cp01

0xb0a7,	// (0x00068cc9) loc_req_pane_ParamLimits

0xb0a7,	// (0x00068cc9) loc_req_pane

0xb0b7,	// (0x00068cd9) loc_type_pane_ParamLimits

0xb0b7,	// (0x00068cd9) loc_type_pane

0xb0c9,	// (0x00068ceb) loc_type_pane_t1_ParamLimits

0xb0c9,	// (0x00068ceb) loc_type_pane_t1

0xb0db,	// (0x00068cfd) loc_type_pane_t2_ParamLimits

0xb0db,	// (0x00068cfd) loc_type_pane_t2

0xb0ed,	// (0x00068d0f) loc_type_pane_t3_ParamLimits

0xb0ed,	// (0x00068d0f) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0006cf1f) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0006cf1f) loc_type_pane_t

0xb0ff,	// (0x00068d21) list_loc_req_pane

0xb109,	// (0x00068d2b) scroll_pane_cp012

0x304c,	// (0x00060c6e) list_single_loc_request_popup_menu_pane_ParamLimits

0x304c,	// (0x00060c6e) list_single_loc_request_popup_menu_pane

0xb114,	// (0x00068d36) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb114,	// (0x00068d36) list_single_loc_request_popup_menu_pane_g1

0xb120,	// (0x00068d42) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb120,	// (0x00068d42) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0006cf26) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0006cf26) list_single_loc_request_popup_menu_pane_g

0xb12c,	// (0x00068d4e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb12c,	// (0x00068d4e) list_single_loc_request_popup_menu_pane_t1

0x305e,	// (0x00060c80) bg_popup_window_pane_cp03_ParamLimits

0x305e,	// (0x00060c80) bg_popup_window_pane_cp03

0x306c,	// (0x00060c8e) heading_loc_req_pane_ParamLimits

0x306c,	// (0x00060c8e) heading_loc_req_pane

0x3078,	// (0x00060c9a) popup_dyc_status_message_window_g1_ParamLimits

0x3078,	// (0x00060c9a) popup_dyc_status_message_window_g1

0x3084,	// (0x00060ca6) popup_dyc_status_message_window_t1_ParamLimits

0x3084,	// (0x00060ca6) popup_dyc_status_message_window_t1

0x3096,	// (0x00060cb8) popup_dyc_status_message_window_t2_ParamLimits

0x3096,	// (0x00060cb8) popup_dyc_status_message_window_t2

0x30a8,	// (0x00060cca) popup_dyc_status_message_window_t3_ParamLimits

0x30a8,	// (0x00060cca) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0006cf2b) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0006cf2b) popup_dyc_status_message_window_t

0xa2d6,	// (0x00067ef8) bg_heading_pane_cp01

0xb142,	// (0x00068d64) heading_loc_req_pane_g1

0xb14a,	// (0x00068d6c) heading_loc_req_pane_g2

0xb152,	// (0x00068d74) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0006cf32) heading_loc_req_pane_g

0xb15a,	// (0x00068d7c) heading_loc_req_pane_t1

0xb16a,	// (0x00068d8c) bg_popup_sub_pane_cp01_ParamLimits

0xb16a,	// (0x00068d8c) bg_popup_sub_pane_cp01

0xb178,	// (0x00068d9a) popup_cale_events_window_g1_ParamLimits

0xb178,	// (0x00068d9a) popup_cale_events_window_g1

0xb198,	// (0x00068dba) popup_cale_events_window_g2_ParamLimits

0xb198,	// (0x00068dba) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0006cf66) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0006cf66) popup_cale_events_window_g

0xb1b8,	// (0x00068dda) popup_cale_events_window_t1_ParamLimits

0xb1b8,	// (0x00068dda) popup_cale_events_window_t1

0xb1ca,	// (0x00068dec) popup_cale_events_window_t2_ParamLimits

0xb1ca,	// (0x00068dec) popup_cale_events_window_t2

0xb208,	// (0x00068e2a) popup_cale_events_window_t3_ParamLimits

0xb208,	// (0x00068e2a) popup_cale_events_window_t3

0xb242,	// (0x00068e64) popup_cale_events_window_t4_ParamLimits

0xb242,	// (0x00068e64) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0006cf6b) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0006cf6b) popup_cale_events_window_t

0x31a3,	// (0x00060dc5) call_type_pane

0xb6e6,	// (0x00069308) popup_call_status_window_g1

0x31af,	// (0x00060dd1) popup_call_status_window_g2

0x31bb,	// (0x00060ddd) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0006cf74) popup_call_status_window_g

0xb278,	// (0x00068e9a) call_type_pane_g1

0xb281,	// (0x00068ea3) call_type_pane_g2

0x0001,

0xf359,	// (0x0006cf7b) call_type_pane_g

0xa2d6,	// (0x00067ef8) bg_popup_sub_pane_cp02

0xb28a,	// (0x00068eac) listscroll_popup_wml_pane

0xb29e,	// (0x00068ec0) list_wml_pane

0xb2a8,	// (0x00068eca) scroll_pane_cp013

0xb2b3,	// (0x00068ed5) list_single_graphic_popup_wml_pane_ParamLimits

0xb2b3,	// (0x00068ed5) list_single_graphic_popup_wml_pane

0xaa69,	// (0x0006868b) list_single_graphic_popup_wml_pane_g1

0xb2c7,	// (0x00068ee9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0006cf80) list_single_graphic_popup_wml_pane_g

0xb2cf,	// (0x00068ef1) list_single_graphic_popup_wml_pane_t1

0xb2e5,	// (0x00068f07) aid_call_pane

0xa529,	// (0x0006814b) popup_clock_analogue_window_g1

0xa529,	// (0x0006814b) popup_clock_analogue_window_g2

0x31c7,	// (0x00060de9) popup_clock_analogue_window_g3

0x31c7,	// (0x00060de9) popup_clock_analogue_window_g4

0xaa69,	// (0x0006868b) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0006cf85) popup_clock_analogue_window_g

0x31cf,	// (0x00060df1) popup_clock_analogue_window_t1

0x31dd,	// (0x00060dff) clock_digital_number_pane_ParamLimits

0x31dd,	// (0x00060dff) clock_digital_number_pane

0x31e9,	// (0x00060e0b) clock_digital_number_pane_cp02_ParamLimits

0x31e9,	// (0x00060e0b) clock_digital_number_pane_cp02

0x31f5,	// (0x00060e17) clock_digital_number_pane_cp03_ParamLimits

0x31f5,	// (0x00060e17) clock_digital_number_pane_cp03

0x3201,	// (0x00060e23) clock_digital_number_pane_cp04_ParamLimits

0x3201,	// (0x00060e23) clock_digital_number_pane_cp04

0x320d,	// (0x00060e2f) clock_digital_separator_pane_ParamLimits

0x320d,	// (0x00060e2f) clock_digital_separator_pane

0x3219,	// (0x00060e3b) popup_clock_digital_window_t1

0xaa69,	// (0x0006868b) clock_digital_number_pane_g1

0xaa69,	// (0x0006868b) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0006cef3) clock_digital_number_pane_g

0xaa69,	// (0x0006868b) clock_digital_separator_pane_g1

0xaa69,	// (0x0006868b) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0006cef3) clock_digital_separator_pane_g

0xa2d6,	// (0x00067ef8) bg_popup_window_pane_cp04

0xb2ed,	// (0x00068f0f) heading_pane_cp03

0xb2f5,	// (0x00068f17) listscroll_popup_gms_pane

0xb2fd,	// (0x00068f1f) grid_large_graphic_popup_pane

0xb307,	// (0x00068f29) listscroll_popup_gms_pane_g1

0xb30f,	// (0x00068f31) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0006cf90) listscroll_popup_gms_pane_g

0xad69,	// (0x0006898b) scroll_pane_cp014

0x3236,	// (0x00060e58) cell_large_graphic_popup_pane_ParamLimits

0x3236,	// (0x00060e58) cell_large_graphic_popup_pane

0x3250,	// (0x00060e72) cell_large_graphic_popup_pane_g1_ParamLimits

0x3250,	// (0x00060e72) cell_large_graphic_popup_pane_g1

0xb317,	// (0x00068f39) cell_large_graphic_popup_pane_g2_ParamLimits

0xb317,	// (0x00068f39) cell_large_graphic_popup_pane_g2

0xb323,	// (0x00068f45) cell_large_graphic_popup_pane_g3_ParamLimits

0xb323,	// (0x00068f45) cell_large_graphic_popup_pane_g3

0xb330,	// (0x00068f52) cell_large_graphic_popup_pane_g4_ParamLimits

0xb330,	// (0x00068f52) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0006cf95) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0006cf95) cell_large_graphic_popup_pane_g

0xb340,	// (0x00068f62) grid_highlight_pane_cp010

0xaa69,	// (0x0006868b) bg_popup_call_pane_g1

0xb34a,	// (0x00068f6c) list_single_graphic_popup_conf_pane_ParamLimits

0xb34a,	// (0x00068f6c) list_single_graphic_popup_conf_pane

0xb35c,	// (0x00068f7e) list_highlight_pane_cp01

0xb365,	// (0x00068f87) list_single_graphic_popup_conf_pane_g1

0xb36d,	// (0x00068f8f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0006cf9e) list_single_graphic_popup_conf_pane_g

0xb375,	// (0x00068f97) list_single_graphic_popup_conf_pane_t1

0xb383,	// (0x00068fa5) linegrid_cams_pane_g1

0x325c,	// (0x00060e7e) linegrid_cams_pane_g2

0xaba2,	// (0x000687c4) linegrid_cams_pane_g3

0xb38c,	// (0x00068fae) linegrid_cams_pane_g4

0x3265,	// (0x00060e87) linegrid_cams_pane_g5

0x326e,	// (0x00060e90) linegrid_cams_pane_g6

0xabab,	// (0x000687cd) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0006cfa3) linegrid_cams_pane_g

0xb395,	// (0x00068fb7) popup_clock_analogue_window

0xb395,	// (0x00068fb7) popup_clock_digital_window

0xa2d6,	// (0x00067ef8) popup_phob_thumbnail_window

0xaa69,	// (0x0006868b) call_video_uplink_pane_g1

0xb39e,	// (0x00068fc0) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0006cfb2) call_video_uplink_pane_g

0xb3a6,	// (0x00068fc8) video_uplink_pane

0xb3ae,	// (0x00068fd0) mce_image_pane_g1

0x3279,	// (0x00060e9b) mce_image_pane_g2

0x3283,	// (0x00060ea5) mce_image_pane_g3

0x328d,	// (0x00060eaf) mce_image_pane_g4

0x3295,	// (0x00060eb7) mce_image_pane_g5

0x0004,

0xf395,	// (0x0006cfb7) mce_image_pane_g

0xb3b8,	// (0x00068fda) control_top_pane_stacon_cp01_ParamLimits

0xb3b8,	// (0x00068fda) control_top_pane_stacon_cp01

0xb3cc,	// (0x00068fee) uni_indicator_pane_stacon_cp01_ParamLimits

0xb3cc,	// (0x00068fee) uni_indicator_pane_stacon_cp01

0xb3dd,	// (0x00068fff) bg_popup_sub_pane_cp03

0x329d,	// (0x00060ebf) chi_dic_find_pane

0x32a5,	// (0x00060ec7) listscroll_chi_dic_pane

0x32ae,	// (0x00060ed0) main_pane_chidic_g1

0x32c1,	// (0x00060ee3) chi_dic_find_pane_t1

0xb3e7,	// (0x00069009) find_chidic_pane

0xb3f0,	// (0x00069012) chi_dic_list_pane_ParamLimits

0xb3f0,	// (0x00069012) chi_dic_list_pane

0xb401,	// (0x00069023) scroll_pane_cp020

0x32cf,	// (0x00060ef1) find_chidic_pane_t1

0xa2d6,	// (0x00067ef8) input_focus_pane_cp06

0xae21,	// (0x00068a43) list_chi_dic_pane_ParamLimits

0xae21,	// (0x00068a43) list_chi_dic_pane

0x32de,	// (0x00060f00) list_chi_dic_pane_t1_ParamLimits

0x32de,	// (0x00060f00) list_chi_dic_pane_t1

0xa2d6,	// (0x00067ef8) list_highlight_pane_cp020

0xb409,	// (0x0006902b) bg_cale_heading_pane_g1

0x32f1,	// (0x00060f13) bg_cale_heading_pane_g2

0x32f9,	// (0x00060f1b) bg_cale_heading_pane_g3

0x3301,	// (0x00060f23) bg_cale_heading_pane_g4

0x330b,	// (0x00060f2d) bg_cale_heading_pane_g5

0x3315,	// (0x00060f37) bg_cale_heading_pane_g6

0x331d,	// (0x00060f3f) bg_cale_heading_pane_g7

0x3325,	// (0x00060f47) bg_cale_heading_pane_g8

0x332f,	// (0x00060f51) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0006cfc2) bg_cale_heading_pane_g

0xb409,	// (0x0006902b) bg_cale_side_pane_g1

0x3339,	// (0x00060f5b) bg_cale_side_pane_g2

0x3343,	// (0x00060f65) bg_cale_side_pane_g3

0x334d,	// (0x00060f6f) bg_cale_side_pane_g4

0x3357,	// (0x00060f79) bg_cale_side_pane_g5

0x3361,	// (0x00060f83) bg_cale_side_pane_g6

0x336b,	// (0x00060f8d) bg_cale_side_pane_g7

0x3375,	// (0x00060f97) bg_cale_side_pane_g8

0x337d,	// (0x00060f9f) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0006cfd5) bg_cale_side_pane_g

0x3385,	// (0x00060fa7) popup_call_status_window_ParamLimits

0x3385,	// (0x00060fa7) popup_call_status_window

0xb411,	// (0x00069033) stacon_top_pane

0xb419,	// (0x0006903b) status_pane_ParamLimits

0xb419,	// (0x0006903b) status_pane

0xb42e,	// (0x00069050) status_small_pane

0xb436,	// (0x00069058) control_pane

0xa2d6,	// (0x00067ef8) stacon_bottom_pane

0xb43e,	// (0x00069060) list_single_mce_smart_pane_t1_ParamLimits

0xb43e,	// (0x00069060) list_single_mce_smart_pane_t1

0xb451,	// (0x00069073) list_single_mce_smart_pane_t2_ParamLimits

0xb451,	// (0x00069073) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0006cfe8) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0006cfe8) list_single_mce_smart_pane_t

0x3391,	// (0x00060fb3) compass_pane

0x339c,	// (0x00060fbe) main_location2_pane_t1

0x33b2,	// (0x00060fd4) main_location2_pane_t2

0x33c8,	// (0x00060fea) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0006cfed) main_location2_pane_t

0xb470,	// (0x00069092) compass_pane_g1_ParamLimits

0xb470,	// (0x00069092) compass_pane_g1

0x3416,	// (0x00061038) compass_pane_t1

0x3425,	// (0x00061047) compass_pane_t2

0x0005,

0xf3d4,	// (0x0006cff6) compass_pane_t

0x3470,	// (0x00061092) text_secondary_cp61

0xb4ee,	// (0x00069110) navi_pane_cams_g5

0xb56a,	// (0x0006918c) navi_pane_im_t1

0xb578,	// (0x0006919a) navi_pane_mp_g1_ParamLimits

0xb578,	// (0x0006919a) navi_pane_mp_g1

0xb58c,	// (0x000691ae) navi_pane_mp_g2_ParamLimits

0xb58c,	// (0x000691ae) navi_pane_mp_g2

0xb598,	// (0x000691ba) navi_pane_mp_g3_ParamLimits

0xb598,	// (0x000691ba) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0006d00a) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0006d00a) navi_pane_mp_g

0xb5a4,	// (0x000691c6) navi_pane_mp_t1

0xb5b2,	// (0x000691d4) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0006d011) navi_pane_mp_t

0xb61f,	// (0x00069241) navi_pane_vt_g1

0xb5a4,	// (0x000691c6) navi_pane_vt_t1

0xb627,	// (0x00069249) navi_slider_pane

0xabbc,	// (0x000687de) zooming_pane

0xb637,	// (0x00069259) navi_slider_pane_g1

0x34ab,	// (0x000610cd) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0006d018) navi_slider_pane_g

0xb65b,	// (0x0006927d) aid_levels_zoom

0xb663,	// (0x00069285) zooming_pane_g1

0xb66b,	// (0x0006928d) zooming_pane_g2

0xb66b,	// (0x0006928d) zooming_pane_g3

0x0002,

0xf405,	// (0x0006d027) zooming_pane_g

0xb673,	// (0x00069295) level_10_zoom

0xb67c,	// (0x0006929e) level_11_zoom

0xb685,	// (0x000692a7) level_1_zoom

0xb68e,	// (0x000692b0) level_2_zoom

0xb697,	// (0x000692b9) level_3_zoom

0xb6a0,	// (0x000692c2) level_4_zoom

0xb6a9,	// (0x000692cb) level_5_zoom

0xb6b2,	// (0x000692d4) level_6_zoom

0xb6bb,	// (0x000692dd) level_7_zoom

0xb6c4,	// (0x000692e6) level_8_zoom

0xb6cd,	// (0x000692ef) level_9_zoom

0xb6de,	// (0x00069300) popup_phob_thumbnail_window_g1

0xb6f4,	// (0x00069316) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0006d02e) popup_phob_thumbnail_window_g

0xc9e9,	// (0x0006a60b) level_1_location

0xc9f1,	// (0x0006a613) level_2_location

0xc9f9,	// (0x0006a61b) level_3_location

0xca01,	// (0x0006a623) level_4_location

0xabbc,	// (0x000687de) level_5_location

0x34bd,	// (0x000610df) mce_icon_pane_g1

0x34c5,	// (0x000610e7) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0006d033) mce_icon_pane_g

0x34cd,	// (0x000610ef) main_mup_pane_g1_ParamLimits

0x34cd,	// (0x000610ef) main_mup_pane_g1

0x34e5,	// (0x00061107) main_mup_pane_g2_ParamLimits

0x34e5,	// (0x00061107) main_mup_pane_g2

0x3501,	// (0x00061123) main_mup_pane_g3_ParamLimits

0x3501,	// (0x00061123) main_mup_pane_g3

0x351d,	// (0x0006113f) main_mup_pane_g4_ParamLimits

0x351d,	// (0x0006113f) main_mup_pane_g4

0x3531,	// (0x00061153) main_mup_pane_g5_ParamLimits

0x3531,	// (0x00061153) main_mup_pane_g5

0x3552,	// (0x00061174) main_mup_pane_g6_ParamLimits

0x3552,	// (0x00061174) main_mup_pane_g6

0x3572,	// (0x00061194) main_mup_pane_g7_ParamLimits

0x3572,	// (0x00061194) main_mup_pane_g7

0x3596,	// (0x000611b8) main_mup_pane_g8_ParamLimits

0x3596,	// (0x000611b8) main_mup_pane_g8

0x35ba,	// (0x000611dc) main_mup_pane_g9_ParamLimits

0x35ba,	// (0x000611dc) main_mup_pane_g9

0x35dd,	// (0x000611ff) main_mup_pane_g10_ParamLimits

0x35dd,	// (0x000611ff) main_mup_pane_g10

0x3600,	// (0x00061222) main_mup_pane_g11_ParamLimits

0x3600,	// (0x00061222) main_mup_pane_g11

0x3620,	// (0x00061242) main_mup_pane_g12_ParamLimits

0x3620,	// (0x00061242) main_mup_pane_g12

0x362e,	// (0x00061250) main_mup_pane_g13_ParamLimits

0x362e,	// (0x00061250) main_mup_pane_g13

0x000c,

0xf416,	// (0x0006d038) main_mup_pane_g_ParamLimits

0xf416,	// (0x0006d038) main_mup_pane_g

0x3644,	// (0x00061266) main_mup_pane_t1_ParamLimits

0x3644,	// (0x00061266) main_mup_pane_t1

0x3663,	// (0x00061285) main_mup_pane_t2_ParamLimits

0x3663,	// (0x00061285) main_mup_pane_t2

0x367d,	// (0x0006129f) main_mup_pane_t3_ParamLimits

0x367d,	// (0x0006129f) main_mup_pane_t3

0x3697,	// (0x000612b9) main_mup_pane_t4_ParamLimits

0x3697,	// (0x000612b9) main_mup_pane_t4

0x36a9,	// (0x000612cb) main_mup_pane_t5_ParamLimits

0x36a9,	// (0x000612cb) main_mup_pane_t5

0x36bb,	// (0x000612dd) main_mup_pane_t6_ParamLimits

0x36bb,	// (0x000612dd) main_mup_pane_t6

0x0005,

0xf431,	// (0x0006d053) main_mup_pane_t_ParamLimits

0xf431,	// (0x0006d053) main_mup_pane_t

0x36d1,	// (0x000612f3) mup_progress_pane_ParamLimits

0x36d1,	// (0x000612f3) mup_progress_pane

0x36dd,	// (0x000612ff) mup_visualizer_pane_ParamLimits

0x36dd,	// (0x000612ff) mup_visualizer_pane

0x371b,	// (0x0006133d) mup_volume_pane_ParamLimits

0x371b,	// (0x0006133d) mup_volume_pane

0xb6e6,	// (0x00069308) mup_visualizer_pane_g1_ParamLimits

0xb6e6,	// (0x00069308) mup_visualizer_pane_g1

0xb6e6,	// (0x00069308) mup_visualizer_pane_g2_ParamLimits

0xb6e6,	// (0x00069308) mup_visualizer_pane_g2

0xb470,	// (0x00069092) mup_visualizer_pane_g3_ParamLimits

0xb470,	// (0x00069092) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0006d060) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0006d060) mup_visualizer_pane_g

0xaa69,	// (0x0006868b) mup_volume_pane_g1

0xb704,	// (0x00069326) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0006d067) mup_volume_pane_g

0xaa69,	// (0x0006868b) mup_progress_pane_g1

0xb70d,	// (0x0006932f) mup_progress_pane_g2

0xb716,	// (0x00069338) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0006d06c) mup_progress_pane_g

0xa2d6,	// (0x00067ef8) bg_popup_window_pane_cp05

0xb71f,	// (0x00069341) heading_pane_cp02_ParamLimits

0xb71f,	// (0x00069341) heading_pane_cp02

0xb73b,	// (0x0006935d) list_popup_blid_pane

0xb743,	// (0x00069365) list_blid_sat_info_pane_ParamLimits

0xb743,	// (0x00069365) list_blid_sat_info_pane

0xb756,	// (0x00069378) list_blid_sat_info_pane_g1

0xb75e,	// (0x00069380) list_blid_sat_info_pane_t1

0x383a,	// (0x0006145c) mup_equalizer_pane_ParamLimits

0x383a,	// (0x0006145c) mup_equalizer_pane

0x385b,	// (0x0006147d) mup_equalizer_pane_cp1_ParamLimits

0x385b,	// (0x0006147d) mup_equalizer_pane_cp1

0x387c,	// (0x0006149e) mup_equalizer_pane_cp2_ParamLimits

0x387c,	// (0x0006149e) mup_equalizer_pane_cp2

0x389d,	// (0x000614bf) mup_equalizer_pane_cp3_ParamLimits

0x389d,	// (0x000614bf) mup_equalizer_pane_cp3

0x38c2,	// (0x000614e4) mup_equalizer_pane_cp4_ParamLimits

0x38c2,	// (0x000614e4) mup_equalizer_pane_cp4

0x38e7,	// (0x00061509) mup_equalizer_pane_cp5

0x38ff,	// (0x00061521) mup_equalizer_pane_cp6

0x3917,	// (0x00061539) mup_equalizer_pane_cp7

0xc903,	// (0x0006a525) bg_popup_call_poc_act_pane_g9

0xc90b,	// (0x0006a52d) bg_popup_call_poc_act_pane_g10

0xc913,	// (0x0006a535) bg_popup_call_poc_act_pane_g11

0x000a,

0xa531,	// (0x00068153) mup_scale_pane

0xaa69,	// (0x0006868b) mup_scale_pane_g1

0xb76c,	// (0x0006938e) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0006d088) mup_scale_pane_g

0xb790,	// (0x000693b2) msg_data_pane

0xb798,	// (0x000693ba) scroll_pane_cp017

0x3941,	// (0x00061563) bg_list_pane_cp04_ParamLimits

0x3941,	// (0x00061563) bg_list_pane_cp04

0xb7a0,	// (0x000693c2) msg_data_pane_g1

0x3969,	// (0x0006158b) msg_data_pane_g2

0x3973,	// (0x00061595) msg_data_pane_g3

0x397d,	// (0x0006159f) msg_data_pane_g4

0x3985,	// (0x000615a7) msg_data_pane_g5

0x398d,	// (0x000615af) msg_data_pane_g6

0x3995,	// (0x000615b7) msg_data_pane_g7

0x0006,

0xf475,	// (0x0006d097) msg_data_pane_g

0x399d,	// (0x000615bf) msg_text_pane_ParamLimits

0x399d,	// (0x000615bf) msg_text_pane

0x39ce,	// (0x000615f0) qrid_highlight_pane_cp011_ParamLimits

0x39ce,	// (0x000615f0) qrid_highlight_pane_cp011

0xa2d6,	// (0x00067ef8) msg_body_pane

0xa2d6,	// (0x00067ef8) msg_header_pane

0xb7b1,	// (0x000693d3) input_focus_pane_cp07

0x39f2,	// (0x00061614) msg_header_pane_t1_ParamLimits

0x39f2,	// (0x00061614) msg_header_pane_t1

0x3a04,	// (0x00061626) msg_header_pane_t2_ParamLimits

0x3a04,	// (0x00061626) msg_header_pane_t2

0x0001,

0xf489,	// (0x0006d0ab) msg_header_pane_t_ParamLimits

0xf489,	// (0x0006d0ab) msg_header_pane_t

0xb7c6,	// (0x000693e8) msg_body_pane_g1

0x3a16,	// (0x00061638) msg_body_pane_t1_ParamLimits

0x3a16,	// (0x00061638) msg_body_pane_t1

0x3a47,	// (0x00061669) msg_body_pane_t2_ParamLimits

0x3a47,	// (0x00061669) msg_body_pane_t2

0x3a59,	// (0x0006167b) msg_body_pane_t3_ParamLimits

0x3a59,	// (0x0006167b) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0006d0b0) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0006d0b0) msg_body_pane_t

0x3abd,	// (0x000616df) main_viewer_pane_g1_ParamLimits

0x3abd,	// (0x000616df) main_viewer_pane_g1

0x3ac9,	// (0x000616eb) main_viewer_pane_g2_ParamLimits

0x3ac9,	// (0x000616eb) main_viewer_pane_g2

0x3ad5,	// (0x000616f7) main_viewer_pane_g3_ParamLimits

0x3ad5,	// (0x000616f7) main_viewer_pane_g3

0x3ae6,	// (0x00061708) main_viewer_pane_g4_ParamLimits

0x3ae6,	// (0x00061708) main_viewer_pane_g4

0x3af7,	// (0x00061719) main_viewer_pane_g5_ParamLimits

0x3af7,	// (0x00061719) main_viewer_pane_g5

0x3af7,	// (0x00061719) main_viewer_pane_g7_ParamLimits

0x3af7,	// (0x00061719) main_viewer_pane_g7

0x3b09,	// (0x0006172b) main_viewer_pane_g8_ParamLimits

0x3b09,	// (0x0006172b) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0006d0c0) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0006d0c0) main_viewer_pane_g

0xb7ce,	// (0x000693f0) viewer_content_pane_ParamLimits

0xb7ce,	// (0x000693f0) viewer_content_pane

0x3b41,	// (0x00061763) main_postcard_pane_g1_ParamLimits

0x3b41,	// (0x00061763) main_postcard_pane_g1

0x3b4f,	// (0x00061771) main_postcard_pane_g2_ParamLimits

0x3b4f,	// (0x00061771) main_postcard_pane_g2

0x3b5d,	// (0x0006177f) main_postcard_pane_g3_ParamLimits

0x3b5d,	// (0x0006177f) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0006d0d1) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0006d0d1) main_postcard_pane_g

0x3b6d,	// (0x0006178f) main_postcard_pane_g4

0xcafc,	// (0x0006a71e) smil_status_volume_pane_g2

0x3b99,	// (0x000617bb) postcard_pane_ParamLimits

0x3b99,	// (0x000617bb) postcard_pane

0xb6e6,	// (0x00069308) postcard_pane_g1_ParamLimits

0xb6e6,	// (0x00069308) postcard_pane_g1

0x3bd3,	// (0x000617f5) postcard_pane_g2_ParamLimits

0x3bd3,	// (0x000617f5) postcard_pane_g2

0x3bdf,	// (0x00061801) postcard_pane_g3_ParamLimits

0x3bdf,	// (0x00061801) postcard_pane_g3

0xb7dc,	// (0x000693fe) postcard_pane_g4_ParamLimits

0xb7dc,	// (0x000693fe) postcard_pane_g4

0x3beb,	// (0x0006180d) postcard_pane_g5_ParamLimits

0x3beb,	// (0x0006180d) postcard_pane_g5

0x3bf7,	// (0x00061819) postcard_pane_g6_ParamLimits

0x3bf7,	// (0x00061819) postcard_pane_g6

0xb7ea,	// (0x0006940c) postcard_pane_g7_ParamLimits

0xb7ea,	// (0x0006940c) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0006d0de) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0006d0de) postcard_pane_g

0x3c05,	// (0x00061827) main_mp2_pane_g1_ParamLimits

0x3c05,	// (0x00061827) main_mp2_pane_g1

0x3c13,	// (0x00061835) main_mp2_pane_g2_ParamLimits

0x3c13,	// (0x00061835) main_mp2_pane_g2

0x3c1f,	// (0x00061841) main_mp2_pane_g3_ParamLimits

0x3c1f,	// (0x00061841) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0006d0ed) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0006d0ed) main_mp2_pane_g

0x3c2b,	// (0x0006184d) main_mp2_pane_t1_ParamLimits

0x3c2b,	// (0x0006184d) main_mp2_pane_t1

0x3c42,	// (0x00061864) main_mp2_pane_t2_ParamLimits

0x3c42,	// (0x00061864) main_mp2_pane_t2

0x3c56,	// (0x00061878) main_mp2_pane_t3_ParamLimits

0x3c56,	// (0x00061878) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0006d0f4) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0006d0f4) main_mp2_pane_t

0xb7f8,	// (0x0006941a) pec_content_pane_ParamLimits

0xb7f8,	// (0x0006941a) pec_content_pane

0xad69,	// (0x0006898b) scroll_pane_cp015

0xb80a,	// (0x0006942c) pec_attribute_pane_ParamLimits

0xb80a,	// (0x0006942c) pec_attribute_pane

0x3c68,	// (0x0006188a) pec_content_pane_g1_ParamLimits

0x3c68,	// (0x0006188a) pec_content_pane_g1

0xb81a,	// (0x0006943c) pec_content_pane_t1_ParamLimits

0xb81a,	// (0x0006943c) pec_content_pane_t1

0xb82c,	// (0x0006944e) pec_content_pane_t2_ParamLimits

0xb82c,	// (0x0006944e) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0006d0fb) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0006d0fb) pec_content_pane_t

0x3c74,	// (0x00061896) list_single_graphic_pane_cp01_ParamLimits

0x3c74,	// (0x00061896) list_single_graphic_pane_cp01

0xa531,	// (0x00068153) bg_popup_sub_pane_cp04

0xb83e,	// (0x00069460) popup_mup_playback_window_g1

0xb84a,	// (0x0006946c) popup_mup_playback_window_t1

0xb85f,	// (0x00069481) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0006d100) popup_mup_playback_window_t

0xb896,	// (0x000694b8) main_image_pane_g1_ParamLimits

0xb896,	// (0x000694b8) main_image_pane_g1

0xb8d9,	// (0x000694fb) scroll_pane_cp018_ParamLimits

0xb8d9,	// (0x000694fb) scroll_pane_cp018

0xb8f1,	// (0x00069513) scroll_pane_cp016_ParamLimits

0xb8f1,	// (0x00069513) scroll_pane_cp016

0x3d02,	// (0x00061924) smil2_image_pane_ParamLimits

0x3d02,	// (0x00061924) smil2_image_pane

0x3d38,	// (0x0006195a) smil2_root_pane_ParamLimits

0x3d38,	// (0x0006195a) smil2_root_pane

0x3d64,	// (0x00061986) smil2_text_pane_ParamLimits

0x3d64,	// (0x00061986) smil2_text_pane

0xa2d6,	// (0x00067ef8) bg_list_pane_cp06

0xb92d,	// (0x0006954f) grid_radio_pane

0xa2d6,	// (0x00067ef8) bg_popup_window_pane_cp06

0xb937,	// (0x00069559) main_fmradio_pane_t1

0xb2ed,	// (0x00068f0f) heading_pane_cp04

0xb945,	// (0x00069567) main_fmradio_pane_t2

0xc91b,	// (0x0006a53d) popup_cale_lunar_info_window_g1

0xb953,	// (0x00069575) main_fmradio_pane_t3

0xc923,	// (0x0006a545) popup_cale_lunar_info_window_g2

0xb963,	// (0x00069585) main_fmradio_pane_t4

0x0001,

0xb971,	// (0x00069593) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0006d1db) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0006d115) main_fmradio_pane_t

0xb97f,	// (0x000695a1) wait_bar_pane_cp03

0xb987,	// (0x000695a9) cell_fmradio_pane_ParamLimits

0xb987,	// (0x000695a9) cell_fmradio_pane

0xb7ea,	// (0x0006940c) cell_fmradio_pane_g1_ParamLimits

0xb7ea,	// (0x0006940c) cell_fmradio_pane_g1

0xa2d6,	// (0x00067ef8) grid_highlight_pane_cp011

0xb99c,	// (0x000695be) poc_content_pane_ParamLimits

0xb99c,	// (0x000695be) poc_content_pane

0xb9ae,	// (0x000695d0) scroll_pane_cp019

0x3da4,	// (0x000619c6) popup_call_poc_act_window_ParamLimits

0x3da4,	// (0x000619c6) popup_call_poc_act_window

0x3db1,	// (0x000619d3) popup_call_poc_inact_window_ParamLimits

0x3db1,	// (0x000619d3) popup_call_poc_inact_window

0xf590,	// (0x0006d1b2) bg_popup_call_poc_act_pane_g

0xc893,	// (0x0006a4b5) bg_popup_call_poc_inact_pane_g1

0xc89b,	// (0x0006a4bd) bg_popup_call_poc_inact_pane_g2

0xb9b6,	// (0x000695d8) popup_call_poc_act_window_g2

0xc8a3,	// (0x0006a4c5) bg_popup_call_poc_inact_pane_g3

0xc8ab,	// (0x0006a4cd) bg_popup_call_poc_inact_pane_g4

0xc8b3,	// (0x0006a4d5) bg_popup_call_poc_inact_pane_g5

0xb9be,	// (0x000695e0) popup_call_poc_act_window_t1_ParamLimits

0xb9be,	// (0x000695e0) popup_call_poc_act_window_t1

0xb9e6,	// (0x00069608) popup_call_poc_act_window_t2_ParamLimits

0xb9e6,	// (0x00069608) popup_call_poc_act_window_t2

0xba0e,	// (0x00069630) popup_call_poc_act_window_t3_ParamLimits

0xba0e,	// (0x00069630) popup_call_poc_act_window_t3

0xba36,	// (0x00069658) popup_call_poc_act_window_t4_ParamLimits

0xba36,	// (0x00069658) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0006d120) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0006d120) popup_call_poc_act_window_t

0xc8bb,	// (0x0006a4dd) bg_popup_call_poc_inact_pane_g6

0xc8c3,	// (0x0006a4e5) bg_popup_call_poc_inact_pane_g7

0xc8cb,	// (0x0006a4ed) bg_popup_call_poc_inact_pane_g8

0xba48,	// (0x0006966a) popup_call_poc_inact_window_g2

0xc8d3,	// (0x0006a4f5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0006d19f) bg_popup_call_poc_inact_pane_g

0xba50,	// (0x00069672) popup_call_poc_inact_window_t1_ParamLimits

0xba50,	// (0x00069672) popup_call_poc_inact_window_t1

0xba65,	// (0x00069687) popup_call_poc_inact_window_t2_ParamLimits

0xba65,	// (0x00069687) popup_call_poc_inact_window_t2

0xba7a,	// (0x0006969c) popup_call_poc_inact_window_t3_ParamLimits

0xba7a,	// (0x0006969c) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0006d129) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0006d129) popup_call_poc_inact_window_t

0xca5c,	// (0x0006a67e) context_pane_ParamLimits

0x4426,	// (0x00062048) signal_pane_ParamLimits

0xabbc,	// (0x000687de) main_call2_pane

0x4393,	// (0x00061fb5) popup_phob_thumbnail2_window_ParamLimits

0x4393,	// (0x00061fb5) popup_phob_thumbnail2_window

0x3a6b,	// (0x0006168d) aid_hotspot_pointer_arrow_pane

0x3a73,	// (0x00061695) aid_hotspot_pointer_hand_pane

0x40d6,	// (0x00061cf8) phob_pre_status_pane_g5

0x1b1f,	// (0x0005f741) cams_zoom_pane_ParamLimits

0x1b2b,	// (0x0005f74d) image_vga_pane_ParamLimits

0x1b3a,	// (0x0005f75c) main_camera_pane_g1_ParamLimits

0x1b48,	// (0x0005f76a) main_camera_pane_g2_ParamLimits

0x1b54,	// (0x0005f776) main_camera_pane_g3_ParamLimits

0x1b62,	// (0x0005f784) main_camera_pane_g4_ParamLimits

0x1b70,	// (0x0005f792) main_camera_pane_g5_ParamLimits

0x1b7e,	// (0x0005f7a0) main_camera_pane_g6_ParamLimits

0x1b8c,	// (0x0005f7ae) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0006ce28) main_camera_pane_g_ParamLimits

0x1b9a,	// (0x0005f7bc) main_camera_pane_t1_ParamLimits

0x1bac,	// (0x0005f7ce) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0006ce39) main_camera_pane_t_ParamLimits

0xa531,	// (0x00068153) bg_popup_preview_window_pane_cp01_ParamLimits

0xa531,	// (0x00068153) bg_popup_preview_window_pane_cp01

0xba8f,	// (0x000696b1) popup_phob_thumbnail2_window_g1_ParamLimits

0xba8f,	// (0x000696b1) popup_phob_thumbnail2_window_g1

0xa2d6,	// (0x00067ef8) call2_cli_visual_pane

0x3dcd,	// (0x000619ef) popup_call2_audio_conf_window_ParamLimits

0x3dcd,	// (0x000619ef) popup_call2_audio_conf_window

0x3de6,	// (0x00061a08) popup_call2_audio_first_window_ParamLimits

0x3de6,	// (0x00061a08) popup_call2_audio_first_window

0x3e84,	// (0x00061aa6) popup_call2_audio_in_window_ParamLimits

0x3e84,	// (0x00061aa6) popup_call2_audio_in_window

0x3ec8,	// (0x00061aea) popup_call2_audio_out_window_ParamLimits

0x3ec8,	// (0x00061aea) popup_call2_audio_out_window

0x3f32,	// (0x00061b54) popup_call2_audio_second_window_ParamLimits

0x3f32,	// (0x00061b54) popup_call2_audio_second_window

0x3f90,	// (0x00061bb2) popup_call2_audio_wait_window_ParamLimits

0x3f90,	// (0x00061bb2) popup_call2_audio_wait_window

0xa2d6,	// (0x00067ef8) bg_popup_call2_act_pane_cp03

0xa513,	// (0x00068135) list_conf_pane_cp

0xba9b,	// (0x000696bd) popup_call2_audio_conf_window_t1

0xbaa9,	// (0x000696cb) list_single_graphic_popup_conf2_pane_ParamLimits

0xbaa9,	// (0x000696cb) list_single_graphic_popup_conf2_pane

0xb35c,	// (0x00068f7e) list_highlight_pane_cp04

0xbabc,	// (0x000696de) list_single_graphic_popup_conf2_pane_g1

0xb36d,	// (0x00068f8f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0006d130) list_single_graphic_popup_conf2_pane_g

0xbac6,	// (0x000696e8) list_single_graphic_popup_conf2_pane_t1

0xbad4,	// (0x000696f6) bg_popup_call2_act_pane_cp01_ParamLimits

0xbad4,	// (0x000696f6) bg_popup_call2_act_pane_cp01

0xbb5e,	// (0x00069780) call_type_pane_cp05_ParamLimits

0xbb5e,	// (0x00069780) call_type_pane_cp05

0xbbb2,	// (0x000697d4) popup_call2_audio_second_window_g1_ParamLimits

0xbbb2,	// (0x000697d4) popup_call2_audio_second_window_g1

0xbc06,	// (0x00069828) popup_call2_audio_second_window_g2_ParamLimits

0xbc06,	// (0x00069828) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0006d135) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0006d135) popup_call2_audio_second_window_g

0xbc6b,	// (0x0006988d) popup_call2_audio_second_window_t1_ParamLimits

0xbc6b,	// (0x0006988d) popup_call2_audio_second_window_t1

0xbd26,	// (0x00069948) popup_call2_audio_second_window_t2_ParamLimits

0xbd26,	// (0x00069948) popup_call2_audio_second_window_t2

0xbd79,	// (0x0006999b) popup_call2_audio_second_window_t3_ParamLimits

0xbd79,	// (0x0006999b) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0006d13c) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0006d13c) popup_call2_audio_second_window_t

0xa2d6,	// (0x00067ef8) bg_popup_call2_in_pane_cp02

0xa2e0,	// (0x00067f02) call_type_pane_cp04

0xa2e8,	// (0x00067f0a) popup_call2_audio_wait_window_g1

0xa2f0,	// (0x00067f12) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006cd17) popup_call2_audio_wait_window_g

0xa2f8,	// (0x00067f1a) popup_call2_audio_wait_window_t3

0xbe6c,	// (0x00069a8e) bg_popup_call2_act_pane_ParamLimits

0xbe6c,	// (0x00069a8e) bg_popup_call2_act_pane

0xbf2c,	// (0x00069b4e) call_type_pane_cp03_ParamLimits

0xbf2c,	// (0x00069b4e) call_type_pane_cp03

0xbf90,	// (0x00069bb2) popup_call2_audio_first_window_g1_ParamLimits

0xbf90,	// (0x00069bb2) popup_call2_audio_first_window_g1

0xc000,	// (0x00069c22) popup_call2_audio_first_window_g2_ParamLimits

0xc000,	// (0x00069c22) popup_call2_audio_first_window_g2

0xb6e6,	// (0x00069308) popup_call2_audio_first_window_g3_ParamLimits

0xb6e6,	// (0x00069308) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0006d145) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0006d145) popup_call2_audio_first_window_g

0xc0de,	// (0x00069d00) popup_call2_audio_first_window_t1_ParamLimits

0xc0de,	// (0x00069d00) popup_call2_audio_first_window_t1

0xc1e1,	// (0x00069e03) popup_call2_audio_first_window_t4_ParamLimits

0xc1e1,	// (0x00069e03) popup_call2_audio_first_window_t4

0xc2c4,	// (0x00069ee6) popup_call2_audio_first_window_t5_ParamLimits

0xc2c4,	// (0x00069ee6) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0006d150) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0006d150) popup_call2_audio_first_window_t

0xa529,	// (0x0006814b) bg_popup_call2_act_pane_g1

0xc92d,	// (0x0006a54f) popup_cale_lunar_info_window_t1

0xc93b,	// (0x0006a55d) popup_cale_lunar_info_window_t2

0xc949,	// (0x0006a56b) popup_cale_lunar_info_window_t3

0xa2d6,	// (0x00067ef8) bg_popup_call2_bubble_pane

0xc3c5,	// (0x00069fe7) bg_popup_call2_in_pane_cp01_ParamLimits

0xc3c5,	// (0x00069fe7) bg_popup_call2_in_pane_cp01

0x9fb2,	// (0x00067bd4) call_type_pane_cp02

0xc40d,	// (0x0006a02f) popup_call2_audio_out_window_g1_ParamLimits

0xc40d,	// (0x0006a02f) popup_call2_audio_out_window_g1

0xc439,	// (0x0006a05b) popup_call2_audio_out_window_g2_ParamLimits

0xc439,	// (0x0006a05b) popup_call2_audio_out_window_g2

0xc461,	// (0x0006a083) popup_call2_audio_out_window_g3_ParamLimits

0xc461,	// (0x0006a083) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0006d159) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0006d159) popup_call2_audio_out_window_g

0xc49c,	// (0x0006a0be) popup_call2_audio_out_window_t1_ParamLimits

0xc49c,	// (0x0006a0be) popup_call2_audio_out_window_t1

0xc4fb,	// (0x0006a11d) popup_call2_audio_out_window_t2_ParamLimits

0xc4fb,	// (0x0006a11d) popup_call2_audio_out_window_t2

0xc54f,	// (0x0006a171) popup_call2_audio_out_window_t3_ParamLimits

0xc54f,	// (0x0006a171) popup_call2_audio_out_window_t3

0xc565,	// (0x0006a187) popup_call2_audio_out_window_t4_ParamLimits

0xc565,	// (0x0006a187) popup_call2_audio_out_window_t4

0xc57b,	// (0x0006a19d) popup_call2_audio_out_window_t5_ParamLimits

0xc57b,	// (0x0006a19d) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0006d162) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0006d162) popup_call2_audio_out_window_t

0xc5df,	// (0x0006a201) bg_popup_call2_in_pane_ParamLimits

0xc5df,	// (0x0006a201) bg_popup_call2_in_pane

0xc63b,	// (0x0006a25d) popup_call2_audio_in_window_g1_ParamLimits

0xc63b,	// (0x0006a25d) popup_call2_audio_in_window_g1

0xc673,	// (0x0006a295) popup_call2_audio_in_window_g2_ParamLimits

0xc673,	// (0x0006a295) popup_call2_audio_in_window_g2

0xc6ab,	// (0x0006a2cd) popup_call2_audio_in_window_g3_ParamLimits

0xc6ab,	// (0x0006a2cd) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0006d16f) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0006d16f) popup_call2_audio_in_window_g

0xc703,	// (0x0006a325) popup_call2_audio_in_window_t1_ParamLimits

0xc703,	// (0x0006a325) popup_call2_audio_in_window_t1

0xc783,	// (0x0006a3a5) popup_call2_audio_in_window_t2_ParamLimits

0xc783,	// (0x0006a3a5) popup_call2_audio_in_window_t2

0xc803,	// (0x0006a425) popup_call2_audio_in_window_t3_ParamLimits

0xc803,	// (0x0006a425) popup_call2_audio_in_window_t3

0xc81d,	// (0x0006a43f) popup_call2_audio_in_window_t4_ParamLimits

0xc81d,	// (0x0006a43f) popup_call2_audio_in_window_t4

0xc82f,	// (0x0006a451) popup_call2_audio_in_window_t5_ParamLimits

0xc82f,	// (0x0006a451) popup_call2_audio_in_window_t5

0xc841,	// (0x0006a463) popup_call2_audio_in_window_t6_ParamLimits

0xc841,	// (0x0006a463) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0006d178) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0006d178) popup_call2_audio_in_window_t

0xa529,	// (0x0006814b) bg_popup_call2_in_pane_g1

0xc957,	// (0x0006a579) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0006d1e0) popup_cale_lunar_info_window_t

0xa531,	// (0x00068153) bg_popup_call2_rect_pane_ParamLimits

0xa531,	// (0x00068153) bg_popup_call2_rect_pane

0xa2d6,	// (0x00067ef8) call2_cli_visual_graphic_pane

0xa2d6,	// (0x00067ef8) call2_cli_visual_text_pane

0x44ab,	// (0x000620cd) smil_status_volume_pane_g3

0x0002,

0xaa69,	// (0x0006868b) call2_cli_visual_graphic_pane_g1

0xaa69,	// (0x0006868b) call2_cli_visual_graphic_pane_g2

0xaa69,	// (0x0006868b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0006d185) call2_cli_visual_graphic_pane_g

0xc853,	// (0x0006a475) bg_popup_call2_rect_pane_g1

0xaaf5,	// (0x00068717) bg_popup_call2_rect_pane_g2

0xc85b,	// (0x0006a47d) bg_popup_call2_rect_pane_g3

0xc863,	// (0x0006a485) bg_popup_call2_rect_pane_g4

0xc86b,	// (0x0006a48d) bg_popup_call2_rect_pane_g5

0xc873,	// (0x0006a495) bg_popup_call2_rect_pane_g6

0xc87b,	// (0x0006a49d) bg_popup_call2_rect_pane_g7

0xc883,	// (0x0006a4a5) bg_popup_call2_rect_pane_g8

0xc88b,	// (0x0006a4ad) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0006d18c) bg_popup_call2_rect_pane_g

0xc893,	// (0x0006a4b5) bg_popup_call2_bubble_pane_g1

0xc89b,	// (0x0006a4bd) bg_popup_call2_bubble_pane_g2

0xc8a3,	// (0x0006a4c5) bg_popup_call2_bubble_pane_g3

0xc8ab,	// (0x0006a4cd) bg_popup_call2_bubble_pane_g4

0xc8b3,	// (0x0006a4d5) bg_popup_call2_bubble_pane_g5

0xc8bb,	// (0x0006a4dd) bg_popup_call2_bubble_pane_g6

0xc8c3,	// (0x0006a4e5) bg_popup_call2_bubble_pane_g7

0xc8cb,	// (0x0006a4ed) bg_popup_call2_bubble_pane_g8

0xc8d3,	// (0x0006a4f5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0006d19f) bg_popup_call2_bubble_pane_g

0x143d,	// (0x0005f05f) aid_cale_week_size_cell_pane

0x1bc0,	// (0x0005f7e2) aid_cams_cif_uncrop_pane_ParamLimits

0x1bc0,	// (0x0005f7e2) aid_cams_cif_uncrop_pane

0x1d1d,	// (0x0005f93f) aid_cams_size_cell_ParamLimits

0x1d1d,	// (0x0005f93f) aid_cams_size_cell

0x1d29,	// (0x0005f94b) grid_cams_pane_ParamLimits

0x1d37,	// (0x0005f959) linegrid_cams_pane_ParamLimits

0x1f1f,	// (0x0005fb41) call_video_pane_t1

0x1f3c,	// (0x0005fb5e) call_video_pane_t2

0x0001,

0xf26a,	// (0x0006ce8c) call_video_pane_t

0x2408,	// (0x0006002a) aid_cale_month_size_cell_pane_ParamLimits

0x2408,	// (0x0006002a) aid_cale_month_size_cell_pane

0xf607,	// (0x0006d229) smil_status_volume_pane_g

0x44b8,	// (0x000620da) volume_smil_pane_ParamLimits

0x0bdf,	// (0x0005e801) aid_popup2_width_pane

0x133b,	// (0x0005ef5d) cell_qdial_pane_g4_ParamLimits

0x133b,	// (0x0005ef5d) cell_qdial_pane_g4

0x33f2,	// (0x00061014) aid_blid_cardinal_pane_ParamLimits

0x3402,	// (0x00061024) aid_blid_destination_pane_ParamLimits

0x3402,	// (0x00061024) aid_blid_destination_pane

0xa531,	// (0x00068153) bg_popup_call_poc_act_pane_ParamLimits

0xa531,	// (0x00068153) bg_popup_call_poc_act_pane

0xa531,	// (0x00068153) bg_popup_call_poc_inact_pane_ParamLimits

0xa531,	// (0x00068153) bg_popup_call_poc_inact_pane

0xc8db,	// (0x0006a4fd) bg_popup_call_poc_act_pane_g1

0xc8e3,	// (0x0006a505) bg_popup_call_poc_act_pane_g2

0xc8eb,	// (0x0006a50d) bg_popup_call_poc_act_pane_g3

0xc8ab,	// (0x0006a4cd) bg_popup_call_poc_act_pane_g4

0xc8b3,	// (0x0006a4d5) bg_popup_call_poc_act_pane_g5

0xc8f3,	// (0x0006a515) bg_popup_call_poc_act_pane_g6

0xc8c3,	// (0x0006a4e5) bg_popup_call_poc_act_pane_g7

0xc8fb,	// (0x0006a51d) bg_popup_call_poc_act_pane_g8

0xa2d6,	// (0x00067ef8) main_usb_pane

0x42b0,	// (0x00061ed2) popup_cale_lunar_info_window

0x2254,	// (0x0005fe76) im_reading_pane_t1_ParamLimits

0xacc1,	// (0x000688e3) list_im_pane_ParamLimits

0xacd2,	// (0x000688f4) scroll_pane_cp07_ParamLimits

0xa2d6,	// (0x00067ef8) grid_highlight_pane_cp012

0xa531,	// (0x00068153) mup_scale_pane_ParamLimits

0xb6e6,	// (0x00069308) main_usb_pane_g1_ParamLimits

0xb6e6,	// (0x00069308) main_usb_pane_g1

0x3ff9,	// (0x00061c1b) main_usb_pane_g2_ParamLimits

0x3ff9,	// (0x00061c1b) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0006d1c9) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0006d1c9) main_usb_pane_g

0x4005,	// (0x00061c27) main_usb_pane_t1_ParamLimits

0x4005,	// (0x00061c27) main_usb_pane_t1

0x4017,	// (0x00061c39) main_usb_pane_t2_ParamLimits

0x4017,	// (0x00061c39) main_usb_pane_t2

0x4029,	// (0x00061c4b) main_usb_pane_t3_ParamLimits

0x4029,	// (0x00061c4b) main_usb_pane_t3

0x403b,	// (0x00061c5d) main_usb_pane_t4_ParamLimits

0x403b,	// (0x00061c5d) main_usb_pane_t4

0x404d,	// (0x00061c6f) main_usb_pane_t5_ParamLimits

0x404d,	// (0x00061c6f) main_usb_pane_t5

0x405f,	// (0x00061c81) main_usb_pane_t6_ParamLimits

0x405f,	// (0x00061c81) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0006d1ce) main_usb_pane_t_ParamLimits

0x3391,	// (0x00060fb3) aid_text_placing

0x339c,	// (0x00060fbe) main_location2_pane_t1_ParamLimits

0x33b2,	// (0x00060fd4) main_location2_pane_t2_ParamLimits

0x33c8,	// (0x00060fea) main_location2_pane_t3_ParamLimits

0x33de,	// (0x00061000) main_location2_pane_t4_ParamLimits

0x33de,	// (0x00061000) main_location2_pane_t4

0xf3cb,	// (0x0006cfed) main_location2_pane_t_ParamLimits

0xa56d,	// (0x0006818f) find_pinb_pane_g2_ParamLimits

0xa56d,	// (0x0006818f) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0006cd3d) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0006cd3d) find_pinb_pane_g

0xa579,	// (0x0006819b) find_pinb_pane_t1_ParamLimits

0xa58b,	// (0x000681ad) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0006cd42) find_pinb_pane_t_ParamLimits

0xa2d6,	// (0x00067ef8) main_call3_pane

0x29bb,	// (0x000605dd) cale_month_day_heading_pane_t1_ParamLimits

0x2a3d,	// (0x0006065f) cale_month_day_heading_pane_t2_ParamLimits

0x2ab6,	// (0x000606d8) cale_month_day_heading_pane_t3_ParamLimits

0x2b2f,	// (0x00060751) cale_month_day_heading_pane_t4_ParamLimits

0x2ba8,	// (0x000607ca) cale_month_day_heading_pane_t5_ParamLimits

0x2c29,	// (0x0006084b) cale_month_day_heading_pane_t6_ParamLimits

0x2cb2,	// (0x000608d4) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0006cec4) cale_month_day_heading_pane_t_ParamLimits

0xaf56,	// (0x00068b78) smil_status_volume_pane

0x3bb7,	// (0x000617d9) postcard_address_pane_ParamLimits

0x3bb7,	// (0x000617d9) postcard_address_pane

0x3bc5,	// (0x000617e7) postcard_message_pane_ParamLimits

0x3bc5,	// (0x000617e7) postcard_message_pane

0x3fcf,	// (0x00061bf1) call2_cli_visual_pane_t1_ParamLimits

0x3fcf,	// (0x00061bf1) call2_cli_visual_pane_t1

0x45fe,	// (0x00062220) postcard_message_pane_t1_ParamLimits

0x45fe,	// (0x00062220) postcard_message_pane_t1

0xcb0f,	// (0x0006a731) postcard_address_pane_t1_ParamLimits

0xcb0f,	// (0x0006a731) postcard_address_pane_t1

0x45ef,	// (0x00062211) popup_call3_audio_in_window_ParamLimits

0x45ef,	// (0x00062211) popup_call3_audio_in_window

0x44cd,	// (0x000620ef) bg_popup_call3_in_pane_ParamLimits

0x44cd,	// (0x000620ef) bg_popup_call3_in_pane

0x4535,	// (0x00062157) popup_call3_audio_in_window_g1_ParamLimits

0x4535,	// (0x00062157) popup_call3_audio_in_window_g1

0x454d,	// (0x0006216f) popup_call3_audio_in_window_g2_ParamLimits

0x454d,	// (0x0006216f) popup_call3_audio_in_window_g2

0x4565,	// (0x00062187) popup_call3_audio_in_window_g3_ParamLimits

0x4565,	// (0x00062187) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0006d230) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0006d230) popup_call3_audio_in_window_g

0x458d,	// (0x000621af) popup_call3_audio_in_window_t1_ParamLimits

0x458d,	// (0x000621af) popup_call3_audio_in_window_t1

0x45b5,	// (0x000621d7) popup_call3_audio_in_window_t2_ParamLimits

0x45b5,	// (0x000621d7) popup_call3_audio_in_window_t2

0x45dd,	// (0x000621ff) popup_call3_audio_in_window_t3_ParamLimits

0x45dd,	// (0x000621ff) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0006d239) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0006d239) popup_call3_audio_in_window_t

0xabbc,	// (0x000687de) bg_popup_call3_rect_pane

0xc853,	// (0x0006a475) bg_popup_call3_rect_pane_g1

0xaaf5,	// (0x00068717) bg_popup_call3_rect_pane_g2

0xc85b,	// (0x0006a47d) bg_popup_call3_rect_pane_g3

0xc863,	// (0x0006a485) bg_popup_call3_rect_pane_g4

0xc86b,	// (0x0006a48d) bg_popup_call3_rect_pane_g5

0xc873,	// (0x0006a495) bg_popup_call3_rect_pane_g6

0xc87b,	// (0x0006a49d) bg_popup_call3_rect_pane_g7

0x3736,	// (0x00061358) mup_visualizer_osc_pane

0xb6fc,	// (0x0006931e) mup_visualizer_spec_pane

0x44ed,	// (0x0006210f) call3_video_qcif_pane_ParamLimits

0x44ed,	// (0x0006210f) call3_video_qcif_pane

0x44ff,	// (0x00062121) call3_video_qcif_uncrop_pane_ParamLimits

0x44ff,	// (0x00062121) call3_video_qcif_uncrop_pane

0x450f,	// (0x00062131) call3_video_subqcif_pane_ParamLimits

0x450f,	// (0x00062131) call3_video_subqcif_pane

0x4523,	// (0x00062145) call3_video_subqcif_uncrop_pane_ParamLimits

0x4523,	// (0x00062145) call3_video_subqcif_uncrop_pane

0x457d,	// (0x0006219f) popup_call3_audio_in_window_g4_ParamLimits

0x457d,	// (0x0006219f) popup_call3_audio_in_window_g4

0x449a,	// (0x000620bc) mup_spec_half_pane

0x44a3,	// (0x000620c5) mup_spec_half_pane_cp

0xcacf,	// (0x0006a6f1) mup_osc_middle_pane

0xcad8,	// (0x0006a6fa) mup_visualizer_osc_pane_g1

0x447a,	// (0x0006209c) mup_spec_bar_pane_ParamLimits

0x447a,	// (0x0006209c) mup_spec_bar_pane

0xcabc,	// (0x0006a6de) mup_spec_bar_pane_g1

0xcac6,	// (0x0006a6e8) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0006d224) mup_spec_bar_pane_g

0x143d,	// (0x0005f05f) aid_cale_week_size_cell_pane_ParamLimits

0x1457,	// (0x0005f079) bg_cale_heading_pane_ParamLimits

0x1480,	// (0x0005f0a2) bg_cale_pane_cp01_ParamLimits

0x14a2,	// (0x0005f0c4) cale_week_corner_pane_ParamLimits

0x14c1,	// (0x0005f0e3) cale_week_day_heading_pane_ParamLimits

0x14ef,	// (0x0005f111) cale_week_scroll_pane_g1_ParamLimits

0x1513,	// (0x0005f135) cale_week_scroll_pane_g2_ParamLimits

0x152b,	// (0x0005f14d) cale_week_scroll_pane_g3_ParamLimits

0x1543,	// (0x0005f165) cale_week_scroll_pane_g4_ParamLimits

0x155b,	// (0x0005f17d) cale_week_scroll_pane_g5_ParamLimits

0x1573,	// (0x0005f195) cale_week_scroll_pane_g6_ParamLimits

0x1593,	// (0x0005f1b5) cale_week_scroll_pane_g7_ParamLimits

0x15b3,	// (0x0005f1d5) cale_week_scroll_pane_g8_ParamLimits

0x15d3,	// (0x0005f1f5) cale_week_scroll_pane_g9_ParamLimits

0x15f0,	// (0x0005f212) cale_week_scroll_pane_g10_ParamLimits

0x160d,	// (0x0005f22f) cale_week_scroll_pane_g11_ParamLimits

0x162c,	// (0x0005f24e) cale_week_scroll_pane_g12_ParamLimits

0x1651,	// (0x0005f273) cale_week_scroll_pane_g13_ParamLimits

0x167a,	// (0x0005f29c) cale_week_scroll_pane_g14_ParamLimits

0x16a3,	// (0x0005f2c5) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0006cdce) cale_week_scroll_pane_g_ParamLimits

0x16ec,	// (0x0005f30e) cale_week_time_pane_ParamLimits

0x170c,	// (0x0005f32e) grid_cale_week_pane_ParamLimits

0xab32,	// (0x00068754) listscroll_cale_week_pane_t1

0xab44,	// (0x00068766) scroll_pane_cp08_ParamLimits

0x2480,	// (0x000600a2) cale_month_corner_pane_ParamLimits

0xaf2c,	// (0x00068b4e) cale_month_pane_t1

0x2942,	// (0x00060564) cale_month_week_pane_ParamLimits

0xb6e6,	// (0x00069308) popup_call_status_window_g1_ParamLimits

0x31af,	// (0x00060dd1) popup_call_status_window_g2_ParamLimits

0x31bb,	// (0x00060ddd) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0006cf74) popup_call_status_window_g_ParamLimits

0xb2dd,	// (0x00068eff) aid_call2_pane

0x39e4,	// (0x00061606) msg_header_pane_g1

0x3bb7,	// (0x000617d9) postcard_address2_pane_ParamLimits

0x3bb7,	// (0x000617d9) postcard_address2_pane

0x3bc5,	// (0x000617e7) postcard_message2_pane_ParamLimits

0x3bc5,	// (0x000617e7) postcard_message2_pane

0x4434,	// (0x00062056) message2_row_pane_ParamLimits

0x4434,	// (0x00062056) message2_row_pane

0xca77,	// (0x0006a699) address2_row_pane_ParamLimits

0xca77,	// (0x0006a699) address2_row_pane

0xca8a,	// (0x0006a6ac) postcard_message2_row_pane_g1

0xca92,	// (0x0006a6b4) postcard_message2_row_pane_t1

0xca8a,	// (0x0006a6ac) address2_row_pane_g1

0xca92,	// (0x0006a6b4) address2_row_pane_t1

0x1a9a,	// (0x0005f6bc) aid_size_cell_vorec

0xa2d6,	// (0x00067ef8) main_rss_pane

0x444e,	// (0x00062070) rss_list_single_pane_ParamLimits

0x444e,	// (0x00062070) rss_list_single_pane

0xcaa0,	// (0x0006a6c2) rss_list_single_pane_t1

0xcaae,	// (0x0006a6d0) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0006d21f) rss_list_single_pane_t

0xa2d6,	// (0x00067ef8) main_camera2_pane

0xa2d6,	// (0x00067ef8) main_video2_pane

0x4662,	// (0x00062284) cams_zoom_pane_cp2_ParamLimits

0x4662,	// (0x00062284) cams_zoom_pane_cp2

0x466e,	// (0x00062290) image2_vga_pane_ParamLimits

0x466e,	// (0x00062290) image2_vga_pane

0x467d,	// (0x0006229f) main_camera2_pane_g1_ParamLimits

0x467d,	// (0x0006229f) main_camera2_pane_g1

0x4689,	// (0x000622ab) main_camera2_pane_g2_ParamLimits

0x4689,	// (0x000622ab) main_camera2_pane_g2

0x4695,	// (0x000622b7) main_camera2_pane_g3_ParamLimits

0x4695,	// (0x000622b7) main_camera2_pane_g3

0x46a1,	// (0x000622c3) main_camera2_pane_g4_ParamLimits

0x46a1,	// (0x000622c3) main_camera2_pane_g4

0x46ad,	// (0x000622cf) main_camera2_pane_g5_ParamLimits

0x46ad,	// (0x000622cf) main_camera2_pane_g5

0x46b9,	// (0x000622db) main_camera2_pane_g6_ParamLimits

0x46b9,	// (0x000622db) main_camera2_pane_g6

0x46c5,	// (0x000622e7) main_camera2_pane_g7_ParamLimits

0x46c5,	// (0x000622e7) main_camera2_pane_g7

0x46d1,	// (0x000622f3) main_camera2_pane_g8_ParamLimits

0x46d1,	// (0x000622f3) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0006d240) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0006d240) main_camera2_pane_g

0x46e9,	// (0x0006230b) main_camera2_pane_t1_ParamLimits

0x46e9,	// (0x0006230b) main_camera2_pane_t1

0x46fb,	// (0x0006231d) main_camera2_pane_t2_ParamLimits

0x46fb,	// (0x0006231d) main_camera2_pane_t2

0x470d,	// (0x0006232f) main_camera2_pane_t3_ParamLimits

0x470d,	// (0x0006232f) main_camera2_pane_t3

0x471f,	// (0x00062341) main_camera2_pane_t4_ParamLimits

0x471f,	// (0x00062341) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0006d253) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0006d253) main_camera2_pane_t

0x477c,	// (0x0006239e) cams_zoom_pane_cp4_ParamLimits

0x477c,	// (0x0006239e) cams_zoom_pane_cp4

0x478c,	// (0x000623ae) image2_cif_pane_ParamLimits

0x478c,	// (0x000623ae) image2_cif_pane

0x47a1,	// (0x000623c3) image2_subqcif_pane_ParamLimits

0x47a1,	// (0x000623c3) image2_subqcif_pane

0x47b0,	// (0x000623d2) main_video2_pane_g1_ParamLimits

0x47b0,	// (0x000623d2) main_video2_pane_g1

0x47c2,	// (0x000623e4) main_video2_pane_g2_ParamLimits

0x47c2,	// (0x000623e4) main_video2_pane_g2

0x47d2,	// (0x000623f4) main_video2_pane_g3_ParamLimits

0x47d2,	// (0x000623f4) main_video2_pane_g3

0x47e2,	// (0x00062404) main_video2_pane_g4_ParamLimits

0x47e2,	// (0x00062404) main_video2_pane_g4

0x47f2,	// (0x00062414) main_video2_pane_g5_ParamLimits

0x47f2,	// (0x00062414) main_video2_pane_g5

0x4802,	// (0x00062424) main_video2_pane_g6_ParamLimits

0x4802,	// (0x00062424) main_video2_pane_g6

0x0005,

0xf640,	// (0x0006d262) main_video2_pane_g_ParamLimits

0xf640,	// (0x0006d262) main_video2_pane_g

0x4814,	// (0x00062436) main_video2_pane_t1_ParamLimits

0x4814,	// (0x00062436) main_video2_pane_t1

0x482e,	// (0x00062450) main_video2_pane_t2_ParamLimits

0x482e,	// (0x00062450) main_video2_pane_t2

0x4854,	// (0x00062476) main_video2_pane_t3_ParamLimits

0x4854,	// (0x00062476) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0006d26f) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0006d26f) main_video2_pane_t

0x4116,	// (0x00061d38) call_muted_g2

0x0001,

0xf5ef,	// (0x0006d211) call_muted_g

0xa2d6,	// (0x00067ef8) main_mup2_pane

0xcb26,	// (0x0006a748) main_mup2_pane_g1_ParamLimits

0xcb26,	// (0x0006a748) main_mup2_pane_g1

0x487a,	// (0x0006249c) main_mup2_pane_g2_ParamLimits

0x487a,	// (0x0006249c) main_mup2_pane_g2

0x4b0c,	// (0x0006272e) main_mup_pane_g13_cp1

0x4b14,	// (0x00062736) mup_volume_pane_cp1

0x489c,	// (0x000624be) main_mup2_pane_g4_ParamLimits

0x489c,	// (0x000624be) main_mup2_pane_g4

0x48b1,	// (0x000624d3) main_mup2_pane_g5_ParamLimits

0x48b1,	// (0x000624d3) main_mup2_pane_g5

0x48c6,	// (0x000624e8) main_mup2_pane_g6_ParamLimits

0x48c6,	// (0x000624e8) main_mup2_pane_g6

0x48db,	// (0x000624fd) main_mup2_pane_g7_ParamLimits

0x48db,	// (0x000624fd) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0006d276) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0006d276) main_mup2_pane_g

0x48f7,	// (0x00062519) main_mup2_pane_t1_ParamLimits

0x48f7,	// (0x00062519) main_mup2_pane_t1

0x490e,	// (0x00062530) main_mup2_pane_t2_ParamLimits

0x490e,	// (0x00062530) main_mup2_pane_t2

0x4925,	// (0x00062547) main_mup2_pane_t3_ParamLimits

0x4925,	// (0x00062547) main_mup2_pane_t3

0x493c,	// (0x0006255e) main_mup2_pane_t4_ParamLimits

0x493c,	// (0x0006255e) main_mup2_pane_t4

0x4956,	// (0x00062578) main_mup2_pane_t5_ParamLimits

0x4956,	// (0x00062578) main_mup2_pane_t5

0x4970,	// (0x00062592) main_mup2_pane_t6_ParamLimits

0x4970,	// (0x00062592) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0006d285) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0006d285) main_mup2_pane_t

0x49a8,	// (0x000625ca) mup2_visualizer_pane_ParamLimits

0x49a8,	// (0x000625ca) mup2_visualizer_pane

0x49de,	// (0x00062600) mup_progress_pane_cp_ParamLimits

0x49de,	// (0x00062600) mup_progress_pane_cp

0x4af7,	// (0x00062719) mup_volume_pane_cp_ParamLimits

0x4af7,	// (0x00062719) mup_volume_pane_cp

0x49f7,	// (0x00062619) mup2_visualizer_pane_g1_ParamLimits

0x49f7,	// (0x00062619) mup2_visualizer_pane_g1

0xcb32,	// (0x0006a754) mup2_visualizer_pane_g2_ParamLimits

0xcb32,	// (0x0006a754) mup2_visualizer_pane_g2

0x4a0c,	// (0x0006262e) mup2_visualizer_pane_g3_ParamLimits

0x4a0c,	// (0x0006262e) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0006d292) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0006d292) mup2_visualizer_pane_g

0xb925,	// (0x00069547) aid_size_cell_fmradio

0x422c,	// (0x00061e4e) aid_height_parent_landcape

0xad50,	// (0x00068972) wml_content_pane_cp

0xad58,	// (0x0006897a) wml_tabs_pane

0xad61,	// (0x00068983) popup_wml_miniature_window

0xad69,	// (0x0006898b) scroll_pane_cp021

0xad7d,	// (0x0006899f) wml_content_pane_comp8

0xa2d6,	// (0x00067ef8) bg_popup_sub_pane_cp05

0xcb50,	// (0x0006a772) popup_wml_miniature_window_g1

0xcb58,	// (0x0006a77a) wml_miniature_view_pane

0x4a1a,	// (0x0006263c) aid_size_wml_view

0x4a22,	// (0x00062644) wml_miniature_view_pane_g1

0x4a2b,	// (0x0006264d) wml_miniature_view_pane_g2

0x4a34,	// (0x00062656) wml_miniature_view_pane_g3

0x4a3c,	// (0x0006265e) wml_miniature_view_pane_g4

0x4a44,	// (0x00062666) wml_miniature_view_pane_g5

0x4a4c,	// (0x0006266e) wml_miniature_view_pane_g6

0x4a54,	// (0x00062676) wml_miniature_view_pane_g7

0x4a5c,	// (0x0006267e) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0006d299) wml_miniature_view_pane_g

0xcb26,	// (0x0006a748) background_graphic_ParamLimits

0xcb26,	// (0x0006a748) background_graphic

0xcb60,	// (0x0006a782) wml_tabs_2_pane

0xcb69,	// (0x0006a78b) wml_tabs_3_pane_ParamLimits

0xcb69,	// (0x0006a78b) wml_tabs_3_pane

0xcb7b,	// (0x0006a79d) wml_tabs_4_pane_ParamLimits

0xcb7b,	// (0x0006a79d) wml_tabs_4_pane

0xcb91,	// (0x0006a7b3) wml_tabs_5_pane_ParamLimits

0xcb91,	// (0x0006a7b3) wml_tabs_5_pane

0xcbab,	// (0x0006a7cd) wml_tabs_pane_g2_ParamLimits

0xcbab,	// (0x0006a7cd) wml_tabs_pane_g2

0xcbbf,	// (0x0006a7e1) wml_tabs_pane_g3_ParamLimits

0xcbbf,	// (0x0006a7e1) wml_tabs_pane_g3

0x4a64,	// (0x00062686) wml_tabs_2_active_pane_ParamLimits

0x4a64,	// (0x00062686) wml_tabs_2_active_pane

0x4a76,	// (0x00062698) wml_tabs_2_passive_pane_ParamLimits

0x4a76,	// (0x00062698) wml_tabs_2_passive_pane

0x4a88,	// (0x000626aa) wml_tabs_3_active_pane_cp_ParamLimits

0x4a88,	// (0x000626aa) wml_tabs_3_active_pane_cp

0x4a9b,	// (0x000626bd) wml_tabs_3_passive_pane_ParamLimits

0x4a9b,	// (0x000626bd) wml_tabs_3_passive_pane

0x4aac,	// (0x000626ce) wml_tabs_3_passive_pane_cp_ParamLimits

0x4aac,	// (0x000626ce) wml_tabs_3_passive_pane_cp

0x4ac1,	// (0x000626e3) tabs_4_active_pane

0x4ac9,	// (0x000626eb) tabs_4_passive_pane

0x4ad1,	// (0x000626f3) tabs_4_passive_pane_cp

0x4ad9,	// (0x000626fb) tabs_4_passive_pane_cp2

0x3ff1,	// (0x00061c13) aid_height_text

0x36ff,	// (0x00061321) mup_volume_cont_pane_ParamLimits

0x36ff,	// (0x00061321) mup_volume_cont_pane

0x0f95,	// (0x0005ebb7) aid_size_cell_pinb

0x0f9f,	// (0x0005ebc1) aid_size_list_pinb

0x49c7,	// (0x000625e9) mup2_volume_cont_pane_ParamLimits

0x49c7,	// (0x000625e9) mup2_volume_cont_pane

0x4ae3,	// (0x00062705) mup2_volume_cont_pane_g1_ParamLimits

0x4ae3,	// (0x00062705) mup2_volume_cont_pane_g1

0x0beb,	// (0x0005e80d) aid_size_cell_touch_ParamLimits

0x0beb,	// (0x0005e80d) aid_size_cell_touch

0x0eb4,	// (0x0005ead6) touch_pane_ParamLimits

0x0eb4,	// (0x0005ead6) touch_pane

0x0eaa,	// (0x0005eacc) main_rss2_pane

0xcbdc,	// (0x0006a7fe) listscroll_rss2_pane

0xcbe5,	// (0x0006a807) rss2_navigation_pane

0xcbed,	// (0x0006a80f) list_rss2_pane

0xb401,	// (0x00069023) scroll_pane_cp22

0xcbf5,	// (0x0006a817) rss2_navigation_pane_g1

0xcbfe,	// (0x0006a820) rss2_navigation_pane_g2

0xcc06,	// (0x0006a828) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0006d2aa) rss2_navigation_pane_g

0xcc0e,	// (0x0006a830) rss2_navigation_pane_t1

0x4b1c,	// (0x0006273e) rss2_list_single_pane_ParamLimits

0x4b1c,	// (0x0006273e) rss2_list_single_pane

0xcc1c,	// (0x0006a83e) rss2_list_single_pane_t2

0xcc2a,	// (0x0006a84c) rss2_list_single_pane_t3_ParamLimits

0xcc2a,	// (0x0006a84c) rss2_list_single_pane_t3

0xcc47,	// (0x0006a869) rss2_list_single_pane_t4

0x2f7a,	// (0x00060b9c) smil_status_pane_g1

0x4255,	// (0x00061e77) main_image2_pane_ParamLimits

0x4255,	// (0x00061e77) main_image2_pane

0x46dd,	// (0x000622ff) main_camera2_pane_g9_ParamLimits

0x46dd,	// (0x000622ff) main_camera2_pane_g9

0x4731,	// (0x00062353) main_camera2_pane_t5_ParamLimits

0x4731,	// (0x00062353) main_camera2_pane_t5

0x4743,	// (0x00062365) main_camera2_pane_t6_ParamLimits

0x4743,	// (0x00062365) main_camera2_pane_t6

0x4b3f,	// (0x00062761) main_image2_pane_g1_ParamLimits

0x4b3f,	// (0x00062761) main_image2_pane_g1

0x3d8e,	// (0x000619b0) smil2_video_pane_ParamLimits

0x3d8e,	// (0x000619b0) smil2_video_pane

0x0aef,	// (0x0005e711) aid_zoom_text_primary_cp

0x0e45,	// (0x0005ea67) popup_preview_fixed_window

0xacb9,	// (0x000688db) im_reading_pane_g1

0x4627,	// (0x00062249) cams2_bc_adjust_pane_cp_ParamLimits

0x4627,	// (0x00062249) cams2_bc_adjust_pane_cp

0x476e,	// (0x00062390) cams2_bc_adjust_pane_ParamLimits

0x476e,	// (0x00062390) cams2_bc_adjust_pane

0xd9f5,	// (0x0006b617) cams2_bc_adjust_pane_g1

0x4b4b,	// (0x0006276d) cams2_slider_pane

0x4b54,	// (0x00062776) cams2_slider_pane_g1

0x4b5d,	// (0x0006277f) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0006d2b1) cams2_slider_pane_g

0x109a,	// (0x0005ecbc) calc_display_pane_ParamLimits

0x10b8,	// (0x0005ecda) calc_paper_pane_ParamLimits

0x10d4,	// (0x0005ecf6) grid_calc_pane_ParamLimits

0x3219,	// (0x00060e3b) popup_clock_digital_window_t1_ParamLimits

0xb8c2,	// (0x000694e4) main_image_pane_t1

0x1080,	// (0x0005eca2) aid_size_cell_calc_ParamLimits

0x1080,	// (0x0005eca2) aid_size_cell_calc

0x4286,	// (0x00061ea8) popup_blid_sat_info2_window_ParamLimits

0x4286,	// (0x00061ea8) popup_blid_sat_info2_window

0xcc5d,	// (0x0006a87f) aid_size_cell_blid

0xcc65,	// (0x0006a887) bg_popup_window_pane_cp07

0xcc88,	// (0x0006a8aa) grid_popup_blid_pane

0xcc92,	// (0x0006a8b4) heading_pane_cp05_ParamLimits

0xcc92,	// (0x0006a8b4) heading_pane_cp05

0xcd5c,	// (0x0006a97e) cell_popup_blid_pane_ParamLimits

0xcd5c,	// (0x0006a97e) cell_popup_blid_pane

0xcd86,	// (0x0006a9a8) cell_popup_blid_pane_g1

0xcd8e,	// (0x0006a9b0) cell_popup_blid_pane_t1

0x498d,	// (0x000625af) mup2_indicator_pane_ParamLimits

0x498d,	// (0x000625af) mup2_indicator_pane

0xabbc,	// (0x000687de) mup2_visualizer_osc_pane

0xcb3e,	// (0x0006a760) mup2_visualizer_spec_pane_ParamLimits

0xcb3e,	// (0x0006a760) mup2_visualizer_spec_pane

0x4b77,	// (0x00062799) mup2_spec_half_pane

0x4b80,	// (0x000627a2) mup2_spec_half_pane_cp

0x4b8a,	// (0x000627ac) mup2_spec_bar_pane_ParamLimits

0x4b8a,	// (0x000627ac) mup2_spec_bar_pane

0xcabc,	// (0x0006a6de) mup2_spec_bar_pane_g1

0xcac6,	// (0x0006a6e8) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0006d224) mup2_spec_bar_pane_g

0x4ba9,	// (0x000627cb) mup2_osc_middle_pane

0xcad8,	// (0x0006a6fa) mup2_visualizer_osc_pane_g1

0x9eae,	// (0x00067ad0) popup_number_entry_window_t1_ParamLimits

0x9ec1,	// (0x00067ae3) popup_number_entry_window_t2_ParamLimits

0x9ed3,	// (0x00067af5) popup_number_entry_window_t3_ParamLimits

0x9ee5,	// (0x00067b07) popup_number_entry_window_t5_ParamLimits

0x9ee5,	// (0x00067b07) popup_number_entry_window_t5

0xf0c6,	// (0x0006cce8) popup_number_entry_window_t_ParamLimits

0x9f1a,	// (0x00067b3c) text_title_cp2_ParamLimits

0x3a7b,	// (0x0006169d) aid_hotspot_pointer_text2_pane

0x3b15,	// (0x00061737) main_viewer_pane_g9_ParamLimits

0x3b15,	// (0x00061737) main_viewer_pane_g9

0xaf2c,	// (0x00068b4e) cale_month_pane_t1_ParamLimits

0xaf69,	// (0x00068b8b) bg_cale_pane_ParamLimits

0xaf81,	// (0x00068ba3) list_cale_pane_ParamLimits

0xaf92,	// (0x00068bb4) listscroll_cale_day_pane_t1

0xafa4,	// (0x00068bc6) scroll_pane_cp09_ParamLimits

0x373e,	// (0x00061360) main_mup_eq_pane_t1_ParamLimits

0x373e,	// (0x00061360) main_mup_eq_pane_t1

0x375a,	// (0x0006137c) main_mup_eq_pane_t2_ParamLimits

0x375a,	// (0x0006137c) main_mup_eq_pane_t2

0x3776,	// (0x00061398) main_mup_eq_pane_t3_ParamLimits

0x3776,	// (0x00061398) main_mup_eq_pane_t3

0x3790,	// (0x000613b2) main_mup_eq_pane_t4_ParamLimits

0x3790,	// (0x000613b2) main_mup_eq_pane_t4

0x37aa,	// (0x000613cc) main_mup_eq_pane_t5_ParamLimits

0x37aa,	// (0x000613cc) main_mup_eq_pane_t5

0x37c4,	// (0x000613e6) main_mup_eq_pane_t6_ParamLimits

0x37c4,	// (0x000613e6) main_mup_eq_pane_t6

0x37da,	// (0x000613fc) main_mup_eq_pane_t7_ParamLimits

0x37da,	// (0x000613fc) main_mup_eq_pane_t7

0x37f0,	// (0x00061412) main_mup_eq_pane_t8_ParamLimits

0x37f0,	// (0x00061412) main_mup_eq_pane_t8

0x3806,	// (0x00061428) main_mup_eq_pane_t9_ParamLimits

0x3806,	// (0x00061428) main_mup_eq_pane_t9

0x3822,	// (0x00061444) main_mup_eq_pane_t10_ParamLimits

0x3822,	// (0x00061444) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0006d073) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0006d073) main_mup_eq_pane_t

0x38e7,	// (0x00061509) mup_equalizer_pane_cp5_ParamLimits

0x38ff,	// (0x00061521) mup_equalizer_pane_cp6_ParamLimits

0x3917,	// (0x00061539) mup_equalizer_pane_cp7_ParamLimits

0x0eaa,	// (0x0005eacc) main_gallery_pane

0xcae1,	// (0x0006a703) smil2_volume_pane

0xcae9,	// (0x0006a70b) smil_status_volume_pane_g1_ParamLimits

0xcafc,	// (0x0006a71e) smil_status_volume_pane_g2_ParamLimits

0x44ab,	// (0x000620cd) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0006d229) smil_status_volume_pane_g_ParamLimits

0xcc65,	// (0x0006a887) bg_popup_window_pane_cp07_ParamLimits

0xcc73,	// (0x0006a895) blid_firmament_pane

0x4bb2,	// (0x000627d4) aid_size_cell_gallery_ParamLimits

0x4bb2,	// (0x000627d4) aid_size_cell_gallery

0x4bc0,	// (0x000627e2) grid_gallery_pane_ParamLimits

0x4bc0,	// (0x000627e2) grid_gallery_pane

0x4bd0,	// (0x000627f2) cell_gallery_pane_ParamLimits

0x4bd0,	// (0x000627f2) cell_gallery_pane

0xcd9c,	// (0x0006a9be) bg_cell_gallery_focus_pane_ParamLimits

0xcd9c,	// (0x0006a9be) bg_cell_gallery_focus_pane

0xcdae,	// (0x0006a9d0) cell_gallery_pane_g1_ParamLimits

0xcdae,	// (0x0006a9d0) cell_gallery_pane_g1

0x4c1b,	// (0x0006283d) cell_gallery_pane_g2_ParamLimits

0x4c1b,	// (0x0006283d) cell_gallery_pane_g2

0x4c28,	// (0x0006284a) cell_gallery_pane_g3_ParamLimits

0x4c28,	// (0x0006284a) cell_gallery_pane_g3

0xcdba,	// (0x0006a9dc) cell_gallery_pane_g4_ParamLimits

0xcdba,	// (0x0006a9dc) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0006d2d7) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0006d2d7) cell_gallery_pane_g

0xcdc6,	// (0x0006a9e8) bg_cell_gallery_focus_pane_g1

0xcdce,	// (0x0006a9f0) bg_cell_gallery_focus_pane_g2

0xcdd6,	// (0x0006a9f8) bg_cell_gallery_focus_pane_g3

0xcdde,	// (0x0006aa00) bg_cell_gallery_focus_pane_g4

0xcde6,	// (0x0006aa08) bg_cell_gallery_focus_pane_g5

0xcdee,	// (0x0006aa10) bg_cell_gallery_focus_pane_g6

0xcdf6,	// (0x0006aa18) bg_cell_gallery_focus_pane_g7

0xcdfe,	// (0x0006aa20) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0006d2e0) bg_cell_gallery_focus_pane_g

0xce06,	// (0x0006aa28) aid_firma_cardinal

0xce1a,	// (0x0006aa3c) blid_firmament_pane_t1

0xce31,	// (0x0006aa53) blid_firmament_pane_t2

0xce48,	// (0x0006aa6a) blid_firmament_pane_t3

0xce5f,	// (0x0006aa81) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0006d2f1) blid_firmament_pane_t

0xce76,	// (0x0006aa98) blid_sat_info_pane

0xce86,	// (0x0006aaa8) blid_sat_info_pane_g1

0xce86,	// (0x0006aaa8) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0006d2fa) blid_sat_info_pane_g

0xce90,	// (0x0006aab2) blid_sat_info_pane_t1

0xce9e,	// (0x0006aac0) smil2_volume_content_pane

0xcea7,	// (0x0006aac9) smil2_volume_pane_g1

0xae44,	// (0x00068a66) smil2_volume_content_pane_g1

0xceaf,	// (0x0006aad1) smil2_volume_content_pane_g2

0xceb8,	// (0x0006aada) smil2_volume_content_pane_g3

0xcec1,	// (0x0006aae3) smil2_volume_content_pane_g4

0xceca,	// (0x0006aaec) smil2_volume_content_pane_g5

0xced3,	// (0x0006aaf5) smil2_volume_content_pane_g6

0xcedc,	// (0x0006aafe) smil2_volume_content_pane_g7

0xcee5,	// (0x0006ab07) smil2_volume_content_pane_g8

0xceee,	// (0x0006ab10) smil2_volume_content_pane_g9

0xcef7,	// (0x0006ab19) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0006d2ff) smil2_volume_content_pane_g

0x17cd,	// (0x0005f3ef) cale_week_day_heading_pane_t1_ParamLimits

0x17f5,	// (0x0005f417) cale_week_day_heading_pane_t2_ParamLimits

0x1822,	// (0x0005f444) cale_week_day_heading_pane_t3_ParamLimits

0x184f,	// (0x0005f471) cale_week_day_heading_pane_t4_ParamLimits

0x187c,	// (0x0005f49e) cale_week_day_heading_pane_t5_ParamLimits

0x18a9,	// (0x0005f4cb) cale_week_day_heading_pane_t6_ParamLimits

0x18d6,	// (0x0005f4f8) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0006cdef) cale_week_day_heading_pane_t_ParamLimits

0xab61,	// (0x00068783) bg_cale_side_pane_ParamLimits

0x18fe,	// (0x0005f520) cale_week_time_pane_t1_ParamLimits

0x1922,	// (0x0005f544) cale_week_time_pane_t2_ParamLimits

0x1946,	// (0x0005f568) cale_week_time_pane_t3_ParamLimits

0x196a,	// (0x0005f58c) cale_week_time_pane_t4_ParamLimits

0x198e,	// (0x0005f5b0) cale_week_time_pane_t5_ParamLimits

0x19b4,	// (0x0005f5d6) cale_week_time_pane_t6_ParamLimits

0x19dc,	// (0x0005f5fe) cale_week_time_pane_t7_ParamLimits

0x1a08,	// (0x0005f62a) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0006cdfe) cale_week_time_pane_t_ParamLimits

0x1a38,	// (0x0005f65a) cell_cale_week_pane_g2_ParamLimits

0xab61,	// (0x00068783) bg_cale_side_pane_cp01_ParamLimits

0x2d3b,	// (0x0006095d) cale_month_week_pane_t1_ParamLimits

0x2d54,	// (0x00060976) cale_month_week_pane_t2_ParamLimits

0x2d6d,	// (0x0006098f) cale_month_week_pane_t3_ParamLimits

0x2d86,	// (0x000609a8) cale_month_week_pane_t4_ParamLimits

0x2d9f,	// (0x000609c1) cale_month_week_pane_t5_ParamLimits

0x2dbc,	// (0x000609de) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0006ced3) cale_month_week_pane_t_ParamLimits

0x2f37,	// (0x00060b59) cell_cale_month_pane_g1_ParamLimits

0x0eaa,	// (0x0005eacc) main_cale_event_viewer_pane

0x9e84,	// (0x00067aa6) listscroll_cale_event_viewer_pane

0xcf00,	// (0x0006ab22) list_cale_ev_pane

0xcf08,	// (0x0006ab2a) scroll_pane_cp023

0x4c35,	// (0x00062857) field_cale_ev_pane_ParamLimits

0x4c35,	// (0x00062857) field_cale_ev_pane

0xcf14,	// (0x0006ab36) field_cale_ev_content_pane_ParamLimits

0xcf14,	// (0x0006ab36) field_cale_ev_content_pane

0xcf20,	// (0x0006ab42) field_cale_ev_pane_g1_ParamLimits

0xcf20,	// (0x0006ab42) field_cale_ev_pane_g1

0xcf2c,	// (0x0006ab4e) field_cale_ev_pane_g2_ParamLimits

0xcf2c,	// (0x0006ab4e) field_cale_ev_pane_g2

0xcf44,	// (0x0006ab66) field_cale_ev_pane_g3_ParamLimits

0xcf44,	// (0x0006ab66) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0006d314) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0006d314) field_cale_ev_pane_g

0xcf5c,	// (0x0006ab7e) field_cale_ev_pane_t1_ParamLimits

0xcf5c,	// (0x0006ab7e) field_cale_ev_pane_t1

0x4c59,	// (0x0006287b) field_cale_ev_content_pane_t1_ParamLimits

0x4c59,	// (0x0006287b) field_cale_ev_content_pane_t1

0xb7a8,	// (0x000693ca) bg_button_pane_cp01

0x142b,	// (0x0005f04d) listscroll_cale_week_pane_ParamLimits

0xab29,	// (0x0006874b) popup_toolbar_window_cp01

0xab32,	// (0x00068754) listscroll_cale_week_pane_t1_ParamLimits

0x142b,	// (0x0005f04d) listscroll_cale_day_pane_ParamLimits

0xab29,	// (0x0006874b) popup_toolbar_window_cp02

0xaf92,	// (0x00068bb4) listscroll_cale_day_pane_t1_ParamLimits

0x4243,	// (0x00061e65) main_cale_month_pane_ParamLimits

0x43a5,	// (0x00061fc7) popup_toolbar_window_cp03_ParamLimits

0x43a5,	// (0x00061fc7) popup_toolbar_window_cp03

0x3c9e,	// (0x000618c0) main_image_pane_g2_ParamLimits

0x3c9e,	// (0x000618c0) main_image_pane_g2

0x3caa,	// (0x000618cc) main_image_pane_g3_ParamLimits

0x3caa,	// (0x000618cc) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0006d105) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0006d105) main_image_pane_g

0xb8c2,	// (0x000694e4) main_image_pane_t1_ParamLimits

0x3cb6,	// (0x000618d8) main_image_pane_t2_ParamLimits

0x3cb6,	// (0x000618d8) main_image_pane_t2

0x3cc8,	// (0x000618ea) main_image_pane_t3_ParamLimits

0x3cc8,	// (0x000618ea) main_image_pane_t3

0x3cda,	// (0x000618fc) main_image_pane_t4_ParamLimits

0x3cda,	// (0x000618fc) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0006d10c) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0006d10c) main_image_pane_t

0x3cec,	// (0x0006190e) popup_image_details_window_cp01

0x3cf6,	// (0x00061918) popup_toobar_trans_pane_cp01_ParamLimits

0x3cf6,	// (0x00061918) popup_toobar_trans_pane_cp01

0x42e7,	// (0x00061f09) popup_image_details_window_ParamLimits

0x42e7,	// (0x00061f09) popup_image_details_window

0x42f5,	// (0x00061f17) popup_image_focus_window

0x4619,	// (0x0006223b) camera2_autofocus_pane_ParamLimits

0x4619,	// (0x0006223b) camera2_autofocus_pane

0x9e84,	// (0x00067aa6) bg_popup_sub_pane_cp06

0xcf73,	// (0x0006ab95) popup_image_focus_window_g1

0xcf7b,	// (0x0006ab9d) popup_image_focus_window_g2

0xcf83,	// (0x0006aba5) popup_image_focus_window_g3

0xcf8b,	// (0x0006abad) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0006d31b) popup_image_focus_window_g

0xcf93,	// (0x0006abb5) popup_image_focus_window_t1

0xcfa1,	// (0x0006abc3) popup_image_focus_window_t2

0xcfb1,	// (0x0006abd3) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0006d324) popup_image_focus_window_t

0xcfbf,	// (0x0006abe1) camera2_autofocus_pane_g1

0xae36,	// (0x00068a58) bg_tb_trans_pane_cp01

0xcfcd,	// (0x0006abef) popup_image_details_window_g1

0xcfe0,	// (0x0006ac02) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0006d336) popup_image_details_window_g

0xd009,	// (0x0006ac2b) popup_image_details_window_t1

0xd01b,	// (0x0006ac3d) popup_image_details_window_t2

0xd034,	// (0x0006ac56) popup_image_details_window_t3

0xd048,	// (0x0006ac6a) popup_image_details_window_t4

0xd063,	// (0x0006ac85) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0006d33d) popup_image_details_window_t

0xa5e2,	// (0x00068204) bg_calc_paper_pane_ParamLimits

0x0eaa,	// (0x0005eacc) grid_highlight_pane_cp013

0x11d1,	// (0x0005edf3) list_calc_pane_ParamLimits

0x11e3,	// (0x0005ee05) scroll_pane_cp024

0xaa14,	// (0x00068636) bg_calc_display_pane_ParamLimits

0x11eb,	// (0x0005ee0d) calc_display_pane_t1_ParamLimits

0x1200,	// (0x0005ee22) calc_display_pane_t2_ParamLimits

0x1215,	// (0x0005ee37) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0006cd6f) calc_display_pane_t_ParamLimits

0x12e5,	// (0x0005ef07) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0006cd8c) cell_calc_pane_g

0x12ee,	// (0x0005ef10) cell_calc_pane_t1

0xaa73,	// (0x00068695) grid_highlight_pane_cp02_ParamLimits

0xaa89,	// (0x000686ab) toolbar_button_pane_cp01_ParamLimits

0xaa89,	// (0x000686ab) toolbar_button_pane_cp01

0xb907,	// (0x00069529) temp_image_control_pane_ParamLimits

0xb907,	// (0x00069529) temp_image_control_pane

0x4255,	// (0x00061e77) main_mp3_pane

0xd07d,	// (0x0006ac9f) temp_image_control_pane_g1_ParamLimits

0xd07d,	// (0x0006ac9f) temp_image_control_pane_g1

0xd08b,	// (0x0006acad) temp_image_control_pane_g2_ParamLimits

0xd08b,	// (0x0006acad) temp_image_control_pane_g2

0xd09d,	// (0x0006acbf) temp_image_control_pane_g3_ParamLimits

0xd09d,	// (0x0006acbf) temp_image_control_pane_g3

0x4ca4,	// (0x000628c6) temp_image_control_pane_g4_ParamLimits

0x4ca4,	// (0x000628c6) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0006d348) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0006d348) temp_image_control_pane_g

0xd07d,	// (0x0006ac9f) main_mp3_pane_g1

0x4cb5,	// (0x000628d7) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0006d351) main_mp3_pane_g

0xd0e0,	// (0x0006ad02) main_mp3_pane_t1

0xabc4,	// (0x000687e6) main_camera_pane_g8_ParamLimits

0xabc4,	// (0x000687e6) main_camera_pane_g8

0x1cd3,	// (0x0005f8f5) main_video_pane_g7_ParamLimits

0x1cd3,	// (0x0005f8f5) main_video_pane_g7

0x475c,	// (0x0006237e) main_camera2_pane_t7_ParamLimits

0x475c,	// (0x0006237e) main_camera2_pane_t7

0xad10,	// (0x00068932) scroll_pane_cp025_ParamLimits

0xad10,	// (0x00068932) scroll_pane_cp025

0xad24,	// (0x00068946) scroll_pane_cp026_ParamLimits

0xad24,	// (0x00068946) scroll_pane_cp026

0xad33,	// (0x00068955) wml_content_pane_ParamLimits

0x0eaa,	// (0x0005eacc) main_touch_calib_pane

0x4d59,	// (0x0006297b) main_touch_calib_pane_g1

0x4d65,	// (0x00062987) main_touch_calib_pane_g2

0x4d71,	// (0x00062993) main_touch_calib_pane_g3

0x4d7d,	// (0x0006299f) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0006d36f) main_touch_calib_pane_g

0x4d89,	// (0x000629ab) main_touch_calib_pane_t1

0x4da0,	// (0x000629c2) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0006d378) main_touch_calib_pane_t

0xb4d0,	// (0x000690f2) mup_progress_pane_cp02

0xb505,	// (0x00069127) navi_pane_g1

0xb5c0,	// (0x000691e2) navi_pane_mp_t3

0x4255,	// (0x00061e77) main_mp3_pane_ParamLimits

0x43e6,	// (0x00062008) navi_pane_ParamLimits

0xd07d,	// (0x0006ac9f) main_mp3_pane_g1_ParamLimits

0x4cb5,	// (0x000628d7) main_mp3_pane_g2_ParamLimits

0x4cc1,	// (0x000628e3) main_mp3_pane_g3_ParamLimits

0x4cc1,	// (0x000628e3) main_mp3_pane_g3

0x4ccd,	// (0x000628ef) main_mp3_pane_g4_ParamLimits

0x4ccd,	// (0x000628ef) main_mp3_pane_g4

0xd0ad,	// (0x0006accf) main_mp3_pane_g5_ParamLimits

0xd0ad,	// (0x0006accf) main_mp3_pane_g5

0xd0bb,	// (0x0006acdd) main_mp3_pane_g6_ParamLimits

0xd0bb,	// (0x0006acdd) main_mp3_pane_g6

0xd0c8,	// (0x0006acea) main_mp3_pane_g7_ParamLimits

0xd0c8,	// (0x0006acea) main_mp3_pane_g7

0xd0d4,	// (0x0006acf6) main_mp3_pane_g8_ParamLimits

0xd0d4,	// (0x0006acf6) main_mp3_pane_g8

0xf72f,	// (0x0006d351) main_mp3_pane_g_ParamLimits

0x4cd9,	// (0x000628fb) main_mp3_pane_t2

0x4ce9,	// (0x0006290b) main_mp3_pane_t3

0xd0ee,	// (0x0006ad10) main_mp3_pane_t4

0xd0fc,	// (0x0006ad1e) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0006d362) main_mp3_pane_t

0xd10a,	// (0x0006ad2c) mup_progress_pane_cp01

0x0aef,	// (0x0005e711) aid_zoom_text_secondary2

0xcf00,	// (0x0006ab22) list_cale_ev2_pane

0xcf08,	// (0x0006ab2a) scroll_pane_cp023_ParamLimits

0x4dfb,	// (0x00062a1d) field_cale_ev2_pane_ParamLimits

0x4dfb,	// (0x00062a1d) field_cale_ev2_pane

0x4e16,	// (0x00062a38) field_cale_ev2_pane_g1_ParamLimits

0x4e16,	// (0x00062a38) field_cale_ev2_pane_g1

0x4e22,	// (0x00062a44) field_cale_ev2_pane_g2_ParamLimits

0x4e22,	// (0x00062a44) field_cale_ev2_pane_g2

0x4e3a,	// (0x00062a5c) field_cale_ev2_pane_g3_ParamLimits

0x4e3a,	// (0x00062a5c) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0006d383) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0006d383) field_cale_ev2_pane_g

0x4e52,	// (0x00062a74) field_cale_ev2_pane_t1_ParamLimits

0x4e52,	// (0x00062a74) field_cale_ev2_pane_t1

0x4e69,	// (0x00062a8b) field_cale_ev2_pane_t2_ParamLimits

0x4e69,	// (0x00062a8b) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0006d38c) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0006d38c) field_cale_ev2_pane_t

0x3b7d,	// (0x0006179f) main_postcard_pane_g5_ParamLimits

0x3b7d,	// (0x0006179f) main_postcard_pane_g5

0x3b8b,	// (0x000617ad) main_postcard_pane_g6_ParamLimits

0x3b8b,	// (0x000617ad) main_postcard_pane_g6

0x1b11,	// (0x0005f733) camera2_autofocus_pane_cp_ParamLimits

0x1b11,	// (0x0005f733) camera2_autofocus_pane_cp

0x4255,	// (0x00061e77) main_mup3_pane

0x4ec1,	// (0x00062ae3) main_mup3_pane_g1_ParamLimits

0x4ec1,	// (0x00062ae3) main_mup3_pane_g1

0x4ee2,	// (0x00062b04) main_mup3_pane_g2_ParamLimits

0x4ee2,	// (0x00062b04) main_mup3_pane_g2

0x4f56,	// (0x00062b78) main_mup3_pane_g3_ParamLimits

0x4f56,	// (0x00062b78) main_mup3_pane_g3

0x4fbb,	// (0x00062bdd) main_mup3_pane_g4_ParamLimits

0x4fbb,	// (0x00062bdd) main_mup3_pane_g4

0x5020,	// (0x00062c42) main_mup3_pane_g5_ParamLimits

0x5020,	// (0x00062c42) main_mup3_pane_g5

0x5085,	// (0x00062ca7) main_mup3_pane_g6_ParamLimits

0x5085,	// (0x00062ca7) main_mup3_pane_g6

0xd112,	// (0x0006ad34) main_mup3_pane_g7_ParamLimits

0xd112,	// (0x0006ad34) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0006d39c) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0006d39c) main_mup3_pane_g

0x50fb,	// (0x00062d1d) main_mup3_pane_t1_ParamLimits

0x50fb,	// (0x00062d1d) main_mup3_pane_t1

0x5166,	// (0x00062d88) main_mup3_pane_t2_ParamLimits

0x5166,	// (0x00062d88) main_mup3_pane_t2

0x522b,	// (0x00062e4d) main_mup3_pane_t4_ParamLimits

0x522b,	// (0x00062e4d) main_mup3_pane_t4

0x527f,	// (0x00062ea1) main_mup3_pane_t5_ParamLimits

0x527f,	// (0x00062ea1) main_mup3_pane_t5

0x532f,	// (0x00062f51) main_mup3_pane_t6_ParamLimits

0x532f,	// (0x00062f51) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0006d3ad) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0006d3ad) main_mup3_pane_t

0x53d9,	// (0x00062ffb) mup3_progress_pane_ParamLimits

0x53d9,	// (0x00062ffb) mup3_progress_pane

0x5457,	// (0x00063079) popup_mup3_control_window_ParamLimits

0x5457,	// (0x00063079) popup_mup3_control_window

0xd120,	// (0x0006ad42) popup_mup3_text_window

0x5474,	// (0x00063096) mup3_progress_pane_t1

0x5493,	// (0x000630b5) mup3_progress_pane_t2

0xd128,	// (0x0006ad4a) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0006d3ba) mup3_progress_pane_t

0xd145,	// (0x0006ad67) mup_progress_pane_cp03

0x9e84,	// (0x00067aa6) bg_tb_trans_pane_cp04

0x54b2,	// (0x000630d4) mup3_volume_pane

0x54ba,	// (0x000630dc) popup_mup3_control_window_g1

0xd9fd,	// (0x0006b61f) mup3_volume_pane_g1

0xda06,	// (0x0006b628) mup3_volume_pane_g2

0xda0f,	// (0x0006b631) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0006d3c1) mup3_volume_pane_g

0x9e84,	// (0x00067aa6) bg_tb_trans_pane_cp03

0xd155,	// (0x0006ad77) popup_mup3_text_window_g1

0xd15d,	// (0x0006ad7f) popup_mup3_text_window_t1

0xaa5c,	// (0x0006867e) list_calc_item_pane_g1_ParamLimits

0xcbd3,	// (0x0006a7f5) mup_volume_pane_cp_g1

0x4db9,	// (0x000629db) main_touch_calib_pane_t3

0x4dcf,	// (0x000629f1) main_touch_calib_pane_t4

0x4de5,	// (0x00062a07) main_touch_calib_pane_t5

0x0bd7,	// (0x0005e7f9) aid_cell_size_toolbar2

0x0bdf,	// (0x0005e801) aid_popup3_width_pane

0x0ae7,	// (0x0005e709) aid_zoom_text_msg_primary

0x1ae4,	// (0x0005f706) vorec_t7

0xaa20,	// (0x00068642) bg_calc_paper_pane_g1_ParamLimits

0xaa2c,	// (0x0006864e) bg_calc_paper_pane_g2_ParamLimits

0xaa38,	// (0x0006865a) bg_calc_paper_pane_g3_ParamLimits

0xaa44,	// (0x00068666) bg_calc_paper_pane_g4_ParamLimits

0xaa50,	// (0x00068672) bg_calc_paper_pane_g5_ParamLimits

0x1256,	// (0x0005ee78) bg_calc_paper_pane_g6_ParamLimits

0x1267,	// (0x0005ee89) bg_calc_paper_pane_g7_ParamLimits

0x1278,	// (0x0005ee9a) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0006cd76) bg_calc_paper_pane_g_ParamLimits

0x1289,	// (0x0005eeab) calc_bg_paper_pane_g9_ParamLimits

0x1c02,	// (0x0005f824) image_qvga_pane_ParamLimits

0x1c02,	// (0x0005f824) image_qvga_pane

0xa531,	// (0x00068153) bg_popup_sub_pane_cp04_ParamLimits

0xb83e,	// (0x00069460) popup_mup_playback_window_g1_ParamLimits

0xb84a,	// (0x0006946c) popup_mup_playback_window_t1_ParamLimits

0xb85f,	// (0x00069481) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0006d100) popup_mup_playback_window_t_ParamLimits

0x488b,	// (0x000624ad) main_mup2_pane_g3_ParamLimits

0x488b,	// (0x000624ad) main_mup2_pane_g3

0x1fc5,	// (0x0005fbe7) popup_toolbar_window_cp04

0xbc5a,	// (0x0006987c) popup_call2_audio_second_window_g3_ParamLimits

0xbc5a,	// (0x0006987c) popup_call2_audio_second_window_g3

0xc064,	// (0x00069c86) popup_call2_audio_first_window_g4_ParamLimits

0xc064,	// (0x00069c86) popup_call2_audio_first_window_g4

0xc6e3,	// (0x0006a305) popup_call2_audio_in_window_g4_ParamLimits

0xc6e3,	// (0x0006a305) popup_call2_audio_in_window_g4

0x3c91,	// (0x000618b3) aid_area_sk_bg_cut_ParamLimits

0x3c91,	// (0x000618b3) aid_area_sk_bg_cut

0xb874,	// (0x00069496) aid_area_sk_bg_cut_2_ParamLimits

0xb874,	// (0x00069496) aid_area_sk_bg_cut_2

0x4c0b,	// (0x0006282d) aid_placing_details_win

0x4c13,	// (0x00062835) aid_placing_details_win_2

0xcfbf,	// (0x0006abe1) camera2_autofocus_pane_g1_ParamLimits

0x0e36,	// (0x0005ea58) popup_fixed_preview_cale_window_ParamLimits

0x0e36,	// (0x0005ea58) popup_fixed_preview_cale_window

0xb640,	// (0x00069262) navi_slider_pane_g3

0xb649,	// (0x0006926b) navi_slider_pane_g4

0xb652,	// (0x00069274) navi_slider_pane_g5

0xb640,	// (0x00069262) navi_slider_pane_g6

0x34b4,	// (0x000610d6) navi_slider_pane_g7

0xb775,	// (0x00069397) mup_scale_pane_g3

0xb77e,	// (0x000693a0) mup_scale_pane_g4

0xb787,	// (0x000693a9) mup_scale_pane_g5

0x392f,	// (0x00061551) mup_scale_pane_g6

0x3938,	// (0x0006155a) mup_scale_pane_g7

0xb640,	// (0x00069262) cams2_slider_pane_g3

0xcc55,	// (0x0006a877) cams2_slider_pane_g4

0x4b66,	// (0x00062788) cams2_slider_pane_g5

0xb640,	// (0x00069262) cams2_slider_pane_g6

0x4b6e,	// (0x00062790) cams2_slider_pane_g7

0xce86,	// (0x0006aaa8) camera2_autofocus_pane_cp_g1

0xca42,	// (0x0006a664) bg_popup_preview_window_pane_cp02_ParamLimits

0xca42,	// (0x0006a664) bg_popup_preview_window_pane_cp02

0xd16b,	// (0x0006ad8d) list_fp_cale_pane_ParamLimits

0xd16b,	// (0x0006ad8d) list_fp_cale_pane

0xd177,	// (0x0006ad99) popup_fixed_preview_cale_window_t1_ParamLimits

0xd177,	// (0x0006ad99) popup_fixed_preview_cale_window_t1

0x54c3,	// (0x000630e5) popup_fixed_preview_cale_window_t2_ParamLimits

0x54c3,	// (0x000630e5) popup_fixed_preview_cale_window_t2

0x54d8,	// (0x000630fa) popup_fixed_preview_cale_window_t3_ParamLimits

0x54d8,	// (0x000630fa) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0006d3c8) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0006d3c8) popup_fixed_preview_cale_window_t

0x54ed,	// (0x0006310f) list_single_fp_cale_pane_ParamLimits

0x54ed,	// (0x0006310f) list_single_fp_cale_pane

0xd195,	// (0x0006adb7) list_single_fp_cale_pane_g1_ParamLimits

0xd195,	// (0x0006adb7) list_single_fp_cale_pane_g1

0xd1a1,	// (0x0006adc3) list_single_fp_cale_pane_g2_ParamLimits

0xd1a1,	// (0x0006adc3) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0006d3cf) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0006d3cf) list_single_fp_cale_pane_g

0xd1ba,	// (0x0006addc) list_single_fp_cale_pane_t1_ParamLimits

0xd1ba,	// (0x0006addc) list_single_fp_cale_pane_t1

0xd1cc,	// (0x0006adee) list_single_fp_cale_pane_t2_ParamLimits

0xd1cc,	// (0x0006adee) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0006d3d6) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0006d3d6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0eaa,	// (0x0005eacc) main_dialer_pane

0x54fd,	// (0x0006311f) aid_cell_size_keypad

0x5507,	// (0x00063129) dialer_ne_pane

0x5511,	// (0x00063133) grid_dialer_command_1_pane

0x5519,	// (0x0006313b) grid_dialer_command_2_pane

0x5521,	// (0x00063143) grid_dialer_keypad_pane

0x5535,	// (0x00063157) bg_popup_call_pane_cp06_ParamLimits

0x5535,	// (0x00063157) bg_popup_call_pane_cp06

0x5541,	// (0x00063163) dialer_ne_clear_pane_ParamLimits

0x5541,	// (0x00063163) dialer_ne_clear_pane

0xd1ff,	// (0x0006ae21) dialer_ne_pane_g1

0xd207,	// (0x0006ae29) dialer_ne_pane_t1_ParamLimits

0xd207,	// (0x0006ae29) dialer_ne_pane_t1

0x554d,	// (0x0006316f) dialer_ne_pane_t2_ParamLimits

0x554d,	// (0x0006316f) dialer_ne_pane_t2

0x556a,	// (0x0006318c) dialer_ne_pane_t3_ParamLimits

0x556a,	// (0x0006318c) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0006d3db) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0006d3db) dialer_ne_pane_t

0x558e,	// (0x000631b0) dialer_ne_pane_t3_copy1_ParamLimits

0x558e,	// (0x000631b0) dialer_ne_pane_t3_copy1

0x55b2,	// (0x000631d4) cell_dialer_keypad_pane_ParamLimits

0x55b2,	// (0x000631d4) cell_dialer_keypad_pane

0x55c9,	// (0x000631eb) cell_dialer_command_1_pane_ParamLimits

0x55c9,	// (0x000631eb) cell_dialer_command_1_pane

0x55df,	// (0x00063201) cell_dialer_command_2_pane_ParamLimits

0x55df,	// (0x00063201) cell_dialer_command_2_pane

0xd219,	// (0x0006ae3b) bg_button_pane_cp02_ParamLimits

0xd219,	// (0x0006ae3b) bg_button_pane_cp02

0x55ee,	// (0x00063210) cell_dialer_keypad_pane_g1_ParamLimits

0x55ee,	// (0x00063210) cell_dialer_keypad_pane_g1

0xd219,	// (0x0006ae3b) bg_button_pane_cp03_ParamLimits

0xd219,	// (0x0006ae3b) bg_button_pane_cp03

0x5603,	// (0x00063225) cell_dialer_command_1_pane_g1_ParamLimits

0x5603,	// (0x00063225) cell_dialer_command_1_pane_g1

0xd225,	// (0x0006ae47) bg_button_pane_cp04

0x5617,	// (0x00063239) cell_dialer_command_2_pane_g1

0xabbc,	// (0x000687de) bg_button_pane_cp06

0xd22d,	// (0x0006ae4f) dialer_ne_clear_pane_g1

0xb511,	// (0x00069133) navi_pane_g2

0xb53f,	// (0x00069161) navi_pane_g3

0x0002,

0xf3e1,	// (0x0006d003) navi_pane_g

0xb5ce,	// (0x000691f0) navi_pane_mv_g2

0xb5f7,	// (0x00069219) navi_pane_mv_g5

0x347f,	// (0x000610a1) navi_pane_mv_t1

0xaa14,	// (0x00068636) main_clock2_pane

0xe271,	// (0x0006be93) main_clock2_list_pane_ParamLimits

0xe271,	// (0x0006be93) main_clock2_list_pane

0x5672,	// (0x00063294) main_clock2_pane_t1_ParamLimits

0x5672,	// (0x00063294) main_clock2_pane_t1

0x56a0,	// (0x000632c2) main_clock2_pane_t2_ParamLimits

0x56a0,	// (0x000632c2) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0006d3e7) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0006d3e7) main_clock2_pane_t

0x5705,	// (0x00063327) popup_clock_analogue_window_cp03_ParamLimits

0x5705,	// (0x00063327) popup_clock_analogue_window_cp03

0x5723,	// (0x00063345) popup_clock_digital_window_cp02_ParamLimits

0x5723,	// (0x00063345) popup_clock_digital_window_cp02

0x5798,	// (0x000633ba) main_clock2_list_single_pane_ParamLimits

0x5798,	// (0x000633ba) main_clock2_list_single_pane

0xabbc,	// (0x000687de) list_highlight_pane_cp05

0xd265,	// (0x0006ae87) main_clock2_list_single_pane_t1

0x1fc5,	// (0x0005fbe7) popup_toolbar_window_cp04_ParamLimits

0x4c74,	// (0x00062896) camera2_autofocus_pane_g2_ParamLimits

0x4c74,	// (0x00062896) camera2_autofocus_pane_g2

0x4c80,	// (0x000628a2) camera2_autofocus_pane_g3_ParamLimits

0x4c80,	// (0x000628a2) camera2_autofocus_pane_g3

0x4c8c,	// (0x000628ae) camera2_autofocus_pane_g4_ParamLimits

0x4c8c,	// (0x000628ae) camera2_autofocus_pane_g4

0x4c98,	// (0x000628ba) camera2_autofocus_pane_g5_ParamLimits

0x4c98,	// (0x000628ba) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0006d32b) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0006d32b) camera2_autofocus_pane_g

0x4e7e,	// (0x00062aa0) camera2_autofocus_pane_cp_g2

0x4e86,	// (0x00062aa8) camera2_autofocus_pane_cp_g3

0x4e8e,	// (0x00062ab0) camera2_autofocus_pane_cp_g4

0x4e96,	// (0x00062ab8) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0006d391) camera2_autofocus_pane_cp_g

0x552d,	// (0x0006314f) popup_dialer_spcha_window

0x9e84,	// (0x00067aa6) bg_popup_sub_pane_cp07

0xd273,	// (0x0006ae95) list_spcha_pane

0xd27b,	// (0x0006ae9d) list_single_spcha_pane_ParamLimits

0xd27b,	// (0x0006ae9d) list_single_spcha_pane

0x9e84,	// (0x00067aa6) list_highlight_pane_cp06

0xd28c,	// (0x0006aeae) list_single_spcha_pane_t1

0xc48d,	// (0x0006a0af) popup_call2_audio_out_window_g4_ParamLimits

0xc48d,	// (0x0006a0af) popup_call2_audio_out_window_g4

0x0eaa,	// (0x0005eacc) main_imed2_pane

0x42ff,	// (0x00061f21) popup_imed_adjust2_window

0x4312,	// (0x00061f34) popup_imed_trans_window_ParamLimits

0x4312,	// (0x00061f34) popup_imed_trans_window

0xccbe,	// (0x0006a8e0) popup_blid_sat_info2_window_t1

0xcccc,	// (0x0006a8ee) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0006d2c0) popup_blid_sat_info2_window_t

0x584f,	// (0x00063471) aid_size_cell_colour_35

0x5869,	// (0x0006348b) aid_size_cell_colour_112

0x5880,	// (0x000634a2) aid_size_cell_effect

0xae36,	// (0x00068a58) bg_tb_trans_pane_cp02

0xb292,	// (0x00068eb4) heading_imed_pane

0x589a,	// (0x000634bc) listscroll_imed_pane

0xd29a,	// (0x0006aebc) heading_imed_pane_g1

0xd2a2,	// (0x0006aec4) heading_imed_pane_t1

0xd2b0,	// (0x0006aed2) grid_imed_colour_35_pane_ParamLimits

0xd2b0,	// (0x0006aed2) grid_imed_colour_35_pane

0x58a6,	// (0x000634c8) grid_imed_effect_pane

0xd2cc,	// (0x0006aeee) list_imed_aspect_pane

0x58b6,	// (0x000634d8) scroll_pane_cp027_ParamLimits

0x58b6,	// (0x000634d8) scroll_pane_cp027

0x58c2,	// (0x000634e4) cell_imed_effect_pane_ParamLimits

0x58c2,	// (0x000634e4) cell_imed_effect_pane

0xd2d4,	// (0x0006aef6) cell_imed_colour_pane_ParamLimits

0xd2d4,	// (0x0006aef6) cell_imed_colour_pane

0xd31e,	// (0x0006af40) cell_imed_colour_pane_g1_ParamLimits

0xd31e,	// (0x0006af40) cell_imed_colour_pane_g1

0xd32f,	// (0x0006af51) hgihlgiht_grid_pane_cp016_ParamLimits

0xd32f,	// (0x0006af51) hgihlgiht_grid_pane_cp016

0x58de,	// (0x00063500) cell_imed_effect_pane_g1

0x58e6,	// (0x00063508) grid_highlight_pane_cp017

0xd340,	// (0x0006af62) list_imed_single_pane_ParamLimits

0xd340,	// (0x0006af62) list_imed_single_pane

0x9e84,	// (0x00067aa6) list_highlight_pane_cp07

0xd354,	// (0x0006af76) list_imed_aspect_pane_comp1_t1

0xca4e,	// (0x0006a670) bg_tb_trans_pane_cp05

0xd376,	// (0x0006af98) popup_imed_adjust2_window_g1

0xd39d,	// (0x0006afbf) popup_imed_adjust2_window_t1

0xd3b5,	// (0x0006afd7) slider_imed_adjust_pane

0xd3c9,	// (0x0006afeb) slider_imed_adjust_pane_g1

0xd3d9,	// (0x0006affb) slider_imed_adjust_pane_g2

0xd3e9,	// (0x0006b00b) slider_imed_adjust_pane_g3

0xd3fa,	// (0x0006b01c) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0006d404) slider_imed_adjust_pane_g

0x58ef,	// (0x00063511) aid_size_cell_clipart2

0xd40b,	// (0x0006b02d) grid_imed_clipart_pane

0xd415,	// (0x0006b037) scroll_pane_cp031

0x58fb,	// (0x0006351d) cell_imed_clipart_pane_ParamLimits

0x58fb,	// (0x0006351d) cell_imed_clipart_pane

0x5919,	// (0x0006353b) cell_imed_clipart_pane_g1

0x9e84,	// (0x00067aa6) grid_highlight_pane_cp014

0x5654,	// (0x00063276) main_clock2_pane_g1_ParamLimits

0x5654,	// (0x00063276) main_clock2_pane_g1

0x573f,	// (0x00063361) aid_call2_pane_cp10

0x5751,	// (0x00063373) aid_call_pane_cp10

0xb470,	// (0x00069092) popup_clock_analogue_window_cp10_g1

0xb470,	// (0x00069092) popup_clock_analogue_window_cp10_g2

0x5763,	// (0x00063385) popup_clock_analogue_window_cp10_g3

0x5763,	// (0x00063385) popup_clock_analogue_window_cp10_g4

0xb470,	// (0x00069092) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0006d3f2) popup_clock_analogue_window_cp10_g

0x5779,	// (0x0006339b) popup_clock_analogue_window_cp10_t1

0x57aa,	// (0x000633cc) clock_digital_number_pane_cp10_ParamLimits

0x57aa,	// (0x000633cc) clock_digital_number_pane_cp10

0x57c4,	// (0x000633e6) clock_digital_number_pane_cp11_ParamLimits

0x57c4,	// (0x000633e6) clock_digital_number_pane_cp11

0x57de,	// (0x00063400) clock_digital_number_pane_cp12_ParamLimits

0x57de,	// (0x00063400) clock_digital_number_pane_cp12

0x57f8,	// (0x0006341a) clock_digital_number_pane_cp13_ParamLimits

0x57f8,	// (0x0006341a) clock_digital_number_pane_cp13

0x5814,	// (0x00063436) clock_digital_separator_pane_cp10_ParamLimits

0x5814,	// (0x00063436) clock_digital_separator_pane_cp10

0x582e,	// (0x00063450) popup_clock_digital_window_cp02_t1_ParamLimits

0x582e,	// (0x00063450) popup_clock_digital_window_cp02_t1

0xa529,	// (0x0006814b) clock_digital_number_pane_cp10_g1

0xa529,	// (0x0006814b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0006d40d) clock_digital_number_pane_cp10_g

0xa529,	// (0x0006814b) clock_digital_separator_pane_cp10_g1

0xa529,	// (0x0006814b) clock_digital_separator_pane_g2_cp10

0xb5ff,	// (0x00069221) navi_pane_vded_g4

0xb608,	// (0x0006922a) navi_pane_vded_g5

0xb611,	// (0x00069233) navi_pane_vded_t1

0x0eaa,	// (0x0005eacc) main_vded_pane

0x5922,	// (0x00063544) main_vded_pane_g1

0x592e,	// (0x00063550) main_vded_pane_g2

0x5938,	// (0x0006355a) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0006d412) main_vded_pane_g

0x5942,	// (0x00063564) main_vded_pane_t1

0x5950,	// (0x00063572) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0006d419) main_vded_pane_t

0x595e,	// (0x00063580) vded_slider_pane

0x5968,	// (0x0006358a) vded_video_pane

0xd41d,	// (0x0006b03f) vded_video_pane_g1

0x5974,	// (0x00063596) vded_video_pane_g2

0xce86,	// (0x0006aaa8) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0006d41e) vded_video_pane_g

0xd427,	// (0x0006b049) vded_slider_pane_g1

0xcbd3,	// (0x0006a7f5) vded_slider_pane_g2

0xd430,	// (0x0006b052) vded_slider_pane_g3

0xd439,	// (0x0006b05b) vded_slider_pane_g4

0xd442,	// (0x0006b064) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0006d425) vded_slider_pane_g

0x544b,	// (0x0006306d) mup3_rocker_pane_ParamLimits

0x544b,	// (0x0006306d) mup3_rocker_pane

0x597d,	// (0x0006359f) mup3_control_keys_pane_g1

0x5985,	// (0x000635a7) mup3_control_keys_pane_g2

0x598d,	// (0x000635af) mup3_control_keys_pane_g3

0x5995,	// (0x000635b7) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0006d430) mup3_control_keys_pane_g

0x0e5e,	// (0x0005ea80) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0e5e,	// (0x0005ea80) popup_toolbar2_fixed_window_cp01

0x5467,	// (0x00063089) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5467,	// (0x00063089) popup_toolbar2_fixed_window_cp02

0xbdcc,	// (0x000699ee) popup_call2_audio_second_window_t4_ParamLimits

0xbdcc,	// (0x000699ee) popup_call2_audio_second_window_t4

0xc2fa,	// (0x00069f1c) popup_call2_audio_first_window_t6_ParamLimits

0xc2fa,	// (0x00069f1c) popup_call2_audio_first_window_t6

0xc590,	// (0x0006a1b2) popup_call2_audio_out_window_t6_ParamLimits

0xc590,	// (0x0006a1b2) popup_call2_audio_out_window_t6

0x0eaa,	// (0x0005eacc) main_vitu_pane

0x59a5,	// (0x000635c7) aid_size_cell_itu_ParamLimits

0x59a5,	// (0x000635c7) aid_size_cell_itu

0xe271,	// (0x0006be93) bg_popup_window_pane_cp08_ParamLimits

0xe271,	// (0x0006be93) bg_popup_window_pane_cp08

0x59b3,	// (0x000635d5) field_vitu_entry_pane_ParamLimits

0x59b3,	// (0x000635d5) field_vitu_entry_pane

0x59c2,	// (0x000635e4) grid_vitu_function_pane_ParamLimits

0x59c2,	// (0x000635e4) grid_vitu_function_pane

0x59d2,	// (0x000635f4) grid_vitu_itu_pane_ParamLimits

0x59d2,	// (0x000635f4) grid_vitu_itu_pane

0x59e2,	// (0x00063604) cell_vitu_itu_pane_ParamLimits

0x59e2,	// (0x00063604) cell_vitu_itu_pane

0x59f9,	// (0x0006361b) cell_vitu_function_pane_ParamLimits

0x59f9,	// (0x0006361b) cell_vitu_function_pane

0xae36,	// (0x00068a58) bg_popup_sub_pane_cp08_ParamLimits

0xae36,	// (0x00068a58) bg_popup_sub_pane_cp08

0x5a0d,	// (0x0006362f) field_vitu_entry_pane_t1_ParamLimits

0x5a0d,	// (0x0006362f) field_vitu_entry_pane_t1

0xd463,	// (0x0006b085) field_vitu_entry_pane_t2_ParamLimits

0xd463,	// (0x0006b085) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0006d43e) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0006d43e) field_vitu_entry_pane_t

0xd480,	// (0x0006b0a2) bg_button_pane_cp05_ParamLimits

0xd480,	// (0x0006b0a2) bg_button_pane_cp05

0x5a27,	// (0x00063649) cell_vitu_itu_pane_g1

0x5a3f,	// (0x00063661) cell_vitu_itu_pane_t1_ParamLimits

0x5a3f,	// (0x00063661) cell_vitu_itu_pane_t1

0x5a51,	// (0x00063673) cell_vitu_itu_pane_t2_ParamLimits

0x5a51,	// (0x00063673) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0006d443) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0006d443) cell_vitu_itu_pane_t

0xd48e,	// (0x0006b0b0) bg_button_pane_cp07

0x5a94,	// (0x000636b6) cell_vitu_function_pane_g1

0x10f8,	// (0x0005ed1a) main_calc_pane_g1

0x0c13,	// (0x0005e835) aid_visual_content_pane

0x0eaa,	// (0x0005eacc) main_vradio_pane

0x5a9d,	// (0x000636bf) main_vradio_pane_g1_ParamLimits

0x5a9d,	// (0x000636bf) main_vradio_pane_g1

0xd498,	// (0x0006b0ba) main_vradio_pane_g2_ParamLimits

0xd498,	// (0x0006b0ba) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0006d44a) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0006d44a) main_vradio_pane_g

0x5aab,	// (0x000636cd) main_vradio_pane_t1_ParamLimits

0x5aab,	// (0x000636cd) main_vradio_pane_t1

0x5abd,	// (0x000636df) main_vradio_pane_t2_ParamLimits

0x5abd,	// (0x000636df) main_vradio_pane_t2

0xd4a5,	// (0x0006b0c7) main_vradio_pane_t3_ParamLimits

0xd4a5,	// (0x0006b0c7) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0006d44f) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0006d44f) main_vradio_pane_t

0x5acf,	// (0x000636f1) vradio_rocker_control_pane_ParamLimits

0x5acf,	// (0x000636f1) vradio_rocker_control_pane

0x5adb,	// (0x000636fd) vradio_station_info_pane_ParamLimits

0x5adb,	// (0x000636fd) vradio_station_info_pane

0xd4b9,	// (0x0006b0db) vradio_frequency_info_pane_ParamLimits

0xd4b9,	// (0x0006b0db) vradio_frequency_info_pane

0xce86,	// (0x0006aaa8) vradio_station_info_pane_g1

0xd4c8,	// (0x0006b0ea) vradio_station_info_pane_t1_ParamLimits

0xd4c8,	// (0x0006b0ea) vradio_station_info_pane_t1

0xd4ea,	// (0x0006b10c) vradio_station_info_pane_t2_ParamLimits

0xd4ea,	// (0x0006b10c) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0006d456) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0006d456) vradio_station_info_pane_t

0xd4fc,	// (0x0006b11e) vradio_tuning_pane

0xd504,	// (0x0006b126) vradio_rocker_control_pane_g1

0xd50c,	// (0x0006b12e) vradio_rocker_control_pane_g2

0xd514,	// (0x0006b136) vradio_rocker_control_pane_g3

0xd51c,	// (0x0006b13e) vradio_rocker_control_pane_g4

0xd524,	// (0x0006b146) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0006d45b) vradio_rocker_control_pane_g

0x5ae8,	// (0x0006370a) vradio_frequency_info_pane_g1

0xd52c,	// (0x0006b14e) vradio_frequency_info_pane_t1_ParamLimits

0xd52c,	// (0x0006b14e) vradio_frequency_info_pane_t1

0x5af2,	// (0x00063714) vradio_tuning_pane_g1

0x5afd,	// (0x0006371f) vradio_tuning_pane_t1

0x0c5c,	// (0x0005e87e) area_side_right_pane_ParamLimits

0x0c5c,	// (0x0005e87e) area_side_right_pane

0xca09,	// (0x0006a62b) status_small_pane_g1

0xca11,	// (0x0006a633) status_small_pane_g2

0xca1a,	// (0x0006a63c) status_small_pane_g3

0xca23,	// (0x0006a645) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0006d216) status_small_pane_g

0xca2c,	// (0x0006a64e) status_small_pane_t1

0x0eaa,	// (0x0005eacc) main_video3_pane

0xd540,	// (0x0006b162) cams_zoom_vslider_pane

0xd548,	// (0x0006b16a) image3_wide_pane_ParamLimits

0xd548,	// (0x0006b16a) image3_wide_pane

0xd562,	// (0x0006b184) image3_wide_small_pane

0xd56e,	// (0x0006b190) main_video3_pane_g1_ParamLimits

0xd56e,	// (0x0006b190) main_video3_pane_g1

0xd596,	// (0x0006b1b8) main_video3_pane_g2_ParamLimits

0xd596,	// (0x0006b1b8) main_video3_pane_g2

0x0001,

0xf844,	// (0x0006d466) main_video3_pane_g_ParamLimits

0xf844,	// (0x0006d466) main_video3_pane_g

0xd5b2,	// (0x0006b1d4) main_video3_pane_t1_ParamLimits

0xd5b2,	// (0x0006b1d4) main_video3_pane_t1

0xd5dd,	// (0x0006b1ff) main_video3_pane_t2_ParamLimits

0xd5dd,	// (0x0006b1ff) main_video3_pane_t2

0xd60a,	// (0x0006b22c) main_video3_pane_t3_ParamLimits

0xd60a,	// (0x0006b22c) main_video3_pane_t3

0x0002,

0xf849,	// (0x0006d46b) main_video3_pane_t_ParamLimits

0xf849,	// (0x0006d46b) main_video3_pane_t

0xd637,	// (0x0006b259) cams_zoom_vslider_pane_g1

0xd640,	// (0x0006b262) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0006d472) cams_zoom_vslider_pane_g

0xd648,	// (0x0006b26a) small_slider_vertical_pane

0xce86,	// (0x0006aaa8) small_slider_vertical_pane_g1

0xce86,	// (0x0006aaa8) small_slider_vertical_pane_g2

0xd650,	// (0x0006b272) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0006d477) small_slider_vertical_pane_g

0x0eaa,	// (0x0005eacc) main_hwr_training_pane

0xd659,	// (0x0006b27b) hwr_training_instruct_pane_ParamLimits

0xd659,	// (0x0006b27b) hwr_training_instruct_pane

0x5b0c,	// (0x0006372e) hwr_training_navi_pane_ParamLimits

0x5b0c,	// (0x0006372e) hwr_training_navi_pane

0x5b26,	// (0x00063748) hwr_training_write_pane_ParamLimits

0x5b26,	// (0x00063748) hwr_training_write_pane

0x9e84,	// (0x00067aa6) bg_frame_shadow_pane

0xd690,	// (0x0006b2b2) hwr_training_write_pane_g1

0xd698,	// (0x0006b2ba) hwr_training_write_pane_g2

0xd6a0,	// (0x0006b2c2) hwr_training_write_pane_g3

0xd6a8,	// (0x0006b2ca) hwr_training_write_pane_g4

0xd6b0,	// (0x0006b2d2) hwr_training_write_pane_g5

0xd6b8,	// (0x0006b2da) hwr_training_write_pane_g6

0xd6c0,	// (0x0006b2e2) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0006d47e) hwr_training_write_pane_g

0x5b5e,	// (0x00063780) hwr_training_navi_pane_g1_ParamLimits

0x5b5e,	// (0x00063780) hwr_training_navi_pane_g1

0x5b70,	// (0x00063792) hwr_training_navi_pane_g2_ParamLimits

0x5b70,	// (0x00063792) hwr_training_navi_pane_g2

0x5b82,	// (0x000637a4) hwr_training_navi_pane_g3_ParamLimits

0x5b82,	// (0x000637a4) hwr_training_navi_pane_g3

0x5b92,	// (0x000637b4) hwr_training_navi_pane_g4_ParamLimits

0x5b92,	// (0x000637b4) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0006d48d) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0006d48d) hwr_training_navi_pane_g

0x5bac,	// (0x000637ce) hwr_training_navi_pane_t1

0x5bba,	// (0x000637dc) list_single_hwr_training_instruct_pane_ParamLimits

0x5bba,	// (0x000637dc) list_single_hwr_training_instruct_pane

0xd6c8,	// (0x0006b2ea) list_single_hwr_training_instruct_pane_t1

0xcdc6,	// (0x0006a9e8) bg_frame_shadow_pane_g1

0xd6d7,	// (0x0006b2f9) bg_frame_shadow_pane_g2

0xd6df,	// (0x0006b301) bg_frame_shadow_pane_g3

0xd6e7,	// (0x0006b309) bg_frame_shadow_pane_g4

0xd6ef,	// (0x0006b311) bg_frame_shadow_pane_g5

0xd6f7,	// (0x0006b319) bg_frame_shadow_pane_g6

0xd6ff,	// (0x0006b321) bg_frame_shadow_pane_g7

0xaacd,	// (0x000686ef) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0006d498) bg_frame_shadow_pane_g

0x0eaa,	// (0x0005eacc) main_video_tele_dialer_pane

0x5bd3,	// (0x000637f5) aid_size_cell_video_keypad_ParamLimits

0x5bd3,	// (0x000637f5) aid_size_cell_video_keypad

0x5be3,	// (0x00063805) grid_video_dialer_keypad_pane_ParamLimits

0x5be3,	// (0x00063805) grid_video_dialer_keypad_pane

0x5c15,	// (0x00063837) video_down_pane_cp_ParamLimits

0x5c15,	// (0x00063837) video_down_pane_cp

0x5c3f,	// (0x00063861) cell_video_dialer_keypad_pane_ParamLimits

0x5c3f,	// (0x00063861) cell_video_dialer_keypad_pane

0xd707,	// (0x0006b329) bg_button_pane_cp08_ParamLimits

0xd707,	// (0x0006b329) bg_button_pane_cp08

0x5c56,	// (0x00063878) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c56,	// (0x00063878) cell_video_dialer_keypad_pane_g1

0x543f,	// (0x00063061) mup3_rocker2_pane_ParamLimits

0x543f,	// (0x00063061) mup3_rocker2_pane

0xce86,	// (0x0006aaa8) mup3_rocker2_pane_g1

0x4263,	// (0x00061e85) main_dialer2_pane

0x0eaa,	// (0x0005eacc) main_mp4_pane

0x5caf,	// (0x000638d1) main_mp4_pane_g1_ParamLimits

0x5caf,	// (0x000638d1) main_mp4_pane_g1

0x5cbd,	// (0x000638df) main_mp4_pane_g2_ParamLimits

0x5cbd,	// (0x000638df) main_mp4_pane_g2

0x5ccb,	// (0x000638ed) main_mp4_pane_g3_ParamLimits

0x5ccb,	// (0x000638ed) main_mp4_pane_g3

0x5d1e,	// (0x00063940) main_mp4_pane_g4_ParamLimits

0x5d1e,	// (0x00063940) main_mp4_pane_g4

0x5d4c,	// (0x0006396e) main_mp4_pane_g5_ParamLimits

0x5d4c,	// (0x0006396e) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0006d4b8) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0006d4b8) main_mp4_pane_g

0x5dc0,	// (0x000639e2) main_mp4_pane_t1_ParamLimits

0x5dc0,	// (0x000639e2) main_mp4_pane_t1

0x5e1c,	// (0x00063a3e) main_mp4_pane_t2_ParamLimits

0x5e1c,	// (0x00063a3e) main_mp4_pane_t2

0xd713,	// (0x0006b335) main_mp4_pane_t3_ParamLimits

0xd713,	// (0x0006b335) main_mp4_pane_t3

0x5e6e,	// (0x00063a90) main_mp4_pane_t4_ParamLimits

0x5e6e,	// (0x00063a90) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0006d4c9) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0006d4c9) main_mp4_pane_t

0x5eae,	// (0x00063ad0) mp4_progress_pane_ParamLimits

0x5eae,	// (0x00063ad0) mp4_progress_pane

0x5ef8,	// (0x00063b1a) mp4_rocker_pane_ParamLimits

0x5ef8,	// (0x00063b1a) mp4_rocker_pane

0xd741,	// (0x0006b363) mp4_progress_pane_t1

0xd75a,	// (0x0006b37c) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0006d4d2) mp4_progress_pane_t

0xd773,	// (0x0006b395) mup_progress_pane_cp04

0xde28,	// (0x0006ba4a) mp4_rocker_pane_g1

0x5f18,	// (0x00063b3a) aid_cell_size_keypad2_ParamLimits

0x5f18,	// (0x00063b3a) aid_cell_size_keypad2

0x5f28,	// (0x00063b4a) dialer2_ne_pane_ParamLimits

0x5f28,	// (0x00063b4a) dialer2_ne_pane

0x5f34,	// (0x00063b56) grid_dialer2_keypad_pane_ParamLimits

0x5f34,	// (0x00063b56) grid_dialer2_keypad_pane

0xde32,	// (0x0006ba54) bg_popup_call_pane_cp07_ParamLimits

0xde32,	// (0x0006ba54) bg_popup_call_pane_cp07

0x5f42,	// (0x00063b64) dialer2_ne_pane_t1_ParamLimits

0x5f42,	// (0x00063b64) dialer2_ne_pane_t1

0x5f67,	// (0x00063b89) cell_dialer2_keypad_pane_ParamLimits

0x5f67,	// (0x00063b89) cell_dialer2_keypad_pane

0xd798,	// (0x0006b3ba) bg_button_pane_pane_cp04_ParamLimits

0xd798,	// (0x0006b3ba) bg_button_pane_pane_cp04

0x5f7e,	// (0x00063ba0) cell_dialer2_keypad_pane_g1_ParamLimits

0x5f7e,	// (0x00063ba0) cell_dialer2_keypad_pane_g1

0x1e97,	// (0x0005fab9) aid_placing_vt_set_content_ParamLimits

0x1e97,	// (0x0005fab9) aid_placing_vt_set_content

0x1ebf,	// (0x0005fae1) aid_placing_vt_set_title_ParamLimits

0x1ebf,	// (0x0005fae1) aid_placing_vt_set_title

0x0eaa,	// (0x0005eacc) main_image3_pane

0x6018,	// (0x00063c3a) area_side_right_pane_cp01_ParamLimits

0x6018,	// (0x00063c3a) area_side_right_pane_cp01

0x6047,	// (0x00063c69) main_image3_pane_g1_ParamLimits

0x6047,	// (0x00063c69) main_image3_pane_g1

0x6055,	// (0x00063c77) main_image3_pane_g2_ParamLimits

0x6055,	// (0x00063c77) main_image3_pane_g2

0x606e,	// (0x00063c90) main_image3_pane_g3_ParamLimits

0x606e,	// (0x00063c90) main_image3_pane_g3

0x6087,	// (0x00063ca9) main_image3_pane_g4_ParamLimits

0x6087,	// (0x00063ca9) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0006d4e1) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0006d4e1) main_image3_pane_g

0x60a0,	// (0x00063cc2) main_image3_pane_t1_ParamLimits

0x60a0,	// (0x00063cc2) main_image3_pane_t1

0x60c5,	// (0x00063ce7) main_image3_pane_t2_ParamLimits

0x60c5,	// (0x00063ce7) main_image3_pane_t2

0x60e4,	// (0x00063d06) main_image3_pane_t3_ParamLimits

0x60e4,	// (0x00063d06) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0006d4ea) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0006d4ea) main_image3_pane_t

0xe271,	// (0x0006be93) grid_sctrl_middle_pane_cp01_ParamLimits

0xe271,	// (0x0006be93) grid_sctrl_middle_pane_cp01

0x6145,	// (0x00063d67) cell_sctrl_middle_pane_cp01_ParamLimits

0x6145,	// (0x00063d67) cell_sctrl_middle_pane_cp01

0x6156,	// (0x00063d78) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6156,	// (0x00063d78) cell_sctrl_middle_pane_cp01_g1

0x0eaa,	// (0x0005eacc) main_call4_pane

0x6163,	// (0x00063d85) aid_size_button_call4_ParamLimits

0x6163,	// (0x00063d85) aid_size_button_call4

0x6199,	// (0x00063dbb) call4_windows_pane_ParamLimits

0x6199,	// (0x00063dbb) call4_windows_pane

0x61ae,	// (0x00063dd0) grid_call4_button_pane_ParamLimits

0x61ae,	// (0x00063dd0) grid_call4_button_pane

0x61de,	// (0x00063e00) call4_windows_conf_pane

0x61f9,	// (0x00063e1b) popup_call4_audio_first_window_ParamLimits

0x61f9,	// (0x00063e1b) popup_call4_audio_first_window

0x624b,	// (0x00063e6d) popup_call4_audio_second_window_ParamLimits

0x624b,	// (0x00063e6d) popup_call4_audio_second_window

0x6264,	// (0x00063e86) popup_call4_audio_wait_window_ParamLimits

0x6264,	// (0x00063e86) popup_call4_audio_wait_window

0x6272,	// (0x00063e94) cell_call4_button_pane_ParamLimits

0x6272,	// (0x00063e94) cell_call4_button_pane

0x6295,	// (0x00063eb7) bg_button_pane_cp09_ParamLimits

0x6295,	// (0x00063eb7) bg_button_pane_cp09

0x62a1,	// (0x00063ec3) cell_call4_button_pane_g1_ParamLimits

0x62a1,	// (0x00063ec3) cell_call4_button_pane_g1

0x62ae,	// (0x00063ed0) cell_call4_button_pane_t1_ParamLimits

0x62ae,	// (0x00063ed0) cell_call4_button_pane_t1

0xd7ac,	// (0x0006b3ce) popup_call4_audio_conf_window_ParamLimits

0xd7ac,	// (0x0006b3ce) popup_call4_audio_conf_window

0x5474,	// (0x00063096) mup3_progress_pane_t1_ParamLimits

0x5493,	// (0x000630b5) mup3_progress_pane_t2_ParamLimits

0xd128,	// (0x0006ad4a) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0006d3ba) mup3_progress_pane_t_ParamLimits

0xd145,	// (0x0006ad67) mup_progress_pane_cp03_ParamLimits

0x599d,	// (0x000635bf) mup3_control_keys_pane_g4_copy1

0x5edc,	// (0x00063afe) mp4_rocker2_pane_ParamLimits

0x5edc,	// (0x00063afe) mp4_rocker2_pane

0xd7c6,	// (0x0006b3e8) mp4_rocker2_pane_g1

0xd7ce,	// (0x0006b3f0) mp4_rocker2_pane_g2

0x62f2,	// (0x00063f14) mp4_rocker2_pane_g3

0x62fa,	// (0x00063f1c) mp4_rocker2_pane_g4

0x6302,	// (0x00063f24) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0006d4f3) mp4_rocker2_pane_g

0x0eaa,	// (0x0005eacc) main_camera4_pane

0x0eaa,	// (0x0005eacc) main_video4_pane

0x5bf1,	// (0x00063813) main_video_tele_dialer_pane_t1_ParamLimits

0x5bf1,	// (0x00063813) main_video_tele_dialer_pane_t1

0x5c03,	// (0x00063825) main_video_tele_dialer_pane_t2_ParamLimits

0x5c03,	// (0x00063825) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0006d4a9) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0006d4a9) main_video_tele_dialer_pane_t

0x6322,	// (0x00063f44) cam4_autofocus_pane_ParamLimits

0x6322,	// (0x00063f44) cam4_autofocus_pane

0x633a,	// (0x00063f5c) cam4_image_uncrop_pane_ParamLimits

0x633a,	// (0x00063f5c) cam4_image_uncrop_pane

0x6353,	// (0x00063f75) cam4_indicators_pane_ParamLimits

0x6353,	// (0x00063f75) cam4_indicators_pane

0x636f,	// (0x00063f91) main_camera4_pane_g1_ParamLimits

0x636f,	// (0x00063f91) main_camera4_pane_g1

0x637b,	// (0x00063f9d) main_camera4_pane_g2_ParamLimits

0x637b,	// (0x00063f9d) main_camera4_pane_g2

0x637b,	// (0x00063f9d) main_camera4_pane_g3_ParamLimits

0x637b,	// (0x00063f9d) main_camera4_pane_g3

0x6387,	// (0x00063fa9) main_camera4_pane_g4_ParamLimits

0x6387,	// (0x00063fa9) main_camera4_pane_g4

0x6393,	// (0x00063fb5) main_camera4_pane_g5_ParamLimits

0x6393,	// (0x00063fb5) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0006d4fe) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0006d4fe) main_camera4_pane_g

0x63ad,	// (0x00063fcf) main_camera4_pane_t1_ParamLimits

0x63ad,	// (0x00063fcf) main_camera4_pane_t1

0x63f7,	// (0x00064019) bg_tb_trans_pane_cp06

0x640d,	// (0x0006402f) cam4_indicators_pane_g1

0x641e,	// (0x00064040) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0006d519) cam4_indicators_pane_g

0x6436,	// (0x00064058) cam4_indicators_pane_t1

0x6460,	// (0x00064082) main_video4_pane_g1_ParamLimits

0x6460,	// (0x00064082) main_video4_pane_g1

0x646c,	// (0x0006408e) main_video4_pane_g2_ParamLimits

0x646c,	// (0x0006408e) main_video4_pane_g2

0x6478,	// (0x0006409a) main_video4_pane_g3_ParamLimits

0x6478,	// (0x0006409a) main_video4_pane_g3

0x6484,	// (0x000640a6) main_video4_pane_g4_ParamLimits

0x6484,	// (0x000640a6) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0006d520) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0006d520) main_video4_pane_g

0x64a6,	// (0x000640c8) vid4_indicators_pane_ParamLimits

0x64a6,	// (0x000640c8) vid4_indicators_pane

0x64c5,	// (0x000640e7) video4_image_uncrop_cif_pane_ParamLimits

0x64c5,	// (0x000640e7) video4_image_uncrop_cif_pane

0x64d4,	// (0x000640f6) video4_image_uncrop_nhd_pane_ParamLimits

0x64d4,	// (0x000640f6) video4_image_uncrop_nhd_pane

0x633a,	// (0x00063f5c) video4_image_uncrop_vga_pane_ParamLimits

0x633a,	// (0x00063f5c) video4_image_uncrop_vga_pane

0x4255,	// (0x00061e77) bg_tb_trans_pane_cp07

0x64ed,	// (0x0006410f) vid4_indicators_pane_g1

0x6503,	// (0x00064125) vid4_indicators_pane_g2

0x6517,	// (0x00064139) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0006d52b) vid4_indicators_pane_g

0x6548,	// (0x0006416a) vid4_indicators_pane_t1

0x655f,	// (0x00064181) cam4_autofocus_pane_g1

0x6567,	// (0x00064189) cam4_autofocus_pane_g2

0x656f,	// (0x00064191) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0006d536) cam4_autofocus_pane_g

0x6577,	// (0x00064199) cam4_autofocus_pane_g3_copy1

0x5c23,	// (0x00063845) video_down_pane_cp_t1

0x5c31,	// (0x00063853) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0006d4ae) video_down_pane_cp_t

0x0e90,	// (0x0005eab2) popup_vitu2_window_ParamLimits

0x0e90,	// (0x0005eab2) popup_vitu2_window

0x657f,	// (0x000641a1) aid_size_cell2_itu2_ParamLimits

0x657f,	// (0x000641a1) aid_size_cell2_itu2

0x65a1,	// (0x000641c3) aid_size_cell_itu2_ParamLimits

0x65a1,	// (0x000641c3) aid_size_cell_itu2

0x65e7,	// (0x00064209) bg_popup_window_pane_cp09_ParamLimits

0x65e7,	// (0x00064209) bg_popup_window_pane_cp09

0x65f5,	// (0x00064217) field_vitu2_entry_pane_ParamLimits

0x65f5,	// (0x00064217) field_vitu2_entry_pane

0x6615,	// (0x00064237) grid_vitu2_function_pane_ParamLimits

0x6615,	// (0x00064237) grid_vitu2_function_pane

0x6659,	// (0x0006427b) grid_vitu2_itu_pane_ParamLimits

0x6659,	// (0x0006427b) grid_vitu2_itu_pane

0x66d1,	// (0x000642f3) cell_vitu2_itu_pane_ParamLimits

0x66d1,	// (0x000642f3) cell_vitu2_itu_pane

0x66ec,	// (0x0006430e) cell_vitu2_function_pane_ParamLimits

0x66ec,	// (0x0006430e) cell_vitu2_function_pane

0xd7d6,	// (0x0006b3f8) bg_popup_call_pane_cp08_ParamLimits

0xd7d6,	// (0x0006b3f8) bg_popup_call_pane_cp08

0xd7ed,	// (0x0006b40f) field_vitu2_entry_pane_g1

0xd7f9,	// (0x0006b41b) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0006d53d) field_vitu2_entry_pane_g

0x6730,	// (0x00064352) field_vitu2_entry_pane_t1_ParamLimits

0x6730,	// (0x00064352) field_vitu2_entry_pane_t1

0xa602,	// (0x00068224) field_vitu2_entry_pane_t2_ParamLimits

0xa602,	// (0x00068224) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0006d544) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0006d544) field_vitu2_entry_pane_t

0x6760,	// (0x00064382) bg_button_pane_cp010_ParamLimits

0x6760,	// (0x00064382) bg_button_pane_cp010

0x676e,	// (0x00064390) cell_vitu2_itu_pane_g1

0x678e,	// (0x000643b0) cell_vitu2_itu_pane_t1_ParamLimits

0x678e,	// (0x000643b0) cell_vitu2_itu_pane_t1

0x0af7,	// (0x0005e719) cell_vitu2_itu_pane_t2_ParamLimits

0x0af7,	// (0x0005e719) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0006d54e) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0006d54e) cell_vitu2_itu_pane_t

0x4255,	// (0x00061e77) bg_button_pane_cp011

0x67da,	// (0x000643fc) cell_vitu2_function_pane_g1

0x0eaa,	// (0x0005eacc) main_myfav_hc_pane

0x6126,	// (0x00063d48) popup_image3_note_pane_ParamLimits

0x6126,	// (0x00063d48) popup_image3_note_pane

0x6134,	// (0x00063d56) popup_image3_tool_bar_pane_ParamLimits

0x6134,	// (0x00063d56) popup_image3_tool_bar_pane

0x0b6d,	// (0x0005e78f) cell_vitu2_itu_pane_t3_ParamLimits

0x0b6d,	// (0x0005e78f) cell_vitu2_itu_pane_t3

0x9e84,	// (0x00067aa6) bg_popup_trans_pane

0xd81b,	// (0x0006b43d) grid_image3_tool_bar_pane

0xd825,	// (0x0006b447) bg_popup_trans_pane_g1

0xae19,	// (0x00068a3b) bg_popup_trans_pane_g2

0xd82d,	// (0x0006b44f) bg_popup_trans_pane_g3

0xd835,	// (0x0006b457) bg_popup_trans_pane_g4

0xd83d,	// (0x0006b45f) bg_popup_trans_pane_g5

0xd845,	// (0x0006b467) bg_popup_trans_pane_g6

0xd84d,	// (0x0006b46f) bg_popup_trans_pane_g7

0xd855,	// (0x0006b477) bg_popup_trans_pane_g8

0xadf9,	// (0x00068a1b) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0006d555) bg_popup_trans_pane_g

0xd85d,	// (0x0006b47f) cell_image3_tool_bar_pane_ParamLimits

0xd85d,	// (0x0006b47f) cell_image3_tool_bar_pane

0xce86,	// (0x0006aaa8) cell_image3_tool_bar_pane_g1

0x9e84,	// (0x00067aa6) bg_popup_trans_pane_cp1

0xd873,	// (0x0006b495) popup_image3_note_pane_t1

0xd881,	// (0x0006b4a3) popup_image3_note_pane_t2

0xd88f,	// (0x0006b4b1) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0006d568) popup_image3_note_pane_t

0xd89f,	// (0x0006b4c1) popup_image3_note_pane_t3_copy1

0x67ee,	// (0x00064410) bg_myfav_hc_instruction_pane_ParamLimits

0x67ee,	// (0x00064410) bg_myfav_hc_instruction_pane

0x6806,	// (0x00064428) cell_myfav_contact_pane_ParamLimits

0x6806,	// (0x00064428) cell_myfav_contact_pane

0x6820,	// (0x00064442) cell_myfav_contact_pane_cp1_ParamLimits

0x6820,	// (0x00064442) cell_myfav_contact_pane_cp1

0x6838,	// (0x0006445a) cell_myfav_contact_pane_cp2_ParamLimits

0x6838,	// (0x0006445a) cell_myfav_contact_pane_cp2

0x6850,	// (0x00064472) cell_myfav_contact_pane_cp3_ParamLimits

0x6850,	// (0x00064472) cell_myfav_contact_pane_cp3

0x6867,	// (0x00064489) cell_myfav_contact_pane_cp4_ParamLimits

0x6867,	// (0x00064489) cell_myfav_contact_pane_cp4

0x687d,	// (0x0006449f) cell_myfav_contact_pane_cp5_ParamLimits

0x687d,	// (0x0006449f) cell_myfav_contact_pane_cp5

0x6891,	// (0x000644b3) cell_myfav_contact_pane_cp6_ParamLimits

0x6891,	// (0x000644b3) cell_myfav_contact_pane_cp6

0x68a5,	// (0x000644c7) cell_myfav_contact_pane_cp7_ParamLimits

0x68a5,	// (0x000644c7) cell_myfav_contact_pane_cp7

0xd8ad,	// (0x0006b4cf) listscroll_gen_pane_cp05

0x68bd,	// (0x000644df) main_myfav_hc_pane_g1_ParamLimits

0x68bd,	// (0x000644df) main_myfav_hc_pane_g1

0x68d7,	// (0x000644f9) main_myfav_hc_pane_g2_ParamLimits

0x68d7,	// (0x000644f9) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0006d56f) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0006d56f) main_myfav_hc_pane_g

0x6909,	// (0x0006452b) main_myfav_hc_pane_t1_ParamLimits

0x6909,	// (0x0006452b) main_myfav_hc_pane_t1

0xd8b6,	// (0x0006b4d8) main_myfav_hc_pane_t2_ParamLimits

0xd8b6,	// (0x0006b4d8) main_myfav_hc_pane_t2

0xd8c8,	// (0x0006b4ea) main_myfav_hc_pane_t3_ParamLimits

0xd8c8,	// (0x0006b4ea) main_myfav_hc_pane_t3

0x6920,	// (0x00064542) main_myfav_hc_pane_t4_ParamLimits

0x6920,	// (0x00064542) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0006d576) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0006d576) main_myfav_hc_pane_t

0xce86,	// (0x0006aaa8) bg_myfav_hc_instruction_pane_g1

0xd8da,	// (0x0006b4fc) cell_myfav_contact_pane_g1_ParamLimits

0xd8da,	// (0x0006b4fc) cell_myfav_contact_pane_g1

0xd8da,	// (0x0006b4fc) cell_myfav_contact_pane_g2_ParamLimits

0xd8da,	// (0x0006b4fc) cell_myfav_contact_pane_g2

0xd8e6,	// (0x0006b508) cell_myfav_contact_pane_g3_ParamLimits

0xd8e6,	// (0x0006b508) cell_myfav_contact_pane_g3

0xd112,	// (0x0006ad34) cell_myfav_contact_pane_g4_ParamLimits

0xd112,	// (0x0006ad34) cell_myfav_contact_pane_g4

0xd8f3,	// (0x0006b515) cell_myfav_contact_pane_g5_ParamLimits

0xd8f3,	// (0x0006b515) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0006d581) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0006d581) cell_myfav_contact_pane_g

0x68f1,	// (0x00064513) main_myfav_hc_pane_g3_ParamLimits

0x68f1,	// (0x00064513) main_myfav_hc_pane_g3

0x0d98,	// (0x0005e9ba) popup_adpt_find_window

0x694a,	// (0x0006456c) afind_page_pane_ParamLimits

0x694a,	// (0x0006456c) afind_page_pane

0x6957,	// (0x00064579) aid_size_cell_afind_ParamLimits

0x6957,	// (0x00064579) aid_size_cell_afind

0x6971,	// (0x00064593) bg_popup_sub_pane_cp09_ParamLimits

0x6971,	// (0x00064593) bg_popup_sub_pane_cp09

0x697e,	// (0x000645a0) find_pane_cp01_ParamLimits

0x697e,	// (0x000645a0) find_pane_cp01

0xd8ff,	// (0x0006b521) grid_afind_control_pane_ParamLimits

0xd8ff,	// (0x0006b521) grid_afind_control_pane

0x698b,	// (0x000645ad) grid_afind_pane_ParamLimits

0x698b,	// (0x000645ad) grid_afind_pane

0x69a7,	// (0x000645c9) cell_afind_pane_ParamLimits

0x69a7,	// (0x000645c9) cell_afind_pane

0xce86,	// (0x0006aaa8) afind_page_pane_g1

0x69f3,	// (0x00064615) afind_page_pane_g2

0x69fc,	// (0x0006461e) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0006d58c) afind_page_pane_g

0x6a05,	// (0x00064627) afind_page_pane_t1

0xd913,	// (0x0006b535) cell_afind_grid_control_pane_ParamLimits

0xd913,	// (0x0006b535) cell_afind_grid_control_pane

0xd798,	// (0x0006b3ba) bg_button_pane_cp69_ParamLimits

0xd798,	// (0x0006b3ba) bg_button_pane_cp69

0x6a25,	// (0x00064647) cell_afind_pane_g1_ParamLimits

0x6a25,	// (0x00064647) cell_afind_pane_g1

0x6a32,	// (0x00064654) cell_afind_pane_t1_ParamLimits

0x6a32,	// (0x00064654) cell_afind_pane_t1

0xac0e,	// (0x00068830) bg_button_pane_cp72

0xd922,	// (0x0006b544) cell_afind_grid_control_pane_g1

0x3dbe,	// (0x000619e0) aid_image_placing_area_ParamLimits

0x3dbe,	// (0x000619e0) aid_image_placing_area

0xd44b,	// (0x0006b06d) field_vitu_entry_pane_g1_ParamLimits

0xd44b,	// (0x0006b06d) field_vitu_entry_pane_g1

0xd457,	// (0x0006b079) field_vitu_entry_pane_g2_ParamLimits

0xd457,	// (0x0006b079) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0006d439) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0006d439) field_vitu_entry_pane_g

0x5a27,	// (0x00063649) cell_vitu_itu_pane_g1_ParamLimits

0x5a77,	// (0x00063699) cell_vitu_itu_pane_t3_ParamLimits

0x5a77,	// (0x00063699) cell_vitu_itu_pane_t3

0xd741,	// (0x0006b363) mp4_progress_pane_t1_ParamLimits

0xd75a,	// (0x0006b37c) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0006d4d2) mp4_progress_pane_t_ParamLimits

0xd773,	// (0x0006b395) mup_progress_pane_cp04_ParamLimits

0x6934,	// (0x00064556) main_myfav_hc_pane_t5_ParamLimits

0x6934,	// (0x00064556) main_myfav_hc_pane_t5

0x0c1f,	// (0x0005e841) aid_zoom_text_primary

0x0d98,	// (0x0005e9ba) popup_adpt_find_window_ParamLimits

0x4255,	// (0x00061e77) main_cam_set_pane

0x6361,	// (0x00063f83) cam4_zoom_pane_ParamLimits

0x6361,	// (0x00063f83) cam4_zoom_pane

0x6a44,	// (0x00064666) main_cam_set_pane_g1_ParamLimits

0x6a44,	// (0x00064666) main_cam_set_pane_g1

0x6a52,	// (0x00064674) main_cam_set_pane_g2_ParamLimits

0x6a52,	// (0x00064674) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0006d593) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0006d593) main_cam_set_pane_g

0x6a5e,	// (0x00064680) main_cam_set_pane_t1_ParamLimits

0x6a5e,	// (0x00064680) main_cam_set_pane_t1

0x6a7a,	// (0x0006469c) main_cset_listscroll_pane_ParamLimits

0x6a7a,	// (0x0006469c) main_cset_listscroll_pane

0x6aa9,	// (0x000646cb) main_cset_slider_pane_ParamLimits

0x6aa9,	// (0x000646cb) main_cset_slider_pane

0xd933,	// (0x0006b555) main_cset_list_pane_ParamLimits

0xd933,	// (0x0006b555) main_cset_list_pane

0xd943,	// (0x0006b565) scroll_pane_cp028

0x6aca,	// (0x000646ec) aid_area_touch_slider

0x6ae6,	// (0x00064708) cset_slider_pane

0x6b10,	// (0x00064732) main_cset_slider_pane_g1

0x6b25,	// (0x00064747) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0006d598) main_cset_slider_pane_g

0xd97c,	// (0x0006b59e) main_cset_slider_pane_t1

0x6be1,	// (0x00064803) main_cset_slider_pane_t2

0x6bfb,	// (0x0006481d) main_cset_slider_pane_t3

0x6c15,	// (0x00064837) main_cset_slider_pane_t4

0x6c2f,	// (0x00064851) main_cset_slider_pane_t5

0x6c49,	// (0x0006486b) main_cset_slider_pane_t6

0x6c5e,	// (0x00064880) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0006d5bd) main_cset_slider_pane_t

0x6d62,	// (0x00064984) cset_list_set_pane_ParamLimits

0x6d62,	// (0x00064984) cset_list_set_pane

0x6d73,	// (0x00064995) aid_position_infowindow_above

0x6d7b,	// (0x0006499d) aid_position_infowindow_below

0x6d83,	// (0x000649a5) cset_list_set_pane_g1_ParamLimits

0x6d83,	// (0x000649a5) cset_list_set_pane_g1

0x6d8f,	// (0x000649b1) cset_list_set_pane_g3_ParamLimits

0x6d8f,	// (0x000649b1) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0006d5dc) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0006d5dc) cset_list_set_pane_g

0x6d9e,	// (0x000649c0) cset_list_set_pane_t1_ParamLimits

0x6d9e,	// (0x000649c0) cset_list_set_pane_t1

0xae36,	// (0x00068a58) list_highlight_pane_cp021_ParamLimits

0xae36,	// (0x00068a58) list_highlight_pane_cp021

0xb775,	// (0x00069397) cset_slider_pane_g1

0xb787,	// (0x000693a9) cset_slider_pane_g2

0xb77e,	// (0x000693a0) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0006d5e1) cset_slider_pane_g

0x6db3,	// (0x000649d5) aid_area_touch_cam4_zoom

0x6dbc,	// (0x000649de) cam4_zoom_cont_pane

0x6dc4,	// (0x000649e6) cam4_zoom_pane_g1

0x6dcc,	// (0x000649ee) cam4_zoom_pane_g2

0x6dd4,	// (0x000649f6) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0006d5e8) cam4_zoom_pane_g

0x6ddd,	// (0x000649ff) cam4_zoom_cont_pane_g1

0x6de6,	// (0x00064a08) cam4_zoom_cont_pane_g2

0x6def,	// (0x00064a11) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0006d5ef) cam4_zoom_cont_pane_g

0x617d,	// (0x00063d9f) call4_image_pane_ParamLimits

0x617d,	// (0x00063d9f) call4_image_pane

0x61de,	// (0x00063e00) call4_windows_conf_pane_ParamLimits

0x6229,	// (0x00063e4b) popup_call4_audio_in_window_ParamLimits

0x6229,	// (0x00063e4b) popup_call4_audio_in_window

0x9e84,	// (0x00067aa6) bg_popup_call2_act_pane_cp02

0xd7a4,	// (0x0006b3c6) call4_list_conf_pane

0xce86,	// (0x0006aaa8) call4_image_pane_g1

0xce86,	// (0x0006aaa8) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0006d2fa) call4_image_pane_g

0xda51,	// (0x0006b673) list_single_graphic_popup_conf4_pane_ParamLimits

0xda51,	// (0x0006b673) list_single_graphic_popup_conf4_pane

0x9e84,	// (0x00067aa6) list_highlight_pane_cp022

0xda66,	// (0x0006b688) list_single_graphic_popup_conf4_pane_g1

0xb36d,	// (0x00068f8f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0006d5f6) list_single_graphic_popup_conf4_pane_g

0xda6e,	// (0x0006b690) list_single_graphic_popup_conf4_pane_t1

0x2019,	// (0x0005fc3b) popup_vtel_slider_window_ParamLimits

0x2019,	// (0x0005fc3b) popup_vtel_slider_window

0xd786,	// (0x0006b3a8) dialer2_ne_pane_t2_ParamLimits

0xd786,	// (0x0006b3a8) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0006d4d7) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0006d4d7) dialer2_ne_pane_t

0xae36,	// (0x00068a58) bg_popup_sub_pane_cp010_ParamLimits

0xae36,	// (0x00068a58) bg_popup_sub_pane_cp010

0x6df8,	// (0x00064a1a) popup_vtel_slider_window_g1_ParamLimits

0x6df8,	// (0x00064a1a) popup_vtel_slider_window_g1

0x6e04,	// (0x00064a26) popup_vtel_slider_window_g2_ParamLimits

0x6e04,	// (0x00064a26) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0006d5fb) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0006d5fb) popup_vtel_slider_window_g

0x6e4c,	// (0x00064a6e) vtel_slider_pane_ParamLimits

0x6e4c,	// (0x00064a6e) vtel_slider_pane

0x6e5b,	// (0x00064a7d) vtel_slider_pane_g1_ParamLimits

0x6e5b,	// (0x00064a7d) vtel_slider_pane_g1

0x6e68,	// (0x00064a8a) vtel_slider_pane_g2_ParamLimits

0x6e68,	// (0x00064a8a) vtel_slider_pane_g2

0x6e75,	// (0x00064a97) vtel_slider_pane_g3_ParamLimits

0x6e75,	// (0x00064a97) vtel_slider_pane_g3

0x6e5b,	// (0x00064a7d) vtel_slider_pane_g4_ParamLimits

0x6e5b,	// (0x00064a7d) vtel_slider_pane_g4

0x6e82,	// (0x00064aa4) vtel_slider_pane_g5_ParamLimits

0x6e82,	// (0x00064aa4) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0006d604) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0006d604) vtel_slider_pane_g

0x4255,	// (0x00061e77) main_gallery2_pane

0x65c7,	// (0x000641e9) aid_size_row_itut2_dropdow_list_ParamLimits

0x65c7,	// (0x000641e9) aid_size_row_itut2_dropdow_list

0x6637,	// (0x00064259) grid_vitu2_function_top_pane_ParamLimits

0x6637,	// (0x00064259) grid_vitu2_function_top_pane

0x668d,	// (0x000642af) popup_vitu2_dropdown_list_window_ParamLimits

0x668d,	// (0x000642af) popup_vitu2_dropdown_list_window

0x66ad,	// (0x000642cf) popup_vitu2_match_list_window

0x6e9d,	// (0x00064abf) cell_vitu2_function_top_pane_ParamLimits

0x6e9d,	// (0x00064abf) cell_vitu2_function_top_pane

0x6ec1,	// (0x00064ae3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ec1,	// (0x00064ae3) cell_vitu2_function_top_pane_cp01

0x6edd,	// (0x00064aff) cell_vitu2_function_top_wide_pane_ParamLimits

0x6edd,	// (0x00064aff) cell_vitu2_function_top_wide_pane

0x4255,	// (0x00061e77) bg_button_pane_cp012

0x6ef9,	// (0x00064b1b) cell_vitu2_function_top_pane_g1

0x6f0d,	// (0x00064b2f) bg_button_pane_cp013_ParamLimits

0x6f0d,	// (0x00064b2f) bg_button_pane_cp013

0x6f29,	// (0x00064b4b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f29,	// (0x00064b4b) cell_vitu2_function_top_wide_pane_g1

0x0e90,	// (0x0005eab2) bg_popup_sub_pane_cp20

0x6f41,	// (0x00064b63) list_vitu2_match_list_pane

0xd825,	// (0x0006b447) bg_popup_sub_pane_cp20_g1

0xd82d,	// (0x0006b44f) bg_popup_sub_pane_cp20_g2

0xae19,	// (0x00068a3b) bg_popup_sub_pane_cp20_g3

0xd835,	// (0x0006b457) bg_popup_sub_pane_cp20_g4

0xadf9,	// (0x00068a1b) bg_popup_sub_pane_cp20_g5

0xda84,	// (0x0006b6a6) bg_popup_sub_pane_cp20_g6

0xd845,	// (0x0006b467) bg_popup_sub_pane_cp20_g7

0xd84d,	// (0x0006b46f) bg_popup_sub_pane_cp20_g8

0xd855,	// (0x0006b477) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0006d60f) bg_popup_sub_pane_cp20_g

0x6f59,	// (0x00064b7b) list_vitu2_match_list_item_pane_ParamLimits

0x6f59,	// (0x00064b7b) list_vitu2_match_list_item_pane

0x6f6b,	// (0x00064b8d) list_vitu2_match_list_item_pane_t1

0x0eaa,	// (0x0005eacc) bg_popup_sub_pane_cp21

0x6fc1,	// (0x00064be3) grid_vitu2_dropdown_list_pane

0x6fc9,	// (0x00064beb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6fc9,	// (0x00064beb) cell_vitu2_dropdown_list_char_pane

0x6fee,	// (0x00064c10) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6fee,	// (0x00064c10) cell_vitu2_dropdown_list_ctrl_pane

0xda8c,	// (0x0006b6ae) cell_vitu2_dropdown_list_char_pane_g1

0xda95,	// (0x0006b6b7) cell_vitu2_dropdown_list_char_pane_g2

0xda9e,	// (0x0006b6c0) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0006d62c) cell_vitu2_dropdown_list_char_pane_g

0x701c,	// (0x00064c3e) cell_vitu2_dropdown_list_char_pane_t1

0x702a,	// (0x00064c4c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x702a,	// (0x00064c4c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x703a,	// (0x00064c5c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x703a,	// (0x00064c5c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x704b,	// (0x00064c6d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x704b,	// (0x00064c6d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x705b,	// (0x00064c7d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x705b,	// (0x00064c7d) cell_vitu2_dropdown_list_ctrl_pane_g4

0x63f7,	// (0x00064019) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x63f7,	// (0x00064019) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0006d633) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0006d633) cell_vitu2_dropdown_list_ctrl_pane_g

0x7074,	// (0x00064c96) aid_size_cell_gallery2_ParamLimits

0x7074,	// (0x00064c96) aid_size_cell_gallery2

0x708e,	// (0x00064cb0) grid_gallery2_pane_ParamLimits

0x708e,	// (0x00064cb0) grid_gallery2_pane

0x70a5,	// (0x00064cc7) scroll_pane_cp029_ParamLimits

0x70a5,	// (0x00064cc7) scroll_pane_cp029

0x70b5,	// (0x00064cd7) cell_gallery2_pane_ParamLimits

0x70b5,	// (0x00064cd7) cell_gallery2_pane

0xdaa7,	// (0x0006b6c9) cell_gallery2_pane_g2

0x710c,	// (0x00064d2e) cell_gallery2_pane_g3

0xdaaf,	// (0x0006b6d1) cell_gallery2_pane_g4

0xdab7,	// (0x0006b6d9) cell_gallery2_pane_g5

0xabbc,	// (0x000687de) grid_highlight_pane_cp10

0x66ad,	// (0x000642cf) popup_vitu2_match_list_window_ParamLimits

0x66c1,	// (0x000642e3) popup_vitu2_query_window_ParamLimits

0x66c1,	// (0x000642e3) popup_vitu2_query_window

0x0eaa,	// (0x0005eacc) bg_vitu2_candi_button_pane

0xda8c,	// (0x0006b6ae) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda95,	// (0x0006b6b7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda9e,	// (0x0006b6c0) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7114,	// (0x00064d36) bg_button_pane_cp015

0x7126,	// (0x00064d48) bg_button_pane_cp016

0x7139,	// (0x00064d5b) bg_button_pane_cp017

0xca4e,	// (0x0006a670) bg_popup_sub_pane_cp22

0xdabf,	// (0x0006b6e1) popup_vitu2_query_window_g1

0x717e,	// (0x00064da0) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0006d63e) popup_vitu2_query_window_g

0x719b,	// (0x00064dbd) popup_vitu2_query_window_t1_ParamLimits

0x719b,	// (0x00064dbd) popup_vitu2_query_window_t1

0x71ce,	// (0x00064df0) popup_vitu2_query_window_t2_ParamLimits

0x71ce,	// (0x00064df0) popup_vitu2_query_window_t2

0x71e0,	// (0x00064e02) popup_vitu2_query_window_t3_ParamLimits

0x71e0,	// (0x00064e02) popup_vitu2_query_window_t3

0x7208,	// (0x00064e2a) popup_vitu2_query_window_t4_ParamLimits

0x7208,	// (0x00064e2a) popup_vitu2_query_window_t4

0x722b,	// (0x00064e4d) popup_vitu2_query_window_t5_ParamLimits

0x722b,	// (0x00064e4d) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0006d645) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0006d645) popup_vitu2_query_window_t

0xd92b,	// (0x0006b54d) main_cset_text_pane

0x6aca,	// (0x000646ec) aid_area_touch_slider_ParamLimits

0x6ae6,	// (0x00064708) cset_slider_pane_ParamLimits

0x6b10,	// (0x00064732) main_cset_slider_pane_g1_ParamLimits

0x6b25,	// (0x00064747) main_cset_slider_pane_g2_ParamLimits

0xd94c,	// (0x0006b56e) main_cset_slider_pane_g3_ParamLimits

0xd94c,	// (0x0006b56e) main_cset_slider_pane_g3

0x6b3a,	// (0x0006475c) main_cset_slider_pane_g4_ParamLimits

0x6b3a,	// (0x0006475c) main_cset_slider_pane_g4

0x6b49,	// (0x0006476b) main_cset_slider_pane_g5_ParamLimits

0x6b49,	// (0x0006476b) main_cset_slider_pane_g5

0x6b55,	// (0x00064777) main_cset_slider_pane_g6_ParamLimits

0x6b55,	// (0x00064777) main_cset_slider_pane_g6

0xf976,	// (0x0006d598) main_cset_slider_pane_g_ParamLimits

0xd97c,	// (0x0006b59e) main_cset_slider_pane_t1_ParamLimits

0x6be1,	// (0x00064803) main_cset_slider_pane_t2_ParamLimits

0x6bfb,	// (0x0006481d) main_cset_slider_pane_t3_ParamLimits

0x6c15,	// (0x00064837) main_cset_slider_pane_t4_ParamLimits

0x6c2f,	// (0x00064851) main_cset_slider_pane_t5_ParamLimits

0x6c49,	// (0x0006486b) main_cset_slider_pane_t6_ParamLimits

0x6c5e,	// (0x00064880) main_cset_slider_pane_t7_ParamLimits

0x6c88,	// (0x000648aa) main_cset_slider_pane_t8_ParamLimits

0x6c88,	// (0x000648aa) main_cset_slider_pane_t8

0x6cb0,	// (0x000648d2) main_cset_slider_pane_t9_ParamLimits

0x6cb0,	// (0x000648d2) main_cset_slider_pane_t9

0x6cd8,	// (0x000648fa) main_cset_slider_pane_t10_ParamLimits

0x6cd8,	// (0x000648fa) main_cset_slider_pane_t10

0x6d00,	// (0x00064922) main_cset_slider_pane_t11_ParamLimits

0x6d00,	// (0x00064922) main_cset_slider_pane_t11

0x6d28,	// (0x0006494a) main_cset_slider_pane_t12_ParamLimits

0x6d28,	// (0x0006494a) main_cset_slider_pane_t12

0x6d45,	// (0x00064967) main_cset_slider_pane_t13_ParamLimits

0x6d45,	// (0x00064967) main_cset_slider_pane_t13

0xf99b,	// (0x0006d5bd) main_cset_slider_pane_t_ParamLimits

0x9e84,	// (0x00067aa6) bg_popup_sub_pane_cp011

0xdacb,	// (0x0006b6ed) main_cset_text_pane_g1

0xdad3,	// (0x0006b6f5) main_cset_text_pane_t1

0xdae1,	// (0x0006b703) main_cset_text_pane_t2

0xdaef,	// (0x0006b711) main_cset_text_pane_t3

0xdafd,	// (0x0006b71f) main_cset_text_pane_t4

0xdb0b,	// (0x0006b72d) main_cset_text_pane_t5

0xdb19,	// (0x0006b73b) main_cset_text_pane_t6

0xdb27,	// (0x0006b749) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0006d654) main_cset_text_pane_t

0x0eaa,	// (0x0005eacc) main_cam4_burst_pane

0x0eaa,	// (0x0005eacc) main_cam5_pane

0x6a13,	// (0x00064635) bg_button_pane_cp019

0x6a1c,	// (0x0006463e) bg_button_pane_cp020

0xd958,	// (0x0006b57a) main_cset_slider_pane_g7_ParamLimits

0xd958,	// (0x0006b57a) main_cset_slider_pane_g7

0xd964,	// (0x0006b586) main_cset_slider_pane_g8_ParamLimits

0xd964,	// (0x0006b586) main_cset_slider_pane_g8

0x6b69,	// (0x0006478b) main_cset_slider_pane_g9_ParamLimits

0x6b69,	// (0x0006478b) main_cset_slider_pane_g9

0x6b75,	// (0x00064797) main_cset_slider_pane_g10_ParamLimits

0x6b75,	// (0x00064797) main_cset_slider_pane_g10

0x6b81,	// (0x000647a3) main_cset_slider_pane_g11_ParamLimits

0x6b81,	// (0x000647a3) main_cset_slider_pane_g11

0x6b8d,	// (0x000647af) main_cset_slider_pane_g12_ParamLimits

0x6b8d,	// (0x000647af) main_cset_slider_pane_g12

0x6b99,	// (0x000647bb) main_cset_slider_pane_g13_ParamLimits

0x6b99,	// (0x000647bb) main_cset_slider_pane_g13

0x6ba5,	// (0x000647c7) main_cset_slider_pane_g14_ParamLimits

0x6ba5,	// (0x000647c7) main_cset_slider_pane_g14

0x6bb1,	// (0x000647d3) main_cset_slider_pane_g15_ParamLimits

0x6bb1,	// (0x000647d3) main_cset_slider_pane_g15

0xd9aa,	// (0x0006b5cc) main_cset_slider_pane_t14_ParamLimits

0xd9aa,	// (0x0006b5cc) main_cset_slider_pane_t14

0xda18,	// (0x0006b63a) main_cset_slider_pane_t15_ParamLimits

0xda18,	// (0x0006b63a) main_cset_slider_pane_t15

0x72a4,	// (0x00064ec6) aid_cam4_burst_size_cell_ParamLimits

0x72a4,	// (0x00064ec6) aid_cam4_burst_size_cell

0x72c0,	// (0x00064ee2) grid_cam4_burst_pane_ParamLimits

0x72c0,	// (0x00064ee2) grid_cam4_burst_pane

0x72f2,	// (0x00064f14) linegrid_cam4_burst_pane_ParamLimits

0x72f2,	// (0x00064f14) linegrid_cam4_burst_pane

0x7310,	// (0x00064f32) scroll_pane_cp30_ParamLimits

0x7310,	// (0x00064f32) scroll_pane_cp30

0x731c,	// (0x00064f3e) cell_cam4_burst_pane_ParamLimits

0x731c,	// (0x00064f3e) cell_cam4_burst_pane

0xdb35,	// (0x0006b757) linegrid_cam4_burst_pane_g1_ParamLimits

0xdb35,	// (0x0006b757) linegrid_cam4_burst_pane_g1

0x735c,	// (0x00064f7e) linegrid_cam4_burst_pane_g2_ParamLimits

0x735c,	// (0x00064f7e) linegrid_cam4_burst_pane_g2

0xdb42,	// (0x0006b764) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb42,	// (0x0006b764) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0006d663) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0006d663) linegrid_cam4_burst_pane_g

0x736d,	// (0x00064f8f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x736d,	// (0x00064f8f) linegrid_cam4_burst_pane_g3_copy1

0xdb4f,	// (0x0006b771) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb4f,	// (0x0006b771) linegrid_cam4_burst_pane_g4

0x7387,	// (0x00064fa9) linegrid_cam4_burst_pane_g5_ParamLimits

0x7387,	// (0x00064fa9) linegrid_cam4_burst_pane_g5

0x7398,	// (0x00064fba) linegrid_cam4_burst_pane_g6_ParamLimits

0x7398,	// (0x00064fba) linegrid_cam4_burst_pane_g6

0xdb5c,	// (0x0006b77e) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb5c,	// (0x0006b77e) linegrid_cam4_burst_pane_g7

0x73af,	// (0x00064fd1) cell_cam4_burst_pane_g1

0xdb75,	// (0x0006b797) main_cam5_pane_t1_ParamLimits

0xdb75,	// (0x0006b797) main_cam5_pane_t1

0xdb87,	// (0x0006b7a9) main_cam5_pane_t2_ParamLimits

0xdb87,	// (0x0006b7a9) main_cam5_pane_t2

0xdb99,	// (0x0006b7bb) main_cam5_pane_t3_ParamLimits

0xdb99,	// (0x0006b7bb) main_cam5_pane_t3

0xdbab,	// (0x0006b7cd) main_cam5_pane_t4_ParamLimits

0xdbab,	// (0x0006b7cd) main_cam5_pane_t4

0xdbc3,	// (0x0006b7e5) main_cam5_pane_t5_ParamLimits

0xdbc3,	// (0x0006b7e5) main_cam5_pane_t5

0xdbd7,	// (0x0006b7f9) main_cam5_pane_t6_ParamLimits

0xdbd7,	// (0x0006b7f9) main_cam5_pane_t6

0xdbeb,	// (0x0006b80d) main_cam5_pane_t7_ParamLimits

0xdbeb,	// (0x0006b80d) main_cam5_pane_t7

0xdbfd,	// (0x0006b81f) main_cam5_pane_t8_ParamLimits

0xdbfd,	// (0x0006b81f) main_cam5_pane_t8

0xdc1b,	// (0x0006b83d) main_cam5_pane_t9_ParamLimits

0xdc1b,	// (0x0006b83d) main_cam5_pane_t9

0xdc2d,	// (0x0006b84f) main_cam5_pane_t10_ParamLimits

0xdc2d,	// (0x0006b84f) main_cam5_pane_t10

0xdc3f,	// (0x0006b861) main_cam5_pane_t11_ParamLimits

0xdc3f,	// (0x0006b861) main_cam5_pane_t11

0xdc53,	// (0x0006b875) main_cam5_pane_t12_ParamLimits

0xdc53,	// (0x0006b875) main_cam5_pane_t12

0xdc6a,	// (0x0006b88c) main_cam5_pane_t13_ParamLimits

0xdc6a,	// (0x0006b88c) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0006d66f) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0006d66f) main_cam5_pane_t

0x0e4f,	// (0x0005ea71) popup_scut_keymap_window_ParamLimits

0x0e4f,	// (0x0005ea71) popup_scut_keymap_window

0x73c2,	// (0x00064fe4) aid_size_cell_brow_shortcut

0xabbc,	// (0x000687de) bg_popup_window_pane_cp010

0x73ce,	// (0x00064ff0) grid_scut_pane

0x73da,	// (0x00064ffc) cell_scut_pane_ParamLimits

0x73da,	// (0x00064ffc) cell_scut_pane

0x73f5,	// (0x00065017) cell_scut_pane_g1

0xdc8d,	// (0x0006b8af) cell_scut_pane_t1

0xdc9c,	// (0x0006b8be) cell_scut_pane_t2

0x73fe,	// (0x00065020) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0006d68a) cell_scut_pane_t

0x5093,	// (0x00062cb5) main_mup3_pane_g8_ParamLimits

0x5093,	// (0x00062cb5) main_mup3_pane_g8

0x65d7,	// (0x000641f9) area_vitu2_query_pane_ParamLimits

0x65d7,	// (0x000641f9) area_vitu2_query_pane

0x714c,	// (0x00064d6e) input_focus_pane_cp08

0xdcab,	// (0x0006b8cd) area_vitu2_query_pane_g1

0x740c,	// (0x0006502e) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0006d691) area_vitu2_query_pane_g

0x741d,	// (0x0006503f) area_vitu2_query_pane_t1_ParamLimits

0x741d,	// (0x0006503f) area_vitu2_query_pane_t1

0x7431,	// (0x00065053) area_vitu2_query_pane_t2_ParamLimits

0x7431,	// (0x00065053) area_vitu2_query_pane_t2

0x7445,	// (0x00065067) area_vitu2_query_pane_t3_ParamLimits

0x7445,	// (0x00065067) area_vitu2_query_pane_t3

0xa61f,	// (0x00068241) area_vitu2_query_pane_t4_ParamLimits

0xa61f,	// (0x00068241) area_vitu2_query_pane_t4

0xa647,	// (0x00068269) area_vitu2_query_pane_t5_ParamLimits

0xa647,	// (0x00068269) area_vitu2_query_pane_t5

0xa66f,	// (0x00068291) area_vitu2_query_pane_t6_ParamLimits

0xa66f,	// (0x00068291) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0006d696) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0006d696) area_vitu2_query_pane_t

0x746d,	// (0x0006508f) bg_button_pane_cp018

0x747b,	// (0x0006509d) bg_button_pane_cp021

0x7487,	// (0x000650a9) bg_button_pane_cp022

0x7498,	// (0x000650ba) input_focus_pane_cp09

0xb47c,	// (0x0006909e) aid_size_touch_mv_arrow_left

0xb4a7,	// (0x000690c9) aid_size_touch_mv_arrow_right

0x6bc9,	// (0x000647eb) main_cset_slider_pane_g16_ParamLimits

0x6bc9,	// (0x000647eb) main_cset_slider_pane_g16

0x6bd5,	// (0x000647f7) main_cset_slider_pane_g17_ParamLimits

0x6bd5,	// (0x000647f7) main_cset_slider_pane_g17

0x73af,	// (0x00064fd1) cell_cam4_burst_pane_g1_ParamLimits

0x9e84,	// (0x00067aa6) compa_mode_pane

0x6e10,	// (0x00064a32) popup_vtel_slider_window_g3_ParamLimits

0x6e10,	// (0x00064a32) popup_vtel_slider_window_g3

0x6e24,	// (0x00064a46) popup_vtel_slider_window_g4_ParamLimits

0x6e24,	// (0x00064a46) popup_vtel_slider_window_g4

0x6e38,	// (0x00064a5a) popup_vtel_slider_window_t1_ParamLimits

0x6e38,	// (0x00064a5a) popup_vtel_slider_window_t1

0x0eaa,	// (0x0005eacc) main_cl_pane

0x42ff,	// (0x00061f21) popup_imed_adjust2_window_ParamLimits

0xca4e,	// (0x0006a670) bg_tb_trans_pane_cp05_ParamLimits

0xd376,	// (0x0006af98) popup_imed_adjust2_window_g1_ParamLimits

0xd385,	// (0x0006afa7) popup_imed_adjust2_window_g2_ParamLimits

0xd385,	// (0x0006afa7) popup_imed_adjust2_window_g2

0xd391,	// (0x0006afb3) popup_imed_adjust2_window_g3_ParamLimits

0xd391,	// (0x0006afb3) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0006d3fd) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0006d3fd) popup_imed_adjust2_window_g

0xd39d,	// (0x0006afbf) popup_imed_adjust2_window_t1_ParamLimits

0xd3b5,	// (0x0006afd7) slider_imed_adjust_pane_ParamLimits

0xd3c9,	// (0x0006afeb) slider_imed_adjust_pane_g1_ParamLimits

0xd3d9,	// (0x0006affb) slider_imed_adjust_pane_g2_ParamLimits

0xd3e9,	// (0x0006b00b) slider_imed_adjust_pane_g3_ParamLimits

0xd3fa,	// (0x0006b01c) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0006d404) slider_imed_adjust_pane_g_ParamLimits

0x630a,	// (0x00063f2c) aid_touch_area_cam4_ParamLimits

0x630a,	// (0x00063f2c) aid_touch_area_cam4

0x631a,	// (0x00063f3c) battery_pane_cp01

0x63a1,	// (0x00063fc3) main_camera4_pane_g6_ParamLimits

0x63a1,	// (0x00063fc3) main_camera4_pane_g6

0x63bf,	// (0x00063fe1) main_camera4_pane_t2_ParamLimits

0x63bf,	// (0x00063fe1) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0006d50b) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0006d50b) main_camera4_pane_t

0x6450,	// (0x00064072) aid_touch_area_vid4_ParamLimits

0x6450,	// (0x00064072) aid_touch_area_vid4

0x6490,	// (0x000640b2) main_video4_pane_g5_ParamLimits

0x6490,	// (0x000640b2) main_video4_pane_g5

0x64b6,	// (0x000640d8) vid4_progress_pane_ParamLimits

0x64b6,	// (0x000640d8) vid4_progress_pane

0xd970,	// (0x0006b592) main_cset_slider_pane_g18_ParamLimits

0xd970,	// (0x0006b592) main_cset_slider_pane_g18

0xdb69,	// (0x0006b78b) cell_cam4_burst_pane_g2_ParamLimits

0xdb69,	// (0x0006b78b) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0006d66a) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0006d66a) cell_cam4_burst_pane_g

0x74a9,	// (0x000650cb) bg_cl_pane_ParamLimits

0x74a9,	// (0x000650cb) bg_cl_pane

0x74b5,	// (0x000650d7) cl_header_pane_ParamLimits

0x74b5,	// (0x000650d7) cl_header_pane

0x74c1,	// (0x000650e3) cl_listscroll_pane_ParamLimits

0x74c1,	// (0x000650e3) cl_listscroll_pane

0xdcb7,	// (0x0006b8d9) bg_cl_pane_g1

0xdcbf,	// (0x0006b8e1) bg_cl_pane_g2

0xdcc7,	// (0x0006b8e9) bg_cl_pane_g3

0xdccf,	// (0x0006b8f1) bg_cl_pane_g4

0xdcd7,	// (0x0006b8f9) bg_cl_pane_g5

0xdcdf,	// (0x0006b901) bg_cl_pane_g6

0xdce7,	// (0x0006b909) bg_cl_pane_g7

0xdcef,	// (0x0006b911) bg_cl_pane_g8

0xdcf7,	// (0x0006b919) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0006d6a5) bg_cl_pane_g

0x74cd,	// (0x000650ef) aid_height_cl_leading_ParamLimits

0x74cd,	// (0x000650ef) aid_height_cl_leading

0x74d9,	// (0x000650fb) aid_height_cl_text_ParamLimits

0x74d9,	// (0x000650fb) aid_height_cl_text

0xe271,	// (0x0006be93) bg_cl_header_pane_ParamLimits

0xe271,	// (0x0006be93) bg_cl_header_pane

0x74f1,	// (0x00065113) cl_header_pane_g1_ParamLimits

0x74f1,	// (0x00065113) cl_header_pane_g1

0x74fe,	// (0x00065120) cl_header_pane_t1_ParamLimits

0x74fe,	// (0x00065120) cl_header_pane_t1

0xdcff,	// (0x0006b921) cl_list_pane

0xd943,	// (0x0006b565) hc_scroll_pane_cp01

0xadf9,	// (0x00068a1b) bg_cl_header_pane_g1

0xd825,	// (0x0006b447) bg_cl_header_pane_g2

0xae19,	// (0x00068a3b) bg_cl_header_pane_g3

0xd835,	// (0x0006b457) bg_cl_header_pane_g4

0xd82d,	// (0x0006b44f) bg_cl_header_pane_g5

0xda84,	// (0x0006b6a6) bg_cl_header_pane_g6

0xd84d,	// (0x0006b46f) bg_cl_header_pane_g7

0xd855,	// (0x0006b477) bg_cl_header_pane_g8

0xd845,	// (0x0006b467) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0006d6b8) bg_cl_header_pane_g

0x7510,	// (0x00065132) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7510,	// (0x00065132) hc_cl_list_double_graphic_heading_pane

0x7520,	// (0x00065142) hc_cl_list_single_graphic_pane_ParamLimits

0x7520,	// (0x00065142) hc_cl_list_single_graphic_pane

0x7532,	// (0x00065154) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7532,	// (0x00065154) hc_cl_list_single_graphic_pane_g1

0x753e,	// (0x00065160) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x753e,	// (0x00065160) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0006d6cb) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0006d6cb) hc_cl_list_single_graphic_pane_g

0x7552,	// (0x00065174) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7552,	// (0x00065174) hc_cl_list_single_graphic_pane_t1

0x7532,	// (0x00065154) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7532,	// (0x00065154) hc_cl_list_double_graphic_heading_pane_g1

0x7567,	// (0x00065189) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7567,	// (0x00065189) hc_cl_list_double_graphic_heading_pane_g2

0x757b,	// (0x0006519d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x757b,	// (0x0006519d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0006d6d0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0006d6d0) hc_cl_list_double_graphic_heading_pane_g

0x758f,	// (0x000651b1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x758f,	// (0x000651b1) hc_cl_list_double_graphic_heading_pane_t1

0x75a4,	// (0x000651c6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75a4,	// (0x000651c6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0006d6d7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0006d6d7) hc_cl_list_double_graphic_heading_pane_t

0x75c1,	// (0x000651e3) vid4_progress_pane_g1

0x75d1,	// (0x000651f3) vid4_progress_pane_g2

0x75e1,	// (0x00065203) vid4_progress_pane_g3

0x641e,	// (0x00064040) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0006d6dc) vid4_progress_pane_g

0x75f3,	// (0x00065215) vid4_progress_pane_t1

0x7609,	// (0x0006522b) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0006d6e7) vid4_progress_pane_t

0x7633,	// (0x00065255) wait_bar_pane_cp07

0xcc73,	// (0x0006a895) blid_firmament_pane_ParamLimits

0xccb6,	// (0x0006a8d8) popup_blid_sat_info2_window_g1

0xccda,	// (0x0006a8fc) popup_blid_sat_info2_window_t3

0xcce8,	// (0x0006a90a) popup_blid_sat_info2_window_t4

0xccf6,	// (0x0006a918) popup_blid_sat_info2_window_t5

0xcd04,	// (0x0006a926) popup_blid_sat_info2_window_t6

0xcd14,	// (0x0006a936) popup_blid_sat_info2_window_t7

0xcd22,	// (0x0006a944) popup_blid_sat_info2_window_t8

0xcd30,	// (0x0006a952) popup_blid_sat_info2_window_t9

0xcd3e,	// (0x0006a960) popup_blid_sat_info2_window_t10

0xce06,	// (0x0006aa28) aid_firma_cardinal_ParamLimits

0xce1a,	// (0x0006aa3c) blid_firmament_pane_t1_ParamLimits

0xce31,	// (0x0006aa53) blid_firmament_pane_t2_ParamLimits

0xce48,	// (0x0006aa6a) blid_firmament_pane_t3_ParamLimits

0xce5f,	// (0x0006aa81) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0006d2f1) blid_firmament_pane_t_ParamLimits

0xce76,	// (0x0006aa98) blid_sat_info_pane_ParamLimits

0x4255,	// (0x00061e77) main_cam_set_pane_ParamLimits

0x584f,	// (0x00063471) aid_size_cell_colour_35_ParamLimits

0x5869,	// (0x0006348b) aid_size_cell_colour_112_ParamLimits

0x5880,	// (0x000634a2) aid_size_cell_effect_ParamLimits

0xae36,	// (0x00068a58) bg_tb_trans_pane_cp02_ParamLimits

0xb292,	// (0x00068eb4) heading_imed_pane_ParamLimits

0x589a,	// (0x000634bc) listscroll_imed_pane_ParamLimits

0xc076,	// (0x00069c98) popup_call2_audio_first_window_g5_ParamLimits

0xc076,	// (0x00069c98) popup_call2_audio_first_window_g5

0x5fe6,	// (0x00063c08) aid_size_touch_image3_arrow_left_ParamLimits

0x5fe6,	// (0x00063c08) aid_size_touch_image3_arrow_left

0x5ffc,	// (0x00063c1e) aid_size_touch_image3_arrow_right_ParamLimits

0x5ffc,	// (0x00063c1e) aid_size_touch_image3_arrow_right

0x761e,	// (0x00065240) vid4_progress_pane_t3

0x5b3e,	// (0x00063760) main_hwr_training_symbol_option_pane_ParamLimits

0x5b3e,	// (0x00063760) main_hwr_training_symbol_option_pane

0xd67b,	// (0x0006b29d) popup_hwr_training_preview_window_ParamLimits

0xd67b,	// (0x0006b29d) popup_hwr_training_preview_window

0x5b9f,	// (0x000637c1) hwr_training_navi_pane_g5_ParamLimits

0x5b9f,	// (0x000637c1) hwr_training_navi_pane_g5

0xd813,	// (0x0006b435) popup_char_count_window

0x0e90,	// (0x0005eab2) bg_popup_sub_pane_cp20_ParamLimits

0x6f41,	// (0x00064b63) list_vitu2_match_list_pane_ParamLimits

0x6f4d,	// (0x00064b6f) vitu2_page_scroll_pane_ParamLimits

0x6f4d,	// (0x00064b6f) vitu2_page_scroll_pane

0xdd08,	// (0x0006b92a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdd08,	// (0x0006b92a) list_single_hwr_training_symbol_option_pane

0xdd1b,	// (0x0006b93d) list_single_hwr_training_symbol_option_pane_g1

0xdd23,	// (0x0006b945) list_single_hwr_training_symbol_option_pane_t1

0xdd31,	// (0x0006b953) bg_button_pane_cp023

0xdd3a,	// (0x0006b95c) bg_button_pane_cp024

0x767e,	// (0x000652a0) vitu2_page_scroll_pane_g1

0x7686,	// (0x000652a8) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0006d6ee) vitu2_page_scroll_pane_g

0x7690,	// (0x000652b2) vitu2_page_scroll_pane_t1

0xd9ec,	// (0x0006b60e) popup_char_count_window_g1

0xdd6d,	// (0x0006b98f) popup_char_count_window_g2

0xd9e3,	// (0x0006b605) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0006d6f3) popup_char_count_window_g

0xdd76,	// (0x0006b998) popup_char_count_window_t1

0x0eaa,	// (0x0005eacc) main_vded2_pane

0xd362,	// (0x0006af84) aid_size_cell_imed_line

0xd36c,	// (0x0006af8e) grid_imed_line_width_pane

0x652a,	// (0x0006414c) vid4_indicators_pane_g4

0xdd84,	// (0x0006b9a6) cell_imed_line_width_pane_ParamLimits

0xdd84,	// (0x0006b9a6) cell_imed_line_width_pane

0xdd9a,	// (0x0006b9bc) cell_imed_line_width_pane_g1

0xd9f5,	// (0x0006b617) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0006d6fa) cell_imed_line_width_pane_g

0x769f,	// (0x000652c1) main_vded2_pane_g1_ParamLimits

0x769f,	// (0x000652c1) main_vded2_pane_g1

0x76ae,	// (0x000652d0) main_vded2_pane_g2_ParamLimits

0x76ae,	// (0x000652d0) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0006d6ff) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0006d6ff) main_vded2_pane_g

0x76bc,	// (0x000652de) vded2_slider_pane_ParamLimits

0x76bc,	// (0x000652de) vded2_slider_pane

0x76c9,	// (0x000652eb) aid_size_touch_vded2_end

0x76d3,	// (0x000652f5) aid_size_touch_vded2_playhead

0xdda3,	// (0x0006b9c5) aid_size_touch_vded2_start

0xddab,	// (0x0006b9cd) vded2_slider_bg_pane

0xddb4,	// (0x0006b9d6) vded2_slider_pane_g1

0xddbd,	// (0x0006b9df) vded2_slider_pane_g2

0x76db,	// (0x000652fd) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0006d704) vded2_slider_pane_g

0xd9fd,	// (0x0006b61f) vded2_slider_bg_pane_g1

0xda06,	// (0x0006b628) vded2_slider_bg_pane_g2

0xda0f,	// (0x0006b631) vded2_slider_bg_pane_g3

0x0002,

0xf79f,	// (0x0006d3c1) vded2_slider_bg_pane_g

0x3b21,	// (0x00061743) aid_postcard_touch_down_pane_ParamLimits

0x3b21,	// (0x00061743) aid_postcard_touch_down_pane

0x3b31,	// (0x00061753) aid_postcard_touch_up_pane_ParamLimits

0x3b31,	// (0x00061753) aid_postcard_touch_up_pane

0x0eaa,	// (0x0005eacc) main_blid2_pane

0x427e,	// (0x00061ea0) popup_blid2_search_window

0x9e84,	// (0x00067aa6) blid2_gps_pane

0x9e84,	// (0x00067aa6) blid2_navig_pane

0x9e84,	// (0x00067aa6) blid2_search_pane

0x9e84,	// (0x00067aa6) blid2_tripm_pane

0x76e4,	// (0x00065306) blid2_search_pane_g1_ParamLimits

0x76e4,	// (0x00065306) blid2_search_pane_g1

0x76f0,	// (0x00065312) blid2_search_pane_t1_ParamLimits

0x76f0,	// (0x00065312) blid2_search_pane_t1

0x7702,	// (0x00065324) aid_size_cell_blid2_gps_ParamLimits

0x7702,	// (0x00065324) aid_size_cell_blid2_gps

0x7712,	// (0x00065334) blid2_gps_pane_g1_ParamLimits

0x7712,	// (0x00065334) blid2_gps_pane_g1

0x771e,	// (0x00065340) grid_blid2_satellite_pane_ParamLimits

0x771e,	// (0x00065340) grid_blid2_satellite_pane

0x772c,	// (0x0006534e) blid2_navig_pane_g1_ParamLimits

0x772c,	// (0x0006534e) blid2_navig_pane_g1

0x7738,	// (0x0006535a) blid2_navig_pane_t1_ParamLimits

0x7738,	// (0x0006535a) blid2_navig_pane_t1

0x774a,	// (0x0006536c) blid2_navig_pane_t2_ParamLimits

0x774a,	// (0x0006536c) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0006d70b) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0006d70b) blid2_navig_pane_t

0x775c,	// (0x0006537e) blid2_navig_ring_pane_ParamLimits

0x775c,	// (0x0006537e) blid2_navig_ring_pane

0x776c,	// (0x0006538e) blid2_speed_pane_ParamLimits

0x776c,	// (0x0006538e) blid2_speed_pane

0x7778,	// (0x0006539a) blid2_tripm_pane_g1_ParamLimits

0x7778,	// (0x0006539a) blid2_tripm_pane_g1

0x7788,	// (0x000653aa) blid2_tripm_pane_g2_ParamLimits

0x7788,	// (0x000653aa) blid2_tripm_pane_g2

0x7794,	// (0x000653b6) blid2_tripm_pane_g3_ParamLimits

0x7794,	// (0x000653b6) blid2_tripm_pane_g3

0x77a0,	// (0x000653c2) blid2_tripm_pane_g4_ParamLimits

0x77a0,	// (0x000653c2) blid2_tripm_pane_g4

0x77ac,	// (0x000653ce) blid2_tripm_pane_g5_ParamLimits

0x77ac,	// (0x000653ce) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0006d710) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0006d710) blid2_tripm_pane_g

0x77c8,	// (0x000653ea) blid2_tripm_pane_t1_ParamLimits

0x77c8,	// (0x000653ea) blid2_tripm_pane_t1

0x77da,	// (0x000653fc) blid2_tripm_pane_t2_ParamLimits

0x77da,	// (0x000653fc) blid2_tripm_pane_t2

0x77ec,	// (0x0006540e) blid2_tripm_pane_t3_ParamLimits

0x77ec,	// (0x0006540e) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0006d71d) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0006d71d) blid2_tripm_pane_t

0x781e,	// (0x00065440) cell_blid2_satellite_pane_ParamLimits

0x781e,	// (0x00065440) cell_blid2_satellite_pane

0x783c,	// (0x0006545e) cell_blid2_satellite_pane_g1

0xddc5,	// (0x0006b9e7) cell_blid2_satellite_pane_t1

0xce86,	// (0x0006aaa8) blid2_speed_pane_g1

0xddd3,	// (0x0006b9f5) blid2_speed_pane_t1

0xdde1,	// (0x0006ba03) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0006d726) blid2_speed_pane_t

0xce86,	// (0x0006aaa8) blid2_navig_ring_pane_g1

0x7845,	// (0x00065467) blid2_navig_ring_pane_g2

0x784d,	// (0x0006546f) blid2_navig_ring_pane_g3

0x7855,	// (0x00065477) blid2_navig_ring_pane_g4

0x785d,	// (0x0006547f) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0006d72b) blid2_navig_ring_pane_g

0x9e84,	// (0x00067aa6) bg_popup_window_pane_cp011

0xddef,	// (0x0006ba11) popup_blid2_search_window_g1

0xddf7,	// (0x0006ba19) popup_blid2_search_window_t1

0xde05,	// (0x0006ba27) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0006d736) popup_blid2_search_window_t

0xad08,	// (0x0006892a) main_browser_pane_g1

0xaa14,	// (0x00068636) main_browser_pane_ParamLimits

0x4255,	// (0x00061e77) bg_button_pane_cp011_ParamLimits

0x67da,	// (0x000643fc) cell_vitu2_function_pane_g1_ParamLimits

0xca4e,	// (0x0006a670) bg_popup_sub_pane_cp22_ParamLimits

0x714c,	// (0x00064d6e) input_focus_pane_cp08_ParamLimits

0x7163,	// (0x00064d85) popup_vitu2_query_button_pane_ParamLimits

0x7163,	// (0x00064d85) popup_vitu2_query_button_pane

0x7174,	// (0x00064d96) popup_vitu2_query_input_button_pane

0xdabf,	// (0x0006b6e1) popup_vitu2_query_window_g1_ParamLimits

0x717e,	// (0x00064da0) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0006d63e) popup_vitu2_query_window_g_ParamLimits

0x9e84,	// (0x00067aa6) bg_button_pane_cp026

0x7865,	// (0x00065487) popup_vitu2_query_input_button_pane_g1

0x9e84,	// (0x00067aa6) bg_button_pane_cp025

0xde40,	// (0x0006ba62) popup_vitu2_query_button_pane_t1

0x4cf9,	// (0x0006291b) main_mp3_pane_t6

0x4d09,	// (0x0006292b) popup_slider_window_cp01

0x6405,	// (0x00064027) cam4_battery_pane

0x64e3,	// (0x00064105) cam4_battery_pane_cp02

0x75b9,	// (0x000651db) cam4_battery_pane_cp01

0x75b9,	// (0x000651db) cam4_battery_pane_cp03

0xde28,	// (0x0006ba4a) cam4_battery_pane_g1

0xce86,	// (0x0006aaa8) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0006d73b) cam4_battery_pane_g

0xcd4c,	// (0x0006a96e) popup_blid_sat_info2_window_t11

0xb47c,	// (0x0006909e) aid_size_touch_mv_arrow_left_ParamLimits

0xb4a7,	// (0x000690c9) aid_size_touch_mv_arrow_right_ParamLimits

0xb505,	// (0x00069127) navi_pane_g1_ParamLimits

0xb511,	// (0x00069133) navi_pane_g2_ParamLimits

0xb53f,	// (0x00069161) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0006d003) navi_pane_g_ParamLimits

0x347f,	// (0x000610a1) navi_pane_mv_t1_ParamLimits

0x58a6,	// (0x000634c8) grid_imed_effect_pane_ParamLimits

0x1ee1,	// (0x0005fb03) aid_placing_vt_slider_lsc

0xac53,	// (0x00068875) aid_placing_vt_slider_prt

0xae36,	// (0x00068a58) bg_tb_trans_pane_cp01_ParamLimits

0xcfcd,	// (0x0006abef) popup_image_details_window_g1_ParamLimits

0xcfe0,	// (0x0006ac02) popup_image_details_window_g2_ParamLimits

0xcff5,	// (0x0006ac17) popup_image_details_window_g3_ParamLimits

0xcff5,	// (0x0006ac17) popup_image_details_window_g3

0xf714,	// (0x0006d336) popup_image_details_window_g_ParamLimits

0xd009,	// (0x0006ac2b) popup_image_details_window_t1_ParamLimits

0xd01b,	// (0x0006ac3d) popup_image_details_window_t2_ParamLimits

0xd034,	// (0x0006ac56) popup_image_details_window_t3_ParamLimits

0xd048,	// (0x0006ac6a) popup_image_details_window_t4_ParamLimits

0xd063,	// (0x0006ac85) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0006d33d) popup_image_details_window_t_ParamLimits

0x74e5,	// (0x00065107) cl_header_name_pane_ParamLimits

0x74e5,	// (0x00065107) cl_header_name_pane

0x786d,	// (0x0006548f) cl_header_name_pane_t1_ParamLimits

0x786d,	// (0x0006548f) cl_header_name_pane_t1

0x7884,	// (0x000654a6) cl_header_name_pane_t2_ParamLimits

0x7884,	// (0x000654a6) cl_header_name_pane_t2

0x78ae,	// (0x000654d0) cl_header_name_pane_t3_ParamLimits

0x78ae,	// (0x000654d0) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0006d740) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0006d740) cl_header_name_pane_t

0xb5ce,	// (0x000691f0) navi_pane_mv_g2_ParamLimits

0xd7ed,	// (0x0006b40f) field_vitu2_entry_pane_g1_ParamLimits

0xd7f9,	// (0x0006b41b) field_vitu2_entry_pane_g2_ParamLimits

0xd805,	// (0x0006b427) field_vitu2_entry_pane_g3_ParamLimits

0xd805,	// (0x0006b427) field_vitu2_entry_pane_g3

0xf91b,	// (0x0006d53d) field_vitu2_entry_pane_g_ParamLimits

0x676e,	// (0x00064390) cell_vitu2_itu_pane_g1_ParamLimits

0x6780,	// (0x000643a2) cell_vitu2_itu_pane_g2_ParamLimits

0x6780,	// (0x000643a2) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0006d549) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0006d549) cell_vitu2_itu_pane_g

0x4255,	// (0x00061e77) bg_vkb2_func_pane_cp05_ParamLimits

0x4255,	// (0x00061e77) bg_vkb2_func_pane_cp05

0x4255,	// (0x00061e77) bg_vkb2_func_pane_cp03

0x4255,	// (0x00061e77) bg_vkb2_func_pane_cp04

0x4255,	// (0x00061e77) bg_vkb2_func_pane_cp10_ParamLimits

0x4255,	// (0x00061e77) bg_vkb2_func_pane_cp10

0x7487,	// (0x000650a9) bg_vkb2_func_pane_cp08

0x746d,	// (0x0006508f) bg_vkb2_func_pane_cp06

0x747b,	// (0x0006509d) bg_vkb2_func_pane_cp07

0xdd43,	// (0x0006b965) bg_vkb2_func_pane_cp11_ParamLimits

0xdd43,	// (0x0006b965) bg_vkb2_func_pane_cp11

0xdd58,	// (0x0006b97a) bg_vkb2_func_pane_cp12_ParamLimits

0xdd58,	// (0x0006b97a) bg_vkb2_func_pane_cp12

0x9e84,	// (0x00067aa6) bg_vkb2_func_pane_cp09

0xd825,	// (0x0006b447) bg_vkb2_func_pane_g1

0xae19,	// (0x00068a3b) bg_vkb2_func_pane_g2

0xd82d,	// (0x0006b44f) bg_vkb2_func_pane_g3

0xd835,	// (0x0006b457) bg_vkb2_func_pane_g4

0xda84,	// (0x0006b6a6) bg_vkb2_func_pane_g5

0xd84d,	// (0x0006b46f) bg_vkb2_func_pane_g6

0xd855,	// (0x0006b477) bg_vkb2_func_pane_g7

0xd845,	// (0x0006b467) bg_vkb2_func_pane_g8

0xadf9,	// (0x00068a1b) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0006d747) bg_vkb2_func_pane_g

0x77ba,	// (0x000653dc) blid2_tripm_pane_g6_ParamLimits

0x77ba,	// (0x000653dc) blid2_tripm_pane_g6

0xd739,	// (0x0006b35b) mp4_progress_pane_g1

0x7812,	// (0x00065434) blid2_tripm_values_pane_ParamLimits

0x7812,	// (0x00065434) blid2_tripm_values_pane

0x78d3,	// (0x000654f5) blid2_tripm_values_pane_t1

0x78e1,	// (0x00065503) blid2_tripm_values_pane_t2

0x78ef,	// (0x00065511) blid2_tripm_values_pane_t3

0x78fd,	// (0x0006551f) blid2_tripm_values_pane_t4

0x790b,	// (0x0006552d) blid2_tripm_values_pane_t5

0x7919,	// (0x0006553b) blid2_tripm_values_pane_t6

0x7927,	// (0x00065549) blid2_tripm_values_pane_t7

0x7935,	// (0x00065557) blid2_tripm_values_pane_t8

0x7943,	// (0x00065565) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0006d75a) blid2_tripm_values_pane_t

0x1f1f,	// (0x0005fb41) call_video_pane_t1_ParamLimits

0x1f3c,	// (0x0005fb5e) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0006ce8c) call_video_pane_t_ParamLimits

0x39e4,	// (0x00061606) msg_header_pane_g1_ParamLimits

0xb7ba,	// (0x000693dc) msg_header_pane_g2_ParamLimits

0xb7ba,	// (0x000693dc) msg_header_pane_g2

0x0001,

0xf484,	// (0x0006d0a6) msg_header_pane_g_ParamLimits

0xf484,	// (0x0006d0a6) msg_header_pane_g

0xaa14,	// (0x00068636) main_clock2_pane_ParamLimits

0x561f,	// (0x00063241) grid_clock2_toolbar_pane_ParamLimits

0x561f,	// (0x00063241) grid_clock2_toolbar_pane

0x561f,	// (0x00063241) listscroll_clock2_pane_ParamLimits

0x561f,	// (0x00063241) listscroll_clock2_pane

0x56ce,	// (0x000632f0) main_clock2_pane_t3_ParamLimits

0x56ce,	// (0x000632f0) main_clock2_pane_t3

0x56e0,	// (0x00063302) main_clock2_pane_t4_ParamLimits

0x56e0,	// (0x00063302) main_clock2_pane_t4

0xde4e,	// (0x0006ba70) cell_clock2_toolbar_pane

0xde56,	// (0x0006ba78) cell_clock2_toolbar_pane_cp01

0xde56,	// (0x0006ba78) cell_clock2_toolbar_pane_cp02

0xde5e,	// (0x0006ba80) cell_clock2_toolbar_pane_cp03

0xde66,	// (0x0006ba88) list_clock2_pane

0xb401,	// (0x00069023) scroll_pane_cp10

0xde6e,	// (0x0006ba90) list_single_clock2_pane_ParamLimits

0xde6e,	// (0x0006ba90) list_single_clock2_pane

0xabbc,	// (0x000687de) list_highlight_pane_cp08

0xde7b,	// (0x0006ba9d) list_single_clock2_pane_t1

0xde89,	// (0x0006baab) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0006d76d) list_single_clock2_pane_t

0x9e84,	// (0x00067aa6) bg_button_pane_cp10

0xde97,	// (0x0006bab9) cell_clock2_toolbar_pane_g1

0x3a83,	// (0x000616a5) aid_main_viewer_pane_g1_ParamLimits

0x3a83,	// (0x000616a5) aid_main_viewer_pane_g1

0x3a8f,	// (0x000616b1) aid_main_viewer_pane_g2_ParamLimits

0x3a8f,	// (0x000616b1) aid_main_viewer_pane_g2

0x3a9b,	// (0x000616bd) aid_main_viewer_pane_g3_ParamLimits

0x3a9b,	// (0x000616bd) aid_main_viewer_pane_g3

0x3aac,	// (0x000616ce) aid_main_viewer_pane_g4_ParamLimits

0x3aac,	// (0x000616ce) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0006d0b7) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0006d0b7) aid_main_viewer_pane_g

0x4236,	// (0x00061e58) main_calc_pane_ParamLimits

0x4263,	// (0x00061e85) main_dialer2_pane_ParamLimits

0x0eaa,	// (0x0005eacc) main_cam6_pane

0x0eaa,	// (0x0005eacc) main_vid6_pane

0x562b,	// (0x0006324d) listscroll_gen_pane_cp06_ParamLimits

0x562b,	// (0x0006324d) listscroll_gen_pane_cp06

0x56f2,	// (0x00063314) main_clock2_pane_t5_ParamLimits

0x56f2,	// (0x00063314) main_clock2_pane_t5

0x573f,	// (0x00063361) aid_call2_pane_cp10_ParamLimits

0x5751,	// (0x00063373) aid_call_pane_cp10_ParamLimits

0xb470,	// (0x00069092) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb470,	// (0x00069092) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5763,	// (0x00063385) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5763,	// (0x00063385) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb470,	// (0x00069092) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0006d3f2) popup_clock_analogue_window_cp10_g_ParamLimits

0x5779,	// (0x0006339b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5f93,	// (0x00063bb5) cell_dialer2_keypad_pane_g2_ParamLimits

0x5f93,	// (0x00063bb5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0006d4dc) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0006d4dc) cell_dialer2_keypad_pane_g

0x5faf,	// (0x00063bd1) cell_dialer2_keypad_pane_t1

0x6ab7,	// (0x000646d9) main_cset_text2_pane_ParamLimits

0x6ab7,	// (0x000646d9) main_cset_text2_pane

0xdcab,	// (0x0006b8cd) area_vitu2_query_pane_g1_ParamLimits

0x740c,	// (0x0006502e) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0006d691) area_vitu2_query_pane_g_ParamLimits

0xa697,	// (0x000682b9) area_vitu2_query_pane_t7_ParamLimits

0xa697,	// (0x000682b9) area_vitu2_query_pane_t7

0x746d,	// (0x0006508f) bg_button_pane_cp018_ParamLimits

0x747b,	// (0x0006509d) bg_button_pane_cp021_ParamLimits

0x7487,	// (0x000650a9) bg_button_pane_cp022_ParamLimits

0x7487,	// (0x000650a9) bg_vkb2_func_pane_cp08_ParamLimits

0x746d,	// (0x0006508f) bg_vkb2_func_pane_cp06_ParamLimits

0x747b,	// (0x0006509d) bg_vkb2_func_pane_cp07_ParamLimits

0x7498,	// (0x000650ba) input_focus_pane_cp09_ParamLimits

0x7951,	// (0x00065573) cam6_autofocus_pane_ParamLimits

0x7951,	// (0x00065573) cam6_autofocus_pane

0x7973,	// (0x00065595) cam6_image_uncrop_pane_ParamLimits

0x7973,	// (0x00065595) cam6_image_uncrop_pane

0x79a0,	// (0x000655c2) cam6_indi_pane_ParamLimits

0x79a0,	// (0x000655c2) cam6_indi_pane

0x79ba,	// (0x000655dc) cam6_mode_pane_ParamLimits

0x79ba,	// (0x000655dc) cam6_mode_pane

0x79ce,	// (0x000655f0) cam6_timer_pane_ParamLimits

0x79ce,	// (0x000655f0) cam6_timer_pane

0x79da,	// (0x000655fc) cam6_zoom_pane_ParamLimits

0x79da,	// (0x000655fc) cam6_zoom_pane

0x79f6,	// (0x00065618) cam6_mode_pane_g1_ParamLimits

0x79f6,	// (0x00065618) cam6_mode_pane_g1

0x7a02,	// (0x00065624) cam6_mode_pane_g2_ParamLimits

0x7a02,	// (0x00065624) cam6_mode_pane_g2

0x7a0e,	// (0x00065630) cam6_mode_pane_g3_ParamLimits

0x7a0e,	// (0x00065630) cam6_mode_pane_g3

0x7a1a,	// (0x0006563c) cam6_mode_pane_g4_ParamLimits

0x7a1a,	// (0x0006563c) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0006d772) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0006d772) cam6_mode_pane_g

0xde32,	// (0x0006ba54) bg_tb_trans_pane_cp08_ParamLimits

0xde32,	// (0x0006ba54) bg_tb_trans_pane_cp08

0xde9f,	// (0x0006bac1) cam6_battery_pane_ParamLimits

0xde9f,	// (0x0006bac1) cam6_battery_pane

0xdeb5,	// (0x0006bad7) cam6_indi_pane_g1_ParamLimits

0xdeb5,	// (0x0006bad7) cam6_indi_pane_g1

0xdec7,	// (0x0006bae9) cam6_indi_pane_g2_ParamLimits

0xdec7,	// (0x0006bae9) cam6_indi_pane_g2

0xded9,	// (0x0006bafb) cam6_indi_pane_g3_ParamLimits

0xded9,	// (0x0006bafb) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0006d77b) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0006d77b) cam6_indi_pane_g

0xdeeb,	// (0x0006bb0d) cam6_indi_pane_t1_ParamLimits

0xdeeb,	// (0x0006bb0d) cam6_indi_pane_t1

0x6567,	// (0x00064189) cam6_autofocus_pane_g1

0x655f,	// (0x00064181) cam6_autofocus_pane_g2

0x6577,	// (0x00064199) cam6_autofocus_pane_g3

0x656f,	// (0x00064191) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0006d782) cam6_autofocus_pane_g

0xdf11,	// (0x0006bb33) cam6_timer_pane_g1

0xdf19,	// (0x0006bb3b) cam6_timer_pane_t1

0xdf27,	// (0x0006bb49) cam6_zoom_cont_pane

0xdf2f,	// (0x0006bb51) cam6_zoom_pane_g1

0xdf37,	// (0x0006bb59) cam6_zoom_pane_g2

0x7a26,	// (0x00065648) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0006d78b) cam6_zoom_pane_g

0xce86,	// (0x0006aaa8) cam6_battery_pane_g1

0xce86,	// (0x0006aaa8) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0006d2fa) cam6_battery_pane_g

0xdf3f,	// (0x0006bb61) cam6_zoom_cont_pane_g1

0xdf48,	// (0x0006bb6a) cam6_zoom_cont_pane_g2

0xdf51,	// (0x0006bb73) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0006d792) cam6_zoom_cont_pane_g

0x7a43,	// (0x00065665) cam6_mode_pane_cp_ParamLimits

0x7a43,	// (0x00065665) cam6_mode_pane_cp

0x7a57,	// (0x00065679) cam6_zoom_pane_cp_ParamLimits

0x7a57,	// (0x00065679) cam6_zoom_pane_cp

0x7a73,	// (0x00065695) vid6_image_uncrop_cif_pane_ParamLimits

0x7a73,	// (0x00065695) vid6_image_uncrop_cif_pane

0x7a9f,	// (0x000656c1) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a9f,	// (0x000656c1) vid6_image_uncrop_nhd_pane

0x7abe,	// (0x000656e0) vid6_image_uncrop_vga_pane_ParamLimits

0x7abe,	// (0x000656e0) vid6_image_uncrop_vga_pane

0x7add,	// (0x000656ff) vid6_image_uncrop_wvga_pane_ParamLimits

0x7add,	// (0x000656ff) vid6_image_uncrop_wvga_pane

0x7afc,	// (0x0006571e) vid6_indi_pane_ParamLimits

0x7afc,	// (0x0006571e) vid6_indi_pane

0xde32,	// (0x0006ba54) bg_tb_trans_pane_cp09_ParamLimits

0xde32,	// (0x0006ba54) bg_tb_trans_pane_cp09

0xdf69,	// (0x0006bb8b) cam6_battery_pane_cp_ParamLimits

0xdf69,	// (0x0006bb8b) cam6_battery_pane_cp

0xdf75,	// (0x0006bb97) vid6_indi_pane_g1_ParamLimits

0xdf75,	// (0x0006bb97) vid6_indi_pane_g1

0xdf87,	// (0x0006bba9) vid6_indi_pane_g2_ParamLimits

0xdf87,	// (0x0006bba9) vid6_indi_pane_g2

0xdf99,	// (0x0006bbbb) vid6_indi_pane_g3_ParamLimits

0xdf99,	// (0x0006bbbb) vid6_indi_pane_g3

0xdfb0,	// (0x0006bbd2) vid6_indi_pane_g4_ParamLimits

0xdfb0,	// (0x0006bbd2) vid6_indi_pane_g4

0xdfc7,	// (0x0006bbe9) vid6_indi_pane_g5_ParamLimits

0xdfc7,	// (0x0006bbe9) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0006d799) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0006d799) vid6_indi_pane_g

0xdfe1,	// (0x0006bc03) vid6_indi_pane_t1_ParamLimits

0xdfe1,	// (0x0006bc03) vid6_indi_pane_t1

0xdff7,	// (0x0006bc19) vid6_indi_pane_t2_ParamLimits

0xdff7,	// (0x0006bc19) vid6_indi_pane_t2

0xe01f,	// (0x0006bc41) vid6_indi_pane_t3_ParamLimits

0xe01f,	// (0x0006bc41) vid6_indi_pane_t3

0xe047,	// (0x0006bc69) vid6_indi_pane_t4_ParamLimits

0xe047,	// (0x0006bc69) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0006d7a4) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0006d7a4) vid6_indi_pane_t

0xe06b,	// (0x0006bc8d) wait_bar_pane_cp08

0x7b21,	// (0x00065743) main_cset_text2_pane_t1_ParamLimits

0x7b21,	// (0x00065743) main_cset_text2_pane_t1

0x7a2e,	// (0x00065650) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a2e,	// (0x00065650) listscroll_gen_pane_cp06_t1

0x0eaa,	// (0x0005eacc) main_cam6_set_pane

0x63f7,	// (0x00064019) bg_tb_trans_pane_cp06_ParamLimits

0x640d,	// (0x0006402f) cam4_indicators_pane_g1_ParamLimits

0x641e,	// (0x00064040) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0006d519) cam4_indicators_pane_g_ParamLimits

0x6436,	// (0x00064058) cam4_indicators_pane_t1_ParamLimits

0x4255,	// (0x00061e77) bg_tb_trans_pane_cp07_ParamLimits

0x64ed,	// (0x0006410f) vid4_indicators_pane_g1_ParamLimits

0x6503,	// (0x00064125) vid4_indicators_pane_g2_ParamLimits

0x6517,	// (0x00064139) vid4_indicators_pane_g3_ParamLimits

0x652a,	// (0x0006414c) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0006d52b) vid4_indicators_pane_g_ParamLimits

0x6548,	// (0x0006416a) vid4_indicators_pane_t1_ParamLimits

0x75c1,	// (0x000651e3) vid4_progress_pane_g1_ParamLimits

0x75d1,	// (0x000651f3) vid4_progress_pane_g2_ParamLimits

0x75e1,	// (0x00065203) vid4_progress_pane_g3_ParamLimits

0x641e,	// (0x00064040) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0006d6dc) vid4_progress_pane_g_ParamLimits

0x75f3,	// (0x00065215) vid4_progress_pane_t1_ParamLimits

0x7609,	// (0x0006522b) vid4_progress_pane_t2_ParamLimits

0x761e,	// (0x00065240) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0006d6e7) vid4_progress_pane_t_ParamLimits

0x7633,	// (0x00065255) wait_bar_pane_cp07_ParamLimits

0x7b48,	// (0x0006576a) main_cam6_set_pane_g2_ParamLimits

0x7b48,	// (0x0006576a) main_cam6_set_pane_g2

0x7b54,	// (0x00065776) main_cset6_listscroll_pane_ParamLimits

0x7b54,	// (0x00065776) main_cset6_listscroll_pane

0x7b81,	// (0x000657a3) main_cset6_slider_pane_ParamLimits

0x7b81,	// (0x000657a3) main_cset6_slider_pane

0x7b8d,	// (0x000657af) main_cset6_text2_pane_ParamLimits

0x7b8d,	// (0x000657af) main_cset6_text2_pane

0xe07a,	// (0x0006bc9c) main_cset6_text_pane

0xe082,	// (0x0006bca4) main_cset_list_pane_copy1_ParamLimits

0xe082,	// (0x0006bca4) main_cset_list_pane_copy1

0xe092,	// (0x0006bcb4) scroll_pane_cp028_copy1

0x7ba0,	// (0x000657c2) cset_list_set_pane_copy1

0x7bb0,	// (0x000657d2) aid_position_infowindow_above_copy1

0x7bb8,	// (0x000657da) aid_position_infowindow_below_copy1

0x7bc0,	// (0x000657e2) cset_list_set_pane_g1_copy1

0x7bc8,	// (0x000657ea) cset_list_set_pane_g3_copy1_ParamLimits

0x7bc8,	// (0x000657ea) cset_list_set_pane_g3_copy1

0x7bd7,	// (0x000657f9) cset_list_set_pane_t1_copy1_ParamLimits

0x7bd7,	// (0x000657f9) cset_list_set_pane_t1_copy1

0xae36,	// (0x00068a58) list_highlight_pane_cp021_copy1_ParamLimits

0xae36,	// (0x00068a58) list_highlight_pane_cp021_copy1

0xe09b,	// (0x0006bcbd) cset6_slider_pane_ParamLimits

0xe09b,	// (0x0006bcbd) cset6_slider_pane

0xe0c7,	// (0x0006bce9) main_cset6_slider_pane_g1_ParamLimits

0xe0c7,	// (0x0006bce9) main_cset6_slider_pane_g1

0x7bec,	// (0x0006580e) main_cset6_slider_pane_g2_ParamLimits

0x7bec,	// (0x0006580e) main_cset6_slider_pane_g2

0xe0ef,	// (0x0006bd11) main_cset6_slider_pane_g3_ParamLimits

0xe0ef,	// (0x0006bd11) main_cset6_slider_pane_g3

0x7c14,	// (0x00065836) main_cset6_slider_pane_g4_ParamLimits

0x7c14,	// (0x00065836) main_cset6_slider_pane_g4

0x7c20,	// (0x00065842) main_cset6_slider_pane_g5_ParamLimits

0x7c20,	// (0x00065842) main_cset6_slider_pane_g5

0xd958,	// (0x0006b57a) main_cset6_slider_pane_g7_ParamLimits

0xd958,	// (0x0006b57a) main_cset6_slider_pane_g7

0xd964,	// (0x0006b586) main_cset6_slider_pane_g8_ParamLimits

0xd964,	// (0x0006b586) main_cset6_slider_pane_g8

0x7c2c,	// (0x0006584e) main_cset6_slider_pane_g9_ParamLimits

0x7c2c,	// (0x0006584e) main_cset6_slider_pane_g9

0x7c38,	// (0x0006585a) main_cset6_slider_pane_g10_ParamLimits

0x7c38,	// (0x0006585a) main_cset6_slider_pane_g10

0x7c44,	// (0x00065866) main_cset6_slider_pane_g11_ParamLimits

0x7c44,	// (0x00065866) main_cset6_slider_pane_g11

0x7c50,	// (0x00065872) main_cset6_slider_pane_g12_ParamLimits

0x7c50,	// (0x00065872) main_cset6_slider_pane_g12

0x7c5c,	// (0x0006587e) main_cset6_slider_pane_g13_ParamLimits

0x7c5c,	// (0x0006587e) main_cset6_slider_pane_g13

0x7c68,	// (0x0006588a) main_cset6_slider_pane_g14_ParamLimits

0x7c68,	// (0x0006588a) main_cset6_slider_pane_g14

0x7c74,	// (0x00065896) main_cset6_slider_pane_g15_ParamLimits

0x7c74,	// (0x00065896) main_cset6_slider_pane_g15

0x7c8c,	// (0x000658ae) main_cset6_slider_pane_g16_ParamLimits

0x7c8c,	// (0x000658ae) main_cset6_slider_pane_g16

0x7c98,	// (0x000658ba) main_cset6_slider_pane_g17_ParamLimits

0x7c98,	// (0x000658ba) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0006d7ad) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0006d7ad) main_cset6_slider_pane_g

0xe0fb,	// (0x0006bd1d) main_cset6_slider_pane_t1_ParamLimits

0xe0fb,	// (0x0006bd1d) main_cset6_slider_pane_t1

0x7cbc,	// (0x000658de) main_cset6_slider_pane_t2_ParamLimits

0x7cbc,	// (0x000658de) main_cset6_slider_pane_t2

0x7ce7,	// (0x00065909) main_cset6_slider_pane_t3_ParamLimits

0x7ce7,	// (0x00065909) main_cset6_slider_pane_t3

0x7d12,	// (0x00065934) main_cset6_slider_pane_t4_ParamLimits

0x7d12,	// (0x00065934) main_cset6_slider_pane_t4

0x7d3d,	// (0x0006595f) main_cset6_slider_pane_t5_ParamLimits

0x7d3d,	// (0x0006595f) main_cset6_slider_pane_t5

0xe13c,	// (0x0006bd5e) main_cset6_slider_pane_t7_ParamLimits

0xe13c,	// (0x0006bd5e) main_cset6_slider_pane_t7

0x7d68,	// (0x0006598a) main_cset6_slider_pane_t8_ParamLimits

0x7d68,	// (0x0006598a) main_cset6_slider_pane_t8

0x7d8c,	// (0x000659ae) main_cset6_slider_pane_t9_ParamLimits

0x7d8c,	// (0x000659ae) main_cset6_slider_pane_t9

0x7db0,	// (0x000659d2) main_cset6_slider_pane_t10_ParamLimits

0x7db0,	// (0x000659d2) main_cset6_slider_pane_t10

0x7dd4,	// (0x000659f6) main_cset6_slider_pane_t11_ParamLimits

0x7dd4,	// (0x000659f6) main_cset6_slider_pane_t11

0xe172,	// (0x0006bd94) main_cset6_slider_pane_t14_ParamLimits

0xe172,	// (0x0006bd94) main_cset6_slider_pane_t14

0xe1ab,	// (0x0006bdcd) main_cset6_slider_pane_t15_ParamLimits

0xe1ab,	// (0x0006bdcd) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0006d7d2) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0006d7d2) main_cset6_slider_pane_t

0xe1e4,	// (0x0006be06) cset_slider_pane_g1_copy1

0xe1ed,	// (0x0006be0f) cset_slider_pane_g2_copy1

0xe1f6,	// (0x0006be18) cset_slider_pane_g3_copy1

0x9e84,	// (0x00067aa6) bg_popup_sub_pane_cp011_copy1

0xe1ff,	// (0x0006be21) main_cset_text_pane_g1_copy1

0xdad3,	// (0x0006b6f5) main_cset_text_pane_t1_copy1

0xdae1,	// (0x0006b703) main_cset_text_pane_t2_copy1

0xdaef,	// (0x0006b711) main_cset_text_pane_t3_copy1

0xdafd,	// (0x0006b71f) main_cset_text_pane_t4_copy1

0xdb0b,	// (0x0006b72d) main_cset_text_pane_t5_copy1

0xe207,	// (0x0006be29) main_cset_text_pane_t6_copy1

0xe215,	// (0x0006be37) main_cset_text_pane_t7_copy1

0x7ece,	// (0x00065af0) main_cset_text2_pane_t1_copy1

0x4255,	// (0x00061e77) main_ncimui_pane

0x42bc,	// (0x00061ede) popup_query_ncimui_window_ParamLimits

0x42bc,	// (0x00061ede) popup_query_ncimui_window

0xa5f6,	// (0x00068218) field_cale_ev2_pane_g4_ParamLimits

0xa5f6,	// (0x00068218) field_cale_ev2_pane_g4

0x5c6b,	// (0x0006388d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5c6b,	// (0x0006388d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0006d4b3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0006d4b3) cell_video_dialer_keypad_pane_g

0x5c83,	// (0x000638a5) cell_video_dialer_keypad_pane_t1

0x9e84,	// (0x00067aa6) bg_popup_window_pane_cp012

0xb2ed,	// (0x00068f0f) heading_pane_cp06

0xe241,	// (0x0006be63) ncim_query_content_pane

0x9e84,	// (0x00067aa6) bg_popup_heading_pane_cp01

0xe249,	// (0x0006be6b) ncim_heading_pane_t1

0xe257,	// (0x0006be79) ncim_indicator_popup_pane

0xe269,	// (0x0006be8b) ncim_query_button_pane

0xe296,	// (0x0006beb8) ncim_query_content_pane_t1

0xe2a8,	// (0x0006beca) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0006d816) ncim_query_content_pane_t

0xe2e2,	// (0x0006bf04) ncim_query_list_pane

0xe2f4,	// (0x0006bf16) ncim_query_popup_pane

0xe257,	// (0x0006be79) ncim_indicator_popup_pane_ParamLimits

0x802a,	// (0x00065c4c) ncim_query_content_pane_g1_ParamLimits

0x802a,	// (0x00065c4c) ncim_query_content_pane_g1

0xe296,	// (0x0006beb8) ncim_query_content_pane_t1_ParamLimits

0xe2a8,	// (0x0006beca) ncim_query_content_pane_t2_ParamLimits

0x8036,	// (0x00065c58) ncim_query_content_pane_t3_ParamLimits

0x8036,	// (0x00065c58) ncim_query_content_pane_t3

0x8053,	// (0x00065c75) ncim_query_content_pane_t4_ParamLimits

0x8053,	// (0x00065c75) ncim_query_content_pane_t4

0x8070,	// (0x00065c92) ncim_query_content_pane_t5_ParamLimits

0x8070,	// (0x00065c92) ncim_query_content_pane_t5

0xe2ba,	// (0x0006bedc) ncim_query_content_pane_t6_ParamLimits

0xe2ba,	// (0x0006bedc) ncim_query_content_pane_t6

0xfbf4,	// (0x0006d816) ncim_query_content_pane_t_ParamLimits

0xe2e2,	// (0x0006bf04) ncim_query_list_pane_ParamLimits

0xe2f4,	// (0x0006bf16) ncim_query_popup_pane_ParamLimits

0xe308,	// (0x0006bf2a) wait_bar_pane_cp04

0x9e84,	// (0x00067aa6) input_focus_pane_cp011

0xe310,	// (0x0006bf32) ncim_query_popup_pane_t1

0xe31e,	// (0x0006bf40) ncim_list_query_list_pane_ParamLimits

0xe31e,	// (0x0006bf40) ncim_list_query_list_pane

0x9e84,	// (0x00067aa6) bg_button_pane_cp027

0xe331,	// (0x0006bf53) ncim_query_button_pane_g1

0x9e84,	// (0x00067aa6) list_highlight_pane_cp012

0xe33b,	// (0x0006bf5d) ncim_list_query_list_pane_g1

0xe343,	// (0x0006bf65) ncim_list_query_list_pane_t1

0x642a,	// (0x0006404c) cam4_indicators_pane_g3_ParamLimits

0x642a,	// (0x0006404c) cam4_indicators_pane_g3

0x6536,	// (0x00064158) vid4_indicators_pane_g5_ParamLimits

0x6536,	// (0x00064158) vid4_indicators_pane_g5

0x642a,	// (0x0006404c) vid4_progress_pane_g5_ParamLimits

0x642a,	// (0x0006404c) vid4_progress_pane_g5

0x7f00,	// (0x00065b22) main_ncimui_pane_g1

0x7f6c,	// (0x00065b8e) ncimui_group_query_pane_ParamLimits

0x7f6c,	// (0x00065b8e) ncimui_group_query_pane

0x7fc6,	// (0x00065be8) ncimui_list_pane_ParamLimits

0x7fc6,	// (0x00065be8) ncimui_list_pane

0x7fed,	// (0x00065c0f) ncimui_text_pane_ParamLimits

0x7fed,	// (0x00065c0f) ncimui_text_pane

0x808d,	// (0x00065caf) ncimui_text_pane_t1_ParamLimits

0x808d,	// (0x00065caf) ncimui_text_pane_t1

0xe351,	// (0x0006bf73) ncimui_list_single_graphic_pane_ParamLimits

0xe351,	// (0x0006bf73) ncimui_list_single_graphic_pane

0x80ac,	// (0x00065cce) ncimui_query_pane_ParamLimits

0x80ac,	// (0x00065cce) ncimui_query_pane

0x9e84,	// (0x00067aa6) list_highlight_pane_cp013

0xe361,	// (0x0006bf83) ncim_list_query_list_pane_t1_copy1

0xe33b,	// (0x0006bf5d) ncim_list_single_graphic_pane_g1

0x80bf,	// (0x00065ce1) ncim_query_button_pane_cp01

0x80cb,	// (0x00065ced) ncim_query_entry_pane_ParamLimits

0x80cb,	// (0x00065ced) ncim_query_entry_pane

0x80de,	// (0x00065d00) ncimui_query_pane_g1

0x80ea,	// (0x00065d0c) ncimui_query_pane_t1_ParamLimits

0x80ea,	// (0x00065d0c) ncimui_query_pane_t1

0xae36,	// (0x00068a58) input_focus_pane_cp012

0xe36f,	// (0x0006bf91) ncim_query_entry_pane_t1

0xaa14,	// (0x00068636) main_im_pane_ParamLimits

0x4255,	// (0x00061e77) main_mobtv_pane_ParamLimits

0x4255,	// (0x00061e77) main_mobtv_pane

0x7ca4,	// (0x000658c6) main_cset6_slider_pane_g18_ParamLimits

0x7ca4,	// (0x000658c6) main_cset6_slider_pane_g18

0x7cb0,	// (0x000658d2) main_cset6_slider_pane_g19_ParamLimits

0x7cb0,	// (0x000658d2) main_cset6_slider_pane_g19

0xd805,	// (0x0006b427) bg_main_mobtv_pane_ParamLimits

0xd805,	// (0x0006b427) bg_main_mobtv_pane

0x8103,	// (0x00065d25) main_mobtv_info_pane

0x810e,	// (0x00065d30) main_mobtv_loading_pane_ParamLimits

0x810e,	// (0x00065d30) main_mobtv_loading_pane

0xe381,	// (0x0006bfa3) main_mobtv_pg_channel_list_pane

0xe38b,	// (0x0006bfad) main_mobtv_pg_hdr_pane

0x811b,	// (0x00065d3d) main_mobtv_programe_curr_pane_ParamLimits

0x811b,	// (0x00065d3d) main_mobtv_programe_curr_pane

0x8128,	// (0x00065d4a) main_mobtv_programe_next_pane_ParamLimits

0x8128,	// (0x00065d4a) main_mobtv_programe_next_pane

0xe394,	// (0x0006bfb6) popup_mobtv_noti_window

0xce86,	// (0x0006aaa8) main_tv_pg_hdr_pane_g1

0xe39e,	// (0x0006bfc0) main_tv_pg_hdr_pane_g2

0xe3a6,	// (0x0006bfc8) main_tv_pg_hdr_pane_g3

0xe3ae,	// (0x0006bfd0) main_tv_pg_hdr_pane_g4

0xe3b6,	// (0x0006bfd8) main_tv_pg_hdr_pane_g5

0xe3c0,	// (0x0006bfe2) main_tv_pg_hdr_pane_g6

0xe3ca,	// (0x0006bfec) main_tv_pg_hdr_pane_g7

0xe3d4,	// (0x0006bff6) main_tv_pg_hdr_pane_g8

0xe3de,	// (0x0006c000) main_tv_pg_hdr_pane_g9

0xe3e8,	// (0x0006c00a) main_tv_pg_hdr_pane_g10

0xe3f2,	// (0x0006c014) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0006d823) main_tv_pg_hdr_pane_g

0xe3fc,	// (0x0006c01e) main_tv_pg_hdr_pane_t1

0xe40a,	// (0x0006c02c) main_tv_pg_hdr_pane_t2

0xe418,	// (0x0006c03a) main_tv_pg_hdr_pane_t3

0xe428,	// (0x0006c04a) main_tv_pg_hdr_pane_t4

0xe438,	// (0x0006c05a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0006d83a) main_tv_pg_hdr_pane_t

0xe448,	// (0x0006c06a) single_mobtv_pg_channel_pane_ParamLimits

0xe448,	// (0x0006c06a) single_mobtv_pg_channel_pane

0xe45a,	// (0x0006c07c) single_mobtv_pg_channel_table_pane

0xe463,	// (0x0006c085) single_mobtv_pg_channel_thumb_pane

0xe46c,	// (0x0006c08e) single_tv_pg_channel_pane_g1

0xe475,	// (0x0006c097) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0006d845) single_tv_pg_channel_pane_g

0xd0ad,	// (0x0006accf) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd0ad,	// (0x0006accf) bg_single_mobtv_pg_channel_thumb_pane

0xe47e,	// (0x0006c0a0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe47e,	// (0x0006c0a0) single_mobtv_pg_channel_thumb_pane_g1

0xe48c,	// (0x0006c0ae) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe48c,	// (0x0006c0ae) single_mobtv_pg_channel_thumb_pane_g2

0xe498,	// (0x0006c0ba) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe498,	// (0x0006c0ba) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0006d84a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0006d84a) single_mobtv_pg_channel_thumb_pane_g

0xe4a4,	// (0x0006c0c6) single_mobtv_pg_channel_thumb_pane_t1

0xe4b2,	// (0x0006c0d4) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0006d851) single_mobtv_pg_channel_thumb_pane_t

0xce86,	// (0x0006aaa8) bg_single_mobtv_pg_channel_table_pane_g1

0xce86,	// (0x0006aaa8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0006d2fa) bg_single_mobtv_pg_channel_table_pane_g

0xe4c0,	// (0x0006c0e2) single_mobtv_pg_channel_table_pane_t1

0xe4ce,	// (0x0006c0f0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0006d856) single_mobtv_pg_channel_table_pane_t

0x813d,	// (0x00065d5f) main_mobtv_info_pane_g1_ParamLimits

0x813d,	// (0x00065d5f) main_mobtv_info_pane_g1

0x8159,	// (0x00065d7b) main_mobtv_info_pane_t1_ParamLimits

0x8159,	// (0x00065d7b) main_mobtv_info_pane_t1

0x81d1,	// (0x00065df3) main_mobtv_info_pane_t2_ParamLimits

0x81d1,	// (0x00065df3) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0006d860) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0006d860) main_mobtv_info_pane_t

0x8262,	// (0x00065e84) wait_bar_pane_cp05

0x8274,	// (0x00065e96) main_mobtv_loading_pane_g1_ParamLimits

0x8274,	// (0x00065e96) main_mobtv_loading_pane_g1

0x8280,	// (0x00065ea2) main_mobtv_loading_pane_g2_ParamLimits

0x8280,	// (0x00065ea2) main_mobtv_loading_pane_g2

0x828c,	// (0x00065eae) main_mobtv_loading_pane_g3_ParamLimits

0x828c,	// (0x00065eae) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0006d867) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0006d867) main_mobtv_loading_pane_g

0xe4dc,	// (0x0006c0fe) main_mobtv_loading_pane_t1_ParamLimits

0xe4dc,	// (0x0006c0fe) main_mobtv_loading_pane_t1

0xe4f4,	// (0x0006c116) main_mobtv_loading_pane_t2_ParamLimits

0xe4f4,	// (0x0006c116) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0006d86e) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0006d86e) main_mobtv_loading_pane_t

0x829a,	// (0x00065ebc) wait_bar_pane_cp06_ParamLimits

0x829a,	// (0x00065ebc) wait_bar_pane_cp06

0xe518,	// (0x0006c13a) main_mobtv_programe_curr_pane_t1

0xe526,	// (0x0006c148) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0006d873) main_mobtv_programe_curr_pane_t

0xe534,	// (0x0006c156) main_mobtv_programe_next_pane_t1

0xe542,	// (0x0006c164) main_mobtv_programe_next_pane_t2

0xe550,	// (0x0006c172) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0006d878) main_mobtv_programe_next_pane_t

0x9e84,	// (0x00067aa6) bg_popup_mobtv_noti_window_pane

0xe55e,	// (0x0006c180) popup_mobtv_noti_window_g1

0xe566,	// (0x0006c188) popup_mobtv_noti_window_t1

0xe574,	// (0x0006c196) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0006d87f) popup_mobtv_noti_window_t

0xce86,	// (0x0006aaa8) bg_popup_mobtv_noti_window_pane_g1

0x0eaa,	// (0x0005eacc) sc_clock_pane

0x0eaa,	// (0x0005eacc) main_fs_bigclock_pane

0x7800,	// (0x00065422) blid2_tripm_pane_t4_ParamLimits

0x7800,	// (0x00065422) blid2_tripm_pane_t4

0x82a6,	// (0x00065ec8) sc_clock_pane_g1_ParamLimits

0x82a6,	// (0x00065ec8) sc_clock_pane_g1

0x82b4,	// (0x00065ed6) sc_clock_pane_t1_ParamLimits

0x82b4,	// (0x00065ed6) sc_clock_pane_t1

0x82c9,	// (0x00065eeb) sc_clock_pane_t2_ParamLimits

0x82c9,	// (0x00065eeb) sc_clock_pane_t2

0x82db,	// (0x00065efd) sc_clock_pane_t3_ParamLimits

0x82db,	// (0x00065efd) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0006d884) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0006d884) sc_clock_pane_t

0x934d,	// (0x00066f6f) main_fs_bigclock_indicator_pane_ParamLimits

0x934d,	// (0x00066f6f) main_fs_bigclock_indicator_pane

0x836a,	// (0x00065f8c) main_fs_bigclock_pane_g1_ParamLimits

0x836a,	// (0x00065f8c) main_fs_bigclock_pane_g1

0x9359,	// (0x00066f7b) main_fs_bigclock_pane_t1_ParamLimits

0x9359,	// (0x00066f7b) main_fs_bigclock_pane_t1

0x936b,	// (0x00066f8d) main_fs_bigclock_pane_t2_ParamLimits

0x936b,	// (0x00066f8d) main_fs_bigclock_pane_t2

0x937f,	// (0x00066fa1) main_fs_bigclock_pane_t3_ParamLimits

0x937f,	// (0x00066fa1) main_fs_bigclock_pane_t3

0x0002,

0xfe6c,	// (0x0006da8e) main_fs_bigclock_pane_t_ParamLimits

0xfe6c,	// (0x0006da8e) main_fs_bigclock_pane_t

0xecf7,	// (0x0006c919) main_fs_bigclock_indicator_pane_g1

0xe288,	// (0x0006beaa) ncim_query_content_pane_g2_ParamLimits

0xe288,	// (0x0006beaa) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0006d811) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0006d811) ncim_query_content_pane_g

0x82ed,	// (0x00065f0f) sc_clock_pane_t4_ParamLimits

0x82ed,	// (0x00065f0f) sc_clock_pane_t4

0x4255,	// (0x00061e77) main_radioblah_pane

0x62c0,	// (0x00063ee2) cell_call4_button_pane_t1_copy1_ParamLimits

0x62c0,	// (0x00063ee2) cell_call4_button_pane_t1_copy1

0x7f1c,	// (0x00065b3e) main_ncimui_pane_t1_ParamLimits

0x7f1c,	// (0x00065b3e) main_ncimui_pane_t1

0x7f36,	// (0x00065b58) main_ncimui_pane_t2_ParamLimits

0x7f36,	// (0x00065b58) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0006d80a) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0006d80a) main_ncimui_pane_t

0xe582,	// (0x0006c1a4) main_radioblah_anim_pane_ParamLimits

0xe582,	// (0x0006c1a4) main_radioblah_anim_pane

0xe593,	// (0x0006c1b5) main_radioblah_info_pane_ParamLimits

0xe593,	// (0x0006c1b5) main_radioblah_info_pane

0xe5a7,	// (0x0006c1c9) main_radioblah_pane_t1_ParamLimits

0xe5a7,	// (0x0006c1c9) main_radioblah_pane_t1

0xe5c3,	// (0x0006c1e5) main_radioblah_pane_t2_ParamLimits

0xe5c3,	// (0x0006c1e5) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0006d8a5) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0006d8a5) main_radioblah_pane_t

0x8509,	// (0x0006612b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8509,	// (0x0006612b) main_radioblah_rocker_ctrl_pane

0xe60b,	// (0x0006c22d) main_radioblah_info_pane_t1_ParamLimits

0xe60b,	// (0x0006c22d) main_radioblah_info_pane_t1

0x8552,	// (0x00066174) main_radioblah_info_pane_t2_ParamLimits

0x8552,	// (0x00066174) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0006d8ae) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0006d8ae) main_radioblah_info_pane_t

0xce86,	// (0x0006aaa8) main_radioblah_rocker_ctrl_pane_g1

0x8602,	// (0x00066224) main_radioblah_rocker_ctrl_pane_g2

0x860a,	// (0x0006622c) main_radioblah_rocker_ctrl_pane_g3

0x8612,	// (0x00066234) main_radioblah_rocker_ctrl_pane_g4

0x861a,	// (0x0006623c) main_radioblah_rocker_ctrl_pane_g5

0x8622,	// (0x00066244) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0006d8b7) main_radioblah_rocker_ctrl_pane_g

0x7ece,	// (0x00065af0) main_cset_text2_pane_t1_copy1_ParamLimits

0x6349,	// (0x00063f6b) cam4_image_uncrop_qvga_pane

0x649c,	// (0x000640be) vid4_image_uncrop_qcif_pane

0x7992,	// (0x000655b4) cam6_image_uncrop_qvga_pane_ParamLimits

0x7992,	// (0x000655b4) cam6_image_uncrop_qvga_pane

0xdf59,	// (0x0006bb7b) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf59,	// (0x0006bb7b) vid6_image_uncrop_qcif_pane

0x9e84,	// (0x00067aa6) bg_popup_preview_window_pane_cp03

0xe223,	// (0x0006be45) list_cset_text2_pane

0xe22b,	// (0x0006be4d) main_cset6_text2_pane_g1

0xe233,	// (0x0006be55) main_cset6_text2_pane_t1

0x862a,	// (0x0006624c) list_cset_text2_pane_t1_ParamLimits

0x862a,	// (0x0006624c) list_cset_text2_pane_t1

0x4255,	// (0x00061e77) main_radioblah_pane_ParamLimits

0x824e,	// (0x00065e70) main_mobtv_info_pane_t3_ParamLimits

0x824e,	// (0x00065e70) main_mobtv_info_pane_t3

0x84f7,	// (0x00066119) main_radioblah_pane_g1

0x8522,	// (0x00066144) main_radioblah_info_pane_g1

0x85a7,	// (0x000661c9) main_radioblah_info_pane_t3_ParamLimits

0x85a7,	// (0x000661c9) main_radioblah_info_pane_t3

0x2ee7,	// (0x00060b09) highlight_cell_cale_month_pane_ParamLimits

0x2ee7,	// (0x00060b09) highlight_cell_cale_month_pane

0x0eaa,	// (0x0005eacc) main_phob_fisheye_pane

0xd189,	// (0x0006adab) scroll_pane_cp0031_ParamLimits

0xd189,	// (0x0006adab) scroll_pane_cp0031

0xe06b,	// (0x0006bc8d) wait_bar_pane_cp08_ParamLimits

0x7ba0,	// (0x000657c2) cset_list_set_pane_copy1_ParamLimits

0xe645,	// (0x0006c267) highlight_cell_cale_month_pane_g1

0x8641,	// (0x00066263) highlight_cell_cale_month_pane_t1

0xdcff,	// (0x0006b921) list_gen_pane_cp01

0xd943,	// (0x0006b565) scroll_pane_01

0x864f,	// (0x00066271) list_single_double_fisheye_pane

0x8658,	// (0x0006627a) list_double_fisheye_pane_g1_ParamLimits

0x8658,	// (0x0006627a) list_double_fisheye_pane_g1

0x8664,	// (0x00066286) list_double_fisheye_pane_g2_ParamLimits

0x8664,	// (0x00066286) list_double_fisheye_pane_g2

0x8678,	// (0x0006629a) list_double_fisheye_pane_g3_ParamLimits

0x8678,	// (0x0006629a) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0006d8c4) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0006d8c4) list_double_fisheye_pane_g

0x86a1,	// (0x000662c3) list_double_fisheye_pane_t1_ParamLimits

0x86a1,	// (0x000662c3) list_double_fisheye_pane_t1

0x86bc,	// (0x000662de) list_double_fisheye_pane_t2_ParamLimits

0x86bc,	// (0x000662de) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0006d8cf) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0006d8cf) list_double_fisheye_pane_t

0x0eaa,	// (0x0005eacc) main_call5_pane

0x8313,	// (0x00065f35) sc_swipe_pane_ParamLimits

0x8313,	// (0x00065f35) sc_swipe_pane

0x86ea,	// (0x0006630c) call5_image_pane_ParamLimits

0x86ea,	// (0x0006630c) call5_image_pane

0x86fc,	// (0x0006631e) call5_swipe_1_pane_ParamLimits

0x86fc,	// (0x0006631e) call5_swipe_1_pane

0x8708,	// (0x0006632a) call5_swipe_2_pane_ParamLimits

0x8708,	// (0x0006632a) call5_swipe_2_pane

0x8722,	// (0x00066344) popup_call5_audio_first_window_ParamLimits

0x8722,	// (0x00066344) popup_call5_audio_first_window

0xd0ad,	// (0x0006accf) call5_swipe_1_pane_g1_ParamLimits

0xd0ad,	// (0x0006accf) call5_swipe_1_pane_g1

0xe64d,	// (0x0006c26f) call5_swipe_1_pane_g2_ParamLimits

0xe64d,	// (0x0006c26f) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0006d8d4) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0006d8d4) call5_swipe_1_pane_g

0xe659,	// (0x0006c27b) call5_swipe_1_pane_t1_ParamLimits

0xe659,	// (0x0006c27b) call5_swipe_1_pane_t1

0xd0ad,	// (0x0006accf) call5_swipe_2_pane_g1_ParamLimits

0xd0ad,	// (0x0006accf) call5_swipe_2_pane_g1

0xe66e,	// (0x0006c290) call5_swipe_2_pane_g2_ParamLimits

0xe66e,	// (0x0006c290) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0006d8d9) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0006d8d9) call5_swipe_2_pane_g

0xe67a,	// (0x0006c29c) call5_swipe_2_pane_t1_ParamLimits

0xe67a,	// (0x0006c29c) call5_swipe_2_pane_t1

0xe6bd,	// (0x0006c2df) sc_swipe_pane_g1_ParamLimits

0xe6bd,	// (0x0006c2df) sc_swipe_pane_g1

0xe6ca,	// (0x0006c2ec) sc_swipe_pane_g2_ParamLimits

0xe6ca,	// (0x0006c2ec) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0006d8de) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0006d8de) sc_swipe_pane_g

0xe6d6,	// (0x0006c2f8) sc_swipe_pane_t1_ParamLimits

0xe6d6,	// (0x0006c2f8) sc_swipe_pane_t1

0x0eaa,	// (0x0005eacc) main_cmail_launcher_pane

0x8732,	// (0x00066354) aid_size_cell_cmail_l_ParamLimits

0x8732,	// (0x00066354) aid_size_cell_cmail_l

0x8740,	// (0x00066362) grid_cmail_l_pane_ParamLimits

0x8740,	// (0x00066362) grid_cmail_l_pane

0x8750,	// (0x00066372) cell_cmail_l_pane_ParamLimits

0x8750,	// (0x00066372) cell_cmail_l_pane

0xe6eb,	// (0x0006c30d) cell_cmail_l_pane_g1_ParamLimits

0xe6eb,	// (0x0006c30d) cell_cmail_l_pane_g1

0xe6f7,	// (0x0006c319) cell_cmail_l_pane_t1_ParamLimits

0xe6f7,	// (0x0006c319) cell_cmail_l_pane_t1

0xe70d,	// (0x0006c32f) cell_cmail_l_pane_t2_ParamLimits

0xe70d,	// (0x0006c32f) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0006d8e3) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0006d8e3) cell_cmail_l_pane_t

0xae36,	// (0x00068a58) grid_highlight_pane_cp018_ParamLimits

0xae36,	// (0x00068a58) grid_highlight_pane_cp018

0x0cfd,	// (0x0005e91f) main2_pane_ParamLimits

0x0cfd,	// (0x0005e91f) main2_pane

0xaaad,	// (0x000686cf) popup_sp_fs_action_menu_bg_pane_g1

0xaab5,	// (0x000686d7) popup_sp_fs_action_menu_bg_pane_g2

0xaabd,	// (0x000686df) popup_sp_fs_action_menu_bg_pane_g3

0xaac5,	// (0x000686e7) popup_sp_fs_action_menu_bg_pane_g4

0xaacd,	// (0x000686ef) popup_sp_fs_action_menu_bg_pane_g5

0xaad5,	// (0x000686f7) popup_sp_fs_action_menu_bg_pane_g6

0xaadd,	// (0x000686ff) popup_sp_fs_action_menu_bg_pane_g7

0xaae5,	// (0x00068707) popup_sp_fs_action_menu_bg_pane_g8

0xaaed,	// (0x0006870f) popup_sp_fs_action_menu_bg_pane_g9

0xaaf5,	// (0x00068717) popup_sp_fs_action_menu_bg_pane_g10

0xaaf5,	// (0x00068717) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0006cda8) popup_sp_fs_action_menu_bg_pane_g

0x1d58,	// (0x0005f97a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x2_t3_g3_g1

0x1d64,	// (0x0005f986) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1d64,	// (0x0005f986) list_medium_line_x2_t3_g3_g2

0x1d70,	// (0x0005f992) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d70,	// (0x0005f992) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0006ce56) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0006ce56) list_medium_line_x2_t3_g3_g

0x1d7c,	// (0x0005f99e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d7c,	// (0x0005f99e) list_medium_line_x2_t3_g3_t1

0x1d91,	// (0x0005f9b3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1d91,	// (0x0005f9b3) list_medium_line_x2_t3_g3_t2

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0006ce5d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0006ce5d) list_medium_line_x2_t3_g3_t

0x1d58,	// (0x0005f97a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x2_t3_g2_g1

0x1d70,	// (0x0005f992) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d70,	// (0x0005f992) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0006ce64) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0006ce64) list_medium_line_x2_t3_g2_g

0x1dba,	// (0x0005f9dc) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1dba,	// (0x0005f9dc) list_medium_line_x2_t3_g2_t1

0x1dd0,	// (0x0005f9f2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1dd0,	// (0x0005f9f2) list_medium_line_x2_t3_g2_t2

0x1de2,	// (0x0005fa04) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1de2,	// (0x0005fa04) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0006ce69) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0006ce69) list_medium_line_x2_t3_g2_t

0x1d58,	// (0x0005f97a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x2_t4_g4_g1

0x1e00,	// (0x0005fa22) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1e00,	// (0x0005fa22) list_medium_line_x2_t4_g4_g2

0x1d64,	// (0x0005f986) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1d64,	// (0x0005f986) list_medium_line_x2_t4_g4_g3

0x1e0c,	// (0x0005fa2e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1e0c,	// (0x0005fa2e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0006ce70) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0006ce70) list_medium_line_x2_t4_g4_g

0x1e18,	// (0x0005fa3a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e18,	// (0x0005fa3a) list_medium_line_x2_t4_g4_t1

0x1e32,	// (0x0005fa54) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e32,	// (0x0005fa54) list_medium_line_x2_t4_g4_t2

0x1e48,	// (0x0005fa6a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e48,	// (0x0005fa6a) list_medium_line_x2_t4_g4_t3

0x1e5d,	// (0x0005fa7f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e5d,	// (0x0005fa7f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0006ce79) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0006ce79) list_medium_line_x2_t4_g4_t

0x1d58,	// (0x0005f97a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x2_t2_g4_g1

0x1e00,	// (0x0005fa22) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1e00,	// (0x0005fa22) list_medium_line_x2_t2_g4_g2

0x1d64,	// (0x0005f986) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1d64,	// (0x0005f986) list_medium_line_x2_t2_g4_g3

0x1d70,	// (0x0005f992) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d70,	// (0x0005f992) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0006cee0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0006cee0) list_medium_line_x2_t2_g4_g

0x2f0d,	// (0x00060b2f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2f0d,	// (0x00060b2f) list_medium_line_x2_t2_g4_t1

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0006cee9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0006cee9) list_medium_line_x2_t2_g4_t

0x1d58,	// (0x0005f97a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x2_t2_g3_g1

0x1d64,	// (0x0005f986) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1d64,	// (0x0005f986) list_medium_line_x2_t2_g3_g2

0x1d70,	// (0x0005f992) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d70,	// (0x0005f992) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0006ce56) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0006ce56) list_medium_line_x2_t2_g3_g

0x2f22,	// (0x00060b44) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2f22,	// (0x00060b44) list_medium_line_x2_t2_g3_t1

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0006ceee) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0006ceee) list_medium_line_x2_t2_g3_t

0x30ba,	// (0x00060cdc) main_sp_fs_list_pane_ParamLimits

0x30ba,	// (0x00060cdc) main_sp_fs_list_pane

0x30c6,	// (0x00060ce8) sp_fs_scroll_pane_ParamLimits

0x30c6,	// (0x00060ce8) sp_fs_scroll_pane

0x30d2,	// (0x00060cf4) list_medium_line_x2_t3_t1

0x30e2,	// (0x00060d04) list_medium_line_x2_t3_t2

0x30f0,	// (0x00060d12) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0006cf39) list_medium_line_x2_t3_t

0x30fe,	// (0x00060d20) list_medium_line_x3_t4_t1

0x310e,	// (0x00060d30) list_medium_line_x3_t4_t2

0x311c,	// (0x00060d3e) list_medium_line_x3_t4_t3

0x30f0,	// (0x00060d12) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0006cf40) list_medium_line_x3_t4_t

0x312a,	// (0x00060d4c) list_medium_line_x4_t5_t1

0x313a,	// (0x00060d5c) list_medium_line_x4_t5_t2

0x311c,	// (0x00060d3e) list_medium_line_x4_t5_t3

0x3148,	// (0x00060d6a) list_medium_line_x4_t5_t4

0x30f0,	// (0x00060d12) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0006cf49) list_medium_line_x4_t5_t

0x1d58,	// (0x0005f97a) list_medium_line_t4_g4_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_t4_g4_g1

0x1e0c,	// (0x0005fa2e) list_medium_line_t4_g4_g2_ParamLimits

0x1e0c,	// (0x0005fa2e) list_medium_line_t4_g4_g2

0x3156,	// (0x00060d78) list_medium_line_t4_g4_g3_ParamLimits

0x3156,	// (0x00060d78) list_medium_line_t4_g4_g3

0x1d70,	// (0x0005f992) list_medium_line_t4_g4_g4_ParamLimits

0x1d70,	// (0x0005f992) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0006cf54) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0006cf54) list_medium_line_t4_g4_g

0x3162,	// (0x00060d84) list_medium_line_t4_g4_t1_ParamLimits

0x3162,	// (0x00060d84) list_medium_line_t4_g4_t1

0x3177,	// (0x00060d99) list_medium_line_t4_g4_t2_ParamLimits

0x3177,	// (0x00060d99) list_medium_line_t4_g4_t2

0x318d,	// (0x00060daf) list_medium_line_t4_g4_t3_ParamLimits

0x318d,	// (0x00060daf) list_medium_line_t4_g4_t3

0x1da5,	// (0x0005f9c7) list_medium_line_t4_g4_t4_ParamLimits

0x1da5,	// (0x0005f9c7) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0006cf5d) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0006cf5d) list_medium_line_t4_g4_t

0x32b6,	// (0x00060ed8) chi_dic_find_pane_g1

0x4271,	// (0x00061e93) main_tport_pane

0x6e8f,	// (0x00064ab1) list_medium_line_plain_t1

0x6f79,	// (0x00064b9b) list_medium_line_t2_g2_g1_ParamLimits

0x6f79,	// (0x00064b9b) list_medium_line_t2_g2_g1

0x6f85,	// (0x00064ba7) list_medium_line_t2_g2_g2_ParamLimits

0x6f85,	// (0x00064ba7) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0006d622) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0006d622) list_medium_line_t2_g2_g

0x6f91,	// (0x00064bb3) list_medium_line_t2_g2_t1_ParamLimits

0x6f91,	// (0x00064bb3) list_medium_line_t2_g2_t1

0x6fab,	// (0x00064bcd) list_medium_line_t2_g2_t2_ParamLimits

0x6fab,	// (0x00064bcd) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0006d627) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0006d627) list_medium_line_t2_g2_t

0xa6bb,	// (0x000682dd) aid_sp_fs_list_icon_a_sm

0xa6c3,	// (0x000682e5) aid_sp_fs_list_icon_d

0xa6cb,	// (0x000682ed) aid_sp_fs_text_primary

0xe27f,	// (0x0006bea1) aid_sp_fs_text_secondary

0x7646,	// (0x00065268) list_medium_line

0x7646,	// (0x00065268) list_medium_line_g2

0x7646,	// (0x00065268) list_medium_line_g3

0x7646,	// (0x00065268) list_medium_line_plain

0x7646,	// (0x00065268) list_medium_line_plain_t2

0x7646,	// (0x00065268) list_medium_line_plain_t3

0x7646,	// (0x00065268) list_medium_line_right_icon

0x7646,	// (0x00065268) list_medium_line_right_iconx2

0x7646,	// (0x00065268) list_medium_line_t2

0x7646,	// (0x00065268) list_medium_line_t2_g2

0x7646,	// (0x00065268) list_medium_line_t2_g3

0x7646,	// (0x00065268) list_medium_line_t2_right_icon

0x7646,	// (0x00065268) list_medium_line_t2_right_iconx2

0x7646,	// (0x00065268) list_medium_line_t3

0x7646,	// (0x00065268) list_medium_line_t3_g2

0x7646,	// (0x00065268) list_medium_line_t3_g3

0x7646,	// (0x00065268) list_medium_line_t3_right_iconx2

0x764f,	// (0x00065271) list_medium_line_t4_g4

0x7658,	// (0x0006527a) list_medium_line_x2

0x7658,	// (0x0006527a) list_medium_line_x2_t2_g2

0x7658,	// (0x0006527a) list_medium_line_x2_t2_g3

0x7658,	// (0x0006527a) list_medium_line_x2_t2_g4

0x7658,	// (0x0006527a) list_medium_line_x2_t3

0x7658,	// (0x0006527a) list_medium_line_x2_t3_g2

0x7658,	// (0x0006527a) list_medium_line_x2_t3_g3

0x7658,	// (0x0006527a) list_medium_line_x2_t3_g4

0x7658,	// (0x0006527a) list_medium_line_x2_t4_g2

0x7658,	// (0x0006527a) list_medium_line_x2_t4_g4

0x7661,	// (0x00065283) list_medium_line_x3

0x7661,	// (0x00065283) list_medium_line_x3_t4

0x7661,	// (0x00065283) list_medium_line_x3_t4_g4

0x764f,	// (0x00065271) list_medium_line_x4_t4

0x764f,	// (0x00065271) list_medium_line_x4_t4_g7

0x764f,	// (0x00065271) list_medium_line_x4_t5

0x766a,	// (0x0006528c) list_single_fs_dyc_pane_ParamLimits

0x766a,	// (0x0006528c) list_single_fs_dyc_pane

0x1d58,	// (0x0005f97a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x4_t4_g7_g1

0x7df8,	// (0x00065a1a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7df8,	// (0x00065a1a) list_medium_line_x4_t4_g7_g2

0x7e04,	// (0x00065a26) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e04,	// (0x00065a26) list_medium_line_x4_t4_g7_g3

0x7e13,	// (0x00065a35) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e13,	// (0x00065a35) list_medium_line_x4_t4_g7_g4

0x7e1f,	// (0x00065a41) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e1f,	// (0x00065a41) list_medium_line_x4_t4_g7_g5

0x7e2e,	// (0x00065a50) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e2e,	// (0x00065a50) list_medium_line_x4_t4_g7_g6

0x7e3d,	// (0x00065a5f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e3d,	// (0x00065a5f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0006d7eb) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0006d7eb) list_medium_line_x4_t4_g7_g

0x7e49,	// (0x00065a6b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e49,	// (0x00065a6b) list_medium_line_x4_t4_g7_t1

0x7e5e,	// (0x00065a80) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e5e,	// (0x00065a80) list_medium_line_x4_t4_g7_t2

0x7e73,	// (0x00065a95) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e73,	// (0x00065a95) list_medium_line_x4_t4_g7_t3

0x7e88,	// (0x00065aaa) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e88,	// (0x00065aaa) list_medium_line_x4_t4_g7_t4

0x7e9a,	// (0x00065abc) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e9a,	// (0x00065abc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0006d7fa) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0006d7fa) list_medium_line_x4_t4_g7_t

0x7eac,	// (0x00065ace) list_single_dyc_row_pane_ParamLimits

0x7eac,	// (0x00065ace) list_single_dyc_row_pane

0x86de,	// (0x00066300) call5_gesture_pane_ParamLimits

0x86de,	// (0x00066300) call5_gesture_pane

0x8714,	// (0x00066336) call5_windows_pane_ParamLimits

0x8714,	// (0x00066336) call5_windows_pane

0x8765,	// (0x00066387) call5_swipe_1_pane_cp_ParamLimits

0x8765,	// (0x00066387) call5_swipe_1_pane_cp

0x8771,	// (0x00066393) call5_swipe_2_pane_cp_ParamLimits

0x8771,	// (0x00066393) call5_swipe_2_pane_cp

0xabbc,	// (0x000687de) call5_image_pane_cp

0x877d,	// (0x0006639f) popup_call5_audio_first_window_cp_ParamLimits

0x877d,	// (0x0006639f) popup_call5_audio_first_window_cp

0xe6bd,	// (0x0006c2df) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6bd,	// (0x0006c2df) call5_swipe_1_pane_g1_cp

0xe72a,	// (0x0006c34c) call5_swipe_1_pane_g2_cp

0xe6d6,	// (0x0006c2f8) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6d6,	// (0x0006c2f8) call5_swipe_1_pane_t1_cp

0xe6bd,	// (0x0006c2df) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6bd,	// (0x0006c2df) call5_swipe_2_pane_g1_cp

0xe732,	// (0x0006c354) call5_swipe_2_pane_g2_cp

0xe73a,	// (0x0006c35c) call5_swipe_2_pane_t1_cp_ParamLimits

0xe73a,	// (0x0006c35c) call5_swipe_2_pane_t1_cp

0xae36,	// (0x00068a58) main_sp_fs_email_pane

0xde1f,	// (0x0006ba41) main_sp_fs_listscroll_pane_te

0x878b,	// (0x000663ad) popup_sp_fs_action_menu_pane_ParamLimits

0x878b,	// (0x000663ad) popup_sp_fs_action_menu_pane

0xce86,	// (0x0006aaa8) bg_sp_fs_ctrlbar_pane_g1

0xe74f,	// (0x0006c371) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe758,	// (0x0006c37a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe761,	// (0x0006c383) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce86,	// (0x0006aaa8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0006d8e8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc65,	// (0x0006a887) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc65,	// (0x0006a887) bg_sp_fs_ctrlbar_ddmenu_pane

0xe76a,	// (0x0006c38c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe76a,	// (0x0006c38c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe776,	// (0x0006c398) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe776,	// (0x0006c398) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0006d8f1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0006d8f1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe782,	// (0x0006c3a4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe782,	// (0x0006c3a4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x87d1,	// (0x000663f3) list_medium_line_t2_right_icon_g1

0x87d9,	// (0x000663fb) list_medium_line_t2_right_icon_t1

0x87e9,	// (0x0006640b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0006d8f6) list_medium_line_t2_right_icon_t

0xca4e,	// (0x0006a670) bg_sp_fs_ctrlbar_pane_ParamLimits

0xca4e,	// (0x0006a670) bg_sp_fs_ctrlbar_pane

0x8850,	// (0x00066472) main_sp_fs_ctrlbar_button_pane_cp01

0x8858,	// (0x0006647a) main_sp_fs_ctrlbar_ddmenu_pane

0xe7d6,	// (0x0006c3f8) main_sp_fs_ctrlbar_pane_g1

0xe7e2,	// (0x0006c404) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0006d8fb) main_sp_fs_ctrlbar_pane_g

0xe7ee,	// (0x0006c410) main_sp_fs_ctrlbar_pane_t1

0x8862,	// (0x00066484) main_sp_fs_ctrlbar_pane

0x8878,	// (0x0006649a) main_sp_fs_listscroll_pane_te_cp01

0x8889,	// (0x000664ab) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8889,	// (0x000664ab) popup_sp_fs_action_menu_pane_cp01

0xae36,	// (0x00068a58) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xae36,	// (0x00068a58) bg_sp_fs_highlight_list_pane_cp01

0xa6d4,	// (0x000682f6) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa6d4,	// (0x000682f6) sp_fs_action_menu_list_gene_pane_g1

0xe81e,	// (0x0006c440) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe81e,	// (0x0006c440) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0006d905) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0006d905) sp_fs_action_menu_list_gene_pane_g

0xa6e3,	// (0x00068305) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa6e3,	// (0x00068305) sp_fs_action_menu_list_gene_pane_t1

0xa6fb,	// (0x0006831d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa6fb,	// (0x0006831d) sp_fs_action_menu_list_gene_pane

0xe82b,	// (0x0006c44d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe82b,	// (0x0006c44d) popup_sp_fs_action_menu_bg_pane

0xa71e,	// (0x00068340) sp_fs_action_menu_list_pane_ParamLimits

0xa71e,	// (0x00068340) sp_fs_action_menu_list_pane

0x88b3,	// (0x000664d5) sp_fs_scroll_pane_cp01_ParamLimits

0x88b3,	// (0x000664d5) sp_fs_scroll_pane_cp01

0x88d9,	// (0x000664fb) list_medium_line_plain_t2_t1

0x88e9,	// (0x0006650b) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0006d90a) list_medium_line_plain_t2_t

0x88f7,	// (0x00066519) list_medium_line_plain_t3_t1

0x8907,	// (0x00066529) list_medium_line_plain_t3_t2

0x8915,	// (0x00066537) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0006d90f) list_medium_line_plain_t3_t

0x1d58,	// (0x0005f97a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x2_t2_g2_g1

0x1d70,	// (0x0005f992) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d70,	// (0x0005f992) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0006ce64) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0006ce64) list_medium_line_x2_t2_g2_g

0x3162,	// (0x00060d84) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3162,	// (0x00060d84) list_medium_line_x2_t2_g2_t1

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0006d916) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0006d916) list_medium_line_x2_t2_g2_t

0x1d58,	// (0x0005f97a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x2_t4_g2_g1

0x8923,	// (0x00066545) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8923,	// (0x00066545) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcf9,	// (0x0006d91b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcf9,	// (0x0006d91b) list_medium_line_x2_t4_g2_g

0x8935,	// (0x00066557) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8935,	// (0x00066557) list_medium_line_x2_t4_g2_t1

0x894f,	// (0x00066571) list_medium_line_x2_t4_g2_t2_ParamLimits

0x894f,	// (0x00066571) list_medium_line_x2_t4_g2_t2

0x8965,	// (0x00066587) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8965,	// (0x00066587) list_medium_line_x2_t4_g2_t3

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcfe,	// (0x0006d920) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcfe,	// (0x0006d920) list_medium_line_x2_t4_g2_t

0x897a,	// (0x0006659c) list_medium_line_t3_right_iconx2_g1

0x87d1,	// (0x000663f3) list_medium_line_t3_right_iconx2_g2

0x8982,	// (0x000665a4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd07,	// (0x0006d929) list_medium_line_t3_right_iconx2_g

0x898c,	// (0x000665ae) list_medium_line_t3_right_iconx2_t1

0x899c,	// (0x000665be) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd0e,	// (0x0006d930) list_medium_line_t3_right_iconx2_t

0x1d58,	// (0x0005f97a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x3_t4_g4_g1

0x1d64,	// (0x0005f986) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1d64,	// (0x0005f986) list_medium_line_x3_t4_g4_g2

0x1e0c,	// (0x0005fa2e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1e0c,	// (0x0005fa2e) list_medium_line_x3_t4_g4_g3

0x89aa,	// (0x000665cc) list_medium_line_x3_t4_g4_g4_ParamLimits

0x89aa,	// (0x000665cc) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd13,	// (0x0006d935) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd13,	// (0x0006d935) list_medium_line_x3_t4_g4_g

0x89b6,	// (0x000665d8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x89b6,	// (0x000665d8) list_medium_line_x3_t4_g4_t1

0x89cd,	// (0x000665ef) list_medium_line_x3_t4_g4_t2_ParamLimits

0x89cd,	// (0x000665ef) list_medium_line_x3_t4_g4_t2

0x89e2,	// (0x00066604) list_medium_line_x3_t4_g4_t3_ParamLimits

0x89e2,	// (0x00066604) list_medium_line_x3_t4_g4_t3

0x89f7,	// (0x00066619) list_medium_line_x3_t4_g4_t4_ParamLimits

0x89f7,	// (0x00066619) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1c,	// (0x0006d93e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1c,	// (0x0006d93e) list_medium_line_x3_t4_g4_t

0x8a14,	// (0x00066636) list_single_dyc_row_text_pane_t1_ParamLimits

0x8a14,	// (0x00066636) list_single_dyc_row_text_pane_t1

0x8a51,	// (0x00066673) list_single_dyc_row_text_pane_t2_ParamLimits

0x8a51,	// (0x00066673) list_single_dyc_row_text_pane_t2

0xa742,	// (0x00068364) list_single_dyc_row_text_pane_t3_ParamLimits

0xa742,	// (0x00068364) list_single_dyc_row_text_pane_t3

0x0005,

0xfd25,	// (0x0006d947) list_single_dyc_row_text_pane_t_ParamLimits

0xfd25,	// (0x0006d947) list_single_dyc_row_text_pane_t

0xa766,	// (0x00068388) list_single_dyc_row_pane_g1_ParamLimits

0xa766,	// (0x00068388) list_single_dyc_row_pane_g1

0xa772,	// (0x00068394) list_single_dyc_row_pane_g2_ParamLimits

0xa772,	// (0x00068394) list_single_dyc_row_pane_g2

0xa77e,	// (0x000683a0) list_single_dyc_row_pane_g3_ParamLimits

0xa77e,	// (0x000683a0) list_single_dyc_row_pane_g3

0xa78a,	// (0x000683ac) list_single_dyc_row_pane_g4_ParamLimits

0xa78a,	// (0x000683ac) list_single_dyc_row_pane_g4

0x0003,

0xfd32,	// (0x0006d954) list_single_dyc_row_pane_g_ParamLimits

0xfd32,	// (0x0006d954) list_single_dyc_row_pane_g

0xa796,	// (0x000683b8) list_single_dyc_row_text_pane_ParamLimits

0xa796,	// (0x000683b8) list_single_dyc_row_text_pane

0x9e84,	// (0x00067aa6) bg_sp_fs_scroll_pane

0xe839,	// (0x0006c45b) thumb_sp_fs_scroll_pane

0x6f79,	// (0x00064b9b) list_medium_line_g1_ParamLimits

0x6f79,	// (0x00064b9b) list_medium_line_g1

0x8b7a,	// (0x0006679c) list_medium_line_t1_ParamLimits

0x8b7a,	// (0x0006679c) list_medium_line_t1

0x1d58,	// (0x0005f97a) list_medium_line_x2_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x2_g1

0x1d64,	// (0x0005f986) list_medium_line_x2_g2_ParamLimits

0x1d64,	// (0x0005f986) list_medium_line_x2_g2

0x0001,

0xfd3b,	// (0x0006d95d) list_medium_line_x2_g_ParamLimits

0xfd3b,	// (0x0006d95d) list_medium_line_x2_g

0xa7b5,	// (0x000683d7) list_medium_line_x2_t1_ParamLimits

0xa7b5,	// (0x000683d7) list_medium_line_x2_t1

0x1d58,	// (0x0005f97a) list_medium_line_x3_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x3_g1

0x1d64,	// (0x0005f986) list_medium_line_x3_g2_ParamLimits

0x1d64,	// (0x0005f986) list_medium_line_x3_g2

0x0001,

0xfd3b,	// (0x0006d95d) list_medium_line_x3_g_ParamLimits

0xfd3b,	// (0x0006d95d) list_medium_line_x3_g

0xa7b5,	// (0x000683d7) list_medium_line_x3_t1_ParamLimits

0xa7b5,	// (0x000683d7) list_medium_line_x3_t1

0xe842,	// (0x0006c464) thumb_sp_fs_scroll_pane_g1

0xe84b,	// (0x0006c46d) thumb_sp_fs_scroll_pane_g2

0xe854,	// (0x0006c476) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0006d962) thumb_sp_fs_scroll_pane_g

0xe842,	// (0x0006c464) bg_sp_fs_scroll_pane_g1

0xe84b,	// (0x0006c46d) bg_sp_fs_scroll_pane_g2

0xe854,	// (0x0006c476) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd40,	// (0x0006d962) bg_sp_fs_scroll_pane_g

0x1d58,	// (0x0005f97a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d58,	// (0x0005f97a) list_medium_line_x2_t3_g4_g1

0x1e00,	// (0x0005fa22) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1e00,	// (0x0005fa22) list_medium_line_x2_t3_g4_g2

0x1d64,	// (0x0005f986) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1d64,	// (0x0005f986) list_medium_line_x2_t3_g4_g3

0x1d70,	// (0x0005f992) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d70,	// (0x0005f992) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0006cee0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0006cee0) list_medium_line_x2_t3_g4_g

0x8b8f,	// (0x000667b1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8b8f,	// (0x000667b1) list_medium_line_x2_t3_g4_t1

0x8ba5,	// (0x000667c7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8ba5,	// (0x000667c7) list_medium_line_x2_t3_g4_t2

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1da5,	// (0x0005f9c7) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd47,	// (0x0006d969) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd47,	// (0x0006d969) list_medium_line_x2_t3_g4_t

0x6f79,	// (0x00064b9b) list_medium_line_g2_g1_ParamLimits

0x6f79,	// (0x00064b9b) list_medium_line_g2_g1

0x6f85,	// (0x00064ba7) list_medium_line_g2_g2_ParamLimits

0x6f85,	// (0x00064ba7) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0006d622) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0006d622) list_medium_line_g2_g

0x8bbf,	// (0x000667e1) list_medium_line_g2_t1_ParamLimits

0x8bbf,	// (0x000667e1) list_medium_line_g2_t1

0x6f79,	// (0x00064b9b) list_medium_line_t3_g2_g1_ParamLimits

0x6f79,	// (0x00064b9b) list_medium_line_t3_g2_g1

0x6f85,	// (0x00064ba7) list_medium_line_t3_g2_g2_ParamLimits

0x6f85,	// (0x00064ba7) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0006d622) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0006d622) list_medium_line_t3_g2_g

0x8bd4,	// (0x000667f6) list_medium_line_t3_g2_t1_ParamLimits

0x8bd4,	// (0x000667f6) list_medium_line_t3_g2_t1

0x8bee,	// (0x00066810) list_medium_line_t3_g2_t2_ParamLimits

0x8bee,	// (0x00066810) list_medium_line_t3_g2_t2

0x8c04,	// (0x00066826) list_medium_line_t3_g2_t3_ParamLimits

0x8c04,	// (0x00066826) list_medium_line_t3_g2_t3

0x0002,

0xfd4e,	// (0x0006d970) list_medium_line_t3_g2_t_ParamLimits

0xfd4e,	// (0x0006d970) list_medium_line_t3_g2_t

0x87d1,	// (0x000663f3) list_medium_line_right_icon_g1

0x8c1e,	// (0x00066840) list_medium_line_right_icon_t1

0x6f79,	// (0x00064b9b) list_medium_line_t2_g1_ParamLimits

0x6f79,	// (0x00064b9b) list_medium_line_t2_g1

0x8c2c,	// (0x0006684e) list_medium_line_t2_t1_ParamLimits

0x8c2c,	// (0x0006684e) list_medium_line_t2_t1

0x8c46,	// (0x00066868) list_medium_line_t2_t2_ParamLimits

0x8c46,	// (0x00066868) list_medium_line_t2_t2

0x0001,

0xfd55,	// (0x0006d977) list_medium_line_t2_t_ParamLimits

0xfd55,	// (0x0006d977) list_medium_line_t2_t

0x6f79,	// (0x00064b9b) list_medium_line_t3_g1_ParamLimits

0x6f79,	// (0x00064b9b) list_medium_line_t3_g1

0x8c5b,	// (0x0006687d) list_medium_line_t3_t1_ParamLimits

0x8c5b,	// (0x0006687d) list_medium_line_t3_t1

0x8c75,	// (0x00066897) list_medium_line_t3_t2_ParamLimits

0x8c75,	// (0x00066897) list_medium_line_t3_t2

0x8c8b,	// (0x000668ad) list_medium_line_t3_t3_ParamLimits

0x8c8b,	// (0x000668ad) list_medium_line_t3_t3

0x0002,

0xfd5a,	// (0x0006d97c) list_medium_line_t3_t_ParamLimits

0xfd5a,	// (0x0006d97c) list_medium_line_t3_t

0x6f79,	// (0x00064b9b) list_medium_line_g3_g1_ParamLimits

0x6f79,	// (0x00064b9b) list_medium_line_g3_g1

0x8ca0,	// (0x000668c2) list_medium_line_g3_g2_ParamLimits

0x8ca0,	// (0x000668c2) list_medium_line_g3_g2

0x6f85,	// (0x00064ba7) list_medium_line_g3_g3_ParamLimits

0x6f85,	// (0x00064ba7) list_medium_line_g3_g3

0x0002,

0xfd61,	// (0x0006d983) list_medium_line_g3_g_ParamLimits

0xfd61,	// (0x0006d983) list_medium_line_g3_g

0x8cac,	// (0x000668ce) list_medium_line_g3_t1_ParamLimits

0x8cac,	// (0x000668ce) list_medium_line_g3_t1

0x6f79,	// (0x00064b9b) list_medium_line_t2_g3_g1_ParamLimits

0x6f79,	// (0x00064b9b) list_medium_line_t2_g3_g1

0x8ca0,	// (0x000668c2) list_medium_line_t2_g3_g2_ParamLimits

0x8ca0,	// (0x000668c2) list_medium_line_t2_g3_g2

0x6f85,	// (0x00064ba7) list_medium_line_t2_g3_g3_ParamLimits

0x6f85,	// (0x00064ba7) list_medium_line_t2_g3_g3

0x0002,

0xfd61,	// (0x0006d983) list_medium_line_t2_g3_g_ParamLimits

0xfd61,	// (0x0006d983) list_medium_line_t2_g3_g

0x8cc1,	// (0x000668e3) list_medium_line_t2_g3_t1_ParamLimits

0x8cc1,	// (0x000668e3) list_medium_line_t2_g3_t1

0x8cdb,	// (0x000668fd) list_medium_line_t2_g3_t2_ParamLimits

0x8cdb,	// (0x000668fd) list_medium_line_t2_g3_t2

0x0001,

0xfd68,	// (0x0006d98a) list_medium_line_t2_g3_t_ParamLimits

0xfd68,	// (0x0006d98a) list_medium_line_t2_g3_t

0x6f79,	// (0x00064b9b) list_medium_line_t3_g3_g1_ParamLimits

0x6f79,	// (0x00064b9b) list_medium_line_t3_g3_g1

0x8ca0,	// (0x000668c2) list_medium_line_t3_g3_g2_ParamLimits

0x8ca0,	// (0x000668c2) list_medium_line_t3_g3_g2

0x6f85,	// (0x00064ba7) list_medium_line_t3_g3_g3_ParamLimits

0x6f85,	// (0x00064ba7) list_medium_line_t3_g3_g3

0x0002,

0xfd61,	// (0x0006d983) list_medium_line_t3_g3_g_ParamLimits

0xfd61,	// (0x0006d983) list_medium_line_t3_g3_g

0x8cf1,	// (0x00066913) list_medium_line_t3_g3_t1_ParamLimits

0x8cf1,	// (0x00066913) list_medium_line_t3_g3_t1

0x8d0a,	// (0x0006692c) list_medium_line_t3_g3_t2_ParamLimits

0x8d0a,	// (0x0006692c) list_medium_line_t3_g3_t2

0x8d20,	// (0x00066942) list_medium_line_t3_g3_t3_ParamLimits

0x8d20,	// (0x00066942) list_medium_line_t3_g3_t3

0x0002,

0xfd6d,	// (0x0006d98f) list_medium_line_t3_g3_t_ParamLimits

0xfd6d,	// (0x0006d98f) list_medium_line_t3_g3_t

0x897a,	// (0x0006659c) list_medium_line_right_iconx2_g1

0x87d1,	// (0x000663f3) list_medium_line_right_iconx2_g2

0x0001,

0xfd74,	// (0x0006d996) list_medium_line_right_iconx2_g

0x8d3a,	// (0x0006695c) list_medium_line_right_iconx2_t1

0x897a,	// (0x0006659c) list_medium_line_t2_right_iconx2_g1

0x87d1,	// (0x000663f3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd74,	// (0x0006d996) list_medium_line_t2_right_iconx2_g

0x8d48,	// (0x0006696a) list_medium_line_t2_right_iconx2_t1

0x8d58,	// (0x0006697a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd79,	// (0x0006d99b) list_medium_line_t2_right_iconx2_t

0x8d66,	// (0x00066988) list_medium_line_x4_t4_t1

0x8d74,	// (0x00066996) list_medium_line_x4_t4_t2

0x8d84,	// (0x000669a6) list_medium_line_x4_t4_t3

0x8d94,	// (0x000669b6) list_medium_line_x4_t4_t4

0x0003,

0xfd7e,	// (0x0006d9a0) list_medium_line_x4_t4_t

0x8dce,	// (0x000669f0) tport_appsw_pane_ParamLimits

0x8dce,	// (0x000669f0) tport_appsw_pane

0x8ddc,	// (0x000669fe) tport_contact_pane_ParamLimits

0x8ddc,	// (0x000669fe) tport_contact_pane

0x8dec,	// (0x00066a0e) tport_listscroll_pane_ParamLimits

0x8dec,	// (0x00066a0e) tport_listscroll_pane

0x8dfb,	// (0x00066a1d) cell_tport_appsw_pane_ParamLimits

0x8dfb,	// (0x00066a1d) cell_tport_appsw_pane

0xd112,	// (0x0006ad34) tport_appsw_pane_g1_ParamLimits

0xd112,	// (0x0006ad34) tport_appsw_pane_g1

0xe85d,	// (0x0006c47f) tport_contact_pane_g1

0xe866,	// (0x0006c488) tport_contact_pane_t1

0xe874,	// (0x0006c496) tport_contact_pane_t2

0x0001,

0xfd87,	// (0x0006d9a9) tport_contact_pane_t

0xe882,	// (0x0006c4a4) list_tport_pane

0xe88b,	// (0x0006c4ad) scroll_pane_cp_030

0x8e30,	// (0x00066a52) cell_tport_appsw_pane_g1

0x8e40,	// (0x00066a62) cell_tport_appsw_pane_t1

0x8e4e,	// (0x00066a70) grid_highlight_pane_cp019

0x8e56,	// (0x00066a78) list_tport_double_graphic_pane_ParamLimits

0x8e56,	// (0x00066a78) list_tport_double_graphic_pane

0xae36,	// (0x00068a58) list_highlight_pane_cp023_ParamLimits

0xae36,	// (0x00068a58) list_highlight_pane_cp023

0x8e73,	// (0x00066a95) list_tport_double_graphic_pane_g1_ParamLimits

0x8e73,	// (0x00066a95) list_tport_double_graphic_pane_g1

0x8e80,	// (0x00066aa2) list_tport_double_graphic_pane_t1_ParamLimits

0x8e80,	// (0x00066aa2) list_tport_double_graphic_pane_t1

0x8e95,	// (0x00066ab7) list_tport_double_graphic_pane_t2_ParamLimits

0x8e95,	// (0x00066ab7) list_tport_double_graphic_pane_t2

0x0001,

0xfd93,	// (0x0006d9b5) list_tport_double_graphic_pane_t_ParamLimits

0xfd93,	// (0x0006d9b5) list_tport_double_graphic_pane_t

0x9e84,	// (0x00067aa6) main_cale_note_pane

0x6715,	// (0x00064337) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6715,	// (0x00064337) cell_vitu2_function_top_wide_pane_cp01

0x8262,	// (0x00065e84) wait_bar_pane_cp05_ParamLimits

0xae36,	// (0x00068a58) listscroll_cmail_pane

0xe894,	// (0x0006c4b6) list_cmail_pane

0x8ea7,	// (0x00066ac9) list_cmail_body_pane

0x8ec1,	// (0x00066ae3) list_single_cmail_header_caption_pane

0xe8a4,	// (0x0006c4c6) list_single_cmail_header_detail_pane_ParamLimits

0xe8a4,	// (0x0006c4c6) list_single_cmail_header_detail_pane

0xe8d6,	// (0x0006c4f8) list_single_cmail_header_caption_pane_t1

0x8ee1,	// (0x00066b03) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8ee1,	// (0x00066b03) list_single_cmail_header_detail_pane_g1

0xa7cb,	// (0x000683ed) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa7cb,	// (0x000683ed) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd98,	// (0x0006d9ba) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd98,	// (0x0006d9ba) list_single_cmail_header_detail_pane_g

0xa7d7,	// (0x000683f9) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa7d7,	// (0x000683f9) list_single_cmail_header_detail_pane_t1

0xa837,	// (0x00068459) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa837,	// (0x00068459) list_single_cmail_header_editor_pane_bg

0xe475,	// (0x0006c097) list_cmail_body_pane_g1

0xe8fa,	// (0x0006c51c) list_cmail_body_pane_t1

0xd825,	// (0x0006b447) list_single_cmail_header_editor_pane_bg_g1

0xae19,	// (0x00068a3b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd835,	// (0x0006b457) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd82d,	// (0x0006b44f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda84,	// (0x0006b6a6) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd855,	// (0x0006b477) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd845,	// (0x0006b467) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd84d,	// (0x0006b46f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xadf9,	// (0x00068a1b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8ef9,	// (0x00066b1b) calenote_gesture_pane_ParamLimits

0x8ef9,	// (0x00066b1b) calenote_gesture_pane

0x8f13,	// (0x00066b35) calenote_window_pane_ParamLimits

0x8f13,	// (0x00066b35) calenote_window_pane

0xe908,	// (0x0006c52a) popup_note_window_cp01

0x8f2b,	// (0x00066b4d) calenote_swipe_1_pane_ParamLimits

0x8f2b,	// (0x00066b4d) calenote_swipe_1_pane

0x8771,	// (0x00066393) calenote_swipe_2_pane_ParamLimits

0x8771,	// (0x00066393) calenote_swipe_2_pane

0xe6bd,	// (0x0006c2df) calenote_swipe_1_pane_g1_ParamLimits

0xe6bd,	// (0x0006c2df) calenote_swipe_1_pane_g1

0xe6ca,	// (0x0006c2ec) calenote_swipe_1_pane_g2_ParamLimits

0xe6ca,	// (0x0006c2ec) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0006d8de) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0006d8de) calenote_swipe_1_pane_g

0xe91a,	// (0x0006c53c) calenote_swipe_1_pane_t1_ParamLimits

0xe91a,	// (0x0006c53c) calenote_swipe_1_pane_t1

0xe6bd,	// (0x0006c2df) calenote_swipe_2_pane_g1_ParamLimits

0xe6bd,	// (0x0006c2df) calenote_swipe_2_pane_g1

0xe939,	// (0x0006c55b) calenote_swipe_2_pane_g2_ParamLimits

0xe939,	// (0x0006c55b) calenote_swipe_2_pane_g2

0x0001,

0xfda4,	// (0x0006d9c6) calenote_swipe_2_pane_g_ParamLimits

0xfda4,	// (0x0006d9c6) calenote_swipe_2_pane_g

0xe945,	// (0x0006c567) calenote_swipe_2_pane_t1_ParamLimits

0xe945,	// (0x0006c567) calenote_swipe_2_pane_t1

0x9e84,	// (0x00067aa6) main_mup_navstr_pane

0x5341,	// (0x00062f63) main_mup3_pane_t7_ParamLimits

0x5341,	// (0x00062f63) main_mup3_pane_t7

0x5d7a,	// (0x0006399c) main_mp4_pane_g6_ParamLimits

0x5d7a,	// (0x0006399c) main_mp4_pane_g6

0x6114,	// (0x00063d36) main_image3_pane_t4_ParamLimits

0x6114,	// (0x00063d36) main_image3_pane_t4

0x8f3e,	// (0x00066b60) popup_navstr_preview_pane_ParamLimits

0x8f3e,	// (0x00066b60) popup_navstr_preview_pane

0x8f4a,	// (0x00066b6c) scroll_navstr_pane_ParamLimits

0x8f4a,	// (0x00066b6c) scroll_navstr_pane

0x9e84,	// (0x00067aa6) bg_popup_preview_window_pane_cp04

0xe96c,	// (0x0006c58e) popup_navstr_preview_pane_t1

0x8f56,	// (0x00066b78) scroll_navstr_pane_g1_ParamLimits

0x8f56,	// (0x00066b78) scroll_navstr_pane_g1

0x8f63,	// (0x00066b85) scroll_navstr_pane_t1_ParamLimits

0x8f63,	// (0x00066b85) scroll_navstr_pane_t1

0xe911,	// (0x0006c533) bg_button_pane_cp014

0xe911,	// (0x0006c533) bg_button_pane_cp030

0x8684,	// (0x000662a6) list_double_fisheye_pane_g4_ParamLimits

0x8684,	// (0x000662a6) list_double_fisheye_pane_g4

0x8690,	// (0x000662b2) list_double_fisheye_pane_g5_ParamLimits

0x8690,	// (0x000662b2) list_double_fisheye_pane_g5

0xd58a,	// (0x0006b1ac) sp_fs_scroll_pane_cp03

0xe7d6,	// (0x0006c3f8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7e2,	// (0x0006c404) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0006d8fb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7ee,	// (0x0006c410) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe89c,	// (0x0006c4be) sp_fs_scroll_pane_cp02

0xab18,	// (0x0006873a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xab18,	// (0x0006873a) popup_sp_fs_calendar_preview_list_single_pane

0x9e84,	// (0x00067aa6) main_cam6_pano_pane

0x4255,	// (0x00061e77) main_mup3_pane_ParamLimits

0x9e84,	// (0x00067aa6) main_phacti_pane

0x8135,	// (0x00065d57) bg_button_pane_cp11

0x814d,	// (0x00065d6f) main_mobtv_info_pane_g2_ParamLimits

0x814d,	// (0x00065d6f) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0006d85b) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0006d85b) main_mobtv_info_pane_g

0x82ff,	// (0x00065f21) sc_clock_pane_t5_ParamLimits

0x82ff,	// (0x00065f21) sc_clock_pane_t5

0x84f7,	// (0x00066119) main_radioblah_pane_g1_ParamLimits

0xe5db,	// (0x0006c1fd) main_radioblah_pane_t3_ParamLimits

0xe5db,	// (0x0006c1fd) main_radioblah_pane_t3

0xe5f3,	// (0x0006c215) main_radioblah_pane_t4_ParamLimits

0xe5f3,	// (0x0006c215) main_radioblah_pane_t4

0x8515,	// (0x00066137) main_radioblah_text_pane_ParamLimits

0x8515,	// (0x00066137) main_radioblah_text_pane

0x8522,	// (0x00066144) main_radioblah_info_pane_g1_ParamLimits

0x85bb,	// (0x000661dd) main_radioblah_info_pane_t4_ParamLimits

0x85bb,	// (0x000661dd) main_radioblah_info_pane_t4

0xae36,	// (0x00068a58) main_sp_fs_calendar_pane

0x8f75,	// (0x00066b97) main_phacti_pane_g1

0x8f7d,	// (0x00066b9f) phacti_note_pane_ParamLimits

0x8f7d,	// (0x00066b9f) phacti_note_pane

0xe983,	// (0x0006c5a5) phacti_term_pane_ParamLimits

0xe983,	// (0x0006c5a5) phacti_term_pane

0xe998,	// (0x0006c5ba) phacti_note_pane_t1_ParamLimits

0xe998,	// (0x0006c5ba) phacti_note_pane_t1

0xa84e,	// (0x00068470) phacti_term_pane_g1

0xa856,	// (0x00068478) phacti_term_pane_t1_ParamLimits

0xa856,	// (0x00068478) phacti_term_pane_t1

0xe9af,	// (0x0006c5d1) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe9b7,	// (0x0006c5d9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdae,	// (0x0006d9d0) popup_sp_fs_calendar_preview_list_single_pane_g

0xe9bf,	// (0x0006c5e1) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe9bf,	// (0x0006c5e1) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9d5,	// (0x0006c5f7) aid_popup_sp_fs_bg_corner_pane

0xce86,	// (0x0006aaa8) popup_sp_fs_calendar_preview_bg_pane_g1

0x9e84,	// (0x00067aa6) popup_sp_fs_calendar_preview_bg_pane

0xe9dd,	// (0x0006c5ff) popup_sp_fs_calendar_preview_list_pane

0xca4e,	// (0x0006a670) bg_main_sp_fs_cale_pane_ParamLimits

0xca4e,	// (0x0006a670) bg_main_sp_fs_cale_pane

0xa889,	// (0x000684ab) listscroll_cale_mrui_pane_ParamLimits

0xa889,	// (0x000684ab) listscroll_cale_mrui_pane

0xa89e,	// (0x000684c0) listscroll_sp_fs_schedule_track_pane

0xa8a7,	// (0x000684c9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa8a7,	// (0x000684c9) main_sp_fs_ctrlbar_pane_cp01

0xe9e5,	// (0x0006c607) main_sp_fs_ribbon_pane

0xa8ba,	// (0x000684dc) popup_sp_fs_cale_preview_window

0xef4f,	// (0x0006cb71) list_single_sp_fs_schedule_track_pane_ParamLimits

0xef4f,	// (0x0006cb71) list_single_sp_fs_schedule_track_pane

0xe271,	// (0x0006be93) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe271,	// (0x0006be93) bg_sp_fs_highlight_list_pane_cp03

0x8fe0,	// (0x00066c02) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8fe0,	// (0x00066c02) list_single_sp_fs_schedule_track_pane_g1

0x8fec,	// (0x00066c0e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8fec,	// (0x00066c0e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb3,	// (0x0006d9d5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb3,	// (0x0006d9d5) list_single_sp_fs_schedule_track_pane_g

0x8ff8,	// (0x00066c1a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ff8,	// (0x00066c1a) list_single_sp_fs_schedule_track_pane_t1

0x9016,	// (0x00066c38) sp_fs_schedule_track_pane_ParamLimits

0x9016,	// (0x00066c38) sp_fs_schedule_track_pane

0xe9ed,	// (0x0006c60f) sp_fs_schedule_track_pane_g1

0xe9f5,	// (0x0006c617) sp_fs_schedule_track_pane_g2

0xe9fd,	// (0x0006c61f) sp_fs_schedule_track_pane_g3

0xea05,	// (0x0006c627) sp_fs_schedule_track_pane_g4

0xea0d,	// (0x0006c62f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb8,	// (0x0006d9da) sp_fs_schedule_track_pane_g

0xd825,	// (0x0006b447) bg_sp_fs_schedule_viewer_highlight_g1

0xae19,	// (0x00068a3b) bg_sp_fs_schedule_viewer_highlight_g2

0xd82d,	// (0x0006b44f) bg_sp_fs_schedule_viewer_highlight_g3

0xd835,	// (0x0006b457) bg_sp_fs_schedule_viewer_highlight_g4

0xda84,	// (0x0006b6a6) bg_sp_fs_schedule_viewer_highlight_g5

0xd845,	// (0x0006b467) bg_sp_fs_schedule_viewer_highlight_g6

0xd84d,	// (0x0006b46f) bg_sp_fs_schedule_viewer_highlight_g7

0xd855,	// (0x0006b477) bg_sp_fs_schedule_viewer_highlight_g8

0xadf9,	// (0x00068a1b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc3,	// (0x0006d9e5) bg_sp_fs_schedule_viewer_highlight_g

0x9e84,	// (0x00067aa6) bg_main_sp_fs_ribbon_pane

0x9028,	// (0x00066c4a) main_sp_fs_ribbon_pane_g1

0xea15,	// (0x0006c637) main_sp_fs_ribbon_pane_t1

0x9031,	// (0x00066c53) main_sp_fs_ribbon_pane_t2

0xea24,	// (0x0006c646) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd6,	// (0x0006d9f8) main_sp_fs_ribbon_pane_t

0xea33,	// (0x0006c655) main_sp_fs_ribbon_scheduler_pane

0xea3b,	// (0x0006c65d) bg_main_sp_fs_ribbon_pane_g1

0xea44,	// (0x0006c666) bg_main_sp_fs_ribbon_pane_g2

0xea4d,	// (0x0006c66f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddd,	// (0x0006d9ff) bg_main_sp_fs_ribbon_pane_g

0xea55,	// (0x0006c677) main_sp_fs_ribbon_scheduler_pane_g1

0xea5e,	// (0x0006c680) main_sp_fs_ribbon_scheduler_pane_g2

0xea67,	// (0x0006c689) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde4,	// (0x0006da06) main_sp_fs_ribbon_scheduler_pane_g

0xea70,	// (0x0006c692) list_cale_mrui_pane

0x9040,	// (0x00066c62) sp_fs_scroll_pane_cp07_ParamLimits

0x9040,	// (0x00066c62) sp_fs_scroll_pane_cp07

0x905c,	// (0x00066c7e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x905c,	// (0x00066c7e) bg_sp_fs_schedule_viewer_highlight

0xea7d,	// (0x0006c69f) list_single_sp_fs_schedule_track_pane_cp01

0xea85,	// (0x0006c6a7) list_sp_fs_schedule_track_pane

0xea8d,	// (0x0006c6af) sp_fs_scroll_pane_cp06_ParamLimits

0xea8d,	// (0x0006c6af) sp_fs_scroll_pane_cp06

0xce86,	// (0x0006aaa8) bgmain_sp_fs_calendar_pane_g1

0x9069,	// (0x00066c8b) list_single_cale_mrui_pane_ParamLimits

0x9069,	// (0x00066c8b) list_single_cale_mrui_pane

0xa8cc,	// (0x000684ee) list_single_cale_mrui_row_pane_ParamLimits

0xa8cc,	// (0x000684ee) list_single_cale_mrui_row_pane

0xa8d9,	// (0x000684fb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa8d9,	// (0x000684fb) list_single_cale_mrui_row_pane_g1

0xa911,	// (0x00068533) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa911,	// (0x00068533) list_single_cale_mrui_row_pane_t1

0x908f,	// (0x00066cb1) list_single_cale_mrui_row_pane_t2_ParamLimits

0x908f,	// (0x00066cb1) list_single_cale_mrui_row_pane_t2

0xa923,	// (0x00068545) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa923,	// (0x00068545) list_single_cale_mrui_row_pane_t3

0xa952,	// (0x00068574) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa952,	// (0x00068574) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf2,	// (0x0006da14) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf2,	// (0x0006da14) list_single_cale_mrui_row_pane_t

0x90f5,	// (0x00066d17) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x90f5,	// (0x00066d17) list_single_cmail_header_editor_pane_bg_cp01

0x9117,	// (0x00066d39) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9117,	// (0x00066d39) list_single_cmail_header_editor_pane_bg_cp02

0x9133,	// (0x00066d55) main_radioblah_text_pane_t1_ParamLimits

0x9133,	// (0x00066d55) main_radioblah_text_pane_t1

0xeaac,	// (0x0006c6ce) cam6_indi_pane_cp01

0xeab4,	// (0x0006c6d6) cam6_mode_pane_cp01

0xeabc,	// (0x0006c6de) cam6_pano_pane

0xeac5,	// (0x0006c6e7) cam6_zoom_pane_cp01

0xeacf,	// (0x0006c6f1) cam6_pano_image_pane

0xead8,	// (0x0006c6fa) cam6_pano_pane_g1

0xe475,	// (0x0006c097) cam6_pano_pane_g2

0xeae1,	// (0x0006c703) cam6_pano_pane_g3

0xeaea,	// (0x0006c70c) cam6_pano_pane_g4

0xd41d,	// (0x0006b03f) cam6_pano_pane_g5

0xeaf3,	// (0x0006c715) cam6_pano_pane_g6

0xeafb,	// (0x0006c71d) cam6_pano_pane_g7

0xeb03,	// (0x0006c725) cam6_pano_pane_g8

0xeb0c,	// (0x0006c72e) cam6_pano_pane_g9

0x0008,

0xfdfb,	// (0x0006da1d) cam6_pano_pane_g

0x9e84,	// (0x00067aa6) main_browser_tag_pane

0xe964,	// (0x0006c586) grid_navstr_albumart_pane

0xeb17,	// (0x0006c739) cell_navstr_albumart_pane_ParamLimits

0xeb17,	// (0x0006c739) cell_navstr_albumart_pane

0xeb33,	// (0x0006c755) cell_navstr_albumart_pane_g1

0xc85b,	// (0x0006a47d) cell_navstr_albumart_pane_g2

0xc86b,	// (0x0006a48d) cell_navstr_albumart_pane_g3

0xc863,	// (0x0006a485) cell_navstr_albumart_pane_g4

0x0003,

0xfe0e,	// (0x0006da30) cell_navstr_albumart_pane_g

0x914d,	// (0x00066d6f) bt_list_pane_ParamLimits

0x914d,	// (0x00066d6f) bt_list_pane

0x9166,	// (0x00066d88) bt_list_pane_t1

0x9175,	// (0x00066d97) bt_list_pane_t2

0x0001,

0xfe17,	// (0x0006da39) bt_list_pane_t

0x9e84,	// (0x00067aa6) main_cale_prevew_pane

0x9184,	// (0x00066da6) popup_cale_preview_window_ParamLimits

0x9184,	// (0x00066da6) popup_cale_preview_window

0xae36,	// (0x00068a58) bg_popup_preview_window_pane_cp05_ParamLimits

0xae36,	// (0x00068a58) bg_popup_preview_window_pane_cp05

0xeb3b,	// (0x0006c75d) list_cale_preview_pane_ParamLimits

0xeb3b,	// (0x0006c75d) list_cale_preview_pane

0x91a1,	// (0x00066dc3) list_double_cale_preview_pane_ParamLimits

0x91a1,	// (0x00066dc3) list_double_cale_preview_pane

0x91b5,	// (0x00066dd7) list_single_cale_preview_pane_ParamLimits

0x91b5,	// (0x00066dd7) list_single_cale_preview_pane

0x91cd,	// (0x00066def) list_single_cale_preview_pane_g1

0x91d5,	// (0x00066df7) list_single_cale_preview_pane_t1_ParamLimits

0x91d5,	// (0x00066df7) list_single_cale_preview_pane_t1

0x91ea,	// (0x00066e0c) list_double_cale_preview_pane_g1

0x91f2,	// (0x00066e14) list_double_cale_preview_pane_t1_ParamLimits

0x91f2,	// (0x00066e14) list_double_cale_preview_pane_t1

0x9207,	// (0x00066e29) list_double_cale_preview_pane_t2_ParamLimits

0x9207,	// (0x00066e29) list_double_cale_preview_pane_t2

0x0001,

0xfe1c,	// (0x0006da3e) list_double_cale_preview_pane_t_ParamLimits

0xfe1c,	// (0x0006da3e) list_double_cale_preview_pane_t

0x9e84,	// (0x00067aa6) main_ezdial_pane

0xae36,	// (0x00068a58) main_sp_fs_email_pane_ParamLimits

0x87f7,	// (0x00066419) cmail_ddmenu_btn01_pane_ParamLimits

0x87f7,	// (0x00066419) cmail_ddmenu_btn01_pane

0x8814,	// (0x00066436) cmail_ddmenu_btn02_pane_ParamLimits

0x8814,	// (0x00066436) cmail_ddmenu_btn02_pane

0x8832,	// (0x00066454) cmail_ddmenu_btn03_pane_ParamLimits

0x8832,	// (0x00066454) cmail_ddmenu_btn03_pane

0x8862,	// (0x00066484) main_sp_fs_ctrlbar_pane_ParamLimits

0x8878,	// (0x0006649a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8ea7,	// (0x00066ac9) list_cmail_body_pane_ParamLimits

0xe8e4,	// (0x0006c506) bg_button_pane_cp12

0xe8ed,	// (0x0006c50f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8ed,	// (0x0006c50f) list_single_cmail_header_detail_pane_g3

0xa813,	// (0x00068435) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa813,	// (0x00068435) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9f,	// (0x0006d9c1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9f,	// (0x0006d9c1) list_single_cmail_header_detail_pane_t

0xa86b,	// (0x0006848d) phacti_term_pane_t2_ParamLimits

0xa86b,	// (0x0006848d) phacti_term_pane_t2

0x0001,

0xfda9,	// (0x0006d9cb) phacti_term_pane_t_ParamLimits

0xfda9,	// (0x0006d9cb) phacti_term_pane_t

0xeb47,	// (0x0006c769) aid_size_list_single_double

0x921f,	// (0x00066e41) popup_ezdial_listscroll_window

0x9241,	// (0x00066e63) popup_number_entry_window_cp01

0xabbc,	// (0x000687de) bg_popup_call_pane_cp09

0xeb53,	// (0x0006c775) ezdial_list_pane

0xeb5b,	// (0x0006c77d) scroll_pane_cp23

0xcc65,	// (0x0006a887) bg_button_pane_cp028_ParamLimits

0xcc65,	// (0x0006a887) bg_button_pane_cp028

0x924f,	// (0x00066e71) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x924f,	// (0x00066e71) cmail_ddmenu_btn01_pane_g1

0x9261,	// (0x00066e83) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9261,	// (0x00066e83) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe21,	// (0x0006da43) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe21,	// (0x0006da43) cmail_ddmenu_btn01_pane_g

0xeb63,	// (0x0006c785) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb63,	// (0x0006c785) cmail_ddmenu_btn01_pane_t1

0xca4e,	// (0x0006a670) bg_button_pane_cp029_ParamLimits

0xca4e,	// (0x0006a670) bg_button_pane_cp029

0x9261,	// (0x00066e83) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9261,	// (0x00066e83) cmail_ddmenu_btn02_pane_g1

0x9279,	// (0x00066e9b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9279,	// (0x00066e9b) cmail_ddmenu_btn02_pane_t1

0xe271,	// (0x0006be93) bg_button_pane_cp031_ParamLimits

0xe271,	// (0x0006be93) bg_button_pane_cp031

0x9261,	// (0x00066e83) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9261,	// (0x00066e83) cmail_ddmenu_btn03_pane_g1

0x9279,	// (0x00066e9b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9279,	// (0x00066e9b) cmail_ddmenu_btn03_pane_t1

0x5faf,	// (0x00063bd1) cell_dialer2_keypad_pane_t1_ParamLimits

0x5fc9,	// (0x00063beb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5fc9,	// (0x00063beb) cell_dialer2_keypad_pane_t1_copy1

0x7f62,	// (0x00065b84) ncimui_group_button_pane

0xae36,	// (0x00068a58) main_sp_fs_calendar_pane_ParamLimits

0x8ec1,	// (0x00066ae3) list_single_cmail_header_caption_pane_ParamLimits

0xa880,	// (0x000684a2) aid_recal_txt_sm_pane

0x9e84,	// (0x00067aa6) mian_recal_day_pane

0xa8ba,	// (0x000684dc) popup_sp_fs_cale_preview_window_ParamLimits

0xeb78,	// (0x0006c79a) list_recal_day_pane

0xa99d,	// (0x000685bf) list_single_recal_day_pane_ParamLimits

0xa99d,	// (0x000685bf) list_single_recal_day_pane

0xeb9f,	// (0x0006c7c1) list_single_recal_day_pane_g1_ParamLimits

0xeb9f,	// (0x0006c7c1) list_single_recal_day_pane_g1

0xa9af,	// (0x000685d1) list_single_recal_day_pane_g2_ParamLimits

0xa9af,	// (0x000685d1) list_single_recal_day_pane_g2

0xa9bb,	// (0x000685dd) list_single_recal_day_pane_g3_ParamLimits

0xa9bb,	// (0x000685dd) list_single_recal_day_pane_g3

0x929d,	// (0x00066ebf) list_single_recal_day_pane_g4_ParamLimits

0x929d,	// (0x00066ebf) list_single_recal_day_pane_g4

0xa9c7,	// (0x000685e9) list_single_recal_day_pane_g5_ParamLimits

0xa9c7,	// (0x000685e9) list_single_recal_day_pane_g5

0xa9d3,	// (0x000685f5) list_single_recal_day_pane_g6_ParamLimits

0xa9d3,	// (0x000685f5) list_single_recal_day_pane_g6

0x0004,

0xfe30,	// (0x0006da52) list_single_recal_day_pane_g_ParamLimits

0xfe30,	// (0x0006da52) list_single_recal_day_pane_g

0xa9e7,	// (0x00068609) list_single_recal_day_pane_t1

0xa9f9,	// (0x0006861b) list_single_recal_day_pane_t2

0x0001,

0xfe3b,	// (0x0006da5d) list_single_recal_day_pane_t

0x92b5,	// (0x00066ed7) ncimui_query_button_pane_ParamLimits

0x92b5,	// (0x00066ed7) ncimui_query_button_pane

0x92c5,	// (0x00066ee7) ncimui_query_button_pane_t1_ParamLimits

0x92c5,	// (0x00066ee7) ncimui_query_button_pane_t1

0xebab,	// (0x0006c7cd) ncimui_query_button_pane_t2_ParamLimits

0xebab,	// (0x0006c7cd) ncimui_query_button_pane_t2

0x0001,

0xfe40,	// (0x0006da62) ncimui_query_button_pane_t_ParamLimits

0xfe40,	// (0x0006da62) ncimui_query_button_pane_t

0x92d8,	// (0x00066efa) query_button_pane_ParamLimits

0x92d8,	// (0x00066efa) query_button_pane

0x9e84,	// (0x00067aa6) bg_button_pane_cp0028

0xebbe,	// (0x0006c7e0) query_button_pane_t1

0x4271,	// (0x00061e93) main_tport_pane_ParamLimits

0x8da4,	// (0x000669c6) bg_popup_window_pane_cp01_ParamLimits

0x8da4,	// (0x000669c6) bg_popup_window_pane_cp01

0x8db2,	// (0x000669d4) heading_pane_cp08_ParamLimits

0x8db2,	// (0x000669d4) heading_pane_cp08

0x8dc0,	// (0x000669e2) heading_pane_cp07_ParamLimits

0x8dc0,	// (0x000669e2) heading_pane_cp07

0x8e30,	// (0x00066a52) cell_tport_appsw_pane_g2

0x0002,

0xfd8c,	// (0x0006d9ae) cell_tport_appsw_pane_g

0x3961,	// (0x00061583) input_candi_list_open_g1

0xb016,	// (0x00068c38) list_cale_time_pane_g6_ParamLimits

0xb016,	// (0x00068c38) list_cale_time_pane_g6

0x4d13,	// (0x00062935) aid_size_touch_calib_1_ParamLimits

0x4d13,	// (0x00062935) aid_size_touch_calib_1

0x4d1f,	// (0x00062941) aid_size_touch_calib_2_ParamLimits

0x4d1f,	// (0x00062941) aid_size_touch_calib_2

0x4d2d,	// (0x0006294f) aid_size_touch_calib_3_ParamLimits

0x4d2d,	// (0x0006294f) aid_size_touch_calib_3

0x4d3d,	// (0x0006295f) aid_size_touch_calib_4_ParamLimits

0x4d3d,	// (0x0006295f) aid_size_touch_calib_4

0x4d4b,	// (0x0006296d) main_touch_calib_button_group_pane_ParamLimits

0x4d4b,	// (0x0006296d) main_touch_calib_button_group_pane

0x4d59,	// (0x0006297b) main_touch_calib_pane_g1_ParamLimits

0x4d65,	// (0x00062987) main_touch_calib_pane_g2_ParamLimits

0x4d71,	// (0x00062993) main_touch_calib_pane_g3_ParamLimits

0x4d7d,	// (0x0006299f) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0006d36f) main_touch_calib_pane_g_ParamLimits

0x4d89,	// (0x000629ab) main_touch_calib_pane_t1_ParamLimits

0x4da0,	// (0x000629c2) main_touch_calib_pane_t2_ParamLimits

0x4db9,	// (0x000629db) main_touch_calib_pane_t3_ParamLimits

0x4dcf,	// (0x000629f1) main_touch_calib_pane_t4_ParamLimits

0x4de5,	// (0x00062a07) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0006d378) main_touch_calib_pane_t_ParamLimits

0xd1ad,	// (0x0006adcf) list_single_fp_cale_pane_g3_ParamLimits

0xd1ad,	// (0x0006adcf) list_single_fp_cale_pane_g3

0x4255,	// (0x00061e77) bg_button_pane_cp012_ParamLimits

0x4255,	// (0x00061e77) bg_vkb2_func_pane_cp03_ParamLimits

0x6ef9,	// (0x00064b1b) cell_vitu2_function_top_pane_g1_ParamLimits

0x4255,	// (0x00061e77) bg_vkb2_func_pane_cp04_ParamLimits

0x7ee8,	// (0x00065b0a) main_ncimui_button_group_pane_ParamLimits

0x7ee8,	// (0x00065b0a) main_ncimui_button_group_pane

0x7f50,	// (0x00065b72) main_ncimui_pane_t3_ParamLimits

0x7f50,	// (0x00065b72) main_ncimui_pane_t3

0xe97a,	// (0x0006c59c) phacti_button_group_pane

0xeb47,	// (0x0006c769) aid_size_list_single_double_ParamLimits

0x921f,	// (0x00066e41) popup_ezdial_listscroll_window_ParamLimits

0x9241,	// (0x00066e63) popup_number_entry_window_cp01_ParamLimits

0x92e5,	// (0x00066f07) phacti_button_pane_ParamLimits

0x92e5,	// (0x00066f07) phacti_button_pane

0x9e84,	// (0x00067aa6) bg_button_pane_cp14

0xebcc,	// (0x0006c7ee) phacti_button_pane_t1

0x92f6,	// (0x00066f18) main_touch_calib_button_pane_ParamLimits

0x92f6,	// (0x00066f18) main_touch_calib_button_pane

0xaa14,	// (0x00068636) bg_button_pane_cp18_ParamLimits

0xaa14,	// (0x00068636) bg_button_pane_cp18

0xebda,	// (0x0006c7fc) main_touch_calib_button_pane_t1_ParamLimits

0xebda,	// (0x0006c7fc) main_touch_calib_button_pane_t1

0xebf0,	// (0x0006c812) main_touch_calib_button_pane_t2_ParamLimits

0xebf0,	// (0x0006c812) main_touch_calib_button_pane_t2

0x0001,

0xfe45,	// (0x0006da67) main_touch_calib_button_pane_t_ParamLimits

0xfe45,	// (0x0006da67) main_touch_calib_button_pane_t

0x9e84,	// (0x00067aa6) cell_ncimui_button_pane

0x9e84,	// (0x00067aa6) bg_button_pane_cp032

0xec0e,	// (0x0006c830) cell_ncimui_button_pane_t1

0x6025,	// (0x00063c47) image3_infobar_pane_ParamLimits

0x6025,	// (0x00063c47) image3_infobar_pane

0x8321,	// (0x00065f43) fs_bigclock_status_pane_ParamLimits

0x8321,	// (0x00065f43) fs_bigclock_status_pane

0x832e,	// (0x00065f50) main_fs_bigclock_clock_pane_ParamLimits

0x832e,	// (0x00065f50) main_fs_bigclock_clock_pane

0x834a,	// (0x00065f6c) main_fs_bigclock_indi_pane_ParamLimits

0x834a,	// (0x00065f6c) main_fs_bigclock_indi_pane

0x8378,	// (0x00065f9a) main_fs_bigclock_swipe_pane_ParamLimits

0x8378,	// (0x00065f9a) main_fs_bigclock_swipe_pane

0x9e84,	// (0x00067aa6) main_fs_clock_dumped_data

0x83b2,	// (0x00065fd4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x83b2,	// (0x00065fd4) list_single_fs_bigclock_indicator_pane_g1

0x83d1,	// (0x00065ff3) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x83d1,	// (0x00065ff3) list_single_fs_bigclock_indicator_pane_g2

0x83eb,	// (0x0006600d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x83eb,	// (0x0006600d) list_single_fs_bigclock_indicator_pane_g3

0x8407,	// (0x00066029) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8407,	// (0x00066029) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0006d88f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0006d88f) list_single_fs_bigclock_indicator_pane_g

0x8436,	// (0x00066058) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8436,	// (0x00066058) list_single_fs_bigclock_indicator_pane_t1

0x845e,	// (0x00066080) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x845e,	// (0x00066080) list_single_fs_bigclock_indicator_pane_t2

0x8486,	// (0x000660a8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8486,	// (0x000660a8) list_single_fs_bigclock_indicator_pane_t3

0x84ae,	// (0x000660d0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x84ae,	// (0x000660d0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0006d89a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0006d89a) list_single_fs_bigclock_indicator_pane_t

0xec1c,	// (0x0006c83e) image3_infobar_fav_pane_ParamLimits

0xec1c,	// (0x0006c83e) image3_infobar_fav_pane

0xec2c,	// (0x0006c84e) image3_infobar_loc_pane_ParamLimits

0xec2c,	// (0x0006c84e) image3_infobar_loc_pane

0xec42,	// (0x0006c864) image3_infobar_time_pane_ParamLimits

0xec42,	// (0x0006c864) image3_infobar_time_pane

0xce86,	// (0x0006aaa8) image3_infobar_time_pane_g1

0xec52,	// (0x0006c874) image3_infobar_time_pane_t1

0xce86,	// (0x0006aaa8) image3_infobar_loc_pane_g1

0xec60,	// (0x0006c882) image3_infobar_loc_pane_g2

0x0001,

0xfe4a,	// (0x0006da6c) image3_infobar_loc_pane_g

0xec68,	// (0x0006c88a) image3_infobar_loc_pane_t1

0xce86,	// (0x0006aaa8) image3_infobar_fav_pane_g1

0xec76,	// (0x0006c898) image3_infobar_fav_pane_g2

0x0001,

0xfe4f,	// (0x0006da71) image3_infobar_fav_pane_g

0xec7e,	// (0x0006c8a0) fs_bigclock_status_battery_pane

0xec87,	// (0x0006c8a9) fs_bigclock_status_signal_pane

0xec90,	// (0x0006c8b2) fs_bigclock_status_title_pane

0xec99,	// (0x0006c8bb) fs_bigclock_status_signal_pane_g1

0xeca2,	// (0x0006c8c4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe54,	// (0x0006da76) fs_bigclock_status_signal_pane_g

0xecaa,	// (0x0006c8cc) fs_bigclock_status_battery_pane_g1

0xecb3,	// (0x0006c8d5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe59,	// (0x0006da7b) fs_bigclock_status_battery_pane_g

0xecbb,	// (0x0006c8dd) fs_bigclock_status_title_pane_t1

0x9306,	// (0x00066f28) main_fs_bigclock_clock_pane_g1

0x9306,	// (0x00066f28) main_fs_bigclock_clock_pane_g2

0x9315,	// (0x00066f37) main_fs_bigclock_clock_pane_g3

0x9315,	// (0x00066f37) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5e,	// (0x0006da80) main_fs_bigclock_clock_pane_g

0x9325,	// (0x00066f47) main_fs_bigclock_clock_pane_t1

0x933a,	// (0x00066f5c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe67,	// (0x0006da89) main_fs_bigclock_clock_pane_t

0xecc9,	// (0x0006c8eb) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecc9,	// (0x0006c8eb) list_single_fs_bigclock_indicator_pane

0xecda,	// (0x0006c8fc) list_single_fs_bigclock_pane_ParamLimits

0xecda,	// (0x0006c8fc) list_single_fs_bigclock_pane

0xed00,	// (0x0006c922) main_fs_bigclock_indicator_pane_t1

0xed0f,	// (0x0006c931) list_single_fs_bigclock_pane_g1

0xed17,	// (0x0006c939) list_single_fs_bigclock_pane_t1

0xce86,	// (0x0006aaa8) main_fs_bigclock_swipe_pane_g1

0xed5a,	// (0x0006c97c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe78,	// (0x0006da9a) main_fs_bigclock_swipe_pane_g

0xed62,	// (0x0006c984) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed62,	// (0x0006c984) main_fs_bigclock_swipe_pane_t1

0x31a3,	// (0x00060dc5) call_type_pane_ParamLimits

0x9e84,	// (0x00067aa6) main_btmg_pane

0xa905,	// (0x00068527) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa905,	// (0x00068527) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdeb,	// (0x0006da0d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdeb,	// (0x0006da0d) list_single_cale_mrui_row_pane_g

0xa98b,	// (0x000685ad) list_recal_vselct_arw_lo_pane

0xeb97,	// (0x0006c7b9) list_recal_vselct_arw_up_pane

0xa993,	// (0x000685b5) list_recal_vselct_pane

0x9391,	// (0x00066fb3) btmg_button_pane

0x939d,	// (0x00066fbf) main_btmg_pane_g1

0x9e84,	// (0x00067aa6) bg_button_pane_cp044

0xed7f,	// (0x0006c9a1) btmg_button_pane_t1

0xca3a,	// (0x0006a65c) aid_listscroll_gen

0xae36,	// (0x00068a58) main_cntbar_detail_pane

0xe894,	// (0x0006c4b6) list_cmail_folder_pane

0xd58a,	// (0x0006b1ac) sp_fs_scroll_pane_cp03_ParamLimits

0x93a5,	// (0x00066fc7) list_single_fs_dyc_pane_cp01_ParamLimits

0x93a5,	// (0x00066fc7) list_single_fs_dyc_pane_cp01

0xed8d,	// (0x0006c9af) aid_size_cmail_indent

0xaa0b,	// (0x0006862d) list_single_dyc_row_pane_cp01

0x93e3,	// (0x00067005) cntbar_detail_list_pane_ParamLimits

0x93e3,	// (0x00067005) cntbar_detail_list_pane

0x9423,	// (0x00067045) main_cntbar_detail_cont_pane_ParamLimits

0x9423,	// (0x00067045) main_cntbar_detail_cont_pane

0x30c6,	// (0x00060ce8) scroll_pane_cp032_ParamLimits

0x30c6,	// (0x00060ce8) scroll_pane_cp032

0x942f,	// (0x00067051) cntbar_detail_list_event_pane_ParamLimits

0x942f,	// (0x00067051) cntbar_detail_list_event_pane

0x93f1,	// (0x00067013) cntbar_detail_list_shct_pane

0xaea1,	// (0x00068ac3) aid_list_gen

0xed96,	// (0x0006c9b8) aid_scroll

0xed9f,	// (0x0006c9c1) aid_size_touch_scroll_bar

0x7658,	// (0x0006527a) aid_list_double

0x7646,	// (0x00065268) aid_list_single

0x7646,	// (0x00065268) aid_list_single_lg

0x943f,	// (0x00067061) aid_list_z_g_a_sm

0x9447,	// (0x00067069) aid_list_z_g_d

0x944f,	// (0x00067071) aid_txt_z_prm

0x945d,	// (0x0006707f) aid_txt_z_prm_cp01

0x946b,	// (0x0006708d) aid_txt_z_sec

0x9479,	// (0x0006709b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9479,	// (0x0006709b) main_cntbar_detail_cont_pane_g1

0x9486,	// (0x000670a8) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9486,	// (0x000670a8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7d,	// (0x0006da9f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7d,	// (0x0006da9f) main_cntbar_detail_cont_pane_g

0xeda8,	// (0x0006c9ca) main_cntbar_detail_cont_pane_t1

0xedb6,	// (0x0006c9d8) main_cntbar_detail_cont_pane_t2

0xedc4,	// (0x0006c9e6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe82,	// (0x0006daa4) main_cntbar_detail_cont_pane_t

0x9492,	// (0x000670b4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9492,	// (0x000670b4) cell_cntbar_detail_list_shct_pane

0xedd2,	// (0x0006c9f4) cntbar_detail_list_shct_pane_g1

0xeddb,	// (0x0006c9fd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe89,	// (0x0006daab) cntbar_detail_list_shct_pane_g

0x94a6,	// (0x000670c8) cntbar_detail_list_event_pane_g1_ParamLimits

0x94a6,	// (0x000670c8) cntbar_detail_list_event_pane_g1

0x94b2,	// (0x000670d4) cntbar_detail_list_event_pane_g2_ParamLimits

0x94b2,	// (0x000670d4) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8e,	// (0x0006dab0) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8e,	// (0x0006dab0) cntbar_detail_list_event_pane_g

0x9520,	// (0x00067142) cntbar_detail_list_event_pane_t1_ParamLimits

0x9520,	// (0x00067142) cntbar_detail_list_event_pane_t1

0x9535,	// (0x00067157) cntbar_detail_list_event_pane_t2_ParamLimits

0x9535,	// (0x00067157) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9b,	// (0x0006dabd) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9b,	// (0x0006dabd) cntbar_detail_list_event_pane_t

0xce86,	// (0x0006aaa8) cell_cntbar_detail_list_shct_pane_g1

0xb5ef,	// (0x00069211) navi_pane_mv_g3

0xae36,	// (0x00068a58) main_cntbar_detail_pane_ParamLimits

0x9e84,	// (0x00067aa6) main_notif_wgt_pane

0x5ca7,	// (0x000638c9) aid_tch_main_mp4_pane_g4

0x5f10,	// (0x00063b32) popup_slider_window_cp02

0xa981,	// (0x000685a3) list_recal_day_event_pane

0x93c3,	// (0x00066fe5) cntbar_detail_btn_pane_ParamLimits

0x93c3,	// (0x00066fe5) cntbar_detail_btn_pane

0x93d3,	// (0x00066ff5) cntbar_detail_btn_pane_cp01_ParamLimits

0x93d3,	// (0x00066ff5) cntbar_detail_btn_pane_cp01

0x93f1,	// (0x00067013) cntbar_detail_list_shct_pane_ParamLimits

0x93fd,	// (0x0006701f) cntbar_detail_pane_g1_ParamLimits

0x93fd,	// (0x0006701f) cntbar_detail_pane_g1

0x940d,	// (0x0006702f) cntbar_detail_pane_t1_ParamLimits

0x940d,	// (0x0006702f) cntbar_detail_pane_t1

0x94be,	// (0x000670e0) cntbar_detail_list_event_pane_g3_ParamLimits

0x94be,	// (0x000670e0) cntbar_detail_list_event_pane_g3

0x94d6,	// (0x000670f8) cntbar_detail_list_event_pane_g4_ParamLimits

0x94d6,	// (0x000670f8) cntbar_detail_list_event_pane_g4

0x94ee,	// (0x00067110) cntbar_detail_list_event_pane_g5_ParamLimits

0x94ee,	// (0x00067110) cntbar_detail_list_event_pane_g5

0x9506,	// (0x00067128) cntbar_detail_list_event_pane_g6_ParamLimits

0x9506,	// (0x00067128) cntbar_detail_list_event_pane_g6

0x954a,	// (0x0006716c) cntbar_detail_list_event_pane_t3_ParamLimits

0x954a,	// (0x0006716c) cntbar_detail_list_event_pane_t3

0x955c,	// (0x0006717e) popup_notif_wgt_window_ParamLimits

0x955c,	// (0x0006717e) popup_notif_wgt_window

0x956c,	// (0x0006718e) popup_submenu_window_cp01_ParamLimits

0x956c,	// (0x0006718e) popup_submenu_window_cp01

0xabbc,	// (0x000687de) bg_popup_window_pane_cp10

0xede4,	// (0x0006ca06) listscroll_notif_wgt_pane

0xedf6,	// (0x0006ca18) list_notif_wgt_window

0xedff,	// (0x0006ca21) scroll_pane_cp033

0x957c,	// (0x0006719e) list_notif_wgt_row_pane_ParamLimits

0x957c,	// (0x0006719e) list_notif_wgt_row_pane

0xee08,	// (0x0006ca2a) aid_size_list_notif_wgt_del

0xee15,	// (0x0006ca37) list_notif_wgt_row_pane_g1

0xee21,	// (0x0006ca43) list_notif_wgt_row_pane_g2

0xee30,	// (0x0006ca52) list_notif_wgt_row_pane_g3

0x0002,

0xfea2,	// (0x0006dac4) list_notif_wgt_row_pane_g

0xee3d,	// (0x0006ca5f) list_notif_wgt_row_pane_t1

0xee53,	// (0x0006ca75) list_notif_wgt_row_pane_t2

0xee65,	// (0x0006ca87) list_notif_wgt_row_pane_t3

0x0002,

0xfea9,	// (0x0006dacb) list_notif_wgt_row_pane_t

0xda9e,	// (0x0006b6c0) list_recal_day_event_pane_g1

0xee77,	// (0x0006ca99) list_recal_day_event_pane_t1

0x9e84,	// (0x00067aa6) bg_button_pane_cp045

0x9590,	// (0x000671b2) cntbar_detail_btn_pane_t1

0xca4e,	// (0x0006a670) main_callh_pane_ParamLimits

0xca4e,	// (0x0006a670) main_callh_pane

0x9e84,	// (0x00067aa6) main_coverflow0_pane

0x9e84,	// (0x00067aa6) main_wgtman_pane

0x8390,	// (0x00065fb2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8390,	// (0x00065fb2) main_fs_bigclock_unlock_btn_pane

0x8e28,	// (0x00066a4a) bg_button_pane_cp16

0x8e38,	// (0x00066a5a) cell_tport_appsw_pane_g3

0x959e,	// (0x000671c0) cf0_flow_pane_ParamLimits

0x959e,	// (0x000671c0) cf0_flow_pane

0xee86,	// (0x0006caa8) listscroll_cf0_pane

0xee91,	// (0x0006cab3) main_cf0_pane_g1

0x95ad,	// (0x000671cf) main_cf0_pane_t1_ParamLimits

0x95ad,	// (0x000671cf) main_cf0_pane_t1

0x95c1,	// (0x000671e3) main_cf0_pane_t2_ParamLimits

0x95c1,	// (0x000671e3) main_cf0_pane_t2

0x0001,

0xfeb5,	// (0x0006dad7) main_cf0_pane_t_ParamLimits

0xfeb5,	// (0x0006dad7) main_cf0_pane_t

0xeea3,	// (0x0006cac5) scroll_pane_cp11

0x95d5,	// (0x000671f7) cf0_flow_pane_g1

0x95dd,	// (0x000671ff) cf0_flow_pane_g2

0x0001,

0xfeba,	// (0x0006dadc) cf0_flow_pane_g

0x95e5,	// (0x00067207) cf0_flow_pane_t1

0x9e84,	// (0x00067aa6) main_call6_pane

0x9e84,	// (0x00067aa6) main_calllock_pane

0x95f3,	// (0x00067215) call6_btn_grp_pane_ParamLimits

0x95f3,	// (0x00067215) call6_btn_grp_pane

0x9600,	// (0x00067222) call6_pane_g1_ParamLimits

0x9600,	// (0x00067222) call6_pane_g1

0x9610,	// (0x00067232) popup_call6_1st_window_ParamLimits

0x9610,	// (0x00067232) popup_call6_1st_window

0x9620,	// (0x00067242) popup_call6_2nd_window_ParamLimits

0x9620,	// (0x00067242) popup_call6_2nd_window

0x9630,	// (0x00067252) cell_call6_btn_pane_ParamLimits

0x9630,	// (0x00067252) cell_call6_btn_pane

0xabbc,	// (0x000687de) bg_popup_call2_in_pane_cp03

0xeeae,	// (0x0006cad0) popup_call6_1st_window_g1

0xeeb6,	// (0x0006cad8) popup_call6_1st_window_g2

0xeebe,	// (0x0006cae0) popup_call6_1st_window_g3

0x0002,

0xfebf,	// (0x0006dae1) popup_call6_1st_window_g

0xeec6,	// (0x0006cae8) popup_call6_1st_window_t1

0xeed5,	// (0x0006caf7) popup_call6_1st_window_t2

0xeee5,	// (0x0006cb07) popup_call6_1st_window_t3

0x0002,

0xfec6,	// (0x0006dae8) popup_call6_1st_window_t

0xabbc,	// (0x000687de) bg_popup_call2_in_pane_cp04

0xeeae,	// (0x0006cad0) popup_call6_2nd_window_g1

0xeeb6,	// (0x0006cad8) popup_call6_2nd_window_g2

0xeebe,	// (0x0006cae0) popup_call6_2nd_window_g3

0x0002,

0xfebf,	// (0x0006dae1) popup_call6_2nd_window_g

0xeec6,	// (0x0006cae8) popup_call6_2nd_window_t1

0x0eaa,	// (0x0005eacc) bg_button_pane_cp15

0x9641,	// (0x00067263) cell_call6_btn_pane_g1

0x964a,	// (0x0006726c) cell_call6_btn_pane_t1

0x9659,	// (0x0006727b) listscroll_wgtman_pane_ParamLimits

0x9659,	// (0x0006727b) listscroll_wgtman_pane

0x9675,	// (0x00067297) wgtman_btn_pane_ParamLimits

0x9675,	// (0x00067297) wgtman_btn_pane

0xb401,	// (0x00069023) aid_scroll_copy1

0xeef5,	// (0x0006cb17) list_wgtman_pane

0x96aa,	// (0x000672cc) wgtman_btn_pane_g1_ParamLimits

0x96aa,	// (0x000672cc) wgtman_btn_pane_g1

0x96d2,	// (0x000672f4) wgtman_btn_pane_t1_ParamLimits

0x96d2,	// (0x000672f4) wgtman_btn_pane_t1

0xeeff,	// (0x0006cb21) wgtman_btn_pane_t2_ParamLimits

0xeeff,	// (0x0006cb21) wgtman_btn_pane_t2

0x0001,

0xfecd,	// (0x0006daef) wgtman_btn_pane_t_ParamLimits

0xfecd,	// (0x0006daef) wgtman_btn_pane_t

0x9709,	// (0x0006732b) listrow_wgtman_pane_ParamLimits

0x9709,	// (0x0006732b) listrow_wgtman_pane

0x971e,	// (0x00067340) listrow_wgtman_pane_g1

0x972b,	// (0x0006734d) listrow_wgtman_pane_g2

0x0001,

0xfed2,	// (0x0006daf4) listrow_wgtman_pane_g

0x9749,	// (0x0006736b) listrow_wgtman_pane_t1

0x9761,	// (0x00067383) listrow_wgtman_pane_t2

0x0001,

0xfed7,	// (0x0006daf9) listrow_wgtman_pane_t

0x9787,	// (0x000673a9) wait_bar_pane_cp09

0xef16,	// (0x0006cb38) main_calllock_btn_pane

0xef20,	// (0x0006cb42) main_calllock_pane_g1

0x9e84,	// (0x00067aa6) bg_button_pane_cp17

0xef2c,	// (0x0006cb4e) main_calllock_btn_pane_g1

0xef35,	// (0x0006cb57) main_calllock_btn_pane_t1

0x9e84,	// (0x00067aa6) main_dialer3_pane

0x9e84,	// (0x00067aa6) main_fmrd2_pane

0xce86,	// (0x0006aaa8) main_fs_bigclock_unlock_btn_pane_g1

0x97a1,	// (0x000673c3) main_fs_bigclock_unlock_btn_pane_t1

0x97af,	// (0x000673d1) area_fmrd2_info_pane_ParamLimits

0x97af,	// (0x000673d1) area_fmrd2_info_pane

0x97bb,	// (0x000673dd) area_fmrd2_visual_pane_ParamLimits

0x97bb,	// (0x000673dd) area_fmrd2_visual_pane

0x97c9,	// (0x000673eb) fmrd2_indi_pane_ParamLimits

0x97c9,	// (0x000673eb) fmrd2_indi_pane

0x97d6,	// (0x000673f8) area_fmrd2_visual_pane_g1

0x97de,	// (0x00067400) area_fmrd2_visual_pane_t1

0x97ee,	// (0x00067410) area_fmrd2_visual_pane_t2

0x97fe,	// (0x00067420) area_fmrd2_visual_pane_t3

0x0002,

0xfee1,	// (0x0006db03) area_fmrd2_visual_pane_t

0x980e,	// (0x00067430) area_fmrd2_info_pane_g1

0x9816,	// (0x00067438) area_fmrd2_info_pane_t1

0x9826,	// (0x00067448) area_fmrd2_info_pane_t2

0x9836,	// (0x00067458) area_fmrd2_info_pane_t3

0x9846,	// (0x00067468) area_fmrd2_info_pane_t4

0x0003,

0xfee8,	// (0x0006db0a) area_fmrd2_info_pane_t

0x9856,	// (0x00067478) fmrd2_indi_pane_t1

0x9866,	// (0x00067488) fmrd2_indi_pane_t2

0x9876,	// (0x00067498) fmrd2_indi_pane_t3

0x0002,

0xfef1,	// (0x0006db13) fmrd2_indi_pane_t

0x8418,	// (0x0006603a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8418,	// (0x0006603a) list_single_fs_bigclock_indicator_pane_g5

0x84cd,	// (0x000660ef) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x84cd,	// (0x000660ef) list_single_fs_bigclock_indicator_pane_t5

0x8f93,	// (0x00066bb5) aid_cell_bcale_month_pane_ParamLimits

0x8f93,	// (0x00066bb5) aid_cell_bcale_month_pane

0x8fb1,	// (0x00066bd3) bcale_month_pane_ParamLimits

0x8fb1,	// (0x00066bd3) bcale_month_pane

0x8fcf,	// (0x00066bf1) bcale_preview_pane_ParamLimits

0x8fcf,	// (0x00066bf1) bcale_preview_pane

0xed17,	// (0x0006c939) list_single_fs_bigclock_pane_t1_ParamLimits

0xed36,	// (0x0006c958) list_single_fs_bigclock_pane_t2_ParamLimits

0xed36,	// (0x0006c958) list_single_fs_bigclock_pane_t2

0x0001,

0xfe73,	// (0x0006da95) list_single_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0006da95) list_single_fs_bigclock_pane_t

0x9799,	// (0x000673bb) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfedc,	// (0x0006dafe) main_fs_bigclock_unlock_btn_pane_g

0x9886,	// (0x000674a8) aid_dia3_key_size_ParamLimits

0x9886,	// (0x000674a8) aid_dia3_key_size

0x9892,	// (0x000674b4) aid_dia3_listrow_size_ParamLimits

0x9892,	// (0x000674b4) aid_dia3_listrow_size

0x98a2,	// (0x000674c4) dia3_keypad_fun_pane_ParamLimits

0x98a2,	// (0x000674c4) dia3_keypad_fun_pane

0x98b2,	// (0x000674d4) dia3_keypad_num_pane_ParamLimits

0x98b2,	// (0x000674d4) dia3_keypad_num_pane

0x98c2,	// (0x000674e4) dia3_listscroll_pane_ParamLimits

0x98c2,	// (0x000674e4) dia3_listscroll_pane

0x98d0,	// (0x000674f2) dia3_numentry_pane_ParamLimits

0x98d0,	// (0x000674f2) dia3_numentry_pane

0xef44,	// (0x0006cb66) dia3_list_pane

0x98de,	// (0x00067500) scroll_pane_cp12

0x9e84,	// (0x00067aa6) bg_dia3_numentry_pane

0x98e9,	// (0x0006750b) dia3_numentry_pane_t1

0x98f8,	// (0x0006751a) cell_dia3_key_num_pane

0x9900,	// (0x00067522) cell_dia3_key0_fun_pane_ParamLimits

0x9900,	// (0x00067522) cell_dia3_key0_fun_pane

0x990d,	// (0x0006752f) cell_dia3_key1_fun_pane_ParamLimits

0x990d,	// (0x0006752f) cell_dia3_key1_fun_pane

0x991a,	// (0x0006753c) dia3_listrow_pane

0xe331,	// (0x0006bf53) bg_dia3_numentry_pane_g1

0x9e84,	// (0x00067aa6) bg_button_pane_cp21

0x9927,	// (0x00067549) cell_dia3_key_num_pane_t1

0x9935,	// (0x00067557) cell_dia3_key_num_pane_t2

0x9944,	// (0x00067566) cell_dia3_key_num_pane_t3

0x9953,	// (0x00067575) cell_dia3_key_num_pane_t4

0x0003,

0xfef8,	// (0x0006db1a) cell_dia3_key_num_pane_t

0x9e84,	// (0x00067aa6) bg_button_pane_cp19

0x9962,	// (0x00067584) cell_dia3_key0_fun_pane_g1

0x9e84,	// (0x00067aa6) bg_button_pane_cp20

0x996a,	// (0x0006758c) cell_dia3_key1_fun_pane_g1

0x9972,	// (0x00067594) area_left_week_number_pane

0x9985,	// (0x000675a7) area_top_day_name_pane

0x9993,	// (0x000675b5) frame_month_view_pane

0xef66,	// (0x0006cb88) grid_month_view_pane

0x99a8,	// (0x000675ca) cell_top_day_name_pane_ParamLimits

0x99a8,	// (0x000675ca) cell_top_day_name_pane

0x99c4,	// (0x000675e6) cell_area_left_week_number_pane_ParamLimits

0x99c4,	// (0x000675e6) cell_area_left_week_number_pane

0x99e5,	// (0x00067607) cell_month_view_pane_ParamLimits

0x99e5,	// (0x00067607) cell_month_view_pane

0xef74,	// (0x0006cb96) frm_month_g1

0x9a11,	// (0x00067633) frm_month_g2

0x9a22,	// (0x00067644) frm_month_g3

0x9a33,	// (0x00067655) frm_month_g4

0x9a44,	// (0x00067666) frm_month_g5

0x9a55,	// (0x00067677) frm_month_g6

0x9a68,	// (0x0006768a) frm_month_g7

0xef81,	// (0x0006cba3) frm_month_g8

0x9a7b,	// (0x0006769d) frm_month_g9

0x9a88,	// (0x000676aa) frm_month_g10

0x9a95,	// (0x000676b7) frm_month_g11

0x9aa2,	// (0x000676c4) frm_month_g12

0x9aaf,	// (0x000676d1) frm_month_g13

0x9abe,	// (0x000676e0) frm_month_g14

0x9acd,	// (0x000676ef) frm_month_g15

0x9adc,	// (0x000676fe) frm_month_g16

0x000f,

0xff01,	// (0x0006db23) frm_month_g

0xef8e,	// (0x0006cbb0) cell_top_day_name_pane_t1

0x9aeb,	// (0x0006770d) cell_area_left_week_number_pane_g1

0x9afa,	// (0x0006771c) cell_area_left_week_number_pane_t1

0xd0ad,	// (0x0006accf) cell_month_view_pane_g1

0x9b10,	// (0x00067732) cell_month_view_pane_t1

0x9e84,	// (0x00067aa6) main_fps_pane

0xe79c,	// (0x0006c3be) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe79c,	// (0x0006c3be) cmail_ddmenu_btn02_pane_cp1

0xe7b8,	// (0x0006c3da) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7b8,	// (0x0006c3da) cmail_ddmenu_btn02_pane_cp2

0x926d,	// (0x00066e8f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x926d,	// (0x00066e8f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe26,	// (0x0006da48) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe26,	// (0x0006da48) cmail_ddmenu_btn02_pane_g

0x928b,	// (0x00066ead) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x928b,	// (0x00066ead) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2b,	// (0x0006da4d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2b,	// (0x0006da4d) cmail_ddmenu_btn02_pane_t

0x9b26,	// (0x00067748) fps_text_pane_ParamLimits

0x9b26,	// (0x00067748) fps_text_pane

0x9b33,	// (0x00067755) main_fps_pane_g1_ParamLimits

0x9b33,	// (0x00067755) main_fps_pane_g1

0x9b3f,	// (0x00067761) wait_bar_pane_cp010_ParamLimits

0x9b3f,	// (0x00067761) wait_bar_pane_cp010

0x9b4b,	// (0x0006776d) fps_text_pane_t1_ParamLimits

0x9b4b,	// (0x0006776d) fps_text_pane_t1

0x63d1,	// (0x00063ff3) cam4_image_uncrop_pane_g1

0x63da,	// (0x00063ffc) cam4_image_uncrop_pane_g2

0x63e3,	// (0x00064005) cam4_image_uncrop_pane_g3

0x63ec,	// (0x0006400e) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0006d510) cam4_image_uncrop_pane_g

0x991a,	// (0x0006753c) dia3_listrow_pane_ParamLimits

0x9e84,	// (0x00067aa6) main_phob2_pane

0x8e0a,	// (0x00066a2c) cell_tport_appsw_pane_cp02_ParamLimits

0x8e0a,	// (0x00066a2c) cell_tport_appsw_pane_cp02

0x8e19,	// (0x00066a3b) cell_tport_appsw_pane_cp03_ParamLimits

0x8e19,	// (0x00066a3b) cell_tport_appsw_pane_cp03

0x9e84,	// (0x00067aa6) phob2_contact_card_pane

0x9e84,	// (0x00067aa6) phob2_listscroll_pane

0xefa1,	// (0x0006cbc3) phob2_list_pane

0xefa9,	// (0x0006cbcb) scroll_pane_cp034

0x9b64,	// (0x00067786) phob2_cc_data_pane_ParamLimits

0x9b64,	// (0x00067786) phob2_cc_data_pane

0x9b7b,	// (0x0006779d) phob2_cc_listscroll_pane_ParamLimits

0x9b7b,	// (0x0006779d) phob2_cc_listscroll_pane

0x9b97,	// (0x000677b9) list_double_large_graphic_phob2_pane_ParamLimits

0x9b97,	// (0x000677b9) list_double_large_graphic_phob2_pane

0x9baf,	// (0x000677d1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9baf,	// (0x000677d1) list_double_large_graphic_phob2_pane_g1

0x9bc5,	// (0x000677e7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9bc5,	// (0x000677e7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff22,	// (0x0006db44) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff22,	// (0x0006db44) list_double_large_graphic_phob2_pane_g

0x9bd1,	// (0x000677f3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9bd1,	// (0x000677f3) list_double_large_graphic_phob2_pane_t1

0x9be6,	// (0x00067808) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9be6,	// (0x00067808) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff27,	// (0x0006db49) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff27,	// (0x0006db49) list_double_large_graphic_phob2_pane_t

0x9e84,	// (0x00067aa6) list_highlight_pane_cp024

0x9bf8,	// (0x0006781a) phob2_cc_button_pane

0x9c00,	// (0x00067822) phob2_cc_data_pane_g1_ParamLimits

0x9c00,	// (0x00067822) phob2_cc_data_pane_g1

0x9c14,	// (0x00067836) phob2_cc_data_pane_g2_ParamLimits

0x9c14,	// (0x00067836) phob2_cc_data_pane_g2

0x0001,

0xff2c,	// (0x0006db4e) phob2_cc_data_pane_g_ParamLimits

0xff2c,	// (0x0006db4e) phob2_cc_data_pane_g

0x9c23,	// (0x00067845) phob2_cc_data_pane_t1_ParamLimits

0x9c23,	// (0x00067845) phob2_cc_data_pane_t1

0x9c3c,	// (0x0006785e) phob2_cc_data_pane_t2_ParamLimits

0x9c3c,	// (0x0006785e) phob2_cc_data_pane_t2

0x9c55,	// (0x00067877) phob2_cc_data_pane_t3_ParamLimits

0x9c55,	// (0x00067877) phob2_cc_data_pane_t3

0x0002,

0xff31,	// (0x0006db53) phob2_cc_data_pane_t_ParamLimits

0xff31,	// (0x0006db53) phob2_cc_data_pane_t

0xefb1,	// (0x0006cbd3) phob2_cc_list_pane_ParamLimits

0xefb1,	// (0x0006cbd3) phob2_cc_list_pane

0xde13,	// (0x0006ba35) scroll_pane_cp035_ParamLimits

0xde13,	// (0x0006ba35) scroll_pane_cp035

0xae36,	// (0x00068a58) bg_button_pane_cp033

0xefbd,	// (0x0006cbdf) phob2_cc_button_pane_g1

0xefc9,	// (0x0006cbeb) phob2_cc_button_pane_t1

0xefde,	// (0x0006cc00) phob2_cc_button_pane_t2

0x0001,

0xff38,	// (0x0006db5a) phob2_cc_button_pane_t

0x9c6e,	// (0x00067890) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9c6e,	// (0x00067890) list_double_large_graphic_phob2_cc_pane

0x9cbd,	// (0x000678df) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9cbd,	// (0x000678df) list_double_large_graphic_phob2_cc_pane_g1

0x9cce,	// (0x000678f0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9cce,	// (0x000678f0) list_double_large_graphic_phob2_cc_pane_g2

0x9cda,	// (0x000678fc) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9cda,	// (0x000678fc) list_double_large_graphic_phob2_cc_pane_g3

0x9ce6,	// (0x00067908) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9ce6,	// (0x00067908) list_double_large_graphic_phob2_cc_pane_g4

0x9cf2,	// (0x00067914) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9cf2,	// (0x00067914) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3d,	// (0x0006db5f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3d,	// (0x0006db5f) list_double_large_graphic_phob2_cc_pane_g

0x9cfe,	// (0x00067920) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9cfe,	// (0x00067920) list_double_large_graphic_phob2_cc_pane_t1

0x9d27,	// (0x00067949) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9d27,	// (0x00067949) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff48,	// (0x0006db6a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff48,	// (0x0006db6a) list_double_large_graphic_phob2_cc_pane_t

0xeff0,	// (0x0006cc12) list_highlight_pane_cp025_ParamLimits

0xeff0,	// (0x0006cc12) list_highlight_pane_cp025

0xae36,	// (0x00068a58) bg_button_pane_cp033_ParamLimits

0xefbd,	// (0x0006cbdf) phob2_cc_button_pane_g1_ParamLimits

0xefc9,	// (0x0006cbeb) phob2_cc_button_pane_t1_ParamLimits

0xefde,	// (0x0006cc00) phob2_cc_button_pane_t2_ParamLimits

0xff38,	// (0x0006db5a) phob2_cc_button_pane_t_ParamLimits

0x0e9e,	// (0x0005eac0) popup_wgtman_window

0xd943,	// (0x0006b565) scroll_pane_cp038

0x9692,	// (0x000672b4) wgtman_btn_pane_cp_01_ParamLimits

0x9692,	// (0x000672b4) wgtman_btn_pane_cp_01

0xeffe,	// (0x0006cc20) wgtman_content_pane

0xf007,	// (0x0006cc29) wgtman_heading_pane

0x9e84,	// (0x00067aa6) bg_heading_pane_cp02

0xf010,	// (0x0006cc32) wgtman_heading_pane_g1

0xf018,	// (0x0006cc3a) wgtman_heading_pane_t1

0xf026,	// (0x0006cc48) scroll_pane_cp036

0xf02e,	// (0x0006cc50) wgtman_list_pane

0xe68f,	// (0x0006c2b1) wgtman_list_pane_t1_ParamLimits

0xe68f,	// (0x0006c2b1) wgtman_list_pane_t1

0x632e,	// (0x00063f50) cam4_grid_pane

0x7114,	// (0x00064d36) bg_button_pane_cp015_ParamLimits

0x7126,	// (0x00064d48) bg_button_pane_cp016_ParamLimits

0x7139,	// (0x00064d5b) bg_button_pane_cp017_ParamLimits

0x718f,	// (0x00064db1) popup_vitu2_query_window_g3_ParamLimits

0x718f,	// (0x00064db1) popup_vitu2_query_window_g3

0x724e,	// (0x00064e70) popup_vitu2_query_window_t6_ParamLimits

0x724e,	// (0x00064e70) popup_vitu2_query_window_t6

0x7279,	// (0x00064e9b) popup_vitu2_query_window_t7_ParamLimits

0x7279,	// (0x00064e9b) popup_vitu2_query_window_t7

0xe6a9,	// (0x0006c2cb) cam4_grid_pane_g1

0xe6b2,	// (0x0006c2d4) cam4_grid_pane_g2

0xf036,	// (0x0006cc58) cam4_grid_pane_g3

0xf03f,	// (0x0006cc61) cam4_grid_pane_g4

0x0003,

0xff4d,	// (0x0006db6f) cam4_grid_pane_g

0x1ee1,	// (0x0005fb03) aid_placing_vt_slider_lsc_ParamLimits

0x2214,	// (0x0005fe36) vidtel_button_pane_ParamLimits

0x2214,	// (0x0005fe36) vidtel_button_pane

0x9e84,	// (0x00067aa6) bg_button_pane_cp034

0xf04a,	// (0x0006cc6c) vidtel_button_pane_g1

0xf052,	// (0x0006cc74) vidtel_button_pane_t1

0xda7c,	// (0x0006b69e) aid_size_vtel_slider_touch

0xde13,	// (0x0006ba35) scroll_pane_cp039

0x80bf,	// (0x00065ce1) ncim_query_button_pane_cp01_ParamLimits

0x80de,	// (0x00065d00) ncimui_query_pane_g1_ParamLimits

0xae36,	// (0x00068a58) input_focus_pane_cp012_ParamLimits

0xe36f,	// (0x0006bf91) ncim_query_entry_pane_t1_ParamLimits

0xde13,	// (0x0006ba35) scroll_pane_cp039_ParamLimits

0xb4d8,	// (0x000690fa) navi_pane_bcale_mc_g1

0xb4e0,	// (0x00069102) navi_pane_bcale_mc_t1

0xe803,	// (0x0006c425) main_sp_fs_email_pane_g1

0xe80f,	// (0x0006c431) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0006d900) main_sp_fs_email_pane_g

0xea9f,	// (0x0006c6c1) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea9f,	// (0x0006c6c1) list_single_cale_mrui_row_pane_g3

0x92ab,	// (0x00066ecd) list_single_recal_day_pane_g5_event_pane

0xa9df,	// (0x00068601) list_single_recal_day_pane_g7

0xf068,	// (0x0006cc8a) list_recal_day_event_pane_cp01

0xf071,	// (0x0006cc93) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0006cc9b) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0006cca3) list_recal_vselct_pane_cp01

0xda9e,	// (0x0006b6c0) list_recal_day_event_pane_cp01_g1

0xae4d,	// (0x00068a6f) list_recal_day_event_pane_cp01_t1

0xa9e7,	// (0x00068609) list_single_recal_day_pane_t1_ParamLimits

0xa9f9,	// (0x0006861b) list_single_recal_day_pane_t2_ParamLimits

0xfe3b,	// (0x0006da5d) list_single_recal_day_pane_t_ParamLimits

0xa531,	// (0x00068153) bg_notes_pane_ParamLimits

0xa5d4,	// (0x000681f6) list_notes_pane_ParamLimits

0x11c2,	// (0x0005ede4) scroll_pane_cp06_ParamLimits

0xaa14,	// (0x00068636) main_notes_pane_ParamLimits

0x9e84,	// (0x00067aa6) main_welc_pane

0x9d50,	// (0x00067972) main_welc_body_pane_ParamLimits

0x9d50,	// (0x00067972) main_welc_body_pane

0x9d6b,	// (0x0006798d) main_welc_opti_pane_ParamLimits

0x9d6b,	// (0x0006798d) main_welc_opti_pane

0x9da0,	// (0x000679c2) main_welc_pane_t1_ParamLimits

0x9da0,	// (0x000679c2) main_welc_pane_t1

0x9dbe,	// (0x000679e0) main_welc_body_row_pane_ParamLimits

0x9dbe,	// (0x000679e0) main_welc_body_row_pane

0xe271,	// (0x0006be93) main_welc_opti_row_pane_ParamLimits

0xe271,	// (0x0006be93) main_welc_opti_row_pane

0xf08b,	// (0x0006ccad) main_welc_opti_row_pane_g1

0x9dd8,	// (0x000679fa) main_welc_opti_row_pane_t1

0xf093,	// (0x0006ccb5) main_welc_body_row_pane_t1

0xedee,	// (0x0006ca10) popup_notif_wgt_heading_pane

0xee08,	// (0x0006ca2a) aid_size_list_notif_wgt_del_ParamLimits

0xee15,	// (0x0006ca37) list_notif_wgt_row_pane_g1_ParamLimits

0xee21,	// (0x0006ca43) list_notif_wgt_row_pane_g2_ParamLimits

0xee30,	// (0x0006ca52) list_notif_wgt_row_pane_g3_ParamLimits

0xfea2,	// (0x0006dac4) list_notif_wgt_row_pane_g_ParamLimits

0xee3d,	// (0x0006ca5f) list_notif_wgt_row_pane_t1_ParamLimits

0xee53,	// (0x0006ca75) list_notif_wgt_row_pane_t2_ParamLimits

0xee65,	// (0x0006ca87) list_notif_wgt_row_pane_t3_ParamLimits

0xfea9,	// (0x0006dacb) list_notif_wgt_row_pane_t_ParamLimits

0x971e,	// (0x00067340) listrow_wgtman_pane_g1_ParamLimits

0x972b,	// (0x0006734d) listrow_wgtman_pane_g2_ParamLimits

0xfed2,	// (0x0006daf4) listrow_wgtman_pane_g_ParamLimits

0x9749,	// (0x0006736b) listrow_wgtman_pane_t1_ParamLimits

0x9761,	// (0x00067383) listrow_wgtman_pane_t2_ParamLimits

0xfed7,	// (0x0006daf9) listrow_wgtman_pane_t_ParamLimits

0x9787,	// (0x000673a9) wait_bar_pane_cp09_ParamLimits

0x9e84,	// (0x00067aa6) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0006ccc4) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0006cccc) popup_notif_wgt_heading_pane_t1

0x9e84,	// (0x00067aa6) main_vids_pane

0x9e84,	// (0x00067aa6) vids_listscroll_pane

0x9de7,	// (0x00067a09) scroll_pane_cp040

0x9e84,	// (0x00067aa6) vids_list_pane

0x9df2,	// (0x00067a14) vids_list_double_pane_ParamLimits

0x9df2,	// (0x00067a14) vids_list_double_pane

0x9e06,	// (0x00067a28) vids_list_double_pane_g1

0x9e0f,	// (0x00067a31) vids_list_double_pane_t1

0x9e1f,	// (0x00067a41) vids_list_double_pane_t2

0x0001,

0xff5b,	// (0x0006db7d) vids_list_double_pane_t

0x4255,	// (0x00061e77) main_ncimui_pane_ParamLimits

0x7f00,	// (0x00065b22) main_ncimui_pane_g1_ParamLimits

0x7f0e,	// (0x00065b30) main_ncimui_pane_g2_ParamLimits

0x7f0e,	// (0x00065b30) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0006d805) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0006d805) main_ncimui_pane_g

0x9d86,	// (0x000679a8) main_welc_pane_g1_ParamLimits

0x9d86,	// (0x000679a8) main_welc_pane_g1

0x9d92,	// (0x000679b4) main_welc_pane_g2_ParamLimits

0x9d92,	// (0x000679b4) main_welc_pane_g2

0x0001,

0xff56,	// (0x0006db78) main_welc_pane_g_ParamLimits

0xff56,	// (0x0006db78) main_welc_pane_g

0xa531,	// (0x00068153) listscroll_mce_pane_ParamLimits

0xb62f,	// (0x00069251) wait_bar_pane_cp10

0xca42,	// (0x0006a664) main_cale_day_pane_ParamLimits

0xca42,	// (0x0006a664) main_cale_week_pane_ParamLimits

0xa531,	// (0x00068153) main_messa_pane_ParamLimits

0x5648,	// (0x0006326a) main_clock2_btn_pane_ParamLimits

0x5648,	// (0x0006326a) main_clock2_btn_pane

0xd235,	// (0x0006ae57) main_clock2_btn_pane_cp01_ParamLimits

0xd235,	// (0x0006ae57) main_clock2_btn_pane_cp01

0xea70,	// (0x0006c692) list_cale_mrui_pane_ParamLimits

0xee9b,	// (0x0006cabd) main_cf0_pane_g2

0x0001,

0xfeb0,	// (0x0006dad2) main_cf0_pane_g

0x9972,	// (0x00067594) area_left_week_number_pane_ParamLimits

0x9985,	// (0x000675a7) area_top_day_name_pane_ParamLimits

0x9993,	// (0x000675b5) frame_month_view_pane_ParamLimits

0xef66,	// (0x0006cb88) grid_month_view_pane_ParamLimits

0xef74,	// (0x0006cb96) frm_month_g1_ParamLimits

0x9a11,	// (0x00067633) frm_month_g2_ParamLimits

0x9a22,	// (0x00067644) frm_month_g3_ParamLimits

0x9a33,	// (0x00067655) frm_month_g4_ParamLimits

0x9a44,	// (0x00067666) frm_month_g5_ParamLimits

0x9a55,	// (0x00067677) frm_month_g6_ParamLimits

0x9a68,	// (0x0006768a) frm_month_g7_ParamLimits

0xef81,	// (0x0006cba3) frm_month_g8_ParamLimits

0x9a7b,	// (0x0006769d) frm_month_g9_ParamLimits

0x9a88,	// (0x000676aa) frm_month_g10_ParamLimits

0x9a95,	// (0x000676b7) frm_month_g11_ParamLimits

0x9aa2,	// (0x000676c4) frm_month_g12_ParamLimits

0x9aaf,	// (0x000676d1) frm_month_g13_ParamLimits

0x9abe,	// (0x000676e0) frm_month_g14_ParamLimits

0x9acd,	// (0x000676ef) frm_month_g15_ParamLimits

0x9adc,	// (0x000676fe) frm_month_g16_ParamLimits

0xff01,	// (0x0006db23) frm_month_g_ParamLimits

0xef8e,	// (0x0006cbb0) cell_top_day_name_pane_t1_ParamLimits

0x9aeb,	// (0x0006770d) cell_area_left_week_number_pane_g1_ParamLimits

0x9afa,	// (0x0006771c) cell_area_left_week_number_pane_t1_ParamLimits

0xd0ad,	// (0x0006accf) cell_month_view_pane_g1_ParamLimits

0x9b10,	// (0x00067732) cell_month_view_pane_t1_ParamLimits

0xa529,	// (0x0006814b) main_clock2_btn_pane_g1

0xf0b8,	// (0x0006ccda) main_clock2_btn_pane_t1

0xae36,	// (0x00068a58) listscroll_cmail_pane_ParamLimits

0xe803,	// (0x0006c425) main_sp_fs_email_pane_g1_ParamLimits

0xe80f,	// (0x0006c431) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0006d900) main_sp_fs_email_pane_g_ParamLimits

0xeb78,	// (0x0006c79a) list_recal_day_pane_ParamLimits

0xeb89,	// (0x0006c7ab) mian_recal_day_pane_t1

0x8ac7,	// (0x000666e9) list_single_dyc_row_text_pane_t4_ParamLimits

0x8ac7,	// (0x000666e9) list_single_dyc_row_text_pane_t4

0x8b04,	// (0x00066726) list_single_dyc_row_text_pane_t5_ParamLimits

0x8b04,	// (0x00066726) list_single_dyc_row_text_pane_t5

0xa754,	// (0x00068376) list_single_dyc_row_text_pane_t6_ParamLimits

0xa754,	// (0x00068376) list_single_dyc_row_text_pane_t6

0x3003,	// (0x00060c25) aid_mgn_list_cale_time_pane

0x4255,	// (0x00061e77) main_gallery2_pane_ParamLimits

0xd249,	// (0x0006ae6b) main_clock2_pane_cp01_t1

0xd257,	// (0x0006ae79) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0006d3e2) main_clock2_pane_cp01_t

0x16cc,	// (0x0005f2ee) cale_week_scroll_pane_g16_ParamLimits

0x16cc,	// (0x0005f2ee) cale_week_scroll_pane_g16

0xabbc,	// (0x000687de) vorec_slider_pane

0xf052,	// (0x0006cc74) vidtel_button_pane_t1_ParamLimits

0x9306,	// (0x00066f28) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9306,	// (0x00066f28) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9315,	// (0x00066f37) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9315,	// (0x00066f37) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe5e,	// (0x0006da80) main_fs_bigclock_clock_pane_g_ParamLimits

0x9325,	// (0x00066f47) main_fs_bigclock_clock_pane_t1_ParamLimits

0x933a,	// (0x00066f5c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe67,	// (0x0006da89) main_fs_bigclock_clock_pane_t_ParamLimits

0x4e9e,	// (0x00062ac0) main_mup3_lyrics_pane_ParamLimits

0x4e9e,	// (0x00062ac0) main_mup3_lyrics_pane

0x9e55,	// (0x00067a77) main_mup3_lyrics_pane_t1_ParamLimits

0x9e55,	// (0x00067a77) main_mup3_lyrics_pane_t1

0x5c91,	// (0x000638b3) aid_main_mp4_pane_t1_area

0x5c9b,	// (0x000638bd) aid_main_mp4_pane_t2_area

0x5da8,	// (0x000639ca) main_mp4_pane_g7_ParamLimits

0x5da8,	// (0x000639ca) main_mp4_pane_g7

0x5db4,	// (0x000639d6) main_mp4_pane_g8_ParamLimits

0x5db4,	// (0x000639d6) main_mp4_pane_g8

0x61d2,	// (0x00063df4) aid_call6_pane_g1_size

0x9c9c,	// (0x000678be) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9c9c,	// (0x000678be) list_double_large_graphic_phob2_other_pane

0x9e7c,	// (0x00067a9e) list_double_large_graphic_phob2_other_pane_g1

0x9e84,	// (0x00067aa6) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
