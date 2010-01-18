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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0002c47c };

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
0x72ee,	// (0x0003376a) Screen

0x72f8,	// (0x00033774) application_window

0x732a,	// (0x000337a6) area_bottom_pane_ParamLimits

0x732a,	// (0x000337a6) area_bottom_pane

0x7359,	// (0x000337d5) area_top_pane_ParamLimits

0x7359,	// (0x000337d5) area_top_pane

0xe43d,	// (0x0003a8b9) call_video_uplink_pane_ParamLimits

0xe43d,	// (0x0003a8b9) call_video_uplink_pane

0x73dc,	// (0x00033858) main_pane_ParamLimits

0x73dc,	// (0x00033858) main_pane

0x28c2,	// (0x0002ed3e) context_pane

0x9c81,	// (0x000360fd) navi_pane

0x9c9b,	// (0x00036117) popup_cale_events_window_ParamLimits

0x9c9b,	// (0x00036117) popup_cale_events_window

0x28d5,	// (0x0002ed51) popup_mup_playback_window

0x9cb2,	// (0x0003612e) signal_pane

0xeb94,	// (0x0003b010) main_browser_pane

0x1383,	// (0x0002d7ff) main_burst_pane

0x7503,	// (0x0003397f) main_calc_pane

0x1383,	// (0x0002d7ff) main_cale_day_pane

0xecbc,	// (0x0003b138) main_cale_month_pane

0x1383,	// (0x0002d7ff) main_cale_week_pane

0x1383,	// (0x0002d7ff) main_call_pane

0xe86a,	// (0x0003ace6) main_call_poc_pane

0x1383,	// (0x0002d7ff) main_camera_pane

0x1383,	// (0x0002d7ff) main_chi_dic_pane

0x1182,	// (0x0002d5fe) main_clock_pane

0xe86a,	// (0x0003ace6) main_fmradio_pane

0x1383,	// (0x0002d7ff) main_graph_messa_pane

0xe86a,	// (0x0003ace6) main_help_pane

0xeb94,	// (0x0003b010) main_im_pane

0xeac5,	// (0x0003af41) main_image_pane_ParamLimits

0xeac5,	// (0x0003af41) main_image_pane

0xe86a,	// (0x0003ace6) main_location2_pane

0x1383,	// (0x0002d7ff) main_location_pane

0xe86a,	// (0x0003ace6) main_messa_pane

0xe86a,	// (0x0003ace6) main_mp2_pane

0x1383,	// (0x0002d7ff) main_mp_pane

0xe86a,	// (0x0003ace6) main_msg_pane

0xe86a,	// (0x0003ace6) main_mup_eq_pane

0xe86a,	// (0x0003ace6) main_mup_pane

0x1383,	// (0x0002d7ff) main_notes_pane

0xe86a,	// (0x0003ace6) main_pec_pane

0xe86a,	// (0x0003ace6) main_phob_pane

0xe86a,	// (0x0003ace6) main_pinb_pane

0xe86a,	// (0x0003ace6) main_postcard_pane

0xe86a,	// (0x0003ace6) main_qdial_pane

0x1383,	// (0x0002d7ff) main_skin_pane

0xe86a,	// (0x0003ace6) main_smil2_pane

0x1383,	// (0x0002d7ff) main_smil_pane

0x1383,	// (0x0002d7ff) main_video_pane

0x1383,	// (0x0002d7ff) main_video_tele_pane

0xeac5,	// (0x0003af41) main_viewer_pane_ParamLimits

0xeac5,	// (0x0003af41) main_viewer_pane

0x1383,	// (0x0002d7ff) main_vorec_pane

0x9bb3,	// (0x0003602f) popup_blid_sat_info_window_ParamLimits

0x9bb3,	// (0x0003602f) popup_blid_sat_info_window

0x9bc7,	// (0x00036043) popup_dyc_status_message_window_ParamLimits

0x9bc7,	// (0x00036043) popup_dyc_status_message_window

0x9bd3,	// (0x0003604f) popup_grid_large_graphic_window_ParamLimits

0x9bd3,	// (0x0003604f) popup_grid_large_graphic_window

0x9c2b,	// (0x000360a7) popup_loc_request_window_ParamLimits

0x9c2b,	// (0x000360a7) popup_loc_request_window

0x9c5b,	// (0x000360d7) popup_wml_address_window_ParamLimits

0x9c5b,	// (0x000360d7) popup_wml_address_window

0x9a98,	// (0x00035f14) call_muted_g1

0x97d3,	// (0x00035c4f) popup_call_audio_conf_window_ParamLimits

0x97d3,	// (0x00035c4f) popup_call_audio_conf_window

0x9aa8,	// (0x00035f24) popup_call_audio_first_window_ParamLimits

0x9aa8,	// (0x00035f24) popup_call_audio_first_window

0x9adc,	// (0x00035f58) popup_call_audio_in_window_ParamLimits

0x9adc,	// (0x00035f58) popup_call_audio_in_window

0x9af8,	// (0x00035f74) popup_call_audio_out_window_ParamLimits

0x9af8,	// (0x00035f74) popup_call_audio_out_window

0x9b14,	// (0x00035f90) popup_call_audio_second_window_ParamLimits

0x9b14,	// (0x00035f90) popup_call_audio_second_window

0x9b3c,	// (0x00035fb8) popup_call_audio_wait_window_ParamLimits

0x9b3c,	// (0x00035fb8) popup_call_audio_wait_window

0x9b5b,	// (0x00035fd7) popup_number_entry_window_ParamLimits

0x9b5b,	// (0x00035fd7) popup_number_entry_window

0xe459,	// (0x0003a8d5) bg_popup_call_pane_cp05_ParamLimits

0xe459,	// (0x0003a8d5) bg_popup_call_pane_cp05

0xe479,	// (0x0003a8f5) popup_number_entry_window_t1

0xe48c,	// (0x0003a908) popup_number_entry_window_t2

0xe49e,	// (0x0003a91a) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0003b568) popup_number_entry_window_t

0xe4b0,	// (0x0003a92c) text_title_cp2

0xe4c3,	// (0x0003a93f) bg_popup_call_pane_cp_ParamLimits

0xe4c3,	// (0x0003a93f) bg_popup_call_pane_cp

0xe4d1,	// (0x0003a94d) call_thumbnail_pane

0xe4d9,	// (0x0003a955) popup_call_audio_in_window_g1_ParamLimits

0xe4d9,	// (0x0003a955) popup_call_audio_in_window_g1

0xe4e5,	// (0x0003a961) popup_call_audio_in_window_g2_ParamLimits

0xe4e5,	// (0x0003a961) popup_call_audio_in_window_g2

0xe4f1,	// (0x0003a96d) popup_call_audio_in_window_g3_ParamLimits

0xe4f1,	// (0x0003a96d) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0003b571) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0003b571) popup_call_audio_in_window_g

0xe4fd,	// (0x0003a979) popup_call_audio_in_window_t1_ParamLimits

0xe4fd,	// (0x0003a979) popup_call_audio_in_window_t1

0xe518,	// (0x0003a994) popup_call_audio_in_window_t2_ParamLimits

0xe518,	// (0x0003a994) popup_call_audio_in_window_t2

0xe533,	// (0x0003a9af) popup_call_audio_in_window_t3_ParamLimits

0xe533,	// (0x0003a9af) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0003b578) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0003b578) popup_call_audio_in_window_t

0xe4c3,	// (0x0003a93f) bg_popup_call_pane_cp01_ParamLimits

0xe4c3,	// (0x0003a93f) bg_popup_call_pane_cp01

0xe4d1,	// (0x0003a94d) call_thumbnail_pane_cp02

0xe546,	// (0x0003a9c2) call_type_pane_cp022

0xe54e,	// (0x0003a9ca) popup_call_audio_out_window_g1_ParamLimits

0xe54e,	// (0x0003a9ca) popup_call_audio_out_window_g1

0xe560,	// (0x0003a9dc) popup_call_audio_out_window_g2_ParamLimits

0xe560,	// (0x0003a9dc) popup_call_audio_out_window_g2

0xe56c,	// (0x0003a9e8) popup_call_audio_out_window_g3_ParamLimits

0xe56c,	// (0x0003a9e8) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0003b57f) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0003b57f) popup_call_audio_out_window_g

0xe57e,	// (0x0003a9fa) popup_call_audio_out_window_t1_ParamLimits

0xe57e,	// (0x0003a9fa) popup_call_audio_out_window_t1

0xe596,	// (0x0003aa12) popup_call_audio_out_window_t2_ParamLimits

0xe596,	// (0x0003aa12) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0003b586) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0003b586) popup_call_audio_out_window_t

0xe5ab,	// (0x0003aa27) bg_popup_call_pane_ParamLimits

0xe5ab,	// (0x0003aa27) bg_popup_call_pane

0x759b,	// (0x00033a17) call_thumbnail_pane_cp_ParamLimits

0x759b,	// (0x00033a17) call_thumbnail_pane_cp

0xe62f,	// (0x0003aaab) call_type_pane_cp01_ParamLimits

0xe62f,	// (0x0003aaab) call_type_pane_cp01

0xe673,	// (0x0003aaef) popup_call_audio_first_window_g1_ParamLimits

0xe673,	// (0x0003aaef) popup_call_audio_first_window_g1

0xe6bf,	// (0x0003ab3b) popup_call_audio_first_window_g2_ParamLimits

0xe6bf,	// (0x0003ab3b) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0003b58b) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0003b58b) popup_call_audio_first_window_g

0xe703,	// (0x0003ab7f) popup_call_audio_first_window_t1_ParamLimits

0xe703,	// (0x0003ab7f) popup_call_audio_first_window_t1

0xe7af,	// (0x0003ac2b) popup_call_audio_first_window_t4_ParamLimits

0xe7af,	// (0x0003ac2b) popup_call_audio_first_window_t4

0xe83b,	// (0x0003acb7) popup_call_audio_first_window_t5_ParamLimits

0xe83b,	// (0x0003acb7) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0003b590) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0003b590) popup_call_audio_first_window_t

0xe86a,	// (0x0003ace6) bg_popup_call_pane_cp02

0xe874,	// (0x0003acf0) call_type_pane_cp023

0xe87c,	// (0x0003acf8) popup_call_audio_wait_window_g1

0xe884,	// (0x0003ad00) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0003b597) popup_call_audio_wait_window_g

0xe88c,	// (0x0003ad08) popup_call_audio_wait_window_t3

0xe89a,	// (0x0003ad16) bg_popup_call_pane_cp03_ParamLimits

0xe89a,	// (0x0003ad16) bg_popup_call_pane_cp03

0xe8fa,	// (0x0003ad76) call_thumbnail_pane_cp011_ParamLimits

0xe8fa,	// (0x0003ad76) call_thumbnail_pane_cp011

0xe906,	// (0x0003ad82) call_type_pane_cp034_ParamLimits

0xe906,	// (0x0003ad82) call_type_pane_cp034

0xe942,	// (0x0003adbe) popup_call_audio_second_window_g1_ParamLimits

0xe942,	// (0x0003adbe) popup_call_audio_second_window_g1

0xe97e,	// (0x0003adfa) popup_call_audio_second_window_g2_ParamLimits

0xe97e,	// (0x0003adfa) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0003b59c) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0003b59c) popup_call_audio_second_window_g

0xe9ba,	// (0x0003ae36) popup_call_audio_second_window_t1_ParamLimits

0xe9ba,	// (0x0003ae36) popup_call_audio_second_window_t1

0xea3b,	// (0x0003aeb7) popup_call_audio_second_window_t2_ParamLimits

0xea3b,	// (0x0003aeb7) popup_call_audio_second_window_t2

0xea71,	// (0x0003aeed) popup_call_audio_second_window_t3_ParamLimits

0xea71,	// (0x0003aeed) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0003b5a1) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0003b5a1) popup_call_audio_second_window_t

0xe86a,	// (0x0003ace6) bg_popup_call_pane_cp04

0xeaa7,	// (0x0003af23) list_conf_pane

0xeaaf,	// (0x0003af2b) popup_call_audio_conf_window_t1

0xeabd,	// (0x0003af39) call_thumbnail_pane_g1

0xeac5,	// (0x0003af41) bg_pinb_pane_ParamLimits

0xeac5,	// (0x0003af41) bg_pinb_pane

0xead3,	// (0x0003af4f) find_pinb_pane

0xeadc,	// (0x0003af58) listscroll_pinb_pane_ParamLimits

0xeadc,	// (0x0003af58) listscroll_pinb_pane

0xeaeb,	// (0x0003af67) pinb_bg_pane_g1

0x75bf,	// (0x00033a3b) pinb_bg_pane_g2

0x75c9,	// (0x00033a45) pinb_bg_pane_g3

0x75d3,	// (0x00033a4f) pinb_bg_pane_g4

0x75dd,	// (0x00033a59) pinb_bg_pane_g5

0x75e7,	// (0x00033a63) pinb_bg_pane_g6

0x75f2,	// (0x00033a6e) pinb_bg_pane_g7

0x75fd,	// (0x00033a79) pinb_bg_pane_g8

0x7606,	// (0x00033a82) pinb_bg_pane_g9

0x760e,	// (0x00033a8a) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0003b5a8) pinb_bg_pane_g

0x762b,	// (0x00033aa7) grid_pinb_pane

0x7634,	// (0x00033ab0) list_pinb_pane

0x763f,	// (0x00033abb) scroll_pane_cp01_ParamLimits

0x763f,	// (0x00033abb) scroll_pane_cp01

0xeaf5,	// (0x0003af71) find_pinb_pane_g1_ParamLimits

0xeaf5,	// (0x0003af71) find_pinb_pane_g1

0xeb0d,	// (0x0003af89) find_pinb_pane_t1

0xeb1f,	// (0x0003af9b) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0003b5c2) find_pinb_pane_t

0xeb34,	// (0x0003afb0) input_focus_pane_cp01_ParamLimits

0xeb34,	// (0x0003afb0) input_focus_pane_cp01

0x764f,	// (0x00033acb) cell_pinb_pane_ParamLimits

0x764f,	// (0x00033acb) cell_pinb_pane

0x7668,	// (0x00033ae4) cell_pinb_pane_g1_ParamLimits

0x7668,	// (0x00033ae4) cell_pinb_pane_g1

0x767c,	// (0x00033af8) cell_pinb_pane_g2_ParamLimits

0x767c,	// (0x00033af8) cell_pinb_pane_g2

0xeb40,	// (0x0003afbc) cell_pinb_pane_g3_ParamLimits

0xeb40,	// (0x0003afbc) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0003b5c7) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0003b5c7) cell_pinb_pane_g

0xe86a,	// (0x0003ace6) grid_highlight_pane_cp01

0x7688,	// (0x00033b04) list_pinb_item_pane_ParamLimits

0x7688,	// (0x00033b04) list_pinb_item_pane

0xe86a,	// (0x0003ace6) list_highlight_pane_cp02

0x769d,	// (0x00033b19) list_pinb_item_pane_g1_ParamLimits

0x769d,	// (0x00033b19) list_pinb_item_pane_g1

0x76aa,	// (0x00033b26) list_pinb_item_pane_g2_ParamLimits

0x76aa,	// (0x00033b26) list_pinb_item_pane_g2

0x76b6,	// (0x00033b32) list_pinb_item_pane_g3_ParamLimits

0x76b6,	// (0x00033b32) list_pinb_item_pane_g3

0x76c5,	// (0x00033b41) list_pinb_item_pane_g4_ParamLimits

0x76c5,	// (0x00033b41) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0003b5ce) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0003b5ce) list_pinb_item_pane_g

0x76d1,	// (0x00033b4d) list_pinb_item_pane_t1_ParamLimits

0x76d1,	// (0x00033b4d) list_pinb_item_pane_t1

0x7702,	// (0x00033b7e) calc_display_pane

0x771a,	// (0x00033b96) calc_paper_pane

0x7736,	// (0x00033bb2) grid_calc_pane

0xe86a,	// (0x0003ace6) bg_list_pane_cp01

0x7756,	// (0x00033bd2) clock_g1

0x775e,	// (0x00033bda) clock_g2

0x0001,

0xf15b,	// (0x0003b5d7) clock_g

0x7766,	// (0x00033be2) clock_t1_ParamLimits

0x7766,	// (0x00033be2) clock_t1

0x777b,	// (0x00033bf7) clock_t2_ParamLimits

0x777b,	// (0x00033bf7) clock_t2

0x778d,	// (0x00033c09) clock_t3_ParamLimits

0x778d,	// (0x00033c09) clock_t3

0x779f,	// (0x00033c1b) clock_t4_ParamLimits

0x779f,	// (0x00033c1b) clock_t4

0x77b1,	// (0x00033c2d) clock_t5_ParamLimits

0x77b1,	// (0x00033c2d) clock_t5

0x77c6,	// (0x00033c42) clock_t6_ParamLimits

0x77c6,	// (0x00033c42) clock_t6

0x77d8,	// (0x00033c54) clock_t7_ParamLimits

0x77d8,	// (0x00033c54) clock_t7

0x77ea,	// (0x00033c66) clock_t8_ParamLimits

0x77ea,	// (0x00033c66) clock_t8

0x77fc,	// (0x00033c78) clock_t9_ParamLimits

0x77fc,	// (0x00033c78) clock_t9

0x0008,

0xf160,	// (0x0003b5dc) clock_t_ParamLimits

0xf160,	// (0x0003b5dc) clock_t

0xeb4c,	// (0x0003afc8) popup_clock_analogue_window_cp02

0xeb4c,	// (0x0003afc8) popup_clock_digital_window_cp01

0xeb54,	// (0x0003afd0) listscroll_help_pane

0xe86a,	// (0x0003ace6) phob_pre_status_pane

0xeb5e,	// (0x0003afda) grid_qdial_pane

0xe86a,	// (0x0003ace6) listscroll_mce_pane

0xeb68,	// (0x0003afe4) bg_notes_pane

0xeb72,	// (0x0003afee) list_notes_pane

0x780e,	// (0x00033c8a) scroll_pane_cp06

0xeb7c,	// (0x0003aff8) bg_calc_paper_pane

0x7817,	// (0x00033c93) list_calc_pane

0xeb94,	// (0x0003b010) bg_calc_display_pane

0x7831,	// (0x00033cad) calc_display_pane_t1

0x7846,	// (0x00033cc2) calc_display_pane_t2

0x785b,	// (0x00033cd7) calc_display_pane_t3

0x0002,

0xf173,	// (0x0003b5ef) calc_display_pane_t

0x786d,	// (0x00033ce9) cell_calc_pane_ParamLimits

0x786d,	// (0x00033ce9) cell_calc_pane

0xeba0,	// (0x0003b01c) bg_calc_paper_pane_g1

0xebac,	// (0x0003b028) bg_calc_paper_pane_g2

0xebb8,	// (0x0003b034) bg_calc_paper_pane_g3

0xebc4,	// (0x0003b040) bg_calc_paper_pane_g4

0xebd0,	// (0x0003b04c) bg_calc_paper_pane_g5

0x7894,	// (0x00033d10) bg_calc_paper_pane_g6

0x78a3,	// (0x00033d1f) bg_calc_paper_pane_g7

0x78b2,	// (0x00033d2e) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0003b5f6) bg_calc_paper_pane_g

0x78c1,	// (0x00033d3d) calc_bg_paper_pane_g9

0x78d0,	// (0x00033d4c) list_calc_item_pane_ParamLimits

0x78d0,	// (0x00033d4c) list_calc_item_pane

0xebdc,	// (0x0003b058) list_calc_item_pane_g1

0x78e9,	// (0x00033d65) list_calc_item_pane_t1_ParamLimits

0x78e9,	// (0x00033d65) list_calc_item_pane_t1

0x78fb,	// (0x00033d77) list_calc_item_pane_t2_ParamLimits

0x78fb,	// (0x00033d77) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0003b607) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0003b607) list_calc_item_pane_t

0xebe9,	// (0x0003b065) cell_calc_pane_g1

0xebf3,	// (0x0003b06f) grid_highlight_pane_cp02

0xec15,	// (0x0003b091) bg_calc_display_pane_g1

0x7929,	// (0x00033da5) bg_calc_display_pane_g2

0xec1e,	// (0x0003b09a) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0003b611) bg_calc_display_pane_g

0x7933,	// (0x00033daf) cell_qdial_pane_ParamLimits

0x7933,	// (0x00033daf) cell_qdial_pane

0x7945,	// (0x00033dc1) cell_qdial_pane_g1_ParamLimits

0x7945,	// (0x00033dc1) cell_qdial_pane_g1

0x7952,	// (0x00033dce) cell_qdial_pane_g2_ParamLimits

0x7952,	// (0x00033dce) cell_qdial_pane_g2

0xec27,	// (0x0003b0a3) cell_qdial_pane_g3_ParamLimits

0xec27,	// (0x0003b0a3) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0003b618) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0003b618) cell_qdial_pane_g

0x7970,	// (0x00033dec) cell_qdial_pane_t1_ParamLimits

0x7970,	// (0x00033dec) cell_qdial_pane_t1

0x7988,	// (0x00033e04) cell_qdial_pane_t2_ParamLimits

0x7988,	// (0x00033e04) cell_qdial_pane_t2

0x799b,	// (0x00033e17) cell_qdial_pane_t3_ParamLimits

0x799b,	// (0x00033e17) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0003b621) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0003b621) cell_qdial_pane_t

0xe86a,	// (0x0003ace6) grid_highlight_pane_cp04

0xec33,	// (0x0003b0af) thumbnail_qdial_pane_ParamLimits

0xec33,	// (0x0003b0af) thumbnail_qdial_pane

0xec8f,	// (0x0003b10b) list_help_pane

0xec99,	// (0x0003b115) scroll_pane_cp02

0x79ae,	// (0x00033e2a) help_list_pane_t1_ParamLimits

0x79ae,	// (0x00033e2a) help_list_pane_t1

0x79cc,	// (0x00033e48) bg_notes_pane_g2

0x79d4,	// (0x00033e50) bg_notes_pane_g3

0x79dc,	// (0x00033e58) notes_bg_pane_g1

0x79e4,	// (0x00033e60) notes_bg_pane_g4

0x79ec,	// (0x00033e68) notes_bg_pane_g5

0x79f4,	// (0x00033e70) notes_bg_pane_g6

0x79fc,	// (0x00033e78) notes_bg_pane_g7

0x7a04,	// (0x00033e80) notes_bg_pane_g8

0x7a0c,	// (0x00033e88) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0003b63f) notes_bg_pane_g

0x7a14,	// (0x00033e90) list_notes_text_pane_ParamLimits

0x7a14,	// (0x00033e90) list_notes_text_pane

0xeca2,	// (0x0003b11e) list_notes_text_pane_g1

0x61ac,	// (0x00032628) list_notes_text_pane_t1

0xecbc,	// (0x0003b138) listscroll_cale_week_pane

0x7a45,	// (0x00033ec1) bg_cale_heading_pane

0xeccb,	// (0x0003b147) bg_cale_pane_cp01

0x7a59,	// (0x00033ed5) cale_week_corner_pane

0x7a6f,	// (0x00033eeb) cale_week_day_heading_pane

0x7a83,	// (0x00033eff) cale_week_scroll_pane_g1

0x7a94,	// (0x00033f10) cale_week_scroll_pane_g2

0x7aa5,	// (0x00033f21) cale_week_scroll_pane_g3

0x7ab6,	// (0x00033f32) cale_week_scroll_pane_g4

0x7ac7,	// (0x00033f43) cale_week_scroll_pane_g5

0x7ad8,	// (0x00033f54) cale_week_scroll_pane_g6

0x7ae9,	// (0x00033f65) cale_week_scroll_pane_g7

0x7afa,	// (0x00033f76) cale_week_scroll_pane_g8

0x7b0b,	// (0x00033f87) cale_week_scroll_pane_g9

0x7b1c,	// (0x00033f98) cale_week_scroll_pane_g10

0x7b2d,	// (0x00033fa9) cale_week_scroll_pane_g11

0x7b3e,	// (0x00033fba) cale_week_scroll_pane_g12

0x7b4f,	// (0x00033fcb) cale_week_scroll_pane_g13

0x7b60,	// (0x00033fdc) cale_week_scroll_pane_g14

0x7b71,	// (0x00033fed) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0003b64e) cale_week_scroll_pane_g

0x7b82,	// (0x00033ffe) cale_week_time_pane

0x7b93,	// (0x0003400f) grid_cale_week_pane

0x7ba6,	// (0x00034022) scroll_pane_cp08

0x7bbe,	// (0x0003403a) cell_cale_week_pane_ParamLimits

0x7bbe,	// (0x0003403a) cell_cale_week_pane

0x7bfa,	// (0x00034076) cale_week_day_heading_pane_t1

0x7c13,	// (0x0003408f) cale_week_day_heading_pane_t2

0x7c2c,	// (0x000340a8) cale_week_day_heading_pane_t3

0x7c45,	// (0x000340c1) cale_week_day_heading_pane_t4

0x7c5e,	// (0x000340da) cale_week_day_heading_pane_t5

0x7c77,	// (0x000340f3) cale_week_day_heading_pane_t6

0x7c90,	// (0x0003410c) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0003b66d) cale_week_day_heading_pane_t

0xecf6,	// (0x0003b172) bg_cale_side_pane

0x7ca9,	// (0x00034125) cale_week_time_pane_t1

0x7cd5,	// (0x00034151) cale_week_time_pane_t2

0x7d01,	// (0x0003417d) cale_week_time_pane_t3

0x7d2d,	// (0x000341a9) cale_week_time_pane_t4

0x7d59,	// (0x000341d5) cale_week_time_pane_t5

0x7d85,	// (0x00034201) cale_week_time_pane_t6

0x7db1,	// (0x0003422d) cale_week_time_pane_t7

0x7ddd,	// (0x00034259) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0003b67c) cale_week_time_pane_t

0x7e09,	// (0x00034285) cell_cale_week_pane_g2

0x7e25,	// (0x000342a1) cell_cale_week_pane_g3_ParamLimits

0x7e25,	// (0x000342a1) cell_cale_week_pane_g3

0xed04,	// (0x0003b180) grid_highlight_pane_cp07

0xed0c,	// (0x0003b188) listscroll_gms_pane

0xed16,	// (0x0003b192) grid_gms_pane

0xed1f,	// (0x0003b19b) listscroll_gms_pane_g1

0xed27,	// (0x0003b1a3) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0003b68d) listscroll_gms_pane_g

0x7e3d,	// (0x000342b9) scroll_pane_cp010

0x7e46,	// (0x000342c2) cell_gms_pane_ParamLimits

0x7e46,	// (0x000342c2) cell_gms_pane

0x7e57,	// (0x000342d3) cell_gms_pane_g1

0xed2f,	// (0x0003b1ab) cell_gms_pane_g2

0xeca2,	// (0x0003b11e) cell_gms_pane_g3

0xed37,	// (0x0003b1b3) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0003b692) cell_gms_pane_g

0xed40,	// (0x0003b1bc) grid_highlight_pane_cp09

0x9a46,	// (0x00035ec2) phob_pre_status_pane_g1

0x9a4e,	// (0x00035eca) phob_pre_status_pane_g2

0x9a56,	// (0x00035ed2) phob_pre_status_pane_g3

0x9a5e,	// (0x00035eda) phob_pre_status_pane_g4

0x0004,

0xf618,	// (0x0003ba94) phob_pre_status_pane_g

0x9a6e,	// (0x00035eea) phob_pre_status_pane_t1

0x9a7c,	// (0x00035ef8) phob_pre_status_pane_t2

0x9a8a,	// (0x00035f06) phob_pre_status_pane_t3

0x0002,

0xf623,	// (0x0003ba9f) phob_pre_status_pane_t

0xe86a,	// (0x0003ace6) bg_list_pane_cp05

0x7e5f,	// (0x000342db) grid_vorec_pane

0x7e67,	// (0x000342e3) vorec_t1

0x7e75,	// (0x000342f1) vorec_t2

0x7e83,	// (0x000342ff) vorec_t3

0x7e91,	// (0x0003430d) vorec_t4

0x7e9f,	// (0x0003431b) vorec_t5

0x7ead,	// (0x00034329) vorec_t6

0x0006,

0xf21f,	// (0x0003b69b) vorec_t

0x7ec9,	// (0x00034345) wait_bar_pane_cp01

0x1792,	// (0x0002dc0e) cell_vorec_pane_ParamLimits

0x1792,	// (0x0002dc0e) cell_vorec_pane

0xed48,	// (0x0003b1c4) cell_vorec_pane_g1

0xe86a,	// (0x0003ace6) grid_highlight_pane_cp05

0x7edd,	// (0x00034359) cams_zoom_pane

0x7ee9,	// (0x00034365) image_vga_pane

0x7ef6,	// (0x00034372) main_camera_pane_g1

0x7f02,	// (0x0003437e) main_camera_pane_g2

0x7f0e,	// (0x0003438a) main_camera_pane_g3

0x7f1a,	// (0x00034396) main_camera_pane_g4

0x7f26,	// (0x000343a2) main_camera_pane_g5

0x7f32,	// (0x000343ae) main_camera_pane_g6

0x7f3e,	// (0x000343ba) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0003b6aa) main_camera_pane_g

0x7f4a,	// (0x000343c6) main_camera_pane_t1

0x7f5c,	// (0x000343d8) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0003b6bb) main_camera_pane_t

0x7f80,	// (0x000343fc) cams_zoom_pane_cp_ParamLimits

0x7f80,	// (0x000343fc) cams_zoom_pane_cp

0x7fa4,	// (0x00034420) image_cif_pane_ParamLimits

0x7fa4,	// (0x00034420) image_cif_pane

0x7fbe,	// (0x0003443a) image_subqcif_pane

0x7fc6,	// (0x00034442) main_video_pane_g1_ParamLimits

0x7fc6,	// (0x00034442) main_video_pane_g1

0x7fe6,	// (0x00034462) main_video_pane_g2_ParamLimits

0x7fe6,	// (0x00034462) main_video_pane_g2

0x8014,	// (0x00034490) main_video_pane_g3_ParamLimits

0x8014,	// (0x00034490) main_video_pane_g3

0x803d,	// (0x000344b9) main_video_pane_g4_ParamLimits

0x803d,	// (0x000344b9) main_video_pane_g4

0x8066,	// (0x000344e2) main_video_pane_g5_ParamLimits

0x8066,	// (0x000344e2) main_video_pane_g5

0xed5e,	// (0x0003b1da) main_video_pane_g6_ParamLimits

0xed5e,	// (0x0003b1da) main_video_pane_g6

0x0006,

0xf244,	// (0x0003b6c0) main_video_pane_g_ParamLimits

0xf244,	// (0x0003b6c0) main_video_pane_g

0x8088,	// (0x00034504) main_video_pane_t1_ParamLimits

0x8088,	// (0x00034504) main_video_pane_t1

0xed78,	// (0x0003b1f4) cams_zoom_pane_g1

0xed81,	// (0x0003b1fd) cams_zoom_pane_g2

0xed8a,	// (0x0003b206) cams_zoom_pane_g3

0xed93,	// (0x0003b20f) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0003b6cf) cams_zoom_pane_g

0x80d2,	// (0x0003454e) grid_cams_pane

0x80de,	// (0x0003455a) linegrid_cams_pane

0x80ea,	// (0x00034566) cell_cams_pane_ParamLimits

0x80ea,	// (0x00034566) cell_cams_pane

0xed9c,	// (0x0003b218) cams_burst_image_pane

0xeda4,	// (0x0003b220) cell_cams_pane_g1

0xe86a,	// (0x0003ace6) grid_highlight_pane_cp03

0xebe9,	// (0x0003b065) mp_bg_pane_g1

0xe86a,	// (0x0003ace6) bg_list_pane_cp03

0x279e,	// (0x0002ec1a) bg_mp_pane

0x27a6,	// (0x0002ec22) grid_mp_pane

0x27ae,	// (0x0002ec2a) media_player_g1

0x27b6,	// (0x0002ec32) media_player_t1

0x27c4,	// (0x0002ec40) media_player_t2

0x27d2,	// (0x0002ec4e) media_player_t3

0x27e0,	// (0x0002ec5c) media_player_t4

0x27ee,	// (0x0002ec6a) media_player_t5

0x27fc,	// (0x0002ec78) media_player_t6

0x280a,	// (0x0002ec86) media_player_t7

0x0006,

0xf602,	// (0x0003ba7e) media_player_t

0x2818,	// (0x0002ec94) wait_bar_pane_cp02

0xf5e7,	// (0x0003ba63) main_usb_pane_t

0x9a3d,	// (0x00035eb9) cell_mp_pane

0xebe9,	// (0x0003b065) cell_mp_pane_g1

0xe86a,	// (0x0003ace6) grid_highlight_pane_cp06

0xedac,	// (0x0003b228) grid_skin_colour_pane

0xedb4,	// (0x0003b230) list_highlight_pane_cp03

0x80fd,	// (0x00034579) skin_g1

0xedbc,	// (0x0003b238) skin_t1

0xedcb,	// (0x0003b247) skin_t2

0x0001,

0xf288,	// (0x0003b704) skin_t

0x8105,	// (0x00034581) cell_skin_colour_pane_ParamLimits

0x8105,	// (0x00034581) cell_skin_colour_pane

0xedd9,	// (0x0003b255) cell_skin_colour_pane_g1

0x817b,	// (0x000345f7) call_video_g1_ParamLimits

0x817b,	// (0x000345f7) call_video_g1

0x8187,	// (0x00034603) call_video_g2_ParamLimits

0x8187,	// (0x00034603) call_video_g2

0x0001,

0xf28d,	// (0x0003b709) call_video_g_ParamLimits

0xf28d,	// (0x0003b709) call_video_g

0x81d7,	// (0x00034653) call_video_uplink_pane_cp1_ParamLimits

0x81d7,	// (0x00034653) call_video_uplink_pane_cp1

0xedeb,	// (0x0003b267) call_video_uplink_pane_cp2

0x8293,	// (0x0003470f) video_down_crop_pane_ParamLimits

0x8293,	// (0x0003470f) video_down_crop_pane

0x835d,	// (0x000347d9) video_down_pane_ParamLimits

0x835d,	// (0x000347d9) video_down_pane

0xedf3,	// (0x0003b26f) video_down_subqcif_pane_ParamLimits

0xedf3,	// (0x0003b26f) video_down_subqcif_pane

0xee0b,	// (0x0003b287) video_down_subqcif_pane_cp_ParamLimits

0xee0b,	// (0x0003b287) video_down_subqcif_pane_cp

0xee2f,	// (0x0003b2ab) im_reading_pane_ParamLimits

0xee2f,	// (0x0003b2ab) im_reading_pane

0x8429,	// (0x000348a5) im_writing_pane_ParamLimits

0x8429,	// (0x000348a5) im_writing_pane

0x843f,	// (0x000348bb) im_reading_pane_t1

0xee49,	// (0x0003b2c5) list_im_pane

0xee5a,	// (0x0003b2d6) scroll_pane_cp07

0x8477,	// (0x000348f3) im_writing_pane_t1_ParamLimits

0x8477,	// (0x000348f3) im_writing_pane_t1

0xee73,	// (0x0003b2ef) im_writing_pane_t2_ParamLimits

0xee73,	// (0x0003b2ef) im_writing_pane_t2

0x0001,

0xf297,	// (0x0003b713) im_writing_pane_t_ParamLimits

0xf297,	// (0x0003b713) im_writing_pane_t

0xe86a,	// (0x0003ace6) input_focus_pane_cp04

0xe86a,	// (0x0003ace6) input_focus_pane_cp05

0x848c,	// (0x00034908) list_im_single_pane_ParamLimits

0x848c,	// (0x00034908) list_im_single_pane

0xee90,	// (0x0003b30c) list_single_im_pane_t1

0x9a03,	// (0x00035e7f) blid_accuracy_pane

0x9a0b,	// (0x00035e87) blid_compass_pane

0x9a13,	// (0x00035e8f) main_location_t1

0x9a21,	// (0x00035e9d) main_location_t2

0x9a2f,	// (0x00035eab) main_location_t3

0x0002,

0xf611,	// (0x0003ba8d) main_location_t

0xe86a,	// (0x0003ace6) aid_levels_location

0xebe9,	// (0x0003b065) blid_accuracy_pane_g1

0xebe9,	// (0x0003b065) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0003b775) blid_accuracy_pane_g

0xeeca,	// (0x0003b346) wml_content_pane

0xef08,	// (0x0003b384) wml_button_pane_ParamLimits

0xef08,	// (0x0003b384) wml_button_pane

0x84a4,	// (0x00034920) wml_list_single_large_pane_ParamLimits

0x84a4,	// (0x00034920) wml_list_single_large_pane

0x84bb,	// (0x00034937) wml_list_single_medium_pane_ParamLimits

0x84bb,	// (0x00034937) wml_list_single_medium_pane

0x84d3,	// (0x0003494f) wml_list_single_small_pane_ParamLimits

0x84d3,	// (0x0003494f) wml_list_single_small_pane

0xef1c,	// (0x0003b398) wml_selection_box_pane_ParamLimits

0xef1c,	// (0x0003b398) wml_selection_box_pane

0xef2f,	// (0x0003b3ab) wml_list_single_pane_t1

0xef3e,	// (0x0003b3ba) wml_list_single_medium_pane_t1

0xef4d,	// (0x0003b3c9) wml_list_single_large_pane_t1

0xef5c,	// (0x0003b3d8) input_focus_pane_cp02_ParamLimits

0xef5c,	// (0x0003b3d8) input_focus_pane_cp02

0xef6f,	// (0x0003b3eb) wml_selection_box_pane_g1

0xef78,	// (0x0003b3f4) wml_selection_box_pane_t1_ParamLimits

0xef78,	// (0x0003b3f4) wml_selection_box_pane_t1

0xeac5,	// (0x0003af41) bg_wml_button_pane_ParamLimits

0xeac5,	// (0x0003af41) bg_wml_button_pane

0xef90,	// (0x0003b40c) wml_button_pane_g1

0xef98,	// (0x0003b414) wml_button_pane_t1

0xef90,	// (0x0003b40c) wml_button_bg_pane_g1

0xefa8,	// (0x0003b424) wml_button_bg_pane_g2

0xefb0,	// (0x0003b42c) wml_button_bg_pane_g3

0xefb8,	// (0x0003b434) wml_button_bg_pane_g4

0xefc0,	// (0x0003b43c) wml_button_bg_pane_g5

0xefc8,	// (0x0003b444) wml_button_bg_pane_g6

0xefd0,	// (0x0003b44c) wml_button_bg_pane_g7

0xefd8,	// (0x0003b454) wml_button_bg_pane_g8

0xefe0,	// (0x0003b45c) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0003b718) wml_button_bg_pane_g

0x84ee,	// (0x0003496a) bg_list_pane_cp02

0xefe8,	// (0x0003b464) mce_header_pane_ParamLimits

0xefe8,	// (0x0003b464) mce_header_pane

0xeffc,	// (0x0003b478) mce_icon_pane

0xeffc,	// (0x0003b478) mce_image_pane

0xf005,	// (0x0003b481) mce_text_pane_ParamLimits

0xf005,	// (0x0003b481) mce_text_pane

0x84f7,	// (0x00034973) scroll_pane_cp03

0x84f7,	// (0x00034973) scroll_pane_cp04

0xf019,	// (0x0003b495) scroll_pane_cp05_ParamLimits

0xf019,	// (0x0003b495) scroll_pane_cp05

0x84ff,	// (0x0003497b) mce_header_field_pane_ParamLimits

0x84ff,	// (0x0003497b) mce_header_field_pane

0x851f,	// (0x0003499b) mce_header_field_pane_2_ParamLimits

0x851f,	// (0x0003499b) mce_header_field_pane_2

0x8535,	// (0x000349b1) mce_header_field_pane_3

0x853d,	// (0x000349b9) list_single_mce_message_pane_ParamLimits

0x853d,	// (0x000349b9) list_single_mce_message_pane

0x8554,	// (0x000349d0) list_single_mce_smart_pane_ParamLimits

0x8554,	// (0x000349d0) list_single_mce_smart_pane

0xf025,	// (0x0003b4a1) input_focus_pane_cp03

0xf02e,	// (0x0003b4aa) list_header_data_pane

0x8576,	// (0x000349f2) mce_header_field_pane_t1

0x8584,	// (0x00034a00) list_single_mce_header_pane_ParamLimits

0x8584,	// (0x00034a00) list_single_mce_header_pane

0xf036,	// (0x0003b4b2) list_single_mce_header_pane_t1

0xf045,	// (0x0003b4c1) list_single_mce_message_pane_g1

0xf04e,	// (0x0003b4ca) list_single_mce_message_pane_t1

0x85ba,	// (0x00034a36) bg_cale_heading_pane_cp01_ParamLimits

0x85ba,	// (0x00034a36) bg_cale_heading_pane_cp01

0xf05d,	// (0x0003b4d9) bg_cale_pane_cp02_ParamLimits

0xf05d,	// (0x0003b4d9) bg_cale_pane_cp02

0x85dd,	// (0x00034a59) cale_month_corner_pane

0x85f3,	// (0x00034a6f) cale_month_day_heading_pane_ParamLimits

0x85f3,	// (0x00034a6f) cale_month_day_heading_pane

0x8616,	// (0x00034a92) cale_month_pane_g1_ParamLimits

0x8616,	// (0x00034a92) cale_month_pane_g1

0x8632,	// (0x00034aae) cale_month_pane_g2_ParamLimits

0x8632,	// (0x00034aae) cale_month_pane_g2

0x864b,	// (0x00034ac7) cale_month_pane_g3_ParamLimits

0x864b,	// (0x00034ac7) cale_month_pane_g3

0x8677,	// (0x00034af3) cale_month_pane_g4_ParamLimits

0x8677,	// (0x00034af3) cale_month_pane_g4

0x86a3,	// (0x00034b1f) cale_month_pane_g5_ParamLimits

0x86a3,	// (0x00034b1f) cale_month_pane_g5

0x86cf,	// (0x00034b4b) cale_month_pane_g6_ParamLimits

0x86cf,	// (0x00034b4b) cale_month_pane_g6

0x86fb,	// (0x00034b77) cale_month_pane_g7_ParamLimits

0x86fb,	// (0x00034b77) cale_month_pane_g7

0x8727,	// (0x00034ba3) cale_month_pane_g8_ParamLimits

0x8727,	// (0x00034ba3) cale_month_pane_g8

0x8753,	// (0x00034bcf) cale_month_pane_g9_ParamLimits

0x8753,	// (0x00034bcf) cale_month_pane_g9

0x877d,	// (0x00034bf9) cale_month_pane_g10_ParamLimits

0x877d,	// (0x00034bf9) cale_month_pane_g10

0x87a7,	// (0x00034c23) cale_month_pane_g11_ParamLimits

0x87a7,	// (0x00034c23) cale_month_pane_g11

0x87d1,	// (0x00034c4d) cale_month_pane_g12_ParamLimits

0x87d1,	// (0x00034c4d) cale_month_pane_g12

0x87fb,	// (0x00034c77) cale_month_pane_g13_ParamLimits

0x87fb,	// (0x00034c77) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0003b72b) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0003b72b) cale_month_pane_g

0x8825,	// (0x00034ca1) cale_month_week_pane

0x8836,	// (0x00034cb2) grid_cale_month_pane_ParamLimits

0x8836,	// (0x00034cb2) grid_cale_month_pane

0x8854,	// (0x00034cd0) cale_month_day_heading_pane_t1

0x88b2,	// (0x00034d2e) cale_month_day_heading_pane_t2

0x8917,	// (0x00034d93) cale_month_day_heading_pane_t3

0x897c,	// (0x00034df8) cale_month_day_heading_pane_t4

0x89e1,	// (0x00034e5d) cale_month_day_heading_pane_t5

0x8a46,	// (0x00034ec2) cale_month_day_heading_pane_t6

0x8aab,	// (0x00034f27) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0003b746) cale_month_day_heading_pane_t

0xecf6,	// (0x0003b172) bg_cale_side_pane_cp01

0x8b10,	// (0x00034f8c) cale_month_week_pane_t1

0x8b27,	// (0x00034fa3) cale_month_week_pane_t2

0x8b3e,	// (0x00034fba) cale_month_week_pane_t3

0x8b55,	// (0x00034fd1) cale_month_week_pane_t4

0x8b6c,	// (0x00034fe8) cale_month_week_pane_t5

0x8b83,	// (0x00034fff) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0003b755) cale_month_week_pane_t

0x8b9a,	// (0x00035016) cell_cale_month_pane_ParamLimits

0x8b9a,	// (0x00035016) cell_cale_month_pane

0x8c40,	// (0x000350bc) cell_cale_month_pane_g1

0x8c4c,	// (0x000350c8) cell_cale_month_pane_t1_ParamLimits

0x8c4c,	// (0x000350c8) cell_cale_month_pane_t1

0xed04,	// (0x0003b180) grid_highlight_pane_cp08

0xebe9,	// (0x0003b065) main_smil_g1

0x8c68,	// (0x000350e4) smil_status_pane

0xf092,	// (0x0003b50e) smil_text_pane

0x267e,	// (0x0002eafa) bg_popup_call3_rect_pane_g8

0x2686,	// (0x0002eb02) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0003ba0e) bg_popup_call3_rect_pane_g

0x294f,	// (0x0002edcb) smil_status_volume_pane_g1

0xf09c,	// (0x0003b518) smil_status_pane_t1

0x9d44,	// (0x000361c0) volume_smil_pane

0xf0b3,	// (0x0003b52f) list_smil_text_pane

0x8c79,	// (0x000350f5) scroll_pane_cp011

0x8c82,	// (0x000350fe) smil_text_list_pane_t1_ParamLimits

0x8c82,	// (0x000350fe) smil_text_list_pane_t1

0x8cc7,	// (0x00035143) aid_volume_smil_ParamLimits

0x8cc7,	// (0x00035143) aid_volume_smil

0xebe9,	// (0x0003b065) smil_volume_pane_g1

0xebe9,	// (0x0003b065) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0003b775) smil_volume_pane_g

0xeb94,	// (0x0003b010) listscroll_cale_day_pane

0x0c3d,	// (0x0002d0b9) bg_cale_pane

0x0c55,	// (0x0002d0d1) list_cale_pane

0x0c66,	// (0x0002d0e2) scroll_pane_cp09

0x0c77,	// (0x0002d0f3) cale_bg_pane_g1

0x0c7f,	// (0x0002d0fb) cale_bg_pane_g2

0x0c87,	// (0x0002d103) cale_bg_pane_g3

0x0c8f,	// (0x0002d10b) cale_bg_pane_g4

0x0c97,	// (0x0002d113) cale_bg_pane_g5

0x0c9f,	// (0x0002d11b) cale_bg_pane_g6

0x0ca7,	// (0x0002d123) cale_bg_pane_g7

0x0caf,	// (0x0002d12b) cale_bg_pane_g8

0x0cb7,	// (0x0002d133) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0003b77a) cale_bg_pane_g

0x8ce9,	// (0x00035165) list_cale_time_pane_ParamLimits

0x8ce9,	// (0x00035165) list_cale_time_pane

0x0cbf,	// (0x0002d13b) list_cale_time_pane_g1_ParamLimits

0x0cbf,	// (0x0002d13b) list_cale_time_pane_g1

0x0ccb,	// (0x0002d147) list_cale_time_pane_g2_ParamLimits

0x0ccb,	// (0x0002d147) list_cale_time_pane_g2

0x8d00,	// (0x0003517c) list_cale_time_pane_g3_ParamLimits

0x8d00,	// (0x0003517c) list_cale_time_pane_g3

0x8d0c,	// (0x00035188) list_cale_time_pane_g4_ParamLimits

0x8d0c,	// (0x00035188) list_cale_time_pane_g4

0x8d18,	// (0x00035194) list_cale_time_pane_g5_ParamLimits

0x8d18,	// (0x00035194) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0003b78d) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0003b78d) list_cale_time_pane_g

0x0ce5,	// (0x0002d161) list_cale_time_pane_t1_ParamLimits

0x0ce5,	// (0x0002d161) list_cale_time_pane_t1

0x0d0d,	// (0x0002d189) list_cale_time_pane_t2_ParamLimits

0x0d0d,	// (0x0002d189) list_cale_time_pane_t2

0x8fd5,	// (0x00035451) aid_blid_cardinal_pane

0x9013,	// (0x0003548f) compass_pane_t4

0x0d35,	// (0x0002d1b1) list_cale_time_pane_t4_ParamLimits

0x0d35,	// (0x0002d1b1) list_cale_time_pane_t4

0x9021,	// (0x0003549d) compass_pane_t5

0x902f,	// (0x000354ab) compass_pane_t6

0x903d,	// (0x000354b9) compass_pane_t7

0x1286,	// (0x0002d702) navi_pane_cc_t1

0x143c,	// (0x0002d8b8) aid_phob_thumbnail_center_pane

0x95b0,	// (0x00035a2c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0003b79a) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0003b79a) list_cale_time_pane_t

0xe4c3,	// (0x0003a93f) bg_popup_window_pane_cp02_ParamLimits

0xe4c3,	// (0x0003a93f) bg_popup_window_pane_cp02

0x0d5d,	// (0x0002d1d9) heading_pane_cp01_ParamLimits

0x0d5d,	// (0x0002d1d9) heading_pane_cp01

0x0d69,	// (0x0002d1e5) loc_req_pane_ParamLimits

0x0d69,	// (0x0002d1e5) loc_req_pane

0x0d79,	// (0x0002d1f5) loc_type_pane_ParamLimits

0x0d79,	// (0x0002d1f5) loc_type_pane

0x0d8b,	// (0x0002d207) loc_type_pane_t1_ParamLimits

0x0d8b,	// (0x0002d207) loc_type_pane_t1

0x0d9d,	// (0x0002d219) loc_type_pane_t2_ParamLimits

0x0d9d,	// (0x0002d219) loc_type_pane_t2

0x0daf,	// (0x0002d22b) loc_type_pane_t3_ParamLimits

0x0daf,	// (0x0002d22b) loc_type_pane_t3

0x0002,

0xf325,	// (0x0003b7a1) loc_type_pane_t_ParamLimits

0xf325,	// (0x0003b7a1) loc_type_pane_t

0x0dc1,	// (0x0002d23d) list_loc_req_pane

0x0dcb,	// (0x0002d247) scroll_pane_cp012

0x8d24,	// (0x000351a0) list_single_loc_request_popup_menu_pane_ParamLimits

0x8d24,	// (0x000351a0) list_single_loc_request_popup_menu_pane

0x0dd4,	// (0x0002d250) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0dd4,	// (0x0002d250) list_single_loc_request_popup_menu_pane_g1

0x0de0,	// (0x0002d25c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0de0,	// (0x0002d25c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0003b7a8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0003b7a8) list_single_loc_request_popup_menu_pane_g

0x0dec,	// (0x0002d268) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0dec,	// (0x0002d268) list_single_loc_request_popup_menu_pane_t1

0x8d36,	// (0x000351b2) bg_popup_window_pane_cp03_ParamLimits

0x8d36,	// (0x000351b2) bg_popup_window_pane_cp03

0x8d44,	// (0x000351c0) heading_loc_req_pane_ParamLimits

0x8d44,	// (0x000351c0) heading_loc_req_pane

0x8d50,	// (0x000351cc) popup_dyc_status_message_window_g1_ParamLimits

0x8d50,	// (0x000351cc) popup_dyc_status_message_window_g1

0x8d5c,	// (0x000351d8) popup_dyc_status_message_window_t1_ParamLimits

0x8d5c,	// (0x000351d8) popup_dyc_status_message_window_t1

0x8d6e,	// (0x000351ea) popup_dyc_status_message_window_t2_ParamLimits

0x8d6e,	// (0x000351ea) popup_dyc_status_message_window_t2

0x8d80,	// (0x000351fc) popup_dyc_status_message_window_t3_ParamLimits

0x8d80,	// (0x000351fc) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0003b7ad) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0003b7ad) popup_dyc_status_message_window_t

0xe86a,	// (0x0003ace6) bg_heading_pane_cp01

0x0e0e,	// (0x0002d28a) heading_loc_req_pane_g1

0x0e16,	// (0x0002d292) heading_loc_req_pane_g2

0x0e1e,	// (0x0002d29a) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0003b7b4) heading_loc_req_pane_g

0x0e26,	// (0x0002d2a2) heading_loc_req_pane_t1

0x0ecd,	// (0x0002d349) bg_popup_sub_pane_cp01_ParamLimits

0x0ecd,	// (0x0002d349) bg_popup_sub_pane_cp01

0x0edb,	// (0x0002d357) popup_cale_events_window_g1_ParamLimits

0x0edb,	// (0x0002d357) popup_cale_events_window_g1

0x0efb,	// (0x0002d377) popup_cale_events_window_g2_ParamLimits

0x0efb,	// (0x0002d377) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0003b7e8) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0003b7e8) popup_cale_events_window_g

0x0f1b,	// (0x0002d397) popup_cale_events_window_t1_ParamLimits

0x0f1b,	// (0x0002d397) popup_cale_events_window_t1

0x0f2d,	// (0x0002d3a9) popup_cale_events_window_t2_ParamLimits

0x0f2d,	// (0x0002d3a9) popup_cale_events_window_t2

0x0f6b,	// (0x0002d3e7) popup_cale_events_window_t3_ParamLimits

0x0f6b,	// (0x0002d3e7) popup_cale_events_window_t3

0x0fa5,	// (0x0002d421) popup_cale_events_window_t4_ParamLimits

0x0fa5,	// (0x0002d421) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0003b7ed) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0003b7ed) popup_cale_events_window_t

0x8dac,	// (0x00035228) call_type_pane

0x1454,	// (0x0002d8d0) popup_call_status_window_g1

0x8db8,	// (0x00035234) popup_call_status_window_g2

0x8dc4,	// (0x00035240) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0003b7f6) popup_call_status_window_g

0x0fdb,	// (0x0002d457) call_type_pane_g1

0x0fe4,	// (0x0002d460) call_type_pane_g2

0x0001,

0xf381,	// (0x0003b7fd) call_type_pane_g

0xe86a,	// (0x0003ace6) bg_popup_sub_pane_cp02

0x0fed,	// (0x0002d469) listscroll_popup_wml_pane

0x0ff5,	// (0x0002d471) list_wml_pane

0x0fff,	// (0x0002d47b) scroll_pane_cp013

0x8dd0,	// (0x0003524c) list_single_graphic_popup_wml_pane_ParamLimits

0x8dd0,	// (0x0003524c) list_single_graphic_popup_wml_pane

0xebe9,	// (0x0003b065) list_single_graphic_popup_wml_pane_g1

0x1008,	// (0x0002d484) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0003b802) list_single_graphic_popup_wml_pane_g

0x1010,	// (0x0002d48c) list_single_graphic_popup_wml_pane_t1

0x101e,	// (0x0002d49a) aid_call_pane

0xeabd,	// (0x0003af39) popup_clock_analogue_window_g1

0xeabd,	// (0x0003af39) popup_clock_analogue_window_g2

0x8de4,	// (0x00035260) popup_clock_analogue_window_g3

0x8de4,	// (0x00035260) popup_clock_analogue_window_g4

0xebe9,	// (0x0003b065) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0003b807) popup_clock_analogue_window_g

0x8dec,	// (0x00035268) popup_clock_analogue_window_t1

0x8dfa,	// (0x00035276) clock_digital_number_pane_ParamLimits

0x8dfa,	// (0x00035276) clock_digital_number_pane

0x8e06,	// (0x00035282) clock_digital_number_pane_cp02_ParamLimits

0x8e06,	// (0x00035282) clock_digital_number_pane_cp02

0x8e12,	// (0x0003528e) clock_digital_number_pane_cp03_ParamLimits

0x8e12,	// (0x0003528e) clock_digital_number_pane_cp03

0x8e1e,	// (0x0003529a) clock_digital_number_pane_cp04_ParamLimits

0x8e1e,	// (0x0003529a) clock_digital_number_pane_cp04

0x8e2a,	// (0x000352a6) clock_digital_separator_pane_ParamLimits

0x8e2a,	// (0x000352a6) clock_digital_separator_pane

0x8e36,	// (0x000352b2) popup_clock_digital_window_t1

0xebe9,	// (0x0003b065) clock_digital_number_pane_g1

0xebe9,	// (0x0003b065) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0003b775) clock_digital_number_pane_g

0xebe9,	// (0x0003b065) clock_digital_separator_pane_g1

0xebe9,	// (0x0003b065) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0003b775) clock_digital_separator_pane_g

0xe86a,	// (0x0003ace6) bg_popup_window_pane_cp04

0x109d,	// (0x0002d519) heading_pane_cp03

0x10a5,	// (0x0002d521) listscroll_popup_gms_pane

0x10ad,	// (0x0002d529) grid_large_graphic_popup_pane

0x10b7,	// (0x0002d533) listscroll_popup_gms_pane_g1

0x10bf,	// (0x0002d53b) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0003b812) listscroll_popup_gms_pane_g

0xef00,	// (0x0003b37c) scroll_pane_cp014

0x8e53,	// (0x000352cf) cell_large_graphic_popup_pane_ParamLimits

0x8e53,	// (0x000352cf) cell_large_graphic_popup_pane

0x8e6a,	// (0x000352e6) cell_large_graphic_popup_pane_g1_ParamLimits

0x8e6a,	// (0x000352e6) cell_large_graphic_popup_pane_g1

0x10c7,	// (0x0002d543) cell_large_graphic_popup_pane_g2_ParamLimits

0x10c7,	// (0x0002d543) cell_large_graphic_popup_pane_g2

0x10d3,	// (0x0002d54f) cell_large_graphic_popup_pane_g3_ParamLimits

0x10d3,	// (0x0002d54f) cell_large_graphic_popup_pane_g3

0x10e0,	// (0x0002d55c) cell_large_graphic_popup_pane_g4_ParamLimits

0x10e0,	// (0x0002d55c) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0003b817) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0003b817) cell_large_graphic_popup_pane_g

0x10f0,	// (0x0002d56c) grid_highlight_pane_cp010

0xebe9,	// (0x0003b065) bg_popup_call_pane_g1

0x10fa,	// (0x0002d576) list_single_graphic_popup_conf_pane_ParamLimits

0x10fa,	// (0x0002d576) list_single_graphic_popup_conf_pane

0x110d,	// (0x0002d589) list_highlight_pane_cp01

0x1116,	// (0x0002d592) list_single_graphic_popup_conf_pane_g1

0x111e,	// (0x0002d59a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0003b820) list_single_graphic_popup_conf_pane_g

0x1126,	// (0x0002d5a2) list_single_graphic_popup_conf_pane_t1

0x1134,	// (0x0002d5b0) linegrid_cams_pane_g1

0x8e76,	// (0x000352f2) linegrid_cams_pane_g2

0xeca2,	// (0x0003b11e) linegrid_cams_pane_g3

0x113d,	// (0x0002d5b9) linegrid_cams_pane_g4

0x8e7f,	// (0x000352fb) linegrid_cams_pane_g5

0x8e88,	// (0x00035304) linegrid_cams_pane_g6

0xed37,	// (0x0003b1b3) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0003b825) linegrid_cams_pane_g

0x1146,	// (0x0002d5c2) popup_clock_analogue_window

0x1146,	// (0x0002d5c2) popup_clock_digital_window

0xe86a,	// (0x0003ace6) popup_phob_thumbnail_window

0xebe9,	// (0x0003b065) call_video_uplink_pane_g1

0x114f,	// (0x0002d5cb) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0003b834) call_video_uplink_pane_g

0xed04,	// (0x0003b180) video_uplink_pane

0x1157,	// (0x0002d5d3) mce_image_pane_g1

0x8e91,	// (0x0003530d) mce_image_pane_g2

0x8e99,	// (0x00035315) mce_image_pane_g3

0x8ea1,	// (0x0003531d) mce_image_pane_g4

0x8ea9,	// (0x00035325) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0003b839) mce_image_pane_g

0x1161,	// (0x0002d5dd) control_top_pane_stacon_cp01_ParamLimits

0x1161,	// (0x0002d5dd) control_top_pane_stacon_cp01

0x1171,	// (0x0002d5ed) uni_indicator_pane_stacon_cp01_ParamLimits

0x1171,	// (0x0002d5ed) uni_indicator_pane_stacon_cp01

0x1182,	// (0x0002d5fe) bg_popup_sub_pane_cp03

0x118c,	// (0x0002d608) chi_dic_find_pane

0x8eb1,	// (0x0003532d) listscroll_chi_dic_pane

0x1194,	// (0x0002d610) main_pane_chidic_g1

0x119c,	// (0x0002d618) chi_dic_find_pane_t1

0x11aa,	// (0x0002d626) find_chidic_pane

0x11b3,	// (0x0002d62f) chi_dic_list_pane_ParamLimits

0x11b3,	// (0x0002d62f) chi_dic_list_pane

0x11c4,	// (0x0002d640) scroll_pane_cp020

0x11cc,	// (0x0002d648) find_chidic_pane_t1

0xe86a,	// (0x0003ace6) input_focus_pane_cp06

0x8ec3,	// (0x0003533f) list_chi_dic_pane_ParamLimits

0x8ec3,	// (0x0003533f) list_chi_dic_pane

0x8ed6,	// (0x00035352) list_chi_dic_pane_t1_ParamLimits

0x8ed6,	// (0x00035352) list_chi_dic_pane_t1

0xe86a,	// (0x0003ace6) list_highlight_pane_cp020

0x11db,	// (0x0002d657) bg_cale_heading_pane_g1

0x8ee9,	// (0x00035365) bg_cale_heading_pane_g2

0x8ef1,	// (0x0003536d) bg_cale_heading_pane_g3

0x8ef9,	// (0x00035375) bg_cale_heading_pane_g4

0x8f01,	// (0x0003537d) bg_cale_heading_pane_g5

0x8f09,	// (0x00035385) bg_cale_heading_pane_g6

0x8f11,	// (0x0003538d) bg_cale_heading_pane_g7

0x8f19,	// (0x00035395) bg_cale_heading_pane_g8

0x8f21,	// (0x0003539d) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0003b844) bg_cale_heading_pane_g

0x11db,	// (0x0002d657) bg_cale_side_pane_g1

0x8f29,	// (0x000353a5) bg_cale_side_pane_g2

0x8f31,	// (0x000353ad) bg_cale_side_pane_g3

0x8f39,	// (0x000353b5) bg_cale_side_pane_g4

0x8f41,	// (0x000353bd) bg_cale_side_pane_g5

0x8f49,	// (0x000353c5) bg_cale_side_pane_g6

0x8f51,	// (0x000353cd) bg_cale_side_pane_g7

0x8f59,	// (0x000353d5) bg_cale_side_pane_g8

0x8f61,	// (0x000353dd) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0003b857) bg_cale_side_pane_g

0x8f69,	// (0x000353e5) popup_call_status_window_ParamLimits

0x8f69,	// (0x000353e5) popup_call_status_window

0x11e3,	// (0x0002d65f) stacon_top_pane

0x11eb,	// (0x0002d667) status_pane_ParamLimits

0x11eb,	// (0x0002d667) status_pane

0x1205,	// (0x0002d681) status_small_pane

0x120d,	// (0x0002d689) control_pane

0xe86a,	// (0x0003ace6) stacon_bottom_pane

0x1215,	// (0x0002d691) list_single_mce_smart_pane_t1_ParamLimits

0x1215,	// (0x0002d691) list_single_mce_smart_pane_t1

0x1228,	// (0x0002d6a4) list_single_mce_smart_pane_t2_ParamLimits

0x1228,	// (0x0002d6a4) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0003b86a) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0003b86a) list_single_mce_smart_pane_t

0x8f78,	// (0x000353f4) compass_pane

0x8f81,	// (0x000353fd) main_location2_pane_t1

0x8f97,	// (0x00035413) main_location2_pane_t2

0x8fad,	// (0x00035429) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0003b86f) main_location2_pane_t

0x1250,	// (0x0002d6cc) compass_pane_g1_ParamLimits

0x1250,	// (0x0002d6cc) compass_pane_g1

0x8ff5,	// (0x00035471) compass_pane_t1

0x9004,	// (0x00035480) compass_pane_t2

0x0005,

0xf3fc,	// (0x0003b878) compass_pane_t

0x904b,	// (0x000354c7) text_secondary_cp61

0x127d,	// (0x0002d6f9) navi_pane_cams_g5

0x12be,	// (0x0002d73a) navi_pane_im_t1

0x12cc,	// (0x0002d748) navi_pane_mp_g1_ParamLimits

0x12cc,	// (0x0002d748) navi_pane_mp_g1

0x12e0,	// (0x0002d75c) navi_pane_mp_g2_ParamLimits

0x12e0,	// (0x0002d75c) navi_pane_mp_g2

0x12ec,	// (0x0002d768) navi_pane_mp_g3_ParamLimits

0x12ec,	// (0x0002d768) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0003b88c) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0003b88c) navi_pane_mp_g

0x12f8,	// (0x0002d774) navi_pane_mp_t1

0x1306,	// (0x0002d782) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0003b893) navi_pane_mp_t

0x1373,	// (0x0002d7ef) navi_pane_vt_g1

0x12f8,	// (0x0002d774) navi_pane_vt_t1

0x137b,	// (0x0002d7f7) navi_slider_pane

0x1383,	// (0x0002d7ff) zooming_pane

0x138b,	// (0x0002d807) navi_slider_pane_g1

0x90c2,	// (0x0003553e) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0003b89a) navi_slider_pane_g

0x13c1,	// (0x0002d83d) aid_levels_zoom

0x13c9,	// (0x0002d845) zooming_pane_g1

0x13d1,	// (0x0002d84d) zooming_pane_g2

0x13d1,	// (0x0002d84d) zooming_pane_g3

0x0002,

0xf42d,	// (0x0003b8a9) zooming_pane_g

0x13d9,	// (0x0002d855) level_10_zoom

0x13e2,	// (0x0002d85e) level_11_zoom

0x13eb,	// (0x0002d867) level_1_zoom

0x13f4,	// (0x0002d870) level_2_zoom

0x13fd,	// (0x0002d879) level_3_zoom

0x1406,	// (0x0002d882) level_4_zoom

0x140f,	// (0x0002d88b) level_5_zoom

0x1418,	// (0x0002d894) level_6_zoom

0x1421,	// (0x0002d89d) level_7_zoom

0x142a,	// (0x0002d8a6) level_8_zoom

0x1433,	// (0x0002d8af) level_9_zoom

0x1444,	// (0x0002d8c0) popup_phob_thumbnail_window_g1

0x144c,	// (0x0002d8c8) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0003b8b0) popup_phob_thumbnail_window_g

0x2820,	// (0x0002ec9c) level_1_location

0x2828,	// (0x0002eca4) level_2_location

0x2830,	// (0x0002ecac) level_3_location

0x2838,	// (0x0002ecb4) level_4_location

0x1383,	// (0x0002d7ff) level_5_location

0x90d4,	// (0x00035550) mce_icon_pane_g1

0x90dc,	// (0x00035558) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0003b8b5) mce_icon_pane_g

0x90e4,	// (0x00035560) main_mup_pane_g1_ParamLimits

0x90e4,	// (0x00035560) main_mup_pane_g1

0x90fc,	// (0x00035578) main_mup_pane_g2_ParamLimits

0x90fc,	// (0x00035578) main_mup_pane_g2

0x9118,	// (0x00035594) main_mup_pane_g3_ParamLimits

0x9118,	// (0x00035594) main_mup_pane_g3

0x9134,	// (0x000355b0) main_mup_pane_g4_ParamLimits

0x9134,	// (0x000355b0) main_mup_pane_g4

0x9150,	// (0x000355cc) main_mup_pane_g5_ParamLimits

0x9150,	// (0x000355cc) main_mup_pane_g5

0x916d,	// (0x000355e9) main_mup_pane_g6_ParamLimits

0x916d,	// (0x000355e9) main_mup_pane_g6

0x9189,	// (0x00035605) main_mup_pane_g7_ParamLimits

0x9189,	// (0x00035605) main_mup_pane_g7

0x91a5,	// (0x00035621) main_mup_pane_g8_ParamLimits

0x91a5,	// (0x00035621) main_mup_pane_g8

0x91c1,	// (0x0003563d) main_mup_pane_g9_ParamLimits

0x91c1,	// (0x0003563d) main_mup_pane_g9

0x91d8,	// (0x00035654) main_mup_pane_g10_ParamLimits

0x91d8,	// (0x00035654) main_mup_pane_g10

0x91ef,	// (0x0003566b) main_mup_pane_g11_ParamLimits

0x91ef,	// (0x0003566b) main_mup_pane_g11

0x9203,	// (0x0003567f) main_mup_pane_g12_ParamLimits

0x9203,	// (0x0003567f) main_mup_pane_g12

0x920f,	// (0x0003568b) main_mup_pane_g13_ParamLimits

0x920f,	// (0x0003568b) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0003b8ba) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0003b8ba) main_mup_pane_g

0x9223,	// (0x0003569f) main_mup_pane_t1_ParamLimits

0x9223,	// (0x0003569f) main_mup_pane_t1

0x9240,	// (0x000356bc) main_mup_pane_t2_ParamLimits

0x9240,	// (0x000356bc) main_mup_pane_t2

0x925a,	// (0x000356d6) main_mup_pane_t3_ParamLimits

0x925a,	// (0x000356d6) main_mup_pane_t3

0x9274,	// (0x000356f0) main_mup_pane_t4_ParamLimits

0x9274,	// (0x000356f0) main_mup_pane_t4

0x9286,	// (0x00035702) main_mup_pane_t5_ParamLimits

0x9286,	// (0x00035702) main_mup_pane_t5

0x9298,	// (0x00035714) main_mup_pane_t6_ParamLimits

0x9298,	// (0x00035714) main_mup_pane_t6

0x0005,

0xf459,	// (0x0003b8d5) main_mup_pane_t_ParamLimits

0xf459,	// (0x0003b8d5) main_mup_pane_t

0x92ae,	// (0x0003572a) mup_progress_pane_ParamLimits

0x92ae,	// (0x0003572a) mup_progress_pane

0x92ba,	// (0x00035736) mup_visualizer_pane_ParamLimits

0x92ba,	// (0x00035736) mup_visualizer_pane

0x92e8,	// (0x00035764) mup_volume_pane_ParamLimits

0x92e8,	// (0x00035764) mup_volume_pane

0x1454,	// (0x0002d8d0) mup_visualizer_pane_g1_ParamLimits

0x1454,	// (0x0002d8d0) mup_visualizer_pane_g1

0x1454,	// (0x0002d8d0) mup_visualizer_pane_g2_ParamLimits

0x1454,	// (0x0002d8d0) mup_visualizer_pane_g2

0x1250,	// (0x0002d6cc) mup_visualizer_pane_g3_ParamLimits

0x1250,	// (0x0002d6cc) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0003b8e2) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0003b8e2) mup_visualizer_pane_g

0xebe9,	// (0x0003b065) mup_volume_pane_g1

0x146a,	// (0x0002d8e6) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0003b8e9) mup_volume_pane_g

0xebe9,	// (0x0003b065) mup_progress_pane_g1

0x1473,	// (0x0002d8ef) mup_progress_pane_g2

0x147c,	// (0x0002d8f8) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0003b8ee) mup_progress_pane_g

0xe86a,	// (0x0003ace6) bg_popup_window_pane_cp05

0x1485,	// (0x0002d901) heading_pane_cp02_ParamLimits

0x1485,	// (0x0002d901) heading_pane_cp02

0x149f,	// (0x0002d91b) list_popup_blid_pane

0x14a7,	// (0x0002d923) list_blid_sat_info_pane_ParamLimits

0x14a7,	// (0x0002d923) list_blid_sat_info_pane

0x14ba,	// (0x0002d936) list_blid_sat_info_pane_g1

0x14c2,	// (0x0002d93e) list_blid_sat_info_pane_t1

0x93db,	// (0x00035857) mup_equalizer_pane_ParamLimits

0x93db,	// (0x00035857) mup_equalizer_pane

0x93f4,	// (0x00035870) mup_equalizer_pane_cp1_ParamLimits

0x93f4,	// (0x00035870) mup_equalizer_pane_cp1

0x940d,	// (0x00035889) mup_equalizer_pane_cp2_ParamLimits

0x940d,	// (0x00035889) mup_equalizer_pane_cp2

0x9426,	// (0x000358a2) mup_equalizer_pane_cp3_ParamLimits

0x9426,	// (0x000358a2) mup_equalizer_pane_cp3

0x943f,	// (0x000358bb) mup_equalizer_pane_cp4_ParamLimits

0x943f,	// (0x000358bb) mup_equalizer_pane_cp4

0x9458,	// (0x000358d4) mup_equalizer_pane_cp5

0x946a,	// (0x000358e6) mup_equalizer_pane_cp6

0x947c,	// (0x000358f8) mup_equalizer_pane_cp7

0x26fe,	// (0x0002eb7a) bg_popup_call_poc_act_pane_g9

0x2706,	// (0x0002eb82) bg_popup_call_poc_act_pane_g10

0x270e,	// (0x0002eb8a) bg_popup_call_poc_act_pane_g11

0x000a,

0xeac5,	// (0x0003af41) mup_scale_pane

0xebe9,	// (0x0003b065) mup_scale_pane_g1

0x14d0,	// (0x0002d94c) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0003b90a) mup_scale_pane_g

0x14f4,	// (0x0002d970) msg_data_pane

0x14fc,	// (0x0002d978) scroll_pane_cp017

0x63c8,	// (0x00032844) bg_list_pane_cp04_ParamLimits

0x63c8,	// (0x00032844) bg_list_pane_cp04

0x150c,	// (0x0002d988) msg_data_pane_g1

0x8e91,	// (0x0003530d) msg_data_pane_g2

0x8e99,	// (0x00035315) msg_data_pane_g3

0x94a0,	// (0x0003591c) msg_data_pane_g4

0x8ea9,	// (0x00035325) msg_data_pane_g5

0x90d4,	// (0x00035550) msg_data_pane_g6

0x94a8,	// (0x00035924) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0003b919) msg_data_pane_g

0x63e8,	// (0x00032864) msg_text_pane_ParamLimits

0x63e8,	// (0x00032864) msg_text_pane

0x94b0,	// (0x0003592c) qrid_highlight_pane_cp011_ParamLimits

0x94b0,	// (0x0003592c) qrid_highlight_pane_cp011

0xe86a,	// (0x0003ace6) msg_body_pane

0xe86a,	// (0x0003ace6) msg_header_pane

0x151d,	// (0x0002d999) input_focus_pane_cp07

0x641d,	// (0x00032899) msg_header_pane_t1_ParamLimits

0x641d,	// (0x00032899) msg_header_pane_t1

0x642f,	// (0x000328ab) msg_header_pane_t2_ParamLimits

0x642f,	// (0x000328ab) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0003b92d) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0003b92d) msg_header_pane_t

0x1544,	// (0x0002d9c0) msg_body_pane_g1

0x6441,	// (0x000328bd) msg_body_pane_t1_ParamLimits

0x6441,	// (0x000328bd) msg_body_pane_t1

0x646c,	// (0x000328e8) msg_body_pane_t2_ParamLimits

0x646c,	// (0x000328e8) msg_body_pane_t2

0x647e,	// (0x000328fa) msg_body_pane_t3_ParamLimits

0x647e,	// (0x000328fa) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0003b932) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0003b932) msg_body_pane_t

0x9514,	// (0x00035990) main_viewer_pane_g1_ParamLimits

0x9514,	// (0x00035990) main_viewer_pane_g1

0x9520,	// (0x0003599c) main_viewer_pane_g2_ParamLimits

0x9520,	// (0x0003599c) main_viewer_pane_g2

0x952c,	// (0x000359a8) main_viewer_pane_g3_ParamLimits

0x952c,	// (0x000359a8) main_viewer_pane_g3

0x953b,	// (0x000359b7) main_viewer_pane_g4_ParamLimits

0x953b,	// (0x000359b7) main_viewer_pane_g4

0x954a,	// (0x000359c6) main_viewer_pane_g5_ParamLimits

0x954a,	// (0x000359c6) main_viewer_pane_g5

0x954a,	// (0x000359c6) main_viewer_pane_g7_ParamLimits

0x954a,	// (0x000359c6) main_viewer_pane_g7

0x955c,	// (0x000359d8) main_viewer_pane_g8_ParamLimits

0x955c,	// (0x000359d8) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0003b942) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0003b942) main_viewer_pane_g

0x15dd,	// (0x0002da59) viewer_content_pane_ParamLimits

0x15dd,	// (0x0002da59) viewer_content_pane

0x958c,	// (0x00035a08) main_postcard_pane_g1_ParamLimits

0x958c,	// (0x00035a08) main_postcard_pane_g1

0x9598,	// (0x00035a14) main_postcard_pane_g2_ParamLimits

0x9598,	// (0x00035a14) main_postcard_pane_g2

0x95a4,	// (0x00035a20) main_postcard_pane_g3_ParamLimits

0x95a4,	// (0x00035a20) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0003b953) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0003b953) main_postcard_pane_g

0x95b0,	// (0x00035a2c) main_postcard_pane_g4

0x293c,	// (0x0002edb8) smil_status_volume_pane_g2

0x95d4,	// (0x00035a50) postcard_pane_ParamLimits

0x95d4,	// (0x00035a50) postcard_pane

0x1454,	// (0x0002d8d0) postcard_pane_g1_ParamLimits

0x1454,	// (0x0002d8d0) postcard_pane_g1

0x9604,	// (0x00035a80) postcard_pane_g2_ParamLimits

0x9604,	// (0x00035a80) postcard_pane_g2

0x9610,	// (0x00035a8c) postcard_pane_g3_ParamLimits

0x9610,	// (0x00035a8c) postcard_pane_g3

0x15f9,	// (0x0002da75) postcard_pane_g4_ParamLimits

0x15f9,	// (0x0002da75) postcard_pane_g4

0x961c,	// (0x00035a98) postcard_pane_g5_ParamLimits

0x961c,	// (0x00035a98) postcard_pane_g5

0x9628,	// (0x00035aa4) postcard_pane_g6_ParamLimits

0x9628,	// (0x00035aa4) postcard_pane_g6

0x15eb,	// (0x0002da67) postcard_pane_g7_ParamLimits

0x15eb,	// (0x0002da67) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0003b960) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0003b960) postcard_pane_g

0x9634,	// (0x00035ab0) main_mp2_pane_g1_ParamLimits

0x9634,	// (0x00035ab0) main_mp2_pane_g1

0x9640,	// (0x00035abc) main_mp2_pane_g2_ParamLimits

0x9640,	// (0x00035abc) main_mp2_pane_g2

0x964c,	// (0x00035ac8) main_mp2_pane_g3_ParamLimits

0x964c,	// (0x00035ac8) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0003b96f) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0003b96f) main_mp2_pane_g

0x9658,	// (0x00035ad4) main_mp2_pane_t1_ParamLimits

0x9658,	// (0x00035ad4) main_mp2_pane_t1

0x966d,	// (0x00035ae9) main_mp2_pane_t2_ParamLimits

0x966d,	// (0x00035ae9) main_mp2_pane_t2

0x967f,	// (0x00035afb) main_mp2_pane_t3_ParamLimits

0x967f,	// (0x00035afb) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0003b976) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0003b976) main_mp2_pane_t

0x1607,	// (0x0002da83) pec_content_pane_ParamLimits

0x1607,	// (0x0002da83) pec_content_pane

0xef00,	// (0x0003b37c) scroll_pane_cp015

0x1619,	// (0x0002da95) pec_attribute_pane_ParamLimits

0x1619,	// (0x0002da95) pec_attribute_pane

0x9691,	// (0x00035b0d) pec_content_pane_g1_ParamLimits

0x9691,	// (0x00035b0d) pec_content_pane_g1

0x1629,	// (0x0002daa5) pec_content_pane_t1_ParamLimits

0x1629,	// (0x0002daa5) pec_content_pane_t1

0x163b,	// (0x0002dab7) pec_content_pane_t2_ParamLimits

0x163b,	// (0x0002dab7) pec_content_pane_t2

0x0001,

0xf501,	// (0x0003b97d) pec_content_pane_t_ParamLimits

0xf501,	// (0x0003b97d) pec_content_pane_t

0x969d,	// (0x00035b19) list_single_graphic_pane_cp01_ParamLimits

0x969d,	// (0x00035b19) list_single_graphic_pane_cp01

0xeac5,	// (0x0003af41) bg_popup_sub_pane_cp04

0x164d,	// (0x0002dac9) popup_mup_playback_window_g1

0x1659,	// (0x0002dad5) popup_mup_playback_window_t1

0x166e,	// (0x0002daea) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0003b982) popup_mup_playback_window_t

0x16a5,	// (0x0002db21) main_image_pane_g1_ParamLimits

0x16a5,	// (0x0002db21) main_image_pane_g1

0x16e8,	// (0x0002db64) scroll_pane_cp018_ParamLimits

0x16e8,	// (0x0002db64) scroll_pane_cp018

0x1700,	// (0x0002db7c) scroll_pane_cp016_ParamLimits

0x1700,	// (0x0002db7c) scroll_pane_cp016

0x9722,	// (0x00035b9e) smil2_image_pane_ParamLimits

0x9722,	// (0x00035b9e) smil2_image_pane

0x974a,	// (0x00035bc6) smil2_root_pane_ParamLimits

0x974a,	// (0x00035bc6) smil2_root_pane

0x9776,	// (0x00035bf2) smil2_text_pane_ParamLimits

0x9776,	// (0x00035bf2) smil2_text_pane

0xe86a,	// (0x0003ace6) bg_list_pane_cp06

0x173c,	// (0x0002dbb8) grid_radio_pane

0xe86a,	// (0x0003ace6) bg_popup_window_pane_cp06

0x1744,	// (0x0002dbc0) main_fmradio_pane_t1

0x109d,	// (0x0002d519) heading_pane_cp04

0x1752,	// (0x0002dbce) main_fmradio_pane_t2

0x2756,	// (0x0002ebd2) popup_cale_lunar_info_window_g1

0x1760,	// (0x0002dbdc) main_fmradio_pane_t3

0x275e,	// (0x0002ebda) popup_cale_lunar_info_window_g2

0x176e,	// (0x0002dbea) main_fmradio_pane_t4

0x0001,

0x177c,	// (0x0002dbf8) main_fmradio_pane_t5

0x0004,

0xf5f4,	// (0x0003ba70) popup_cale_lunar_info_window_g

0xf51b,	// (0x0003b997) main_fmradio_pane_t

0x178a,	// (0x0002dc06) wait_bar_pane_cp03

0x1792,	// (0x0002dc0e) cell_fmradio_pane_ParamLimits

0x1792,	// (0x0002dc0e) cell_fmradio_pane

0x15eb,	// (0x0002da67) cell_fmradio_pane_g1_ParamLimits

0x15eb,	// (0x0002da67) cell_fmradio_pane_g1

0xe86a,	// (0x0003ace6) grid_highlight_pane_cp011

0x17a5,	// (0x0002dc21) poc_content_pane_ParamLimits

0x17a5,	// (0x0002dc21) poc_content_pane

0x17b8,	// (0x0002dc34) scroll_pane_cp019

0x97aa,	// (0x00035c26) popup_call_poc_act_window_ParamLimits

0x97aa,	// (0x00035c26) popup_call_poc_act_window

0x97b7,	// (0x00035c33) popup_call_poc_inact_window_ParamLimits

0x97b7,	// (0x00035c33) popup_call_poc_inact_window

0xf5b8,	// (0x0003ba34) bg_popup_call_poc_act_pane_g

0x2716,	// (0x0002eb92) bg_popup_call_poc_inact_pane_g1

0x271e,	// (0x0002eb9a) bg_popup_call_poc_inact_pane_g2

0x17c0,	// (0x0002dc3c) popup_call_poc_act_window_g2

0x2726,	// (0x0002eba2) bg_popup_call_poc_inact_pane_g3

0x26a6,	// (0x0002eb22) bg_popup_call_poc_inact_pane_g4

0x272e,	// (0x0002ebaa) bg_popup_call_poc_inact_pane_g5

0x17c8,	// (0x0002dc44) popup_call_poc_act_window_t1_ParamLimits

0x17c8,	// (0x0002dc44) popup_call_poc_act_window_t1

0x17f0,	// (0x0002dc6c) popup_call_poc_act_window_t2_ParamLimits

0x17f0,	// (0x0002dc6c) popup_call_poc_act_window_t2

0x1818,	// (0x0002dc94) popup_call_poc_act_window_t3_ParamLimits

0x1818,	// (0x0002dc94) popup_call_poc_act_window_t3

0x1840,	// (0x0002dcbc) popup_call_poc_act_window_t4_ParamLimits

0x1840,	// (0x0002dcbc) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0003b9a2) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0003b9a2) popup_call_poc_act_window_t

0x2736,	// (0x0002ebb2) bg_popup_call_poc_inact_pane_g6

0x273e,	// (0x0002ebba) bg_popup_call_poc_inact_pane_g7

0x2746,	// (0x0002ebc2) bg_popup_call_poc_inact_pane_g8

0x1852,	// (0x0002dcce) popup_call_poc_inact_window_g2

0x274e,	// (0x0002ebca) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5cf,	// (0x0003ba4b) bg_popup_call_poc_inact_pane_g

0x185a,	// (0x0002dcd6) popup_call_poc_inact_window_t1_ParamLimits

0x185a,	// (0x0002dcd6) popup_call_poc_inact_window_t1

0x186f,	// (0x0002dceb) popup_call_poc_inact_window_t2_ParamLimits

0x186f,	// (0x0002dceb) popup_call_poc_inact_window_t2

0x1884,	// (0x0002dd00) popup_call_poc_inact_window_t3_ParamLimits

0x1884,	// (0x0002dd00) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0003b9ab) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0003b9ab) popup_call_poc_inact_window_t

0x28c2,	// (0x0002ed3e) context_pane_ParamLimits

0x9cb2,	// (0x0003612e) signal_pane_ParamLimits

0x1383,	// (0x0002d7ff) main_call2_pane

0x28b0,	// (0x0002ed2c) popup_phob_thumbnail2_window_ParamLimits

0x28b0,	// (0x0002ed2c) popup_phob_thumbnail2_window

0x94c6,	// (0x00035942) aid_hotspot_pointer_arrow_pane

0x94ce,	// (0x0003594a) aid_hotspot_pointer_hand_pane

0x9a66,	// (0x00035ee2) phob_pre_status_pane_g5

0x7edd,	// (0x00034359) cams_zoom_pane_ParamLimits

0x7ee9,	// (0x00034365) image_vga_pane_ParamLimits

0x7ef6,	// (0x00034372) main_camera_pane_g1_ParamLimits

0x7f02,	// (0x0003437e) main_camera_pane_g2_ParamLimits

0x7f0e,	// (0x0003438a) main_camera_pane_g3_ParamLimits

0x7f1a,	// (0x00034396) main_camera_pane_g4_ParamLimits

0x7f26,	// (0x000343a2) main_camera_pane_g5_ParamLimits

0x7f32,	// (0x000343ae) main_camera_pane_g6_ParamLimits

0x7f3e,	// (0x000343ba) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0003b6aa) main_camera_pane_g_ParamLimits

0x7f4a,	// (0x000343c6) main_camera_pane_t1_ParamLimits

0x7f5c,	// (0x000343d8) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0003b6bb) main_camera_pane_t_ParamLimits

0xeac5,	// (0x0003af41) bg_popup_preview_window_pane_cp01_ParamLimits

0xeac5,	// (0x0003af41) bg_popup_preview_window_pane_cp01

0x1899,	// (0x0002dd15) popup_phob_thumbnail2_window_g1_ParamLimits

0x1899,	// (0x0002dd15) popup_phob_thumbnail2_window_g1

0xe86a,	// (0x0003ace6) call2_cli_visual_pane

0x97d3,	// (0x00035c4f) popup_call2_audio_conf_window_ParamLimits

0x97d3,	// (0x00035c4f) popup_call2_audio_conf_window

0x97e6,	// (0x00035c62) popup_call2_audio_first_window_ParamLimits

0x97e6,	// (0x00035c62) popup_call2_audio_first_window

0x9862,	// (0x00035cde) popup_call2_audio_in_window_ParamLimits

0x9862,	// (0x00035cde) popup_call2_audio_in_window

0x9892,	// (0x00035d0e) popup_call2_audio_out_window_ParamLimits

0x9892,	// (0x00035d0e) popup_call2_audio_out_window

0x98de,	// (0x00035d5a) popup_call2_audio_second_window_ParamLimits

0x98de,	// (0x00035d5a) popup_call2_audio_second_window

0x992a,	// (0x00035da6) popup_call2_audio_wait_window_ParamLimits

0x992a,	// (0x00035da6) popup_call2_audio_wait_window

0xe86a,	// (0x0003ace6) bg_popup_call2_act_pane_cp03

0xeaa7,	// (0x0003af23) list_conf_pane_cp

0x18a5,	// (0x0002dd21) popup_call2_audio_conf_window_t1

0x10fa,	// (0x0002d576) list_single_graphic_popup_conf2_pane_ParamLimits

0x10fa,	// (0x0002d576) list_single_graphic_popup_conf2_pane

0x110d,	// (0x0002d589) list_highlight_pane_cp04

0x18b3,	// (0x0002dd2f) list_single_graphic_popup_conf2_pane_g1

0x111e,	// (0x0002d59a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0003b9b2) list_single_graphic_popup_conf2_pane_g

0x18bb,	// (0x0002dd37) list_single_graphic_popup_conf2_pane_t1

0x18c9,	// (0x0002dd45) bg_popup_call2_act_pane_cp01_ParamLimits

0x18c9,	// (0x0002dd45) bg_popup_call2_act_pane_cp01

0x1953,	// (0x0002ddcf) call_type_pane_cp05_ParamLimits

0x1953,	// (0x0002ddcf) call_type_pane_cp05

0x19a7,	// (0x0002de23) popup_call2_audio_second_window_g1_ParamLimits

0x19a7,	// (0x0002de23) popup_call2_audio_second_window_g1

0x19fb,	// (0x0002de77) popup_call2_audio_second_window_g2_ParamLimits

0x19fb,	// (0x0002de77) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0003b9b7) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0003b9b7) popup_call2_audio_second_window_g

0x1a60,	// (0x0002dedc) popup_call2_audio_second_window_t1_ParamLimits

0x1a60,	// (0x0002dedc) popup_call2_audio_second_window_t1

0x1b1b,	// (0x0002df97) popup_call2_audio_second_window_t2_ParamLimits

0x1b1b,	// (0x0002df97) popup_call2_audio_second_window_t2

0x1b6e,	// (0x0002dfea) popup_call2_audio_second_window_t3_ParamLimits

0x1b6e,	// (0x0002dfea) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0003b9be) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0003b9be) popup_call2_audio_second_window_t

0xe86a,	// (0x0003ace6) bg_popup_call2_in_pane_cp02

0xe874,	// (0x0003acf0) call_type_pane_cp04

0xe87c,	// (0x0003acf8) popup_call2_audio_wait_window_g1

0xe884,	// (0x0003ad00) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0003b597) popup_call2_audio_wait_window_g

0xe88c,	// (0x0003ad08) popup_call2_audio_wait_window_t3

0x1c61,	// (0x0002e0dd) bg_popup_call2_act_pane_ParamLimits

0x1c61,	// (0x0002e0dd) bg_popup_call2_act_pane

0x1d21,	// (0x0002e19d) call_type_pane_cp03_ParamLimits

0x1d21,	// (0x0002e19d) call_type_pane_cp03

0x1d85,	// (0x0002e201) popup_call2_audio_first_window_g1_ParamLimits

0x1d85,	// (0x0002e201) popup_call2_audio_first_window_g1

0x1df5,	// (0x0002e271) popup_call2_audio_first_window_g2_ParamLimits

0x1df5,	// (0x0002e271) popup_call2_audio_first_window_g2

0x1454,	// (0x0002d8d0) popup_call2_audio_first_window_g3_ParamLimits

0x1454,	// (0x0002d8d0) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0003b9c7) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0003b9c7) popup_call2_audio_first_window_g

0x1ed3,	// (0x0002e34f) popup_call2_audio_first_window_t1_ParamLimits

0x1ed3,	// (0x0002e34f) popup_call2_audio_first_window_t1

0x1fd6,	// (0x0002e452) popup_call2_audio_first_window_t4_ParamLimits

0x1fd6,	// (0x0002e452) popup_call2_audio_first_window_t4

0x20b9,	// (0x0002e535) popup_call2_audio_first_window_t5_ParamLimits

0x20b9,	// (0x0002e535) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0003b9d2) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0003b9d2) popup_call2_audio_first_window_t

0xeabd,	// (0x0003af39) bg_popup_call2_act_pane_g1

0x2766,	// (0x0002ebe2) popup_cale_lunar_info_window_t1

0x2774,	// (0x0002ebf0) popup_cale_lunar_info_window_t2

0x2782,	// (0x0002ebfe) popup_cale_lunar_info_window_t3

0xe86a,	// (0x0003ace6) bg_popup_call2_bubble_pane

0x21ba,	// (0x0002e636) bg_popup_call2_in_pane_cp01_ParamLimits

0x21ba,	// (0x0002e636) bg_popup_call2_in_pane_cp01

0xe546,	// (0x0003a9c2) call_type_pane_cp02

0x2202,	// (0x0002e67e) popup_call2_audio_out_window_g1_ParamLimits

0x2202,	// (0x0002e67e) popup_call2_audio_out_window_g1

0x222e,	// (0x0002e6aa) popup_call2_audio_out_window_g2_ParamLimits

0x222e,	// (0x0002e6aa) popup_call2_audio_out_window_g2

0x2256,	// (0x0002e6d2) popup_call2_audio_out_window_g3_ParamLimits

0x2256,	// (0x0002e6d2) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0003b9db) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0003b9db) popup_call2_audio_out_window_g

0x2291,	// (0x0002e70d) popup_call2_audio_out_window_t1_ParamLimits

0x2291,	// (0x0002e70d) popup_call2_audio_out_window_t1

0x22f0,	// (0x0002e76c) popup_call2_audio_out_window_t2_ParamLimits

0x22f0,	// (0x0002e76c) popup_call2_audio_out_window_t2

0x2344,	// (0x0002e7c0) popup_call2_audio_out_window_t3_ParamLimits

0x2344,	// (0x0002e7c0) popup_call2_audio_out_window_t3

0x235a,	// (0x0002e7d6) popup_call2_audio_out_window_t4_ParamLimits

0x235a,	// (0x0002e7d6) popup_call2_audio_out_window_t4

0x2370,	// (0x0002e7ec) popup_call2_audio_out_window_t5_ParamLimits

0x2370,	// (0x0002e7ec) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0003b9e4) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0003b9e4) popup_call2_audio_out_window_t

0x23d4,	// (0x0002e850) bg_popup_call2_in_pane_ParamLimits

0x23d4,	// (0x0002e850) bg_popup_call2_in_pane

0x2430,	// (0x0002e8ac) popup_call2_audio_in_window_g1_ParamLimits

0x2430,	// (0x0002e8ac) popup_call2_audio_in_window_g1

0x2468,	// (0x0002e8e4) popup_call2_audio_in_window_g2_ParamLimits

0x2468,	// (0x0002e8e4) popup_call2_audio_in_window_g2

0x24a0,	// (0x0002e91c) popup_call2_audio_in_window_g3_ParamLimits

0x24a0,	// (0x0002e91c) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0003b9f1) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0003b9f1) popup_call2_audio_in_window_g

0x24f8,	// (0x0002e974) popup_call2_audio_in_window_t1_ParamLimits

0x24f8,	// (0x0002e974) popup_call2_audio_in_window_t1

0x2578,	// (0x0002e9f4) popup_call2_audio_in_window_t2_ParamLimits

0x2578,	// (0x0002e9f4) popup_call2_audio_in_window_t2

0x25f8,	// (0x0002ea74) popup_call2_audio_in_window_t3_ParamLimits

0x25f8,	// (0x0002ea74) popup_call2_audio_in_window_t3

0x2612,	// (0x0002ea8e) popup_call2_audio_in_window_t4_ParamLimits

0x2612,	// (0x0002ea8e) popup_call2_audio_in_window_t4

0x2624,	// (0x0002eaa0) popup_call2_audio_in_window_t5_ParamLimits

0x2624,	// (0x0002eaa0) popup_call2_audio_in_window_t5

0x2639,	// (0x0002eab5) popup_call2_audio_in_window_t6_ParamLimits

0x2639,	// (0x0002eab5) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0003b9fa) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0003b9fa) popup_call2_audio_in_window_t

0xeabd,	// (0x0003af39) bg_popup_call2_in_pane_g1

0x2790,	// (0x0002ec0c) popup_cale_lunar_info_window_t4

0x0003,

0xf5f9,	// (0x0003ba75) popup_cale_lunar_info_window_t

0xeac5,	// (0x0003af41) bg_popup_call2_rect_pane_ParamLimits

0xeac5,	// (0x0003af41) bg_popup_call2_rect_pane

0xe86a,	// (0x0003ace6) call2_cli_visual_graphic_pane

0xe86a,	// (0x0003ace6) call2_cli_visual_text_pane

0x9d37,	// (0x000361b3) smil_status_volume_pane_g3

0x0002,

0xebe9,	// (0x0003b065) call2_cli_visual_graphic_pane_g1

0xebe9,	// (0x0003b065) call2_cli_visual_graphic_pane_g2

0xebe9,	// (0x0003b065) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0003ba07) call2_cli_visual_graphic_pane_g

0x264e,	// (0x0002eaca) bg_popup_call2_rect_pane_g1

0xec87,	// (0x0003b103) bg_popup_call2_rect_pane_g2

0x2656,	// (0x0002ead2) bg_popup_call2_rect_pane_g3

0x265e,	// (0x0002eada) bg_popup_call2_rect_pane_g4

0x2666,	// (0x0002eae2) bg_popup_call2_rect_pane_g5

0x266e,	// (0x0002eaea) bg_popup_call2_rect_pane_g6

0x2676,	// (0x0002eaf2) bg_popup_call2_rect_pane_g7

0x267e,	// (0x0002eafa) bg_popup_call2_rect_pane_g8

0x2686,	// (0x0002eb02) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0003ba0e) bg_popup_call2_rect_pane_g

0x268e,	// (0x0002eb0a) bg_popup_call2_bubble_pane_g1

0x2696,	// (0x0002eb12) bg_popup_call2_bubble_pane_g2

0x269e,	// (0x0002eb1a) bg_popup_call2_bubble_pane_g3

0x26a6,	// (0x0002eb22) bg_popup_call2_bubble_pane_g4

0x26ae,	// (0x0002eb2a) bg_popup_call2_bubble_pane_g5

0x26b6,	// (0x0002eb32) bg_popup_call2_bubble_pane_g6

0x26be,	// (0x0002eb3a) bg_popup_call2_bubble_pane_g7

0x26c6,	// (0x0002eb42) bg_popup_call2_bubble_pane_g8

0x26ce,	// (0x0002eb4a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0003ba21) bg_popup_call2_bubble_pane_g

0x7a32,	// (0x00033eae) aid_cale_week_size_cell_pane

0x7f6e,	// (0x000343ea) aid_cams_cif_uncrop_pane_ParamLimits

0x7f6e,	// (0x000343ea) aid_cams_cif_uncrop_pane

0x80c6,	// (0x00034542) aid_cams_size_cell_ParamLimits

0x80c6,	// (0x00034542) aid_cams_size_cell

0x80d2,	// (0x0003454e) grid_cams_pane_ParamLimits

0x80de,	// (0x0003455a) linegrid_cams_pane_ParamLimits

0x819d,	// (0x00034619) call_video_pane_t1

0x81ba,	// (0x00034636) call_video_pane_t2

0x0001,

0xf292,	// (0x0003b70e) call_video_pane_t

0x859c,	// (0x00034a18) aid_cale_month_size_cell_pane_ParamLimits

0x859c,	// (0x00034a18) aid_cale_month_size_cell_pane

0xf642,	// (0x0003babe) smil_status_volume_pane_g

0x9d44,	// (0x000361c0) volume_smil_pane_ParamLimits

0xe420,	// (0x0003a89c) aid_popup2_width_pane

0x7963,	// (0x00033ddf) cell_qdial_pane_g4_ParamLimits

0x7963,	// (0x00033ddf) cell_qdial_pane_g4

0x8fd5,	// (0x00035451) aid_blid_cardinal_pane_ParamLimits

0x8fe1,	// (0x0003545d) aid_blid_destination_pane_ParamLimits

0x8fe1,	// (0x0003545d) aid_blid_destination_pane

0xeac5,	// (0x0003af41) bg_popup_call_poc_act_pane_ParamLimits

0xeac5,	// (0x0003af41) bg_popup_call_poc_act_pane

0xeac5,	// (0x0003af41) bg_popup_call_poc_inact_pane_ParamLimits

0xeac5,	// (0x0003af41) bg_popup_call_poc_inact_pane

0x26d6,	// (0x0002eb52) bg_popup_call_poc_act_pane_g1

0x26de,	// (0x0002eb5a) bg_popup_call_poc_act_pane_g2

0x26e6,	// (0x0002eb62) bg_popup_call_poc_act_pane_g3

0x26a6,	// (0x0002eb22) bg_popup_call_poc_act_pane_g4

0x26ae,	// (0x0002eb2a) bg_popup_call_poc_act_pane_g5

0x26ee,	// (0x0002eb6a) bg_popup_call_poc_act_pane_g6

0x26be,	// (0x0002eb3a) bg_popup_call_poc_act_pane_g7

0x26f6,	// (0x0002eb72) bg_popup_call_poc_act_pane_g8

0xe86a,	// (0x0003ace6) main_usb_pane

0x288f,	// (0x0002ed0b) popup_cale_lunar_info_window

0x843f,	// (0x000348bb) im_reading_pane_t1_ParamLimits

0xee49,	// (0x0003b2c5) list_im_pane_ParamLimits

0xee5a,	// (0x0003b2d6) scroll_pane_cp07_ParamLimits

0xe86a,	// (0x0003ace6) grid_highlight_pane_cp012

0xeac5,	// (0x0003af41) mup_scale_pane_ParamLimits

0x1454,	// (0x0002d8d0) main_usb_pane_g1_ParamLimits

0x1454,	// (0x0002d8d0) main_usb_pane_g1

0x998b,	// (0x00035e07) main_usb_pane_g2_ParamLimits

0x998b,	// (0x00035e07) main_usb_pane_g2

0x0001,

0xf5e2,	// (0x0003ba5e) main_usb_pane_g_ParamLimits

0xf5e2,	// (0x0003ba5e) main_usb_pane_g

0x9997,	// (0x00035e13) main_usb_pane_t1_ParamLimits

0x9997,	// (0x00035e13) main_usb_pane_t1

0x99a9,	// (0x00035e25) main_usb_pane_t2_ParamLimits

0x99a9,	// (0x00035e25) main_usb_pane_t2

0x99bb,	// (0x00035e37) main_usb_pane_t3_ParamLimits

0x99bb,	// (0x00035e37) main_usb_pane_t3

0x99cd,	// (0x00035e49) main_usb_pane_t4_ParamLimits

0x99cd,	// (0x00035e49) main_usb_pane_t4

0x99df,	// (0x00035e5b) main_usb_pane_t5_ParamLimits

0x99df,	// (0x00035e5b) main_usb_pane_t5

0x99f1,	// (0x00035e6d) main_usb_pane_t6_ParamLimits

0x99f1,	// (0x00035e6d) main_usb_pane_t6

0x0005,

0xf5e7,	// (0x0003ba63) main_usb_pane_t_ParamLimits

0x1247,	// (0x0002d6c3) aid_text_placing

0x8f81,	// (0x000353fd) main_location2_pane_t1_ParamLimits

0x8f97,	// (0x00035413) main_location2_pane_t2_ParamLimits

0x8fad,	// (0x00035429) main_location2_pane_t3_ParamLimits

0x8fc3,	// (0x0003543f) main_location2_pane_t4_ParamLimits

0x8fc3,	// (0x0003543f) main_location2_pane_t4

0xf3f3,	// (0x0003b86f) main_location2_pane_t_ParamLimits

0xeb01,	// (0x0003af7d) find_pinb_pane_g2_ParamLimits

0xeb01,	// (0x0003af7d) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0003b5bd) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0003b5bd) find_pinb_pane_g

0xeb0d,	// (0x0003af89) find_pinb_pane_t1_ParamLimits

0xeb1f,	// (0x0003af9b) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0003b5c2) find_pinb_pane_t_ParamLimits

0xe86a,	// (0x0003ace6) main_call3_pane

0x8854,	// (0x00034cd0) cale_month_day_heading_pane_t1_ParamLimits

0x88b2,	// (0x00034d2e) cale_month_day_heading_pane_t2_ParamLimits

0x8917,	// (0x00034d93) cale_month_day_heading_pane_t3_ParamLimits

0x897c,	// (0x00034df8) cale_month_day_heading_pane_t4_ParamLimits

0x89e1,	// (0x00034e5d) cale_month_day_heading_pane_t5_ParamLimits

0x8a46,	// (0x00034ec2) cale_month_day_heading_pane_t6_ParamLimits

0x8aab,	// (0x00034f27) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0003b746) cale_month_day_heading_pane_t_ParamLimits

0xf0aa,	// (0x0003b526) smil_status_volume_pane

0x95ec,	// (0x00035a68) postcard_address_pane_ParamLimits

0x95ec,	// (0x00035a68) postcard_address_pane

0x95f8,	// (0x00035a74) postcard_message_pane_ParamLimits

0x95f8,	// (0x00035a74) postcard_message_pane

0x9967,	// (0x00035de3) call2_cli_visual_pane_t1_ParamLimits

0x9967,	// (0x00035de3) call2_cli_visual_pane_t1

0x9e95,	// (0x00036311) postcard_message_pane_t1_ParamLimits

0x9e95,	// (0x00036311) postcard_message_pane_t1

0x9e7e,	// (0x000362fa) postcard_address_pane_t1_ParamLimits

0x9e7e,	// (0x000362fa) postcard_address_pane_t1

0x9e71,	// (0x000362ed) popup_call3_audio_in_window_ParamLimits

0x9e71,	// (0x000362ed) popup_call3_audio_in_window

0x9d59,	// (0x000361d5) bg_popup_call3_in_pane_ParamLimits

0x9d59,	// (0x000361d5) bg_popup_call3_in_pane

0x9db7,	// (0x00036233) popup_call3_audio_in_window_g1_ParamLimits

0x9db7,	// (0x00036233) popup_call3_audio_in_window_g1

0x9dcf,	// (0x0003624b) popup_call3_audio_in_window_g2_ParamLimits

0x9dcf,	// (0x0003624b) popup_call3_audio_in_window_g2

0x9de7,	// (0x00036263) popup_call3_audio_in_window_g3_ParamLimits

0x9de7,	// (0x00036263) popup_call3_audio_in_window_g3

0x0003,

0xf649,	// (0x0003bac5) popup_call3_audio_in_window_g_ParamLimits

0xf649,	// (0x0003bac5) popup_call3_audio_in_window_g

0x9e0f,	// (0x0003628b) popup_call3_audio_in_window_t1_ParamLimits

0x9e0f,	// (0x0003628b) popup_call3_audio_in_window_t1

0x9e37,	// (0x000362b3) popup_call3_audio_in_window_t2_ParamLimits

0x9e37,	// (0x000362b3) popup_call3_audio_in_window_t2

0x9e5f,	// (0x000362db) popup_call3_audio_in_window_t3_ParamLimits

0x9e5f,	// (0x000362db) popup_call3_audio_in_window_t3

0x0002,

0xf652,	// (0x0003bace) popup_call3_audio_in_window_t_ParamLimits

0xf652,	// (0x0003bace) popup_call3_audio_in_window_t

0x1383,	// (0x0002d7ff) bg_popup_call3_rect_pane

0x264e,	// (0x0002eaca) bg_popup_call3_rect_pane_g1

0xec87,	// (0x0003b103) bg_popup_call3_rect_pane_g2

0x2656,	// (0x0002ead2) bg_popup_call3_rect_pane_g3

0x265e,	// (0x0002eada) bg_popup_call3_rect_pane_g4

0x2666,	// (0x0002eae2) bg_popup_call3_rect_pane_g5

0x266e,	// (0x0002eaea) bg_popup_call3_rect_pane_g6

0x2676,	// (0x0002eaf2) bg_popup_call3_rect_pane_g7

0x9303,	// (0x0003577f) mup_visualizer_osc_pane

0x1462,	// (0x0002d8de) mup_visualizer_spec_pane

0x9d79,	// (0x000361f5) call3_video_qcif_pane_ParamLimits

0x9d79,	// (0x000361f5) call3_video_qcif_pane

0x9d89,	// (0x00036205) call3_video_qcif_uncrop_pane_ParamLimits

0x9d89,	// (0x00036205) call3_video_qcif_uncrop_pane

0x9d95,	// (0x00036211) call3_video_subqcif_pane_ParamLimits

0x9d95,	// (0x00036211) call3_video_subqcif_pane

0x9da7,	// (0x00036223) call3_video_subqcif_uncrop_pane_ParamLimits

0x9da7,	// (0x00036223) call3_video_subqcif_uncrop_pane

0x9dff,	// (0x0003627b) popup_call3_audio_in_window_g4_ParamLimits

0x9dff,	// (0x0003627b) popup_call3_audio_in_window_g4

0x9d26,	// (0x000361a2) mup_spec_half_pane

0x9d2f,	// (0x000361ab) mup_spec_half_pane_cp

0x2922,	// (0x0002ed9e) mup_osc_middle_pane

0x292b,	// (0x0002eda7) mup_visualizer_osc_pane_g1

0x9d07,	// (0x00036183) mup_spec_bar_pane_ParamLimits

0x9d07,	// (0x00036183) mup_spec_bar_pane

0x290f,	// (0x0002ed8b) mup_spec_bar_pane_g1

0x2919,	// (0x0002ed95) mup_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0003bab9) mup_spec_bar_pane_g

0x7a32,	// (0x00033eae) aid_cale_week_size_cell_pane_ParamLimits

0x7a45,	// (0x00033ec1) bg_cale_heading_pane_ParamLimits

0xeccb,	// (0x0003b147) bg_cale_pane_cp01_ParamLimits

0x7a59,	// (0x00033ed5) cale_week_corner_pane_ParamLimits

0x7a6f,	// (0x00033eeb) cale_week_day_heading_pane_ParamLimits

0x7a83,	// (0x00033eff) cale_week_scroll_pane_g1_ParamLimits

0x7a94,	// (0x00033f10) cale_week_scroll_pane_g2_ParamLimits

0x7aa5,	// (0x00033f21) cale_week_scroll_pane_g3_ParamLimits

0x7ab6,	// (0x00033f32) cale_week_scroll_pane_g4_ParamLimits

0x7ac7,	// (0x00033f43) cale_week_scroll_pane_g5_ParamLimits

0x7ad8,	// (0x00033f54) cale_week_scroll_pane_g6_ParamLimits

0x7ae9,	// (0x00033f65) cale_week_scroll_pane_g7_ParamLimits

0x7afa,	// (0x00033f76) cale_week_scroll_pane_g8_ParamLimits

0x7b0b,	// (0x00033f87) cale_week_scroll_pane_g9_ParamLimits

0x7b1c,	// (0x00033f98) cale_week_scroll_pane_g10_ParamLimits

0x7b2d,	// (0x00033fa9) cale_week_scroll_pane_g11_ParamLimits

0x7b3e,	// (0x00033fba) cale_week_scroll_pane_g12_ParamLimits

0x7b4f,	// (0x00033fcb) cale_week_scroll_pane_g13_ParamLimits

0x7b60,	// (0x00033fdc) cale_week_scroll_pane_g14_ParamLimits

0x7b71,	// (0x00033fed) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0003b64e) cale_week_scroll_pane_g_ParamLimits

0x7b82,	// (0x00033ffe) cale_week_time_pane_ParamLimits

0x7b93,	// (0x0003400f) grid_cale_week_pane_ParamLimits

0xece4,	// (0x0003b160) listscroll_cale_week_pane_t1

0x7ba6,	// (0x00034022) scroll_pane_cp08_ParamLimits

0x85dd,	// (0x00034a59) cale_month_corner_pane_ParamLimits

0xf080,	// (0x0003b4fc) cale_month_pane_t1

0x8825,	// (0x00034ca1) cale_month_week_pane_ParamLimits

0x1454,	// (0x0002d8d0) popup_call_status_window_g1_ParamLimits

0x8db8,	// (0x00035234) popup_call_status_window_g2_ParamLimits

0x8dc4,	// (0x00035240) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0003b7f6) popup_call_status_window_g_ParamLimits

0x1026,	// (0x0002d4a2) aid_call2_pane

0x6411,	// (0x0003288d) msg_header_pane_g1

0x95ec,	// (0x00035a68) postcard_address2_pane_ParamLimits

0x95ec,	// (0x00035a68) postcard_address2_pane

0x95f8,	// (0x00035a74) postcard_message2_pane_ParamLimits

0x95f8,	// (0x00035a74) postcard_message2_pane

0x9cbe,	// (0x0003613a) message2_row_pane_ParamLimits

0x9cbe,	// (0x0003613a) message2_row_pane

0x9cd6,	// (0x00036152) address2_row_pane_ParamLimits

0x9cd6,	// (0x00036152) address2_row_pane

0x28dd,	// (0x0002ed59) postcard_message2_row_pane_g1

0x28e5,	// (0x0002ed61) postcard_message2_row_pane_t1

0x28dd,	// (0x0002ed59) address2_row_pane_g1

0x28e5,	// (0x0002ed61) address2_row_pane_t1

0x1734,	// (0x0002dbb0) aid_size_cell_vorec

0xe86a,	// (0x0003ace6) main_rss_pane

0x9ce9,	// (0x00036165) rss_list_single_pane_ParamLimits

0x9ce9,	// (0x00036165) rss_list_single_pane

0x28f3,	// (0x0002ed6f) rss_list_single_pane_t1

0x2901,	// (0x0002ed7d) rss_list_single_pane_t2

0x0001,

0xf638,	// (0x0003bab4) rss_list_single_pane_t

0xe86a,	// (0x0003ace6) main_camera2_pane

0xe86a,	// (0x0003ace6) main_video2_pane

0x9ee5,	// (0x00036361) cams_zoom_pane_cp2_ParamLimits

0x9ee5,	// (0x00036361) cams_zoom_pane_cp2

0x9ef1,	// (0x0003636d) image2_vga_pane_ParamLimits

0x9ef1,	// (0x0003636d) image2_vga_pane

0x9f00,	// (0x0003637c) main_camera2_pane_g1_ParamLimits

0x9f00,	// (0x0003637c) main_camera2_pane_g1

0x9f0c,	// (0x00036388) main_camera2_pane_g2_ParamLimits

0x9f0c,	// (0x00036388) main_camera2_pane_g2

0x9f18,	// (0x00036394) main_camera2_pane_g3_ParamLimits

0x9f18,	// (0x00036394) main_camera2_pane_g3

0x9f24,	// (0x000363a0) main_camera2_pane_g4_ParamLimits

0x9f24,	// (0x000363a0) main_camera2_pane_g4

0x9f30,	// (0x000363ac) main_camera2_pane_g5_ParamLimits

0x9f30,	// (0x000363ac) main_camera2_pane_g5

0x9f3c,	// (0x000363b8) main_camera2_pane_g6_ParamLimits

0x9f3c,	// (0x000363b8) main_camera2_pane_g6

0x9f48,	// (0x000363c4) main_camera2_pane_g7_ParamLimits

0x9f48,	// (0x000363c4) main_camera2_pane_g7

0x9f54,	// (0x000363d0) main_camera2_pane_g8_ParamLimits

0x9f54,	// (0x000363d0) main_camera2_pane_g8

0x0008,

0xf659,	// (0x0003bad5) main_camera2_pane_g_ParamLimits

0xf659,	// (0x0003bad5) main_camera2_pane_g

0x9f6c,	// (0x000363e8) main_camera2_pane_t1_ParamLimits

0x9f6c,	// (0x000363e8) main_camera2_pane_t1

0x9f7e,	// (0x000363fa) main_camera2_pane_t2_ParamLimits

0x9f7e,	// (0x000363fa) main_camera2_pane_t2

0x9f90,	// (0x0003640c) main_camera2_pane_t3_ParamLimits

0x9f90,	// (0x0003640c) main_camera2_pane_t3

0x9fa2,	// (0x0003641e) main_camera2_pane_t4_ParamLimits

0x9fa2,	// (0x0003641e) main_camera2_pane_t4

0x0006,

0xf66c,	// (0x0003bae8) main_camera2_pane_t_ParamLimits

0xf66c,	// (0x0003bae8) main_camera2_pane_t

0x9ffd,	// (0x00036479) cams_zoom_pane_cp4_ParamLimits

0x9ffd,	// (0x00036479) cams_zoom_pane_cp4

0xa00d,	// (0x00036489) image2_cif_pane_ParamLimits

0xa00d,	// (0x00036489) image2_cif_pane

0xa01e,	// (0x0003649a) image2_subqcif_pane_ParamLimits

0xa01e,	// (0x0003649a) image2_subqcif_pane

0xa02b,	// (0x000364a7) main_video2_pane_g1_ParamLimits

0xa02b,	// (0x000364a7) main_video2_pane_g1

0xa03d,	// (0x000364b9) main_video2_pane_g2_ParamLimits

0xa03d,	// (0x000364b9) main_video2_pane_g2

0xa04d,	// (0x000364c9) main_video2_pane_g3_ParamLimits

0xa04d,	// (0x000364c9) main_video2_pane_g3

0xa05d,	// (0x000364d9) main_video2_pane_g4_ParamLimits

0xa05d,	// (0x000364d9) main_video2_pane_g4

0xa06d,	// (0x000364e9) main_video2_pane_g5_ParamLimits

0xa06d,	// (0x000364e9) main_video2_pane_g5

0xa07d,	// (0x000364f9) main_video2_pane_g6_ParamLimits

0xa07d,	// (0x000364f9) main_video2_pane_g6

0x0005,

0xf67b,	// (0x0003baf7) main_video2_pane_g_ParamLimits

0xf67b,	// (0x0003baf7) main_video2_pane_g

0xa08f,	// (0x0003650b) main_video2_pane_t1_ParamLimits

0xa08f,	// (0x0003650b) main_video2_pane_t1

0xa0a9,	// (0x00036525) main_video2_pane_t2_ParamLimits

0xa0a9,	// (0x00036525) main_video2_pane_t2

0xa0cf,	// (0x0003654b) main_video2_pane_t3_ParamLimits

0xa0cf,	// (0x0003654b) main_video2_pane_t3

0x0002,

0xf688,	// (0x0003bb04) main_video2_pane_t_ParamLimits

0xf688,	// (0x0003bb04) main_video2_pane_t

0x9aa0,	// (0x00035f1c) call_muted_g2

0x0001,

0xf62a,	// (0x0003baa6) call_muted_g

0xe86a,	// (0x0003ace6) main_mup2_pane

0x29dd,	// (0x0002ee59) main_mup2_pane_g1_ParamLimits

0x29dd,	// (0x0002ee59) main_mup2_pane_g1

0xa0f5,	// (0x00036571) main_mup2_pane_g2_ParamLimits

0xa0f5,	// (0x00036571) main_mup2_pane_g2

0xa365,	// (0x000367e1) main_mup_pane_g13_cp1

0xa36d,	// (0x000367e9) mup_volume_pane_cp1

0xa115,	// (0x00036591) main_mup2_pane_g4_ParamLimits

0xa115,	// (0x00036591) main_mup2_pane_g4

0xa126,	// (0x000365a2) main_mup2_pane_g5_ParamLimits

0xa126,	// (0x000365a2) main_mup2_pane_g5

0xa137,	// (0x000365b3) main_mup2_pane_g6_ParamLimits

0xa137,	// (0x000365b3) main_mup2_pane_g6

0xa148,	// (0x000365c4) main_mup2_pane_g7_ParamLimits

0xa148,	// (0x000365c4) main_mup2_pane_g7

0x0006,

0xf68f,	// (0x0003bb0b) main_mup2_pane_g_ParamLimits

0xf68f,	// (0x0003bb0b) main_mup2_pane_g

0xa164,	// (0x000365e0) main_mup2_pane_t1_ParamLimits

0xa164,	// (0x000365e0) main_mup2_pane_t1

0xa17b,	// (0x000365f7) main_mup2_pane_t2_ParamLimits

0xa17b,	// (0x000365f7) main_mup2_pane_t2

0xa192,	// (0x0003660e) main_mup2_pane_t3_ParamLimits

0xa192,	// (0x0003660e) main_mup2_pane_t3

0xa1a9,	// (0x00036625) main_mup2_pane_t4_ParamLimits

0xa1a9,	// (0x00036625) main_mup2_pane_t4

0xa1c3,	// (0x0003663f) main_mup2_pane_t5_ParamLimits

0xa1c3,	// (0x0003663f) main_mup2_pane_t5

0xa1dd,	// (0x00036659) main_mup2_pane_t6_ParamLimits

0xa1dd,	// (0x00036659) main_mup2_pane_t6

0x0005,

0xf69e,	// (0x0003bb1a) main_mup2_pane_t_ParamLimits

0xf69e,	// (0x0003bb1a) main_mup2_pane_t

0xa215,	// (0x00036691) mup2_visualizer_pane_ParamLimits

0xa215,	// (0x00036691) mup2_visualizer_pane

0xa247,	// (0x000366c3) mup_progress_pane_cp_ParamLimits

0xa247,	// (0x000366c3) mup_progress_pane_cp

0xa350,	// (0x000367cc) mup_volume_pane_cp_ParamLimits

0xa350,	// (0x000367cc) mup_volume_pane_cp

0xa25e,	// (0x000366da) mup2_visualizer_pane_g1_ParamLimits

0xa25e,	// (0x000366da) mup2_visualizer_pane_g1

0x29af,	// (0x0002ee2b) mup2_visualizer_pane_g2_ParamLimits

0x29af,	// (0x0002ee2b) mup2_visualizer_pane_g2

0xa273,	// (0x000366ef) mup2_visualizer_pane_g3_ParamLimits

0xa273,	// (0x000366ef) mup2_visualizer_pane_g3

0x0002,

0xf6ab,	// (0x0003bb27) mup2_visualizer_pane_g_ParamLimits

0xf6ab,	// (0x0003bb27) mup2_visualizer_pane_g

0x1734,	// (0x0002dbb0) aid_size_cell_fmradio

0x9b82,	// (0x00035ffe) aid_height_parent_landcape

0xeee7,	// (0x0003b363) wml_content_pane_cp

0xeeef,	// (0x0003b36b) wml_tabs_pane

0xeef8,	// (0x0003b374) popup_wml_miniature_window

0xef00,	// (0x0003b37c) scroll_pane_cp021

0xef14,	// (0x0003b390) wml_content_pane_comp8

0xe86a,	// (0x0003ace6) bg_popup_sub_pane_cp05

0x29cd,	// (0x0002ee49) popup_wml_miniature_window_g1

0x29d5,	// (0x0002ee51) wml_miniature_view_pane

0xa27f,	// (0x000366fb) aid_size_wml_view

0xa287,	// (0x00036703) wml_miniature_view_pane_g1

0xa290,	// (0x0003670c) wml_miniature_view_pane_g2

0xa299,	// (0x00036715) wml_miniature_view_pane_g3

0xa2a1,	// (0x0003671d) wml_miniature_view_pane_g4

0xa2a9,	// (0x00036725) wml_miniature_view_pane_g5

0xa2b1,	// (0x0003672d) wml_miniature_view_pane_g6

0xa2b9,	// (0x00036735) wml_miniature_view_pane_g7

0xa2c1,	// (0x0003673d) wml_miniature_view_pane_g8

0x0007,

0xf6b2,	// (0x0003bb2e) wml_miniature_view_pane_g

0x29dd,	// (0x0002ee59) background_graphic_ParamLimits

0x29dd,	// (0x0002ee59) background_graphic

0x29e9,	// (0x0002ee65) wml_tabs_2_pane

0x29f2,	// (0x0002ee6e) wml_tabs_3_pane_ParamLimits

0x29f2,	// (0x0002ee6e) wml_tabs_3_pane

0x2a04,	// (0x0002ee80) wml_tabs_4_pane_ParamLimits

0x2a04,	// (0x0002ee80) wml_tabs_4_pane

0x2a1a,	// (0x0002ee96) wml_tabs_5_pane_ParamLimits

0x2a1a,	// (0x0002ee96) wml_tabs_5_pane

0x2a34,	// (0x0002eeb0) wml_tabs_pane_g2_ParamLimits

0x2a34,	// (0x0002eeb0) wml_tabs_pane_g2

0x2a48,	// (0x0002eec4) wml_tabs_pane_g3_ParamLimits

0x2a48,	// (0x0002eec4) wml_tabs_pane_g3

0xa2c9,	// (0x00036745) wml_tabs_2_active_pane_ParamLimits

0xa2c9,	// (0x00036745) wml_tabs_2_active_pane

0xa2d9,	// (0x00036755) wml_tabs_2_passive_pane_ParamLimits

0xa2d9,	// (0x00036755) wml_tabs_2_passive_pane

0xa2e9,	// (0x00036765) wml_tabs_3_active_pane_cp_ParamLimits

0xa2e9,	// (0x00036765) wml_tabs_3_active_pane_cp

0xa2fa,	// (0x00036776) wml_tabs_3_passive_pane_ParamLimits

0xa2fa,	// (0x00036776) wml_tabs_3_passive_pane

0xa30b,	// (0x00036787) wml_tabs_3_passive_pane_cp_ParamLimits

0xa30b,	// (0x00036787) wml_tabs_3_passive_pane_cp

0xa31c,	// (0x00036798) tabs_4_active_pane

0xa324,	// (0x000367a0) tabs_4_passive_pane

0xa32c,	// (0x000367a8) tabs_4_passive_pane_cp

0xa334,	// (0x000367b0) tabs_4_passive_pane_cp2

0x9983,	// (0x00035dff) aid_height_text

0x92d0,	// (0x0003574c) mup_volume_cont_pane_ParamLimits

0x92d0,	// (0x0003574c) mup_volume_cont_pane

0x7619,	// (0x00033a95) aid_size_cell_pinb

0x7623,	// (0x00033a9f) aid_size_list_pinb

0xa230,	// (0x000366ac) mup2_volume_cont_pane_ParamLimits

0xa230,	// (0x000366ac) mup2_volume_cont_pane

0xa33c,	// (0x000367b8) mup2_volume_cont_pane_g1_ParamLimits

0xa33c,	// (0x000367b8) mup2_volume_cont_pane_g1

0x7302,	// (0x0003377e) aid_size_cell_touch_ParamLimits

0x7302,	// (0x0003377e) aid_size_cell_touch

0x7519,	// (0x00033995) touch_pane_ParamLimits

0x7519,	// (0x00033995) touch_pane

0xe40e,	// (0x0003a88a) main_rss2_pane

0x2a9e,	// (0x0002ef1a) listscroll_rss2_pane

0x2aa7,	// (0x0002ef23) rss2_navigation_pane

0x2aaf,	// (0x0002ef2b) list_rss2_pane

0x11c4,	// (0x0002d640) scroll_pane_cp22

0x2ab7,	// (0x0002ef33) rss2_navigation_pane_g1

0x2ac0,	// (0x0002ef3c) rss2_navigation_pane_g2

0x2ac8,	// (0x0002ef44) rss2_navigation_pane_g3

0x0002,

0xf6c3,	// (0x0003bb3f) rss2_navigation_pane_g

0x2ad0,	// (0x0002ef4c) rss2_navigation_pane_t1

0xa375,	// (0x000367f1) rss2_list_single_pane_ParamLimits

0xa375,	// (0x000367f1) rss2_list_single_pane

0x2ade,	// (0x0002ef5a) rss2_list_single_pane_t2

0x2aec,	// (0x0002ef68) rss2_list_single_pane_t3_ParamLimits

0x2aec,	// (0x0002ef68) rss2_list_single_pane_t3

0x2b09,	// (0x0002ef85) rss2_list_single_pane_t4

0x8c71,	// (0x000350ed) smil_status_pane_g1

0xf0bd,	// (0x0003b539) main_image2_pane_ParamLimits

0xf0bd,	// (0x0003b539) main_image2_pane

0x9f60,	// (0x000363dc) main_camera2_pane_g9_ParamLimits

0x9f60,	// (0x000363dc) main_camera2_pane_g9

0x9fb4,	// (0x00036430) main_camera2_pane_t5_ParamLimits

0x9fb4,	// (0x00036430) main_camera2_pane_t5

0x9fc6,	// (0x00036442) main_camera2_pane_t6_ParamLimits

0x9fc6,	// (0x00036442) main_camera2_pane_t6

0xa38c,	// (0x00036808) main_image2_pane_g1_ParamLimits

0xa38c,	// (0x00036808) main_image2_pane_g1

0x9798,	// (0x00035c14) smil2_video_pane_ParamLimits

0x9798,	// (0x00035c14) smil2_video_pane

0x61a4,	// (0x00032620) aid_zoom_text_primary_cp

0xe451,	// (0x0003a8cd) popup_preview_fixed_window

0xee41,	// (0x0003b2bd) im_reading_pane_g1

0x9ebc,	// (0x00036338) cams2_bc_adjust_pane_cp_ParamLimits

0x9ebc,	// (0x00036338) cams2_bc_adjust_pane_cp

0x9ff1,	// (0x0003646d) cams2_bc_adjust_pane_ParamLimits

0x9ff1,	// (0x0003646d) cams2_bc_adjust_pane

0xa398,	// (0x00036814) cams2_bc_adjust_pane_g1

0xa3a0,	// (0x0003681c) cams2_slider_pane

0xa3a9,	// (0x00036825) cams2_slider_pane_g1

0xa3b2,	// (0x0003682e) cams2_slider_pane_g2

0x0006,

0xf6ca,	// (0x0003bb46) cams2_slider_pane_g

0x7702,	// (0x00033b7e) calc_display_pane_ParamLimits

0x771a,	// (0x00033b96) calc_paper_pane_ParamLimits

0x7736,	// (0x00033bb2) grid_calc_pane_ParamLimits

0x8e36,	// (0x000352b2) popup_clock_digital_window_t1_ParamLimits

0x16d1,	// (0x0002db4d) main_image_pane_t1

0x76e8,	// (0x00033b64) aid_size_cell_calc_ParamLimits

0x76e8,	// (0x00033b64) aid_size_cell_calc

0x9ba7,	// (0x00036023) popup_blid_sat_info2_window_ParamLimits

0x9ba7,	// (0x00036023) popup_blid_sat_info2_window

0x2b53,	// (0x0002efcf) aid_size_cell_blid

0x2b5b,	// (0x0002efd7) bg_popup_window_pane_cp07

0x2b7e,	// (0x0002effa) grid_popup_blid_pane

0x2b86,	// (0x0002f002) heading_pane_cp05_ParamLimits

0x2b86,	// (0x0002f002) heading_pane_cp05

0x2c4e,	// (0x0002f0ca) cell_popup_blid_pane_ParamLimits

0x2c4e,	// (0x0002f0ca) cell_popup_blid_pane

0x2c6e,	// (0x0002f0ea) cell_popup_blid_pane_g1

0x2c76,	// (0x0002f0f2) cell_popup_blid_pane_t1

0xa1fa,	// (0x00036676) mup2_indicator_pane_ParamLimits

0xa1fa,	// (0x00036676) mup2_indicator_pane

0x1383,	// (0x0002d7ff) mup2_visualizer_osc_pane

0x29bb,	// (0x0002ee37) mup2_visualizer_spec_pane_ParamLimits

0x29bb,	// (0x0002ee37) mup2_visualizer_spec_pane

0xa3cc,	// (0x00036848) mup2_spec_half_pane

0xa3d5,	// (0x00036851) mup2_spec_half_pane_cp

0xa3dd,	// (0x00036859) mup2_spec_bar_pane_ParamLimits

0xa3dd,	// (0x00036859) mup2_spec_bar_pane

0x290f,	// (0x0002ed8b) mup2_spec_bar_pane_g1

0x2919,	// (0x0002ed95) mup2_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x0003bab9) mup2_spec_bar_pane_g

0xa3fc,	// (0x00036878) mup2_osc_middle_pane

0x292b,	// (0x0002eda7) mup2_visualizer_osc_pane_g1

0xe479,	// (0x0003a8f5) popup_number_entry_window_t1_ParamLimits

0xe48c,	// (0x0003a908) popup_number_entry_window_t2_ParamLimits

0xe49e,	// (0x0003a91a) popup_number_entry_window_t3_ParamLimits

0x7566,	// (0x000339e2) popup_number_entry_window_t5_ParamLimits

0x7566,	// (0x000339e2) popup_number_entry_window_t5

0xf0ec,	// (0x0003b568) popup_number_entry_window_t_ParamLimits

0xe4b0,	// (0x0003a92c) text_title_cp2_ParamLimits

0x94d6,	// (0x00035952) aid_hotspot_pointer_text2_pane

0x9568,	// (0x000359e4) main_viewer_pane_g9_ParamLimits

0x9568,	// (0x000359e4) main_viewer_pane_g9

0xf080,	// (0x0003b4fc) cale_month_pane_t1_ParamLimits

0x0c3d,	// (0x0002d0b9) bg_cale_pane_ParamLimits

0x0c55,	// (0x0002d0d1) list_cale_pane_ParamLimits

0xece4,	// (0x0003b160) listscroll_cale_day_pane_t1

0x0c66,	// (0x0002d0e2) scroll_pane_cp09_ParamLimits

0x930b,	// (0x00035787) main_mup_eq_pane_t1_ParamLimits

0x930b,	// (0x00035787) main_mup_eq_pane_t1

0x9321,	// (0x0003579d) main_mup_eq_pane_t2_ParamLimits

0x9321,	// (0x0003579d) main_mup_eq_pane_t2

0x9337,	// (0x000357b3) main_mup_eq_pane_t3_ParamLimits

0x9337,	// (0x000357b3) main_mup_eq_pane_t3

0x934d,	// (0x000357c9) main_mup_eq_pane_t4_ParamLimits

0x934d,	// (0x000357c9) main_mup_eq_pane_t4

0x9363,	// (0x000357df) main_mup_eq_pane_t5_ParamLimits

0x9363,	// (0x000357df) main_mup_eq_pane_t5

0x9379,	// (0x000357f5) main_mup_eq_pane_t6_ParamLimits

0x9379,	// (0x000357f5) main_mup_eq_pane_t6

0x938b,	// (0x00035807) main_mup_eq_pane_t7_ParamLimits

0x938b,	// (0x00035807) main_mup_eq_pane_t7

0x939d,	// (0x00035819) main_mup_eq_pane_t8_ParamLimits

0x939d,	// (0x00035819) main_mup_eq_pane_t8

0x93af,	// (0x0003582b) main_mup_eq_pane_t9_ParamLimits

0x93af,	// (0x0003582b) main_mup_eq_pane_t9

0x93c5,	// (0x00035841) main_mup_eq_pane_t10_ParamLimits

0x93c5,	// (0x00035841) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0003b8f5) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0003b8f5) main_mup_eq_pane_t

0x9458,	// (0x000358d4) mup_equalizer_pane_cp5_ParamLimits

0x946a,	// (0x000358e6) mup_equalizer_pane_cp6_ParamLimits

0x947c,	// (0x000358f8) mup_equalizer_pane_cp7_ParamLimits

0xe40e,	// (0x0003a88a) main_gallery_pane

0x2934,	// (0x0002edb0) smil2_volume_pane

0x294f,	// (0x0002edcb) smil_status_volume_pane_g1_ParamLimits

0x293c,	// (0x0002edb8) smil_status_volume_pane_g2_ParamLimits

0x9d37,	// (0x000361b3) smil_status_volume_pane_g3_ParamLimits

0xf642,	// (0x0003babe) smil_status_volume_pane_g_ParamLimits

0x2b5b,	// (0x0002efd7) bg_popup_window_pane_cp07_ParamLimits

0x2b69,	// (0x0002efe5) blid_firmament_pane

0xa405,	// (0x00036881) aid_size_cell_gallery_ParamLimits

0xa405,	// (0x00036881) aid_size_cell_gallery

0xa413,	// (0x0003688f) grid_gallery_pane_ParamLimits

0xa413,	// (0x0003688f) grid_gallery_pane

0xa41f,	// (0x0003689b) cell_gallery_pane_ParamLimits

0xa41f,	// (0x0003689b) cell_gallery_pane

0x2c84,	// (0x0002f100) bg_cell_gallery_focus_pane_ParamLimits

0x2c84,	// (0x0002f100) bg_cell_gallery_focus_pane

0x2c96,	// (0x0002f112) cell_gallery_pane_g1_ParamLimits

0x2c96,	// (0x0002f112) cell_gallery_pane_g1

0xa45e,	// (0x000368da) cell_gallery_pane_g2_ParamLimits

0xa45e,	// (0x000368da) cell_gallery_pane_g2

0xa46b,	// (0x000368e7) cell_gallery_pane_g3_ParamLimits

0xa46b,	// (0x000368e7) cell_gallery_pane_g3

0x2ca2,	// (0x0002f11e) cell_gallery_pane_g4_ParamLimits

0x2ca2,	// (0x0002f11e) cell_gallery_pane_g4

0x0003,

0xf6f0,	// (0x0003bb6c) cell_gallery_pane_g_ParamLimits

0xf6f0,	// (0x0003bb6c) cell_gallery_pane_g

0x2cae,	// (0x0002f12a) bg_cell_gallery_focus_pane_g1

0x2cb6,	// (0x0002f132) bg_cell_gallery_focus_pane_g2

0x2cbe,	// (0x0002f13a) bg_cell_gallery_focus_pane_g3

0x2cc6,	// (0x0002f142) bg_cell_gallery_focus_pane_g4

0x2cce,	// (0x0002f14a) bg_cell_gallery_focus_pane_g5

0x2cd6,	// (0x0002f152) bg_cell_gallery_focus_pane_g6

0x2cde,	// (0x0002f15a) bg_cell_gallery_focus_pane_g7

0x2ce6,	// (0x0002f162) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f9,	// (0x0003bb75) bg_cell_gallery_focus_pane_g

0x2cee,	// (0x0002f16a) aid_firma_cardinal

0x2d02,	// (0x0002f17e) blid_firmament_pane_t1

0x2d19,	// (0x0002f195) blid_firmament_pane_t2

0x2d30,	// (0x0002f1ac) blid_firmament_pane_t3

0x2d47,	// (0x0002f1c3) blid_firmament_pane_t4

0x0003,

0xf70a,	// (0x0003bb86) blid_firmament_pane_t

0x2d5e,	// (0x0002f1da) blid_sat_info_pane

0x2d6e,	// (0x0002f1ea) blid_sat_info_pane_g1

0x2d6e,	// (0x0002f1ea) blid_sat_info_pane_g2

0x0001,

0xf713,	// (0x0003bb8f) blid_sat_info_pane_g

0x2d78,	// (0x0002f1f4) blid_sat_info_pane_t1

0x2d86,	// (0x0002f202) smil2_volume_content_pane

0x2d8f,	// (0x0002f20b) smil2_volume_pane_g1

0x2d97,	// (0x0002f213) smil2_volume_content_pane_g1

0x2da0,	// (0x0002f21c) smil2_volume_content_pane_g2

0x2da9,	// (0x0002f225) smil2_volume_content_pane_g3

0x2db2,	// (0x0002f22e) smil2_volume_content_pane_g4

0x2dbb,	// (0x0002f237) smil2_volume_content_pane_g5

0x2dc4,	// (0x0002f240) smil2_volume_content_pane_g6

0x2dcd,	// (0x0002f249) smil2_volume_content_pane_g7

0x2dd6,	// (0x0002f252) smil2_volume_content_pane_g8

0x2ddf,	// (0x0002f25b) smil2_volume_content_pane_g9

0x2de8,	// (0x0002f264) smil2_volume_content_pane_g10

0x0009,

0xf718,	// (0x0003bb94) smil2_volume_content_pane_g

0x7bfa,	// (0x00034076) cale_week_day_heading_pane_t1_ParamLimits

0x7c13,	// (0x0003408f) cale_week_day_heading_pane_t2_ParamLimits

0x7c2c,	// (0x000340a8) cale_week_day_heading_pane_t3_ParamLimits

0x7c45,	// (0x000340c1) cale_week_day_heading_pane_t4_ParamLimits

0x7c5e,	// (0x000340da) cale_week_day_heading_pane_t5_ParamLimits

0x7c77,	// (0x000340f3) cale_week_day_heading_pane_t6_ParamLimits

0x7c90,	// (0x0003410c) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0003b66d) cale_week_day_heading_pane_t_ParamLimits

0xecf6,	// (0x0003b172) bg_cale_side_pane_ParamLimits

0x7ca9,	// (0x00034125) cale_week_time_pane_t1_ParamLimits

0x7cd5,	// (0x00034151) cale_week_time_pane_t2_ParamLimits

0x7d01,	// (0x0003417d) cale_week_time_pane_t3_ParamLimits

0x7d2d,	// (0x000341a9) cale_week_time_pane_t4_ParamLimits

0x7d59,	// (0x000341d5) cale_week_time_pane_t5_ParamLimits

0x7d85,	// (0x00034201) cale_week_time_pane_t6_ParamLimits

0x7db1,	// (0x0003422d) cale_week_time_pane_t7_ParamLimits

0x7ddd,	// (0x00034259) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0003b67c) cale_week_time_pane_t_ParamLimits

0x7e09,	// (0x00034285) cell_cale_week_pane_g2_ParamLimits

0xecf6,	// (0x0003b172) bg_cale_side_pane_cp01_ParamLimits

0x8b10,	// (0x00034f8c) cale_month_week_pane_t1_ParamLimits

0x8b27,	// (0x00034fa3) cale_month_week_pane_t2_ParamLimits

0x8b3e,	// (0x00034fba) cale_month_week_pane_t3_ParamLimits

0x8b55,	// (0x00034fd1) cale_month_week_pane_t4_ParamLimits

0x8b6c,	// (0x00034fe8) cale_month_week_pane_t5_ParamLimits

0x8b83,	// (0x00034fff) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0003b755) cale_month_week_pane_t_ParamLimits

0x8c40,	// (0x000350bc) cell_cale_month_pane_g1_ParamLimits

0xe40e,	// (0x0003a88a) main_cale_event_viewer_pane

0xe40e,	// (0x0003a88a) listscroll_cale_event_viewer_pane

0x2df1,	// (0x0002f26d) list_cale_ev_pane

0x2df9,	// (0x0002f275) scroll_pane_cp023

0xa478,	// (0x000368f4) field_cale_ev_pane_ParamLimits

0xa478,	// (0x000368f4) field_cale_ev_pane

0x2e05,	// (0x0002f281) field_cale_ev_content_pane_ParamLimits

0x2e05,	// (0x0002f281) field_cale_ev_content_pane

0x2e11,	// (0x0002f28d) field_cale_ev_pane_g1_ParamLimits

0x2e11,	// (0x0002f28d) field_cale_ev_pane_g1

0x2e1d,	// (0x0002f299) field_cale_ev_pane_g2_ParamLimits

0x2e1d,	// (0x0002f299) field_cale_ev_pane_g2

0x2e35,	// (0x0002f2b1) field_cale_ev_pane_g3_ParamLimits

0x2e35,	// (0x0002f2b1) field_cale_ev_pane_g3

0x0002,

0xf72d,	// (0x0003bba9) field_cale_ev_pane_g_ParamLimits

0xf72d,	// (0x0003bba9) field_cale_ev_pane_g

0x2e4d,	// (0x0002f2c9) field_cale_ev_pane_t1_ParamLimits

0x2e4d,	// (0x0002f2c9) field_cale_ev_pane_t1

0xa492,	// (0x0003690e) field_cale_ev_content_pane_t1_ParamLimits

0xa492,	// (0x0003690e) field_cale_ev_content_pane_t1

0x1514,	// (0x0002d990) bg_button_pane_cp01

0xecbc,	// (0x0003b138) listscroll_cale_week_pane_ParamLimits

0x7a2a,	// (0x00033ea6) popup_toolbar_window_cp01

0xece4,	// (0x0003b160) listscroll_cale_week_pane_t1_ParamLimits

0xeb94,	// (0x0003b010) listscroll_cale_day_pane_ParamLimits

0x7a2a,	// (0x00033ea6) popup_toolbar_window_cp02

0xece4,	// (0x0003b160) listscroll_cale_day_pane_t1_ParamLimits

0xecbc,	// (0x0003b138) main_cale_month_pane_ParamLimits

0x9c47,	// (0x000360c3) popup_toolbar_window_cp03_ParamLimits

0x9c47,	// (0x000360c3) popup_toolbar_window_cp03

0x96c0,	// (0x00035b3c) main_image_pane_g2_ParamLimits

0x96c0,	// (0x00035b3c) main_image_pane_g2

0x96cc,	// (0x00035b48) main_image_pane_g3_ParamLimits

0x96cc,	// (0x00035b48) main_image_pane_g3

0x0002,

0xf50b,	// (0x0003b987) main_image_pane_g_ParamLimits

0xf50b,	// (0x0003b987) main_image_pane_g

0x16d1,	// (0x0002db4d) main_image_pane_t1_ParamLimits

0x96d8,	// (0x00035b54) main_image_pane_t2_ParamLimits

0x96d8,	// (0x00035b54) main_image_pane_t2

0x96ea,	// (0x00035b66) main_image_pane_t3_ParamLimits

0x96ea,	// (0x00035b66) main_image_pane_t3

0x96fc,	// (0x00035b78) main_image_pane_t4_ParamLimits

0x96fc,	// (0x00035b78) main_image_pane_t4

0x0003,

0xf512,	// (0x0003b98e) main_image_pane_t_ParamLimits

0xf512,	// (0x0003b98e) main_image_pane_t

0x970e,	// (0x00035b8a) popup_image_details_window_cp01

0x9716,	// (0x00035b92) popup_toobar_trans_pane_cp01_ParamLimits

0x9716,	// (0x00035b92) popup_toobar_trans_pane_cp01

0x9be6,	// (0x00036062) popup_image_details_window_ParamLimits

0x9be6,	// (0x00036062) popup_image_details_window

0x2897,	// (0x0002ed13) popup_image_focus_window

0x9eb0,	// (0x0003632c) camera2_autofocus_pane_ParamLimits

0x9eb0,	// (0x0003632c) camera2_autofocus_pane

0xe40e,	// (0x0003a88a) bg_popup_sub_pane_cp06

0x2e64,	// (0x0002f2e0) popup_image_focus_window_g1

0x2e6c,	// (0x0002f2e8) popup_image_focus_window_g2

0x2e74,	// (0x0002f2f0) popup_image_focus_window_g3

0x2e7c,	// (0x0002f2f8) popup_image_focus_window_g4

0x0003,

0xf734,	// (0x0003bbb0) popup_image_focus_window_g

0x2e84,	// (0x0002f300) popup_image_focus_window_t1

0x2e92,	// (0x0002f30e) popup_image_focus_window_t2

0x2ea1,	// (0x0002f31d) popup_image_focus_window_t3

0x0002,

0xf73d,	// (0x0003bbb9) popup_image_focus_window_t

0x2eaf,	// (0x0002f32b) camera2_autofocus_pane_g1

0xf0bd,	// (0x0003b539) bg_tb_trans_pane_cp01

0x2ebd,	// (0x0002f339) popup_image_details_window_g1

0x2ed0,	// (0x0002f34c) popup_image_details_window_g2

0x0002,

0xf74f,	// (0x0003bbcb) popup_image_details_window_g

0x2ef9,	// (0x0002f375) popup_image_details_window_t1

0x2f0b,	// (0x0002f387) popup_image_details_window_t2

0x2f24,	// (0x0002f3a0) popup_image_details_window_t3

0x2f38,	// (0x0002f3b4) popup_image_details_window_t4

0x2f53,	// (0x0002f3cf) popup_image_details_window_t5

0x0004,

0xf756,	// (0x0003bbd2) popup_image_details_window_t

0xeb7c,	// (0x0003aff8) bg_calc_paper_pane_ParamLimits

0xe40e,	// (0x0003a88a) grid_highlight_pane_cp013

0x7817,	// (0x00033c93) list_calc_pane_ParamLimits

0x7829,	// (0x00033ca5) scroll_pane_cp024

0xeb94,	// (0x0003b010) bg_calc_display_pane_ParamLimits

0x7831,	// (0x00033cad) calc_display_pane_t1_ParamLimits

0x7846,	// (0x00033cc2) calc_display_pane_t2_ParamLimits

0x785b,	// (0x00033cd7) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0003b5ef) calc_display_pane_t_ParamLimits

0x7911,	// (0x00033d8d) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0003b60c) cell_calc_pane_g

0x791a,	// (0x00033d96) cell_calc_pane_t1

0xebf3,	// (0x0003b06f) grid_highlight_pane_cp02_ParamLimits

0xec09,	// (0x0003b085) toolbar_button_pane_cp01_ParamLimits

0xec09,	// (0x0003b085) toolbar_button_pane_cp01

0x1716,	// (0x0002db92) temp_image_control_pane_ParamLimits

0x1716,	// (0x0002db92) temp_image_control_pane

0xf0bd,	// (0x0003b539) main_mp3_pane

0x2f6d,	// (0x0002f3e9) temp_image_control_pane_g1_ParamLimits

0x2f6d,	// (0x0002f3e9) temp_image_control_pane_g1

0x2f7b,	// (0x0002f3f7) temp_image_control_pane_g2_ParamLimits

0x2f7b,	// (0x0002f3f7) temp_image_control_pane_g2

0x2f8d,	// (0x0002f409) temp_image_control_pane_g3_ParamLimits

0x2f8d,	// (0x0002f409) temp_image_control_pane_g3

0xa4dc,	// (0x00036958) temp_image_control_pane_g4_ParamLimits

0xa4dc,	// (0x00036958) temp_image_control_pane_g4

0x0003,

0xf761,	// (0x0003bbdd) temp_image_control_pane_g_ParamLimits

0xf761,	// (0x0003bbdd) temp_image_control_pane_g

0x2f6d,	// (0x0002f3e9) main_mp3_pane_g1

0xa4ed,	// (0x00036969) main_mp3_pane_g2

0x0007,

0xf76a,	// (0x0003bbe6) main_mp3_pane_g

0x2fd0,	// (0x0002f44c) main_mp3_pane_t1

0xed52,	// (0x0003b1ce) main_camera_pane_g8_ParamLimits

0xed52,	// (0x0003b1ce) main_camera_pane_g8

0x807c,	// (0x000344f8) main_video_pane_g7_ParamLimits

0x807c,	// (0x000344f8) main_video_pane_g7

0x9fdf,	// (0x0003645b) main_camera2_pane_t7_ParamLimits

0x9fdf,	// (0x0003645b) main_camera2_pane_t7

0xeea7,	// (0x0003b323) scroll_pane_cp025_ParamLimits

0xeea7,	// (0x0003b323) scroll_pane_cp025

0xeebb,	// (0x0003b337) scroll_pane_cp026_ParamLimits

0xeebb,	// (0x0003b337) scroll_pane_cp026

0xeeca,	// (0x0003b346) wml_content_pane_ParamLimits

0xe40e,	// (0x0003a88a) main_touch_calib_pane

0xa584,	// (0x00036a00) main_touch_calib_pane_g1

0xa590,	// (0x00036a0c) main_touch_calib_pane_g2

0xa59c,	// (0x00036a18) main_touch_calib_pane_g3

0xa5a8,	// (0x00036a24) main_touch_calib_pane_g4

0x0003,

0xf788,	// (0x0003bc04) main_touch_calib_pane_g

0xa5b4,	// (0x00036a30) main_touch_calib_pane_t1

0xa5c9,	// (0x00036a45) main_touch_calib_pane_t2

0x0004,

0xf791,	// (0x0003bc0d) main_touch_calib_pane_t

0x1275,	// (0x0002d6f1) mup_progress_pane_cp02

0x1294,	// (0x0002d710) navi_pane_g1

0x1314,	// (0x0002d790) navi_pane_mp_t3

0xf0bd,	// (0x0003b539) main_mp3_pane_ParamLimits

0x9c81,	// (0x000360fd) navi_pane_ParamLimits

0x2f6d,	// (0x0002f3e9) main_mp3_pane_g1_ParamLimits

0xa4ed,	// (0x00036969) main_mp3_pane_g2_ParamLimits

0xa4f9,	// (0x00036975) main_mp3_pane_g3_ParamLimits

0xa4f9,	// (0x00036975) main_mp3_pane_g3

0xa505,	// (0x00036981) main_mp3_pane_g4_ParamLimits

0xa505,	// (0x00036981) main_mp3_pane_g4

0x2f9d,	// (0x0002f419) main_mp3_pane_g5_ParamLimits

0x2f9d,	// (0x0002f419) main_mp3_pane_g5

0x2fab,	// (0x0002f427) main_mp3_pane_g6_ParamLimits

0x2fab,	// (0x0002f427) main_mp3_pane_g6

0x2fb8,	// (0x0002f434) main_mp3_pane_g7_ParamLimits

0x2fb8,	// (0x0002f434) main_mp3_pane_g7

0x2fc4,	// (0x0002f440) main_mp3_pane_g8_ParamLimits

0x2fc4,	// (0x0002f440) main_mp3_pane_g8

0xf76a,	// (0x0003bbe6) main_mp3_pane_g_ParamLimits

0xa511,	// (0x0003698d) main_mp3_pane_t2

0xa51f,	// (0x0003699b) main_mp3_pane_t3

0x2fde,	// (0x0002f45a) main_mp3_pane_t4

0x2fec,	// (0x0002f468) main_mp3_pane_t5

0x0005,

0xf77b,	// (0x0003bbf7) main_mp3_pane_t

0x2ffa,	// (0x0002f476) mup_progress_pane_cp01

0x61a4,	// (0x00032620) aid_zoom_text_secondary2

0x2df1,	// (0x0002f26d) list_cale_ev2_pane

0x2df9,	// (0x0002f275) scroll_pane_cp023_ParamLimits

0x529b,	// (0x00031717) field_cale_ev2_pane_ParamLimits

0x529b,	// (0x00031717) field_cale_ev2_pane

0x6490,	// (0x0003290c) field_cale_ev2_pane_g1_ParamLimits

0x6490,	// (0x0003290c) field_cale_ev2_pane_g1

0x649c,	// (0x00032918) field_cale_ev2_pane_g2_ParamLimits

0x649c,	// (0x00032918) field_cale_ev2_pane_g2

0x64b4,	// (0x00032930) field_cale_ev2_pane_g3_ParamLimits

0x64b4,	// (0x00032930) field_cale_ev2_pane_g3

0x0003,

0xf79c,	// (0x0003bc18) field_cale_ev2_pane_g_ParamLimits

0xf79c,	// (0x0003bc18) field_cale_ev2_pane_g

0x64d8,	// (0x00032954) field_cale_ev2_pane_t1_ParamLimits

0x64d8,	// (0x00032954) field_cale_ev2_pane_t1

0x64ef,	// (0x0003296b) field_cale_ev2_pane_t2_ParamLimits

0x64ef,	// (0x0003296b) field_cale_ev2_pane_t2

0x0001,

0xf7a5,	// (0x0003bc21) field_cale_ev2_pane_t_ParamLimits

0xf7a5,	// (0x0003bc21) field_cale_ev2_pane_t

0x95bc,	// (0x00035a38) main_postcard_pane_g5_ParamLimits

0x95bc,	// (0x00035a38) main_postcard_pane_g5

0x95c8,	// (0x00035a44) main_postcard_pane_g6_ParamLimits

0x95c8,	// (0x00035a44) main_postcard_pane_g6

0x7ed1,	// (0x0003434d) camera2_autofocus_pane_cp_ParamLimits

0x7ed1,	// (0x0003434d) camera2_autofocus_pane_cp

0xf0bd,	// (0x0003b539) main_mup3_pane

0xa634,	// (0x00036ab0) main_mup3_pane_g1_ParamLimits

0xa634,	// (0x00036ab0) main_mup3_pane_g1

0xa655,	// (0x00036ad1) main_mup3_pane_g2_ParamLimits

0xa655,	// (0x00036ad1) main_mup3_pane_g2

0xa6b8,	// (0x00036b34) main_mup3_pane_g3_ParamLimits

0xa6b8,	// (0x00036b34) main_mup3_pane_g3

0xa6f3,	// (0x00036b6f) main_mup3_pane_g4_ParamLimits

0xa6f3,	// (0x00036b6f) main_mup3_pane_g4

0xa72e,	// (0x00036baa) main_mup3_pane_g5_ParamLimits

0xa72e,	// (0x00036baa) main_mup3_pane_g5

0xa769,	// (0x00036be5) main_mup3_pane_g6_ParamLimits

0xa769,	// (0x00036be5) main_mup3_pane_g6

0x3076,	// (0x0002f4f2) main_mup3_pane_g7_ParamLimits

0x3076,	// (0x0002f4f2) main_mup3_pane_g7

0x0007,

0xf7b5,	// (0x0003bc31) main_mup3_pane_g_ParamLimits

0xf7b5,	// (0x0003bc31) main_mup3_pane_g

0xa7d7,	// (0x00036c53) main_mup3_pane_t1_ParamLimits

0xa7d7,	// (0x00036c53) main_mup3_pane_t1

0xa83a,	// (0x00036cb6) main_mup3_pane_t2_ParamLimits

0xa83a,	// (0x00036cb6) main_mup3_pane_t2

0xa8f7,	// (0x00036d73) main_mup3_pane_t4_ParamLimits

0xa8f7,	// (0x00036d73) main_mup3_pane_t4

0xa93d,	// (0x00036db9) main_mup3_pane_t5_ParamLimits

0xa93d,	// (0x00036db9) main_mup3_pane_t5

0xa9e1,	// (0x00036e5d) main_mup3_pane_t6_ParamLimits

0xa9e1,	// (0x00036e5d) main_mup3_pane_t6

0x0005,

0xf7c6,	// (0x0003bc42) main_mup3_pane_t_ParamLimits

0xf7c6,	// (0x0003bc42) main_mup3_pane_t

0xaa89,	// (0x00036f05) mup3_progress_pane_ParamLimits

0xaa89,	// (0x00036f05) mup3_progress_pane

0xaacf,	// (0x00036f4b) popup_mup3_control_window_ParamLimits

0xaacf,	// (0x00036f4b) popup_mup3_control_window

0x3084,	// (0x0002f500) popup_mup3_text_window

0xaae8,	// (0x00036f64) mup3_progress_pane_t1

0xaafe,	// (0x00036f7a) mup3_progress_pane_t2

0x308c,	// (0x0002f508) mup3_progress_pane_t3

0x0002,

0xf7d3,	// (0x0003bc4f) mup3_progress_pane_t

0x30a3,	// (0x0002f51f) mup_progress_pane_cp03

0xe40e,	// (0x0003a88a) bg_tb_trans_pane_cp04

0xab14,	// (0x00036f90) mup3_volume_pane

0xab1c,	// (0x00036f98) popup_mup3_control_window_g1

0xab25,	// (0x00036fa1) mup3_volume_pane_g1

0xab2e,	// (0x00036faa) mup3_volume_pane_g2

0xab37,	// (0x00036fb3) mup3_volume_pane_g3

0x0002,

0xf7da,	// (0x0003bc56) mup3_volume_pane_g

0xe40e,	// (0x0003a88a) bg_tb_trans_pane_cp03

0x30b3,	// (0x0002f52f) popup_mup3_text_window_g1

0x30bb,	// (0x0002f537) popup_mup3_text_window_t1

0xebdc,	// (0x0003b058) list_calc_item_pane_g1_ParamLimits

0x2a85,	// (0x0002ef01) mup_volume_pane_cp_g1

0xa5de,	// (0x00036a5a) main_touch_calib_pane_t3

0xa5f0,	// (0x00036a6c) main_touch_calib_pane_t4

0xa602,	// (0x00036a7e) main_touch_calib_pane_t5

0xe418,	// (0x0003a894) aid_cell_size_toolbar2

0xe420,	// (0x0003a89c) aid_popup3_width_pane

0x619c,	// (0x00032618) aid_zoom_text_msg_primary

0x7ebb,	// (0x00034337) vorec_t7

0xeba0,	// (0x0003b01c) bg_calc_paper_pane_g1_ParamLimits

0xebac,	// (0x0003b028) bg_calc_paper_pane_g2_ParamLimits

0xebb8,	// (0x0003b034) bg_calc_paper_pane_g3_ParamLimits

0xebc4,	// (0x0003b040) bg_calc_paper_pane_g4_ParamLimits

0xebd0,	// (0x0003b04c) bg_calc_paper_pane_g5_ParamLimits

0x7894,	// (0x00033d10) bg_calc_paper_pane_g6_ParamLimits

0x78a3,	// (0x00033d1f) bg_calc_paper_pane_g7_ParamLimits

0x78b2,	// (0x00033d2e) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0003b5f6) bg_calc_paper_pane_g_ParamLimits

0x78c1,	// (0x00033d3d) calc_bg_paper_pane_g9_ParamLimits

0x7fb1,	// (0x0003442d) image_qvga_pane_ParamLimits

0x7fb1,	// (0x0003442d) image_qvga_pane

0xeac5,	// (0x0003af41) bg_popup_sub_pane_cp04_ParamLimits

0x164d,	// (0x0002dac9) popup_mup_playback_window_g1_ParamLimits

0x1659,	// (0x0002dad5) popup_mup_playback_window_t1_ParamLimits

0x166e,	// (0x0002daea) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0003b982) popup_mup_playback_window_t_ParamLimits

0xa106,	// (0x00036582) main_mup2_pane_g3_ParamLimits

0xa106,	// (0x00036582) main_mup2_pane_g3

0x8241,	// (0x000346bd) popup_toolbar_window_cp04

0x1a4f,	// (0x0002decb) popup_call2_audio_second_window_g3_ParamLimits

0x1a4f,	// (0x0002decb) popup_call2_audio_second_window_g3

0x1e59,	// (0x0002e2d5) popup_call2_audio_first_window_g4_ParamLimits

0x1e59,	// (0x0002e2d5) popup_call2_audio_first_window_g4

0x24d8,	// (0x0002e954) popup_call2_audio_in_window_g4_ParamLimits

0x24d8,	// (0x0002e954) popup_call2_audio_in_window_g4

0x96b3,	// (0x00035b2f) aid_area_sk_bg_cut_ParamLimits

0x96b3,	// (0x00035b2f) aid_area_sk_bg_cut

0x1683,	// (0x0002daff) aid_area_sk_bg_cut_2_ParamLimits

0x1683,	// (0x0002daff) aid_area_sk_bg_cut_2

0xa44e,	// (0x000368ca) aid_placing_details_win

0xa456,	// (0x000368d2) aid_placing_details_win_2

0x2eaf,	// (0x0002f32b) camera2_autofocus_pane_g1_ParamLimits

0x74bf,	// (0x0003393b) popup_fixed_preview_cale_window_ParamLimits

0x74bf,	// (0x0003393b) popup_fixed_preview_cale_window

0x13af,	// (0x0002d82b) navi_slider_pane_g3

0x13a6,	// (0x0002d822) navi_slider_pane_g4

0x139d,	// (0x0002d819) navi_slider_pane_g5

0x13af,	// (0x0002d82b) navi_slider_pane_g6

0x90cb,	// (0x00035547) navi_slider_pane_g7

0x14d9,	// (0x0002d955) mup_scale_pane_g3

0x14e2,	// (0x0002d95e) mup_scale_pane_g4

0x14eb,	// (0x0002d967) mup_scale_pane_g5

0x948e,	// (0x0003590a) mup_scale_pane_g6

0x9497,	// (0x00035913) mup_scale_pane_g7

0x13af,	// (0x0002d82b) cams2_slider_pane_g3

0x2b3a,	// (0x0002efb6) cams2_slider_pane_g4

0xa3bb,	// (0x00036837) cams2_slider_pane_g5

0x13af,	// (0x0002d82b) cams2_slider_pane_g6

0xa3c3,	// (0x0003683f) cams2_slider_pane_g7

0x2d6e,	// (0x0002f1ea) camera2_autofocus_pane_cp_g1

0x30c9,	// (0x0002f545) bg_popup_preview_window_pane_cp02_ParamLimits

0x30c9,	// (0x0002f545) bg_popup_preview_window_pane_cp02

0xab40,	// (0x00036fbc) list_fp_cale_pane_ParamLimits

0xab40,	// (0x00036fbc) list_fp_cale_pane

0x30d5,	// (0x0002f551) popup_fixed_preview_cale_window_t1_ParamLimits

0x30d5,	// (0x0002f551) popup_fixed_preview_cale_window_t1

0xab50,	// (0x00036fcc) popup_fixed_preview_cale_window_t2_ParamLimits

0xab50,	// (0x00036fcc) popup_fixed_preview_cale_window_t2

0xab65,	// (0x00036fe1) popup_fixed_preview_cale_window_t3_ParamLimits

0xab65,	// (0x00036fe1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7e1,	// (0x0003bc5d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7e1,	// (0x0003bc5d) popup_fixed_preview_cale_window_t

0xab77,	// (0x00036ff3) list_single_fp_cale_pane_ParamLimits

0xab77,	// (0x00036ff3) list_single_fp_cale_pane

0xab84,	// (0x00037000) list_single_fp_cale_pane_g1_ParamLimits

0xab84,	// (0x00037000) list_single_fp_cale_pane_g1

0x30f3,	// (0x0002f56f) list_single_fp_cale_pane_g2_ParamLimits

0x30f3,	// (0x0002f56f) list_single_fp_cale_pane_g2

0x0002,

0xf7e8,	// (0x0003bc64) list_single_fp_cale_pane_g_ParamLimits

0xf7e8,	// (0x0003bc64) list_single_fp_cale_pane_g

0xab90,	// (0x0003700c) list_single_fp_cale_pane_t1_ParamLimits

0xab90,	// (0x0003700c) list_single_fp_cale_pane_t1

0xaba2,	// (0x0003701e) list_single_fp_cale_pane_t2_ParamLimits

0xaba2,	// (0x0003701e) list_single_fp_cale_pane_t2

0x0001,

0xf7ef,	// (0x0003bc6b) list_single_fp_cale_pane_t_ParamLimits

0xf7ef,	// (0x0003bc6b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe40e,	// (0x0003a88a) main_dialer_pane

0xabd5,	// (0x00037051) aid_cell_size_keypad

0xabdf,	// (0x0003705b) dialer_ne_pane

0xabe7,	// (0x00037063) grid_dialer_command_1_pane

0xabef,	// (0x0003706b) grid_dialer_command_2_pane

0xabf7,	// (0x00037073) grid_dialer_keypad_pane

0xac07,	// (0x00037083) bg_popup_call_pane_cp06_ParamLimits

0xac07,	// (0x00037083) bg_popup_call_pane_cp06

0xac13,	// (0x0003708f) dialer_ne_clear_pane_ParamLimits

0xac13,	// (0x0003708f) dialer_ne_clear_pane

0x310c,	// (0x0002f588) dialer_ne_pane_g1

0x3114,	// (0x0002f590) dialer_ne_pane_t1_ParamLimits

0x3114,	// (0x0002f590) dialer_ne_pane_t1

0xac1f,	// (0x0003709b) dialer_ne_pane_t2_ParamLimits

0xac1f,	// (0x0003709b) dialer_ne_pane_t2

0xac3c,	// (0x000370b8) dialer_ne_pane_t3_ParamLimits

0xac3c,	// (0x000370b8) dialer_ne_pane_t3

0x0002,

0xf7f4,	// (0x0003bc70) dialer_ne_pane_t_ParamLimits

0xf7f4,	// (0x0003bc70) dialer_ne_pane_t

0xac60,	// (0x000370dc) dialer_ne_pane_t3_copy1_ParamLimits

0xac60,	// (0x000370dc) dialer_ne_pane_t3_copy1

0xac84,	// (0x00037100) cell_dialer_keypad_pane_ParamLimits

0xac84,	// (0x00037100) cell_dialer_keypad_pane

0xac99,	// (0x00037115) cell_dialer_command_1_pane_ParamLimits

0xac99,	// (0x00037115) cell_dialer_command_1_pane

0xacaf,	// (0x0003712b) cell_dialer_command_2_pane_ParamLimits

0xacaf,	// (0x0003712b) cell_dialer_command_2_pane

0x3126,	// (0x0002f5a2) bg_button_pane_cp02_ParamLimits

0x3126,	// (0x0002f5a2) bg_button_pane_cp02

0xacbe,	// (0x0003713a) cell_dialer_keypad_pane_g1_ParamLimits

0xacbe,	// (0x0003713a) cell_dialer_keypad_pane_g1

0x3126,	// (0x0002f5a2) bg_button_pane_cp03_ParamLimits

0x3126,	// (0x0002f5a2) bg_button_pane_cp03

0xacd3,	// (0x0003714f) cell_dialer_command_1_pane_g1_ParamLimits

0xacd3,	// (0x0003714f) cell_dialer_command_1_pane_g1

0x3132,	// (0x0002f5ae) bg_button_pane_cp04

0xace6,	// (0x00037162) cell_dialer_command_2_pane_g1

0x1383,	// (0x0002d7ff) bg_button_pane_cp06

0x313a,	// (0x0002f5b6) dialer_ne_clear_pane_g1

0x12a0,	// (0x0002d71c) navi_pane_g2

0x9073,	// (0x000354ef) navi_pane_g3

0x0002,

0xf409,	// (0x0003b885) navi_pane_g

0x1322,	// (0x0002d79e) navi_pane_mv_g2

0x134a,	// (0x0002d7c6) navi_pane_mv_g5

0x9098,	// (0x00035514) navi_pane_mv_t1

0xeb94,	// (0x0003b010) main_clock2_pane

0xad17,	// (0x00037193) main_clock2_list_pane_ParamLimits

0xad17,	// (0x00037193) main_clock2_list_pane

0xad3d,	// (0x000371b9) main_clock2_pane_t1_ParamLimits

0xad3d,	// (0x000371b9) main_clock2_pane_t1

0xad67,	// (0x000371e3) main_clock2_pane_t2_ParamLimits

0xad67,	// (0x000371e3) main_clock2_pane_t2

0x0004,

0xf7fb,	// (0x0003bc77) main_clock2_pane_t_ParamLimits

0xf7fb,	// (0x0003bc77) main_clock2_pane_t

0xadca,	// (0x00037246) popup_clock_analogue_window_cp03_ParamLimits

0xadca,	// (0x00037246) popup_clock_analogue_window_cp03

0xade6,	// (0x00037262) popup_clock_digital_window_cp02_ParamLimits

0xade6,	// (0x00037262) popup_clock_digital_window_cp02

0xae34,	// (0x000372b0) main_clock2_list_single_pane_ParamLimits

0xae34,	// (0x000372b0) main_clock2_list_single_pane

0x1383,	// (0x0002d7ff) list_highlight_pane_cp05

0x3142,	// (0x0002f5be) main_clock2_list_single_pane_t1

0x8241,	// (0x000346bd) popup_toolbar_window_cp04_ParamLimits

0xa4ac,	// (0x00036928) camera2_autofocus_pane_g2_ParamLimits

0xa4ac,	// (0x00036928) camera2_autofocus_pane_g2

0xa4b8,	// (0x00036934) camera2_autofocus_pane_g3_ParamLimits

0xa4b8,	// (0x00036934) camera2_autofocus_pane_g3

0xa4c4,	// (0x00036940) camera2_autofocus_pane_g4_ParamLimits

0xa4c4,	// (0x00036940) camera2_autofocus_pane_g4

0xa4d0,	// (0x0003694c) camera2_autofocus_pane_g5_ParamLimits

0xa4d0,	// (0x0003694c) camera2_autofocus_pane_g5

0x0004,

0xf744,	// (0x0003bbc0) camera2_autofocus_pane_g_ParamLimits

0xf744,	// (0x0003bbc0) camera2_autofocus_pane_g

0xa614,	// (0x00036a90) camera2_autofocus_pane_cp_g2

0xa61c,	// (0x00036a98) camera2_autofocus_pane_cp_g3

0xa624,	// (0x00036aa0) camera2_autofocus_pane_cp_g4

0xa62c,	// (0x00036aa8) camera2_autofocus_pane_cp_g5

0x0004,

0xf7aa,	// (0x0003bc26) camera2_autofocus_pane_cp_g

0xabff,	// (0x0003707b) popup_dialer_spcha_window

0xe40e,	// (0x0003a88a) bg_popup_sub_pane_cp07

0x3150,	// (0x0002f5cc) list_spcha_pane

0x3158,	// (0x0002f5d4) list_single_spcha_pane_ParamLimits

0x3158,	// (0x0002f5d4) list_single_spcha_pane

0xe40e,	// (0x0003a88a) list_highlight_pane_cp06

0x3169,	// (0x0002f5e5) list_single_spcha_pane_t1

0x2282,	// (0x0002e6fe) popup_call2_audio_out_window_g4_ParamLimits

0x2282,	// (0x0002e6fe) popup_call2_audio_out_window_g4

0xe40e,	// (0x0003a88a) main_imed2_pane

0x289f,	// (0x0002ed1b) popup_imed_adjust2_window

0x9bf2,	// (0x0003606e) popup_imed_trans_window_ParamLimits

0x9bf2,	// (0x0003606e) popup_imed_trans_window

0x2bb2,	// (0x0002f02e) popup_blid_sat_info2_window_t1

0x2bc0,	// (0x0002f03c) popup_blid_sat_info2_window_t2

0x000a,

0xf6d9,	// (0x0003bb55) popup_blid_sat_info2_window_t

0xaedc,	// (0x00037358) aid_size_cell_colour_35

0xaef3,	// (0x0003736f) aid_size_cell_colour_112

0xaf0a,	// (0x00037386) aid_size_cell_effect

0xf0bd,	// (0x0003b539) bg_tb_trans_pane_cp02

0x0e02,	// (0x0002d27e) heading_imed_pane

0xaf24,	// (0x000373a0) listscroll_imed_pane

0x3177,	// (0x0002f5f3) heading_imed_pane_g1

0x317f,	// (0x0002f5fb) heading_imed_pane_t1

0x318d,	// (0x0002f609) grid_imed_colour_35_pane_ParamLimits

0x318d,	// (0x0002f609) grid_imed_colour_35_pane

0xaf30,	// (0x000373ac) grid_imed_effect_pane

0x31a0,	// (0x0002f61c) list_imed_aspect_pane

0xaf3c,	// (0x000373b8) scroll_pane_cp027_ParamLimits

0xaf3c,	// (0x000373b8) scroll_pane_cp027

0xaf48,	// (0x000373c4) cell_imed_effect_pane_ParamLimits

0xaf48,	// (0x000373c4) cell_imed_effect_pane

0x31a8,	// (0x0002f624) cell_imed_colour_pane_ParamLimits

0x31a8,	// (0x0002f624) cell_imed_colour_pane

0x31e2,	// (0x0002f65e) cell_imed_colour_pane_g1_ParamLimits

0x31e2,	// (0x0002f65e) cell_imed_colour_pane_g1

0x31f3,	// (0x0002f66f) hgihlgiht_grid_pane_cp016_ParamLimits

0x31f3,	// (0x0002f66f) hgihlgiht_grid_pane_cp016

0xaf5e,	// (0x000373da) cell_imed_effect_pane_g1

0xaf66,	// (0x000373e2) grid_highlight_pane_cp017

0x3204,	// (0x0002f680) list_imed_single_pane_ParamLimits

0x3204,	// (0x0002f680) list_imed_single_pane

0xe40e,	// (0x0003a88a) list_highlight_pane_cp07

0x3217,	// (0x0002f693) list_imed_aspect_pane_comp1_t1

0x2879,	// (0x0002ecf5) bg_tb_trans_pane_cp05

0x3237,	// (0x0002f6b3) popup_imed_adjust2_window_g1

0x325e,	// (0x0002f6da) popup_imed_adjust2_window_t1

0x3276,	// (0x0002f6f2) slider_imed_adjust_pane

0x328a,	// (0x0002f706) slider_imed_adjust_pane_g1

0x329a,	// (0x0002f716) slider_imed_adjust_pane_g2

0x32aa,	// (0x0002f726) slider_imed_adjust_pane_g3

0x32bb,	// (0x0002f737) slider_imed_adjust_pane_g4

0x0003,

0xf818,	// (0x0003bc94) slider_imed_adjust_pane_g

0xaf6f,	// (0x000373eb) aid_size_cell_clipart2

0xaf7b,	// (0x000373f7) grid_imed_clipart_pane

0x32cc,	// (0x0002f748) scroll_pane_cp031

0xaf85,	// (0x00037401) cell_imed_clipart_pane_ParamLimits

0xaf85,	// (0x00037401) cell_imed_clipart_pane

0xaf9c,	// (0x00037418) cell_imed_clipart_pane_g1

0xe40e,	// (0x0003a88a) grid_highlight_pane_cp014

0xad23,	// (0x0003719f) main_clock2_pane_g1_ParamLimits

0xad23,	// (0x0003719f) main_clock2_pane_g1

0xadfe,	// (0x0003727a) aid_call2_pane_cp10

0xae0a,	// (0x00037286) aid_call_pane_cp10

0x1250,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g1

0x1250,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g2

0xae16,	// (0x00037292) popup_clock_analogue_window_cp10_g3

0xae16,	// (0x00037292) popup_clock_analogue_window_cp10_g4

0x1250,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf806,	// (0x0003bc82) popup_clock_analogue_window_cp10_g

0xae22,	// (0x0003729e) popup_clock_analogue_window_cp10_t1

0xae46,	// (0x000372c2) clock_digital_number_pane_cp10_ParamLimits

0xae46,	// (0x000372c2) clock_digital_number_pane_cp10

0xae5e,	// (0x000372da) clock_digital_number_pane_cp11_ParamLimits

0xae5e,	// (0x000372da) clock_digital_number_pane_cp11

0xae76,	// (0x000372f2) clock_digital_number_pane_cp12_ParamLimits

0xae76,	// (0x000372f2) clock_digital_number_pane_cp12

0xae8e,	// (0x0003730a) clock_digital_number_pane_cp13_ParamLimits

0xae8e,	// (0x0003730a) clock_digital_number_pane_cp13

0xaea6,	// (0x00037322) clock_digital_separator_pane_cp10_ParamLimits

0xaea6,	// (0x00037322) clock_digital_separator_pane_cp10

0xaebe,	// (0x0003733a) popup_clock_digital_window_cp02_t1_ParamLimits

0xaebe,	// (0x0003733a) popup_clock_digital_window_cp02_t1

0xeabd,	// (0x0003af39) clock_digital_number_pane_cp10_g1

0xeabd,	// (0x0003af39) clock_digital_number_pane_cp10_g2

0x0001,

0xf821,	// (0x0003bc9d) clock_digital_number_pane_cp10_g

0xeabd,	// (0x0003af39) clock_digital_separator_pane_cp10_g1

0xeabd,	// (0x0003af39) clock_digital_separator_pane_g2_cp10

0x1353,	// (0x0002d7cf) navi_pane_vded_g4

0x135c,	// (0x0002d7d8) navi_pane_vded_g5

0x1365,	// (0x0002d7e1) navi_pane_vded_t1

0xe40e,	// (0x0003a88a) main_vded_pane

0xafa5,	// (0x00037421) main_vded_pane_g1

0xafad,	// (0x00037429) main_vded_pane_g2

0xafb5,	// (0x00037431) main_vded_pane_g3

0x0002,

0xf826,	// (0x0003bca2) main_vded_pane_g

0xafbd,	// (0x00037439) main_vded_pane_t1

0xafcb,	// (0x00037447) main_vded_pane_t2

0x0001,

0xf82d,	// (0x0003bca9) main_vded_pane_t

0xafd9,	// (0x00037455) vded_slider_pane

0xafe1,	// (0x0003745d) vded_video_pane

0x32d4,	// (0x0002f750) vded_video_pane_g1

0xafe9,	// (0x00037465) vded_video_pane_g2

0x2d6e,	// (0x0002f1ea) vded_video_pane_g3

0x0002,

0xf832,	// (0x0003bcae) vded_video_pane_g

0x32de,	// (0x0002f75a) vded_slider_pane_g1

0x2a85,	// (0x0002ef01) vded_slider_pane_g2

0x32e7,	// (0x0002f763) vded_slider_pane_g3

0x32f0,	// (0x0002f76c) vded_slider_pane_g4

0x32f9,	// (0x0002f775) vded_slider_pane_g5

0x0004,

0xf839,	// (0x0003bcb5) vded_slider_pane_g

0xaac3,	// (0x00036f3f) mup3_rocker_pane_ParamLimits

0xaac3,	// (0x00036f3f) mup3_rocker_pane

0xaff2,	// (0x0003746e) mup3_control_keys_pane_g1

0xaffa,	// (0x00037476) mup3_control_keys_pane_g2

0xb002,	// (0x0003747e) mup3_control_keys_pane_g3

0xb00a,	// (0x00037486) mup3_control_keys_pane_g4

0x0003,

0xf844,	// (0x0003bcc0) mup3_control_keys_pane_g

0x74db,	// (0x00033957) popup_toolbar2_fixed_window_cp01_ParamLimits

0x74db,	// (0x00033957) popup_toolbar2_fixed_window_cp01

0xaadb,	// (0x00036f57) popup_toolbar2_fixed_window_cp02_ParamLimits

0xaadb,	// (0x00036f57) popup_toolbar2_fixed_window_cp02

0x1bc1,	// (0x0002e03d) popup_call2_audio_second_window_t4_ParamLimits

0x1bc1,	// (0x0002e03d) popup_call2_audio_second_window_t4

0x20ef,	// (0x0002e56b) popup_call2_audio_first_window_t6_ParamLimits

0x20ef,	// (0x0002e56b) popup_call2_audio_first_window_t6

0x2385,	// (0x0002e801) popup_call2_audio_out_window_t6_ParamLimits

0x2385,	// (0x0002e801) popup_call2_audio_out_window_t6

0xe40e,	// (0x0003a88a) main_vitu_pane

0xb01a,	// (0x00037496) aid_size_cell_itu_ParamLimits

0xb01a,	// (0x00037496) aid_size_cell_itu

0x7503,	// (0x0003397f) bg_popup_window_pane_cp08_ParamLimits

0x7503,	// (0x0003397f) bg_popup_window_pane_cp08

0xb028,	// (0x000374a4) field_vitu_entry_pane_ParamLimits

0xb028,	// (0x000374a4) field_vitu_entry_pane

0xb035,	// (0x000374b1) grid_vitu_function_pane_ParamLimits

0xb035,	// (0x000374b1) grid_vitu_function_pane

0xb041,	// (0x000374bd) grid_vitu_itu_pane_ParamLimits

0xb041,	// (0x000374bd) grid_vitu_itu_pane

0xb04d,	// (0x000374c9) cell_vitu_itu_pane_ParamLimits

0xb04d,	// (0x000374c9) cell_vitu_itu_pane

0xb062,	// (0x000374de) cell_vitu_function_pane_ParamLimits

0xb062,	// (0x000374de) cell_vitu_function_pane

0xf0bd,	// (0x0003b539) bg_popup_sub_pane_cp08_ParamLimits

0xf0bd,	// (0x0003b539) bg_popup_sub_pane_cp08

0xb074,	// (0x000374f0) field_vitu_entry_pane_t1_ParamLimits

0xb074,	// (0x000374f0) field_vitu_entry_pane_t1

0x331a,	// (0x0002f796) field_vitu_entry_pane_t2_ParamLimits

0x331a,	// (0x0002f796) field_vitu_entry_pane_t2

0x0001,

0xf852,	// (0x0003bcce) field_vitu_entry_pane_t_ParamLimits

0xf852,	// (0x0003bcce) field_vitu_entry_pane_t

0x3337,	// (0x0002f7b3) bg_button_pane_cp05_ParamLimits

0x3337,	// (0x0002f7b3) bg_button_pane_cp05

0xb08d,	// (0x00037509) cell_vitu_itu_pane_g1

0xb0a5,	// (0x00037521) cell_vitu_itu_pane_t1_ParamLimits

0xb0a5,	// (0x00037521) cell_vitu_itu_pane_t1

0xb0b7,	// (0x00037533) cell_vitu_itu_pane_t2_ParamLimits

0xb0b7,	// (0x00037533) cell_vitu_itu_pane_t2

0x0002,

0xf857,	// (0x0003bcd3) cell_vitu_itu_pane_t_ParamLimits

0xf857,	// (0x0003bcd3) cell_vitu_itu_pane_t

0x3345,	// (0x0002f7c1) bg_button_pane_cp07

0xb0ec,	// (0x00037568) cell_vitu_function_pane_g1

0x774e,	// (0x00033bca) main_calc_pane_g1

0x7322,	// (0x0003379e) aid_visual_content_pane

0xe40e,	// (0x0003a88a) main_vradio_pane

0xb0f5,	// (0x00037571) main_vradio_pane_g1_ParamLimits

0xb0f5,	// (0x00037571) main_vradio_pane_g1

0x334f,	// (0x0002f7cb) main_vradio_pane_g2_ParamLimits

0x334f,	// (0x0002f7cb) main_vradio_pane_g2

0x0001,

0xf85e,	// (0x0003bcda) main_vradio_pane_g_ParamLimits

0xf85e,	// (0x0003bcda) main_vradio_pane_g

0xb103,	// (0x0003757f) main_vradio_pane_t1_ParamLimits

0xb103,	// (0x0003757f) main_vradio_pane_t1

0xb115,	// (0x00037591) main_vradio_pane_t2_ParamLimits

0xb115,	// (0x00037591) main_vradio_pane_t2

0x335c,	// (0x0002f7d8) main_vradio_pane_t3_ParamLimits

0x335c,	// (0x0002f7d8) main_vradio_pane_t3

0x0002,

0xf863,	// (0x0003bcdf) main_vradio_pane_t_ParamLimits

0xf863,	// (0x0003bcdf) main_vradio_pane_t

0xb127,	// (0x000375a3) vradio_rocker_control_pane_ParamLimits

0xb127,	// (0x000375a3) vradio_rocker_control_pane

0xb133,	// (0x000375af) vradio_station_info_pane_ParamLimits

0xb133,	// (0x000375af) vradio_station_info_pane

0x336e,	// (0x0002f7ea) vradio_frequency_info_pane_ParamLimits

0x336e,	// (0x0002f7ea) vradio_frequency_info_pane

0x2d6e,	// (0x0002f1ea) vradio_station_info_pane_g1

0x337d,	// (0x0002f7f9) vradio_station_info_pane_t1_ParamLimits

0x337d,	// (0x0002f7f9) vradio_station_info_pane_t1

0x339f,	// (0x0002f81b) vradio_station_info_pane_t2_ParamLimits

0x339f,	// (0x0002f81b) vradio_station_info_pane_t2

0x0001,

0xf86a,	// (0x0003bce6) vradio_station_info_pane_t_ParamLimits

0xf86a,	// (0x0003bce6) vradio_station_info_pane_t

0x33b1,	// (0x0002f82d) vradio_tuning_pane

0x33b9,	// (0x0002f835) vradio_rocker_control_pane_g1

0x33c1,	// (0x0002f83d) vradio_rocker_control_pane_g2

0x33c9,	// (0x0002f845) vradio_rocker_control_pane_g3

0x33d1,	// (0x0002f84d) vradio_rocker_control_pane_g4

0x33d9,	// (0x0002f855) vradio_rocker_control_pane_g5

0x0004,

0xf86f,	// (0x0003bceb) vradio_rocker_control_pane_g

0xb140,	// (0x000375bc) vradio_frequency_info_pane_g1

0x33e1,	// (0x0002f85d) vradio_frequency_info_pane_t1_ParamLimits

0x33e1,	// (0x0002f85d) vradio_frequency_info_pane_t1

0xb148,	// (0x000375c4) vradio_tuning_pane_g1

0xb151,	// (0x000375cd) vradio_tuning_pane_t1

0xe430,	// (0x0003a8ac) area_side_right_pane_ParamLimits

0xe430,	// (0x0003a8ac) area_side_right_pane

0x2840,	// (0x0002ecbc) status_small_pane_g1

0x2848,	// (0x0002ecc4) status_small_pane_g2

0x2851,	// (0x0002eccd) status_small_pane_g3

0x285a,	// (0x0002ecd6) status_small_pane_g4

0x0003,

0xf62f,	// (0x0003baab) status_small_pane_g

0x2863,	// (0x0002ecdf) status_small_pane_t1

0xe40e,	// (0x0003a88a) main_video3_pane

0x33f5,	// (0x0002f871) cams_zoom_vslider_pane

0x33fd,	// (0x0002f879) image3_wide_pane_ParamLimits

0x33fd,	// (0x0002f879) image3_wide_pane

0x3417,	// (0x0002f893) image3_wide_small_pane

0x3421,	// (0x0002f89d) main_video3_pane_g1_ParamLimits

0x3421,	// (0x0002f89d) main_video3_pane_g1

0x343d,	// (0x0002f8b9) main_video3_pane_g2_ParamLimits

0x343d,	// (0x0002f8b9) main_video3_pane_g2

0x0001,

0xf87a,	// (0x0003bcf6) main_video3_pane_g_ParamLimits

0xf87a,	// (0x0003bcf6) main_video3_pane_g

0x3459,	// (0x0002f8d5) main_video3_pane_t1_ParamLimits

0x3459,	// (0x0002f8d5) main_video3_pane_t1

0x3484,	// (0x0002f900) main_video3_pane_t2_ParamLimits

0x3484,	// (0x0002f900) main_video3_pane_t2

0x34af,	// (0x0002f92b) main_video3_pane_t3_ParamLimits

0x34af,	// (0x0002f92b) main_video3_pane_t3

0x0002,

0xf87f,	// (0x0003bcfb) main_video3_pane_t_ParamLimits

0xf87f,	// (0x0003bcfb) main_video3_pane_t

0x34da,	// (0x0002f956) cams_zoom_vslider_pane_g1

0x34e3,	// (0x0002f95f) cams_zoom_vslider_pane_g2

0x0001,

0xf886,	// (0x0003bd02) cams_zoom_vslider_pane_g

0x34eb,	// (0x0002f967) small_slider_vertical_pane

0x2d6e,	// (0x0002f1ea) small_slider_vertical_pane_g1

0x2d6e,	// (0x0002f1ea) small_slider_vertical_pane_g2

0x34f3,	// (0x0002f96f) small_slider_vertical_pane_g3

0x0002,

0xf88b,	// (0x0003bd07) small_slider_vertical_pane_g

0xe40e,	// (0x0003a88a) main_hwr_training_pane

0x34fc,	// (0x0002f978) hwr_training_instruct_pane_ParamLimits

0x34fc,	// (0x0002f978) hwr_training_instruct_pane

0xb160,	// (0x000375dc) hwr_training_navi_pane_ParamLimits

0xb160,	// (0x000375dc) hwr_training_navi_pane

0xb174,	// (0x000375f0) hwr_training_write_pane_ParamLimits

0xb174,	// (0x000375f0) hwr_training_write_pane

0xe40e,	// (0x0003a88a) bg_frame_shadow_pane

0x352b,	// (0x0002f9a7) hwr_training_write_pane_g1

0x3533,	// (0x0002f9af) hwr_training_write_pane_g2

0x353b,	// (0x0002f9b7) hwr_training_write_pane_g3

0x3543,	// (0x0002f9bf) hwr_training_write_pane_g4

0x354b,	// (0x0002f9c7) hwr_training_write_pane_g5

0x3553,	// (0x0002f9cf) hwr_training_write_pane_g6

0x355b,	// (0x0002f9d7) hwr_training_write_pane_g7

0x0006,

0xf892,	// (0x0003bd0e) hwr_training_write_pane_g

0xb1a2,	// (0x0003761e) hwr_training_navi_pane_g1_ParamLimits

0xb1a2,	// (0x0003761e) hwr_training_navi_pane_g1

0xb1b4,	// (0x00037630) hwr_training_navi_pane_g2_ParamLimits

0xb1b4,	// (0x00037630) hwr_training_navi_pane_g2

0xb1c6,	// (0x00037642) hwr_training_navi_pane_g3_ParamLimits

0xb1c6,	// (0x00037642) hwr_training_navi_pane_g3

0xb1d6,	// (0x00037652) hwr_training_navi_pane_g4_ParamLimits

0xb1d6,	// (0x00037652) hwr_training_navi_pane_g4

0x0004,

0xf8a1,	// (0x0003bd1d) hwr_training_navi_pane_g_ParamLimits

0xf8a1,	// (0x0003bd1d) hwr_training_navi_pane_g

0xb1f0,	// (0x0003766c) hwr_training_navi_pane_t1

0xb1fe,	// (0x0003767a) list_single_hwr_training_instruct_pane_ParamLimits

0xb1fe,	// (0x0003767a) list_single_hwr_training_instruct_pane

0x35b2,	// (0x0002fa2e) list_single_hwr_training_instruct_pane_t1

0x2cae,	// (0x0002f12a) bg_frame_shadow_pane_g1

0x35c1,	// (0x0002fa3d) bg_frame_shadow_pane_g2

0x35c9,	// (0x0002fa45) bg_frame_shadow_pane_g3

0x35d1,	// (0x0002fa4d) bg_frame_shadow_pane_g4

0x35d9,	// (0x0002fa55) bg_frame_shadow_pane_g5

0x35e1,	// (0x0002fa5d) bg_frame_shadow_pane_g6

0x35e9,	// (0x0002fa65) bg_frame_shadow_pane_g7

0xec5f,	// (0x0003b0db) bg_frame_shadow_pane_g8

0x0007,

0xf8ac,	// (0x0003bd28) bg_frame_shadow_pane_g

0xe40e,	// (0x0003a88a) main_video_tele_dialer_pane

0xb216,	// (0x00037692) aid_size_cell_video_keypad_ParamLimits

0xb216,	// (0x00037692) aid_size_cell_video_keypad

0xb226,	// (0x000376a2) grid_video_dialer_keypad_pane_ParamLimits

0xb226,	// (0x000376a2) grid_video_dialer_keypad_pane

0xb256,	// (0x000376d2) video_down_pane_cp_ParamLimits

0xb256,	// (0x000376d2) video_down_pane_cp

0xb27e,	// (0x000376fa) cell_video_dialer_keypad_pane_ParamLimits

0xb27e,	// (0x000376fa) cell_video_dialer_keypad_pane

0x35f1,	// (0x0002fa6d) bg_button_pane_cp08_ParamLimits

0x35f1,	// (0x0002fa6d) bg_button_pane_cp08

0xb293,	// (0x0003770f) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb293,	// (0x0003770f) cell_video_dialer_keypad_pane_g1

0xaab7,	// (0x00036f33) mup3_rocker2_pane_ParamLimits

0xaab7,	// (0x00036f33) mup3_rocker2_pane

0x2d6e,	// (0x0002f1ea) mup3_rocker2_pane_g1

0x9b8c,	// (0x00036008) main_dialer2_pane

0xe40e,	// (0x0003a88a) main_mp4_pane

0xb2d2,	// (0x0003774e) main_mp4_pane_g1_ParamLimits

0xb2d2,	// (0x0003774e) main_mp4_pane_g1

0xb2e0,	// (0x0003775c) main_mp4_pane_g2_ParamLimits

0xb2e0,	// (0x0003775c) main_mp4_pane_g2

0xb2ee,	// (0x0003776a) main_mp4_pane_g3_ParamLimits

0xb2ee,	// (0x0003776a) main_mp4_pane_g3

0xb323,	// (0x0003779f) main_mp4_pane_g4_ParamLimits

0xb323,	// (0x0003779f) main_mp4_pane_g4

0xb351,	// (0x000377cd) main_mp4_pane_g5_ParamLimits

0xb351,	// (0x000377cd) main_mp4_pane_g5

0x0005,

0xf8cc,	// (0x0003bd48) main_mp4_pane_g_ParamLimits

0xf8cc,	// (0x0003bd48) main_mp4_pane_g

0xb3ad,	// (0x00037829) main_mp4_pane_t1_ParamLimits

0xb3ad,	// (0x00037829) main_mp4_pane_t1

0xb405,	// (0x00037881) main_mp4_pane_t2_ParamLimits

0xb405,	// (0x00037881) main_mp4_pane_t2

0x3747,	// (0x0002fbc3) main_mp4_pane_t3_ParamLimits

0x3747,	// (0x0002fbc3) main_mp4_pane_t3

0xb457,	// (0x000378d3) main_mp4_pane_t4_ParamLimits

0xb457,	// (0x000378d3) main_mp4_pane_t4

0x0003,

0xf8d9,	// (0x0003bd55) main_mp4_pane_t_ParamLimits

0xf8d9,	// (0x0003bd55) main_mp4_pane_t

0xb497,	// (0x00037913) mp4_progress_pane_ParamLimits

0xb497,	// (0x00037913) mp4_progress_pane

0xb4db,	// (0x00037957) mp4_rocker_pane_ParamLimits

0xb4db,	// (0x00037957) mp4_rocker_pane

0x3817,	// (0x0002fc93) mp4_progress_pane_t1

0x382e,	// (0x0002fcaa) mp4_progress_pane_t2

0x0001,

0xf8e2,	// (0x0003bd5e) mp4_progress_pane_t

0x3845,	// (0x0002fcc1) mup_progress_pane_cp04

0x2d6e,	// (0x0002f1ea) mp4_rocker_pane_g1

0xb4f9,	// (0x00037975) aid_cell_size_keypad2_ParamLimits

0xb4f9,	// (0x00037975) aid_cell_size_keypad2

0xb509,	// (0x00037985) dialer2_ne_pane_ParamLimits

0xb509,	// (0x00037985) dialer2_ne_pane

0xb515,	// (0x00037991) grid_dialer2_keypad_pane_ParamLimits

0xb515,	// (0x00037991) grid_dialer2_keypad_pane

0x42a6,	// (0x00030722) bg_popup_call_pane_cp07_ParamLimits

0x42a6,	// (0x00030722) bg_popup_call_pane_cp07

0xb521,	// (0x0003799d) dialer2_ne_pane_t1_ParamLimits

0xb521,	// (0x0003799d) dialer2_ne_pane_t1

0xb546,	// (0x000379c2) cell_dialer2_keypad_pane_ParamLimits

0xb546,	// (0x000379c2) cell_dialer2_keypad_pane

0x386d,	// (0x0002fce9) bg_button_pane_pane_cp04_ParamLimits

0x386d,	// (0x0002fce9) bg_button_pane_pane_cp04

0xb55b,	// (0x000379d7) cell_dialer2_keypad_pane_g1_ParamLimits

0xb55b,	// (0x000379d7) cell_dialer2_keypad_pane_g1

0x811d,	// (0x00034599) aid_placing_vt_set_content_ParamLimits

0x811d,	// (0x00034599) aid_placing_vt_set_content

0x8143,	// (0x000345bf) aid_placing_vt_set_title_ParamLimits

0x8143,	// (0x000345bf) aid_placing_vt_set_title

0xe40e,	// (0x0003a88a) main_image3_pane

0xb5cf,	// (0x00037a4b) area_side_right_pane_cp01_ParamLimits

0xb5cf,	// (0x00037a4b) area_side_right_pane_cp01

0x48ac,	// (0x00030d28) main_image3_pane_g1_ParamLimits

0x48ac,	// (0x00030d28) main_image3_pane_g1

0xb5fc,	// (0x00037a78) main_image3_pane_g2_ParamLimits

0xb5fc,	// (0x00037a78) main_image3_pane_g2

0xb613,	// (0x00037a8f) main_image3_pane_g3_ParamLimits

0xb613,	// (0x00037a8f) main_image3_pane_g3

0xb62a,	// (0x00037aa6) main_image3_pane_g4_ParamLimits

0xb62a,	// (0x00037aa6) main_image3_pane_g4

0x0003,

0xf8f1,	// (0x0003bd6d) main_image3_pane_g_ParamLimits

0xf8f1,	// (0x0003bd6d) main_image3_pane_g

0xb641,	// (0x00037abd) main_image3_pane_t1_ParamLimits

0xb641,	// (0x00037abd) main_image3_pane_t1

0xb666,	// (0x00037ae2) main_image3_pane_t2_ParamLimits

0xb666,	// (0x00037ae2) main_image3_pane_t2

0xb685,	// (0x00037b01) main_image3_pane_t3_ParamLimits

0xb685,	// (0x00037b01) main_image3_pane_t3

0x0003,

0xf8fa,	// (0x0003bd76) main_image3_pane_t_ParamLimits

0xf8fa,	// (0x0003bd76) main_image3_pane_t

0x7503,	// (0x0003397f) grid_sctrl_middle_pane_cp01_ParamLimits

0x7503,	// (0x0003397f) grid_sctrl_middle_pane_cp01

0xb6e0,	// (0x00037b5c) cell_sctrl_middle_pane_cp01_ParamLimits

0xb6e0,	// (0x00037b5c) cell_sctrl_middle_pane_cp01

0xb6f1,	// (0x00037b6d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb6f1,	// (0x00037b6d) cell_sctrl_middle_pane_cp01_g1

0xe40e,	// (0x0003a88a) main_call4_pane

0xb6fe,	// (0x00037b7a) aid_size_button_call4_ParamLimits

0xb6fe,	// (0x00037b7a) aid_size_button_call4

0xb728,	// (0x00037ba4) call4_windows_pane_ParamLimits

0xb728,	// (0x00037ba4) call4_windows_pane

0xb73c,	// (0x00037bb8) grid_call4_button_pane_ParamLimits

0xb73c,	// (0x00037bb8) grid_call4_button_pane

0x38c3,	// (0x0002fd3f) call4_windows_conf_pane

0xb756,	// (0x00037bd2) popup_call4_audio_first_window_ParamLimits

0xb756,	// (0x00037bd2) popup_call4_audio_first_window

0xb776,	// (0x00037bf2) popup_call4_audio_second_window_ParamLimits

0xb776,	// (0x00037bf2) popup_call4_audio_second_window

0x38f6,	// (0x0002fd72) popup_call4_audio_wait_window_ParamLimits

0x38f6,	// (0x0002fd72) popup_call4_audio_wait_window

0xb788,	// (0x00037c04) cell_call4_button_pane_ParamLimits

0xb788,	// (0x00037c04) cell_call4_button_pane

0xec09,	// (0x0003b085) bg_button_pane_cp09_ParamLimits

0xec09,	// (0x0003b085) bg_button_pane_cp09

0xb7ab,	// (0x00037c27) cell_call4_button_pane_g1_ParamLimits

0xb7ab,	// (0x00037c27) cell_call4_button_pane_g1

0xb7b8,	// (0x00037c34) cell_call4_button_pane_t1_ParamLimits

0xb7b8,	// (0x00037c34) cell_call4_button_pane_t1

0x393c,	// (0x0002fdb8) popup_call4_audio_conf_window_ParamLimits

0x393c,	// (0x0002fdb8) popup_call4_audio_conf_window

0xaae8,	// (0x00036f64) mup3_progress_pane_t1_ParamLimits

0xaafe,	// (0x00036f7a) mup3_progress_pane_t2_ParamLimits

0x308c,	// (0x0002f508) mup3_progress_pane_t3_ParamLimits

0xf7d3,	// (0x0003bc4f) mup3_progress_pane_t_ParamLimits

0x30a3,	// (0x0002f51f) mup_progress_pane_cp03_ParamLimits

0xb012,	// (0x0003748e) mup3_control_keys_pane_g4_copy1

0xb4c5,	// (0x00037941) mp4_rocker2_pane_ParamLimits

0xb4c5,	// (0x00037941) mp4_rocker2_pane

0x3958,	// (0x0002fdd4) mp4_rocker2_pane_g1

0x3950,	// (0x0002fdcc) mp4_rocker2_pane_g2

0xb7ca,	// (0x00037c46) mp4_rocker2_pane_g3

0xb7d2,	// (0x00037c4e) mp4_rocker2_pane_g4

0xb7da,	// (0x00037c56) mp4_rocker2_pane_g5

0x0004,

0xf903,	// (0x0003bd7f) mp4_rocker2_pane_g

0xe40e,	// (0x0003a88a) main_camera4_pane

0xe40e,	// (0x0003a88a) main_video4_pane

0xb232,	// (0x000376ae) main_video_tele_dialer_pane_t1_ParamLimits

0xb232,	// (0x000376ae) main_video_tele_dialer_pane_t1

0xb244,	// (0x000376c0) main_video_tele_dialer_pane_t2_ParamLimits

0xb244,	// (0x000376c0) main_video_tele_dialer_pane_t2

0x0001,

0xf8bd,	// (0x0003bd39) main_video_tele_dialer_pane_t_ParamLimits

0xf8bd,	// (0x0003bd39) main_video_tele_dialer_pane_t

0xb7f8,	// (0x00037c74) cam4_autofocus_pane_ParamLimits

0xb7f8,	// (0x00037c74) cam4_autofocus_pane

0xb80e,	// (0x00037c8a) cam4_image_uncrop_pane_ParamLimits

0xb80e,	// (0x00037c8a) cam4_image_uncrop_pane

0xb823,	// (0x00037c9f) cam4_indicators_pane_ParamLimits

0xb823,	// (0x00037c9f) cam4_indicators_pane

0xb83d,	// (0x00037cb9) main_camera4_pane_g1_ParamLimits

0xb83d,	// (0x00037cb9) main_camera4_pane_g1

0xb849,	// (0x00037cc5) main_camera4_pane_g2_ParamLimits

0xb849,	// (0x00037cc5) main_camera4_pane_g2

0xb849,	// (0x00037cc5) main_camera4_pane_g3_ParamLimits

0xb849,	// (0x00037cc5) main_camera4_pane_g3

0xb855,	// (0x00037cd1) main_camera4_pane_g4_ParamLimits

0xb855,	// (0x00037cd1) main_camera4_pane_g4

0xb861,	// (0x00037cdd) main_camera4_pane_g5_ParamLimits

0xb861,	// (0x00037cdd) main_camera4_pane_g5

0x0005,

0xf90e,	// (0x0003bd8a) main_camera4_pane_g_ParamLimits

0xf90e,	// (0x0003bd8a) main_camera4_pane_g

0xb87b,	// (0x00037cf7) main_camera4_pane_t1_ParamLimits

0xb87b,	// (0x00037cf7) main_camera4_pane_t1

0x2f9d,	// (0x0002f419) bg_tb_trans_pane_cp06

0xb8cb,	// (0x00037d47) cam4_indicators_pane_g1

0xb8db,	// (0x00037d57) cam4_indicators_pane_g2

0x0002,

0xf929,	// (0x0003bda5) cam4_indicators_pane_g

0xb8fb,	// (0x00037d77) cam4_indicators_pane_t1

0xb923,	// (0x00037d9f) main_video4_pane_g1_ParamLimits

0xb923,	// (0x00037d9f) main_video4_pane_g1

0xb849,	// (0x00037cc5) main_video4_pane_g2_ParamLimits

0xb849,	// (0x00037cc5) main_video4_pane_g2

0xb849,	// (0x00037cc5) main_video4_pane_g3_ParamLimits

0xb849,	// (0x00037cc5) main_video4_pane_g3

0xb855,	// (0x00037cd1) main_video4_pane_g4_ParamLimits

0xb855,	// (0x00037cd1) main_video4_pane_g4

0x0004,

0xf930,	// (0x0003bdac) main_video4_pane_g_ParamLimits

0xf930,	// (0x0003bdac) main_video4_pane_g

0xb937,	// (0x00037db3) vid4_indicators_pane_ParamLimits

0xb937,	// (0x00037db3) vid4_indicators_pane

0xb955,	// (0x00037dd1) video4_image_uncrop_cif_pane_ParamLimits

0xb955,	// (0x00037dd1) video4_image_uncrop_cif_pane

0xb962,	// (0x00037dde) video4_image_uncrop_nhd_pane_ParamLimits

0xb962,	// (0x00037dde) video4_image_uncrop_nhd_pane

0xb80e,	// (0x00037c8a) video4_image_uncrop_vga_pane_ParamLimits

0xb80e,	// (0x00037c8a) video4_image_uncrop_vga_pane

0xf0bd,	// (0x0003b539) bg_tb_trans_pane_cp07

0xb8cb,	// (0x00037d47) vid4_indicators_pane_g1

0xb96f,	// (0x00037deb) vid4_indicators_pane_g2

0xb97f,	// (0x00037dfb) vid4_indicators_pane_g3

0x0004,

0xf93b,	// (0x0003bdb7) vid4_indicators_pane_g

0xb9ac,	// (0x00037e28) vid4_indicators_pane_t1

0xb9c6,	// (0x00037e42) cam4_autofocus_pane_g1

0xb9ce,	// (0x00037e4a) cam4_autofocus_pane_g2

0xb9d6,	// (0x00037e52) cam4_autofocus_pane_g3

0x0002,

0xf946,	// (0x0003bdc2) cam4_autofocus_pane_g

0xb9de,	// (0x00037e5a) cam4_autofocus_pane_g3_copy1

0xb262,	// (0x000376de) video_down_pane_cp_t1

0xb270,	// (0x000376ec) video_down_pane_cp_t2

0x0001,

0xf8c2,	// (0x0003bd3e) video_down_pane_cp_t

0x7503,	// (0x0003397f) popup_vitu2_window_ParamLimits

0x7503,	// (0x0003397f) popup_vitu2_window

0xb9e6,	// (0x00037e62) aid_size_cell2_itu2_ParamLimits

0xb9e6,	// (0x00037e62) aid_size_cell2_itu2

0xba08,	// (0x00037e84) aid_size_cell_itu2_ParamLimits

0xba08,	// (0x00037e84) aid_size_cell_itu2

0x42a6,	// (0x00030722) bg_popup_window_pane_cp09_ParamLimits

0x42a6,	// (0x00030722) bg_popup_window_pane_cp09

0xba46,	// (0x00037ec2) field_vitu2_entry_pane_ParamLimits

0xba46,	// (0x00037ec2) field_vitu2_entry_pane

0xba5c,	// (0x00037ed8) grid_vitu2_function_pane_ParamLimits

0xba5c,	// (0x00037ed8) grid_vitu2_function_pane

0xba8e,	// (0x00037f0a) grid_vitu2_itu_pane_ParamLimits

0xba8e,	// (0x00037f0a) grid_vitu2_itu_pane

0xbae4,	// (0x00037f60) cell_vitu2_itu_pane_ParamLimits

0xbae4,	// (0x00037f60) cell_vitu2_itu_pane

0xbaf9,	// (0x00037f75) cell_vitu2_function_pane_ParamLimits

0xbaf9,	// (0x00037f75) cell_vitu2_function_pane

0x3a08,	// (0x0002fe84) bg_popup_call_pane_cp08_ParamLimits

0x3a08,	// (0x0002fe84) bg_popup_call_pane_cp08

0x3a21,	// (0x0002fe9d) field_vitu2_entry_pane_g1

0x3a2d,	// (0x0002fea9) field_vitu2_entry_pane_g2

0x0002,

0xf94d,	// (0x0003bdc9) field_vitu2_entry_pane_g

0x6504,	// (0x00032980) field_vitu2_entry_pane_t1_ParamLimits

0x6504,	// (0x00032980) field_vitu2_entry_pane_t1

0x6520,	// (0x0003299c) field_vitu2_entry_pane_t2_ParamLimits

0x6520,	// (0x0003299c) field_vitu2_entry_pane_t2

0x0001,

0xf954,	// (0x0003bdd0) field_vitu2_entry_pane_t_ParamLimits

0xf954,	// (0x0003bdd0) field_vitu2_entry_pane_t

0xbb38,	// (0x00037fb4) bg_button_pane_cp010_ParamLimits

0xbb38,	// (0x00037fb4) bg_button_pane_cp010

0xbb46,	// (0x00037fc2) cell_vitu2_itu_pane_g1

0xbb64,	// (0x00037fe0) cell_vitu2_itu_pane_t1_ParamLimits

0xbb64,	// (0x00037fe0) cell_vitu2_itu_pane_t1

0x653d,	// (0x000329b9) cell_vitu2_itu_pane_t2_ParamLimits

0x653d,	// (0x000329b9) cell_vitu2_itu_pane_t2

0x0002,

0xf95e,	// (0x0003bdda) cell_vitu2_itu_pane_t_ParamLimits

0xf95e,	// (0x0003bdda) cell_vitu2_itu_pane_t

0xf0bd,	// (0x0003b539) bg_button_pane_cp011

0xbbb6,	// (0x00038032) cell_vitu2_function_pane_g1

0xe40e,	// (0x0003a88a) main_myfav_hc_pane

0xb6c5,	// (0x00037b41) popup_image3_note_pane_ParamLimits

0xb6c5,	// (0x00037b41) popup_image3_note_pane

0xb6d1,	// (0x00037b4d) popup_image3_tool_bar_pane_ParamLimits

0xb6d1,	// (0x00037b4d) popup_image3_tool_bar_pane

0x65ab,	// (0x00032a27) cell_vitu2_itu_pane_t3_ParamLimits

0x65ab,	// (0x00032a27) cell_vitu2_itu_pane_t3

0xe40e,	// (0x0003a88a) bg_popup_trans_pane

0x3a7a,	// (0x0002fef6) grid_image3_tool_bar_pane

0x3a84,	// (0x0002ff00) bg_popup_trans_pane_g1

0xefb0,	// (0x0003b42c) bg_popup_trans_pane_g2

0x3a8c,	// (0x0002ff08) bg_popup_trans_pane_g3

0x3a94,	// (0x0002ff10) bg_popup_trans_pane_g4

0x3a9c,	// (0x0002ff18) bg_popup_trans_pane_g5

0x3aa4,	// (0x0002ff20) bg_popup_trans_pane_g6

0x3aac,	// (0x0002ff28) bg_popup_trans_pane_g7

0x3ab4,	// (0x0002ff30) bg_popup_trans_pane_g8

0xef90,	// (0x0003b40c) bg_popup_trans_pane_g9

0x0008,

0xf965,	// (0x0003bde1) bg_popup_trans_pane_g

0x0b91,	// (0x0002d00d) cell_image3_tool_bar_pane_ParamLimits

0x0b91,	// (0x0002d00d) cell_image3_tool_bar_pane

0x2d6e,	// (0x0002f1ea) cell_image3_tool_bar_pane_g1

0xe40e,	// (0x0003a88a) bg_popup_trans_pane_cp1

0x3abc,	// (0x0002ff38) popup_image3_note_pane_t1

0x3aca,	// (0x0002ff46) popup_image3_note_pane_t2

0x3ad8,	// (0x0002ff54) popup_image3_note_pane_t3

0x0002,

0xf978,	// (0x0003bdf4) popup_image3_note_pane_t

0x3ae6,	// (0x0002ff62) popup_image3_note_pane_t3_copy1

0xbbca,	// (0x00038046) bg_myfav_hc_instruction_pane_ParamLimits

0xbbca,	// (0x00038046) bg_myfav_hc_instruction_pane

0xbbdc,	// (0x00038058) cell_myfav_contact_pane_ParamLimits

0xbbdc,	// (0x00038058) cell_myfav_contact_pane

0xbbf6,	// (0x00038072) cell_myfav_contact_pane_cp1_ParamLimits

0xbbf6,	// (0x00038072) cell_myfav_contact_pane_cp1

0xbc0c,	// (0x00038088) cell_myfav_contact_pane_cp2_ParamLimits

0xbc0c,	// (0x00038088) cell_myfav_contact_pane_cp2

0xbc22,	// (0x0003809e) cell_myfav_contact_pane_cp3_ParamLimits

0xbc22,	// (0x0003809e) cell_myfav_contact_pane_cp3

0xbc37,	// (0x000380b3) cell_myfav_contact_pane_cp4_ParamLimits

0xbc37,	// (0x000380b3) cell_myfav_contact_pane_cp4

0xbc4b,	// (0x000380c7) cell_myfav_contact_pane_cp5_ParamLimits

0xbc4b,	// (0x000380c7) cell_myfav_contact_pane_cp5

0xbc5f,	// (0x000380db) cell_myfav_contact_pane_cp6_ParamLimits

0xbc5f,	// (0x000380db) cell_myfav_contact_pane_cp6

0xbc73,	// (0x000380ef) cell_myfav_contact_pane_cp7_ParamLimits

0xbc73,	// (0x000380ef) cell_myfav_contact_pane_cp7

0x3af4,	// (0x0002ff70) listscroll_gen_pane_cp05

0xbc8b,	// (0x00038107) main_myfav_hc_pane_g1_ParamLimits

0xbc8b,	// (0x00038107) main_myfav_hc_pane_g1

0xbca1,	// (0x0003811d) main_myfav_hc_pane_g2_ParamLimits

0xbca1,	// (0x0003811d) main_myfav_hc_pane_g2

0x0002,

0xf97f,	// (0x0003bdfb) main_myfav_hc_pane_g_ParamLimits

0xf97f,	// (0x0003bdfb) main_myfav_hc_pane_g

0xbccb,	// (0x00038147) main_myfav_hc_pane_t1_ParamLimits

0xbccb,	// (0x00038147) main_myfav_hc_pane_t1

0x3afd,	// (0x0002ff79) main_myfav_hc_pane_t2_ParamLimits

0x3afd,	// (0x0002ff79) main_myfav_hc_pane_t2

0x3b0f,	// (0x0002ff8b) main_myfav_hc_pane_t3_ParamLimits

0x3b0f,	// (0x0002ff8b) main_myfav_hc_pane_t3

0xbce0,	// (0x0003815c) main_myfav_hc_pane_t4_ParamLimits

0xbce0,	// (0x0003815c) main_myfav_hc_pane_t4

0x0004,

0xf986,	// (0x0003be02) main_myfav_hc_pane_t_ParamLimits

0xf986,	// (0x0003be02) main_myfav_hc_pane_t

0x2d6e,	// (0x0002f1ea) bg_myfav_hc_instruction_pane_g1

0x3b21,	// (0x0002ff9d) cell_myfav_contact_pane_g1_ParamLimits

0x3b21,	// (0x0002ff9d) cell_myfav_contact_pane_g1

0x3b21,	// (0x0002ff9d) cell_myfav_contact_pane_g2_ParamLimits

0x3b21,	// (0x0002ff9d) cell_myfav_contact_pane_g2

0x3b2d,	// (0x0002ffa9) cell_myfav_contact_pane_g3_ParamLimits

0x3b2d,	// (0x0002ffa9) cell_myfav_contact_pane_g3

0x3076,	// (0x0002f4f2) cell_myfav_contact_pane_g4_ParamLimits

0x3076,	// (0x0002f4f2) cell_myfav_contact_pane_g4

0x3b3a,	// (0x0002ffb6) cell_myfav_contact_pane_g5_ParamLimits

0x3b3a,	// (0x0002ffb6) cell_myfav_contact_pane_g5

0x0004,

0xf991,	// (0x0003be0d) cell_myfav_contact_pane_g_ParamLimits

0xf991,	// (0x0003be0d) cell_myfav_contact_pane_g

0xbcb7,	// (0x00038133) main_myfav_hc_pane_g3_ParamLimits

0xbcb7,	// (0x00038133) main_myfav_hc_pane_g3

0x7459,	// (0x000338d5) popup_adpt_find_window

0xbd04,	// (0x00038180) afind_page_pane_ParamLimits

0xbd04,	// (0x00038180) afind_page_pane

0xbd11,	// (0x0003818d) aid_size_cell_afind_ParamLimits

0xbd11,	// (0x0003818d) aid_size_cell_afind

0xbd2b,	// (0x000381a7) bg_popup_sub_pane_cp09_ParamLimits

0xbd2b,	// (0x000381a7) bg_popup_sub_pane_cp09

0xbd38,	// (0x000381b4) find_pane_cp01_ParamLimits

0xbd38,	// (0x000381b4) find_pane_cp01

0x3b46,	// (0x0002ffc2) grid_afind_control_pane_ParamLimits

0x3b46,	// (0x0002ffc2) grid_afind_control_pane

0xbd45,	// (0x000381c1) grid_afind_pane_ParamLimits

0xbd45,	// (0x000381c1) grid_afind_pane

0xbd5b,	// (0x000381d7) cell_afind_pane_ParamLimits

0xbd5b,	// (0x000381d7) cell_afind_pane

0x2d6e,	// (0x0002f1ea) afind_page_pane_g1

0xbd91,	// (0x0003820d) afind_page_pane_g2

0xbd9a,	// (0x00038216) afind_page_pane_g3

0x0002,

0xf99c,	// (0x0003be18) afind_page_pane_g

0xbda3,	// (0x0003821f) afind_page_pane_t1

0x3b5a,	// (0x0002ffd6) cell_afind_grid_control_pane_ParamLimits

0x3b5a,	// (0x0002ffd6) cell_afind_grid_control_pane

0x386d,	// (0x0002fce9) bg_button_pane_cp69_ParamLimits

0x386d,	// (0x0002fce9) bg_button_pane_cp69

0xbdc3,	// (0x0003823f) cell_afind_pane_g1_ParamLimits

0xbdc3,	// (0x0003823f) cell_afind_pane_g1

0xbdd0,	// (0x0003824c) cell_afind_pane_t1_ParamLimits

0xbdd0,	// (0x0003824c) cell_afind_pane_t1

0xed9c,	// (0x0003b218) bg_button_pane_cp72

0x3b69,	// (0x0002ffe5) cell_afind_grid_control_pane_g1

0x97c4,	// (0x00035c40) aid_image_placing_area_ParamLimits

0x97c4,	// (0x00035c40) aid_image_placing_area

0x3302,	// (0x0002f77e) field_vitu_entry_pane_g1_ParamLimits

0x3302,	// (0x0002f77e) field_vitu_entry_pane_g1

0x330e,	// (0x0002f78a) field_vitu_entry_pane_g2_ParamLimits

0x330e,	// (0x0002f78a) field_vitu_entry_pane_g2

0x0001,

0xf84d,	// (0x0003bcc9) field_vitu_entry_pane_g_ParamLimits

0xf84d,	// (0x0003bcc9) field_vitu_entry_pane_g

0xb08d,	// (0x00037509) cell_vitu_itu_pane_g1_ParamLimits

0xb0cf,	// (0x0003754b) cell_vitu_itu_pane_t3_ParamLimits

0xb0cf,	// (0x0003754b) cell_vitu_itu_pane_t3

0x3817,	// (0x0002fc93) mp4_progress_pane_t1_ParamLimits

0x382e,	// (0x0002fcaa) mp4_progress_pane_t2_ParamLimits

0xf8e2,	// (0x0003bd5e) mp4_progress_pane_t_ParamLimits

0x3845,	// (0x0002fcc1) mup_progress_pane_cp04_ParamLimits

0xbcf2,	// (0x0003816e) main_myfav_hc_pane_t5_ParamLimits

0xbcf2,	// (0x0003816e) main_myfav_hc_pane_t5

0xe428,	// (0x0003a8a4) aid_zoom_text_primary

0x7459,	// (0x000338d5) popup_adpt_find_window_ParamLimits

0xf0bd,	// (0x0003b539) main_cam_set_pane

0xb831,	// (0x00037cad) cam4_zoom_pane_ParamLimits

0xb831,	// (0x00037cad) cam4_zoom_pane

0xbde2,	// (0x0003825e) main_cam_set_pane_g1_ParamLimits

0xbde2,	// (0x0003825e) main_cam_set_pane_g1

0xbdf0,	// (0x0003826c) main_cam_set_pane_g2_ParamLimits

0xbdf0,	// (0x0003826c) main_cam_set_pane_g2

0x0001,

0xf9a3,	// (0x0003be1f) main_cam_set_pane_g_ParamLimits

0xf9a3,	// (0x0003be1f) main_cam_set_pane_g

0xbdfc,	// (0x00038278) main_cam_set_pane_t1_ParamLimits

0xbdfc,	// (0x00038278) main_cam_set_pane_t1

0xbe0e,	// (0x0003828a) main_cset_listscroll_pane_ParamLimits

0xbe0e,	// (0x0003828a) main_cset_listscroll_pane

0xbe37,	// (0x000382b3) main_cset_slider_pane_ParamLimits

0xbe37,	// (0x000382b3) main_cset_slider_pane

0x3b7a,	// (0x0002fff6) main_cset_list_pane_ParamLimits

0x3b7a,	// (0x0002fff6) main_cset_list_pane

0x3b8a,	// (0x00030006) scroll_pane_cp028

0xbe56,	// (0x000382d2) aid_area_touch_slider

0xbe72,	// (0x000382ee) cset_slider_pane

0xbe9c,	// (0x00038318) main_cset_slider_pane_g1

0xbeb1,	// (0x0003832d) main_cset_slider_pane_g2

0x0011,

0xf9a8,	// (0x0003be24) main_cset_slider_pane_g

0x3bc3,	// (0x0003003f) main_cset_slider_pane_t1

0xbf6d,	// (0x000383e9) main_cset_slider_pane_t2

0xbf87,	// (0x00038403) main_cset_slider_pane_t3

0xbfa1,	// (0x0003841d) main_cset_slider_pane_t4

0xbfbb,	// (0x00038437) main_cset_slider_pane_t5

0xbfd5,	// (0x00038451) main_cset_slider_pane_t6

0xbfea,	// (0x00038466) main_cset_slider_pane_t7

0x000e,

0xf9cd,	// (0x0003be49) main_cset_slider_pane_t

0xc0ee,	// (0x0003856a) cset_list_set_pane_ParamLimits

0xc0ee,	// (0x0003856a) cset_list_set_pane

0xc0fe,	// (0x0003857a) aid_position_infowindow_above

0xc106,	// (0x00038582) aid_position_infowindow_below

0x65f8,	// (0x00032a74) cset_list_set_pane_g1_ParamLimits

0x65f8,	// (0x00032a74) cset_list_set_pane_g1

0x6604,	// (0x00032a80) cset_list_set_pane_g3_ParamLimits

0x6604,	// (0x00032a80) cset_list_set_pane_g3

0x0001,

0xf9ec,	// (0x0003be68) cset_list_set_pane_g_ParamLimits

0xf9ec,	// (0x0003be68) cset_list_set_pane_g

0x6613,	// (0x00032a8f) cset_list_set_pane_t1_ParamLimits

0x6613,	// (0x00032a8f) cset_list_set_pane_t1

0xf0bd,	// (0x0003b539) list_highlight_pane_cp021_ParamLimits

0xf0bd,	// (0x0003b539) list_highlight_pane_cp021

0x14d9,	// (0x0002d955) cset_slider_pane_g1

0x14eb,	// (0x0002d967) cset_slider_pane_g2

0x14e2,	// (0x0002d95e) cset_slider_pane_g3

0x0002,

0xf9f1,	// (0x0003be6d) cset_slider_pane_g

0xc10e,	// (0x0003858a) aid_area_touch_cam4_zoom

0xc116,	// (0x00038592) cam4_zoom_cont_pane

0xc11e,	// (0x0003859a) cam4_zoom_pane_g1

0xc126,	// (0x000385a2) cam4_zoom_pane_g2

0xc12e,	// (0x000385aa) cam4_zoom_pane_g3

0x0002,

0xf9f8,	// (0x0003be74) cam4_zoom_pane_g

0x4623,	// (0x00030a9f) cam4_zoom_cont_pane_g1

0x462c,	// (0x00030aa8) cam4_zoom_cont_pane_g2

0x4635,	// (0x00030ab1) cam4_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x0003be7b) cam4_zoom_cont_pane_g

0xb718,	// (0x00037b94) call4_image_pane_ParamLimits

0xb718,	// (0x00037b94) call4_image_pane

0x38c3,	// (0x0002fd3f) call4_windows_conf_pane_ParamLimits

0x38d6,	// (0x0002fd52) popup_call4_audio_in_window_ParamLimits

0x38d6,	// (0x0002fd52) popup_call4_audio_in_window

0xe40e,	// (0x0003a88a) bg_popup_call2_act_pane_cp02

0x3934,	// (0x0002fdb0) call4_list_conf_pane

0x2d6e,	// (0x0002f1ea) call4_image_pane_g1

0x2d6e,	// (0x0002f1ea) call4_image_pane_g2

0x0001,

0xf713,	// (0x0003bb8f) call4_image_pane_g

0x3cc2,	// (0x0003013e) list_single_graphic_popup_conf4_pane_ParamLimits

0x3cc2,	// (0x0003013e) list_single_graphic_popup_conf4_pane

0xe40e,	// (0x0003a88a) list_highlight_pane_cp022

0x3cd5,	// (0x00030151) list_single_graphic_popup_conf4_pane_g1

0x111e,	// (0x0002d59a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa06,	// (0x0003be82) list_single_graphic_popup_conf4_pane_g

0x3cdd,	// (0x00030159) list_single_graphic_popup_conf4_pane_t1

0x8287,	// (0x00034703) popup_vtel_slider_window_ParamLimits

0x8287,	// (0x00034703) popup_vtel_slider_window

0x385b,	// (0x0002fcd7) dialer2_ne_pane_t2_ParamLimits

0x385b,	// (0x0002fcd7) dialer2_ne_pane_t2

0x0001,

0xf8e7,	// (0x0003bd63) dialer2_ne_pane_t_ParamLimits

0xf8e7,	// (0x0003bd63) dialer2_ne_pane_t

0xf0bd,	// (0x0003b539) bg_popup_sub_pane_cp010_ParamLimits

0xf0bd,	// (0x0003b539) bg_popup_sub_pane_cp010

0xc136,	// (0x000385b2) popup_vtel_slider_window_g1_ParamLimits

0xc136,	// (0x000385b2) popup_vtel_slider_window_g1

0xc142,	// (0x000385be) popup_vtel_slider_window_g2_ParamLimits

0xc142,	// (0x000385be) popup_vtel_slider_window_g2

0x0003,

0xfa0b,	// (0x0003be87) popup_vtel_slider_window_g_ParamLimits

0xfa0b,	// (0x0003be87) popup_vtel_slider_window_g

0xc188,	// (0x00038604) vtel_slider_pane_ParamLimits

0xc188,	// (0x00038604) vtel_slider_pane

0xc197,	// (0x00038613) vtel_slider_pane_g1_ParamLimits

0xc197,	// (0x00038613) vtel_slider_pane_g1

0xc1a4,	// (0x00038620) vtel_slider_pane_g2_ParamLimits

0xc1a4,	// (0x00038620) vtel_slider_pane_g2

0xc1b1,	// (0x0003862d) vtel_slider_pane_g3_ParamLimits

0xc1b1,	// (0x0003862d) vtel_slider_pane_g3

0xc197,	// (0x00038613) vtel_slider_pane_g4_ParamLimits

0xc197,	// (0x00038613) vtel_slider_pane_g4

0xc1be,	// (0x0003863a) vtel_slider_pane_g5_ParamLimits

0xc1be,	// (0x0003863a) vtel_slider_pane_g5

0x0004,

0xfa14,	// (0x0003be90) vtel_slider_pane_g_ParamLimits

0xfa14,	// (0x0003be90) vtel_slider_pane_g

0xe40e,	// (0x0003a88a) main_gallery2_pane

0xba2e,	// (0x00037eaa) aid_size_row_itut2_dropdow_list_ParamLimits

0xba2e,	// (0x00037eaa) aid_size_row_itut2_dropdow_list

0xba74,	// (0x00037ef0) grid_vitu2_function_top_pane_ParamLimits

0xba74,	// (0x00037ef0) grid_vitu2_function_top_pane

0xbaae,	// (0x00037f2a) popup_vitu2_dropdown_list_window_ParamLimits

0xbaae,	// (0x00037f2a) popup_vitu2_dropdown_list_window

0xbac8,	// (0x00037f44) popup_vitu2_match_list_window

0xc1cb,	// (0x00038647) cell_vitu2_function_top_pane_ParamLimits

0xc1cb,	// (0x00038647) cell_vitu2_function_top_pane

0xc1eb,	// (0x00038667) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc1eb,	// (0x00038667) cell_vitu2_function_top_pane_cp01

0xc20b,	// (0x00038687) cell_vitu2_function_top_wide_pane_ParamLimits

0xc20b,	// (0x00038687) cell_vitu2_function_top_wide_pane

0xf0bd,	// (0x0003b539) bg_button_pane_cp012

0xc229,	// (0x000386a5) cell_vitu2_function_top_pane_g1

0xc238,	// (0x000386b4) bg_button_pane_cp013_ParamLimits

0xc238,	// (0x000386b4) bg_button_pane_cp013

0xc254,	// (0x000386d0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc254,	// (0x000386d0) cell_vitu2_function_top_wide_pane_g1

0x7503,	// (0x0003397f) bg_popup_sub_pane_cp20

0xc26c,	// (0x000386e8) list_vitu2_match_list_pane

0x3a84,	// (0x0002ff00) bg_popup_sub_pane_cp20_g1

0x3a8c,	// (0x0002ff08) bg_popup_sub_pane_cp20_g2

0xefb0,	// (0x0003b42c) bg_popup_sub_pane_cp20_g3

0x3a94,	// (0x0002ff10) bg_popup_sub_pane_cp20_g4

0xef90,	// (0x0003b40c) bg_popup_sub_pane_cp20_g5

0x3d1d,	// (0x00030199) bg_popup_sub_pane_cp20_g6

0x3aa4,	// (0x0002ff20) bg_popup_sub_pane_cp20_g7

0x3aac,	// (0x0002ff28) bg_popup_sub_pane_cp20_g8

0x3ab4,	// (0x0002ff30) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1f,	// (0x0003be9b) bg_popup_sub_pane_cp20_g

0xc284,	// (0x00038700) list_vitu2_match_list_item_pane_ParamLimits

0xc284,	// (0x00038700) list_vitu2_match_list_item_pane

0xc296,	// (0x00038712) list_vitu2_match_list_item_pane_t1

0xe40e,	// (0x0003a88a) bg_popup_sub_pane_cp21

0x0fed,	// (0x0002d469) grid_vitu2_dropdown_list_pane

0xc2a4,	// (0x00038720) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc2a4,	// (0x00038720) cell_vitu2_dropdown_list_char_pane

0xc2c5,	// (0x00038741) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc2c5,	// (0x00038741) cell_vitu2_dropdown_list_ctrl_pane

0x3d5f,	// (0x000301db) cell_vitu2_dropdown_list_char_pane_g1

0x3d56,	// (0x000301d2) cell_vitu2_dropdown_list_char_pane_g2

0x3d4d,	// (0x000301c9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa3c,	// (0x0003beb8) cell_vitu2_dropdown_list_char_pane_g

0xc2f1,	// (0x0003876d) cell_vitu2_dropdown_list_char_pane_t1

0xc2ff,	// (0x0003877b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc2ff,	// (0x0003877b) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc30f,	// (0x0003878b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc30f,	// (0x0003878b) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc320,	// (0x0003879c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc320,	// (0x0003879c) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc330,	// (0x000387ac) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc330,	// (0x000387ac) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2f9d,	// (0x0002f419) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2f9d,	// (0x0002f419) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa43,	// (0x0003bebf) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa43,	// (0x0003bebf) cell_vitu2_dropdown_list_ctrl_pane_g

0xc349,	// (0x000387c5) aid_size_cell_gallery2_ParamLimits

0xc349,	// (0x000387c5) aid_size_cell_gallery2

0xc357,	// (0x000387d3) grid_gallery2_pane_ParamLimits

0xc357,	// (0x000387d3) grid_gallery2_pane

0xc364,	// (0x000387e0) scroll_pane_cp029_ParamLimits

0xc364,	// (0x000387e0) scroll_pane_cp029

0xc370,	// (0x000387ec) cell_gallery2_pane_ParamLimits

0xc370,	// (0x000387ec) cell_gallery2_pane

0x3d68,	// (0x000301e4) cell_gallery2_pane_g2

0xc39c,	// (0x00038818) cell_gallery2_pane_g3

0x3d72,	// (0x000301ee) cell_gallery2_pane_g4

0x3d7a,	// (0x000301f6) cell_gallery2_pane_g5

0x1383,	// (0x0002d7ff) grid_highlight_pane_cp10

0xbac8,	// (0x00037f44) popup_vitu2_match_list_window_ParamLimits

0xbad8,	// (0x00037f54) popup_vitu2_query_window_ParamLimits

0xbad8,	// (0x00037f54) popup_vitu2_query_window

0xe40e,	// (0x0003a88a) bg_vitu2_candi_button_pane

0x3d5f,	// (0x000301db) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3d56,	// (0x000301d2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3d4d,	// (0x000301c9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6662,	// (0x00032ade) bg_button_pane_cp015

0xc3a4,	// (0x00038820) bg_button_pane_cp016

0xc3b7,	// (0x00038833) bg_button_pane_cp017

0x2879,	// (0x0002ecf5) bg_popup_sub_pane_cp22

0x3d82,	// (0x000301fe) popup_vitu2_query_window_g1

0x6691,	// (0x00032b0d) popup_vitu2_query_window_g2

0x0002,

0xfa4e,	// (0x0003beca) popup_vitu2_query_window_g

0x66ac,	// (0x00032b28) popup_vitu2_query_window_t1_ParamLimits

0x66ac,	// (0x00032b28) popup_vitu2_query_window_t1

0x66df,	// (0x00032b5b) popup_vitu2_query_window_t2_ParamLimits

0x66df,	// (0x00032b5b) popup_vitu2_query_window_t2

0x66f1,	// (0x00032b6d) popup_vitu2_query_window_t3_ParamLimits

0x66f1,	// (0x00032b6d) popup_vitu2_query_window_t3

0xc3db,	// (0x00038857) popup_vitu2_query_window_t4_ParamLimits

0xc3db,	// (0x00038857) popup_vitu2_query_window_t4

0xc3f8,	// (0x00038874) popup_vitu2_query_window_t5_ParamLimits

0xc3f8,	// (0x00038874) popup_vitu2_query_window_t5

0x0006,

0xfa55,	// (0x0003bed1) popup_vitu2_query_window_t_ParamLimits

0xfa55,	// (0x0003bed1) popup_vitu2_query_window_t

0x3b72,	// (0x0002ffee) main_cset_text_pane

0xbe56,	// (0x000382d2) aid_area_touch_slider_ParamLimits

0xbe72,	// (0x000382ee) cset_slider_pane_ParamLimits

0xbe9c,	// (0x00038318) main_cset_slider_pane_g1_ParamLimits

0xbeb1,	// (0x0003832d) main_cset_slider_pane_g2_ParamLimits

0x3b93,	// (0x0003000f) main_cset_slider_pane_g3_ParamLimits

0x3b93,	// (0x0003000f) main_cset_slider_pane_g3

0xbec6,	// (0x00038342) main_cset_slider_pane_g4_ParamLimits

0xbec6,	// (0x00038342) main_cset_slider_pane_g4

0xbed5,	// (0x00038351) main_cset_slider_pane_g5_ParamLimits

0xbed5,	// (0x00038351) main_cset_slider_pane_g5

0xbee1,	// (0x0003835d) main_cset_slider_pane_g6_ParamLimits

0xbee1,	// (0x0003835d) main_cset_slider_pane_g6

0xf9a8,	// (0x0003be24) main_cset_slider_pane_g_ParamLimits

0x3bc3,	// (0x0003003f) main_cset_slider_pane_t1_ParamLimits

0xbf6d,	// (0x000383e9) main_cset_slider_pane_t2_ParamLimits

0xbf87,	// (0x00038403) main_cset_slider_pane_t3_ParamLimits

0xbfa1,	// (0x0003841d) main_cset_slider_pane_t4_ParamLimits

0xbfbb,	// (0x00038437) main_cset_slider_pane_t5_ParamLimits

0xbfd5,	// (0x00038451) main_cset_slider_pane_t6_ParamLimits

0xbfea,	// (0x00038466) main_cset_slider_pane_t7_ParamLimits

0xc014,	// (0x00038490) main_cset_slider_pane_t8_ParamLimits

0xc014,	// (0x00038490) main_cset_slider_pane_t8

0xc03c,	// (0x000384b8) main_cset_slider_pane_t9_ParamLimits

0xc03c,	// (0x000384b8) main_cset_slider_pane_t9

0xc064,	// (0x000384e0) main_cset_slider_pane_t10_ParamLimits

0xc064,	// (0x000384e0) main_cset_slider_pane_t10

0xc08c,	// (0x00038508) main_cset_slider_pane_t11_ParamLimits

0xc08c,	// (0x00038508) main_cset_slider_pane_t11

0xc0b4,	// (0x00038530) main_cset_slider_pane_t12_ParamLimits

0xc0b4,	// (0x00038530) main_cset_slider_pane_t12

0xc0d1,	// (0x0003854d) main_cset_slider_pane_t13_ParamLimits

0xc0d1,	// (0x0003854d) main_cset_slider_pane_t13

0xf9cd,	// (0x0003be49) main_cset_slider_pane_t_ParamLimits

0xe40e,	// (0x0003a88a) bg_popup_sub_pane_cp011

0x3d8e,	// (0x0003020a) main_cset_text_pane_g1

0x3d96,	// (0x00030212) main_cset_text_pane_t1

0x3da4,	// (0x00030220) main_cset_text_pane_t2

0x3db2,	// (0x0003022e) main_cset_text_pane_t3

0x3dc0,	// (0x0003023c) main_cset_text_pane_t4

0x3dce,	// (0x0003024a) main_cset_text_pane_t5

0x3ddc,	// (0x00030258) main_cset_text_pane_t6

0x3dea,	// (0x00030266) main_cset_text_pane_t7

0x0006,

0xfa64,	// (0x0003bee0) main_cset_text_pane_t

0xe40e,	// (0x0003a88a) main_cam4_burst_pane

0xe40e,	// (0x0003a88a) main_cam5_pane

0xbdb1,	// (0x0003822d) bg_button_pane_cp019

0xbdba,	// (0x00038236) bg_button_pane_cp020

0x3b9f,	// (0x0003001b) main_cset_slider_pane_g7_ParamLimits

0x3b9f,	// (0x0003001b) main_cset_slider_pane_g7

0x3bab,	// (0x00030027) main_cset_slider_pane_g8_ParamLimits

0x3bab,	// (0x00030027) main_cset_slider_pane_g8

0xbef5,	// (0x00038371) main_cset_slider_pane_g9_ParamLimits

0xbef5,	// (0x00038371) main_cset_slider_pane_g9

0xbf01,	// (0x0003837d) main_cset_slider_pane_g10_ParamLimits

0xbf01,	// (0x0003837d) main_cset_slider_pane_g10

0xbf0d,	// (0x00038389) main_cset_slider_pane_g11_ParamLimits

0xbf0d,	// (0x00038389) main_cset_slider_pane_g11

0xbf19,	// (0x00038395) main_cset_slider_pane_g12_ParamLimits

0xbf19,	// (0x00038395) main_cset_slider_pane_g12

0xbf25,	// (0x000383a1) main_cset_slider_pane_g13_ParamLimits

0xbf25,	// (0x000383a1) main_cset_slider_pane_g13

0xbf31,	// (0x000383ad) main_cset_slider_pane_g14_ParamLimits

0xbf31,	// (0x000383ad) main_cset_slider_pane_g14

0xbf3d,	// (0x000383b9) main_cset_slider_pane_g15_ParamLimits

0xbf3d,	// (0x000383b9) main_cset_slider_pane_g15

0x3bf1,	// (0x0003006d) main_cset_slider_pane_t14_ParamLimits

0x3bf1,	// (0x0003006d) main_cset_slider_pane_t14

0x3c2a,	// (0x000300a6) main_cset_slider_pane_t15_ParamLimits

0x3c2a,	// (0x000300a6) main_cset_slider_pane_t15

0xc415,	// (0x00038891) aid_cam4_burst_size_cell_ParamLimits

0xc415,	// (0x00038891) aid_cam4_burst_size_cell

0xc431,	// (0x000388ad) grid_cam4_burst_pane_ParamLimits

0xc431,	// (0x000388ad) grid_cam4_burst_pane

0xc453,	// (0x000388cf) linegrid_cam4_burst_pane_ParamLimits

0xc453,	// (0x000388cf) linegrid_cam4_burst_pane

0xc471,	// (0x000388ed) scroll_pane_cp30_ParamLimits

0xc471,	// (0x000388ed) scroll_pane_cp30

0xc47d,	// (0x000388f9) cell_cam4_burst_pane_ParamLimits

0xc47d,	// (0x000388f9) cell_cam4_burst_pane

0x3df8,	// (0x00030274) linegrid_cam4_burst_pane_g1_ParamLimits

0x3df8,	// (0x00030274) linegrid_cam4_burst_pane_g1

0xc4b5,	// (0x00038931) linegrid_cam4_burst_pane_g2_ParamLimits

0xc4b5,	// (0x00038931) linegrid_cam4_burst_pane_g2

0x3e05,	// (0x00030281) linegrid_cam4_burst_pane_g3_ParamLimits

0x3e05,	// (0x00030281) linegrid_cam4_burst_pane_g3

0x0002,

0xfa73,	// (0x0003beef) linegrid_cam4_burst_pane_g_ParamLimits

0xfa73,	// (0x0003beef) linegrid_cam4_burst_pane_g

0xc4c6,	// (0x00038942) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc4c6,	// (0x00038942) linegrid_cam4_burst_pane_g3_copy1

0x3e12,	// (0x0003028e) linegrid_cam4_burst_pane_g4_ParamLimits

0x3e12,	// (0x0003028e) linegrid_cam4_burst_pane_g4

0xc4e0,	// (0x0003895c) linegrid_cam4_burst_pane_g5_ParamLimits

0xc4e0,	// (0x0003895c) linegrid_cam4_burst_pane_g5

0xc4f1,	// (0x0003896d) linegrid_cam4_burst_pane_g6_ParamLimits

0xc4f1,	// (0x0003896d) linegrid_cam4_burst_pane_g6

0x3e1f,	// (0x0003029b) linegrid_cam4_burst_pane_g7_ParamLimits

0x3e1f,	// (0x0003029b) linegrid_cam4_burst_pane_g7

0xc502,	// (0x0003897e) cell_cam4_burst_pane_g1

0x3e38,	// (0x000302b4) main_cam5_pane_t1_ParamLimits

0x3e38,	// (0x000302b4) main_cam5_pane_t1

0x3e4a,	// (0x000302c6) main_cam5_pane_t2_ParamLimits

0x3e4a,	// (0x000302c6) main_cam5_pane_t2

0x3e5c,	// (0x000302d8) main_cam5_pane_t3_ParamLimits

0x3e5c,	// (0x000302d8) main_cam5_pane_t3

0x3e6e,	// (0x000302ea) main_cam5_pane_t4_ParamLimits

0x3e6e,	// (0x000302ea) main_cam5_pane_t4

0x3e84,	// (0x00030300) main_cam5_pane_t5_ParamLimits

0x3e84,	// (0x00030300) main_cam5_pane_t5

0x3e96,	// (0x00030312) main_cam5_pane_t6_ParamLimits

0x3e96,	// (0x00030312) main_cam5_pane_t6

0x3ea8,	// (0x00030324) main_cam5_pane_t7_ParamLimits

0x3ea8,	// (0x00030324) main_cam5_pane_t7

0x3eba,	// (0x00030336) main_cam5_pane_t8_ParamLimits

0x3eba,	// (0x00030336) main_cam5_pane_t8

0x3ed6,	// (0x00030352) main_cam5_pane_t9_ParamLimits

0x3ed6,	// (0x00030352) main_cam5_pane_t9

0x3ee8,	// (0x00030364) main_cam5_pane_t10_ParamLimits

0x3ee8,	// (0x00030364) main_cam5_pane_t10

0x3efa,	// (0x00030376) main_cam5_pane_t11_ParamLimits

0x3efa,	// (0x00030376) main_cam5_pane_t11

0x3f0c,	// (0x00030388) main_cam5_pane_t12_ParamLimits

0x3f0c,	// (0x00030388) main_cam5_pane_t12

0x3f21,	// (0x0003039d) main_cam5_pane_t13_ParamLimits

0x3f21,	// (0x0003039d) main_cam5_pane_t13

0x000c,

0xfa7f,	// (0x0003befb) main_cam5_pane_t_ParamLimits

0xfa7f,	// (0x0003befb) main_cam5_pane_t

0x74cc,	// (0x00033948) popup_scut_keymap_window_ParamLimits

0x74cc,	// (0x00033948) popup_scut_keymap_window

0xc515,	// (0x00038991) aid_size_cell_brow_shortcut

0x1383,	// (0x0002d7ff) bg_popup_window_pane_cp010

0xc521,	// (0x0003899d) grid_scut_pane

0xc52b,	// (0x000389a7) cell_scut_pane_ParamLimits

0xc52b,	// (0x000389a7) cell_scut_pane

0xc540,	// (0x000389bc) cell_scut_pane_g1

0x3f3e,	// (0x000303ba) cell_scut_pane_t1

0x3f4d,	// (0x000303c9) cell_scut_pane_t2

0xc549,	// (0x000389c5) cell_scut_pane_t3

0x0002,

0xfa9a,	// (0x0003bf16) cell_scut_pane_t

0xa775,	// (0x00036bf1) main_mup3_pane_g8_ParamLimits

0xa775,	// (0x00036bf1) main_mup3_pane_g8

0xba3a,	// (0x00037eb6) area_vitu2_query_pane_ParamLimits

0xba3a,	// (0x00037eb6) area_vitu2_query_pane

0x6672,	// (0x00032aee) input_focus_pane_cp08

0x3f5c,	// (0x000303d8) area_vitu2_query_pane_g1

0x676f,	// (0x00032beb) area_vitu2_query_pane_g2

0x0001,

0xfaa1,	// (0x0003bf1d) area_vitu2_query_pane_g

0xc557,	// (0x000389d3) area_vitu2_query_pane_t1_ParamLimits

0xc557,	// (0x000389d3) area_vitu2_query_pane_t1

0xc569,	// (0x000389e5) area_vitu2_query_pane_t2_ParamLimits

0xc569,	// (0x000389e5) area_vitu2_query_pane_t2

0x677e,	// (0x00032bfa) area_vitu2_query_pane_t3_ParamLimits

0x677e,	// (0x00032bfa) area_vitu2_query_pane_t3

0x67a6,	// (0x00032c22) area_vitu2_query_pane_t4_ParamLimits

0x67a6,	// (0x00032c22) area_vitu2_query_pane_t4

0x67ce,	// (0x00032c4a) area_vitu2_query_pane_t5_ParamLimits

0x67ce,	// (0x00032c4a) area_vitu2_query_pane_t5

0x67f6,	// (0x00032c72) area_vitu2_query_pane_t6_ParamLimits

0x67f6,	// (0x00032c72) area_vitu2_query_pane_t6

0x0006,

0xfaa6,	// (0x0003bf22) area_vitu2_query_pane_t_ParamLimits

0xfaa6,	// (0x0003bf22) area_vitu2_query_pane_t

0xc57b,	// (0x000389f7) bg_button_pane_cp018

0xc588,	// (0x00038a04) bg_button_pane_cp021

0x6842,	// (0x00032cbe) bg_button_pane_cp022

0x6851,	// (0x00032ccd) input_focus_pane_cp09

0x905a,	// (0x000354d6) aid_size_touch_mv_arrow_left

0x125c,	// (0x0002d6d8) aid_size_touch_mv_arrow_right

0xbf55,	// (0x000383d1) main_cset_slider_pane_g16_ParamLimits

0xbf55,	// (0x000383d1) main_cset_slider_pane_g16

0xbf61,	// (0x000383dd) main_cset_slider_pane_g17_ParamLimits

0xbf61,	// (0x000383dd) main_cset_slider_pane_g17

0xc502,	// (0x0003897e) cell_cam4_burst_pane_g1_ParamLimits

0xe40e,	// (0x0003a88a) compa_mode_pane

0xc14e,	// (0x000385ca) popup_vtel_slider_window_g3_ParamLimits

0xc14e,	// (0x000385ca) popup_vtel_slider_window_g3

0xc162,	// (0x000385de) popup_vtel_slider_window_g4_ParamLimits

0xc162,	// (0x000385de) popup_vtel_slider_window_g4

0xc176,	// (0x000385f2) popup_vtel_slider_window_t1_ParamLimits

0xc176,	// (0x000385f2) popup_vtel_slider_window_t1

0xe40e,	// (0x0003a88a) main_cl_pane

0x289f,	// (0x0002ed1b) popup_imed_adjust2_window_ParamLimits

0x2879,	// (0x0002ecf5) bg_tb_trans_pane_cp05_ParamLimits

0x3237,	// (0x0002f6b3) popup_imed_adjust2_window_g1_ParamLimits

0x3246,	// (0x0002f6c2) popup_imed_adjust2_window_g2_ParamLimits

0x3246,	// (0x0002f6c2) popup_imed_adjust2_window_g2

0x3252,	// (0x0002f6ce) popup_imed_adjust2_window_g3_ParamLimits

0x3252,	// (0x0002f6ce) popup_imed_adjust2_window_g3

0x0002,

0xf811,	// (0x0003bc8d) popup_imed_adjust2_window_g_ParamLimits

0xf811,	// (0x0003bc8d) popup_imed_adjust2_window_g

0x325e,	// (0x0002f6da) popup_imed_adjust2_window_t1_ParamLimits

0x3276,	// (0x0002f6f2) slider_imed_adjust_pane_ParamLimits

0x328a,	// (0x0002f706) slider_imed_adjust_pane_g1_ParamLimits

0x329a,	// (0x0002f716) slider_imed_adjust_pane_g2_ParamLimits

0x32aa,	// (0x0002f726) slider_imed_adjust_pane_g3_ParamLimits

0x32bb,	// (0x0002f737) slider_imed_adjust_pane_g4_ParamLimits

0xf818,	// (0x0003bc94) slider_imed_adjust_pane_g_ParamLimits

0xb7e2,	// (0x00037c5e) aid_touch_area_cam4_ParamLimits

0xb7e2,	// (0x00037c5e) aid_touch_area_cam4

0xb7f0,	// (0x00037c6c) battery_pane_cp01

0xb86f,	// (0x00037ceb) main_camera4_pane_g6_ParamLimits

0xb86f,	// (0x00037ceb) main_camera4_pane_g6

0xb88d,	// (0x00037d09) main_camera4_pane_t2_ParamLimits

0xb88d,	// (0x00037d09) main_camera4_pane_t2

0x0001,

0xf91b,	// (0x0003bd97) main_camera4_pane_t_ParamLimits

0xf91b,	// (0x0003bd97) main_camera4_pane_t

0xb915,	// (0x00037d91) aid_touch_area_vid4_ParamLimits

0xb915,	// (0x00037d91) aid_touch_area_vid4

0xb86f,	// (0x00037ceb) main_video4_pane_g5_ParamLimits

0xb86f,	// (0x00037ceb) main_video4_pane_g5

0xb945,	// (0x00037dc1) vid4_progress_pane_ParamLimits

0xb945,	// (0x00037dc1) vid4_progress_pane

0x3bb7,	// (0x00030033) main_cset_slider_pane_g18_ParamLimits

0x3bb7,	// (0x00030033) main_cset_slider_pane_g18

0x3e2c,	// (0x000302a8) cell_cam4_burst_pane_g2_ParamLimits

0x3e2c,	// (0x000302a8) cell_cam4_burst_pane_g2

0x0001,

0xfa7a,	// (0x0003bef6) cell_cam4_burst_pane_g_ParamLimits

0xfa7a,	// (0x0003bef6) cell_cam4_burst_pane_g

0xc594,	// (0x00038a10) bg_cl_pane_ParamLimits

0xc594,	// (0x00038a10) bg_cl_pane

0xc5a0,	// (0x00038a1c) cl_header_pane_ParamLimits

0xc5a0,	// (0x00038a1c) cl_header_pane

0xc5ac,	// (0x00038a28) cl_listscroll_pane_ParamLimits

0xc5ac,	// (0x00038a28) cl_listscroll_pane

0x4004,	// (0x00030480) bg_cl_pane_g1

0x400c,	// (0x00030488) bg_cl_pane_g2

0x4014,	// (0x00030490) bg_cl_pane_g3

0x401c,	// (0x00030498) bg_cl_pane_g4

0x4024,	// (0x000304a0) bg_cl_pane_g5

0x402c,	// (0x000304a8) bg_cl_pane_g6

0x4034,	// (0x000304b0) bg_cl_pane_g7

0x403c,	// (0x000304b8) bg_cl_pane_g8

0x4044,	// (0x000304c0) bg_cl_pane_g9

0x0008,

0xfab5,	// (0x0003bf31) bg_cl_pane_g

0xc5b8,	// (0x00038a34) aid_height_cl_leading_ParamLimits

0xc5b8,	// (0x00038a34) aid_height_cl_leading

0xc5c4,	// (0x00038a40) aid_height_cl_text_ParamLimits

0xc5c4,	// (0x00038a40) aid_height_cl_text

0x7503,	// (0x0003397f) bg_cl_header_pane_ParamLimits

0x7503,	// (0x0003397f) bg_cl_header_pane

0xc5dc,	// (0x00038a58) cl_header_pane_g1_ParamLimits

0xc5dc,	// (0x00038a58) cl_header_pane_g1

0xc5e9,	// (0x00038a65) cl_header_pane_t1_ParamLimits

0xc5e9,	// (0x00038a65) cl_header_pane_t1

0x404c,	// (0x000304c8) cl_list_pane

0x4055,	// (0x000304d1) hc_scroll_pane_cp01

0xef90,	// (0x0003b40c) bg_cl_header_pane_g1

0x3a84,	// (0x0002ff00) bg_cl_header_pane_g2

0xefb0,	// (0x0003b42c) bg_cl_header_pane_g3

0x3a94,	// (0x0002ff10) bg_cl_header_pane_g4

0x3a8c,	// (0x0002ff08) bg_cl_header_pane_g5

0x3d1d,	// (0x00030199) bg_cl_header_pane_g6

0x3aac,	// (0x0002ff28) bg_cl_header_pane_g7

0x3ab4,	// (0x0002ff30) bg_cl_header_pane_g8

0x3aa4,	// (0x0002ff20) bg_cl_header_pane_g9

0x0008,

0xfac8,	// (0x0003bf44) bg_cl_header_pane_g

0xc5fb,	// (0x00038a77) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc5fb,	// (0x00038a77) hc_cl_list_double_graphic_heading_pane

0xc60b,	// (0x00038a87) hc_cl_list_single_graphic_pane_ParamLimits

0xc60b,	// (0x00038a87) hc_cl_list_single_graphic_pane

0xc61d,	// (0x00038a99) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc61d,	// (0x00038a99) hc_cl_list_single_graphic_pane_g1

0xc629,	// (0x00038aa5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc629,	// (0x00038aa5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfadb,	// (0x0003bf57) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfadb,	// (0x0003bf57) hc_cl_list_single_graphic_pane_g

0xc63d,	// (0x00038ab9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc63d,	// (0x00038ab9) hc_cl_list_single_graphic_pane_t1

0xc61d,	// (0x00038a99) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc61d,	// (0x00038a99) hc_cl_list_double_graphic_heading_pane_g1

0xc652,	// (0x00038ace) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc652,	// (0x00038ace) hc_cl_list_double_graphic_heading_pane_g2

0xc666,	// (0x00038ae2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc666,	// (0x00038ae2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae0,	// (0x0003bf5c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae0,	// (0x0003bf5c) hc_cl_list_double_graphic_heading_pane_g

0xc67a,	// (0x00038af6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc67a,	// (0x00038af6) hc_cl_list_double_graphic_heading_pane_t1

0xc68f,	// (0x00038b0b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc68f,	// (0x00038b0b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfae7,	// (0x0003bf63) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfae7,	// (0x0003bf63) hc_cl_list_double_graphic_heading_pane_t

0xc6a4,	// (0x00038b20) vid4_progress_pane_g1

0xc6b3,	// (0x00038b2f) vid4_progress_pane_g2

0xc6c2,	// (0x00038b3e) vid4_progress_pane_g3

0xc6d1,	// (0x00038b4d) vid4_progress_pane_g4

0x0004,

0xfaec,	// (0x0003bf68) vid4_progress_pane_g

0xc6dd,	// (0x00038b59) vid4_progress_pane_t1

0xc6f3,	// (0x00038b6f) vid4_progress_pane_t2

0x0002,

0xfaf7,	// (0x0003bf73) vid4_progress_pane_t

0xc71d,	// (0x00038b99) wait_bar_pane_cp07

0x2b69,	// (0x0002efe5) blid_firmament_pane_ParamLimits

0x2baa,	// (0x0002f026) popup_blid_sat_info2_window_g1

0x2bce,	// (0x0002f04a) popup_blid_sat_info2_window_t3

0x2bdc,	// (0x0002f058) popup_blid_sat_info2_window_t4

0x2bea,	// (0x0002f066) popup_blid_sat_info2_window_t5

0x2bf8,	// (0x0002f074) popup_blid_sat_info2_window_t6

0x2c08,	// (0x0002f084) popup_blid_sat_info2_window_t7

0x2c16,	// (0x0002f092) popup_blid_sat_info2_window_t8

0x2c24,	// (0x0002f0a0) popup_blid_sat_info2_window_t9

0x2c32,	// (0x0002f0ae) popup_blid_sat_info2_window_t10

0x2cee,	// (0x0002f16a) aid_firma_cardinal_ParamLimits

0x2d02,	// (0x0002f17e) blid_firmament_pane_t1_ParamLimits

0x2d19,	// (0x0002f195) blid_firmament_pane_t2_ParamLimits

0x2d30,	// (0x0002f1ac) blid_firmament_pane_t3_ParamLimits

0x2d47,	// (0x0002f1c3) blid_firmament_pane_t4_ParamLimits

0xf70a,	// (0x0003bb86) blid_firmament_pane_t_ParamLimits

0x2d5e,	// (0x0002f1da) blid_sat_info_pane_ParamLimits

0xf0bd,	// (0x0003b539) main_cam_set_pane_ParamLimits

0xaedc,	// (0x00037358) aid_size_cell_colour_35_ParamLimits

0xaef3,	// (0x0003736f) aid_size_cell_colour_112_ParamLimits

0xaf0a,	// (0x00037386) aid_size_cell_effect_ParamLimits

0xf0bd,	// (0x0003b539) bg_tb_trans_pane_cp02_ParamLimits

0x0e02,	// (0x0002d27e) heading_imed_pane_ParamLimits

0xaf24,	// (0x000373a0) listscroll_imed_pane_ParamLimits

0x1e6b,	// (0x0002e2e7) popup_call2_audio_first_window_g5_ParamLimits

0x1e6b,	// (0x0002e2e7) popup_call2_audio_first_window_g5

0xb5a7,	// (0x00037a23) aid_size_touch_image3_arrow_left_ParamLimits

0xb5a7,	// (0x00037a23) aid_size_touch_image3_arrow_left

0xb5bb,	// (0x00037a37) aid_size_touch_image3_arrow_right_ParamLimits

0xb5bb,	// (0x00037a37) aid_size_touch_image3_arrow_right

0xc708,	// (0x00038b84) vid4_progress_pane_t3

0xb188,	// (0x00037604) main_hwr_training_symbol_option_pane_ParamLimits

0xb188,	// (0x00037604) main_hwr_training_symbol_option_pane

0x3516,	// (0x0002f992) popup_hwr_training_preview_window_ParamLimits

0x3516,	// (0x0002f992) popup_hwr_training_preview_window

0xb1e3,	// (0x0003765f) hwr_training_navi_pane_g5_ParamLimits

0xb1e3,	// (0x0003765f) hwr_training_navi_pane_g5

0x3a64,	// (0x0002fee0) popup_char_count_window

0x7503,	// (0x0003397f) bg_popup_sub_pane_cp20_ParamLimits

0xc26c,	// (0x000386e8) list_vitu2_match_list_pane_ParamLimits

0xc278,	// (0x000386f4) vitu2_page_scroll_pane_ParamLimits

0xc278,	// (0x000386f4) vitu2_page_scroll_pane

0x414d,	// (0x000305c9) list_single_hwr_training_symbol_option_pane_ParamLimits

0x414d,	// (0x000305c9) list_single_hwr_training_symbol_option_pane

0x4160,	// (0x000305dc) list_single_hwr_training_symbol_option_pane_g1

0x4168,	// (0x000305e4) list_single_hwr_training_symbol_option_pane_t1

0x4176,	// (0x000305f2) bg_button_pane_cp023

0x417f,	// (0x000305fb) bg_button_pane_cp024

0xc72d,	// (0x00038ba9) vitu2_page_scroll_pane_g1

0xc735,	// (0x00038bb1) vitu2_page_scroll_pane_g2

0x0001,

0xfafe,	// (0x0003bf7a) vitu2_page_scroll_pane_g

0xc73d,	// (0x00038bb9) vitu2_page_scroll_pane_t1

0x2a85,	// (0x0002ef01) popup_char_count_window_g1

0x41b2,	// (0x0003062e) popup_char_count_window_g2

0x41bb,	// (0x00030637) popup_char_count_window_g3

0x0002,

0xfb03,	// (0x0003bf7f) popup_char_count_window_g

0x41c4,	// (0x00030640) popup_char_count_window_t1

0xe40e,	// (0x0003a88a) main_vded2_pane

0x3225,	// (0x0002f6a1) aid_size_cell_imed_line

0x322f,	// (0x0002f6ab) grid_imed_line_width_pane

0xb990,	// (0x00037e0c) vid4_indicators_pane_g4

0x41d2,	// (0x0003064e) cell_imed_line_width_pane_ParamLimits

0x41d2,	// (0x0003064e) cell_imed_line_width_pane

0x41e4,	// (0x00030660) cell_imed_line_width_pane_g1

0x2b17,	// (0x0002ef93) cell_imed_line_width_pane_g2

0x0001,

0xfb0a,	// (0x0003bf86) cell_imed_line_width_pane_g

0xc74c,	// (0x00038bc8) main_vded2_pane_g1_ParamLimits

0xc74c,	// (0x00038bc8) main_vded2_pane_g1

0xc759,	// (0x00038bd5) main_vded2_pane_g2_ParamLimits

0xc759,	// (0x00038bd5) main_vded2_pane_g2

0x0001,

0xfb0f,	// (0x0003bf8b) main_vded2_pane_g_ParamLimits

0xfb0f,	// (0x0003bf8b) main_vded2_pane_g

0xc765,	// (0x00038be1) vded2_slider_pane_ParamLimits

0xc765,	// (0x00038be1) vded2_slider_pane

0xc772,	// (0x00038bee) aid_size_touch_vded2_end

0xc77a,	// (0x00038bf6) aid_size_touch_vded2_playhead

0xc782,	// (0x00038bfe) aid_size_touch_vded2_start

0xc78a,	// (0x00038c06) vded2_slider_bg_pane

0xc793,	// (0x00038c0f) vded2_slider_pane_g1

0xc79c,	// (0x00038c18) vded2_slider_pane_g2

0xc7a4,	// (0x00038c20) vded2_slider_pane_g3

0x0002,

0xfb14,	// (0x0003bf90) vded2_slider_pane_g

0xc7ad,	// (0x00038c29) vded2_slider_bg_pane_g1

0xc7b6,	// (0x00038c32) vded2_slider_bg_pane_g2

0xc7bf,	// (0x00038c3b) vded2_slider_bg_pane_g3

0x0002,

0xfb1b,	// (0x0003bf97) vded2_slider_bg_pane_g

0x9574,	// (0x000359f0) aid_postcard_touch_down_pane_ParamLimits

0x9574,	// (0x000359f0) aid_postcard_touch_down_pane

0x9580,	// (0x000359fc) aid_postcard_touch_up_pane_ParamLimits

0x9580,	// (0x000359fc) aid_postcard_touch_up_pane

0xe40e,	// (0x0003a88a) main_blid2_pane

0x2887,	// (0x0002ed03) popup_blid2_search_window

0xe40e,	// (0x0003a88a) blid2_gps_pane

0xe40e,	// (0x0003a88a) blid2_navig_pane

0xe40e,	// (0x0003a88a) blid2_search_pane

0xe40e,	// (0x0003a88a) blid2_tripm_pane

0xc7c8,	// (0x00038c44) blid2_search_pane_g1_ParamLimits

0xc7c8,	// (0x00038c44) blid2_search_pane_g1

0xc7d4,	// (0x00038c50) blid2_search_pane_t1_ParamLimits

0xc7d4,	// (0x00038c50) blid2_search_pane_t1

0xc7e6,	// (0x00038c62) aid_size_cell_blid2_gps_ParamLimits

0xc7e6,	// (0x00038c62) aid_size_cell_blid2_gps

0xc7f6,	// (0x00038c72) blid2_gps_pane_g1_ParamLimits

0xc7f6,	// (0x00038c72) blid2_gps_pane_g1

0xc802,	// (0x00038c7e) grid_blid2_satellite_pane_ParamLimits

0xc802,	// (0x00038c7e) grid_blid2_satellite_pane

0xc80e,	// (0x00038c8a) blid2_navig_pane_g1_ParamLimits

0xc80e,	// (0x00038c8a) blid2_navig_pane_g1

0xc81a,	// (0x00038c96) blid2_navig_pane_t1_ParamLimits

0xc81a,	// (0x00038c96) blid2_navig_pane_t1

0xc82c,	// (0x00038ca8) blid2_navig_pane_t2_ParamLimits

0xc82c,	// (0x00038ca8) blid2_navig_pane_t2

0x0001,

0xfb22,	// (0x0003bf9e) blid2_navig_pane_t_ParamLimits

0xfb22,	// (0x0003bf9e) blid2_navig_pane_t

0xc83e,	// (0x00038cba) blid2_navig_ring_pane_ParamLimits

0xc83e,	// (0x00038cba) blid2_navig_ring_pane

0xc84a,	// (0x00038cc6) blid2_speed_pane_ParamLimits

0xc84a,	// (0x00038cc6) blid2_speed_pane

0xc856,	// (0x00038cd2) blid2_tripm_pane_g1_ParamLimits

0xc856,	// (0x00038cd2) blid2_tripm_pane_g1

0xc862,	// (0x00038cde) blid2_tripm_pane_g2_ParamLimits

0xc862,	// (0x00038cde) blid2_tripm_pane_g2

0xc86e,	// (0x00038cea) blid2_tripm_pane_g3_ParamLimits

0xc86e,	// (0x00038cea) blid2_tripm_pane_g3

0xc87a,	// (0x00038cf6) blid2_tripm_pane_g4_ParamLimits

0xc87a,	// (0x00038cf6) blid2_tripm_pane_g4

0xc886,	// (0x00038d02) blid2_tripm_pane_g5_ParamLimits

0xc886,	// (0x00038d02) blid2_tripm_pane_g5

0x0005,

0xfb27,	// (0x0003bfa3) blid2_tripm_pane_g_ParamLimits

0xfb27,	// (0x0003bfa3) blid2_tripm_pane_g

0xc89e,	// (0x00038d1a) blid2_tripm_pane_t1_ParamLimits

0xc89e,	// (0x00038d1a) blid2_tripm_pane_t1

0xc8b0,	// (0x00038d2c) blid2_tripm_pane_t2_ParamLimits

0xc8b0,	// (0x00038d2c) blid2_tripm_pane_t2

0xc8c2,	// (0x00038d3e) blid2_tripm_pane_t3_ParamLimits

0xc8c2,	// (0x00038d3e) blid2_tripm_pane_t3

0x0003,

0xfb34,	// (0x0003bfb0) blid2_tripm_pane_t_ParamLimits

0xfb34,	// (0x0003bfb0) blid2_tripm_pane_t

0xc8f2,	// (0x00038d6e) cell_blid2_satellite_pane_ParamLimits

0xc8f2,	// (0x00038d6e) cell_blid2_satellite_pane

0xc90a,	// (0x00038d86) cell_blid2_satellite_pane_g1

0x41ed,	// (0x00030669) cell_blid2_satellite_pane_t1

0x2d6e,	// (0x0002f1ea) blid2_speed_pane_g1

0x41fb,	// (0x00030677) blid2_speed_pane_t1

0x4209,	// (0x00030685) blid2_speed_pane_t2

0x0001,

0xfb3d,	// (0x0003bfb9) blid2_speed_pane_t

0x2d6e,	// (0x0002f1ea) blid2_navig_ring_pane_g1

0xc913,	// (0x00038d8f) blid2_navig_ring_pane_g2

0xc91b,	// (0x00038d97) blid2_navig_ring_pane_g3

0xc923,	// (0x00038d9f) blid2_navig_ring_pane_g4

0xc92b,	// (0x00038da7) blid2_navig_ring_pane_g5

0x0004,

0xfb42,	// (0x0003bfbe) blid2_navig_ring_pane_g

0xe40e,	// (0x0003a88a) bg_popup_window_pane_cp011

0x4217,	// (0x00030693) popup_blid2_search_window_g1

0x421f,	// (0x0003069b) popup_blid2_search_window_t1

0x422d,	// (0x000306a9) popup_blid2_search_window_t2

0x0001,

0xfb4d,	// (0x0003bfc9) popup_blid2_search_window_t

0xee9f,	// (0x0003b31b) main_browser_pane_g1

0xeb94,	// (0x0003b010) main_browser_pane_ParamLimits

0xf0bd,	// (0x0003b539) bg_button_pane_cp011_ParamLimits

0xbbb6,	// (0x00038032) cell_vitu2_function_pane_g1_ParamLimits

0x2879,	// (0x0002ecf5) bg_popup_sub_pane_cp22_ParamLimits

0x6672,	// (0x00032aee) input_focus_pane_cp08_ParamLimits

0xc3ca,	// (0x00038846) popup_vitu2_query_button_pane_ParamLimits

0xc3ca,	// (0x00038846) popup_vitu2_query_button_pane

0x6689,	// (0x00032b05) popup_vitu2_query_input_button_pane

0x3d82,	// (0x000301fe) popup_vitu2_query_window_g1_ParamLimits

0x6691,	// (0x00032b0d) popup_vitu2_query_window_g2_ParamLimits

0xfa4e,	// (0x0003beca) popup_vitu2_query_window_g_ParamLimits

0xe40e,	// (0x0003a88a) bg_button_pane_cp026

0xc933,	// (0x00038daf) popup_vitu2_query_input_button_pane_g1

0xe40e,	// (0x0003a88a) bg_button_pane_cp025

0x423b,	// (0x000306b7) popup_vitu2_query_button_pane_t1

0xa52d,	// (0x000369a9) main_mp3_pane_t6

0xa53b,	// (0x000369b7) popup_slider_window_cp01

0xb8c3,	// (0x00037d3f) cam4_battery_pane

0xb8c3,	// (0x00037d3f) cam4_battery_pane_cp02

0xb8c3,	// (0x00037d3f) cam4_battery_pane_cp01

0xb8c3,	// (0x00037d3f) cam4_battery_pane_cp03

0x2d6e,	// (0x0002f1ea) cam4_battery_pane_g1

0x3851,	// (0x0002fccd) cam4_battery_pane_g2

0x0001,

0xfb52,	// (0x0003bfce) cam4_battery_pane_g

0x2c40,	// (0x0002f0bc) popup_blid_sat_info2_window_t11

0x905a,	// (0x000354d6) aid_size_touch_mv_arrow_left_ParamLimits

0x125c,	// (0x0002d6d8) aid_size_touch_mv_arrow_right_ParamLimits

0x1294,	// (0x0002d710) navi_pane_g1_ParamLimits

0x12a0,	// (0x0002d71c) navi_pane_g2_ParamLimits

0x9073,	// (0x000354ef) navi_pane_g3_ParamLimits

0xf409,	// (0x0003b885) navi_pane_g_ParamLimits

0x9098,	// (0x00035514) navi_pane_mv_t1_ParamLimits

0xaf30,	// (0x000373ac) grid_imed_effect_pane_ParamLimits

0x8163,	// (0x000345df) aid_placing_vt_slider_lsc

0xede1,	// (0x0003b25d) aid_placing_vt_slider_prt

0xf0bd,	// (0x0003b539) bg_tb_trans_pane_cp01_ParamLimits

0x2ebd,	// (0x0002f339) popup_image_details_window_g1_ParamLimits

0x2ed0,	// (0x0002f34c) popup_image_details_window_g2_ParamLimits

0x2ee5,	// (0x0002f361) popup_image_details_window_g3_ParamLimits

0x2ee5,	// (0x0002f361) popup_image_details_window_g3

0xf74f,	// (0x0003bbcb) popup_image_details_window_g_ParamLimits

0x2ef9,	// (0x0002f375) popup_image_details_window_t1_ParamLimits

0x2f0b,	// (0x0002f387) popup_image_details_window_t2_ParamLimits

0x2f24,	// (0x0002f3a0) popup_image_details_window_t3_ParamLimits

0x2f38,	// (0x0002f3b4) popup_image_details_window_t4_ParamLimits

0x2f53,	// (0x0002f3cf) popup_image_details_window_t5_ParamLimits

0xf756,	// (0x0003bbd2) popup_image_details_window_t_ParamLimits

0xc5d0,	// (0x00038a4c) cl_header_name_pane_ParamLimits

0xc5d0,	// (0x00038a4c) cl_header_name_pane

0xc93b,	// (0x00038db7) cl_header_name_pane_t1_ParamLimits

0xc93b,	// (0x00038db7) cl_header_name_pane_t1

0xc952,	// (0x00038dce) cl_header_name_pane_t2_ParamLimits

0xc952,	// (0x00038dce) cl_header_name_pane_t2

0xc97c,	// (0x00038df8) cl_header_name_pane_t3_ParamLimits

0xc97c,	// (0x00038df8) cl_header_name_pane_t3

0x0002,

0xfb57,	// (0x0003bfd3) cl_header_name_pane_t_ParamLimits

0xfb57,	// (0x0003bfd3) cl_header_name_pane_t

0x1322,	// (0x0002d79e) navi_pane_mv_g2_ParamLimits

0x3a21,	// (0x0002fe9d) field_vitu2_entry_pane_g1_ParamLimits

0x3a2d,	// (0x0002fea9) field_vitu2_entry_pane_g2_ParamLimits

0x3a39,	// (0x0002feb5) field_vitu2_entry_pane_g3_ParamLimits

0x3a39,	// (0x0002feb5) field_vitu2_entry_pane_g3

0xf94d,	// (0x0003bdc9) field_vitu2_entry_pane_g_ParamLimits

0xbb46,	// (0x00037fc2) cell_vitu2_itu_pane_g1_ParamLimits

0xbb56,	// (0x00037fd2) cell_vitu2_itu_pane_g2_ParamLimits

0xbb56,	// (0x00037fd2) cell_vitu2_itu_pane_g2

0x0001,

0xf959,	// (0x0003bdd5) cell_vitu2_itu_pane_g_ParamLimits

0xf959,	// (0x0003bdd5) cell_vitu2_itu_pane_g

0xf0bd,	// (0x0003b539) bg_vkb2_func_pane_cp05_ParamLimits

0xf0bd,	// (0x0003b539) bg_vkb2_func_pane_cp05

0xf0bd,	// (0x0003b539) bg_vkb2_func_pane_cp03

0xf0bd,	// (0x0003b539) bg_vkb2_func_pane_cp04

0xf0bd,	// (0x0003b539) bg_vkb2_func_pane_cp10_ParamLimits

0xf0bd,	// (0x0003b539) bg_vkb2_func_pane_cp10

0x6842,	// (0x00032cbe) bg_vkb2_func_pane_cp08

0xc57b,	// (0x000389f7) bg_vkb2_func_pane_cp06

0xc588,	// (0x00038a04) bg_vkb2_func_pane_cp07

0x4188,	// (0x00030604) bg_vkb2_func_pane_cp11_ParamLimits

0x4188,	// (0x00030604) bg_vkb2_func_pane_cp11

0x419d,	// (0x00030619) bg_vkb2_func_pane_cp12_ParamLimits

0x419d,	// (0x00030619) bg_vkb2_func_pane_cp12

0xe40e,	// (0x0003a88a) bg_vkb2_func_pane_cp09

0x3a84,	// (0x0002ff00) bg_vkb2_func_pane_g1

0xefb0,	// (0x0003b42c) bg_vkb2_func_pane_g2

0x3a8c,	// (0x0002ff08) bg_vkb2_func_pane_g3

0x3a94,	// (0x0002ff10) bg_vkb2_func_pane_g4

0x3d1d,	// (0x00030199) bg_vkb2_func_pane_g5

0x3aac,	// (0x0002ff28) bg_vkb2_func_pane_g6

0x3ab4,	// (0x0002ff30) bg_vkb2_func_pane_g7

0x3aa4,	// (0x0002ff20) bg_vkb2_func_pane_g8

0xef90,	// (0x0003b40c) bg_vkb2_func_pane_g9

0x0008,

0xfb5e,	// (0x0003bfda) bg_vkb2_func_pane_g

0xc892,	// (0x00038d0e) blid2_tripm_pane_g6_ParamLimits

0xc892,	// (0x00038d0e) blid2_tripm_pane_g6

0x380f,	// (0x0002fc8b) mp4_progress_pane_g1

0xc8e6,	// (0x00038d62) blid2_tripm_values_pane_ParamLimits

0xc8e6,	// (0x00038d62) blid2_tripm_values_pane

0xc9a1,	// (0x00038e1d) blid2_tripm_values_pane_t1

0xc9af,	// (0x00038e2b) blid2_tripm_values_pane_t2

0xc9bd,	// (0x00038e39) blid2_tripm_values_pane_t3

0xc9cb,	// (0x00038e47) blid2_tripm_values_pane_t4

0xc9d9,	// (0x00038e55) blid2_tripm_values_pane_t5

0xc9e7,	// (0x00038e63) blid2_tripm_values_pane_t6

0xc9f5,	// (0x00038e71) blid2_tripm_values_pane_t7

0xca03,	// (0x00038e7f) blid2_tripm_values_pane_t8

0xca11,	// (0x00038e8d) blid2_tripm_values_pane_t9

0x0008,

0xfb71,	// (0x0003bfed) blid2_tripm_values_pane_t

0x819d,	// (0x00034619) call_video_pane_t1_ParamLimits

0x81ba,	// (0x00034636) call_video_pane_t2_ParamLimits

0xf292,	// (0x0003b70e) call_video_pane_t_ParamLimits

0x6411,	// (0x0003288d) msg_header_pane_g1_ParamLimits

0x1526,	// (0x0002d9a2) msg_header_pane_g2_ParamLimits

0x1526,	// (0x0002d9a2) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0003b928) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0003b928) msg_header_pane_g

0xeb94,	// (0x0003b010) main_clock2_pane_ParamLimits

0xacee,	// (0x0003716a) grid_clock2_toolbar_pane_ParamLimits

0xacee,	// (0x0003716a) grid_clock2_toolbar_pane

0xacee,	// (0x0003716a) listscroll_clock2_pane_ParamLimits

0xacee,	// (0x0003716a) listscroll_clock2_pane

0xad93,	// (0x0003720f) main_clock2_pane_t3_ParamLimits

0xad93,	// (0x0003720f) main_clock2_pane_t3

0xada5,	// (0x00037221) main_clock2_pane_t4_ParamLimits

0xada5,	// (0x00037221) main_clock2_pane_t4

0x4249,	// (0x000306c5) cell_clock2_toolbar_pane

0x4251,	// (0x000306cd) cell_clock2_toolbar_pane_cp01

0x4251,	// (0x000306cd) cell_clock2_toolbar_pane_cp02

0x4259,	// (0x000306d5) cell_clock2_toolbar_pane_cp03

0x4261,	// (0x000306dd) list_clock2_pane

0x11c4,	// (0x0002d640) scroll_pane_cp10

0x4269,	// (0x000306e5) list_single_clock2_pane_ParamLimits

0x4269,	// (0x000306e5) list_single_clock2_pane

0x1383,	// (0x0002d7ff) list_highlight_pane_cp08

0x4276,	// (0x000306f2) list_single_clock2_pane_t1

0x4284,	// (0x00030700) list_single_clock2_pane_t2

0x0001,

0xfb84,	// (0x0003c000) list_single_clock2_pane_t

0xe40e,	// (0x0003a88a) bg_button_pane_cp10

0x4292,	// (0x0003070e) cell_clock2_toolbar_pane_g1

0x94de,	// (0x0003595a) aid_main_viewer_pane_g1_ParamLimits

0x94de,	// (0x0003595a) aid_main_viewer_pane_g1

0x94ea,	// (0x00035966) aid_main_viewer_pane_g2_ParamLimits

0x94ea,	// (0x00035966) aid_main_viewer_pane_g2

0x94f6,	// (0x00035972) aid_main_viewer_pane_g3_ParamLimits

0x94f6,	// (0x00035972) aid_main_viewer_pane_g3

0x9505,	// (0x00035981) aid_main_viewer_pane_g4_ParamLimits

0x9505,	// (0x00035981) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0003b939) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0003b939) aid_main_viewer_pane_g

0x7503,	// (0x0003397f) main_calc_pane_ParamLimits

0x9b8c,	// (0x00036008) main_dialer2_pane_ParamLimits

0xe40e,	// (0x0003a88a) main_cam6_pane

0xe40e,	// (0x0003a88a) main_vid6_pane

0xacfa,	// (0x00037176) listscroll_gen_pane_cp06_ParamLimits

0xacfa,	// (0x00037176) listscroll_gen_pane_cp06

0xadb7,	// (0x00037233) main_clock2_pane_t5_ParamLimits

0xadb7,	// (0x00037233) main_clock2_pane_t5

0xadfe,	// (0x0003727a) aid_call2_pane_cp10_ParamLimits

0xae0a,	// (0x00037286) aid_call_pane_cp10_ParamLimits

0x1250,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1250,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g2_ParamLimits

0xae16,	// (0x00037292) popup_clock_analogue_window_cp10_g3_ParamLimits

0xae16,	// (0x00037292) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1250,	// (0x0002d6cc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf806,	// (0x0003bc82) popup_clock_analogue_window_cp10_g_ParamLimits

0xae22,	// (0x0003729e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x3879,	// (0x0002fcf5) cell_dialer2_keypad_pane_g2_ParamLimits

0x3879,	// (0x0002fcf5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ec,	// (0x0003bd68) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ec,	// (0x0003bd68) cell_dialer2_keypad_pane_g

0xb570,	// (0x000379ec) cell_dialer2_keypad_pane_t1

0xbe43,	// (0x000382bf) main_cset_text2_pane_ParamLimits

0xbe43,	// (0x000382bf) main_cset_text2_pane

0x3f5c,	// (0x000303d8) area_vitu2_query_pane_g1_ParamLimits

0x676f,	// (0x00032beb) area_vitu2_query_pane_g2_ParamLimits

0xfaa1,	// (0x0003bf1d) area_vitu2_query_pane_g_ParamLimits

0x681e,	// (0x00032c9a) area_vitu2_query_pane_t7_ParamLimits

0x681e,	// (0x00032c9a) area_vitu2_query_pane_t7

0xc57b,	// (0x000389f7) bg_button_pane_cp018_ParamLimits

0xc588,	// (0x00038a04) bg_button_pane_cp021_ParamLimits

0x6842,	// (0x00032cbe) bg_button_pane_cp022_ParamLimits

0x6842,	// (0x00032cbe) bg_vkb2_func_pane_cp08_ParamLimits

0xc57b,	// (0x000389f7) bg_vkb2_func_pane_cp06_ParamLimits

0xc588,	// (0x00038a04) bg_vkb2_func_pane_cp07_ParamLimits

0x6851,	// (0x00032ccd) input_focus_pane_cp09_ParamLimits

0xca1f,	// (0x00038e9b) cam6_autofocus_pane_ParamLimits

0xca1f,	// (0x00038e9b) cam6_autofocus_pane

0xca3b,	// (0x00038eb7) cam6_image_uncrop_pane_ParamLimits

0xca3b,	// (0x00038eb7) cam6_image_uncrop_pane

0xca5e,	// (0x00038eda) cam6_indi_pane_ParamLimits

0xca5e,	// (0x00038eda) cam6_indi_pane

0xca78,	// (0x00038ef4) cam6_mode_pane_ParamLimits

0xca78,	// (0x00038ef4) cam6_mode_pane

0xca8c,	// (0x00038f08) cam6_timer_pane_ParamLimits

0xca8c,	// (0x00038f08) cam6_timer_pane

0xca98,	// (0x00038f14) cam6_zoom_pane_ParamLimits

0xca98,	// (0x00038f14) cam6_zoom_pane

0xb923,	// (0x00037d9f) cam6_mode_pane_g1_ParamLimits

0xb923,	// (0x00037d9f) cam6_mode_pane_g1

0xcaae,	// (0x00038f2a) cam6_mode_pane_g2_ParamLimits

0xcaae,	// (0x00038f2a) cam6_mode_pane_g2

0xcaba,	// (0x00038f36) cam6_mode_pane_g3_ParamLimits

0xcaba,	// (0x00038f36) cam6_mode_pane_g3

0xcac6,	// (0x00038f42) cam6_mode_pane_g4_ParamLimits

0xcac6,	// (0x00038f42) cam6_mode_pane_g4

0x0003,

0xfb89,	// (0x0003c005) cam6_mode_pane_g_ParamLimits

0xfb89,	// (0x0003c005) cam6_mode_pane_g

0x42a6,	// (0x00030722) bg_tb_trans_pane_cp08_ParamLimits

0x42a6,	// (0x00030722) bg_tb_trans_pane_cp08

0x42b4,	// (0x00030730) cam6_battery_pane_ParamLimits

0x42b4,	// (0x00030730) cam6_battery_pane

0x42ca,	// (0x00030746) cam6_indi_pane_g1_ParamLimits

0x42ca,	// (0x00030746) cam6_indi_pane_g1

0x42dc,	// (0x00030758) cam6_indi_pane_g2_ParamLimits

0x42dc,	// (0x00030758) cam6_indi_pane_g2

0x42ee,	// (0x0003076a) cam6_indi_pane_g3_ParamLimits

0x42ee,	// (0x0003076a) cam6_indi_pane_g3

0x0002,

0xfb92,	// (0x0003c00e) cam6_indi_pane_g_ParamLimits

0xfb92,	// (0x0003c00e) cam6_indi_pane_g

0x4300,	// (0x0003077c) cam6_indi_pane_t1_ParamLimits

0x4300,	// (0x0003077c) cam6_indi_pane_t1

0xb9c6,	// (0x00037e42) cam6_autofocus_pane_g1

0xb9ce,	// (0x00037e4a) cam6_autofocus_pane_g2

0xb9d6,	// (0x00037e52) cam6_autofocus_pane_g3

0xb9de,	// (0x00037e5a) cam6_autofocus_pane_g4

0x0003,

0xfb99,	// (0x0003c015) cam6_autofocus_pane_g

0x4326,	// (0x000307a2) cam6_timer_pane_g1

0x432e,	// (0x000307aa) cam6_timer_pane_t1

0x433c,	// (0x000307b8) cam6_zoom_cont_pane

0x4344,	// (0x000307c0) cam6_zoom_pane_g1

0x434c,	// (0x000307c8) cam6_zoom_pane_g2

0xcad2,	// (0x00038f4e) cam6_zoom_pane_g3

0x0002,

0xfba2,	// (0x0003c01e) cam6_zoom_pane_g

0x2d6e,	// (0x0002f1ea) cam6_battery_pane_g1

0x2d6e,	// (0x0002f1ea) cam6_battery_pane_g2

0x0001,

0xf713,	// (0x0003bb8f) cam6_battery_pane_g

0x4354,	// (0x000307d0) cam6_zoom_cont_pane_g1

0x435d,	// (0x000307d9) cam6_zoom_cont_pane_g2

0x4366,	// (0x000307e2) cam6_zoom_cont_pane_g3

0x0002,

0xfba9,	// (0x0003c025) cam6_zoom_cont_pane_g

0xcaef,	// (0x00038f6b) cam6_mode_pane_cp_ParamLimits

0xcaef,	// (0x00038f6b) cam6_mode_pane_cp

0xca98,	// (0x00038f14) cam6_zoom_pane_cp_ParamLimits

0xca98,	// (0x00038f14) cam6_zoom_pane_cp

0xcb03,	// (0x00038f7f) vid6_image_uncrop_cif_pane_ParamLimits

0xcb03,	// (0x00038f7f) vid6_image_uncrop_cif_pane

0xcb25,	// (0x00038fa1) vid6_image_uncrop_nhd_pane_ParamLimits

0xcb25,	// (0x00038fa1) vid6_image_uncrop_nhd_pane

0xca3b,	// (0x00038eb7) vid6_image_uncrop_vga_pane_ParamLimits

0xca3b,	// (0x00038eb7) vid6_image_uncrop_vga_pane

0xcb3c,	// (0x00038fb8) vid6_image_uncrop_wvga_pane_ParamLimits

0xcb3c,	// (0x00038fb8) vid6_image_uncrop_wvga_pane

0xcb53,	// (0x00038fcf) vid6_indi_pane_ParamLimits

0xcb53,	// (0x00038fcf) vid6_indi_pane

0x42a6,	// (0x00030722) bg_tb_trans_pane_cp09_ParamLimits

0x42a6,	// (0x00030722) bg_tb_trans_pane_cp09

0x437a,	// (0x000307f6) cam6_battery_pane_cp_ParamLimits

0x437a,	// (0x000307f6) cam6_battery_pane_cp

0x4386,	// (0x00030802) vid6_indi_pane_g1_ParamLimits

0x4386,	// (0x00030802) vid6_indi_pane_g1

0x4398,	// (0x00030814) vid6_indi_pane_g2_ParamLimits

0x4398,	// (0x00030814) vid6_indi_pane_g2

0x43aa,	// (0x00030826) vid6_indi_pane_g3_ParamLimits

0x43aa,	// (0x00030826) vid6_indi_pane_g3

0x43bf,	// (0x0003083b) vid6_indi_pane_g4_ParamLimits

0x43bf,	// (0x0003083b) vid6_indi_pane_g4

0x43d4,	// (0x00030850) vid6_indi_pane_g5_ParamLimits

0x43d4,	// (0x00030850) vid6_indi_pane_g5

0x0004,

0xfbb0,	// (0x0003c02c) vid6_indi_pane_g_ParamLimits

0xfbb0,	// (0x0003c02c) vid6_indi_pane_g

0x43ee,	// (0x0003086a) vid6_indi_pane_t1_ParamLimits

0x43ee,	// (0x0003086a) vid6_indi_pane_t1

0x4404,	// (0x00030880) vid6_indi_pane_t2_ParamLimits

0x4404,	// (0x00030880) vid6_indi_pane_t2

0x442c,	// (0x000308a8) vid6_indi_pane_t3_ParamLimits

0x442c,	// (0x000308a8) vid6_indi_pane_t3

0x4454,	// (0x000308d0) vid6_indi_pane_t4_ParamLimits

0x4454,	// (0x000308d0) vid6_indi_pane_t4

0x0003,

0xfbbb,	// (0x0003c037) vid6_indi_pane_t_ParamLimits

0xfbbb,	// (0x0003c037) vid6_indi_pane_t

0x4478,	// (0x000308f4) wait_bar_pane_cp08

0xcb73,	// (0x00038fef) main_cset_text2_pane_t1_ParamLimits

0xcb73,	// (0x00038fef) main_cset_text2_pane_t1

0xcada,	// (0x00038f56) listscroll_gen_pane_cp06_t1_ParamLimits

0xcada,	// (0x00038f56) listscroll_gen_pane_cp06_t1

0xe40e,	// (0x0003a88a) main_cam6_set_pane

0x2f9d,	// (0x0002f419) bg_tb_trans_pane_cp06_ParamLimits

0xb8cb,	// (0x00037d47) cam4_indicators_pane_g1_ParamLimits

0xb8db,	// (0x00037d57) cam4_indicators_pane_g2_ParamLimits

0xf929,	// (0x0003bda5) cam4_indicators_pane_g_ParamLimits

0xb8fb,	// (0x00037d77) cam4_indicators_pane_t1_ParamLimits

0xf0bd,	// (0x0003b539) bg_tb_trans_pane_cp07_ParamLimits

0xb8cb,	// (0x00037d47) vid4_indicators_pane_g1_ParamLimits

0xb96f,	// (0x00037deb) vid4_indicators_pane_g2_ParamLimits

0xb97f,	// (0x00037dfb) vid4_indicators_pane_g3_ParamLimits

0xb990,	// (0x00037e0c) vid4_indicators_pane_g4_ParamLimits

0xf93b,	// (0x0003bdb7) vid4_indicators_pane_g_ParamLimits

0xb9ac,	// (0x00037e28) vid4_indicators_pane_t1_ParamLimits

0xc6a4,	// (0x00038b20) vid4_progress_pane_g1_ParamLimits

0xc6b3,	// (0x00038b2f) vid4_progress_pane_g2_ParamLimits

0xc6c2,	// (0x00038b3e) vid4_progress_pane_g3_ParamLimits

0xc6d1,	// (0x00038b4d) vid4_progress_pane_g4_ParamLimits

0xfaec,	// (0x0003bf68) vid4_progress_pane_g_ParamLimits

0xc6dd,	// (0x00038b59) vid4_progress_pane_t1_ParamLimits

0xc6f3,	// (0x00038b6f) vid4_progress_pane_t2_ParamLimits

0xc708,	// (0x00038b84) vid4_progress_pane_t3_ParamLimits

0xfaf7,	// (0x0003bf73) vid4_progress_pane_t_ParamLimits

0xc71d,	// (0x00038b99) wait_bar_pane_cp07_ParamLimits

0xcb8f,	// (0x0003900b) main_cam6_set_pane_g2_ParamLimits

0xcb8f,	// (0x0003900b) main_cam6_set_pane_g2

0xcb9b,	// (0x00039017) main_cset6_listscroll_pane_ParamLimits

0xcb9b,	// (0x00039017) main_cset6_listscroll_pane

0xcbc4,	// (0x00039040) main_cset6_slider_pane_ParamLimits

0xcbc4,	// (0x00039040) main_cset6_slider_pane

0xcbd0,	// (0x0003904c) main_cset6_text2_pane_ParamLimits

0xcbd0,	// (0x0003904c) main_cset6_text2_pane

0x4488,	// (0x00030904) main_cset6_text_pane

0x3b7a,	// (0x0002fff6) main_cset_list_pane_copy1_ParamLimits

0x3b7a,	// (0x0002fff6) main_cset_list_pane_copy1

0x3b8a,	// (0x00030006) scroll_pane_cp028_copy1

0xcbe3,	// (0x0003905f) cset_list_set_pane_copy1

0xc0fe,	// (0x0003857a) aid_position_infowindow_above_copy1

0xc106,	// (0x00038582) aid_position_infowindow_below_copy1

0x68ba,	// (0x00032d36) cset_list_set_pane_g1_copy1

0x68c2,	// (0x00032d3e) cset_list_set_pane_g3_copy1_ParamLimits

0x68c2,	// (0x00032d3e) cset_list_set_pane_g3_copy1

0x68d1,	// (0x00032d4d) cset_list_set_pane_t1_copy1_ParamLimits

0x68d1,	// (0x00032d4d) cset_list_set_pane_t1_copy1

0xf0bd,	// (0x0003b539) list_highlight_pane_cp021_copy1_ParamLimits

0xf0bd,	// (0x0003b539) list_highlight_pane_cp021_copy1

0x4490,	// (0x0003090c) cset6_slider_pane_ParamLimits

0x4490,	// (0x0003090c) cset6_slider_pane

0x44bc,	// (0x00030938) main_cset6_slider_pane_g1_ParamLimits

0x44bc,	// (0x00030938) main_cset6_slider_pane_g1

0xcbf2,	// (0x0003906e) main_cset6_slider_pane_g2_ParamLimits

0xcbf2,	// (0x0003906e) main_cset6_slider_pane_g2

0x3b9f,	// (0x0003001b) main_cset6_slider_pane_g3_ParamLimits

0x3b9f,	// (0x0003001b) main_cset6_slider_pane_g3

0xcc1a,	// (0x00039096) main_cset6_slider_pane_g4_ParamLimits

0xcc1a,	// (0x00039096) main_cset6_slider_pane_g4

0xcc26,	// (0x000390a2) main_cset6_slider_pane_g5_ParamLimits

0xcc26,	// (0x000390a2) main_cset6_slider_pane_g5

0x3b9f,	// (0x0003001b) main_cset6_slider_pane_g7_ParamLimits

0x3b9f,	// (0x0003001b) main_cset6_slider_pane_g7

0x3bab,	// (0x00030027) main_cset6_slider_pane_g8_ParamLimits

0x3bab,	// (0x00030027) main_cset6_slider_pane_g8

0xcc32,	// (0x000390ae) main_cset6_slider_pane_g9_ParamLimits

0xcc32,	// (0x000390ae) main_cset6_slider_pane_g9

0xcc3e,	// (0x000390ba) main_cset6_slider_pane_g10_ParamLimits

0xcc3e,	// (0x000390ba) main_cset6_slider_pane_g10

0xcc1a,	// (0x00039096) main_cset6_slider_pane_g11_ParamLimits

0xcc1a,	// (0x00039096) main_cset6_slider_pane_g11

0xcc4a,	// (0x000390c6) main_cset6_slider_pane_g12_ParamLimits

0xcc4a,	// (0x000390c6) main_cset6_slider_pane_g12

0xcc56,	// (0x000390d2) main_cset6_slider_pane_g13_ParamLimits

0xcc56,	// (0x000390d2) main_cset6_slider_pane_g13

0xcc62,	// (0x000390de) main_cset6_slider_pane_g14_ParamLimits

0xcc62,	// (0x000390de) main_cset6_slider_pane_g14

0xcc6e,	// (0x000390ea) main_cset6_slider_pane_g15_ParamLimits

0xcc6e,	// (0x000390ea) main_cset6_slider_pane_g15

0xcc26,	// (0x000390a2) main_cset6_slider_pane_g16_ParamLimits

0xcc26,	// (0x000390a2) main_cset6_slider_pane_g16

0xcc86,	// (0x00039102) main_cset6_slider_pane_g17_ParamLimits

0xcc86,	// (0x00039102) main_cset6_slider_pane_g17

0x0011,

0xfbc4,	// (0x0003c040) main_cset6_slider_pane_g_ParamLimits

0xfbc4,	// (0x0003c040) main_cset6_slider_pane_g

0x44e4,	// (0x00030960) main_cset6_slider_pane_t1_ParamLimits

0x44e4,	// (0x00030960) main_cset6_slider_pane_t1

0xcc92,	// (0x0003910e) main_cset6_slider_pane_t2_ParamLimits

0xcc92,	// (0x0003910e) main_cset6_slider_pane_t2

0x4525,	// (0x000309a1) main_cset6_slider_pane_t3_ParamLimits

0x4525,	// (0x000309a1) main_cset6_slider_pane_t3

0xccbd,	// (0x00039139) main_cset6_slider_pane_t4_ParamLimits

0xccbd,	// (0x00039139) main_cset6_slider_pane_t4

0x4550,	// (0x000309cc) main_cset6_slider_pane_t5_ParamLimits

0x4550,	// (0x000309cc) main_cset6_slider_pane_t5

0x457b,	// (0x000309f7) main_cset6_slider_pane_t7_ParamLimits

0x457b,	// (0x000309f7) main_cset6_slider_pane_t7

0xcce8,	// (0x00039164) main_cset6_slider_pane_t8_ParamLimits

0xcce8,	// (0x00039164) main_cset6_slider_pane_t8

0xcd0c,	// (0x00039188) main_cset6_slider_pane_t9_ParamLimits

0xcd0c,	// (0x00039188) main_cset6_slider_pane_t9

0xcd30,	// (0x000391ac) main_cset6_slider_pane_t10_ParamLimits

0xcd30,	// (0x000391ac) main_cset6_slider_pane_t10

0xcd54,	// (0x000391d0) main_cset6_slider_pane_t11_ParamLimits

0xcd54,	// (0x000391d0) main_cset6_slider_pane_t11

0x45b1,	// (0x00030a2d) main_cset6_slider_pane_t14_ParamLimits

0x45b1,	// (0x00030a2d) main_cset6_slider_pane_t14

0x45ea,	// (0x00030a66) main_cset6_slider_pane_t15_ParamLimits

0x45ea,	// (0x00030a66) main_cset6_slider_pane_t15

0x000b,

0xfbe9,	// (0x0003c065) main_cset6_slider_pane_t_ParamLimits

0xfbe9,	// (0x0003c065) main_cset6_slider_pane_t

0x4623,	// (0x00030a9f) cset_slider_pane_g1_copy1

0x462c,	// (0x00030aa8) cset_slider_pane_g2_copy1

0x4635,	// (0x00030ab1) cset_slider_pane_g3_copy1

0xe40e,	// (0x0003a88a) bg_popup_sub_pane_cp011_copy1

0x3d8e,	// (0x0003020a) main_cset_text_pane_g1_copy1

0x3d96,	// (0x00030212) main_cset_text_pane_t1_copy1

0x3da4,	// (0x00030220) main_cset_text_pane_t2_copy1

0x3db2,	// (0x0003022e) main_cset_text_pane_t3_copy1

0x3dc0,	// (0x0003023c) main_cset_text_pane_t4_copy1

0x3dce,	// (0x0003024a) main_cset_text_pane_t5_copy1

0x3ddc,	// (0x00030258) main_cset_text_pane_t6_copy1

0x3dea,	// (0x00030266) main_cset_text_pane_t7_copy1

0xcd78,	// (0x000391f4) main_cset_text2_pane_t1_copy1

0xe40e,	// (0x0003a88a) main_ncimui_pane

0x9bc7,	// (0x00036043) popup_query_ncimui_window_ParamLimits

0x9bc7,	// (0x00036043) popup_query_ncimui_window

0x64cc,	// (0x00032948) field_cale_ev2_pane_g4_ParamLimits

0x64cc,	// (0x00032948) field_cale_ev2_pane_g4

0xb2a4,	// (0x00037720) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb2a4,	// (0x00037720) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c7,	// (0x0003bd43) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c7,	// (0x0003bd43) cell_video_dialer_keypad_pane_g

0xb2bc,	// (0x00037738) cell_video_dialer_keypad_pane_t1

0xe40e,	// (0x0003a88a) bg_popup_window_pane_cp012

0x109d,	// (0x0002d519) heading_pane_cp06

0x4733,	// (0x00030baf) ncim_query_content_pane

0xe40e,	// (0x0003a88a) bg_popup_heading_pane_cp01

0x473b,	// (0x00030bb7) ncim_heading_pane_t1

0x4749,	// (0x00030bc5) ncim_indicator_popup_pane

0x475b,	// (0x00030bd7) ncim_query_button_pane

0x476f,	// (0x00030beb) ncim_query_content_pane_t1

0x4781,	// (0x00030bfd) ncim_query_content_pane_t2

0x0005,

0xfc28,	// (0x0003c0a4) ncim_query_content_pane_t

0x47bb,	// (0x00030c37) ncim_query_list_pane

0x47cd,	// (0x00030c49) ncim_query_popup_pane

0x4749,	// (0x00030bc5) ncim_indicator_popup_pane_ParamLimits

0xce8b,	// (0x00039307) ncim_query_content_pane_g1_ParamLimits

0xce8b,	// (0x00039307) ncim_query_content_pane_g1

0x476f,	// (0x00030beb) ncim_query_content_pane_t1_ParamLimits

0x4781,	// (0x00030bfd) ncim_query_content_pane_t2_ParamLimits

0xce97,	// (0x00039313) ncim_query_content_pane_t3_ParamLimits

0xce97,	// (0x00039313) ncim_query_content_pane_t3

0xceb4,	// (0x00039330) ncim_query_content_pane_t4_ParamLimits

0xceb4,	// (0x00039330) ncim_query_content_pane_t4

0xced1,	// (0x0003934d) ncim_query_content_pane_t5_ParamLimits

0xced1,	// (0x0003934d) ncim_query_content_pane_t5

0x4793,	// (0x00030c0f) ncim_query_content_pane_t6_ParamLimits

0x4793,	// (0x00030c0f) ncim_query_content_pane_t6

0xfc28,	// (0x0003c0a4) ncim_query_content_pane_t_ParamLimits

0x47bb,	// (0x00030c37) ncim_query_list_pane_ParamLimits

0x47cd,	// (0x00030c49) ncim_query_popup_pane_ParamLimits

0x47e1,	// (0x00030c5d) wait_bar_pane_cp04

0xe40e,	// (0x0003a88a) input_focus_pane_cp011

0x47e9,	// (0x00030c65) ncim_query_popup_pane_t1

0x47f7,	// (0x00030c73) ncim_list_query_list_pane_ParamLimits

0x47f7,	// (0x00030c73) ncim_list_query_list_pane

0xe40e,	// (0x0003a88a) bg_button_pane_cp027

0x480a,	// (0x00030c86) ncim_query_button_pane_g1

0xe40e,	// (0x0003a88a) list_highlight_pane_cp012

0x4814,	// (0x00030c90) ncim_list_query_list_pane_g1

0x481c,	// (0x00030c98) ncim_list_query_list_pane_t1

0xb8eb,	// (0x00037d67) cam4_indicators_pane_g3_ParamLimits

0xb8eb,	// (0x00037d67) cam4_indicators_pane_g3

0xb99c,	// (0x00037e18) vid4_indicators_pane_g5_ParamLimits

0xb99c,	// (0x00037e18) vid4_indicators_pane_g5

0x0dd4,	// (0x0002d250) vid4_progress_pane_g5_ParamLimits

0x0dd4,	// (0x0002d250) vid4_progress_pane_g5

0xcda6,	// (0x00039222) main_ncimui_pane_g1

0xcdfc,	// (0x00039278) ncimui_group_query_pane_ParamLimits

0xcdfc,	// (0x00039278) ncimui_group_query_pane

0xce38,	// (0x000392b4) ncimui_list_pane_ParamLimits

0xce38,	// (0x000392b4) ncimui_list_pane

0xce57,	// (0x000392d3) ncimui_text_pane_ParamLimits

0xce57,	// (0x000392d3) ncimui_text_pane

0xceee,	// (0x0003936a) ncimui_text_pane_t1_ParamLimits

0xceee,	// (0x0003936a) ncimui_text_pane_t1

0x4833,	// (0x00030caf) ncimui_list_single_graphic_pane_ParamLimits

0x4833,	// (0x00030caf) ncimui_list_single_graphic_pane

0xcf0c,	// (0x00039388) ncimui_query_pane_ParamLimits

0xcf0c,	// (0x00039388) ncimui_query_pane

0xe40e,	// (0x0003a88a) list_highlight_pane_cp013

0x4840,	// (0x00030cbc) ncim_list_query_list_pane_t1_copy1

0x484e,	// (0x00030cca) ncim_list_single_graphic_pane_g1

0x4856,	// (0x00030cd2) ncim_query_button_pane_cp01

0x4862,	// (0x00030cde) ncim_query_entry_pane_ParamLimits

0x4862,	// (0x00030cde) ncim_query_entry_pane

0x4875,	// (0x00030cf1) ncimui_query_pane_g1

0x4881,	// (0x00030cfd) ncimui_query_pane_t1_ParamLimits

0x4881,	// (0x00030cfd) ncimui_query_pane_t1

0xf0bd,	// (0x0003b539) input_focus_pane_cp012

0x489a,	// (0x00030d16) ncim_query_entry_pane_t1

0xeb94,	// (0x0003b010) main_im_pane_ParamLimits

0xf0bd,	// (0x0003b539) main_mobtv_pane_ParamLimits

0xf0bd,	// (0x0003b539) main_mobtv_pane

0xcc32,	// (0x000390ae) main_cset6_slider_pane_g18_ParamLimits

0xcc32,	// (0x000390ae) main_cset6_slider_pane_g18

0xcc56,	// (0x000390d2) main_cset6_slider_pane_g19_ParamLimits

0xcc56,	// (0x000390d2) main_cset6_slider_pane_g19

0x3a39,	// (0x0002feb5) bg_main_mobtv_pane_ParamLimits

0x3a39,	// (0x0002feb5) bg_main_mobtv_pane

0xcf1c,	// (0x00039398) main_mobtv_info_pane

0xcf25,	// (0x000393a1) main_mobtv_loading_pane_ParamLimits

0xcf25,	// (0x000393a1) main_mobtv_loading_pane

0x48ba,	// (0x00030d36) main_mobtv_pg_channel_list_pane

0x48c4,	// (0x00030d40) main_mobtv_pg_hdr_pane

0xcf32,	// (0x000393ae) main_mobtv_programe_curr_pane_ParamLimits

0xcf32,	// (0x000393ae) main_mobtv_programe_curr_pane

0xcf3f,	// (0x000393bb) main_mobtv_programe_next_pane_ParamLimits

0xcf3f,	// (0x000393bb) main_mobtv_programe_next_pane

0x48cd,	// (0x00030d49) popup_mobtv_noti_window

0x2d6e,	// (0x0002f1ea) main_tv_pg_hdr_pane_g1

0x48d5,	// (0x00030d51) main_tv_pg_hdr_pane_g2

0x48dd,	// (0x00030d59) main_tv_pg_hdr_pane_g3

0x48e5,	// (0x00030d61) main_tv_pg_hdr_pane_g4

0x48ed,	// (0x00030d69) main_tv_pg_hdr_pane_g5

0x48f5,	// (0x00030d71) main_tv_pg_hdr_pane_g6

0x48fd,	// (0x00030d79) main_tv_pg_hdr_pane_g7

0x4905,	// (0x00030d81) main_tv_pg_hdr_pane_g8

0x490d,	// (0x00030d89) main_tv_pg_hdr_pane_g9

0x4915,	// (0x00030d91) main_tv_pg_hdr_pane_g10

0x491f,	// (0x00030d9b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc35,	// (0x0003c0b1) main_tv_pg_hdr_pane_g

0x4929,	// (0x00030da5) main_tv_pg_hdr_pane_t1

0x4937,	// (0x00030db3) main_tv_pg_hdr_pane_t2

0x4945,	// (0x00030dc1) main_tv_pg_hdr_pane_t3

0x4953,	// (0x00030dcf) main_tv_pg_hdr_pane_t4

0x4961,	// (0x00030ddd) main_tv_pg_hdr_pane_t5

0x0004,

0xfc4c,	// (0x0003c0c8) main_tv_pg_hdr_pane_t

0x496f,	// (0x00030deb) single_mobtv_pg_channel_pane_ParamLimits

0x496f,	// (0x00030deb) single_mobtv_pg_channel_pane

0x4981,	// (0x00030dfd) single_mobtv_pg_channel_table_pane

0x498a,	// (0x00030e06) single_mobtv_pg_channel_thumb_pane

0x4993,	// (0x00030e0f) single_tv_pg_channel_pane_g1

0x499c,	// (0x00030e18) single_tv_pg_channel_pane_g2

0x0001,

0xfc57,	// (0x0003c0d3) single_tv_pg_channel_pane_g

0x2f9d,	// (0x0002f419) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2f9d,	// (0x0002f419) bg_single_mobtv_pg_channel_thumb_pane

0x49a5,	// (0x00030e21) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x49a5,	// (0x00030e21) single_mobtv_pg_channel_thumb_pane_g1

0x49b3,	// (0x00030e2f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x49b3,	// (0x00030e2f) single_mobtv_pg_channel_thumb_pane_g2

0x49bf,	// (0x00030e3b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x49bf,	// (0x00030e3b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc5c,	// (0x0003c0d8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc5c,	// (0x0003c0d8) single_mobtv_pg_channel_thumb_pane_g

0x49cb,	// (0x00030e47) single_mobtv_pg_channel_thumb_pane_t1

0x49d9,	// (0x00030e55) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc63,	// (0x0003c0df) single_mobtv_pg_channel_thumb_pane_t

0x2d6e,	// (0x0002f1ea) bg_single_mobtv_pg_channel_table_pane_g1

0x2d6e,	// (0x0002f1ea) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf713,	// (0x0003bb8f) bg_single_mobtv_pg_channel_table_pane_g

0x49e7,	// (0x00030e63) single_mobtv_pg_channel_table_pane_t1

0x49f5,	// (0x00030e71) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc68,	// (0x0003c0e4) single_mobtv_pg_channel_table_pane_t

0xcf54,	// (0x000393d0) main_mobtv_info_pane_g1_ParamLimits

0xcf54,	// (0x000393d0) main_mobtv_info_pane_g1

0xcf70,	// (0x000393ec) main_mobtv_info_pane_t1_ParamLimits

0xcf70,	// (0x000393ec) main_mobtv_info_pane_t1

0xcfd6,	// (0x00039452) main_mobtv_info_pane_t2_ParamLimits

0xcfd6,	// (0x00039452) main_mobtv_info_pane_t2

0x0002,

0xfc72,	// (0x0003c0ee) main_mobtv_info_pane_t_ParamLimits

0xfc72,	// (0x0003c0ee) main_mobtv_info_pane_t

0xd059,	// (0x000394d5) wait_bar_pane_cp05

0xd069,	// (0x000394e5) main_mobtv_loading_pane_g1_ParamLimits

0xd069,	// (0x000394e5) main_mobtv_loading_pane_g1

0xd075,	// (0x000394f1) main_mobtv_loading_pane_g2_ParamLimits

0xd075,	// (0x000394f1) main_mobtv_loading_pane_g2

0xd081,	// (0x000394fd) main_mobtv_loading_pane_g3_ParamLimits

0xd081,	// (0x000394fd) main_mobtv_loading_pane_g3

0x0002,

0xfc79,	// (0x0003c0f5) main_mobtv_loading_pane_g_ParamLimits

0xfc79,	// (0x0003c0f5) main_mobtv_loading_pane_g

0x4a03,	// (0x00030e7f) main_mobtv_loading_pane_t1_ParamLimits

0x4a03,	// (0x00030e7f) main_mobtv_loading_pane_t1

0x4a1b,	// (0x00030e97) main_mobtv_loading_pane_t2_ParamLimits

0x4a1b,	// (0x00030e97) main_mobtv_loading_pane_t2

0x0001,

0xfc80,	// (0x0003c0fc) main_mobtv_loading_pane_t_ParamLimits

0xfc80,	// (0x0003c0fc) main_mobtv_loading_pane_t

0xd08d,	// (0x00039509) wait_bar_pane_cp06_ParamLimits

0xd08d,	// (0x00039509) wait_bar_pane_cp06

0x4a3f,	// (0x00030ebb) main_mobtv_programe_curr_pane_t1

0x4a4d,	// (0x00030ec9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc85,	// (0x0003c101) main_mobtv_programe_curr_pane_t

0x4a5b,	// (0x00030ed7) main_mobtv_programe_next_pane_t1

0x4a69,	// (0x00030ee5) main_mobtv_programe_next_pane_t2

0x4a77,	// (0x00030ef3) main_mobtv_programe_next_pane_t3

0x0002,

0xfc8a,	// (0x0003c106) main_mobtv_programe_next_pane_t

0xe40e,	// (0x0003a88a) bg_popup_mobtv_noti_window_pane

0x4a85,	// (0x00030f01) popup_mobtv_noti_window_g1

0x4a8d,	// (0x00030f09) popup_mobtv_noti_window_t1

0x4a9b,	// (0x00030f17) popup_mobtv_noti_window_t2

0x0001,

0xfc91,	// (0x0003c10d) popup_mobtv_noti_window_t

0x2d6e,	// (0x0002f1ea) bg_popup_mobtv_noti_window_pane_g1

0xe40e,	// (0x0003a88a) sc_clock_pane

0xe40e,	// (0x0003a88a) main_fs_bigclock_pane

0xc8d4,	// (0x00038d50) blid2_tripm_pane_t4_ParamLimits

0xc8d4,	// (0x00038d50) blid2_tripm_pane_t4

0xd099,	// (0x00039515) sc_clock_pane_g1_ParamLimits

0xd099,	// (0x00039515) sc_clock_pane_g1

0xd0a7,	// (0x00039523) sc_clock_pane_t1_ParamLimits

0xd0a7,	// (0x00039523) sc_clock_pane_t1

0xd0ba,	// (0x00039536) sc_clock_pane_t2_ParamLimits

0xd0ba,	// (0x00039536) sc_clock_pane_t2

0xd0cc,	// (0x00039548) sc_clock_pane_t3_ParamLimits

0xd0cc,	// (0x00039548) sc_clock_pane_t3

0x0004,

0xfc96,	// (0x0003c112) sc_clock_pane_t_ParamLimits

0xfc96,	// (0x0003c112) sc_clock_pane_t

0xd9f1,	// (0x00039e6d) main_fs_bigclock_indicator_pane_ParamLimits

0xd9f1,	// (0x00039e6d) main_fs_bigclock_indicator_pane

0xd144,	// (0x000395c0) main_fs_bigclock_pane_g1_ParamLimits

0xd144,	// (0x000395c0) main_fs_bigclock_pane_g1

0xd9fd,	// (0x00039e79) main_fs_bigclock_pane_t1_ParamLimits

0xd9fd,	// (0x00039e79) main_fs_bigclock_pane_t1

0xda0f,	// (0x00039e8b) main_fs_bigclock_pane_t2_ParamLimits

0xda0f,	// (0x00039e8b) main_fs_bigclock_pane_t2

0xda21,	// (0x00039e9d) main_fs_bigclock_pane_t3_ParamLimits

0xda21,	// (0x00039e9d) main_fs_bigclock_pane_t3

0x0002,

0xfe90,	// (0x0003c30c) main_fs_bigclock_pane_t_ParamLimits

0xfe90,	// (0x0003c30c) main_fs_bigclock_pane_t

0xda33,	// (0x00039eaf) main_fs_bigclock_indicator_pane_g1

0x4763,	// (0x00030bdf) ncim_query_content_pane_g2_ParamLimits

0x4763,	// (0x00030bdf) ncim_query_content_pane_g2

0x0001,

0xfc23,	// (0x0003c09f) ncim_query_content_pane_g_ParamLimits

0xfc23,	// (0x0003c09f) ncim_query_content_pane_g

0xd0de,	// (0x0003955a) sc_clock_pane_t4_ParamLimits

0xd0de,	// (0x0003955a) sc_clock_pane_t4

0xf0bd,	// (0x0003b539) main_radioblah_pane

0x3902,	// (0x0002fd7e) cell_call4_button_pane_t1_copy1_ParamLimits

0x3902,	// (0x0002fd7e) cell_call4_button_pane_t1_copy1

0xcdae,	// (0x0003922a) main_ncimui_pane_t1_ParamLimits

0xcdae,	// (0x0003922a) main_ncimui_pane_t1

0xcdc8,	// (0x00039244) main_ncimui_pane_t2_ParamLimits

0xcdc8,	// (0x00039244) main_ncimui_pane_t2

0x0002,

0xfc1c,	// (0x0003c098) main_ncimui_pane_t_ParamLimits

0xfc1c,	// (0x0003c098) main_ncimui_pane_t

0x4bc5,	// (0x00031041) main_radioblah_anim_pane_ParamLimits

0x4bc5,	// (0x00031041) main_radioblah_anim_pane

0x4bd6,	// (0x00031052) main_radioblah_info_pane_ParamLimits

0x4bd6,	// (0x00031052) main_radioblah_info_pane

0x4bea,	// (0x00031066) main_radioblah_pane_t1_ParamLimits

0x4bea,	// (0x00031066) main_radioblah_pane_t1

0x4c06,	// (0x00031082) main_radioblah_pane_t2_ParamLimits

0x4c06,	// (0x00031082) main_radioblah_pane_t2

0x0003,

0xfcb7,	// (0x0003c133) main_radioblah_pane_t_ParamLimits

0xfcb7,	// (0x0003c133) main_radioblah_pane_t

0xd18c,	// (0x00039608) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd18c,	// (0x00039608) main_radioblah_rocker_ctrl_pane

0x4c4e,	// (0x000310ca) main_radioblah_info_pane_t1_ParamLimits

0x4c4e,	// (0x000310ca) main_radioblah_info_pane_t1

0xd1d1,	// (0x0003964d) main_radioblah_info_pane_t2_ParamLimits

0xd1d1,	// (0x0003964d) main_radioblah_info_pane_t2

0x0003,

0xfcc0,	// (0x0003c13c) main_radioblah_info_pane_t_ParamLimits

0xfcc0,	// (0x0003c13c) main_radioblah_info_pane_t

0x2d6e,	// (0x0002f1ea) main_radioblah_rocker_ctrl_pane_g1

0xd279,	// (0x000396f5) main_radioblah_rocker_ctrl_pane_g2

0xd281,	// (0x000396fd) main_radioblah_rocker_ctrl_pane_g3

0xd289,	// (0x00039705) main_radioblah_rocker_ctrl_pane_g4

0xd291,	// (0x0003970d) main_radioblah_rocker_ctrl_pane_g5

0xd299,	// (0x00039715) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcc9,	// (0x0003c145) main_radioblah_rocker_ctrl_pane_g

0xcd78,	// (0x000391f4) main_cset_text2_pane_t1_copy1_ParamLimits

0xb81b,	// (0x00037c97) cam4_image_uncrop_qvga_pane

0xb92f,	// (0x00037dab) vid4_image_uncrop_qcif_pane

0xca52,	// (0x00038ece) cam6_image_uncrop_qvga_pane_ParamLimits

0xca52,	// (0x00038ece) cam6_image_uncrop_qvga_pane

0x436e,	// (0x000307ea) vid6_image_uncrop_qcif_pane_ParamLimits

0x436e,	// (0x000307ea) vid6_image_uncrop_qcif_pane

0xe40e,	// (0x0003a88a) bg_popup_preview_window_pane_cp03

0x4709,	// (0x00030b85) list_cset_text2_pane

0x4711,	// (0x00030b8d) main_cset6_text2_pane_g1

0x4719,	// (0x00030b95) main_cset6_text2_pane_t1

0xd2a1,	// (0x0003971d) list_cset_text2_pane_t1_ParamLimits

0xd2a1,	// (0x0003971d) list_cset_text2_pane_t1

0xf0bd,	// (0x0003b539) main_radioblah_pane_ParamLimits

0xd047,	// (0x000394c3) main_mobtv_info_pane_t3_ParamLimits

0xd047,	// (0x000394c3) main_mobtv_info_pane_t3

0xd17a,	// (0x000395f6) main_radioblah_pane_g1

0xd1a5,	// (0x00039621) main_radioblah_info_pane_g1

0xd220,	// (0x0003969c) main_radioblah_info_pane_t3_ParamLimits

0xd220,	// (0x0003969c) main_radioblah_info_pane_t3

0x8c22,	// (0x0003509e) highlight_cell_cale_month_pane_ParamLimits

0x8c22,	// (0x0003509e) highlight_cell_cale_month_pane

0xe40e,	// (0x0003a88a) main_phob_fisheye_pane

0x30e7,	// (0x0002f563) scroll_pane_cp0031_ParamLimits

0x30e7,	// (0x0002f563) scroll_pane_cp0031

0x4478,	// (0x000308f4) wait_bar_pane_cp08_ParamLimits

0xcbe3,	// (0x0003905f) cset_list_set_pane_copy1_ParamLimits

0x4c88,	// (0x00031104) highlight_cell_cale_month_pane_g1

0xd2b8,	// (0x00039734) highlight_cell_cale_month_pane_t1

0x4c90,	// (0x0003110c) list_gen_pane_cp01

0x3b8a,	// (0x00030006) scroll_pane_01

0xf0d7,	// (0x0003b553) list_single_double_fisheye_pane

0x69b1,	// (0x00032e2d) list_double_fisheye_pane_g1_ParamLimits

0x69b1,	// (0x00032e2d) list_double_fisheye_pane_g1

0x69bd,	// (0x00032e39) list_double_fisheye_pane_g2_ParamLimits

0x69bd,	// (0x00032e39) list_double_fisheye_pane_g2

0xf0e0,	// (0x0003b55c) list_double_fisheye_pane_g3_ParamLimits

0xf0e0,	// (0x0003b55c) list_double_fisheye_pane_g3

0x0004,

0xfcd6,	// (0x0003c152) list_double_fisheye_pane_g_ParamLimits

0xfcd6,	// (0x0003c152) list_double_fisheye_pane_g

0x69ee,	// (0x00032e6a) list_double_fisheye_pane_t1_ParamLimits

0x69ee,	// (0x00032e6a) list_double_fisheye_pane_t1

0x6a09,	// (0x00032e85) list_double_fisheye_pane_t2_ParamLimits

0x6a09,	// (0x00032e85) list_double_fisheye_pane_t2

0x0001,

0xfce1,	// (0x0003c15d) list_double_fisheye_pane_t_ParamLimits

0xfce1,	// (0x0003c15d) list_double_fisheye_pane_t

0xe40e,	// (0x0003a88a) main_call5_pane

0xd104,	// (0x00039580) sc_swipe_pane_ParamLimits

0xd104,	// (0x00039580) sc_swipe_pane

0xd2d2,	// (0x0003974e) call5_image_pane_ParamLimits

0xd2d2,	// (0x0003974e) call5_image_pane

0xd2de,	// (0x0003975a) call5_swipe_1_pane_ParamLimits

0xd2de,	// (0x0003975a) call5_swipe_1_pane

0xd2ea,	// (0x00039766) call5_swipe_2_pane_ParamLimits

0xd2ea,	// (0x00039766) call5_swipe_2_pane

0xd302,	// (0x0003977e) popup_call5_audio_first_window_ParamLimits

0xd302,	// (0x0003977e) popup_call5_audio_first_window

0x2f9d,	// (0x0002f419) call5_swipe_1_pane_g1_ParamLimits

0x2f9d,	// (0x0002f419) call5_swipe_1_pane_g1

0x4c99,	// (0x00031115) call5_swipe_1_pane_g2_ParamLimits

0x4c99,	// (0x00031115) call5_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x0003c162) call5_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x0003c162) call5_swipe_1_pane_g

0x4ca5,	// (0x00031121) call5_swipe_1_pane_t1_ParamLimits

0x4ca5,	// (0x00031121) call5_swipe_1_pane_t1

0x2f9d,	// (0x0002f419) call5_swipe_2_pane_g1_ParamLimits

0x2f9d,	// (0x0002f419) call5_swipe_2_pane_g1

0x4cba,	// (0x00031136) call5_swipe_2_pane_g2_ParamLimits

0x4cba,	// (0x00031136) call5_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x0003c167) call5_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x0003c167) call5_swipe_2_pane_g

0x4cc6,	// (0x00031142) call5_swipe_2_pane_t1_ParamLimits

0x4cc6,	// (0x00031142) call5_swipe_2_pane_t1

0x4cdb,	// (0x00031157) sc_swipe_pane_g1_ParamLimits

0x4cdb,	// (0x00031157) sc_swipe_pane_g1

0x4ce8,	// (0x00031164) sc_swipe_pane_g2_ParamLimits

0x4ce8,	// (0x00031164) sc_swipe_pane_g2

0x0001,

0xfcf0,	// (0x0003c16c) sc_swipe_pane_g_ParamLimits

0xfcf0,	// (0x0003c16c) sc_swipe_pane_g

0x4cf4,	// (0x00031170) sc_swipe_pane_t1_ParamLimits

0x4cf4,	// (0x00031170) sc_swipe_pane_t1

0xe40e,	// (0x0003a88a) main_cmail_launcher_pane

0xd30e,	// (0x0003978a) aid_size_cell_cmail_l_ParamLimits

0xd30e,	// (0x0003978a) aid_size_cell_cmail_l

0xd31e,	// (0x0003979a) grid_cmail_l_pane_ParamLimits

0xd31e,	// (0x0003979a) grid_cmail_l_pane

0xd32a,	// (0x000397a6) cell_cmail_l_pane_ParamLimits

0xd32a,	// (0x000397a6) cell_cmail_l_pane

0xd33c,	// (0x000397b8) cell_cmail_l_pane_g1_ParamLimits

0xd33c,	// (0x000397b8) cell_cmail_l_pane_g1

0xd34c,	// (0x000397c8) cell_cmail_l_pane_t1_ParamLimits

0xd34c,	// (0x000397c8) cell_cmail_l_pane_t1

0x4d09,	// (0x00031185) cell_cmail_l_pane_t2_ParamLimits

0x4d09,	// (0x00031185) cell_cmail_l_pane_t2

0x0001,

0xfcf5,	// (0x0003c171) cell_cmail_l_pane_t_ParamLimits

0xfcf5,	// (0x0003c171) cell_cmail_l_pane_t

0xf0bd,	// (0x0003b539) grid_highlight_pane_cp018_ParamLimits

0xf0bd,	// (0x0003b539) grid_highlight_pane_cp018

0x73b5,	// (0x00033831) main2_pane_ParamLimits

0x73b5,	// (0x00033831) main2_pane

0xec3f,	// (0x0003b0bb) popup_sp_fs_action_menu_bg_pane_g1

0xec47,	// (0x0003b0c3) popup_sp_fs_action_menu_bg_pane_g2

0xec4f,	// (0x0003b0cb) popup_sp_fs_action_menu_bg_pane_g3

0xec57,	// (0x0003b0d3) popup_sp_fs_action_menu_bg_pane_g4

0xec5f,	// (0x0003b0db) popup_sp_fs_action_menu_bg_pane_g5

0xec67,	// (0x0003b0e3) popup_sp_fs_action_menu_bg_pane_g6

0xec6f,	// (0x0003b0eb) popup_sp_fs_action_menu_bg_pane_g7

0xec77,	// (0x0003b0f3) popup_sp_fs_action_menu_bg_pane_g8

0xec7f,	// (0x0003b0fb) popup_sp_fs_action_menu_bg_pane_g9

0xec87,	// (0x0003b103) popup_sp_fs_action_menu_bg_pane_g10

0xec87,	// (0x0003b103) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0003b628) popup_sp_fs_action_menu_bg_pane_g

0x61ba,	// (0x00032636) list_medium_line_x2_t3_g3_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x2_t3_g3_g1

0x61c6,	// (0x00032642) list_medium_line_x2_t3_g3_g2_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_x2_t3_g3_g2

0x61d2,	// (0x0003264e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x61d2,	// (0x0003264e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0003b6d8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0003b6d8) list_medium_line_x2_t3_g3_g

0x61de,	// (0x0003265a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x61de,	// (0x0003265a) list_medium_line_x2_t3_g3_t1

0x61f3,	// (0x0003266f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x61f3,	// (0x0003266f) list_medium_line_x2_t3_g3_t2

0x6205,	// (0x00032681) list_medium_line_x2_t3_g3_t3_ParamLimits

0x6205,	// (0x00032681) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0003b6df) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0003b6df) list_medium_line_x2_t3_g3_t

0x61ba,	// (0x00032636) list_medium_line_x2_t3_g2_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x2_t3_g2_g1

0x61d2,	// (0x0003264e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x61d2,	// (0x0003264e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0003b6e6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0003b6e6) list_medium_line_x2_t3_g2_g

0x621a,	// (0x00032696) list_medium_line_x2_t3_g2_t1_ParamLimits

0x621a,	// (0x00032696) list_medium_line_x2_t3_g2_t1

0x6230,	// (0x000326ac) list_medium_line_x2_t3_g2_t2_ParamLimits

0x6230,	// (0x000326ac) list_medium_line_x2_t3_g2_t2

0x6205,	// (0x00032681) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6205,	// (0x00032681) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0003b6eb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0003b6eb) list_medium_line_x2_t3_g2_t

0x61ba,	// (0x00032636) list_medium_line_x2_t4_g4_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x2_t4_g4_g1

0x6242,	// (0x000326be) list_medium_line_x2_t4_g4_g2_ParamLimits

0x6242,	// (0x000326be) list_medium_line_x2_t4_g4_g2

0x61c6,	// (0x00032642) list_medium_line_x2_t4_g4_g3_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_x2_t4_g4_g3

0x624e,	// (0x000326ca) list_medium_line_x2_t4_g4_g4_ParamLimits

0x624e,	// (0x000326ca) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0003b6f2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0003b6f2) list_medium_line_x2_t4_g4_g

0x625a,	// (0x000326d6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x625a,	// (0x000326d6) list_medium_line_x2_t4_g4_t1

0x6271,	// (0x000326ed) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6271,	// (0x000326ed) list_medium_line_x2_t4_g4_t2

0x6286,	// (0x00032702) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6286,	// (0x00032702) list_medium_line_x2_t4_g4_t3

0x6298,	// (0x00032714) list_medium_line_x2_t4_g4_t4_ParamLimits

0x6298,	// (0x00032714) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0003b6fb) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0003b6fb) list_medium_line_x2_t4_g4_t

0x61ba,	// (0x00032636) list_medium_line_x2_t2_g4_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x2_t2_g4_g1

0x6242,	// (0x000326be) list_medium_line_x2_t2_g4_g2_ParamLimits

0x6242,	// (0x000326be) list_medium_line_x2_t2_g4_g2

0x61c6,	// (0x00032642) list_medium_line_x2_t2_g4_g3_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_x2_t2_g4_g3

0x61d2,	// (0x0003264e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x61d2,	// (0x0003264e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0003b762) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0003b762) list_medium_line_x2_t2_g4_g

0x62aa,	// (0x00032726) list_medium_line_x2_t2_g4_t1_ParamLimits

0x62aa,	// (0x00032726) list_medium_line_x2_t2_g4_t1

0x6205,	// (0x00032681) list_medium_line_x2_t2_g4_t2_ParamLimits

0x6205,	// (0x00032681) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0003b76b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0003b76b) list_medium_line_x2_t2_g4_t

0x61ba,	// (0x00032636) list_medium_line_x2_t2_g3_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x2_t2_g3_g1

0x61c6,	// (0x00032642) list_medium_line_x2_t2_g3_g2_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_x2_t2_g3_g2

0x61d2,	// (0x0003264e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x61d2,	// (0x0003264e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0003b6d8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0003b6d8) list_medium_line_x2_t2_g3_g

0x62bf,	// (0x0003273b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x62bf,	// (0x0003273b) list_medium_line_x2_t2_g3_t1

0x6205,	// (0x00032681) list_medium_line_x2_t2_g3_t2_ParamLimits

0x6205,	// (0x00032681) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0003b770) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0003b770) list_medium_line_x2_t2_g3_t

0x8d92,	// (0x0003520e) main_sp_fs_list_pane_ParamLimits

0x8d92,	// (0x0003520e) main_sp_fs_list_pane

0x8d9f,	// (0x0003521b) sp_fs_scroll_pane_ParamLimits

0x8d9f,	// (0x0003521b) sp_fs_scroll_pane

0x62d4,	// (0x00032750) list_medium_line_x2_t3_t1

0x62e4,	// (0x00032760) list_medium_line_x2_t3_t2

0x62f2,	// (0x0003276e) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0003b7bb) list_medium_line_x2_t3_t

0x6300,	// (0x0003277c) list_medium_line_x3_t4_t1

0x6310,	// (0x0003278c) list_medium_line_x3_t4_t2

0x631e,	// (0x0003279a) list_medium_line_x3_t4_t3

0x632c,	// (0x000327a8) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0003b7c2) list_medium_line_x3_t4_t

0x633a,	// (0x000327b6) list_medium_line_x4_t5_t1

0x634a,	// (0x000327c6) list_medium_line_x4_t5_t2

0x631e,	// (0x0003279a) list_medium_line_x4_t5_t3

0x6358,	// (0x000327d4) list_medium_line_x4_t5_t4

0x632c,	// (0x000327a8) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0003b7cb) list_medium_line_x4_t5_t

0x61ba,	// (0x00032636) list_medium_line_t4_g4_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_t4_g4_g1

0x624e,	// (0x000326ca) list_medium_line_t4_g4_g2_ParamLimits

0x624e,	// (0x000326ca) list_medium_line_t4_g4_g2

0x6366,	// (0x000327e2) list_medium_line_t4_g4_g3_ParamLimits

0x6366,	// (0x000327e2) list_medium_line_t4_g4_g3

0x61d2,	// (0x0003264e) list_medium_line_t4_g4_g4_ParamLimits

0x61d2,	// (0x0003264e) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0003b7d6) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0003b7d6) list_medium_line_t4_g4_g

0x6372,	// (0x000327ee) list_medium_line_t4_g4_t1_ParamLimits

0x6372,	// (0x000327ee) list_medium_line_t4_g4_t1

0x6387,	// (0x00032803) list_medium_line_t4_g4_t2_ParamLimits

0x6387,	// (0x00032803) list_medium_line_t4_g4_t2

0x639d,	// (0x00032819) list_medium_line_t4_g4_t3_ParamLimits

0x639d,	// (0x00032819) list_medium_line_t4_g4_t3

0x63b3,	// (0x0003282f) list_medium_line_t4_g4_t4_ParamLimits

0x63b3,	// (0x0003282f) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0003b7df) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0003b7df) list_medium_line_t4_g4_t

0x8eba,	// (0x00035336) chi_dic_find_pane_g1

0x9b9a,	// (0x00036016) main_tport_pane

0x6628,	// (0x00032aa4) list_medium_line_plain_t1

0x61ba,	// (0x00032636) list_medium_line_t2_g2_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_t2_g2_g1

0x61c6,	// (0x00032642) list_medium_line_t2_g2_g2_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_t2_g2_g2

0x0001,

0xfa32,	// (0x0003beae) list_medium_line_t2_g2_g_ParamLimits

0xfa32,	// (0x0003beae) list_medium_line_t2_g2_g

0x6636,	// (0x00032ab2) list_medium_line_t2_g2_t1_ParamLimits

0x6636,	// (0x00032ab2) list_medium_line_t2_g2_t1

0x664d,	// (0x00032ac9) list_medium_line_t2_g2_t2_ParamLimits

0x664d,	// (0x00032ac9) list_medium_line_t2_g2_t2

0x0001,

0xfa37,	// (0x0003beb3) list_medium_line_t2_g2_t_ParamLimits

0xfa37,	// (0x0003beb3) list_medium_line_t2_g2_t

0x6860,	// (0x00032cdc) aid_sp_fs_list_icon_a_sm

0x6868,	// (0x00032ce4) aid_sp_fs_list_icon_d

0x6870,	// (0x00032cec) aid_sp_fs_text_primary

0x6879,	// (0x00032cf5) aid_sp_fs_text_secondary

0x6882,	// (0x00032cfe) list_medium_line

0x6882,	// (0x00032cfe) list_medium_line_g2

0x6882,	// (0x00032cfe) list_medium_line_g3

0x6882,	// (0x00032cfe) list_medium_line_plain

0x6882,	// (0x00032cfe) list_medium_line_plain_t2

0x6882,	// (0x00032cfe) list_medium_line_plain_t3

0x6882,	// (0x00032cfe) list_medium_line_right_icon

0x6882,	// (0x00032cfe) list_medium_line_right_iconx2

0x6882,	// (0x00032cfe) list_medium_line_t2

0x6882,	// (0x00032cfe) list_medium_line_t2_g2

0x6882,	// (0x00032cfe) list_medium_line_t2_g3

0x6882,	// (0x00032cfe) list_medium_line_t2_right_icon

0x6882,	// (0x00032cfe) list_medium_line_t2_right_iconx2

0x6882,	// (0x00032cfe) list_medium_line_t3

0x6882,	// (0x00032cfe) list_medium_line_t3_g2

0x6882,	// (0x00032cfe) list_medium_line_t3_g3

0x6882,	// (0x00032cfe) list_medium_line_t3_right_iconx2

0x688b,	// (0x00032d07) list_medium_line_t4_g4

0x6894,	// (0x00032d10) list_medium_line_x2

0x6894,	// (0x00032d10) list_medium_line_x2_t2_g2

0x6894,	// (0x00032d10) list_medium_line_x2_t2_g3

0x6894,	// (0x00032d10) list_medium_line_x2_t2_g4

0x6894,	// (0x00032d10) list_medium_line_x2_t3

0x6894,	// (0x00032d10) list_medium_line_x2_t3_g2

0x6894,	// (0x00032d10) list_medium_line_x2_t3_g3

0x6894,	// (0x00032d10) list_medium_line_x2_t3_g4

0x6894,	// (0x00032d10) list_medium_line_x2_t4_g2

0x6894,	// (0x00032d10) list_medium_line_x2_t4_g4

0x689d,	// (0x00032d19) list_medium_line_x3

0x689d,	// (0x00032d19) list_medium_line_x3_t4

0x689d,	// (0x00032d19) list_medium_line_x3_t4_g4

0x688b,	// (0x00032d07) list_medium_line_x4_t4

0x688b,	// (0x00032d07) list_medium_line_x4_t4_g7

0x688b,	// (0x00032d07) list_medium_line_x4_t5

0x68a6,	// (0x00032d22) list_single_fs_dyc_pane_ParamLimits

0x68a6,	// (0x00032d22) list_single_fs_dyc_pane

0x61ba,	// (0x00032636) list_medium_line_x4_t4_g7_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x4_t4_g7_g1

0x68e6,	// (0x00032d62) list_medium_line_x4_t4_g7_g2_ParamLimits

0x68e6,	// (0x00032d62) list_medium_line_x4_t4_g7_g2

0x68f2,	// (0x00032d6e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x68f2,	// (0x00032d6e) list_medium_line_x4_t4_g7_g3

0x6901,	// (0x00032d7d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x6901,	// (0x00032d7d) list_medium_line_x4_t4_g7_g4

0x690d,	// (0x00032d89) list_medium_line_x4_t4_g7_g5_ParamLimits

0x690d,	// (0x00032d89) list_medium_line_x4_t4_g7_g5

0x691c,	// (0x00032d98) list_medium_line_x4_t4_g7_g6_ParamLimits

0x691c,	// (0x00032d98) list_medium_line_x4_t4_g7_g6

0x692b,	// (0x00032da7) list_medium_line_x4_t4_g7_g7_ParamLimits

0x692b,	// (0x00032da7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc02,	// (0x0003c07e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc02,	// (0x0003c07e) list_medium_line_x4_t4_g7_g

0x6937,	// (0x00032db3) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6937,	// (0x00032db3) list_medium_line_x4_t4_g7_t1

0x694c,	// (0x00032dc8) list_medium_line_x4_t4_g7_t2_ParamLimits

0x694c,	// (0x00032dc8) list_medium_line_x4_t4_g7_t2

0x6961,	// (0x00032ddd) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6961,	// (0x00032ddd) list_medium_line_x4_t4_g7_t3

0x6976,	// (0x00032df2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6976,	// (0x00032df2) list_medium_line_x4_t4_g7_t4

0x6988,	// (0x00032e04) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6988,	// (0x00032e04) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc11,	// (0x0003c08d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc11,	// (0x0003c08d) list_medium_line_x4_t4_g7_t

0x699a,	// (0x00032e16) list_single_dyc_row_pane_ParamLimits

0x699a,	// (0x00032e16) list_single_dyc_row_pane

0xd2c6,	// (0x00039742) call5_gesture_pane_ParamLimits

0xd2c6,	// (0x00039742) call5_gesture_pane

0xd2f6,	// (0x00039772) call5_windows_pane_ParamLimits

0xd2f6,	// (0x00039772) call5_windows_pane

0xd362,	// (0x000397de) call5_swipe_1_pane_cp_ParamLimits

0xd362,	// (0x000397de) call5_swipe_1_pane_cp

0xd36e,	// (0x000397ea) call5_swipe_2_pane_cp_ParamLimits

0xd36e,	// (0x000397ea) call5_swipe_2_pane_cp

0x1383,	// (0x0002d7ff) call5_image_pane_cp

0xd37a,	// (0x000397f6) popup_call5_audio_first_window_cp_ParamLimits

0xd37a,	// (0x000397f6) popup_call5_audio_first_window_cp

0x4cdb,	// (0x00031157) call5_swipe_1_pane_g1_cp_ParamLimits

0x4cdb,	// (0x00031157) call5_swipe_1_pane_g1_cp

0x4d1b,	// (0x00031197) call5_swipe_1_pane_g2_cp

0x4cf4,	// (0x00031170) call5_swipe_1_pane_t1_cp_ParamLimits

0x4cf4,	// (0x00031170) call5_swipe_1_pane_t1_cp

0x4cdb,	// (0x00031157) call5_swipe_2_pane_g1_cp_ParamLimits

0x4cdb,	// (0x00031157) call5_swipe_2_pane_g1_cp

0x4d23,	// (0x0003119f) call5_swipe_2_pane_g2_cp

0x4d2b,	// (0x000311a7) call5_swipe_2_pane_t1_cp_ParamLimits

0x4d2b,	// (0x000311a7) call5_swipe_2_pane_t1_cp

0xf0bd,	// (0x0003b539) main_sp_fs_email_pane

0x4d40,	// (0x000311bc) main_sp_fs_listscroll_pane_te

0x6a2b,	// (0x00032ea7) popup_sp_fs_action_menu_pane_ParamLimits

0x6a2b,	// (0x00032ea7) popup_sp_fs_action_menu_pane

0x2d6e,	// (0x0002f1ea) bg_sp_fs_ctrlbar_pane_g1

0x4d49,	// (0x000311c5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4d52,	// (0x000311ce) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x4d5b,	// (0x000311d7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2d6e,	// (0x0002f1ea) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcfa,	// (0x0003c176) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2b5b,	// (0x0002efd7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2b5b,	// (0x0002efd7) bg_sp_fs_ctrlbar_ddmenu_pane

0x4d64,	// (0x000311e0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4d64,	// (0x000311e0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf0cb,	// (0x0003b547) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf0cb,	// (0x0003b547) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd03,	// (0x0003c17f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd03,	// (0x0003c17f) main_sp_fs_ctrlbar_ddmenu_pane_g

0x4d70,	// (0x000311ec) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x4d70,	// (0x000311ec) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x6a5b,	// (0x00032ed7) list_medium_line_t2_right_icon_g1

0x6a63,	// (0x00032edf) list_medium_line_t2_right_icon_t1

0x6a72,	// (0x00032eee) list_medium_line_t2_right_icon_t2

0x0001,

0xfd08,	// (0x0003c184) list_medium_line_t2_right_icon_t

0x2879,	// (0x0002ecf5) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2879,	// (0x0002ecf5) bg_sp_fs_ctrlbar_pane

0xd3db,	// (0x00039857) main_sp_fs_ctrlbar_button_pane_cp01

0xd3e3,	// (0x0003985f) main_sp_fs_ctrlbar_ddmenu_pane

0x4dda,	// (0x00031256) main_sp_fs_ctrlbar_pane_g1

0x4de6,	// (0x00031262) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd0d,	// (0x0003c189) main_sp_fs_ctrlbar_pane_g

0x4df2,	// (0x0003126e) main_sp_fs_ctrlbar_pane_t1

0x6a80,	// (0x00032efc) main_sp_fs_ctrlbar_pane

0x6a98,	// (0x00032f14) main_sp_fs_listscroll_pane_te_cp01

0x6aa9,	// (0x00032f25) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6aa9,	// (0x00032f25) popup_sp_fs_action_menu_pane_cp01

0xf0bd,	// (0x0003b539) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0bd,	// (0x0003b539) bg_sp_fs_highlight_list_pane_cp01

0x6ac5,	// (0x00032f41) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6ac5,	// (0x00032f41) sp_fs_action_menu_list_gene_pane_g1

0x4e07,	// (0x00031283) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4e07,	// (0x00031283) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd12,	// (0x0003c18e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd12,	// (0x0003c18e) sp_fs_action_menu_list_gene_pane_g

0x6ad4,	// (0x00032f50) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6ad4,	// (0x00032f50) sp_fs_action_menu_list_gene_pane_t1

0x6aec,	// (0x00032f68) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6aec,	// (0x00032f68) sp_fs_action_menu_list_gene_pane

0x4e14,	// (0x00031290) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4e14,	// (0x00031290) popup_sp_fs_action_menu_bg_pane

0x6b09,	// (0x00032f85) sp_fs_action_menu_list_pane_ParamLimits

0x6b09,	// (0x00032f85) sp_fs_action_menu_list_pane

0x4e22,	// (0x0003129e) sp_fs_scroll_pane_cp01_ParamLimits

0x4e22,	// (0x0003129e) sp_fs_scroll_pane_cp01

0x6b25,	// (0x00032fa1) list_medium_line_plain_t2_t1

0x6b34,	// (0x00032fb0) list_medium_line_plain_t2_t2

0x0001,

0xfd17,	// (0x0003c193) list_medium_line_plain_t2_t

0x6b42,	// (0x00032fbe) list_medium_line_plain_t3_t1

0x6b52,	// (0x00032fce) list_medium_line_plain_t3_t2

0x6b60,	// (0x00032fdc) list_medium_line_plain_t3_t3

0x0002,

0xfd1c,	// (0x0003c198) list_medium_line_plain_t3_t

0x61ba,	// (0x00032636) list_medium_line_x2_t2_g2_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x2_t2_g2_g1

0x61d2,	// (0x0003264e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x61d2,	// (0x0003264e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0003b6e6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0003b6e6) list_medium_line_x2_t2_g2_g

0x6372,	// (0x000327ee) list_medium_line_x2_t2_g2_t1_ParamLimits

0x6372,	// (0x000327ee) list_medium_line_x2_t2_g2_t1

0x6205,	// (0x00032681) list_medium_line_x2_t2_g2_t2_ParamLimits

0x6205,	// (0x00032681) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd23,	// (0x0003c19f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd23,	// (0x0003c19f) list_medium_line_x2_t2_g2_t

0x61ba,	// (0x00032636) list_medium_line_x2_t4_g2_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x2_t4_g2_g1

0x6b6e,	// (0x00032fea) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6b6e,	// (0x00032fea) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd28,	// (0x0003c1a4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd28,	// (0x0003c1a4) list_medium_line_x2_t4_g2_g

0x6b7f,	// (0x00032ffb) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6b7f,	// (0x00032ffb) list_medium_line_x2_t4_g2_t1

0x6b99,	// (0x00033015) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6b99,	// (0x00033015) list_medium_line_x2_t4_g2_t2

0x6bae,	// (0x0003302a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6bae,	// (0x0003302a) list_medium_line_x2_t4_g2_t3

0x6205,	// (0x00032681) list_medium_line_x2_t4_g2_t4_ParamLimits

0x6205,	// (0x00032681) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd2d,	// (0x0003c1a9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd2d,	// (0x0003c1a9) list_medium_line_x2_t4_g2_t

0x6bc3,	// (0x0003303f) list_medium_line_t3_right_iconx2_g1

0x6a5b,	// (0x00032ed7) list_medium_line_t3_right_iconx2_g2

0x6bcb,	// (0x00033047) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd36,	// (0x0003c1b2) list_medium_line_t3_right_iconx2_g

0x6bd3,	// (0x0003304f) list_medium_line_t3_right_iconx2_t1

0x6be3,	// (0x0003305f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd3d,	// (0x0003c1b9) list_medium_line_t3_right_iconx2_t

0x61ba,	// (0x00032636) list_medium_line_x3_t4_g4_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x3_t4_g4_g1

0x61c6,	// (0x00032642) list_medium_line_x3_t4_g4_g2_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_x3_t4_g4_g2

0x624e,	// (0x000326ca) list_medium_line_x3_t4_g4_g3_ParamLimits

0x624e,	// (0x000326ca) list_medium_line_x3_t4_g4_g3

0x6bf1,	// (0x0003306d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6bf1,	// (0x0003306d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd42,	// (0x0003c1be) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd42,	// (0x0003c1be) list_medium_line_x3_t4_g4_g

0x6636,	// (0x00032ab2) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6636,	// (0x00032ab2) list_medium_line_x3_t4_g4_t1

0x664d,	// (0x00032ac9) list_medium_line_x3_t4_g4_t2_ParamLimits

0x664d,	// (0x00032ac9) list_medium_line_x3_t4_g4_t2

0x6bfd,	// (0x00033079) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6bfd,	// (0x00033079) list_medium_line_x3_t4_g4_t3

0x6c12,	// (0x0003308e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6c12,	// (0x0003308e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd4b,	// (0x0003c1c7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd4b,	// (0x0003c1c7) list_medium_line_x3_t4_g4_t

0x6c2f,	// (0x000330ab) list_single_dyc_row_text_pane_t1_ParamLimits

0x6c2f,	// (0x000330ab) list_single_dyc_row_text_pane_t1

0x6c66,	// (0x000330e2) list_single_dyc_row_text_pane_t2_ParamLimits

0x6c66,	// (0x000330e2) list_single_dyc_row_text_pane_t2

0x6cba,	// (0x00033136) list_single_dyc_row_text_pane_t3_ParamLimits

0x6cba,	// (0x00033136) list_single_dyc_row_text_pane_t3

0x0002,

0xfd54,	// (0x0003c1d0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd54,	// (0x0003c1d0) list_single_dyc_row_text_pane_t

0x6ccc,	// (0x00033148) list_single_dyc_row_pane_g1_ParamLimits

0x6ccc,	// (0x00033148) list_single_dyc_row_pane_g1

0x6cd8,	// (0x00033154) list_single_dyc_row_pane_g2_ParamLimits

0x6cd8,	// (0x00033154) list_single_dyc_row_pane_g2

0x6ce4,	// (0x00033160) list_single_dyc_row_pane_g3_ParamLimits

0x6ce4,	// (0x00033160) list_single_dyc_row_pane_g3

0x6cf0,	// (0x0003316c) list_single_dyc_row_pane_g4_ParamLimits

0x6cf0,	// (0x0003316c) list_single_dyc_row_pane_g4

0x0003,

0xfd5b,	// (0x0003c1d7) list_single_dyc_row_pane_g_ParamLimits

0xfd5b,	// (0x0003c1d7) list_single_dyc_row_pane_g

0x6cfc,	// (0x00033178) list_single_dyc_row_text_pane_ParamLimits

0x6cfc,	// (0x00033178) list_single_dyc_row_text_pane

0xe40e,	// (0x0003a88a) bg_sp_fs_scroll_pane

0x4eda,	// (0x00031356) thumb_sp_fs_scroll_pane

0x61ba,	// (0x00032636) list_medium_line_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_g1

0x6372,	// (0x000327ee) list_medium_line_t1_ParamLimits

0x6372,	// (0x000327ee) list_medium_line_t1

0x61ba,	// (0x00032636) list_medium_line_x2_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x2_g1

0x61c6,	// (0x00032642) list_medium_line_x2_g2_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_x2_g2

0x0001,

0xfa32,	// (0x0003beae) list_medium_line_x2_g_ParamLimits

0xfa32,	// (0x0003beae) list_medium_line_x2_g

0x6d1b,	// (0x00033197) list_medium_line_x2_t1_ParamLimits

0x6d1b,	// (0x00033197) list_medium_line_x2_t1

0x61ba,	// (0x00032636) list_medium_line_x3_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x3_g1

0x61c6,	// (0x00032642) list_medium_line_x3_g2_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_x3_g2

0x0001,

0xfa32,	// (0x0003beae) list_medium_line_x3_g_ParamLimits

0xfa32,	// (0x0003beae) list_medium_line_x3_g

0x6d1b,	// (0x00033197) list_medium_line_x3_t1_ParamLimits

0x6d1b,	// (0x00033197) list_medium_line_x3_t1

0x4ef9,	// (0x00031375) thumb_sp_fs_scroll_pane_g1

0x4f02,	// (0x0003137e) thumb_sp_fs_scroll_pane_g2

0x4f0b,	// (0x00031387) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0003c1e0) thumb_sp_fs_scroll_pane_g

0x4ef9,	// (0x00031375) bg_sp_fs_scroll_pane_g1

0x4f02,	// (0x0003137e) bg_sp_fs_scroll_pane_g2

0x4f0b,	// (0x00031387) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0003c1e0) bg_sp_fs_scroll_pane_g

0x61ba,	// (0x00032636) list_medium_line_x2_t3_g4_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_x2_t3_g4_g1

0x6242,	// (0x000326be) list_medium_line_x2_t3_g4_g2_ParamLimits

0x6242,	// (0x000326be) list_medium_line_x2_t3_g4_g2

0x61c6,	// (0x00032642) list_medium_line_x2_t3_g4_g3_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_x2_t3_g4_g3

0x61d2,	// (0x0003264e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x61d2,	// (0x0003264e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0003b762) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0003b762) list_medium_line_x2_t3_g4_g

0x6d31,	// (0x000331ad) list_medium_line_x2_t3_g4_t1_ParamLimits

0x6d31,	// (0x000331ad) list_medium_line_x2_t3_g4_t1

0x6d47,	// (0x000331c3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6d47,	// (0x000331c3) list_medium_line_x2_t3_g4_t2

0x6205,	// (0x00032681) list_medium_line_x2_t3_g4_t3_ParamLimits

0x6205,	// (0x00032681) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd6b,	// (0x0003c1e7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd6b,	// (0x0003c1e7) list_medium_line_x2_t3_g4_t

0x61ba,	// (0x00032636) list_medium_line_g2_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_g2_g1

0x61c6,	// (0x00032642) list_medium_line_g2_g2_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_g2_g2

0x0001,

0xfa32,	// (0x0003beae) list_medium_line_g2_g_ParamLimits

0xfa32,	// (0x0003beae) list_medium_line_g2_g

0x62bf,	// (0x0003273b) list_medium_line_g2_t1_ParamLimits

0x62bf,	// (0x0003273b) list_medium_line_g2_t1

0x61ba,	// (0x00032636) list_medium_line_t3_g2_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_t3_g2_g1

0x61c6,	// (0x00032642) list_medium_line_t3_g2_g2_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_t3_g2_g2

0x0001,

0xfa32,	// (0x0003beae) list_medium_line_t3_g2_g_ParamLimits

0xfa32,	// (0x0003beae) list_medium_line_t3_g2_g

0x6d60,	// (0x000331dc) list_medium_line_t3_g2_t1_ParamLimits

0x6d60,	// (0x000331dc) list_medium_line_t3_g2_t1

0x6d7a,	// (0x000331f6) list_medium_line_t3_g2_t2_ParamLimits

0x6d7a,	// (0x000331f6) list_medium_line_t3_g2_t2

0x6d8f,	// (0x0003320b) list_medium_line_t3_g2_t3_ParamLimits

0x6d8f,	// (0x0003320b) list_medium_line_t3_g2_t3

0x0002,

0xfd72,	// (0x0003c1ee) list_medium_line_t3_g2_t_ParamLimits

0xfd72,	// (0x0003c1ee) list_medium_line_t3_g2_t

0x6a5b,	// (0x00032ed7) list_medium_line_right_icon_g1

0x6da5,	// (0x00033221) list_medium_line_right_icon_t1

0x61ba,	// (0x00032636) list_medium_line_t2_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_t2_g1

0x6db3,	// (0x0003322f) list_medium_line_t2_t1_ParamLimits

0x6db3,	// (0x0003322f) list_medium_line_t2_t1

0x6dc9,	// (0x00033245) list_medium_line_t2_t2_ParamLimits

0x6dc9,	// (0x00033245) list_medium_line_t2_t2

0x0001,

0xfd79,	// (0x0003c1f5) list_medium_line_t2_t_ParamLimits

0xfd79,	// (0x0003c1f5) list_medium_line_t2_t

0x61ba,	// (0x00032636) list_medium_line_t3_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_t3_g1

0x6ddb,	// (0x00033257) list_medium_line_t3_t1_ParamLimits

0x6ddb,	// (0x00033257) list_medium_line_t3_t1

0x6df2,	// (0x0003326e) list_medium_line_t3_t2_ParamLimits

0x6df2,	// (0x0003326e) list_medium_line_t3_t2

0x6e07,	// (0x00033283) list_medium_line_t3_t3_ParamLimits

0x6e07,	// (0x00033283) list_medium_line_t3_t3

0x0002,

0xfd7e,	// (0x0003c1fa) list_medium_line_t3_t_ParamLimits

0xfd7e,	// (0x0003c1fa) list_medium_line_t3_t

0x61ba,	// (0x00032636) list_medium_line_g3_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_g3_g1

0x6242,	// (0x000326be) list_medium_line_g3_g2_ParamLimits

0x6242,	// (0x000326be) list_medium_line_g3_g2

0x61c6,	// (0x00032642) list_medium_line_g3_g3_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_g3_g3

0x0002,

0xfd85,	// (0x0003c201) list_medium_line_g3_g_ParamLimits

0xfd85,	// (0x0003c201) list_medium_line_g3_g

0x62aa,	// (0x00032726) list_medium_line_g3_t1_ParamLimits

0x62aa,	// (0x00032726) list_medium_line_g3_t1

0x61ba,	// (0x00032636) list_medium_line_t2_g3_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_t2_g3_g1

0x6242,	// (0x000326be) list_medium_line_t2_g3_g2_ParamLimits

0x6242,	// (0x000326be) list_medium_line_t2_g3_g2

0x61c6,	// (0x00032642) list_medium_line_t2_g3_g3_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_t2_g3_g3

0x0002,

0xfd85,	// (0x0003c201) list_medium_line_t2_g3_g_ParamLimits

0xfd85,	// (0x0003c201) list_medium_line_t2_g3_g

0x6e19,	// (0x00033295) list_medium_line_t2_g3_t1_ParamLimits

0x6e19,	// (0x00033295) list_medium_line_t2_g3_t1

0x6e33,	// (0x000332af) list_medium_line_t2_g3_t2_ParamLimits

0x6e33,	// (0x000332af) list_medium_line_t2_g3_t2

0x0001,

0xfd8c,	// (0x0003c208) list_medium_line_t2_g3_t_ParamLimits

0xfd8c,	// (0x0003c208) list_medium_line_t2_g3_t

0x61ba,	// (0x00032636) list_medium_line_t3_g3_g1_ParamLimits

0x61ba,	// (0x00032636) list_medium_line_t3_g3_g1

0x6242,	// (0x000326be) list_medium_line_t3_g3_g2_ParamLimits

0x6242,	// (0x000326be) list_medium_line_t3_g3_g2

0x61c6,	// (0x00032642) list_medium_line_t3_g3_g3_ParamLimits

0x61c6,	// (0x00032642) list_medium_line_t3_g3_g3

0x0002,

0xfd85,	// (0x0003c201) list_medium_line_t3_g3_g_ParamLimits

0xfd85,	// (0x0003c201) list_medium_line_t3_g3_g

0x6e48,	// (0x000332c4) list_medium_line_t3_g3_t1_ParamLimits

0x6e48,	// (0x000332c4) list_medium_line_t3_g3_t1

0x6e61,	// (0x000332dd) list_medium_line_t3_g3_t2_ParamLimits

0x6e61,	// (0x000332dd) list_medium_line_t3_g3_t2

0x6e77,	// (0x000332f3) list_medium_line_t3_g3_t3_ParamLimits

0x6e77,	// (0x000332f3) list_medium_line_t3_g3_t3

0x0002,

0xfd91,	// (0x0003c20d) list_medium_line_t3_g3_t_ParamLimits

0xfd91,	// (0x0003c20d) list_medium_line_t3_g3_t

0x6bc3,	// (0x0003303f) list_medium_line_right_iconx2_g1

0x6a5b,	// (0x00032ed7) list_medium_line_right_iconx2_g2

0x0001,

0xfd98,	// (0x0003c214) list_medium_line_right_iconx2_g

0x6e8d,	// (0x00033309) list_medium_line_right_iconx2_t1

0x6bc3,	// (0x0003303f) list_medium_line_t2_right_iconx2_g1

0x6a5b,	// (0x00032ed7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd98,	// (0x0003c214) list_medium_line_t2_right_iconx2_g

0x6e9b,	// (0x00033317) list_medium_line_t2_right_iconx2_t1

0x6eab,	// (0x00033327) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd9d,	// (0x0003c219) list_medium_line_t2_right_iconx2_t

0x6628,	// (0x00032aa4) list_medium_line_x4_t4_t1

0x6eb9,	// (0x00033335) list_medium_line_x4_t4_t2

0x6ec7,	// (0x00033343) list_medium_line_x4_t4_t3

0x6ed5,	// (0x00033351) list_medium_line_x4_t4_t4

0x0003,

0xfda2,	// (0x0003c21e) list_medium_line_x4_t4_t

0xd412,	// (0x0003988e) tport_appsw_pane_ParamLimits

0xd412,	// (0x0003988e) tport_appsw_pane

0xd41e,	// (0x0003989a) tport_contact_pane_ParamLimits

0xd41e,	// (0x0003989a) tport_contact_pane

0xd42c,	// (0x000398a8) tport_listscroll_pane_ParamLimits

0xd42c,	// (0x000398a8) tport_listscroll_pane

0xd43a,	// (0x000398b6) cell_tport_appsw_pane_ParamLimits

0xd43a,	// (0x000398b6) cell_tport_appsw_pane

0x3076,	// (0x0002f4f2) tport_appsw_pane_g1_ParamLimits

0x3076,	// (0x0002f4f2) tport_appsw_pane_g1

0x4f30,	// (0x000313ac) tport_contact_pane_g1

0x4f39,	// (0x000313b5) tport_contact_pane_t1

0x4f47,	// (0x000313c3) tport_contact_pane_t2

0x0001,

0xfdab,	// (0x0003c227) tport_contact_pane_t

0x4f55,	// (0x000313d1) list_tport_pane

0xec99,	// (0x0003b115) scroll_pane_cp_030

0x4f66,	// (0x000313e2) cell_tport_appsw_pane_g1

0x4f76,	// (0x000313f2) cell_tport_appsw_pane_t1

0xe40e,	// (0x0003a88a) grid_highlight_pane_cp019

0xd461,	// (0x000398dd) list_tport_double_graphic_pane_ParamLimits

0xd461,	// (0x000398dd) list_tport_double_graphic_pane

0xf0bd,	// (0x0003b539) list_highlight_pane_cp023_ParamLimits

0xf0bd,	// (0x0003b539) list_highlight_pane_cp023

0xd46e,	// (0x000398ea) list_tport_double_graphic_pane_g1_ParamLimits

0xd46e,	// (0x000398ea) list_tport_double_graphic_pane_g1

0xd47b,	// (0x000398f7) list_tport_double_graphic_pane_t1_ParamLimits

0xd47b,	// (0x000398f7) list_tport_double_graphic_pane_t1

0xd490,	// (0x0003990c) list_tport_double_graphic_pane_t2_ParamLimits

0xd490,	// (0x0003990c) list_tport_double_graphic_pane_t2

0x0001,

0xfdb7,	// (0x0003c233) list_tport_double_graphic_pane_t_ParamLimits

0xfdb7,	// (0x0003c233) list_tport_double_graphic_pane_t

0xe40e,	// (0x0003a88a) main_cale_note_pane

0xbb1e,	// (0x00037f9a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbb1e,	// (0x00037f9a) cell_vitu2_function_top_wide_pane_cp01

0xd059,	// (0x000394d5) wait_bar_pane_cp05_ParamLimits

0xe40e,	// (0x0003a88a) listscroll_cmail_pane

0x4f84,	// (0x00031400) list_cmail_pane

0xd4a2,	// (0x0003991e) list_cmail_body_pane

0xd4a2,	// (0x0003991e) list_single_cmail_header_caption_pane

0xd4ba,	// (0x00039936) list_single_cmail_header_detail_pane_ParamLimits

0xd4ba,	// (0x00039936) list_single_cmail_header_detail_pane

0x4fa0,	// (0x0003141c) list_single_cmail_header_caption_pane_t1

0x6eeb,	// (0x00033367) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6eeb,	// (0x00033367) list_single_cmail_header_detail_pane_g1

0x61c6,	// (0x00032642) list_single_cmail_header_detail_pane_g2_ParamLimits

0x61c6,	// (0x00032642) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdbc,	// (0x0003c238) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdbc,	// (0x0003c238) list_single_cmail_header_detail_pane_g

0x6f01,	// (0x0003337d) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6f01,	// (0x0003337d) list_single_cmail_header_detail_pane_t1

0x6f4d,	// (0x000333c9) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6f4d,	// (0x000333c9) list_single_cmail_header_editor_pane_bg

0x5013,	// (0x0003148f) list_cmail_body_pane_g1

0x501c,	// (0x00031498) list_cmail_body_pane_t1

0x3a84,	// (0x0002ff00) list_single_cmail_header_editor_pane_bg_g1

0xefb0,	// (0x0003b42c) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3a94,	// (0x0002ff10) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3a8c,	// (0x0002ff08) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3d1d,	// (0x00030199) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3ab4,	// (0x0002ff30) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3aa4,	// (0x0002ff20) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3aac,	// (0x0002ff28) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xef90,	// (0x0003b40c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd4e4,	// (0x00039960) calenote_gesture_pane_ParamLimits

0xd4e4,	// (0x00039960) calenote_gesture_pane

0xd4fc,	// (0x00039978) calenote_window_pane_ParamLimits

0xd4fc,	// (0x00039978) calenote_window_pane

0x502a,	// (0x000314a6) popup_note_window_cp01

0xd514,	// (0x00039990) calenote_swipe_1_pane_ParamLimits

0xd514,	// (0x00039990) calenote_swipe_1_pane

0xd36e,	// (0x000397ea) calenote_swipe_2_pane_ParamLimits

0xd36e,	// (0x000397ea) calenote_swipe_2_pane

0x4cdb,	// (0x00031157) calenote_swipe_1_pane_g1_ParamLimits

0x4cdb,	// (0x00031157) calenote_swipe_1_pane_g1

0x4ce8,	// (0x00031164) calenote_swipe_1_pane_g2_ParamLimits

0x4ce8,	// (0x00031164) calenote_swipe_1_pane_g2

0x0001,

0xfcf0,	// (0x0003c16c) calenote_swipe_1_pane_g_ParamLimits

0xfcf0,	// (0x0003c16c) calenote_swipe_1_pane_g

0x503c,	// (0x000314b8) calenote_swipe_1_pane_t1_ParamLimits

0x503c,	// (0x000314b8) calenote_swipe_1_pane_t1

0x4cdb,	// (0x00031157) calenote_swipe_2_pane_g1_ParamLimits

0x4cdb,	// (0x00031157) calenote_swipe_2_pane_g1

0x505b,	// (0x000314d7) calenote_swipe_2_pane_g2_ParamLimits

0x505b,	// (0x000314d7) calenote_swipe_2_pane_g2

0x0001,

0xfdc8,	// (0x0003c244) calenote_swipe_2_pane_g_ParamLimits

0xfdc8,	// (0x0003c244) calenote_swipe_2_pane_g

0x5067,	// (0x000314e3) calenote_swipe_2_pane_t1_ParamLimits

0x5067,	// (0x000314e3) calenote_swipe_2_pane_t1

0xe40e,	// (0x0003a88a) main_mup_navstr_pane

0xa9f3,	// (0x00036e6f) main_mup3_pane_t7_ParamLimits

0xa9f3,	// (0x00036e6f) main_mup3_pane_t7

0xb37f,	// (0x000377fb) main_mp4_pane_g6_ParamLimits

0xb37f,	// (0x000377fb) main_mp4_pane_g6

0xb6b3,	// (0x00037b2f) main_image3_pane_t4_ParamLimits

0xb6b3,	// (0x00037b2f) main_image3_pane_t4

0xd527,	// (0x000399a3) popup_navstr_preview_pane_ParamLimits

0xd527,	// (0x000399a3) popup_navstr_preview_pane

0xd533,	// (0x000399af) scroll_navstr_pane_ParamLimits

0xd533,	// (0x000399af) scroll_navstr_pane

0xe40e,	// (0x0003a88a) bg_popup_preview_window_pane_cp04

0x508e,	// (0x0003150a) popup_navstr_preview_pane_t1

0xd53f,	// (0x000399bb) scroll_navstr_pane_g1_ParamLimits

0xd53f,	// (0x000399bb) scroll_navstr_pane_g1

0xd54c,	// (0x000399c8) scroll_navstr_pane_t1_ParamLimits

0xd54c,	// (0x000399c8) scroll_navstr_pane_t1

0x5033,	// (0x000314af) bg_button_pane_cp014

0x5033,	// (0x000314af) bg_button_pane_cp030

0x69d1,	// (0x00032e4d) list_double_fisheye_pane_g4_ParamLimits

0x69d1,	// (0x00032e4d) list_double_fisheye_pane_g4

0x69dd,	// (0x00032e59) list_double_fisheye_pane_g5_ParamLimits

0x69dd,	// (0x00032e59) list_double_fisheye_pane_g5

0x4f94,	// (0x00031410) sp_fs_scroll_pane_cp03

0x4dda,	// (0x00031256) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4de6,	// (0x00031262) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd0d,	// (0x0003c189) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x4df2,	// (0x0003126e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4f8c,	// (0x00031408) sp_fs_scroll_pane_cp02

0xecab,	// (0x0003b127) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xecab,	// (0x0003b127) popup_sp_fs_calendar_preview_list_single_pane

0xe40e,	// (0x0003a88a) main_cam6_pano_pane

0xf0bd,	// (0x0003b539) main_mup3_pane_ParamLimits

0xe40e,	// (0x0003a88a) main_phacti_pane

0xcf4c,	// (0x000393c8) bg_button_pane_cp11

0xcf64,	// (0x000393e0) main_mobtv_info_pane_g2_ParamLimits

0xcf64,	// (0x000393e0) main_mobtv_info_pane_g2

0x0001,

0xfc6d,	// (0x0003c0e9) main_mobtv_info_pane_g_ParamLimits

0xfc6d,	// (0x0003c0e9) main_mobtv_info_pane_g

0xd0f0,	// (0x0003956c) sc_clock_pane_t5_ParamLimits

0xd0f0,	// (0x0003956c) sc_clock_pane_t5

0xd17a,	// (0x000395f6) main_radioblah_pane_g1_ParamLimits

0x4c1e,	// (0x0003109a) main_radioblah_pane_t3_ParamLimits

0x4c1e,	// (0x0003109a) main_radioblah_pane_t3

0x4c36,	// (0x000310b2) main_radioblah_pane_t4_ParamLimits

0x4c36,	// (0x000310b2) main_radioblah_pane_t4

0xd198,	// (0x00039614) main_radioblah_text_pane_ParamLimits

0xd198,	// (0x00039614) main_radioblah_text_pane

0xd1a5,	// (0x00039621) main_radioblah_info_pane_g1_ParamLimits

0xd232,	// (0x000396ae) main_radioblah_info_pane_t4_ParamLimits

0xd232,	// (0x000396ae) main_radioblah_info_pane_t4

0xf0bd,	// (0x0003b539) main_sp_fs_calendar_pane

0xd55e,	// (0x000399da) main_phacti_pane_g1

0xd566,	// (0x000399e2) phacti_note_pane_ParamLimits

0xd566,	// (0x000399e2) phacti_note_pane

0x50a5,	// (0x00031521) phacti_term_pane_ParamLimits

0x50a5,	// (0x00031521) phacti_term_pane

0x50ba,	// (0x00031536) phacti_note_pane_t1_ParamLimits

0x50ba,	// (0x00031536) phacti_note_pane_t1

0x6f5f,	// (0x000333db) phacti_term_pane_g1

0x6f67,	// (0x000333e3) phacti_term_pane_t1_ParamLimits

0x6f67,	// (0x000333e3) phacti_term_pane_t1

0x5103,	// (0x0003157f) popup_sp_fs_calendar_preview_list_single_pane_g1

0x510b,	// (0x00031587) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdd2,	// (0x0003c24e) popup_sp_fs_calendar_preview_list_single_pane_g

0x5113,	// (0x0003158f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x5113,	// (0x0003158f) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5129,	// (0x000315a5) aid_popup_sp_fs_bg_corner_pane

0x2d6e,	// (0x0002f1ea) popup_sp_fs_calendar_preview_bg_pane_g1

0xe40e,	// (0x0003a88a) popup_sp_fs_calendar_preview_bg_pane

0x5131,	// (0x000315ad) popup_sp_fs_calendar_preview_list_pane

0xf0bd,	// (0x0003b539) bg_main_sp_fs_cale_pane_ParamLimits

0xf0bd,	// (0x0003b539) bg_main_sp_fs_cale_pane

0x6f91,	// (0x0003340d) listscroll_cale_mrui_pane_ParamLimits

0x6f91,	// (0x0003340d) listscroll_cale_mrui_pane

0x6fa5,	// (0x00033421) listscroll_sp_fs_schedule_track_pane

0x6fae,	// (0x0003342a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6fae,	// (0x0003342a) main_sp_fs_ctrlbar_pane_cp01

0x5170,	// (0x000315ec) main_sp_fs_ribbon_pane

0x6fbf,	// (0x0003343b) popup_sp_fs_cale_preview_window

0xd5a1,	// (0x00039a1d) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd5a1,	// (0x00039a1d) list_single_sp_fs_schedule_track_pane

0x7503,	// (0x0003397f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x7503,	// (0x0003397f) bg_sp_fs_highlight_list_pane_cp03

0xd5b6,	// (0x00039a32) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd5b6,	// (0x00039a32) list_single_sp_fs_schedule_track_pane_g1

0xd5c2,	// (0x00039a3e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd5c2,	// (0x00039a3e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd7,	// (0x0003c253) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd7,	// (0x0003c253) list_single_sp_fs_schedule_track_pane_g

0xd5ce,	// (0x00039a4a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd5ce,	// (0x00039a4a) list_single_sp_fs_schedule_track_pane_t1

0xd5e6,	// (0x00039a62) sp_fs_schedule_track_pane_ParamLimits

0xd5e6,	// (0x00039a62) sp_fs_schedule_track_pane

0x518a,	// (0x00031606) sp_fs_schedule_track_pane_g1

0x5192,	// (0x0003160e) sp_fs_schedule_track_pane_g2

0x519a,	// (0x00031616) sp_fs_schedule_track_pane_g3

0x51a2,	// (0x0003161e) sp_fs_schedule_track_pane_g4

0x51aa,	// (0x00031626) sp_fs_schedule_track_pane_g5

0x0004,

0xfddc,	// (0x0003c258) sp_fs_schedule_track_pane_g

0x3a84,	// (0x0002ff00) bg_sp_fs_schedule_viewer_highlight_g1

0xefb0,	// (0x0003b42c) bg_sp_fs_schedule_viewer_highlight_g2

0x3a8c,	// (0x0002ff08) bg_sp_fs_schedule_viewer_highlight_g3

0x3a94,	// (0x0002ff10) bg_sp_fs_schedule_viewer_highlight_g4

0x3d1d,	// (0x00030199) bg_sp_fs_schedule_viewer_highlight_g5

0x3aa4,	// (0x0002ff20) bg_sp_fs_schedule_viewer_highlight_g6

0x3aac,	// (0x0002ff28) bg_sp_fs_schedule_viewer_highlight_g7

0x3ab4,	// (0x0002ff30) bg_sp_fs_schedule_viewer_highlight_g8

0xef90,	// (0x0003b40c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde7,	// (0x0003c263) bg_sp_fs_schedule_viewer_highlight_g

0xe40e,	// (0x0003a88a) bg_main_sp_fs_ribbon_pane

0xb8a8,	// (0x00037d24) main_sp_fs_ribbon_pane_g1

0x51b2,	// (0x0003162e) main_sp_fs_ribbon_pane_t1

0xd5f6,	// (0x00039a72) main_sp_fs_ribbon_pane_t2

0x51c1,	// (0x0003163d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdfa,	// (0x0003c276) main_sp_fs_ribbon_pane_t

0x51d0,	// (0x0003164c) main_sp_fs_ribbon_scheduler_pane

0x51d8,	// (0x00031654) bg_main_sp_fs_ribbon_pane_g1

0x51e1,	// (0x0003165d) bg_main_sp_fs_ribbon_pane_g2

0x51ea,	// (0x00031666) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe01,	// (0x0003c27d) bg_main_sp_fs_ribbon_pane_g

0x51f2,	// (0x0003166e) main_sp_fs_ribbon_scheduler_pane_g1

0x51fb,	// (0x00031677) main_sp_fs_ribbon_scheduler_pane_g2

0x5204,	// (0x00031680) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe08,	// (0x0003c284) main_sp_fs_ribbon_scheduler_pane_g

0x4c90,	// (0x0003110c) list_cale_mrui_pane

0x520d,	// (0x00031689) sp_fs_scroll_pane_cp07_ParamLimits

0x520d,	// (0x00031689) sp_fs_scroll_pane_cp07

0xd605,	// (0x00039a81) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd605,	// (0x00039a81) bg_sp_fs_schedule_viewer_highlight

0x5222,	// (0x0003169e) list_single_sp_fs_schedule_track_pane_cp01

0x522a,	// (0x000316a6) list_sp_fs_schedule_track_pane

0x5232,	// (0x000316ae) sp_fs_scroll_pane_cp06_ParamLimits

0x5232,	// (0x000316ae) sp_fs_scroll_pane_cp06

0x2d6e,	// (0x0002f1ea) bgmain_sp_fs_calendar_pane_g1

0x6fce,	// (0x0003344a) list_single_cale_mrui_pane_ParamLimits

0x6fce,	// (0x0003344a) list_single_cale_mrui_pane

0x6ff4,	// (0x00033470) list_single_cale_mrui_row_pane_ParamLimits

0x6ff4,	// (0x00033470) list_single_cale_mrui_row_pane

0x7001,	// (0x0003347d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7001,	// (0x0003347d) list_single_cale_mrui_row_pane_g1

0x7039,	// (0x000334b5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7039,	// (0x000334b5) list_single_cale_mrui_row_pane_t1

0x704b,	// (0x000334c7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x704b,	// (0x000334c7) list_single_cale_mrui_row_pane_t2

0x70b1,	// (0x0003352d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x70b1,	// (0x0003352d) list_single_cale_mrui_row_pane_t3

0x70e0,	// (0x0003355c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x70e0,	// (0x0003355c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe14,	// (0x0003c290) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe14,	// (0x0003c290) list_single_cale_mrui_row_pane_t

0x710f,	// (0x0003358b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x710f,	// (0x0003358b) list_single_cmail_header_editor_pane_bg_cp01

0x7133,	// (0x000335af) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7133,	// (0x000335af) list_single_cmail_header_editor_pane_bg_cp02

0xd612,	// (0x00039a8e) main_radioblah_text_pane_t1_ParamLimits

0xd612,	// (0x00039a8e) main_radioblah_text_pane_t1

0xd62b,	// (0x00039aa7) cam6_indi_pane_cp01

0xd633,	// (0x00039aaf) cam6_mode_pane_cp01

0xd63b,	// (0x00039ab7) cam6_pano_pane

0xd644,	// (0x00039ac0) cam6_zoom_pane_cp01

0xd64c,	// (0x00039ac8) cam6_pano_image_pane

0xd655,	// (0x00039ad1) cam6_pano_pane_g1

0x499c,	// (0x00030e18) cam6_pano_pane_g2

0xd65e,	// (0x00039ada) cam6_pano_pane_g3

0xd667,	// (0x00039ae3) cam6_pano_pane_g4

0x32d4,	// (0x0002f750) cam6_pano_pane_g5

0xd670,	// (0x00039aec) cam6_pano_pane_g6

0xd678,	// (0x00039af4) cam6_pano_pane_g7

0xd680,	// (0x00039afc) cam6_pano_pane_g8

0xd689,	// (0x00039b05) cam6_pano_pane_g9

0x0008,

0xfe1d,	// (0x0003c299) cam6_pano_pane_g

0xe40e,	// (0x0003a88a) main_browser_tag_pane

0x5086,	// (0x00031502) grid_navstr_albumart_pane

0xd692,	// (0x00039b0e) cell_navstr_albumart_pane_ParamLimits

0xd692,	// (0x00039b0e) cell_navstr_albumart_pane

0x150c,	// (0x0002d988) cell_navstr_albumart_pane_g1

0x2656,	// (0x0002ead2) cell_navstr_albumart_pane_g2

0x2666,	// (0x0002eae2) cell_navstr_albumart_pane_g3

0x265e,	// (0x0002eada) cell_navstr_albumart_pane_g4

0x0003,

0xfe30,	// (0x0003c2ac) cell_navstr_albumart_pane_g

0xd6a9,	// (0x00039b25) bt_list_pane_ParamLimits

0xd6a9,	// (0x00039b25) bt_list_pane

0xd6be,	// (0x00039b3a) bt_list_pane_t1

0xd6cd,	// (0x00039b49) bt_list_pane_t2

0x0001,

0xfe39,	// (0x0003c2b5) bt_list_pane_t

0xe40e,	// (0x0003a88a) main_cale_prevew_pane

0xd6dc,	// (0x00039b58) popup_cale_preview_window_ParamLimits

0xd6dc,	// (0x00039b58) popup_cale_preview_window

0xf0bd,	// (0x0003b539) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0bd,	// (0x0003b539) bg_popup_preview_window_pane_cp05

0xd6f1,	// (0x00039b6d) list_cale_preview_pane_ParamLimits

0xd6f1,	// (0x00039b6d) list_cale_preview_pane

0xd6fd,	// (0x00039b79) list_double_cale_preview_pane_ParamLimits

0xd6fd,	// (0x00039b79) list_double_cale_preview_pane

0xd70e,	// (0x00039b8a) list_single_cale_preview_pane_ParamLimits

0xd70e,	// (0x00039b8a) list_single_cale_preview_pane

0xd722,	// (0x00039b9e) list_single_cale_preview_pane_g1

0xd72a,	// (0x00039ba6) list_single_cale_preview_pane_t1_ParamLimits

0xd72a,	// (0x00039ba6) list_single_cale_preview_pane_t1

0xd73f,	// (0x00039bbb) list_double_cale_preview_pane_g1

0xd747,	// (0x00039bc3) list_double_cale_preview_pane_t1_ParamLimits

0xd747,	// (0x00039bc3) list_double_cale_preview_pane_t1

0xd75c,	// (0x00039bd8) list_double_cale_preview_pane_t2_ParamLimits

0xd75c,	// (0x00039bd8) list_double_cale_preview_pane_t2

0x0001,

0xfe3e,	// (0x0003c2ba) list_double_cale_preview_pane_t_ParamLimits

0xfe3e,	// (0x0003c2ba) list_double_cale_preview_pane_t

0xe40e,	// (0x0003a88a) main_ezdial_pane

0xf0bd,	// (0x0003b539) main_sp_fs_email_pane_ParamLimits

0xd386,	// (0x00039802) cmail_ddmenu_btn01_pane_ParamLimits

0xd386,	// (0x00039802) cmail_ddmenu_btn01_pane

0xd3a3,	// (0x0003981f) cmail_ddmenu_btn02_pane_ParamLimits

0xd3a3,	// (0x0003981f) cmail_ddmenu_btn02_pane

0xd3c1,	// (0x0003983d) cmail_ddmenu_btn03_pane_ParamLimits

0xd3c1,	// (0x0003983d) cmail_ddmenu_btn03_pane

0x6a80,	// (0x00032efc) main_sp_fs_ctrlbar_pane_ParamLimits

0x6a98,	// (0x00032f14) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd4a2,	// (0x0003991e) list_cmail_body_pane_ParamLimits

0x6ee3,	// (0x0003335f) bg_button_pane_cp12

0x4fc2,	// (0x0003143e) list_single_cmail_header_detail_pane_g3_ParamLimits

0x4fc2,	// (0x0003143e) list_single_cmail_header_detail_pane_g3

0x6f29,	// (0x000333a5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6f29,	// (0x000333a5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdc3,	// (0x0003c23f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdc3,	// (0x0003c23f) list_single_cmail_header_detail_pane_t

0x6f7c,	// (0x000333f8) phacti_term_pane_t2_ParamLimits

0x6f7c,	// (0x000333f8) phacti_term_pane_t2

0x0001,

0xfdcd,	// (0x0003c249) phacti_term_pane_t_ParamLimits

0xfdcd,	// (0x0003c249) phacti_term_pane_t

0xd774,	// (0x00039bf0) aid_size_list_single_double

0xd780,	// (0x00039bfc) popup_ezdial_listscroll_window

0xd799,	// (0x00039c15) popup_number_entry_window_cp01

0x1383,	// (0x0002d7ff) bg_popup_call_pane_cp09

0xd7a5,	// (0x00039c21) ezdial_list_pane

0xd7ad,	// (0x00039c29) scroll_pane_cp23

0x2b5b,	// (0x0002efd7) bg_button_pane_cp028_ParamLimits

0x2b5b,	// (0x0002efd7) bg_button_pane_cp028

0xd7b5,	// (0x00039c31) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd7b5,	// (0x00039c31) cmail_ddmenu_btn01_pane_g1

0xd7c7,	// (0x00039c43) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd7c7,	// (0x00039c43) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe43,	// (0x0003c2bf) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe43,	// (0x0003c2bf) cmail_ddmenu_btn01_pane_g

0xd7d3,	// (0x00039c4f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd7d3,	// (0x00039c4f) cmail_ddmenu_btn01_pane_t1

0x2879,	// (0x0002ecf5) bg_button_pane_cp029_ParamLimits

0x2879,	// (0x0002ecf5) bg_button_pane_cp029

0xd7c7,	// (0x00039c43) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd7c7,	// (0x00039c43) cmail_ddmenu_btn02_pane_g1

0xd7f4,	// (0x00039c70) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd7f4,	// (0x00039c70) cmail_ddmenu_btn02_pane_t1

0x7503,	// (0x0003397f) bg_button_pane_cp031_ParamLimits

0x7503,	// (0x0003397f) bg_button_pane_cp031

0xd7c7,	// (0x00039c43) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd7c7,	// (0x00039c43) cmail_ddmenu_btn03_pane_g1

0xd7f4,	// (0x00039c70) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd7f4,	// (0x00039c70) cmail_ddmenu_btn03_pane_t1

0xb570,	// (0x000379ec) cell_dialer2_keypad_pane_t1_ParamLimits

0xb58a,	// (0x00037a06) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb58a,	// (0x00037a06) cell_dialer2_keypad_pane_t1_copy1

0xcdf4,	// (0x00039270) ncimui_group_button_pane

0xf0bd,	// (0x0003b539) main_sp_fs_calendar_pane_ParamLimits

0xd4a2,	// (0x0003991e) list_single_cmail_header_caption_pane_ParamLimits

0x6879,	// (0x00032cf5) aid_recal_txt_sm_pane

0xe40e,	// (0x0003a88a) mian_recal_day_pane

0x6fbf,	// (0x0003343b) popup_sp_fs_cale_preview_window_ParamLimits

0xe40e,	// (0x0003a88a) list_recal_day_pane

0x715a,	// (0x000335d6) list_single_recal_day_pane_ParamLimits

0x715a,	// (0x000335d6) list_single_recal_day_pane

0xd828,	// (0x00039ca4) list_single_recal_day_pane_g1_ParamLimits

0xd828,	// (0x00039ca4) list_single_recal_day_pane_g1

0x716c,	// (0x000335e8) list_single_recal_day_pane_g2_ParamLimits

0x716c,	// (0x000335e8) list_single_recal_day_pane_g2

0x7178,	// (0x000335f4) list_single_recal_day_pane_g3_ParamLimits

0x7178,	// (0x000335f4) list_single_recal_day_pane_g3

0x7184,	// (0x00033600) list_single_recal_day_pane_g4_ParamLimits

0x7184,	// (0x00033600) list_single_recal_day_pane_g4

0x7190,	// (0x0003360c) list_single_recal_day_pane_g5_ParamLimits

0x7190,	// (0x0003360c) list_single_recal_day_pane_g5

0x719c,	// (0x00033618) list_single_recal_day_pane_g6_ParamLimits

0x719c,	// (0x00033618) list_single_recal_day_pane_g6

0x0005,

0xfe52,	// (0x0003c2ce) list_single_recal_day_pane_g_ParamLimits

0xfe52,	// (0x0003c2ce) list_single_recal_day_pane_g

0x71a8,	// (0x00033624) list_single_recal_day_pane_t1

0x71b6,	// (0x00033632) list_single_recal_day_pane_t2

0x0001,

0xfe5f,	// (0x0003c2db) list_single_recal_day_pane_t

0xd834,	// (0x00039cb0) ncimui_query_button_pane_ParamLimits

0xd834,	// (0x00039cb0) ncimui_query_button_pane

0xd844,	// (0x00039cc0) ncimui_query_button_pane_t1_ParamLimits

0xd844,	// (0x00039cc0) ncimui_query_button_pane_t1

0xd857,	// (0x00039cd3) ncimui_query_button_pane_t2_ParamLimits

0xd857,	// (0x00039cd3) ncimui_query_button_pane_t2

0x0001,

0xfe64,	// (0x0003c2e0) ncimui_query_button_pane_t_ParamLimits

0xfe64,	// (0x0003c2e0) ncimui_query_button_pane_t

0xd86a,	// (0x00039ce6) query_button_pane_ParamLimits

0xd86a,	// (0x00039ce6) query_button_pane

0xe40e,	// (0x0003a88a) bg_button_pane_cp0028

0xd877,	// (0x00039cf3) query_button_pane_t1

0x9b9a,	// (0x00036016) main_tport_pane_ParamLimits

0xd3ed,	// (0x00039869) bg_popup_window_pane_cp01_ParamLimits

0xd3ed,	// (0x00039869) bg_popup_window_pane_cp01

0xd3fa,	// (0x00039876) heading_pane_cp08_ParamLimits

0xd3fa,	// (0x00039876) heading_pane_cp08

0xd406,	// (0x00039882) heading_pane_cp07_ParamLimits

0xd406,	// (0x00039882) heading_pane_cp07

0x4f66,	// (0x000313e2) cell_tport_appsw_pane_g2

0x0002,

0xfdb0,	// (0x0003c22c) cell_tport_appsw_pane_g

0x63e0,	// (0x0003285c) input_candi_list_open_g1

0x0cd8,	// (0x0002d154) list_cale_time_pane_g6_ParamLimits

0x0cd8,	// (0x0002d154) list_cale_time_pane_g6

0xa543,	// (0x000369bf) aid_size_touch_calib_1_ParamLimits

0xa543,	// (0x000369bf) aid_size_touch_calib_1

0xa54f,	// (0x000369cb) aid_size_touch_calib_2_ParamLimits

0xa54f,	// (0x000369cb) aid_size_touch_calib_2

0xa55b,	// (0x000369d7) aid_size_touch_calib_3_ParamLimits

0xa55b,	// (0x000369d7) aid_size_touch_calib_3

0xa569,	// (0x000369e5) aid_size_touch_calib_4_ParamLimits

0xa569,	// (0x000369e5) aid_size_touch_calib_4

0xa577,	// (0x000369f3) main_touch_calib_button_group_pane_ParamLimits

0xa577,	// (0x000369f3) main_touch_calib_button_group_pane

0xa584,	// (0x00036a00) main_touch_calib_pane_g1_ParamLimits

0xa590,	// (0x00036a0c) main_touch_calib_pane_g2_ParamLimits

0xa59c,	// (0x00036a18) main_touch_calib_pane_g3_ParamLimits

0xa5a8,	// (0x00036a24) main_touch_calib_pane_g4_ParamLimits

0xf788,	// (0x0003bc04) main_touch_calib_pane_g_ParamLimits

0xa5b4,	// (0x00036a30) main_touch_calib_pane_t1_ParamLimits

0xa5c9,	// (0x00036a45) main_touch_calib_pane_t2_ParamLimits

0xa5de,	// (0x00036a5a) main_touch_calib_pane_t3_ParamLimits

0xa5f0,	// (0x00036a6c) main_touch_calib_pane_t4_ParamLimits

0xa602,	// (0x00036a7e) main_touch_calib_pane_t5_ParamLimits

0xf791,	// (0x0003bc0d) main_touch_calib_pane_t_ParamLimits

0x30ff,	// (0x0002f57b) list_single_fp_cale_pane_g3_ParamLimits

0x30ff,	// (0x0002f57b) list_single_fp_cale_pane_g3

0xf0bd,	// (0x0003b539) bg_button_pane_cp012_ParamLimits

0xf0bd,	// (0x0003b539) bg_vkb2_func_pane_cp03_ParamLimits

0xc229,	// (0x000386a5) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0bd,	// (0x0003b539) bg_vkb2_func_pane_cp04_ParamLimits

0xcd94,	// (0x00039210) main_ncimui_button_group_pane_ParamLimits

0xcd94,	// (0x00039210) main_ncimui_button_group_pane

0xcde2,	// (0x0003925e) main_ncimui_pane_t3_ParamLimits

0xcde2,	// (0x0003925e) main_ncimui_pane_t3

0x509c,	// (0x00031518) phacti_button_group_pane

0xd774,	// (0x00039bf0) aid_size_list_single_double_ParamLimits

0xd780,	// (0x00039bfc) popup_ezdial_listscroll_window_ParamLimits

0xd799,	// (0x00039c15) popup_number_entry_window_cp01_ParamLimits

0xd885,	// (0x00039d01) phacti_button_pane_ParamLimits

0xd885,	// (0x00039d01) phacti_button_pane

0xe40e,	// (0x0003a88a) bg_button_pane_cp14

0xd894,	// (0x00039d10) phacti_button_pane_t1

0xd8a2,	// (0x00039d1e) main_touch_calib_button_pane_ParamLimits

0xd8a2,	// (0x00039d1e) main_touch_calib_button_pane

0xeb94,	// (0x0003b010) bg_button_pane_cp18_ParamLimits

0xeb94,	// (0x0003b010) bg_button_pane_cp18

0xd8b2,	// (0x00039d2e) main_touch_calib_button_pane_t1_ParamLimits

0xd8b2,	// (0x00039d2e) main_touch_calib_button_pane_t1

0xd8c8,	// (0x00039d44) main_touch_calib_button_pane_t2_ParamLimits

0xd8c8,	// (0x00039d44) main_touch_calib_button_pane_t2

0x0001,

0xfe69,	// (0x0003c2e5) main_touch_calib_button_pane_t_ParamLimits

0xfe69,	// (0x0003c2e5) main_touch_calib_button_pane_t

0xe40e,	// (0x0003a88a) cell_ncimui_button_pane

0xe40e,	// (0x0003a88a) bg_button_pane_cp032

0xd8e6,	// (0x00039d62) cell_ncimui_button_pane_t1

0xb5dc,	// (0x00037a58) image3_infobar_pane_ParamLimits

0xb5dc,	// (0x00037a58) image3_infobar_pane

0xd110,	// (0x0003958c) fs_bigclock_status_pane_ParamLimits

0xd110,	// (0x0003958c) fs_bigclock_status_pane

0xd11d,	// (0x00039599) main_fs_bigclock_clock_pane_ParamLimits

0xd11d,	// (0x00039599) main_fs_bigclock_clock_pane

0xd12d,	// (0x000395a9) main_fs_bigclock_indi_pane_ParamLimits

0xd12d,	// (0x000395a9) main_fs_bigclock_indi_pane

0xd152,	// (0x000395ce) main_fs_bigclock_swipe_pane_ParamLimits

0xd152,	// (0x000395ce) main_fs_bigclock_swipe_pane

0xe40e,	// (0x0003a88a) main_fs_clock_dumped_data

0x4aa9,	// (0x00030f25) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4aa9,	// (0x00030f25) list_single_fs_bigclock_indicator_pane_g1

0x4ac3,	// (0x00030f3f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4ac3,	// (0x00030f3f) list_single_fs_bigclock_indicator_pane_g2

0x4add,	// (0x00030f59) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4add,	// (0x00030f59) list_single_fs_bigclock_indicator_pane_g3

0x4af7,	// (0x00030f73) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4af7,	// (0x00030f73) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfca1,	// (0x0003c11d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfca1,	// (0x0003c11d) list_single_fs_bigclock_indicator_pane_g

0x4b1b,	// (0x00030f97) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4b1b,	// (0x00030f97) list_single_fs_bigclock_indicator_pane_t1

0x4b43,	// (0x00030fbf) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4b43,	// (0x00030fbf) list_single_fs_bigclock_indicator_pane_t2

0x4b6b,	// (0x00030fe7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4b6b,	// (0x00030fe7) list_single_fs_bigclock_indicator_pane_t3

0x4b93,	// (0x0003100f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4b93,	// (0x0003100f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcac,	// (0x0003c128) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcac,	// (0x0003c128) list_single_fs_bigclock_indicator_pane_t

0xd8f4,	// (0x00039d70) image3_infobar_fav_pane_ParamLimits

0xd8f4,	// (0x00039d70) image3_infobar_fav_pane

0xd904,	// (0x00039d80) image3_infobar_loc_pane_ParamLimits

0xd904,	// (0x00039d80) image3_infobar_loc_pane

0xd918,	// (0x00039d94) image3_infobar_time_pane_ParamLimits

0xd918,	// (0x00039d94) image3_infobar_time_pane

0x2d6e,	// (0x0002f1ea) image3_infobar_time_pane_g1

0xd928,	// (0x00039da4) image3_infobar_time_pane_t1

0x2d6e,	// (0x0002f1ea) image3_infobar_loc_pane_g1

0xd936,	// (0x00039db2) image3_infobar_loc_pane_g2

0x0001,

0xfe6e,	// (0x0003c2ea) image3_infobar_loc_pane_g

0xd93e,	// (0x00039dba) image3_infobar_loc_pane_t1

0x2d6e,	// (0x0002f1ea) image3_infobar_fav_pane_g1

0xd94c,	// (0x00039dc8) image3_infobar_fav_pane_g2

0x0001,

0xfe73,	// (0x0003c2ef) image3_infobar_fav_pane_g

0xd954,	// (0x00039dd0) fs_bigclock_status_battery_pane

0xd95d,	// (0x00039dd9) fs_bigclock_status_signal_pane

0xd966,	// (0x00039de2) fs_bigclock_status_title_pane

0xd96f,	// (0x00039deb) fs_bigclock_status_signal_pane_g1

0xd978,	// (0x00039df4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe78,	// (0x0003c2f4) fs_bigclock_status_signal_pane_g

0xd980,	// (0x00039dfc) fs_bigclock_status_battery_pane_g1

0xd989,	// (0x00039e05) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe7d,	// (0x0003c2f9) fs_bigclock_status_battery_pane_g

0xd991,	// (0x00039e0d) fs_bigclock_status_title_pane_t1

0x2d6e,	// (0x0002f1ea) main_fs_bigclock_clock_pane_g1

0xd99f,	// (0x00039e1b) main_fs_bigclock_clock_pane_g2

0xd99f,	// (0x00039e1b) main_fs_bigclock_clock_pane_g3

0xd99f,	// (0x00039e1b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe82,	// (0x0003c2fe) main_fs_bigclock_clock_pane_g

0xd9a7,	// (0x00039e23) main_fs_bigclock_clock_pane_t1

0xd9b5,	// (0x00039e31) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe8b,	// (0x0003c307) main_fs_bigclock_clock_pane_t

0xd9c4,	// (0x00039e40) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd9c4,	// (0x00039e40) list_single_fs_bigclock_indicator_pane

0xd9d5,	// (0x00039e51) list_single_fs_bigclock_pane_ParamLimits

0xd9d5,	// (0x00039e51) list_single_fs_bigclock_pane

0xda3c,	// (0x00039eb8) main_fs_bigclock_indicator_pane_t1

0xda4b,	// (0x00039ec7) list_single_fs_bigclock_pane_g1

0xda53,	// (0x00039ecf) list_single_fs_bigclock_pane_t1

0x2d6e,	// (0x0002f1ea) main_fs_bigclock_swipe_pane_g1

0xda91,	// (0x00039f0d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe9c,	// (0x0003c318) main_fs_bigclock_swipe_pane_g

0xda99,	// (0x00039f15) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xda99,	// (0x00039f15) main_fs_bigclock_swipe_pane_t1

0x8dac,	// (0x00035228) call_type_pane_ParamLimits

0xe40e,	// (0x0003a88a) main_btmg_pane

0x702d,	// (0x000334a9) list_single_cale_mrui_row_pane_g2_ParamLimits

0x702d,	// (0x000334a9) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0f,	// (0x0003c28b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0f,	// (0x0003c28b) list_single_cale_mrui_row_pane_g

0xd818,	// (0x00039c94) list_recal_vselct_arw_lo_pane

0xd820,	// (0x00039c9c) list_recal_vselct_arw_up_pane

0x7151,	// (0x000335cd) list_recal_vselct_pane

0xdab6,	// (0x00039f32) btmg_button_pane

0xdabe,	// (0x00039f3a) main_btmg_pane_g1

0xe40e,	// (0x0003a88a) bg_button_pane_cp044

0xdac6,	// (0x00039f42) btmg_button_pane_t1

0x2871,	// (0x0002eced) aid_listscroll_gen

0xf0bd,	// (0x0003b539) main_cntbar_detail_pane

0x4f84,	// (0x00031400) list_cmail_folder_pane

0x4f94,	// (0x00031410) sp_fs_scroll_pane_cp03_ParamLimits

0xd4a2,	// (0x0003991e) list_single_fs_dyc_pane_cp01_ParamLimits

0xd4a2,	// (0x0003991e) list_single_fs_dyc_pane_cp01

0xdad4,	// (0x00039f50) aid_size_cmail_indent

0x6882,	// (0x00032cfe) list_single_dyc_row_pane_cp01

0xdaf7,	// (0x00039f73) cntbar_detail_list_pane_ParamLimits

0xdaf7,	// (0x00039f73) cntbar_detail_list_pane

0xdb2d,	// (0x00039fa9) main_cntbar_detail_cont_pane_ParamLimits

0xdb2d,	// (0x00039fa9) main_cntbar_detail_cont_pane

0xdb39,	// (0x00039fb5) scroll_pane_cp032_ParamLimits

0xdb39,	// (0x00039fb5) scroll_pane_cp032

0xdb45,	// (0x00039fc1) cntbar_detail_list_event_pane_ParamLimits

0xdb45,	// (0x00039fc1) cntbar_detail_list_event_pane

0xdb03,	// (0x00039f7f) cntbar_detail_list_shct_pane

0xdb55,	// (0x00039fd1) aid_list_gen

0xec99,	// (0x0003b115) aid_scroll

0x4055,	// (0x000304d1) aid_size_touch_scroll_bar

0x4127,	// (0x000305a3) aid_list_double

0x71c4,	// (0x00033640) aid_list_single

0x4176,	// (0x000305f2) aid_list_single_lg

0x71cd,	// (0x00033649) aid_list_z_g_a_sm

0x71d5,	// (0x00033651) aid_list_z_g_d

0x71dd,	// (0x00033659) aid_txt_z_prm

0x71eb,	// (0x00033667) aid_txt_z_prm_cp01

0x71f9,	// (0x00033675) aid_txt_z_sec

0xdb5e,	// (0x00039fda) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdb5e,	// (0x00039fda) main_cntbar_detail_cont_pane_g1

0xdb6b,	// (0x00039fe7) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdb6b,	// (0x00039fe7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfea1,	// (0x0003c31d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfea1,	// (0x0003c31d) main_cntbar_detail_cont_pane_g

0xdb77,	// (0x00039ff3) main_cntbar_detail_cont_pane_t1

0xdb85,	// (0x0003a001) main_cntbar_detail_cont_pane_t2

0xdb93,	// (0x0003a00f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea6,	// (0x0003c322) main_cntbar_detail_cont_pane_t

0xdba1,	// (0x0003a01d) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdba1,	// (0x0003a01d) cell_cntbar_detail_list_shct_pane

0xdbb3,	// (0x0003a02f) cntbar_detail_list_shct_pane_g1

0xdbbc,	// (0x0003a038) cntbar_detail_list_shct_pane_g2

0x0001,

0xfead,	// (0x0003c329) cntbar_detail_list_shct_pane_g

0xdbc5,	// (0x0003a041) cntbar_detail_list_event_pane_g1_ParamLimits

0xdbc5,	// (0x0003a041) cntbar_detail_list_event_pane_g1

0xdbd1,	// (0x0003a04d) cntbar_detail_list_event_pane_g2_ParamLimits

0xdbd1,	// (0x0003a04d) cntbar_detail_list_event_pane_g2

0x0005,

0xfeb2,	// (0x0003c32e) cntbar_detail_list_event_pane_g_ParamLimits

0xfeb2,	// (0x0003c32e) cntbar_detail_list_event_pane_g

0xdc3d,	// (0x0003a0b9) cntbar_detail_list_event_pane_t1_ParamLimits

0xdc3d,	// (0x0003a0b9) cntbar_detail_list_event_pane_t1

0xdc52,	// (0x0003a0ce) cntbar_detail_list_event_pane_t2_ParamLimits

0xdc52,	// (0x0003a0ce) cntbar_detail_list_event_pane_t2

0x0002,

0xfebf,	// (0x0003c33b) cntbar_detail_list_event_pane_t_ParamLimits

0xfebf,	// (0x0003c33b) cntbar_detail_list_event_pane_t

0x2d6e,	// (0x0002f1ea) cell_cntbar_detail_list_shct_pane_g1

0x1342,	// (0x0002d7be) navi_pane_mv_g3

0xf0bd,	// (0x0003b539) main_cntbar_detail_pane_ParamLimits

0xe40e,	// (0x0003a88a) main_notif_wgt_pane

0xb2ca,	// (0x00037746) aid_tch_main_mp4_pane_g4

0xb4f1,	// (0x0003796d) popup_slider_window_cp02

0x7151,	// (0x000335cd) list_recal_day_event_pane

0xdadd,	// (0x00039f59) cntbar_detail_btn_pane_ParamLimits

0xdadd,	// (0x00039f59) cntbar_detail_btn_pane

0xdae9,	// (0x00039f65) cntbar_detail_btn_pane_cp01_ParamLimits

0xdae9,	// (0x00039f65) cntbar_detail_btn_pane_cp01

0xdb03,	// (0x00039f7f) cntbar_detail_list_shct_pane_ParamLimits

0xdb0f,	// (0x00039f8b) cntbar_detail_pane_g1_ParamLimits

0xdb0f,	// (0x00039f8b) cntbar_detail_pane_g1

0xdb1b,	// (0x00039f97) cntbar_detail_pane_t1_ParamLimits

0xdb1b,	// (0x00039f97) cntbar_detail_pane_t1

0xdbdd,	// (0x0003a059) cntbar_detail_list_event_pane_g3_ParamLimits

0xdbdd,	// (0x0003a059) cntbar_detail_list_event_pane_g3

0xdbf5,	// (0x0003a071) cntbar_detail_list_event_pane_g4_ParamLimits

0xdbf5,	// (0x0003a071) cntbar_detail_list_event_pane_g4

0xdc0d,	// (0x0003a089) cntbar_detail_list_event_pane_g5_ParamLimits

0xdc0d,	// (0x0003a089) cntbar_detail_list_event_pane_g5

0xdc25,	// (0x0003a0a1) cntbar_detail_list_event_pane_g6_ParamLimits

0xdc25,	// (0x0003a0a1) cntbar_detail_list_event_pane_g6

0xdc67,	// (0x0003a0e3) cntbar_detail_list_event_pane_t3_ParamLimits

0xdc67,	// (0x0003a0e3) cntbar_detail_list_event_pane_t3

0xdc79,	// (0x0003a0f5) popup_notif_wgt_window_ParamLimits

0xdc79,	// (0x0003a0f5) popup_notif_wgt_window

0xdc87,	// (0x0003a103) popup_submenu_window_cp01_ParamLimits

0xdc87,	// (0x0003a103) popup_submenu_window_cp01

0x1383,	// (0x0002d7ff) bg_popup_window_pane_cp10

0xdc93,	// (0x0003a10f) listscroll_notif_wgt_pane

0xdc9b,	// (0x0003a117) list_notif_wgt_window

0xdca4,	// (0x0003a120) scroll_pane_cp033

0xdcad,	// (0x0003a129) list_notif_wgt_row_pane_ParamLimits

0xdcad,	// (0x0003a129) list_notif_wgt_row_pane

0xdcbf,	// (0x0003a13b) aid_size_list_notif_wgt_del

0xdcc8,	// (0x0003a144) list_notif_wgt_row_pane_g1

0xdcd0,	// (0x0003a14c) list_notif_wgt_row_pane_g2

0xdcd8,	// (0x0003a154) list_notif_wgt_row_pane_g3

0x0002,

0xfec6,	// (0x0003c342) list_notif_wgt_row_pane_g

0xdce1,	// (0x0003a15d) list_notif_wgt_row_pane_t1

0xdcef,	// (0x0003a16b) list_notif_wgt_row_pane_t2

0xdcfd,	// (0x0003a179) list_notif_wgt_row_pane_t3

0x0002,

0xfecd,	// (0x0003c349) list_notif_wgt_row_pane_t

0x3d5f,	// (0x000301db) list_recal_day_event_pane_g1

0xdd0b,	// (0x0003a187) list_recal_day_event_pane_t1

0xe40e,	// (0x0003a88a) bg_button_pane_cp045

0xdd1a,	// (0x0003a196) cntbar_detail_btn_pane_t1

0x2879,	// (0x0002ecf5) main_callh_pane_ParamLimits

0x2879,	// (0x0002ecf5) main_callh_pane

0xe40e,	// (0x0003a88a) main_coverflow0_pane

0xe40e,	// (0x0003a88a) main_wgtman_pane

0xd164,	// (0x000395e0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd164,	// (0x000395e0) main_fs_bigclock_unlock_btn_pane

0x4f5e,	// (0x000313da) bg_button_pane_cp16

0x4f6e,	// (0x000313ea) cell_tport_appsw_pane_g3

0xdd28,	// (0x0003a1a4) cf0_flow_pane_ParamLimits

0xdd28,	// (0x0003a1a4) cf0_flow_pane

0xdd37,	// (0x0003a1b3) listscroll_cf0_pane

0xdd40,	// (0x0003a1bc) main_cf0_pane_g1

0xdd4a,	// (0x0003a1c6) main_cf0_pane_t1_ParamLimits

0xdd4a,	// (0x0003a1c6) main_cf0_pane_t1

0xdd5c,	// (0x0003a1d8) main_cf0_pane_t2_ParamLimits

0xdd5c,	// (0x0003a1d8) main_cf0_pane_t2

0x0001,

0xfed4,	// (0x0003c350) main_cf0_pane_t_ParamLimits

0xfed4,	// (0x0003c350) main_cf0_pane_t

0xdd6e,	// (0x0003a1ea) scroll_pane_cp11

0xdd77,	// (0x0003a1f3) cf0_flow_pane_g1

0xdd7f,	// (0x0003a1fb) cf0_flow_pane_g2

0x0001,

0xfed9,	// (0x0003c355) cf0_flow_pane_g

0xdd87,	// (0x0003a203) cf0_flow_pane_t1

0xe40e,	// (0x0003a88a) main_call6_pane

0xe40e,	// (0x0003a88a) main_calllock_pane

0xdd95,	// (0x0003a211) call6_btn_grp_pane_ParamLimits

0xdd95,	// (0x0003a211) call6_btn_grp_pane

0xdda2,	// (0x0003a21e) call6_pane_g1_ParamLimits

0xdda2,	// (0x0003a21e) call6_pane_g1

0xddaf,	// (0x0003a22b) popup_call6_1st_window_ParamLimits

0xddaf,	// (0x0003a22b) popup_call6_1st_window

0xddbb,	// (0x0003a237) popup_call6_2nd_window_ParamLimits

0xddbb,	// (0x0003a237) popup_call6_2nd_window

0xddc7,	// (0x0003a243) cell_call6_btn_pane_ParamLimits

0xddc7,	// (0x0003a243) cell_call6_btn_pane

0x1383,	// (0x0002d7ff) bg_popup_call2_in_pane_cp03

0xddd6,	// (0x0003a252) popup_call6_1st_window_g1

0xddde,	// (0x0003a25a) popup_call6_1st_window_g2

0xdde6,	// (0x0003a262) popup_call6_1st_window_g3

0x0002,

0xfede,	// (0x0003c35a) popup_call6_1st_window_g

0xddee,	// (0x0003a26a) popup_call6_1st_window_t1

0xddfd,	// (0x0003a279) popup_call6_1st_window_t2

0xde0b,	// (0x0003a287) popup_call6_1st_window_t3

0x0002,

0xfee5,	// (0x0003c361) popup_call6_1st_window_t

0x1383,	// (0x0002d7ff) bg_popup_call2_in_pane_cp04

0xddd6,	// (0x0003a252) popup_call6_2nd_window_g1

0xddde,	// (0x0003a25a) popup_call6_2nd_window_g2

0xdde6,	// (0x0003a262) popup_call6_2nd_window_g3

0x0002,

0xfede,	// (0x0003c35a) popup_call6_2nd_window_g

0xddee,	// (0x0003a26a) popup_call6_2nd_window_t1

0xe40e,	// (0x0003a88a) bg_button_pane_cp15

0xde19,	// (0x0003a295) cell_call6_btn_pane_g1

0xde22,	// (0x0003a29e) cell_call6_btn_pane_t1

0xde31,	// (0x0003a2ad) listscroll_wgtman_pane_ParamLimits

0xde31,	// (0x0003a2ad) listscroll_wgtman_pane

0xde4b,	// (0x0003a2c7) wgtman_btn_pane_ParamLimits

0xde4b,	// (0x0003a2c7) wgtman_btn_pane

0x11c4,	// (0x0002d640) aid_scroll_copy1

0xde7e,	// (0x0003a2fa) list_wgtman_pane

0xde88,	// (0x0003a304) wgtman_btn_pane_g1_ParamLimits

0xde88,	// (0x0003a304) wgtman_btn_pane_g1

0xdeb0,	// (0x0003a32c) wgtman_btn_pane_t1_ParamLimits

0xdeb0,	// (0x0003a32c) wgtman_btn_pane_t1

0xdee7,	// (0x0003a363) wgtman_btn_pane_t2_ParamLimits

0xdee7,	// (0x0003a363) wgtman_btn_pane_t2

0x0001,

0xfeec,	// (0x0003c368) wgtman_btn_pane_t_ParamLimits

0xfeec,	// (0x0003c368) wgtman_btn_pane_t

0xdefe,	// (0x0003a37a) listrow_wgtman_pane_ParamLimits

0xdefe,	// (0x0003a37a) listrow_wgtman_pane

0xdf0f,	// (0x0003a38b) listrow_wgtman_pane_g1

0xdf18,	// (0x0003a394) listrow_wgtman_pane_g2

0x0001,

0xfef1,	// (0x0003c36d) listrow_wgtman_pane_g

0x7207,	// (0x00033683) listrow_wgtman_pane_t1

0x7215,	// (0x00033691) listrow_wgtman_pane_t2

0x0001,

0xfef6,	// (0x0003c372) listrow_wgtman_pane_t

0x7223,	// (0x0003369f) wait_bar_pane_cp09

0xdf20,	// (0x0003a39c) main_calllock_btn_pane

0xdf28,	// (0x0003a3a4) main_calllock_pane_g1

0xe40e,	// (0x0003a88a) bg_button_pane_cp17

0xdf31,	// (0x0003a3ad) main_calllock_btn_pane_g1

0xdf3a,	// (0x0003a3b6) main_calllock_btn_pane_t1

0xe40e,	// (0x0003a88a) main_dialer3_pane

0xe40e,	// (0x0003a88a) main_fmrd2_pane

0x2d6e,	// (0x0002f1ea) main_fs_bigclock_unlock_btn_pane_g1

0xdf51,	// (0x0003a3cd) main_fs_bigclock_unlock_btn_pane_t1

0xdf5f,	// (0x0003a3db) area_fmrd2_info_pane_ParamLimits

0xdf5f,	// (0x0003a3db) area_fmrd2_info_pane

0xdf6b,	// (0x0003a3e7) area_fmrd2_visual_pane_ParamLimits

0xdf6b,	// (0x0003a3e7) area_fmrd2_visual_pane

0xdf79,	// (0x0003a3f5) fmrd2_indi_pane_ParamLimits

0xdf79,	// (0x0003a3f5) fmrd2_indi_pane

0xdf86,	// (0x0003a402) area_fmrd2_visual_pane_g1

0xdf8e,	// (0x0003a40a) area_fmrd2_visual_pane_t1

0xdf9c,	// (0x0003a418) area_fmrd2_visual_pane_t2

0xdfaa,	// (0x0003a426) area_fmrd2_visual_pane_t3

0x0002,

0xff00,	// (0x0003c37c) area_fmrd2_visual_pane_t

0xdfb8,	// (0x0003a434) area_fmrd2_info_pane_g1

0xdfc0,	// (0x0003a43c) area_fmrd2_info_pane_t1

0xdfce,	// (0x0003a44a) area_fmrd2_info_pane_t2

0xdfdc,	// (0x0003a458) area_fmrd2_info_pane_t3

0xdfea,	// (0x0003a466) area_fmrd2_info_pane_t4

0x0003,

0xff07,	// (0x0003c383) area_fmrd2_info_pane_t

0xdff8,	// (0x0003a474) fmrd2_indi_pane_t1

0xe006,	// (0x0003a482) fmrd2_indi_pane_t2

0xe014,	// (0x0003a490) fmrd2_indi_pane_t3

0x0002,

0xff10,	// (0x0003c38c) fmrd2_indi_pane_t

0x4b06,	// (0x00030f82) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4b06,	// (0x00030f82) list_single_fs_bigclock_indicator_pane_g5

0x4ba8,	// (0x00031024) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x4ba8,	// (0x00031024) list_single_fs_bigclock_indicator_pane_t5

0xd57a,	// (0x000399f6) aid_cell_bcale_month_pane_ParamLimits

0xd57a,	// (0x000399f6) aid_cell_bcale_month_pane

0xd586,	// (0x00039a02) bcale_month_pane_ParamLimits

0xd586,	// (0x00039a02) bcale_month_pane

0xd592,	// (0x00039a0e) bcale_preview_pane_ParamLimits

0xd592,	// (0x00039a0e) bcale_preview_pane

0xda53,	// (0x00039ecf) list_single_fs_bigclock_pane_t1_ParamLimits

0xda6d,	// (0x00039ee9) list_single_fs_bigclock_pane_t2_ParamLimits

0xda6d,	// (0x00039ee9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe97,	// (0x0003c313) list_single_fs_bigclock_pane_t_ParamLimits

0xfe97,	// (0x0003c313) list_single_fs_bigclock_pane_t

0xdf49,	// (0x0003a3c5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfefb,	// (0x0003c377) main_fs_bigclock_unlock_btn_pane_g

0xe022,	// (0x0003a49e) aid_dia3_key_size_ParamLimits

0xe022,	// (0x0003a49e) aid_dia3_key_size

0xe02e,	// (0x0003a4aa) aid_dia3_listrow_size_ParamLimits

0xe02e,	// (0x0003a4aa) aid_dia3_listrow_size

0xe03c,	// (0x0003a4b8) dia3_keypad_fun_pane_ParamLimits

0xe03c,	// (0x0003a4b8) dia3_keypad_fun_pane

0xe048,	// (0x0003a4c4) dia3_keypad_num_pane_ParamLimits

0xe048,	// (0x0003a4c4) dia3_keypad_num_pane

0xe054,	// (0x0003a4d0) dia3_listscroll_pane_ParamLimits

0xe054,	// (0x0003a4d0) dia3_listscroll_pane

0xe060,	// (0x0003a4dc) dia3_numentry_pane_ParamLimits

0xe060,	// (0x0003a4dc) dia3_numentry_pane

0xe06c,	// (0x0003a4e8) dia3_list_pane

0xe075,	// (0x0003a4f1) scroll_pane_cp12

0xe40e,	// (0x0003a88a) bg_dia3_numentry_pane

0xe07e,	// (0x0003a4fa) dia3_numentry_pane_t1

0xe08d,	// (0x0003a509) cell_dia3_key_num_pane

0xe095,	// (0x0003a511) cell_dia3_key0_fun_pane_ParamLimits

0xe095,	// (0x0003a511) cell_dia3_key0_fun_pane

0xe0a2,	// (0x0003a51e) cell_dia3_key1_fun_pane_ParamLimits

0xe0a2,	// (0x0003a51e) cell_dia3_key1_fun_pane

0xe0af,	// (0x0003a52b) dia3_listrow_pane

0x480a,	// (0x00030c86) bg_dia3_numentry_pane_g1

0xe40e,	// (0x0003a88a) bg_button_pane_cp21

0xe0bc,	// (0x0003a538) cell_dia3_key_num_pane_t1

0xe0ca,	// (0x0003a546) cell_dia3_key_num_pane_t2

0xe0d9,	// (0x0003a555) cell_dia3_key_num_pane_t3

0xe0e8,	// (0x0003a564) cell_dia3_key_num_pane_t4

0x0003,

0xff17,	// (0x0003c393) cell_dia3_key_num_pane_t

0xe40e,	// (0x0003a88a) bg_button_pane_cp19

0xe0f7,	// (0x0003a573) cell_dia3_key0_fun_pane_g1

0xe40e,	// (0x0003a88a) bg_button_pane_cp20

0xe0ff,	// (0x0003a57b) cell_dia3_key1_fun_pane_g1

0xe107,	// (0x0003a583) area_left_week_number_pane

0xe110,	// (0x0003a58c) area_top_day_name_pane

0xe119,	// (0x0003a595) frame_month_view_pane

0xe121,	// (0x0003a59d) grid_month_view_pane

0xe12b,	// (0x0003a5a7) cell_top_day_name_pane_ParamLimits

0xe12b,	// (0x0003a5a7) cell_top_day_name_pane

0xe141,	// (0x0003a5bd) cell_area_left_week_number_pane_ParamLimits

0xe141,	// (0x0003a5bd) cell_area_left_week_number_pane

0xe155,	// (0x0003a5d1) cell_month_view_pane_ParamLimits

0xe155,	// (0x0003a5d1) cell_month_view_pane

0xe170,	// (0x0003a5ec) frm_month_g1

0xe179,	// (0x0003a5f5) frm_month_g2

0xe181,	// (0x0003a5fd) frm_month_g3

0xe189,	// (0x0003a605) frm_month_g4

0xe191,	// (0x0003a60d) frm_month_g5

0xe199,	// (0x0003a615) frm_month_g6

0xe1a1,	// (0x0003a61d) frm_month_g7

0xe1a9,	// (0x0003a625) frm_month_g8

0xe1b2,	// (0x0003a62e) frm_month_g9

0xe1bb,	// (0x0003a637) frm_month_g10

0xb8b1,	// (0x00037d2d) frm_month_g11

0xe1c4,	// (0x0003a640) frm_month_g12

0xe1cd,	// (0x0003a649) frm_month_g13

0xe1d6,	// (0x0003a652) frm_month_g14

0xe1df,	// (0x0003a65b) frm_month_g15

0xe1e8,	// (0x0003a664) frm_month_g16

0x000f,

0xff20,	// (0x0003c39c) frm_month_g

0xe1f1,	// (0x0003a66d) cell_top_day_name_pane_t1

0xe200,	// (0x0003a67c) cell_area_left_week_number_pane_g1

0xe1f1,	// (0x0003a66d) cell_area_left_week_number_pane_t1

0x2d6e,	// (0x0002f1ea) cell_month_view_pane_g1

0xe208,	// (0x0003a684) cell_month_view_pane_t1

0xe40e,	// (0x0003a88a) main_fps_pane

0x4da2,	// (0x0003121e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4da2,	// (0x0003121e) cmail_ddmenu_btn02_pane_cp1

0x4dbe,	// (0x0003123a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4dbe,	// (0x0003123a) cmail_ddmenu_btn02_pane_cp2

0xd7e8,	// (0x00039c64) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd7e8,	// (0x00039c64) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe48,	// (0x0003c2c4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe48,	// (0x0003c2c4) cmail_ddmenu_btn02_pane_g

0xd806,	// (0x00039c82) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd806,	// (0x00039c82) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe4d,	// (0x0003c2c9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe4d,	// (0x0003c2c9) cmail_ddmenu_btn02_pane_t

0xe217,	// (0x0003a693) fps_text_pane_ParamLimits

0xe217,	// (0x0003a693) fps_text_pane

0xe224,	// (0x0003a6a0) main_fps_pane_g1_ParamLimits

0xe224,	// (0x0003a6a0) main_fps_pane_g1

0xe230,	// (0x0003a6ac) wait_bar_pane_cp010_ParamLimits

0xe230,	// (0x0003a6ac) wait_bar_pane_cp010

0xe23c,	// (0x0003a6b8) fps_text_pane_t1_ParamLimits

0xe23c,	// (0x0003a6b8) fps_text_pane_t1

0xb89f,	// (0x00037d1b) cam4_image_uncrop_pane_g1

0xb8a8,	// (0x00037d24) cam4_image_uncrop_pane_g2

0xb8b1,	// (0x00037d2d) cam4_image_uncrop_pane_g3

0xb8ba,	// (0x00037d36) cam4_image_uncrop_pane_g4

0x0003,

0xf920,	// (0x0003bd9c) cam4_image_uncrop_pane_g

0xe0af,	// (0x0003a52b) dia3_listrow_pane_ParamLimits

0xe40e,	// (0x0003a88a) main_phob2_pane

0xd447,	// (0x000398c3) cell_tport_appsw_pane_cp02_ParamLimits

0xd447,	// (0x000398c3) cell_tport_appsw_pane_cp02

0xd454,	// (0x000398d0) cell_tport_appsw_pane_cp03_ParamLimits

0xd454,	// (0x000398d0) cell_tport_appsw_pane_cp03

0xe40e,	// (0x0003a88a) phob2_contact_card_pane

0xe40e,	// (0x0003a88a) phob2_listscroll_pane

0xe255,	// (0x0003a6d1) phob2_list_pane

0xe25d,	// (0x0003a6d9) scroll_pane_cp034

0xe265,	// (0x0003a6e1) phob2_cc_data_pane_ParamLimits

0xe265,	// (0x0003a6e1) phob2_cc_data_pane

0xe27d,	// (0x0003a6f9) phob2_cc_listscroll_pane_ParamLimits

0xe27d,	// (0x0003a6f9) phob2_cc_listscroll_pane

0xe295,	// (0x0003a711) list_double_large_graphic_phob2_pane_ParamLimits

0xe295,	// (0x0003a711) list_double_large_graphic_phob2_pane

0xe2a8,	// (0x0003a724) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe2a8,	// (0x0003a724) list_double_large_graphic_phob2_pane_g1

0x722b,	// (0x000336a7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x722b,	// (0x000336a7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff41,	// (0x0003c3bd) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff41,	// (0x0003c3bd) list_double_large_graphic_phob2_pane_g

0x7237,	// (0x000336b3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x7237,	// (0x000336b3) list_double_large_graphic_phob2_pane_t1

0x724c,	// (0x000336c8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x724c,	// (0x000336c8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff46,	// (0x0003c3c2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff46,	// (0x0003c3c2) list_double_large_graphic_phob2_pane_t

0xe40e,	// (0x0003a88a) list_highlight_pane_cp024

0xe2b5,	// (0x0003a731) phob2_cc_button_pane

0xe2bd,	// (0x0003a739) phob2_cc_data_pane_g1_ParamLimits

0xe2bd,	// (0x0003a739) phob2_cc_data_pane_g1

0xe2c9,	// (0x0003a745) phob2_cc_data_pane_g2_ParamLimits

0xe2c9,	// (0x0003a745) phob2_cc_data_pane_g2

0x0001,

0xff4b,	// (0x0003c3c7) phob2_cc_data_pane_g_ParamLimits

0xff4b,	// (0x0003c3c7) phob2_cc_data_pane_g

0xe2d5,	// (0x0003a751) phob2_cc_data_pane_t1_ParamLimits

0xe2d5,	// (0x0003a751) phob2_cc_data_pane_t1

0xe2e7,	// (0x0003a763) phob2_cc_data_pane_t2_ParamLimits

0xe2e7,	// (0x0003a763) phob2_cc_data_pane_t2

0xe2f9,	// (0x0003a775) phob2_cc_data_pane_t3_ParamLimits

0xe2f9,	// (0x0003a775) phob2_cc_data_pane_t3

0x0002,

0xff50,	// (0x0003c3cc) phob2_cc_data_pane_t_ParamLimits

0xff50,	// (0x0003c3cc) phob2_cc_data_pane_t

0xe30b,	// (0x0003a787) phob2_cc_list_pane_ParamLimits

0xe30b,	// (0x0003a787) phob2_cc_list_pane

0x4727,	// (0x00030ba3) scroll_pane_cp035_ParamLimits

0x4727,	// (0x00030ba3) scroll_pane_cp035

0xf0bd,	// (0x0003b539) bg_button_pane_cp033

0xe317,	// (0x0003a793) phob2_cc_button_pane_g1

0xe323,	// (0x0003a79f) phob2_cc_button_pane_t1

0xe338,	// (0x0003a7b4) phob2_cc_button_pane_t2

0x0001,

0xff57,	// (0x0003c3d3) phob2_cc_button_pane_t

0xe34a,	// (0x0003a7c6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe34a,	// (0x0003a7c6) list_double_large_graphic_phob2_cc_pane

0xe365,	// (0x0003a7e1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe365,	// (0x0003a7e1) list_double_large_graphic_phob2_cc_pane_g1

0x725e,	// (0x000336da) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x725e,	// (0x000336da) list_double_large_graphic_phob2_cc_pane_g2

0x726d,	// (0x000336e9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x726d,	// (0x000336e9) list_double_large_graphic_phob2_cc_pane_g3

0x727c,	// (0x000336f8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x727c,	// (0x000336f8) list_double_large_graphic_phob2_cc_pane_g4

0x728d,	// (0x00033709) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x728d,	// (0x00033709) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff5c,	// (0x0003c3d8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff5c,	// (0x0003c3d8) list_double_large_graphic_phob2_cc_pane_g

0x729c,	// (0x00033718) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x729c,	// (0x00033718) list_double_large_graphic_phob2_cc_pane_t1

0x72c5,	// (0x00033741) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x72c5,	// (0x00033741) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff67,	// (0x0003c3e3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff67,	// (0x0003c3e3) list_double_large_graphic_phob2_cc_pane_t

0xe376,	// (0x0003a7f2) list_highlight_pane_cp025_ParamLimits

0xe376,	// (0x0003a7f2) list_highlight_pane_cp025

0xf0bd,	// (0x0003b539) bg_button_pane_cp033_ParamLimits

0xe317,	// (0x0003a793) phob2_cc_button_pane_g1_ParamLimits

0xe323,	// (0x0003a79f) phob2_cc_button_pane_t1_ParamLimits

0xe338,	// (0x0003a7b4) phob2_cc_button_pane_t2_ParamLimits

0xff57,	// (0x0003c3d3) phob2_cc_button_pane_t_ParamLimits

0x7511,	// (0x0003398d) popup_wgtman_window

0x482a,	// (0x00030ca6) scroll_pane_cp038

0xde66,	// (0x0003a2e2) wgtman_btn_pane_cp_01_ParamLimits

0xde66,	// (0x0003a2e2) wgtman_btn_pane_cp_01

0xe384,	// (0x0003a800) wgtman_content_pane

0xe38d,	// (0x0003a809) wgtman_heading_pane

0xe40e,	// (0x0003a88a) bg_heading_pane_cp02

0xe396,	// (0x0003a812) wgtman_heading_pane_g1

0xe39e,	// (0x0003a81a) wgtman_heading_pane_t1

0xe3ac,	// (0x0003a828) scroll_pane_cp036

0xe3b4,	// (0x0003a830) wgtman_list_pane

0xe3bc,	// (0x0003a838) wgtman_list_pane_t1_ParamLimits

0xe3bc,	// (0x0003a838) wgtman_list_pane_t1

0xb804,	// (0x00037c80) cam4_grid_pane

0x6662,	// (0x00032ade) bg_button_pane_cp015_ParamLimits

0xc3a4,	// (0x00038820) bg_button_pane_cp016_ParamLimits

0xc3b7,	// (0x00038833) bg_button_pane_cp017_ParamLimits

0x66a0,	// (0x00032b1c) popup_vitu2_query_window_g3_ParamLimits

0x66a0,	// (0x00032b1c) popup_vitu2_query_window_g3

0x6719,	// (0x00032b95) popup_vitu2_query_window_t6_ParamLimits

0x6719,	// (0x00032b95) popup_vitu2_query_window_t6

0x6744,	// (0x00032bc0) popup_vitu2_query_window_t7_ParamLimits

0x6744,	// (0x00032bc0) popup_vitu2_query_window_t7

0xe3d4,	// (0x0003a850) cam4_grid_pane_g1

0xe3dd,	// (0x0003a859) cam4_grid_pane_g2

0xe3e6,	// (0x0003a862) cam4_grid_pane_g3

0xe3ef,	// (0x0003a86b) cam4_grid_pane_g4

0x0003,

0xff6c,	// (0x0003c3e8) cam4_grid_pane_g

0x8163,	// (0x000345df) aid_placing_vt_slider_lsc_ParamLimits

0x840d,	// (0x00034889) vidtel_button_pane_ParamLimits

0x840d,	// (0x00034889) vidtel_button_pane

0xe40e,	// (0x0003a88a) bg_button_pane_cp034

0xe3f8,	// (0x0003a874) vidtel_button_pane_g1

0xe400,	// (0x0003a87c) vidtel_button_pane_t1

0x3ceb,	// (0x00030167) aid_size_vtel_slider_touch

0x4727,	// (0x00030ba3) scroll_pane_cp039

0x4856,	// (0x00030cd2) ncim_query_button_pane_cp01_ParamLimits

0x4875,	// (0x00030cf1) ncimui_query_pane_g1_ParamLimits

0xf0bd,	// (0x0003b539) input_focus_pane_cp012_ParamLimits

0x489a,	// (0x00030d16) ncim_query_entry_pane_t1_ParamLimits

0x4727,	// (0x00030ba3) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
