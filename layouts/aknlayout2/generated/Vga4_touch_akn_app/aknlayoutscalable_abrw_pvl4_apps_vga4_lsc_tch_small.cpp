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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005ed6c };

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
0x075e,	// (0x0005f4ca) Screen

0x076a,	// (0x0005f4d6) application_window

0x07a6,	// (0x0005f512) area_bottom_pane_ParamLimits

0x07a6,	// (0x0005f512) area_bottom_pane

0x07df,	// (0x0005f54b) area_top_pane_ParamLimits

0x07df,	// (0x0005f54b) area_top_pane

0x9c3b,	// (0x000689a7) call_video_uplink_pane_ParamLimits

0x9c3b,	// (0x000689a7) call_video_uplink_pane

0x0854,	// (0x0005f5c0) main_pane_ParamLimits

0x0854,	// (0x0005f5c0) main_pane

0xb4c0,	// (0x0006a22c) context_pane

0x3e53,	// (0x00062bbf) navi_pane

0x3e83,	// (0x00062bef) popup_cale_events_window_ParamLimits

0x3e83,	// (0x00062bef) popup_cale_events_window

0xb4d3,	// (0x0006a23f) popup_mup_playback_window

0x3e9b,	// (0x00062c07) signal_pane

0xead8,	// (0x0006d844) main_browser_pane

0xa002,	// (0x00068d6e) main_burst_pane

0x3b55,	// (0x000628c1) main_calc_pane

0xa002,	// (0x00068d6e) main_cale_day_pane

0xead8,	// (0x0006d844) main_cale_month_pane

0xa002,	// (0x00068d6e) main_cale_week_pane

0xa002,	// (0x00068d6e) main_call_pane

0xe7aa,	// (0x0006d516) main_call_poc_pane

0xa002,	// (0x00068d6e) main_camera_pane

0xa002,	// (0x00068d6e) main_chi_dic_pane

0x9ea4,	// (0x00068c10) main_clock_pane

0xe7aa,	// (0x0006d516) main_fmradio_pane

0xa002,	// (0x00068d6e) main_graph_messa_pane

0xe7aa,	// (0x0006d516) main_help_pane

0xead8,	// (0x0006d844) main_im_pane

0xea05,	// (0x0006d771) main_image_pane_ParamLimits

0xea05,	// (0x0006d771) main_image_pane

0xe7aa,	// (0x0006d516) main_location2_pane

0xa002,	// (0x00068d6e) main_location_pane

0xe7aa,	// (0x0006d516) main_messa_pane

0xe7aa,	// (0x0006d516) main_mp2_pane

0xa002,	// (0x00068d6e) main_mp_pane

0xe7aa,	// (0x0006d516) main_msg_pane

0xe7aa,	// (0x0006d516) main_mup_eq_pane

0xe7aa,	// (0x0006d516) main_mup_pane

0xead8,	// (0x0006d844) main_notes_pane

0xe7aa,	// (0x0006d516) main_pec_pane

0xe7aa,	// (0x0006d516) main_phob_pane

0xe7aa,	// (0x0006d516) main_pinb_pane

0xe7aa,	// (0x0006d516) main_postcard_pane

0xe7aa,	// (0x0006d516) main_qdial_pane

0xa002,	// (0x00068d6e) main_skin_pane

0xe7aa,	// (0x0006d516) main_smil2_pane

0xa002,	// (0x00068d6e) main_smil_pane

0xa002,	// (0x00068d6e) main_video_pane

0xa002,	// (0x00068d6e) main_video_tele_pane

0xea05,	// (0x0006d771) main_viewer_pane_ParamLimits

0xea05,	// (0x0006d771) main_viewer_pane

0xa002,	// (0x00068d6e) main_vorec_pane

0x3bab,	// (0x00062917) popup_blid_sat_info_window_ParamLimits

0x3bab,	// (0x00062917) popup_blid_sat_info_window

0x3c0f,	// (0x0006297b) popup_dyc_status_message_window_ParamLimits

0x3c0f,	// (0x0006297b) popup_dyc_status_message_window

0x3c29,	// (0x00062995) popup_grid_large_graphic_window_ParamLimits

0x3c29,	// (0x00062995) popup_grid_large_graphic_window

0x3ceb,	// (0x00062a57) popup_loc_request_window_ParamLimits

0x3ceb,	// (0x00062a57) popup_loc_request_window

0x3e27,	// (0x00062b93) popup_wml_address_window_ParamLimits

0x3e27,	// (0x00062b93) popup_wml_address_window

0x3993,	// (0x000626ff) call_muted_g1

0x3624,	// (0x00062390) popup_call_audio_conf_window_ParamLimits

0x3624,	// (0x00062390) popup_call_audio_conf_window

0x39a3,	// (0x0006270f) popup_call_audio_first_window_ParamLimits

0x39a3,	// (0x0006270f) popup_call_audio_first_window

0x3a19,	// (0x00062785) popup_call_audio_in_window_ParamLimits

0x3a19,	// (0x00062785) popup_call_audio_in_window

0x3a55,	// (0x000627c1) popup_call_audio_out_window_ParamLimits

0x3a55,	// (0x000627c1) popup_call_audio_out_window

0x3a8f,	// (0x000627fb) popup_call_audio_second_window_ParamLimits

0x3a8f,	// (0x000627fb) popup_call_audio_second_window

0x3ae5,	// (0x00062851) popup_call_audio_wait_window_ParamLimits

0x3ae5,	// (0x00062851) popup_call_audio_wait_window

0x3b1a,	// (0x00062886) popup_number_entry_window_ParamLimits

0x3b1a,	// (0x00062886) popup_number_entry_window

0xdda7,	// (0x0006cb13) bg_popup_call_pane_cp05_ParamLimits

0xdda7,	// (0x0006cb13) bg_popup_call_pane_cp05

0xddc7,	// (0x0006cb33) popup_number_entry_window_t1

0xddda,	// (0x0006cb46) popup_number_entry_window_t2

0xddec,	// (0x0006cb58) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0006de44) popup_number_entry_window_t

0xde33,	// (0x0006cb9f) text_title_cp2

0xde46,	// (0x0006cbb2) bg_popup_call_pane_cp_ParamLimits

0xde46,	// (0x0006cbb2) bg_popup_call_pane_cp

0xde54,	// (0x0006cbc0) call_thumbnail_pane

0xde5c,	// (0x0006cbc8) popup_call_audio_in_window_g1_ParamLimits

0xde5c,	// (0x0006cbc8) popup_call_audio_in_window_g1

0xde68,	// (0x0006cbd4) popup_call_audio_in_window_g2_ParamLimits

0xde68,	// (0x0006cbd4) popup_call_audio_in_window_g2

0xde74,	// (0x0006cbe0) popup_call_audio_in_window_g3_ParamLimits

0xde74,	// (0x0006cbe0) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0006de4d) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0006de4d) popup_call_audio_in_window_g

0xde80,	// (0x0006cbec) popup_call_audio_in_window_t1_ParamLimits

0xde80,	// (0x0006cbec) popup_call_audio_in_window_t1

0xde9c,	// (0x0006cc08) popup_call_audio_in_window_t2_ParamLimits

0xde9c,	// (0x0006cc08) popup_call_audio_in_window_t2

0xdeb8,	// (0x0006cc24) popup_call_audio_in_window_t3_ParamLimits

0xdeb8,	// (0x0006cc24) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0006de54) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0006de54) popup_call_audio_in_window_t

0xde46,	// (0x0006cbb2) bg_popup_call_pane_cp01_ParamLimits

0xde46,	// (0x0006cbb2) bg_popup_call_pane_cp01

0xde54,	// (0x0006cbc0) call_thumbnail_pane_cp02

0xdecb,	// (0x0006cc37) call_type_pane_cp022

0xded3,	// (0x0006cc3f) popup_call_audio_out_window_g1_ParamLimits

0xded3,	// (0x0006cc3f) popup_call_audio_out_window_g1

0xdee5,	// (0x0006cc51) popup_call_audio_out_window_g2_ParamLimits

0xdee5,	// (0x0006cc51) popup_call_audio_out_window_g2

0xdef1,	// (0x0006cc5d) popup_call_audio_out_window_g3_ParamLimits

0xdef1,	// (0x0006cc5d) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0006de5b) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0006de5b) popup_call_audio_out_window_g

0xdf03,	// (0x0006cc6f) popup_call_audio_out_window_t1_ParamLimits

0xdf03,	// (0x0006cc6f) popup_call_audio_out_window_t1

0xdf1b,	// (0x0006cc87) popup_call_audio_out_window_t2_ParamLimits

0xdf1b,	// (0x0006cc87) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0006de62) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0006de62) popup_call_audio_out_window_t

0xdf30,	// (0x0006cc9c) bg_popup_call_pane_ParamLimits

0xdf30,	// (0x0006cc9c) bg_popup_call_pane

0x09db,	// (0x0005f747) call_thumbnail_pane_cp_ParamLimits

0x09db,	// (0x0005f747) call_thumbnail_pane_cp

0xdfb4,	// (0x0006cd20) call_type_pane_cp01_ParamLimits

0xdfb4,	// (0x0006cd20) call_type_pane_cp01

0xe5b3,	// (0x0006d31f) popup_call_audio_first_window_g1_ParamLimits

0xe5b3,	// (0x0006d31f) popup_call_audio_first_window_g1

0xe5ff,	// (0x0006d36b) popup_call_audio_first_window_g2_ParamLimits

0xe5ff,	// (0x0006d36b) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x0006de67) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x0006de67) popup_call_audio_first_window_g

0xe643,	// (0x0006d3af) popup_call_audio_first_window_t1_ParamLimits

0xe643,	// (0x0006d3af) popup_call_audio_first_window_t1

0xe6ef,	// (0x0006d45b) popup_call_audio_first_window_t4_ParamLimits

0xe6ef,	// (0x0006d45b) popup_call_audio_first_window_t4

0xe77b,	// (0x0006d4e7) popup_call_audio_first_window_t5_ParamLimits

0xe77b,	// (0x0006d4e7) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0006de6c) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0006de6c) popup_call_audio_first_window_t

0xe7aa,	// (0x0006d516) bg_popup_call_pane_cp02

0xe7b4,	// (0x0006d520) call_type_pane_cp023

0xe7bc,	// (0x0006d528) popup_call_audio_wait_window_g1

0xe7c4,	// (0x0006d530) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0006de73) popup_call_audio_wait_window_g

0xe7cc,	// (0x0006d538) popup_call_audio_wait_window_t3

0xe7da,	// (0x0006d546) bg_popup_call_pane_cp03_ParamLimits

0xe7da,	// (0x0006d546) bg_popup_call_pane_cp03

0xe83a,	// (0x0006d5a6) call_thumbnail_pane_cp011_ParamLimits

0xe83a,	// (0x0006d5a6) call_thumbnail_pane_cp011

0xe846,	// (0x0006d5b2) call_type_pane_cp034_ParamLimits

0xe846,	// (0x0006d5b2) call_type_pane_cp034

0xe882,	// (0x0006d5ee) popup_call_audio_second_window_g1_ParamLimits

0xe882,	// (0x0006d5ee) popup_call_audio_second_window_g1

0xe8be,	// (0x0006d62a) popup_call_audio_second_window_g2_ParamLimits

0xe8be,	// (0x0006d62a) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0006de78) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0006de78) popup_call_audio_second_window_g

0xe8fa,	// (0x0006d666) popup_call_audio_second_window_t1_ParamLimits

0xe8fa,	// (0x0006d666) popup_call_audio_second_window_t1

0xe97b,	// (0x0006d6e7) popup_call_audio_second_window_t2_ParamLimits

0xe97b,	// (0x0006d6e7) popup_call_audio_second_window_t2

0xe9b1,	// (0x0006d71d) popup_call_audio_second_window_t3_ParamLimits

0xe9b1,	// (0x0006d71d) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0006de7d) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0006de7d) popup_call_audio_second_window_t

0xe7aa,	// (0x0006d516) bg_popup_call_pane_cp04

0xe9e7,	// (0x0006d753) list_conf_pane

0xe9ef,	// (0x0006d75b) popup_call_audio_conf_window_t1

0xe9fd,	// (0x0006d769) call_thumbnail_pane_g1

0xea05,	// (0x0006d771) bg_pinb_pane_ParamLimits

0xea05,	// (0x0006d771) bg_pinb_pane

0xea13,	// (0x0006d77f) find_pinb_pane

0xea1c,	// (0x0006d788) listscroll_pinb_pane_ParamLimits

0xea1c,	// (0x0006d788) listscroll_pinb_pane

0xea2b,	// (0x0006d797) pinb_bg_pane_g1

0x09ff,	// (0x0005f76b) pinb_bg_pane_g2

0x0a0b,	// (0x0005f777) pinb_bg_pane_g3

0x0a17,	// (0x0005f783) pinb_bg_pane_g4

0x0a23,	// (0x0005f78f) pinb_bg_pane_g5

0x0a2f,	// (0x0005f79b) pinb_bg_pane_g6

0x0a3a,	// (0x0005f7a6) pinb_bg_pane_g7

0x0a45,	// (0x0005f7b1) pinb_bg_pane_g8

0x0a50,	// (0x0005f7bc) pinb_bg_pane_g9

0x0a5a,	// (0x0005f7c6) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0006de84) pinb_bg_pane_g

0x0a77,	// (0x0005f7e3) grid_pinb_pane

0x0a82,	// (0x0005f7ee) list_pinb_pane

0x0a8d,	// (0x0005f7f9) scroll_pane_cp01_ParamLimits

0x0a8d,	// (0x0005f7f9) scroll_pane_cp01

0xea35,	// (0x0006d7a1) find_pinb_pane_g1_ParamLimits

0xea35,	// (0x0006d7a1) find_pinb_pane_g1

0xea4d,	// (0x0006d7b9) find_pinb_pane_t1

0xea5f,	// (0x0006d7cb) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0006de9e) find_pinb_pane_t

0xea74,	// (0x0006d7e0) input_focus_pane_cp01_ParamLimits

0xea74,	// (0x0006d7e0) input_focus_pane_cp01

0x0a9f,	// (0x0005f80b) cell_pinb_pane_ParamLimits

0x0a9f,	// (0x0005f80b) cell_pinb_pane

0x0ac1,	// (0x0005f82d) cell_pinb_pane_g1_ParamLimits

0x0ac1,	// (0x0005f82d) cell_pinb_pane_g1

0x0ad5,	// (0x0005f841) cell_pinb_pane_g2_ParamLimits

0x0ad5,	// (0x0005f841) cell_pinb_pane_g2

0xea80,	// (0x0006d7ec) cell_pinb_pane_g3_ParamLimits

0xea80,	// (0x0006d7ec) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0006dea3) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0006dea3) cell_pinb_pane_g

0xe7aa,	// (0x0006d516) grid_highlight_pane_cp01

0x0ae1,	// (0x0005f84d) list_pinb_item_pane_ParamLimits

0x0ae1,	// (0x0005f84d) list_pinb_item_pane

0xe7aa,	// (0x0006d516) list_highlight_pane_cp02

0x0af4,	// (0x0005f860) list_pinb_item_pane_g1_ParamLimits

0x0af4,	// (0x0005f860) list_pinb_item_pane_g1

0x0b01,	// (0x0005f86d) list_pinb_item_pane_g2_ParamLimits

0x0b01,	// (0x0005f86d) list_pinb_item_pane_g2

0x0b0d,	// (0x0005f879) list_pinb_item_pane_g3_ParamLimits

0x0b0d,	// (0x0005f879) list_pinb_item_pane_g3

0x0b1e,	// (0x0005f88a) list_pinb_item_pane_g4_ParamLimits

0x0b1e,	// (0x0005f88a) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0006deaa) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0006deaa) list_pinb_item_pane_g

0x0b2a,	// (0x0005f896) list_pinb_item_pane_t1_ParamLimits

0x0b2a,	// (0x0005f896) list_pinb_item_pane_t1

0x0b5f,	// (0x0005f8cb) calc_display_pane

0x0b87,	// (0x0005f8f3) calc_paper_pane

0x0baa,	// (0x0005f916) grid_calc_pane

0xe7aa,	// (0x0006d516) bg_list_pane_cp01

0x0bd8,	// (0x0005f944) clock_g1

0x0be0,	// (0x0005f94c) clock_g2

0x0001,

0xf147,	// (0x0006deb3) clock_g

0x0be8,	// (0x0005f954) clock_t1_ParamLimits

0x0be8,	// (0x0005f954) clock_t1

0x0bfd,	// (0x0005f969) clock_t2_ParamLimits

0x0bfd,	// (0x0005f969) clock_t2

0x0c0f,	// (0x0005f97b) clock_t3_ParamLimits

0x0c0f,	// (0x0005f97b) clock_t3

0x0c21,	// (0x0005f98d) clock_t4_ParamLimits

0x0c21,	// (0x0005f98d) clock_t4

0x0c33,	// (0x0005f99f) clock_t5_ParamLimits

0x0c33,	// (0x0005f99f) clock_t5

0x0c48,	// (0x0005f9b4) clock_t6_ParamLimits

0x0c48,	// (0x0005f9b4) clock_t6

0x0c5a,	// (0x0005f9c6) clock_t7_ParamLimits

0x0c5a,	// (0x0005f9c6) clock_t7

0x0c6c,	// (0x0005f9d8) clock_t8_ParamLimits

0x0c6c,	// (0x0005f9d8) clock_t8

0x0c80,	// (0x0005f9ec) clock_t9_ParamLimits

0x0c80,	// (0x0005f9ec) clock_t9

0x0008,

0xf14c,	// (0x0006deb8) clock_t_ParamLimits

0xf14c,	// (0x0006deb8) clock_t

0xea8c,	// (0x0006d7f8) popup_clock_analogue_window_cp02

0xea8c,	// (0x0006d7f8) popup_clock_digital_window_cp01

0xea94,	// (0x0006d800) listscroll_help_pane

0xe7aa,	// (0x0006d516) phob_pre_status_pane

0xea9e,	// (0x0006d80a) grid_qdial_pane

0xe7aa,	// (0x0006d516) listscroll_mce_pane

0xeaa8,	// (0x0006d814) bg_notes_pane

0xeab6,	// (0x0006d822) list_notes_pane

0x0c96,	// (0x0005fa02) scroll_pane_cp06

0xeac4,	// (0x0006d830) bg_calc_paper_pane

0x9c79,	// (0x000689e5) list_calc_pane

0xead8,	// (0x0006d844) bg_calc_display_pane

0x0caa,	// (0x0005fa16) calc_display_pane_t1

0x0cbc,	// (0x0005fa28) calc_display_pane_t2

0x9c93,	// (0x000689ff) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0006decb) calc_display_pane_t

0x0cce,	// (0x0005fa3a) cell_calc_pane_ParamLimits

0x0cce,	// (0x0005fa3a) cell_calc_pane

0xeae4,	// (0x0006d850) bg_calc_paper_pane_g1

0xeaf0,	// (0x0006d85c) bg_calc_paper_pane_g2

0xeafc,	// (0x0006d868) bg_calc_paper_pane_g3

0xeb08,	// (0x0006d874) bg_calc_paper_pane_g4

0xeb14,	// (0x0006d880) bg_calc_paper_pane_g5

0x0d0d,	// (0x0005fa79) bg_calc_paper_pane_g6

0x0d20,	// (0x0005fa8c) bg_calc_paper_pane_g7

0x0d33,	// (0x0005fa9f) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x0006ded2) bg_calc_paper_pane_g

0x0d44,	// (0x0005fab0) calc_bg_paper_pane_g9

0x0d55,	// (0x0005fac1) list_calc_item_pane_ParamLimits

0x0d55,	// (0x0005fac1) list_calc_item_pane

0xeb20,	// (0x0006d88c) list_calc_item_pane_g1

0x9ca5,	// (0x00068a11) list_calc_item_pane_t1_ParamLimits

0x9ca5,	// (0x00068a11) list_calc_item_pane_t1

0x0d6a,	// (0x0005fad6) list_calc_item_pane_t2_ParamLimits

0x0d6a,	// (0x0005fad6) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x0006dee3) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x0006dee3) list_calc_item_pane_t

0xeb2d,	// (0x0006d899) cell_calc_pane_g1

0xeb37,	// (0x0006d8a3) grid_highlight_pane_cp02

0xeb59,	// (0x0006d8c5) bg_calc_display_pane_g1

0x9cb7,	// (0x00068a23) bg_calc_display_pane_g2

0xeb62,	// (0x0006d8ce) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0006deed) bg_calc_display_pane_g

0x0d9c,	// (0x0005fb08) cell_qdial_pane_ParamLimits

0x0d9c,	// (0x0005fb08) cell_qdial_pane

0x0db2,	// (0x0005fb1e) cell_qdial_pane_g1_ParamLimits

0x0db2,	// (0x0005fb1e) cell_qdial_pane_g1

0x0dc8,	// (0x0005fb34) cell_qdial_pane_g2_ParamLimits

0x0dc8,	// (0x0005fb34) cell_qdial_pane_g2

0xeb6b,	// (0x0006d8d7) cell_qdial_pane_g3_ParamLimits

0xeb6b,	// (0x0006d8d7) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0006def4) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0006def4) cell_qdial_pane_g

0x0dee,	// (0x0005fb5a) cell_qdial_pane_t1_ParamLimits

0x0dee,	// (0x0005fb5a) cell_qdial_pane_t1

0x0e06,	// (0x0005fb72) cell_qdial_pane_t2_ParamLimits

0x0e06,	// (0x0005fb72) cell_qdial_pane_t2

0x0e19,	// (0x0005fb85) cell_qdial_pane_t3_ParamLimits

0x0e19,	// (0x0005fb85) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0006defd) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0006defd) cell_qdial_pane_t

0xe7aa,	// (0x0006d516) grid_highlight_pane_cp04

0xeb77,	// (0x0006d8e3) thumbnail_qdial_pane_ParamLimits

0xeb77,	// (0x0006d8e3) thumbnail_qdial_pane

0xebd3,	// (0x0006d93f) list_help_pane

0xebdc,	// (0x0006d948) scroll_pane_cp02

0x0e2c,	// (0x0005fb98) help_list_pane_t1_ParamLimits

0x0e2c,	// (0x0005fb98) help_list_pane_t1

0x9cc1,	// (0x00068a2d) bg_notes_pane_g2

0x9cc9,	// (0x00068a35) bg_notes_pane_g3

0x9cd1,	// (0x00068a3d) notes_bg_pane_g1

0x9cd9,	// (0x00068a45) notes_bg_pane_g4

0x9ce1,	// (0x00068a4d) notes_bg_pane_g5

0x9ce9,	// (0x00068a55) notes_bg_pane_g6

0x9cf1,	// (0x00068a5d) notes_bg_pane_g7

0x9cf9,	// (0x00068a65) notes_bg_pane_g8

0x9d01,	// (0x00068a6d) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0006df1b) notes_bg_pane_g

0x0e50,	// (0x0005fbbc) list_notes_text_pane_ParamLimits

0x0e50,	// (0x0005fbbc) list_notes_text_pane

0xebe5,	// (0x0006d951) list_notes_text_pane_g1

0x0e67,	// (0x0005fbd3) list_notes_text_pane_t1

0xead8,	// (0x0006d844) listscroll_cale_week_pane

0x0e92,	// (0x0005fbfe) bg_cale_heading_pane

0xebff,	// (0x0006d96b) bg_cale_pane_cp01

0x0eae,	// (0x0005fc1a) cale_week_corner_pane

0x0ec4,	// (0x0005fc30) cale_week_day_heading_pane

0x0ee0,	// (0x0005fc4c) cale_week_scroll_pane_g1

0x0ef9,	// (0x0005fc65) cale_week_scroll_pane_g2

0x0f0a,	// (0x0005fc76) cale_week_scroll_pane_g3

0x0f1b,	// (0x0005fc87) cale_week_scroll_pane_g4

0x0f2c,	// (0x0005fc98) cale_week_scroll_pane_g5

0x0f3d,	// (0x0005fca9) cale_week_scroll_pane_g6

0x0f4e,	// (0x0005fcba) cale_week_scroll_pane_g7

0x0f5f,	// (0x0005fccb) cale_week_scroll_pane_g8

0x0f70,	// (0x0005fcdc) cale_week_scroll_pane_g9

0x0f81,	// (0x0005fced) cale_week_scroll_pane_g10

0x0f92,	// (0x0005fcfe) cale_week_scroll_pane_g11

0x0fa3,	// (0x0005fd0f) cale_week_scroll_pane_g12

0x0fb4,	// (0x0005fd20) cale_week_scroll_pane_g13

0x0fcd,	// (0x0005fd39) cale_week_scroll_pane_g14

0x0fe6,	// (0x0005fd52) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0006df2a) cale_week_scroll_pane_g

0x0fff,	// (0x0005fd6b) cale_week_time_pane

0x1010,	// (0x0005fd7c) grid_cale_week_pane

0x102b,	// (0x0005fd97) scroll_pane_cp08

0x1043,	// (0x0005fdaf) cell_cale_week_pane_ParamLimits

0x1043,	// (0x0005fdaf) cell_cale_week_pane

0x108b,	// (0x0005fdf7) cale_week_day_heading_pane_t1

0x109f,	// (0x0005fe0b) cale_week_day_heading_pane_t2

0x10b3,	// (0x0005fe1f) cale_week_day_heading_pane_t3

0x10c7,	// (0x0005fe33) cale_week_day_heading_pane_t4

0x10db,	// (0x0005fe47) cale_week_day_heading_pane_t5

0x10ef,	// (0x0005fe5b) cale_week_day_heading_pane_t6

0x1103,	// (0x0005fe6f) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0006df49) cale_week_day_heading_pane_t

0xec2a,	// (0x0006d996) bg_cale_side_pane

0x1117,	// (0x0005fe83) cale_week_time_pane_t1

0x112f,	// (0x0005fe9b) cale_week_time_pane_t2

0x1147,	// (0x0005feb3) cale_week_time_pane_t3

0x115f,	// (0x0005fecb) cale_week_time_pane_t4

0x1177,	// (0x0005fee3) cale_week_time_pane_t5

0x118f,	// (0x0005fefb) cale_week_time_pane_t6

0x11a7,	// (0x0005ff13) cale_week_time_pane_t7

0x11c3,	// (0x0005ff2f) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0006df58) cale_week_time_pane_t

0x11e3,	// (0x0005ff4f) cell_cale_week_pane_g2

0x11f4,	// (0x0005ff60) cell_cale_week_pane_g3_ParamLimits

0x11f4,	// (0x0005ff60) cell_cale_week_pane_g3

0xec38,	// (0x0006d9a4) grid_highlight_pane_cp07

0xec40,	// (0x0006d9ac) listscroll_gms_pane

0xec4a,	// (0x0006d9b6) grid_gms_pane

0xec53,	// (0x0006d9bf) listscroll_gms_pane_g1

0xec5b,	// (0x0006d9c7) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0006df69) listscroll_gms_pane_g

0x120c,	// (0x0005ff78) scroll_pane_cp010

0x1217,	// (0x0005ff83) cell_gms_pane_ParamLimits

0x1217,	// (0x0005ff83) cell_gms_pane

0x1231,	// (0x0005ff9d) cell_gms_pane_g1

0xec63,	// (0x0006d9cf) cell_gms_pane_g2

0xec6b,	// (0x0006d9d7) cell_gms_pane_g3

0xec74,	// (0x0006d9e0) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0006df6e) cell_gms_pane_g

0xec7d,	// (0x0006d9e9) grid_highlight_pane_cp09

0x393b,	// (0x000626a7) phob_pre_status_pane_g1

0x3943,	// (0x000626af) phob_pre_status_pane_g2

0x394b,	// (0x000626b7) phob_pre_status_pane_g3

0x3953,	// (0x000626bf) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0006e35d) phob_pre_status_pane_g

0x3963,	// (0x000626cf) phob_pre_status_pane_t1

0x3973,	// (0x000626df) phob_pre_status_pane_t2

0x3983,	// (0x000626ef) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x0006e368) phob_pre_status_pane_t

0xe7aa,	// (0x0006d516) bg_list_pane_cp05

0x1241,	// (0x0005ffad) grid_vorec_pane

0x124d,	// (0x0005ffb9) vorec_t1

0x125b,	// (0x0005ffc7) vorec_t2

0x1269,	// (0x0005ffd5) vorec_t3

0x1277,	// (0x0005ffe3) vorec_t4

0x1285,	// (0x0005fff1) vorec_t5

0x9d09,	// (0x00068a75) vorec_t6

0x0006,

0xf20b,	// (0x0006df77) vorec_t

0x12a1,	// (0x0006000d) wait_bar_pane_cp01

0x12a9,	// (0x00060015) cell_vorec_pane_ParamLimits

0x12a9,	// (0x00060015) cell_vorec_pane

0xec85,	// (0x0006d9f1) cell_vorec_pane_g1

0xe7aa,	// (0x0006d516) grid_highlight_pane_cp05

0x12d4,	// (0x00060040) cams_zoom_pane

0x12e3,	// (0x0006004f) image_vga_pane

0x12fd,	// (0x00060069) main_camera_pane_g1

0x130f,	// (0x0006007b) main_camera_pane_g2

0x131f,	// (0x0006008b) main_camera_pane_g3

0x1333,	// (0x0006009f) main_camera_pane_g4

0x1347,	// (0x000600b3) main_camera_pane_g5

0x135b,	// (0x000600c7) main_camera_pane_g6

0x136f,	// (0x000600db) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0006df86) main_camera_pane_g

0x1383,	// (0x000600ef) main_camera_pane_t1

0x1399,	// (0x00060105) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0006df97) main_camera_pane_t

0x13d7,	// (0x00060143) cams_zoom_pane_cp_ParamLimits

0x13d7,	// (0x00060143) cams_zoom_pane_cp

0x13ff,	// (0x0006016b) image_cif_pane_ParamLimits

0x13ff,	// (0x0006016b) image_cif_pane

0x143a,	// (0x000601a6) image_subqcif_pane

0x1444,	// (0x000601b0) main_video_pane_g1_ParamLimits

0x1444,	// (0x000601b0) main_video_pane_g1

0x1468,	// (0x000601d4) main_video_pane_g2_ParamLimits

0x1468,	// (0x000601d4) main_video_pane_g2

0x149e,	// (0x0006020a) main_video_pane_g3_ParamLimits

0x149e,	// (0x0006020a) main_video_pane_g3

0x14cc,	// (0x00060238) main_video_pane_g4_ParamLimits

0x14cc,	// (0x00060238) main_video_pane_g4

0x14fa,	// (0x00060266) main_video_pane_g5_ParamLimits

0x14fa,	// (0x00060266) main_video_pane_g5

0xec9b,	// (0x0006da07) main_video_pane_g6_ParamLimits

0xec9b,	// (0x0006da07) main_video_pane_g6

0x0006,

0xf230,	// (0x0006df9c) main_video_pane_g_ParamLimits

0xf230,	// (0x0006df9c) main_video_pane_g

0x1523,	// (0x0006028f) main_video_pane_t1_ParamLimits

0x1523,	// (0x0006028f) main_video_pane_t1

0xecb5,	// (0x0006da21) cams_zoom_pane_g1

0xecbe,	// (0x0006da2a) cams_zoom_pane_g2

0xecc7,	// (0x0006da33) cams_zoom_pane_g3

0xecd0,	// (0x0006da3c) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0006dfab) cams_zoom_pane_g

0x1580,	// (0x000602ec) grid_cams_pane

0x159a,	// (0x00060306) linegrid_cams_pane

0x15ac,	// (0x00060318) cell_cams_pane_ParamLimits

0x15ac,	// (0x00060318) cell_cams_pane

0xecd9,	// (0x0006da45) cams_burst_image_pane

0xece1,	// (0x0006da4d) cell_cams_pane_g1

0xe7aa,	// (0x0006d516) grid_highlight_pane_cp03

0xeb2d,	// (0x0006d899) mp_bg_pane_g1

0xe7aa,	// (0x0006d516) bg_list_pane_cp03

0xb392,	// (0x0006a0fe) bg_mp_pane

0xb39a,	// (0x0006a106) grid_mp_pane

0xb3a2,	// (0x0006a10e) media_player_g1

0xb3ac,	// (0x0006a118) media_player_t1

0xb3ba,	// (0x0006a126) media_player_t2

0xb3c8,	// (0x0006a134) media_player_t3

0xb3d6,	// (0x0006a142) media_player_t4

0xb3e4,	// (0x0006a150) media_player_t5

0xb3f2,	// (0x0006a15e) media_player_t6

0xb400,	// (0x0006a16c) media_player_t7

0x0006,

0xf5db,	// (0x0006e347) media_player_t

0xb40e,	// (0x0006a17a) wait_bar_pane_cp02

0xf5c0,	// (0x0006e32c) main_usb_pane_t

0x3932,	// (0x0006269e) cell_mp_pane

0xeb2d,	// (0x0006d899) cell_mp_pane_g1

0xe7aa,	// (0x0006d516) grid_highlight_pane_cp06

0xeda7,	// (0x0006db13) grid_skin_colour_pane

0xedaf,	// (0x0006db1b) list_highlight_pane_cp03

0x1627,	// (0x00060393) skin_g1

0xedb7,	// (0x0006db23) skin_t1

0xedc6,	// (0x0006db32) skin_t2

0x0001,

0xf274,	// (0x0006dfe0) skin_t

0x1631,	// (0x0006039d) cell_skin_colour_pane_ParamLimits

0x1631,	// (0x0006039d) cell_skin_colour_pane

0xedd4,	// (0x0006db40) cell_skin_colour_pane_g1

0x16a4,	// (0x00060410) call_video_g1_ParamLimits

0x16a4,	// (0x00060410) call_video_g1

0x16c0,	// (0x0006042c) call_video_g2_ParamLimits

0x16c0,	// (0x0006042c) call_video_g2

0x0001,

0xf279,	// (0x0006dfe5) call_video_g_ParamLimits

0xf279,	// (0x0006dfe5) call_video_g

0x1705,	// (0x00060471) call_video_uplink_pane_cp1_ParamLimits

0x1705,	// (0x00060471) call_video_uplink_pane_cp1

0xede6,	// (0x0006db52) call_video_uplink_pane_cp2

0x17a6,	// (0x00060512) video_down_crop_pane_ParamLimits

0x17a6,	// (0x00060512) video_down_crop_pane

0x188f,	// (0x000605fb) video_down_pane_ParamLimits

0x188f,	// (0x000605fb) video_down_pane

0xedee,	// (0x0006db5a) video_down_subqcif_pane_ParamLimits

0xedee,	// (0x0006db5a) video_down_subqcif_pane

0xee08,	// (0x0006db74) video_down_subqcif_pane_cp_ParamLimits

0xee08,	// (0x0006db74) video_down_subqcif_pane_cp

0xee30,	// (0x0006db9c) im_reading_pane_ParamLimits

0xee30,	// (0x0006db9c) im_reading_pane

0x1998,	// (0x00060704) im_writing_pane_ParamLimits

0x1998,	// (0x00060704) im_writing_pane

0x19b6,	// (0x00060722) im_reading_pane_t1

0xee4a,	// (0x0006dbb6) list_im_pane

0xee5b,	// (0x0006dbc7) scroll_pane_cp07

0x19f5,	// (0x00060761) im_writing_pane_t1_ParamLimits

0x19f5,	// (0x00060761) im_writing_pane_t1

0xee74,	// (0x0006dbe0) im_writing_pane_t2_ParamLimits

0xee74,	// (0x0006dbe0) im_writing_pane_t2

0x0001,

0xf283,	// (0x0006dfef) im_writing_pane_t_ParamLimits

0xf283,	// (0x0006dfef) im_writing_pane_t

0xe7aa,	// (0x0006d516) input_focus_pane_cp04

0xe7aa,	// (0x0006d516) input_focus_pane_cp05

0x1a0a,	// (0x00060776) list_im_single_pane_ParamLimits

0x1a0a,	// (0x00060776) list_im_single_pane

0x1a23,	// (0x0006078f) list_single_im_pane_t1

0x38f2,	// (0x0006265e) blid_accuracy_pane

0x38fa,	// (0x00062666) blid_compass_pane

0x3904,	// (0x00062670) main_location_t1

0x3914,	// (0x00062680) main_location_t2

0x3924,	// (0x00062690) main_location_t3

0x0002,

0xf5ea,	// (0x0006e356) main_location_t

0xe7aa,	// (0x0006d516) aid_levels_location

0xeb2d,	// (0x0006d899) blid_accuracy_pane_g1

0xeb2d,	// (0x0006d899) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0006e051) blid_accuracy_pane_g

0xeebc,	// (0x0006dc28) wml_content_pane

0xeefa,	// (0x0006dc66) wml_button_pane_ParamLimits

0xeefa,	// (0x0006dc66) wml_button_pane

0x1a32,	// (0x0006079e) wml_list_single_large_pane_ParamLimits

0x1a32,	// (0x0006079e) wml_list_single_large_pane

0x1a4b,	// (0x000607b7) wml_list_single_medium_pane_ParamLimits

0x1a4b,	// (0x000607b7) wml_list_single_medium_pane

0x1a65,	// (0x000607d1) wml_list_single_small_pane_ParamLimits

0x1a65,	// (0x000607d1) wml_list_single_small_pane

0xef0e,	// (0x0006dc7a) wml_selection_box_pane_ParamLimits

0xef0e,	// (0x0006dc7a) wml_selection_box_pane

0xef21,	// (0x0006dc8d) wml_list_single_pane_t1

0xef30,	// (0x0006dc9c) wml_list_single_medium_pane_t1

0xef3f,	// (0x0006dcab) wml_list_single_large_pane_t1

0xef4e,	// (0x0006dcba) input_focus_pane_cp02_ParamLimits

0xef4e,	// (0x0006dcba) input_focus_pane_cp02

0xef61,	// (0x0006dccd) wml_selection_box_pane_g1

0xef6a,	// (0x0006dcd6) wml_selection_box_pane_t1_ParamLimits

0xef6a,	// (0x0006dcd6) wml_selection_box_pane_t1

0xea05,	// (0x0006d771) bg_wml_button_pane_ParamLimits

0xea05,	// (0x0006d771) bg_wml_button_pane

0xef82,	// (0x0006dcee) wml_button_pane_g1

0xef8a,	// (0x0006dcf6) wml_button_pane_t1

0xef82,	// (0x0006dcee) wml_button_bg_pane_g1

0xef9a,	// (0x0006dd06) wml_button_bg_pane_g2

0xefa2,	// (0x0006dd0e) wml_button_bg_pane_g3

0xefaa,	// (0x0006dd16) wml_button_bg_pane_g4

0xefb2,	// (0x0006dd1e) wml_button_bg_pane_g5

0xefba,	// (0x0006dd26) wml_button_bg_pane_g6

0xefc2,	// (0x0006dd2e) wml_button_bg_pane_g7

0xefca,	// (0x0006dd36) wml_button_bg_pane_g8

0xefd2,	// (0x0006dd3e) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0006dff4) wml_button_bg_pane_g

0x1a84,	// (0x000607f0) bg_list_pane_cp02

0xefda,	// (0x0006dd46) mce_header_pane_ParamLimits

0xefda,	// (0x0006dd46) mce_header_pane

0xeff0,	// (0x0006dd5c) mce_icon_pane

0xeff0,	// (0x0006dd5c) mce_image_pane

0xeff9,	// (0x0006dd65) mce_text_pane_ParamLimits

0xeff9,	// (0x0006dd65) mce_text_pane

0x1a8e,	// (0x000607fa) scroll_pane_cp03

0xeef2,	// (0x0006dc5e) scroll_pane_cp04

0xf00c,	// (0x0006dd78) scroll_pane_cp05_ParamLimits

0xf00c,	// (0x0006dd78) scroll_pane_cp05

0x1a98,	// (0x00060804) mce_header_field_pane_ParamLimits

0x1a98,	// (0x00060804) mce_header_field_pane

0x1ab1,	// (0x0006081d) mce_header_field_pane_2_ParamLimits

0x1ab1,	// (0x0006081d) mce_header_field_pane_2

0x1ac7,	// (0x00060833) mce_header_field_pane_3

0x1acf,	// (0x0006083b) list_single_mce_message_pane_ParamLimits

0x1acf,	// (0x0006083b) list_single_mce_message_pane

0x1aeb,	// (0x00060857) list_single_mce_smart_pane_ParamLimits

0x1aeb,	// (0x00060857) list_single_mce_smart_pane

0xf018,	// (0x0006dd84) input_focus_pane_cp03

0xf021,	// (0x0006dd8d) list_header_data_pane

0x1b12,	// (0x0006087e) mce_header_field_pane_t1

0x1b22,	// (0x0006088e) list_single_mce_header_pane_ParamLimits

0x1b22,	// (0x0006088e) list_single_mce_header_pane

0xf029,	// (0x0006dd95) list_single_mce_header_pane_t1

0xf038,	// (0x0006dda4) list_single_mce_message_pane_g1

0xf040,	// (0x0006ddac) list_single_mce_message_pane_t1

0x1b54,	// (0x000608c0) bg_cale_heading_pane_cp01_ParamLimits

0x1b54,	// (0x000608c0) bg_cale_heading_pane_cp01

0xf04e,	// (0x0006ddba) bg_cale_pane_cp02_ParamLimits

0xf04e,	// (0x0006ddba) bg_cale_pane_cp02

0x1b87,	// (0x000608f3) cale_month_corner_pane

0x1b9d,	// (0x00060909) cale_month_day_heading_pane_ParamLimits

0x1b9d,	// (0x00060909) cale_month_day_heading_pane

0x1bd0,	// (0x0006093c) cale_month_pane_g1_ParamLimits

0x1bd0,	// (0x0006093c) cale_month_pane_g1

0x1bfc,	// (0x00060968) cale_month_pane_g2_ParamLimits

0x1bfc,	// (0x00060968) cale_month_pane_g2

0x1c1d,	// (0x00060989) cale_month_pane_g3_ParamLimits

0x1c1d,	// (0x00060989) cale_month_pane_g3

0x1c59,	// (0x000609c5) cale_month_pane_g4_ParamLimits

0x1c59,	// (0x000609c5) cale_month_pane_g4

0x1c95,	// (0x00060a01) cale_month_pane_g5_ParamLimits

0x1c95,	// (0x00060a01) cale_month_pane_g5

0x1cd1,	// (0x00060a3d) cale_month_pane_g6_ParamLimits

0x1cd1,	// (0x00060a3d) cale_month_pane_g6

0x1d0d,	// (0x00060a79) cale_month_pane_g7_ParamLimits

0x1d0d,	// (0x00060a79) cale_month_pane_g7

0x1d49,	// (0x00060ab5) cale_month_pane_g8_ParamLimits

0x1d49,	// (0x00060ab5) cale_month_pane_g8

0x1d85,	// (0x00060af1) cale_month_pane_g9_ParamLimits

0x1d85,	// (0x00060af1) cale_month_pane_g9

0x1dbb,	// (0x00060b27) cale_month_pane_g10_ParamLimits

0x1dbb,	// (0x00060b27) cale_month_pane_g10

0x1de5,	// (0x00060b51) cale_month_pane_g11_ParamLimits

0x1de5,	// (0x00060b51) cale_month_pane_g11

0x1e0f,	// (0x00060b7b) cale_month_pane_g12_ParamLimits

0x1e0f,	// (0x00060b7b) cale_month_pane_g12

0x1e3d,	// (0x00060ba9) cale_month_pane_g13_ParamLimits

0x1e3d,	// (0x00060ba9) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0006e007) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0006e007) cale_month_pane_g

0x1e6b,	// (0x00060bd7) cale_month_week_pane

0x1e7c,	// (0x00060be8) grid_cale_month_pane_ParamLimits

0x1e7c,	// (0x00060be8) grid_cale_month_pane

0x1eaa,	// (0x00060c16) cale_month_day_heading_pane_t1

0x1f08,	// (0x00060c74) cale_month_day_heading_pane_t2

0x1f6d,	// (0x00060cd9) cale_month_day_heading_pane_t3

0x1fd2,	// (0x00060d3e) cale_month_day_heading_pane_t4

0x2037,	// (0x00060da3) cale_month_day_heading_pane_t5

0x209c,	// (0x00060e08) cale_month_day_heading_pane_t6

0x2101,	// (0x00060e6d) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0006e022) cale_month_day_heading_pane_t

0xec2a,	// (0x0006d996) bg_cale_side_pane_cp01

0x2166,	// (0x00060ed2) cale_month_week_pane_t1

0x217d,	// (0x00060ee9) cale_month_week_pane_t2

0x2194,	// (0x00060f00) cale_month_week_pane_t3

0x21ab,	// (0x00060f17) cale_month_week_pane_t4

0x21c2,	// (0x00060f2e) cale_month_week_pane_t5

0x21d9,	// (0x00060f45) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0006e031) cale_month_week_pane_t

0x21f8,	// (0x00060f64) cell_cale_month_pane_ParamLimits

0x21f8,	// (0x00060f64) cell_cale_month_pane

0x9d17,	// (0x00068a83) cell_cale_month_pane_g1

0x22a6,	// (0x00061012) cell_cale_month_pane_t1_ParamLimits

0x22a6,	// (0x00061012) cell_cale_month_pane_t1

0xec38,	// (0x0006d9a4) grid_highlight_pane_cp08

0xeb2d,	// (0x0006d899) main_smil_g1

0x22c2,	// (0x0006102e) smil_status_pane

0xf0ad,	// (0x0006de19) smil_text_pane

0xb2b0,	// (0x0006a01c) bg_popup_call3_rect_pane_g8

0xb2b8,	// (0x0006a024) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0006e2ea) bg_popup_call3_rect_pane_g

0xb54d,	// (0x0006a2b9) smil_status_volume_pane_g1

0xf0b7,	// (0x0006de23) smil_status_pane_t1

0xb580,	// (0x0006a2ec) volume_smil_pane

0xf0ce,	// (0x0006de3a) list_smil_text_pane

0x22d7,	// (0x00061043) scroll_pane_cp011

0x22e2,	// (0x0006104e) smil_text_list_pane_t1_ParamLimits

0x22e2,	// (0x0006104e) smil_text_list_pane_t1

0x9d23,	// (0x00068a8f) aid_volume_smil_ParamLimits

0x9d23,	// (0x00068a8f) aid_volume_smil

0xeb2d,	// (0x0006d899) smil_volume_pane_g1

0xeb2d,	// (0x0006d899) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0006e051) smil_volume_pane_g

0xead8,	// (0x0006d844) listscroll_cale_day_pane

0x2337,	// (0x000610a3) bg_cale_pane

0x234f,	// (0x000610bb) list_cale_pane

0x2360,	// (0x000610cc) scroll_pane_cp09

0x2371,	// (0x000610dd) cale_bg_pane_g1

0x2379,	// (0x000610e5) cale_bg_pane_g2

0x2381,	// (0x000610ed) cale_bg_pane_g3

0x2389,	// (0x000610f5) cale_bg_pane_g4

0x2391,	// (0x000610fd) cale_bg_pane_g5

0x2399,	// (0x00061105) cale_bg_pane_g6

0x23a1,	// (0x0006110d) cale_bg_pane_g7

0x23a9,	// (0x00061115) cale_bg_pane_g8

0x23b1,	// (0x0006111d) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0006e056) cale_bg_pane_g

0x23b9,	// (0x00061125) list_cale_time_pane_ParamLimits

0x23b9,	// (0x00061125) list_cale_time_pane

0x23ce,	// (0x0006113a) list_cale_time_pane_g1_ParamLimits

0x23ce,	// (0x0006113a) list_cale_time_pane_g1

0x23da,	// (0x00061146) list_cale_time_pane_g2_ParamLimits

0x23da,	// (0x00061146) list_cale_time_pane_g2

0x23e7,	// (0x00061153) list_cale_time_pane_g3_ParamLimits

0x23e7,	// (0x00061153) list_cale_time_pane_g3

0x23f5,	// (0x00061161) list_cale_time_pane_g4_ParamLimits

0x23f5,	// (0x00061161) list_cale_time_pane_g4

0x2403,	// (0x0006116f) list_cale_time_pane_g5_ParamLimits

0x2403,	// (0x0006116f) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0006e069) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0006e069) list_cale_time_pane_g

0x241e,	// (0x0006118a) list_cale_time_pane_t1_ParamLimits

0x241e,	// (0x0006118a) list_cale_time_pane_t1

0x2446,	// (0x000611b2) list_cale_time_pane_t2_ParamLimits

0x2446,	// (0x000611b2) list_cale_time_pane_t2

0x2a85,	// (0x000617f1) aid_blid_cardinal_pane

0x2ac7,	// (0x00061833) compass_pane_t4

0x246e,	// (0x000611da) list_cale_time_pane_t4_ParamLimits

0x246e,	// (0x000611da) list_cale_time_pane_t4

0x2ad5,	// (0x00061841) compass_pane_t5

0x2ae5,	// (0x00061851) compass_pane_t6

0x2af3,	// (0x0006185f) compass_pane_t7

0x9f54,	// (0x00068cc0) navi_pane_cc_t1

0xa0bb,	// (0x00068e27) aid_phob_thumbnail_center_pane

0x32b8,	// (0x00062024) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0006e076) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0006e076) list_cale_time_pane_t

0xde46,	// (0x0006cbb2) bg_popup_window_pane_cp02_ParamLimits

0xde46,	// (0x0006cbb2) bg_popup_window_pane_cp02

0x2496,	// (0x00061202) heading_pane_cp01_ParamLimits

0x2496,	// (0x00061202) heading_pane_cp01

0x24a2,	// (0x0006120e) loc_req_pane_ParamLimits

0x24a2,	// (0x0006120e) loc_req_pane

0x24b2,	// (0x0006121e) loc_type_pane_ParamLimits

0x24b2,	// (0x0006121e) loc_type_pane

0x24c4,	// (0x00061230) loc_type_pane_t1_ParamLimits

0x24c4,	// (0x00061230) loc_type_pane_t1

0x24d6,	// (0x00061242) loc_type_pane_t2_ParamLimits

0x24d6,	// (0x00061242) loc_type_pane_t2

0x24e8,	// (0x00061254) loc_type_pane_t3_ParamLimits

0x24e8,	// (0x00061254) loc_type_pane_t3

0x0002,

0xf311,	// (0x0006e07d) loc_type_pane_t_ParamLimits

0xf311,	// (0x0006e07d) loc_type_pane_t

0x24fa,	// (0x00061266) list_loc_req_pane

0x2504,	// (0x00061270) scroll_pane_cp012

0x250f,	// (0x0006127b) list_single_loc_request_popup_menu_pane_ParamLimits

0x250f,	// (0x0006127b) list_single_loc_request_popup_menu_pane

0x251c,	// (0x00061288) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x251c,	// (0x00061288) list_single_loc_request_popup_menu_pane_g1

0x2528,	// (0x00061294) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2528,	// (0x00061294) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0006e084) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0006e084) list_single_loc_request_popup_menu_pane_g

0x2534,	// (0x000612a0) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2534,	// (0x000612a0) list_single_loc_request_popup_menu_pane_t1

0xea05,	// (0x0006d771) bg_popup_window_pane_cp03_ParamLimits

0xea05,	// (0x0006d771) bg_popup_window_pane_cp03

0x254a,	// (0x000612b6) heading_loc_req_pane_ParamLimits

0x254a,	// (0x000612b6) heading_loc_req_pane

0x2556,	// (0x000612c2) popup_dyc_status_message_window_g1_ParamLimits

0x2556,	// (0x000612c2) popup_dyc_status_message_window_g1

0x256a,	// (0x000612d6) popup_dyc_status_message_window_t1_ParamLimits

0x256a,	// (0x000612d6) popup_dyc_status_message_window_t1

0x257f,	// (0x000612eb) popup_dyc_status_message_window_t2_ParamLimits

0x257f,	// (0x000612eb) popup_dyc_status_message_window_t2

0x2594,	// (0x00061300) popup_dyc_status_message_window_t3_ParamLimits

0x2594,	// (0x00061300) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0006e089) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0006e089) popup_dyc_status_message_window_t

0xe7aa,	// (0x0006d516) bg_heading_pane_cp01

0x25b0,	// (0x0006131c) heading_loc_req_pane_g1

0x25b8,	// (0x00061324) heading_loc_req_pane_g2

0x25c0,	// (0x0006132c) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0006e090) heading_loc_req_pane_g

0x25c8,	// (0x00061334) heading_loc_req_pane_t1

0x26c1,	// (0x0006142d) bg_popup_sub_pane_cp01_ParamLimits

0x26c1,	// (0x0006142d) bg_popup_sub_pane_cp01

0x26cf,	// (0x0006143b) popup_cale_events_window_g1_ParamLimits

0x26cf,	// (0x0006143b) popup_cale_events_window_g1

0x26ef,	// (0x0006145b) popup_cale_events_window_g2_ParamLimits

0x26ef,	// (0x0006145b) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0006e0c4) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0006e0c4) popup_cale_events_window_g

0x270f,	// (0x0006147b) popup_cale_events_window_t1_ParamLimits

0x270f,	// (0x0006147b) popup_cale_events_window_t1

0x2721,	// (0x0006148d) popup_cale_events_window_t2_ParamLimits

0x2721,	// (0x0006148d) popup_cale_events_window_t2

0x275f,	// (0x000614cb) popup_cale_events_window_t3_ParamLimits

0x275f,	// (0x000614cb) popup_cale_events_window_t3

0x2799,	// (0x00061505) popup_cale_events_window_t4_ParamLimits

0x2799,	// (0x00061505) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0006e0c9) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0006e0c9) popup_cale_events_window_t

0x27cf,	// (0x0006153b) call_type_pane

0x27df,	// (0x0006154b) popup_call_status_window_g1

0x27f3,	// (0x0006155f) popup_call_status_window_g2

0x2807,	// (0x00061573) popup_call_status_window_g3

0x0002,

0xf366,	// (0x0006e0d2) popup_call_status_window_g

0x2817,	// (0x00061583) call_type_pane_g1

0x2820,	// (0x0006158c) call_type_pane_g2

0x0001,

0xf36d,	// (0x0006e0d9) call_type_pane_g

0xe7aa,	// (0x0006d516) bg_popup_sub_pane_cp02

0x2829,	// (0x00061595) listscroll_popup_wml_pane

0x2831,	// (0x0006159d) list_wml_pane

0x283b,	// (0x000615a7) scroll_pane_cp013

0x2846,	// (0x000615b2) list_single_graphic_popup_wml_pane_ParamLimits

0x2846,	// (0x000615b2) list_single_graphic_popup_wml_pane

0xeb2d,	// (0x0006d899) list_single_graphic_popup_wml_pane_g1

0x285a,	// (0x000615c6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0006e0de) list_single_graphic_popup_wml_pane_g

0x2862,	// (0x000615ce) list_single_graphic_popup_wml_pane_t1

0x2878,	// (0x000615e4) aid_call_pane

0xe9fd,	// (0x0006d769) popup_clock_analogue_window_g1

0xe9fd,	// (0x0006d769) popup_clock_analogue_window_g2

0x9d45,	// (0x00068ab1) popup_clock_analogue_window_g3

0x9d45,	// (0x00068ab1) popup_clock_analogue_window_g4

0xeb2d,	// (0x0006d899) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x0006e0e3) popup_clock_analogue_window_g

0x9d4d,	// (0x00068ab9) popup_clock_analogue_window_t1

0x9d5b,	// (0x00068ac7) clock_digital_number_pane_ParamLimits

0x9d5b,	// (0x00068ac7) clock_digital_number_pane

0x9d67,	// (0x00068ad3) clock_digital_number_pane_cp02_ParamLimits

0x9d67,	// (0x00068ad3) clock_digital_number_pane_cp02

0x9d73,	// (0x00068adf) clock_digital_number_pane_cp03_ParamLimits

0x9d73,	// (0x00068adf) clock_digital_number_pane_cp03

0x9d7f,	// (0x00068aeb) clock_digital_number_pane_cp04_ParamLimits

0x9d7f,	// (0x00068aeb) clock_digital_number_pane_cp04

0x9d8b,	// (0x00068af7) clock_digital_separator_pane_ParamLimits

0x9d8b,	// (0x00068af7) clock_digital_separator_pane

0x9d97,	// (0x00068b03) popup_clock_digital_window_t1

0xeb2d,	// (0x0006d899) clock_digital_number_pane_g1

0xeb2d,	// (0x0006d899) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0006e051) clock_digital_number_pane_g

0xeb2d,	// (0x0006d899) clock_digital_separator_pane_g1

0xeb2d,	// (0x0006d899) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0006e051) clock_digital_separator_pane_g

0xe7aa,	// (0x0006d516) bg_popup_window_pane_cp04

0x9db4,	// (0x00068b20) heading_pane_cp03

0x9dbc,	// (0x00068b28) listscroll_popup_gms_pane

0x9dc4,	// (0x00068b30) grid_large_graphic_popup_pane

0x9dce,	// (0x00068b3a) listscroll_popup_gms_pane_g1

0x9dd6,	// (0x00068b42) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0006e0ee) listscroll_popup_gms_pane_g

0xeef2,	// (0x0006dc5e) scroll_pane_cp014

0x2880,	// (0x000615ec) cell_large_graphic_popup_pane_ParamLimits

0x2880,	// (0x000615ec) cell_large_graphic_popup_pane

0x2898,	// (0x00061604) cell_large_graphic_popup_pane_g1_ParamLimits

0x2898,	// (0x00061604) cell_large_graphic_popup_pane_g1

0x9dde,	// (0x00068b4a) cell_large_graphic_popup_pane_g2_ParamLimits

0x9dde,	// (0x00068b4a) cell_large_graphic_popup_pane_g2

0x9dea,	// (0x00068b56) cell_large_graphic_popup_pane_g3_ParamLimits

0x9dea,	// (0x00068b56) cell_large_graphic_popup_pane_g3

0x9df7,	// (0x00068b63) cell_large_graphic_popup_pane_g4_ParamLimits

0x9df7,	// (0x00068b63) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x0006e0f3) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x0006e0f3) cell_large_graphic_popup_pane_g

0x9e07,	// (0x00068b73) grid_highlight_pane_cp010

0xeb2d,	// (0x0006d899) bg_popup_call_pane_g1

0x9e11,	// (0x00068b7d) list_single_graphic_popup_conf_pane_ParamLimits

0x9e11,	// (0x00068b7d) list_single_graphic_popup_conf_pane

0x9e23,	// (0x00068b8f) list_highlight_pane_cp01

0x9e2c,	// (0x00068b98) list_single_graphic_popup_conf_pane_g1

0x9e34,	// (0x00068ba0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0006e0fc) list_single_graphic_popup_conf_pane_g

0x9e3c,	// (0x00068ba8) list_single_graphic_popup_conf_pane_t1

0x9e4a,	// (0x00068bb6) linegrid_cams_pane_g1

0x28a4,	// (0x00061610) linegrid_cams_pane_g2

0xec6b,	// (0x0006d9d7) linegrid_cams_pane_g3

0x9e53,	// (0x00068bbf) linegrid_cams_pane_g4

0x28ad,	// (0x00061619) linegrid_cams_pane_g5

0x28b6,	// (0x00061622) linegrid_cams_pane_g6

0xec74,	// (0x0006d9e0) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0006e101) linegrid_cams_pane_g

0x9e5c,	// (0x00068bc8) popup_clock_analogue_window

0x9e5c,	// (0x00068bc8) popup_clock_digital_window

0xe7aa,	// (0x0006d516) popup_phob_thumbnail_window

0xeb2d,	// (0x0006d899) call_video_uplink_pane_g1

0x9e65,	// (0x00068bd1) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0006e110) call_video_uplink_pane_g

0x9e6d,	// (0x00068bd9) video_uplink_pane

0x9e75,	// (0x00068be1) mce_image_pane_g1

0x28c1,	// (0x0006162d) mce_image_pane_g2

0x28cb,	// (0x00061637) mce_image_pane_g3

0x28d5,	// (0x00061641) mce_image_pane_g4

0x28dd,	// (0x00061649) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0006e115) mce_image_pane_g

0x9e7f,	// (0x00068beb) control_top_pane_stacon_cp01_ParamLimits

0x9e7f,	// (0x00068beb) control_top_pane_stacon_cp01

0x9e93,	// (0x00068bff) uni_indicator_pane_stacon_cp01_ParamLimits

0x9e93,	// (0x00068bff) uni_indicator_pane_stacon_cp01

0x9ea4,	// (0x00068c10) bg_popup_sub_pane_cp03

0x28e5,	// (0x00061651) chi_dic_find_pane

0x28ed,	// (0x00061659) listscroll_chi_dic_pane

0x28f6,	// (0x00061662) main_pane_chidic_g1

0x2909,	// (0x00061675) chi_dic_find_pane_t1

0x9eae,	// (0x00068c1a) find_chidic_pane

0x9eb7,	// (0x00068c23) chi_dic_list_pane_ParamLimits

0x9eb7,	// (0x00068c23) chi_dic_list_pane

0x9ec8,	// (0x00068c34) scroll_pane_cp020

0x2917,	// (0x00061683) find_chidic_pane_t1

0xe7aa,	// (0x0006d516) input_focus_pane_cp06

0x2926,	// (0x00061692) list_chi_dic_pane_ParamLimits

0x2926,	// (0x00061692) list_chi_dic_pane

0x2938,	// (0x000616a4) list_chi_dic_pane_t1_ParamLimits

0x2938,	// (0x000616a4) list_chi_dic_pane_t1

0xe7aa,	// (0x0006d516) list_highlight_pane_cp020

0x9ed0,	// (0x00068c3c) bg_cale_heading_pane_g1

0x294b,	// (0x000616b7) bg_cale_heading_pane_g2

0x2953,	// (0x000616bf) bg_cale_heading_pane_g3

0x295b,	// (0x000616c7) bg_cale_heading_pane_g4

0x2963,	// (0x000616cf) bg_cale_heading_pane_g5

0x296b,	// (0x000616d7) bg_cale_heading_pane_g6

0x2973,	// (0x000616df) bg_cale_heading_pane_g7

0x297b,	// (0x000616e7) bg_cale_heading_pane_g8

0x2983,	// (0x000616ef) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0006e120) bg_cale_heading_pane_g

0x9ed0,	// (0x00068c3c) bg_cale_side_pane_g1

0x298b,	// (0x000616f7) bg_cale_side_pane_g2

0x2995,	// (0x00061701) bg_cale_side_pane_g3

0x299f,	// (0x0006170b) bg_cale_side_pane_g4

0x29a9,	// (0x00061715) bg_cale_side_pane_g5

0x29b3,	// (0x0006171f) bg_cale_side_pane_g6

0x29bd,	// (0x00061729) bg_cale_side_pane_g7

0x29c7,	// (0x00061733) bg_cale_side_pane_g8

0x29cf,	// (0x0006173b) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0006e133) bg_cale_side_pane_g

0x29d7,	// (0x00061743) popup_call_status_window_ParamLimits

0x29d7,	// (0x00061743) popup_call_status_window

0x9ed8,	// (0x00068c44) stacon_top_pane

0x9ee0,	// (0x00068c4c) status_pane_ParamLimits

0x9ee0,	// (0x00068c4c) status_pane

0x9ef5,	// (0x00068c61) status_small_pane

0x9efd,	// (0x00068c69) control_pane

0xe7aa,	// (0x0006d516) stacon_bottom_pane

0x9f05,	// (0x00068c71) list_single_mce_smart_pane_t1_ParamLimits

0x9f05,	// (0x00068c71) list_single_mce_smart_pane_t1

0x9f18,	// (0x00068c84) list_single_mce_smart_pane_t2_ParamLimits

0x9f18,	// (0x00068c84) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0006e146) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0006e146) list_single_mce_smart_pane_t

0x2a24,	// (0x00061790) compass_pane

0x2a2f,	// (0x0006179b) main_location2_pane_t1

0x2a45,	// (0x000617b1) main_location2_pane_t2

0x2a5b,	// (0x000617c7) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0006e14b) main_location2_pane_t

0x9f37,	// (0x00068ca3) compass_pane_g1_ParamLimits

0x9f37,	// (0x00068ca3) compass_pane_g1

0x2aa9,	// (0x00061815) compass_pane_t1

0x2ab8,	// (0x00061824) compass_pane_t2

0x0005,

0xf3e8,	// (0x0006e154) compass_pane_t

0x2b03,	// (0x0006186f) text_secondary_cp61

0x9f4b,	// (0x00068cb7) navi_pane_cams_g5

0x9f6e,	// (0x00068cda) navi_pane_im_t1

0x9f7c,	// (0x00068ce8) navi_pane_mp_g1_ParamLimits

0x9f7c,	// (0x00068ce8) navi_pane_mp_g1

0x9f90,	// (0x00068cfc) navi_pane_mp_g2_ParamLimits

0x9f90,	// (0x00068cfc) navi_pane_mp_g2

0x9f9c,	// (0x00068d08) navi_pane_mp_g3_ParamLimits

0x9f9c,	// (0x00068d08) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0006e168) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0006e168) navi_pane_mp_g

0x9fa8,	// (0x00068d14) navi_pane_mp_t1

0x9fb6,	// (0x00068d22) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0006e16f) navi_pane_mp_t

0x9ff2,	// (0x00068d5e) navi_pane_vt_g1

0x9fa8,	// (0x00068d14) navi_pane_vt_t1

0x9ffa,	// (0x00068d66) navi_slider_pane

0xa002,	// (0x00068d6e) zooming_pane

0xa00a,	// (0x00068d76) navi_slider_pane_g1

0xa013,	// (0x00068d7f) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0006e176) navi_slider_pane_g

0xa040,	// (0x00068dac) aid_levels_zoom

0xa048,	// (0x00068db4) zooming_pane_g1

0xa050,	// (0x00068dbc) zooming_pane_g2

0xa050,	// (0x00068dbc) zooming_pane_g3

0x0002,

0xf419,	// (0x0006e185) zooming_pane_g

0xa058,	// (0x00068dc4) level_10_zoom

0xa061,	// (0x00068dcd) level_11_zoom

0xa06a,	// (0x00068dd6) level_1_zoom

0xa073,	// (0x00068ddf) level_2_zoom

0xa07c,	// (0x00068de8) level_3_zoom

0xa085,	// (0x00068df1) level_4_zoom

0xa08e,	// (0x00068dfa) level_5_zoom

0xa097,	// (0x00068e03) level_6_zoom

0xa0a0,	// (0x00068e0c) level_7_zoom

0xa0a9,	// (0x00068e15) level_8_zoom

0xa0b2,	// (0x00068e1e) level_9_zoom

0xa0c3,	// (0x00068e2f) popup_phob_thumbnail_window_g1

0xa0cb,	// (0x00068e37) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0006e18c) popup_phob_thumbnail_window_g

0xb416,	// (0x0006a182) level_1_location

0xb41e,	// (0x0006a18a) level_2_location

0xb426,	// (0x0006a192) level_3_location

0xb42e,	// (0x0006a19a) level_4_location

0xa002,	// (0x00068d6e) level_5_location

0x2c44,	// (0x000619b0) mce_icon_pane_g1

0x2c4c,	// (0x000619b8) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0006e191) mce_icon_pane_g

0x2c54,	// (0x000619c0) main_mup_pane_g1_ParamLimits

0x2c54,	// (0x000619c0) main_mup_pane_g1

0x2c6a,	// (0x000619d6) main_mup_pane_g2_ParamLimits

0x2c6a,	// (0x000619d6) main_mup_pane_g2

0x2c82,	// (0x000619ee) main_mup_pane_g3_ParamLimits

0x2c82,	// (0x000619ee) main_mup_pane_g3

0x2c9a,	// (0x00061a06) main_mup_pane_g4_ParamLimits

0x2c9a,	// (0x00061a06) main_mup_pane_g4

0x2cac,	// (0x00061a18) main_mup_pane_g5_ParamLimits

0x2cac,	// (0x00061a18) main_mup_pane_g5

0x2cc8,	// (0x00061a34) main_mup_pane_g6_ParamLimits

0x2cc8,	// (0x00061a34) main_mup_pane_g6

0x2ce2,	// (0x00061a4e) main_mup_pane_g7_ParamLimits

0x2ce2,	// (0x00061a4e) main_mup_pane_g7

0x2d00,	// (0x00061a6c) main_mup_pane_g8_ParamLimits

0x2d00,	// (0x00061a6c) main_mup_pane_g8

0x2d1e,	// (0x00061a8a) main_mup_pane_g9_ParamLimits

0x2d1e,	// (0x00061a8a) main_mup_pane_g9

0x2d3a,	// (0x00061aa6) main_mup_pane_g10_ParamLimits

0x2d3a,	// (0x00061aa6) main_mup_pane_g10

0x2d58,	// (0x00061ac4) main_mup_pane_g11_ParamLimits

0x2d58,	// (0x00061ac4) main_mup_pane_g11

0x2d72,	// (0x00061ade) main_mup_pane_g12_ParamLimits

0x2d72,	// (0x00061ade) main_mup_pane_g12

0x2d88,	// (0x00061af4) main_mup_pane_g13_ParamLimits

0x2d88,	// (0x00061af4) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0006e196) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0006e196) main_mup_pane_g

0x2d9c,	// (0x00061b08) main_mup_pane_t1_ParamLimits

0x2d9c,	// (0x00061b08) main_mup_pane_t1

0x2db8,	// (0x00061b24) main_mup_pane_t2_ParamLimits

0x2db8,	// (0x00061b24) main_mup_pane_t2

0x2dd0,	// (0x00061b3c) main_mup_pane_t3_ParamLimits

0x2dd0,	// (0x00061b3c) main_mup_pane_t3

0x2de8,	// (0x00061b54) main_mup_pane_t4_ParamLimits

0x2de8,	// (0x00061b54) main_mup_pane_t4

0x2e06,	// (0x00061b72) main_mup_pane_t5_ParamLimits

0x2e06,	// (0x00061b72) main_mup_pane_t5

0x2e1b,	// (0x00061b87) main_mup_pane_t6_ParamLimits

0x2e1b,	// (0x00061b87) main_mup_pane_t6

0x0005,

0xf445,	// (0x0006e1b1) main_mup_pane_t_ParamLimits

0xf445,	// (0x0006e1b1) main_mup_pane_t

0x2e2d,	// (0x00061b99) mup_progress_pane_ParamLimits

0x2e2d,	// (0x00061b99) mup_progress_pane

0x2e39,	// (0x00061ba5) mup_visualizer_pane_ParamLimits

0x2e39,	// (0x00061ba5) mup_visualizer_pane

0x2e6b,	// (0x00061bd7) mup_volume_pane_ParamLimits

0x2e6b,	// (0x00061bd7) mup_volume_pane

0xa0d3,	// (0x00068e3f) mup_visualizer_pane_g1_ParamLimits

0xa0d3,	// (0x00068e3f) mup_visualizer_pane_g1

0xa0d3,	// (0x00068e3f) mup_visualizer_pane_g2_ParamLimits

0xa0d3,	// (0x00068e3f) mup_visualizer_pane_g2

0x9f37,	// (0x00068ca3) mup_visualizer_pane_g3_ParamLimits

0x9f37,	// (0x00068ca3) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0006e1be) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0006e1be) mup_visualizer_pane_g

0xeb2d,	// (0x0006d899) mup_volume_pane_g1

0xa0e9,	// (0x00068e55) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0006e1c5) mup_volume_pane_g

0xeb2d,	// (0x0006d899) mup_progress_pane_g1

0xa0f2,	// (0x00068e5e) mup_progress_pane_g2

0xa0fb,	// (0x00068e67) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0006e1ca) mup_progress_pane_g

0xe7aa,	// (0x0006d516) bg_popup_window_pane_cp05

0xa104,	// (0x00068e70) heading_pane_cp02_ParamLimits

0xa104,	// (0x00068e70) heading_pane_cp02

0xa120,	// (0x00068e8c) list_popup_blid_pane

0xa128,	// (0x00068e94) list_blid_sat_info_pane_ParamLimits

0xa128,	// (0x00068e94) list_blid_sat_info_pane

0xa13b,	// (0x00068ea7) list_blid_sat_info_pane_g1

0xa143,	// (0x00068eaf) list_blid_sat_info_pane_t1

0x2f95,	// (0x00061d01) mup_equalizer_pane_ParamLimits

0x2f95,	// (0x00061d01) mup_equalizer_pane

0x2fb6,	// (0x00061d22) mup_equalizer_pane_cp1_ParamLimits

0x2fb6,	// (0x00061d22) mup_equalizer_pane_cp1

0x2fd7,	// (0x00061d43) mup_equalizer_pane_cp2_ParamLimits

0x2fd7,	// (0x00061d43) mup_equalizer_pane_cp2

0x2ffc,	// (0x00061d68) mup_equalizer_pane_cp3_ParamLimits

0x2ffc,	// (0x00061d68) mup_equalizer_pane_cp3

0x3025,	// (0x00061d91) mup_equalizer_pane_cp4_ParamLimits

0x3025,	// (0x00061d91) mup_equalizer_pane_cp4

0x304e,	// (0x00061dba) mup_equalizer_pane_cp5

0x3066,	// (0x00061dd2) mup_equalizer_pane_cp6

0x307e,	// (0x00061dea) mup_equalizer_pane_cp7

0xb330,	// (0x0006a09c) bg_popup_call_poc_act_pane_g9

0xb338,	// (0x0006a0a4) bg_popup_call_poc_act_pane_g10

0xb340,	// (0x0006a0ac) bg_popup_call_poc_act_pane_g11

0x000a,

0xea05,	// (0x0006d771) mup_scale_pane

0xeb2d,	// (0x0006d899) mup_scale_pane_g1

0xa151,	// (0x00068ebd) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0006e1e6) mup_scale_pane_g

0xa175,	// (0x00068ee1) msg_data_pane

0xa17d,	// (0x00068ee9) scroll_pane_cp017

0x30a8,	// (0x00061e14) bg_list_pane_cp04_ParamLimits

0x30a8,	// (0x00061e14) bg_list_pane_cp04

0xa185,	// (0x00068ef1) msg_data_pane_g1

0x30ce,	// (0x00061e3a) msg_data_pane_g2

0x30d8,	// (0x00061e44) msg_data_pane_g3

0x30e2,	// (0x00061e4e) msg_data_pane_g4

0x30ea,	// (0x00061e56) msg_data_pane_g5

0x30f2,	// (0x00061e5e) msg_data_pane_g6

0x30fa,	// (0x00061e66) msg_data_pane_g7

0x0006,

0xf489,	// (0x0006e1f5) msg_data_pane_g

0x3102,	// (0x00061e6e) msg_text_pane_ParamLimits

0x3102,	// (0x00061e6e) msg_text_pane

0x3133,	// (0x00061e9f) qrid_highlight_pane_cp011_ParamLimits

0x3133,	// (0x00061e9f) qrid_highlight_pane_cp011

0xe7aa,	// (0x0006d516) msg_body_pane

0xe7aa,	// (0x0006d516) msg_header_pane

0xa196,	// (0x00068f02) input_focus_pane_cp07

0x3157,	// (0x00061ec3) msg_header_pane_t1_ParamLimits

0x3157,	// (0x00061ec3) msg_header_pane_t1

0x316b,	// (0x00061ed7) msg_header_pane_t2_ParamLimits

0x316b,	// (0x00061ed7) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0006e209) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0006e209) msg_header_pane_t

0xa1ab,	// (0x00068f17) msg_body_pane_g1

0x317d,	// (0x00061ee9) msg_body_pane_t1_ParamLimits

0x317d,	// (0x00061ee9) msg_body_pane_t1

0x31ae,	// (0x00061f1a) msg_body_pane_t2_ParamLimits

0x31ae,	// (0x00061f1a) msg_body_pane_t2

0x31c0,	// (0x00061f2c) msg_body_pane_t3_ParamLimits

0x31c0,	// (0x00061f2c) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0006e20e) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0006e20e) msg_body_pane_t

0x320c,	// (0x00061f78) main_viewer_pane_g1_ParamLimits

0x320c,	// (0x00061f78) main_viewer_pane_g1

0x321a,	// (0x00061f86) main_viewer_pane_g2_ParamLimits

0x321a,	// (0x00061f86) main_viewer_pane_g2

0x3228,	// (0x00061f94) main_viewer_pane_g3_ParamLimits

0x3228,	// (0x00061f94) main_viewer_pane_g3

0x3237,	// (0x00061fa3) main_viewer_pane_g4_ParamLimits

0x3237,	// (0x00061fa3) main_viewer_pane_g4

0xa1cb,	// (0x00068f37) main_viewer_pane_g5_ParamLimits

0xa1cb,	// (0x00068f37) main_viewer_pane_g5

0xa1cb,	// (0x00068f37) main_viewer_pane_g7_ParamLimits

0xa1cb,	// (0x00068f37) main_viewer_pane_g7

0xa1dd,	// (0x00068f49) main_viewer_pane_g8_ParamLimits

0xa1dd,	// (0x00068f49) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0006e21e) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0006e21e) main_viewer_pane_g

0xa1f5,	// (0x00068f61) viewer_content_pane_ParamLimits

0xa1f5,	// (0x00068f61) viewer_content_pane

0x3275,	// (0x00061fe1) main_postcard_pane_g1_ParamLimits

0x3275,	// (0x00061fe1) main_postcard_pane_g1

0x328b,	// (0x00061ff7) main_postcard_pane_g2_ParamLimits

0x328b,	// (0x00061ff7) main_postcard_pane_g2

0x32a1,	// (0x0006200d) main_postcard_pane_g3_ParamLimits

0x32a1,	// (0x0006200d) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0006e22f) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0006e22f) main_postcard_pane_g

0x32b8,	// (0x00062024) main_postcard_pane_g4

0xb560,	// (0x0006a2cc) smil_status_volume_pane_g2

0x32fb,	// (0x00062067) postcard_pane_ParamLimits

0x32fb,	// (0x00062067) postcard_pane

0xa203,	// (0x00068f6f) postcard_pane_g1_ParamLimits

0xa203,	// (0x00068f6f) postcard_pane_g1

0x334b,	// (0x000620b7) postcard_pane_g2_ParamLimits

0x334b,	// (0x000620b7) postcard_pane_g2

0x3357,	// (0x000620c3) postcard_pane_g3_ParamLimits

0x3357,	// (0x000620c3) postcard_pane_g3

0xa211,	// (0x00068f7d) postcard_pane_g4_ParamLimits

0xa211,	// (0x00068f7d) postcard_pane_g4

0x3363,	// (0x000620cf) postcard_pane_g5_ParamLimits

0x3363,	// (0x000620cf) postcard_pane_g5

0x3375,	// (0x000620e1) postcard_pane_g6_ParamLimits

0x3375,	// (0x000620e1) postcard_pane_g6

0xa203,	// (0x00068f6f) postcard_pane_g7_ParamLimits

0xa203,	// (0x00068f6f) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0006e23c) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0006e23c) postcard_pane_g

0x338d,	// (0x000620f9) main_mp2_pane_g1_ParamLimits

0x338d,	// (0x000620f9) main_mp2_pane_g1

0x339b,	// (0x00062107) main_mp2_pane_g2_ParamLimits

0x339b,	// (0x00062107) main_mp2_pane_g2

0x33a7,	// (0x00062113) main_mp2_pane_g3_ParamLimits

0x33a7,	// (0x00062113) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0006e24b) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0006e24b) main_mp2_pane_g

0x33b3,	// (0x0006211f) main_mp2_pane_t1_ParamLimits

0x33b3,	// (0x0006211f) main_mp2_pane_t1

0x33ca,	// (0x00062136) main_mp2_pane_t2_ParamLimits

0x33ca,	// (0x00062136) main_mp2_pane_t2

0x33de,	// (0x0006214a) main_mp2_pane_t3_ParamLimits

0x33de,	// (0x0006214a) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0006e252) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0006e252) main_mp2_pane_t

0xa21f,	// (0x00068f8b) pec_content_pane_ParamLimits

0xa21f,	// (0x00068f8b) pec_content_pane

0xeef2,	// (0x0006dc5e) scroll_pane_cp015

0xa231,	// (0x00068f9d) pec_attribute_pane_ParamLimits

0xa231,	// (0x00068f9d) pec_attribute_pane

0x33f0,	// (0x0006215c) pec_content_pane_g1_ParamLimits

0x33f0,	// (0x0006215c) pec_content_pane_g1

0xa241,	// (0x00068fad) pec_content_pane_t1_ParamLimits

0xa241,	// (0x00068fad) pec_content_pane_t1

0xa253,	// (0x00068fbf) pec_content_pane_t2_ParamLimits

0xa253,	// (0x00068fbf) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0006e259) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0006e259) pec_content_pane_t

0x33fc,	// (0x00062168) list_single_graphic_pane_cp01_ParamLimits

0x33fc,	// (0x00062168) list_single_graphic_pane_cp01

0xea05,	// (0x0006d771) bg_popup_sub_pane_cp04

0xa265,	// (0x00068fd1) popup_mup_playback_window_g1

0xa271,	// (0x00068fdd) popup_mup_playback_window_t1

0xa286,	// (0x00068ff2) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0006e25e) popup_mup_playback_window_t

0xa2bd,	// (0x00069029) main_image_pane_g1_ParamLimits

0xa2bd,	// (0x00069029) main_image_pane_g1

0xa300,	// (0x0006906c) scroll_pane_cp018_ParamLimits

0xa300,	// (0x0006906c) scroll_pane_cp018

0xa318,	// (0x00069084) scroll_pane_cp016_ParamLimits

0xa318,	// (0x00069084) scroll_pane_cp016

0x34ce,	// (0x0006223a) smil2_image_pane_ParamLimits

0x34ce,	// (0x0006223a) smil2_image_pane

0x3504,	// (0x00062270) smil2_root_pane_ParamLimits

0x3504,	// (0x00062270) smil2_root_pane

0x353c,	// (0x000622a8) smil2_text_pane_ParamLimits

0x353c,	// (0x000622a8) smil2_text_pane

0xe7aa,	// (0x0006d516) bg_list_pane_cp06

0xa354,	// (0x000690c0) grid_radio_pane

0xe7aa,	// (0x0006d516) bg_popup_window_pane_cp06

0xa35e,	// (0x000690ca) main_fmradio_pane_t1

0x9db4,	// (0x00068b20) heading_pane_cp04

0xa36c,	// (0x000690d8) main_fmradio_pane_t2

0xb348,	// (0x0006a0b4) popup_cale_lunar_info_window_g1

0xa37a,	// (0x000690e6) main_fmradio_pane_t3

0xb350,	// (0x0006a0bc) popup_cale_lunar_info_window_g2

0xa38a,	// (0x000690f6) main_fmradio_pane_t4

0x0001,

0xa398,	// (0x00069104) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x0006e339) popup_cale_lunar_info_window_g

0xf507,	// (0x0006e273) main_fmradio_pane_t

0xa3a6,	// (0x00069112) wait_bar_pane_cp03

0xa3ae,	// (0x0006911a) cell_fmradio_pane_ParamLimits

0xa3ae,	// (0x0006911a) cell_fmradio_pane

0xa203,	// (0x00068f6f) cell_fmradio_pane_g1_ParamLimits

0xa203,	// (0x00068f6f) cell_fmradio_pane_g1

0xe7aa,	// (0x0006d516) grid_highlight_pane_cp011

0xa3c3,	// (0x0006912f) poc_content_pane_ParamLimits

0xa3c3,	// (0x0006912f) poc_content_pane

0xa3d5,	// (0x00069141) scroll_pane_cp019

0x35cc,	// (0x00062338) popup_call_poc_act_window_ParamLimits

0x35cc,	// (0x00062338) popup_call_poc_act_window

0x35f0,	// (0x0006235c) popup_call_poc_inact_window_ParamLimits

0x35f0,	// (0x0006235c) popup_call_poc_inact_window

0xf5a4,	// (0x0006e310) bg_popup_call_poc_act_pane_g

0xb2c0,	// (0x0006a02c) bg_popup_call_poc_inact_pane_g1

0xb2c8,	// (0x0006a034) bg_popup_call_poc_inact_pane_g2

0xa3dd,	// (0x00069149) popup_call_poc_act_window_g2

0xb2d0,	// (0x0006a03c) bg_popup_call_poc_inact_pane_g3

0xb2d8,	// (0x0006a044) bg_popup_call_poc_inact_pane_g4

0xb2e0,	// (0x0006a04c) bg_popup_call_poc_inact_pane_g5

0xa3e5,	// (0x00069151) popup_call_poc_act_window_t1_ParamLimits

0xa3e5,	// (0x00069151) popup_call_poc_act_window_t1

0xa40d,	// (0x00069179) popup_call_poc_act_window_t2_ParamLimits

0xa40d,	// (0x00069179) popup_call_poc_act_window_t2

0xa435,	// (0x000691a1) popup_call_poc_act_window_t3_ParamLimits

0xa435,	// (0x000691a1) popup_call_poc_act_window_t3

0xa45d,	// (0x000691c9) popup_call_poc_act_window_t4_ParamLimits

0xa45d,	// (0x000691c9) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0006e27e) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0006e27e) popup_call_poc_act_window_t

0xb2e8,	// (0x0006a054) bg_popup_call_poc_inact_pane_g6

0xb2f0,	// (0x0006a05c) bg_popup_call_poc_inact_pane_g7

0xb2f8,	// (0x0006a064) bg_popup_call_poc_inact_pane_g8

0xa46f,	// (0x000691db) popup_call_poc_inact_window_g2

0xb300,	// (0x0006a06c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0006e2fd) bg_popup_call_poc_inact_pane_g

0xa477,	// (0x000691e3) popup_call_poc_inact_window_t1_ParamLimits

0xa477,	// (0x000691e3) popup_call_poc_inact_window_t1

0xa48c,	// (0x000691f8) popup_call_poc_inact_window_t2_ParamLimits

0xa48c,	// (0x000691f8) popup_call_poc_inact_window_t2

0xa4a1,	// (0x0006920d) popup_call_poc_inact_window_t3_ParamLimits

0xa4a1,	// (0x0006920d) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0006e287) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0006e287) popup_call_poc_inact_window_t

0xb4c0,	// (0x0006a22c) context_pane_ParamLimits

0x3e9b,	// (0x00062c07) signal_pane_ParamLimits

0xa002,	// (0x00068d6e) main_call2_pane

0xb4ae,	// (0x0006a21a) popup_phob_thumbnail2_window_ParamLimits

0xb4ae,	// (0x0006a21a) popup_phob_thumbnail2_window

0xa1b3,	// (0x00068f1f) aid_hotspot_pointer_arrow_pane

0xa1bb,	// (0x00068f27) aid_hotspot_pointer_hand_pane

0x395b,	// (0x000626c7) phob_pre_status_pane_g5

0x12d4,	// (0x00060040) cams_zoom_pane_ParamLimits

0x12e3,	// (0x0006004f) image_vga_pane_ParamLimits

0x12fd,	// (0x00060069) main_camera_pane_g1_ParamLimits

0x130f,	// (0x0006007b) main_camera_pane_g2_ParamLimits

0x131f,	// (0x0006008b) main_camera_pane_g3_ParamLimits

0x1333,	// (0x0006009f) main_camera_pane_g4_ParamLimits

0x1347,	// (0x000600b3) main_camera_pane_g5_ParamLimits

0x135b,	// (0x000600c7) main_camera_pane_g6_ParamLimits

0x136f,	// (0x000600db) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0006df86) main_camera_pane_g_ParamLimits

0x1383,	// (0x000600ef) main_camera_pane_t1_ParamLimits

0x1399,	// (0x00060105) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0006df97) main_camera_pane_t_ParamLimits

0xea05,	// (0x0006d771) bg_popup_preview_window_pane_cp01_ParamLimits

0xea05,	// (0x0006d771) bg_popup_preview_window_pane_cp01

0xa4b6,	// (0x00069222) popup_phob_thumbnail2_window_g1_ParamLimits

0xa4b6,	// (0x00069222) popup_phob_thumbnail2_window_g1

0xe7aa,	// (0x0006d516) call2_cli_visual_pane

0x3624,	// (0x00062390) popup_call2_audio_conf_window_ParamLimits

0x3624,	// (0x00062390) popup_call2_audio_conf_window

0x364c,	// (0x000623b8) popup_call2_audio_first_window_ParamLimits

0x364c,	// (0x000623b8) popup_call2_audio_first_window

0x36e2,	// (0x0006244e) popup_call2_audio_in_window_ParamLimits

0x36e2,	// (0x0006244e) popup_call2_audio_in_window

0x372e,	// (0x0006249a) popup_call2_audio_out_window_ParamLimits

0x372e,	// (0x0006249a) popup_call2_audio_out_window

0x37a0,	// (0x0006250c) popup_call2_audio_second_window_ParamLimits

0x37a0,	// (0x0006250c) popup_call2_audio_second_window

0x3806,	// (0x00062572) popup_call2_audio_wait_window_ParamLimits

0x3806,	// (0x00062572) popup_call2_audio_wait_window

0xe7aa,	// (0x0006d516) bg_popup_call2_act_pane_cp03

0xe9e7,	// (0x0006d753) list_conf_pane_cp

0xa4c2,	// (0x0006922e) popup_call2_audio_conf_window_t1

0xa4d0,	// (0x0006923c) list_single_graphic_popup_conf2_pane_ParamLimits

0xa4d0,	// (0x0006923c) list_single_graphic_popup_conf2_pane

0x9e23,	// (0x00068b8f) list_highlight_pane_cp04

0xa4e3,	// (0x0006924f) list_single_graphic_popup_conf2_pane_g1

0x9e34,	// (0x00068ba0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0006e28e) list_single_graphic_popup_conf2_pane_g

0xa4ed,	// (0x00069259) list_single_graphic_popup_conf2_pane_t1

0xa4fb,	// (0x00069267) bg_popup_call2_act_pane_cp01_ParamLimits

0xa4fb,	// (0x00069267) bg_popup_call2_act_pane_cp01

0xa585,	// (0x000692f1) call_type_pane_cp05_ParamLimits

0xa585,	// (0x000692f1) call_type_pane_cp05

0xa5d9,	// (0x00069345) popup_call2_audio_second_window_g1_ParamLimits

0xa5d9,	// (0x00069345) popup_call2_audio_second_window_g1

0xa62d,	// (0x00069399) popup_call2_audio_second_window_g2_ParamLimits

0xa62d,	// (0x00069399) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0006e293) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0006e293) popup_call2_audio_second_window_g

0xa692,	// (0x000693fe) popup_call2_audio_second_window_t1_ParamLimits

0xa692,	// (0x000693fe) popup_call2_audio_second_window_t1

0xa74d,	// (0x000694b9) popup_call2_audio_second_window_t2_ParamLimits

0xa74d,	// (0x000694b9) popup_call2_audio_second_window_t2

0xa7a0,	// (0x0006950c) popup_call2_audio_second_window_t3_ParamLimits

0xa7a0,	// (0x0006950c) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0006e29a) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0006e29a) popup_call2_audio_second_window_t

0xe7aa,	// (0x0006d516) bg_popup_call2_in_pane_cp02

0xe7b4,	// (0x0006d520) call_type_pane_cp04

0xe7bc,	// (0x0006d528) popup_call2_audio_wait_window_g1

0xe7c4,	// (0x0006d530) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0006de73) popup_call2_audio_wait_window_g

0xe7cc,	// (0x0006d538) popup_call2_audio_wait_window_t3

0xa893,	// (0x000695ff) bg_popup_call2_act_pane_ParamLimits

0xa893,	// (0x000695ff) bg_popup_call2_act_pane

0xa953,	// (0x000696bf) call_type_pane_cp03_ParamLimits

0xa953,	// (0x000696bf) call_type_pane_cp03

0xa9b7,	// (0x00069723) popup_call2_audio_first_window_g1_ParamLimits

0xa9b7,	// (0x00069723) popup_call2_audio_first_window_g1

0xaa27,	// (0x00069793) popup_call2_audio_first_window_g2_ParamLimits

0xaa27,	// (0x00069793) popup_call2_audio_first_window_g2

0xa0d3,	// (0x00068e3f) popup_call2_audio_first_window_g3_ParamLimits

0xa0d3,	// (0x00068e3f) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0006e2a3) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0006e2a3) popup_call2_audio_first_window_g

0xab05,	// (0x00069871) popup_call2_audio_first_window_t1_ParamLimits

0xab05,	// (0x00069871) popup_call2_audio_first_window_t1

0xac08,	// (0x00069974) popup_call2_audio_first_window_t4_ParamLimits

0xac08,	// (0x00069974) popup_call2_audio_first_window_t4

0xaceb,	// (0x00069a57) popup_call2_audio_first_window_t5_ParamLimits

0xaceb,	// (0x00069a57) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0006e2ae) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0006e2ae) popup_call2_audio_first_window_t

0xe9fd,	// (0x0006d769) bg_popup_call2_act_pane_g1

0xb35a,	// (0x0006a0c6) popup_cale_lunar_info_window_t1

0xb368,	// (0x0006a0d4) popup_cale_lunar_info_window_t2

0xb376,	// (0x0006a0e2) popup_cale_lunar_info_window_t3

0xe7aa,	// (0x0006d516) bg_popup_call2_bubble_pane

0xadec,	// (0x00069b58) bg_popup_call2_in_pane_cp01_ParamLimits

0xadec,	// (0x00069b58) bg_popup_call2_in_pane_cp01

0xdecb,	// (0x0006cc37) call_type_pane_cp02

0xae34,	// (0x00069ba0) popup_call2_audio_out_window_g1_ParamLimits

0xae34,	// (0x00069ba0) popup_call2_audio_out_window_g1

0xae60,	// (0x00069bcc) popup_call2_audio_out_window_g2_ParamLimits

0xae60,	// (0x00069bcc) popup_call2_audio_out_window_g2

0xae88,	// (0x00069bf4) popup_call2_audio_out_window_g3_ParamLimits

0xae88,	// (0x00069bf4) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0006e2b7) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0006e2b7) popup_call2_audio_out_window_g

0xaec3,	// (0x00069c2f) popup_call2_audio_out_window_t1_ParamLimits

0xaec3,	// (0x00069c2f) popup_call2_audio_out_window_t1

0xaf22,	// (0x00069c8e) popup_call2_audio_out_window_t2_ParamLimits

0xaf22,	// (0x00069c8e) popup_call2_audio_out_window_t2

0xaf76,	// (0x00069ce2) popup_call2_audio_out_window_t3_ParamLimits

0xaf76,	// (0x00069ce2) popup_call2_audio_out_window_t3

0xaf8c,	// (0x00069cf8) popup_call2_audio_out_window_t4_ParamLimits

0xaf8c,	// (0x00069cf8) popup_call2_audio_out_window_t4

0xafa2,	// (0x00069d0e) popup_call2_audio_out_window_t5_ParamLimits

0xafa2,	// (0x00069d0e) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0006e2c0) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0006e2c0) popup_call2_audio_out_window_t

0xb006,	// (0x00069d72) bg_popup_call2_in_pane_ParamLimits

0xb006,	// (0x00069d72) bg_popup_call2_in_pane

0xb062,	// (0x00069dce) popup_call2_audio_in_window_g1_ParamLimits

0xb062,	// (0x00069dce) popup_call2_audio_in_window_g1

0xb09a,	// (0x00069e06) popup_call2_audio_in_window_g2_ParamLimits

0xb09a,	// (0x00069e06) popup_call2_audio_in_window_g2

0xb0d2,	// (0x00069e3e) popup_call2_audio_in_window_g3_ParamLimits

0xb0d2,	// (0x00069e3e) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0006e2cd) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0006e2cd) popup_call2_audio_in_window_g

0xb12a,	// (0x00069e96) popup_call2_audio_in_window_t1_ParamLimits

0xb12a,	// (0x00069e96) popup_call2_audio_in_window_t1

0xb1aa,	// (0x00069f16) popup_call2_audio_in_window_t2_ParamLimits

0xb1aa,	// (0x00069f16) popup_call2_audio_in_window_t2

0xb22a,	// (0x00069f96) popup_call2_audio_in_window_t3_ParamLimits

0xb22a,	// (0x00069f96) popup_call2_audio_in_window_t3

0xb244,	// (0x00069fb0) popup_call2_audio_in_window_t4_ParamLimits

0xb244,	// (0x00069fb0) popup_call2_audio_in_window_t4

0xb256,	// (0x00069fc2) popup_call2_audio_in_window_t5_ParamLimits

0xb256,	// (0x00069fc2) popup_call2_audio_in_window_t5

0xb26b,	// (0x00069fd7) popup_call2_audio_in_window_t6_ParamLimits

0xb26b,	// (0x00069fd7) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0006e2d6) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0006e2d6) popup_call2_audio_in_window_t

0xe9fd,	// (0x0006d769) bg_popup_call2_in_pane_g1

0xb384,	// (0x0006a0f0) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0006e33e) popup_cale_lunar_info_window_t

0xea05,	// (0x0006d771) bg_popup_call2_rect_pane_ParamLimits

0xea05,	// (0x0006d771) bg_popup_call2_rect_pane

0xe7aa,	// (0x0006d516) call2_cli_visual_graphic_pane

0xe7aa,	// (0x0006d516) call2_cli_visual_text_pane

0xb573,	// (0x0006a2df) smil_status_volume_pane_g3

0x0002,

0xeb2d,	// (0x0006d899) call2_cli_visual_graphic_pane_g1

0xeb2d,	// (0x0006d899) call2_cli_visual_graphic_pane_g2

0xeb2d,	// (0x0006d899) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x0006e2e3) call2_cli_visual_graphic_pane_g

0xb280,	// (0x00069fec) bg_popup_call2_rect_pane_g1

0xebcb,	// (0x0006d937) bg_popup_call2_rect_pane_g2

0xb288,	// (0x00069ff4) bg_popup_call2_rect_pane_g3

0xb290,	// (0x00069ffc) bg_popup_call2_rect_pane_g4

0xb298,	// (0x0006a004) bg_popup_call2_rect_pane_g5

0xb2a0,	// (0x0006a00c) bg_popup_call2_rect_pane_g6

0xb2a8,	// (0x0006a014) bg_popup_call2_rect_pane_g7

0xb2b0,	// (0x0006a01c) bg_popup_call2_rect_pane_g8

0xb2b8,	// (0x0006a024) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0006e2ea) bg_popup_call2_rect_pane_g

0xb2c0,	// (0x0006a02c) bg_popup_call2_bubble_pane_g1

0xb2c8,	// (0x0006a034) bg_popup_call2_bubble_pane_g2

0xb2d0,	// (0x0006a03c) bg_popup_call2_bubble_pane_g3

0xb2d8,	// (0x0006a044) bg_popup_call2_bubble_pane_g4

0xb2e0,	// (0x0006a04c) bg_popup_call2_bubble_pane_g5

0xb2e8,	// (0x0006a054) bg_popup_call2_bubble_pane_g6

0xb2f0,	// (0x0006a05c) bg_popup_call2_bubble_pane_g7

0xb2f8,	// (0x0006a064) bg_popup_call2_bubble_pane_g8

0xb300,	// (0x0006a06c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0006e2fd) bg_popup_call2_bubble_pane_g

0x0e7f,	// (0x0005fbeb) aid_cale_week_size_cell_pane

0x13b3,	// (0x0006011f) aid_cams_cif_uncrop_pane_ParamLimits

0x13b3,	// (0x0006011f) aid_cams_cif_uncrop_pane

0x156c,	// (0x000602d8) aid_cams_size_cell_ParamLimits

0x156c,	// (0x000602d8) aid_cams_size_cell

0x1580,	// (0x000602ec) grid_cams_pane_ParamLimits

0x159a,	// (0x00060306) linegrid_cams_pane_ParamLimits

0x16d1,	// (0x0006043d) call_video_pane_t1

0x16eb,	// (0x00060457) call_video_pane_t2

0x0001,

0xf27e,	// (0x0006dfea) call_video_pane_t

0x1b36,	// (0x000608a2) aid_cale_month_size_cell_pane_ParamLimits

0x1b36,	// (0x000608a2) aid_cale_month_size_cell_pane

0xf61b,	// (0x0006e387) smil_status_volume_pane_g

0xb580,	// (0x0006a2ec) volume_smil_pane_ParamLimits

0x9bf2,	// (0x0006895e) aid_popup2_width_pane

0x0dd9,	// (0x0005fb45) cell_qdial_pane_g4_ParamLimits

0x0dd9,	// (0x0005fb45) cell_qdial_pane_g4

0x2a85,	// (0x000617f1) aid_blid_cardinal_pane_ParamLimits

0x2a95,	// (0x00061801) aid_blid_destination_pane_ParamLimits

0x2a95,	// (0x00061801) aid_blid_destination_pane

0xea05,	// (0x0006d771) bg_popup_call_poc_act_pane_ParamLimits

0xea05,	// (0x0006d771) bg_popup_call_poc_act_pane

0xea05,	// (0x0006d771) bg_popup_call_poc_inact_pane_ParamLimits

0xea05,	// (0x0006d771) bg_popup_call_poc_inact_pane

0xb308,	// (0x0006a074) bg_popup_call_poc_act_pane_g1

0xb310,	// (0x0006a07c) bg_popup_call_poc_act_pane_g2

0xb318,	// (0x0006a084) bg_popup_call_poc_act_pane_g3

0xb2d8,	// (0x0006a044) bg_popup_call_poc_act_pane_g4

0xb2e0,	// (0x0006a04c) bg_popup_call_poc_act_pane_g5

0xb320,	// (0x0006a08c) bg_popup_call_poc_act_pane_g6

0xb2f0,	// (0x0006a05c) bg_popup_call_poc_act_pane_g7

0xb328,	// (0x0006a094) bg_popup_call_poc_act_pane_g8

0xe7aa,	// (0x0006d516) main_usb_pane

0xb485,	// (0x0006a1f1) popup_cale_lunar_info_window

0x19b6,	// (0x00060722) im_reading_pane_t1_ParamLimits

0xee4a,	// (0x0006dbb6) list_im_pane_ParamLimits

0xee5b,	// (0x0006dbc7) scroll_pane_cp07_ParamLimits

0xe7aa,	// (0x0006d516) grid_highlight_pane_cp012

0xea05,	// (0x0006d771) mup_scale_pane_ParamLimits

0xa203,	// (0x00068f6f) main_usb_pane_g1_ParamLimits

0xa203,	// (0x00068f6f) main_usb_pane_g1

0x3867,	// (0x000625d3) main_usb_pane_g2_ParamLimits

0x3867,	// (0x000625d3) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0006e327) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0006e327) main_usb_pane_g

0x387d,	// (0x000625e9) main_usb_pane_t1_ParamLimits

0x387d,	// (0x000625e9) main_usb_pane_t1

0x388f,	// (0x000625fb) main_usb_pane_t2_ParamLimits

0x388f,	// (0x000625fb) main_usb_pane_t2

0x38a1,	// (0x0006260d) main_usb_pane_t3_ParamLimits

0x38a1,	// (0x0006260d) main_usb_pane_t3

0x38b3,	// (0x0006261f) main_usb_pane_t4_ParamLimits

0x38b3,	// (0x0006261f) main_usb_pane_t4

0x38c8,	// (0x00062634) main_usb_pane_t5_ParamLimits

0x38c8,	// (0x00062634) main_usb_pane_t5

0x38dd,	// (0x00062649) main_usb_pane_t6_ParamLimits

0x38dd,	// (0x00062649) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0006e32c) main_usb_pane_t_ParamLimits

0x2a24,	// (0x00061790) aid_text_placing

0x2a2f,	// (0x0006179b) main_location2_pane_t1_ParamLimits

0x2a45,	// (0x000617b1) main_location2_pane_t2_ParamLimits

0x2a5b,	// (0x000617c7) main_location2_pane_t3_ParamLimits

0x2a71,	// (0x000617dd) main_location2_pane_t4_ParamLimits

0x2a71,	// (0x000617dd) main_location2_pane_t4

0xf3df,	// (0x0006e14b) main_location2_pane_t_ParamLimits

0xea41,	// (0x0006d7ad) find_pinb_pane_g2_ParamLimits

0xea41,	// (0x0006d7ad) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0006de99) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0006de99) find_pinb_pane_g

0xea4d,	// (0x0006d7b9) find_pinb_pane_t1_ParamLimits

0xea5f,	// (0x0006d7cb) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0006de9e) find_pinb_pane_t_ParamLimits

0xe7aa,	// (0x0006d516) main_call3_pane

0x1eaa,	// (0x00060c16) cale_month_day_heading_pane_t1_ParamLimits

0x1f08,	// (0x00060c74) cale_month_day_heading_pane_t2_ParamLimits

0x1f6d,	// (0x00060cd9) cale_month_day_heading_pane_t3_ParamLimits

0x1fd2,	// (0x00060d3e) cale_month_day_heading_pane_t4_ParamLimits

0x2037,	// (0x00060da3) cale_month_day_heading_pane_t5_ParamLimits

0x209c,	// (0x00060e08) cale_month_day_heading_pane_t6_ParamLimits

0x2101,	// (0x00060e6d) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0006e022) cale_month_day_heading_pane_t_ParamLimits

0xf0c5,	// (0x0006de31) smil_status_volume_pane

0x331f,	// (0x0006208b) postcard_address_pane_ParamLimits

0x331f,	// (0x0006208b) postcard_address_pane

0x3335,	// (0x000620a1) postcard_message_pane_ParamLimits

0x3335,	// (0x000620a1) postcard_message_pane

0x3840,	// (0x000625ac) call2_cli_visual_pane_t1_ParamLimits

0x3840,	// (0x000625ac) call2_cli_visual_pane_t1

0x40ac,	// (0x00062e18) postcard_message_pane_t1_ParamLimits

0x40ac,	// (0x00062e18) postcard_message_pane_t1

0xb595,	// (0x0006a301) postcard_address_pane_t1_ParamLimits

0xb595,	// (0x0006a301) postcard_address_pane_t1

0x4098,	// (0x00062e04) popup_call3_audio_in_window_ParamLimits

0x4098,	// (0x00062e04) popup_call3_audio_in_window

0x3f1d,	// (0x00062c89) bg_popup_call3_in_pane_ParamLimits

0x3f1d,	// (0x00062c89) bg_popup_call3_in_pane

0x3f99,	// (0x00062d05) popup_call3_audio_in_window_g1_ParamLimits

0x3f99,	// (0x00062d05) popup_call3_audio_in_window_g1

0x3fb9,	// (0x00062d25) popup_call3_audio_in_window_g2_ParamLimits

0x3fb9,	// (0x00062d25) popup_call3_audio_in_window_g2

0x3fd9,	// (0x00062d45) popup_call3_audio_in_window_g3_ParamLimits

0x3fd9,	// (0x00062d45) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0006e38e) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0006e38e) popup_call3_audio_in_window_g

0x400a,	// (0x00062d76) popup_call3_audio_in_window_t1_ParamLimits

0x400a,	// (0x00062d76) popup_call3_audio_in_window_t1

0x4048,	// (0x00062db4) popup_call3_audio_in_window_t2_ParamLimits

0x4048,	// (0x00062db4) popup_call3_audio_in_window_t2

0x4086,	// (0x00062df2) popup_call3_audio_in_window_t3_ParamLimits

0x4086,	// (0x00062df2) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0006e397) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0006e397) popup_call3_audio_in_window_t

0xa002,	// (0x00068d6e) bg_popup_call3_rect_pane

0xb280,	// (0x00069fec) bg_popup_call3_rect_pane_g1

0xebcb,	// (0x0006d937) bg_popup_call3_rect_pane_g2

0xb288,	// (0x00069ff4) bg_popup_call3_rect_pane_g3

0xb290,	// (0x00069ffc) bg_popup_call3_rect_pane_g4

0xb298,	// (0x0006a004) bg_popup_call3_rect_pane_g5

0xb2a0,	// (0x0006a00c) bg_popup_call3_rect_pane_g6

0xb2a8,	// (0x0006a014) bg_popup_call3_rect_pane_g7

0x2e81,	// (0x00061bed) mup_visualizer_osc_pane

0xa0e1,	// (0x00068e4d) mup_visualizer_spec_pane

0x3f4d,	// (0x00062cb9) call3_video_qcif_pane_ParamLimits

0x3f4d,	// (0x00062cb9) call3_video_qcif_pane

0x3f60,	// (0x00062ccc) call3_video_qcif_uncrop_pane_ParamLimits

0x3f60,	// (0x00062ccc) call3_video_qcif_uncrop_pane

0x3f70,	// (0x00062cdc) call3_video_subqcif_pane_ParamLimits

0x3f70,	// (0x00062cdc) call3_video_subqcif_pane

0x3f86,	// (0x00062cf2) call3_video_subqcif_uncrop_pane_ParamLimits

0x3f86,	// (0x00062cf2) call3_video_subqcif_uncrop_pane

0x3ff9,	// (0x00062d65) popup_call3_audio_in_window_g4_ParamLimits

0x3ff9,	// (0x00062d65) popup_call3_audio_in_window_g4

0x3f0c,	// (0x00062c78) mup_spec_half_pane

0x3f15,	// (0x00062c81) mup_spec_half_pane_cp

0xb533,	// (0x0006a29f) mup_osc_middle_pane

0xb53c,	// (0x0006a2a8) mup_visualizer_osc_pane_g1

0x3eec,	// (0x00062c58) mup_spec_bar_pane_ParamLimits

0x3eec,	// (0x00062c58) mup_spec_bar_pane

0xb520,	// (0x0006a28c) mup_spec_bar_pane_g1

0xb52a,	// (0x0006a296) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0006e382) mup_spec_bar_pane_g

0x0e7f,	// (0x0005fbeb) aid_cale_week_size_cell_pane_ParamLimits

0x0e92,	// (0x0005fbfe) bg_cale_heading_pane_ParamLimits

0xebff,	// (0x0006d96b) bg_cale_pane_cp01_ParamLimits

0x0eae,	// (0x0005fc1a) cale_week_corner_pane_ParamLimits

0x0ec4,	// (0x0005fc30) cale_week_day_heading_pane_ParamLimits

0x0ee0,	// (0x0005fc4c) cale_week_scroll_pane_g1_ParamLimits

0x0ef9,	// (0x0005fc65) cale_week_scroll_pane_g2_ParamLimits

0x0f0a,	// (0x0005fc76) cale_week_scroll_pane_g3_ParamLimits

0x0f1b,	// (0x0005fc87) cale_week_scroll_pane_g4_ParamLimits

0x0f2c,	// (0x0005fc98) cale_week_scroll_pane_g5_ParamLimits

0x0f3d,	// (0x0005fca9) cale_week_scroll_pane_g6_ParamLimits

0x0f4e,	// (0x0005fcba) cale_week_scroll_pane_g7_ParamLimits

0x0f5f,	// (0x0005fccb) cale_week_scroll_pane_g8_ParamLimits

0x0f70,	// (0x0005fcdc) cale_week_scroll_pane_g9_ParamLimits

0x0f81,	// (0x0005fced) cale_week_scroll_pane_g10_ParamLimits

0x0f92,	// (0x0005fcfe) cale_week_scroll_pane_g11_ParamLimits

0x0fa3,	// (0x0005fd0f) cale_week_scroll_pane_g12_ParamLimits

0x0fb4,	// (0x0005fd20) cale_week_scroll_pane_g13_ParamLimits

0x0fcd,	// (0x0005fd39) cale_week_scroll_pane_g14_ParamLimits

0x0fe6,	// (0x0005fd52) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0006df2a) cale_week_scroll_pane_g_ParamLimits

0x0fff,	// (0x0005fd6b) cale_week_time_pane_ParamLimits

0x1010,	// (0x0005fd7c) grid_cale_week_pane_ParamLimits

0xec18,	// (0x0006d984) listscroll_cale_week_pane_t1

0x102b,	// (0x0005fd97) scroll_pane_cp08_ParamLimits

0x1b87,	// (0x000608f3) cale_month_corner_pane_ParamLimits

0xf071,	// (0x0006dddd) cale_month_pane_t1

0x1e6b,	// (0x00060bd7) cale_month_week_pane_ParamLimits

0x27df,	// (0x0006154b) popup_call_status_window_g1_ParamLimits

0x27f3,	// (0x0006155f) popup_call_status_window_g2_ParamLimits

0x2807,	// (0x00061573) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x0006e0d2) popup_call_status_window_g_ParamLimits

0x2870,	// (0x000615dc) aid_call2_pane

0x3149,	// (0x00061eb5) msg_header_pane_g1

0x331f,	// (0x0006208b) postcard_address2_pane_ParamLimits

0x331f,	// (0x0006208b) postcard_address2_pane

0x3335,	// (0x000620a1) postcard_message2_pane_ParamLimits

0x3335,	// (0x000620a1) postcard_message2_pane

0x3ea9,	// (0x00062c15) message2_row_pane_ParamLimits

0x3ea9,	// (0x00062c15) message2_row_pane

0xb4db,	// (0x0006a247) address2_row_pane_ParamLimits

0xb4db,	// (0x0006a247) address2_row_pane

0xb4ee,	// (0x0006a25a) postcard_message2_row_pane_g1

0xb4f6,	// (0x0006a262) postcard_message2_row_pane_t1

0xb4ee,	// (0x0006a25a) address2_row_pane_g1

0xb4f6,	// (0x0006a262) address2_row_pane_t1

0x1239,	// (0x0005ffa5) aid_size_cell_vorec

0xe7aa,	// (0x0006d516) main_rss_pane

0x3ecc,	// (0x00062c38) rss_list_single_pane_ParamLimits

0x3ecc,	// (0x00062c38) rss_list_single_pane

0xb504,	// (0x0006a270) rss_list_single_pane_t1

0xb512,	// (0x0006a27e) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0006e37d) rss_list_single_pane_t

0xe7aa,	// (0x0006d516) main_camera2_pane

0xe7aa,	// (0x0006d516) main_video2_pane

0x411b,	// (0x00062e87) cams_zoom_pane_cp2_ParamLimits

0x411b,	// (0x00062e87) cams_zoom_pane_cp2

0x4132,	// (0x00062e9e) image2_vga_pane_ParamLimits

0x4132,	// (0x00062e9e) image2_vga_pane

0x417a,	// (0x00062ee6) main_camera2_pane_g1_ParamLimits

0x417a,	// (0x00062ee6) main_camera2_pane_g1

0x419a,	// (0x00062f06) main_camera2_pane_g2_ParamLimits

0x419a,	// (0x00062f06) main_camera2_pane_g2

0x41b1,	// (0x00062f1d) main_camera2_pane_g3_ParamLimits

0x41b1,	// (0x00062f1d) main_camera2_pane_g3

0x41c8,	// (0x00062f34) main_camera2_pane_g4_ParamLimits

0x41c8,	// (0x00062f34) main_camera2_pane_g4

0x41df,	// (0x00062f4b) main_camera2_pane_g5_ParamLimits

0x41df,	// (0x00062f4b) main_camera2_pane_g5

0x41f6,	// (0x00062f62) main_camera2_pane_g6_ParamLimits

0x41f6,	// (0x00062f62) main_camera2_pane_g6

0x420d,	// (0x00062f79) main_camera2_pane_g7_ParamLimits

0x420d,	// (0x00062f79) main_camera2_pane_g7

0x4224,	// (0x00062f90) main_camera2_pane_g8_ParamLimits

0x4224,	// (0x00062f90) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0006e39e) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0006e39e) main_camera2_pane_g

0x4252,	// (0x00062fbe) main_camera2_pane_t1_ParamLimits

0x4252,	// (0x00062fbe) main_camera2_pane_t1

0x4287,	// (0x00062ff3) main_camera2_pane_t2_ParamLimits

0x4287,	// (0x00062ff3) main_camera2_pane_t2

0x42a4,	// (0x00063010) main_camera2_pane_t3_ParamLimits

0x42a4,	// (0x00063010) main_camera2_pane_t3

0x4302,	// (0x0006306e) main_camera2_pane_t4_ParamLimits

0x4302,	// (0x0006306e) main_camera2_pane_t4

0x0006,

0xf645,	// (0x0006e3b1) main_camera2_pane_t_ParamLimits

0xf645,	// (0x0006e3b1) main_camera2_pane_t

0x438b,	// (0x000630f7) cams_zoom_pane_cp4_ParamLimits

0x438b,	// (0x000630f7) cams_zoom_pane_cp4

0x43a1,	// (0x0006310d) image2_cif_pane_ParamLimits

0x43a1,	// (0x0006310d) image2_cif_pane

0x43cc,	// (0x00063138) image2_subqcif_pane_ParamLimits

0x43cc,	// (0x00063138) image2_subqcif_pane

0x43e7,	// (0x00063153) main_video2_pane_g1_ParamLimits

0x43e7,	// (0x00063153) main_video2_pane_g1

0x4401,	// (0x0006316d) main_video2_pane_g2_ParamLimits

0x4401,	// (0x0006316d) main_video2_pane_g2

0x4417,	// (0x00063183) main_video2_pane_g3_ParamLimits

0x4417,	// (0x00063183) main_video2_pane_g3

0x442d,	// (0x00063199) main_video2_pane_g4_ParamLimits

0x442d,	// (0x00063199) main_video2_pane_g4

0x4443,	// (0x000631af) main_video2_pane_g5_ParamLimits

0x4443,	// (0x000631af) main_video2_pane_g5

0x4459,	// (0x000631c5) main_video2_pane_g6_ParamLimits

0x4459,	// (0x000631c5) main_video2_pane_g6

0x0005,

0xf654,	// (0x0006e3c0) main_video2_pane_g_ParamLimits

0xf654,	// (0x0006e3c0) main_video2_pane_g

0x4473,	// (0x000631df) main_video2_pane_t1_ParamLimits

0x4473,	// (0x000631df) main_video2_pane_t1

0x4497,	// (0x00063203) main_video2_pane_t2_ParamLimits

0x4497,	// (0x00063203) main_video2_pane_t2

0x44e7,	// (0x00063253) main_video2_pane_t3_ParamLimits

0x44e7,	// (0x00063253) main_video2_pane_t3

0x0002,

0xf661,	// (0x0006e3cd) main_video2_pane_t_ParamLimits

0xf661,	// (0x0006e3cd) main_video2_pane_t

0x399b,	// (0x00062707) call_muted_g2

0x0001,

0xf603,	// (0x0006e36f) call_muted_g

0xe7aa,	// (0x0006d516) main_mup2_pane

0x452f,	// (0x0006329b) main_mup2_pane_g1_ParamLimits

0x452f,	// (0x0006329b) main_mup2_pane_g1

0x453b,	// (0x000632a7) main_mup2_pane_g2_ParamLimits

0x453b,	// (0x000632a7) main_mup2_pane_g2

0xb6b6,	// (0x0006a422) main_mup_pane_g13_cp1

0xb6be,	// (0x0006a42a) mup_volume_pane_cp1

0x4559,	// (0x000632c5) main_mup2_pane_g4_ParamLimits

0x4559,	// (0x000632c5) main_mup2_pane_g4

0x4569,	// (0x000632d5) main_mup2_pane_g5_ParamLimits

0x4569,	// (0x000632d5) main_mup2_pane_g5

0x4579,	// (0x000632e5) main_mup2_pane_g6_ParamLimits

0x4579,	// (0x000632e5) main_mup2_pane_g6

0x4589,	// (0x000632f5) main_mup2_pane_g7_ParamLimits

0x4589,	// (0x000632f5) main_mup2_pane_g7

0x0006,

0xf668,	// (0x0006e3d4) main_mup2_pane_g_ParamLimits

0xf668,	// (0x0006e3d4) main_mup2_pane_g

0x45a1,	// (0x0006330d) main_mup2_pane_t1_ParamLimits

0x45a1,	// (0x0006330d) main_mup2_pane_t1

0x45b7,	// (0x00063323) main_mup2_pane_t2_ParamLimits

0x45b7,	// (0x00063323) main_mup2_pane_t2

0x45cd,	// (0x00063339) main_mup2_pane_t3_ParamLimits

0x45cd,	// (0x00063339) main_mup2_pane_t3

0x45e3,	// (0x0006334f) main_mup2_pane_t4_ParamLimits

0x45e3,	// (0x0006334f) main_mup2_pane_t4

0x45fb,	// (0x00063367) main_mup2_pane_t5_ParamLimits

0x45fb,	// (0x00063367) main_mup2_pane_t5

0x4613,	// (0x0006337f) main_mup2_pane_t6_ParamLimits

0x4613,	// (0x0006337f) main_mup2_pane_t6

0x0005,

0xf677,	// (0x0006e3e3) main_mup2_pane_t_ParamLimits

0xf677,	// (0x0006e3e3) main_mup2_pane_t

0x4643,	// (0x000633af) mup2_visualizer_pane_ParamLimits

0x4643,	// (0x000633af) mup2_visualizer_pane

0x4671,	// (0x000633dd) mup_progress_pane_cp_ParamLimits

0x4671,	// (0x000633dd) mup_progress_pane_cp

0xb698,	// (0x0006a404) mup_volume_pane_cp_ParamLimits

0xb698,	// (0x0006a404) mup_volume_pane_cp

0x4687,	// (0x000633f3) mup2_visualizer_pane_g1_ParamLimits

0x4687,	// (0x000633f3) mup2_visualizer_pane_g1

0xb5d7,	// (0x0006a343) mup2_visualizer_pane_g2_ParamLimits

0xb5d7,	// (0x0006a343) mup2_visualizer_pane_g2

0x469c,	// (0x00063408) mup2_visualizer_pane_g3_ParamLimits

0x469c,	// (0x00063408) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x0006e3f0) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x0006e3f0) mup2_visualizer_pane_g

0xa34c,	// (0x000690b8) aid_size_cell_fmradio

0x3b4b,	// (0x000628b7) aid_height_parent_landcape

0xeed9,	// (0x0006dc45) wml_content_pane_cp

0xeee1,	// (0x0006dc4d) wml_tabs_pane

0xeeea,	// (0x0006dc56) popup_wml_miniature_window

0xeef2,	// (0x0006dc5e) scroll_pane_cp021

0xef06,	// (0x0006dc72) wml_content_pane_comp8

0xe7aa,	// (0x0006d516) bg_popup_sub_pane_cp05

0xb5f5,	// (0x0006a361) popup_wml_miniature_window_g1

0xb5fd,	// (0x0006a369) wml_miniature_view_pane

0x46a8,	// (0x00063414) aid_size_wml_view

0x46b0,	// (0x0006341c) wml_miniature_view_pane_g1

0x46b9,	// (0x00063425) wml_miniature_view_pane_g2

0x46c2,	// (0x0006342e) wml_miniature_view_pane_g3

0x46ca,	// (0x00063436) wml_miniature_view_pane_g4

0x46d2,	// (0x0006343e) wml_miniature_view_pane_g5

0x46da,	// (0x00063446) wml_miniature_view_pane_g6

0x46e2,	// (0x0006344e) wml_miniature_view_pane_g7

0x46ea,	// (0x00063456) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x0006e3f7) wml_miniature_view_pane_g

0xb605,	// (0x0006a371) background_graphic_ParamLimits

0xb605,	// (0x0006a371) background_graphic

0xb611,	// (0x0006a37d) wml_tabs_2_pane

0xb61a,	// (0x0006a386) wml_tabs_3_pane_ParamLimits

0xb61a,	// (0x0006a386) wml_tabs_3_pane

0xb62c,	// (0x0006a398) wml_tabs_4_pane_ParamLimits

0xb62c,	// (0x0006a398) wml_tabs_4_pane

0xb642,	// (0x0006a3ae) wml_tabs_5_pane_ParamLimits

0xb642,	// (0x0006a3ae) wml_tabs_5_pane

0xb65c,	// (0x0006a3c8) wml_tabs_pane_g2_ParamLimits

0xb65c,	// (0x0006a3c8) wml_tabs_pane_g2

0xb670,	// (0x0006a3dc) wml_tabs_pane_g3_ParamLimits

0xb670,	// (0x0006a3dc) wml_tabs_pane_g3

0x46f2,	// (0x0006345e) wml_tabs_2_active_pane_ParamLimits

0x46f2,	// (0x0006345e) wml_tabs_2_active_pane

0x4706,	// (0x00063472) wml_tabs_2_passive_pane_ParamLimits

0x4706,	// (0x00063472) wml_tabs_2_passive_pane

0x471a,	// (0x00063486) wml_tabs_3_active_pane_cp_ParamLimits

0x471a,	// (0x00063486) wml_tabs_3_active_pane_cp

0x472f,	// (0x0006349b) wml_tabs_3_passive_pane_ParamLimits

0x472f,	// (0x0006349b) wml_tabs_3_passive_pane

0x4742,	// (0x000634ae) wml_tabs_3_passive_pane_cp_ParamLimits

0x4742,	// (0x000634ae) wml_tabs_3_passive_pane_cp

0x4759,	// (0x000634c5) tabs_4_active_pane

0x4761,	// (0x000634cd) tabs_4_passive_pane

0x476b,	// (0x000634d7) tabs_4_passive_pane_cp

0x4773,	// (0x000634df) tabs_4_passive_pane_cp2

0x385f,	// (0x000625cb) aid_height_text

0x2e53,	// (0x00061bbf) mup_volume_cont_pane_ParamLimits

0x2e53,	// (0x00061bbf) mup_volume_cont_pane

0x0a65,	// (0x0005f7d1) aid_size_cell_pinb

0x0a6f,	// (0x0005f7db) aid_size_list_pinb

0x465d,	// (0x000633c9) mup2_volume_cont_pane_ParamLimits

0x465d,	// (0x000633c9) mup2_volume_cont_pane

0xb684,	// (0x0006a3f0) mup2_volume_cont_pane_g1_ParamLimits

0xb684,	// (0x0006a3f0) mup2_volume_cont_pane_g1

0x0776,	// (0x0005f4e2) aid_size_cell_touch_ParamLimits

0x0776,	// (0x0005f4e2) aid_size_cell_touch

0x0989,	// (0x0005f6f5) touch_pane_ParamLimits

0x0989,	// (0x0005f6f5) touch_pane

0x9c67,	// (0x000689d3) main_rss2_pane

0xb6c6,	// (0x0006a432) listscroll_rss2_pane

0xb6cf,	// (0x0006a43b) rss2_navigation_pane

0xb6d7,	// (0x0006a443) list_rss2_pane

0x9ec8,	// (0x00068c34) scroll_pane_cp22

0xb6df,	// (0x0006a44b) rss2_navigation_pane_g1

0xb6e8,	// (0x0006a454) rss2_navigation_pane_g2

0xb6f0,	// (0x0006a45c) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x0006e408) rss2_navigation_pane_g

0xb6f8,	// (0x0006a464) rss2_navigation_pane_t1

0x477d,	// (0x000634e9) rss2_list_single_pane_ParamLimits

0x477d,	// (0x000634e9) rss2_list_single_pane

0xb706,	// (0x0006a472) rss2_list_single_pane_t2

0xb714,	// (0x0006a480) rss2_list_single_pane_t3_ParamLimits

0xb714,	// (0x0006a480) rss2_list_single_pane_t3

0xb731,	// (0x0006a49d) rss2_list_single_pane_t4

0x22cd,	// (0x00061039) smil_status_pane_g1

0x9c59,	// (0x000689c5) main_image2_pane_ParamLimits

0x9c59,	// (0x000689c5) main_image2_pane

0x423b,	// (0x00062fa7) main_camera2_pane_g9_ParamLimits

0x423b,	// (0x00062fa7) main_camera2_pane_g9

0x4357,	// (0x000630c3) main_camera2_pane_t5_ParamLimits

0x4357,	// (0x000630c3) main_camera2_pane_t5

0xb5ac,	// (0x0006a318) main_camera2_pane_t6_ParamLimits

0xb5ac,	// (0x0006a318) main_camera2_pane_t6

0x4797,	// (0x00063503) main_image2_pane_g1_ParamLimits

0x4797,	// (0x00063503) main_image2_pane_g1

0x3576,	// (0x000622e2) smil2_video_pane_ParamLimits

0x3576,	// (0x000622e2) smil2_video_pane

0x9c0e,	// (0x0006897a) aid_zoom_text_primary_cp

0x9c4f,	// (0x000689bb) popup_preview_fixed_window

0xee42,	// (0x0006dbae) im_reading_pane_g1

0x410d,	// (0x00062e79) cams2_bc_adjust_pane_cp_ParamLimits

0x410d,	// (0x00062e79) cams2_bc_adjust_pane_cp

0x437d,	// (0x000630e9) cams2_bc_adjust_pane_ParamLimits

0x437d,	// (0x000630e9) cams2_bc_adjust_pane

0xb73f,	// (0x0006a4ab) cams2_bc_adjust_pane_g1

0xb747,	// (0x0006a4b3) cams2_slider_pane

0xb750,	// (0x0006a4bc) cams2_slider_pane_g1

0xb759,	// (0x0006a4c5) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0006e40f) cams2_slider_pane_g

0x0b5f,	// (0x0005f8cb) calc_display_pane_ParamLimits

0x0b87,	// (0x0005f8f3) calc_paper_pane_ParamLimits

0x0baa,	// (0x0005f916) grid_calc_pane_ParamLimits

0x9d97,	// (0x00068b03) popup_clock_digital_window_t1_ParamLimits

0xa2e9,	// (0x00069055) main_image_pane_t1

0x0b41,	// (0x0005f8ad) aid_size_cell_calc_ParamLimits

0x0b41,	// (0x0005f8ad) aid_size_cell_calc

0x3b91,	// (0x000628fd) popup_blid_sat_info2_window_ParamLimits

0x3b91,	// (0x000628fd) popup_blid_sat_info2_window

0xb77b,	// (0x0006a4e7) aid_size_cell_blid

0xb783,	// (0x0006a4ef) bg_popup_window_pane_cp07

0xb7a6,	// (0x0006a512) grid_popup_blid_pane

0xb7b0,	// (0x0006a51c) heading_pane_cp05_ParamLimits

0xb7b0,	// (0x0006a51c) heading_pane_cp05

0xb87a,	// (0x0006a5e6) cell_popup_blid_pane_ParamLimits

0xb87a,	// (0x0006a5e6) cell_popup_blid_pane

0xb8a4,	// (0x0006a610) cell_popup_blid_pane_g1

0xb8ac,	// (0x0006a618) cell_popup_blid_pane_t1

0x462d,	// (0x00063399) mup2_indicator_pane_ParamLimits

0x462d,	// (0x00063399) mup2_indicator_pane

0xa002,	// (0x00068d6e) mup2_visualizer_osc_pane

0xb5e3,	// (0x0006a34f) mup2_visualizer_spec_pane_ParamLimits

0xb5e3,	// (0x0006a34f) mup2_visualizer_spec_pane

0x47ad,	// (0x00063519) mup2_spec_half_pane

0x47b6,	// (0x00063522) mup2_spec_half_pane_cp

0x47be,	// (0x0006352a) mup2_spec_bar_pane_ParamLimits

0x47be,	// (0x0006352a) mup2_spec_bar_pane

0xb520,	// (0x0006a28c) mup2_spec_bar_pane_g1

0xb52a,	// (0x0006a296) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0006e382) mup2_spec_bar_pane_g

0x47de,	// (0x0006354a) mup2_osc_middle_pane

0xb53c,	// (0x0006a2a8) mup2_visualizer_osc_pane_g1

0xddc7,	// (0x0006cb33) popup_number_entry_window_t1_ParamLimits

0xddda,	// (0x0006cb46) popup_number_entry_window_t2_ParamLimits

0xddec,	// (0x0006cb58) popup_number_entry_window_t3_ParamLimits

0xddfe,	// (0x0006cb6a) popup_number_entry_window_t5_ParamLimits

0xddfe,	// (0x0006cb6a) popup_number_entry_window_t5

0xf0d8,	// (0x0006de44) popup_number_entry_window_t_ParamLimits

0xde33,	// (0x0006cb9f) text_title_cp2_ParamLimits

0xa1c3,	// (0x00068f2f) aid_hotspot_pointer_text2_pane

0xa1e9,	// (0x00068f55) main_viewer_pane_g9_ParamLimits

0xa1e9,	// (0x00068f55) main_viewer_pane_g9

0xf071,	// (0x0006dddd) cale_month_pane_t1_ParamLimits

0x2337,	// (0x000610a3) bg_cale_pane_ParamLimits

0x234f,	// (0x000610bb) list_cale_pane_ParamLimits

0xec18,	// (0x0006d984) listscroll_cale_day_pane_t1

0x2360,	// (0x000610cc) scroll_pane_cp09_ParamLimits

0x2e89,	// (0x00061bf5) main_mup_eq_pane_t1_ParamLimits

0x2e89,	// (0x00061bf5) main_mup_eq_pane_t1

0x2ea5,	// (0x00061c11) main_mup_eq_pane_t2_ParamLimits

0x2ea5,	// (0x00061c11) main_mup_eq_pane_t2

0x2ec1,	// (0x00061c2d) main_mup_eq_pane_t3_ParamLimits

0x2ec1,	// (0x00061c2d) main_mup_eq_pane_t3

0x2edf,	// (0x00061c4b) main_mup_eq_pane_t4_ParamLimits

0x2edf,	// (0x00061c4b) main_mup_eq_pane_t4

0x2efd,	// (0x00061c69) main_mup_eq_pane_t5_ParamLimits

0x2efd,	// (0x00061c69) main_mup_eq_pane_t5

0x2f1b,	// (0x00061c87) main_mup_eq_pane_t6_ParamLimits

0x2f1b,	// (0x00061c87) main_mup_eq_pane_t6

0x2f31,	// (0x00061c9d) main_mup_eq_pane_t7_ParamLimits

0x2f31,	// (0x00061c9d) main_mup_eq_pane_t7

0x2f47,	// (0x00061cb3) main_mup_eq_pane_t8_ParamLimits

0x2f47,	// (0x00061cb3) main_mup_eq_pane_t8

0x2f5d,	// (0x00061cc9) main_mup_eq_pane_t9_ParamLimits

0x2f5d,	// (0x00061cc9) main_mup_eq_pane_t9

0x2f79,	// (0x00061ce5) main_mup_eq_pane_t10_ParamLimits

0x2f79,	// (0x00061ce5) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0006e1d1) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0006e1d1) main_mup_eq_pane_t

0x304e,	// (0x00061dba) mup_equalizer_pane_cp5_ParamLimits

0x3066,	// (0x00061dd2) mup_equalizer_pane_cp6_ParamLimits

0x307e,	// (0x00061dea) mup_equalizer_pane_cp7_ParamLimits

0x9c67,	// (0x000689d3) main_gallery_pane

0xb545,	// (0x0006a2b1) smil2_volume_pane

0xb54d,	// (0x0006a2b9) smil_status_volume_pane_g1_ParamLimits

0xb560,	// (0x0006a2cc) smil_status_volume_pane_g2_ParamLimits

0xb573,	// (0x0006a2df) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x0006e387) smil_status_volume_pane_g_ParamLimits

0xb783,	// (0x0006a4ef) bg_popup_window_pane_cp07_ParamLimits

0xb791,	// (0x0006a4fd) blid_firmament_pane

0x47e7,	// (0x00063553) aid_size_cell_gallery_ParamLimits

0x47e7,	// (0x00063553) aid_size_cell_gallery

0x47fd,	// (0x00063569) grid_gallery_pane_ParamLimits

0x47fd,	// (0x00063569) grid_gallery_pane

0x4818,	// (0x00063584) cell_gallery_pane_ParamLimits

0x4818,	// (0x00063584) cell_gallery_pane

0xb8ba,	// (0x0006a626) bg_cell_gallery_focus_pane_ParamLimits

0xb8ba,	// (0x0006a626) bg_cell_gallery_focus_pane

0xb8cc,	// (0x0006a638) cell_gallery_pane_g1_ParamLimits

0xb8cc,	// (0x0006a638) cell_gallery_pane_g1

0x4869,	// (0x000635d5) cell_gallery_pane_g2_ParamLimits

0x4869,	// (0x000635d5) cell_gallery_pane_g2

0x4876,	// (0x000635e2) cell_gallery_pane_g3_ParamLimits

0x4876,	// (0x000635e2) cell_gallery_pane_g3

0xb8d8,	// (0x0006a644) cell_gallery_pane_g4_ParamLimits

0xb8d8,	// (0x0006a644) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x0006e435) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x0006e435) cell_gallery_pane_g

0xb8e4,	// (0x0006a650) bg_cell_gallery_focus_pane_g1

0xb8ec,	// (0x0006a658) bg_cell_gallery_focus_pane_g2

0xb8f4,	// (0x0006a660) bg_cell_gallery_focus_pane_g3

0xb8fc,	// (0x0006a668) bg_cell_gallery_focus_pane_g4

0xb904,	// (0x0006a670) bg_cell_gallery_focus_pane_g5

0xb90c,	// (0x0006a678) bg_cell_gallery_focus_pane_g6

0xb914,	// (0x0006a680) bg_cell_gallery_focus_pane_g7

0xb91c,	// (0x0006a688) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0006e43e) bg_cell_gallery_focus_pane_g

0xb924,	// (0x0006a690) aid_firma_cardinal

0xb938,	// (0x0006a6a4) blid_firmament_pane_t1

0xb94f,	// (0x0006a6bb) blid_firmament_pane_t2

0xb966,	// (0x0006a6d2) blid_firmament_pane_t3

0xb97d,	// (0x0006a6e9) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0006e44f) blid_firmament_pane_t

0xb994,	// (0x0006a700) blid_sat_info_pane

0xb9a4,	// (0x0006a710) blid_sat_info_pane_g1

0xb9a4,	// (0x0006a710) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x0006e458) blid_sat_info_pane_g

0xb9ae,	// (0x0006a71a) blid_sat_info_pane_t1

0xb9bc,	// (0x0006a728) smil2_volume_content_pane

0xb9c5,	// (0x0006a731) smil2_volume_pane_g1

0xb9cd,	// (0x0006a739) smil2_volume_content_pane_g1

0xb9d6,	// (0x0006a742) smil2_volume_content_pane_g2

0xb9df,	// (0x0006a74b) smil2_volume_content_pane_g3

0xb9e8,	// (0x0006a754) smil2_volume_content_pane_g4

0xb9f1,	// (0x0006a75d) smil2_volume_content_pane_g5

0xb9fa,	// (0x0006a766) smil2_volume_content_pane_g6

0xba03,	// (0x0006a76f) smil2_volume_content_pane_g7

0xba0c,	// (0x0006a778) smil2_volume_content_pane_g8

0xba15,	// (0x0006a781) smil2_volume_content_pane_g9

0xba1e,	// (0x0006a78a) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0006e45d) smil2_volume_content_pane_g

0x108b,	// (0x0005fdf7) cale_week_day_heading_pane_t1_ParamLimits

0x109f,	// (0x0005fe0b) cale_week_day_heading_pane_t2_ParamLimits

0x10b3,	// (0x0005fe1f) cale_week_day_heading_pane_t3_ParamLimits

0x10c7,	// (0x0005fe33) cale_week_day_heading_pane_t4_ParamLimits

0x10db,	// (0x0005fe47) cale_week_day_heading_pane_t5_ParamLimits

0x10ef,	// (0x0005fe5b) cale_week_day_heading_pane_t6_ParamLimits

0x1103,	// (0x0005fe6f) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0006df49) cale_week_day_heading_pane_t_ParamLimits

0xec2a,	// (0x0006d996) bg_cale_side_pane_ParamLimits

0x1117,	// (0x0005fe83) cale_week_time_pane_t1_ParamLimits

0x112f,	// (0x0005fe9b) cale_week_time_pane_t2_ParamLimits

0x1147,	// (0x0005feb3) cale_week_time_pane_t3_ParamLimits

0x115f,	// (0x0005fecb) cale_week_time_pane_t4_ParamLimits

0x1177,	// (0x0005fee3) cale_week_time_pane_t5_ParamLimits

0x118f,	// (0x0005fefb) cale_week_time_pane_t6_ParamLimits

0x11a7,	// (0x0005ff13) cale_week_time_pane_t7_ParamLimits

0x11c3,	// (0x0005ff2f) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0006df58) cale_week_time_pane_t_ParamLimits

0x11e3,	// (0x0005ff4f) cell_cale_week_pane_g2_ParamLimits

0xec2a,	// (0x0006d996) bg_cale_side_pane_cp01_ParamLimits

0x2166,	// (0x00060ed2) cale_month_week_pane_t1_ParamLimits

0x217d,	// (0x00060ee9) cale_month_week_pane_t2_ParamLimits

0x2194,	// (0x00060f00) cale_month_week_pane_t3_ParamLimits

0x21ab,	// (0x00060f17) cale_month_week_pane_t4_ParamLimits

0x21c2,	// (0x00060f2e) cale_month_week_pane_t5_ParamLimits

0x21d9,	// (0x00060f45) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0006e031) cale_month_week_pane_t_ParamLimits

0x9d17,	// (0x00068a83) cell_cale_month_pane_g1_ParamLimits

0x9c67,	// (0x000689d3) main_cale_event_viewer_pane

0xdd9d,	// (0x0006cb09) listscroll_cale_event_viewer_pane

0xba27,	// (0x0006a793) list_cale_ev_pane

0xba2f,	// (0x0006a79b) scroll_pane_cp023

0x4883,	// (0x000635ef) field_cale_ev_pane_ParamLimits

0x4883,	// (0x000635ef) field_cale_ev_pane

0xba3b,	// (0x0006a7a7) field_cale_ev_content_pane_ParamLimits

0xba3b,	// (0x0006a7a7) field_cale_ev_content_pane

0xba47,	// (0x0006a7b3) field_cale_ev_pane_g1_ParamLimits

0xba47,	// (0x0006a7b3) field_cale_ev_pane_g1

0xba53,	// (0x0006a7bf) field_cale_ev_pane_g2_ParamLimits

0xba53,	// (0x0006a7bf) field_cale_ev_pane_g2

0xba6b,	// (0x0006a7d7) field_cale_ev_pane_g3_ParamLimits

0xba6b,	// (0x0006a7d7) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x0006e472) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x0006e472) field_cale_ev_pane_g

0xba83,	// (0x0006a7ef) field_cale_ev_pane_t1_ParamLimits

0xba83,	// (0x0006a7ef) field_cale_ev_pane_t1

0x48a7,	// (0x00063613) field_cale_ev_content_pane_t1_ParamLimits

0x48a7,	// (0x00063613) field_cale_ev_content_pane_t1

0xa18d,	// (0x00068ef9) bg_button_pane_cp01

0xead8,	// (0x0006d844) listscroll_cale_week_pane_ParamLimits

0x0e75,	// (0x0005fbe1) popup_toolbar_window_cp01

0xec18,	// (0x0006d984) listscroll_cale_week_pane_t1_ParamLimits

0xead8,	// (0x0006d844) listscroll_cale_day_pane_ParamLimits

0x232d,	// (0x00061099) popup_toolbar_window_cp02

0xec18,	// (0x0006d984) listscroll_cale_day_pane_t1_ParamLimits

0xead8,	// (0x0006d844) main_cale_month_pane_ParamLimits

0x3e11,	// (0x00062b7d) popup_toolbar_window_cp03_ParamLimits

0x3e11,	// (0x00062b7d) popup_toolbar_window_cp03

0x3434,	// (0x000621a0) main_image_pane_g2_ParamLimits

0x3434,	// (0x000621a0) main_image_pane_g2

0x3445,	// (0x000621b1) main_image_pane_g3_ParamLimits

0x3445,	// (0x000621b1) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0006e263) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0006e263) main_image_pane_g

0xa2e9,	// (0x00069055) main_image_pane_t1_ParamLimits

0x3456,	// (0x000621c2) main_image_pane_t2_ParamLimits

0x3456,	// (0x000621c2) main_image_pane_t2

0x3468,	// (0x000621d4) main_image_pane_t3_ParamLimits

0x3468,	// (0x000621d4) main_image_pane_t3

0x3490,	// (0x000621fc) main_image_pane_t4_ParamLimits

0x3490,	// (0x000621fc) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0006e26a) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0006e26a) main_image_pane_t

0x34b0,	// (0x0006221c) popup_image_details_window_cp01

0x34ba,	// (0x00062226) popup_toobar_trans_pane_cp01_ParamLimits

0x34ba,	// (0x00062226) popup_toobar_trans_pane_cp01

0x3c84,	// (0x000629f0) popup_image_details_window_ParamLimits

0x3c84,	// (0x000629f0) popup_image_details_window

0xb491,	// (0x0006a1fd) popup_image_focus_window

0x40c7,	// (0x00062e33) camera2_autofocus_pane_ParamLimits

0x40c7,	// (0x00062e33) camera2_autofocus_pane

0xdd9d,	// (0x0006cb09) bg_popup_sub_pane_cp06

0xba9a,	// (0x0006a806) popup_image_focus_window_g1

0xbaa2,	// (0x0006a80e) popup_image_focus_window_g2

0xbaaa,	// (0x0006a816) popup_image_focus_window_g3

0xbab2,	// (0x0006a81e) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x0006e479) popup_image_focus_window_g

0xbaba,	// (0x0006a826) popup_image_focus_window_t1

0xbac8,	// (0x0006a834) popup_image_focus_window_t2

0xbad8,	// (0x0006a844) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x0006e482) popup_image_focus_window_t

0xbae6,	// (0x0006a852) camera2_autofocus_pane_g1

0xdff8,	// (0x0006cd64) bg_tb_trans_pane_cp01

0xbaf4,	// (0x0006a860) popup_image_details_window_g1

0xbb07,	// (0x0006a873) popup_image_details_window_g2

0x0002,

0xf728,	// (0x0006e494) popup_image_details_window_g

0xbb30,	// (0x0006a89c) popup_image_details_window_t1

0xbb42,	// (0x0006a8ae) popup_image_details_window_t2

0xbb5b,	// (0x0006a8c7) popup_image_details_window_t3

0xbb6f,	// (0x0006a8db) popup_image_details_window_t4

0xbb8a,	// (0x0006a8f6) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0006e49b) popup_image_details_window_t

0xeac4,	// (0x0006d830) bg_calc_paper_pane_ParamLimits

0x9c67,	// (0x000689d3) grid_highlight_pane_cp013

0x9c79,	// (0x000689e5) list_calc_pane_ParamLimits

0x9c8b,	// (0x000689f7) scroll_pane_cp024

0xead8,	// (0x0006d844) bg_calc_display_pane_ParamLimits

0x0caa,	// (0x0005fa16) calc_display_pane_t1_ParamLimits

0x0cbc,	// (0x0005fa28) calc_display_pane_t2_ParamLimits

0x9c93,	// (0x000689ff) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0006decb) calc_display_pane_t_ParamLimits

0x0d84,	// (0x0005faf0) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0006dee8) cell_calc_pane_g

0x0d8d,	// (0x0005faf9) cell_calc_pane_t1

0xeb37,	// (0x0006d8a3) grid_highlight_pane_cp02_ParamLimits

0xeb4d,	// (0x0006d8b9) toolbar_button_pane_cp01_ParamLimits

0xeb4d,	// (0x0006d8b9) toolbar_button_pane_cp01

0xa32e,	// (0x0006909a) temp_image_control_pane_ParamLimits

0xa32e,	// (0x0006909a) temp_image_control_pane

0x9c59,	// (0x000689c5) main_mp3_pane

0xbba4,	// (0x0006a910) temp_image_control_pane_g1_ParamLimits

0xbba4,	// (0x0006a910) temp_image_control_pane_g1

0xbbb2,	// (0x0006a91e) temp_image_control_pane_g2_ParamLimits

0xbbb2,	// (0x0006a91e) temp_image_control_pane_g2

0xbbc4,	// (0x0006a930) temp_image_control_pane_g3_ParamLimits

0xbbc4,	// (0x0006a930) temp_image_control_pane_g3

0x48f8,	// (0x00063664) temp_image_control_pane_g4_ParamLimits

0x48f8,	// (0x00063664) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0006e4a6) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0006e4a6) temp_image_control_pane_g

0xbba4,	// (0x0006a910) main_mp3_pane_g1

0x490b,	// (0x00063677) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0006e4af) main_mp3_pane_g

0xbc07,	// (0x0006a973) main_mp3_pane_t1

0xec8f,	// (0x0006d9fb) main_camera_pane_g8_ParamLimits

0xec8f,	// (0x0006d9fb) main_camera_pane_g8

0x1512,	// (0x0006027e) main_video_pane_g7_ParamLimits

0x1512,	// (0x0006027e) main_video_pane_g7

0xb5c5,	// (0x0006a331) main_camera2_pane_t7_ParamLimits

0xb5c5,	// (0x0006a331) main_camera2_pane_t7

0xee99,	// (0x0006dc05) scroll_pane_cp025_ParamLimits

0xee99,	// (0x0006dc05) scroll_pane_cp025

0xeead,	// (0x0006dc19) scroll_pane_cp026_ParamLimits

0xeead,	// (0x0006dc19) scroll_pane_cp026

0xeebc,	// (0x0006dc28) wml_content_pane_ParamLimits

0x9c67,	// (0x000689d3) main_touch_calib_pane

0x49dd,	// (0x00063749) main_touch_calib_pane_g1

0x49ef,	// (0x0006375b) main_touch_calib_pane_g2

0x4a01,	// (0x0006376d) main_touch_calib_pane_g3

0x4a13,	// (0x0006377f) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0006e4cd) main_touch_calib_pane_g

0x4a25,	// (0x00063791) main_touch_calib_pane_t1

0x4a3f,	// (0x000637ab) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x0006e4d6) main_touch_calib_pane_t

0x9f43,	// (0x00068caf) mup_progress_pane_cp02

0x9f62,	// (0x00068cce) navi_pane_g1

0x9fc4,	// (0x00068d30) navi_pane_mp_t3

0x9c59,	// (0x000689c5) main_mp3_pane_ParamLimits

0x3e53,	// (0x00062bbf) navi_pane_ParamLimits

0xbba4,	// (0x0006a910) main_mp3_pane_g1_ParamLimits

0x490b,	// (0x00063677) main_mp3_pane_g2_ParamLimits

0x4917,	// (0x00063683) main_mp3_pane_g3_ParamLimits

0x4917,	// (0x00063683) main_mp3_pane_g3

0x4925,	// (0x00063691) main_mp3_pane_g4_ParamLimits

0x4925,	// (0x00063691) main_mp3_pane_g4

0xbbd4,	// (0x0006a940) main_mp3_pane_g5_ParamLimits

0xbbd4,	// (0x0006a940) main_mp3_pane_g5

0xbbe2,	// (0x0006a94e) main_mp3_pane_g6_ParamLimits

0xbbe2,	// (0x0006a94e) main_mp3_pane_g6

0xbbef,	// (0x0006a95b) main_mp3_pane_g7_ParamLimits

0xbbef,	// (0x0006a95b) main_mp3_pane_g7

0xbbfb,	// (0x0006a967) main_mp3_pane_g8_ParamLimits

0xbbfb,	// (0x0006a967) main_mp3_pane_g8

0xf743,	// (0x0006e4af) main_mp3_pane_g_ParamLimits

0x4931,	// (0x0006369d) main_mp3_pane_t2

0x493f,	// (0x000636ab) main_mp3_pane_t3

0xbc15,	// (0x0006a981) main_mp3_pane_t4

0xbc23,	// (0x0006a98f) main_mp3_pane_t5

0x0005,

0xf754,	// (0x0006e4c0) main_mp3_pane_t

0xbc31,	// (0x0006a99d) mup_progress_pane_cp01

0x9c0e,	// (0x0006897a) aid_zoom_text_secondary2

0xba27,	// (0x0006a793) list_cale_ev2_pane

0xba2f,	// (0x0006a79b) scroll_pane_cp023_ParamLimits

0x4a99,	// (0x00063805) field_cale_ev2_pane_ParamLimits

0x4a99,	// (0x00063805) field_cale_ev2_pane

0x4abd,	// (0x00063829) field_cale_ev2_pane_g1_ParamLimits

0x4abd,	// (0x00063829) field_cale_ev2_pane_g1

0x4ac9,	// (0x00063835) field_cale_ev2_pane_g2_ParamLimits

0x4ac9,	// (0x00063835) field_cale_ev2_pane_g2

0x4ae1,	// (0x0006384d) field_cale_ev2_pane_g3_ParamLimits

0x4ae1,	// (0x0006384d) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x0006e4e1) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x0006e4e1) field_cale_ev2_pane_g

0x4b05,	// (0x00063871) field_cale_ev2_pane_t1_ParamLimits

0x4b05,	// (0x00063871) field_cale_ev2_pane_t1

0x4b1c,	// (0x00063888) field_cale_ev2_pane_t2_ParamLimits

0x4b1c,	// (0x00063888) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0006e4ea) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0006e4ea) field_cale_ev2_pane_t

0x32cf,	// (0x0006203b) main_postcard_pane_g5_ParamLimits

0x32cf,	// (0x0006203b) main_postcard_pane_g5

0x32e5,	// (0x00062051) main_postcard_pane_g6_ParamLimits

0x32e5,	// (0x00062051) main_postcard_pane_g6

0x12be,	// (0x0006002a) camera2_autofocus_pane_cp_ParamLimits

0x12be,	// (0x0006002a) camera2_autofocus_pane_cp

0x9c59,	// (0x000689c5) main_mup3_pane

0x4b51,	// (0x000638bd) main_mup3_pane_g1_ParamLimits

0x4b51,	// (0x000638bd) main_mup3_pane_g1

0x4b73,	// (0x000638df) main_mup3_pane_g2_ParamLimits

0x4b73,	// (0x000638df) main_mup3_pane_g2

0x4bf6,	// (0x00063962) main_mup3_pane_g3_ParamLimits

0x4bf6,	// (0x00063962) main_mup3_pane_g3

0x4c42,	// (0x000639ae) main_mup3_pane_g4_ParamLimits

0x4c42,	// (0x000639ae) main_mup3_pane_g4

0x4c8e,	// (0x000639fa) main_mup3_pane_g5_ParamLimits

0x4c8e,	// (0x000639fa) main_mup3_pane_g5

0x4cda,	// (0x00063a46) main_mup3_pane_g6_ParamLimits

0x4cda,	// (0x00063a46) main_mup3_pane_g6

0xbc39,	// (0x0006a9a5) main_mup3_pane_g7_ParamLimits

0xbc39,	// (0x0006a9a5) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x0006e4fa) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x0006e4fa) main_mup3_pane_g

0x4d5e,	// (0x00063aca) main_mup3_pane_t1_ParamLimits

0x4d5e,	// (0x00063aca) main_mup3_pane_t1

0x4dd6,	// (0x00063b42) main_mup3_pane_t2_ParamLimits

0x4dd6,	// (0x00063b42) main_mup3_pane_t2

0x4eac,	// (0x00063c18) main_mup3_pane_t4_ParamLimits

0x4eac,	// (0x00063c18) main_mup3_pane_t4

0x4f0a,	// (0x00063c76) main_mup3_pane_t5_ParamLimits

0x4f0a,	// (0x00063c76) main_mup3_pane_t5

0x4fce,	// (0x00063d3a) main_mup3_pane_t6_ParamLimits

0x4fce,	// (0x00063d3a) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0006e50b) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0006e50b) main_mup3_pane_t

0x5088,	// (0x00063df4) mup3_progress_pane_ParamLimits

0x5088,	// (0x00063df4) mup3_progress_pane

0x5124,	// (0x00063e90) popup_mup3_control_window_ParamLimits

0x5124,	// (0x00063e90) popup_mup3_control_window

0xbc47,	// (0x0006a9b3) popup_mup3_text_window

0x515a,	// (0x00063ec6) mup3_progress_pane_t1

0x5178,	// (0x00063ee4) mup3_progress_pane_t2

0xbc4f,	// (0x0006a9bb) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0006e518) mup3_progress_pane_t

0xbc6c,	// (0x0006a9d8) mup_progress_pane_cp03

0xdd9d,	// (0x0006cb09) bg_tb_trans_pane_cp04

0x5196,	// (0x00063f02) mup3_volume_pane

0x519e,	// (0x00063f0a) popup_mup3_control_window_g1

0x51a7,	// (0x00063f13) mup3_volume_pane_g1

0x51b0,	// (0x00063f1c) mup3_volume_pane_g2

0x51b9,	// (0x00063f25) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0006e51f) mup3_volume_pane_g

0xdd9d,	// (0x0006cb09) bg_tb_trans_pane_cp03

0xbc7c,	// (0x0006a9e8) popup_mup3_text_window_g1

0xbc84,	// (0x0006a9f0) popup_mup3_text_window_t1

0xeb20,	// (0x0006d88c) list_calc_item_pane_g1_ParamLimits

0xb6ad,	// (0x0006a419) mup_volume_pane_cp_g1

0x4a59,	// (0x000637c5) main_touch_calib_pane_t3

0x4a6d,	// (0x000637d9) main_touch_calib_pane_t4

0x4a83,	// (0x000637ef) main_touch_calib_pane_t5

0x9bea,	// (0x00068956) aid_cell_size_toolbar2

0x9bf2,	// (0x0006895e) aid_popup3_width_pane

0x9bfe,	// (0x0006896a) aid_zoom_text_msg_primary

0x1293,	// (0x0005ffff) vorec_t7

0xeae4,	// (0x0006d850) bg_calc_paper_pane_g1_ParamLimits

0xeaf0,	// (0x0006d85c) bg_calc_paper_pane_g2_ParamLimits

0xeafc,	// (0x0006d868) bg_calc_paper_pane_g3_ParamLimits

0xeb08,	// (0x0006d874) bg_calc_paper_pane_g4_ParamLimits

0xeb14,	// (0x0006d880) bg_calc_paper_pane_g5_ParamLimits

0x0d0d,	// (0x0005fa79) bg_calc_paper_pane_g6_ParamLimits

0x0d20,	// (0x0005fa8c) bg_calc_paper_pane_g7_ParamLimits

0x0d33,	// (0x0005fa9f) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x0006ded2) bg_calc_paper_pane_g_ParamLimits

0x0d44,	// (0x0005fab0) calc_bg_paper_pane_g9_ParamLimits

0x1420,	// (0x0006018c) image_qvga_pane_ParamLimits

0x1420,	// (0x0006018c) image_qvga_pane

0xea05,	// (0x0006d771) bg_popup_sub_pane_cp04_ParamLimits

0xa265,	// (0x00068fd1) popup_mup_playback_window_g1_ParamLimits

0xa271,	// (0x00068fdd) popup_mup_playback_window_t1_ParamLimits

0xa286,	// (0x00068ff2) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0006e25e) popup_mup_playback_window_t_ParamLimits

0x454b,	// (0x000632b7) main_mup2_pane_g3_ParamLimits

0x454b,	// (0x000632b7) main_mup2_pane_g3

0x176a,	// (0x000604d6) popup_toolbar_window_cp04

0xa681,	// (0x000693ed) popup_call2_audio_second_window_g3_ParamLimits

0xa681,	// (0x000693ed) popup_call2_audio_second_window_g3

0xaa8b,	// (0x000697f7) popup_call2_audio_first_window_g4_ParamLimits

0xaa8b,	// (0x000697f7) popup_call2_audio_first_window_g4

0xb10a,	// (0x00069e76) popup_call2_audio_in_window_g4_ParamLimits

0xb10a,	// (0x00069e76) popup_call2_audio_in_window_g4

0x3416,	// (0x00062182) aid_area_sk_bg_cut_ParamLimits

0x3416,	// (0x00062182) aid_area_sk_bg_cut

0xa29b,	// (0x00069007) aid_area_sk_bg_cut_2_ParamLimits

0xa29b,	// (0x00069007) aid_area_sk_bg_cut_2

0x4859,	// (0x000635c5) aid_placing_details_win

0x4861,	// (0x000635cd) aid_placing_details_win_2

0xbae6,	// (0x0006a852) camera2_autofocus_pane_g1_ParamLimits

0x0928,	// (0x0005f694) popup_fixed_preview_cale_window_ParamLimits

0x0928,	// (0x0005f694) popup_fixed_preview_cale_window

0xa01c,	// (0x00068d88) navi_slider_pane_g3

0xa025,	// (0x00068d91) navi_slider_pane_g4

0xa02e,	// (0x00068d9a) navi_slider_pane_g5

0xa01c,	// (0x00068d88) navi_slider_pane_g6

0xa037,	// (0x00068da3) navi_slider_pane_g7

0xa15a,	// (0x00068ec6) mup_scale_pane_g3

0xa163,	// (0x00068ecf) mup_scale_pane_g4

0xa16c,	// (0x00068ed8) mup_scale_pane_g5

0x3096,	// (0x00061e02) mup_scale_pane_g6

0x309f,	// (0x00061e0b) mup_scale_pane_g7

0xa01c,	// (0x00068d88) cams2_slider_pane_g3

0xb762,	// (0x0006a4ce) cams2_slider_pane_g4

0xb76a,	// (0x0006a4d6) cams2_slider_pane_g5

0xa01c,	// (0x00068d88) cams2_slider_pane_g6

0xb772,	// (0x0006a4de) cams2_slider_pane_g7

0xb9a4,	// (0x0006a710) camera2_autofocus_pane_cp_g1

0xbc92,	// (0x0006a9fe) bg_popup_preview_window_pane_cp02_ParamLimits

0xbc92,	// (0x0006a9fe) bg_popup_preview_window_pane_cp02

0xbc9e,	// (0x0006aa0a) list_fp_cale_pane_ParamLimits

0xbc9e,	// (0x0006aa0a) list_fp_cale_pane

0xbcaa,	// (0x0006aa16) popup_fixed_preview_cale_window_t1_ParamLimits

0xbcaa,	// (0x0006aa16) popup_fixed_preview_cale_window_t1

0x51c2,	// (0x00063f2e) popup_fixed_preview_cale_window_t2_ParamLimits

0x51c2,	// (0x00063f2e) popup_fixed_preview_cale_window_t2

0x51d7,	// (0x00063f43) popup_fixed_preview_cale_window_t3_ParamLimits

0x51d7,	// (0x00063f43) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0006e526) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0006e526) popup_fixed_preview_cale_window_t

0xbcc8,	// (0x0006aa34) list_single_fp_cale_pane_ParamLimits

0xbcc8,	// (0x0006aa34) list_single_fp_cale_pane

0xbce0,	// (0x0006aa4c) list_single_fp_cale_pane_g1_ParamLimits

0xbce0,	// (0x0006aa4c) list_single_fp_cale_pane_g1

0xbcec,	// (0x0006aa58) list_single_fp_cale_pane_g2_ParamLimits

0xbcec,	// (0x0006aa58) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0006e52d) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0006e52d) list_single_fp_cale_pane_g

0xbd05,	// (0x0006aa71) list_single_fp_cale_pane_t1_ParamLimits

0xbd05,	// (0x0006aa71) list_single_fp_cale_pane_t1

0xbd17,	// (0x0006aa83) list_single_fp_cale_pane_t2_ParamLimits

0xbd17,	// (0x0006aa83) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0006e534) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0006e534) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c67,	// (0x000689d3) main_dialer_pane

0x51ee,	// (0x00063f5a) aid_cell_size_keypad

0x51f8,	// (0x00063f64) dialer_ne_pane

0x5202,	// (0x00063f6e) grid_dialer_command_1_pane

0x520a,	// (0x00063f76) grid_dialer_command_2_pane

0x5212,	// (0x00063f7e) grid_dialer_keypad_pane

0x5226,	// (0x00063f92) bg_popup_call_pane_cp06_ParamLimits

0x5226,	// (0x00063f92) bg_popup_call_pane_cp06

0x5232,	// (0x00063f9e) dialer_ne_clear_pane_ParamLimits

0x5232,	// (0x00063f9e) dialer_ne_clear_pane

0xbd4a,	// (0x0006aab6) dialer_ne_pane_g1

0xbd52,	// (0x0006aabe) dialer_ne_pane_t1_ParamLimits

0xbd52,	// (0x0006aabe) dialer_ne_pane_t1

0x523e,	// (0x00063faa) dialer_ne_pane_t2_ParamLimits

0x523e,	// (0x00063faa) dialer_ne_pane_t2

0x5268,	// (0x00063fd4) dialer_ne_pane_t3_ParamLimits

0x5268,	// (0x00063fd4) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x0006e539) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x0006e539) dialer_ne_pane_t

0x5298,	// (0x00064004) dialer_ne_pane_t3_copy1_ParamLimits

0x5298,	// (0x00064004) dialer_ne_pane_t3_copy1

0x52c7,	// (0x00064033) cell_dialer_keypad_pane_ParamLimits

0x52c7,	// (0x00064033) cell_dialer_keypad_pane

0x52de,	// (0x0006404a) cell_dialer_command_1_pane_ParamLimits

0x52de,	// (0x0006404a) cell_dialer_command_1_pane

0x52f4,	// (0x00064060) cell_dialer_command_2_pane_ParamLimits

0x52f4,	// (0x00064060) cell_dialer_command_2_pane

0xbd64,	// (0x0006aad0) bg_button_pane_cp02_ParamLimits

0xbd64,	// (0x0006aad0) bg_button_pane_cp02

0x5303,	// (0x0006406f) cell_dialer_keypad_pane_g1_ParamLimits

0x5303,	// (0x0006406f) cell_dialer_keypad_pane_g1

0xbd64,	// (0x0006aad0) bg_button_pane_cp03_ParamLimits

0xbd64,	// (0x0006aad0) bg_button_pane_cp03

0x5318,	// (0x00064084) cell_dialer_command_1_pane_g1_ParamLimits

0x5318,	// (0x00064084) cell_dialer_command_1_pane_g1

0xbd70,	// (0x0006aadc) bg_button_pane_cp04

0x532c,	// (0x00064098) cell_dialer_command_2_pane_g1

0xa002,	// (0x00068d6e) bg_button_pane_cp06

0xbd78,	// (0x0006aae4) dialer_ne_clear_pane_g1

0x2b7a,	// (0x000618e6) navi_pane_g2

0x2ba8,	// (0x00061914) navi_pane_g3

0x0002,

0xf3f5,	// (0x0006e161) navi_pane_g

0x2bd3,	// (0x0006193f) navi_pane_mv_g2

0x2bfa,	// (0x00061966) navi_pane_mv_g5

0x2c02,	// (0x0006196e) navi_pane_mv_t1

0xead8,	// (0x0006d844) main_clock2_pane

0x5365,	// (0x000640d1) main_clock2_list_pane_ParamLimits

0x5365,	// (0x000640d1) main_clock2_list_pane

0x539f,	// (0x0006410b) main_clock2_pane_t1_ParamLimits

0x539f,	// (0x0006410b) main_clock2_pane_t1

0x53db,	// (0x00064147) main_clock2_pane_t2_ParamLimits

0x53db,	// (0x00064147) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0006e540) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0006e540) main_clock2_pane_t

0x547a,	// (0x000641e6) popup_clock_analogue_window_cp03_ParamLimits

0x547a,	// (0x000641e6) popup_clock_analogue_window_cp03

0x54a1,	// (0x0006420d) popup_clock_digital_window_cp02_ParamLimits

0x54a1,	// (0x0006420d) popup_clock_digital_window_cp02

0x551c,	// (0x00064288) main_clock2_list_single_pane_ParamLimits

0x551c,	// (0x00064288) main_clock2_list_single_pane

0xa002,	// (0x00068d6e) list_highlight_pane_cp05

0xbd80,	// (0x0006aaec) main_clock2_list_single_pane_t1

0x176a,	// (0x000604d6) popup_toolbar_window_cp04_ParamLimits

0x48c8,	// (0x00063634) camera2_autofocus_pane_g2_ParamLimits

0x48c8,	// (0x00063634) camera2_autofocus_pane_g2

0x48d4,	// (0x00063640) camera2_autofocus_pane_g3_ParamLimits

0x48d4,	// (0x00063640) camera2_autofocus_pane_g3

0x48e0,	// (0x0006364c) camera2_autofocus_pane_g4_ParamLimits

0x48e0,	// (0x0006364c) camera2_autofocus_pane_g4

0x48ec,	// (0x00063658) camera2_autofocus_pane_g5_ParamLimits

0x48ec,	// (0x00063658) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0006e489) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0006e489) camera2_autofocus_pane_g

0x4b31,	// (0x0006389d) camera2_autofocus_pane_cp_g2

0x4b39,	// (0x000638a5) camera2_autofocus_pane_cp_g3

0x4b41,	// (0x000638ad) camera2_autofocus_pane_cp_g4

0x4b49,	// (0x000638b5) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x0006e4ef) camera2_autofocus_pane_cp_g

0x521e,	// (0x00063f8a) popup_dialer_spcha_window

0xdd9d,	// (0x0006cb09) bg_popup_sub_pane_cp07

0xbd8e,	// (0x0006aafa) list_spcha_pane

0xbd96,	// (0x0006ab02) list_single_spcha_pane_ParamLimits

0xbd96,	// (0x0006ab02) list_single_spcha_pane

0xdd9d,	// (0x0006cb09) list_highlight_pane_cp06

0xbda7,	// (0x0006ab13) list_single_spcha_pane_t1

0xaeb4,	// (0x00069c20) popup_call2_audio_out_window_g4_ParamLimits

0xaeb4,	// (0x00069c20) popup_call2_audio_out_window_g4

0x9c67,	// (0x000689d3) main_imed2_pane

0xb49b,	// (0x0006a207) popup_imed_adjust2_window

0x3c9c,	// (0x00062a08) popup_imed_trans_window_ParamLimits

0x3c9c,	// (0x00062a08) popup_imed_trans_window

0xb7dc,	// (0x0006a548) popup_blid_sat_info2_window_t1

0xb7ea,	// (0x0006a556) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0006e41e) popup_blid_sat_info2_window_t

0x55d2,	// (0x0006433e) aid_size_cell_colour_35

0x55f2,	// (0x0006435e) aid_size_cell_colour_112

0x5612,	// (0x0006437e) aid_size_cell_effect

0xb46f,	// (0x0006a1db) bg_tb_trans_pane_cp02

0x2496,	// (0x00061202) heading_imed_pane

0x5632,	// (0x0006439e) listscroll_imed_pane

0xbdb5,	// (0x0006ab21) heading_imed_pane_g1

0xbdbd,	// (0x0006ab29) heading_imed_pane_t1

0xbdcb,	// (0x0006ab37) grid_imed_colour_35_pane_ParamLimits

0xbdcb,	// (0x0006ab37) grid_imed_colour_35_pane

0x563e,	// (0x000643aa) grid_imed_effect_pane

0xbde7,	// (0x0006ab53) list_imed_aspect_pane

0x5655,	// (0x000643c1) scroll_pane_cp027_ParamLimits

0x5655,	// (0x000643c1) scroll_pane_cp027

0x5666,	// (0x000643d2) cell_imed_effect_pane_ParamLimits

0x5666,	// (0x000643d2) cell_imed_effect_pane

0xbdef,	// (0x0006ab5b) cell_imed_colour_pane_ParamLimits

0xbdef,	// (0x0006ab5b) cell_imed_colour_pane

0xbe39,	// (0x0006aba5) cell_imed_colour_pane_g1_ParamLimits

0xbe39,	// (0x0006aba5) cell_imed_colour_pane_g1

0xbe4a,	// (0x0006abb6) hgihlgiht_grid_pane_cp016_ParamLimits

0xbe4a,	// (0x0006abb6) hgihlgiht_grid_pane_cp016

0x568b,	// (0x000643f7) cell_imed_effect_pane_g1

0x5693,	// (0x000643ff) grid_highlight_pane_cp017

0xbe5b,	// (0x0006abc7) list_imed_single_pane_ParamLimits

0xbe5b,	// (0x0006abc7) list_imed_single_pane

0xdd9d,	// (0x0006cb09) list_highlight_pane_cp07

0xbe6f,	// (0x0006abdb) list_imed_aspect_pane_comp1_t1

0xb46f,	// (0x0006a1db) bg_tb_trans_pane_cp05

0xbe91,	// (0x0006abfd) popup_imed_adjust2_window_g1

0xbeb8,	// (0x0006ac24) popup_imed_adjust2_window_t1

0xbed0,	// (0x0006ac3c) slider_imed_adjust_pane

0xbee4,	// (0x0006ac50) slider_imed_adjust_pane_g1

0xbef4,	// (0x0006ac60) slider_imed_adjust_pane_g2

0xbf04,	// (0x0006ac70) slider_imed_adjust_pane_g3

0xbf15,	// (0x0006ac81) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0006e55d) slider_imed_adjust_pane_g

0x569c,	// (0x00064408) aid_size_cell_clipart2

0x56a8,	// (0x00064414) grid_imed_clipart_pane

0xbf26,	// (0x0006ac92) scroll_pane_cp031

0x56b2,	// (0x0006441e) cell_imed_clipart_pane_ParamLimits

0x56b2,	// (0x0006441e) cell_imed_clipart_pane

0x56cf,	// (0x0006443b) cell_imed_clipart_pane_g1

0xdd9d,	// (0x0006cb09) grid_highlight_pane_cp014

0x537a,	// (0x000640e6) main_clock2_pane_g1_ParamLimits

0x537a,	// (0x000640e6) main_clock2_pane_g1

0x54c3,	// (0x0006422f) aid_call2_pane_cp10

0x54d5,	// (0x00064241) aid_call_pane_cp10

0x9f37,	// (0x00068ca3) popup_clock_analogue_window_cp10_g1

0x9f37,	// (0x00068ca3) popup_clock_analogue_window_cp10_g2

0x54e7,	// (0x00064253) popup_clock_analogue_window_cp10_g3

0x54e7,	// (0x00064253) popup_clock_analogue_window_cp10_g4

0x9f37,	// (0x00068ca3) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0006e54b) popup_clock_analogue_window_cp10_g

0x54fd,	// (0x00064269) popup_clock_analogue_window_cp10_t1

0x552e,	// (0x0006429a) clock_digital_number_pane_cp10_ParamLimits

0x552e,	// (0x0006429a) clock_digital_number_pane_cp10

0x5548,	// (0x000642b4) clock_digital_number_pane_cp11_ParamLimits

0x5548,	// (0x000642b4) clock_digital_number_pane_cp11

0x5562,	// (0x000642ce) clock_digital_number_pane_cp12_ParamLimits

0x5562,	// (0x000642ce) clock_digital_number_pane_cp12

0x557c,	// (0x000642e8) clock_digital_number_pane_cp13_ParamLimits

0x557c,	// (0x000642e8) clock_digital_number_pane_cp13

0x5596,	// (0x00064302) clock_digital_separator_pane_cp10_ParamLimits

0x5596,	// (0x00064302) clock_digital_separator_pane_cp10

0x55b0,	// (0x0006431c) popup_clock_digital_window_cp02_t1_ParamLimits

0x55b0,	// (0x0006431c) popup_clock_digital_window_cp02_t1

0xe9fd,	// (0x0006d769) clock_digital_number_pane_cp10_g1

0xe9fd,	// (0x0006d769) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x0006e566) clock_digital_number_pane_cp10_g

0xe9fd,	// (0x0006d769) clock_digital_separator_pane_cp10_g1

0xe9fd,	// (0x0006d769) clock_digital_separator_pane_g2_cp10

0x9fd2,	// (0x00068d3e) navi_pane_vded_g4

0x9fdb,	// (0x00068d47) navi_pane_vded_g5

0x9fe4,	// (0x00068d50) navi_pane_vded_t1

0x9c67,	// (0x000689d3) main_vded_pane

0x56d8,	// (0x00064444) main_vded_pane_g1

0x56e4,	// (0x00064450) main_vded_pane_g2

0x56f0,	// (0x0006445c) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0006e56b) main_vded_pane_g

0x56fc,	// (0x00064468) main_vded_pane_t1

0x570a,	// (0x00064476) main_vded_pane_t2

0x0001,

0xf806,	// (0x0006e572) main_vded_pane_t

0x5718,	// (0x00064484) vded_slider_pane

0x5722,	// (0x0006448e) vded_video_pane

0xbf2e,	// (0x0006ac9a) vded_video_pane_g1

0x572e,	// (0x0006449a) vded_video_pane_g2

0xb9a4,	// (0x0006a710) vded_video_pane_g3

0x0002,

0xf80b,	// (0x0006e577) vded_video_pane_g

0xbf38,	// (0x0006aca4) vded_slider_pane_g1

0xb6ad,	// (0x0006a419) vded_slider_pane_g2

0xbf41,	// (0x0006acad) vded_slider_pane_g3

0xbf4a,	// (0x0006acb6) vded_slider_pane_g4

0xbf53,	// (0x0006acbf) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0006e57e) vded_slider_pane_g

0x510e,	// (0x00063e7a) mup3_rocker_pane_ParamLimits

0x510e,	// (0x00063e7a) mup3_rocker_pane

0x5737,	// (0x000644a3) mup3_control_keys_pane_g1

0x573f,	// (0x000644ab) mup3_control_keys_pane_g2

0x5747,	// (0x000644b3) mup3_control_keys_pane_g3

0x574f,	// (0x000644bb) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0006e589) mup3_control_keys_pane_g

0x095f,	// (0x0005f6cb) popup_toolbar2_fixed_window_cp01_ParamLimits

0x095f,	// (0x0005f6cb) popup_toolbar2_fixed_window_cp01

0x5144,	// (0x00063eb0) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5144,	// (0x00063eb0) popup_toolbar2_fixed_window_cp02

0xa7f3,	// (0x0006955f) popup_call2_audio_second_window_t4_ParamLimits

0xa7f3,	// (0x0006955f) popup_call2_audio_second_window_t4

0xad21,	// (0x00069a8d) popup_call2_audio_first_window_t6_ParamLimits

0xad21,	// (0x00069a8d) popup_call2_audio_first_window_t6

0xafb7,	// (0x00069d23) popup_call2_audio_out_window_t6_ParamLimits

0xafb7,	// (0x00069d23) popup_call2_audio_out_window_t6

0x9c67,	// (0x000689d3) main_vitu_pane

0x575f,	// (0x000644cb) aid_size_cell_itu_ParamLimits

0x575f,	// (0x000644cb) aid_size_cell_itu

0xdff8,	// (0x0006cd64) bg_popup_window_pane_cp08_ParamLimits

0xdff8,	// (0x0006cd64) bg_popup_window_pane_cp08

0x5775,	// (0x000644e1) field_vitu_entry_pane_ParamLimits

0x5775,	// (0x000644e1) field_vitu_entry_pane

0x578c,	// (0x000644f8) grid_vitu_function_pane_ParamLimits

0x578c,	// (0x000644f8) grid_vitu_function_pane

0x57a7,	// (0x00064513) grid_vitu_itu_pane_ParamLimits

0x57a7,	// (0x00064513) grid_vitu_itu_pane

0x57c3,	// (0x0006452f) cell_vitu_itu_pane_ParamLimits

0x57c3,	// (0x0006452f) cell_vitu_itu_pane

0x57e9,	// (0x00064555) cell_vitu_function_pane_ParamLimits

0x57e9,	// (0x00064555) cell_vitu_function_pane

0xdff8,	// (0x0006cd64) bg_popup_sub_pane_cp08_ParamLimits

0xdff8,	// (0x0006cd64) bg_popup_sub_pane_cp08

0x5804,	// (0x00064570) field_vitu_entry_pane_t1_ParamLimits

0x5804,	// (0x00064570) field_vitu_entry_pane_t1

0xbf74,	// (0x0006ace0) field_vitu_entry_pane_t2_ParamLimits

0xbf74,	// (0x0006ace0) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x0006e597) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x0006e597) field_vitu_entry_pane_t

0xbf91,	// (0x0006acfd) bg_button_pane_cp05_ParamLimits

0xbf91,	// (0x0006acfd) bg_button_pane_cp05

0x5824,	// (0x00064590) cell_vitu_itu_pane_g1

0x583c,	// (0x000645a8) cell_vitu_itu_pane_t1_ParamLimits

0x583c,	// (0x000645a8) cell_vitu_itu_pane_t1

0x584e,	// (0x000645ba) cell_vitu_itu_pane_t2_ParamLimits

0x584e,	// (0x000645ba) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0006e59c) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0006e59c) cell_vitu_itu_pane_t

0xbf9f,	// (0x0006ad0b) bg_button_pane_cp07

0x5883,	// (0x000645ef) cell_vitu_function_pane_g1

0x9c71,	// (0x000689dd) main_calc_pane_g1

0x079a,	// (0x0005f506) aid_visual_content_pane

0x9c67,	// (0x000689d3) main_vradio_pane

0x588c,	// (0x000645f8) main_vradio_pane_g1_ParamLimits

0x588c,	// (0x000645f8) main_vradio_pane_g1

0xbfa9,	// (0x0006ad15) main_vradio_pane_g2_ParamLimits

0xbfa9,	// (0x0006ad15) main_vradio_pane_g2

0x0001,

0xf837,	// (0x0006e5a3) main_vradio_pane_g_ParamLimits

0xf837,	// (0x0006e5a3) main_vradio_pane_g

0x58a3,	// (0x0006460f) main_vradio_pane_t1_ParamLimits

0x58a3,	// (0x0006460f) main_vradio_pane_t1

0x58b8,	// (0x00064624) main_vradio_pane_t2_ParamLimits

0x58b8,	// (0x00064624) main_vradio_pane_t2

0xbfb6,	// (0x0006ad22) main_vradio_pane_t3_ParamLimits

0xbfb6,	// (0x0006ad22) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x0006e5a8) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x0006e5a8) main_vradio_pane_t

0x58cd,	// (0x00064639) vradio_rocker_control_pane_ParamLimits

0x58cd,	// (0x00064639) vradio_rocker_control_pane

0x58df,	// (0x0006464b) vradio_station_info_pane_ParamLimits

0x58df,	// (0x0006464b) vradio_station_info_pane

0xbfca,	// (0x0006ad36) vradio_frequency_info_pane_ParamLimits

0xbfca,	// (0x0006ad36) vradio_frequency_info_pane

0xb9a4,	// (0x0006a710) vradio_station_info_pane_g1

0xbfd9,	// (0x0006ad45) vradio_station_info_pane_t1_ParamLimits

0xbfd9,	// (0x0006ad45) vradio_station_info_pane_t1

0xbffb,	// (0x0006ad67) vradio_station_info_pane_t2_ParamLimits

0xbffb,	// (0x0006ad67) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0006e5af) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0006e5af) vradio_station_info_pane_t

0xc00d,	// (0x0006ad79) vradio_tuning_pane

0xc015,	// (0x0006ad81) vradio_rocker_control_pane_g1

0xc01d,	// (0x0006ad89) vradio_rocker_control_pane_g2

0xc025,	// (0x0006ad91) vradio_rocker_control_pane_g3

0xc02d,	// (0x0006ad99) vradio_rocker_control_pane_g4

0xc035,	// (0x0006ada1) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x0006e5b4) vradio_rocker_control_pane_g

0x58ef,	// (0x0006465b) vradio_frequency_info_pane_g1

0xc03d,	// (0x0006ada9) vradio_frequency_info_pane_t1_ParamLimits

0xc03d,	// (0x0006ada9) vradio_frequency_info_pane_t1

0x58f9,	// (0x00064665) vradio_tuning_pane_g1

0x5904,	// (0x00064670) vradio_tuning_pane_t1

0x9c16,	// (0x00068982) area_side_right_pane_ParamLimits

0x9c16,	// (0x00068982) area_side_right_pane

0xb436,	// (0x0006a1a2) status_small_pane_g1

0xb43e,	// (0x0006a1aa) status_small_pane_g2

0xb447,	// (0x0006a1b3) status_small_pane_g3

0xb450,	// (0x0006a1bc) status_small_pane_g4

0x0003,

0xf608,	// (0x0006e374) status_small_pane_g

0xb459,	// (0x0006a1c5) status_small_pane_t1

0x9c67,	// (0x000689d3) main_video3_pane

0xc051,	// (0x0006adbd) cams_zoom_vslider_pane

0xc059,	// (0x0006adc5) image3_wide_pane_ParamLimits

0xc059,	// (0x0006adc5) image3_wide_pane

0xc073,	// (0x0006addf) image3_wide_small_pane

0xc07f,	// (0x0006adeb) main_video3_pane_g1_ParamLimits

0xc07f,	// (0x0006adeb) main_video3_pane_g1

0xc09b,	// (0x0006ae07) main_video3_pane_g2_ParamLimits

0xc09b,	// (0x0006ae07) main_video3_pane_g2

0x0001,

0xf853,	// (0x0006e5bf) main_video3_pane_g_ParamLimits

0xf853,	// (0x0006e5bf) main_video3_pane_g

0xc0b7,	// (0x0006ae23) main_video3_pane_t1_ParamLimits

0xc0b7,	// (0x0006ae23) main_video3_pane_t1

0xc0e2,	// (0x0006ae4e) main_video3_pane_t2_ParamLimits

0xc0e2,	// (0x0006ae4e) main_video3_pane_t2

0xc10f,	// (0x0006ae7b) main_video3_pane_t3_ParamLimits

0xc10f,	// (0x0006ae7b) main_video3_pane_t3

0x0002,

0xf858,	// (0x0006e5c4) main_video3_pane_t_ParamLimits

0xf858,	// (0x0006e5c4) main_video3_pane_t

0xc13c,	// (0x0006aea8) cams_zoom_vslider_pane_g1

0xc145,	// (0x0006aeb1) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0006e5cb) cams_zoom_vslider_pane_g

0xc14d,	// (0x0006aeb9) small_slider_vertical_pane

0xb9a4,	// (0x0006a710) small_slider_vertical_pane_g1

0xb9a4,	// (0x0006a710) small_slider_vertical_pane_g2

0xc155,	// (0x0006aec1) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x0006e5d0) small_slider_vertical_pane_g

0x9c67,	// (0x000689d3) main_hwr_training_pane

0xc15e,	// (0x0006aeca) hwr_training_instruct_pane_ParamLimits

0xc15e,	// (0x0006aeca) hwr_training_instruct_pane

0x5913,	// (0x0006467f) hwr_training_navi_pane_ParamLimits

0x5913,	// (0x0006467f) hwr_training_navi_pane

0x5932,	// (0x0006469e) hwr_training_write_pane_ParamLimits

0x5932,	// (0x0006469e) hwr_training_write_pane

0xdd9d,	// (0x0006cb09) bg_frame_shadow_pane

0xc195,	// (0x0006af01) hwr_training_write_pane_g1

0xc19d,	// (0x0006af09) hwr_training_write_pane_g2

0xc1a5,	// (0x0006af11) hwr_training_write_pane_g3

0xc1ad,	// (0x0006af19) hwr_training_write_pane_g4

0xc1b5,	// (0x0006af21) hwr_training_write_pane_g5

0xc1bd,	// (0x0006af29) hwr_training_write_pane_g6

0xc1c5,	// (0x0006af31) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x0006e5d7) hwr_training_write_pane_g

0xc1cd,	// (0x0006af39) hwr_training_navi_pane_g1_ParamLimits

0xc1cd,	// (0x0006af39) hwr_training_navi_pane_g1

0xc1df,	// (0x0006af4b) hwr_training_navi_pane_g2_ParamLimits

0xc1df,	// (0x0006af4b) hwr_training_navi_pane_g2

0xc1f1,	// (0x0006af5d) hwr_training_navi_pane_g3_ParamLimits

0xc1f1,	// (0x0006af5d) hwr_training_navi_pane_g3

0xc201,	// (0x0006af6d) hwr_training_navi_pane_g4_ParamLimits

0xc201,	// (0x0006af6d) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0006e5e6) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0006e5e6) hwr_training_navi_pane_g

0xc20e,	// (0x0006af7a) hwr_training_navi_pane_t1

0x597a,	// (0x000646e6) list_single_hwr_training_instruct_pane_ParamLimits

0x597a,	// (0x000646e6) list_single_hwr_training_instruct_pane

0xc21c,	// (0x0006af88) list_single_hwr_training_instruct_pane_t1

0xb8e4,	// (0x0006a650) bg_frame_shadow_pane_g1

0xc22b,	// (0x0006af97) bg_frame_shadow_pane_g2

0xc233,	// (0x0006af9f) bg_frame_shadow_pane_g3

0xc23b,	// (0x0006afa7) bg_frame_shadow_pane_g4

0xc243,	// (0x0006afaf) bg_frame_shadow_pane_g5

0xc24b,	// (0x0006afb7) bg_frame_shadow_pane_g6

0xc253,	// (0x0006afbf) bg_frame_shadow_pane_g7

0xeba3,	// (0x0006d90f) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x0006e5f1) bg_frame_shadow_pane_g

0x9c67,	// (0x000689d3) main_video_tele_dialer_pane

0x5996,	// (0x00064702) aid_size_cell_video_keypad_ParamLimits

0x5996,	// (0x00064702) aid_size_cell_video_keypad

0x59b0,	// (0x0006471c) grid_video_dialer_keypad_pane_ParamLimits

0x59b0,	// (0x0006471c) grid_video_dialer_keypad_pane

0x59fc,	// (0x00064768) video_down_pane_cp_ParamLimits

0x59fc,	// (0x00064768) video_down_pane_cp

0x5a2c,	// (0x00064798) cell_video_dialer_keypad_pane_ParamLimits

0x5a2c,	// (0x00064798) cell_video_dialer_keypad_pane

0xc25b,	// (0x0006afc7) bg_button_pane_cp08_ParamLimits

0xc25b,	// (0x0006afc7) bg_button_pane_cp08

0x5a52,	// (0x000647be) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5a52,	// (0x000647be) cell_video_dialer_keypad_pane_g1

0x50f8,	// (0x00063e64) mup3_rocker2_pane_ParamLimits

0x50f8,	// (0x00063e64) mup3_rocker2_pane

0xb9a4,	// (0x0006a710) mup3_rocker2_pane_g1

0x3b69,	// (0x000628d5) main_dialer2_pane

0x9c67,	// (0x000689d3) main_mp4_pane

0xc26f,	// (0x0006afdb) main_mp4_pane_g1_ParamLimits

0xc26f,	// (0x0006afdb) main_mp4_pane_g1

0xc26f,	// (0x0006afdb) main_mp4_pane_g2_ParamLimits

0xc26f,	// (0x0006afdb) main_mp4_pane_g2

0x5a8d,	// (0x000647f9) main_mp4_pane_g3_ParamLimits

0x5a8d,	// (0x000647f9) main_mp4_pane_g3

0xc27d,	// (0x0006afe9) main_mp4_pane_g4_ParamLimits

0xc27d,	// (0x0006afe9) main_mp4_pane_g4

0xc2a5,	// (0x0006b011) main_mp4_pane_g5_ParamLimits

0xc2a5,	// (0x0006b011) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0006e611) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0006e611) main_mp4_pane_g

0xc2f5,	// (0x0006b061) main_mp4_pane_t1_ParamLimits

0xc2f5,	// (0x0006b061) main_mp4_pane_t1

0xc351,	// (0x0006b0bd) main_mp4_pane_t2_ParamLimits

0xc351,	// (0x0006b0bd) main_mp4_pane_t2

0xc3a3,	// (0x0006b10f) main_mp4_pane_t3_ParamLimits

0xc3a3,	// (0x0006b10f) main_mp4_pane_t3

0xc3c3,	// (0x0006b12f) main_mp4_pane_t4_ParamLimits

0xc3c3,	// (0x0006b12f) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0006e61e) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0006e61e) main_mp4_pane_t

0xc403,	// (0x0006b16f) mp4_progress_pane_ParamLimits

0xc403,	// (0x0006b16f) mp4_progress_pane

0xc44d,	// (0x0006b1b9) mp4_rocker_pane_ParamLimits

0xc44d,	// (0x0006b1b9) mp4_rocker_pane

0xc477,	// (0x0006b1e3) mp4_progress_pane_t1

0xc490,	// (0x0006b1fc) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x0006e627) mp4_progress_pane_t

0xc4a9,	// (0x0006b215) mup_progress_pane_cp04

0xc4b5,	// (0x0006b221) mp4_rocker_pane_g1

0x5ad7,	// (0x00064843) aid_cell_size_keypad2_ParamLimits

0x5ad7,	// (0x00064843) aid_cell_size_keypad2

0x5aed,	// (0x00064859) dialer2_ne_pane_ParamLimits

0x5aed,	// (0x00064859) dialer2_ne_pane

0x5b05,	// (0x00064871) grid_dialer2_keypad_pane_ParamLimits

0x5b05,	// (0x00064871) grid_dialer2_keypad_pane

0xb783,	// (0x0006a4ef) bg_popup_call_pane_cp07_ParamLimits

0xb783,	// (0x0006a4ef) bg_popup_call_pane_cp07

0x5b21,	// (0x0006488d) dialer2_ne_pane_t1_ParamLimits

0x5b21,	// (0x0006488d) dialer2_ne_pane_t1

0x5b61,	// (0x000648cd) cell_dialer2_keypad_pane_ParamLimits

0x5b61,	// (0x000648cd) cell_dialer2_keypad_pane

0xc4d1,	// (0x0006b23d) bg_button_pane_pane_cp04_ParamLimits

0xc4d1,	// (0x0006b23d) bg_button_pane_pane_cp04

0x5b87,	// (0x000648f3) cell_dialer2_keypad_pane_g1_ParamLimits

0x5b87,	// (0x000648f3) cell_dialer2_keypad_pane_g1

0x1651,	// (0x000603bd) aid_placing_vt_set_content_ParamLimits

0x1651,	// (0x000603bd) aid_placing_vt_set_content

0x1675,	// (0x000603e1) aid_placing_vt_set_title_ParamLimits

0x1675,	// (0x000603e1) aid_placing_vt_set_title

0x9c67,	// (0x000689d3) main_image3_pane

0x5c4d,	// (0x000649b9) area_side_right_pane_cp01_ParamLimits

0x5c4d,	// (0x000649b9) area_side_right_pane_cp01

0xc26f,	// (0x0006afdb) main_image3_pane_g1_ParamLimits

0xc26f,	// (0x0006afdb) main_image3_pane_g1

0x5c66,	// (0x000649d2) main_image3_pane_g2_ParamLimits

0x5c66,	// (0x000649d2) main_image3_pane_g2

0x5c8e,	// (0x000649fa) main_image3_pane_g3_ParamLimits

0x5c8e,	// (0x000649fa) main_image3_pane_g3

0x5cb8,	// (0x00064a24) main_image3_pane_g4_ParamLimits

0x5cb8,	// (0x00064a24) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x0006e636) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x0006e636) main_image3_pane_g

0x5ce2,	// (0x00064a4e) main_image3_pane_t1_ParamLimits

0x5ce2,	// (0x00064a4e) main_image3_pane_t1

0x5d3a,	// (0x00064aa6) main_image3_pane_t2_ParamLimits

0x5d3a,	// (0x00064aa6) main_image3_pane_t2

0x5d8c,	// (0x00064af8) main_image3_pane_t3_ParamLimits

0x5d8c,	// (0x00064af8) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x0006e63f) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x0006e63f) main_image3_pane_t

0xdff8,	// (0x0006cd64) grid_sctrl_middle_pane_cp01_ParamLimits

0xdff8,	// (0x0006cd64) grid_sctrl_middle_pane_cp01

0x5e14,	// (0x00064b80) cell_sctrl_middle_pane_cp01_ParamLimits

0x5e14,	// (0x00064b80) cell_sctrl_middle_pane_cp01

0x5e31,	// (0x00064b9d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5e31,	// (0x00064b9d) cell_sctrl_middle_pane_cp01_g1

0x9c67,	// (0x000689d3) main_call4_pane

0x5e46,	// (0x00064bb2) aid_size_button_call4_ParamLimits

0x5e46,	// (0x00064bb2) aid_size_button_call4

0x5e79,	// (0x00064be5) call4_windows_pane_ParamLimits

0x5e79,	// (0x00064be5) call4_windows_pane

0x5e9b,	// (0x00064c07) grid_call4_button_pane_ParamLimits

0x5e9b,	// (0x00064c07) grid_call4_button_pane

0xc511,	// (0x0006b27d) call4_windows_conf_pane

0x5ec6,	// (0x00064c32) popup_call4_audio_first_window_ParamLimits

0x5ec6,	// (0x00064c32) popup_call4_audio_first_window

0x5ef2,	// (0x00064c5e) popup_call4_audio_second_window_ParamLimits

0x5ef2,	// (0x00064c5e) popup_call4_audio_second_window

0xc54e,	// (0x0006b2ba) popup_call4_audio_wait_window_ParamLimits

0xc54e,	// (0x0006b2ba) popup_call4_audio_wait_window

0x5f08,	// (0x00064c74) cell_call4_button_pane_ParamLimits

0x5f08,	// (0x00064c74) cell_call4_button_pane

0x5f2f,	// (0x00064c9b) bg_button_pane_cp09_ParamLimits

0x5f2f,	// (0x00064c9b) bg_button_pane_cp09

0x5f3b,	// (0x00064ca7) cell_call4_button_pane_g1_ParamLimits

0x5f3b,	// (0x00064ca7) cell_call4_button_pane_g1

0x5f61,	// (0x00064ccd) cell_call4_button_pane_t1_ParamLimits

0x5f61,	// (0x00064ccd) cell_call4_button_pane_t1

0xc596,	// (0x0006b302) popup_call4_audio_conf_window_ParamLimits

0xc596,	// (0x0006b302) popup_call4_audio_conf_window

0x515a,	// (0x00063ec6) mup3_progress_pane_t1_ParamLimits

0x5178,	// (0x00063ee4) mup3_progress_pane_t2_ParamLimits

0xbc4f,	// (0x0006a9bb) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0006e518) mup3_progress_pane_t_ParamLimits

0xbc6c,	// (0x0006a9d8) mup_progress_pane_cp03_ParamLimits

0x5757,	// (0x000644c3) mup3_control_keys_pane_g4_copy1

0xc431,	// (0x0006b19d) mp4_rocker2_pane_ParamLimits

0xc431,	// (0x0006b19d) mp4_rocker2_pane

0xc5b0,	// (0x0006b31c) mp4_rocker2_pane_g1

0xc5b8,	// (0x0006b324) mp4_rocker2_pane_g2

0xc5c0,	// (0x0006b32c) mp4_rocker2_pane_g3

0xc5c8,	// (0x0006b334) mp4_rocker2_pane_g4

0xc5d0,	// (0x0006b33c) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x0006e648) mp4_rocker2_pane_g

0x9c67,	// (0x000689d3) main_camera4_pane

0x9c67,	// (0x000689d3) main_video4_pane

0x59ca,	// (0x00064736) main_video_tele_dialer_pane_t1_ParamLimits

0x59ca,	// (0x00064736) main_video_tele_dialer_pane_t1

0x59e3,	// (0x0006474f) main_video_tele_dialer_pane_t2_ParamLimits

0x59e3,	// (0x0006474f) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x0006e602) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x0006e602) main_video_tele_dialer_pane_t

0x5f9f,	// (0x00064d0b) cam4_autofocus_pane_ParamLimits

0x5f9f,	// (0x00064d0b) cam4_autofocus_pane

0x5fb5,	// (0x00064d21) cam4_image_uncrop_pane_ParamLimits

0x5fb5,	// (0x00064d21) cam4_image_uncrop_pane

0x5fce,	// (0x00064d3a) cam4_indicators_pane_ParamLimits

0x5fce,	// (0x00064d3a) cam4_indicators_pane

0x5ffd,	// (0x00064d69) main_camera4_pane_g1_ParamLimits

0x5ffd,	// (0x00064d69) main_camera4_pane_g1

0x600f,	// (0x00064d7b) main_camera4_pane_g2_ParamLimits

0x600f,	// (0x00064d7b) main_camera4_pane_g2

0x6022,	// (0x00064d8e) main_camera4_pane_g3_ParamLimits

0x6022,	// (0x00064d8e) main_camera4_pane_g3

0x6035,	// (0x00064da1) main_camera4_pane_g4_ParamLimits

0x6035,	// (0x00064da1) main_camera4_pane_g4

0x6048,	// (0x00064db4) main_camera4_pane_g5_ParamLimits

0x6048,	// (0x00064db4) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x0006e653) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x0006e653) main_camera4_pane_g

0x606c,	// (0x00064dd8) main_camera4_pane_t1_ParamLimits

0x606c,	// (0x00064dd8) main_camera4_pane_t1

0xc60a,	// (0x0006b376) bg_tb_trans_pane_cp06

0xc620,	// (0x0006b38c) cam4_indicators_pane_g1

0xc631,	// (0x0006b39d) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0006e66e) cam4_indicators_pane_g

0xc649,	// (0x0006b3b5) cam4_indicators_pane_t1

0x60d0,	// (0x00064e3c) main_video4_pane_g1_ParamLimits

0x60d0,	// (0x00064e3c) main_video4_pane_g1

0x60df,	// (0x00064e4b) main_video4_pane_g2_ParamLimits

0x60df,	// (0x00064e4b) main_video4_pane_g2

0x60ee,	// (0x00064e5a) main_video4_pane_g3_ParamLimits

0x60ee,	// (0x00064e5a) main_video4_pane_g3

0x60fd,	// (0x00064e69) main_video4_pane_g4_ParamLimits

0x60fd,	// (0x00064e69) main_video4_pane_g4

0x0004,

0xf909,	// (0x0006e675) main_video4_pane_g_ParamLimits

0xf909,	// (0x0006e675) main_video4_pane_g

0x611b,	// (0x00064e87) vid4_indicators_pane_ParamLimits

0x611b,	// (0x00064e87) vid4_indicators_pane

0x6149,	// (0x00064eb5) video4_image_uncrop_cif_pane_ParamLimits

0x6149,	// (0x00064eb5) video4_image_uncrop_cif_pane

0x6163,	// (0x00064ecf) video4_image_uncrop_nhd_pane_ParamLimits

0x6163,	// (0x00064ecf) video4_image_uncrop_nhd_pane

0x5fb5,	// (0x00064d21) video4_image_uncrop_vga_pane_ParamLimits

0x5fb5,	// (0x00064d21) video4_image_uncrop_vga_pane

0x9c59,	// (0x000689c5) bg_tb_trans_pane_cp07

0xc677,	// (0x0006b3e3) vid4_indicators_pane_g1

0xc68d,	// (0x0006b3f9) vid4_indicators_pane_g2

0xc6a1,	// (0x0006b40d) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x0006e680) vid4_indicators_pane_g

0xc6d2,	// (0x0006b43e) vid4_indicators_pane_t1

0x6179,	// (0x00064ee5) cam4_autofocus_pane_g1

0x6181,	// (0x00064eed) cam4_autofocus_pane_g2

0x6189,	// (0x00064ef5) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0006e68b) cam4_autofocus_pane_g

0x6191,	// (0x00064efd) cam4_autofocus_pane_g3_copy1

0x5a10,	// (0x0006477c) video_down_pane_cp_t1

0x5a1e,	// (0x0006478a) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x0006e607) video_down_pane_cp_t

0x9c59,	// (0x000689c5) popup_vitu2_window_ParamLimits

0x9c59,	// (0x000689c5) popup_vitu2_window

0x6199,	// (0x00064f05) aid_size_cell2_itu2_ParamLimits

0x6199,	// (0x00064f05) aid_size_cell2_itu2

0x61bf,	// (0x00064f2b) aid_size_cell_itu2_ParamLimits

0x61bf,	// (0x00064f2b) aid_size_cell_itu2

0x621d,	// (0x00064f89) bg_popup_window_pane_cp09_ParamLimits

0x621d,	// (0x00064f89) bg_popup_window_pane_cp09

0x622b,	// (0x00064f97) field_vitu2_entry_pane_ParamLimits

0x622b,	// (0x00064f97) field_vitu2_entry_pane

0x6253,	// (0x00064fbf) grid_vitu2_function_pane_ParamLimits

0x6253,	// (0x00064fbf) grid_vitu2_function_pane

0x62a4,	// (0x00065010) grid_vitu2_itu_pane_ParamLimits

0x62a4,	// (0x00065010) grid_vitu2_itu_pane

0x632f,	// (0x0006509b) cell_vitu2_itu_pane_ParamLimits

0x632f,	// (0x0006509b) cell_vitu2_itu_pane

0x6355,	// (0x000650c1) cell_vitu2_function_pane_ParamLimits

0x6355,	// (0x000650c1) cell_vitu2_function_pane

0xc6e9,	// (0x0006b455) bg_popup_call_pane_cp08_ParamLimits

0xc6e9,	// (0x0006b455) bg_popup_call_pane_cp08

0xc702,	// (0x0006b46e) field_vitu2_entry_pane_g1

0xc70e,	// (0x0006b47a) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x0006e692) field_vitu2_entry_pane_g

0x6399,	// (0x00065105) field_vitu2_entry_pane_t1_ParamLimits

0x6399,	// (0x00065105) field_vitu2_entry_pane_t1

0x63c8,	// (0x00065134) field_vitu2_entry_pane_t2_ParamLimits

0x63c8,	// (0x00065134) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0006e699) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0006e699) field_vitu2_entry_pane_t

0x63e5,	// (0x00065151) bg_button_pane_cp010_ParamLimits

0x63e5,	// (0x00065151) bg_button_pane_cp010

0x63f3,	// (0x0006515f) cell_vitu2_itu_pane_g1

0x6411,	// (0x0006517d) cell_vitu2_itu_pane_t1_ParamLimits

0x6411,	// (0x0006517d) cell_vitu2_itu_pane_t1

0x0682,	// (0x0005f3ee) cell_vitu2_itu_pane_t2_ParamLimits

0x0682,	// (0x0005f3ee) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x0006e6a3) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x0006e6a3) cell_vitu2_itu_pane_t

0x9c59,	// (0x000689c5) bg_button_pane_cp011

0x6477,	// (0x000651e3) cell_vitu2_function_pane_g1

0x9c67,	// (0x000689d3) main_myfav_hc_pane

0x5ddc,	// (0x00064b48) popup_image3_note_pane_ParamLimits

0x5ddc,	// (0x00064b48) popup_image3_note_pane

0x5df8,	// (0x00064b64) popup_image3_tool_bar_pane_ParamLimits

0x5df8,	// (0x00064b64) popup_image3_tool_bar_pane

0x0706,	// (0x0005f472) cell_vitu2_itu_pane_t3_ParamLimits

0x0706,	// (0x0005f472) cell_vitu2_itu_pane_t3

0xdd9d,	// (0x0006cb09) bg_popup_trans_pane

0xc730,	// (0x0006b49c) grid_image3_tool_bar_pane

0xc73a,	// (0x0006b4a6) bg_popup_trans_pane_g1

0xefa2,	// (0x0006dd0e) bg_popup_trans_pane_g2

0xc742,	// (0x0006b4ae) bg_popup_trans_pane_g3

0xc74a,	// (0x0006b4b6) bg_popup_trans_pane_g4

0xc752,	// (0x0006b4be) bg_popup_trans_pane_g5

0xc75a,	// (0x0006b4c6) bg_popup_trans_pane_g6

0xc762,	// (0x0006b4ce) bg_popup_trans_pane_g7

0xc76a,	// (0x0006b4d6) bg_popup_trans_pane_g8

0xef82,	// (0x0006dcee) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0006e6aa) bg_popup_trans_pane_g

0xc772,	// (0x0006b4de) cell_image3_tool_bar_pane_ParamLimits

0xc772,	// (0x0006b4de) cell_image3_tool_bar_pane

0xb9a4,	// (0x0006a710) cell_image3_tool_bar_pane_g1

0xdd9d,	// (0x0006cb09) bg_popup_trans_pane_cp1

0xc788,	// (0x0006b4f4) popup_image3_note_pane_t1

0xc796,	// (0x0006b502) popup_image3_note_pane_t2

0xc7a4,	// (0x0006b510) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x0006e6bd) popup_image3_note_pane_t

0xc7b4,	// (0x0006b520) popup_image3_note_pane_t3_copy1

0x648b,	// (0x000651f7) bg_myfav_hc_instruction_pane_ParamLimits

0x648b,	// (0x000651f7) bg_myfav_hc_instruction_pane

0x64a3,	// (0x0006520f) cell_myfav_contact_pane_ParamLimits

0x64a3,	// (0x0006520f) cell_myfav_contact_pane

0x64bf,	// (0x0006522b) cell_myfav_contact_pane_cp1_ParamLimits

0x64bf,	// (0x0006522b) cell_myfav_contact_pane_cp1

0x64d7,	// (0x00065243) cell_myfav_contact_pane_cp2_ParamLimits

0x64d7,	// (0x00065243) cell_myfav_contact_pane_cp2

0x64ef,	// (0x0006525b) cell_myfav_contact_pane_cp3_ParamLimits

0x64ef,	// (0x0006525b) cell_myfav_contact_pane_cp3

0x6506,	// (0x00065272) cell_myfav_contact_pane_cp4_ParamLimits

0x6506,	// (0x00065272) cell_myfav_contact_pane_cp4

0x651e,	// (0x0006528a) cell_myfav_contact_pane_cp5_ParamLimits

0x651e,	// (0x0006528a) cell_myfav_contact_pane_cp5

0x6532,	// (0x0006529e) cell_myfav_contact_pane_cp6_ParamLimits

0x6532,	// (0x0006529e) cell_myfav_contact_pane_cp6

0x6548,	// (0x000652b4) cell_myfav_contact_pane_cp7_ParamLimits

0x6548,	// (0x000652b4) cell_myfav_contact_pane_cp7

0xc7c2,	// (0x0006b52e) listscroll_gen_pane_cp05

0x6560,	// (0x000652cc) main_myfav_hc_pane_g1_ParamLimits

0x6560,	// (0x000652cc) main_myfav_hc_pane_g1

0x657a,	// (0x000652e6) main_myfav_hc_pane_g2_ParamLimits

0x657a,	// (0x000652e6) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x0006e6c4) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x0006e6c4) main_myfav_hc_pane_g

0x65ae,	// (0x0006531a) main_myfav_hc_pane_t1_ParamLimits

0x65ae,	// (0x0006531a) main_myfav_hc_pane_t1

0xc7cb,	// (0x0006b537) main_myfav_hc_pane_t2_ParamLimits

0xc7cb,	// (0x0006b537) main_myfav_hc_pane_t2

0xc7dd,	// (0x0006b549) main_myfav_hc_pane_t3_ParamLimits

0xc7dd,	// (0x0006b549) main_myfav_hc_pane_t3

0x65c5,	// (0x00065331) main_myfav_hc_pane_t4_ParamLimits

0x65c5,	// (0x00065331) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x0006e6cb) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x0006e6cb) main_myfav_hc_pane_t

0xb9a4,	// (0x0006a710) bg_myfav_hc_instruction_pane_g1

0xc7ef,	// (0x0006b55b) cell_myfav_contact_pane_g1_ParamLimits

0xc7ef,	// (0x0006b55b) cell_myfav_contact_pane_g1

0xc7ef,	// (0x0006b55b) cell_myfav_contact_pane_g2_ParamLimits

0xc7ef,	// (0x0006b55b) cell_myfav_contact_pane_g2

0xc7fb,	// (0x0006b567) cell_myfav_contact_pane_g3_ParamLimits

0xc7fb,	// (0x0006b567) cell_myfav_contact_pane_g3

0xbc39,	// (0x0006a9a5) cell_myfav_contact_pane_g4_ParamLimits

0xbc39,	// (0x0006a9a5) cell_myfav_contact_pane_g4

0xc808,	// (0x0006b574) cell_myfav_contact_pane_g5_ParamLimits

0xc808,	// (0x0006b574) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x0006e6d6) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x0006e6d6) cell_myfav_contact_pane_g

0x6594,	// (0x00065300) main_myfav_hc_pane_g3_ParamLimits

0x6594,	// (0x00065300) main_myfav_hc_pane_g3

0x08c0,	// (0x0005f62c) popup_adpt_find_window

0x65ef,	// (0x0006535b) afind_page_pane_ParamLimits

0x65ef,	// (0x0006535b) afind_page_pane

0x6604,	// (0x00065370) aid_size_cell_afind_ParamLimits

0x6604,	// (0x00065370) aid_size_cell_afind

0x6622,	// (0x0006538e) bg_popup_sub_pane_cp09_ParamLimits

0x6622,	// (0x0006538e) bg_popup_sub_pane_cp09

0x662f,	// (0x0006539b) find_pane_cp01_ParamLimits

0x662f,	// (0x0006539b) find_pane_cp01

0xc814,	// (0x0006b580) grid_afind_control_pane_ParamLimits

0xc814,	// (0x0006b580) grid_afind_control_pane

0x663c,	// (0x000653a8) grid_afind_pane_ParamLimits

0x663c,	// (0x000653a8) grid_afind_pane

0x665e,	// (0x000653ca) cell_afind_pane_ParamLimits

0x665e,	// (0x000653ca) cell_afind_pane

0xb9a4,	// (0x0006a710) afind_page_pane_g1

0x66c1,	// (0x0006542d) afind_page_pane_g2

0x66ca,	// (0x00065436) afind_page_pane_g3

0x0002,

0xf975,	// (0x0006e6e1) afind_page_pane_g

0x66d3,	// (0x0006543f) afind_page_pane_t1

0xc828,	// (0x0006b594) cell_afind_grid_control_pane_ParamLimits

0xc828,	// (0x0006b594) cell_afind_grid_control_pane

0xc4d1,	// (0x0006b23d) bg_button_pane_cp69_ParamLimits

0xc4d1,	// (0x0006b23d) bg_button_pane_cp69

0x66f3,	// (0x0006545f) cell_afind_pane_g1_ParamLimits

0x66f3,	// (0x0006545f) cell_afind_pane_g1

0x6700,	// (0x0006546c) cell_afind_pane_t1_ParamLimits

0x6700,	// (0x0006546c) cell_afind_pane_t1

0xecd9,	// (0x0006da45) bg_button_pane_cp72

0xc837,	// (0x0006b5a3) cell_afind_grid_control_pane_g1

0x3609,	// (0x00062375) aid_image_placing_area_ParamLimits

0x3609,	// (0x00062375) aid_image_placing_area

0xbf5c,	// (0x0006acc8) field_vitu_entry_pane_g1_ParamLimits

0xbf5c,	// (0x0006acc8) field_vitu_entry_pane_g1

0xbf68,	// (0x0006acd4) field_vitu_entry_pane_g2_ParamLimits

0xbf68,	// (0x0006acd4) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x0006e592) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x0006e592) field_vitu_entry_pane_g

0x5824,	// (0x00064590) cell_vitu_itu_pane_g1_ParamLimits

0x5866,	// (0x000645d2) cell_vitu_itu_pane_t3_ParamLimits

0x5866,	// (0x000645d2) cell_vitu_itu_pane_t3

0xc477,	// (0x0006b1e3) mp4_progress_pane_t1_ParamLimits

0xc490,	// (0x0006b1fc) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x0006e627) mp4_progress_pane_t_ParamLimits

0xc4a9,	// (0x0006b215) mup_progress_pane_cp04_ParamLimits

0x65d9,	// (0x00065345) main_myfav_hc_pane_t5_ParamLimits

0x65d9,	// (0x00065345) main_myfav_hc_pane_t5

0x9c06,	// (0x00068972) aid_zoom_text_primary

0x08c0,	// (0x0005f62c) popup_adpt_find_window_ParamLimits

0x9c59,	// (0x000689c5) main_cam_set_pane

0x5fe7,	// (0x00064d53) cam4_zoom_pane_ParamLimits

0x5fe7,	// (0x00064d53) cam4_zoom_pane

0x6712,	// (0x0006547e) main_cam_set_pane_g1_ParamLimits

0x6712,	// (0x0006547e) main_cam_set_pane_g1

0x6720,	// (0x0006548c) main_cam_set_pane_g2_ParamLimits

0x6720,	// (0x0006548c) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x0006e6e8) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x0006e6e8) main_cam_set_pane_g

0x6741,	// (0x000654ad) main_cam_set_pane_t1_ParamLimits

0x6741,	// (0x000654ad) main_cam_set_pane_t1

0x675c,	// (0x000654c8) main_cset_listscroll_pane_ParamLimits

0x675c,	// (0x000654c8) main_cset_listscroll_pane

0x6780,	// (0x000654ec) main_cset_slider_pane_ParamLimits

0x6780,	// (0x000654ec) main_cset_slider_pane

0xc848,	// (0x0006b5b4) main_cset_list_pane_ParamLimits

0xc848,	// (0x0006b5b4) main_cset_list_pane

0xc858,	// (0x0006b5c4) scroll_pane_cp028

0x67aa,	// (0x00065516) aid_area_touch_slider

0x67c6,	// (0x00065532) cset_slider_pane

0x67f0,	// (0x0006555c) main_cset_slider_pane_g1

0x6805,	// (0x00065571) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x0006e6ed) main_cset_slider_pane_g

0xc891,	// (0x0006b5fd) main_cset_slider_pane_t1

0x68c7,	// (0x00065633) main_cset_slider_pane_t2

0x68e1,	// (0x0006564d) main_cset_slider_pane_t3

0x68fb,	// (0x00065667) main_cset_slider_pane_t4

0x6915,	// (0x00065681) main_cset_slider_pane_t5

0x6933,	// (0x0006569f) main_cset_slider_pane_t6

0x694a,	// (0x000656b6) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x0006e712) main_cset_slider_pane_t

0x6a56,	// (0x000657c2) cset_list_set_pane_ParamLimits

0x6a56,	// (0x000657c2) cset_list_set_pane

0x6a6a,	// (0x000657d6) aid_position_infowindow_above

0x6a72,	// (0x000657de) aid_position_infowindow_below

0x6a7a,	// (0x000657e6) cset_list_set_pane_g1_ParamLimits

0x6a7a,	// (0x000657e6) cset_list_set_pane_g1

0x6a86,	// (0x000657f2) cset_list_set_pane_g3_ParamLimits

0x6a86,	// (0x000657f2) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0006e731) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0006e731) cset_list_set_pane_g

0x6a95,	// (0x00065801) cset_list_set_pane_t1_ParamLimits

0x6a95,	// (0x00065801) cset_list_set_pane_t1

0xdff8,	// (0x0006cd64) list_highlight_pane_cp021_ParamLimits

0xdff8,	// (0x0006cd64) list_highlight_pane_cp021

0xa15a,	// (0x00068ec6) cset_slider_pane_g1

0xa16c,	// (0x00068ed8) cset_slider_pane_g2

0xa163,	// (0x00068ecf) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x0006e736) cset_slider_pane_g

0xcd8a,	// (0x0006baf6) aid_area_touch_cam4_zoom

0xcd92,	// (0x0006bafe) cam4_zoom_cont_pane

0xcd9a,	// (0x0006bb06) cam4_zoom_pane_g1

0xcda2,	// (0x0006bb0e) cam4_zoom_pane_g2

0x6aaa,	// (0x00065816) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x0006e73d) cam4_zoom_pane_g

0xcdaa,	// (0x0006bb16) cam4_zoom_cont_pane_g1

0xcdb3,	// (0x0006bb1f) cam4_zoom_cont_pane_g2

0xcdbc,	// (0x0006bb28) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x0006e744) cam4_zoom_cont_pane_g

0x5e64,	// (0x00064bd0) call4_image_pane_ParamLimits

0x5e64,	// (0x00064bd0) call4_image_pane

0xc511,	// (0x0006b27d) call4_windows_conf_pane_ParamLimits

0xc52c,	// (0x0006b298) popup_call4_audio_in_window_ParamLimits

0xc52c,	// (0x0006b298) popup_call4_audio_in_window

0xdd9d,	// (0x0006cb09) bg_popup_call2_act_pane_cp02

0xc58e,	// (0x0006b2fa) call4_list_conf_pane

0xb9a4,	// (0x0006a710) call4_image_pane_g1

0xb9a4,	// (0x0006a710) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x0006e458) call4_image_pane_g

0xc931,	// (0x0006b69d) list_single_graphic_popup_conf4_pane_ParamLimits

0xc931,	// (0x0006b69d) list_single_graphic_popup_conf4_pane

0xdd9d,	// (0x0006cb09) list_highlight_pane_cp022

0xc946,	// (0x0006b6b2) list_single_graphic_popup_conf4_pane_g1

0x9e34,	// (0x00068ba0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x0006e74b) list_single_graphic_popup_conf4_pane_g

0xc94e,	// (0x0006b6ba) list_single_graphic_popup_conf4_pane_t1

0x178c,	// (0x000604f8) popup_vtel_slider_window_ParamLimits

0x178c,	// (0x000604f8) popup_vtel_slider_window

0xc4bf,	// (0x0006b22b) dialer2_ne_pane_t2_ParamLimits

0xc4bf,	// (0x0006b22b) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0006e62c) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0006e62c) dialer2_ne_pane_t

0xb783,	// (0x0006a4ef) bg_popup_sub_pane_cp010_ParamLimits

0xb783,	// (0x0006a4ef) bg_popup_sub_pane_cp010

0x6ab2,	// (0x0006581e) popup_vtel_slider_window_g1_ParamLimits

0x6ab2,	// (0x0006581e) popup_vtel_slider_window_g1

0x6ac5,	// (0x00065831) popup_vtel_slider_window_g2_ParamLimits

0x6ac5,	// (0x00065831) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x0006e750) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x0006e750) popup_vtel_slider_window_g

0x6b1b,	// (0x00065887) vtel_slider_pane_ParamLimits

0x6b1b,	// (0x00065887) vtel_slider_pane

0x6b3d,	// (0x000658a9) vtel_slider_pane_g1_ParamLimits

0x6b3d,	// (0x000658a9) vtel_slider_pane_g1

0x6b51,	// (0x000658bd) vtel_slider_pane_g2_ParamLimits

0x6b51,	// (0x000658bd) vtel_slider_pane_g2

0x6b69,	// (0x000658d5) vtel_slider_pane_g3_ParamLimits

0x6b69,	// (0x000658d5) vtel_slider_pane_g3

0x6b3d,	// (0x000658a9) vtel_slider_pane_g4_ParamLimits

0x6b3d,	// (0x000658a9) vtel_slider_pane_g4

0x6b7f,	// (0x000658eb) vtel_slider_pane_g5_ParamLimits

0x6b7f,	// (0x000658eb) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x0006e759) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x0006e759) vtel_slider_pane_g

0x9c67,	// (0x000689d3) main_gallery2_pane

0x61eb,	// (0x00064f57) aid_size_row_itut2_dropdow_list_ParamLimits

0x61eb,	// (0x00064f57) aid_size_row_itut2_dropdow_list

0x627b,	// (0x00064fe7) grid_vitu2_function_top_pane_ParamLimits

0x627b,	// (0x00064fe7) grid_vitu2_function_top_pane

0x62da,	// (0x00065046) popup_vitu2_dropdown_list_window_ParamLimits

0x62da,	// (0x00065046) popup_vitu2_dropdown_list_window

0x6303,	// (0x0006506f) popup_vitu2_match_list_window

0x6ba3,	// (0x0006590f) cell_vitu2_function_top_pane_ParamLimits

0x6ba3,	// (0x0006590f) cell_vitu2_function_top_pane

0x6bc3,	// (0x0006592f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6bc3,	// (0x0006592f) cell_vitu2_function_top_pane_cp01

0x6be1,	// (0x0006594d) cell_vitu2_function_top_wide_pane_ParamLimits

0x6be1,	// (0x0006594d) cell_vitu2_function_top_wide_pane

0x9c59,	// (0x000689c5) bg_button_pane_cp012

0x6bff,	// (0x0006596b) cell_vitu2_function_top_pane_g1

0xcdc5,	// (0x0006bb31) bg_button_pane_cp013_ParamLimits

0xcdc5,	// (0x0006bb31) bg_button_pane_cp013

0x6c13,	// (0x0006597f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6c13,	// (0x0006597f) cell_vitu2_function_top_wide_pane_g1

0x9c59,	// (0x000689c5) bg_popup_sub_pane_cp20

0x6c2b,	// (0x00065997) list_vitu2_match_list_pane

0xc73a,	// (0x0006b4a6) bg_popup_sub_pane_cp20_g1

0xc742,	// (0x0006b4ae) bg_popup_sub_pane_cp20_g2

0xefa2,	// (0x0006dd0e) bg_popup_sub_pane_cp20_g3

0xc74a,	// (0x0006b4b6) bg_popup_sub_pane_cp20_g4

0xef82,	// (0x0006dcee) bg_popup_sub_pane_cp20_g5

0xc964,	// (0x0006b6d0) bg_popup_sub_pane_cp20_g6

0xc75a,	// (0x0006b4c6) bg_popup_sub_pane_cp20_g7

0xc762,	// (0x0006b4ce) bg_popup_sub_pane_cp20_g8

0xc76a,	// (0x0006b4d6) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x0006e764) bg_popup_sub_pane_cp20_g

0xcde1,	// (0x0006bb4d) list_vitu2_match_list_item_pane_ParamLimits

0xcde1,	// (0x0006bb4d) list_vitu2_match_list_item_pane

0xcdf3,	// (0x0006bb5f) list_vitu2_match_list_item_pane_t1

0x9c67,	// (0x000689d3) bg_popup_sub_pane_cp21

0xce01,	// (0x0006bb6d) grid_vitu2_dropdown_list_pane

0x6c93,	// (0x000659ff) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6c93,	// (0x000659ff) cell_vitu2_dropdown_list_char_pane

0x6cb6,	// (0x00065a22) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6cb6,	// (0x00065a22) cell_vitu2_dropdown_list_ctrl_pane

0xc96c,	// (0x0006b6d8) cell_vitu2_dropdown_list_char_pane_g1

0xc975,	// (0x0006b6e1) cell_vitu2_dropdown_list_char_pane_g2

0xc97e,	// (0x0006b6ea) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x0006e781) cell_vitu2_dropdown_list_char_pane_g

0x6ce4,	// (0x00065a50) cell_vitu2_dropdown_list_char_pane_t1

0x6cf2,	// (0x00065a5e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6cf2,	// (0x00065a5e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6d02,	// (0x00065a6e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6d02,	// (0x00065a6e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6d13,	// (0x00065a7f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6d13,	// (0x00065a7f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6d23,	// (0x00065a8f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6d23,	// (0x00065a8f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc60a,	// (0x0006b376) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc60a,	// (0x0006b376) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x0006e788) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x0006e788) cell_vitu2_dropdown_list_ctrl_pane_g

0x6d3f,	// (0x00065aab) aid_size_cell_gallery2_ParamLimits

0x6d3f,	// (0x00065aab) aid_size_cell_gallery2

0x6d55,	// (0x00065ac1) grid_gallery2_pane_ParamLimits

0x6d55,	// (0x00065ac1) grid_gallery2_pane

0x6d69,	// (0x00065ad5) scroll_pane_cp029_ParamLimits

0x6d69,	// (0x00065ad5) scroll_pane_cp029

0x6d75,	// (0x00065ae1) cell_gallery2_pane_ParamLimits

0x6d75,	// (0x00065ae1) cell_gallery2_pane

0xc987,	// (0x0006b6f3) cell_gallery2_pane_g2

0x6daf,	// (0x00065b1b) cell_gallery2_pane_g3

0xc991,	// (0x0006b6fd) cell_gallery2_pane_g4

0xc999,	// (0x0006b705) cell_gallery2_pane_g5

0xa002,	// (0x00068d6e) grid_highlight_pane_cp10

0x6303,	// (0x0006506f) popup_vitu2_match_list_window_ParamLimits

0x631a,	// (0x00065086) popup_vitu2_query_window_ParamLimits

0x631a,	// (0x00065086) popup_vitu2_query_window

0x9c67,	// (0x000689d3) bg_vitu2_candi_button_pane

0xc96c,	// (0x0006b6d8) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xc975,	// (0x0006b6e1) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xc97e,	// (0x0006b6ea) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6db7,	// (0x00065b23) bg_button_pane_cp015

0x6dcb,	// (0x00065b37) bg_button_pane_cp016

0x6dde,	// (0x00065b4a) bg_button_pane_cp017

0xb46f,	// (0x0006a1db) bg_popup_sub_pane_cp22

0xc9a1,	// (0x0006b70d) popup_vitu2_query_window_g1

0x6e23,	// (0x00065b8f) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x0006e793) popup_vitu2_query_window_g

0x6e42,	// (0x00065bae) popup_vitu2_query_window_t1_ParamLimits

0x6e42,	// (0x00065bae) popup_vitu2_query_window_t1

0x6e77,	// (0x00065be3) popup_vitu2_query_window_t2_ParamLimits

0x6e77,	// (0x00065be3) popup_vitu2_query_window_t2

0x6e89,	// (0x00065bf5) popup_vitu2_query_window_t3_ParamLimits

0x6e89,	// (0x00065bf5) popup_vitu2_query_window_t3

0x6eb1,	// (0x00065c1d) popup_vitu2_query_window_t4_ParamLimits

0x6eb1,	// (0x00065c1d) popup_vitu2_query_window_t4

0x6ed2,	// (0x00065c3e) popup_vitu2_query_window_t5_ParamLimits

0x6ed2,	// (0x00065c3e) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x0006e79a) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x0006e79a) popup_vitu2_query_window_t

0xc840,	// (0x0006b5ac) main_cset_text_pane

0x67aa,	// (0x00065516) aid_area_touch_slider_ParamLimits

0x67c6,	// (0x00065532) cset_slider_pane_ParamLimits

0x67f0,	// (0x0006555c) main_cset_slider_pane_g1_ParamLimits

0x6805,	// (0x00065571) main_cset_slider_pane_g2_ParamLimits

0xc861,	// (0x0006b5cd) main_cset_slider_pane_g3_ParamLimits

0xc861,	// (0x0006b5cd) main_cset_slider_pane_g3

0x681a,	// (0x00065586) main_cset_slider_pane_g4_ParamLimits

0x681a,	// (0x00065586) main_cset_slider_pane_g4

0x6829,	// (0x00065595) main_cset_slider_pane_g5_ParamLimits

0x6829,	// (0x00065595) main_cset_slider_pane_g5

0x6837,	// (0x000655a3) main_cset_slider_pane_g6_ParamLimits

0x6837,	// (0x000655a3) main_cset_slider_pane_g6

0xf981,	// (0x0006e6ed) main_cset_slider_pane_g_ParamLimits

0xc891,	// (0x0006b5fd) main_cset_slider_pane_t1_ParamLimits

0x68c7,	// (0x00065633) main_cset_slider_pane_t2_ParamLimits

0x68e1,	// (0x0006564d) main_cset_slider_pane_t3_ParamLimits

0x68fb,	// (0x00065667) main_cset_slider_pane_t4_ParamLimits

0x6915,	// (0x00065681) main_cset_slider_pane_t5_ParamLimits

0x6933,	// (0x0006569f) main_cset_slider_pane_t6_ParamLimits

0x694a,	// (0x000656b6) main_cset_slider_pane_t7_ParamLimits

0x6978,	// (0x000656e4) main_cset_slider_pane_t8_ParamLimits

0x6978,	// (0x000656e4) main_cset_slider_pane_t8

0x69a0,	// (0x0006570c) main_cset_slider_pane_t9_ParamLimits

0x69a0,	// (0x0006570c) main_cset_slider_pane_t9

0x69c8,	// (0x00065734) main_cset_slider_pane_t10_ParamLimits

0x69c8,	// (0x00065734) main_cset_slider_pane_t10

0x69f0,	// (0x0006575c) main_cset_slider_pane_t11_ParamLimits

0x69f0,	// (0x0006575c) main_cset_slider_pane_t11

0x6a1a,	// (0x00065786) main_cset_slider_pane_t12_ParamLimits

0x6a1a,	// (0x00065786) main_cset_slider_pane_t12

0x6a37,	// (0x000657a3) main_cset_slider_pane_t13_ParamLimits

0x6a37,	// (0x000657a3) main_cset_slider_pane_t13

0xf9a6,	// (0x0006e712) main_cset_slider_pane_t_ParamLimits

0xdd9d,	// (0x0006cb09) bg_popup_sub_pane_cp011

0xc9ad,	// (0x0006b719) main_cset_text_pane_g1

0xc9b5,	// (0x0006b721) main_cset_text_pane_t1

0xc9c3,	// (0x0006b72f) main_cset_text_pane_t2

0xc9d1,	// (0x0006b73d) main_cset_text_pane_t3

0xc9df,	// (0x0006b74b) main_cset_text_pane_t4

0xc9ed,	// (0x0006b759) main_cset_text_pane_t5

0xc9fb,	// (0x0006b767) main_cset_text_pane_t6

0xca09,	// (0x0006b775) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0006e7a9) main_cset_text_pane_t

0x9c67,	// (0x000689d3) main_cam4_burst_pane

0x9c67,	// (0x000689d3) main_cam5_pane

0x66e1,	// (0x0006544d) bg_button_pane_cp019

0x66ea,	// (0x00065456) bg_button_pane_cp020

0xc86d,	// (0x0006b5d9) main_cset_slider_pane_g7_ParamLimits

0xc86d,	// (0x0006b5d9) main_cset_slider_pane_g7

0xc879,	// (0x0006b5e5) main_cset_slider_pane_g8_ParamLimits

0xc879,	// (0x0006b5e5) main_cset_slider_pane_g8

0x684b,	// (0x000655b7) main_cset_slider_pane_g9_ParamLimits

0x684b,	// (0x000655b7) main_cset_slider_pane_g9

0x6857,	// (0x000655c3) main_cset_slider_pane_g10_ParamLimits

0x6857,	// (0x000655c3) main_cset_slider_pane_g10

0x6863,	// (0x000655cf) main_cset_slider_pane_g11_ParamLimits

0x6863,	// (0x000655cf) main_cset_slider_pane_g11

0x686f,	// (0x000655db) main_cset_slider_pane_g12_ParamLimits

0x686f,	// (0x000655db) main_cset_slider_pane_g12

0x687b,	// (0x000655e7) main_cset_slider_pane_g13_ParamLimits

0x687b,	// (0x000655e7) main_cset_slider_pane_g13

0x6887,	// (0x000655f3) main_cset_slider_pane_g14_ParamLimits

0x6887,	// (0x000655f3) main_cset_slider_pane_g14

0x6893,	// (0x000655ff) main_cset_slider_pane_g15_ParamLimits

0x6893,	// (0x000655ff) main_cset_slider_pane_g15

0xc8bf,	// (0x0006b62b) main_cset_slider_pane_t14_ParamLimits

0xc8bf,	// (0x0006b62b) main_cset_slider_pane_t14

0xc8f8,	// (0x0006b664) main_cset_slider_pane_t15_ParamLimits

0xc8f8,	// (0x0006b664) main_cset_slider_pane_t15

0x6f49,	// (0x00065cb5) aid_cam4_burst_size_cell_ParamLimits

0x6f49,	// (0x00065cb5) aid_cam4_burst_size_cell

0x6f69,	// (0x00065cd5) grid_cam4_burst_pane_ParamLimits

0x6f69,	// (0x00065cd5) grid_cam4_burst_pane

0x6fa3,	// (0x00065d0f) linegrid_cam4_burst_pane_ParamLimits

0x6fa3,	// (0x00065d0f) linegrid_cam4_burst_pane

0xca17,	// (0x0006b783) scroll_pane_cp30_ParamLimits

0xca17,	// (0x0006b783) scroll_pane_cp30

0x6fc5,	// (0x00065d31) cell_cam4_burst_pane_ParamLimits

0x6fc5,	// (0x00065d31) cell_cam4_burst_pane

0xca23,	// (0x0006b78f) linegrid_cam4_burst_pane_g1_ParamLimits

0xca23,	// (0x0006b78f) linegrid_cam4_burst_pane_g1

0x701a,	// (0x00065d86) linegrid_cam4_burst_pane_g2_ParamLimits

0x701a,	// (0x00065d86) linegrid_cam4_burst_pane_g2

0xca30,	// (0x0006b79c) linegrid_cam4_burst_pane_g3_ParamLimits

0xca30,	// (0x0006b79c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x0006e7b8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0006e7b8) linegrid_cam4_burst_pane_g

0x702b,	// (0x00065d97) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x702b,	// (0x00065d97) linegrid_cam4_burst_pane_g3_copy1

0xca3d,	// (0x0006b7a9) linegrid_cam4_burst_pane_g4_ParamLimits

0xca3d,	// (0x0006b7a9) linegrid_cam4_burst_pane_g4

0x7049,	// (0x00065db5) linegrid_cam4_burst_pane_g5_ParamLimits

0x7049,	// (0x00065db5) linegrid_cam4_burst_pane_g5

0x705a,	// (0x00065dc6) linegrid_cam4_burst_pane_g6_ParamLimits

0x705a,	// (0x00065dc6) linegrid_cam4_burst_pane_g6

0xca4a,	// (0x0006b7b6) linegrid_cam4_burst_pane_g7_ParamLimits

0xca4a,	// (0x0006b7b6) linegrid_cam4_burst_pane_g7

0x7071,	// (0x00065ddd) cell_cam4_burst_pane_g1

0xca63,	// (0x0006b7cf) main_cam5_pane_t1_ParamLimits

0xca63,	// (0x0006b7cf) main_cam5_pane_t1

0xca75,	// (0x0006b7e1) main_cam5_pane_t2_ParamLimits

0xca75,	// (0x0006b7e1) main_cam5_pane_t2

0xca87,	// (0x0006b7f3) main_cam5_pane_t3_ParamLimits

0xca87,	// (0x0006b7f3) main_cam5_pane_t3

0xca99,	// (0x0006b805) main_cam5_pane_t4_ParamLimits

0xca99,	// (0x0006b805) main_cam5_pane_t4

0xcab1,	// (0x0006b81d) main_cam5_pane_t5_ParamLimits

0xcab1,	// (0x0006b81d) main_cam5_pane_t5

0xcac5,	// (0x0006b831) main_cam5_pane_t6_ParamLimits

0xcac5,	// (0x0006b831) main_cam5_pane_t6

0xcad9,	// (0x0006b845) main_cam5_pane_t7_ParamLimits

0xcad9,	// (0x0006b845) main_cam5_pane_t7

0xcaeb,	// (0x0006b857) main_cam5_pane_t8_ParamLimits

0xcaeb,	// (0x0006b857) main_cam5_pane_t8

0xcb09,	// (0x0006b875) main_cam5_pane_t9_ParamLimits

0xcb09,	// (0x0006b875) main_cam5_pane_t9

0xcb1b,	// (0x0006b887) main_cam5_pane_t10_ParamLimits

0xcb1b,	// (0x0006b887) main_cam5_pane_t10

0xcb2d,	// (0x0006b899) main_cam5_pane_t11_ParamLimits

0xcb2d,	// (0x0006b899) main_cam5_pane_t11

0xcb41,	// (0x0006b8ad) main_cam5_pane_t12_ParamLimits

0xcb41,	// (0x0006b8ad) main_cam5_pane_t12

0xcb58,	// (0x0006b8c4) main_cam5_pane_t13_ParamLimits

0xcb58,	// (0x0006b8c4) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x0006e7c4) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x0006e7c4) main_cam5_pane_t

0x0943,	// (0x0005f6af) popup_scut_keymap_window_ParamLimits

0x0943,	// (0x0005f6af) popup_scut_keymap_window

0x7084,	// (0x00065df0) aid_size_cell_brow_shortcut

0xa002,	// (0x00068d6e) bg_popup_window_pane_cp010

0x7090,	// (0x00065dfc) grid_scut_pane

0x709c,	// (0x00065e08) cell_scut_pane_ParamLimits

0x709c,	// (0x00065e08) cell_scut_pane

0x70b5,	// (0x00065e21) cell_scut_pane_g1

0xcb7b,	// (0x0006b8e7) cell_scut_pane_t1

0xcb8a,	// (0x0006b8f6) cell_scut_pane_t2

0x70be,	// (0x00065e2a) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x0006e7df) cell_scut_pane_t

0x4ced,	// (0x00063a59) main_mup3_pane_g8_ParamLimits

0x4ced,	// (0x00063a59) main_mup3_pane_g8

0x6205,	// (0x00064f71) area_vitu2_query_pane_ParamLimits

0x6205,	// (0x00064f71) area_vitu2_query_pane

0x6df1,	// (0x00065b5d) input_focus_pane_cp08

0xcb99,	// (0x0006b905) area_vitu2_query_pane_g1

0x70cc,	// (0x00065e38) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0006e7e6) area_vitu2_query_pane_g

0x70dd,	// (0x00065e49) area_vitu2_query_pane_t1_ParamLimits

0x70dd,	// (0x00065e49) area_vitu2_query_pane_t1

0x70f1,	// (0x00065e5d) area_vitu2_query_pane_t2_ParamLimits

0x70f1,	// (0x00065e5d) area_vitu2_query_pane_t2

0x7105,	// (0x00065e71) area_vitu2_query_pane_t3_ParamLimits

0x7105,	// (0x00065e71) area_vitu2_query_pane_t3

0x712d,	// (0x00065e99) area_vitu2_query_pane_t4_ParamLimits

0x712d,	// (0x00065e99) area_vitu2_query_pane_t4

0x7155,	// (0x00065ec1) area_vitu2_query_pane_t5_ParamLimits

0x7155,	// (0x00065ec1) area_vitu2_query_pane_t5

0x717d,	// (0x00065ee9) area_vitu2_query_pane_t6_ParamLimits

0x717d,	// (0x00065ee9) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0006e7eb) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0006e7eb) area_vitu2_query_pane_t

0x71c9,	// (0x00065f35) bg_button_pane_cp018

0x71d7,	// (0x00065f43) bg_button_pane_cp021

0x71e3,	// (0x00065f4f) bg_button_pane_cp022

0x71f4,	// (0x00065f60) input_focus_pane_cp09

0x2b12,	// (0x0006187e) aid_size_touch_mv_arrow_left

0x2b3b,	// (0x000618a7) aid_size_touch_mv_arrow_right

0x68ab,	// (0x00065617) main_cset_slider_pane_g16_ParamLimits

0x68ab,	// (0x00065617) main_cset_slider_pane_g16

0x68b9,	// (0x00065625) main_cset_slider_pane_g17_ParamLimits

0x68b9,	// (0x00065625) main_cset_slider_pane_g17

0x7071,	// (0x00065ddd) cell_cam4_burst_pane_g1_ParamLimits

0xdd9d,	// (0x0006cb09) compa_mode_pane

0x6ad5,	// (0x00065841) popup_vtel_slider_window_g3_ParamLimits

0x6ad5,	// (0x00065841) popup_vtel_slider_window_g3

0x6aec,	// (0x00065858) popup_vtel_slider_window_g4_ParamLimits

0x6aec,	// (0x00065858) popup_vtel_slider_window_g4

0x6b03,	// (0x0006586f) popup_vtel_slider_window_t1_ParamLimits

0x6b03,	// (0x0006586f) popup_vtel_slider_window_t1

0x9c67,	// (0x000689d3) main_cl_pane

0xb49b,	// (0x0006a207) popup_imed_adjust2_window_ParamLimits

0xb46f,	// (0x0006a1db) bg_tb_trans_pane_cp05_ParamLimits

0xbe91,	// (0x0006abfd) popup_imed_adjust2_window_g1_ParamLimits

0xbea0,	// (0x0006ac0c) popup_imed_adjust2_window_g2_ParamLimits

0xbea0,	// (0x0006ac0c) popup_imed_adjust2_window_g2

0xbeac,	// (0x0006ac18) popup_imed_adjust2_window_g3_ParamLimits

0xbeac,	// (0x0006ac18) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0006e556) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0006e556) popup_imed_adjust2_window_g

0xbeb8,	// (0x0006ac24) popup_imed_adjust2_window_t1_ParamLimits

0xbed0,	// (0x0006ac3c) slider_imed_adjust_pane_ParamLimits

0xbee4,	// (0x0006ac50) slider_imed_adjust_pane_g1_ParamLimits

0xbef4,	// (0x0006ac60) slider_imed_adjust_pane_g2_ParamLimits

0xbf04,	// (0x0006ac70) slider_imed_adjust_pane_g3_ParamLimits

0xbf15,	// (0x0006ac81) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0006e55d) slider_imed_adjust_pane_g_ParamLimits

0x5f87,	// (0x00064cf3) aid_touch_area_cam4_ParamLimits

0x5f87,	// (0x00064cf3) aid_touch_area_cam4

0xc5d8,	// (0x0006b344) battery_pane_cp01

0x6059,	// (0x00064dc5) main_camera4_pane_g6_ParamLimits

0x6059,	// (0x00064dc5) main_camera4_pane_g6

0x6083,	// (0x00064def) main_camera4_pane_t2_ParamLimits

0x6083,	// (0x00064def) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x0006e660) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x0006e660) main_camera4_pane_t

0x60b8,	// (0x00064e24) aid_touch_area_vid4_ParamLimits

0x60b8,	// (0x00064e24) aid_touch_area_vid4

0x610c,	// (0x00064e78) main_video4_pane_g5_ParamLimits

0x610c,	// (0x00064e78) main_video4_pane_g5

0x6131,	// (0x00064e9d) vid4_progress_pane_ParamLimits

0x6131,	// (0x00064e9d) vid4_progress_pane

0xc885,	// (0x0006b5f1) main_cset_slider_pane_g18_ParamLimits

0xc885,	// (0x0006b5f1) main_cset_slider_pane_g18

0xca57,	// (0x0006b7c3) cell_cam4_burst_pane_g2_ParamLimits

0xca57,	// (0x0006b7c3) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x0006e7bf) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x0006e7bf) cell_cam4_burst_pane_g

0xead8,	// (0x0006d844) bg_cl_pane_ParamLimits

0xead8,	// (0x0006d844) bg_cl_pane

0x7205,	// (0x00065f71) cl_header_pane_ParamLimits

0x7205,	// (0x00065f71) cl_header_pane

0x7219,	// (0x00065f85) cl_listscroll_pane_ParamLimits

0x7219,	// (0x00065f85) cl_listscroll_pane

0xcba5,	// (0x0006b911) bg_cl_pane_g1

0xcbad,	// (0x0006b919) bg_cl_pane_g2

0xcbb5,	// (0x0006b921) bg_cl_pane_g3

0xcbbd,	// (0x0006b929) bg_cl_pane_g4

0xcbc5,	// (0x0006b931) bg_cl_pane_g5

0xcbcd,	// (0x0006b939) bg_cl_pane_g6

0xcbd5,	// (0x0006b941) bg_cl_pane_g7

0xcbdd,	// (0x0006b949) bg_cl_pane_g8

0xcbe5,	// (0x0006b951) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x0006e7fa) bg_cl_pane_g

0x7229,	// (0x00065f95) aid_height_cl_leading_ParamLimits

0x7229,	// (0x00065f95) aid_height_cl_leading

0x7235,	// (0x00065fa1) aid_height_cl_text_ParamLimits

0x7235,	// (0x00065fa1) aid_height_cl_text

0xdff8,	// (0x0006cd64) bg_cl_header_pane_ParamLimits

0xdff8,	// (0x0006cd64) bg_cl_header_pane

0x7254,	// (0x00065fc0) cl_header_pane_g1_ParamLimits

0x7254,	// (0x00065fc0) cl_header_pane_g1

0x726a,	// (0x00065fd6) cl_header_pane_t1_ParamLimits

0x726a,	// (0x00065fd6) cl_header_pane_t1

0xcbed,	// (0x0006b959) cl_list_pane

0xc858,	// (0x0006b5c4) hc_scroll_pane_cp01

0xef82,	// (0x0006dcee) bg_cl_header_pane_g1

0xc73a,	// (0x0006b4a6) bg_cl_header_pane_g2

0xefa2,	// (0x0006dd0e) bg_cl_header_pane_g3

0xc74a,	// (0x0006b4b6) bg_cl_header_pane_g4

0xc742,	// (0x0006b4ae) bg_cl_header_pane_g5

0xc964,	// (0x0006b6d0) bg_cl_header_pane_g6

0xc762,	// (0x0006b4ce) bg_cl_header_pane_g7

0xc76a,	// (0x0006b4d6) bg_cl_header_pane_g8

0xc75a,	// (0x0006b4c6) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0006e80d) bg_cl_header_pane_g

0x7283,	// (0x00065fef) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7283,	// (0x00065fef) hc_cl_list_double_graphic_heading_pane

0x7296,	// (0x00066002) hc_cl_list_single_graphic_pane_ParamLimits

0x7296,	// (0x00066002) hc_cl_list_single_graphic_pane

0x72ae,	// (0x0006601a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x72ae,	// (0x0006601a) hc_cl_list_single_graphic_pane_g1

0x72ba,	// (0x00066026) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x72ba,	// (0x00066026) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0006e820) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0006e820) hc_cl_list_single_graphic_pane_g

0x72ce,	// (0x0006603a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x72ce,	// (0x0006603a) hc_cl_list_single_graphic_pane_t1

0x72ae,	// (0x0006601a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x72ae,	// (0x0006601a) hc_cl_list_double_graphic_heading_pane_g1

0x72e3,	// (0x0006604f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x72e3,	// (0x0006604f) hc_cl_list_double_graphic_heading_pane_g2

0x72f7,	// (0x00066063) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x72f7,	// (0x00066063) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x0006e825) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x0006e825) hc_cl_list_double_graphic_heading_pane_g

0x730b,	// (0x00066077) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x730b,	// (0x00066077) hc_cl_list_double_graphic_heading_pane_t1

0x7320,	// (0x0006608c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7320,	// (0x0006608c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0006e82c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0006e82c) hc_cl_list_double_graphic_heading_pane_t

0x7335,	// (0x000660a1) vid4_progress_pane_g1

0x7347,	// (0x000660b3) vid4_progress_pane_g2

0xa1dd,	// (0x00068f49) vid4_progress_pane_g3

0xce11,	// (0x0006bb7d) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0006e831) vid4_progress_pane_g

0xce2f,	// (0x0006bb9b) vid4_progress_pane_t1

0xce44,	// (0x0006bbb0) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x0006e83c) vid4_progress_pane_t

0xce6f,	// (0x0006bbdb) wait_bar_pane_cp07

0xb791,	// (0x0006a4fd) blid_firmament_pane_ParamLimits

0xb7d4,	// (0x0006a540) popup_blid_sat_info2_window_g1

0xb7f8,	// (0x0006a564) popup_blid_sat_info2_window_t3

0xb806,	// (0x0006a572) popup_blid_sat_info2_window_t4

0xb814,	// (0x0006a580) popup_blid_sat_info2_window_t5

0xb822,	// (0x0006a58e) popup_blid_sat_info2_window_t6

0xb832,	// (0x0006a59e) popup_blid_sat_info2_window_t7

0xb840,	// (0x0006a5ac) popup_blid_sat_info2_window_t8

0xb84e,	// (0x0006a5ba) popup_blid_sat_info2_window_t9

0xb85c,	// (0x0006a5c8) popup_blid_sat_info2_window_t10

0xb924,	// (0x0006a690) aid_firma_cardinal_ParamLimits

0xb938,	// (0x0006a6a4) blid_firmament_pane_t1_ParamLimits

0xb94f,	// (0x0006a6bb) blid_firmament_pane_t2_ParamLimits

0xb966,	// (0x0006a6d2) blid_firmament_pane_t3_ParamLimits

0xb97d,	// (0x0006a6e9) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0006e44f) blid_firmament_pane_t_ParamLimits

0xb994,	// (0x0006a700) blid_sat_info_pane_ParamLimits

0x9c59,	// (0x000689c5) main_cam_set_pane_ParamLimits

0x55d2,	// (0x0006433e) aid_size_cell_colour_35_ParamLimits

0x55f2,	// (0x0006435e) aid_size_cell_colour_112_ParamLimits

0x5612,	// (0x0006437e) aid_size_cell_effect_ParamLimits

0xb46f,	// (0x0006a1db) bg_tb_trans_pane_cp02_ParamLimits

0x2496,	// (0x00061202) heading_imed_pane_ParamLimits

0x5632,	// (0x0006439e) listscroll_imed_pane_ParamLimits

0xaa9d,	// (0x00069809) popup_call2_audio_first_window_g5_ParamLimits

0xaa9d,	// (0x00069809) popup_call2_audio_first_window_g5

0x5bef,	// (0x0006495b) aid_size_touch_image3_arrow_left_ParamLimits

0x5bef,	// (0x0006495b) aid_size_touch_image3_arrow_left

0x5c1b,	// (0x00064987) aid_size_touch_image3_arrow_right_ParamLimits

0x5c1b,	// (0x00064987) aid_size_touch_image3_arrow_right

0xce5a,	// (0x0006bbc6) vid4_progress_pane_t3

0x594d,	// (0x000646b9) main_hwr_training_symbol_option_pane_ParamLimits

0x594d,	// (0x000646b9) main_hwr_training_symbol_option_pane

0xc180,	// (0x0006aeec) popup_hwr_training_preview_window_ParamLimits

0xc180,	// (0x0006aeec) popup_hwr_training_preview_window

0x596d,	// (0x000646d9) hwr_training_navi_pane_g5_ParamLimits

0x596d,	// (0x000646d9) hwr_training_navi_pane_g5

0xc728,	// (0x0006b494) popup_char_count_window

0x9c59,	// (0x000689c5) bg_popup_sub_pane_cp20_ParamLimits

0x6c2b,	// (0x00065997) list_vitu2_match_list_pane_ParamLimits

0x6c3a,	// (0x000659a6) vitu2_page_scroll_pane_ParamLimits

0x6c3a,	// (0x000659a6) vitu2_page_scroll_pane

0xce95,	// (0x0006bc01) list_single_hwr_training_symbol_option_pane_ParamLimits

0xce95,	// (0x0006bc01) list_single_hwr_training_symbol_option_pane

0xcea8,	// (0x0006bc14) list_single_hwr_training_symbol_option_pane_g1

0xceb0,	// (0x0006bc1c) list_single_hwr_training_symbol_option_pane_t1

0xcebe,	// (0x0006bc2a) bg_button_pane_cp023

0xcec7,	// (0x0006bc33) bg_button_pane_cp024

0x73a1,	// (0x0006610d) vitu2_page_scroll_pane_g1

0x73a9,	// (0x00066115) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x0006e843) vitu2_page_scroll_pane_g

0x73b3,	// (0x0006611f) vitu2_page_scroll_pane_t1

0xb6ad,	// (0x0006a419) popup_char_count_window_g1

0xcefa,	// (0x0006bc66) popup_char_count_window_g2

0xcf03,	// (0x0006bc6f) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x0006e848) popup_char_count_window_g

0xcf0c,	// (0x0006bc78) popup_char_count_window_t1

0x9c67,	// (0x000689d3) main_vded2_pane

0xbe7d,	// (0x0006abe9) aid_size_cell_imed_line

0xbe87,	// (0x0006abf3) grid_imed_line_width_pane

0xc6b4,	// (0x0006b420) vid4_indicators_pane_g4

0xcf1a,	// (0x0006bc86) cell_imed_line_width_pane_ParamLimits

0xcf1a,	// (0x0006bc86) cell_imed_line_width_pane

0xcf30,	// (0x0006bc9c) cell_imed_line_width_pane_g1

0xb73f,	// (0x0006a4ab) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x0006e84f) cell_imed_line_width_pane_g

0x73c2,	// (0x0006612e) main_vded2_pane_g1_ParamLimits

0x73c2,	// (0x0006612e) main_vded2_pane_g1

0x73dd,	// (0x00066149) main_vded2_pane_g2_ParamLimits

0x73dd,	// (0x00066149) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x0006e854) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x0006e854) main_vded2_pane_g

0x73ef,	// (0x0006615b) vded2_slider_pane_ParamLimits

0x73ef,	// (0x0006615b) vded2_slider_pane

0x73ff,	// (0x0006616b) aid_size_touch_vded2_end

0x7409,	// (0x00066175) aid_size_touch_vded2_playhead

0xcf39,	// (0x0006bca5) aid_size_touch_vded2_start

0xcf41,	// (0x0006bcad) vded2_slider_bg_pane

0xcf4a,	// (0x0006bcb6) vded2_slider_pane_g1

0xcf53,	// (0x0006bcbf) vded2_slider_pane_g2

0x7413,	// (0x0006617f) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x0006e859) vded2_slider_pane_g

0xcf5b,	// (0x0006bcc7) vded2_slider_bg_pane_g1

0xcf64,	// (0x0006bcd0) vded2_slider_bg_pane_g2

0xcf6d,	// (0x0006bcd9) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x0006e860) vded2_slider_bg_pane_g

0x3246,	// (0x00061fb2) aid_postcard_touch_down_pane_ParamLimits

0x3246,	// (0x00061fb2) aid_postcard_touch_down_pane

0x325e,	// (0x00061fca) aid_postcard_touch_up_pane_ParamLimits

0x325e,	// (0x00061fca) aid_postcard_touch_up_pane

0x9c67,	// (0x000689d3) main_blid2_pane

0xb47d,	// (0x0006a1e9) popup_blid2_search_window

0xdd9d,	// (0x0006cb09) blid2_gps_pane

0xdd9d,	// (0x0006cb09) blid2_navig_pane

0xdd9d,	// (0x0006cb09) blid2_search_pane

0xdd9d,	// (0x0006cb09) blid2_tripm_pane

0x741e,	// (0x0006618a) blid2_search_pane_g1_ParamLimits

0x741e,	// (0x0006618a) blid2_search_pane_g1

0x7431,	// (0x0006619d) blid2_search_pane_t1_ParamLimits

0x7431,	// (0x0006619d) blid2_search_pane_t1

0x7443,	// (0x000661af) aid_size_cell_blid2_gps_ParamLimits

0x7443,	// (0x000661af) aid_size_cell_blid2_gps

0x745b,	// (0x000661c7) blid2_gps_pane_g1_ParamLimits

0x745b,	// (0x000661c7) blid2_gps_pane_g1

0x746f,	// (0x000661db) grid_blid2_satellite_pane_ParamLimits

0x746f,	// (0x000661db) grid_blid2_satellite_pane

0x7487,	// (0x000661f3) blid2_navig_pane_g1_ParamLimits

0x7487,	// (0x000661f3) blid2_navig_pane_g1

0x7493,	// (0x000661ff) blid2_navig_pane_t1_ParamLimits

0x7493,	// (0x000661ff) blid2_navig_pane_t1

0x74ae,	// (0x0006621a) blid2_navig_pane_t2_ParamLimits

0x74ae,	// (0x0006621a) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x0006e867) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x0006e867) blid2_navig_pane_t

0x74c9,	// (0x00066235) blid2_navig_ring_pane_ParamLimits

0x74c9,	// (0x00066235) blid2_navig_ring_pane

0x74e4,	// (0x00066250) blid2_speed_pane_ParamLimits

0x74e4,	// (0x00066250) blid2_speed_pane

0x74f0,	// (0x0006625c) blid2_tripm_pane_g1_ParamLimits

0x74f0,	// (0x0006625c) blid2_tripm_pane_g1

0x750b,	// (0x00066277) blid2_tripm_pane_g2_ParamLimits

0x750b,	// (0x00066277) blid2_tripm_pane_g2

0x751f,	// (0x0006628b) blid2_tripm_pane_g3_ParamLimits

0x751f,	// (0x0006628b) blid2_tripm_pane_g3

0x7533,	// (0x0006629f) blid2_tripm_pane_g4_ParamLimits

0x7533,	// (0x0006629f) blid2_tripm_pane_g4

0x7547,	// (0x000662b3) blid2_tripm_pane_g5_ParamLimits

0x7547,	// (0x000662b3) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x0006e86c) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x0006e86c) blid2_tripm_pane_g

0x756d,	// (0x000662d9) blid2_tripm_pane_t1_ParamLimits

0x756d,	// (0x000662d9) blid2_tripm_pane_t1

0x7586,	// (0x000662f2) blid2_tripm_pane_t2_ParamLimits

0x7586,	// (0x000662f2) blid2_tripm_pane_t2

0x759f,	// (0x0006630b) blid2_tripm_pane_t3_ParamLimits

0x759f,	// (0x0006630b) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x0006e879) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x0006e879) blid2_tripm_pane_t

0x75e6,	// (0x00066352) cell_blid2_satellite_pane_ParamLimits

0x75e6,	// (0x00066352) cell_blid2_satellite_pane

0x7602,	// (0x0006636e) cell_blid2_satellite_pane_g1

0xcf76,	// (0x0006bce2) cell_blid2_satellite_pane_t1

0xb9a4,	// (0x0006a710) blid2_speed_pane_g1

0xcf84,	// (0x0006bcf0) blid2_speed_pane_t1

0xcf92,	// (0x0006bcfe) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x0006e882) blid2_speed_pane_t

0xb9a4,	// (0x0006a710) blid2_navig_ring_pane_g1

0x760b,	// (0x00066377) blid2_navig_ring_pane_g2

0x7613,	// (0x0006637f) blid2_navig_ring_pane_g3

0x761b,	// (0x00066387) blid2_navig_ring_pane_g4

0x7623,	// (0x0006638f) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x0006e887) blid2_navig_ring_pane_g

0xdd9d,	// (0x0006cb09) bg_popup_window_pane_cp011

0xcfa0,	// (0x0006bd0c) popup_blid2_search_window_g1

0xcfa8,	// (0x0006bd14) popup_blid2_search_window_t1

0xcfb6,	// (0x0006bd22) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x0006e892) popup_blid2_search_window_t

0xee91,	// (0x0006dbfd) main_browser_pane_g1

0xead8,	// (0x0006d844) main_browser_pane_ParamLimits

0x9c59,	// (0x000689c5) bg_button_pane_cp011_ParamLimits

0x6477,	// (0x000651e3) cell_vitu2_function_pane_g1_ParamLimits

0xb46f,	// (0x0006a1db) bg_popup_sub_pane_cp22_ParamLimits

0x6df1,	// (0x00065b5d) input_focus_pane_cp08_ParamLimits

0x6e08,	// (0x00065b74) popup_vitu2_query_button_pane_ParamLimits

0x6e08,	// (0x00065b74) popup_vitu2_query_button_pane

0x6e19,	// (0x00065b85) popup_vitu2_query_input_button_pane

0xc9a1,	// (0x0006b70d) popup_vitu2_query_window_g1_ParamLimits

0x6e23,	// (0x00065b8f) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x0006e793) popup_vitu2_query_window_g_ParamLimits

0xdd9d,	// (0x0006cb09) bg_button_pane_cp026

0x762b,	// (0x00066397) popup_vitu2_query_input_button_pane_g1

0xdd9d,	// (0x0006cb09) bg_button_pane_cp025

0xcfc4,	// (0x0006bd30) popup_vitu2_query_button_pane_t1

0x494d,	// (0x000636b9) main_mp3_pane_t6

0x495b,	// (0x000636c7) popup_slider_window_cp01

0xc618,	// (0x0006b384) cam4_battery_pane

0xc66d,	// (0x0006b3d9) cam4_battery_pane_cp02

0xce09,	// (0x0006bb75) cam4_battery_pane_cp01

0xce09,	// (0x0006bb75) cam4_battery_pane_cp03

0xc4b5,	// (0x0006b221) cam4_battery_pane_g1

0xb9a4,	// (0x0006a710) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x0006e897) cam4_battery_pane_g

0xb86a,	// (0x0006a5d6) popup_blid_sat_info2_window_t11

0x2b12,	// (0x0006187e) aid_size_touch_mv_arrow_left_ParamLimits

0x2b3b,	// (0x000618a7) aid_size_touch_mv_arrow_right_ParamLimits

0x9f62,	// (0x00068cce) navi_pane_g1_ParamLimits

0x2b7a,	// (0x000618e6) navi_pane_g2_ParamLimits

0x2ba8,	// (0x00061914) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0006e161) navi_pane_g_ParamLimits

0x2c02,	// (0x0006196e) navi_pane_mv_t1_ParamLimits

0x563e,	// (0x000643aa) grid_imed_effect_pane_ParamLimits

0x1694,	// (0x00060400) aid_placing_vt_slider_lsc

0xeddc,	// (0x0006db48) aid_placing_vt_slider_prt

0xdff8,	// (0x0006cd64) bg_tb_trans_pane_cp01_ParamLimits

0xbaf4,	// (0x0006a860) popup_image_details_window_g1_ParamLimits

0xbb07,	// (0x0006a873) popup_image_details_window_g2_ParamLimits

0xbb1c,	// (0x0006a888) popup_image_details_window_g3_ParamLimits

0xbb1c,	// (0x0006a888) popup_image_details_window_g3

0xf728,	// (0x0006e494) popup_image_details_window_g_ParamLimits

0xbb30,	// (0x0006a89c) popup_image_details_window_t1_ParamLimits

0xbb42,	// (0x0006a8ae) popup_image_details_window_t2_ParamLimits

0xbb5b,	// (0x0006a8c7) popup_image_details_window_t3_ParamLimits

0xbb6f,	// (0x0006a8db) popup_image_details_window_t4_ParamLimits

0xbb8a,	// (0x0006a8f6) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0006e49b) popup_image_details_window_t_ParamLimits

0x7241,	// (0x00065fad) cl_header_name_pane_ParamLimits

0x7241,	// (0x00065fad) cl_header_name_pane

0x7633,	// (0x0006639f) cl_header_name_pane_t1_ParamLimits

0x7633,	// (0x0006639f) cl_header_name_pane_t1

0x7654,	// (0x000663c0) cl_header_name_pane_t2_ParamLimits

0x7654,	// (0x000663c0) cl_header_name_pane_t2

0x7696,	// (0x00066402) cl_header_name_pane_t3_ParamLimits

0x7696,	// (0x00066402) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0006e89c) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0006e89c) cl_header_name_pane_t

0x2bd3,	// (0x0006193f) navi_pane_mv_g2_ParamLimits

0xc702,	// (0x0006b46e) field_vitu2_entry_pane_g1_ParamLimits

0xc70e,	// (0x0006b47a) field_vitu2_entry_pane_g2_ParamLimits

0xc71a,	// (0x0006b486) field_vitu2_entry_pane_g3_ParamLimits

0xc71a,	// (0x0006b486) field_vitu2_entry_pane_g3

0xf926,	// (0x0006e692) field_vitu2_entry_pane_g_ParamLimits

0x63f3,	// (0x0006515f) cell_vitu2_itu_pane_g1_ParamLimits

0x6403,	// (0x0006516f) cell_vitu2_itu_pane_g2_ParamLimits

0x6403,	// (0x0006516f) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0006e69e) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0006e69e) cell_vitu2_itu_pane_g

0x9c59,	// (0x000689c5) bg_vkb2_func_pane_cp05_ParamLimits

0x9c59,	// (0x000689c5) bg_vkb2_func_pane_cp05

0x9c59,	// (0x000689c5) bg_vkb2_func_pane_cp03

0x9c59,	// (0x000689c5) bg_vkb2_func_pane_cp04

0x9c59,	// (0x000689c5) bg_vkb2_func_pane_cp10_ParamLimits

0x9c59,	// (0x000689c5) bg_vkb2_func_pane_cp10

0x71e3,	// (0x00065f4f) bg_vkb2_func_pane_cp08

0x71c9,	// (0x00065f35) bg_vkb2_func_pane_cp06

0x71d7,	// (0x00065f43) bg_vkb2_func_pane_cp07

0xced0,	// (0x0006bc3c) bg_vkb2_func_pane_cp11_ParamLimits

0xced0,	// (0x0006bc3c) bg_vkb2_func_pane_cp11

0xcee5,	// (0x0006bc51) bg_vkb2_func_pane_cp12_ParamLimits

0xcee5,	// (0x0006bc51) bg_vkb2_func_pane_cp12

0xdd9d,	// (0x0006cb09) bg_vkb2_func_pane_cp09

0xc73a,	// (0x0006b4a6) bg_vkb2_func_pane_g1

0xefa2,	// (0x0006dd0e) bg_vkb2_func_pane_g2

0xc742,	// (0x0006b4ae) bg_vkb2_func_pane_g3

0xc74a,	// (0x0006b4b6) bg_vkb2_func_pane_g4

0xc964,	// (0x0006b6d0) bg_vkb2_func_pane_g5

0xc762,	// (0x0006b4ce) bg_vkb2_func_pane_g6

0xc76a,	// (0x0006b4d6) bg_vkb2_func_pane_g7

0xc75a,	// (0x0006b4c6) bg_vkb2_func_pane_g8

0xef82,	// (0x0006dcee) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x0006e8a3) bg_vkb2_func_pane_g

0x755b,	// (0x000662c7) blid2_tripm_pane_g6_ParamLimits

0x755b,	// (0x000662c7) blid2_tripm_pane_g6

0xc46f,	// (0x0006b1db) mp4_progress_pane_g1

0x75d2,	// (0x0006633e) blid2_tripm_values_pane_ParamLimits

0x75d2,	// (0x0006633e) blid2_tripm_values_pane

0x76c7,	// (0x00066433) blid2_tripm_values_pane_t1

0x76d5,	// (0x00066441) blid2_tripm_values_pane_t2

0x76e3,	// (0x0006644f) blid2_tripm_values_pane_t3

0x76f1,	// (0x0006645d) blid2_tripm_values_pane_t4

0x76ff,	// (0x0006646b) blid2_tripm_values_pane_t5

0x770d,	// (0x00066479) blid2_tripm_values_pane_t6

0x771b,	// (0x00066487) blid2_tripm_values_pane_t7

0x7729,	// (0x00066495) blid2_tripm_values_pane_t8

0x7737,	// (0x000664a3) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x0006e8b6) blid2_tripm_values_pane_t

0x16d1,	// (0x0006043d) call_video_pane_t1_ParamLimits

0x16eb,	// (0x00060457) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0006dfea) call_video_pane_t_ParamLimits

0x3149,	// (0x00061eb5) msg_header_pane_g1_ParamLimits

0xa19f,	// (0x00068f0b) msg_header_pane_g2_ParamLimits

0xa19f,	// (0x00068f0b) msg_header_pane_g2

0x0001,

0xf498,	// (0x0006e204) msg_header_pane_g_ParamLimits

0xf498,	// (0x0006e204) msg_header_pane_g

0xead8,	// (0x0006d844) main_clock2_pane_ParamLimits

0x5334,	// (0x000640a0) grid_clock2_toolbar_pane_ParamLimits

0x5334,	// (0x000640a0) grid_clock2_toolbar_pane

0x5334,	// (0x000640a0) listscroll_clock2_pane_ParamLimits

0x5334,	// (0x000640a0) listscroll_clock2_pane

0x541b,	// (0x00064187) main_clock2_pane_t3_ParamLimits

0x541b,	// (0x00064187) main_clock2_pane_t3

0x543e,	// (0x000641aa) main_clock2_pane_t4_ParamLimits

0x543e,	// (0x000641aa) main_clock2_pane_t4

0xcfd2,	// (0x0006bd3e) cell_clock2_toolbar_pane

0xcfda,	// (0x0006bd46) cell_clock2_toolbar_pane_cp01

0xcfda,	// (0x0006bd46) cell_clock2_toolbar_pane_cp02

0xcfe2,	// (0x0006bd4e) cell_clock2_toolbar_pane_cp03

0xcfea,	// (0x0006bd56) list_clock2_pane

0x9ec8,	// (0x00068c34) scroll_pane_cp10

0xcff2,	// (0x0006bd5e) list_single_clock2_pane_ParamLimits

0xcff2,	// (0x0006bd5e) list_single_clock2_pane

0xa002,	// (0x00068d6e) list_highlight_pane_cp08

0xcfff,	// (0x0006bd6b) list_single_clock2_pane_t1

0xd00d,	// (0x0006bd79) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x0006e8c9) list_single_clock2_pane_t

0xdd9d,	// (0x0006cb09) bg_button_pane_cp10

0xd01b,	// (0x0006bd87) cell_clock2_toolbar_pane_g1

0x31d2,	// (0x00061f3e) aid_main_viewer_pane_g1_ParamLimits

0x31d2,	// (0x00061f3e) aid_main_viewer_pane_g1

0x31e0,	// (0x00061f4c) aid_main_viewer_pane_g2_ParamLimits

0x31e0,	// (0x00061f4c) aid_main_viewer_pane_g2

0x31ee,	// (0x00061f5a) aid_main_viewer_pane_g3_ParamLimits

0x31ee,	// (0x00061f5a) aid_main_viewer_pane_g3

0x31fd,	// (0x00061f69) aid_main_viewer_pane_g4_ParamLimits

0x31fd,	// (0x00061f69) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0006e215) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0006e215) aid_main_viewer_pane_g

0x3b55,	// (0x000628c1) main_calc_pane_ParamLimits

0x3b69,	// (0x000628d5) main_dialer2_pane_ParamLimits

0x9c67,	// (0x000689d3) main_cam6_pane

0x9c67,	// (0x000689d3) main_vid6_pane

0x5340,	// (0x000640ac) listscroll_gen_pane_cp06_ParamLimits

0x5340,	// (0x000640ac) listscroll_gen_pane_cp06

0x5461,	// (0x000641cd) main_clock2_pane_t5_ParamLimits

0x5461,	// (0x000641cd) main_clock2_pane_t5

0x54c3,	// (0x0006422f) aid_call2_pane_cp10_ParamLimits

0x54d5,	// (0x00064241) aid_call_pane_cp10_ParamLimits

0x9f37,	// (0x00068ca3) popup_clock_analogue_window_cp10_g1_ParamLimits

0x9f37,	// (0x00068ca3) popup_clock_analogue_window_cp10_g2_ParamLimits

0x54e7,	// (0x00064253) popup_clock_analogue_window_cp10_g3_ParamLimits

0x54e7,	// (0x00064253) popup_clock_analogue_window_cp10_g4_ParamLimits

0x9f37,	// (0x00068ca3) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0006e54b) popup_clock_analogue_window_cp10_g_ParamLimits

0x54fd,	// (0x00064269) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5b9c,	// (0x00064908) cell_dialer2_keypad_pane_g2_ParamLimits

0x5b9c,	// (0x00064908) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0006e631) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0006e631) cell_dialer2_keypad_pane_g

0x5bb8,	// (0x00064924) cell_dialer2_keypad_pane_t1

0x679c,	// (0x00065508) main_cset_text2_pane_ParamLimits

0x679c,	// (0x00065508) main_cset_text2_pane

0xcb99,	// (0x0006b905) area_vitu2_query_pane_g1_ParamLimits

0x70cc,	// (0x00065e38) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0006e7e6) area_vitu2_query_pane_g_ParamLimits

0x71a5,	// (0x00065f11) area_vitu2_query_pane_t7_ParamLimits

0x71a5,	// (0x00065f11) area_vitu2_query_pane_t7

0x71c9,	// (0x00065f35) bg_button_pane_cp018_ParamLimits

0x71d7,	// (0x00065f43) bg_button_pane_cp021_ParamLimits

0x71e3,	// (0x00065f4f) bg_button_pane_cp022_ParamLimits

0x71e3,	// (0x00065f4f) bg_vkb2_func_pane_cp08_ParamLimits

0x71c9,	// (0x00065f35) bg_vkb2_func_pane_cp06_ParamLimits

0x71d7,	// (0x00065f43) bg_vkb2_func_pane_cp07_ParamLimits

0x71f4,	// (0x00065f60) input_focus_pane_cp09_ParamLimits

0xd023,	// (0x0006bd8f) cam6_autofocus_pane_ParamLimits

0xd023,	// (0x0006bd8f) cam6_autofocus_pane

0x7745,	// (0x000664b1) cam6_image_uncrop_pane_ParamLimits

0x7745,	// (0x000664b1) cam6_image_uncrop_pane

0x7754,	// (0x000664c0) cam6_indi_pane_ParamLimits

0x7754,	// (0x000664c0) cam6_indi_pane

0x776a,	// (0x000664d6) cam6_mode_pane_ParamLimits

0x776a,	// (0x000664d6) cam6_mode_pane

0x777c,	// (0x000664e8) cam6_timer_pane_ParamLimits

0x777c,	// (0x000664e8) cam6_timer_pane

0x7788,	// (0x000664f4) cam6_zoom_pane_ParamLimits

0x7788,	// (0x000664f4) cam6_zoom_pane

0x7796,	// (0x00066502) cam6_mode_pane_g1_ParamLimits

0x7796,	// (0x00066502) cam6_mode_pane_g1

0x77a6,	// (0x00066512) cam6_mode_pane_g2_ParamLimits

0x77a6,	// (0x00066512) cam6_mode_pane_g2

0x77b6,	// (0x00066522) cam6_mode_pane_g3_ParamLimits

0x77b6,	// (0x00066522) cam6_mode_pane_g3

0x77c6,	// (0x00066532) cam6_mode_pane_g4_ParamLimits

0x77c6,	// (0x00066532) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x0006e8ce) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x0006e8ce) cam6_mode_pane_g

0xd031,	// (0x0006bd9d) bg_tb_trans_pane_cp08_ParamLimits

0xd031,	// (0x0006bd9d) bg_tb_trans_pane_cp08

0xd03f,	// (0x0006bdab) cam6_battery_pane_ParamLimits

0xd03f,	// (0x0006bdab) cam6_battery_pane

0xd055,	// (0x0006bdc1) cam6_indi_pane_g1_ParamLimits

0xd055,	// (0x0006bdc1) cam6_indi_pane_g1

0xd067,	// (0x0006bdd3) cam6_indi_pane_g2_ParamLimits

0xd067,	// (0x0006bdd3) cam6_indi_pane_g2

0xd079,	// (0x0006bde5) cam6_indi_pane_g3_ParamLimits

0xd079,	// (0x0006bde5) cam6_indi_pane_g3

0x0002,

0x0286,	// (0x0005eff2) cam6_indi_pane_g_ParamLimits

0x0286,	// (0x0005eff2) cam6_indi_pane_g

0xd08b,	// (0x0006bdf7) cam6_indi_pane_t1_ParamLimits

0xd08b,	// (0x0006bdf7) cam6_indi_pane_t1

0x6181,	// (0x00064eed) cam6_autofocus_pane_g1

0x6179,	// (0x00064ee5) cam6_autofocus_pane_g2

0x6191,	// (0x00064efd) cam6_autofocus_pane_g3

0x6189,	// (0x00064ef5) cam6_autofocus_pane_g4

0x0003,

0xfb6b,	// (0x0006e8d7) cam6_autofocus_pane_g

0xd0b1,	// (0x0006be1d) cam6_timer_pane_g1

0xd0b9,	// (0x0006be25) cam6_timer_pane_t1

0xd0c7,	// (0x0006be33) cam6_zoom_cont_pane

0xd0cf,	// (0x0006be3b) cam6_zoom_pane_g1

0xd0d7,	// (0x0006be43) cam6_zoom_pane_g2

0x77d6,	// (0x00066542) cam6_zoom_pane_g3

0x0002,

0xfb74,	// (0x0006e8e0) cam6_zoom_pane_g

0xb9a4,	// (0x0006a710) cam6_battery_pane_g1

0xb9a4,	// (0x0006a710) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x0006e458) cam6_battery_pane_g

0xd0df,	// (0x0006be4b) cam6_zoom_cont_pane_g1

0xd0e8,	// (0x0006be54) cam6_zoom_cont_pane_g2

0xd0f1,	// (0x0006be5d) cam6_zoom_cont_pane_g3

0x0002,

0x029d,	// (0x0005f009) cam6_zoom_cont_pane_g

0x77f3,	// (0x0006655f) cam6_mode_pane_cp_ParamLimits

0x77f3,	// (0x0006655f) cam6_mode_pane_cp

0x7805,	// (0x00066571) cam6_zoom_pane_cp_ParamLimits

0x7805,	// (0x00066571) cam6_zoom_pane_cp

0x7813,	// (0x0006657f) vid6_image_uncrop_cif_pane_ParamLimits

0x7813,	// (0x0006657f) vid6_image_uncrop_cif_pane

0x7823,	// (0x0006658f) vid6_image_uncrop_nhd_pane_ParamLimits

0x7823,	// (0x0006658f) vid6_image_uncrop_nhd_pane

0x7832,	// (0x0006659e) vid6_image_uncrop_vga_pane_ParamLimits

0x7832,	// (0x0006659e) vid6_image_uncrop_vga_pane

0x7841,	// (0x000665ad) vid6_image_uncrop_wvga_pane_ParamLimits

0x7841,	// (0x000665ad) vid6_image_uncrop_wvga_pane

0x7850,	// (0x000665bc) vid6_indi_pane_ParamLimits

0x7850,	// (0x000665bc) vid6_indi_pane

0xd031,	// (0x0006bd9d) bg_tb_trans_pane_cp09_ParamLimits

0xd031,	// (0x0006bd9d) bg_tb_trans_pane_cp09

0xd109,	// (0x0006be75) cam6_battery_pane_cp_ParamLimits

0xd109,	// (0x0006be75) cam6_battery_pane_cp

0xd115,	// (0x0006be81) vid6_indi_pane_g1_ParamLimits

0xd115,	// (0x0006be81) vid6_indi_pane_g1

0xd127,	// (0x0006be93) vid6_indi_pane_g2_ParamLimits

0xd127,	// (0x0006be93) vid6_indi_pane_g2

0xd139,	// (0x0006bea5) vid6_indi_pane_g3_ParamLimits

0xd139,	// (0x0006bea5) vid6_indi_pane_g3

0xd150,	// (0x0006bebc) vid6_indi_pane_g4_ParamLimits

0xd150,	// (0x0006bebc) vid6_indi_pane_g4

0xd167,	// (0x0006bed3) vid6_indi_pane_g5_ParamLimits

0xd167,	// (0x0006bed3) vid6_indi_pane_g5

0x0004,

0x02a4,	// (0x0005f010) vid6_indi_pane_g_ParamLimits

0x02a4,	// (0x0005f010) vid6_indi_pane_g

0xd181,	// (0x0006beed) vid6_indi_pane_t1_ParamLimits

0xd181,	// (0x0006beed) vid6_indi_pane_t1

0xd197,	// (0x0006bf03) vid6_indi_pane_t2_ParamLimits

0xd197,	// (0x0006bf03) vid6_indi_pane_t2

0xd1bf,	// (0x0006bf2b) vid6_indi_pane_t3_ParamLimits

0xd1bf,	// (0x0006bf2b) vid6_indi_pane_t3

0xd1e7,	// (0x0006bf53) vid6_indi_pane_t4_ParamLimits

0xd1e7,	// (0x0006bf53) vid6_indi_pane_t4

0x0003,

0x02af,	// (0x0005f01b) vid6_indi_pane_t_ParamLimits

0x02af,	// (0x0005f01b) vid6_indi_pane_t

0xd20b,	// (0x0006bf77) wait_bar_pane_cp08

0x7868,	// (0x000665d4) main_cset_text2_pane_t1_ParamLimits

0x7868,	// (0x000665d4) main_cset_text2_pane_t1

0x77de,	// (0x0006654a) listscroll_gen_pane_cp06_t1_ParamLimits

0x77de,	// (0x0006654a) listscroll_gen_pane_cp06_t1

0x9c67,	// (0x000689d3) main_cam6_set_pane

0xc60a,	// (0x0006b376) bg_tb_trans_pane_cp06_ParamLimits

0xc620,	// (0x0006b38c) cam4_indicators_pane_g1_ParamLimits

0xc631,	// (0x0006b39d) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0006e66e) cam4_indicators_pane_g_ParamLimits

0xc649,	// (0x0006b3b5) cam4_indicators_pane_t1_ParamLimits

0x9c59,	// (0x000689c5) bg_tb_trans_pane_cp07_ParamLimits

0xc677,	// (0x0006b3e3) vid4_indicators_pane_g1_ParamLimits

0xc68d,	// (0x0006b3f9) vid4_indicators_pane_g2_ParamLimits

0xc6a1,	// (0x0006b40d) vid4_indicators_pane_g3_ParamLimits

0xc6b4,	// (0x0006b420) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x0006e680) vid4_indicators_pane_g_ParamLimits

0xc6d2,	// (0x0006b43e) vid4_indicators_pane_t1_ParamLimits

0x7335,	// (0x000660a1) vid4_progress_pane_g1_ParamLimits

0x7347,	// (0x000660b3) vid4_progress_pane_g2_ParamLimits

0xa1dd,	// (0x00068f49) vid4_progress_pane_g3_ParamLimits

0xce11,	// (0x0006bb7d) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0006e831) vid4_progress_pane_g_ParamLimits

0xce2f,	// (0x0006bb9b) vid4_progress_pane_t1_ParamLimits

0xce44,	// (0x0006bbb0) vid4_progress_pane_t2_ParamLimits

0xce5a,	// (0x0006bbc6) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x0006e83c) vid4_progress_pane_t_ParamLimits

0xce6f,	// (0x0006bbdb) wait_bar_pane_cp07_ParamLimits

0x7889,	// (0x000665f5) main_cam6_set_pane_g2_ParamLimits

0x7889,	// (0x000665f5) main_cam6_set_pane_g2

0x78af,	// (0x0006661b) main_cset6_listscroll_pane_ParamLimits

0x78af,	// (0x0006661b) main_cset6_listscroll_pane

0x78cd,	// (0x00066639) main_cset6_slider_pane_ParamLimits

0x78cd,	// (0x00066639) main_cset6_slider_pane

0x78e3,	// (0x0006664f) main_cset6_text2_pane_ParamLimits

0x78e3,	// (0x0006664f) main_cset6_text2_pane

0xd21a,	// (0x0006bf86) main_cset6_text_pane

0xd222,	// (0x0006bf8e) main_cset_list_pane_copy1_ParamLimits

0xd222,	// (0x0006bf8e) main_cset_list_pane_copy1

0xd232,	// (0x0006bf9e) scroll_pane_cp028_copy1

0x78f1,	// (0x0006665d) cset_list_set_pane_copy1

0x7905,	// (0x00066671) aid_position_infowindow_above_copy1

0x790d,	// (0x00066679) aid_position_infowindow_below_copy1

0x7915,	// (0x00066681) cset_list_set_pane_g1_copy1

0x791d,	// (0x00066689) cset_list_set_pane_g3_copy1_ParamLimits

0x791d,	// (0x00066689) cset_list_set_pane_g3_copy1

0x792c,	// (0x00066698) cset_list_set_pane_t1_copy1_ParamLimits

0x792c,	// (0x00066698) cset_list_set_pane_t1_copy1

0xdff8,	// (0x0006cd64) list_highlight_pane_cp021_copy1_ParamLimits

0xdff8,	// (0x0006cd64) list_highlight_pane_cp021_copy1

0xd23b,	// (0x0006bfa7) cset6_slider_pane_ParamLimits

0xd23b,	// (0x0006bfa7) cset6_slider_pane

0xd267,	// (0x0006bfd3) main_cset6_slider_pane_g1_ParamLimits

0xd267,	// (0x0006bfd3) main_cset6_slider_pane_g1

0x7941,	// (0x000666ad) main_cset6_slider_pane_g2_ParamLimits

0x7941,	// (0x000666ad) main_cset6_slider_pane_g2

0xd28f,	// (0x0006bffb) main_cset6_slider_pane_g3_ParamLimits

0xd28f,	// (0x0006bffb) main_cset6_slider_pane_g3

0x7969,	// (0x000666d5) main_cset6_slider_pane_g4_ParamLimits

0x7969,	// (0x000666d5) main_cset6_slider_pane_g4

0x7975,	// (0x000666e1) main_cset6_slider_pane_g5_ParamLimits

0x7975,	// (0x000666e1) main_cset6_slider_pane_g5

0xc86d,	// (0x0006b5d9) main_cset6_slider_pane_g7_ParamLimits

0xc86d,	// (0x0006b5d9) main_cset6_slider_pane_g7

0xc879,	// (0x0006b5e5) main_cset6_slider_pane_g8_ParamLimits

0xc879,	// (0x0006b5e5) main_cset6_slider_pane_g8

0x684b,	// (0x000655b7) main_cset6_slider_pane_g9_ParamLimits

0x684b,	// (0x000655b7) main_cset6_slider_pane_g9

0x6857,	// (0x000655c3) main_cset6_slider_pane_g10_ParamLimits

0x6857,	// (0x000655c3) main_cset6_slider_pane_g10

0x6863,	// (0x000655cf) main_cset6_slider_pane_g11_ParamLimits

0x6863,	// (0x000655cf) main_cset6_slider_pane_g11

0x686f,	// (0x000655db) main_cset6_slider_pane_g12_ParamLimits

0x686f,	// (0x000655db) main_cset6_slider_pane_g12

0x687b,	// (0x000655e7) main_cset6_slider_pane_g13_ParamLimits

0x687b,	// (0x000655e7) main_cset6_slider_pane_g13

0x6887,	// (0x000655f3) main_cset6_slider_pane_g14_ParamLimits

0x6887,	// (0x000655f3) main_cset6_slider_pane_g14

0x7983,	// (0x000666ef) main_cset6_slider_pane_g15_ParamLimits

0x7983,	// (0x000666ef) main_cset6_slider_pane_g15

0x68ab,	// (0x00065617) main_cset6_slider_pane_g16_ParamLimits

0x68ab,	// (0x00065617) main_cset6_slider_pane_g16

0x68b9,	// (0x00065625) main_cset6_slider_pane_g17_ParamLimits

0x68b9,	// (0x00065625) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x0006e8e7) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x0006e8e7) main_cset6_slider_pane_g

0xd29b,	// (0x0006c007) main_cset6_slider_pane_t1_ParamLimits

0xd29b,	// (0x0006c007) main_cset6_slider_pane_t1

0x79b3,	// (0x0006671f) main_cset6_slider_pane_t2_ParamLimits

0x79b3,	// (0x0006671f) main_cset6_slider_pane_t2

0x79de,	// (0x0006674a) main_cset6_slider_pane_t3_ParamLimits

0x79de,	// (0x0006674a) main_cset6_slider_pane_t3

0x7a09,	// (0x00066775) main_cset6_slider_pane_t4_ParamLimits

0x7a09,	// (0x00066775) main_cset6_slider_pane_t4

0x7a36,	// (0x000667a2) main_cset6_slider_pane_t5_ParamLimits

0x7a36,	// (0x000667a2) main_cset6_slider_pane_t5

0xd2dc,	// (0x0006c048) main_cset6_slider_pane_t7_ParamLimits

0xd2dc,	// (0x0006c048) main_cset6_slider_pane_t7

0x7a63,	// (0x000667cf) main_cset6_slider_pane_t8_ParamLimits

0x7a63,	// (0x000667cf) main_cset6_slider_pane_t8

0x7a87,	// (0x000667f3) main_cset6_slider_pane_t9_ParamLimits

0x7a87,	// (0x000667f3) main_cset6_slider_pane_t9

0x7aab,	// (0x00066817) main_cset6_slider_pane_t10_ParamLimits

0x7aab,	// (0x00066817) main_cset6_slider_pane_t10

0x7acf,	// (0x0006683b) main_cset6_slider_pane_t11_ParamLimits

0x7acf,	// (0x0006683b) main_cset6_slider_pane_t11

0xd312,	// (0x0006c07e) main_cset6_slider_pane_t14_ParamLimits

0xd312,	// (0x0006c07e) main_cset6_slider_pane_t14

0xd34b,	// (0x0006c0b7) main_cset6_slider_pane_t15_ParamLimits

0xd34b,	// (0x0006c0b7) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x0006e90c) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x0006e90c) main_cset6_slider_pane_t

0xd384,	// (0x0006c0f0) cset_slider_pane_g1_copy1

0xd38d,	// (0x0006c0f9) cset_slider_pane_g2_copy1

0xd396,	// (0x0006c102) cset_slider_pane_g3_copy1

0xdd9d,	// (0x0006cb09) bg_popup_sub_pane_cp011_copy1

0xd39f,	// (0x0006c10b) main_cset_text_pane_g1_copy1

0xc9b5,	// (0x0006b721) main_cset_text_pane_t1_copy1

0xc9c3,	// (0x0006b72f) main_cset_text_pane_t2_copy1

0xc9d1,	// (0x0006b73d) main_cset_text_pane_t3_copy1

0xc9df,	// (0x0006b74b) main_cset_text_pane_t4_copy1

0xc9ed,	// (0x0006b759) main_cset_text_pane_t5_copy1

0xd3a7,	// (0x0006c113) main_cset_text_pane_t6_copy1

0xd3b5,	// (0x0006c121) main_cset_text_pane_t7_copy1

0x7868,	// (0x000665d4) main_cset_text2_pane_t1_copy1

0x9c59,	// (0x000689c5) main_ncimui_pane

0x3df7,	// (0x00062b63) popup_query_ncimui_window_ParamLimits

0x3df7,	// (0x00062b63) popup_query_ncimui_window

0x4af9,	// (0x00063865) field_cale_ev2_pane_g4_ParamLimits

0x4af9,	// (0x00063865) field_cale_ev2_pane_g4

0x5a67,	// (0x000647d3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5a67,	// (0x000647d3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0006e60c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0006e60c) cell_video_dialer_keypad_pane_g

0x5a7f,	// (0x000647eb) cell_video_dialer_keypad_pane_t1

0xdd9d,	// (0x0006cb09) bg_popup_window_pane_cp012

0x9db4,	// (0x00068b20) heading_pane_cp06

0xd3e1,	// (0x0006c14d) ncim_query_content_pane

0xdd9d,	// (0x0006cb09) bg_popup_heading_pane_cp01

0xd3e9,	// (0x0006c155) ncim_heading_pane_t1

0xd3f7,	// (0x0006c163) ncim_indicator_popup_pane

0xd409,	// (0x0006c175) ncim_query_button_pane

0xd41f,	// (0x0006c18b) ncim_query_content_pane_t1

0xd431,	// (0x0006c19d) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x0006e950) ncim_query_content_pane_t

0xd46b,	// (0x0006c1d7) ncim_query_list_pane

0xd47d,	// (0x0006c1e9) ncim_query_popup_pane

0xd3f7,	// (0x0006c163) ncim_indicator_popup_pane_ParamLimits

0x7cec,	// (0x00066a58) ncim_query_content_pane_g1_ParamLimits

0x7cec,	// (0x00066a58) ncim_query_content_pane_g1

0xd41f,	// (0x0006c18b) ncim_query_content_pane_t1_ParamLimits

0xd431,	// (0x0006c19d) ncim_query_content_pane_t2_ParamLimits

0x7cf8,	// (0x00066a64) ncim_query_content_pane_t3_ParamLimits

0x7cf8,	// (0x00066a64) ncim_query_content_pane_t3

0x7d20,	// (0x00066a8c) ncim_query_content_pane_t4_ParamLimits

0x7d20,	// (0x00066a8c) ncim_query_content_pane_t4

0x7d48,	// (0x00066ab4) ncim_query_content_pane_t5_ParamLimits

0x7d48,	// (0x00066ab4) ncim_query_content_pane_t5

0xd443,	// (0x0006c1af) ncim_query_content_pane_t6_ParamLimits

0xd443,	// (0x0006c1af) ncim_query_content_pane_t6

0xfbe4,	// (0x0006e950) ncim_query_content_pane_t_ParamLimits

0xd46b,	// (0x0006c1d7) ncim_query_list_pane_ParamLimits

0xd47d,	// (0x0006c1e9) ncim_query_popup_pane_ParamLimits

0xd491,	// (0x0006c1fd) wait_bar_pane_cp04

0xdd9d,	// (0x0006cb09) input_focus_pane_cp011

0xd499,	// (0x0006c205) ncim_query_popup_pane_t1

0xd4a7,	// (0x0006c213) ncim_list_query_list_pane_ParamLimits

0xd4a7,	// (0x0006c213) ncim_list_query_list_pane

0xdd9d,	// (0x0006cb09) bg_button_pane_cp027

0xd4ba,	// (0x0006c226) ncim_query_button_pane_g1

0xdd9d,	// (0x0006cb09) list_highlight_pane_cp012

0xd4c4,	// (0x0006c230) ncim_list_query_list_pane_g1

0xd4cc,	// (0x0006c238) ncim_list_query_list_pane_t1

0xc63d,	// (0x0006b3a9) cam4_indicators_pane_g3_ParamLimits

0xc63d,	// (0x0006b3a9) cam4_indicators_pane_g3

0xc6c0,	// (0x0006b42c) vid4_indicators_pane_g5_ParamLimits

0xc6c0,	// (0x0006b42c) vid4_indicators_pane_g5

0xce20,	// (0x0006bb8c) vid4_progress_pane_g5_ParamLimits

0xce20,	// (0x0006bb8c) vid4_progress_pane_g5

0x7bda,	// (0x00066946) main_ncimui_pane_g1

0x7c40,	// (0x000669ac) ncimui_group_query_pane_ParamLimits

0x7c40,	// (0x000669ac) ncimui_group_query_pane

0x7c88,	// (0x000669f4) ncimui_list_pane_ParamLimits

0x7c88,	// (0x000669f4) ncimui_list_pane

0x7caf,	// (0x00066a1b) ncimui_text_pane_ParamLimits

0x7caf,	// (0x00066a1b) ncimui_text_pane

0x7d70,	// (0x00066adc) ncimui_text_pane_t1_ParamLimits

0x7d70,	// (0x00066adc) ncimui_text_pane_t1

0xd4da,	// (0x0006c246) ncimui_list_single_graphic_pane_ParamLimits

0xd4da,	// (0x0006c246) ncimui_list_single_graphic_pane

0x7d8e,	// (0x00066afa) ncimui_query_pane_ParamLimits

0x7d8e,	// (0x00066afa) ncimui_query_pane

0xdd9d,	// (0x0006cb09) list_highlight_pane_cp013

0xd4ea,	// (0x0006c256) ncim_list_query_list_pane_t1_copy1

0xd4c4,	// (0x0006c230) ncim_list_single_graphic_pane_g1

0xd4f8,	// (0x0006c264) ncim_query_button_pane_cp01

0xd504,	// (0x0006c270) ncim_query_entry_pane_ParamLimits

0xd504,	// (0x0006c270) ncim_query_entry_pane

0xd517,	// (0x0006c283) ncimui_query_pane_g1

0xd523,	// (0x0006c28f) ncimui_query_pane_t1_ParamLimits

0xd523,	// (0x0006c28f) ncimui_query_pane_t1

0xdff8,	// (0x0006cd64) input_focus_pane_cp012

0xd53c,	// (0x0006c2a8) ncim_query_entry_pane_t1

0xead8,	// (0x0006d844) main_im_pane_ParamLimits

0x9c59,	// (0x000689c5) main_mobtv_pane_ParamLimits

0x9c59,	// (0x000689c5) main_mobtv_pane

0x799b,	// (0x00066707) main_cset6_slider_pane_g18_ParamLimits

0x799b,	// (0x00066707) main_cset6_slider_pane_g18

0x79a7,	// (0x00066713) main_cset6_slider_pane_g19_ParamLimits

0x79a7,	// (0x00066713) main_cset6_slider_pane_g19

0x7da1,	// (0x00066b0d) bg_main_mobtv_pane_ParamLimits

0x7da1,	// (0x00066b0d) bg_main_mobtv_pane

0x7daf,	// (0x00066b1b) main_mobtv_info_pane

0x7dba,	// (0x00066b26) main_mobtv_loading_pane_ParamLimits

0x7dba,	// (0x00066b26) main_mobtv_loading_pane

0xd54e,	// (0x0006c2ba) main_mobtv_pg_channel_list_pane

0xd558,	// (0x0006c2c4) main_mobtv_pg_hdr_pane

0x7dc7,	// (0x00066b33) main_mobtv_programe_curr_pane_ParamLimits

0x7dc7,	// (0x00066b33) main_mobtv_programe_curr_pane

0x7dd4,	// (0x00066b40) main_mobtv_programe_next_pane_ParamLimits

0x7dd4,	// (0x00066b40) main_mobtv_programe_next_pane

0xd561,	// (0x0006c2cd) popup_mobtv_noti_window

0xb9a4,	// (0x0006a710) main_tv_pg_hdr_pane_g1

0xd56b,	// (0x0006c2d7) main_tv_pg_hdr_pane_g2

0xd573,	// (0x0006c2df) main_tv_pg_hdr_pane_g3

0xd57b,	// (0x0006c2e7) main_tv_pg_hdr_pane_g4

0xd583,	// (0x0006c2ef) main_tv_pg_hdr_pane_g5

0xd58d,	// (0x0006c2f9) main_tv_pg_hdr_pane_g6

0xd597,	// (0x0006c303) main_tv_pg_hdr_pane_g7

0xd5a1,	// (0x0006c30d) main_tv_pg_hdr_pane_g8

0xd5ab,	// (0x0006c317) main_tv_pg_hdr_pane_g9

0xd5b5,	// (0x0006c321) main_tv_pg_hdr_pane_g10

0xd5bf,	// (0x0006c32b) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x0006e95d) main_tv_pg_hdr_pane_g

0xd5c9,	// (0x0006c335) main_tv_pg_hdr_pane_t1

0xd5d7,	// (0x0006c343) main_tv_pg_hdr_pane_t2

0xd5e5,	// (0x0006c351) main_tv_pg_hdr_pane_t3

0xd5f5,	// (0x0006c361) main_tv_pg_hdr_pane_t4

0xd605,	// (0x0006c371) main_tv_pg_hdr_pane_t5

0x0004,

0x0345,	// (0x0005f0b1) main_tv_pg_hdr_pane_t

0xd615,	// (0x0006c381) single_mobtv_pg_channel_pane_ParamLimits

0xd615,	// (0x0006c381) single_mobtv_pg_channel_pane

0xd627,	// (0x0006c393) single_mobtv_pg_channel_table_pane

0xd630,	// (0x0006c39c) single_mobtv_pg_channel_thumb_pane

0xd639,	// (0x0006c3a5) single_tv_pg_channel_pane_g1

0xd642,	// (0x0006c3ae) single_tv_pg_channel_pane_g2

0x0001,

0x0350,	// (0x0005f0bc) single_tv_pg_channel_pane_g

0xbbd4,	// (0x0006a940) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbbd4,	// (0x0006a940) bg_single_mobtv_pg_channel_thumb_pane

0xd64b,	// (0x0006c3b7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd64b,	// (0x0006c3b7) single_mobtv_pg_channel_thumb_pane_g1

0xd659,	// (0x0006c3c5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd659,	// (0x0006c3c5) single_mobtv_pg_channel_thumb_pane_g2

0xd665,	// (0x0006c3d1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd665,	// (0x0006c3d1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0355,	// (0x0005f0c1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0355,	// (0x0005f0c1) single_mobtv_pg_channel_thumb_pane_g

0xd671,	// (0x0006c3dd) single_mobtv_pg_channel_thumb_pane_t1

0xd67f,	// (0x0006c3eb) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x035c,	// (0x0005f0c8) single_mobtv_pg_channel_thumb_pane_t

0xb9a4,	// (0x0006a710) bg_single_mobtv_pg_channel_table_pane_g1

0xb9a4,	// (0x0006a710) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x0006e458) bg_single_mobtv_pg_channel_table_pane_g

0xd68d,	// (0x0006c3f9) single_mobtv_pg_channel_table_pane_t1

0xd69b,	// (0x0006c407) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0361,	// (0x0005f0cd) single_mobtv_pg_channel_table_pane_t

0x7de9,	// (0x00066b55) main_mobtv_info_pane_g1_ParamLimits

0x7de9,	// (0x00066b55) main_mobtv_info_pane_g1

0x7e07,	// (0x00066b73) main_mobtv_info_pane_t1_ParamLimits

0x7e07,	// (0x00066b73) main_mobtv_info_pane_t1

0x7e7f,	// (0x00066beb) main_mobtv_info_pane_t2_ParamLimits

0x7e7f,	// (0x00066beb) main_mobtv_info_pane_t2

0x0002,

0xfc0d,	// (0x0006e979) main_mobtv_info_pane_t_ParamLimits

0xfc0d,	// (0x0006e979) main_mobtv_info_pane_t

0x7f10,	// (0x00066c7c) wait_bar_pane_cp05

0x7f22,	// (0x00066c8e) main_mobtv_loading_pane_g1_ParamLimits

0x7f22,	// (0x00066c8e) main_mobtv_loading_pane_g1

0x7f33,	// (0x00066c9f) main_mobtv_loading_pane_g2_ParamLimits

0x7f33,	// (0x00066c9f) main_mobtv_loading_pane_g2

0x7f3f,	// (0x00066cab) main_mobtv_loading_pane_g3_ParamLimits

0x7f3f,	// (0x00066cab) main_mobtv_loading_pane_g3

0x0002,

0xfc14,	// (0x0006e980) main_mobtv_loading_pane_g_ParamLimits

0xfc14,	// (0x0006e980) main_mobtv_loading_pane_g

0xd6a9,	// (0x0006c415) main_mobtv_loading_pane_t1_ParamLimits

0xd6a9,	// (0x0006c415) main_mobtv_loading_pane_t1

0xd6c1,	// (0x0006c42d) main_mobtv_loading_pane_t2_ParamLimits

0xd6c1,	// (0x0006c42d) main_mobtv_loading_pane_t2

0x0001,

0x0379,	// (0x0005f0e5) main_mobtv_loading_pane_t_ParamLimits

0x0379,	// (0x0005f0e5) main_mobtv_loading_pane_t

0x7f52,	// (0x00066cbe) wait_bar_pane_cp06_ParamLimits

0x7f52,	// (0x00066cbe) wait_bar_pane_cp06

0xd6e5,	// (0x0006c451) main_mobtv_programe_curr_pane_t1

0xd6f3,	// (0x0006c45f) main_mobtv_programe_curr_pane_t2

0x0001,

0x037e,	// (0x0005f0ea) main_mobtv_programe_curr_pane_t

0xd701,	// (0x0006c46d) main_mobtv_programe_next_pane_t1

0xd70f,	// (0x0006c47b) main_mobtv_programe_next_pane_t2

0xd71d,	// (0x0006c489) main_mobtv_programe_next_pane_t3

0x0002,

0x0383,	// (0x0005f0ef) main_mobtv_programe_next_pane_t

0xdd9d,	// (0x0006cb09) bg_popup_mobtv_noti_window_pane

0xd72b,	// (0x0006c497) popup_mobtv_noti_window_g1

0xd733,	// (0x0006c49f) popup_mobtv_noti_window_t1

0xd741,	// (0x0006c4ad) popup_mobtv_noti_window_t2

0x0001,

0x038a,	// (0x0005f0f6) popup_mobtv_noti_window_t

0xb9a4,	// (0x0006a710) bg_popup_mobtv_noti_window_pane_g1

0x9c67,	// (0x000689d3) sc_clock_pane

0x9c67,	// (0x000689d3) main_fs_bigclock_pane

0x75bc,	// (0x00066328) blid2_tripm_pane_t4_ParamLimits

0x75bc,	// (0x00066328) blid2_tripm_pane_t4

0x7f61,	// (0x00066ccd) sc_clock_pane_g1_ParamLimits

0x7f61,	// (0x00066ccd) sc_clock_pane_g1

0x7f73,	// (0x00066cdf) sc_clock_pane_t1_ParamLimits

0x7f73,	// (0x00066cdf) sc_clock_pane_t1

0x7f97,	// (0x00066d03) sc_clock_pane_t2_ParamLimits

0x7f97,	// (0x00066d03) sc_clock_pane_t2

0x7faf,	// (0x00066d1b) sc_clock_pane_t3_ParamLimits

0x7faf,	// (0x00066d1b) sc_clock_pane_t3

0x0004,

0xfc1b,	// (0x0006e987) sc_clock_pane_t_ParamLimits

0xfc1b,	// (0x0006e987) sc_clock_pane_t

0x917e,	// (0x00067eea) main_fs_bigclock_indicator_pane_ParamLimits

0x917e,	// (0x00067eea) main_fs_bigclock_indicator_pane

0xbba4,	// (0x0006a910) main_fs_bigclock_pane_g1_ParamLimits

0xbba4,	// (0x0006a910) main_fs_bigclock_pane_g1

0x918a,	// (0x00067ef6) main_fs_bigclock_pane_t1_ParamLimits

0x918a,	// (0x00067ef6) main_fs_bigclock_pane_t1

0x919c,	// (0x00067f08) main_fs_bigclock_pane_t2_ParamLimits

0x919c,	// (0x00067f08) main_fs_bigclock_pane_t2

0x91b0,	// (0x00067f1c) main_fs_bigclock_pane_t3_ParamLimits

0x91b0,	// (0x00067f1c) main_fs_bigclock_pane_t3

0x0002,

0xfddd,	// (0x0006eb49) main_fs_bigclock_pane_t_ParamLimits

0xfddd,	// (0x0006eb49) main_fs_bigclock_pane_t

0xe2b7,	// (0x0006d023) main_fs_bigclock_indicator_pane_g1

0xd411,	// (0x0006c17d) ncim_query_content_pane_g2_ParamLimits

0xd411,	// (0x0006c17d) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x0006e94b) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x0006e94b) ncim_query_content_pane_g

0x7fc6,	// (0x00066d32) sc_clock_pane_t4_ParamLimits

0x7fc6,	// (0x00066d32) sc_clock_pane_t4

0x9c59,	// (0x000689c5) main_radioblah_pane

0xc55c,	// (0x0006b2c8) cell_call4_button_pane_t1_copy1_ParamLimits

0xc55c,	// (0x0006b2c8) cell_call4_button_pane_t1_copy1

0x7bf2,	// (0x0006695e) main_ncimui_pane_t1_ParamLimits

0x7bf2,	// (0x0006695e) main_ncimui_pane_t1

0x7c0c,	// (0x00066978) main_ncimui_pane_t2_ParamLimits

0x7c0c,	// (0x00066978) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x0006e944) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x0006e944) main_ncimui_pane_t

0xd88d,	// (0x0006c5f9) main_radioblah_anim_pane_ParamLimits

0xd88d,	// (0x0006c5f9) main_radioblah_anim_pane

0xd89e,	// (0x0006c60a) main_radioblah_info_pane_ParamLimits

0xd89e,	// (0x0006c60a) main_radioblah_info_pane

0xd8b2,	// (0x0006c61e) main_radioblah_pane_t1_ParamLimits

0xd8b2,	// (0x0006c61e) main_radioblah_pane_t1

0xd8ce,	// (0x0006c63a) main_radioblah_pane_t2_ParamLimits

0xd8ce,	// (0x0006c63a) main_radioblah_pane_t2

0x0003,

0x03b0,	// (0x0005f11c) main_radioblah_pane_t_ParamLimits

0x03b0,	// (0x0005f11c) main_radioblah_pane_t

0x8076,	// (0x00066de2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8076,	// (0x00066de2) main_radioblah_rocker_ctrl_pane

0xd916,	// (0x0006c682) main_radioblah_info_pane_t1_ParamLimits

0xd916,	// (0x0006c682) main_radioblah_info_pane_t1

0x80ce,	// (0x00066e3a) main_radioblah_info_pane_t2_ParamLimits

0x80ce,	// (0x00066e3a) main_radioblah_info_pane_t2

0x0003,

0xfc26,	// (0x0006e992) main_radioblah_info_pane_t_ParamLimits

0xfc26,	// (0x0006e992) main_radioblah_info_pane_t

0xb9a4,	// (0x0006a710) main_radioblah_rocker_ctrl_pane_g1

0x817e,	// (0x00066eea) main_radioblah_rocker_ctrl_pane_g2

0x8186,	// (0x00066ef2) main_radioblah_rocker_ctrl_pane_g3

0x818e,	// (0x00066efa) main_radioblah_rocker_ctrl_pane_g4

0x8196,	// (0x00066f02) main_radioblah_rocker_ctrl_pane_g5

0x819e,	// (0x00066f0a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2f,	// (0x0006e99b) main_radioblah_rocker_ctrl_pane_g

0x7868,	// (0x000665d4) main_cset_text2_pane_t1_copy1_ParamLimits

0xc5ec,	// (0x0006b358) cam4_image_uncrop_qvga_pane

0xc663,	// (0x0006b3cf) vid4_image_uncrop_qcif_pane

0xd023,	// (0x0006bd8f) cam6_image_uncrop_qvga_pane_ParamLimits

0xd023,	// (0x0006bd8f) cam6_image_uncrop_qvga_pane

0xd0f9,	// (0x0006be65) vid6_image_uncrop_qcif_pane_ParamLimits

0xd0f9,	// (0x0006be65) vid6_image_uncrop_qcif_pane

0xdd9d,	// (0x0006cb09) bg_popup_preview_window_pane_cp03

0xd3c3,	// (0x0006c12f) list_cset_text2_pane

0xd3cb,	// (0x0006c137) main_cset6_text2_pane_g1

0xd3d3,	// (0x0006c13f) main_cset6_text2_pane_t1

0xd950,	// (0x0006c6bc) list_cset_text2_pane_t1_ParamLimits

0xd950,	// (0x0006c6bc) list_cset_text2_pane_t1

0x9c59,	// (0x000689c5) main_radioblah_pane_ParamLimits

0x7efc,	// (0x00066c68) main_mobtv_info_pane_t3_ParamLimits

0x7efc,	// (0x00066c68) main_mobtv_info_pane_t3

0x8064,	// (0x00066dd0) main_radioblah_pane_g1

0x809e,	// (0x00066e0a) main_radioblah_info_pane_g1

0x8123,	// (0x00066e8f) main_radioblah_info_pane_t3_ParamLimits

0x8123,	// (0x00066e8f) main_radioblah_info_pane_t3

0x2288,	// (0x00060ff4) highlight_cell_cale_month_pane_ParamLimits

0x2288,	// (0x00060ff4) highlight_cell_cale_month_pane

0x9c67,	// (0x000689d3) main_phob_fisheye_pane

0xbcbc,	// (0x0006aa28) scroll_pane_cp0031_ParamLimits

0xbcbc,	// (0x0006aa28) scroll_pane_cp0031

0xd20b,	// (0x0006bf77) wait_bar_pane_cp08_ParamLimits

0x78f1,	// (0x0006665d) cset_list_set_pane_copy1_ParamLimits

0xd96a,	// (0x0006c6d6) highlight_cell_cale_month_pane_g1

0x81a6,	// (0x00066f12) highlight_cell_cale_month_pane_t1

0xcbed,	// (0x0006b959) list_gen_pane_cp01

0xc858,	// (0x0006b5c4) scroll_pane_01

0x81b4,	// (0x00066f20) list_single_double_fisheye_pane

0x81bd,	// (0x00066f29) list_double_fisheye_pane_g1_ParamLimits

0x81bd,	// (0x00066f29) list_double_fisheye_pane_g1

0x81c9,	// (0x00066f35) list_double_fisheye_pane_g2_ParamLimits

0x81c9,	// (0x00066f35) list_double_fisheye_pane_g2

0x81dd,	// (0x00066f49) list_double_fisheye_pane_g3_ParamLimits

0x81dd,	// (0x00066f49) list_double_fisheye_pane_g3

0x0004,

0xfc3c,	// (0x0006e9a8) list_double_fisheye_pane_g_ParamLimits

0xfc3c,	// (0x0006e9a8) list_double_fisheye_pane_g

0x8206,	// (0x00066f72) list_double_fisheye_pane_t1_ParamLimits

0x8206,	// (0x00066f72) list_double_fisheye_pane_t1

0x8221,	// (0x00066f8d) list_double_fisheye_pane_t2_ParamLimits

0x8221,	// (0x00066f8d) list_double_fisheye_pane_t2

0x0001,

0xfc47,	// (0x0006e9b3) list_double_fisheye_pane_t_ParamLimits

0xfc47,	// (0x0006e9b3) list_double_fisheye_pane_t

0x9c67,	// (0x000689d3) main_call5_pane

0x7ff1,	// (0x00066d5d) sc_swipe_pane_ParamLimits

0x7ff1,	// (0x00066d5d) sc_swipe_pane

0x8256,	// (0x00066fc2) call5_image_pane_ParamLimits

0x8256,	// (0x00066fc2) call5_image_pane

0x8273,	// (0x00066fdf) call5_swipe_1_pane_ParamLimits

0x8273,	// (0x00066fdf) call5_swipe_1_pane

0x8286,	// (0x00066ff2) call5_swipe_2_pane_ParamLimits

0x8286,	// (0x00066ff2) call5_swipe_2_pane

0x82b3,	// (0x0006701f) popup_call5_audio_first_window_ParamLimits

0x82b3,	// (0x0006701f) popup_call5_audio_first_window

0xbbd4,	// (0x0006a940) call5_swipe_1_pane_g1_ParamLimits

0xbbd4,	// (0x0006a940) call5_swipe_1_pane_g1

0xd972,	// (0x0006c6de) call5_swipe_1_pane_g2_ParamLimits

0xd972,	// (0x0006c6de) call5_swipe_1_pane_g2

0x0001,

0xfc4c,	// (0x0006e9b8) call5_swipe_1_pane_g_ParamLimits

0xfc4c,	// (0x0006e9b8) call5_swipe_1_pane_g

0xd97e,	// (0x0006c6ea) call5_swipe_1_pane_t1_ParamLimits

0xd97e,	// (0x0006c6ea) call5_swipe_1_pane_t1

0xbbd4,	// (0x0006a940) call5_swipe_2_pane_g1_ParamLimits

0xbbd4,	// (0x0006a940) call5_swipe_2_pane_g1

0xd993,	// (0x0006c6ff) call5_swipe_2_pane_g2_ParamLimits

0xd993,	// (0x0006c6ff) call5_swipe_2_pane_g2

0x0001,

0xfc51,	// (0x0006e9bd) call5_swipe_2_pane_g_ParamLimits

0xfc51,	// (0x0006e9bd) call5_swipe_2_pane_g

0xd99f,	// (0x0006c70b) call5_swipe_2_pane_t1_ParamLimits

0xd99f,	// (0x0006c70b) call5_swipe_2_pane_t1

0xd9b4,	// (0x0006c720) sc_swipe_pane_g1_ParamLimits

0xd9b4,	// (0x0006c720) sc_swipe_pane_g1

0xd9c1,	// (0x0006c72d) sc_swipe_pane_g2_ParamLimits

0xd9c1,	// (0x0006c72d) sc_swipe_pane_g2

0x0001,

0xfc56,	// (0x0006e9c2) sc_swipe_pane_g_ParamLimits

0xfc56,	// (0x0006e9c2) sc_swipe_pane_g

0xd9cd,	// (0x0006c739) sc_swipe_pane_t1_ParamLimits

0xd9cd,	// (0x0006c739) sc_swipe_pane_t1

0x9c67,	// (0x000689d3) main_cmail_launcher_pane

0x82c8,	// (0x00067034) aid_size_cell_cmail_l_ParamLimits

0x82c8,	// (0x00067034) aid_size_cell_cmail_l

0x82e2,	// (0x0006704e) grid_cmail_l_pane_ParamLimits

0x82e2,	// (0x0006704e) grid_cmail_l_pane

0x82fd,	// (0x00067069) cell_cmail_l_pane_ParamLimits

0x82fd,	// (0x00067069) cell_cmail_l_pane

0x8325,	// (0x00067091) cell_cmail_l_pane_g1_ParamLimits

0x8325,	// (0x00067091) cell_cmail_l_pane_g1

0x8331,	// (0x0006709d) cell_cmail_l_pane_t1_ParamLimits

0x8331,	// (0x0006709d) cell_cmail_l_pane_t1

0xd9e2,	// (0x0006c74e) cell_cmail_l_pane_t2_ParamLimits

0xd9e2,	// (0x0006c74e) cell_cmail_l_pane_t2

0x0001,

0xfc5b,	// (0x0006e9c7) cell_cmail_l_pane_t_ParamLimits

0xfc5b,	// (0x0006e9c7) cell_cmail_l_pane_t

0xdff8,	// (0x0006cd64) grid_highlight_pane_cp018_ParamLimits

0xdff8,	// (0x0006cd64) grid_highlight_pane_cp018

0x083c,	// (0x0005f5a8) main2_pane_ParamLimits

0x083c,	// (0x0005f5a8) main2_pane

0xeb83,	// (0x0006d8ef) popup_sp_fs_action_menu_bg_pane_g1

0xeb8b,	// (0x0006d8f7) popup_sp_fs_action_menu_bg_pane_g2

0xeb93,	// (0x0006d8ff) popup_sp_fs_action_menu_bg_pane_g3

0xeb9b,	// (0x0006d907) popup_sp_fs_action_menu_bg_pane_g4

0xeba3,	// (0x0006d90f) popup_sp_fs_action_menu_bg_pane_g5

0xebab,	// (0x0006d917) popup_sp_fs_action_menu_bg_pane_g6

0xebb3,	// (0x0006d91f) popup_sp_fs_action_menu_bg_pane_g7

0xebbb,	// (0x0006d927) popup_sp_fs_action_menu_bg_pane_g8

0xebc3,	// (0x0006d92f) popup_sp_fs_action_menu_bg_pane_g9

0xebcb,	// (0x0006d937) popup_sp_fs_action_menu_bg_pane_g10

0xebcb,	// (0x0006d937) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0006df04) popup_sp_fs_action_menu_bg_pane_g

0xece9,	// (0x0006da55) list_medium_line_x2_t3_g3_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x2_t3_g3_g1

0xecf5,	// (0x0006da61) list_medium_line_x2_t3_g3_g2_ParamLimits

0xecf5,	// (0x0006da61) list_medium_line_x2_t3_g3_g2

0xed01,	// (0x0006da6d) list_medium_line_x2_t3_g3_g3_ParamLimits

0xed01,	// (0x0006da6d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0006dfb4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0006dfb4) list_medium_line_x2_t3_g3_g

0xed0d,	// (0x0006da79) list_medium_line_x2_t3_g3_t1_ParamLimits

0xed0d,	// (0x0006da79) list_medium_line_x2_t3_g3_t1

0x15ce,	// (0x0006033a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x15ce,	// (0x0006033a) list_medium_line_x2_t3_g3_t2

0xed22,	// (0x0006da8e) list_medium_line_x2_t3_g3_t3_ParamLimits

0xed22,	// (0x0006da8e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0006dfbb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0006dfbb) list_medium_line_x2_t3_g3_t

0xece9,	// (0x0006da55) list_medium_line_x2_t3_g2_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x2_t3_g2_g1

0xed01,	// (0x0006da6d) list_medium_line_x2_t3_g2_g2_ParamLimits

0xed01,	// (0x0006da6d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x0006dfc2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x0006dfc2) list_medium_line_x2_t3_g2_g

0xed37,	// (0x0006daa3) list_medium_line_x2_t3_g2_t1_ParamLimits

0xed37,	// (0x0006daa3) list_medium_line_x2_t3_g2_t1

0xed4d,	// (0x0006dab9) list_medium_line_x2_t3_g2_t2_ParamLimits

0xed4d,	// (0x0006dab9) list_medium_line_x2_t3_g2_t2

0xed5f,	// (0x0006dacb) list_medium_line_x2_t3_g2_t3_ParamLimits

0xed5f,	// (0x0006dacb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0006dfc7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0006dfc7) list_medium_line_x2_t3_g2_t

0xece9,	// (0x0006da55) list_medium_line_x2_t4_g4_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x2_t4_g4_g1

0xed7d,	// (0x0006dae9) list_medium_line_x2_t4_g4_g2_ParamLimits

0xed7d,	// (0x0006dae9) list_medium_line_x2_t4_g4_g2

0xecf5,	// (0x0006da61) list_medium_line_x2_t4_g4_g3_ParamLimits

0xecf5,	// (0x0006da61) list_medium_line_x2_t4_g4_g3

0xed89,	// (0x0006daf5) list_medium_line_x2_t4_g4_g4_ParamLimits

0xed89,	// (0x0006daf5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0006dfce) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0006dfce) list_medium_line_x2_t4_g4_g

0x15e2,	// (0x0006034e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x15e2,	// (0x0006034e) list_medium_line_x2_t4_g4_t1

0x15fc,	// (0x00060368) list_medium_line_x2_t4_g4_t2_ParamLimits

0x15fc,	// (0x00060368) list_medium_line_x2_t4_g4_t2

0x1612,	// (0x0006037e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1612,	// (0x0006037e) list_medium_line_x2_t4_g4_t3

0xed95,	// (0x0006db01) list_medium_line_x2_t4_g4_t4_ParamLimits

0xed95,	// (0x0006db01) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0006dfd7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0006dfd7) list_medium_line_x2_t4_g4_t

0xece9,	// (0x0006da55) list_medium_line_x2_t2_g4_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x2_t2_g4_g1

0xed7d,	// (0x0006dae9) list_medium_line_x2_t2_g4_g2_ParamLimits

0xed7d,	// (0x0006dae9) list_medium_line_x2_t2_g4_g2

0xecf5,	// (0x0006da61) list_medium_line_x2_t2_g4_g3_ParamLimits

0xecf5,	// (0x0006da61) list_medium_line_x2_t2_g4_g3

0xed01,	// (0x0006da6d) list_medium_line_x2_t2_g4_g4_ParamLimits

0xed01,	// (0x0006da6d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0006e03e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0006e03e) list_medium_line_x2_t2_g4_g

0xf083,	// (0x0006ddef) list_medium_line_x2_t2_g4_t1_ParamLimits

0xf083,	// (0x0006ddef) list_medium_line_x2_t2_g4_t1

0xed22,	// (0x0006da8e) list_medium_line_x2_t2_g4_t2_ParamLimits

0xed22,	// (0x0006da8e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0006e047) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0006e047) list_medium_line_x2_t2_g4_t

0xece9,	// (0x0006da55) list_medium_line_x2_t2_g3_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x2_t2_g3_g1

0xecf5,	// (0x0006da61) list_medium_line_x2_t2_g3_g2_ParamLimits

0xecf5,	// (0x0006da61) list_medium_line_x2_t2_g3_g2

0xed01,	// (0x0006da6d) list_medium_line_x2_t2_g3_g3_ParamLimits

0xed01,	// (0x0006da6d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0006dfb4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0006dfb4) list_medium_line_x2_t2_g3_g

0xf098,	// (0x0006de04) list_medium_line_x2_t2_g3_t1_ParamLimits

0xf098,	// (0x0006de04) list_medium_line_x2_t2_g3_t1

0xed22,	// (0x0006da8e) list_medium_line_x2_t2_g3_t2_ParamLimits

0xed22,	// (0x0006da8e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0006e04c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0006e04c) list_medium_line_x2_t2_g3_t

0x25d8,	// (0x00061344) main_sp_fs_list_pane_ParamLimits

0x25d8,	// (0x00061344) main_sp_fs_list_pane

0x25e4,	// (0x00061350) sp_fs_scroll_pane_ParamLimits

0x25e4,	// (0x00061350) sp_fs_scroll_pane

0x25f0,	// (0x0006135c) list_medium_line_x2_t3_t1

0x2600,	// (0x0006136c) list_medium_line_x2_t3_t2

0x260e,	// (0x0006137a) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0006e097) list_medium_line_x2_t3_t

0x261c,	// (0x00061388) list_medium_line_x3_t4_t1

0x262c,	// (0x00061398) list_medium_line_x3_t4_t2

0x263a,	// (0x000613a6) list_medium_line_x3_t4_t3

0x260e,	// (0x0006137a) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0006e09e) list_medium_line_x3_t4_t

0x2648,	// (0x000613b4) list_medium_line_x4_t5_t1

0x2658,	// (0x000613c4) list_medium_line_x4_t5_t2

0x263a,	// (0x000613a6) list_medium_line_x4_t5_t3

0x2666,	// (0x000613d2) list_medium_line_x4_t5_t4

0x260e,	// (0x0006137a) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0006e0a7) list_medium_line_x4_t5_t

0xece9,	// (0x0006da55) list_medium_line_t4_g4_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_t4_g4_g1

0xed89,	// (0x0006daf5) list_medium_line_t4_g4_g2_ParamLimits

0xed89,	// (0x0006daf5) list_medium_line_t4_g4_g2

0x2674,	// (0x000613e0) list_medium_line_t4_g4_g3_ParamLimits

0x2674,	// (0x000613e0) list_medium_line_t4_g4_g3

0xed01,	// (0x0006da6d) list_medium_line_t4_g4_g4_ParamLimits

0xed01,	// (0x0006da6d) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x0006e0b2) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x0006e0b2) list_medium_line_t4_g4_g

0x2680,	// (0x000613ec) list_medium_line_t4_g4_t1_ParamLimits

0x2680,	// (0x000613ec) list_medium_line_t4_g4_t1

0x2695,	// (0x00061401) list_medium_line_t4_g4_t2_ParamLimits

0x2695,	// (0x00061401) list_medium_line_t4_g4_t2

0x26ab,	// (0x00061417) list_medium_line_t4_g4_t3_ParamLimits

0x26ab,	// (0x00061417) list_medium_line_t4_g4_t3

0xed22,	// (0x0006da8e) list_medium_line_t4_g4_t4_ParamLimits

0xed22,	// (0x0006da8e) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0006e0bb) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0006e0bb) list_medium_line_t4_g4_t

0x28fe,	// (0x0006166a) chi_dic_find_pane_g1

0x3b7d,	// (0x000628e9) main_tport_pane

0x6b95,	// (0x00065901) list_medium_line_plain_t1

0x6c49,	// (0x000659b5) list_medium_line_t2_g2_g1_ParamLimits

0x6c49,	// (0x000659b5) list_medium_line_t2_g2_g1

0x6c55,	// (0x000659c1) list_medium_line_t2_g2_g2_ParamLimits

0x6c55,	// (0x000659c1) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x0006e777) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x0006e777) list_medium_line_t2_g2_g

0x6c61,	// (0x000659cd) list_medium_line_t2_g2_t1_ParamLimits

0x6c61,	// (0x000659cd) list_medium_line_t2_g2_t1

0x6c78,	// (0x000659e4) list_medium_line_t2_g2_t2_ParamLimits

0x6c78,	// (0x000659e4) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x0006e77c) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x0006e77c) list_medium_line_t2_g2_t

0x7359,	// (0x000660c5) aid_sp_fs_list_icon_a_sm

0x7361,	// (0x000660cd) aid_sp_fs_list_icon_d

0xce83,	// (0x0006bbef) aid_sp_fs_text_primary

0xce8c,	// (0x0006bbf8) aid_sp_fs_text_secondary

0x7369,	// (0x000660d5) list_medium_line

0x7369,	// (0x000660d5) list_medium_line_g2

0x7369,	// (0x000660d5) list_medium_line_g3

0x7369,	// (0x000660d5) list_medium_line_plain

0x7369,	// (0x000660d5) list_medium_line_plain_t2

0x7369,	// (0x000660d5) list_medium_line_plain_t3

0x7369,	// (0x000660d5) list_medium_line_right_icon

0x7369,	// (0x000660d5) list_medium_line_right_iconx2

0x7369,	// (0x000660d5) list_medium_line_t2

0x7369,	// (0x000660d5) list_medium_line_t2_g2

0x7369,	// (0x000660d5) list_medium_line_t2_g3

0x7369,	// (0x000660d5) list_medium_line_t2_right_icon

0x7369,	// (0x000660d5) list_medium_line_t2_right_iconx2

0x7369,	// (0x000660d5) list_medium_line_t3

0x7369,	// (0x000660d5) list_medium_line_t3_g2

0x7369,	// (0x000660d5) list_medium_line_t3_g3

0x7369,	// (0x000660d5) list_medium_line_t3_right_iconx2

0x7372,	// (0x000660de) list_medium_line_t4_g4

0x737b,	// (0x000660e7) list_medium_line_x2

0x737b,	// (0x000660e7) list_medium_line_x2_t2_g2

0x737b,	// (0x000660e7) list_medium_line_x2_t2_g3

0x737b,	// (0x000660e7) list_medium_line_x2_t2_g4

0x737b,	// (0x000660e7) list_medium_line_x2_t3

0x737b,	// (0x000660e7) list_medium_line_x2_t3_g2

0x737b,	// (0x000660e7) list_medium_line_x2_t3_g3

0x737b,	// (0x000660e7) list_medium_line_x2_t3_g4

0x737b,	// (0x000660e7) list_medium_line_x2_t4_g2

0x737b,	// (0x000660e7) list_medium_line_x2_t4_g4

0x7384,	// (0x000660f0) list_medium_line_x3

0x7384,	// (0x000660f0) list_medium_line_x3_t4

0x7384,	// (0x000660f0) list_medium_line_x3_t4_g4

0x7372,	// (0x000660de) list_medium_line_x4_t4

0x7372,	// (0x000660de) list_medium_line_x4_t4_g7

0x7372,	// (0x000660de) list_medium_line_x4_t5

0x738d,	// (0x000660f9) list_single_fs_dyc_pane_ParamLimits

0x738d,	// (0x000660f9) list_single_fs_dyc_pane

0xece9,	// (0x0006da55) list_medium_line_x4_t4_g7_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x4_t4_g7_g1

0x7af5,	// (0x00066861) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7af5,	// (0x00066861) list_medium_line_x4_t4_g7_g2

0x7b01,	// (0x0006686d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7b01,	// (0x0006686d) list_medium_line_x4_t4_g7_g3

0x7b10,	// (0x0006687c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7b10,	// (0x0006687c) list_medium_line_x4_t4_g7_g4

0x7b1c,	// (0x00066888) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7b1c,	// (0x00066888) list_medium_line_x4_t4_g7_g5

0x7b2b,	// (0x00066897) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7b2b,	// (0x00066897) list_medium_line_x4_t4_g7_g6

0x7b3a,	// (0x000668a6) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7b3a,	// (0x000668a6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x0006e925) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x0006e925) list_medium_line_x4_t4_g7_g

0x7b46,	// (0x000668b2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7b46,	// (0x000668b2) list_medium_line_x4_t4_g7_t1

0x7b5b,	// (0x000668c7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7b5b,	// (0x000668c7) list_medium_line_x4_t4_g7_t2

0x7b70,	// (0x000668dc) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7b70,	// (0x000668dc) list_medium_line_x4_t4_g7_t3

0x7b85,	// (0x000668f1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7b85,	// (0x000668f1) list_medium_line_x4_t4_g7_t4

0x7b97,	// (0x00066903) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7b97,	// (0x00066903) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x0006e934) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x0006e934) list_medium_line_x4_t4_g7_t

0x7ba9,	// (0x00066915) list_single_dyc_row_pane_ParamLimits

0x7ba9,	// (0x00066915) list_single_dyc_row_pane

0x8243,	// (0x00066faf) call5_gesture_pane_ParamLimits

0x8243,	// (0x00066faf) call5_gesture_pane

0x8299,	// (0x00067005) call5_windows_pane_ParamLimits

0x8299,	// (0x00067005) call5_windows_pane

0x8347,	// (0x000670b3) call5_swipe_1_pane_cp_ParamLimits

0x8347,	// (0x000670b3) call5_swipe_1_pane_cp

0x8353,	// (0x000670bf) call5_swipe_2_pane_cp_ParamLimits

0x8353,	// (0x000670bf) call5_swipe_2_pane_cp

0xa002,	// (0x00068d6e) call5_image_pane_cp

0x835f,	// (0x000670cb) popup_call5_audio_first_window_cp_ParamLimits

0x835f,	// (0x000670cb) popup_call5_audio_first_window_cp

0xd9b4,	// (0x0006c720) call5_swipe_1_pane_g1_cp_ParamLimits

0xd9b4,	// (0x0006c720) call5_swipe_1_pane_g1_cp

0xd9f4,	// (0x0006c760) call5_swipe_1_pane_g2_cp

0xd9cd,	// (0x0006c739) call5_swipe_1_pane_t1_cp_ParamLimits

0xd9cd,	// (0x0006c739) call5_swipe_1_pane_t1_cp

0xd9b4,	// (0x0006c720) call5_swipe_2_pane_g1_cp_ParamLimits

0xd9b4,	// (0x0006c720) call5_swipe_2_pane_g1_cp

0xd9fc,	// (0x0006c768) call5_swipe_2_pane_g2_cp

0xda04,	// (0x0006c770) call5_swipe_2_pane_t1_cp_ParamLimits

0xda04,	// (0x0006c770) call5_swipe_2_pane_t1_cp

0xdff8,	// (0x0006cd64) main_sp_fs_email_pane

0xda19,	// (0x0006c785) main_sp_fs_listscroll_pane_te

0x836d,	// (0x000670d9) popup_sp_fs_action_menu_pane_ParamLimits

0x836d,	// (0x000670d9) popup_sp_fs_action_menu_pane

0xb9a4,	// (0x0006a710) bg_sp_fs_ctrlbar_pane_g1

0xda22,	// (0x0006c78e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xda2b,	// (0x0006c797) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xda34,	// (0x0006c7a0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb9a4,	// (0x0006a710) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc60,	// (0x0006e9cc) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb783,	// (0x0006a4ef) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb783,	// (0x0006a4ef) bg_sp_fs_ctrlbar_ddmenu_pane

0xda3d,	// (0x0006c7a9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xda3d,	// (0x0006c7a9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xda49,	// (0x0006c7b5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xda49,	// (0x0006c7b5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc69,	// (0x0006e9d5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc69,	// (0x0006e9d5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xda55,	// (0x0006c7c1) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xda55,	// (0x0006c7c1) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x83b3,	// (0x0006711f) list_medium_line_t2_right_icon_g1

0x83bb,	// (0x00067127) list_medium_line_t2_right_icon_t1

0x83cb,	// (0x00067137) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6e,	// (0x0006e9da) list_medium_line_t2_right_icon_t

0xb46f,	// (0x0006a1db) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb46f,	// (0x0006a1db) bg_sp_fs_ctrlbar_pane

0x842a,	// (0x00067196) main_sp_fs_ctrlbar_button_pane_cp01

0x8434,	// (0x000671a0) main_sp_fs_ctrlbar_ddmenu_pane

0xdaa9,	// (0x0006c815) main_sp_fs_ctrlbar_pane_g1

0xdab5,	// (0x0006c821) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc73,	// (0x0006e9df) main_sp_fs_ctrlbar_pane_g

0xdac1,	// (0x0006c82d) main_sp_fs_ctrlbar_pane_t1

0x843e,	// (0x000671aa) main_sp_fs_ctrlbar_pane

0x8462,	// (0x000671ce) main_sp_fs_listscroll_pane_te_cp01

0x8482,	// (0x000671ee) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8482,	// (0x000671ee) popup_sp_fs_action_menu_pane_cp01

0xdff8,	// (0x0006cd64) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdff8,	// (0x0006cd64) bg_sp_fs_highlight_list_pane_cp01

0x84b2,	// (0x0006721e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x84b2,	// (0x0006721e) sp_fs_action_menu_list_gene_pane_g1

0xdae6,	// (0x0006c852) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdae6,	// (0x0006c852) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7d,	// (0x0006e9e9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7d,	// (0x0006e9e9) sp_fs_action_menu_list_gene_pane_g

0x84c1,	// (0x0006722d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x84c1,	// (0x0006722d) sp_fs_action_menu_list_gene_pane_t1

0x84d9,	// (0x00067245) sp_fs_action_menu_list_gene_pane_ParamLimits

0x84d9,	// (0x00067245) sp_fs_action_menu_list_gene_pane

0xdaf3,	// (0x0006c85f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdaf3,	// (0x0006c85f) popup_sp_fs_action_menu_bg_pane

0x84fc,	// (0x00067268) sp_fs_action_menu_list_pane_ParamLimits

0x84fc,	// (0x00067268) sp_fs_action_menu_list_pane

0xdb01,	// (0x0006c86d) sp_fs_scroll_pane_cp01_ParamLimits

0xdb01,	// (0x0006c86d) sp_fs_scroll_pane_cp01

0x8520,	// (0x0006728c) list_medium_line_plain_t2_t1

0x8530,	// (0x0006729c) list_medium_line_plain_t2_t2

0x0001,

0xfc82,	// (0x0006e9ee) list_medium_line_plain_t2_t

0x8540,	// (0x000672ac) list_medium_line_plain_t3_t1

0x8550,	// (0x000672bc) list_medium_line_plain_t3_t2

0x855e,	// (0x000672ca) list_medium_line_plain_t3_t3

0x0002,

0xfc87,	// (0x0006e9f3) list_medium_line_plain_t3_t

0xece9,	// (0x0006da55) list_medium_line_x2_t2_g2_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x2_t2_g2_g1

0xed01,	// (0x0006da6d) list_medium_line_x2_t2_g2_g2_ParamLimits

0xed01,	// (0x0006da6d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x0006dfc2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x0006dfc2) list_medium_line_x2_t2_g2_g

0x2680,	// (0x000613ec) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2680,	// (0x000613ec) list_medium_line_x2_t2_g2_t1

0xed22,	// (0x0006da8e) list_medium_line_x2_t2_g2_t2_ParamLimits

0xed22,	// (0x0006da8e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc8e,	// (0x0006e9fa) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc8e,	// (0x0006e9fa) list_medium_line_x2_t2_g2_t

0xece9,	// (0x0006da55) list_medium_line_x2_t4_g2_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x2_t4_g2_g1

0x856c,	// (0x000672d8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x856c,	// (0x000672d8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc93,	// (0x0006e9ff) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc93,	// (0x0006e9ff) list_medium_line_x2_t4_g2_g

0x857e,	// (0x000672ea) list_medium_line_x2_t4_g2_t1_ParamLimits

0x857e,	// (0x000672ea) list_medium_line_x2_t4_g2_t1

0x8598,	// (0x00067304) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8598,	// (0x00067304) list_medium_line_x2_t4_g2_t2

0x85ae,	// (0x0006731a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x85ae,	// (0x0006731a) list_medium_line_x2_t4_g2_t3

0xed22,	// (0x0006da8e) list_medium_line_x2_t4_g2_t4_ParamLimits

0xed22,	// (0x0006da8e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc98,	// (0x0006ea04) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc98,	// (0x0006ea04) list_medium_line_x2_t4_g2_t

0x85c3,	// (0x0006732f) list_medium_line_t3_right_iconx2_g1

0x83b3,	// (0x0006711f) list_medium_line_t3_right_iconx2_g2

0x85cb,	// (0x00067337) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfca1,	// (0x0006ea0d) list_medium_line_t3_right_iconx2_g

0x85d5,	// (0x00067341) list_medium_line_t3_right_iconx2_t1

0x85e5,	// (0x00067351) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfca8,	// (0x0006ea14) list_medium_line_t3_right_iconx2_t

0xece9,	// (0x0006da55) list_medium_line_x3_t4_g4_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x3_t4_g4_g1

0xecf5,	// (0x0006da61) list_medium_line_x3_t4_g4_g2_ParamLimits

0xecf5,	// (0x0006da61) list_medium_line_x3_t4_g4_g2

0xed89,	// (0x0006daf5) list_medium_line_x3_t4_g4_g3_ParamLimits

0xed89,	// (0x0006daf5) list_medium_line_x3_t4_g4_g3

0x85f3,	// (0x0006735f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x85f3,	// (0x0006735f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcad,	// (0x0006ea19) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcad,	// (0x0006ea19) list_medium_line_x3_t4_g4_g

0x85ff,	// (0x0006736b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x85ff,	// (0x0006736b) list_medium_line_x3_t4_g4_t1

0x8616,	// (0x00067382) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8616,	// (0x00067382) list_medium_line_x3_t4_g4_t2

0x8631,	// (0x0006739d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8631,	// (0x0006739d) list_medium_line_x3_t4_g4_t3

0x8646,	// (0x000673b2) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8646,	// (0x000673b2) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcb6,	// (0x0006ea22) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcb6,	// (0x0006ea22) list_medium_line_x3_t4_g4_t

0x8663,	// (0x000673cf) list_single_dyc_row_text_pane_t1_ParamLimits

0x8663,	// (0x000673cf) list_single_dyc_row_text_pane_t1

0x86ac,	// (0x00067418) list_single_dyc_row_text_pane_t2_ParamLimits

0x86ac,	// (0x00067418) list_single_dyc_row_text_pane_t2

0x8706,	// (0x00067472) list_single_dyc_row_text_pane_t3_ParamLimits

0x8706,	// (0x00067472) list_single_dyc_row_text_pane_t3

0x0002,

0xfcbf,	// (0x0006ea2b) list_single_dyc_row_text_pane_t_ParamLimits

0xfcbf,	// (0x0006ea2b) list_single_dyc_row_text_pane_t

0x8718,	// (0x00067484) list_single_dyc_row_pane_g1_ParamLimits

0x8718,	// (0x00067484) list_single_dyc_row_pane_g1

0x8724,	// (0x00067490) list_single_dyc_row_pane_g2_ParamLimits

0x8724,	// (0x00067490) list_single_dyc_row_pane_g2

0x8730,	// (0x0006749c) list_single_dyc_row_pane_g3_ParamLimits

0x8730,	// (0x0006749c) list_single_dyc_row_pane_g3

0x873c,	// (0x000674a8) list_single_dyc_row_pane_g4_ParamLimits

0x873c,	// (0x000674a8) list_single_dyc_row_pane_g4

0x0003,

0xfcc6,	// (0x0006ea32) list_single_dyc_row_pane_g_ParamLimits

0xfcc6,	// (0x0006ea32) list_single_dyc_row_pane_g

0x8748,	// (0x000674b4) list_single_dyc_row_text_pane_ParamLimits

0x8748,	// (0x000674b4) list_single_dyc_row_text_pane

0xdd9d,	// (0x0006cb09) bg_sp_fs_scroll_pane

0xdb27,	// (0x0006c893) thumb_sp_fs_scroll_pane

0x6c49,	// (0x000659b5) list_medium_line_g1_ParamLimits

0x6c49,	// (0x000659b5) list_medium_line_g1

0x8767,	// (0x000674d3) list_medium_line_t1_ParamLimits

0x8767,	// (0x000674d3) list_medium_line_t1

0xece9,	// (0x0006da55) list_medium_line_x2_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x2_g1

0xecf5,	// (0x0006da61) list_medium_line_x2_g2_ParamLimits

0xecf5,	// (0x0006da61) list_medium_line_x2_g2

0x0001,

0x0462,	// (0x0005f1ce) list_medium_line_x2_g_ParamLimits

0x0462,	// (0x0005f1ce) list_medium_line_x2_g

0x877c,	// (0x000674e8) list_medium_line_x2_t1_ParamLimits

0x877c,	// (0x000674e8) list_medium_line_x2_t1

0xece9,	// (0x0006da55) list_medium_line_x3_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x3_g1

0xecf5,	// (0x0006da61) list_medium_line_x3_g2_ParamLimits

0xecf5,	// (0x0006da61) list_medium_line_x3_g2

0x0001,

0x0462,	// (0x0005f1ce) list_medium_line_x3_g_ParamLimits

0x0462,	// (0x0005f1ce) list_medium_line_x3_g

0x877c,	// (0x000674e8) list_medium_line_x3_t1_ParamLimits

0x877c,	// (0x000674e8) list_medium_line_x3_t1

0xdb30,	// (0x0006c89c) thumb_sp_fs_scroll_pane_g1

0xdb39,	// (0x0006c8a5) thumb_sp_fs_scroll_pane_g2

0xdb42,	// (0x0006c8ae) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfccf,	// (0x0006ea3b) thumb_sp_fs_scroll_pane_g

0xdb30,	// (0x0006c89c) bg_sp_fs_scroll_pane_g1

0xdb39,	// (0x0006c8a5) bg_sp_fs_scroll_pane_g2

0xdb42,	// (0x0006c8ae) bg_sp_fs_scroll_pane_g3

0x0002,

0xfccf,	// (0x0006ea3b) bg_sp_fs_scroll_pane_g

0xece9,	// (0x0006da55) list_medium_line_x2_t3_g4_g1_ParamLimits

0xece9,	// (0x0006da55) list_medium_line_x2_t3_g4_g1

0xed7d,	// (0x0006dae9) list_medium_line_x2_t3_g4_g2_ParamLimits

0xed7d,	// (0x0006dae9) list_medium_line_x2_t3_g4_g2

0xecf5,	// (0x0006da61) list_medium_line_x2_t3_g4_g3_ParamLimits

0xecf5,	// (0x0006da61) list_medium_line_x2_t3_g4_g3

0xed01,	// (0x0006da6d) list_medium_line_x2_t3_g4_g4_ParamLimits

0xed01,	// (0x0006da6d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0006e03e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0006e03e) list_medium_line_x2_t3_g4_g

0x8792,	// (0x000674fe) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8792,	// (0x000674fe) list_medium_line_x2_t3_g4_t1

0x87a8,	// (0x00067514) list_medium_line_x2_t3_g4_t2_ParamLimits

0x87a8,	// (0x00067514) list_medium_line_x2_t3_g4_t2

0xed22,	// (0x0006da8e) list_medium_line_x2_t3_g4_t3_ParamLimits

0xed22,	// (0x0006da8e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcd6,	// (0x0006ea42) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcd6,	// (0x0006ea42) list_medium_line_x2_t3_g4_t

0x6c49,	// (0x000659b5) list_medium_line_g2_g1_ParamLimits

0x6c49,	// (0x000659b5) list_medium_line_g2_g1

0x6c55,	// (0x000659c1) list_medium_line_g2_g2_ParamLimits

0x6c55,	// (0x000659c1) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x0006e777) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x0006e777) list_medium_line_g2_g

0x87c1,	// (0x0006752d) list_medium_line_g2_t1_ParamLimits

0x87c1,	// (0x0006752d) list_medium_line_g2_t1

0x6c49,	// (0x000659b5) list_medium_line_t3_g2_g1_ParamLimits

0x6c49,	// (0x000659b5) list_medium_line_t3_g2_g1

0x6c55,	// (0x000659c1) list_medium_line_t3_g2_g2_ParamLimits

0x6c55,	// (0x000659c1) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x0006e777) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x0006e777) list_medium_line_t3_g2_g

0x87d6,	// (0x00067542) list_medium_line_t3_g2_t1_ParamLimits

0x87d6,	// (0x00067542) list_medium_line_t3_g2_t1

0x87f0,	// (0x0006755c) list_medium_line_t3_g2_t2_ParamLimits

0x87f0,	// (0x0006755c) list_medium_line_t3_g2_t2

0x8806,	// (0x00067572) list_medium_line_t3_g2_t3_ParamLimits

0x8806,	// (0x00067572) list_medium_line_t3_g2_t3

0x0002,

0xfcdd,	// (0x0006ea49) list_medium_line_t3_g2_t_ParamLimits

0xfcdd,	// (0x0006ea49) list_medium_line_t3_g2_t

0x83b3,	// (0x0006711f) list_medium_line_right_icon_g1

0x881d,	// (0x00067589) list_medium_line_right_icon_t1

0x6c49,	// (0x000659b5) list_medium_line_t2_g1_ParamLimits

0x6c49,	// (0x000659b5) list_medium_line_t2_g1

0x882b,	// (0x00067597) list_medium_line_t2_t1_ParamLimits

0x882b,	// (0x00067597) list_medium_line_t2_t1

0x8845,	// (0x000675b1) list_medium_line_t2_t2_ParamLimits

0x8845,	// (0x000675b1) list_medium_line_t2_t2

0x0001,

0xfce4,	// (0x0006ea50) list_medium_line_t2_t_ParamLimits

0xfce4,	// (0x0006ea50) list_medium_line_t2_t

0x6c49,	// (0x000659b5) list_medium_line_t3_g1_ParamLimits

0x6c49,	// (0x000659b5) list_medium_line_t3_g1

0x885e,	// (0x000675ca) list_medium_line_t3_t1_ParamLimits

0x885e,	// (0x000675ca) list_medium_line_t3_t1

0x8875,	// (0x000675e1) list_medium_line_t3_t2_ParamLimits

0x8875,	// (0x000675e1) list_medium_line_t3_t2

0x888a,	// (0x000675f6) list_medium_line_t3_t3_ParamLimits

0x888a,	// (0x000675f6) list_medium_line_t3_t3

0x0002,

0xfce9,	// (0x0006ea55) list_medium_line_t3_t_ParamLimits

0xfce9,	// (0x0006ea55) list_medium_line_t3_t

0x6c49,	// (0x000659b5) list_medium_line_g3_g1_ParamLimits

0x6c49,	// (0x000659b5) list_medium_line_g3_g1

0x889c,	// (0x00067608) list_medium_line_g3_g2_ParamLimits

0x889c,	// (0x00067608) list_medium_line_g3_g2

0x6c55,	// (0x000659c1) list_medium_line_g3_g3_ParamLimits

0x6c55,	// (0x000659c1) list_medium_line_g3_g3

0x0002,

0xfcf0,	// (0x0006ea5c) list_medium_line_g3_g_ParamLimits

0xfcf0,	// (0x0006ea5c) list_medium_line_g3_g

0x88a8,	// (0x00067614) list_medium_line_g3_t1_ParamLimits

0x88a8,	// (0x00067614) list_medium_line_g3_t1

0x6c49,	// (0x000659b5) list_medium_line_t2_g3_g1_ParamLimits

0x6c49,	// (0x000659b5) list_medium_line_t2_g3_g1

0x889c,	// (0x00067608) list_medium_line_t2_g3_g2_ParamLimits

0x889c,	// (0x00067608) list_medium_line_t2_g3_g2

0x6c55,	// (0x000659c1) list_medium_line_t2_g3_g3_ParamLimits

0x6c55,	// (0x000659c1) list_medium_line_t2_g3_g3

0x0002,

0xfcf0,	// (0x0006ea5c) list_medium_line_t2_g3_g_ParamLimits

0xfcf0,	// (0x0006ea5c) list_medium_line_t2_g3_g

0x88bd,	// (0x00067629) list_medium_line_t2_g3_t1_ParamLimits

0x88bd,	// (0x00067629) list_medium_line_t2_g3_t1

0x88d4,	// (0x00067640) list_medium_line_t2_g3_t2_ParamLimits

0x88d4,	// (0x00067640) list_medium_line_t2_g3_t2

0x0001,

0xfcf7,	// (0x0006ea63) list_medium_line_t2_g3_t_ParamLimits

0xfcf7,	// (0x0006ea63) list_medium_line_t2_g3_t

0x6c49,	// (0x000659b5) list_medium_line_t3_g3_g1_ParamLimits

0x6c49,	// (0x000659b5) list_medium_line_t3_g3_g1

0x889c,	// (0x00067608) list_medium_line_t3_g3_g2_ParamLimits

0x889c,	// (0x00067608) list_medium_line_t3_g3_g2

0x6c55,	// (0x000659c1) list_medium_line_t3_g3_g3_ParamLimits

0x6c55,	// (0x000659c1) list_medium_line_t3_g3_g3

0x0002,

0xfcf0,	// (0x0006ea5c) list_medium_line_t3_g3_g_ParamLimits

0xfcf0,	// (0x0006ea5c) list_medium_line_t3_g3_g

0x88ed,	// (0x00067659) list_medium_line_t3_g3_t1_ParamLimits

0x88ed,	// (0x00067659) list_medium_line_t3_g3_t1

0x8906,	// (0x00067672) list_medium_line_t3_g3_t2_ParamLimits

0x8906,	// (0x00067672) list_medium_line_t3_g3_t2

0x891c,	// (0x00067688) list_medium_line_t3_g3_t3_ParamLimits

0x891c,	// (0x00067688) list_medium_line_t3_g3_t3

0x0002,

0xfcfc,	// (0x0006ea68) list_medium_line_t3_g3_t_ParamLimits

0xfcfc,	// (0x0006ea68) list_medium_line_t3_g3_t

0x85c3,	// (0x0006732f) list_medium_line_right_iconx2_g1

0x83b3,	// (0x0006711f) list_medium_line_right_iconx2_g2

0x0001,

0xfd03,	// (0x0006ea6f) list_medium_line_right_iconx2_g

0x8936,	// (0x000676a2) list_medium_line_right_iconx2_t1

0x85c3,	// (0x0006732f) list_medium_line_t2_right_iconx2_g1

0x83b3,	// (0x0006711f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd03,	// (0x0006ea6f) list_medium_line_t2_right_iconx2_g

0x8944,	// (0x000676b0) list_medium_line_t2_right_iconx2_t1

0x8954,	// (0x000676c0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd08,	// (0x0006ea74) list_medium_line_t2_right_iconx2_t

0x8966,	// (0x000676d2) list_medium_line_x4_t4_t1

0x8974,	// (0x000676e0) list_medium_line_x4_t4_t2

0x8984,	// (0x000676f0) list_medium_line_x4_t4_t3

0x8994,	// (0x00067700) list_medium_line_x4_t4_t4

0x0003,

0xfd0d,	// (0x0006ea79) list_medium_line_x4_t4_t

0x89e7,	// (0x00067753) tport_appsw_pane_ParamLimits

0x89e7,	// (0x00067753) tport_appsw_pane

0x89fa,	// (0x00067766) tport_contact_pane_ParamLimits

0x89fa,	// (0x00067766) tport_contact_pane

0x8a13,	// (0x0006777f) tport_listscroll_pane_ParamLimits

0x8a13,	// (0x0006777f) tport_listscroll_pane

0x8a2e,	// (0x0006779a) cell_tport_appsw_pane_ParamLimits

0x8a2e,	// (0x0006779a) cell_tport_appsw_pane

0xc71a,	// (0x0006b486) tport_appsw_pane_g1_ParamLimits

0xc71a,	// (0x0006b486) tport_appsw_pane_g1

0xdb4b,	// (0x0006c8b7) tport_contact_pane_g1

0xdb54,	// (0x0006c8c0) tport_contact_pane_t1

0xdb62,	// (0x0006c8ce) tport_contact_pane_t2

0x0001,

0xfd16,	// (0x0006ea82) tport_contact_pane_t

0xdb70,	// (0x0006c8dc) list_tport_pane

0xdb79,	// (0x0006c8e5) scroll_pane_cp_030

0xdb8a,	// (0x0006c8f6) cell_tport_appsw_pane_g1

0xdb9a,	// (0x0006c906) cell_tport_appsw_pane_t1

0xdd9d,	// (0x0006cb09) grid_highlight_pane_cp019

0x8a72,	// (0x000677de) list_tport_double_graphic_pane_ParamLimits

0x8a72,	// (0x000677de) list_tport_double_graphic_pane

0xdff8,	// (0x0006cd64) list_highlight_pane_cp023_ParamLimits

0xdff8,	// (0x0006cd64) list_highlight_pane_cp023

0x8a7f,	// (0x000677eb) list_tport_double_graphic_pane_g1_ParamLimits

0x8a7f,	// (0x000677eb) list_tport_double_graphic_pane_g1

0x8a8c,	// (0x000677f8) list_tport_double_graphic_pane_t1_ParamLimits

0x8a8c,	// (0x000677f8) list_tport_double_graphic_pane_t1

0x8aa1,	// (0x0006780d) list_tport_double_graphic_pane_t2_ParamLimits

0x8aa1,	// (0x0006780d) list_tport_double_graphic_pane_t2

0x0001,

0xfd22,	// (0x0006ea8e) list_tport_double_graphic_pane_t_ParamLimits

0xfd22,	// (0x0006ea8e) list_tport_double_graphic_pane_t

0xdd9d,	// (0x0006cb09) main_cale_note_pane

0x637e,	// (0x000650ea) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x637e,	// (0x000650ea) cell_vitu2_function_top_wide_pane_cp01

0x7f10,	// (0x00066c7c) wait_bar_pane_cp05_ParamLimits

0xdd9d,	// (0x0006cb09) listscroll_cmail_pane

0xdbb0,	// (0x0006c91c) list_cmail_pane

0x8abd,	// (0x00067829) list_cmail_body_pane

0x8ad5,	// (0x00067841) list_single_cmail_header_caption_pane

0x8af2,	// (0x0006785e) list_single_cmail_header_detail_pane_ParamLimits

0x8af2,	// (0x0006785e) list_single_cmail_header_detail_pane

0x8b24,	// (0x00067890) list_single_cmail_header_caption_pane_t1

0x8b34,	// (0x000678a0) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8b34,	// (0x000678a0) list_single_cmail_header_detail_pane_g1

0x8b4c,	// (0x000678b8) list_single_cmail_header_detail_pane_g2_ParamLimits

0x8b4c,	// (0x000678b8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd27,	// (0x0006ea93) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd27,	// (0x0006ea93) list_single_cmail_header_detail_pane_g

0x8b58,	// (0x000678c4) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8b58,	// (0x000678c4) list_single_cmail_header_detail_pane_t1

0x8bbc,	// (0x00067928) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8bbc,	// (0x00067928) list_single_cmail_header_editor_pane_bg

0xd642,	// (0x0006c3ae) list_cmail_body_pane_g1

0xdbdd,	// (0x0006c949) list_cmail_body_pane_t1

0xc73a,	// (0x0006b4a6) list_single_cmail_header_editor_pane_bg_g1

0xefa2,	// (0x0006dd0e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc74a,	// (0x0006b4b6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc742,	// (0x0006b4ae) list_single_cmail_header_editor_pane_bg_g1_copy3

0xc964,	// (0x0006b6d0) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc76a,	// (0x0006b4d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc75a,	// (0x0006b4c6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc762,	// (0x0006b4ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xef82,	// (0x0006dcee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8bce,	// (0x0006793a) calenote_gesture_pane_ParamLimits

0x8bce,	// (0x0006793a) calenote_gesture_pane

0x8bee,	// (0x0006795a) calenote_window_pane_ParamLimits

0x8bee,	// (0x0006795a) calenote_window_pane

0xdbeb,	// (0x0006c957) popup_note_window_cp01

0x8c0a,	// (0x00067976) calenote_swipe_1_pane_ParamLimits

0x8c0a,	// (0x00067976) calenote_swipe_1_pane

0x8353,	// (0x000670bf) calenote_swipe_2_pane_ParamLimits

0x8353,	// (0x000670bf) calenote_swipe_2_pane

0xd9b4,	// (0x0006c720) calenote_swipe_1_pane_g1_ParamLimits

0xd9b4,	// (0x0006c720) calenote_swipe_1_pane_g1

0xd9c1,	// (0x0006c72d) calenote_swipe_1_pane_g2_ParamLimits

0xd9c1,	// (0x0006c72d) calenote_swipe_1_pane_g2

0x0001,

0xfc56,	// (0x0006e9c2) calenote_swipe_1_pane_g_ParamLimits

0xfc56,	// (0x0006e9c2) calenote_swipe_1_pane_g

0xdbfd,	// (0x0006c969) calenote_swipe_1_pane_t1_ParamLimits

0xdbfd,	// (0x0006c969) calenote_swipe_1_pane_t1

0xd9b4,	// (0x0006c720) calenote_swipe_2_pane_g1_ParamLimits

0xd9b4,	// (0x0006c720) calenote_swipe_2_pane_g1

0xdc1c,	// (0x0006c988) calenote_swipe_2_pane_g2_ParamLimits

0xdc1c,	// (0x0006c988) calenote_swipe_2_pane_g2

0x0001,

0xfd33,	// (0x0006ea9f) calenote_swipe_2_pane_g_ParamLimits

0xfd33,	// (0x0006ea9f) calenote_swipe_2_pane_g

0xdc28,	// (0x0006c994) calenote_swipe_2_pane_t1_ParamLimits

0xdc28,	// (0x0006c994) calenote_swipe_2_pane_t1

0xdd9d,	// (0x0006cb09) main_mup_navstr_pane

0x4fe0,	// (0x00063d4c) main_mup3_pane_t7_ParamLimits

0x4fe0,	// (0x00063d4c) main_mup3_pane_t7

0xc2cd,	// (0x0006b039) main_mp4_pane_g6_ParamLimits

0xc2cd,	// (0x0006b039) main_mp4_pane_g6

0xc4ff,	// (0x0006b26b) main_image3_pane_t4_ParamLimits

0xc4ff,	// (0x0006b26b) main_image3_pane_t4

0x8c1f,	// (0x0006798b) popup_navstr_preview_pane_ParamLimits

0x8c1f,	// (0x0006798b) popup_navstr_preview_pane

0x8c2f,	// (0x0006799b) scroll_navstr_pane_ParamLimits

0x8c2f,	// (0x0006799b) scroll_navstr_pane

0xdd9d,	// (0x0006cb09) bg_popup_preview_window_pane_cp04

0xdc4f,	// (0x0006c9bb) popup_navstr_preview_pane_t1

0x8c43,	// (0x000679af) scroll_navstr_pane_g1_ParamLimits

0x8c43,	// (0x000679af) scroll_navstr_pane_g1

0x8c57,	// (0x000679c3) scroll_navstr_pane_t1_ParamLimits

0x8c57,	// (0x000679c3) scroll_navstr_pane_t1

0xdbf4,	// (0x0006c960) bg_button_pane_cp014

0xdbf4,	// (0x0006c960) bg_button_pane_cp030

0x81e9,	// (0x00066f55) list_double_fisheye_pane_g4_ParamLimits

0x81e9,	// (0x00066f55) list_double_fisheye_pane_g4

0x81f5,	// (0x00066f61) list_double_fisheye_pane_g5_ParamLimits

0x81f5,	// (0x00066f61) list_double_fisheye_pane_g5

0xdbb8,	// (0x0006c924) sp_fs_scroll_pane_cp03

0xdaa9,	// (0x0006c815) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdab5,	// (0x0006c821) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc73,	// (0x0006e9df) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdac1,	// (0x0006c82d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8ab3,	// (0x0006781f) sp_fs_scroll_pane_cp02

0xebee,	// (0x0006d95a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xebee,	// (0x0006d95a) popup_sp_fs_calendar_preview_list_single_pane

0xdd9d,	// (0x0006cb09) main_cam6_pano_pane

0x9c59,	// (0x000689c5) main_mup3_pane_ParamLimits

0xdd9d,	// (0x0006cb09) main_phacti_pane

0x7de1,	// (0x00066b4d) bg_button_pane_cp11

0x7dfb,	// (0x00066b67) main_mobtv_info_pane_g2_ParamLimits

0x7dfb,	// (0x00066b67) main_mobtv_info_pane_g2

0x0001,

0xfc08,	// (0x0006e974) main_mobtv_info_pane_g_ParamLimits

0xfc08,	// (0x0006e974) main_mobtv_info_pane_g

0x7fd8,	// (0x00066d44) sc_clock_pane_t5_ParamLimits

0x7fd8,	// (0x00066d44) sc_clock_pane_t5

0x8064,	// (0x00066dd0) main_radioblah_pane_g1_ParamLimits

0xd8e6,	// (0x0006c652) main_radioblah_pane_t3_ParamLimits

0xd8e6,	// (0x0006c652) main_radioblah_pane_t3

0xd8fe,	// (0x0006c66a) main_radioblah_pane_t4_ParamLimits

0xd8fe,	// (0x0006c66a) main_radioblah_pane_t4

0x808c,	// (0x00066df8) main_radioblah_text_pane_ParamLimits

0x808c,	// (0x00066df8) main_radioblah_text_pane

0x809e,	// (0x00066e0a) main_radioblah_info_pane_g1_ParamLimits

0x8137,	// (0x00066ea3) main_radioblah_info_pane_t4_ParamLimits

0x8137,	// (0x00066ea3) main_radioblah_info_pane_t4

0xdff8,	// (0x0006cd64) main_sp_fs_calendar_pane

0x8c6e,	// (0x000679da) main_phacti_pane_g1

0x8c76,	// (0x000679e2) phacti_note_pane_ParamLimits

0x8c76,	// (0x000679e2) phacti_note_pane

0xdc66,	// (0x0006c9d2) phacti_term_pane_ParamLimits

0xdc66,	// (0x0006c9d2) phacti_term_pane

0xdc7b,	// (0x0006c9e7) phacti_note_pane_t1_ParamLimits

0xdc7b,	// (0x0006c9e7) phacti_note_pane_t1

0x8c8a,	// (0x000679f6) phacti_term_pane_g1

0x8c92,	// (0x000679fe) phacti_term_pane_t1_ParamLimits

0x8c92,	// (0x000679fe) phacti_term_pane_t1

0xdc92,	// (0x0006c9fe) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdc9a,	// (0x0006ca06) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x04d5,	// (0x0005f241) popup_sp_fs_calendar_preview_list_single_pane_g

0xdca2,	// (0x0006ca0e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdca2,	// (0x0006ca0e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdcb8,	// (0x0006ca24) aid_popup_sp_fs_bg_corner_pane

0xb9a4,	// (0x0006a710) popup_sp_fs_calendar_preview_bg_pane_g1

0xdd9d,	// (0x0006cb09) popup_sp_fs_calendar_preview_bg_pane

0xdcc0,	// (0x0006ca2c) popup_sp_fs_calendar_preview_list_pane

0xdff8,	// (0x0006cd64) bg_main_sp_fs_cale_pane_ParamLimits

0xdff8,	// (0x0006cd64) bg_main_sp_fs_cale_pane

0x8d09,	// (0x00067a75) listscroll_cale_mrui_pane_ParamLimits

0x8d09,	// (0x00067a75) listscroll_cale_mrui_pane

0x8d1d,	// (0x00067a89) listscroll_sp_fs_schedule_track_pane

0x8d26,	// (0x00067a92) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8d26,	// (0x00067a92) main_sp_fs_ctrlbar_pane_cp01

0xdcc8,	// (0x0006ca34) main_sp_fs_ribbon_pane

0xdcd0,	// (0x0006ca3c) popup_sp_fs_cale_preview_window

0x8d37,	// (0x00067aa3) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d37,	// (0x00067aa3) list_single_sp_fs_schedule_track_pane

0xdff8,	// (0x0006cd64) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdff8,	// (0x0006cd64) bg_sp_fs_highlight_list_pane_cp03

0x8d4a,	// (0x00067ab6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d4a,	// (0x00067ab6) list_single_sp_fs_schedule_track_pane_g1

0x8d56,	// (0x00067ac2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d56,	// (0x00067ac2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd3d,	// (0x0006eaa9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd3d,	// (0x0006eaa9) list_single_sp_fs_schedule_track_pane_g

0x8d62,	// (0x00067ace) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d62,	// (0x00067ace) list_single_sp_fs_schedule_track_pane_t1

0x8d84,	// (0x00067af0) sp_fs_schedule_track_pane_ParamLimits

0x8d84,	// (0x00067af0) sp_fs_schedule_track_pane

0xdce2,	// (0x0006ca4e) sp_fs_schedule_track_pane_g1

0xdcea,	// (0x0006ca56) sp_fs_schedule_track_pane_g2

0xdcf2,	// (0x0006ca5e) sp_fs_schedule_track_pane_g3

0xdcfa,	// (0x0006ca66) sp_fs_schedule_track_pane_g4

0xdd02,	// (0x0006ca6e) sp_fs_schedule_track_pane_g5

0x0004,

0x04df,	// (0x0005f24b) sp_fs_schedule_track_pane_g

0xc73a,	// (0x0006b4a6) bg_sp_fs_schedule_viewer_highlight_g1

0xefa2,	// (0x0006dd0e) bg_sp_fs_schedule_viewer_highlight_g2

0xc742,	// (0x0006b4ae) bg_sp_fs_schedule_viewer_highlight_g3

0xc74a,	// (0x0006b4b6) bg_sp_fs_schedule_viewer_highlight_g4

0xc964,	// (0x0006b6d0) bg_sp_fs_schedule_viewer_highlight_g5

0xc75a,	// (0x0006b4c6) bg_sp_fs_schedule_viewer_highlight_g6

0xc762,	// (0x0006b4ce) bg_sp_fs_schedule_viewer_highlight_g7

0xc76a,	// (0x0006b4d6) bg_sp_fs_schedule_viewer_highlight_g8

0xef82,	// (0x0006dcee) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd42,	// (0x0006eaae) bg_sp_fs_schedule_viewer_highlight_g

0xdd9d,	// (0x0006cb09) bg_main_sp_fs_ribbon_pane

0x8d99,	// (0x00067b05) main_sp_fs_ribbon_pane_g1

0xdd0a,	// (0x0006ca76) main_sp_fs_ribbon_pane_t1

0x8da2,	// (0x00067b0e) main_sp_fs_ribbon_pane_t2

0xdd19,	// (0x0006ca85) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd55,	// (0x0006eac1) main_sp_fs_ribbon_pane_t

0xdd28,	// (0x0006ca94) main_sp_fs_ribbon_scheduler_pane

0xdd30,	// (0x0006ca9c) bg_main_sp_fs_ribbon_pane_g1

0xdd39,	// (0x0006caa5) bg_main_sp_fs_ribbon_pane_g2

0xdd42,	// (0x0006caae) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0504,	// (0x0005f270) bg_main_sp_fs_ribbon_pane_g

0xdd4a,	// (0x0006cab6) main_sp_fs_ribbon_scheduler_pane_g1

0xdd53,	// (0x0006cabf) main_sp_fs_ribbon_scheduler_pane_g2

0xdd5c,	// (0x0006cac8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x050b,	// (0x0005f277) main_sp_fs_ribbon_scheduler_pane_g

0xdd65,	// (0x0006cad1) list_cale_mrui_pane

0x8db1,	// (0x00067b1d) sp_fs_scroll_pane_cp07_ParamLimits

0x8db1,	// (0x00067b1d) sp_fs_scroll_pane_cp07

0x8dc7,	// (0x00067b33) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8dc7,	// (0x00067b33) bg_sp_fs_schedule_viewer_highlight

0xdd6e,	// (0x0006cada) list_single_sp_fs_schedule_track_pane_cp01

0xdd76,	// (0x0006cae2) list_sp_fs_schedule_track_pane

0xdd7e,	// (0x0006caea) sp_fs_scroll_pane_cp06_ParamLimits

0xdd7e,	// (0x0006caea) sp_fs_scroll_pane_cp06

0xb9a4,	// (0x0006a710) bgmain_sp_fs_calendar_pane_g1

0x8dd9,	// (0x00067b45) list_single_cale_mrui_pane_ParamLimits

0x8dd9,	// (0x00067b45) list_single_cale_mrui_pane

0x8dfc,	// (0x00067b68) list_single_cale_mrui_row_pane_ParamLimits

0x8dfc,	// (0x00067b68) list_single_cale_mrui_row_pane

0x8e09,	// (0x00067b75) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8e09,	// (0x00067b75) list_single_cale_mrui_row_pane_g1

0x8e41,	// (0x00067bad) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8e41,	// (0x00067bad) list_single_cale_mrui_row_pane_t1

0x8e53,	// (0x00067bbf) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e53,	// (0x00067bbf) list_single_cale_mrui_row_pane_t2

0x8ebb,	// (0x00067c27) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8ebb,	// (0x00067c27) list_single_cale_mrui_row_pane_t3

0x8eea,	// (0x00067c56) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8eea,	// (0x00067c56) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd63,	// (0x0006eacf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd63,	// (0x0006eacf) list_single_cale_mrui_row_pane_t

0x8f19,	// (0x00067c85) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f19,	// (0x00067c85) list_single_cmail_header_editor_pane_bg_cp01

0x8f3f,	// (0x00067cab) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f3f,	// (0x00067cab) list_single_cmail_header_editor_pane_bg_cp02

0x8f5f,	// (0x00067ccb) main_radioblah_text_pane_t1_ParamLimits

0x8f5f,	// (0x00067ccb) main_radioblah_text_pane_t1

0xe006,	// (0x0006cd72) cam6_indi_pane_cp01

0xe00e,	// (0x0006cd7a) cam6_mode_pane_cp01

0xe016,	// (0x0006cd82) cam6_pano_pane

0xe01f,	// (0x0006cd8b) cam6_zoom_pane_cp01

0xe029,	// (0x0006cd95) cam6_pano_image_pane

0xe032,	// (0x0006cd9e) cam6_pano_pane_g1

0xd642,	// (0x0006c3ae) cam6_pano_pane_g2

0xe03b,	// (0x0006cda7) cam6_pano_pane_g3

0xe044,	// (0x0006cdb0) cam6_pano_pane_g4

0xbf2e,	// (0x0006ac9a) cam6_pano_pane_g5

0xe04d,	// (0x0006cdb9) cam6_pano_pane_g6

0xe055,	// (0x0006cdc1) cam6_pano_pane_g7

0xe05d,	// (0x0006cdc9) cam6_pano_pane_g8

0xe066,	// (0x0006cdd2) cam6_pano_pane_g9

0x0008,

0xfd6c,	// (0x0006ead8) cam6_pano_pane_g

0xdd9d,	// (0x0006cb09) main_browser_tag_pane

0xdc47,	// (0x0006c9b3) grid_navstr_albumart_pane

0xe071,	// (0x0006cddd) cell_navstr_albumart_pane_ParamLimits

0xe071,	// (0x0006cddd) cell_navstr_albumart_pane

0xe08d,	// (0x0006cdf9) cell_navstr_albumart_pane_g1

0xb288,	// (0x00069ff4) cell_navstr_albumart_pane_g2

0xb298,	// (0x0006a004) cell_navstr_albumart_pane_g3

0xb290,	// (0x00069ffc) cell_navstr_albumart_pane_g4

0x0003,

0xfd7f,	// (0x0006eaeb) cell_navstr_albumart_pane_g

0x8f7a,	// (0x00067ce6) bt_list_pane_ParamLimits

0x8f7a,	// (0x00067ce6) bt_list_pane

0x8f90,	// (0x00067cfc) bt_list_pane_t1

0x8f9f,	// (0x00067d0b) bt_list_pane_t2

0x0001,

0xfd88,	// (0x0006eaf4) bt_list_pane_t

0xdd9d,	// (0x0006cb09) main_cale_prevew_pane

0x8fae,	// (0x00067d1a) popup_cale_preview_window_ParamLimits

0x8fae,	// (0x00067d1a) popup_cale_preview_window

0xdff8,	// (0x0006cd64) bg_popup_preview_window_pane_cp05_ParamLimits

0xdff8,	// (0x0006cd64) bg_popup_preview_window_pane_cp05

0xe095,	// (0x0006ce01) list_cale_preview_pane_ParamLimits

0xe095,	// (0x0006ce01) list_cale_preview_pane

0x8fc9,	// (0x00067d35) list_double_cale_preview_pane_ParamLimits

0x8fc9,	// (0x00067d35) list_double_cale_preview_pane

0x8fdd,	// (0x00067d49) list_single_cale_preview_pane_ParamLimits

0x8fdd,	// (0x00067d49) list_single_cale_preview_pane

0x8ff5,	// (0x00067d61) list_single_cale_preview_pane_g1

0x8ffd,	// (0x00067d69) list_single_cale_preview_pane_t1_ParamLimits

0x8ffd,	// (0x00067d69) list_single_cale_preview_pane_t1

0x9012,	// (0x00067d7e) list_double_cale_preview_pane_g1

0x901a,	// (0x00067d86) list_double_cale_preview_pane_t1_ParamLimits

0x901a,	// (0x00067d86) list_double_cale_preview_pane_t1

0x902f,	// (0x00067d9b) list_double_cale_preview_pane_t2_ParamLimits

0x902f,	// (0x00067d9b) list_double_cale_preview_pane_t2

0x0001,

0xfd8d,	// (0x0006eaf9) list_double_cale_preview_pane_t_ParamLimits

0xfd8d,	// (0x0006eaf9) list_double_cale_preview_pane_t

0xdd9d,	// (0x0006cb09) main_ezdial_pane

0xdff8,	// (0x0006cd64) main_sp_fs_email_pane_ParamLimits

0x83dd,	// (0x00067149) cmail_ddmenu_btn01_pane_ParamLimits

0x83dd,	// (0x00067149) cmail_ddmenu_btn01_pane

0x83f0,	// (0x0006715c) cmail_ddmenu_btn02_pane_ParamLimits

0x83f0,	// (0x0006715c) cmail_ddmenu_btn02_pane

0x8413,	// (0x0006717f) cmail_ddmenu_btn03_pane_ParamLimits

0x8413,	// (0x0006717f) cmail_ddmenu_btn03_pane

0x843e,	// (0x000671aa) main_sp_fs_ctrlbar_pane_ParamLimits

0x8462,	// (0x000671ce) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8abd,	// (0x00067829) list_cmail_body_pane_ParamLimits

0xdbc7,	// (0x0006c933) bg_button_pane_cp12

0xdbd0,	// (0x0006c93c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdbd0,	// (0x0006c93c) list_single_cmail_header_detail_pane_g3

0x8b96,	// (0x00067902) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8b96,	// (0x00067902) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd2e,	// (0x0006ea9a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd2e,	// (0x0006ea9a) list_single_cmail_header_detail_pane_t

0x8ca7,	// (0x00067a13) phacti_term_pane_t2_ParamLimits

0x8ca7,	// (0x00067a13) phacti_term_pane_t2

0x0001,

0xfd38,	// (0x0006eaa4) phacti_term_pane_t_ParamLimits

0xfd38,	// (0x0006eaa4) phacti_term_pane_t

0xe0a1,	// (0x0006ce0d) aid_size_list_single_double

0x9047,	// (0x00067db3) popup_ezdial_listscroll_window

0x9063,	// (0x00067dcf) popup_number_entry_window_cp01

0xa002,	// (0x00068d6e) bg_popup_call_pane_cp09

0xe0ad,	// (0x0006ce19) ezdial_list_pane

0xe0b5,	// (0x0006ce21) scroll_pane_cp23

0xb46f,	// (0x0006a1db) bg_button_pane_cp028_ParamLimits

0xb46f,	// (0x0006a1db) bg_button_pane_cp028

0x9071,	// (0x00067ddd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9071,	// (0x00067ddd) cmail_ddmenu_btn01_pane_g1

0x9080,	// (0x00067dec) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9080,	// (0x00067dec) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd92,	// (0x0006eafe) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd92,	// (0x0006eafe) cmail_ddmenu_btn01_pane_g

0xe0bd,	// (0x0006ce29) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe0bd,	// (0x0006ce29) cmail_ddmenu_btn01_pane_t1

0xb46f,	// (0x0006a1db) bg_button_pane_cp029_ParamLimits

0xb46f,	// (0x0006a1db) bg_button_pane_cp029

0x9090,	// (0x00067dfc) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9090,	// (0x00067dfc) cmail_ddmenu_btn02_pane_g1

0x90ab,	// (0x00067e17) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x90ab,	// (0x00067e17) cmail_ddmenu_btn02_pane_t1

0xdff8,	// (0x0006cd64) bg_button_pane_cp031_ParamLimits

0xdff8,	// (0x0006cd64) bg_button_pane_cp031

0x9090,	// (0x00067dfc) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9090,	// (0x00067dfc) cmail_ddmenu_btn03_pane_g1

0x90ab,	// (0x00067e17) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x90ab,	// (0x00067e17) cmail_ddmenu_btn03_pane_t1

0x5bb8,	// (0x00064924) cell_dialer2_keypad_pane_t1_ParamLimits

0x5bd2,	// (0x0006493e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5bd2,	// (0x0006493e) cell_dialer2_keypad_pane_t1_copy1

0x7c38,	// (0x000669a4) ncimui_group_button_pane

0xdff8,	// (0x0006cd64) main_sp_fs_calendar_pane_ParamLimits

0x8ad5,	// (0x00067841) list_single_cmail_header_caption_pane_ParamLimits

0xce8c,	// (0x0006bbf8) aid_recal_txt_sm_pane

0xdd9d,	// (0x0006cb09) mian_recal_day_pane

0xdcd0,	// (0x0006ca3c) popup_sp_fs_cale_preview_window_ParamLimits

0xdd9d,	// (0x0006cb09) list_recal_day_pane

0xe0ec,	// (0x0006ce58) list_single_recal_day_pane_ParamLimits

0xe0ec,	// (0x0006ce58) list_single_recal_day_pane

0xe0fe,	// (0x0006ce6a) list_single_recal_day_pane_g1_ParamLimits

0xe0fe,	// (0x0006ce6a) list_single_recal_day_pane_g1

0xe10a,	// (0x0006ce76) list_single_recal_day_pane_g2_ParamLimits

0xe10a,	// (0x0006ce76) list_single_recal_day_pane_g2

0xe11a,	// (0x0006ce86) list_single_recal_day_pane_g3_ParamLimits

0xe11a,	// (0x0006ce86) list_single_recal_day_pane_g3

0x90d2,	// (0x00067e3e) list_single_recal_day_pane_g4_ParamLimits

0x90d2,	// (0x00067e3e) list_single_recal_day_pane_g4

0xe126,	// (0x0006ce92) list_single_recal_day_pane_g5_ParamLimits

0xe126,	// (0x0006ce92) list_single_recal_day_pane_g5

0xe136,	// (0x0006cea2) list_single_recal_day_pane_g6_ParamLimits

0xe136,	// (0x0006cea2) list_single_recal_day_pane_g6

0x0004,

0xfda1,	// (0x0006eb0d) list_single_recal_day_pane_g_ParamLimits

0xfda1,	// (0x0006eb0d) list_single_recal_day_pane_g

0xe14d,	// (0x0006ceb9) list_single_recal_day_pane_t1

0xe15f,	// (0x0006cecb) list_single_recal_day_pane_t2

0x0001,

0xfdac,	// (0x0006eb18) list_single_recal_day_pane_t

0x90f2,	// (0x00067e5e) ncimui_query_button_pane_ParamLimits

0x90f2,	// (0x00067e5e) ncimui_query_button_pane

0x9102,	// (0x00067e6e) ncimui_query_button_pane_t1_ParamLimits

0x9102,	// (0x00067e6e) ncimui_query_button_pane_t1

0xe174,	// (0x0006cee0) ncimui_query_button_pane_t2_ParamLimits

0xe174,	// (0x0006cee0) ncimui_query_button_pane_t2

0x0001,

0xfdb1,	// (0x0006eb1d) ncimui_query_button_pane_t_ParamLimits

0xfdb1,	// (0x0006eb1d) ncimui_query_button_pane_t

0x9115,	// (0x00067e81) query_button_pane_ParamLimits

0x9115,	// (0x00067e81) query_button_pane

0xdd9d,	// (0x0006cb09) bg_button_pane_cp0028

0xe187,	// (0x0006cef3) query_button_pane_t1

0x3b7d,	// (0x000628e9) main_tport_pane_ParamLimits

0x89a4,	// (0x00067710) bg_popup_window_pane_cp01_ParamLimits

0x89a4,	// (0x00067710) bg_popup_window_pane_cp01

0x89be,	// (0x0006772a) heading_pane_cp08_ParamLimits

0x89be,	// (0x0006772a) heading_pane_cp08

0x89d2,	// (0x0006773e) heading_pane_cp07_ParamLimits

0x89d2,	// (0x0006773e) heading_pane_cp07

0xdb8a,	// (0x0006c8f6) cell_tport_appsw_pane_g2

0x0002,

0xfd1b,	// (0x0006ea87) cell_tport_appsw_pane_g

0x30c6,	// (0x00061e32) input_candi_list_open_g1

0x2411,	// (0x0006117d) list_cale_time_pane_g6_ParamLimits

0x2411,	// (0x0006117d) list_cale_time_pane_g6

0x4965,	// (0x000636d1) aid_size_touch_calib_1_ParamLimits

0x4965,	// (0x000636d1) aid_size_touch_calib_1

0x4977,	// (0x000636e3) aid_size_touch_calib_2_ParamLimits

0x4977,	// (0x000636e3) aid_size_touch_calib_2

0x498f,	// (0x000636fb) aid_size_touch_calib_3_ParamLimits

0x498f,	// (0x000636fb) aid_size_touch_calib_3

0x49ad,	// (0x00063719) aid_size_touch_calib_4_ParamLimits

0x49ad,	// (0x00063719) aid_size_touch_calib_4

0x49c5,	// (0x00063731) main_touch_calib_button_group_pane_ParamLimits

0x49c5,	// (0x00063731) main_touch_calib_button_group_pane

0x49dd,	// (0x00063749) main_touch_calib_pane_g1_ParamLimits

0x49ef,	// (0x0006375b) main_touch_calib_pane_g2_ParamLimits

0x4a01,	// (0x0006376d) main_touch_calib_pane_g3_ParamLimits

0x4a13,	// (0x0006377f) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0006e4cd) main_touch_calib_pane_g_ParamLimits

0x4a25,	// (0x00063791) main_touch_calib_pane_t1_ParamLimits

0x4a3f,	// (0x000637ab) main_touch_calib_pane_t2_ParamLimits

0x4a59,	// (0x000637c5) main_touch_calib_pane_t3_ParamLimits

0x4a6d,	// (0x000637d9) main_touch_calib_pane_t4_ParamLimits

0x4a83,	// (0x000637ef) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x0006e4d6) main_touch_calib_pane_t_ParamLimits

0xbcf8,	// (0x0006aa64) list_single_fp_cale_pane_g3_ParamLimits

0xbcf8,	// (0x0006aa64) list_single_fp_cale_pane_g3

0x9c59,	// (0x000689c5) bg_button_pane_cp012_ParamLimits

0x9c59,	// (0x000689c5) bg_vkb2_func_pane_cp03_ParamLimits

0x6bff,	// (0x0006596b) cell_vitu2_function_top_pane_g1_ParamLimits

0x9c59,	// (0x000689c5) bg_vkb2_func_pane_cp04_ParamLimits

0x7bc6,	// (0x00066932) main_ncimui_button_group_pane_ParamLimits

0x7bc6,	// (0x00066932) main_ncimui_button_group_pane

0x7c26,	// (0x00066992) main_ncimui_pane_t3_ParamLimits

0x7c26,	// (0x00066992) main_ncimui_pane_t3

0xdc5d,	// (0x0006c9c9) phacti_button_group_pane

0xe0a1,	// (0x0006ce0d) aid_size_list_single_double_ParamLimits

0x9047,	// (0x00067db3) popup_ezdial_listscroll_window_ParamLimits

0x9063,	// (0x00067dcf) popup_number_entry_window_cp01_ParamLimits

0x9128,	// (0x00067e94) phacti_button_pane_ParamLimits

0x9128,	// (0x00067e94) phacti_button_pane

0xdd9d,	// (0x0006cb09) bg_button_pane_cp14

0xe195,	// (0x0006cf01) phacti_button_pane_t1

0x9139,	// (0x00067ea5) main_touch_calib_button_pane_ParamLimits

0x9139,	// (0x00067ea5) main_touch_calib_button_pane

0xead8,	// (0x0006d844) bg_button_pane_cp18_ParamLimits

0xead8,	// (0x0006d844) bg_button_pane_cp18

0xe1a3,	// (0x0006cf0f) main_touch_calib_button_pane_t1_ParamLimits

0xe1a3,	// (0x0006cf0f) main_touch_calib_button_pane_t1

0xe1b9,	// (0x0006cf25) main_touch_calib_button_pane_t2_ParamLimits

0xe1b9,	// (0x0006cf25) main_touch_calib_button_pane_t2

0x0001,

0xfdb6,	// (0x0006eb22) main_touch_calib_button_pane_t_ParamLimits

0xfdb6,	// (0x0006eb22) main_touch_calib_button_pane_t

0xdd9d,	// (0x0006cb09) cell_ncimui_button_pane

0xdd9d,	// (0x0006cb09) bg_button_pane_cp032

0xe1d7,	// (0x0006cf43) cell_ncimui_button_pane_t1

0xc4dd,	// (0x0006b249) image3_infobar_pane_ParamLimits

0xc4dd,	// (0x0006b249) image3_infobar_pane

0x8004,	// (0x00066d70) fs_bigclock_status_pane_ParamLimits

0x8004,	// (0x00066d70) fs_bigclock_status_pane

0x8011,	// (0x00066d7d) main_fs_bigclock_clock_pane_ParamLimits

0x8011,	// (0x00066d7d) main_fs_bigclock_clock_pane

0x8025,	// (0x00066d91) main_fs_bigclock_indi_pane_ParamLimits

0x8025,	// (0x00066d91) main_fs_bigclock_indi_pane

0x8040,	// (0x00066dac) main_fs_bigclock_swipe_pane_ParamLimits

0x8040,	// (0x00066dac) main_fs_bigclock_swipe_pane

0xdd9d,	// (0x0006cb09) main_fs_clock_dumped_data

0xd74f,	// (0x0006c4bb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd74f,	// (0x0006c4bb) list_single_fs_bigclock_indicator_pane_g1

0xd779,	// (0x0006c4e5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd779,	// (0x0006c4e5) list_single_fs_bigclock_indicator_pane_g2

0xd793,	// (0x0006c4ff) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd793,	// (0x0006c4ff) list_single_fs_bigclock_indicator_pane_g3

0xd7ad,	// (0x0006c519) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd7ad,	// (0x0006c519) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x039a,	// (0x0005f106) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x039a,	// (0x0005f106) list_single_fs_bigclock_indicator_pane_g

0xd7d8,	// (0x0006c544) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd7d8,	// (0x0006c544) list_single_fs_bigclock_indicator_pane_t1

0xd800,	// (0x0006c56c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd800,	// (0x0006c56c) list_single_fs_bigclock_indicator_pane_t2

0xd828,	// (0x0006c594) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd828,	// (0x0006c594) list_single_fs_bigclock_indicator_pane_t3

0xd850,	// (0x0006c5bc) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd850,	// (0x0006c5bc) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x03a5,	// (0x0005f111) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x03a5,	// (0x0005f111) list_single_fs_bigclock_indicator_pane_t

0xe1e5,	// (0x0006cf51) image3_infobar_fav_pane_ParamLimits

0xe1e5,	// (0x0006cf51) image3_infobar_fav_pane

0xe1f5,	// (0x0006cf61) image3_infobar_loc_pane_ParamLimits

0xe1f5,	// (0x0006cf61) image3_infobar_loc_pane

0xe20b,	// (0x0006cf77) image3_infobar_time_pane_ParamLimits

0xe20b,	// (0x0006cf77) image3_infobar_time_pane

0xb9a4,	// (0x0006a710) image3_infobar_time_pane_g1

0xe21b,	// (0x0006cf87) image3_infobar_time_pane_t1

0xb9a4,	// (0x0006a710) image3_infobar_loc_pane_g1

0xe229,	// (0x0006cf95) image3_infobar_loc_pane_g2

0x0001,

0xfdbb,	// (0x0006eb27) image3_infobar_loc_pane_g

0xe231,	// (0x0006cf9d) image3_infobar_loc_pane_t1

0xb9a4,	// (0x0006a710) image3_infobar_fav_pane_g1

0xe23f,	// (0x0006cfab) image3_infobar_fav_pane_g2

0x0001,

0xfdc0,	// (0x0006eb2c) image3_infobar_fav_pane_g

0xe247,	// (0x0006cfb3) fs_bigclock_status_battery_pane

0xe250,	// (0x0006cfbc) fs_bigclock_status_signal_pane

0xe259,	// (0x0006cfc5) fs_bigclock_status_title_pane

0xe262,	// (0x0006cfce) fs_bigclock_status_signal_pane_g1

0xe26b,	// (0x0006cfd7) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdc5,	// (0x0006eb31) fs_bigclock_status_signal_pane_g

0xe273,	// (0x0006cfdf) fs_bigclock_status_battery_pane_g1

0xe27c,	// (0x0006cfe8) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdca,	// (0x0006eb36) fs_bigclock_status_battery_pane_g

0xe284,	// (0x0006cff0) fs_bigclock_status_title_pane_t1

0xb9a4,	// (0x0006a710) main_fs_bigclock_clock_pane_g1

0xe292,	// (0x0006cffe) main_fs_bigclock_clock_pane_g2

0xe292,	// (0x0006cffe) main_fs_bigclock_clock_pane_g3

0xe292,	// (0x0006cffe) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdcf,	// (0x0006eb3b) main_fs_bigclock_clock_pane_g

0xe29a,	// (0x0006d006) main_fs_bigclock_clock_pane_t1

0xe2a8,	// (0x0006d014) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdd8,	// (0x0006eb44) main_fs_bigclock_clock_pane_t

0x914e,	// (0x00067eba) list_single_fs_bigclock_indicator_pane_ParamLimits

0x914e,	// (0x00067eba) list_single_fs_bigclock_indicator_pane

0x915f,	// (0x00067ecb) list_single_fs_bigclock_pane_ParamLimits

0x915f,	// (0x00067ecb) list_single_fs_bigclock_pane

0xe2c0,	// (0x0006d02c) main_fs_bigclock_indicator_pane_t1

0xe2cf,	// (0x0006d03b) list_single_fs_bigclock_pane_g1

0xe2d7,	// (0x0006d043) list_single_fs_bigclock_pane_t1

0xb9a4,	// (0x0006a710) main_fs_bigclock_swipe_pane_g1

0xe31a,	// (0x0006d086) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfde9,	// (0x0006eb55) main_fs_bigclock_swipe_pane_g

0xe322,	// (0x0006d08e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe322,	// (0x0006d08e) main_fs_bigclock_swipe_pane_t1

0x27cf,	// (0x0006153b) call_type_pane_ParamLimits

0xdd9d,	// (0x0006cb09) main_btmg_pane

0x8e35,	// (0x00067ba1) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8e35,	// (0x00067ba1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd5c,	// (0x0006eac8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd5c,	// (0x0006eac8) list_single_cale_mrui_row_pane_g

0xe0dc,	// (0x0006ce48) list_recal_vselct_arw_lo_pane

0xe0e4,	// (0x0006ce50) list_recal_vselct_arw_up_pane

0xce83,	// (0x0006bbef) list_recal_vselct_pane

0x91c2,	// (0x00067f2e) btmg_button_pane

0x91cc,	// (0x00067f38) main_btmg_pane_g1

0xdd9d,	// (0x0006cb09) bg_button_pane_cp044

0xe33f,	// (0x0006d0ab) btmg_button_pane_t1

0xb467,	// (0x0006a1d3) aid_listscroll_gen

0xdff8,	// (0x0006cd64) main_cntbar_detail_pane

0xdba8,	// (0x0006c914) list_cmail_folder_pane

0xdbb8,	// (0x0006c924) sp_fs_scroll_pane_cp03_ParamLimits

0x91d6,	// (0x00067f42) list_single_fs_dyc_pane_cp01_ParamLimits

0x91d6,	// (0x00067f42) list_single_fs_dyc_pane_cp01

0xe34d,	// (0x0006d0b9) aid_size_cmail_indent

0x91f1,	// (0x00067f5d) list_single_dyc_row_pane_cp01

0x922a,	// (0x00067f96) cntbar_detail_list_pane_ParamLimits

0x922a,	// (0x00067f96) cntbar_detail_list_pane

0x927c,	// (0x00067fe8) main_cntbar_detail_cont_pane_ParamLimits

0x927c,	// (0x00067fe8) main_cntbar_detail_cont_pane

0x25e4,	// (0x00061350) scroll_pane_cp032_ParamLimits

0x25e4,	// (0x00061350) scroll_pane_cp032

0x9290,	// (0x00067ffc) cntbar_detail_list_event_pane_ParamLimits

0x9290,	// (0x00067ffc) cntbar_detail_list_event_pane

0x923c,	// (0x00067fa8) cntbar_detail_list_shct_pane

0xeff0,	// (0x0006dd5c) aid_list_gen

0xe356,	// (0x0006d0c2) aid_scroll

0xe35f,	// (0x0006d0cb) aid_size_touch_scroll_bar

0x92a0,	// (0x0006800c) aid_list_double

0x92a9,	// (0x00068015) aid_list_single

0x92b3,	// (0x0006801f) aid_list_single_lg

0x92bc,	// (0x00068028) aid_list_z_g_a_sm

0x92c4,	// (0x00068030) aid_list_z_g_d

0x92cc,	// (0x00068038) aid_txt_z_prm

0x92dc,	// (0x00068048) aid_txt_z_prm_cp01

0x92ea,	// (0x00068056) aid_txt_z_sec

0x92f8,	// (0x00068064) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92f8,	// (0x00068064) main_cntbar_detail_cont_pane_g1

0x930c,	// (0x00068078) main_cntbar_detail_cont_pane_g2_ParamLimits

0x930c,	// (0x00068078) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdee,	// (0x0006eb5a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdee,	// (0x0006eb5a) main_cntbar_detail_cont_pane_g

0xe368,	// (0x0006d0d4) main_cntbar_detail_cont_pane_t1

0xe376,	// (0x0006d0e2) main_cntbar_detail_cont_pane_t2

0xe384,	// (0x0006d0f0) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdf3,	// (0x0006eb5f) main_cntbar_detail_cont_pane_t

0x931c,	// (0x00068088) cell_cntbar_detail_list_shct_pane_ParamLimits

0x931c,	// (0x00068088) cell_cntbar_detail_list_shct_pane

0xe392,	// (0x0006d0fe) cntbar_detail_list_shct_pane_g1

0xe39b,	// (0x0006d107) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdfa,	// (0x0006eb66) cntbar_detail_list_shct_pane_g

0x932e,	// (0x0006809a) cntbar_detail_list_event_pane_g1_ParamLimits

0x932e,	// (0x0006809a) cntbar_detail_list_event_pane_g1

0x933a,	// (0x000680a6) cntbar_detail_list_event_pane_g2_ParamLimits

0x933a,	// (0x000680a6) cntbar_detail_list_event_pane_g2

0x0005,

0xfdff,	// (0x0006eb6b) cntbar_detail_list_event_pane_g_ParamLimits

0xfdff,	// (0x0006eb6b) cntbar_detail_list_event_pane_g

0x93a8,	// (0x00068114) cntbar_detail_list_event_pane_t1_ParamLimits

0x93a8,	// (0x00068114) cntbar_detail_list_event_pane_t1

0x93bd,	// (0x00068129) cntbar_detail_list_event_pane_t2_ParamLimits

0x93bd,	// (0x00068129) cntbar_detail_list_event_pane_t2

0x0002,

0xfe0c,	// (0x0006eb78) cntbar_detail_list_event_pane_t_ParamLimits

0xfe0c,	// (0x0006eb78) cntbar_detail_list_event_pane_t

0xb9a4,	// (0x0006a710) cell_cntbar_detail_list_shct_pane_g1

0x2bf2,	// (0x0006195e) navi_pane_mv_g3

0xdff8,	// (0x0006cd64) main_cntbar_detail_pane_ParamLimits

0xdd9d,	// (0x0006cb09) main_notif_wgt_pane

0xc267,	// (0x0006afd3) aid_tch_main_mp4_pane_g4

0xc465,	// (0x0006b1d1) popup_slider_window_cp02

0xe0d2,	// (0x0006ce3e) list_recal_day_event_pane

0x91fa,	// (0x00067f66) cntbar_detail_btn_pane_ParamLimits

0x91fa,	// (0x00067f66) cntbar_detail_btn_pane

0x9212,	// (0x00067f7e) cntbar_detail_btn_pane_cp01_ParamLimits

0x9212,	// (0x00067f7e) cntbar_detail_btn_pane_cp01

0x923c,	// (0x00067fa8) cntbar_detail_list_shct_pane_ParamLimits

0x924c,	// (0x00067fb8) cntbar_detail_pane_g1_ParamLimits

0x924c,	// (0x00067fb8) cntbar_detail_pane_g1

0x9260,	// (0x00067fcc) cntbar_detail_pane_t1_ParamLimits

0x9260,	// (0x00067fcc) cntbar_detail_pane_t1

0x9346,	// (0x000680b2) cntbar_detail_list_event_pane_g3_ParamLimits

0x9346,	// (0x000680b2) cntbar_detail_list_event_pane_g3

0x935e,	// (0x000680ca) cntbar_detail_list_event_pane_g4_ParamLimits

0x935e,	// (0x000680ca) cntbar_detail_list_event_pane_g4

0x9376,	// (0x000680e2) cntbar_detail_list_event_pane_g5_ParamLimits

0x9376,	// (0x000680e2) cntbar_detail_list_event_pane_g5

0x938e,	// (0x000680fa) cntbar_detail_list_event_pane_g6_ParamLimits

0x938e,	// (0x000680fa) cntbar_detail_list_event_pane_g6

0x93d2,	// (0x0006813e) cntbar_detail_list_event_pane_t3_ParamLimits

0x93d2,	// (0x0006813e) cntbar_detail_list_event_pane_t3

0x93e4,	// (0x00068150) popup_notif_wgt_window_ParamLimits

0x93e4,	// (0x00068150) popup_notif_wgt_window

0x93fd,	// (0x00068169) popup_submenu_window_cp01_ParamLimits

0x93fd,	// (0x00068169) popup_submenu_window_cp01

0xa002,	// (0x00068d6e) bg_popup_window_pane_cp10

0xe3a4,	// (0x0006d110) listscroll_notif_wgt_pane

0xe3b6,	// (0x0006d122) list_notif_wgt_window

0xe3bf,	// (0x0006d12b) scroll_pane_cp033

0x9411,	// (0x0006817d) list_notif_wgt_row_pane_ParamLimits

0x9411,	// (0x0006817d) list_notif_wgt_row_pane

0xe3c8,	// (0x0006d134) aid_size_list_notif_wgt_del

0xe3d5,	// (0x0006d141) list_notif_wgt_row_pane_g1

0xe3e1,	// (0x0006d14d) list_notif_wgt_row_pane_g2

0xe3ed,	// (0x0006d159) list_notif_wgt_row_pane_g3

0x0002,

0xfe13,	// (0x0006eb7f) list_notif_wgt_row_pane_g

0xe3fa,	// (0x0006d166) list_notif_wgt_row_pane_t1

0xe40f,	// (0x0006d17b) list_notif_wgt_row_pane_t2

0xe421,	// (0x0006d18d) list_notif_wgt_row_pane_t3

0x0002,

0xfe1a,	// (0x0006eb86) list_notif_wgt_row_pane_t

0xc97e,	// (0x0006b6ea) list_recal_day_event_pane_g1

0xe433,	// (0x0006d19f) list_recal_day_event_pane_t1

0xdd9d,	// (0x0006cb09) bg_button_pane_cp045

0xe442,	// (0x0006d1ae) cntbar_detail_btn_pane_t1

0xb46f,	// (0x0006a1db) main_callh_pane_ParamLimits

0xb46f,	// (0x0006a1db) main_callh_pane

0xdd9d,	// (0x0006cb09) main_coverflow0_pane

0xdd9d,	// (0x0006cb09) main_wgtman_pane

0x804e,	// (0x00066dba) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x804e,	// (0x00066dba) main_fs_bigclock_unlock_btn_pane

0xdb82,	// (0x0006c8ee) bg_button_pane_cp16

0xdb92,	// (0x0006c8fe) cell_tport_appsw_pane_g3

0x9421,	// (0x0006818d) cf0_flow_pane_ParamLimits

0x9421,	// (0x0006818d) cf0_flow_pane

0xe450,	// (0x0006d1bc) listscroll_cf0_pane

0xe45b,	// (0x0006d1c7) main_cf0_pane_g1

0x9436,	// (0x000681a2) main_cf0_pane_t1_ParamLimits

0x9436,	// (0x000681a2) main_cf0_pane_t1

0x944d,	// (0x000681b9) main_cf0_pane_t2_ParamLimits

0x944d,	// (0x000681b9) main_cf0_pane_t2

0x0001,

0xfe21,	// (0x0006eb8d) main_cf0_pane_t_ParamLimits

0xfe21,	// (0x0006eb8d) main_cf0_pane_t

0xe465,	// (0x0006d1d1) scroll_pane_cp11

0x9464,	// (0x000681d0) cf0_flow_pane_g1

0x9470,	// (0x000681dc) cf0_flow_pane_g2

0x0001,

0xfe26,	// (0x0006eb92) cf0_flow_pane_g

0x947c,	// (0x000681e8) cf0_flow_pane_t1

0xdd9d,	// (0x0006cb09) main_call6_pane

0xdd9d,	// (0x0006cb09) main_calllock_pane

0x948e,	// (0x000681fa) call6_btn_grp_pane_ParamLimits

0x948e,	// (0x000681fa) call6_btn_grp_pane

0x94a8,	// (0x00068214) call6_pane_g1_ParamLimits

0x94a8,	// (0x00068214) call6_pane_g1

0x94be,	// (0x0006822a) popup_call6_1st_window_ParamLimits

0x94be,	// (0x0006822a) popup_call6_1st_window

0x94cf,	// (0x0006823b) popup_call6_2nd_window_ParamLimits

0x94cf,	// (0x0006823b) popup_call6_2nd_window

0x94e0,	// (0x0006824c) cell_call6_btn_pane_ParamLimits

0x94e0,	// (0x0006824c) cell_call6_btn_pane

0xa002,	// (0x00068d6e) bg_popup_call2_in_pane_cp03

0xe470,	// (0x0006d1dc) popup_call6_1st_window_g1

0xe478,	// (0x0006d1e4) popup_call6_1st_window_g2

0xe480,	// (0x0006d1ec) popup_call6_1st_window_g3

0x0002,

0xfe2b,	// (0x0006eb97) popup_call6_1st_window_g

0xe488,	// (0x0006d1f4) popup_call6_1st_window_t1

0xe497,	// (0x0006d203) popup_call6_1st_window_t2

0xe4a7,	// (0x0006d213) popup_call6_1st_window_t3

0x0002,

0xfe32,	// (0x0006eb9e) popup_call6_1st_window_t

0xa002,	// (0x00068d6e) bg_popup_call2_in_pane_cp04

0xe470,	// (0x0006d1dc) popup_call6_2nd_window_g1

0xe478,	// (0x0006d1e4) popup_call6_2nd_window_g2

0xe480,	// (0x0006d1ec) popup_call6_2nd_window_g3

0x0002,

0xfe2b,	// (0x0006eb97) popup_call6_2nd_window_g

0xe488,	// (0x0006d1f4) popup_call6_2nd_window_t1

0xdd9d,	// (0x0006cb09) bg_button_pane_cp15

0xe4b7,	// (0x0006d223) cell_call6_btn_pane_g1

0xe4c0,	// (0x0006d22c) cell_call6_btn_pane_t1

0x94f4,	// (0x00068260) listscroll_wgtman_pane_ParamLimits

0x94f4,	// (0x00068260) listscroll_wgtman_pane

0x9517,	// (0x00068283) wgtman_btn_pane_ParamLimits

0x9517,	// (0x00068283) wgtman_btn_pane

0x9ec8,	// (0x00068c34) aid_scroll_copy1

0xe4cf,	// (0x0006d23b) list_wgtman_pane

0x955a,	// (0x000682c6) wgtman_btn_pane_g1_ParamLimits

0x955a,	// (0x000682c6) wgtman_btn_pane_g1

0x9586,	// (0x000682f2) wgtman_btn_pane_t1_ParamLimits

0x9586,	// (0x000682f2) wgtman_btn_pane_t1

0xe4d9,	// (0x0006d245) wgtman_btn_pane_t2_ParamLimits

0xe4d9,	// (0x0006d245) wgtman_btn_pane_t2

0x0001,

0xfe39,	// (0x0006eba5) wgtman_btn_pane_t_ParamLimits

0xfe39,	// (0x0006eba5) wgtman_btn_pane_t

0x95c3,	// (0x0006832f) listrow_wgtman_pane_ParamLimits

0x95c3,	// (0x0006832f) listrow_wgtman_pane

0x95d7,	// (0x00068343) listrow_wgtman_pane_g1

0x95e4,	// (0x00068350) listrow_wgtman_pane_g2

0x0001,

0xfe3e,	// (0x0006ebaa) listrow_wgtman_pane_g

0x9602,	// (0x0006836e) listrow_wgtman_pane_t1

0x961a,	// (0x00068386) listrow_wgtman_pane_t2

0x0001,

0xfe43,	// (0x0006ebaf) listrow_wgtman_pane_t

0x9640,	// (0x000683ac) wait_bar_pane_cp09

0xe4f0,	// (0x0006d25c) main_calllock_btn_pane

0xe4fa,	// (0x0006d266) main_calllock_pane_g1

0xdd9d,	// (0x0006cb09) bg_button_pane_cp17

0xe506,	// (0x0006d272) main_calllock_btn_pane_g1

0xe50f,	// (0x0006d27b) main_calllock_btn_pane_t1

0xdd9d,	// (0x0006cb09) main_dialer3_pane

0xdd9d,	// (0x0006cb09) main_fmrd2_pane

0xb9a4,	// (0x0006a710) main_fs_bigclock_unlock_btn_pane_g1

0xe526,	// (0x0006d292) main_fs_bigclock_unlock_btn_pane_t1

0x9652,	// (0x000683be) area_fmrd2_info_pane_ParamLimits

0x9652,	// (0x000683be) area_fmrd2_info_pane

0x9663,	// (0x000683cf) area_fmrd2_visual_pane_ParamLimits

0x9663,	// (0x000683cf) area_fmrd2_visual_pane

0x9671,	// (0x000683dd) fmrd2_indi_pane_ParamLimits

0x9671,	// (0x000683dd) fmrd2_indi_pane

0x967e,	// (0x000683ea) area_fmrd2_visual_pane_g1

0x9686,	// (0x000683f2) area_fmrd2_visual_pane_t1

0x9696,	// (0x00068402) area_fmrd2_visual_pane_t2

0x96a6,	// (0x00068412) area_fmrd2_visual_pane_t3

0x0002,

0xfe4d,	// (0x0006ebb9) area_fmrd2_visual_pane_t

0x96b6,	// (0x00068422) area_fmrd2_info_pane_g1

0x96be,	// (0x0006842a) area_fmrd2_info_pane_t1

0x96ce,	// (0x0006843a) area_fmrd2_info_pane_t2

0x96de,	// (0x0006844a) area_fmrd2_info_pane_t3

0x96ee,	// (0x0006845a) area_fmrd2_info_pane_t4

0x0003,

0xfe54,	// (0x0006ebc0) area_fmrd2_info_pane_t

0x96fe,	// (0x0006846a) fmrd2_indi_pane_t1

0x970e,	// (0x0006847a) fmrd2_indi_pane_t2

0x971e,	// (0x0006848a) fmrd2_indi_pane_t3

0x0002,

0xfe5d,	// (0x0006ebc9) fmrd2_indi_pane_t

0xd7bc,	// (0x0006c528) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd7bc,	// (0x0006c528) list_single_fs_bigclock_indicator_pane_g5

0xd865,	// (0x0006c5d1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd865,	// (0x0006c5d1) list_single_fs_bigclock_indicator_pane_t5

0x8cbc,	// (0x00067a28) aid_cell_bcale_month_pane_ParamLimits

0x8cbc,	// (0x00067a28) aid_cell_bcale_month_pane

0x8cd4,	// (0x00067a40) bcale_month_pane_ParamLimits

0x8cd4,	// (0x00067a40) bcale_month_pane

0x8ceb,	// (0x00067a57) bcale_preview_pane_ParamLimits

0x8ceb,	// (0x00067a57) bcale_preview_pane

0xe2d7,	// (0x0006d043) list_single_fs_bigclock_pane_t1_ParamLimits

0xe2f6,	// (0x0006d062) list_single_fs_bigclock_pane_t2_ParamLimits

0xe2f6,	// (0x0006d062) list_single_fs_bigclock_pane_t2

0x0001,

0xfde4,	// (0x0006eb50) list_single_fs_bigclock_pane_t_ParamLimits

0xfde4,	// (0x0006eb50) list_single_fs_bigclock_pane_t

0xe51e,	// (0x0006d28a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe48,	// (0x0006ebb4) main_fs_bigclock_unlock_btn_pane_g

0x972e,	// (0x0006849a) aid_dia3_key_size_ParamLimits

0x972e,	// (0x0006849a) aid_dia3_key_size

0x973d,	// (0x000684a9) aid_dia3_listrow_size_ParamLimits

0x973d,	// (0x000684a9) aid_dia3_listrow_size

0x9752,	// (0x000684be) dia3_keypad_fun_pane_ParamLimits

0x9752,	// (0x000684be) dia3_keypad_fun_pane

0x976e,	// (0x000684da) dia3_keypad_num_pane_ParamLimits

0x976e,	// (0x000684da) dia3_keypad_num_pane

0x9787,	// (0x000684f3) dia3_listscroll_pane_ParamLimits

0x9787,	// (0x000684f3) dia3_listscroll_pane

0x979a,	// (0x00068506) dia3_numentry_pane_ParamLimits

0x979a,	// (0x00068506) dia3_numentry_pane

0xe534,	// (0x0006d2a0) dia3_list_pane

0xe53f,	// (0x0006d2ab) scroll_pane_cp12

0xdd9d,	// (0x0006cb09) bg_dia3_numentry_pane

0x97ae,	// (0x0006851a) dia3_numentry_pane_t1

0x97bd,	// (0x00068529) cell_dia3_key_num_pane

0x97c5,	// (0x00068531) cell_dia3_key0_fun_pane_ParamLimits

0x97c5,	// (0x00068531) cell_dia3_key0_fun_pane

0x97d9,	// (0x00068545) cell_dia3_key1_fun_pane_ParamLimits

0x97d9,	// (0x00068545) cell_dia3_key1_fun_pane

0x97f1,	// (0x0006855d) dia3_listrow_pane

0xd4ba,	// (0x0006c226) bg_dia3_numentry_pane_g1

0xdd9d,	// (0x0006cb09) bg_button_pane_cp21

0xe54a,	// (0x0006d2b6) cell_dia3_key_num_pane_t1

0xe558,	// (0x0006d2c4) cell_dia3_key_num_pane_t2

0xe567,	// (0x0006d2d3) cell_dia3_key_num_pane_t3

0xe576,	// (0x0006d2e2) cell_dia3_key_num_pane_t4

0x0003,

0xfe64,	// (0x0006ebd0) cell_dia3_key_num_pane_t

0xdd9d,	// (0x0006cb09) bg_button_pane_cp19

0x9803,	// (0x0006856f) cell_dia3_key0_fun_pane_g1

0xdd9d,	// (0x0006cb09) bg_button_pane_cp20

0x980b,	// (0x00068577) cell_dia3_key1_fun_pane_g1

0x9813,	// (0x0006857f) area_left_week_number_pane

0x981f,	// (0x0006858b) area_top_day_name_pane

0x982b,	// (0x00068597) frame_month_view_pane

0x9837,	// (0x000685a3) grid_month_view_pane

0xe585,	// (0x0006d2f1) cell_top_day_name_pane_ParamLimits

0xe585,	// (0x0006d2f1) cell_top_day_name_pane

0x9843,	// (0x000685af) cell_area_left_week_number_pane_ParamLimits

0x9843,	// (0x000685af) cell_area_left_week_number_pane

0x9859,	// (0x000685c5) cell_month_view_pane_ParamLimits

0x9859,	// (0x000685c5) cell_month_view_pane

0xe5a1,	// (0x0006d30d) frm_month_g1

0x987a,	// (0x000685e6) frm_month_g2

0x9884,	// (0x000685f0) frm_month_g3

0x988e,	// (0x000685fa) frm_month_g4

0x9898,	// (0x00068604) frm_month_g5

0x98a2,	// (0x0006860e) frm_month_g6

0x98ae,	// (0x0006861a) frm_month_g7

0xe5aa,	// (0x0006d316) frm_month_g8

0x98ba,	// (0x00068626) frm_month_g9

0xcbf6,	// (0x0006b962) frm_month_g10

0xcbff,	// (0x0006b96b) frm_month_g11

0xcc08,	// (0x0006b974) frm_month_g12

0xcc11,	// (0x0006b97d) frm_month_g13

0xcc1c,	// (0x0006b988) frm_month_g14

0xcc27,	// (0x0006b993) frm_month_g15

0xcc32,	// (0x0006b99e) frm_month_g16

0x000f,

0xfe6d,	// (0x0006ebd9) frm_month_g

0x98c3,	// (0x0006862f) cell_top_day_name_pane_t1

0x98d2,	// (0x0006863e) cell_area_left_week_number_pane_g1

0x98da,	// (0x00068646) cell_area_left_week_number_pane_t1

0xb9a4,	// (0x0006a710) cell_month_view_pane_g1

0x98e9,	// (0x00068655) cell_month_view_pane_t1

0xdd9d,	// (0x0006cb09) main_fps_pane

0xda6f,	// (0x0006c7db) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xda6f,	// (0x0006c7db) cmail_ddmenu_btn02_pane_cp1

0xda8b,	// (0x0006c7f7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xda8b,	// (0x0006c7f7) cmail_ddmenu_btn02_pane_cp2

0x909f,	// (0x00067e0b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x909f,	// (0x00067e0b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd97,	// (0x0006eb03) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd97,	// (0x0006eb03) cmail_ddmenu_btn02_pane_g

0x90c0,	// (0x00067e2c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x90c0,	// (0x00067e2c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd9c,	// (0x0006eb08) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd9c,	// (0x0006eb08) cmail_ddmenu_btn02_pane_t

0x98f8,	// (0x00068664) fps_text_pane_ParamLimits

0x98f8,	// (0x00068664) fps_text_pane

0x990f,	// (0x0006867b) main_fps_pane_g1_ParamLimits

0x990f,	// (0x0006867b) main_fps_pane_g1

0x9927,	// (0x00068693) wait_bar_pane_cp010_ParamLimits

0x9927,	// (0x00068693) wait_bar_pane_cp010

0x993a,	// (0x000686a6) fps_text_pane_t1_ParamLimits

0x993a,	// (0x000686a6) fps_text_pane_t1

0xc5f6,	// (0x0006b362) cam4_image_uncrop_pane_g1

0xc5ff,	// (0x0006b36b) cam4_image_uncrop_pane_g2

0x60a4,	// (0x00064e10) cam4_image_uncrop_pane_g3

0x60ad,	// (0x00064e19) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x0006e665) cam4_image_uncrop_pane_g

0x97f1,	// (0x0006855d) dia3_listrow_pane_ParamLimits

0xdd9d,	// (0x0006cb09) main_phob2_pane

0x8a41,	// (0x000677ad) cell_tport_appsw_pane_cp02_ParamLimits

0x8a41,	// (0x000677ad) cell_tport_appsw_pane_cp02

0x8a55,	// (0x000677c1) cell_tport_appsw_pane_cp03_ParamLimits

0x8a55,	// (0x000677c1) cell_tport_appsw_pane_cp03

0xdd9d,	// (0x0006cb09) phob2_contact_card_pane

0xdd9d,	// (0x0006cb09) phob2_listscroll_pane

0xcc3d,	// (0x0006b9a9) phob2_list_pane

0xcc45,	// (0x0006b9b1) scroll_pane_cp034

0x9952,	// (0x000686be) phob2_cc_data_pane_ParamLimits

0x9952,	// (0x000686be) phob2_cc_data_pane

0x9973,	// (0x000686df) phob2_cc_listscroll_pane_ParamLimits

0x9973,	// (0x000686df) phob2_cc_listscroll_pane

0x9995,	// (0x00068701) list_double_large_graphic_phob2_pane_ParamLimits

0x9995,	// (0x00068701) list_double_large_graphic_phob2_pane

0x99aa,	// (0x00068716) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99aa,	// (0x00068716) list_double_large_graphic_phob2_pane_g1

0x99b7,	// (0x00068723) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99b7,	// (0x00068723) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe8e,	// (0x0006ebfa) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe8e,	// (0x0006ebfa) list_double_large_graphic_phob2_pane_g

0x99c3,	// (0x0006872f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99c3,	// (0x0006872f) list_double_large_graphic_phob2_pane_t1

0x99d8,	// (0x00068744) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99d8,	// (0x00068744) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe93,	// (0x0006ebff) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe93,	// (0x0006ebff) list_double_large_graphic_phob2_pane_t

0xdd9d,	// (0x0006cb09) list_highlight_pane_cp024

0xcc4d,	// (0x0006b9b9) phob2_cc_button_pane

0x99ea,	// (0x00068756) phob2_cc_data_pane_g1_ParamLimits

0x99ea,	// (0x00068756) phob2_cc_data_pane_g1

0x9a00,	// (0x0006876c) phob2_cc_data_pane_g2_ParamLimits

0x9a00,	// (0x0006876c) phob2_cc_data_pane_g2

0x0001,

0xfe98,	// (0x0006ec04) phob2_cc_data_pane_g_ParamLimits

0xfe98,	// (0x0006ec04) phob2_cc_data_pane_g

0x9a14,	// (0x00068780) phob2_cc_data_pane_t1_ParamLimits

0x9a14,	// (0x00068780) phob2_cc_data_pane_t1

0x9a2e,	// (0x0006879a) phob2_cc_data_pane_t2_ParamLimits

0x9a2e,	// (0x0006879a) phob2_cc_data_pane_t2

0x9a48,	// (0x000687b4) phob2_cc_data_pane_t3_ParamLimits

0x9a48,	// (0x000687b4) phob2_cc_data_pane_t3

0x0002,

0xfe9d,	// (0x0006ec09) phob2_cc_data_pane_t_ParamLimits

0xfe9d,	// (0x0006ec09) phob2_cc_data_pane_t

0xcc55,	// (0x0006b9c1) phob2_cc_list_pane_ParamLimits

0xcc55,	// (0x0006b9c1) phob2_cc_list_pane

0xca17,	// (0x0006b783) scroll_pane_cp035_ParamLimits

0xca17,	// (0x0006b783) scroll_pane_cp035

0xdff8,	// (0x0006cd64) bg_button_pane_cp033

0xcc61,	// (0x0006b9cd) phob2_cc_button_pane_g1

0xcc6d,	// (0x0006b9d9) phob2_cc_button_pane_t1

0xcc82,	// (0x0006b9ee) phob2_cc_button_pane_t2

0x0001,

0xfea4,	// (0x0006ec10) phob2_cc_button_pane_t

0x9a62,	// (0x000687ce) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a62,	// (0x000687ce) list_double_large_graphic_phob2_cc_pane

0x9a77,	// (0x000687e3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a77,	// (0x000687e3) list_double_large_graphic_phob2_cc_pane_g1

0x9a83,	// (0x000687ef) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a83,	// (0x000687ef) list_double_large_graphic_phob2_cc_pane_g2

0x9a8f,	// (0x000687fb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a8f,	// (0x000687fb) list_double_large_graphic_phob2_cc_pane_g3

0x9a9b,	// (0x00068807) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a9b,	// (0x00068807) list_double_large_graphic_phob2_cc_pane_g4

0x9aa7,	// (0x00068813) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9aa7,	// (0x00068813) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfea9,	// (0x0006ec15) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfea9,	// (0x0006ec15) list_double_large_graphic_phob2_cc_pane_g

0x9ab3,	// (0x0006881f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ab3,	// (0x0006881f) list_double_large_graphic_phob2_cc_pane_t1

0x9adc,	// (0x00068848) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9adc,	// (0x00068848) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfeb4,	// (0x0006ec20) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfeb4,	// (0x0006ec20) list_double_large_graphic_phob2_cc_pane_t

0xcc94,	// (0x0006ba00) list_highlight_pane_cp025_ParamLimits

0xcc94,	// (0x0006ba00) list_highlight_pane_cp025

0xdff8,	// (0x0006cd64) bg_button_pane_cp033_ParamLimits

0xcc61,	// (0x0006b9cd) phob2_cc_button_pane_g1_ParamLimits

0xcc6d,	// (0x0006b9d9) phob2_cc_button_pane_t1_ParamLimits

0xcc82,	// (0x0006b9ee) phob2_cc_button_pane_t2_ParamLimits

0xfea4,	// (0x0006ec10) phob2_cc_button_pane_t_ParamLimits

0x097d,	// (0x0005f6e9) popup_wgtman_window

0xc858,	// (0x0006b5c4) scroll_pane_cp038

0x953c,	// (0x000682a8) wgtman_btn_pane_cp_01_ParamLimits

0x953c,	// (0x000682a8) wgtman_btn_pane_cp_01

0xcca2,	// (0x0006ba0e) wgtman_content_pane

0xccab,	// (0x0006ba17) wgtman_heading_pane

0xdd9d,	// (0x0006cb09) bg_heading_pane_cp02

0xccb4,	// (0x0006ba20) wgtman_heading_pane_g1

0xccbc,	// (0x0006ba28) wgtman_heading_pane_t1

0xccca,	// (0x0006ba36) scroll_pane_cp036

0xccd2,	// (0x0006ba3e) wgtman_list_pane

0xd950,	// (0x0006c6bc) wgtman_list_pane_t1_ParamLimits

0xd950,	// (0x0006c6bc) wgtman_list_pane_t1

0xc5e0,	// (0x0006b34c) cam4_grid_pane

0x6db7,	// (0x00065b23) bg_button_pane_cp015_ParamLimits

0x6dcb,	// (0x00065b37) bg_button_pane_cp016_ParamLimits

0x6dde,	// (0x00065b4a) bg_button_pane_cp017_ParamLimits

0x6e36,	// (0x00065ba2) popup_vitu2_query_window_g3_ParamLimits

0x6e36,	// (0x00065ba2) popup_vitu2_query_window_g3

0x6ef3,	// (0x00065c5f) popup_vitu2_query_window_t6_ParamLimits

0x6ef3,	// (0x00065c5f) popup_vitu2_query_window_t6

0x6f1e,	// (0x00065c8a) popup_vitu2_query_window_t7_ParamLimits

0x6f1e,	// (0x00065c8a) popup_vitu2_query_window_t7

0xc5f6,	// (0x0006b362) cam4_grid_pane_g1

0xc5ff,	// (0x0006b36b) cam4_grid_pane_g2

0xccda,	// (0x0006ba46) cam4_grid_pane_g3

0xcce3,	// (0x0006ba4f) cam4_grid_pane_g4

0x0003,

0xfeb9,	// (0x0006ec25) cam4_grid_pane_g

0x1694,	// (0x00060400) aid_placing_vt_slider_lsc_ParamLimits

0x1981,	// (0x000606ed) vidtel_button_pane_ParamLimits

0x1981,	// (0x000606ed) vidtel_button_pane

0xccee,	// (0x0006ba5a) bg_button_pane_cp034

0x9b05,	// (0x00068871) vidtel_button_pane_g1

0xccf8,	// (0x0006ba64) vidtel_button_pane_t1

0xc95c,	// (0x0006b6c8) aid_size_vtel_slider_touch

0xca17,	// (0x0006b783) scroll_pane_cp039

0xd4f8,	// (0x0006c264) ncim_query_button_pane_cp01_ParamLimits

0xd517,	// (0x0006c283) ncimui_query_pane_g1_ParamLimits

0xdff8,	// (0x0006cd64) input_focus_pane_cp012_ParamLimits

0xd53c,	// (0x0006c2a8) ncim_query_entry_pane_t1_ParamLimits

0xca17,	// (0x0006b783) scroll_pane_cp039_ParamLimits

0x2b64,	// (0x000618d0) navi_pane_bcale_mc_g1

0x2b6c,	// (0x000618d8) navi_pane_bcale_mc_t1

0xdad6,	// (0x0006c842) main_sp_fs_email_pane_g1

0xdade,	// (0x0006c84a) main_sp_fs_email_pane_g2

0x0001,

0xfc78,	// (0x0006e9e4) main_sp_fs_email_pane_g

0xdd90,	// (0x0006cafc) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdd90,	// (0x0006cafc) list_single_cale_mrui_row_pane_g3

0x90e8,	// (0x00067e54) list_single_recal_day_pane_g5_event_pane

0xe145,	// (0x0006ceb1) list_single_recal_day_pane_g7

0xcd06,	// (0x0006ba72) list_recal_day_event_pane_cp01

0xcd0f,	// (0x0006ba7b) list_recal_vselct_arw_lo_pane_cp01

0xcd17,	// (0x0006ba83) list_recal_vselct_arw_up_pane_cp01

0xcd1f,	// (0x0006ba8b) list_recal_vselct_pane_cp01

0xc97e,	// (0x0006b6ea) list_recal_day_event_pane_cp01_g1

0xcd29,	// (0x0006ba95) list_recal_day_event_pane_cp01_t1

0xe14d,	// (0x0006ceb9) list_single_recal_day_pane_t1_ParamLimits

0xe15f,	// (0x0006cecb) list_single_recal_day_pane_t2_ParamLimits

0xfdac,	// (0x0006eb18) list_single_recal_day_pane_t_ParamLimits

0xeaa8,	// (0x0006d814) bg_notes_pane_ParamLimits

0xeab6,	// (0x0006d822) list_notes_pane_ParamLimits

0x0c96,	// (0x0005fa02) scroll_pane_cp06_ParamLimits

0xead8,	// (0x0006d844) main_notes_pane_ParamLimits

0xdd9d,	// (0x0006cb09) main_welc_pane

0x9b0d,	// (0x00068879) main_welc_body_pane_ParamLimits

0x9b0d,	// (0x00068879) main_welc_body_pane

0x9b2c,	// (0x00068898) main_welc_opti_pane_ParamLimits

0x9b2c,	// (0x00068898) main_welc_opti_pane

0x9b73,	// (0x000688df) main_welc_pane_t1_ParamLimits

0x9b73,	// (0x000688df) main_welc_pane_t1

0xcd37,	// (0x0006baa3) main_welc_body_row_pane_ParamLimits

0xcd37,	// (0x0006baa3) main_welc_body_row_pane

0x9b95,	// (0x00068901) main_welc_opti_row_pane_ParamLimits

0x9b95,	// (0x00068901) main_welc_opti_row_pane

0xcd4e,	// (0x0006baba) main_welc_opti_row_pane_g1

0xcd56,	// (0x0006bac2) main_welc_opti_row_pane_t1

0xcd65,	// (0x0006bad1) main_welc_body_row_pane_t1

0xe3ae,	// (0x0006d11a) popup_notif_wgt_heading_pane

0xe3c8,	// (0x0006d134) aid_size_list_notif_wgt_del_ParamLimits

0xe3d5,	// (0x0006d141) list_notif_wgt_row_pane_g1_ParamLimits

0xe3e1,	// (0x0006d14d) list_notif_wgt_row_pane_g2_ParamLimits

0xe3ed,	// (0x0006d159) list_notif_wgt_row_pane_g3_ParamLimits

0xfe13,	// (0x0006eb7f) list_notif_wgt_row_pane_g_ParamLimits

0xe3fa,	// (0x0006d166) list_notif_wgt_row_pane_t1_ParamLimits

0xe40f,	// (0x0006d17b) list_notif_wgt_row_pane_t2_ParamLimits

0xe421,	// (0x0006d18d) list_notif_wgt_row_pane_t3_ParamLimits

0xfe1a,	// (0x0006eb86) list_notif_wgt_row_pane_t_ParamLimits

0x95d7,	// (0x00068343) listrow_wgtman_pane_g1_ParamLimits

0x95e4,	// (0x00068350) listrow_wgtman_pane_g2_ParamLimits

0xfe3e,	// (0x0006ebaa) listrow_wgtman_pane_g_ParamLimits

0x9602,	// (0x0006836e) listrow_wgtman_pane_t1_ParamLimits

0x961a,	// (0x00068386) listrow_wgtman_pane_t2_ParamLimits

0xfe43,	// (0x0006ebaf) listrow_wgtman_pane_t_ParamLimits

0x9640,	// (0x000683ac) wait_bar_pane_cp09_ParamLimits

0xdd9d,	// (0x0006cb09) bg_popup_heading_pane_cp02

0xcd74,	// (0x0006bae0) popup_notif_wgt_heading_pane_g1

0xcd7c,	// (0x0006bae8) popup_notif_wgt_heading_pane_t1

0xdd9d,	// (0x0006cb09) main_vids_pane

0xdd9d,	// (0x0006cb09) vids_listscroll_pane

0x9ba5,	// (0x00068911) scroll_pane_cp040

0xdd9d,	// (0x0006cb09) vids_list_pane

0x9bb0,	// (0x0006891c) vids_list_double_pane_ParamLimits

0x9bb0,	// (0x0006891c) vids_list_double_pane

0x9bc1,	// (0x0006892d) vids_list_double_pane_g1

0x9bca,	// (0x00068936) vids_list_double_pane_t1

0x9bda,	// (0x00068946) vids_list_double_pane_t2

0x0001,

0xfec7,	// (0x0006ec33) vids_list_double_pane_t

0x9c59,	// (0x000689c5) main_ncimui_pane_ParamLimits

0x7bda,	// (0x00066946) main_ncimui_pane_g1_ParamLimits

0x7be6,	// (0x00066952) main_ncimui_pane_g2_ParamLimits

0x7be6,	// (0x00066952) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x0006e93f) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x0006e93f) main_ncimui_pane_g

0x9b4b,	// (0x000688b7) main_welc_pane_g1_ParamLimits

0x9b4b,	// (0x000688b7) main_welc_pane_g1

0x9b60,	// (0x000688cc) main_welc_pane_g2_ParamLimits

0x9b60,	// (0x000688cc) main_welc_pane_g2

0x0001,

0xfec2,	// (0x0006ec2e) main_welc_pane_g_ParamLimits

0xfec2,	// (0x0006ec2e) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
