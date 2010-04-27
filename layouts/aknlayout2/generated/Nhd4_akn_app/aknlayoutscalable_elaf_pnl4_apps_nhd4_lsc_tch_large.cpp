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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0008b5f0 };

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
0x0e9d,	// (0x0008c48d) Screen

0x0ea9,	// (0x0008c499) application_window

0x0ef5,	// (0x0008c4e5) area_bottom_pane_ParamLimits

0x0ef5,	// (0x0008c4e5) area_bottom_pane

0x0f2e,	// (0x0008c51e) area_top_pane_ParamLimits

0x0f2e,	// (0x0008c51e) area_top_pane

0x971f,	// (0x00094d0f) call_video_uplink_pane_ParamLimits

0x971f,	// (0x00094d0f) call_video_uplink_pane

0x0fbc,	// (0x0008c5ac) main_pane_ParamLimits

0x0fbc,	// (0x0008c5ac) main_pane

0xc7c8,	// (0x00097db8) context_pane

0x4388,	// (0x0008f978) navi_pane

0x43ba,	// (0x0008f9aa) popup_cale_events_window_ParamLimits

0x43ba,	// (0x0008f9aa) popup_cale_events_window

0xc7db,	// (0x00097dcb) popup_mup_playback_window

0x43d2,	// (0x0008f9c2) signal_pane

0xa6fa,	// (0x00095cea) main_browser_pane

0xa8c8,	// (0x00095eb8) main_burst_pane

0x40f8,	// (0x0008f6e8) main_calc_pane

0xc7ae,	// (0x00097d9e) main_cale_day_pane

0x15ee,	// (0x0008cbde) main_cale_month_pane

0xc7ae,	// (0x00097d9e) main_cale_week_pane

0xa8c8,	// (0x00095eb8) main_call_pane

0x9b50,	// (0x00095140) main_call_poc_pane

0xa8c8,	// (0x00095eb8) main_camera_pane

0xa8c8,	// (0x00095eb8) main_chi_dic_pane

0xb0cf,	// (0x000966bf) main_clock_pane

0x9b50,	// (0x00095140) main_fmradio_pane

0xa8c8,	// (0x00095eb8) main_graph_messa_pane

0x9b50,	// (0x00095140) main_help_pane

0xa6fa,	// (0x00095cea) main_im_pane

0xa616,	// (0x00095c06) main_image_pane_ParamLimits

0xa616,	// (0x00095c06) main_image_pane

0x9b50,	// (0x00095140) main_location2_pane

0xa8c8,	// (0x00095eb8) main_location_pane

0xa616,	// (0x00095c06) main_messa_pane

0x9b50,	// (0x00095140) main_mp2_pane

0xa8c8,	// (0x00095eb8) main_mp_pane

0x9b50,	// (0x00095140) main_msg_pane

0x9b50,	// (0x00095140) main_mup_eq_pane

0x9b50,	// (0x00095140) main_mup_pane

0xa6fa,	// (0x00095cea) main_notes_pane

0x9b50,	// (0x00095140) main_pec_pane

0x9b50,	// (0x00095140) main_phob_pane

0x9b50,	// (0x00095140) main_pinb_pane

0x9b50,	// (0x00095140) main_postcard_pane

0x9b50,	// (0x00095140) main_qdial_pane

0xa8c8,	// (0x00095eb8) main_skin_pane

0x9b50,	// (0x00095140) main_smil2_pane

0xa8c8,	// (0x00095eb8) main_smil_pane

0xa8c8,	// (0x00095eb8) main_video_pane

0xa8c8,	// (0x00095eb8) main_video_tele_pane

0xa616,	// (0x00095c06) main_viewer_pane_ParamLimits

0xa616,	// (0x00095c06) main_viewer_pane

0xa8c8,	// (0x00095eb8) main_vorec_pane

0x414c,	// (0x0008f73c) popup_blid_sat_info_window_ParamLimits

0x414c,	// (0x0008f73c) popup_blid_sat_info_window

0x41a4,	// (0x0008f794) popup_dyc_status_message_window_ParamLimits

0x41a4,	// (0x0008f794) popup_dyc_status_message_window

0x41bc,	// (0x0008f7ac) popup_grid_large_graphic_window_ParamLimits

0x41bc,	// (0x0008f7ac) popup_grid_large_graphic_window

0x4272,	// (0x0008f862) popup_loc_request_window_ParamLimits

0x4272,	// (0x0008f862) popup_loc_request_window

0x4360,	// (0x0008f950) popup_wml_address_window_ParamLimits

0x4360,	// (0x0008f950) popup_wml_address_window

0x3f32,	// (0x0008f522) call_muted_g1

0x3be5,	// (0x0008f1d5) popup_call_audio_conf_window_ParamLimits

0x3be5,	// (0x0008f1d5) popup_call_audio_conf_window

0x3f46,	// (0x0008f536) popup_call_audio_first_window_ParamLimits

0x3f46,	// (0x0008f536) popup_call_audio_first_window

0x3fbc,	// (0x0008f5ac) popup_call_audio_in_window_ParamLimits

0x3fbc,	// (0x0008f5ac) popup_call_audio_in_window

0x3ff8,	// (0x0008f5e8) popup_call_audio_out_window_ParamLimits

0x3ff8,	// (0x0008f5e8) popup_call_audio_out_window

0x4032,	// (0x0008f622) popup_call_audio_second_window_ParamLimits

0x4032,	// (0x0008f622) popup_call_audio_second_window

0x4088,	// (0x0008f678) popup_call_audio_wait_window_ParamLimits

0x4088,	// (0x0008f678) popup_call_audio_wait_window

0x40bd,	// (0x0008f6ad) popup_number_entry_window_ParamLimits

0x40bd,	// (0x0008f6ad) popup_number_entry_window

0x973d,	// (0x00094d2d) bg_popup_call_pane_cp05_ParamLimits

0x973d,	// (0x00094d2d) bg_popup_call_pane_cp05

0x975d,	// (0x00094d4d) popup_number_entry_window_t1

0x9770,	// (0x00094d60) popup_number_entry_window_t2

0x9782,	// (0x00094d72) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0009a6ba) popup_number_entry_window_t

0x9794,	// (0x00094d84) text_title_cp2

0x97a7,	// (0x00094d97) bg_popup_call_pane_cp_ParamLimits

0x97a7,	// (0x00094d97) bg_popup_call_pane_cp

0x97b5,	// (0x00094da5) call_thumbnail_pane

0x97bd,	// (0x00094dad) popup_call_audio_in_window_g1_ParamLimits

0x97bd,	// (0x00094dad) popup_call_audio_in_window_g1

0x97c9,	// (0x00094db9) popup_call_audio_in_window_g2_ParamLimits

0x97c9,	// (0x00094db9) popup_call_audio_in_window_g2

0x97d5,	// (0x00094dc5) popup_call_audio_in_window_g3_ParamLimits

0x97d5,	// (0x00094dc5) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0009a6c3) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0009a6c3) popup_call_audio_in_window_g

0x97e1,	// (0x00094dd1) popup_call_audio_in_window_t1_ParamLimits

0x97e1,	// (0x00094dd1) popup_call_audio_in_window_t1

0x97fd,	// (0x00094ded) popup_call_audio_in_window_t2_ParamLimits

0x97fd,	// (0x00094ded) popup_call_audio_in_window_t2

0x9819,	// (0x00094e09) popup_call_audio_in_window_t3_ParamLimits

0x9819,	// (0x00094e09) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0009a6ca) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0009a6ca) popup_call_audio_in_window_t

0x97a7,	// (0x00094d97) bg_popup_call_pane_cp01_ParamLimits

0x97a7,	// (0x00094d97) bg_popup_call_pane_cp01

0x97b5,	// (0x00094da5) call_thumbnail_pane_cp02

0x982c,	// (0x00094e1c) call_type_pane_cp022

0x9834,	// (0x00094e24) popup_call_audio_out_window_g1_ParamLimits

0x9834,	// (0x00094e24) popup_call_audio_out_window_g1

0x9846,	// (0x00094e36) popup_call_audio_out_window_g2_ParamLimits

0x9846,	// (0x00094e36) popup_call_audio_out_window_g2

0x9852,	// (0x00094e42) popup_call_audio_out_window_g3_ParamLimits

0x9852,	// (0x00094e42) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0009a6d1) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0009a6d1) popup_call_audio_out_window_g

0x9864,	// (0x00094e54) popup_call_audio_out_window_t1_ParamLimits

0x9864,	// (0x00094e54) popup_call_audio_out_window_t1

0x987c,	// (0x00094e6c) popup_call_audio_out_window_t2_ParamLimits

0x987c,	// (0x00094e6c) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0009a6d8) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0009a6d8) popup_call_audio_out_window_t

0x9891,	// (0x00094e81) bg_popup_call_pane_ParamLimits

0x9891,	// (0x00094e81) bg_popup_call_pane

0x1179,	// (0x0008c769) call_thumbnail_pane_cp_ParamLimits

0x1179,	// (0x0008c769) call_thumbnail_pane_cp

0x9915,	// (0x00094f05) call_type_pane_cp01_ParamLimits

0x9915,	// (0x00094f05) call_type_pane_cp01

0x9959,	// (0x00094f49) popup_call_audio_first_window_g1_ParamLimits

0x9959,	// (0x00094f49) popup_call_audio_first_window_g1

0x99a5,	// (0x00094f95) popup_call_audio_first_window_g2_ParamLimits

0x99a5,	// (0x00094f95) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0009a6dd) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0009a6dd) popup_call_audio_first_window_g

0x99e9,	// (0x00094fd9) popup_call_audio_first_window_t1_ParamLimits

0x99e9,	// (0x00094fd9) popup_call_audio_first_window_t1

0x9a95,	// (0x00095085) popup_call_audio_first_window_t4_ParamLimits

0x9a95,	// (0x00095085) popup_call_audio_first_window_t4

0x9b21,	// (0x00095111) popup_call_audio_first_window_t5_ParamLimits

0x9b21,	// (0x00095111) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0009a6e2) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0009a6e2) popup_call_audio_first_window_t

0x9b50,	// (0x00095140) bg_popup_call_pane_cp02

0x9b5a,	// (0x0009514a) call_type_pane_cp023

0x9b62,	// (0x00095152) popup_call_audio_wait_window_g1

0x9b6a,	// (0x0009515a) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009a6e9) popup_call_audio_wait_window_g

0x9b72,	// (0x00095162) popup_call_audio_wait_window_t3

0x9b80,	// (0x00095170) bg_popup_call_pane_cp03_ParamLimits

0x9b80,	// (0x00095170) bg_popup_call_pane_cp03

0x9be0,	// (0x000951d0) call_thumbnail_pane_cp011_ParamLimits

0x9be0,	// (0x000951d0) call_thumbnail_pane_cp011

0x9bec,	// (0x000951dc) call_type_pane_cp034_ParamLimits

0x9bec,	// (0x000951dc) call_type_pane_cp034

0x9c28,	// (0x00095218) popup_call_audio_second_window_g1_ParamLimits

0x9c28,	// (0x00095218) popup_call_audio_second_window_g1

0xa4cf,	// (0x00095abf) popup_call_audio_second_window_g2_ParamLimits

0xa4cf,	// (0x00095abf) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0009a6ee) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0009a6ee) popup_call_audio_second_window_g

0xa50b,	// (0x00095afb) popup_call_audio_second_window_t1_ParamLimits

0xa50b,	// (0x00095afb) popup_call_audio_second_window_t1

0xa58c,	// (0x00095b7c) popup_call_audio_second_window_t2_ParamLimits

0xa58c,	// (0x00095b7c) popup_call_audio_second_window_t2

0xa5c2,	// (0x00095bb2) popup_call_audio_second_window_t3_ParamLimits

0xa5c2,	// (0x00095bb2) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0009a6f3) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0009a6f3) popup_call_audio_second_window_t

0x9b50,	// (0x00095140) bg_popup_call_pane_cp04

0xa5f8,	// (0x00095be8) list_conf_pane

0xa600,	// (0x00095bf0) popup_call_audio_conf_window_t1

0xa60e,	// (0x00095bfe) call_thumbnail_pane_g1

0xa616,	// (0x00095c06) bg_pinb_pane_ParamLimits

0xa616,	// (0x00095c06) bg_pinb_pane

0xa624,	// (0x00095c14) find_pinb_pane

0xa62d,	// (0x00095c1d) listscroll_pinb_pane_ParamLimits

0xa62d,	// (0x00095c1d) listscroll_pinb_pane

0xa63c,	// (0x00095c2c) pinb_bg_pane_g1

0x119d,	// (0x0008c78d) pinb_bg_pane_g2

0x11a9,	// (0x0008c799) pinb_bg_pane_g3

0x11b5,	// (0x0008c7a5) pinb_bg_pane_g4

0x11c1,	// (0x0008c7b1) pinb_bg_pane_g5

0x11cd,	// (0x0008c7bd) pinb_bg_pane_g6

0x11d8,	// (0x0008c7c8) pinb_bg_pane_g7

0x11e3,	// (0x0008c7d3) pinb_bg_pane_g8

0x11ee,	// (0x0008c7de) pinb_bg_pane_g9

0x11f8,	// (0x0008c7e8) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0009a6fa) pinb_bg_pane_g

0x1215,	// (0x0008c805) grid_pinb_pane

0x121e,	// (0x0008c80e) list_pinb_pane

0x1227,	// (0x0008c817) scroll_pane_cp01_ParamLimits

0x1227,	// (0x0008c817) scroll_pane_cp01

0xa646,	// (0x00095c36) find_pinb_pane_g1_ParamLimits

0xa646,	// (0x00095c36) find_pinb_pane_g1

0xa65e,	// (0x00095c4e) find_pinb_pane_t1

0xa670,	// (0x00095c60) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0009a714) find_pinb_pane_t

0xa685,	// (0x00095c75) input_focus_pane_cp01_ParamLimits

0xa685,	// (0x00095c75) input_focus_pane_cp01

0x1239,	// (0x0008c829) cell_pinb_pane_ParamLimits

0x1239,	// (0x0008c829) cell_pinb_pane

0xa691,	// (0x00095c81) cell_pinb_pane_g1_ParamLimits

0xa691,	// (0x00095c81) cell_pinb_pane_g1

0xa6a4,	// (0x00095c94) cell_pinb_pane_g2_ParamLimits

0xa6a4,	// (0x00095c94) cell_pinb_pane_g2

0xa6b0,	// (0x00095ca0) cell_pinb_pane_g3_ParamLimits

0xa6b0,	// (0x00095ca0) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0009a719) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0009a719) cell_pinb_pane_g

0x9b50,	// (0x00095140) grid_highlight_pane_cp01

0x1267,	// (0x0008c857) list_pinb_item_pane_ParamLimits

0x1267,	// (0x0008c857) list_pinb_item_pane

0x9b50,	// (0x00095140) list_highlight_pane_cp02

0x127a,	// (0x0008c86a) list_pinb_item_pane_g1_ParamLimits

0x127a,	// (0x0008c86a) list_pinb_item_pane_g1

0x1287,	// (0x0008c877) list_pinb_item_pane_g2_ParamLimits

0x1287,	// (0x0008c877) list_pinb_item_pane_g2

0x1293,	// (0x0008c883) list_pinb_item_pane_g3_ParamLimits

0x1293,	// (0x0008c883) list_pinb_item_pane_g3

0x12a4,	// (0x0008c894) list_pinb_item_pane_g4_ParamLimits

0x12a4,	// (0x0008c894) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0009a720) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0009a720) list_pinb_item_pane_g

0x12b0,	// (0x0008c8a0) list_pinb_item_pane_t1_ParamLimits

0x12b0,	// (0x0008c8a0) list_pinb_item_pane_t1

0x12e5,	// (0x0008c8d5) calc_display_pane

0x130d,	// (0x0008c8fd) calc_paper_pane

0x1330,	// (0x0008c920) grid_calc_pane

0x9b50,	// (0x00095140) bg_list_pane_cp01

0x135e,	// (0x0008c94e) clock_g1

0x1366,	// (0x0008c956) clock_g2

0x0001,

0xf139,	// (0x0009a729) clock_g

0x136e,	// (0x0008c95e) clock_t1_ParamLimits

0x136e,	// (0x0008c95e) clock_t1

0x1383,	// (0x0008c973) clock_t2_ParamLimits

0x1383,	// (0x0008c973) clock_t2

0x1395,	// (0x0008c985) clock_t3_ParamLimits

0x1395,	// (0x0008c985) clock_t3

0x13a7,	// (0x0008c997) clock_t4_ParamLimits

0x13a7,	// (0x0008c997) clock_t4

0x13b9,	// (0x0008c9a9) clock_t5_ParamLimits

0x13b9,	// (0x0008c9a9) clock_t5

0x13ce,	// (0x0008c9be) clock_t6_ParamLimits

0x13ce,	// (0x0008c9be) clock_t6

0x13e0,	// (0x0008c9d0) clock_t7_ParamLimits

0x13e0,	// (0x0008c9d0) clock_t7

0x13f2,	// (0x0008c9e2) clock_t8_ParamLimits

0x13f2,	// (0x0008c9e2) clock_t8

0x1406,	// (0x0008c9f6) clock_t9_ParamLimits

0x1406,	// (0x0008c9f6) clock_t9

0x0008,

0xf13e,	// (0x0009a72e) clock_t_ParamLimits

0xf13e,	// (0x0009a72e) clock_t

0xa6bc,	// (0x00095cac) popup_clock_analogue_window_cp02

0xa6bc,	// (0x00095cac) popup_clock_digital_window_cp01

0xa6c4,	// (0x00095cb4) listscroll_help_pane

0x9b50,	// (0x00095140) phob_pre_status_pane

0xa6ce,	// (0x00095cbe) grid_qdial_pane

0xa616,	// (0x00095c06) listscroll_mce_pane

0xa616,	// (0x00095c06) bg_notes_pane

0xa6d8,	// (0x00095cc8) list_notes_pane

0x141a,	// (0x0008ca0a) scroll_pane_cp06

0xa6e6,	// (0x00095cd6) bg_calc_paper_pane

0x9c6c,	// (0x0009525c) list_calc_pane

0xa6fa,	// (0x00095cea) bg_calc_display_pane

0x142e,	// (0x0008ca1e) calc_display_pane_t1

0x1440,	// (0x0008ca30) calc_display_pane_t2

0x9c86,	// (0x00095276) calc_display_pane_t3

0x0002,

0xf151,	// (0x0009a741) calc_display_pane_t

0x1452,	// (0x0008ca42) cell_calc_pane_ParamLimits

0x1452,	// (0x0008ca42) cell_calc_pane

0xa706,	// (0x00095cf6) bg_calc_paper_pane_g1

0xa712,	// (0x00095d02) bg_calc_paper_pane_g2

0xa71e,	// (0x00095d0e) bg_calc_paper_pane_g3

0xa72a,	// (0x00095d1a) bg_calc_paper_pane_g4

0xa736,	// (0x00095d26) bg_calc_paper_pane_g5

0x1489,	// (0x0008ca79) bg_calc_paper_pane_g6

0x149a,	// (0x0008ca8a) bg_calc_paper_pane_g7

0x14ab,	// (0x0008ca9b) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0009a748) bg_calc_paper_pane_g

0x14be,	// (0x0008caae) calc_bg_paper_pane_g9

0x14d1,	// (0x0008cac1) list_calc_item_pane_ParamLimits

0x14d1,	// (0x0008cac1) list_calc_item_pane

0xa742,	// (0x00095d32) list_calc_item_pane_g1

0x9c98,	// (0x00095288) list_calc_item_pane_t1_ParamLimits

0x9c98,	// (0x00095288) list_calc_item_pane_t1

0x14eb,	// (0x0008cadb) list_calc_item_pane_t2_ParamLimits

0x14eb,	// (0x0008cadb) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0009a759) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0009a759) list_calc_item_pane_t

0xa74f,	// (0x00095d3f) cell_calc_pane_g1

0xa759,	// (0x00095d49) grid_highlight_pane_cp02

0xa77b,	// (0x00095d6b) bg_calc_display_pane_g1

0x9caa,	// (0x0009529a) bg_calc_display_pane_g2

0xa784,	// (0x00095d74) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0009a763) bg_calc_display_pane_g

0x151d,	// (0x0008cb0d) cell_qdial_pane_ParamLimits

0x151d,	// (0x0008cb0d) cell_qdial_pane

0x1531,	// (0x0008cb21) cell_qdial_pane_g1_ParamLimits

0x1531,	// (0x0008cb21) cell_qdial_pane_g1

0x1547,	// (0x0008cb37) cell_qdial_pane_g2_ParamLimits

0x1547,	// (0x0008cb37) cell_qdial_pane_g2

0xa78d,	// (0x00095d7d) cell_qdial_pane_g3_ParamLimits

0xa78d,	// (0x00095d7d) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0009a76a) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0009a76a) cell_qdial_pane_g

0x156d,	// (0x0008cb5d) cell_qdial_pane_t1_ParamLimits

0x156d,	// (0x0008cb5d) cell_qdial_pane_t1

0x1585,	// (0x0008cb75) cell_qdial_pane_t2_ParamLimits

0x1585,	// (0x0008cb75) cell_qdial_pane_t2

0x1598,	// (0x0008cb88) cell_qdial_pane_t3_ParamLimits

0x1598,	// (0x0008cb88) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0009a773) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0009a773) cell_qdial_pane_t

0x9b50,	// (0x00095140) grid_highlight_pane_cp04

0xa799,	// (0x00095d89) thumbnail_qdial_pane_ParamLimits

0xa799,	// (0x00095d89) thumbnail_qdial_pane

0xa7f5,	// (0x00095de5) list_help_pane

0xa7fe,	// (0x00095dee) scroll_pane_cp02

0x15ab,	// (0x0008cb9b) help_list_pane_t1_ParamLimits

0x15ab,	// (0x0008cb9b) help_list_pane_t1

0x9cb4,	// (0x000952a4) bg_notes_pane_g2

0x9cbc,	// (0x000952ac) bg_notes_pane_g3

0x9cc4,	// (0x000952b4) notes_bg_pane_g1

0x9ccc,	// (0x000952bc) notes_bg_pane_g4

0x9cd4,	// (0x000952c4) notes_bg_pane_g5

0x9cdc,	// (0x000952cc) notes_bg_pane_g6

0x9ce4,	// (0x000952d4) notes_bg_pane_g7

0x9cec,	// (0x000952dc) notes_bg_pane_g8

0x9cf4,	// (0x000952e4) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0009a791) notes_bg_pane_g

0x15ca,	// (0x0008cbba) list_notes_text_pane_ParamLimits

0x15ca,	// (0x0008cbba) list_notes_text_pane

0xa807,	// (0x00095df7) list_notes_text_pane_g1

0x15e0,	// (0x0008cbd0) list_notes_text_pane_t1

0x15ee,	// (0x0008cbde) listscroll_cale_week_pane

0x161a,	// (0x0008cc0a) bg_cale_heading_pane

0xa82a,	// (0x00095e1a) bg_cale_pane_cp01

0x1638,	// (0x0008cc28) cale_week_corner_pane

0x1657,	// (0x0008cc47) cale_week_day_heading_pane

0x167a,	// (0x0008cc6a) cale_week_scroll_pane_g1

0x1693,	// (0x0008cc83) cale_week_scroll_pane_g2

0x16ab,	// (0x0008cc9b) cale_week_scroll_pane_g3

0x16c3,	// (0x0008ccb3) cale_week_scroll_pane_g4

0x16db,	// (0x0008cccb) cale_week_scroll_pane_g5

0x16f7,	// (0x0008cce7) cale_week_scroll_pane_g6

0x1717,	// (0x0008cd07) cale_week_scroll_pane_g7

0x1737,	// (0x0008cd27) cale_week_scroll_pane_g8

0x175b,	// (0x0008cd4b) cale_week_scroll_pane_g9

0x1773,	// (0x0008cd63) cale_week_scroll_pane_g10

0x178b,	// (0x0008cd7b) cale_week_scroll_pane_g11

0x17a3,	// (0x0008cd93) cale_week_scroll_pane_g12

0x17bb,	// (0x0008cdab) cale_week_scroll_pane_g13

0x17bb,	// (0x0008cdab) cale_week_scroll_pane_g14

0x17bb,	// (0x0008cdab) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0009a7a0) cale_week_scroll_pane_g

0x17f7,	// (0x0008cde7) cale_week_time_pane

0x181b,	// (0x0008ce0b) grid_cale_week_pane

0xa859,	// (0x00095e49) scroll_pane_cp08

0x1841,	// (0x0008ce31) cell_cale_week_pane_ParamLimits

0x1841,	// (0x0008ce31) cell_cale_week_pane

0x18cf,	// (0x0008cebf) cale_week_day_heading_pane_t1

0x1919,	// (0x0008cf09) cale_week_day_heading_pane_t2

0x1968,	// (0x0008cf58) cale_week_day_heading_pane_t3

0x19b7,	// (0x0008cfa7) cale_week_day_heading_pane_t4

0x1a06,	// (0x0008cff6) cale_week_day_heading_pane_t5

0x1a5d,	// (0x0008d04d) cale_week_day_heading_pane_t6

0x1ab4,	// (0x0008d0a4) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0009a7c1) cale_week_day_heading_pane_t

0xa876,	// (0x00095e66) bg_cale_side_pane

0x1afe,	// (0x0008d0ee) cale_week_time_pane_t1

0x1b18,	// (0x0008d108) cale_week_time_pane_t2

0x1b32,	// (0x0008d122) cale_week_time_pane_t3

0x1b4c,	// (0x0008d13c) cale_week_time_pane_t4

0x1b66,	// (0x0008d156) cale_week_time_pane_t5

0x1b80,	// (0x0008d170) cale_week_time_pane_t6

0x1b9a,	// (0x0008d18a) cale_week_time_pane_t7

0x1bba,	// (0x0008d1aa) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0009a7d0) cale_week_time_pane_t

0x1bda,	// (0x0008d1ca) cell_cale_week_pane_g2

0x1bfe,	// (0x0008d1ee) cell_cale_week_pane_g3_ParamLimits

0x1bfe,	// (0x0008d1ee) cell_cale_week_pane_g3

0xa884,	// (0x00095e74) grid_highlight_pane_cp07

0xa88c,	// (0x00095e7c) listscroll_gms_pane

0xa896,	// (0x00095e86) grid_gms_pane

0xa89f,	// (0x00095e8f) listscroll_gms_pane_g1

0xa8a7,	// (0x00095e97) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0009a7e1) listscroll_gms_pane_g

0x1c16,	// (0x0008d206) scroll_pane_cp010

0x1c21,	// (0x0008d211) cell_gms_pane_ParamLimits

0x1c21,	// (0x0008d211) cell_gms_pane

0x1c33,	// (0x0008d223) cell_gms_pane_g1

0xa8af,	// (0x00095e9f) cell_gms_pane_g2

0xa807,	// (0x00095df7) cell_gms_pane_g3

0xa8b7,	// (0x00095ea7) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0009a7e6) cell_gms_pane_g

0xa8c0,	// (0x00095eb0) grid_highlight_pane_cp09

0x3edc,	// (0x0008f4cc) phob_pre_status_pane_g1

0x3ee4,	// (0x0008f4d4) phob_pre_status_pane_g2

0x3eec,	// (0x0008f4dc) phob_pre_status_pane_g3

0x3ef4,	// (0x0008f4e4) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0009abd1) phob_pre_status_pane_g

0x3f04,	// (0x0008f4f4) phob_pre_status_pane_t1

0x3f12,	// (0x0008f502) phob_pre_status_pane_t2

0x3f22,	// (0x0008f512) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0009abdc) phob_pre_status_pane_t

0xa8c8,	// (0x00095eb8) bg_list_pane_cp05

0x1c43,	// (0x0008d233) grid_vorec_pane

0x1c4d,	// (0x0008d23d) vorec_t1

0x1c5b,	// (0x0008d24b) vorec_t2

0x1c69,	// (0x0008d259) vorec_t3

0x1c77,	// (0x0008d267) vorec_t4

0x96af,	// (0x00094c9f) vorec_t5

0x96bd,	// (0x00094cad) vorec_t6

0x0004,

0xf1ff,	// (0x0009a7ef) vorec_t

0x96cb,	// (0x00094cbb) wait_bar_pane_cp01

0x1c93,	// (0x0008d283) cell_vorec_pane_ParamLimits

0x1c93,	// (0x0008d283) cell_vorec_pane

0x9cfc,	// (0x000952ec) cell_vorec_pane_g1

0x9b50,	// (0x00095140) grid_highlight_pane_cp05

0x1cbe,	// (0x0008d2ae) cams_zoom_pane

0x1ccd,	// (0x0008d2bd) image_vga_pane

0x1ce7,	// (0x0008d2d7) main_camera_pane_g1

0x1cf9,	// (0x0008d2e9) main_camera_pane_g2

0x1d09,	// (0x0008d2f9) main_camera_pane_g3

0x1d1b,	// (0x0008d30b) main_camera_pane_g4

0x1d2d,	// (0x0008d31d) main_camera_pane_g5

0x1d3f,	// (0x0008d32f) main_camera_pane_g6

0x1d51,	// (0x0008d341) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0009a7fa) main_camera_pane_g

0x1d63,	// (0x0008d353) main_camera_pane_t1

0x1d79,	// (0x0008d369) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0009a80b) main_camera_pane_t

0x1db5,	// (0x0008d3a5) cams_zoom_pane_cp_ParamLimits

0x1db5,	// (0x0008d3a5) cams_zoom_pane_cp

0x1ddd,	// (0x0008d3cd) image_cif_pane_ParamLimits

0x1ddd,	// (0x0008d3cd) image_cif_pane

0x1e18,	// (0x0008d408) image_subqcif_pane

0x1e20,	// (0x0008d410) main_video_pane_g1_ParamLimits

0x1e20,	// (0x0008d410) main_video_pane_g1

0x1e44,	// (0x0008d434) main_video_pane_g2_ParamLimits

0x1e44,	// (0x0008d434) main_video_pane_g2

0x1e78,	// (0x0008d468) main_video_pane_g3_ParamLimits

0x1e78,	// (0x0008d468) main_video_pane_g3

0x1ea6,	// (0x0008d496) main_video_pane_g4_ParamLimits

0x1ea6,	// (0x0008d496) main_video_pane_g4

0x1ed4,	// (0x0008d4c4) main_video_pane_g5_ParamLimits

0x1ed4,	// (0x0008d4c4) main_video_pane_g5

0xa8dc,	// (0x00095ecc) main_video_pane_g6_ParamLimits

0xa8dc,	// (0x00095ecc) main_video_pane_g6

0x0006,

0xf220,	// (0x0009a810) main_video_pane_g_ParamLimits

0xf220,	// (0x0009a810) main_video_pane_g

0x1efd,	// (0x0008d4ed) main_video_pane_t1_ParamLimits

0x1efd,	// (0x0008d4ed) main_video_pane_t1

0xa8f6,	// (0x00095ee6) cams_zoom_pane_g1

0xa8ff,	// (0x00095eef) cams_zoom_pane_g2

0xa908,	// (0x00095ef8) cams_zoom_pane_g3

0xa911,	// (0x00095f01) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0009a81f) cams_zoom_pane_g

0x1f5a,	// (0x0008d54a) grid_cams_pane

0x1f74,	// (0x0008d564) linegrid_cams_pane

0x1f87,	// (0x0008d577) cell_cams_pane_ParamLimits

0x1f87,	// (0x0008d577) cell_cams_pane

0xa91a,	// (0x00095f0a) cams_burst_image_pane

0xa922,	// (0x00095f12) cell_cams_pane_g1

0x9b50,	// (0x00095140) grid_highlight_pane_cp03

0xa74f,	// (0x00095d3f) mp_bg_pane_g1

0x9b50,	// (0x00095140) bg_list_pane_cp03

0xc6d3,	// (0x00097cc3) bg_mp_pane

0xc6db,	// (0x00097ccb) grid_mp_pane

0xc6e3,	// (0x00097cd3) media_player_g1

0xc6eb,	// (0x00097cdb) media_player_t1

0xc6f9,	// (0x00097ce9) media_player_t2

0xc707,	// (0x00097cf7) media_player_t3

0xc715,	// (0x00097d05) media_player_t4

0xc723,	// (0x00097d13) media_player_t5

0xc731,	// (0x00097d21) media_player_t6

0xc73f,	// (0x00097d2f) media_player_t7

0x0006,

0xf5cb,	// (0x0009abbb) media_player_t

0xc74d,	// (0x00097d3d) wait_bar_pane_cp02

0xf5b0,	// (0x0009aba0) main_usb_pane_t

0x3ed3,	// (0x0008f4c3) cell_mp_pane

0xa74f,	// (0x00095d3f) cell_mp_pane_g1

0x9b50,	// (0x00095140) grid_highlight_pane_cp06

0xa92a,	// (0x00095f1a) grid_skin_colour_pane

0xa932,	// (0x00095f22) list_highlight_pane_cp03

0x1fa7,	// (0x0008d597) skin_g1

0xa93a,	// (0x00095f2a) skin_t1

0xa949,	// (0x00095f39) skin_t2

0x0001,

0xf264,	// (0x0009a854) skin_t

0x1faf,	// (0x0008d59f) cell_skin_colour_pane_ParamLimits

0x1faf,	// (0x0008d59f) cell_skin_colour_pane

0xa957,	// (0x00095f47) cell_skin_colour_pane_g1

0x2028,	// (0x0008d618) call_video_g1_ParamLimits

0x2028,	// (0x0008d618) call_video_g1

0x2044,	// (0x0008d634) call_video_g2_ParamLimits

0x2044,	// (0x0008d634) call_video_g2

0x0001,

0xf269,	// (0x0009a859) call_video_g_ParamLimits

0xf269,	// (0x0009a859) call_video_g

0x2096,	// (0x0008d686) call_video_uplink_pane_cp1_ParamLimits

0x2096,	// (0x0008d686) call_video_uplink_pane_cp1

0xa969,	// (0x00095f59) call_video_uplink_pane_cp2

0x2135,	// (0x0008d725) video_down_crop_pane_ParamLimits

0x2135,	// (0x0008d725) video_down_crop_pane

0x221e,	// (0x0008d80e) video_down_pane_ParamLimits

0x221e,	// (0x0008d80e) video_down_pane

0xa971,	// (0x00095f61) video_down_subqcif_pane_ParamLimits

0xa971,	// (0x00095f61) video_down_subqcif_pane

0xa989,	// (0x00095f79) video_down_subqcif_pane_cp_ParamLimits

0xa989,	// (0x00095f79) video_down_subqcif_pane_cp

0xa9af,	// (0x00095f9f) im_reading_pane_ParamLimits

0xa9af,	// (0x00095f9f) im_reading_pane

0x232c,	// (0x0008d91c) im_writing_pane_ParamLimits

0x232c,	// (0x0008d91c) im_writing_pane

0x2342,	// (0x0008d932) im_reading_pane_t1

0xa9c9,	// (0x00095fb9) list_im_pane

0xa9da,	// (0x00095fca) scroll_pane_cp07

0x237f,	// (0x0008d96f) im_writing_pane_t1_ParamLimits

0x237f,	// (0x0008d96f) im_writing_pane_t1

0xa9f3,	// (0x00095fe3) im_writing_pane_t2_ParamLimits

0xa9f3,	// (0x00095fe3) im_writing_pane_t2

0x0001,

0xf273,	// (0x0009a863) im_writing_pane_t_ParamLimits

0xf273,	// (0x0009a863) im_writing_pane_t

0x9b50,	// (0x00095140) input_focus_pane_cp04

0x9b50,	// (0x00095140) input_focus_pane_cp05

0x2394,	// (0x0008d984) list_im_single_pane_ParamLimits

0x2394,	// (0x0008d984) list_im_single_pane

0x23aa,	// (0x0008d99a) list_single_im_pane_t1

0x3e93,	// (0x0008f483) blid_accuracy_pane

0x3e9b,	// (0x0008f48b) blid_compass_pane

0x3ea5,	// (0x0008f495) main_location_t1

0x3eb5,	// (0x0008f4a5) main_location_t2

0x3ec5,	// (0x0008f4b5) main_location_t3

0x0002,

0xf5da,	// (0x0009abca) main_location_t

0x9b50,	// (0x00095140) aid_levels_location

0xa74f,	// (0x00095d3f) blid_accuracy_pane_g1

0xa74f,	// (0x00095d3f) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0009a8c5) blid_accuracy_pane_g

0xaa3b,	// (0x0009602b) wml_content_pane

0xaa79,	// (0x00096069) wml_button_pane_ParamLimits

0xaa79,	// (0x00096069) wml_button_pane

0x23b9,	// (0x0008d9a9) wml_list_single_large_pane_ParamLimits

0x23b9,	// (0x0008d9a9) wml_list_single_large_pane

0x23cf,	// (0x0008d9bf) wml_list_single_medium_pane_ParamLimits

0x23cf,	// (0x0008d9bf) wml_list_single_medium_pane

0x23e9,	// (0x0008d9d9) wml_list_single_small_pane_ParamLimits

0x23e9,	// (0x0008d9d9) wml_list_single_small_pane

0xaa8d,	// (0x0009607d) wml_selection_box_pane_ParamLimits

0xaa8d,	// (0x0009607d) wml_selection_box_pane

0xaaa0,	// (0x00096090) wml_list_single_pane_t1

0xaaaf,	// (0x0009609f) wml_list_single_medium_pane_t1

0xaabe,	// (0x000960ae) wml_list_single_large_pane_t1

0xaacd,	// (0x000960bd) input_focus_pane_cp02_ParamLimits

0xaacd,	// (0x000960bd) input_focus_pane_cp02

0xaae0,	// (0x000960d0) wml_selection_box_pane_g1

0xaae9,	// (0x000960d9) wml_selection_box_pane_t1_ParamLimits

0xaae9,	// (0x000960d9) wml_selection_box_pane_t1

0xa616,	// (0x00095c06) bg_wml_button_pane_ParamLimits

0xa616,	// (0x00095c06) bg_wml_button_pane

0xab01,	// (0x000960f1) wml_button_pane_g1

0xab09,	// (0x000960f9) wml_button_pane_t1

0xab01,	// (0x000960f1) wml_button_bg_pane_g1

0xab19,	// (0x00096109) wml_button_bg_pane_g2

0xab21,	// (0x00096111) wml_button_bg_pane_g3

0xab29,	// (0x00096119) wml_button_bg_pane_g4

0xab31,	// (0x00096121) wml_button_bg_pane_g5

0xab39,	// (0x00096129) wml_button_bg_pane_g6

0xab41,	// (0x00096131) wml_button_bg_pane_g7

0xab49,	// (0x00096139) wml_button_bg_pane_g8

0xab51,	// (0x00096141) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0009a868) wml_button_bg_pane_g

0x2403,	// (0x0008d9f3) bg_list_pane_cp02

0xab59,	// (0x00096149) mce_header_pane_ParamLimits

0xab59,	// (0x00096149) mce_header_pane

0xab6f,	// (0x0009615f) mce_icon_pane

0xab6f,	// (0x0009615f) mce_image_pane

0xab78,	// (0x00096168) mce_text_pane_ParamLimits

0xab78,	// (0x00096168) mce_text_pane

0x240b,	// (0x0008d9fb) scroll_pane_cp03

0xaa71,	// (0x00096061) scroll_pane_cp04

0xab8b,	// (0x0009617b) scroll_pane_cp05_ParamLimits

0xab8b,	// (0x0009617b) scroll_pane_cp05

0x2415,	// (0x0008da05) mce_header_field_pane_ParamLimits

0x2415,	// (0x0008da05) mce_header_field_pane

0x242c,	// (0x0008da1c) mce_header_field_pane_2_ParamLimits

0x242c,	// (0x0008da1c) mce_header_field_pane_2

0x2442,	// (0x0008da32) mce_header_field_pane_3

0x244a,	// (0x0008da3a) list_single_mce_message_pane_ParamLimits

0x244a,	// (0x0008da3a) list_single_mce_message_pane

0x2461,	// (0x0008da51) list_single_mce_smart_pane_ParamLimits

0x2461,	// (0x0008da51) list_single_mce_smart_pane

0xab97,	// (0x00096187) input_focus_pane_cp03

0xaba0,	// (0x00096190) list_header_data_pane

0x2483,	// (0x0008da73) mce_header_field_pane_t1

0x2493,	// (0x0008da83) list_single_mce_header_pane_ParamLimits

0x2493,	// (0x0008da83) list_single_mce_header_pane

0xaba8,	// (0x00096198) list_single_mce_header_pane_t1

0xabb7,	// (0x000961a7) list_single_mce_message_pane_g1

0xabbf,	// (0x000961af) list_single_mce_message_pane_t1

0x24cd,	// (0x0008dabd) bg_cale_heading_pane_cp01_ParamLimits

0x24cd,	// (0x0008dabd) bg_cale_heading_pane_cp01

0xabcd,	// (0x000961bd) bg_cale_pane_cp02_ParamLimits

0xabcd,	// (0x000961bd) bg_cale_pane_cp02

0x2508,	// (0x0008daf8) cale_month_corner_pane

0x2527,	// (0x0008db17) cale_month_day_heading_pane_ParamLimits

0x2527,	// (0x0008db17) cale_month_day_heading_pane

0x257a,	// (0x0008db6a) cale_month_pane_g1_ParamLimits

0x257a,	// (0x0008db6a) cale_month_pane_g1

0x25aa,	// (0x0008db9a) cale_month_pane_g2_ParamLimits

0x25aa,	// (0x0008db9a) cale_month_pane_g2

0x25da,	// (0x0008dbca) cale_month_pane_g3_ParamLimits

0x25da,	// (0x0008dbca) cale_month_pane_g3

0x2616,	// (0x0008dc06) cale_month_pane_g4_ParamLimits

0x2616,	// (0x0008dc06) cale_month_pane_g4

0x2652,	// (0x0008dc42) cale_month_pane_g5_ParamLimits

0x2652,	// (0x0008dc42) cale_month_pane_g5

0x269a,	// (0x0008dc8a) cale_month_pane_g6_ParamLimits

0x269a,	// (0x0008dc8a) cale_month_pane_g6

0x26e6,	// (0x0008dcd6) cale_month_pane_g7_ParamLimits

0x26e6,	// (0x0008dcd6) cale_month_pane_g7

0x273a,	// (0x0008dd2a) cale_month_pane_g8_ParamLimits

0x273a,	// (0x0008dd2a) cale_month_pane_g8

0x278e,	// (0x0008dd7e) cale_month_pane_g9_ParamLimits

0x278e,	// (0x0008dd7e) cale_month_pane_g9

0x27e0,	// (0x0008ddd0) cale_month_pane_g10_ParamLimits

0x27e0,	// (0x0008ddd0) cale_month_pane_g10

0x2832,	// (0x0008de22) cale_month_pane_g11_ParamLimits

0x2832,	// (0x0008de22) cale_month_pane_g11

0x2884,	// (0x0008de74) cale_month_pane_g12_ParamLimits

0x2884,	// (0x0008de74) cale_month_pane_g12

0x28d6,	// (0x0008dec6) cale_month_pane_g13_ParamLimits

0x28d6,	// (0x0008dec6) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0009a87b) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0009a87b) cale_month_pane_g

0x2928,	// (0x0008df18) cale_month_week_pane

0x294c,	// (0x0008df3c) grid_cale_month_pane_ParamLimits

0x294c,	// (0x0008df3c) grid_cale_month_pane

0x298a,	// (0x0008df7a) cale_month_day_heading_pane_t1

0x2a10,	// (0x0008e000) cale_month_day_heading_pane_t2

0x2aa1,	// (0x0008e091) cale_month_day_heading_pane_t3

0x2b32,	// (0x0008e122) cale_month_day_heading_pane_t4

0x2bcb,	// (0x0008e1bb) cale_month_day_heading_pane_t5

0x2c6c,	// (0x0008e25c) cale_month_day_heading_pane_t6

0x2d0d,	// (0x0008e2fd) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0009a896) cale_month_day_heading_pane_t

0xa876,	// (0x00095e66) bg_cale_side_pane_cp01

0x2db6,	// (0x0008e3a6) cale_month_week_pane_t1

0x2dcf,	// (0x0008e3bf) cale_month_week_pane_t2

0x2de8,	// (0x0008e3d8) cale_month_week_pane_t3

0x2e01,	// (0x0008e3f1) cale_month_week_pane_t4

0x2e1a,	// (0x0008e40a) cale_month_week_pane_t5

0x2e33,	// (0x0008e423) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0009a8a5) cale_month_week_pane_t

0x2e4c,	// (0x0008e43c) cell_cale_month_pane_ParamLimits

0x2e4c,	// (0x0008e43c) cell_cale_month_pane

0x9d06,	// (0x000952f6) cell_cale_month_pane_g1

0x2f7a,	// (0x0008e56a) cell_cale_month_pane_t1_ParamLimits

0x2f7a,	// (0x0008e56a) cell_cale_month_pane_t1

0xa884,	// (0x00095e74) grid_highlight_pane_cp08

0xa74f,	// (0x00095d3f) main_smil_g1

0x2f9a,	// (0x0008e58a) smil_status_pane

0xac0c,	// (0x000961fc) smil_text_pane

0xc5f3,	// (0x00097be3) bg_popup_call3_rect_pane_g8

0xc5fb,	// (0x00097beb) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0009ab5e) bg_popup_call3_rect_pane_g

0xc842,	// (0x00097e32) smil_status_volume_pane_g1

0xac16,	// (0x00096206) smil_status_pane_t1

0x9e5c,	// (0x0009544c) volume_smil_pane

0xac2d,	// (0x0009621d) list_smil_text_pane

0x2faf,	// (0x0008e59f) scroll_pane_cp011

0x2fba,	// (0x0008e5aa) smil_text_list_pane_t1_ParamLimits

0x2fba,	// (0x0008e5aa) smil_text_list_pane_t1

0x9d12,	// (0x00095302) aid_volume_smil_ParamLimits

0x9d12,	// (0x00095302) aid_volume_smil

0xa74f,	// (0x00095d3f) smil_volume_pane_g1

0xa74f,	// (0x00095d3f) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0009a8c5) smil_volume_pane_g

0x15ee,	// (0x0008cbde) listscroll_cale_day_pane

0xac37,	// (0x00096227) bg_cale_pane

0xac4f,	// (0x0009623f) list_cale_pane

0xac72,	// (0x00096262) scroll_pane_cp09

0xac83,	// (0x00096273) cale_bg_pane_g1

0xac8b,	// (0x0009627b) cale_bg_pane_g2

0xac93,	// (0x00096283) cale_bg_pane_g3

0xac9b,	// (0x0009628b) cale_bg_pane_g4

0xaca3,	// (0x00096293) cale_bg_pane_g5

0xacab,	// (0x0009629b) cale_bg_pane_g6

0xacb3,	// (0x000962a3) cale_bg_pane_g7

0xacbb,	// (0x000962ab) cale_bg_pane_g8

0xacc3,	// (0x000962b3) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0009a8ca) cale_bg_pane_g

0x2ffc,	// (0x0008e5ec) list_cale_time_pane_ParamLimits

0x2ffc,	// (0x0008e5ec) list_cale_time_pane

0xacd3,	// (0x000962c3) list_cale_time_pane_g1_ParamLimits

0xacd3,	// (0x000962c3) list_cale_time_pane_g1

0xacdf,	// (0x000962cf) list_cale_time_pane_g2_ParamLimits

0xacdf,	// (0x000962cf) list_cale_time_pane_g2

0x3013,	// (0x0008e603) list_cale_time_pane_g3_ParamLimits

0x3013,	// (0x0008e603) list_cale_time_pane_g3

0x3021,	// (0x0008e611) list_cale_time_pane_g4_ParamLimits

0x3021,	// (0x0008e611) list_cale_time_pane_g4

0x302f,	// (0x0008e61f) list_cale_time_pane_g5_ParamLimits

0x302f,	// (0x0008e61f) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0009a8dd) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0009a8dd) list_cale_time_pane_g

0xacf9,	// (0x000962e9) list_cale_time_pane_t1_ParamLimits

0xacf9,	// (0x000962e9) list_cale_time_pane_t1

0xad21,	// (0x00096311) list_cale_time_pane_t2_ParamLimits

0xad21,	// (0x00096311) list_cale_time_pane_t2

0x32a2,	// (0x0008e892) aid_blid_cardinal_pane

0x32e0,	// (0x0008e8d0) compass_pane_t4

0xad49,	// (0x00096339) list_cale_time_pane_t4_ParamLimits

0xad49,	// (0x00096339) list_cale_time_pane_t4

0x32ee,	// (0x0008e8de) compass_pane_t5

0x32fc,	// (0x0008e8ec) compass_pane_t6

0x330a,	// (0x0008e8fa) compass_pane_t7

0xb206,	// (0x000967f6) navi_pane_cc_t1

0xb43c,	// (0x00096a2c) aid_phob_thumbnail_center_pane

0x38a3,	// (0x0008ee93) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0009a8ea) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0009a8ea) list_cale_time_pane_t

0x97a7,	// (0x00094d97) bg_popup_window_pane_cp02_ParamLimits

0x97a7,	// (0x00094d97) bg_popup_window_pane_cp02

0xad71,	// (0x00096361) heading_pane_cp01_ParamLimits

0xad71,	// (0x00096361) heading_pane_cp01

0xad7d,	// (0x0009636d) loc_req_pane_ParamLimits

0xad7d,	// (0x0009636d) loc_req_pane

0xad8d,	// (0x0009637d) loc_type_pane_ParamLimits

0xad8d,	// (0x0009637d) loc_type_pane

0xad9f,	// (0x0009638f) loc_type_pane_t1_ParamLimits

0xad9f,	// (0x0009638f) loc_type_pane_t1

0xadb1,	// (0x000963a1) loc_type_pane_t2_ParamLimits

0xadb1,	// (0x000963a1) loc_type_pane_t2

0xadc3,	// (0x000963b3) loc_type_pane_t3_ParamLimits

0xadc3,	// (0x000963b3) loc_type_pane_t3

0x0002,

0xf301,	// (0x0009a8f1) loc_type_pane_t_ParamLimits

0xf301,	// (0x0009a8f1) loc_type_pane_t

0xadd5,	// (0x000963c5) list_loc_req_pane

0xaddf,	// (0x000963cf) scroll_pane_cp012

0x303d,	// (0x0008e62d) list_single_loc_request_popup_menu_pane_ParamLimits

0x303d,	// (0x0008e62d) list_single_loc_request_popup_menu_pane

0xadea,	// (0x000963da) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xadea,	// (0x000963da) list_single_loc_request_popup_menu_pane_g1

0xadf6,	// (0x000963e6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xadf6,	// (0x000963e6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0009a8f8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0009a8f8) list_single_loc_request_popup_menu_pane_g

0xae02,	// (0x000963f2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae02,	// (0x000963f2) list_single_loc_request_popup_menu_pane_t1

0xa616,	// (0x00095c06) bg_popup_window_pane_cp03_ParamLimits

0xa616,	// (0x00095c06) bg_popup_window_pane_cp03

0xae18,	// (0x00096408) heading_loc_req_pane_ParamLimits

0xae18,	// (0x00096408) heading_loc_req_pane

0x304a,	// (0x0008e63a) popup_dyc_status_message_window_g1_ParamLimits

0x304a,	// (0x0008e63a) popup_dyc_status_message_window_g1

0x305e,	// (0x0008e64e) popup_dyc_status_message_window_t1_ParamLimits

0x305e,	// (0x0008e64e) popup_dyc_status_message_window_t1

0x3073,	// (0x0008e663) popup_dyc_status_message_window_t2_ParamLimits

0x3073,	// (0x0008e663) popup_dyc_status_message_window_t2

0x3088,	// (0x0008e678) popup_dyc_status_message_window_t3_ParamLimits

0x3088,	// (0x0008e678) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0009a8fd) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0009a8fd) popup_dyc_status_message_window_t

0x9b50,	// (0x00095140) bg_heading_pane_cp01

0xae24,	// (0x00096414) heading_loc_req_pane_g1

0xae2c,	// (0x0009641c) heading_loc_req_pane_g2

0xae34,	// (0x00096424) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0009a904) heading_loc_req_pane_g

0xae3c,	// (0x0009642c) heading_loc_req_pane_t1

0xae4b,	// (0x0009643b) bg_popup_sub_pane_cp01_ParamLimits

0xae4b,	// (0x0009643b) bg_popup_sub_pane_cp01

0xae59,	// (0x00096449) popup_cale_events_window_g1_ParamLimits

0xae59,	// (0x00096449) popup_cale_events_window_g1

0xae79,	// (0x00096469) popup_cale_events_window_g2_ParamLimits

0xae79,	// (0x00096469) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0009a938) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0009a938) popup_cale_events_window_g

0xae99,	// (0x00096489) popup_cale_events_window_t1_ParamLimits

0xae99,	// (0x00096489) popup_cale_events_window_t1

0xaeab,	// (0x0009649b) popup_cale_events_window_t2_ParamLimits

0xaeab,	// (0x0009649b) popup_cale_events_window_t2

0xaee9,	// (0x000964d9) popup_cale_events_window_t3_ParamLimits

0xaee9,	// (0x000964d9) popup_cale_events_window_t3

0xaf23,	// (0x00096513) popup_cale_events_window_t4_ParamLimits

0xaf23,	// (0x00096513) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0009a93d) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0009a93d) popup_cale_events_window_t

0x30b0,	// (0x0008e6a0) call_type_pane

0x30c0,	// (0x0008e6b0) popup_call_status_window_g1

0x30d4,	// (0x0008e6c4) popup_call_status_window_g2

0x30e8,	// (0x0008e6d8) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0009a946) popup_call_status_window_g

0xaf59,	// (0x00096549) call_type_pane_g1

0xaf62,	// (0x00096552) call_type_pane_g2

0x0001,

0xf35d,	// (0x0009a94d) call_type_pane_g

0x9b50,	// (0x00095140) bg_popup_sub_pane_cp02

0xaf6b,	// (0x0009655b) listscroll_popup_wml_pane

0xaf73,	// (0x00096563) list_wml_pane

0xaf7d,	// (0x0009656d) scroll_pane_cp013

0xaf88,	// (0x00096578) list_single_graphic_popup_wml_pane_ParamLimits

0xaf88,	// (0x00096578) list_single_graphic_popup_wml_pane

0xa74f,	// (0x00095d3f) list_single_graphic_popup_wml_pane_g1

0xaf9c,	// (0x0009658c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0009a952) list_single_graphic_popup_wml_pane_g

0xafa4,	// (0x00096594) list_single_graphic_popup_wml_pane_t1

0xafba,	// (0x000965aa) aid_call_pane

0xa60e,	// (0x00095bfe) popup_clock_analogue_window_g1

0xa60e,	// (0x00095bfe) popup_clock_analogue_window_g2

0x9d34,	// (0x00095324) popup_clock_analogue_window_g3

0x9d34,	// (0x00095324) popup_clock_analogue_window_g4

0xa74f,	// (0x00095d3f) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0009a957) popup_clock_analogue_window_g

0x9d3c,	// (0x0009532c) popup_clock_analogue_window_t1

0x9d4a,	// (0x0009533a) clock_digital_number_pane_ParamLimits

0x9d4a,	// (0x0009533a) clock_digital_number_pane

0x9d56,	// (0x00095346) clock_digital_number_pane_cp02_ParamLimits

0x9d56,	// (0x00095346) clock_digital_number_pane_cp02

0x9d62,	// (0x00095352) clock_digital_number_pane_cp03_ParamLimits

0x9d62,	// (0x00095352) clock_digital_number_pane_cp03

0x9d6e,	// (0x0009535e) clock_digital_number_pane_cp04_ParamLimits

0x9d6e,	// (0x0009535e) clock_digital_number_pane_cp04

0x9d7e,	// (0x0009536e) clock_digital_separator_pane_ParamLimits

0x9d7e,	// (0x0009536e) clock_digital_separator_pane

0x9d8a,	// (0x0009537a) popup_clock_digital_window_t1

0xa74f,	// (0x00095d3f) clock_digital_number_pane_g1

0xa74f,	// (0x00095d3f) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0009a8c5) clock_digital_number_pane_g

0xa74f,	// (0x00095d3f) clock_digital_separator_pane_g1

0xa74f,	// (0x00095d3f) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0009a8c5) clock_digital_separator_pane_g

0x9b50,	// (0x00095140) bg_popup_window_pane_cp04

0xafc2,	// (0x000965b2) heading_pane_cp03

0xafca,	// (0x000965ba) listscroll_popup_gms_pane

0xafd2,	// (0x000965c2) grid_large_graphic_popup_pane

0xafdc,	// (0x000965cc) listscroll_popup_gms_pane_g1

0xafe4,	// (0x000965d4) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0009a962) listscroll_popup_gms_pane_g

0xaa71,	// (0x00096061) scroll_pane_cp014

0xafec,	// (0x000965dc) cell_large_graphic_popup_pane_ParamLimits

0xafec,	// (0x000965dc) cell_large_graphic_popup_pane

0xb004,	// (0x000965f4) cell_large_graphic_popup_pane_g1_ParamLimits

0xb004,	// (0x000965f4) cell_large_graphic_popup_pane_g1

0xb010,	// (0x00096600) cell_large_graphic_popup_pane_g2_ParamLimits

0xb010,	// (0x00096600) cell_large_graphic_popup_pane_g2

0xb01c,	// (0x0009660c) cell_large_graphic_popup_pane_g3_ParamLimits

0xb01c,	// (0x0009660c) cell_large_graphic_popup_pane_g3

0xb029,	// (0x00096619) cell_large_graphic_popup_pane_g4_ParamLimits

0xb029,	// (0x00096619) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0009a967) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0009a967) cell_large_graphic_popup_pane_g

0xb039,	// (0x00096629) grid_highlight_pane_cp010

0xa74f,	// (0x00095d3f) bg_popup_call_pane_g1

0xb043,	// (0x00096633) list_single_graphic_popup_conf_pane_ParamLimits

0xb043,	// (0x00096633) list_single_graphic_popup_conf_pane

0xb056,	// (0x00096646) list_highlight_pane_cp01

0xb05f,	// (0x0009664f) list_single_graphic_popup_conf_pane_g1

0xb067,	// (0x00096657) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0009a970) list_single_graphic_popup_conf_pane_g

0xb06f,	// (0x0009665f) list_single_graphic_popup_conf_pane_t1

0xb07d,	// (0x0009666d) linegrid_cams_pane_g1

0x30f7,	// (0x0008e6e7) linegrid_cams_pane_g2

0xa807,	// (0x00095df7) linegrid_cams_pane_g3

0xb086,	// (0x00096676) linegrid_cams_pane_g4

0x3100,	// (0x0008e6f0) linegrid_cams_pane_g5

0x3109,	// (0x0008e6f9) linegrid_cams_pane_g6

0xa8b7,	// (0x00095ea7) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0009a975) linegrid_cams_pane_g

0xb08f,	// (0x0009667f) popup_clock_analogue_window

0xb08f,	// (0x0009667f) popup_clock_digital_window

0x9b50,	// (0x00095140) popup_phob_thumbnail_window

0xa74f,	// (0x00095d3f) call_video_uplink_pane_g1

0xb098,	// (0x00096688) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0009a984) call_video_uplink_pane_g

0xa884,	// (0x00095e74) video_uplink_pane

0xb0a0,	// (0x00096690) mce_image_pane_g1

0x3114,	// (0x0008e704) mce_image_pane_g2

0x311c,	// (0x0008e70c) mce_image_pane_g3

0x3124,	// (0x0008e714) mce_image_pane_g4

0x312e,	// (0x0008e71e) mce_image_pane_g5

0x0004,

0xf399,	// (0x0009a989) mce_image_pane_g

0xb0aa,	// (0x0009669a) control_top_pane_stacon_cp01_ParamLimits

0xb0aa,	// (0x0009669a) control_top_pane_stacon_cp01

0xb0be,	// (0x000966ae) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0be,	// (0x000966ae) uni_indicator_pane_stacon_cp01

0xb0cf,	// (0x000966bf) bg_popup_sub_pane_cp03

0x3136,	// (0x0008e726) chi_dic_find_pane

0x313e,	// (0x0008e72e) listscroll_chi_dic_pane

0x3147,	// (0x0008e737) main_pane_chidic_g1

0xb0d9,	// (0x000966c9) chi_dic_find_pane_t1

0xb0e7,	// (0x000966d7) find_chidic_pane

0xb0f0,	// (0x000966e0) chi_dic_list_pane_ParamLimits

0xb0f0,	// (0x000966e0) chi_dic_list_pane

0xb101,	// (0x000966f1) scroll_pane_cp020

0xb109,	// (0x000966f9) find_chidic_pane_t1

0x9b50,	// (0x00095140) input_focus_pane_cp06

0x315a,	// (0x0008e74a) list_chi_dic_pane_ParamLimits

0x315a,	// (0x0008e74a) list_chi_dic_pane

0x316d,	// (0x0008e75d) list_chi_dic_pane_t1_ParamLimits

0x316d,	// (0x0008e75d) list_chi_dic_pane_t1

0x9b50,	// (0x00095140) list_highlight_pane_cp020

0xb118,	// (0x00096708) bg_cale_heading_pane_g1

0x3180,	// (0x0008e770) bg_cale_heading_pane_g2

0x3188,	// (0x0008e778) bg_cale_heading_pane_g3

0x3190,	// (0x0008e780) bg_cale_heading_pane_g4

0x319a,	// (0x0008e78a) bg_cale_heading_pane_g5

0x31a4,	// (0x0008e794) bg_cale_heading_pane_g6

0x31ac,	// (0x0008e79c) bg_cale_heading_pane_g7

0x31b4,	// (0x0008e7a4) bg_cale_heading_pane_g8

0x31be,	// (0x0008e7ae) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0009a994) bg_cale_heading_pane_g

0xb118,	// (0x00096708) bg_cale_side_pane_g1

0x31c8,	// (0x0008e7b8) bg_cale_side_pane_g2

0x31d0,	// (0x0008e7c0) bg_cale_side_pane_g3

0x31d8,	// (0x0008e7c8) bg_cale_side_pane_g4

0x31e0,	// (0x0008e7d0) bg_cale_side_pane_g5

0x31e8,	// (0x0008e7d8) bg_cale_side_pane_g6

0x31f0,	// (0x0008e7e0) bg_cale_side_pane_g7

0x31f8,	// (0x0008e7e8) bg_cale_side_pane_g8

0x3200,	// (0x0008e7f0) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0009a9a7) bg_cale_side_pane_g

0x3208,	// (0x0008e7f8) popup_call_status_window_ParamLimits

0x3208,	// (0x0008e7f8) popup_call_status_window

0xb120,	// (0x00096710) stacon_top_pane

0xb128,	// (0x00096718) status_pane_ParamLimits

0xb128,	// (0x00096718) status_pane

0xb13d,	// (0x0009672d) status_small_pane

0xb145,	// (0x00096735) control_pane

0x9b50,	// (0x00095140) stacon_bottom_pane

0xb14d,	// (0x0009673d) list_single_mce_smart_pane_t1_ParamLimits

0xb14d,	// (0x0009673d) list_single_mce_smart_pane_t1

0xb160,	// (0x00096750) list_single_mce_smart_pane_t2_ParamLimits

0xb160,	// (0x00096750) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0009a9ba) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0009a9ba) list_single_mce_smart_pane_t

0x324f,	// (0x0008e83f) compass_pane

0x3258,	// (0x0008e848) main_location2_pane_t1

0x326a,	// (0x0008e85a) main_location2_pane_t2

0x327c,	// (0x0008e86c) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0009a9bf) main_location2_pane_t

0xb17f,	// (0x0009676f) compass_pane_g1_ParamLimits

0xb17f,	// (0x0009676f) compass_pane_g1

0x32c2,	// (0x0008e8b2) compass_pane_t1

0x32d1,	// (0x0008e8c1) compass_pane_t2

0x0005,

0xf3d8,	// (0x0009a9c8) compass_pane_t

0x3318,	// (0x0008e908) text_secondary_cp61

0xb1fd,	// (0x000967ed) navi_pane_cams_g5

0xb2d2,	// (0x000968c2) navi_pane_im_t1

0xb2e0,	// (0x000968d0) navi_pane_mp_g1_ParamLimits

0xb2e0,	// (0x000968d0) navi_pane_mp_g1

0xb2f4,	// (0x000968e4) navi_pane_mp_g2_ParamLimits

0xb2f4,	// (0x000968e4) navi_pane_mp_g2

0xb300,	// (0x000968f0) navi_pane_mp_g3_ParamLimits

0xb300,	// (0x000968f0) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0009a9dc) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0009a9dc) navi_pane_mp_g

0xb30c,	// (0x000968fc) navi_pane_mp_t1

0xb31a,	// (0x0009690a) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0009a9e3) navi_pane_mp_t

0xb385,	// (0x00096975) navi_pane_vt_g1

0xb30c,	// (0x000968fc) navi_pane_vt_t1

0xb38d,	// (0x0009697d) navi_slider_pane

0xa8c8,	// (0x00095eb8) zooming_pane

0xb39d,	// (0x0009698d) navi_slider_pane_g1

0x9da7,	// (0x00095397) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0009a9ea) navi_slider_pane_g

0xb3c1,	// (0x000969b1) aid_levels_zoom

0xb3c9,	// (0x000969b9) zooming_pane_g1

0xb3d1,	// (0x000969c1) zooming_pane_g2

0xb3d1,	// (0x000969c1) zooming_pane_g3

0x0002,

0xf409,	// (0x0009a9f9) zooming_pane_g

0xb3d9,	// (0x000969c9) level_10_zoom

0xb3e2,	// (0x000969d2) level_11_zoom

0xb3eb,	// (0x000969db) level_1_zoom

0xb3f4,	// (0x000969e4) level_2_zoom

0xb3fd,	// (0x000969ed) level_3_zoom

0xb406,	// (0x000969f6) level_4_zoom

0xb40f,	// (0x000969ff) level_5_zoom

0xb418,	// (0x00096a08) level_6_zoom

0xb421,	// (0x00096a11) level_7_zoom

0xb42a,	// (0x00096a1a) level_8_zoom

0xb433,	// (0x00096a23) level_9_zoom

0xb444,	// (0x00096a34) popup_phob_thumbnail_window_g1

0xb44c,	// (0x00096a3c) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0009aa00) popup_phob_thumbnail_window_g

0xc755,	// (0x00097d45) level_1_location

0xc75d,	// (0x00097d4d) level_2_location

0xc765,	// (0x00097d55) level_3_location

0xc76d,	// (0x00097d5d) level_4_location

0xa8c8,	// (0x00095eb8) level_5_location

0x3369,	// (0x0008e959) mce_icon_pane_g1

0x3373,	// (0x0008e963) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0009aa05) mce_icon_pane_g

0x337d,	// (0x0008e96d) main_mup_pane_g1_ParamLimits

0x337d,	// (0x0008e96d) main_mup_pane_g1

0x3393,	// (0x0008e983) main_mup_pane_g2_ParamLimits

0x3393,	// (0x0008e983) main_mup_pane_g2

0x33ab,	// (0x0008e99b) main_mup_pane_g3_ParamLimits

0x33ab,	// (0x0008e99b) main_mup_pane_g3

0x33c3,	// (0x0008e9b3) main_mup_pane_g4_ParamLimits

0x33c3,	// (0x0008e9b3) main_mup_pane_g4

0x33db,	// (0x0008e9cb) main_mup_pane_g5_ParamLimits

0x33db,	// (0x0008e9cb) main_mup_pane_g5

0x33f7,	// (0x0008e9e7) main_mup_pane_g6_ParamLimits

0x33f7,	// (0x0008e9e7) main_mup_pane_g6

0x340f,	// (0x0008e9ff) main_mup_pane_g7_ParamLimits

0x340f,	// (0x0008e9ff) main_mup_pane_g7

0x3427,	// (0x0008ea17) main_mup_pane_g8_ParamLimits

0x3427,	// (0x0008ea17) main_mup_pane_g8

0x343f,	// (0x0008ea2f) main_mup_pane_g9_ParamLimits

0x343f,	// (0x0008ea2f) main_mup_pane_g9

0x3459,	// (0x0008ea49) main_mup_pane_g10_ParamLimits

0x3459,	// (0x0008ea49) main_mup_pane_g10

0x3473,	// (0x0008ea63) main_mup_pane_g11_ParamLimits

0x3473,	// (0x0008ea63) main_mup_pane_g11

0x3487,	// (0x0008ea77) main_mup_pane_g12_ParamLimits

0x3487,	// (0x0008ea77) main_mup_pane_g12

0x349d,	// (0x0008ea8d) main_mup_pane_g13_ParamLimits

0x349d,	// (0x0008ea8d) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0009aa0a) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0009aa0a) main_mup_pane_g

0x34b1,	// (0x0008eaa1) main_mup_pane_t1_ParamLimits

0x34b1,	// (0x0008eaa1) main_mup_pane_t1

0x34cb,	// (0x0008eabb) main_mup_pane_t2_ParamLimits

0x34cb,	// (0x0008eabb) main_mup_pane_t2

0x34e3,	// (0x0008ead3) main_mup_pane_t3_ParamLimits

0x34e3,	// (0x0008ead3) main_mup_pane_t3

0x34fb,	// (0x0008eaeb) main_mup_pane_t4_ParamLimits

0x34fb,	// (0x0008eaeb) main_mup_pane_t4

0x3519,	// (0x0008eb09) main_mup_pane_t5_ParamLimits

0x3519,	// (0x0008eb09) main_mup_pane_t5

0x352e,	// (0x0008eb1e) main_mup_pane_t6_ParamLimits

0x352e,	// (0x0008eb1e) main_mup_pane_t6

0x0005,

0xf435,	// (0x0009aa25) main_mup_pane_t_ParamLimits

0xf435,	// (0x0009aa25) main_mup_pane_t

0x3540,	// (0x0008eb30) mup_progress_pane_ParamLimits

0x3540,	// (0x0008eb30) mup_progress_pane

0x354c,	// (0x0008eb3c) mup_visualizer_pane_ParamLimits

0x354c,	// (0x0008eb3c) mup_visualizer_pane

0x3580,	// (0x0008eb70) mup_volume_pane_ParamLimits

0x3580,	// (0x0008eb70) mup_volume_pane

0xb454,	// (0x00096a44) mup_visualizer_pane_g1_ParamLimits

0xb454,	// (0x00096a44) mup_visualizer_pane_g1

0xb454,	// (0x00096a44) mup_visualizer_pane_g2_ParamLimits

0xb454,	// (0x00096a44) mup_visualizer_pane_g2

0xb17f,	// (0x0009676f) mup_visualizer_pane_g3_ParamLimits

0xb17f,	// (0x0009676f) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0009aa32) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0009aa32) mup_visualizer_pane_g

0xa74f,	// (0x00095d3f) mup_volume_pane_g1

0xb46a,	// (0x00096a5a) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0009aa39) mup_volume_pane_g

0xa74f,	// (0x00095d3f) mup_progress_pane_g1

0xb473,	// (0x00096a63) mup_progress_pane_g2

0xb47c,	// (0x00096a6c) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0009aa3e) mup_progress_pane_g

0x9b50,	// (0x00095140) bg_popup_window_pane_cp05

0xb485,	// (0x00096a75) heading_pane_cp02_ParamLimits

0xb485,	// (0x00096a75) heading_pane_cp02

0xb49f,	// (0x00096a8f) list_popup_blid_pane

0xb4a7,	// (0x00096a97) list_blid_sat_info_pane_ParamLimits

0xb4a7,	// (0x00096a97) list_blid_sat_info_pane

0xb4ba,	// (0x00096aaa) list_blid_sat_info_pane_g1

0xb4c2,	// (0x00096ab2) list_blid_sat_info_pane_t1

0x3696,	// (0x0008ec86) mup_equalizer_pane_ParamLimits

0x3696,	// (0x0008ec86) mup_equalizer_pane

0x36af,	// (0x0008ec9f) mup_equalizer_pane_cp1_ParamLimits

0x36af,	// (0x0008ec9f) mup_equalizer_pane_cp1

0x36cc,	// (0x0008ecbc) mup_equalizer_pane_cp2_ParamLimits

0x36cc,	// (0x0008ecbc) mup_equalizer_pane_cp2

0x36e9,	// (0x0008ecd9) mup_equalizer_pane_cp3_ParamLimits

0x36e9,	// (0x0008ecd9) mup_equalizer_pane_cp3

0x370a,	// (0x0008ecfa) mup_equalizer_pane_cp4_ParamLimits

0x370a,	// (0x0008ecfa) mup_equalizer_pane_cp4

0x372b,	// (0x0008ed1b) mup_equalizer_pane_cp5

0x373f,	// (0x0008ed2f) mup_equalizer_pane_cp6

0x3753,	// (0x0008ed43) mup_equalizer_pane_cp7

0xc673,	// (0x00097c63) bg_popup_call_poc_act_pane_g9

0xc67b,	// (0x00097c6b) bg_popup_call_poc_act_pane_g10

0xc683,	// (0x00097c73) bg_popup_call_poc_act_pane_g11

0x000a,

0xa616,	// (0x00095c06) mup_scale_pane

0xa74f,	// (0x00095d3f) mup_scale_pane_g1

0xb4d0,	// (0x00096ac0) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0009aa5a) mup_scale_pane_g

0xb4f4,	// (0x00096ae4) msg_data_pane

0xb4fc,	// (0x00096aec) scroll_pane_cp017

0x026e,	// (0x0008b85e) bg_list_pane_cp04_ParamLimits

0x026e,	// (0x0008b85e) bg_list_pane_cp04

0xb504,	// (0x00096af4) msg_data_pane_g1

0x3779,	// (0x0008ed69) msg_data_pane_g2

0x3781,	// (0x0008ed71) msg_data_pane_g3

0x3789,	// (0x0008ed79) msg_data_pane_g4

0x3791,	// (0x0008ed81) msg_data_pane_g5

0x3799,	// (0x0008ed89) msg_data_pane_g6

0x37a1,	// (0x0008ed91) msg_data_pane_g7

0x0006,

0xf479,	// (0x0009aa69) msg_data_pane_g

0x0292,	// (0x0008b882) msg_text_pane_ParamLimits

0x0292,	// (0x0008b882) msg_text_pane

0x37a9,	// (0x0008ed99) qrid_highlight_pane_cp011_ParamLimits

0x37a9,	// (0x0008ed99) qrid_highlight_pane_cp011

0x9b50,	// (0x00095140) msg_body_pane

0x9b50,	// (0x00095140) msg_header_pane

0xb515,	// (0x00096b05) input_focus_pane_cp07

0x02c6,	// (0x0008b8b6) msg_header_pane_t1_ParamLimits

0x02c6,	// (0x0008b8b6) msg_header_pane_t1

0x02d8,	// (0x0008b8c8) msg_header_pane_t2_ParamLimits

0x02d8,	// (0x0008b8c8) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0009aa7d) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0009aa7d) msg_header_pane_t

0xb52a,	// (0x00096b1a) msg_body_pane_g1

0x02ea,	// (0x0008b8da) msg_body_pane_t1_ParamLimits

0x02ea,	// (0x0008b8da) msg_body_pane_t1

0x031b,	// (0x0008b90b) msg_body_pane_t2_ParamLimits

0x031b,	// (0x0008b90b) msg_body_pane_t2

0x032d,	// (0x0008b91d) msg_body_pane_t3_ParamLimits

0x032d,	// (0x0008b91d) msg_body_pane_t3

0x0002,

0xf492,	// (0x0009aa82) msg_body_pane_t_ParamLimits

0xf492,	// (0x0009aa82) msg_body_pane_t

0x37f9,	// (0x0008ede9) main_viewer_pane_g1_ParamLimits

0x37f9,	// (0x0008ede9) main_viewer_pane_g1

0x3807,	// (0x0008edf7) main_viewer_pane_g2_ParamLimits

0x3807,	// (0x0008edf7) main_viewer_pane_g2

0x3815,	// (0x0008ee05) main_viewer_pane_g3_ParamLimits

0x3815,	// (0x0008ee05) main_viewer_pane_g3

0x3824,	// (0x0008ee14) main_viewer_pane_g4_ParamLimits

0x3824,	// (0x0008ee14) main_viewer_pane_g4

0x9dd1,	// (0x000953c1) main_viewer_pane_g5_ParamLimits

0x9dd1,	// (0x000953c1) main_viewer_pane_g5

0x9dd1,	// (0x000953c1) main_viewer_pane_g7_ParamLimits

0x9dd1,	// (0x000953c1) main_viewer_pane_g7

0x9de3,	// (0x000953d3) main_viewer_pane_g8_ParamLimits

0x9de3,	// (0x000953d3) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0009aa92) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0009aa92) main_viewer_pane_g

0xb532,	// (0x00096b22) viewer_content_pane_ParamLimits

0xb532,	// (0x00096b22) viewer_content_pane

0x3860,	// (0x0008ee50) main_postcard_pane_g1_ParamLimits

0x3860,	// (0x0008ee50) main_postcard_pane_g1

0x3876,	// (0x0008ee66) main_postcard_pane_g2_ParamLimits

0x3876,	// (0x0008ee66) main_postcard_pane_g2

0x388c,	// (0x0008ee7c) main_postcard_pane_g3_ParamLimits

0x388c,	// (0x0008ee7c) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0009aaa3) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0009aaa3) main_postcard_pane_g

0x38a3,	// (0x0008ee93) main_postcard_pane_g4

0xc855,	// (0x00097e45) smil_status_volume_pane_g2

0x38e6,	// (0x0008eed6) postcard_pane_ParamLimits

0x38e6,	// (0x0008eed6) postcard_pane

0xb540,	// (0x00096b30) postcard_pane_g1_ParamLimits

0xb540,	// (0x00096b30) postcard_pane_g1

0x3928,	// (0x0008ef18) postcard_pane_g2_ParamLimits

0x3928,	// (0x0008ef18) postcard_pane_g2

0x3934,	// (0x0008ef24) postcard_pane_g3_ParamLimits

0x3934,	// (0x0008ef24) postcard_pane_g3

0xb54e,	// (0x00096b3e) postcard_pane_g4_ParamLimits

0xb54e,	// (0x00096b3e) postcard_pane_g4

0x3940,	// (0x0008ef30) postcard_pane_g5_ParamLimits

0x3940,	// (0x0008ef30) postcard_pane_g5

0x3955,	// (0x0008ef45) postcard_pane_g6_ParamLimits

0x3955,	// (0x0008ef45) postcard_pane_g6

0xb540,	// (0x00096b30) postcard_pane_g7_ParamLimits

0xb540,	// (0x00096b30) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0009aab0) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0009aab0) postcard_pane_g

0x3969,	// (0x0008ef59) main_mp2_pane_g1_ParamLimits

0x3969,	// (0x0008ef59) main_mp2_pane_g1

0x3975,	// (0x0008ef65) main_mp2_pane_g2_ParamLimits

0x3975,	// (0x0008ef65) main_mp2_pane_g2

0x3981,	// (0x0008ef71) main_mp2_pane_g3_ParamLimits

0x3981,	// (0x0008ef71) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0009aabf) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0009aabf) main_mp2_pane_g

0x398d,	// (0x0008ef7d) main_mp2_pane_t1_ParamLimits

0x398d,	// (0x0008ef7d) main_mp2_pane_t1

0x39a2,	// (0x0008ef92) main_mp2_pane_t2_ParamLimits

0x39a2,	// (0x0008ef92) main_mp2_pane_t2

0x39b4,	// (0x0008efa4) main_mp2_pane_t3_ParamLimits

0x39b4,	// (0x0008efa4) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0009aac6) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0009aac6) main_mp2_pane_t

0xb55c,	// (0x00096b4c) pec_content_pane_ParamLimits

0xb55c,	// (0x00096b4c) pec_content_pane

0xaa71,	// (0x00096061) scroll_pane_cp015

0xb56e,	// (0x00096b5e) pec_attribute_pane_ParamLimits

0xb56e,	// (0x00096b5e) pec_attribute_pane

0x39c6,	// (0x0008efb6) pec_content_pane_g1_ParamLimits

0x39c6,	// (0x0008efb6) pec_content_pane_g1

0xb57e,	// (0x00096b6e) pec_content_pane_t1_ParamLimits

0xb57e,	// (0x00096b6e) pec_content_pane_t1

0xb590,	// (0x00096b80) pec_content_pane_t2_ParamLimits

0xb590,	// (0x00096b80) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0009aacd) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0009aacd) pec_content_pane_t

0x39d2,	// (0x0008efc2) list_single_graphic_pane_cp01_ParamLimits

0x39d2,	// (0x0008efc2) list_single_graphic_pane_cp01

0xa616,	// (0x00095c06) bg_popup_sub_pane_cp04

0xb5a2,	// (0x00096b92) popup_mup_playback_window_g1

0xb5ae,	// (0x00096b9e) popup_mup_playback_window_t1

0xb5c3,	// (0x00096bb3) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0009aad2) popup_mup_playback_window_t

0xb5fa,	// (0x00096bea) main_image_pane_g1_ParamLimits

0xb5fa,	// (0x00096bea) main_image_pane_g1

0xb63d,	// (0x00096c2d) scroll_pane_cp018_ParamLimits

0xb63d,	// (0x00096c2d) scroll_pane_cp018

0xb655,	// (0x00096c45) scroll_pane_cp016_ParamLimits

0xb655,	// (0x00096c45) scroll_pane_cp016

0x3aa1,	// (0x0008f091) smil2_image_pane_ParamLimits

0x3aa1,	// (0x0008f091) smil2_image_pane

0x3ad5,	// (0x0008f0c5) smil2_root_pane_ParamLimits

0x3ad5,	// (0x0008f0c5) smil2_root_pane

0x3b0d,	// (0x0008f0fd) smil2_text_pane_ParamLimits

0x3b0d,	// (0x0008f0fd) smil2_text_pane

0x9b50,	// (0x00095140) bg_list_pane_cp06

0xb691,	// (0x00096c81) grid_radio_pane

0x9b50,	// (0x00095140) bg_popup_window_pane_cp06

0xb699,	// (0x00096c89) main_fmradio_pane_t1

0xafc2,	// (0x000965b2) heading_pane_cp04

0xb6a7,	// (0x00096c97) main_fmradio_pane_t2

0xc68b,	// (0x00097c7b) popup_cale_lunar_info_window_g1

0xb6b5,	// (0x00096ca5) main_fmradio_pane_t3

0xc693,	// (0x00097c83) popup_cale_lunar_info_window_g2

0xb6c3,	// (0x00096cb3) main_fmradio_pane_t4

0x0001,

0xb6d1,	// (0x00096cc1) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0009abad) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0009aae7) main_fmradio_pane_t

0xb6df,	// (0x00096ccf) wait_bar_pane_cp03

0xb6e7,	// (0x00096cd7) cell_fmradio_pane_ParamLimits

0xb6e7,	// (0x00096cd7) cell_fmradio_pane

0xb540,	// (0x00096b30) cell_fmradio_pane_g1_ParamLimits

0xb540,	// (0x00096b30) cell_fmradio_pane_g1

0x9b50,	// (0x00095140) grid_highlight_pane_cp011

0xb6fa,	// (0x00096cea) poc_content_pane_ParamLimits

0xb6fa,	// (0x00096cea) poc_content_pane

0xb70c,	// (0x00096cfc) scroll_pane_cp019

0x3b8d,	// (0x0008f17d) popup_call_poc_act_window_ParamLimits

0x3b8d,	// (0x0008f17d) popup_call_poc_act_window

0x3bb1,	// (0x0008f1a1) popup_call_poc_inact_window_ParamLimits

0x3bb1,	// (0x0008f1a1) popup_call_poc_inact_window

0xf594,	// (0x0009ab84) bg_popup_call_poc_act_pane_g

0xc603,	// (0x00097bf3) bg_popup_call_poc_inact_pane_g1

0xc60b,	// (0x00097bfb) bg_popup_call_poc_inact_pane_g2

0xb714,	// (0x00096d04) popup_call_poc_act_window_g2

0xc613,	// (0x00097c03) bg_popup_call_poc_inact_pane_g3

0xc61b,	// (0x00097c0b) bg_popup_call_poc_inact_pane_g4

0xc623,	// (0x00097c13) bg_popup_call_poc_inact_pane_g5

0xb71c,	// (0x00096d0c) popup_call_poc_act_window_t1_ParamLimits

0xb71c,	// (0x00096d0c) popup_call_poc_act_window_t1

0xb744,	// (0x00096d34) popup_call_poc_act_window_t2_ParamLimits

0xb744,	// (0x00096d34) popup_call_poc_act_window_t2

0xb76c,	// (0x00096d5c) popup_call_poc_act_window_t3_ParamLimits

0xb76c,	// (0x00096d5c) popup_call_poc_act_window_t3

0xb794,	// (0x00096d84) popup_call_poc_act_window_t4_ParamLimits

0xb794,	// (0x00096d84) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0009aaf2) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0009aaf2) popup_call_poc_act_window_t

0xc62b,	// (0x00097c1b) bg_popup_call_poc_inact_pane_g6

0xc633,	// (0x00097c23) bg_popup_call_poc_inact_pane_g7

0xc63b,	// (0x00097c2b) bg_popup_call_poc_inact_pane_g8

0xb7a6,	// (0x00096d96) popup_call_poc_inact_window_g2

0xc643,	// (0x00097c33) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0009ab71) bg_popup_call_poc_inact_pane_g

0xb7ae,	// (0x00096d9e) popup_call_poc_inact_window_t1_ParamLimits

0xb7ae,	// (0x00096d9e) popup_call_poc_inact_window_t1

0xb7c3,	// (0x00096db3) popup_call_poc_inact_window_t2_ParamLimits

0xb7c3,	// (0x00096db3) popup_call_poc_inact_window_t2

0xb7d8,	// (0x00096dc8) popup_call_poc_inact_window_t3_ParamLimits

0xb7d8,	// (0x00096dc8) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0009aafb) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0009aafb) popup_call_poc_inact_window_t

0xc7c8,	// (0x00097db8) context_pane_ParamLimits

0x43d2,	// (0x0008f9c2) signal_pane_ParamLimits

0xa8c8,	// (0x00095eb8) main_call2_pane

0x9e28,	// (0x00095418) popup_phob_thumbnail2_window_ParamLimits

0x9e28,	// (0x00095418) popup_phob_thumbnail2_window

0x9db9,	// (0x000953a9) aid_hotspot_pointer_arrow_pane

0x9dc1,	// (0x000953b1) aid_hotspot_pointer_hand_pane

0x3efc,	// (0x0008f4ec) phob_pre_status_pane_g5

0x1cbe,	// (0x0008d2ae) cams_zoom_pane_ParamLimits

0x1ccd,	// (0x0008d2bd) image_vga_pane_ParamLimits

0x1ce7,	// (0x0008d2d7) main_camera_pane_g1_ParamLimits

0x1cf9,	// (0x0008d2e9) main_camera_pane_g2_ParamLimits

0x1d09,	// (0x0008d2f9) main_camera_pane_g3_ParamLimits

0x1d1b,	// (0x0008d30b) main_camera_pane_g4_ParamLimits

0x1d2d,	// (0x0008d31d) main_camera_pane_g5_ParamLimits

0x1d3f,	// (0x0008d32f) main_camera_pane_g6_ParamLimits

0x1d51,	// (0x0008d341) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0009a7fa) main_camera_pane_g_ParamLimits

0x1d63,	// (0x0008d353) main_camera_pane_t1_ParamLimits

0x1d79,	// (0x0008d369) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0009a80b) main_camera_pane_t_ParamLimits

0xa616,	// (0x00095c06) bg_popup_preview_window_pane_cp01_ParamLimits

0xa616,	// (0x00095c06) bg_popup_preview_window_pane_cp01

0xb7ed,	// (0x00096ddd) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7ed,	// (0x00096ddd) popup_phob_thumbnail2_window_g1

0x9b50,	// (0x00095140) call2_cli_visual_pane

0x3be5,	// (0x0008f1d5) popup_call2_audio_conf_window_ParamLimits

0x3be5,	// (0x0008f1d5) popup_call2_audio_conf_window

0x3c05,	// (0x0008f1f5) popup_call2_audio_first_window_ParamLimits

0x3c05,	// (0x0008f1f5) popup_call2_audio_first_window

0x3c9b,	// (0x0008f28b) popup_call2_audio_in_window_ParamLimits

0x3c9b,	// (0x0008f28b) popup_call2_audio_in_window

0x3ce3,	// (0x0008f2d3) popup_call2_audio_out_window_ParamLimits

0x3ce3,	// (0x0008f2d3) popup_call2_audio_out_window

0x3d4d,	// (0x0008f33d) popup_call2_audio_second_window_ParamLimits

0x3d4d,	// (0x0008f33d) popup_call2_audio_second_window

0x3db3,	// (0x0008f3a3) popup_call2_audio_wait_window_ParamLimits

0x3db3,	// (0x0008f3a3) popup_call2_audio_wait_window

0x9b50,	// (0x00095140) bg_popup_call2_act_pane_cp03

0xa5f8,	// (0x00095be8) list_conf_pane_cp

0xb7f9,	// (0x00096de9) popup_call2_audio_conf_window_t1

0xb807,	// (0x00096df7) list_single_graphic_popup_conf2_pane_ParamLimits

0xb807,	// (0x00096df7) list_single_graphic_popup_conf2_pane

0xb056,	// (0x00096646) list_highlight_pane_cp04

0xb81a,	// (0x00096e0a) list_single_graphic_popup_conf2_pane_g1

0xb067,	// (0x00096657) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0009ab02) list_single_graphic_popup_conf2_pane_g

0xb824,	// (0x00096e14) list_single_graphic_popup_conf2_pane_t1

0xb832,	// (0x00096e22) bg_popup_call2_act_pane_cp01_ParamLimits

0xb832,	// (0x00096e22) bg_popup_call2_act_pane_cp01

0xb8bc,	// (0x00096eac) call_type_pane_cp05_ParamLimits

0xb8bc,	// (0x00096eac) call_type_pane_cp05

0xb910,	// (0x00096f00) popup_call2_audio_second_window_g1_ParamLimits

0xb910,	// (0x00096f00) popup_call2_audio_second_window_g1

0xb964,	// (0x00096f54) popup_call2_audio_second_window_g2_ParamLimits

0xb964,	// (0x00096f54) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0009ab07) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0009ab07) popup_call2_audio_second_window_g

0xb9c9,	// (0x00096fb9) popup_call2_audio_second_window_t1_ParamLimits

0xb9c9,	// (0x00096fb9) popup_call2_audio_second_window_t1

0xba84,	// (0x00097074) popup_call2_audio_second_window_t2_ParamLimits

0xba84,	// (0x00097074) popup_call2_audio_second_window_t2

0xbad7,	// (0x000970c7) popup_call2_audio_second_window_t3_ParamLimits

0xbad7,	// (0x000970c7) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0009ab0e) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0009ab0e) popup_call2_audio_second_window_t

0x9b50,	// (0x00095140) bg_popup_call2_in_pane_cp02

0x9b5a,	// (0x0009514a) call_type_pane_cp04

0x9b62,	// (0x00095152) popup_call2_audio_wait_window_g1

0x9b6a,	// (0x0009515a) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009a6e9) popup_call2_audio_wait_window_g

0x9b72,	// (0x00095162) popup_call2_audio_wait_window_t3

0xbbca,	// (0x000971ba) bg_popup_call2_act_pane_ParamLimits

0xbbca,	// (0x000971ba) bg_popup_call2_act_pane

0xbc8a,	// (0x0009727a) call_type_pane_cp03_ParamLimits

0xbc8a,	// (0x0009727a) call_type_pane_cp03

0xbcee,	// (0x000972de) popup_call2_audio_first_window_g1_ParamLimits

0xbcee,	// (0x000972de) popup_call2_audio_first_window_g1

0xbd5e,	// (0x0009734e) popup_call2_audio_first_window_g2_ParamLimits

0xbd5e,	// (0x0009734e) popup_call2_audio_first_window_g2

0xb454,	// (0x00096a44) popup_call2_audio_first_window_g3_ParamLimits

0xb454,	// (0x00096a44) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0009ab17) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0009ab17) popup_call2_audio_first_window_g

0xbe3c,	// (0x0009742c) popup_call2_audio_first_window_t1_ParamLimits

0xbe3c,	// (0x0009742c) popup_call2_audio_first_window_t1

0xbf3f,	// (0x0009752f) popup_call2_audio_first_window_t4_ParamLimits

0xbf3f,	// (0x0009752f) popup_call2_audio_first_window_t4

0xc022,	// (0x00097612) popup_call2_audio_first_window_t5_ParamLimits

0xc022,	// (0x00097612) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0009ab22) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0009ab22) popup_call2_audio_first_window_t

0xa60e,	// (0x00095bfe) bg_popup_call2_act_pane_g1

0xc69b,	// (0x00097c8b) popup_cale_lunar_info_window_t1

0xc6a9,	// (0x00097c99) popup_cale_lunar_info_window_t2

0xc6b7,	// (0x00097ca7) popup_cale_lunar_info_window_t3

0x9b50,	// (0x00095140) bg_popup_call2_bubble_pane

0xc12f,	// (0x0009771f) bg_popup_call2_in_pane_cp01_ParamLimits

0xc12f,	// (0x0009771f) bg_popup_call2_in_pane_cp01

0x982c,	// (0x00094e1c) call_type_pane_cp02

0xc177,	// (0x00097767) popup_call2_audio_out_window_g1_ParamLimits

0xc177,	// (0x00097767) popup_call2_audio_out_window_g1

0xc1a3,	// (0x00097793) popup_call2_audio_out_window_g2_ParamLimits

0xc1a3,	// (0x00097793) popup_call2_audio_out_window_g2

0xc1cb,	// (0x000977bb) popup_call2_audio_out_window_g3_ParamLimits

0xc1cb,	// (0x000977bb) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0009ab2b) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0009ab2b) popup_call2_audio_out_window_g

0xc206,	// (0x000977f6) popup_call2_audio_out_window_t1_ParamLimits

0xc206,	// (0x000977f6) popup_call2_audio_out_window_t1

0xc265,	// (0x00097855) popup_call2_audio_out_window_t2_ParamLimits

0xc265,	// (0x00097855) popup_call2_audio_out_window_t2

0xc2b9,	// (0x000978a9) popup_call2_audio_out_window_t3_ParamLimits

0xc2b9,	// (0x000978a9) popup_call2_audio_out_window_t3

0xc2cf,	// (0x000978bf) popup_call2_audio_out_window_t4_ParamLimits

0xc2cf,	// (0x000978bf) popup_call2_audio_out_window_t4

0xc2e5,	// (0x000978d5) popup_call2_audio_out_window_t5_ParamLimits

0xc2e5,	// (0x000978d5) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0009ab34) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0009ab34) popup_call2_audio_out_window_t

0xc349,	// (0x00097939) bg_popup_call2_in_pane_ParamLimits

0xc349,	// (0x00097939) bg_popup_call2_in_pane

0xc3a5,	// (0x00097995) popup_call2_audio_in_window_g1_ParamLimits

0xc3a5,	// (0x00097995) popup_call2_audio_in_window_g1

0xc3dd,	// (0x000979cd) popup_call2_audio_in_window_g2_ParamLimits

0xc3dd,	// (0x000979cd) popup_call2_audio_in_window_g2

0xc415,	// (0x00097a05) popup_call2_audio_in_window_g3_ParamLimits

0xc415,	// (0x00097a05) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0009ab41) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0009ab41) popup_call2_audio_in_window_g

0xc46d,	// (0x00097a5d) popup_call2_audio_in_window_t1_ParamLimits

0xc46d,	// (0x00097a5d) popup_call2_audio_in_window_t1

0xc4ed,	// (0x00097add) popup_call2_audio_in_window_t2_ParamLimits

0xc4ed,	// (0x00097add) popup_call2_audio_in_window_t2

0xc56d,	// (0x00097b5d) popup_call2_audio_in_window_t3_ParamLimits

0xc56d,	// (0x00097b5d) popup_call2_audio_in_window_t3

0xc587,	// (0x00097b77) popup_call2_audio_in_window_t4_ParamLimits

0xc587,	// (0x00097b77) popup_call2_audio_in_window_t4

0xc599,	// (0x00097b89) popup_call2_audio_in_window_t5_ParamLimits

0xc599,	// (0x00097b89) popup_call2_audio_in_window_t5

0xc5ae,	// (0x00097b9e) popup_call2_audio_in_window_t6_ParamLimits

0xc5ae,	// (0x00097b9e) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0009ab4a) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0009ab4a) popup_call2_audio_in_window_t

0xa60e,	// (0x00095bfe) bg_popup_call2_in_pane_g1

0xc6c5,	// (0x00097cb5) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0009abb2) popup_cale_lunar_info_window_t

0xa616,	// (0x00095c06) bg_popup_call2_rect_pane_ParamLimits

0xa616,	// (0x00095c06) bg_popup_call2_rect_pane

0x9b50,	// (0x00095140) call2_cli_visual_graphic_pane

0x9b50,	// (0x00095140) call2_cli_visual_text_pane

0x9e4f,	// (0x0009543f) smil_status_volume_pane_g3

0x0002,

0xa74f,	// (0x00095d3f) call2_cli_visual_graphic_pane_g1

0xa74f,	// (0x00095d3f) call2_cli_visual_graphic_pane_g2

0xa74f,	// (0x00095d3f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0009ab57) call2_cli_visual_graphic_pane_g

0xc5c3,	// (0x00097bb3) bg_popup_call2_rect_pane_g1

0xa7ed,	// (0x00095ddd) bg_popup_call2_rect_pane_g2

0xc5cb,	// (0x00097bbb) bg_popup_call2_rect_pane_g3

0xc5d3,	// (0x00097bc3) bg_popup_call2_rect_pane_g4

0xc5db,	// (0x00097bcb) bg_popup_call2_rect_pane_g5

0xc5e3,	// (0x00097bd3) bg_popup_call2_rect_pane_g6

0xc5eb,	// (0x00097bdb) bg_popup_call2_rect_pane_g7

0xc5f3,	// (0x00097be3) bg_popup_call2_rect_pane_g8

0xc5fb,	// (0x00097beb) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0009ab5e) bg_popup_call2_rect_pane_g

0xc603,	// (0x00097bf3) bg_popup_call2_bubble_pane_g1

0xc60b,	// (0x00097bfb) bg_popup_call2_bubble_pane_g2

0xc613,	// (0x00097c03) bg_popup_call2_bubble_pane_g3

0xc61b,	// (0x00097c0b) bg_popup_call2_bubble_pane_g4

0xc623,	// (0x00097c13) bg_popup_call2_bubble_pane_g5

0xc62b,	// (0x00097c1b) bg_popup_call2_bubble_pane_g6

0xc633,	// (0x00097c23) bg_popup_call2_bubble_pane_g7

0xc63b,	// (0x00097c2b) bg_popup_call2_bubble_pane_g8

0xc643,	// (0x00097c33) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0009ab71) bg_popup_call2_bubble_pane_g

0x1600,	// (0x0008cbf0) aid_cale_week_size_cell_pane

0x1d91,	// (0x0008d381) aid_cams_cif_uncrop_pane_ParamLimits

0x1d91,	// (0x0008d381) aid_cams_cif_uncrop_pane

0x1f46,	// (0x0008d536) aid_cams_size_cell_ParamLimits

0x1f46,	// (0x0008d536) aid_cams_size_cell

0x1f5a,	// (0x0008d54a) grid_cams_pane_ParamLimits

0x1f74,	// (0x0008d564) linegrid_cams_pane_ParamLimits

0x205a,	// (0x0008d64a) call_video_pane_t1

0x2078,	// (0x0008d668) call_video_pane_t2

0x0001,

0xf26e,	// (0x0009a85e) call_video_pane_t

0x24a7,	// (0x0008da97) aid_cale_month_size_cell_pane_ParamLimits

0x24a7,	// (0x0008da97) aid_cale_month_size_cell_pane

0xf60b,	// (0x0009abfb) smil_status_volume_pane_g

0x9e5c,	// (0x0009544c) volume_smil_pane_ParamLimits

0x96e7,	// (0x00094cd7) aid_popup2_width_pane

0x1557,	// (0x0008cb47) cell_qdial_pane_g4_ParamLimits

0x1557,	// (0x0008cb47) cell_qdial_pane_g4

0x32a2,	// (0x0008e892) aid_blid_cardinal_pane_ParamLimits

0x32ae,	// (0x0008e89e) aid_blid_destination_pane_ParamLimits

0x32ae,	// (0x0008e89e) aid_blid_destination_pane

0xa616,	// (0x00095c06) bg_popup_call_poc_act_pane_ParamLimits

0xa616,	// (0x00095c06) bg_popup_call_poc_act_pane

0xa616,	// (0x00095c06) bg_popup_call_poc_inact_pane_ParamLimits

0xa616,	// (0x00095c06) bg_popup_call_poc_inact_pane

0xc64b,	// (0x00097c3b) bg_popup_call_poc_act_pane_g1

0xc653,	// (0x00097c43) bg_popup_call_poc_act_pane_g2

0xc65b,	// (0x00097c4b) bg_popup_call_poc_act_pane_g3

0xc61b,	// (0x00097c0b) bg_popup_call_poc_act_pane_g4

0xc623,	// (0x00097c13) bg_popup_call_poc_act_pane_g5

0xc663,	// (0x00097c53) bg_popup_call_poc_act_pane_g6

0xc633,	// (0x00097c23) bg_popup_call_poc_act_pane_g7

0xc66b,	// (0x00097c5b) bg_popup_call_poc_act_pane_g8

0x9b50,	// (0x00095140) main_usb_pane

0x9e03,	// (0x000953f3) popup_cale_lunar_info_window

0x2342,	// (0x0008d932) im_reading_pane_t1_ParamLimits

0xa9c9,	// (0x00095fb9) list_im_pane_ParamLimits

0xa9da,	// (0x00095fca) scroll_pane_cp07_ParamLimits

0x9b50,	// (0x00095140) grid_highlight_pane_cp012

0xa616,	// (0x00095c06) mup_scale_pane_ParamLimits

0xb540,	// (0x00096b30) main_usb_pane_g1_ParamLimits

0xb540,	// (0x00096b30) main_usb_pane_g1

0x3e11,	// (0x0008f401) main_usb_pane_g2_ParamLimits

0x3e11,	// (0x0008f401) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0009ab9b) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0009ab9b) main_usb_pane_g

0x3e27,	// (0x0008f417) main_usb_pane_t1_ParamLimits

0x3e27,	// (0x0008f417) main_usb_pane_t1

0x3e39,	// (0x0008f429) main_usb_pane_t2_ParamLimits

0x3e39,	// (0x0008f429) main_usb_pane_t2

0x3e4b,	// (0x0008f43b) main_usb_pane_t3_ParamLimits

0x3e4b,	// (0x0008f43b) main_usb_pane_t3

0x3e5d,	// (0x0008f44d) main_usb_pane_t4_ParamLimits

0x3e5d,	// (0x0008f44d) main_usb_pane_t4

0x3e6f,	// (0x0008f45f) main_usb_pane_t5_ParamLimits

0x3e6f,	// (0x0008f45f) main_usb_pane_t5

0x3e81,	// (0x0008f471) main_usb_pane_t6_ParamLimits

0x3e81,	// (0x0008f471) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0009aba0) main_usb_pane_t_ParamLimits

0x324f,	// (0x0008e83f) aid_text_placing

0x3258,	// (0x0008e848) main_location2_pane_t1_ParamLimits

0x326a,	// (0x0008e85a) main_location2_pane_t2_ParamLimits

0x327c,	// (0x0008e86c) main_location2_pane_t3_ParamLimits

0x3290,	// (0x0008e880) main_location2_pane_t4_ParamLimits

0x3290,	// (0x0008e880) main_location2_pane_t4

0xf3cf,	// (0x0009a9bf) main_location2_pane_t_ParamLimits

0xa652,	// (0x00095c42) find_pinb_pane_g2_ParamLimits

0xa652,	// (0x00095c42) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0009a70f) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0009a70f) find_pinb_pane_g

0xa65e,	// (0x00095c4e) find_pinb_pane_t1_ParamLimits

0xa670,	// (0x00095c60) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0009a714) find_pinb_pane_t_ParamLimits

0x9b50,	// (0x00095140) main_call3_pane

0x298a,	// (0x0008df7a) cale_month_day_heading_pane_t1_ParamLimits

0x2a10,	// (0x0008e000) cale_month_day_heading_pane_t2_ParamLimits

0x2aa1,	// (0x0008e091) cale_month_day_heading_pane_t3_ParamLimits

0x2b32,	// (0x0008e122) cale_month_day_heading_pane_t4_ParamLimits

0x2bcb,	// (0x0008e1bb) cale_month_day_heading_pane_t5_ParamLimits

0x2c6c,	// (0x0008e25c) cale_month_day_heading_pane_t6_ParamLimits

0x2d0d,	// (0x0008e2fd) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0009a896) cale_month_day_heading_pane_t_ParamLimits

0xac24,	// (0x00096214) smil_status_volume_pane

0x3904,	// (0x0008eef4) postcard_address_pane_ParamLimits

0x3904,	// (0x0008eef4) postcard_address_pane

0x3916,	// (0x0008ef06) postcard_message_pane_ParamLimits

0x3916,	// (0x0008ef06) postcard_message_pane

0x3ded,	// (0x0008f3dd) call2_cli_visual_pane_t1_ParamLimits

0x3ded,	// (0x0008f3dd) call2_cli_visual_pane_t1

0x4601,	// (0x0008fbf1) postcard_message_pane_t1_ParamLimits

0x4601,	// (0x0008fbf1) postcard_message_pane_t1

0x45ea,	// (0x0008fbda) postcard_address_pane_t1_ParamLimits

0x45ea,	// (0x0008fbda) postcard_address_pane_t1

0x45d6,	// (0x0008fbc6) popup_call3_audio_in_window_ParamLimits

0x45d6,	// (0x0008fbc6) popup_call3_audio_in_window

0x4463,	// (0x0008fa53) bg_popup_call3_in_pane_ParamLimits

0x4463,	// (0x0008fa53) bg_popup_call3_in_pane

0x44d7,	// (0x0008fac7) popup_call3_audio_in_window_g1_ParamLimits

0x44d7,	// (0x0008fac7) popup_call3_audio_in_window_g1

0x44f7,	// (0x0008fae7) popup_call3_audio_in_window_g2_ParamLimits

0x44f7,	// (0x0008fae7) popup_call3_audio_in_window_g2

0x4517,	// (0x0008fb07) popup_call3_audio_in_window_g3_ParamLimits

0x4517,	// (0x0008fb07) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0009ac02) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0009ac02) popup_call3_audio_in_window_g

0x4548,	// (0x0008fb38) popup_call3_audio_in_window_t1_ParamLimits

0x4548,	// (0x0008fb38) popup_call3_audio_in_window_t1

0x4586,	// (0x0008fb76) popup_call3_audio_in_window_t2_ParamLimits

0x4586,	// (0x0008fb76) popup_call3_audio_in_window_t2

0x45c4,	// (0x0008fbb4) popup_call3_audio_in_window_t3_ParamLimits

0x45c4,	// (0x0008fbb4) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0009ac0b) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0009ac0b) popup_call3_audio_in_window_t

0xa8c8,	// (0x00095eb8) bg_popup_call3_rect_pane

0xc5c3,	// (0x00097bb3) bg_popup_call3_rect_pane_g1

0xa7ed,	// (0x00095ddd) bg_popup_call3_rect_pane_g2

0xc5cb,	// (0x00097bbb) bg_popup_call3_rect_pane_g3

0xc5d3,	// (0x00097bc3) bg_popup_call3_rect_pane_g4

0xc5db,	// (0x00097bcb) bg_popup_call3_rect_pane_g5

0xc5e3,	// (0x00097bd3) bg_popup_call3_rect_pane_g6

0xc5eb,	// (0x00097bdb) bg_popup_call3_rect_pane_g7

0x3596,	// (0x0008eb86) mup_visualizer_osc_pane

0xb462,	// (0x00096a52) mup_visualizer_spec_pane

0x4493,	// (0x0008fa83) call3_video_qcif_pane_ParamLimits

0x4493,	// (0x0008fa83) call3_video_qcif_pane

0x44a4,	// (0x0008fa94) call3_video_qcif_uncrop_pane_ParamLimits

0x44a4,	// (0x0008fa94) call3_video_qcif_uncrop_pane

0x44b2,	// (0x0008faa2) call3_video_subqcif_pane_ParamLimits

0x44b2,	// (0x0008faa2) call3_video_subqcif_pane

0x44c6,	// (0x0008fab6) call3_video_subqcif_uncrop_pane_ParamLimits

0x44c6,	// (0x0008fab6) call3_video_subqcif_uncrop_pane

0x4537,	// (0x0008fb27) popup_call3_audio_in_window_g4_ParamLimits

0x4537,	// (0x0008fb27) popup_call3_audio_in_window_g4

0x4452,	// (0x0008fa42) mup_spec_half_pane

0x445b,	// (0x0008fa4b) mup_spec_half_pane_cp

0xc828,	// (0x00097e18) mup_osc_middle_pane

0xc831,	// (0x00097e21) mup_visualizer_osc_pane_g1

0x4432,	// (0x0008fa22) mup_spec_bar_pane_ParamLimits

0x4432,	// (0x0008fa22) mup_spec_bar_pane

0xc815,	// (0x00097e05) mup_spec_bar_pane_g1

0xc81f,	// (0x00097e0f) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0009abf6) mup_spec_bar_pane_g

0x1600,	// (0x0008cbf0) aid_cale_week_size_cell_pane_ParamLimits

0x161a,	// (0x0008cc0a) bg_cale_heading_pane_ParamLimits

0xa82a,	// (0x00095e1a) bg_cale_pane_cp01_ParamLimits

0x1638,	// (0x0008cc28) cale_week_corner_pane_ParamLimits

0x1657,	// (0x0008cc47) cale_week_day_heading_pane_ParamLimits

0x167a,	// (0x0008cc6a) cale_week_scroll_pane_g1_ParamLimits

0x1693,	// (0x0008cc83) cale_week_scroll_pane_g2_ParamLimits

0x16ab,	// (0x0008cc9b) cale_week_scroll_pane_g3_ParamLimits

0x16c3,	// (0x0008ccb3) cale_week_scroll_pane_g4_ParamLimits

0x16db,	// (0x0008cccb) cale_week_scroll_pane_g5_ParamLimits

0x16f7,	// (0x0008cce7) cale_week_scroll_pane_g6_ParamLimits

0x1717,	// (0x0008cd07) cale_week_scroll_pane_g7_ParamLimits

0x1737,	// (0x0008cd27) cale_week_scroll_pane_g8_ParamLimits

0x175b,	// (0x0008cd4b) cale_week_scroll_pane_g9_ParamLimits

0x1773,	// (0x0008cd63) cale_week_scroll_pane_g10_ParamLimits

0x178b,	// (0x0008cd7b) cale_week_scroll_pane_g11_ParamLimits

0x17a3,	// (0x0008cd93) cale_week_scroll_pane_g12_ParamLimits

0x17bb,	// (0x0008cdab) cale_week_scroll_pane_g13_ParamLimits

0x17bb,	// (0x0008cdab) cale_week_scroll_pane_g14_ParamLimits

0x17bb,	// (0x0008cdab) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0009a7a0) cale_week_scroll_pane_g_ParamLimits

0x17f7,	// (0x0008cde7) cale_week_time_pane_ParamLimits

0x181b,	// (0x0008ce0b) grid_cale_week_pane_ParamLimits

0xa847,	// (0x00095e37) listscroll_cale_week_pane_t1

0xa859,	// (0x00095e49) scroll_pane_cp08_ParamLimits

0x2508,	// (0x0008daf8) cale_month_corner_pane_ParamLimits

0xabfa,	// (0x000961ea) cale_month_pane_t1

0x2928,	// (0x0008df18) cale_month_week_pane_ParamLimits

0x30c0,	// (0x0008e6b0) popup_call_status_window_g1_ParamLimits

0x30d4,	// (0x0008e6c4) popup_call_status_window_g2_ParamLimits

0x30e8,	// (0x0008e6d8) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0009a946) popup_call_status_window_g_ParamLimits

0xafb2,	// (0x000965a2) aid_call2_pane

0x02b8,	// (0x0008b8a8) msg_header_pane_g1

0x3904,	// (0x0008eef4) postcard_address2_pane_ParamLimits

0x3904,	// (0x0008eef4) postcard_address2_pane

0x3916,	// (0x0008ef06) postcard_message2_pane_ParamLimits

0x3916,	// (0x0008ef06) postcard_message2_pane

0x43e0,	// (0x0008f9d0) message2_row_pane_ParamLimits

0x43e0,	// (0x0008f9d0) message2_row_pane

0x43ff,	// (0x0008f9ef) address2_row_pane_ParamLimits

0x43ff,	// (0x0008f9ef) address2_row_pane

0xc7e3,	// (0x00097dd3) postcard_message2_row_pane_g1

0xc7eb,	// (0x00097ddb) postcard_message2_row_pane_t1

0xc7e3,	// (0x00097dd3) address2_row_pane_g1

0xc7eb,	// (0x00097ddb) address2_row_pane_t1

0x1c3b,	// (0x0008d22b) aid_size_cell_vorec

0x9b50,	// (0x00095140) main_rss_pane

0x4412,	// (0x0008fa02) rss_list_single_pane_ParamLimits

0x4412,	// (0x0008fa02) rss_list_single_pane

0xc7f9,	// (0x00097de9) rss_list_single_pane_t1

0xc807,	// (0x00097df7) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0009abf1) rss_list_single_pane_t

0x9b50,	// (0x00095140) main_camera2_pane

0x9b50,	// (0x00095140) main_video2_pane

0x467a,	// (0x0008fc6a) cams_zoom_pane_cp2_ParamLimits

0x467a,	// (0x0008fc6a) cams_zoom_pane_cp2

0x469a,	// (0x0008fc8a) image2_vga_pane_ParamLimits

0x469a,	// (0x0008fc8a) image2_vga_pane

0x46eb,	// (0x0008fcdb) main_camera2_pane_g1_ParamLimits

0x46eb,	// (0x0008fcdb) main_camera2_pane_g1

0x470b,	// (0x0008fcfb) main_camera2_pane_g2_ParamLimits

0x470b,	// (0x0008fcfb) main_camera2_pane_g2

0x472b,	// (0x0008fd1b) main_camera2_pane_g3_ParamLimits

0x472b,	// (0x0008fd1b) main_camera2_pane_g3

0x474b,	// (0x0008fd3b) main_camera2_pane_g4_ParamLimits

0x474b,	// (0x0008fd3b) main_camera2_pane_g4

0x476b,	// (0x0008fd5b) main_camera2_pane_g5_ParamLimits

0x476b,	// (0x0008fd5b) main_camera2_pane_g5

0x478b,	// (0x0008fd7b) main_camera2_pane_g6_ParamLimits

0x478b,	// (0x0008fd7b) main_camera2_pane_g6

0x47ab,	// (0x0008fd9b) main_camera2_pane_g7_ParamLimits

0x47ab,	// (0x0008fd9b) main_camera2_pane_g7

0x47cb,	// (0x0008fdbb) main_camera2_pane_g8_ParamLimits

0x47cb,	// (0x0008fdbb) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0009ac12) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0009ac12) main_camera2_pane_g

0x480b,	// (0x0008fdfb) main_camera2_pane_t1_ParamLimits

0x480b,	// (0x0008fdfb) main_camera2_pane_t1

0x4840,	// (0x0008fe30) main_camera2_pane_t2_ParamLimits

0x4840,	// (0x0008fe30) main_camera2_pane_t2

0x4866,	// (0x0008fe56) main_camera2_pane_t3_ParamLimits

0x4866,	// (0x0008fe56) main_camera2_pane_t3

0x48c4,	// (0x0008feb4) main_camera2_pane_t4_ParamLimits

0x48c4,	// (0x0008feb4) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0009ac25) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0009ac25) main_camera2_pane_t

0x4956,	// (0x0008ff46) cams_zoom_pane_cp4_ParamLimits

0x4956,	// (0x0008ff46) cams_zoom_pane_cp4

0x496c,	// (0x0008ff5c) image2_cif_pane_ParamLimits

0x496c,	// (0x0008ff5c) image2_cif_pane

0x4997,	// (0x0008ff87) image2_subqcif_pane_ParamLimits

0x4997,	// (0x0008ff87) image2_subqcif_pane

0x49b1,	// (0x0008ffa1) main_video2_pane_g1_ParamLimits

0x49b1,	// (0x0008ffa1) main_video2_pane_g1

0x49cb,	// (0x0008ffbb) main_video2_pane_g2_ParamLimits

0x49cb,	// (0x0008ffbb) main_video2_pane_g2

0x49e1,	// (0x0008ffd1) main_video2_pane_g3_ParamLimits

0x49e1,	// (0x0008ffd1) main_video2_pane_g3

0x49f7,	// (0x0008ffe7) main_video2_pane_g4_ParamLimits

0x49f7,	// (0x0008ffe7) main_video2_pane_g4

0x4a0d,	// (0x0008fffd) main_video2_pane_g5_ParamLimits

0x4a0d,	// (0x0008fffd) main_video2_pane_g5

0x4a23,	// (0x00090013) main_video2_pane_g6_ParamLimits

0x4a23,	// (0x00090013) main_video2_pane_g6

0x0005,

0xf644,	// (0x0009ac34) main_video2_pane_g_ParamLimits

0xf644,	// (0x0009ac34) main_video2_pane_g

0x4a3d,	// (0x0009002d) main_video2_pane_t1_ParamLimits

0x4a3d,	// (0x0009002d) main_video2_pane_t1

0x4a61,	// (0x00090051) main_video2_pane_t2_ParamLimits

0x4a61,	// (0x00090051) main_video2_pane_t2

0x4aaf,	// (0x0009009f) main_video2_pane_t3_ParamLimits

0x4aaf,	// (0x0009009f) main_video2_pane_t3

0x0002,

0xf651,	// (0x0009ac41) main_video2_pane_t_ParamLimits

0xf651,	// (0x0009ac41) main_video2_pane_t

0x3f3c,	// (0x0008f52c) call_muted_g2

0x0001,

0xf5f3,	// (0x0009abe3) call_muted_g

0x9b50,	// (0x00095140) main_mup2_pane

0x4af7,	// (0x000900e7) main_mup2_pane_g1_ParamLimits

0x4af7,	// (0x000900e7) main_mup2_pane_g1

0x4b03,	// (0x000900f3) main_mup2_pane_g2_ParamLimits

0x4b03,	// (0x000900f3) main_mup2_pane_g2

0x9eca,	// (0x000954ba) main_mup_pane_g13_cp1

0x9ed2,	// (0x000954c2) mup_volume_pane_cp1

0x4b1f,	// (0x0009010f) main_mup2_pane_g4_ParamLimits

0x4b1f,	// (0x0009010f) main_mup2_pane_g4

0x4b31,	// (0x00090121) main_mup2_pane_g5_ParamLimits

0x4b31,	// (0x00090121) main_mup2_pane_g5

0x4b43,	// (0x00090133) main_mup2_pane_g6_ParamLimits

0x4b43,	// (0x00090133) main_mup2_pane_g6

0x4b55,	// (0x00090145) main_mup2_pane_g7_ParamLimits

0x4b55,	// (0x00090145) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0009ac48) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0009ac48) main_mup2_pane_g

0x4b6d,	// (0x0009015d) main_mup2_pane_t1_ParamLimits

0x4b6d,	// (0x0009015d) main_mup2_pane_t1

0x4b83,	// (0x00090173) main_mup2_pane_t2_ParamLimits

0x4b83,	// (0x00090173) main_mup2_pane_t2

0x4b99,	// (0x00090189) main_mup2_pane_t3_ParamLimits

0x4b99,	// (0x00090189) main_mup2_pane_t3

0x4baf,	// (0x0009019f) main_mup2_pane_t4_ParamLimits

0x4baf,	// (0x0009019f) main_mup2_pane_t4

0x4bc7,	// (0x000901b7) main_mup2_pane_t5_ParamLimits

0x4bc7,	// (0x000901b7) main_mup2_pane_t5

0x4bdf,	// (0x000901cf) main_mup2_pane_t6_ParamLimits

0x4bdf,	// (0x000901cf) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0009ac57) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0009ac57) main_mup2_pane_t

0x4c0f,	// (0x000901ff) mup2_visualizer_pane_ParamLimits

0x4c0f,	// (0x000901ff) mup2_visualizer_pane

0x4c3d,	// (0x0009022d) mup_progress_pane_cp_ParamLimits

0x4c3d,	// (0x0009022d) mup_progress_pane_cp

0x9eb5,	// (0x000954a5) mup_volume_pane_cp_ParamLimits

0x9eb5,	// (0x000954a5) mup_volume_pane_cp

0x4c51,	// (0x00090241) mup2_visualizer_pane_g1_ParamLimits

0x4c51,	// (0x00090241) mup2_visualizer_pane_g1

0xc868,	// (0x00097e58) mup2_visualizer_pane_g2_ParamLimits

0xc868,	// (0x00097e58) mup2_visualizer_pane_g2

0x4c68,	// (0x00090258) mup2_visualizer_pane_g3_ParamLimits

0x4c68,	// (0x00090258) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0009ac64) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0009ac64) mup2_visualizer_pane_g

0xb689,	// (0x00096c79) aid_size_cell_fmradio

0x40ee,	// (0x0008f6de) aid_height_parent_landcape

0xaa58,	// (0x00096048) wml_content_pane_cp

0xaa60,	// (0x00096050) wml_tabs_pane

0xaa69,	// (0x00096059) popup_wml_miniature_window

0xaa71,	// (0x00096061) scroll_pane_cp021

0xaa85,	// (0x00096075) wml_content_pane_comp8

0x9b50,	// (0x00095140) bg_popup_sub_pane_cp05

0xc886,	// (0x00097e76) popup_wml_miniature_window_g1

0xc88e,	// (0x00097e7e) wml_miniature_view_pane

0x4c74,	// (0x00090264) aid_size_wml_view

0x4c7c,	// (0x0009026c) wml_miniature_view_pane_g1

0x4c85,	// (0x00090275) wml_miniature_view_pane_g2

0x4c8e,	// (0x0009027e) wml_miniature_view_pane_g3

0x4c96,	// (0x00090286) wml_miniature_view_pane_g4

0x4c9e,	// (0x0009028e) wml_miniature_view_pane_g5

0x4ca6,	// (0x00090296) wml_miniature_view_pane_g6

0x4cae,	// (0x0009029e) wml_miniature_view_pane_g7

0x4cb6,	// (0x000902a6) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0009ac6b) wml_miniature_view_pane_g

0xc896,	// (0x00097e86) background_graphic_ParamLimits

0xc896,	// (0x00097e86) background_graphic

0xc8a2,	// (0x00097e92) wml_tabs_2_pane

0xc8ab,	// (0x00097e9b) wml_tabs_3_pane_ParamLimits

0xc8ab,	// (0x00097e9b) wml_tabs_3_pane

0xc8bd,	// (0x00097ead) wml_tabs_4_pane_ParamLimits

0xc8bd,	// (0x00097ead) wml_tabs_4_pane

0xc8d3,	// (0x00097ec3) wml_tabs_5_pane_ParamLimits

0xc8d3,	// (0x00097ec3) wml_tabs_5_pane

0xc8ed,	// (0x00097edd) wml_tabs_pane_g2_ParamLimits

0xc8ed,	// (0x00097edd) wml_tabs_pane_g2

0xc901,	// (0x00097ef1) wml_tabs_pane_g3_ParamLimits

0xc901,	// (0x00097ef1) wml_tabs_pane_g3

0x4cbe,	// (0x000902ae) wml_tabs_2_active_pane_ParamLimits

0x4cbe,	// (0x000902ae) wml_tabs_2_active_pane

0x4cd2,	// (0x000902c2) wml_tabs_2_passive_pane_ParamLimits

0x4cd2,	// (0x000902c2) wml_tabs_2_passive_pane

0x4ce6,	// (0x000902d6) wml_tabs_3_active_pane_cp_ParamLimits

0x4ce6,	// (0x000902d6) wml_tabs_3_active_pane_cp

0x4cfb,	// (0x000902eb) wml_tabs_3_passive_pane_ParamLimits

0x4cfb,	// (0x000902eb) wml_tabs_3_passive_pane

0x4d0e,	// (0x000902fe) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d0e,	// (0x000902fe) wml_tabs_3_passive_pane_cp

0x4d25,	// (0x00090315) tabs_4_active_pane

0x4d2d,	// (0x0009031d) tabs_4_passive_pane

0x4d37,	// (0x00090327) tabs_4_passive_pane_cp

0x4d3f,	// (0x0009032f) tabs_4_passive_pane_cp2

0x3e09,	// (0x0008f3f9) aid_height_text

0x3568,	// (0x0008eb58) mup_volume_cont_pane_ParamLimits

0x3568,	// (0x0008eb58) mup_volume_cont_pane

0x1203,	// (0x0008c7f3) aid_size_cell_pinb

0x120d,	// (0x0008c7fd) aid_size_list_pinb

0x4c29,	// (0x00090219) mup2_volume_cont_pane_ParamLimits

0x4c29,	// (0x00090219) mup2_volume_cont_pane

0x9ea1,	// (0x00095491) mup2_volume_cont_pane_g1_ParamLimits

0x9ea1,	// (0x00095491) mup2_volume_cont_pane_g1

0x0eb5,	// (0x0008c4a5) aid_size_cell_touch_ParamLimits

0x0eb5,	// (0x0008c4a5) aid_size_cell_touch

0x10f2,	// (0x0008c6e2) touch_pane_ParamLimits

0x10f2,	// (0x0008c6e2) touch_pane

0x96d5,	// (0x00094cc5) main_rss2_pane

0xc91e,	// (0x00097f0e) listscroll_rss2_pane

0xc927,	// (0x00097f17) rss2_navigation_pane

0xc92f,	// (0x00097f1f) list_rss2_pane

0xb101,	// (0x000966f1) scroll_pane_cp22

0xc937,	// (0x00097f27) rss2_navigation_pane_g1

0xc940,	// (0x00097f30) rss2_navigation_pane_g2

0xc948,	// (0x00097f38) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0009ac7c) rss2_navigation_pane_g

0xc950,	// (0x00097f40) rss2_navigation_pane_t1

0x4d49,	// (0x00090339) rss2_list_single_pane_ParamLimits

0x4d49,	// (0x00090339) rss2_list_single_pane

0xc95e,	// (0x00097f4e) rss2_list_single_pane_t2

0xc96c,	// (0x00097f5c) rss2_list_single_pane_t3_ParamLimits

0xc96c,	// (0x00097f5c) rss2_list_single_pane_t3

0xc989,	// (0x00097f79) rss2_list_single_pane_t4

0x2fa5,	// (0x0008e595) smil_status_pane_g1

0xa4c1,	// (0x00095ab1) main_image2_pane_ParamLimits

0xa4c1,	// (0x00095ab1) main_image2_pane

0x47eb,	// (0x0008fddb) main_camera2_pane_g9_ParamLimits

0x47eb,	// (0x0008fddb) main_camera2_pane_g9

0x4919,	// (0x0008ff09) main_camera2_pane_t5_ParamLimits

0x4919,	// (0x0008ff09) main_camera2_pane_t5

0x9e71,	// (0x00095461) main_camera2_pane_t6_ParamLimits

0x9e71,	// (0x00095461) main_camera2_pane_t6

0x4d60,	// (0x00090350) main_image2_pane_g1_ParamLimits

0x4d60,	// (0x00090350) main_image2_pane_g1

0x3b43,	// (0x0008f133) smil2_video_pane_ParamLimits

0x3b43,	// (0x0008f133) smil2_video_pane

0x0eed,	// (0x0008c4dd) aid_zoom_text_primary_cp

0x9733,	// (0x00094d23) popup_preview_fixed_window

0xa9c1,	// (0x00095fb1) im_reading_pane_g1

0x4662,	// (0x0008fc52) cams2_bc_adjust_pane_cp_ParamLimits

0x4662,	// (0x0008fc52) cams2_bc_adjust_pane_cp

0x4948,	// (0x0008ff38) cams2_bc_adjust_pane_ParamLimits

0x4948,	// (0x0008ff38) cams2_bc_adjust_pane

0x9eda,	// (0x000954ca) cams2_bc_adjust_pane_g1

0x9ee2,	// (0x000954d2) cams2_slider_pane

0x9eeb,	// (0x000954db) cams2_slider_pane_g1

0x9ef4,	// (0x000954e4) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0009ac83) cams2_slider_pane_g

0x12e5,	// (0x0008c8d5) calc_display_pane_ParamLimits

0x130d,	// (0x0008c8fd) calc_paper_pane_ParamLimits

0x1330,	// (0x0008c920) grid_calc_pane_ParamLimits

0x9d8a,	// (0x0009537a) popup_clock_digital_window_t1_ParamLimits

0xb626,	// (0x00096c16) main_image_pane_t1

0x12c7,	// (0x0008c8b7) aid_size_cell_calc_ParamLimits

0x12c7,	// (0x0008c8b7) aid_size_cell_calc

0x4134,	// (0x0008f724) popup_blid_sat_info2_window_ParamLimits

0x4134,	// (0x0008f724) popup_blid_sat_info2_window

0xc99f,	// (0x00097f8f) aid_size_cell_blid

0xc9a7,	// (0x00097f97) bg_popup_window_pane_cp07

0xc9ca,	// (0x00097fba) grid_popup_blid_pane

0xc9d4,	// (0x00097fc4) heading_pane_cp05_ParamLimits

0xc9d4,	// (0x00097fc4) heading_pane_cp05

0xca9e,	// (0x0009808e) cell_popup_blid_pane_ParamLimits

0xca9e,	// (0x0009808e) cell_popup_blid_pane

0xcac4,	// (0x000980b4) cell_popup_blid_pane_g1

0xcacc,	// (0x000980bc) cell_popup_blid_pane_t1

0x4bf9,	// (0x000901e9) mup2_indicator_pane_ParamLimits

0x4bf9,	// (0x000901e9) mup2_indicator_pane

0xa8c8,	// (0x00095eb8) mup2_visualizer_osc_pane

0xc874,	// (0x00097e64) mup2_visualizer_spec_pane_ParamLimits

0xc874,	// (0x00097e64) mup2_visualizer_spec_pane

0x4d76,	// (0x00090366) mup2_spec_half_pane

0x4d7f,	// (0x0009036f) mup2_spec_half_pane_cp

0x4d87,	// (0x00090377) mup2_spec_bar_pane_ParamLimits

0x4d87,	// (0x00090377) mup2_spec_bar_pane

0xc815,	// (0x00097e05) mup2_spec_bar_pane_g1

0xc81f,	// (0x00097e0f) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0009abf6) mup2_spec_bar_pane_g

0x4da7,	// (0x00090397) mup2_osc_middle_pane

0xc831,	// (0x00097e21) mup2_visualizer_osc_pane_g1

0x975d,	// (0x00094d4d) popup_number_entry_window_t1_ParamLimits

0x9770,	// (0x00094d60) popup_number_entry_window_t2_ParamLimits

0x9782,	// (0x00094d72) popup_number_entry_window_t3_ParamLimits

0x1144,	// (0x0008c734) popup_number_entry_window_t5_ParamLimits

0x1144,	// (0x0008c734) popup_number_entry_window_t5

0xf0ca,	// (0x0009a6ba) popup_number_entry_window_t_ParamLimits

0x9794,	// (0x00094d84) text_title_cp2_ParamLimits

0x9dc9,	// (0x000953b9) aid_hotspot_pointer_text2_pane

0x9def,	// (0x000953df) main_viewer_pane_g9_ParamLimits

0x9def,	// (0x000953df) main_viewer_pane_g9

0xabfa,	// (0x000961ea) cale_month_pane_t1_ParamLimits

0xac37,	// (0x00096227) bg_cale_pane_ParamLimits

0xac4f,	// (0x0009623f) list_cale_pane_ParamLimits

0xac60,	// (0x00096250) listscroll_cale_day_pane_t1

0xac72,	// (0x00096262) scroll_pane_cp09_ParamLimits

0x359e,	// (0x0008eb8e) main_mup_eq_pane_t1_ParamLimits

0x359e,	// (0x0008eb8e) main_mup_eq_pane_t1

0x35b8,	// (0x0008eba8) main_mup_eq_pane_t2_ParamLimits

0x35b8,	// (0x0008eba8) main_mup_eq_pane_t2

0x35d2,	// (0x0008ebc2) main_mup_eq_pane_t3_ParamLimits

0x35d2,	// (0x0008ebc2) main_mup_eq_pane_t3

0x35ee,	// (0x0008ebde) main_mup_eq_pane_t4_ParamLimits

0x35ee,	// (0x0008ebde) main_mup_eq_pane_t4

0x360a,	// (0x0008ebfa) main_mup_eq_pane_t5_ParamLimits

0x360a,	// (0x0008ebfa) main_mup_eq_pane_t5

0x3626,	// (0x0008ec16) main_mup_eq_pane_t6_ParamLimits

0x3626,	// (0x0008ec16) main_mup_eq_pane_t6

0x363a,	// (0x0008ec2a) main_mup_eq_pane_t7_ParamLimits

0x363a,	// (0x0008ec2a) main_mup_eq_pane_t7

0x364e,	// (0x0008ec3e) main_mup_eq_pane_t8_ParamLimits

0x364e,	// (0x0008ec3e) main_mup_eq_pane_t8

0x3662,	// (0x0008ec52) main_mup_eq_pane_t9_ParamLimits

0x3662,	// (0x0008ec52) main_mup_eq_pane_t9

0x367c,	// (0x0008ec6c) main_mup_eq_pane_t10_ParamLimits

0x367c,	// (0x0008ec6c) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0009aa45) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0009aa45) main_mup_eq_pane_t

0x372b,	// (0x0008ed1b) mup_equalizer_pane_cp5_ParamLimits

0x373f,	// (0x0008ed2f) mup_equalizer_pane_cp6_ParamLimits

0x3753,	// (0x0008ed43) mup_equalizer_pane_cp7_ParamLimits

0x96d5,	// (0x00094cc5) main_gallery_pane

0xc83a,	// (0x00097e2a) smil2_volume_pane

0xc842,	// (0x00097e32) smil_status_volume_pane_g1_ParamLimits

0xc855,	// (0x00097e45) smil_status_volume_pane_g2_ParamLimits

0x9e4f,	// (0x0009543f) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0009abfb) smil_status_volume_pane_g_ParamLimits

0xc9a7,	// (0x00097f97) bg_popup_window_pane_cp07_ParamLimits

0xc9b5,	// (0x00097fa5) blid_firmament_pane

0x4db0,	// (0x000903a0) aid_size_cell_gallery_ParamLimits

0x4db0,	// (0x000903a0) aid_size_cell_gallery

0x4dc6,	// (0x000903b6) grid_gallery_pane_ParamLimits

0x4dc6,	// (0x000903b6) grid_gallery_pane

0x4ddf,	// (0x000903cf) cell_gallery_pane_ParamLimits

0x4ddf,	// (0x000903cf) cell_gallery_pane

0xcada,	// (0x000980ca) bg_cell_gallery_focus_pane_ParamLimits

0xcada,	// (0x000980ca) bg_cell_gallery_focus_pane

0xcaec,	// (0x000980dc) cell_gallery_pane_g1_ParamLimits

0xcaec,	// (0x000980dc) cell_gallery_pane_g1

0x4e28,	// (0x00090418) cell_gallery_pane_g2_ParamLimits

0x4e28,	// (0x00090418) cell_gallery_pane_g2

0x4e35,	// (0x00090425) cell_gallery_pane_g3_ParamLimits

0x4e35,	// (0x00090425) cell_gallery_pane_g3

0xcaf8,	// (0x000980e8) cell_gallery_pane_g4_ParamLimits

0xcaf8,	// (0x000980e8) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0009aca9) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0009aca9) cell_gallery_pane_g

0xcb04,	// (0x000980f4) bg_cell_gallery_focus_pane_g1

0xcb0c,	// (0x000980fc) bg_cell_gallery_focus_pane_g2

0xcb14,	// (0x00098104) bg_cell_gallery_focus_pane_g3

0xcb1c,	// (0x0009810c) bg_cell_gallery_focus_pane_g4

0xcb24,	// (0x00098114) bg_cell_gallery_focus_pane_g5

0xcb2c,	// (0x0009811c) bg_cell_gallery_focus_pane_g6

0xcb34,	// (0x00098124) bg_cell_gallery_focus_pane_g7

0xcb3c,	// (0x0009812c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0009acb2) bg_cell_gallery_focus_pane_g

0xcb44,	// (0x00098134) aid_firma_cardinal

0xcb58,	// (0x00098148) blid_firmament_pane_t1

0xcb6f,	// (0x0009815f) blid_firmament_pane_t2

0xcb86,	// (0x00098176) blid_firmament_pane_t3

0xcb9d,	// (0x0009818d) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0009acc3) blid_firmament_pane_t

0xcbb4,	// (0x000981a4) blid_sat_info_pane

0xcbc4,	// (0x000981b4) blid_sat_info_pane_g1

0xcbc4,	// (0x000981b4) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0009accc) blid_sat_info_pane_g

0xcbce,	// (0x000981be) blid_sat_info_pane_t1

0xcbdc,	// (0x000981cc) smil2_volume_content_pane

0xcbe5,	// (0x000981d5) smil2_volume_pane_g1

0xa77b,	// (0x00095d6b) smil2_volume_content_pane_g1

0xcbed,	// (0x000981dd) smil2_volume_content_pane_g2

0xcbf6,	// (0x000981e6) smil2_volume_content_pane_g3

0xcbff,	// (0x000981ef) smil2_volume_content_pane_g4

0xcc08,	// (0x000981f8) smil2_volume_content_pane_g5

0xcc11,	// (0x00098201) smil2_volume_content_pane_g6

0xcc1a,	// (0x0009820a) smil2_volume_content_pane_g7

0xcc23,	// (0x00098213) smil2_volume_content_pane_g8

0xcc2c,	// (0x0009821c) smil2_volume_content_pane_g9

0xcc35,	// (0x00098225) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0009acd1) smil2_volume_content_pane_g

0x18cf,	// (0x0008cebf) cale_week_day_heading_pane_t1_ParamLimits

0x1919,	// (0x0008cf09) cale_week_day_heading_pane_t2_ParamLimits

0x1968,	// (0x0008cf58) cale_week_day_heading_pane_t3_ParamLimits

0x19b7,	// (0x0008cfa7) cale_week_day_heading_pane_t4_ParamLimits

0x1a06,	// (0x0008cff6) cale_week_day_heading_pane_t5_ParamLimits

0x1a5d,	// (0x0008d04d) cale_week_day_heading_pane_t6_ParamLimits

0x1ab4,	// (0x0008d0a4) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0009a7c1) cale_week_day_heading_pane_t_ParamLimits

0xa876,	// (0x00095e66) bg_cale_side_pane_ParamLimits

0x1afe,	// (0x0008d0ee) cale_week_time_pane_t1_ParamLimits

0x1b18,	// (0x0008d108) cale_week_time_pane_t2_ParamLimits

0x1b32,	// (0x0008d122) cale_week_time_pane_t3_ParamLimits

0x1b4c,	// (0x0008d13c) cale_week_time_pane_t4_ParamLimits

0x1b66,	// (0x0008d156) cale_week_time_pane_t5_ParamLimits

0x1b80,	// (0x0008d170) cale_week_time_pane_t6_ParamLimits

0x1b9a,	// (0x0008d18a) cale_week_time_pane_t7_ParamLimits

0x1bba,	// (0x0008d1aa) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0009a7d0) cale_week_time_pane_t_ParamLimits

0x1bda,	// (0x0008d1ca) cell_cale_week_pane_g2_ParamLimits

0xa876,	// (0x00095e66) bg_cale_side_pane_cp01_ParamLimits

0x2db6,	// (0x0008e3a6) cale_month_week_pane_t1_ParamLimits

0x2dcf,	// (0x0008e3bf) cale_month_week_pane_t2_ParamLimits

0x2de8,	// (0x0008e3d8) cale_month_week_pane_t3_ParamLimits

0x2e01,	// (0x0008e3f1) cale_month_week_pane_t4_ParamLimits

0x2e1a,	// (0x0008e40a) cale_month_week_pane_t5_ParamLimits

0x2e33,	// (0x0008e423) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0009a8a5) cale_month_week_pane_t_ParamLimits

0x9d06,	// (0x000952f6) cell_cale_month_pane_g1_ParamLimits

0x96d5,	// (0x00094cc5) main_cale_event_viewer_pane

0x96d5,	// (0x00094cc5) listscroll_cale_event_viewer_pane

0xcc3e,	// (0x0009822e) list_cale_ev_pane

0xcc46,	// (0x00098236) scroll_pane_cp023

0xcc52,	// (0x00098242) field_cale_ev_pane_ParamLimits

0xcc52,	// (0x00098242) field_cale_ev_pane

0xcc6e,	// (0x0009825e) field_cale_ev_content_pane_ParamLimits

0xcc6e,	// (0x0009825e) field_cale_ev_content_pane

0xcc7a,	// (0x0009826a) field_cale_ev_pane_g1_ParamLimits

0xcc7a,	// (0x0009826a) field_cale_ev_pane_g1

0xcc86,	// (0x00098276) field_cale_ev_pane_g2_ParamLimits

0xcc86,	// (0x00098276) field_cale_ev_pane_g2

0xcc9e,	// (0x0009828e) field_cale_ev_pane_g3_ParamLimits

0xcc9e,	// (0x0009828e) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0009ace6) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0009ace6) field_cale_ev_pane_g

0xccb6,	// (0x000982a6) field_cale_ev_pane_t1_ParamLimits

0xccb6,	// (0x000982a6) field_cale_ev_pane_t1

0xcccd,	// (0x000982bd) field_cale_ev_content_pane_t1_ParamLimits

0xcccd,	// (0x000982bd) field_cale_ev_content_pane_t1

0xb50c,	// (0x00096afc) bg_button_pane_cp01

0x15ee,	// (0x0008cbde) listscroll_cale_week_pane_ParamLimits

0xa821,	// (0x00095e11) popup_toolbar_window_cp01

0xa847,	// (0x00095e37) listscroll_cale_week_pane_t1_ParamLimits

0x15ee,	// (0x0008cbde) listscroll_cale_day_pane_ParamLimits

0xa821,	// (0x00095e11) popup_toolbar_window_cp02

0xac60,	// (0x00096250) listscroll_cale_day_pane_t1_ParamLimits

0x15ee,	// (0x0008cbde) main_cale_month_pane_ParamLimits

0x9e3a,	// (0x0009542a) popup_toolbar_window_cp03_ParamLimits

0x9e3a,	// (0x0009542a) popup_toolbar_window_cp03

0x3a07,	// (0x0008eff7) main_image_pane_g2_ParamLimits

0x3a07,	// (0x0008eff7) main_image_pane_g2

0x3a18,	// (0x0008f008) main_image_pane_g3_ParamLimits

0x3a18,	// (0x0008f008) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0009aad7) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0009aad7) main_image_pane_g

0xb626,	// (0x00096c16) main_image_pane_t1_ParamLimits

0x3a29,	// (0x0008f019) main_image_pane_t2_ParamLimits

0x3a29,	// (0x0008f019) main_image_pane_t2

0x3a3b,	// (0x0008f02b) main_image_pane_t3_ParamLimits

0x3a3b,	// (0x0008f02b) main_image_pane_t3

0x3a63,	// (0x0008f053) main_image_pane_t4_ParamLimits

0x3a63,	// (0x0008f053) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0009aade) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0009aade) main_image_pane_t

0x3a83,	// (0x0008f073) popup_image_details_window_cp01

0x3a8d,	// (0x0008f07d) popup_toobar_trans_pane_cp01_ParamLimits

0x3a8d,	// (0x0008f07d) popup_toobar_trans_pane_cp01

0x420b,	// (0x0008f7fb) popup_image_details_window_ParamLimits

0x420b,	// (0x0008f7fb) popup_image_details_window

0x9e0d,	// (0x000953fd) popup_image_focus_window

0x461c,	// (0x0008fc0c) camera2_autofocus_pane_ParamLimits

0x461c,	// (0x0008fc0c) camera2_autofocus_pane

0x96d5,	// (0x00094cc5) bg_popup_sub_pane_cp06

0xccea,	// (0x000982da) popup_image_focus_window_g1

0xccf2,	// (0x000982e2) popup_image_focus_window_g2

0xccfa,	// (0x000982ea) popup_image_focus_window_g3

0xcd02,	// (0x000982f2) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0009aced) popup_image_focus_window_g

0xcd0a,	// (0x000982fa) popup_image_focus_window_t1

0xcd18,	// (0x00098308) popup_image_focus_window_t2

0xcd28,	// (0x00098318) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0009acf6) popup_image_focus_window_t

0xcd36,	// (0x00098326) camera2_autofocus_pane_g1

0xa4c1,	// (0x00095ab1) bg_tb_trans_pane_cp01

0xcd44,	// (0x00098334) popup_image_details_window_g1

0xcd57,	// (0x00098347) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0009ad08) popup_image_details_window_g

0xcd80,	// (0x00098370) popup_image_details_window_t1

0xcd92,	// (0x00098382) popup_image_details_window_t2

0xcdab,	// (0x0009839b) popup_image_details_window_t3

0xcdbf,	// (0x000983af) popup_image_details_window_t4

0xcdda,	// (0x000983ca) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0009ad0f) popup_image_details_window_t

0xa6e6,	// (0x00095cd6) bg_calc_paper_pane_ParamLimits

0x96d5,	// (0x00094cc5) grid_highlight_pane_cp013

0x9c6c,	// (0x0009525c) list_calc_pane_ParamLimits

0x9c7e,	// (0x0009526e) scroll_pane_cp024

0xa6fa,	// (0x00095cea) bg_calc_display_pane_ParamLimits

0x142e,	// (0x0008ca1e) calc_display_pane_t1_ParamLimits

0x1440,	// (0x0008ca30) calc_display_pane_t2_ParamLimits

0x9c86,	// (0x00095276) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0009a741) calc_display_pane_t_ParamLimits

0x1505,	// (0x0008caf5) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0009a75e) cell_calc_pane_g

0x150e,	// (0x0008cafe) cell_calc_pane_t1

0xa759,	// (0x00095d49) grid_highlight_pane_cp02_ParamLimits

0xa76f,	// (0x00095d5f) toolbar_button_pane_cp01_ParamLimits

0xa76f,	// (0x00095d5f) toolbar_button_pane_cp01

0xb66b,	// (0x00096c5b) temp_image_control_pane_ParamLimits

0xb66b,	// (0x00096c5b) temp_image_control_pane

0xa4c1,	// (0x00095ab1) main_mp3_pane

0xcdf4,	// (0x000983e4) temp_image_control_pane_g1_ParamLimits

0xcdf4,	// (0x000983e4) temp_image_control_pane_g1

0xce02,	// (0x000983f2) temp_image_control_pane_g2_ParamLimits

0xce02,	// (0x000983f2) temp_image_control_pane_g2

0xce14,	// (0x00098404) temp_image_control_pane_g3_ParamLimits

0xce14,	// (0x00098404) temp_image_control_pane_g3

0x4e72,	// (0x00090462) temp_image_control_pane_g4_ParamLimits

0x4e72,	// (0x00090462) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0009ad1a) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0009ad1a) temp_image_control_pane_g

0xcdf4,	// (0x000983e4) main_mp3_pane_g1

0x4e85,	// (0x00090475) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0009ad23) main_mp3_pane_g

0xce57,	// (0x00098447) main_mp3_pane_t1

0xa8d0,	// (0x00095ec0) main_camera_pane_g8_ParamLimits

0xa8d0,	// (0x00095ec0) main_camera_pane_g8

0x1eec,	// (0x0008d4dc) main_video_pane_g7_ParamLimits

0x1eec,	// (0x0008d4dc) main_video_pane_g7

0x9e8f,	// (0x0009547f) main_camera2_pane_t7_ParamLimits

0x9e8f,	// (0x0009547f) main_camera2_pane_t7

0xaa18,	// (0x00096008) scroll_pane_cp025_ParamLimits

0xaa18,	// (0x00096008) scroll_pane_cp025

0xaa2c,	// (0x0009601c) scroll_pane_cp026_ParamLimits

0xaa2c,	// (0x0009601c) scroll_pane_cp026

0xaa3b,	// (0x0009602b) wml_content_pane_ParamLimits

0x96d5,	// (0x00094cc5) main_touch_calib_pane

0x4f5b,	// (0x0009054b) main_touch_calib_pane_g1

0x4f6d,	// (0x0009055d) main_touch_calib_pane_g2

0x4f7f,	// (0x0009056f) main_touch_calib_pane_g3

0x4f91,	// (0x00090581) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0009ad41) main_touch_calib_pane_g

0x4fa3,	// (0x00090593) main_touch_calib_pane_t1

0x4fbd,	// (0x000905ad) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0009ad4a) main_touch_calib_pane_t

0xb1df,	// (0x000967cf) mup_progress_pane_cp02

0xb214,	// (0x00096804) navi_pane_g1

0xb328,	// (0x00096918) navi_pane_mp_t3

0xa4c1,	// (0x00095ab1) main_mp3_pane_ParamLimits

0x4388,	// (0x0008f978) navi_pane_ParamLimits

0xcdf4,	// (0x000983e4) main_mp3_pane_g1_ParamLimits

0x4e85,	// (0x00090475) main_mp3_pane_g2_ParamLimits

0x4e93,	// (0x00090483) main_mp3_pane_g3_ParamLimits

0x4e93,	// (0x00090483) main_mp3_pane_g3

0x4ea1,	// (0x00090491) main_mp3_pane_g4_ParamLimits

0x4ea1,	// (0x00090491) main_mp3_pane_g4

0xce24,	// (0x00098414) main_mp3_pane_g5_ParamLimits

0xce24,	// (0x00098414) main_mp3_pane_g5

0xce32,	// (0x00098422) main_mp3_pane_g6_ParamLimits

0xce32,	// (0x00098422) main_mp3_pane_g6

0xce3f,	// (0x0009842f) main_mp3_pane_g7_ParamLimits

0xce3f,	// (0x0009842f) main_mp3_pane_g7

0xce4b,	// (0x0009843b) main_mp3_pane_g8_ParamLimits

0xce4b,	// (0x0009843b) main_mp3_pane_g8

0xf733,	// (0x0009ad23) main_mp3_pane_g_ParamLimits

0x4eaf,	// (0x0009049f) main_mp3_pane_t2

0x4ebd,	// (0x000904ad) main_mp3_pane_t3

0xce65,	// (0x00098455) main_mp3_pane_t4

0xce73,	// (0x00098463) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0009ad34) main_mp3_pane_t

0xce81,	// (0x00098471) mup_progress_pane_cp01

0x0eed,	// (0x0008c4dd) aid_zoom_text_secondary2

0xcc3e,	// (0x0009822e) list_cale_ev2_pane

0xcc46,	// (0x00098236) scroll_pane_cp023_ParamLimits

0x5013,	// (0x00090603) field_cale_ev2_pane_ParamLimits

0x5013,	// (0x00090603) field_cale_ev2_pane

0x9f0e,	// (0x000954fe) field_cale_ev2_pane_g1_ParamLimits

0x9f0e,	// (0x000954fe) field_cale_ev2_pane_g1

0x9f1a,	// (0x0009550a) field_cale_ev2_pane_g2_ParamLimits

0x9f1a,	// (0x0009550a) field_cale_ev2_pane_g2

0x9f32,	// (0x00095522) field_cale_ev2_pane_g3_ParamLimits

0x9f32,	// (0x00095522) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0009ad55) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0009ad55) field_cale_ev2_pane_g

0x5035,	// (0x00090625) field_cale_ev2_pane_t1_ParamLimits

0x5035,	// (0x00090625) field_cale_ev2_pane_t1

0x504c,	// (0x0009063c) field_cale_ev2_pane_t2_ParamLimits

0x504c,	// (0x0009063c) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0009ad5e) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0009ad5e) field_cale_ev2_pane_t

0x38ba,	// (0x0008eeaa) main_postcard_pane_g5_ParamLimits

0x38ba,	// (0x0008eeaa) main_postcard_pane_g5

0x38d0,	// (0x0008eec0) main_postcard_pane_g6_ParamLimits

0x38d0,	// (0x0008eec0) main_postcard_pane_g6

0x1ca6,	// (0x0008d296) camera2_autofocus_pane_cp_ParamLimits

0x1ca6,	// (0x0008d296) camera2_autofocus_pane_cp

0xa4c1,	// (0x00095ab1) main_mup3_pane

0x5081,	// (0x00090671) main_mup3_pane_g1_ParamLimits

0x5081,	// (0x00090671) main_mup3_pane_g1

0x50a3,	// (0x00090693) main_mup3_pane_g2_ParamLimits

0x50a3,	// (0x00090693) main_mup3_pane_g2

0x5125,	// (0x00090715) main_mup3_pane_g3_ParamLimits

0x5125,	// (0x00090715) main_mup3_pane_g3

0x516b,	// (0x0009075b) main_mup3_pane_g4_ParamLimits

0x516b,	// (0x0009075b) main_mup3_pane_g4

0x51b1,	// (0x000907a1) main_mup3_pane_g5_ParamLimits

0x51b1,	// (0x000907a1) main_mup3_pane_g5

0x51f9,	// (0x000907e9) main_mup3_pane_g6_ParamLimits

0x51f9,	// (0x000907e9) main_mup3_pane_g6

0xce89,	// (0x00098479) main_mup3_pane_g7_ParamLimits

0xce89,	// (0x00098479) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0009ad6e) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0009ad6e) main_mup3_pane_g

0x5277,	// (0x00090867) main_mup3_pane_t1_ParamLimits

0x5277,	// (0x00090867) main_mup3_pane_t1

0x52eb,	// (0x000908db) main_mup3_pane_t2_ParamLimits

0x52eb,	// (0x000908db) main_mup3_pane_t2

0x53bf,	// (0x000909af) main_mup3_pane_t4_ParamLimits

0x53bf,	// (0x000909af) main_mup3_pane_t4

0x5415,	// (0x00090a05) main_mup3_pane_t5_ParamLimits

0x5415,	// (0x00090a05) main_mup3_pane_t5

0x54d1,	// (0x00090ac1) main_mup3_pane_t6_ParamLimits

0x54d1,	// (0x00090ac1) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0009ad7f) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0009ad7f) main_mup3_pane_t

0x5589,	// (0x00090b79) mup3_progress_pane_ParamLimits

0x5589,	// (0x00090b79) mup3_progress_pane

0x5615,	// (0x00090c05) popup_mup3_control_window_ParamLimits

0x5615,	// (0x00090c05) popup_mup3_control_window

0xce97,	// (0x00098487) popup_mup3_text_window

0x5647,	// (0x00090c37) mup3_progress_pane_t1

0x5666,	// (0x00090c56) mup3_progress_pane_t2

0xce9f,	// (0x0009848f) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0009ad8c) mup3_progress_pane_t

0xcebc,	// (0x000984ac) mup_progress_pane_cp03

0x96d5,	// (0x00094cc5) bg_tb_trans_pane_cp04

0x5685,	// (0x00090c75) mup3_volume_pane

0x568d,	// (0x00090c7d) popup_mup3_control_window_g1

0x5696,	// (0x00090c86) mup3_volume_pane_g1

0x569f,	// (0x00090c8f) mup3_volume_pane_g2

0x56a8,	// (0x00090c98) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0009ad93) mup3_volume_pane_g

0x96d5,	// (0x00094cc5) bg_tb_trans_pane_cp03

0xcecc,	// (0x000984bc) popup_mup3_text_window_g1

0xced4,	// (0x000984c4) popup_mup3_text_window_t1

0xa742,	// (0x00095d32) list_calc_item_pane_g1_ParamLimits

0xc915,	// (0x00097f05) mup_volume_pane_cp_g1

0x4fd7,	// (0x000905c7) main_touch_calib_pane_t3

0x4feb,	// (0x000905db) main_touch_calib_pane_t4

0x4fff,	// (0x000905ef) main_touch_calib_pane_t5

0x96df,	// (0x00094ccf) aid_cell_size_toolbar2

0x96e7,	// (0x00094cd7) aid_popup3_width_pane

0x96f3,	// (0x00094ce3) aid_zoom_text_msg_primary

0x1c85,	// (0x0008d275) vorec_t7

0xa706,	// (0x00095cf6) bg_calc_paper_pane_g1_ParamLimits

0xa712,	// (0x00095d02) bg_calc_paper_pane_g2_ParamLimits

0xa71e,	// (0x00095d0e) bg_calc_paper_pane_g3_ParamLimits

0xa72a,	// (0x00095d1a) bg_calc_paper_pane_g4_ParamLimits

0xa736,	// (0x00095d26) bg_calc_paper_pane_g5_ParamLimits

0x1489,	// (0x0008ca79) bg_calc_paper_pane_g6_ParamLimits

0x149a,	// (0x0008ca8a) bg_calc_paper_pane_g7_ParamLimits

0x14ab,	// (0x0008ca9b) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0009a748) bg_calc_paper_pane_g_ParamLimits

0x14be,	// (0x0008caae) calc_bg_paper_pane_g9_ParamLimits

0x1dfe,	// (0x0008d3ee) image_qvga_pane_ParamLimits

0x1dfe,	// (0x0008d3ee) image_qvga_pane

0xa616,	// (0x00095c06) bg_popup_sub_pane_cp04_ParamLimits

0xb5a2,	// (0x00096b92) popup_mup_playback_window_g1_ParamLimits

0xb5ae,	// (0x00096b9e) popup_mup_playback_window_t1_ParamLimits

0xb5c3,	// (0x00096bb3) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0009aad2) popup_mup_playback_window_t_ParamLimits

0x4b13,	// (0x00090103) main_mup2_pane_g3_ParamLimits

0x4b13,	// (0x00090103) main_mup2_pane_g3

0x20fb,	// (0x0008d6eb) popup_toolbar_window_cp04

0xb9b8,	// (0x00096fa8) popup_call2_audio_second_window_g3_ParamLimits

0xb9b8,	// (0x00096fa8) popup_call2_audio_second_window_g3

0xbdc2,	// (0x000973b2) popup_call2_audio_first_window_g4_ParamLimits

0xbdc2,	// (0x000973b2) popup_call2_audio_first_window_g4

0xc44d,	// (0x00097a3d) popup_call2_audio_in_window_g4_ParamLimits

0xc44d,	// (0x00097a3d) popup_call2_audio_in_window_g4

0x39e9,	// (0x0008efd9) aid_area_sk_bg_cut_ParamLimits

0x39e9,	// (0x0008efd9) aid_area_sk_bg_cut

0xb5d8,	// (0x00096bc8) aid_area_sk_bg_cut_2_ParamLimits

0xb5d8,	// (0x00096bc8) aid_area_sk_bg_cut_2

0x4e18,	// (0x00090408) aid_placing_details_win

0x4e20,	// (0x00090410) aid_placing_details_win_2

0xcd36,	// (0x00098326) camera2_autofocus_pane_g1_ParamLimits

0x108b,	// (0x0008c67b) popup_fixed_preview_cale_window_ParamLimits

0x108b,	// (0x0008c67b) popup_fixed_preview_cale_window

0xb3a6,	// (0x00096996) navi_slider_pane_g3

0xb3af,	// (0x0009699f) navi_slider_pane_g4

0xb3b8,	// (0x000969a8) navi_slider_pane_g5

0xb3a6,	// (0x00096996) navi_slider_pane_g6

0x9db0,	// (0x000953a0) navi_slider_pane_g7

0xb4d9,	// (0x00096ac9) mup_scale_pane_g3

0xb4e2,	// (0x00096ad2) mup_scale_pane_g4

0xb4eb,	// (0x00096adb) mup_scale_pane_g5

0x3767,	// (0x0008ed57) mup_scale_pane_g6

0x3770,	// (0x0008ed60) mup_scale_pane_g7

0xb3a6,	// (0x00096996) cams2_slider_pane_g3

0xc997,	// (0x00097f87) cams2_slider_pane_g4

0x9efd,	// (0x000954ed) cams2_slider_pane_g5

0xb3a6,	// (0x00096996) cams2_slider_pane_g6

0x9f05,	// (0x000954f5) cams2_slider_pane_g7

0xcbc4,	// (0x000981b4) camera2_autofocus_pane_cp_g1

0xc7ae,	// (0x00097d9e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7ae,	// (0x00097d9e) bg_popup_preview_window_pane_cp02

0xcee2,	// (0x000984d2) list_fp_cale_pane_ParamLimits

0xcee2,	// (0x000984d2) list_fp_cale_pane

0xceee,	// (0x000984de) popup_fixed_preview_cale_window_t1_ParamLimits

0xceee,	// (0x000984de) popup_fixed_preview_cale_window_t1

0x56b1,	// (0x00090ca1) popup_fixed_preview_cale_window_t2_ParamLimits

0x56b1,	// (0x00090ca1) popup_fixed_preview_cale_window_t2

0x56c6,	// (0x00090cb6) popup_fixed_preview_cale_window_t3_ParamLimits

0x56c6,	// (0x00090cb6) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0009ad9a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0009ad9a) popup_fixed_preview_cale_window_t

0x56db,	// (0x00090ccb) list_single_fp_cale_pane_ParamLimits

0x56db,	// (0x00090ccb) list_single_fp_cale_pane

0xcf0c,	// (0x000984fc) list_single_fp_cale_pane_g1_ParamLimits

0xcf0c,	// (0x000984fc) list_single_fp_cale_pane_g1

0xcf18,	// (0x00098508) list_single_fp_cale_pane_g2_ParamLimits

0xcf18,	// (0x00098508) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0009ada1) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0009ada1) list_single_fp_cale_pane_g

0xcf31,	// (0x00098521) list_single_fp_cale_pane_t1_ParamLimits

0xcf31,	// (0x00098521) list_single_fp_cale_pane_t1

0xcf43,	// (0x00098533) list_single_fp_cale_pane_t2_ParamLimits

0xcf43,	// (0x00098533) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0009ada8) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0009ada8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x96d5,	// (0x00094cc5) main_dialer_pane

0x56f2,	// (0x00090ce2) aid_cell_size_keypad

0x56fc,	// (0x00090cec) dialer_ne_pane

0x5704,	// (0x00090cf4) grid_dialer_command_1_pane

0x570c,	// (0x00090cfc) grid_dialer_command_2_pane

0x5714,	// (0x00090d04) grid_dialer_keypad_pane

0x5726,	// (0x00090d16) bg_popup_call_pane_cp06_ParamLimits

0x5726,	// (0x00090d16) bg_popup_call_pane_cp06

0x5732,	// (0x00090d22) dialer_ne_clear_pane_ParamLimits

0x5732,	// (0x00090d22) dialer_ne_clear_pane

0xcf76,	// (0x00098566) dialer_ne_pane_g1

0xcf7e,	// (0x0009856e) dialer_ne_pane_t1_ParamLimits

0xcf7e,	// (0x0009856e) dialer_ne_pane_t1

0x573e,	// (0x00090d2e) dialer_ne_pane_t2_ParamLimits

0x573e,	// (0x00090d2e) dialer_ne_pane_t2

0x5768,	// (0x00090d58) dialer_ne_pane_t3_ParamLimits

0x5768,	// (0x00090d58) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0009adad) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0009adad) dialer_ne_pane_t

0x5798,	// (0x00090d88) dialer_ne_pane_t3_copy1_ParamLimits

0x5798,	// (0x00090d88) dialer_ne_pane_t3_copy1

0x57c7,	// (0x00090db7) cell_dialer_keypad_pane_ParamLimits

0x57c7,	// (0x00090db7) cell_dialer_keypad_pane

0x57de,	// (0x00090dce) cell_dialer_command_1_pane_ParamLimits

0x57de,	// (0x00090dce) cell_dialer_command_1_pane

0x57f4,	// (0x00090de4) cell_dialer_command_2_pane_ParamLimits

0x57f4,	// (0x00090de4) cell_dialer_command_2_pane

0xcf90,	// (0x00098580) bg_button_pane_cp02_ParamLimits

0xcf90,	// (0x00098580) bg_button_pane_cp02

0x5803,	// (0x00090df3) cell_dialer_keypad_pane_g1_ParamLimits

0x5803,	// (0x00090df3) cell_dialer_keypad_pane_g1

0xcf90,	// (0x00098580) bg_button_pane_cp03_ParamLimits

0xcf90,	// (0x00098580) bg_button_pane_cp03

0x5818,	// (0x00090e08) cell_dialer_command_1_pane_g1_ParamLimits

0x5818,	// (0x00090e08) cell_dialer_command_1_pane_g1

0xcf9c,	// (0x0009858c) bg_button_pane_cp04

0x582b,	// (0x00090e1b) cell_dialer_command_2_pane_g1

0xa8c8,	// (0x00095eb8) bg_button_pane_cp06

0xcfa4,	// (0x00098594) dialer_ne_clear_pane_g1

0xb279,	// (0x00096869) navi_pane_g2

0xb2a7,	// (0x00096897) navi_pane_g3

0x0002,

0xf3e5,	// (0x0009a9d5) navi_pane_g

0xb336,	// (0x00096926) navi_pane_mv_g2

0xb35d,	// (0x0009694d) navi_pane_mv_g5

0x3327,	// (0x0008e917) navi_pane_mv_t1

0xa6fa,	// (0x00095cea) main_clock2_pane

0x5878,	// (0x00090e68) main_clock2_list_pane_ParamLimits

0x5878,	// (0x00090e68) main_clock2_list_pane

0x58b0,	// (0x00090ea0) main_clock2_pane_t1_ParamLimits

0x58b0,	// (0x00090ea0) main_clock2_pane_t1

0x58ee,	// (0x00090ede) main_clock2_pane_t2_ParamLimits

0x58ee,	// (0x00090ede) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0009adb9) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0009adb9) main_clock2_pane_t

0x598c,	// (0x00090f7c) popup_clock_analogue_window_cp03_ParamLimits

0x598c,	// (0x00090f7c) popup_clock_analogue_window_cp03

0x59b1,	// (0x00090fa1) popup_clock_digital_window_cp02_ParamLimits

0x59b1,	// (0x00090fa1) popup_clock_digital_window_cp02

0x5a24,	// (0x00091014) main_clock2_list_single_pane_ParamLimits

0x5a24,	// (0x00091014) main_clock2_list_single_pane

0xa8c8,	// (0x00095eb8) list_highlight_pane_cp05

0xcfde,	// (0x000985ce) main_clock2_list_single_pane_t1

0x20fb,	// (0x0008d6eb) popup_toolbar_window_cp04_ParamLimits

0x4e42,	// (0x00090432) camera2_autofocus_pane_g2_ParamLimits

0x4e42,	// (0x00090432) camera2_autofocus_pane_g2

0x4e4e,	// (0x0009043e) camera2_autofocus_pane_g3_ParamLimits

0x4e4e,	// (0x0009043e) camera2_autofocus_pane_g3

0x4e5a,	// (0x0009044a) camera2_autofocus_pane_g4_ParamLimits

0x4e5a,	// (0x0009044a) camera2_autofocus_pane_g4

0x4e66,	// (0x00090456) camera2_autofocus_pane_g5_ParamLimits

0x4e66,	// (0x00090456) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0009acfd) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0009acfd) camera2_autofocus_pane_g

0x5061,	// (0x00090651) camera2_autofocus_pane_cp_g2

0x5069,	// (0x00090659) camera2_autofocus_pane_cp_g3

0x5071,	// (0x00090661) camera2_autofocus_pane_cp_g4

0x5079,	// (0x00090669) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0009ad63) camera2_autofocus_pane_cp_g

0x571e,	// (0x00090d0e) popup_dialer_spcha_window

0x96d5,	// (0x00094cc5) bg_popup_sub_pane_cp07

0xcfec,	// (0x000985dc) list_spcha_pane

0xcff4,	// (0x000985e4) list_single_spcha_pane_ParamLimits

0xcff4,	// (0x000985e4) list_single_spcha_pane

0x96d5,	// (0x00094cc5) list_highlight_pane_cp06

0xd005,	// (0x000985f5) list_single_spcha_pane_t1

0xc1f7,	// (0x000977e7) popup_call2_audio_out_window_g4_ParamLimits

0xc1f7,	// (0x000977e7) popup_call2_audio_out_window_g4

0x96d5,	// (0x00094cc5) main_imed2_pane

0x9e15,	// (0x00095405) popup_imed_adjust2_window

0x4223,	// (0x0008f813) popup_imed_trans_window_ParamLimits

0x4223,	// (0x0008f813) popup_imed_trans_window

0xca00,	// (0x00097ff0) popup_blid_sat_info2_window_t1

0xca0e,	// (0x00097ffe) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0009ac92) popup_blid_sat_info2_window_t

0x5ace,	// (0x000910be) aid_size_cell_colour_35

0x5aee,	// (0x000910de) aid_size_cell_colour_112

0x5b0e,	// (0x000910fe) aid_size_cell_effect

0xc7ba,	// (0x00097daa) bg_tb_trans_pane_cp02

0xad71,	// (0x00096361) heading_imed_pane

0x5b2e,	// (0x0009111e) listscroll_imed_pane

0xd013,	// (0x00098603) heading_imed_pane_g1

0xd01b,	// (0x0009860b) heading_imed_pane_t1

0xd029,	// (0x00098619) grid_imed_colour_35_pane_ParamLimits

0xd029,	// (0x00098619) grid_imed_colour_35_pane

0x5b3a,	// (0x0009112a) grid_imed_effect_pane

0xd041,	// (0x00098631) list_imed_aspect_pane

0x5b50,	// (0x00091140) scroll_pane_cp027_ParamLimits

0x5b50,	// (0x00091140) scroll_pane_cp027

0x5b61,	// (0x00091151) cell_imed_effect_pane_ParamLimits

0x5b61,	// (0x00091151) cell_imed_effect_pane

0xd049,	// (0x00098639) cell_imed_colour_pane_ParamLimits

0xd049,	// (0x00098639) cell_imed_colour_pane

0xd08b,	// (0x0009867b) cell_imed_colour_pane_g1_ParamLimits

0xd08b,	// (0x0009867b) cell_imed_colour_pane_g1

0xd09c,	// (0x0009868c) hgihlgiht_grid_pane_cp016_ParamLimits

0xd09c,	// (0x0009868c) hgihlgiht_grid_pane_cp016

0x5b88,	// (0x00091178) cell_imed_effect_pane_g1

0x5b90,	// (0x00091180) grid_highlight_pane_cp017

0xd0ad,	// (0x0009869d) list_imed_single_pane_ParamLimits

0xd0ad,	// (0x0009869d) list_imed_single_pane

0x96d5,	// (0x00094cc5) list_highlight_pane_cp07

0xd0c3,	// (0x000986b3) list_imed_aspect_pane_comp1_t1

0xc7ba,	// (0x00097daa) bg_tb_trans_pane_cp05

0xd0e5,	// (0x000986d5) popup_imed_adjust2_window_g1

0xd10c,	// (0x000986fc) popup_imed_adjust2_window_t1

0xd124,	// (0x00098714) slider_imed_adjust_pane

0xd138,	// (0x00098728) slider_imed_adjust_pane_g1

0xd148,	// (0x00098738) slider_imed_adjust_pane_g2

0xd158,	// (0x00098748) slider_imed_adjust_pane_g3

0xd169,	// (0x00098759) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0009add6) slider_imed_adjust_pane_g

0x5b99,	// (0x00091189) aid_size_cell_clipart2

0x5ba5,	// (0x00091195) grid_imed_clipart_pane

0xd17a,	// (0x0009876a) scroll_pane_cp031

0x5baf,	// (0x0009119f) cell_imed_clipart_pane_ParamLimits

0x5baf,	// (0x0009119f) cell_imed_clipart_pane

0x5bd3,	// (0x000911c3) cell_imed_clipart_pane_g1

0x96d5,	// (0x00094cc5) grid_highlight_pane_cp014

0x588d,	// (0x00090e7d) main_clock2_pane_g1_ParamLimits

0x588d,	// (0x00090e7d) main_clock2_pane_g1

0x59cf,	// (0x00090fbf) aid_call2_pane_cp10

0x59e1,	// (0x00090fd1) aid_call_pane_cp10

0xb17f,	// (0x0009676f) popup_clock_analogue_window_cp10_g1

0xb17f,	// (0x0009676f) popup_clock_analogue_window_cp10_g2

0x59f3,	// (0x00090fe3) popup_clock_analogue_window_cp10_g3

0x59f3,	// (0x00090fe3) popup_clock_analogue_window_cp10_g4

0xb17f,	// (0x0009676f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0009adc4) popup_clock_analogue_window_cp10_g

0x5a05,	// (0x00090ff5) popup_clock_analogue_window_cp10_t1

0x5a36,	// (0x00091026) clock_digital_number_pane_cp10_ParamLimits

0x5a36,	// (0x00091026) clock_digital_number_pane_cp10

0x5a4e,	// (0x0009103e) clock_digital_number_pane_cp11_ParamLimits

0x5a4e,	// (0x0009103e) clock_digital_number_pane_cp11

0x5a66,	// (0x00091056) clock_digital_number_pane_cp12_ParamLimits

0x5a66,	// (0x00091056) clock_digital_number_pane_cp12

0x5a7e,	// (0x0009106e) clock_digital_number_pane_cp13_ParamLimits

0x5a7e,	// (0x0009106e) clock_digital_number_pane_cp13

0x5a96,	// (0x00091086) clock_digital_separator_pane_cp10_ParamLimits

0x5a96,	// (0x00091086) clock_digital_separator_pane_cp10

0x5aae,	// (0x0009109e) popup_clock_digital_window_cp02_t1_ParamLimits

0x5aae,	// (0x0009109e) popup_clock_digital_window_cp02_t1

0xa60e,	// (0x00095bfe) clock_digital_number_pane_cp10_g1

0xa60e,	// (0x00095bfe) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0009addf) clock_digital_number_pane_cp10_g

0xa60e,	// (0x00095bfe) clock_digital_separator_pane_cp10_g1

0xa60e,	// (0x00095bfe) clock_digital_separator_pane_g2_cp10

0xb365,	// (0x00096955) navi_pane_vded_g4

0xb36e,	// (0x0009695e) navi_pane_vded_g5

0xb377,	// (0x00096967) navi_pane_vded_t1

0x96d5,	// (0x00094cc5) main_vded_pane

0x5bdc,	// (0x000911cc) main_vded_pane_g1

0x5be6,	// (0x000911d6) main_vded_pane_g2

0x5bf0,	// (0x000911e0) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0009ade4) main_vded_pane_g

0x5bfa,	// (0x000911ea) main_vded_pane_t1

0x5c08,	// (0x000911f8) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0009adeb) main_vded_pane_t

0x5c16,	// (0x00091206) vded_slider_pane

0x5c20,	// (0x00091210) vded_video_pane

0xd182,	// (0x00098772) vded_video_pane_g1

0x5c2a,	// (0x0009121a) vded_video_pane_g2

0xcbc4,	// (0x000981b4) vded_video_pane_g3

0x0002,

0xf800,	// (0x0009adf0) vded_video_pane_g

0xd18c,	// (0x0009877c) vded_slider_pane_g1

0xd195,	// (0x00098785) vded_slider_pane_g2

0xd19e,	// (0x0009878e) vded_slider_pane_g3

0xd1a7,	// (0x00098797) vded_slider_pane_g4

0xd1b0,	// (0x000987a0) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0009adf7) vded_slider_pane_g

0x55fd,	// (0x00090bed) mup3_rocker_pane_ParamLimits

0x55fd,	// (0x00090bed) mup3_rocker_pane

0x5c33,	// (0x00091223) mup3_control_keys_pane_g1

0x5c3b,	// (0x0009122b) mup3_control_keys_pane_g2

0x5c43,	// (0x00091233) mup3_control_keys_pane_g3

0x5c4b,	// (0x0009123b) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0009ae02) mup3_control_keys_pane_g

0x10c2,	// (0x0008c6b2) popup_toolbar2_fixed_window_cp01_ParamLimits

0x10c2,	// (0x0008c6b2) popup_toolbar2_fixed_window_cp01

0x5631,	// (0x00090c21) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5631,	// (0x00090c21) popup_toolbar2_fixed_window_cp02

0xbb2a,	// (0x0009711a) popup_call2_audio_second_window_t4_ParamLimits

0xbb2a,	// (0x0009711a) popup_call2_audio_second_window_t4

0xc064,	// (0x00097654) popup_call2_audio_first_window_t6_ParamLimits

0xc064,	// (0x00097654) popup_call2_audio_first_window_t6

0xc2fa,	// (0x000978ea) popup_call2_audio_out_window_t6_ParamLimits

0xc2fa,	// (0x000978ea) popup_call2_audio_out_window_t6

0x96d5,	// (0x00094cc5) main_vitu_pane

0x5c5b,	// (0x0009124b) aid_size_cell_itu_ParamLimits

0x5c5b,	// (0x0009124b) aid_size_cell_itu

0xa4c1,	// (0x00095ab1) bg_popup_window_pane_cp08_ParamLimits

0xa4c1,	// (0x00095ab1) bg_popup_window_pane_cp08

0x5c71,	// (0x00091261) field_vitu_entry_pane_ParamLimits

0x5c71,	// (0x00091261) field_vitu_entry_pane

0x5c88,	// (0x00091278) grid_vitu_function_pane_ParamLimits

0x5c88,	// (0x00091278) grid_vitu_function_pane

0x5ca3,	// (0x00091293) grid_vitu_itu_pane_ParamLimits

0x5ca3,	// (0x00091293) grid_vitu_itu_pane

0x5cc1,	// (0x000912b1) cell_vitu_itu_pane_ParamLimits

0x5cc1,	// (0x000912b1) cell_vitu_itu_pane

0x5ce5,	// (0x000912d5) cell_vitu_function_pane_ParamLimits

0x5ce5,	// (0x000912d5) cell_vitu_function_pane

0xa4c1,	// (0x00095ab1) bg_popup_sub_pane_cp08_ParamLimits

0xa4c1,	// (0x00095ab1) bg_popup_sub_pane_cp08

0x5d00,	// (0x000912f0) field_vitu_entry_pane_t1_ParamLimits

0x5d00,	// (0x000912f0) field_vitu_entry_pane_t1

0xd1d1,	// (0x000987c1) field_vitu_entry_pane_t2_ParamLimits

0xd1d1,	// (0x000987c1) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0009ae10) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0009ae10) field_vitu_entry_pane_t

0xd1ee,	// (0x000987de) bg_button_pane_cp05_ParamLimits

0xd1ee,	// (0x000987de) bg_button_pane_cp05

0x5d1f,	// (0x0009130f) cell_vitu_itu_pane_g1

0x5d37,	// (0x00091327) cell_vitu_itu_pane_t1_ParamLimits

0x5d37,	// (0x00091327) cell_vitu_itu_pane_t1

0x5d49,	// (0x00091339) cell_vitu_itu_pane_t2_ParamLimits

0x5d49,	// (0x00091339) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0009ae15) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0009ae15) cell_vitu_itu_pane_t

0xd1fc,	// (0x000987ec) bg_button_pane_cp07

0x5d8c,	// (0x0009137c) cell_vitu_function_pane_g1

0x9c64,	// (0x00095254) main_calc_pane_g1

0x0ed9,	// (0x0008c4c9) aid_visual_content_pane

0x96d5,	// (0x00094cc5) main_vradio_pane

0x5d95,	// (0x00091385) main_vradio_pane_g1_ParamLimits

0x5d95,	// (0x00091385) main_vradio_pane_g1

0xd206,	// (0x000987f6) main_vradio_pane_g2_ParamLimits

0xd206,	// (0x000987f6) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0009ae1c) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0009ae1c) main_vradio_pane_g

0x5dae,	// (0x0009139e) main_vradio_pane_t1_ParamLimits

0x5dae,	// (0x0009139e) main_vradio_pane_t1

0x5dc3,	// (0x000913b3) main_vradio_pane_t2_ParamLimits

0x5dc3,	// (0x000913b3) main_vradio_pane_t2

0xd213,	// (0x00098803) main_vradio_pane_t3_ParamLimits

0xd213,	// (0x00098803) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0009ae21) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0009ae21) main_vradio_pane_t

0x5dd8,	// (0x000913c8) vradio_rocker_control_pane_ParamLimits

0x5dd8,	// (0x000913c8) vradio_rocker_control_pane

0x5dea,	// (0x000913da) vradio_station_info_pane_ParamLimits

0x5dea,	// (0x000913da) vradio_station_info_pane

0xd227,	// (0x00098817) vradio_frequency_info_pane_ParamLimits

0xd227,	// (0x00098817) vradio_frequency_info_pane

0xcbc4,	// (0x000981b4) vradio_station_info_pane_g1

0xd236,	// (0x00098826) vradio_station_info_pane_t1_ParamLimits

0xd236,	// (0x00098826) vradio_station_info_pane_t1

0xd258,	// (0x00098848) vradio_station_info_pane_t2_ParamLimits

0xd258,	// (0x00098848) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0009ae28) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0009ae28) vradio_station_info_pane_t

0xd26a,	// (0x0009885a) vradio_tuning_pane

0xd272,	// (0x00098862) vradio_rocker_control_pane_g1

0xd27a,	// (0x0009886a) vradio_rocker_control_pane_g2

0xd282,	// (0x00098872) vradio_rocker_control_pane_g3

0xd28a,	// (0x0009887a) vradio_rocker_control_pane_g4

0xd292,	// (0x00098882) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0009ae2d) vradio_rocker_control_pane_g

0x5dfc,	// (0x000913ec) vradio_frequency_info_pane_g1

0xd29a,	// (0x0009888a) vradio_frequency_info_pane_t1_ParamLimits

0xd29a,	// (0x0009888a) vradio_frequency_info_pane_t1

0x5e06,	// (0x000913f6) vradio_tuning_pane_g1

0x5e11,	// (0x00091401) vradio_tuning_pane_t1

0x96fb,	// (0x00094ceb) area_side_right_pane_ParamLimits

0x96fb,	// (0x00094ceb) area_side_right_pane

0xc775,	// (0x00097d65) status_small_pane_g1

0xc77d,	// (0x00097d6d) status_small_pane_g2

0xc786,	// (0x00097d76) status_small_pane_g3

0xc78f,	// (0x00097d7f) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0009abe8) status_small_pane_g

0xc798,	// (0x00097d88) status_small_pane_t1

0x96d5,	// (0x00094cc5) main_video3_pane

0xd2ae,	// (0x0009889e) cams_zoom_vslider_pane

0xd2b6,	// (0x000988a6) image3_wide_pane_ParamLimits

0xd2b6,	// (0x000988a6) image3_wide_pane

0xd2d0,	// (0x000988c0) image3_wide_small_pane

0xd2dc,	// (0x000988cc) main_video3_pane_g1_ParamLimits

0xd2dc,	// (0x000988cc) main_video3_pane_g1

0xd2f8,	// (0x000988e8) main_video3_pane_g2_ParamLimits

0xd2f8,	// (0x000988e8) main_video3_pane_g2

0x0001,

0xf848,	// (0x0009ae38) main_video3_pane_g_ParamLimits

0xf848,	// (0x0009ae38) main_video3_pane_g

0xd314,	// (0x00098904) main_video3_pane_t1_ParamLimits

0xd314,	// (0x00098904) main_video3_pane_t1

0xd33f,	// (0x0009892f) main_video3_pane_t2_ParamLimits

0xd33f,	// (0x0009892f) main_video3_pane_t2

0xd36a,	// (0x0009895a) main_video3_pane_t3_ParamLimits

0xd36a,	// (0x0009895a) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0009ae3d) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0009ae3d) main_video3_pane_t

0xd397,	// (0x00098987) cams_zoom_vslider_pane_g1

0xd3a0,	// (0x00098990) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0009ae44) cams_zoom_vslider_pane_g

0xd3a8,	// (0x00098998) small_slider_vertical_pane

0xcbc4,	// (0x000981b4) small_slider_vertical_pane_g1

0xcbc4,	// (0x000981b4) small_slider_vertical_pane_g2

0xd3b0,	// (0x000989a0) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0009ae49) small_slider_vertical_pane_g

0x96d5,	// (0x00094cc5) main_hwr_training_pane

0xd3b9,	// (0x000989a9) hwr_training_instruct_pane_ParamLimits

0xd3b9,	// (0x000989a9) hwr_training_instruct_pane

0x5e20,	// (0x00091410) hwr_training_navi_pane_ParamLimits

0x5e20,	// (0x00091410) hwr_training_navi_pane

0x5e3f,	// (0x0009142f) hwr_training_write_pane_ParamLimits

0x5e3f,	// (0x0009142f) hwr_training_write_pane

0x96d5,	// (0x00094cc5) bg_frame_shadow_pane

0xd3f0,	// (0x000989e0) hwr_training_write_pane_g1

0xd3f8,	// (0x000989e8) hwr_training_write_pane_g2

0xd400,	// (0x000989f0) hwr_training_write_pane_g3

0xd408,	// (0x000989f8) hwr_training_write_pane_g4

0xd410,	// (0x00098a00) hwr_training_write_pane_g5

0xd418,	// (0x00098a08) hwr_training_write_pane_g6

0xd420,	// (0x00098a10) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0009ae50) hwr_training_write_pane_g

0x9f56,	// (0x00095546) hwr_training_navi_pane_g1_ParamLimits

0x9f56,	// (0x00095546) hwr_training_navi_pane_g1

0x9f68,	// (0x00095558) hwr_training_navi_pane_g2_ParamLimits

0x9f68,	// (0x00095558) hwr_training_navi_pane_g2

0x9f7a,	// (0x0009556a) hwr_training_navi_pane_g3_ParamLimits

0x9f7a,	// (0x0009556a) hwr_training_navi_pane_g3

0x9f8a,	// (0x0009557a) hwr_training_navi_pane_g4_ParamLimits

0x9f8a,	// (0x0009557a) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0009ae5f) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0009ae5f) hwr_training_navi_pane_g

0x9f97,	// (0x00095587) hwr_training_navi_pane_t1

0x5e89,	// (0x00091479) list_single_hwr_training_instruct_pane_ParamLimits

0x5e89,	// (0x00091479) list_single_hwr_training_instruct_pane

0xd428,	// (0x00098a18) list_single_hwr_training_instruct_pane_t1

0xcb04,	// (0x000980f4) bg_frame_shadow_pane_g1

0xd437,	// (0x00098a27) bg_frame_shadow_pane_g2

0xd43f,	// (0x00098a2f) bg_frame_shadow_pane_g3

0xd447,	// (0x00098a37) bg_frame_shadow_pane_g4

0xd44f,	// (0x00098a3f) bg_frame_shadow_pane_g5

0xd457,	// (0x00098a47) bg_frame_shadow_pane_g6

0xd45f,	// (0x00098a4f) bg_frame_shadow_pane_g7

0xa7c5,	// (0x00095db5) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0009ae6a) bg_frame_shadow_pane_g

0x96d5,	// (0x00094cc5) main_video_tele_dialer_pane

0x5ea0,	// (0x00091490) aid_size_cell_video_keypad_ParamLimits

0x5ea0,	// (0x00091490) aid_size_cell_video_keypad

0x5eba,	// (0x000914aa) grid_video_dialer_keypad_pane_ParamLimits

0x5eba,	// (0x000914aa) grid_video_dialer_keypad_pane

0x5f08,	// (0x000914f8) video_down_pane_cp_ParamLimits

0x5f08,	// (0x000914f8) video_down_pane_cp

0x5f3a,	// (0x0009152a) cell_video_dialer_keypad_pane_ParamLimits

0x5f3a,	// (0x0009152a) cell_video_dialer_keypad_pane

0xd467,	// (0x00098a57) bg_button_pane_cp08_ParamLimits

0xd467,	// (0x00098a57) bg_button_pane_cp08

0x5f5c,	// (0x0009154c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5f5c,	// (0x0009154c) cell_video_dialer_keypad_pane_g1

0x55e7,	// (0x00090bd7) mup3_rocker2_pane_ParamLimits

0x55e7,	// (0x00090bd7) mup3_rocker2_pane

0xcbc4,	// (0x000981b4) mup3_rocker2_pane_g1

0x410c,	// (0x0008f6fc) main_dialer2_pane

0x96d5,	// (0x00094cc5) main_mp4_pane

0x9fad,	// (0x0009559d) main_mp4_pane_g1_ParamLimits

0x9fad,	// (0x0009559d) main_mp4_pane_g1

0x9fad,	// (0x0009559d) main_mp4_pane_g2_ParamLimits

0x9fad,	// (0x0009559d) main_mp4_pane_g2

0x5f97,	// (0x00091587) main_mp4_pane_g3_ParamLimits

0x5f97,	// (0x00091587) main_mp4_pane_g3

0x9fbb,	// (0x000955ab) main_mp4_pane_g4_ParamLimits

0x9fbb,	// (0x000955ab) main_mp4_pane_g4

0x9fe3,	// (0x000955d3) main_mp4_pane_g5_ParamLimits

0x9fe3,	// (0x000955d3) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0009ae8a) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0009ae8a) main_mp4_pane_g

0xa033,	// (0x00095623) main_mp4_pane_t1_ParamLimits

0xa033,	// (0x00095623) main_mp4_pane_t1

0xa08f,	// (0x0009567f) main_mp4_pane_t2_ParamLimits

0xa08f,	// (0x0009567f) main_mp4_pane_t2

0xd473,	// (0x00098a63) main_mp4_pane_t3_ParamLimits

0xd473,	// (0x00098a63) main_mp4_pane_t3

0xa0e1,	// (0x000956d1) main_mp4_pane_t4_ParamLimits

0xa0e1,	// (0x000956d1) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0009ae97) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0009ae97) main_mp4_pane_t

0xa125,	// (0x00095715) mp4_progress_pane_ParamLimits

0xa125,	// (0x00095715) mp4_progress_pane

0xa16f,	// (0x0009575f) mp4_rocker_pane_ParamLimits

0xa16f,	// (0x0009575f) mp4_rocker_pane

0xd49b,	// (0x00098a8b) mp4_progress_pane_t1

0xd4b4,	// (0x00098aa4) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0009aea0) mp4_progress_pane_t

0xd4cd,	// (0x00098abd) mup_progress_pane_cp04

0xcbc4,	// (0x000981b4) mp4_rocker_pane_g1

0x5fd3,	// (0x000915c3) aid_cell_size_keypad2_ParamLimits

0x5fd3,	// (0x000915c3) aid_cell_size_keypad2

0x5fe9,	// (0x000915d9) dialer2_ne_pane_ParamLimits

0x5fe9,	// (0x000915d9) dialer2_ne_pane

0x6003,	// (0x000915f3) grid_dialer2_keypad_pane_ParamLimits

0x6003,	// (0x000915f3) grid_dialer2_keypad_pane

0xc9a7,	// (0x00097f97) bg_popup_call_pane_cp07_ParamLimits

0xc9a7,	// (0x00097f97) bg_popup_call_pane_cp07

0x6021,	// (0x00091611) dialer2_ne_pane_t1_ParamLimits

0x6021,	// (0x00091611) dialer2_ne_pane_t1

0x605e,	// (0x0009164e) cell_dialer2_keypad_pane_ParamLimits

0x605e,	// (0x0009164e) cell_dialer2_keypad_pane

0xd4eb,	// (0x00098adb) bg_button_pane_pane_cp04_ParamLimits

0xd4eb,	// (0x00098adb) bg_button_pane_pane_cp04

0x6080,	// (0x00091670) cell_dialer2_keypad_pane_g1_ParamLimits

0x6080,	// (0x00091670) cell_dialer2_keypad_pane_g1

0x1fcf,	// (0x0008d5bf) aid_placing_vt_set_content_ParamLimits

0x1fcf,	// (0x0008d5bf) aid_placing_vt_set_content

0x1ff7,	// (0x0008d5e7) aid_placing_vt_set_title_ParamLimits

0x1ff7,	// (0x0008d5e7) aid_placing_vt_set_title

0x96d5,	// (0x00094cc5) main_image3_pane

0x6146,	// (0x00091736) area_side_right_pane_cp01_ParamLimits

0x6146,	// (0x00091736) area_side_right_pane_cp01

0x9fad,	// (0x0009559d) main_image3_pane_g1_ParamLimits

0x9fad,	// (0x0009559d) main_image3_pane_g1

0x615d,	// (0x0009174d) main_image3_pane_g2_ParamLimits

0x615d,	// (0x0009174d) main_image3_pane_g2

0x6185,	// (0x00091775) main_image3_pane_g3_ParamLimits

0x6185,	// (0x00091775) main_image3_pane_g3

0x61af,	// (0x0009179f) main_image3_pane_g4_ParamLimits

0x61af,	// (0x0009179f) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0009aeaf) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0009aeaf) main_image3_pane_g

0x61d9,	// (0x000917c9) main_image3_pane_t1_ParamLimits

0x61d9,	// (0x000917c9) main_image3_pane_t1

0x6231,	// (0x00091821) main_image3_pane_t2_ParamLimits

0x6231,	// (0x00091821) main_image3_pane_t2

0x6283,	// (0x00091873) main_image3_pane_t3_ParamLimits

0x6283,	// (0x00091873) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0009aeb8) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0009aeb8) main_image3_pane_t

0xa4c1,	// (0x00095ab1) grid_sctrl_middle_pane_cp01_ParamLimits

0xa4c1,	// (0x00095ab1) grid_sctrl_middle_pane_cp01

0x630b,	// (0x000918fb) cell_sctrl_middle_pane_cp01_ParamLimits

0x630b,	// (0x000918fb) cell_sctrl_middle_pane_cp01

0x6328,	// (0x00091918) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6328,	// (0x00091918) cell_sctrl_middle_pane_cp01_g1

0x96d5,	// (0x00094cc5) main_call4_pane

0x633e,	// (0x0009192e) aid_size_button_call4_ParamLimits

0x633e,	// (0x0009192e) aid_size_button_call4

0x636f,	// (0x0009195f) call4_windows_pane_ParamLimits

0x636f,	// (0x0009195f) call4_windows_pane

0x638f,	// (0x0009197f) grid_call4_button_pane_ParamLimits

0x638f,	// (0x0009197f) grid_call4_button_pane

0xd4f7,	// (0x00098ae7) call4_windows_conf_pane

0xd50c,	// (0x00098afc) popup_call4_audio_first_window_ParamLimits

0xd50c,	// (0x00098afc) popup_call4_audio_first_window

0xd558,	// (0x00098b48) popup_call4_audio_second_window_ParamLimits

0xd558,	// (0x00098b48) popup_call4_audio_second_window

0xd56c,	// (0x00098b5c) popup_call4_audio_wait_window_ParamLimits

0xd56c,	// (0x00098b5c) popup_call4_audio_wait_window

0x63bc,	// (0x000919ac) cell_call4_button_pane_ParamLimits

0x63bc,	// (0x000919ac) cell_call4_button_pane

0x63e5,	// (0x000919d5) bg_button_pane_cp09_ParamLimits

0x63e5,	// (0x000919d5) bg_button_pane_cp09

0x63f1,	// (0x000919e1) cell_call4_button_pane_g1_ParamLimits

0x63f1,	// (0x000919e1) cell_call4_button_pane_g1

0x6417,	// (0x00091a07) cell_call4_button_pane_t1_ParamLimits

0x6417,	// (0x00091a07) cell_call4_button_pane_t1

0xd5b4,	// (0x00098ba4) popup_call4_audio_conf_window_ParamLimits

0xd5b4,	// (0x00098ba4) popup_call4_audio_conf_window

0x5647,	// (0x00090c37) mup3_progress_pane_t1_ParamLimits

0x5666,	// (0x00090c56) mup3_progress_pane_t2_ParamLimits

0xce9f,	// (0x0009848f) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0009ad8c) mup3_progress_pane_t_ParamLimits

0xcebc,	// (0x000984ac) mup_progress_pane_cp03_ParamLimits

0x5c53,	// (0x00091243) mup3_control_keys_pane_g4_copy1

0xa153,	// (0x00095743) mp4_rocker2_pane_ParamLimits

0xa153,	// (0x00095743) mp4_rocker2_pane

0xd5c8,	// (0x00098bb8) mp4_rocker2_pane_g1

0xd5d0,	// (0x00098bc0) mp4_rocker2_pane_g2

0xa1c1,	// (0x000957b1) mp4_rocker2_pane_g3

0xa1c9,	// (0x000957b9) mp4_rocker2_pane_g4

0xa1d1,	// (0x000957c1) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0009aec1) mp4_rocker2_pane_g

0x96d5,	// (0x00094cc5) main_camera4_pane

0x96d5,	// (0x00094cc5) main_video4_pane

0x5ed6,	// (0x000914c6) main_video_tele_dialer_pane_t1_ParamLimits

0x5ed6,	// (0x000914c6) main_video_tele_dialer_pane_t1

0x5eef,	// (0x000914df) main_video_tele_dialer_pane_t2_ParamLimits

0x5eef,	// (0x000914df) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0009ae7b) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0009ae7b) main_video_tele_dialer_pane_t

0x6455,	// (0x00091a45) cam4_autofocus_pane_ParamLimits

0x6455,	// (0x00091a45) cam4_autofocus_pane

0x646b,	// (0x00091a5b) cam4_image_uncrop_pane_ParamLimits

0x646b,	// (0x00091a5b) cam4_image_uncrop_pane

0x6485,	// (0x00091a75) cam4_indicators_pane_ParamLimits

0x6485,	// (0x00091a75) cam4_indicators_pane

0x64b0,	// (0x00091aa0) main_camera4_pane_g1_ParamLimits

0x64b0,	// (0x00091aa0) main_camera4_pane_g1

0x64c2,	// (0x00091ab2) main_camera4_pane_g2_ParamLimits

0x64c2,	// (0x00091ab2) main_camera4_pane_g2

0x64d5,	// (0x00091ac5) main_camera4_pane_g3_ParamLimits

0x64d5,	// (0x00091ac5) main_camera4_pane_g3

0x64e8,	// (0x00091ad8) main_camera4_pane_g4_ParamLimits

0x64e8,	// (0x00091ad8) main_camera4_pane_g4

0x64fb,	// (0x00091aeb) main_camera4_pane_g5_ParamLimits

0x64fb,	// (0x00091aeb) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0009aecc) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0009aecc) main_camera4_pane_g

0x651f,	// (0x00091b0f) main_camera4_pane_t1_ParamLimits

0x651f,	// (0x00091b0f) main_camera4_pane_t1

0xce24,	// (0x00098414) bg_tb_trans_pane_cp06

0xa1fd,	// (0x000957ed) cam4_indicators_pane_g1

0xa20e,	// (0x000957fe) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0009aee7) cam4_indicators_pane_g

0xa22c,	// (0x0009581c) cam4_indicators_pane_t1

0x6583,	// (0x00091b73) main_video4_pane_g1_ParamLimits

0x6583,	// (0x00091b73) main_video4_pane_g1

0x6592,	// (0x00091b82) main_video4_pane_g2_ParamLimits

0x6592,	// (0x00091b82) main_video4_pane_g2

0x65a1,	// (0x00091b91) main_video4_pane_g3_ParamLimits

0x65a1,	// (0x00091b91) main_video4_pane_g3

0x65b0,	// (0x00091ba0) main_video4_pane_g4_ParamLimits

0x65b0,	// (0x00091ba0) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0009aeee) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0009aeee) main_video4_pane_g

0x65ce,	// (0x00091bbe) vid4_indicators_pane_ParamLimits

0x65ce,	// (0x00091bbe) vid4_indicators_pane

0x65fc,	// (0x00091bec) video4_image_uncrop_cif_pane_ParamLimits

0x65fc,	// (0x00091bec) video4_image_uncrop_cif_pane

0x6616,	// (0x00091c06) video4_image_uncrop_nhd_pane_ParamLimits

0x6616,	// (0x00091c06) video4_image_uncrop_nhd_pane

0x646b,	// (0x00091a5b) video4_image_uncrop_vga_pane_ParamLimits

0x646b,	// (0x00091a5b) video4_image_uncrop_vga_pane

0xa4c1,	// (0x00095ab1) bg_tb_trans_pane_cp07

0xa256,	// (0x00095846) vid4_indicators_pane_g1

0xa26a,	// (0x0009585a) vid4_indicators_pane_g2

0xa27e,	// (0x0009586e) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0009aef9) vid4_indicators_pane_g

0xa2ab,	// (0x0009589b) vid4_indicators_pane_t1

0x662a,	// (0x00091c1a) cam4_autofocus_pane_g1

0x6632,	// (0x00091c22) cam4_autofocus_pane_g2

0x663a,	// (0x00091c2a) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0009af04) cam4_autofocus_pane_g

0x6642,	// (0x00091c32) cam4_autofocus_pane_g3_copy1

0x5f1e,	// (0x0009150e) video_down_pane_cp_t1

0x5f2c,	// (0x0009151c) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0009ae80) video_down_pane_cp_t

0xa4c1,	// (0x00095ab1) popup_vitu2_window_ParamLimits

0xa4c1,	// (0x00095ab1) popup_vitu2_window

0x664a,	// (0x00091c3a) aid_size_cell2_itu2_ParamLimits

0x664a,	// (0x00091c3a) aid_size_cell2_itu2

0x6670,	// (0x00091c60) aid_size_cell_itu2_ParamLimits

0x6670,	// (0x00091c60) aid_size_cell_itu2

0x66cb,	// (0x00091cbb) bg_popup_window_pane_cp09_ParamLimits

0x66cb,	// (0x00091cbb) bg_popup_window_pane_cp09

0x66d9,	// (0x00091cc9) field_vitu2_entry_pane_ParamLimits

0x66d9,	// (0x00091cc9) field_vitu2_entry_pane

0x66fc,	// (0x00091cec) grid_vitu2_function_pane_ParamLimits

0x66fc,	// (0x00091cec) grid_vitu2_function_pane

0x6747,	// (0x00091d37) grid_vitu2_itu_pane_ParamLimits

0x6747,	// (0x00091d37) grid_vitu2_itu_pane

0x67da,	// (0x00091dca) cell_vitu2_itu_pane_ParamLimits

0x67da,	// (0x00091dca) cell_vitu2_itu_pane

0x6806,	// (0x00091df6) cell_vitu2_function_pane_ParamLimits

0x6806,	// (0x00091df6) cell_vitu2_function_pane

0xd5ea,	// (0x00098bda) bg_popup_call_pane_cp08_ParamLimits

0xd5ea,	// (0x00098bda) bg_popup_call_pane_cp08

0xd601,	// (0x00098bf1) field_vitu2_entry_pane_g1

0xd60d,	// (0x00098bfd) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0009af0b) field_vitu2_entry_pane_g

0x033f,	// (0x0008b92f) field_vitu2_entry_pane_t1_ParamLimits

0x033f,	// (0x0008b92f) field_vitu2_entry_pane_t1

0x6845,	// (0x00091e35) field_vitu2_entry_pane_t2_ParamLimits

0x6845,	// (0x00091e35) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0009af12) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0009af12) field_vitu2_entry_pane_t

0x6862,	// (0x00091e52) bg_button_pane_cp010_ParamLimits

0x6862,	// (0x00091e52) bg_button_pane_cp010

0xa2c2,	// (0x000958b2) cell_vitu2_itu_pane_g1

0x687e,	// (0x00091e6e) cell_vitu2_itu_pane_t1_ParamLimits

0x687e,	// (0x00091e6e) cell_vitu2_itu_pane_t1

0x036f,	// (0x0008b95f) cell_vitu2_itu_pane_t2_ParamLimits

0x036f,	// (0x0008b95f) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0009af1c) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0009af1c) cell_vitu2_itu_pane_t

0xa4c1,	// (0x00095ab1) bg_button_pane_cp011

0x68dc,	// (0x00091ecc) cell_vitu2_function_pane_g1

0x96d5,	// (0x00094cc5) main_myfav_hc_pane

0x62d3,	// (0x000918c3) popup_image3_note_pane_ParamLimits

0x62d3,	// (0x000918c3) popup_image3_note_pane

0x62ef,	// (0x000918df) popup_image3_tool_bar_pane_ParamLimits

0x62ef,	// (0x000918df) popup_image3_tool_bar_pane

0x03fd,	// (0x0008b9ed) cell_vitu2_itu_pane_t3_ParamLimits

0x03fd,	// (0x0008b9ed) cell_vitu2_itu_pane_t3

0x96d5,	// (0x00094cc5) bg_popup_trans_pane

0xd62f,	// (0x00098c1f) grid_image3_tool_bar_pane

0xd639,	// (0x00098c29) bg_popup_trans_pane_g1

0xab21,	// (0x00096111) bg_popup_trans_pane_g2

0xd641,	// (0x00098c31) bg_popup_trans_pane_g3

0xd649,	// (0x00098c39) bg_popup_trans_pane_g4

0xd651,	// (0x00098c41) bg_popup_trans_pane_g5

0xd659,	// (0x00098c49) bg_popup_trans_pane_g6

0xd661,	// (0x00098c51) bg_popup_trans_pane_g7

0xd669,	// (0x00098c59) bg_popup_trans_pane_g8

0xab01,	// (0x000960f1) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0009af23) bg_popup_trans_pane_g

0xd671,	// (0x00098c61) cell_image3_tool_bar_pane_ParamLimits

0xd671,	// (0x00098c61) cell_image3_tool_bar_pane

0xcbc4,	// (0x000981b4) cell_image3_tool_bar_pane_g1

0x96d5,	// (0x00094cc5) bg_popup_trans_pane_cp1

0xd685,	// (0x00098c75) popup_image3_note_pane_t1

0xd693,	// (0x00098c83) popup_image3_note_pane_t2

0xd6a1,	// (0x00098c91) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0009af36) popup_image3_note_pane_t

0xd6af,	// (0x00098c9f) popup_image3_note_pane_t3_copy1

0x68f0,	// (0x00091ee0) bg_myfav_hc_instruction_pane_ParamLimits

0x68f0,	// (0x00091ee0) bg_myfav_hc_instruction_pane

0x6906,	// (0x00091ef6) cell_myfav_contact_pane_ParamLimits

0x6906,	// (0x00091ef6) cell_myfav_contact_pane

0x6924,	// (0x00091f14) cell_myfav_contact_pane_cp1_ParamLimits

0x6924,	// (0x00091f14) cell_myfav_contact_pane_cp1

0x693c,	// (0x00091f2c) cell_myfav_contact_pane_cp2_ParamLimits

0x693c,	// (0x00091f2c) cell_myfav_contact_pane_cp2

0x6954,	// (0x00091f44) cell_myfav_contact_pane_cp3_ParamLimits

0x6954,	// (0x00091f44) cell_myfav_contact_pane_cp3

0x696b,	// (0x00091f5b) cell_myfav_contact_pane_cp4_ParamLimits

0x696b,	// (0x00091f5b) cell_myfav_contact_pane_cp4

0x6983,	// (0x00091f73) cell_myfav_contact_pane_cp5_ParamLimits

0x6983,	// (0x00091f73) cell_myfav_contact_pane_cp5

0x6997,	// (0x00091f87) cell_myfav_contact_pane_cp6_ParamLimits

0x6997,	// (0x00091f87) cell_myfav_contact_pane_cp6

0x69ad,	// (0x00091f9d) cell_myfav_contact_pane_cp7_ParamLimits

0x69ad,	// (0x00091f9d) cell_myfav_contact_pane_cp7

0xd6bd,	// (0x00098cad) listscroll_gen_pane_cp05

0x69c7,	// (0x00091fb7) main_myfav_hc_pane_g1_ParamLimits

0x69c7,	// (0x00091fb7) main_myfav_hc_pane_g1

0x69e1,	// (0x00091fd1) main_myfav_hc_pane_g2_ParamLimits

0x69e1,	// (0x00091fd1) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0009af3d) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0009af3d) main_myfav_hc_pane_g

0x6a13,	// (0x00092003) main_myfav_hc_pane_t1_ParamLimits

0x6a13,	// (0x00092003) main_myfav_hc_pane_t1

0xd6c6,	// (0x00098cb6) main_myfav_hc_pane_t2_ParamLimits

0xd6c6,	// (0x00098cb6) main_myfav_hc_pane_t2

0xd6d8,	// (0x00098cc8) main_myfav_hc_pane_t3_ParamLimits

0xd6d8,	// (0x00098cc8) main_myfav_hc_pane_t3

0x6a2a,	// (0x0009201a) main_myfav_hc_pane_t4_ParamLimits

0x6a2a,	// (0x0009201a) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0009af44) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0009af44) main_myfav_hc_pane_t

0xcbc4,	// (0x000981b4) bg_myfav_hc_instruction_pane_g1

0xd6ea,	// (0x00098cda) cell_myfav_contact_pane_g1_ParamLimits

0xd6ea,	// (0x00098cda) cell_myfav_contact_pane_g1

0xd6ea,	// (0x00098cda) cell_myfav_contact_pane_g2_ParamLimits

0xd6ea,	// (0x00098cda) cell_myfav_contact_pane_g2

0xd6f6,	// (0x00098ce6) cell_myfav_contact_pane_g3_ParamLimits

0xd6f6,	// (0x00098ce6) cell_myfav_contact_pane_g3

0xce89,	// (0x00098479) cell_myfav_contact_pane_g4_ParamLimits

0xce89,	// (0x00098479) cell_myfav_contact_pane_g4

0xd703,	// (0x00098cf3) cell_myfav_contact_pane_g5_ParamLimits

0xd703,	// (0x00098cf3) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0009af4f) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0009af4f) cell_myfav_contact_pane_g

0x69fb,	// (0x00091feb) main_myfav_hc_pane_g3_ParamLimits

0x69fb,	// (0x00091feb) main_myfav_hc_pane_g3

0x1024,	// (0x0008c614) popup_adpt_find_window

0x6a52,	// (0x00092042) afind_page_pane_ParamLimits

0x6a52,	// (0x00092042) afind_page_pane

0x6a67,	// (0x00092057) aid_size_cell_afind_ParamLimits

0x6a67,	// (0x00092057) aid_size_cell_afind

0x6a85,	// (0x00092075) bg_popup_sub_pane_cp09_ParamLimits

0x6a85,	// (0x00092075) bg_popup_sub_pane_cp09

0x6a92,	// (0x00092082) find_pane_cp01_ParamLimits

0x6a92,	// (0x00092082) find_pane_cp01

0xd70f,	// (0x00098cff) grid_afind_control_pane_ParamLimits

0xd70f,	// (0x00098cff) grid_afind_control_pane

0x6a9f,	// (0x0009208f) grid_afind_pane_ParamLimits

0x6a9f,	// (0x0009208f) grid_afind_pane

0x6abe,	// (0x000920ae) cell_afind_pane_ParamLimits

0x6abe,	// (0x000920ae) cell_afind_pane

0xcbc4,	// (0x000981b4) afind_page_pane_g1

0x6b25,	// (0x00092115) afind_page_pane_g2

0x6b2e,	// (0x0009211e) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0009af5a) afind_page_pane_g

0x6b37,	// (0x00092127) afind_page_pane_t1

0xd723,	// (0x00098d13) cell_afind_grid_control_pane_ParamLimits

0xd723,	// (0x00098d13) cell_afind_grid_control_pane

0xd4eb,	// (0x00098adb) bg_button_pane_cp69_ParamLimits

0xd4eb,	// (0x00098adb) bg_button_pane_cp69

0x6b57,	// (0x00092147) cell_afind_pane_g1_ParamLimits

0x6b57,	// (0x00092147) cell_afind_pane_g1

0x6b64,	// (0x00092154) cell_afind_pane_t1_ParamLimits

0x6b64,	// (0x00092154) cell_afind_pane_t1

0xa91a,	// (0x00095f0a) bg_button_pane_cp72

0xd732,	// (0x00098d22) cell_afind_grid_control_pane_g1

0x3bca,	// (0x0008f1ba) aid_image_placing_area_ParamLimits

0x3bca,	// (0x0008f1ba) aid_image_placing_area

0xd1b9,	// (0x000987a9) field_vitu_entry_pane_g1_ParamLimits

0xd1b9,	// (0x000987a9) field_vitu_entry_pane_g1

0xd1c5,	// (0x000987b5) field_vitu_entry_pane_g2_ParamLimits

0xd1c5,	// (0x000987b5) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0009ae0b) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0009ae0b) field_vitu_entry_pane_g

0x5d1f,	// (0x0009130f) cell_vitu_itu_pane_g1_ParamLimits

0x5d6f,	// (0x0009135f) cell_vitu_itu_pane_t3_ParamLimits

0x5d6f,	// (0x0009135f) cell_vitu_itu_pane_t3

0xd49b,	// (0x00098a8b) mp4_progress_pane_t1_ParamLimits

0xd4b4,	// (0x00098aa4) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0009aea0) mp4_progress_pane_t_ParamLimits

0xd4cd,	// (0x00098abd) mup_progress_pane_cp04_ParamLimits

0x6a3e,	// (0x0009202e) main_myfav_hc_pane_t5_ParamLimits

0x6a3e,	// (0x0009202e) main_myfav_hc_pane_t5

0x0ee5,	// (0x0008c4d5) aid_zoom_text_primary

0x1024,	// (0x0008c614) popup_adpt_find_window_ParamLimits

0xa4c1,	// (0x00095ab1) main_cam_set_pane

0x649c,	// (0x00091a8c) cam4_zoom_pane_ParamLimits

0x649c,	// (0x00091a8c) cam4_zoom_pane

0x6b76,	// (0x00092166) main_cam_set_pane_g1_ParamLimits

0x6b76,	// (0x00092166) main_cam_set_pane_g1

0x6b84,	// (0x00092174) main_cam_set_pane_g2_ParamLimits

0x6b84,	// (0x00092174) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0009af61) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0009af61) main_cam_set_pane_g

0x6ba5,	// (0x00092195) main_cam_set_pane_t1_ParamLimits

0x6ba5,	// (0x00092195) main_cam_set_pane_t1

0x6bc0,	// (0x000921b0) main_cset_listscroll_pane_ParamLimits

0x6bc0,	// (0x000921b0) main_cset_listscroll_pane

0x6be0,	// (0x000921d0) main_cset_slider_pane_ParamLimits

0x6be0,	// (0x000921d0) main_cset_slider_pane

0xd743,	// (0x00098d33) main_cset_list_pane_ParamLimits

0xd743,	// (0x00098d33) main_cset_list_pane

0xd753,	// (0x00098d43) scroll_pane_cp028

0x6c06,	// (0x000921f6) aid_area_touch_slider

0x6c22,	// (0x00092212) cset_slider_pane

0x6c4c,	// (0x0009223c) main_cset_slider_pane_g1

0x6c61,	// (0x00092251) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0009af66) main_cset_slider_pane_g

0xd78c,	// (0x00098d7c) main_cset_slider_pane_t1

0x6d1d,	// (0x0009230d) main_cset_slider_pane_t2

0x6d37,	// (0x00092327) main_cset_slider_pane_t3

0x6d51,	// (0x00092341) main_cset_slider_pane_t4

0x6d6b,	// (0x0009235b) main_cset_slider_pane_t5

0x6d85,	// (0x00092375) main_cset_slider_pane_t6

0x6d9a,	// (0x0009238a) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0009af8b) main_cset_slider_pane_t

0x6e9e,	// (0x0009248e) cset_list_set_pane_ParamLimits

0x6e9e,	// (0x0009248e) cset_list_set_pane

0x6eb1,	// (0x000924a1) aid_position_infowindow_above

0x6eb9,	// (0x000924a9) aid_position_infowindow_below

0x6ec1,	// (0x000924b1) cset_list_set_pane_g1_ParamLimits

0x6ec1,	// (0x000924b1) cset_list_set_pane_g1

0x6ecd,	// (0x000924bd) cset_list_set_pane_g3_ParamLimits

0x6ecd,	// (0x000924bd) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0009afaa) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0009afaa) cset_list_set_pane_g

0x6edc,	// (0x000924cc) cset_list_set_pane_t1_ParamLimits

0x6edc,	// (0x000924cc) cset_list_set_pane_t1

0xa4c1,	// (0x00095ab1) list_highlight_pane_cp021_ParamLimits

0xa4c1,	// (0x00095ab1) list_highlight_pane_cp021

0xb4d9,	// (0x00096ac9) cset_slider_pane_g1

0xb4eb,	// (0x00096adb) cset_slider_pane_g2

0xb4e2,	// (0x00096ad2) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0009afaf) cset_slider_pane_g

0xa2d4,	// (0x000958c4) aid_area_touch_cam4_zoom

0xa2dc,	// (0x000958cc) cam4_zoom_cont_pane

0xa2e4,	// (0x000958d4) cam4_zoom_pane_g1

0xa2ec,	// (0x000958dc) cam4_zoom_pane_g2

0x6ef1,	// (0x000924e1) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0009afb6) cam4_zoom_pane_g

0xdbc6,	// (0x000991b6) cam4_zoom_cont_pane_g1

0xdbcf,	// (0x000991bf) cam4_zoom_cont_pane_g2

0xdbd8,	// (0x000991c8) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0009afbd) cam4_zoom_cont_pane_g

0x635c,	// (0x0009194c) call4_image_pane_ParamLimits

0x635c,	// (0x0009194c) call4_image_pane

0xd4f7,	// (0x00098ae7) call4_windows_conf_pane_ParamLimits

0xd536,	// (0x00098b26) popup_call4_audio_in_window_ParamLimits

0xd536,	// (0x00098b26) popup_call4_audio_in_window

0x96d5,	// (0x00094cc5) bg_popup_call2_act_pane_cp02

0xd5ac,	// (0x00098b9c) call4_list_conf_pane

0xcbc4,	// (0x000981b4) call4_image_pane_g1

0xcbc4,	// (0x000981b4) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0009accc) call4_image_pane_g

0xd82c,	// (0x00098e1c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd82c,	// (0x00098e1c) list_single_graphic_popup_conf4_pane

0x96d5,	// (0x00094cc5) list_highlight_pane_cp022

0xd83f,	// (0x00098e2f) list_single_graphic_popup_conf4_pane_g1

0xb067,	// (0x00096657) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0009afc4) list_single_graphic_popup_conf4_pane_g

0xd847,	// (0x00098e37) list_single_graphic_popup_conf4_pane_t1

0x211b,	// (0x0008d70b) popup_vtel_slider_window_ParamLimits

0x211b,	// (0x0008d70b) popup_vtel_slider_window

0xd4d9,	// (0x00098ac9) dialer2_ne_pane_t2_ParamLimits

0xd4d9,	// (0x00098ac9) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0009aea5) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0009aea5) dialer2_ne_pane_t

0xc9a7,	// (0x00097f97) bg_popup_sub_pane_cp010_ParamLimits

0xc9a7,	// (0x00097f97) bg_popup_sub_pane_cp010

0x6ef9,	// (0x000924e9) popup_vtel_slider_window_g1_ParamLimits

0x6ef9,	// (0x000924e9) popup_vtel_slider_window_g1

0x6f0c,	// (0x000924fc) popup_vtel_slider_window_g2_ParamLimits

0x6f0c,	// (0x000924fc) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0009afc9) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0009afc9) popup_vtel_slider_window_g

0x6f62,	// (0x00092552) vtel_slider_pane_ParamLimits

0x6f62,	// (0x00092552) vtel_slider_pane

0x6f84,	// (0x00092574) vtel_slider_pane_g1_ParamLimits

0x6f84,	// (0x00092574) vtel_slider_pane_g1

0x6f98,	// (0x00092588) vtel_slider_pane_g2_ParamLimits

0x6f98,	// (0x00092588) vtel_slider_pane_g2

0x6fb0,	// (0x000925a0) vtel_slider_pane_g3_ParamLimits

0x6fb0,	// (0x000925a0) vtel_slider_pane_g3

0x6f84,	// (0x00092574) vtel_slider_pane_g4_ParamLimits

0x6f84,	// (0x00092574) vtel_slider_pane_g4

0x6fc6,	// (0x000925b6) vtel_slider_pane_g5_ParamLimits

0x6fc6,	// (0x000925b6) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0009afd2) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0009afd2) vtel_slider_pane_g

0xa4c1,	// (0x00095ab1) main_gallery2_pane

0x669c,	// (0x00091c8c) aid_size_row_itut2_dropdow_list_ParamLimits

0x669c,	// (0x00091c8c) aid_size_row_itut2_dropdow_list

0x6721,	// (0x00091d11) grid_vitu2_function_top_pane_ParamLimits

0x6721,	// (0x00091d11) grid_vitu2_function_top_pane

0x6788,	// (0x00091d78) popup_vitu2_dropdown_list_window_ParamLimits

0x6788,	// (0x00091d78) popup_vitu2_dropdown_list_window

0x67ae,	// (0x00091d9e) popup_vitu2_match_list_window

0x6fdc,	// (0x000925cc) cell_vitu2_function_top_pane_ParamLimits

0x6fdc,	// (0x000925cc) cell_vitu2_function_top_pane

0x6ffe,	// (0x000925ee) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ffe,	// (0x000925ee) cell_vitu2_function_top_pane_cp01

0x701a,	// (0x0009260a) cell_vitu2_function_top_wide_pane_ParamLimits

0x701a,	// (0x0009260a) cell_vitu2_function_top_wide_pane

0xa4c1,	// (0x00095ab1) bg_button_pane_cp012

0x7036,	// (0x00092626) cell_vitu2_function_top_pane_g1

0xa2f4,	// (0x000958e4) bg_button_pane_cp013_ParamLimits

0xa2f4,	// (0x000958e4) bg_button_pane_cp013

0x704a,	// (0x0009263a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x704a,	// (0x0009263a) cell_vitu2_function_top_wide_pane_g1

0xa4c1,	// (0x00095ab1) bg_popup_sub_pane_cp20

0x7062,	// (0x00092652) list_vitu2_match_list_pane

0xd639,	// (0x00098c29) bg_popup_sub_pane_cp20_g1

0xd641,	// (0x00098c31) bg_popup_sub_pane_cp20_g2

0xab21,	// (0x00096111) bg_popup_sub_pane_cp20_g3

0xd649,	// (0x00098c39) bg_popup_sub_pane_cp20_g4

0xab01,	// (0x000960f1) bg_popup_sub_pane_cp20_g5

0xd85d,	// (0x00098e4d) bg_popup_sub_pane_cp20_g6

0xd659,	// (0x00098c49) bg_popup_sub_pane_cp20_g7

0xd661,	// (0x00098c51) bg_popup_sub_pane_cp20_g8

0xd669,	// (0x00098c59) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0009afdd) bg_popup_sub_pane_cp20_g

0xa310,	// (0x00095900) list_vitu2_match_list_item_pane_ParamLimits

0xa310,	// (0x00095900) list_vitu2_match_list_item_pane

0xa322,	// (0x00095912) list_vitu2_match_list_item_pane_t1

0x96d5,	// (0x00094cc5) bg_popup_sub_pane_cp21

0xaf6b,	// (0x0009655b) grid_vitu2_dropdown_list_pane

0x708c,	// (0x0009267c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x708c,	// (0x0009267c) cell_vitu2_dropdown_list_char_pane

0x70ad,	// (0x0009269d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x70ad,	// (0x0009269d) cell_vitu2_dropdown_list_ctrl_pane

0xd865,	// (0x00098e55) cell_vitu2_dropdown_list_char_pane_g1

0xd86e,	// (0x00098e5e) cell_vitu2_dropdown_list_char_pane_g2

0xd877,	// (0x00098e67) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0009affa) cell_vitu2_dropdown_list_char_pane_g

0x70d9,	// (0x000926c9) cell_vitu2_dropdown_list_char_pane_t1

0x70e7,	// (0x000926d7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70e7,	// (0x000926d7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70f7,	// (0x000926e7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70f7,	// (0x000926e7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7108,	// (0x000926f8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7108,	// (0x000926f8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7118,	// (0x00092708) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7118,	// (0x00092708) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce24,	// (0x00098414) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce24,	// (0x00098414) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0009b001) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0009b001) cell_vitu2_dropdown_list_ctrl_pane_g

0x7134,	// (0x00092724) aid_size_cell_gallery2_ParamLimits

0x7134,	// (0x00092724) aid_size_cell_gallery2

0x7152,	// (0x00092742) grid_gallery2_pane_ParamLimits

0x7152,	// (0x00092742) grid_gallery2_pane

0x716c,	// (0x0009275c) scroll_pane_cp029_ParamLimits

0x716c,	// (0x0009275c) scroll_pane_cp029

0x7178,	// (0x00092768) cell_gallery2_pane_ParamLimits

0x7178,	// (0x00092768) cell_gallery2_pane

0xd880,	// (0x00098e70) cell_gallery2_pane_g2

0x71d4,	// (0x000927c4) cell_gallery2_pane_g3

0xd888,	// (0x00098e78) cell_gallery2_pane_g4

0xd890,	// (0x00098e80) cell_gallery2_pane_g5

0xa8c8,	// (0x00095eb8) grid_highlight_pane_cp10

0x67ae,	// (0x00091d9e) popup_vitu2_match_list_window_ParamLimits

0x67c3,	// (0x00091db3) popup_vitu2_query_window_ParamLimits

0x67c3,	// (0x00091db3) popup_vitu2_query_window

0x96d5,	// (0x00094cc5) bg_vitu2_candi_button_pane

0xd865,	// (0x00098e55) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd86e,	// (0x00098e5e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd877,	// (0x00098e67) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x04a7,	// (0x0008ba97) bg_button_pane_cp015

0x71dc,	// (0x000927cc) bg_button_pane_cp016

0x71ef,	// (0x000927df) bg_button_pane_cp017

0xc7ba,	// (0x00097daa) bg_popup_sub_pane_cp22

0xd898,	// (0x00098e88) popup_vitu2_query_window_g1

0x04dc,	// (0x0008bacc) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0009b00c) popup_vitu2_query_window_g

0x04ef,	// (0x0008badf) popup_vitu2_query_window_t1_ParamLimits

0x04ef,	// (0x0008badf) popup_vitu2_query_window_t1

0x0524,	// (0x0008bb14) popup_vitu2_query_window_t2_ParamLimits

0x0524,	// (0x0008bb14) popup_vitu2_query_window_t2

0x0536,	// (0x0008bb26) popup_vitu2_query_window_t3_ParamLimits

0x0536,	// (0x0008bb26) popup_vitu2_query_window_t3

0x721f,	// (0x0009280f) popup_vitu2_query_window_t4_ParamLimits

0x721f,	// (0x0009280f) popup_vitu2_query_window_t4

0x7240,	// (0x00092830) popup_vitu2_query_window_t5_ParamLimits

0x7240,	// (0x00092830) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0009b013) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0009b013) popup_vitu2_query_window_t

0xd73b,	// (0x00098d2b) main_cset_text_pane

0x6c06,	// (0x000921f6) aid_area_touch_slider_ParamLimits

0x6c22,	// (0x00092212) cset_slider_pane_ParamLimits

0x6c4c,	// (0x0009223c) main_cset_slider_pane_g1_ParamLimits

0x6c61,	// (0x00092251) main_cset_slider_pane_g2_ParamLimits

0xd75c,	// (0x00098d4c) main_cset_slider_pane_g3_ParamLimits

0xd75c,	// (0x00098d4c) main_cset_slider_pane_g3

0x6c76,	// (0x00092266) main_cset_slider_pane_g4_ParamLimits

0x6c76,	// (0x00092266) main_cset_slider_pane_g4

0x6c85,	// (0x00092275) main_cset_slider_pane_g5_ParamLimits

0x6c85,	// (0x00092275) main_cset_slider_pane_g5

0x6c91,	// (0x00092281) main_cset_slider_pane_g6_ParamLimits

0x6c91,	// (0x00092281) main_cset_slider_pane_g6

0xf976,	// (0x0009af66) main_cset_slider_pane_g_ParamLimits

0xd78c,	// (0x00098d7c) main_cset_slider_pane_t1_ParamLimits

0x6d1d,	// (0x0009230d) main_cset_slider_pane_t2_ParamLimits

0x6d37,	// (0x00092327) main_cset_slider_pane_t3_ParamLimits

0x6d51,	// (0x00092341) main_cset_slider_pane_t4_ParamLimits

0x6d6b,	// (0x0009235b) main_cset_slider_pane_t5_ParamLimits

0x6d85,	// (0x00092375) main_cset_slider_pane_t6_ParamLimits

0x6d9a,	// (0x0009238a) main_cset_slider_pane_t7_ParamLimits

0x6dc4,	// (0x000923b4) main_cset_slider_pane_t8_ParamLimits

0x6dc4,	// (0x000923b4) main_cset_slider_pane_t8

0x6dec,	// (0x000923dc) main_cset_slider_pane_t9_ParamLimits

0x6dec,	// (0x000923dc) main_cset_slider_pane_t9

0x6e14,	// (0x00092404) main_cset_slider_pane_t10_ParamLimits

0x6e14,	// (0x00092404) main_cset_slider_pane_t10

0x6e3c,	// (0x0009242c) main_cset_slider_pane_t11_ParamLimits

0x6e3c,	// (0x0009242c) main_cset_slider_pane_t11

0x6e64,	// (0x00092454) main_cset_slider_pane_t12_ParamLimits

0x6e64,	// (0x00092454) main_cset_slider_pane_t12

0x6e81,	// (0x00092471) main_cset_slider_pane_t13_ParamLimits

0x6e81,	// (0x00092471) main_cset_slider_pane_t13

0xf99b,	// (0x0009af8b) main_cset_slider_pane_t_ParamLimits

0x96d5,	// (0x00094cc5) bg_popup_sub_pane_cp011

0xd8a4,	// (0x00098e94) main_cset_text_pane_g1

0xd8ac,	// (0x00098e9c) main_cset_text_pane_t1

0xd8ba,	// (0x00098eaa) main_cset_text_pane_t2

0xd8c8,	// (0x00098eb8) main_cset_text_pane_t3

0xd8d6,	// (0x00098ec6) main_cset_text_pane_t4

0xd8e4,	// (0x00098ed4) main_cset_text_pane_t5

0xd8f2,	// (0x00098ee2) main_cset_text_pane_t6

0xd900,	// (0x00098ef0) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0009b022) main_cset_text_pane_t

0x96d5,	// (0x00094cc5) main_cam4_burst_pane

0x96d5,	// (0x00094cc5) main_cam5_pane

0x6b45,	// (0x00092135) bg_button_pane_cp019

0x6b4e,	// (0x0009213e) bg_button_pane_cp020

0xd768,	// (0x00098d58) main_cset_slider_pane_g7_ParamLimits

0xd768,	// (0x00098d58) main_cset_slider_pane_g7

0xd774,	// (0x00098d64) main_cset_slider_pane_g8_ParamLimits

0xd774,	// (0x00098d64) main_cset_slider_pane_g8

0x6ca5,	// (0x00092295) main_cset_slider_pane_g9_ParamLimits

0x6ca5,	// (0x00092295) main_cset_slider_pane_g9

0x6cb1,	// (0x000922a1) main_cset_slider_pane_g10_ParamLimits

0x6cb1,	// (0x000922a1) main_cset_slider_pane_g10

0x6cbd,	// (0x000922ad) main_cset_slider_pane_g11_ParamLimits

0x6cbd,	// (0x000922ad) main_cset_slider_pane_g11

0x6cc9,	// (0x000922b9) main_cset_slider_pane_g12_ParamLimits

0x6cc9,	// (0x000922b9) main_cset_slider_pane_g12

0x6cd5,	// (0x000922c5) main_cset_slider_pane_g13_ParamLimits

0x6cd5,	// (0x000922c5) main_cset_slider_pane_g13

0x6ce1,	// (0x000922d1) main_cset_slider_pane_g14_ParamLimits

0x6ce1,	// (0x000922d1) main_cset_slider_pane_g14

0x6ced,	// (0x000922dd) main_cset_slider_pane_g15_ParamLimits

0x6ced,	// (0x000922dd) main_cset_slider_pane_g15

0xd7ba,	// (0x00098daa) main_cset_slider_pane_t14_ParamLimits

0xd7ba,	// (0x00098daa) main_cset_slider_pane_t14

0xd7f3,	// (0x00098de3) main_cset_slider_pane_t15_ParamLimits

0xd7f3,	// (0x00098de3) main_cset_slider_pane_t15

0x72b7,	// (0x000928a7) aid_cam4_burst_size_cell_ParamLimits

0x72b7,	// (0x000928a7) aid_cam4_burst_size_cell

0x72d7,	// (0x000928c7) grid_cam4_burst_pane_ParamLimits

0x72d7,	// (0x000928c7) grid_cam4_burst_pane

0x730f,	// (0x000928ff) linegrid_cam4_burst_pane_ParamLimits

0x730f,	// (0x000928ff) linegrid_cam4_burst_pane

0xd90e,	// (0x00098efe) scroll_pane_cp30_ParamLimits

0xd90e,	// (0x00098efe) scroll_pane_cp30

0x7335,	// (0x00092925) cell_cam4_burst_pane_ParamLimits

0x7335,	// (0x00092925) cell_cam4_burst_pane

0xd91a,	// (0x00098f0a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd91a,	// (0x00098f0a) linegrid_cam4_burst_pane_g1

0x7382,	// (0x00092972) linegrid_cam4_burst_pane_g2_ParamLimits

0x7382,	// (0x00092972) linegrid_cam4_burst_pane_g2

0xd927,	// (0x00098f17) linegrid_cam4_burst_pane_g3_ParamLimits

0xd927,	// (0x00098f17) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0009b031) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0009b031) linegrid_cam4_burst_pane_g

0x7393,	// (0x00092983) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7393,	// (0x00092983) linegrid_cam4_burst_pane_g3_copy1

0xd934,	// (0x00098f24) linegrid_cam4_burst_pane_g4_ParamLimits

0xd934,	// (0x00098f24) linegrid_cam4_burst_pane_g4

0x73ad,	// (0x0009299d) linegrid_cam4_burst_pane_g5_ParamLimits

0x73ad,	// (0x0009299d) linegrid_cam4_burst_pane_g5

0x73be,	// (0x000929ae) linegrid_cam4_burst_pane_g6_ParamLimits

0x73be,	// (0x000929ae) linegrid_cam4_burst_pane_g6

0xd941,	// (0x00098f31) linegrid_cam4_burst_pane_g7_ParamLimits

0xd941,	// (0x00098f31) linegrid_cam4_burst_pane_g7

0x73d5,	// (0x000929c5) cell_cam4_burst_pane_g1

0xd95a,	// (0x00098f4a) main_cam5_pane_t1_ParamLimits

0xd95a,	// (0x00098f4a) main_cam5_pane_t1

0xd96c,	// (0x00098f5c) main_cam5_pane_t2_ParamLimits

0xd96c,	// (0x00098f5c) main_cam5_pane_t2

0xd97e,	// (0x00098f6e) main_cam5_pane_t3_ParamLimits

0xd97e,	// (0x00098f6e) main_cam5_pane_t3

0xd990,	// (0x00098f80) main_cam5_pane_t4_ParamLimits

0xd990,	// (0x00098f80) main_cam5_pane_t4

0xd9a8,	// (0x00098f98) main_cam5_pane_t5_ParamLimits

0xd9a8,	// (0x00098f98) main_cam5_pane_t5

0xd9bc,	// (0x00098fac) main_cam5_pane_t6_ParamLimits

0xd9bc,	// (0x00098fac) main_cam5_pane_t6

0xd9d0,	// (0x00098fc0) main_cam5_pane_t7_ParamLimits

0xd9d0,	// (0x00098fc0) main_cam5_pane_t7

0xd9e2,	// (0x00098fd2) main_cam5_pane_t8_ParamLimits

0xd9e2,	// (0x00098fd2) main_cam5_pane_t8

0xd9fe,	// (0x00098fee) main_cam5_pane_t9_ParamLimits

0xd9fe,	// (0x00098fee) main_cam5_pane_t9

0xda10,	// (0x00099000) main_cam5_pane_t10_ParamLimits

0xda10,	// (0x00099000) main_cam5_pane_t10

0xda22,	// (0x00099012) main_cam5_pane_t11_ParamLimits

0xda22,	// (0x00099012) main_cam5_pane_t11

0xda34,	// (0x00099024) main_cam5_pane_t12_ParamLimits

0xda34,	// (0x00099024) main_cam5_pane_t12

0xda49,	// (0x00099039) main_cam5_pane_t13_ParamLimits

0xda49,	// (0x00099039) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0009b03d) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0009b03d) main_cam5_pane_t

0x10a6,	// (0x0008c696) popup_scut_keymap_window_ParamLimits

0x10a6,	// (0x0008c696) popup_scut_keymap_window

0x73ea,	// (0x000929da) aid_size_cell_brow_shortcut

0xa8c8,	// (0x00095eb8) bg_popup_window_pane_cp010

0x73f6,	// (0x000929e6) grid_scut_pane

0x7402,	// (0x000929f2) cell_scut_pane_ParamLimits

0x7402,	// (0x000929f2) cell_scut_pane

0x7419,	// (0x00092a09) cell_scut_pane_g1

0xda66,	// (0x00099056) cell_scut_pane_t1

0xda75,	// (0x00099065) cell_scut_pane_t2

0x7422,	// (0x00092a12) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0009b058) cell_scut_pane_t

0x520a,	// (0x000907fa) main_mup3_pane_g8_ParamLimits

0x520a,	// (0x000907fa) main_mup3_pane_g8

0x66b3,	// (0x00091ca3) area_vitu2_query_pane_ParamLimits

0x66b3,	// (0x00091ca3) area_vitu2_query_pane

0x04bb,	// (0x0008baab) input_focus_pane_cp08

0xda84,	// (0x00099074) area_vitu2_query_pane_g1

0x055e,	// (0x0008bb4e) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0009b05f) area_vitu2_query_pane_g

0x7430,	// (0x00092a20) area_vitu2_query_pane_t1_ParamLimits

0x7430,	// (0x00092a20) area_vitu2_query_pane_t1

0x7444,	// (0x00092a34) area_vitu2_query_pane_t2_ParamLimits

0x7444,	// (0x00092a34) area_vitu2_query_pane_t2

0x056f,	// (0x0008bb5f) area_vitu2_query_pane_t3_ParamLimits

0x056f,	// (0x0008bb5f) area_vitu2_query_pane_t3

0x7458,	// (0x00092a48) area_vitu2_query_pane_t4_ParamLimits

0x7458,	// (0x00092a48) area_vitu2_query_pane_t4

0x7480,	// (0x00092a70) area_vitu2_query_pane_t5_ParamLimits

0x7480,	// (0x00092a70) area_vitu2_query_pane_t5

0x74a8,	// (0x00092a98) area_vitu2_query_pane_t6_ParamLimits

0x74a8,	// (0x00092a98) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0009b064) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0009b064) area_vitu2_query_pane_t

0x74f4,	// (0x00092ae4) bg_button_pane_cp018

0x7502,	// (0x00092af2) bg_button_pane_cp021

0x0597,	// (0x0008bb87) bg_button_pane_cp022

0x05a8,	// (0x0008bb98) input_focus_pane_cp09

0xb18b,	// (0x0009677b) aid_size_touch_mv_arrow_left

0xb1b6,	// (0x000967a6) aid_size_touch_mv_arrow_right

0x6d05,	// (0x000922f5) main_cset_slider_pane_g16_ParamLimits

0x6d05,	// (0x000922f5) main_cset_slider_pane_g16

0x6d11,	// (0x00092301) main_cset_slider_pane_g17_ParamLimits

0x6d11,	// (0x00092301) main_cset_slider_pane_g17

0x73d5,	// (0x000929c5) cell_cam4_burst_pane_g1_ParamLimits

0x96d5,	// (0x00094cc5) compa_mode_pane

0x6f1c,	// (0x0009250c) popup_vtel_slider_window_g3_ParamLimits

0x6f1c,	// (0x0009250c) popup_vtel_slider_window_g3

0x6f33,	// (0x00092523) popup_vtel_slider_window_g4_ParamLimits

0x6f33,	// (0x00092523) popup_vtel_slider_window_g4

0x6f4a,	// (0x0009253a) popup_vtel_slider_window_t1_ParamLimits

0x6f4a,	// (0x0009253a) popup_vtel_slider_window_t1

0x96d5,	// (0x00094cc5) main_cl_pane

0x9e15,	// (0x00095405) popup_imed_adjust2_window_ParamLimits

0xc7ba,	// (0x00097daa) bg_tb_trans_pane_cp05_ParamLimits

0xd0e5,	// (0x000986d5) popup_imed_adjust2_window_g1_ParamLimits

0xd0f4,	// (0x000986e4) popup_imed_adjust2_window_g2_ParamLimits

0xd0f4,	// (0x000986e4) popup_imed_adjust2_window_g2

0xd100,	// (0x000986f0) popup_imed_adjust2_window_g3_ParamLimits

0xd100,	// (0x000986f0) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0009adcf) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0009adcf) popup_imed_adjust2_window_g

0xd10c,	// (0x000986fc) popup_imed_adjust2_window_t1_ParamLimits

0xd124,	// (0x00098714) slider_imed_adjust_pane_ParamLimits

0xd138,	// (0x00098728) slider_imed_adjust_pane_g1_ParamLimits

0xd148,	// (0x00098738) slider_imed_adjust_pane_g2_ParamLimits

0xd158,	// (0x00098748) slider_imed_adjust_pane_g3_ParamLimits

0xd169,	// (0x00098759) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0009add6) slider_imed_adjust_pane_g_ParamLimits

0x643d,	// (0x00091a2d) aid_touch_area_cam4_ParamLimits

0x643d,	// (0x00091a2d) aid_touch_area_cam4

0xa1d9,	// (0x000957c9) battery_pane_cp01

0x650c,	// (0x00091afc) main_camera4_pane_g6_ParamLimits

0x650c,	// (0x00091afc) main_camera4_pane_g6

0x6536,	// (0x00091b26) main_camera4_pane_t2_ParamLimits

0x6536,	// (0x00091b26) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0009aed9) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0009aed9) main_camera4_pane_t

0x656b,	// (0x00091b5b) aid_touch_area_vid4_ParamLimits

0x656b,	// (0x00091b5b) aid_touch_area_vid4

0x65bf,	// (0x00091baf) main_video4_pane_g5_ParamLimits

0x65bf,	// (0x00091baf) main_video4_pane_g5

0x65e4,	// (0x00091bd4) vid4_progress_pane_ParamLimits

0x65e4,	// (0x00091bd4) vid4_progress_pane

0xd780,	// (0x00098d70) main_cset_slider_pane_g18_ParamLimits

0xd780,	// (0x00098d70) main_cset_slider_pane_g18

0xd94e,	// (0x00098f3e) cell_cam4_burst_pane_g2_ParamLimits

0xd94e,	// (0x00098f3e) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0009b038) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0009b038) cell_cam4_burst_pane_g

0xa6fa,	// (0x00095cea) bg_cl_pane_ParamLimits

0xa6fa,	// (0x00095cea) bg_cl_pane

0x750e,	// (0x00092afe) cl_header_pane_ParamLimits

0x750e,	// (0x00092afe) cl_header_pane

0x7522,	// (0x00092b12) cl_listscroll_pane_ParamLimits

0x7522,	// (0x00092b12) cl_listscroll_pane

0xda90,	// (0x00099080) bg_cl_pane_g1

0xda98,	// (0x00099088) bg_cl_pane_g2

0xdaa0,	// (0x00099090) bg_cl_pane_g3

0xdaa8,	// (0x00099098) bg_cl_pane_g4

0xdab0,	// (0x000990a0) bg_cl_pane_g5

0xdab8,	// (0x000990a8) bg_cl_pane_g6

0xdac0,	// (0x000990b0) bg_cl_pane_g7

0xdac8,	// (0x000990b8) bg_cl_pane_g8

0xdad0,	// (0x000990c0) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0009b073) bg_cl_pane_g

0x7532,	// (0x00092b22) aid_height_cl_leading_ParamLimits

0x7532,	// (0x00092b22) aid_height_cl_leading

0x753e,	// (0x00092b2e) aid_height_cl_text_ParamLimits

0x753e,	// (0x00092b2e) aid_height_cl_text

0xa4c1,	// (0x00095ab1) bg_cl_header_pane_ParamLimits

0xa4c1,	// (0x00095ab1) bg_cl_header_pane

0x755d,	// (0x00092b4d) cl_header_pane_g1_ParamLimits

0x755d,	// (0x00092b4d) cl_header_pane_g1

0x7573,	// (0x00092b63) cl_header_pane_t1_ParamLimits

0x7573,	// (0x00092b63) cl_header_pane_t1

0xdad8,	// (0x000990c8) cl_list_pane

0xd753,	// (0x00098d43) hc_scroll_pane_cp01

0xab01,	// (0x000960f1) bg_cl_header_pane_g1

0xd639,	// (0x00098c29) bg_cl_header_pane_g2

0xab21,	// (0x00096111) bg_cl_header_pane_g3

0xd649,	// (0x00098c39) bg_cl_header_pane_g4

0xd641,	// (0x00098c31) bg_cl_header_pane_g5

0xd85d,	// (0x00098e4d) bg_cl_header_pane_g6

0xd661,	// (0x00098c51) bg_cl_header_pane_g7

0xd669,	// (0x00098c59) bg_cl_header_pane_g8

0xd659,	// (0x00098c49) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0009b086) bg_cl_header_pane_g

0x758c,	// (0x00092b7c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x758c,	// (0x00092b7c) hc_cl_list_double_graphic_heading_pane

0x759d,	// (0x00092b8d) hc_cl_list_single_graphic_pane_ParamLimits

0x759d,	// (0x00092b8d) hc_cl_list_single_graphic_pane

0x75b6,	// (0x00092ba6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75b6,	// (0x00092ba6) hc_cl_list_single_graphic_pane_g1

0x75c2,	// (0x00092bb2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x75c2,	// (0x00092bb2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0009b099) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0009b099) hc_cl_list_single_graphic_pane_g

0x75d6,	// (0x00092bc6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75d6,	// (0x00092bc6) hc_cl_list_single_graphic_pane_t1

0x75b6,	// (0x00092ba6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75b6,	// (0x00092ba6) hc_cl_list_double_graphic_heading_pane_g1

0x75eb,	// (0x00092bdb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75eb,	// (0x00092bdb) hc_cl_list_double_graphic_heading_pane_g2

0x75ff,	// (0x00092bef) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75ff,	// (0x00092bef) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0009b09e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0009b09e) hc_cl_list_double_graphic_heading_pane_g

0x7613,	// (0x00092c03) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7613,	// (0x00092c03) hc_cl_list_double_graphic_heading_pane_t1

0x7628,	// (0x00092c18) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7628,	// (0x00092c18) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0009b0a5) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0009b0a5) hc_cl_list_double_graphic_heading_pane_t

0xa338,	// (0x00095928) vid4_progress_pane_g1

0xa348,	// (0x00095938) vid4_progress_pane_g2

0x763d,	// (0x00092c2d) vid4_progress_pane_g3

0xa358,	// (0x00095948) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0009b0aa) vid4_progress_pane_g

0x764f,	// (0x00092c3f) vid4_progress_pane_t1

0xa376,	// (0x00095966) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0009b0b5) vid4_progress_pane_t

0x7665,	// (0x00092c55) wait_bar_pane_cp07

0xc9b5,	// (0x00097fa5) blid_firmament_pane_ParamLimits

0xc9f8,	// (0x00097fe8) popup_blid_sat_info2_window_g1

0xca1c,	// (0x0009800c) popup_blid_sat_info2_window_t3

0xca2a,	// (0x0009801a) popup_blid_sat_info2_window_t4

0xca38,	// (0x00098028) popup_blid_sat_info2_window_t5

0xca46,	// (0x00098036) popup_blid_sat_info2_window_t6

0xca56,	// (0x00098046) popup_blid_sat_info2_window_t7

0xca64,	// (0x00098054) popup_blid_sat_info2_window_t8

0xca72,	// (0x00098062) popup_blid_sat_info2_window_t9

0xca80,	// (0x00098070) popup_blid_sat_info2_window_t10

0xcb44,	// (0x00098134) aid_firma_cardinal_ParamLimits

0xcb58,	// (0x00098148) blid_firmament_pane_t1_ParamLimits

0xcb6f,	// (0x0009815f) blid_firmament_pane_t2_ParamLimits

0xcb86,	// (0x00098176) blid_firmament_pane_t3_ParamLimits

0xcb9d,	// (0x0009818d) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0009acc3) blid_firmament_pane_t_ParamLimits

0xcbb4,	// (0x000981a4) blid_sat_info_pane_ParamLimits

0xa4c1,	// (0x00095ab1) main_cam_set_pane_ParamLimits

0x5ace,	// (0x000910be) aid_size_cell_colour_35_ParamLimits

0x5aee,	// (0x000910de) aid_size_cell_colour_112_ParamLimits

0x5b0e,	// (0x000910fe) aid_size_cell_effect_ParamLimits

0xc7ba,	// (0x00097daa) bg_tb_trans_pane_cp02_ParamLimits

0xad71,	// (0x00096361) heading_imed_pane_ParamLimits

0x5b2e,	// (0x0009111e) listscroll_imed_pane_ParamLimits

0xbdd4,	// (0x000973c4) popup_call2_audio_first_window_g5_ParamLimits

0xbdd4,	// (0x000973c4) popup_call2_audio_first_window_g5

0x60e8,	// (0x000916d8) aid_size_touch_image3_arrow_left_ParamLimits

0x60e8,	// (0x000916d8) aid_size_touch_image3_arrow_left

0x6114,	// (0x00091704) aid_size_touch_image3_arrow_right_ParamLimits

0x6114,	// (0x00091704) aid_size_touch_image3_arrow_right

0xa38b,	// (0x0009597b) vid4_progress_pane_t3

0x5e5a,	// (0x0009144a) main_hwr_training_symbol_option_pane_ParamLimits

0x5e5a,	// (0x0009144a) main_hwr_training_symbol_option_pane

0xd3db,	// (0x000989cb) popup_hwr_training_preview_window_ParamLimits

0xd3db,	// (0x000989cb) popup_hwr_training_preview_window

0x5e7a,	// (0x0009146a) hwr_training_navi_pane_g5_ParamLimits

0x5e7a,	// (0x0009146a) hwr_training_navi_pane_g5

0xd627,	// (0x00098c17) popup_char_count_window

0xa4c1,	// (0x00095ab1) bg_popup_sub_pane_cp20_ParamLimits

0x7062,	// (0x00092652) list_vitu2_match_list_pane_ParamLimits

0x7071,	// (0x00092661) vitu2_page_scroll_pane_ParamLimits

0x7071,	// (0x00092661) vitu2_page_scroll_pane

0xdae1,	// (0x000990d1) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdae1,	// (0x000990d1) list_single_hwr_training_symbol_option_pane

0xdaf4,	// (0x000990e4) list_single_hwr_training_symbol_option_pane_g1

0xdafc,	// (0x000990ec) list_single_hwr_training_symbol_option_pane_t1

0xdb0a,	// (0x000990fa) bg_button_pane_cp023

0xdb13,	// (0x00099103) bg_button_pane_cp024

0x7687,	// (0x00092c77) vitu2_page_scroll_pane_g1

0x768f,	// (0x00092c7f) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0009b0bc) vitu2_page_scroll_pane_g

0x7697,	// (0x00092c87) vitu2_page_scroll_pane_t1

0xc915,	// (0x00097f05) popup_char_count_window_g1

0xdb46,	// (0x00099136) popup_char_count_window_g2

0xdb4f,	// (0x0009913f) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0009b0c1) popup_char_count_window_g

0xdb58,	// (0x00099148) popup_char_count_window_t1

0x96d5,	// (0x00094cc5) main_vded2_pane

0xd0d1,	// (0x000986c1) aid_size_cell_imed_line

0xd0db,	// (0x000986cb) grid_imed_line_width_pane

0xa28f,	// (0x0009587f) vid4_indicators_pane_g4

0xdb66,	// (0x00099156) cell_imed_line_width_pane_ParamLimits

0xdb66,	// (0x00099156) cell_imed_line_width_pane

0xdb7a,	// (0x0009916a) cell_imed_line_width_pane_g1

0xdb83,	// (0x00099173) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0009b0c8) cell_imed_line_width_pane_g

0x76a6,	// (0x00092c96) main_vded2_pane_g1_ParamLimits

0x76a6,	// (0x00092c96) main_vded2_pane_g1

0x76bc,	// (0x00092cac) main_vded2_pane_g2_ParamLimits

0x76bc,	// (0x00092cac) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0009b0cd) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0009b0cd) main_vded2_pane_g

0x76ce,	// (0x00092cbe) vded2_slider_pane_ParamLimits

0x76ce,	// (0x00092cbe) vded2_slider_pane

0x76de,	// (0x00092cce) aid_size_touch_vded2_end

0x76e8,	// (0x00092cd8) aid_size_touch_vded2_playhead

0xdb8b,	// (0x0009917b) aid_size_touch_vded2_start

0xdb93,	// (0x00099183) vded2_slider_bg_pane

0xdb9c,	// (0x0009918c) vded2_slider_pane_g1

0xdbe1,	// (0x000991d1) vded2_slider_pane_g2

0x76f2,	// (0x00092ce2) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0009b0d2) vded2_slider_pane_g

0xdbe9,	// (0x000991d9) vded2_slider_bg_pane_g1

0xdbf2,	// (0x000991e2) vded2_slider_bg_pane_g2

0xdbfb,	// (0x000991eb) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0009b0d9) vded2_slider_bg_pane_g

0x3833,	// (0x0008ee23) aid_postcard_touch_down_pane_ParamLimits

0x3833,	// (0x0008ee23) aid_postcard_touch_down_pane

0x3849,	// (0x0008ee39) aid_postcard_touch_up_pane_ParamLimits

0x3849,	// (0x0008ee39) aid_postcard_touch_up_pane

0x96d5,	// (0x00094cc5) main_blid2_pane

0x9dfb,	// (0x000953eb) popup_blid2_search_window

0x96d5,	// (0x00094cc5) blid2_gps_pane

0x96d5,	// (0x00094cc5) blid2_navig_pane

0x96d5,	// (0x00094cc5) blid2_search_pane

0x96d5,	// (0x00094cc5) blid2_tripm_pane

0x76fd,	// (0x00092ced) blid2_search_pane_g1_ParamLimits

0x76fd,	// (0x00092ced) blid2_search_pane_g1

0x7715,	// (0x00092d05) blid2_search_pane_t1_ParamLimits

0x7715,	// (0x00092d05) blid2_search_pane_t1

0x7727,	// (0x00092d17) aid_size_cell_blid2_gps_ParamLimits

0x7727,	// (0x00092d17) aid_size_cell_blid2_gps

0x773f,	// (0x00092d2f) blid2_gps_pane_g1_ParamLimits

0x773f,	// (0x00092d2f) blid2_gps_pane_g1

0x7753,	// (0x00092d43) grid_blid2_satellite_pane_ParamLimits

0x7753,	// (0x00092d43) grid_blid2_satellite_pane

0x776d,	// (0x00092d5d) blid2_navig_pane_g1_ParamLimits

0x776d,	// (0x00092d5d) blid2_navig_pane_g1

0x7779,	// (0x00092d69) blid2_navig_pane_t1_ParamLimits

0x7779,	// (0x00092d69) blid2_navig_pane_t1

0x7794,	// (0x00092d84) blid2_navig_pane_t2_ParamLimits

0x7794,	// (0x00092d84) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0009b0e0) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0009b0e0) blid2_navig_pane_t

0x77af,	// (0x00092d9f) blid2_navig_ring_pane_ParamLimits

0x77af,	// (0x00092d9f) blid2_navig_ring_pane

0x77c8,	// (0x00092db8) blid2_speed_pane_ParamLimits

0x77c8,	// (0x00092db8) blid2_speed_pane

0x77d4,	// (0x00092dc4) blid2_tripm_pane_g1_ParamLimits

0x77d4,	// (0x00092dc4) blid2_tripm_pane_g1

0x77ef,	// (0x00092ddf) blid2_tripm_pane_g2_ParamLimits

0x77ef,	// (0x00092ddf) blid2_tripm_pane_g2

0x7803,	// (0x00092df3) blid2_tripm_pane_g3_ParamLimits

0x7803,	// (0x00092df3) blid2_tripm_pane_g3

0x7817,	// (0x00092e07) blid2_tripm_pane_g4_ParamLimits

0x7817,	// (0x00092e07) blid2_tripm_pane_g4

0x782b,	// (0x00092e1b) blid2_tripm_pane_g5_ParamLimits

0x782b,	// (0x00092e1b) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0009b0e5) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0009b0e5) blid2_tripm_pane_g

0x7851,	// (0x00092e41) blid2_tripm_pane_t1_ParamLimits

0x7851,	// (0x00092e41) blid2_tripm_pane_t1

0x786c,	// (0x00092e5c) blid2_tripm_pane_t2_ParamLimits

0x786c,	// (0x00092e5c) blid2_tripm_pane_t2

0x7885,	// (0x00092e75) blid2_tripm_pane_t3_ParamLimits

0x7885,	// (0x00092e75) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0009b0f2) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0009b0f2) blid2_tripm_pane_t

0x78cc,	// (0x00092ebc) cell_blid2_satellite_pane_ParamLimits

0x78cc,	// (0x00092ebc) cell_blid2_satellite_pane

0x78ea,	// (0x00092eda) cell_blid2_satellite_pane_g1

0xdc04,	// (0x000991f4) cell_blid2_satellite_pane_t1

0xcbc4,	// (0x000981b4) blid2_speed_pane_g1

0xdc12,	// (0x00099202) blid2_speed_pane_t1

0xdc20,	// (0x00099210) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0009b0fb) blid2_speed_pane_t

0xcbc4,	// (0x000981b4) blid2_navig_ring_pane_g1

0x78f3,	// (0x00092ee3) blid2_navig_ring_pane_g2

0x78fb,	// (0x00092eeb) blid2_navig_ring_pane_g3

0x7903,	// (0x00092ef3) blid2_navig_ring_pane_g4

0x790b,	// (0x00092efb) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0009b100) blid2_navig_ring_pane_g

0x96d5,	// (0x00094cc5) bg_popup_window_pane_cp011

0xdc2e,	// (0x0009921e) popup_blid2_search_window_g1

0xdc36,	// (0x00099226) popup_blid2_search_window_t1

0xdc44,	// (0x00099234) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0009b10b) popup_blid2_search_window_t

0xaa10,	// (0x00096000) main_browser_pane_g1

0xa6fa,	// (0x00095cea) main_browser_pane_ParamLimits

0xa4c1,	// (0x00095ab1) bg_button_pane_cp011_ParamLimits

0x68dc,	// (0x00091ecc) cell_vitu2_function_pane_g1_ParamLimits

0xc7ba,	// (0x00097daa) bg_popup_sub_pane_cp22_ParamLimits

0x04bb,	// (0x0008baab) input_focus_pane_cp08_ParamLimits

0x7202,	// (0x000927f2) popup_vitu2_query_button_pane_ParamLimits

0x7202,	// (0x000927f2) popup_vitu2_query_button_pane

0x04d2,	// (0x0008bac2) popup_vitu2_query_input_button_pane

0xd898,	// (0x00098e88) popup_vitu2_query_window_g1_ParamLimits

0x04dc,	// (0x0008bacc) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0009b00c) popup_vitu2_query_window_g_ParamLimits

0x96d5,	// (0x00094cc5) bg_button_pane_cp026

0x7913,	// (0x00092f03) popup_vitu2_query_input_button_pane_g1

0x96d5,	// (0x00094cc5) bg_button_pane_cp025

0xdc52,	// (0x00099242) popup_vitu2_query_button_pane_t1

0x4ecb,	// (0x000904bb) main_mp3_pane_t6

0x4ed9,	// (0x000904c9) popup_slider_window_cp01

0xa1f5,	// (0x000957e5) cam4_battery_pane

0xa24e,	// (0x0009583e) cam4_battery_pane_cp02

0xa330,	// (0x00095920) cam4_battery_pane_cp01

0xa330,	// (0x00095920) cam4_battery_pane_cp03

0xcbc4,	// (0x000981b4) cam4_battery_pane_g1

0xdba5,	// (0x00099195) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0009b110) cam4_battery_pane_g

0xca8e,	// (0x0009807e) popup_blid_sat_info2_window_t11

0xb18b,	// (0x0009677b) aid_size_touch_mv_arrow_left_ParamLimits

0xb1b6,	// (0x000967a6) aid_size_touch_mv_arrow_right_ParamLimits

0xb214,	// (0x00096804) navi_pane_g1_ParamLimits

0xb279,	// (0x00096869) navi_pane_g2_ParamLimits

0xb2a7,	// (0x00096897) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0009a9d5) navi_pane_g_ParamLimits

0x3327,	// (0x0008e917) navi_pane_mv_t1_ParamLimits

0x5b3a,	// (0x0009112a) grid_imed_effect_pane_ParamLimits

0x2018,	// (0x0008d608) aid_placing_vt_slider_lsc

0xa95f,	// (0x00095f4f) aid_placing_vt_slider_prt

0xa4c1,	// (0x00095ab1) bg_tb_trans_pane_cp01_ParamLimits

0xcd44,	// (0x00098334) popup_image_details_window_g1_ParamLimits

0xcd57,	// (0x00098347) popup_image_details_window_g2_ParamLimits

0xcd6c,	// (0x0009835c) popup_image_details_window_g3_ParamLimits

0xcd6c,	// (0x0009835c) popup_image_details_window_g3

0xf718,	// (0x0009ad08) popup_image_details_window_g_ParamLimits

0xcd80,	// (0x00098370) popup_image_details_window_t1_ParamLimits

0xcd92,	// (0x00098382) popup_image_details_window_t2_ParamLimits

0xcdab,	// (0x0009839b) popup_image_details_window_t3_ParamLimits

0xcdbf,	// (0x000983af) popup_image_details_window_t4_ParamLimits

0xcdda,	// (0x000983ca) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0009ad0f) popup_image_details_window_t_ParamLimits

0x754a,	// (0x00092b3a) cl_header_name_pane_ParamLimits

0x754a,	// (0x00092b3a) cl_header_name_pane

0x791b,	// (0x00092f0b) cl_header_name_pane_t1_ParamLimits

0x791b,	// (0x00092f0b) cl_header_name_pane_t1

0x793c,	// (0x00092f2c) cl_header_name_pane_t2_ParamLimits

0x793c,	// (0x00092f2c) cl_header_name_pane_t2

0x797e,	// (0x00092f6e) cl_header_name_pane_t3_ParamLimits

0x797e,	// (0x00092f6e) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0009b115) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0009b115) cl_header_name_pane_t

0xb336,	// (0x00096926) navi_pane_mv_g2_ParamLimits

0xd601,	// (0x00098bf1) field_vitu2_entry_pane_g1_ParamLimits

0xd60d,	// (0x00098bfd) field_vitu2_entry_pane_g2_ParamLimits

0xd619,	// (0x00098c09) field_vitu2_entry_pane_g3_ParamLimits

0xd619,	// (0x00098c09) field_vitu2_entry_pane_g3

0xf91b,	// (0x0009af0b) field_vitu2_entry_pane_g_ParamLimits

0xa2c2,	// (0x000958b2) cell_vitu2_itu_pane_g1_ParamLimits

0x6870,	// (0x00091e60) cell_vitu2_itu_pane_g2_ParamLimits

0x6870,	// (0x00091e60) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0009af17) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0009af17) cell_vitu2_itu_pane_g

0xa4c1,	// (0x00095ab1) bg_vkb2_func_pane_cp05_ParamLimits

0xa4c1,	// (0x00095ab1) bg_vkb2_func_pane_cp05

0xa4c1,	// (0x00095ab1) bg_vkb2_func_pane_cp03

0xa4c1,	// (0x00095ab1) bg_vkb2_func_pane_cp04

0xa4c1,	// (0x00095ab1) bg_vkb2_func_pane_cp10_ParamLimits

0xa4c1,	// (0x00095ab1) bg_vkb2_func_pane_cp10

0x0597,	// (0x0008bb87) bg_vkb2_func_pane_cp08

0x74f4,	// (0x00092ae4) bg_vkb2_func_pane_cp06

0x7502,	// (0x00092af2) bg_vkb2_func_pane_cp07

0xdb1c,	// (0x0009910c) bg_vkb2_func_pane_cp11_ParamLimits

0xdb1c,	// (0x0009910c) bg_vkb2_func_pane_cp11

0xdb31,	// (0x00099121) bg_vkb2_func_pane_cp12_ParamLimits

0xdb31,	// (0x00099121) bg_vkb2_func_pane_cp12

0x96d5,	// (0x00094cc5) bg_vkb2_func_pane_cp09

0xd639,	// (0x00098c29) bg_vkb2_func_pane_g1

0xab21,	// (0x00096111) bg_vkb2_func_pane_g2

0xd641,	// (0x00098c31) bg_vkb2_func_pane_g3

0xd649,	// (0x00098c39) bg_vkb2_func_pane_g4

0xd85d,	// (0x00098e4d) bg_vkb2_func_pane_g5

0xd661,	// (0x00098c51) bg_vkb2_func_pane_g6

0xd669,	// (0x00098c59) bg_vkb2_func_pane_g7

0xd659,	// (0x00098c49) bg_vkb2_func_pane_g8

0xab01,	// (0x000960f1) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0009b11c) bg_vkb2_func_pane_g

0x783f,	// (0x00092e2f) blid2_tripm_pane_g6_ParamLimits

0x783f,	// (0x00092e2f) blid2_tripm_pane_g6

0xd493,	// (0x00098a83) mp4_progress_pane_g1

0x78b8,	// (0x00092ea8) blid2_tripm_values_pane_ParamLimits

0x78b8,	// (0x00092ea8) blid2_tripm_values_pane

0x79af,	// (0x00092f9f) blid2_tripm_values_pane_t1

0x79bd,	// (0x00092fad) blid2_tripm_values_pane_t2

0x79cb,	// (0x00092fbb) blid2_tripm_values_pane_t3

0x79d9,	// (0x00092fc9) blid2_tripm_values_pane_t4

0x79e7,	// (0x00092fd7) blid2_tripm_values_pane_t5

0x79f5,	// (0x00092fe5) blid2_tripm_values_pane_t6

0x7a03,	// (0x00092ff3) blid2_tripm_values_pane_t7

0x7a11,	// (0x00093001) blid2_tripm_values_pane_t8

0x7a1f,	// (0x0009300f) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0009b12f) blid2_tripm_values_pane_t

0x205a,	// (0x0008d64a) call_video_pane_t1_ParamLimits

0x2078,	// (0x0008d668) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0009a85e) call_video_pane_t_ParamLimits

0x02b8,	// (0x0008b8a8) msg_header_pane_g1_ParamLimits

0xb51e,	// (0x00096b0e) msg_header_pane_g2_ParamLimits

0xb51e,	// (0x00096b0e) msg_header_pane_g2

0x0001,

0xf488,	// (0x0009aa78) msg_header_pane_g_ParamLimits

0xf488,	// (0x0009aa78) msg_header_pane_g

0xa6fa,	// (0x00095cea) main_clock2_pane_ParamLimits

0x5833,	// (0x00090e23) grid_clock2_toolbar_pane_ParamLimits

0x5833,	// (0x00090e23) grid_clock2_toolbar_pane

0x5833,	// (0x00090e23) listscroll_clock2_pane_ParamLimits

0x5833,	// (0x00090e23) listscroll_clock2_pane

0x592c,	// (0x00090f1c) main_clock2_pane_t3_ParamLimits

0x592c,	// (0x00090f1c) main_clock2_pane_t3

0x5950,	// (0x00090f40) main_clock2_pane_t4_ParamLimits

0x5950,	// (0x00090f40) main_clock2_pane_t4

0xdc60,	// (0x00099250) cell_clock2_toolbar_pane

0xdc68,	// (0x00099258) cell_clock2_toolbar_pane_cp01

0xdc68,	// (0x00099258) cell_clock2_toolbar_pane_cp02

0xdc70,	// (0x00099260) cell_clock2_toolbar_pane_cp03

0xdc78,	// (0x00099268) list_clock2_pane

0xb101,	// (0x000966f1) scroll_pane_cp10

0xdc80,	// (0x00099270) list_single_clock2_pane_ParamLimits

0xdc80,	// (0x00099270) list_single_clock2_pane

0xa8c8,	// (0x00095eb8) list_highlight_pane_cp08

0xdc8d,	// (0x0009927d) list_single_clock2_pane_t1

0xdc9b,	// (0x0009928b) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0009b142) list_single_clock2_pane_t

0x96d5,	// (0x00094cc5) bg_button_pane_cp10

0xdca9,	// (0x00099299) cell_clock2_toolbar_pane_g1

0x37bf,	// (0x0008edaf) aid_main_viewer_pane_g1_ParamLimits

0x37bf,	// (0x0008edaf) aid_main_viewer_pane_g1

0x37cd,	// (0x0008edbd) aid_main_viewer_pane_g2_ParamLimits

0x37cd,	// (0x0008edbd) aid_main_viewer_pane_g2

0x37db,	// (0x0008edcb) aid_main_viewer_pane_g3_ParamLimits

0x37db,	// (0x0008edcb) aid_main_viewer_pane_g3

0x37ea,	// (0x0008edda) aid_main_viewer_pane_g4_ParamLimits

0x37ea,	// (0x0008edda) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0009aa89) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0009aa89) aid_main_viewer_pane_g

0x40f8,	// (0x0008f6e8) main_calc_pane_ParamLimits

0x410c,	// (0x0008f6fc) main_dialer2_pane_ParamLimits

0x96d5,	// (0x00094cc5) main_cam6_pane

0x96d5,	// (0x00094cc5) main_vid6_pane

0x583f,	// (0x00090e2f) listscroll_gen_pane_cp06_ParamLimits

0x583f,	// (0x00090e2f) listscroll_gen_pane_cp06

0x5973,	// (0x00090f63) main_clock2_pane_t5_ParamLimits

0x5973,	// (0x00090f63) main_clock2_pane_t5

0x59cf,	// (0x00090fbf) aid_call2_pane_cp10_ParamLimits

0x59e1,	// (0x00090fd1) aid_call_pane_cp10_ParamLimits

0xb17f,	// (0x0009676f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb17f,	// (0x0009676f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x59f3,	// (0x00090fe3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x59f3,	// (0x00090fe3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb17f,	// (0x0009676f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0009adc4) popup_clock_analogue_window_cp10_g_ParamLimits

0x5a05,	// (0x00090ff5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6095,	// (0x00091685) cell_dialer2_keypad_pane_g2_ParamLimits

0x6095,	// (0x00091685) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0009aeaa) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0009aeaa) cell_dialer2_keypad_pane_g

0x60b1,	// (0x000916a1) cell_dialer2_keypad_pane_t1

0x6bf8,	// (0x000921e8) main_cset_text2_pane_ParamLimits

0x6bf8,	// (0x000921e8) main_cset_text2_pane

0xda84,	// (0x00099074) area_vitu2_query_pane_g1_ParamLimits

0x055e,	// (0x0008bb4e) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0009b05f) area_vitu2_query_pane_g_ParamLimits

0x74d0,	// (0x00092ac0) area_vitu2_query_pane_t7_ParamLimits

0x74d0,	// (0x00092ac0) area_vitu2_query_pane_t7

0x74f4,	// (0x00092ae4) bg_button_pane_cp018_ParamLimits

0x7502,	// (0x00092af2) bg_button_pane_cp021_ParamLimits

0x0597,	// (0x0008bb87) bg_button_pane_cp022_ParamLimits

0x0597,	// (0x0008bb87) bg_vkb2_func_pane_cp08_ParamLimits

0x74f4,	// (0x00092ae4) bg_vkb2_func_pane_cp06_ParamLimits

0x7502,	// (0x00092af2) bg_vkb2_func_pane_cp07_ParamLimits

0x05a8,	// (0x0008bb98) input_focus_pane_cp09_ParamLimits

0xa3b2,	// (0x000959a2) cam6_autofocus_pane_ParamLimits

0xa3b2,	// (0x000959a2) cam6_autofocus_pane

0x7a2d,	// (0x0009301d) cam6_image_uncrop_pane_ParamLimits

0x7a2d,	// (0x0009301d) cam6_image_uncrop_pane

0x7a3c,	// (0x0009302c) cam6_indi_pane_ParamLimits

0x7a3c,	// (0x0009302c) cam6_indi_pane

0x7a52,	// (0x00093042) cam6_mode_pane_ParamLimits

0x7a52,	// (0x00093042) cam6_mode_pane

0x7a64,	// (0x00093054) cam6_timer_pane_ParamLimits

0x7a64,	// (0x00093054) cam6_timer_pane

0x7a70,	// (0x00093060) cam6_zoom_pane_ParamLimits

0x7a70,	// (0x00093060) cam6_zoom_pane

0x7a7c,	// (0x0009306c) cam6_mode_pane_g1_ParamLimits

0x7a7c,	// (0x0009306c) cam6_mode_pane_g1

0x7a8c,	// (0x0009307c) cam6_mode_pane_g2_ParamLimits

0x7a8c,	// (0x0009307c) cam6_mode_pane_g2

0x7a9c,	// (0x0009308c) cam6_mode_pane_g3_ParamLimits

0x7a9c,	// (0x0009308c) cam6_mode_pane_g3

0x7aac,	// (0x0009309c) cam6_mode_pane_g4_ParamLimits

0x7aac,	// (0x0009309c) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0009b147) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0009b147) cam6_mode_pane_g

0xdbaf,	// (0x0009919f) bg_tb_trans_pane_cp08_ParamLimits

0xdbaf,	// (0x0009919f) bg_tb_trans_pane_cp08

0xdcb1,	// (0x000992a1) cam6_battery_pane_ParamLimits

0xdcb1,	// (0x000992a1) cam6_battery_pane

0xdcc7,	// (0x000992b7) cam6_indi_pane_g1_ParamLimits

0xdcc7,	// (0x000992b7) cam6_indi_pane_g1

0xdcd9,	// (0x000992c9) cam6_indi_pane_g2_ParamLimits

0xdcd9,	// (0x000992c9) cam6_indi_pane_g2

0xdceb,	// (0x000992db) cam6_indi_pane_g3_ParamLimits

0xdceb,	// (0x000992db) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0009b150) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0009b150) cam6_indi_pane_g

0xdcfd,	// (0x000992ed) cam6_indi_pane_t1_ParamLimits

0xdcfd,	// (0x000992ed) cam6_indi_pane_t1

0x7abc,	// (0x000930ac) cam6_autofocus_pane_g1

0x7ac4,	// (0x000930b4) cam6_autofocus_pane_g2

0x7acc,	// (0x000930bc) cam6_autofocus_pane_g3

0x7ad4,	// (0x000930c4) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0009b157) cam6_autofocus_pane_g

0xdd23,	// (0x00099313) cam6_timer_pane_g1

0xdd2b,	// (0x0009931b) cam6_timer_pane_t1

0xdd39,	// (0x00099329) cam6_zoom_cont_pane

0xdd41,	// (0x00099331) cam6_zoom_pane_g1

0xdd49,	// (0x00099339) cam6_zoom_pane_g2

0x7adc,	// (0x000930cc) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0009b160) cam6_zoom_pane_g

0xcbc4,	// (0x000981b4) cam6_battery_pane_g1

0xcbc4,	// (0x000981b4) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0009accc) cam6_battery_pane_g

0xdd51,	// (0x00099341) cam6_zoom_cont_pane_g1

0xdd5a,	// (0x0009934a) cam6_zoom_cont_pane_g2

0xdd63,	// (0x00099353) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0009b167) cam6_zoom_cont_pane_g

0x7af9,	// (0x000930e9) cam6_mode_pane_cp_ParamLimits

0x7af9,	// (0x000930e9) cam6_mode_pane_cp

0x7a70,	// (0x00093060) cam6_zoom_pane_cp_ParamLimits

0x7a70,	// (0x00093060) cam6_zoom_pane_cp

0x7b0b,	// (0x000930fb) vid6_image_uncrop_cif_pane_ParamLimits

0x7b0b,	// (0x000930fb) vid6_image_uncrop_cif_pane

0x7b1b,	// (0x0009310b) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b1b,	// (0x0009310b) vid6_image_uncrop_nhd_pane

0x7a2d,	// (0x0009301d) vid6_image_uncrop_vga_pane_ParamLimits

0x7a2d,	// (0x0009301d) vid6_image_uncrop_vga_pane

0x7b2a,	// (0x0009311a) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b2a,	// (0x0009311a) vid6_image_uncrop_wvga_pane

0x7b39,	// (0x00093129) vid6_indi_pane_ParamLimits

0x7b39,	// (0x00093129) vid6_indi_pane

0xdbaf,	// (0x0009919f) bg_tb_trans_pane_cp09_ParamLimits

0xdbaf,	// (0x0009919f) bg_tb_trans_pane_cp09

0xdd7b,	// (0x0009936b) cam6_battery_pane_cp_ParamLimits

0xdd7b,	// (0x0009936b) cam6_battery_pane_cp

0xdd87,	// (0x00099377) vid6_indi_pane_g1_ParamLimits

0xdd87,	// (0x00099377) vid6_indi_pane_g1

0xdd99,	// (0x00099389) vid6_indi_pane_g2_ParamLimits

0xdd99,	// (0x00099389) vid6_indi_pane_g2

0xddab,	// (0x0009939b) vid6_indi_pane_g3_ParamLimits

0xddab,	// (0x0009939b) vid6_indi_pane_g3

0xddc0,	// (0x000993b0) vid6_indi_pane_g4_ParamLimits

0xddc0,	// (0x000993b0) vid6_indi_pane_g4

0xddd5,	// (0x000993c5) vid6_indi_pane_g5_ParamLimits

0xddd5,	// (0x000993c5) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0009b16e) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0009b16e) vid6_indi_pane_g

0xddef,	// (0x000993df) vid6_indi_pane_t1_ParamLimits

0xddef,	// (0x000993df) vid6_indi_pane_t1

0xde05,	// (0x000993f5) vid6_indi_pane_t2_ParamLimits

0xde05,	// (0x000993f5) vid6_indi_pane_t2

0xde2d,	// (0x0009941d) vid6_indi_pane_t3_ParamLimits

0xde2d,	// (0x0009941d) vid6_indi_pane_t3

0xde55,	// (0x00099445) vid6_indi_pane_t4_ParamLimits

0xde55,	// (0x00099445) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0009b179) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0009b179) vid6_indi_pane_t

0xde79,	// (0x00099469) wait_bar_pane_cp08

0x7b51,	// (0x00093141) main_cset_text2_pane_t1_ParamLimits

0x7b51,	// (0x00093141) main_cset_text2_pane_t1

0x7ae4,	// (0x000930d4) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ae4,	// (0x000930d4) listscroll_gen_pane_cp06_t1

0x96d5,	// (0x00094cc5) main_cam6_set_pane

0xce24,	// (0x00098414) bg_tb_trans_pane_cp06_ParamLimits

0xa1fd,	// (0x000957ed) cam4_indicators_pane_g1_ParamLimits

0xa20e,	// (0x000957fe) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0009aee7) cam4_indicators_pane_g_ParamLimits

0xa22c,	// (0x0009581c) cam4_indicators_pane_t1_ParamLimits

0xa4c1,	// (0x00095ab1) bg_tb_trans_pane_cp07_ParamLimits

0xa256,	// (0x00095846) vid4_indicators_pane_g1_ParamLimits

0xa26a,	// (0x0009585a) vid4_indicators_pane_g2_ParamLimits

0xa27e,	// (0x0009586e) vid4_indicators_pane_g3_ParamLimits

0xa28f,	// (0x0009587f) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0009aef9) vid4_indicators_pane_g_ParamLimits

0xa2ab,	// (0x0009589b) vid4_indicators_pane_t1_ParamLimits

0xa338,	// (0x00095928) vid4_progress_pane_g1_ParamLimits

0xa348,	// (0x00095938) vid4_progress_pane_g2_ParamLimits

0x763d,	// (0x00092c2d) vid4_progress_pane_g3_ParamLimits

0xa358,	// (0x00095948) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0009b0aa) vid4_progress_pane_g_ParamLimits

0x764f,	// (0x00092c3f) vid4_progress_pane_t1_ParamLimits

0xa376,	// (0x00095966) vid4_progress_pane_t2_ParamLimits

0xa38b,	// (0x0009597b) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0009b0b5) vid4_progress_pane_t_ParamLimits

0x7665,	// (0x00092c55) wait_bar_pane_cp07_ParamLimits

0x7b70,	// (0x00093160) main_cam6_set_pane_g2_ParamLimits

0x7b70,	// (0x00093160) main_cam6_set_pane_g2

0x7b94,	// (0x00093184) main_cset6_listscroll_pane_ParamLimits

0x7b94,	// (0x00093184) main_cset6_listscroll_pane

0x7bb0,	// (0x000931a0) main_cset6_slider_pane_ParamLimits

0x7bb0,	// (0x000931a0) main_cset6_slider_pane

0x7bc6,	// (0x000931b6) main_cset6_text2_pane_ParamLimits

0x7bc6,	// (0x000931b6) main_cset6_text2_pane

0xde88,	// (0x00099478) main_cset6_text_pane

0xde90,	// (0x00099480) main_cset_list_pane_copy1_ParamLimits

0xde90,	// (0x00099480) main_cset_list_pane_copy1

0xdea0,	// (0x00099490) scroll_pane_cp028_copy1

0x7bd4,	// (0x000931c4) cset_list_set_pane_copy1

0x7be6,	// (0x000931d6) aid_position_infowindow_above_copy1

0x7bee,	// (0x000931de) aid_position_infowindow_below_copy1

0x7bf6,	// (0x000931e6) cset_list_set_pane_g1_copy1

0x05e8,	// (0x0008bbd8) cset_list_set_pane_g3_copy1_ParamLimits

0x05e8,	// (0x0008bbd8) cset_list_set_pane_g3_copy1

0x05f7,	// (0x0008bbe7) cset_list_set_pane_t1_copy1_ParamLimits

0x05f7,	// (0x0008bbe7) cset_list_set_pane_t1_copy1

0xa4c1,	// (0x00095ab1) list_highlight_pane_cp021_copy1_ParamLimits

0xa4c1,	// (0x00095ab1) list_highlight_pane_cp021_copy1

0xdea9,	// (0x00099499) cset6_slider_pane_ParamLimits

0xdea9,	// (0x00099499) cset6_slider_pane

0xded5,	// (0x000994c5) main_cset6_slider_pane_g1_ParamLimits

0xded5,	// (0x000994c5) main_cset6_slider_pane_g1

0x7bfe,	// (0x000931ee) main_cset6_slider_pane_g2_ParamLimits

0x7bfe,	// (0x000931ee) main_cset6_slider_pane_g2

0xdefd,	// (0x000994ed) main_cset6_slider_pane_g3_ParamLimits

0xdefd,	// (0x000994ed) main_cset6_slider_pane_g3

0x7c26,	// (0x00093216) main_cset6_slider_pane_g4_ParamLimits

0x7c26,	// (0x00093216) main_cset6_slider_pane_g4

0x7c32,	// (0x00093222) main_cset6_slider_pane_g5_ParamLimits

0x7c32,	// (0x00093222) main_cset6_slider_pane_g5

0xd768,	// (0x00098d58) main_cset6_slider_pane_g7_ParamLimits

0xd768,	// (0x00098d58) main_cset6_slider_pane_g7

0xd774,	// (0x00098d64) main_cset6_slider_pane_g8_ParamLimits

0xd774,	// (0x00098d64) main_cset6_slider_pane_g8

0x6ca5,	// (0x00092295) main_cset6_slider_pane_g9_ParamLimits

0x6ca5,	// (0x00092295) main_cset6_slider_pane_g9

0x6cb1,	// (0x000922a1) main_cset6_slider_pane_g10_ParamLimits

0x6cb1,	// (0x000922a1) main_cset6_slider_pane_g10

0x6cbd,	// (0x000922ad) main_cset6_slider_pane_g11_ParamLimits

0x6cbd,	// (0x000922ad) main_cset6_slider_pane_g11

0x6cc9,	// (0x000922b9) main_cset6_slider_pane_g12_ParamLimits

0x6cc9,	// (0x000922b9) main_cset6_slider_pane_g12

0x6cd5,	// (0x000922c5) main_cset6_slider_pane_g13_ParamLimits

0x6cd5,	// (0x000922c5) main_cset6_slider_pane_g13

0x6ce1,	// (0x000922d1) main_cset6_slider_pane_g14_ParamLimits

0x6ce1,	// (0x000922d1) main_cset6_slider_pane_g14

0x7c3e,	// (0x0009322e) main_cset6_slider_pane_g15_ParamLimits

0x7c3e,	// (0x0009322e) main_cset6_slider_pane_g15

0x6d05,	// (0x000922f5) main_cset6_slider_pane_g16_ParamLimits

0x6d05,	// (0x000922f5) main_cset6_slider_pane_g16

0x6d11,	// (0x00092301) main_cset6_slider_pane_g17_ParamLimits

0x6d11,	// (0x00092301) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0009b182) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0009b182) main_cset6_slider_pane_g

0xdf09,	// (0x000994f9) main_cset6_slider_pane_t1_ParamLimits

0xdf09,	// (0x000994f9) main_cset6_slider_pane_t1

0x7c6e,	// (0x0009325e) main_cset6_slider_pane_t2_ParamLimits

0x7c6e,	// (0x0009325e) main_cset6_slider_pane_t2

0x7c99,	// (0x00093289) main_cset6_slider_pane_t3_ParamLimits

0x7c99,	// (0x00093289) main_cset6_slider_pane_t3

0x7cc4,	// (0x000932b4) main_cset6_slider_pane_t4_ParamLimits

0x7cc4,	// (0x000932b4) main_cset6_slider_pane_t4

0x7cef,	// (0x000932df) main_cset6_slider_pane_t5_ParamLimits

0x7cef,	// (0x000932df) main_cset6_slider_pane_t5

0xdf4a,	// (0x0009953a) main_cset6_slider_pane_t7_ParamLimits

0xdf4a,	// (0x0009953a) main_cset6_slider_pane_t7

0x7d1a,	// (0x0009330a) main_cset6_slider_pane_t8_ParamLimits

0x7d1a,	// (0x0009330a) main_cset6_slider_pane_t8

0x7d3e,	// (0x0009332e) main_cset6_slider_pane_t9_ParamLimits

0x7d3e,	// (0x0009332e) main_cset6_slider_pane_t9

0x7d62,	// (0x00093352) main_cset6_slider_pane_t10_ParamLimits

0x7d62,	// (0x00093352) main_cset6_slider_pane_t10

0x7d86,	// (0x00093376) main_cset6_slider_pane_t11_ParamLimits

0x7d86,	// (0x00093376) main_cset6_slider_pane_t11

0xdf80,	// (0x00099570) main_cset6_slider_pane_t14_ParamLimits

0xdf80,	// (0x00099570) main_cset6_slider_pane_t14

0xdfb9,	// (0x000995a9) main_cset6_slider_pane_t15_ParamLimits

0xdfb9,	// (0x000995a9) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0009b1a7) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0009b1a7) main_cset6_slider_pane_t

0xdbc6,	// (0x000991b6) cset_slider_pane_g1_copy1

0xdbcf,	// (0x000991bf) cset_slider_pane_g2_copy1

0xdbd8,	// (0x000991c8) cset_slider_pane_g3_copy1

0x96d5,	// (0x00094cc5) bg_popup_sub_pane_cp011_copy1

0xdff2,	// (0x000995e2) main_cset_text_pane_g1_copy1

0xd8ac,	// (0x00098e9c) main_cset_text_pane_t1_copy1

0xd8ba,	// (0x00098eaa) main_cset_text_pane_t2_copy1

0xd8c8,	// (0x00098eb8) main_cset_text_pane_t3_copy1

0xd8d6,	// (0x00098ec6) main_cset_text_pane_t4_copy1

0xd8e4,	// (0x00098ed4) main_cset_text_pane_t5_copy1

0xdffa,	// (0x000995ea) main_cset_text_pane_t6_copy1

0xe008,	// (0x000995f8) main_cset_text_pane_t7_copy1

0x7daa,	// (0x0009339a) main_cset_text2_pane_t1_copy1

0xa4c1,	// (0x00095ab1) main_ncimui_pane

0x4348,	// (0x0008f938) popup_query_ncimui_window_ParamLimits

0x4348,	// (0x0008f938) popup_query_ncimui_window

0x9f4a,	// (0x0009553a) field_cale_ev2_pane_g4_ParamLimits

0x9f4a,	// (0x0009553a) field_cale_ev2_pane_g4

0x5f71,	// (0x00091561) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5f71,	// (0x00091561) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0009ae85) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0009ae85) cell_video_dialer_keypad_pane_g

0x5f89,	// (0x00091579) cell_video_dialer_keypad_pane_t1

0x96d5,	// (0x00094cc5) bg_popup_window_pane_cp012

0xafc2,	// (0x000965b2) heading_pane_cp06

0xe034,	// (0x00099624) ncim_query_content_pane

0x96d5,	// (0x00094cc5) bg_popup_heading_pane_cp01

0xe03c,	// (0x0009962c) ncim_heading_pane_t1

0xe04a,	// (0x0009963a) ncim_indicator_popup_pane

0xe05c,	// (0x0009964c) ncim_query_button_pane

0xe070,	// (0x00099660) ncim_query_content_pane_t1

0xe082,	// (0x00099672) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0009b1eb) ncim_query_content_pane_t

0xe0bc,	// (0x000996ac) ncim_query_list_pane

0xe0ce,	// (0x000996be) ncim_query_popup_pane

0xe04a,	// (0x0009963a) ncim_indicator_popup_pane_ParamLimits

0x7eee,	// (0x000934de) ncim_query_content_pane_g1_ParamLimits

0x7eee,	// (0x000934de) ncim_query_content_pane_g1

0xe070,	// (0x00099660) ncim_query_content_pane_t1_ParamLimits

0xe082,	// (0x00099672) ncim_query_content_pane_t2_ParamLimits

0x7efa,	// (0x000934ea) ncim_query_content_pane_t3_ParamLimits

0x7efa,	// (0x000934ea) ncim_query_content_pane_t3

0x7f22,	// (0x00093512) ncim_query_content_pane_t4_ParamLimits

0x7f22,	// (0x00093512) ncim_query_content_pane_t4

0x7f4a,	// (0x0009353a) ncim_query_content_pane_t5_ParamLimits

0x7f4a,	// (0x0009353a) ncim_query_content_pane_t5

0xe094,	// (0x00099684) ncim_query_content_pane_t6_ParamLimits

0xe094,	// (0x00099684) ncim_query_content_pane_t6

0xfbfb,	// (0x0009b1eb) ncim_query_content_pane_t_ParamLimits

0xe0bc,	// (0x000996ac) ncim_query_list_pane_ParamLimits

0xe0ce,	// (0x000996be) ncim_query_popup_pane_ParamLimits

0xe0e2,	// (0x000996d2) wait_bar_pane_cp04

0x96d5,	// (0x00094cc5) input_focus_pane_cp011

0xe0ea,	// (0x000996da) ncim_query_popup_pane_t1

0xe0f8,	// (0x000996e8) ncim_list_query_list_pane_ParamLimits

0xe0f8,	// (0x000996e8) ncim_list_query_list_pane

0x96d5,	// (0x00094cc5) bg_button_pane_cp027

0xe10b,	// (0x000996fb) ncim_query_button_pane_g1

0x96d5,	// (0x00094cc5) list_highlight_pane_cp012

0xe115,	// (0x00099705) ncim_list_query_list_pane_g1

0xe11d,	// (0x0009970d) ncim_list_query_list_pane_t1

0xa21d,	// (0x0009580d) cam4_indicators_pane_g3_ParamLimits

0xa21d,	// (0x0009580d) cam4_indicators_pane_g3

0xa29b,	// (0x0009588b) vid4_indicators_pane_g5_ParamLimits

0xa29b,	// (0x0009588b) vid4_indicators_pane_g5

0xa367,	// (0x00095957) vid4_progress_pane_g5_ParamLimits

0xa367,	// (0x00095957) vid4_progress_pane_g5

0x7ddc,	// (0x000933cc) main_ncimui_pane_g1

0x7e42,	// (0x00093432) ncimui_group_query_pane_ParamLimits

0x7e42,	// (0x00093432) ncimui_group_query_pane

0x7e8a,	// (0x0009347a) ncimui_list_pane_ParamLimits

0x7e8a,	// (0x0009347a) ncimui_list_pane

0x7eb1,	// (0x000934a1) ncimui_text_pane_ParamLimits

0x7eb1,	// (0x000934a1) ncimui_text_pane

0x7f72,	// (0x00093562) ncimui_text_pane_t1_ParamLimits

0x7f72,	// (0x00093562) ncimui_text_pane_t1

0xe12b,	// (0x0009971b) ncimui_list_single_graphic_pane_ParamLimits

0xe12b,	// (0x0009971b) ncimui_list_single_graphic_pane

0x7f90,	// (0x00093580) ncimui_query_pane_ParamLimits

0x7f90,	// (0x00093580) ncimui_query_pane

0x96d5,	// (0x00094cc5) list_highlight_pane_cp013

0xe13b,	// (0x0009972b) ncim_list_query_list_pane_t1_copy1

0xe115,	// (0x00099705) ncim_list_single_graphic_pane_g1

0xe149,	// (0x00099739) ncim_query_button_pane_cp01

0xe155,	// (0x00099745) ncim_query_entry_pane_ParamLimits

0xe155,	// (0x00099745) ncim_query_entry_pane

0xe168,	// (0x00099758) ncimui_query_pane_g1

0xe174,	// (0x00099764) ncimui_query_pane_t1_ParamLimits

0xe174,	// (0x00099764) ncimui_query_pane_t1

0xa4c1,	// (0x00095ab1) input_focus_pane_cp012

0xe18d,	// (0x0009977d) ncim_query_entry_pane_t1

0xa6fa,	// (0x00095cea) main_im_pane_ParamLimits

0xa4c1,	// (0x00095ab1) main_mobtv_pane_ParamLimits

0xa4c1,	// (0x00095ab1) main_mobtv_pane

0x7c56,	// (0x00093246) main_cset6_slider_pane_g18_ParamLimits

0x7c56,	// (0x00093246) main_cset6_slider_pane_g18

0x7c62,	// (0x00093252) main_cset6_slider_pane_g19_ParamLimits

0x7c62,	// (0x00093252) main_cset6_slider_pane_g19

0xb229,	// (0x00096819) bg_main_mobtv_pane_ParamLimits

0xb229,	// (0x00096819) bg_main_mobtv_pane

0x7fa3,	// (0x00093593) main_mobtv_info_pane

0x7fac,	// (0x0009359c) main_mobtv_loading_pane_ParamLimits

0x7fac,	// (0x0009359c) main_mobtv_loading_pane

0xe19f,	// (0x0009978f) main_mobtv_pg_channel_list_pane

0xe1a9,	// (0x00099799) main_mobtv_pg_hdr_pane

0x7fb9,	// (0x000935a9) main_mobtv_programe_curr_pane_ParamLimits

0x7fb9,	// (0x000935a9) main_mobtv_programe_curr_pane

0x7fc6,	// (0x000935b6) main_mobtv_programe_next_pane_ParamLimits

0x7fc6,	// (0x000935b6) main_mobtv_programe_next_pane

0xe1b2,	// (0x000997a2) popup_mobtv_noti_window

0xcbc4,	// (0x000981b4) main_tv_pg_hdr_pane_g1

0xe1ba,	// (0x000997aa) main_tv_pg_hdr_pane_g2

0xe1c2,	// (0x000997b2) main_tv_pg_hdr_pane_g3

0xe1ca,	// (0x000997ba) main_tv_pg_hdr_pane_g4

0xe1d2,	// (0x000997c2) main_tv_pg_hdr_pane_g5

0xe1dc,	// (0x000997cc) main_tv_pg_hdr_pane_g6

0xe1e6,	// (0x000997d6) main_tv_pg_hdr_pane_g7

0xe1f0,	// (0x000997e0) main_tv_pg_hdr_pane_g8

0xe1fa,	// (0x000997ea) main_tv_pg_hdr_pane_g9

0xe204,	// (0x000997f4) main_tv_pg_hdr_pane_g10

0xe20e,	// (0x000997fe) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0009b1f8) main_tv_pg_hdr_pane_g

0xe218,	// (0x00099808) main_tv_pg_hdr_pane_t1

0xe226,	// (0x00099816) main_tv_pg_hdr_pane_t2

0xe234,	// (0x00099824) main_tv_pg_hdr_pane_t3

0xe244,	// (0x00099834) main_tv_pg_hdr_pane_t4

0xe254,	// (0x00099844) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0009b20f) main_tv_pg_hdr_pane_t

0xe264,	// (0x00099854) single_mobtv_pg_channel_pane_ParamLimits

0xe264,	// (0x00099854) single_mobtv_pg_channel_pane

0xe276,	// (0x00099866) single_mobtv_pg_channel_table_pane

0xe27f,	// (0x0009986f) single_mobtv_pg_channel_thumb_pane

0xe288,	// (0x00099878) single_tv_pg_channel_pane_g1

0xe291,	// (0x00099881) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0009b21a) single_tv_pg_channel_pane_g

0xce24,	// (0x00098414) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce24,	// (0x00098414) bg_single_mobtv_pg_channel_thumb_pane

0xe29a,	// (0x0009988a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe29a,	// (0x0009988a) single_mobtv_pg_channel_thumb_pane_g1

0xe2a8,	// (0x00099898) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2a8,	// (0x00099898) single_mobtv_pg_channel_thumb_pane_g2

0xe2b4,	// (0x000998a4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2b4,	// (0x000998a4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0009b21f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0009b21f) single_mobtv_pg_channel_thumb_pane_g

0xe2c0,	// (0x000998b0) single_mobtv_pg_channel_thumb_pane_t1

0xe2ce,	// (0x000998be) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0009b226) single_mobtv_pg_channel_thumb_pane_t

0xcbc4,	// (0x000981b4) bg_single_mobtv_pg_channel_table_pane_g1

0xcbc4,	// (0x000981b4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0009accc) bg_single_mobtv_pg_channel_table_pane_g

0xe2dc,	// (0x000998cc) single_mobtv_pg_channel_table_pane_t1

0xe2ea,	// (0x000998da) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0009b22b) single_mobtv_pg_channel_table_pane_t

0x7fdb,	// (0x000935cb) main_mobtv_info_pane_g1_ParamLimits

0x7fdb,	// (0x000935cb) main_mobtv_info_pane_g1

0x7ff9,	// (0x000935e9) main_mobtv_info_pane_t1_ParamLimits

0x7ff9,	// (0x000935e9) main_mobtv_info_pane_t1

0x8071,	// (0x00093661) main_mobtv_info_pane_t2_ParamLimits

0x8071,	// (0x00093661) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0009b235) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0009b235) main_mobtv_info_pane_t

0x8100,	// (0x000936f0) wait_bar_pane_cp05

0x8112,	// (0x00093702) main_mobtv_loading_pane_g1_ParamLimits

0x8112,	// (0x00093702) main_mobtv_loading_pane_g1

0x8125,	// (0x00093715) main_mobtv_loading_pane_g2_ParamLimits

0x8125,	// (0x00093715) main_mobtv_loading_pane_g2

0x8131,	// (0x00093721) main_mobtv_loading_pane_g3_ParamLimits

0x8131,	// (0x00093721) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0009b23c) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0009b23c) main_mobtv_loading_pane_g

0xe2f8,	// (0x000998e8) main_mobtv_loading_pane_t1_ParamLimits

0xe2f8,	// (0x000998e8) main_mobtv_loading_pane_t1

0xe310,	// (0x00099900) main_mobtv_loading_pane_t2_ParamLimits

0xe310,	// (0x00099900) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0009b243) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0009b243) main_mobtv_loading_pane_t

0x8144,	// (0x00093734) wait_bar_pane_cp06_ParamLimits

0x8144,	// (0x00093734) wait_bar_pane_cp06

0xe334,	// (0x00099924) main_mobtv_programe_curr_pane_t1

0xe342,	// (0x00099932) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0009b248) main_mobtv_programe_curr_pane_t

0xe350,	// (0x00099940) main_mobtv_programe_next_pane_t1

0xe35e,	// (0x0009994e) main_mobtv_programe_next_pane_t2

0xe36c,	// (0x0009995c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0009b24d) main_mobtv_programe_next_pane_t

0x96d5,	// (0x00094cc5) bg_popup_mobtv_noti_window_pane

0xe37a,	// (0x0009996a) popup_mobtv_noti_window_g1

0xe382,	// (0x00099972) popup_mobtv_noti_window_t1

0xe390,	// (0x00099980) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0009b254) popup_mobtv_noti_window_t

0xcbc4,	// (0x000981b4) bg_popup_mobtv_noti_window_pane_g1

0x96d5,	// (0x00094cc5) sc_clock_pane

0x96d5,	// (0x00094cc5) main_fs_bigclock_pane

0x78a2,	// (0x00092e92) blid2_tripm_pane_t4_ParamLimits

0x78a2,	// (0x00092e92) blid2_tripm_pane_t4

0x8153,	// (0x00093743) sc_clock_pane_g1_ParamLimits

0x8153,	// (0x00093743) sc_clock_pane_g1

0x8165,	// (0x00093755) sc_clock_pane_t1_ParamLimits

0x8165,	// (0x00093755) sc_clock_pane_t1

0x8187,	// (0x00093777) sc_clock_pane_t2_ParamLimits

0x8187,	// (0x00093777) sc_clock_pane_t2

0x819f,	// (0x0009378f) sc_clock_pane_t3_ParamLimits

0x819f,	// (0x0009378f) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0009b259) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0009b259) sc_clock_pane_t

0x8cd7,	// (0x000942c7) main_fs_bigclock_indicator_pane_ParamLimits

0x8cd7,	// (0x000942c7) main_fs_bigclock_indicator_pane

0x823f,	// (0x0009382f) main_fs_bigclock_pane_g1_ParamLimits

0x823f,	// (0x0009382f) main_fs_bigclock_pane_g1

0x8ce3,	// (0x000942d3) main_fs_bigclock_pane_t1_ParamLimits

0x8ce3,	// (0x000942d3) main_fs_bigclock_pane_t1

0x8cf5,	// (0x000942e5) main_fs_bigclock_pane_t2_ParamLimits

0x8cf5,	// (0x000942e5) main_fs_bigclock_pane_t2

0x8d07,	// (0x000942f7) main_fs_bigclock_pane_t3_ParamLimits

0x8d07,	// (0x000942f7) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0009b463) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0009b463) main_fs_bigclock_pane_t

0xec93,	// (0x0009a283) main_fs_bigclock_indicator_pane_g1

0xe064,	// (0x00099654) ncim_query_content_pane_g2_ParamLimits

0xe064,	// (0x00099654) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0009b1e6) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0009b1e6) ncim_query_content_pane_g

0x81b8,	// (0x000937a8) sc_clock_pane_t4_ParamLimits

0x81b8,	// (0x000937a8) sc_clock_pane_t4

0xa4c1,	// (0x00095ab1) main_radioblah_pane

0xd57a,	// (0x00098b6a) cell_call4_button_pane_t1_copy1_ParamLimits

0xd57a,	// (0x00098b6a) cell_call4_button_pane_t1_copy1

0x7df4,	// (0x000933e4) main_ncimui_pane_t1_ParamLimits

0x7df4,	// (0x000933e4) main_ncimui_pane_t1

0x7e0e,	// (0x000933fe) main_ncimui_pane_t2_ParamLimits

0x7e0e,	// (0x000933fe) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0009b1df) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0009b1df) main_ncimui_pane_t

0xe4d5,	// (0x00099ac5) main_radioblah_anim_pane_ParamLimits

0xe4d5,	// (0x00099ac5) main_radioblah_anim_pane

0xe4e6,	// (0x00099ad6) main_radioblah_info_pane_ParamLimits

0xe4e6,	// (0x00099ad6) main_radioblah_info_pane

0xe4fa,	// (0x00099aea) main_radioblah_pane_t1_ParamLimits

0xe4fa,	// (0x00099aea) main_radioblah_pane_t1

0xe516,	// (0x00099b06) main_radioblah_pane_t2_ParamLimits

0xe516,	// (0x00099b06) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0009b27a) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0009b27a) main_radioblah_pane_t

0x8297,	// (0x00093887) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8297,	// (0x00093887) main_radioblah_rocker_ctrl_pane

0xe55e,	// (0x00099b4e) main_radioblah_info_pane_t1_ParamLimits

0xe55e,	// (0x00099b4e) main_radioblah_info_pane_t1

0x82ef,	// (0x000938df) main_radioblah_info_pane_t2_ParamLimits

0x82ef,	// (0x000938df) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0009b283) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0009b283) main_radioblah_info_pane_t

0xcbc4,	// (0x000981b4) main_radioblah_rocker_ctrl_pane_g1

0x839f,	// (0x0009398f) main_radioblah_rocker_ctrl_pane_g2

0x83a7,	// (0x00093997) main_radioblah_rocker_ctrl_pane_g3

0x83af,	// (0x0009399f) main_radioblah_rocker_ctrl_pane_g4

0x83b7,	// (0x000939a7) main_radioblah_rocker_ctrl_pane_g5

0x83bf,	// (0x000939af) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0009b28c) main_radioblah_rocker_ctrl_pane_g

0x7daa,	// (0x0009339a) main_cset_text2_pane_t1_copy1_ParamLimits

0xa1ed,	// (0x000957dd) cam4_image_uncrop_qvga_pane

0xa246,	// (0x00095836) vid4_image_uncrop_qcif_pane

0xa3b2,	// (0x000959a2) cam6_image_uncrop_qvga_pane_ParamLimits

0xa3b2,	// (0x000959a2) cam6_image_uncrop_qvga_pane

0xdd6b,	// (0x0009935b) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd6b,	// (0x0009935b) vid6_image_uncrop_qcif_pane

0x96d5,	// (0x00094cc5) bg_popup_preview_window_pane_cp03

0xe016,	// (0x00099606) list_cset_text2_pane

0xe01e,	// (0x0009960e) main_cset6_text2_pane_g1

0xe026,	// (0x00099616) main_cset6_text2_pane_t1

0xe598,	// (0x00099b88) list_cset_text2_pane_t1_ParamLimits

0xe598,	// (0x00099b88) list_cset_text2_pane_t1

0xa4c1,	// (0x00095ab1) main_radioblah_pane_ParamLimits

0x80ec,	// (0x000936dc) main_mobtv_info_pane_t3_ParamLimits

0x80ec,	// (0x000936dc) main_mobtv_info_pane_t3

0x8285,	// (0x00093875) main_radioblah_pane_g1

0x82bf,	// (0x000938af) main_radioblah_info_pane_g1

0x8344,	// (0x00093934) main_radioblah_info_pane_t3_ParamLimits

0x8344,	// (0x00093934) main_radioblah_info_pane_t3

0x2f54,	// (0x0008e544) highlight_cell_cale_month_pane_ParamLimits

0x2f54,	// (0x0008e544) highlight_cell_cale_month_pane

0x96d5,	// (0x00094cc5) main_phob_fisheye_pane

0xcf00,	// (0x000984f0) scroll_pane_cp0031_ParamLimits

0xcf00,	// (0x000984f0) scroll_pane_cp0031

0xde79,	// (0x00099469) wait_bar_pane_cp08_ParamLimits

0x7bd4,	// (0x000931c4) cset_list_set_pane_copy1_ParamLimits

0xe5b3,	// (0x00099ba3) highlight_cell_cale_month_pane_g1

0x83c7,	// (0x000939b7) highlight_cell_cale_month_pane_t1

0xdad8,	// (0x000990c8) list_gen_pane_cp01

0xd753,	// (0x00098d43) scroll_pane_01

0x06db,	// (0x0008bccb) list_single_double_fisheye_pane

0x06e4,	// (0x0008bcd4) list_double_fisheye_pane_g1_ParamLimits

0x06e4,	// (0x0008bcd4) list_double_fisheye_pane_g1

0x06f0,	// (0x0008bce0) list_double_fisheye_pane_g2_ParamLimits

0x06f0,	// (0x0008bce0) list_double_fisheye_pane_g2

0x0704,	// (0x0008bcf4) list_double_fisheye_pane_g3_ParamLimits

0x0704,	// (0x0008bcf4) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0009b299) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0009b299) list_double_fisheye_pane_g

0x072d,	// (0x0008bd1d) list_double_fisheye_pane_t1_ParamLimits

0x072d,	// (0x0008bd1d) list_double_fisheye_pane_t1

0x0748,	// (0x0008bd38) list_double_fisheye_pane_t2_ParamLimits

0x0748,	// (0x0008bd38) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0009b2a4) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0009b2a4) list_double_fisheye_pane_t

0x96d5,	// (0x00094cc5) main_call5_pane

0x81e3,	// (0x000937d3) sc_swipe_pane_ParamLimits

0x81e3,	// (0x000937d3) sc_swipe_pane

0x83e8,	// (0x000939d8) call5_image_pane_ParamLimits

0x83e8,	// (0x000939d8) call5_image_pane

0x8405,	// (0x000939f5) call5_swipe_1_pane_ParamLimits

0x8405,	// (0x000939f5) call5_swipe_1_pane

0x8418,	// (0x00093a08) call5_swipe_2_pane_ParamLimits

0x8418,	// (0x00093a08) call5_swipe_2_pane

0x8443,	// (0x00093a33) popup_call5_audio_first_window_ParamLimits

0x8443,	// (0x00093a33) popup_call5_audio_first_window

0xce24,	// (0x00098414) call5_swipe_1_pane_g1_ParamLimits

0xce24,	// (0x00098414) call5_swipe_1_pane_g1

0xe5bb,	// (0x00099bab) call5_swipe_1_pane_g2_ParamLimits

0xe5bb,	// (0x00099bab) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0009b2a9) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0009b2a9) call5_swipe_1_pane_g

0xe5c7,	// (0x00099bb7) call5_swipe_1_pane_t1_ParamLimits

0xe5c7,	// (0x00099bb7) call5_swipe_1_pane_t1

0xce24,	// (0x00098414) call5_swipe_2_pane_g1_ParamLimits

0xce24,	// (0x00098414) call5_swipe_2_pane_g1

0xe5dc,	// (0x00099bcc) call5_swipe_2_pane_g2_ParamLimits

0xe5dc,	// (0x00099bcc) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0009b2ae) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0009b2ae) call5_swipe_2_pane_g

0xe5e8,	// (0x00099bd8) call5_swipe_2_pane_t1_ParamLimits

0xe5e8,	// (0x00099bd8) call5_swipe_2_pane_t1

0xe5fd,	// (0x00099bed) sc_swipe_pane_g1_ParamLimits

0xe5fd,	// (0x00099bed) sc_swipe_pane_g1

0xe60a,	// (0x00099bfa) sc_swipe_pane_g2_ParamLimits

0xe60a,	// (0x00099bfa) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0009b2b3) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0009b2b3) sc_swipe_pane_g

0xe616,	// (0x00099c06) sc_swipe_pane_t1_ParamLimits

0xe616,	// (0x00099c06) sc_swipe_pane_t1

0x96d5,	// (0x00094cc5) main_cmail_launcher_pane

0x8454,	// (0x00093a44) aid_size_cell_cmail_l_ParamLimits

0x8454,	// (0x00093a44) aid_size_cell_cmail_l

0x846e,	// (0x00093a5e) grid_cmail_l_pane_ParamLimits

0x846e,	// (0x00093a5e) grid_cmail_l_pane

0x8489,	// (0x00093a79) cell_cmail_l_pane_ParamLimits

0x8489,	// (0x00093a79) cell_cmail_l_pane

0x84af,	// (0x00093a9f) cell_cmail_l_pane_g1_ParamLimits

0x84af,	// (0x00093a9f) cell_cmail_l_pane_g1

0x84c0,	// (0x00093ab0) cell_cmail_l_pane_t1_ParamLimits

0x84c0,	// (0x00093ab0) cell_cmail_l_pane_t1

0xe62b,	// (0x00099c1b) cell_cmail_l_pane_t2_ParamLimits

0xe62b,	// (0x00099c1b) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0009b2b8) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0009b2b8) cell_cmail_l_pane_t

0xa4c1,	// (0x00095ab1) grid_highlight_pane_cp018_ParamLimits

0xa4c1,	// (0x00095ab1) grid_highlight_pane_cp018

0x0f8b,	// (0x0008c57b) main2_pane_ParamLimits

0x0f8b,	// (0x0008c57b) main2_pane

0xa7a5,	// (0x00095d95) popup_sp_fs_action_menu_bg_pane_g1

0xa7ad,	// (0x00095d9d) popup_sp_fs_action_menu_bg_pane_g2

0xa7b5,	// (0x00095da5) popup_sp_fs_action_menu_bg_pane_g3

0xa7bd,	// (0x00095dad) popup_sp_fs_action_menu_bg_pane_g4

0xa7c5,	// (0x00095db5) popup_sp_fs_action_menu_bg_pane_g5

0xa7cd,	// (0x00095dbd) popup_sp_fs_action_menu_bg_pane_g6

0xa7d5,	// (0x00095dc5) popup_sp_fs_action_menu_bg_pane_g7

0xa7dd,	// (0x00095dcd) popup_sp_fs_action_menu_bg_pane_g8

0xa7e5,	// (0x00095dd5) popup_sp_fs_action_menu_bg_pane_g9

0xa7ed,	// (0x00095ddd) popup_sp_fs_action_menu_bg_pane_g10

0xa7ed,	// (0x00095ddd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0009a77a) popup_sp_fs_action_menu_bg_pane_g

0x0060,	// (0x0008b650) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x2_t3_g3_g1

0x006c,	// (0x0008b65c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x006c,	// (0x0008b65c) list_medium_line_x2_t3_g3_g2

0x0078,	// (0x0008b668) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0078,	// (0x0008b668) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0009a828) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0009a828) list_medium_line_x2_t3_g3_g

0x0084,	// (0x0008b674) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0084,	// (0x0008b674) list_medium_line_x2_t3_g3_t1

0x0099,	// (0x0008b689) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0099,	// (0x0008b689) list_medium_line_x2_t3_g3_t2

0x00ad,	// (0x0008b69d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x00ad,	// (0x0008b69d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0009a82f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0009a82f) list_medium_line_x2_t3_g3_t

0x0060,	// (0x0008b650) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x2_t3_g2_g1

0x0078,	// (0x0008b668) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0078,	// (0x0008b668) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0009a836) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0009a836) list_medium_line_x2_t3_g2_g

0x00c2,	// (0x0008b6b2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x00c2,	// (0x0008b6b2) list_medium_line_x2_t3_g2_t1

0x00d8,	// (0x0008b6c8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x00d8,	// (0x0008b6c8) list_medium_line_x2_t3_g2_t2

0x00ea,	// (0x0008b6da) list_medium_line_x2_t3_g2_t3_ParamLimits

0x00ea,	// (0x0008b6da) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0009a83b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0009a83b) list_medium_line_x2_t3_g2_t

0x0060,	// (0x0008b650) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x2_t4_g4_g1

0x0107,	// (0x0008b6f7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0107,	// (0x0008b6f7) list_medium_line_x2_t4_g4_g2

0x006c,	// (0x0008b65c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x006c,	// (0x0008b65c) list_medium_line_x2_t4_g4_g3

0x0113,	// (0x0008b703) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0113,	// (0x0008b703) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0009a842) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0009a842) list_medium_line_x2_t4_g4_g

0x011f,	// (0x0008b70f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x011f,	// (0x0008b70f) list_medium_line_x2_t4_g4_t1

0x0139,	// (0x0008b729) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0139,	// (0x0008b729) list_medium_line_x2_t4_g4_t2

0x014e,	// (0x0008b73e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x014e,	// (0x0008b73e) list_medium_line_x2_t4_g4_t3

0x0163,	// (0x0008b753) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0163,	// (0x0008b753) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0009a84b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0009a84b) list_medium_line_x2_t4_g4_t

0x0060,	// (0x0008b650) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x2_t2_g4_g1

0x0107,	// (0x0008b6f7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0107,	// (0x0008b6f7) list_medium_line_x2_t2_g4_g2

0x006c,	// (0x0008b65c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x006c,	// (0x0008b65c) list_medium_line_x2_t2_g4_g3

0x0078,	// (0x0008b668) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0078,	// (0x0008b668) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0009a8b2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0009a8b2) list_medium_line_x2_t2_g4_g

0x0175,	// (0x0008b765) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0175,	// (0x0008b765) list_medium_line_x2_t2_g4_t1

0x00ad,	// (0x0008b69d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x00ad,	// (0x0008b69d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0009a8bb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0009a8bb) list_medium_line_x2_t2_g4_t

0x0060,	// (0x0008b650) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x2_t2_g3_g1

0x006c,	// (0x0008b65c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x006c,	// (0x0008b65c) list_medium_line_x2_t2_g3_g2

0x0078,	// (0x0008b668) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0078,	// (0x0008b668) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0009a828) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0009a828) list_medium_line_x2_t2_g3_g

0x018a,	// (0x0008b77a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x018a,	// (0x0008b77a) list_medium_line_x2_t2_g3_t1

0x00ad,	// (0x0008b69d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x00ad,	// (0x0008b69d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0009a8c0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0009a8c0) list_medium_line_x2_t2_g3_t

0x30a4,	// (0x0008e694) main_sp_fs_list_pane_ParamLimits

0x30a4,	// (0x0008e694) main_sp_fs_list_pane

0xc058,	// (0x00097648) sp_fs_scroll_pane_ParamLimits

0xc058,	// (0x00097648) sp_fs_scroll_pane

0x019f,	// (0x0008b78f) list_medium_line_x2_t3_t1

0x01af,	// (0x0008b79f) list_medium_line_x2_t3_t2

0x01bd,	// (0x0008b7ad) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0009a90b) list_medium_line_x2_t3_t

0x01cb,	// (0x0008b7bb) list_medium_line_x3_t4_t1

0x01db,	// (0x0008b7cb) list_medium_line_x3_t4_t2

0x01e9,	// (0x0008b7d9) list_medium_line_x3_t4_t3

0x01bd,	// (0x0008b7ad) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0009a912) list_medium_line_x3_t4_t

0x01f7,	// (0x0008b7e7) list_medium_line_x4_t5_t1

0x0207,	// (0x0008b7f7) list_medium_line_x4_t5_t2

0x01e9,	// (0x0008b7d9) list_medium_line_x4_t5_t3

0x0215,	// (0x0008b805) list_medium_line_x4_t5_t4

0x01bd,	// (0x0008b7ad) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0009a91b) list_medium_line_x4_t5_t

0x0060,	// (0x0008b650) list_medium_line_t4_g4_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_t4_g4_g1

0x0113,	// (0x0008b703) list_medium_line_t4_g4_g2_ParamLimits

0x0113,	// (0x0008b703) list_medium_line_t4_g4_g2

0x0223,	// (0x0008b813) list_medium_line_t4_g4_g3_ParamLimits

0x0223,	// (0x0008b813) list_medium_line_t4_g4_g3

0x0078,	// (0x0008b668) list_medium_line_t4_g4_g4_ParamLimits

0x0078,	// (0x0008b668) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0009a926) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0009a926) list_medium_line_t4_g4_g

0x022f,	// (0x0008b81f) list_medium_line_t4_g4_t1_ParamLimits

0x022f,	// (0x0008b81f) list_medium_line_t4_g4_t1

0x0244,	// (0x0008b834) list_medium_line_t4_g4_t2_ParamLimits

0x0244,	// (0x0008b834) list_medium_line_t4_g4_t2

0x0259,	// (0x0008b849) list_medium_line_t4_g4_t3_ParamLimits

0x0259,	// (0x0008b849) list_medium_line_t4_g4_t3

0x00ad,	// (0x0008b69d) list_medium_line_t4_g4_t4_ParamLimits

0x00ad,	// (0x0008b69d) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0009a92f) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0009a92f) list_medium_line_t4_g4_t

0x314f,	// (0x0008e73f) chi_dic_find_pane_g1

0x4120,	// (0x0008f710) main_tport_pane

0x045b,	// (0x0008ba4b) list_medium_line_plain_t1

0x0469,	// (0x0008ba59) list_medium_line_t2_g2_g1_ParamLimits

0x0469,	// (0x0008ba59) list_medium_line_t2_g2_g1

0x7080,	// (0x00092670) list_medium_line_t2_g2_g2_ParamLimits

0x7080,	// (0x00092670) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0009aff0) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0009aff0) list_medium_line_t2_g2_g

0x0475,	// (0x0008ba65) list_medium_line_t2_g2_t1_ParamLimits

0x0475,	// (0x0008ba65) list_medium_line_t2_g2_t1

0x048c,	// (0x0008ba7c) list_medium_line_t2_g2_t2_ParamLimits

0x048c,	// (0x0008ba7c) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0009aff5) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0009aff5) list_medium_line_t2_g2_t

0x7676,	// (0x00092c66) aid_sp_fs_list_icon_a_sm

0xa3a1,	// (0x00095991) aid_sp_fs_list_icon_d

0xb220,	// (0x00096810) aid_sp_fs_text_primary

0xa3a9,	// (0x00095999) aid_sp_fs_text_secondary

0x767e,	// (0x00092c6e) list_medium_line

0x767e,	// (0x00092c6e) list_medium_line_g2

0x767e,	// (0x00092c6e) list_medium_line_g3

0x767e,	// (0x00092c6e) list_medium_line_plain

0x767e,	// (0x00092c6e) list_medium_line_plain_t2

0x767e,	// (0x00092c6e) list_medium_line_plain_t3

0x767e,	// (0x00092c6e) list_medium_line_right_icon

0x767e,	// (0x00092c6e) list_medium_line_right_iconx2

0x767e,	// (0x00092c6e) list_medium_line_t2

0x767e,	// (0x00092c6e) list_medium_line_t2_g2

0x767e,	// (0x00092c6e) list_medium_line_t2_g3

0x767e,	// (0x00092c6e) list_medium_line_t2_right_icon

0x767e,	// (0x00092c6e) list_medium_line_t2_right_iconx2

0x767e,	// (0x00092c6e) list_medium_line_t3

0x767e,	// (0x00092c6e) list_medium_line_t3_g2

0x767e,	// (0x00092c6e) list_medium_line_t3_g3

0x767e,	// (0x00092c6e) list_medium_line_t3_right_iconx2

0x05b9,	// (0x0008bba9) list_medium_line_t4_g4

0x05c2,	// (0x0008bbb2) list_medium_line_x2

0x05c2,	// (0x0008bbb2) list_medium_line_x2_t2_g2

0x05c2,	// (0x0008bbb2) list_medium_line_x2_t2_g3

0x05c2,	// (0x0008bbb2) list_medium_line_x2_t2_g4

0x05c2,	// (0x0008bbb2) list_medium_line_x2_t3

0x05c2,	// (0x0008bbb2) list_medium_line_x2_t3_g2

0x05c2,	// (0x0008bbb2) list_medium_line_x2_t3_g3

0x05c2,	// (0x0008bbb2) list_medium_line_x2_t3_g4

0x05c2,	// (0x0008bbb2) list_medium_line_x2_t4_g2

0x05c2,	// (0x0008bbb2) list_medium_line_x2_t4_g4

0x05cb,	// (0x0008bbbb) list_medium_line_x3

0x05cb,	// (0x0008bbbb) list_medium_line_x3_t4

0x05cb,	// (0x0008bbbb) list_medium_line_x3_t4_g4

0x05b9,	// (0x0008bba9) list_medium_line_x4_t4

0x05b9,	// (0x0008bba9) list_medium_line_x4_t4_g7

0x05b9,	// (0x0008bba9) list_medium_line_x4_t5

0x05d4,	// (0x0008bbc4) list_single_fs_dyc_pane_ParamLimits

0x05d4,	// (0x0008bbc4) list_single_fs_dyc_pane

0x0060,	// (0x0008b650) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x4_t4_g7_g1

0x060c,	// (0x0008bbfc) list_medium_line_x4_t4_g7_g2_ParamLimits

0x060c,	// (0x0008bbfc) list_medium_line_x4_t4_g7_g2

0x0618,	// (0x0008bc08) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0618,	// (0x0008bc08) list_medium_line_x4_t4_g7_g3

0x0627,	// (0x0008bc17) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0627,	// (0x0008bc17) list_medium_line_x4_t4_g7_g4

0x0633,	// (0x0008bc23) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0633,	// (0x0008bc23) list_medium_line_x4_t4_g7_g5

0x0642,	// (0x0008bc32) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0642,	// (0x0008bc32) list_medium_line_x4_t4_g7_g6

0x0651,	// (0x0008bc41) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0651,	// (0x0008bc41) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0009b1c0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0009b1c0) list_medium_line_x4_t4_g7_g

0x065d,	// (0x0008bc4d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x065d,	// (0x0008bc4d) list_medium_line_x4_t4_g7_t1

0x0672,	// (0x0008bc62) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0672,	// (0x0008bc62) list_medium_line_x4_t4_g7_t2

0x0687,	// (0x0008bc77) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0687,	// (0x0008bc77) list_medium_line_x4_t4_g7_t3

0x069c,	// (0x0008bc8c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x069c,	// (0x0008bc8c) list_medium_line_x4_t4_g7_t4

0x06ae,	// (0x0008bc9e) list_medium_line_x4_t4_g7_t5_ParamLimits

0x06ae,	// (0x0008bc9e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0009b1cf) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0009b1cf) list_medium_line_x4_t4_g7_t

0x06c0,	// (0x0008bcb0) list_single_dyc_row_pane_ParamLimits

0x06c0,	// (0x0008bcb0) list_single_dyc_row_pane

0x83d5,	// (0x000939c5) call5_gesture_pane_ParamLimits

0x83d5,	// (0x000939c5) call5_gesture_pane

0x842b,	// (0x00093a1b) call5_windows_pane_ParamLimits

0x842b,	// (0x00093a1b) call5_windows_pane

0x84d6,	// (0x00093ac6) call5_swipe_1_pane_cp_ParamLimits

0x84d6,	// (0x00093ac6) call5_swipe_1_pane_cp

0x84e2,	// (0x00093ad2) call5_swipe_2_pane_cp_ParamLimits

0x84e2,	// (0x00093ad2) call5_swipe_2_pane_cp

0xa8c8,	// (0x00095eb8) call5_image_pane_cp

0x84ee,	// (0x00093ade) popup_call5_audio_first_window_cp_ParamLimits

0x84ee,	// (0x00093ade) popup_call5_audio_first_window_cp

0xe5fd,	// (0x00099bed) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5fd,	// (0x00099bed) call5_swipe_1_pane_g1_cp

0xe63d,	// (0x00099c2d) call5_swipe_1_pane_g2_cp

0xe616,	// (0x00099c06) call5_swipe_1_pane_t1_cp_ParamLimits

0xe616,	// (0x00099c06) call5_swipe_1_pane_t1_cp

0xe5fd,	// (0x00099bed) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5fd,	// (0x00099bed) call5_swipe_2_pane_g1_cp

0xe645,	// (0x00099c35) call5_swipe_2_pane_g2_cp

0xe64d,	// (0x00099c3d) call5_swipe_2_pane_t1_cp_ParamLimits

0xe64d,	// (0x00099c3d) call5_swipe_2_pane_t1_cp

0xa4c1,	// (0x00095ab1) main_sp_fs_email_pane

0xe662,	// (0x00099c52) main_sp_fs_listscroll_pane_te

0xb237,	// (0x00096827) popup_sp_fs_action_menu_pane_ParamLimits

0xb237,	// (0x00096827) popup_sp_fs_action_menu_pane

0xcbc4,	// (0x000981b4) bg_sp_fs_ctrlbar_pane_g1

0xe66b,	// (0x00099c5b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe674,	// (0x00099c64) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe67d,	// (0x00099c6d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbc4,	// (0x000981b4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0009b2bd) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9a7,	// (0x00097f97) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9a7,	// (0x00097f97) bg_sp_fs_ctrlbar_ddmenu_pane

0xe686,	// (0x00099c76) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe686,	// (0x00099c76) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe692,	// (0x00099c82) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe692,	// (0x00099c82) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0009b2c6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0009b2c6) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe69e,	// (0x00099c8e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe69e,	// (0x00099c8e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x84fc,	// (0x00093aec) list_medium_line_t2_right_icon_g1

0x076a,	// (0x0008bd5a) list_medium_line_t2_right_icon_t1

0x077a,	// (0x0008bd6a) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0009b2cb) list_medium_line_t2_right_icon_t

0xc7ba,	// (0x00097daa) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7ba,	// (0x00097daa) bg_sp_fs_ctrlbar_pane

0x854c,	// (0x00093b3c) main_sp_fs_ctrlbar_button_pane_cp01

0x8556,	// (0x00093b46) main_sp_fs_ctrlbar_ddmenu_pane

0xe6f0,	// (0x00099ce0) main_sp_fs_ctrlbar_pane_g1

0xe6fc,	// (0x00099cec) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0009b2d0) main_sp_fs_ctrlbar_pane_g

0xe708,	// (0x00099cf8) main_sp_fs_ctrlbar_pane_t1

0x8560,	// (0x00093b50) main_sp_fs_ctrlbar_pane

0x8584,	// (0x00093b74) main_sp_fs_listscroll_pane_te_cp01

0x078c,	// (0x0008bd7c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x078c,	// (0x0008bd7c) popup_sp_fs_action_menu_pane_cp01

0xa4c1,	// (0x00095ab1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4c1,	// (0x00095ab1) bg_sp_fs_highlight_list_pane_cp01

0x85a4,	// (0x00093b94) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x85a4,	// (0x00093b94) sp_fs_action_menu_list_gene_pane_g1

0xe738,	// (0x00099d28) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe738,	// (0x00099d28) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0009b2da) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0009b2da) sp_fs_action_menu_list_gene_pane_g

0x85b3,	// (0x00093ba3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x85b3,	// (0x00093ba3) sp_fs_action_menu_list_gene_pane_t1

0x85cb,	// (0x00093bbb) sp_fs_action_menu_list_gene_pane_ParamLimits

0x85cb,	// (0x00093bbb) sp_fs_action_menu_list_gene_pane

0xe745,	// (0x00099d35) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe745,	// (0x00099d35) popup_sp_fs_action_menu_bg_pane

0x85ea,	// (0x00093bda) sp_fs_action_menu_list_pane_ParamLimits

0x85ea,	// (0x00093bda) sp_fs_action_menu_list_pane

0xa3c0,	// (0x000959b0) sp_fs_scroll_pane_cp01_ParamLimits

0xa3c0,	// (0x000959b0) sp_fs_scroll_pane_cp01

0x07bc,	// (0x0008bdac) list_medium_line_plain_t2_t1

0x07cc,	// (0x0008bdbc) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0009b2df) list_medium_line_plain_t2_t

0x07dc,	// (0x0008bdcc) list_medium_line_plain_t3_t1

0x07ec,	// (0x0008bddc) list_medium_line_plain_t3_t2

0x07fa,	// (0x0008bdea) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0009b2e4) list_medium_line_plain_t3_t

0x0060,	// (0x0008b650) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x2_t2_g2_g1

0x0078,	// (0x0008b668) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0078,	// (0x0008b668) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0009a836) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0009a836) list_medium_line_x2_t2_g2_g

0x022f,	// (0x0008b81f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x022f,	// (0x0008b81f) list_medium_line_x2_t2_g2_t1

0x00ad,	// (0x0008b69d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x00ad,	// (0x0008b69d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0009b2eb) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0009b2eb) list_medium_line_x2_t2_g2_t

0x0060,	// (0x0008b650) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x2_t4_g2_g1

0x0808,	// (0x0008bdf8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0808,	// (0x0008bdf8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0009b2f0) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0009b2f0) list_medium_line_x2_t4_g2_g

0x081a,	// (0x0008be0a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x081a,	// (0x0008be0a) list_medium_line_x2_t4_g2_t1

0x0834,	// (0x0008be24) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0834,	// (0x0008be24) list_medium_line_x2_t4_g2_t2

0x0849,	// (0x0008be39) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0849,	// (0x0008be39) list_medium_line_x2_t4_g2_t3

0x00ad,	// (0x0008b69d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x00ad,	// (0x0008b69d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0009b2f5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0009b2f5) list_medium_line_x2_t4_g2_t

0x860a,	// (0x00093bfa) list_medium_line_t3_right_iconx2_g1

0x84fc,	// (0x00093aec) list_medium_line_t3_right_iconx2_g2

0x085e,	// (0x0008be4e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0009b2fe) list_medium_line_t3_right_iconx2_g

0x0868,	// (0x0008be58) list_medium_line_t3_right_iconx2_t1

0x0878,	// (0x0008be68) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0009b305) list_medium_line_t3_right_iconx2_t

0x0060,	// (0x0008b650) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x3_t4_g4_g1

0x006c,	// (0x0008b65c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x006c,	// (0x0008b65c) list_medium_line_x3_t4_g4_g2

0x0113,	// (0x0008b703) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0113,	// (0x0008b703) list_medium_line_x3_t4_g4_g3

0x0886,	// (0x0008be76) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0886,	// (0x0008be76) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0009b30a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0009b30a) list_medium_line_x3_t4_g4_g

0x0892,	// (0x0008be82) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0892,	// (0x0008be82) list_medium_line_x3_t4_g4_t1

0x08a9,	// (0x0008be99) list_medium_line_x3_t4_g4_t2_ParamLimits

0x08a9,	// (0x0008be99) list_medium_line_x3_t4_g4_t2

0x0244,	// (0x0008b834) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0244,	// (0x0008b834) list_medium_line_x3_t4_g4_t3

0x08c4,	// (0x0008beb4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x08c4,	// (0x0008beb4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0009b313) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0009b313) list_medium_line_x3_t4_g4_t

0x08e1,	// (0x0008bed1) list_single_dyc_row_text_pane_t1_ParamLimits

0x08e1,	// (0x0008bed1) list_single_dyc_row_text_pane_t1

0x092a,	// (0x0008bf1a) list_single_dyc_row_text_pane_t2_ParamLimits

0x092a,	// (0x0008bf1a) list_single_dyc_row_text_pane_t2

0x8612,	// (0x00093c02) list_single_dyc_row_text_pane_t3_ParamLimits

0x8612,	// (0x00093c02) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0009b31c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0009b31c) list_single_dyc_row_text_pane_t

0x8636,	// (0x00093c26) list_single_dyc_row_pane_g1_ParamLimits

0x8636,	// (0x00093c26) list_single_dyc_row_pane_g1

0x8642,	// (0x00093c32) list_single_dyc_row_pane_g2_ParamLimits

0x8642,	// (0x00093c32) list_single_dyc_row_pane_g2

0x864e,	// (0x00093c3e) list_single_dyc_row_pane_g3_ParamLimits

0x864e,	// (0x00093c3e) list_single_dyc_row_pane_g3

0x865a,	// (0x00093c4a) list_single_dyc_row_pane_g4_ParamLimits

0x865a,	// (0x00093c4a) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0009b329) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0009b329) list_single_dyc_row_pane_g

0x8666,	// (0x00093c56) list_single_dyc_row_text_pane_ParamLimits

0x8666,	// (0x00093c56) list_single_dyc_row_text_pane

0x96d5,	// (0x00094cc5) bg_sp_fs_scroll_pane

0xe753,	// (0x00099d43) thumb_sp_fs_scroll_pane

0x0469,	// (0x0008ba59) list_medium_line_g1_ParamLimits

0x0469,	// (0x0008ba59) list_medium_line_g1

0x0a5f,	// (0x0008c04f) list_medium_line_t1_ParamLimits

0x0a5f,	// (0x0008c04f) list_medium_line_t1

0x0060,	// (0x0008b650) list_medium_line_x2_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x2_g1

0x006c,	// (0x0008b65c) list_medium_line_x2_g2_ParamLimits

0x006c,	// (0x0008b65c) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0009b332) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0009b332) list_medium_line_x2_g

0x8685,	// (0x00093c75) list_medium_line_x2_t1_ParamLimits

0x8685,	// (0x00093c75) list_medium_line_x2_t1

0x0060,	// (0x0008b650) list_medium_line_x3_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x3_g1

0x006c,	// (0x0008b65c) list_medium_line_x3_g2_ParamLimits

0x006c,	// (0x0008b65c) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0009b332) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0009b332) list_medium_line_x3_g

0x8685,	// (0x00093c75) list_medium_line_x3_t1_ParamLimits

0x8685,	// (0x00093c75) list_medium_line_x3_t1

0xe75c,	// (0x00099d4c) thumb_sp_fs_scroll_pane_g1

0xe765,	// (0x00099d55) thumb_sp_fs_scroll_pane_g2

0xe76e,	// (0x00099d5e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009b337) thumb_sp_fs_scroll_pane_g

0xe75c,	// (0x00099d4c) bg_sp_fs_scroll_pane_g1

0xe765,	// (0x00099d55) bg_sp_fs_scroll_pane_g2

0xe76e,	// (0x00099d5e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009b337) bg_sp_fs_scroll_pane_g

0x0060,	// (0x0008b650) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0060,	// (0x0008b650) list_medium_line_x2_t3_g4_g1

0x0107,	// (0x0008b6f7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0107,	// (0x0008b6f7) list_medium_line_x2_t3_g4_g2

0x006c,	// (0x0008b65c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x006c,	// (0x0008b65c) list_medium_line_x2_t3_g4_g3

0x0078,	// (0x0008b668) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0078,	// (0x0008b668) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0009a8b2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0009a8b2) list_medium_line_x2_t3_g4_g

0x0a74,	// (0x0008c064) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0a74,	// (0x0008c064) list_medium_line_x2_t3_g4_t1

0x0a8e,	// (0x0008c07e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0a8e,	// (0x0008c07e) list_medium_line_x2_t3_g4_t2

0x00ad,	// (0x0008b69d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x00ad,	// (0x0008b69d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0009b33e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0009b33e) list_medium_line_x2_t3_g4_t

0x0469,	// (0x0008ba59) list_medium_line_g2_g1_ParamLimits

0x0469,	// (0x0008ba59) list_medium_line_g2_g1

0x7080,	// (0x00092670) list_medium_line_g2_g2_ParamLimits

0x7080,	// (0x00092670) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0009aff0) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0009aff0) list_medium_line_g2_g

0x0aa7,	// (0x0008c097) list_medium_line_g2_t1_ParamLimits

0x0aa7,	// (0x0008c097) list_medium_line_g2_t1

0x0469,	// (0x0008ba59) list_medium_line_t3_g2_g1_ParamLimits

0x0469,	// (0x0008ba59) list_medium_line_t3_g2_g1

0x7080,	// (0x00092670) list_medium_line_t3_g2_g2_ParamLimits

0x7080,	// (0x00092670) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0009aff0) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0009aff0) list_medium_line_t3_g2_g

0x0abc,	// (0x0008c0ac) list_medium_line_t3_g2_t1_ParamLimits

0x0abc,	// (0x0008c0ac) list_medium_line_t3_g2_t1

0x0ad3,	// (0x0008c0c3) list_medium_line_t3_g2_t2_ParamLimits

0x0ad3,	// (0x0008c0c3) list_medium_line_t3_g2_t2

0x0ae8,	// (0x0008c0d8) list_medium_line_t3_g2_t3_ParamLimits

0x0ae8,	// (0x0008c0d8) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0009b345) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0009b345) list_medium_line_t3_g2_t

0x84fc,	// (0x00093aec) list_medium_line_right_icon_g1

0x0b01,	// (0x0008c0f1) list_medium_line_right_icon_t1

0x0469,	// (0x0008ba59) list_medium_line_t2_g1_ParamLimits

0x0469,	// (0x0008ba59) list_medium_line_t2_g1

0x0b0f,	// (0x0008c0ff) list_medium_line_t2_t1_ParamLimits

0x0b0f,	// (0x0008c0ff) list_medium_line_t2_t1

0x0b29,	// (0x0008c119) list_medium_line_t2_t2_ParamLimits

0x0b29,	// (0x0008c119) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0009b34c) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0009b34c) list_medium_line_t2_t

0x0469,	// (0x0008ba59) list_medium_line_t3_g1_ParamLimits

0x0469,	// (0x0008ba59) list_medium_line_t3_g1

0x0b42,	// (0x0008c132) list_medium_line_t3_t1_ParamLimits

0x0b42,	// (0x0008c132) list_medium_line_t3_t1

0x0b59,	// (0x0008c149) list_medium_line_t3_t2_ParamLimits

0x0b59,	// (0x0008c149) list_medium_line_t3_t2

0x0b6e,	// (0x0008c15e) list_medium_line_t3_t3_ParamLimits

0x0b6e,	// (0x0008c15e) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0009b351) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0009b351) list_medium_line_t3_t

0x0469,	// (0x0008ba59) list_medium_line_g3_g1_ParamLimits

0x0469,	// (0x0008ba59) list_medium_line_g3_g1

0x869b,	// (0x00093c8b) list_medium_line_g3_g2_ParamLimits

0x869b,	// (0x00093c8b) list_medium_line_g3_g2

0x7080,	// (0x00092670) list_medium_line_g3_g3_ParamLimits

0x7080,	// (0x00092670) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0009b358) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0009b358) list_medium_line_g3_g

0x0b80,	// (0x0008c170) list_medium_line_g3_t1_ParamLimits

0x0b80,	// (0x0008c170) list_medium_line_g3_t1

0x0469,	// (0x0008ba59) list_medium_line_t2_g3_g1_ParamLimits

0x0469,	// (0x0008ba59) list_medium_line_t2_g3_g1

0x869b,	// (0x00093c8b) list_medium_line_t2_g3_g2_ParamLimits

0x869b,	// (0x00093c8b) list_medium_line_t2_g3_g2

0x7080,	// (0x00092670) list_medium_line_t2_g3_g3_ParamLimits

0x7080,	// (0x00092670) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0009b358) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0009b358) list_medium_line_t2_g3_g

0x0b95,	// (0x0008c185) list_medium_line_t2_g3_t1_ParamLimits

0x0b95,	// (0x0008c185) list_medium_line_t2_g3_t1

0x0baf,	// (0x0008c19f) list_medium_line_t2_g3_t2_ParamLimits

0x0baf,	// (0x0008c19f) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0009b35f) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0009b35f) list_medium_line_t2_g3_t

0x0469,	// (0x0008ba59) list_medium_line_t3_g3_g1_ParamLimits

0x0469,	// (0x0008ba59) list_medium_line_t3_g3_g1

0x869b,	// (0x00093c8b) list_medium_line_t3_g3_g2_ParamLimits

0x869b,	// (0x00093c8b) list_medium_line_t3_g3_g2

0x7080,	// (0x00092670) list_medium_line_t3_g3_g3_ParamLimits

0x7080,	// (0x00092670) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0009b358) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0009b358) list_medium_line_t3_g3_g

0x0bca,	// (0x0008c1ba) list_medium_line_t3_g3_t1_ParamLimits

0x0bca,	// (0x0008c1ba) list_medium_line_t3_g3_t1

0x0bde,	// (0x0008c1ce) list_medium_line_t3_g3_t2_ParamLimits

0x0bde,	// (0x0008c1ce) list_medium_line_t3_g3_t2

0x0bf0,	// (0x0008c1e0) list_medium_line_t3_g3_t3_ParamLimits

0x0bf0,	// (0x0008c1e0) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0009b364) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0009b364) list_medium_line_t3_g3_t

0x860a,	// (0x00093bfa) list_medium_line_right_iconx2_g1

0x84fc,	// (0x00093aec) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009b36b) list_medium_line_right_iconx2_g

0x86a7,	// (0x00093c97) list_medium_line_right_iconx2_t1

0x860a,	// (0x00093bfa) list_medium_line_t2_right_iconx2_g1

0x84fc,	// (0x00093aec) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009b36b) list_medium_line_t2_right_iconx2_g

0x0c04,	// (0x0008c1f4) list_medium_line_t2_right_iconx2_t1

0x0c14,	// (0x0008c204) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0009b370) list_medium_line_t2_right_iconx2_t

0x0c26,	// (0x0008c216) list_medium_line_x4_t4_t1

0x0c34,	// (0x0008c224) list_medium_line_x4_t4_t2

0x0c44,	// (0x0008c234) list_medium_line_x4_t4_t3

0x0c54,	// (0x0008c244) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0009b375) list_medium_line_x4_t4_t

0x86f8,	// (0x00093ce8) tport_appsw_pane_ParamLimits

0x86f8,	// (0x00093ce8) tport_appsw_pane

0x8710,	// (0x00093d00) tport_contact_pane_ParamLimits

0x8710,	// (0x00093d00) tport_contact_pane

0x8728,	// (0x00093d18) tport_listscroll_pane_ParamLimits

0x8728,	// (0x00093d18) tport_listscroll_pane

0x8742,	// (0x00093d32) cell_tport_appsw_pane_ParamLimits

0x8742,	// (0x00093d32) cell_tport_appsw_pane

0xd619,	// (0x00098c09) tport_appsw_pane_g1_ParamLimits

0xd619,	// (0x00098c09) tport_appsw_pane_g1

0xe777,	// (0x00099d67) tport_contact_pane_g1

0xe0ea,	// (0x000996da) tport_contact_pane_t1

0xe780,	// (0x00099d70) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0009b37e) tport_contact_pane_t

0xe78e,	// (0x00099d7e) list_tport_pane

0xe797,	// (0x00099d87) scroll_pane_cp_030

0x878a,	// (0x00093d7a) cell_tport_appsw_pane_g1

0x879a,	// (0x00093d8a) cell_tport_appsw_pane_t1

0x87a8,	// (0x00093d98) grid_highlight_pane_cp019

0x87b0,	// (0x00093da0) list_tport_double_graphic_pane_ParamLimits

0x87b0,	// (0x00093da0) list_tport_double_graphic_pane

0xa4c1,	// (0x00095ab1) list_highlight_pane_cp023_ParamLimits

0xa4c1,	// (0x00095ab1) list_highlight_pane_cp023

0x87bd,	// (0x00093dad) list_tport_double_graphic_pane_g1_ParamLimits

0x87bd,	// (0x00093dad) list_tport_double_graphic_pane_g1

0x87ca,	// (0x00093dba) list_tport_double_graphic_pane_t1_ParamLimits

0x87ca,	// (0x00093dba) list_tport_double_graphic_pane_t1

0x87df,	// (0x00093dcf) list_tport_double_graphic_pane_t2_ParamLimits

0x87df,	// (0x00093dcf) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0009b38a) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0009b38a) list_tport_double_graphic_pane_t

0x96d5,	// (0x00094cc5) main_cale_note_pane

0x682b,	// (0x00091e1b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x682b,	// (0x00091e1b) cell_vitu2_function_top_wide_pane_cp01

0x8100,	// (0x000936f0) wait_bar_pane_cp05_ParamLimits

0xa4c1,	// (0x00095ab1) listscroll_cmail_pane

0xe7a0,	// (0x00099d90) list_cmail_pane

0x87f1,	// (0x00093de1) list_cmail_body_pane

0x8806,	// (0x00093df6) list_single_cmail_header_caption_pane

0x881f,	// (0x00093e0f) list_single_cmail_header_detail_pane_ParamLimits

0x881f,	// (0x00093e0f) list_single_cmail_header_detail_pane

0xe7b0,	// (0x00099da0) list_single_cmail_header_caption_pane_t1

0x0c64,	// (0x0008c254) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0c64,	// (0x0008c254) list_single_cmail_header_detail_pane_g1

0xa3e6,	// (0x000959d6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa3e6,	// (0x000959d6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0009b38f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0009b38f) list_single_cmail_header_detail_pane_g

0x8848,	// (0x00093e38) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8848,	// (0x00093e38) list_single_cmail_header_detail_pane_t1

0x88a8,	// (0x00093e98) list_single_cmail_header_editor_pane_bg_ParamLimits

0x88a8,	// (0x00093e98) list_single_cmail_header_editor_pane_bg

0xe7d4,	// (0x00099dc4) list_cmail_body_pane_g1

0xe7dd,	// (0x00099dcd) list_cmail_body_pane_t1

0xd639,	// (0x00098c29) list_single_cmail_header_editor_pane_bg_g1

0xab21,	// (0x00096111) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd649,	// (0x00098c39) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd641,	// (0x00098c31) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd85d,	// (0x00098e4d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd669,	// (0x00098c59) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd659,	// (0x00098c49) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd661,	// (0x00098c51) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab01,	// (0x000960f1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x88bf,	// (0x00093eaf) calenote_gesture_pane_ParamLimits

0x88bf,	// (0x00093eaf) calenote_gesture_pane

0x88df,	// (0x00093ecf) calenote_window_pane_ParamLimits

0x88df,	// (0x00093ecf) calenote_window_pane

0xe7eb,	// (0x00099ddb) popup_note_window_cp01

0x88fb,	// (0x00093eeb) calenote_swipe_1_pane_ParamLimits

0x88fb,	// (0x00093eeb) calenote_swipe_1_pane

0x84e2,	// (0x00093ad2) calenote_swipe_2_pane_ParamLimits

0x84e2,	// (0x00093ad2) calenote_swipe_2_pane

0xe5fd,	// (0x00099bed) calenote_swipe_1_pane_g1_ParamLimits

0xe5fd,	// (0x00099bed) calenote_swipe_1_pane_g1

0xe60a,	// (0x00099bfa) calenote_swipe_1_pane_g2_ParamLimits

0xe60a,	// (0x00099bfa) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0009b2b3) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0009b2b3) calenote_swipe_1_pane_g

0xe7fd,	// (0x00099ded) calenote_swipe_1_pane_t1_ParamLimits

0xe7fd,	// (0x00099ded) calenote_swipe_1_pane_t1

0xe5fd,	// (0x00099bed) calenote_swipe_2_pane_g1_ParamLimits

0xe5fd,	// (0x00099bed) calenote_swipe_2_pane_g1

0xe81c,	// (0x00099e0c) calenote_swipe_2_pane_g2_ParamLimits

0xe81c,	// (0x00099e0c) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0009b39b) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0009b39b) calenote_swipe_2_pane_g

0xe828,	// (0x00099e18) calenote_swipe_2_pane_t1_ParamLimits

0xe828,	// (0x00099e18) calenote_swipe_2_pane_t1

0x96d5,	// (0x00094cc5) main_mup_navstr_pane

0x54e3,	// (0x00090ad3) main_mup3_pane_t7_ParamLimits

0x54e3,	// (0x00090ad3) main_mup3_pane_t7

0xa00b,	// (0x000955fb) main_mp4_pane_g6_ParamLimits

0xa00b,	// (0x000955fb) main_mp4_pane_g6

0xa1af,	// (0x0009579f) main_image3_pane_t4_ParamLimits

0xa1af,	// (0x0009579f) main_image3_pane_t4

0x8910,	// (0x00093f00) popup_navstr_preview_pane_ParamLimits

0x8910,	// (0x00093f00) popup_navstr_preview_pane

0x8924,	// (0x00093f14) scroll_navstr_pane_ParamLimits

0x8924,	// (0x00093f14) scroll_navstr_pane

0x96d5,	// (0x00094cc5) bg_popup_preview_window_pane_cp04

0xe84f,	// (0x00099e3f) popup_navstr_preview_pane_t1

0x8938,	// (0x00093f28) scroll_navstr_pane_g1_ParamLimits

0x8938,	// (0x00093f28) scroll_navstr_pane_g1

0x894c,	// (0x00093f3c) scroll_navstr_pane_t1_ParamLimits

0x894c,	// (0x00093f3c) scroll_navstr_pane_t1

0xe7f4,	// (0x00099de4) bg_button_pane_cp014

0xe7f4,	// (0x00099de4) bg_button_pane_cp030

0x0710,	// (0x0008bd00) list_double_fisheye_pane_g4_ParamLimits

0x0710,	// (0x0008bd00) list_double_fisheye_pane_g4

0x071c,	// (0x0008bd0c) list_double_fisheye_pane_g5_ParamLimits

0x071c,	// (0x0008bd0c) list_double_fisheye_pane_g5

0xc058,	// (0x00097648) sp_fs_scroll_pane_cp03

0xe6f0,	// (0x00099ce0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6fc,	// (0x00099cec) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0009b2d0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe708,	// (0x00099cf8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7a8,	// (0x00099d98) sp_fs_scroll_pane_cp02

0xa810,	// (0x00095e00) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa810,	// (0x00095e00) popup_sp_fs_calendar_preview_list_single_pane

0x96d5,	// (0x00094cc5) main_cam6_pano_pane

0xa4c1,	// (0x00095ab1) main_mup3_pane_ParamLimits

0x96d5,	// (0x00094cc5) main_phacti_pane

0x7fd3,	// (0x000935c3) bg_button_pane_cp11

0x7fed,	// (0x000935dd) main_mobtv_info_pane_g2_ParamLimits

0x7fed,	// (0x000935dd) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0009b230) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0009b230) main_mobtv_info_pane_g

0x81ca,	// (0x000937ba) sc_clock_pane_t5_ParamLimits

0x81ca,	// (0x000937ba) sc_clock_pane_t5

0x8285,	// (0x00093875) main_radioblah_pane_g1_ParamLimits

0xe52e,	// (0x00099b1e) main_radioblah_pane_t3_ParamLimits

0xe52e,	// (0x00099b1e) main_radioblah_pane_t3

0xe546,	// (0x00099b36) main_radioblah_pane_t4_ParamLimits

0xe546,	// (0x00099b36) main_radioblah_pane_t4

0x82ad,	// (0x0009389d) main_radioblah_text_pane_ParamLimits

0x82ad,	// (0x0009389d) main_radioblah_text_pane

0x82bf,	// (0x000938af) main_radioblah_info_pane_g1_ParamLimits

0x8358,	// (0x00093948) main_radioblah_info_pane_t4_ParamLimits

0x8358,	// (0x00093948) main_radioblah_info_pane_t4

0xa4c1,	// (0x00095ab1) main_sp_fs_calendar_pane

0x8962,	// (0x00093f52) main_phacti_pane_g1

0x896a,	// (0x00093f5a) phacti_note_pane_ParamLimits

0x896a,	// (0x00093f5a) phacti_note_pane

0xe866,	// (0x00099e56) phacti_term_pane_ParamLimits

0xe866,	// (0x00099e56) phacti_term_pane

0xe87b,	// (0x00099e6b) phacti_note_pane_t1_ParamLimits

0xe87b,	// (0x00099e6b) phacti_note_pane_t1

0x897e,	// (0x00093f6e) phacti_term_pane_g1

0x8986,	// (0x00093f76) phacti_term_pane_t1_ParamLimits

0x8986,	// (0x00093f76) phacti_term_pane_t1

0xe892,	// (0x00099e82) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe89a,	// (0x00099e8a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0009b3a5) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8a2,	// (0x00099e92) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8a2,	// (0x00099e92) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8b8,	// (0x00099ea8) aid_popup_sp_fs_bg_corner_pane

0xcbc4,	// (0x000981b4) popup_sp_fs_calendar_preview_bg_pane_g1

0x96d5,	// (0x00094cc5) popup_sp_fs_calendar_preview_bg_pane

0x1e30,	// (0x0008d420) popup_sp_fs_calendar_preview_list_pane

0xc7ba,	// (0x00097daa) bg_main_sp_fs_cale_pane_ParamLimits

0xc7ba,	// (0x00097daa) bg_main_sp_fs_cale_pane

0x8a11,	// (0x00094001) listscroll_cale_mrui_pane_ParamLimits

0x8a11,	// (0x00094001) listscroll_cale_mrui_pane

0x8a26,	// (0x00094016) listscroll_sp_fs_schedule_track_pane

0x8a2f,	// (0x0009401f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8a2f,	// (0x0009401f) main_sp_fs_ctrlbar_pane_cp01

0xe8c0,	// (0x00099eb0) main_sp_fs_ribbon_pane

0x8a42,	// (0x00094032) popup_sp_fs_cale_preview_window

0x8a54,	// (0x00094044) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a54,	// (0x00094044) list_single_sp_fs_schedule_track_pane

0xa4c1,	// (0x00095ab1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa4c1,	// (0x00095ab1) bg_sp_fs_highlight_list_pane_cp03

0x8a6a,	// (0x0009405a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8a6a,	// (0x0009405a) list_single_sp_fs_schedule_track_pane_g1

0x8a76,	// (0x00094066) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a76,	// (0x00094066) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0009b3aa) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0009b3aa) list_single_sp_fs_schedule_track_pane_g

0x8a82,	// (0x00094072) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8a82,	// (0x00094072) list_single_sp_fs_schedule_track_pane_t1

0x8a9c,	// (0x0009408c) sp_fs_schedule_track_pane_ParamLimits

0x8a9c,	// (0x0009408c) sp_fs_schedule_track_pane

0xe8c8,	// (0x00099eb8) sp_fs_schedule_track_pane_g1

0xe8d0,	// (0x00099ec0) sp_fs_schedule_track_pane_g2

0xe8d8,	// (0x00099ec8) sp_fs_schedule_track_pane_g3

0xe8e0,	// (0x00099ed0) sp_fs_schedule_track_pane_g4

0xe8e8,	// (0x00099ed8) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0009b3af) sp_fs_schedule_track_pane_g

0xd639,	// (0x00098c29) bg_sp_fs_schedule_viewer_highlight_g1

0xab21,	// (0x00096111) bg_sp_fs_schedule_viewer_highlight_g2

0xd641,	// (0x00098c31) bg_sp_fs_schedule_viewer_highlight_g3

0xd649,	// (0x00098c39) bg_sp_fs_schedule_viewer_highlight_g4

0xd85d,	// (0x00098e4d) bg_sp_fs_schedule_viewer_highlight_g5

0xd659,	// (0x00098c49) bg_sp_fs_schedule_viewer_highlight_g6

0xd661,	// (0x00098c51) bg_sp_fs_schedule_viewer_highlight_g7

0xd669,	// (0x00098c59) bg_sp_fs_schedule_viewer_highlight_g8

0xab01,	// (0x000960f1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0009b3ba) bg_sp_fs_schedule_viewer_highlight_g

0x96d5,	// (0x00094cc5) bg_main_sp_fs_ribbon_pane

0x8aad,	// (0x0009409d) main_sp_fs_ribbon_pane_g1

0xe8f0,	// (0x00099ee0) main_sp_fs_ribbon_pane_t1

0x8ab6,	// (0x000940a6) main_sp_fs_ribbon_pane_t2

0xe8ff,	// (0x00099eef) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0009b3cd) main_sp_fs_ribbon_pane_t

0xe90e,	// (0x00099efe) main_sp_fs_ribbon_scheduler_pane

0xe916,	// (0x00099f06) bg_main_sp_fs_ribbon_pane_g1

0xe91f,	// (0x00099f0f) bg_main_sp_fs_ribbon_pane_g2

0xe928,	// (0x00099f18) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0009b3d4) bg_main_sp_fs_ribbon_pane_g

0xe930,	// (0x00099f20) main_sp_fs_ribbon_scheduler_pane_g1

0xe939,	// (0x00099f29) main_sp_fs_ribbon_scheduler_pane_g2

0xe942,	// (0x00099f32) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0009b3db) main_sp_fs_ribbon_scheduler_pane_g

0xe94b,	// (0x00099f3b) list_cale_mrui_pane

0x8ac5,	// (0x000940b5) sp_fs_scroll_pane_cp07_ParamLimits

0x8ac5,	// (0x000940b5) sp_fs_scroll_pane_cp07

0x8ae1,	// (0x000940d1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ae1,	// (0x000940d1) bg_sp_fs_schedule_viewer_highlight

0xe958,	// (0x00099f48) list_single_sp_fs_schedule_track_pane_cp01

0xe960,	// (0x00099f50) list_sp_fs_schedule_track_pane

0xe968,	// (0x00099f58) sp_fs_scroll_pane_cp06_ParamLimits

0xe968,	// (0x00099f58) sp_fs_scroll_pane_cp06

0xcbc4,	// (0x000981b4) bgmain_sp_fs_calendar_pane_g1

0x0c7c,	// (0x0008c26c) list_single_cale_mrui_pane_ParamLimits

0x0c7c,	// (0x0008c26c) list_single_cale_mrui_pane

0x8af1,	// (0x000940e1) list_single_cale_mrui_row_pane_ParamLimits

0x8af1,	// (0x000940e1) list_single_cale_mrui_row_pane

0x8afe,	// (0x000940ee) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8afe,	// (0x000940ee) list_single_cale_mrui_row_pane_g1

0x8b36,	// (0x00094126) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8b36,	// (0x00094126) list_single_cale_mrui_row_pane_t1

0x0c9e,	// (0x0008c28e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0c9e,	// (0x0008c28e) list_single_cale_mrui_row_pane_t2

0x8b48,	// (0x00094138) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8b48,	// (0x00094138) list_single_cale_mrui_row_pane_t3

0x8b77,	// (0x00094167) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8b77,	// (0x00094167) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0009b3e9) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0009b3e9) list_single_cale_mrui_row_pane_t

0x0d06,	// (0x0008c2f6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0d06,	// (0x0008c2f6) list_single_cmail_header_editor_pane_bg_cp01

0x0d2c,	// (0x0008c31c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0d2c,	// (0x0008c31c) list_single_cmail_header_editor_pane_bg_cp02

0x8ba6,	// (0x00094196) main_radioblah_text_pane_t1_ParamLimits

0x8ba6,	// (0x00094196) main_radioblah_text_pane_t1

0xe995,	// (0x00099f85) cam6_indi_pane_cp01

0xe99d,	// (0x00099f8d) cam6_mode_pane_cp01

0xe9a5,	// (0x00099f95) cam6_pano_pane

0xe9ae,	// (0x00099f9e) cam6_zoom_pane_cp01

0xe9b6,	// (0x00099fa6) cam6_pano_image_pane

0xe9c1,	// (0x00099fb1) cam6_pano_pane_g1

0xe291,	// (0x00099881) cam6_pano_pane_g2

0xe9ca,	// (0x00099fba) cam6_pano_pane_g3

0xe9d3,	// (0x00099fc3) cam6_pano_pane_g4

0xd182,	// (0x00098772) cam6_pano_pane_g5

0xe9dc,	// (0x00099fcc) cam6_pano_pane_g6

0xe9e6,	// (0x00099fd6) cam6_pano_pane_g7

0xe9ee,	// (0x00099fde) cam6_pano_pane_g8

0xe9f7,	// (0x00099fe7) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0009b3f2) cam6_pano_pane_g

0x96d5,	// (0x00094cc5) main_browser_tag_pane

0xe847,	// (0x00099e37) grid_navstr_albumart_pane

0xea02,	// (0x00099ff2) cell_navstr_albumart_pane_ParamLimits

0xea02,	// (0x00099ff2) cell_navstr_albumart_pane

0xb504,	// (0x00096af4) cell_navstr_albumart_pane_g1

0xc5cb,	// (0x00097bbb) cell_navstr_albumart_pane_g2

0xc5db,	// (0x00097bcb) cell_navstr_albumart_pane_g3

0xc5d3,	// (0x00097bc3) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0009b405) cell_navstr_albumart_pane_g

0x8bc1,	// (0x000941b1) bt_list_pane_ParamLimits

0x8bc1,	// (0x000941b1) bt_list_pane

0xea24,	// (0x0009a014) bt_list_pane_t1

0xea33,	// (0x0009a023) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0009b40e) bt_list_pane_t

0x96d5,	// (0x00094cc5) main_cale_prevew_pane

0x8bd6,	// (0x000941c6) popup_cale_preview_window_ParamLimits

0x8bd6,	// (0x000941c6) popup_cale_preview_window

0xa4c1,	// (0x00095ab1) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4c1,	// (0x00095ab1) bg_popup_preview_window_pane_cp05

0xea42,	// (0x0009a032) list_cale_preview_pane_ParamLimits

0xea42,	// (0x0009a032) list_cale_preview_pane

0xea4e,	// (0x0009a03e) list_double_cale_preview_pane_ParamLimits

0xea4e,	// (0x0009a03e) list_double_cale_preview_pane

0xea60,	// (0x0009a050) list_single_cale_preview_pane_ParamLimits

0xea60,	// (0x0009a050) list_single_cale_preview_pane

0xea74,	// (0x0009a064) list_single_cale_preview_pane_g1

0xea7c,	// (0x0009a06c) list_single_cale_preview_pane_t1_ParamLimits

0xea7c,	// (0x0009a06c) list_single_cale_preview_pane_t1

0xea91,	// (0x0009a081) list_double_cale_preview_pane_g1

0xea99,	// (0x0009a089) list_double_cale_preview_pane_t1_ParamLimits

0xea99,	// (0x0009a089) list_double_cale_preview_pane_t1

0xeaae,	// (0x0009a09e) list_double_cale_preview_pane_t2_ParamLimits

0xeaae,	// (0x0009a09e) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0009b413) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0009b413) list_double_cale_preview_pane_t

0x96d5,	// (0x00094cc5) main_ezdial_pane

0xa4c1,	// (0x00095ab1) main_sp_fs_email_pane_ParamLimits

0x8504,	// (0x00093af4) cmail_ddmenu_btn01_pane_ParamLimits

0x8504,	// (0x00093af4) cmail_ddmenu_btn01_pane

0x8517,	// (0x00093b07) cmail_ddmenu_btn02_pane_ParamLimits

0x8517,	// (0x00093b07) cmail_ddmenu_btn02_pane

0x853a,	// (0x00093b2a) cmail_ddmenu_btn03_pane_ParamLimits

0x853a,	// (0x00093b2a) cmail_ddmenu_btn03_pane

0x8560,	// (0x00093b50) main_sp_fs_ctrlbar_pane_ParamLimits

0x8584,	// (0x00093b74) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x87f1,	// (0x00093de1) list_cmail_body_pane_ParamLimits

0xe7be,	// (0x00099dae) bg_button_pane_cp12

0xe7c7,	// (0x00099db7) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7c7,	// (0x00099db7) list_single_cmail_header_detail_pane_g3

0x8884,	// (0x00093e74) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8884,	// (0x00093e74) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0009b396) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0009b396) list_single_cmail_header_detail_pane_t

0x899b,	// (0x00093f8b) phacti_term_pane_t2_ParamLimits

0x899b,	// (0x00093f8b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0009b3a0) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0009b3a0) phacti_term_pane_t

0xeac6,	// (0x0009a0b6) aid_size_list_single_double

0x8bef,	// (0x000941df) popup_ezdial_listscroll_window

0x8c0a,	// (0x000941fa) popup_number_entry_window_cp01

0xa8c8,	// (0x00095eb8) bg_popup_call_pane_cp09

0xead2,	// (0x0009a0c2) ezdial_list_pane

0xeada,	// (0x0009a0ca) scroll_pane_cp23

0xc7ba,	// (0x00097daa) bg_button_pane_cp028_ParamLimits

0xc7ba,	// (0x00097daa) bg_button_pane_cp028

0x8c18,	// (0x00094208) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c18,	// (0x00094208) cmail_ddmenu_btn01_pane_g1

0x8c24,	// (0x00094214) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c24,	// (0x00094214) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0009b418) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0009b418) cmail_ddmenu_btn01_pane_g

0xeae2,	// (0x0009a0d2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae2,	// (0x0009a0d2) cmail_ddmenu_btn01_pane_t1

0xc7ba,	// (0x00097daa) bg_button_pane_cp029_ParamLimits

0xc7ba,	// (0x00097daa) bg_button_pane_cp029

0x8c30,	// (0x00094220) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c30,	// (0x00094220) cmail_ddmenu_btn02_pane_g1

0x8c48,	// (0x00094238) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c48,	// (0x00094238) cmail_ddmenu_btn02_pane_t1

0xa4c1,	// (0x00095ab1) bg_button_pane_cp031_ParamLimits

0xa4c1,	// (0x00095ab1) bg_button_pane_cp031

0x8c30,	// (0x00094220) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c30,	// (0x00094220) cmail_ddmenu_btn03_pane_g1

0x8c48,	// (0x00094238) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c48,	// (0x00094238) cmail_ddmenu_btn03_pane_t1

0x60b1,	// (0x000916a1) cell_dialer2_keypad_pane_t1_ParamLimits

0x60cb,	// (0x000916bb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x60cb,	// (0x000916bb) cell_dialer2_keypad_pane_t1_copy1

0x7e3a,	// (0x0009342a) ncimui_group_button_pane

0xa4c1,	// (0x00095ab1) main_sp_fs_calendar_pane_ParamLimits

0x8806,	// (0x00093df6) list_single_cmail_header_caption_pane_ParamLimits

0xa3f2,	// (0x000959e2) aid_recal_txt_sm_pane

0x96d5,	// (0x00094cc5) mian_recal_day_pane

0x8a42,	// (0x00094032) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf7,	// (0x0009a0e7) list_recal_day_pane

0xa416,	// (0x00095a06) list_single_recal_day_pane_ParamLimits

0xa416,	// (0x00095a06) list_single_recal_day_pane

0xeb1e,	// (0x0009a10e) list_single_recal_day_pane_g1_ParamLimits

0xeb1e,	// (0x0009a10e) list_single_recal_day_pane_g1

0xa428,	// (0x00095a18) list_single_recal_day_pane_g2_ParamLimits

0xa428,	// (0x00095a18) list_single_recal_day_pane_g2

0xa438,	// (0x00095a28) list_single_recal_day_pane_g3_ParamLimits

0xa438,	// (0x00095a28) list_single_recal_day_pane_g3

0x0d4c,	// (0x0008c33c) list_single_recal_day_pane_g4_ParamLimits

0x0d4c,	// (0x0008c33c) list_single_recal_day_pane_g4

0xa444,	// (0x00095a34) list_single_recal_day_pane_g5_ParamLimits

0xa444,	// (0x00095a34) list_single_recal_day_pane_g5

0xa454,	// (0x00095a44) list_single_recal_day_pane_g6_ParamLimits

0xa454,	// (0x00095a44) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0009b427) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0009b427) list_single_recal_day_pane_g

0xa468,	// (0x00095a58) list_single_recal_day_pane_t1

0xa47a,	// (0x00095a6a) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0009b432) list_single_recal_day_pane_t

0x8c6c,	// (0x0009425c) ncimui_query_button_pane_ParamLimits

0x8c6c,	// (0x0009425c) ncimui_query_button_pane

0x8c7c,	// (0x0009426c) ncimui_query_button_pane_t1_ParamLimits

0x8c7c,	// (0x0009426c) ncimui_query_button_pane_t1

0xeb2a,	// (0x0009a11a) ncimui_query_button_pane_t2_ParamLimits

0xeb2a,	// (0x0009a11a) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0009b437) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0009b437) ncimui_query_button_pane_t

0x8c8f,	// (0x0009427f) query_button_pane_ParamLimits

0x8c8f,	// (0x0009427f) query_button_pane

0x96d5,	// (0x00094cc5) bg_button_pane_cp0028

0xeb3d,	// (0x0009a12d) query_button_pane_t1

0x4120,	// (0x0008f710) main_tport_pane_ParamLimits

0x86b5,	// (0x00093ca5) bg_popup_window_pane_cp01_ParamLimits

0x86b5,	// (0x00093ca5) bg_popup_window_pane_cp01

0x86d0,	// (0x00093cc0) heading_pane_cp08_ParamLimits

0x86d0,	// (0x00093cc0) heading_pane_cp08

0x86e3,	// (0x00093cd3) heading_pane_cp07_ParamLimits

0x86e3,	// (0x00093cd3) heading_pane_cp07

0x878a,	// (0x00093d7a) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0009b383) cell_tport_appsw_pane_g

0x028a,	// (0x0008b87a) input_candi_list_open_g1

0xacec,	// (0x000962dc) list_cale_time_pane_g6_ParamLimits

0xacec,	// (0x000962dc) list_cale_time_pane_g6

0x4ee3,	// (0x000904d3) aid_size_touch_calib_1_ParamLimits

0x4ee3,	// (0x000904d3) aid_size_touch_calib_1

0x4ef5,	// (0x000904e5) aid_size_touch_calib_2_ParamLimits

0x4ef5,	// (0x000904e5) aid_size_touch_calib_2

0x4f0d,	// (0x000904fd) aid_size_touch_calib_3_ParamLimits

0x4f0d,	// (0x000904fd) aid_size_touch_calib_3

0x4f2b,	// (0x0009051b) aid_size_touch_calib_4_ParamLimits

0x4f2b,	// (0x0009051b) aid_size_touch_calib_4

0x4f43,	// (0x00090533) main_touch_calib_button_group_pane_ParamLimits

0x4f43,	// (0x00090533) main_touch_calib_button_group_pane

0x4f5b,	// (0x0009054b) main_touch_calib_pane_g1_ParamLimits

0x4f6d,	// (0x0009055d) main_touch_calib_pane_g2_ParamLimits

0x4f7f,	// (0x0009056f) main_touch_calib_pane_g3_ParamLimits

0x4f91,	// (0x00090581) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0009ad41) main_touch_calib_pane_g_ParamLimits

0x4fa3,	// (0x00090593) main_touch_calib_pane_t1_ParamLimits

0x4fbd,	// (0x000905ad) main_touch_calib_pane_t2_ParamLimits

0x4fd7,	// (0x000905c7) main_touch_calib_pane_t3_ParamLimits

0x4feb,	// (0x000905db) main_touch_calib_pane_t4_ParamLimits

0x4fff,	// (0x000905ef) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0009ad4a) main_touch_calib_pane_t_ParamLimits

0xcf24,	// (0x00098514) list_single_fp_cale_pane_g3_ParamLimits

0xcf24,	// (0x00098514) list_single_fp_cale_pane_g3

0xa4c1,	// (0x00095ab1) bg_button_pane_cp012_ParamLimits

0xa4c1,	// (0x00095ab1) bg_vkb2_func_pane_cp03_ParamLimits

0x7036,	// (0x00092626) cell_vitu2_function_top_pane_g1_ParamLimits

0xa4c1,	// (0x00095ab1) bg_vkb2_func_pane_cp04_ParamLimits

0x7dc8,	// (0x000933b8) main_ncimui_button_group_pane_ParamLimits

0x7dc8,	// (0x000933b8) main_ncimui_button_group_pane

0x7e28,	// (0x00093418) main_ncimui_pane_t3_ParamLimits

0x7e28,	// (0x00093418) main_ncimui_pane_t3

0xe85d,	// (0x00099e4d) phacti_button_group_pane

0xeac6,	// (0x0009a0b6) aid_size_list_single_double_ParamLimits

0x8bef,	// (0x000941df) popup_ezdial_listscroll_window_ParamLimits

0x8c0a,	// (0x000941fa) popup_number_entry_window_cp01_ParamLimits

0x8ca2,	// (0x00094292) phacti_button_pane_ParamLimits

0x8ca2,	// (0x00094292) phacti_button_pane

0x96d5,	// (0x00094cc5) bg_button_pane_cp14

0xeb4b,	// (0x0009a13b) phacti_button_pane_t1

0x8cb3,	// (0x000942a3) main_touch_calib_button_pane_ParamLimits

0x8cb3,	// (0x000942a3) main_touch_calib_button_pane

0xa6fa,	// (0x00095cea) bg_button_pane_cp18_ParamLimits

0xa6fa,	// (0x00095cea) bg_button_pane_cp18

0xeb59,	// (0x0009a149) main_touch_calib_button_pane_t1_ParamLimits

0xeb59,	// (0x0009a149) main_touch_calib_button_pane_t1

0xeb6f,	// (0x0009a15f) main_touch_calib_button_pane_t2_ParamLimits

0xeb6f,	// (0x0009a15f) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0009b43c) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0009b43c) main_touch_calib_button_pane_t

0x96d5,	// (0x00094cc5) cell_ncimui_button_pane

0x96d5,	// (0x00094cc5) bg_button_pane_cp032

0xeb8d,	// (0x0009a17d) cell_ncimui_button_pane_t1

0xa18f,	// (0x0009577f) image3_infobar_pane_ParamLimits

0xa18f,	// (0x0009577f) image3_infobar_pane

0x81f6,	// (0x000937e6) fs_bigclock_status_pane_ParamLimits

0x81f6,	// (0x000937e6) fs_bigclock_status_pane

0x8203,	// (0x000937f3) main_fs_bigclock_clock_pane_ParamLimits

0x8203,	// (0x000937f3) main_fs_bigclock_clock_pane

0x8223,	// (0x00093813) main_fs_bigclock_indi_pane_ParamLimits

0x8223,	// (0x00093813) main_fs_bigclock_indi_pane

0x824d,	// (0x0009383d) main_fs_bigclock_swipe_pane_ParamLimits

0x824d,	// (0x0009383d) main_fs_bigclock_swipe_pane

0x96d5,	// (0x00094cc5) main_fs_clock_dumped_data

0xe39e,	// (0x0009998e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe39e,	// (0x0009998e) list_single_fs_bigclock_indicator_pane_g1

0xe3ba,	// (0x000999aa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3ba,	// (0x000999aa) list_single_fs_bigclock_indicator_pane_g2

0xe3d4,	// (0x000999c4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3d4,	// (0x000999c4) list_single_fs_bigclock_indicator_pane_g3

0xe3ee,	// (0x000999de) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3ee,	// (0x000999de) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0009b264) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0009b264) list_single_fs_bigclock_indicator_pane_g

0xe419,	// (0x00099a09) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe419,	// (0x00099a09) list_single_fs_bigclock_indicator_pane_t1

0xe441,	// (0x00099a31) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe441,	// (0x00099a31) list_single_fs_bigclock_indicator_pane_t2

0xe469,	// (0x00099a59) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe469,	// (0x00099a59) list_single_fs_bigclock_indicator_pane_t3

0xe491,	// (0x00099a81) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe491,	// (0x00099a81) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0009b26f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0009b26f) list_single_fs_bigclock_indicator_pane_t

0xeb9b,	// (0x0009a18b) image3_infobar_fav_pane_ParamLimits

0xeb9b,	// (0x0009a18b) image3_infobar_fav_pane

0xebab,	// (0x0009a19b) image3_infobar_loc_pane_ParamLimits

0xebab,	// (0x0009a19b) image3_infobar_loc_pane

0xebbf,	// (0x0009a1af) image3_infobar_time_pane_ParamLimits

0xebbf,	// (0x0009a1af) image3_infobar_time_pane

0xcbc4,	// (0x000981b4) image3_infobar_time_pane_g1

0xebcf,	// (0x0009a1bf) image3_infobar_time_pane_t1

0xcbc4,	// (0x000981b4) image3_infobar_loc_pane_g1

0xebdd,	// (0x0009a1cd) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0009b441) image3_infobar_loc_pane_g

0xebe5,	// (0x0009a1d5) image3_infobar_loc_pane_t1

0xcbc4,	// (0x000981b4) image3_infobar_fav_pane_g1

0xebf3,	// (0x0009a1e3) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0009b446) image3_infobar_fav_pane_g

0xebfb,	// (0x0009a1eb) fs_bigclock_status_battery_pane

0xec04,	// (0x0009a1f4) fs_bigclock_status_signal_pane

0xec0d,	// (0x0009a1fd) fs_bigclock_status_title_pane

0xec16,	// (0x0009a206) fs_bigclock_status_signal_pane_g1

0xec1f,	// (0x0009a20f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0009b44b) fs_bigclock_status_signal_pane_g

0xec27,	// (0x0009a217) fs_bigclock_status_battery_pane_g1

0xec30,	// (0x0009a220) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0009b450) fs_bigclock_status_battery_pane_g

0xec38,	// (0x0009a228) fs_bigclock_status_title_pane_t1

0xcbc4,	// (0x000981b4) main_fs_bigclock_clock_pane_g1

0xec46,	// (0x0009a236) main_fs_bigclock_clock_pane_g2

0xec4f,	// (0x0009a23f) main_fs_bigclock_clock_pane_g3

0xec4f,	// (0x0009a23f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0009b455) main_fs_bigclock_clock_pane_g

0xec57,	// (0x0009a247) main_fs_bigclock_clock_pane_t1

0x8cc8,	// (0x000942b8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0009b45e) main_fs_bigclock_clock_pane_t

0xec65,	// (0x0009a255) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec65,	// (0x0009a255) list_single_fs_bigclock_indicator_pane

0xec76,	// (0x0009a266) list_single_fs_bigclock_pane_ParamLimits

0xec76,	// (0x0009a266) list_single_fs_bigclock_pane

0xec9c,	// (0x0009a28c) main_fs_bigclock_indicator_pane_t1

0xecab,	// (0x0009a29b) list_single_fs_bigclock_pane_g1

0xecb3,	// (0x0009a2a3) list_single_fs_bigclock_pane_t1

0xcbc4,	// (0x000981b4) main_fs_bigclock_swipe_pane_g1

0xecf6,	// (0x0009a2e6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0009b46f) main_fs_bigclock_swipe_pane_g

0xecfe,	// (0x0009a2ee) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfe,	// (0x0009a2ee) main_fs_bigclock_swipe_pane_t1

0x30b0,	// (0x0008e6a0) call_type_pane_ParamLimits

0x96d5,	// (0x00094cc5) main_btmg_pane

0x8b2a,	// (0x0009411a) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8b2a,	// (0x0009411a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0009b3e2) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0009b3e2) list_single_cale_mrui_row_pane_g

0xa405,	// (0x000959f5) list_recal_vselct_arw_lo_pane

0xeb16,	// (0x0009a106) list_recal_vselct_arw_up_pane

0xa40d,	// (0x000959fd) list_recal_vselct_pane

0x8d19,	// (0x00094309) btmg_button_pane

0x8d23,	// (0x00094313) main_btmg_pane_g1

0x96d5,	// (0x00094cc5) bg_button_pane_cp044

0xed1b,	// (0x0009a30b) btmg_button_pane_t1

0xc7a6,	// (0x00097d96) aid_listscroll_gen

0xa4c1,	// (0x00095ab1) main_cntbar_detail_pane

0xe7a0,	// (0x00099d90) list_cmail_folder_pane

0xc058,	// (0x00097648) sp_fs_scroll_pane_cp03_ParamLimits

0x0d6c,	// (0x0008c35c) list_single_fs_dyc_pane_cp01_ParamLimits

0x0d6c,	// (0x0008c35c) list_single_fs_dyc_pane_cp01

0xed29,	// (0x0009a319) aid_size_cmail_indent

0xa48c,	// (0x00095a7c) list_single_dyc_row_pane_cp01

0x8d59,	// (0x00094349) cntbar_detail_list_pane_ParamLimits

0x8d59,	// (0x00094349) cntbar_detail_list_pane

0x8da5,	// (0x00094395) main_cntbar_detail_cont_pane_ParamLimits

0x8da5,	// (0x00094395) main_cntbar_detail_cont_pane

0xc058,	// (0x00097648) scroll_pane_cp032_ParamLimits

0xc058,	// (0x00097648) scroll_pane_cp032

0x8db9,	// (0x000943a9) cntbar_detail_list_event_pane_ParamLimits

0x8db9,	// (0x000943a9) cntbar_detail_list_event_pane

0x8d69,	// (0x00094359) cntbar_detail_list_shct_pane

0xab6f,	// (0x0009615f) aid_list_gen

0xed32,	// (0x0009a322) aid_scroll

0xed3b,	// (0x0009a32b) aid_size_touch_scroll_bar

0x05c2,	// (0x0008bbb2) aid_list_double

0xdbbd,	// (0x000991ad) aid_list_single

0x767e,	// (0x00092c6e) aid_list_single_lg

0xa495,	// (0x00095a85) aid_list_z_g_a_sm

0xa49d,	// (0x00095a8d) aid_list_z_g_d

0xa4a5,	// (0x00095a95) aid_txt_z_prm

0x0d84,	// (0x0008c374) aid_txt_z_prm_cp01

0x0d92,	// (0x0008c382) aid_txt_z_sec

0x8dc9,	// (0x000943b9) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8dc9,	// (0x000943b9) main_cntbar_detail_cont_pane_g1

0x8ddd,	// (0x000943cd) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8ddd,	// (0x000943cd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0009b474) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0009b474) main_cntbar_detail_cont_pane_g

0xed44,	// (0x0009a334) main_cntbar_detail_cont_pane_t1

0xed52,	// (0x0009a342) main_cntbar_detail_cont_pane_t2

0xed60,	// (0x0009a350) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0009b479) main_cntbar_detail_cont_pane_t

0x8ded,	// (0x000943dd) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8ded,	// (0x000943dd) cell_cntbar_detail_list_shct_pane

0xed6e,	// (0x0009a35e) cntbar_detail_list_shct_pane_g1

0xed77,	// (0x0009a367) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0009b480) cntbar_detail_list_shct_pane_g

0x8e01,	// (0x000943f1) cntbar_detail_list_event_pane_g1_ParamLimits

0x8e01,	// (0x000943f1) cntbar_detail_list_event_pane_g1

0x8e0d,	// (0x000943fd) cntbar_detail_list_event_pane_g2_ParamLimits

0x8e0d,	// (0x000943fd) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0009b485) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0009b485) cntbar_detail_list_event_pane_g

0x8e79,	// (0x00094469) cntbar_detail_list_event_pane_t1_ParamLimits

0x8e79,	// (0x00094469) cntbar_detail_list_event_pane_t1

0x8e8e,	// (0x0009447e) cntbar_detail_list_event_pane_t2_ParamLimits

0x8e8e,	// (0x0009447e) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0009b492) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0009b492) cntbar_detail_list_event_pane_t

0xcbc4,	// (0x000981b4) cell_cntbar_detail_list_shct_pane_g1

0xb355,	// (0x00096945) navi_pane_mv_g3

0xa4c1,	// (0x00095ab1) main_cntbar_detail_pane_ParamLimits

0x96d5,	// (0x00094cc5) main_notif_wgt_pane

0x9fa5,	// (0x00095595) aid_tch_main_mp4_pane_g4

0xa187,	// (0x00095777) popup_slider_window_cp02

0xa3fb,	// (0x000959eb) list_recal_day_event_pane

0x8d2d,	// (0x0009431d) cntbar_detail_btn_pane_ParamLimits

0x8d2d,	// (0x0009431d) cntbar_detail_btn_pane

0x8d43,	// (0x00094333) cntbar_detail_btn_pane_cp01_ParamLimits

0x8d43,	// (0x00094333) cntbar_detail_btn_pane_cp01

0x8d69,	// (0x00094359) cntbar_detail_list_shct_pane_ParamLimits

0x8d79,	// (0x00094369) cntbar_detail_pane_g1_ParamLimits

0x8d79,	// (0x00094369) cntbar_detail_pane_g1

0x8d89,	// (0x00094379) cntbar_detail_pane_t1_ParamLimits

0x8d89,	// (0x00094379) cntbar_detail_pane_t1

0x8e19,	// (0x00094409) cntbar_detail_list_event_pane_g3_ParamLimits

0x8e19,	// (0x00094409) cntbar_detail_list_event_pane_g3

0x8e31,	// (0x00094421) cntbar_detail_list_event_pane_g4_ParamLimits

0x8e31,	// (0x00094421) cntbar_detail_list_event_pane_g4

0x8e49,	// (0x00094439) cntbar_detail_list_event_pane_g5_ParamLimits

0x8e49,	// (0x00094439) cntbar_detail_list_event_pane_g5

0x8e61,	// (0x00094451) cntbar_detail_list_event_pane_g6_ParamLimits

0x8e61,	// (0x00094451) cntbar_detail_list_event_pane_g6

0x8ea3,	// (0x00094493) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ea3,	// (0x00094493) cntbar_detail_list_event_pane_t3

0x8eb5,	// (0x000944a5) popup_notif_wgt_window_ParamLimits

0x8eb5,	// (0x000944a5) popup_notif_wgt_window

0x8ece,	// (0x000944be) popup_submenu_window_cp01_ParamLimits

0x8ece,	// (0x000944be) popup_submenu_window_cp01

0xa8c8,	// (0x00095eb8) bg_popup_window_pane_cp10

0xed80,	// (0x0009a370) listscroll_notif_wgt_pane

0xed91,	// (0x0009a381) list_notif_wgt_window

0xed9a,	// (0x0009a38a) scroll_pane_cp033

0x8ee0,	// (0x000944d0) list_notif_wgt_row_pane_ParamLimits

0x8ee0,	// (0x000944d0) list_notif_wgt_row_pane

0xeda3,	// (0x0009a393) aid_size_list_notif_wgt_del

0xedb0,	// (0x0009a3a0) list_notif_wgt_row_pane_g1

0xedbc,	// (0x0009a3ac) list_notif_wgt_row_pane_g2

0xedd0,	// (0x0009a3c0) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0009b499) list_notif_wgt_row_pane_g

0xeddd,	// (0x0009a3cd) list_notif_wgt_row_pane_t1

0xedf3,	// (0x0009a3e3) list_notif_wgt_row_pane_t2

0xee05,	// (0x0009a3f5) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0009b4a0) list_notif_wgt_row_pane_t

0xd865,	// (0x00098e55) list_recal_day_event_pane_g1

0xee17,	// (0x0009a407) list_recal_day_event_pane_t1

0x96d5,	// (0x00094cc5) bg_button_pane_cp045

0xee26,	// (0x0009a416) cntbar_detail_btn_pane_t1

0xc7ba,	// (0x00097daa) main_callh_pane_ParamLimits

0xc7ba,	// (0x00097daa) main_callh_pane

0x96d5,	// (0x00094cc5) main_coverflow0_pane

0x96d5,	// (0x00094cc5) main_wgtman_pane

0x8265,	// (0x00093855) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8265,	// (0x00093855) main_fs_bigclock_unlock_btn_pane

0x8782,	// (0x00093d72) bg_button_pane_cp16

0x8792,	// (0x00093d82) cell_tport_appsw_pane_g3

0x8ef0,	// (0x000944e0) cf0_flow_pane_ParamLimits

0x8ef0,	// (0x000944e0) cf0_flow_pane

0xee34,	// (0x0009a424) listscroll_cf0_pane

0xee3f,	// (0x0009a42f) main_cf0_pane_g1

0x8f05,	// (0x000944f5) main_cf0_pane_t1_ParamLimits

0x8f05,	// (0x000944f5) main_cf0_pane_t1

0x8f1c,	// (0x0009450c) main_cf0_pane_t2_ParamLimits

0x8f1c,	// (0x0009450c) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0009b4ac) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0009b4ac) main_cf0_pane_t

0xee51,	// (0x0009a441) scroll_pane_cp11

0x8f33,	// (0x00094523) cf0_flow_pane_g1

0x8f3b,	// (0x0009452b) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0009b4b1) cf0_flow_pane_g

0x8f43,	// (0x00094533) cf0_flow_pane_t1

0x96d5,	// (0x00094cc5) main_call6_pane

0x96d5,	// (0x00094cc5) main_calllock_pane

0x8f51,	// (0x00094541) call6_btn_grp_pane_ParamLimits

0x8f51,	// (0x00094541) call6_btn_grp_pane

0x8f6b,	// (0x0009455b) call6_pane_g1_ParamLimits

0x8f6b,	// (0x0009455b) call6_pane_g1

0x8f80,	// (0x00094570) popup_call6_1st_window_ParamLimits

0x8f80,	// (0x00094570) popup_call6_1st_window

0x8f91,	// (0x00094581) popup_call6_2nd_window_ParamLimits

0x8f91,	// (0x00094581) popup_call6_2nd_window

0x8fa2,	// (0x00094592) cell_call6_btn_pane_ParamLimits

0x8fa2,	// (0x00094592) cell_call6_btn_pane

0xa8c8,	// (0x00095eb8) bg_popup_call2_in_pane_cp03

0xee5c,	// (0x0009a44c) popup_call6_1st_window_g1

0xee64,	// (0x0009a454) popup_call6_1st_window_g2

0xee6c,	// (0x0009a45c) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0009b4b6) popup_call6_1st_window_g

0xee74,	// (0x0009a464) popup_call6_1st_window_t1

0xee83,	// (0x0009a473) popup_call6_1st_window_t2

0xee93,	// (0x0009a483) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0009b4bd) popup_call6_1st_window_t

0xa8c8,	// (0x00095eb8) bg_popup_call2_in_pane_cp04

0xee5c,	// (0x0009a44c) popup_call6_2nd_window_g1

0xee64,	// (0x0009a454) popup_call6_2nd_window_g2

0xee6c,	// (0x0009a45c) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0009b4b6) popup_call6_2nd_window_g

0xee74,	// (0x0009a464) popup_call6_2nd_window_t1

0x96d5,	// (0x00094cc5) bg_button_pane_cp15

0xeea3,	// (0x0009a493) cell_call6_btn_pane_g1

0xeeac,	// (0x0009a49c) cell_call6_btn_pane_t1

0x8fb6,	// (0x000945a6) listscroll_wgtman_pane_ParamLimits

0x8fb6,	// (0x000945a6) listscroll_wgtman_pane

0x8fd7,	// (0x000945c7) wgtman_btn_pane_ParamLimits

0x8fd7,	// (0x000945c7) wgtman_btn_pane

0xb101,	// (0x000966f1) aid_scroll_copy1

0xeebb,	// (0x0009a4ab) list_wgtman_pane

0x901a,	// (0x0009460a) wgtman_btn_pane_g1_ParamLimits

0x901a,	// (0x0009460a) wgtman_btn_pane_g1

0x9046,	// (0x00094636) wgtman_btn_pane_t1_ParamLimits

0x9046,	// (0x00094636) wgtman_btn_pane_t1

0xeec5,	// (0x0009a4b5) wgtman_btn_pane_t2_ParamLimits

0xeec5,	// (0x0009a4b5) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0009b4c4) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0009b4c4) wgtman_btn_pane_t

0x9083,	// (0x00094673) listrow_wgtman_pane_ParamLimits

0x9083,	// (0x00094673) listrow_wgtman_pane

0x9096,	// (0x00094686) listrow_wgtman_pane_g1

0x90a3,	// (0x00094693) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0009b4c9) listrow_wgtman_pane_g

0x0da0,	// (0x0008c390) listrow_wgtman_pane_t1

0x0db8,	// (0x0008c3a8) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0009b4ce) listrow_wgtman_pane_t

0x0dde,	// (0x0008c3ce) wait_bar_pane_cp09

0xeedc,	// (0x0009a4cc) main_calllock_btn_pane

0xeee6,	// (0x0009a4d6) main_calllock_pane_g1

0x96d5,	// (0x00094cc5) bg_button_pane_cp17

0xeef1,	// (0x0009a4e1) main_calllock_btn_pane_g1

0xeefa,	// (0x0009a4ea) main_calllock_btn_pane_t1

0x96d5,	// (0x00094cc5) main_dialer3_pane

0x96d5,	// (0x00094cc5) main_fmrd2_pane

0xcbc4,	// (0x000981b4) main_fs_bigclock_unlock_btn_pane_g1

0xef11,	// (0x0009a501) main_fs_bigclock_unlock_btn_pane_t1

0x90c1,	// (0x000946b1) area_fmrd2_info_pane_ParamLimits

0x90c1,	// (0x000946b1) area_fmrd2_info_pane

0x90d2,	// (0x000946c2) area_fmrd2_visual_pane_ParamLimits

0x90d2,	// (0x000946c2) area_fmrd2_visual_pane

0x90e0,	// (0x000946d0) fmrd2_indi_pane_ParamLimits

0x90e0,	// (0x000946d0) fmrd2_indi_pane

0x90ed,	// (0x000946dd) area_fmrd2_visual_pane_g1

0x90f5,	// (0x000946e5) area_fmrd2_visual_pane_t1

0x9105,	// (0x000946f5) area_fmrd2_visual_pane_t2

0x9115,	// (0x00094705) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0009b4d8) area_fmrd2_visual_pane_t

0x9125,	// (0x00094715) area_fmrd2_info_pane_g1

0x912d,	// (0x0009471d) area_fmrd2_info_pane_t1

0x913d,	// (0x0009472d) area_fmrd2_info_pane_t2

0x914d,	// (0x0009473d) area_fmrd2_info_pane_t3

0x915d,	// (0x0009474d) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0009b4df) area_fmrd2_info_pane_t

0x916b,	// (0x0009475b) fmrd2_indi_pane_t1

0x917b,	// (0x0009476b) fmrd2_indi_pane_t2

0x918b,	// (0x0009477b) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0009b4e8) fmrd2_indi_pane_t

0xe3fd,	// (0x000999ed) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3fd,	// (0x000999ed) list_single_fs_bigclock_indicator_pane_g5

0xe4ad,	// (0x00099a9d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4ad,	// (0x00099a9d) list_single_fs_bigclock_indicator_pane_t5

0x89b0,	// (0x00093fa0) aid_cell_bcale_month_pane_ParamLimits

0x89b0,	// (0x00093fa0) aid_cell_bcale_month_pane

0x89ce,	// (0x00093fbe) bcale_month_pane_ParamLimits

0x89ce,	// (0x00093fbe) bcale_month_pane

0x89f2,	// (0x00093fe2) bcale_preview_pane_ParamLimits

0x89f2,	// (0x00093fe2) bcale_preview_pane

0xecb3,	// (0x0009a2a3) list_single_fs_bigclock_pane_t1_ParamLimits

0xecd2,	// (0x0009a2c2) list_single_fs_bigclock_pane_t2_ParamLimits

0xecd2,	// (0x0009a2c2) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0009b46a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009b46a) list_single_fs_bigclock_pane_t

0xef09,	// (0x0009a4f9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0009b4d3) main_fs_bigclock_unlock_btn_pane_g

0x919b,	// (0x0009478b) aid_dia3_key_size_ParamLimits

0x919b,	// (0x0009478b) aid_dia3_key_size

0x91aa,	// (0x0009479a) aid_dia3_listrow_size_ParamLimits

0x91aa,	// (0x0009479a) aid_dia3_listrow_size

0x91bf,	// (0x000947af) dia3_keypad_fun_pane_ParamLimits

0x91bf,	// (0x000947af) dia3_keypad_fun_pane

0x91db,	// (0x000947cb) dia3_keypad_num_pane_ParamLimits

0x91db,	// (0x000947cb) dia3_keypad_num_pane

0x91f6,	// (0x000947e6) dia3_listscroll_pane_ParamLimits

0x91f6,	// (0x000947e6) dia3_listscroll_pane

0x9209,	// (0x000947f9) dia3_numentry_pane_ParamLimits

0x9209,	// (0x000947f9) dia3_numentry_pane

0xef1f,	// (0x0009a50f) dia3_list_pane

0xef2a,	// (0x0009a51a) scroll_pane_cp12

0x96d5,	// (0x00094cc5) bg_dia3_numentry_pane

0x921d,	// (0x0009480d) dia3_numentry_pane_t1

0x922c,	// (0x0009481c) cell_dia3_key_num_pane

0x9234,	// (0x00094824) cell_dia3_key0_fun_pane_ParamLimits

0x9234,	// (0x00094824) cell_dia3_key0_fun_pane

0x9248,	// (0x00094838) cell_dia3_key1_fun_pane_ParamLimits

0x9248,	// (0x00094838) cell_dia3_key1_fun_pane

0x9260,	// (0x00094850) dia3_listrow_pane

0xe10b,	// (0x000996fb) bg_dia3_numentry_pane_g1

0x96d5,	// (0x00094cc5) bg_button_pane_cp21

0xef35,	// (0x0009a525) cell_dia3_key_num_pane_t1

0xef43,	// (0x0009a533) cell_dia3_key_num_pane_t2

0xef52,	// (0x0009a542) cell_dia3_key_num_pane_t3

0xef61,	// (0x0009a551) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0009b4ef) cell_dia3_key_num_pane_t

0x96d5,	// (0x00094cc5) bg_button_pane_cp19

0x9272,	// (0x00094862) cell_dia3_key0_fun_pane_g1

0x96d5,	// (0x00094cc5) bg_button_pane_cp20

0x927a,	// (0x0009486a) cell_dia3_key1_fun_pane_g1

0x9282,	// (0x00094872) area_left_week_number_pane

0x928e,	// (0x0009487e) area_top_day_name_pane

0x92a1,	// (0x00094891) frame_month_view_pane

0xef70,	// (0x0009a560) grid_month_view_pane

0x92b4,	// (0x000948a4) cell_top_day_name_pane_ParamLimits

0x92b4,	// (0x000948a4) cell_top_day_name_pane

0x92e1,	// (0x000948d1) cell_area_left_week_number_pane_ParamLimits

0x92e1,	// (0x000948d1) cell_area_left_week_number_pane

0x92f5,	// (0x000948e5) cell_month_view_pane_ParamLimits

0x92f5,	// (0x000948e5) cell_month_view_pane

0xef7e,	// (0x0009a56e) frm_month_g1

0x9322,	// (0x00094912) frm_month_g2

0x9335,	// (0x00094925) frm_month_g3

0x9348,	// (0x00094938) frm_month_g4

0x935b,	// (0x0009494b) frm_month_g5

0x936e,	// (0x0009495e) frm_month_g6

0x9381,	// (0x00094971) frm_month_g7

0xef8b,	// (0x0009a57b) frm_month_g8

0x9394,	// (0x00094984) frm_month_g9

0x93a4,	// (0x00094994) frm_month_g10

0x93b4,	// (0x000949a4) frm_month_g11

0x93c4,	// (0x000949b4) frm_month_g12

0x93d6,	// (0x000949c6) frm_month_g13

0x93e8,	// (0x000949d8) frm_month_g14

0x93fc,	// (0x000949ec) frm_month_g15

0x9410,	// (0x00094a00) frm_month_g16

0x000f,

0xff08,	// (0x0009b4f8) frm_month_g

0xef98,	// (0x0009a588) cell_top_day_name_pane_t1

0x9424,	// (0x00094a14) cell_area_left_week_number_pane_g1

0x9430,	// (0x00094a20) cell_area_left_week_number_pane_t1

0xce24,	// (0x00098414) cell_month_view_pane_g1

0x9443,	// (0x00094a33) cell_month_view_pane_t1

0x96d5,	// (0x00094cc5) main_fps_pane

0xe6b8,	// (0x00099ca8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6b8,	// (0x00099ca8) cmail_ddmenu_btn02_pane_cp1

0xe6d4,	// (0x00099cc4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6d4,	// (0x00099cc4) cmail_ddmenu_btn02_pane_cp2

0x8c3c,	// (0x0009422c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c3c,	// (0x0009422c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0009b41d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0009b41d) cmail_ddmenu_btn02_pane_g

0x8c5a,	// (0x0009424a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c5a,	// (0x0009424a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0009b422) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0009b422) cmail_ddmenu_btn02_pane_t

0x9456,	// (0x00094a46) fps_text_pane_ParamLimits

0x9456,	// (0x00094a46) fps_text_pane

0x946d,	// (0x00094a5d) main_fps_pane_g1_ParamLimits

0x946d,	// (0x00094a5d) main_fps_pane_g1

0x9487,	// (0x00094a77) wait_bar_pane_cp010_ParamLimits

0x9487,	// (0x00094a77) wait_bar_pane_cp010

0x9498,	// (0x00094a88) fps_text_pane_t1_ParamLimits

0x9498,	// (0x00094a88) fps_text_pane_t1

0xd5d8,	// (0x00098bc8) cam4_image_uncrop_pane_g1

0xd5e1,	// (0x00098bd1) cam4_image_uncrop_pane_g2

0x6557,	// (0x00091b47) cam4_image_uncrop_pane_g3

0x6560,	// (0x00091b50) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0009aede) cam4_image_uncrop_pane_g

0x9260,	// (0x00094850) dia3_listrow_pane_ParamLimits

0x96d5,	// (0x00094cc5) main_phob2_pane

0x8753,	// (0x00093d43) cell_tport_appsw_pane_cp02_ParamLimits

0x8753,	// (0x00093d43) cell_tport_appsw_pane_cp02

0x8767,	// (0x00093d57) cell_tport_appsw_pane_cp03_ParamLimits

0x8767,	// (0x00093d57) cell_tport_appsw_pane_cp03

0x96d5,	// (0x00094cc5) phob2_contact_card_pane

0x96d5,	// (0x00094cc5) phob2_listscroll_pane

0xefab,	// (0x0009a59b) phob2_list_pane

0xefb3,	// (0x0009a5a3) scroll_pane_cp034

0x94b0,	// (0x00094aa0) phob2_cc_data_pane_ParamLimits

0x94b0,	// (0x00094aa0) phob2_cc_data_pane

0x94cf,	// (0x00094abf) phob2_cc_listscroll_pane_ParamLimits

0x94cf,	// (0x00094abf) phob2_cc_listscroll_pane

0x94ed,	// (0x00094add) list_double_large_graphic_phob2_pane_ParamLimits

0x94ed,	// (0x00094add) list_double_large_graphic_phob2_pane

0x9500,	// (0x00094af0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9500,	// (0x00094af0) list_double_large_graphic_phob2_pane_g1

0x9516,	// (0x00094b06) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9516,	// (0x00094b06) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0009b519) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0009b519) list_double_large_graphic_phob2_pane_g

0x0df0,	// (0x0008c3e0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0df0,	// (0x0008c3e0) list_double_large_graphic_phob2_pane_t1

0x0e06,	// (0x0008c3f6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0e06,	// (0x0008c3f6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0009b51e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0009b51e) list_double_large_graphic_phob2_pane_t

0x96d5,	// (0x00094cc5) list_highlight_pane_cp024

0x9522,	// (0x00094b12) phob2_cc_button_pane

0x952a,	// (0x00094b1a) phob2_cc_data_pane_g1_ParamLimits

0x952a,	// (0x00094b1a) phob2_cc_data_pane_g1

0x953f,	// (0x00094b2f) phob2_cc_data_pane_g2_ParamLimits

0x953f,	// (0x00094b2f) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0009b523) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0009b523) phob2_cc_data_pane_g

0x954f,	// (0x00094b3f) phob2_cc_data_pane_t1_ParamLimits

0x954f,	// (0x00094b3f) phob2_cc_data_pane_t1

0x9567,	// (0x00094b57) phob2_cc_data_pane_t2_ParamLimits

0x9567,	// (0x00094b57) phob2_cc_data_pane_t2

0x957f,	// (0x00094b6f) phob2_cc_data_pane_t3_ParamLimits

0x957f,	// (0x00094b6f) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0009b528) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0009b528) phob2_cc_data_pane_t

0xefbb,	// (0x0009a5ab) phob2_cc_list_pane_ParamLimits

0xefbb,	// (0x0009a5ab) phob2_cc_list_pane

0xd90e,	// (0x00098efe) scroll_pane_cp035_ParamLimits

0xd90e,	// (0x00098efe) scroll_pane_cp035

0xa4c1,	// (0x00095ab1) bg_button_pane_cp033

0xefc7,	// (0x0009a5b7) phob2_cc_button_pane_g1

0xefd3,	// (0x0009a5c3) phob2_cc_button_pane_t1

0xefe8,	// (0x0009a5d8) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0009b52f) phob2_cc_button_pane_t

0x9597,	// (0x00094b87) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9597,	// (0x00094b87) list_double_large_graphic_phob2_cc_pane

0x95aa,	// (0x00094b9a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x95aa,	// (0x00094b9a) list_double_large_graphic_phob2_cc_pane_g1

0x0e1b,	// (0x0008c40b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0e1b,	// (0x0008c40b) list_double_large_graphic_phob2_cc_pane_g2

0x0e27,	// (0x0008c417) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0e27,	// (0x0008c417) list_double_large_graphic_phob2_cc_pane_g3

0x0e33,	// (0x0008c423) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0e33,	// (0x0008c423) list_double_large_graphic_phob2_cc_pane_g4

0x0e3f,	// (0x0008c42f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0e3f,	// (0x0008c42f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0009b534) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0009b534) list_double_large_graphic_phob2_cc_pane_g

0x0e4b,	// (0x0008c43b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0e4b,	// (0x0008c43b) list_double_large_graphic_phob2_cc_pane_t1

0x0e74,	// (0x0008c464) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0e74,	// (0x0008c464) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0009b53f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0009b53f) list_double_large_graphic_phob2_cc_pane_t

0xeffa,	// (0x0009a5ea) list_highlight_pane_cp025_ParamLimits

0xeffa,	// (0x0009a5ea) list_highlight_pane_cp025

0xa4c1,	// (0x00095ab1) bg_button_pane_cp033_ParamLimits

0xefc7,	// (0x0009a5b7) phob2_cc_button_pane_g1_ParamLimits

0xefd3,	// (0x0009a5c3) phob2_cc_button_pane_t1_ParamLimits

0xefe8,	// (0x0009a5d8) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0009b52f) phob2_cc_button_pane_t_ParamLimits

0x10e6,	// (0x0008c6d6) popup_wgtman_window

0xd753,	// (0x00098d43) scroll_pane_cp038

0x8ffc,	// (0x000945ec) wgtman_btn_pane_cp_01_ParamLimits

0x8ffc,	// (0x000945ec) wgtman_btn_pane_cp_01

0xf008,	// (0x0009a5f8) wgtman_content_pane

0xf011,	// (0x0009a601) wgtman_heading_pane

0x96d5,	// (0x00094cc5) bg_heading_pane_cp02

0xf01a,	// (0x0009a60a) wgtman_heading_pane_g1

0xf022,	// (0x0009a612) wgtman_heading_pane_t1

0xf030,	// (0x0009a620) scroll_pane_cp036

0xf038,	// (0x0009a628) wgtman_list_pane

0xe598,	// (0x00099b88) wgtman_list_pane_t1_ParamLimits

0xe598,	// (0x00099b88) wgtman_list_pane_t1

0xa1e1,	// (0x000957d1) cam4_grid_pane

0x04a7,	// (0x0008ba97) bg_button_pane_cp015_ParamLimits

0x71dc,	// (0x000927cc) bg_button_pane_cp016_ParamLimits

0x71ef,	// (0x000927df) bg_button_pane_cp017_ParamLimits

0x7213,	// (0x00092803) popup_vitu2_query_window_g3_ParamLimits

0x7213,	// (0x00092803) popup_vitu2_query_window_g3

0x7261,	// (0x00092851) popup_vitu2_query_window_t6_ParamLimits

0x7261,	// (0x00092851) popup_vitu2_query_window_t6

0x728c,	// (0x0009287c) popup_vitu2_query_window_t7_ParamLimits

0x728c,	// (0x0009287c) popup_vitu2_query_window_t7

0xd5d8,	// (0x00098bc8) cam4_grid_pane_g1

0xd5e1,	// (0x00098bd1) cam4_grid_pane_g2

0xf040,	// (0x0009a630) cam4_grid_pane_g3

0xf049,	// (0x0009a639) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0009b544) cam4_grid_pane_g

0x2018,	// (0x0008d608) aid_placing_vt_slider_lsc_ParamLimits

0x2315,	// (0x0008d905) vidtel_button_pane_ParamLimits

0x2315,	// (0x0008d905) vidtel_button_pane

0xf054,	// (0x0009a644) bg_button_pane_cp034

0x95b6,	// (0x00094ba6) vidtel_button_pane_g1

0xf05e,	// (0x0009a64e) vidtel_button_pane_t1

0xd855,	// (0x00098e45) aid_size_vtel_slider_touch

0xd90e,	// (0x00098efe) scroll_pane_cp039

0xe149,	// (0x00099739) ncim_query_button_pane_cp01_ParamLimits

0xe168,	// (0x00099758) ncimui_query_pane_g1_ParamLimits

0xa4c1,	// (0x00095ab1) input_focus_pane_cp012_ParamLimits

0xe18d,	// (0x0009977d) ncim_query_entry_pane_t1_ParamLimits

0xd90e,	// (0x00098efe) scroll_pane_cp039_ParamLimits

0xb1e7,	// (0x000967d7) navi_pane_bcale_mc_g1

0xb1ef,	// (0x000967df) navi_pane_bcale_mc_t1

0xe71d,	// (0x00099d0d) main_sp_fs_email_pane_g1

0xe729,	// (0x00099d19) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0009b2d5) main_sp_fs_email_pane_g

0xe988,	// (0x00099f78) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe988,	// (0x00099f78) list_single_cale_mrui_row_pane_g3

0x0d62,	// (0x0008c352) list_single_recal_day_pane_g5_event_pane

0xa460,	// (0x00095a50) list_single_recal_day_pane_g7

0xf06c,	// (0x0009a65c) list_recal_day_event_pane_cp01

0xf075,	// (0x0009a665) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0009a66d) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0009a675) list_recal_vselct_pane_cp01

0xd865,	// (0x00098e55) list_recal_day_event_pane_cp01_g1

0xa4b3,	// (0x00095aa3) list_recal_day_event_pane_cp01_t1

0xa468,	// (0x00095a58) list_single_recal_day_pane_t1_ParamLimits

0xa47a,	// (0x00095a6a) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0009b432) list_single_recal_day_pane_t_ParamLimits

0xa616,	// (0x00095c06) bg_notes_pane_ParamLimits

0xa6d8,	// (0x00095cc8) list_notes_pane_ParamLimits

0x141a,	// (0x0008ca0a) scroll_pane_cp06_ParamLimits

0xa6fa,	// (0x00095cea) main_notes_pane_ParamLimits

0x96d5,	// (0x00094cc5) main_welc_pane

0x95be,	// (0x00094bae) main_welc_body_pane_ParamLimits

0x95be,	// (0x00094bae) main_welc_body_pane

0x95db,	// (0x00094bcb) main_welc_opti_pane_ParamLimits

0x95db,	// (0x00094bcb) main_welc_opti_pane

0x9624,	// (0x00094c14) main_welc_pane_t1_ParamLimits

0x9624,	// (0x00094c14) main_welc_pane_t1

0x9646,	// (0x00094c36) main_welc_body_row_pane_ParamLimits

0x9646,	// (0x00094c36) main_welc_body_row_pane

0xe97a,	// (0x00099f6a) main_welc_opti_row_pane_ParamLimits

0xe97a,	// (0x00099f6a) main_welc_opti_row_pane

0xf08f,	// (0x0009a67f) main_welc_opti_row_pane_g1

0x965c,	// (0x00094c4c) main_welc_opti_row_pane_t1

0xf097,	// (0x0009a687) main_welc_body_row_pane_t1

0xed89,	// (0x0009a379) popup_notif_wgt_heading_pane

0xeda3,	// (0x0009a393) aid_size_list_notif_wgt_del_ParamLimits

0xedb0,	// (0x0009a3a0) list_notif_wgt_row_pane_g1_ParamLimits

0xedbc,	// (0x0009a3ac) list_notif_wgt_row_pane_g2_ParamLimits

0xedd0,	// (0x0009a3c0) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0009b499) list_notif_wgt_row_pane_g_ParamLimits

0xeddd,	// (0x0009a3cd) list_notif_wgt_row_pane_t1_ParamLimits

0xedf3,	// (0x0009a3e3) list_notif_wgt_row_pane_t2_ParamLimits

0xee05,	// (0x0009a3f5) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0009b4a0) list_notif_wgt_row_pane_t_ParamLimits

0x9096,	// (0x00094686) listrow_wgtman_pane_g1_ParamLimits

0x90a3,	// (0x00094693) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0009b4c9) listrow_wgtman_pane_g_ParamLimits

0x0da0,	// (0x0008c390) listrow_wgtman_pane_t1_ParamLimits

0x0db8,	// (0x0008c3a8) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0009b4ce) listrow_wgtman_pane_t_ParamLimits

0x0dde,	// (0x0008c3ce) wait_bar_pane_cp09_ParamLimits

0x96d5,	// (0x00094cc5) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0009a696) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0009a69e) popup_notif_wgt_heading_pane_t1

0x96d5,	// (0x00094cc5) main_vids_pane

0x96d5,	// (0x00094cc5) vids_listscroll_pane

0x966b,	// (0x00094c5b) scroll_pane_cp040

0x96d5,	// (0x00094cc5) vids_list_pane

0x9676,	// (0x00094c66) vids_list_double_pane_ParamLimits

0x9676,	// (0x00094c66) vids_list_double_pane

0x9687,	// (0x00094c77) vids_list_double_pane_g1

0x9690,	// (0x00094c80) vids_list_double_pane_t1

0x969f,	// (0x00094c8f) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0009b552) vids_list_double_pane_t

0xa4c1,	// (0x00095ab1) main_ncimui_pane_ParamLimits

0x7ddc,	// (0x000933cc) main_ncimui_pane_g1_ParamLimits

0x7de8,	// (0x000933d8) main_ncimui_pane_g2_ParamLimits

0x7de8,	// (0x000933d8) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0009b1da) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0009b1da) main_ncimui_pane_g

0x95fa,	// (0x00094bea) main_welc_pane_g1_ParamLimits

0x95fa,	// (0x00094bea) main_welc_pane_g1

0x960f,	// (0x00094bff) main_welc_pane_g2_ParamLimits

0x960f,	// (0x00094bff) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0009b54d) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0009b54d) main_welc_pane_g

0xa616,	// (0x00095c06) listscroll_mce_pane_ParamLimits

0xb395,	// (0x00096985) wait_bar_pane_cp10

0xc7ae,	// (0x00097d9e) main_cale_day_pane_ParamLimits

0xc7ae,	// (0x00097d9e) main_cale_week_pane_ParamLimits

0xa616,	// (0x00095c06) main_messa_pane_ParamLimits

0x5864,	// (0x00090e54) main_clock2_btn_pane_ParamLimits

0x5864,	// (0x00090e54) main_clock2_btn_pane

0xcfac,	// (0x0009859c) main_clock2_btn_pane_cp01_ParamLimits

0xcfac,	// (0x0009859c) main_clock2_btn_pane_cp01

0xe94b,	// (0x00099f3b) list_cale_mrui_pane_ParamLimits

0xee49,	// (0x0009a439) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0009b4a7) main_cf0_pane_g

0x9282,	// (0x00094872) area_left_week_number_pane_ParamLimits

0x928e,	// (0x0009487e) area_top_day_name_pane_ParamLimits

0x92a1,	// (0x00094891) frame_month_view_pane_ParamLimits

0xef70,	// (0x0009a560) grid_month_view_pane_ParamLimits

0xef7e,	// (0x0009a56e) frm_month_g1_ParamLimits

0x9322,	// (0x00094912) frm_month_g2_ParamLimits

0x9335,	// (0x00094925) frm_month_g3_ParamLimits

0x9348,	// (0x00094938) frm_month_g4_ParamLimits

0x935b,	// (0x0009494b) frm_month_g5_ParamLimits

0x936e,	// (0x0009495e) frm_month_g6_ParamLimits

0x9381,	// (0x00094971) frm_month_g7_ParamLimits

0xef8b,	// (0x0009a57b) frm_month_g8_ParamLimits

0x9394,	// (0x00094984) frm_month_g9_ParamLimits

0x93a4,	// (0x00094994) frm_month_g10_ParamLimits

0x93b4,	// (0x000949a4) frm_month_g11_ParamLimits

0x93c4,	// (0x000949b4) frm_month_g12_ParamLimits

0x93d6,	// (0x000949c6) frm_month_g13_ParamLimits

0x93e8,	// (0x000949d8) frm_month_g14_ParamLimits

0x93fc,	// (0x000949ec) frm_month_g15_ParamLimits

0x9410,	// (0x00094a00) frm_month_g16_ParamLimits

0xff08,	// (0x0009b4f8) frm_month_g_ParamLimits

0xef98,	// (0x0009a588) cell_top_day_name_pane_t1_ParamLimits

0x9424,	// (0x00094a14) cell_area_left_week_number_pane_g1_ParamLimits

0x9430,	// (0x00094a20) cell_area_left_week_number_pane_t1_ParamLimits

0xce24,	// (0x00098414) cell_month_view_pane_g1_ParamLimits

0x9443,	// (0x00094a33) cell_month_view_pane_t1_ParamLimits

0xa60e,	// (0x00095bfe) main_clock2_btn_pane_g1

0xf0bc,	// (0x0009a6ac) main_clock2_btn_pane_t1

0xa4c1,	// (0x00095ab1) listscroll_cmail_pane_ParamLimits

0xe71d,	// (0x00099d0d) main_sp_fs_email_pane_g1_ParamLimits

0xe729,	// (0x00099d19) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0009b2d5) main_sp_fs_email_pane_g_ParamLimits

0xeaf7,	// (0x0009a0e7) list_recal_day_pane_ParamLimits

0xeb08,	// (0x0009a0f8) mian_recal_day_pane_t1

0x09a0,	// (0x0008bf90) list_single_dyc_row_text_pane_t4_ParamLimits

0x09a0,	// (0x0008bf90) list_single_dyc_row_text_pane_t4

0x09e9,	// (0x0008bfd9) list_single_dyc_row_text_pane_t5_ParamLimits

0x09e9,	// (0x0008bfd9) list_single_dyc_row_text_pane_t5

0x8624,	// (0x00093c14) list_single_dyc_row_text_pane_t6_ParamLimits

0x8624,	// (0x00093c14) list_single_dyc_row_text_pane_t6

0xaccb,	// (0x000962bb) aid_mgn_list_cale_time_pane

0xa4c1,	// (0x00095ab1) main_gallery2_pane_ParamLimits

0xcfc2,	// (0x000985b2) main_clock2_pane_cp01_t1

0xcfd0,	// (0x000985c0) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0009adb4) main_clock2_pane_cp01_t

0x17d3,	// (0x0008cdc3) cale_week_scroll_pane_g16_ParamLimits

0x17d3,	// (0x0008cdc3) cale_week_scroll_pane_g16

0xa8c8,	// (0x00095eb8) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
