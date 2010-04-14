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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004d4bc };

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
0x0c80,	// (0x0004e13c) Screen

0x0c8c,	// (0x0004e148) application_window

0x0cd8,	// (0x0004e194) area_bottom_pane_ParamLimits

0x0cd8,	// (0x0004e194) area_bottom_pane

0x0d11,	// (0x0004e1cd) area_top_pane_ParamLimits

0x0d11,	// (0x0004e1cd) area_top_pane

0x9672,	// (0x00056b2e) call_video_uplink_pane_ParamLimits

0x9672,	// (0x00056b2e) call_video_uplink_pane

0x0d9f,	// (0x0004e25b) main_pane_ParamLimits

0x0d9f,	// (0x0004e25b) main_pane

0xc7af,	// (0x00059c6b) context_pane

0x4331,	// (0x000517ed) navi_pane

0x4363,	// (0x0005181f) popup_cale_events_window_ParamLimits

0x4363,	// (0x0005181f) popup_cale_events_window

0xc7c2,	// (0x00059c7e) popup_mup_playback_window

0x437b,	// (0x00051837) signal_pane

0xa722,	// (0x00057bde) main_browser_pane

0xb396,	// (0x00058852) main_burst_pane

0x40a1,	// (0x0005155d) main_calc_pane

0xc795,	// (0x00059c51) main_cale_day_pane

0x13d1,	// (0x0004e88d) main_cale_month_pane

0xc795,	// (0x00059c51) main_cale_week_pane

0xb396,	// (0x00058852) main_call_pane

0x9aa3,	// (0x00056f5f) main_call_poc_pane

0xb396,	// (0x00058852) main_camera_pane

0xb396,	// (0x00058852) main_chi_dic_pane

0xb0e4,	// (0x000585a0) main_clock_pane

0x9aa3,	// (0x00056f5f) main_fmradio_pane

0xb396,	// (0x00058852) main_graph_messa_pane

0x9aa3,	// (0x00056f5f) main_help_pane

0xa722,	// (0x00057bde) main_im_pane

0xa63e,	// (0x00057afa) main_image_pane_ParamLimits

0xa63e,	// (0x00057afa) main_image_pane

0x9aa3,	// (0x00056f5f) main_location2_pane

0xb396,	// (0x00058852) main_location_pane

0xa63e,	// (0x00057afa) main_messa_pane

0x9aa3,	// (0x00056f5f) main_mp2_pane

0xb396,	// (0x00058852) main_mp_pane

0x9aa3,	// (0x00056f5f) main_msg_pane

0x9aa3,	// (0x00056f5f) main_mup_eq_pane

0x9aa3,	// (0x00056f5f) main_mup_pane

0xa722,	// (0x00057bde) main_notes_pane

0x9aa3,	// (0x00056f5f) main_pec_pane

0x9aa3,	// (0x00056f5f) main_phob_pane

0x9aa3,	// (0x00056f5f) main_pinb_pane

0x9aa3,	// (0x00056f5f) main_postcard_pane

0x9aa3,	// (0x00056f5f) main_qdial_pane

0xb396,	// (0x00058852) main_skin_pane

0x9aa3,	// (0x00056f5f) main_smil2_pane

0xb396,	// (0x00058852) main_smil_pane

0xb396,	// (0x00058852) main_video_pane

0xb396,	// (0x00058852) main_video_tele_pane

0xa63e,	// (0x00057afa) main_viewer_pane_ParamLimits

0xa63e,	// (0x00057afa) main_viewer_pane

0xb396,	// (0x00058852) main_vorec_pane

0x40f5,	// (0x000515b1) popup_blid_sat_info_window_ParamLimits

0x40f5,	// (0x000515b1) popup_blid_sat_info_window

0x414d,	// (0x00051609) popup_dyc_status_message_window_ParamLimits

0x414d,	// (0x00051609) popup_dyc_status_message_window

0x4165,	// (0x00051621) popup_grid_large_graphic_window_ParamLimits

0x4165,	// (0x00051621) popup_grid_large_graphic_window

0x421b,	// (0x000516d7) popup_loc_request_window_ParamLimits

0x421b,	// (0x000516d7) popup_loc_request_window

0x4309,	// (0x000517c5) popup_wml_address_window_ParamLimits

0x4309,	// (0x000517c5) popup_wml_address_window

0x3edb,	// (0x00051397) call_muted_g1

0x3b8e,	// (0x0005104a) popup_call_audio_conf_window_ParamLimits

0x3b8e,	// (0x0005104a) popup_call_audio_conf_window

0x3eef,	// (0x000513ab) popup_call_audio_first_window_ParamLimits

0x3eef,	// (0x000513ab) popup_call_audio_first_window

0x3f65,	// (0x00051421) popup_call_audio_in_window_ParamLimits

0x3f65,	// (0x00051421) popup_call_audio_in_window

0x3fa1,	// (0x0005145d) popup_call_audio_out_window_ParamLimits

0x3fa1,	// (0x0005145d) popup_call_audio_out_window

0x3fdb,	// (0x00051497) popup_call_audio_second_window_ParamLimits

0x3fdb,	// (0x00051497) popup_call_audio_second_window

0x4031,	// (0x000514ed) popup_call_audio_wait_window_ParamLimits

0x4031,	// (0x000514ed) popup_call_audio_wait_window

0x4066,	// (0x00051522) popup_number_entry_window_ParamLimits

0x4066,	// (0x00051522) popup_number_entry_window

0x9690,	// (0x00056b4c) bg_popup_call_pane_cp05_ParamLimits

0x9690,	// (0x00056b4c) bg_popup_call_pane_cp05

0x96b0,	// (0x00056b6c) popup_number_entry_window_t1

0x96c3,	// (0x00056b7f) popup_number_entry_window_t2

0x96d5,	// (0x00056b91) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0005c582) popup_number_entry_window_t

0x96e7,	// (0x00056ba3) text_title_cp2

0x96fa,	// (0x00056bb6) bg_popup_call_pane_cp_ParamLimits

0x96fa,	// (0x00056bb6) bg_popup_call_pane_cp

0x9708,	// (0x00056bc4) call_thumbnail_pane

0x9710,	// (0x00056bcc) popup_call_audio_in_window_g1_ParamLimits

0x9710,	// (0x00056bcc) popup_call_audio_in_window_g1

0x971c,	// (0x00056bd8) popup_call_audio_in_window_g2_ParamLimits

0x971c,	// (0x00056bd8) popup_call_audio_in_window_g2

0x9728,	// (0x00056be4) popup_call_audio_in_window_g3_ParamLimits

0x9728,	// (0x00056be4) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0005c58b) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0005c58b) popup_call_audio_in_window_g

0x9734,	// (0x00056bf0) popup_call_audio_in_window_t1_ParamLimits

0x9734,	// (0x00056bf0) popup_call_audio_in_window_t1

0x9750,	// (0x00056c0c) popup_call_audio_in_window_t2_ParamLimits

0x9750,	// (0x00056c0c) popup_call_audio_in_window_t2

0x976c,	// (0x00056c28) popup_call_audio_in_window_t3_ParamLimits

0x976c,	// (0x00056c28) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0005c592) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0005c592) popup_call_audio_in_window_t

0x96fa,	// (0x00056bb6) bg_popup_call_pane_cp01_ParamLimits

0x96fa,	// (0x00056bb6) bg_popup_call_pane_cp01

0x9708,	// (0x00056bc4) call_thumbnail_pane_cp02

0x977f,	// (0x00056c3b) call_type_pane_cp022

0x9787,	// (0x00056c43) popup_call_audio_out_window_g1_ParamLimits

0x9787,	// (0x00056c43) popup_call_audio_out_window_g1

0x9799,	// (0x00056c55) popup_call_audio_out_window_g2_ParamLimits

0x9799,	// (0x00056c55) popup_call_audio_out_window_g2

0x97a5,	// (0x00056c61) popup_call_audio_out_window_g3_ParamLimits

0x97a5,	// (0x00056c61) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0005c599) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0005c599) popup_call_audio_out_window_g

0x97b7,	// (0x00056c73) popup_call_audio_out_window_t1_ParamLimits

0x97b7,	// (0x00056c73) popup_call_audio_out_window_t1

0x97cf,	// (0x00056c8b) popup_call_audio_out_window_t2_ParamLimits

0x97cf,	// (0x00056c8b) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0005c5a0) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0005c5a0) popup_call_audio_out_window_t

0x97e4,	// (0x00056ca0) bg_popup_call_pane_ParamLimits

0x97e4,	// (0x00056ca0) bg_popup_call_pane

0x0f5c,	// (0x0004e418) call_thumbnail_pane_cp_ParamLimits

0x0f5c,	// (0x0004e418) call_thumbnail_pane_cp

0x9868,	// (0x00056d24) call_type_pane_cp01_ParamLimits

0x9868,	// (0x00056d24) call_type_pane_cp01

0x98ac,	// (0x00056d68) popup_call_audio_first_window_g1_ParamLimits

0x98ac,	// (0x00056d68) popup_call_audio_first_window_g1

0x98f8,	// (0x00056db4) popup_call_audio_first_window_g2_ParamLimits

0x98f8,	// (0x00056db4) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0005c5a5) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0005c5a5) popup_call_audio_first_window_g

0x993c,	// (0x00056df8) popup_call_audio_first_window_t1_ParamLimits

0x993c,	// (0x00056df8) popup_call_audio_first_window_t1

0x99e8,	// (0x00056ea4) popup_call_audio_first_window_t4_ParamLimits

0x99e8,	// (0x00056ea4) popup_call_audio_first_window_t4

0x9a74,	// (0x00056f30) popup_call_audio_first_window_t5_ParamLimits

0x9a74,	// (0x00056f30) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0005c5aa) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0005c5aa) popup_call_audio_first_window_t

0x9aa3,	// (0x00056f5f) bg_popup_call_pane_cp02

0x9aad,	// (0x00056f69) call_type_pane_cp023

0x9ab5,	// (0x00056f71) popup_call_audio_wait_window_g1

0x9abd,	// (0x00056f79) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005c5b1) popup_call_audio_wait_window_g

0x9ac5,	// (0x00056f81) popup_call_audio_wait_window_t3

0x9ad3,	// (0x00056f8f) bg_popup_call_pane_cp03_ParamLimits

0x9ad3,	// (0x00056f8f) bg_popup_call_pane_cp03

0x9b33,	// (0x00056fef) call_thumbnail_pane_cp011_ParamLimits

0x9b33,	// (0x00056fef) call_thumbnail_pane_cp011

0x9b3f,	// (0x00056ffb) call_type_pane_cp034_ParamLimits

0x9b3f,	// (0x00056ffb) call_type_pane_cp034

0xa4bb,	// (0x00057977) popup_call_audio_second_window_g1_ParamLimits

0xa4bb,	// (0x00057977) popup_call_audio_second_window_g1

0xa4f7,	// (0x000579b3) popup_call_audio_second_window_g2_ParamLimits

0xa4f7,	// (0x000579b3) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0005c5b6) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0005c5b6) popup_call_audio_second_window_g

0xa533,	// (0x000579ef) popup_call_audio_second_window_t1_ParamLimits

0xa533,	// (0x000579ef) popup_call_audio_second_window_t1

0xa5b4,	// (0x00057a70) popup_call_audio_second_window_t2_ParamLimits

0xa5b4,	// (0x00057a70) popup_call_audio_second_window_t2

0xa5ea,	// (0x00057aa6) popup_call_audio_second_window_t3_ParamLimits

0xa5ea,	// (0x00057aa6) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0005c5bb) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0005c5bb) popup_call_audio_second_window_t

0x9aa3,	// (0x00056f5f) bg_popup_call_pane_cp04

0xa620,	// (0x00057adc) list_conf_pane

0xa628,	// (0x00057ae4) popup_call_audio_conf_window_t1

0xa636,	// (0x00057af2) call_thumbnail_pane_g1

0xa63e,	// (0x00057afa) bg_pinb_pane_ParamLimits

0xa63e,	// (0x00057afa) bg_pinb_pane

0xa64c,	// (0x00057b08) find_pinb_pane

0xa655,	// (0x00057b11) listscroll_pinb_pane_ParamLimits

0xa655,	// (0x00057b11) listscroll_pinb_pane

0xa664,	// (0x00057b20) pinb_bg_pane_g1

0x0f80,	// (0x0004e43c) pinb_bg_pane_g2

0x0f8c,	// (0x0004e448) pinb_bg_pane_g3

0x0f98,	// (0x0004e454) pinb_bg_pane_g4

0x0fa4,	// (0x0004e460) pinb_bg_pane_g5

0x0fb0,	// (0x0004e46c) pinb_bg_pane_g6

0x0fbb,	// (0x0004e477) pinb_bg_pane_g7

0x0fc6,	// (0x0004e482) pinb_bg_pane_g8

0x0fd1,	// (0x0004e48d) pinb_bg_pane_g9

0x0fdb,	// (0x0004e497) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0005c5c2) pinb_bg_pane_g

0x0ff8,	// (0x0004e4b4) grid_pinb_pane

0x1001,	// (0x0004e4bd) list_pinb_pane

0x100a,	// (0x0004e4c6) scroll_pane_cp01_ParamLimits

0x100a,	// (0x0004e4c6) scroll_pane_cp01

0xa66e,	// (0x00057b2a) find_pinb_pane_g1_ParamLimits

0xa66e,	// (0x00057b2a) find_pinb_pane_g1

0xa686,	// (0x00057b42) find_pinb_pane_t1

0xa698,	// (0x00057b54) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0005c5dc) find_pinb_pane_t

0xa6ad,	// (0x00057b69) input_focus_pane_cp01_ParamLimits

0xa6ad,	// (0x00057b69) input_focus_pane_cp01

0x101c,	// (0x0004e4d8) cell_pinb_pane_ParamLimits

0x101c,	// (0x0004e4d8) cell_pinb_pane

0xa6b9,	// (0x00057b75) cell_pinb_pane_g1_ParamLimits

0xa6b9,	// (0x00057b75) cell_pinb_pane_g1

0xa6cc,	// (0x00057b88) cell_pinb_pane_g2_ParamLimits

0xa6cc,	// (0x00057b88) cell_pinb_pane_g2

0xa6d8,	// (0x00057b94) cell_pinb_pane_g3_ParamLimits

0xa6d8,	// (0x00057b94) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0005c5e1) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0005c5e1) cell_pinb_pane_g

0x9aa3,	// (0x00056f5f) grid_highlight_pane_cp01

0x104a,	// (0x0004e506) list_pinb_item_pane_ParamLimits

0x104a,	// (0x0004e506) list_pinb_item_pane

0x9aa3,	// (0x00056f5f) list_highlight_pane_cp02

0x105d,	// (0x0004e519) list_pinb_item_pane_g1_ParamLimits

0x105d,	// (0x0004e519) list_pinb_item_pane_g1

0x106a,	// (0x0004e526) list_pinb_item_pane_g2_ParamLimits

0x106a,	// (0x0004e526) list_pinb_item_pane_g2

0x1076,	// (0x0004e532) list_pinb_item_pane_g3_ParamLimits

0x1076,	// (0x0004e532) list_pinb_item_pane_g3

0x1087,	// (0x0004e543) list_pinb_item_pane_g4_ParamLimits

0x1087,	// (0x0004e543) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0005c5e8) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0005c5e8) list_pinb_item_pane_g

0x1093,	// (0x0004e54f) list_pinb_item_pane_t1_ParamLimits

0x1093,	// (0x0004e54f) list_pinb_item_pane_t1

0x10c8,	// (0x0004e584) calc_display_pane

0x10f0,	// (0x0004e5ac) calc_paper_pane

0x1113,	// (0x0004e5cf) grid_calc_pane

0x9aa3,	// (0x00056f5f) bg_list_pane_cp01

0x1141,	// (0x0004e5fd) clock_g1

0x1149,	// (0x0004e605) clock_g2

0x0001,

0xf135,	// (0x0005c5f1) clock_g

0x1151,	// (0x0004e60d) clock_t1_ParamLimits

0x1151,	// (0x0004e60d) clock_t1

0x1166,	// (0x0004e622) clock_t2_ParamLimits

0x1166,	// (0x0004e622) clock_t2

0x1178,	// (0x0004e634) clock_t3_ParamLimits

0x1178,	// (0x0004e634) clock_t3

0x118a,	// (0x0004e646) clock_t4_ParamLimits

0x118a,	// (0x0004e646) clock_t4

0x119c,	// (0x0004e658) clock_t5_ParamLimits

0x119c,	// (0x0004e658) clock_t5

0x11b1,	// (0x0004e66d) clock_t6_ParamLimits

0x11b1,	// (0x0004e66d) clock_t6

0x11c3,	// (0x0004e67f) clock_t7_ParamLimits

0x11c3,	// (0x0004e67f) clock_t7

0x11d5,	// (0x0004e691) clock_t8_ParamLimits

0x11d5,	// (0x0004e691) clock_t8

0x11e9,	// (0x0004e6a5) clock_t9_ParamLimits

0x11e9,	// (0x0004e6a5) clock_t9

0x0008,

0xf13a,	// (0x0005c5f6) clock_t_ParamLimits

0xf13a,	// (0x0005c5f6) clock_t

0xa6e4,	// (0x00057ba0) popup_clock_analogue_window_cp02

0xa6e4,	// (0x00057ba0) popup_clock_digital_window_cp01

0xa6ec,	// (0x00057ba8) listscroll_help_pane

0x9aa3,	// (0x00056f5f) phob_pre_status_pane

0xa6f6,	// (0x00057bb2) grid_qdial_pane

0xa63e,	// (0x00057afa) listscroll_mce_pane

0xa63e,	// (0x00057afa) bg_notes_pane

0xa700,	// (0x00057bbc) list_notes_pane

0x11fd,	// (0x0004e6b9) scroll_pane_cp06

0xa70e,	// (0x00057bca) bg_calc_paper_pane

0x9b83,	// (0x0005703f) list_calc_pane

0xa722,	// (0x00057bde) bg_calc_display_pane

0x1211,	// (0x0004e6cd) calc_display_pane_t1

0x1223,	// (0x0004e6df) calc_display_pane_t2

0x9b9d,	// (0x00057059) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0005c609) calc_display_pane_t

0x1235,	// (0x0004e6f1) cell_calc_pane_ParamLimits

0x1235,	// (0x0004e6f1) cell_calc_pane

0xa72e,	// (0x00057bea) bg_calc_paper_pane_g1

0xa73a,	// (0x00057bf6) bg_calc_paper_pane_g2

0xa746,	// (0x00057c02) bg_calc_paper_pane_g3

0xa752,	// (0x00057c0e) bg_calc_paper_pane_g4

0xa75e,	// (0x00057c1a) bg_calc_paper_pane_g5

0x126c,	// (0x0004e728) bg_calc_paper_pane_g6

0x127d,	// (0x0004e739) bg_calc_paper_pane_g7

0x128e,	// (0x0004e74a) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0005c610) bg_calc_paper_pane_g

0x12a1,	// (0x0004e75d) calc_bg_paper_pane_g9

0x12b4,	// (0x0004e770) list_calc_item_pane_ParamLimits

0x12b4,	// (0x0004e770) list_calc_item_pane

0xa76a,	// (0x00057c26) list_calc_item_pane_g1

0x9baf,	// (0x0005706b) list_calc_item_pane_t1_ParamLimits

0x9baf,	// (0x0005706b) list_calc_item_pane_t1

0x12ce,	// (0x0004e78a) list_calc_item_pane_t2_ParamLimits

0x12ce,	// (0x0004e78a) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0005c621) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0005c621) list_calc_item_pane_t

0xa777,	// (0x00057c33) cell_calc_pane_g1

0xa781,	// (0x00057c3d) grid_highlight_pane_cp02

0xa7a3,	// (0x00057c5f) bg_calc_display_pane_g1

0x9bc1,	// (0x0005707d) bg_calc_display_pane_g2

0xa7ac,	// (0x00057c68) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0005c62b) bg_calc_display_pane_g

0x1300,	// (0x0004e7bc) cell_qdial_pane_ParamLimits

0x1300,	// (0x0004e7bc) cell_qdial_pane

0x1314,	// (0x0004e7d0) cell_qdial_pane_g1_ParamLimits

0x1314,	// (0x0004e7d0) cell_qdial_pane_g1

0x132a,	// (0x0004e7e6) cell_qdial_pane_g2_ParamLimits

0x132a,	// (0x0004e7e6) cell_qdial_pane_g2

0xa7b5,	// (0x00057c71) cell_qdial_pane_g3_ParamLimits

0xa7b5,	// (0x00057c71) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0005c632) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0005c632) cell_qdial_pane_g

0x1350,	// (0x0004e80c) cell_qdial_pane_t1_ParamLimits

0x1350,	// (0x0004e80c) cell_qdial_pane_t1

0x1368,	// (0x0004e824) cell_qdial_pane_t2_ParamLimits

0x1368,	// (0x0004e824) cell_qdial_pane_t2

0x137b,	// (0x0004e837) cell_qdial_pane_t3_ParamLimits

0x137b,	// (0x0004e837) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0005c63b) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0005c63b) cell_qdial_pane_t

0x9aa3,	// (0x00056f5f) grid_highlight_pane_cp04

0xa7c1,	// (0x00057c7d) thumbnail_qdial_pane_ParamLimits

0xa7c1,	// (0x00057c7d) thumbnail_qdial_pane

0xa81d,	// (0x00057cd9) list_help_pane

0xa826,	// (0x00057ce2) scroll_pane_cp02

0x138e,	// (0x0004e84a) help_list_pane_t1_ParamLimits

0x138e,	// (0x0004e84a) help_list_pane_t1

0x9bcb,	// (0x00057087) bg_notes_pane_g2

0x9bd3,	// (0x0005708f) bg_notes_pane_g3

0x9bdb,	// (0x00057097) notes_bg_pane_g1

0x9be3,	// (0x0005709f) notes_bg_pane_g4

0x9beb,	// (0x000570a7) notes_bg_pane_g5

0x9bf3,	// (0x000570af) notes_bg_pane_g6

0x9bfb,	// (0x000570b7) notes_bg_pane_g7

0x9c03,	// (0x000570bf) notes_bg_pane_g8

0x9c0b,	// (0x000570c7) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0005c659) notes_bg_pane_g

0x13ad,	// (0x0004e869) list_notes_text_pane_ParamLimits

0x13ad,	// (0x0004e869) list_notes_text_pane

0xa82f,	// (0x00057ceb) list_notes_text_pane_g1

0x13c3,	// (0x0004e87f) list_notes_text_pane_t1

0x13d1,	// (0x0004e88d) listscroll_cale_week_pane

0x13fd,	// (0x0004e8b9) bg_cale_heading_pane

0xa852,	// (0x00057d0e) bg_cale_pane_cp01

0x141b,	// (0x0004e8d7) cale_week_corner_pane

0x143a,	// (0x0004e8f6) cale_week_day_heading_pane

0x145d,	// (0x0004e919) cale_week_scroll_pane_g1

0x1476,	// (0x0004e932) cale_week_scroll_pane_g2

0x148e,	// (0x0004e94a) cale_week_scroll_pane_g3

0x14a6,	// (0x0004e962) cale_week_scroll_pane_g4

0x14be,	// (0x0004e97a) cale_week_scroll_pane_g5

0x14da,	// (0x0004e996) cale_week_scroll_pane_g6

0x14fa,	// (0x0004e9b6) cale_week_scroll_pane_g7

0x151a,	// (0x0004e9d6) cale_week_scroll_pane_g8

0x153e,	// (0x0004e9fa) cale_week_scroll_pane_g9

0x1556,	// (0x0004ea12) cale_week_scroll_pane_g10

0x156e,	// (0x0004ea2a) cale_week_scroll_pane_g11

0x1586,	// (0x0004ea42) cale_week_scroll_pane_g12

0x159e,	// (0x0004ea5a) cale_week_scroll_pane_g13

0x159e,	// (0x0004ea5a) cale_week_scroll_pane_g14

0x159e,	// (0x0004ea5a) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0005c668) cale_week_scroll_pane_g

0x15da,	// (0x0004ea96) cale_week_time_pane

0x15fe,	// (0x0004eaba) grid_cale_week_pane

0xa882,	// (0x00057d3e) scroll_pane_cp08

0x1624,	// (0x0004eae0) cell_cale_week_pane_ParamLimits

0x1624,	// (0x0004eae0) cell_cale_week_pane

0x16b2,	// (0x0004eb6e) cale_week_day_heading_pane_t1

0x16fc,	// (0x0004ebb8) cale_week_day_heading_pane_t2

0x174b,	// (0x0004ec07) cale_week_day_heading_pane_t3

0x179a,	// (0x0004ec56) cale_week_day_heading_pane_t4

0x17e9,	// (0x0004eca5) cale_week_day_heading_pane_t5

0x1840,	// (0x0004ecfc) cale_week_day_heading_pane_t6

0x1897,	// (0x0004ed53) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0005c689) cale_week_day_heading_pane_t

0xa89f,	// (0x00057d5b) bg_cale_side_pane

0x18e1,	// (0x0004ed9d) cale_week_time_pane_t1

0x18fb,	// (0x0004edb7) cale_week_time_pane_t2

0x1915,	// (0x0004edd1) cale_week_time_pane_t3

0x192f,	// (0x0004edeb) cale_week_time_pane_t4

0x1949,	// (0x0004ee05) cale_week_time_pane_t5

0x1963,	// (0x0004ee1f) cale_week_time_pane_t6

0x197d,	// (0x0004ee39) cale_week_time_pane_t7

0x199d,	// (0x0004ee59) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0005c698) cale_week_time_pane_t

0x19bd,	// (0x0004ee79) cell_cale_week_pane_g2

0x19e1,	// (0x0004ee9d) cell_cale_week_pane_g3_ParamLimits

0x19e1,	// (0x0004ee9d) cell_cale_week_pane_g3

0xa8ad,	// (0x00057d69) grid_highlight_pane_cp07

0xa8b5,	// (0x00057d71) listscroll_gms_pane

0xa8bf,	// (0x00057d7b) grid_gms_pane

0xa8c8,	// (0x00057d84) listscroll_gms_pane_g1

0xa8d0,	// (0x00057d8c) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0005c6a9) listscroll_gms_pane_g

0x19f9,	// (0x0004eeb5) scroll_pane_cp010

0x1a04,	// (0x0004eec0) cell_gms_pane_ParamLimits

0x1a04,	// (0x0004eec0) cell_gms_pane

0x1a16,	// (0x0004eed2) cell_gms_pane_g1

0xa8d8,	// (0x00057d94) cell_gms_pane_g2

0xa82f,	// (0x00057ceb) cell_gms_pane_g3

0xa8e0,	// (0x00057d9c) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0005c6ae) cell_gms_pane_g

0xa8e9,	// (0x00057da5) grid_highlight_pane_cp09

0x3e85,	// (0x00051341) phob_pre_status_pane_g1

0x3e8d,	// (0x00051349) phob_pre_status_pane_g2

0x3e95,	// (0x00051351) phob_pre_status_pane_g3

0x3e9d,	// (0x00051359) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0005ca9d) phob_pre_status_pane_g

0x3ead,	// (0x00051369) phob_pre_status_pane_t1

0x3ebb,	// (0x00051377) phob_pre_status_pane_t2

0x3ecb,	// (0x00051387) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0005caa8) phob_pre_status_pane_t

0x9aa3,	// (0x00056f5f) bg_list_pane_cp05

0x1a26,	// (0x0004eee2) grid_vorec_pane

0x1a30,	// (0x0004eeec) vorec_t1

0x1a3e,	// (0x0004eefa) vorec_t2

0x1a4c,	// (0x0004ef08) vorec_t3

0x1a5a,	// (0x0004ef16) vorec_t4

0x9c13,	// (0x000570cf) vorec_t5

0x1a68,	// (0x0004ef24) vorec_t6

0x0006,

0xf1fb,	// (0x0005c6b7) vorec_t

0x1a84,	// (0x0004ef40) wait_bar_pane_cp01

0x1a8c,	// (0x0004ef48) cell_vorec_pane_ParamLimits

0x1a8c,	// (0x0004ef48) cell_vorec_pane

0x9c21,	// (0x000570dd) cell_vorec_pane_g1

0x9aa3,	// (0x00056f5f) grid_highlight_pane_cp05

0x1ab7,	// (0x0004ef73) cams_zoom_pane

0x1ac6,	// (0x0004ef82) image_vga_pane

0x1ae0,	// (0x0004ef9c) main_camera_pane_g1

0x1af2,	// (0x0004efae) main_camera_pane_g2

0x1b02,	// (0x0004efbe) main_camera_pane_g3

0x1b14,	// (0x0004efd0) main_camera_pane_g4

0x1b26,	// (0x0004efe2) main_camera_pane_g5

0x1b38,	// (0x0004eff4) main_camera_pane_g6

0x1b4a,	// (0x0004f006) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0005c6c6) main_camera_pane_g

0x1b5c,	// (0x0004f018) main_camera_pane_t1

0x1b72,	// (0x0004f02e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0005c6d7) main_camera_pane_t

0x1bae,	// (0x0004f06a) cams_zoom_pane_cp_ParamLimits

0x1bae,	// (0x0004f06a) cams_zoom_pane_cp

0x1bd6,	// (0x0004f092) image_cif_pane_ParamLimits

0x1bd6,	// (0x0004f092) image_cif_pane

0x1c11,	// (0x0004f0cd) image_subqcif_pane

0x1c19,	// (0x0004f0d5) main_video_pane_g1_ParamLimits

0x1c19,	// (0x0004f0d5) main_video_pane_g1

0x1c3d,	// (0x0004f0f9) main_video_pane_g2_ParamLimits

0x1c3d,	// (0x0004f0f9) main_video_pane_g2

0x1c71,	// (0x0004f12d) main_video_pane_g3_ParamLimits

0x1c71,	// (0x0004f12d) main_video_pane_g3

0x1c9f,	// (0x0004f15b) main_video_pane_g4_ParamLimits

0x1c9f,	// (0x0004f15b) main_video_pane_g4

0x1ccd,	// (0x0004f189) main_video_pane_g5_ParamLimits

0x1ccd,	// (0x0004f189) main_video_pane_g5

0xa8fd,	// (0x00057db9) main_video_pane_g6_ParamLimits

0xa8fd,	// (0x00057db9) main_video_pane_g6

0x0006,

0xf220,	// (0x0005c6dc) main_video_pane_g_ParamLimits

0xf220,	// (0x0005c6dc) main_video_pane_g

0x1cf6,	// (0x0004f1b2) main_video_pane_t1_ParamLimits

0x1cf6,	// (0x0004f1b2) main_video_pane_t1

0xa917,	// (0x00057dd3) cams_zoom_pane_g1

0xa920,	// (0x00057ddc) cams_zoom_pane_g2

0xa929,	// (0x00057de5) cams_zoom_pane_g3

0xa932,	// (0x00057dee) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0005c6eb) cams_zoom_pane_g

0x1d53,	// (0x0004f20f) grid_cams_pane

0x1d6d,	// (0x0004f229) linegrid_cams_pane

0x1d80,	// (0x0004f23c) cell_cams_pane_ParamLimits

0x1d80,	// (0x0004f23c) cell_cams_pane

0xa93b,	// (0x00057df7) cams_burst_image_pane

0xa943,	// (0x00057dff) cell_cams_pane_g1

0x9aa3,	// (0x00056f5f) grid_highlight_pane_cp03

0xa777,	// (0x00057c33) mp_bg_pane_g1

0x9aa3,	// (0x00056f5f) bg_list_pane_cp03

0xc6ba,	// (0x00059b76) bg_mp_pane

0xc6c2,	// (0x00059b7e) grid_mp_pane

0xc6ca,	// (0x00059b86) media_player_g1

0xc6d2,	// (0x00059b8e) media_player_t1

0xc6e0,	// (0x00059b9c) media_player_t2

0xc6ee,	// (0x00059baa) media_player_t3

0xc6fc,	// (0x00059bb8) media_player_t4

0xc70a,	// (0x00059bc6) media_player_t5

0xc718,	// (0x00059bd4) media_player_t6

0xc726,	// (0x00059be2) media_player_t7

0x0006,

0xf5cb,	// (0x0005ca87) media_player_t

0xc734,	// (0x00059bf0) wait_bar_pane_cp02

0xf5b0,	// (0x0005ca6c) main_usb_pane_t

0x3e7c,	// (0x00051338) cell_mp_pane

0xa777,	// (0x00057c33) cell_mp_pane_g1

0x9aa3,	// (0x00056f5f) grid_highlight_pane_cp06

0xa94b,	// (0x00057e07) grid_skin_colour_pane

0xa953,	// (0x00057e0f) list_highlight_pane_cp03

0x1e3a,	// (0x0004f2f6) skin_g1

0xa95b,	// (0x00057e17) skin_t1

0xa96a,	// (0x00057e26) skin_t2

0x0001,

0xf264,	// (0x0005c720) skin_t

0x1e42,	// (0x0004f2fe) cell_skin_colour_pane_ParamLimits

0x1e42,	// (0x0004f2fe) cell_skin_colour_pane

0xa978,	// (0x00057e34) cell_skin_colour_pane_g1

0x1ebb,	// (0x0004f377) call_video_g1_ParamLimits

0x1ebb,	// (0x0004f377) call_video_g1

0x1ed7,	// (0x0004f393) call_video_g2_ParamLimits

0x1ed7,	// (0x0004f393) call_video_g2

0x0001,

0xf269,	// (0x0005c725) call_video_g_ParamLimits

0xf269,	// (0x0005c725) call_video_g

0x1f29,	// (0x0004f3e5) call_video_uplink_pane_cp1_ParamLimits

0x1f29,	// (0x0004f3e5) call_video_uplink_pane_cp1

0xa98a,	// (0x00057e46) call_video_uplink_pane_cp2

0x1fc8,	// (0x0004f484) video_down_crop_pane_ParamLimits

0x1fc8,	// (0x0004f484) video_down_crop_pane

0x20b1,	// (0x0004f56d) video_down_pane_ParamLimits

0x20b1,	// (0x0004f56d) video_down_pane

0xa992,	// (0x00057e4e) video_down_subqcif_pane_ParamLimits

0xa992,	// (0x00057e4e) video_down_subqcif_pane

0xa9aa,	// (0x00057e66) video_down_subqcif_pane_cp_ParamLimits

0xa9aa,	// (0x00057e66) video_down_subqcif_pane_cp

0xa9d0,	// (0x00057e8c) im_reading_pane_ParamLimits

0xa9d0,	// (0x00057e8c) im_reading_pane

0x21bf,	// (0x0004f67b) im_writing_pane_ParamLimits

0x21bf,	// (0x0004f67b) im_writing_pane

0x21d5,	// (0x0004f691) im_reading_pane_t1

0xa9ea,	// (0x00057ea6) list_im_pane

0xa9fb,	// (0x00057eb7) scroll_pane_cp07

0x2212,	// (0x0004f6ce) im_writing_pane_t1_ParamLimits

0x2212,	// (0x0004f6ce) im_writing_pane_t1

0xaa14,	// (0x00057ed0) im_writing_pane_t2_ParamLimits

0xaa14,	// (0x00057ed0) im_writing_pane_t2

0x0001,

0xf273,	// (0x0005c72f) im_writing_pane_t_ParamLimits

0xf273,	// (0x0005c72f) im_writing_pane_t

0x9aa3,	// (0x00056f5f) input_focus_pane_cp04

0x9aa3,	// (0x00056f5f) input_focus_pane_cp05

0x2227,	// (0x0004f6e3) list_im_single_pane_ParamLimits

0x2227,	// (0x0004f6e3) list_im_single_pane

0x223d,	// (0x0004f6f9) list_single_im_pane_t1

0x3e3c,	// (0x000512f8) blid_accuracy_pane

0x3e44,	// (0x00051300) blid_compass_pane

0x3e4e,	// (0x0005130a) main_location_t1

0x3e5e,	// (0x0005131a) main_location_t2

0x3e6e,	// (0x0005132a) main_location_t3

0x0002,

0xf5da,	// (0x0005ca96) main_location_t

0x9aa3,	// (0x00056f5f) aid_levels_location

0xa777,	// (0x00057c33) blid_accuracy_pane_g1

0xa777,	// (0x00057c33) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0005c791) blid_accuracy_pane_g

0xaa5c,	// (0x00057f18) wml_content_pane

0xaa9a,	// (0x00057f56) wml_button_pane_ParamLimits

0xaa9a,	// (0x00057f56) wml_button_pane

0x224c,	// (0x0004f708) wml_list_single_large_pane_ParamLimits

0x224c,	// (0x0004f708) wml_list_single_large_pane

0x2262,	// (0x0004f71e) wml_list_single_medium_pane_ParamLimits

0x2262,	// (0x0004f71e) wml_list_single_medium_pane

0x227c,	// (0x0004f738) wml_list_single_small_pane_ParamLimits

0x227c,	// (0x0004f738) wml_list_single_small_pane

0xaaae,	// (0x00057f6a) wml_selection_box_pane_ParamLimits

0xaaae,	// (0x00057f6a) wml_selection_box_pane

0xaac1,	// (0x00057f7d) wml_list_single_pane_t1

0xaad0,	// (0x00057f8c) wml_list_single_medium_pane_t1

0xaadf,	// (0x00057f9b) wml_list_single_large_pane_t1

0xaaee,	// (0x00057faa) input_focus_pane_cp02_ParamLimits

0xaaee,	// (0x00057faa) input_focus_pane_cp02

0xab01,	// (0x00057fbd) wml_selection_box_pane_g1

0xab0a,	// (0x00057fc6) wml_selection_box_pane_t1_ParamLimits

0xab0a,	// (0x00057fc6) wml_selection_box_pane_t1

0xa63e,	// (0x00057afa) bg_wml_button_pane_ParamLimits

0xa63e,	// (0x00057afa) bg_wml_button_pane

0xab22,	// (0x00057fde) wml_button_pane_g1

0xab2a,	// (0x00057fe6) wml_button_pane_t1

0xab22,	// (0x00057fde) wml_button_bg_pane_g1

0xab3a,	// (0x00057ff6) wml_button_bg_pane_g2

0xab42,	// (0x00057ffe) wml_button_bg_pane_g3

0xab4a,	// (0x00058006) wml_button_bg_pane_g4

0xab52,	// (0x0005800e) wml_button_bg_pane_g5

0xab5a,	// (0x00058016) wml_button_bg_pane_g6

0xab62,	// (0x0005801e) wml_button_bg_pane_g7

0xab6a,	// (0x00058026) wml_button_bg_pane_g8

0xab72,	// (0x0005802e) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0005c734) wml_button_bg_pane_g

0x2296,	// (0x0004f752) bg_list_pane_cp02

0xab7a,	// (0x00058036) mce_header_pane_ParamLimits

0xab7a,	// (0x00058036) mce_header_pane

0xab90,	// (0x0005804c) mce_icon_pane

0xab90,	// (0x0005804c) mce_image_pane

0xab99,	// (0x00058055) mce_text_pane_ParamLimits

0xab99,	// (0x00058055) mce_text_pane

0x229e,	// (0x0004f75a) scroll_pane_cp03

0xaa92,	// (0x00057f4e) scroll_pane_cp04

0xabac,	// (0x00058068) scroll_pane_cp05_ParamLimits

0xabac,	// (0x00058068) scroll_pane_cp05

0x22a8,	// (0x0004f764) mce_header_field_pane_ParamLimits

0x22a8,	// (0x0004f764) mce_header_field_pane

0x22bf,	// (0x0004f77b) mce_header_field_pane_2_ParamLimits

0x22bf,	// (0x0004f77b) mce_header_field_pane_2

0x22d5,	// (0x0004f791) mce_header_field_pane_3

0x22dd,	// (0x0004f799) list_single_mce_message_pane_ParamLimits

0x22dd,	// (0x0004f799) list_single_mce_message_pane

0x22f4,	// (0x0004f7b0) list_single_mce_smart_pane_ParamLimits

0x22f4,	// (0x0004f7b0) list_single_mce_smart_pane

0xabb8,	// (0x00058074) input_focus_pane_cp03

0xabc1,	// (0x0005807d) list_header_data_pane

0x2316,	// (0x0004f7d2) mce_header_field_pane_t1

0x2326,	// (0x0004f7e2) list_single_mce_header_pane_ParamLimits

0x2326,	// (0x0004f7e2) list_single_mce_header_pane

0xabc9,	// (0x00058085) list_single_mce_header_pane_t1

0xabd8,	// (0x00058094) list_single_mce_message_pane_g1

0xabe0,	// (0x0005809c) list_single_mce_message_pane_t1

0x2360,	// (0x0004f81c) bg_cale_heading_pane_cp01_ParamLimits

0x2360,	// (0x0004f81c) bg_cale_heading_pane_cp01

0xabee,	// (0x000580aa) bg_cale_pane_cp02_ParamLimits

0xabee,	// (0x000580aa) bg_cale_pane_cp02

0x239b,	// (0x0004f857) cale_month_corner_pane

0x23ba,	// (0x0004f876) cale_month_day_heading_pane_ParamLimits

0x23ba,	// (0x0004f876) cale_month_day_heading_pane

0x240d,	// (0x0004f8c9) cale_month_pane_g1_ParamLimits

0x240d,	// (0x0004f8c9) cale_month_pane_g1

0x243d,	// (0x0004f8f9) cale_month_pane_g2_ParamLimits

0x243d,	// (0x0004f8f9) cale_month_pane_g2

0x246d,	// (0x0004f929) cale_month_pane_g3_ParamLimits

0x246d,	// (0x0004f929) cale_month_pane_g3

0x24a9,	// (0x0004f965) cale_month_pane_g4_ParamLimits

0x24a9,	// (0x0004f965) cale_month_pane_g4

0x24e5,	// (0x0004f9a1) cale_month_pane_g5_ParamLimits

0x24e5,	// (0x0004f9a1) cale_month_pane_g5

0x252d,	// (0x0004f9e9) cale_month_pane_g6_ParamLimits

0x252d,	// (0x0004f9e9) cale_month_pane_g6

0x2579,	// (0x0004fa35) cale_month_pane_g7_ParamLimits

0x2579,	// (0x0004fa35) cale_month_pane_g7

0x25cd,	// (0x0004fa89) cale_month_pane_g8_ParamLimits

0x25cd,	// (0x0004fa89) cale_month_pane_g8

0x2621,	// (0x0004fadd) cale_month_pane_g9_ParamLimits

0x2621,	// (0x0004fadd) cale_month_pane_g9

0x2673,	// (0x0004fb2f) cale_month_pane_g10_ParamLimits

0x2673,	// (0x0004fb2f) cale_month_pane_g10

0x26c5,	// (0x0004fb81) cale_month_pane_g11_ParamLimits

0x26c5,	// (0x0004fb81) cale_month_pane_g11

0x2717,	// (0x0004fbd3) cale_month_pane_g12_ParamLimits

0x2717,	// (0x0004fbd3) cale_month_pane_g12

0x2769,	// (0x0004fc25) cale_month_pane_g13_ParamLimits

0x2769,	// (0x0004fc25) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0005c747) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0005c747) cale_month_pane_g

0x27bb,	// (0x0004fc77) cale_month_week_pane

0x27df,	// (0x0004fc9b) grid_cale_month_pane_ParamLimits

0x27df,	// (0x0004fc9b) grid_cale_month_pane

0x281d,	// (0x0004fcd9) cale_month_day_heading_pane_t1

0x28a3,	// (0x0004fd5f) cale_month_day_heading_pane_t2

0x2934,	// (0x0004fdf0) cale_month_day_heading_pane_t3

0x29c5,	// (0x0004fe81) cale_month_day_heading_pane_t4

0x2a5e,	// (0x0004ff1a) cale_month_day_heading_pane_t5

0x2aff,	// (0x0004ffbb) cale_month_day_heading_pane_t6

0x2ba0,	// (0x0005005c) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0005c762) cale_month_day_heading_pane_t

0xa89f,	// (0x00057d5b) bg_cale_side_pane_cp01

0x2c49,	// (0x00050105) cale_month_week_pane_t1

0x2c62,	// (0x0005011e) cale_month_week_pane_t2

0x2c7b,	// (0x00050137) cale_month_week_pane_t3

0x2c94,	// (0x00050150) cale_month_week_pane_t4

0x2cad,	// (0x00050169) cale_month_week_pane_t5

0x2cc6,	// (0x00050182) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0005c771) cale_month_week_pane_t

0x2cdf,	// (0x0005019b) cell_cale_month_pane_ParamLimits

0x2cdf,	// (0x0005019b) cell_cale_month_pane

0x9c2b,	// (0x000570e7) cell_cale_month_pane_g1

0x2e37,	// (0x000502f3) cell_cale_month_pane_t1_ParamLimits

0x2e37,	// (0x000502f3) cell_cale_month_pane_t1

0xa8ad,	// (0x00057d69) grid_highlight_pane_cp08

0xa777,	// (0x00057c33) main_smil_g1

0x2e57,	// (0x00050313) smil_status_pane

0xac2d,	// (0x000580e9) smil_text_pane

0xc5da,	// (0x00059a96) bg_popup_call3_rect_pane_g8

0xc5e2,	// (0x00059a9e) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0005ca2a) bg_popup_call3_rect_pane_g

0xc829,	// (0x00059ce5) smil_status_volume_pane_g1

0xac37,	// (0x000580f3) smil_status_pane_t1

0x9d81,	// (0x0005723d) volume_smil_pane

0xac4e,	// (0x0005810a) list_smil_text_pane

0x2e6c,	// (0x00050328) scroll_pane_cp011

0x2e77,	// (0x00050333) smil_text_list_pane_t1_ParamLimits

0x2e77,	// (0x00050333) smil_text_list_pane_t1

0x9c37,	// (0x000570f3) aid_volume_smil_ParamLimits

0x9c37,	// (0x000570f3) aid_volume_smil

0xa777,	// (0x00057c33) smil_volume_pane_g1

0xa777,	// (0x00057c33) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0005c791) smil_volume_pane_g

0x13d1,	// (0x0004e88d) listscroll_cale_day_pane

0xac58,	// (0x00058114) bg_cale_pane

0xac70,	// (0x0005812c) list_cale_pane

0xac93,	// (0x0005814f) scroll_pane_cp09

0xaca4,	// (0x00058160) cale_bg_pane_g1

0xacac,	// (0x00058168) cale_bg_pane_g2

0xacb4,	// (0x00058170) cale_bg_pane_g3

0xacbc,	// (0x00058178) cale_bg_pane_g4

0xacc4,	// (0x00058180) cale_bg_pane_g5

0xaccc,	// (0x00058188) cale_bg_pane_g6

0xacd4,	// (0x00058190) cale_bg_pane_g7

0xacdc,	// (0x00058198) cale_bg_pane_g8

0xace4,	// (0x000581a0) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0005c796) cale_bg_pane_g

0x2eb9,	// (0x00050375) list_cale_time_pane_ParamLimits

0x2eb9,	// (0x00050375) list_cale_time_pane

0xacf4,	// (0x000581b0) list_cale_time_pane_g1_ParamLimits

0xacf4,	// (0x000581b0) list_cale_time_pane_g1

0xad00,	// (0x000581bc) list_cale_time_pane_g2_ParamLimits

0xad00,	// (0x000581bc) list_cale_time_pane_g2

0x2ed0,	// (0x0005038c) list_cale_time_pane_g3_ParamLimits

0x2ed0,	// (0x0005038c) list_cale_time_pane_g3

0x2ede,	// (0x0005039a) list_cale_time_pane_g4_ParamLimits

0x2ede,	// (0x0005039a) list_cale_time_pane_g4

0x2eec,	// (0x000503a8) list_cale_time_pane_g5_ParamLimits

0x2eec,	// (0x000503a8) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0005c7a9) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0005c7a9) list_cale_time_pane_g

0xad1a,	// (0x000581d6) list_cale_time_pane_t1_ParamLimits

0xad1a,	// (0x000581d6) list_cale_time_pane_t1

0xad42,	// (0x000581fe) list_cale_time_pane_t2_ParamLimits

0xad42,	// (0x000581fe) list_cale_time_pane_t2

0x31b2,	// (0x0005066e) aid_blid_cardinal_pane

0x31f0,	// (0x000506ac) compass_pane_t4

0xad6a,	// (0x00058226) list_cale_time_pane_t4_ParamLimits

0xad6a,	// (0x00058226) list_cale_time_pane_t4

0x31fe,	// (0x000506ba) compass_pane_t5

0x320c,	// (0x000506c8) compass_pane_t6

0x321a,	// (0x000506d6) compass_pane_t7

0xb21b,	// (0x000586d7) navi_pane_cc_t1

0xb43d,	// (0x000588f9) aid_phob_thumbnail_center_pane

0x384c,	// (0x00050d08) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0005c7b6) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0005c7b6) list_cale_time_pane_t

0x96fa,	// (0x00056bb6) bg_popup_window_pane_cp02_ParamLimits

0x96fa,	// (0x00056bb6) bg_popup_window_pane_cp02

0xad92,	// (0x0005824e) heading_pane_cp01_ParamLimits

0xad92,	// (0x0005824e) heading_pane_cp01

0xad9e,	// (0x0005825a) loc_req_pane_ParamLimits

0xad9e,	// (0x0005825a) loc_req_pane

0xadae,	// (0x0005826a) loc_type_pane_ParamLimits

0xadae,	// (0x0005826a) loc_type_pane

0xadc0,	// (0x0005827c) loc_type_pane_t1_ParamLimits

0xadc0,	// (0x0005827c) loc_type_pane_t1

0xadd2,	// (0x0005828e) loc_type_pane_t2_ParamLimits

0xadd2,	// (0x0005828e) loc_type_pane_t2

0xade4,	// (0x000582a0) loc_type_pane_t3_ParamLimits

0xade4,	// (0x000582a0) loc_type_pane_t3

0x0002,

0xf301,	// (0x0005c7bd) loc_type_pane_t_ParamLimits

0xf301,	// (0x0005c7bd) loc_type_pane_t

0xadf6,	// (0x000582b2) list_loc_req_pane

0xae00,	// (0x000582bc) scroll_pane_cp012

0x2efa,	// (0x000503b6) list_single_loc_request_popup_menu_pane_ParamLimits

0x2efa,	// (0x000503b6) list_single_loc_request_popup_menu_pane

0xae0b,	// (0x000582c7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae0b,	// (0x000582c7) list_single_loc_request_popup_menu_pane_g1

0xae17,	// (0x000582d3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae17,	// (0x000582d3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0005c7c4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0005c7c4) list_single_loc_request_popup_menu_pane_g

0xae23,	// (0x000582df) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae23,	// (0x000582df) list_single_loc_request_popup_menu_pane_t1

0xa63e,	// (0x00057afa) bg_popup_window_pane_cp03_ParamLimits

0xa63e,	// (0x00057afa) bg_popup_window_pane_cp03

0xb315,	// (0x000587d1) heading_loc_req_pane_ParamLimits

0xb315,	// (0x000587d1) heading_loc_req_pane

0x2f07,	// (0x000503c3) popup_dyc_status_message_window_g1_ParamLimits

0x2f07,	// (0x000503c3) popup_dyc_status_message_window_g1

0x2f1b,	// (0x000503d7) popup_dyc_status_message_window_t1_ParamLimits

0x2f1b,	// (0x000503d7) popup_dyc_status_message_window_t1

0x2f30,	// (0x000503ec) popup_dyc_status_message_window_t2_ParamLimits

0x2f30,	// (0x000503ec) popup_dyc_status_message_window_t2

0x2f45,	// (0x00050401) popup_dyc_status_message_window_t3_ParamLimits

0x2f45,	// (0x00050401) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0005c7c9) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0005c7c9) popup_dyc_status_message_window_t

0x9aa3,	// (0x00056f5f) bg_heading_pane_cp01

0xae39,	// (0x000582f5) heading_loc_req_pane_g1

0xae41,	// (0x000582fd) heading_loc_req_pane_g2

0xae49,	// (0x00058305) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0005c7d0) heading_loc_req_pane_g

0xae51,	// (0x0005830d) heading_loc_req_pane_t1

0xae60,	// (0x0005831c) bg_popup_sub_pane_cp01_ParamLimits

0xae60,	// (0x0005831c) bg_popup_sub_pane_cp01

0xae6e,	// (0x0005832a) popup_cale_events_window_g1_ParamLimits

0xae6e,	// (0x0005832a) popup_cale_events_window_g1

0xae8e,	// (0x0005834a) popup_cale_events_window_g2_ParamLimits

0xae8e,	// (0x0005834a) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0005c804) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0005c804) popup_cale_events_window_g

0xaeae,	// (0x0005836a) popup_cale_events_window_t1_ParamLimits

0xaeae,	// (0x0005836a) popup_cale_events_window_t1

0xaec0,	// (0x0005837c) popup_cale_events_window_t2_ParamLimits

0xaec0,	// (0x0005837c) popup_cale_events_window_t2

0xaefe,	// (0x000583ba) popup_cale_events_window_t3_ParamLimits

0xaefe,	// (0x000583ba) popup_cale_events_window_t3

0xaf38,	// (0x000583f4) popup_cale_events_window_t4_ParamLimits

0xaf38,	// (0x000583f4) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0005c809) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0005c809) popup_cale_events_window_t

0x2fc0,	// (0x0005047c) call_type_pane

0x2fd0,	// (0x0005048c) popup_call_status_window_g1

0x2fe4,	// (0x000504a0) popup_call_status_window_g2

0x2ff8,	// (0x000504b4) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0005c812) popup_call_status_window_g

0xaf6e,	// (0x0005842a) call_type_pane_g1

0xaf77,	// (0x00058433) call_type_pane_g2

0x0001,

0xf35d,	// (0x0005c819) call_type_pane_g

0x9aa3,	// (0x00056f5f) bg_popup_sub_pane_cp02

0xaf80,	// (0x0005843c) listscroll_popup_wml_pane

0xaf88,	// (0x00058444) list_wml_pane

0xaf92,	// (0x0005844e) scroll_pane_cp013

0xaf9d,	// (0x00058459) list_single_graphic_popup_wml_pane_ParamLimits

0xaf9d,	// (0x00058459) list_single_graphic_popup_wml_pane

0xa777,	// (0x00057c33) list_single_graphic_popup_wml_pane_g1

0xafb1,	// (0x0005846d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0005c81e) list_single_graphic_popup_wml_pane_g

0xafb9,	// (0x00058475) list_single_graphic_popup_wml_pane_t1

0xafcf,	// (0x0005848b) aid_call_pane

0xa636,	// (0x00057af2) popup_clock_analogue_window_g1

0xa636,	// (0x00057af2) popup_clock_analogue_window_g2

0x9c59,	// (0x00057115) popup_clock_analogue_window_g3

0x9c59,	// (0x00057115) popup_clock_analogue_window_g4

0xa777,	// (0x00057c33) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0005c823) popup_clock_analogue_window_g

0x9c61,	// (0x0005711d) popup_clock_analogue_window_t1

0x9c6f,	// (0x0005712b) clock_digital_number_pane_ParamLimits

0x9c6f,	// (0x0005712b) clock_digital_number_pane

0x9c7b,	// (0x00057137) clock_digital_number_pane_cp02_ParamLimits

0x9c7b,	// (0x00057137) clock_digital_number_pane_cp02

0x9c87,	// (0x00057143) clock_digital_number_pane_cp03_ParamLimits

0x9c87,	// (0x00057143) clock_digital_number_pane_cp03

0x9c93,	// (0x0005714f) clock_digital_number_pane_cp04_ParamLimits

0x9c93,	// (0x0005714f) clock_digital_number_pane_cp04

0x9ca3,	// (0x0005715f) clock_digital_separator_pane_ParamLimits

0x9ca3,	// (0x0005715f) clock_digital_separator_pane

0x9caf,	// (0x0005716b) popup_clock_digital_window_t1

0xa777,	// (0x00057c33) clock_digital_number_pane_g1

0xa777,	// (0x00057c33) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0005c791) clock_digital_number_pane_g

0xa777,	// (0x00057c33) clock_digital_separator_pane_g1

0xa777,	// (0x00057c33) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0005c791) clock_digital_separator_pane_g

0x9aa3,	// (0x00056f5f) bg_popup_window_pane_cp04

0xafd7,	// (0x00058493) heading_pane_cp03

0xafdf,	// (0x0005849b) listscroll_popup_gms_pane

0xafe7,	// (0x000584a3) grid_large_graphic_popup_pane

0xaff1,	// (0x000584ad) listscroll_popup_gms_pane_g1

0xaff9,	// (0x000584b5) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0005c82e) listscroll_popup_gms_pane_g

0xaa92,	// (0x00057f4e) scroll_pane_cp014

0xb001,	// (0x000584bd) cell_large_graphic_popup_pane_ParamLimits

0xb001,	// (0x000584bd) cell_large_graphic_popup_pane

0xb019,	// (0x000584d5) cell_large_graphic_popup_pane_g1_ParamLimits

0xb019,	// (0x000584d5) cell_large_graphic_popup_pane_g1

0xb025,	// (0x000584e1) cell_large_graphic_popup_pane_g2_ParamLimits

0xb025,	// (0x000584e1) cell_large_graphic_popup_pane_g2

0xb031,	// (0x000584ed) cell_large_graphic_popup_pane_g3_ParamLimits

0xb031,	// (0x000584ed) cell_large_graphic_popup_pane_g3

0xb03e,	// (0x000584fa) cell_large_graphic_popup_pane_g4_ParamLimits

0xb03e,	// (0x000584fa) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0005c833) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0005c833) cell_large_graphic_popup_pane_g

0xb04e,	// (0x0005850a) grid_highlight_pane_cp010

0xa777,	// (0x00057c33) bg_popup_call_pane_g1

0xb058,	// (0x00058514) list_single_graphic_popup_conf_pane_ParamLimits

0xb058,	// (0x00058514) list_single_graphic_popup_conf_pane

0xb06b,	// (0x00058527) list_highlight_pane_cp01

0xb074,	// (0x00058530) list_single_graphic_popup_conf_pane_g1

0xb07c,	// (0x00058538) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0005c83c) list_single_graphic_popup_conf_pane_g

0xb084,	// (0x00058540) list_single_graphic_popup_conf_pane_t1

0xb092,	// (0x0005854e) linegrid_cams_pane_g1

0x3007,	// (0x000504c3) linegrid_cams_pane_g2

0xa82f,	// (0x00057ceb) linegrid_cams_pane_g3

0xb09b,	// (0x00058557) linegrid_cams_pane_g4

0x3010,	// (0x000504cc) linegrid_cams_pane_g5

0x3019,	// (0x000504d5) linegrid_cams_pane_g6

0xa8e0,	// (0x00057d9c) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0005c841) linegrid_cams_pane_g

0xb0a4,	// (0x00058560) popup_clock_analogue_window

0xb0a4,	// (0x00058560) popup_clock_digital_window

0x9aa3,	// (0x00056f5f) popup_phob_thumbnail_window

0xa777,	// (0x00057c33) call_video_uplink_pane_g1

0xb0ad,	// (0x00058569) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0005c850) call_video_uplink_pane_g

0xa8ad,	// (0x00057d69) video_uplink_pane

0xb0b5,	// (0x00058571) mce_image_pane_g1

0x3024,	// (0x000504e0) mce_image_pane_g2

0x302c,	// (0x000504e8) mce_image_pane_g3

0x3034,	// (0x000504f0) mce_image_pane_g4

0x303e,	// (0x000504fa) mce_image_pane_g5

0x0004,

0xf399,	// (0x0005c855) mce_image_pane_g

0xb0bf,	// (0x0005857b) control_top_pane_stacon_cp01_ParamLimits

0xb0bf,	// (0x0005857b) control_top_pane_stacon_cp01

0xb0d3,	// (0x0005858f) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0d3,	// (0x0005858f) uni_indicator_pane_stacon_cp01

0xb0e4,	// (0x000585a0) bg_popup_sub_pane_cp03

0x3046,	// (0x00050502) chi_dic_find_pane

0x304e,	// (0x0005050a) listscroll_chi_dic_pane

0x3057,	// (0x00050513) main_pane_chidic_g1

0xb0ee,	// (0x000585aa) chi_dic_find_pane_t1

0xb0fc,	// (0x000585b8) find_chidic_pane

0xb105,	// (0x000585c1) chi_dic_list_pane_ParamLimits

0xb105,	// (0x000585c1) chi_dic_list_pane

0xb116,	// (0x000585d2) scroll_pane_cp020

0xb11e,	// (0x000585da) find_chidic_pane_t1

0x9aa3,	// (0x00056f5f) input_focus_pane_cp06

0x306a,	// (0x00050526) list_chi_dic_pane_ParamLimits

0x306a,	// (0x00050526) list_chi_dic_pane

0x307d,	// (0x00050539) list_chi_dic_pane_t1_ParamLimits

0x307d,	// (0x00050539) list_chi_dic_pane_t1

0x9aa3,	// (0x00056f5f) list_highlight_pane_cp020

0xb12d,	// (0x000585e9) bg_cale_heading_pane_g1

0x3090,	// (0x0005054c) bg_cale_heading_pane_g2

0x3098,	// (0x00050554) bg_cale_heading_pane_g3

0x30a0,	// (0x0005055c) bg_cale_heading_pane_g4

0x30aa,	// (0x00050566) bg_cale_heading_pane_g5

0x30b4,	// (0x00050570) bg_cale_heading_pane_g6

0x30bc,	// (0x00050578) bg_cale_heading_pane_g7

0x30c4,	// (0x00050580) bg_cale_heading_pane_g8

0x30ce,	// (0x0005058a) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0005c860) bg_cale_heading_pane_g

0xb12d,	// (0x000585e9) bg_cale_side_pane_g1

0x30d8,	// (0x00050594) bg_cale_side_pane_g2

0x30e0,	// (0x0005059c) bg_cale_side_pane_g3

0x30e8,	// (0x000505a4) bg_cale_side_pane_g4

0x30f0,	// (0x000505ac) bg_cale_side_pane_g5

0x30f8,	// (0x000505b4) bg_cale_side_pane_g6

0x3100,	// (0x000505bc) bg_cale_side_pane_g7

0x3108,	// (0x000505c4) bg_cale_side_pane_g8

0x3110,	// (0x000505cc) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0005c873) bg_cale_side_pane_g

0x3118,	// (0x000505d4) popup_call_status_window_ParamLimits

0x3118,	// (0x000505d4) popup_call_status_window

0xb135,	// (0x000585f1) stacon_top_pane

0xb13d,	// (0x000585f9) status_pane_ParamLimits

0xb13d,	// (0x000585f9) status_pane

0xb152,	// (0x0005860e) status_small_pane

0xb15a,	// (0x00058616) control_pane

0x9aa3,	// (0x00056f5f) stacon_bottom_pane

0xb162,	// (0x0005861e) list_single_mce_smart_pane_t1_ParamLimits

0xb162,	// (0x0005861e) list_single_mce_smart_pane_t1

0xb175,	// (0x00058631) list_single_mce_smart_pane_t2_ParamLimits

0xb175,	// (0x00058631) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0005c886) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0005c886) list_single_mce_smart_pane_t

0x315f,	// (0x0005061b) compass_pane

0x3168,	// (0x00050624) main_location2_pane_t1

0x317a,	// (0x00050636) main_location2_pane_t2

0x318c,	// (0x00050648) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0005c88b) main_location2_pane_t

0xb194,	// (0x00058650) compass_pane_g1_ParamLimits

0xb194,	// (0x00058650) compass_pane_g1

0x31d2,	// (0x0005068e) compass_pane_t1

0x31e1,	// (0x0005069d) compass_pane_t2

0x0005,

0xf3d8,	// (0x0005c894) compass_pane_t

0x3228,	// (0x000506e4) text_secondary_cp61

0xb212,	// (0x000586ce) navi_pane_cams_g5

0xb28e,	// (0x0005874a) navi_pane_im_t1

0xb29c,	// (0x00058758) navi_pane_mp_g1_ParamLimits

0xb29c,	// (0x00058758) navi_pane_mp_g1

0xb2b0,	// (0x0005876c) navi_pane_mp_g2_ParamLimits

0xb2b0,	// (0x0005876c) navi_pane_mp_g2

0xb2bc,	// (0x00058778) navi_pane_mp_g3_ParamLimits

0xb2bc,	// (0x00058778) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0005c8a8) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0005c8a8) navi_pane_mp_g

0xb2c8,	// (0x00058784) navi_pane_mp_t1

0xb2d6,	// (0x00058792) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0005c8af) navi_pane_mp_t

0xb37e,	// (0x0005883a) navi_pane_vt_g1

0xb2c8,	// (0x00058784) navi_pane_vt_t1

0xb386,	// (0x00058842) navi_slider_pane

0xb396,	// (0x00058852) zooming_pane

0xb39e,	// (0x0005885a) navi_slider_pane_g1

0x9ccc,	// (0x00057188) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0005c8b6) navi_slider_pane_g

0xb3c2,	// (0x0005887e) aid_levels_zoom

0xb3ca,	// (0x00058886) zooming_pane_g1

0xb3d2,	// (0x0005888e) zooming_pane_g2

0xb3d2,	// (0x0005888e) zooming_pane_g3

0x0002,

0xf409,	// (0x0005c8c5) zooming_pane_g

0xb3da,	// (0x00058896) level_10_zoom

0xb3e3,	// (0x0005889f) level_11_zoom

0xb3ec,	// (0x000588a8) level_1_zoom

0xb3f5,	// (0x000588b1) level_2_zoom

0xb3fe,	// (0x000588ba) level_3_zoom

0xb407,	// (0x000588c3) level_4_zoom

0xb410,	// (0x000588cc) level_5_zoom

0xb419,	// (0x000588d5) level_6_zoom

0xb422,	// (0x000588de) level_7_zoom

0xb42b,	// (0x000588e7) level_8_zoom

0xb434,	// (0x000588f0) level_9_zoom

0xb445,	// (0x00058901) popup_phob_thumbnail_window_g1

0xb44d,	// (0x00058909) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0005c8cc) popup_phob_thumbnail_window_g

0xc73c,	// (0x00059bf8) level_1_location

0xc744,	// (0x00059c00) level_2_location

0xc74c,	// (0x00059c08) level_3_location

0xc754,	// (0x00059c10) level_4_location

0xb396,	// (0x00058852) level_5_location

0x3279,	// (0x00050735) mce_icon_pane_g1

0x3283,	// (0x0005073f) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0005c8d1) mce_icon_pane_g

0x328d,	// (0x00050749) main_mup_pane_g1_ParamLimits

0x328d,	// (0x00050749) main_mup_pane_g1

0x32a3,	// (0x0005075f) main_mup_pane_g2_ParamLimits

0x32a3,	// (0x0005075f) main_mup_pane_g2

0x32bb,	// (0x00050777) main_mup_pane_g3_ParamLimits

0x32bb,	// (0x00050777) main_mup_pane_g3

0x32d3,	// (0x0005078f) main_mup_pane_g4_ParamLimits

0x32d3,	// (0x0005078f) main_mup_pane_g4

0x32eb,	// (0x000507a7) main_mup_pane_g5_ParamLimits

0x32eb,	// (0x000507a7) main_mup_pane_g5

0x3307,	// (0x000507c3) main_mup_pane_g6_ParamLimits

0x3307,	// (0x000507c3) main_mup_pane_g6

0x331f,	// (0x000507db) main_mup_pane_g7_ParamLimits

0x331f,	// (0x000507db) main_mup_pane_g7

0x3337,	// (0x000507f3) main_mup_pane_g8_ParamLimits

0x3337,	// (0x000507f3) main_mup_pane_g8

0x334f,	// (0x0005080b) main_mup_pane_g9_ParamLimits

0x334f,	// (0x0005080b) main_mup_pane_g9

0x3369,	// (0x00050825) main_mup_pane_g10_ParamLimits

0x3369,	// (0x00050825) main_mup_pane_g10

0x3383,	// (0x0005083f) main_mup_pane_g11_ParamLimits

0x3383,	// (0x0005083f) main_mup_pane_g11

0x3397,	// (0x00050853) main_mup_pane_g12_ParamLimits

0x3397,	// (0x00050853) main_mup_pane_g12

0x33ad,	// (0x00050869) main_mup_pane_g13_ParamLimits

0x33ad,	// (0x00050869) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0005c8d6) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0005c8d6) main_mup_pane_g

0x33c1,	// (0x0005087d) main_mup_pane_t1_ParamLimits

0x33c1,	// (0x0005087d) main_mup_pane_t1

0x33db,	// (0x00050897) main_mup_pane_t2_ParamLimits

0x33db,	// (0x00050897) main_mup_pane_t2

0x33f3,	// (0x000508af) main_mup_pane_t3_ParamLimits

0x33f3,	// (0x000508af) main_mup_pane_t3

0x340b,	// (0x000508c7) main_mup_pane_t4_ParamLimits

0x340b,	// (0x000508c7) main_mup_pane_t4

0x3429,	// (0x000508e5) main_mup_pane_t5_ParamLimits

0x3429,	// (0x000508e5) main_mup_pane_t5

0x343e,	// (0x000508fa) main_mup_pane_t6_ParamLimits

0x343e,	// (0x000508fa) main_mup_pane_t6

0x0005,

0xf435,	// (0x0005c8f1) main_mup_pane_t_ParamLimits

0xf435,	// (0x0005c8f1) main_mup_pane_t

0x3450,	// (0x0005090c) mup_progress_pane_ParamLimits

0x3450,	// (0x0005090c) mup_progress_pane

0x345c,	// (0x00050918) mup_visualizer_pane_ParamLimits

0x345c,	// (0x00050918) mup_visualizer_pane

0x3490,	// (0x0005094c) mup_volume_pane_ParamLimits

0x3490,	// (0x0005094c) mup_volume_pane

0xb2e4,	// (0x000587a0) mup_visualizer_pane_g1_ParamLimits

0xb2e4,	// (0x000587a0) mup_visualizer_pane_g1

0xb2e4,	// (0x000587a0) mup_visualizer_pane_g2_ParamLimits

0xb2e4,	// (0x000587a0) mup_visualizer_pane_g2

0xb194,	// (0x00058650) mup_visualizer_pane_g3_ParamLimits

0xb194,	// (0x00058650) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0005c8fe) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0005c8fe) mup_visualizer_pane_g

0xa777,	// (0x00057c33) mup_volume_pane_g1

0xb45d,	// (0x00058919) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0005c905) mup_volume_pane_g

0xa777,	// (0x00057c33) mup_progress_pane_g1

0xb466,	// (0x00058922) mup_progress_pane_g2

0xb46f,	// (0x0005892b) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0005c90a) mup_progress_pane_g

0x9aa3,	// (0x00056f5f) bg_popup_window_pane_cp05

0xb478,	// (0x00058934) heading_pane_cp02_ParamLimits

0xb478,	// (0x00058934) heading_pane_cp02

0xb492,	// (0x0005894e) list_popup_blid_pane

0xb49a,	// (0x00058956) list_blid_sat_info_pane_ParamLimits

0xb49a,	// (0x00058956) list_blid_sat_info_pane

0xb4ad,	// (0x00058969) list_blid_sat_info_pane_g1

0xb4b5,	// (0x00058971) list_blid_sat_info_pane_t1

0x35a6,	// (0x00050a62) mup_equalizer_pane_ParamLimits

0x35a6,	// (0x00050a62) mup_equalizer_pane

0x35bf,	// (0x00050a7b) mup_equalizer_pane_cp1_ParamLimits

0x35bf,	// (0x00050a7b) mup_equalizer_pane_cp1

0x35dc,	// (0x00050a98) mup_equalizer_pane_cp2_ParamLimits

0x35dc,	// (0x00050a98) mup_equalizer_pane_cp2

0x35f9,	// (0x00050ab5) mup_equalizer_pane_cp3_ParamLimits

0x35f9,	// (0x00050ab5) mup_equalizer_pane_cp3

0x361a,	// (0x00050ad6) mup_equalizer_pane_cp4_ParamLimits

0x361a,	// (0x00050ad6) mup_equalizer_pane_cp4

0x363b,	// (0x00050af7) mup_equalizer_pane_cp5

0x364f,	// (0x00050b0b) mup_equalizer_pane_cp6

0x3663,	// (0x00050b1f) mup_equalizer_pane_cp7

0xc65a,	// (0x00059b16) bg_popup_call_poc_act_pane_g9

0xc662,	// (0x00059b1e) bg_popup_call_poc_act_pane_g10

0xc66a,	// (0x00059b26) bg_popup_call_poc_act_pane_g11

0x000a,

0xa63e,	// (0x00057afa) mup_scale_pane

0xa777,	// (0x00057c33) mup_scale_pane_g1

0xb4c3,	// (0x0005897f) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0005c926) mup_scale_pane_g

0xb4e7,	// (0x000589a3) msg_data_pane

0xb4ef,	// (0x000589ab) scroll_pane_cp017

0x3689,	// (0x00050b45) bg_list_pane_cp04_ParamLimits

0x3689,	// (0x00050b45) bg_list_pane_cp04

0xb4f7,	// (0x000589b3) msg_data_pane_g1

0x36a9,	// (0x00050b65) msg_data_pane_g2

0x36b1,	// (0x00050b6d) msg_data_pane_g3

0x36b9,	// (0x00050b75) msg_data_pane_g4

0x36c1,	// (0x00050b7d) msg_data_pane_g5

0x36c9,	// (0x00050b85) msg_data_pane_g6

0x36d1,	// (0x00050b8d) msg_data_pane_g7

0x0006,

0xf479,	// (0x0005c935) msg_data_pane_g

0x013f,	// (0x0004d5fb) msg_text_pane_ParamLimits

0x013f,	// (0x0004d5fb) msg_text_pane

0x36d9,	// (0x00050b95) qrid_highlight_pane_cp011_ParamLimits

0x36d9,	// (0x00050b95) qrid_highlight_pane_cp011

0x9aa3,	// (0x00056f5f) msg_body_pane

0x9aa3,	// (0x00056f5f) msg_header_pane

0xb508,	// (0x000589c4) input_focus_pane_cp07

0x36ef,	// (0x00050bab) msg_header_pane_t1_ParamLimits

0x36ef,	// (0x00050bab) msg_header_pane_t1

0x3701,	// (0x00050bbd) msg_header_pane_t2_ParamLimits

0x3701,	// (0x00050bbd) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0005c949) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0005c949) msg_header_pane_t

0xb51d,	// (0x000589d9) msg_body_pane_g1

0x3713,	// (0x00050bcf) msg_body_pane_t1_ParamLimits

0x3713,	// (0x00050bcf) msg_body_pane_t1

0x3744,	// (0x00050c00) msg_body_pane_t2_ParamLimits

0x3744,	// (0x00050c00) msg_body_pane_t2

0x3756,	// (0x00050c12) msg_body_pane_t3_ParamLimits

0x3756,	// (0x00050c12) msg_body_pane_t3

0x0002,

0xf492,	// (0x0005c94e) msg_body_pane_t_ParamLimits

0xf492,	// (0x0005c94e) msg_body_pane_t

0x37a2,	// (0x00050c5e) main_viewer_pane_g1_ParamLimits

0x37a2,	// (0x00050c5e) main_viewer_pane_g1

0x37b0,	// (0x00050c6c) main_viewer_pane_g2_ParamLimits

0x37b0,	// (0x00050c6c) main_viewer_pane_g2

0x37be,	// (0x00050c7a) main_viewer_pane_g3_ParamLimits

0x37be,	// (0x00050c7a) main_viewer_pane_g3

0x37cd,	// (0x00050c89) main_viewer_pane_g4_ParamLimits

0x37cd,	// (0x00050c89) main_viewer_pane_g4

0x9cf6,	// (0x000571b2) main_viewer_pane_g5_ParamLimits

0x9cf6,	// (0x000571b2) main_viewer_pane_g5

0x9cf6,	// (0x000571b2) main_viewer_pane_g7_ParamLimits

0x9cf6,	// (0x000571b2) main_viewer_pane_g7

0x9d08,	// (0x000571c4) main_viewer_pane_g8_ParamLimits

0x9d08,	// (0x000571c4) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0005c95e) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0005c95e) main_viewer_pane_g

0xb525,	// (0x000589e1) viewer_content_pane_ParamLimits

0xb525,	// (0x000589e1) viewer_content_pane

0x3809,	// (0x00050cc5) main_postcard_pane_g1_ParamLimits

0x3809,	// (0x00050cc5) main_postcard_pane_g1

0x381f,	// (0x00050cdb) main_postcard_pane_g2_ParamLimits

0x381f,	// (0x00050cdb) main_postcard_pane_g2

0x3835,	// (0x00050cf1) main_postcard_pane_g3_ParamLimits

0x3835,	// (0x00050cf1) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0005c96f) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0005c96f) main_postcard_pane_g

0x384c,	// (0x00050d08) main_postcard_pane_g4

0xc83c,	// (0x00059cf8) smil_status_volume_pane_g2

0x388f,	// (0x00050d4b) postcard_pane_ParamLimits

0x388f,	// (0x00050d4b) postcard_pane

0xb533,	// (0x000589ef) postcard_pane_g1_ParamLimits

0xb533,	// (0x000589ef) postcard_pane_g1

0x38d1,	// (0x00050d8d) postcard_pane_g2_ParamLimits

0x38d1,	// (0x00050d8d) postcard_pane_g2

0x38dd,	// (0x00050d99) postcard_pane_g3_ParamLimits

0x38dd,	// (0x00050d99) postcard_pane_g3

0xb541,	// (0x000589fd) postcard_pane_g4_ParamLimits

0xb541,	// (0x000589fd) postcard_pane_g4

0x38e9,	// (0x00050da5) postcard_pane_g5_ParamLimits

0x38e9,	// (0x00050da5) postcard_pane_g5

0x38fe,	// (0x00050dba) postcard_pane_g6_ParamLimits

0x38fe,	// (0x00050dba) postcard_pane_g6

0xb533,	// (0x000589ef) postcard_pane_g7_ParamLimits

0xb533,	// (0x000589ef) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0005c97c) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0005c97c) postcard_pane_g

0x3912,	// (0x00050dce) main_mp2_pane_g1_ParamLimits

0x3912,	// (0x00050dce) main_mp2_pane_g1

0x391e,	// (0x00050dda) main_mp2_pane_g2_ParamLimits

0x391e,	// (0x00050dda) main_mp2_pane_g2

0x392a,	// (0x00050de6) main_mp2_pane_g3_ParamLimits

0x392a,	// (0x00050de6) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0005c98b) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0005c98b) main_mp2_pane_g

0x3936,	// (0x00050df2) main_mp2_pane_t1_ParamLimits

0x3936,	// (0x00050df2) main_mp2_pane_t1

0x394b,	// (0x00050e07) main_mp2_pane_t2_ParamLimits

0x394b,	// (0x00050e07) main_mp2_pane_t2

0x395d,	// (0x00050e19) main_mp2_pane_t3_ParamLimits

0x395d,	// (0x00050e19) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0005c992) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0005c992) main_mp2_pane_t

0xb54f,	// (0x00058a0b) pec_content_pane_ParamLimits

0xb54f,	// (0x00058a0b) pec_content_pane

0xaa92,	// (0x00057f4e) scroll_pane_cp015

0xb561,	// (0x00058a1d) pec_attribute_pane_ParamLimits

0xb561,	// (0x00058a1d) pec_attribute_pane

0x396f,	// (0x00050e2b) pec_content_pane_g1_ParamLimits

0x396f,	// (0x00050e2b) pec_content_pane_g1

0xb571,	// (0x00058a2d) pec_content_pane_t1_ParamLimits

0xb571,	// (0x00058a2d) pec_content_pane_t1

0xb583,	// (0x00058a3f) pec_content_pane_t2_ParamLimits

0xb583,	// (0x00058a3f) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0005c999) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0005c999) pec_content_pane_t

0x397b,	// (0x00050e37) list_single_graphic_pane_cp01_ParamLimits

0x397b,	// (0x00050e37) list_single_graphic_pane_cp01

0xa63e,	// (0x00057afa) bg_popup_sub_pane_cp04

0xb595,	// (0x00058a51) popup_mup_playback_window_g1

0xb5a1,	// (0x00058a5d) popup_mup_playback_window_t1

0xb5b6,	// (0x00058a72) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0005c99e) popup_mup_playback_window_t

0xb5ed,	// (0x00058aa9) main_image_pane_g1_ParamLimits

0xb5ed,	// (0x00058aa9) main_image_pane_g1

0xb630,	// (0x00058aec) scroll_pane_cp018_ParamLimits

0xb630,	// (0x00058aec) scroll_pane_cp018

0xb648,	// (0x00058b04) scroll_pane_cp016_ParamLimits

0xb648,	// (0x00058b04) scroll_pane_cp016

0x3a4a,	// (0x00050f06) smil2_image_pane_ParamLimits

0x3a4a,	// (0x00050f06) smil2_image_pane

0x3a7e,	// (0x00050f3a) smil2_root_pane_ParamLimits

0x3a7e,	// (0x00050f3a) smil2_root_pane

0x3ab6,	// (0x00050f72) smil2_text_pane_ParamLimits

0x3ab6,	// (0x00050f72) smil2_text_pane

0x9aa3,	// (0x00056f5f) bg_list_pane_cp06

0xb684,	// (0x00058b40) grid_radio_pane

0x9aa3,	// (0x00056f5f) bg_popup_window_pane_cp06

0xb68c,	// (0x00058b48) main_fmradio_pane_t1

0xafd7,	// (0x00058493) heading_pane_cp04

0xb69a,	// (0x00058b56) main_fmradio_pane_t2

0xc672,	// (0x00059b2e) popup_cale_lunar_info_window_g1

0xb6a8,	// (0x00058b64) main_fmradio_pane_t3

0xc67a,	// (0x00059b36) popup_cale_lunar_info_window_g2

0xb6b6,	// (0x00058b72) main_fmradio_pane_t4

0x0001,

0xb6c4,	// (0x00058b80) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0005ca79) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0005c9b3) main_fmradio_pane_t

0xb6d2,	// (0x00058b8e) wait_bar_pane_cp03

0xb6da,	// (0x00058b96) cell_fmradio_pane_ParamLimits

0xb6da,	// (0x00058b96) cell_fmradio_pane

0xb533,	// (0x000589ef) cell_fmradio_pane_g1_ParamLimits

0xb533,	// (0x000589ef) cell_fmradio_pane_g1

0x9aa3,	// (0x00056f5f) grid_highlight_pane_cp011

0xb6ed,	// (0x00058ba9) poc_content_pane_ParamLimits

0xb6ed,	// (0x00058ba9) poc_content_pane

0xb6ff,	// (0x00058bbb) scroll_pane_cp019

0x3b36,	// (0x00050ff2) popup_call_poc_act_window_ParamLimits

0x3b36,	// (0x00050ff2) popup_call_poc_act_window

0x3b5a,	// (0x00051016) popup_call_poc_inact_window_ParamLimits

0x3b5a,	// (0x00051016) popup_call_poc_inact_window

0xf594,	// (0x0005ca50) bg_popup_call_poc_act_pane_g

0xc5ea,	// (0x00059aa6) bg_popup_call_poc_inact_pane_g1

0xc5f2,	// (0x00059aae) bg_popup_call_poc_inact_pane_g2

0xb707,	// (0x00058bc3) popup_call_poc_act_window_g2

0xc5fa,	// (0x00059ab6) bg_popup_call_poc_inact_pane_g3

0xc602,	// (0x00059abe) bg_popup_call_poc_inact_pane_g4

0xc60a,	// (0x00059ac6) bg_popup_call_poc_inact_pane_g5

0xb70f,	// (0x00058bcb) popup_call_poc_act_window_t1_ParamLimits

0xb70f,	// (0x00058bcb) popup_call_poc_act_window_t1

0xb737,	// (0x00058bf3) popup_call_poc_act_window_t2_ParamLimits

0xb737,	// (0x00058bf3) popup_call_poc_act_window_t2

0xb75f,	// (0x00058c1b) popup_call_poc_act_window_t3_ParamLimits

0xb75f,	// (0x00058c1b) popup_call_poc_act_window_t3

0xb787,	// (0x00058c43) popup_call_poc_act_window_t4_ParamLimits

0xb787,	// (0x00058c43) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0005c9be) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0005c9be) popup_call_poc_act_window_t

0xc612,	// (0x00059ace) bg_popup_call_poc_inact_pane_g6

0xc61a,	// (0x00059ad6) bg_popup_call_poc_inact_pane_g7

0xc622,	// (0x00059ade) bg_popup_call_poc_inact_pane_g8

0xb799,	// (0x00058c55) popup_call_poc_inact_window_g2

0xc62a,	// (0x00059ae6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0005ca3d) bg_popup_call_poc_inact_pane_g

0xb7a1,	// (0x00058c5d) popup_call_poc_inact_window_t1_ParamLimits

0xb7a1,	// (0x00058c5d) popup_call_poc_inact_window_t1

0xb7b6,	// (0x00058c72) popup_call_poc_inact_window_t2_ParamLimits

0xb7b6,	// (0x00058c72) popup_call_poc_inact_window_t2

0xb7cb,	// (0x00058c87) popup_call_poc_inact_window_t3_ParamLimits

0xb7cb,	// (0x00058c87) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0005c9c7) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0005c9c7) popup_call_poc_inact_window_t

0xc7af,	// (0x00059c6b) context_pane_ParamLimits

0x437b,	// (0x00051837) signal_pane_ParamLimits

0xb396,	// (0x00058852) main_call2_pane

0x9d4d,	// (0x00057209) popup_phob_thumbnail2_window_ParamLimits

0x9d4d,	// (0x00057209) popup_phob_thumbnail2_window

0x9cde,	// (0x0005719a) aid_hotspot_pointer_arrow_pane

0x9ce6,	// (0x000571a2) aid_hotspot_pointer_hand_pane

0x3ea5,	// (0x00051361) phob_pre_status_pane_g5

0x1ab7,	// (0x0004ef73) cams_zoom_pane_ParamLimits

0x1ac6,	// (0x0004ef82) image_vga_pane_ParamLimits

0x1ae0,	// (0x0004ef9c) main_camera_pane_g1_ParamLimits

0x1af2,	// (0x0004efae) main_camera_pane_g2_ParamLimits

0x1b02,	// (0x0004efbe) main_camera_pane_g3_ParamLimits

0x1b14,	// (0x0004efd0) main_camera_pane_g4_ParamLimits

0x1b26,	// (0x0004efe2) main_camera_pane_g5_ParamLimits

0x1b38,	// (0x0004eff4) main_camera_pane_g6_ParamLimits

0x1b4a,	// (0x0004f006) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0005c6c6) main_camera_pane_g_ParamLimits

0x1b5c,	// (0x0004f018) main_camera_pane_t1_ParamLimits

0x1b72,	// (0x0004f02e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0005c6d7) main_camera_pane_t_ParamLimits

0xa63e,	// (0x00057afa) bg_popup_preview_window_pane_cp01_ParamLimits

0xa63e,	// (0x00057afa) bg_popup_preview_window_pane_cp01

0xb7e0,	// (0x00058c9c) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e0,	// (0x00058c9c) popup_phob_thumbnail2_window_g1

0x9aa3,	// (0x00056f5f) call2_cli_visual_pane

0x3b8e,	// (0x0005104a) popup_call2_audio_conf_window_ParamLimits

0x3b8e,	// (0x0005104a) popup_call2_audio_conf_window

0x3bae,	// (0x0005106a) popup_call2_audio_first_window_ParamLimits

0x3bae,	// (0x0005106a) popup_call2_audio_first_window

0x3c44,	// (0x00051100) popup_call2_audio_in_window_ParamLimits

0x3c44,	// (0x00051100) popup_call2_audio_in_window

0x3c8c,	// (0x00051148) popup_call2_audio_out_window_ParamLimits

0x3c8c,	// (0x00051148) popup_call2_audio_out_window

0x3cf6,	// (0x000511b2) popup_call2_audio_second_window_ParamLimits

0x3cf6,	// (0x000511b2) popup_call2_audio_second_window

0x3d5c,	// (0x00051218) popup_call2_audio_wait_window_ParamLimits

0x3d5c,	// (0x00051218) popup_call2_audio_wait_window

0x9aa3,	// (0x00056f5f) bg_popup_call2_act_pane_cp03

0xa620,	// (0x00057adc) list_conf_pane_cp

0xb7ec,	// (0x00058ca8) popup_call2_audio_conf_window_t1

0xb7fa,	// (0x00058cb6) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7fa,	// (0x00058cb6) list_single_graphic_popup_conf2_pane

0xb06b,	// (0x00058527) list_highlight_pane_cp04

0xb80d,	// (0x00058cc9) list_single_graphic_popup_conf2_pane_g1

0xb07c,	// (0x00058538) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0005c9ce) list_single_graphic_popup_conf2_pane_g

0xb817,	// (0x00058cd3) list_single_graphic_popup_conf2_pane_t1

0xb825,	// (0x00058ce1) bg_popup_call2_act_pane_cp01_ParamLimits

0xb825,	// (0x00058ce1) bg_popup_call2_act_pane_cp01

0xb8af,	// (0x00058d6b) call_type_pane_cp05_ParamLimits

0xb8af,	// (0x00058d6b) call_type_pane_cp05

0xb903,	// (0x00058dbf) popup_call2_audio_second_window_g1_ParamLimits

0xb903,	// (0x00058dbf) popup_call2_audio_second_window_g1

0xb957,	// (0x00058e13) popup_call2_audio_second_window_g2_ParamLimits

0xb957,	// (0x00058e13) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0005c9d3) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0005c9d3) popup_call2_audio_second_window_g

0xb9bc,	// (0x00058e78) popup_call2_audio_second_window_t1_ParamLimits

0xb9bc,	// (0x00058e78) popup_call2_audio_second_window_t1

0xba77,	// (0x00058f33) popup_call2_audio_second_window_t2_ParamLimits

0xba77,	// (0x00058f33) popup_call2_audio_second_window_t2

0xbaca,	// (0x00058f86) popup_call2_audio_second_window_t3_ParamLimits

0xbaca,	// (0x00058f86) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0005c9da) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0005c9da) popup_call2_audio_second_window_t

0x9aa3,	// (0x00056f5f) bg_popup_call2_in_pane_cp02

0x9aad,	// (0x00056f69) call_type_pane_cp04

0x9ab5,	// (0x00056f71) popup_call2_audio_wait_window_g1

0x9abd,	// (0x00056f79) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0005c5b1) popup_call2_audio_wait_window_g

0x9ac5,	// (0x00056f81) popup_call2_audio_wait_window_t3

0xbbbd,	// (0x00059079) bg_popup_call2_act_pane_ParamLimits

0xbbbd,	// (0x00059079) bg_popup_call2_act_pane

0xbc7d,	// (0x00059139) call_type_pane_cp03_ParamLimits

0xbc7d,	// (0x00059139) call_type_pane_cp03

0xbce1,	// (0x0005919d) popup_call2_audio_first_window_g1_ParamLimits

0xbce1,	// (0x0005919d) popup_call2_audio_first_window_g1

0xbd51,	// (0x0005920d) popup_call2_audio_first_window_g2_ParamLimits

0xbd51,	// (0x0005920d) popup_call2_audio_first_window_g2

0xb2e4,	// (0x000587a0) popup_call2_audio_first_window_g3_ParamLimits

0xb2e4,	// (0x000587a0) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0005c9e3) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0005c9e3) popup_call2_audio_first_window_g

0xbe2f,	// (0x000592eb) popup_call2_audio_first_window_t1_ParamLimits

0xbe2f,	// (0x000592eb) popup_call2_audio_first_window_t1

0xbf32,	// (0x000593ee) popup_call2_audio_first_window_t4_ParamLimits

0xbf32,	// (0x000593ee) popup_call2_audio_first_window_t4

0xc015,	// (0x000594d1) popup_call2_audio_first_window_t5_ParamLimits

0xc015,	// (0x000594d1) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0005c9ee) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0005c9ee) popup_call2_audio_first_window_t

0xa636,	// (0x00057af2) bg_popup_call2_act_pane_g1

0xc682,	// (0x00059b3e) popup_cale_lunar_info_window_t1

0xc690,	// (0x00059b4c) popup_cale_lunar_info_window_t2

0xc69e,	// (0x00059b5a) popup_cale_lunar_info_window_t3

0x9aa3,	// (0x00056f5f) bg_popup_call2_bubble_pane

0xc116,	// (0x000595d2) bg_popup_call2_in_pane_cp01_ParamLimits

0xc116,	// (0x000595d2) bg_popup_call2_in_pane_cp01

0x977f,	// (0x00056c3b) call_type_pane_cp02

0xc15e,	// (0x0005961a) popup_call2_audio_out_window_g1_ParamLimits

0xc15e,	// (0x0005961a) popup_call2_audio_out_window_g1

0xc18a,	// (0x00059646) popup_call2_audio_out_window_g2_ParamLimits

0xc18a,	// (0x00059646) popup_call2_audio_out_window_g2

0xc1b2,	// (0x0005966e) popup_call2_audio_out_window_g3_ParamLimits

0xc1b2,	// (0x0005966e) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0005c9f7) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0005c9f7) popup_call2_audio_out_window_g

0xc1ed,	// (0x000596a9) popup_call2_audio_out_window_t1_ParamLimits

0xc1ed,	// (0x000596a9) popup_call2_audio_out_window_t1

0xc24c,	// (0x00059708) popup_call2_audio_out_window_t2_ParamLimits

0xc24c,	// (0x00059708) popup_call2_audio_out_window_t2

0xc2a0,	// (0x0005975c) popup_call2_audio_out_window_t3_ParamLimits

0xc2a0,	// (0x0005975c) popup_call2_audio_out_window_t3

0xc2b6,	// (0x00059772) popup_call2_audio_out_window_t4_ParamLimits

0xc2b6,	// (0x00059772) popup_call2_audio_out_window_t4

0xc2cc,	// (0x00059788) popup_call2_audio_out_window_t5_ParamLimits

0xc2cc,	// (0x00059788) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0005ca00) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0005ca00) popup_call2_audio_out_window_t

0xc330,	// (0x000597ec) bg_popup_call2_in_pane_ParamLimits

0xc330,	// (0x000597ec) bg_popup_call2_in_pane

0xc38c,	// (0x00059848) popup_call2_audio_in_window_g1_ParamLimits

0xc38c,	// (0x00059848) popup_call2_audio_in_window_g1

0xc3c4,	// (0x00059880) popup_call2_audio_in_window_g2_ParamLimits

0xc3c4,	// (0x00059880) popup_call2_audio_in_window_g2

0xc3fc,	// (0x000598b8) popup_call2_audio_in_window_g3_ParamLimits

0xc3fc,	// (0x000598b8) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0005ca0d) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0005ca0d) popup_call2_audio_in_window_g

0xc454,	// (0x00059910) popup_call2_audio_in_window_t1_ParamLimits

0xc454,	// (0x00059910) popup_call2_audio_in_window_t1

0xc4d4,	// (0x00059990) popup_call2_audio_in_window_t2_ParamLimits

0xc4d4,	// (0x00059990) popup_call2_audio_in_window_t2

0xc554,	// (0x00059a10) popup_call2_audio_in_window_t3_ParamLimits

0xc554,	// (0x00059a10) popup_call2_audio_in_window_t3

0xc56e,	// (0x00059a2a) popup_call2_audio_in_window_t4_ParamLimits

0xc56e,	// (0x00059a2a) popup_call2_audio_in_window_t4

0xc580,	// (0x00059a3c) popup_call2_audio_in_window_t5_ParamLimits

0xc580,	// (0x00059a3c) popup_call2_audio_in_window_t5

0xc595,	// (0x00059a51) popup_call2_audio_in_window_t6_ParamLimits

0xc595,	// (0x00059a51) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0005ca16) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0005ca16) popup_call2_audio_in_window_t

0xa636,	// (0x00057af2) bg_popup_call2_in_pane_g1

0xc6ac,	// (0x00059b68) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0005ca7e) popup_cale_lunar_info_window_t

0xa63e,	// (0x00057afa) bg_popup_call2_rect_pane_ParamLimits

0xa63e,	// (0x00057afa) bg_popup_call2_rect_pane

0x9aa3,	// (0x00056f5f) call2_cli_visual_graphic_pane

0x9aa3,	// (0x00056f5f) call2_cli_visual_text_pane

0x9d74,	// (0x00057230) smil_status_volume_pane_g3

0x0002,

0xa777,	// (0x00057c33) call2_cli_visual_graphic_pane_g1

0xa777,	// (0x00057c33) call2_cli_visual_graphic_pane_g2

0xa777,	// (0x00057c33) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0005ca23) call2_cli_visual_graphic_pane_g

0xc5aa,	// (0x00059a66) bg_popup_call2_rect_pane_g1

0xa815,	// (0x00057cd1) bg_popup_call2_rect_pane_g2

0xc5b2,	// (0x00059a6e) bg_popup_call2_rect_pane_g3

0xc5ba,	// (0x00059a76) bg_popup_call2_rect_pane_g4

0xc5c2,	// (0x00059a7e) bg_popup_call2_rect_pane_g5

0xc5ca,	// (0x00059a86) bg_popup_call2_rect_pane_g6

0xc5d2,	// (0x00059a8e) bg_popup_call2_rect_pane_g7

0xc5da,	// (0x00059a96) bg_popup_call2_rect_pane_g8

0xc5e2,	// (0x00059a9e) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0005ca2a) bg_popup_call2_rect_pane_g

0xc5ea,	// (0x00059aa6) bg_popup_call2_bubble_pane_g1

0xc5f2,	// (0x00059aae) bg_popup_call2_bubble_pane_g2

0xc5fa,	// (0x00059ab6) bg_popup_call2_bubble_pane_g3

0xc602,	// (0x00059abe) bg_popup_call2_bubble_pane_g4

0xc60a,	// (0x00059ac6) bg_popup_call2_bubble_pane_g5

0xc612,	// (0x00059ace) bg_popup_call2_bubble_pane_g6

0xc61a,	// (0x00059ad6) bg_popup_call2_bubble_pane_g7

0xc622,	// (0x00059ade) bg_popup_call2_bubble_pane_g8

0xc62a,	// (0x00059ae6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0005ca3d) bg_popup_call2_bubble_pane_g

0x13e3,	// (0x0004e89f) aid_cale_week_size_cell_pane

0x1b8a,	// (0x0004f046) aid_cams_cif_uncrop_pane_ParamLimits

0x1b8a,	// (0x0004f046) aid_cams_cif_uncrop_pane

0x1d3f,	// (0x0004f1fb) aid_cams_size_cell_ParamLimits

0x1d3f,	// (0x0004f1fb) aid_cams_size_cell

0x1d53,	// (0x0004f20f) grid_cams_pane_ParamLimits

0x1d6d,	// (0x0004f229) linegrid_cams_pane_ParamLimits

0x1eed,	// (0x0004f3a9) call_video_pane_t1

0x1f0b,	// (0x0004f3c7) call_video_pane_t2

0x0001,

0xf26e,	// (0x0005c72a) call_video_pane_t

0x233a,	// (0x0004f7f6) aid_cale_month_size_cell_pane_ParamLimits

0x233a,	// (0x0004f7f6) aid_cale_month_size_cell_pane

0xf60b,	// (0x0005cac7) smil_status_volume_pane_g

0x9d81,	// (0x0005723d) volume_smil_pane_ParamLimits

0x963a,	// (0x00056af6) aid_popup2_width_pane

0x133a,	// (0x0004e7f6) cell_qdial_pane_g4_ParamLimits

0x133a,	// (0x0004e7f6) cell_qdial_pane_g4

0x31b2,	// (0x0005066e) aid_blid_cardinal_pane_ParamLimits

0x31be,	// (0x0005067a) aid_blid_destination_pane_ParamLimits

0x31be,	// (0x0005067a) aid_blid_destination_pane

0xa63e,	// (0x00057afa) bg_popup_call_poc_act_pane_ParamLimits

0xa63e,	// (0x00057afa) bg_popup_call_poc_act_pane

0xa63e,	// (0x00057afa) bg_popup_call_poc_inact_pane_ParamLimits

0xa63e,	// (0x00057afa) bg_popup_call_poc_inact_pane

0xc632,	// (0x00059aee) bg_popup_call_poc_act_pane_g1

0xc63a,	// (0x00059af6) bg_popup_call_poc_act_pane_g2

0xc642,	// (0x00059afe) bg_popup_call_poc_act_pane_g3

0xc602,	// (0x00059abe) bg_popup_call_poc_act_pane_g4

0xc60a,	// (0x00059ac6) bg_popup_call_poc_act_pane_g5

0xc64a,	// (0x00059b06) bg_popup_call_poc_act_pane_g6

0xc61a,	// (0x00059ad6) bg_popup_call_poc_act_pane_g7

0xc652,	// (0x00059b0e) bg_popup_call_poc_act_pane_g8

0x9aa3,	// (0x00056f5f) main_usb_pane

0x9d28,	// (0x000571e4) popup_cale_lunar_info_window

0x21d5,	// (0x0004f691) im_reading_pane_t1_ParamLimits

0xa9ea,	// (0x00057ea6) list_im_pane_ParamLimits

0xa9fb,	// (0x00057eb7) scroll_pane_cp07_ParamLimits

0x9aa3,	// (0x00056f5f) grid_highlight_pane_cp012

0xa63e,	// (0x00057afa) mup_scale_pane_ParamLimits

0xb533,	// (0x000589ef) main_usb_pane_g1_ParamLimits

0xb533,	// (0x000589ef) main_usb_pane_g1

0x3dba,	// (0x00051276) main_usb_pane_g2_ParamLimits

0x3dba,	// (0x00051276) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0005ca67) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0005ca67) main_usb_pane_g

0x3dd0,	// (0x0005128c) main_usb_pane_t1_ParamLimits

0x3dd0,	// (0x0005128c) main_usb_pane_t1

0x3de2,	// (0x0005129e) main_usb_pane_t2_ParamLimits

0x3de2,	// (0x0005129e) main_usb_pane_t2

0x3df4,	// (0x000512b0) main_usb_pane_t3_ParamLimits

0x3df4,	// (0x000512b0) main_usb_pane_t3

0x3e06,	// (0x000512c2) main_usb_pane_t4_ParamLimits

0x3e06,	// (0x000512c2) main_usb_pane_t4

0x3e18,	// (0x000512d4) main_usb_pane_t5_ParamLimits

0x3e18,	// (0x000512d4) main_usb_pane_t5

0x3e2a,	// (0x000512e6) main_usb_pane_t6_ParamLimits

0x3e2a,	// (0x000512e6) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0005ca6c) main_usb_pane_t_ParamLimits

0x315f,	// (0x0005061b) aid_text_placing

0x3168,	// (0x00050624) main_location2_pane_t1_ParamLimits

0x317a,	// (0x00050636) main_location2_pane_t2_ParamLimits

0x318c,	// (0x00050648) main_location2_pane_t3_ParamLimits

0x31a0,	// (0x0005065c) main_location2_pane_t4_ParamLimits

0x31a0,	// (0x0005065c) main_location2_pane_t4

0xf3cf,	// (0x0005c88b) main_location2_pane_t_ParamLimits

0xa67a,	// (0x00057b36) find_pinb_pane_g2_ParamLimits

0xa67a,	// (0x00057b36) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0005c5d7) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0005c5d7) find_pinb_pane_g

0xa686,	// (0x00057b42) find_pinb_pane_t1_ParamLimits

0xa698,	// (0x00057b54) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0005c5dc) find_pinb_pane_t_ParamLimits

0x9aa3,	// (0x00056f5f) main_call3_pane

0x281d,	// (0x0004fcd9) cale_month_day_heading_pane_t1_ParamLimits

0x28a3,	// (0x0004fd5f) cale_month_day_heading_pane_t2_ParamLimits

0x2934,	// (0x0004fdf0) cale_month_day_heading_pane_t3_ParamLimits

0x29c5,	// (0x0004fe81) cale_month_day_heading_pane_t4_ParamLimits

0x2a5e,	// (0x0004ff1a) cale_month_day_heading_pane_t5_ParamLimits

0x2aff,	// (0x0004ffbb) cale_month_day_heading_pane_t6_ParamLimits

0x2ba0,	// (0x0005005c) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0005c762) cale_month_day_heading_pane_t_ParamLimits

0xac45,	// (0x00058101) smil_status_volume_pane

0x38ad,	// (0x00050d69) postcard_address_pane_ParamLimits

0x38ad,	// (0x00050d69) postcard_address_pane

0x38bf,	// (0x00050d7b) postcard_message_pane_ParamLimits

0x38bf,	// (0x00050d7b) postcard_message_pane

0x3d96,	// (0x00051252) call2_cli_visual_pane_t1_ParamLimits

0x3d96,	// (0x00051252) call2_cli_visual_pane_t1

0x45aa,	// (0x00051a66) postcard_message_pane_t1_ParamLimits

0x45aa,	// (0x00051a66) postcard_message_pane_t1

0x4593,	// (0x00051a4f) postcard_address_pane_t1_ParamLimits

0x4593,	// (0x00051a4f) postcard_address_pane_t1

0x457f,	// (0x00051a3b) popup_call3_audio_in_window_ParamLimits

0x457f,	// (0x00051a3b) popup_call3_audio_in_window

0x440c,	// (0x000518c8) bg_popup_call3_in_pane_ParamLimits

0x440c,	// (0x000518c8) bg_popup_call3_in_pane

0x4480,	// (0x0005193c) popup_call3_audio_in_window_g1_ParamLimits

0x4480,	// (0x0005193c) popup_call3_audio_in_window_g1

0x44a0,	// (0x0005195c) popup_call3_audio_in_window_g2_ParamLimits

0x44a0,	// (0x0005195c) popup_call3_audio_in_window_g2

0x44c0,	// (0x0005197c) popup_call3_audio_in_window_g3_ParamLimits

0x44c0,	// (0x0005197c) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0005cace) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0005cace) popup_call3_audio_in_window_g

0x44f1,	// (0x000519ad) popup_call3_audio_in_window_t1_ParamLimits

0x44f1,	// (0x000519ad) popup_call3_audio_in_window_t1

0x452f,	// (0x000519eb) popup_call3_audio_in_window_t2_ParamLimits

0x452f,	// (0x000519eb) popup_call3_audio_in_window_t2

0x456d,	// (0x00051a29) popup_call3_audio_in_window_t3_ParamLimits

0x456d,	// (0x00051a29) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0005cad7) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0005cad7) popup_call3_audio_in_window_t

0xb396,	// (0x00058852) bg_popup_call3_rect_pane

0xc5aa,	// (0x00059a66) bg_popup_call3_rect_pane_g1

0xa815,	// (0x00057cd1) bg_popup_call3_rect_pane_g2

0xc5b2,	// (0x00059a6e) bg_popup_call3_rect_pane_g3

0xc5ba,	// (0x00059a76) bg_popup_call3_rect_pane_g4

0xc5c2,	// (0x00059a7e) bg_popup_call3_rect_pane_g5

0xc5ca,	// (0x00059a86) bg_popup_call3_rect_pane_g6

0xc5d2,	// (0x00059a8e) bg_popup_call3_rect_pane_g7

0x34a6,	// (0x00050962) mup_visualizer_osc_pane

0xb455,	// (0x00058911) mup_visualizer_spec_pane

0x443c,	// (0x000518f8) call3_video_qcif_pane_ParamLimits

0x443c,	// (0x000518f8) call3_video_qcif_pane

0x444d,	// (0x00051909) call3_video_qcif_uncrop_pane_ParamLimits

0x444d,	// (0x00051909) call3_video_qcif_uncrop_pane

0x445b,	// (0x00051917) call3_video_subqcif_pane_ParamLimits

0x445b,	// (0x00051917) call3_video_subqcif_pane

0x446f,	// (0x0005192b) call3_video_subqcif_uncrop_pane_ParamLimits

0x446f,	// (0x0005192b) call3_video_subqcif_uncrop_pane

0x44e0,	// (0x0005199c) popup_call3_audio_in_window_g4_ParamLimits

0x44e0,	// (0x0005199c) popup_call3_audio_in_window_g4

0x43fb,	// (0x000518b7) mup_spec_half_pane

0x4404,	// (0x000518c0) mup_spec_half_pane_cp

0xc80f,	// (0x00059ccb) mup_osc_middle_pane

0xc818,	// (0x00059cd4) mup_visualizer_osc_pane_g1

0x43db,	// (0x00051897) mup_spec_bar_pane_ParamLimits

0x43db,	// (0x00051897) mup_spec_bar_pane

0xc7fc,	// (0x00059cb8) mup_spec_bar_pane_g1

0xc806,	// (0x00059cc2) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005cac2) mup_spec_bar_pane_g

0x13e3,	// (0x0004e89f) aid_cale_week_size_cell_pane_ParamLimits

0x13fd,	// (0x0004e8b9) bg_cale_heading_pane_ParamLimits

0xa852,	// (0x00057d0e) bg_cale_pane_cp01_ParamLimits

0x141b,	// (0x0004e8d7) cale_week_corner_pane_ParamLimits

0x143a,	// (0x0004e8f6) cale_week_day_heading_pane_ParamLimits

0x145d,	// (0x0004e919) cale_week_scroll_pane_g1_ParamLimits

0x1476,	// (0x0004e932) cale_week_scroll_pane_g2_ParamLimits

0x148e,	// (0x0004e94a) cale_week_scroll_pane_g3_ParamLimits

0x14a6,	// (0x0004e962) cale_week_scroll_pane_g4_ParamLimits

0x14be,	// (0x0004e97a) cale_week_scroll_pane_g5_ParamLimits

0x14da,	// (0x0004e996) cale_week_scroll_pane_g6_ParamLimits

0x14fa,	// (0x0004e9b6) cale_week_scroll_pane_g7_ParamLimits

0x151a,	// (0x0004e9d6) cale_week_scroll_pane_g8_ParamLimits

0x153e,	// (0x0004e9fa) cale_week_scroll_pane_g9_ParamLimits

0x1556,	// (0x0004ea12) cale_week_scroll_pane_g10_ParamLimits

0x156e,	// (0x0004ea2a) cale_week_scroll_pane_g11_ParamLimits

0x1586,	// (0x0004ea42) cale_week_scroll_pane_g12_ParamLimits

0x159e,	// (0x0004ea5a) cale_week_scroll_pane_g13_ParamLimits

0x159e,	// (0x0004ea5a) cale_week_scroll_pane_g14_ParamLimits

0x159e,	// (0x0004ea5a) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0005c668) cale_week_scroll_pane_g_ParamLimits

0x15da,	// (0x0004ea96) cale_week_time_pane_ParamLimits

0x15fe,	// (0x0004eaba) grid_cale_week_pane_ParamLimits

0xa870,	// (0x00057d2c) listscroll_cale_week_pane_t1

0xa882,	// (0x00057d3e) scroll_pane_cp08_ParamLimits

0x239b,	// (0x0004f857) cale_month_corner_pane_ParamLimits

0xac1b,	// (0x000580d7) cale_month_pane_t1

0x27bb,	// (0x0004fc77) cale_month_week_pane_ParamLimits

0x2fd0,	// (0x0005048c) popup_call_status_window_g1_ParamLimits

0x2fe4,	// (0x000504a0) popup_call_status_window_g2_ParamLimits

0x2ff8,	// (0x000504b4) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0005c812) popup_call_status_window_g_ParamLimits

0xafc7,	// (0x00058483) aid_call2_pane

0x0168,	// (0x0004d624) msg_header_pane_g1

0x38ad,	// (0x00050d69) postcard_address2_pane_ParamLimits

0x38ad,	// (0x00050d69) postcard_address2_pane

0x38bf,	// (0x00050d7b) postcard_message2_pane_ParamLimits

0x38bf,	// (0x00050d7b) postcard_message2_pane

0x4389,	// (0x00051845) message2_row_pane_ParamLimits

0x4389,	// (0x00051845) message2_row_pane

0x43a8,	// (0x00051864) address2_row_pane_ParamLimits

0x43a8,	// (0x00051864) address2_row_pane

0xc7ca,	// (0x00059c86) postcard_message2_row_pane_g1

0xc7d2,	// (0x00059c8e) postcard_message2_row_pane_t1

0xc7ca,	// (0x00059c86) address2_row_pane_g1

0xc7d2,	// (0x00059c8e) address2_row_pane_t1

0x1a1e,	// (0x0004eeda) aid_size_cell_vorec

0x9aa3,	// (0x00056f5f) main_rss_pane

0x43bb,	// (0x00051877) rss_list_single_pane_ParamLimits

0x43bb,	// (0x00051877) rss_list_single_pane

0xc7e0,	// (0x00059c9c) rss_list_single_pane_t1

0xc7ee,	// (0x00059caa) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0005cabd) rss_list_single_pane_t

0x9aa3,	// (0x00056f5f) main_camera2_pane

0x9aa3,	// (0x00056f5f) main_video2_pane

0x4623,	// (0x00051adf) cams_zoom_pane_cp2_ParamLimits

0x4623,	// (0x00051adf) cams_zoom_pane_cp2

0x4643,	// (0x00051aff) image2_vga_pane_ParamLimits

0x4643,	// (0x00051aff) image2_vga_pane

0x4694,	// (0x00051b50) main_camera2_pane_g1_ParamLimits

0x4694,	// (0x00051b50) main_camera2_pane_g1

0x46b4,	// (0x00051b70) main_camera2_pane_g2_ParamLimits

0x46b4,	// (0x00051b70) main_camera2_pane_g2

0x46d4,	// (0x00051b90) main_camera2_pane_g3_ParamLimits

0x46d4,	// (0x00051b90) main_camera2_pane_g3

0x46f4,	// (0x00051bb0) main_camera2_pane_g4_ParamLimits

0x46f4,	// (0x00051bb0) main_camera2_pane_g4

0x4714,	// (0x00051bd0) main_camera2_pane_g5_ParamLimits

0x4714,	// (0x00051bd0) main_camera2_pane_g5

0x4734,	// (0x00051bf0) main_camera2_pane_g6_ParamLimits

0x4734,	// (0x00051bf0) main_camera2_pane_g6

0x4754,	// (0x00051c10) main_camera2_pane_g7_ParamLimits

0x4754,	// (0x00051c10) main_camera2_pane_g7

0x4774,	// (0x00051c30) main_camera2_pane_g8_ParamLimits

0x4774,	// (0x00051c30) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0005cade) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0005cade) main_camera2_pane_g

0x47b4,	// (0x00051c70) main_camera2_pane_t1_ParamLimits

0x47b4,	// (0x00051c70) main_camera2_pane_t1

0x47e9,	// (0x00051ca5) main_camera2_pane_t2_ParamLimits

0x47e9,	// (0x00051ca5) main_camera2_pane_t2

0x480f,	// (0x00051ccb) main_camera2_pane_t3_ParamLimits

0x480f,	// (0x00051ccb) main_camera2_pane_t3

0x486d,	// (0x00051d29) main_camera2_pane_t4_ParamLimits

0x486d,	// (0x00051d29) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0005caf1) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0005caf1) main_camera2_pane_t

0x48ff,	// (0x00051dbb) cams_zoom_pane_cp4_ParamLimits

0x48ff,	// (0x00051dbb) cams_zoom_pane_cp4

0x4915,	// (0x00051dd1) image2_cif_pane_ParamLimits

0x4915,	// (0x00051dd1) image2_cif_pane

0x4940,	// (0x00051dfc) image2_subqcif_pane_ParamLimits

0x4940,	// (0x00051dfc) image2_subqcif_pane

0x495a,	// (0x00051e16) main_video2_pane_g1_ParamLimits

0x495a,	// (0x00051e16) main_video2_pane_g1

0x4974,	// (0x00051e30) main_video2_pane_g2_ParamLimits

0x4974,	// (0x00051e30) main_video2_pane_g2

0x498a,	// (0x00051e46) main_video2_pane_g3_ParamLimits

0x498a,	// (0x00051e46) main_video2_pane_g3

0x49a0,	// (0x00051e5c) main_video2_pane_g4_ParamLimits

0x49a0,	// (0x00051e5c) main_video2_pane_g4

0x49b6,	// (0x00051e72) main_video2_pane_g5_ParamLimits

0x49b6,	// (0x00051e72) main_video2_pane_g5

0x49cc,	// (0x00051e88) main_video2_pane_g6_ParamLimits

0x49cc,	// (0x00051e88) main_video2_pane_g6

0x0005,

0xf644,	// (0x0005cb00) main_video2_pane_g_ParamLimits

0xf644,	// (0x0005cb00) main_video2_pane_g

0x49e6,	// (0x00051ea2) main_video2_pane_t1_ParamLimits

0x49e6,	// (0x00051ea2) main_video2_pane_t1

0x4a0a,	// (0x00051ec6) main_video2_pane_t2_ParamLimits

0x4a0a,	// (0x00051ec6) main_video2_pane_t2

0x4a58,	// (0x00051f14) main_video2_pane_t3_ParamLimits

0x4a58,	// (0x00051f14) main_video2_pane_t3

0x0002,

0xf651,	// (0x0005cb0d) main_video2_pane_t_ParamLimits

0xf651,	// (0x0005cb0d) main_video2_pane_t

0x3ee5,	// (0x000513a1) call_muted_g2

0x0001,

0xf5f3,	// (0x0005caaf) call_muted_g

0x9aa3,	// (0x00056f5f) main_mup2_pane

0x4aa0,	// (0x00051f5c) main_mup2_pane_g1_ParamLimits

0x4aa0,	// (0x00051f5c) main_mup2_pane_g1

0x4aac,	// (0x00051f68) main_mup2_pane_g2_ParamLimits

0x4aac,	// (0x00051f68) main_mup2_pane_g2

0x9def,	// (0x000572ab) main_mup_pane_g13_cp1

0x9df7,	// (0x000572b3) mup_volume_pane_cp1

0x4ac8,	// (0x00051f84) main_mup2_pane_g4_ParamLimits

0x4ac8,	// (0x00051f84) main_mup2_pane_g4

0x4ada,	// (0x00051f96) main_mup2_pane_g5_ParamLimits

0x4ada,	// (0x00051f96) main_mup2_pane_g5

0x4aec,	// (0x00051fa8) main_mup2_pane_g6_ParamLimits

0x4aec,	// (0x00051fa8) main_mup2_pane_g6

0x4afe,	// (0x00051fba) main_mup2_pane_g7_ParamLimits

0x4afe,	// (0x00051fba) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0005cb14) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0005cb14) main_mup2_pane_g

0x4b16,	// (0x00051fd2) main_mup2_pane_t1_ParamLimits

0x4b16,	// (0x00051fd2) main_mup2_pane_t1

0x4b2c,	// (0x00051fe8) main_mup2_pane_t2_ParamLimits

0x4b2c,	// (0x00051fe8) main_mup2_pane_t2

0x4b42,	// (0x00051ffe) main_mup2_pane_t3_ParamLimits

0x4b42,	// (0x00051ffe) main_mup2_pane_t3

0x4b58,	// (0x00052014) main_mup2_pane_t4_ParamLimits

0x4b58,	// (0x00052014) main_mup2_pane_t4

0x4b70,	// (0x0005202c) main_mup2_pane_t5_ParamLimits

0x4b70,	// (0x0005202c) main_mup2_pane_t5

0x4b88,	// (0x00052044) main_mup2_pane_t6_ParamLimits

0x4b88,	// (0x00052044) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0005cb23) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0005cb23) main_mup2_pane_t

0x4bb8,	// (0x00052074) mup2_visualizer_pane_ParamLimits

0x4bb8,	// (0x00052074) mup2_visualizer_pane

0x4be6,	// (0x000520a2) mup_progress_pane_cp_ParamLimits

0x4be6,	// (0x000520a2) mup_progress_pane_cp

0x9dda,	// (0x00057296) mup_volume_pane_cp_ParamLimits

0x9dda,	// (0x00057296) mup_volume_pane_cp

0x4bfa,	// (0x000520b6) mup2_visualizer_pane_g1_ParamLimits

0x4bfa,	// (0x000520b6) mup2_visualizer_pane_g1

0xc84f,	// (0x00059d0b) mup2_visualizer_pane_g2_ParamLimits

0xc84f,	// (0x00059d0b) mup2_visualizer_pane_g2

0x4c11,	// (0x000520cd) mup2_visualizer_pane_g3_ParamLimits

0x4c11,	// (0x000520cd) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0005cb30) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0005cb30) mup2_visualizer_pane_g

0xb67c,	// (0x00058b38) aid_size_cell_fmradio

0x4097,	// (0x00051553) aid_height_parent_landcape

0xaa79,	// (0x00057f35) wml_content_pane_cp

0xaa81,	// (0x00057f3d) wml_tabs_pane

0xaa8a,	// (0x00057f46) popup_wml_miniature_window

0xaa92,	// (0x00057f4e) scroll_pane_cp021

0xaaa6,	// (0x00057f62) wml_content_pane_comp8

0x9aa3,	// (0x00056f5f) bg_popup_sub_pane_cp05

0xc86d,	// (0x00059d29) popup_wml_miniature_window_g1

0xc875,	// (0x00059d31) wml_miniature_view_pane

0x4c1d,	// (0x000520d9) aid_size_wml_view

0x4c25,	// (0x000520e1) wml_miniature_view_pane_g1

0x4c2e,	// (0x000520ea) wml_miniature_view_pane_g2

0x4c37,	// (0x000520f3) wml_miniature_view_pane_g3

0x4c3f,	// (0x000520fb) wml_miniature_view_pane_g4

0x4c47,	// (0x00052103) wml_miniature_view_pane_g5

0x4c4f,	// (0x0005210b) wml_miniature_view_pane_g6

0x4c57,	// (0x00052113) wml_miniature_view_pane_g7

0x4c5f,	// (0x0005211b) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0005cb37) wml_miniature_view_pane_g

0xc87d,	// (0x00059d39) background_graphic_ParamLimits

0xc87d,	// (0x00059d39) background_graphic

0xc889,	// (0x00059d45) wml_tabs_2_pane

0xc892,	// (0x00059d4e) wml_tabs_3_pane_ParamLimits

0xc892,	// (0x00059d4e) wml_tabs_3_pane

0xc8a4,	// (0x00059d60) wml_tabs_4_pane_ParamLimits

0xc8a4,	// (0x00059d60) wml_tabs_4_pane

0xc8ba,	// (0x00059d76) wml_tabs_5_pane_ParamLimits

0xc8ba,	// (0x00059d76) wml_tabs_5_pane

0xc8d4,	// (0x00059d90) wml_tabs_pane_g2_ParamLimits

0xc8d4,	// (0x00059d90) wml_tabs_pane_g2

0xc8e8,	// (0x00059da4) wml_tabs_pane_g3_ParamLimits

0xc8e8,	// (0x00059da4) wml_tabs_pane_g3

0x4c67,	// (0x00052123) wml_tabs_2_active_pane_ParamLimits

0x4c67,	// (0x00052123) wml_tabs_2_active_pane

0x4c7b,	// (0x00052137) wml_tabs_2_passive_pane_ParamLimits

0x4c7b,	// (0x00052137) wml_tabs_2_passive_pane

0x4c8f,	// (0x0005214b) wml_tabs_3_active_pane_cp_ParamLimits

0x4c8f,	// (0x0005214b) wml_tabs_3_active_pane_cp

0x4ca4,	// (0x00052160) wml_tabs_3_passive_pane_ParamLimits

0x4ca4,	// (0x00052160) wml_tabs_3_passive_pane

0x4cb7,	// (0x00052173) wml_tabs_3_passive_pane_cp_ParamLimits

0x4cb7,	// (0x00052173) wml_tabs_3_passive_pane_cp

0x4cce,	// (0x0005218a) tabs_4_active_pane

0x4cd6,	// (0x00052192) tabs_4_passive_pane

0x4ce0,	// (0x0005219c) tabs_4_passive_pane_cp

0x4ce8,	// (0x000521a4) tabs_4_passive_pane_cp2

0x3db2,	// (0x0005126e) aid_height_text

0x3478,	// (0x00050934) mup_volume_cont_pane_ParamLimits

0x3478,	// (0x00050934) mup_volume_cont_pane

0x0fe6,	// (0x0004e4a2) aid_size_cell_pinb

0x0ff0,	// (0x0004e4ac) aid_size_list_pinb

0x4bd2,	// (0x0005208e) mup2_volume_cont_pane_ParamLimits

0x4bd2,	// (0x0005208e) mup2_volume_cont_pane

0x9dc6,	// (0x00057282) mup2_volume_cont_pane_g1_ParamLimits

0x9dc6,	// (0x00057282) mup2_volume_cont_pane_g1

0x0c98,	// (0x0004e154) aid_size_cell_touch_ParamLimits

0x0c98,	// (0x0004e154) aid_size_cell_touch

0x0ed5,	// (0x0004e391) touch_pane_ParamLimits

0x0ed5,	// (0x0004e391) touch_pane

0x9628,	// (0x00056ae4) main_rss2_pane

0xc905,	// (0x00059dc1) listscroll_rss2_pane

0xc90e,	// (0x00059dca) rss2_navigation_pane

0xc916,	// (0x00059dd2) list_rss2_pane

0xb116,	// (0x000585d2) scroll_pane_cp22

0xc91e,	// (0x00059dda) rss2_navigation_pane_g1

0xc927,	// (0x00059de3) rss2_navigation_pane_g2

0xc92f,	// (0x00059deb) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0005cb48) rss2_navigation_pane_g

0xc937,	// (0x00059df3) rss2_navigation_pane_t1

0x4cf2,	// (0x000521ae) rss2_list_single_pane_ParamLimits

0x4cf2,	// (0x000521ae) rss2_list_single_pane

0xc945,	// (0x00059e01) rss2_list_single_pane_t2

0xc953,	// (0x00059e0f) rss2_list_single_pane_t3_ParamLimits

0xc953,	// (0x00059e0f) rss2_list_single_pane_t3

0xc970,	// (0x00059e2c) rss2_list_single_pane_t4

0x2e62,	// (0x0005031e) smil_status_pane_g1

0xa4ad,	// (0x00057969) main_image2_pane_ParamLimits

0xa4ad,	// (0x00057969) main_image2_pane

0x4794,	// (0x00051c50) main_camera2_pane_g9_ParamLimits

0x4794,	// (0x00051c50) main_camera2_pane_g9

0x48c2,	// (0x00051d7e) main_camera2_pane_t5_ParamLimits

0x48c2,	// (0x00051d7e) main_camera2_pane_t5

0x9d96,	// (0x00057252) main_camera2_pane_t6_ParamLimits

0x9d96,	// (0x00057252) main_camera2_pane_t6

0x4d09,	// (0x000521c5) main_image2_pane_g1_ParamLimits

0x4d09,	// (0x000521c5) main_image2_pane_g1

0x3aec,	// (0x00050fa8) smil2_video_pane_ParamLimits

0x3aec,	// (0x00050fa8) smil2_video_pane

0x0cd0,	// (0x0004e18c) aid_zoom_text_primary_cp

0x9686,	// (0x00056b42) popup_preview_fixed_window

0xa9e2,	// (0x00057e9e) im_reading_pane_g1

0x460b,	// (0x00051ac7) cams2_bc_adjust_pane_cp_ParamLimits

0x460b,	// (0x00051ac7) cams2_bc_adjust_pane_cp

0x48f1,	// (0x00051dad) cams2_bc_adjust_pane_ParamLimits

0x48f1,	// (0x00051dad) cams2_bc_adjust_pane

0x9dff,	// (0x000572bb) cams2_bc_adjust_pane_g1

0x9e07,	// (0x000572c3) cams2_slider_pane

0x9e10,	// (0x000572cc) cams2_slider_pane_g1

0x9e19,	// (0x000572d5) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0005cb4f) cams2_slider_pane_g

0x10c8,	// (0x0004e584) calc_display_pane_ParamLimits

0x10f0,	// (0x0004e5ac) calc_paper_pane_ParamLimits

0x1113,	// (0x0004e5cf) grid_calc_pane_ParamLimits

0x9caf,	// (0x0005716b) popup_clock_digital_window_t1_ParamLimits

0xb619,	// (0x00058ad5) main_image_pane_t1

0x10aa,	// (0x0004e566) aid_size_cell_calc_ParamLimits

0x10aa,	// (0x0004e566) aid_size_cell_calc

0x40dd,	// (0x00051599) popup_blid_sat_info2_window_ParamLimits

0x40dd,	// (0x00051599) popup_blid_sat_info2_window

0xc986,	// (0x00059e42) aid_size_cell_blid

0xc98e,	// (0x00059e4a) bg_popup_window_pane_cp07

0xc9b1,	// (0x00059e6d) grid_popup_blid_pane

0xc9bb,	// (0x00059e77) heading_pane_cp05_ParamLimits

0xc9bb,	// (0x00059e77) heading_pane_cp05

0xca85,	// (0x00059f41) cell_popup_blid_pane_ParamLimits

0xca85,	// (0x00059f41) cell_popup_blid_pane

0xcaab,	// (0x00059f67) cell_popup_blid_pane_g1

0xcab3,	// (0x00059f6f) cell_popup_blid_pane_t1

0x4ba2,	// (0x0005205e) mup2_indicator_pane_ParamLimits

0x4ba2,	// (0x0005205e) mup2_indicator_pane

0xb396,	// (0x00058852) mup2_visualizer_osc_pane

0xc85b,	// (0x00059d17) mup2_visualizer_spec_pane_ParamLimits

0xc85b,	// (0x00059d17) mup2_visualizer_spec_pane

0x4d1f,	// (0x000521db) mup2_spec_half_pane

0x4d28,	// (0x000521e4) mup2_spec_half_pane_cp

0x4d30,	// (0x000521ec) mup2_spec_bar_pane_ParamLimits

0x4d30,	// (0x000521ec) mup2_spec_bar_pane

0xc7fc,	// (0x00059cb8) mup2_spec_bar_pane_g1

0xc806,	// (0x00059cc2) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0005cac2) mup2_spec_bar_pane_g

0x4d50,	// (0x0005220c) mup2_osc_middle_pane

0xc818,	// (0x00059cd4) mup2_visualizer_osc_pane_g1

0x96b0,	// (0x00056b6c) popup_number_entry_window_t1_ParamLimits

0x96c3,	// (0x00056b7f) popup_number_entry_window_t2_ParamLimits

0x96d5,	// (0x00056b91) popup_number_entry_window_t3_ParamLimits

0x0f27,	// (0x0004e3e3) popup_number_entry_window_t5_ParamLimits

0x0f27,	// (0x0004e3e3) popup_number_entry_window_t5

0xf0c6,	// (0x0005c582) popup_number_entry_window_t_ParamLimits

0x96e7,	// (0x00056ba3) text_title_cp2_ParamLimits

0x9cee,	// (0x000571aa) aid_hotspot_pointer_text2_pane

0x9d14,	// (0x000571d0) main_viewer_pane_g9_ParamLimits

0x9d14,	// (0x000571d0) main_viewer_pane_g9

0xac1b,	// (0x000580d7) cale_month_pane_t1_ParamLimits

0xac58,	// (0x00058114) bg_cale_pane_ParamLimits

0xac70,	// (0x0005812c) list_cale_pane_ParamLimits

0xac81,	// (0x0005813d) listscroll_cale_day_pane_t1

0xac93,	// (0x0005814f) scroll_pane_cp09_ParamLimits

0x34ae,	// (0x0005096a) main_mup_eq_pane_t1_ParamLimits

0x34ae,	// (0x0005096a) main_mup_eq_pane_t1

0x34c8,	// (0x00050984) main_mup_eq_pane_t2_ParamLimits

0x34c8,	// (0x00050984) main_mup_eq_pane_t2

0x34e2,	// (0x0005099e) main_mup_eq_pane_t3_ParamLimits

0x34e2,	// (0x0005099e) main_mup_eq_pane_t3

0x34fe,	// (0x000509ba) main_mup_eq_pane_t4_ParamLimits

0x34fe,	// (0x000509ba) main_mup_eq_pane_t4

0x351a,	// (0x000509d6) main_mup_eq_pane_t5_ParamLimits

0x351a,	// (0x000509d6) main_mup_eq_pane_t5

0x3536,	// (0x000509f2) main_mup_eq_pane_t6_ParamLimits

0x3536,	// (0x000509f2) main_mup_eq_pane_t6

0x354a,	// (0x00050a06) main_mup_eq_pane_t7_ParamLimits

0x354a,	// (0x00050a06) main_mup_eq_pane_t7

0x355e,	// (0x00050a1a) main_mup_eq_pane_t8_ParamLimits

0x355e,	// (0x00050a1a) main_mup_eq_pane_t8

0x3572,	// (0x00050a2e) main_mup_eq_pane_t9_ParamLimits

0x3572,	// (0x00050a2e) main_mup_eq_pane_t9

0x358c,	// (0x00050a48) main_mup_eq_pane_t10_ParamLimits

0x358c,	// (0x00050a48) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0005c911) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0005c911) main_mup_eq_pane_t

0x363b,	// (0x00050af7) mup_equalizer_pane_cp5_ParamLimits

0x364f,	// (0x00050b0b) mup_equalizer_pane_cp6_ParamLimits

0x3663,	// (0x00050b1f) mup_equalizer_pane_cp7_ParamLimits

0x9628,	// (0x00056ae4) main_gallery_pane

0xc821,	// (0x00059cdd) smil2_volume_pane

0xc829,	// (0x00059ce5) smil_status_volume_pane_g1_ParamLimits

0xc83c,	// (0x00059cf8) smil_status_volume_pane_g2_ParamLimits

0x9d74,	// (0x00057230) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0005cac7) smil_status_volume_pane_g_ParamLimits

0xc98e,	// (0x00059e4a) bg_popup_window_pane_cp07_ParamLimits

0xc99c,	// (0x00059e58) blid_firmament_pane

0x4d59,	// (0x00052215) aid_size_cell_gallery_ParamLimits

0x4d59,	// (0x00052215) aid_size_cell_gallery

0x4d6f,	// (0x0005222b) grid_gallery_pane_ParamLimits

0x4d6f,	// (0x0005222b) grid_gallery_pane

0x4d88,	// (0x00052244) cell_gallery_pane_ParamLimits

0x4d88,	// (0x00052244) cell_gallery_pane

0xcac1,	// (0x00059f7d) bg_cell_gallery_focus_pane_ParamLimits

0xcac1,	// (0x00059f7d) bg_cell_gallery_focus_pane

0xcad3,	// (0x00059f8f) cell_gallery_pane_g1_ParamLimits

0xcad3,	// (0x00059f8f) cell_gallery_pane_g1

0x4dd1,	// (0x0005228d) cell_gallery_pane_g2_ParamLimits

0x4dd1,	// (0x0005228d) cell_gallery_pane_g2

0x4dde,	// (0x0005229a) cell_gallery_pane_g3_ParamLimits

0x4dde,	// (0x0005229a) cell_gallery_pane_g3

0xcadf,	// (0x00059f9b) cell_gallery_pane_g4_ParamLimits

0xcadf,	// (0x00059f9b) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0005cb75) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0005cb75) cell_gallery_pane_g

0xcaeb,	// (0x00059fa7) bg_cell_gallery_focus_pane_g1

0xcaf3,	// (0x00059faf) bg_cell_gallery_focus_pane_g2

0xcafb,	// (0x00059fb7) bg_cell_gallery_focus_pane_g3

0xcb03,	// (0x00059fbf) bg_cell_gallery_focus_pane_g4

0xcb0b,	// (0x00059fc7) bg_cell_gallery_focus_pane_g5

0xcb13,	// (0x00059fcf) bg_cell_gallery_focus_pane_g6

0xcb1b,	// (0x00059fd7) bg_cell_gallery_focus_pane_g7

0xcb23,	// (0x00059fdf) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0005cb7e) bg_cell_gallery_focus_pane_g

0xcb2b,	// (0x00059fe7) aid_firma_cardinal

0xcb3f,	// (0x00059ffb) blid_firmament_pane_t1

0xcb56,	// (0x0005a012) blid_firmament_pane_t2

0xcb6d,	// (0x0005a029) blid_firmament_pane_t3

0xcb84,	// (0x0005a040) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0005cb8f) blid_firmament_pane_t

0xcb9b,	// (0x0005a057) blid_sat_info_pane

0xcbab,	// (0x0005a067) blid_sat_info_pane_g1

0xcbab,	// (0x0005a067) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0005cb98) blid_sat_info_pane_g

0xcbb5,	// (0x0005a071) blid_sat_info_pane_t1

0xcbc3,	// (0x0005a07f) smil2_volume_content_pane

0xcbcc,	// (0x0005a088) smil2_volume_pane_g1

0xa7a3,	// (0x00057c5f) smil2_volume_content_pane_g1

0xcbd4,	// (0x0005a090) smil2_volume_content_pane_g2

0xcbdd,	// (0x0005a099) smil2_volume_content_pane_g3

0xcbe6,	// (0x0005a0a2) smil2_volume_content_pane_g4

0xcbef,	// (0x0005a0ab) smil2_volume_content_pane_g5

0xcbf8,	// (0x0005a0b4) smil2_volume_content_pane_g6

0xcc01,	// (0x0005a0bd) smil2_volume_content_pane_g7

0xcc0a,	// (0x0005a0c6) smil2_volume_content_pane_g8

0xcc13,	// (0x0005a0cf) smil2_volume_content_pane_g9

0xcc1c,	// (0x0005a0d8) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0005cb9d) smil2_volume_content_pane_g

0x16b2,	// (0x0004eb6e) cale_week_day_heading_pane_t1_ParamLimits

0x16fc,	// (0x0004ebb8) cale_week_day_heading_pane_t2_ParamLimits

0x174b,	// (0x0004ec07) cale_week_day_heading_pane_t3_ParamLimits

0x179a,	// (0x0004ec56) cale_week_day_heading_pane_t4_ParamLimits

0x17e9,	// (0x0004eca5) cale_week_day_heading_pane_t5_ParamLimits

0x1840,	// (0x0004ecfc) cale_week_day_heading_pane_t6_ParamLimits

0x1897,	// (0x0004ed53) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0005c689) cale_week_day_heading_pane_t_ParamLimits

0xa89f,	// (0x00057d5b) bg_cale_side_pane_ParamLimits

0x18e1,	// (0x0004ed9d) cale_week_time_pane_t1_ParamLimits

0x18fb,	// (0x0004edb7) cale_week_time_pane_t2_ParamLimits

0x1915,	// (0x0004edd1) cale_week_time_pane_t3_ParamLimits

0x192f,	// (0x0004edeb) cale_week_time_pane_t4_ParamLimits

0x1949,	// (0x0004ee05) cale_week_time_pane_t5_ParamLimits

0x1963,	// (0x0004ee1f) cale_week_time_pane_t6_ParamLimits

0x197d,	// (0x0004ee39) cale_week_time_pane_t7_ParamLimits

0x199d,	// (0x0004ee59) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0005c698) cale_week_time_pane_t_ParamLimits

0x19bd,	// (0x0004ee79) cell_cale_week_pane_g2_ParamLimits

0xa89f,	// (0x00057d5b) bg_cale_side_pane_cp01_ParamLimits

0x2c49,	// (0x00050105) cale_month_week_pane_t1_ParamLimits

0x2c62,	// (0x0005011e) cale_month_week_pane_t2_ParamLimits

0x2c7b,	// (0x00050137) cale_month_week_pane_t3_ParamLimits

0x2c94,	// (0x00050150) cale_month_week_pane_t4_ParamLimits

0x2cad,	// (0x00050169) cale_month_week_pane_t5_ParamLimits

0x2cc6,	// (0x00050182) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0005c771) cale_month_week_pane_t_ParamLimits

0x9c2b,	// (0x000570e7) cell_cale_month_pane_g1_ParamLimits

0x9628,	// (0x00056ae4) main_cale_event_viewer_pane

0x9628,	// (0x00056ae4) listscroll_cale_event_viewer_pane

0xcc25,	// (0x0005a0e1) list_cale_ev_pane

0xcc2d,	// (0x0005a0e9) scroll_pane_cp023

0xcc39,	// (0x0005a0f5) field_cale_ev_pane_ParamLimits

0xcc39,	// (0x0005a0f5) field_cale_ev_pane

0xcc55,	// (0x0005a111) field_cale_ev_content_pane_ParamLimits

0xcc55,	// (0x0005a111) field_cale_ev_content_pane

0xcc61,	// (0x0005a11d) field_cale_ev_pane_g1_ParamLimits

0xcc61,	// (0x0005a11d) field_cale_ev_pane_g1

0xcc6d,	// (0x0005a129) field_cale_ev_pane_g2_ParamLimits

0xcc6d,	// (0x0005a129) field_cale_ev_pane_g2

0xcc85,	// (0x0005a141) field_cale_ev_pane_g3_ParamLimits

0xcc85,	// (0x0005a141) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0005cbb2) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0005cbb2) field_cale_ev_pane_g

0xcc9d,	// (0x0005a159) field_cale_ev_pane_t1_ParamLimits

0xcc9d,	// (0x0005a159) field_cale_ev_pane_t1

0xccb4,	// (0x0005a170) field_cale_ev_content_pane_t1_ParamLimits

0xccb4,	// (0x0005a170) field_cale_ev_content_pane_t1

0xb4ff,	// (0x000589bb) bg_button_pane_cp01

0x13d1,	// (0x0004e88d) listscroll_cale_week_pane_ParamLimits

0xa849,	// (0x00057d05) popup_toolbar_window_cp01

0xa870,	// (0x00057d2c) listscroll_cale_week_pane_t1_ParamLimits

0x13d1,	// (0x0004e88d) listscroll_cale_day_pane_ParamLimits

0xa849,	// (0x00057d05) popup_toolbar_window_cp02

0xac81,	// (0x0005813d) listscroll_cale_day_pane_t1_ParamLimits

0x13d1,	// (0x0004e88d) main_cale_month_pane_ParamLimits

0x9d5f,	// (0x0005721b) popup_toolbar_window_cp03_ParamLimits

0x9d5f,	// (0x0005721b) popup_toolbar_window_cp03

0x39b0,	// (0x00050e6c) main_image_pane_g2_ParamLimits

0x39b0,	// (0x00050e6c) main_image_pane_g2

0x39c1,	// (0x00050e7d) main_image_pane_g3_ParamLimits

0x39c1,	// (0x00050e7d) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0005c9a3) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0005c9a3) main_image_pane_g

0xb619,	// (0x00058ad5) main_image_pane_t1_ParamLimits

0x39d2,	// (0x00050e8e) main_image_pane_t2_ParamLimits

0x39d2,	// (0x00050e8e) main_image_pane_t2

0x39e4,	// (0x00050ea0) main_image_pane_t3_ParamLimits

0x39e4,	// (0x00050ea0) main_image_pane_t3

0x3a0c,	// (0x00050ec8) main_image_pane_t4_ParamLimits

0x3a0c,	// (0x00050ec8) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0005c9aa) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0005c9aa) main_image_pane_t

0x3a2c,	// (0x00050ee8) popup_image_details_window_cp01

0x3a36,	// (0x00050ef2) popup_toobar_trans_pane_cp01_ParamLimits

0x3a36,	// (0x00050ef2) popup_toobar_trans_pane_cp01

0x41b4,	// (0x00051670) popup_image_details_window_ParamLimits

0x41b4,	// (0x00051670) popup_image_details_window

0x9d32,	// (0x000571ee) popup_image_focus_window

0x45c5,	// (0x00051a81) camera2_autofocus_pane_ParamLimits

0x45c5,	// (0x00051a81) camera2_autofocus_pane

0x9628,	// (0x00056ae4) bg_popup_sub_pane_cp06

0xccd1,	// (0x0005a18d) popup_image_focus_window_g1

0xccd9,	// (0x0005a195) popup_image_focus_window_g2

0xcce1,	// (0x0005a19d) popup_image_focus_window_g3

0xcce9,	// (0x0005a1a5) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0005cbb9) popup_image_focus_window_g

0xccf1,	// (0x0005a1ad) popup_image_focus_window_t1

0xccff,	// (0x0005a1bb) popup_image_focus_window_t2

0xcd0f,	// (0x0005a1cb) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0005cbc2) popup_image_focus_window_t

0xcd1d,	// (0x0005a1d9) camera2_autofocus_pane_g1

0xa4ad,	// (0x00057969) bg_tb_trans_pane_cp01

0xcd2b,	// (0x0005a1e7) popup_image_details_window_g1

0xcd3e,	// (0x0005a1fa) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0005cbd4) popup_image_details_window_g

0xcd67,	// (0x0005a223) popup_image_details_window_t1

0xcd79,	// (0x0005a235) popup_image_details_window_t2

0xcd92,	// (0x0005a24e) popup_image_details_window_t3

0xcda6,	// (0x0005a262) popup_image_details_window_t4

0xcdc1,	// (0x0005a27d) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0005cbdb) popup_image_details_window_t

0xa70e,	// (0x00057bca) bg_calc_paper_pane_ParamLimits

0x9628,	// (0x00056ae4) grid_highlight_pane_cp013

0x9b83,	// (0x0005703f) list_calc_pane_ParamLimits

0x9b95,	// (0x00057051) scroll_pane_cp024

0xa722,	// (0x00057bde) bg_calc_display_pane_ParamLimits

0x1211,	// (0x0004e6cd) calc_display_pane_t1_ParamLimits

0x1223,	// (0x0004e6df) calc_display_pane_t2_ParamLimits

0x9b9d,	// (0x00057059) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0005c609) calc_display_pane_t_ParamLimits

0x12e8,	// (0x0004e7a4) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0005c626) cell_calc_pane_g

0x12f1,	// (0x0004e7ad) cell_calc_pane_t1

0xa781,	// (0x00057c3d) grid_highlight_pane_cp02_ParamLimits

0xa797,	// (0x00057c53) toolbar_button_pane_cp01_ParamLimits

0xa797,	// (0x00057c53) toolbar_button_pane_cp01

0xb65e,	// (0x00058b1a) temp_image_control_pane_ParamLimits

0xb65e,	// (0x00058b1a) temp_image_control_pane

0xa4ad,	// (0x00057969) main_mp3_pane

0xcddb,	// (0x0005a297) temp_image_control_pane_g1_ParamLimits

0xcddb,	// (0x0005a297) temp_image_control_pane_g1

0xcde9,	// (0x0005a2a5) temp_image_control_pane_g2_ParamLimits

0xcde9,	// (0x0005a2a5) temp_image_control_pane_g2

0xcdfb,	// (0x0005a2b7) temp_image_control_pane_g3_ParamLimits

0xcdfb,	// (0x0005a2b7) temp_image_control_pane_g3

0x4e1b,	// (0x000522d7) temp_image_control_pane_g4_ParamLimits

0x4e1b,	// (0x000522d7) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0005cbe6) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0005cbe6) temp_image_control_pane_g

0xcddb,	// (0x0005a297) main_mp3_pane_g1

0x4e2e,	// (0x000522ea) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0005cbef) main_mp3_pane_g

0xce3e,	// (0x0005a2fa) main_mp3_pane_t1

0xa8f1,	// (0x00057dad) main_camera_pane_g8_ParamLimits

0xa8f1,	// (0x00057dad) main_camera_pane_g8

0x1ce5,	// (0x0004f1a1) main_video_pane_g7_ParamLimits

0x1ce5,	// (0x0004f1a1) main_video_pane_g7

0x9db4,	// (0x00057270) main_camera2_pane_t7_ParamLimits

0x9db4,	// (0x00057270) main_camera2_pane_t7

0xaa39,	// (0x00057ef5) scroll_pane_cp025_ParamLimits

0xaa39,	// (0x00057ef5) scroll_pane_cp025

0xaa4d,	// (0x00057f09) scroll_pane_cp026_ParamLimits

0xaa4d,	// (0x00057f09) scroll_pane_cp026

0xaa5c,	// (0x00057f18) wml_content_pane_ParamLimits

0x9628,	// (0x00056ae4) main_touch_calib_pane

0x4f04,	// (0x000523c0) main_touch_calib_pane_g1

0x4f16,	// (0x000523d2) main_touch_calib_pane_g2

0x4f28,	// (0x000523e4) main_touch_calib_pane_g3

0x4f3a,	// (0x000523f6) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0005cc0d) main_touch_calib_pane_g

0x4f4c,	// (0x00052408) main_touch_calib_pane_t1

0x4f66,	// (0x00052422) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0005cc16) main_touch_calib_pane_t

0xb1f4,	// (0x000586b0) mup_progress_pane_cp02

0xb229,	// (0x000586e5) navi_pane_g1

0xb321,	// (0x000587dd) navi_pane_mp_t3

0xa4ad,	// (0x00057969) main_mp3_pane_ParamLimits

0x4331,	// (0x000517ed) navi_pane_ParamLimits

0xcddb,	// (0x0005a297) main_mp3_pane_g1_ParamLimits

0x4e2e,	// (0x000522ea) main_mp3_pane_g2_ParamLimits

0x4e3c,	// (0x000522f8) main_mp3_pane_g3_ParamLimits

0x4e3c,	// (0x000522f8) main_mp3_pane_g3

0x4e4a,	// (0x00052306) main_mp3_pane_g4_ParamLimits

0x4e4a,	// (0x00052306) main_mp3_pane_g4

0xce0b,	// (0x0005a2c7) main_mp3_pane_g5_ParamLimits

0xce0b,	// (0x0005a2c7) main_mp3_pane_g5

0xce19,	// (0x0005a2d5) main_mp3_pane_g6_ParamLimits

0xce19,	// (0x0005a2d5) main_mp3_pane_g6

0xce26,	// (0x0005a2e2) main_mp3_pane_g7_ParamLimits

0xce26,	// (0x0005a2e2) main_mp3_pane_g7

0xce32,	// (0x0005a2ee) main_mp3_pane_g8_ParamLimits

0xce32,	// (0x0005a2ee) main_mp3_pane_g8

0xf733,	// (0x0005cbef) main_mp3_pane_g_ParamLimits

0x4e58,	// (0x00052314) main_mp3_pane_t2

0x4e66,	// (0x00052322) main_mp3_pane_t3

0xce4c,	// (0x0005a308) main_mp3_pane_t4

0xce5a,	// (0x0005a316) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0005cc00) main_mp3_pane_t

0xce68,	// (0x0005a324) mup_progress_pane_cp01

0x0cd0,	// (0x0004e18c) aid_zoom_text_secondary2

0xcc25,	// (0x0005a0e1) list_cale_ev2_pane

0xcc2d,	// (0x0005a0e9) scroll_pane_cp023_ParamLimits

0x4fbc,	// (0x00052478) field_cale_ev2_pane_ParamLimits

0x4fbc,	// (0x00052478) field_cale_ev2_pane

0x4fde,	// (0x0005249a) field_cale_ev2_pane_g1_ParamLimits

0x4fde,	// (0x0005249a) field_cale_ev2_pane_g1

0x4fea,	// (0x000524a6) field_cale_ev2_pane_g2_ParamLimits

0x4fea,	// (0x000524a6) field_cale_ev2_pane_g2

0x5002,	// (0x000524be) field_cale_ev2_pane_g3_ParamLimits

0x5002,	// (0x000524be) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0005cc21) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0005cc21) field_cale_ev2_pane_g

0x5026,	// (0x000524e2) field_cale_ev2_pane_t1_ParamLimits

0x5026,	// (0x000524e2) field_cale_ev2_pane_t1

0x503d,	// (0x000524f9) field_cale_ev2_pane_t2_ParamLimits

0x503d,	// (0x000524f9) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0005cc2a) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0005cc2a) field_cale_ev2_pane_t

0x3863,	// (0x00050d1f) main_postcard_pane_g5_ParamLimits

0x3863,	// (0x00050d1f) main_postcard_pane_g5

0x3879,	// (0x00050d35) main_postcard_pane_g6_ParamLimits

0x3879,	// (0x00050d35) main_postcard_pane_g6

0x1a9f,	// (0x0004ef5b) camera2_autofocus_pane_cp_ParamLimits

0x1a9f,	// (0x0004ef5b) camera2_autofocus_pane_cp

0xa4ad,	// (0x00057969) main_mup3_pane

0x5072,	// (0x0005252e) main_mup3_pane_g1_ParamLimits

0x5072,	// (0x0005252e) main_mup3_pane_g1

0x5094,	// (0x00052550) main_mup3_pane_g2_ParamLimits

0x5094,	// (0x00052550) main_mup3_pane_g2

0x5116,	// (0x000525d2) main_mup3_pane_g3_ParamLimits

0x5116,	// (0x000525d2) main_mup3_pane_g3

0x515c,	// (0x00052618) main_mup3_pane_g4_ParamLimits

0x515c,	// (0x00052618) main_mup3_pane_g4

0x51a2,	// (0x0005265e) main_mup3_pane_g5_ParamLimits

0x51a2,	// (0x0005265e) main_mup3_pane_g5

0x51ea,	// (0x000526a6) main_mup3_pane_g6_ParamLimits

0x51ea,	// (0x000526a6) main_mup3_pane_g6

0xce70,	// (0x0005a32c) main_mup3_pane_g7_ParamLimits

0xce70,	// (0x0005a32c) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0005cc3a) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0005cc3a) main_mup3_pane_g

0x5268,	// (0x00052724) main_mup3_pane_t1_ParamLimits

0x5268,	// (0x00052724) main_mup3_pane_t1

0x52dc,	// (0x00052798) main_mup3_pane_t2_ParamLimits

0x52dc,	// (0x00052798) main_mup3_pane_t2

0x53b0,	// (0x0005286c) main_mup3_pane_t4_ParamLimits

0x53b0,	// (0x0005286c) main_mup3_pane_t4

0x5406,	// (0x000528c2) main_mup3_pane_t5_ParamLimits

0x5406,	// (0x000528c2) main_mup3_pane_t5

0x54c2,	// (0x0005297e) main_mup3_pane_t6_ParamLimits

0x54c2,	// (0x0005297e) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0005cc4b) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0005cc4b) main_mup3_pane_t

0x557a,	// (0x00052a36) mup3_progress_pane_ParamLimits

0x557a,	// (0x00052a36) mup3_progress_pane

0x5606,	// (0x00052ac2) popup_mup3_control_window_ParamLimits

0x5606,	// (0x00052ac2) popup_mup3_control_window

0xce7e,	// (0x0005a33a) popup_mup3_text_window

0x5638,	// (0x00052af4) mup3_progress_pane_t1

0x5657,	// (0x00052b13) mup3_progress_pane_t2

0xce86,	// (0x0005a342) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0005cc58) mup3_progress_pane_t

0xcea3,	// (0x0005a35f) mup_progress_pane_cp03

0x9628,	// (0x00056ae4) bg_tb_trans_pane_cp04

0x5676,	// (0x00052b32) mup3_volume_pane

0x567e,	// (0x00052b3a) popup_mup3_control_window_g1

0x5687,	// (0x00052b43) mup3_volume_pane_g1

0x5690,	// (0x00052b4c) mup3_volume_pane_g2

0x5699,	// (0x00052b55) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0005cc5f) mup3_volume_pane_g

0x9628,	// (0x00056ae4) bg_tb_trans_pane_cp03

0xceb3,	// (0x0005a36f) popup_mup3_text_window_g1

0xcebb,	// (0x0005a377) popup_mup3_text_window_t1

0xa76a,	// (0x00057c26) list_calc_item_pane_g1_ParamLimits

0xc8fc,	// (0x00059db8) mup_volume_pane_cp_g1

0x4f80,	// (0x0005243c) main_touch_calib_pane_t3

0x4f94,	// (0x00052450) main_touch_calib_pane_t4

0x4fa8,	// (0x00052464) main_touch_calib_pane_t5

0x9632,	// (0x00056aee) aid_cell_size_toolbar2

0x963a,	// (0x00056af6) aid_popup3_width_pane

0x0cc8,	// (0x0004e184) aid_zoom_text_msg_primary

0x1a76,	// (0x0004ef32) vorec_t7

0xa72e,	// (0x00057bea) bg_calc_paper_pane_g1_ParamLimits

0xa73a,	// (0x00057bf6) bg_calc_paper_pane_g2_ParamLimits

0xa746,	// (0x00057c02) bg_calc_paper_pane_g3_ParamLimits

0xa752,	// (0x00057c0e) bg_calc_paper_pane_g4_ParamLimits

0xa75e,	// (0x00057c1a) bg_calc_paper_pane_g5_ParamLimits

0x126c,	// (0x0004e728) bg_calc_paper_pane_g6_ParamLimits

0x127d,	// (0x0004e739) bg_calc_paper_pane_g7_ParamLimits

0x128e,	// (0x0004e74a) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0005c610) bg_calc_paper_pane_g_ParamLimits

0x12a1,	// (0x0004e75d) calc_bg_paper_pane_g9_ParamLimits

0x1bf7,	// (0x0004f0b3) image_qvga_pane_ParamLimits

0x1bf7,	// (0x0004f0b3) image_qvga_pane

0xa63e,	// (0x00057afa) bg_popup_sub_pane_cp04_ParamLimits

0xb595,	// (0x00058a51) popup_mup_playback_window_g1_ParamLimits

0xb5a1,	// (0x00058a5d) popup_mup_playback_window_t1_ParamLimits

0xb5b6,	// (0x00058a72) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0005c99e) popup_mup_playback_window_t_ParamLimits

0x4abc,	// (0x00051f78) main_mup2_pane_g3_ParamLimits

0x4abc,	// (0x00051f78) main_mup2_pane_g3

0x1f8e,	// (0x0004f44a) popup_toolbar_window_cp04

0xb9ab,	// (0x00058e67) popup_call2_audio_second_window_g3_ParamLimits

0xb9ab,	// (0x00058e67) popup_call2_audio_second_window_g3

0xbdb5,	// (0x00059271) popup_call2_audio_first_window_g4_ParamLimits

0xbdb5,	// (0x00059271) popup_call2_audio_first_window_g4

0xc434,	// (0x000598f0) popup_call2_audio_in_window_g4_ParamLimits

0xc434,	// (0x000598f0) popup_call2_audio_in_window_g4

0x3992,	// (0x00050e4e) aid_area_sk_bg_cut_ParamLimits

0x3992,	// (0x00050e4e) aid_area_sk_bg_cut

0xb5cb,	// (0x00058a87) aid_area_sk_bg_cut_2_ParamLimits

0xb5cb,	// (0x00058a87) aid_area_sk_bg_cut_2

0x4dc1,	// (0x0005227d) aid_placing_details_win

0x4dc9,	// (0x00052285) aid_placing_details_win_2

0xcd1d,	// (0x0005a1d9) camera2_autofocus_pane_g1_ParamLimits

0x0e6e,	// (0x0004e32a) popup_fixed_preview_cale_window_ParamLimits

0x0e6e,	// (0x0004e32a) popup_fixed_preview_cale_window

0xb3a7,	// (0x00058863) navi_slider_pane_g3

0xb3b0,	// (0x0005886c) navi_slider_pane_g4

0xb3b9,	// (0x00058875) navi_slider_pane_g5

0xb3a7,	// (0x00058863) navi_slider_pane_g6

0x9cd5,	// (0x00057191) navi_slider_pane_g7

0xb4cc,	// (0x00058988) mup_scale_pane_g3

0xb4d5,	// (0x00058991) mup_scale_pane_g4

0xb4de,	// (0x0005899a) mup_scale_pane_g5

0x3677,	// (0x00050b33) mup_scale_pane_g6

0x3680,	// (0x00050b3c) mup_scale_pane_g7

0xb3a7,	// (0x00058863) cams2_slider_pane_g3

0xc97e,	// (0x00059e3a) cams2_slider_pane_g4

0x9e22,	// (0x000572de) cams2_slider_pane_g5

0xb3a7,	// (0x00058863) cams2_slider_pane_g6

0x9e2a,	// (0x000572e6) cams2_slider_pane_g7

0xcbab,	// (0x0005a067) camera2_autofocus_pane_cp_g1

0xc795,	// (0x00059c51) bg_popup_preview_window_pane_cp02_ParamLimits

0xc795,	// (0x00059c51) bg_popup_preview_window_pane_cp02

0xcec9,	// (0x0005a385) list_fp_cale_pane_ParamLimits

0xcec9,	// (0x0005a385) list_fp_cale_pane

0xced5,	// (0x0005a391) popup_fixed_preview_cale_window_t1_ParamLimits

0xced5,	// (0x0005a391) popup_fixed_preview_cale_window_t1

0x56a2,	// (0x00052b5e) popup_fixed_preview_cale_window_t2_ParamLimits

0x56a2,	// (0x00052b5e) popup_fixed_preview_cale_window_t2

0x56b7,	// (0x00052b73) popup_fixed_preview_cale_window_t3_ParamLimits

0x56b7,	// (0x00052b73) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0005cc66) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0005cc66) popup_fixed_preview_cale_window_t

0x56cc,	// (0x00052b88) list_single_fp_cale_pane_ParamLimits

0x56cc,	// (0x00052b88) list_single_fp_cale_pane

0xcef3,	// (0x0005a3af) list_single_fp_cale_pane_g1_ParamLimits

0xcef3,	// (0x0005a3af) list_single_fp_cale_pane_g1

0xceff,	// (0x0005a3bb) list_single_fp_cale_pane_g2_ParamLimits

0xceff,	// (0x0005a3bb) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0005cc6d) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0005cc6d) list_single_fp_cale_pane_g

0xcf18,	// (0x0005a3d4) list_single_fp_cale_pane_t1_ParamLimits

0xcf18,	// (0x0005a3d4) list_single_fp_cale_pane_t1

0xcf2a,	// (0x0005a3e6) list_single_fp_cale_pane_t2_ParamLimits

0xcf2a,	// (0x0005a3e6) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0005cc74) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0005cc74) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9628,	// (0x00056ae4) main_dialer_pane

0x56e3,	// (0x00052b9f) aid_cell_size_keypad

0x56ed,	// (0x00052ba9) dialer_ne_pane

0x56f5,	// (0x00052bb1) grid_dialer_command_1_pane

0x56fd,	// (0x00052bb9) grid_dialer_command_2_pane

0x5705,	// (0x00052bc1) grid_dialer_keypad_pane

0x5717,	// (0x00052bd3) bg_popup_call_pane_cp06_ParamLimits

0x5717,	// (0x00052bd3) bg_popup_call_pane_cp06

0x5723,	// (0x00052bdf) dialer_ne_clear_pane_ParamLimits

0x5723,	// (0x00052bdf) dialer_ne_clear_pane

0xcf5d,	// (0x0005a419) dialer_ne_pane_g1

0xcf65,	// (0x0005a421) dialer_ne_pane_t1_ParamLimits

0xcf65,	// (0x0005a421) dialer_ne_pane_t1

0x572f,	// (0x00052beb) dialer_ne_pane_t2_ParamLimits

0x572f,	// (0x00052beb) dialer_ne_pane_t2

0x5759,	// (0x00052c15) dialer_ne_pane_t3_ParamLimits

0x5759,	// (0x00052c15) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0005cc79) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0005cc79) dialer_ne_pane_t

0x5789,	// (0x00052c45) dialer_ne_pane_t3_copy1_ParamLimits

0x5789,	// (0x00052c45) dialer_ne_pane_t3_copy1

0x57b8,	// (0x00052c74) cell_dialer_keypad_pane_ParamLimits

0x57b8,	// (0x00052c74) cell_dialer_keypad_pane

0x57cf,	// (0x00052c8b) cell_dialer_command_1_pane_ParamLimits

0x57cf,	// (0x00052c8b) cell_dialer_command_1_pane

0x57e5,	// (0x00052ca1) cell_dialer_command_2_pane_ParamLimits

0x57e5,	// (0x00052ca1) cell_dialer_command_2_pane

0xcf77,	// (0x0005a433) bg_button_pane_cp02_ParamLimits

0xcf77,	// (0x0005a433) bg_button_pane_cp02

0x57f4,	// (0x00052cb0) cell_dialer_keypad_pane_g1_ParamLimits

0x57f4,	// (0x00052cb0) cell_dialer_keypad_pane_g1

0xcf77,	// (0x0005a433) bg_button_pane_cp03_ParamLimits

0xcf77,	// (0x0005a433) bg_button_pane_cp03

0x5809,	// (0x00052cc5) cell_dialer_command_1_pane_g1_ParamLimits

0x5809,	// (0x00052cc5) cell_dialer_command_1_pane_g1

0xcf83,	// (0x0005a43f) bg_button_pane_cp04

0x581c,	// (0x00052cd8) cell_dialer_command_2_pane_g1

0xb396,	// (0x00058852) bg_button_pane_cp06

0xcf8b,	// (0x0005a447) dialer_ne_clear_pane_g1

0xb235,	// (0x000586f1) navi_pane_g2

0xb263,	// (0x0005871f) navi_pane_g3

0x0002,

0xf3e5,	// (0x0005c8a1) navi_pane_g

0xb32f,	// (0x000587eb) navi_pane_mv_g2

0xb356,	// (0x00058812) navi_pane_mv_g5

0x3237,	// (0x000506f3) navi_pane_mv_t1

0xa722,	// (0x00057bde) main_clock2_pane

0x5869,	// (0x00052d25) main_clock2_list_pane_ParamLimits

0x5869,	// (0x00052d25) main_clock2_list_pane

0x58a1,	// (0x00052d5d) main_clock2_pane_t1_ParamLimits

0x58a1,	// (0x00052d5d) main_clock2_pane_t1

0x58df,	// (0x00052d9b) main_clock2_pane_t2_ParamLimits

0x58df,	// (0x00052d9b) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0005cc85) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0005cc85) main_clock2_pane_t

0x597d,	// (0x00052e39) popup_clock_analogue_window_cp03_ParamLimits

0x597d,	// (0x00052e39) popup_clock_analogue_window_cp03

0x59a2,	// (0x00052e5e) popup_clock_digital_window_cp02_ParamLimits

0x59a2,	// (0x00052e5e) popup_clock_digital_window_cp02

0x5a15,	// (0x00052ed1) main_clock2_list_single_pane_ParamLimits

0x5a15,	// (0x00052ed1) main_clock2_list_single_pane

0xb396,	// (0x00058852) list_highlight_pane_cp05

0xcfc5,	// (0x0005a481) main_clock2_list_single_pane_t1

0x1f8e,	// (0x0004f44a) popup_toolbar_window_cp04_ParamLimits

0x4deb,	// (0x000522a7) camera2_autofocus_pane_g2_ParamLimits

0x4deb,	// (0x000522a7) camera2_autofocus_pane_g2

0x4df7,	// (0x000522b3) camera2_autofocus_pane_g3_ParamLimits

0x4df7,	// (0x000522b3) camera2_autofocus_pane_g3

0x4e03,	// (0x000522bf) camera2_autofocus_pane_g4_ParamLimits

0x4e03,	// (0x000522bf) camera2_autofocus_pane_g4

0x4e0f,	// (0x000522cb) camera2_autofocus_pane_g5_ParamLimits

0x4e0f,	// (0x000522cb) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0005cbc9) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0005cbc9) camera2_autofocus_pane_g

0x5052,	// (0x0005250e) camera2_autofocus_pane_cp_g2

0x505a,	// (0x00052516) camera2_autofocus_pane_cp_g3

0x5062,	// (0x0005251e) camera2_autofocus_pane_cp_g4

0x506a,	// (0x00052526) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0005cc2f) camera2_autofocus_pane_cp_g

0x570f,	// (0x00052bcb) popup_dialer_spcha_window

0x9628,	// (0x00056ae4) bg_popup_sub_pane_cp07

0xcfd3,	// (0x0005a48f) list_spcha_pane

0xcfdb,	// (0x0005a497) list_single_spcha_pane_ParamLimits

0xcfdb,	// (0x0005a497) list_single_spcha_pane

0x9628,	// (0x00056ae4) list_highlight_pane_cp06

0xcff8,	// (0x0005a4b4) list_single_spcha_pane_t1

0xc1de,	// (0x0005969a) popup_call2_audio_out_window_g4_ParamLimits

0xc1de,	// (0x0005969a) popup_call2_audio_out_window_g4

0x9628,	// (0x00056ae4) main_imed2_pane

0x9d3a,	// (0x000571f6) popup_imed_adjust2_window

0x41cc,	// (0x00051688) popup_imed_trans_window_ParamLimits

0x41cc,	// (0x00051688) popup_imed_trans_window

0xc9e7,	// (0x00059ea3) popup_blid_sat_info2_window_t1

0xc9f5,	// (0x00059eb1) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0005cb5e) popup_blid_sat_info2_window_t

0x5abf,	// (0x00052f7b) aid_size_cell_colour_35

0x5adf,	// (0x00052f9b) aid_size_cell_colour_112

0x5aff,	// (0x00052fbb) aid_size_cell_effect

0xc7a1,	// (0x00059c5d) bg_tb_trans_pane_cp02

0xad92,	// (0x0005824e) heading_imed_pane

0x5b1f,	// (0x00052fdb) listscroll_imed_pane

0xd006,	// (0x0005a4c2) heading_imed_pane_g1

0xd00e,	// (0x0005a4ca) heading_imed_pane_t1

0xd01c,	// (0x0005a4d8) grid_imed_colour_35_pane_ParamLimits

0xd01c,	// (0x0005a4d8) grid_imed_colour_35_pane

0x5b2b,	// (0x00052fe7) grid_imed_effect_pane

0xd034,	// (0x0005a4f0) list_imed_aspect_pane

0x5b41,	// (0x00052ffd) scroll_pane_cp027_ParamLimits

0x5b41,	// (0x00052ffd) scroll_pane_cp027

0x5b52,	// (0x0005300e) cell_imed_effect_pane_ParamLimits

0x5b52,	// (0x0005300e) cell_imed_effect_pane

0xd03c,	// (0x0005a4f8) cell_imed_colour_pane_ParamLimits

0xd03c,	// (0x0005a4f8) cell_imed_colour_pane

0xd07e,	// (0x0005a53a) cell_imed_colour_pane_g1_ParamLimits

0xd07e,	// (0x0005a53a) cell_imed_colour_pane_g1

0xd08f,	// (0x0005a54b) hgihlgiht_grid_pane_cp016_ParamLimits

0xd08f,	// (0x0005a54b) hgihlgiht_grid_pane_cp016

0x5b79,	// (0x00053035) cell_imed_effect_pane_g1

0x5b81,	// (0x0005303d) grid_highlight_pane_cp017

0xd0a0,	// (0x0005a55c) list_imed_single_pane_ParamLimits

0xd0a0,	// (0x0005a55c) list_imed_single_pane

0x9628,	// (0x00056ae4) list_highlight_pane_cp07

0xd0b6,	// (0x0005a572) list_imed_aspect_pane_comp1_t1

0xc7a1,	// (0x00059c5d) bg_tb_trans_pane_cp05

0xd0d8,	// (0x0005a594) popup_imed_adjust2_window_g1

0xd0ff,	// (0x0005a5bb) popup_imed_adjust2_window_t1

0xd117,	// (0x0005a5d3) slider_imed_adjust_pane

0xd12b,	// (0x0005a5e7) slider_imed_adjust_pane_g1

0xd13b,	// (0x0005a5f7) slider_imed_adjust_pane_g2

0xd14b,	// (0x0005a607) slider_imed_adjust_pane_g3

0xd15c,	// (0x0005a618) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0005cca2) slider_imed_adjust_pane_g

0x5b8a,	// (0x00053046) aid_size_cell_clipart2

0x5b96,	// (0x00053052) grid_imed_clipart_pane

0xd16d,	// (0x0005a629) scroll_pane_cp031

0x5ba0,	// (0x0005305c) cell_imed_clipart_pane_ParamLimits

0x5ba0,	// (0x0005305c) cell_imed_clipart_pane

0x5bc4,	// (0x00053080) cell_imed_clipart_pane_g1

0x9628,	// (0x00056ae4) grid_highlight_pane_cp014

0x587e,	// (0x00052d3a) main_clock2_pane_g1_ParamLimits

0x587e,	// (0x00052d3a) main_clock2_pane_g1

0x59c0,	// (0x00052e7c) aid_call2_pane_cp10

0x59d2,	// (0x00052e8e) aid_call_pane_cp10

0xb194,	// (0x00058650) popup_clock_analogue_window_cp10_g1

0xb194,	// (0x00058650) popup_clock_analogue_window_cp10_g2

0x59e4,	// (0x00052ea0) popup_clock_analogue_window_cp10_g3

0x59e4,	// (0x00052ea0) popup_clock_analogue_window_cp10_g4

0xb194,	// (0x00058650) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0005cc90) popup_clock_analogue_window_cp10_g

0x59f6,	// (0x00052eb2) popup_clock_analogue_window_cp10_t1

0x5a27,	// (0x00052ee3) clock_digital_number_pane_cp10_ParamLimits

0x5a27,	// (0x00052ee3) clock_digital_number_pane_cp10

0x5a3f,	// (0x00052efb) clock_digital_number_pane_cp11_ParamLimits

0x5a3f,	// (0x00052efb) clock_digital_number_pane_cp11

0x5a57,	// (0x00052f13) clock_digital_number_pane_cp12_ParamLimits

0x5a57,	// (0x00052f13) clock_digital_number_pane_cp12

0x5a6f,	// (0x00052f2b) clock_digital_number_pane_cp13_ParamLimits

0x5a6f,	// (0x00052f2b) clock_digital_number_pane_cp13

0x5a87,	// (0x00052f43) clock_digital_separator_pane_cp10_ParamLimits

0x5a87,	// (0x00052f43) clock_digital_separator_pane_cp10

0x5a9f,	// (0x00052f5b) popup_clock_digital_window_cp02_t1_ParamLimits

0x5a9f,	// (0x00052f5b) popup_clock_digital_window_cp02_t1

0xa636,	// (0x00057af2) clock_digital_number_pane_cp10_g1

0xa636,	// (0x00057af2) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0005ccab) clock_digital_number_pane_cp10_g

0xa636,	// (0x00057af2) clock_digital_separator_pane_cp10_g1

0xa636,	// (0x00057af2) clock_digital_separator_pane_g2_cp10

0xb35e,	// (0x0005881a) navi_pane_vded_g4

0xb367,	// (0x00058823) navi_pane_vded_g5

0xb370,	// (0x0005882c) navi_pane_vded_t1

0x9628,	// (0x00056ae4) main_vded_pane

0x5bcd,	// (0x00053089) main_vded_pane_g1

0x5bd7,	// (0x00053093) main_vded_pane_g2

0x5be1,	// (0x0005309d) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0005ccb0) main_vded_pane_g

0x5beb,	// (0x000530a7) main_vded_pane_t1

0x5bf9,	// (0x000530b5) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0005ccb7) main_vded_pane_t

0x5c07,	// (0x000530c3) vded_slider_pane

0x5c11,	// (0x000530cd) vded_video_pane

0xd175,	// (0x0005a631) vded_video_pane_g1

0x5c1b,	// (0x000530d7) vded_video_pane_g2

0xcbab,	// (0x0005a067) vded_video_pane_g3

0x0002,

0xf800,	// (0x0005ccbc) vded_video_pane_g

0xd17f,	// (0x0005a63b) vded_slider_pane_g1

0xd188,	// (0x0005a644) vded_slider_pane_g2

0xd191,	// (0x0005a64d) vded_slider_pane_g3

0xd19a,	// (0x0005a656) vded_slider_pane_g4

0xd1a3,	// (0x0005a65f) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0005ccc3) vded_slider_pane_g

0x55ee,	// (0x00052aaa) mup3_rocker_pane_ParamLimits

0x55ee,	// (0x00052aaa) mup3_rocker_pane

0x5c24,	// (0x000530e0) mup3_control_keys_pane_g1

0x5c2c,	// (0x000530e8) mup3_control_keys_pane_g2

0x5c34,	// (0x000530f0) mup3_control_keys_pane_g3

0x5c3c,	// (0x000530f8) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0005ccce) mup3_control_keys_pane_g

0x0ea5,	// (0x0004e361) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ea5,	// (0x0004e361) popup_toolbar2_fixed_window_cp01

0x5622,	// (0x00052ade) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5622,	// (0x00052ade) popup_toolbar2_fixed_window_cp02

0xbb1d,	// (0x00058fd9) popup_call2_audio_second_window_t4_ParamLimits

0xbb1d,	// (0x00058fd9) popup_call2_audio_second_window_t4

0xc04b,	// (0x00059507) popup_call2_audio_first_window_t6_ParamLimits

0xc04b,	// (0x00059507) popup_call2_audio_first_window_t6

0xc2e1,	// (0x0005979d) popup_call2_audio_out_window_t6_ParamLimits

0xc2e1,	// (0x0005979d) popup_call2_audio_out_window_t6

0x9628,	// (0x00056ae4) main_vitu_pane

0x5c4c,	// (0x00053108) aid_size_cell_itu_ParamLimits

0x5c4c,	// (0x00053108) aid_size_cell_itu

0xa4ad,	// (0x00057969) bg_popup_window_pane_cp08_ParamLimits

0xa4ad,	// (0x00057969) bg_popup_window_pane_cp08

0x5c62,	// (0x0005311e) field_vitu_entry_pane_ParamLimits

0x5c62,	// (0x0005311e) field_vitu_entry_pane

0x5c79,	// (0x00053135) grid_vitu_function_pane_ParamLimits

0x5c79,	// (0x00053135) grid_vitu_function_pane

0x5c94,	// (0x00053150) grid_vitu_itu_pane_ParamLimits

0x5c94,	// (0x00053150) grid_vitu_itu_pane

0x5cb2,	// (0x0005316e) cell_vitu_itu_pane_ParamLimits

0x5cb2,	// (0x0005316e) cell_vitu_itu_pane

0x5cd6,	// (0x00053192) cell_vitu_function_pane_ParamLimits

0x5cd6,	// (0x00053192) cell_vitu_function_pane

0xa4ad,	// (0x00057969) bg_popup_sub_pane_cp08_ParamLimits

0xa4ad,	// (0x00057969) bg_popup_sub_pane_cp08

0x5cf1,	// (0x000531ad) field_vitu_entry_pane_t1_ParamLimits

0x5cf1,	// (0x000531ad) field_vitu_entry_pane_t1

0xd1c4,	// (0x0005a680) field_vitu_entry_pane_t2_ParamLimits

0xd1c4,	// (0x0005a680) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0005ccdc) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0005ccdc) field_vitu_entry_pane_t

0xd1e1,	// (0x0005a69d) bg_button_pane_cp05_ParamLimits

0xd1e1,	// (0x0005a69d) bg_button_pane_cp05

0x5d10,	// (0x000531cc) cell_vitu_itu_pane_g1

0x5d28,	// (0x000531e4) cell_vitu_itu_pane_t1_ParamLimits

0x5d28,	// (0x000531e4) cell_vitu_itu_pane_t1

0x5d3a,	// (0x000531f6) cell_vitu_itu_pane_t2_ParamLimits

0x5d3a,	// (0x000531f6) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0005cce1) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0005cce1) cell_vitu_itu_pane_t

0xd1ef,	// (0x0005a6ab) bg_button_pane_cp07

0x5d7d,	// (0x00053239) cell_vitu_function_pane_g1

0x9b7b,	// (0x00057037) main_calc_pane_g1

0x0cbc,	// (0x0004e178) aid_visual_content_pane

0x9628,	// (0x00056ae4) main_vradio_pane

0x5d86,	// (0x00053242) main_vradio_pane_g1_ParamLimits

0x5d86,	// (0x00053242) main_vradio_pane_g1

0xd1f9,	// (0x0005a6b5) main_vradio_pane_g2_ParamLimits

0xd1f9,	// (0x0005a6b5) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0005cce8) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0005cce8) main_vradio_pane_g

0x5d9f,	// (0x0005325b) main_vradio_pane_t1_ParamLimits

0x5d9f,	// (0x0005325b) main_vradio_pane_t1

0x5db4,	// (0x00053270) main_vradio_pane_t2_ParamLimits

0x5db4,	// (0x00053270) main_vradio_pane_t2

0xd206,	// (0x0005a6c2) main_vradio_pane_t3_ParamLimits

0xd206,	// (0x0005a6c2) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0005cced) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0005cced) main_vradio_pane_t

0x5dc9,	// (0x00053285) vradio_rocker_control_pane_ParamLimits

0x5dc9,	// (0x00053285) vradio_rocker_control_pane

0x5ddb,	// (0x00053297) vradio_station_info_pane_ParamLimits

0x5ddb,	// (0x00053297) vradio_station_info_pane

0xd21a,	// (0x0005a6d6) vradio_frequency_info_pane_ParamLimits

0xd21a,	// (0x0005a6d6) vradio_frequency_info_pane

0xcbab,	// (0x0005a067) vradio_station_info_pane_g1

0xd229,	// (0x0005a6e5) vradio_station_info_pane_t1_ParamLimits

0xd229,	// (0x0005a6e5) vradio_station_info_pane_t1

0xd24b,	// (0x0005a707) vradio_station_info_pane_t2_ParamLimits

0xd24b,	// (0x0005a707) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0005ccf4) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0005ccf4) vradio_station_info_pane_t

0xd25d,	// (0x0005a719) vradio_tuning_pane

0xd265,	// (0x0005a721) vradio_rocker_control_pane_g1

0xd26d,	// (0x0005a729) vradio_rocker_control_pane_g2

0xd275,	// (0x0005a731) vradio_rocker_control_pane_g3

0xd27d,	// (0x0005a739) vradio_rocker_control_pane_g4

0xd285,	// (0x0005a741) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0005ccf9) vradio_rocker_control_pane_g

0x5ded,	// (0x000532a9) vradio_frequency_info_pane_g1

0xd28d,	// (0x0005a749) vradio_frequency_info_pane_t1_ParamLimits

0xd28d,	// (0x0005a749) vradio_frequency_info_pane_t1

0x5df7,	// (0x000532b3) vradio_tuning_pane_g1

0x5e02,	// (0x000532be) vradio_tuning_pane_t1

0x964e,	// (0x00056b0a) area_side_right_pane_ParamLimits

0x964e,	// (0x00056b0a) area_side_right_pane

0xc75c,	// (0x00059c18) status_small_pane_g1

0xc764,	// (0x00059c20) status_small_pane_g2

0xc76d,	// (0x00059c29) status_small_pane_g3

0xc776,	// (0x00059c32) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0005cab4) status_small_pane_g

0xc77f,	// (0x00059c3b) status_small_pane_t1

0x9628,	// (0x00056ae4) main_video3_pane

0xd2a1,	// (0x0005a75d) cams_zoom_vslider_pane

0xd2a9,	// (0x0005a765) image3_wide_pane_ParamLimits

0xd2a9,	// (0x0005a765) image3_wide_pane

0xd2c3,	// (0x0005a77f) image3_wide_small_pane

0xd2cf,	// (0x0005a78b) main_video3_pane_g1_ParamLimits

0xd2cf,	// (0x0005a78b) main_video3_pane_g1

0xd2eb,	// (0x0005a7a7) main_video3_pane_g2_ParamLimits

0xd2eb,	// (0x0005a7a7) main_video3_pane_g2

0x0001,

0xf848,	// (0x0005cd04) main_video3_pane_g_ParamLimits

0xf848,	// (0x0005cd04) main_video3_pane_g

0xd307,	// (0x0005a7c3) main_video3_pane_t1_ParamLimits

0xd307,	// (0x0005a7c3) main_video3_pane_t1

0xd332,	// (0x0005a7ee) main_video3_pane_t2_ParamLimits

0xd332,	// (0x0005a7ee) main_video3_pane_t2

0xd35d,	// (0x0005a819) main_video3_pane_t3_ParamLimits

0xd35d,	// (0x0005a819) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0005cd09) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0005cd09) main_video3_pane_t

0xd38a,	// (0x0005a846) cams_zoom_vslider_pane_g1

0xd393,	// (0x0005a84f) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0005cd10) cams_zoom_vslider_pane_g

0xd39b,	// (0x0005a857) small_slider_vertical_pane

0xcbab,	// (0x0005a067) small_slider_vertical_pane_g1

0xcbab,	// (0x0005a067) small_slider_vertical_pane_g2

0xd3a3,	// (0x0005a85f) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0005cd15) small_slider_vertical_pane_g

0x9628,	// (0x00056ae4) main_hwr_training_pane

0xd3ac,	// (0x0005a868) hwr_training_instruct_pane_ParamLimits

0xd3ac,	// (0x0005a868) hwr_training_instruct_pane

0x5e11,	// (0x000532cd) hwr_training_navi_pane_ParamLimits

0x5e11,	// (0x000532cd) hwr_training_navi_pane

0x5e30,	// (0x000532ec) hwr_training_write_pane_ParamLimits

0x5e30,	// (0x000532ec) hwr_training_write_pane

0x9628,	// (0x00056ae4) bg_frame_shadow_pane

0xd3e3,	// (0x0005a89f) hwr_training_write_pane_g1

0xd3eb,	// (0x0005a8a7) hwr_training_write_pane_g2

0xd3f3,	// (0x0005a8af) hwr_training_write_pane_g3

0xd3fb,	// (0x0005a8b7) hwr_training_write_pane_g4

0xd403,	// (0x0005a8bf) hwr_training_write_pane_g5

0xd40b,	// (0x0005a8c7) hwr_training_write_pane_g6

0xd413,	// (0x0005a8cf) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0005cd1c) hwr_training_write_pane_g

0x9e33,	// (0x000572ef) hwr_training_navi_pane_g1_ParamLimits

0x9e33,	// (0x000572ef) hwr_training_navi_pane_g1

0x9e45,	// (0x00057301) hwr_training_navi_pane_g2_ParamLimits

0x9e45,	// (0x00057301) hwr_training_navi_pane_g2

0x9e57,	// (0x00057313) hwr_training_navi_pane_g3_ParamLimits

0x9e57,	// (0x00057313) hwr_training_navi_pane_g3

0x9e67,	// (0x00057323) hwr_training_navi_pane_g4_ParamLimits

0x9e67,	// (0x00057323) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0005cd2b) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0005cd2b) hwr_training_navi_pane_g

0x9e74,	// (0x00057330) hwr_training_navi_pane_t1

0x5e7a,	// (0x00053336) list_single_hwr_training_instruct_pane_ParamLimits

0x5e7a,	// (0x00053336) list_single_hwr_training_instruct_pane

0xd41b,	// (0x0005a8d7) list_single_hwr_training_instruct_pane_t1

0xcaeb,	// (0x00059fa7) bg_frame_shadow_pane_g1

0xd42a,	// (0x0005a8e6) bg_frame_shadow_pane_g2

0xd432,	// (0x0005a8ee) bg_frame_shadow_pane_g3

0xd43a,	// (0x0005a8f6) bg_frame_shadow_pane_g4

0xd442,	// (0x0005a8fe) bg_frame_shadow_pane_g5

0xd44a,	// (0x0005a906) bg_frame_shadow_pane_g6

0xd452,	// (0x0005a90e) bg_frame_shadow_pane_g7

0xa7ed,	// (0x00057ca9) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0005cd36) bg_frame_shadow_pane_g

0x9628,	// (0x00056ae4) main_video_tele_dialer_pane

0x5e91,	// (0x0005334d) aid_size_cell_video_keypad_ParamLimits

0x5e91,	// (0x0005334d) aid_size_cell_video_keypad

0x5eab,	// (0x00053367) grid_video_dialer_keypad_pane_ParamLimits

0x5eab,	// (0x00053367) grid_video_dialer_keypad_pane

0x5ef9,	// (0x000533b5) video_down_pane_cp_ParamLimits

0x5ef9,	// (0x000533b5) video_down_pane_cp

0x5f2b,	// (0x000533e7) cell_video_dialer_keypad_pane_ParamLimits

0x5f2b,	// (0x000533e7) cell_video_dialer_keypad_pane

0xd45a,	// (0x0005a916) bg_button_pane_cp08_ParamLimits

0xd45a,	// (0x0005a916) bg_button_pane_cp08

0x5f4d,	// (0x00053409) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5f4d,	// (0x00053409) cell_video_dialer_keypad_pane_g1

0x55d8,	// (0x00052a94) mup3_rocker2_pane_ParamLimits

0x55d8,	// (0x00052a94) mup3_rocker2_pane

0xcbab,	// (0x0005a067) mup3_rocker2_pane_g1

0x40b5,	// (0x00051571) main_dialer2_pane

0x9628,	// (0x00056ae4) main_mp4_pane

0x9e8a,	// (0x00057346) main_mp4_pane_g1_ParamLimits

0x9e8a,	// (0x00057346) main_mp4_pane_g1

0x9e8a,	// (0x00057346) main_mp4_pane_g2_ParamLimits

0x9e8a,	// (0x00057346) main_mp4_pane_g2

0x5f88,	// (0x00053444) main_mp4_pane_g3_ParamLimits

0x5f88,	// (0x00053444) main_mp4_pane_g3

0x9e98,	// (0x00057354) main_mp4_pane_g4_ParamLimits

0x9e98,	// (0x00057354) main_mp4_pane_g4

0x9ec0,	// (0x0005737c) main_mp4_pane_g5_ParamLimits

0x9ec0,	// (0x0005737c) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0005cd56) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0005cd56) main_mp4_pane_g

0x9f10,	// (0x000573cc) main_mp4_pane_t1_ParamLimits

0x9f10,	// (0x000573cc) main_mp4_pane_t1

0x9f6c,	// (0x00057428) main_mp4_pane_t2_ParamLimits

0x9f6c,	// (0x00057428) main_mp4_pane_t2

0xd466,	// (0x0005a922) main_mp4_pane_t3_ParamLimits

0xd466,	// (0x0005a922) main_mp4_pane_t3

0x9fbe,	// (0x0005747a) main_mp4_pane_t4_ParamLimits

0x9fbe,	// (0x0005747a) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0005cd63) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0005cd63) main_mp4_pane_t

0xa002,	// (0x000574be) mp4_progress_pane_ParamLimits

0xa002,	// (0x000574be) mp4_progress_pane

0xa04c,	// (0x00057508) mp4_rocker_pane_ParamLimits

0xa04c,	// (0x00057508) mp4_rocker_pane

0xd48e,	// (0x0005a94a) mp4_progress_pane_t1

0xd4a7,	// (0x0005a963) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0005cd6c) mp4_progress_pane_t

0xd4c0,	// (0x0005a97c) mup_progress_pane_cp04

0xcbab,	// (0x0005a067) mp4_rocker_pane_g1

0x5fc4,	// (0x00053480) aid_cell_size_keypad2_ParamLimits

0x5fc4,	// (0x00053480) aid_cell_size_keypad2

0x5fda,	// (0x00053496) dialer2_ne_pane_ParamLimits

0x5fda,	// (0x00053496) dialer2_ne_pane

0x5ff4,	// (0x000534b0) grid_dialer2_keypad_pane_ParamLimits

0x5ff4,	// (0x000534b0) grid_dialer2_keypad_pane

0xc98e,	// (0x00059e4a) bg_popup_call_pane_cp07_ParamLimits

0xc98e,	// (0x00059e4a) bg_popup_call_pane_cp07

0x6012,	// (0x000534ce) dialer2_ne_pane_t1_ParamLimits

0x6012,	// (0x000534ce) dialer2_ne_pane_t1

0x604f,	// (0x0005350b) cell_dialer2_keypad_pane_ParamLimits

0x604f,	// (0x0005350b) cell_dialer2_keypad_pane

0xd4de,	// (0x0005a99a) bg_button_pane_pane_cp04_ParamLimits

0xd4de,	// (0x0005a99a) bg_button_pane_pane_cp04

0x6071,	// (0x0005352d) cell_dialer2_keypad_pane_g1_ParamLimits

0x6071,	// (0x0005352d) cell_dialer2_keypad_pane_g1

0x1e62,	// (0x0004f31e) aid_placing_vt_set_content_ParamLimits

0x1e62,	// (0x0004f31e) aid_placing_vt_set_content

0x1e8a,	// (0x0004f346) aid_placing_vt_set_title_ParamLimits

0x1e8a,	// (0x0004f346) aid_placing_vt_set_title

0x9628,	// (0x00056ae4) main_image3_pane

0x6137,	// (0x000535f3) area_side_right_pane_cp01_ParamLimits

0x6137,	// (0x000535f3) area_side_right_pane_cp01

0x9e8a,	// (0x00057346) main_image3_pane_g1_ParamLimits

0x9e8a,	// (0x00057346) main_image3_pane_g1

0x614e,	// (0x0005360a) main_image3_pane_g2_ParamLimits

0x614e,	// (0x0005360a) main_image3_pane_g2

0x6176,	// (0x00053632) main_image3_pane_g3_ParamLimits

0x6176,	// (0x00053632) main_image3_pane_g3

0x61a0,	// (0x0005365c) main_image3_pane_g4_ParamLimits

0x61a0,	// (0x0005365c) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0005cd7b) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0005cd7b) main_image3_pane_g

0x61ca,	// (0x00053686) main_image3_pane_t1_ParamLimits

0x61ca,	// (0x00053686) main_image3_pane_t1

0x6222,	// (0x000536de) main_image3_pane_t2_ParamLimits

0x6222,	// (0x000536de) main_image3_pane_t2

0x6274,	// (0x00053730) main_image3_pane_t3_ParamLimits

0x6274,	// (0x00053730) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0005cd84) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0005cd84) main_image3_pane_t

0xa4ad,	// (0x00057969) grid_sctrl_middle_pane_cp01_ParamLimits

0xa4ad,	// (0x00057969) grid_sctrl_middle_pane_cp01

0x62fc,	// (0x000537b8) cell_sctrl_middle_pane_cp01_ParamLimits

0x62fc,	// (0x000537b8) cell_sctrl_middle_pane_cp01

0x6319,	// (0x000537d5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6319,	// (0x000537d5) cell_sctrl_middle_pane_cp01_g1

0x9628,	// (0x00056ae4) main_call4_pane

0x632f,	// (0x000537eb) aid_size_button_call4_ParamLimits

0x632f,	// (0x000537eb) aid_size_button_call4

0x6360,	// (0x0005381c) call4_windows_pane_ParamLimits

0x6360,	// (0x0005381c) call4_windows_pane

0x6380,	// (0x0005383c) grid_call4_button_pane_ParamLimits

0x6380,	// (0x0005383c) grid_call4_button_pane

0xd4ea,	// (0x0005a9a6) call4_windows_conf_pane

0xd4ff,	// (0x0005a9bb) popup_call4_audio_first_window_ParamLimits

0xd4ff,	// (0x0005a9bb) popup_call4_audio_first_window

0xd54b,	// (0x0005aa07) popup_call4_audio_second_window_ParamLimits

0xd54b,	// (0x0005aa07) popup_call4_audio_second_window

0xd55f,	// (0x0005aa1b) popup_call4_audio_wait_window_ParamLimits

0xd55f,	// (0x0005aa1b) popup_call4_audio_wait_window

0x63ad,	// (0x00053869) cell_call4_button_pane_ParamLimits

0x63ad,	// (0x00053869) cell_call4_button_pane

0x63d6,	// (0x00053892) bg_button_pane_cp09_ParamLimits

0x63d6,	// (0x00053892) bg_button_pane_cp09

0x63e2,	// (0x0005389e) cell_call4_button_pane_g1_ParamLimits

0x63e2,	// (0x0005389e) cell_call4_button_pane_g1

0x6408,	// (0x000538c4) cell_call4_button_pane_t1_ParamLimits

0x6408,	// (0x000538c4) cell_call4_button_pane_t1

0xd5a7,	// (0x0005aa63) popup_call4_audio_conf_window_ParamLimits

0xd5a7,	// (0x0005aa63) popup_call4_audio_conf_window

0x5638,	// (0x00052af4) mup3_progress_pane_t1_ParamLimits

0x5657,	// (0x00052b13) mup3_progress_pane_t2_ParamLimits

0xce86,	// (0x0005a342) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0005cc58) mup3_progress_pane_t_ParamLimits

0xcea3,	// (0x0005a35f) mup_progress_pane_cp03_ParamLimits

0x5c44,	// (0x00053100) mup3_control_keys_pane_g4_copy1

0xa030,	// (0x000574ec) mp4_rocker2_pane_ParamLimits

0xa030,	// (0x000574ec) mp4_rocker2_pane

0xd5bb,	// (0x0005aa77) mp4_rocker2_pane_g1

0xd5c3,	// (0x0005aa7f) mp4_rocker2_pane_g2

0xa09e,	// (0x0005755a) mp4_rocker2_pane_g3

0xa0a6,	// (0x00057562) mp4_rocker2_pane_g4

0xa0ae,	// (0x0005756a) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0005cd8d) mp4_rocker2_pane_g

0x9628,	// (0x00056ae4) main_camera4_pane

0x9628,	// (0x00056ae4) main_video4_pane

0x5ec7,	// (0x00053383) main_video_tele_dialer_pane_t1_ParamLimits

0x5ec7,	// (0x00053383) main_video_tele_dialer_pane_t1

0x5ee0,	// (0x0005339c) main_video_tele_dialer_pane_t2_ParamLimits

0x5ee0,	// (0x0005339c) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0005cd47) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0005cd47) main_video_tele_dialer_pane_t

0x6446,	// (0x00053902) cam4_autofocus_pane_ParamLimits

0x6446,	// (0x00053902) cam4_autofocus_pane

0x645c,	// (0x00053918) cam4_image_uncrop_pane_ParamLimits

0x645c,	// (0x00053918) cam4_image_uncrop_pane

0x6476,	// (0x00053932) cam4_indicators_pane_ParamLimits

0x6476,	// (0x00053932) cam4_indicators_pane

0x64a1,	// (0x0005395d) main_camera4_pane_g1_ParamLimits

0x64a1,	// (0x0005395d) main_camera4_pane_g1

0x64b3,	// (0x0005396f) main_camera4_pane_g2_ParamLimits

0x64b3,	// (0x0005396f) main_camera4_pane_g2

0x64c6,	// (0x00053982) main_camera4_pane_g3_ParamLimits

0x64c6,	// (0x00053982) main_camera4_pane_g3

0x64d9,	// (0x00053995) main_camera4_pane_g4_ParamLimits

0x64d9,	// (0x00053995) main_camera4_pane_g4

0x64ec,	// (0x000539a8) main_camera4_pane_g5_ParamLimits

0x64ec,	// (0x000539a8) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0005cd98) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0005cd98) main_camera4_pane_g

0x6510,	// (0x000539cc) main_camera4_pane_t1_ParamLimits

0x6510,	// (0x000539cc) main_camera4_pane_t1

0xce0b,	// (0x0005a2c7) bg_tb_trans_pane_cp06

0xa0da,	// (0x00057596) cam4_indicators_pane_g1

0xa0eb,	// (0x000575a7) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0005cdb3) cam4_indicators_pane_g

0xa109,	// (0x000575c5) cam4_indicators_pane_t1

0x6574,	// (0x00053a30) main_video4_pane_g1_ParamLimits

0x6574,	// (0x00053a30) main_video4_pane_g1

0x6583,	// (0x00053a3f) main_video4_pane_g2_ParamLimits

0x6583,	// (0x00053a3f) main_video4_pane_g2

0x6592,	// (0x00053a4e) main_video4_pane_g3_ParamLimits

0x6592,	// (0x00053a4e) main_video4_pane_g3

0x65a1,	// (0x00053a5d) main_video4_pane_g4_ParamLimits

0x65a1,	// (0x00053a5d) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0005cdba) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0005cdba) main_video4_pane_g

0x65bf,	// (0x00053a7b) vid4_indicators_pane_ParamLimits

0x65bf,	// (0x00053a7b) vid4_indicators_pane

0x65ed,	// (0x00053aa9) video4_image_uncrop_cif_pane_ParamLimits

0x65ed,	// (0x00053aa9) video4_image_uncrop_cif_pane

0x6607,	// (0x00053ac3) video4_image_uncrop_nhd_pane_ParamLimits

0x6607,	// (0x00053ac3) video4_image_uncrop_nhd_pane

0x645c,	// (0x00053918) video4_image_uncrop_vga_pane_ParamLimits

0x645c,	// (0x00053918) video4_image_uncrop_vga_pane

0xa4ad,	// (0x00057969) bg_tb_trans_pane_cp07

0xa133,	// (0x000575ef) vid4_indicators_pane_g1

0xa147,	// (0x00057603) vid4_indicators_pane_g2

0xa15b,	// (0x00057617) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0005cdc5) vid4_indicators_pane_g

0xa188,	// (0x00057644) vid4_indicators_pane_t1

0x661b,	// (0x00053ad7) cam4_autofocus_pane_g1

0x6623,	// (0x00053adf) cam4_autofocus_pane_g2

0x662b,	// (0x00053ae7) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0005cdd0) cam4_autofocus_pane_g

0x6633,	// (0x00053aef) cam4_autofocus_pane_g3_copy1

0x5f0f,	// (0x000533cb) video_down_pane_cp_t1

0x5f1d,	// (0x000533d9) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0005cd4c) video_down_pane_cp_t

0xa4ad,	// (0x00057969) popup_vitu2_window_ParamLimits

0xa4ad,	// (0x00057969) popup_vitu2_window

0x663b,	// (0x00053af7) aid_size_cell2_itu2_ParamLimits

0x663b,	// (0x00053af7) aid_size_cell2_itu2

0x6661,	// (0x00053b1d) aid_size_cell_itu2_ParamLimits

0x6661,	// (0x00053b1d) aid_size_cell_itu2

0x66bd,	// (0x00053b79) bg_popup_window_pane_cp09_ParamLimits

0x66bd,	// (0x00053b79) bg_popup_window_pane_cp09

0x66cb,	// (0x00053b87) field_vitu2_entry_pane_ParamLimits

0x66cb,	// (0x00053b87) field_vitu2_entry_pane

0x66f1,	// (0x00053bad) grid_vitu2_function_pane_ParamLimits

0x66f1,	// (0x00053bad) grid_vitu2_function_pane

0x6742,	// (0x00053bfe) grid_vitu2_itu_pane_ParamLimits

0x6742,	// (0x00053bfe) grid_vitu2_itu_pane

0x67d3,	// (0x00053c8f) cell_vitu2_itu_pane_ParamLimits

0x67d3,	// (0x00053c8f) cell_vitu2_itu_pane

0x67f7,	// (0x00053cb3) cell_vitu2_function_pane_ParamLimits

0x67f7,	// (0x00053cb3) cell_vitu2_function_pane

0xd5cb,	// (0x0005aa87) bg_popup_call_pane_cp08_ParamLimits

0xd5cb,	// (0x0005aa87) bg_popup_call_pane_cp08

0xd5e2,	// (0x0005aa9e) field_vitu2_entry_pane_g1

0xd5ee,	// (0x0005aaaa) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0005cdd7) field_vitu2_entry_pane_g

0x0176,	// (0x0004d632) field_vitu2_entry_pane_t1_ParamLimits

0x0176,	// (0x0004d632) field_vitu2_entry_pane_t1

0x6836,	// (0x00053cf2) field_vitu2_entry_pane_t2_ParamLimits

0x6836,	// (0x00053cf2) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0005cdde) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0005cdde) field_vitu2_entry_pane_t

0x6853,	// (0x00053d0f) bg_button_pane_cp010_ParamLimits

0x6853,	// (0x00053d0f) bg_button_pane_cp010

0x6861,	// (0x00053d1d) cell_vitu2_itu_pane_g1

0x688c,	// (0x00053d48) cell_vitu2_itu_pane_t1_ParamLimits

0x688c,	// (0x00053d48) cell_vitu2_itu_pane_t1

0x01a3,	// (0x0004d65f) cell_vitu2_itu_pane_t2_ParamLimits

0x01a3,	// (0x0004d65f) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0005cde8) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0005cde8) cell_vitu2_itu_pane_t

0xa4ad,	// (0x00057969) bg_button_pane_cp011

0x68ea,	// (0x00053da6) cell_vitu2_function_pane_g1

0x9628,	// (0x00056ae4) main_myfav_hc_pane

0x62c4,	// (0x00053780) popup_image3_note_pane_ParamLimits

0x62c4,	// (0x00053780) popup_image3_note_pane

0x62e0,	// (0x0005379c) popup_image3_tool_bar_pane_ParamLimits

0x62e0,	// (0x0005379c) popup_image3_tool_bar_pane

0x0227,	// (0x0004d6e3) cell_vitu2_itu_pane_t3_ParamLimits

0x0227,	// (0x0004d6e3) cell_vitu2_itu_pane_t3

0x9628,	// (0x00056ae4) bg_popup_trans_pane

0xd610,	// (0x0005aacc) grid_image3_tool_bar_pane

0xd61a,	// (0x0005aad6) bg_popup_trans_pane_g1

0xab42,	// (0x00057ffe) bg_popup_trans_pane_g2

0xd622,	// (0x0005aade) bg_popup_trans_pane_g3

0xd62a,	// (0x0005aae6) bg_popup_trans_pane_g4

0xd632,	// (0x0005aaee) bg_popup_trans_pane_g5

0xd63a,	// (0x0005aaf6) bg_popup_trans_pane_g6

0xd642,	// (0x0005aafe) bg_popup_trans_pane_g7

0xd64a,	// (0x0005ab06) bg_popup_trans_pane_g8

0xab22,	// (0x00057fde) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0005cdef) bg_popup_trans_pane_g

0xd652,	// (0x0005ab0e) cell_image3_tool_bar_pane_ParamLimits

0xd652,	// (0x0005ab0e) cell_image3_tool_bar_pane

0xcbab,	// (0x0005a067) cell_image3_tool_bar_pane_g1

0x9628,	// (0x00056ae4) bg_popup_trans_pane_cp1

0xd666,	// (0x0005ab22) popup_image3_note_pane_t1

0xd674,	// (0x0005ab30) popup_image3_note_pane_t2

0xd682,	// (0x0005ab3e) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0005ce02) popup_image3_note_pane_t

0xd690,	// (0x0005ab4c) popup_image3_note_pane_t3_copy1

0x68fe,	// (0x00053dba) bg_myfav_hc_instruction_pane_ParamLimits

0x68fe,	// (0x00053dba) bg_myfav_hc_instruction_pane

0x6914,	// (0x00053dd0) cell_myfav_contact_pane_ParamLimits

0x6914,	// (0x00053dd0) cell_myfav_contact_pane

0x6932,	// (0x00053dee) cell_myfav_contact_pane_cp1_ParamLimits

0x6932,	// (0x00053dee) cell_myfav_contact_pane_cp1

0x694a,	// (0x00053e06) cell_myfav_contact_pane_cp2_ParamLimits

0x694a,	// (0x00053e06) cell_myfav_contact_pane_cp2

0x6962,	// (0x00053e1e) cell_myfav_contact_pane_cp3_ParamLimits

0x6962,	// (0x00053e1e) cell_myfav_contact_pane_cp3

0x6979,	// (0x00053e35) cell_myfav_contact_pane_cp4_ParamLimits

0x6979,	// (0x00053e35) cell_myfav_contact_pane_cp4

0x6991,	// (0x00053e4d) cell_myfav_contact_pane_cp5_ParamLimits

0x6991,	// (0x00053e4d) cell_myfav_contact_pane_cp5

0x69a5,	// (0x00053e61) cell_myfav_contact_pane_cp6_ParamLimits

0x69a5,	// (0x00053e61) cell_myfav_contact_pane_cp6

0x69bb,	// (0x00053e77) cell_myfav_contact_pane_cp7_ParamLimits

0x69bb,	// (0x00053e77) cell_myfav_contact_pane_cp7

0xd69e,	// (0x0005ab5a) listscroll_gen_pane_cp05

0x69d5,	// (0x00053e91) main_myfav_hc_pane_g1_ParamLimits

0x69d5,	// (0x00053e91) main_myfav_hc_pane_g1

0x69ef,	// (0x00053eab) main_myfav_hc_pane_g2_ParamLimits

0x69ef,	// (0x00053eab) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0005ce09) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0005ce09) main_myfav_hc_pane_g

0x6a21,	// (0x00053edd) main_myfav_hc_pane_t1_ParamLimits

0x6a21,	// (0x00053edd) main_myfav_hc_pane_t1

0xd6a7,	// (0x0005ab63) main_myfav_hc_pane_t2_ParamLimits

0xd6a7,	// (0x0005ab63) main_myfav_hc_pane_t2

0xd6b9,	// (0x0005ab75) main_myfav_hc_pane_t3_ParamLimits

0xd6b9,	// (0x0005ab75) main_myfav_hc_pane_t3

0x6a38,	// (0x00053ef4) main_myfav_hc_pane_t4_ParamLimits

0x6a38,	// (0x00053ef4) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0005ce10) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0005ce10) main_myfav_hc_pane_t

0xcbab,	// (0x0005a067) bg_myfav_hc_instruction_pane_g1

0xd6cb,	// (0x0005ab87) cell_myfav_contact_pane_g1_ParamLimits

0xd6cb,	// (0x0005ab87) cell_myfav_contact_pane_g1

0xd6cb,	// (0x0005ab87) cell_myfav_contact_pane_g2_ParamLimits

0xd6cb,	// (0x0005ab87) cell_myfav_contact_pane_g2

0xd6d7,	// (0x0005ab93) cell_myfav_contact_pane_g3_ParamLimits

0xd6d7,	// (0x0005ab93) cell_myfav_contact_pane_g3

0xce70,	// (0x0005a32c) cell_myfav_contact_pane_g4_ParamLimits

0xce70,	// (0x0005a32c) cell_myfav_contact_pane_g4

0xd6e4,	// (0x0005aba0) cell_myfav_contact_pane_g5_ParamLimits

0xd6e4,	// (0x0005aba0) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0005ce1b) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0005ce1b) cell_myfav_contact_pane_g

0x6a09,	// (0x00053ec5) main_myfav_hc_pane_g3_ParamLimits

0x6a09,	// (0x00053ec5) main_myfav_hc_pane_g3

0x0e07,	// (0x0004e2c3) popup_adpt_find_window

0x6a60,	// (0x00053f1c) afind_page_pane_ParamLimits

0x6a60,	// (0x00053f1c) afind_page_pane

0x6a75,	// (0x00053f31) aid_size_cell_afind_ParamLimits

0x6a75,	// (0x00053f31) aid_size_cell_afind

0x6a93,	// (0x00053f4f) bg_popup_sub_pane_cp09_ParamLimits

0x6a93,	// (0x00053f4f) bg_popup_sub_pane_cp09

0x6aa0,	// (0x00053f5c) find_pane_cp01_ParamLimits

0x6aa0,	// (0x00053f5c) find_pane_cp01

0xd6f0,	// (0x0005abac) grid_afind_control_pane_ParamLimits

0xd6f0,	// (0x0005abac) grid_afind_control_pane

0x6aad,	// (0x00053f69) grid_afind_pane_ParamLimits

0x6aad,	// (0x00053f69) grid_afind_pane

0x6acc,	// (0x00053f88) cell_afind_pane_ParamLimits

0x6acc,	// (0x00053f88) cell_afind_pane

0xcbab,	// (0x0005a067) afind_page_pane_g1

0x6b2d,	// (0x00053fe9) afind_page_pane_g2

0x6b36,	// (0x00053ff2) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0005ce26) afind_page_pane_g

0x6b3f,	// (0x00053ffb) afind_page_pane_t1

0xd704,	// (0x0005abc0) cell_afind_grid_control_pane_ParamLimits

0xd704,	// (0x0005abc0) cell_afind_grid_control_pane

0xd4de,	// (0x0005a99a) bg_button_pane_cp69_ParamLimits

0xd4de,	// (0x0005a99a) bg_button_pane_cp69

0x6b5f,	// (0x0005401b) cell_afind_pane_g1_ParamLimits

0x6b5f,	// (0x0005401b) cell_afind_pane_g1

0x6b6c,	// (0x00054028) cell_afind_pane_t1_ParamLimits

0x6b6c,	// (0x00054028) cell_afind_pane_t1

0xa93b,	// (0x00057df7) bg_button_pane_cp72

0xd713,	// (0x0005abcf) cell_afind_grid_control_pane_g1

0x3b73,	// (0x0005102f) aid_image_placing_area_ParamLimits

0x3b73,	// (0x0005102f) aid_image_placing_area

0xd1ac,	// (0x0005a668) field_vitu_entry_pane_g1_ParamLimits

0xd1ac,	// (0x0005a668) field_vitu_entry_pane_g1

0xd1b8,	// (0x0005a674) field_vitu_entry_pane_g2_ParamLimits

0xd1b8,	// (0x0005a674) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0005ccd7) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0005ccd7) field_vitu_entry_pane_g

0x5d10,	// (0x000531cc) cell_vitu_itu_pane_g1_ParamLimits

0x5d60,	// (0x0005321c) cell_vitu_itu_pane_t3_ParamLimits

0x5d60,	// (0x0005321c) cell_vitu_itu_pane_t3

0xd48e,	// (0x0005a94a) mp4_progress_pane_t1_ParamLimits

0xd4a7,	// (0x0005a963) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0005cd6c) mp4_progress_pane_t_ParamLimits

0xd4c0,	// (0x0005a97c) mup_progress_pane_cp04_ParamLimits

0x6a4c,	// (0x00053f08) main_myfav_hc_pane_t5_ParamLimits

0x6a4c,	// (0x00053f08) main_myfav_hc_pane_t5

0x9646,	// (0x00056b02) aid_zoom_text_primary

0x0e07,	// (0x0004e2c3) popup_adpt_find_window_ParamLimits

0xa4ad,	// (0x00057969) main_cam_set_pane

0x648d,	// (0x00053949) cam4_zoom_pane_ParamLimits

0x648d,	// (0x00053949) cam4_zoom_pane

0x6b7e,	// (0x0005403a) main_cam_set_pane_g1_ParamLimits

0x6b7e,	// (0x0005403a) main_cam_set_pane_g1

0x6b8c,	// (0x00054048) main_cam_set_pane_g2_ParamLimits

0x6b8c,	// (0x00054048) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0005ce2d) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0005ce2d) main_cam_set_pane_g

0x6bad,	// (0x00054069) main_cam_set_pane_t1_ParamLimits

0x6bad,	// (0x00054069) main_cam_set_pane_t1

0x6bc8,	// (0x00054084) main_cset_listscroll_pane_ParamLimits

0x6bc8,	// (0x00054084) main_cset_listscroll_pane

0x6be8,	// (0x000540a4) main_cset_slider_pane_ParamLimits

0x6be8,	// (0x000540a4) main_cset_slider_pane

0xd724,	// (0x0005abe0) main_cset_list_pane_ParamLimits

0xd724,	// (0x0005abe0) main_cset_list_pane

0xd734,	// (0x0005abf0) scroll_pane_cp028

0x6c0e,	// (0x000540ca) aid_area_touch_slider

0x6c2a,	// (0x000540e6) cset_slider_pane

0x6c54,	// (0x00054110) main_cset_slider_pane_g1

0x6c69,	// (0x00054125) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0005ce32) main_cset_slider_pane_g

0xd76d,	// (0x0005ac29) main_cset_slider_pane_t1

0x6d25,	// (0x000541e1) main_cset_slider_pane_t2

0x6d3f,	// (0x000541fb) main_cset_slider_pane_t3

0x6d59,	// (0x00054215) main_cset_slider_pane_t4

0x6d73,	// (0x0005422f) main_cset_slider_pane_t5

0x6d8d,	// (0x00054249) main_cset_slider_pane_t6

0x6da2,	// (0x0005425e) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0005ce57) main_cset_slider_pane_t

0x6ea6,	// (0x00054362) cset_list_set_pane_ParamLimits

0x6ea6,	// (0x00054362) cset_list_set_pane

0x6eb9,	// (0x00054375) aid_position_infowindow_above

0x6ec1,	// (0x0005437d) aid_position_infowindow_below

0x6ec9,	// (0x00054385) cset_list_set_pane_g1_ParamLimits

0x6ec9,	// (0x00054385) cset_list_set_pane_g1

0x027f,	// (0x0004d73b) cset_list_set_pane_g3_ParamLimits

0x027f,	// (0x0004d73b) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0005ce76) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0005ce76) cset_list_set_pane_g

0x6ed5,	// (0x00054391) cset_list_set_pane_t1_ParamLimits

0x6ed5,	// (0x00054391) cset_list_set_pane_t1

0xa4ad,	// (0x00057969) list_highlight_pane_cp021_ParamLimits

0xa4ad,	// (0x00057969) list_highlight_pane_cp021

0xb4cc,	// (0x00058988) cset_slider_pane_g1

0xb4de,	// (0x0005899a) cset_slider_pane_g2

0xb4d5,	// (0x00058991) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0005ce7b) cset_slider_pane_g

0xa19f,	// (0x0005765b) aid_area_touch_cam4_zoom

0xa1a7,	// (0x00057663) cam4_zoom_cont_pane

0xa1af,	// (0x0005766b) cam4_zoom_pane_g1

0xa1b7,	// (0x00057673) cam4_zoom_pane_g2

0x6eea,	// (0x000543a6) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0005ce82) cam4_zoom_pane_g

0xd80d,	// (0x0005acc9) cam4_zoom_cont_pane_g1

0xd816,	// (0x0005acd2) cam4_zoom_cont_pane_g2

0xd81f,	// (0x0005acdb) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0005ce89) cam4_zoom_cont_pane_g

0x634d,	// (0x00053809) call4_image_pane_ParamLimits

0x634d,	// (0x00053809) call4_image_pane

0xd4ea,	// (0x0005a9a6) call4_windows_conf_pane_ParamLimits

0xd529,	// (0x0005a9e5) popup_call4_audio_in_window_ParamLimits

0xd529,	// (0x0005a9e5) popup_call4_audio_in_window

0x9628,	// (0x00056ae4) bg_popup_call2_act_pane_cp02

0xd59f,	// (0x0005aa5b) call4_list_conf_pane

0xcbab,	// (0x0005a067) call4_image_pane_g1

0xcbab,	// (0x0005a067) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0005cb98) call4_image_pane_g

0xd828,	// (0x0005ace4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd828,	// (0x0005ace4) list_single_graphic_popup_conf4_pane

0x9628,	// (0x00056ae4) list_highlight_pane_cp022

0xd83b,	// (0x0005acf7) list_single_graphic_popup_conf4_pane_g1

0xb07c,	// (0x00058538) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0005ce90) list_single_graphic_popup_conf4_pane_g

0xd843,	// (0x0005acff) list_single_graphic_popup_conf4_pane_t1

0x1fae,	// (0x0004f46a) popup_vtel_slider_window_ParamLimits

0x1fae,	// (0x0004f46a) popup_vtel_slider_window

0xd4cc,	// (0x0005a988) dialer2_ne_pane_t2_ParamLimits

0xd4cc,	// (0x0005a988) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0005cd71) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0005cd71) dialer2_ne_pane_t

0xc98e,	// (0x00059e4a) bg_popup_sub_pane_cp010_ParamLimits

0xc98e,	// (0x00059e4a) bg_popup_sub_pane_cp010

0x6ef2,	// (0x000543ae) popup_vtel_slider_window_g1_ParamLimits

0x6ef2,	// (0x000543ae) popup_vtel_slider_window_g1

0x6f05,	// (0x000543c1) popup_vtel_slider_window_g2_ParamLimits

0x6f05,	// (0x000543c1) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0005ce95) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0005ce95) popup_vtel_slider_window_g

0x6f5b,	// (0x00054417) vtel_slider_pane_ParamLimits

0x6f5b,	// (0x00054417) vtel_slider_pane

0x6f7d,	// (0x00054439) vtel_slider_pane_g1_ParamLimits

0x6f7d,	// (0x00054439) vtel_slider_pane_g1

0x6f91,	// (0x0005444d) vtel_slider_pane_g2_ParamLimits

0x6f91,	// (0x0005444d) vtel_slider_pane_g2

0x6fa9,	// (0x00054465) vtel_slider_pane_g3_ParamLimits

0x6fa9,	// (0x00054465) vtel_slider_pane_g3

0x6f7d,	// (0x00054439) vtel_slider_pane_g4_ParamLimits

0x6f7d,	// (0x00054439) vtel_slider_pane_g4

0x6fbf,	// (0x0005447b) vtel_slider_pane_g5_ParamLimits

0x6fbf,	// (0x0005447b) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0005ce9e) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0005ce9e) vtel_slider_pane_g

0xa4ad,	// (0x00057969) main_gallery2_pane

0x668d,	// (0x00053b49) aid_size_row_itut2_dropdow_list_ParamLimits

0x668d,	// (0x00053b49) aid_size_row_itut2_dropdow_list

0x6719,	// (0x00053bd5) grid_vitu2_function_top_pane_ParamLimits

0x6719,	// (0x00053bd5) grid_vitu2_function_top_pane

0x677e,	// (0x00053c3a) popup_vitu2_dropdown_list_window_ParamLimits

0x677e,	// (0x00053c3a) popup_vitu2_dropdown_list_window

0x67a7,	// (0x00053c63) popup_vitu2_match_list_window

0x6fe3,	// (0x0005449f) cell_vitu2_function_top_pane_ParamLimits

0x6fe3,	// (0x0005449f) cell_vitu2_function_top_pane

0x7001,	// (0x000544bd) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7001,	// (0x000544bd) cell_vitu2_function_top_pane_cp01

0x701f,	// (0x000544db) cell_vitu2_function_top_wide_pane_ParamLimits

0x701f,	// (0x000544db) cell_vitu2_function_top_wide_pane

0xa4ad,	// (0x00057969) bg_button_pane_cp012

0x703d,	// (0x000544f9) cell_vitu2_function_top_pane_g1

0xa1bf,	// (0x0005767b) bg_button_pane_cp013_ParamLimits

0xa1bf,	// (0x0005767b) bg_button_pane_cp013

0x7051,	// (0x0005450d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7051,	// (0x0005450d) cell_vitu2_function_top_wide_pane_g1

0xa4ad,	// (0x00057969) bg_popup_sub_pane_cp20

0x7069,	// (0x00054525) list_vitu2_match_list_pane

0xd61a,	// (0x0005aad6) bg_popup_sub_pane_cp20_g1

0xd622,	// (0x0005aade) bg_popup_sub_pane_cp20_g2

0xab42,	// (0x00057ffe) bg_popup_sub_pane_cp20_g3

0xd62a,	// (0x0005aae6) bg_popup_sub_pane_cp20_g4

0xab22,	// (0x00057fde) bg_popup_sub_pane_cp20_g5

0xd859,	// (0x0005ad15) bg_popup_sub_pane_cp20_g6

0xd63a,	// (0x0005aaf6) bg_popup_sub_pane_cp20_g7

0xd642,	// (0x0005aafe) bg_popup_sub_pane_cp20_g8

0xd64a,	// (0x0005ab06) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0005cea9) bg_popup_sub_pane_cp20_g

0xa1db,	// (0x00057697) list_vitu2_match_list_item_pane_ParamLimits

0xa1db,	// (0x00057697) list_vitu2_match_list_item_pane

0xa1ed,	// (0x000576a9) list_vitu2_match_list_item_pane_t1

0x9628,	// (0x00056ae4) bg_popup_sub_pane_cp21

0xaf80,	// (0x0005843c) grid_vitu2_dropdown_list_pane

0x709f,	// (0x0005455b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x709f,	// (0x0005455b) cell_vitu2_dropdown_list_char_pane

0x70c0,	// (0x0005457c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x70c0,	// (0x0005457c) cell_vitu2_dropdown_list_ctrl_pane

0xd861,	// (0x0005ad1d) cell_vitu2_dropdown_list_char_pane_g1

0xd86a,	// (0x0005ad26) cell_vitu2_dropdown_list_char_pane_g2

0xd873,	// (0x0005ad2f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0005cec6) cell_vitu2_dropdown_list_char_pane_g

0x70ec,	// (0x000545a8) cell_vitu2_dropdown_list_char_pane_t1

0x70fa,	// (0x000545b6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70fa,	// (0x000545b6) cell_vitu2_dropdown_list_ctrl_pane_g1

0x710a,	// (0x000545c6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x710a,	// (0x000545c6) cell_vitu2_dropdown_list_ctrl_pane_g2

0x711b,	// (0x000545d7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x711b,	// (0x000545d7) cell_vitu2_dropdown_list_ctrl_pane_g3

0x712b,	// (0x000545e7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x712b,	// (0x000545e7) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce0b,	// (0x0005a2c7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce0b,	// (0x0005a2c7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0005cecd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0005cecd) cell_vitu2_dropdown_list_ctrl_pane_g

0x7147,	// (0x00054603) aid_size_cell_gallery2_ParamLimits

0x7147,	// (0x00054603) aid_size_cell_gallery2

0x7165,	// (0x00054621) grid_gallery2_pane_ParamLimits

0x7165,	// (0x00054621) grid_gallery2_pane

0x717f,	// (0x0005463b) scroll_pane_cp029_ParamLimits

0x717f,	// (0x0005463b) scroll_pane_cp029

0x718b,	// (0x00054647) cell_gallery2_pane_ParamLimits

0x718b,	// (0x00054647) cell_gallery2_pane

0xd87c,	// (0x0005ad38) cell_gallery2_pane_g2

0x71e7,	// (0x000546a3) cell_gallery2_pane_g3

0xd884,	// (0x0005ad40) cell_gallery2_pane_g4

0xd88c,	// (0x0005ad48) cell_gallery2_pane_g5

0xb396,	// (0x00058852) grid_highlight_pane_cp10

0x67a7,	// (0x00053c63) popup_vitu2_match_list_window_ParamLimits

0x67bc,	// (0x00053c78) popup_vitu2_query_window_ParamLimits

0x67bc,	// (0x00053c78) popup_vitu2_query_window

0x9628,	// (0x00056ae4) bg_vitu2_candi_button_pane

0xd861,	// (0x0005ad1d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd86a,	// (0x0005ad26) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd873,	// (0x0005ad2f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x02c3,	// (0x0004d77f) bg_button_pane_cp015

0x71ef,	// (0x000546ab) bg_button_pane_cp016

0x7202,	// (0x000546be) bg_button_pane_cp017

0xc7a1,	// (0x00059c5d) bg_popup_sub_pane_cp22

0xd894,	// (0x0005ad50) popup_vitu2_query_window_g1

0x02f8,	// (0x0004d7b4) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0005ced8) popup_vitu2_query_window_g

0x0317,	// (0x0004d7d3) popup_vitu2_query_window_t1_ParamLimits

0x0317,	// (0x0004d7d3) popup_vitu2_query_window_t1

0x034c,	// (0x0004d808) popup_vitu2_query_window_t2_ParamLimits

0x034c,	// (0x0004d808) popup_vitu2_query_window_t2

0x035e,	// (0x0004d81a) popup_vitu2_query_window_t3_ParamLimits

0x035e,	// (0x0004d81a) popup_vitu2_query_window_t3

0x7226,	// (0x000546e2) popup_vitu2_query_window_t4_ParamLimits

0x7226,	// (0x000546e2) popup_vitu2_query_window_t4

0x7247,	// (0x00054703) popup_vitu2_query_window_t5_ParamLimits

0x7247,	// (0x00054703) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0005cedf) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0005cedf) popup_vitu2_query_window_t

0xd71c,	// (0x0005abd8) main_cset_text_pane

0x6c0e,	// (0x000540ca) aid_area_touch_slider_ParamLimits

0x6c2a,	// (0x000540e6) cset_slider_pane_ParamLimits

0x6c54,	// (0x00054110) main_cset_slider_pane_g1_ParamLimits

0x6c69,	// (0x00054125) main_cset_slider_pane_g2_ParamLimits

0xd73d,	// (0x0005abf9) main_cset_slider_pane_g3_ParamLimits

0xd73d,	// (0x0005abf9) main_cset_slider_pane_g3

0x6c7e,	// (0x0005413a) main_cset_slider_pane_g4_ParamLimits

0x6c7e,	// (0x0005413a) main_cset_slider_pane_g4

0x6c8d,	// (0x00054149) main_cset_slider_pane_g5_ParamLimits

0x6c8d,	// (0x00054149) main_cset_slider_pane_g5

0x6c99,	// (0x00054155) main_cset_slider_pane_g6_ParamLimits

0x6c99,	// (0x00054155) main_cset_slider_pane_g6

0xf976,	// (0x0005ce32) main_cset_slider_pane_g_ParamLimits

0xd76d,	// (0x0005ac29) main_cset_slider_pane_t1_ParamLimits

0x6d25,	// (0x000541e1) main_cset_slider_pane_t2_ParamLimits

0x6d3f,	// (0x000541fb) main_cset_slider_pane_t3_ParamLimits

0x6d59,	// (0x00054215) main_cset_slider_pane_t4_ParamLimits

0x6d73,	// (0x0005422f) main_cset_slider_pane_t5_ParamLimits

0x6d8d,	// (0x00054249) main_cset_slider_pane_t6_ParamLimits

0x6da2,	// (0x0005425e) main_cset_slider_pane_t7_ParamLimits

0x6dcc,	// (0x00054288) main_cset_slider_pane_t8_ParamLimits

0x6dcc,	// (0x00054288) main_cset_slider_pane_t8

0x6df4,	// (0x000542b0) main_cset_slider_pane_t9_ParamLimits

0x6df4,	// (0x000542b0) main_cset_slider_pane_t9

0x6e1c,	// (0x000542d8) main_cset_slider_pane_t10_ParamLimits

0x6e1c,	// (0x000542d8) main_cset_slider_pane_t10

0x6e44,	// (0x00054300) main_cset_slider_pane_t11_ParamLimits

0x6e44,	// (0x00054300) main_cset_slider_pane_t11

0x6e6c,	// (0x00054328) main_cset_slider_pane_t12_ParamLimits

0x6e6c,	// (0x00054328) main_cset_slider_pane_t12

0x6e89,	// (0x00054345) main_cset_slider_pane_t13_ParamLimits

0x6e89,	// (0x00054345) main_cset_slider_pane_t13

0xf99b,	// (0x0005ce57) main_cset_slider_pane_t_ParamLimits

0x9628,	// (0x00056ae4) bg_popup_sub_pane_cp011

0xd8a0,	// (0x0005ad5c) main_cset_text_pane_g1

0xd8a8,	// (0x0005ad64) main_cset_text_pane_t1

0xd8b6,	// (0x0005ad72) main_cset_text_pane_t2

0xd8c4,	// (0x0005ad80) main_cset_text_pane_t3

0xd8d2,	// (0x0005ad8e) main_cset_text_pane_t4

0xd8e0,	// (0x0005ad9c) main_cset_text_pane_t5

0xd8ee,	// (0x0005adaa) main_cset_text_pane_t6

0xd8fc,	// (0x0005adb8) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0005ceee) main_cset_text_pane_t

0x9628,	// (0x00056ae4) main_cam4_burst_pane

0x9628,	// (0x00056ae4) main_cam5_pane

0x6b4d,	// (0x00054009) bg_button_pane_cp019

0x6b56,	// (0x00054012) bg_button_pane_cp020

0xd749,	// (0x0005ac05) main_cset_slider_pane_g7_ParamLimits

0xd749,	// (0x0005ac05) main_cset_slider_pane_g7

0xd755,	// (0x0005ac11) main_cset_slider_pane_g8_ParamLimits

0xd755,	// (0x0005ac11) main_cset_slider_pane_g8

0x6cad,	// (0x00054169) main_cset_slider_pane_g9_ParamLimits

0x6cad,	// (0x00054169) main_cset_slider_pane_g9

0x6cb9,	// (0x00054175) main_cset_slider_pane_g10_ParamLimits

0x6cb9,	// (0x00054175) main_cset_slider_pane_g10

0x6cc5,	// (0x00054181) main_cset_slider_pane_g11_ParamLimits

0x6cc5,	// (0x00054181) main_cset_slider_pane_g11

0x6cd1,	// (0x0005418d) main_cset_slider_pane_g12_ParamLimits

0x6cd1,	// (0x0005418d) main_cset_slider_pane_g12

0x6cdd,	// (0x00054199) main_cset_slider_pane_g13_ParamLimits

0x6cdd,	// (0x00054199) main_cset_slider_pane_g13

0x6ce9,	// (0x000541a5) main_cset_slider_pane_g14_ParamLimits

0x6ce9,	// (0x000541a5) main_cset_slider_pane_g14

0x6cf5,	// (0x000541b1) main_cset_slider_pane_g15_ParamLimits

0x6cf5,	// (0x000541b1) main_cset_slider_pane_g15

0xd79b,	// (0x0005ac57) main_cset_slider_pane_t14_ParamLimits

0xd79b,	// (0x0005ac57) main_cset_slider_pane_t14

0xd7d4,	// (0x0005ac90) main_cset_slider_pane_t15_ParamLimits

0xd7d4,	// (0x0005ac90) main_cset_slider_pane_t15

0x7268,	// (0x00054724) aid_cam4_burst_size_cell_ParamLimits

0x7268,	// (0x00054724) aid_cam4_burst_size_cell

0x7288,	// (0x00054744) grid_cam4_burst_pane_ParamLimits

0x7288,	// (0x00054744) grid_cam4_burst_pane

0x72c0,	// (0x0005477c) linegrid_cam4_burst_pane_ParamLimits

0x72c0,	// (0x0005477c) linegrid_cam4_burst_pane

0xd90a,	// (0x0005adc6) scroll_pane_cp30_ParamLimits

0xd90a,	// (0x0005adc6) scroll_pane_cp30

0x72e6,	// (0x000547a2) cell_cam4_burst_pane_ParamLimits

0x72e6,	// (0x000547a2) cell_cam4_burst_pane

0xd916,	// (0x0005add2) linegrid_cam4_burst_pane_g1_ParamLimits

0xd916,	// (0x0005add2) linegrid_cam4_burst_pane_g1

0x7333,	// (0x000547ef) linegrid_cam4_burst_pane_g2_ParamLimits

0x7333,	// (0x000547ef) linegrid_cam4_burst_pane_g2

0xd923,	// (0x0005addf) linegrid_cam4_burst_pane_g3_ParamLimits

0xd923,	// (0x0005addf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0005cefd) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0005cefd) linegrid_cam4_burst_pane_g

0x7344,	// (0x00054800) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7344,	// (0x00054800) linegrid_cam4_burst_pane_g3_copy1

0xd930,	// (0x0005adec) linegrid_cam4_burst_pane_g4_ParamLimits

0xd930,	// (0x0005adec) linegrid_cam4_burst_pane_g4

0x735e,	// (0x0005481a) linegrid_cam4_burst_pane_g5_ParamLimits

0x735e,	// (0x0005481a) linegrid_cam4_burst_pane_g5

0x736f,	// (0x0005482b) linegrid_cam4_burst_pane_g6_ParamLimits

0x736f,	// (0x0005482b) linegrid_cam4_burst_pane_g6

0xd93d,	// (0x0005adf9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd93d,	// (0x0005adf9) linegrid_cam4_burst_pane_g7

0x7386,	// (0x00054842) cell_cam4_burst_pane_g1

0xd956,	// (0x0005ae12) main_cam5_pane_t1_ParamLimits

0xd956,	// (0x0005ae12) main_cam5_pane_t1

0xd968,	// (0x0005ae24) main_cam5_pane_t2_ParamLimits

0xd968,	// (0x0005ae24) main_cam5_pane_t2

0xd97a,	// (0x0005ae36) main_cam5_pane_t3_ParamLimits

0xd97a,	// (0x0005ae36) main_cam5_pane_t3

0xd98c,	// (0x0005ae48) main_cam5_pane_t4_ParamLimits

0xd98c,	// (0x0005ae48) main_cam5_pane_t4

0xd9a4,	// (0x0005ae60) main_cam5_pane_t5_ParamLimits

0xd9a4,	// (0x0005ae60) main_cam5_pane_t5

0xd9b8,	// (0x0005ae74) main_cam5_pane_t6_ParamLimits

0xd9b8,	// (0x0005ae74) main_cam5_pane_t6

0xd9cc,	// (0x0005ae88) main_cam5_pane_t7_ParamLimits

0xd9cc,	// (0x0005ae88) main_cam5_pane_t7

0xd9de,	// (0x0005ae9a) main_cam5_pane_t8_ParamLimits

0xd9de,	// (0x0005ae9a) main_cam5_pane_t8

0xd9fa,	// (0x0005aeb6) main_cam5_pane_t9_ParamLimits

0xd9fa,	// (0x0005aeb6) main_cam5_pane_t9

0xda0c,	// (0x0005aec8) main_cam5_pane_t10_ParamLimits

0xda0c,	// (0x0005aec8) main_cam5_pane_t10

0xda1e,	// (0x0005aeda) main_cam5_pane_t11_ParamLimits

0xda1e,	// (0x0005aeda) main_cam5_pane_t11

0xda30,	// (0x0005aeec) main_cam5_pane_t12_ParamLimits

0xda30,	// (0x0005aeec) main_cam5_pane_t12

0xda45,	// (0x0005af01) main_cam5_pane_t13_ParamLimits

0xda45,	// (0x0005af01) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0005cf09) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0005cf09) main_cam5_pane_t

0x0e89,	// (0x0004e345) popup_scut_keymap_window_ParamLimits

0x0e89,	// (0x0004e345) popup_scut_keymap_window

0x739b,	// (0x00054857) aid_size_cell_brow_shortcut

0xb396,	// (0x00058852) bg_popup_window_pane_cp010

0x73a7,	// (0x00054863) grid_scut_pane

0x73b3,	// (0x0005486f) cell_scut_pane_ParamLimits

0x73b3,	// (0x0005486f) cell_scut_pane

0x73ca,	// (0x00054886) cell_scut_pane_g1

0xda62,	// (0x0005af1e) cell_scut_pane_t1

0xda71,	// (0x0005af2d) cell_scut_pane_t2

0x73d3,	// (0x0005488f) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0005cf24) cell_scut_pane_t

0x51fb,	// (0x000526b7) main_mup3_pane_g8_ParamLimits

0x51fb,	// (0x000526b7) main_mup3_pane_g8

0x66a5,	// (0x00053b61) area_vitu2_query_pane_ParamLimits

0x66a5,	// (0x00053b61) area_vitu2_query_pane

0x02d7,	// (0x0004d793) input_focus_pane_cp08

0xda80,	// (0x0005af3c) area_vitu2_query_pane_g1

0x03dc,	// (0x0004d898) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0005cf2b) area_vitu2_query_pane_g

0x73e1,	// (0x0005489d) area_vitu2_query_pane_t1_ParamLimits

0x73e1,	// (0x0005489d) area_vitu2_query_pane_t1

0x73f5,	// (0x000548b1) area_vitu2_query_pane_t2_ParamLimits

0x73f5,	// (0x000548b1) area_vitu2_query_pane_t2

0x03ed,	// (0x0004d8a9) area_vitu2_query_pane_t3_ParamLimits

0x03ed,	// (0x0004d8a9) area_vitu2_query_pane_t3

0x7409,	// (0x000548c5) area_vitu2_query_pane_t4_ParamLimits

0x7409,	// (0x000548c5) area_vitu2_query_pane_t4

0x7431,	// (0x000548ed) area_vitu2_query_pane_t5_ParamLimits

0x7431,	// (0x000548ed) area_vitu2_query_pane_t5

0x7459,	// (0x00054915) area_vitu2_query_pane_t6_ParamLimits

0x7459,	// (0x00054915) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0005cf30) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0005cf30) area_vitu2_query_pane_t

0x74a5,	// (0x00054961) bg_button_pane_cp018

0x74b3,	// (0x0005496f) bg_button_pane_cp021

0x0415,	// (0x0004d8d1) bg_button_pane_cp022

0x0426,	// (0x0004d8e2) input_focus_pane_cp09

0xb1a0,	// (0x0005865c) aid_size_touch_mv_arrow_left

0xb1cb,	// (0x00058687) aid_size_touch_mv_arrow_right

0x6d0d,	// (0x000541c9) main_cset_slider_pane_g16_ParamLimits

0x6d0d,	// (0x000541c9) main_cset_slider_pane_g16

0x6d19,	// (0x000541d5) main_cset_slider_pane_g17_ParamLimits

0x6d19,	// (0x000541d5) main_cset_slider_pane_g17

0x7386,	// (0x00054842) cell_cam4_burst_pane_g1_ParamLimits

0x9628,	// (0x00056ae4) compa_mode_pane

0x6f15,	// (0x000543d1) popup_vtel_slider_window_g3_ParamLimits

0x6f15,	// (0x000543d1) popup_vtel_slider_window_g3

0x6f2c,	// (0x000543e8) popup_vtel_slider_window_g4_ParamLimits

0x6f2c,	// (0x000543e8) popup_vtel_slider_window_g4

0x6f43,	// (0x000543ff) popup_vtel_slider_window_t1_ParamLimits

0x6f43,	// (0x000543ff) popup_vtel_slider_window_t1

0x9628,	// (0x00056ae4) main_cl_pane

0x9d3a,	// (0x000571f6) popup_imed_adjust2_window_ParamLimits

0xc7a1,	// (0x00059c5d) bg_tb_trans_pane_cp05_ParamLimits

0xd0d8,	// (0x0005a594) popup_imed_adjust2_window_g1_ParamLimits

0xd0e7,	// (0x0005a5a3) popup_imed_adjust2_window_g2_ParamLimits

0xd0e7,	// (0x0005a5a3) popup_imed_adjust2_window_g2

0xd0f3,	// (0x0005a5af) popup_imed_adjust2_window_g3_ParamLimits

0xd0f3,	// (0x0005a5af) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0005cc9b) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0005cc9b) popup_imed_adjust2_window_g

0xd0ff,	// (0x0005a5bb) popup_imed_adjust2_window_t1_ParamLimits

0xd117,	// (0x0005a5d3) slider_imed_adjust_pane_ParamLimits

0xd12b,	// (0x0005a5e7) slider_imed_adjust_pane_g1_ParamLimits

0xd13b,	// (0x0005a5f7) slider_imed_adjust_pane_g2_ParamLimits

0xd14b,	// (0x0005a607) slider_imed_adjust_pane_g3_ParamLimits

0xd15c,	// (0x0005a618) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0005cca2) slider_imed_adjust_pane_g_ParamLimits

0x642e,	// (0x000538ea) aid_touch_area_cam4_ParamLimits

0x642e,	// (0x000538ea) aid_touch_area_cam4

0xa0b6,	// (0x00057572) battery_pane_cp01

0x64fd,	// (0x000539b9) main_camera4_pane_g6_ParamLimits

0x64fd,	// (0x000539b9) main_camera4_pane_g6

0x6527,	// (0x000539e3) main_camera4_pane_t2_ParamLimits

0x6527,	// (0x000539e3) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0005cda5) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0005cda5) main_camera4_pane_t

0x655c,	// (0x00053a18) aid_touch_area_vid4_ParamLimits

0x655c,	// (0x00053a18) aid_touch_area_vid4

0x65b0,	// (0x00053a6c) main_video4_pane_g5_ParamLimits

0x65b0,	// (0x00053a6c) main_video4_pane_g5

0x65d5,	// (0x00053a91) vid4_progress_pane_ParamLimits

0x65d5,	// (0x00053a91) vid4_progress_pane

0xd761,	// (0x0005ac1d) main_cset_slider_pane_g18_ParamLimits

0xd761,	// (0x0005ac1d) main_cset_slider_pane_g18

0xd94a,	// (0x0005ae06) cell_cam4_burst_pane_g2_ParamLimits

0xd94a,	// (0x0005ae06) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0005cf04) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005cf04) cell_cam4_burst_pane_g

0xa722,	// (0x00057bde) bg_cl_pane_ParamLimits

0xa722,	// (0x00057bde) bg_cl_pane

0x74bf,	// (0x0005497b) cl_header_pane_ParamLimits

0x74bf,	// (0x0005497b) cl_header_pane

0x74d3,	// (0x0005498f) cl_listscroll_pane_ParamLimits

0x74d3,	// (0x0005498f) cl_listscroll_pane

0xda8c,	// (0x0005af48) bg_cl_pane_g1

0xda94,	// (0x0005af50) bg_cl_pane_g2

0xda9c,	// (0x0005af58) bg_cl_pane_g3

0xdaa4,	// (0x0005af60) bg_cl_pane_g4

0xdaac,	// (0x0005af68) bg_cl_pane_g5

0xdab4,	// (0x0005af70) bg_cl_pane_g6

0xdabc,	// (0x0005af78) bg_cl_pane_g7

0xdac4,	// (0x0005af80) bg_cl_pane_g8

0xdacc,	// (0x0005af88) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0005cf3f) bg_cl_pane_g

0x74e3,	// (0x0005499f) aid_height_cl_leading_ParamLimits

0x74e3,	// (0x0005499f) aid_height_cl_leading

0x74ef,	// (0x000549ab) aid_height_cl_text_ParamLimits

0x74ef,	// (0x000549ab) aid_height_cl_text

0xa4ad,	// (0x00057969) bg_cl_header_pane_ParamLimits

0xa4ad,	// (0x00057969) bg_cl_header_pane

0x750e,	// (0x000549ca) cl_header_pane_g1_ParamLimits

0x750e,	// (0x000549ca) cl_header_pane_g1

0x7524,	// (0x000549e0) cl_header_pane_t1_ParamLimits

0x7524,	// (0x000549e0) cl_header_pane_t1

0xdad4,	// (0x0005af90) cl_list_pane

0xd734,	// (0x0005abf0) hc_scroll_pane_cp01

0xab22,	// (0x00057fde) bg_cl_header_pane_g1

0xd61a,	// (0x0005aad6) bg_cl_header_pane_g2

0xab42,	// (0x00057ffe) bg_cl_header_pane_g3

0xd62a,	// (0x0005aae6) bg_cl_header_pane_g4

0xd622,	// (0x0005aade) bg_cl_header_pane_g5

0xd859,	// (0x0005ad15) bg_cl_header_pane_g6

0xd642,	// (0x0005aafe) bg_cl_header_pane_g7

0xd64a,	// (0x0005ab06) bg_cl_header_pane_g8

0xd63a,	// (0x0005aaf6) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0005cf52) bg_cl_header_pane_g

0x753d,	// (0x000549f9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x753d,	// (0x000549f9) hc_cl_list_double_graphic_heading_pane

0x754e,	// (0x00054a0a) hc_cl_list_single_graphic_pane_ParamLimits

0x754e,	// (0x00054a0a) hc_cl_list_single_graphic_pane

0x7567,	// (0x00054a23) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7567,	// (0x00054a23) hc_cl_list_single_graphic_pane_g1

0x7573,	// (0x00054a2f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7573,	// (0x00054a2f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0005cf65) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0005cf65) hc_cl_list_single_graphic_pane_g

0x7587,	// (0x00054a43) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7587,	// (0x00054a43) hc_cl_list_single_graphic_pane_t1

0x7567,	// (0x00054a23) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7567,	// (0x00054a23) hc_cl_list_double_graphic_heading_pane_g1

0x759c,	// (0x00054a58) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x759c,	// (0x00054a58) hc_cl_list_double_graphic_heading_pane_g2

0x75b0,	// (0x00054a6c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75b0,	// (0x00054a6c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0005cf6a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0005cf6a) hc_cl_list_double_graphic_heading_pane_g

0x75c4,	// (0x00054a80) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75c4,	// (0x00054a80) hc_cl_list_double_graphic_heading_pane_t1

0x75d9,	// (0x00054a95) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75d9,	// (0x00054a95) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0005cf71) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0005cf71) hc_cl_list_double_graphic_heading_pane_t

0xa203,	// (0x000576bf) vid4_progress_pane_g1

0xa213,	// (0x000576cf) vid4_progress_pane_g2

0x75ee,	// (0x00054aaa) vid4_progress_pane_g3

0xa223,	// (0x000576df) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0005cf76) vid4_progress_pane_g

0x7600,	// (0x00054abc) vid4_progress_pane_t1

0xa241,	// (0x000576fd) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0005cf81) vid4_progress_pane_t

0x7616,	// (0x00054ad2) wait_bar_pane_cp07

0xc99c,	// (0x00059e58) blid_firmament_pane_ParamLimits

0xc9df,	// (0x00059e9b) popup_blid_sat_info2_window_g1

0xca03,	// (0x00059ebf) popup_blid_sat_info2_window_t3

0xca11,	// (0x00059ecd) popup_blid_sat_info2_window_t4

0xca1f,	// (0x00059edb) popup_blid_sat_info2_window_t5

0xca2d,	// (0x00059ee9) popup_blid_sat_info2_window_t6

0xca3d,	// (0x00059ef9) popup_blid_sat_info2_window_t7

0xca4b,	// (0x00059f07) popup_blid_sat_info2_window_t8

0xca59,	// (0x00059f15) popup_blid_sat_info2_window_t9

0xca67,	// (0x00059f23) popup_blid_sat_info2_window_t10

0xcb2b,	// (0x00059fe7) aid_firma_cardinal_ParamLimits

0xcb3f,	// (0x00059ffb) blid_firmament_pane_t1_ParamLimits

0xcb56,	// (0x0005a012) blid_firmament_pane_t2_ParamLimits

0xcb6d,	// (0x0005a029) blid_firmament_pane_t3_ParamLimits

0xcb84,	// (0x0005a040) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0005cb8f) blid_firmament_pane_t_ParamLimits

0xcb9b,	// (0x0005a057) blid_sat_info_pane_ParamLimits

0xa4ad,	// (0x00057969) main_cam_set_pane_ParamLimits

0x5abf,	// (0x00052f7b) aid_size_cell_colour_35_ParamLimits

0x5adf,	// (0x00052f9b) aid_size_cell_colour_112_ParamLimits

0x5aff,	// (0x00052fbb) aid_size_cell_effect_ParamLimits

0xc7a1,	// (0x00059c5d) bg_tb_trans_pane_cp02_ParamLimits

0xad92,	// (0x0005824e) heading_imed_pane_ParamLimits

0x5b1f,	// (0x00052fdb) listscroll_imed_pane_ParamLimits

0xbdc7,	// (0x00059283) popup_call2_audio_first_window_g5_ParamLimits

0xbdc7,	// (0x00059283) popup_call2_audio_first_window_g5

0x60d9,	// (0x00053595) aid_size_touch_image3_arrow_left_ParamLimits

0x60d9,	// (0x00053595) aid_size_touch_image3_arrow_left

0x6105,	// (0x000535c1) aid_size_touch_image3_arrow_right_ParamLimits

0x6105,	// (0x000535c1) aid_size_touch_image3_arrow_right

0xa256,	// (0x00057712) vid4_progress_pane_t3

0x5e4b,	// (0x00053307) main_hwr_training_symbol_option_pane_ParamLimits

0x5e4b,	// (0x00053307) main_hwr_training_symbol_option_pane

0xd3ce,	// (0x0005a88a) popup_hwr_training_preview_window_ParamLimits

0xd3ce,	// (0x0005a88a) popup_hwr_training_preview_window

0x5e6b,	// (0x00053327) hwr_training_navi_pane_g5_ParamLimits

0x5e6b,	// (0x00053327) hwr_training_navi_pane_g5

0xd608,	// (0x0005aac4) popup_char_count_window

0xa4ad,	// (0x00057969) bg_popup_sub_pane_cp20_ParamLimits

0x7069,	// (0x00054525) list_vitu2_match_list_pane_ParamLimits

0x7078,	// (0x00054534) vitu2_page_scroll_pane_ParamLimits

0x7078,	// (0x00054534) vitu2_page_scroll_pane

0xdadd,	// (0x0005af99) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdadd,	// (0x0005af99) list_single_hwr_training_symbol_option_pane

0xdaf0,	// (0x0005afac) list_single_hwr_training_symbol_option_pane_g1

0xdaf8,	// (0x0005afb4) list_single_hwr_training_symbol_option_pane_t1

0xdb06,	// (0x0005afc2) bg_button_pane_cp023

0xdb0f,	// (0x0005afcb) bg_button_pane_cp024

0x7664,	// (0x00054b20) vitu2_page_scroll_pane_g1

0x766c,	// (0x00054b28) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0005cf88) vitu2_page_scroll_pane_g

0x7674,	// (0x00054b30) vitu2_page_scroll_pane_t1

0xd188,	// (0x0005a644) popup_char_count_window_g1

0xdb42,	// (0x0005affe) popup_char_count_window_g2

0xdb4b,	// (0x0005b007) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0005cf8d) popup_char_count_window_g

0xdb54,	// (0x0005b010) popup_char_count_window_t1

0x9628,	// (0x00056ae4) main_vded2_pane

0xd0c4,	// (0x0005a580) aid_size_cell_imed_line

0xd0ce,	// (0x0005a58a) grid_imed_line_width_pane

0xa16c,	// (0x00057628) vid4_indicators_pane_g4

0xdb62,	// (0x0005b01e) cell_imed_line_width_pane_ParamLimits

0xdb62,	// (0x0005b01e) cell_imed_line_width_pane

0xdb76,	// (0x0005b032) cell_imed_line_width_pane_g1

0xdb7f,	// (0x0005b03b) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0005cf94) cell_imed_line_width_pane_g

0x7683,	// (0x00054b3f) main_vded2_pane_g1_ParamLimits

0x7683,	// (0x00054b3f) main_vded2_pane_g1

0x7699,	// (0x00054b55) main_vded2_pane_g2_ParamLimits

0x7699,	// (0x00054b55) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0005cf99) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0005cf99) main_vded2_pane_g

0x76ab,	// (0x00054b67) vded2_slider_pane_ParamLimits

0x76ab,	// (0x00054b67) vded2_slider_pane

0x76bb,	// (0x00054b77) aid_size_touch_vded2_end

0x76c5,	// (0x00054b81) aid_size_touch_vded2_playhead

0xdb87,	// (0x0005b043) aid_size_touch_vded2_start

0xdb8f,	// (0x0005b04b) vded2_slider_bg_pane

0xdb98,	// (0x0005b054) vded2_slider_pane_g1

0xdba1,	// (0x0005b05d) vded2_slider_pane_g2

0x76cf,	// (0x00054b8b) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0005cf9e) vded2_slider_pane_g

0xdba9,	// (0x0005b065) vded2_slider_bg_pane_g1

0xdbb2,	// (0x0005b06e) vded2_slider_bg_pane_g2

0xdbbb,	// (0x0005b077) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0005cfa5) vded2_slider_bg_pane_g

0x37dc,	// (0x00050c98) aid_postcard_touch_down_pane_ParamLimits

0x37dc,	// (0x00050c98) aid_postcard_touch_down_pane

0x37f2,	// (0x00050cae) aid_postcard_touch_up_pane_ParamLimits

0x37f2,	// (0x00050cae) aid_postcard_touch_up_pane

0x9628,	// (0x00056ae4) main_blid2_pane

0x9d20,	// (0x000571dc) popup_blid2_search_window

0x9628,	// (0x00056ae4) blid2_gps_pane

0x9628,	// (0x00056ae4) blid2_navig_pane

0x9628,	// (0x00056ae4) blid2_search_pane

0x9628,	// (0x00056ae4) blid2_tripm_pane

0x76da,	// (0x00054b96) blid2_search_pane_g1_ParamLimits

0x76da,	// (0x00054b96) blid2_search_pane_g1

0x76f2,	// (0x00054bae) blid2_search_pane_t1_ParamLimits

0x76f2,	// (0x00054bae) blid2_search_pane_t1

0x7704,	// (0x00054bc0) aid_size_cell_blid2_gps_ParamLimits

0x7704,	// (0x00054bc0) aid_size_cell_blid2_gps

0x771c,	// (0x00054bd8) blid2_gps_pane_g1_ParamLimits

0x771c,	// (0x00054bd8) blid2_gps_pane_g1

0x7730,	// (0x00054bec) grid_blid2_satellite_pane_ParamLimits

0x7730,	// (0x00054bec) grid_blid2_satellite_pane

0x774a,	// (0x00054c06) blid2_navig_pane_g1_ParamLimits

0x774a,	// (0x00054c06) blid2_navig_pane_g1

0x7756,	// (0x00054c12) blid2_navig_pane_t1_ParamLimits

0x7756,	// (0x00054c12) blid2_navig_pane_t1

0x7771,	// (0x00054c2d) blid2_navig_pane_t2_ParamLimits

0x7771,	// (0x00054c2d) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0005cfac) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0005cfac) blid2_navig_pane_t

0x778c,	// (0x00054c48) blid2_navig_ring_pane_ParamLimits

0x778c,	// (0x00054c48) blid2_navig_ring_pane

0x77a5,	// (0x00054c61) blid2_speed_pane_ParamLimits

0x77a5,	// (0x00054c61) blid2_speed_pane

0x77b1,	// (0x00054c6d) blid2_tripm_pane_g1_ParamLimits

0x77b1,	// (0x00054c6d) blid2_tripm_pane_g1

0x77cc,	// (0x00054c88) blid2_tripm_pane_g2_ParamLimits

0x77cc,	// (0x00054c88) blid2_tripm_pane_g2

0x77e0,	// (0x00054c9c) blid2_tripm_pane_g3_ParamLimits

0x77e0,	// (0x00054c9c) blid2_tripm_pane_g3

0x77f4,	// (0x00054cb0) blid2_tripm_pane_g4_ParamLimits

0x77f4,	// (0x00054cb0) blid2_tripm_pane_g4

0x7808,	// (0x00054cc4) blid2_tripm_pane_g5_ParamLimits

0x7808,	// (0x00054cc4) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0005cfb1) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0005cfb1) blid2_tripm_pane_g

0x782e,	// (0x00054cea) blid2_tripm_pane_t1_ParamLimits

0x782e,	// (0x00054cea) blid2_tripm_pane_t1

0x7849,	// (0x00054d05) blid2_tripm_pane_t2_ParamLimits

0x7849,	// (0x00054d05) blid2_tripm_pane_t2

0x7862,	// (0x00054d1e) blid2_tripm_pane_t3_ParamLimits

0x7862,	// (0x00054d1e) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0005cfbe) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0005cfbe) blid2_tripm_pane_t

0x78a9,	// (0x00054d65) cell_blid2_satellite_pane_ParamLimits

0x78a9,	// (0x00054d65) cell_blid2_satellite_pane

0x78c7,	// (0x00054d83) cell_blid2_satellite_pane_g1

0xdbc4,	// (0x0005b080) cell_blid2_satellite_pane_t1

0xcbab,	// (0x0005a067) blid2_speed_pane_g1

0xdbd2,	// (0x0005b08e) blid2_speed_pane_t1

0xdbe0,	// (0x0005b09c) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0005cfc7) blid2_speed_pane_t

0xcbab,	// (0x0005a067) blid2_navig_ring_pane_g1

0x78d0,	// (0x00054d8c) blid2_navig_ring_pane_g2

0x78d8,	// (0x00054d94) blid2_navig_ring_pane_g3

0x78e0,	// (0x00054d9c) blid2_navig_ring_pane_g4

0x78e8,	// (0x00054da4) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0005cfcc) blid2_navig_ring_pane_g

0x9628,	// (0x00056ae4) bg_popup_window_pane_cp011

0xdbee,	// (0x0005b0aa) popup_blid2_search_window_g1

0xdbf6,	// (0x0005b0b2) popup_blid2_search_window_t1

0xdc04,	// (0x0005b0c0) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0005cfd7) popup_blid2_search_window_t

0xaa31,	// (0x00057eed) main_browser_pane_g1

0xa722,	// (0x00057bde) main_browser_pane_ParamLimits

0xa4ad,	// (0x00057969) bg_button_pane_cp011_ParamLimits

0x68ea,	// (0x00053da6) cell_vitu2_function_pane_g1_ParamLimits

0xc7a1,	// (0x00059c5d) bg_popup_sub_pane_cp22_ParamLimits

0x02d7,	// (0x0004d793) input_focus_pane_cp08_ParamLimits

0x7215,	// (0x000546d1) popup_vitu2_query_button_pane_ParamLimits

0x7215,	// (0x000546d1) popup_vitu2_query_button_pane

0x02ee,	// (0x0004d7aa) popup_vitu2_query_input_button_pane

0xd894,	// (0x0005ad50) popup_vitu2_query_window_g1_ParamLimits

0x02f8,	// (0x0004d7b4) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0005ced8) popup_vitu2_query_window_g_ParamLimits

0x9628,	// (0x00056ae4) bg_button_pane_cp026

0x78f0,	// (0x00054dac) popup_vitu2_query_input_button_pane_g1

0x9628,	// (0x00056ae4) bg_button_pane_cp025

0xdc12,	// (0x0005b0ce) popup_vitu2_query_button_pane_t1

0x4e74,	// (0x00052330) main_mp3_pane_t6

0x4e82,	// (0x0005233e) popup_slider_window_cp01

0xa0d2,	// (0x0005758e) cam4_battery_pane

0xa12b,	// (0x000575e7) cam4_battery_pane_cp02

0xa1fb,	// (0x000576b7) cam4_battery_pane_cp01

0xa1fb,	// (0x000576b7) cam4_battery_pane_cp03

0xcbab,	// (0x0005a067) cam4_battery_pane_g1

0xdc20,	// (0x0005b0dc) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0005cfdc) cam4_battery_pane_g

0xca75,	// (0x00059f31) popup_blid_sat_info2_window_t11

0xb1a0,	// (0x0005865c) aid_size_touch_mv_arrow_left_ParamLimits

0xb1cb,	// (0x00058687) aid_size_touch_mv_arrow_right_ParamLimits

0xb229,	// (0x000586e5) navi_pane_g1_ParamLimits

0xb235,	// (0x000586f1) navi_pane_g2_ParamLimits

0xb263,	// (0x0005871f) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0005c8a1) navi_pane_g_ParamLimits

0x3237,	// (0x000506f3) navi_pane_mv_t1_ParamLimits

0x5b2b,	// (0x00052fe7) grid_imed_effect_pane_ParamLimits

0x1eab,	// (0x0004f367) aid_placing_vt_slider_lsc

0xa980,	// (0x00057e3c) aid_placing_vt_slider_prt

0xa4ad,	// (0x00057969) bg_tb_trans_pane_cp01_ParamLimits

0xcd2b,	// (0x0005a1e7) popup_image_details_window_g1_ParamLimits

0xcd3e,	// (0x0005a1fa) popup_image_details_window_g2_ParamLimits

0xcd53,	// (0x0005a20f) popup_image_details_window_g3_ParamLimits

0xcd53,	// (0x0005a20f) popup_image_details_window_g3

0xf718,	// (0x0005cbd4) popup_image_details_window_g_ParamLimits

0xcd67,	// (0x0005a223) popup_image_details_window_t1_ParamLimits

0xcd79,	// (0x0005a235) popup_image_details_window_t2_ParamLimits

0xcd92,	// (0x0005a24e) popup_image_details_window_t3_ParamLimits

0xcda6,	// (0x0005a262) popup_image_details_window_t4_ParamLimits

0xcdc1,	// (0x0005a27d) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0005cbdb) popup_image_details_window_t_ParamLimits

0x74fb,	// (0x000549b7) cl_header_name_pane_ParamLimits

0x74fb,	// (0x000549b7) cl_header_name_pane

0x78f8,	// (0x00054db4) cl_header_name_pane_t1_ParamLimits

0x78f8,	// (0x00054db4) cl_header_name_pane_t1

0x7919,	// (0x00054dd5) cl_header_name_pane_t2_ParamLimits

0x7919,	// (0x00054dd5) cl_header_name_pane_t2

0x795b,	// (0x00054e17) cl_header_name_pane_t3_ParamLimits

0x795b,	// (0x00054e17) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0005cfe1) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0005cfe1) cl_header_name_pane_t

0xb32f,	// (0x000587eb) navi_pane_mv_g2_ParamLimits

0xd5e2,	// (0x0005aa9e) field_vitu2_entry_pane_g1_ParamLimits

0xd5ee,	// (0x0005aaaa) field_vitu2_entry_pane_g2_ParamLimits

0xd5fa,	// (0x0005aab6) field_vitu2_entry_pane_g3_ParamLimits

0xd5fa,	// (0x0005aab6) field_vitu2_entry_pane_g3

0xf91b,	// (0x0005cdd7) field_vitu2_entry_pane_g_ParamLimits

0x6861,	// (0x00053d1d) cell_vitu2_itu_pane_g1_ParamLimits

0x6871,	// (0x00053d2d) cell_vitu2_itu_pane_g2_ParamLimits

0x6871,	// (0x00053d2d) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0005cde3) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0005cde3) cell_vitu2_itu_pane_g

0xa4ad,	// (0x00057969) bg_vkb2_func_pane_cp05_ParamLimits

0xa4ad,	// (0x00057969) bg_vkb2_func_pane_cp05

0xa4ad,	// (0x00057969) bg_vkb2_func_pane_cp03

0xa4ad,	// (0x00057969) bg_vkb2_func_pane_cp04

0xa4ad,	// (0x00057969) bg_vkb2_func_pane_cp10_ParamLimits

0xa4ad,	// (0x00057969) bg_vkb2_func_pane_cp10

0x0415,	// (0x0004d8d1) bg_vkb2_func_pane_cp08

0x74a5,	// (0x00054961) bg_vkb2_func_pane_cp06

0x74b3,	// (0x0005496f) bg_vkb2_func_pane_cp07

0xdb18,	// (0x0005afd4) bg_vkb2_func_pane_cp11_ParamLimits

0xdb18,	// (0x0005afd4) bg_vkb2_func_pane_cp11

0xdb2d,	// (0x0005afe9) bg_vkb2_func_pane_cp12_ParamLimits

0xdb2d,	// (0x0005afe9) bg_vkb2_func_pane_cp12

0x9628,	// (0x00056ae4) bg_vkb2_func_pane_cp09

0xd61a,	// (0x0005aad6) bg_vkb2_func_pane_g1

0xab42,	// (0x00057ffe) bg_vkb2_func_pane_g2

0xd622,	// (0x0005aade) bg_vkb2_func_pane_g3

0xd62a,	// (0x0005aae6) bg_vkb2_func_pane_g4

0xd859,	// (0x0005ad15) bg_vkb2_func_pane_g5

0xd642,	// (0x0005aafe) bg_vkb2_func_pane_g6

0xd64a,	// (0x0005ab06) bg_vkb2_func_pane_g7

0xd63a,	// (0x0005aaf6) bg_vkb2_func_pane_g8

0xab22,	// (0x00057fde) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0005cfe8) bg_vkb2_func_pane_g

0x781c,	// (0x00054cd8) blid2_tripm_pane_g6_ParamLimits

0x781c,	// (0x00054cd8) blid2_tripm_pane_g6

0xd486,	// (0x0005a942) mp4_progress_pane_g1

0x7895,	// (0x00054d51) blid2_tripm_values_pane_ParamLimits

0x7895,	// (0x00054d51) blid2_tripm_values_pane

0x798c,	// (0x00054e48) blid2_tripm_values_pane_t1

0x799a,	// (0x00054e56) blid2_tripm_values_pane_t2

0x79a8,	// (0x00054e64) blid2_tripm_values_pane_t3

0x79b6,	// (0x00054e72) blid2_tripm_values_pane_t4

0x79c4,	// (0x00054e80) blid2_tripm_values_pane_t5

0x79d2,	// (0x00054e8e) blid2_tripm_values_pane_t6

0x79e0,	// (0x00054e9c) blid2_tripm_values_pane_t7

0x79ee,	// (0x00054eaa) blid2_tripm_values_pane_t8

0x79fc,	// (0x00054eb8) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0005cffb) blid2_tripm_values_pane_t

0x1eed,	// (0x0004f3a9) call_video_pane_t1_ParamLimits

0x1f0b,	// (0x0004f3c7) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0005c72a) call_video_pane_t_ParamLimits

0x0168,	// (0x0004d624) msg_header_pane_g1_ParamLimits

0xb511,	// (0x000589cd) msg_header_pane_g2_ParamLimits

0xb511,	// (0x000589cd) msg_header_pane_g2

0x0001,

0xf488,	// (0x0005c944) msg_header_pane_g_ParamLimits

0xf488,	// (0x0005c944) msg_header_pane_g

0xa722,	// (0x00057bde) main_clock2_pane_ParamLimits

0x5824,	// (0x00052ce0) grid_clock2_toolbar_pane_ParamLimits

0x5824,	// (0x00052ce0) grid_clock2_toolbar_pane

0x5824,	// (0x00052ce0) listscroll_clock2_pane_ParamLimits

0x5824,	// (0x00052ce0) listscroll_clock2_pane

0x591d,	// (0x00052dd9) main_clock2_pane_t3_ParamLimits

0x591d,	// (0x00052dd9) main_clock2_pane_t3

0x5941,	// (0x00052dfd) main_clock2_pane_t4_ParamLimits

0x5941,	// (0x00052dfd) main_clock2_pane_t4

0xdc2a,	// (0x0005b0e6) cell_clock2_toolbar_pane

0xdc32,	// (0x0005b0ee) cell_clock2_toolbar_pane_cp01

0xdc32,	// (0x0005b0ee) cell_clock2_toolbar_pane_cp02

0xdc3a,	// (0x0005b0f6) cell_clock2_toolbar_pane_cp03

0xdc42,	// (0x0005b0fe) list_clock2_pane

0xb116,	// (0x000585d2) scroll_pane_cp10

0xdc4a,	// (0x0005b106) list_single_clock2_pane_ParamLimits

0xdc4a,	// (0x0005b106) list_single_clock2_pane

0xb396,	// (0x00058852) list_highlight_pane_cp08

0xdc57,	// (0x0005b113) list_single_clock2_pane_t1

0xdc65,	// (0x0005b121) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0005d00e) list_single_clock2_pane_t

0x9628,	// (0x00056ae4) bg_button_pane_cp10

0xdc73,	// (0x0005b12f) cell_clock2_toolbar_pane_g1

0x3768,	// (0x00050c24) aid_main_viewer_pane_g1_ParamLimits

0x3768,	// (0x00050c24) aid_main_viewer_pane_g1

0x3776,	// (0x00050c32) aid_main_viewer_pane_g2_ParamLimits

0x3776,	// (0x00050c32) aid_main_viewer_pane_g2

0x3784,	// (0x00050c40) aid_main_viewer_pane_g3_ParamLimits

0x3784,	// (0x00050c40) aid_main_viewer_pane_g3

0x3793,	// (0x00050c4f) aid_main_viewer_pane_g4_ParamLimits

0x3793,	// (0x00050c4f) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0005c955) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0005c955) aid_main_viewer_pane_g

0x40a1,	// (0x0005155d) main_calc_pane_ParamLimits

0x40b5,	// (0x00051571) main_dialer2_pane_ParamLimits

0x9628,	// (0x00056ae4) main_cam6_pane

0x9628,	// (0x00056ae4) main_vid6_pane

0x5830,	// (0x00052cec) listscroll_gen_pane_cp06_ParamLimits

0x5830,	// (0x00052cec) listscroll_gen_pane_cp06

0x5964,	// (0x00052e20) main_clock2_pane_t5_ParamLimits

0x5964,	// (0x00052e20) main_clock2_pane_t5

0x59c0,	// (0x00052e7c) aid_call2_pane_cp10_ParamLimits

0x59d2,	// (0x00052e8e) aid_call_pane_cp10_ParamLimits

0xb194,	// (0x00058650) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb194,	// (0x00058650) popup_clock_analogue_window_cp10_g2_ParamLimits

0x59e4,	// (0x00052ea0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x59e4,	// (0x00052ea0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb194,	// (0x00058650) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0005cc90) popup_clock_analogue_window_cp10_g_ParamLimits

0x59f6,	// (0x00052eb2) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6086,	// (0x00053542) cell_dialer2_keypad_pane_g2_ParamLimits

0x6086,	// (0x00053542) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0005cd76) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0005cd76) cell_dialer2_keypad_pane_g

0x60a2,	// (0x0005355e) cell_dialer2_keypad_pane_t1

0x6c00,	// (0x000540bc) main_cset_text2_pane_ParamLimits

0x6c00,	// (0x000540bc) main_cset_text2_pane

0xda80,	// (0x0005af3c) area_vitu2_query_pane_g1_ParamLimits

0x03dc,	// (0x0004d898) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0005cf2b) area_vitu2_query_pane_g_ParamLimits

0x7481,	// (0x0005493d) area_vitu2_query_pane_t7_ParamLimits

0x7481,	// (0x0005493d) area_vitu2_query_pane_t7

0x74a5,	// (0x00054961) bg_button_pane_cp018_ParamLimits

0x74b3,	// (0x0005496f) bg_button_pane_cp021_ParamLimits

0x0415,	// (0x0004d8d1) bg_button_pane_cp022_ParamLimits

0x0415,	// (0x0004d8d1) bg_vkb2_func_pane_cp08_ParamLimits

0x74a5,	// (0x00054961) bg_vkb2_func_pane_cp06_ParamLimits

0x74b3,	// (0x0005496f) bg_vkb2_func_pane_cp07_ParamLimits

0x0426,	// (0x0004d8e2) input_focus_pane_cp09_ParamLimits

0xa26c,	// (0x00057728) cam6_autofocus_pane_ParamLimits

0xa26c,	// (0x00057728) cam6_autofocus_pane

0x7a0a,	// (0x00054ec6) cam6_image_uncrop_pane_ParamLimits

0x7a0a,	// (0x00054ec6) cam6_image_uncrop_pane

0x7a19,	// (0x00054ed5) cam6_indi_pane_ParamLimits

0x7a19,	// (0x00054ed5) cam6_indi_pane

0x7a2f,	// (0x00054eeb) cam6_mode_pane_ParamLimits

0x7a2f,	// (0x00054eeb) cam6_mode_pane

0x7a41,	// (0x00054efd) cam6_timer_pane_ParamLimits

0x7a41,	// (0x00054efd) cam6_timer_pane

0x7a4d,	// (0x00054f09) cam6_zoom_pane_ParamLimits

0x7a4d,	// (0x00054f09) cam6_zoom_pane

0x7a59,	// (0x00054f15) cam6_mode_pane_g1_ParamLimits

0x7a59,	// (0x00054f15) cam6_mode_pane_g1

0x7a69,	// (0x00054f25) cam6_mode_pane_g2_ParamLimits

0x7a69,	// (0x00054f25) cam6_mode_pane_g2

0x7a79,	// (0x00054f35) cam6_mode_pane_g3_ParamLimits

0x7a79,	// (0x00054f35) cam6_mode_pane_g3

0x7a89,	// (0x00054f45) cam6_mode_pane_g4_ParamLimits

0x7a89,	// (0x00054f45) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0005d013) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0005d013) cam6_mode_pane_g

0xdc7b,	// (0x0005b137) bg_tb_trans_pane_cp08_ParamLimits

0xdc7b,	// (0x0005b137) bg_tb_trans_pane_cp08

0xdc89,	// (0x0005b145) cam6_battery_pane_ParamLimits

0xdc89,	// (0x0005b145) cam6_battery_pane

0xdc9f,	// (0x0005b15b) cam6_indi_pane_g1_ParamLimits

0xdc9f,	// (0x0005b15b) cam6_indi_pane_g1

0xdcb1,	// (0x0005b16d) cam6_indi_pane_g2_ParamLimits

0xdcb1,	// (0x0005b16d) cam6_indi_pane_g2

0xdcc3,	// (0x0005b17f) cam6_indi_pane_g3_ParamLimits

0xdcc3,	// (0x0005b17f) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0005d01c) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0005d01c) cam6_indi_pane_g

0xdcd5,	// (0x0005b191) cam6_indi_pane_t1_ParamLimits

0xdcd5,	// (0x0005b191) cam6_indi_pane_t1

0x7a99,	// (0x00054f55) cam6_autofocus_pane_g1

0x7aa1,	// (0x00054f5d) cam6_autofocus_pane_g2

0x7aa9,	// (0x00054f65) cam6_autofocus_pane_g3

0x7ab1,	// (0x00054f6d) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0005d023) cam6_autofocus_pane_g

0xdcfb,	// (0x0005b1b7) cam6_timer_pane_g1

0xdd03,	// (0x0005b1bf) cam6_timer_pane_t1

0xdd11,	// (0x0005b1cd) cam6_zoom_cont_pane

0xdd19,	// (0x0005b1d5) cam6_zoom_pane_g1

0xdd21,	// (0x0005b1dd) cam6_zoom_pane_g2

0x7ab9,	// (0x00054f75) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0005d02c) cam6_zoom_pane_g

0xcbab,	// (0x0005a067) cam6_battery_pane_g1

0xcbab,	// (0x0005a067) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0005cb98) cam6_battery_pane_g

0xdd29,	// (0x0005b1e5) cam6_zoom_cont_pane_g1

0xdd32,	// (0x0005b1ee) cam6_zoom_cont_pane_g2

0xdd3b,	// (0x0005b1f7) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0005d033) cam6_zoom_cont_pane_g

0x7ad6,	// (0x00054f92) cam6_mode_pane_cp_ParamLimits

0x7ad6,	// (0x00054f92) cam6_mode_pane_cp

0x7a4d,	// (0x00054f09) cam6_zoom_pane_cp_ParamLimits

0x7a4d,	// (0x00054f09) cam6_zoom_pane_cp

0x7ae8,	// (0x00054fa4) vid6_image_uncrop_cif_pane_ParamLimits

0x7ae8,	// (0x00054fa4) vid6_image_uncrop_cif_pane

0x7af8,	// (0x00054fb4) vid6_image_uncrop_nhd_pane_ParamLimits

0x7af8,	// (0x00054fb4) vid6_image_uncrop_nhd_pane

0x7a0a,	// (0x00054ec6) vid6_image_uncrop_vga_pane_ParamLimits

0x7a0a,	// (0x00054ec6) vid6_image_uncrop_vga_pane

0x7b07,	// (0x00054fc3) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b07,	// (0x00054fc3) vid6_image_uncrop_wvga_pane

0x7b16,	// (0x00054fd2) vid6_indi_pane_ParamLimits

0x7b16,	// (0x00054fd2) vid6_indi_pane

0xdc7b,	// (0x0005b137) bg_tb_trans_pane_cp09_ParamLimits

0xdc7b,	// (0x0005b137) bg_tb_trans_pane_cp09

0xdd53,	// (0x0005b20f) cam6_battery_pane_cp_ParamLimits

0xdd53,	// (0x0005b20f) cam6_battery_pane_cp

0xdd5f,	// (0x0005b21b) vid6_indi_pane_g1_ParamLimits

0xdd5f,	// (0x0005b21b) vid6_indi_pane_g1

0xdd71,	// (0x0005b22d) vid6_indi_pane_g2_ParamLimits

0xdd71,	// (0x0005b22d) vid6_indi_pane_g2

0xdd83,	// (0x0005b23f) vid6_indi_pane_g3_ParamLimits

0xdd83,	// (0x0005b23f) vid6_indi_pane_g3

0xdd98,	// (0x0005b254) vid6_indi_pane_g4_ParamLimits

0xdd98,	// (0x0005b254) vid6_indi_pane_g4

0xddad,	// (0x0005b269) vid6_indi_pane_g5_ParamLimits

0xddad,	// (0x0005b269) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0005d03a) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0005d03a) vid6_indi_pane_g

0xddc7,	// (0x0005b283) vid6_indi_pane_t1_ParamLimits

0xddc7,	// (0x0005b283) vid6_indi_pane_t1

0xdddd,	// (0x0005b299) vid6_indi_pane_t2_ParamLimits

0xdddd,	// (0x0005b299) vid6_indi_pane_t2

0xde05,	// (0x0005b2c1) vid6_indi_pane_t3_ParamLimits

0xde05,	// (0x0005b2c1) vid6_indi_pane_t3

0xde2d,	// (0x0005b2e9) vid6_indi_pane_t4_ParamLimits

0xde2d,	// (0x0005b2e9) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0005d045) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0005d045) vid6_indi_pane_t

0xde83,	// (0x0005b33f) wait_bar_pane_cp08

0x7b2e,	// (0x00054fea) main_cset_text2_pane_t1_ParamLimits

0x7b2e,	// (0x00054fea) main_cset_text2_pane_t1

0x7ac1,	// (0x00054f7d) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ac1,	// (0x00054f7d) listscroll_gen_pane_cp06_t1

0x9628,	// (0x00056ae4) main_cam6_set_pane

0xce0b,	// (0x0005a2c7) bg_tb_trans_pane_cp06_ParamLimits

0xa0da,	// (0x00057596) cam4_indicators_pane_g1_ParamLimits

0xa0eb,	// (0x000575a7) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0005cdb3) cam4_indicators_pane_g_ParamLimits

0xa109,	// (0x000575c5) cam4_indicators_pane_t1_ParamLimits

0xa4ad,	// (0x00057969) bg_tb_trans_pane_cp07_ParamLimits

0xa133,	// (0x000575ef) vid4_indicators_pane_g1_ParamLimits

0xa147,	// (0x00057603) vid4_indicators_pane_g2_ParamLimits

0xa15b,	// (0x00057617) vid4_indicators_pane_g3_ParamLimits

0xa16c,	// (0x00057628) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0005cdc5) vid4_indicators_pane_g_ParamLimits

0xa188,	// (0x00057644) vid4_indicators_pane_t1_ParamLimits

0xa203,	// (0x000576bf) vid4_progress_pane_g1_ParamLimits

0xa213,	// (0x000576cf) vid4_progress_pane_g2_ParamLimits

0x75ee,	// (0x00054aaa) vid4_progress_pane_g3_ParamLimits

0xa223,	// (0x000576df) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0005cf76) vid4_progress_pane_g_ParamLimits

0x7600,	// (0x00054abc) vid4_progress_pane_t1_ParamLimits

0xa241,	// (0x000576fd) vid4_progress_pane_t2_ParamLimits

0xa256,	// (0x00057712) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0005cf81) vid4_progress_pane_t_ParamLimits

0x7616,	// (0x00054ad2) wait_bar_pane_cp07_ParamLimits

0x7b4d,	// (0x00055009) main_cam6_set_pane_g2_ParamLimits

0x7b4d,	// (0x00055009) main_cam6_set_pane_g2

0x7b71,	// (0x0005502d) main_cset6_listscroll_pane_ParamLimits

0x7b71,	// (0x0005502d) main_cset6_listscroll_pane

0x7b8d,	// (0x00055049) main_cset6_slider_pane_ParamLimits

0x7b8d,	// (0x00055049) main_cset6_slider_pane

0x7ba3,	// (0x0005505f) main_cset6_text2_pane_ParamLimits

0x7ba3,	// (0x0005505f) main_cset6_text2_pane

0xde92,	// (0x0005b34e) main_cset6_text_pane

0xde9a,	// (0x0005b356) main_cset_list_pane_copy1_ParamLimits

0xde9a,	// (0x0005b356) main_cset_list_pane_copy1

0xdeaa,	// (0x0005b366) scroll_pane_cp028_copy1

0x7bb1,	// (0x0005506d) cset_list_set_pane_copy1

0x7bc3,	// (0x0005507f) aid_position_infowindow_above_copy1

0x7bcb,	// (0x00055087) aid_position_infowindow_below_copy1

0x044b,	// (0x0004d907) cset_list_set_pane_g1_copy1

0x0453,	// (0x0004d90f) cset_list_set_pane_g3_copy1_ParamLimits

0x0453,	// (0x0004d90f) cset_list_set_pane_g3_copy1

0x0462,	// (0x0004d91e) cset_list_set_pane_t1_copy1_ParamLimits

0x0462,	// (0x0004d91e) cset_list_set_pane_t1_copy1

0xa4ad,	// (0x00057969) list_highlight_pane_cp021_copy1_ParamLimits

0xa4ad,	// (0x00057969) list_highlight_pane_cp021_copy1

0xdeb3,	// (0x0005b36f) cset6_slider_pane_ParamLimits

0xdeb3,	// (0x0005b36f) cset6_slider_pane

0xdedf,	// (0x0005b39b) main_cset6_slider_pane_g1_ParamLimits

0xdedf,	// (0x0005b39b) main_cset6_slider_pane_g1

0x7bd3,	// (0x0005508f) main_cset6_slider_pane_g2_ParamLimits

0x7bd3,	// (0x0005508f) main_cset6_slider_pane_g2

0xdf07,	// (0x0005b3c3) main_cset6_slider_pane_g3_ParamLimits

0xdf07,	// (0x0005b3c3) main_cset6_slider_pane_g3

0x7bfb,	// (0x000550b7) main_cset6_slider_pane_g4_ParamLimits

0x7bfb,	// (0x000550b7) main_cset6_slider_pane_g4

0x7c07,	// (0x000550c3) main_cset6_slider_pane_g5_ParamLimits

0x7c07,	// (0x000550c3) main_cset6_slider_pane_g5

0xd749,	// (0x0005ac05) main_cset6_slider_pane_g7_ParamLimits

0xd749,	// (0x0005ac05) main_cset6_slider_pane_g7

0xd755,	// (0x0005ac11) main_cset6_slider_pane_g8_ParamLimits

0xd755,	// (0x0005ac11) main_cset6_slider_pane_g8

0x6cad,	// (0x00054169) main_cset6_slider_pane_g9_ParamLimits

0x6cad,	// (0x00054169) main_cset6_slider_pane_g9

0x6cb9,	// (0x00054175) main_cset6_slider_pane_g10_ParamLimits

0x6cb9,	// (0x00054175) main_cset6_slider_pane_g10

0x6cc5,	// (0x00054181) main_cset6_slider_pane_g11_ParamLimits

0x6cc5,	// (0x00054181) main_cset6_slider_pane_g11

0x6cd1,	// (0x0005418d) main_cset6_slider_pane_g12_ParamLimits

0x6cd1,	// (0x0005418d) main_cset6_slider_pane_g12

0x6cdd,	// (0x00054199) main_cset6_slider_pane_g13_ParamLimits

0x6cdd,	// (0x00054199) main_cset6_slider_pane_g13

0x6ce9,	// (0x000541a5) main_cset6_slider_pane_g14_ParamLimits

0x6ce9,	// (0x000541a5) main_cset6_slider_pane_g14

0x7c13,	// (0x000550cf) main_cset6_slider_pane_g15_ParamLimits

0x7c13,	// (0x000550cf) main_cset6_slider_pane_g15

0x6d0d,	// (0x000541c9) main_cset6_slider_pane_g16_ParamLimits

0x6d0d,	// (0x000541c9) main_cset6_slider_pane_g16

0x6d19,	// (0x000541d5) main_cset6_slider_pane_g17_ParamLimits

0x6d19,	// (0x000541d5) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0005d04e) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0005d04e) main_cset6_slider_pane_g

0xdf13,	// (0x0005b3cf) main_cset6_slider_pane_t1_ParamLimits

0xdf13,	// (0x0005b3cf) main_cset6_slider_pane_t1

0x7c43,	// (0x000550ff) main_cset6_slider_pane_t2_ParamLimits

0x7c43,	// (0x000550ff) main_cset6_slider_pane_t2

0x7c6e,	// (0x0005512a) main_cset6_slider_pane_t3_ParamLimits

0x7c6e,	// (0x0005512a) main_cset6_slider_pane_t3

0x7c99,	// (0x00055155) main_cset6_slider_pane_t4_ParamLimits

0x7c99,	// (0x00055155) main_cset6_slider_pane_t4

0x7cc4,	// (0x00055180) main_cset6_slider_pane_t5_ParamLimits

0x7cc4,	// (0x00055180) main_cset6_slider_pane_t5

0xdf54,	// (0x0005b410) main_cset6_slider_pane_t7_ParamLimits

0xdf54,	// (0x0005b410) main_cset6_slider_pane_t7

0x7cef,	// (0x000551ab) main_cset6_slider_pane_t8_ParamLimits

0x7cef,	// (0x000551ab) main_cset6_slider_pane_t8

0x7d13,	// (0x000551cf) main_cset6_slider_pane_t9_ParamLimits

0x7d13,	// (0x000551cf) main_cset6_slider_pane_t9

0x7d37,	// (0x000551f3) main_cset6_slider_pane_t10_ParamLimits

0x7d37,	// (0x000551f3) main_cset6_slider_pane_t10

0x7d5b,	// (0x00055217) main_cset6_slider_pane_t11_ParamLimits

0x7d5b,	// (0x00055217) main_cset6_slider_pane_t11

0xdf8a,	// (0x0005b446) main_cset6_slider_pane_t14_ParamLimits

0xdf8a,	// (0x0005b446) main_cset6_slider_pane_t14

0xdfc3,	// (0x0005b47f) main_cset6_slider_pane_t15_ParamLimits

0xdfc3,	// (0x0005b47f) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0005d073) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0005d073) main_cset6_slider_pane_t

0xd80d,	// (0x0005acc9) cset_slider_pane_g1_copy1

0xd816,	// (0x0005acd2) cset_slider_pane_g2_copy1

0xd81f,	// (0x0005acdb) cset_slider_pane_g3_copy1

0x9628,	// (0x00056ae4) bg_popup_sub_pane_cp011_copy1

0xdffc,	// (0x0005b4b8) main_cset_text_pane_g1_copy1

0xd8a8,	// (0x0005ad64) main_cset_text_pane_t1_copy1

0xd8b6,	// (0x0005ad72) main_cset_text_pane_t2_copy1

0xd8c4,	// (0x0005ad80) main_cset_text_pane_t3_copy1

0xd8d2,	// (0x0005ad8e) main_cset_text_pane_t4_copy1

0xd8e0,	// (0x0005ad9c) main_cset_text_pane_t5_copy1

0xe004,	// (0x0005b4c0) main_cset_text_pane_t6_copy1

0xe012,	// (0x0005b4ce) main_cset_text_pane_t7_copy1

0x7dd9,	// (0x00055295) main_cset_text2_pane_t1_copy1

0xa4ad,	// (0x00057969) main_ncimui_pane

0x42f1,	// (0x000517ad) popup_query_ncimui_window_ParamLimits

0x42f1,	// (0x000517ad) popup_query_ncimui_window

0x501a,	// (0x000524d6) field_cale_ev2_pane_g4_ParamLimits

0x501a,	// (0x000524d6) field_cale_ev2_pane_g4

0x5f62,	// (0x0005341e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5f62,	// (0x0005341e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0005cd51) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0005cd51) cell_video_dialer_keypad_pane_g

0x5f7a,	// (0x00053436) cell_video_dialer_keypad_pane_t1

0x9628,	// (0x00056ae4) bg_popup_window_pane_cp012

0xafd7,	// (0x00058493) heading_pane_cp06

0xe03e,	// (0x0005b4fa) ncim_query_content_pane

0x9628,	// (0x00056ae4) bg_popup_heading_pane_cp01

0xe046,	// (0x0005b502) ncim_heading_pane_t1

0xe054,	// (0x0005b510) ncim_indicator_popup_pane

0xe066,	// (0x0005b522) ncim_query_button_pane

0xe07a,	// (0x0005b536) ncim_query_content_pane_t1

0xe08c,	// (0x0005b548) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0005d0b7) ncim_query_content_pane_t

0xe0c6,	// (0x0005b582) ncim_query_list_pane

0xe0d8,	// (0x0005b594) ncim_query_popup_pane

0xe054,	// (0x0005b510) ncim_indicator_popup_pane_ParamLimits

0x7f1d,	// (0x000553d9) ncim_query_content_pane_g1_ParamLimits

0x7f1d,	// (0x000553d9) ncim_query_content_pane_g1

0xe07a,	// (0x0005b536) ncim_query_content_pane_t1_ParamLimits

0xe08c,	// (0x0005b548) ncim_query_content_pane_t2_ParamLimits

0x7f29,	// (0x000553e5) ncim_query_content_pane_t3_ParamLimits

0x7f29,	// (0x000553e5) ncim_query_content_pane_t3

0x7f51,	// (0x0005540d) ncim_query_content_pane_t4_ParamLimits

0x7f51,	// (0x0005540d) ncim_query_content_pane_t4

0x7f79,	// (0x00055435) ncim_query_content_pane_t5_ParamLimits

0x7f79,	// (0x00055435) ncim_query_content_pane_t5

0xe09e,	// (0x0005b55a) ncim_query_content_pane_t6_ParamLimits

0xe09e,	// (0x0005b55a) ncim_query_content_pane_t6

0xfbfb,	// (0x0005d0b7) ncim_query_content_pane_t_ParamLimits

0xe0c6,	// (0x0005b582) ncim_query_list_pane_ParamLimits

0xe0d8,	// (0x0005b594) ncim_query_popup_pane_ParamLimits

0xe0ec,	// (0x0005b5a8) wait_bar_pane_cp04

0x9628,	// (0x00056ae4) input_focus_pane_cp011

0xe0f4,	// (0x0005b5b0) ncim_query_popup_pane_t1

0xe102,	// (0x0005b5be) ncim_list_query_list_pane_ParamLimits

0xe102,	// (0x0005b5be) ncim_list_query_list_pane

0x9628,	// (0x00056ae4) bg_button_pane_cp027

0xe115,	// (0x0005b5d1) ncim_query_button_pane_g1

0x9628,	// (0x00056ae4) list_highlight_pane_cp012

0xe11f,	// (0x0005b5db) ncim_list_query_list_pane_g1

0xe127,	// (0x0005b5e3) ncim_list_query_list_pane_t1

0xa0fa,	// (0x000575b6) cam4_indicators_pane_g3_ParamLimits

0xa0fa,	// (0x000575b6) cam4_indicators_pane_g3

0xa178,	// (0x00057634) vid4_indicators_pane_g5_ParamLimits

0xa178,	// (0x00057634) vid4_indicators_pane_g5

0xa232,	// (0x000576ee) vid4_progress_pane_g5_ParamLimits

0xa232,	// (0x000576ee) vid4_progress_pane_g5

0x7e0b,	// (0x000552c7) main_ncimui_pane_g1

0x7e71,	// (0x0005532d) ncimui_group_query_pane_ParamLimits

0x7e71,	// (0x0005532d) ncimui_group_query_pane

0x7eb9,	// (0x00055375) ncimui_list_pane_ParamLimits

0x7eb9,	// (0x00055375) ncimui_list_pane

0x7ee0,	// (0x0005539c) ncimui_text_pane_ParamLimits

0x7ee0,	// (0x0005539c) ncimui_text_pane

0x7fa1,	// (0x0005545d) ncimui_text_pane_t1_ParamLimits

0x7fa1,	// (0x0005545d) ncimui_text_pane_t1

0xe135,	// (0x0005b5f1) ncimui_list_single_graphic_pane_ParamLimits

0xe135,	// (0x0005b5f1) ncimui_list_single_graphic_pane

0x7fbf,	// (0x0005547b) ncimui_query_pane_ParamLimits

0x7fbf,	// (0x0005547b) ncimui_query_pane

0x9628,	// (0x00056ae4) list_highlight_pane_cp013

0xe145,	// (0x0005b601) ncim_list_query_list_pane_t1_copy1

0xe11f,	// (0x0005b5db) ncim_list_single_graphic_pane_g1

0xe153,	// (0x0005b60f) ncim_query_button_pane_cp01

0xe15f,	// (0x0005b61b) ncim_query_entry_pane_ParamLimits

0xe15f,	// (0x0005b61b) ncim_query_entry_pane

0xe172,	// (0x0005b62e) ncimui_query_pane_g1

0xe17e,	// (0x0005b63a) ncimui_query_pane_t1_ParamLimits

0xe17e,	// (0x0005b63a) ncimui_query_pane_t1

0xa4ad,	// (0x00057969) input_focus_pane_cp012

0xe197,	// (0x0005b653) ncim_query_entry_pane_t1

0xa722,	// (0x00057bde) main_im_pane_ParamLimits

0xa4ad,	// (0x00057969) main_mobtv_pane_ParamLimits

0xa4ad,	// (0x00057969) main_mobtv_pane

0x7c2b,	// (0x000550e7) main_cset6_slider_pane_g18_ParamLimits

0x7c2b,	// (0x000550e7) main_cset6_slider_pane_g18

0x7c37,	// (0x000550f3) main_cset6_slider_pane_g19_ParamLimits

0x7c37,	// (0x000550f3) main_cset6_slider_pane_g19

0xb2f2,	// (0x000587ae) bg_main_mobtv_pane_ParamLimits

0xb2f2,	// (0x000587ae) bg_main_mobtv_pane

0x7fd2,	// (0x0005548e) main_mobtv_info_pane

0x7fdb,	// (0x00055497) main_mobtv_loading_pane_ParamLimits

0x7fdb,	// (0x00055497) main_mobtv_loading_pane

0xe1a9,	// (0x0005b665) main_mobtv_pg_channel_list_pane

0xe1b3,	// (0x0005b66f) main_mobtv_pg_hdr_pane

0x7fe8,	// (0x000554a4) main_mobtv_programe_curr_pane_ParamLimits

0x7fe8,	// (0x000554a4) main_mobtv_programe_curr_pane

0x7ff5,	// (0x000554b1) main_mobtv_programe_next_pane_ParamLimits

0x7ff5,	// (0x000554b1) main_mobtv_programe_next_pane

0xe1bc,	// (0x0005b678) popup_mobtv_noti_window

0xcbab,	// (0x0005a067) main_tv_pg_hdr_pane_g1

0xe1c4,	// (0x0005b680) main_tv_pg_hdr_pane_g2

0xe1cc,	// (0x0005b688) main_tv_pg_hdr_pane_g3

0xe1d4,	// (0x0005b690) main_tv_pg_hdr_pane_g4

0xe1dc,	// (0x0005b698) main_tv_pg_hdr_pane_g5

0xe1e6,	// (0x0005b6a2) main_tv_pg_hdr_pane_g6

0xe1f0,	// (0x0005b6ac) main_tv_pg_hdr_pane_g7

0xe1fa,	// (0x0005b6b6) main_tv_pg_hdr_pane_g8

0xe204,	// (0x0005b6c0) main_tv_pg_hdr_pane_g9

0xe20e,	// (0x0005b6ca) main_tv_pg_hdr_pane_g10

0xe218,	// (0x0005b6d4) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0005d0c4) main_tv_pg_hdr_pane_g

0xe222,	// (0x0005b6de) main_tv_pg_hdr_pane_t1

0xe230,	// (0x0005b6ec) main_tv_pg_hdr_pane_t2

0xe23e,	// (0x0005b6fa) main_tv_pg_hdr_pane_t3

0xe24e,	// (0x0005b70a) main_tv_pg_hdr_pane_t4

0xe25e,	// (0x0005b71a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0005d0db) main_tv_pg_hdr_pane_t

0xe26e,	// (0x0005b72a) single_mobtv_pg_channel_pane_ParamLimits

0xe26e,	// (0x0005b72a) single_mobtv_pg_channel_pane

0xe280,	// (0x0005b73c) single_mobtv_pg_channel_table_pane

0xe289,	// (0x0005b745) single_mobtv_pg_channel_thumb_pane

0xe292,	// (0x0005b74e) single_tv_pg_channel_pane_g1

0xe29b,	// (0x0005b757) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0005d0e6) single_tv_pg_channel_pane_g

0xce0b,	// (0x0005a2c7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce0b,	// (0x0005a2c7) bg_single_mobtv_pg_channel_thumb_pane

0xe2a4,	// (0x0005b760) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2a4,	// (0x0005b760) single_mobtv_pg_channel_thumb_pane_g1

0xe2b2,	// (0x0005b76e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2b2,	// (0x0005b76e) single_mobtv_pg_channel_thumb_pane_g2

0xe2be,	// (0x0005b77a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2be,	// (0x0005b77a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0005d0eb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0005d0eb) single_mobtv_pg_channel_thumb_pane_g

0xe2ca,	// (0x0005b786) single_mobtv_pg_channel_thumb_pane_t1

0xe2d8,	// (0x0005b794) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0005d0f2) single_mobtv_pg_channel_thumb_pane_t

0xcbab,	// (0x0005a067) bg_single_mobtv_pg_channel_table_pane_g1

0xcbab,	// (0x0005a067) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0005cb98) bg_single_mobtv_pg_channel_table_pane_g

0xe2e6,	// (0x0005b7a2) single_mobtv_pg_channel_table_pane_t1

0xe2f4,	// (0x0005b7b0) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0005d0f7) single_mobtv_pg_channel_table_pane_t

0x800a,	// (0x000554c6) main_mobtv_info_pane_g1_ParamLimits

0x800a,	// (0x000554c6) main_mobtv_info_pane_g1

0x8028,	// (0x000554e4) main_mobtv_info_pane_t1_ParamLimits

0x8028,	// (0x000554e4) main_mobtv_info_pane_t1

0x80a0,	// (0x0005555c) main_mobtv_info_pane_t2_ParamLimits

0x80a0,	// (0x0005555c) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0005d101) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0005d101) main_mobtv_info_pane_t

0x812f,	// (0x000555eb) wait_bar_pane_cp05

0x8141,	// (0x000555fd) main_mobtv_loading_pane_g1_ParamLimits

0x8141,	// (0x000555fd) main_mobtv_loading_pane_g1

0x8154,	// (0x00055610) main_mobtv_loading_pane_g2_ParamLimits

0x8154,	// (0x00055610) main_mobtv_loading_pane_g2

0x8160,	// (0x0005561c) main_mobtv_loading_pane_g3_ParamLimits

0x8160,	// (0x0005561c) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0005d108) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0005d108) main_mobtv_loading_pane_g

0xe302,	// (0x0005b7be) main_mobtv_loading_pane_t1_ParamLimits

0xe302,	// (0x0005b7be) main_mobtv_loading_pane_t1

0xe31a,	// (0x0005b7d6) main_mobtv_loading_pane_t2_ParamLimits

0xe31a,	// (0x0005b7d6) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0005d10f) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0005d10f) main_mobtv_loading_pane_t

0x8173,	// (0x0005562f) wait_bar_pane_cp06_ParamLimits

0x8173,	// (0x0005562f) wait_bar_pane_cp06

0xe33e,	// (0x0005b7fa) main_mobtv_programe_curr_pane_t1

0xe34c,	// (0x0005b808) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0005d114) main_mobtv_programe_curr_pane_t

0xe35a,	// (0x0005b816) main_mobtv_programe_next_pane_t1

0xe368,	// (0x0005b824) main_mobtv_programe_next_pane_t2

0xe376,	// (0x0005b832) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0005d119) main_mobtv_programe_next_pane_t

0x9628,	// (0x00056ae4) bg_popup_mobtv_noti_window_pane

0xe384,	// (0x0005b840) popup_mobtv_noti_window_g1

0xe38c,	// (0x0005b848) popup_mobtv_noti_window_t1

0xe39a,	// (0x0005b856) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0005d120) popup_mobtv_noti_window_t

0xcbab,	// (0x0005a067) bg_popup_mobtv_noti_window_pane_g1

0x9628,	// (0x00056ae4) sc_clock_pane

0x9628,	// (0x00056ae4) main_fs_bigclock_pane

0x787f,	// (0x00054d3b) blid2_tripm_pane_t4_ParamLimits

0x787f,	// (0x00054d3b) blid2_tripm_pane_t4

0x8182,	// (0x0005563e) sc_clock_pane_g1_ParamLimits

0x8182,	// (0x0005563e) sc_clock_pane_g1

0x8194,	// (0x00055650) sc_clock_pane_t1_ParamLimits

0x8194,	// (0x00055650) sc_clock_pane_t1

0x81b6,	// (0x00055672) sc_clock_pane_t2_ParamLimits

0x81b6,	// (0x00055672) sc_clock_pane_t2

0x81ce,	// (0x0005568a) sc_clock_pane_t3_ParamLimits

0x81ce,	// (0x0005568a) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0005d125) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0005d125) sc_clock_pane_t

0x8c5c,	// (0x00056118) main_fs_bigclock_indicator_pane_ParamLimits

0x8c5c,	// (0x00056118) main_fs_bigclock_indicator_pane

0x826e,	// (0x0005572a) main_fs_bigclock_pane_g1_ParamLimits

0x826e,	// (0x0005572a) main_fs_bigclock_pane_g1

0x8c68,	// (0x00056124) main_fs_bigclock_pane_t1_ParamLimits

0x8c68,	// (0x00056124) main_fs_bigclock_pane_t1

0x8c7a,	// (0x00056136) main_fs_bigclock_pane_t2_ParamLimits

0x8c7a,	// (0x00056136) main_fs_bigclock_pane_t2

0x8c8c,	// (0x00056148) main_fs_bigclock_pane_t3_ParamLimits

0x8c8c,	// (0x00056148) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0005d32f) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0005d32f) main_fs_bigclock_pane_t

0xec8f,	// (0x0005c14b) main_fs_bigclock_indicator_pane_g1

0xe06e,	// (0x0005b52a) ncim_query_content_pane_g2_ParamLimits

0xe06e,	// (0x0005b52a) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0005d0b2) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0005d0b2) ncim_query_content_pane_g

0x81e7,	// (0x000556a3) sc_clock_pane_t4_ParamLimits

0x81e7,	// (0x000556a3) sc_clock_pane_t4

0xa4ad,	// (0x00057969) main_radioblah_pane

0xd56d,	// (0x0005aa29) cell_call4_button_pane_t1_copy1_ParamLimits

0xd56d,	// (0x0005aa29) cell_call4_button_pane_t1_copy1

0x7e23,	// (0x000552df) main_ncimui_pane_t1_ParamLimits

0x7e23,	// (0x000552df) main_ncimui_pane_t1

0x7e3d,	// (0x000552f9) main_ncimui_pane_t2_ParamLimits

0x7e3d,	// (0x000552f9) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0005d0ab) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0005d0ab) main_ncimui_pane_t

0xe4df,	// (0x0005b99b) main_radioblah_anim_pane_ParamLimits

0xe4df,	// (0x0005b99b) main_radioblah_anim_pane

0xe4f0,	// (0x0005b9ac) main_radioblah_info_pane_ParamLimits

0xe4f0,	// (0x0005b9ac) main_radioblah_info_pane

0xe504,	// (0x0005b9c0) main_radioblah_pane_t1_ParamLimits

0xe504,	// (0x0005b9c0) main_radioblah_pane_t1

0xe520,	// (0x0005b9dc) main_radioblah_pane_t2_ParamLimits

0xe520,	// (0x0005b9dc) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0005d146) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0005d146) main_radioblah_pane_t

0x82c6,	// (0x00055782) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82c6,	// (0x00055782) main_radioblah_rocker_ctrl_pane

0xe568,	// (0x0005ba24) main_radioblah_info_pane_t1_ParamLimits

0xe568,	// (0x0005ba24) main_radioblah_info_pane_t1

0x831e,	// (0x000557da) main_radioblah_info_pane_t2_ParamLimits

0x831e,	// (0x000557da) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0005d14f) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0005d14f) main_radioblah_info_pane_t

0xcbab,	// (0x0005a067) main_radioblah_rocker_ctrl_pane_g1

0x83ce,	// (0x0005588a) main_radioblah_rocker_ctrl_pane_g2

0x83d6,	// (0x00055892) main_radioblah_rocker_ctrl_pane_g3

0x83de,	// (0x0005589a) main_radioblah_rocker_ctrl_pane_g4

0x83e6,	// (0x000558a2) main_radioblah_rocker_ctrl_pane_g5

0x83ee,	// (0x000558aa) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0005d158) main_radioblah_rocker_ctrl_pane_g

0x7dd9,	// (0x00055295) main_cset_text2_pane_t1_copy1_ParamLimits

0xa0ca,	// (0x00057586) cam4_image_uncrop_qvga_pane

0xa123,	// (0x000575df) vid4_image_uncrop_qcif_pane

0xa26c,	// (0x00057728) cam6_image_uncrop_qvga_pane_ParamLimits

0xa26c,	// (0x00057728) cam6_image_uncrop_qvga_pane

0xdd43,	// (0x0005b1ff) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd43,	// (0x0005b1ff) vid6_image_uncrop_qcif_pane

0x9628,	// (0x00056ae4) bg_popup_preview_window_pane_cp03

0xe020,	// (0x0005b4dc) list_cset_text2_pane

0xe028,	// (0x0005b4e4) main_cset6_text2_pane_g1

0xe030,	// (0x0005b4ec) main_cset6_text2_pane_t1

0xe5a2,	// (0x0005ba5e) list_cset_text2_pane_t1_ParamLimits

0xe5a2,	// (0x0005ba5e) list_cset_text2_pane_t1

0xa4ad,	// (0x00057969) main_radioblah_pane_ParamLimits

0x811b,	// (0x000555d7) main_mobtv_info_pane_t3_ParamLimits

0x811b,	// (0x000555d7) main_mobtv_info_pane_t3

0x82b4,	// (0x00055770) main_radioblah_pane_g1

0x82ee,	// (0x000557aa) main_radioblah_info_pane_g1

0x8373,	// (0x0005582f) main_radioblah_info_pane_t3_ParamLimits

0x8373,	// (0x0005582f) main_radioblah_info_pane_t3

0x2de7,	// (0x000502a3) highlight_cell_cale_month_pane_ParamLimits

0x2de7,	// (0x000502a3) highlight_cell_cale_month_pane

0x9628,	// (0x00056ae4) main_phob_fisheye_pane

0xcee7,	// (0x0005a3a3) scroll_pane_cp0031_ParamLimits

0xcee7,	// (0x0005a3a3) scroll_pane_cp0031

0xde83,	// (0x0005b33f) wait_bar_pane_cp08_ParamLimits

0x7bb1,	// (0x0005506d) cset_list_set_pane_copy1_ParamLimits

0xe5bd,	// (0x0005ba79) highlight_cell_cale_month_pane_g1

0x83f6,	// (0x000558b2) highlight_cell_cale_month_pane_t1

0xdad4,	// (0x0005af90) list_gen_pane_cp01

0xd734,	// (0x0005abf0) scroll_pane_01

0xb300,	// (0x000587bc) list_single_double_fisheye_pane

0x8404,	// (0x000558c0) list_double_fisheye_pane_g1_ParamLimits

0x8404,	// (0x000558c0) list_double_fisheye_pane_g1

0x8410,	// (0x000558cc) list_double_fisheye_pane_g2_ParamLimits

0x8410,	// (0x000558cc) list_double_fisheye_pane_g2

0xb309,	// (0x000587c5) list_double_fisheye_pane_g3_ParamLimits

0xb309,	// (0x000587c5) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0005d165) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0005d165) list_double_fisheye_pane_g

0x8441,	// (0x000558fd) list_double_fisheye_pane_t1_ParamLimits

0x8441,	// (0x000558fd) list_double_fisheye_pane_t1

0x845c,	// (0x00055918) list_double_fisheye_pane_t2_ParamLimits

0x845c,	// (0x00055918) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0005d170) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0005d170) list_double_fisheye_pane_t

0x9628,	// (0x00056ae4) main_call5_pane

0x8212,	// (0x000556ce) sc_swipe_pane_ParamLimits

0x8212,	// (0x000556ce) sc_swipe_pane

0x8491,	// (0x0005594d) call5_image_pane_ParamLimits

0x8491,	// (0x0005594d) call5_image_pane

0x84ae,	// (0x0005596a) call5_swipe_1_pane_ParamLimits

0x84ae,	// (0x0005596a) call5_swipe_1_pane

0x84c1,	// (0x0005597d) call5_swipe_2_pane_ParamLimits

0x84c1,	// (0x0005597d) call5_swipe_2_pane

0x84ec,	// (0x000559a8) popup_call5_audio_first_window_ParamLimits

0x84ec,	// (0x000559a8) popup_call5_audio_first_window

0xce0b,	// (0x0005a2c7) call5_swipe_1_pane_g1_ParamLimits

0xce0b,	// (0x0005a2c7) call5_swipe_1_pane_g1

0xe5c5,	// (0x0005ba81) call5_swipe_1_pane_g2_ParamLimits

0xe5c5,	// (0x0005ba81) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0005d175) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0005d175) call5_swipe_1_pane_g

0xe5d1,	// (0x0005ba8d) call5_swipe_1_pane_t1_ParamLimits

0xe5d1,	// (0x0005ba8d) call5_swipe_1_pane_t1

0xce0b,	// (0x0005a2c7) call5_swipe_2_pane_g1_ParamLimits

0xce0b,	// (0x0005a2c7) call5_swipe_2_pane_g1

0xe5e6,	// (0x0005baa2) call5_swipe_2_pane_g2_ParamLimits

0xe5e6,	// (0x0005baa2) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0005d17a) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0005d17a) call5_swipe_2_pane_g

0xe5f2,	// (0x0005baae) call5_swipe_2_pane_t1_ParamLimits

0xe5f2,	// (0x0005baae) call5_swipe_2_pane_t1

0xe607,	// (0x0005bac3) sc_swipe_pane_g1_ParamLimits

0xe607,	// (0x0005bac3) sc_swipe_pane_g1

0xe614,	// (0x0005bad0) sc_swipe_pane_g2_ParamLimits

0xe614,	// (0x0005bad0) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0005d17f) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0005d17f) sc_swipe_pane_g

0xe620,	// (0x0005badc) sc_swipe_pane_t1_ParamLimits

0xe620,	// (0x0005badc) sc_swipe_pane_t1

0x9628,	// (0x00056ae4) main_cmail_launcher_pane

0x84fd,	// (0x000559b9) aid_size_cell_cmail_l_ParamLimits

0x84fd,	// (0x000559b9) aid_size_cell_cmail_l

0x8517,	// (0x000559d3) grid_cmail_l_pane_ParamLimits

0x8517,	// (0x000559d3) grid_cmail_l_pane

0x8532,	// (0x000559ee) cell_cmail_l_pane_ParamLimits

0x8532,	// (0x000559ee) cell_cmail_l_pane

0x8558,	// (0x00055a14) cell_cmail_l_pane_g1_ParamLimits

0x8558,	// (0x00055a14) cell_cmail_l_pane_g1

0x8569,	// (0x00055a25) cell_cmail_l_pane_t1_ParamLimits

0x8569,	// (0x00055a25) cell_cmail_l_pane_t1

0xe635,	// (0x0005baf1) cell_cmail_l_pane_t2_ParamLimits

0xe635,	// (0x0005baf1) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0005d184) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0005d184) cell_cmail_l_pane_t

0xa4ad,	// (0x00057969) grid_highlight_pane_cp018_ParamLimits

0xa4ad,	// (0x00057969) grid_highlight_pane_cp018

0x0d6e,	// (0x0004e22a) main2_pane_ParamLimits

0x0d6e,	// (0x0004e22a) main2_pane

0xa7cd,	// (0x00057c89) popup_sp_fs_action_menu_bg_pane_g1

0xa7d5,	// (0x00057c91) popup_sp_fs_action_menu_bg_pane_g2

0xa7dd,	// (0x00057c99) popup_sp_fs_action_menu_bg_pane_g3

0xa7e5,	// (0x00057ca1) popup_sp_fs_action_menu_bg_pane_g4

0xa7ed,	// (0x00057ca9) popup_sp_fs_action_menu_bg_pane_g5

0xa7f5,	// (0x00057cb1) popup_sp_fs_action_menu_bg_pane_g6

0xa7fd,	// (0x00057cb9) popup_sp_fs_action_menu_bg_pane_g7

0xa805,	// (0x00057cc1) popup_sp_fs_action_menu_bg_pane_g8

0xa80d,	// (0x00057cc9) popup_sp_fs_action_menu_bg_pane_g9

0xa815,	// (0x00057cd1) popup_sp_fs_action_menu_bg_pane_g10

0xa815,	// (0x00057cd1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0005c642) popup_sp_fs_action_menu_bg_pane_g

0x1da0,	// (0x0004f25c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x2_t3_g3_g1

0x003f,	// (0x0004d4fb) list_medium_line_x2_t3_g3_g2_ParamLimits

0x003f,	// (0x0004d4fb) list_medium_line_x2_t3_g3_g2

0x1dac,	// (0x0004f268) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1dac,	// (0x0004f268) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0005c6f4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0005c6f4) list_medium_line_x2_t3_g3_g

0x1db8,	// (0x0004f274) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1db8,	// (0x0004f274) list_medium_line_x2_t3_g3_t1

0x004b,	// (0x0004d507) list_medium_line_x2_t3_g3_t2_ParamLimits

0x004b,	// (0x0004d507) list_medium_line_x2_t3_g3_t2

0x1dcd,	// (0x0004f289) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1dcd,	// (0x0004f289) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0005c6fb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0005c6fb) list_medium_line_x2_t3_g3_t

0x1da0,	// (0x0004f25c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x2_t3_g2_g1

0x1dac,	// (0x0004f268) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1dac,	// (0x0004f268) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0005c702) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0005c702) list_medium_line_x2_t3_g2_g

0x1de2,	// (0x0004f29e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1de2,	// (0x0004f29e) list_medium_line_x2_t3_g2_t1

0x1df8,	// (0x0004f2b4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1df8,	// (0x0004f2b4) list_medium_line_x2_t3_g2_t2

0x1e0a,	// (0x0004f2c6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1e0a,	// (0x0004f2c6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0005c707) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0005c707) list_medium_line_x2_t3_g2_t

0x1da0,	// (0x0004f25c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x2_t4_g4_g1

0x005f,	// (0x0004d51b) list_medium_line_x2_t4_g4_g2_ParamLimits

0x005f,	// (0x0004d51b) list_medium_line_x2_t4_g4_g2

0x003f,	// (0x0004d4fb) list_medium_line_x2_t4_g4_g3_ParamLimits

0x003f,	// (0x0004d4fb) list_medium_line_x2_t4_g4_g3

0x006b,	// (0x0004d527) list_medium_line_x2_t4_g4_g4_ParamLimits

0x006b,	// (0x0004d527) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0005c70e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0005c70e) list_medium_line_x2_t4_g4_g

0x0077,	// (0x0004d533) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0077,	// (0x0004d533) list_medium_line_x2_t4_g4_t1

0x008e,	// (0x0004d54a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x008e,	// (0x0004d54a) list_medium_line_x2_t4_g4_t2

0x00a3,	// (0x0004d55f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x00a3,	// (0x0004d55f) list_medium_line_x2_t4_g4_t3

0x1e28,	// (0x0004f2e4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e28,	// (0x0004f2e4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0005c717) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0005c717) list_medium_line_x2_t4_g4_t

0x1da0,	// (0x0004f25c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x2_t2_g4_g1

0x005f,	// (0x0004d51b) list_medium_line_x2_t2_g4_g2_ParamLimits

0x005f,	// (0x0004d51b) list_medium_line_x2_t2_g4_g2

0x003f,	// (0x0004d4fb) list_medium_line_x2_t2_g4_g3_ParamLimits

0x003f,	// (0x0004d4fb) list_medium_line_x2_t2_g4_g3

0x1dac,	// (0x0004f268) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1dac,	// (0x0004f268) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0005c77e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0005c77e) list_medium_line_x2_t2_g4_g

0x2e0d,	// (0x000502c9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2e0d,	// (0x000502c9) list_medium_line_x2_t2_g4_t1

0x1dcd,	// (0x0004f289) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1dcd,	// (0x0004f289) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0005c787) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0005c787) list_medium_line_x2_t2_g4_t

0x1da0,	// (0x0004f25c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x2_t2_g3_g1

0x003f,	// (0x0004d4fb) list_medium_line_x2_t2_g3_g2_ParamLimits

0x003f,	// (0x0004d4fb) list_medium_line_x2_t2_g3_g2

0x1dac,	// (0x0004f268) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1dac,	// (0x0004f268) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0005c6f4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0005c6f4) list_medium_line_x2_t2_g3_g

0x2e22,	// (0x000502de) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2e22,	// (0x000502de) list_medium_line_x2_t2_g3_t1

0x1dcd,	// (0x0004f289) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1dcd,	// (0x0004f289) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0005c78c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0005c78c) list_medium_line_x2_t2_g3_t

0x2f61,	// (0x0005041d) main_sp_fs_list_pane_ParamLimits

0x2f61,	// (0x0005041d) main_sp_fs_list_pane

0xcfec,	// (0x0005a4a8) sp_fs_scroll_pane_ParamLimits

0xcfec,	// (0x0005a4a8) sp_fs_scroll_pane

0x00b5,	// (0x0004d571) list_medium_line_x2_t3_t1

0x00c5,	// (0x0004d581) list_medium_line_x2_t3_t2

0x2f6d,	// (0x00050429) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0005c7d7) list_medium_line_x2_t3_t

0x00d3,	// (0x0004d58f) list_medium_line_x3_t4_t1

0x00e3,	// (0x0004d59f) list_medium_line_x3_t4_t2

0x2f7b,	// (0x00050437) list_medium_line_x3_t4_t3

0x2f6d,	// (0x00050429) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0005c7de) list_medium_line_x3_t4_t

0x00f1,	// (0x0004d5ad) list_medium_line_x4_t5_t1

0x0101,	// (0x0004d5bd) list_medium_line_x4_t5_t2

0x2f7b,	// (0x00050437) list_medium_line_x4_t5_t3

0x010f,	// (0x0004d5cb) list_medium_line_x4_t5_t4

0x2f6d,	// (0x00050429) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0005c7e7) list_medium_line_x4_t5_t

0x1da0,	// (0x0004f25c) list_medium_line_t4_g4_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_t4_g4_g1

0x2f89,	// (0x00050445) list_medium_line_t4_g4_g2_ParamLimits

0x2f89,	// (0x00050445) list_medium_line_t4_g4_g2

0x011d,	// (0x0004d5d9) list_medium_line_t4_g4_g3_ParamLimits

0x011d,	// (0x0004d5d9) list_medium_line_t4_g4_g3

0x1dac,	// (0x0004f268) list_medium_line_t4_g4_g4_ParamLimits

0x1dac,	// (0x0004f268) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0005c7f2) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0005c7f2) list_medium_line_t4_g4_g

0x2f95,	// (0x00050451) list_medium_line_t4_g4_t1_ParamLimits

0x2f95,	// (0x00050451) list_medium_line_t4_g4_t1

0x2faa,	// (0x00050466) list_medium_line_t4_g4_t2_ParamLimits

0x2faa,	// (0x00050466) list_medium_line_t4_g4_t2

0x0129,	// (0x0004d5e5) list_medium_line_t4_g4_t3_ParamLimits

0x0129,	// (0x0004d5e5) list_medium_line_t4_g4_t3

0x1dcd,	// (0x0004f289) list_medium_line_t4_g4_t4_ParamLimits

0x1dcd,	// (0x0004f289) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0005c7fb) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0005c7fb) list_medium_line_t4_g4_t

0x305f,	// (0x0005051b) chi_dic_find_pane_g1

0x40c9,	// (0x00051585) main_tport_pane

0x6fd5,	// (0x00054491) list_medium_line_plain_t1

0x7087,	// (0x00054543) list_medium_line_t2_g2_g1_ParamLimits

0x7087,	// (0x00054543) list_medium_line_t2_g2_g1

0x7093,	// (0x0005454f) list_medium_line_t2_g2_g2_ParamLimits

0x7093,	// (0x0005454f) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0005cebc) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0005cebc) list_medium_line_t2_g2_g

0x028e,	// (0x0004d74a) list_medium_line_t2_g2_t1_ParamLimits

0x028e,	// (0x0004d74a) list_medium_line_t2_g2_t1

0x02a8,	// (0x0004d764) list_medium_line_t2_g2_t2_ParamLimits

0x02a8,	// (0x0004d764) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0005cec1) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0005cec1) list_medium_line_t2_g2_t

0x7627,	// (0x00054ae3) aid_sp_fs_list_icon_a_sm

0x762f,	// (0x00054aeb) aid_sp_fs_list_icon_d

0x7637,	// (0x00054af3) aid_sp_fs_text_primary

0x7640,	// (0x00054afc) aid_sp_fs_text_secondary

0xde7a,	// (0x0005b336) list_medium_line

0xde7a,	// (0x0005b336) list_medium_line_g2

0xde7a,	// (0x0005b336) list_medium_line_g3

0xde7a,	// (0x0005b336) list_medium_line_plain

0xde7a,	// (0x0005b336) list_medium_line_plain_t2

0xde7a,	// (0x0005b336) list_medium_line_plain_t3

0xde7a,	// (0x0005b336) list_medium_line_right_icon

0xde7a,	// (0x0005b336) list_medium_line_right_iconx2

0xde7a,	// (0x0005b336) list_medium_line_t2

0xde7a,	// (0x0005b336) list_medium_line_t2_g2

0xde7a,	// (0x0005b336) list_medium_line_t2_g3

0xde7a,	// (0x0005b336) list_medium_line_t2_right_icon

0xde7a,	// (0x0005b336) list_medium_line_t2_right_iconx2

0xde7a,	// (0x0005b336) list_medium_line_t3

0xde7a,	// (0x0005b336) list_medium_line_t3_g2

0xde7a,	// (0x0005b336) list_medium_line_t3_g3

0xde7a,	// (0x0005b336) list_medium_line_t3_right_iconx2

0x7649,	// (0x00054b05) list_medium_line_t4_g4

0x7652,	// (0x00054b0e) list_medium_line_x2

0x7652,	// (0x00054b0e) list_medium_line_x2_t2_g2

0x7652,	// (0x00054b0e) list_medium_line_x2_t2_g3

0x7652,	// (0x00054b0e) list_medium_line_x2_t2_g4

0x7652,	// (0x00054b0e) list_medium_line_x2_t3

0x7652,	// (0x00054b0e) list_medium_line_x2_t3_g2

0x7652,	// (0x00054b0e) list_medium_line_x2_t3_g3

0x7652,	// (0x00054b0e) list_medium_line_x2_t3_g4

0x7652,	// (0x00054b0e) list_medium_line_x2_t4_g2

0x7652,	// (0x00054b0e) list_medium_line_x2_t4_g4

0x765b,	// (0x00054b17) list_medium_line_x3

0x765b,	// (0x00054b17) list_medium_line_x3_t4

0x765b,	// (0x00054b17) list_medium_line_x3_t4_g4

0x7649,	// (0x00054b05) list_medium_line_x4_t4

0x7649,	// (0x00054b05) list_medium_line_x4_t4_g7

0x7649,	// (0x00054b05) list_medium_line_x4_t5

0x0437,	// (0x0004d8f3) list_single_fs_dyc_pane_ParamLimits

0x0437,	// (0x0004d8f3) list_single_fs_dyc_pane

0x1da0,	// (0x0004f25c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x4_t4_g7_g1

0x7d7f,	// (0x0005523b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d7f,	// (0x0005523b) list_medium_line_x4_t4_g7_g2

0x0477,	// (0x0004d933) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0477,	// (0x0004d933) list_medium_line_x4_t4_g7_g3

0x0486,	// (0x0004d942) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0486,	// (0x0004d942) list_medium_line_x4_t4_g7_g4

0x0492,	// (0x0004d94e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0492,	// (0x0004d94e) list_medium_line_x4_t4_g7_g5

0x04a1,	// (0x0004d95d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x04a1,	// (0x0004d95d) list_medium_line_x4_t4_g7_g6

0x7d8b,	// (0x00055247) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d8b,	// (0x00055247) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0005d08c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0005d08c) list_medium_line_x4_t4_g7_g

0x7d97,	// (0x00055253) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d97,	// (0x00055253) list_medium_line_x4_t4_g7_t1

0x04b0,	// (0x0004d96c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x04b0,	// (0x0004d96c) list_medium_line_x4_t4_g7_t2

0x04c5,	// (0x0004d981) list_medium_line_x4_t4_g7_t3_ParamLimits

0x04c5,	// (0x0004d981) list_medium_line_x4_t4_g7_t3

0x04da,	// (0x0004d996) list_medium_line_x4_t4_g7_t4_ParamLimits

0x04da,	// (0x0004d996) list_medium_line_x4_t4_g7_t4

0x7dac,	// (0x00055268) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7dac,	// (0x00055268) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0005d09b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0005d09b) list_medium_line_x4_t4_g7_t

0x7dbe,	// (0x0005527a) list_single_dyc_row_pane_ParamLimits

0x7dbe,	// (0x0005527a) list_single_dyc_row_pane

0x847e,	// (0x0005593a) call5_gesture_pane_ParamLimits

0x847e,	// (0x0005593a) call5_gesture_pane

0x84d4,	// (0x00055990) call5_windows_pane_ParamLimits

0x84d4,	// (0x00055990) call5_windows_pane

0x857f,	// (0x00055a3b) call5_swipe_1_pane_cp_ParamLimits

0x857f,	// (0x00055a3b) call5_swipe_1_pane_cp

0x858b,	// (0x00055a47) call5_swipe_2_pane_cp_ParamLimits

0x858b,	// (0x00055a47) call5_swipe_2_pane_cp

0xb396,	// (0x00058852) call5_image_pane_cp

0x8597,	// (0x00055a53) popup_call5_audio_first_window_cp_ParamLimits

0x8597,	// (0x00055a53) popup_call5_audio_first_window_cp

0xe607,	// (0x0005bac3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe607,	// (0x0005bac3) call5_swipe_1_pane_g1_cp

0xe647,	// (0x0005bb03) call5_swipe_1_pane_g2_cp

0xe620,	// (0x0005badc) call5_swipe_1_pane_t1_cp_ParamLimits

0xe620,	// (0x0005badc) call5_swipe_1_pane_t1_cp

0xe607,	// (0x0005bac3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe607,	// (0x0005bac3) call5_swipe_2_pane_g1_cp

0xe64f,	// (0x0005bb0b) call5_swipe_2_pane_g2_cp

0xe657,	// (0x0005bb13) call5_swipe_2_pane_t1_cp_ParamLimits

0xe657,	// (0x0005bb13) call5_swipe_2_pane_t1_cp

0xa4ad,	// (0x00057969) main_sp_fs_email_pane

0xe66c,	// (0x0005bb28) main_sp_fs_listscroll_pane_te

0x85a5,	// (0x00055a61) popup_sp_fs_action_menu_pane_ParamLimits

0x85a5,	// (0x00055a61) popup_sp_fs_action_menu_pane

0xcbab,	// (0x0005a067) bg_sp_fs_ctrlbar_pane_g1

0xe675,	// (0x0005bb31) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe67e,	// (0x0005bb3a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe687,	// (0x0005bb43) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbab,	// (0x0005a067) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0005d189) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc98e,	// (0x00059e4a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc98e,	// (0x00059e4a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe690,	// (0x0005bb4c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe690,	// (0x0005bb4c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe69c,	// (0x0005bb58) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe69c,	// (0x0005bb58) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0005d192) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0005d192) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6a8,	// (0x0005bb64) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6a8,	// (0x0005bb64) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x85e7,	// (0x00055aa3) list_medium_line_t2_right_icon_g1

0x04ec,	// (0x0004d9a8) list_medium_line_t2_right_icon_t1

0x04fc,	// (0x0004d9b8) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0005d197) list_medium_line_t2_right_icon_t

0xc7a1,	// (0x00059c5d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7a1,	// (0x00059c5d) bg_sp_fs_ctrlbar_pane

0x8637,	// (0x00055af3) main_sp_fs_ctrlbar_button_pane_cp01

0x8641,	// (0x00055afd) main_sp_fs_ctrlbar_ddmenu_pane

0xe6fa,	// (0x0005bbb6) main_sp_fs_ctrlbar_pane_g1

0xe706,	// (0x0005bbc2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0005d19c) main_sp_fs_ctrlbar_pane_g

0xe712,	// (0x0005bbce) main_sp_fs_ctrlbar_pane_t1

0x864b,	// (0x00055b07) main_sp_fs_ctrlbar_pane

0x866f,	// (0x00055b2b) main_sp_fs_listscroll_pane_te_cp01

0x050e,	// (0x0004d9ca) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x050e,	// (0x0004d9ca) popup_sp_fs_action_menu_pane_cp01

0xa4ad,	// (0x00057969) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4ad,	// (0x00057969) bg_sp_fs_highlight_list_pane_cp01

0x868f,	// (0x00055b4b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x868f,	// (0x00055b4b) sp_fs_action_menu_list_gene_pane_g1

0xe742,	// (0x0005bbfe) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe742,	// (0x0005bbfe) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005d1a6) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005d1a6) sp_fs_action_menu_list_gene_pane_g

0x869e,	// (0x00055b5a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x869e,	// (0x00055b5a) sp_fs_action_menu_list_gene_pane_t1

0x86b6,	// (0x00055b72) sp_fs_action_menu_list_gene_pane_ParamLimits

0x86b6,	// (0x00055b72) sp_fs_action_menu_list_gene_pane

0xe74f,	// (0x0005bc0b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe74f,	// (0x0005bc0b) popup_sp_fs_action_menu_bg_pane

0x86d3,	// (0x00055b8f) sp_fs_action_menu_list_pane_ParamLimits

0x86d3,	// (0x00055b8f) sp_fs_action_menu_list_pane

0x053e,	// (0x0004d9fa) sp_fs_scroll_pane_cp01_ParamLimits

0x053e,	// (0x0004d9fa) sp_fs_scroll_pane_cp01

0x0564,	// (0x0004da20) list_medium_line_plain_t2_t1

0x0574,	// (0x0004da30) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0005d1ab) list_medium_line_plain_t2_t

0x0584,	// (0x0004da40) list_medium_line_plain_t3_t1

0x0594,	// (0x0004da50) list_medium_line_plain_t3_t2

0x05a2,	// (0x0004da5e) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0005d1b0) list_medium_line_plain_t3_t

0x1da0,	// (0x0004f25c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x2_t2_g2_g1

0x1dac,	// (0x0004f268) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1dac,	// (0x0004f268) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0005c702) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0005c702) list_medium_line_x2_t2_g2_g

0x2f95,	// (0x00050451) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2f95,	// (0x00050451) list_medium_line_x2_t2_g2_t1

0x1dcd,	// (0x0004f289) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1dcd,	// (0x0004f289) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005d1b7) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005d1b7) list_medium_line_x2_t2_g2_t

0x1da0,	// (0x0004f25c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x2_t4_g2_g1

0x05b0,	// (0x0004da6c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x05b0,	// (0x0004da6c) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0005d1bc) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0005d1bc) list_medium_line_x2_t4_g2_g

0x05c1,	// (0x0004da7d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x05c1,	// (0x0004da7d) list_medium_line_x2_t4_g2_t1

0x05db,	// (0x0004da97) list_medium_line_x2_t4_g2_t2_ParamLimits

0x05db,	// (0x0004da97) list_medium_line_x2_t4_g2_t2

0x05f0,	// (0x0004daac) list_medium_line_x2_t4_g2_t3_ParamLimits

0x05f0,	// (0x0004daac) list_medium_line_x2_t4_g2_t3

0x1dcd,	// (0x0004f289) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1dcd,	// (0x0004f289) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0005d1c1) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0005d1c1) list_medium_line_x2_t4_g2_t

0x86f1,	// (0x00055bad) list_medium_line_t3_right_iconx2_g1

0x85e7,	// (0x00055aa3) list_medium_line_t3_right_iconx2_g2

0x0605,	// (0x0004dac1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0005d1ca) list_medium_line_t3_right_iconx2_g

0x060f,	// (0x0004dacb) list_medium_line_t3_right_iconx2_t1

0x061f,	// (0x0004dadb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0005d1d1) list_medium_line_t3_right_iconx2_t

0x1da0,	// (0x0004f25c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x3_t4_g4_g1

0x003f,	// (0x0004d4fb) list_medium_line_x3_t4_g4_g2_ParamLimits

0x003f,	// (0x0004d4fb) list_medium_line_x3_t4_g4_g2

0x2f89,	// (0x00050445) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2f89,	// (0x00050445) list_medium_line_x3_t4_g4_g3

0x062d,	// (0x0004dae9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x062d,	// (0x0004dae9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0005d1d6) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0005d1d6) list_medium_line_x3_t4_g4_g

0x0639,	// (0x0004daf5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0639,	// (0x0004daf5) list_medium_line_x3_t4_g4_t1

0x0650,	// (0x0004db0c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0650,	// (0x0004db0c) list_medium_line_x3_t4_g4_t2

0x86f9,	// (0x00055bb5) list_medium_line_x3_t4_g4_t3_ParamLimits

0x86f9,	// (0x00055bb5) list_medium_line_x3_t4_g4_t3

0x066b,	// (0x0004db27) list_medium_line_x3_t4_g4_t4_ParamLimits

0x066b,	// (0x0004db27) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0005d1df) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0005d1df) list_medium_line_x3_t4_g4_t

0x0687,	// (0x0004db43) list_single_dyc_row_text_pane_t1_ParamLimits

0x0687,	// (0x0004db43) list_single_dyc_row_text_pane_t1

0x06d0,	// (0x0004db8c) list_single_dyc_row_text_pane_t2_ParamLimits

0x06d0,	// (0x0004db8c) list_single_dyc_row_text_pane_t2

0x870e,	// (0x00055bca) list_single_dyc_row_text_pane_t3_ParamLimits

0x870e,	// (0x00055bca) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0005d1e8) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0005d1e8) list_single_dyc_row_text_pane_t

0x8732,	// (0x00055bee) list_single_dyc_row_pane_g1_ParamLimits

0x8732,	// (0x00055bee) list_single_dyc_row_pane_g1

0x873e,	// (0x00055bfa) list_single_dyc_row_pane_g2_ParamLimits

0x873e,	// (0x00055bfa) list_single_dyc_row_pane_g2

0x874a,	// (0x00055c06) list_single_dyc_row_pane_g3_ParamLimits

0x874a,	// (0x00055c06) list_single_dyc_row_pane_g3

0x8756,	// (0x00055c12) list_single_dyc_row_pane_g4_ParamLimits

0x8756,	// (0x00055c12) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005d1f5) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005d1f5) list_single_dyc_row_pane_g

0x8762,	// (0x00055c1e) list_single_dyc_row_text_pane_ParamLimits

0x8762,	// (0x00055c1e) list_single_dyc_row_text_pane

0x9628,	// (0x00056ae4) bg_sp_fs_scroll_pane

0xe75d,	// (0x0005bc19) thumb_sp_fs_scroll_pane

0x7087,	// (0x00054543) list_medium_line_g1_ParamLimits

0x7087,	// (0x00054543) list_medium_line_g1

0x8781,	// (0x00055c3d) list_medium_line_t1_ParamLimits

0x8781,	// (0x00055c3d) list_medium_line_t1

0x1da0,	// (0x0004f25c) list_medium_line_x2_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x2_g1

0x003f,	// (0x0004d4fb) list_medium_line_x2_g2_ParamLimits

0x003f,	// (0x0004d4fb) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005d1fe) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005d1fe) list_medium_line_x2_g

0x8796,	// (0x00055c52) list_medium_line_x2_t1_ParamLimits

0x8796,	// (0x00055c52) list_medium_line_x2_t1

0x1da0,	// (0x0004f25c) list_medium_line_x3_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x3_g1

0x003f,	// (0x0004d4fb) list_medium_line_x3_g2_ParamLimits

0x003f,	// (0x0004d4fb) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005d1fe) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005d1fe) list_medium_line_x3_g

0x8796,	// (0x00055c52) list_medium_line_x3_t1_ParamLimits

0x8796,	// (0x00055c52) list_medium_line_x3_t1

0xe766,	// (0x0005bc22) thumb_sp_fs_scroll_pane_g1

0xe76f,	// (0x0005bc2b) thumb_sp_fs_scroll_pane_g2

0xe778,	// (0x0005bc34) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005d203) thumb_sp_fs_scroll_pane_g

0xe766,	// (0x0005bc22) bg_sp_fs_scroll_pane_g1

0xe76f,	// (0x0005bc2b) bg_sp_fs_scroll_pane_g2

0xe778,	// (0x0005bc34) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005d203) bg_sp_fs_scroll_pane_g

0x1da0,	// (0x0004f25c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1da0,	// (0x0004f25c) list_medium_line_x2_t3_g4_g1

0x005f,	// (0x0004d51b) list_medium_line_x2_t3_g4_g2_ParamLimits

0x005f,	// (0x0004d51b) list_medium_line_x2_t3_g4_g2

0x003f,	// (0x0004d4fb) list_medium_line_x2_t3_g4_g3_ParamLimits

0x003f,	// (0x0004d4fb) list_medium_line_x2_t3_g4_g3

0x1dac,	// (0x0004f268) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1dac,	// (0x0004f268) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0005c77e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0005c77e) list_medium_line_x2_t3_g4_g

0x0805,	// (0x0004dcc1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0805,	// (0x0004dcc1) list_medium_line_x2_t3_g4_t1

0x081f,	// (0x0004dcdb) list_medium_line_x2_t3_g4_t2_ParamLimits

0x081f,	// (0x0004dcdb) list_medium_line_x2_t3_g4_t2

0x1dcd,	// (0x0004f289) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1dcd,	// (0x0004f289) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0005d20a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0005d20a) list_medium_line_x2_t3_g4_t

0x7087,	// (0x00054543) list_medium_line_g2_g1_ParamLimits

0x7087,	// (0x00054543) list_medium_line_g2_g1

0x7093,	// (0x0005454f) list_medium_line_g2_g2_ParamLimits

0x7093,	// (0x0005454f) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0005cebc) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0005cebc) list_medium_line_g2_g

0x87ac,	// (0x00055c68) list_medium_line_g2_t1_ParamLimits

0x87ac,	// (0x00055c68) list_medium_line_g2_t1

0x7087,	// (0x00054543) list_medium_line_t3_g2_g1_ParamLimits

0x7087,	// (0x00054543) list_medium_line_t3_g2_g1

0x7093,	// (0x0005454f) list_medium_line_t3_g2_g2_ParamLimits

0x7093,	// (0x0005454f) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0005cebc) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0005cebc) list_medium_line_t3_g2_g

0x0838,	// (0x0004dcf4) list_medium_line_t3_g2_t1_ParamLimits

0x0838,	// (0x0004dcf4) list_medium_line_t3_g2_t1

0x0852,	// (0x0004dd0e) list_medium_line_t3_g2_t2_ParamLimits

0x0852,	// (0x0004dd0e) list_medium_line_t3_g2_t2

0x0867,	// (0x0004dd23) list_medium_line_t3_g2_t3_ParamLimits

0x0867,	// (0x0004dd23) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0005d211) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0005d211) list_medium_line_t3_g2_t

0x85e7,	// (0x00055aa3) list_medium_line_right_icon_g1

0x87c1,	// (0x00055c7d) list_medium_line_right_icon_t1

0x7087,	// (0x00054543) list_medium_line_t2_g1_ParamLimits

0x7087,	// (0x00054543) list_medium_line_t2_g1

0x0881,	// (0x0004dd3d) list_medium_line_t2_t1_ParamLimits

0x0881,	// (0x0004dd3d) list_medium_line_t2_t1

0x089b,	// (0x0004dd57) list_medium_line_t2_t2_ParamLimits

0x089b,	// (0x0004dd57) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0005d218) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0005d218) list_medium_line_t2_t

0x7087,	// (0x00054543) list_medium_line_t3_g1_ParamLimits

0x7087,	// (0x00054543) list_medium_line_t3_g1

0x08b4,	// (0x0004dd70) list_medium_line_t3_t1_ParamLimits

0x08b4,	// (0x0004dd70) list_medium_line_t3_t1

0x08cb,	// (0x0004dd87) list_medium_line_t3_t2_ParamLimits

0x08cb,	// (0x0004dd87) list_medium_line_t3_t2

0x08e0,	// (0x0004dd9c) list_medium_line_t3_t3_ParamLimits

0x08e0,	// (0x0004dd9c) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0005d21d) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0005d21d) list_medium_line_t3_t

0x7087,	// (0x00054543) list_medium_line_g3_g1_ParamLimits

0x7087,	// (0x00054543) list_medium_line_g3_g1

0x87cf,	// (0x00055c8b) list_medium_line_g3_g2_ParamLimits

0x87cf,	// (0x00055c8b) list_medium_line_g3_g2

0x7093,	// (0x0005454f) list_medium_line_g3_g3_ParamLimits

0x7093,	// (0x0005454f) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0005d224) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0005d224) list_medium_line_g3_g

0xa27a,	// (0x00057736) list_medium_line_g3_t1_ParamLimits

0xa27a,	// (0x00057736) list_medium_line_g3_t1

0x7087,	// (0x00054543) list_medium_line_t2_g3_g1_ParamLimits

0x7087,	// (0x00054543) list_medium_line_t2_g3_g1

0x87cf,	// (0x00055c8b) list_medium_line_t2_g3_g2_ParamLimits

0x87cf,	// (0x00055c8b) list_medium_line_t2_g3_g2

0x7093,	// (0x0005454f) list_medium_line_t2_g3_g3_ParamLimits

0x7093,	// (0x0005454f) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0005d224) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0005d224) list_medium_line_t2_g3_g

0x08f2,	// (0x0004ddae) list_medium_line_t2_g3_t1_ParamLimits

0x08f2,	// (0x0004ddae) list_medium_line_t2_g3_t1

0x090c,	// (0x0004ddc8) list_medium_line_t2_g3_t2_ParamLimits

0x090c,	// (0x0004ddc8) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0005d22b) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0005d22b) list_medium_line_t2_g3_t

0x7087,	// (0x00054543) list_medium_line_t3_g3_g1_ParamLimits

0x7087,	// (0x00054543) list_medium_line_t3_g3_g1

0x87cf,	// (0x00055c8b) list_medium_line_t3_g3_g2_ParamLimits

0x87cf,	// (0x00055c8b) list_medium_line_t3_g3_g2

0x7093,	// (0x0005454f) list_medium_line_t3_g3_g3_ParamLimits

0x7093,	// (0x0005454f) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0005d224) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0005d224) list_medium_line_t3_g3_g

0x0927,	// (0x0004dde3) list_medium_line_t3_g3_t1_ParamLimits

0x0927,	// (0x0004dde3) list_medium_line_t3_g3_t1

0x0940,	// (0x0004ddfc) list_medium_line_t3_g3_t2_ParamLimits

0x0940,	// (0x0004ddfc) list_medium_line_t3_g3_t2

0x0956,	// (0x0004de12) list_medium_line_t3_g3_t3_ParamLimits

0x0956,	// (0x0004de12) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0005d230) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0005d230) list_medium_line_t3_g3_t

0x86f1,	// (0x00055bad) list_medium_line_right_iconx2_g1

0x85e7,	// (0x00055aa3) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005d237) list_medium_line_right_iconx2_g

0xa28f,	// (0x0005774b) list_medium_line_right_iconx2_t1

0x86f1,	// (0x00055bad) list_medium_line_t2_right_iconx2_g1

0x85e7,	// (0x00055aa3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005d237) list_medium_line_t2_right_iconx2_g

0x0970,	// (0x0004de2c) list_medium_line_t2_right_iconx2_t1

0x0980,	// (0x0004de3c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0005d23c) list_medium_line_t2_right_iconx2_t

0xa29d,	// (0x00057759) list_medium_line_x4_t4_t1

0x0992,	// (0x0004de4e) list_medium_line_x4_t4_t2

0x09a2,	// (0x0004de5e) list_medium_line_x4_t4_t3

0x09b2,	// (0x0004de6e) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0005d241) list_medium_line_x4_t4_t

0x881e,	// (0x00055cda) tport_appsw_pane_ParamLimits

0x881e,	// (0x00055cda) tport_appsw_pane

0x8836,	// (0x00055cf2) tport_contact_pane_ParamLimits

0x8836,	// (0x00055cf2) tport_contact_pane

0x884e,	// (0x00055d0a) tport_listscroll_pane_ParamLimits

0x884e,	// (0x00055d0a) tport_listscroll_pane

0x8868,	// (0x00055d24) cell_tport_appsw_pane_ParamLimits

0x8868,	// (0x00055d24) cell_tport_appsw_pane

0xd5fa,	// (0x0005aab6) tport_appsw_pane_g1_ParamLimits

0xd5fa,	// (0x0005aab6) tport_appsw_pane_g1

0xe781,	// (0x0005bc3d) tport_contact_pane_g1

0xe0f4,	// (0x0005b5b0) tport_contact_pane_t1

0xe78a,	// (0x0005bc46) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0005d24a) tport_contact_pane_t

0xe798,	// (0x0005bc54) list_tport_pane

0xe7a1,	// (0x0005bc5d) scroll_pane_cp_030

0x88b0,	// (0x00055d6c) cell_tport_appsw_pane_g1

0x88c0,	// (0x00055d7c) cell_tport_appsw_pane_t1

0x88ce,	// (0x00055d8a) grid_highlight_pane_cp019

0x88d6,	// (0x00055d92) list_tport_double_graphic_pane_ParamLimits

0x88d6,	// (0x00055d92) list_tport_double_graphic_pane

0xa4ad,	// (0x00057969) list_highlight_pane_cp023_ParamLimits

0xa4ad,	// (0x00057969) list_highlight_pane_cp023

0x88e3,	// (0x00055d9f) list_tport_double_graphic_pane_g1_ParamLimits

0x88e3,	// (0x00055d9f) list_tport_double_graphic_pane_g1

0x88f0,	// (0x00055dac) list_tport_double_graphic_pane_t1_ParamLimits

0x88f0,	// (0x00055dac) list_tport_double_graphic_pane_t1

0x8905,	// (0x00055dc1) list_tport_double_graphic_pane_t2_ParamLimits

0x8905,	// (0x00055dc1) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005d256) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005d256) list_tport_double_graphic_pane_t

0x9628,	// (0x00056ae4) main_cale_note_pane

0x681c,	// (0x00053cd8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x681c,	// (0x00053cd8) cell_vitu2_function_top_wide_pane_cp01

0x812f,	// (0x000555eb) wait_bar_pane_cp05_ParamLimits

0xa4ad,	// (0x00057969) listscroll_cmail_pane

0xe7aa,	// (0x0005bc66) list_cmail_pane

0x8917,	// (0x00055dd3) list_cmail_body_pane

0x892c,	// (0x00055de8) list_single_cmail_header_caption_pane

0x8945,	// (0x00055e01) list_single_cmail_header_detail_pane_ParamLimits

0x8945,	// (0x00055e01) list_single_cmail_header_detail_pane

0xe7ba,	// (0x0005bc76) list_single_cmail_header_caption_pane_t1

0x09c2,	// (0x0004de7e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x09c2,	// (0x0004de7e) list_single_cmail_header_detail_pane_g1

0xa2ab,	// (0x00057767) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa2ab,	// (0x00057767) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0005d25b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0005d25b) list_single_cmail_header_detail_pane_g

0x09da,	// (0x0004de96) list_single_cmail_header_detail_pane_t1_ParamLimits

0x09da,	// (0x0004de96) list_single_cmail_header_detail_pane_t1

0x0a18,	// (0x0004ded4) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0a18,	// (0x0004ded4) list_single_cmail_header_editor_pane_bg

0xe7de,	// (0x0005bc9a) list_cmail_body_pane_g1

0xe7e7,	// (0x0005bca3) list_cmail_body_pane_t1

0xd61a,	// (0x0005aad6) list_single_cmail_header_editor_pane_bg_g1

0xab42,	// (0x00057ffe) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd62a,	// (0x0005aae6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd622,	// (0x0005aade) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd859,	// (0x0005ad15) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd64a,	// (0x0005ab06) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd63a,	// (0x0005aaf6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd642,	// (0x0005aafe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab22,	// (0x00057fde) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x896e,	// (0x00055e2a) calenote_gesture_pane_ParamLimits

0x896e,	// (0x00055e2a) calenote_gesture_pane

0x898e,	// (0x00055e4a) calenote_window_pane_ParamLimits

0x898e,	// (0x00055e4a) calenote_window_pane

0xe7f5,	// (0x0005bcb1) popup_note_window_cp01

0x89aa,	// (0x00055e66) calenote_swipe_1_pane_ParamLimits

0x89aa,	// (0x00055e66) calenote_swipe_1_pane

0x858b,	// (0x00055a47) calenote_swipe_2_pane_ParamLimits

0x858b,	// (0x00055a47) calenote_swipe_2_pane

0xe607,	// (0x0005bac3) calenote_swipe_1_pane_g1_ParamLimits

0xe607,	// (0x0005bac3) calenote_swipe_1_pane_g1

0xe614,	// (0x0005bad0) calenote_swipe_1_pane_g2_ParamLimits

0xe614,	// (0x0005bad0) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0005d17f) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0005d17f) calenote_swipe_1_pane_g

0xe807,	// (0x0005bcc3) calenote_swipe_1_pane_t1_ParamLimits

0xe807,	// (0x0005bcc3) calenote_swipe_1_pane_t1

0xe607,	// (0x0005bac3) calenote_swipe_2_pane_g1_ParamLimits

0xe607,	// (0x0005bac3) calenote_swipe_2_pane_g1

0xe826,	// (0x0005bce2) calenote_swipe_2_pane_g2_ParamLimits

0xe826,	// (0x0005bce2) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0005d267) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0005d267) calenote_swipe_2_pane_g

0xe832,	// (0x0005bcee) calenote_swipe_2_pane_t1_ParamLimits

0xe832,	// (0x0005bcee) calenote_swipe_2_pane_t1

0x9628,	// (0x00056ae4) main_mup_navstr_pane

0x54d4,	// (0x00052990) main_mup3_pane_t7_ParamLimits

0x54d4,	// (0x00052990) main_mup3_pane_t7

0x9ee8,	// (0x000573a4) main_mp4_pane_g6_ParamLimits

0x9ee8,	// (0x000573a4) main_mp4_pane_g6

0xa08c,	// (0x00057548) main_image3_pane_t4_ParamLimits

0xa08c,	// (0x00057548) main_image3_pane_t4

0x89bf,	// (0x00055e7b) popup_navstr_preview_pane_ParamLimits

0x89bf,	// (0x00055e7b) popup_navstr_preview_pane

0x89d3,	// (0x00055e8f) scroll_navstr_pane_ParamLimits

0x89d3,	// (0x00055e8f) scroll_navstr_pane

0x9628,	// (0x00056ae4) bg_popup_preview_window_pane_cp04

0xe859,	// (0x0005bd15) popup_navstr_preview_pane_t1

0x89e7,	// (0x00055ea3) scroll_navstr_pane_g1_ParamLimits

0x89e7,	// (0x00055ea3) scroll_navstr_pane_g1

0x89fb,	// (0x00055eb7) scroll_navstr_pane_t1_ParamLimits

0x89fb,	// (0x00055eb7) scroll_navstr_pane_t1

0xe7fe,	// (0x0005bcba) bg_button_pane_cp014

0xe7fe,	// (0x0005bcba) bg_button_pane_cp030

0x8424,	// (0x000558e0) list_double_fisheye_pane_g4_ParamLimits

0x8424,	// (0x000558e0) list_double_fisheye_pane_g4

0x8430,	// (0x000558ec) list_double_fisheye_pane_g5_ParamLimits

0x8430,	// (0x000558ec) list_double_fisheye_pane_g5

0xcfec,	// (0x0005a4a8) sp_fs_scroll_pane_cp03

0xe6fa,	// (0x0005bbb6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe706,	// (0x0005bbc2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0005d19c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe712,	// (0x0005bbce) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7b2,	// (0x0005bc6e) sp_fs_scroll_pane_cp02

0xa838,	// (0x00057cf4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa838,	// (0x00057cf4) popup_sp_fs_calendar_preview_list_single_pane

0x9628,	// (0x00056ae4) main_cam6_pano_pane

0xa4ad,	// (0x00057969) main_mup3_pane_ParamLimits

0x9628,	// (0x00056ae4) main_phacti_pane

0x8002,	// (0x000554be) bg_button_pane_cp11

0x801c,	// (0x000554d8) main_mobtv_info_pane_g2_ParamLimits

0x801c,	// (0x000554d8) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0005d0fc) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0005d0fc) main_mobtv_info_pane_g

0x81f9,	// (0x000556b5) sc_clock_pane_t5_ParamLimits

0x81f9,	// (0x000556b5) sc_clock_pane_t5

0x82b4,	// (0x00055770) main_radioblah_pane_g1_ParamLimits

0xe538,	// (0x0005b9f4) main_radioblah_pane_t3_ParamLimits

0xe538,	// (0x0005b9f4) main_radioblah_pane_t3

0xe550,	// (0x0005ba0c) main_radioblah_pane_t4_ParamLimits

0xe550,	// (0x0005ba0c) main_radioblah_pane_t4

0x82dc,	// (0x00055798) main_radioblah_text_pane_ParamLimits

0x82dc,	// (0x00055798) main_radioblah_text_pane

0x82ee,	// (0x000557aa) main_radioblah_info_pane_g1_ParamLimits

0x8387,	// (0x00055843) main_radioblah_info_pane_t4_ParamLimits

0x8387,	// (0x00055843) main_radioblah_info_pane_t4

0xa4ad,	// (0x00057969) main_sp_fs_calendar_pane

0x8a11,	// (0x00055ecd) main_phacti_pane_g1

0x8a19,	// (0x00055ed5) phacti_note_pane_ParamLimits

0x8a19,	// (0x00055ed5) phacti_note_pane

0xe870,	// (0x0005bd2c) phacti_term_pane_ParamLimits

0xe870,	// (0x0005bd2c) phacti_term_pane

0xe885,	// (0x0005bd41) phacti_note_pane_t1_ParamLimits

0xe885,	// (0x0005bd41) phacti_note_pane_t1

0xa2db,	// (0x00057797) phacti_term_pane_g1

0xa2e3,	// (0x0005779f) phacti_term_pane_t1_ParamLimits

0xa2e3,	// (0x0005779f) phacti_term_pane_t1

0xe89c,	// (0x0005bd58) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a4,	// (0x0005bd60) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0005d271) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8ac,	// (0x0005bd68) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8ac,	// (0x0005bd68) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c2,	// (0x0005bd7e) aid_popup_sp_fs_bg_corner_pane

0xcbab,	// (0x0005a067) popup_sp_fs_calendar_preview_bg_pane_g1

0x9628,	// (0x00056ae4) popup_sp_fs_calendar_preview_bg_pane

0x1c29,	// (0x0004f0e5) popup_sp_fs_calendar_preview_list_pane

0xc7a1,	// (0x00059c5d) bg_main_sp_fs_cale_pane_ParamLimits

0xc7a1,	// (0x00059c5d) bg_main_sp_fs_cale_pane

0xa30d,	// (0x000577c9) listscroll_cale_mrui_pane_ParamLimits

0xa30d,	// (0x000577c9) listscroll_cale_mrui_pane

0xa322,	// (0x000577de) listscroll_sp_fs_schedule_track_pane

0xa32b,	// (0x000577e7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa32b,	// (0x000577e7) main_sp_fs_ctrlbar_pane_cp01

0xe8ca,	// (0x0005bd86) main_sp_fs_ribbon_pane

0xa33e,	// (0x000577fa) popup_sp_fs_cale_preview_window

0x8a8e,	// (0x00055f4a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a8e,	// (0x00055f4a) list_single_sp_fs_schedule_track_pane

0xa4ad,	// (0x00057969) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa4ad,	// (0x00057969) bg_sp_fs_highlight_list_pane_cp03

0x8aa4,	// (0x00055f60) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8aa4,	// (0x00055f60) list_single_sp_fs_schedule_track_pane_g1

0x8ab0,	// (0x00055f6c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ab0,	// (0x00055f6c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0005d276) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0005d276) list_single_sp_fs_schedule_track_pane_g

0x8abc,	// (0x00055f78) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8abc,	// (0x00055f78) list_single_sp_fs_schedule_track_pane_t1

0x8ad6,	// (0x00055f92) sp_fs_schedule_track_pane_ParamLimits

0x8ad6,	// (0x00055f92) sp_fs_schedule_track_pane

0xe8d2,	// (0x0005bd8e) sp_fs_schedule_track_pane_g1

0xe8da,	// (0x0005bd96) sp_fs_schedule_track_pane_g2

0xe8e2,	// (0x0005bd9e) sp_fs_schedule_track_pane_g3

0xe8ea,	// (0x0005bda6) sp_fs_schedule_track_pane_g4

0xe8f2,	// (0x0005bdae) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0005d27b) sp_fs_schedule_track_pane_g

0xd61a,	// (0x0005aad6) bg_sp_fs_schedule_viewer_highlight_g1

0xab42,	// (0x00057ffe) bg_sp_fs_schedule_viewer_highlight_g2

0xd622,	// (0x0005aade) bg_sp_fs_schedule_viewer_highlight_g3

0xd62a,	// (0x0005aae6) bg_sp_fs_schedule_viewer_highlight_g4

0xd859,	// (0x0005ad15) bg_sp_fs_schedule_viewer_highlight_g5

0xd63a,	// (0x0005aaf6) bg_sp_fs_schedule_viewer_highlight_g6

0xd642,	// (0x0005aafe) bg_sp_fs_schedule_viewer_highlight_g7

0xd64a,	// (0x0005ab06) bg_sp_fs_schedule_viewer_highlight_g8

0xab22,	// (0x00057fde) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0005d286) bg_sp_fs_schedule_viewer_highlight_g

0x9628,	// (0x00056ae4) bg_main_sp_fs_ribbon_pane

0x8ae7,	// (0x00055fa3) main_sp_fs_ribbon_pane_g1

0xe8fa,	// (0x0005bdb6) main_sp_fs_ribbon_pane_t1

0x8af0,	// (0x00055fac) main_sp_fs_ribbon_pane_t2

0xe909,	// (0x0005bdc5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0005d299) main_sp_fs_ribbon_pane_t

0xe918,	// (0x0005bdd4) main_sp_fs_ribbon_scheduler_pane

0xe920,	// (0x0005bddc) bg_main_sp_fs_ribbon_pane_g1

0xe929,	// (0x0005bde5) bg_main_sp_fs_ribbon_pane_g2

0xe932,	// (0x0005bdee) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0005d2a0) bg_main_sp_fs_ribbon_pane_g

0xe93a,	// (0x0005bdf6) main_sp_fs_ribbon_scheduler_pane_g1

0xe943,	// (0x0005bdff) main_sp_fs_ribbon_scheduler_pane_g2

0xe94c,	// (0x0005be08) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0005d2a7) main_sp_fs_ribbon_scheduler_pane_g

0xe955,	// (0x0005be11) list_cale_mrui_pane

0x8aff,	// (0x00055fbb) sp_fs_scroll_pane_cp07_ParamLimits

0x8aff,	// (0x00055fbb) sp_fs_scroll_pane_cp07

0x8b1b,	// (0x00055fd7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b1b,	// (0x00055fd7) bg_sp_fs_schedule_viewer_highlight

0xe962,	// (0x0005be1e) list_single_sp_fs_schedule_track_pane_cp01

0xe96a,	// (0x0005be26) list_sp_fs_schedule_track_pane

0xe972,	// (0x0005be2e) sp_fs_scroll_pane_cp06_ParamLimits

0xe972,	// (0x0005be2e) sp_fs_scroll_pane_cp06

0xcbab,	// (0x0005a067) bgmain_sp_fs_calendar_pane_g1

0x0a31,	// (0x0004deed) list_single_cale_mrui_pane_ParamLimits

0x0a31,	// (0x0004deed) list_single_cale_mrui_pane

0xa350,	// (0x0005780c) list_single_cale_mrui_row_pane_ParamLimits

0xa350,	// (0x0005780c) list_single_cale_mrui_row_pane

0xa35d,	// (0x00057819) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa35d,	// (0x00057819) list_single_cale_mrui_row_pane_g1

0xa395,	// (0x00057851) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa395,	// (0x00057851) list_single_cale_mrui_row_pane_t1

0x0a53,	// (0x0004df0f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0a53,	// (0x0004df0f) list_single_cale_mrui_row_pane_t2

0xa3a7,	// (0x00057863) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa3a7,	// (0x00057863) list_single_cale_mrui_row_pane_t3

0xa3d6,	// (0x00057892) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa3d6,	// (0x00057892) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0005d2b5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0005d2b5) list_single_cale_mrui_row_pane_t

0x0abb,	// (0x0004df77) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0abb,	// (0x0004df77) list_single_cmail_header_editor_pane_bg_cp01

0x0ae1,	// (0x0004df9d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0ae1,	// (0x0004df9d) list_single_cmail_header_editor_pane_bg_cp02

0x8b2b,	// (0x00055fe7) main_radioblah_text_pane_t1_ParamLimits

0x8b2b,	// (0x00055fe7) main_radioblah_text_pane_t1

0xe991,	// (0x0005be4d) cam6_indi_pane_cp01

0xe999,	// (0x0005be55) cam6_mode_pane_cp01

0xe9a1,	// (0x0005be5d) cam6_pano_pane

0xe9aa,	// (0x0005be66) cam6_zoom_pane_cp01

0xe9b2,	// (0x0005be6e) cam6_pano_image_pane

0xe9bd,	// (0x0005be79) cam6_pano_pane_g1

0xe29b,	// (0x0005b757) cam6_pano_pane_g2

0xe9c6,	// (0x0005be82) cam6_pano_pane_g3

0xe9cf,	// (0x0005be8b) cam6_pano_pane_g4

0xd175,	// (0x0005a631) cam6_pano_pane_g5

0xe9d8,	// (0x0005be94) cam6_pano_pane_g6

0xe9e2,	// (0x0005be9e) cam6_pano_pane_g7

0xe9ea,	// (0x0005bea6) cam6_pano_pane_g8

0xe9f3,	// (0x0005beaf) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0005d2be) cam6_pano_pane_g

0x9628,	// (0x00056ae4) main_browser_tag_pane

0xe851,	// (0x0005bd0d) grid_navstr_albumart_pane

0xe9fe,	// (0x0005beba) cell_navstr_albumart_pane_ParamLimits

0xe9fe,	// (0x0005beba) cell_navstr_albumart_pane

0xb4f7,	// (0x000589b3) cell_navstr_albumart_pane_g1

0xc5b2,	// (0x00059a6e) cell_navstr_albumart_pane_g2

0xc5c2,	// (0x00059a7e) cell_navstr_albumart_pane_g3

0xc5ba,	// (0x00059a76) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0005d2d1) cell_navstr_albumart_pane_g

0x8b46,	// (0x00056002) bt_list_pane_ParamLimits

0x8b46,	// (0x00056002) bt_list_pane

0xea20,	// (0x0005bedc) bt_list_pane_t1

0xea2f,	// (0x0005beeb) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0005d2da) bt_list_pane_t

0x9628,	// (0x00056ae4) main_cale_prevew_pane

0x8b5b,	// (0x00056017) popup_cale_preview_window_ParamLimits

0x8b5b,	// (0x00056017) popup_cale_preview_window

0xa4ad,	// (0x00057969) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4ad,	// (0x00057969) bg_popup_preview_window_pane_cp05

0xea3e,	// (0x0005befa) list_cale_preview_pane_ParamLimits

0xea3e,	// (0x0005befa) list_cale_preview_pane

0xea4a,	// (0x0005bf06) list_double_cale_preview_pane_ParamLimits

0xea4a,	// (0x0005bf06) list_double_cale_preview_pane

0xea5c,	// (0x0005bf18) list_single_cale_preview_pane_ParamLimits

0xea5c,	// (0x0005bf18) list_single_cale_preview_pane

0xea70,	// (0x0005bf2c) list_single_cale_preview_pane_g1

0xea78,	// (0x0005bf34) list_single_cale_preview_pane_t1_ParamLimits

0xea78,	// (0x0005bf34) list_single_cale_preview_pane_t1

0xea8d,	// (0x0005bf49) list_double_cale_preview_pane_g1

0xea95,	// (0x0005bf51) list_double_cale_preview_pane_t1_ParamLimits

0xea95,	// (0x0005bf51) list_double_cale_preview_pane_t1

0xeaaa,	// (0x0005bf66) list_double_cale_preview_pane_t2_ParamLimits

0xeaaa,	// (0x0005bf66) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0005d2df) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0005d2df) list_double_cale_preview_pane_t

0x9628,	// (0x00056ae4) main_ezdial_pane

0xa4ad,	// (0x00057969) main_sp_fs_email_pane_ParamLimits

0x85ef,	// (0x00055aab) cmail_ddmenu_btn01_pane_ParamLimits

0x85ef,	// (0x00055aab) cmail_ddmenu_btn01_pane

0x8602,	// (0x00055abe) cmail_ddmenu_btn02_pane_ParamLimits

0x8602,	// (0x00055abe) cmail_ddmenu_btn02_pane

0x8625,	// (0x00055ae1) cmail_ddmenu_btn03_pane_ParamLimits

0x8625,	// (0x00055ae1) cmail_ddmenu_btn03_pane

0x864b,	// (0x00055b07) main_sp_fs_ctrlbar_pane_ParamLimits

0x866f,	// (0x00055b2b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8917,	// (0x00055dd3) list_cmail_body_pane_ParamLimits

0xe7c8,	// (0x0005bc84) bg_button_pane_cp12

0xe7d1,	// (0x0005bc8d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d1,	// (0x0005bc8d) list_single_cmail_header_detail_pane_g3

0xa2b7,	// (0x00057773) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2b7,	// (0x00057773) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005d262) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005d262) list_single_cmail_header_detail_pane_t

0xa2f8,	// (0x000577b4) phacti_term_pane_t2_ParamLimits

0xa2f8,	// (0x000577b4) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0005d26c) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0005d26c) phacti_term_pane_t

0xeac2,	// (0x0005bf7e) aid_size_list_single_double

0x8b74,	// (0x00056030) popup_ezdial_listscroll_window

0x8b8f,	// (0x0005604b) popup_number_entry_window_cp01

0xb396,	// (0x00058852) bg_popup_call_pane_cp09

0xeace,	// (0x0005bf8a) ezdial_list_pane

0xead6,	// (0x0005bf92) scroll_pane_cp23

0xc7a1,	// (0x00059c5d) bg_button_pane_cp028_ParamLimits

0xc7a1,	// (0x00059c5d) bg_button_pane_cp028

0x8b9d,	// (0x00056059) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8b9d,	// (0x00056059) cmail_ddmenu_btn01_pane_g1

0x8ba9,	// (0x00056065) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ba9,	// (0x00056065) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0005d2e4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0005d2e4) cmail_ddmenu_btn01_pane_g

0xeade,	// (0x0005bf9a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeade,	// (0x0005bf9a) cmail_ddmenu_btn01_pane_t1

0xc7a1,	// (0x00059c5d) bg_button_pane_cp029_ParamLimits

0xc7a1,	// (0x00059c5d) bg_button_pane_cp029

0x8bb5,	// (0x00056071) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8bb5,	// (0x00056071) cmail_ddmenu_btn02_pane_g1

0x8bcd,	// (0x00056089) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8bcd,	// (0x00056089) cmail_ddmenu_btn02_pane_t1

0xa4ad,	// (0x00057969) bg_button_pane_cp031_ParamLimits

0xa4ad,	// (0x00057969) bg_button_pane_cp031

0x8bb5,	// (0x00056071) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8bb5,	// (0x00056071) cmail_ddmenu_btn03_pane_g1

0x8bcd,	// (0x00056089) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8bcd,	// (0x00056089) cmail_ddmenu_btn03_pane_t1

0x60a2,	// (0x0005355e) cell_dialer2_keypad_pane_t1_ParamLimits

0x60bc,	// (0x00053578) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x60bc,	// (0x00053578) cell_dialer2_keypad_pane_t1_copy1

0x7e69,	// (0x00055325) ncimui_group_button_pane

0xa4ad,	// (0x00057969) main_sp_fs_calendar_pane_ParamLimits

0x892c,	// (0x00055de8) list_single_cmail_header_caption_pane_ParamLimits

0xde51,	// (0x0005b30d) aid_recal_txt_sm_pane

0x9628,	// (0x00056ae4) mian_recal_day_pane

0xa33e,	// (0x000577fa) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf3,	// (0x0005bfaf) list_recal_day_pane

0xa420,	// (0x000578dc) list_single_recal_day_pane_ParamLimits

0xa420,	// (0x000578dc) list_single_recal_day_pane

0xeb1a,	// (0x0005bfd6) list_single_recal_day_pane_g1_ParamLimits

0xeb1a,	// (0x0005bfd6) list_single_recal_day_pane_g1

0xa432,	// (0x000578ee) list_single_recal_day_pane_g2_ParamLimits

0xa432,	// (0x000578ee) list_single_recal_day_pane_g2

0xa442,	// (0x000578fe) list_single_recal_day_pane_g3_ParamLimits

0xa442,	// (0x000578fe) list_single_recal_day_pane_g3

0x0b01,	// (0x0004dfbd) list_single_recal_day_pane_g4_ParamLimits

0x0b01,	// (0x0004dfbd) list_single_recal_day_pane_g4

0xa44e,	// (0x0005790a) list_single_recal_day_pane_g5_ParamLimits

0xa44e,	// (0x0005790a) list_single_recal_day_pane_g5

0xa45e,	// (0x0005791a) list_single_recal_day_pane_g6_ParamLimits

0xa45e,	// (0x0005791a) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0005d2f3) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0005d2f3) list_single_recal_day_pane_g

0xa472,	// (0x0005792e) list_single_recal_day_pane_t1

0xa484,	// (0x00057940) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0005d2fe) list_single_recal_day_pane_t

0x8bf1,	// (0x000560ad) ncimui_query_button_pane_ParamLimits

0x8bf1,	// (0x000560ad) ncimui_query_button_pane

0x8c01,	// (0x000560bd) ncimui_query_button_pane_t1_ParamLimits

0x8c01,	// (0x000560bd) ncimui_query_button_pane_t1

0xeb26,	// (0x0005bfe2) ncimui_query_button_pane_t2_ParamLimits

0xeb26,	// (0x0005bfe2) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0005d303) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0005d303) ncimui_query_button_pane_t

0x8c14,	// (0x000560d0) query_button_pane_ParamLimits

0x8c14,	// (0x000560d0) query_button_pane

0x9628,	// (0x00056ae4) bg_button_pane_cp0028

0xeb39,	// (0x0005bff5) query_button_pane_t1

0x40c9,	// (0x00051585) main_tport_pane_ParamLimits

0x87db,	// (0x00055c97) bg_popup_window_pane_cp01_ParamLimits

0x87db,	// (0x00055c97) bg_popup_window_pane_cp01

0x87f6,	// (0x00055cb2) heading_pane_cp08_ParamLimits

0x87f6,	// (0x00055cb2) heading_pane_cp08

0x8809,	// (0x00055cc5) heading_pane_cp07_ParamLimits

0x8809,	// (0x00055cc5) heading_pane_cp07

0x88b0,	// (0x00055d6c) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0005d24f) cell_tport_appsw_pane_g

0x36a1,	// (0x00050b5d) input_candi_list_open_g1

0xad0d,	// (0x000581c9) list_cale_time_pane_g6_ParamLimits

0xad0d,	// (0x000581c9) list_cale_time_pane_g6

0x4e8c,	// (0x00052348) aid_size_touch_calib_1_ParamLimits

0x4e8c,	// (0x00052348) aid_size_touch_calib_1

0x4e9e,	// (0x0005235a) aid_size_touch_calib_2_ParamLimits

0x4e9e,	// (0x0005235a) aid_size_touch_calib_2

0x4eb6,	// (0x00052372) aid_size_touch_calib_3_ParamLimits

0x4eb6,	// (0x00052372) aid_size_touch_calib_3

0x4ed4,	// (0x00052390) aid_size_touch_calib_4_ParamLimits

0x4ed4,	// (0x00052390) aid_size_touch_calib_4

0x4eec,	// (0x000523a8) main_touch_calib_button_group_pane_ParamLimits

0x4eec,	// (0x000523a8) main_touch_calib_button_group_pane

0x4f04,	// (0x000523c0) main_touch_calib_pane_g1_ParamLimits

0x4f16,	// (0x000523d2) main_touch_calib_pane_g2_ParamLimits

0x4f28,	// (0x000523e4) main_touch_calib_pane_g3_ParamLimits

0x4f3a,	// (0x000523f6) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0005cc0d) main_touch_calib_pane_g_ParamLimits

0x4f4c,	// (0x00052408) main_touch_calib_pane_t1_ParamLimits

0x4f66,	// (0x00052422) main_touch_calib_pane_t2_ParamLimits

0x4f80,	// (0x0005243c) main_touch_calib_pane_t3_ParamLimits

0x4f94,	// (0x00052450) main_touch_calib_pane_t4_ParamLimits

0x4fa8,	// (0x00052464) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0005cc16) main_touch_calib_pane_t_ParamLimits

0xcf0b,	// (0x0005a3c7) list_single_fp_cale_pane_g3_ParamLimits

0xcf0b,	// (0x0005a3c7) list_single_fp_cale_pane_g3

0xa4ad,	// (0x00057969) bg_button_pane_cp012_ParamLimits

0xa4ad,	// (0x00057969) bg_vkb2_func_pane_cp03_ParamLimits

0x703d,	// (0x000544f9) cell_vitu2_function_top_pane_g1_ParamLimits

0xa4ad,	// (0x00057969) bg_vkb2_func_pane_cp04_ParamLimits

0x7df7,	// (0x000552b3) main_ncimui_button_group_pane_ParamLimits

0x7df7,	// (0x000552b3) main_ncimui_button_group_pane

0x7e57,	// (0x00055313) main_ncimui_pane_t3_ParamLimits

0x7e57,	// (0x00055313) main_ncimui_pane_t3

0xe867,	// (0x0005bd23) phacti_button_group_pane

0xeac2,	// (0x0005bf7e) aid_size_list_single_double_ParamLimits

0x8b74,	// (0x00056030) popup_ezdial_listscroll_window_ParamLimits

0x8b8f,	// (0x0005604b) popup_number_entry_window_cp01_ParamLimits

0x8c27,	// (0x000560e3) phacti_button_pane_ParamLimits

0x8c27,	// (0x000560e3) phacti_button_pane

0x9628,	// (0x00056ae4) bg_button_pane_cp14

0xeb47,	// (0x0005c003) phacti_button_pane_t1

0x8c38,	// (0x000560f4) main_touch_calib_button_pane_ParamLimits

0x8c38,	// (0x000560f4) main_touch_calib_button_pane

0xa722,	// (0x00057bde) bg_button_pane_cp18_ParamLimits

0xa722,	// (0x00057bde) bg_button_pane_cp18

0xeb55,	// (0x0005c011) main_touch_calib_button_pane_t1_ParamLimits

0xeb55,	// (0x0005c011) main_touch_calib_button_pane_t1

0xeb6b,	// (0x0005c027) main_touch_calib_button_pane_t2_ParamLimits

0xeb6b,	// (0x0005c027) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0005d308) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0005d308) main_touch_calib_button_pane_t

0x9628,	// (0x00056ae4) cell_ncimui_button_pane

0x9628,	// (0x00056ae4) bg_button_pane_cp032

0xeb89,	// (0x0005c045) cell_ncimui_button_pane_t1

0xa06c,	// (0x00057528) image3_infobar_pane_ParamLimits

0xa06c,	// (0x00057528) image3_infobar_pane

0x8225,	// (0x000556e1) fs_bigclock_status_pane_ParamLimits

0x8225,	// (0x000556e1) fs_bigclock_status_pane

0x8232,	// (0x000556ee) main_fs_bigclock_clock_pane_ParamLimits

0x8232,	// (0x000556ee) main_fs_bigclock_clock_pane

0x8252,	// (0x0005570e) main_fs_bigclock_indi_pane_ParamLimits

0x8252,	// (0x0005570e) main_fs_bigclock_indi_pane

0x827c,	// (0x00055738) main_fs_bigclock_swipe_pane_ParamLimits

0x827c,	// (0x00055738) main_fs_bigclock_swipe_pane

0x9628,	// (0x00056ae4) main_fs_clock_dumped_data

0xe3a8,	// (0x0005b864) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3a8,	// (0x0005b864) list_single_fs_bigclock_indicator_pane_g1

0xe3c4,	// (0x0005b880) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3c4,	// (0x0005b880) list_single_fs_bigclock_indicator_pane_g2

0xe3de,	// (0x0005b89a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3de,	// (0x0005b89a) list_single_fs_bigclock_indicator_pane_g3

0xe3f8,	// (0x0005b8b4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3f8,	// (0x0005b8b4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0005d130) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0005d130) list_single_fs_bigclock_indicator_pane_g

0xe423,	// (0x0005b8df) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe423,	// (0x0005b8df) list_single_fs_bigclock_indicator_pane_t1

0xe44b,	// (0x0005b907) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe44b,	// (0x0005b907) list_single_fs_bigclock_indicator_pane_t2

0xe473,	// (0x0005b92f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe473,	// (0x0005b92f) list_single_fs_bigclock_indicator_pane_t3

0xe49b,	// (0x0005b957) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe49b,	// (0x0005b957) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0005d13b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0005d13b) list_single_fs_bigclock_indicator_pane_t

0xeb97,	// (0x0005c053) image3_infobar_fav_pane_ParamLimits

0xeb97,	// (0x0005c053) image3_infobar_fav_pane

0xeba7,	// (0x0005c063) image3_infobar_loc_pane_ParamLimits

0xeba7,	// (0x0005c063) image3_infobar_loc_pane

0xebbb,	// (0x0005c077) image3_infobar_time_pane_ParamLimits

0xebbb,	// (0x0005c077) image3_infobar_time_pane

0xcbab,	// (0x0005a067) image3_infobar_time_pane_g1

0xebcb,	// (0x0005c087) image3_infobar_time_pane_t1

0xcbab,	// (0x0005a067) image3_infobar_loc_pane_g1

0xebd9,	// (0x0005c095) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0005d30d) image3_infobar_loc_pane_g

0xebe1,	// (0x0005c09d) image3_infobar_loc_pane_t1

0xcbab,	// (0x0005a067) image3_infobar_fav_pane_g1

0xebef,	// (0x0005c0ab) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0005d312) image3_infobar_fav_pane_g

0xebf7,	// (0x0005c0b3) fs_bigclock_status_battery_pane

0xec00,	// (0x0005c0bc) fs_bigclock_status_signal_pane

0xec09,	// (0x0005c0c5) fs_bigclock_status_title_pane

0xec12,	// (0x0005c0ce) fs_bigclock_status_signal_pane_g1

0xec1b,	// (0x0005c0d7) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0005d317) fs_bigclock_status_signal_pane_g

0xec23,	// (0x0005c0df) fs_bigclock_status_battery_pane_g1

0xec2c,	// (0x0005c0e8) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0005d31c) fs_bigclock_status_battery_pane_g

0xec34,	// (0x0005c0f0) fs_bigclock_status_title_pane_t1

0xcbab,	// (0x0005a067) main_fs_bigclock_clock_pane_g1

0xec42,	// (0x0005c0fe) main_fs_bigclock_clock_pane_g2

0xec4b,	// (0x0005c107) main_fs_bigclock_clock_pane_g3

0xec4b,	// (0x0005c107) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0005d321) main_fs_bigclock_clock_pane_g

0xec53,	// (0x0005c10f) main_fs_bigclock_clock_pane_t1

0x8c4d,	// (0x00056109) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0005d32a) main_fs_bigclock_clock_pane_t

0xec61,	// (0x0005c11d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec61,	// (0x0005c11d) list_single_fs_bigclock_indicator_pane

0xec72,	// (0x0005c12e) list_single_fs_bigclock_pane_ParamLimits

0xec72,	// (0x0005c12e) list_single_fs_bigclock_pane

0xec98,	// (0x0005c154) main_fs_bigclock_indicator_pane_t1

0xeca7,	// (0x0005c163) list_single_fs_bigclock_pane_g1

0xecaf,	// (0x0005c16b) list_single_fs_bigclock_pane_t1

0xcbab,	// (0x0005a067) main_fs_bigclock_swipe_pane_g1

0xecf2,	// (0x0005c1ae) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0005d33b) main_fs_bigclock_swipe_pane_g

0xecfa,	// (0x0005c1b6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfa,	// (0x0005c1b6) main_fs_bigclock_swipe_pane_t1

0x2fc0,	// (0x0005047c) call_type_pane_ParamLimits

0x9628,	// (0x00056ae4) main_btmg_pane

0xa389,	// (0x00057845) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa389,	// (0x00057845) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0005d2ae) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0005d2ae) list_single_cale_mrui_row_pane_g

0xa40f,	// (0x000578cb) list_recal_vselct_arw_lo_pane

0xeb12,	// (0x0005bfce) list_recal_vselct_arw_up_pane

0xa417,	// (0x000578d3) list_recal_vselct_pane

0x8c9e,	// (0x0005615a) btmg_button_pane

0x8ca8,	// (0x00056164) main_btmg_pane_g1

0x9628,	// (0x00056ae4) bg_button_pane_cp044

0xed17,	// (0x0005c1d3) btmg_button_pane_t1

0xc78d,	// (0x00059c49) aid_listscroll_gen

0xa4ad,	// (0x00057969) main_cntbar_detail_pane

0xe7aa,	// (0x0005bc66) list_cmail_folder_pane

0xcfec,	// (0x0005a4a8) sp_fs_scroll_pane_cp03_ParamLimits

0x0b21,	// (0x0004dfdd) list_single_fs_dyc_pane_cp01_ParamLimits

0x0b21,	// (0x0004dfdd) list_single_fs_dyc_pane_cp01

0xed25,	// (0x0005c1e1) aid_size_cmail_indent

0xa496,	// (0x00057952) list_single_dyc_row_pane_cp01

0x8cde,	// (0x0005619a) cntbar_detail_list_pane_ParamLimits

0x8cde,	// (0x0005619a) cntbar_detail_list_pane

0x8d2a,	// (0x000561e6) main_cntbar_detail_cont_pane_ParamLimits

0x8d2a,	// (0x000561e6) main_cntbar_detail_cont_pane

0xcfec,	// (0x0005a4a8) scroll_pane_cp032_ParamLimits

0xcfec,	// (0x0005a4a8) scroll_pane_cp032

0x8d3e,	// (0x000561fa) cntbar_detail_list_event_pane_ParamLimits

0x8d3e,	// (0x000561fa) cntbar_detail_list_event_pane

0x8cee,	// (0x000561aa) cntbar_detail_list_shct_pane

0xab90,	// (0x0005804c) aid_list_gen

0xed2e,	// (0x0005c1ea) aid_scroll

0xed37,	// (0x0005c1f3) aid_size_touch_scroll_bar

0x7652,	// (0x00054b0e) aid_list_double

0xde7a,	// (0x0005b336) aid_list_single

0xde7a,	// (0x0005b336) aid_list_single_lg

0x0b3d,	// (0x0004dff9) aid_list_z_g_a_sm

0x0b45,	// (0x0004e001) aid_list_z_g_d

0x0b4d,	// (0x0004e009) aid_txt_z_prm

0x0b5b,	// (0x0004e017) aid_txt_z_prm_cp01

0x0b69,	// (0x0004e025) aid_txt_z_sec

0x8d4e,	// (0x0005620a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8d4e,	// (0x0005620a) main_cntbar_detail_cont_pane_g1

0x8d62,	// (0x0005621e) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8d62,	// (0x0005621e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0005d340) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0005d340) main_cntbar_detail_cont_pane_g

0xed40,	// (0x0005c1fc) main_cntbar_detail_cont_pane_t1

0xed4e,	// (0x0005c20a) main_cntbar_detail_cont_pane_t2

0xed5c,	// (0x0005c218) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0005d345) main_cntbar_detail_cont_pane_t

0x8d72,	// (0x0005622e) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8d72,	// (0x0005622e) cell_cntbar_detail_list_shct_pane

0xed6a,	// (0x0005c226) cntbar_detail_list_shct_pane_g1

0xed73,	// (0x0005c22f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0005d34c) cntbar_detail_list_shct_pane_g

0x8d86,	// (0x00056242) cntbar_detail_list_event_pane_g1_ParamLimits

0x8d86,	// (0x00056242) cntbar_detail_list_event_pane_g1

0x8d92,	// (0x0005624e) cntbar_detail_list_event_pane_g2_ParamLimits

0x8d92,	// (0x0005624e) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0005d351) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0005d351) cntbar_detail_list_event_pane_g

0x8dfe,	// (0x000562ba) cntbar_detail_list_event_pane_t1_ParamLimits

0x8dfe,	// (0x000562ba) cntbar_detail_list_event_pane_t1

0x8e13,	// (0x000562cf) cntbar_detail_list_event_pane_t2_ParamLimits

0x8e13,	// (0x000562cf) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0005d35e) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0005d35e) cntbar_detail_list_event_pane_t

0xcbab,	// (0x0005a067) cell_cntbar_detail_list_shct_pane_g1

0xb34e,	// (0x0005880a) navi_pane_mv_g3

0xa4ad,	// (0x00057969) main_cntbar_detail_pane_ParamLimits

0x9628,	// (0x00056ae4) main_notif_wgt_pane

0x9e82,	// (0x0005733e) aid_tch_main_mp4_pane_g4

0xa064,	// (0x00057520) popup_slider_window_cp02

0xa405,	// (0x000578c1) list_recal_day_event_pane

0x8cb2,	// (0x0005616e) cntbar_detail_btn_pane_ParamLimits

0x8cb2,	// (0x0005616e) cntbar_detail_btn_pane

0x8cc8,	// (0x00056184) cntbar_detail_btn_pane_cp01_ParamLimits

0x8cc8,	// (0x00056184) cntbar_detail_btn_pane_cp01

0x8cee,	// (0x000561aa) cntbar_detail_list_shct_pane_ParamLimits

0x8cfe,	// (0x000561ba) cntbar_detail_pane_g1_ParamLimits

0x8cfe,	// (0x000561ba) cntbar_detail_pane_g1

0x8d0e,	// (0x000561ca) cntbar_detail_pane_t1_ParamLimits

0x8d0e,	// (0x000561ca) cntbar_detail_pane_t1

0x8d9e,	// (0x0005625a) cntbar_detail_list_event_pane_g3_ParamLimits

0x8d9e,	// (0x0005625a) cntbar_detail_list_event_pane_g3

0x8db6,	// (0x00056272) cntbar_detail_list_event_pane_g4_ParamLimits

0x8db6,	// (0x00056272) cntbar_detail_list_event_pane_g4

0x8dce,	// (0x0005628a) cntbar_detail_list_event_pane_g5_ParamLimits

0x8dce,	// (0x0005628a) cntbar_detail_list_event_pane_g5

0x8de6,	// (0x000562a2) cntbar_detail_list_event_pane_g6_ParamLimits

0x8de6,	// (0x000562a2) cntbar_detail_list_event_pane_g6

0x8e28,	// (0x000562e4) cntbar_detail_list_event_pane_t3_ParamLimits

0x8e28,	// (0x000562e4) cntbar_detail_list_event_pane_t3

0x8e3a,	// (0x000562f6) popup_notif_wgt_window_ParamLimits

0x8e3a,	// (0x000562f6) popup_notif_wgt_window

0x8e53,	// (0x0005630f) popup_submenu_window_cp01_ParamLimits

0x8e53,	// (0x0005630f) popup_submenu_window_cp01

0xb396,	// (0x00058852) bg_popup_window_pane_cp10

0xed7c,	// (0x0005c238) listscroll_notif_wgt_pane

0xed8d,	// (0x0005c249) list_notif_wgt_window

0xed96,	// (0x0005c252) scroll_pane_cp033

0x8e65,	// (0x00056321) list_notif_wgt_row_pane_ParamLimits

0x8e65,	// (0x00056321) list_notif_wgt_row_pane

0xed9f,	// (0x0005c25b) aid_size_list_notif_wgt_del

0xedac,	// (0x0005c268) list_notif_wgt_row_pane_g1

0xedb8,	// (0x0005c274) list_notif_wgt_row_pane_g2

0xedcc,	// (0x0005c288) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0005d365) list_notif_wgt_row_pane_g

0xedd9,	// (0x0005c295) list_notif_wgt_row_pane_t1

0xedef,	// (0x0005c2ab) list_notif_wgt_row_pane_t2

0xee01,	// (0x0005c2bd) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0005d36c) list_notif_wgt_row_pane_t

0xd861,	// (0x0005ad1d) list_recal_day_event_pane_g1

0xee13,	// (0x0005c2cf) list_recal_day_event_pane_t1

0x9628,	// (0x00056ae4) bg_button_pane_cp045

0xee22,	// (0x0005c2de) cntbar_detail_btn_pane_t1

0xc7a1,	// (0x00059c5d) main_callh_pane_ParamLimits

0xc7a1,	// (0x00059c5d) main_callh_pane

0x9628,	// (0x00056ae4) main_coverflow0_pane

0x9628,	// (0x00056ae4) main_wgtman_pane

0x8294,	// (0x00055750) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8294,	// (0x00055750) main_fs_bigclock_unlock_btn_pane

0x88a8,	// (0x00055d64) bg_button_pane_cp16

0x88b8,	// (0x00055d74) cell_tport_appsw_pane_g3

0x8e75,	// (0x00056331) cf0_flow_pane_ParamLimits

0x8e75,	// (0x00056331) cf0_flow_pane

0xee30,	// (0x0005c2ec) listscroll_cf0_pane

0xee3b,	// (0x0005c2f7) main_cf0_pane_g1

0x8e8a,	// (0x00056346) main_cf0_pane_t1_ParamLimits

0x8e8a,	// (0x00056346) main_cf0_pane_t1

0x8ea1,	// (0x0005635d) main_cf0_pane_t2_ParamLimits

0x8ea1,	// (0x0005635d) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0005d378) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0005d378) main_cf0_pane_t

0xee4d,	// (0x0005c309) scroll_pane_cp11

0x8eb8,	// (0x00056374) cf0_flow_pane_g1

0x8ec0,	// (0x0005637c) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0005d37d) cf0_flow_pane_g

0x8ec8,	// (0x00056384) cf0_flow_pane_t1

0x9628,	// (0x00056ae4) main_call6_pane

0x9628,	// (0x00056ae4) main_calllock_pane

0x8ed6,	// (0x00056392) call6_btn_grp_pane_ParamLimits

0x8ed6,	// (0x00056392) call6_btn_grp_pane

0x8ef0,	// (0x000563ac) call6_pane_g1_ParamLimits

0x8ef0,	// (0x000563ac) call6_pane_g1

0x8f05,	// (0x000563c1) popup_call6_1st_window_ParamLimits

0x8f05,	// (0x000563c1) popup_call6_1st_window

0x8f16,	// (0x000563d2) popup_call6_2nd_window_ParamLimits

0x8f16,	// (0x000563d2) popup_call6_2nd_window

0x8f27,	// (0x000563e3) cell_call6_btn_pane_ParamLimits

0x8f27,	// (0x000563e3) cell_call6_btn_pane

0xb396,	// (0x00058852) bg_popup_call2_in_pane_cp03

0xee58,	// (0x0005c314) popup_call6_1st_window_g1

0xee60,	// (0x0005c31c) popup_call6_1st_window_g2

0xee68,	// (0x0005c324) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0005d382) popup_call6_1st_window_g

0xee70,	// (0x0005c32c) popup_call6_1st_window_t1

0xee7f,	// (0x0005c33b) popup_call6_1st_window_t2

0xee8f,	// (0x0005c34b) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0005d389) popup_call6_1st_window_t

0xb396,	// (0x00058852) bg_popup_call2_in_pane_cp04

0xee58,	// (0x0005c314) popup_call6_2nd_window_g1

0xee60,	// (0x0005c31c) popup_call6_2nd_window_g2

0xee68,	// (0x0005c324) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0005d382) popup_call6_2nd_window_g

0xee70,	// (0x0005c32c) popup_call6_2nd_window_t1

0x9628,	// (0x00056ae4) bg_button_pane_cp15

0xee9f,	// (0x0005c35b) cell_call6_btn_pane_g1

0xeea8,	// (0x0005c364) cell_call6_btn_pane_t1

0x8f3b,	// (0x000563f7) listscroll_wgtman_pane_ParamLimits

0x8f3b,	// (0x000563f7) listscroll_wgtman_pane

0x8f5c,	// (0x00056418) wgtman_btn_pane_ParamLimits

0x8f5c,	// (0x00056418) wgtman_btn_pane

0xb116,	// (0x000585d2) aid_scroll_copy1

0xeeb7,	// (0x0005c373) list_wgtman_pane

0x8f9f,	// (0x0005645b) wgtman_btn_pane_g1_ParamLimits

0x8f9f,	// (0x0005645b) wgtman_btn_pane_g1

0x8fcb,	// (0x00056487) wgtman_btn_pane_t1_ParamLimits

0x8fcb,	// (0x00056487) wgtman_btn_pane_t1

0xeec1,	// (0x0005c37d) wgtman_btn_pane_t2_ParamLimits

0xeec1,	// (0x0005c37d) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0005d390) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0005d390) wgtman_btn_pane_t

0x9008,	// (0x000564c4) listrow_wgtman_pane_ParamLimits

0x9008,	// (0x000564c4) listrow_wgtman_pane

0x901b,	// (0x000564d7) listrow_wgtman_pane_g1

0x9028,	// (0x000564e4) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0005d395) listrow_wgtman_pane_g

0x0b77,	// (0x0004e033) listrow_wgtman_pane_t1

0x0b8f,	// (0x0004e04b) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0005d39a) listrow_wgtman_pane_t

0x0bb5,	// (0x0004e071) wait_bar_pane_cp09

0xeed8,	// (0x0005c394) main_calllock_btn_pane

0xeee2,	// (0x0005c39e) main_calllock_pane_g1

0x9628,	// (0x00056ae4) bg_button_pane_cp17

0xeeed,	// (0x0005c3a9) main_calllock_btn_pane_g1

0xeef6,	// (0x0005c3b2) main_calllock_btn_pane_t1

0x9628,	// (0x00056ae4) main_dialer3_pane

0x9628,	// (0x00056ae4) main_fmrd2_pane

0xcbab,	// (0x0005a067) main_fs_bigclock_unlock_btn_pane_g1

0xef0d,	// (0x0005c3c9) main_fs_bigclock_unlock_btn_pane_t1

0x9046,	// (0x00056502) area_fmrd2_info_pane_ParamLimits

0x9046,	// (0x00056502) area_fmrd2_info_pane

0x9057,	// (0x00056513) area_fmrd2_visual_pane_ParamLimits

0x9057,	// (0x00056513) area_fmrd2_visual_pane

0x9065,	// (0x00056521) fmrd2_indi_pane_ParamLimits

0x9065,	// (0x00056521) fmrd2_indi_pane

0x9072,	// (0x0005652e) area_fmrd2_visual_pane_g1

0x907a,	// (0x00056536) area_fmrd2_visual_pane_t1

0x908a,	// (0x00056546) area_fmrd2_visual_pane_t2

0x909a,	// (0x00056556) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0005d3a4) area_fmrd2_visual_pane_t

0x90aa,	// (0x00056566) area_fmrd2_info_pane_g1

0x90b2,	// (0x0005656e) area_fmrd2_info_pane_t1

0x90c2,	// (0x0005657e) area_fmrd2_info_pane_t2

0x90d2,	// (0x0005658e) area_fmrd2_info_pane_t3

0x90e2,	// (0x0005659e) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0005d3ab) area_fmrd2_info_pane_t

0x90f0,	// (0x000565ac) fmrd2_indi_pane_t1

0x9100,	// (0x000565bc) fmrd2_indi_pane_t2

0x9110,	// (0x000565cc) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0005d3b4) fmrd2_indi_pane_t

0xe407,	// (0x0005b8c3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe407,	// (0x0005b8c3) list_single_fs_bigclock_indicator_pane_g5

0xe4b7,	// (0x0005b973) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4b7,	// (0x0005b973) list_single_fs_bigclock_indicator_pane_t5

0x8a2d,	// (0x00055ee9) aid_cell_bcale_month_pane_ParamLimits

0x8a2d,	// (0x00055ee9) aid_cell_bcale_month_pane

0x8a4b,	// (0x00055f07) bcale_month_pane_ParamLimits

0x8a4b,	// (0x00055f07) bcale_month_pane

0x8a6f,	// (0x00055f2b) bcale_preview_pane_ParamLimits

0x8a6f,	// (0x00055f2b) bcale_preview_pane

0xecaf,	// (0x0005c16b) list_single_fs_bigclock_pane_t1_ParamLimits

0xecce,	// (0x0005c18a) list_single_fs_bigclock_pane_t2_ParamLimits

0xecce,	// (0x0005c18a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0005d336) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0005d336) list_single_fs_bigclock_pane_t

0xef05,	// (0x0005c3c1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0005d39f) main_fs_bigclock_unlock_btn_pane_g

0x9120,	// (0x000565dc) aid_dia3_key_size_ParamLimits

0x9120,	// (0x000565dc) aid_dia3_key_size

0x912f,	// (0x000565eb) aid_dia3_listrow_size_ParamLimits

0x912f,	// (0x000565eb) aid_dia3_listrow_size

0x9144,	// (0x00056600) dia3_keypad_fun_pane_ParamLimits

0x9144,	// (0x00056600) dia3_keypad_fun_pane

0x9160,	// (0x0005661c) dia3_keypad_num_pane_ParamLimits

0x9160,	// (0x0005661c) dia3_keypad_num_pane

0x917b,	// (0x00056637) dia3_listscroll_pane_ParamLimits

0x917b,	// (0x00056637) dia3_listscroll_pane

0x918e,	// (0x0005664a) dia3_numentry_pane_ParamLimits

0x918e,	// (0x0005664a) dia3_numentry_pane

0xef1b,	// (0x0005c3d7) dia3_list_pane

0xef26,	// (0x0005c3e2) scroll_pane_cp12

0x9628,	// (0x00056ae4) bg_dia3_numentry_pane

0x91a2,	// (0x0005665e) dia3_numentry_pane_t1

0x91b1,	// (0x0005666d) cell_dia3_key_num_pane

0x91b9,	// (0x00056675) cell_dia3_key0_fun_pane_ParamLimits

0x91b9,	// (0x00056675) cell_dia3_key0_fun_pane

0x91cd,	// (0x00056689) cell_dia3_key1_fun_pane_ParamLimits

0x91cd,	// (0x00056689) cell_dia3_key1_fun_pane

0x91e5,	// (0x000566a1) dia3_listrow_pane

0xe115,	// (0x0005b5d1) bg_dia3_numentry_pane_g1

0x9628,	// (0x00056ae4) bg_button_pane_cp21

0xef31,	// (0x0005c3ed) cell_dia3_key_num_pane_t1

0xef3f,	// (0x0005c3fb) cell_dia3_key_num_pane_t2

0xef4e,	// (0x0005c40a) cell_dia3_key_num_pane_t3

0xef5d,	// (0x0005c419) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0005d3bb) cell_dia3_key_num_pane_t

0x9628,	// (0x00056ae4) bg_button_pane_cp19

0x91f7,	// (0x000566b3) cell_dia3_key0_fun_pane_g1

0x9628,	// (0x00056ae4) bg_button_pane_cp20

0x91ff,	// (0x000566bb) cell_dia3_key1_fun_pane_g1

0x9207,	// (0x000566c3) area_left_week_number_pane

0x9213,	// (0x000566cf) area_top_day_name_pane

0x9226,	// (0x000566e2) frame_month_view_pane

0xef6c,	// (0x0005c428) grid_month_view_pane

0x9239,	// (0x000566f5) cell_top_day_name_pane_ParamLimits

0x9239,	// (0x000566f5) cell_top_day_name_pane

0x9266,	// (0x00056722) cell_area_left_week_number_pane_ParamLimits

0x9266,	// (0x00056722) cell_area_left_week_number_pane

0x927a,	// (0x00056736) cell_month_view_pane_ParamLimits

0x927a,	// (0x00056736) cell_month_view_pane

0xef7a,	// (0x0005c436) frm_month_g1

0x92a7,	// (0x00056763) frm_month_g2

0x92ba,	// (0x00056776) frm_month_g3

0x92cd,	// (0x00056789) frm_month_g4

0x92e0,	// (0x0005679c) frm_month_g5

0x92f3,	// (0x000567af) frm_month_g6

0x9306,	// (0x000567c2) frm_month_g7

0xef87,	// (0x0005c443) frm_month_g8

0x9319,	// (0x000567d5) frm_month_g9

0x9329,	// (0x000567e5) frm_month_g10

0x9339,	// (0x000567f5) frm_month_g11

0x9349,	// (0x00056805) frm_month_g12

0x935b,	// (0x00056817) frm_month_g13

0x936d,	// (0x00056829) frm_month_g14

0x9381,	// (0x0005683d) frm_month_g15

0x9395,	// (0x00056851) frm_month_g16

0x000f,

0xff08,	// (0x0005d3c4) frm_month_g

0xef94,	// (0x0005c450) cell_top_day_name_pane_t1

0x93a9,	// (0x00056865) cell_area_left_week_number_pane_g1

0x93b5,	// (0x00056871) cell_area_left_week_number_pane_t1

0xce0b,	// (0x0005a2c7) cell_month_view_pane_g1

0x93c8,	// (0x00056884) cell_month_view_pane_t1

0x9628,	// (0x00056ae4) main_fps_pane

0xe6c2,	// (0x0005bb7e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6c2,	// (0x0005bb7e) cmail_ddmenu_btn02_pane_cp1

0xe6de,	// (0x0005bb9a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6de,	// (0x0005bb9a) cmail_ddmenu_btn02_pane_cp2

0x8bc1,	// (0x0005607d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8bc1,	// (0x0005607d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0005d2e9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0005d2e9) cmail_ddmenu_btn02_pane_g

0x8bdf,	// (0x0005609b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8bdf,	// (0x0005609b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0005d2ee) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0005d2ee) cmail_ddmenu_btn02_pane_t

0x93db,	// (0x00056897) fps_text_pane_ParamLimits

0x93db,	// (0x00056897) fps_text_pane

0x93f2,	// (0x000568ae) main_fps_pane_g1_ParamLimits

0x93f2,	// (0x000568ae) main_fps_pane_g1

0x940c,	// (0x000568c8) wait_bar_pane_cp010_ParamLimits

0x940c,	// (0x000568c8) wait_bar_pane_cp010

0x941d,	// (0x000568d9) fps_text_pane_t1_ParamLimits

0x941d,	// (0x000568d9) fps_text_pane_t1

0xde68,	// (0x0005b324) cam4_image_uncrop_pane_g1

0xde71,	// (0x0005b32d) cam4_image_uncrop_pane_g2

0x6548,	// (0x00053a04) cam4_image_uncrop_pane_g3

0x6551,	// (0x00053a0d) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0005cdaa) cam4_image_uncrop_pane_g

0x91e5,	// (0x000566a1) dia3_listrow_pane_ParamLimits

0x9628,	// (0x00056ae4) main_phob2_pane

0x8879,	// (0x00055d35) cell_tport_appsw_pane_cp02_ParamLimits

0x8879,	// (0x00055d35) cell_tport_appsw_pane_cp02

0x888d,	// (0x00055d49) cell_tport_appsw_pane_cp03_ParamLimits

0x888d,	// (0x00055d49) cell_tport_appsw_pane_cp03

0x9628,	// (0x00056ae4) phob2_contact_card_pane

0x9628,	// (0x00056ae4) phob2_listscroll_pane

0xefa7,	// (0x0005c463) phob2_list_pane

0xefaf,	// (0x0005c46b) scroll_pane_cp034

0x9435,	// (0x000568f1) phob2_cc_data_pane_ParamLimits

0x9435,	// (0x000568f1) phob2_cc_data_pane

0x9454,	// (0x00056910) phob2_cc_listscroll_pane_ParamLimits

0x9454,	// (0x00056910) phob2_cc_listscroll_pane

0x9472,	// (0x0005692e) list_double_large_graphic_phob2_pane_ParamLimits

0x9472,	// (0x0005692e) list_double_large_graphic_phob2_pane

0x9485,	// (0x00056941) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9485,	// (0x00056941) list_double_large_graphic_phob2_pane_g1

0x0bc7,	// (0x0004e083) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0bc7,	// (0x0004e083) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0005d3e5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0005d3e5) list_double_large_graphic_phob2_pane_g

0x0bd3,	// (0x0004e08f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0bd3,	// (0x0004e08f) list_double_large_graphic_phob2_pane_t1

0x0be9,	// (0x0004e0a5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0be9,	// (0x0004e0a5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0005d3ea) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0005d3ea) list_double_large_graphic_phob2_pane_t

0x9628,	// (0x00056ae4) list_highlight_pane_cp024

0x949b,	// (0x00056957) phob2_cc_button_pane

0x94a3,	// (0x0005695f) phob2_cc_data_pane_g1_ParamLimits

0x94a3,	// (0x0005695f) phob2_cc_data_pane_g1

0x94b8,	// (0x00056974) phob2_cc_data_pane_g2_ParamLimits

0x94b8,	// (0x00056974) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0005d3ef) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0005d3ef) phob2_cc_data_pane_g

0x94c8,	// (0x00056984) phob2_cc_data_pane_t1_ParamLimits

0x94c8,	// (0x00056984) phob2_cc_data_pane_t1

0x94e0,	// (0x0005699c) phob2_cc_data_pane_t2_ParamLimits

0x94e0,	// (0x0005699c) phob2_cc_data_pane_t2

0x94f8,	// (0x000569b4) phob2_cc_data_pane_t3_ParamLimits

0x94f8,	// (0x000569b4) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0005d3f4) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0005d3f4) phob2_cc_data_pane_t

0xefb7,	// (0x0005c473) phob2_cc_list_pane_ParamLimits

0xefb7,	// (0x0005c473) phob2_cc_list_pane

0xd90a,	// (0x0005adc6) scroll_pane_cp035_ParamLimits

0xd90a,	// (0x0005adc6) scroll_pane_cp035

0xa4ad,	// (0x00057969) bg_button_pane_cp033

0xefc3,	// (0x0005c47f) phob2_cc_button_pane_g1

0xefcf,	// (0x0005c48b) phob2_cc_button_pane_t1

0xefe4,	// (0x0005c4a0) phob2_cc_button_pane_t2

0x0001,

0x0017,	// (0x0004d4d3) phob2_cc_button_pane_t

0x9510,	// (0x000569cc) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9510,	// (0x000569cc) list_double_large_graphic_phob2_cc_pane

0x9523,	// (0x000569df) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9523,	// (0x000569df) list_double_large_graphic_phob2_cc_pane_g1

0x0bfe,	// (0x0004e0ba) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0bfe,	// (0x0004e0ba) list_double_large_graphic_phob2_cc_pane_g2

0x0c0a,	// (0x0004e0c6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0c0a,	// (0x0004e0c6) list_double_large_graphic_phob2_cc_pane_g3

0x0c16,	// (0x0004e0d2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0c16,	// (0x0004e0d2) list_double_large_graphic_phob2_cc_pane_g4

0x0c22,	// (0x0004e0de) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0c22,	// (0x0004e0de) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0005d3fb) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0005d3fb) list_double_large_graphic_phob2_cc_pane_g

0x0c2e,	// (0x0004e0ea) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0c2e,	// (0x0004e0ea) list_double_large_graphic_phob2_cc_pane_t1

0x0c57,	// (0x0004e113) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0c57,	// (0x0004e113) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0005d406) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0005d406) list_double_large_graphic_phob2_cc_pane_t

0xeff6,	// (0x0005c4b2) list_highlight_pane_cp025_ParamLimits

0xeff6,	// (0x0005c4b2) list_highlight_pane_cp025

0xa4ad,	// (0x00057969) bg_button_pane_cp033_ParamLimits

0xefc3,	// (0x0005c47f) phob2_cc_button_pane_g1_ParamLimits

0xefcf,	// (0x0005c48b) phob2_cc_button_pane_t1_ParamLimits

0xefe4,	// (0x0005c4a0) phob2_cc_button_pane_t2_ParamLimits

0x0017,	// (0x0004d4d3) phob2_cc_button_pane_t_ParamLimits

0x0ec9,	// (0x0004e385) popup_wgtman_window

0xd734,	// (0x0005abf0) scroll_pane_cp038

0x8f81,	// (0x0005643d) wgtman_btn_pane_cp_01_ParamLimits

0x8f81,	// (0x0005643d) wgtman_btn_pane_cp_01

0xf004,	// (0x0005c4c0) wgtman_content_pane

0xf00d,	// (0x0005c4c9) wgtman_heading_pane

0x9628,	// (0x00056ae4) bg_heading_pane_cp02

0xf016,	// (0x0005c4d2) wgtman_heading_pane_g1

0xf01e,	// (0x0005c4da) wgtman_heading_pane_t1

0xf02c,	// (0x0005c4e8) scroll_pane_cp036

0xf034,	// (0x0005c4f0) wgtman_list_pane

0xe5a2,	// (0x0005ba5e) wgtman_list_pane_t1_ParamLimits

0xe5a2,	// (0x0005ba5e) wgtman_list_pane_t1

0xa0be,	// (0x0005757a) cam4_grid_pane

0x02c3,	// (0x0004d77f) bg_button_pane_cp015_ParamLimits

0x71ef,	// (0x000546ab) bg_button_pane_cp016_ParamLimits

0x7202,	// (0x000546be) bg_button_pane_cp017_ParamLimits

0x030b,	// (0x0004d7c7) popup_vitu2_query_window_g3_ParamLimits

0x030b,	// (0x0004d7c7) popup_vitu2_query_window_g3

0x0386,	// (0x0004d842) popup_vitu2_query_window_t6_ParamLimits

0x0386,	// (0x0004d842) popup_vitu2_query_window_t6

0x03b1,	// (0x0004d86d) popup_vitu2_query_window_t7_ParamLimits

0x03b1,	// (0x0004d86d) popup_vitu2_query_window_t7

0xde68,	// (0x0005b324) cam4_grid_pane_g1

0xde71,	// (0x0005b32d) cam4_grid_pane_g2

0xf03c,	// (0x0005c4f8) cam4_grid_pane_g3

0xf045,	// (0x0005c501) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0005d40b) cam4_grid_pane_g

0x1eab,	// (0x0004f367) aid_placing_vt_slider_lsc_ParamLimits

0x21a8,	// (0x0004f664) vidtel_button_pane_ParamLimits

0x21a8,	// (0x0004f664) vidtel_button_pane

0xf050,	// (0x0005c50c) bg_button_pane_cp034

0x952f,	// (0x000569eb) vidtel_button_pane_g1

0xf05a,	// (0x0005c516) vidtel_button_pane_t1

0xd851,	// (0x0005ad0d) aid_size_vtel_slider_touch

0xd90a,	// (0x0005adc6) scroll_pane_cp039

0xe153,	// (0x0005b60f) ncim_query_button_pane_cp01_ParamLimits

0xe172,	// (0x0005b62e) ncimui_query_pane_g1_ParamLimits

0xa4ad,	// (0x00057969) input_focus_pane_cp012_ParamLimits

0xe197,	// (0x0005b653) ncim_query_entry_pane_t1_ParamLimits

0xd90a,	// (0x0005adc6) scroll_pane_cp039_ParamLimits

0xb1fc,	// (0x000586b8) navi_pane_bcale_mc_g1

0xb204,	// (0x000586c0) navi_pane_bcale_mc_t1

0xe727,	// (0x0005bbe3) main_sp_fs_email_pane_g1

0xe733,	// (0x0005bbef) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0005d1a1) main_sp_fs_email_pane_g

0xe984,	// (0x0005be40) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe984,	// (0x0005be40) list_single_cale_mrui_row_pane_g3

0x0b17,	// (0x0004dfd3) list_single_recal_day_pane_g5_event_pane

0xa46a,	// (0x00057926) list_single_recal_day_pane_g7

0xf068,	// (0x0005c524) list_recal_day_event_pane_cp01

0xf071,	// (0x0005c52d) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0005c535) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0005c53d) list_recal_vselct_pane_cp01

0xd861,	// (0x0005ad1d) list_recal_day_event_pane_cp01_g1

0xa49f,	// (0x0005795b) list_recal_day_event_pane_cp01_t1

0xa472,	// (0x0005792e) list_single_recal_day_pane_t1_ParamLimits

0xa484,	// (0x00057940) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0005d2fe) list_single_recal_day_pane_t_ParamLimits

0xa63e,	// (0x00057afa) bg_notes_pane_ParamLimits

0xa700,	// (0x00057bbc) list_notes_pane_ParamLimits

0x11fd,	// (0x0004e6b9) scroll_pane_cp06_ParamLimits

0xa722,	// (0x00057bde) main_notes_pane_ParamLimits

0x9628,	// (0x00056ae4) main_welc_pane

0x9537,	// (0x000569f3) main_welc_body_pane_ParamLimits

0x9537,	// (0x000569f3) main_welc_body_pane

0x9554,	// (0x00056a10) main_welc_opti_pane_ParamLimits

0x9554,	// (0x00056a10) main_welc_opti_pane

0x959d,	// (0x00056a59) main_welc_pane_t1_ParamLimits

0x959d,	// (0x00056a59) main_welc_pane_t1

0x95bf,	// (0x00056a7b) main_welc_body_row_pane_ParamLimits

0x95bf,	// (0x00056a7b) main_welc_body_row_pane

0xde5a,	// (0x0005b316) main_welc_opti_row_pane_ParamLimits

0xde5a,	// (0x0005b316) main_welc_opti_row_pane

0xf08b,	// (0x0005c547) main_welc_opti_row_pane_g1

0x95d5,	// (0x00056a91) main_welc_opti_row_pane_t1

0xf093,	// (0x0005c54f) main_welc_body_row_pane_t1

0xed85,	// (0x0005c241) popup_notif_wgt_heading_pane

0xed9f,	// (0x0005c25b) aid_size_list_notif_wgt_del_ParamLimits

0xedac,	// (0x0005c268) list_notif_wgt_row_pane_g1_ParamLimits

0xedb8,	// (0x0005c274) list_notif_wgt_row_pane_g2_ParamLimits

0xedcc,	// (0x0005c288) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0005d365) list_notif_wgt_row_pane_g_ParamLimits

0xedd9,	// (0x0005c295) list_notif_wgt_row_pane_t1_ParamLimits

0xedef,	// (0x0005c2ab) list_notif_wgt_row_pane_t2_ParamLimits

0xee01,	// (0x0005c2bd) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0005d36c) list_notif_wgt_row_pane_t_ParamLimits

0x901b,	// (0x000564d7) listrow_wgtman_pane_g1_ParamLimits

0x9028,	// (0x000564e4) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0005d395) listrow_wgtman_pane_g_ParamLimits

0x0b77,	// (0x0004e033) listrow_wgtman_pane_t1_ParamLimits

0x0b8f,	// (0x0004e04b) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0005d39a) listrow_wgtman_pane_t_ParamLimits

0x0bb5,	// (0x0004e071) wait_bar_pane_cp09_ParamLimits

0x9628,	// (0x00056ae4) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0005c55e) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0005c566) popup_notif_wgt_heading_pane_t1

0x9628,	// (0x00056ae4) main_vids_pane

0x9628,	// (0x00056ae4) vids_listscroll_pane

0x95e4,	// (0x00056aa0) scroll_pane_cp040

0x9628,	// (0x00056ae4) vids_list_pane

0x95ef,	// (0x00056aab) vids_list_double_pane_ParamLimits

0x95ef,	// (0x00056aab) vids_list_double_pane

0x9600,	// (0x00056abc) vids_list_double_pane_g1

0x9609,	// (0x00056ac5) vids_list_double_pane_t1

0x9618,	// (0x00056ad4) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0005d419) vids_list_double_pane_t

0xa4ad,	// (0x00057969) main_ncimui_pane_ParamLimits

0x7e0b,	// (0x000552c7) main_ncimui_pane_g1_ParamLimits

0x7e17,	// (0x000552d3) main_ncimui_pane_g2_ParamLimits

0x7e17,	// (0x000552d3) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0005d0a6) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0005d0a6) main_ncimui_pane_g

0x9573,	// (0x00056a2f) main_welc_pane_g1_ParamLimits

0x9573,	// (0x00056a2f) main_welc_pane_g1

0x9588,	// (0x00056a44) main_welc_pane_g2_ParamLimits

0x9588,	// (0x00056a44) main_welc_pane_g2

0x0001,

0xff58,	// (0x0005d414) main_welc_pane_g_ParamLimits

0xff58,	// (0x0005d414) main_welc_pane_g

0xa63e,	// (0x00057afa) listscroll_mce_pane_ParamLimits

0xb38e,	// (0x0005884a) wait_bar_pane_cp10

0xc795,	// (0x00059c51) main_cale_day_pane_ParamLimits

0xc795,	// (0x00059c51) main_cale_week_pane_ParamLimits

0xa63e,	// (0x00057afa) main_messa_pane_ParamLimits

0x5855,	// (0x00052d11) main_clock2_btn_pane_ParamLimits

0x5855,	// (0x00052d11) main_clock2_btn_pane

0xcf93,	// (0x0005a44f) main_clock2_btn_pane_cp01_ParamLimits

0xcf93,	// (0x0005a44f) main_clock2_btn_pane_cp01

0xe955,	// (0x0005be11) list_cale_mrui_pane_ParamLimits

0xee45,	// (0x0005c301) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0005d373) main_cf0_pane_g

0x9207,	// (0x000566c3) area_left_week_number_pane_ParamLimits

0x9213,	// (0x000566cf) area_top_day_name_pane_ParamLimits

0x9226,	// (0x000566e2) frame_month_view_pane_ParamLimits

0xef6c,	// (0x0005c428) grid_month_view_pane_ParamLimits

0xef7a,	// (0x0005c436) frm_month_g1_ParamLimits

0x92a7,	// (0x00056763) frm_month_g2_ParamLimits

0x92ba,	// (0x00056776) frm_month_g3_ParamLimits

0x92cd,	// (0x00056789) frm_month_g4_ParamLimits

0x92e0,	// (0x0005679c) frm_month_g5_ParamLimits

0x92f3,	// (0x000567af) frm_month_g6_ParamLimits

0x9306,	// (0x000567c2) frm_month_g7_ParamLimits

0xef87,	// (0x0005c443) frm_month_g8_ParamLimits

0x9319,	// (0x000567d5) frm_month_g9_ParamLimits

0x9329,	// (0x000567e5) frm_month_g10_ParamLimits

0x9339,	// (0x000567f5) frm_month_g11_ParamLimits

0x9349,	// (0x00056805) frm_month_g12_ParamLimits

0x935b,	// (0x00056817) frm_month_g13_ParamLimits

0x936d,	// (0x00056829) frm_month_g14_ParamLimits

0x9381,	// (0x0005683d) frm_month_g15_ParamLimits

0x9395,	// (0x00056851) frm_month_g16_ParamLimits

0xff08,	// (0x0005d3c4) frm_month_g_ParamLimits

0xef94,	// (0x0005c450) cell_top_day_name_pane_t1_ParamLimits

0x93a9,	// (0x00056865) cell_area_left_week_number_pane_g1_ParamLimits

0x93b5,	// (0x00056871) cell_area_left_week_number_pane_t1_ParamLimits

0xce0b,	// (0x0005a2c7) cell_month_view_pane_g1_ParamLimits

0x93c8,	// (0x00056884) cell_month_view_pane_t1_ParamLimits

0xa636,	// (0x00057af2) main_clock2_btn_pane_g1

0xf0b8,	// (0x0005c574) main_clock2_btn_pane_t1

0xa4ad,	// (0x00057969) listscroll_cmail_pane_ParamLimits

0xe727,	// (0x0005bbe3) main_sp_fs_email_pane_g1_ParamLimits

0xe733,	// (0x0005bbef) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0005d1a1) main_sp_fs_email_pane_g_ParamLimits

0xeaf3,	// (0x0005bfaf) list_recal_day_pane_ParamLimits

0xeb04,	// (0x0005bfc0) mian_recal_day_pane_t1

0x0746,	// (0x0004dc02) list_single_dyc_row_text_pane_t4_ParamLimits

0x0746,	// (0x0004dc02) list_single_dyc_row_text_pane_t4

0x078f,	// (0x0004dc4b) list_single_dyc_row_text_pane_t5_ParamLimits

0x078f,	// (0x0004dc4b) list_single_dyc_row_text_pane_t5

0x8720,	// (0x00055bdc) list_single_dyc_row_text_pane_t6_ParamLimits

0x8720,	// (0x00055bdc) list_single_dyc_row_text_pane_t6

0xacec,	// (0x000581a8) aid_mgn_list_cale_time_pane

0xa4ad,	// (0x00057969) main_gallery2_pane_ParamLimits

0xcfa9,	// (0x0005a465) main_clock2_pane_cp01_t1

0xcfb7,	// (0x0005a473) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0005cc80) main_clock2_pane_cp01_t

0x15b6,	// (0x0004ea72) cale_week_scroll_pane_g16_ParamLimits

0x15b6,	// (0x0004ea72) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
