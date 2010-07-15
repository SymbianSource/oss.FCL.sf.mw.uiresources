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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0008b19b };

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
0x1038,	// (0x0008c1d3) Screen

0x1044,	// (0x0008c1df) application_window

0x1090,	// (0x0008c22b) area_bottom_pane_ParamLimits

0x1090,	// (0x0008c22b) area_bottom_pane

0x10c9,	// (0x0008c264) area_top_pane_ParamLimits

0x10c9,	// (0x0008c264) area_top_pane

0x983d,	// (0x000949d8) call_video_uplink_pane_ParamLimits

0x983d,	// (0x000949d8) call_video_uplink_pane

0x1157,	// (0x0008c2f2) main_pane_ParamLimits

0x1157,	// (0x0008c2f2) main_pane

0xc922,	// (0x00097abd) context_pane

0x427d,	// (0x0008f418) navi_pane

0x42af,	// (0x0008f44a) popup_cale_events_window_ParamLimits

0x42af,	// (0x0008f44a) popup_cale_events_window

0xc935,	// (0x00097ad0) popup_mup_playback_window

0x42c7,	// (0x0008f462) signal_pane

0xa882,	// (0x00095a1d) main_browser_pane

0xaa6e,	// (0x00095c09) main_burst_pane

0x3fe5,	// (0x0008f180) main_calc_pane

0xc908,	// (0x00097aa3) main_cale_day_pane

0x1776,	// (0x0008c911) main_cale_month_pane

0xc908,	// (0x00097aa3) main_cale_week_pane

0xaa6e,	// (0x00095c09) main_call_pane

0xa556,	// (0x000956f1) main_call_poc_pane

0xaa6e,	// (0x00095c09) main_camera_pane

0xaa6e,	// (0x00095c09) main_chi_dic_pane

0xb271,	// (0x0009640c) main_clock_pane

0xa556,	// (0x000956f1) main_fmradio_pane

0xaa6e,	// (0x00095c09) main_graph_messa_pane

0xa556,	// (0x000956f1) main_help_pane

0xa882,	// (0x00095a1d) main_im_pane

0xa7b1,	// (0x0009594c) main_image_pane_ParamLimits

0xa7b1,	// (0x0009594c) main_image_pane

0xa556,	// (0x000956f1) main_location2_pane

0xaa6e,	// (0x00095c09) main_location_pane

0xa7b1,	// (0x0009594c) main_messa_pane

0xa556,	// (0x000956f1) main_mp2_pane

0xaa6e,	// (0x00095c09) main_mp_pane

0xa556,	// (0x000956f1) main_msg_pane

0xa556,	// (0x000956f1) main_mup_eq_pane

0xa556,	// (0x000956f1) main_mup_pane

0xa882,	// (0x00095a1d) main_notes_pane

0xa556,	// (0x000956f1) main_pec_pane

0xa556,	// (0x000956f1) main_phob_pane

0xa556,	// (0x000956f1) main_pinb_pane

0xa556,	// (0x000956f1) main_postcard_pane

0xa556,	// (0x000956f1) main_qdial_pane

0xaa6e,	// (0x00095c09) main_skin_pane

0xa556,	// (0x000956f1) main_smil2_pane

0xaa6e,	// (0x00095c09) main_smil_pane

0xaa6e,	// (0x00095c09) main_video_pane

0xaa6e,	// (0x00095c09) main_video_tele_pane

0xa7b1,	// (0x0009594c) main_viewer_pane_ParamLimits

0xa7b1,	// (0x0009594c) main_viewer_pane

0xaa6e,	// (0x00095c09) main_vorec_pane

0x4039,	// (0x0008f1d4) popup_blid_sat_info_window_ParamLimits

0x4039,	// (0x0008f1d4) popup_blid_sat_info_window

0x4091,	// (0x0008f22c) popup_dyc_status_message_window_ParamLimits

0x4091,	// (0x0008f22c) popup_dyc_status_message_window

0x40a9,	// (0x0008f244) popup_grid_large_graphic_window_ParamLimits

0x40a9,	// (0x0008f244) popup_grid_large_graphic_window

0x4159,	// (0x0008f2f4) popup_loc_request_window_ParamLimits

0x4159,	// (0x0008f2f4) popup_loc_request_window

0x4255,	// (0x0008f3f0) popup_wml_address_window_ParamLimits

0x4255,	// (0x0008f3f0) popup_wml_address_window

0x3e1f,	// (0x0008efba) call_muted_g1

0x3ad3,	// (0x0008ec6e) popup_call_audio_conf_window_ParamLimits

0x3ad3,	// (0x0008ec6e) popup_call_audio_conf_window

0x3e33,	// (0x0008efce) popup_call_audio_first_window_ParamLimits

0x3e33,	// (0x0008efce) popup_call_audio_first_window

0x3ea9,	// (0x0008f044) popup_call_audio_in_window_ParamLimits

0x3ea9,	// (0x0008f044) popup_call_audio_in_window

0x3ee5,	// (0x0008f080) popup_call_audio_out_window_ParamLimits

0x3ee5,	// (0x0008f080) popup_call_audio_out_window

0x3f1f,	// (0x0008f0ba) popup_call_audio_second_window_ParamLimits

0x3f1f,	// (0x0008f0ba) popup_call_audio_second_window

0x3f75,	// (0x0008f110) popup_call_audio_wait_window_ParamLimits

0x3f75,	// (0x0008f110) popup_call_audio_wait_window

0x3faa,	// (0x0008f145) popup_number_entry_window_ParamLimits

0x3faa,	// (0x0008f145) popup_number_entry_window

0x985b,	// (0x000949f6) bg_popup_call_pane_cp05_ParamLimits

0x985b,	// (0x000949f6) bg_popup_call_pane_cp05

0x987b,	// (0x00094a16) popup_number_entry_window_t1

0x988e,	// (0x00094a29) popup_number_entry_window_t2

0x98a0,	// (0x00094a3b) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0009a24a) popup_number_entry_window_t

0x98b2,	// (0x00094a4d) text_title_cp2

0x98c5,	// (0x00094a60) bg_popup_call_pane_cp_ParamLimits

0x98c5,	// (0x00094a60) bg_popup_call_pane_cp

0x98d3,	// (0x00094a6e) call_thumbnail_pane

0x98db,	// (0x00094a76) popup_call_audio_in_window_g1_ParamLimits

0x98db,	// (0x00094a76) popup_call_audio_in_window_g1

0x98e7,	// (0x00094a82) popup_call_audio_in_window_g2_ParamLimits

0x98e7,	// (0x00094a82) popup_call_audio_in_window_g2

0x98f3,	// (0x00094a8e) popup_call_audio_in_window_g3_ParamLimits

0x98f3,	// (0x00094a8e) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0009a253) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0009a253) popup_call_audio_in_window_g

0x98ff,	// (0x00094a9a) popup_call_audio_in_window_t1_ParamLimits

0x98ff,	// (0x00094a9a) popup_call_audio_in_window_t1

0x991b,	// (0x00094ab6) popup_call_audio_in_window_t2_ParamLimits

0x991b,	// (0x00094ab6) popup_call_audio_in_window_t2

0x9937,	// (0x00094ad2) popup_call_audio_in_window_t3_ParamLimits

0x9937,	// (0x00094ad2) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0009a25a) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0009a25a) popup_call_audio_in_window_t

0x98c5,	// (0x00094a60) bg_popup_call_pane_cp01_ParamLimits

0x98c5,	// (0x00094a60) bg_popup_call_pane_cp01

0x98d3,	// (0x00094a6e) call_thumbnail_pane_cp02

0x994a,	// (0x00094ae5) call_type_pane_cp022

0x9952,	// (0x00094aed) popup_call_audio_out_window_g1_ParamLimits

0x9952,	// (0x00094aed) popup_call_audio_out_window_g1

0x9964,	// (0x00094aff) popup_call_audio_out_window_g2_ParamLimits

0x9964,	// (0x00094aff) popup_call_audio_out_window_g2

0x9970,	// (0x00094b0b) popup_call_audio_out_window_g3_ParamLimits

0x9970,	// (0x00094b0b) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0009a261) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0009a261) popup_call_audio_out_window_g

0x9982,	// (0x00094b1d) popup_call_audio_out_window_t1_ParamLimits

0x9982,	// (0x00094b1d) popup_call_audio_out_window_t1

0x999a,	// (0x00094b35) popup_call_audio_out_window_t2_ParamLimits

0x999a,	// (0x00094b35) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0009a268) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0009a268) popup_call_audio_out_window_t

0x99af,	// (0x00094b4a) bg_popup_call_pane_ParamLimits

0x99af,	// (0x00094b4a) bg_popup_call_pane

0x1314,	// (0x0008c4af) call_thumbnail_pane_cp_ParamLimits

0x1314,	// (0x0008c4af) call_thumbnail_pane_cp

0x9a33,	// (0x00094bce) call_type_pane_cp01_ParamLimits

0x9a33,	// (0x00094bce) call_type_pane_cp01

0x9a77,	// (0x00094c12) popup_call_audio_first_window_g1_ParamLimits

0x9a77,	// (0x00094c12) popup_call_audio_first_window_g1

0x9ac3,	// (0x00094c5e) popup_call_audio_first_window_g2_ParamLimits

0x9ac3,	// (0x00094c5e) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0009a26d) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0009a26d) popup_call_audio_first_window_g

0x9b07,	// (0x00094ca2) popup_call_audio_first_window_t1_ParamLimits

0x9b07,	// (0x00094ca2) popup_call_audio_first_window_t1

0xa49b,	// (0x00095636) popup_call_audio_first_window_t4_ParamLimits

0xa49b,	// (0x00095636) popup_call_audio_first_window_t4

0xa527,	// (0x000956c2) popup_call_audio_first_window_t5_ParamLimits

0xa527,	// (0x000956c2) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0009a272) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0009a272) popup_call_audio_first_window_t

0xa556,	// (0x000956f1) bg_popup_call_pane_cp02

0xa560,	// (0x000956fb) call_type_pane_cp023

0xa568,	// (0x00095703) popup_call_audio_wait_window_g1

0xa570,	// (0x0009570b) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0009a279) popup_call_audio_wait_window_g

0xa578,	// (0x00095713) popup_call_audio_wait_window_t3

0xa586,	// (0x00095721) bg_popup_call_pane_cp03_ParamLimits

0xa586,	// (0x00095721) bg_popup_call_pane_cp03

0xa5e6,	// (0x00095781) call_thumbnail_pane_cp011_ParamLimits

0xa5e6,	// (0x00095781) call_thumbnail_pane_cp011

0xa5f2,	// (0x0009578d) call_type_pane_cp034_ParamLimits

0xa5f2,	// (0x0009578d) call_type_pane_cp034

0xa62e,	// (0x000957c9) popup_call_audio_second_window_g1_ParamLimits

0xa62e,	// (0x000957c9) popup_call_audio_second_window_g1

0xa66a,	// (0x00095805) popup_call_audio_second_window_g2_ParamLimits

0xa66a,	// (0x00095805) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0009a27e) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0009a27e) popup_call_audio_second_window_g

0xa6a6,	// (0x00095841) popup_call_audio_second_window_t1_ParamLimits

0xa6a6,	// (0x00095841) popup_call_audio_second_window_t1

0xa727,	// (0x000958c2) popup_call_audio_second_window_t2_ParamLimits

0xa727,	// (0x000958c2) popup_call_audio_second_window_t2

0xa75d,	// (0x000958f8) popup_call_audio_second_window_t3_ParamLimits

0xa75d,	// (0x000958f8) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0009a283) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0009a283) popup_call_audio_second_window_t

0xa556,	// (0x000956f1) bg_popup_call_pane_cp04

0xa793,	// (0x0009592e) list_conf_pane

0xa79b,	// (0x00095936) popup_call_audio_conf_window_t1

0xa7a9,	// (0x00095944) call_thumbnail_pane_g1

0xa7b1,	// (0x0009594c) bg_pinb_pane_ParamLimits

0xa7b1,	// (0x0009594c) bg_pinb_pane

0xa7bf,	// (0x0009595a) find_pinb_pane

0xa7c8,	// (0x00095963) listscroll_pinb_pane_ParamLimits

0xa7c8,	// (0x00095963) listscroll_pinb_pane

0xa7d7,	// (0x00095972) pinb_bg_pane_g1

0x1338,	// (0x0008c4d3) pinb_bg_pane_g2

0x1344,	// (0x0008c4df) pinb_bg_pane_g3

0x1350,	// (0x0008c4eb) pinb_bg_pane_g4

0x135c,	// (0x0008c4f7) pinb_bg_pane_g5

0x1368,	// (0x0008c503) pinb_bg_pane_g6

0x1373,	// (0x0008c50e) pinb_bg_pane_g7

0x137e,	// (0x0008c519) pinb_bg_pane_g8

0x1389,	// (0x0008c524) pinb_bg_pane_g9

0x1393,	// (0x0008c52e) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0009a28a) pinb_bg_pane_g

0x13b0,	// (0x0008c54b) grid_pinb_pane

0x13b9,	// (0x0008c554) list_pinb_pane

0x13c2,	// (0x0008c55d) scroll_pane_cp01_ParamLimits

0x13c2,	// (0x0008c55d) scroll_pane_cp01

0xa7e1,	// (0x0009597c) find_pinb_pane_g1_ParamLimits

0xa7e1,	// (0x0009597c) find_pinb_pane_g1

0xa7f9,	// (0x00095994) find_pinb_pane_t1

0xa80b,	// (0x000959a6) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0009a2a4) find_pinb_pane_t

0xa820,	// (0x000959bb) input_focus_pane_cp01_ParamLimits

0xa820,	// (0x000959bb) input_focus_pane_cp01

0x13d4,	// (0x0008c56f) cell_pinb_pane_ParamLimits

0x13d4,	// (0x0008c56f) cell_pinb_pane

0x13ff,	// (0x0008c59a) cell_pinb_pane_g1_ParamLimits

0x13ff,	// (0x0008c59a) cell_pinb_pane_g1

0xa82c,	// (0x000959c7) cell_pinb_pane_g2_ParamLimits

0xa82c,	// (0x000959c7) cell_pinb_pane_g2

0xa838,	// (0x000959d3) cell_pinb_pane_g3_ParamLimits

0xa838,	// (0x000959d3) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0009a2a9) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0009a2a9) cell_pinb_pane_g

0xa556,	// (0x000956f1) grid_highlight_pane_cp01

0x1412,	// (0x0008c5ad) list_pinb_item_pane_ParamLimits

0x1412,	// (0x0008c5ad) list_pinb_item_pane

0xa556,	// (0x000956f1) list_highlight_pane_cp02

0x1425,	// (0x0008c5c0) list_pinb_item_pane_g1_ParamLimits

0x1425,	// (0x0008c5c0) list_pinb_item_pane_g1

0x1432,	// (0x0008c5cd) list_pinb_item_pane_g2_ParamLimits

0x1432,	// (0x0008c5cd) list_pinb_item_pane_g2

0x143e,	// (0x0008c5d9) list_pinb_item_pane_g3_ParamLimits

0x143e,	// (0x0008c5d9) list_pinb_item_pane_g3

0x144f,	// (0x0008c5ea) list_pinb_item_pane_g4_ParamLimits

0x144f,	// (0x0008c5ea) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0009a2b0) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0009a2b0) list_pinb_item_pane_g

0x145b,	// (0x0008c5f6) list_pinb_item_pane_t1_ParamLimits

0x145b,	// (0x0008c5f6) list_pinb_item_pane_t1

0x1490,	// (0x0008c62b) calc_display_pane

0x14b5,	// (0x0008c650) calc_paper_pane

0x14d8,	// (0x0008c673) grid_calc_pane

0xa556,	// (0x000956f1) bg_list_pane_cp01

0x1506,	// (0x0008c6a1) clock_g1

0x150e,	// (0x0008c6a9) clock_g2

0x0001,

0xf11e,	// (0x0009a2b9) clock_g

0x1516,	// (0x0008c6b1) clock_t1_ParamLimits

0x1516,	// (0x0008c6b1) clock_t1

0x152b,	// (0x0008c6c6) clock_t2_ParamLimits

0x152b,	// (0x0008c6c6) clock_t2

0x153d,	// (0x0008c6d8) clock_t3_ParamLimits

0x153d,	// (0x0008c6d8) clock_t3

0x154f,	// (0x0008c6ea) clock_t4_ParamLimits

0x154f,	// (0x0008c6ea) clock_t4

0x1561,	// (0x0008c6fc) clock_t5_ParamLimits

0x1561,	// (0x0008c6fc) clock_t5

0x1576,	// (0x0008c711) clock_t6_ParamLimits

0x1576,	// (0x0008c711) clock_t6

0x1588,	// (0x0008c723) clock_t7_ParamLimits

0x1588,	// (0x0008c723) clock_t7

0x159a,	// (0x0008c735) clock_t8_ParamLimits

0x159a,	// (0x0008c735) clock_t8

0x15ae,	// (0x0008c749) clock_t9_ParamLimits

0x15ae,	// (0x0008c749) clock_t9

0x0008,

0xf123,	// (0x0009a2be) clock_t_ParamLimits

0xf123,	// (0x0009a2be) clock_t

0xa844,	// (0x000959df) popup_clock_analogue_window_cp02

0xa844,	// (0x000959df) popup_clock_digital_window_cp01

0xa84c,	// (0x000959e7) listscroll_help_pane

0xa556,	// (0x000956f1) phob_pre_status_pane

0xa856,	// (0x000959f1) grid_qdial_pane

0xa7b1,	// (0x0009594c) listscroll_mce_pane

0xa7b1,	// (0x0009594c) bg_notes_pane

0xa860,	// (0x000959fb) list_notes_pane

0x15c2,	// (0x0008c75d) scroll_pane_cp06

0xa86e,	// (0x00095a09) bg_calc_paper_pane

0x9bbb,	// (0x00094d56) list_calc_pane

0xa882,	// (0x00095a1d) bg_calc_display_pane

0x15d6,	// (0x0008c771) calc_display_pane_t1

0x15e8,	// (0x0008c783) calc_display_pane_t2

0x9bd5,	// (0x00094d70) calc_display_pane_t3

0x0002,

0xf136,	// (0x0009a2d1) calc_display_pane_t

0x15fa,	// (0x0008c795) cell_calc_pane_ParamLimits

0x15fa,	// (0x0008c795) cell_calc_pane

0xa88e,	// (0x00095a29) bg_calc_paper_pane_g1

0xa89a,	// (0x00095a35) bg_calc_paper_pane_g2

0xa8a6,	// (0x00095a41) bg_calc_paper_pane_g3

0xa8b2,	// (0x00095a4d) bg_calc_paper_pane_g4

0xa8be,	// (0x00095a59) bg_calc_paper_pane_g5

0x162f,	// (0x0008c7ca) bg_calc_paper_pane_g6

0x163e,	// (0x0008c7d9) bg_calc_paper_pane_g7

0x164d,	// (0x0008c7e8) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0009a2d8) bg_calc_paper_pane_g

0x1660,	// (0x0008c7fb) calc_bg_paper_pane_g9

0x1673,	// (0x0008c80e) list_calc_item_pane_ParamLimits

0x1673,	// (0x0008c80e) list_calc_item_pane

0xa8ca,	// (0x00095a65) list_calc_item_pane_g1

0x9be7,	// (0x00094d82) list_calc_item_pane_t1_ParamLimits

0x9be7,	// (0x00094d82) list_calc_item_pane_t1

0x1688,	// (0x0008c823) list_calc_item_pane_t2_ParamLimits

0x1688,	// (0x0008c823) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0009a2e9) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0009a2e9) list_calc_item_pane_t

0xa8d7,	// (0x00095a72) cell_calc_pane_g1

0xa8e1,	// (0x00095a7c) grid_highlight_pane_cp02

0xa903,	// (0x00095a9e) bg_calc_display_pane_g1

0x16ba,	// (0x0008c855) bg_calc_display_pane_g2

0xd50e,	// (0x000986a9) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0009a2f3) bg_calc_display_pane_g

0x16c4,	// (0x0008c85f) cell_qdial_pane_ParamLimits

0x16c4,	// (0x0008c85f) cell_qdial_pane

0x16d8,	// (0x0008c873) cell_qdial_pane_g1_ParamLimits

0x16d8,	// (0x0008c873) cell_qdial_pane_g1

0x16ee,	// (0x0008c889) cell_qdial_pane_g2_ParamLimits

0x16ee,	// (0x0008c889) cell_qdial_pane_g2

0xa90c,	// (0x00095aa7) cell_qdial_pane_g3_ParamLimits

0xa90c,	// (0x00095aa7) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0009a2fa) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0009a2fa) cell_qdial_pane_g

0x1714,	// (0x0008c8af) cell_qdial_pane_t1_ParamLimits

0x1714,	// (0x0008c8af) cell_qdial_pane_t1

0x172c,	// (0x0008c8c7) cell_qdial_pane_t2_ParamLimits

0x172c,	// (0x0008c8c7) cell_qdial_pane_t2

0x173f,	// (0x0008c8da) cell_qdial_pane_t3_ParamLimits

0x173f,	// (0x0008c8da) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0009a303) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0009a303) cell_qdial_pane_t

0xa556,	// (0x000956f1) grid_highlight_pane_cp04

0xa918,	// (0x00095ab3) thumbnail_qdial_pane_ParamLimits

0xa918,	// (0x00095ab3) thumbnail_qdial_pane

0xa974,	// (0x00095b0f) list_help_pane

0xa97d,	// (0x00095b18) scroll_pane_cp02

0xa986,	// (0x00095b21) help_list_pane_t1_ParamLimits

0xa986,	// (0x00095b21) help_list_pane_t1

0x9bf9,	// (0x00094d94) bg_notes_pane_g2

0x9c01,	// (0x00094d9c) bg_notes_pane_g3

0x9c09,	// (0x00094da4) notes_bg_pane_g1

0x9c11,	// (0x00094dac) notes_bg_pane_g4

0x9c19,	// (0x00094db4) notes_bg_pane_g5

0x9c21,	// (0x00094dbc) notes_bg_pane_g6

0x9c29,	// (0x00094dc4) notes_bg_pane_g7

0x9c31,	// (0x00094dcc) notes_bg_pane_g8

0x9c39,	// (0x00094dd4) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0009a321) notes_bg_pane_g

0x1752,	// (0x0008c8ed) list_notes_text_pane_ParamLimits

0x1752,	// (0x0008c8ed) list_notes_text_pane

0xa9a4,	// (0x00095b3f) list_notes_text_pane_g1

0x1768,	// (0x0008c903) list_notes_text_pane_t1

0x1776,	// (0x0008c911) listscroll_cale_week_pane

0x17a2,	// (0x0008c93d) bg_cale_heading_pane

0xa9c7,	// (0x00095b62) bg_cale_pane_cp01

0x17ba,	// (0x0008c955) cale_week_corner_pane

0x17d9,	// (0x0008c974) cale_week_day_heading_pane

0x17f6,	// (0x0008c991) cale_week_scroll_pane_g1

0x1809,	// (0x0008c9a4) cale_week_scroll_pane_g2

0x1821,	// (0x0008c9bc) cale_week_scroll_pane_g3

0x1839,	// (0x0008c9d4) cale_week_scroll_pane_g4

0x1851,	// (0x0008c9ec) cale_week_scroll_pane_g5

0x1871,	// (0x0008ca0c) cale_week_scroll_pane_g6

0x1891,	// (0x0008ca2c) cale_week_scroll_pane_g7

0x18b1,	// (0x0008ca4c) cale_week_scroll_pane_g8

0x18d5,	// (0x0008ca70) cale_week_scroll_pane_g9

0x18ed,	// (0x0008ca88) cale_week_scroll_pane_g10

0x1905,	// (0x0008caa0) cale_week_scroll_pane_g11

0x191d,	// (0x0008cab8) cale_week_scroll_pane_g12

0x1935,	// (0x0008cad0) cale_week_scroll_pane_g13

0x1935,	// (0x0008cad0) cale_week_scroll_pane_g14

0x1935,	// (0x0008cad0) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0009a330) cale_week_scroll_pane_g

0x1971,	// (0x0008cb0c) cale_week_time_pane

0x1995,	// (0x0008cb30) grid_cale_week_pane

0xa9f6,	// (0x00095b91) scroll_pane_cp08

0x19bb,	// (0x0008cb56) cell_cale_week_pane_ParamLimits

0x19bb,	// (0x0008cb56) cell_cale_week_pane

0x1a49,	// (0x0008cbe4) cale_week_day_heading_pane_t1

0x1a73,	// (0x0008cc0e) cale_week_day_heading_pane_t2

0x1aa2,	// (0x0008cc3d) cale_week_day_heading_pane_t3

0x1ad1,	// (0x0008cc6c) cale_week_day_heading_pane_t4

0x1b00,	// (0x0008cc9b) cale_week_day_heading_pane_t5

0x1b37,	// (0x0008ccd2) cale_week_day_heading_pane_t6

0x1b6e,	// (0x0008cd09) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0009a351) cale_week_day_heading_pane_t

0xaa13,	// (0x00095bae) bg_cale_side_pane

0x1b98,	// (0x0008cd33) cale_week_time_pane_t1

0x1bb2,	// (0x0008cd4d) cale_week_time_pane_t2

0x1bcc,	// (0x0008cd67) cale_week_time_pane_t3

0x1be6,	// (0x0008cd81) cale_week_time_pane_t4

0x1c00,	// (0x0008cd9b) cale_week_time_pane_t5

0x1c1a,	// (0x0008cdb5) cale_week_time_pane_t6

0x1c34,	// (0x0008cdcf) cale_week_time_pane_t7

0x1c4e,	// (0x0008cde9) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0009a360) cale_week_time_pane_t

0x1c6e,	// (0x0008ce09) cell_cale_week_pane_g2

0x1c92,	// (0x0008ce2d) cell_cale_week_pane_g3_ParamLimits

0x1c92,	// (0x0008ce2d) cell_cale_week_pane_g3

0xaa21,	// (0x00095bbc) grid_highlight_pane_cp07

0xaa29,	// (0x00095bc4) listscroll_gms_pane

0xaa33,	// (0x00095bce) grid_gms_pane

0xaa3c,	// (0x00095bd7) listscroll_gms_pane_g1

0xaa44,	// (0x00095bdf) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0009a371) listscroll_gms_pane_g

0x1caa,	// (0x0008ce45) scroll_pane_cp010

0x1cb5,	// (0x0008ce50) cell_gms_pane_ParamLimits

0x1cb5,	// (0x0008ce50) cell_gms_pane

0x1cc7,	// (0x0008ce62) cell_gms_pane_g1

0xaa4c,	// (0x00095be7) cell_gms_pane_g2

0xaa54,	// (0x00095bef) cell_gms_pane_g3

0xaa5d,	// (0x00095bf8) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0009a376) cell_gms_pane_g

0xaa66,	// (0x00095c01) grid_highlight_pane_cp09

0x3dc9,	// (0x0008ef64) phob_pre_status_pane_g1

0x3dd1,	// (0x0008ef6c) phob_pre_status_pane_g2

0x3dd9,	// (0x0008ef74) phob_pre_status_pane_g3

0x3de1,	// (0x0008ef7c) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0009a774) phob_pre_status_pane_g

0x3df1,	// (0x0008ef8c) phob_pre_status_pane_t1

0x3dff,	// (0x0008ef9a) phob_pre_status_pane_t2

0x3e0f,	// (0x0008efaa) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x0009a77f) phob_pre_status_pane_t

0xaa6e,	// (0x00095c09) bg_list_pane_cp05

0x1cd7,	// (0x0008ce72) grid_vorec_pane

0x1cdf,	// (0x0008ce7a) vorec_t1

0x1ced,	// (0x0008ce88) vorec_t2

0x1cfb,	// (0x0008ce96) vorec_t3

0x1d09,	// (0x0008cea4) vorec_t4

0x97b1,	// (0x0009494c) vorec_t5

0x97bf,	// (0x0009495a) vorec_t6

0x0004,

0xf1e4,	// (0x0009a37f) vorec_t

0x97cd,	// (0x00094968) wait_bar_pane_cp01

0x1d25,	// (0x0008cec0) cell_vorec_pane_ParamLimits

0x1d25,	// (0x0008cec0) cell_vorec_pane

0x9c41,	// (0x00094ddc) cell_vorec_pane_g1

0xa556,	// (0x000956f1) grid_highlight_pane_cp05

0x1d50,	// (0x0008ceeb) cams_zoom_pane

0x1d5f,	// (0x0008cefa) image_vga_pane

0x1d79,	// (0x0008cf14) main_camera_pane_g1

0x1d8b,	// (0x0008cf26) main_camera_pane_g2

0x1d9b,	// (0x0008cf36) main_camera_pane_g3

0x1dab,	// (0x0008cf46) main_camera_pane_g4

0x1dbb,	// (0x0008cf56) main_camera_pane_g5

0x1dcb,	// (0x0008cf66) main_camera_pane_g6

0x1ddb,	// (0x0008cf76) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0009a38a) main_camera_pane_g

0x1deb,	// (0x0008cf86) main_camera_pane_t1

0x1e01,	// (0x0008cf9c) main_camera_pane_t2

0x0001,

0xf200,	// (0x0009a39b) main_camera_pane_t

0x1e3b,	// (0x0008cfd6) cams_zoom_pane_cp_ParamLimits

0x1e3b,	// (0x0008cfd6) cams_zoom_pane_cp

0x1e63,	// (0x0008cffe) image_cif_pane_ParamLimits

0x1e63,	// (0x0008cffe) image_cif_pane

0x1e9e,	// (0x0008d039) image_subqcif_pane

0x1ea6,	// (0x0008d041) main_video_pane_g1_ParamLimits

0x1ea6,	// (0x0008d041) main_video_pane_g1

0x1eca,	// (0x0008d065) main_video_pane_g2_ParamLimits

0x1eca,	// (0x0008d065) main_video_pane_g2

0x1efe,	// (0x0008d099) main_video_pane_g3_ParamLimits

0x1efe,	// (0x0008d099) main_video_pane_g3

0x1f2c,	// (0x0008d0c7) main_video_pane_g4_ParamLimits

0x1f2c,	// (0x0008d0c7) main_video_pane_g4

0x1f5a,	// (0x0008d0f5) main_video_pane_g5_ParamLimits

0x1f5a,	// (0x0008d0f5) main_video_pane_g5

0xaa82,	// (0x00095c1d) main_video_pane_g6_ParamLimits

0xaa82,	// (0x00095c1d) main_video_pane_g6

0x0006,

0xf205,	// (0x0009a3a0) main_video_pane_g_ParamLimits

0xf205,	// (0x0009a3a0) main_video_pane_g

0x1f83,	// (0x0008d11e) main_video_pane_t1_ParamLimits

0x1f83,	// (0x0008d11e) main_video_pane_t1

0xaa9c,	// (0x00095c37) cams_zoom_pane_g1

0xaaa5,	// (0x00095c40) cams_zoom_pane_g2

0xaaae,	// (0x00095c49) cams_zoom_pane_g3

0xaab7,	// (0x00095c52) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0009a3af) cams_zoom_pane_g

0x1fe0,	// (0x0008d17b) grid_cams_pane

0x1ffa,	// (0x0008d195) linegrid_cams_pane

0x200d,	// (0x0008d1a8) cell_cams_pane_ParamLimits

0x200d,	// (0x0008d1a8) cell_cams_pane

0xaac0,	// (0x00095c5b) cams_burst_image_pane

0xaac8,	// (0x00095c63) cell_cams_pane_g1

0xa556,	// (0x000956f1) grid_highlight_pane_cp03

0xa8d7,	// (0x00095a72) mp_bg_pane_g1

0xa556,	// (0x000956f1) bg_list_pane_cp03

0xc82d,	// (0x000979c8) bg_mp_pane

0xc835,	// (0x000979d0) grid_mp_pane

0xc83d,	// (0x000979d8) media_player_g1

0xc845,	// (0x000979e0) media_player_t1

0xc853,	// (0x000979ee) media_player_t2

0xc861,	// (0x000979fc) media_player_t3

0xc86f,	// (0x00097a0a) media_player_t4

0xc87d,	// (0x00097a18) media_player_t5

0xc88b,	// (0x00097a26) media_player_t6

0xc899,	// (0x00097a34) media_player_t7

0x0006,

0xf5c3,	// (0x0009a75e) media_player_t

0xc8a7,	// (0x00097a42) wait_bar_pane_cp02

0xf5a8,	// (0x0009a743) main_usb_pane_t

0x3dc0,	// (0x0008ef5b) cell_mp_pane

0xa8d7,	// (0x00095a72) cell_mp_pane_g1

0xa556,	// (0x000956f1) grid_highlight_pane_cp06

0xaad0,	// (0x00095c6b) grid_skin_colour_pane

0xaad8,	// (0x00095c73) list_highlight_pane_cp03

0x2045,	// (0x0008d1e0) skin_g1

0xaae0,	// (0x00095c7b) skin_t1

0xaaef,	// (0x00095c8a) skin_t2

0x0001,

0xf249,	// (0x0009a3e4) skin_t

0x204d,	// (0x0008d1e8) cell_skin_colour_pane_ParamLimits

0x204d,	// (0x0008d1e8) cell_skin_colour_pane

0xaafd,	// (0x00095c98) cell_skin_colour_pane_g1

0x20c6,	// (0x0008d261) call_video_g1_ParamLimits

0x20c6,	// (0x0008d261) call_video_g1

0x20e2,	// (0x0008d27d) call_video_g2_ParamLimits

0x20e2,	// (0x0008d27d) call_video_g2

0x0001,

0xf24e,	// (0x0009a3e9) call_video_g_ParamLimits

0xf24e,	// (0x0009a3e9) call_video_g

0x2134,	// (0x0008d2cf) call_video_uplink_pane_cp1_ParamLimits

0x2134,	// (0x0008d2cf) call_video_uplink_pane_cp1

0xab0f,	// (0x00095caa) call_video_uplink_pane_cp2

0x21d3,	// (0x0008d36e) video_down_crop_pane_ParamLimits

0x21d3,	// (0x0008d36e) video_down_crop_pane

0x22bc,	// (0x0008d457) video_down_pane_ParamLimits

0x22bc,	// (0x0008d457) video_down_pane

0xab17,	// (0x00095cb2) video_down_subqcif_pane_ParamLimits

0xab17,	// (0x00095cb2) video_down_subqcif_pane

0xab2f,	// (0x00095cca) video_down_subqcif_pane_cp_ParamLimits

0xab2f,	// (0x00095cca) video_down_subqcif_pane_cp

0xab55,	// (0x00095cf0) im_reading_pane_ParamLimits

0xab55,	// (0x00095cf0) im_reading_pane

0x23cc,	// (0x0008d567) im_writing_pane_ParamLimits

0x23cc,	// (0x0008d567) im_writing_pane

0x23e2,	// (0x0008d57d) im_reading_pane_t1

0xab6f,	// (0x00095d0a) list_im_pane

0xab80,	// (0x00095d1b) scroll_pane_cp07

0x241c,	// (0x0008d5b7) im_writing_pane_t1_ParamLimits

0x241c,	// (0x0008d5b7) im_writing_pane_t1

0xab99,	// (0x00095d34) im_writing_pane_t2_ParamLimits

0xab99,	// (0x00095d34) im_writing_pane_t2

0x0001,

0xf258,	// (0x0009a3f3) im_writing_pane_t_ParamLimits

0xf258,	// (0x0009a3f3) im_writing_pane_t

0xa556,	// (0x000956f1) input_focus_pane_cp04

0xa556,	// (0x000956f1) input_focus_pane_cp05

0x2431,	// (0x0008d5cc) list_im_single_pane_ParamLimits

0x2431,	// (0x0008d5cc) list_im_single_pane

0x2446,	// (0x0008d5e1) list_single_im_pane_t1

0x3d80,	// (0x0008ef1b) blid_accuracy_pane

0x3d88,	// (0x0008ef23) blid_compass_pane

0x3d92,	// (0x0008ef2d) main_location_t1

0x3da2,	// (0x0008ef3d) main_location_t2

0x3db2,	// (0x0008ef4d) main_location_t3

0x0002,

0xf5d2,	// (0x0009a76d) main_location_t

0xa556,	// (0x000956f1) aid_levels_location

0xa8d7,	// (0x00095a72) blid_accuracy_pane_g1

0xa8d7,	// (0x00095a72) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0009a455) blid_accuracy_pane_g

0xabe1,	// (0x00095d7c) wml_content_pane

0xac1f,	// (0x00095dba) wml_button_pane_ParamLimits

0xac1f,	// (0x00095dba) wml_button_pane

0x2455,	// (0x0008d5f0) wml_list_single_large_pane_ParamLimits

0x2455,	// (0x0008d5f0) wml_list_single_large_pane

0x246a,	// (0x0008d605) wml_list_single_medium_pane_ParamLimits

0x246a,	// (0x0008d605) wml_list_single_medium_pane

0x2481,	// (0x0008d61c) wml_list_single_small_pane_ParamLimits

0x2481,	// (0x0008d61c) wml_list_single_small_pane

0xac33,	// (0x00095dce) wml_selection_box_pane_ParamLimits

0xac33,	// (0x00095dce) wml_selection_box_pane

0xac46,	// (0x00095de1) wml_list_single_pane_t1

0xac55,	// (0x00095df0) wml_list_single_medium_pane_t1

0xac64,	// (0x00095dff) wml_list_single_large_pane_t1

0xac73,	// (0x00095e0e) input_focus_pane_cp02_ParamLimits

0xac73,	// (0x00095e0e) input_focus_pane_cp02

0xac86,	// (0x00095e21) wml_selection_box_pane_g1

0xac8f,	// (0x00095e2a) wml_selection_box_pane_t1_ParamLimits

0xac8f,	// (0x00095e2a) wml_selection_box_pane_t1

0xa7b1,	// (0x0009594c) bg_wml_button_pane_ParamLimits

0xa7b1,	// (0x0009594c) bg_wml_button_pane

0xaca7,	// (0x00095e42) wml_button_pane_g1

0xacaf,	// (0x00095e4a) wml_button_pane_t1

0xaca7,	// (0x00095e42) wml_button_bg_pane_g1

0xacbf,	// (0x00095e5a) wml_button_bg_pane_g2

0xacc7,	// (0x00095e62) wml_button_bg_pane_g3

0xaccf,	// (0x00095e6a) wml_button_bg_pane_g4

0xacd7,	// (0x00095e72) wml_button_bg_pane_g5

0xacdf,	// (0x00095e7a) wml_button_bg_pane_g6

0xace7,	// (0x00095e82) wml_button_bg_pane_g7

0xacef,	// (0x00095e8a) wml_button_bg_pane_g8

0xacf7,	// (0x00095e92) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0009a3f8) wml_button_bg_pane_g

0x249a,	// (0x0008d635) bg_list_pane_cp02

0xacff,	// (0x00095e9a) mce_header_pane_ParamLimits

0xacff,	// (0x00095e9a) mce_header_pane

0xad15,	// (0x00095eb0) mce_icon_pane

0xad15,	// (0x00095eb0) mce_image_pane

0xad1e,	// (0x00095eb9) mce_text_pane_ParamLimits

0xad1e,	// (0x00095eb9) mce_text_pane

0x24a2,	// (0x0008d63d) scroll_pane_cp03

0xac17,	// (0x00095db2) scroll_pane_cp04

0xad31,	// (0x00095ecc) scroll_pane_cp05_ParamLimits

0xad31,	// (0x00095ecc) scroll_pane_cp05

0x24ac,	// (0x0008d647) mce_header_field_pane_ParamLimits

0x24ac,	// (0x0008d647) mce_header_field_pane

0x24c3,	// (0x0008d65e) mce_header_field_pane_2_ParamLimits

0x24c3,	// (0x0008d65e) mce_header_field_pane_2

0x24d9,	// (0x0008d674) mce_header_field_pane_3

0x24e1,	// (0x0008d67c) list_single_mce_message_pane_ParamLimits

0x24e1,	// (0x0008d67c) list_single_mce_message_pane

0x24f7,	// (0x0008d692) list_single_mce_smart_pane_ParamLimits

0x24f7,	// (0x0008d692) list_single_mce_smart_pane

0xad3d,	// (0x00095ed8) input_focus_pane_cp03

0xad46,	// (0x00095ee1) list_header_data_pane

0x2518,	// (0x0008d6b3) mce_header_field_pane_t1

0x2528,	// (0x0008d6c3) list_single_mce_header_pane_ParamLimits

0x2528,	// (0x0008d6c3) list_single_mce_header_pane

0xad4e,	// (0x00095ee9) list_single_mce_header_pane_t1

0xad5d,	// (0x00095ef8) list_single_mce_message_pane_g1

0xad65,	// (0x00095f00) list_single_mce_message_pane_t1

0x2562,	// (0x0008d6fd) bg_cale_heading_pane_cp01_ParamLimits

0x2562,	// (0x0008d6fd) bg_cale_heading_pane_cp01

0xad73,	// (0x00095f0e) bg_cale_pane_cp02_ParamLimits

0xad73,	// (0x00095f0e) bg_cale_pane_cp02

0x259c,	// (0x0008d737) cale_month_corner_pane

0x25bb,	// (0x0008d756) cale_month_day_heading_pane_ParamLimits

0x25bb,	// (0x0008d756) cale_month_day_heading_pane

0x260d,	// (0x0008d7a8) cale_month_pane_g1_ParamLimits

0x260d,	// (0x0008d7a8) cale_month_pane_g1

0x263c,	// (0x0008d7d7) cale_month_pane_g2_ParamLimits

0x263c,	// (0x0008d7d7) cale_month_pane_g2

0x266c,	// (0x0008d807) cale_month_pane_g3_ParamLimits

0x266c,	// (0x0008d807) cale_month_pane_g3

0x26a8,	// (0x0008d843) cale_month_pane_g4_ParamLimits

0x26a8,	// (0x0008d843) cale_month_pane_g4

0x26e4,	// (0x0008d87f) cale_month_pane_g5_ParamLimits

0x26e4,	// (0x0008d87f) cale_month_pane_g5

0x272c,	// (0x0008d8c7) cale_month_pane_g6_ParamLimits

0x272c,	// (0x0008d8c7) cale_month_pane_g6

0x2778,	// (0x0008d913) cale_month_pane_g7_ParamLimits

0x2778,	// (0x0008d913) cale_month_pane_g7

0x27c8,	// (0x0008d963) cale_month_pane_g8_ParamLimits

0x27c8,	// (0x0008d963) cale_month_pane_g8

0x281c,	// (0x0008d9b7) cale_month_pane_g9_ParamLimits

0x281c,	// (0x0008d9b7) cale_month_pane_g9

0x286e,	// (0x0008da09) cale_month_pane_g10_ParamLimits

0x286e,	// (0x0008da09) cale_month_pane_g10

0x28c0,	// (0x0008da5b) cale_month_pane_g11_ParamLimits

0x28c0,	// (0x0008da5b) cale_month_pane_g11

0x2912,	// (0x0008daad) cale_month_pane_g12_ParamLimits

0x2912,	// (0x0008daad) cale_month_pane_g12

0x2964,	// (0x0008daff) cale_month_pane_g13_ParamLimits

0x2964,	// (0x0008daff) cale_month_pane_g13

0x000c,

0xf270,	// (0x0009a40b) cale_month_pane_g_ParamLimits

0xf270,	// (0x0009a40b) cale_month_pane_g

0x29b6,	// (0x0008db51) cale_month_week_pane

0x29da,	// (0x0008db75) grid_cale_month_pane_ParamLimits

0x29da,	// (0x0008db75) grid_cale_month_pane

0x2a23,	// (0x0008dbbe) cale_month_day_heading_pane_t1

0x2a65,	// (0x0008dc00) cale_month_day_heading_pane_t2

0x2a9a,	// (0x0008dc35) cale_month_day_heading_pane_t3

0x2acf,	// (0x0008dc6a) cale_month_day_heading_pane_t4

0x2b0c,	// (0x0008dca7) cale_month_day_heading_pane_t5

0x2b51,	// (0x0008dcec) cale_month_day_heading_pane_t6

0x2b96,	// (0x0008dd31) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0009a426) cale_month_day_heading_pane_t

0xaa13,	// (0x00095bae) bg_cale_side_pane_cp01

0x2be3,	// (0x0008dd7e) cale_month_week_pane_t1

0x2bfc,	// (0x0008dd97) cale_month_week_pane_t2

0x2c15,	// (0x0008ddb0) cale_month_week_pane_t3

0x2c2e,	// (0x0008ddc9) cale_month_week_pane_t4

0x2c47,	// (0x0008dde2) cale_month_week_pane_t5

0x2c60,	// (0x0008ddfb) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0009a435) cale_month_week_pane_t

0x2c79,	// (0x0008de14) cell_cale_month_pane_ParamLimits

0x2c79,	// (0x0008de14) cell_cale_month_pane

0x9c4b,	// (0x00094de6) cell_cale_month_pane_g1

0x2da7,	// (0x0008df42) cell_cale_month_pane_t1_ParamLimits

0x2da7,	// (0x0008df42) cell_cale_month_pane_t1

0xaa21,	// (0x00095bbc) grid_highlight_pane_cp08

0xa8d7,	// (0x00095a72) main_smil_g1

0x2dd3,	// (0x0008df6e) smil_status_pane

0xadb2,	// (0x00095f4d) smil_text_pane

0xc70d,	// (0x000978a8) bg_popup_call3_rect_pane_g8

0xc715,	// (0x000978b0) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0009a6ee) bg_popup_call3_rect_pane_g

0xc99c,	// (0x00097b37) smil_status_volume_pane_g1

0xadbc,	// (0x00095f57) smil_status_pane_t1

0x9d9d,	// (0x00094f38) volume_smil_pane

0xadd3,	// (0x00095f6e) list_smil_text_pane

0x2de8,	// (0x0008df83) scroll_pane_cp011

0x2df3,	// (0x0008df8e) smil_text_list_pane_t1_ParamLimits

0x2df3,	// (0x0008df8e) smil_text_list_pane_t1

0x9c57,	// (0x00094df2) aid_volume_smil_ParamLimits

0x9c57,	// (0x00094df2) aid_volume_smil

0xa8d7,	// (0x00095a72) smil_volume_pane_g1

0xa8d7,	// (0x00095a72) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0009a455) smil_volume_pane_g

0x1776,	// (0x0008c911) listscroll_cale_day_pane

0xaddd,	// (0x00095f78) bg_cale_pane

0xadf5,	// (0x00095f90) list_cale_pane

0xae18,	// (0x00095fb3) scroll_pane_cp09

0xae29,	// (0x00095fc4) cale_bg_pane_g1

0xae31,	// (0x00095fcc) cale_bg_pane_g2

0xae39,	// (0x00095fd4) cale_bg_pane_g3

0xae41,	// (0x00095fdc) cale_bg_pane_g4

0xae49,	// (0x00095fe4) cale_bg_pane_g5

0xae51,	// (0x00095fec) cale_bg_pane_g6

0xae59,	// (0x00095ff4) cale_bg_pane_g7

0xae61,	// (0x00095ffc) cale_bg_pane_g8

0xae69,	// (0x00096004) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0009a45a) cale_bg_pane_g

0x2e3f,	// (0x0008dfda) list_cale_time_pane_ParamLimits

0x2e3f,	// (0x0008dfda) list_cale_time_pane

0xae71,	// (0x0009600c) list_cale_time_pane_g1_ParamLimits

0xae71,	// (0x0009600c) list_cale_time_pane_g1

0xae7d,	// (0x00096018) list_cale_time_pane_g2_ParamLimits

0xae7d,	// (0x00096018) list_cale_time_pane_g2

0x2e55,	// (0x0008dff0) list_cale_time_pane_g3_ParamLimits

0x2e55,	// (0x0008dff0) list_cale_time_pane_g3

0x2e63,	// (0x0008dffe) list_cale_time_pane_g4_ParamLimits

0x2e63,	// (0x0008dffe) list_cale_time_pane_g4

0x2e71,	// (0x0008e00c) list_cale_time_pane_g5_ParamLimits

0x2e71,	// (0x0008e00c) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0009a46d) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0009a46d) list_cale_time_pane_g

0xae97,	// (0x00096032) list_cale_time_pane_t1_ParamLimits

0xae97,	// (0x00096032) list_cale_time_pane_t1

0xaebf,	// (0x0009605a) list_cale_time_pane_t2_ParamLimits

0xaebf,	// (0x0009605a) list_cale_time_pane_t2

0x3122,	// (0x0008e2bd) aid_blid_cardinal_pane

0x3160,	// (0x0008e2fb) compass_pane_t4

0xaee7,	// (0x00096082) list_cale_time_pane_t4_ParamLimits

0xaee7,	// (0x00096082) list_cale_time_pane_t4

0x316e,	// (0x0008e309) compass_pane_t5

0x317c,	// (0x0008e317) compass_pane_t6

0x318a,	// (0x0008e325) compass_pane_t7

0xb38b,	// (0x00096526) navi_pane_cc_t1

0xb568,	// (0x00096703) aid_phob_thumbnail_center_pane

0x3796,	// (0x0008e931) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0009a47a) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0009a47a) list_cale_time_pane_t

0x98c5,	// (0x00094a60) bg_popup_window_pane_cp02_ParamLimits

0x98c5,	// (0x00094a60) bg_popup_window_pane_cp02

0xaf0f,	// (0x000960aa) heading_pane_cp01_ParamLimits

0xaf0f,	// (0x000960aa) heading_pane_cp01

0xaf1b,	// (0x000960b6) loc_req_pane_ParamLimits

0xaf1b,	// (0x000960b6) loc_req_pane

0xaf2b,	// (0x000960c6) loc_type_pane_ParamLimits

0xaf2b,	// (0x000960c6) loc_type_pane

0xaf3d,	// (0x000960d8) loc_type_pane_t1_ParamLimits

0xaf3d,	// (0x000960d8) loc_type_pane_t1

0xaf4f,	// (0x000960ea) loc_type_pane_t2_ParamLimits

0xaf4f,	// (0x000960ea) loc_type_pane_t2

0xaf61,	// (0x000960fc) loc_type_pane_t3_ParamLimits

0xaf61,	// (0x000960fc) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0009a481) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0009a481) loc_type_pane_t

0xaf73,	// (0x0009610e) list_loc_req_pane

0xaf7d,	// (0x00096118) scroll_pane_cp012

0x2e7f,	// (0x0008e01a) list_single_loc_request_popup_menu_pane_ParamLimits

0x2e7f,	// (0x0008e01a) list_single_loc_request_popup_menu_pane

0xaf88,	// (0x00096123) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf88,	// (0x00096123) list_single_loc_request_popup_menu_pane_g1

0xaf94,	// (0x0009612f) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf94,	// (0x0009612f) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0009a488) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0009a488) list_single_loc_request_popup_menu_pane_g

0xafa0,	// (0x0009613b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafa0,	// (0x0009613b) list_single_loc_request_popup_menu_pane_t1

0xa7b1,	// (0x0009594c) bg_popup_window_pane_cp03_ParamLimits

0xa7b1,	// (0x0009594c) bg_popup_window_pane_cp03

0xafb6,	// (0x00096151) heading_loc_req_pane_ParamLimits

0xafb6,	// (0x00096151) heading_loc_req_pane

0x2e8c,	// (0x0008e027) popup_dyc_status_message_window_g1_ParamLimits

0x2e8c,	// (0x0008e027) popup_dyc_status_message_window_g1

0x2ea0,	// (0x0008e03b) popup_dyc_status_message_window_t1_ParamLimits

0x2ea0,	// (0x0008e03b) popup_dyc_status_message_window_t1

0x2eb5,	// (0x0008e050) popup_dyc_status_message_window_t2_ParamLimits

0x2eb5,	// (0x0008e050) popup_dyc_status_message_window_t2

0x2eca,	// (0x0008e065) popup_dyc_status_message_window_t3_ParamLimits

0x2eca,	// (0x0008e065) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0009a48d) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0009a48d) popup_dyc_status_message_window_t

0xa556,	// (0x000956f1) bg_heading_pane_cp01

0xafc2,	// (0x0009615d) heading_loc_req_pane_g1

0xafca,	// (0x00096165) heading_loc_req_pane_g2

0xafd2,	// (0x0009616d) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0009a494) heading_loc_req_pane_g

0xafda,	// (0x00096175) heading_loc_req_pane_t1

0xafe9,	// (0x00096184) bg_popup_sub_pane_cp01_ParamLimits

0xafe9,	// (0x00096184) bg_popup_sub_pane_cp01

0xaff7,	// (0x00096192) popup_cale_events_window_g1_ParamLimits

0xaff7,	// (0x00096192) popup_cale_events_window_g1

0xb017,	// (0x000961b2) popup_cale_events_window_g2_ParamLimits

0xb017,	// (0x000961b2) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0009a4c8) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0009a4c8) popup_cale_events_window_g

0xb037,	// (0x000961d2) popup_cale_events_window_t1_ParamLimits

0xb037,	// (0x000961d2) popup_cale_events_window_t1

0xb049,	// (0x000961e4) popup_cale_events_window_t2_ParamLimits

0xb049,	// (0x000961e4) popup_cale_events_window_t2

0xb0a7,	// (0x00096242) popup_cale_events_window_t3_ParamLimits

0xb0a7,	// (0x00096242) popup_cale_events_window_t3

0xb0e1,	// (0x0009627c) popup_cale_events_window_t4_ParamLimits

0xb0e1,	// (0x0009627c) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0009a4cd) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0009a4cd) popup_cale_events_window_t

0x2ef2,	// (0x0008e08d) call_type_pane

0x2f02,	// (0x0008e09d) popup_call_status_window_g1

0x2f16,	// (0x0008e0b1) popup_call_status_window_g2

0x2f2a,	// (0x0008e0c5) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0009a4d6) popup_call_status_window_g

0xb117,	// (0x000962b2) call_type_pane_g1

0xb120,	// (0x000962bb) call_type_pane_g2

0x0001,

0xf342,	// (0x0009a4dd) call_type_pane_g

0xa556,	// (0x000956f1) bg_popup_sub_pane_cp02

0xb129,	// (0x000962c4) listscroll_popup_wml_pane

0xb131,	// (0x000962cc) list_wml_pane

0xb13b,	// (0x000962d6) scroll_pane_cp013

0xb146,	// (0x000962e1) list_single_graphic_popup_wml_pane_ParamLimits

0xb146,	// (0x000962e1) list_single_graphic_popup_wml_pane

0xa8d7,	// (0x00095a72) list_single_graphic_popup_wml_pane_g1

0xb15a,	// (0x000962f5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0009a4e2) list_single_graphic_popup_wml_pane_g

0xb162,	// (0x000962fd) list_single_graphic_popup_wml_pane_t1

0xb178,	// (0x00096313) aid_call_pane

0xa7a9,	// (0x00095944) popup_clock_analogue_window_g1

0xa7a9,	// (0x00095944) popup_clock_analogue_window_g2

0x9c79,	// (0x00094e14) popup_clock_analogue_window_g3

0x9c79,	// (0x00094e14) popup_clock_analogue_window_g4

0xa8d7,	// (0x00095a72) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0009a4e7) popup_clock_analogue_window_g

0x9c81,	// (0x00094e1c) popup_clock_analogue_window_t1

0x9c8f,	// (0x00094e2a) clock_digital_number_pane_ParamLimits

0x9c8f,	// (0x00094e2a) clock_digital_number_pane

0x9c9b,	// (0x00094e36) clock_digital_number_pane_cp02_ParamLimits

0x9c9b,	// (0x00094e36) clock_digital_number_pane_cp02

0x9ca7,	// (0x00094e42) clock_digital_number_pane_cp03_ParamLimits

0x9ca7,	// (0x00094e42) clock_digital_number_pane_cp03

0x9cb3,	// (0x00094e4e) clock_digital_number_pane_cp04_ParamLimits

0x9cb3,	// (0x00094e4e) clock_digital_number_pane_cp04

0x9cbf,	// (0x00094e5a) clock_digital_separator_pane_ParamLimits

0x9cbf,	// (0x00094e5a) clock_digital_separator_pane

0x9ccb,	// (0x00094e66) popup_clock_digital_window_t1

0xa8d7,	// (0x00095a72) clock_digital_number_pane_g1

0xa8d7,	// (0x00095a72) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0009a455) clock_digital_number_pane_g

0xa8d7,	// (0x00095a72) clock_digital_separator_pane_g1

0xa8d7,	// (0x00095a72) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0009a455) clock_digital_separator_pane_g

0xa556,	// (0x000956f1) bg_popup_window_pane_cp04

0xb180,	// (0x0009631b) heading_pane_cp03

0xb188,	// (0x00096323) listscroll_popup_gms_pane

0xb190,	// (0x0009632b) grid_large_graphic_popup_pane

0xb19a,	// (0x00096335) listscroll_popup_gms_pane_g1

0xb1a2,	// (0x0009633d) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0009a4f2) listscroll_popup_gms_pane_g

0xac17,	// (0x00095db2) scroll_pane_cp014

0x2f39,	// (0x0008e0d4) cell_large_graphic_popup_pane_ParamLimits

0x2f39,	// (0x0008e0d4) cell_large_graphic_popup_pane

0x2f51,	// (0x0008e0ec) cell_large_graphic_popup_pane_g1_ParamLimits

0x2f51,	// (0x0008e0ec) cell_large_graphic_popup_pane_g1

0xb1aa,	// (0x00096345) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1aa,	// (0x00096345) cell_large_graphic_popup_pane_g2

0xb1b6,	// (0x00096351) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1b6,	// (0x00096351) cell_large_graphic_popup_pane_g3

0xb1c3,	// (0x0009635e) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1c3,	// (0x0009635e) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0009a4f7) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0009a4f7) cell_large_graphic_popup_pane_g

0xb1d3,	// (0x0009636e) grid_highlight_pane_cp010

0xa8d7,	// (0x00095a72) bg_popup_call_pane_g1

0xb1dd,	// (0x00096378) list_single_graphic_popup_conf_pane_ParamLimits

0xb1dd,	// (0x00096378) list_single_graphic_popup_conf_pane

0xb1f0,	// (0x0009638b) list_highlight_pane_cp01

0xb1f9,	// (0x00096394) list_single_graphic_popup_conf_pane_g1

0xb201,	// (0x0009639c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0009a500) list_single_graphic_popup_conf_pane_g

0xb209,	// (0x000963a4) list_single_graphic_popup_conf_pane_t1

0xb217,	// (0x000963b2) linegrid_cams_pane_g1

0x2f5d,	// (0x0008e0f8) linegrid_cams_pane_g2

0xaa54,	// (0x00095bef) linegrid_cams_pane_g3

0xb220,	// (0x000963bb) linegrid_cams_pane_g4

0x2f66,	// (0x0008e101) linegrid_cams_pane_g5

0x2f6f,	// (0x0008e10a) linegrid_cams_pane_g6

0xaa5d,	// (0x00095bf8) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0009a505) linegrid_cams_pane_g

0xb229,	// (0x000963c4) popup_clock_analogue_window

0xb229,	// (0x000963c4) popup_clock_digital_window

0xa556,	// (0x000956f1) popup_phob_thumbnail_window

0xa8d7,	// (0x00095a72) call_video_uplink_pane_g1

0xb232,	// (0x000963cd) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0009a514) call_video_uplink_pane_g

0xb23a,	// (0x000963d5) video_uplink_pane

0xb242,	// (0x000963dd) mce_image_pane_g1

0x2f7a,	// (0x0008e115) mce_image_pane_g2

0x2f82,	// (0x0008e11d) mce_image_pane_g3

0x2f8a,	// (0x0008e125) mce_image_pane_g4

0x2f94,	// (0x0008e12f) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0009a519) mce_image_pane_g

0xb24c,	// (0x000963e7) control_top_pane_stacon_cp01_ParamLimits

0xb24c,	// (0x000963e7) control_top_pane_stacon_cp01

0xb260,	// (0x000963fb) uni_indicator_pane_stacon_cp01_ParamLimits

0xb260,	// (0x000963fb) uni_indicator_pane_stacon_cp01

0xb271,	// (0x0009640c) bg_popup_sub_pane_cp03

0x2f9c,	// (0x0008e137) chi_dic_find_pane

0x2fa4,	// (0x0008e13f) listscroll_chi_dic_pane

0x2fad,	// (0x0008e148) main_pane_chidic_g1

0x2fc0,	// (0x0008e15b) chi_dic_find_pane_t1

0xb27b,	// (0x00096416) find_chidic_pane

0xb284,	// (0x0009641f) chi_dic_list_pane_ParamLimits

0xb284,	// (0x0009641f) chi_dic_list_pane

0xb295,	// (0x00096430) scroll_pane_cp020

0x2fce,	// (0x0008e169) find_chidic_pane_t1

0xa556,	// (0x000956f1) input_focus_pane_cp06

0x2fdd,	// (0x0008e178) list_chi_dic_pane_ParamLimits

0x2fdd,	// (0x0008e178) list_chi_dic_pane

0x2fef,	// (0x0008e18a) list_chi_dic_pane_t1_ParamLimits

0x2fef,	// (0x0008e18a) list_chi_dic_pane_t1

0xa556,	// (0x000956f1) list_highlight_pane_cp020

0xb29d,	// (0x00096438) bg_cale_heading_pane_g1

0x3002,	// (0x0008e19d) bg_cale_heading_pane_g2

0x300a,	// (0x0008e1a5) bg_cale_heading_pane_g3

0x3012,	// (0x0008e1ad) bg_cale_heading_pane_g4

0x301c,	// (0x0008e1b7) bg_cale_heading_pane_g5

0x3026,	// (0x0008e1c1) bg_cale_heading_pane_g6

0x302e,	// (0x0008e1c9) bg_cale_heading_pane_g7

0x3036,	// (0x0008e1d1) bg_cale_heading_pane_g8

0x3040,	// (0x0008e1db) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0009a524) bg_cale_heading_pane_g

0xb29d,	// (0x00096438) bg_cale_side_pane_g1

0x304a,	// (0x0008e1e5) bg_cale_side_pane_g2

0x3052,	// (0x0008e1ed) bg_cale_side_pane_g3

0x305a,	// (0x0008e1f5) bg_cale_side_pane_g4

0x3062,	// (0x0008e1fd) bg_cale_side_pane_g5

0x306a,	// (0x0008e205) bg_cale_side_pane_g6

0x3072,	// (0x0008e20d) bg_cale_side_pane_g7

0x307a,	// (0x0008e215) bg_cale_side_pane_g8

0x3082,	// (0x0008e21d) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0009a537) bg_cale_side_pane_g

0x308a,	// (0x0008e225) popup_call_status_window_ParamLimits

0x308a,	// (0x0008e225) popup_call_status_window

0xb2a5,	// (0x00096440) stacon_top_pane

0xb2ad,	// (0x00096448) status_pane_ParamLimits

0xb2ad,	// (0x00096448) status_pane

0xb2c2,	// (0x0009645d) status_small_pane

0xb2ca,	// (0x00096465) control_pane

0xa556,	// (0x000956f1) stacon_bottom_pane

0xb2d2,	// (0x0009646d) list_single_mce_smart_pane_t1_ParamLimits

0xb2d2,	// (0x0009646d) list_single_mce_smart_pane_t1

0xb2e5,	// (0x00096480) list_single_mce_smart_pane_t2_ParamLimits

0xb2e5,	// (0x00096480) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0009a54a) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0009a54a) list_single_mce_smart_pane_t

0x30d1,	// (0x0008e26c) compass_pane

0x30da,	// (0x0008e275) main_location2_pane_t1

0x30ec,	// (0x0008e287) main_location2_pane_t2

0x30fe,	// (0x0008e299) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0009a54f) main_location2_pane_t

0xb304,	// (0x0009649f) compass_pane_g1_ParamLimits

0xb304,	// (0x0009649f) compass_pane_g1

0x3142,	// (0x0008e2dd) compass_pane_t1

0x3151,	// (0x0008e2ec) compass_pane_t2

0x0005,

0xf3bd,	// (0x0009a558) compass_pane_t

0x3198,	// (0x0008e333) text_secondary_cp61

0xb382,	// (0x0009651d) navi_pane_cams_g5

0xb3fe,	// (0x00096599) navi_pane_im_t1

0xb40c,	// (0x000965a7) navi_pane_mp_g1_ParamLimits

0xb40c,	// (0x000965a7) navi_pane_mp_g1

0xb420,	// (0x000965bb) navi_pane_mp_g2_ParamLimits

0xb420,	// (0x000965bb) navi_pane_mp_g2

0xb42c,	// (0x000965c7) navi_pane_mp_g3_ParamLimits

0xb42c,	// (0x000965c7) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0009a56c) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0009a56c) navi_pane_mp_g

0xb438,	// (0x000965d3) navi_pane_mp_t1

0xb446,	// (0x000965e1) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0009a573) navi_pane_mp_t

0xb4b1,	// (0x0009664c) navi_pane_vt_g1

0xb438,	// (0x000965d3) navi_pane_vt_t1

0xb4b9,	// (0x00096654) navi_slider_pane

0xaa6e,	// (0x00095c09) zooming_pane

0xb4c9,	// (0x00096664) navi_slider_pane_g1

0x9ce8,	// (0x00094e83) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0009a57a) navi_slider_pane_g

0xb4ed,	// (0x00096688) aid_levels_zoom

0xb4f5,	// (0x00096690) zooming_pane_g1

0xb4fd,	// (0x00096698) zooming_pane_g2

0xb4fd,	// (0x00096698) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0009a589) zooming_pane_g

0xb505,	// (0x000966a0) level_10_zoom

0xb50e,	// (0x000966a9) level_11_zoom

0xb517,	// (0x000966b2) level_1_zoom

0xb520,	// (0x000966bb) level_2_zoom

0xb529,	// (0x000966c4) level_3_zoom

0xb532,	// (0x000966cd) level_4_zoom

0xb53b,	// (0x000966d6) level_5_zoom

0xb544,	// (0x000966df) level_6_zoom

0xb54d,	// (0x000966e8) level_7_zoom

0xb556,	// (0x000966f1) level_8_zoom

0xb55f,	// (0x000966fa) level_9_zoom

0xb570,	// (0x0009670b) popup_phob_thumbnail_window_g1

0xb578,	// (0x00096713) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0009a590) popup_phob_thumbnail_window_g

0xc8af,	// (0x00097a4a) level_1_location

0xc8b7,	// (0x00097a52) level_2_location

0xc8bf,	// (0x00097a5a) level_3_location

0xc8c7,	// (0x00097a62) level_4_location

0xaa6e,	// (0x00095c09) level_5_location

0x31e9,	// (0x0008e384) mce_icon_pane_g1

0x31f3,	// (0x0008e38e) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0009a595) mce_icon_pane_g

0x31fb,	// (0x0008e396) main_mup_pane_g1_ParamLimits

0x31fb,	// (0x0008e396) main_mup_pane_g1

0x3211,	// (0x0008e3ac) main_mup_pane_g2_ParamLimits

0x3211,	// (0x0008e3ac) main_mup_pane_g2

0x3223,	// (0x0008e3be) main_mup_pane_g3_ParamLimits

0x3223,	// (0x0008e3be) main_mup_pane_g3

0x3235,	// (0x0008e3d0) main_mup_pane_g4_ParamLimits

0x3235,	// (0x0008e3d0) main_mup_pane_g4

0x324d,	// (0x0008e3e8) main_mup_pane_g5_ParamLimits

0x324d,	// (0x0008e3e8) main_mup_pane_g5

0x3269,	// (0x0008e404) main_mup_pane_g6_ParamLimits

0x3269,	// (0x0008e404) main_mup_pane_g6

0x3281,	// (0x0008e41c) main_mup_pane_g7_ParamLimits

0x3281,	// (0x0008e41c) main_mup_pane_g7

0x3299,	// (0x0008e434) main_mup_pane_g8_ParamLimits

0x3299,	// (0x0008e434) main_mup_pane_g8

0x32b1,	// (0x0008e44c) main_mup_pane_g9_ParamLimits

0x32b1,	// (0x0008e44c) main_mup_pane_g9

0x32cb,	// (0x0008e466) main_mup_pane_g10_ParamLimits

0x32cb,	// (0x0008e466) main_mup_pane_g10

0x32e5,	// (0x0008e480) main_mup_pane_g11_ParamLimits

0x32e5,	// (0x0008e480) main_mup_pane_g11

0x32f9,	// (0x0008e494) main_mup_pane_g12_ParamLimits

0x32f9,	// (0x0008e494) main_mup_pane_g12

0x330f,	// (0x0008e4aa) main_mup_pane_g13_ParamLimits

0x330f,	// (0x0008e4aa) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0009a59a) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0009a59a) main_mup_pane_g

0x3323,	// (0x0008e4be) main_mup_pane_t1_ParamLimits

0x3323,	// (0x0008e4be) main_mup_pane_t1

0x333d,	// (0x0008e4d8) main_mup_pane_t2_ParamLimits

0x333d,	// (0x0008e4d8) main_mup_pane_t2

0x3355,	// (0x0008e4f0) main_mup_pane_t3_ParamLimits

0x3355,	// (0x0008e4f0) main_mup_pane_t3

0x336d,	// (0x0008e508) main_mup_pane_t4_ParamLimits

0x336d,	// (0x0008e508) main_mup_pane_t4

0x338b,	// (0x0008e526) main_mup_pane_t5_ParamLimits

0x338b,	// (0x0008e526) main_mup_pane_t5

0x33a0,	// (0x0008e53b) main_mup_pane_t6_ParamLimits

0x33a0,	// (0x0008e53b) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0009a5b5) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0009a5b5) main_mup_pane_t

0x33b2,	// (0x0008e54d) mup_progress_pane_ParamLimits

0x33b2,	// (0x0008e54d) mup_progress_pane

0x33be,	// (0x0008e559) mup_visualizer_pane_ParamLimits

0x33be,	// (0x0008e559) mup_visualizer_pane

0x33f2,	// (0x0008e58d) mup_volume_pane_ParamLimits

0x33f2,	// (0x0008e58d) mup_volume_pane

0xb580,	// (0x0009671b) mup_visualizer_pane_g1_ParamLimits

0xb580,	// (0x0009671b) mup_visualizer_pane_g1

0xb580,	// (0x0009671b) mup_visualizer_pane_g2_ParamLimits

0xb580,	// (0x0009671b) mup_visualizer_pane_g2

0xb304,	// (0x0009649f) mup_visualizer_pane_g3_ParamLimits

0xb304,	// (0x0009649f) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0009a5c2) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0009a5c2) mup_visualizer_pane_g

0xa8d7,	// (0x00095a72) mup_volume_pane_g1

0xb596,	// (0x00096731) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0009a5c9) mup_volume_pane_g

0xa8d7,	// (0x00095a72) mup_progress_pane_g1

0xb59f,	// (0x0009673a) mup_progress_pane_g2

0xb5a8,	// (0x00096743) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0009a5ce) mup_progress_pane_g

0xa556,	// (0x000956f1) bg_popup_window_pane_cp05

0xb5b1,	// (0x0009674c) heading_pane_cp02_ParamLimits

0xb5b1,	// (0x0009674c) heading_pane_cp02

0xb5cb,	// (0x00096766) list_popup_blid_pane

0xb5d3,	// (0x0009676e) list_blid_sat_info_pane_ParamLimits

0xb5d3,	// (0x0009676e) list_blid_sat_info_pane

0xb5e6,	// (0x00096781) list_blid_sat_info_pane_g1

0xb5ee,	// (0x00096789) list_blid_sat_info_pane_t1

0x3508,	// (0x0008e6a3) mup_equalizer_pane_ParamLimits

0x3508,	// (0x0008e6a3) mup_equalizer_pane

0x3521,	// (0x0008e6bc) mup_equalizer_pane_cp1_ParamLimits

0x3521,	// (0x0008e6bc) mup_equalizer_pane_cp1

0x353e,	// (0x0008e6d9) mup_equalizer_pane_cp2_ParamLimits

0x353e,	// (0x0008e6d9) mup_equalizer_pane_cp2

0x355b,	// (0x0008e6f6) mup_equalizer_pane_cp3_ParamLimits

0x355b,	// (0x0008e6f6) mup_equalizer_pane_cp3

0x357c,	// (0x0008e717) mup_equalizer_pane_cp4_ParamLimits

0x357c,	// (0x0008e717) mup_equalizer_pane_cp4

0x359d,	// (0x0008e738) mup_equalizer_pane_cp5

0x35b1,	// (0x0008e74c) mup_equalizer_pane_cp6

0x35c5,	// (0x0008e760) mup_equalizer_pane_cp7

0xc78d,	// (0x00097928) bg_popup_call_poc_act_pane_g9

0xc795,	// (0x00097930) bg_popup_call_poc_act_pane_g10

0xc79d,	// (0x00097938) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7b1,	// (0x0009594c) mup_scale_pane

0xa8d7,	// (0x00095a72) mup_scale_pane_g1

0xb5fc,	// (0x00096797) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0009a5ea) mup_scale_pane_g

0xb620,	// (0x000967bb) msg_data_pane

0xb628,	// (0x000967c3) scroll_pane_cp017

0x0421,	// (0x0008b5bc) bg_list_pane_cp04_ParamLimits

0x0421,	// (0x0008b5bc) bg_list_pane_cp04

0xb630,	// (0x000967cb) msg_data_pane_g1

0x35f3,	// (0x0008e78e) msg_data_pane_g2

0x35fb,	// (0x0008e796) msg_data_pane_g3

0x3603,	// (0x0008e79e) msg_data_pane_g4

0x360b,	// (0x0008e7a6) msg_data_pane_g5

0x3613,	// (0x0008e7ae) msg_data_pane_g6

0x361b,	// (0x0008e7b6) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0009a5f9) msg_data_pane_g

0x0439,	// (0x0008b5d4) msg_text_pane_ParamLimits

0x0439,	// (0x0008b5d4) msg_text_pane

0x3623,	// (0x0008e7be) qrid_highlight_pane_cp011_ParamLimits

0x3623,	// (0x0008e7be) qrid_highlight_pane_cp011

0xa556,	// (0x000956f1) msg_body_pane

0xa556,	// (0x000956f1) msg_header_pane

0xb641,	// (0x000967dc) input_focus_pane_cp07

0x3639,	// (0x0008e7d4) msg_header_pane_t1_ParamLimits

0x3639,	// (0x0008e7d4) msg_header_pane_t1

0x364b,	// (0x0008e7e6) msg_header_pane_t2_ParamLimits

0x364b,	// (0x0008e7e6) msg_header_pane_t2

0x0001,

0xf472,	// (0x0009a60d) msg_header_pane_t_ParamLimits

0xf472,	// (0x0009a60d) msg_header_pane_t

0xb656,	// (0x000967f1) msg_body_pane_g1

0x365d,	// (0x0008e7f8) msg_body_pane_t1_ParamLimits

0x365d,	// (0x0008e7f8) msg_body_pane_t1

0x368e,	// (0x0008e829) msg_body_pane_t2_ParamLimits

0x368e,	// (0x0008e829) msg_body_pane_t2

0x36a0,	// (0x0008e83b) msg_body_pane_t3_ParamLimits

0x36a0,	// (0x0008e83b) msg_body_pane_t3

0x0002,

0xf477,	// (0x0009a612) msg_body_pane_t_ParamLimits

0xf477,	// (0x0009a612) msg_body_pane_t

0x36ec,	// (0x0008e887) main_viewer_pane_g1_ParamLimits

0x36ec,	// (0x0008e887) main_viewer_pane_g1

0x36fa,	// (0x0008e895) main_viewer_pane_g2_ParamLimits

0x36fa,	// (0x0008e895) main_viewer_pane_g2

0x3708,	// (0x0008e8a3) main_viewer_pane_g3_ParamLimits

0x3708,	// (0x0008e8a3) main_viewer_pane_g3

0x3717,	// (0x0008e8b2) main_viewer_pane_g4_ParamLimits

0x3717,	// (0x0008e8b2) main_viewer_pane_g4

0x9d12,	// (0x00094ead) main_viewer_pane_g5_ParamLimits

0x9d12,	// (0x00094ead) main_viewer_pane_g5

0x9d12,	// (0x00094ead) main_viewer_pane_g7_ParamLimits

0x9d12,	// (0x00094ead) main_viewer_pane_g7

0x9d24,	// (0x00094ebf) main_viewer_pane_g8_ParamLimits

0x9d24,	// (0x00094ebf) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0009a622) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0009a622) main_viewer_pane_g

0xb65e,	// (0x000967f9) viewer_content_pane_ParamLimits

0xb65e,	// (0x000967f9) viewer_content_pane

0x3753,	// (0x0008e8ee) main_postcard_pane_g1_ParamLimits

0x3753,	// (0x0008e8ee) main_postcard_pane_g1

0x3769,	// (0x0008e904) main_postcard_pane_g2_ParamLimits

0x3769,	// (0x0008e904) main_postcard_pane_g2

0x377f,	// (0x0008e91a) main_postcard_pane_g3_ParamLimits

0x377f,	// (0x0008e91a) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0009a633) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0009a633) main_postcard_pane_g

0x3796,	// (0x0008e931) main_postcard_pane_g4

0xc9af,	// (0x00097b4a) smil_status_volume_pane_g2

0x37d9,	// (0x0008e974) postcard_pane_ParamLimits

0x37d9,	// (0x0008e974) postcard_pane

0xb66c,	// (0x00096807) postcard_pane_g1_ParamLimits

0xb66c,	// (0x00096807) postcard_pane_g1

0x381b,	// (0x0008e9b6) postcard_pane_g2_ParamLimits

0x381b,	// (0x0008e9b6) postcard_pane_g2

0x3827,	// (0x0008e9c2) postcard_pane_g3_ParamLimits

0x3827,	// (0x0008e9c2) postcard_pane_g3

0xb67a,	// (0x00096815) postcard_pane_g4_ParamLimits

0xb67a,	// (0x00096815) postcard_pane_g4

0x3833,	// (0x0008e9ce) postcard_pane_g5_ParamLimits

0x3833,	// (0x0008e9ce) postcard_pane_g5

0x3848,	// (0x0008e9e3) postcard_pane_g6_ParamLimits

0x3848,	// (0x0008e9e3) postcard_pane_g6

0xb66c,	// (0x00096807) postcard_pane_g7_ParamLimits

0xb66c,	// (0x00096807) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0009a640) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0009a640) postcard_pane_g

0x385c,	// (0x0008e9f7) main_mp2_pane_g1_ParamLimits

0x385c,	// (0x0008e9f7) main_mp2_pane_g1

0x3868,	// (0x0008ea03) main_mp2_pane_g2_ParamLimits

0x3868,	// (0x0008ea03) main_mp2_pane_g2

0x3874,	// (0x0008ea0f) main_mp2_pane_g3_ParamLimits

0x3874,	// (0x0008ea0f) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0009a64f) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0009a64f) main_mp2_pane_g

0x3880,	// (0x0008ea1b) main_mp2_pane_t1_ParamLimits

0x3880,	// (0x0008ea1b) main_mp2_pane_t1

0x3895,	// (0x0008ea30) main_mp2_pane_t2_ParamLimits

0x3895,	// (0x0008ea30) main_mp2_pane_t2

0x38a7,	// (0x0008ea42) main_mp2_pane_t3_ParamLimits

0x38a7,	// (0x0008ea42) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0009a656) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0009a656) main_mp2_pane_t

0xb688,	// (0x00096823) pec_content_pane_ParamLimits

0xb688,	// (0x00096823) pec_content_pane

0xac17,	// (0x00095db2) scroll_pane_cp015

0xb69a,	// (0x00096835) pec_attribute_pane_ParamLimits

0xb69a,	// (0x00096835) pec_attribute_pane

0x38b9,	// (0x0008ea54) pec_content_pane_g1_ParamLimits

0x38b9,	// (0x0008ea54) pec_content_pane_g1

0xb6aa,	// (0x00096845) pec_content_pane_t1_ParamLimits

0xb6aa,	// (0x00096845) pec_content_pane_t1

0xb6bc,	// (0x00096857) pec_content_pane_t2_ParamLimits

0xb6bc,	// (0x00096857) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0009a65d) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0009a65d) pec_content_pane_t

0x38c5,	// (0x0008ea60) list_single_graphic_pane_cp01_ParamLimits

0x38c5,	// (0x0008ea60) list_single_graphic_pane_cp01

0xa7b1,	// (0x0009594c) bg_popup_sub_pane_cp04

0xb6ce,	// (0x00096869) popup_mup_playback_window_g1

0xb6da,	// (0x00096875) popup_mup_playback_window_t1

0xb6ef,	// (0x0009688a) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0009a662) popup_mup_playback_window_t

0xb726,	// (0x000968c1) main_image_pane_g1_ParamLimits

0xb726,	// (0x000968c1) main_image_pane_g1

0xb769,	// (0x00096904) scroll_pane_cp018_ParamLimits

0xb769,	// (0x00096904) scroll_pane_cp018

0xb781,	// (0x0009691c) scroll_pane_cp016_ParamLimits

0xb781,	// (0x0009691c) scroll_pane_cp016

0x3993,	// (0x0008eb2e) smil2_image_pane_ParamLimits

0x3993,	// (0x0008eb2e) smil2_image_pane

0x39c3,	// (0x0008eb5e) smil2_root_pane_ParamLimits

0x39c3,	// (0x0008eb5e) smil2_root_pane

0x39fb,	// (0x0008eb96) smil2_text_pane_ParamLimits

0x39fb,	// (0x0008eb96) smil2_text_pane

0xa556,	// (0x000956f1) bg_list_pane_cp06

0xb7bd,	// (0x00096958) grid_radio_pane

0xa556,	// (0x000956f1) bg_popup_window_pane_cp06

0xb7c5,	// (0x00096960) main_fmradio_pane_t1

0xb180,	// (0x0009631b) heading_pane_cp04

0xb7d3,	// (0x0009696e) main_fmradio_pane_t2

0xc7e5,	// (0x00097980) popup_cale_lunar_info_window_g1

0xb7e1,	// (0x0009697c) main_fmradio_pane_t3

0xc7ed,	// (0x00097988) popup_cale_lunar_info_window_g2

0xb7ef,	// (0x0009698a) main_fmradio_pane_t4

0x0001,

0xb7fd,	// (0x00096998) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0009a750) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0009a677) main_fmradio_pane_t

0xb80b,	// (0x000969a6) wait_bar_pane_cp03

0xb813,	// (0x000969ae) cell_fmradio_pane_ParamLimits

0xb813,	// (0x000969ae) cell_fmradio_pane

0xb66c,	// (0x00096807) cell_fmradio_pane_g1_ParamLimits

0xb66c,	// (0x00096807) cell_fmradio_pane_g1

0xa556,	// (0x000956f1) grid_highlight_pane_cp011

0xb826,	// (0x000969c1) poc_content_pane_ParamLimits

0xb826,	// (0x000969c1) poc_content_pane

0xb838,	// (0x000969d3) scroll_pane_cp019

0x3a7b,	// (0x0008ec16) popup_call_poc_act_window_ParamLimits

0x3a7b,	// (0x0008ec16) popup_call_poc_act_window

0x3a9f,	// (0x0008ec3a) popup_call_poc_inact_window_ParamLimits

0x3a9f,	// (0x0008ec3a) popup_call_poc_inact_window

0xf579,	// (0x0009a714) bg_popup_call_poc_act_pane_g

0xc7a5,	// (0x00097940) bg_popup_call_poc_inact_pane_g1

0xc7ad,	// (0x00097948) bg_popup_call_poc_inact_pane_g2

0xb840,	// (0x000969db) popup_call_poc_act_window_g2

0xc7b5,	// (0x00097950) bg_popup_call_poc_inact_pane_g3

0xc735,	// (0x000978d0) bg_popup_call_poc_inact_pane_g4

0xc7bd,	// (0x00097958) bg_popup_call_poc_inact_pane_g5

0xb848,	// (0x000969e3) popup_call_poc_act_window_t1_ParamLimits

0xb848,	// (0x000969e3) popup_call_poc_act_window_t1

0xb870,	// (0x00096a0b) popup_call_poc_act_window_t2_ParamLimits

0xb870,	// (0x00096a0b) popup_call_poc_act_window_t2

0xb898,	// (0x00096a33) popup_call_poc_act_window_t3_ParamLimits

0xb898,	// (0x00096a33) popup_call_poc_act_window_t3

0xb8c0,	// (0x00096a5b) popup_call_poc_act_window_t4_ParamLimits

0xb8c0,	// (0x00096a5b) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0009a682) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0009a682) popup_call_poc_act_window_t

0xc7c5,	// (0x00097960) bg_popup_call_poc_inact_pane_g6

0xc7cd,	// (0x00097968) bg_popup_call_poc_inact_pane_g7

0xc7d5,	// (0x00097970) bg_popup_call_poc_inact_pane_g8

0xb8d2,	// (0x00096a6d) popup_call_poc_inact_window_g2

0xc7dd,	// (0x00097978) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0009a72b) bg_popup_call_poc_inact_pane_g

0xb8da,	// (0x00096a75) popup_call_poc_inact_window_t1_ParamLimits

0xb8da,	// (0x00096a75) popup_call_poc_inact_window_t1

0xb8ef,	// (0x00096a8a) popup_call_poc_inact_window_t2_ParamLimits

0xb8ef,	// (0x00096a8a) popup_call_poc_inact_window_t2

0xb904,	// (0x00096a9f) popup_call_poc_inact_window_t3_ParamLimits

0xb904,	// (0x00096a9f) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0009a68b) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0009a68b) popup_call_poc_inact_window_t

0xc922,	// (0x00097abd) context_pane_ParamLimits

0x42c7,	// (0x0008f462) signal_pane_ParamLimits

0xaa6e,	// (0x00095c09) main_call2_pane

0x9d69,	// (0x00094f04) popup_phob_thumbnail2_window_ParamLimits

0x9d69,	// (0x00094f04) popup_phob_thumbnail2_window

0x9cfa,	// (0x00094e95) aid_hotspot_pointer_arrow_pane

0x9d02,	// (0x00094e9d) aid_hotspot_pointer_hand_pane

0x3de9,	// (0x0008ef84) phob_pre_status_pane_g5

0x1d50,	// (0x0008ceeb) cams_zoom_pane_ParamLimits

0x1d5f,	// (0x0008cefa) image_vga_pane_ParamLimits

0x1d79,	// (0x0008cf14) main_camera_pane_g1_ParamLimits

0x1d8b,	// (0x0008cf26) main_camera_pane_g2_ParamLimits

0x1d9b,	// (0x0008cf36) main_camera_pane_g3_ParamLimits

0x1dab,	// (0x0008cf46) main_camera_pane_g4_ParamLimits

0x1dbb,	// (0x0008cf56) main_camera_pane_g5_ParamLimits

0x1dcb,	// (0x0008cf66) main_camera_pane_g6_ParamLimits

0x1ddb,	// (0x0008cf76) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0009a38a) main_camera_pane_g_ParamLimits

0x1deb,	// (0x0008cf86) main_camera_pane_t1_ParamLimits

0x1e01,	// (0x0008cf9c) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0009a39b) main_camera_pane_t_ParamLimits

0xa7b1,	// (0x0009594c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7b1,	// (0x0009594c) bg_popup_preview_window_pane_cp01

0xb919,	// (0x00096ab4) popup_phob_thumbnail2_window_g1_ParamLimits

0xb919,	// (0x00096ab4) popup_phob_thumbnail2_window_g1

0xa556,	// (0x000956f1) call2_cli_visual_pane

0x3ad3,	// (0x0008ec6e) popup_call2_audio_conf_window_ParamLimits

0x3ad3,	// (0x0008ec6e) popup_call2_audio_conf_window

0x3af3,	// (0x0008ec8e) popup_call2_audio_first_window_ParamLimits

0x3af3,	// (0x0008ec8e) popup_call2_audio_first_window

0x3b89,	// (0x0008ed24) popup_call2_audio_in_window_ParamLimits

0x3b89,	// (0x0008ed24) popup_call2_audio_in_window

0x3bd1,	// (0x0008ed6c) popup_call2_audio_out_window_ParamLimits

0x3bd1,	// (0x0008ed6c) popup_call2_audio_out_window

0x3c3b,	// (0x0008edd6) popup_call2_audio_second_window_ParamLimits

0x3c3b,	// (0x0008edd6) popup_call2_audio_second_window

0x3ca1,	// (0x0008ee3c) popup_call2_audio_wait_window_ParamLimits

0x3ca1,	// (0x0008ee3c) popup_call2_audio_wait_window

0xa556,	// (0x000956f1) bg_popup_call2_act_pane_cp03

0xa793,	// (0x0009592e) list_conf_pane_cp

0xb925,	// (0x00096ac0) popup_call2_audio_conf_window_t1

0xb933,	// (0x00096ace) list_single_graphic_popup_conf2_pane_ParamLimits

0xb933,	// (0x00096ace) list_single_graphic_popup_conf2_pane

0xb1f0,	// (0x0009638b) list_highlight_pane_cp04

0xb946,	// (0x00096ae1) list_single_graphic_popup_conf2_pane_g1

0xb201,	// (0x0009639c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0009a692) list_single_graphic_popup_conf2_pane_g

0xb950,	// (0x00096aeb) list_single_graphic_popup_conf2_pane_t1

0xb95e,	// (0x00096af9) bg_popup_call2_act_pane_cp01_ParamLimits

0xb95e,	// (0x00096af9) bg_popup_call2_act_pane_cp01

0xb9e8,	// (0x00096b83) call_type_pane_cp05_ParamLimits

0xb9e8,	// (0x00096b83) call_type_pane_cp05

0xba3c,	// (0x00096bd7) popup_call2_audio_second_window_g1_ParamLimits

0xba3c,	// (0x00096bd7) popup_call2_audio_second_window_g1

0xba90,	// (0x00096c2b) popup_call2_audio_second_window_g2_ParamLimits

0xba90,	// (0x00096c2b) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0009a697) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0009a697) popup_call2_audio_second_window_g

0xbaf5,	// (0x00096c90) popup_call2_audio_second_window_t1_ParamLimits

0xbaf5,	// (0x00096c90) popup_call2_audio_second_window_t1

0xbbb0,	// (0x00096d4b) popup_call2_audio_second_window_t2_ParamLimits

0xbbb0,	// (0x00096d4b) popup_call2_audio_second_window_t2

0xbc03,	// (0x00096d9e) popup_call2_audio_second_window_t3_ParamLimits

0xbc03,	// (0x00096d9e) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0009a69e) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0009a69e) popup_call2_audio_second_window_t

0xa556,	// (0x000956f1) bg_popup_call2_in_pane_cp02

0xa560,	// (0x000956fb) call_type_pane_cp04

0xa568,	// (0x00095703) popup_call2_audio_wait_window_g1

0xa570,	// (0x0009570b) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0009a279) popup_call2_audio_wait_window_g

0xa578,	// (0x00095713) popup_call2_audio_wait_window_t3

0xbcf6,	// (0x00096e91) bg_popup_call2_act_pane_ParamLimits

0xbcf6,	// (0x00096e91) bg_popup_call2_act_pane

0xbdb6,	// (0x00096f51) call_type_pane_cp03_ParamLimits

0xbdb6,	// (0x00096f51) call_type_pane_cp03

0xbe1a,	// (0x00096fb5) popup_call2_audio_first_window_g1_ParamLimits

0xbe1a,	// (0x00096fb5) popup_call2_audio_first_window_g1

0xbe8a,	// (0x00097025) popup_call2_audio_first_window_g2_ParamLimits

0xbe8a,	// (0x00097025) popup_call2_audio_first_window_g2

0xb580,	// (0x0009671b) popup_call2_audio_first_window_g3_ParamLimits

0xb580,	// (0x0009671b) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0009a6a7) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0009a6a7) popup_call2_audio_first_window_g

0xbf68,	// (0x00097103) popup_call2_audio_first_window_t1_ParamLimits

0xbf68,	// (0x00097103) popup_call2_audio_first_window_t1

0xc06b,	// (0x00097206) popup_call2_audio_first_window_t4_ParamLimits

0xc06b,	// (0x00097206) popup_call2_audio_first_window_t4

0xc14e,	// (0x000972e9) popup_call2_audio_first_window_t5_ParamLimits

0xc14e,	// (0x000972e9) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0009a6b2) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0009a6b2) popup_call2_audio_first_window_t

0xa7a9,	// (0x00095944) bg_popup_call2_act_pane_g1

0xc7f5,	// (0x00097990) popup_cale_lunar_info_window_t1

0xc803,	// (0x0009799e) popup_cale_lunar_info_window_t2

0xc811,	// (0x000979ac) popup_cale_lunar_info_window_t3

0xa556,	// (0x000956f1) bg_popup_call2_bubble_pane

0xc24f,	// (0x000973ea) bg_popup_call2_in_pane_cp01_ParamLimits

0xc24f,	// (0x000973ea) bg_popup_call2_in_pane_cp01

0x994a,	// (0x00094ae5) call_type_pane_cp02

0xc297,	// (0x00097432) popup_call2_audio_out_window_g1_ParamLimits

0xc297,	// (0x00097432) popup_call2_audio_out_window_g1

0xc2c3,	// (0x0009745e) popup_call2_audio_out_window_g2_ParamLimits

0xc2c3,	// (0x0009745e) popup_call2_audio_out_window_g2

0xc2eb,	// (0x00097486) popup_call2_audio_out_window_g3_ParamLimits

0xc2eb,	// (0x00097486) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0009a6bb) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0009a6bb) popup_call2_audio_out_window_g

0xc326,	// (0x000974c1) popup_call2_audio_out_window_t1_ParamLimits

0xc326,	// (0x000974c1) popup_call2_audio_out_window_t1

0xc385,	// (0x00097520) popup_call2_audio_out_window_t2_ParamLimits

0xc385,	// (0x00097520) popup_call2_audio_out_window_t2

0xc3d9,	// (0x00097574) popup_call2_audio_out_window_t3_ParamLimits

0xc3d9,	// (0x00097574) popup_call2_audio_out_window_t3

0xc3ef,	// (0x0009758a) popup_call2_audio_out_window_t4_ParamLimits

0xc3ef,	// (0x0009758a) popup_call2_audio_out_window_t4

0xc405,	// (0x000975a0) popup_call2_audio_out_window_t5_ParamLimits

0xc405,	// (0x000975a0) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0009a6c4) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0009a6c4) popup_call2_audio_out_window_t

0xc469,	// (0x00097604) bg_popup_call2_in_pane_ParamLimits

0xc469,	// (0x00097604) bg_popup_call2_in_pane

0xc4c5,	// (0x00097660) popup_call2_audio_in_window_g1_ParamLimits

0xc4c5,	// (0x00097660) popup_call2_audio_in_window_g1

0xc4fd,	// (0x00097698) popup_call2_audio_in_window_g2_ParamLimits

0xc4fd,	// (0x00097698) popup_call2_audio_in_window_g2

0xc535,	// (0x000976d0) popup_call2_audio_in_window_g3_ParamLimits

0xc535,	// (0x000976d0) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0009a6d1) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0009a6d1) popup_call2_audio_in_window_g

0xc58d,	// (0x00097728) popup_call2_audio_in_window_t1_ParamLimits

0xc58d,	// (0x00097728) popup_call2_audio_in_window_t1

0xc60d,	// (0x000977a8) popup_call2_audio_in_window_t2_ParamLimits

0xc60d,	// (0x000977a8) popup_call2_audio_in_window_t2

0xc68d,	// (0x00097828) popup_call2_audio_in_window_t3_ParamLimits

0xc68d,	// (0x00097828) popup_call2_audio_in_window_t3

0xc6a7,	// (0x00097842) popup_call2_audio_in_window_t4_ParamLimits

0xc6a7,	// (0x00097842) popup_call2_audio_in_window_t4

0xc6b9,	// (0x00097854) popup_call2_audio_in_window_t5_ParamLimits

0xc6b9,	// (0x00097854) popup_call2_audio_in_window_t5

0xc6cb,	// (0x00097866) popup_call2_audio_in_window_t6_ParamLimits

0xc6cb,	// (0x00097866) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0009a6da) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0009a6da) popup_call2_audio_in_window_t

0xa7a9,	// (0x00095944) bg_popup_call2_in_pane_g1

0xc81f,	// (0x000979ba) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x0009a755) popup_cale_lunar_info_window_t

0xa7b1,	// (0x0009594c) bg_popup_call2_rect_pane_ParamLimits

0xa7b1,	// (0x0009594c) bg_popup_call2_rect_pane

0xa556,	// (0x000956f1) call2_cli_visual_graphic_pane

0xa556,	// (0x000956f1) call2_cli_visual_text_pane

0x9d90,	// (0x00094f2b) smil_status_volume_pane_g3

0x0002,

0xa8d7,	// (0x00095a72) call2_cli_visual_graphic_pane_g1

0xa8d7,	// (0x00095a72) call2_cli_visual_graphic_pane_g2

0xa8d7,	// (0x00095a72) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0009a6e7) call2_cli_visual_graphic_pane_g

0xc6dd,	// (0x00097878) bg_popup_call2_rect_pane_g1

0xa96c,	// (0x00095b07) bg_popup_call2_rect_pane_g2

0xc6e5,	// (0x00097880) bg_popup_call2_rect_pane_g3

0xc6ed,	// (0x00097888) bg_popup_call2_rect_pane_g4

0xc6f5,	// (0x00097890) bg_popup_call2_rect_pane_g5

0xc6fd,	// (0x00097898) bg_popup_call2_rect_pane_g6

0xc705,	// (0x000978a0) bg_popup_call2_rect_pane_g7

0xc70d,	// (0x000978a8) bg_popup_call2_rect_pane_g8

0xc715,	// (0x000978b0) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0009a6ee) bg_popup_call2_rect_pane_g

0xc71d,	// (0x000978b8) bg_popup_call2_bubble_pane_g1

0xc725,	// (0x000978c0) bg_popup_call2_bubble_pane_g2

0xc72d,	// (0x000978c8) bg_popup_call2_bubble_pane_g3

0xc735,	// (0x000978d0) bg_popup_call2_bubble_pane_g4

0xc73d,	// (0x000978d8) bg_popup_call2_bubble_pane_g5

0xc745,	// (0x000978e0) bg_popup_call2_bubble_pane_g6

0xc74d,	// (0x000978e8) bg_popup_call2_bubble_pane_g7

0xc755,	// (0x000978f0) bg_popup_call2_bubble_pane_g8

0xc75d,	// (0x000978f8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0009a701) bg_popup_call2_bubble_pane_g

0x1788,	// (0x0008c923) aid_cale_week_size_cell_pane

0x1e17,	// (0x0008cfb2) aid_cams_cif_uncrop_pane_ParamLimits

0x1e17,	// (0x0008cfb2) aid_cams_cif_uncrop_pane

0x1fcc,	// (0x0008d167) aid_cams_size_cell_ParamLimits

0x1fcc,	// (0x0008d167) aid_cams_size_cell

0x1fe0,	// (0x0008d17b) grid_cams_pane_ParamLimits

0x1ffa,	// (0x0008d195) linegrid_cams_pane_ParamLimits

0x20f8,	// (0x0008d293) call_video_pane_t1

0x2116,	// (0x0008d2b1) call_video_pane_t2

0x0001,

0xf253,	// (0x0009a3ee) call_video_pane_t

0x253c,	// (0x0008d6d7) aid_cale_month_size_cell_pane_ParamLimits

0x253c,	// (0x0008d6d7) aid_cale_month_size_cell_pane

0xf603,	// (0x0009a79e) smil_status_volume_pane_g

0x9d9d,	// (0x00094f38) volume_smil_pane_ParamLimits

0x9805,	// (0x000949a0) aid_popup2_width_pane

0x16fe,	// (0x0008c899) cell_qdial_pane_g4_ParamLimits

0x16fe,	// (0x0008c899) cell_qdial_pane_g4

0x3122,	// (0x0008e2bd) aid_blid_cardinal_pane_ParamLimits

0x312e,	// (0x0008e2c9) aid_blid_destination_pane_ParamLimits

0x312e,	// (0x0008e2c9) aid_blid_destination_pane

0xa7b1,	// (0x0009594c) bg_popup_call_poc_act_pane_ParamLimits

0xa7b1,	// (0x0009594c) bg_popup_call_poc_act_pane

0xa7b1,	// (0x0009594c) bg_popup_call_poc_inact_pane_ParamLimits

0xa7b1,	// (0x0009594c) bg_popup_call_poc_inact_pane

0xc765,	// (0x00097900) bg_popup_call_poc_act_pane_g1

0xc76d,	// (0x00097908) bg_popup_call_poc_act_pane_g2

0xc775,	// (0x00097910) bg_popup_call_poc_act_pane_g3

0xc735,	// (0x000978d0) bg_popup_call_poc_act_pane_g4

0xc73d,	// (0x000978d8) bg_popup_call_poc_act_pane_g5

0xc77d,	// (0x00097918) bg_popup_call_poc_act_pane_g6

0xc74d,	// (0x000978e8) bg_popup_call_poc_act_pane_g7

0xc785,	// (0x00097920) bg_popup_call_poc_act_pane_g8

0xa556,	// (0x000956f1) main_usb_pane

0x9d44,	// (0x00094edf) popup_cale_lunar_info_window

0x23e2,	// (0x0008d57d) im_reading_pane_t1_ParamLimits

0xab6f,	// (0x00095d0a) list_im_pane_ParamLimits

0xab80,	// (0x00095d1b) scroll_pane_cp07_ParamLimits

0xa556,	// (0x000956f1) grid_highlight_pane_cp012

0xa7b1,	// (0x0009594c) mup_scale_pane_ParamLimits

0xb66c,	// (0x00096807) main_usb_pane_g1_ParamLimits

0xb66c,	// (0x00096807) main_usb_pane_g1

0x3cfe,	// (0x0008ee99) main_usb_pane_g2_ParamLimits

0x3cfe,	// (0x0008ee99) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0009a73e) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0009a73e) main_usb_pane_g

0x3d14,	// (0x0008eeaf) main_usb_pane_t1_ParamLimits

0x3d14,	// (0x0008eeaf) main_usb_pane_t1

0x3d26,	// (0x0008eec1) main_usb_pane_t2_ParamLimits

0x3d26,	// (0x0008eec1) main_usb_pane_t2

0x3d38,	// (0x0008eed3) main_usb_pane_t3_ParamLimits

0x3d38,	// (0x0008eed3) main_usb_pane_t3

0x3d4a,	// (0x0008eee5) main_usb_pane_t4_ParamLimits

0x3d4a,	// (0x0008eee5) main_usb_pane_t4

0x3d5c,	// (0x0008eef7) main_usb_pane_t5_ParamLimits

0x3d5c,	// (0x0008eef7) main_usb_pane_t5

0x3d6e,	// (0x0008ef09) main_usb_pane_t6_ParamLimits

0x3d6e,	// (0x0008ef09) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x0009a743) main_usb_pane_t_ParamLimits

0x30d1,	// (0x0008e26c) aid_text_placing

0x30da,	// (0x0008e275) main_location2_pane_t1_ParamLimits

0x30ec,	// (0x0008e287) main_location2_pane_t2_ParamLimits

0x30fe,	// (0x0008e299) main_location2_pane_t3_ParamLimits

0x3110,	// (0x0008e2ab) main_location2_pane_t4_ParamLimits

0x3110,	// (0x0008e2ab) main_location2_pane_t4

0xf3b4,	// (0x0009a54f) main_location2_pane_t_ParamLimits

0xa7ed,	// (0x00095988) find_pinb_pane_g2_ParamLimits

0xa7ed,	// (0x00095988) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0009a29f) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0009a29f) find_pinb_pane_g

0xa7f9,	// (0x00095994) find_pinb_pane_t1_ParamLimits

0xa80b,	// (0x000959a6) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0009a2a4) find_pinb_pane_t_ParamLimits

0xa556,	// (0x000956f1) main_call3_pane

0x2a23,	// (0x0008dbbe) cale_month_day_heading_pane_t1_ParamLimits

0x2a65,	// (0x0008dc00) cale_month_day_heading_pane_t2_ParamLimits

0x2a9a,	// (0x0008dc35) cale_month_day_heading_pane_t3_ParamLimits

0x2acf,	// (0x0008dc6a) cale_month_day_heading_pane_t4_ParamLimits

0x2b0c,	// (0x0008dca7) cale_month_day_heading_pane_t5_ParamLimits

0x2b51,	// (0x0008dcec) cale_month_day_heading_pane_t6_ParamLimits

0x2b96,	// (0x0008dd31) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0009a426) cale_month_day_heading_pane_t_ParamLimits

0xadca,	// (0x00095f65) smil_status_volume_pane

0x37f7,	// (0x0008e992) postcard_address_pane_ParamLimits

0x37f7,	// (0x0008e992) postcard_address_pane

0x3809,	// (0x0008e9a4) postcard_message_pane_ParamLimits

0x3809,	// (0x0008e9a4) postcard_message_pane

0x3cdb,	// (0x0008ee76) call2_cli_visual_pane_t1_ParamLimits

0x3cdb,	// (0x0008ee76) call2_cli_visual_pane_t1

0x44f6,	// (0x0008f691) postcard_message_pane_t1_ParamLimits

0x44f6,	// (0x0008f691) postcard_message_pane_t1

0x44df,	// (0x0008f67a) postcard_address_pane_t1_ParamLimits

0x44df,	// (0x0008f67a) postcard_address_pane_t1

0x44cb,	// (0x0008f666) popup_call3_audio_in_window_ParamLimits

0x44cb,	// (0x0008f666) popup_call3_audio_in_window

0x4356,	// (0x0008f4f1) bg_popup_call3_in_pane_ParamLimits

0x4356,	// (0x0008f4f1) bg_popup_call3_in_pane

0x43cc,	// (0x0008f567) popup_call3_audio_in_window_g1_ParamLimits

0x43cc,	// (0x0008f567) popup_call3_audio_in_window_g1

0x43ec,	// (0x0008f587) popup_call3_audio_in_window_g2_ParamLimits

0x43ec,	// (0x0008f587) popup_call3_audio_in_window_g2

0x440c,	// (0x0008f5a7) popup_call3_audio_in_window_g3_ParamLimits

0x440c,	// (0x0008f5a7) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0009a7a5) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0009a7a5) popup_call3_audio_in_window_g

0x443d,	// (0x0008f5d8) popup_call3_audio_in_window_t1_ParamLimits

0x443d,	// (0x0008f5d8) popup_call3_audio_in_window_t1

0x447b,	// (0x0008f616) popup_call3_audio_in_window_t2_ParamLimits

0x447b,	// (0x0008f616) popup_call3_audio_in_window_t2

0x44b9,	// (0x0008f654) popup_call3_audio_in_window_t3_ParamLimits

0x44b9,	// (0x0008f654) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x0009a7ae) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x0009a7ae) popup_call3_audio_in_window_t

0xaa6e,	// (0x00095c09) bg_popup_call3_rect_pane

0xc6dd,	// (0x00097878) bg_popup_call3_rect_pane_g1

0xa96c,	// (0x00095b07) bg_popup_call3_rect_pane_g2

0xc6e5,	// (0x00097880) bg_popup_call3_rect_pane_g3

0xc6ed,	// (0x00097888) bg_popup_call3_rect_pane_g4

0xc6f5,	// (0x00097890) bg_popup_call3_rect_pane_g5

0xc6fd,	// (0x00097898) bg_popup_call3_rect_pane_g6

0xc705,	// (0x000978a0) bg_popup_call3_rect_pane_g7

0x3408,	// (0x0008e5a3) mup_visualizer_osc_pane

0xb58e,	// (0x00096729) mup_visualizer_spec_pane

0x4386,	// (0x0008f521) call3_video_qcif_pane_ParamLimits

0x4386,	// (0x0008f521) call3_video_qcif_pane

0x4399,	// (0x0008f534) call3_video_qcif_uncrop_pane_ParamLimits

0x4399,	// (0x0008f534) call3_video_qcif_uncrop_pane

0x43a7,	// (0x0008f542) call3_video_subqcif_pane_ParamLimits

0x43a7,	// (0x0008f542) call3_video_subqcif_pane

0x43bb,	// (0x0008f556) call3_video_subqcif_uncrop_pane_ParamLimits

0x43bb,	// (0x0008f556) call3_video_subqcif_uncrop_pane

0x442c,	// (0x0008f5c7) popup_call3_audio_in_window_g4_ParamLimits

0x442c,	// (0x0008f5c7) popup_call3_audio_in_window_g4

0x4345,	// (0x0008f4e0) mup_spec_half_pane

0x434e,	// (0x0008f4e9) mup_spec_half_pane_cp

0xc982,	// (0x00097b1d) mup_osc_middle_pane

0xc98b,	// (0x00097b26) mup_visualizer_osc_pane_g1

0x4325,	// (0x0008f4c0) mup_spec_bar_pane_ParamLimits

0x4325,	// (0x0008f4c0) mup_spec_bar_pane

0xc96f,	// (0x00097b0a) mup_spec_bar_pane_g1

0xc979,	// (0x00097b14) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0009a799) mup_spec_bar_pane_g

0x1788,	// (0x0008c923) aid_cale_week_size_cell_pane_ParamLimits

0x17a2,	// (0x0008c93d) bg_cale_heading_pane_ParamLimits

0xa9c7,	// (0x00095b62) bg_cale_pane_cp01_ParamLimits

0x17ba,	// (0x0008c955) cale_week_corner_pane_ParamLimits

0x17d9,	// (0x0008c974) cale_week_day_heading_pane_ParamLimits

0x17f6,	// (0x0008c991) cale_week_scroll_pane_g1_ParamLimits

0x1809,	// (0x0008c9a4) cale_week_scroll_pane_g2_ParamLimits

0x1821,	// (0x0008c9bc) cale_week_scroll_pane_g3_ParamLimits

0x1839,	// (0x0008c9d4) cale_week_scroll_pane_g4_ParamLimits

0x1851,	// (0x0008c9ec) cale_week_scroll_pane_g5_ParamLimits

0x1871,	// (0x0008ca0c) cale_week_scroll_pane_g6_ParamLimits

0x1891,	// (0x0008ca2c) cale_week_scroll_pane_g7_ParamLimits

0x18b1,	// (0x0008ca4c) cale_week_scroll_pane_g8_ParamLimits

0x18d5,	// (0x0008ca70) cale_week_scroll_pane_g9_ParamLimits

0x18ed,	// (0x0008ca88) cale_week_scroll_pane_g10_ParamLimits

0x1905,	// (0x0008caa0) cale_week_scroll_pane_g11_ParamLimits

0x191d,	// (0x0008cab8) cale_week_scroll_pane_g12_ParamLimits

0x1935,	// (0x0008cad0) cale_week_scroll_pane_g13_ParamLimits

0x1935,	// (0x0008cad0) cale_week_scroll_pane_g14_ParamLimits

0x1935,	// (0x0008cad0) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0009a330) cale_week_scroll_pane_g_ParamLimits

0x1971,	// (0x0008cb0c) cale_week_time_pane_ParamLimits

0x1995,	// (0x0008cb30) grid_cale_week_pane_ParamLimits

0xa9e4,	// (0x00095b7f) listscroll_cale_week_pane_t1

0xa9f6,	// (0x00095b91) scroll_pane_cp08_ParamLimits

0x259c,	// (0x0008d737) cale_month_corner_pane_ParamLimits

0xada0,	// (0x00095f3b) cale_month_pane_t1

0x29b6,	// (0x0008db51) cale_month_week_pane_ParamLimits

0x2f02,	// (0x0008e09d) popup_call_status_window_g1_ParamLimits

0x2f16,	// (0x0008e0b1) popup_call_status_window_g2_ParamLimits

0x2f2a,	// (0x0008e0c5) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0009a4d6) popup_call_status_window_g_ParamLimits

0xb170,	// (0x0009630b) aid_call2_pane

0x0464,	// (0x0008b5ff) msg_header_pane_g1

0x37f7,	// (0x0008e992) postcard_address2_pane_ParamLimits

0x37f7,	// (0x0008e992) postcard_address2_pane

0x3809,	// (0x0008e9a4) postcard_message2_pane_ParamLimits

0x3809,	// (0x0008e9a4) postcard_message2_pane

0x42d5,	// (0x0008f470) message2_row_pane_ParamLimits

0x42d5,	// (0x0008f470) message2_row_pane

0x42f2,	// (0x0008f48d) address2_row_pane_ParamLimits

0x42f2,	// (0x0008f48d) address2_row_pane

0xc93d,	// (0x00097ad8) postcard_message2_row_pane_g1

0xc945,	// (0x00097ae0) postcard_message2_row_pane_t1

0xc93d,	// (0x00097ad8) address2_row_pane_g1

0xc945,	// (0x00097ae0) address2_row_pane_t1

0x1ccf,	// (0x0008ce6a) aid_size_cell_vorec

0xa556,	// (0x000956f1) main_rss_pane

0x4305,	// (0x0008f4a0) rss_list_single_pane_ParamLimits

0x4305,	// (0x0008f4a0) rss_list_single_pane

0xc953,	// (0x00097aee) rss_list_single_pane_t1

0xc961,	// (0x00097afc) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0009a794) rss_list_single_pane_t

0xa556,	// (0x000956f1) main_camera2_pane

0xa556,	// (0x000956f1) main_video2_pane

0x456f,	// (0x0008f70a) cams_zoom_pane_cp2_ParamLimits

0x456f,	// (0x0008f70a) cams_zoom_pane_cp2

0x458f,	// (0x0008f72a) image2_vga_pane_ParamLimits

0x458f,	// (0x0008f72a) image2_vga_pane

0x45e0,	// (0x0008f77b) main_camera2_pane_g1_ParamLimits

0x45e0,	// (0x0008f77b) main_camera2_pane_g1

0x4600,	// (0x0008f79b) main_camera2_pane_g2_ParamLimits

0x4600,	// (0x0008f79b) main_camera2_pane_g2

0x4620,	// (0x0008f7bb) main_camera2_pane_g3_ParamLimits

0x4620,	// (0x0008f7bb) main_camera2_pane_g3

0x4640,	// (0x0008f7db) main_camera2_pane_g4_ParamLimits

0x4640,	// (0x0008f7db) main_camera2_pane_g4

0x4660,	// (0x0008f7fb) main_camera2_pane_g5_ParamLimits

0x4660,	// (0x0008f7fb) main_camera2_pane_g5

0x4680,	// (0x0008f81b) main_camera2_pane_g6_ParamLimits

0x4680,	// (0x0008f81b) main_camera2_pane_g6

0x46a0,	// (0x0008f83b) main_camera2_pane_g7_ParamLimits

0x46a0,	// (0x0008f83b) main_camera2_pane_g7

0x46c0,	// (0x0008f85b) main_camera2_pane_g8_ParamLimits

0x46c0,	// (0x0008f85b) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0009a7b5) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0009a7b5) main_camera2_pane_g

0x4700,	// (0x0008f89b) main_camera2_pane_t1_ParamLimits

0x4700,	// (0x0008f89b) main_camera2_pane_t1

0x4735,	// (0x0008f8d0) main_camera2_pane_t2_ParamLimits

0x4735,	// (0x0008f8d0) main_camera2_pane_t2

0x475b,	// (0x0008f8f6) main_camera2_pane_t3_ParamLimits

0x475b,	// (0x0008f8f6) main_camera2_pane_t3

0x47b9,	// (0x0008f954) main_camera2_pane_t4_ParamLimits

0x47b9,	// (0x0008f954) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0009a7c8) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0009a7c8) main_camera2_pane_t

0x484b,	// (0x0008f9e6) cams_zoom_pane_cp4_ParamLimits

0x484b,	// (0x0008f9e6) cams_zoom_pane_cp4

0x4861,	// (0x0008f9fc) image2_cif_pane_ParamLimits

0x4861,	// (0x0008f9fc) image2_cif_pane

0x488c,	// (0x0008fa27) image2_subqcif_pane_ParamLimits

0x488c,	// (0x0008fa27) image2_subqcif_pane

0x48a6,	// (0x0008fa41) main_video2_pane_g1_ParamLimits

0x48a6,	// (0x0008fa41) main_video2_pane_g1

0x48c0,	// (0x0008fa5b) main_video2_pane_g2_ParamLimits

0x48c0,	// (0x0008fa5b) main_video2_pane_g2

0x48d6,	// (0x0008fa71) main_video2_pane_g3_ParamLimits

0x48d6,	// (0x0008fa71) main_video2_pane_g3

0x48ec,	// (0x0008fa87) main_video2_pane_g4_ParamLimits

0x48ec,	// (0x0008fa87) main_video2_pane_g4

0x4902,	// (0x0008fa9d) main_video2_pane_g5_ParamLimits

0x4902,	// (0x0008fa9d) main_video2_pane_g5

0x4918,	// (0x0008fab3) main_video2_pane_g6_ParamLimits

0x4918,	// (0x0008fab3) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0009a7d7) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0009a7d7) main_video2_pane_g

0x4932,	// (0x0008facd) main_video2_pane_t1_ParamLimits

0x4932,	// (0x0008facd) main_video2_pane_t1

0x4956,	// (0x0008faf1) main_video2_pane_t2_ParamLimits

0x4956,	// (0x0008faf1) main_video2_pane_t2

0x49a4,	// (0x0008fb3f) main_video2_pane_t3_ParamLimits

0x49a4,	// (0x0008fb3f) main_video2_pane_t3

0x0002,

0xf649,	// (0x0009a7e4) main_video2_pane_t_ParamLimits

0xf649,	// (0x0009a7e4) main_video2_pane_t

0x3e29,	// (0x0008efc4) call_muted_g2

0x0001,

0xf5eb,	// (0x0009a786) call_muted_g

0xa556,	// (0x000956f1) main_mup2_pane

0x49ec,	// (0x0008fb87) main_mup2_pane_g1_ParamLimits

0x49ec,	// (0x0008fb87) main_mup2_pane_g1

0x49f8,	// (0x0008fb93) main_mup2_pane_g2_ParamLimits

0x49f8,	// (0x0008fb93) main_mup2_pane_g2

0x9e0b,	// (0x00094fa6) main_mup_pane_g13_cp1

0x9e13,	// (0x00094fae) mup_volume_pane_cp1

0x4a14,	// (0x0008fbaf) main_mup2_pane_g4_ParamLimits

0x4a14,	// (0x0008fbaf) main_mup2_pane_g4

0x4a26,	// (0x0008fbc1) main_mup2_pane_g5_ParamLimits

0x4a26,	// (0x0008fbc1) main_mup2_pane_g5

0x4a38,	// (0x0008fbd3) main_mup2_pane_g6_ParamLimits

0x4a38,	// (0x0008fbd3) main_mup2_pane_g6

0x4a4a,	// (0x0008fbe5) main_mup2_pane_g7_ParamLimits

0x4a4a,	// (0x0008fbe5) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0009a7eb) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0009a7eb) main_mup2_pane_g

0x4a62,	// (0x0008fbfd) main_mup2_pane_t1_ParamLimits

0x4a62,	// (0x0008fbfd) main_mup2_pane_t1

0x4a78,	// (0x0008fc13) main_mup2_pane_t2_ParamLimits

0x4a78,	// (0x0008fc13) main_mup2_pane_t2

0x4a8e,	// (0x0008fc29) main_mup2_pane_t3_ParamLimits

0x4a8e,	// (0x0008fc29) main_mup2_pane_t3

0x4aa4,	// (0x0008fc3f) main_mup2_pane_t4_ParamLimits

0x4aa4,	// (0x0008fc3f) main_mup2_pane_t4

0x4abc,	// (0x0008fc57) main_mup2_pane_t5_ParamLimits

0x4abc,	// (0x0008fc57) main_mup2_pane_t5

0x4ad4,	// (0x0008fc6f) main_mup2_pane_t6_ParamLimits

0x4ad4,	// (0x0008fc6f) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0009a7fa) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0009a7fa) main_mup2_pane_t

0x4b04,	// (0x0008fc9f) mup2_visualizer_pane_ParamLimits

0x4b04,	// (0x0008fc9f) mup2_visualizer_pane

0x4b32,	// (0x0008fccd) mup_progress_pane_cp_ParamLimits

0x4b32,	// (0x0008fccd) mup_progress_pane_cp

0x9df6,	// (0x00094f91) mup_volume_pane_cp_ParamLimits

0x9df6,	// (0x00094f91) mup_volume_pane_cp

0x4b46,	// (0x0008fce1) mup2_visualizer_pane_g1_ParamLimits

0x4b46,	// (0x0008fce1) mup2_visualizer_pane_g1

0xc9c2,	// (0x00097b5d) mup2_visualizer_pane_g2_ParamLimits

0xc9c2,	// (0x00097b5d) mup2_visualizer_pane_g2

0x4b5d,	// (0x0008fcf8) mup2_visualizer_pane_g3_ParamLimits

0x4b5d,	// (0x0008fcf8) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0009a807) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0009a807) mup2_visualizer_pane_g

0xb7b5,	// (0x00096950) aid_size_cell_fmradio

0x3fdb,	// (0x0008f176) aid_height_parent_landcape

0xabfe,	// (0x00095d99) wml_content_pane_cp

0xac06,	// (0x00095da1) wml_tabs_pane

0xac0f,	// (0x00095daa) popup_wml_miniature_window

0xac17,	// (0x00095db2) scroll_pane_cp021

0xac2b,	// (0x00095dc6) wml_content_pane_comp8

0xa556,	// (0x000956f1) bg_popup_sub_pane_cp05

0xc9e0,	// (0x00097b7b) popup_wml_miniature_window_g1

0xc9e8,	// (0x00097b83) wml_miniature_view_pane

0x4b69,	// (0x0008fd04) aid_size_wml_view

0x4b71,	// (0x0008fd0c) wml_miniature_view_pane_g1

0x4b7a,	// (0x0008fd15) wml_miniature_view_pane_g2

0x4b83,	// (0x0008fd1e) wml_miniature_view_pane_g3

0x4b8b,	// (0x0008fd26) wml_miniature_view_pane_g4

0x4b93,	// (0x0008fd2e) wml_miniature_view_pane_g5

0x4b9b,	// (0x0008fd36) wml_miniature_view_pane_g6

0x4ba3,	// (0x0008fd3e) wml_miniature_view_pane_g7

0x4bab,	// (0x0008fd46) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0009a80e) wml_miniature_view_pane_g

0xc9f0,	// (0x00097b8b) background_graphic_ParamLimits

0xc9f0,	// (0x00097b8b) background_graphic

0xc9fc,	// (0x00097b97) wml_tabs_2_pane

0xca05,	// (0x00097ba0) wml_tabs_3_pane_ParamLimits

0xca05,	// (0x00097ba0) wml_tabs_3_pane

0xca17,	// (0x00097bb2) wml_tabs_4_pane_ParamLimits

0xca17,	// (0x00097bb2) wml_tabs_4_pane

0xca2d,	// (0x00097bc8) wml_tabs_5_pane_ParamLimits

0xca2d,	// (0x00097bc8) wml_tabs_5_pane

0xca47,	// (0x00097be2) wml_tabs_pane_g2_ParamLimits

0xca47,	// (0x00097be2) wml_tabs_pane_g2

0xca5b,	// (0x00097bf6) wml_tabs_pane_g3_ParamLimits

0xca5b,	// (0x00097bf6) wml_tabs_pane_g3

0x4bb3,	// (0x0008fd4e) wml_tabs_2_active_pane_ParamLimits

0x4bb3,	// (0x0008fd4e) wml_tabs_2_active_pane

0x4bc7,	// (0x0008fd62) wml_tabs_2_passive_pane_ParamLimits

0x4bc7,	// (0x0008fd62) wml_tabs_2_passive_pane

0x4bdb,	// (0x0008fd76) wml_tabs_3_active_pane_cp_ParamLimits

0x4bdb,	// (0x0008fd76) wml_tabs_3_active_pane_cp

0x4bf0,	// (0x0008fd8b) wml_tabs_3_passive_pane_ParamLimits

0x4bf0,	// (0x0008fd8b) wml_tabs_3_passive_pane

0x4c03,	// (0x0008fd9e) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c03,	// (0x0008fd9e) wml_tabs_3_passive_pane_cp

0x4c1a,	// (0x0008fdb5) tabs_4_active_pane

0x4c22,	// (0x0008fdbd) tabs_4_passive_pane

0x4c2c,	// (0x0008fdc7) tabs_4_passive_pane_cp

0x4c34,	// (0x0008fdcf) tabs_4_passive_pane_cp2

0x3cf6,	// (0x0008ee91) aid_height_text

0x33da,	// (0x0008e575) mup_volume_cont_pane_ParamLimits

0x33da,	// (0x0008e575) mup_volume_cont_pane

0x139e,	// (0x0008c539) aid_size_cell_pinb

0x13a8,	// (0x0008c543) aid_size_list_pinb

0x4b1e,	// (0x0008fcb9) mup2_volume_cont_pane_ParamLimits

0x4b1e,	// (0x0008fcb9) mup2_volume_cont_pane

0x9de2,	// (0x00094f7d) mup2_volume_cont_pane_g1_ParamLimits

0x9de2,	// (0x00094f7d) mup2_volume_cont_pane_g1

0x1050,	// (0x0008c1eb) aid_size_cell_touch_ParamLimits

0x1050,	// (0x0008c1eb) aid_size_cell_touch

0x128d,	// (0x0008c428) touch_pane_ParamLimits

0x128d,	// (0x0008c428) touch_pane

0x97f3,	// (0x0009498e) main_rss2_pane

0xca78,	// (0x00097c13) listscroll_rss2_pane

0xca81,	// (0x00097c1c) rss2_navigation_pane

0xca89,	// (0x00097c24) list_rss2_pane

0xb295,	// (0x00096430) scroll_pane_cp22

0xca91,	// (0x00097c2c) rss2_navigation_pane_g1

0xca9a,	// (0x00097c35) rss2_navigation_pane_g2

0xcaa2,	// (0x00097c3d) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0009a81f) rss2_navigation_pane_g

0xcaaa,	// (0x00097c45) rss2_navigation_pane_t1

0x4c3e,	// (0x0008fdd9) rss2_list_single_pane_ParamLimits

0x4c3e,	// (0x0008fdd9) rss2_list_single_pane

0xcab8,	// (0x00097c53) rss2_list_single_pane_t2

0xcac6,	// (0x00097c61) rss2_list_single_pane_t3_ParamLimits

0xcac6,	// (0x00097c61) rss2_list_single_pane_t3

0xcae3,	// (0x00097c7e) rss2_list_single_pane_t4

0x2dde,	// (0x0008df79) smil_status_pane_g1

0xa48d,	// (0x00095628) main_image2_pane_ParamLimits

0xa48d,	// (0x00095628) main_image2_pane

0x46e0,	// (0x0008f87b) main_camera2_pane_g9_ParamLimits

0x46e0,	// (0x0008f87b) main_camera2_pane_g9

0x480e,	// (0x0008f9a9) main_camera2_pane_t5_ParamLimits

0x480e,	// (0x0008f9a9) main_camera2_pane_t5

0x9db2,	// (0x00094f4d) main_camera2_pane_t6_ParamLimits

0x9db2,	// (0x00094f4d) main_camera2_pane_t6

0x4c54,	// (0x0008fdef) main_image2_pane_g1_ParamLimits

0x4c54,	// (0x0008fdef) main_image2_pane_g1

0x3a31,	// (0x0008ebcc) smil2_video_pane_ParamLimits

0x3a31,	// (0x0008ebcc) smil2_video_pane

0x9811,	// (0x000949ac) aid_zoom_text_primary_cp

0x9851,	// (0x000949ec) popup_preview_fixed_window

0xab67,	// (0x00095d02) im_reading_pane_g1

0x4557,	// (0x0008f6f2) cams2_bc_adjust_pane_cp_ParamLimits

0x4557,	// (0x0008f6f2) cams2_bc_adjust_pane_cp

0x483d,	// (0x0008f9d8) cams2_bc_adjust_pane_ParamLimits

0x483d,	// (0x0008f9d8) cams2_bc_adjust_pane

0x9e1b,	// (0x00094fb6) cams2_bc_adjust_pane_g1

0x9e23,	// (0x00094fbe) cams2_slider_pane

0x9e2c,	// (0x00094fc7) cams2_slider_pane_g1

0x9e35,	// (0x00094fd0) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x0009a826) cams2_slider_pane_g

0x1490,	// (0x0008c62b) calc_display_pane_ParamLimits

0x14b5,	// (0x0008c650) calc_paper_pane_ParamLimits

0x14d8,	// (0x0008c673) grid_calc_pane_ParamLimits

0x9ccb,	// (0x00094e66) popup_clock_digital_window_t1_ParamLimits

0xb752,	// (0x000968ed) main_image_pane_t1

0x1472,	// (0x0008c60d) aid_size_cell_calc_ParamLimits

0x1472,	// (0x0008c60d) aid_size_cell_calc

0x4021,	// (0x0008f1bc) popup_blid_sat_info2_window_ParamLimits

0x4021,	// (0x0008f1bc) popup_blid_sat_info2_window

0xcaf9,	// (0x00097c94) aid_size_cell_blid

0xcb01,	// (0x00097c9c) bg_popup_window_pane_cp07

0xcb24,	// (0x00097cbf) grid_popup_blid_pane

0xcb2e,	// (0x00097cc9) heading_pane_cp05_ParamLimits

0xcb2e,	// (0x00097cc9) heading_pane_cp05

0xcbf8,	// (0x00097d93) cell_popup_blid_pane_ParamLimits

0xcbf8,	// (0x00097d93) cell_popup_blid_pane

0xcc1c,	// (0x00097db7) cell_popup_blid_pane_g1

0xcc24,	// (0x00097dbf) cell_popup_blid_pane_t1

0x4aee,	// (0x0008fc89) mup2_indicator_pane_ParamLimits

0x4aee,	// (0x0008fc89) mup2_indicator_pane

0xaa6e,	// (0x00095c09) mup2_visualizer_osc_pane

0xc9ce,	// (0x00097b69) mup2_visualizer_spec_pane_ParamLimits

0xc9ce,	// (0x00097b69) mup2_visualizer_spec_pane

0x4c6a,	// (0x0008fe05) mup2_spec_half_pane

0x4c73,	// (0x0008fe0e) mup2_spec_half_pane_cp

0x4c7b,	// (0x0008fe16) mup2_spec_bar_pane_ParamLimits

0x4c7b,	// (0x0008fe16) mup2_spec_bar_pane

0xc96f,	// (0x00097b0a) mup2_spec_bar_pane_g1

0xc979,	// (0x00097b14) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0009a799) mup2_spec_bar_pane_g

0x4c9b,	// (0x0008fe36) mup2_osc_middle_pane

0xc98b,	// (0x00097b26) mup2_visualizer_osc_pane_g1

0x987b,	// (0x00094a16) popup_number_entry_window_t1_ParamLimits

0x988e,	// (0x00094a29) popup_number_entry_window_t2_ParamLimits

0x98a0,	// (0x00094a3b) popup_number_entry_window_t3_ParamLimits

0x12df,	// (0x0008c47a) popup_number_entry_window_t5_ParamLimits

0x12df,	// (0x0008c47a) popup_number_entry_window_t5

0xf0af,	// (0x0009a24a) popup_number_entry_window_t_ParamLimits

0x98b2,	// (0x00094a4d) text_title_cp2_ParamLimits

0x9d0a,	// (0x00094ea5) aid_hotspot_pointer_text2_pane

0x9d30,	// (0x00094ecb) main_viewer_pane_g9_ParamLimits

0x9d30,	// (0x00094ecb) main_viewer_pane_g9

0xada0,	// (0x00095f3b) cale_month_pane_t1_ParamLimits

0xaddd,	// (0x00095f78) bg_cale_pane_ParamLimits

0xadf5,	// (0x00095f90) list_cale_pane_ParamLimits

0xae06,	// (0x00095fa1) listscroll_cale_day_pane_t1

0xae18,	// (0x00095fb3) scroll_pane_cp09_ParamLimits

0x3410,	// (0x0008e5ab) main_mup_eq_pane_t1_ParamLimits

0x3410,	// (0x0008e5ab) main_mup_eq_pane_t1

0x342a,	// (0x0008e5c5) main_mup_eq_pane_t2_ParamLimits

0x342a,	// (0x0008e5c5) main_mup_eq_pane_t2

0x3444,	// (0x0008e5df) main_mup_eq_pane_t3_ParamLimits

0x3444,	// (0x0008e5df) main_mup_eq_pane_t3

0x3460,	// (0x0008e5fb) main_mup_eq_pane_t4_ParamLimits

0x3460,	// (0x0008e5fb) main_mup_eq_pane_t4

0x347c,	// (0x0008e617) main_mup_eq_pane_t5_ParamLimits

0x347c,	// (0x0008e617) main_mup_eq_pane_t5

0x3498,	// (0x0008e633) main_mup_eq_pane_t6_ParamLimits

0x3498,	// (0x0008e633) main_mup_eq_pane_t6

0x34ac,	// (0x0008e647) main_mup_eq_pane_t7_ParamLimits

0x34ac,	// (0x0008e647) main_mup_eq_pane_t7

0x34c0,	// (0x0008e65b) main_mup_eq_pane_t8_ParamLimits

0x34c0,	// (0x0008e65b) main_mup_eq_pane_t8

0x34d4,	// (0x0008e66f) main_mup_eq_pane_t9_ParamLimits

0x34d4,	// (0x0008e66f) main_mup_eq_pane_t9

0x34ee,	// (0x0008e689) main_mup_eq_pane_t10_ParamLimits

0x34ee,	// (0x0008e689) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0009a5d5) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0009a5d5) main_mup_eq_pane_t

0x359d,	// (0x0008e738) mup_equalizer_pane_cp5_ParamLimits

0x35b1,	// (0x0008e74c) mup_equalizer_pane_cp6_ParamLimits

0x35c5,	// (0x0008e760) mup_equalizer_pane_cp7_ParamLimits

0x97f3,	// (0x0009498e) main_gallery_pane

0xc994,	// (0x00097b2f) smil2_volume_pane

0xc99c,	// (0x00097b37) smil_status_volume_pane_g1_ParamLimits

0xc9af,	// (0x00097b4a) smil_status_volume_pane_g2_ParamLimits

0x9d90,	// (0x00094f2b) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x0009a79e) smil_status_volume_pane_g_ParamLimits

0xcb01,	// (0x00097c9c) bg_popup_window_pane_cp07_ParamLimits

0xcb0f,	// (0x00097caa) blid_firmament_pane

0x4ca4,	// (0x0008fe3f) aid_size_cell_gallery_ParamLimits

0x4ca4,	// (0x0008fe3f) aid_size_cell_gallery

0x4cba,	// (0x0008fe55) grid_gallery_pane_ParamLimits

0x4cba,	// (0x0008fe55) grid_gallery_pane

0x4cd3,	// (0x0008fe6e) cell_gallery_pane_ParamLimits

0x4cd3,	// (0x0008fe6e) cell_gallery_pane

0xcc32,	// (0x00097dcd) bg_cell_gallery_focus_pane_ParamLimits

0xcc32,	// (0x00097dcd) bg_cell_gallery_focus_pane

0xcc44,	// (0x00097ddf) cell_gallery_pane_g1_ParamLimits

0xcc44,	// (0x00097ddf) cell_gallery_pane_g1

0x4d1c,	// (0x0008feb7) cell_gallery_pane_g2_ParamLimits

0x4d1c,	// (0x0008feb7) cell_gallery_pane_g2

0x4d29,	// (0x0008fec4) cell_gallery_pane_g3_ParamLimits

0x4d29,	// (0x0008fec4) cell_gallery_pane_g3

0xcc50,	// (0x00097deb) cell_gallery_pane_g4_ParamLimits

0xcc50,	// (0x00097deb) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0009a84c) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0009a84c) cell_gallery_pane_g

0xcc5c,	// (0x00097df7) bg_cell_gallery_focus_pane_g1

0xcc64,	// (0x00097dff) bg_cell_gallery_focus_pane_g2

0xcc6c,	// (0x00097e07) bg_cell_gallery_focus_pane_g3

0xcc74,	// (0x00097e0f) bg_cell_gallery_focus_pane_g4

0xcc7c,	// (0x00097e17) bg_cell_gallery_focus_pane_g5

0xcc84,	// (0x00097e1f) bg_cell_gallery_focus_pane_g6

0xcc8c,	// (0x00097e27) bg_cell_gallery_focus_pane_g7

0xcc94,	// (0x00097e2f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x0009a855) bg_cell_gallery_focus_pane_g

0xcc9c,	// (0x00097e37) aid_firma_cardinal

0xccb0,	// (0x00097e4b) blid_firmament_pane_t1

0xccc7,	// (0x00097e62) blid_firmament_pane_t2

0xccde,	// (0x00097e79) blid_firmament_pane_t3

0xccf5,	// (0x00097e90) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x0009a866) blid_firmament_pane_t

0xcd0c,	// (0x00097ea7) blid_sat_info_pane

0xcd1c,	// (0x00097eb7) blid_sat_info_pane_g1

0xcd1c,	// (0x00097eb7) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x0009a86f) blid_sat_info_pane_g

0xcd26,	// (0x00097ec1) blid_sat_info_pane_t1

0xcd34,	// (0x00097ecf) smil2_volume_content_pane

0xcd3d,	// (0x00097ed8) smil2_volume_pane_g1

0xa903,	// (0x00095a9e) smil2_volume_content_pane_g1

0xcd45,	// (0x00097ee0) smil2_volume_content_pane_g2

0xcd4e,	// (0x00097ee9) smil2_volume_content_pane_g3

0xcd57,	// (0x00097ef2) smil2_volume_content_pane_g4

0xcd60,	// (0x00097efb) smil2_volume_content_pane_g5

0xcd69,	// (0x00097f04) smil2_volume_content_pane_g6

0xcd72,	// (0x00097f0d) smil2_volume_content_pane_g7

0xcd7b,	// (0x00097f16) smil2_volume_content_pane_g8

0xcd84,	// (0x00097f1f) smil2_volume_content_pane_g9

0xcd8d,	// (0x00097f28) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0009a874) smil2_volume_content_pane_g

0x1a49,	// (0x0008cbe4) cale_week_day_heading_pane_t1_ParamLimits

0x1a73,	// (0x0008cc0e) cale_week_day_heading_pane_t2_ParamLimits

0x1aa2,	// (0x0008cc3d) cale_week_day_heading_pane_t3_ParamLimits

0x1ad1,	// (0x0008cc6c) cale_week_day_heading_pane_t4_ParamLimits

0x1b00,	// (0x0008cc9b) cale_week_day_heading_pane_t5_ParamLimits

0x1b37,	// (0x0008ccd2) cale_week_day_heading_pane_t6_ParamLimits

0x1b6e,	// (0x0008cd09) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0009a351) cale_week_day_heading_pane_t_ParamLimits

0xaa13,	// (0x00095bae) bg_cale_side_pane_ParamLimits

0x1b98,	// (0x0008cd33) cale_week_time_pane_t1_ParamLimits

0x1bb2,	// (0x0008cd4d) cale_week_time_pane_t2_ParamLimits

0x1bcc,	// (0x0008cd67) cale_week_time_pane_t3_ParamLimits

0x1be6,	// (0x0008cd81) cale_week_time_pane_t4_ParamLimits

0x1c00,	// (0x0008cd9b) cale_week_time_pane_t5_ParamLimits

0x1c1a,	// (0x0008cdb5) cale_week_time_pane_t6_ParamLimits

0x1c34,	// (0x0008cdcf) cale_week_time_pane_t7_ParamLimits

0x1c4e,	// (0x0008cde9) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0009a360) cale_week_time_pane_t_ParamLimits

0x1c6e,	// (0x0008ce09) cell_cale_week_pane_g2_ParamLimits

0xaa13,	// (0x00095bae) bg_cale_side_pane_cp01_ParamLimits

0x2be3,	// (0x0008dd7e) cale_month_week_pane_t1_ParamLimits

0x2bfc,	// (0x0008dd97) cale_month_week_pane_t2_ParamLimits

0x2c15,	// (0x0008ddb0) cale_month_week_pane_t3_ParamLimits

0x2c2e,	// (0x0008ddc9) cale_month_week_pane_t4_ParamLimits

0x2c47,	// (0x0008dde2) cale_month_week_pane_t5_ParamLimits

0x2c60,	// (0x0008ddfb) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0009a435) cale_month_week_pane_t_ParamLimits

0x9c4b,	// (0x00094de6) cell_cale_month_pane_g1_ParamLimits

0x97f3,	// (0x0009498e) main_cale_event_viewer_pane

0x97f3,	// (0x0009498e) listscroll_cale_event_viewer_pane

0xcd96,	// (0x00097f31) list_cale_ev_pane

0xcd9e,	// (0x00097f39) scroll_pane_cp023

0xcdaa,	// (0x00097f45) field_cale_ev_pane_ParamLimits

0xcdaa,	// (0x00097f45) field_cale_ev_pane

0xcdc8,	// (0x00097f63) field_cale_ev_content_pane_ParamLimits

0xcdc8,	// (0x00097f63) field_cale_ev_content_pane

0xcdd4,	// (0x00097f6f) field_cale_ev_pane_g1_ParamLimits

0xcdd4,	// (0x00097f6f) field_cale_ev_pane_g1

0xcde0,	// (0x00097f7b) field_cale_ev_pane_g2_ParamLimits

0xcde0,	// (0x00097f7b) field_cale_ev_pane_g2

0xcdf8,	// (0x00097f93) field_cale_ev_pane_g3_ParamLimits

0xcdf8,	// (0x00097f93) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0009a889) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0009a889) field_cale_ev_pane_g

0xce10,	// (0x00097fab) field_cale_ev_pane_t1_ParamLimits

0xce10,	// (0x00097fab) field_cale_ev_pane_t1

0xa986,	// (0x00095b21) field_cale_ev_content_pane_t1_ParamLimits

0xa986,	// (0x00095b21) field_cale_ev_content_pane_t1

0xb638,	// (0x000967d3) bg_button_pane_cp01

0x1776,	// (0x0008c911) listscroll_cale_week_pane_ParamLimits

0xa9be,	// (0x00095b59) popup_toolbar_window_cp01

0xa9e4,	// (0x00095b7f) listscroll_cale_week_pane_t1_ParamLimits

0x1776,	// (0x0008c911) listscroll_cale_day_pane_ParamLimits

0xa9be,	// (0x00095b59) popup_toolbar_window_cp02

0xae06,	// (0x00095fa1) listscroll_cale_day_pane_t1_ParamLimits

0x1776,	// (0x0008c911) main_cale_month_pane_ParamLimits

0x9d7b,	// (0x00094f16) popup_toolbar_window_cp03_ParamLimits

0x9d7b,	// (0x00094f16) popup_toolbar_window_cp03

0x38f9,	// (0x0008ea94) main_image_pane_g2_ParamLimits

0x38f9,	// (0x0008ea94) main_image_pane_g2

0x390a,	// (0x0008eaa5) main_image_pane_g3_ParamLimits

0x390a,	// (0x0008eaa5) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0009a667) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0009a667) main_image_pane_g

0xb752,	// (0x000968ed) main_image_pane_t1_ParamLimits

0x391b,	// (0x0008eab6) main_image_pane_t2_ParamLimits

0x391b,	// (0x0008eab6) main_image_pane_t2

0x392d,	// (0x0008eac8) main_image_pane_t3_ParamLimits

0x392d,	// (0x0008eac8) main_image_pane_t3

0x3955,	// (0x0008eaf0) main_image_pane_t4_ParamLimits

0x3955,	// (0x0008eaf0) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0009a66e) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0009a66e) main_image_pane_t

0x3975,	// (0x0008eb10) popup_image_details_window_cp01

0x397f,	// (0x0008eb1a) popup_toobar_trans_pane_cp01_ParamLimits

0x397f,	// (0x0008eb1a) popup_toobar_trans_pane_cp01

0x40f2,	// (0x0008f28d) popup_image_details_window_ParamLimits

0x40f2,	// (0x0008f28d) popup_image_details_window

0x9d4e,	// (0x00094ee9) popup_image_focus_window

0x4511,	// (0x0008f6ac) camera2_autofocus_pane_ParamLimits

0x4511,	// (0x0008f6ac) camera2_autofocus_pane

0x97f3,	// (0x0009498e) bg_popup_sub_pane_cp06

0xce27,	// (0x00097fc2) popup_image_focus_window_g1

0xce2f,	// (0x00097fca) popup_image_focus_window_g2

0xce37,	// (0x00097fd2) popup_image_focus_window_g3

0xce3f,	// (0x00097fda) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x0009a890) popup_image_focus_window_g

0xce47,	// (0x00097fe2) popup_image_focus_window_t1

0xce55,	// (0x00097ff0) popup_image_focus_window_t2

0xce65,	// (0x00098000) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0009a899) popup_image_focus_window_t

0xce73,	// (0x0009800e) camera2_autofocus_pane_g1

0xa48d,	// (0x00095628) bg_tb_trans_pane_cp01

0xce81,	// (0x0009801c) popup_image_details_window_g1

0xce94,	// (0x0009802f) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0009a8ab) popup_image_details_window_g

0xcebd,	// (0x00098058) popup_image_details_window_t1

0xcecf,	// (0x0009806a) popup_image_details_window_t2

0xcee8,	// (0x00098083) popup_image_details_window_t3

0xcefc,	// (0x00098097) popup_image_details_window_t4

0xcf17,	// (0x000980b2) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0009a8b2) popup_image_details_window_t

0xa86e,	// (0x00095a09) bg_calc_paper_pane_ParamLimits

0x97f3,	// (0x0009498e) grid_highlight_pane_cp013

0x9bbb,	// (0x00094d56) list_calc_pane_ParamLimits

0x9bcd,	// (0x00094d68) scroll_pane_cp024

0xa882,	// (0x00095a1d) bg_calc_display_pane_ParamLimits

0x15d6,	// (0x0008c771) calc_display_pane_t1_ParamLimits

0x15e8,	// (0x0008c783) calc_display_pane_t2_ParamLimits

0x9bd5,	// (0x00094d70) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0009a2d1) calc_display_pane_t_ParamLimits

0x16a2,	// (0x0008c83d) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0009a2ee) cell_calc_pane_g

0x16ab,	// (0x0008c846) cell_calc_pane_t1

0xa8e1,	// (0x00095a7c) grid_highlight_pane_cp02_ParamLimits

0xa8f7,	// (0x00095a92) toolbar_button_pane_cp01_ParamLimits

0xa8f7,	// (0x00095a92) toolbar_button_pane_cp01

0xb797,	// (0x00096932) temp_image_control_pane_ParamLimits

0xb797,	// (0x00096932) temp_image_control_pane

0xa48d,	// (0x00095628) main_mp3_pane

0xcf31,	// (0x000980cc) temp_image_control_pane_g1_ParamLimits

0xcf31,	// (0x000980cc) temp_image_control_pane_g1

0xcf3f,	// (0x000980da) temp_image_control_pane_g2_ParamLimits

0xcf3f,	// (0x000980da) temp_image_control_pane_g2

0xcf51,	// (0x000980ec) temp_image_control_pane_g3_ParamLimits

0xcf51,	// (0x000980ec) temp_image_control_pane_g3

0x4d66,	// (0x0008ff01) temp_image_control_pane_g4_ParamLimits

0x4d66,	// (0x0008ff01) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0009a8bd) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0009a8bd) temp_image_control_pane_g

0xcf31,	// (0x000980cc) main_mp3_pane_g1

0x4d79,	// (0x0008ff14) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0009a8c6) main_mp3_pane_g

0xcf94,	// (0x0009812f) main_mp3_pane_t1

0xaa76,	// (0x00095c11) main_camera_pane_g8_ParamLimits

0xaa76,	// (0x00095c11) main_camera_pane_g8

0x1f72,	// (0x0008d10d) main_video_pane_g7_ParamLimits

0x1f72,	// (0x0008d10d) main_video_pane_g7

0x9dd0,	// (0x00094f6b) main_camera2_pane_t7_ParamLimits

0x9dd0,	// (0x00094f6b) main_camera2_pane_t7

0xabbe,	// (0x00095d59) scroll_pane_cp025_ParamLimits

0xabbe,	// (0x00095d59) scroll_pane_cp025

0xabd2,	// (0x00095d6d) scroll_pane_cp026_ParamLimits

0xabd2,	// (0x00095d6d) scroll_pane_cp026

0xabe1,	// (0x00095d7c) wml_content_pane_ParamLimits

0x97f3,	// (0x0009498e) main_touch_calib_pane

0x4e4d,	// (0x0008ffe8) main_touch_calib_pane_g1

0x4e5f,	// (0x0008fffa) main_touch_calib_pane_g2

0x4e71,	// (0x0009000c) main_touch_calib_pane_g3

0x4e83,	// (0x0009001e) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0009a8e4) main_touch_calib_pane_g

0x4e95,	// (0x00090030) main_touch_calib_pane_t1

0x4eaf,	// (0x0009004a) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x0009a8ed) main_touch_calib_pane_t

0xb364,	// (0x000964ff) mup_progress_pane_cp02

0xb399,	// (0x00096534) navi_pane_g1

0xb454,	// (0x000965ef) navi_pane_mp_t3

0xa48d,	// (0x00095628) main_mp3_pane_ParamLimits

0x427d,	// (0x0008f418) navi_pane_ParamLimits

0xcf31,	// (0x000980cc) main_mp3_pane_g1_ParamLimits

0x4d79,	// (0x0008ff14) main_mp3_pane_g2_ParamLimits

0x4d87,	// (0x0008ff22) main_mp3_pane_g3_ParamLimits

0x4d87,	// (0x0008ff22) main_mp3_pane_g3

0x4d95,	// (0x0008ff30) main_mp3_pane_g4_ParamLimits

0x4d95,	// (0x0008ff30) main_mp3_pane_g4

0xcf61,	// (0x000980fc) main_mp3_pane_g5_ParamLimits

0xcf61,	// (0x000980fc) main_mp3_pane_g5

0xcf6f,	// (0x0009810a) main_mp3_pane_g6_ParamLimits

0xcf6f,	// (0x0009810a) main_mp3_pane_g6

0xcf7c,	// (0x00098117) main_mp3_pane_g7_ParamLimits

0xcf7c,	// (0x00098117) main_mp3_pane_g7

0xcf88,	// (0x00098123) main_mp3_pane_g8_ParamLimits

0xcf88,	// (0x00098123) main_mp3_pane_g8

0xf72b,	// (0x0009a8c6) main_mp3_pane_g_ParamLimits

0x4da1,	// (0x0008ff3c) main_mp3_pane_t2

0x4daf,	// (0x0008ff4a) main_mp3_pane_t3

0xcfa2,	// (0x0009813d) main_mp3_pane_t4

0xcfb0,	// (0x0009814b) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0009a8d7) main_mp3_pane_t

0xcfbe,	// (0x00098159) mup_progress_pane_cp01

0x9811,	// (0x000949ac) aid_zoom_text_secondary2

0xcd96,	// (0x00097f31) list_cale_ev2_pane

0xcd9e,	// (0x00097f39) scroll_pane_cp023_ParamLimits

0x4f05,	// (0x000900a0) field_cale_ev2_pane_ParamLimits

0x4f05,	// (0x000900a0) field_cale_ev2_pane

0x9e4f,	// (0x00094fea) field_cale_ev2_pane_g1_ParamLimits

0x9e4f,	// (0x00094fea) field_cale_ev2_pane_g1

0x9e5b,	// (0x00094ff6) field_cale_ev2_pane_g2_ParamLimits

0x9e5b,	// (0x00094ff6) field_cale_ev2_pane_g2

0x9e73,	// (0x0009500e) field_cale_ev2_pane_g3_ParamLimits

0x9e73,	// (0x0009500e) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x0009a8f8) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x0009a8f8) field_cale_ev2_pane_g

0x4f26,	// (0x000900c1) field_cale_ev2_pane_t1_ParamLimits

0x4f26,	// (0x000900c1) field_cale_ev2_pane_t1

0x4f3d,	// (0x000900d8) field_cale_ev2_pane_t2_ParamLimits

0x4f3d,	// (0x000900d8) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x0009a901) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x0009a901) field_cale_ev2_pane_t

0x37ad,	// (0x0008e948) main_postcard_pane_g5_ParamLimits

0x37ad,	// (0x0008e948) main_postcard_pane_g5

0x37c3,	// (0x0008e95e) main_postcard_pane_g6_ParamLimits

0x37c3,	// (0x0008e95e) main_postcard_pane_g6

0x1d38,	// (0x0008ced3) camera2_autofocus_pane_cp_ParamLimits

0x1d38,	// (0x0008ced3) camera2_autofocus_pane_cp

0xa48d,	// (0x00095628) main_mup3_pane

0x4f96,	// (0x00090131) main_mup3_pane_g1_ParamLimits

0x4f96,	// (0x00090131) main_mup3_pane_g1

0x4fb8,	// (0x00090153) main_mup3_pane_g2_ParamLimits

0x4fb8,	// (0x00090153) main_mup3_pane_g2

0x5038,	// (0x000901d3) main_mup3_pane_g3_ParamLimits

0x5038,	// (0x000901d3) main_mup3_pane_g3

0x507e,	// (0x00090219) main_mup3_pane_g4_ParamLimits

0x507e,	// (0x00090219) main_mup3_pane_g4

0x50c4,	// (0x0009025f) main_mup3_pane_g5_ParamLimits

0x50c4,	// (0x0009025f) main_mup3_pane_g5

0x510a,	// (0x000902a5) main_mup3_pane_g6_ParamLimits

0x510a,	// (0x000902a5) main_mup3_pane_g6

0xcfc6,	// (0x00098161) main_mup3_pane_g7_ParamLimits

0xcfc6,	// (0x00098161) main_mup3_pane_g7

0x0007,

0xf776,	// (0x0009a911) main_mup3_pane_g_ParamLimits

0xf776,	// (0x0009a911) main_mup3_pane_g

0x5188,	// (0x00090323) main_mup3_pane_t1_ParamLimits

0x5188,	// (0x00090323) main_mup3_pane_t1

0x51fc,	// (0x00090397) main_mup3_pane_t2_ParamLimits

0x51fc,	// (0x00090397) main_mup3_pane_t2

0x52d0,	// (0x0009046b) main_mup3_pane_t4_ParamLimits

0x52d0,	// (0x0009046b) main_mup3_pane_t4

0x5326,	// (0x000904c1) main_mup3_pane_t5_ParamLimits

0x5326,	// (0x000904c1) main_mup3_pane_t5

0x53e2,	// (0x0009057d) main_mup3_pane_t6_ParamLimits

0x53e2,	// (0x0009057d) main_mup3_pane_t6

0x0005,

0xf787,	// (0x0009a922) main_mup3_pane_t_ParamLimits

0xf787,	// (0x0009a922) main_mup3_pane_t

0x549a,	// (0x00090635) mup3_progress_pane_ParamLimits

0x549a,	// (0x00090635) mup3_progress_pane

0x5526,	// (0x000906c1) popup_mup3_control_window_ParamLimits

0x5526,	// (0x000906c1) popup_mup3_control_window

0xcfd4,	// (0x0009816f) popup_mup3_text_window

0x5558,	// (0x000906f3) mup3_progress_pane_t1

0x5577,	// (0x00090712) mup3_progress_pane_t2

0xcfdc,	// (0x00098177) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x0009a92f) mup3_progress_pane_t

0xcff9,	// (0x00098194) mup_progress_pane_cp03

0x97f3,	// (0x0009498e) bg_tb_trans_pane_cp04

0x5596,	// (0x00090731) mup3_volume_pane

0x559e,	// (0x00090739) popup_mup3_control_window_g1

0x55a7,	// (0x00090742) mup3_volume_pane_g1

0x55b0,	// (0x0009074b) mup3_volume_pane_g2

0x55b9,	// (0x00090754) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x0009a936) mup3_volume_pane_g

0x97f3,	// (0x0009498e) bg_tb_trans_pane_cp03

0xd009,	// (0x000981a4) popup_mup3_text_window_g1

0xd011,	// (0x000981ac) popup_mup3_text_window_t1

0xa8ca,	// (0x00095a65) list_calc_item_pane_g1_ParamLimits

0xca6f,	// (0x00097c0a) mup_volume_pane_cp_g1

0x4ec9,	// (0x00090064) main_touch_calib_pane_t3

0x4edd,	// (0x00090078) main_touch_calib_pane_t4

0x4ef1,	// (0x0009008c) main_touch_calib_pane_t5

0x97fd,	// (0x00094998) aid_cell_size_toolbar2

0x9805,	// (0x000949a0) aid_popup3_width_pane

0x1080,	// (0x0008c21b) aid_zoom_text_msg_primary

0x1d17,	// (0x0008ceb2) vorec_t7

0xa88e,	// (0x00095a29) bg_calc_paper_pane_g1_ParamLimits

0xa89a,	// (0x00095a35) bg_calc_paper_pane_g2_ParamLimits

0xa8a6,	// (0x00095a41) bg_calc_paper_pane_g3_ParamLimits

0xa8b2,	// (0x00095a4d) bg_calc_paper_pane_g4_ParamLimits

0xa8be,	// (0x00095a59) bg_calc_paper_pane_g5_ParamLimits

0x162f,	// (0x0008c7ca) bg_calc_paper_pane_g6_ParamLimits

0x163e,	// (0x0008c7d9) bg_calc_paper_pane_g7_ParamLimits

0x164d,	// (0x0008c7e8) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0009a2d8) bg_calc_paper_pane_g_ParamLimits

0x1660,	// (0x0008c7fb) calc_bg_paper_pane_g9_ParamLimits

0x1e84,	// (0x0008d01f) image_qvga_pane_ParamLimits

0x1e84,	// (0x0008d01f) image_qvga_pane

0xa7b1,	// (0x0009594c) bg_popup_sub_pane_cp04_ParamLimits

0xb6ce,	// (0x00096869) popup_mup_playback_window_g1_ParamLimits

0xb6da,	// (0x00096875) popup_mup_playback_window_t1_ParamLimits

0xb6ef,	// (0x0009688a) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0009a662) popup_mup_playback_window_t_ParamLimits

0x4a08,	// (0x0008fba3) main_mup2_pane_g3_ParamLimits

0x4a08,	// (0x0008fba3) main_mup2_pane_g3

0x2199,	// (0x0008d334) popup_toolbar_window_cp04

0xbae4,	// (0x00096c7f) popup_call2_audio_second_window_g3_ParamLimits

0xbae4,	// (0x00096c7f) popup_call2_audio_second_window_g3

0xbeee,	// (0x00097089) popup_call2_audio_first_window_g4_ParamLimits

0xbeee,	// (0x00097089) popup_call2_audio_first_window_g4

0xc56d,	// (0x00097708) popup_call2_audio_in_window_g4_ParamLimits

0xc56d,	// (0x00097708) popup_call2_audio_in_window_g4

0x38db,	// (0x0008ea76) aid_area_sk_bg_cut_ParamLimits

0x38db,	// (0x0008ea76) aid_area_sk_bg_cut

0xb704,	// (0x0009689f) aid_area_sk_bg_cut_2_ParamLimits

0xb704,	// (0x0009689f) aid_area_sk_bg_cut_2

0x4d0c,	// (0x0008fea7) aid_placing_details_win

0x4d14,	// (0x0008feaf) aid_placing_details_win_2

0xce73,	// (0x0009800e) camera2_autofocus_pane_g1_ParamLimits

0x1226,	// (0x0008c3c1) popup_fixed_preview_cale_window_ParamLimits

0x1226,	// (0x0008c3c1) popup_fixed_preview_cale_window

0xb4d2,	// (0x0009666d) navi_slider_pane_g3

0xb4db,	// (0x00096676) navi_slider_pane_g4

0xb4e4,	// (0x0009667f) navi_slider_pane_g5

0xb4d2,	// (0x0009666d) navi_slider_pane_g6

0x9cf1,	// (0x00094e8c) navi_slider_pane_g7

0xb605,	// (0x000967a0) mup_scale_pane_g3

0xb60e,	// (0x000967a9) mup_scale_pane_g4

0xb617,	// (0x000967b2) mup_scale_pane_g5

0x35d9,	// (0x0008e774) mup_scale_pane_g6

0x35e2,	// (0x0008e77d) mup_scale_pane_g7

0xb4d2,	// (0x0009666d) cams2_slider_pane_g3

0xcaf1,	// (0x00097c8c) cams2_slider_pane_g4

0x9e3e,	// (0x00094fd9) cams2_slider_pane_g5

0xb4d2,	// (0x0009666d) cams2_slider_pane_g6

0x9e46,	// (0x00094fe1) cams2_slider_pane_g7

0xcd1c,	// (0x00097eb7) camera2_autofocus_pane_cp_g1

0xc908,	// (0x00097aa3) bg_popup_preview_window_pane_cp02_ParamLimits

0xc908,	// (0x00097aa3) bg_popup_preview_window_pane_cp02

0xd01f,	// (0x000981ba) list_fp_cale_pane_ParamLimits

0xd01f,	// (0x000981ba) list_fp_cale_pane

0xd02b,	// (0x000981c6) popup_fixed_preview_cale_window_t1_ParamLimits

0xd02b,	// (0x000981c6) popup_fixed_preview_cale_window_t1

0x55c2,	// (0x0009075d) popup_fixed_preview_cale_window_t2_ParamLimits

0x55c2,	// (0x0009075d) popup_fixed_preview_cale_window_t2

0x55d7,	// (0x00090772) popup_fixed_preview_cale_window_t3_ParamLimits

0x55d7,	// (0x00090772) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x0009a93d) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x0009a93d) popup_fixed_preview_cale_window_t

0x55ec,	// (0x00090787) list_single_fp_cale_pane_ParamLimits

0x55ec,	// (0x00090787) list_single_fp_cale_pane

0xd049,	// (0x000981e4) list_single_fp_cale_pane_g1_ParamLimits

0xd049,	// (0x000981e4) list_single_fp_cale_pane_g1

0xd055,	// (0x000981f0) list_single_fp_cale_pane_g2_ParamLimits

0xd055,	// (0x000981f0) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x0009a944) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x0009a944) list_single_fp_cale_pane_g

0xd06e,	// (0x00098209) list_single_fp_cale_pane_t1_ParamLimits

0xd06e,	// (0x00098209) list_single_fp_cale_pane_t1

0xd080,	// (0x0009821b) list_single_fp_cale_pane_t2_ParamLimits

0xd080,	// (0x0009821b) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0009a94b) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0009a94b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x97f3,	// (0x0009498e) main_dialer_pane

0x5602,	// (0x0009079d) aid_cell_size_keypad

0x560c,	// (0x000907a7) dialer_ne_pane

0x5614,	// (0x000907af) grid_dialer_command_1_pane

0x561c,	// (0x000907b7) grid_dialer_command_2_pane

0x5624,	// (0x000907bf) grid_dialer_keypad_pane

0x5636,	// (0x000907d1) bg_popup_call_pane_cp06_ParamLimits

0x5636,	// (0x000907d1) bg_popup_call_pane_cp06

0x5642,	// (0x000907dd) dialer_ne_clear_pane_ParamLimits

0x5642,	// (0x000907dd) dialer_ne_clear_pane

0xd0b3,	// (0x0009824e) dialer_ne_pane_g1

0xd0bb,	// (0x00098256) dialer_ne_pane_t1_ParamLimits

0xd0bb,	// (0x00098256) dialer_ne_pane_t1

0x564e,	// (0x000907e9) dialer_ne_pane_t2_ParamLimits

0x564e,	// (0x000907e9) dialer_ne_pane_t2

0x5678,	// (0x00090813) dialer_ne_pane_t3_ParamLimits

0x5678,	// (0x00090813) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x0009a950) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x0009a950) dialer_ne_pane_t

0x56a8,	// (0x00090843) dialer_ne_pane_t3_copy1_ParamLimits

0x56a8,	// (0x00090843) dialer_ne_pane_t3_copy1

0x56d7,	// (0x00090872) cell_dialer_keypad_pane_ParamLimits

0x56d7,	// (0x00090872) cell_dialer_keypad_pane

0x56ee,	// (0x00090889) cell_dialer_command_1_pane_ParamLimits

0x56ee,	// (0x00090889) cell_dialer_command_1_pane

0x5704,	// (0x0009089f) cell_dialer_command_2_pane_ParamLimits

0x5704,	// (0x0009089f) cell_dialer_command_2_pane

0xd0cd,	// (0x00098268) bg_button_pane_cp02_ParamLimits

0xd0cd,	// (0x00098268) bg_button_pane_cp02

0x5713,	// (0x000908ae) cell_dialer_keypad_pane_g1_ParamLimits

0x5713,	// (0x000908ae) cell_dialer_keypad_pane_g1

0xd0cd,	// (0x00098268) bg_button_pane_cp03_ParamLimits

0xd0cd,	// (0x00098268) bg_button_pane_cp03

0x5727,	// (0x000908c2) cell_dialer_command_1_pane_g1_ParamLimits

0x5727,	// (0x000908c2) cell_dialer_command_1_pane_g1

0xd0d9,	// (0x00098274) bg_button_pane_cp04

0x573b,	// (0x000908d6) cell_dialer_command_2_pane_g1

0xaa6e,	// (0x00095c09) bg_button_pane_cp06

0xd0e1,	// (0x0009827c) dialer_ne_clear_pane_g1

0xb3a5,	// (0x00096540) navi_pane_g2

0xb3d3,	// (0x0009656e) navi_pane_g3

0x0002,

0xf3ca,	// (0x0009a565) navi_pane_g

0xb462,	// (0x000965fd) navi_pane_mv_g2

0xb489,	// (0x00096624) navi_pane_mv_g5

0x31a7,	// (0x0008e342) navi_pane_mv_t1

0xa882,	// (0x00095a1d) main_clock2_pane

0xa48d,	// (0x00095628) main_clock2_list_pane_ParamLimits

0xa48d,	// (0x00095628) main_clock2_list_pane

0x57ac,	// (0x00090947) main_clock2_pane_t1_ParamLimits

0x57ac,	// (0x00090947) main_clock2_pane_t1

0x57e7,	// (0x00090982) main_clock2_pane_t2_ParamLimits

0x57e7,	// (0x00090982) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0009a95c) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0009a95c) main_clock2_pane_t

0x5887,	// (0x00090a22) popup_clock_analogue_window_cp03_ParamLimits

0x5887,	// (0x00090a22) popup_clock_analogue_window_cp03

0x58ac,	// (0x00090a47) popup_clock_digital_window_cp02_ParamLimits

0x58ac,	// (0x00090a47) popup_clock_digital_window_cp02

0x5925,	// (0x00090ac0) main_clock2_list_single_pane_ParamLimits

0x5925,	// (0x00090ac0) main_clock2_list_single_pane

0xaa6e,	// (0x00095c09) list_highlight_pane_cp05

0xd11b,	// (0x000982b6) main_clock2_list_single_pane_t1

0x2199,	// (0x0008d334) popup_toolbar_window_cp04_ParamLimits

0x4d36,	// (0x0008fed1) camera2_autofocus_pane_g2_ParamLimits

0x4d36,	// (0x0008fed1) camera2_autofocus_pane_g2

0x4d42,	// (0x0008fedd) camera2_autofocus_pane_g3_ParamLimits

0x4d42,	// (0x0008fedd) camera2_autofocus_pane_g3

0x4d4e,	// (0x0008fee9) camera2_autofocus_pane_g4_ParamLimits

0x4d4e,	// (0x0008fee9) camera2_autofocus_pane_g4

0x4d5a,	// (0x0008fef5) camera2_autofocus_pane_g5_ParamLimits

0x4d5a,	// (0x0008fef5) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x0009a8a0) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x0009a8a0) camera2_autofocus_pane_g

0x4f52,	// (0x000900ed) camera2_autofocus_pane_cp_g2

0x4f5a,	// (0x000900f5) camera2_autofocus_pane_cp_g3

0x4f62,	// (0x000900fd) camera2_autofocus_pane_cp_g4

0x4f6a,	// (0x00090105) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0009a906) camera2_autofocus_pane_cp_g

0x562e,	// (0x000907c9) popup_dialer_spcha_window

0x97f3,	// (0x0009498e) bg_popup_sub_pane_cp07

0xd129,	// (0x000982c4) list_spcha_pane

0xd131,	// (0x000982cc) list_single_spcha_pane_ParamLimits

0xd131,	// (0x000982cc) list_single_spcha_pane

0x97f3,	// (0x0009498e) list_highlight_pane_cp06

0xd142,	// (0x000982dd) list_single_spcha_pane_t1

0xc317,	// (0x000974b2) popup_call2_audio_out_window_g4_ParamLimits

0xc317,	// (0x000974b2) popup_call2_audio_out_window_g4

0x97f3,	// (0x0009498e) main_imed2_pane

0x9d56,	// (0x00094ef1) popup_imed_adjust2_window

0x410a,	// (0x0008f2a5) popup_imed_trans_window_ParamLimits

0x410a,	// (0x0008f2a5) popup_imed_trans_window

0xcb5a,	// (0x00097cf5) popup_blid_sat_info2_window_t1

0xcb68,	// (0x00097d03) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x0009a835) popup_blid_sat_info2_window_t

0x59d6,	// (0x00090b71) aid_size_cell_colour_35

0x59f6,	// (0x00090b91) aid_size_cell_colour_112

0x5a16,	// (0x00090bb1) aid_size_cell_effect

0xc914,	// (0x00097aaf) bg_tb_trans_pane_cp02

0xaf0f,	// (0x000960aa) heading_imed_pane

0x5a36,	// (0x00090bd1) listscroll_imed_pane

0xd150,	// (0x000982eb) heading_imed_pane_g1

0xd158,	// (0x000982f3) heading_imed_pane_t1

0xd166,	// (0x00098301) grid_imed_colour_35_pane_ParamLimits

0xd166,	// (0x00098301) grid_imed_colour_35_pane

0x5a42,	// (0x00090bdd) grid_imed_effect_pane

0xd17e,	// (0x00098319) list_imed_aspect_pane

0x5a58,	// (0x00090bf3) scroll_pane_cp027_ParamLimits

0x5a58,	// (0x00090bf3) scroll_pane_cp027

0x5a69,	// (0x00090c04) cell_imed_effect_pane_ParamLimits

0x5a69,	// (0x00090c04) cell_imed_effect_pane

0xd186,	// (0x00098321) cell_imed_colour_pane_ParamLimits

0xd186,	// (0x00098321) cell_imed_colour_pane

0xd1c8,	// (0x00098363) cell_imed_colour_pane_g1_ParamLimits

0xd1c8,	// (0x00098363) cell_imed_colour_pane_g1

0xd1d9,	// (0x00098374) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1d9,	// (0x00098374) hgihlgiht_grid_pane_cp016

0x5a90,	// (0x00090c2b) cell_imed_effect_pane_g1

0x5a98,	// (0x00090c33) grid_highlight_pane_cp017

0xd1ea,	// (0x00098385) list_imed_single_pane_ParamLimits

0xd1ea,	// (0x00098385) list_imed_single_pane

0x97f3,	// (0x0009498e) list_highlight_pane_cp07

0xd1ff,	// (0x0009839a) list_imed_aspect_pane_comp1_t1

0xc914,	// (0x00097aaf) bg_tb_trans_pane_cp05

0xd221,	// (0x000983bc) popup_imed_adjust2_window_g1

0xd248,	// (0x000983e3) popup_imed_adjust2_window_t1

0xd260,	// (0x000983fb) slider_imed_adjust_pane

0xd274,	// (0x0009840f) slider_imed_adjust_pane_g1

0xd284,	// (0x0009841f) slider_imed_adjust_pane_g2

0xd294,	// (0x0009842f) slider_imed_adjust_pane_g3

0xd2a5,	// (0x00098440) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0009a979) slider_imed_adjust_pane_g

0x5aa1,	// (0x00090c3c) aid_size_cell_clipart2

0x5aad,	// (0x00090c48) grid_imed_clipart_pane

0xd2b6,	// (0x00098451) scroll_pane_cp031

0x5ab7,	// (0x00090c52) cell_imed_clipart_pane_ParamLimits

0x5ab7,	// (0x00090c52) cell_imed_clipart_pane

0x5ad9,	// (0x00090c74) cell_imed_clipart_pane_g1

0x97f3,	// (0x0009498e) grid_highlight_pane_cp014

0x5788,	// (0x00090923) main_clock2_pane_g1_ParamLimits

0x5788,	// (0x00090923) main_clock2_pane_g1

0x58cc,	// (0x00090a67) aid_call2_pane_cp10

0x58de,	// (0x00090a79) aid_call_pane_cp10

0xb304,	// (0x0009649f) popup_clock_analogue_window_cp10_g1

0xb304,	// (0x0009649f) popup_clock_analogue_window_cp10_g2

0x58f0,	// (0x00090a8b) popup_clock_analogue_window_cp10_g3

0x58f0,	// (0x00090a8b) popup_clock_analogue_window_cp10_g4

0xb304,	// (0x0009649f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0009a967) popup_clock_analogue_window_cp10_g

0x5906,	// (0x00090aa1) popup_clock_analogue_window_cp10_t1

0x5937,	// (0x00090ad2) clock_digital_number_pane_cp10_ParamLimits

0x5937,	// (0x00090ad2) clock_digital_number_pane_cp10

0x594f,	// (0x00090aea) clock_digital_number_pane_cp11_ParamLimits

0x594f,	// (0x00090aea) clock_digital_number_pane_cp11

0x5967,	// (0x00090b02) clock_digital_number_pane_cp12_ParamLimits

0x5967,	// (0x00090b02) clock_digital_number_pane_cp12

0x5981,	// (0x00090b1c) clock_digital_number_pane_cp13_ParamLimits

0x5981,	// (0x00090b1c) clock_digital_number_pane_cp13

0x599b,	// (0x00090b36) clock_digital_separator_pane_cp10_ParamLimits

0x599b,	// (0x00090b36) clock_digital_separator_pane_cp10

0x59b5,	// (0x00090b50) popup_clock_digital_window_cp02_t1_ParamLimits

0x59b5,	// (0x00090b50) popup_clock_digital_window_cp02_t1

0xa7a9,	// (0x00095944) clock_digital_number_pane_cp10_g1

0xa7a9,	// (0x00095944) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0009a982) clock_digital_number_pane_cp10_g

0xa7a9,	// (0x00095944) clock_digital_separator_pane_cp10_g1

0xa7a9,	// (0x00095944) clock_digital_separator_pane_g2_cp10

0xb491,	// (0x0009662c) navi_pane_vded_g4

0xb49a,	// (0x00096635) navi_pane_vded_g5

0xb4a3,	// (0x0009663e) navi_pane_vded_t1

0x97f3,	// (0x0009498e) main_vded_pane

0x5ae2,	// (0x00090c7d) main_vded_pane_g1

0x5aec,	// (0x00090c87) main_vded_pane_g2

0x5af6,	// (0x00090c91) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0009a987) main_vded_pane_g

0x5b00,	// (0x00090c9b) main_vded_pane_t1

0x5b0e,	// (0x00090ca9) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x0009a98e) main_vded_pane_t

0x5b1c,	// (0x00090cb7) vded_slider_pane

0x5b24,	// (0x00090cbf) vded_video_pane

0xd2be,	// (0x00098459) vded_video_pane_g1

0x5b2c,	// (0x00090cc7) vded_video_pane_g2

0xcd1c,	// (0x00097eb7) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0009a993) vded_video_pane_g

0xd2c8,	// (0x00098463) vded_slider_pane_g1

0xca6f,	// (0x00097c0a) vded_slider_pane_g2

0xd2d1,	// (0x0009846c) vded_slider_pane_g3

0xd2da,	// (0x00098475) vded_slider_pane_g4

0xd2e3,	// (0x0009847e) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0009a99a) vded_slider_pane_g

0x550e,	// (0x000906a9) mup3_rocker_pane_ParamLimits

0x550e,	// (0x000906a9) mup3_rocker_pane

0x5b35,	// (0x00090cd0) mup3_control_keys_pane_g1

0x5b3d,	// (0x00090cd8) mup3_control_keys_pane_g2

0x5b45,	// (0x00090ce0) mup3_control_keys_pane_g3

0x5b4d,	// (0x00090ce8) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0009a9a5) mup3_control_keys_pane_g

0x125d,	// (0x0008c3f8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x125d,	// (0x0008c3f8) popup_toolbar2_fixed_window_cp01

0x5542,	// (0x000906dd) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5542,	// (0x000906dd) popup_toolbar2_fixed_window_cp02

0xbc56,	// (0x00096df1) popup_call2_audio_second_window_t4_ParamLimits

0xbc56,	// (0x00096df1) popup_call2_audio_second_window_t4

0xc184,	// (0x0009731f) popup_call2_audio_first_window_t6_ParamLimits

0xc184,	// (0x0009731f) popup_call2_audio_first_window_t6

0xc41a,	// (0x000975b5) popup_call2_audio_out_window_t6_ParamLimits

0xc41a,	// (0x000975b5) popup_call2_audio_out_window_t6

0x97f3,	// (0x0009498e) main_vitu_pane

0x5b5d,	// (0x00090cf8) aid_size_cell_itu_ParamLimits

0x5b5d,	// (0x00090cf8) aid_size_cell_itu

0xa48d,	// (0x00095628) bg_popup_window_pane_cp08_ParamLimits

0xa48d,	// (0x00095628) bg_popup_window_pane_cp08

0x5b73,	// (0x00090d0e) field_vitu_entry_pane_ParamLimits

0x5b73,	// (0x00090d0e) field_vitu_entry_pane

0x5b8b,	// (0x00090d26) grid_vitu_function_pane_ParamLimits

0x5b8b,	// (0x00090d26) grid_vitu_function_pane

0x5ba6,	// (0x00090d41) grid_vitu_itu_pane_ParamLimits

0x5ba6,	// (0x00090d41) grid_vitu_itu_pane

0x5bc4,	// (0x00090d5f) cell_vitu_itu_pane_ParamLimits

0x5bc4,	// (0x00090d5f) cell_vitu_itu_pane

0x5be6,	// (0x00090d81) cell_vitu_function_pane_ParamLimits

0x5be6,	// (0x00090d81) cell_vitu_function_pane

0xa48d,	// (0x00095628) bg_popup_sub_pane_cp08_ParamLimits

0xa48d,	// (0x00095628) bg_popup_sub_pane_cp08

0x5bff,	// (0x00090d9a) field_vitu_entry_pane_t1_ParamLimits

0x5bff,	// (0x00090d9a) field_vitu_entry_pane_t1

0xd304,	// (0x0009849f) field_vitu_entry_pane_t2_ParamLimits

0xd304,	// (0x0009849f) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0009a9b3) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0009a9b3) field_vitu_entry_pane_t

0xd321,	// (0x000984bc) bg_button_pane_cp05_ParamLimits

0xd321,	// (0x000984bc) bg_button_pane_cp05

0x5c1e,	// (0x00090db9) cell_vitu_itu_pane_g1

0x5c36,	// (0x00090dd1) cell_vitu_itu_pane_t1_ParamLimits

0x5c36,	// (0x00090dd1) cell_vitu_itu_pane_t1

0x5c48,	// (0x00090de3) cell_vitu_itu_pane_t2_ParamLimits

0x5c48,	// (0x00090de3) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0009a9b8) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0009a9b8) cell_vitu_itu_pane_t

0xd32f,	// (0x000984ca) bg_button_pane_cp07

0x5c7d,	// (0x00090e18) cell_vitu_function_pane_g1

0x9bb3,	// (0x00094d4e) main_calc_pane_g1

0x1074,	// (0x0008c20f) aid_visual_content_pane

0x97f3,	// (0x0009498e) main_vradio_pane

0x5c86,	// (0x00090e21) main_vradio_pane_g1_ParamLimits

0x5c86,	// (0x00090e21) main_vradio_pane_g1

0xd339,	// (0x000984d4) main_vradio_pane_g2_ParamLimits

0xd339,	// (0x000984d4) main_vradio_pane_g2

0x0001,

0xf824,	// (0x0009a9bf) main_vradio_pane_g_ParamLimits

0xf824,	// (0x0009a9bf) main_vradio_pane_g

0x5c9f,	// (0x00090e3a) main_vradio_pane_t1_ParamLimits

0x5c9f,	// (0x00090e3a) main_vradio_pane_t1

0x5cb4,	// (0x00090e4f) main_vradio_pane_t2_ParamLimits

0x5cb4,	// (0x00090e4f) main_vradio_pane_t2

0xd346,	// (0x000984e1) main_vradio_pane_t3_ParamLimits

0xd346,	// (0x000984e1) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0009a9c4) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0009a9c4) main_vradio_pane_t

0x5cc9,	// (0x00090e64) vradio_rocker_control_pane_ParamLimits

0x5cc9,	// (0x00090e64) vradio_rocker_control_pane

0x5cdb,	// (0x00090e76) vradio_station_info_pane_ParamLimits

0x5cdb,	// (0x00090e76) vradio_station_info_pane

0xd35a,	// (0x000984f5) vradio_frequency_info_pane_ParamLimits

0xd35a,	// (0x000984f5) vradio_frequency_info_pane

0xcd1c,	// (0x00097eb7) vradio_station_info_pane_g1

0xd369,	// (0x00098504) vradio_station_info_pane_t1_ParamLimits

0xd369,	// (0x00098504) vradio_station_info_pane_t1

0xd38b,	// (0x00098526) vradio_station_info_pane_t2_ParamLimits

0xd38b,	// (0x00098526) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0009a9cb) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0009a9cb) vradio_station_info_pane_t

0xd39d,	// (0x00098538) vradio_tuning_pane

0xd3a5,	// (0x00098540) vradio_rocker_control_pane_g1

0xd3ad,	// (0x00098548) vradio_rocker_control_pane_g2

0xd3b5,	// (0x00098550) vradio_rocker_control_pane_g3

0xd3bd,	// (0x00098558) vradio_rocker_control_pane_g4

0xd3c5,	// (0x00098560) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x0009a9d0) vradio_rocker_control_pane_g

0x5ced,	// (0x00090e88) vradio_frequency_info_pane_g1

0xd3cd,	// (0x00098568) vradio_frequency_info_pane_t1_ParamLimits

0xd3cd,	// (0x00098568) vradio_frequency_info_pane_t1

0x5cf7,	// (0x00090e92) vradio_tuning_pane_g1

0x5d02,	// (0x00090e9d) vradio_tuning_pane_t1

0x9819,	// (0x000949b4) area_side_right_pane_ParamLimits

0x9819,	// (0x000949b4) area_side_right_pane

0xc8cf,	// (0x00097a6a) status_small_pane_g1

0xc8d7,	// (0x00097a72) status_small_pane_g2

0xc8e0,	// (0x00097a7b) status_small_pane_g3

0xc8e9,	// (0x00097a84) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0009a78b) status_small_pane_g

0xc8f2,	// (0x00097a8d) status_small_pane_t1

0x97f3,	// (0x0009498e) main_video3_pane

0xd3e1,	// (0x0009857c) cams_zoom_vslider_pane

0xd3e9,	// (0x00098584) image3_wide_pane_ParamLimits

0xd3e9,	// (0x00098584) image3_wide_pane

0xd403,	// (0x0009859e) image3_wide_small_pane

0xd40f,	// (0x000985aa) main_video3_pane_g1_ParamLimits

0xd40f,	// (0x000985aa) main_video3_pane_g1

0xd42b,	// (0x000985c6) main_video3_pane_g2_ParamLimits

0xd42b,	// (0x000985c6) main_video3_pane_g2

0x0001,

0xf840,	// (0x0009a9db) main_video3_pane_g_ParamLimits

0xf840,	// (0x0009a9db) main_video3_pane_g

0xd447,	// (0x000985e2) main_video3_pane_t1_ParamLimits

0xd447,	// (0x000985e2) main_video3_pane_t1

0xd472,	// (0x0009860d) main_video3_pane_t2_ParamLimits

0xd472,	// (0x0009860d) main_video3_pane_t2

0xd49d,	// (0x00098638) main_video3_pane_t3_ParamLimits

0xd49d,	// (0x00098638) main_video3_pane_t3

0x0002,

0xf845,	// (0x0009a9e0) main_video3_pane_t_ParamLimits

0xf845,	// (0x0009a9e0) main_video3_pane_t

0xd4ca,	// (0x00098665) cams_zoom_vslider_pane_g1

0xd4d3,	// (0x0009866e) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0009a9e7) cams_zoom_vslider_pane_g

0xd4db,	// (0x00098676) small_slider_vertical_pane

0xcd1c,	// (0x00097eb7) small_slider_vertical_pane_g1

0xcd1c,	// (0x00097eb7) small_slider_vertical_pane_g2

0xd4e3,	// (0x0009867e) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x0009a9ec) small_slider_vertical_pane_g

0x97f3,	// (0x0009498e) main_hwr_training_pane

0xd4ec,	// (0x00098687) hwr_training_instruct_pane_ParamLimits

0xd4ec,	// (0x00098687) hwr_training_instruct_pane

0x5d11,	// (0x00090eac) hwr_training_navi_pane_ParamLimits

0x5d11,	// (0x00090eac) hwr_training_navi_pane

0x5d30,	// (0x00090ecb) hwr_training_write_pane_ParamLimits

0x5d30,	// (0x00090ecb) hwr_training_write_pane

0x97f3,	// (0x0009498e) bg_frame_shadow_pane

0xd538,	// (0x000986d3) hwr_training_write_pane_g1

0xd540,	// (0x000986db) hwr_training_write_pane_g2

0xd548,	// (0x000986e3) hwr_training_write_pane_g3

0xd550,	// (0x000986eb) hwr_training_write_pane_g4

0xd558,	// (0x000986f3) hwr_training_write_pane_g5

0xd560,	// (0x000986fb) hwr_training_write_pane_g6

0xd568,	// (0x00098703) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0009a9f3) hwr_training_write_pane_g

0x9e97,	// (0x00095032) hwr_training_navi_pane_g1_ParamLimits

0x9e97,	// (0x00095032) hwr_training_navi_pane_g1

0x9ea9,	// (0x00095044) hwr_training_navi_pane_g2_ParamLimits

0x9ea9,	// (0x00095044) hwr_training_navi_pane_g2

0x9ebb,	// (0x00095056) hwr_training_navi_pane_g3_ParamLimits

0x9ebb,	// (0x00095056) hwr_training_navi_pane_g3

0x9ecb,	// (0x00095066) hwr_training_navi_pane_g4_ParamLimits

0x9ecb,	// (0x00095066) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0009aa02) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0009aa02) hwr_training_navi_pane_g

0x9ed8,	// (0x00095073) hwr_training_navi_pane_t1

0x5d7a,	// (0x00090f15) list_single_hwr_training_instruct_pane_ParamLimits

0x5d7a,	// (0x00090f15) list_single_hwr_training_instruct_pane

0xd570,	// (0x0009870b) list_single_hwr_training_instruct_pane_t1

0xcc5c,	// (0x00097df7) bg_frame_shadow_pane_g1

0xd57f,	// (0x0009871a) bg_frame_shadow_pane_g2

0xd587,	// (0x00098722) bg_frame_shadow_pane_g3

0xd58f,	// (0x0009872a) bg_frame_shadow_pane_g4

0xd597,	// (0x00098732) bg_frame_shadow_pane_g5

0xd59f,	// (0x0009873a) bg_frame_shadow_pane_g6

0xd5a7,	// (0x00098742) bg_frame_shadow_pane_g7

0xa944,	// (0x00095adf) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x0009aa0d) bg_frame_shadow_pane_g

0x97f3,	// (0x0009498e) main_video_tele_dialer_pane

0x5d90,	// (0x00090f2b) aid_size_cell_video_keypad_ParamLimits

0x5d90,	// (0x00090f2b) aid_size_cell_video_keypad

0x5daa,	// (0x00090f45) grid_video_dialer_keypad_pane_ParamLimits

0x5daa,	// (0x00090f45) grid_video_dialer_keypad_pane

0x5df8,	// (0x00090f93) video_down_pane_cp_ParamLimits

0x5df8,	// (0x00090f93) video_down_pane_cp

0x5e2a,	// (0x00090fc5) cell_video_dialer_keypad_pane_ParamLimits

0x5e2a,	// (0x00090fc5) cell_video_dialer_keypad_pane

0xd5af,	// (0x0009874a) bg_button_pane_cp08_ParamLimits

0xd5af,	// (0x0009874a) bg_button_pane_cp08

0x5e4c,	// (0x00090fe7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5e4c,	// (0x00090fe7) cell_video_dialer_keypad_pane_g1

0x54f8,	// (0x00090693) mup3_rocker2_pane_ParamLimits

0x54f8,	// (0x00090693) mup3_rocker2_pane

0xcd1c,	// (0x00097eb7) mup3_rocker2_pane_g1

0x3ff9,	// (0x0008f194) main_dialer2_pane

0x97f3,	// (0x0009498e) main_mp4_pane

0x9f04,	// (0x0009509f) main_mp4_pane_g1_ParamLimits

0x9f04,	// (0x0009509f) main_mp4_pane_g1

0x9f04,	// (0x0009509f) main_mp4_pane_g2_ParamLimits

0x9f04,	// (0x0009509f) main_mp4_pane_g2

0x5e86,	// (0x00091021) main_mp4_pane_g3_ParamLimits

0x5e86,	// (0x00091021) main_mp4_pane_g3

0x9f12,	// (0x000950ad) main_mp4_pane_g4_ParamLimits

0x9f12,	// (0x000950ad) main_mp4_pane_g4

0x9f40,	// (0x000950db) main_mp4_pane_g5_ParamLimits

0x9f40,	// (0x000950db) main_mp4_pane_g5

0x0007,

0xf892,	// (0x0009aa2d) main_mp4_pane_g_ParamLimits

0xf892,	// (0x0009aa2d) main_mp4_pane_g

0x9fb4,	// (0x0009514f) main_mp4_pane_t1_ParamLimits

0x9fb4,	// (0x0009514f) main_mp4_pane_t1

0xa010,	// (0x000951ab) main_mp4_pane_t2_ParamLimits

0xa010,	// (0x000951ab) main_mp4_pane_t2

0xd5bb,	// (0x00098756) main_mp4_pane_t3_ParamLimits

0xd5bb,	// (0x00098756) main_mp4_pane_t3

0xa062,	// (0x000951fd) main_mp4_pane_t4_ParamLimits

0xa062,	// (0x000951fd) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x0009aa3e) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x0009aa3e) main_mp4_pane_t

0xa0a6,	// (0x00095241) mp4_progress_pane_ParamLimits

0xa0a6,	// (0x00095241) mp4_progress_pane

0xa0f0,	// (0x0009528b) mp4_rocker_pane_ParamLimits

0xa0f0,	// (0x0009528b) mp4_rocker_pane

0xd5e9,	// (0x00098784) mp4_progress_pane_t1

0xd602,	// (0x0009879d) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x0009aa47) mp4_progress_pane_t

0xd61b,	// (0x000987b6) mup_progress_pane_cp04

0xcd1c,	// (0x00097eb7) mp4_rocker_pane_g1

0x5ec2,	// (0x0009105d) aid_cell_size_keypad2_ParamLimits

0x5ec2,	// (0x0009105d) aid_cell_size_keypad2

0x5ed8,	// (0x00091073) dialer2_ne_pane_ParamLimits

0x5ed8,	// (0x00091073) dialer2_ne_pane

0x5ef2,	// (0x0009108d) grid_dialer2_keypad_pane_ParamLimits

0x5ef2,	// (0x0009108d) grid_dialer2_keypad_pane

0xcb01,	// (0x00097c9c) bg_popup_call_pane_cp07_ParamLimits

0xcb01,	// (0x00097c9c) bg_popup_call_pane_cp07

0x5f0e,	// (0x000910a9) dialer2_ne_pane_t1_ParamLimits

0x5f0e,	// (0x000910a9) dialer2_ne_pane_t1

0x5f4a,	// (0x000910e5) cell_dialer2_keypad_pane_ParamLimits

0x5f4a,	// (0x000910e5) cell_dialer2_keypad_pane

0xd640,	// (0x000987db) bg_button_pane_pane_cp04_ParamLimits

0xd640,	// (0x000987db) bg_button_pane_pane_cp04

0x5f6c,	// (0x00091107) cell_dialer2_keypad_pane_g1_ParamLimits

0x5f6c,	// (0x00091107) cell_dialer2_keypad_pane_g1

0x206d,	// (0x0008d208) aid_placing_vt_set_content_ParamLimits

0x206d,	// (0x0008d208) aid_placing_vt_set_content

0x2095,	// (0x0008d230) aid_placing_vt_set_title_ParamLimits

0x2095,	// (0x0008d230) aid_placing_vt_set_title

0x97f3,	// (0x0009498e) main_image3_pane

0x6032,	// (0x000911cd) area_side_right_pane_cp01_ParamLimits

0x6032,	// (0x000911cd) area_side_right_pane_cp01

0x9f04,	// (0x0009509f) main_image3_pane_g1_ParamLimits

0x9f04,	// (0x0009509f) main_image3_pane_g1

0x6049,	// (0x000911e4) main_image3_pane_g2_ParamLimits

0x6049,	// (0x000911e4) main_image3_pane_g2

0x6071,	// (0x0009120c) main_image3_pane_g3_ParamLimits

0x6071,	// (0x0009120c) main_image3_pane_g3

0x609b,	// (0x00091236) main_image3_pane_g4_ParamLimits

0x609b,	// (0x00091236) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x0009aa56) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x0009aa56) main_image3_pane_g

0x60c5,	// (0x00091260) main_image3_pane_t1_ParamLimits

0x60c5,	// (0x00091260) main_image3_pane_t1

0x611d,	// (0x000912b8) main_image3_pane_t2_ParamLimits

0x611d,	// (0x000912b8) main_image3_pane_t2

0x616f,	// (0x0009130a) main_image3_pane_t3_ParamLimits

0x616f,	// (0x0009130a) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0009aa5f) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0009aa5f) main_image3_pane_t

0xa48d,	// (0x00095628) grid_sctrl_middle_pane_cp01_ParamLimits

0xa48d,	// (0x00095628) grid_sctrl_middle_pane_cp01

0x61f7,	// (0x00091392) cell_sctrl_middle_pane_cp01_ParamLimits

0x61f7,	// (0x00091392) cell_sctrl_middle_pane_cp01

0x6214,	// (0x000913af) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6214,	// (0x000913af) cell_sctrl_middle_pane_cp01_g1

0x97f3,	// (0x0009498e) main_call4_pane

0x622a,	// (0x000913c5) aid_size_button_call4_ParamLimits

0x622a,	// (0x000913c5) aid_size_button_call4

0x625d,	// (0x000913f8) call4_windows_pane_ParamLimits

0x625d,	// (0x000913f8) call4_windows_pane

0x627c,	// (0x00091417) grid_call4_button_pane_ParamLimits

0x627c,	// (0x00091417) grid_call4_button_pane

0x62af,	// (0x0009144a) call4_windows_conf_pane

0x62c6,	// (0x00091461) popup_call4_audio_first_window_ParamLimits

0x62c6,	// (0x00091461) popup_call4_audio_first_window

0x6316,	// (0x000914b1) popup_call4_audio_second_window_ParamLimits

0x6316,	// (0x000914b1) popup_call4_audio_second_window

0x632d,	// (0x000914c8) popup_call4_audio_wait_window_ParamLimits

0x632d,	// (0x000914c8) popup_call4_audio_wait_window

0x633b,	// (0x000914d6) cell_call4_button_pane_ParamLimits

0x633b,	// (0x000914d6) cell_call4_button_pane

0x6360,	// (0x000914fb) bg_button_pane_cp09_ParamLimits

0x6360,	// (0x000914fb) bg_button_pane_cp09

0x636c,	// (0x00091507) cell_call4_button_pane_g1_ParamLimits

0x636c,	// (0x00091507) cell_call4_button_pane_g1

0x6392,	// (0x0009152d) cell_call4_button_pane_t1_ParamLimits

0x6392,	// (0x0009152d) cell_call4_button_pane_t1

0xd654,	// (0x000987ef) popup_call4_audio_conf_window_ParamLimits

0xd654,	// (0x000987ef) popup_call4_audio_conf_window

0x5558,	// (0x000906f3) mup3_progress_pane_t1_ParamLimits

0x5577,	// (0x00090712) mup3_progress_pane_t2_ParamLimits

0xcfdc,	// (0x00098177) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x0009a92f) mup3_progress_pane_t_ParamLimits

0xcff9,	// (0x00098194) mup_progress_pane_cp03_ParamLimits

0x5b55,	// (0x00090cf0) mup3_control_keys_pane_g4_copy1

0xa0d4,	// (0x0009526f) mp4_rocker2_pane_ParamLimits

0xa0d4,	// (0x0009526f) mp4_rocker2_pane

0xd668,	// (0x00098803) mp4_rocker2_pane_g1

0xd670,	// (0x0009880b) mp4_rocker2_pane_g2

0xa174,	// (0x0009530f) mp4_rocker2_pane_g3

0xa17c,	// (0x00095317) mp4_rocker2_pane_g4

0xa184,	// (0x0009531f) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0009aa68) mp4_rocker2_pane_g

0x97f3,	// (0x0009498e) main_camera4_pane

0x97f3,	// (0x0009498e) main_video4_pane

0x5dc6,	// (0x00090f61) main_video_tele_dialer_pane_t1_ParamLimits

0x5dc6,	// (0x00090f61) main_video_tele_dialer_pane_t1

0x5ddf,	// (0x00090f7a) main_video_tele_dialer_pane_t2_ParamLimits

0x5ddf,	// (0x00090f7a) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x0009aa1e) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x0009aa1e) main_video_tele_dialer_pane_t

0x63d4,	// (0x0009156f) cam4_autofocus_pane_ParamLimits

0x63d4,	// (0x0009156f) cam4_autofocus_pane

0x63ea,	// (0x00091585) cam4_image_uncrop_pane_ParamLimits

0x63ea,	// (0x00091585) cam4_image_uncrop_pane

0x6404,	// (0x0009159f) cam4_indicators_pane_ParamLimits

0x6404,	// (0x0009159f) cam4_indicators_pane

0x642f,	// (0x000915ca) main_camera4_pane_g1_ParamLimits

0x642f,	// (0x000915ca) main_camera4_pane_g1

0x6441,	// (0x000915dc) main_camera4_pane_g2_ParamLimits

0x6441,	// (0x000915dc) main_camera4_pane_g2

0x6454,	// (0x000915ef) main_camera4_pane_g3_ParamLimits

0x6454,	// (0x000915ef) main_camera4_pane_g3

0x6467,	// (0x00091602) main_camera4_pane_g4_ParamLimits

0x6467,	// (0x00091602) main_camera4_pane_g4

0x647a,	// (0x00091615) main_camera4_pane_g5_ParamLimits

0x647a,	// (0x00091615) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0009aa73) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0009aa73) main_camera4_pane_g

0x649e,	// (0x00091639) main_camera4_pane_t1_ParamLimits

0x649e,	// (0x00091639) main_camera4_pane_t1

0xcf61,	// (0x000980fc) bg_tb_trans_pane_cp06

0xa1b0,	// (0x0009534b) cam4_indicators_pane_g1

0xa1c1,	// (0x0009535c) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0009aa8e) cam4_indicators_pane_g

0xa1d9,	// (0x00095374) cam4_indicators_pane_t1

0x6502,	// (0x0009169d) main_video4_pane_g1_ParamLimits

0x6502,	// (0x0009169d) main_video4_pane_g1

0x6511,	// (0x000916ac) main_video4_pane_g2_ParamLimits

0x6511,	// (0x000916ac) main_video4_pane_g2

0x6520,	// (0x000916bb) main_video4_pane_g3_ParamLimits

0x6520,	// (0x000916bb) main_video4_pane_g3

0x652f,	// (0x000916ca) main_video4_pane_g4_ParamLimits

0x652f,	// (0x000916ca) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0009aa95) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0009aa95) main_video4_pane_g

0x654d,	// (0x000916e8) vid4_indicators_pane_ParamLimits

0x654d,	// (0x000916e8) vid4_indicators_pane

0x657b,	// (0x00091716) video4_image_uncrop_cif_pane_ParamLimits

0x657b,	// (0x00091716) video4_image_uncrop_cif_pane

0x6595,	// (0x00091730) video4_image_uncrop_nhd_pane_ParamLimits

0x6595,	// (0x00091730) video4_image_uncrop_nhd_pane

0x63ea,	// (0x00091585) video4_image_uncrop_vga_pane_ParamLimits

0x63ea,	// (0x00091585) video4_image_uncrop_vga_pane

0xa48d,	// (0x00095628) bg_tb_trans_pane_cp07

0xa203,	// (0x0009539e) vid4_indicators_pane_g1

0xa217,	// (0x000953b2) vid4_indicators_pane_g2

0xa22b,	// (0x000953c6) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0009aaa0) vid4_indicators_pane_g

0xa258,	// (0x000953f3) vid4_indicators_pane_t1

0x65a9,	// (0x00091744) cam4_autofocus_pane_g1

0x65b1,	// (0x0009174c) cam4_autofocus_pane_g2

0x65b9,	// (0x00091754) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0009aaab) cam4_autofocus_pane_g

0x65c1,	// (0x0009175c) cam4_autofocus_pane_g3_copy1

0x5e0e,	// (0x00090fa9) video_down_pane_cp_t1

0x5e1c,	// (0x00090fb7) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x0009aa23) video_down_pane_cp_t

0xa48d,	// (0x00095628) popup_vitu2_window_ParamLimits

0xa48d,	// (0x00095628) popup_vitu2_window

0x65c9,	// (0x00091764) aid_size_cell2_itu2_ParamLimits

0x65c9,	// (0x00091764) aid_size_cell2_itu2

0x65ef,	// (0x0009178a) aid_size_cell_itu2_ParamLimits

0x65ef,	// (0x0009178a) aid_size_cell_itu2

0x664b,	// (0x000917e6) bg_popup_window_pane_cp09_ParamLimits

0x664b,	// (0x000917e6) bg_popup_window_pane_cp09

0x6659,	// (0x000917f4) field_vitu2_entry_pane_ParamLimits

0x6659,	// (0x000917f4) field_vitu2_entry_pane

0x667f,	// (0x0009181a) grid_vitu2_function_pane_ParamLimits

0x667f,	// (0x0009181a) grid_vitu2_function_pane

0x66d0,	// (0x0009186b) grid_vitu2_itu_pane_ParamLimits

0x66d0,	// (0x0009186b) grid_vitu2_itu_pane

0x6766,	// (0x00091901) cell_vitu2_itu_pane_ParamLimits

0x6766,	// (0x00091901) cell_vitu2_itu_pane

0x6792,	// (0x0009192d) cell_vitu2_function_pane_ParamLimits

0x6792,	// (0x0009192d) cell_vitu2_function_pane

0xd68a,	// (0x00098825) bg_popup_call_pane_cp08_ParamLimits

0xd68a,	// (0x00098825) bg_popup_call_pane_cp08

0xd6a1,	// (0x0009883c) field_vitu2_entry_pane_g1

0xd6ad,	// (0x00098848) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0009aab2) field_vitu2_entry_pane_g

0x0472,	// (0x0008b60d) field_vitu2_entry_pane_t1_ParamLimits

0x0472,	// (0x0008b60d) field_vitu2_entry_pane_t1

0x67d1,	// (0x0009196c) field_vitu2_entry_pane_t2_ParamLimits

0x67d1,	// (0x0009196c) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0009aab9) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0009aab9) field_vitu2_entry_pane_t

0x67ee,	// (0x00091989) bg_button_pane_cp010_ParamLimits

0x67ee,	// (0x00091989) bg_button_pane_cp010

0xa26f,	// (0x0009540a) cell_vitu2_itu_pane_g1

0x680a,	// (0x000919a5) cell_vitu2_itu_pane_t1_ParamLimits

0x680a,	// (0x000919a5) cell_vitu2_itu_pane_t1

0x04a1,	// (0x0008b63c) cell_vitu2_itu_pane_t2_ParamLimits

0x04a1,	// (0x0008b63c) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0009aac3) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0009aac3) cell_vitu2_itu_pane_t

0xa48d,	// (0x00095628) bg_button_pane_cp011

0x6868,	// (0x00091a03) cell_vitu2_function_pane_g1

0x97f3,	// (0x0009498e) main_myfav_hc_pane

0x61bf,	// (0x0009135a) popup_image3_note_pane_ParamLimits

0x61bf,	// (0x0009135a) popup_image3_note_pane

0x61db,	// (0x00091376) popup_image3_tool_bar_pane_ParamLimits

0x61db,	// (0x00091376) popup_image3_tool_bar_pane

0x052f,	// (0x0008b6ca) cell_vitu2_itu_pane_t3_ParamLimits

0x052f,	// (0x0008b6ca) cell_vitu2_itu_pane_t3

0x97f3,	// (0x0009498e) bg_popup_trans_pane

0xd6cf,	// (0x0009886a) grid_image3_tool_bar_pane

0xd6d9,	// (0x00098874) bg_popup_trans_pane_g1

0xacc7,	// (0x00095e62) bg_popup_trans_pane_g2

0xd6e1,	// (0x0009887c) bg_popup_trans_pane_g3

0xd6e9,	// (0x00098884) bg_popup_trans_pane_g4

0xd6f1,	// (0x0009888c) bg_popup_trans_pane_g5

0xd6f9,	// (0x00098894) bg_popup_trans_pane_g6

0xd701,	// (0x0009889c) bg_popup_trans_pane_g7

0xd709,	// (0x000988a4) bg_popup_trans_pane_g8

0xaca7,	// (0x00095e42) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0009aaca) bg_popup_trans_pane_g

0xd711,	// (0x000988ac) cell_image3_tool_bar_pane_ParamLimits

0xd711,	// (0x000988ac) cell_image3_tool_bar_pane

0xcd1c,	// (0x00097eb7) cell_image3_tool_bar_pane_g1

0x97f3,	// (0x0009498e) bg_popup_trans_pane_cp1

0xd725,	// (0x000988c0) popup_image3_note_pane_t1

0xd733,	// (0x000988ce) popup_image3_note_pane_t2

0xd741,	// (0x000988dc) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0009aadd) popup_image3_note_pane_t

0xd74f,	// (0x000988ea) popup_image3_note_pane_t3_copy1

0x687c,	// (0x00091a17) bg_myfav_hc_instruction_pane_ParamLimits

0x687c,	// (0x00091a17) bg_myfav_hc_instruction_pane

0x6890,	// (0x00091a2b) cell_myfav_contact_pane_ParamLimits

0x6890,	// (0x00091a2b) cell_myfav_contact_pane

0x68ae,	// (0x00091a49) cell_myfav_contact_pane_cp1_ParamLimits

0x68ae,	// (0x00091a49) cell_myfav_contact_pane_cp1

0x68c6,	// (0x00091a61) cell_myfav_contact_pane_cp2_ParamLimits

0x68c6,	// (0x00091a61) cell_myfav_contact_pane_cp2

0x68de,	// (0x00091a79) cell_myfav_contact_pane_cp3_ParamLimits

0x68de,	// (0x00091a79) cell_myfav_contact_pane_cp3

0x68f5,	// (0x00091a90) cell_myfav_contact_pane_cp4_ParamLimits

0x68f5,	// (0x00091a90) cell_myfav_contact_pane_cp4

0x690d,	// (0x00091aa8) cell_myfav_contact_pane_cp5_ParamLimits

0x690d,	// (0x00091aa8) cell_myfav_contact_pane_cp5

0x6921,	// (0x00091abc) cell_myfav_contact_pane_cp6_ParamLimits

0x6921,	// (0x00091abc) cell_myfav_contact_pane_cp6

0x6937,	// (0x00091ad2) cell_myfav_contact_pane_cp7_ParamLimits

0x6937,	// (0x00091ad2) cell_myfav_contact_pane_cp7

0xd75d,	// (0x000988f8) listscroll_gen_pane_cp05

0x6951,	// (0x00091aec) main_myfav_hc_pane_g1_ParamLimits

0x6951,	// (0x00091aec) main_myfav_hc_pane_g1

0x696b,	// (0x00091b06) main_myfav_hc_pane_g2_ParamLimits

0x696b,	// (0x00091b06) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0009aae4) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0009aae4) main_myfav_hc_pane_g

0x699d,	// (0x00091b38) main_myfav_hc_pane_t1_ParamLimits

0x699d,	// (0x00091b38) main_myfav_hc_pane_t1

0xd766,	// (0x00098901) main_myfav_hc_pane_t2_ParamLimits

0xd766,	// (0x00098901) main_myfav_hc_pane_t2

0xd778,	// (0x00098913) main_myfav_hc_pane_t3_ParamLimits

0xd778,	// (0x00098913) main_myfav_hc_pane_t3

0x69b4,	// (0x00091b4f) main_myfav_hc_pane_t4_ParamLimits

0x69b4,	// (0x00091b4f) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x0009aaeb) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x0009aaeb) main_myfav_hc_pane_t

0xcd1c,	// (0x00097eb7) bg_myfav_hc_instruction_pane_g1

0xd78a,	// (0x00098925) cell_myfav_contact_pane_g1_ParamLimits

0xd78a,	// (0x00098925) cell_myfav_contact_pane_g1

0xd78a,	// (0x00098925) cell_myfav_contact_pane_g2_ParamLimits

0xd78a,	// (0x00098925) cell_myfav_contact_pane_g2

0xd796,	// (0x00098931) cell_myfav_contact_pane_g3_ParamLimits

0xd796,	// (0x00098931) cell_myfav_contact_pane_g3

0xcfc6,	// (0x00098161) cell_myfav_contact_pane_g4_ParamLimits

0xcfc6,	// (0x00098161) cell_myfav_contact_pane_g4

0xd7a3,	// (0x0009893e) cell_myfav_contact_pane_g5_ParamLimits

0xd7a3,	// (0x0009893e) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0009aaf6) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0009aaf6) cell_myfav_contact_pane_g

0x6985,	// (0x00091b20) main_myfav_hc_pane_g3_ParamLimits

0x6985,	// (0x00091b20) main_myfav_hc_pane_g3

0x11bf,	// (0x0008c35a) popup_adpt_find_window

0x69dc,	// (0x00091b77) afind_page_pane_ParamLimits

0x69dc,	// (0x00091b77) afind_page_pane

0x69f1,	// (0x00091b8c) aid_size_cell_afind_ParamLimits

0x69f1,	// (0x00091b8c) aid_size_cell_afind

0x6a0f,	// (0x00091baa) bg_popup_sub_pane_cp09_ParamLimits

0x6a0f,	// (0x00091baa) bg_popup_sub_pane_cp09

0x6a1c,	// (0x00091bb7) find_pane_cp01_ParamLimits

0x6a1c,	// (0x00091bb7) find_pane_cp01

0xd7af,	// (0x0009894a) grid_afind_control_pane_ParamLimits

0xd7af,	// (0x0009894a) grid_afind_control_pane

0x6a29,	// (0x00091bc4) grid_afind_pane_ParamLimits

0x6a29,	// (0x00091bc4) grid_afind_pane

0x6a48,	// (0x00091be3) cell_afind_pane_ParamLimits

0x6a48,	// (0x00091be3) cell_afind_pane

0xcd1c,	// (0x00097eb7) afind_page_pane_g1

0x6aaf,	// (0x00091c4a) afind_page_pane_g2

0x6ab8,	// (0x00091c53) afind_page_pane_g3

0x0002,

0xf966,	// (0x0009ab01) afind_page_pane_g

0x6ac1,	// (0x00091c5c) afind_page_pane_t1

0xd7c3,	// (0x0009895e) cell_afind_grid_control_pane_ParamLimits

0xd7c3,	// (0x0009895e) cell_afind_grid_control_pane

0xd640,	// (0x000987db) bg_button_pane_cp69_ParamLimits

0xd640,	// (0x000987db) bg_button_pane_cp69

0x6ae1,	// (0x00091c7c) cell_afind_pane_g1_ParamLimits

0x6ae1,	// (0x00091c7c) cell_afind_pane_g1

0x6aee,	// (0x00091c89) cell_afind_pane_t1_ParamLimits

0x6aee,	// (0x00091c89) cell_afind_pane_t1

0xaac0,	// (0x00095c5b) bg_button_pane_cp72

0xd7d2,	// (0x0009896d) cell_afind_grid_control_pane_g1

0x3ab8,	// (0x0008ec53) aid_image_placing_area_ParamLimits

0x3ab8,	// (0x0008ec53) aid_image_placing_area

0xd2ec,	// (0x00098487) field_vitu_entry_pane_g1_ParamLimits

0xd2ec,	// (0x00098487) field_vitu_entry_pane_g1

0xd2f8,	// (0x00098493) field_vitu_entry_pane_g2_ParamLimits

0xd2f8,	// (0x00098493) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x0009a9ae) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x0009a9ae) field_vitu_entry_pane_g

0x5c1e,	// (0x00090db9) cell_vitu_itu_pane_g1_ParamLimits

0x5c60,	// (0x00090dfb) cell_vitu_itu_pane_t3_ParamLimits

0x5c60,	// (0x00090dfb) cell_vitu_itu_pane_t3

0xd5e9,	// (0x00098784) mp4_progress_pane_t1_ParamLimits

0xd602,	// (0x0009879d) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x0009aa47) mp4_progress_pane_t_ParamLimits

0xd61b,	// (0x000987b6) mup_progress_pane_cp04_ParamLimits

0x69c8,	// (0x00091b63) main_myfav_hc_pane_t5_ParamLimits

0x69c8,	// (0x00091b63) main_myfav_hc_pane_t5

0x1088,	// (0x0008c223) aid_zoom_text_primary

0x11bf,	// (0x0008c35a) popup_adpt_find_window_ParamLimits

0xa48d,	// (0x00095628) main_cam_set_pane

0x641b,	// (0x000915b6) cam4_zoom_pane_ParamLimits

0x641b,	// (0x000915b6) cam4_zoom_pane

0x6b00,	// (0x00091c9b) main_cam_set_pane_g1_ParamLimits

0x6b00,	// (0x00091c9b) main_cam_set_pane_g1

0x6b0e,	// (0x00091ca9) main_cam_set_pane_g2_ParamLimits

0x6b0e,	// (0x00091ca9) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x0009ab08) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x0009ab08) main_cam_set_pane_g

0x6b2f,	// (0x00091cca) main_cam_set_pane_t1_ParamLimits

0x6b2f,	// (0x00091cca) main_cam_set_pane_t1

0x6b4a,	// (0x00091ce5) main_cset_listscroll_pane_ParamLimits

0x6b4a,	// (0x00091ce5) main_cset_listscroll_pane

0x6b6a,	// (0x00091d05) main_cset_slider_pane_ParamLimits

0x6b6a,	// (0x00091d05) main_cset_slider_pane

0xd7e3,	// (0x0009897e) main_cset_list_pane_ParamLimits

0xd7e3,	// (0x0009897e) main_cset_list_pane

0xd7f3,	// (0x0009898e) scroll_pane_cp028

0x6b90,	// (0x00091d2b) aid_area_touch_slider

0x6bac,	// (0x00091d47) cset_slider_pane

0x6bd6,	// (0x00091d71) main_cset_slider_pane_g1

0x6beb,	// (0x00091d86) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x0009ab0d) main_cset_slider_pane_g

0xd844,	// (0x000989df) main_cset_slider_pane_t1

0x6c8f,	// (0x00091e2a) main_cset_slider_pane_t2

0x6ca9,	// (0x00091e44) main_cset_slider_pane_t3

0x6cc3,	// (0x00091e5e) main_cset_slider_pane_t4

0x6cdd,	// (0x00091e78) main_cset_slider_pane_t5

0x6cf7,	// (0x00091e92) main_cset_slider_pane_t6

0x6d0c,	// (0x00091ea7) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x0009ab32) main_cset_slider_pane_t

0x6e10,	// (0x00091fab) cset_list_set_pane_ParamLimits

0x6e10,	// (0x00091fab) cset_list_set_pane

0x6e22,	// (0x00091fbd) aid_position_infowindow_above

0x6e2a,	// (0x00091fc5) aid_position_infowindow_below

0x6e32,	// (0x00091fcd) cset_list_set_pane_g1_ParamLimits

0x6e32,	// (0x00091fcd) cset_list_set_pane_g1

0x058d,	// (0x0008b728) cset_list_set_pane_g3_ParamLimits

0x058d,	// (0x0008b728) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0009ab51) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0009ab51) cset_list_set_pane_g

0x059c,	// (0x0008b737) cset_list_set_pane_t1_ParamLimits

0x059c,	// (0x0008b737) cset_list_set_pane_t1

0xa48d,	// (0x00095628) list_highlight_pane_cp021_ParamLimits

0xa48d,	// (0x00095628) list_highlight_pane_cp021

0xb605,	// (0x000967a0) cset_slider_pane_g1

0xb617,	// (0x000967b2) cset_slider_pane_g2

0xb60e,	// (0x000967a9) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x0009ab56) cset_slider_pane_g

0xa281,	// (0x0009541c) aid_area_touch_cam4_zoom

0xa289,	// (0x00095424) cam4_zoom_cont_pane

0xa291,	// (0x0009542c) cam4_zoom_pane_g1

0xa299,	// (0x00095434) cam4_zoom_pane_g2

0x6e3e,	// (0x00091fd9) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0009ab5d) cam4_zoom_pane_g

0xd4e3,	// (0x0009867e) cam4_zoom_cont_pane_g1

0xd8e4,	// (0x00098a7f) cam4_zoom_cont_pane_g2

0xd8ed,	// (0x00098a88) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x0009ab64) cam4_zoom_cont_pane_g

0x6248,	// (0x000913e3) call4_image_pane_ParamLimits

0x6248,	// (0x000913e3) call4_image_pane

0x62af,	// (0x0009144a) call4_windows_conf_pane_ParamLimits

0x62f4,	// (0x0009148f) popup_call4_audio_in_window_ParamLimits

0x62f4,	// (0x0009148f) popup_call4_audio_in_window

0x97f3,	// (0x0009498e) bg_popup_call2_act_pane_cp02

0xd64c,	// (0x000987e7) call4_list_conf_pane

0xcd1c,	// (0x00097eb7) call4_image_pane_g1

0xcd1c,	// (0x00097eb7) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x0009a86f) call4_image_pane_g

0xd8f6,	// (0x00098a91) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8f6,	// (0x00098a91) list_single_graphic_popup_conf4_pane

0x97f3,	// (0x0009498e) list_highlight_pane_cp022

0xd909,	// (0x00098aa4) list_single_graphic_popup_conf4_pane_g1

0xb201,	// (0x0009639c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0009ab6b) list_single_graphic_popup_conf4_pane_g

0xd911,	// (0x00098aac) list_single_graphic_popup_conf4_pane_t1

0x21b9,	// (0x0008d354) popup_vtel_slider_window_ParamLimits

0x21b9,	// (0x0008d354) popup_vtel_slider_window

0xd62e,	// (0x000987c9) dialer2_ne_pane_t2_ParamLimits

0xd62e,	// (0x000987c9) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0009aa4c) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0009aa4c) dialer2_ne_pane_t

0xcb01,	// (0x00097c9c) bg_popup_sub_pane_cp010_ParamLimits

0xcb01,	// (0x00097c9c) bg_popup_sub_pane_cp010

0x6e46,	// (0x00091fe1) popup_vtel_slider_window_g1_ParamLimits

0x6e46,	// (0x00091fe1) popup_vtel_slider_window_g1

0x6e59,	// (0x00091ff4) popup_vtel_slider_window_g2_ParamLimits

0x6e59,	// (0x00091ff4) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x0009ab70) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x0009ab70) popup_vtel_slider_window_g

0x6eaf,	// (0x0009204a) vtel_slider_pane_ParamLimits

0x6eaf,	// (0x0009204a) vtel_slider_pane

0x6ed1,	// (0x0009206c) vtel_slider_pane_g1_ParamLimits

0x6ed1,	// (0x0009206c) vtel_slider_pane_g1

0x6ee5,	// (0x00092080) vtel_slider_pane_g2_ParamLimits

0x6ee5,	// (0x00092080) vtel_slider_pane_g2

0x6efd,	// (0x00092098) vtel_slider_pane_g3_ParamLimits

0x6efd,	// (0x00092098) vtel_slider_pane_g3

0x6ed1,	// (0x0009206c) vtel_slider_pane_g4_ParamLimits

0x6ed1,	// (0x0009206c) vtel_slider_pane_g4

0x6f13,	// (0x000920ae) vtel_slider_pane_g5_ParamLimits

0x6f13,	// (0x000920ae) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0009ab79) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0009ab79) vtel_slider_pane_g

0xa48d,	// (0x00095628) main_gallery2_pane

0x661b,	// (0x000917b6) aid_size_row_itut2_dropdow_list_ParamLimits

0x661b,	// (0x000917b6) aid_size_row_itut2_dropdow_list

0x66a7,	// (0x00091842) grid_vitu2_function_top_pane_ParamLimits

0x66a7,	// (0x00091842) grid_vitu2_function_top_pane

0x6711,	// (0x000918ac) popup_vitu2_dropdown_list_window_ParamLimits

0x6711,	// (0x000918ac) popup_vitu2_dropdown_list_window

0x673a,	// (0x000918d5) popup_vitu2_match_list_window

0x6f29,	// (0x000920c4) cell_vitu2_function_top_pane_ParamLimits

0x6f29,	// (0x000920c4) cell_vitu2_function_top_pane

0x6f41,	// (0x000920dc) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f41,	// (0x000920dc) cell_vitu2_function_top_pane_cp01

0x6f5d,	// (0x000920f8) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f5d,	// (0x000920f8) cell_vitu2_function_top_wide_pane

0xa48d,	// (0x00095628) bg_button_pane_cp012

0x6f79,	// (0x00092114) cell_vitu2_function_top_pane_g1

0xa2a1,	// (0x0009543c) bg_button_pane_cp013_ParamLimits

0xa2a1,	// (0x0009543c) bg_button_pane_cp013

0x6f8d,	// (0x00092128) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f8d,	// (0x00092128) cell_vitu2_function_top_wide_pane_g1

0xa48d,	// (0x00095628) bg_popup_sub_pane_cp20

0x6fa5,	// (0x00092140) list_vitu2_match_list_pane

0xd6d9,	// (0x00098874) bg_popup_sub_pane_cp20_g1

0xd6e1,	// (0x0009887c) bg_popup_sub_pane_cp20_g2

0xacc7,	// (0x00095e62) bg_popup_sub_pane_cp20_g3

0xd6e9,	// (0x00098884) bg_popup_sub_pane_cp20_g4

0xaca7,	// (0x00095e42) bg_popup_sub_pane_cp20_g5

0xd927,	// (0x00098ac2) bg_popup_sub_pane_cp20_g6

0xd6f9,	// (0x00098894) bg_popup_sub_pane_cp20_g7

0xd701,	// (0x0009889c) bg_popup_sub_pane_cp20_g8

0xd709,	// (0x000988a4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0009ab84) bg_popup_sub_pane_cp20_g

0xa2bd,	// (0x00095458) list_vitu2_match_list_item_pane_ParamLimits

0xa2bd,	// (0x00095458) list_vitu2_match_list_item_pane

0xa2cf,	// (0x0009546a) list_vitu2_match_list_item_pane_t1

0x97f3,	// (0x0009498e) bg_popup_sub_pane_cp21

0xb129,	// (0x000962c4) grid_vitu2_dropdown_list_pane

0x6fcf,	// (0x0009216a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6fcf,	// (0x0009216a) cell_vitu2_dropdown_list_char_pane

0x6ff0,	// (0x0009218b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6ff0,	// (0x0009218b) cell_vitu2_dropdown_list_ctrl_pane

0xd92f,	// (0x00098aca) cell_vitu2_dropdown_list_char_pane_g1

0xd938,	// (0x00098ad3) cell_vitu2_dropdown_list_char_pane_g2

0xd941,	// (0x00098adc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x0009aba1) cell_vitu2_dropdown_list_char_pane_g

0x701c,	// (0x000921b7) cell_vitu2_dropdown_list_char_pane_t1

0x702a,	// (0x000921c5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x702a,	// (0x000921c5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7037,	// (0x000921d2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7037,	// (0x000921d2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7044,	// (0x000921df) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7044,	// (0x000921df) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7051,	// (0x000921ec) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7051,	// (0x000921ec) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf61,	// (0x000980fc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf61,	// (0x000980fc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0009aba8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0009aba8) cell_vitu2_dropdown_list_ctrl_pane_g

0x706d,	// (0x00092208) aid_size_cell_gallery2_ParamLimits

0x706d,	// (0x00092208) aid_size_cell_gallery2

0x708b,	// (0x00092226) grid_gallery2_pane_ParamLimits

0x708b,	// (0x00092226) grid_gallery2_pane

0x70a5,	// (0x00092240) scroll_pane_cp029_ParamLimits

0x70a5,	// (0x00092240) scroll_pane_cp029

0x70b6,	// (0x00092251) cell_gallery2_pane_ParamLimits

0x70b6,	// (0x00092251) cell_gallery2_pane

0xd94a,	// (0x00098ae5) cell_gallery2_pane_g2

0x7115,	// (0x000922b0) cell_gallery2_pane_g3

0xd952,	// (0x00098aed) cell_gallery2_pane_g4

0xd95a,	// (0x00098af5) cell_gallery2_pane_g5

0xaa6e,	// (0x00095c09) grid_highlight_pane_cp10

0x673a,	// (0x000918d5) popup_vitu2_match_list_window_ParamLimits

0x674f,	// (0x000918ea) popup_vitu2_query_window_ParamLimits

0x674f,	// (0x000918ea) popup_vitu2_query_window

0x97f3,	// (0x0009498e) bg_vitu2_candi_button_pane

0xd92f,	// (0x00098aca) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd938,	// (0x00098ad3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd941,	// (0x00098adc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0603,	// (0x0008b79e) bg_button_pane_cp015

0x711d,	// (0x000922b8) bg_button_pane_cp016

0x7130,	// (0x000922cb) bg_button_pane_cp017

0xc914,	// (0x00097aaf) bg_popup_sub_pane_cp22

0xd962,	// (0x00098afd) popup_vitu2_query_window_g1

0x0638,	// (0x0008b7d3) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0009abb3) popup_vitu2_query_window_g

0x0657,	// (0x0008b7f2) popup_vitu2_query_window_t1_ParamLimits

0x0657,	// (0x0008b7f2) popup_vitu2_query_window_t1

0x068c,	// (0x0008b827) popup_vitu2_query_window_t2_ParamLimits

0x068c,	// (0x0008b827) popup_vitu2_query_window_t2

0x069e,	// (0x0008b839) popup_vitu2_query_window_t3_ParamLimits

0x069e,	// (0x0008b839) popup_vitu2_query_window_t3

0x7154,	// (0x000922ef) popup_vitu2_query_window_t4_ParamLimits

0x7154,	// (0x000922ef) popup_vitu2_query_window_t4

0x7175,	// (0x00092310) popup_vitu2_query_window_t5_ParamLimits

0x7175,	// (0x00092310) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0009abba) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0009abba) popup_vitu2_query_window_t

0xd7db,	// (0x00098976) main_cset_text_pane

0x6b90,	// (0x00091d2b) aid_area_touch_slider_ParamLimits

0x6bac,	// (0x00091d47) cset_slider_pane_ParamLimits

0x6bd6,	// (0x00091d71) main_cset_slider_pane_g1_ParamLimits

0x6beb,	// (0x00091d86) main_cset_slider_pane_g2_ParamLimits

0xd7fc,	// (0x00098997) main_cset_slider_pane_g3_ParamLimits

0xd7fc,	// (0x00098997) main_cset_slider_pane_g3

0x6c00,	// (0x00091d9b) main_cset_slider_pane_g4_ParamLimits

0x6c00,	// (0x00091d9b) main_cset_slider_pane_g4

0x6c0f,	// (0x00091daa) main_cset_slider_pane_g5_ParamLimits

0x6c0f,	// (0x00091daa) main_cset_slider_pane_g5

0x6c1b,	// (0x00091db6) main_cset_slider_pane_g6_ParamLimits

0x6c1b,	// (0x00091db6) main_cset_slider_pane_g6

0xf972,	// (0x0009ab0d) main_cset_slider_pane_g_ParamLimits

0xd844,	// (0x000989df) main_cset_slider_pane_t1_ParamLimits

0x6c8f,	// (0x00091e2a) main_cset_slider_pane_t2_ParamLimits

0x6ca9,	// (0x00091e44) main_cset_slider_pane_t3_ParamLimits

0x6cc3,	// (0x00091e5e) main_cset_slider_pane_t4_ParamLimits

0x6cdd,	// (0x00091e78) main_cset_slider_pane_t5_ParamLimits

0x6cf7,	// (0x00091e92) main_cset_slider_pane_t6_ParamLimits

0x6d0c,	// (0x00091ea7) main_cset_slider_pane_t7_ParamLimits

0x6d36,	// (0x00091ed1) main_cset_slider_pane_t8_ParamLimits

0x6d36,	// (0x00091ed1) main_cset_slider_pane_t8

0x6d5e,	// (0x00091ef9) main_cset_slider_pane_t9_ParamLimits

0x6d5e,	// (0x00091ef9) main_cset_slider_pane_t9

0x6d86,	// (0x00091f21) main_cset_slider_pane_t10_ParamLimits

0x6d86,	// (0x00091f21) main_cset_slider_pane_t10

0x6dae,	// (0x00091f49) main_cset_slider_pane_t11_ParamLimits

0x6dae,	// (0x00091f49) main_cset_slider_pane_t11

0x6dd6,	// (0x00091f71) main_cset_slider_pane_t12_ParamLimits

0x6dd6,	// (0x00091f71) main_cset_slider_pane_t12

0x6df3,	// (0x00091f8e) main_cset_slider_pane_t13_ParamLimits

0x6df3,	// (0x00091f8e) main_cset_slider_pane_t13

0xf997,	// (0x0009ab32) main_cset_slider_pane_t_ParamLimits

0x97f3,	// (0x0009498e) bg_popup_sub_pane_cp011

0xd96e,	// (0x00098b09) main_cset_text_pane_g1

0xd976,	// (0x00098b11) main_cset_text_pane_t1

0xd984,	// (0x00098b1f) main_cset_text_pane_t2

0xd992,	// (0x00098b2d) main_cset_text_pane_t3

0xd9a0,	// (0x00098b3b) main_cset_text_pane_t4

0xd9ae,	// (0x00098b49) main_cset_text_pane_t5

0xd9bc,	// (0x00098b57) main_cset_text_pane_t6

0xd9ca,	// (0x00098b65) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0009abc9) main_cset_text_pane_t

0x97f3,	// (0x0009498e) main_cam4_burst_pane

0x97f3,	// (0x0009498e) main_cam5_pane

0x6acf,	// (0x00091c6a) bg_button_pane_cp019

0x6ad8,	// (0x00091c73) bg_button_pane_cp020

0xd808,	// (0x000989a3) main_cset_slider_pane_g7_ParamLimits

0xd808,	// (0x000989a3) main_cset_slider_pane_g7

0xd814,	// (0x000989af) main_cset_slider_pane_g8_ParamLimits

0xd814,	// (0x000989af) main_cset_slider_pane_g8

0x6c2f,	// (0x00091dca) main_cset_slider_pane_g9_ParamLimits

0x6c2f,	// (0x00091dca) main_cset_slider_pane_g9

0x6c3b,	// (0x00091dd6) main_cset_slider_pane_g10_ParamLimits

0x6c3b,	// (0x00091dd6) main_cset_slider_pane_g10

0x6c47,	// (0x00091de2) main_cset_slider_pane_g11_ParamLimits

0x6c47,	// (0x00091de2) main_cset_slider_pane_g11

0x6c53,	// (0x00091dee) main_cset_slider_pane_g12_ParamLimits

0x6c53,	// (0x00091dee) main_cset_slider_pane_g12

0x6c5f,	// (0x00091dfa) main_cset_slider_pane_g13_ParamLimits

0x6c5f,	// (0x00091dfa) main_cset_slider_pane_g13

0x6c6b,	// (0x00091e06) main_cset_slider_pane_g14_ParamLimits

0x6c6b,	// (0x00091e06) main_cset_slider_pane_g14

0x6c77,	// (0x00091e12) main_cset_slider_pane_g15_ParamLimits

0x6c77,	// (0x00091e12) main_cset_slider_pane_g15

0xd872,	// (0x00098a0d) main_cset_slider_pane_t14_ParamLimits

0xd872,	// (0x00098a0d) main_cset_slider_pane_t14

0xd8ab,	// (0x00098a46) main_cset_slider_pane_t15_ParamLimits

0xd8ab,	// (0x00098a46) main_cset_slider_pane_t15

0x7196,	// (0x00092331) aid_cam4_burst_size_cell_ParamLimits

0x7196,	// (0x00092331) aid_cam4_burst_size_cell

0x71b6,	// (0x00092351) grid_cam4_burst_pane_ParamLimits

0x71b6,	// (0x00092351) grid_cam4_burst_pane

0x71ee,	// (0x00092389) linegrid_cam4_burst_pane_ParamLimits

0x71ee,	// (0x00092389) linegrid_cam4_burst_pane

0xd9d8,	// (0x00098b73) scroll_pane_cp30_ParamLimits

0xd9d8,	// (0x00098b73) scroll_pane_cp30

0x7212,	// (0x000923ad) cell_cam4_burst_pane_ParamLimits

0x7212,	// (0x000923ad) cell_cam4_burst_pane

0xd9e4,	// (0x00098b7f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9e4,	// (0x00098b7f) linegrid_cam4_burst_pane_g1

0x725f,	// (0x000923fa) linegrid_cam4_burst_pane_g2_ParamLimits

0x725f,	// (0x000923fa) linegrid_cam4_burst_pane_g2

0xd9f1,	// (0x00098b8c) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9f1,	// (0x00098b8c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0009abd8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0009abd8) linegrid_cam4_burst_pane_g

0x7270,	// (0x0009240b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7270,	// (0x0009240b) linegrid_cam4_burst_pane_g3_copy1

0xd9fe,	// (0x00098b99) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9fe,	// (0x00098b99) linegrid_cam4_burst_pane_g4

0x728a,	// (0x00092425) linegrid_cam4_burst_pane_g5_ParamLimits

0x728a,	// (0x00092425) linegrid_cam4_burst_pane_g5

0x729b,	// (0x00092436) linegrid_cam4_burst_pane_g6_ParamLimits

0x729b,	// (0x00092436) linegrid_cam4_burst_pane_g6

0xda0b,	// (0x00098ba6) linegrid_cam4_burst_pane_g7_ParamLimits

0xda0b,	// (0x00098ba6) linegrid_cam4_burst_pane_g7

0x72b2,	// (0x0009244d) cell_cam4_burst_pane_g1

0xda24,	// (0x00098bbf) main_cam5_pane_t1_ParamLimits

0xda24,	// (0x00098bbf) main_cam5_pane_t1

0xda36,	// (0x00098bd1) main_cam5_pane_t2_ParamLimits

0xda36,	// (0x00098bd1) main_cam5_pane_t2

0xda48,	// (0x00098be3) main_cam5_pane_t3_ParamLimits

0xda48,	// (0x00098be3) main_cam5_pane_t3

0xda5a,	// (0x00098bf5) main_cam5_pane_t4_ParamLimits

0xda5a,	// (0x00098bf5) main_cam5_pane_t4

0xda72,	// (0x00098c0d) main_cam5_pane_t5_ParamLimits

0xda72,	// (0x00098c0d) main_cam5_pane_t5

0xda86,	// (0x00098c21) main_cam5_pane_t6_ParamLimits

0xda86,	// (0x00098c21) main_cam5_pane_t6

0xda9a,	// (0x00098c35) main_cam5_pane_t7_ParamLimits

0xda9a,	// (0x00098c35) main_cam5_pane_t7

0xdaac,	// (0x00098c47) main_cam5_pane_t8_ParamLimits

0xdaac,	// (0x00098c47) main_cam5_pane_t8

0xdac8,	// (0x00098c63) main_cam5_pane_t9_ParamLimits

0xdac8,	// (0x00098c63) main_cam5_pane_t9

0xdada,	// (0x00098c75) main_cam5_pane_t10_ParamLimits

0xdada,	// (0x00098c75) main_cam5_pane_t10

0xdaec,	// (0x00098c87) main_cam5_pane_t11_ParamLimits

0xdaec,	// (0x00098c87) main_cam5_pane_t11

0xdafe,	// (0x00098c99) main_cam5_pane_t12_ParamLimits

0xdafe,	// (0x00098c99) main_cam5_pane_t12

0xdb13,	// (0x00098cae) main_cam5_pane_t13_ParamLimits

0xdb13,	// (0x00098cae) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0009abe4) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0009abe4) main_cam5_pane_t

0x1241,	// (0x0008c3dc) popup_scut_keymap_window_ParamLimits

0x1241,	// (0x0008c3dc) popup_scut_keymap_window

0x72c5,	// (0x00092460) aid_size_cell_brow_shortcut

0xaa6e,	// (0x00095c09) bg_popup_window_pane_cp010

0x72d1,	// (0x0009246c) grid_scut_pane

0x72dd,	// (0x00092478) cell_scut_pane_ParamLimits

0x72dd,	// (0x00092478) cell_scut_pane

0x72f4,	// (0x0009248f) cell_scut_pane_g1

0xdb30,	// (0x00098ccb) cell_scut_pane_t1

0xdb3f,	// (0x00098cda) cell_scut_pane_t2

0x72fd,	// (0x00092498) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x0009abff) cell_scut_pane_t

0x511b,	// (0x000902b6) main_mup3_pane_g8_ParamLimits

0x511b,	// (0x000902b6) main_mup3_pane_g8

0x6633,	// (0x000917ce) area_vitu2_query_pane_ParamLimits

0x6633,	// (0x000917ce) area_vitu2_query_pane

0x0617,	// (0x0008b7b2) input_focus_pane_cp08

0xdb4e,	// (0x00098ce9) area_vitu2_query_pane_g1

0x071c,	// (0x0008b8b7) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0009ac06) area_vitu2_query_pane_g

0x730b,	// (0x000924a6) area_vitu2_query_pane_t1_ParamLimits

0x730b,	// (0x000924a6) area_vitu2_query_pane_t1

0x731f,	// (0x000924ba) area_vitu2_query_pane_t2_ParamLimits

0x731f,	// (0x000924ba) area_vitu2_query_pane_t2

0x072d,	// (0x0008b8c8) area_vitu2_query_pane_t3_ParamLimits

0x072d,	// (0x0008b8c8) area_vitu2_query_pane_t3

0x7333,	// (0x000924ce) area_vitu2_query_pane_t4_ParamLimits

0x7333,	// (0x000924ce) area_vitu2_query_pane_t4

0x735b,	// (0x000924f6) area_vitu2_query_pane_t5_ParamLimits

0x735b,	// (0x000924f6) area_vitu2_query_pane_t5

0x7383,	// (0x0009251e) area_vitu2_query_pane_t6_ParamLimits

0x7383,	// (0x0009251e) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x0009ac0b) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x0009ac0b) area_vitu2_query_pane_t

0x73cf,	// (0x0009256a) bg_button_pane_cp018

0x73dd,	// (0x00092578) bg_button_pane_cp021

0x0755,	// (0x0008b8f0) bg_button_pane_cp022

0x0766,	// (0x0008b901) input_focus_pane_cp09

0xb310,	// (0x000964ab) aid_size_touch_mv_arrow_left

0xb33b,	// (0x000964d6) aid_size_touch_mv_arrow_right

0xd820,	// (0x000989bb) main_cset_slider_pane_g16_ParamLimits

0xd820,	// (0x000989bb) main_cset_slider_pane_g16

0xd82c,	// (0x000989c7) main_cset_slider_pane_g17_ParamLimits

0xd82c,	// (0x000989c7) main_cset_slider_pane_g17

0x72b2,	// (0x0009244d) cell_cam4_burst_pane_g1_ParamLimits

0x97f3,	// (0x0009498e) compa_mode_pane

0x6e69,	// (0x00092004) popup_vtel_slider_window_g3_ParamLimits

0x6e69,	// (0x00092004) popup_vtel_slider_window_g3

0x6e80,	// (0x0009201b) popup_vtel_slider_window_g4_ParamLimits

0x6e80,	// (0x0009201b) popup_vtel_slider_window_g4

0x6e97,	// (0x00092032) popup_vtel_slider_window_t1_ParamLimits

0x6e97,	// (0x00092032) popup_vtel_slider_window_t1

0x97f3,	// (0x0009498e) main_cl_pane

0x9d56,	// (0x00094ef1) popup_imed_adjust2_window_ParamLimits

0xc914,	// (0x00097aaf) bg_tb_trans_pane_cp05_ParamLimits

0xd221,	// (0x000983bc) popup_imed_adjust2_window_g1_ParamLimits

0xd230,	// (0x000983cb) popup_imed_adjust2_window_g2_ParamLimits

0xd230,	// (0x000983cb) popup_imed_adjust2_window_g2

0xd23c,	// (0x000983d7) popup_imed_adjust2_window_g3_ParamLimits

0xd23c,	// (0x000983d7) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0009a972) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0009a972) popup_imed_adjust2_window_g

0xd248,	// (0x000983e3) popup_imed_adjust2_window_t1_ParamLimits

0xd260,	// (0x000983fb) slider_imed_adjust_pane_ParamLimits

0xd274,	// (0x0009840f) slider_imed_adjust_pane_g1_ParamLimits

0xd284,	// (0x0009841f) slider_imed_adjust_pane_g2_ParamLimits

0xd294,	// (0x0009842f) slider_imed_adjust_pane_g3_ParamLimits

0xd2a5,	// (0x00098440) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0009a979) slider_imed_adjust_pane_g_ParamLimits

0x63bc,	// (0x00091557) aid_touch_area_cam4_ParamLimits

0x63bc,	// (0x00091557) aid_touch_area_cam4

0xa18c,	// (0x00095327) battery_pane_cp01

0x648b,	// (0x00091626) main_camera4_pane_g6_ParamLimits

0x648b,	// (0x00091626) main_camera4_pane_g6

0x64b5,	// (0x00091650) main_camera4_pane_t2_ParamLimits

0x64b5,	// (0x00091650) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0009aa80) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0009aa80) main_camera4_pane_t

0x64ea,	// (0x00091685) aid_touch_area_vid4_ParamLimits

0x64ea,	// (0x00091685) aid_touch_area_vid4

0x653e,	// (0x000916d9) main_video4_pane_g5_ParamLimits

0x653e,	// (0x000916d9) main_video4_pane_g5

0x6563,	// (0x000916fe) vid4_progress_pane_ParamLimits

0x6563,	// (0x000916fe) vid4_progress_pane

0xd838,	// (0x000989d3) main_cset_slider_pane_g18_ParamLimits

0xd838,	// (0x000989d3) main_cset_slider_pane_g18

0xda18,	// (0x00098bb3) cell_cam4_burst_pane_g2_ParamLimits

0xda18,	// (0x00098bb3) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x0009abdf) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x0009abdf) cell_cam4_burst_pane_g

0xa882,	// (0x00095a1d) bg_cl_pane_ParamLimits

0xa882,	// (0x00095a1d) bg_cl_pane

0x73e9,	// (0x00092584) cl_header_pane_ParamLimits

0x73e9,	// (0x00092584) cl_header_pane

0x73fd,	// (0x00092598) cl_listscroll_pane_ParamLimits

0x73fd,	// (0x00092598) cl_listscroll_pane

0xdb5a,	// (0x00098cf5) bg_cl_pane_g1

0xdb62,	// (0x00098cfd) bg_cl_pane_g2

0xdb6a,	// (0x00098d05) bg_cl_pane_g3

0xdb72,	// (0x00098d0d) bg_cl_pane_g4

0xdb7a,	// (0x00098d15) bg_cl_pane_g5

0xdb82,	// (0x00098d1d) bg_cl_pane_g6

0xdb8a,	// (0x00098d25) bg_cl_pane_g7

0xdb92,	// (0x00098d2d) bg_cl_pane_g8

0xdb9a,	// (0x00098d35) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x0009ac1a) bg_cl_pane_g

0x740d,	// (0x000925a8) aid_height_cl_leading_ParamLimits

0x740d,	// (0x000925a8) aid_height_cl_leading

0x7419,	// (0x000925b4) aid_height_cl_text_ParamLimits

0x7419,	// (0x000925b4) aid_height_cl_text

0xa48d,	// (0x00095628) bg_cl_header_pane_ParamLimits

0xa48d,	// (0x00095628) bg_cl_header_pane

0x7438,	// (0x000925d3) cl_header_pane_g1_ParamLimits

0x7438,	// (0x000925d3) cl_header_pane_g1

0x744e,	// (0x000925e9) cl_header_pane_t1_ParamLimits

0x744e,	// (0x000925e9) cl_header_pane_t1

0xdba2,	// (0x00098d3d) cl_list_pane

0xd7f3,	// (0x0009898e) hc_scroll_pane_cp01

0xaca7,	// (0x00095e42) bg_cl_header_pane_g1

0xd6d9,	// (0x00098874) bg_cl_header_pane_g2

0xacc7,	// (0x00095e62) bg_cl_header_pane_g3

0xd6e9,	// (0x00098884) bg_cl_header_pane_g4

0xd6e1,	// (0x0009887c) bg_cl_header_pane_g5

0xd927,	// (0x00098ac2) bg_cl_header_pane_g6

0xd701,	// (0x0009889c) bg_cl_header_pane_g7

0xd709,	// (0x000988a4) bg_cl_header_pane_g8

0xd6f9,	// (0x00098894) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x0009ac2d) bg_cl_header_pane_g

0x7467,	// (0x00092602) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7467,	// (0x00092602) hc_cl_list_double_graphic_heading_pane

0x7478,	// (0x00092613) hc_cl_list_single_graphic_pane_ParamLimits

0x7478,	// (0x00092613) hc_cl_list_single_graphic_pane

0x7491,	// (0x0009262c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7491,	// (0x0009262c) hc_cl_list_single_graphic_pane_g1

0x749d,	// (0x00092638) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x749d,	// (0x00092638) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x0009ac40) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x0009ac40) hc_cl_list_single_graphic_pane_g

0x74b1,	// (0x0009264c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x74b1,	// (0x0009264c) hc_cl_list_single_graphic_pane_t1

0x7491,	// (0x0009262c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7491,	// (0x0009262c) hc_cl_list_double_graphic_heading_pane_g1

0x74c6,	// (0x00092661) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x74c6,	// (0x00092661) hc_cl_list_double_graphic_heading_pane_g2

0x74da,	// (0x00092675) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x74da,	// (0x00092675) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x0009ac45) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x0009ac45) hc_cl_list_double_graphic_heading_pane_g

0x74ee,	// (0x00092689) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74ee,	// (0x00092689) hc_cl_list_double_graphic_heading_pane_t1

0x7503,	// (0x0009269e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7503,	// (0x0009269e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0009ac4c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0009ac4c) hc_cl_list_double_graphic_heading_pane_t

0xa2e5,	// (0x00095480) vid4_progress_pane_g1

0xa2f5,	// (0x00095490) vid4_progress_pane_g2

0x7518,	// (0x000926b3) vid4_progress_pane_g3

0xa305,	// (0x000954a0) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x0009ac51) vid4_progress_pane_g

0x752a,	// (0x000926c5) vid4_progress_pane_t1

0xa31d,	// (0x000954b8) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0009ac5c) vid4_progress_pane_t

0x7540,	// (0x000926db) wait_bar_pane_cp07

0xcb0f,	// (0x00097caa) blid_firmament_pane_ParamLimits

0xcb52,	// (0x00097ced) popup_blid_sat_info2_window_g1

0xcb76,	// (0x00097d11) popup_blid_sat_info2_window_t3

0xcb84,	// (0x00097d1f) popup_blid_sat_info2_window_t4

0xcb92,	// (0x00097d2d) popup_blid_sat_info2_window_t5

0xcba0,	// (0x00097d3b) popup_blid_sat_info2_window_t6

0xcbb0,	// (0x00097d4b) popup_blid_sat_info2_window_t7

0xcbbe,	// (0x00097d59) popup_blid_sat_info2_window_t8

0xcbcc,	// (0x00097d67) popup_blid_sat_info2_window_t9

0xcbda,	// (0x00097d75) popup_blid_sat_info2_window_t10

0xcc9c,	// (0x00097e37) aid_firma_cardinal_ParamLimits

0xccb0,	// (0x00097e4b) blid_firmament_pane_t1_ParamLimits

0xccc7,	// (0x00097e62) blid_firmament_pane_t2_ParamLimits

0xccde,	// (0x00097e79) blid_firmament_pane_t3_ParamLimits

0xccf5,	// (0x00097e90) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x0009a866) blid_firmament_pane_t_ParamLimits

0xcd0c,	// (0x00097ea7) blid_sat_info_pane_ParamLimits

0xa48d,	// (0x00095628) main_cam_set_pane_ParamLimits

0x59d6,	// (0x00090b71) aid_size_cell_colour_35_ParamLimits

0x59f6,	// (0x00090b91) aid_size_cell_colour_112_ParamLimits

0x5a16,	// (0x00090bb1) aid_size_cell_effect_ParamLimits

0xc914,	// (0x00097aaf) bg_tb_trans_pane_cp02_ParamLimits

0xaf0f,	// (0x000960aa) heading_imed_pane_ParamLimits

0x5a36,	// (0x00090bd1) listscroll_imed_pane_ParamLimits

0xbf00,	// (0x0009709b) popup_call2_audio_first_window_g5_ParamLimits

0xbf00,	// (0x0009709b) popup_call2_audio_first_window_g5

0x5fd4,	// (0x0009116f) aid_size_touch_image3_arrow_left_ParamLimits

0x5fd4,	// (0x0009116f) aid_size_touch_image3_arrow_left

0x6000,	// (0x0009119b) aid_size_touch_image3_arrow_right_ParamLimits

0x6000,	// (0x0009119b) aid_size_touch_image3_arrow_right

0xa332,	// (0x000954cd) vid4_progress_pane_t3

0x5d4b,	// (0x00090ee6) main_hwr_training_symbol_option_pane_ParamLimits

0x5d4b,	// (0x00090ee6) main_hwr_training_symbol_option_pane

0xd523,	// (0x000986be) popup_hwr_training_preview_window_ParamLimits

0xd523,	// (0x000986be) popup_hwr_training_preview_window

0x5d6b,	// (0x00090f06) hwr_training_navi_pane_g5_ParamLimits

0x5d6b,	// (0x00090f06) hwr_training_navi_pane_g5

0xd6c7,	// (0x00098862) popup_char_count_window

0xa48d,	// (0x00095628) bg_popup_sub_pane_cp20_ParamLimits

0x6fa5,	// (0x00092140) list_vitu2_match_list_pane_ParamLimits

0x6fb4,	// (0x0009214f) vitu2_page_scroll_pane_ParamLimits

0x6fb4,	// (0x0009214f) vitu2_page_scroll_pane

0xdbab,	// (0x00098d46) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbab,	// (0x00098d46) list_single_hwr_training_symbol_option_pane

0xdbbe,	// (0x00098d59) list_single_hwr_training_symbol_option_pane_g1

0xdbc6,	// (0x00098d61) list_single_hwr_training_symbol_option_pane_t1

0xdbd4,	// (0x00098d6f) bg_button_pane_cp023

0xdbdd,	// (0x00098d78) bg_button_pane_cp024

0x757d,	// (0x00092718) vitu2_page_scroll_pane_g1

0x7585,	// (0x00092720) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x0009ac63) vitu2_page_scroll_pane_g

0x758d,	// (0x00092728) vitu2_page_scroll_pane_t1

0xa903,	// (0x00095a9e) popup_char_count_window_g1

0xdc10,	// (0x00098dab) popup_char_count_window_g2

0xd50e,	// (0x000986a9) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0009ac68) popup_char_count_window_g

0xdc19,	// (0x00098db4) popup_char_count_window_t1

0x97f3,	// (0x0009498e) main_vded2_pane

0xd20d,	// (0x000983a8) aid_size_cell_imed_line

0xd217,	// (0x000983b2) grid_imed_line_width_pane

0xa23c,	// (0x000953d7) vid4_indicators_pane_g4

0xdc27,	// (0x00098dc2) cell_imed_line_width_pane_ParamLimits

0xdc27,	// (0x00098dc2) cell_imed_line_width_pane

0xdc3b,	// (0x00098dd6) cell_imed_line_width_pane_g1

0xdc44,	// (0x00098ddf) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x0009ac6f) cell_imed_line_width_pane_g

0x759c,	// (0x00092737) main_vded2_pane_g1_ParamLimits

0x759c,	// (0x00092737) main_vded2_pane_g1

0x75b2,	// (0x0009274d) main_vded2_pane_g2_ParamLimits

0x75b2,	// (0x0009274d) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0009ac74) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0009ac74) main_vded2_pane_g

0x75c4,	// (0x0009275f) vded2_slider_pane_ParamLimits

0x75c4,	// (0x0009275f) vded2_slider_pane

0x75d4,	// (0x0009276f) aid_size_touch_vded2_end

0x75de,	// (0x00092779) aid_size_touch_vded2_playhead

0xdc4c,	// (0x00098de7) aid_size_touch_vded2_start

0xdc54,	// (0x00098def) vded2_slider_bg_pane

0xdc5d,	// (0x00098df8) vded2_slider_pane_g1

0xdc66,	// (0x00098e01) vded2_slider_pane_g2

0x75e8,	// (0x00092783) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0009ac79) vded2_slider_pane_g

0xdc6e,	// (0x00098e09) vded2_slider_bg_pane_g1

0xdc77,	// (0x00098e12) vded2_slider_bg_pane_g2

0xdc80,	// (0x00098e1b) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x0009ac80) vded2_slider_bg_pane_g

0x3726,	// (0x0008e8c1) aid_postcard_touch_down_pane_ParamLimits

0x3726,	// (0x0008e8c1) aid_postcard_touch_down_pane

0x373c,	// (0x0008e8d7) aid_postcard_touch_up_pane_ParamLimits

0x373c,	// (0x0008e8d7) aid_postcard_touch_up_pane

0x97f3,	// (0x0009498e) main_blid2_pane

0x9d3c,	// (0x00094ed7) popup_blid2_search_window

0x97f3,	// (0x0009498e) blid2_gps_pane

0x97f3,	// (0x0009498e) blid2_navig_pane

0x97f3,	// (0x0009498e) blid2_search_pane

0x97f3,	// (0x0009498e) blid2_tripm_pane

0x75f3,	// (0x0009278e) blid2_search_pane_g1_ParamLimits

0x75f3,	// (0x0009278e) blid2_search_pane_g1

0x760b,	// (0x000927a6) blid2_search_pane_t1_ParamLimits

0x760b,	// (0x000927a6) blid2_search_pane_t1

0x761d,	// (0x000927b8) aid_size_cell_blid2_gps_ParamLimits

0x761d,	// (0x000927b8) aid_size_cell_blid2_gps

0x7635,	// (0x000927d0) blid2_gps_pane_g1_ParamLimits

0x7635,	// (0x000927d0) blid2_gps_pane_g1

0x7649,	// (0x000927e4) grid_blid2_satellite_pane_ParamLimits

0x7649,	// (0x000927e4) grid_blid2_satellite_pane

0x7663,	// (0x000927fe) blid2_navig_pane_g1_ParamLimits

0x7663,	// (0x000927fe) blid2_navig_pane_g1

0x766f,	// (0x0009280a) blid2_navig_pane_t1_ParamLimits

0x766f,	// (0x0009280a) blid2_navig_pane_t1

0x768a,	// (0x00092825) blid2_navig_pane_t2_ParamLimits

0x768a,	// (0x00092825) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0009ac87) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0009ac87) blid2_navig_pane_t

0x76a5,	// (0x00092840) blid2_navig_ring_pane_ParamLimits

0x76a5,	// (0x00092840) blid2_navig_ring_pane

0x76be,	// (0x00092859) blid2_speed_pane_ParamLimits

0x76be,	// (0x00092859) blid2_speed_pane

0x76ca,	// (0x00092865) blid2_tripm_pane_g1_ParamLimits

0x76ca,	// (0x00092865) blid2_tripm_pane_g1

0x76e5,	// (0x00092880) blid2_tripm_pane_g2_ParamLimits

0x76e5,	// (0x00092880) blid2_tripm_pane_g2

0x76f9,	// (0x00092894) blid2_tripm_pane_g3_ParamLimits

0x76f9,	// (0x00092894) blid2_tripm_pane_g3

0x770d,	// (0x000928a8) blid2_tripm_pane_g4_ParamLimits

0x770d,	// (0x000928a8) blid2_tripm_pane_g4

0x7721,	// (0x000928bc) blid2_tripm_pane_g5_ParamLimits

0x7721,	// (0x000928bc) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0009ac8c) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0009ac8c) blid2_tripm_pane_g

0x7747,	// (0x000928e2) blid2_tripm_pane_t1_ParamLimits

0x7747,	// (0x000928e2) blid2_tripm_pane_t1

0x7762,	// (0x000928fd) blid2_tripm_pane_t2_ParamLimits

0x7762,	// (0x000928fd) blid2_tripm_pane_t2

0x777b,	// (0x00092916) blid2_tripm_pane_t3_ParamLimits

0x777b,	// (0x00092916) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0009ac99) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0009ac99) blid2_tripm_pane_t

0x77c2,	// (0x0009295d) cell_blid2_satellite_pane_ParamLimits

0x77c2,	// (0x0009295d) cell_blid2_satellite_pane

0x77e0,	// (0x0009297b) cell_blid2_satellite_pane_g1

0xdc89,	// (0x00098e24) cell_blid2_satellite_pane_t1

0xcd1c,	// (0x00097eb7) blid2_speed_pane_g1

0xdc97,	// (0x00098e32) blid2_speed_pane_t1

0xdca5,	// (0x00098e40) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0009aca2) blid2_speed_pane_t

0xcd1c,	// (0x00097eb7) blid2_navig_ring_pane_g1

0x77e9,	// (0x00092984) blid2_navig_ring_pane_g2

0x77f1,	// (0x0009298c) blid2_navig_ring_pane_g3

0x77f9,	// (0x00092994) blid2_navig_ring_pane_g4

0x7801,	// (0x0009299c) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0009aca7) blid2_navig_ring_pane_g

0x97f3,	// (0x0009498e) bg_popup_window_pane_cp011

0xdcb3,	// (0x00098e4e) popup_blid2_search_window_g1

0xdcbb,	// (0x00098e56) popup_blid2_search_window_t1

0xdcc9,	// (0x00098e64) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0009acb2) popup_blid2_search_window_t

0xabb6,	// (0x00095d51) main_browser_pane_g1

0xa882,	// (0x00095a1d) main_browser_pane_ParamLimits

0xa48d,	// (0x00095628) bg_button_pane_cp011_ParamLimits

0x6868,	// (0x00091a03) cell_vitu2_function_pane_g1_ParamLimits

0xc914,	// (0x00097aaf) bg_popup_sub_pane_cp22_ParamLimits

0x0617,	// (0x0008b7b2) input_focus_pane_cp08_ParamLimits

0x7143,	// (0x000922de) popup_vitu2_query_button_pane_ParamLimits

0x7143,	// (0x000922de) popup_vitu2_query_button_pane

0x062e,	// (0x0008b7c9) popup_vitu2_query_input_button_pane

0xd962,	// (0x00098afd) popup_vitu2_query_window_g1_ParamLimits

0x0638,	// (0x0008b7d3) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0009abb3) popup_vitu2_query_window_g_ParamLimits

0x97f3,	// (0x0009498e) bg_button_pane_cp026

0x7809,	// (0x000929a4) popup_vitu2_query_input_button_pane_g1

0x97f3,	// (0x0009498e) bg_button_pane_cp025

0xdcd7,	// (0x00098e72) popup_vitu2_query_button_pane_t1

0x4dbd,	// (0x0008ff58) main_mp3_pane_t6

0x4dcb,	// (0x0008ff66) popup_slider_window_cp01

0xa1a8,	// (0x00095343) cam4_battery_pane

0xa1fb,	// (0x00095396) cam4_battery_pane_cp02

0xa2dd,	// (0x00095478) cam4_battery_pane_cp01

0xa2dd,	// (0x00095478) cam4_battery_pane_cp03

0xcd1c,	// (0x00097eb7) cam4_battery_pane_g1

0xdce5,	// (0x00098e80) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0009acb7) cam4_battery_pane_g

0xcbe8,	// (0x00097d83) popup_blid_sat_info2_window_t11

0xb310,	// (0x000964ab) aid_size_touch_mv_arrow_left_ParamLimits

0xb33b,	// (0x000964d6) aid_size_touch_mv_arrow_right_ParamLimits

0xb399,	// (0x00096534) navi_pane_g1_ParamLimits

0xb3a5,	// (0x00096540) navi_pane_g2_ParamLimits

0xb3d3,	// (0x0009656e) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0009a565) navi_pane_g_ParamLimits

0x31a7,	// (0x0008e342) navi_pane_mv_t1_ParamLimits

0x5a42,	// (0x00090bdd) grid_imed_effect_pane_ParamLimits

0x20b6,	// (0x0008d251) aid_placing_vt_slider_lsc

0xab05,	// (0x00095ca0) aid_placing_vt_slider_prt

0xa48d,	// (0x00095628) bg_tb_trans_pane_cp01_ParamLimits

0xce81,	// (0x0009801c) popup_image_details_window_g1_ParamLimits

0xce94,	// (0x0009802f) popup_image_details_window_g2_ParamLimits

0xcea9,	// (0x00098044) popup_image_details_window_g3_ParamLimits

0xcea9,	// (0x00098044) popup_image_details_window_g3

0xf710,	// (0x0009a8ab) popup_image_details_window_g_ParamLimits

0xcebd,	// (0x00098058) popup_image_details_window_t1_ParamLimits

0xcecf,	// (0x0009806a) popup_image_details_window_t2_ParamLimits

0xcee8,	// (0x00098083) popup_image_details_window_t3_ParamLimits

0xcefc,	// (0x00098097) popup_image_details_window_t4_ParamLimits

0xcf17,	// (0x000980b2) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0009a8b2) popup_image_details_window_t_ParamLimits

0x7425,	// (0x000925c0) cl_header_name_pane_ParamLimits

0x7425,	// (0x000925c0) cl_header_name_pane

0x7811,	// (0x000929ac) cl_header_name_pane_t1_ParamLimits

0x7811,	// (0x000929ac) cl_header_name_pane_t1

0x7832,	// (0x000929cd) cl_header_name_pane_t2_ParamLimits

0x7832,	// (0x000929cd) cl_header_name_pane_t2

0x7874,	// (0x00092a0f) cl_header_name_pane_t3_ParamLimits

0x7874,	// (0x00092a0f) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0009acbc) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0009acbc) cl_header_name_pane_t

0xb462,	// (0x000965fd) navi_pane_mv_g2_ParamLimits

0xd6a1,	// (0x0009883c) field_vitu2_entry_pane_g1_ParamLimits

0xd6ad,	// (0x00098848) field_vitu2_entry_pane_g2_ParamLimits

0xd6b9,	// (0x00098854) field_vitu2_entry_pane_g3_ParamLimits

0xd6b9,	// (0x00098854) field_vitu2_entry_pane_g3

0xf917,	// (0x0009aab2) field_vitu2_entry_pane_g_ParamLimits

0xa26f,	// (0x0009540a) cell_vitu2_itu_pane_g1_ParamLimits

0x67fc,	// (0x00091997) cell_vitu2_itu_pane_g2_ParamLimits

0x67fc,	// (0x00091997) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0009aabe) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0009aabe) cell_vitu2_itu_pane_g

0xa48d,	// (0x00095628) bg_vkb2_func_pane_cp05_ParamLimits

0xa48d,	// (0x00095628) bg_vkb2_func_pane_cp05

0xa48d,	// (0x00095628) bg_vkb2_func_pane_cp03

0xa48d,	// (0x00095628) bg_vkb2_func_pane_cp04

0xa48d,	// (0x00095628) bg_vkb2_func_pane_cp10_ParamLimits

0xa48d,	// (0x00095628) bg_vkb2_func_pane_cp10

0x0755,	// (0x0008b8f0) bg_vkb2_func_pane_cp08

0x73cf,	// (0x0009256a) bg_vkb2_func_pane_cp06

0x73dd,	// (0x00092578) bg_vkb2_func_pane_cp07

0xdbe6,	// (0x00098d81) bg_vkb2_func_pane_cp11_ParamLimits

0xdbe6,	// (0x00098d81) bg_vkb2_func_pane_cp11

0xdbfb,	// (0x00098d96) bg_vkb2_func_pane_cp12_ParamLimits

0xdbfb,	// (0x00098d96) bg_vkb2_func_pane_cp12

0x97f3,	// (0x0009498e) bg_vkb2_func_pane_cp09

0xd6d9,	// (0x00098874) bg_vkb2_func_pane_g1

0xacc7,	// (0x00095e62) bg_vkb2_func_pane_g2

0xd6e1,	// (0x0009887c) bg_vkb2_func_pane_g3

0xd6e9,	// (0x00098884) bg_vkb2_func_pane_g4

0xd927,	// (0x00098ac2) bg_vkb2_func_pane_g5

0xd701,	// (0x0009889c) bg_vkb2_func_pane_g6

0xd709,	// (0x000988a4) bg_vkb2_func_pane_g7

0xd6f9,	// (0x00098894) bg_vkb2_func_pane_g8

0xaca7,	// (0x00095e42) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0009acc3) bg_vkb2_func_pane_g

0x7735,	// (0x000928d0) blid2_tripm_pane_g6_ParamLimits

0x7735,	// (0x000928d0) blid2_tripm_pane_g6

0xd5e1,	// (0x0009877c) mp4_progress_pane_g1

0x77ae,	// (0x00092949) blid2_tripm_values_pane_ParamLimits

0x77ae,	// (0x00092949) blid2_tripm_values_pane

0x78a5,	// (0x00092a40) blid2_tripm_values_pane_t1

0x78b3,	// (0x00092a4e) blid2_tripm_values_pane_t2

0x78c1,	// (0x00092a5c) blid2_tripm_values_pane_t3

0x78cf,	// (0x00092a6a) blid2_tripm_values_pane_t4

0x78dd,	// (0x00092a78) blid2_tripm_values_pane_t5

0x78eb,	// (0x00092a86) blid2_tripm_values_pane_t6

0x78f9,	// (0x00092a94) blid2_tripm_values_pane_t7

0x7907,	// (0x00092aa2) blid2_tripm_values_pane_t8

0x7915,	// (0x00092ab0) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0009acd6) blid2_tripm_values_pane_t

0x20f8,	// (0x0008d293) call_video_pane_t1_ParamLimits

0x2116,	// (0x0008d2b1) call_video_pane_t2_ParamLimits

0xf253,	// (0x0009a3ee) call_video_pane_t_ParamLimits

0x0464,	// (0x0008b5ff) msg_header_pane_g1_ParamLimits

0xb64a,	// (0x000967e5) msg_header_pane_g2_ParamLimits

0xb64a,	// (0x000967e5) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0009a608) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0009a608) msg_header_pane_g

0xa882,	// (0x00095a1d) main_clock2_pane_ParamLimits

0x5743,	// (0x000908de) grid_clock2_toolbar_pane_ParamLimits

0x5743,	// (0x000908de) grid_clock2_toolbar_pane

0x5743,	// (0x000908de) listscroll_clock2_pane_ParamLimits

0x5743,	// (0x000908de) listscroll_clock2_pane

0x5827,	// (0x000909c2) main_clock2_pane_t3_ParamLimits

0x5827,	// (0x000909c2) main_clock2_pane_t3

0x584b,	// (0x000909e6) main_clock2_pane_t4_ParamLimits

0x584b,	// (0x000909e6) main_clock2_pane_t4

0xdcef,	// (0x00098e8a) cell_clock2_toolbar_pane

0xdcf7,	// (0x00098e92) cell_clock2_toolbar_pane_cp01

0xdcf7,	// (0x00098e92) cell_clock2_toolbar_pane_cp02

0xdcff,	// (0x00098e9a) cell_clock2_toolbar_pane_cp03

0xdd07,	// (0x00098ea2) list_clock2_pane

0xb295,	// (0x00096430) scroll_pane_cp10

0xdd0f,	// (0x00098eaa) list_single_clock2_pane_ParamLimits

0xdd0f,	// (0x00098eaa) list_single_clock2_pane

0xaa6e,	// (0x00095c09) list_highlight_pane_cp08

0xdd1c,	// (0x00098eb7) list_single_clock2_pane_t1

0xdd2a,	// (0x00098ec5) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x0009ace9) list_single_clock2_pane_t

0x97f3,	// (0x0009498e) bg_button_pane_cp10

0xdd38,	// (0x00098ed3) cell_clock2_toolbar_pane_g1

0x36b2,	// (0x0008e84d) aid_main_viewer_pane_g1_ParamLimits

0x36b2,	// (0x0008e84d) aid_main_viewer_pane_g1

0x36c0,	// (0x0008e85b) aid_main_viewer_pane_g2_ParamLimits

0x36c0,	// (0x0008e85b) aid_main_viewer_pane_g2

0x36ce,	// (0x0008e869) aid_main_viewer_pane_g3_ParamLimits

0x36ce,	// (0x0008e869) aid_main_viewer_pane_g3

0x36dd,	// (0x0008e878) aid_main_viewer_pane_g4_ParamLimits

0x36dd,	// (0x0008e878) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0009a619) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0009a619) aid_main_viewer_pane_g

0x3fe5,	// (0x0008f180) main_calc_pane_ParamLimits

0x3ff9,	// (0x0008f194) main_dialer2_pane_ParamLimits

0x97f3,	// (0x0009498e) main_cam6_pane

0x97f3,	// (0x0009498e) main_vid6_pane

0x574f,	// (0x000908ea) listscroll_gen_pane_cp06_ParamLimits

0x574f,	// (0x000908ea) listscroll_gen_pane_cp06

0x586e,	// (0x00090a09) main_clock2_pane_t5_ParamLimits

0x586e,	// (0x00090a09) main_clock2_pane_t5

0x58cc,	// (0x00090a67) aid_call2_pane_cp10_ParamLimits

0x58de,	// (0x00090a79) aid_call_pane_cp10_ParamLimits

0xb304,	// (0x0009649f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb304,	// (0x0009649f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58f0,	// (0x00090a8b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58f0,	// (0x00090a8b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb304,	// (0x0009649f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0009a967) popup_clock_analogue_window_cp10_g_ParamLimits

0x5906,	// (0x00090aa1) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5f81,	// (0x0009111c) cell_dialer2_keypad_pane_g2_ParamLimits

0x5f81,	// (0x0009111c) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0009aa51) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0009aa51) cell_dialer2_keypad_pane_g

0x5f9d,	// (0x00091138) cell_dialer2_keypad_pane_t1

0x6b82,	// (0x00091d1d) main_cset_text2_pane_ParamLimits

0x6b82,	// (0x00091d1d) main_cset_text2_pane

0xdb4e,	// (0x00098ce9) area_vitu2_query_pane_g1_ParamLimits

0x071c,	// (0x0008b8b7) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0009ac06) area_vitu2_query_pane_g_ParamLimits

0x73ab,	// (0x00092546) area_vitu2_query_pane_t7_ParamLimits

0x73ab,	// (0x00092546) area_vitu2_query_pane_t7

0x73cf,	// (0x0009256a) bg_button_pane_cp018_ParamLimits

0x73dd,	// (0x00092578) bg_button_pane_cp021_ParamLimits

0x0755,	// (0x0008b8f0) bg_button_pane_cp022_ParamLimits

0x0755,	// (0x0008b8f0) bg_vkb2_func_pane_cp08_ParamLimits

0x73cf,	// (0x0009256a) bg_vkb2_func_pane_cp06_ParamLimits

0x73dd,	// (0x00092578) bg_vkb2_func_pane_cp07_ParamLimits

0x0766,	// (0x0008b901) input_focus_pane_cp09_ParamLimits

0xa350,	// (0x000954eb) cam6_autofocus_pane_ParamLimits

0xa350,	// (0x000954eb) cam6_autofocus_pane

0x7923,	// (0x00092abe) cam6_image_uncrop_pane_ParamLimits

0x7923,	// (0x00092abe) cam6_image_uncrop_pane

0x7932,	// (0x00092acd) cam6_indi_pane_ParamLimits

0x7932,	// (0x00092acd) cam6_indi_pane

0x7948,	// (0x00092ae3) cam6_mode_pane_ParamLimits

0x7948,	// (0x00092ae3) cam6_mode_pane

0x795a,	// (0x00092af5) cam6_timer_pane_ParamLimits

0x795a,	// (0x00092af5) cam6_timer_pane

0x796a,	// (0x00092b05) cam6_zoom_pane_ParamLimits

0x796a,	// (0x00092b05) cam6_zoom_pane

0x7976,	// (0x00092b11) cam6_mode_pane_g1_ParamLimits

0x7976,	// (0x00092b11) cam6_mode_pane_g1

0x7986,	// (0x00092b21) cam6_mode_pane_g2_ParamLimits

0x7986,	// (0x00092b21) cam6_mode_pane_g2

0x7996,	// (0x00092b31) cam6_mode_pane_g3_ParamLimits

0x7996,	// (0x00092b31) cam6_mode_pane_g3

0x79a6,	// (0x00092b41) cam6_mode_pane_g4_ParamLimits

0x79a6,	// (0x00092b41) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x0009acee) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x0009acee) cam6_mode_pane_g

0xdd40,	// (0x00098edb) bg_tb_trans_pane_cp08_ParamLimits

0xdd40,	// (0x00098edb) bg_tb_trans_pane_cp08

0xdd4e,	// (0x00098ee9) cam6_battery_pane_ParamLimits

0xdd4e,	// (0x00098ee9) cam6_battery_pane

0xdd64,	// (0x00098eff) cam6_indi_pane_g1_ParamLimits

0xdd64,	// (0x00098eff) cam6_indi_pane_g1

0xdd76,	// (0x00098f11) cam6_indi_pane_g2_ParamLimits

0xdd76,	// (0x00098f11) cam6_indi_pane_g2

0xdd88,	// (0x00098f23) cam6_indi_pane_g3_ParamLimits

0xdd88,	// (0x00098f23) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0009acf7) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0009acf7) cam6_indi_pane_g

0xdd9a,	// (0x00098f35) cam6_indi_pane_t1_ParamLimits

0xdd9a,	// (0x00098f35) cam6_indi_pane_t1

0x79b6,	// (0x00092b51) cam6_autofocus_pane_g1

0x79be,	// (0x00092b59) cam6_autofocus_pane_g2

0x79c6,	// (0x00092b61) cam6_autofocus_pane_g3

0x79ce,	// (0x00092b69) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x0009acfe) cam6_autofocus_pane_g

0xddc0,	// (0x00098f5b) cam6_timer_pane_g1

0xddc8,	// (0x00098f63) cam6_timer_pane_t1

0xddd6,	// (0x00098f71) cam6_zoom_cont_pane

0xddde,	// (0x00098f79) cam6_zoom_pane_g1

0xdde6,	// (0x00098f81) cam6_zoom_pane_g2

0x79d6,	// (0x00092b71) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0009ad07) cam6_zoom_pane_g

0xcd1c,	// (0x00097eb7) cam6_battery_pane_g1

0xcd1c,	// (0x00097eb7) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x0009a86f) cam6_battery_pane_g

0xddee,	// (0x00098f89) cam6_zoom_cont_pane_g1

0xddf7,	// (0x00098f92) cam6_zoom_cont_pane_g2

0xde00,	// (0x00098f9b) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x0009ad0e) cam6_zoom_cont_pane_g

0x79f3,	// (0x00092b8e) cam6_mode_pane_cp_ParamLimits

0x79f3,	// (0x00092b8e) cam6_mode_pane_cp

0x796a,	// (0x00092b05) cam6_zoom_pane_cp_ParamLimits

0x796a,	// (0x00092b05) cam6_zoom_pane_cp

0x7a05,	// (0x00092ba0) vid6_image_uncrop_cif_pane_ParamLimits

0x7a05,	// (0x00092ba0) vid6_image_uncrop_cif_pane

0x7a15,	// (0x00092bb0) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a15,	// (0x00092bb0) vid6_image_uncrop_nhd_pane

0x7923,	// (0x00092abe) vid6_image_uncrop_vga_pane_ParamLimits

0x7923,	// (0x00092abe) vid6_image_uncrop_vga_pane

0x7a24,	// (0x00092bbf) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a24,	// (0x00092bbf) vid6_image_uncrop_wvga_pane

0x7a33,	// (0x00092bce) vid6_indi_pane_ParamLimits

0x7a33,	// (0x00092bce) vid6_indi_pane

0xdd40,	// (0x00098edb) bg_tb_trans_pane_cp09_ParamLimits

0xdd40,	// (0x00098edb) bg_tb_trans_pane_cp09

0xde18,	// (0x00098fb3) cam6_battery_pane_cp_ParamLimits

0xde18,	// (0x00098fb3) cam6_battery_pane_cp

0xde24,	// (0x00098fbf) vid6_indi_pane_g1_ParamLimits

0xde24,	// (0x00098fbf) vid6_indi_pane_g1

0xde36,	// (0x00098fd1) vid6_indi_pane_g2_ParamLimits

0xde36,	// (0x00098fd1) vid6_indi_pane_g2

0xde48,	// (0x00098fe3) vid6_indi_pane_g3_ParamLimits

0xde48,	// (0x00098fe3) vid6_indi_pane_g3

0xde5d,	// (0x00098ff8) vid6_indi_pane_g4_ParamLimits

0xde5d,	// (0x00098ff8) vid6_indi_pane_g4

0xde72,	// (0x0009900d) vid6_indi_pane_g5_ParamLimits

0xde72,	// (0x0009900d) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x0009ad15) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0009ad15) vid6_indi_pane_g

0xde8c,	// (0x00099027) vid6_indi_pane_t1_ParamLimits

0xde8c,	// (0x00099027) vid6_indi_pane_t1

0xdea2,	// (0x0009903d) vid6_indi_pane_t2_ParamLimits

0xdea2,	// (0x0009903d) vid6_indi_pane_t2

0xdeca,	// (0x00099065) vid6_indi_pane_t3_ParamLimits

0xdeca,	// (0x00099065) vid6_indi_pane_t3

0xdef2,	// (0x0009908d) vid6_indi_pane_t4_ParamLimits

0xdef2,	// (0x0009908d) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x0009ad20) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x0009ad20) vid6_indi_pane_t

0xdf16,	// (0x000990b1) wait_bar_pane_cp08

0x7a4b,	// (0x00092be6) main_cset_text2_pane_t1_ParamLimits

0x7a4b,	// (0x00092be6) main_cset_text2_pane_t1

0x79de,	// (0x00092b79) listscroll_gen_pane_cp06_t1_ParamLimits

0x79de,	// (0x00092b79) listscroll_gen_pane_cp06_t1

0x97f3,	// (0x0009498e) main_cam6_set_pane

0xcf61,	// (0x000980fc) bg_tb_trans_pane_cp06_ParamLimits

0xa1b0,	// (0x0009534b) cam4_indicators_pane_g1_ParamLimits

0xa1c1,	// (0x0009535c) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0009aa8e) cam4_indicators_pane_g_ParamLimits

0xa1d9,	// (0x00095374) cam4_indicators_pane_t1_ParamLimits

0xa48d,	// (0x00095628) bg_tb_trans_pane_cp07_ParamLimits

0xa203,	// (0x0009539e) vid4_indicators_pane_g1_ParamLimits

0xa217,	// (0x000953b2) vid4_indicators_pane_g2_ParamLimits

0xa22b,	// (0x000953c6) vid4_indicators_pane_g3_ParamLimits

0xa23c,	// (0x000953d7) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0009aaa0) vid4_indicators_pane_g_ParamLimits

0xa258,	// (0x000953f3) vid4_indicators_pane_t1_ParamLimits

0xa2e5,	// (0x00095480) vid4_progress_pane_g1_ParamLimits

0xa2f5,	// (0x00095490) vid4_progress_pane_g2_ParamLimits

0x7518,	// (0x000926b3) vid4_progress_pane_g3_ParamLimits

0xa305,	// (0x000954a0) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x0009ac51) vid4_progress_pane_g_ParamLimits

0x752a,	// (0x000926c5) vid4_progress_pane_t1_ParamLimits

0xa31d,	// (0x000954b8) vid4_progress_pane_t2_ParamLimits

0xa332,	// (0x000954cd) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0009ac5c) vid4_progress_pane_t_ParamLimits

0x7540,	// (0x000926db) wait_bar_pane_cp07_ParamLimits

0x7a69,	// (0x00092c04) main_cam6_set_pane_g2_ParamLimits

0x7a69,	// (0x00092c04) main_cam6_set_pane_g2

0x7a8d,	// (0x00092c28) main_cset6_listscroll_pane_ParamLimits

0x7a8d,	// (0x00092c28) main_cset6_listscroll_pane

0x7aa9,	// (0x00092c44) main_cset6_slider_pane_ParamLimits

0x7aa9,	// (0x00092c44) main_cset6_slider_pane

0x7abf,	// (0x00092c5a) main_cset6_text2_pane_ParamLimits

0x7abf,	// (0x00092c5a) main_cset6_text2_pane

0xdf25,	// (0x000990c0) main_cset6_text_pane

0xdf2d,	// (0x000990c8) main_cset_list_pane_copy1_ParamLimits

0xdf2d,	// (0x000990c8) main_cset_list_pane_copy1

0xdf3d,	// (0x000990d8) scroll_pane_cp028_copy1

0x7acd,	// (0x00092c68) cset_list_set_pane_copy1

0x7adf,	// (0x00092c7a) aid_position_infowindow_above_copy1

0x7ae7,	// (0x00092c82) aid_position_infowindow_below_copy1

0xa35e,	// (0x000954f9) cset_list_set_pane_g1_copy1

0x7aef,	// (0x00092c8a) cset_list_set_pane_g3_copy1_ParamLimits

0x7aef,	// (0x00092c8a) cset_list_set_pane_g3_copy1

0x7afe,	// (0x00092c99) cset_list_set_pane_t1_copy1_ParamLimits

0x7afe,	// (0x00092c99) cset_list_set_pane_t1_copy1

0xa48d,	// (0x00095628) list_highlight_pane_cp021_copy1_ParamLimits

0xa48d,	// (0x00095628) list_highlight_pane_cp021_copy1

0xdf46,	// (0x000990e1) cset6_slider_pane_ParamLimits

0xdf46,	// (0x000990e1) cset6_slider_pane

0xdf72,	// (0x0009910d) main_cset6_slider_pane_g1_ParamLimits

0xdf72,	// (0x0009910d) main_cset6_slider_pane_g1

0x7b13,	// (0x00092cae) main_cset6_slider_pane_g2_ParamLimits

0x7b13,	// (0x00092cae) main_cset6_slider_pane_g2

0xdf9a,	// (0x00099135) main_cset6_slider_pane_g3_ParamLimits

0xdf9a,	// (0x00099135) main_cset6_slider_pane_g3

0x7b3b,	// (0x00092cd6) main_cset6_slider_pane_g4_ParamLimits

0x7b3b,	// (0x00092cd6) main_cset6_slider_pane_g4

0xdfa6,	// (0x00099141) main_cset6_slider_pane_g5_ParamLimits

0xdfa6,	// (0x00099141) main_cset6_slider_pane_g5

0xd808,	// (0x000989a3) main_cset6_slider_pane_g7_ParamLimits

0xd808,	// (0x000989a3) main_cset6_slider_pane_g7

0xd814,	// (0x000989af) main_cset6_slider_pane_g8_ParamLimits

0xd814,	// (0x000989af) main_cset6_slider_pane_g8

0x6c2f,	// (0x00091dca) main_cset6_slider_pane_g9_ParamLimits

0x6c2f,	// (0x00091dca) main_cset6_slider_pane_g9

0x6c3b,	// (0x00091dd6) main_cset6_slider_pane_g10_ParamLimits

0x6c3b,	// (0x00091dd6) main_cset6_slider_pane_g10

0x6c47,	// (0x00091de2) main_cset6_slider_pane_g11_ParamLimits

0x6c47,	// (0x00091de2) main_cset6_slider_pane_g11

0x6c53,	// (0x00091dee) main_cset6_slider_pane_g12_ParamLimits

0x6c53,	// (0x00091dee) main_cset6_slider_pane_g12

0x6c5f,	// (0x00091dfa) main_cset6_slider_pane_g13_ParamLimits

0x6c5f,	// (0x00091dfa) main_cset6_slider_pane_g13

0x6c6b,	// (0x00091e06) main_cset6_slider_pane_g14_ParamLimits

0x6c6b,	// (0x00091e06) main_cset6_slider_pane_g14

0x7b47,	// (0x00092ce2) main_cset6_slider_pane_g15_ParamLimits

0x7b47,	// (0x00092ce2) main_cset6_slider_pane_g15

0xd820,	// (0x000989bb) main_cset6_slider_pane_g16_ParamLimits

0xd820,	// (0x000989bb) main_cset6_slider_pane_g16

0xd82c,	// (0x000989c7) main_cset6_slider_pane_g17_ParamLimits

0xd82c,	// (0x000989c7) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x0009ad29) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x0009ad29) main_cset6_slider_pane_g

0xdfb2,	// (0x0009914d) main_cset6_slider_pane_t1_ParamLimits

0xdfb2,	// (0x0009914d) main_cset6_slider_pane_t1

0x7b77,	// (0x00092d12) main_cset6_slider_pane_t2_ParamLimits

0x7b77,	// (0x00092d12) main_cset6_slider_pane_t2

0x7ba2,	// (0x00092d3d) main_cset6_slider_pane_t3_ParamLimits

0x7ba2,	// (0x00092d3d) main_cset6_slider_pane_t3

0x7bcd,	// (0x00092d68) main_cset6_slider_pane_t4_ParamLimits

0x7bcd,	// (0x00092d68) main_cset6_slider_pane_t4

0x7bf8,	// (0x00092d93) main_cset6_slider_pane_t5_ParamLimits

0x7bf8,	// (0x00092d93) main_cset6_slider_pane_t5

0xdff3,	// (0x0009918e) main_cset6_slider_pane_t7_ParamLimits

0xdff3,	// (0x0009918e) main_cset6_slider_pane_t7

0x7c23,	// (0x00092dbe) main_cset6_slider_pane_t8_ParamLimits

0x7c23,	// (0x00092dbe) main_cset6_slider_pane_t8

0x7c47,	// (0x00092de2) main_cset6_slider_pane_t9_ParamLimits

0x7c47,	// (0x00092de2) main_cset6_slider_pane_t9

0x7c6b,	// (0x00092e06) main_cset6_slider_pane_t10_ParamLimits

0x7c6b,	// (0x00092e06) main_cset6_slider_pane_t10

0x7c8f,	// (0x00092e2a) main_cset6_slider_pane_t11_ParamLimits

0x7c8f,	// (0x00092e2a) main_cset6_slider_pane_t11

0xe029,	// (0x000991c4) main_cset6_slider_pane_t14_ParamLimits

0xe029,	// (0x000991c4) main_cset6_slider_pane_t14

0xe062,	// (0x000991fd) main_cset6_slider_pane_t15_ParamLimits

0xe062,	// (0x000991fd) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x0009ad4e) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x0009ad4e) main_cset6_slider_pane_t

0xd4e3,	// (0x0009867e) cset_slider_pane_g1_copy1

0xd8e4,	// (0x00098a7f) cset_slider_pane_g2_copy1

0xd8ed,	// (0x00098a88) cset_slider_pane_g3_copy1

0x97f3,	// (0x0009498e) bg_popup_sub_pane_cp011_copy1

0xe09b,	// (0x00099236) main_cset_text_pane_g1_copy1

0xd976,	// (0x00098b11) main_cset_text_pane_t1_copy1

0xd984,	// (0x00098b1f) main_cset_text_pane_t2_copy1

0xd992,	// (0x00098b2d) main_cset_text_pane_t3_copy1

0xd9a0,	// (0x00098b3b) main_cset_text_pane_t4_copy1

0xd9ae,	// (0x00098b49) main_cset_text_pane_t5_copy1

0xe0a3,	// (0x0009923e) main_cset_text_pane_t6_copy1

0xe0b1,	// (0x0009924c) main_cset_text_pane_t7_copy1

0x7a4b,	// (0x00092be6) main_cset_text2_pane_t1_copy1

0xa48d,	// (0x00095628) main_ncimui_pane

0x423d,	// (0x0008f3d8) popup_query_ncimui_window_ParamLimits

0x423d,	// (0x0008f3d8) popup_query_ncimui_window

0x9e8b,	// (0x00095026) field_cale_ev2_pane_g4_ParamLimits

0x9e8b,	// (0x00095026) field_cale_ev2_pane_g4

0x5e60,	// (0x00090ffb) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5e60,	// (0x00090ffb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x0009aa28) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x0009aa28) cell_video_dialer_keypad_pane_g

0x5e78,	// (0x00091013) cell_video_dialer_keypad_pane_t1

0x97f3,	// (0x0009498e) bg_popup_window_pane_cp012

0xb180,	// (0x0009631b) heading_pane_cp06

0xe0dd,	// (0x00099278) ncim_query_content_pane

0x97f3,	// (0x0009498e) bg_popup_heading_pane_cp01

0xe0e5,	// (0x00099280) ncim_heading_pane_t1

0xe0f3,	// (0x0009928e) ncim_indicator_popup_pane

0xe105,	// (0x000992a0) ncim_query_button_pane

0xe119,	// (0x000992b4) ncim_query_content_pane_t1

0xe12b,	// (0x000992c6) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x0009ad92) ncim_query_content_pane_t

0xe165,	// (0x00099300) ncim_query_list_pane

0xe177,	// (0x00099312) ncim_query_popup_pane

0xe0f3,	// (0x0009928e) ncim_indicator_popup_pane_ParamLimits

0x7df7,	// (0x00092f92) ncim_query_content_pane_g1_ParamLimits

0x7df7,	// (0x00092f92) ncim_query_content_pane_g1

0xe119,	// (0x000992b4) ncim_query_content_pane_t1_ParamLimits

0xe12b,	// (0x000992c6) ncim_query_content_pane_t2_ParamLimits

0x7e03,	// (0x00092f9e) ncim_query_content_pane_t3_ParamLimits

0x7e03,	// (0x00092f9e) ncim_query_content_pane_t3

0x7e2b,	// (0x00092fc6) ncim_query_content_pane_t4_ParamLimits

0x7e2b,	// (0x00092fc6) ncim_query_content_pane_t4

0x7e53,	// (0x00092fee) ncim_query_content_pane_t5_ParamLimits

0x7e53,	// (0x00092fee) ncim_query_content_pane_t5

0xe13d,	// (0x000992d8) ncim_query_content_pane_t6_ParamLimits

0xe13d,	// (0x000992d8) ncim_query_content_pane_t6

0xfbf7,	// (0x0009ad92) ncim_query_content_pane_t_ParamLimits

0xe165,	// (0x00099300) ncim_query_list_pane_ParamLimits

0xe177,	// (0x00099312) ncim_query_popup_pane_ParamLimits

0xe18b,	// (0x00099326) wait_bar_pane_cp04

0x97f3,	// (0x0009498e) input_focus_pane_cp011

0xe193,	// (0x0009932e) ncim_query_popup_pane_t1

0xe1a1,	// (0x0009933c) ncim_list_query_list_pane_ParamLimits

0xe1a1,	// (0x0009933c) ncim_list_query_list_pane

0x97f3,	// (0x0009498e) bg_button_pane_cp027

0xe1ae,	// (0x00099349) ncim_query_button_pane_g1

0x97f3,	// (0x0009498e) list_highlight_pane_cp012

0xe1b8,	// (0x00099353) ncim_list_query_list_pane_g1

0xe1c0,	// (0x0009935b) ncim_list_query_list_pane_t1

0xa1cd,	// (0x00095368) cam4_indicators_pane_g3_ParamLimits

0xa1cd,	// (0x00095368) cam4_indicators_pane_g3

0xa248,	// (0x000953e3) vid4_indicators_pane_g5_ParamLimits

0xa248,	// (0x000953e3) vid4_indicators_pane_g5

0xa311,	// (0x000954ac) vid4_progress_pane_g5_ParamLimits

0xa311,	// (0x000954ac) vid4_progress_pane_g5

0x7ce2,	// (0x00092e7d) main_ncimui_pane_g1

0x7d4b,	// (0x00092ee6) ncimui_group_query_pane_ParamLimits

0x7d4b,	// (0x00092ee6) ncimui_group_query_pane

0x7d93,	// (0x00092f2e) ncimui_list_pane_ParamLimits

0x7d93,	// (0x00092f2e) ncimui_list_pane

0x7dba,	// (0x00092f55) ncimui_text_pane_ParamLimits

0x7dba,	// (0x00092f55) ncimui_text_pane

0x7e7b,	// (0x00093016) ncimui_text_pane_t1_ParamLimits

0x7e7b,	// (0x00093016) ncimui_text_pane_t1

0xe1ce,	// (0x00099369) ncimui_list_single_graphic_pane_ParamLimits

0xe1ce,	// (0x00099369) ncimui_list_single_graphic_pane

0x7e99,	// (0x00093034) ncimui_query_pane_ParamLimits

0x7e99,	// (0x00093034) ncimui_query_pane

0x97f3,	// (0x0009498e) list_highlight_pane_cp013

0xe1de,	// (0x00099379) ncim_list_query_list_pane_t1_copy1

0xe1ec,	// (0x00099387) ncim_list_single_graphic_pane_g1

0x7eac,	// (0x00093047) ncim_query_button_pane_cp01

0x7eb8,	// (0x00093053) ncim_query_entry_pane_ParamLimits

0x7eb8,	// (0x00093053) ncim_query_entry_pane

0x7ecb,	// (0x00093066) ncimui_query_pane_g1

0x7ed7,	// (0x00093072) ncimui_query_pane_t1_ParamLimits

0x7ed7,	// (0x00093072) ncimui_query_pane_t1

0xa48d,	// (0x00095628) input_focus_pane_cp012

0xe1f4,	// (0x0009938f) ncim_query_entry_pane_t1

0xa882,	// (0x00095a1d) main_im_pane_ParamLimits

0xa48d,	// (0x00095628) main_mobtv_pane_ParamLimits

0xa48d,	// (0x00095628) main_mobtv_pane

0x7b5f,	// (0x00092cfa) main_cset6_slider_pane_g18_ParamLimits

0x7b5f,	// (0x00092cfa) main_cset6_slider_pane_g18

0x7b6b,	// (0x00092d06) main_cset6_slider_pane_g19_ParamLimits

0x7b6b,	// (0x00092d06) main_cset6_slider_pane_g19

0xb099,	// (0x00096234) bg_main_mobtv_pane_ParamLimits

0xb099,	// (0x00096234) bg_main_mobtv_pane

0x7ef0,	// (0x0009308b) main_mobtv_info_pane

0x7ef9,	// (0x00093094) main_mobtv_loading_pane_ParamLimits

0x7ef9,	// (0x00093094) main_mobtv_loading_pane

0xe206,	// (0x000993a1) main_mobtv_pg_channel_list_pane

0xe210,	// (0x000993ab) main_mobtv_pg_hdr_pane

0x7f06,	// (0x000930a1) main_mobtv_programe_curr_pane_ParamLimits

0x7f06,	// (0x000930a1) main_mobtv_programe_curr_pane

0x7f13,	// (0x000930ae) main_mobtv_programe_next_pane_ParamLimits

0x7f13,	// (0x000930ae) main_mobtv_programe_next_pane

0xe219,	// (0x000993b4) popup_mobtv_noti_window

0xcd1c,	// (0x00097eb7) main_tv_pg_hdr_pane_g1

0xe221,	// (0x000993bc) main_tv_pg_hdr_pane_g2

0xe229,	// (0x000993c4) main_tv_pg_hdr_pane_g3

0xe231,	// (0x000993cc) main_tv_pg_hdr_pane_g4

0xe239,	// (0x000993d4) main_tv_pg_hdr_pane_g5

0xe243,	// (0x000993de) main_tv_pg_hdr_pane_g6

0xe24d,	// (0x000993e8) main_tv_pg_hdr_pane_g7

0xe257,	// (0x000993f2) main_tv_pg_hdr_pane_g8

0xe261,	// (0x000993fc) main_tv_pg_hdr_pane_g9

0xe26b,	// (0x00099406) main_tv_pg_hdr_pane_g10

0xe275,	// (0x00099410) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x0009ad9f) main_tv_pg_hdr_pane_g

0xe27f,	// (0x0009941a) main_tv_pg_hdr_pane_t1

0xe28d,	// (0x00099428) main_tv_pg_hdr_pane_t2

0xe29b,	// (0x00099436) main_tv_pg_hdr_pane_t3

0xe2ab,	// (0x00099446) main_tv_pg_hdr_pane_t4

0xe2bb,	// (0x00099456) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x0009adb6) main_tv_pg_hdr_pane_t

0xe2cb,	// (0x00099466) single_mobtv_pg_channel_pane_ParamLimits

0xe2cb,	// (0x00099466) single_mobtv_pg_channel_pane

0xe2dd,	// (0x00099478) single_mobtv_pg_channel_table_pane

0xadca,	// (0x00095f65) single_mobtv_pg_channel_thumb_pane

0xe2e6,	// (0x00099481) single_tv_pg_channel_pane_g1

0xe2ef,	// (0x0009948a) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x0009adc1) single_tv_pg_channel_pane_g

0xcf61,	// (0x000980fc) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf61,	// (0x000980fc) bg_single_mobtv_pg_channel_thumb_pane

0xe2f8,	// (0x00099493) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2f8,	// (0x00099493) single_mobtv_pg_channel_thumb_pane_g1

0xe306,	// (0x000994a1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe306,	// (0x000994a1) single_mobtv_pg_channel_thumb_pane_g2

0xe312,	// (0x000994ad) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe312,	// (0x000994ad) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x0009adc6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x0009adc6) single_mobtv_pg_channel_thumb_pane_g

0xe31e,	// (0x000994b9) single_mobtv_pg_channel_thumb_pane_t1

0xe32c,	// (0x000994c7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x0009adcd) single_mobtv_pg_channel_thumb_pane_t

0xcd1c,	// (0x00097eb7) bg_single_mobtv_pg_channel_table_pane_g1

0xcd1c,	// (0x00097eb7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x0009a86f) bg_single_mobtv_pg_channel_table_pane_g

0xe33a,	// (0x000994d5) single_mobtv_pg_channel_table_pane_t1

0xe348,	// (0x000994e3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x0009add2) single_mobtv_pg_channel_table_pane_t

0x7f28,	// (0x000930c3) main_mobtv_info_pane_g1_ParamLimits

0x7f28,	// (0x000930c3) main_mobtv_info_pane_g1

0x7f46,	// (0x000930e1) main_mobtv_info_pane_t1_ParamLimits

0x7f46,	// (0x000930e1) main_mobtv_info_pane_t1

0x7fbe,	// (0x00093159) main_mobtv_info_pane_t2_ParamLimits

0x7fbe,	// (0x00093159) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x0009addc) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x0009addc) main_mobtv_info_pane_t

0x804d,	// (0x000931e8) wait_bar_pane_cp05

0x805f,	// (0x000931fa) main_mobtv_loading_pane_g1_ParamLimits

0x805f,	// (0x000931fa) main_mobtv_loading_pane_g1

0x8072,	// (0x0009320d) main_mobtv_loading_pane_g2_ParamLimits

0x8072,	// (0x0009320d) main_mobtv_loading_pane_g2

0x807e,	// (0x00093219) main_mobtv_loading_pane_g3_ParamLimits

0x807e,	// (0x00093219) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x0009ade3) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x0009ade3) main_mobtv_loading_pane_g

0xe356,	// (0x000994f1) main_mobtv_loading_pane_t1_ParamLimits

0xe356,	// (0x000994f1) main_mobtv_loading_pane_t1

0xe36e,	// (0x00099509) main_mobtv_loading_pane_t2_ParamLimits

0xe36e,	// (0x00099509) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x0009adea) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x0009adea) main_mobtv_loading_pane_t

0x8091,	// (0x0009322c) wait_bar_pane_cp06_ParamLimits

0x8091,	// (0x0009322c) wait_bar_pane_cp06

0xe392,	// (0x0009952d) main_mobtv_programe_curr_pane_t1

0xe3a0,	// (0x0009953b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x0009adef) main_mobtv_programe_curr_pane_t

0xe3ae,	// (0x00099549) main_mobtv_programe_next_pane_t1

0xe3bc,	// (0x00099557) main_mobtv_programe_next_pane_t2

0xe3ca,	// (0x00099565) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x0009adf4) main_mobtv_programe_next_pane_t

0x97f3,	// (0x0009498e) bg_popup_mobtv_noti_window_pane

0xe3d8,	// (0x00099573) popup_mobtv_noti_window_g1

0xe3e0,	// (0x0009957b) popup_mobtv_noti_window_t1

0xe3ee,	// (0x00099589) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x0009adfb) popup_mobtv_noti_window_t

0xcd1c,	// (0x00097eb7) bg_popup_mobtv_noti_window_pane_g1

0x97f3,	// (0x0009498e) sc_clock_pane

0x97f3,	// (0x0009498e) main_fs_bigclock_pane

0x7798,	// (0x00092933) blid2_tripm_pane_t4_ParamLimits

0x7798,	// (0x00092933) blid2_tripm_pane_t4

0x80a0,	// (0x0009323b) sc_clock_pane_g1_ParamLimits

0x80a0,	// (0x0009323b) sc_clock_pane_g1

0x80b2,	// (0x0009324d) sc_clock_pane_t1_ParamLimits

0x80b2,	// (0x0009324d) sc_clock_pane_t1

0x80d4,	// (0x0009326f) sc_clock_pane_t2_ParamLimits

0x80d4,	// (0x0009326f) sc_clock_pane_t2

0x80ec,	// (0x00093287) sc_clock_pane_t3_ParamLimits

0x80ec,	// (0x00093287) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x0009ae00) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x0009ae00) sc_clock_pane_t

0x8d27,	// (0x00093ec2) main_fs_bigclock_indicator_pane_ParamLimits

0x8d27,	// (0x00093ec2) main_fs_bigclock_indicator_pane

0x8192,	// (0x0009332d) main_fs_bigclock_pane_g1_ParamLimits

0x8192,	// (0x0009332d) main_fs_bigclock_pane_g1

0x8d33,	// (0x00093ece) main_fs_bigclock_pane_t1_ParamLimits

0x8d33,	// (0x00093ece) main_fs_bigclock_pane_t1

0x8d45,	// (0x00093ee0) main_fs_bigclock_pane_t2_ParamLimits

0x8d45,	// (0x00093ee0) main_fs_bigclock_pane_t2

0x8d59,	// (0x00093ef4) main_fs_bigclock_pane_t3_ParamLimits

0x8d59,	// (0x00093ef4) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0009b00e) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0009b00e) main_fs_bigclock_pane_t

0xec52,	// (0x00099ded) main_fs_bigclock_indicator_pane_g1

0xe10d,	// (0x000992a8) ncim_query_content_pane_g2_ParamLimits

0xe10d,	// (0x000992a8) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0009ad8d) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0009ad8d) ncim_query_content_pane_g

0x8105,	// (0x000932a0) sc_clock_pane_t4_ParamLimits

0x8105,	// (0x000932a0) sc_clock_pane_t4

0xa48d,	// (0x00095628) main_radioblah_pane

0xa142,	// (0x000952dd) cell_call4_button_pane_t1_copy1_ParamLimits

0xa142,	// (0x000952dd) cell_call4_button_pane_t1_copy1

0x7cfa,	// (0x00092e95) main_ncimui_pane_t1_ParamLimits

0x7cfa,	// (0x00092e95) main_ncimui_pane_t1

0x7d14,	// (0x00092eaf) main_ncimui_pane_t2_ParamLimits

0x7d14,	// (0x00092eaf) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x0009ad86) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x0009ad86) main_ncimui_pane_t

0xe534,	// (0x000996cf) main_radioblah_anim_pane_ParamLimits

0xe534,	// (0x000996cf) main_radioblah_anim_pane

0xe545,	// (0x000996e0) main_radioblah_info_pane_ParamLimits

0xe545,	// (0x000996e0) main_radioblah_info_pane

0xe559,	// (0x000996f4) main_radioblah_pane_t1_ParamLimits

0xe559,	// (0x000996f4) main_radioblah_pane_t1

0xe575,	// (0x00099710) main_radioblah_pane_t2_ParamLimits

0xe575,	// (0x00099710) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x0009ae21) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x0009ae21) main_radioblah_pane_t

0x81f1,	// (0x0009338c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x81f1,	// (0x0009338c) main_radioblah_rocker_ctrl_pane

0xe5bd,	// (0x00099758) main_radioblah_info_pane_t1_ParamLimits

0xe5bd,	// (0x00099758) main_radioblah_info_pane_t1

0x8249,	// (0x000933e4) main_radioblah_info_pane_t2_ParamLimits

0x8249,	// (0x000933e4) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x0009ae2a) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x0009ae2a) main_radioblah_info_pane_t

0xcd1c,	// (0x00097eb7) main_radioblah_rocker_ctrl_pane_g1

0x82f9,	// (0x00093494) main_radioblah_rocker_ctrl_pane_g2

0x8301,	// (0x0009349c) main_radioblah_rocker_ctrl_pane_g3

0x8309,	// (0x000934a4) main_radioblah_rocker_ctrl_pane_g4

0x8311,	// (0x000934ac) main_radioblah_rocker_ctrl_pane_g5

0x8319,	// (0x000934b4) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x0009ae33) main_radioblah_rocker_ctrl_pane_g

0x7a4b,	// (0x00092be6) main_cset_text2_pane_t1_copy1_ParamLimits

0xa1a0,	// (0x0009533b) cam4_image_uncrop_qvga_pane

0xa1f3,	// (0x0009538e) vid4_image_uncrop_qcif_pane

0xa350,	// (0x000954eb) cam6_image_uncrop_qvga_pane_ParamLimits

0xa350,	// (0x000954eb) cam6_image_uncrop_qvga_pane

0xde08,	// (0x00098fa3) vid6_image_uncrop_qcif_pane_ParamLimits

0xde08,	// (0x00098fa3) vid6_image_uncrop_qcif_pane

0x97f3,	// (0x0009498e) bg_popup_preview_window_pane_cp03

0xe0bf,	// (0x0009925a) list_cset_text2_pane

0xe0c7,	// (0x00099262) main_cset6_text2_pane_g1

0xe0cf,	// (0x0009926a) main_cset6_text2_pane_t1

0xe5f7,	// (0x00099792) list_cset_text2_pane_t1_ParamLimits

0xe5f7,	// (0x00099792) list_cset_text2_pane_t1

0xa48d,	// (0x00095628) main_radioblah_pane_ParamLimits

0x8039,	// (0x000931d4) main_mobtv_info_pane_t3_ParamLimits

0x8039,	// (0x000931d4) main_mobtv_info_pane_t3

0x81df,	// (0x0009337a) main_radioblah_pane_g1

0x8219,	// (0x000933b4) main_radioblah_info_pane_g1

0x829e,	// (0x00093439) main_radioblah_info_pane_t3_ParamLimits

0x829e,	// (0x00093439) main_radioblah_info_pane_t3

0x2d81,	// (0x0008df1c) highlight_cell_cale_month_pane_ParamLimits

0x2d81,	// (0x0008df1c) highlight_cell_cale_month_pane

0x97f3,	// (0x0009498e) main_phob_fisheye_pane

0xd03d,	// (0x000981d8) scroll_pane_cp0031_ParamLimits

0xd03d,	// (0x000981d8) scroll_pane_cp0031

0xdf16,	// (0x000990b1) wait_bar_pane_cp08_ParamLimits

0x7acd,	// (0x00092c68) cset_list_set_pane_copy1_ParamLimits

0xe612,	// (0x000997ad) highlight_cell_cale_month_pane_g1

0x8321,	// (0x000934bc) highlight_cell_cale_month_pane_t1

0xdba2,	// (0x00098d3d) list_gen_pane_cp01

0xd7f3,	// (0x0009898e) scroll_pane_01

0x832f,	// (0x000934ca) list_single_double_fisheye_pane

0x0846,	// (0x0008b9e1) list_double_fisheye_pane_g1_ParamLimits

0x0846,	// (0x0008b9e1) list_double_fisheye_pane_g1

0x0852,	// (0x0008b9ed) list_double_fisheye_pane_g2_ParamLimits

0x0852,	// (0x0008b9ed) list_double_fisheye_pane_g2

0x8338,	// (0x000934d3) list_double_fisheye_pane_g3_ParamLimits

0x8338,	// (0x000934d3) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x0009ae40) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x0009ae40) list_double_fisheye_pane_g

0x0883,	// (0x0008ba1e) list_double_fisheye_pane_t1_ParamLimits

0x0883,	// (0x0008ba1e) list_double_fisheye_pane_t1

0x089e,	// (0x0008ba39) list_double_fisheye_pane_t2_ParamLimits

0x089e,	// (0x0008ba39) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x0009ae4b) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x0009ae4b) list_double_fisheye_pane_t

0x97f3,	// (0x0009498e) main_call5_pane

0x8130,	// (0x000932cb) sc_swipe_pane_ParamLimits

0x8130,	// (0x000932cb) sc_swipe_pane

0x8357,	// (0x000934f2) call5_image_pane_ParamLimits

0x8357,	// (0x000934f2) call5_image_pane

0x8374,	// (0x0009350f) call5_swipe_1_pane_ParamLimits

0x8374,	// (0x0009350f) call5_swipe_1_pane

0x8387,	// (0x00093522) call5_swipe_2_pane_ParamLimits

0x8387,	// (0x00093522) call5_swipe_2_pane

0x83b2,	// (0x0009354d) popup_call5_audio_first_window_ParamLimits

0x83b2,	// (0x0009354d) popup_call5_audio_first_window

0xcf61,	// (0x000980fc) call5_swipe_1_pane_g1_ParamLimits

0xcf61,	// (0x000980fc) call5_swipe_1_pane_g1

0xe61a,	// (0x000997b5) call5_swipe_1_pane_g2_ParamLimits

0xe61a,	// (0x000997b5) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x0009ae50) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x0009ae50) call5_swipe_1_pane_g

0xe626,	// (0x000997c1) call5_swipe_1_pane_t1_ParamLimits

0xe626,	// (0x000997c1) call5_swipe_1_pane_t1

0xcf61,	// (0x000980fc) call5_swipe_2_pane_g1_ParamLimits

0xcf61,	// (0x000980fc) call5_swipe_2_pane_g1

0xe63b,	// (0x000997d6) call5_swipe_2_pane_g2_ParamLimits

0xe63b,	// (0x000997d6) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x0009ae55) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x0009ae55) call5_swipe_2_pane_g

0xe647,	// (0x000997e2) call5_swipe_2_pane_t1_ParamLimits

0xe647,	// (0x000997e2) call5_swipe_2_pane_t1

0xe65c,	// (0x000997f7) sc_swipe_pane_g1_ParamLimits

0xe65c,	// (0x000997f7) sc_swipe_pane_g1

0xe669,	// (0x00099804) sc_swipe_pane_g2_ParamLimits

0xe669,	// (0x00099804) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x0009ae5a) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x0009ae5a) sc_swipe_pane_g

0xe675,	// (0x00099810) sc_swipe_pane_t1_ParamLimits

0xe675,	// (0x00099810) sc_swipe_pane_t1

0x97f3,	// (0x0009498e) main_cmail_launcher_pane

0x83c3,	// (0x0009355e) aid_size_cell_cmail_l_ParamLimits

0x83c3,	// (0x0009355e) aid_size_cell_cmail_l

0x83d1,	// (0x0009356c) grid_cmail_l_pane_ParamLimits

0x83d1,	// (0x0009356c) grid_cmail_l_pane

0x83eb,	// (0x00093586) cell_cmail_l_pane_ParamLimits

0x83eb,	// (0x00093586) cell_cmail_l_pane

0xe68a,	// (0x00099825) cell_cmail_l_pane_g1_ParamLimits

0xe68a,	// (0x00099825) cell_cmail_l_pane_g1

0xe696,	// (0x00099831) cell_cmail_l_pane_t1_ParamLimits

0xe696,	// (0x00099831) cell_cmail_l_pane_t1

0xe6ac,	// (0x00099847) cell_cmail_l_pane_t2_ParamLimits

0xe6ac,	// (0x00099847) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x0009ae5f) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x0009ae5f) cell_cmail_l_pane_t

0xa48d,	// (0x00095628) grid_highlight_pane_cp018_ParamLimits

0xa48d,	// (0x00095628) grid_highlight_pane_cp018

0x1126,	// (0x0008c2c1) main2_pane_ParamLimits

0x1126,	// (0x0008c2c1) main2_pane

0xa924,	// (0x00095abf) popup_sp_fs_action_menu_bg_pane_g1

0xa92c,	// (0x00095ac7) popup_sp_fs_action_menu_bg_pane_g2

0xa934,	// (0x00095acf) popup_sp_fs_action_menu_bg_pane_g3

0xa93c,	// (0x00095ad7) popup_sp_fs_action_menu_bg_pane_g4

0xa944,	// (0x00095adf) popup_sp_fs_action_menu_bg_pane_g5

0xa94c,	// (0x00095ae7) popup_sp_fs_action_menu_bg_pane_g6

0xa954,	// (0x00095aef) popup_sp_fs_action_menu_bg_pane_g7

0xa95c,	// (0x00095af7) popup_sp_fs_action_menu_bg_pane_g8

0xa964,	// (0x00095aff) popup_sp_fs_action_menu_bg_pane_g9

0xa96c,	// (0x00095b07) popup_sp_fs_action_menu_bg_pane_g10

0xa96c,	// (0x00095b07) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0009a30a) popup_sp_fs_action_menu_bg_pane_g

0x0247,	// (0x0008b3e2) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x2_t3_g3_g1

0x202d,	// (0x0008d1c8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x202d,	// (0x0008d1c8) list_medium_line_x2_t3_g3_g2

0x0253,	// (0x0008b3ee) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0253,	// (0x0008b3ee) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0009a3b8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0009a3b8) list_medium_line_x2_t3_g3_g

0x025f,	// (0x0008b3fa) list_medium_line_x2_t3_g3_t1_ParamLimits

0x025f,	// (0x0008b3fa) list_medium_line_x2_t3_g3_t1

0x0274,	// (0x0008b40f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0274,	// (0x0008b40f) list_medium_line_x2_t3_g3_t2

0x0288,	// (0x0008b423) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0288,	// (0x0008b423) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0009a3bf) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0009a3bf) list_medium_line_x2_t3_g3_t

0x0247,	// (0x0008b3e2) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x2_t3_g2_g1

0x0253,	// (0x0008b3ee) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0253,	// (0x0008b3ee) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0009a3c6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0009a3c6) list_medium_line_x2_t3_g2_g

0x029d,	// (0x0008b438) list_medium_line_x2_t3_g2_t1_ParamLimits

0x029d,	// (0x0008b438) list_medium_line_x2_t3_g2_t1

0x02b3,	// (0x0008b44e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x02b3,	// (0x0008b44e) list_medium_line_x2_t3_g2_t2

0x0288,	// (0x0008b423) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0288,	// (0x0008b423) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0009a3cb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0009a3cb) list_medium_line_x2_t3_g2_t

0x0247,	// (0x0008b3e2) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x2_t4_g4_g1

0x2039,	// (0x0008d1d4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2039,	// (0x0008d1d4) list_medium_line_x2_t4_g4_g2

0x202d,	// (0x0008d1c8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x202d,	// (0x0008d1c8) list_medium_line_x2_t4_g4_g3

0x02c5,	// (0x0008b460) list_medium_line_x2_t4_g4_g4_ParamLimits

0x02c5,	// (0x0008b460) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0009a3d2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0009a3d2) list_medium_line_x2_t4_g4_g

0x02d1,	// (0x0008b46c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x02d1,	// (0x0008b46c) list_medium_line_x2_t4_g4_t1

0x02eb,	// (0x0008b486) list_medium_line_x2_t4_g4_t2_ParamLimits

0x02eb,	// (0x0008b486) list_medium_line_x2_t4_g4_t2

0x0301,	// (0x0008b49c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0301,	// (0x0008b49c) list_medium_line_x2_t4_g4_t3

0x0316,	// (0x0008b4b1) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0316,	// (0x0008b4b1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0009a3db) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0009a3db) list_medium_line_x2_t4_g4_t

0x0247,	// (0x0008b3e2) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x2_t2_g4_g1

0x2039,	// (0x0008d1d4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2039,	// (0x0008d1d4) list_medium_line_x2_t2_g4_g2

0x202d,	// (0x0008d1c8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x202d,	// (0x0008d1c8) list_medium_line_x2_t2_g4_g3

0x0253,	// (0x0008b3ee) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0253,	// (0x0008b3ee) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0009a442) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0009a442) list_medium_line_x2_t2_g4_g

0x0328,	// (0x0008b4c3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0328,	// (0x0008b4c3) list_medium_line_x2_t2_g4_t1

0x0288,	// (0x0008b423) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0288,	// (0x0008b423) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0009a44b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0009a44b) list_medium_line_x2_t2_g4_t

0x0247,	// (0x0008b3e2) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x2_t2_g3_g1

0x202d,	// (0x0008d1c8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x202d,	// (0x0008d1c8) list_medium_line_x2_t2_g3_g2

0x0253,	// (0x0008b3ee) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0253,	// (0x0008b3ee) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0009a3b8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0009a3b8) list_medium_line_x2_t2_g3_g

0x033d,	// (0x0008b4d8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x033d,	// (0x0008b4d8) list_medium_line_x2_t2_g3_t1

0x0288,	// (0x0008b423) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0288,	// (0x0008b423) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0009a450) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0009a450) list_medium_line_x2_t2_g3_t

0x2ee6,	// (0x0008e081) main_sp_fs_list_pane_ParamLimits

0x2ee6,	// (0x0008e081) main_sp_fs_list_pane

0xd517,	// (0x000986b2) sp_fs_scroll_pane_ParamLimits

0xd517,	// (0x000986b2) sp_fs_scroll_pane

0x0352,	// (0x0008b4ed) list_medium_line_x2_t3_t1

0x0362,	// (0x0008b4fd) list_medium_line_x2_t3_t2

0x0370,	// (0x0008b50b) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0009a49b) list_medium_line_x2_t3_t

0x037e,	// (0x0008b519) list_medium_line_x3_t4_t1

0x038e,	// (0x0008b529) list_medium_line_x3_t4_t2

0x039c,	// (0x0008b537) list_medium_line_x3_t4_t3

0x0370,	// (0x0008b50b) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0009a4a2) list_medium_line_x3_t4_t

0x03aa,	// (0x0008b545) list_medium_line_x4_t5_t1

0x03ba,	// (0x0008b555) list_medium_line_x4_t5_t2

0x039c,	// (0x0008b537) list_medium_line_x4_t5_t3

0x03c8,	// (0x0008b563) list_medium_line_x4_t5_t4

0x0370,	// (0x0008b50b) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0009a4ab) list_medium_line_x4_t5_t

0x0247,	// (0x0008b3e2) list_medium_line_t4_g4_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_t4_g4_g1

0x02c5,	// (0x0008b460) list_medium_line_t4_g4_g2_ParamLimits

0x02c5,	// (0x0008b460) list_medium_line_t4_g4_g2

0x03d6,	// (0x0008b571) list_medium_line_t4_g4_g3_ParamLimits

0x03d6,	// (0x0008b571) list_medium_line_t4_g4_g3

0x0253,	// (0x0008b3ee) list_medium_line_t4_g4_g4_ParamLimits

0x0253,	// (0x0008b3ee) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0009a4b6) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0009a4b6) list_medium_line_t4_g4_g

0x03e2,	// (0x0008b57d) list_medium_line_t4_g4_t1_ParamLimits

0x03e2,	// (0x0008b57d) list_medium_line_t4_g4_t1

0x03f7,	// (0x0008b592) list_medium_line_t4_g4_t2_ParamLimits

0x03f7,	// (0x0008b592) list_medium_line_t4_g4_t2

0x040c,	// (0x0008b5a7) list_medium_line_t4_g4_t3_ParamLimits

0x040c,	// (0x0008b5a7) list_medium_line_t4_g4_t3

0x0288,	// (0x0008b423) list_medium_line_t4_g4_t4_ParamLimits

0x0288,	// (0x0008b423) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0009a4bf) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0009a4bf) list_medium_line_t4_g4_t

0x2fb5,	// (0x0008e150) chi_dic_find_pane_g1

0x400d,	// (0x0008f1a8) main_tport_pane

0x05b1,	// (0x0008b74c) list_medium_line_plain_t1

0x05bf,	// (0x0008b75a) list_medium_line_t2_g2_g1_ParamLimits

0x05bf,	// (0x0008b75a) list_medium_line_t2_g2_g1

0x6fc3,	// (0x0009215e) list_medium_line_t2_g2_g2_ParamLimits

0x6fc3,	// (0x0009215e) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0009ab97) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0009ab97) list_medium_line_t2_g2_g

0x05cb,	// (0x0008b766) list_medium_line_t2_g2_t1_ParamLimits

0x05cb,	// (0x0008b766) list_medium_line_t2_g2_t1

0x05e5,	// (0x0008b780) list_medium_line_t2_g2_t2_ParamLimits

0x05e5,	// (0x0008b780) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0009ab9c) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0009ab9c) list_medium_line_t2_g2_t

0x7551,	// (0x000926ec) aid_sp_fs_list_icon_a_sm

0xa348,	// (0x000954e3) aid_sp_fs_list_icon_d

0xb087,	// (0x00096222) aid_sp_fs_text_primary

0xb090,	// (0x0009622b) aid_sp_fs_text_secondary

0x7559,	// (0x000926f4) list_medium_line

0x7559,	// (0x000926f4) list_medium_line_g2

0x7559,	// (0x000926f4) list_medium_line_g3

0x7559,	// (0x000926f4) list_medium_line_plain

0x7559,	// (0x000926f4) list_medium_line_plain_t2

0x7559,	// (0x000926f4) list_medium_line_plain_t3

0x7559,	// (0x000926f4) list_medium_line_right_icon

0x7559,	// (0x000926f4) list_medium_line_right_iconx2

0x7559,	// (0x000926f4) list_medium_line_t2

0x7559,	// (0x000926f4) list_medium_line_t2_g2

0x7559,	// (0x000926f4) list_medium_line_t2_g3

0x7559,	// (0x000926f4) list_medium_line_t2_right_icon

0x7559,	// (0x000926f4) list_medium_line_t2_right_iconx2

0x7559,	// (0x000926f4) list_medium_line_t3

0x7559,	// (0x000926f4) list_medium_line_t3_g2

0x7559,	// (0x000926f4) list_medium_line_t3_g3

0x7559,	// (0x000926f4) list_medium_line_t3_right_iconx2

0x7562,	// (0x000926fd) list_medium_line_t4_g4

0x756b,	// (0x00092706) list_medium_line_x2

0x756b,	// (0x00092706) list_medium_line_x2_t2_g2

0x756b,	// (0x00092706) list_medium_line_x2_t2_g3

0x756b,	// (0x00092706) list_medium_line_x2_t2_g4

0x756b,	// (0x00092706) list_medium_line_x2_t3

0x756b,	// (0x00092706) list_medium_line_x2_t3_g2

0x756b,	// (0x00092706) list_medium_line_x2_t3_g3

0x756b,	// (0x00092706) list_medium_line_x2_t3_g4

0x756b,	// (0x00092706) list_medium_line_x2_t4_g2

0x756b,	// (0x00092706) list_medium_line_x2_t4_g4

0x7574,	// (0x0009270f) list_medium_line_x3

0x7574,	// (0x0009270f) list_medium_line_x3_t4

0x7574,	// (0x0009270f) list_medium_line_x3_t4_g4

0x7562,	// (0x000926fd) list_medium_line_x4_t4

0x7562,	// (0x000926fd) list_medium_line_x4_t4_g7

0x7562,	// (0x000926fd) list_medium_line_x4_t5

0x0777,	// (0x0008b912) list_single_fs_dyc_pane_ParamLimits

0x0777,	// (0x0008b912) list_single_fs_dyc_pane

0x0247,	// (0x0008b3e2) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x4_t4_g7_g1

0x078b,	// (0x0008b926) list_medium_line_x4_t4_g7_g2_ParamLimits

0x078b,	// (0x0008b926) list_medium_line_x4_t4_g7_g2

0x7cb3,	// (0x00092e4e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7cb3,	// (0x00092e4e) list_medium_line_x4_t4_g7_g3

0x7cc2,	// (0x00092e5d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7cc2,	// (0x00092e5d) list_medium_line_x4_t4_g7_g4

0x0797,	// (0x0008b932) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0797,	// (0x0008b932) list_medium_line_x4_t4_g7_g5

0x07a6,	// (0x0008b941) list_medium_line_x4_t4_g7_g6_ParamLimits

0x07a6,	// (0x0008b941) list_medium_line_x4_t4_g7_g6

0x07b5,	// (0x0008b950) list_medium_line_x4_t4_g7_g7_ParamLimits

0x07b5,	// (0x0008b950) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x0009ad67) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x0009ad67) list_medium_line_x4_t4_g7_g

0x07c1,	// (0x0008b95c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x07c1,	// (0x0008b95c) list_medium_line_x4_t4_g7_t1

0x07d6,	// (0x0008b971) list_medium_line_x4_t4_g7_t2_ParamLimits

0x07d6,	// (0x0008b971) list_medium_line_x4_t4_g7_t2

0x07eb,	// (0x0008b986) list_medium_line_x4_t4_g7_t3_ParamLimits

0x07eb,	// (0x0008b986) list_medium_line_x4_t4_g7_t3

0x0800,	// (0x0008b99b) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0800,	// (0x0008b99b) list_medium_line_x4_t4_g7_t4

0x0812,	// (0x0008b9ad) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0812,	// (0x0008b9ad) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x0009ad76) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x0009ad76) list_medium_line_x4_t4_g7_t

0x0824,	// (0x0008b9bf) list_single_dyc_row_pane_ParamLimits

0x0824,	// (0x0008b9bf) list_single_dyc_row_pane

0x8344,	// (0x000934df) call5_gesture_pane_ParamLimits

0x8344,	// (0x000934df) call5_gesture_pane

0x839a,	// (0x00093535) call5_windows_pane_ParamLimits

0x839a,	// (0x00093535) call5_windows_pane

0x8405,	// (0x000935a0) call5_swipe_1_pane_cp_ParamLimits

0x8405,	// (0x000935a0) call5_swipe_1_pane_cp

0x8411,	// (0x000935ac) call5_swipe_2_pane_cp_ParamLimits

0x8411,	// (0x000935ac) call5_swipe_2_pane_cp

0xaa6e,	// (0x00095c09) call5_image_pane_cp

0x841d,	// (0x000935b8) popup_call5_audio_first_window_cp_ParamLimits

0x841d,	// (0x000935b8) popup_call5_audio_first_window_cp

0xe65c,	// (0x000997f7) call5_swipe_1_pane_g1_cp_ParamLimits

0xe65c,	// (0x000997f7) call5_swipe_1_pane_g1_cp

0xe6c9,	// (0x00099864) call5_swipe_1_pane_g2_cp

0xe675,	// (0x00099810) call5_swipe_1_pane_t1_cp_ParamLimits

0xe675,	// (0x00099810) call5_swipe_1_pane_t1_cp

0xe65c,	// (0x000997f7) call5_swipe_2_pane_g1_cp_ParamLimits

0xe65c,	// (0x000997f7) call5_swipe_2_pane_g1_cp

0xe6d1,	// (0x0009986c) call5_swipe_2_pane_g2_cp

0xe6d9,	// (0x00099874) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6d9,	// (0x00099874) call5_swipe_2_pane_t1_cp

0xa48d,	// (0x00095628) main_sp_fs_email_pane

0xe6ee,	// (0x00099889) main_sp_fs_listscroll_pane_te

0x842b,	// (0x000935c6) popup_sp_fs_action_menu_pane_ParamLimits

0x842b,	// (0x000935c6) popup_sp_fs_action_menu_pane

0xcd1c,	// (0x00097eb7) bg_sp_fs_ctrlbar_pane_g1

0xe6f7,	// (0x00099892) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe700,	// (0x0009989b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe709,	// (0x000998a4) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd1c,	// (0x00097eb7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x0009ae64) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb01,	// (0x00097c9c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb01,	// (0x00097c9c) bg_sp_fs_ctrlbar_ddmenu_pane

0xe712,	// (0x000998ad) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe712,	// (0x000998ad) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe71e,	// (0x000998b9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe71e,	// (0x000998b9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x0009ae6d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x0009ae6d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe72a,	// (0x000998c5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe72a,	// (0x000998c5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x846f,	// (0x0009360a) list_medium_line_t2_right_icon_g1

0x08c0,	// (0x0008ba5b) list_medium_line_t2_right_icon_t1

0x08d0,	// (0x0008ba6b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x0009ae72) list_medium_line_t2_right_icon_t

0xc914,	// (0x00097aaf) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc914,	// (0x00097aaf) bg_sp_fs_ctrlbar_pane

0x84bf,	// (0x0009365a) main_sp_fs_ctrlbar_button_pane_cp01

0x84c9,	// (0x00093664) main_sp_fs_ctrlbar_ddmenu_pane

0xe77c,	// (0x00099917) main_sp_fs_ctrlbar_pane_g1

0xe788,	// (0x00099923) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x0009ae77) main_sp_fs_ctrlbar_pane_g

0x8507,	// (0x000936a2) main_sp_fs_ctrlbar_pane_t1

0x8546,	// (0x000936e1) main_sp_fs_ctrlbar_pane

0x856a,	// (0x00093705) main_sp_fs_listscroll_pane_te_cp01

0x08e2,	// (0x0008ba7d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x08e2,	// (0x0008ba7d) popup_sp_fs_action_menu_pane_cp01

0xa48d,	// (0x00095628) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa48d,	// (0x00095628) bg_sp_fs_highlight_list_pane_cp01

0x858a,	// (0x00093725) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x858a,	// (0x00093725) sp_fs_action_menu_list_gene_pane_g1

0xe7af,	// (0x0009994a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7af,	// (0x0009994a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0009ae85) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0009ae85) sp_fs_action_menu_list_gene_pane_g

0x8599,	// (0x00093734) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8599,	// (0x00093734) sp_fs_action_menu_list_gene_pane_t1

0x85b1,	// (0x0009374c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x85b1,	// (0x0009374c) sp_fs_action_menu_list_gene_pane

0xe7bc,	// (0x00099957) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7bc,	// (0x00099957) popup_sp_fs_action_menu_bg_pane

0x85d0,	// (0x0009376b) sp_fs_action_menu_list_pane_ParamLimits

0x85d0,	// (0x0009376b) sp_fs_action_menu_list_pane

0x0912,	// (0x0008baad) sp_fs_scroll_pane_cp01_ParamLimits

0x0912,	// (0x0008baad) sp_fs_scroll_pane_cp01

0x0938,	// (0x0008bad3) list_medium_line_plain_t2_t1

0x0948,	// (0x0008bae3) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0009ae8a) list_medium_line_plain_t2_t

0x0958,	// (0x0008baf3) list_medium_line_plain_t3_t1

0x0968,	// (0x0008bb03) list_medium_line_plain_t3_t2

0x0976,	// (0x0008bb11) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0009ae8f) list_medium_line_plain_t3_t

0x0247,	// (0x0008b3e2) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x2_t2_g2_g1

0x0253,	// (0x0008b3ee) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0253,	// (0x0008b3ee) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0009a3c6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0009a3c6) list_medium_line_x2_t2_g2_g

0x03e2,	// (0x0008b57d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x03e2,	// (0x0008b57d) list_medium_line_x2_t2_g2_t1

0x0288,	// (0x0008b423) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0288,	// (0x0008b423) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0009ae96) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0009ae96) list_medium_line_x2_t2_g2_t

0x0247,	// (0x0008b3e2) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x2_t4_g2_g1

0x0984,	// (0x0008bb1f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0984,	// (0x0008bb1f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0009ae9b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0009ae9b) list_medium_line_x2_t4_g2_g

0x0996,	// (0x0008bb31) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0996,	// (0x0008bb31) list_medium_line_x2_t4_g2_t1

0x09b0,	// (0x0008bb4b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x09b0,	// (0x0008bb4b) list_medium_line_x2_t4_g2_t2

0x09c6,	// (0x0008bb61) list_medium_line_x2_t4_g2_t3_ParamLimits

0x09c6,	// (0x0008bb61) list_medium_line_x2_t4_g2_t3

0x0288,	// (0x0008b423) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0288,	// (0x0008b423) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0009aea0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0009aea0) list_medium_line_x2_t4_g2_t

0x85f0,	// (0x0009378b) list_medium_line_t3_right_iconx2_g1

0x846f,	// (0x0009360a) list_medium_line_t3_right_iconx2_g2

0x09db,	// (0x0008bb76) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0009aea9) list_medium_line_t3_right_iconx2_g

0x09e5,	// (0x0008bb80) list_medium_line_t3_right_iconx2_t1

0x09f5,	// (0x0008bb90) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0009aeb0) list_medium_line_t3_right_iconx2_t

0x0247,	// (0x0008b3e2) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x3_t4_g4_g1

0x202d,	// (0x0008d1c8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x202d,	// (0x0008d1c8) list_medium_line_x3_t4_g4_g2

0x02c5,	// (0x0008b460) list_medium_line_x3_t4_g4_g3_ParamLimits

0x02c5,	// (0x0008b460) list_medium_line_x3_t4_g4_g3

0x85f8,	// (0x00093793) list_medium_line_x3_t4_g4_g4_ParamLimits

0x85f8,	// (0x00093793) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0009aeb5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0009aeb5) list_medium_line_x3_t4_g4_g

0x0a03,	// (0x0008bb9e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0a03,	// (0x0008bb9e) list_medium_line_x3_t4_g4_t1

0x0a1a,	// (0x0008bbb5) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0a1a,	// (0x0008bbb5) list_medium_line_x3_t4_g4_t2

0x03f7,	// (0x0008b592) list_medium_line_x3_t4_g4_t3_ParamLimits

0x03f7,	// (0x0008b592) list_medium_line_x3_t4_g4_t3

0x0a35,	// (0x0008bbd0) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0a35,	// (0x0008bbd0) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0009aebe) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0009aebe) list_medium_line_x3_t4_g4_t

0x0a52,	// (0x0008bbed) list_single_dyc_row_text_pane_t1_ParamLimits

0x0a52,	// (0x0008bbed) list_single_dyc_row_text_pane_t1

0x0a9b,	// (0x0008bc36) list_single_dyc_row_text_pane_t2_ParamLimits

0x0a9b,	// (0x0008bc36) list_single_dyc_row_text_pane_t2

0x8604,	// (0x0009379f) list_single_dyc_row_text_pane_t3_ParamLimits

0x8604,	// (0x0009379f) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0009aec7) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0009aec7) list_single_dyc_row_text_pane_t

0x8628,	// (0x000937c3) list_single_dyc_row_pane_g1_ParamLimits

0x8628,	// (0x000937c3) list_single_dyc_row_pane_g1

0x8634,	// (0x000937cf) list_single_dyc_row_pane_g2_ParamLimits

0x8634,	// (0x000937cf) list_single_dyc_row_pane_g2

0x8640,	// (0x000937db) list_single_dyc_row_pane_g3_ParamLimits

0x8640,	// (0x000937db) list_single_dyc_row_pane_g3

0x864c,	// (0x000937e7) list_single_dyc_row_pane_g4_ParamLimits

0x864c,	// (0x000937e7) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0009aed4) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0009aed4) list_single_dyc_row_pane_g

0x8658,	// (0x000937f3) list_single_dyc_row_text_pane_ParamLimits

0x8658,	// (0x000937f3) list_single_dyc_row_text_pane

0x97f3,	// (0x0009498e) bg_sp_fs_scroll_pane

0xe7ca,	// (0x00099965) thumb_sp_fs_scroll_pane

0x05bf,	// (0x0008b75a) list_medium_line_g1_ParamLimits

0x05bf,	// (0x0008b75a) list_medium_line_g1

0x0bd0,	// (0x0008bd6b) list_medium_line_t1_ParamLimits

0x0bd0,	// (0x0008bd6b) list_medium_line_t1

0x0247,	// (0x0008b3e2) list_medium_line_x2_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x2_g1

0x202d,	// (0x0008d1c8) list_medium_line_x2_g2_ParamLimits

0x202d,	// (0x0008d1c8) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0009aedd) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0009aedd) list_medium_line_x2_g

0x8677,	// (0x00093812) list_medium_line_x2_t1_ParamLimits

0x8677,	// (0x00093812) list_medium_line_x2_t1

0x0247,	// (0x0008b3e2) list_medium_line_x3_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x3_g1

0x202d,	// (0x0008d1c8) list_medium_line_x3_g2_ParamLimits

0x202d,	// (0x0008d1c8) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0009aedd) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0009aedd) list_medium_line_x3_g

0x8677,	// (0x00093812) list_medium_line_x3_t1_ParamLimits

0x8677,	// (0x00093812) list_medium_line_x3_t1

0xe7d3,	// (0x0009996e) thumb_sp_fs_scroll_pane_g1

0xe7dc,	// (0x00099977) thumb_sp_fs_scroll_pane_g2

0xe7e5,	// (0x00099980) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009aee2) thumb_sp_fs_scroll_pane_g

0xe7d3,	// (0x0009996e) bg_sp_fs_scroll_pane_g1

0xe7dc,	// (0x00099977) bg_sp_fs_scroll_pane_g2

0xe7e5,	// (0x00099980) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009aee2) bg_sp_fs_scroll_pane_g

0x0247,	// (0x0008b3e2) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0247,	// (0x0008b3e2) list_medium_line_x2_t3_g4_g1

0x2039,	// (0x0008d1d4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2039,	// (0x0008d1d4) list_medium_line_x2_t3_g4_g2

0x202d,	// (0x0008d1c8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x202d,	// (0x0008d1c8) list_medium_line_x2_t3_g4_g3

0x0253,	// (0x0008b3ee) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0253,	// (0x0008b3ee) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0009a442) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0009a442) list_medium_line_x2_t3_g4_g

0x0be5,	// (0x0008bd80) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0be5,	// (0x0008bd80) list_medium_line_x2_t3_g4_t1

0x0bff,	// (0x0008bd9a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0bff,	// (0x0008bd9a) list_medium_line_x2_t3_g4_t2

0x0288,	// (0x0008b423) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0288,	// (0x0008b423) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0009aee9) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0009aee9) list_medium_line_x2_t3_g4_t

0x05bf,	// (0x0008b75a) list_medium_line_g2_g1_ParamLimits

0x05bf,	// (0x0008b75a) list_medium_line_g2_g1

0x6fc3,	// (0x0009215e) list_medium_line_g2_g2_ParamLimits

0x6fc3,	// (0x0009215e) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0009ab97) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0009ab97) list_medium_line_g2_g

0x0c19,	// (0x0008bdb4) list_medium_line_g2_t1_ParamLimits

0x0c19,	// (0x0008bdb4) list_medium_line_g2_t1

0x05bf,	// (0x0008b75a) list_medium_line_t3_g2_g1_ParamLimits

0x05bf,	// (0x0008b75a) list_medium_line_t3_g2_g1

0x6fc3,	// (0x0009215e) list_medium_line_t3_g2_g2_ParamLimits

0x6fc3,	// (0x0009215e) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0009ab97) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0009ab97) list_medium_line_t3_g2_g

0x0c2e,	// (0x0008bdc9) list_medium_line_t3_g2_t1_ParamLimits

0x0c2e,	// (0x0008bdc9) list_medium_line_t3_g2_t1

0x0c48,	// (0x0008bde3) list_medium_line_t3_g2_t2_ParamLimits

0x0c48,	// (0x0008bde3) list_medium_line_t3_g2_t2

0x0c5e,	// (0x0008bdf9) list_medium_line_t3_g2_t3_ParamLimits

0x0c5e,	// (0x0008bdf9) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0009aef0) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0009aef0) list_medium_line_t3_g2_t

0x846f,	// (0x0009360a) list_medium_line_right_icon_g1

0x0c78,	// (0x0008be13) list_medium_line_right_icon_t1

0x05bf,	// (0x0008b75a) list_medium_line_t2_g1_ParamLimits

0x05bf,	// (0x0008b75a) list_medium_line_t2_g1

0x0c86,	// (0x0008be21) list_medium_line_t2_t1_ParamLimits

0x0c86,	// (0x0008be21) list_medium_line_t2_t1

0x0ca0,	// (0x0008be3b) list_medium_line_t2_t2_ParamLimits

0x0ca0,	// (0x0008be3b) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0009aef7) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0009aef7) list_medium_line_t2_t

0x05bf,	// (0x0008b75a) list_medium_line_t3_g1_ParamLimits

0x05bf,	// (0x0008b75a) list_medium_line_t3_g1

0x0cb9,	// (0x0008be54) list_medium_line_t3_t1_ParamLimits

0x0cb9,	// (0x0008be54) list_medium_line_t3_t1

0x0cd3,	// (0x0008be6e) list_medium_line_t3_t2_ParamLimits

0x0cd3,	// (0x0008be6e) list_medium_line_t3_t2

0x0ce9,	// (0x0008be84) list_medium_line_t3_t3_ParamLimits

0x0ce9,	// (0x0008be84) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0009aefc) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0009aefc) list_medium_line_t3_t

0x05bf,	// (0x0008b75a) list_medium_line_g3_g1_ParamLimits

0x05bf,	// (0x0008b75a) list_medium_line_g3_g1

0x868d,	// (0x00093828) list_medium_line_g3_g2_ParamLimits

0x868d,	// (0x00093828) list_medium_line_g3_g2

0x6fc3,	// (0x0009215e) list_medium_line_g3_g3_ParamLimits

0x6fc3,	// (0x0009215e) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0009af03) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0009af03) list_medium_line_g3_g

0x0cfe,	// (0x0008be99) list_medium_line_g3_t1_ParamLimits

0x0cfe,	// (0x0008be99) list_medium_line_g3_t1

0x05bf,	// (0x0008b75a) list_medium_line_t2_g3_g1_ParamLimits

0x05bf,	// (0x0008b75a) list_medium_line_t2_g3_g1

0x868d,	// (0x00093828) list_medium_line_t2_g3_g2_ParamLimits

0x868d,	// (0x00093828) list_medium_line_t2_g3_g2

0x6fc3,	// (0x0009215e) list_medium_line_t2_g3_g3_ParamLimits

0x6fc3,	// (0x0009215e) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0009af03) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0009af03) list_medium_line_t2_g3_g

0x0d13,	// (0x0008beae) list_medium_line_t2_g3_t1_ParamLimits

0x0d13,	// (0x0008beae) list_medium_line_t2_g3_t1

0x0d2d,	// (0x0008bec8) list_medium_line_t2_g3_t2_ParamLimits

0x0d2d,	// (0x0008bec8) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0009af0a) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0009af0a) list_medium_line_t2_g3_t

0x05bf,	// (0x0008b75a) list_medium_line_t3_g3_g1_ParamLimits

0x05bf,	// (0x0008b75a) list_medium_line_t3_g3_g1

0x868d,	// (0x00093828) list_medium_line_t3_g3_g2_ParamLimits

0x868d,	// (0x00093828) list_medium_line_t3_g3_g2

0x6fc3,	// (0x0009215e) list_medium_line_t3_g3_g3_ParamLimits

0x6fc3,	// (0x0009215e) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0009af03) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0009af03) list_medium_line_t3_g3_g

0x0d4b,	// (0x0008bee6) list_medium_line_t3_g3_t1_ParamLimits

0x0d4b,	// (0x0008bee6) list_medium_line_t3_g3_t1

0x0d64,	// (0x0008beff) list_medium_line_t3_g3_t2_ParamLimits

0x0d64,	// (0x0008beff) list_medium_line_t3_g3_t2

0x0d7a,	// (0x0008bf15) list_medium_line_t3_g3_t3_ParamLimits

0x0d7a,	// (0x0008bf15) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0009af0f) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0009af0f) list_medium_line_t3_g3_t

0x85f0,	// (0x0009378b) list_medium_line_right_iconx2_g1

0x846f,	// (0x0009360a) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009af16) list_medium_line_right_iconx2_g

0xa366,	// (0x00095501) list_medium_line_right_iconx2_t1

0x85f0,	// (0x0009378b) list_medium_line_t2_right_iconx2_g1

0x846f,	// (0x0009360a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009af16) list_medium_line_t2_right_iconx2_g

0x0d94,	// (0x0008bf2f) list_medium_line_t2_right_iconx2_t1

0x0da4,	// (0x0008bf3f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0009af1b) list_medium_line_t2_right_iconx2_t

0x0db6,	// (0x0008bf51) list_medium_line_x4_t4_t1

0x0dc4,	// (0x0008bf5f) list_medium_line_x4_t4_t2

0x0dd4,	// (0x0008bf6f) list_medium_line_x4_t4_t3

0x0de4,	// (0x0008bf7f) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0009af20) list_medium_line_x4_t4_t

0x86dc,	// (0x00093877) tport_appsw_pane_ParamLimits

0x86dc,	// (0x00093877) tport_appsw_pane

0x86f4,	// (0x0009388f) tport_contact_pane_ParamLimits

0x86f4,	// (0x0009388f) tport_contact_pane

0x870c,	// (0x000938a7) tport_listscroll_pane_ParamLimits

0x870c,	// (0x000938a7) tport_listscroll_pane

0x8726,	// (0x000938c1) cell_tport_appsw_pane_ParamLimits

0x8726,	// (0x000938c1) cell_tport_appsw_pane

0xd6b9,	// (0x00098854) tport_appsw_pane_g1_ParamLimits

0xd6b9,	// (0x00098854) tport_appsw_pane_g1

0xe7ee,	// (0x00099989) tport_contact_pane_g1

0xe7f7,	// (0x00099992) tport_contact_pane_t1

0xe805,	// (0x000999a0) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0009af29) tport_contact_pane_t

0xe813,	// (0x000999ae) list_tport_pane

0xe81c,	// (0x000999b7) scroll_pane_cp_030

0x876e,	// (0x00093909) cell_tport_appsw_pane_g1

0x877e,	// (0x00093919) cell_tport_appsw_pane_t1

0x878c,	// (0x00093927) grid_highlight_pane_cp019

0x8794,	// (0x0009392f) list_tport_double_graphic_pane_ParamLimits

0x8794,	// (0x0009392f) list_tport_double_graphic_pane

0xa48d,	// (0x00095628) list_highlight_pane_cp023_ParamLimits

0xa48d,	// (0x00095628) list_highlight_pane_cp023

0x87a1,	// (0x0009393c) list_tport_double_graphic_pane_g1_ParamLimits

0x87a1,	// (0x0009393c) list_tport_double_graphic_pane_g1

0x87ae,	// (0x00093949) list_tport_double_graphic_pane_t1_ParamLimits

0x87ae,	// (0x00093949) list_tport_double_graphic_pane_t1

0x87c3,	// (0x0009395e) list_tport_double_graphic_pane_t2_ParamLimits

0x87c3,	// (0x0009395e) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0009af35) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0009af35) list_tport_double_graphic_pane_t

0x97f3,	// (0x0009498e) main_cale_note_pane

0x67b7,	// (0x00091952) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67b7,	// (0x00091952) cell_vitu2_function_top_wide_pane_cp01

0x804d,	// (0x000931e8) wait_bar_pane_cp05_ParamLimits

0xa48d,	// (0x00095628) listscroll_cmail_pane

0xe825,	// (0x000999c0) list_cmail_pane

0x87d5,	// (0x00093970) list_cmail_body_pane

0x87ea,	// (0x00093985) list_single_cmail_header_caption_pane

0x8801,	// (0x0009399c) list_single_cmail_header_detail_pane_ParamLimits

0x8801,	// (0x0009399c) list_single_cmail_header_detail_pane

0xe835,	// (0x000999d0) list_single_cmail_header_caption_pane_t1

0x0df4,	// (0x0008bf8f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0df4,	// (0x0008bf8f) list_single_cmail_header_detail_pane_g1

0xa374,	// (0x0009550f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa374,	// (0x0009550f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0009af3a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0009af3a) list_single_cmail_header_detail_pane_g

0x882b,	// (0x000939c6) list_single_cmail_header_detail_pane_t1_ParamLimits

0x882b,	// (0x000939c6) list_single_cmail_header_detail_pane_t1

0x888b,	// (0x00093a26) list_single_cmail_header_editor_pane_bg_ParamLimits

0x888b,	// (0x00093a26) list_single_cmail_header_editor_pane_bg

0xe2ef,	// (0x0009948a) list_cmail_body_pane_g1

0xe859,	// (0x000999f4) list_cmail_body_pane_t1

0xd6d9,	// (0x00098874) list_single_cmail_header_editor_pane_bg_g1

0xacc7,	// (0x00095e62) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6e9,	// (0x00098884) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6e1,	// (0x0009887c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd927,	// (0x00098ac2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd709,	// (0x000988a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6f9,	// (0x00098894) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd701,	// (0x0009889c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaca7,	// (0x00095e42) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x88a2,	// (0x00093a3d) calenote_gesture_pane_ParamLimits

0x88a2,	// (0x00093a3d) calenote_gesture_pane

0x88c2,	// (0x00093a5d) calenote_window_pane_ParamLimits

0x88c2,	// (0x00093a5d) calenote_window_pane

0xe867,	// (0x00099a02) popup_note_window_cp01

0x88de,	// (0x00093a79) calenote_swipe_1_pane_ParamLimits

0x88de,	// (0x00093a79) calenote_swipe_1_pane

0x8411,	// (0x000935ac) calenote_swipe_2_pane_ParamLimits

0x8411,	// (0x000935ac) calenote_swipe_2_pane

0xe65c,	// (0x000997f7) calenote_swipe_1_pane_g1_ParamLimits

0xe65c,	// (0x000997f7) calenote_swipe_1_pane_g1

0xe669,	// (0x00099804) calenote_swipe_1_pane_g2_ParamLimits

0xe669,	// (0x00099804) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0009ae5a) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0009ae5a) calenote_swipe_1_pane_g

0xe879,	// (0x00099a14) calenote_swipe_1_pane_t1_ParamLimits

0xe879,	// (0x00099a14) calenote_swipe_1_pane_t1

0xe65c,	// (0x000997f7) calenote_swipe_2_pane_g1_ParamLimits

0xe65c,	// (0x000997f7) calenote_swipe_2_pane_g1

0xe898,	// (0x00099a33) calenote_swipe_2_pane_g2_ParamLimits

0xe898,	// (0x00099a33) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0009af46) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0009af46) calenote_swipe_2_pane_g

0xe8a4,	// (0x00099a3f) calenote_swipe_2_pane_t1_ParamLimits

0xe8a4,	// (0x00099a3f) calenote_swipe_2_pane_t1

0x97f3,	// (0x0009498e) main_mup_navstr_pane

0x53f4,	// (0x0009058f) main_mup3_pane_t7_ParamLimits

0x53f4,	// (0x0009058f) main_mup3_pane_t7

0x9f6e,	// (0x00095109) main_mp4_pane_g6_ParamLimits

0x9f6e,	// (0x00095109) main_mp4_pane_g6

0xa130,	// (0x000952cb) main_image3_pane_t4_ParamLimits

0xa130,	// (0x000952cb) main_image3_pane_t4

0x88f3,	// (0x00093a8e) popup_navstr_preview_pane_ParamLimits

0x88f3,	// (0x00093a8e) popup_navstr_preview_pane

0x8907,	// (0x00093aa2) scroll_navstr_pane_ParamLimits

0x8907,	// (0x00093aa2) scroll_navstr_pane

0x97f3,	// (0x0009498e) bg_popup_preview_window_pane_cp04

0xe8cb,	// (0x00099a66) popup_navstr_preview_pane_t1

0x891b,	// (0x00093ab6) scroll_navstr_pane_g1_ParamLimits

0x891b,	// (0x00093ab6) scroll_navstr_pane_g1

0x892f,	// (0x00093aca) scroll_navstr_pane_t1_ParamLimits

0x892f,	// (0x00093aca) scroll_navstr_pane_t1

0xe870,	// (0x00099a0b) bg_button_pane_cp014

0xe870,	// (0x00099a0b) bg_button_pane_cp030

0x0866,	// (0x0008ba01) list_double_fisheye_pane_g4_ParamLimits

0x0866,	// (0x0008ba01) list_double_fisheye_pane_g4

0x0872,	// (0x0008ba0d) list_double_fisheye_pane_g5_ParamLimits

0x0872,	// (0x0008ba0d) list_double_fisheye_pane_g5

0xd517,	// (0x000986b2) sp_fs_scroll_pane_cp03

0xe77c,	// (0x00099917) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe788,	// (0x00099923) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x0009ae77) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8507,	// (0x000936a2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe82d,	// (0x000999c8) sp_fs_scroll_pane_cp02

0xa9ad,	// (0x00095b48) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9ad,	// (0x00095b48) popup_sp_fs_calendar_preview_list_single_pane

0x97f3,	// (0x0009498e) main_cam6_pano_pane

0xa48d,	// (0x00095628) main_mup3_pane_ParamLimits

0x97f3,	// (0x0009498e) main_phacti_pane

0x7f20,	// (0x000930bb) bg_button_pane_cp11

0x7f3a,	// (0x000930d5) main_mobtv_info_pane_g2_ParamLimits

0x7f3a,	// (0x000930d5) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x0009add7) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x0009add7) main_mobtv_info_pane_g

0x8117,	// (0x000932b2) sc_clock_pane_t5_ParamLimits

0x8117,	// (0x000932b2) sc_clock_pane_t5

0x81df,	// (0x0009337a) main_radioblah_pane_g1_ParamLimits

0xe58d,	// (0x00099728) main_radioblah_pane_t3_ParamLimits

0xe58d,	// (0x00099728) main_radioblah_pane_t3

0xe5a5,	// (0x00099740) main_radioblah_pane_t4_ParamLimits

0xe5a5,	// (0x00099740) main_radioblah_pane_t4

0x8207,	// (0x000933a2) main_radioblah_text_pane_ParamLimits

0x8207,	// (0x000933a2) main_radioblah_text_pane

0x8219,	// (0x000933b4) main_radioblah_info_pane_g1_ParamLimits

0x82b2,	// (0x0009344d) main_radioblah_info_pane_t4_ParamLimits

0x82b2,	// (0x0009344d) main_radioblah_info_pane_t4

0xa48d,	// (0x00095628) main_sp_fs_calendar_pane

0x8946,	// (0x00093ae1) main_phacti_pane_g1

0x894e,	// (0x00093ae9) phacti_note_pane_ParamLimits

0x894e,	// (0x00093ae9) phacti_note_pane

0xe8e2,	// (0x00099a7d) phacti_term_pane_ParamLimits

0xe8e2,	// (0x00099a7d) phacti_term_pane

0xe8f7,	// (0x00099a92) phacti_note_pane_t1_ParamLimits

0xe8f7,	// (0x00099a92) phacti_note_pane_t1

0x8962,	// (0x00093afd) phacti_term_pane_g1

0x896a,	// (0x00093b05) phacti_term_pane_t1_ParamLimits

0x896a,	// (0x00093b05) phacti_term_pane_t1

0xe90e,	// (0x00099aa9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe916,	// (0x00099ab1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0009af50) popup_sp_fs_calendar_preview_list_single_pane_g

0xe91e,	// (0x00099ab9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe91e,	// (0x00099ab9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe934,	// (0x00099acf) aid_popup_sp_fs_bg_corner_pane

0xcd1c,	// (0x00097eb7) popup_sp_fs_calendar_preview_bg_pane_g1

0x97f3,	// (0x0009498e) popup_sp_fs_calendar_preview_bg_pane

0x1eb6,	// (0x0008d051) popup_sp_fs_calendar_preview_list_pane

0xc914,	// (0x00097aaf) bg_main_sp_fs_cale_pane_ParamLimits

0xc914,	// (0x00097aaf) bg_main_sp_fs_cale_pane

0x89fe,	// (0x00093b99) listscroll_cale_mrui_pane_ParamLimits

0x89fe,	// (0x00093b99) listscroll_cale_mrui_pane

0x8a13,	// (0x00093bae) listscroll_sp_fs_schedule_track_pane

0x8a1c,	// (0x00093bb7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8a1c,	// (0x00093bb7) main_sp_fs_ctrlbar_pane_cp01

0xe93c,	// (0x00099ad7) main_sp_fs_ribbon_pane

0x8a2f,	// (0x00093bca) popup_sp_fs_cale_preview_window

0x8a41,	// (0x00093bdc) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a41,	// (0x00093bdc) list_single_sp_fs_schedule_track_pane

0xa48d,	// (0x00095628) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa48d,	// (0x00095628) bg_sp_fs_highlight_list_pane_cp03

0x8a55,	// (0x00093bf0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8a55,	// (0x00093bf0) list_single_sp_fs_schedule_track_pane_g1

0x8a61,	// (0x00093bfc) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a61,	// (0x00093bfc) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0009af55) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0009af55) list_single_sp_fs_schedule_track_pane_g

0x8a6d,	// (0x00093c08) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8a6d,	// (0x00093c08) list_single_sp_fs_schedule_track_pane_t1

0x8a87,	// (0x00093c22) sp_fs_schedule_track_pane_ParamLimits

0x8a87,	// (0x00093c22) sp_fs_schedule_track_pane

0xe944,	// (0x00099adf) sp_fs_schedule_track_pane_g1

0xe94c,	// (0x00099ae7) sp_fs_schedule_track_pane_g2

0xe954,	// (0x00099aef) sp_fs_schedule_track_pane_g3

0xe95c,	// (0x00099af7) sp_fs_schedule_track_pane_g4

0xe964,	// (0x00099aff) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0009af5a) sp_fs_schedule_track_pane_g

0xd6d9,	// (0x00098874) bg_sp_fs_schedule_viewer_highlight_g1

0xacc7,	// (0x00095e62) bg_sp_fs_schedule_viewer_highlight_g2

0xd6e1,	// (0x0009887c) bg_sp_fs_schedule_viewer_highlight_g3

0xd6e9,	// (0x00098884) bg_sp_fs_schedule_viewer_highlight_g4

0xd927,	// (0x00098ac2) bg_sp_fs_schedule_viewer_highlight_g5

0xd6f9,	// (0x00098894) bg_sp_fs_schedule_viewer_highlight_g6

0xd701,	// (0x0009889c) bg_sp_fs_schedule_viewer_highlight_g7

0xd709,	// (0x000988a4) bg_sp_fs_schedule_viewer_highlight_g8

0xaca7,	// (0x00095e42) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0009af65) bg_sp_fs_schedule_viewer_highlight_g

0x97f3,	// (0x0009498e) bg_main_sp_fs_ribbon_pane

0x8a98,	// (0x00093c33) main_sp_fs_ribbon_pane_g1

0xe96c,	// (0x00099b07) main_sp_fs_ribbon_pane_t1

0x8aa1,	// (0x00093c3c) main_sp_fs_ribbon_pane_t2

0xe97b,	// (0x00099b16) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0009af78) main_sp_fs_ribbon_pane_t

0xe98a,	// (0x00099b25) main_sp_fs_ribbon_scheduler_pane

0xe992,	// (0x00099b2d) bg_main_sp_fs_ribbon_pane_g1

0xe99b,	// (0x00099b36) bg_main_sp_fs_ribbon_pane_g2

0xe9a4,	// (0x00099b3f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0009af7f) bg_main_sp_fs_ribbon_pane_g

0xe9ac,	// (0x00099b47) main_sp_fs_ribbon_scheduler_pane_g1

0xe9b5,	// (0x00099b50) main_sp_fs_ribbon_scheduler_pane_g2

0xe9be,	// (0x00099b59) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0009af86) main_sp_fs_ribbon_scheduler_pane_g

0xe9c7,	// (0x00099b62) list_cale_mrui_pane

0x8ab0,	// (0x00093c4b) sp_fs_scroll_pane_cp07_ParamLimits

0x8ab0,	// (0x00093c4b) sp_fs_scroll_pane_cp07

0x8acc,	// (0x00093c67) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8acc,	// (0x00093c67) bg_sp_fs_schedule_viewer_highlight

0xe9d4,	// (0x00099b6f) list_single_sp_fs_schedule_track_pane_cp01

0xe9dc,	// (0x00099b77) list_sp_fs_schedule_track_pane

0xe9e4,	// (0x00099b7f) sp_fs_scroll_pane_cp06_ParamLimits

0xe9e4,	// (0x00099b7f) sp_fs_scroll_pane_cp06

0xcd1c,	// (0x00097eb7) bgmain_sp_fs_calendar_pane_g1

0x0e0c,	// (0x0008bfa7) list_single_cale_mrui_pane_ParamLimits

0x0e0c,	// (0x0008bfa7) list_single_cale_mrui_pane

0x8adc,	// (0x00093c77) list_single_cale_mrui_row_pane_ParamLimits

0x8adc,	// (0x00093c77) list_single_cale_mrui_row_pane

0x8ae9,	// (0x00093c84) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8ae9,	// (0x00093c84) list_single_cale_mrui_row_pane_g1

0x8b21,	// (0x00093cbc) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8b21,	// (0x00093cbc) list_single_cale_mrui_row_pane_t1

0x0e2d,	// (0x0008bfc8) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0e2d,	// (0x0008bfc8) list_single_cale_mrui_row_pane_t2

0xa380,	// (0x0009551b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa380,	// (0x0009551b) list_single_cale_mrui_row_pane_t3

0xa3af,	// (0x0009554a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa3af,	// (0x0009554a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0009af94) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0009af94) list_single_cale_mrui_row_pane_t

0x0e95,	// (0x0008c030) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0e95,	// (0x0008c030) list_single_cmail_header_editor_pane_bg_cp01

0x0ebb,	// (0x0008c056) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0ebb,	// (0x0008c056) list_single_cmail_header_editor_pane_bg_cp02

0x8b33,	// (0x00093cce) main_radioblah_text_pane_t1_ParamLimits

0x8b33,	// (0x00093cce) main_radioblah_text_pane_t1

0xea03,	// (0x00099b9e) cam6_indi_pane_cp01

0xea0b,	// (0x00099ba6) cam6_mode_pane_cp01

0xea13,	// (0x00099bae) cam6_pano_pane

0xea1c,	// (0x00099bb7) cam6_zoom_pane_cp01

0xea24,	// (0x00099bbf) cam6_pano_image_pane

0xea2f,	// (0x00099bca) cam6_pano_pane_g1

0xe2ef,	// (0x0009948a) cam6_pano_pane_g2

0xea38,	// (0x00099bd3) cam6_pano_pane_g3

0xea41,	// (0x00099bdc) cam6_pano_pane_g4

0xd2be,	// (0x00098459) cam6_pano_pane_g5

0xea4a,	// (0x00099be5) cam6_pano_pane_g6

0xea54,	// (0x00099bef) cam6_pano_pane_g7

0xea5c,	// (0x00099bf7) cam6_pano_pane_g8

0xea65,	// (0x00099c00) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0009af9d) cam6_pano_pane_g

0x97f3,	// (0x0009498e) main_browser_tag_pane

0xe8c3,	// (0x00099a5e) grid_navstr_albumart_pane

0xea70,	// (0x00099c0b) cell_navstr_albumart_pane_ParamLimits

0xea70,	// (0x00099c0b) cell_navstr_albumart_pane

0xea90,	// (0x00099c2b) cell_navstr_albumart_pane_g1

0xc6e5,	// (0x00097880) cell_navstr_albumart_pane_g2

0xc6f5,	// (0x00097890) cell_navstr_albumart_pane_g3

0xc6ed,	// (0x00097888) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0009afb0) cell_navstr_albumart_pane_g

0x8b4e,	// (0x00093ce9) bt_list_pane_ParamLimits

0x8b4e,	// (0x00093ce9) bt_list_pane

0x8b62,	// (0x00093cfd) bt_list_pane_t1

0x8b71,	// (0x00093d0c) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0009afb9) bt_list_pane_t

0x97f3,	// (0x0009498e) main_cale_prevew_pane

0x8b80,	// (0x00093d1b) popup_cale_preview_window_ParamLimits

0x8b80,	// (0x00093d1b) popup_cale_preview_window

0xa48d,	// (0x00095628) bg_popup_preview_window_pane_cp05_ParamLimits

0xa48d,	// (0x00095628) bg_popup_preview_window_pane_cp05

0xea98,	// (0x00099c33) list_cale_preview_pane_ParamLimits

0xea98,	// (0x00099c33) list_cale_preview_pane

0x8b99,	// (0x00093d34) list_double_cale_preview_pane_ParamLimits

0x8b99,	// (0x00093d34) list_double_cale_preview_pane

0xd711,	// (0x000988ac) list_single_cale_preview_pane_ParamLimits

0xd711,	// (0x000988ac) list_single_cale_preview_pane

0x8bab,	// (0x00093d46) list_single_cale_preview_pane_g1

0x8bb3,	// (0x00093d4e) list_single_cale_preview_pane_t1_ParamLimits

0x8bb3,	// (0x00093d4e) list_single_cale_preview_pane_t1

0x8bc8,	// (0x00093d63) list_double_cale_preview_pane_g1

0x8bd0,	// (0x00093d6b) list_double_cale_preview_pane_t1_ParamLimits

0x8bd0,	// (0x00093d6b) list_double_cale_preview_pane_t1

0x8be5,	// (0x00093d80) list_double_cale_preview_pane_t2_ParamLimits

0x8be5,	// (0x00093d80) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0009afbe) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0009afbe) list_double_cale_preview_pane_t

0x97f3,	// (0x0009498e) main_ezdial_pane

0xa48d,	// (0x00095628) main_sp_fs_email_pane_ParamLimits

0x8477,	// (0x00093612) cmail_ddmenu_btn01_pane_ParamLimits

0x8477,	// (0x00093612) cmail_ddmenu_btn01_pane

0x848a,	// (0x00093625) cmail_ddmenu_btn02_pane_ParamLimits

0x848a,	// (0x00093625) cmail_ddmenu_btn02_pane

0x84ad,	// (0x00093648) cmail_ddmenu_btn03_pane_ParamLimits

0x84ad,	// (0x00093648) cmail_ddmenu_btn03_pane

0x8546,	// (0x000936e1) main_sp_fs_ctrlbar_pane_ParamLimits

0x856a,	// (0x00093705) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x87d5,	// (0x00093970) list_cmail_body_pane_ParamLimits

0xe843,	// (0x000999de) bg_button_pane_cp12

0xe84c,	// (0x000999e7) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe84c,	// (0x000999e7) list_single_cmail_header_detail_pane_g3

0x8867,	// (0x00093a02) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8867,	// (0x00093a02) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0009af41) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0009af41) list_single_cmail_header_detail_pane_t

0x897f,	// (0x00093b1a) phacti_term_pane_t2_ParamLimits

0x897f,	// (0x00093b1a) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0009af4b) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0009af4b) phacti_term_pane_t

0xeaa4,	// (0x00099c3f) aid_size_list_single_double

0x8bfd,	// (0x00093d98) popup_ezdial_listscroll_window

0x8c19,	// (0x00093db4) popup_number_entry_window_cp01

0xaa6e,	// (0x00095c09) bg_popup_call_pane_cp09

0xeab0,	// (0x00099c4b) ezdial_list_pane

0xeab8,	// (0x00099c53) scroll_pane_cp23

0xc914,	// (0x00097aaf) bg_button_pane_cp028_ParamLimits

0xc914,	// (0x00097aaf) bg_button_pane_cp028

0x8c27,	// (0x00093dc2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c27,	// (0x00093dc2) cmail_ddmenu_btn01_pane_g1

0x8c33,	// (0x00093dce) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c33,	// (0x00093dce) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0009afc3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0009afc3) cmail_ddmenu_btn01_pane_g

0xeac0,	// (0x00099c5b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeac0,	// (0x00099c5b) cmail_ddmenu_btn01_pane_t1

0xc914,	// (0x00097aaf) bg_button_pane_cp029_ParamLimits

0xc914,	// (0x00097aaf) bg_button_pane_cp029

0x8c3f,	// (0x00093dda) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c3f,	// (0x00093dda) cmail_ddmenu_btn02_pane_g1

0x8c57,	// (0x00093df2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c57,	// (0x00093df2) cmail_ddmenu_btn02_pane_t1

0xa48d,	// (0x00095628) bg_button_pane_cp031_ParamLimits

0xa48d,	// (0x00095628) bg_button_pane_cp031

0x8c3f,	// (0x00093dda) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c3f,	// (0x00093dda) cmail_ddmenu_btn03_pane_g1

0x8c57,	// (0x00093df2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c57,	// (0x00093df2) cmail_ddmenu_btn03_pane_t1

0x5f9d,	// (0x00091138) cell_dialer2_keypad_pane_t1_ParamLimits

0x5fb7,	// (0x00091152) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5fb7,	// (0x00091152) cell_dialer2_keypad_pane_t1_copy1

0x7d43,	// (0x00092ede) ncimui_group_button_pane

0xa48d,	// (0x00095628) main_sp_fs_calendar_pane_ParamLimits

0x87ea,	// (0x00093985) list_single_cmail_header_caption_pane_ParamLimits

0x89b2,	// (0x00093b4d) aid_recal_txt_sm_pane

0x97f3,	// (0x0009498e) mian_recal_day_pane

0x8a2f,	// (0x00093bca) popup_sp_fs_cale_preview_window_ParamLimits

0xead5,	// (0x00099c70) list_recal_day_pane

0xa3f9,	// (0x00095594) list_single_recal_day_pane_ParamLimits

0xa3f9,	// (0x00095594) list_single_recal_day_pane

0xeafc,	// (0x00099c97) list_single_recal_day_pane_g1_ParamLimits

0xeafc,	// (0x00099c97) list_single_recal_day_pane_g1

0xa40b,	// (0x000955a6) list_single_recal_day_pane_g2_ParamLimits

0xa40b,	// (0x000955a6) list_single_recal_day_pane_g2

0xa417,	// (0x000955b2) list_single_recal_day_pane_g3_ParamLimits

0xa417,	// (0x000955b2) list_single_recal_day_pane_g3

0x0edb,	// (0x0008c076) list_single_recal_day_pane_g4_ParamLimits

0x0edb,	// (0x0008c076) list_single_recal_day_pane_g4

0xa423,	// (0x000955be) list_single_recal_day_pane_g5_ParamLimits

0xa423,	// (0x000955be) list_single_recal_day_pane_g5

0xa42f,	// (0x000955ca) list_single_recal_day_pane_g6_ParamLimits

0xa42f,	// (0x000955ca) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0009afd2) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0009afd2) list_single_recal_day_pane_g

0xa443,	// (0x000955de) list_single_recal_day_pane_t1

0xa455,	// (0x000955f0) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0009afdd) list_single_recal_day_pane_t

0x8c7b,	// (0x00093e16) ncimui_query_button_pane_ParamLimits

0x8c7b,	// (0x00093e16) ncimui_query_button_pane

0x8c8b,	// (0x00093e26) ncimui_query_button_pane_t1_ParamLimits

0x8c8b,	// (0x00093e26) ncimui_query_button_pane_t1

0xeb08,	// (0x00099ca3) ncimui_query_button_pane_t2_ParamLimits

0xeb08,	// (0x00099ca3) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0009afe2) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0009afe2) ncimui_query_button_pane_t

0x8c9e,	// (0x00093e39) query_button_pane_ParamLimits

0x8c9e,	// (0x00093e39) query_button_pane

0x97f3,	// (0x0009498e) bg_button_pane_cp0028

0xeb1b,	// (0x00099cb6) query_button_pane_t1

0x400d,	// (0x0008f1a8) main_tport_pane_ParamLimits

0x8699,	// (0x00093834) bg_popup_window_pane_cp01_ParamLimits

0x8699,	// (0x00093834) bg_popup_window_pane_cp01

0x86b4,	// (0x0009384f) heading_pane_cp08_ParamLimits

0x86b4,	// (0x0009384f) heading_pane_cp08

0x86c7,	// (0x00093862) heading_pane_cp07_ParamLimits

0x86c7,	// (0x00093862) heading_pane_cp07

0x876e,	// (0x00093909) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0009af2e) cell_tport_appsw_pane_g

0x35eb,	// (0x0008e786) input_candi_list_open_g1

0xae8a,	// (0x00096025) list_cale_time_pane_g6_ParamLimits

0xae8a,	// (0x00096025) list_cale_time_pane_g6

0x4dd5,	// (0x0008ff70) aid_size_touch_calib_1_ParamLimits

0x4dd5,	// (0x0008ff70) aid_size_touch_calib_1

0x4de7,	// (0x0008ff82) aid_size_touch_calib_2_ParamLimits

0x4de7,	// (0x0008ff82) aid_size_touch_calib_2

0x4dff,	// (0x0008ff9a) aid_size_touch_calib_3_ParamLimits

0x4dff,	// (0x0008ff9a) aid_size_touch_calib_3

0x4e1d,	// (0x0008ffb8) aid_size_touch_calib_4_ParamLimits

0x4e1d,	// (0x0008ffb8) aid_size_touch_calib_4

0x4e35,	// (0x0008ffd0) main_touch_calib_button_group_pane_ParamLimits

0x4e35,	// (0x0008ffd0) main_touch_calib_button_group_pane

0x4e4d,	// (0x0008ffe8) main_touch_calib_pane_g1_ParamLimits

0x4e5f,	// (0x0008fffa) main_touch_calib_pane_g2_ParamLimits

0x4e71,	// (0x0009000c) main_touch_calib_pane_g3_ParamLimits

0x4e83,	// (0x0009001e) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0009a8e4) main_touch_calib_pane_g_ParamLimits

0x4e95,	// (0x00090030) main_touch_calib_pane_t1_ParamLimits

0x4eaf,	// (0x0009004a) main_touch_calib_pane_t2_ParamLimits

0x4ec9,	// (0x00090064) main_touch_calib_pane_t3_ParamLimits

0x4edd,	// (0x00090078) main_touch_calib_pane_t4_ParamLimits

0x4ef1,	// (0x0009008c) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x0009a8ed) main_touch_calib_pane_t_ParamLimits

0xd061,	// (0x000981fc) list_single_fp_cale_pane_g3_ParamLimits

0xd061,	// (0x000981fc) list_single_fp_cale_pane_g3

0xa48d,	// (0x00095628) bg_button_pane_cp012_ParamLimits

0xa48d,	// (0x00095628) bg_vkb2_func_pane_cp03_ParamLimits

0x6f79,	// (0x00092114) cell_vitu2_function_top_pane_g1_ParamLimits

0xa48d,	// (0x00095628) bg_vkb2_func_pane_cp04_ParamLimits

0x7cce,	// (0x00092e69) main_ncimui_button_group_pane_ParamLimits

0x7cce,	// (0x00092e69) main_ncimui_button_group_pane

0x7d2e,	// (0x00092ec9) main_ncimui_pane_t3_ParamLimits

0x7d2e,	// (0x00092ec9) main_ncimui_pane_t3

0xe8d9,	// (0x00099a74) phacti_button_group_pane

0xeaa4,	// (0x00099c3f) aid_size_list_single_double_ParamLimits

0x8bfd,	// (0x00093d98) popup_ezdial_listscroll_window_ParamLimits

0x8c19,	// (0x00093db4) popup_number_entry_window_cp01_ParamLimits

0x8cb1,	// (0x00093e4c) phacti_button_pane_ParamLimits

0x8cb1,	// (0x00093e4c) phacti_button_pane

0x97f3,	// (0x0009498e) bg_button_pane_cp14

0xeb29,	// (0x00099cc4) phacti_button_pane_t1

0x8cc2,	// (0x00093e5d) main_touch_calib_button_pane_ParamLimits

0x8cc2,	// (0x00093e5d) main_touch_calib_button_pane

0xa882,	// (0x00095a1d) bg_button_pane_cp18_ParamLimits

0xa882,	// (0x00095a1d) bg_button_pane_cp18

0xeb37,	// (0x00099cd2) main_touch_calib_button_pane_t1_ParamLimits

0xeb37,	// (0x00099cd2) main_touch_calib_button_pane_t1

0xeb4d,	// (0x00099ce8) main_touch_calib_button_pane_t2_ParamLimits

0xeb4d,	// (0x00099ce8) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0009afe7) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0009afe7) main_touch_calib_button_pane_t

0x97f3,	// (0x0009498e) cell_ncimui_button_pane

0x97f3,	// (0x0009498e) bg_button_pane_cp032

0xeb6b,	// (0x00099d06) cell_ncimui_button_pane_t1

0xa110,	// (0x000952ab) image3_infobar_pane_ParamLimits

0xa110,	// (0x000952ab) image3_infobar_pane

0x8143,	// (0x000932de) fs_bigclock_status_pane_ParamLimits

0x8143,	// (0x000932de) fs_bigclock_status_pane

0x8150,	// (0x000932eb) main_fs_bigclock_clock_pane_ParamLimits

0x8150,	// (0x000932eb) main_fs_bigclock_clock_pane

0x816e,	// (0x00093309) main_fs_bigclock_indi_pane_ParamLimits

0x816e,	// (0x00093309) main_fs_bigclock_indi_pane

0x81a0,	// (0x0009333b) main_fs_bigclock_swipe_pane_ParamLimits

0x81a0,	// (0x0009333b) main_fs_bigclock_swipe_pane

0x97f3,	// (0x0009498e) main_fs_clock_dumped_data

0xe3fc,	// (0x00099597) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3fc,	// (0x00099597) list_single_fs_bigclock_indicator_pane_g1

0xe418,	// (0x000995b3) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe418,	// (0x000995b3) list_single_fs_bigclock_indicator_pane_g2

0xe432,	// (0x000995cd) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe432,	// (0x000995cd) list_single_fs_bigclock_indicator_pane_g3

0xe44c,	// (0x000995e7) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe44c,	// (0x000995e7) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x0009ae0b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x0009ae0b) list_single_fs_bigclock_indicator_pane_g

0xe477,	// (0x00099612) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe477,	// (0x00099612) list_single_fs_bigclock_indicator_pane_t1

0xe49f,	// (0x0009963a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe49f,	// (0x0009963a) list_single_fs_bigclock_indicator_pane_t2

0xe4c7,	// (0x00099662) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4c7,	// (0x00099662) list_single_fs_bigclock_indicator_pane_t3

0xe4ef,	// (0x0009968a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4ef,	// (0x0009968a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x0009ae16) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x0009ae16) list_single_fs_bigclock_indicator_pane_t

0xeb79,	// (0x00099d14) image3_infobar_fav_pane_ParamLimits

0xeb79,	// (0x00099d14) image3_infobar_fav_pane

0xeb89,	// (0x00099d24) image3_infobar_loc_pane_ParamLimits

0xeb89,	// (0x00099d24) image3_infobar_loc_pane

0xeb9d,	// (0x00099d38) image3_infobar_time_pane_ParamLimits

0xeb9d,	// (0x00099d38) image3_infobar_time_pane

0xcd1c,	// (0x00097eb7) image3_infobar_time_pane_g1

0xebad,	// (0x00099d48) image3_infobar_time_pane_t1

0xcd1c,	// (0x00097eb7) image3_infobar_loc_pane_g1

0xebbb,	// (0x00099d56) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0009afec) image3_infobar_loc_pane_g

0xebc3,	// (0x00099d5e) image3_infobar_loc_pane_t1

0xcd1c,	// (0x00097eb7) image3_infobar_fav_pane_g1

0xebd1,	// (0x00099d6c) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0009aff1) image3_infobar_fav_pane_g

0xebd9,	// (0x00099d74) fs_bigclock_status_battery_pane

0xebe2,	// (0x00099d7d) fs_bigclock_status_signal_pane

0xebeb,	// (0x00099d86) fs_bigclock_status_title_pane

0xebf4,	// (0x00099d8f) fs_bigclock_status_signal_pane_g1

0xebfd,	// (0x00099d98) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0009aff6) fs_bigclock_status_signal_pane_g

0xec05,	// (0x00099da0) fs_bigclock_status_battery_pane_g1

0xec0e,	// (0x00099da9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0009affb) fs_bigclock_status_battery_pane_g

0xec16,	// (0x00099db1) fs_bigclock_status_title_pane_t1

0x8cd7,	// (0x00093e72) main_fs_bigclock_clock_pane_g1

0x8cd7,	// (0x00093e72) main_fs_bigclock_clock_pane_g2

0x8ce8,	// (0x00093e83) main_fs_bigclock_clock_pane_g3

0x8ce8,	// (0x00093e83) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0009b000) main_fs_bigclock_clock_pane_g

0x8cfb,	// (0x00093e96) main_fs_bigclock_clock_pane_t1

0x8d11,	// (0x00093eac) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0009b009) main_fs_bigclock_clock_pane_t

0xec24,	// (0x00099dbf) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec24,	// (0x00099dbf) list_single_fs_bigclock_indicator_pane

0xec35,	// (0x00099dd0) list_single_fs_bigclock_pane_ParamLimits

0xec35,	// (0x00099dd0) list_single_fs_bigclock_pane

0xec5b,	// (0x00099df6) main_fs_bigclock_indicator_pane_t1

0xec6a,	// (0x00099e05) list_single_fs_bigclock_pane_g1

0xec72,	// (0x00099e0d) list_single_fs_bigclock_pane_t1

0xcd1c,	// (0x00097eb7) main_fs_bigclock_swipe_pane_g1

0xecb5,	// (0x00099e50) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0009b01a) main_fs_bigclock_swipe_pane_g

0xecbd,	// (0x00099e58) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecbd,	// (0x00099e58) main_fs_bigclock_swipe_pane_t1

0x2ef2,	// (0x0008e08d) call_type_pane_ParamLimits

0x97f3,	// (0x0009498e) main_btmg_pane

0x8b15,	// (0x00093cb0) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8b15,	// (0x00093cb0) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0009af8d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0009af8d) list_single_cale_mrui_row_pane_g

0xa3e8,	// (0x00095583) list_recal_vselct_arw_lo_pane

0xeaf4,	// (0x00099c8f) list_recal_vselct_arw_up_pane

0xa3f0,	// (0x0009558b) list_recal_vselct_pane

0x8d6b,	// (0x00093f06) btmg_button_pane

0x8d75,	// (0x00093f10) main_btmg_pane_g1

0x97f3,	// (0x0009498e) bg_button_pane_cp044

0xecda,	// (0x00099e75) btmg_button_pane_t1

0xc900,	// (0x00097a9b) aid_listscroll_gen

0xa48d,	// (0x00095628) main_cntbar_detail_pane

0xe825,	// (0x000999c0) list_cmail_folder_pane

0xd517,	// (0x000986b2) sp_fs_scroll_pane_cp03_ParamLimits

0x0ef3,	// (0x0008c08e) list_single_fs_dyc_pane_cp01_ParamLimits

0x0ef3,	// (0x0008c08e) list_single_fs_dyc_pane_cp01

0xece8,	// (0x00099e83) aid_size_cmail_indent

0xa467,	// (0x00095602) list_single_dyc_row_pane_cp01

0x8db1,	// (0x00093f4c) cntbar_detail_list_pane_ParamLimits

0x8db1,	// (0x00093f4c) cntbar_detail_list_pane

0x8dfd,	// (0x00093f98) main_cntbar_detail_cont_pane_ParamLimits

0x8dfd,	// (0x00093f98) main_cntbar_detail_cont_pane

0xd517,	// (0x000986b2) scroll_pane_cp032_ParamLimits

0xd517,	// (0x000986b2) scroll_pane_cp032

0x8e11,	// (0x00093fac) cntbar_detail_list_event_pane_ParamLimits

0x8e11,	// (0x00093fac) cntbar_detail_list_event_pane

0x8dc1,	// (0x00093f5c) cntbar_detail_list_shct_pane

0xad15,	// (0x00095eb0) aid_list_gen

0xecf1,	// (0x00099e8c) aid_scroll

0xecfa,	// (0x00099e95) aid_size_touch_scroll_bar

0x756b,	// (0x00092706) aid_list_double

0x7559,	// (0x000926f4) aid_list_single

0x7559,	// (0x000926f4) aid_list_single_lg

0x0f09,	// (0x0008c0a4) aid_list_z_g_a_sm

0x8e21,	// (0x00093fbc) aid_list_z_g_d

0x0f11,	// (0x0008c0ac) aid_txt_z_prm

0x0f1f,	// (0x0008c0ba) aid_txt_z_prm_cp01

0x0f2d,	// (0x0008c0c8) aid_txt_z_sec

0x8e29,	// (0x00093fc4) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e29,	// (0x00093fc4) main_cntbar_detail_cont_pane_g1

0x8e3d,	// (0x00093fd8) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e3d,	// (0x00093fd8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0009b01f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0009b01f) main_cntbar_detail_cont_pane_g

0xed03,	// (0x00099e9e) main_cntbar_detail_cont_pane_t1

0xed11,	// (0x00099eac) main_cntbar_detail_cont_pane_t2

0xed2d,	// (0x00099ec8) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0009b024) main_cntbar_detail_cont_pane_t

0x8e4d,	// (0x00093fe8) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8e4d,	// (0x00093fe8) cell_cntbar_detail_list_shct_pane

0xed3b,	// (0x00099ed6) cntbar_detail_list_shct_pane_g1

0xed44,	// (0x00099edf) cntbar_detail_list_shct_pane_g2

0x0001,

0x0167,	// (0x0008b302) cntbar_detail_list_shct_pane_g

0x8e61,	// (0x00093ffc) cntbar_detail_list_event_pane_g1_ParamLimits

0x8e61,	// (0x00093ffc) cntbar_detail_list_event_pane_g1

0x8e6d,	// (0x00094008) cntbar_detail_list_event_pane_g2_ParamLimits

0x8e6d,	// (0x00094008) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0009b02b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0009b02b) cntbar_detail_list_event_pane_g

0x8ed9,	// (0x00094074) cntbar_detail_list_event_pane_t1_ParamLimits

0x8ed9,	// (0x00094074) cntbar_detail_list_event_pane_t1

0x8eee,	// (0x00094089) cntbar_detail_list_event_pane_t2_ParamLimits

0x8eee,	// (0x00094089) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0009b038) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0009b038) cntbar_detail_list_event_pane_t

0xcd1c,	// (0x00097eb7) cell_cntbar_detail_list_shct_pane_g1

0xb481,	// (0x0009661c) navi_pane_mv_g3

0xa48d,	// (0x00095628) main_cntbar_detail_pane_ParamLimits

0x97f3,	// (0x0009498e) main_notif_wgt_pane

0x9efc,	// (0x00095097) aid_tch_main_mp4_pane_g4

0xa108,	// (0x000952a3) popup_slider_window_cp02

0xa3de,	// (0x00095579) list_recal_day_event_pane

0x8d7f,	// (0x00093f1a) cntbar_detail_btn_pane_ParamLimits

0x8d7f,	// (0x00093f1a) cntbar_detail_btn_pane

0x8d98,	// (0x00093f33) cntbar_detail_btn_pane_cp01_ParamLimits

0x8d98,	// (0x00093f33) cntbar_detail_btn_pane_cp01

0x8dc1,	// (0x00093f5c) cntbar_detail_list_shct_pane_ParamLimits

0x8dd1,	// (0x00093f6c) cntbar_detail_pane_g1_ParamLimits

0x8dd1,	// (0x00093f6c) cntbar_detail_pane_g1

0x8de1,	// (0x00093f7c) cntbar_detail_pane_t1_ParamLimits

0x8de1,	// (0x00093f7c) cntbar_detail_pane_t1

0x8e79,	// (0x00094014) cntbar_detail_list_event_pane_g3_ParamLimits

0x8e79,	// (0x00094014) cntbar_detail_list_event_pane_g3

0x8e91,	// (0x0009402c) cntbar_detail_list_event_pane_g4_ParamLimits

0x8e91,	// (0x0009402c) cntbar_detail_list_event_pane_g4

0x8ea9,	// (0x00094044) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ea9,	// (0x00094044) cntbar_detail_list_event_pane_g5

0x8ec1,	// (0x0009405c) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ec1,	// (0x0009405c) cntbar_detail_list_event_pane_g6

0x8f03,	// (0x0009409e) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f03,	// (0x0009409e) cntbar_detail_list_event_pane_t3

0x8f15,	// (0x000940b0) popup_notif_wgt_window_ParamLimits

0x8f15,	// (0x000940b0) popup_notif_wgt_window

0x8f2e,	// (0x000940c9) popup_submenu_window_cp01_ParamLimits

0x8f2e,	// (0x000940c9) popup_submenu_window_cp01

0xaa6e,	// (0x00095c09) bg_popup_window_pane_cp10

0xed4d,	// (0x00099ee8) listscroll_notif_wgt_pane

0xed5f,	// (0x00099efa) list_notif_wgt_window

0xed68,	// (0x00099f03) scroll_pane_cp033

0x8f40,	// (0x000940db) list_notif_wgt_row_pane_ParamLimits

0x8f40,	// (0x000940db) list_notif_wgt_row_pane

0xed71,	// (0x00099f0c) aid_size_list_notif_wgt_del

0xed7e,	// (0x00099f19) list_notif_wgt_row_pane_g1

0xed8a,	// (0x00099f25) list_notif_wgt_row_pane_g2

0xed99,	// (0x00099f34) list_notif_wgt_row_pane_g3

0x0002,

0x0180,	// (0x0008b31b) list_notif_wgt_row_pane_g

0xeda6,	// (0x00099f41) list_notif_wgt_row_pane_t1

0xedbc,	// (0x00099f57) list_notif_wgt_row_pane_t2

0xedce,	// (0x00099f69) list_notif_wgt_row_pane_t3

0x0002,

0x0187,	// (0x0008b322) list_notif_wgt_row_pane_t

0xd92f,	// (0x00098aca) list_recal_day_event_pane_g1

0xede0,	// (0x00099f7b) list_recal_day_event_pane_t1

0x97f3,	// (0x0009498e) bg_button_pane_cp045

0x8f50,	// (0x000940eb) cntbar_detail_btn_pane_t1

0xc914,	// (0x00097aaf) main_callh_pane_ParamLimits

0xc914,	// (0x00097aaf) main_callh_pane

0x97f3,	// (0x0009498e) main_coverflow0_pane

0x97f3,	// (0x0009498e) main_wgtman_pane

0x81b8,	// (0x00093353) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81b8,	// (0x00093353) main_fs_bigclock_unlock_btn_pane

0x8766,	// (0x00093901) bg_button_pane_cp16

0x8776,	// (0x00093911) cell_tport_appsw_pane_g3

0x8f5e,	// (0x000940f9) cf0_flow_pane_ParamLimits

0x8f5e,	// (0x000940f9) cf0_flow_pane

0xedef,	// (0x00099f8a) listscroll_cf0_pane

0xedfa,	// (0x00099f95) main_cf0_pane_g1

0x8f73,	// (0x0009410e) main_cf0_pane_t1_ParamLimits

0x8f73,	// (0x0009410e) main_cf0_pane_t1

0x8f8a,	// (0x00094125) main_cf0_pane_t2_ParamLimits

0x8f8a,	// (0x00094125) main_cf0_pane_t2

0x0001,

0xfea4,	// (0x0009b03f) main_cf0_pane_t_ParamLimits

0xfea4,	// (0x0009b03f) main_cf0_pane_t

0xee0c,	// (0x00099fa7) scroll_pane_cp11

0x8fa1,	// (0x0009413c) cf0_flow_pane_g1

0x8fa9,	// (0x00094144) cf0_flow_pane_g2

0x0001,

0xfea9,	// (0x0009b044) cf0_flow_pane_g

0x8fb1,	// (0x0009414c) cf0_flow_pane_t1

0x97f3,	// (0x0009498e) main_call6_pane

0x97f3,	// (0x0009498e) main_calllock_pane

0x8fbf,	// (0x0009415a) call6_btn_grp_pane_ParamLimits

0x8fbf,	// (0x0009415a) call6_btn_grp_pane

0x8fd9,	// (0x00094174) call6_pane_g1_ParamLimits

0x8fd9,	// (0x00094174) call6_pane_g1

0x8fef,	// (0x0009418a) popup_call6_1st_window_ParamLimits

0x8fef,	// (0x0009418a) popup_call6_1st_window

0x9000,	// (0x0009419b) popup_call6_2nd_window_ParamLimits

0x9000,	// (0x0009419b) popup_call6_2nd_window

0x9011,	// (0x000941ac) cell_call6_btn_pane_ParamLimits

0x9011,	// (0x000941ac) cell_call6_btn_pane

0xaa6e,	// (0x00095c09) bg_popup_call2_in_pane_cp03

0xee17,	// (0x00099fb2) popup_call6_1st_window_g1

0xee1f,	// (0x00099fba) popup_call6_1st_window_g2

0xee27,	// (0x00099fc2) popup_call6_1st_window_g3

0x0002,

0x019d,	// (0x0008b338) popup_call6_1st_window_g

0xee2f,	// (0x00099fca) popup_call6_1st_window_t1

0xee3e,	// (0x00099fd9) popup_call6_1st_window_t2

0xee4c,	// (0x00099fe7) popup_call6_1st_window_t3

0x0002,

0x01a4,	// (0x0008b33f) popup_call6_1st_window_t

0xaa6e,	// (0x00095c09) bg_popup_call2_in_pane_cp04

0xee17,	// (0x00099fb2) popup_call6_2nd_window_g1

0xee1f,	// (0x00099fba) popup_call6_2nd_window_g2

0xee27,	// (0x00099fc2) popup_call6_2nd_window_g3

0x0002,

0x019d,	// (0x0008b338) popup_call6_2nd_window_g

0xee2f,	// (0x00099fca) popup_call6_2nd_window_t1

0x97f3,	// (0x0009498e) bg_button_pane_cp15

0xee5a,	// (0x00099ff5) cell_call6_btn_pane_g1

0xa470,	// (0x0009560b) cell_call6_btn_pane_t1

0x9025,	// (0x000941c0) listscroll_wgtman_pane_ParamLimits

0x9025,	// (0x000941c0) listscroll_wgtman_pane

0x9046,	// (0x000941e1) wgtman_btn_pane_ParamLimits

0x9046,	// (0x000941e1) wgtman_btn_pane

0xb295,	// (0x00096430) aid_scroll_copy1

0xee63,	// (0x00099ffe) list_wgtman_pane

0x9089,	// (0x00094224) wgtman_btn_pane_g1_ParamLimits

0x9089,	// (0x00094224) wgtman_btn_pane_g1

0x90b5,	// (0x00094250) wgtman_btn_pane_t1_ParamLimits

0x90b5,	// (0x00094250) wgtman_btn_pane_t1

0xee6d,	// (0x0009a008) wgtman_btn_pane_t2_ParamLimits

0xee6d,	// (0x0009a008) wgtman_btn_pane_t2

0x0001,

0xfeae,	// (0x0009b049) wgtman_btn_pane_t_ParamLimits

0xfeae,	// (0x0009b049) wgtman_btn_pane_t

0x90f2,	// (0x0009428d) listrow_wgtman_pane_ParamLimits

0x90f2,	// (0x0009428d) listrow_wgtman_pane

0x9104,	// (0x0009429f) listrow_wgtman_pane_g1

0x9111,	// (0x000942ac) listrow_wgtman_pane_g2

0x0001,

0xfeb3,	// (0x0009b04e) listrow_wgtman_pane_g

0x0f3b,	// (0x0008c0d6) listrow_wgtman_pane_t1

0x0f53,	// (0x0008c0ee) listrow_wgtman_pane_t2

0x0001,

0xfeb8,	// (0x0009b053) listrow_wgtman_pane_t

0x0f79,	// (0x0008c114) wait_bar_pane_cp09

0xee84,	// (0x0009a01f) main_calllock_btn_pane

0xee8e,	// (0x0009a029) main_calllock_pane_g1

0x97f3,	// (0x0009498e) bg_button_pane_cp17

0xee5a,	// (0x00099ff5) main_calllock_btn_pane_g1

0xee9a,	// (0x0009a035) main_calllock_btn_pane_t1

0x97f3,	// (0x0009498e) main_dialer3_pane

0x97f3,	// (0x0009498e) main_fmrd2_pane

0xcd1c,	// (0x00097eb7) main_fs_bigclock_unlock_btn_pane_g1

0x9137,	// (0x000942d2) main_fs_bigclock_unlock_btn_pane_t1

0x9145,	// (0x000942e0) area_fmrd2_info_pane_ParamLimits

0x9145,	// (0x000942e0) area_fmrd2_info_pane

0x9156,	// (0x000942f1) area_fmrd2_visual_pane_ParamLimits

0x9156,	// (0x000942f1) area_fmrd2_visual_pane

0x9164,	// (0x000942ff) fmrd2_indi_pane_ParamLimits

0x9164,	// (0x000942ff) fmrd2_indi_pane

0x9171,	// (0x0009430c) area_fmrd2_visual_pane_g1

0x9179,	// (0x00094314) area_fmrd2_visual_pane_t1

0x9189,	// (0x00094324) area_fmrd2_visual_pane_t2

0x9199,	// (0x00094334) area_fmrd2_visual_pane_t3

0x0002,

0xfec2,	// (0x0009b05d) area_fmrd2_visual_pane_t

0x91a9,	// (0x00094344) area_fmrd2_info_pane_g1

0x91b1,	// (0x0009434c) area_fmrd2_info_pane_t1

0x91c1,	// (0x0009435c) area_fmrd2_info_pane_t2

0x91d1,	// (0x0009436c) area_fmrd2_info_pane_t3

0x91e1,	// (0x0009437c) area_fmrd2_info_pane_t4

0x0003,

0xfec9,	// (0x0009b064) area_fmrd2_info_pane_t

0x91ef,	// (0x0009438a) fmrd2_indi_pane_t1

0x91ff,	// (0x0009439a) fmrd2_indi_pane_t2

0x920f,	// (0x000943aa) fmrd2_indi_pane_t3

0x0002,

0xfed2,	// (0x0009b06d) fmrd2_indi_pane_t

0xe45b,	// (0x000995f6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe45b,	// (0x000995f6) list_single_fs_bigclock_indicator_pane_g5

0xe50c,	// (0x000996a7) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe50c,	// (0x000996a7) list_single_fs_bigclock_indicator_pane_t5

0x8994,	// (0x00093b2f) aid_cell_bcale_month_pane_ParamLimits

0x8994,	// (0x00093b2f) aid_cell_bcale_month_pane

0x89bb,	// (0x00093b56) bcale_month_pane_ParamLimits

0x89bb,	// (0x00093b56) bcale_month_pane

0x89df,	// (0x00093b7a) bcale_preview_pane_ParamLimits

0x89df,	// (0x00093b7a) bcale_preview_pane

0xec72,	// (0x00099e0d) list_single_fs_bigclock_pane_t1_ParamLimits

0xec91,	// (0x00099e2c) list_single_fs_bigclock_pane_t2_ParamLimits

0xec91,	// (0x00099e2c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0009b015) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009b015) list_single_fs_bigclock_pane_t

0x912f,	// (0x000942ca) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfebd,	// (0x0009b058) main_fs_bigclock_unlock_btn_pane_g

0x921f,	// (0x000943ba) aid_dia3_key_size_ParamLimits

0x921f,	// (0x000943ba) aid_dia3_key_size

0x922e,	// (0x000943c9) aid_dia3_listrow_size_ParamLimits

0x922e,	// (0x000943c9) aid_dia3_listrow_size

0x9243,	// (0x000943de) dia3_keypad_fun_pane_ParamLimits

0x9243,	// (0x000943de) dia3_keypad_fun_pane

0x925f,	// (0x000943fa) dia3_keypad_num_pane_ParamLimits

0x925f,	// (0x000943fa) dia3_keypad_num_pane

0x927a,	// (0x00094415) dia3_listscroll_pane_ParamLimits

0x927a,	// (0x00094415) dia3_listscroll_pane

0x928d,	// (0x00094428) dia3_numentry_pane_ParamLimits

0x928d,	// (0x00094428) dia3_numentry_pane

0xeea9,	// (0x0009a044) dia3_list_pane

0xeeb4,	// (0x0009a04f) scroll_pane_cp12

0x97f3,	// (0x0009498e) bg_dia3_numentry_pane

0x92a1,	// (0x0009443c) dia3_numentry_pane_t1

0x92b0,	// (0x0009444b) cell_dia3_key_num_pane

0x92b8,	// (0x00094453) cell_dia3_key0_fun_pane_ParamLimits

0x92b8,	// (0x00094453) cell_dia3_key0_fun_pane

0x92cc,	// (0x00094467) cell_dia3_key1_fun_pane_ParamLimits

0x92cc,	// (0x00094467) cell_dia3_key1_fun_pane

0x92e4,	// (0x0009447f) dia3_listrow_pane

0xe1ae,	// (0x00099349) bg_dia3_numentry_pane_g1

0x97f3,	// (0x0009498e) bg_button_pane_cp21

0xeebf,	// (0x0009a05a) cell_dia3_key_num_pane_t1

0xeecd,	// (0x0009a068) cell_dia3_key_num_pane_t2

0xeedc,	// (0x0009a077) cell_dia3_key_num_pane_t3

0xeeeb,	// (0x0009a086) cell_dia3_key_num_pane_t4

0x0003,

0x01d6,	// (0x0008b371) cell_dia3_key_num_pane_t

0x97f3,	// (0x0009498e) bg_button_pane_cp19

0x92f6,	// (0x00094491) cell_dia3_key0_fun_pane_g1

0x97f3,	// (0x0009498e) bg_button_pane_cp20

0x92fe,	// (0x00094499) cell_dia3_key1_fun_pane_g1

0x9306,	// (0x000944a1) area_left_week_number_pane

0x9312,	// (0x000944ad) area_top_day_name_pane

0x9325,	// (0x000944c0) frame_month_view_pane

0xeefa,	// (0x0009a095) grid_month_view_pane

0x9338,	// (0x000944d3) cell_top_day_name_pane_ParamLimits

0x9338,	// (0x000944d3) cell_top_day_name_pane

0x9365,	// (0x00094500) cell_area_left_week_number_pane_ParamLimits

0x9365,	// (0x00094500) cell_area_left_week_number_pane

0x9379,	// (0x00094514) cell_month_view_pane_ParamLimits

0x9379,	// (0x00094514) cell_month_view_pane

0xef08,	// (0x0009a0a3) frm_month_g1

0x93a6,	// (0x00094541) frm_month_g2

0x93b9,	// (0x00094554) frm_month_g3

0x93cc,	// (0x00094567) frm_month_g4

0x93df,	// (0x0009457a) frm_month_g5

0x93f2,	// (0x0009458d) frm_month_g6

0x9405,	// (0x000945a0) frm_month_g7

0xef15,	// (0x0009a0b0) frm_month_g8

0x9418,	// (0x000945b3) frm_month_g9

0x9428,	// (0x000945c3) frm_month_g10

0x9438,	// (0x000945d3) frm_month_g11

0x9448,	// (0x000945e3) frm_month_g12

0x945a,	// (0x000945f5) frm_month_g13

0x946c,	// (0x00094607) frm_month_g14

0x9480,	// (0x0009461b) frm_month_g15

0x9494,	// (0x0009462f) frm_month_g16

0x000f,

0xfed9,	// (0x0009b074) frm_month_g

0xef22,	// (0x0009a0bd) cell_top_day_name_pane_t1

0x94a8,	// (0x00094643) cell_area_left_week_number_pane_g1

0x94b4,	// (0x0009464f) cell_area_left_week_number_pane_t1

0xcf61,	// (0x000980fc) cell_month_view_pane_g1

0x94c7,	// (0x00094662) cell_month_view_pane_t1

0x97f3,	// (0x0009498e) main_fps_pane

0xe744,	// (0x000998df) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe744,	// (0x000998df) cmail_ddmenu_btn02_pane_cp1

0xe760,	// (0x000998fb) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe760,	// (0x000998fb) cmail_ddmenu_btn02_pane_cp2

0x8c4b,	// (0x00093de6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c4b,	// (0x00093de6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0009afc8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0009afc8) cmail_ddmenu_btn02_pane_g

0x8c69,	// (0x00093e04) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c69,	// (0x00093e04) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0009afcd) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0009afcd) cmail_ddmenu_btn02_pane_t

0x94da,	// (0x00094675) fps_text_pane_ParamLimits

0x94da,	// (0x00094675) fps_text_pane

0x94f1,	// (0x0009468c) main_fps_pane_g1_ParamLimits

0x94f1,	// (0x0009468c) main_fps_pane_g1

0x950b,	// (0x000946a6) wait_bar_pane_cp010_ParamLimits

0x950b,	// (0x000946a6) wait_bar_pane_cp010

0x951c,	// (0x000946b7) fps_text_pane_t1_ParamLimits

0x951c,	// (0x000946b7) fps_text_pane_t1

0xd678,	// (0x00098813) cam4_image_uncrop_pane_g1

0xd681,	// (0x0009881c) cam4_image_uncrop_pane_g2

0x64d6,	// (0x00091671) cam4_image_uncrop_pane_g3

0x64df,	// (0x0009167a) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0009aa85) cam4_image_uncrop_pane_g

0x92e4,	// (0x0009447f) dia3_listrow_pane_ParamLimits

0x97f3,	// (0x0009498e) main_phob2_pane

0x8737,	// (0x000938d2) cell_tport_appsw_pane_cp02_ParamLimits

0x8737,	// (0x000938d2) cell_tport_appsw_pane_cp02

0x874b,	// (0x000938e6) cell_tport_appsw_pane_cp03_ParamLimits

0x874b,	// (0x000938e6) cell_tport_appsw_pane_cp03

0x97f3,	// (0x0009498e) phob2_contact_card_pane

0x97f3,	// (0x0009498e) phob2_listscroll_pane

0xef35,	// (0x0009a0d0) phob2_list_pane

0xef3d,	// (0x0009a0d8) scroll_pane_cp034

0x9534,	// (0x000946cf) phob2_cc_data_pane_ParamLimits

0x9534,	// (0x000946cf) phob2_cc_data_pane

0x9553,	// (0x000946ee) phob2_cc_listscroll_pane_ParamLimits

0x9553,	// (0x000946ee) phob2_cc_listscroll_pane

0x90f2,	// (0x0009428d) list_double_large_graphic_phob2_pane_ParamLimits

0x90f2,	// (0x0009428d) list_double_large_graphic_phob2_pane

0x9571,	// (0x0009470c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9571,	// (0x0009470c) list_double_large_graphic_phob2_pane_g1

0x0f8b,	// (0x0008c126) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0f8b,	// (0x0008c126) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfefa,	// (0x0009b095) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfefa,	// (0x0009b095) list_double_large_graphic_phob2_pane_g

0x0f97,	// (0x0008c132) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0f97,	// (0x0008c132) list_double_large_graphic_phob2_pane_t1

0x0fad,	// (0x0008c148) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0fad,	// (0x0008c148) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeff,	// (0x0009b09a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeff,	// (0x0009b09a) list_double_large_graphic_phob2_pane_t

0x97f3,	// (0x0009498e) list_highlight_pane_cp024

0x9587,	// (0x00094722) phob2_cc_button_pane

0x958f,	// (0x0009472a) phob2_cc_data_pane_g1_ParamLimits

0x958f,	// (0x0009472a) phob2_cc_data_pane_g1

0x95a4,	// (0x0009473f) phob2_cc_data_pane_g2_ParamLimits

0x95a4,	// (0x0009473f) phob2_cc_data_pane_g2

0x0001,

0xff04,	// (0x0009b09f) phob2_cc_data_pane_g_ParamLimits

0xff04,	// (0x0009b09f) phob2_cc_data_pane_g

0x95b4,	// (0x0009474f) phob2_cc_data_pane_t1_ParamLimits

0x95b4,	// (0x0009474f) phob2_cc_data_pane_t1

0x95cc,	// (0x00094767) phob2_cc_data_pane_t2_ParamLimits

0x95cc,	// (0x00094767) phob2_cc_data_pane_t2

0x95e4,	// (0x0009477f) phob2_cc_data_pane_t3_ParamLimits

0x95e4,	// (0x0009477f) phob2_cc_data_pane_t3

0x0002,

0xff09,	// (0x0009b0a4) phob2_cc_data_pane_t_ParamLimits

0xff09,	// (0x0009b0a4) phob2_cc_data_pane_t

0xef45,	// (0x0009a0e0) phob2_cc_list_pane_ParamLimits

0xef45,	// (0x0009a0e0) phob2_cc_list_pane

0xd9d8,	// (0x00098b73) scroll_pane_cp035_ParamLimits

0xd9d8,	// (0x00098b73) scroll_pane_cp035

0xa48d,	// (0x00095628) bg_button_pane_cp033

0xef51,	// (0x0009a0ec) phob2_cc_button_pane_g1

0xef5d,	// (0x0009a0f8) phob2_cc_button_pane_t1

0xef72,	// (0x0009a10d) phob2_cc_button_pane_t2

0x0001,

0x0216,	// (0x0008b3b1) phob2_cc_button_pane_t

0x95fc,	// (0x00094797) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x95fc,	// (0x00094797) list_double_large_graphic_phob2_cc_pane

0x962e,	// (0x000947c9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x962e,	// (0x000947c9) list_double_large_graphic_phob2_cc_pane_g1

0x0fc2,	// (0x0008c15d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0fc2,	// (0x0008c15d) list_double_large_graphic_phob2_cc_pane_g2

0x963a,	// (0x000947d5) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x963a,	// (0x000947d5) list_double_large_graphic_phob2_cc_pane_g3

0x0fce,	// (0x0008c169) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0fce,	// (0x0008c169) list_double_large_graphic_phob2_cc_pane_g4

0x0fda,	// (0x0008c175) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0fda,	// (0x0008c175) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff10,	// (0x0009b0ab) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff10,	// (0x0009b0ab) list_double_large_graphic_phob2_cc_pane_g

0x0fe6,	// (0x0008c181) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0fe6,	// (0x0008c181) list_double_large_graphic_phob2_cc_pane_t1

0x100f,	// (0x0008c1aa) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x100f,	// (0x0008c1aa) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff1b,	// (0x0009b0b6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff1b,	// (0x0009b0b6) list_double_large_graphic_phob2_cc_pane_t

0xef84,	// (0x0009a11f) list_highlight_pane_cp025_ParamLimits

0xef84,	// (0x0009a11f) list_highlight_pane_cp025

0xa48d,	// (0x00095628) bg_button_pane_cp033_ParamLimits

0xef51,	// (0x0009a0ec) phob2_cc_button_pane_g1_ParamLimits

0xef5d,	// (0x0009a0f8) phob2_cc_button_pane_t1_ParamLimits

0xef72,	// (0x0009a10d) phob2_cc_button_pane_t2_ParamLimits

0x0216,	// (0x0008b3b1) phob2_cc_button_pane_t_ParamLimits

0x1281,	// (0x0008c41c) popup_wgtman_window

0xd7f3,	// (0x0009898e) scroll_pane_cp038

0x906b,	// (0x00094206) wgtman_btn_pane_cp_01_ParamLimits

0x906b,	// (0x00094206) wgtman_btn_pane_cp_01

0xef92,	// (0x0009a12d) wgtman_content_pane

0xef9b,	// (0x0009a136) wgtman_heading_pane

0x97f3,	// (0x0009498e) bg_heading_pane_cp02

0xefa4,	// (0x0009a13f) wgtman_heading_pane_g1

0xefac,	// (0x0009a147) wgtman_heading_pane_t1

0xefba,	// (0x0009a155) scroll_pane_cp036

0xefc2,	// (0x0009a15d) wgtman_list_pane

0xe5f7,	// (0x00099792) wgtman_list_pane_t1_ParamLimits

0xe5f7,	// (0x00099792) wgtman_list_pane_t1

0xa194,	// (0x0009532f) cam4_grid_pane

0x0603,	// (0x0008b79e) bg_button_pane_cp015_ParamLimits

0x711d,	// (0x000922b8) bg_button_pane_cp016_ParamLimits

0x7130,	// (0x000922cb) bg_button_pane_cp017_ParamLimits

0x064b,	// (0x0008b7e6) popup_vitu2_query_window_g3_ParamLimits

0x064b,	// (0x0008b7e6) popup_vitu2_query_window_g3

0x06c6,	// (0x0008b861) popup_vitu2_query_window_t6_ParamLimits

0x06c6,	// (0x0008b861) popup_vitu2_query_window_t6

0x06f1,	// (0x0008b88c) popup_vitu2_query_window_t7_ParamLimits

0x06f1,	// (0x0008b88c) popup_vitu2_query_window_t7

0xd678,	// (0x00098813) cam4_grid_pane_g1

0xd681,	// (0x0009881c) cam4_grid_pane_g2

0xefca,	// (0x0009a165) cam4_grid_pane_g3

0xefd3,	// (0x0009a16e) cam4_grid_pane_g4

0x0003,

0xff20,	// (0x0009b0bb) cam4_grid_pane_g

0x20b6,	// (0x0008d251) aid_placing_vt_slider_lsc_ParamLimits

0x23b3,	// (0x0008d54e) vidtel_button_pane_ParamLimits

0x23b3,	// (0x0008d54e) vidtel_button_pane

0x97f3,	// (0x0009498e) bg_button_pane_cp034

0xefde,	// (0x0009a179) vidtel_button_pane_g1

0xefe6,	// (0x0009a181) vidtel_button_pane_t1

0xd91f,	// (0x00098aba) aid_size_vtel_slider_touch

0xd9d8,	// (0x00098b73) scroll_pane_cp039

0x7eac,	// (0x00093047) ncim_query_button_pane_cp01_ParamLimits

0x7ecb,	// (0x00093066) ncimui_query_pane_g1_ParamLimits

0xa48d,	// (0x00095628) input_focus_pane_cp012_ParamLimits

0xe1f4,	// (0x0009938f) ncim_query_entry_pane_t1_ParamLimits

0xd9d8,	// (0x00098b73) scroll_pane_cp039_ParamLimits

0xb36c,	// (0x00096507) navi_pane_bcale_mc_g1

0xb374,	// (0x0009650f) navi_pane_bcale_mc_t1

0xe794,	// (0x0009992f) main_sp_fs_email_pane_g1

0xe7a0,	// (0x0009993b) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0009ae80) main_sp_fs_email_pane_g

0xe9f6,	// (0x00099b91) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9f6,	// (0x00099b91) list_single_cale_mrui_row_pane_g3

0x0ee9,	// (0x0008c084) list_single_recal_day_pane_g5_event_pane

0xa43b,	// (0x000955d6) list_single_recal_day_pane_g7

0xeffc,	// (0x0009a197) list_recal_day_event_pane_cp01

0xf005,	// (0x0009a1a0) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x0009a1a8) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x0009a1b0) list_recal_vselct_pane_cp01

0xd92f,	// (0x00098aca) list_recal_day_event_pane_cp01_g1

0xa47f,	// (0x0009561a) list_recal_day_event_pane_cp01_t1

0xa443,	// (0x000955de) list_single_recal_day_pane_t1_ParamLimits

0xa455,	// (0x000955f0) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0009afdd) list_single_recal_day_pane_t_ParamLimits

0xa7b1,	// (0x0009594c) bg_notes_pane_ParamLimits

0xa860,	// (0x000959fb) list_notes_pane_ParamLimits

0x15c2,	// (0x0008c75d) scroll_pane_cp06_ParamLimits

0xa882,	// (0x00095a1d) main_notes_pane_ParamLimits

0xa48d,	// (0x00095628) main_welc_pane

0x965d,	// (0x000947f8) main_welc_body_pane_ParamLimits

0x965d,	// (0x000947f8) main_welc_body_pane

0x967a,	// (0x00094815) main_welc_opti_pane_ParamLimits

0x967a,	// (0x00094815) main_welc_opti_pane

0x96ce,	// (0x00094869) main_welc_pane_t1_ParamLimits

0x96ce,	// (0x00094869) main_welc_pane_t1

0x9748,	// (0x000948e3) main_welc_body_row_pane_ParamLimits

0x9748,	// (0x000948e3) main_welc_body_row_pane

0xed1f,	// (0x00099eba) main_welc_opti_row_pane_ParamLimits

0xed1f,	// (0x00099eba) main_welc_opti_row_pane

0xf01f,	// (0x0009a1ba) main_welc_opti_row_pane_g1

0x975d,	// (0x000948f8) main_welc_opti_row_pane_t1

0xf027,	// (0x0009a1c2) main_welc_body_row_pane_t1

0xed57,	// (0x00099ef2) popup_notif_wgt_heading_pane

0xed71,	// (0x00099f0c) aid_size_list_notif_wgt_del_ParamLimits

0xed7e,	// (0x00099f19) list_notif_wgt_row_pane_g1_ParamLimits

0xed8a,	// (0x00099f25) list_notif_wgt_row_pane_g2_ParamLimits

0xed99,	// (0x00099f34) list_notif_wgt_row_pane_g3_ParamLimits

0x0180,	// (0x0008b31b) list_notif_wgt_row_pane_g_ParamLimits

0xeda6,	// (0x00099f41) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x00099f57) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x00099f69) list_notif_wgt_row_pane_t3_ParamLimits

0x0187,	// (0x0008b322) list_notif_wgt_row_pane_t_ParamLimits

0x9104,	// (0x0009429f) listrow_wgtman_pane_g1_ParamLimits

0x9111,	// (0x000942ac) listrow_wgtman_pane_g2_ParamLimits

0xfeb3,	// (0x0009b04e) listrow_wgtman_pane_g_ParamLimits

0x0f3b,	// (0x0008c0d6) listrow_wgtman_pane_t1_ParamLimits

0x0f53,	// (0x0008c0ee) listrow_wgtman_pane_t2_ParamLimits

0xfeb8,	// (0x0009b053) listrow_wgtman_pane_t_ParamLimits

0x0f79,	// (0x0008c114) wait_bar_pane_cp09_ParamLimits

0x97f3,	// (0x0009498e) bg_popup_heading_pane_cp02

0xf036,	// (0x0009a1d1) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0009a1d9) popup_notif_wgt_heading_pane_t1

0x97f3,	// (0x0009498e) main_vids_pane

0x97f3,	// (0x0009498e) vids_listscroll_pane

0x976c,	// (0x00094907) scroll_pane_cp040

0x97f3,	// (0x0009498e) vids_list_pane

0x9777,	// (0x00094912) vids_list_double_pane_ParamLimits

0x9777,	// (0x00094912) vids_list_double_pane

0x9788,	// (0x00094923) vids_list_double_pane_g1

0x9791,	// (0x0009492c) vids_list_double_pane_t1

0x97a1,	// (0x0009493c) vids_list_double_pane_t2

0x0001,

0xff37,	// (0x0009b0d2) vids_list_double_pane_t

0xa48d,	// (0x00095628) main_ncimui_pane_ParamLimits

0x7ce2,	// (0x00092e7d) main_ncimui_pane_g1_ParamLimits

0x7cee,	// (0x00092e89) main_ncimui_pane_g2_ParamLimits

0x7cee,	// (0x00092e89) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x0009ad81) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x0009ad81) main_ncimui_pane_g

0x9695,	// (0x00094830) main_welc_pane_g1_ParamLimits

0x9695,	// (0x00094830) main_welc_pane_g1

0x96aa,	// (0x00094845) main_welc_pane_g2_ParamLimits

0x96aa,	// (0x00094845) main_welc_pane_g2

0x0002,

0xff29,	// (0x0009b0c4) main_welc_pane_g_ParamLimits

0xff29,	// (0x0009b0c4) main_welc_pane_g

0xa7b1,	// (0x0009594c) listscroll_mce_pane_ParamLimits

0xb4c1,	// (0x0009665c) wait_bar_pane_cp10

0xc908,	// (0x00097aa3) main_cale_day_pane_ParamLimits

0xc908,	// (0x00097aa3) main_cale_week_pane_ParamLimits

0xa7b1,	// (0x0009594c) main_messa_pane_ParamLimits

0x5774,	// (0x0009090f) main_clock2_btn_pane_ParamLimits

0x5774,	// (0x0009090f) main_clock2_btn_pane

0xd0e9,	// (0x00098284) main_clock2_btn_pane_cp01_ParamLimits

0xd0e9,	// (0x00098284) main_clock2_btn_pane_cp01

0xe9c7,	// (0x00099b62) list_cale_mrui_pane_ParamLimits

0xee04,	// (0x00099f9f) main_cf0_pane_g2

0x0001,

0x018e,	// (0x0008b329) main_cf0_pane_g

0x9306,	// (0x000944a1) area_left_week_number_pane_ParamLimits

0x9312,	// (0x000944ad) area_top_day_name_pane_ParamLimits

0x9325,	// (0x000944c0) frame_month_view_pane_ParamLimits

0xeefa,	// (0x0009a095) grid_month_view_pane_ParamLimits

0xef08,	// (0x0009a0a3) frm_month_g1_ParamLimits

0x93a6,	// (0x00094541) frm_month_g2_ParamLimits

0x93b9,	// (0x00094554) frm_month_g3_ParamLimits

0x93cc,	// (0x00094567) frm_month_g4_ParamLimits

0x93df,	// (0x0009457a) frm_month_g5_ParamLimits

0x93f2,	// (0x0009458d) frm_month_g6_ParamLimits

0x9405,	// (0x000945a0) frm_month_g7_ParamLimits

0xef15,	// (0x0009a0b0) frm_month_g8_ParamLimits

0x9418,	// (0x000945b3) frm_month_g9_ParamLimits

0x9428,	// (0x000945c3) frm_month_g10_ParamLimits

0x9438,	// (0x000945d3) frm_month_g11_ParamLimits

0x9448,	// (0x000945e3) frm_month_g12_ParamLimits

0x945a,	// (0x000945f5) frm_month_g13_ParamLimits

0x946c,	// (0x00094607) frm_month_g14_ParamLimits

0x9480,	// (0x0009461b) frm_month_g15_ParamLimits

0x9494,	// (0x0009462f) frm_month_g16_ParamLimits

0xfed9,	// (0x0009b074) frm_month_g_ParamLimits

0xef22,	// (0x0009a0bd) cell_top_day_name_pane_t1_ParamLimits

0x94a8,	// (0x00094643) cell_area_left_week_number_pane_g1_ParamLimits

0x94b4,	// (0x0009464f) cell_area_left_week_number_pane_t1_ParamLimits

0xcf61,	// (0x000980fc) cell_month_view_pane_g1_ParamLimits

0x94c7,	// (0x00094662) cell_month_view_pane_t1_ParamLimits

0xa7a9,	// (0x00095944) main_clock2_btn_pane_g1

0xf04c,	// (0x0009a1e7) main_clock2_btn_pane_t1

0xa48d,	// (0x00095628) listscroll_cmail_pane_ParamLimits

0xe794,	// (0x0009992f) main_sp_fs_email_pane_g1_ParamLimits

0xe7a0,	// (0x0009993b) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0009ae80) main_sp_fs_email_pane_g_ParamLimits

0xead5,	// (0x00099c70) list_recal_day_pane_ParamLimits

0xeae6,	// (0x00099c81) mian_recal_day_pane_t1

0x0b11,	// (0x0008bcac) list_single_dyc_row_text_pane_t4_ParamLimits

0x0b11,	// (0x0008bcac) list_single_dyc_row_text_pane_t4

0x0b5a,	// (0x0008bcf5) list_single_dyc_row_text_pane_t5_ParamLimits

0x0b5a,	// (0x0008bcf5) list_single_dyc_row_text_pane_t5

0x8616,	// (0x000937b1) list_single_dyc_row_text_pane_t6_ParamLimits

0x8616,	// (0x000937b1) list_single_dyc_row_text_pane_t6

0x2e37,	// (0x0008dfd2) aid_mgn_list_cale_time_pane

0xa48d,	// (0x00095628) main_gallery2_pane_ParamLimits

0xd0ff,	// (0x0009829a) main_clock2_pane_cp01_t1

0xd10d,	// (0x000982a8) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x0009a957) main_clock2_pane_cp01_t

0x194d,	// (0x0008cae8) cale_week_scroll_pane_g16_ParamLimits

0x194d,	// (0x0008cae8) cale_week_scroll_pane_g16

0xaa6e,	// (0x00095c09) vorec_slider_pane

0xefe6,	// (0x0009a181) vidtel_button_pane_t1_ParamLimits

0x8cd7,	// (0x00093e72) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8cd7,	// (0x00093e72) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8ce8,	// (0x00093e83) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8ce8,	// (0x00093e83) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x0009b000) main_fs_bigclock_clock_pane_g_ParamLimits

0x8cfb,	// (0x00093e96) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8d11,	// (0x00093eac) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0009b009) main_fs_bigclock_clock_pane_t_ParamLimits

0x4f72,	// (0x0009010d) main_mup3_lyrics_pane_ParamLimits

0x4f72,	// (0x0009010d) main_mup3_lyrics_pane

0x97d7,	// (0x00094972) main_mup3_lyrics_pane_t1_ParamLimits

0x97d7,	// (0x00094972) main_mup3_lyrics_pane_t1

0x9ee6,	// (0x00095081) aid_main_mp4_pane_t1_area

0x9ef0,	// (0x0009508b) aid_main_mp4_pane_t2_area

0x9f9c,	// (0x00095137) main_mp4_pane_g7_ParamLimits

0x9f9c,	// (0x00095137) main_mp4_pane_g7

0x9fa8,	// (0x00095143) main_mp4_pane_g8_ParamLimits

0x9fa8,	// (0x00095143) main_mp4_pane_g8

0x62a5,	// (0x00091440) aid_call6_pane_g1_size

0x9617,	// (0x000947b2) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9617,	// (0x000947b2) list_double_large_graphic_phob2_other_pane

0xb29d,	// (0x00096438) list_double_large_graphic_phob2_other_pane_g1

0x97f3,	// (0x0009498e) list_highlight_pane_cp026

0xa48d,	// (0x00095628) main_welc_pane_ParamLimits

0x84d3,	// (0x0009366e) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x84d3,	// (0x0009366e) main_sp_fs_ctrlbar_pane_g3

0x84ed,	// (0x00093688) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x84ed,	// (0x00093688) main_sp_fs_ctrlbar_pane_g4

0x8521,	// (0x000936bc) toolbar2_fixed_button_pane_cp01

0x852c,	// (0x000936c7) toolbar2_fixed_button_pane_cp02

0x8539,	// (0x000936d4) toolbar2_fixed_button_pane_cp03

0x9646,	// (0x000947e1) list_welc_entry_pane_ParamLimits

0x9646,	// (0x000947e1) list_welc_entry_pane

0x96bf,	// (0x0009485a) main_welc_pane_g3_ParamLimits

0x96bf,	// (0x0009485a) main_welc_pane_g3

0x96ec,	// (0x00094887) main_welc_pane_t2_ParamLimits

0x96ec,	// (0x00094887) main_welc_pane_t2

0x9706,	// (0x000948a1) main_welc_pane_t3_ParamLimits

0x9706,	// (0x000948a1) main_welc_pane_t3

0x0002,

0xff30,	// (0x0009b0cb) main_welc_pane_t_ParamLimits

0xff30,	// (0x0009b0cb) main_welc_pane_t

0x971d,	// (0x000948b8) welc_button_pane_ParamLimits

0x971d,	// (0x000948b8) welc_button_pane

0x9734,	// (0x000948cf) welc_service_logo_pane_ParamLimits

0x9734,	// (0x000948cf) welc_service_logo_pane

0xf05a,	// (0x0009a1f5) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0009a1f5) list_single_welc_entry_pane

0xf06b,	// (0x0009a206) list_single_welc_entry_pane_g1

0xf073,	// (0x0009a20e) list_single_welc_entry_pane_t1

0xf081,	// (0x0009a21c) list_single_welc_entry_pane_t2

0x0001,

0xff3c,	// (0x0009b0d7) list_single_welc_entry_pane_t

0x97f3,	// (0x0009498e) bg_button_pane_cp035

0xf08f,	// (0x0009a22a) welc_button_pane_t1

0xf09d,	// (0x0009a238) welc_service_logo_pane_g1

0xf0a6,	// (0x0009a241) welc_service_logo_pane_g2

0x0001,

0xff41,	// (0x0009b0dc) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
