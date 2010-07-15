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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0008b48f };

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
0x0ef7,	// (0x0008c386) Screen

0x0f03,	// (0x0008c392) application_window

0x0f4f,	// (0x0008c3de) area_bottom_pane_ParamLimits

0x0f4f,	// (0x0008c3de) area_bottom_pane

0x0f88,	// (0x0008c417) area_top_pane_ParamLimits

0x0f88,	// (0x0008c417) area_top_pane

0x9832,	// (0x00094cc1) call_video_uplink_pane_ParamLimits

0x9832,	// (0x00094cc1) call_video_uplink_pane

0x1016,	// (0x0008c4a5) main_pane_ParamLimits

0x1016,	// (0x0008c4a5) main_pane

0xc917,	// (0x00097da6) context_pane

0x4296,	// (0x0008f725) navi_pane

0x42c8,	// (0x0008f757) popup_cale_events_window_ParamLimits

0x42c8,	// (0x0008f757) popup_cale_events_window

0xc92a,	// (0x00097db9) popup_mup_playback_window

0x42e0,	// (0x0008f76f) signal_pane

0xa8ab,	// (0x00095d3a) main_browser_pane

0xaa79,	// (0x00095f08) main_burst_pane

0x3ff6,	// (0x0008f485) main_calc_pane

0xc8fd,	// (0x00097d8c) main_cale_day_pane

0x165b,	// (0x0008caea) main_cale_month_pane

0xc8fd,	// (0x00097d8c) main_cale_week_pane

0xaa79,	// (0x00095f08) main_call_pane

0xa58b,	// (0x00095a1a) main_call_poc_pane

0xaa79,	// (0x00095f08) main_camera_pane

0xaa79,	// (0x00095f08) main_chi_dic_pane

0xb25c,	// (0x000966eb) main_clock_pane

0xa58b,	// (0x00095a1a) main_fmradio_pane

0xaa79,	// (0x00095f08) main_graph_messa_pane

0xa58b,	// (0x00095a1a) main_help_pane

0xa8ab,	// (0x00095d3a) main_im_pane

0xa7e6,	// (0x00095c75) main_image_pane_ParamLimits

0xa7e6,	// (0x00095c75) main_image_pane

0xa58b,	// (0x00095a1a) main_location2_pane

0xaa79,	// (0x00095f08) main_location_pane

0xa7e6,	// (0x00095c75) main_messa_pane

0xa58b,	// (0x00095a1a) main_mp2_pane

0xaa79,	// (0x00095f08) main_mp_pane

0xa58b,	// (0x00095a1a) main_msg_pane

0xa58b,	// (0x00095a1a) main_mup_eq_pane

0xa58b,	// (0x00095a1a) main_mup_pane

0xa8ab,	// (0x00095d3a) main_notes_pane

0xa58b,	// (0x00095a1a) main_pec_pane

0xa58b,	// (0x00095a1a) main_phob_pane

0xa58b,	// (0x00095a1a) main_pinb_pane

0xa58b,	// (0x00095a1a) main_postcard_pane

0xa58b,	// (0x00095a1a) main_qdial_pane

0xaa79,	// (0x00095f08) main_skin_pane

0xa58b,	// (0x00095a1a) main_smil2_pane

0xaa79,	// (0x00095f08) main_smil_pane

0xaa79,	// (0x00095f08) main_video_pane

0xaa79,	// (0x00095f08) main_video_tele_pane

0xa7e6,	// (0x00095c75) main_viewer_pane_ParamLimits

0xa7e6,	// (0x00095c75) main_viewer_pane

0xaa79,	// (0x00095f08) main_vorec_pane

0x404a,	// (0x0008f4d9) popup_blid_sat_info_window_ParamLimits

0x404a,	// (0x0008f4d9) popup_blid_sat_info_window

0x40a2,	// (0x0008f531) popup_dyc_status_message_window_ParamLimits

0x40a2,	// (0x0008f531) popup_dyc_status_message_window

0x40bc,	// (0x0008f54b) popup_grid_large_graphic_window_ParamLimits

0x40bc,	// (0x0008f54b) popup_grid_large_graphic_window

0x4178,	// (0x0008f607) popup_loc_request_window_ParamLimits

0x4178,	// (0x0008f607) popup_loc_request_window

0x426e,	// (0x0008f6fd) popup_wml_address_window_ParamLimits

0x426e,	// (0x0008f6fd) popup_wml_address_window

0x3e30,	// (0x0008f2bf) call_muted_g1

0x3ae5,	// (0x0008ef74) popup_call_audio_conf_window_ParamLimits

0x3ae5,	// (0x0008ef74) popup_call_audio_conf_window

0x3e44,	// (0x0008f2d3) popup_call_audio_first_window_ParamLimits

0x3e44,	// (0x0008f2d3) popup_call_audio_first_window

0x3eba,	// (0x0008f349) popup_call_audio_in_window_ParamLimits

0x3eba,	// (0x0008f349) popup_call_audio_in_window

0x3ef6,	// (0x0008f385) popup_call_audio_out_window_ParamLimits

0x3ef6,	// (0x0008f385) popup_call_audio_out_window

0x3f30,	// (0x0008f3bf) popup_call_audio_second_window_ParamLimits

0x3f30,	// (0x0008f3bf) popup_call_audio_second_window

0x3f86,	// (0x0008f415) popup_call_audio_wait_window_ParamLimits

0x3f86,	// (0x0008f415) popup_call_audio_wait_window

0x3fbb,	// (0x0008f44a) popup_number_entry_window_ParamLimits

0x3fbb,	// (0x0008f44a) popup_number_entry_window

0x9850,	// (0x00094cdf) bg_popup_call_pane_cp05_ParamLimits

0x9850,	// (0x00094cdf) bg_popup_call_pane_cp05

0x9870,	// (0x00094cff) popup_number_entry_window_t1

0x9883,	// (0x00094d12) popup_number_entry_window_t2

0x9895,	// (0x00094d24) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0009a53e) popup_number_entry_window_t

0x98a7,	// (0x00094d36) text_title_cp2

0x98ba,	// (0x00094d49) bg_popup_call_pane_cp_ParamLimits

0x98ba,	// (0x00094d49) bg_popup_call_pane_cp

0x98c8,	// (0x00094d57) call_thumbnail_pane

0x98d0,	// (0x00094d5f) popup_call_audio_in_window_g1_ParamLimits

0x98d0,	// (0x00094d5f) popup_call_audio_in_window_g1

0x98dc,	// (0x00094d6b) popup_call_audio_in_window_g2_ParamLimits

0x98dc,	// (0x00094d6b) popup_call_audio_in_window_g2

0x98e8,	// (0x00094d77) popup_call_audio_in_window_g3_ParamLimits

0x98e8,	// (0x00094d77) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0009a547) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0009a547) popup_call_audio_in_window_g

0x98f4,	// (0x00094d83) popup_call_audio_in_window_t1_ParamLimits

0x98f4,	// (0x00094d83) popup_call_audio_in_window_t1

0x9910,	// (0x00094d9f) popup_call_audio_in_window_t2_ParamLimits

0x9910,	// (0x00094d9f) popup_call_audio_in_window_t2

0x992c,	// (0x00094dbb) popup_call_audio_in_window_t3_ParamLimits

0x992c,	// (0x00094dbb) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0009a54e) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0009a54e) popup_call_audio_in_window_t

0x98ba,	// (0x00094d49) bg_popup_call_pane_cp01_ParamLimits

0x98ba,	// (0x00094d49) bg_popup_call_pane_cp01

0x98c8,	// (0x00094d57) call_thumbnail_pane_cp02

0x993f,	// (0x00094dce) call_type_pane_cp022

0x9947,	// (0x00094dd6) popup_call_audio_out_window_g1_ParamLimits

0x9947,	// (0x00094dd6) popup_call_audio_out_window_g1

0x9959,	// (0x00094de8) popup_call_audio_out_window_g2_ParamLimits

0x9959,	// (0x00094de8) popup_call_audio_out_window_g2

0x9965,	// (0x00094df4) popup_call_audio_out_window_g3_ParamLimits

0x9965,	// (0x00094df4) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0009a555) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0009a555) popup_call_audio_out_window_g

0x9977,	// (0x00094e06) popup_call_audio_out_window_t1_ParamLimits

0x9977,	// (0x00094e06) popup_call_audio_out_window_t1

0x998f,	// (0x00094e1e) popup_call_audio_out_window_t2_ParamLimits

0x998f,	// (0x00094e1e) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0009a55c) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0009a55c) popup_call_audio_out_window_t

0x99a4,	// (0x00094e33) bg_popup_call_pane_ParamLimits

0x99a4,	// (0x00094e33) bg_popup_call_pane

0x11d2,	// (0x0008c661) call_thumbnail_pane_cp_ParamLimits

0x11d2,	// (0x0008c661) call_thumbnail_pane_cp

0x9a28,	// (0x00094eb7) call_type_pane_cp01_ParamLimits

0x9a28,	// (0x00094eb7) call_type_pane_cp01

0x9a6c,	// (0x00094efb) popup_call_audio_first_window_g1_ParamLimits

0x9a6c,	// (0x00094efb) popup_call_audio_first_window_g1

0x9ab8,	// (0x00094f47) popup_call_audio_first_window_g2_ParamLimits

0x9ab8,	// (0x00094f47) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0009a561) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0009a561) popup_call_audio_first_window_g

0x9afc,	// (0x00094f8b) popup_call_audio_first_window_t1_ParamLimits

0x9afc,	// (0x00094f8b) popup_call_audio_first_window_t1

0x9ba8,	// (0x00095037) popup_call_audio_first_window_t4_ParamLimits

0x9ba8,	// (0x00095037) popup_call_audio_first_window_t4

0xa55c,	// (0x000959eb) popup_call_audio_first_window_t5_ParamLimits

0xa55c,	// (0x000959eb) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0009a566) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0009a566) popup_call_audio_first_window_t

0xa58b,	// (0x00095a1a) bg_popup_call_pane_cp02

0xa595,	// (0x00095a24) call_type_pane_cp023

0xa59d,	// (0x00095a2c) popup_call_audio_wait_window_g1

0xa5a5,	// (0x00095a34) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0009a56d) popup_call_audio_wait_window_g

0xa5ad,	// (0x00095a3c) popup_call_audio_wait_window_t3

0xa5bb,	// (0x00095a4a) bg_popup_call_pane_cp03_ParamLimits

0xa5bb,	// (0x00095a4a) bg_popup_call_pane_cp03

0xa61b,	// (0x00095aaa) call_thumbnail_pane_cp011_ParamLimits

0xa61b,	// (0x00095aaa) call_thumbnail_pane_cp011

0xa627,	// (0x00095ab6) call_type_pane_cp034_ParamLimits

0xa627,	// (0x00095ab6) call_type_pane_cp034

0xa663,	// (0x00095af2) popup_call_audio_second_window_g1_ParamLimits

0xa663,	// (0x00095af2) popup_call_audio_second_window_g1

0xa69f,	// (0x00095b2e) popup_call_audio_second_window_g2_ParamLimits

0xa69f,	// (0x00095b2e) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0009a572) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0009a572) popup_call_audio_second_window_g

0xa6db,	// (0x00095b6a) popup_call_audio_second_window_t1_ParamLimits

0xa6db,	// (0x00095b6a) popup_call_audio_second_window_t1

0xa75c,	// (0x00095beb) popup_call_audio_second_window_t2_ParamLimits

0xa75c,	// (0x00095beb) popup_call_audio_second_window_t2

0xa792,	// (0x00095c21) popup_call_audio_second_window_t3_ParamLimits

0xa792,	// (0x00095c21) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0009a577) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0009a577) popup_call_audio_second_window_t

0xa58b,	// (0x00095a1a) bg_popup_call_pane_cp04

0xa7c8,	// (0x00095c57) list_conf_pane

0xa7d0,	// (0x00095c5f) popup_call_audio_conf_window_t1

0xa7de,	// (0x00095c6d) call_thumbnail_pane_g1

0xa7e6,	// (0x00095c75) bg_pinb_pane_ParamLimits

0xa7e6,	// (0x00095c75) bg_pinb_pane

0xa7f4,	// (0x00095c83) find_pinb_pane

0xa7fd,	// (0x00095c8c) listscroll_pinb_pane_ParamLimits

0xa7fd,	// (0x00095c8c) listscroll_pinb_pane

0xa80c,	// (0x00095c9b) pinb_bg_pane_g1

0x11f6,	// (0x0008c685) pinb_bg_pane_g2

0x1202,	// (0x0008c691) pinb_bg_pane_g3

0x120e,	// (0x0008c69d) pinb_bg_pane_g4

0x121a,	// (0x0008c6a9) pinb_bg_pane_g5

0x1226,	// (0x0008c6b5) pinb_bg_pane_g6

0x1231,	// (0x0008c6c0) pinb_bg_pane_g7

0x123c,	// (0x0008c6cb) pinb_bg_pane_g8

0x1247,	// (0x0008c6d6) pinb_bg_pane_g9

0x1251,	// (0x0008c6e0) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0009a57e) pinb_bg_pane_g

0x126e,	// (0x0008c6fd) grid_pinb_pane

0x1277,	// (0x0008c706) list_pinb_pane

0x1280,	// (0x0008c70f) scroll_pane_cp01_ParamLimits

0x1280,	// (0x0008c70f) scroll_pane_cp01

0xa816,	// (0x00095ca5) find_pinb_pane_g1_ParamLimits

0xa816,	// (0x00095ca5) find_pinb_pane_g1

0xa82e,	// (0x00095cbd) find_pinb_pane_t1

0xa840,	// (0x00095ccf) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0009a598) find_pinb_pane_t

0xa855,	// (0x00095ce4) input_focus_pane_cp01_ParamLimits

0xa855,	// (0x00095ce4) input_focus_pane_cp01

0x1292,	// (0x0008c721) cell_pinb_pane_ParamLimits

0x1292,	// (0x0008c721) cell_pinb_pane

0x12bb,	// (0x0008c74a) cell_pinb_pane_g1_ParamLimits

0x12bb,	// (0x0008c74a) cell_pinb_pane_g1

0x12cb,	// (0x0008c75a) cell_pinb_pane_g2_ParamLimits

0x12cb,	// (0x0008c75a) cell_pinb_pane_g2

0xa861,	// (0x00095cf0) cell_pinb_pane_g3_ParamLimits

0xa861,	// (0x00095cf0) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0009a59d) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0009a59d) cell_pinb_pane_g

0xa58b,	// (0x00095a1a) grid_highlight_pane_cp01

0x12d7,	// (0x0008c766) list_pinb_item_pane_ParamLimits

0x12d7,	// (0x0008c766) list_pinb_item_pane

0xa58b,	// (0x00095a1a) list_highlight_pane_cp02

0x12e9,	// (0x0008c778) list_pinb_item_pane_g1_ParamLimits

0x12e9,	// (0x0008c778) list_pinb_item_pane_g1

0x12f6,	// (0x0008c785) list_pinb_item_pane_g2_ParamLimits

0x12f6,	// (0x0008c785) list_pinb_item_pane_g2

0x1302,	// (0x0008c791) list_pinb_item_pane_g3_ParamLimits

0x1302,	// (0x0008c791) list_pinb_item_pane_g3

0x1313,	// (0x0008c7a2) list_pinb_item_pane_g4_ParamLimits

0x1313,	// (0x0008c7a2) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0009a5a4) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0009a5a4) list_pinb_item_pane_g

0x131f,	// (0x0008c7ae) list_pinb_item_pane_t1_ParamLimits

0x131f,	// (0x0008c7ae) list_pinb_item_pane_t1

0x1354,	// (0x0008c7e3) calc_display_pane

0x1379,	// (0x0008c808) calc_paper_pane

0x139c,	// (0x0008c82b) grid_calc_pane

0xa58b,	// (0x00095a1a) bg_list_pane_cp01

0x13ca,	// (0x0008c859) clock_g1

0x13d2,	// (0x0008c861) clock_g2

0x0001,

0xf11e,	// (0x0009a5ad) clock_g

0x13da,	// (0x0008c869) clock_t1_ParamLimits

0x13da,	// (0x0008c869) clock_t1

0x13ef,	// (0x0008c87e) clock_t2_ParamLimits

0x13ef,	// (0x0008c87e) clock_t2

0x1401,	// (0x0008c890) clock_t3_ParamLimits

0x1401,	// (0x0008c890) clock_t3

0x1413,	// (0x0008c8a2) clock_t4_ParamLimits

0x1413,	// (0x0008c8a2) clock_t4

0x1425,	// (0x0008c8b4) clock_t5_ParamLimits

0x1425,	// (0x0008c8b4) clock_t5

0x143a,	// (0x0008c8c9) clock_t6_ParamLimits

0x143a,	// (0x0008c8c9) clock_t6

0x144c,	// (0x0008c8db) clock_t7_ParamLimits

0x144c,	// (0x0008c8db) clock_t7

0x145e,	// (0x0008c8ed) clock_t8_ParamLimits

0x145e,	// (0x0008c8ed) clock_t8

0x1472,	// (0x0008c901) clock_t9_ParamLimits

0x1472,	// (0x0008c901) clock_t9

0x0008,

0xf123,	// (0x0009a5b2) clock_t_ParamLimits

0xf123,	// (0x0009a5b2) clock_t

0xa86d,	// (0x00095cfc) popup_clock_analogue_window_cp02

0xa86d,	// (0x00095cfc) popup_clock_digital_window_cp01

0xa875,	// (0x00095d04) listscroll_help_pane

0xa58b,	// (0x00095a1a) phob_pre_status_pane

0xa87f,	// (0x00095d0e) grid_qdial_pane

0xa7e6,	// (0x00095c75) listscroll_mce_pane

0xa7e6,	// (0x00095c75) bg_notes_pane

0xa889,	// (0x00095d18) list_notes_pane

0x1486,	// (0x0008c915) scroll_pane_cp06

0xa897,	// (0x00095d26) bg_calc_paper_pane

0x9c3c,	// (0x000950cb) list_calc_pane

0xa8ab,	// (0x00095d3a) bg_calc_display_pane

0x149a,	// (0x0008c929) calc_display_pane_t1

0x14af,	// (0x0008c93e) calc_display_pane_t2

0x9c56,	// (0x000950e5) calc_display_pane_t3

0x0002,

0xf136,	// (0x0009a5c5) calc_display_pane_t

0x14c4,	// (0x0008c953) cell_calc_pane_ParamLimits

0x14c4,	// (0x0008c953) cell_calc_pane

0xa8b7,	// (0x00095d46) bg_calc_paper_pane_g1

0xa8c3,	// (0x00095d52) bg_calc_paper_pane_g2

0xa8cf,	// (0x00095d5e) bg_calc_paper_pane_g3

0xa8db,	// (0x00095d6a) bg_calc_paper_pane_g4

0xa8e7,	// (0x00095d76) bg_calc_paper_pane_g5

0x14f9,	// (0x0008c988) bg_calc_paper_pane_g6

0x1508,	// (0x0008c997) bg_calc_paper_pane_g7

0x1517,	// (0x0008c9a6) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0009a5cc) bg_calc_paper_pane_g

0x152a,	// (0x0008c9b9) calc_bg_paper_pane_g9

0x153d,	// (0x0008c9cc) list_calc_item_pane_ParamLimits

0x153d,	// (0x0008c9cc) list_calc_item_pane

0xa8f3,	// (0x00095d82) list_calc_item_pane_g1

0x9c68,	// (0x000950f7) list_calc_item_pane_t1_ParamLimits

0x9c68,	// (0x000950f7) list_calc_item_pane_t1

0x1555,	// (0x0008c9e4) list_calc_item_pane_t2_ParamLimits

0x1555,	// (0x0008c9e4) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0009a5dd) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0009a5dd) list_calc_item_pane_t

0xa900,	// (0x00095d8f) cell_calc_pane_g1

0xa90a,	// (0x00095d99) grid_highlight_pane_cp02

0xa92c,	// (0x00095dbb) bg_calc_display_pane_g1

0x1587,	// (0x0008ca16) bg_calc_display_pane_g2

0x1591,	// (0x0008ca20) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0009a5e7) bg_calc_display_pane_g

0x159a,	// (0x0008ca29) cell_qdial_pane_ParamLimits

0x159a,	// (0x0008ca29) cell_qdial_pane

0x15ae,	// (0x0008ca3d) cell_qdial_pane_g1_ParamLimits

0x15ae,	// (0x0008ca3d) cell_qdial_pane_g1

0x15c4,	// (0x0008ca53) cell_qdial_pane_g2_ParamLimits

0x15c4,	// (0x0008ca53) cell_qdial_pane_g2

0xa935,	// (0x00095dc4) cell_qdial_pane_g3_ParamLimits

0xa935,	// (0x00095dc4) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0009a5ee) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0009a5ee) cell_qdial_pane_g

0x15eb,	// (0x0008ca7a) cell_qdial_pane_t1_ParamLimits

0x15eb,	// (0x0008ca7a) cell_qdial_pane_t1

0x1603,	// (0x0008ca92) cell_qdial_pane_t2_ParamLimits

0x1603,	// (0x0008ca92) cell_qdial_pane_t2

0x1616,	// (0x0008caa5) cell_qdial_pane_t3_ParamLimits

0x1616,	// (0x0008caa5) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0009a5f7) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0009a5f7) cell_qdial_pane_t

0xa58b,	// (0x00095a1a) grid_highlight_pane_cp04

0xa941,	// (0x00095dd0) thumbnail_qdial_pane_ParamLimits

0xa941,	// (0x00095dd0) thumbnail_qdial_pane

0xa99d,	// (0x00095e2c) list_help_pane

0xa9a6,	// (0x00095e35) scroll_pane_cp02

0x1629,	// (0x0008cab8) help_list_pane_t1_ParamLimits

0x1629,	// (0x0008cab8) help_list_pane_t1

0x9c7a,	// (0x00095109) bg_notes_pane_g2

0x9c82,	// (0x00095111) bg_notes_pane_g3

0x9c8a,	// (0x00095119) notes_bg_pane_g1

0x9c92,	// (0x00095121) notes_bg_pane_g4

0x9c9a,	// (0x00095129) notes_bg_pane_g5

0x9ca2,	// (0x00095131) notes_bg_pane_g6

0x9caa,	// (0x00095139) notes_bg_pane_g7

0x9cb2,	// (0x00095141) notes_bg_pane_g8

0x9cba,	// (0x00095149) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0009a615) notes_bg_pane_g

0x1646,	// (0x0008cad5) list_notes_text_pane_ParamLimits

0x1646,	// (0x0008cad5) list_notes_text_pane

0xa9af,	// (0x00095e3e) list_notes_text_pane_g1

0x005f,	// (0x0008b4ee) list_notes_text_pane_t1

0x165b,	// (0x0008caea) listscroll_cale_week_pane

0x1687,	// (0x0008cb16) bg_cale_heading_pane

0xa9d2,	// (0x00095e61) bg_cale_pane_cp01

0x169f,	// (0x0008cb2e) cale_week_corner_pane

0x16be,	// (0x0008cb4d) cale_week_day_heading_pane

0x16db,	// (0x0008cb6a) cale_week_scroll_pane_g1

0x16ee,	// (0x0008cb7d) cale_week_scroll_pane_g2

0x1706,	// (0x0008cb95) cale_week_scroll_pane_g3

0x171e,	// (0x0008cbad) cale_week_scroll_pane_g4

0x1736,	// (0x0008cbc5) cale_week_scroll_pane_g5

0x1756,	// (0x0008cbe5) cale_week_scroll_pane_g6

0x1776,	// (0x0008cc05) cale_week_scroll_pane_g7

0x1796,	// (0x0008cc25) cale_week_scroll_pane_g8

0x17ba,	// (0x0008cc49) cale_week_scroll_pane_g9

0x17d2,	// (0x0008cc61) cale_week_scroll_pane_g10

0x17ea,	// (0x0008cc79) cale_week_scroll_pane_g11

0x1802,	// (0x0008cc91) cale_week_scroll_pane_g12

0x181a,	// (0x0008cca9) cale_week_scroll_pane_g13

0x181a,	// (0x0008cca9) cale_week_scroll_pane_g14

0x181a,	// (0x0008cca9) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0009a624) cale_week_scroll_pane_g

0x1856,	// (0x0008cce5) cale_week_time_pane

0x187a,	// (0x0008cd09) grid_cale_week_pane

0xaa01,	// (0x00095e90) scroll_pane_cp08

0x18a0,	// (0x0008cd2f) cell_cale_week_pane_ParamLimits

0x18a0,	// (0x0008cd2f) cell_cale_week_pane

0x192e,	// (0x0008cdbd) cale_week_day_heading_pane_t1

0x1958,	// (0x0008cde7) cale_week_day_heading_pane_t2

0x1987,	// (0x0008ce16) cale_week_day_heading_pane_t3

0x19b6,	// (0x0008ce45) cale_week_day_heading_pane_t4

0x19e5,	// (0x0008ce74) cale_week_day_heading_pane_t5

0x1a1c,	// (0x0008ceab) cale_week_day_heading_pane_t6

0x1a53,	// (0x0008cee2) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0009a645) cale_week_day_heading_pane_t

0xaa1e,	// (0x00095ead) bg_cale_side_pane

0x1a7d,	// (0x0008cf0c) cale_week_time_pane_t1

0x1a97,	// (0x0008cf26) cale_week_time_pane_t2

0x1ab1,	// (0x0008cf40) cale_week_time_pane_t3

0x1acb,	// (0x0008cf5a) cale_week_time_pane_t4

0x1ae5,	// (0x0008cf74) cale_week_time_pane_t5

0x1aff,	// (0x0008cf8e) cale_week_time_pane_t6

0x1b19,	// (0x0008cfa8) cale_week_time_pane_t7

0x1b33,	// (0x0008cfc2) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0009a654) cale_week_time_pane_t

0x1b4d,	// (0x0008cfdc) cell_cale_week_pane_g2

0x1b6c,	// (0x0008cffb) cell_cale_week_pane_g3_ParamLimits

0x1b6c,	// (0x0008cffb) cell_cale_week_pane_g3

0xaa2c,	// (0x00095ebb) grid_highlight_pane_cp07

0xaa34,	// (0x00095ec3) listscroll_gms_pane

0xaa3e,	// (0x00095ecd) grid_gms_pane

0xaa47,	// (0x00095ed6) listscroll_gms_pane_g1

0xaa4f,	// (0x00095ede) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0009a665) listscroll_gms_pane_g

0x1b84,	// (0x0008d013) scroll_pane_cp010

0x1b8f,	// (0x0008d01e) cell_gms_pane_ParamLimits

0x1b8f,	// (0x0008d01e) cell_gms_pane

0x1ba2,	// (0x0008d031) cell_gms_pane_g1

0xaa57,	// (0x00095ee6) cell_gms_pane_g2

0xaa5f,	// (0x00095eee) cell_gms_pane_g3

0xaa68,	// (0x00095ef7) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0009a66a) cell_gms_pane_g

0xaa71,	// (0x00095f00) grid_highlight_pane_cp09

0x3dda,	// (0x0008f269) phob_pre_status_pane_g1

0x3de2,	// (0x0008f271) phob_pre_status_pane_g2

0x3dea,	// (0x0008f279) phob_pre_status_pane_g3

0x3df2,	// (0x0008f281) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0009aa55) phob_pre_status_pane_g

0x3e02,	// (0x0008f291) phob_pre_status_pane_t1

0x3e10,	// (0x0008f29f) phob_pre_status_pane_t2

0x3e20,	// (0x0008f2af) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0009aa60) phob_pre_status_pane_t

0xaa79,	// (0x00095f08) bg_list_pane_cp05

0x1bb2,	// (0x0008d041) grid_vorec_pane

0x1bba,	// (0x0008d049) vorec_t1

0x1bc8,	// (0x0008d057) vorec_t2

0x1bd6,	// (0x0008d065) vorec_t3

0x1be4,	// (0x0008d073) vorec_t4

0x97a6,	// (0x00094c35) vorec_t5

0x97b4,	// (0x00094c43) vorec_t6

0x0004,

0xf1e4,	// (0x0009a673) vorec_t

0x97c2,	// (0x00094c51) wait_bar_pane_cp01

0x1c00,	// (0x0008d08f) cell_vorec_pane_ParamLimits

0x1c00,	// (0x0008d08f) cell_vorec_pane

0x9cc2,	// (0x00095151) cell_vorec_pane_g1

0xa58b,	// (0x00095a1a) grid_highlight_pane_cp05

0x1c28,	// (0x0008d0b7) cams_zoom_pane

0x1c37,	// (0x0008d0c6) image_vga_pane

0x1c51,	// (0x0008d0e0) main_camera_pane_g1

0x1c63,	// (0x0008d0f2) main_camera_pane_g2

0x1c73,	// (0x0008d102) main_camera_pane_g3

0x1c83,	// (0x0008d112) main_camera_pane_g4

0x1c93,	// (0x0008d122) main_camera_pane_g5

0x1ca3,	// (0x0008d132) main_camera_pane_g6

0x1cb5,	// (0x0008d144) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0009a67e) main_camera_pane_g

0x1cc5,	// (0x0008d154) main_camera_pane_t1

0x1cdb,	// (0x0008d16a) main_camera_pane_t2

0x0001,

0xf200,	// (0x0009a68f) main_camera_pane_t

0x1d15,	// (0x0008d1a4) cams_zoom_pane_cp_ParamLimits

0x1d15,	// (0x0008d1a4) cams_zoom_pane_cp

0x1d3d,	// (0x0008d1cc) image_cif_pane_ParamLimits

0x1d3d,	// (0x0008d1cc) image_cif_pane

0x1d73,	// (0x0008d202) image_subqcif_pane

0x1d7b,	// (0x0008d20a) main_video_pane_g1_ParamLimits

0x1d7b,	// (0x0008d20a) main_video_pane_g1

0x1d9f,	// (0x0008d22e) main_video_pane_g2_ParamLimits

0x1d9f,	// (0x0008d22e) main_video_pane_g2

0x1dd3,	// (0x0008d262) main_video_pane_g3_ParamLimits

0x1dd3,	// (0x0008d262) main_video_pane_g3

0x1e01,	// (0x0008d290) main_video_pane_g4_ParamLimits

0x1e01,	// (0x0008d290) main_video_pane_g4

0x1e2f,	// (0x0008d2be) main_video_pane_g5_ParamLimits

0x1e2f,	// (0x0008d2be) main_video_pane_g5

0xaa8d,	// (0x00095f1c) main_video_pane_g6_ParamLimits

0xaa8d,	// (0x00095f1c) main_video_pane_g6

0x0006,

0xf205,	// (0x0009a694) main_video_pane_g_ParamLimits

0xf205,	// (0x0009a694) main_video_pane_g

0x1e58,	// (0x0008d2e7) main_video_pane_t1_ParamLimits

0x1e58,	// (0x0008d2e7) main_video_pane_t1

0xaaa7,	// (0x00095f36) cams_zoom_pane_g1

0xaab0,	// (0x00095f3f) cams_zoom_pane_g2

0xaab9,	// (0x00095f48) cams_zoom_pane_g3

0xaac2,	// (0x00095f51) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0009a6a3) cams_zoom_pane_g

0x1eb5,	// (0x0008d344) grid_cams_pane

0x1ecf,	// (0x0008d35e) linegrid_cams_pane

0x1ee3,	// (0x0008d372) cell_cams_pane_ParamLimits

0x1ee3,	// (0x0008d372) cell_cams_pane

0xaacb,	// (0x00095f5a) cams_burst_image_pane

0xaad3,	// (0x00095f62) cell_cams_pane_g1

0xa58b,	// (0x00095a1a) grid_highlight_pane_cp03

0xa900,	// (0x00095d8f) mp_bg_pane_g1

0xa58b,	// (0x00095a1a) bg_list_pane_cp03

0xc822,	// (0x00097cb1) bg_mp_pane

0xc82a,	// (0x00097cb9) grid_mp_pane

0xc832,	// (0x00097cc1) media_player_g1

0xc83a,	// (0x00097cc9) media_player_t1

0xc848,	// (0x00097cd7) media_player_t2

0xc856,	// (0x00097ce5) media_player_t3

0xc864,	// (0x00097cf3) media_player_t4

0xc872,	// (0x00097d01) media_player_t5

0xc880,	// (0x00097d0f) media_player_t6

0xc88e,	// (0x00097d1d) media_player_t7

0x0006,

0xf5b0,	// (0x0009aa3f) media_player_t

0xc89c,	// (0x00097d2b) wait_bar_pane_cp02

0xf595,	// (0x0009aa24) main_usb_pane_t

0x3dd1,	// (0x0008f260) cell_mp_pane

0xa900,	// (0x00095d8f) cell_mp_pane_g1

0xa58b,	// (0x00095a1a) grid_highlight_pane_cp06

0xaadb,	// (0x00095f6a) grid_skin_colour_pane

0xaae3,	// (0x00095f72) list_highlight_pane_cp03

0x1f1b,	// (0x0008d3aa) skin_g1

0xaaeb,	// (0x00095f7a) skin_t1

0xaafa,	// (0x00095f89) skin_t2

0x0001,

0xf249,	// (0x0009a6d8) skin_t

0x1f23,	// (0x0008d3b2) cell_skin_colour_pane_ParamLimits

0x1f23,	// (0x0008d3b2) cell_skin_colour_pane

0xab08,	// (0x00095f97) cell_skin_colour_pane_g1

0x1f9c,	// (0x0008d42b) call_video_g1_ParamLimits

0x1f9c,	// (0x0008d42b) call_video_g1

0x1fb8,	// (0x0008d447) call_video_g2_ParamLimits

0x1fb8,	// (0x0008d447) call_video_g2

0x0001,

0xf24e,	// (0x0009a6dd) call_video_g_ParamLimits

0xf24e,	// (0x0009a6dd) call_video_g

0x200a,	// (0x0008d499) call_video_uplink_pane_cp1_ParamLimits

0x200a,	// (0x0008d499) call_video_uplink_pane_cp1

0xab1a,	// (0x00095fa9) call_video_uplink_pane_cp2

0x20a9,	// (0x0008d538) video_down_crop_pane_ParamLimits

0x20a9,	// (0x0008d538) video_down_crop_pane

0x21a0,	// (0x0008d62f) video_down_pane_ParamLimits

0x21a0,	// (0x0008d62f) video_down_pane

0xab22,	// (0x00095fb1) video_down_subqcif_pane_ParamLimits

0xab22,	// (0x00095fb1) video_down_subqcif_pane

0xab3a,	// (0x00095fc9) video_down_subqcif_pane_cp_ParamLimits

0xab3a,	// (0x00095fc9) video_down_subqcif_pane_cp

0xab60,	// (0x00095fef) im_reading_pane_ParamLimits

0xab60,	// (0x00095fef) im_reading_pane

0x22b0,	// (0x0008d73f) im_writing_pane_ParamLimits

0x22b0,	// (0x0008d73f) im_writing_pane

0x22c6,	// (0x0008d755) im_reading_pane_t1

0xab7a,	// (0x00096009) list_im_pane

0xab8b,	// (0x0009601a) scroll_pane_cp07

0x22ff,	// (0x0008d78e) im_writing_pane_t1_ParamLimits

0x22ff,	// (0x0008d78e) im_writing_pane_t1

0xaba4,	// (0x00096033) im_writing_pane_t2_ParamLimits

0xaba4,	// (0x00096033) im_writing_pane_t2

0x0001,

0xf258,	// (0x0009a6e7) im_writing_pane_t_ParamLimits

0xf258,	// (0x0009a6e7) im_writing_pane_t

0xa58b,	// (0x00095a1a) input_focus_pane_cp04

0xa58b,	// (0x00095a1a) input_focus_pane_cp05

0x2314,	// (0x0008d7a3) list_im_single_pane_ParamLimits

0x2314,	// (0x0008d7a3) list_im_single_pane

0x2328,	// (0x0008d7b7) list_single_im_pane_t1

0x3d91,	// (0x0008f220) blid_accuracy_pane

0x3d99,	// (0x0008f228) blid_compass_pane

0x3da3,	// (0x0008f232) main_location_t1

0x3db3,	// (0x0008f242) main_location_t2

0x3dc3,	// (0x0008f252) main_location_t3

0x0002,

0xf5bf,	// (0x0009aa4e) main_location_t

0xa58b,	// (0x00095a1a) aid_levels_location

0xa900,	// (0x00095d8f) blid_accuracy_pane_g1

0xa900,	// (0x00095d8f) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0009a749) blid_accuracy_pane_g

0xabec,	// (0x0009607b) wml_content_pane

0xac2a,	// (0x000960b9) wml_button_pane_ParamLimits

0xac2a,	// (0x000960b9) wml_button_pane

0x2337,	// (0x0008d7c6) wml_list_single_large_pane_ParamLimits

0x2337,	// (0x0008d7c6) wml_list_single_large_pane

0x234c,	// (0x0008d7db) wml_list_single_medium_pane_ParamLimits

0x234c,	// (0x0008d7db) wml_list_single_medium_pane

0x2362,	// (0x0008d7f1) wml_list_single_small_pane_ParamLimits

0x2362,	// (0x0008d7f1) wml_list_single_small_pane

0xac3e,	// (0x000960cd) wml_selection_box_pane_ParamLimits

0xac3e,	// (0x000960cd) wml_selection_box_pane

0xac51,	// (0x000960e0) wml_list_single_pane_t1

0xac60,	// (0x000960ef) wml_list_single_medium_pane_t1

0xac6f,	// (0x000960fe) wml_list_single_large_pane_t1

0xac7e,	// (0x0009610d) input_focus_pane_cp02_ParamLimits

0xac7e,	// (0x0009610d) input_focus_pane_cp02

0xac91,	// (0x00096120) wml_selection_box_pane_g1

0xac9a,	// (0x00096129) wml_selection_box_pane_t1_ParamLimits

0xac9a,	// (0x00096129) wml_selection_box_pane_t1

0xa7e6,	// (0x00095c75) bg_wml_button_pane_ParamLimits

0xa7e6,	// (0x00095c75) bg_wml_button_pane

0xacb2,	// (0x00096141) wml_button_pane_g1

0xacba,	// (0x00096149) wml_button_pane_t1

0xacb2,	// (0x00096141) wml_button_bg_pane_g1

0xacca,	// (0x00096159) wml_button_bg_pane_g2

0xacd2,	// (0x00096161) wml_button_bg_pane_g3

0xacda,	// (0x00096169) wml_button_bg_pane_g4

0xace2,	// (0x00096171) wml_button_bg_pane_g5

0xacea,	// (0x00096179) wml_button_bg_pane_g6

0xacf2,	// (0x00096181) wml_button_bg_pane_g7

0xacfa,	// (0x00096189) wml_button_bg_pane_g8

0xad02,	// (0x00096191) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0009a6ec) wml_button_bg_pane_g

0x237a,	// (0x0008d809) bg_list_pane_cp02

0xad0a,	// (0x00096199) mce_header_pane_ParamLimits

0xad0a,	// (0x00096199) mce_header_pane

0xad20,	// (0x000961af) mce_icon_pane

0xad20,	// (0x000961af) mce_image_pane

0xad29,	// (0x000961b8) mce_text_pane_ParamLimits

0xad29,	// (0x000961b8) mce_text_pane

0x2382,	// (0x0008d811) scroll_pane_cp03

0xac22,	// (0x000960b1) scroll_pane_cp04

0xad3c,	// (0x000961cb) scroll_pane_cp05_ParamLimits

0xad3c,	// (0x000961cb) scroll_pane_cp05

0x238c,	// (0x0008d81b) mce_header_field_pane_ParamLimits

0x238c,	// (0x0008d81b) mce_header_field_pane

0x23a3,	// (0x0008d832) mce_header_field_pane_2_ParamLimits

0x23a3,	// (0x0008d832) mce_header_field_pane_2

0x23b9,	// (0x0008d848) mce_header_field_pane_3

0x23c1,	// (0x0008d850) list_single_mce_message_pane_ParamLimits

0x23c1,	// (0x0008d850) list_single_mce_message_pane

0x23d6,	// (0x0008d865) list_single_mce_smart_pane_ParamLimits

0x23d6,	// (0x0008d865) list_single_mce_smart_pane

0xad48,	// (0x000961d7) input_focus_pane_cp03

0xad51,	// (0x000961e0) list_header_data_pane

0x23f6,	// (0x0008d885) mce_header_field_pane_t1

0x2406,	// (0x0008d895) list_single_mce_header_pane_ParamLimits

0x2406,	// (0x0008d895) list_single_mce_header_pane

0xad59,	// (0x000961e8) list_single_mce_header_pane_t1

0xad68,	// (0x000961f7) list_single_mce_message_pane_g1

0xad70,	// (0x000961ff) list_single_mce_message_pane_t1

0x2440,	// (0x0008d8cf) bg_cale_heading_pane_cp01_ParamLimits

0x2440,	// (0x0008d8cf) bg_cale_heading_pane_cp01

0xad7e,	// (0x0009620d) bg_cale_pane_cp02_ParamLimits

0xad7e,	// (0x0009620d) bg_cale_pane_cp02

0x247a,	// (0x0008d909) cale_month_corner_pane

0x2499,	// (0x0008d928) cale_month_day_heading_pane_ParamLimits

0x2499,	// (0x0008d928) cale_month_day_heading_pane

0x24eb,	// (0x0008d97a) cale_month_pane_g1_ParamLimits

0x24eb,	// (0x0008d97a) cale_month_pane_g1

0x251a,	// (0x0008d9a9) cale_month_pane_g2_ParamLimits

0x251a,	// (0x0008d9a9) cale_month_pane_g2

0x254a,	// (0x0008d9d9) cale_month_pane_g3_ParamLimits

0x254a,	// (0x0008d9d9) cale_month_pane_g3

0x2586,	// (0x0008da15) cale_month_pane_g4_ParamLimits

0x2586,	// (0x0008da15) cale_month_pane_g4

0x25c2,	// (0x0008da51) cale_month_pane_g5_ParamLimits

0x25c2,	// (0x0008da51) cale_month_pane_g5

0x260a,	// (0x0008da99) cale_month_pane_g6_ParamLimits

0x260a,	// (0x0008da99) cale_month_pane_g6

0x2656,	// (0x0008dae5) cale_month_pane_g7_ParamLimits

0x2656,	// (0x0008dae5) cale_month_pane_g7

0x26aa,	// (0x0008db39) cale_month_pane_g8_ParamLimits

0x26aa,	// (0x0008db39) cale_month_pane_g8

0x26fe,	// (0x0008db8d) cale_month_pane_g9_ParamLimits

0x26fe,	// (0x0008db8d) cale_month_pane_g9

0x2750,	// (0x0008dbdf) cale_month_pane_g10_ParamLimits

0x2750,	// (0x0008dbdf) cale_month_pane_g10

0x27a2,	// (0x0008dc31) cale_month_pane_g11_ParamLimits

0x27a2,	// (0x0008dc31) cale_month_pane_g11

0x27f4,	// (0x0008dc83) cale_month_pane_g12_ParamLimits

0x27f4,	// (0x0008dc83) cale_month_pane_g12

0x2846,	// (0x0008dcd5) cale_month_pane_g13_ParamLimits

0x2846,	// (0x0008dcd5) cale_month_pane_g13

0x000c,

0xf270,	// (0x0009a6ff) cale_month_pane_g_ParamLimits

0xf270,	// (0x0009a6ff) cale_month_pane_g

0x2898,	// (0x0008dd27) cale_month_week_pane

0x28bc,	// (0x0008dd4b) grid_cale_month_pane_ParamLimits

0x28bc,	// (0x0008dd4b) grid_cale_month_pane

0x2905,	// (0x0008dd94) cale_month_day_heading_pane_t1

0x298b,	// (0x0008de1a) cale_month_day_heading_pane_t2

0x2a04,	// (0x0008de93) cale_month_day_heading_pane_t3

0x2a7d,	// (0x0008df0c) cale_month_day_heading_pane_t4

0x2afe,	// (0x0008df8d) cale_month_day_heading_pane_t5

0x2b87,	// (0x0008e016) cale_month_day_heading_pane_t6

0x2c10,	// (0x0008e09f) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0009a71a) cale_month_day_heading_pane_t

0xaa1e,	// (0x00095ead) bg_cale_side_pane_cp01

0x2ca1,	// (0x0008e130) cale_month_week_pane_t1

0x2cba,	// (0x0008e149) cale_month_week_pane_t2

0x2cd3,	// (0x0008e162) cale_month_week_pane_t3

0x2cec,	// (0x0008e17b) cale_month_week_pane_t4

0x2d05,	// (0x0008e194) cale_month_week_pane_t5

0x2d1e,	// (0x0008e1ad) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0009a729) cale_month_week_pane_t

0x2d37,	// (0x0008e1c6) cell_cale_month_pane_ParamLimits

0x2d37,	// (0x0008e1c6) cell_cale_month_pane

0x9ccc,	// (0x0009515b) cell_cale_month_pane_g1

0x2e65,	// (0x0008e2f4) cell_cale_month_pane_t1_ParamLimits

0x2e65,	// (0x0008e2f4) cell_cale_month_pane_t1

0xaa2c,	// (0x00095ebb) grid_highlight_pane_cp08

0xa900,	// (0x00095d8f) main_smil_g1

0x2e91,	// (0x0008e320) smil_status_pane

0xadbd,	// (0x0009624c) smil_text_pane

0xc742,	// (0x00097bd1) bg_popup_call3_rect_pane_g8

0xc74a,	// (0x00097bd9) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0009a9e2) bg_popup_call3_rect_pane_g

0xc991,	// (0x00097e20) smil_status_volume_pane_g1

0xadc7,	// (0x00096256) smil_status_pane_t1

0x9e22,	// (0x000952b1) volume_smil_pane

0xadde,	// (0x0009626d) list_smil_text_pane

0x2ea4,	// (0x0008e333) scroll_pane_cp011

0x2eaf,	// (0x0008e33e) smil_text_list_pane_t1_ParamLimits

0x2eaf,	// (0x0008e33e) smil_text_list_pane_t1

0x9cd8,	// (0x00095167) aid_volume_smil_ParamLimits

0x9cd8,	// (0x00095167) aid_volume_smil

0xa900,	// (0x00095d8f) smil_volume_pane_g1

0xa900,	// (0x00095d8f) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0009a749) smil_volume_pane_g

0x165b,	// (0x0008caea) listscroll_cale_day_pane

0xade8,	// (0x00096277) bg_cale_pane

0xae00,	// (0x0009628f) list_cale_pane

0xae23,	// (0x000962b2) scroll_pane_cp09

0xae34,	// (0x000962c3) cale_bg_pane_g1

0xae3c,	// (0x000962cb) cale_bg_pane_g2

0xae44,	// (0x000962d3) cale_bg_pane_g3

0xae4c,	// (0x000962db) cale_bg_pane_g4

0xae54,	// (0x000962e3) cale_bg_pane_g5

0xae5c,	// (0x000962eb) cale_bg_pane_g6

0xae64,	// (0x000962f3) cale_bg_pane_g7

0xae6c,	// (0x000962fb) cale_bg_pane_g8

0xae74,	// (0x00096303) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0009a74e) cale_bg_pane_g

0x2ef3,	// (0x0008e382) list_cale_time_pane_ParamLimits

0x2ef3,	// (0x0008e382) list_cale_time_pane

0xae7c,	// (0x0009630b) list_cale_time_pane_g1_ParamLimits

0xae7c,	// (0x0009630b) list_cale_time_pane_g1

0xae88,	// (0x00096317) list_cale_time_pane_g2_ParamLimits

0xae88,	// (0x00096317) list_cale_time_pane_g2

0x2f08,	// (0x0008e397) list_cale_time_pane_g3_ParamLimits

0x2f08,	// (0x0008e397) list_cale_time_pane_g3

0x2f16,	// (0x0008e3a5) list_cale_time_pane_g4_ParamLimits

0x2f16,	// (0x0008e3a5) list_cale_time_pane_g4

0x2f24,	// (0x0008e3b3) list_cale_time_pane_g5_ParamLimits

0x2f24,	// (0x0008e3b3) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0009a761) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0009a761) list_cale_time_pane_g

0xaea2,	// (0x00096331) list_cale_time_pane_t1_ParamLimits

0xaea2,	// (0x00096331) list_cale_time_pane_t1

0xaeca,	// (0x00096359) list_cale_time_pane_t2_ParamLimits

0xaeca,	// (0x00096359) list_cale_time_pane_t2

0x31aa,	// (0x0008e639) aid_blid_cardinal_pane

0x31e8,	// (0x0008e677) compass_pane_t4

0xaef2,	// (0x00096381) list_cale_time_pane_t4_ParamLimits

0xaef2,	// (0x00096381) list_cale_time_pane_t4

0x31f6,	// (0x0008e685) compass_pane_t5

0x3204,	// (0x0008e693) compass_pane_t6

0x3212,	// (0x0008e6a1) compass_pane_t7

0xb3c1,	// (0x00096850) navi_pane_cc_t1

0xb59e,	// (0x00096a2d) aid_phob_thumbnail_center_pane

0x37a9,	// (0x0008ec38) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0009a76e) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0009a76e) list_cale_time_pane_t

0x98ba,	// (0x00094d49) bg_popup_window_pane_cp02_ParamLimits

0x98ba,	// (0x00094d49) bg_popup_window_pane_cp02

0xaf1a,	// (0x000963a9) heading_pane_cp01_ParamLimits

0xaf1a,	// (0x000963a9) heading_pane_cp01

0xaf26,	// (0x000963b5) loc_req_pane_ParamLimits

0xaf26,	// (0x000963b5) loc_req_pane

0xaf36,	// (0x000963c5) loc_type_pane_ParamLimits

0xaf36,	// (0x000963c5) loc_type_pane

0xaf48,	// (0x000963d7) loc_type_pane_t1_ParamLimits

0xaf48,	// (0x000963d7) loc_type_pane_t1

0xaf5a,	// (0x000963e9) loc_type_pane_t2_ParamLimits

0xaf5a,	// (0x000963e9) loc_type_pane_t2

0xaf6c,	// (0x000963fb) loc_type_pane_t3_ParamLimits

0xaf6c,	// (0x000963fb) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0009a775) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0009a775) loc_type_pane_t

0xaf7e,	// (0x0009640d) list_loc_req_pane

0xaf88,	// (0x00096417) scroll_pane_cp012

0x2f32,	// (0x0008e3c1) list_single_loc_request_popup_menu_pane_ParamLimits

0x2f32,	// (0x0008e3c1) list_single_loc_request_popup_menu_pane

0xaf93,	// (0x00096422) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf93,	// (0x00096422) list_single_loc_request_popup_menu_pane_g1

0xaf9f,	// (0x0009642e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf9f,	// (0x0009642e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0009a77c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0009a77c) list_single_loc_request_popup_menu_pane_g

0xafab,	// (0x0009643a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafab,	// (0x0009643a) list_single_loc_request_popup_menu_pane_t1

0xa7e6,	// (0x00095c75) bg_popup_window_pane_cp03_ParamLimits

0xa7e6,	// (0x00095c75) bg_popup_window_pane_cp03

0xafc1,	// (0x00096450) heading_loc_req_pane_ParamLimits

0xafc1,	// (0x00096450) heading_loc_req_pane

0x2f3f,	// (0x0008e3ce) popup_dyc_status_message_window_g1_ParamLimits

0x2f3f,	// (0x0008e3ce) popup_dyc_status_message_window_g1

0x2f53,	// (0x0008e3e2) popup_dyc_status_message_window_t1_ParamLimits

0x2f53,	// (0x0008e3e2) popup_dyc_status_message_window_t1

0x2f68,	// (0x0008e3f7) popup_dyc_status_message_window_t2_ParamLimits

0x2f68,	// (0x0008e3f7) popup_dyc_status_message_window_t2

0x2f7d,	// (0x0008e40c) popup_dyc_status_message_window_t3_ParamLimits

0x2f7d,	// (0x0008e40c) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0009a781) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0009a781) popup_dyc_status_message_window_t

0xa58b,	// (0x00095a1a) bg_heading_pane_cp01

0xafcd,	// (0x0009645c) heading_loc_req_pane_g1

0xafd5,	// (0x00096464) heading_loc_req_pane_g2

0xafdd,	// (0x0009646c) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0009a788) heading_loc_req_pane_g

0xafe5,	// (0x00096474) heading_loc_req_pane_t1

0xaff4,	// (0x00096483) bg_popup_sub_pane_cp01_ParamLimits

0xaff4,	// (0x00096483) bg_popup_sub_pane_cp01

0xb002,	// (0x00096491) popup_cale_events_window_g1_ParamLimits

0xb002,	// (0x00096491) popup_cale_events_window_g1

0xb022,	// (0x000964b1) popup_cale_events_window_g2_ParamLimits

0xb022,	// (0x000964b1) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0009a7bc) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0009a7bc) popup_cale_events_window_g

0xb042,	// (0x000964d1) popup_cale_events_window_t1_ParamLimits

0xb042,	// (0x000964d1) popup_cale_events_window_t1

0xb054,	// (0x000964e3) popup_cale_events_window_t2_ParamLimits

0xb054,	// (0x000964e3) popup_cale_events_window_t2

0xb092,	// (0x00096521) popup_cale_events_window_t3_ParamLimits

0xb092,	// (0x00096521) popup_cale_events_window_t3

0xb0cc,	// (0x0009655b) popup_cale_events_window_t4_ParamLimits

0xb0cc,	// (0x0009655b) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0009a7c1) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0009a7c1) popup_cale_events_window_t

0x2fa5,	// (0x0008e434) call_type_pane

0x2fb5,	// (0x0008e444) popup_call_status_window_g1

0x2fc9,	// (0x0008e458) popup_call_status_window_g2

0x2fdd,	// (0x0008e46c) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0009a7ca) popup_call_status_window_g

0xb102,	// (0x00096591) call_type_pane_g1

0xb10b,	// (0x0009659a) call_type_pane_g2

0x0001,

0xf342,	// (0x0009a7d1) call_type_pane_g

0xa58b,	// (0x00095a1a) bg_popup_sub_pane_cp02

0xb114,	// (0x000965a3) listscroll_popup_wml_pane

0xb11c,	// (0x000965ab) list_wml_pane

0xb126,	// (0x000965b5) scroll_pane_cp013

0xb131,	// (0x000965c0) list_single_graphic_popup_wml_pane_ParamLimits

0xb131,	// (0x000965c0) list_single_graphic_popup_wml_pane

0xa900,	// (0x00095d8f) list_single_graphic_popup_wml_pane_g1

0xb145,	// (0x000965d4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0009a7d6) list_single_graphic_popup_wml_pane_g

0xb14d,	// (0x000965dc) list_single_graphic_popup_wml_pane_t1

0xb163,	// (0x000965f2) aid_call_pane

0xa7de,	// (0x00095c6d) popup_clock_analogue_window_g1

0xa7de,	// (0x00095c6d) popup_clock_analogue_window_g2

0x9cfa,	// (0x00095189) popup_clock_analogue_window_g3

0x9cfa,	// (0x00095189) popup_clock_analogue_window_g4

0xa900,	// (0x00095d8f) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0009a7db) popup_clock_analogue_window_g

0x9d02,	// (0x00095191) popup_clock_analogue_window_t1

0x9d10,	// (0x0009519f) clock_digital_number_pane_ParamLimits

0x9d10,	// (0x0009519f) clock_digital_number_pane

0x9d1c,	// (0x000951ab) clock_digital_number_pane_cp02_ParamLimits

0x9d1c,	// (0x000951ab) clock_digital_number_pane_cp02

0x9d28,	// (0x000951b7) clock_digital_number_pane_cp03_ParamLimits

0x9d28,	// (0x000951b7) clock_digital_number_pane_cp03

0x9d34,	// (0x000951c3) clock_digital_number_pane_cp04_ParamLimits

0x9d34,	// (0x000951c3) clock_digital_number_pane_cp04

0x9d44,	// (0x000951d3) clock_digital_separator_pane_ParamLimits

0x9d44,	// (0x000951d3) clock_digital_separator_pane

0x9d50,	// (0x000951df) popup_clock_digital_window_t1

0xa900,	// (0x00095d8f) clock_digital_number_pane_g1

0xa900,	// (0x00095d8f) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0009a749) clock_digital_number_pane_g

0xa900,	// (0x00095d8f) clock_digital_separator_pane_g1

0xa900,	// (0x00095d8f) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0009a749) clock_digital_separator_pane_g

0xa58b,	// (0x00095a1a) bg_popup_window_pane_cp04

0xb16b,	// (0x000965fa) heading_pane_cp03

0xb173,	// (0x00096602) listscroll_popup_gms_pane

0xb17b,	// (0x0009660a) grid_large_graphic_popup_pane

0xb185,	// (0x00096614) listscroll_popup_gms_pane_g1

0xb18d,	// (0x0009661c) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0009a7e6) listscroll_popup_gms_pane_g

0xac22,	// (0x000960b1) scroll_pane_cp014

0x2fec,	// (0x0008e47b) cell_large_graphic_popup_pane_ParamLimits

0x2fec,	// (0x0008e47b) cell_large_graphic_popup_pane

0x3004,	// (0x0008e493) cell_large_graphic_popup_pane_g1_ParamLimits

0x3004,	// (0x0008e493) cell_large_graphic_popup_pane_g1

0xb195,	// (0x00096624) cell_large_graphic_popup_pane_g2_ParamLimits

0xb195,	// (0x00096624) cell_large_graphic_popup_pane_g2

0xb1a1,	// (0x00096630) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1a1,	// (0x00096630) cell_large_graphic_popup_pane_g3

0xb1ae,	// (0x0009663d) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1ae,	// (0x0009663d) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0009a7eb) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0009a7eb) cell_large_graphic_popup_pane_g

0xb1be,	// (0x0009664d) grid_highlight_pane_cp010

0xa900,	// (0x00095d8f) bg_popup_call_pane_g1

0xb1c8,	// (0x00096657) list_single_graphic_popup_conf_pane_ParamLimits

0xb1c8,	// (0x00096657) list_single_graphic_popup_conf_pane

0xb1db,	// (0x0009666a) list_highlight_pane_cp01

0xb1e4,	// (0x00096673) list_single_graphic_popup_conf_pane_g1

0xb1ec,	// (0x0009667b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0009a7f4) list_single_graphic_popup_conf_pane_g

0xb1f4,	// (0x00096683) list_single_graphic_popup_conf_pane_t1

0xb202,	// (0x00096691) linegrid_cams_pane_g1

0x3010,	// (0x0008e49f) linegrid_cams_pane_g2

0xaa5f,	// (0x00095eee) linegrid_cams_pane_g3

0xb20b,	// (0x0009669a) linegrid_cams_pane_g4

0x3019,	// (0x0008e4a8) linegrid_cams_pane_g5

0x3022,	// (0x0008e4b1) linegrid_cams_pane_g6

0xaa68,	// (0x00095ef7) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0009a7f9) linegrid_cams_pane_g

0xb214,	// (0x000966a3) popup_clock_analogue_window

0xb214,	// (0x000966a3) popup_clock_digital_window

0xa58b,	// (0x00095a1a) popup_phob_thumbnail_window

0xa900,	// (0x00095d8f) call_video_uplink_pane_g1

0xb21d,	// (0x000966ac) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0009a808) call_video_uplink_pane_g

0xb225,	// (0x000966b4) video_uplink_pane

0xb22d,	// (0x000966bc) mce_image_pane_g1

0x302d,	// (0x0008e4bc) mce_image_pane_g2

0x3037,	// (0x0008e4c6) mce_image_pane_g3

0x303f,	// (0x0008e4ce) mce_image_pane_g4

0x3047,	// (0x0008e4d6) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0009a80d) mce_image_pane_g

0xb237,	// (0x000966c6) control_top_pane_stacon_cp01_ParamLimits

0xb237,	// (0x000966c6) control_top_pane_stacon_cp01

0xb24b,	// (0x000966da) uni_indicator_pane_stacon_cp01_ParamLimits

0xb24b,	// (0x000966da) uni_indicator_pane_stacon_cp01

0xb25c,	// (0x000966eb) bg_popup_sub_pane_cp03

0xb266,	// (0x000966f5) chi_dic_find_pane

0x304f,	// (0x0008e4de) listscroll_chi_dic_pane

0xb26e,	// (0x000966fd) main_pane_chidic_g1

0xb276,	// (0x00096705) chi_dic_find_pane_t1

0xb2a4,	// (0x00096733) find_chidic_pane

0xb2ad,	// (0x0009673c) chi_dic_list_pane_ParamLimits

0xb2ad,	// (0x0009673c) chi_dic_list_pane

0xb2be,	// (0x0009674d) scroll_pane_cp020

0xb2c6,	// (0x00096755) find_chidic_pane_t1

0xa58b,	// (0x00095a1a) input_focus_pane_cp06

0x3063,	// (0x0008e4f2) list_chi_dic_pane_ParamLimits

0x3063,	// (0x0008e4f2) list_chi_dic_pane

0x3075,	// (0x0008e504) list_chi_dic_pane_t1_ParamLimits

0x3075,	// (0x0008e504) list_chi_dic_pane_t1

0xa58b,	// (0x00095a1a) list_highlight_pane_cp020

0xb2d5,	// (0x00096764) bg_cale_heading_pane_g1

0x3088,	// (0x0008e517) bg_cale_heading_pane_g2

0x3090,	// (0x0008e51f) bg_cale_heading_pane_g3

0x3098,	// (0x0008e527) bg_cale_heading_pane_g4

0x30a2,	// (0x0008e531) bg_cale_heading_pane_g5

0x30ac,	// (0x0008e53b) bg_cale_heading_pane_g6

0x30b4,	// (0x0008e543) bg_cale_heading_pane_g7

0x30bc,	// (0x0008e54b) bg_cale_heading_pane_g8

0x30c6,	// (0x0008e555) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0009a818) bg_cale_heading_pane_g

0xb2d5,	// (0x00096764) bg_cale_side_pane_g1

0x30d0,	// (0x0008e55f) bg_cale_side_pane_g2

0x30d8,	// (0x0008e567) bg_cale_side_pane_g3

0x30e0,	// (0x0008e56f) bg_cale_side_pane_g4

0x30e8,	// (0x0008e577) bg_cale_side_pane_g5

0x30f0,	// (0x0008e57f) bg_cale_side_pane_g6

0x30f8,	// (0x0008e587) bg_cale_side_pane_g7

0x3100,	// (0x0008e58f) bg_cale_side_pane_g8

0x3108,	// (0x0008e597) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0009a82b) bg_cale_side_pane_g

0x3110,	// (0x0008e59f) popup_call_status_window_ParamLimits

0x3110,	// (0x0008e59f) popup_call_status_window

0xb2dd,	// (0x0009676c) stacon_top_pane

0xb2e5,	// (0x00096774) status_pane_ParamLimits

0xb2e5,	// (0x00096774) status_pane

0xb2fa,	// (0x00096789) status_small_pane

0xb302,	// (0x00096791) control_pane

0xa58b,	// (0x00095a1a) stacon_bottom_pane

0xb30a,	// (0x00096799) list_single_mce_smart_pane_t1_ParamLimits

0xb30a,	// (0x00096799) list_single_mce_smart_pane_t1

0xb31d,	// (0x000967ac) list_single_mce_smart_pane_t2_ParamLimits

0xb31d,	// (0x000967ac) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0009a83e) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0009a83e) list_single_mce_smart_pane_t

0x3159,	// (0x0008e5e8) compass_pane

0x3162,	// (0x0008e5f1) main_location2_pane_t1

0x3174,	// (0x0008e603) main_location2_pane_t2

0x3186,	// (0x0008e615) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0009a843) main_location2_pane_t

0xb33c,	// (0x000967cb) compass_pane_g1_ParamLimits

0xb33c,	// (0x000967cb) compass_pane_g1

0x31ca,	// (0x0008e659) compass_pane_t1

0x31d9,	// (0x0008e668) compass_pane_t2

0x0005,

0xf3bd,	// (0x0009a84c) compass_pane_t

0x3220,	// (0x0008e6af) text_secondary_cp61

0xb3b8,	// (0x00096847) navi_pane_cams_g5

0xb434,	// (0x000968c3) navi_pane_im_t1

0xb442,	// (0x000968d1) navi_pane_mp_g1_ParamLimits

0xb442,	// (0x000968d1) navi_pane_mp_g1

0xb456,	// (0x000968e5) navi_pane_mp_g2_ParamLimits

0xb456,	// (0x000968e5) navi_pane_mp_g2

0xb462,	// (0x000968f1) navi_pane_mp_g3_ParamLimits

0xb462,	// (0x000968f1) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0009a860) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0009a860) navi_pane_mp_g

0xb46e,	// (0x000968fd) navi_pane_mp_t1

0xb47c,	// (0x0009690b) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0009a867) navi_pane_mp_t

0xb4e7,	// (0x00096976) navi_pane_vt_g1

0xb46e,	// (0x000968fd) navi_pane_vt_t1

0xb4ef,	// (0x0009697e) navi_slider_pane

0xaa79,	// (0x00095f08) zooming_pane

0xb4ff,	// (0x0009698e) navi_slider_pane_g1

0x9d6d,	// (0x000951fc) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0009a86e) navi_slider_pane_g

0xb523,	// (0x000969b2) aid_levels_zoom

0xb52b,	// (0x000969ba) zooming_pane_g1

0xb533,	// (0x000969c2) zooming_pane_g2

0xb533,	// (0x000969c2) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0009a87d) zooming_pane_g

0xb53b,	// (0x000969ca) level_10_zoom

0xb544,	// (0x000969d3) level_11_zoom

0xb54d,	// (0x000969dc) level_1_zoom

0xb556,	// (0x000969e5) level_2_zoom

0xb55f,	// (0x000969ee) level_3_zoom

0xb568,	// (0x000969f7) level_4_zoom

0xb571,	// (0x00096a00) level_5_zoom

0xb57a,	// (0x00096a09) level_6_zoom

0xb583,	// (0x00096a12) level_7_zoom

0xb58c,	// (0x00096a1b) level_8_zoom

0xb595,	// (0x00096a24) level_9_zoom

0xb5a6,	// (0x00096a35) popup_phob_thumbnail_window_g1

0xb5ae,	// (0x00096a3d) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0009a884) popup_phob_thumbnail_window_g

0xc8a4,	// (0x00097d33) level_1_location

0xc8ac,	// (0x00097d3b) level_2_location

0xc8b4,	// (0x00097d43) level_3_location

0xc8bc,	// (0x00097d4b) level_4_location

0xaa79,	// (0x00095f08) level_5_location

0x3271,	// (0x0008e700) mce_icon_pane_g1

0x327b,	// (0x0008e70a) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0009a889) mce_icon_pane_g

0x3283,	// (0x0008e712) main_mup_pane_g1_ParamLimits

0x3283,	// (0x0008e712) main_mup_pane_g1

0x3299,	// (0x0008e728) main_mup_pane_g2_ParamLimits

0x3299,	// (0x0008e728) main_mup_pane_g2

0x32b1,	// (0x0008e740) main_mup_pane_g3_ParamLimits

0x32b1,	// (0x0008e740) main_mup_pane_g3

0x32c9,	// (0x0008e758) main_mup_pane_g4_ParamLimits

0x32c9,	// (0x0008e758) main_mup_pane_g4

0x32e1,	// (0x0008e770) main_mup_pane_g5_ParamLimits

0x32e1,	// (0x0008e770) main_mup_pane_g5

0x32fd,	// (0x0008e78c) main_mup_pane_g6_ParamLimits

0x32fd,	// (0x0008e78c) main_mup_pane_g6

0x3315,	// (0x0008e7a4) main_mup_pane_g7_ParamLimits

0x3315,	// (0x0008e7a4) main_mup_pane_g7

0x332d,	// (0x0008e7bc) main_mup_pane_g8_ParamLimits

0x332d,	// (0x0008e7bc) main_mup_pane_g8

0x3347,	// (0x0008e7d6) main_mup_pane_g9_ParamLimits

0x3347,	// (0x0008e7d6) main_mup_pane_g9

0x3361,	// (0x0008e7f0) main_mup_pane_g10_ParamLimits

0x3361,	// (0x0008e7f0) main_mup_pane_g10

0x337b,	// (0x0008e80a) main_mup_pane_g11_ParamLimits

0x337b,	// (0x0008e80a) main_mup_pane_g11

0x338f,	// (0x0008e81e) main_mup_pane_g12_ParamLimits

0x338f,	// (0x0008e81e) main_mup_pane_g12

0x33a5,	// (0x0008e834) main_mup_pane_g13_ParamLimits

0x33a5,	// (0x0008e834) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0009a88e) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0009a88e) main_mup_pane_g

0x33b9,	// (0x0008e848) main_mup_pane_t1_ParamLimits

0x33b9,	// (0x0008e848) main_mup_pane_t1

0x33d3,	// (0x0008e862) main_mup_pane_t2_ParamLimits

0x33d3,	// (0x0008e862) main_mup_pane_t2

0x33eb,	// (0x0008e87a) main_mup_pane_t3_ParamLimits

0x33eb,	// (0x0008e87a) main_mup_pane_t3

0x3403,	// (0x0008e892) main_mup_pane_t4_ParamLimits

0x3403,	// (0x0008e892) main_mup_pane_t4

0x3421,	// (0x0008e8b0) main_mup_pane_t5_ParamLimits

0x3421,	// (0x0008e8b0) main_mup_pane_t5

0x3436,	// (0x0008e8c5) main_mup_pane_t6_ParamLimits

0x3436,	// (0x0008e8c5) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0009a8a9) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0009a8a9) main_mup_pane_t

0x3448,	// (0x0008e8d7) mup_progress_pane_ParamLimits

0x3448,	// (0x0008e8d7) mup_progress_pane

0x3454,	// (0x0008e8e3) mup_visualizer_pane_ParamLimits

0x3454,	// (0x0008e8e3) mup_visualizer_pane

0x3484,	// (0x0008e913) mup_volume_pane_ParamLimits

0x3484,	// (0x0008e913) mup_volume_pane

0xb5b6,	// (0x00096a45) mup_visualizer_pane_g1_ParamLimits

0xb5b6,	// (0x00096a45) mup_visualizer_pane_g1

0xb5b6,	// (0x00096a45) mup_visualizer_pane_g2_ParamLimits

0xb5b6,	// (0x00096a45) mup_visualizer_pane_g2

0xb33c,	// (0x000967cb) mup_visualizer_pane_g3_ParamLimits

0xb33c,	// (0x000967cb) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0009a8b6) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0009a8b6) mup_visualizer_pane_g

0xa900,	// (0x00095d8f) mup_volume_pane_g1

0xb5cc,	// (0x00096a5b) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0009a8bd) mup_volume_pane_g

0xa900,	// (0x00095d8f) mup_progress_pane_g1

0xb5d5,	// (0x00096a64) mup_progress_pane_g2

0xb5de,	// (0x00096a6d) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0009a8c2) mup_progress_pane_g

0xa58b,	// (0x00095a1a) bg_popup_window_pane_cp05

0xb5e7,	// (0x00096a76) heading_pane_cp02_ParamLimits

0xb5e7,	// (0x00096a76) heading_pane_cp02

0xb601,	// (0x00096a90) list_popup_blid_pane

0xb609,	// (0x00096a98) list_blid_sat_info_pane_ParamLimits

0xb609,	// (0x00096a98) list_blid_sat_info_pane

0xb61c,	// (0x00096aab) list_blid_sat_info_pane_g1

0xb624,	// (0x00096ab3) list_blid_sat_info_pane_t1

0x359a,	// (0x0008ea29) mup_equalizer_pane_ParamLimits

0x359a,	// (0x0008ea29) mup_equalizer_pane

0x35b3,	// (0x0008ea42) mup_equalizer_pane_cp1_ParamLimits

0x35b3,	// (0x0008ea42) mup_equalizer_pane_cp1

0x35d0,	// (0x0008ea5f) mup_equalizer_pane_cp2_ParamLimits

0x35d0,	// (0x0008ea5f) mup_equalizer_pane_cp2

0x35ed,	// (0x0008ea7c) mup_equalizer_pane_cp3_ParamLimits

0x35ed,	// (0x0008ea7c) mup_equalizer_pane_cp3

0x360e,	// (0x0008ea9d) mup_equalizer_pane_cp4_ParamLimits

0x360e,	// (0x0008ea9d) mup_equalizer_pane_cp4

0x362f,	// (0x0008eabe) mup_equalizer_pane_cp5

0x3643,	// (0x0008ead2) mup_equalizer_pane_cp6

0x3657,	// (0x0008eae6) mup_equalizer_pane_cp7

0xc7c2,	// (0x00097c51) bg_popup_call_poc_act_pane_g9

0xc7ca,	// (0x00097c59) bg_popup_call_poc_act_pane_g10

0xc7d2,	// (0x00097c61) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7e6,	// (0x00095c75) mup_scale_pane

0xa900,	// (0x00095d8f) mup_scale_pane_g1

0xb632,	// (0x00096ac1) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0009a8de) mup_scale_pane_g

0xb656,	// (0x00096ae5) msg_data_pane

0xb65e,	// (0x00096aed) scroll_pane_cp017

0x0253,	// (0x0008b6e2) bg_list_pane_cp04_ParamLimits

0x0253,	// (0x0008b6e2) bg_list_pane_cp04

0xb666,	// (0x00096af5) msg_data_pane_g1

0x367d,	// (0x0008eb0c) msg_data_pane_g2

0x3687,	// (0x0008eb16) msg_data_pane_g3

0x368f,	// (0x0008eb1e) msg_data_pane_g4

0x3697,	// (0x0008eb26) msg_data_pane_g5

0x369f,	// (0x0008eb2e) msg_data_pane_g6

0x36a7,	// (0x0008eb36) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0009a8ed) msg_data_pane_g

0x0273,	// (0x0008b702) msg_text_pane_ParamLimits

0x0273,	// (0x0008b702) msg_text_pane

0x36af,	// (0x0008eb3e) qrid_highlight_pane_cp011_ParamLimits

0x36af,	// (0x0008eb3e) qrid_highlight_pane_cp011

0xa58b,	// (0x00095a1a) msg_body_pane

0xa58b,	// (0x00095a1a) msg_header_pane

0xb677,	// (0x00096b06) input_focus_pane_cp07

0x02aa,	// (0x0008b739) msg_header_pane_t1_ParamLimits

0x02aa,	// (0x0008b739) msg_header_pane_t1

0x02bc,	// (0x0008b74b) msg_header_pane_t2_ParamLimits

0x02bc,	// (0x0008b74b) msg_header_pane_t2

0x0001,

0xf472,	// (0x0009a901) msg_header_pane_t_ParamLimits

0xf472,	// (0x0009a901) msg_header_pane_t

0xb68c,	// (0x00096b1b) msg_body_pane_g1

0x02ce,	// (0x0008b75d) msg_body_pane_t1_ParamLimits

0x02ce,	// (0x0008b75d) msg_body_pane_t1

0x02ff,	// (0x0008b78e) msg_body_pane_t2_ParamLimits

0x02ff,	// (0x0008b78e) msg_body_pane_t2

0x0311,	// (0x0008b7a0) msg_body_pane_t3_ParamLimits

0x0311,	// (0x0008b7a0) msg_body_pane_t3

0x0002,

0xf477,	// (0x0009a906) msg_body_pane_t_ParamLimits

0xf477,	// (0x0009a906) msg_body_pane_t

0x36ff,	// (0x0008eb8e) main_viewer_pane_g1_ParamLimits

0x36ff,	// (0x0008eb8e) main_viewer_pane_g1

0x370d,	// (0x0008eb9c) main_viewer_pane_g2_ParamLimits

0x370d,	// (0x0008eb9c) main_viewer_pane_g2

0x371b,	// (0x0008ebaa) main_viewer_pane_g3_ParamLimits

0x371b,	// (0x0008ebaa) main_viewer_pane_g3

0x372a,	// (0x0008ebb9) main_viewer_pane_g4_ParamLimits

0x372a,	// (0x0008ebb9) main_viewer_pane_g4

0x9d97,	// (0x00095226) main_viewer_pane_g5_ParamLimits

0x9d97,	// (0x00095226) main_viewer_pane_g5

0x9d97,	// (0x00095226) main_viewer_pane_g7_ParamLimits

0x9d97,	// (0x00095226) main_viewer_pane_g7

0x9da9,	// (0x00095238) main_viewer_pane_g8_ParamLimits

0x9da9,	// (0x00095238) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0009a916) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0009a916) main_viewer_pane_g

0xb694,	// (0x00096b23) viewer_content_pane_ParamLimits

0xb694,	// (0x00096b23) viewer_content_pane

0x3766,	// (0x0008ebf5) main_postcard_pane_g1_ParamLimits

0x3766,	// (0x0008ebf5) main_postcard_pane_g1

0x377c,	// (0x0008ec0b) main_postcard_pane_g2_ParamLimits

0x377c,	// (0x0008ec0b) main_postcard_pane_g2

0x3792,	// (0x0008ec21) main_postcard_pane_g3_ParamLimits

0x3792,	// (0x0008ec21) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0009a927) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0009a927) main_postcard_pane_g

0x37a9,	// (0x0008ec38) main_postcard_pane_g4

0xc9a4,	// (0x00097e33) smil_status_volume_pane_g2

0x37ec,	// (0x0008ec7b) postcard_pane_ParamLimits

0x37ec,	// (0x0008ec7b) postcard_pane

0xb6a2,	// (0x00096b31) postcard_pane_g1_ParamLimits

0xb6a2,	// (0x00096b31) postcard_pane_g1

0x382e,	// (0x0008ecbd) postcard_pane_g2_ParamLimits

0x382e,	// (0x0008ecbd) postcard_pane_g2

0x383a,	// (0x0008ecc9) postcard_pane_g3_ParamLimits

0x383a,	// (0x0008ecc9) postcard_pane_g3

0xb6b0,	// (0x00096b3f) postcard_pane_g4_ParamLimits

0xb6b0,	// (0x00096b3f) postcard_pane_g4

0x3846,	// (0x0008ecd5) postcard_pane_g5_ParamLimits

0x3846,	// (0x0008ecd5) postcard_pane_g5

0x385b,	// (0x0008ecea) postcard_pane_g6_ParamLimits

0x385b,	// (0x0008ecea) postcard_pane_g6

0xb6a2,	// (0x00096b31) postcard_pane_g7_ParamLimits

0xb6a2,	// (0x00096b31) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0009a934) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0009a934) postcard_pane_g

0x386f,	// (0x0008ecfe) main_mp2_pane_g1_ParamLimits

0x386f,	// (0x0008ecfe) main_mp2_pane_g1

0x387b,	// (0x0008ed0a) main_mp2_pane_g2_ParamLimits

0x387b,	// (0x0008ed0a) main_mp2_pane_g2

0x3887,	// (0x0008ed16) main_mp2_pane_g3_ParamLimits

0x3887,	// (0x0008ed16) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0009a943) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0009a943) main_mp2_pane_g

0x3893,	// (0x0008ed22) main_mp2_pane_t1_ParamLimits

0x3893,	// (0x0008ed22) main_mp2_pane_t1

0x38a8,	// (0x0008ed37) main_mp2_pane_t2_ParamLimits

0x38a8,	// (0x0008ed37) main_mp2_pane_t2

0x38ba,	// (0x0008ed49) main_mp2_pane_t3_ParamLimits

0x38ba,	// (0x0008ed49) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0009a94a) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0009a94a) main_mp2_pane_t

0xb6be,	// (0x00096b4d) pec_content_pane_ParamLimits

0xb6be,	// (0x00096b4d) pec_content_pane

0xac22,	// (0x000960b1) scroll_pane_cp015

0xb6d0,	// (0x00096b5f) pec_attribute_pane_ParamLimits

0xb6d0,	// (0x00096b5f) pec_attribute_pane

0x38cc,	// (0x0008ed5b) pec_content_pane_g1_ParamLimits

0x38cc,	// (0x0008ed5b) pec_content_pane_g1

0xb6e0,	// (0x00096b6f) pec_content_pane_t1_ParamLimits

0xb6e0,	// (0x00096b6f) pec_content_pane_t1

0xb6f2,	// (0x00096b81) pec_content_pane_t2_ParamLimits

0xb6f2,	// (0x00096b81) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0009a951) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0009a951) pec_content_pane_t

0x38d8,	// (0x0008ed67) list_single_graphic_pane_cp01_ParamLimits

0x38d8,	// (0x0008ed67) list_single_graphic_pane_cp01

0xa7e6,	// (0x00095c75) bg_popup_sub_pane_cp04

0xb704,	// (0x00096b93) popup_mup_playback_window_g1

0xb710,	// (0x00096b9f) popup_mup_playback_window_t1

0xb725,	// (0x00096bb4) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0009a956) popup_mup_playback_window_t

0xb75c,	// (0x00096beb) main_image_pane_g1_ParamLimits

0xb75c,	// (0x00096beb) main_image_pane_g1

0xb79f,	// (0x00096c2e) scroll_pane_cp018_ParamLimits

0xb79f,	// (0x00096c2e) scroll_pane_cp018

0xb7b7,	// (0x00096c46) scroll_pane_cp016_ParamLimits

0xb7b7,	// (0x00096c46) scroll_pane_cp016

0x39a5,	// (0x0008ee34) smil2_image_pane_ParamLimits

0x39a5,	// (0x0008ee34) smil2_image_pane

0x39d5,	// (0x0008ee64) smil2_root_pane_ParamLimits

0x39d5,	// (0x0008ee64) smil2_root_pane

0x3a0d,	// (0x0008ee9c) smil2_text_pane_ParamLimits

0x3a0d,	// (0x0008ee9c) smil2_text_pane

0xa58b,	// (0x00095a1a) bg_list_pane_cp06

0xb7f3,	// (0x00096c82) grid_radio_pane

0xa58b,	// (0x00095a1a) bg_popup_window_pane_cp06

0xb7fb,	// (0x00096c8a) main_fmradio_pane_t1

0xb16b,	// (0x000965fa) heading_pane_cp04

0xb809,	// (0x00096c98) main_fmradio_pane_t2

0xc7da,	// (0x00097c69) popup_cale_lunar_info_window_g1

0xb817,	// (0x00096ca6) main_fmradio_pane_t3

0xc7e2,	// (0x00097c71) popup_cale_lunar_info_window_g2

0xb825,	// (0x00096cb4) main_fmradio_pane_t4

0x0001,

0xb833,	// (0x00096cc2) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0009aa31) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0009a96b) main_fmradio_pane_t

0xb841,	// (0x00096cd0) wait_bar_pane_cp03

0xb849,	// (0x00096cd8) cell_fmradio_pane_ParamLimits

0xb849,	// (0x00096cd8) cell_fmradio_pane

0xb6a2,	// (0x00096b31) cell_fmradio_pane_g1_ParamLimits

0xb6a2,	// (0x00096b31) cell_fmradio_pane_g1

0xa58b,	// (0x00095a1a) grid_highlight_pane_cp011

0xb85c,	// (0x00096ceb) poc_content_pane_ParamLimits

0xb85c,	// (0x00096ceb) poc_content_pane

0xb86e,	// (0x00096cfd) scroll_pane_cp019

0x3a8d,	// (0x0008ef1c) popup_call_poc_act_window_ParamLimits

0x3a8d,	// (0x0008ef1c) popup_call_poc_act_window

0x3ab1,	// (0x0008ef40) popup_call_poc_inact_window_ParamLimits

0x3ab1,	// (0x0008ef40) popup_call_poc_inact_window

0xf579,	// (0x0009aa08) bg_popup_call_poc_act_pane_g

0xc752,	// (0x00097be1) bg_popup_call_poc_inact_pane_g1

0xc75a,	// (0x00097be9) bg_popup_call_poc_inact_pane_g2

0xb876,	// (0x00096d05) popup_call_poc_act_window_g2

0xc762,	// (0x00097bf1) bg_popup_call_poc_inact_pane_g3

0xc76a,	// (0x00097bf9) bg_popup_call_poc_inact_pane_g4

0xc772,	// (0x00097c01) bg_popup_call_poc_inact_pane_g5

0xb87e,	// (0x00096d0d) popup_call_poc_act_window_t1_ParamLimits

0xb87e,	// (0x00096d0d) popup_call_poc_act_window_t1

0xb8a6,	// (0x00096d35) popup_call_poc_act_window_t2_ParamLimits

0xb8a6,	// (0x00096d35) popup_call_poc_act_window_t2

0xb8ce,	// (0x00096d5d) popup_call_poc_act_window_t3_ParamLimits

0xb8ce,	// (0x00096d5d) popup_call_poc_act_window_t3

0xb8f6,	// (0x00096d85) popup_call_poc_act_window_t4_ParamLimits

0xb8f6,	// (0x00096d85) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0009a976) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0009a976) popup_call_poc_act_window_t

0xc77a,	// (0x00097c09) bg_popup_call_poc_inact_pane_g6

0xc782,	// (0x00097c11) bg_popup_call_poc_inact_pane_g7

0xc78a,	// (0x00097c19) bg_popup_call_poc_inact_pane_g8

0xb908,	// (0x00096d97) popup_call_poc_inact_window_g2

0xc792,	// (0x00097c21) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0009a9f5) bg_popup_call_poc_inact_pane_g

0xb910,	// (0x00096d9f) popup_call_poc_inact_window_t1_ParamLimits

0xb910,	// (0x00096d9f) popup_call_poc_inact_window_t1

0xb925,	// (0x00096db4) popup_call_poc_inact_window_t2_ParamLimits

0xb925,	// (0x00096db4) popup_call_poc_inact_window_t2

0xb93a,	// (0x00096dc9) popup_call_poc_inact_window_t3_ParamLimits

0xb93a,	// (0x00096dc9) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0009a97f) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0009a97f) popup_call_poc_inact_window_t

0xc917,	// (0x00097da6) context_pane_ParamLimits

0x42e0,	// (0x0008f76f) signal_pane_ParamLimits

0xaa79,	// (0x00095f08) main_call2_pane

0x9dee,	// (0x0009527d) popup_phob_thumbnail2_window_ParamLimits

0x9dee,	// (0x0009527d) popup_phob_thumbnail2_window

0x9d7f,	// (0x0009520e) aid_hotspot_pointer_arrow_pane

0x9d87,	// (0x00095216) aid_hotspot_pointer_hand_pane

0x3dfa,	// (0x0008f289) phob_pre_status_pane_g5

0x1c28,	// (0x0008d0b7) cams_zoom_pane_ParamLimits

0x1c37,	// (0x0008d0c6) image_vga_pane_ParamLimits

0x1c51,	// (0x0008d0e0) main_camera_pane_g1_ParamLimits

0x1c63,	// (0x0008d0f2) main_camera_pane_g2_ParamLimits

0x1c73,	// (0x0008d102) main_camera_pane_g3_ParamLimits

0x1c83,	// (0x0008d112) main_camera_pane_g4_ParamLimits

0x1c93,	// (0x0008d122) main_camera_pane_g5_ParamLimits

0x1ca3,	// (0x0008d132) main_camera_pane_g6_ParamLimits

0x1cb5,	// (0x0008d144) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0009a67e) main_camera_pane_g_ParamLimits

0x1cc5,	// (0x0008d154) main_camera_pane_t1_ParamLimits

0x1cdb,	// (0x0008d16a) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0009a68f) main_camera_pane_t_ParamLimits

0xa7e6,	// (0x00095c75) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7e6,	// (0x00095c75) bg_popup_preview_window_pane_cp01

0xb94f,	// (0x00096dde) popup_phob_thumbnail2_window_g1_ParamLimits

0xb94f,	// (0x00096dde) popup_phob_thumbnail2_window_g1

0xa58b,	// (0x00095a1a) call2_cli_visual_pane

0x3ae5,	// (0x0008ef74) popup_call2_audio_conf_window_ParamLimits

0x3ae5,	// (0x0008ef74) popup_call2_audio_conf_window

0x3b05,	// (0x0008ef94) popup_call2_audio_first_window_ParamLimits

0x3b05,	// (0x0008ef94) popup_call2_audio_first_window

0x3b9b,	// (0x0008f02a) popup_call2_audio_in_window_ParamLimits

0x3b9b,	// (0x0008f02a) popup_call2_audio_in_window

0x3be3,	// (0x0008f072) popup_call2_audio_out_window_ParamLimits

0x3be3,	// (0x0008f072) popup_call2_audio_out_window

0x3c4d,	// (0x0008f0dc) popup_call2_audio_second_window_ParamLimits

0x3c4d,	// (0x0008f0dc) popup_call2_audio_second_window

0x3cb3,	// (0x0008f142) popup_call2_audio_wait_window_ParamLimits

0x3cb3,	// (0x0008f142) popup_call2_audio_wait_window

0xa58b,	// (0x00095a1a) bg_popup_call2_act_pane_cp03

0xa7c8,	// (0x00095c57) list_conf_pane_cp

0xb95b,	// (0x00096dea) popup_call2_audio_conf_window_t1

0xb1c8,	// (0x00096657) list_single_graphic_popup_conf2_pane_ParamLimits

0xb1c8,	// (0x00096657) list_single_graphic_popup_conf2_pane

0xb1db,	// (0x0009666a) list_highlight_pane_cp04

0xb969,	// (0x00096df8) list_single_graphic_popup_conf2_pane_g1

0xb1ec,	// (0x0009667b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0009a986) list_single_graphic_popup_conf2_pane_g

0xb973,	// (0x00096e02) list_single_graphic_popup_conf2_pane_t1

0xb981,	// (0x00096e10) bg_popup_call2_act_pane_cp01_ParamLimits

0xb981,	// (0x00096e10) bg_popup_call2_act_pane_cp01

0xba0b,	// (0x00096e9a) call_type_pane_cp05_ParamLimits

0xba0b,	// (0x00096e9a) call_type_pane_cp05

0xba5f,	// (0x00096eee) popup_call2_audio_second_window_g1_ParamLimits

0xba5f,	// (0x00096eee) popup_call2_audio_second_window_g1

0xbab3,	// (0x00096f42) popup_call2_audio_second_window_g2_ParamLimits

0xbab3,	// (0x00096f42) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0009a98b) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0009a98b) popup_call2_audio_second_window_g

0xbb18,	// (0x00096fa7) popup_call2_audio_second_window_t1_ParamLimits

0xbb18,	// (0x00096fa7) popup_call2_audio_second_window_t1

0xbbd3,	// (0x00097062) popup_call2_audio_second_window_t2_ParamLimits

0xbbd3,	// (0x00097062) popup_call2_audio_second_window_t2

0xbc26,	// (0x000970b5) popup_call2_audio_second_window_t3_ParamLimits

0xbc26,	// (0x000970b5) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0009a992) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0009a992) popup_call2_audio_second_window_t

0xa58b,	// (0x00095a1a) bg_popup_call2_in_pane_cp02

0xa595,	// (0x00095a24) call_type_pane_cp04

0xa59d,	// (0x00095a2c) popup_call2_audio_wait_window_g1

0xa5a5,	// (0x00095a34) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0009a56d) popup_call2_audio_wait_window_g

0xa5ad,	// (0x00095a3c) popup_call2_audio_wait_window_t3

0xbd19,	// (0x000971a8) bg_popup_call2_act_pane_ParamLimits

0xbd19,	// (0x000971a8) bg_popup_call2_act_pane

0xbdd9,	// (0x00097268) call_type_pane_cp03_ParamLimits

0xbdd9,	// (0x00097268) call_type_pane_cp03

0xbe3d,	// (0x000972cc) popup_call2_audio_first_window_g1_ParamLimits

0xbe3d,	// (0x000972cc) popup_call2_audio_first_window_g1

0xbead,	// (0x0009733c) popup_call2_audio_first_window_g2_ParamLimits

0xbead,	// (0x0009733c) popup_call2_audio_first_window_g2

0xb5b6,	// (0x00096a45) popup_call2_audio_first_window_g3_ParamLimits

0xb5b6,	// (0x00096a45) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0009a99b) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0009a99b) popup_call2_audio_first_window_g

0xbf8b,	// (0x0009741a) popup_call2_audio_first_window_t1_ParamLimits

0xbf8b,	// (0x0009741a) popup_call2_audio_first_window_t1

0xc09a,	// (0x00097529) popup_call2_audio_first_window_t4_ParamLimits

0xc09a,	// (0x00097529) popup_call2_audio_first_window_t4

0xc17d,	// (0x0009760c) popup_call2_audio_first_window_t5_ParamLimits

0xc17d,	// (0x0009760c) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0009a9a6) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0009a9a6) popup_call2_audio_first_window_t

0xa7de,	// (0x00095c6d) bg_popup_call2_act_pane_g1

0xc7ea,	// (0x00097c79) popup_cale_lunar_info_window_t1

0xc7f8,	// (0x00097c87) popup_cale_lunar_info_window_t2

0xc806,	// (0x00097c95) popup_cale_lunar_info_window_t3

0xa58b,	// (0x00095a1a) bg_popup_call2_bubble_pane

0xc27e,	// (0x0009770d) bg_popup_call2_in_pane_cp01_ParamLimits

0xc27e,	// (0x0009770d) bg_popup_call2_in_pane_cp01

0x993f,	// (0x00094dce) call_type_pane_cp02

0xc2c6,	// (0x00097755) popup_call2_audio_out_window_g1_ParamLimits

0xc2c6,	// (0x00097755) popup_call2_audio_out_window_g1

0xc2f2,	// (0x00097781) popup_call2_audio_out_window_g2_ParamLimits

0xc2f2,	// (0x00097781) popup_call2_audio_out_window_g2

0xc31a,	// (0x000977a9) popup_call2_audio_out_window_g3_ParamLimits

0xc31a,	// (0x000977a9) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0009a9af) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0009a9af) popup_call2_audio_out_window_g

0xc355,	// (0x000977e4) popup_call2_audio_out_window_t1_ParamLimits

0xc355,	// (0x000977e4) popup_call2_audio_out_window_t1

0xc3b4,	// (0x00097843) popup_call2_audio_out_window_t2_ParamLimits

0xc3b4,	// (0x00097843) popup_call2_audio_out_window_t2

0xc408,	// (0x00097897) popup_call2_audio_out_window_t3_ParamLimits

0xc408,	// (0x00097897) popup_call2_audio_out_window_t3

0xc41e,	// (0x000978ad) popup_call2_audio_out_window_t4_ParamLimits

0xc41e,	// (0x000978ad) popup_call2_audio_out_window_t4

0xc434,	// (0x000978c3) popup_call2_audio_out_window_t5_ParamLimits

0xc434,	// (0x000978c3) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0009a9b8) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0009a9b8) popup_call2_audio_out_window_t

0xc498,	// (0x00097927) bg_popup_call2_in_pane_ParamLimits

0xc498,	// (0x00097927) bg_popup_call2_in_pane

0xc4f4,	// (0x00097983) popup_call2_audio_in_window_g1_ParamLimits

0xc4f4,	// (0x00097983) popup_call2_audio_in_window_g1

0xc52c,	// (0x000979bb) popup_call2_audio_in_window_g2_ParamLimits

0xc52c,	// (0x000979bb) popup_call2_audio_in_window_g2

0xc564,	// (0x000979f3) popup_call2_audio_in_window_g3_ParamLimits

0xc564,	// (0x000979f3) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0009a9c5) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0009a9c5) popup_call2_audio_in_window_g

0xc5bc,	// (0x00097a4b) popup_call2_audio_in_window_t1_ParamLimits

0xc5bc,	// (0x00097a4b) popup_call2_audio_in_window_t1

0xc63c,	// (0x00097acb) popup_call2_audio_in_window_t2_ParamLimits

0xc63c,	// (0x00097acb) popup_call2_audio_in_window_t2

0xc6bc,	// (0x00097b4b) popup_call2_audio_in_window_t3_ParamLimits

0xc6bc,	// (0x00097b4b) popup_call2_audio_in_window_t3

0xc6d6,	// (0x00097b65) popup_call2_audio_in_window_t4_ParamLimits

0xc6d6,	// (0x00097b65) popup_call2_audio_in_window_t4

0xc6e8,	// (0x00097b77) popup_call2_audio_in_window_t5_ParamLimits

0xc6e8,	// (0x00097b77) popup_call2_audio_in_window_t5

0xc6fd,	// (0x00097b8c) popup_call2_audio_in_window_t6_ParamLimits

0xc6fd,	// (0x00097b8c) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0009a9ce) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0009a9ce) popup_call2_audio_in_window_t

0xa7de,	// (0x00095c6d) bg_popup_call2_in_pane_g1

0xc814,	// (0x00097ca3) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0009aa36) popup_cale_lunar_info_window_t

0xa7e6,	// (0x00095c75) bg_popup_call2_rect_pane_ParamLimits

0xa7e6,	// (0x00095c75) bg_popup_call2_rect_pane

0xa58b,	// (0x00095a1a) call2_cli_visual_graphic_pane

0xa58b,	// (0x00095a1a) call2_cli_visual_text_pane

0x9e15,	// (0x000952a4) smil_status_volume_pane_g3

0x0002,

0xa900,	// (0x00095d8f) call2_cli_visual_graphic_pane_g1

0xa900,	// (0x00095d8f) call2_cli_visual_graphic_pane_g2

0xa900,	// (0x00095d8f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0009a9db) call2_cli_visual_graphic_pane_g

0xc712,	// (0x00097ba1) bg_popup_call2_rect_pane_g1

0xa995,	// (0x00095e24) bg_popup_call2_rect_pane_g2

0xc71a,	// (0x00097ba9) bg_popup_call2_rect_pane_g3

0xc722,	// (0x00097bb1) bg_popup_call2_rect_pane_g4

0xc72a,	// (0x00097bb9) bg_popup_call2_rect_pane_g5

0xc732,	// (0x00097bc1) bg_popup_call2_rect_pane_g6

0xc73a,	// (0x00097bc9) bg_popup_call2_rect_pane_g7

0xc742,	// (0x00097bd1) bg_popup_call2_rect_pane_g8

0xc74a,	// (0x00097bd9) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0009a9e2) bg_popup_call2_rect_pane_g

0xc752,	// (0x00097be1) bg_popup_call2_bubble_pane_g1

0xc75a,	// (0x00097be9) bg_popup_call2_bubble_pane_g2

0xc762,	// (0x00097bf1) bg_popup_call2_bubble_pane_g3

0xc76a,	// (0x00097bf9) bg_popup_call2_bubble_pane_g4

0xc772,	// (0x00097c01) bg_popup_call2_bubble_pane_g5

0xc77a,	// (0x00097c09) bg_popup_call2_bubble_pane_g6

0xc782,	// (0x00097c11) bg_popup_call2_bubble_pane_g7

0xc78a,	// (0x00097c19) bg_popup_call2_bubble_pane_g8

0xc792,	// (0x00097c21) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0009a9f5) bg_popup_call2_bubble_pane_g

0x166d,	// (0x0008cafc) aid_cale_week_size_cell_pane

0x1cf1,	// (0x0008d180) aid_cams_cif_uncrop_pane_ParamLimits

0x1cf1,	// (0x0008d180) aid_cams_cif_uncrop_pane

0x1ea1,	// (0x0008d330) aid_cams_size_cell_ParamLimits

0x1ea1,	// (0x0008d330) aid_cams_size_cell

0x1eb5,	// (0x0008d344) grid_cams_pane_ParamLimits

0x1ecf,	// (0x0008d35e) linegrid_cams_pane_ParamLimits

0x1fce,	// (0x0008d45d) call_video_pane_t1

0x1fec,	// (0x0008d47b) call_video_pane_t2

0x0001,

0xf253,	// (0x0009a6e2) call_video_pane_t

0x241a,	// (0x0008d8a9) aid_cale_month_size_cell_pane_ParamLimits

0x241a,	// (0x0008d8a9) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0009aa7f) smil_status_volume_pane_g

0x9e22,	// (0x000952b1) volume_smil_pane_ParamLimits

0x97fa,	// (0x00094c89) aid_popup2_width_pane

0x15d5,	// (0x0008ca64) cell_qdial_pane_g4_ParamLimits

0x15d5,	// (0x0008ca64) cell_qdial_pane_g4

0x31aa,	// (0x0008e639) aid_blid_cardinal_pane_ParamLimits

0x31b6,	// (0x0008e645) aid_blid_destination_pane_ParamLimits

0x31b6,	// (0x0008e645) aid_blid_destination_pane

0xa7e6,	// (0x00095c75) bg_popup_call_poc_act_pane_ParamLimits

0xa7e6,	// (0x00095c75) bg_popup_call_poc_act_pane

0xa7e6,	// (0x00095c75) bg_popup_call_poc_inact_pane_ParamLimits

0xa7e6,	// (0x00095c75) bg_popup_call_poc_inact_pane

0xc79a,	// (0x00097c29) bg_popup_call_poc_act_pane_g1

0xc7a2,	// (0x00097c31) bg_popup_call_poc_act_pane_g2

0xc7aa,	// (0x00097c39) bg_popup_call_poc_act_pane_g3

0xc76a,	// (0x00097bf9) bg_popup_call_poc_act_pane_g4

0xc772,	// (0x00097c01) bg_popup_call_poc_act_pane_g5

0xc7b2,	// (0x00097c41) bg_popup_call_poc_act_pane_g6

0xc782,	// (0x00097c11) bg_popup_call_poc_act_pane_g7

0xc7ba,	// (0x00097c49) bg_popup_call_poc_act_pane_g8

0xa58b,	// (0x00095a1a) main_usb_pane

0x9dc9,	// (0x00095258) popup_cale_lunar_info_window

0x22c6,	// (0x0008d755) im_reading_pane_t1_ParamLimits

0xab7a,	// (0x00096009) list_im_pane_ParamLimits

0xab8b,	// (0x0009601a) scroll_pane_cp07_ParamLimits

0xa58b,	// (0x00095a1a) grid_highlight_pane_cp012

0xa7e6,	// (0x00095c75) mup_scale_pane_ParamLimits

0xb6a2,	// (0x00096b31) main_usb_pane_g1_ParamLimits

0xb6a2,	// (0x00096b31) main_usb_pane_g1

0x3d0f,	// (0x0008f19e) main_usb_pane_g2_ParamLimits

0x3d0f,	// (0x0008f19e) main_usb_pane_g2

0x0001,

0xf590,	// (0x0009aa1f) main_usb_pane_g_ParamLimits

0xf590,	// (0x0009aa1f) main_usb_pane_g

0x3d25,	// (0x0008f1b4) main_usb_pane_t1_ParamLimits

0x3d25,	// (0x0008f1b4) main_usb_pane_t1

0x3d37,	// (0x0008f1c6) main_usb_pane_t2_ParamLimits

0x3d37,	// (0x0008f1c6) main_usb_pane_t2

0x3d49,	// (0x0008f1d8) main_usb_pane_t3_ParamLimits

0x3d49,	// (0x0008f1d8) main_usb_pane_t3

0x3d5b,	// (0x0008f1ea) main_usb_pane_t4_ParamLimits

0x3d5b,	// (0x0008f1ea) main_usb_pane_t4

0x3d6d,	// (0x0008f1fc) main_usb_pane_t5_ParamLimits

0x3d6d,	// (0x0008f1fc) main_usb_pane_t5

0x3d7f,	// (0x0008f20e) main_usb_pane_t6_ParamLimits

0x3d7f,	// (0x0008f20e) main_usb_pane_t6

0x0005,

0xf595,	// (0x0009aa24) main_usb_pane_t_ParamLimits

0x3159,	// (0x0008e5e8) aid_text_placing

0x3162,	// (0x0008e5f1) main_location2_pane_t1_ParamLimits

0x3174,	// (0x0008e603) main_location2_pane_t2_ParamLimits

0x3186,	// (0x0008e615) main_location2_pane_t3_ParamLimits

0x3198,	// (0x0008e627) main_location2_pane_t4_ParamLimits

0x3198,	// (0x0008e627) main_location2_pane_t4

0xf3b4,	// (0x0009a843) main_location2_pane_t_ParamLimits

0xa822,	// (0x00095cb1) find_pinb_pane_g2_ParamLimits

0xa822,	// (0x00095cb1) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0009a593) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0009a593) find_pinb_pane_g

0xa82e,	// (0x00095cbd) find_pinb_pane_t1_ParamLimits

0xa840,	// (0x00095ccf) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0009a598) find_pinb_pane_t_ParamLimits

0xa58b,	// (0x00095a1a) main_call3_pane

0x2905,	// (0x0008dd94) cale_month_day_heading_pane_t1_ParamLimits

0x298b,	// (0x0008de1a) cale_month_day_heading_pane_t2_ParamLimits

0x2a04,	// (0x0008de93) cale_month_day_heading_pane_t3_ParamLimits

0x2a7d,	// (0x0008df0c) cale_month_day_heading_pane_t4_ParamLimits

0x2afe,	// (0x0008df8d) cale_month_day_heading_pane_t5_ParamLimits

0x2b87,	// (0x0008e016) cale_month_day_heading_pane_t6_ParamLimits

0x2c10,	// (0x0008e09f) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0009a71a) cale_month_day_heading_pane_t_ParamLimits

0xadd5,	// (0x00096264) smil_status_volume_pane

0x380a,	// (0x0008ec99) postcard_address_pane_ParamLimits

0x380a,	// (0x0008ec99) postcard_address_pane

0x381c,	// (0x0008ecab) postcard_message_pane_ParamLimits

0x381c,	// (0x0008ecab) postcard_message_pane

0x3ced,	// (0x0008f17c) call2_cli_visual_pane_t1_ParamLimits

0x3ced,	// (0x0008f17c) call2_cli_visual_pane_t1

0x450d,	// (0x0008f99c) postcard_message_pane_t1_ParamLimits

0x450d,	// (0x0008f99c) postcard_message_pane_t1

0x44f6,	// (0x0008f985) postcard_address_pane_t1_ParamLimits

0x44f6,	// (0x0008f985) postcard_address_pane_t1

0x44e2,	// (0x0008f971) popup_call3_audio_in_window_ParamLimits

0x44e2,	// (0x0008f971) popup_call3_audio_in_window

0x436d,	// (0x0008f7fc) bg_popup_call3_in_pane_ParamLimits

0x436d,	// (0x0008f7fc) bg_popup_call3_in_pane

0x43e3,	// (0x0008f872) popup_call3_audio_in_window_g1_ParamLimits

0x43e3,	// (0x0008f872) popup_call3_audio_in_window_g1

0x4403,	// (0x0008f892) popup_call3_audio_in_window_g2_ParamLimits

0x4403,	// (0x0008f892) popup_call3_audio_in_window_g2

0x4423,	// (0x0008f8b2) popup_call3_audio_in_window_g3_ParamLimits

0x4423,	// (0x0008f8b2) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0009aa86) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0009aa86) popup_call3_audio_in_window_g

0x4454,	// (0x0008f8e3) popup_call3_audio_in_window_t1_ParamLimits

0x4454,	// (0x0008f8e3) popup_call3_audio_in_window_t1

0x4492,	// (0x0008f921) popup_call3_audio_in_window_t2_ParamLimits

0x4492,	// (0x0008f921) popup_call3_audio_in_window_t2

0x44d0,	// (0x0008f95f) popup_call3_audio_in_window_t3_ParamLimits

0x44d0,	// (0x0008f95f) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0009aa8f) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0009aa8f) popup_call3_audio_in_window_t

0xaa79,	// (0x00095f08) bg_popup_call3_rect_pane

0xc712,	// (0x00097ba1) bg_popup_call3_rect_pane_g1

0xa995,	// (0x00095e24) bg_popup_call3_rect_pane_g2

0xc71a,	// (0x00097ba9) bg_popup_call3_rect_pane_g3

0xc722,	// (0x00097bb1) bg_popup_call3_rect_pane_g4

0xc72a,	// (0x00097bb9) bg_popup_call3_rect_pane_g5

0xc732,	// (0x00097bc1) bg_popup_call3_rect_pane_g6

0xc73a,	// (0x00097bc9) bg_popup_call3_rect_pane_g7

0x349a,	// (0x0008e929) mup_visualizer_osc_pane

0xb5c4,	// (0x00096a53) mup_visualizer_spec_pane

0x439d,	// (0x0008f82c) call3_video_qcif_pane_ParamLimits

0x439d,	// (0x0008f82c) call3_video_qcif_pane

0x43b0,	// (0x0008f83f) call3_video_qcif_uncrop_pane_ParamLimits

0x43b0,	// (0x0008f83f) call3_video_qcif_uncrop_pane

0x43be,	// (0x0008f84d) call3_video_subqcif_pane_ParamLimits

0x43be,	// (0x0008f84d) call3_video_subqcif_pane

0x43d2,	// (0x0008f861) call3_video_subqcif_uncrop_pane_ParamLimits

0x43d2,	// (0x0008f861) call3_video_subqcif_uncrop_pane

0x4443,	// (0x0008f8d2) popup_call3_audio_in_window_g4_ParamLimits

0x4443,	// (0x0008f8d2) popup_call3_audio_in_window_g4

0x435c,	// (0x0008f7eb) mup_spec_half_pane

0x4365,	// (0x0008f7f4) mup_spec_half_pane_cp

0xc977,	// (0x00097e06) mup_osc_middle_pane

0xc980,	// (0x00097e0f) mup_visualizer_osc_pane_g1

0x433c,	// (0x0008f7cb) mup_spec_bar_pane_ParamLimits

0x433c,	// (0x0008f7cb) mup_spec_bar_pane

0xc964,	// (0x00097df3) mup_spec_bar_pane_g1

0xc96e,	// (0x00097dfd) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0009aa7a) mup_spec_bar_pane_g

0x166d,	// (0x0008cafc) aid_cale_week_size_cell_pane_ParamLimits

0x1687,	// (0x0008cb16) bg_cale_heading_pane_ParamLimits

0xa9d2,	// (0x00095e61) bg_cale_pane_cp01_ParamLimits

0x169f,	// (0x0008cb2e) cale_week_corner_pane_ParamLimits

0x16be,	// (0x0008cb4d) cale_week_day_heading_pane_ParamLimits

0x16db,	// (0x0008cb6a) cale_week_scroll_pane_g1_ParamLimits

0x16ee,	// (0x0008cb7d) cale_week_scroll_pane_g2_ParamLimits

0x1706,	// (0x0008cb95) cale_week_scroll_pane_g3_ParamLimits

0x171e,	// (0x0008cbad) cale_week_scroll_pane_g4_ParamLimits

0x1736,	// (0x0008cbc5) cale_week_scroll_pane_g5_ParamLimits

0x1756,	// (0x0008cbe5) cale_week_scroll_pane_g6_ParamLimits

0x1776,	// (0x0008cc05) cale_week_scroll_pane_g7_ParamLimits

0x1796,	// (0x0008cc25) cale_week_scroll_pane_g8_ParamLimits

0x17ba,	// (0x0008cc49) cale_week_scroll_pane_g9_ParamLimits

0x17d2,	// (0x0008cc61) cale_week_scroll_pane_g10_ParamLimits

0x17ea,	// (0x0008cc79) cale_week_scroll_pane_g11_ParamLimits

0x1802,	// (0x0008cc91) cale_week_scroll_pane_g12_ParamLimits

0x181a,	// (0x0008cca9) cale_week_scroll_pane_g13_ParamLimits

0x181a,	// (0x0008cca9) cale_week_scroll_pane_g14_ParamLimits

0x181a,	// (0x0008cca9) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0009a624) cale_week_scroll_pane_g_ParamLimits

0x1856,	// (0x0008cce5) cale_week_time_pane_ParamLimits

0x187a,	// (0x0008cd09) grid_cale_week_pane_ParamLimits

0xa9ef,	// (0x00095e7e) listscroll_cale_week_pane_t1

0xaa01,	// (0x00095e90) scroll_pane_cp08_ParamLimits

0x247a,	// (0x0008d909) cale_month_corner_pane_ParamLimits

0xadab,	// (0x0009623a) cale_month_pane_t1

0x2898,	// (0x0008dd27) cale_month_week_pane_ParamLimits

0x2fb5,	// (0x0008e444) popup_call_status_window_g1_ParamLimits

0x2fc9,	// (0x0008e458) popup_call_status_window_g2_ParamLimits

0x2fdd,	// (0x0008e46c) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0009a7ca) popup_call_status_window_g_ParamLimits

0xb15b,	// (0x000965ea) aid_call2_pane

0x029c,	// (0x0008b72b) msg_header_pane_g1

0x380a,	// (0x0008ec99) postcard_address2_pane_ParamLimits

0x380a,	// (0x0008ec99) postcard_address2_pane

0x381c,	// (0x0008ecab) postcard_message2_pane_ParamLimits

0x381c,	// (0x0008ecab) postcard_message2_pane

0x42ee,	// (0x0008f77d) message2_row_pane_ParamLimits

0x42ee,	// (0x0008f77d) message2_row_pane

0x430a,	// (0x0008f799) address2_row_pane_ParamLimits

0x430a,	// (0x0008f799) address2_row_pane

0xc932,	// (0x00097dc1) postcard_message2_row_pane_g1

0xc93a,	// (0x00097dc9) postcard_message2_row_pane_t1

0xc932,	// (0x00097dc1) address2_row_pane_g1

0xc93a,	// (0x00097dc9) address2_row_pane_t1

0x1baa,	// (0x0008d039) aid_size_cell_vorec

0xa58b,	// (0x00095a1a) main_rss_pane

0x431d,	// (0x0008f7ac) rss_list_single_pane_ParamLimits

0x431d,	// (0x0008f7ac) rss_list_single_pane

0xc948,	// (0x00097dd7) rss_list_single_pane_t1

0xc956,	// (0x00097de5) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0009aa75) rss_list_single_pane_t

0xa58b,	// (0x00095a1a) main_camera2_pane

0xa58b,	// (0x00095a1a) main_video2_pane

0x4586,	// (0x0008fa15) cams_zoom_pane_cp2_ParamLimits

0x4586,	// (0x0008fa15) cams_zoom_pane_cp2

0x45a6,	// (0x0008fa35) image2_vga_pane_ParamLimits

0x45a6,	// (0x0008fa35) image2_vga_pane

0x45f7,	// (0x0008fa86) main_camera2_pane_g1_ParamLimits

0x45f7,	// (0x0008fa86) main_camera2_pane_g1

0x4617,	// (0x0008faa6) main_camera2_pane_g2_ParamLimits

0x4617,	// (0x0008faa6) main_camera2_pane_g2

0x4637,	// (0x0008fac6) main_camera2_pane_g3_ParamLimits

0x4637,	// (0x0008fac6) main_camera2_pane_g3

0x4657,	// (0x0008fae6) main_camera2_pane_g4_ParamLimits

0x4657,	// (0x0008fae6) main_camera2_pane_g4

0x4677,	// (0x0008fb06) main_camera2_pane_g5_ParamLimits

0x4677,	// (0x0008fb06) main_camera2_pane_g5

0x4697,	// (0x0008fb26) main_camera2_pane_g6_ParamLimits

0x4697,	// (0x0008fb26) main_camera2_pane_g6

0x46b7,	// (0x0008fb46) main_camera2_pane_g7_ParamLimits

0x46b7,	// (0x0008fb46) main_camera2_pane_g7

0x46d7,	// (0x0008fb66) main_camera2_pane_g8_ParamLimits

0x46d7,	// (0x0008fb66) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0009aa96) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0009aa96) main_camera2_pane_g

0x4717,	// (0x0008fba6) main_camera2_pane_t1_ParamLimits

0x4717,	// (0x0008fba6) main_camera2_pane_t1

0x474c,	// (0x0008fbdb) main_camera2_pane_t2_ParamLimits

0x474c,	// (0x0008fbdb) main_camera2_pane_t2

0x4772,	// (0x0008fc01) main_camera2_pane_t3_ParamLimits

0x4772,	// (0x0008fc01) main_camera2_pane_t3

0x47d0,	// (0x0008fc5f) main_camera2_pane_t4_ParamLimits

0x47d0,	// (0x0008fc5f) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0009aaa9) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0009aaa9) main_camera2_pane_t

0x4862,	// (0x0008fcf1) cams_zoom_pane_cp4_ParamLimits

0x4862,	// (0x0008fcf1) cams_zoom_pane_cp4

0x4878,	// (0x0008fd07) image2_cif_pane_ParamLimits

0x4878,	// (0x0008fd07) image2_cif_pane

0x48a3,	// (0x0008fd32) image2_subqcif_pane_ParamLimits

0x48a3,	// (0x0008fd32) image2_subqcif_pane

0x48bd,	// (0x0008fd4c) main_video2_pane_g1_ParamLimits

0x48bd,	// (0x0008fd4c) main_video2_pane_g1

0x48d7,	// (0x0008fd66) main_video2_pane_g2_ParamLimits

0x48d7,	// (0x0008fd66) main_video2_pane_g2

0x48ed,	// (0x0008fd7c) main_video2_pane_g3_ParamLimits

0x48ed,	// (0x0008fd7c) main_video2_pane_g3

0x4903,	// (0x0008fd92) main_video2_pane_g4_ParamLimits

0x4903,	// (0x0008fd92) main_video2_pane_g4

0x4919,	// (0x0008fda8) main_video2_pane_g5_ParamLimits

0x4919,	// (0x0008fda8) main_video2_pane_g5

0x492f,	// (0x0008fdbe) main_video2_pane_g6_ParamLimits

0x492f,	// (0x0008fdbe) main_video2_pane_g6

0x0005,

0xf629,	// (0x0009aab8) main_video2_pane_g_ParamLimits

0xf629,	// (0x0009aab8) main_video2_pane_g

0x4949,	// (0x0008fdd8) main_video2_pane_t1_ParamLimits

0x4949,	// (0x0008fdd8) main_video2_pane_t1

0x496d,	// (0x0008fdfc) main_video2_pane_t2_ParamLimits

0x496d,	// (0x0008fdfc) main_video2_pane_t2

0x49bb,	// (0x0008fe4a) main_video2_pane_t3_ParamLimits

0x49bb,	// (0x0008fe4a) main_video2_pane_t3

0x0002,

0xf636,	// (0x0009aac5) main_video2_pane_t_ParamLimits

0xf636,	// (0x0009aac5) main_video2_pane_t

0x3e3a,	// (0x0008f2c9) call_muted_g2

0x0001,

0xf5d8,	// (0x0009aa67) call_muted_g

0xa58b,	// (0x00095a1a) main_mup2_pane

0x49ff,	// (0x0008fe8e) main_mup2_pane_g1_ParamLimits

0x49ff,	// (0x0008fe8e) main_mup2_pane_g1

0x4a0b,	// (0x0008fe9a) main_mup2_pane_g2_ParamLimits

0x4a0b,	// (0x0008fe9a) main_mup2_pane_g2

0x9e90,	// (0x0009531f) main_mup_pane_g13_cp1

0x9e98,	// (0x00095327) mup_volume_pane_cp1

0x4a27,	// (0x0008feb6) main_mup2_pane_g4_ParamLimits

0x4a27,	// (0x0008feb6) main_mup2_pane_g4

0x4a39,	// (0x0008fec8) main_mup2_pane_g5_ParamLimits

0x4a39,	// (0x0008fec8) main_mup2_pane_g5

0x4a4b,	// (0x0008feda) main_mup2_pane_g6_ParamLimits

0x4a4b,	// (0x0008feda) main_mup2_pane_g6

0x4a5d,	// (0x0008feec) main_mup2_pane_g7_ParamLimits

0x4a5d,	// (0x0008feec) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0009aacc) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0009aacc) main_mup2_pane_g

0x4a75,	// (0x0008ff04) main_mup2_pane_t1_ParamLimits

0x4a75,	// (0x0008ff04) main_mup2_pane_t1

0x4a8b,	// (0x0008ff1a) main_mup2_pane_t2_ParamLimits

0x4a8b,	// (0x0008ff1a) main_mup2_pane_t2

0x4aa1,	// (0x0008ff30) main_mup2_pane_t3_ParamLimits

0x4aa1,	// (0x0008ff30) main_mup2_pane_t3

0x4ab7,	// (0x0008ff46) main_mup2_pane_t4_ParamLimits

0x4ab7,	// (0x0008ff46) main_mup2_pane_t4

0x4acf,	// (0x0008ff5e) main_mup2_pane_t5_ParamLimits

0x4acf,	// (0x0008ff5e) main_mup2_pane_t5

0x4ae7,	// (0x0008ff76) main_mup2_pane_t6_ParamLimits

0x4ae7,	// (0x0008ff76) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0009aadb) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0009aadb) main_mup2_pane_t

0x4b17,	// (0x0008ffa6) mup2_visualizer_pane_ParamLimits

0x4b17,	// (0x0008ffa6) mup2_visualizer_pane

0x4b45,	// (0x0008ffd4) mup_progress_pane_cp_ParamLimits

0x4b45,	// (0x0008ffd4) mup_progress_pane_cp

0x9e7b,	// (0x0009530a) mup_volume_pane_cp_ParamLimits

0x9e7b,	// (0x0009530a) mup_volume_pane_cp

0x4b59,	// (0x0008ffe8) mup2_visualizer_pane_g1_ParamLimits

0x4b59,	// (0x0008ffe8) mup2_visualizer_pane_g1

0xc9b7,	// (0x00097e46) mup2_visualizer_pane_g2_ParamLimits

0xc9b7,	// (0x00097e46) mup2_visualizer_pane_g2

0x4b70,	// (0x0008ffff) mup2_visualizer_pane_g3_ParamLimits

0x4b70,	// (0x0008ffff) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0009aae8) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0009aae8) mup2_visualizer_pane_g

0xb7eb,	// (0x00096c7a) aid_size_cell_fmradio

0x3fec,	// (0x0008f47b) aid_height_parent_landcape

0xac09,	// (0x00096098) wml_content_pane_cp

0xac11,	// (0x000960a0) wml_tabs_pane

0xac1a,	// (0x000960a9) popup_wml_miniature_window

0xac22,	// (0x000960b1) scroll_pane_cp021

0xac36,	// (0x000960c5) wml_content_pane_comp8

0xa58b,	// (0x00095a1a) bg_popup_sub_pane_cp05

0xc9d5,	// (0x00097e64) popup_wml_miniature_window_g1

0xc9dd,	// (0x00097e6c) wml_miniature_view_pane

0x4b7c,	// (0x0009000b) aid_size_wml_view

0x4b84,	// (0x00090013) wml_miniature_view_pane_g1

0x4b8d,	// (0x0009001c) wml_miniature_view_pane_g2

0x4b96,	// (0x00090025) wml_miniature_view_pane_g3

0x4b9e,	// (0x0009002d) wml_miniature_view_pane_g4

0x4ba6,	// (0x00090035) wml_miniature_view_pane_g5

0x4bae,	// (0x0009003d) wml_miniature_view_pane_g6

0x4bb6,	// (0x00090045) wml_miniature_view_pane_g7

0x4bbe,	// (0x0009004d) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0009aaef) wml_miniature_view_pane_g

0xc9e5,	// (0x00097e74) background_graphic_ParamLimits

0xc9e5,	// (0x00097e74) background_graphic

0xc9f1,	// (0x00097e80) wml_tabs_2_pane

0xc9fa,	// (0x00097e89) wml_tabs_3_pane_ParamLimits

0xc9fa,	// (0x00097e89) wml_tabs_3_pane

0xca0c,	// (0x00097e9b) wml_tabs_4_pane_ParamLimits

0xca0c,	// (0x00097e9b) wml_tabs_4_pane

0xca22,	// (0x00097eb1) wml_tabs_5_pane_ParamLimits

0xca22,	// (0x00097eb1) wml_tabs_5_pane

0xca3c,	// (0x00097ecb) wml_tabs_pane_g2_ParamLimits

0xca3c,	// (0x00097ecb) wml_tabs_pane_g2

0xca50,	// (0x00097edf) wml_tabs_pane_g3_ParamLimits

0xca50,	// (0x00097edf) wml_tabs_pane_g3

0x4bc6,	// (0x00090055) wml_tabs_2_active_pane_ParamLimits

0x4bc6,	// (0x00090055) wml_tabs_2_active_pane

0x4bda,	// (0x00090069) wml_tabs_2_passive_pane_ParamLimits

0x4bda,	// (0x00090069) wml_tabs_2_passive_pane

0x4bee,	// (0x0009007d) wml_tabs_3_active_pane_cp_ParamLimits

0x4bee,	// (0x0009007d) wml_tabs_3_active_pane_cp

0x4c03,	// (0x00090092) wml_tabs_3_passive_pane_ParamLimits

0x4c03,	// (0x00090092) wml_tabs_3_passive_pane

0x4c16,	// (0x000900a5) wml_tabs_3_passive_pane_cp_ParamLimits

0x4c16,	// (0x000900a5) wml_tabs_3_passive_pane_cp

0x4c2d,	// (0x000900bc) tabs_4_active_pane

0x4c35,	// (0x000900c4) tabs_4_passive_pane

0x4c3f,	// (0x000900ce) tabs_4_passive_pane_cp

0x4c47,	// (0x000900d6) tabs_4_passive_pane_cp2

0x3d07,	// (0x0008f196) aid_height_text

0x3470,	// (0x0008e8ff) mup_volume_cont_pane_ParamLimits

0x3470,	// (0x0008e8ff) mup_volume_cont_pane

0x125c,	// (0x0008c6eb) aid_size_cell_pinb

0x1266,	// (0x0008c6f5) aid_size_list_pinb

0x4b31,	// (0x0008ffc0) mup2_volume_cont_pane_ParamLimits

0x4b31,	// (0x0008ffc0) mup2_volume_cont_pane

0x9e67,	// (0x000952f6) mup2_volume_cont_pane_g1_ParamLimits

0x9e67,	// (0x000952f6) mup2_volume_cont_pane_g1

0x0f0f,	// (0x0008c39e) aid_size_cell_touch_ParamLimits

0x0f0f,	// (0x0008c39e) aid_size_cell_touch

0x114c,	// (0x0008c5db) touch_pane_ParamLimits

0x114c,	// (0x0008c5db) touch_pane

0x97e8,	// (0x00094c77) main_rss2_pane

0xca6d,	// (0x00097efc) listscroll_rss2_pane

0xca76,	// (0x00097f05) rss2_navigation_pane

0xca7e,	// (0x00097f0d) list_rss2_pane

0xb2be,	// (0x0009674d) scroll_pane_cp22

0xca86,	// (0x00097f15) rss2_navigation_pane_g1

0xca8f,	// (0x00097f1e) rss2_navigation_pane_g2

0xca97,	// (0x00097f26) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0009ab00) rss2_navigation_pane_g

0xca9f,	// (0x00097f2e) rss2_navigation_pane_t1

0x4c51,	// (0x000900e0) rss2_list_single_pane_ParamLimits

0x4c51,	// (0x000900e0) rss2_list_single_pane

0xcaad,	// (0x00097f3c) rss2_list_single_pane_t2

0xcabb,	// (0x00097f4a) rss2_list_single_pane_t3_ParamLimits

0xcabb,	// (0x00097f4a) rss2_list_single_pane_t3

0xcad8,	// (0x00097f67) rss2_list_single_pane_t4

0x2e9a,	// (0x0008e329) smil_status_pane_g1

0xa54e,	// (0x000959dd) main_image2_pane_ParamLimits

0xa54e,	// (0x000959dd) main_image2_pane

0x46f7,	// (0x0008fb86) main_camera2_pane_g9_ParamLimits

0x46f7,	// (0x0008fb86) main_camera2_pane_g9

0x4825,	// (0x0008fcb4) main_camera2_pane_t5_ParamLimits

0x4825,	// (0x0008fcb4) main_camera2_pane_t5

0x9e37,	// (0x000952c6) main_camera2_pane_t6_ParamLimits

0x9e37,	// (0x000952c6) main_camera2_pane_t6

0x4c66,	// (0x000900f5) main_image2_pane_g1_ParamLimits

0x4c66,	// (0x000900f5) main_image2_pane_g1

0x3a43,	// (0x0008eed2) smil2_video_pane_ParamLimits

0x3a43,	// (0x0008eed2) smil2_video_pane

0x9806,	// (0x00094c95) aid_zoom_text_primary_cp

0x9846,	// (0x00094cd5) popup_preview_fixed_window

0xab72,	// (0x00096001) im_reading_pane_g1

0x456e,	// (0x0008f9fd) cams2_bc_adjust_pane_cp_ParamLimits

0x456e,	// (0x0008f9fd) cams2_bc_adjust_pane_cp

0x4854,	// (0x0008fce3) cams2_bc_adjust_pane_ParamLimits

0x4854,	// (0x0008fce3) cams2_bc_adjust_pane

0x9ea0,	// (0x0009532f) cams2_bc_adjust_pane_g1

0x9ea8,	// (0x00095337) cams2_slider_pane

0x9eb1,	// (0x00095340) cams2_slider_pane_g1

0x9eba,	// (0x00095349) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0009ab07) cams2_slider_pane_g

0x1354,	// (0x0008c7e3) calc_display_pane_ParamLimits

0x1379,	// (0x0008c808) calc_paper_pane_ParamLimits

0x139c,	// (0x0008c82b) grid_calc_pane_ParamLimits

0x9d50,	// (0x000951df) popup_clock_digital_window_t1_ParamLimits

0xb788,	// (0x00096c17) main_image_pane_t1

0x1336,	// (0x0008c7c5) aid_size_cell_calc_ParamLimits

0x1336,	// (0x0008c7c5) aid_size_cell_calc

0x4032,	// (0x0008f4c1) popup_blid_sat_info2_window_ParamLimits

0x4032,	// (0x0008f4c1) popup_blid_sat_info2_window

0xcaee,	// (0x00097f7d) aid_size_cell_blid

0xcaf6,	// (0x00097f85) bg_popup_window_pane_cp07

0xcb19,	// (0x00097fa8) grid_popup_blid_pane

0xcb23,	// (0x00097fb2) heading_pane_cp05_ParamLimits

0xcb23,	// (0x00097fb2) heading_pane_cp05

0xcbed,	// (0x0009807c) cell_popup_blid_pane_ParamLimits

0xcbed,	// (0x0009807c) cell_popup_blid_pane

0xcc11,	// (0x000980a0) cell_popup_blid_pane_g1

0xcc19,	// (0x000980a8) cell_popup_blid_pane_t1

0x4b01,	// (0x0008ff90) mup2_indicator_pane_ParamLimits

0x4b01,	// (0x0008ff90) mup2_indicator_pane

0xaa79,	// (0x00095f08) mup2_visualizer_osc_pane

0xc9c3,	// (0x00097e52) mup2_visualizer_spec_pane_ParamLimits

0xc9c3,	// (0x00097e52) mup2_visualizer_spec_pane

0x4c7c,	// (0x0009010b) mup2_spec_half_pane

0x4c85,	// (0x00090114) mup2_spec_half_pane_cp

0x4c8d,	// (0x0009011c) mup2_spec_bar_pane_ParamLimits

0x4c8d,	// (0x0009011c) mup2_spec_bar_pane

0xc964,	// (0x00097df3) mup2_spec_bar_pane_g1

0xc96e,	// (0x00097dfd) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0009aa7a) mup2_spec_bar_pane_g

0x4cad,	// (0x0009013c) mup2_osc_middle_pane

0xc980,	// (0x00097e0f) mup2_visualizer_osc_pane_g1

0x9870,	// (0x00094cff) popup_number_entry_window_t1_ParamLimits

0x9883,	// (0x00094d12) popup_number_entry_window_t2_ParamLimits

0x9895,	// (0x00094d24) popup_number_entry_window_t3_ParamLimits

0x119e,	// (0x0008c62d) popup_number_entry_window_t5_ParamLimits

0x119e,	// (0x0008c62d) popup_number_entry_window_t5

0xf0af,	// (0x0009a53e) popup_number_entry_window_t_ParamLimits

0x98a7,	// (0x00094d36) text_title_cp2_ParamLimits

0x9d8f,	// (0x0009521e) aid_hotspot_pointer_text2_pane

0x9db5,	// (0x00095244) main_viewer_pane_g9_ParamLimits

0x9db5,	// (0x00095244) main_viewer_pane_g9

0xadab,	// (0x0009623a) cale_month_pane_t1_ParamLimits

0xade8,	// (0x00096277) bg_cale_pane_ParamLimits

0xae00,	// (0x0009628f) list_cale_pane_ParamLimits

0xae11,	// (0x000962a0) listscroll_cale_day_pane_t1

0xae23,	// (0x000962b2) scroll_pane_cp09_ParamLimits

0x34a2,	// (0x0008e931) main_mup_eq_pane_t1_ParamLimits

0x34a2,	// (0x0008e931) main_mup_eq_pane_t1

0x34bc,	// (0x0008e94b) main_mup_eq_pane_t2_ParamLimits

0x34bc,	// (0x0008e94b) main_mup_eq_pane_t2

0x34d6,	// (0x0008e965) main_mup_eq_pane_t3_ParamLimits

0x34d6,	// (0x0008e965) main_mup_eq_pane_t3

0x34f2,	// (0x0008e981) main_mup_eq_pane_t4_ParamLimits

0x34f2,	// (0x0008e981) main_mup_eq_pane_t4

0x350e,	// (0x0008e99d) main_mup_eq_pane_t5_ParamLimits

0x350e,	// (0x0008e99d) main_mup_eq_pane_t5

0x352a,	// (0x0008e9b9) main_mup_eq_pane_t6_ParamLimits

0x352a,	// (0x0008e9b9) main_mup_eq_pane_t6

0x353e,	// (0x0008e9cd) main_mup_eq_pane_t7_ParamLimits

0x353e,	// (0x0008e9cd) main_mup_eq_pane_t7

0x3552,	// (0x0008e9e1) main_mup_eq_pane_t8_ParamLimits

0x3552,	// (0x0008e9e1) main_mup_eq_pane_t8

0x3566,	// (0x0008e9f5) main_mup_eq_pane_t9_ParamLimits

0x3566,	// (0x0008e9f5) main_mup_eq_pane_t9

0x3580,	// (0x0008ea0f) main_mup_eq_pane_t10_ParamLimits

0x3580,	// (0x0008ea0f) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0009a8c9) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0009a8c9) main_mup_eq_pane_t

0x362f,	// (0x0008eabe) mup_equalizer_pane_cp5_ParamLimits

0x3643,	// (0x0008ead2) mup_equalizer_pane_cp6_ParamLimits

0x3657,	// (0x0008eae6) mup_equalizer_pane_cp7_ParamLimits

0x97e8,	// (0x00094c77) main_gallery_pane

0xc989,	// (0x00097e18) smil2_volume_pane

0xc991,	// (0x00097e20) smil_status_volume_pane_g1_ParamLimits

0xc9a4,	// (0x00097e33) smil_status_volume_pane_g2_ParamLimits

0x9e15,	// (0x000952a4) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0009aa7f) smil_status_volume_pane_g_ParamLimits

0xcaf6,	// (0x00097f85) bg_popup_window_pane_cp07_ParamLimits

0xcb04,	// (0x00097f93) blid_firmament_pane

0x4cb6,	// (0x00090145) aid_size_cell_gallery_ParamLimits

0x4cb6,	// (0x00090145) aid_size_cell_gallery

0x4ccc,	// (0x0009015b) grid_gallery_pane_ParamLimits

0x4ccc,	// (0x0009015b) grid_gallery_pane

0x4ce5,	// (0x00090174) cell_gallery_pane_ParamLimits

0x4ce5,	// (0x00090174) cell_gallery_pane

0xcc27,	// (0x000980b6) bg_cell_gallery_focus_pane_ParamLimits

0xcc27,	// (0x000980b6) bg_cell_gallery_focus_pane

0xcc39,	// (0x000980c8) cell_gallery_pane_g1_ParamLimits

0xcc39,	// (0x000980c8) cell_gallery_pane_g1

0x4d2e,	// (0x000901bd) cell_gallery_pane_g2_ParamLimits

0x4d2e,	// (0x000901bd) cell_gallery_pane_g2

0x4d3b,	// (0x000901ca) cell_gallery_pane_g3_ParamLimits

0x4d3b,	// (0x000901ca) cell_gallery_pane_g3

0xcc45,	// (0x000980d4) cell_gallery_pane_g4_ParamLimits

0xcc45,	// (0x000980d4) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0009ab2d) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0009ab2d) cell_gallery_pane_g

0xcc51,	// (0x000980e0) bg_cell_gallery_focus_pane_g1

0xcc59,	// (0x000980e8) bg_cell_gallery_focus_pane_g2

0xcc61,	// (0x000980f0) bg_cell_gallery_focus_pane_g3

0xcc69,	// (0x000980f8) bg_cell_gallery_focus_pane_g4

0xcc71,	// (0x00098100) bg_cell_gallery_focus_pane_g5

0xcc79,	// (0x00098108) bg_cell_gallery_focus_pane_g6

0xcc81,	// (0x00098110) bg_cell_gallery_focus_pane_g7

0xcc89,	// (0x00098118) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0009ab36) bg_cell_gallery_focus_pane_g

0xcc91,	// (0x00098120) aid_firma_cardinal

0xcca5,	// (0x00098134) blid_firmament_pane_t1

0xccbc,	// (0x0009814b) blid_firmament_pane_t2

0xccd3,	// (0x00098162) blid_firmament_pane_t3

0xccea,	// (0x00098179) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0009ab47) blid_firmament_pane_t

0xcd01,	// (0x00098190) blid_sat_info_pane

0xcd11,	// (0x000981a0) blid_sat_info_pane_g1

0xcd11,	// (0x000981a0) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0009ab50) blid_sat_info_pane_g

0xcd1b,	// (0x000981aa) blid_sat_info_pane_t1

0xcd29,	// (0x000981b8) smil2_volume_content_pane

0xcd32,	// (0x000981c1) smil2_volume_pane_g1

0xa92c,	// (0x00095dbb) smil2_volume_content_pane_g1

0xcd3a,	// (0x000981c9) smil2_volume_content_pane_g2

0xcd43,	// (0x000981d2) smil2_volume_content_pane_g3

0xcd4c,	// (0x000981db) smil2_volume_content_pane_g4

0xcd55,	// (0x000981e4) smil2_volume_content_pane_g5

0xcd5e,	// (0x000981ed) smil2_volume_content_pane_g6

0xcd67,	// (0x000981f6) smil2_volume_content_pane_g7

0xcd70,	// (0x000981ff) smil2_volume_content_pane_g8

0xcd79,	// (0x00098208) smil2_volume_content_pane_g9

0xcd82,	// (0x00098211) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0009ab55) smil2_volume_content_pane_g

0x192e,	// (0x0008cdbd) cale_week_day_heading_pane_t1_ParamLimits

0x1958,	// (0x0008cde7) cale_week_day_heading_pane_t2_ParamLimits

0x1987,	// (0x0008ce16) cale_week_day_heading_pane_t3_ParamLimits

0x19b6,	// (0x0008ce45) cale_week_day_heading_pane_t4_ParamLimits

0x19e5,	// (0x0008ce74) cale_week_day_heading_pane_t5_ParamLimits

0x1a1c,	// (0x0008ceab) cale_week_day_heading_pane_t6_ParamLimits

0x1a53,	// (0x0008cee2) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0009a645) cale_week_day_heading_pane_t_ParamLimits

0xaa1e,	// (0x00095ead) bg_cale_side_pane_ParamLimits

0x1a7d,	// (0x0008cf0c) cale_week_time_pane_t1_ParamLimits

0x1a97,	// (0x0008cf26) cale_week_time_pane_t2_ParamLimits

0x1ab1,	// (0x0008cf40) cale_week_time_pane_t3_ParamLimits

0x1acb,	// (0x0008cf5a) cale_week_time_pane_t4_ParamLimits

0x1ae5,	// (0x0008cf74) cale_week_time_pane_t5_ParamLimits

0x1aff,	// (0x0008cf8e) cale_week_time_pane_t6_ParamLimits

0x1b19,	// (0x0008cfa8) cale_week_time_pane_t7_ParamLimits

0x1b33,	// (0x0008cfc2) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0009a654) cale_week_time_pane_t_ParamLimits

0x1b4d,	// (0x0008cfdc) cell_cale_week_pane_g2_ParamLimits

0xaa1e,	// (0x00095ead) bg_cale_side_pane_cp01_ParamLimits

0x2ca1,	// (0x0008e130) cale_month_week_pane_t1_ParamLimits

0x2cba,	// (0x0008e149) cale_month_week_pane_t2_ParamLimits

0x2cd3,	// (0x0008e162) cale_month_week_pane_t3_ParamLimits

0x2cec,	// (0x0008e17b) cale_month_week_pane_t4_ParamLimits

0x2d05,	// (0x0008e194) cale_month_week_pane_t5_ParamLimits

0x2d1e,	// (0x0008e1ad) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0009a729) cale_month_week_pane_t_ParamLimits

0x9ccc,	// (0x0009515b) cell_cale_month_pane_g1_ParamLimits

0x97e8,	// (0x00094c77) main_cale_event_viewer_pane

0x97e8,	// (0x00094c77) listscroll_cale_event_viewer_pane

0xcd8b,	// (0x0009821a) list_cale_ev_pane

0xcd93,	// (0x00098222) scroll_pane_cp023

0xcd9f,	// (0x0009822e) field_cale_ev_pane_ParamLimits

0xcd9f,	// (0x0009822e) field_cale_ev_pane

0xcdbd,	// (0x0009824c) field_cale_ev_content_pane_ParamLimits

0xcdbd,	// (0x0009824c) field_cale_ev_content_pane

0xcdc9,	// (0x00098258) field_cale_ev_pane_g1_ParamLimits

0xcdc9,	// (0x00098258) field_cale_ev_pane_g1

0xcdd5,	// (0x00098264) field_cale_ev_pane_g2_ParamLimits

0xcdd5,	// (0x00098264) field_cale_ev_pane_g2

0xcded,	// (0x0009827c) field_cale_ev_pane_g3_ParamLimits

0xcded,	// (0x0009827c) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0009ab6a) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0009ab6a) field_cale_ev_pane_g

0xce05,	// (0x00098294) field_cale_ev_pane_t1_ParamLimits

0xce05,	// (0x00098294) field_cale_ev_pane_t1

0xce1c,	// (0x000982ab) field_cale_ev_content_pane_t1_ParamLimits

0xce1c,	// (0x000982ab) field_cale_ev_content_pane_t1

0xb66e,	// (0x00096afd) bg_button_pane_cp01

0x165b,	// (0x0008caea) listscroll_cale_week_pane_ParamLimits

0xa9c9,	// (0x00095e58) popup_toolbar_window_cp01

0xa9ef,	// (0x00095e7e) listscroll_cale_week_pane_t1_ParamLimits

0x165b,	// (0x0008caea) listscroll_cale_day_pane_ParamLimits

0xa9c9,	// (0x00095e58) popup_toolbar_window_cp02

0xae11,	// (0x000962a0) listscroll_cale_day_pane_t1_ParamLimits

0x165b,	// (0x0008caea) main_cale_month_pane_ParamLimits

0x9e00,	// (0x0009528f) popup_toolbar_window_cp03_ParamLimits

0x9e00,	// (0x0009528f) popup_toolbar_window_cp03

0x390b,	// (0x0008ed9a) main_image_pane_g2_ParamLimits

0x390b,	// (0x0008ed9a) main_image_pane_g2

0x391c,	// (0x0008edab) main_image_pane_g3_ParamLimits

0x391c,	// (0x0008edab) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0009a95b) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0009a95b) main_image_pane_g

0xb788,	// (0x00096c17) main_image_pane_t1_ParamLimits

0x392d,	// (0x0008edbc) main_image_pane_t2_ParamLimits

0x392d,	// (0x0008edbc) main_image_pane_t2

0x393f,	// (0x0008edce) main_image_pane_t3_ParamLimits

0x393f,	// (0x0008edce) main_image_pane_t3

0x3967,	// (0x0008edf6) main_image_pane_t4_ParamLimits

0x3967,	// (0x0008edf6) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0009a962) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0009a962) main_image_pane_t

0x3987,	// (0x0008ee16) popup_image_details_window_cp01

0x3991,	// (0x0008ee20) popup_toobar_trans_pane_cp01_ParamLimits

0x3991,	// (0x0008ee20) popup_toobar_trans_pane_cp01

0x4111,	// (0x0008f5a0) popup_image_details_window_ParamLimits

0x4111,	// (0x0008f5a0) popup_image_details_window

0x9dd3,	// (0x00095262) popup_image_focus_window

0x4528,	// (0x0008f9b7) camera2_autofocus_pane_ParamLimits

0x4528,	// (0x0008f9b7) camera2_autofocus_pane

0x97e8,	// (0x00094c77) bg_popup_sub_pane_cp06

0xce3a,	// (0x000982c9) popup_image_focus_window_g1

0xce42,	// (0x000982d1) popup_image_focus_window_g2

0xce4a,	// (0x000982d9) popup_image_focus_window_g3

0xce52,	// (0x000982e1) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0009ab71) popup_image_focus_window_g

0xce5a,	// (0x000982e9) popup_image_focus_window_t1

0xce68,	// (0x000982f7) popup_image_focus_window_t2

0xce78,	// (0x00098307) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0009ab7a) popup_image_focus_window_t

0xce86,	// (0x00098315) camera2_autofocus_pane_g1

0xa54e,	// (0x000959dd) bg_tb_trans_pane_cp01

0xce94,	// (0x00098323) popup_image_details_window_g1

0xcea7,	// (0x00098336) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0009ab8c) popup_image_details_window_g

0xced0,	// (0x0009835f) popup_image_details_window_t1

0xcee2,	// (0x00098371) popup_image_details_window_t2

0xcefb,	// (0x0009838a) popup_image_details_window_t3

0xcf0f,	// (0x0009839e) popup_image_details_window_t4

0xcf2a,	// (0x000983b9) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0009ab93) popup_image_details_window_t

0xa897,	// (0x00095d26) bg_calc_paper_pane_ParamLimits

0x97e8,	// (0x00094c77) grid_highlight_pane_cp013

0x9c3c,	// (0x000950cb) list_calc_pane_ParamLimits

0x9c4e,	// (0x000950dd) scroll_pane_cp024

0xa8ab,	// (0x00095d3a) bg_calc_display_pane_ParamLimits

0x149a,	// (0x0008c929) calc_display_pane_t1_ParamLimits

0x14af,	// (0x0008c93e) calc_display_pane_t2_ParamLimits

0x9c56,	// (0x000950e5) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0009a5c5) calc_display_pane_t_ParamLimits

0x156f,	// (0x0008c9fe) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0009a5e2) cell_calc_pane_g

0x1578,	// (0x0008ca07) cell_calc_pane_t1

0xa90a,	// (0x00095d99) grid_highlight_pane_cp02_ParamLimits

0xa920,	// (0x00095daf) toolbar_button_pane_cp01_ParamLimits

0xa920,	// (0x00095daf) toolbar_button_pane_cp01

0xb7cd,	// (0x00096c5c) temp_image_control_pane_ParamLimits

0xb7cd,	// (0x00096c5c) temp_image_control_pane

0xa54e,	// (0x000959dd) main_mp3_pane

0xcf44,	// (0x000983d3) temp_image_control_pane_g1_ParamLimits

0xcf44,	// (0x000983d3) temp_image_control_pane_g1

0xcf52,	// (0x000983e1) temp_image_control_pane_g2_ParamLimits

0xcf52,	// (0x000983e1) temp_image_control_pane_g2

0xcf64,	// (0x000983f3) temp_image_control_pane_g3_ParamLimits

0xcf64,	// (0x000983f3) temp_image_control_pane_g3

0x4d78,	// (0x00090207) temp_image_control_pane_g4_ParamLimits

0x4d78,	// (0x00090207) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0009ab9e) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0009ab9e) temp_image_control_pane_g

0xcf44,	// (0x000983d3) main_mp3_pane_g1

0x4d8b,	// (0x0009021a) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0009aba7) main_mp3_pane_g

0xcfa7,	// (0x00098436) main_mp3_pane_t1

0xaa81,	// (0x00095f10) main_camera_pane_g8_ParamLimits

0xaa81,	// (0x00095f10) main_camera_pane_g8

0x1e47,	// (0x0008d2d6) main_video_pane_g7_ParamLimits

0x1e47,	// (0x0008d2d6) main_video_pane_g7

0x9e55,	// (0x000952e4) main_camera2_pane_t7_ParamLimits

0x9e55,	// (0x000952e4) main_camera2_pane_t7

0xabc9,	// (0x00096058) scroll_pane_cp025_ParamLimits

0xabc9,	// (0x00096058) scroll_pane_cp025

0xabdd,	// (0x0009606c) scroll_pane_cp026_ParamLimits

0xabdd,	// (0x0009606c) scroll_pane_cp026

0xabec,	// (0x0009607b) wml_content_pane_ParamLimits

0x97e8,	// (0x00094c77) main_touch_calib_pane

0x4e5f,	// (0x000902ee) main_touch_calib_pane_g1

0x4e71,	// (0x00090300) main_touch_calib_pane_g2

0x4e83,	// (0x00090312) main_touch_calib_pane_g3

0x4e95,	// (0x00090324) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0009abc5) main_touch_calib_pane_g

0x4ea7,	// (0x00090336) main_touch_calib_pane_t1

0x4ec1,	// (0x00090350) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0009abce) main_touch_calib_pane_t

0xb39a,	// (0x00096829) mup_progress_pane_cp02

0xb3cf,	// (0x0009685e) navi_pane_g1

0xb48a,	// (0x00096919) navi_pane_mp_t3

0xa54e,	// (0x000959dd) main_mp3_pane_ParamLimits

0x4296,	// (0x0008f725) navi_pane_ParamLimits

0xcf44,	// (0x000983d3) main_mp3_pane_g1_ParamLimits

0x4d8b,	// (0x0009021a) main_mp3_pane_g2_ParamLimits

0x4d99,	// (0x00090228) main_mp3_pane_g3_ParamLimits

0x4d99,	// (0x00090228) main_mp3_pane_g3

0x4da7,	// (0x00090236) main_mp3_pane_g4_ParamLimits

0x4da7,	// (0x00090236) main_mp3_pane_g4

0xcf74,	// (0x00098403) main_mp3_pane_g5_ParamLimits

0xcf74,	// (0x00098403) main_mp3_pane_g5

0xcf82,	// (0x00098411) main_mp3_pane_g6_ParamLimits

0xcf82,	// (0x00098411) main_mp3_pane_g6

0xcf8f,	// (0x0009841e) main_mp3_pane_g7_ParamLimits

0xcf8f,	// (0x0009841e) main_mp3_pane_g7

0xcf9b,	// (0x0009842a) main_mp3_pane_g8_ParamLimits

0xcf9b,	// (0x0009842a) main_mp3_pane_g8

0xf718,	// (0x0009aba7) main_mp3_pane_g_ParamLimits

0x4db3,	// (0x00090242) main_mp3_pane_t2

0x4dc1,	// (0x00090250) main_mp3_pane_t3

0xcfb5,	// (0x00098444) main_mp3_pane_t4

0xcfc3,	// (0x00098452) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0009abb8) main_mp3_pane_t

0xcfd1,	// (0x00098460) mup_progress_pane_cp01

0x9806,	// (0x00094c95) aid_zoom_text_secondary2

0xcd8b,	// (0x0009821a) list_cale_ev2_pane

0xcd93,	// (0x00098222) scroll_pane_cp023_ParamLimits

0x4f17,	// (0x000903a6) field_cale_ev2_pane_ParamLimits

0x4f17,	// (0x000903a6) field_cale_ev2_pane

0x4f37,	// (0x000903c6) field_cale_ev2_pane_g1_ParamLimits

0x4f37,	// (0x000903c6) field_cale_ev2_pane_g1

0x4f43,	// (0x000903d2) field_cale_ev2_pane_g2_ParamLimits

0x4f43,	// (0x000903d2) field_cale_ev2_pane_g2

0x4f5b,	// (0x000903ea) field_cale_ev2_pane_g3_ParamLimits

0x4f5b,	// (0x000903ea) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0009abd9) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0009abd9) field_cale_ev2_pane_g

0x4f73,	// (0x00090402) field_cale_ev2_pane_t1_ParamLimits

0x4f73,	// (0x00090402) field_cale_ev2_pane_t1

0x4f8a,	// (0x00090419) field_cale_ev2_pane_t2_ParamLimits

0x4f8a,	// (0x00090419) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0009abe2) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0009abe2) field_cale_ev2_pane_t

0x37c0,	// (0x0008ec4f) main_postcard_pane_g5_ParamLimits

0x37c0,	// (0x0008ec4f) main_postcard_pane_g5

0x37d6,	// (0x0008ec65) main_postcard_pane_g6_ParamLimits

0x37d6,	// (0x0008ec65) main_postcard_pane_g6

0x1c13,	// (0x0008d0a2) camera2_autofocus_pane_cp_ParamLimits

0x1c13,	// (0x0008d0a2) camera2_autofocus_pane_cp

0xa54e,	// (0x000959dd) main_mup3_pane

0x4fc3,	// (0x00090452) main_mup3_pane_g1_ParamLimits

0x4fc3,	// (0x00090452) main_mup3_pane_g1

0x4fe5,	// (0x00090474) main_mup3_pane_g2_ParamLimits

0x4fe5,	// (0x00090474) main_mup3_pane_g2

0x5063,	// (0x000904f2) main_mup3_pane_g3_ParamLimits

0x5063,	// (0x000904f2) main_mup3_pane_g3

0x50a9,	// (0x00090538) main_mup3_pane_g4_ParamLimits

0x50a9,	// (0x00090538) main_mup3_pane_g4

0x50ef,	// (0x0009057e) main_mup3_pane_g5_ParamLimits

0x50ef,	// (0x0009057e) main_mup3_pane_g5

0x5135,	// (0x000905c4) main_mup3_pane_g6_ParamLimits

0x5135,	// (0x000905c4) main_mup3_pane_g6

0xcff9,	// (0x00098488) main_mup3_pane_g7_ParamLimits

0xcff9,	// (0x00098488) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0009abf2) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0009abf2) main_mup3_pane_g

0x51b3,	// (0x00090642) main_mup3_pane_t1_ParamLimits

0x51b3,	// (0x00090642) main_mup3_pane_t1

0x5227,	// (0x000906b6) main_mup3_pane_t2_ParamLimits

0x5227,	// (0x000906b6) main_mup3_pane_t2

0x52fb,	// (0x0009078a) main_mup3_pane_t4_ParamLimits

0x52fb,	// (0x0009078a) main_mup3_pane_t4

0x5351,	// (0x000907e0) main_mup3_pane_t5_ParamLimits

0x5351,	// (0x000907e0) main_mup3_pane_t5

0x540d,	// (0x0009089c) main_mup3_pane_t6_ParamLimits

0x540d,	// (0x0009089c) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0009ac03) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0009ac03) main_mup3_pane_t

0x54c5,	// (0x00090954) mup3_progress_pane_ParamLimits

0x54c5,	// (0x00090954) mup3_progress_pane

0x555b,	// (0x000909ea) popup_mup3_control_window_ParamLimits

0x555b,	// (0x000909ea) popup_mup3_control_window

0xd007,	// (0x00098496) popup_mup3_text_window

0x558d,	// (0x00090a1c) mup3_progress_pane_t1

0x55ac,	// (0x00090a3b) mup3_progress_pane_t2

0xd00f,	// (0x0009849e) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0009ac10) mup3_progress_pane_t

0xd02c,	// (0x000984bb) mup_progress_pane_cp03

0x97e8,	// (0x00094c77) bg_tb_trans_pane_cp04

0x55cb,	// (0x00090a5a) mup3_volume_pane

0x55d3,	// (0x00090a62) popup_mup3_control_window_g1

0x55dc,	// (0x00090a6b) mup3_volume_pane_g1

0x55e5,	// (0x00090a74) mup3_volume_pane_g2

0x55ee,	// (0x00090a7d) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0009ac17) mup3_volume_pane_g

0x97e8,	// (0x00094c77) bg_tb_trans_pane_cp03

0xd03c,	// (0x000984cb) popup_mup3_text_window_g1

0xd044,	// (0x000984d3) popup_mup3_text_window_t1

0xa8f3,	// (0x00095d82) list_calc_item_pane_g1_ParamLimits

0xca64,	// (0x00097ef3) mup_volume_pane_cp_g1

0x4edb,	// (0x0009036a) main_touch_calib_pane_t3

0x4eef,	// (0x0009037e) main_touch_calib_pane_t4

0x4f03,	// (0x00090392) main_touch_calib_pane_t5

0x97f2,	// (0x00094c81) aid_cell_size_toolbar2

0x97fa,	// (0x00094c89) aid_popup3_width_pane

0x0f3f,	// (0x0008c3ce) aid_zoom_text_msg_primary

0x1bf2,	// (0x0008d081) vorec_t7

0xa8b7,	// (0x00095d46) bg_calc_paper_pane_g1_ParamLimits

0xa8c3,	// (0x00095d52) bg_calc_paper_pane_g2_ParamLimits

0xa8cf,	// (0x00095d5e) bg_calc_paper_pane_g3_ParamLimits

0xa8db,	// (0x00095d6a) bg_calc_paper_pane_g4_ParamLimits

0xa8e7,	// (0x00095d76) bg_calc_paper_pane_g5_ParamLimits

0x14f9,	// (0x0008c988) bg_calc_paper_pane_g6_ParamLimits

0x1508,	// (0x0008c997) bg_calc_paper_pane_g7_ParamLimits

0x1517,	// (0x0008c9a6) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0009a5cc) bg_calc_paper_pane_g_ParamLimits

0x152a,	// (0x0008c9b9) calc_bg_paper_pane_g9_ParamLimits

0x1d5e,	// (0x0008d1ed) image_qvga_pane_ParamLimits

0x1d5e,	// (0x0008d1ed) image_qvga_pane

0xa7e6,	// (0x00095c75) bg_popup_sub_pane_cp04_ParamLimits

0xb704,	// (0x00096b93) popup_mup_playback_window_g1_ParamLimits

0xb710,	// (0x00096b9f) popup_mup_playback_window_t1_ParamLimits

0xb725,	// (0x00096bb4) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0009a956) popup_mup_playback_window_t_ParamLimits

0x4a1b,	// (0x0008feaa) main_mup2_pane_g3_ParamLimits

0x4a1b,	// (0x0008feaa) main_mup2_pane_g3

0x206f,	// (0x0008d4fe) popup_toolbar_window_cp04

0xbb07,	// (0x00096f96) popup_call2_audio_second_window_g3_ParamLimits

0xbb07,	// (0x00096f96) popup_call2_audio_second_window_g3

0xbf11,	// (0x000973a0) popup_call2_audio_first_window_g4_ParamLimits

0xbf11,	// (0x000973a0) popup_call2_audio_first_window_g4

0xc59c,	// (0x00097a2b) popup_call2_audio_in_window_g4_ParamLimits

0xc59c,	// (0x00097a2b) popup_call2_audio_in_window_g4

0x38ed,	// (0x0008ed7c) aid_area_sk_bg_cut_ParamLimits

0x38ed,	// (0x0008ed7c) aid_area_sk_bg_cut

0xb73a,	// (0x00096bc9) aid_area_sk_bg_cut_2_ParamLimits

0xb73a,	// (0x00096bc9) aid_area_sk_bg_cut_2

0x4d1e,	// (0x000901ad) aid_placing_details_win

0x4d26,	// (0x000901b5) aid_placing_details_win_2

0xce86,	// (0x00098315) camera2_autofocus_pane_g1_ParamLimits

0x10e5,	// (0x0008c574) popup_fixed_preview_cale_window_ParamLimits

0x10e5,	// (0x0008c574) popup_fixed_preview_cale_window

0xb508,	// (0x00096997) navi_slider_pane_g3

0xb511,	// (0x000969a0) navi_slider_pane_g4

0xb51a,	// (0x000969a9) navi_slider_pane_g5

0xb508,	// (0x00096997) navi_slider_pane_g6

0x9d76,	// (0x00095205) navi_slider_pane_g7

0xb63b,	// (0x00096aca) mup_scale_pane_g3

0xb644,	// (0x00096ad3) mup_scale_pane_g4

0xb64d,	// (0x00096adc) mup_scale_pane_g5

0x366b,	// (0x0008eafa) mup_scale_pane_g6

0x3674,	// (0x0008eb03) mup_scale_pane_g7

0xb508,	// (0x00096997) cams2_slider_pane_g3

0xcae6,	// (0x00097f75) cams2_slider_pane_g4

0x9ec3,	// (0x00095352) cams2_slider_pane_g5

0xb508,	// (0x00096997) cams2_slider_pane_g6

0x9ecb,	// (0x0009535a) cams2_slider_pane_g7

0xcd11,	// (0x000981a0) camera2_autofocus_pane_cp_g1

0xc8fd,	// (0x00097d8c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8fd,	// (0x00097d8c) bg_popup_preview_window_pane_cp02

0xd052,	// (0x000984e1) list_fp_cale_pane_ParamLimits

0xd052,	// (0x000984e1) list_fp_cale_pane

0xd05e,	// (0x000984ed) popup_fixed_preview_cale_window_t1_ParamLimits

0xd05e,	// (0x000984ed) popup_fixed_preview_cale_window_t1

0x55f7,	// (0x00090a86) popup_fixed_preview_cale_window_t2_ParamLimits

0x55f7,	// (0x00090a86) popup_fixed_preview_cale_window_t2

0x560c,	// (0x00090a9b) popup_fixed_preview_cale_window_t3_ParamLimits

0x560c,	// (0x00090a9b) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0009ac1e) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0009ac1e) popup_fixed_preview_cale_window_t

0x5621,	// (0x00090ab0) list_single_fp_cale_pane_ParamLimits

0x5621,	// (0x00090ab0) list_single_fp_cale_pane

0xd07c,	// (0x0009850b) list_single_fp_cale_pane_g1_ParamLimits

0xd07c,	// (0x0009850b) list_single_fp_cale_pane_g1

0xd088,	// (0x00098517) list_single_fp_cale_pane_g2_ParamLimits

0xd088,	// (0x00098517) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0009ac25) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0009ac25) list_single_fp_cale_pane_g

0xd0a1,	// (0x00098530) list_single_fp_cale_pane_t1_ParamLimits

0xd0a1,	// (0x00098530) list_single_fp_cale_pane_t1

0xd0b3,	// (0x00098542) list_single_fp_cale_pane_t2_ParamLimits

0xd0b3,	// (0x00098542) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0009ac2c) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0009ac2c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x97e8,	// (0x00094c77) main_dialer_pane

0x5636,	// (0x00090ac5) aid_cell_size_keypad

0x5640,	// (0x00090acf) dialer_ne_pane

0x5648,	// (0x00090ad7) grid_dialer_command_1_pane

0x5650,	// (0x00090adf) grid_dialer_command_2_pane

0x5658,	// (0x00090ae7) grid_dialer_keypad_pane

0x566a,	// (0x00090af9) bg_popup_call_pane_cp06_ParamLimits

0x566a,	// (0x00090af9) bg_popup_call_pane_cp06

0x5676,	// (0x00090b05) dialer_ne_clear_pane_ParamLimits

0x5676,	// (0x00090b05) dialer_ne_clear_pane

0xd0e6,	// (0x00098575) dialer_ne_pane_g1

0xd0ee,	// (0x0009857d) dialer_ne_pane_t1_ParamLimits

0xd0ee,	// (0x0009857d) dialer_ne_pane_t1

0x5682,	// (0x00090b11) dialer_ne_pane_t2_ParamLimits

0x5682,	// (0x00090b11) dialer_ne_pane_t2

0x56ac,	// (0x00090b3b) dialer_ne_pane_t3_ParamLimits

0x56ac,	// (0x00090b3b) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0009ac31) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0009ac31) dialer_ne_pane_t

0x56dc,	// (0x00090b6b) dialer_ne_pane_t3_copy1_ParamLimits

0x56dc,	// (0x00090b6b) dialer_ne_pane_t3_copy1

0x570b,	// (0x00090b9a) cell_dialer_keypad_pane_ParamLimits

0x570b,	// (0x00090b9a) cell_dialer_keypad_pane

0x5722,	// (0x00090bb1) cell_dialer_command_1_pane_ParamLimits

0x5722,	// (0x00090bb1) cell_dialer_command_1_pane

0x5738,	// (0x00090bc7) cell_dialer_command_2_pane_ParamLimits

0x5738,	// (0x00090bc7) cell_dialer_command_2_pane

0xd100,	// (0x0009858f) bg_button_pane_cp02_ParamLimits

0xd100,	// (0x0009858f) bg_button_pane_cp02

0x5747,	// (0x00090bd6) cell_dialer_keypad_pane_g1_ParamLimits

0x5747,	// (0x00090bd6) cell_dialer_keypad_pane_g1

0xd100,	// (0x0009858f) bg_button_pane_cp03_ParamLimits

0xd100,	// (0x0009858f) bg_button_pane_cp03

0x575b,	// (0x00090bea) cell_dialer_command_1_pane_g1_ParamLimits

0x575b,	// (0x00090bea) cell_dialer_command_1_pane_g1

0xd10c,	// (0x0009859b) bg_button_pane_cp04

0x576f,	// (0x00090bfe) cell_dialer_command_2_pane_g1

0xaa79,	// (0x00095f08) bg_button_pane_cp06

0xd114,	// (0x000985a3) dialer_ne_clear_pane_g1

0xb3db,	// (0x0009686a) navi_pane_g2

0xb409,	// (0x00096898) navi_pane_g3

0x0002,

0xf3ca,	// (0x0009a859) navi_pane_g

0xb498,	// (0x00096927) navi_pane_mv_g2

0xb4bf,	// (0x0009694e) navi_pane_mv_g5

0x322f,	// (0x0008e6be) navi_pane_mv_t1

0xa8ab,	// (0x00095d3a) main_clock2_pane

0xa54e,	// (0x000959dd) main_clock2_list_pane_ParamLimits

0xa54e,	// (0x000959dd) main_clock2_list_pane

0x57e0,	// (0x00090c6f) main_clock2_pane_t1_ParamLimits

0x57e0,	// (0x00090c6f) main_clock2_pane_t1

0x581b,	// (0x00090caa) main_clock2_pane_t2_ParamLimits

0x581b,	// (0x00090caa) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0009ac3d) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0009ac3d) main_clock2_pane_t

0x58bb,	// (0x00090d4a) popup_clock_analogue_window_cp03_ParamLimits

0x58bb,	// (0x00090d4a) popup_clock_analogue_window_cp03

0x58e0,	// (0x00090d6f) popup_clock_digital_window_cp02_ParamLimits

0x58e0,	// (0x00090d6f) popup_clock_digital_window_cp02

0x5959,	// (0x00090de8) main_clock2_list_single_pane_ParamLimits

0x5959,	// (0x00090de8) main_clock2_list_single_pane

0xaa79,	// (0x00095f08) list_highlight_pane_cp05

0xd152,	// (0x000985e1) main_clock2_list_single_pane_t1

0x206f,	// (0x0008d4fe) popup_toolbar_window_cp04_ParamLimits

0x4d48,	// (0x000901d7) camera2_autofocus_pane_g2_ParamLimits

0x4d48,	// (0x000901d7) camera2_autofocus_pane_g2

0x4d54,	// (0x000901e3) camera2_autofocus_pane_g3_ParamLimits

0x4d54,	// (0x000901e3) camera2_autofocus_pane_g3

0x4d60,	// (0x000901ef) camera2_autofocus_pane_g4_ParamLimits

0x4d60,	// (0x000901ef) camera2_autofocus_pane_g4

0x4d6c,	// (0x000901fb) camera2_autofocus_pane_g5_ParamLimits

0x4d6c,	// (0x000901fb) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0009ab81) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0009ab81) camera2_autofocus_pane_g

0xcfd9,	// (0x00098468) camera2_autofocus_pane_cp_g2

0xcfe1,	// (0x00098470) camera2_autofocus_pane_cp_g3

0xcfe9,	// (0x00098478) camera2_autofocus_pane_cp_g4

0xcff1,	// (0x00098480) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0009abe7) camera2_autofocus_pane_cp_g

0x5662,	// (0x00090af1) popup_dialer_spcha_window

0x97e8,	// (0x00094c77) bg_popup_sub_pane_cp07

0xd160,	// (0x000985ef) list_spcha_pane

0xd168,	// (0x000985f7) list_single_spcha_pane_ParamLimits

0xd168,	// (0x000985f7) list_single_spcha_pane

0x97e8,	// (0x00094c77) list_highlight_pane_cp06

0xd179,	// (0x00098608) list_single_spcha_pane_t1

0xc346,	// (0x000977d5) popup_call2_audio_out_window_g4_ParamLimits

0xc346,	// (0x000977d5) popup_call2_audio_out_window_g4

0x97e8,	// (0x00094c77) main_imed2_pane

0x9ddb,	// (0x0009526a) popup_imed_adjust2_window

0x4129,	// (0x0008f5b8) popup_imed_trans_window_ParamLimits

0x4129,	// (0x0008f5b8) popup_imed_trans_window

0xcb4f,	// (0x00097fde) popup_blid_sat_info2_window_t1

0xcb5d,	// (0x00097fec) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0009ab16) popup_blid_sat_info2_window_t

0x5a0a,	// (0x00090e99) aid_size_cell_colour_35

0x5a2a,	// (0x00090eb9) aid_size_cell_colour_112

0x5a4a,	// (0x00090ed9) aid_size_cell_effect

0xc909,	// (0x00097d98) bg_tb_trans_pane_cp02

0xaf1a,	// (0x000963a9) heading_imed_pane

0x5a6a,	// (0x00090ef9) listscroll_imed_pane

0xd187,	// (0x00098616) heading_imed_pane_g1

0xd18f,	// (0x0009861e) heading_imed_pane_t1

0xd19d,	// (0x0009862c) grid_imed_colour_35_pane_ParamLimits

0xd19d,	// (0x0009862c) grid_imed_colour_35_pane

0x5a76,	// (0x00090f05) grid_imed_effect_pane

0xd1b4,	// (0x00098643) list_imed_aspect_pane

0x5a8c,	// (0x00090f1b) scroll_pane_cp027_ParamLimits

0x5a8c,	// (0x00090f1b) scroll_pane_cp027

0x5a9d,	// (0x00090f2c) cell_imed_effect_pane_ParamLimits

0x5a9d,	// (0x00090f2c) cell_imed_effect_pane

0xd1bc,	// (0x0009864b) cell_imed_colour_pane_ParamLimits

0xd1bc,	// (0x0009864b) cell_imed_colour_pane

0xd1fe,	// (0x0009868d) cell_imed_colour_pane_g1_ParamLimits

0xd1fe,	// (0x0009868d) cell_imed_colour_pane_g1

0xd20f,	// (0x0009869e) hgihlgiht_grid_pane_cp016_ParamLimits

0xd20f,	// (0x0009869e) hgihlgiht_grid_pane_cp016

0x5ac4,	// (0x00090f53) cell_imed_effect_pane_g1

0x5acc,	// (0x00090f5b) grid_highlight_pane_cp017

0xd220,	// (0x000986af) list_imed_single_pane_ParamLimits

0xd220,	// (0x000986af) list_imed_single_pane

0x97e8,	// (0x00094c77) list_highlight_pane_cp07

0xd235,	// (0x000986c4) list_imed_aspect_pane_comp1_t1

0xc909,	// (0x00097d98) bg_tb_trans_pane_cp05

0xd257,	// (0x000986e6) popup_imed_adjust2_window_g1

0xd27e,	// (0x0009870d) popup_imed_adjust2_window_t1

0xd296,	// (0x00098725) slider_imed_adjust_pane

0xd2aa,	// (0x00098739) slider_imed_adjust_pane_g1

0xd2ba,	// (0x00098749) slider_imed_adjust_pane_g2

0xd2ca,	// (0x00098759) slider_imed_adjust_pane_g3

0xd2db,	// (0x0009876a) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0009ac5a) slider_imed_adjust_pane_g

0x5ad5,	// (0x00090f64) aid_size_cell_clipart2

0x5ae1,	// (0x00090f70) grid_imed_clipart_pane

0xd2ec,	// (0x0009877b) scroll_pane_cp031

0x5aeb,	// (0x00090f7a) cell_imed_clipart_pane_ParamLimits

0x5aeb,	// (0x00090f7a) cell_imed_clipart_pane

0x5b0d,	// (0x00090f9c) cell_imed_clipart_pane_g1

0x97e8,	// (0x00094c77) grid_highlight_pane_cp014

0x57bc,	// (0x00090c4b) main_clock2_pane_g1_ParamLimits

0x57bc,	// (0x00090c4b) main_clock2_pane_g1

0x5900,	// (0x00090d8f) aid_call2_pane_cp10

0x5912,	// (0x00090da1) aid_call_pane_cp10

0xb33c,	// (0x000967cb) popup_clock_analogue_window_cp10_g1

0xb33c,	// (0x000967cb) popup_clock_analogue_window_cp10_g2

0x5924,	// (0x00090db3) popup_clock_analogue_window_cp10_g3

0x5924,	// (0x00090db3) popup_clock_analogue_window_cp10_g4

0xb33c,	// (0x000967cb) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0009ac48) popup_clock_analogue_window_cp10_g

0x593a,	// (0x00090dc9) popup_clock_analogue_window_cp10_t1

0x596b,	// (0x00090dfa) clock_digital_number_pane_cp10_ParamLimits

0x596b,	// (0x00090dfa) clock_digital_number_pane_cp10

0x5983,	// (0x00090e12) clock_digital_number_pane_cp11_ParamLimits

0x5983,	// (0x00090e12) clock_digital_number_pane_cp11

0x599b,	// (0x00090e2a) clock_digital_number_pane_cp12_ParamLimits

0x599b,	// (0x00090e2a) clock_digital_number_pane_cp12

0x59b5,	// (0x00090e44) clock_digital_number_pane_cp13_ParamLimits

0x59b5,	// (0x00090e44) clock_digital_number_pane_cp13

0x59cf,	// (0x00090e5e) clock_digital_separator_pane_cp10_ParamLimits

0x59cf,	// (0x00090e5e) clock_digital_separator_pane_cp10

0x59e9,	// (0x00090e78) popup_clock_digital_window_cp02_t1_ParamLimits

0x59e9,	// (0x00090e78) popup_clock_digital_window_cp02_t1

0xa7de,	// (0x00095c6d) clock_digital_number_pane_cp10_g1

0xa7de,	// (0x00095c6d) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0009ac63) clock_digital_number_pane_cp10_g

0xa7de,	// (0x00095c6d) clock_digital_separator_pane_cp10_g1

0xa7de,	// (0x00095c6d) clock_digital_separator_pane_g2_cp10

0xb4c7,	// (0x00096956) navi_pane_vded_g4

0xb4d0,	// (0x0009695f) navi_pane_vded_g5

0xb4d9,	// (0x00096968) navi_pane_vded_t1

0x97e8,	// (0x00094c77) main_vded_pane

0x5b16,	// (0x00090fa5) main_vded_pane_g1

0x5b20,	// (0x00090faf) main_vded_pane_g2

0x5b2a,	// (0x00090fb9) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0009ac68) main_vded_pane_g

0x5b34,	// (0x00090fc3) main_vded_pane_t1

0x5b42,	// (0x00090fd1) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0009ac6f) main_vded_pane_t

0x5b50,	// (0x00090fdf) vded_slider_pane

0x5b58,	// (0x00090fe7) vded_video_pane

0xd2f4,	// (0x00098783) vded_video_pane_g1

0x5b60,	// (0x00090fef) vded_video_pane_g2

0xcd11,	// (0x000981a0) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0009ac74) vded_video_pane_g

0xd2fe,	// (0x0009878d) vded_slider_pane_g1

0xca64,	// (0x00097ef3) vded_slider_pane_g2

0xd307,	// (0x00098796) vded_slider_pane_g3

0xd310,	// (0x0009879f) vded_slider_pane_g4

0xd319,	// (0x000987a8) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0009ac7b) vded_slider_pane_g

0x5543,	// (0x000909d2) mup3_rocker_pane_ParamLimits

0x5543,	// (0x000909d2) mup3_rocker_pane

0x5b69,	// (0x00090ff8) mup3_control_keys_pane_g1

0x5b71,	// (0x00091000) mup3_control_keys_pane_g2

0x5b79,	// (0x00091008) mup3_control_keys_pane_g3

0x5b81,	// (0x00091010) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0009ac86) mup3_control_keys_pane_g

0x111c,	// (0x0008c5ab) popup_toolbar2_fixed_window_cp01_ParamLimits

0x111c,	// (0x0008c5ab) popup_toolbar2_fixed_window_cp01

0x5577,	// (0x00090a06) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5577,	// (0x00090a06) popup_toolbar2_fixed_window_cp02

0xbc79,	// (0x00097108) popup_call2_audio_second_window_t4_ParamLimits

0xbc79,	// (0x00097108) popup_call2_audio_second_window_t4

0xc1b3,	// (0x00097642) popup_call2_audio_first_window_t6_ParamLimits

0xc1b3,	// (0x00097642) popup_call2_audio_first_window_t6

0xc449,	// (0x000978d8) popup_call2_audio_out_window_t6_ParamLimits

0xc449,	// (0x000978d8) popup_call2_audio_out_window_t6

0x97e8,	// (0x00094c77) main_vitu_pane

0x5b91,	// (0x00091020) aid_size_cell_itu_ParamLimits

0x5b91,	// (0x00091020) aid_size_cell_itu

0xa54e,	// (0x000959dd) bg_popup_window_pane_cp08_ParamLimits

0xa54e,	// (0x000959dd) bg_popup_window_pane_cp08

0x5ba7,	// (0x00091036) field_vitu_entry_pane_ParamLimits

0x5ba7,	// (0x00091036) field_vitu_entry_pane

0x5bbe,	// (0x0009104d) grid_vitu_function_pane_ParamLimits

0x5bbe,	// (0x0009104d) grid_vitu_function_pane

0x5bd9,	// (0x00091068) grid_vitu_itu_pane_ParamLimits

0x5bd9,	// (0x00091068) grid_vitu_itu_pane

0x5bf7,	// (0x00091086) cell_vitu_itu_pane_ParamLimits

0x5bf7,	// (0x00091086) cell_vitu_itu_pane

0x5c19,	// (0x000910a8) cell_vitu_function_pane_ParamLimits

0x5c19,	// (0x000910a8) cell_vitu_function_pane

0xa54e,	// (0x000959dd) bg_popup_sub_pane_cp08_ParamLimits

0xa54e,	// (0x000959dd) bg_popup_sub_pane_cp08

0x5c32,	// (0x000910c1) field_vitu_entry_pane_t1_ParamLimits

0x5c32,	// (0x000910c1) field_vitu_entry_pane_t1

0xd33a,	// (0x000987c9) field_vitu_entry_pane_t2_ParamLimits

0xd33a,	// (0x000987c9) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0009ac94) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0009ac94) field_vitu_entry_pane_t

0xd357,	// (0x000987e6) bg_button_pane_cp05_ParamLimits

0xd357,	// (0x000987e6) bg_button_pane_cp05

0x5c50,	// (0x000910df) cell_vitu_itu_pane_g1

0x5c68,	// (0x000910f7) cell_vitu_itu_pane_t1_ParamLimits

0x5c68,	// (0x000910f7) cell_vitu_itu_pane_t1

0x5c7a,	// (0x00091109) cell_vitu_itu_pane_t2_ParamLimits

0x5c7a,	// (0x00091109) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0009ac99) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0009ac99) cell_vitu_itu_pane_t

0xd365,	// (0x000987f4) bg_button_pane_cp07

0x5caf,	// (0x0009113e) cell_vitu_function_pane_g1

0x9c34,	// (0x000950c3) main_calc_pane_g1

0x0f33,	// (0x0008c3c2) aid_visual_content_pane

0x97e8,	// (0x00094c77) main_vradio_pane

0x5cb8,	// (0x00091147) main_vradio_pane_g1_ParamLimits

0x5cb8,	// (0x00091147) main_vradio_pane_g1

0xd36f,	// (0x000987fe) main_vradio_pane_g2_ParamLimits

0xd36f,	// (0x000987fe) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0009aca0) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0009aca0) main_vradio_pane_g

0x5cd1,	// (0x00091160) main_vradio_pane_t1_ParamLimits

0x5cd1,	// (0x00091160) main_vradio_pane_t1

0x5ce6,	// (0x00091175) main_vradio_pane_t2_ParamLimits

0x5ce6,	// (0x00091175) main_vradio_pane_t2

0xd37c,	// (0x0009880b) main_vradio_pane_t3_ParamLimits

0xd37c,	// (0x0009880b) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0009aca5) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0009aca5) main_vradio_pane_t

0x5cfb,	// (0x0009118a) vradio_rocker_control_pane_ParamLimits

0x5cfb,	// (0x0009118a) vradio_rocker_control_pane

0x5d0d,	// (0x0009119c) vradio_station_info_pane_ParamLimits

0x5d0d,	// (0x0009119c) vradio_station_info_pane

0xd390,	// (0x0009881f) vradio_frequency_info_pane_ParamLimits

0xd390,	// (0x0009881f) vradio_frequency_info_pane

0xcd11,	// (0x000981a0) vradio_station_info_pane_g1

0xd39f,	// (0x0009882e) vradio_station_info_pane_t1_ParamLimits

0xd39f,	// (0x0009882e) vradio_station_info_pane_t1

0xd3c1,	// (0x00098850) vradio_station_info_pane_t2_ParamLimits

0xd3c1,	// (0x00098850) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0009acac) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0009acac) vradio_station_info_pane_t

0xd3d3,	// (0x00098862) vradio_tuning_pane

0xd3db,	// (0x0009886a) vradio_rocker_control_pane_g1

0xd3e3,	// (0x00098872) vradio_rocker_control_pane_g2

0xd3eb,	// (0x0009887a) vradio_rocker_control_pane_g3

0xd3f3,	// (0x00098882) vradio_rocker_control_pane_g4

0xd3fb,	// (0x0009888a) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0009acb1) vradio_rocker_control_pane_g

0x5d1f,	// (0x000911ae) vradio_frequency_info_pane_g1

0xd403,	// (0x00098892) vradio_frequency_info_pane_t1_ParamLimits

0xd403,	// (0x00098892) vradio_frequency_info_pane_t1

0x5d29,	// (0x000911b8) vradio_tuning_pane_g1

0x5d34,	// (0x000911c3) vradio_tuning_pane_t1

0x980e,	// (0x00094c9d) area_side_right_pane_ParamLimits

0x980e,	// (0x00094c9d) area_side_right_pane

0xc8c4,	// (0x00097d53) status_small_pane_g1

0xc8cc,	// (0x00097d5b) status_small_pane_g2

0xc8d5,	// (0x00097d64) status_small_pane_g3

0xc8de,	// (0x00097d6d) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0009aa6c) status_small_pane_g

0xc8e7,	// (0x00097d76) status_small_pane_t1

0x97e8,	// (0x00094c77) main_video3_pane

0xd417,	// (0x000988a6) cams_zoom_vslider_pane

0xd41f,	// (0x000988ae) image3_wide_pane_ParamLimits

0xd41f,	// (0x000988ae) image3_wide_pane

0xd439,	// (0x000988c8) image3_wide_small_pane

0xd445,	// (0x000988d4) main_video3_pane_g1_ParamLimits

0xd445,	// (0x000988d4) main_video3_pane_g1

0xd461,	// (0x000988f0) main_video3_pane_g2_ParamLimits

0xd461,	// (0x000988f0) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0009acbc) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0009acbc) main_video3_pane_g

0xd47d,	// (0x0009890c) main_video3_pane_t1_ParamLimits

0xd47d,	// (0x0009890c) main_video3_pane_t1

0xd4a8,	// (0x00098937) main_video3_pane_t2_ParamLimits

0xd4a8,	// (0x00098937) main_video3_pane_t2

0xd4d3,	// (0x00098962) main_video3_pane_t3_ParamLimits

0xd4d3,	// (0x00098962) main_video3_pane_t3

0x0002,

0xf832,	// (0x0009acc1) main_video3_pane_t_ParamLimits

0xf832,	// (0x0009acc1) main_video3_pane_t

0xd500,	// (0x0009898f) cams_zoom_vslider_pane_g1

0xd509,	// (0x00098998) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0009acc8) cams_zoom_vslider_pane_g

0xd511,	// (0x000989a0) small_slider_vertical_pane

0xcd11,	// (0x000981a0) small_slider_vertical_pane_g1

0xcd11,	// (0x000981a0) small_slider_vertical_pane_g2

0xd519,	// (0x000989a8) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0009accd) small_slider_vertical_pane_g

0x97e8,	// (0x00094c77) main_hwr_training_pane

0xd522,	// (0x000989b1) hwr_training_instruct_pane_ParamLimits

0xd522,	// (0x000989b1) hwr_training_instruct_pane

0x5d43,	// (0x000911d2) hwr_training_navi_pane_ParamLimits

0x5d43,	// (0x000911d2) hwr_training_navi_pane

0x5d62,	// (0x000911f1) hwr_training_write_pane_ParamLimits

0x5d62,	// (0x000911f1) hwr_training_write_pane

0x97e8,	// (0x00094c77) bg_frame_shadow_pane

0xd559,	// (0x000989e8) hwr_training_write_pane_g1

0xd561,	// (0x000989f0) hwr_training_write_pane_g2

0xd569,	// (0x000989f8) hwr_training_write_pane_g3

0xd571,	// (0x00098a00) hwr_training_write_pane_g4

0xd579,	// (0x00098a08) hwr_training_write_pane_g5

0xd581,	// (0x00098a10) hwr_training_write_pane_g6

0xd589,	// (0x00098a18) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0009acd4) hwr_training_write_pane_g

0x9ee0,	// (0x0009536f) hwr_training_navi_pane_g1_ParamLimits

0x9ee0,	// (0x0009536f) hwr_training_navi_pane_g1

0x9ef2,	// (0x00095381) hwr_training_navi_pane_g2_ParamLimits

0x9ef2,	// (0x00095381) hwr_training_navi_pane_g2

0x9f04,	// (0x00095393) hwr_training_navi_pane_g3_ParamLimits

0x9f04,	// (0x00095393) hwr_training_navi_pane_g3

0x9f14,	// (0x000953a3) hwr_training_navi_pane_g4_ParamLimits

0x9f14,	// (0x000953a3) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0009ace3) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0009ace3) hwr_training_navi_pane_g

0x9f21,	// (0x000953b0) hwr_training_navi_pane_t1

0x5daa,	// (0x00091239) list_single_hwr_training_instruct_pane_ParamLimits

0x5daa,	// (0x00091239) list_single_hwr_training_instruct_pane

0xd591,	// (0x00098a20) list_single_hwr_training_instruct_pane_t1

0xcc51,	// (0x000980e0) bg_frame_shadow_pane_g1

0xd5a0,	// (0x00098a2f) bg_frame_shadow_pane_g2

0xd5a8,	// (0x00098a37) bg_frame_shadow_pane_g3

0xd5b0,	// (0x00098a3f) bg_frame_shadow_pane_g4

0xd5b8,	// (0x00098a47) bg_frame_shadow_pane_g5

0xd5c0,	// (0x00098a4f) bg_frame_shadow_pane_g6

0xd5c8,	// (0x00098a57) bg_frame_shadow_pane_g7

0xa96d,	// (0x00095dfc) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0009acee) bg_frame_shadow_pane_g

0x97e8,	// (0x00094c77) main_video_tele_dialer_pane

0x5dbf,	// (0x0009124e) aid_size_cell_video_keypad_ParamLimits

0x5dbf,	// (0x0009124e) aid_size_cell_video_keypad

0x5dd9,	// (0x00091268) grid_video_dialer_keypad_pane_ParamLimits

0x5dd9,	// (0x00091268) grid_video_dialer_keypad_pane

0x5e25,	// (0x000912b4) video_down_pane_cp_ParamLimits

0x5e25,	// (0x000912b4) video_down_pane_cp

0x5e57,	// (0x000912e6) cell_video_dialer_keypad_pane_ParamLimits

0x5e57,	// (0x000912e6) cell_video_dialer_keypad_pane

0xd5d0,	// (0x00098a5f) bg_button_pane_cp08_ParamLimits

0xd5d0,	// (0x00098a5f) bg_button_pane_cp08

0x5e79,	// (0x00091308) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5e79,	// (0x00091308) cell_video_dialer_keypad_pane_g1

0x552d,	// (0x000909bc) mup3_rocker2_pane_ParamLimits

0x552d,	// (0x000909bc) mup3_rocker2_pane

0xcd11,	// (0x000981a0) mup3_rocker2_pane_g1

0x400a,	// (0x0008f499) main_dialer2_pane

0x97e8,	// (0x00094c77) main_mp4_pane

0x9f4d,	// (0x000953dc) main_mp4_pane_g1_ParamLimits

0x9f4d,	// (0x000953dc) main_mp4_pane_g1

0x9f4d,	// (0x000953dc) main_mp4_pane_g2_ParamLimits

0x9f4d,	// (0x000953dc) main_mp4_pane_g2

0x5eb0,	// (0x0009133f) main_mp4_pane_g3_ParamLimits

0x5eb0,	// (0x0009133f) main_mp4_pane_g3

0x9f5b,	// (0x000953ea) main_mp4_pane_g4_ParamLimits

0x9f5b,	// (0x000953ea) main_mp4_pane_g4

0x9f89,	// (0x00095418) main_mp4_pane_g5_ParamLimits

0x9f89,	// (0x00095418) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0009ad0e) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0009ad0e) main_mp4_pane_g

0x9ffd,	// (0x0009548c) main_mp4_pane_t1_ParamLimits

0x9ffd,	// (0x0009548c) main_mp4_pane_t1

0xa059,	// (0x000954e8) main_mp4_pane_t2_ParamLimits

0xa059,	// (0x000954e8) main_mp4_pane_t2

0xd5dc,	// (0x00098a6b) main_mp4_pane_t3_ParamLimits

0xd5dc,	// (0x00098a6b) main_mp4_pane_t3

0xa0ab,	// (0x0009553a) main_mp4_pane_t4_ParamLimits

0xa0ab,	// (0x0009553a) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0009ad1f) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0009ad1f) main_mp4_pane_t

0xa0ef,	// (0x0009557e) mp4_progress_pane_ParamLimits

0xa0ef,	// (0x0009557e) mp4_progress_pane

0xa139,	// (0x000955c8) mp4_rocker_pane_ParamLimits

0xa139,	// (0x000955c8) mp4_rocker_pane

0xd60a,	// (0x00098a99) mp4_progress_pane_t1

0xd623,	// (0x00098ab2) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0009ad28) mp4_progress_pane_t

0xd63c,	// (0x00098acb) mup_progress_pane_cp04

0xcd11,	// (0x000981a0) mp4_rocker_pane_g1

0x5eec,	// (0x0009137b) aid_cell_size_keypad2_ParamLimits

0x5eec,	// (0x0009137b) aid_cell_size_keypad2

0x5f02,	// (0x00091391) dialer2_ne_pane_ParamLimits

0x5f02,	// (0x00091391) dialer2_ne_pane

0x5f1c,	// (0x000913ab) grid_dialer2_keypad_pane_ParamLimits

0x5f1c,	// (0x000913ab) grid_dialer2_keypad_pane

0xcaf6,	// (0x00097f85) bg_popup_call_pane_cp07_ParamLimits

0xcaf6,	// (0x00097f85) bg_popup_call_pane_cp07

0x5f38,	// (0x000913c7) dialer2_ne_pane_t1_ParamLimits

0x5f38,	// (0x000913c7) dialer2_ne_pane_t1

0x5f73,	// (0x00091402) cell_dialer2_keypad_pane_ParamLimits

0x5f73,	// (0x00091402) cell_dialer2_keypad_pane

0xd661,	// (0x00098af0) bg_button_pane_pane_cp04_ParamLimits

0xd661,	// (0x00098af0) bg_button_pane_pane_cp04

0x5f95,	// (0x00091424) cell_dialer2_keypad_pane_g1_ParamLimits

0x5f95,	// (0x00091424) cell_dialer2_keypad_pane_g1

0x1f43,	// (0x0008d3d2) aid_placing_vt_set_content_ParamLimits

0x1f43,	// (0x0008d3d2) aid_placing_vt_set_content

0x1f6b,	// (0x0008d3fa) aid_placing_vt_set_title_ParamLimits

0x1f6b,	// (0x0008d3fa) aid_placing_vt_set_title

0x97e8,	// (0x00094c77) main_image3_pane

0x605b,	// (0x000914ea) area_side_right_pane_cp01_ParamLimits

0x605b,	// (0x000914ea) area_side_right_pane_cp01

0x9f4d,	// (0x000953dc) main_image3_pane_g1_ParamLimits

0x9f4d,	// (0x000953dc) main_image3_pane_g1

0x6072,	// (0x00091501) main_image3_pane_g2_ParamLimits

0x6072,	// (0x00091501) main_image3_pane_g2

0x609a,	// (0x00091529) main_image3_pane_g3_ParamLimits

0x609a,	// (0x00091529) main_image3_pane_g3

0x60c4,	// (0x00091553) main_image3_pane_g4_ParamLimits

0x60c4,	// (0x00091553) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0009ad37) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0009ad37) main_image3_pane_g

0x60ee,	// (0x0009157d) main_image3_pane_t1_ParamLimits

0x60ee,	// (0x0009157d) main_image3_pane_t1

0x6146,	// (0x000915d5) main_image3_pane_t2_ParamLimits

0x6146,	// (0x000915d5) main_image3_pane_t2

0x6198,	// (0x00091627) main_image3_pane_t3_ParamLimits

0x6198,	// (0x00091627) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0009ad40) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0009ad40) main_image3_pane_t

0xa54e,	// (0x000959dd) grid_sctrl_middle_pane_cp01_ParamLimits

0xa54e,	// (0x000959dd) grid_sctrl_middle_pane_cp01

0x6220,	// (0x000916af) cell_sctrl_middle_pane_cp01_ParamLimits

0x6220,	// (0x000916af) cell_sctrl_middle_pane_cp01

0x623d,	// (0x000916cc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x623d,	// (0x000916cc) cell_sctrl_middle_pane_cp01_g1

0x97e8,	// (0x00094c77) main_call4_pane

0x6253,	// (0x000916e2) aid_size_button_call4_ParamLimits

0x6253,	// (0x000916e2) aid_size_button_call4

0x6286,	// (0x00091715) call4_windows_pane_ParamLimits

0x6286,	// (0x00091715) call4_windows_pane

0x62a5,	// (0x00091734) grid_call4_button_pane_ParamLimits

0x62a5,	// (0x00091734) grid_call4_button_pane

0x62d8,	// (0x00091767) call4_windows_conf_pane

0x62ef,	// (0x0009177e) popup_call4_audio_first_window_ParamLimits

0x62ef,	// (0x0009177e) popup_call4_audio_first_window

0x633f,	// (0x000917ce) popup_call4_audio_second_window_ParamLimits

0x633f,	// (0x000917ce) popup_call4_audio_second_window

0x6356,	// (0x000917e5) popup_call4_audio_wait_window_ParamLimits

0x6356,	// (0x000917e5) popup_call4_audio_wait_window

0x6364,	// (0x000917f3) cell_call4_button_pane_ParamLimits

0x6364,	// (0x000917f3) cell_call4_button_pane

0x6389,	// (0x00091818) bg_button_pane_cp09_ParamLimits

0x6389,	// (0x00091818) bg_button_pane_cp09

0x6395,	// (0x00091824) cell_call4_button_pane_g1_ParamLimits

0x6395,	// (0x00091824) cell_call4_button_pane_g1

0x63bb,	// (0x0009184a) cell_call4_button_pane_t1_ParamLimits

0x63bb,	// (0x0009184a) cell_call4_button_pane_t1

0xd675,	// (0x00098b04) popup_call4_audio_conf_window_ParamLimits

0xd675,	// (0x00098b04) popup_call4_audio_conf_window

0x558d,	// (0x00090a1c) mup3_progress_pane_t1_ParamLimits

0x55ac,	// (0x00090a3b) mup3_progress_pane_t2_ParamLimits

0xd00f,	// (0x0009849e) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0009ac10) mup3_progress_pane_t_ParamLimits

0xd02c,	// (0x000984bb) mup_progress_pane_cp03_ParamLimits

0x5b89,	// (0x00091018) mup3_control_keys_pane_g4_copy1

0xa11d,	// (0x000955ac) mp4_rocker2_pane_ParamLimits

0xa11d,	// (0x000955ac) mp4_rocker2_pane

0xd689,	// (0x00098b18) mp4_rocker2_pane_g1

0xd691,	// (0x00098b20) mp4_rocker2_pane_g2

0xa1bd,	// (0x0009564c) mp4_rocker2_pane_g3

0xa1c5,	// (0x00095654) mp4_rocker2_pane_g4

0xa1cd,	// (0x0009565c) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0009ad49) mp4_rocker2_pane_g

0x97e8,	// (0x00094c77) main_camera4_pane

0x97e8,	// (0x00094c77) main_video4_pane

0x5df3,	// (0x00091282) main_video_tele_dialer_pane_t1_ParamLimits

0x5df3,	// (0x00091282) main_video_tele_dialer_pane_t1

0x5e0c,	// (0x0009129b) main_video_tele_dialer_pane_t2_ParamLimits

0x5e0c,	// (0x0009129b) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0009acff) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0009acff) main_video_tele_dialer_pane_t

0x63f9,	// (0x00091888) cam4_autofocus_pane_ParamLimits

0x63f9,	// (0x00091888) cam4_autofocus_pane

0x640f,	// (0x0009189e) cam4_image_uncrop_pane_ParamLimits

0x640f,	// (0x0009189e) cam4_image_uncrop_pane

0x6429,	// (0x000918b8) cam4_indicators_pane_ParamLimits

0x6429,	// (0x000918b8) cam4_indicators_pane

0x6454,	// (0x000918e3) main_camera4_pane_g1_ParamLimits

0x6454,	// (0x000918e3) main_camera4_pane_g1

0x6466,	// (0x000918f5) main_camera4_pane_g2_ParamLimits

0x6466,	// (0x000918f5) main_camera4_pane_g2

0x6479,	// (0x00091908) main_camera4_pane_g3_ParamLimits

0x6479,	// (0x00091908) main_camera4_pane_g3

0x648c,	// (0x0009191b) main_camera4_pane_g4_ParamLimits

0x648c,	// (0x0009191b) main_camera4_pane_g4

0x649f,	// (0x0009192e) main_camera4_pane_g5_ParamLimits

0x649f,	// (0x0009192e) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0009ad54) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0009ad54) main_camera4_pane_g

0x64c3,	// (0x00091952) main_camera4_pane_t1_ParamLimits

0x64c3,	// (0x00091952) main_camera4_pane_t1

0xcf74,	// (0x00098403) bg_tb_trans_pane_cp06

0xa1f9,	// (0x00095688) cam4_indicators_pane_g1

0xa20a,	// (0x00095699) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0009ad6f) cam4_indicators_pane_g

0xa228,	// (0x000956b7) cam4_indicators_pane_t1

0x6527,	// (0x000919b6) main_video4_pane_g1_ParamLimits

0x6527,	// (0x000919b6) main_video4_pane_g1

0x6536,	// (0x000919c5) main_video4_pane_g2_ParamLimits

0x6536,	// (0x000919c5) main_video4_pane_g2

0x6545,	// (0x000919d4) main_video4_pane_g3_ParamLimits

0x6545,	// (0x000919d4) main_video4_pane_g3

0x6554,	// (0x000919e3) main_video4_pane_g4_ParamLimits

0x6554,	// (0x000919e3) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0009ad76) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0009ad76) main_video4_pane_g

0x6572,	// (0x00091a01) vid4_indicators_pane_ParamLimits

0x6572,	// (0x00091a01) vid4_indicators_pane

0x65a0,	// (0x00091a2f) video4_image_uncrop_cif_pane_ParamLimits

0x65a0,	// (0x00091a2f) video4_image_uncrop_cif_pane

0x65ba,	// (0x00091a49) video4_image_uncrop_nhd_pane_ParamLimits

0x65ba,	// (0x00091a49) video4_image_uncrop_nhd_pane

0x640f,	// (0x0009189e) video4_image_uncrop_vga_pane_ParamLimits

0x640f,	// (0x0009189e) video4_image_uncrop_vga_pane

0xa54e,	// (0x000959dd) bg_tb_trans_pane_cp07

0xa254,	// (0x000956e3) vid4_indicators_pane_g1

0xa268,	// (0x000956f7) vid4_indicators_pane_g2

0xa27c,	// (0x0009570b) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0009ad81) vid4_indicators_pane_g

0xa2ab,	// (0x0009573a) vid4_indicators_pane_t1

0x65ce,	// (0x00091a5d) cam4_autofocus_pane_g1

0x65d6,	// (0x00091a65) cam4_autofocus_pane_g2

0x65de,	// (0x00091a6d) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0009ad8c) cam4_autofocus_pane_g

0x65e6,	// (0x00091a75) cam4_autofocus_pane_g3_copy1

0x5e3b,	// (0x000912ca) video_down_pane_cp_t1

0x5e49,	// (0x000912d8) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0009ad04) video_down_pane_cp_t

0xa54e,	// (0x000959dd) popup_vitu2_window_ParamLimits

0xa54e,	// (0x000959dd) popup_vitu2_window

0x65ee,	// (0x00091a7d) aid_size_cell2_itu2_ParamLimits

0x65ee,	// (0x00091a7d) aid_size_cell2_itu2

0x6614,	// (0x00091aa3) aid_size_cell_itu2_ParamLimits

0x6614,	// (0x00091aa3) aid_size_cell_itu2

0x6670,	// (0x00091aff) bg_popup_window_pane_cp09_ParamLimits

0x6670,	// (0x00091aff) bg_popup_window_pane_cp09

0x667e,	// (0x00091b0d) field_vitu2_entry_pane_ParamLimits

0x667e,	// (0x00091b0d) field_vitu2_entry_pane

0x66a4,	// (0x00091b33) grid_vitu2_function_pane_ParamLimits

0x66a4,	// (0x00091b33) grid_vitu2_function_pane

0x66f5,	// (0x00091b84) grid_vitu2_itu_pane_ParamLimits

0x66f5,	// (0x00091b84) grid_vitu2_itu_pane

0x678d,	// (0x00091c1c) cell_vitu2_itu_pane_ParamLimits

0x678d,	// (0x00091c1c) cell_vitu2_itu_pane

0x67b9,	// (0x00091c48) cell_vitu2_function_pane_ParamLimits

0x67b9,	// (0x00091c48) cell_vitu2_function_pane

0xd699,	// (0x00098b28) bg_popup_call_pane_cp08_ParamLimits

0xd699,	// (0x00098b28) bg_popup_call_pane_cp08

0xd6b0,	// (0x00098b3f) field_vitu2_entry_pane_g1

0xd6bc,	// (0x00098b4b) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0009ad93) field_vitu2_entry_pane_g

0x0323,	// (0x0008b7b2) field_vitu2_entry_pane_t1_ParamLimits

0x0323,	// (0x0008b7b2) field_vitu2_entry_pane_t1

0x67f8,	// (0x00091c87) field_vitu2_entry_pane_t2_ParamLimits

0x67f8,	// (0x00091c87) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0009ad9a) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0009ad9a) field_vitu2_entry_pane_t

0x6815,	// (0x00091ca4) bg_button_pane_cp010_ParamLimits

0x6815,	// (0x00091ca4) bg_button_pane_cp010

0xa2c2,	// (0x00095751) cell_vitu2_itu_pane_g1

0x6831,	// (0x00091cc0) cell_vitu2_itu_pane_t1_ParamLimits

0x6831,	// (0x00091cc0) cell_vitu2_itu_pane_t1

0x0351,	// (0x0008b7e0) cell_vitu2_itu_pane_t2_ParamLimits

0x0351,	// (0x0008b7e0) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0009ada4) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0009ada4) cell_vitu2_itu_pane_t

0xa54e,	// (0x000959dd) bg_button_pane_cp011

0x688f,	// (0x00091d1e) cell_vitu2_function_pane_g1

0x97e8,	// (0x00094c77) main_myfav_hc_pane

0x61e8,	// (0x00091677) popup_image3_note_pane_ParamLimits

0x61e8,	// (0x00091677) popup_image3_note_pane

0x6204,	// (0x00091693) popup_image3_tool_bar_pane_ParamLimits

0x6204,	// (0x00091693) popup_image3_tool_bar_pane

0x03df,	// (0x0008b86e) cell_vitu2_itu_pane_t3_ParamLimits

0x03df,	// (0x0008b86e) cell_vitu2_itu_pane_t3

0x97e8,	// (0x00094c77) bg_popup_trans_pane

0xd6de,	// (0x00098b6d) grid_image3_tool_bar_pane

0xd6e8,	// (0x00098b77) bg_popup_trans_pane_g1

0xacd2,	// (0x00096161) bg_popup_trans_pane_g2

0xd6f0,	// (0x00098b7f) bg_popup_trans_pane_g3

0xd6f8,	// (0x00098b87) bg_popup_trans_pane_g4

0xd700,	// (0x00098b8f) bg_popup_trans_pane_g5

0xd708,	// (0x00098b97) bg_popup_trans_pane_g6

0xd710,	// (0x00098b9f) bg_popup_trans_pane_g7

0xd718,	// (0x00098ba7) bg_popup_trans_pane_g8

0xacb2,	// (0x00096141) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0009adab) bg_popup_trans_pane_g

0xd720,	// (0x00098baf) cell_image3_tool_bar_pane_ParamLimits

0xd720,	// (0x00098baf) cell_image3_tool_bar_pane

0xcd11,	// (0x000981a0) cell_image3_tool_bar_pane_g1

0x97e8,	// (0x00094c77) bg_popup_trans_pane_cp1

0xd734,	// (0x00098bc3) popup_image3_note_pane_t1

0xd742,	// (0x00098bd1) popup_image3_note_pane_t2

0xd750,	// (0x00098bdf) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0009adbe) popup_image3_note_pane_t

0xd75e,	// (0x00098bed) popup_image3_note_pane_t3_copy1

0x68a3,	// (0x00091d32) bg_myfav_hc_instruction_pane_ParamLimits

0x68a3,	// (0x00091d32) bg_myfav_hc_instruction_pane

0x68b7,	// (0x00091d46) cell_myfav_contact_pane_ParamLimits

0x68b7,	// (0x00091d46) cell_myfav_contact_pane

0x68d5,	// (0x00091d64) cell_myfav_contact_pane_cp1_ParamLimits

0x68d5,	// (0x00091d64) cell_myfav_contact_pane_cp1

0x68ed,	// (0x00091d7c) cell_myfav_contact_pane_cp2_ParamLimits

0x68ed,	// (0x00091d7c) cell_myfav_contact_pane_cp2

0x6905,	// (0x00091d94) cell_myfav_contact_pane_cp3_ParamLimits

0x6905,	// (0x00091d94) cell_myfav_contact_pane_cp3

0x691c,	// (0x00091dab) cell_myfav_contact_pane_cp4_ParamLimits

0x691c,	// (0x00091dab) cell_myfav_contact_pane_cp4

0x6934,	// (0x00091dc3) cell_myfav_contact_pane_cp5_ParamLimits

0x6934,	// (0x00091dc3) cell_myfav_contact_pane_cp5

0x6948,	// (0x00091dd7) cell_myfav_contact_pane_cp6_ParamLimits

0x6948,	// (0x00091dd7) cell_myfav_contact_pane_cp6

0x695e,	// (0x00091ded) cell_myfav_contact_pane_cp7_ParamLimits

0x695e,	// (0x00091ded) cell_myfav_contact_pane_cp7

0xd76c,	// (0x00098bfb) listscroll_gen_pane_cp05

0x6978,	// (0x00091e07) main_myfav_hc_pane_g1_ParamLimits

0x6978,	// (0x00091e07) main_myfav_hc_pane_g1

0x6992,	// (0x00091e21) main_myfav_hc_pane_g2_ParamLimits

0x6992,	// (0x00091e21) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0009adc5) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0009adc5) main_myfav_hc_pane_g

0x69c4,	// (0x00091e53) main_myfav_hc_pane_t1_ParamLimits

0x69c4,	// (0x00091e53) main_myfav_hc_pane_t1

0xd775,	// (0x00098c04) main_myfav_hc_pane_t2_ParamLimits

0xd775,	// (0x00098c04) main_myfav_hc_pane_t2

0xd787,	// (0x00098c16) main_myfav_hc_pane_t3_ParamLimits

0xd787,	// (0x00098c16) main_myfav_hc_pane_t3

0x69db,	// (0x00091e6a) main_myfav_hc_pane_t4_ParamLimits

0x69db,	// (0x00091e6a) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0009adcc) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0009adcc) main_myfav_hc_pane_t

0xcd11,	// (0x000981a0) bg_myfav_hc_instruction_pane_g1

0xd799,	// (0x00098c28) cell_myfav_contact_pane_g1_ParamLimits

0xd799,	// (0x00098c28) cell_myfav_contact_pane_g1

0xd799,	// (0x00098c28) cell_myfav_contact_pane_g2_ParamLimits

0xd799,	// (0x00098c28) cell_myfav_contact_pane_g2

0xd7a5,	// (0x00098c34) cell_myfav_contact_pane_g3_ParamLimits

0xd7a5,	// (0x00098c34) cell_myfav_contact_pane_g3

0xcff9,	// (0x00098488) cell_myfav_contact_pane_g4_ParamLimits

0xcff9,	// (0x00098488) cell_myfav_contact_pane_g4

0xd7b2,	// (0x00098c41) cell_myfav_contact_pane_g5_ParamLimits

0xd7b2,	// (0x00098c41) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0009add7) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0009add7) cell_myfav_contact_pane_g

0x69ac,	// (0x00091e3b) main_myfav_hc_pane_g3_ParamLimits

0x69ac,	// (0x00091e3b) main_myfav_hc_pane_g3

0x107e,	// (0x0008c50d) popup_adpt_find_window

0x6a03,	// (0x00091e92) afind_page_pane_ParamLimits

0x6a03,	// (0x00091e92) afind_page_pane

0x6a18,	// (0x00091ea7) aid_size_cell_afind_ParamLimits

0x6a18,	// (0x00091ea7) aid_size_cell_afind

0x6a36,	// (0x00091ec5) bg_popup_sub_pane_cp09_ParamLimits

0x6a36,	// (0x00091ec5) bg_popup_sub_pane_cp09

0x6a43,	// (0x00091ed2) find_pane_cp01_ParamLimits

0x6a43,	// (0x00091ed2) find_pane_cp01

0xd7be,	// (0x00098c4d) grid_afind_control_pane_ParamLimits

0xd7be,	// (0x00098c4d) grid_afind_control_pane

0x6a50,	// (0x00091edf) grid_afind_pane_ParamLimits

0x6a50,	// (0x00091edf) grid_afind_pane

0x6a72,	// (0x00091f01) cell_afind_pane_ParamLimits

0x6a72,	// (0x00091f01) cell_afind_pane

0xcd11,	// (0x000981a0) afind_page_pane_g1

0x6ad9,	// (0x00091f68) afind_page_pane_g2

0x6ae2,	// (0x00091f71) afind_page_pane_g3

0x0002,

0xf953,	// (0x0009ade2) afind_page_pane_g

0x6aeb,	// (0x00091f7a) afind_page_pane_t1

0xd7d2,	// (0x00098c61) cell_afind_grid_control_pane_ParamLimits

0xd7d2,	// (0x00098c61) cell_afind_grid_control_pane

0xd661,	// (0x00098af0) bg_button_pane_cp69_ParamLimits

0xd661,	// (0x00098af0) bg_button_pane_cp69

0x6b0b,	// (0x00091f9a) cell_afind_pane_g1_ParamLimits

0x6b0b,	// (0x00091f9a) cell_afind_pane_g1

0x6b18,	// (0x00091fa7) cell_afind_pane_t1_ParamLimits

0x6b18,	// (0x00091fa7) cell_afind_pane_t1

0xaacb,	// (0x00095f5a) bg_button_pane_cp72

0xd7e1,	// (0x00098c70) cell_afind_grid_control_pane_g1

0x3aca,	// (0x0008ef59) aid_image_placing_area_ParamLimits

0x3aca,	// (0x0008ef59) aid_image_placing_area

0xd322,	// (0x000987b1) field_vitu_entry_pane_g1_ParamLimits

0xd322,	// (0x000987b1) field_vitu_entry_pane_g1

0xd32e,	// (0x000987bd) field_vitu_entry_pane_g2_ParamLimits

0xd32e,	// (0x000987bd) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0009ac8f) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0009ac8f) field_vitu_entry_pane_g

0x5c50,	// (0x000910df) cell_vitu_itu_pane_g1_ParamLimits

0x5c92,	// (0x00091121) cell_vitu_itu_pane_t3_ParamLimits

0x5c92,	// (0x00091121) cell_vitu_itu_pane_t3

0xd60a,	// (0x00098a99) mp4_progress_pane_t1_ParamLimits

0xd623,	// (0x00098ab2) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0009ad28) mp4_progress_pane_t_ParamLimits

0xd63c,	// (0x00098acb) mup_progress_pane_cp04_ParamLimits

0x69ef,	// (0x00091e7e) main_myfav_hc_pane_t5_ParamLimits

0x69ef,	// (0x00091e7e) main_myfav_hc_pane_t5

0x0f47,	// (0x0008c3d6) aid_zoom_text_primary

0x107e,	// (0x0008c50d) popup_adpt_find_window_ParamLimits

0xa54e,	// (0x000959dd) main_cam_set_pane

0x6440,	// (0x000918cf) cam4_zoom_pane_ParamLimits

0x6440,	// (0x000918cf) cam4_zoom_pane

0x6b2a,	// (0x00091fb9) main_cam_set_pane_g1_ParamLimits

0x6b2a,	// (0x00091fb9) main_cam_set_pane_g1

0x6b38,	// (0x00091fc7) main_cam_set_pane_g2_ParamLimits

0x6b38,	// (0x00091fc7) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0009ade9) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0009ade9) main_cam_set_pane_g

0x6b59,	// (0x00091fe8) main_cam_set_pane_t1_ParamLimits

0x6b59,	// (0x00091fe8) main_cam_set_pane_t1

0x6b74,	// (0x00092003) main_cset_listscroll_pane_ParamLimits

0x6b74,	// (0x00092003) main_cset_listscroll_pane

0x6b94,	// (0x00092023) main_cset_slider_pane_ParamLimits

0x6b94,	// (0x00092023) main_cset_slider_pane

0xd7f2,	// (0x00098c81) main_cset_list_pane_ParamLimits

0xd7f2,	// (0x00098c81) main_cset_list_pane

0xd802,	// (0x00098c91) scroll_pane_cp028

0x6bba,	// (0x00092049) aid_area_touch_slider

0x6bd6,	// (0x00092065) cset_slider_pane

0x6c00,	// (0x0009208f) main_cset_slider_pane_g1

0x6c15,	// (0x000920a4) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0009adee) main_cset_slider_pane_g

0xd83b,	// (0x00098cca) main_cset_slider_pane_t1

0x6cd1,	// (0x00092160) main_cset_slider_pane_t2

0x6ceb,	// (0x0009217a) main_cset_slider_pane_t3

0x6d05,	// (0x00092194) main_cset_slider_pane_t4

0x6d1f,	// (0x000921ae) main_cset_slider_pane_t5

0x6d39,	// (0x000921c8) main_cset_slider_pane_t6

0x6d4e,	// (0x000921dd) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0009ae13) main_cset_slider_pane_t

0x6e52,	// (0x000922e1) cset_list_set_pane_ParamLimits

0x6e52,	// (0x000922e1) cset_list_set_pane

0x6e64,	// (0x000922f3) aid_position_infowindow_above

0x6e6c,	// (0x000922fb) aid_position_infowindow_below

0xa2d4,	// (0x00095763) cset_list_set_pane_g1_ParamLimits

0xa2d4,	// (0x00095763) cset_list_set_pane_g1

0x6e74,	// (0x00092303) cset_list_set_pane_g3_ParamLimits

0x6e74,	// (0x00092303) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0009ae32) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0009ae32) cset_list_set_pane_g

0x6e83,	// (0x00092312) cset_list_set_pane_t1_ParamLimits

0x6e83,	// (0x00092312) cset_list_set_pane_t1

0xa54e,	// (0x000959dd) list_highlight_pane_cp021_ParamLimits

0xa54e,	// (0x000959dd) list_highlight_pane_cp021

0xb63b,	// (0x00096aca) cset_slider_pane_g1

0xb64d,	// (0x00096adc) cset_slider_pane_g2

0xb644,	// (0x00096ad3) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0009ae37) cset_slider_pane_g

0xa2e0,	// (0x0009576f) aid_area_touch_cam4_zoom

0xa2e8,	// (0x00095777) cam4_zoom_cont_pane

0xa2f0,	// (0x0009577f) cam4_zoom_pane_g1

0xa2f8,	// (0x00095787) cam4_zoom_pane_g2

0x6e98,	// (0x00092327) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0009ae3e) cam4_zoom_pane_g

0xdb57,	// (0x00098fe6) cam4_zoom_cont_pane_g1

0xdb60,	// (0x00098fef) cam4_zoom_cont_pane_g2

0xdb69,	// (0x00098ff8) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0009ae45) cam4_zoom_cont_pane_g

0x6271,	// (0x00091700) call4_image_pane_ParamLimits

0x6271,	// (0x00091700) call4_image_pane

0x62d8,	// (0x00091767) call4_windows_conf_pane_ParamLimits

0x631d,	// (0x000917ac) popup_call4_audio_in_window_ParamLimits

0x631d,	// (0x000917ac) popup_call4_audio_in_window

0x97e8,	// (0x00094c77) bg_popup_call2_act_pane_cp02

0xd66d,	// (0x00098afc) call4_list_conf_pane

0xcd11,	// (0x000981a0) call4_image_pane_g1

0xcd11,	// (0x000981a0) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0009ab50) call4_image_pane_g

0xd8db,	// (0x00098d6a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8db,	// (0x00098d6a) list_single_graphic_popup_conf4_pane

0x97e8,	// (0x00094c77) list_highlight_pane_cp022

0xd8ee,	// (0x00098d7d) list_single_graphic_popup_conf4_pane_g1

0xb1ec,	// (0x0009667b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0009ae4c) list_single_graphic_popup_conf4_pane_g

0xd8f6,	// (0x00098d85) list_single_graphic_popup_conf4_pane_t1

0x208f,	// (0x0008d51e) popup_vtel_slider_window_ParamLimits

0x208f,	// (0x0008d51e) popup_vtel_slider_window

0xd64f,	// (0x00098ade) dialer2_ne_pane_t2_ParamLimits

0xd64f,	// (0x00098ade) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0009ad2d) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0009ad2d) dialer2_ne_pane_t

0xcaf6,	// (0x00097f85) bg_popup_sub_pane_cp010_ParamLimits

0xcaf6,	// (0x00097f85) bg_popup_sub_pane_cp010

0x6ea0,	// (0x0009232f) popup_vtel_slider_window_g1_ParamLimits

0x6ea0,	// (0x0009232f) popup_vtel_slider_window_g1

0x6eb3,	// (0x00092342) popup_vtel_slider_window_g2_ParamLimits

0x6eb3,	// (0x00092342) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0009ae51) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0009ae51) popup_vtel_slider_window_g

0x6f09,	// (0x00092398) vtel_slider_pane_ParamLimits

0x6f09,	// (0x00092398) vtel_slider_pane

0x6f2b,	// (0x000923ba) vtel_slider_pane_g1_ParamLimits

0x6f2b,	// (0x000923ba) vtel_slider_pane_g1

0x6f3f,	// (0x000923ce) vtel_slider_pane_g2_ParamLimits

0x6f3f,	// (0x000923ce) vtel_slider_pane_g2

0x6f57,	// (0x000923e6) vtel_slider_pane_g3_ParamLimits

0x6f57,	// (0x000923e6) vtel_slider_pane_g3

0x6f2b,	// (0x000923ba) vtel_slider_pane_g4_ParamLimits

0x6f2b,	// (0x000923ba) vtel_slider_pane_g4

0x6f6d,	// (0x000923fc) vtel_slider_pane_g5_ParamLimits

0x6f6d,	// (0x000923fc) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0009ae5a) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0009ae5a) vtel_slider_pane_g

0xa54e,	// (0x000959dd) main_gallery2_pane

0x6640,	// (0x00091acf) aid_size_row_itut2_dropdow_list_ParamLimits

0x6640,	// (0x00091acf) aid_size_row_itut2_dropdow_list

0x66cc,	// (0x00091b5b) grid_vitu2_function_top_pane_ParamLimits

0x66cc,	// (0x00091b5b) grid_vitu2_function_top_pane

0x6736,	// (0x00091bc5) popup_vitu2_dropdown_list_window_ParamLimits

0x6736,	// (0x00091bc5) popup_vitu2_dropdown_list_window

0x675f,	// (0x00091bee) popup_vitu2_match_list_window

0x6f83,	// (0x00092412) cell_vitu2_function_top_pane_ParamLimits

0x6f83,	// (0x00092412) cell_vitu2_function_top_pane

0x6f9b,	// (0x0009242a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f9b,	// (0x0009242a) cell_vitu2_function_top_pane_cp01

0x6fb7,	// (0x00092446) cell_vitu2_function_top_wide_pane_ParamLimits

0x6fb7,	// (0x00092446) cell_vitu2_function_top_wide_pane

0xa54e,	// (0x000959dd) bg_button_pane_cp012

0x6fd3,	// (0x00092462) cell_vitu2_function_top_pane_g1

0xa300,	// (0x0009578f) bg_button_pane_cp013_ParamLimits

0xa300,	// (0x0009578f) bg_button_pane_cp013

0x6fe7,	// (0x00092476) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6fe7,	// (0x00092476) cell_vitu2_function_top_wide_pane_g1

0xa54e,	// (0x000959dd) bg_popup_sub_pane_cp20

0x6fff,	// (0x0009248e) list_vitu2_match_list_pane

0xd6e8,	// (0x00098b77) bg_popup_sub_pane_cp20_g1

0xd6f0,	// (0x00098b7f) bg_popup_sub_pane_cp20_g2

0xacd2,	// (0x00096161) bg_popup_sub_pane_cp20_g3

0xd6f8,	// (0x00098b87) bg_popup_sub_pane_cp20_g4

0xacb2,	// (0x00096141) bg_popup_sub_pane_cp20_g5

0xd90c,	// (0x00098d9b) bg_popup_sub_pane_cp20_g6

0xd708,	// (0x00098b97) bg_popup_sub_pane_cp20_g7

0xd710,	// (0x00098b9f) bg_popup_sub_pane_cp20_g8

0xd718,	// (0x00098ba7) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0009ae65) bg_popup_sub_pane_cp20_g

0xa31c,	// (0x000957ab) list_vitu2_match_list_item_pane_ParamLimits

0xa31c,	// (0x000957ab) list_vitu2_match_list_item_pane

0xa32e,	// (0x000957bd) list_vitu2_match_list_item_pane_t1

0x97e8,	// (0x00094c77) bg_popup_sub_pane_cp21

0xb114,	// (0x000965a3) grid_vitu2_dropdown_list_pane

0x701d,	// (0x000924ac) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x701d,	// (0x000924ac) cell_vitu2_dropdown_list_char_pane

0x703e,	// (0x000924cd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x703e,	// (0x000924cd) cell_vitu2_dropdown_list_ctrl_pane

0xd914,	// (0x00098da3) cell_vitu2_dropdown_list_char_pane_g1

0xd91d,	// (0x00098dac) cell_vitu2_dropdown_list_char_pane_g2

0xd926,	// (0x00098db5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0009ae82) cell_vitu2_dropdown_list_char_pane_g

0x706a,	// (0x000924f9) cell_vitu2_dropdown_list_char_pane_t1

0x7078,	// (0x00092507) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7078,	// (0x00092507) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7085,	// (0x00092514) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7085,	// (0x00092514) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7092,	// (0x00092521) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7092,	// (0x00092521) cell_vitu2_dropdown_list_ctrl_pane_g3

0x709f,	// (0x0009252e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x709f,	// (0x0009252e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcf74,	// (0x00098403) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcf74,	// (0x00098403) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0009ae89) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0009ae89) cell_vitu2_dropdown_list_ctrl_pane_g

0x70bb,	// (0x0009254a) aid_size_cell_gallery2_ParamLimits

0x70bb,	// (0x0009254a) aid_size_cell_gallery2

0x70d9,	// (0x00092568) grid_gallery2_pane_ParamLimits

0x70d9,	// (0x00092568) grid_gallery2_pane

0x70f3,	// (0x00092582) scroll_pane_cp029_ParamLimits

0x70f3,	// (0x00092582) scroll_pane_cp029

0x7104,	// (0x00092593) cell_gallery2_pane_ParamLimits

0x7104,	// (0x00092593) cell_gallery2_pane

0xd92f,	// (0x00098dbe) cell_gallery2_pane_g2

0x7163,	// (0x000925f2) cell_gallery2_pane_g3

0xd937,	// (0x00098dc6) cell_gallery2_pane_g4

0xd93f,	// (0x00098dce) cell_gallery2_pane_g5

0xaa79,	// (0x00095f08) grid_highlight_pane_cp10

0x675f,	// (0x00091bee) popup_vitu2_match_list_window_ParamLimits

0x6776,	// (0x00091c05) popup_vitu2_query_window_ParamLimits

0x6776,	// (0x00091c05) popup_vitu2_query_window

0x97e8,	// (0x00094c77) bg_vitu2_candi_button_pane

0xd914,	// (0x00098da3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd91d,	// (0x00098dac) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd926,	// (0x00098db5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x049b,	// (0x0008b92a) bg_button_pane_cp015

0x716b,	// (0x000925fa) bg_button_pane_cp016

0x717e,	// (0x0009260d) bg_button_pane_cp017

0xc909,	// (0x00097d98) bg_popup_sub_pane_cp22

0xd947,	// (0x00098dd6) popup_vitu2_query_window_g1

0x04ce,	// (0x0008b95d) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0009ae94) popup_vitu2_query_window_g

0x04ed,	// (0x0008b97c) popup_vitu2_query_window_t1_ParamLimits

0x04ed,	// (0x0008b97c) popup_vitu2_query_window_t1

0x0522,	// (0x0008b9b1) popup_vitu2_query_window_t2_ParamLimits

0x0522,	// (0x0008b9b1) popup_vitu2_query_window_t2

0x0534,	// (0x0008b9c3) popup_vitu2_query_window_t3_ParamLimits

0x0534,	// (0x0008b9c3) popup_vitu2_query_window_t3

0x71a2,	// (0x00092631) popup_vitu2_query_window_t4_ParamLimits

0x71a2,	// (0x00092631) popup_vitu2_query_window_t4

0x71c3,	// (0x00092652) popup_vitu2_query_window_t5_ParamLimits

0x71c3,	// (0x00092652) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0009ae9b) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0009ae9b) popup_vitu2_query_window_t

0xd7ea,	// (0x00098c79) main_cset_text_pane

0x6bba,	// (0x00092049) aid_area_touch_slider_ParamLimits

0x6bd6,	// (0x00092065) cset_slider_pane_ParamLimits

0x6c00,	// (0x0009208f) main_cset_slider_pane_g1_ParamLimits

0x6c15,	// (0x000920a4) main_cset_slider_pane_g2_ParamLimits

0xd80b,	// (0x00098c9a) main_cset_slider_pane_g3_ParamLimits

0xd80b,	// (0x00098c9a) main_cset_slider_pane_g3

0x6c2a,	// (0x000920b9) main_cset_slider_pane_g4_ParamLimits

0x6c2a,	// (0x000920b9) main_cset_slider_pane_g4

0x6c39,	// (0x000920c8) main_cset_slider_pane_g5_ParamLimits

0x6c39,	// (0x000920c8) main_cset_slider_pane_g5

0x6c45,	// (0x000920d4) main_cset_slider_pane_g6_ParamLimits

0x6c45,	// (0x000920d4) main_cset_slider_pane_g6

0xf95f,	// (0x0009adee) main_cset_slider_pane_g_ParamLimits

0xd83b,	// (0x00098cca) main_cset_slider_pane_t1_ParamLimits

0x6cd1,	// (0x00092160) main_cset_slider_pane_t2_ParamLimits

0x6ceb,	// (0x0009217a) main_cset_slider_pane_t3_ParamLimits

0x6d05,	// (0x00092194) main_cset_slider_pane_t4_ParamLimits

0x6d1f,	// (0x000921ae) main_cset_slider_pane_t5_ParamLimits

0x6d39,	// (0x000921c8) main_cset_slider_pane_t6_ParamLimits

0x6d4e,	// (0x000921dd) main_cset_slider_pane_t7_ParamLimits

0x6d78,	// (0x00092207) main_cset_slider_pane_t8_ParamLimits

0x6d78,	// (0x00092207) main_cset_slider_pane_t8

0x6da0,	// (0x0009222f) main_cset_slider_pane_t9_ParamLimits

0x6da0,	// (0x0009222f) main_cset_slider_pane_t9

0x6dc8,	// (0x00092257) main_cset_slider_pane_t10_ParamLimits

0x6dc8,	// (0x00092257) main_cset_slider_pane_t10

0x6df0,	// (0x0009227f) main_cset_slider_pane_t11_ParamLimits

0x6df0,	// (0x0009227f) main_cset_slider_pane_t11

0x6e18,	// (0x000922a7) main_cset_slider_pane_t12_ParamLimits

0x6e18,	// (0x000922a7) main_cset_slider_pane_t12

0x6e35,	// (0x000922c4) main_cset_slider_pane_t13_ParamLimits

0x6e35,	// (0x000922c4) main_cset_slider_pane_t13

0xf984,	// (0x0009ae13) main_cset_slider_pane_t_ParamLimits

0x97e8,	// (0x00094c77) bg_popup_sub_pane_cp011

0xd953,	// (0x00098de2) main_cset_text_pane_g1

0xd95b,	// (0x00098dea) main_cset_text_pane_t1

0xd969,	// (0x00098df8) main_cset_text_pane_t2

0xd977,	// (0x00098e06) main_cset_text_pane_t3

0xd985,	// (0x00098e14) main_cset_text_pane_t4

0xd993,	// (0x00098e22) main_cset_text_pane_t5

0xd9a1,	// (0x00098e30) main_cset_text_pane_t6

0xd9af,	// (0x00098e3e) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0009aeaa) main_cset_text_pane_t

0x97e8,	// (0x00094c77) main_cam4_burst_pane

0x97e8,	// (0x00094c77) main_cam5_pane

0x6af9,	// (0x00091f88) bg_button_pane_cp019

0x6b02,	// (0x00091f91) bg_button_pane_cp020

0xd817,	// (0x00098ca6) main_cset_slider_pane_g7_ParamLimits

0xd817,	// (0x00098ca6) main_cset_slider_pane_g7

0xd823,	// (0x00098cb2) main_cset_slider_pane_g8_ParamLimits

0xd823,	// (0x00098cb2) main_cset_slider_pane_g8

0x6c59,	// (0x000920e8) main_cset_slider_pane_g9_ParamLimits

0x6c59,	// (0x000920e8) main_cset_slider_pane_g9

0x6c65,	// (0x000920f4) main_cset_slider_pane_g10_ParamLimits

0x6c65,	// (0x000920f4) main_cset_slider_pane_g10

0x6c71,	// (0x00092100) main_cset_slider_pane_g11_ParamLimits

0x6c71,	// (0x00092100) main_cset_slider_pane_g11

0x6c7d,	// (0x0009210c) main_cset_slider_pane_g12_ParamLimits

0x6c7d,	// (0x0009210c) main_cset_slider_pane_g12

0x6c89,	// (0x00092118) main_cset_slider_pane_g13_ParamLimits

0x6c89,	// (0x00092118) main_cset_slider_pane_g13

0x6c95,	// (0x00092124) main_cset_slider_pane_g14_ParamLimits

0x6c95,	// (0x00092124) main_cset_slider_pane_g14

0x6ca1,	// (0x00092130) main_cset_slider_pane_g15_ParamLimits

0x6ca1,	// (0x00092130) main_cset_slider_pane_g15

0xd869,	// (0x00098cf8) main_cset_slider_pane_t14_ParamLimits

0xd869,	// (0x00098cf8) main_cset_slider_pane_t14

0xd8a2,	// (0x00098d31) main_cset_slider_pane_t15_ParamLimits

0xd8a2,	// (0x00098d31) main_cset_slider_pane_t15

0x71e4,	// (0x00092673) aid_cam4_burst_size_cell_ParamLimits

0x71e4,	// (0x00092673) aid_cam4_burst_size_cell

0x7204,	// (0x00092693) grid_cam4_burst_pane_ParamLimits

0x7204,	// (0x00092693) grid_cam4_burst_pane

0x723c,	// (0x000926cb) linegrid_cam4_burst_pane_ParamLimits

0x723c,	// (0x000926cb) linegrid_cam4_burst_pane

0xd9bd,	// (0x00098e4c) scroll_pane_cp30_ParamLimits

0xd9bd,	// (0x00098e4c) scroll_pane_cp30

0x7260,	// (0x000926ef) cell_cam4_burst_pane_ParamLimits

0x7260,	// (0x000926ef) cell_cam4_burst_pane

0xd9c9,	// (0x00098e58) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c9,	// (0x00098e58) linegrid_cam4_burst_pane_g1

0x72ad,	// (0x0009273c) linegrid_cam4_burst_pane_g2_ParamLimits

0x72ad,	// (0x0009273c) linegrid_cam4_burst_pane_g2

0xd9d6,	// (0x00098e65) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d6,	// (0x00098e65) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0009aeb9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0009aeb9) linegrid_cam4_burst_pane_g

0x72be,	// (0x0009274d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x72be,	// (0x0009274d) linegrid_cam4_burst_pane_g3_copy1

0xd9e3,	// (0x00098e72) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e3,	// (0x00098e72) linegrid_cam4_burst_pane_g4

0x72d8,	// (0x00092767) linegrid_cam4_burst_pane_g5_ParamLimits

0x72d8,	// (0x00092767) linegrid_cam4_burst_pane_g5

0x72e9,	// (0x00092778) linegrid_cam4_burst_pane_g6_ParamLimits

0x72e9,	// (0x00092778) linegrid_cam4_burst_pane_g6

0xd9f0,	// (0x00098e7f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f0,	// (0x00098e7f) linegrid_cam4_burst_pane_g7

0x7300,	// (0x0009278f) cell_cam4_burst_pane_g1

0xda09,	// (0x00098e98) main_cam5_pane_t1_ParamLimits

0xda09,	// (0x00098e98) main_cam5_pane_t1

0xda1b,	// (0x00098eaa) main_cam5_pane_t2_ParamLimits

0xda1b,	// (0x00098eaa) main_cam5_pane_t2

0xda2d,	// (0x00098ebc) main_cam5_pane_t3_ParamLimits

0xda2d,	// (0x00098ebc) main_cam5_pane_t3

0xda3f,	// (0x00098ece) main_cam5_pane_t4_ParamLimits

0xda3f,	// (0x00098ece) main_cam5_pane_t4

0xda57,	// (0x00098ee6) main_cam5_pane_t5_ParamLimits

0xda57,	// (0x00098ee6) main_cam5_pane_t5

0xda6b,	// (0x00098efa) main_cam5_pane_t6_ParamLimits

0xda6b,	// (0x00098efa) main_cam5_pane_t6

0xda7f,	// (0x00098f0e) main_cam5_pane_t7_ParamLimits

0xda7f,	// (0x00098f0e) main_cam5_pane_t7

0xda91,	// (0x00098f20) main_cam5_pane_t8_ParamLimits

0xda91,	// (0x00098f20) main_cam5_pane_t8

0xdaad,	// (0x00098f3c) main_cam5_pane_t9_ParamLimits

0xdaad,	// (0x00098f3c) main_cam5_pane_t9

0xdabf,	// (0x00098f4e) main_cam5_pane_t10_ParamLimits

0xdabf,	// (0x00098f4e) main_cam5_pane_t10

0xdad1,	// (0x00098f60) main_cam5_pane_t11_ParamLimits

0xdad1,	// (0x00098f60) main_cam5_pane_t11

0xdae3,	// (0x00098f72) main_cam5_pane_t12_ParamLimits

0xdae3,	// (0x00098f72) main_cam5_pane_t12

0xdaf8,	// (0x00098f87) main_cam5_pane_t13_ParamLimits

0xdaf8,	// (0x00098f87) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0009aec5) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0009aec5) main_cam5_pane_t

0x1100,	// (0x0008c58f) popup_scut_keymap_window_ParamLimits

0x1100,	// (0x0008c58f) popup_scut_keymap_window

0x7313,	// (0x000927a2) aid_size_cell_brow_shortcut

0xaa79,	// (0x00095f08) bg_popup_window_pane_cp010

0x731f,	// (0x000927ae) grid_scut_pane

0x732b,	// (0x000927ba) cell_scut_pane_ParamLimits

0x732b,	// (0x000927ba) cell_scut_pane

0x7342,	// (0x000927d1) cell_scut_pane_g1

0xdb15,	// (0x00098fa4) cell_scut_pane_t1

0xdb24,	// (0x00098fb3) cell_scut_pane_t2

0x734b,	// (0x000927da) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0009aee0) cell_scut_pane_t

0x5146,	// (0x000905d5) main_mup3_pane_g8_ParamLimits

0x5146,	// (0x000905d5) main_mup3_pane_g8

0x6658,	// (0x00091ae7) area_vitu2_query_pane_ParamLimits

0x6658,	// (0x00091ae7) area_vitu2_query_pane

0x04ad,	// (0x0008b93c) input_focus_pane_cp08

0xdb72,	// (0x00099001) area_vitu2_query_pane_g1

0x05b2,	// (0x0008ba41) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0009aee7) area_vitu2_query_pane_g

0x7359,	// (0x000927e8) area_vitu2_query_pane_t1_ParamLimits

0x7359,	// (0x000927e8) area_vitu2_query_pane_t1

0x736d,	// (0x000927fc) area_vitu2_query_pane_t2_ParamLimits

0x736d,	// (0x000927fc) area_vitu2_query_pane_t2

0x05c3,	// (0x0008ba52) area_vitu2_query_pane_t3_ParamLimits

0x05c3,	// (0x0008ba52) area_vitu2_query_pane_t3

0x7381,	// (0x00092810) area_vitu2_query_pane_t4_ParamLimits

0x7381,	// (0x00092810) area_vitu2_query_pane_t4

0x73a9,	// (0x00092838) area_vitu2_query_pane_t5_ParamLimits

0x73a9,	// (0x00092838) area_vitu2_query_pane_t5

0x73d1,	// (0x00092860) area_vitu2_query_pane_t6_ParamLimits

0x73d1,	// (0x00092860) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0009aeec) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0009aeec) area_vitu2_query_pane_t

0x741d,	// (0x000928ac) bg_button_pane_cp018

0x742b,	// (0x000928ba) bg_button_pane_cp021

0x05eb,	// (0x0008ba7a) bg_button_pane_cp022

0x05fa,	// (0x0008ba89) input_focus_pane_cp09

0xb348,	// (0x000967d7) aid_size_touch_mv_arrow_left

0xb371,	// (0x00096800) aid_size_touch_mv_arrow_right

0x6cb9,	// (0x00092148) main_cset_slider_pane_g16_ParamLimits

0x6cb9,	// (0x00092148) main_cset_slider_pane_g16

0x6cc5,	// (0x00092154) main_cset_slider_pane_g17_ParamLimits

0x6cc5,	// (0x00092154) main_cset_slider_pane_g17

0x7300,	// (0x0009278f) cell_cam4_burst_pane_g1_ParamLimits

0x97e8,	// (0x00094c77) compa_mode_pane

0x6ec3,	// (0x00092352) popup_vtel_slider_window_g3_ParamLimits

0x6ec3,	// (0x00092352) popup_vtel_slider_window_g3

0x6eda,	// (0x00092369) popup_vtel_slider_window_g4_ParamLimits

0x6eda,	// (0x00092369) popup_vtel_slider_window_g4

0x6ef1,	// (0x00092380) popup_vtel_slider_window_t1_ParamLimits

0x6ef1,	// (0x00092380) popup_vtel_slider_window_t1

0x97e8,	// (0x00094c77) main_cl_pane

0x9ddb,	// (0x0009526a) popup_imed_adjust2_window_ParamLimits

0xc909,	// (0x00097d98) bg_tb_trans_pane_cp05_ParamLimits

0xd257,	// (0x000986e6) popup_imed_adjust2_window_g1_ParamLimits

0xd266,	// (0x000986f5) popup_imed_adjust2_window_g2_ParamLimits

0xd266,	// (0x000986f5) popup_imed_adjust2_window_g2

0xd272,	// (0x00098701) popup_imed_adjust2_window_g3_ParamLimits

0xd272,	// (0x00098701) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0009ac53) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0009ac53) popup_imed_adjust2_window_g

0xd27e,	// (0x0009870d) popup_imed_adjust2_window_t1_ParamLimits

0xd296,	// (0x00098725) slider_imed_adjust_pane_ParamLimits

0xd2aa,	// (0x00098739) slider_imed_adjust_pane_g1_ParamLimits

0xd2ba,	// (0x00098749) slider_imed_adjust_pane_g2_ParamLimits

0xd2ca,	// (0x00098759) slider_imed_adjust_pane_g3_ParamLimits

0xd2db,	// (0x0009876a) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0009ac5a) slider_imed_adjust_pane_g_ParamLimits

0x63e1,	// (0x00091870) aid_touch_area_cam4_ParamLimits

0x63e1,	// (0x00091870) aid_touch_area_cam4

0xa1d5,	// (0x00095664) battery_pane_cp01

0x64b0,	// (0x0009193f) main_camera4_pane_g6_ParamLimits

0x64b0,	// (0x0009193f) main_camera4_pane_g6

0x64da,	// (0x00091969) main_camera4_pane_t2_ParamLimits

0x64da,	// (0x00091969) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0009ad61) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0009ad61) main_camera4_pane_t

0x650f,	// (0x0009199e) aid_touch_area_vid4_ParamLimits

0x650f,	// (0x0009199e) aid_touch_area_vid4

0x6563,	// (0x000919f2) main_video4_pane_g5_ParamLimits

0x6563,	// (0x000919f2) main_video4_pane_g5

0x6588,	// (0x00091a17) vid4_progress_pane_ParamLimits

0x6588,	// (0x00091a17) vid4_progress_pane

0xd82f,	// (0x00098cbe) main_cset_slider_pane_g18_ParamLimits

0xd82f,	// (0x00098cbe) main_cset_slider_pane_g18

0xd9fd,	// (0x00098e8c) cell_cam4_burst_pane_g2_ParamLimits

0xd9fd,	// (0x00098e8c) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0009aec0) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0009aec0) cell_cam4_burst_pane_g

0xa8ab,	// (0x00095d3a) bg_cl_pane_ParamLimits

0xa8ab,	// (0x00095d3a) bg_cl_pane

0x7437,	// (0x000928c6) cl_header_pane_ParamLimits

0x7437,	// (0x000928c6) cl_header_pane

0x744b,	// (0x000928da) cl_listscroll_pane_ParamLimits

0x744b,	// (0x000928da) cl_listscroll_pane

0xdb7e,	// (0x0009900d) bg_cl_pane_g1

0xdb86,	// (0x00099015) bg_cl_pane_g2

0xdb8e,	// (0x0009901d) bg_cl_pane_g3

0xdb96,	// (0x00099025) bg_cl_pane_g4

0xdb9e,	// (0x0009902d) bg_cl_pane_g5

0xdba6,	// (0x00099035) bg_cl_pane_g6

0xdbae,	// (0x0009903d) bg_cl_pane_g7

0xdbb6,	// (0x00099045) bg_cl_pane_g8

0xdbbe,	// (0x0009904d) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0009aefb) bg_cl_pane_g

0x745b,	// (0x000928ea) aid_height_cl_leading_ParamLimits

0x745b,	// (0x000928ea) aid_height_cl_leading

0x7467,	// (0x000928f6) aid_height_cl_text_ParamLimits

0x7467,	// (0x000928f6) aid_height_cl_text

0xa54e,	// (0x000959dd) bg_cl_header_pane_ParamLimits

0xa54e,	// (0x000959dd) bg_cl_header_pane

0x7486,	// (0x00092915) cl_header_pane_g1_ParamLimits

0x7486,	// (0x00092915) cl_header_pane_g1

0x749c,	// (0x0009292b) cl_header_pane_t1_ParamLimits

0x749c,	// (0x0009292b) cl_header_pane_t1

0xdbc6,	// (0x00099055) cl_list_pane

0xd802,	// (0x00098c91) hc_scroll_pane_cp01

0xacb2,	// (0x00096141) bg_cl_header_pane_g1

0xd6e8,	// (0x00098b77) bg_cl_header_pane_g2

0xacd2,	// (0x00096161) bg_cl_header_pane_g3

0xd6f8,	// (0x00098b87) bg_cl_header_pane_g4

0xd6f0,	// (0x00098b7f) bg_cl_header_pane_g5

0xd90c,	// (0x00098d9b) bg_cl_header_pane_g6

0xd710,	// (0x00098b9f) bg_cl_header_pane_g7

0xd718,	// (0x00098ba7) bg_cl_header_pane_g8

0xd708,	// (0x00098b97) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0009af0e) bg_cl_header_pane_g

0x74b5,	// (0x00092944) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74b5,	// (0x00092944) hc_cl_list_double_graphic_heading_pane

0x74c6,	// (0x00092955) hc_cl_list_single_graphic_pane_ParamLimits

0x74c6,	// (0x00092955) hc_cl_list_single_graphic_pane

0x74dc,	// (0x0009296b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x74dc,	// (0x0009296b) hc_cl_list_single_graphic_pane_g1

0x74e8,	// (0x00092977) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x74e8,	// (0x00092977) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0009af21) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0009af21) hc_cl_list_single_graphic_pane_g

0x74fc,	// (0x0009298b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x74fc,	// (0x0009298b) hc_cl_list_single_graphic_pane_t1

0x74dc,	// (0x0009296b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x74dc,	// (0x0009296b) hc_cl_list_double_graphic_heading_pane_g1

0x7511,	// (0x000929a0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7511,	// (0x000929a0) hc_cl_list_double_graphic_heading_pane_g2

0x7525,	// (0x000929b4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7525,	// (0x000929b4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0009af26) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0009af26) hc_cl_list_double_graphic_heading_pane_g

0x7539,	// (0x000929c8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7539,	// (0x000929c8) hc_cl_list_double_graphic_heading_pane_t1

0x754e,	// (0x000929dd) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x754e,	// (0x000929dd) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0009af2d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0009af2d) hc_cl_list_double_graphic_heading_pane_t

0xa344,	// (0x000957d3) vid4_progress_pane_g1

0xa354,	// (0x000957e3) vid4_progress_pane_g2

0x7563,	// (0x000929f2) vid4_progress_pane_g3

0xa364,	// (0x000957f3) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0009af32) vid4_progress_pane_g

0x7575,	// (0x00092a04) vid4_progress_pane_t1

0xa37c,	// (0x0009580b) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0009af3d) vid4_progress_pane_t

0x758d,	// (0x00092a1c) wait_bar_pane_cp07

0xcb04,	// (0x00097f93) blid_firmament_pane_ParamLimits

0xcb47,	// (0x00097fd6) popup_blid_sat_info2_window_g1

0xcb6b,	// (0x00097ffa) popup_blid_sat_info2_window_t3

0xcb79,	// (0x00098008) popup_blid_sat_info2_window_t4

0xcb87,	// (0x00098016) popup_blid_sat_info2_window_t5

0xcb95,	// (0x00098024) popup_blid_sat_info2_window_t6

0xcba5,	// (0x00098034) popup_blid_sat_info2_window_t7

0xcbb3,	// (0x00098042) popup_blid_sat_info2_window_t8

0xcbc1,	// (0x00098050) popup_blid_sat_info2_window_t9

0xcbcf,	// (0x0009805e) popup_blid_sat_info2_window_t10

0xcc91,	// (0x00098120) aid_firma_cardinal_ParamLimits

0xcca5,	// (0x00098134) blid_firmament_pane_t1_ParamLimits

0xccbc,	// (0x0009814b) blid_firmament_pane_t2_ParamLimits

0xccd3,	// (0x00098162) blid_firmament_pane_t3_ParamLimits

0xccea,	// (0x00098179) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0009ab47) blid_firmament_pane_t_ParamLimits

0xcd01,	// (0x00098190) blid_sat_info_pane_ParamLimits

0xa54e,	// (0x000959dd) main_cam_set_pane_ParamLimits

0x5a0a,	// (0x00090e99) aid_size_cell_colour_35_ParamLimits

0x5a2a,	// (0x00090eb9) aid_size_cell_colour_112_ParamLimits

0x5a4a,	// (0x00090ed9) aid_size_cell_effect_ParamLimits

0xc909,	// (0x00097d98) bg_tb_trans_pane_cp02_ParamLimits

0xaf1a,	// (0x000963a9) heading_imed_pane_ParamLimits

0x5a6a,	// (0x00090ef9) listscroll_imed_pane_ParamLimits

0xbf23,	// (0x000973b2) popup_call2_audio_first_window_g5_ParamLimits

0xbf23,	// (0x000973b2) popup_call2_audio_first_window_g5

0x5ffd,	// (0x0009148c) aid_size_touch_image3_arrow_left_ParamLimits

0x5ffd,	// (0x0009148c) aid_size_touch_image3_arrow_left

0x6029,	// (0x000914b8) aid_size_touch_image3_arrow_right_ParamLimits

0x6029,	// (0x000914b8) aid_size_touch_image3_arrow_right

0xa391,	// (0x00095820) vid4_progress_pane_t3

0x5d7d,	// (0x0009120c) main_hwr_training_symbol_option_pane_ParamLimits

0x5d7d,	// (0x0009120c) main_hwr_training_symbol_option_pane

0xd544,	// (0x000989d3) popup_hwr_training_preview_window_ParamLimits

0xd544,	// (0x000989d3) popup_hwr_training_preview_window

0x5d9d,	// (0x0009122c) hwr_training_navi_pane_g5_ParamLimits

0x5d9d,	// (0x0009122c) hwr_training_navi_pane_g5

0xd6d6,	// (0x00098b65) popup_char_count_window

0xa54e,	// (0x000959dd) bg_popup_sub_pane_cp20_ParamLimits

0x6fff,	// (0x0009248e) list_vitu2_match_list_pane_ParamLimits

0x700e,	// (0x0009249d) vitu2_page_scroll_pane_ParamLimits

0x700e,	// (0x0009249d) vitu2_page_scroll_pane

0xdbcf,	// (0x0009905e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbcf,	// (0x0009905e) list_single_hwr_training_symbol_option_pane

0xdbe2,	// (0x00099071) list_single_hwr_training_symbol_option_pane_g1

0xdbea,	// (0x00099079) list_single_hwr_training_symbol_option_pane_t1

0xdbf8,	// (0x00099087) bg_button_pane_cp023

0xdc01,	// (0x00099090) bg_button_pane_cp024

0x75cc,	// (0x00092a5b) vitu2_page_scroll_pane_g1

0x75d4,	// (0x00092a63) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0009af44) vitu2_page_scroll_pane_g

0x75dc,	// (0x00092a6b) vitu2_page_scroll_pane_t1

0xca64,	// (0x00097ef3) popup_char_count_window_g1

0xdc34,	// (0x000990c3) popup_char_count_window_g2

0xdc3d,	// (0x000990cc) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0009af49) popup_char_count_window_g

0xdc46,	// (0x000990d5) popup_char_count_window_t1

0x97e8,	// (0x00094c77) main_vded2_pane

0xd243,	// (0x000986d2) aid_size_cell_imed_line

0xd24d,	// (0x000986dc) grid_imed_line_width_pane

0xa28d,	// (0x0009571c) vid4_indicators_pane_g4

0xdc54,	// (0x000990e3) cell_imed_line_width_pane_ParamLimits

0xdc54,	// (0x000990e3) cell_imed_line_width_pane

0xdc68,	// (0x000990f7) cell_imed_line_width_pane_g1

0xdb33,	// (0x00098fc2) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0009af50) cell_imed_line_width_pane_g

0x75eb,	// (0x00092a7a) main_vded2_pane_g1_ParamLimits

0x75eb,	// (0x00092a7a) main_vded2_pane_g1

0x7601,	// (0x00092a90) main_vded2_pane_g2_ParamLimits

0x7601,	// (0x00092a90) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0009af55) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0009af55) main_vded2_pane_g

0x7613,	// (0x00092aa2) vded2_slider_pane_ParamLimits

0x7613,	// (0x00092aa2) vded2_slider_pane

0x7623,	// (0x00092ab2) aid_size_touch_vded2_end

0x762d,	// (0x00092abc) aid_size_touch_vded2_playhead

0xdc71,	// (0x00099100) aid_size_touch_vded2_start

0xdc79,	// (0x00099108) vded2_slider_bg_pane

0xdc82,	// (0x00099111) vded2_slider_pane_g1

0xdc8b,	// (0x0009911a) vded2_slider_pane_g2

0x7637,	// (0x00092ac6) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0009af5a) vded2_slider_pane_g

0xdc93,	// (0x00099122) vded2_slider_bg_pane_g1

0xdc9c,	// (0x0009912b) vded2_slider_bg_pane_g2

0xdca5,	// (0x00099134) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x0009af61) vded2_slider_bg_pane_g

0x3739,	// (0x0008ebc8) aid_postcard_touch_down_pane_ParamLimits

0x3739,	// (0x0008ebc8) aid_postcard_touch_down_pane

0x374f,	// (0x0008ebde) aid_postcard_touch_up_pane_ParamLimits

0x374f,	// (0x0008ebde) aid_postcard_touch_up_pane

0x97e8,	// (0x00094c77) main_blid2_pane

0x9dc1,	// (0x00095250) popup_blid2_search_window

0x97e8,	// (0x00094c77) blid2_gps_pane

0x97e8,	// (0x00094c77) blid2_navig_pane

0x97e8,	// (0x00094c77) blid2_search_pane

0x97e8,	// (0x00094c77) blid2_tripm_pane

0x7642,	// (0x00092ad1) blid2_search_pane_g1_ParamLimits

0x7642,	// (0x00092ad1) blid2_search_pane_g1

0x765c,	// (0x00092aeb) blid2_search_pane_t1_ParamLimits

0x765c,	// (0x00092aeb) blid2_search_pane_t1

0x766e,	// (0x00092afd) aid_size_cell_blid2_gps_ParamLimits

0x766e,	// (0x00092afd) aid_size_cell_blid2_gps

0x7686,	// (0x00092b15) blid2_gps_pane_g1_ParamLimits

0x7686,	// (0x00092b15) blid2_gps_pane_g1

0x769a,	// (0x00092b29) grid_blid2_satellite_pane_ParamLimits

0x769a,	// (0x00092b29) grid_blid2_satellite_pane

0x76b4,	// (0x00092b43) blid2_navig_pane_g1_ParamLimits

0x76b4,	// (0x00092b43) blid2_navig_pane_g1

0x76c0,	// (0x00092b4f) blid2_navig_pane_t1_ParamLimits

0x76c0,	// (0x00092b4f) blid2_navig_pane_t1

0x76db,	// (0x00092b6a) blid2_navig_pane_t2_ParamLimits

0x76db,	// (0x00092b6a) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x0009af68) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x0009af68) blid2_navig_pane_t

0x76f6,	// (0x00092b85) blid2_navig_ring_pane_ParamLimits

0x76f6,	// (0x00092b85) blid2_navig_ring_pane

0x770f,	// (0x00092b9e) blid2_speed_pane_ParamLimits

0x770f,	// (0x00092b9e) blid2_speed_pane

0x771b,	// (0x00092baa) blid2_tripm_pane_g1_ParamLimits

0x771b,	// (0x00092baa) blid2_tripm_pane_g1

0x7734,	// (0x00092bc3) blid2_tripm_pane_g2_ParamLimits

0x7734,	// (0x00092bc3) blid2_tripm_pane_g2

0x7748,	// (0x00092bd7) blid2_tripm_pane_g3_ParamLimits

0x7748,	// (0x00092bd7) blid2_tripm_pane_g3

0x775c,	// (0x00092beb) blid2_tripm_pane_g4_ParamLimits

0x775c,	// (0x00092beb) blid2_tripm_pane_g4

0x7770,	// (0x00092bff) blid2_tripm_pane_g5_ParamLimits

0x7770,	// (0x00092bff) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x0009af6d) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x0009af6d) blid2_tripm_pane_g

0x7796,	// (0x00092c25) blid2_tripm_pane_t1_ParamLimits

0x7796,	// (0x00092c25) blid2_tripm_pane_t1

0x77b1,	// (0x00092c40) blid2_tripm_pane_t2_ParamLimits

0x77b1,	// (0x00092c40) blid2_tripm_pane_t2

0x77ca,	// (0x00092c59) blid2_tripm_pane_t3_ParamLimits

0x77ca,	// (0x00092c59) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x0009af7a) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x0009af7a) blid2_tripm_pane_t

0x7811,	// (0x00092ca0) cell_blid2_satellite_pane_ParamLimits

0x7811,	// (0x00092ca0) cell_blid2_satellite_pane

0x782f,	// (0x00092cbe) cell_blid2_satellite_pane_g1

0xdcae,	// (0x0009913d) cell_blid2_satellite_pane_t1

0xcd11,	// (0x000981a0) blid2_speed_pane_g1

0xdcbc,	// (0x0009914b) blid2_speed_pane_t1

0xdcca,	// (0x00099159) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x0009af83) blid2_speed_pane_t

0xcd11,	// (0x000981a0) blid2_navig_ring_pane_g1

0x7838,	// (0x00092cc7) blid2_navig_ring_pane_g2

0x7840,	// (0x00092ccf) blid2_navig_ring_pane_g3

0x7848,	// (0x00092cd7) blid2_navig_ring_pane_g4

0x7850,	// (0x00092cdf) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x0009af88) blid2_navig_ring_pane_g

0x97e8,	// (0x00094c77) bg_popup_window_pane_cp011

0xdcd8,	// (0x00099167) popup_blid2_search_window_g1

0xdce0,	// (0x0009916f) popup_blid2_search_window_t1

0xdcee,	// (0x0009917d) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x0009af93) popup_blid2_search_window_t

0xabc1,	// (0x00096050) main_browser_pane_g1

0xa8ab,	// (0x00095d3a) main_browser_pane_ParamLimits

0xa54e,	// (0x000959dd) bg_button_pane_cp011_ParamLimits

0x688f,	// (0x00091d1e) cell_vitu2_function_pane_g1_ParamLimits

0xc909,	// (0x00097d98) bg_popup_sub_pane_cp22_ParamLimits

0x04ad,	// (0x0008b93c) input_focus_pane_cp08_ParamLimits

0x7191,	// (0x00092620) popup_vitu2_query_button_pane_ParamLimits

0x7191,	// (0x00092620) popup_vitu2_query_button_pane

0x04c4,	// (0x0008b953) popup_vitu2_query_input_button_pane

0xd947,	// (0x00098dd6) popup_vitu2_query_window_g1_ParamLimits

0x04ce,	// (0x0008b95d) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0009ae94) popup_vitu2_query_window_g_ParamLimits

0x97e8,	// (0x00094c77) bg_button_pane_cp026

0x7858,	// (0x00092ce7) popup_vitu2_query_input_button_pane_g1

0x97e8,	// (0x00094c77) bg_button_pane_cp025

0xdcfc,	// (0x0009918b) popup_vitu2_query_button_pane_t1

0x4dcf,	// (0x0009025e) main_mp3_pane_t6

0x4ddd,	// (0x0009026c) popup_slider_window_cp01

0xa1f1,	// (0x00095680) cam4_battery_pane

0xa24a,	// (0x000956d9) cam4_battery_pane_cp02

0xa33c,	// (0x000957cb) cam4_battery_pane_cp01

0xa33c,	// (0x000957cb) cam4_battery_pane_cp03

0xcd11,	// (0x000981a0) cam4_battery_pane_g1

0xdb3b,	// (0x00098fca) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x0009af98) cam4_battery_pane_g

0xcbdd,	// (0x0009806c) popup_blid_sat_info2_window_t11

0xb348,	// (0x000967d7) aid_size_touch_mv_arrow_left_ParamLimits

0xb371,	// (0x00096800) aid_size_touch_mv_arrow_right_ParamLimits

0xb3cf,	// (0x0009685e) navi_pane_g1_ParamLimits

0xb3db,	// (0x0009686a) navi_pane_g2_ParamLimits

0xb409,	// (0x00096898) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0009a859) navi_pane_g_ParamLimits

0x322f,	// (0x0008e6be) navi_pane_mv_t1_ParamLimits

0x5a76,	// (0x00090f05) grid_imed_effect_pane_ParamLimits

0x1f8c,	// (0x0008d41b) aid_placing_vt_slider_lsc

0xab10,	// (0x00095f9f) aid_placing_vt_slider_prt

0xa54e,	// (0x000959dd) bg_tb_trans_pane_cp01_ParamLimits

0xce94,	// (0x00098323) popup_image_details_window_g1_ParamLimits

0xcea7,	// (0x00098336) popup_image_details_window_g2_ParamLimits

0xcebc,	// (0x0009834b) popup_image_details_window_g3_ParamLimits

0xcebc,	// (0x0009834b) popup_image_details_window_g3

0xf6fd,	// (0x0009ab8c) popup_image_details_window_g_ParamLimits

0xced0,	// (0x0009835f) popup_image_details_window_t1_ParamLimits

0xcee2,	// (0x00098371) popup_image_details_window_t2_ParamLimits

0xcefb,	// (0x0009838a) popup_image_details_window_t3_ParamLimits

0xcf0f,	// (0x0009839e) popup_image_details_window_t4_ParamLimits

0xcf2a,	// (0x000983b9) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0009ab93) popup_image_details_window_t_ParamLimits

0x7473,	// (0x00092902) cl_header_name_pane_ParamLimits

0x7473,	// (0x00092902) cl_header_name_pane

0x7860,	// (0x00092cef) cl_header_name_pane_t1_ParamLimits

0x7860,	// (0x00092cef) cl_header_name_pane_t1

0x7881,	// (0x00092d10) cl_header_name_pane_t2_ParamLimits

0x7881,	// (0x00092d10) cl_header_name_pane_t2

0x78c3,	// (0x00092d52) cl_header_name_pane_t3_ParamLimits

0x78c3,	// (0x00092d52) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x0009af9d) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x0009af9d) cl_header_name_pane_t

0xb498,	// (0x00096927) navi_pane_mv_g2_ParamLimits

0xd6b0,	// (0x00098b3f) field_vitu2_entry_pane_g1_ParamLimits

0xd6bc,	// (0x00098b4b) field_vitu2_entry_pane_g2_ParamLimits

0xd6c8,	// (0x00098b57) field_vitu2_entry_pane_g3_ParamLimits

0xd6c8,	// (0x00098b57) field_vitu2_entry_pane_g3

0xf904,	// (0x0009ad93) field_vitu2_entry_pane_g_ParamLimits

0xa2c2,	// (0x00095751) cell_vitu2_itu_pane_g1_ParamLimits

0x6823,	// (0x00091cb2) cell_vitu2_itu_pane_g2_ParamLimits

0x6823,	// (0x00091cb2) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0009ad9f) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0009ad9f) cell_vitu2_itu_pane_g

0xa54e,	// (0x000959dd) bg_vkb2_func_pane_cp05_ParamLimits

0xa54e,	// (0x000959dd) bg_vkb2_func_pane_cp05

0xa54e,	// (0x000959dd) bg_vkb2_func_pane_cp03

0xa54e,	// (0x000959dd) bg_vkb2_func_pane_cp04

0xa54e,	// (0x000959dd) bg_vkb2_func_pane_cp10_ParamLimits

0xa54e,	// (0x000959dd) bg_vkb2_func_pane_cp10

0x05eb,	// (0x0008ba7a) bg_vkb2_func_pane_cp08

0x741d,	// (0x000928ac) bg_vkb2_func_pane_cp06

0x742b,	// (0x000928ba) bg_vkb2_func_pane_cp07

0xdc0a,	// (0x00099099) bg_vkb2_func_pane_cp11_ParamLimits

0xdc0a,	// (0x00099099) bg_vkb2_func_pane_cp11

0xdc1f,	// (0x000990ae) bg_vkb2_func_pane_cp12_ParamLimits

0xdc1f,	// (0x000990ae) bg_vkb2_func_pane_cp12

0x97e8,	// (0x00094c77) bg_vkb2_func_pane_cp09

0xd6e8,	// (0x00098b77) bg_vkb2_func_pane_g1

0xacd2,	// (0x00096161) bg_vkb2_func_pane_g2

0xd6f0,	// (0x00098b7f) bg_vkb2_func_pane_g3

0xd6f8,	// (0x00098b87) bg_vkb2_func_pane_g4

0xd90c,	// (0x00098d9b) bg_vkb2_func_pane_g5

0xd710,	// (0x00098b9f) bg_vkb2_func_pane_g6

0xd718,	// (0x00098ba7) bg_vkb2_func_pane_g7

0xd708,	// (0x00098b97) bg_vkb2_func_pane_g8

0xacb2,	// (0x00096141) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x0009afa4) bg_vkb2_func_pane_g

0x7784,	// (0x00092c13) blid2_tripm_pane_g6_ParamLimits

0x7784,	// (0x00092c13) blid2_tripm_pane_g6

0xd602,	// (0x00098a91) mp4_progress_pane_g1

0x77fd,	// (0x00092c8c) blid2_tripm_values_pane_ParamLimits

0x77fd,	// (0x00092c8c) blid2_tripm_values_pane

0x78f4,	// (0x00092d83) blid2_tripm_values_pane_t1

0x7902,	// (0x00092d91) blid2_tripm_values_pane_t2

0x7910,	// (0x00092d9f) blid2_tripm_values_pane_t3

0x791e,	// (0x00092dad) blid2_tripm_values_pane_t4

0x792c,	// (0x00092dbb) blid2_tripm_values_pane_t5

0x793a,	// (0x00092dc9) blid2_tripm_values_pane_t6

0x7948,	// (0x00092dd7) blid2_tripm_values_pane_t7

0x7956,	// (0x00092de5) blid2_tripm_values_pane_t8

0x7964,	// (0x00092df3) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x0009afb7) blid2_tripm_values_pane_t

0x1fce,	// (0x0008d45d) call_video_pane_t1_ParamLimits

0x1fec,	// (0x0008d47b) call_video_pane_t2_ParamLimits

0xf253,	// (0x0009a6e2) call_video_pane_t_ParamLimits

0x029c,	// (0x0008b72b) msg_header_pane_g1_ParamLimits

0xb680,	// (0x00096b0f) msg_header_pane_g2_ParamLimits

0xb680,	// (0x00096b0f) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0009a8fc) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0009a8fc) msg_header_pane_g

0xa8ab,	// (0x00095d3a) main_clock2_pane_ParamLimits

0x5777,	// (0x00090c06) grid_clock2_toolbar_pane_ParamLimits

0x5777,	// (0x00090c06) grid_clock2_toolbar_pane

0x5777,	// (0x00090c06) listscroll_clock2_pane_ParamLimits

0x5777,	// (0x00090c06) listscroll_clock2_pane

0x585b,	// (0x00090cea) main_clock2_pane_t3_ParamLimits

0x585b,	// (0x00090cea) main_clock2_pane_t3

0x587f,	// (0x00090d0e) main_clock2_pane_t4_ParamLimits

0x587f,	// (0x00090d0e) main_clock2_pane_t4

0xdd0a,	// (0x00099199) cell_clock2_toolbar_pane

0xdd12,	// (0x000991a1) cell_clock2_toolbar_pane_cp01

0xdd12,	// (0x000991a1) cell_clock2_toolbar_pane_cp02

0xdd1a,	// (0x000991a9) cell_clock2_toolbar_pane_cp03

0xdd22,	// (0x000991b1) list_clock2_pane

0xb2be,	// (0x0009674d) scroll_pane_cp10

0xdd2a,	// (0x000991b9) list_single_clock2_pane_ParamLimits

0xdd2a,	// (0x000991b9) list_single_clock2_pane

0xaa79,	// (0x00095f08) list_highlight_pane_cp08

0xdd37,	// (0x000991c6) list_single_clock2_pane_t1

0xdd45,	// (0x000991d4) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x0009afca) list_single_clock2_pane_t

0x97e8,	// (0x00094c77) bg_button_pane_cp10

0xdd53,	// (0x000991e2) cell_clock2_toolbar_pane_g1

0x36c5,	// (0x0008eb54) aid_main_viewer_pane_g1_ParamLimits

0x36c5,	// (0x0008eb54) aid_main_viewer_pane_g1

0x36d3,	// (0x0008eb62) aid_main_viewer_pane_g2_ParamLimits

0x36d3,	// (0x0008eb62) aid_main_viewer_pane_g2

0x36e1,	// (0x0008eb70) aid_main_viewer_pane_g3_ParamLimits

0x36e1,	// (0x0008eb70) aid_main_viewer_pane_g3

0x36f0,	// (0x0008eb7f) aid_main_viewer_pane_g4_ParamLimits

0x36f0,	// (0x0008eb7f) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0009a90d) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0009a90d) aid_main_viewer_pane_g

0x3ff6,	// (0x0008f485) main_calc_pane_ParamLimits

0x400a,	// (0x0008f499) main_dialer2_pane_ParamLimits

0x97e8,	// (0x00094c77) main_cam6_pane

0x97e8,	// (0x00094c77) main_vid6_pane

0x5783,	// (0x00090c12) listscroll_gen_pane_cp06_ParamLimits

0x5783,	// (0x00090c12) listscroll_gen_pane_cp06

0x58a2,	// (0x00090d31) main_clock2_pane_t5_ParamLimits

0x58a2,	// (0x00090d31) main_clock2_pane_t5

0x5900,	// (0x00090d8f) aid_call2_pane_cp10_ParamLimits

0x5912,	// (0x00090da1) aid_call_pane_cp10_ParamLimits

0xb33c,	// (0x000967cb) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb33c,	// (0x000967cb) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5924,	// (0x00090db3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5924,	// (0x00090db3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb33c,	// (0x000967cb) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0009ac48) popup_clock_analogue_window_cp10_g_ParamLimits

0x593a,	// (0x00090dc9) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5faa,	// (0x00091439) cell_dialer2_keypad_pane_g2_ParamLimits

0x5faa,	// (0x00091439) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0009ad32) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0009ad32) cell_dialer2_keypad_pane_g

0x5fc6,	// (0x00091455) cell_dialer2_keypad_pane_t1

0x6bac,	// (0x0009203b) main_cset_text2_pane_ParamLimits

0x6bac,	// (0x0009203b) main_cset_text2_pane

0xdb72,	// (0x00099001) area_vitu2_query_pane_g1_ParamLimits

0x05b2,	// (0x0008ba41) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0009aee7) area_vitu2_query_pane_g_ParamLimits

0x73f9,	// (0x00092888) area_vitu2_query_pane_t7_ParamLimits

0x73f9,	// (0x00092888) area_vitu2_query_pane_t7

0x741d,	// (0x000928ac) bg_button_pane_cp018_ParamLimits

0x742b,	// (0x000928ba) bg_button_pane_cp021_ParamLimits

0x05eb,	// (0x0008ba7a) bg_button_pane_cp022_ParamLimits

0x05eb,	// (0x0008ba7a) bg_vkb2_func_pane_cp08_ParamLimits

0x741d,	// (0x000928ac) bg_vkb2_func_pane_cp06_ParamLimits

0x742b,	// (0x000928ba) bg_vkb2_func_pane_cp07_ParamLimits

0x05fa,	// (0x0008ba89) input_focus_pane_cp09_ParamLimits

0xa3ae,	// (0x0009583d) cam6_autofocus_pane_ParamLimits

0xa3ae,	// (0x0009583d) cam6_autofocus_pane

0x7972,	// (0x00092e01) cam6_image_uncrop_pane_ParamLimits

0x7972,	// (0x00092e01) cam6_image_uncrop_pane

0x7981,	// (0x00092e10) cam6_indi_pane_ParamLimits

0x7981,	// (0x00092e10) cam6_indi_pane

0x7997,	// (0x00092e26) cam6_mode_pane_ParamLimits

0x7997,	// (0x00092e26) cam6_mode_pane

0x79a9,	// (0x00092e38) cam6_timer_pane_ParamLimits

0x79a9,	// (0x00092e38) cam6_timer_pane

0x79b5,	// (0x00092e44) cam6_zoom_pane_ParamLimits

0x79b5,	// (0x00092e44) cam6_zoom_pane

0x79c1,	// (0x00092e50) cam6_mode_pane_g1_ParamLimits

0x79c1,	// (0x00092e50) cam6_mode_pane_g1

0x79d1,	// (0x00092e60) cam6_mode_pane_g2_ParamLimits

0x79d1,	// (0x00092e60) cam6_mode_pane_g2

0x79e1,	// (0x00092e70) cam6_mode_pane_g3_ParamLimits

0x79e1,	// (0x00092e70) cam6_mode_pane_g3

0x79f1,	// (0x00092e80) cam6_mode_pane_g4_ParamLimits

0x79f1,	// (0x00092e80) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x0009afcf) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x0009afcf) cam6_mode_pane_g

0xdd5b,	// (0x000991ea) bg_tb_trans_pane_cp08_ParamLimits

0xdd5b,	// (0x000991ea) bg_tb_trans_pane_cp08

0xdd69,	// (0x000991f8) cam6_battery_pane_ParamLimits

0xdd69,	// (0x000991f8) cam6_battery_pane

0xdd7f,	// (0x0009920e) cam6_indi_pane_g1_ParamLimits

0xdd7f,	// (0x0009920e) cam6_indi_pane_g1

0xdd91,	// (0x00099220) cam6_indi_pane_g2_ParamLimits

0xdd91,	// (0x00099220) cam6_indi_pane_g2

0xdda3,	// (0x00099232) cam6_indi_pane_g3_ParamLimits

0xdda3,	// (0x00099232) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x0009afd8) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x0009afd8) cam6_indi_pane_g

0xddb5,	// (0x00099244) cam6_indi_pane_t1_ParamLimits

0xddb5,	// (0x00099244) cam6_indi_pane_t1

0x7a01,	// (0x00092e90) cam6_autofocus_pane_g1

0x7a09,	// (0x00092e98) cam6_autofocus_pane_g2

0x7a11,	// (0x00092ea0) cam6_autofocus_pane_g3

0x7a19,	// (0x00092ea8) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x0009afdf) cam6_autofocus_pane_g

0xdddb,	// (0x0009926a) cam6_timer_pane_g1

0xdde3,	// (0x00099272) cam6_timer_pane_t1

0xddf1,	// (0x00099280) cam6_zoom_cont_pane

0xddf9,	// (0x00099288) cam6_zoom_pane_g1

0xde01,	// (0x00099290) cam6_zoom_pane_g2

0x7a21,	// (0x00092eb0) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x0009afe8) cam6_zoom_pane_g

0xcd11,	// (0x000981a0) cam6_battery_pane_g1

0xcd11,	// (0x000981a0) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0009ab50) cam6_battery_pane_g

0xde09,	// (0x00099298) cam6_zoom_cont_pane_g1

0xde12,	// (0x000992a1) cam6_zoom_cont_pane_g2

0xde1b,	// (0x000992aa) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x0009afef) cam6_zoom_cont_pane_g

0x7a3e,	// (0x00092ecd) cam6_mode_pane_cp_ParamLimits

0x7a3e,	// (0x00092ecd) cam6_mode_pane_cp

0x79b5,	// (0x00092e44) cam6_zoom_pane_cp_ParamLimits

0x79b5,	// (0x00092e44) cam6_zoom_pane_cp

0x7a50,	// (0x00092edf) vid6_image_uncrop_cif_pane_ParamLimits

0x7a50,	// (0x00092edf) vid6_image_uncrop_cif_pane

0x7a60,	// (0x00092eef) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a60,	// (0x00092eef) vid6_image_uncrop_nhd_pane

0x7972,	// (0x00092e01) vid6_image_uncrop_vga_pane_ParamLimits

0x7972,	// (0x00092e01) vid6_image_uncrop_vga_pane

0x7a6f,	// (0x00092efe) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a6f,	// (0x00092efe) vid6_image_uncrop_wvga_pane

0x7a7e,	// (0x00092f0d) vid6_indi_pane_ParamLimits

0x7a7e,	// (0x00092f0d) vid6_indi_pane

0xdd5b,	// (0x000991ea) bg_tb_trans_pane_cp09_ParamLimits

0xdd5b,	// (0x000991ea) bg_tb_trans_pane_cp09

0xde33,	// (0x000992c2) cam6_battery_pane_cp_ParamLimits

0xde33,	// (0x000992c2) cam6_battery_pane_cp

0xde3f,	// (0x000992ce) vid6_indi_pane_g1_ParamLimits

0xde3f,	// (0x000992ce) vid6_indi_pane_g1

0xde51,	// (0x000992e0) vid6_indi_pane_g2_ParamLimits

0xde51,	// (0x000992e0) vid6_indi_pane_g2

0xde63,	// (0x000992f2) vid6_indi_pane_g3_ParamLimits

0xde63,	// (0x000992f2) vid6_indi_pane_g3

0xde78,	// (0x00099307) vid6_indi_pane_g4_ParamLimits

0xde78,	// (0x00099307) vid6_indi_pane_g4

0xde8d,	// (0x0009931c) vid6_indi_pane_g5_ParamLimits

0xde8d,	// (0x0009931c) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x0009aff6) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x0009aff6) vid6_indi_pane_g

0xdea7,	// (0x00099336) vid6_indi_pane_t1_ParamLimits

0xdea7,	// (0x00099336) vid6_indi_pane_t1

0xdebd,	// (0x0009934c) vid6_indi_pane_t2_ParamLimits

0xdebd,	// (0x0009934c) vid6_indi_pane_t2

0xdee5,	// (0x00099374) vid6_indi_pane_t3_ParamLimits

0xdee5,	// (0x00099374) vid6_indi_pane_t3

0xdf0d,	// (0x0009939c) vid6_indi_pane_t4_ParamLimits

0xdf0d,	// (0x0009939c) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x0009b001) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x0009b001) vid6_indi_pane_t

0xdf31,	// (0x000993c0) wait_bar_pane_cp08

0x7a96,	// (0x00092f25) main_cset_text2_pane_t1_ParamLimits

0x7a96,	// (0x00092f25) main_cset_text2_pane_t1

0x7a29,	// (0x00092eb8) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a29,	// (0x00092eb8) listscroll_gen_pane_cp06_t1

0x97e8,	// (0x00094c77) main_cam6_set_pane

0xcf74,	// (0x00098403) bg_tb_trans_pane_cp06_ParamLimits

0xa1f9,	// (0x00095688) cam4_indicators_pane_g1_ParamLimits

0xa20a,	// (0x00095699) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0009ad6f) cam4_indicators_pane_g_ParamLimits

0xa228,	// (0x000956b7) cam4_indicators_pane_t1_ParamLimits

0xa54e,	// (0x000959dd) bg_tb_trans_pane_cp07_ParamLimits

0xa254,	// (0x000956e3) vid4_indicators_pane_g1_ParamLimits

0xa268,	// (0x000956f7) vid4_indicators_pane_g2_ParamLimits

0xa27c,	// (0x0009570b) vid4_indicators_pane_g3_ParamLimits

0xa28d,	// (0x0009571c) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0009ad81) vid4_indicators_pane_g_ParamLimits

0xa2ab,	// (0x0009573a) vid4_indicators_pane_t1_ParamLimits

0xa344,	// (0x000957d3) vid4_progress_pane_g1_ParamLimits

0xa354,	// (0x000957e3) vid4_progress_pane_g2_ParamLimits

0x7563,	// (0x000929f2) vid4_progress_pane_g3_ParamLimits

0xa364,	// (0x000957f3) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0009af32) vid4_progress_pane_g_ParamLimits

0x7575,	// (0x00092a04) vid4_progress_pane_t1_ParamLimits

0xa37c,	// (0x0009580b) vid4_progress_pane_t2_ParamLimits

0xa391,	// (0x00095820) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0009af3d) vid4_progress_pane_t_ParamLimits

0x758d,	// (0x00092a1c) wait_bar_pane_cp07_ParamLimits

0x7ab3,	// (0x00092f42) main_cam6_set_pane_g2_ParamLimits

0x7ab3,	// (0x00092f42) main_cam6_set_pane_g2

0x7ad7,	// (0x00092f66) main_cset6_listscroll_pane_ParamLimits

0x7ad7,	// (0x00092f66) main_cset6_listscroll_pane

0x7af7,	// (0x00092f86) main_cset6_slider_pane_ParamLimits

0x7af7,	// (0x00092f86) main_cset6_slider_pane

0x7b0d,	// (0x00092f9c) main_cset6_text2_pane_ParamLimits

0x7b0d,	// (0x00092f9c) main_cset6_text2_pane

0xdf40,	// (0x000993cf) main_cset6_text_pane

0xdf48,	// (0x000993d7) main_cset_list_pane_copy1_ParamLimits

0xdf48,	// (0x000993d7) main_cset_list_pane_copy1

0xdf58,	// (0x000993e7) scroll_pane_cp028_copy1

0x7b1b,	// (0x00092faa) cset_list_set_pane_copy1

0x7b2c,	// (0x00092fbb) aid_position_infowindow_above_copy1

0x7b34,	// (0x00092fc3) aid_position_infowindow_below_copy1

0x7b3c,	// (0x00092fcb) cset_list_set_pane_g1_copy1

0x061d,	// (0x0008baac) cset_list_set_pane_g3_copy1_ParamLimits

0x061d,	// (0x0008baac) cset_list_set_pane_g3_copy1

0x062c,	// (0x0008babb) cset_list_set_pane_t1_copy1_ParamLimits

0x062c,	// (0x0008babb) cset_list_set_pane_t1_copy1

0xa54e,	// (0x000959dd) list_highlight_pane_cp021_copy1_ParamLimits

0xa54e,	// (0x000959dd) list_highlight_pane_cp021_copy1

0xdf61,	// (0x000993f0) cset6_slider_pane_ParamLimits

0xdf61,	// (0x000993f0) cset6_slider_pane

0xdf8d,	// (0x0009941c) main_cset6_slider_pane_g1_ParamLimits

0xdf8d,	// (0x0009941c) main_cset6_slider_pane_g1

0x7b44,	// (0x00092fd3) main_cset6_slider_pane_g2_ParamLimits

0x7b44,	// (0x00092fd3) main_cset6_slider_pane_g2

0xdfb5,	// (0x00099444) main_cset6_slider_pane_g3_ParamLimits

0xdfb5,	// (0x00099444) main_cset6_slider_pane_g3

0x7b6c,	// (0x00092ffb) main_cset6_slider_pane_g4_ParamLimits

0x7b6c,	// (0x00092ffb) main_cset6_slider_pane_g4

0x7b78,	// (0x00093007) main_cset6_slider_pane_g5_ParamLimits

0x7b78,	// (0x00093007) main_cset6_slider_pane_g5

0xd817,	// (0x00098ca6) main_cset6_slider_pane_g7_ParamLimits

0xd817,	// (0x00098ca6) main_cset6_slider_pane_g7

0xd823,	// (0x00098cb2) main_cset6_slider_pane_g8_ParamLimits

0xd823,	// (0x00098cb2) main_cset6_slider_pane_g8

0x6c59,	// (0x000920e8) main_cset6_slider_pane_g9_ParamLimits

0x6c59,	// (0x000920e8) main_cset6_slider_pane_g9

0x6c65,	// (0x000920f4) main_cset6_slider_pane_g10_ParamLimits

0x6c65,	// (0x000920f4) main_cset6_slider_pane_g10

0x6c71,	// (0x00092100) main_cset6_slider_pane_g11_ParamLimits

0x6c71,	// (0x00092100) main_cset6_slider_pane_g11

0x6c7d,	// (0x0009210c) main_cset6_slider_pane_g12_ParamLimits

0x6c7d,	// (0x0009210c) main_cset6_slider_pane_g12

0x6c89,	// (0x00092118) main_cset6_slider_pane_g13_ParamLimits

0x6c89,	// (0x00092118) main_cset6_slider_pane_g13

0x6c95,	// (0x00092124) main_cset6_slider_pane_g14_ParamLimits

0x6c95,	// (0x00092124) main_cset6_slider_pane_g14

0x7b84,	// (0x00093013) main_cset6_slider_pane_g15_ParamLimits

0x7b84,	// (0x00093013) main_cset6_slider_pane_g15

0x6cb9,	// (0x00092148) main_cset6_slider_pane_g16_ParamLimits

0x6cb9,	// (0x00092148) main_cset6_slider_pane_g16

0x6cc5,	// (0x00092154) main_cset6_slider_pane_g17_ParamLimits

0x6cc5,	// (0x00092154) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x0009b00a) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x0009b00a) main_cset6_slider_pane_g

0xdfc1,	// (0x00099450) main_cset6_slider_pane_t1_ParamLimits

0xdfc1,	// (0x00099450) main_cset6_slider_pane_t1

0x7bb4,	// (0x00093043) main_cset6_slider_pane_t2_ParamLimits

0x7bb4,	// (0x00093043) main_cset6_slider_pane_t2

0x7bdf,	// (0x0009306e) main_cset6_slider_pane_t3_ParamLimits

0x7bdf,	// (0x0009306e) main_cset6_slider_pane_t3

0x7c0a,	// (0x00093099) main_cset6_slider_pane_t4_ParamLimits

0x7c0a,	// (0x00093099) main_cset6_slider_pane_t4

0x7c35,	// (0x000930c4) main_cset6_slider_pane_t5_ParamLimits

0x7c35,	// (0x000930c4) main_cset6_slider_pane_t5

0xe002,	// (0x00099491) main_cset6_slider_pane_t7_ParamLimits

0xe002,	// (0x00099491) main_cset6_slider_pane_t7

0x7c60,	// (0x000930ef) main_cset6_slider_pane_t8_ParamLimits

0x7c60,	// (0x000930ef) main_cset6_slider_pane_t8

0x7c84,	// (0x00093113) main_cset6_slider_pane_t9_ParamLimits

0x7c84,	// (0x00093113) main_cset6_slider_pane_t9

0x7ca8,	// (0x00093137) main_cset6_slider_pane_t10_ParamLimits

0x7ca8,	// (0x00093137) main_cset6_slider_pane_t10

0x7ccc,	// (0x0009315b) main_cset6_slider_pane_t11_ParamLimits

0x7ccc,	// (0x0009315b) main_cset6_slider_pane_t11

0xe038,	// (0x000994c7) main_cset6_slider_pane_t14_ParamLimits

0xe038,	// (0x000994c7) main_cset6_slider_pane_t14

0xe071,	// (0x00099500) main_cset6_slider_pane_t15_ParamLimits

0xe071,	// (0x00099500) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x0009b02f) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x0009b02f) main_cset6_slider_pane_t

0xdb57,	// (0x00098fe6) cset_slider_pane_g1_copy1

0xdb60,	// (0x00098fef) cset_slider_pane_g2_copy1

0xdb69,	// (0x00098ff8) cset_slider_pane_g3_copy1

0x97e8,	// (0x00094c77) bg_popup_sub_pane_cp011_copy1

0xe0aa,	// (0x00099539) main_cset_text_pane_g1_copy1

0xd95b,	// (0x00098dea) main_cset_text_pane_t1_copy1

0xd969,	// (0x00098df8) main_cset_text_pane_t2_copy1

0xd977,	// (0x00098e06) main_cset_text_pane_t3_copy1

0xd985,	// (0x00098e14) main_cset_text_pane_t4_copy1

0xd993,	// (0x00098e22) main_cset_text_pane_t5_copy1

0xe0b2,	// (0x00099541) main_cset_text_pane_t6_copy1

0xe0c0,	// (0x0009954f) main_cset_text_pane_t7_copy1

0x7a96,	// (0x00092f25) main_cset_text2_pane_t1_copy1

0xa54e,	// (0x000959dd) main_ncimui_pane

0x4254,	// (0x0008f6e3) popup_query_ncimui_window_ParamLimits

0x4254,	// (0x0008f6e3) popup_query_ncimui_window

0x9ed4,	// (0x00095363) field_cale_ev2_pane_g4_ParamLimits

0x9ed4,	// (0x00095363) field_cale_ev2_pane_g4

0x5e8a,	// (0x00091319) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5e8a,	// (0x00091319) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0009ad09) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0009ad09) cell_video_dialer_keypad_pane_g

0x5ea2,	// (0x00091331) cell_video_dialer_keypad_pane_t1

0x97e8,	// (0x00094c77) bg_popup_window_pane_cp012

0xb16b,	// (0x000965fa) heading_pane_cp06

0xe0ec,	// (0x0009957b) ncim_query_content_pane

0x97e8,	// (0x00094c77) bg_popup_heading_pane_cp01

0xe0f4,	// (0x00099583) ncim_heading_pane_t1

0xe102,	// (0x00099591) ncim_indicator_popup_pane

0xe114,	// (0x000995a3) ncim_query_button_pane

0xe128,	// (0x000995b7) ncim_query_content_pane_t1

0xe13a,	// (0x000995c9) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x0009b073) ncim_query_content_pane_t

0xe174,	// (0x00099603) ncim_query_list_pane

0xe186,	// (0x00099615) ncim_query_popup_pane

0xe102,	// (0x00099591) ncim_indicator_popup_pane_ParamLimits

0x7e34,	// (0x000932c3) ncim_query_content_pane_g1_ParamLimits

0x7e34,	// (0x000932c3) ncim_query_content_pane_g1

0xe128,	// (0x000995b7) ncim_query_content_pane_t1_ParamLimits

0xe13a,	// (0x000995c9) ncim_query_content_pane_t2_ParamLimits

0x7e40,	// (0x000932cf) ncim_query_content_pane_t3_ParamLimits

0x7e40,	// (0x000932cf) ncim_query_content_pane_t3

0x7e68,	// (0x000932f7) ncim_query_content_pane_t4_ParamLimits

0x7e68,	// (0x000932f7) ncim_query_content_pane_t4

0x7e90,	// (0x0009331f) ncim_query_content_pane_t5_ParamLimits

0x7e90,	// (0x0009331f) ncim_query_content_pane_t5

0xe14c,	// (0x000995db) ncim_query_content_pane_t6_ParamLimits

0xe14c,	// (0x000995db) ncim_query_content_pane_t6

0xfbe4,	// (0x0009b073) ncim_query_content_pane_t_ParamLimits

0xe174,	// (0x00099603) ncim_query_list_pane_ParamLimits

0xe186,	// (0x00099615) ncim_query_popup_pane_ParamLimits

0xe19a,	// (0x00099629) wait_bar_pane_cp04

0x97e8,	// (0x00094c77) input_focus_pane_cp011

0xe1a2,	// (0x00099631) ncim_query_popup_pane_t1

0xe1b0,	// (0x0009963f) ncim_list_query_list_pane_ParamLimits

0xe1b0,	// (0x0009963f) ncim_list_query_list_pane

0x97e8,	// (0x00094c77) bg_button_pane_cp027

0xe1bd,	// (0x0009964c) ncim_query_button_pane_g1

0x97e8,	// (0x00094c77) list_highlight_pane_cp012

0xe1c7,	// (0x00099656) ncim_list_query_list_pane_g1

0xe1cf,	// (0x0009965e) ncim_list_query_list_pane_t1

0xa219,	// (0x000956a8) cam4_indicators_pane_g3_ParamLimits

0xa219,	// (0x000956a8) cam4_indicators_pane_g3

0xa299,	// (0x00095728) vid4_indicators_pane_g5_ParamLimits

0xa299,	// (0x00095728) vid4_indicators_pane_g5

0xa370,	// (0x000957ff) vid4_progress_pane_g5_ParamLimits

0xa370,	// (0x000957ff) vid4_progress_pane_g5

0x7d1f,	// (0x000931ae) main_ncimui_pane_g1

0x7d88,	// (0x00093217) ncimui_group_query_pane_ParamLimits

0x7d88,	// (0x00093217) ncimui_group_query_pane

0x7dd0,	// (0x0009325f) ncimui_list_pane_ParamLimits

0x7dd0,	// (0x0009325f) ncimui_list_pane

0x7df7,	// (0x00093286) ncimui_text_pane_ParamLimits

0x7df7,	// (0x00093286) ncimui_text_pane

0x7eb8,	// (0x00093347) ncimui_text_pane_t1_ParamLimits

0x7eb8,	// (0x00093347) ncimui_text_pane_t1

0xe1dd,	// (0x0009966c) ncimui_list_single_graphic_pane_ParamLimits

0xe1dd,	// (0x0009966c) ncimui_list_single_graphic_pane

0x7ed6,	// (0x00093365) ncimui_query_pane_ParamLimits

0x7ed6,	// (0x00093365) ncimui_query_pane

0x97e8,	// (0x00094c77) list_highlight_pane_cp013

0xe1ed,	// (0x0009967c) ncim_list_query_list_pane_t1_copy1

0xe1c7,	// (0x00099656) ncim_list_single_graphic_pane_g1

0x7ee9,	// (0x00093378) ncim_query_button_pane_cp01

0x7ef5,	// (0x00093384) ncim_query_entry_pane_ParamLimits

0x7ef5,	// (0x00093384) ncim_query_entry_pane

0x7f08,	// (0x00093397) ncimui_query_pane_g1

0x7f14,	// (0x000933a3) ncimui_query_pane_t1_ParamLimits

0x7f14,	// (0x000933a3) ncimui_query_pane_t1

0xa54e,	// (0x000959dd) input_focus_pane_cp012

0xe1fb,	// (0x0009968a) ncim_query_entry_pane_t1

0xa8ab,	// (0x00095d3a) main_im_pane_ParamLimits

0xa54e,	// (0x000959dd) main_mobtv_pane_ParamLimits

0xa54e,	// (0x000959dd) main_mobtv_pane

0x7b9c,	// (0x0009302b) main_cset6_slider_pane_g18_ParamLimits

0x7b9c,	// (0x0009302b) main_cset6_slider_pane_g18

0x7ba8,	// (0x00093037) main_cset6_slider_pane_g19_ParamLimits

0x7ba8,	// (0x00093037) main_cset6_slider_pane_g19

0xb28d,	// (0x0009671c) bg_main_mobtv_pane_ParamLimits

0xb28d,	// (0x0009671c) bg_main_mobtv_pane

0x7f2d,	// (0x000933bc) main_mobtv_info_pane

0x7f36,	// (0x000933c5) main_mobtv_loading_pane_ParamLimits

0x7f36,	// (0x000933c5) main_mobtv_loading_pane

0xe20d,	// (0x0009969c) main_mobtv_pg_channel_list_pane

0xe217,	// (0x000996a6) main_mobtv_pg_hdr_pane

0x7f43,	// (0x000933d2) main_mobtv_programe_curr_pane_ParamLimits

0x7f43,	// (0x000933d2) main_mobtv_programe_curr_pane

0x7f50,	// (0x000933df) main_mobtv_programe_next_pane_ParamLimits

0x7f50,	// (0x000933df) main_mobtv_programe_next_pane

0xe220,	// (0x000996af) popup_mobtv_noti_window

0xcd11,	// (0x000981a0) main_tv_pg_hdr_pane_g1

0xe228,	// (0x000996b7) main_tv_pg_hdr_pane_g2

0xe230,	// (0x000996bf) main_tv_pg_hdr_pane_g3

0xe238,	// (0x000996c7) main_tv_pg_hdr_pane_g4

0xe240,	// (0x000996cf) main_tv_pg_hdr_pane_g5

0xe24a,	// (0x000996d9) main_tv_pg_hdr_pane_g6

0xe254,	// (0x000996e3) main_tv_pg_hdr_pane_g7

0xe25e,	// (0x000996ed) main_tv_pg_hdr_pane_g8

0xe268,	// (0x000996f7) main_tv_pg_hdr_pane_g9

0xe272,	// (0x00099701) main_tv_pg_hdr_pane_g10

0xe27c,	// (0x0009970b) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x0009b080) main_tv_pg_hdr_pane_g

0xe286,	// (0x00099715) main_tv_pg_hdr_pane_t1

0xe294,	// (0x00099723) main_tv_pg_hdr_pane_t2

0xe2a2,	// (0x00099731) main_tv_pg_hdr_pane_t3

0xe2b2,	// (0x00099741) main_tv_pg_hdr_pane_t4

0xe2c2,	// (0x00099751) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x0009b097) main_tv_pg_hdr_pane_t

0xe2d2,	// (0x00099761) single_mobtv_pg_channel_pane_ParamLimits

0xe2d2,	// (0x00099761) single_mobtv_pg_channel_pane

0xe2e4,	// (0x00099773) single_mobtv_pg_channel_table_pane

0xe2ed,	// (0x0009977c) single_mobtv_pg_channel_thumb_pane

0xe2f6,	// (0x00099785) single_tv_pg_channel_pane_g1

0xe2ff,	// (0x0009978e) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x0009b0a2) single_tv_pg_channel_pane_g

0xcf74,	// (0x00098403) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf74,	// (0x00098403) bg_single_mobtv_pg_channel_thumb_pane

0xe308,	// (0x00099797) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe308,	// (0x00099797) single_mobtv_pg_channel_thumb_pane_g1

0xe316,	// (0x000997a5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe316,	// (0x000997a5) single_mobtv_pg_channel_thumb_pane_g2

0xe322,	// (0x000997b1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe322,	// (0x000997b1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x0009b0a7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x0009b0a7) single_mobtv_pg_channel_thumb_pane_g

0xe32e,	// (0x000997bd) single_mobtv_pg_channel_thumb_pane_t1

0xe33c,	// (0x000997cb) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x0009b0ae) single_mobtv_pg_channel_thumb_pane_t

0xcd11,	// (0x000981a0) bg_single_mobtv_pg_channel_table_pane_g1

0xcd11,	// (0x000981a0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0009ab50) bg_single_mobtv_pg_channel_table_pane_g

0xe34a,	// (0x000997d9) single_mobtv_pg_channel_table_pane_t1

0xe358,	// (0x000997e7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x0009b0b3) single_mobtv_pg_channel_table_pane_t

0x7f65,	// (0x000933f4) main_mobtv_info_pane_g1_ParamLimits

0x7f65,	// (0x000933f4) main_mobtv_info_pane_g1

0x7f83,	// (0x00093412) main_mobtv_info_pane_t1_ParamLimits

0x7f83,	// (0x00093412) main_mobtv_info_pane_t1

0x7ffb,	// (0x0009348a) main_mobtv_info_pane_t2_ParamLimits

0x7ffb,	// (0x0009348a) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x0009b0bd) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x0009b0bd) main_mobtv_info_pane_t

0x808a,	// (0x00093519) wait_bar_pane_cp05

0x809c,	// (0x0009352b) main_mobtv_loading_pane_g1_ParamLimits

0x809c,	// (0x0009352b) main_mobtv_loading_pane_g1

0x80af,	// (0x0009353e) main_mobtv_loading_pane_g2_ParamLimits

0x80af,	// (0x0009353e) main_mobtv_loading_pane_g2

0x80bb,	// (0x0009354a) main_mobtv_loading_pane_g3_ParamLimits

0x80bb,	// (0x0009354a) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x0009b0c4) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x0009b0c4) main_mobtv_loading_pane_g

0xe366,	// (0x000997f5) main_mobtv_loading_pane_t1_ParamLimits

0xe366,	// (0x000997f5) main_mobtv_loading_pane_t1

0xe37e,	// (0x0009980d) main_mobtv_loading_pane_t2_ParamLimits

0xe37e,	// (0x0009980d) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x0009b0cb) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x0009b0cb) main_mobtv_loading_pane_t

0x80ce,	// (0x0009355d) wait_bar_pane_cp06_ParamLimits

0x80ce,	// (0x0009355d) wait_bar_pane_cp06

0xe3a2,	// (0x00099831) main_mobtv_programe_curr_pane_t1

0xe3b0,	// (0x0009983f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x0009b0d0) main_mobtv_programe_curr_pane_t

0xe3be,	// (0x0009984d) main_mobtv_programe_next_pane_t1

0xe3cc,	// (0x0009985b) main_mobtv_programe_next_pane_t2

0xe3da,	// (0x00099869) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x0009b0d5) main_mobtv_programe_next_pane_t

0x97e8,	// (0x00094c77) bg_popup_mobtv_noti_window_pane

0xe3e8,	// (0x00099877) popup_mobtv_noti_window_g1

0xe3f0,	// (0x0009987f) popup_mobtv_noti_window_t1

0xe3fe,	// (0x0009988d) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x0009b0dc) popup_mobtv_noti_window_t

0xcd11,	// (0x000981a0) bg_popup_mobtv_noti_window_pane_g1

0x97e8,	// (0x00094c77) sc_clock_pane

0x97e8,	// (0x00094c77) main_fs_bigclock_pane

0x77e7,	// (0x00092c76) blid2_tripm_pane_t4_ParamLimits

0x77e7,	// (0x00092c76) blid2_tripm_pane_t4

0x80dd,	// (0x0009356c) sc_clock_pane_g1_ParamLimits

0x80dd,	// (0x0009356c) sc_clock_pane_g1

0x80ef,	// (0x0009357e) sc_clock_pane_t1_ParamLimits

0x80ef,	// (0x0009357e) sc_clock_pane_t1

0x8111,	// (0x000935a0) sc_clock_pane_t2_ParamLimits

0x8111,	// (0x000935a0) sc_clock_pane_t2

0x8129,	// (0x000935b8) sc_clock_pane_t3_ParamLimits

0x8129,	// (0x000935b8) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x0009b0e1) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x0009b0e1) sc_clock_pane_t

0x8d1d,	// (0x000941ac) main_fs_bigclock_indicator_pane_ParamLimits

0x8d1d,	// (0x000941ac) main_fs_bigclock_indicator_pane

0x81cf,	// (0x0009365e) main_fs_bigclock_pane_g1_ParamLimits

0x81cf,	// (0x0009365e) main_fs_bigclock_pane_g1

0x8d29,	// (0x000941b8) main_fs_bigclock_pane_t1_ParamLimits

0x8d29,	// (0x000941b8) main_fs_bigclock_pane_t1

0x8d3b,	// (0x000941ca) main_fs_bigclock_pane_t2_ParamLimits

0x8d3b,	// (0x000941ca) main_fs_bigclock_pane_t2

0x8d4f,	// (0x000941de) main_fs_bigclock_pane_t3_ParamLimits

0x8d4f,	// (0x000941de) main_fs_bigclock_pane_t3

0x0002,

0xfe60,	// (0x0009b2ef) main_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x0009b2ef) main_fs_bigclock_pane_t

0xec38,	// (0x0009a0c7) main_fs_bigclock_indicator_pane_g1

0xe11c,	// (0x000995ab) ncim_query_content_pane_g2_ParamLimits

0xe11c,	// (0x000995ab) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x0009b06e) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x0009b06e) ncim_query_content_pane_g

0x8142,	// (0x000935d1) sc_clock_pane_t4_ParamLimits

0x8142,	// (0x000935d1) sc_clock_pane_t4

0xa54e,	// (0x000959dd) main_radioblah_pane

0xa18b,	// (0x0009561a) cell_call4_button_pane_t1_copy1_ParamLimits

0xa18b,	// (0x0009561a) cell_call4_button_pane_t1_copy1

0x7d37,	// (0x000931c6) main_ncimui_pane_t1_ParamLimits

0x7d37,	// (0x000931c6) main_ncimui_pane_t1

0x7d51,	// (0x000931e0) main_ncimui_pane_t2_ParamLimits

0x7d51,	// (0x000931e0) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x0009b067) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x0009b067) main_ncimui_pane_t

0xe543,	// (0x000999d2) main_radioblah_anim_pane_ParamLimits

0xe543,	// (0x000999d2) main_radioblah_anim_pane

0xe554,	// (0x000999e3) main_radioblah_info_pane_ParamLimits

0xe554,	// (0x000999e3) main_radioblah_info_pane

0xe568,	// (0x000999f7) main_radioblah_pane_t1_ParamLimits

0xe568,	// (0x000999f7) main_radioblah_pane_t1

0xe584,	// (0x00099a13) main_radioblah_pane_t2_ParamLimits

0xe584,	// (0x00099a13) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x0009b102) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x0009b102) main_radioblah_pane_t

0x822e,	// (0x000936bd) main_radioblah_rocker_ctrl_pane_ParamLimits

0x822e,	// (0x000936bd) main_radioblah_rocker_ctrl_pane

0xe5cc,	// (0x00099a5b) main_radioblah_info_pane_t1_ParamLimits

0xe5cc,	// (0x00099a5b) main_radioblah_info_pane_t1

0x8286,	// (0x00093715) main_radioblah_info_pane_t2_ParamLimits

0x8286,	// (0x00093715) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x0009b10b) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x0009b10b) main_radioblah_info_pane_t

0xcd11,	// (0x000981a0) main_radioblah_rocker_ctrl_pane_g1

0x8336,	// (0x000937c5) main_radioblah_rocker_ctrl_pane_g2

0x833e,	// (0x000937cd) main_radioblah_rocker_ctrl_pane_g3

0x8346,	// (0x000937d5) main_radioblah_rocker_ctrl_pane_g4

0x834e,	// (0x000937dd) main_radioblah_rocker_ctrl_pane_g5

0x8356,	// (0x000937e5) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x0009b114) main_radioblah_rocker_ctrl_pane_g

0x7a96,	// (0x00092f25) main_cset_text2_pane_t1_copy1_ParamLimits

0xa1e9,	// (0x00095678) cam4_image_uncrop_qvga_pane

0xa242,	// (0x000956d1) vid4_image_uncrop_qcif_pane

0xa3ae,	// (0x0009583d) cam6_image_uncrop_qvga_pane_ParamLimits

0xa3ae,	// (0x0009583d) cam6_image_uncrop_qvga_pane

0xde23,	// (0x000992b2) vid6_image_uncrop_qcif_pane_ParamLimits

0xde23,	// (0x000992b2) vid6_image_uncrop_qcif_pane

0x97e8,	// (0x00094c77) bg_popup_preview_window_pane_cp03

0xe0ce,	// (0x0009955d) list_cset_text2_pane

0xe0d6,	// (0x00099565) main_cset6_text2_pane_g1

0xe0de,	// (0x0009956d) main_cset6_text2_pane_t1

0x835e,	// (0x000937ed) list_cset_text2_pane_t1_ParamLimits

0x835e,	// (0x000937ed) list_cset_text2_pane_t1

0xa54e,	// (0x000959dd) main_radioblah_pane_ParamLimits

0x8076,	// (0x00093505) main_mobtv_info_pane_t3_ParamLimits

0x8076,	// (0x00093505) main_mobtv_info_pane_t3

0x821c,	// (0x000936ab) main_radioblah_pane_g1

0x8256,	// (0x000936e5) main_radioblah_info_pane_g1

0x82db,	// (0x0009376a) main_radioblah_info_pane_t3_ParamLimits

0x82db,	// (0x0009376a) main_radioblah_info_pane_t3

0x2e3f,	// (0x0008e2ce) highlight_cell_cale_month_pane_ParamLimits

0x2e3f,	// (0x0008e2ce) highlight_cell_cale_month_pane

0x97e8,	// (0x00094c77) main_phob_fisheye_pane

0xd070,	// (0x000984ff) scroll_pane_cp0031_ParamLimits

0xd070,	// (0x000984ff) scroll_pane_cp0031

0xdf31,	// (0x000993c0) wait_bar_pane_cp08_ParamLimits

0x7b1b,	// (0x00092faa) cset_list_set_pane_copy1_ParamLimits

0xe606,	// (0x00099a95) highlight_cell_cale_month_pane_g1

0x8377,	// (0x00093806) highlight_cell_cale_month_pane_t1

0xdbc6,	// (0x00099055) list_gen_pane_cp01

0xd802,	// (0x00098c91) scroll_pane_01

0xb29b,	// (0x0009672a) list_single_double_fisheye_pane

0x06fe,	// (0x0008bb8d) list_double_fisheye_pane_g1_ParamLimits

0x06fe,	// (0x0008bb8d) list_double_fisheye_pane_g1

0x070a,	// (0x0008bb99) list_double_fisheye_pane_g2_ParamLimits

0x070a,	// (0x0008bb99) list_double_fisheye_pane_g2

0x8385,	// (0x00093814) list_double_fisheye_pane_g3_ParamLimits

0x8385,	// (0x00093814) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x0009b121) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x0009b121) list_double_fisheye_pane_g

0x073b,	// (0x0008bbca) list_double_fisheye_pane_t1_ParamLimits

0x073b,	// (0x0008bbca) list_double_fisheye_pane_t1

0x0756,	// (0x0008bbe5) list_double_fisheye_pane_t2_ParamLimits

0x0756,	// (0x0008bbe5) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x0009b12c) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x0009b12c) list_double_fisheye_pane_t

0x97e8,	// (0x00094c77) main_call5_pane

0x816d,	// (0x000935fc) sc_swipe_pane_ParamLimits

0x816d,	// (0x000935fc) sc_swipe_pane

0x83a4,	// (0x00093833) call5_image_pane_ParamLimits

0x83a4,	// (0x00093833) call5_image_pane

0x83c1,	// (0x00093850) call5_swipe_1_pane_ParamLimits

0x83c1,	// (0x00093850) call5_swipe_1_pane

0x83d4,	// (0x00093863) call5_swipe_2_pane_ParamLimits

0x83d4,	// (0x00093863) call5_swipe_2_pane

0x83ff,	// (0x0009388e) popup_call5_audio_first_window_ParamLimits

0x83ff,	// (0x0009388e) popup_call5_audio_first_window

0xcf74,	// (0x00098403) call5_swipe_1_pane_g1_ParamLimits

0xcf74,	// (0x00098403) call5_swipe_1_pane_g1

0xe60e,	// (0x00099a9d) call5_swipe_1_pane_g2_ParamLimits

0xe60e,	// (0x00099a9d) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x0009b131) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x0009b131) call5_swipe_1_pane_g

0xe61a,	// (0x00099aa9) call5_swipe_1_pane_t1_ParamLimits

0xe61a,	// (0x00099aa9) call5_swipe_1_pane_t1

0xcf74,	// (0x00098403) call5_swipe_2_pane_g1_ParamLimits

0xcf74,	// (0x00098403) call5_swipe_2_pane_g1

0xe62f,	// (0x00099abe) call5_swipe_2_pane_g2_ParamLimits

0xe62f,	// (0x00099abe) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x0009b136) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x0009b136) call5_swipe_2_pane_g

0xe63b,	// (0x00099aca) call5_swipe_2_pane_t1_ParamLimits

0xe63b,	// (0x00099aca) call5_swipe_2_pane_t1

0xe650,	// (0x00099adf) sc_swipe_pane_g1_ParamLimits

0xe650,	// (0x00099adf) sc_swipe_pane_g1

0xe65d,	// (0x00099aec) sc_swipe_pane_g2_ParamLimits

0xe65d,	// (0x00099aec) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x0009b13b) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x0009b13b) sc_swipe_pane_g

0xe669,	// (0x00099af8) sc_swipe_pane_t1_ParamLimits

0xe669,	// (0x00099af8) sc_swipe_pane_t1

0x97e8,	// (0x00094c77) main_cmail_launcher_pane

0x8410,	// (0x0009389f) aid_size_cell_cmail_l_ParamLimits

0x8410,	// (0x0009389f) aid_size_cell_cmail_l

0x841e,	// (0x000938ad) grid_cmail_l_pane_ParamLimits

0x841e,	// (0x000938ad) grid_cmail_l_pane

0x8438,	// (0x000938c7) cell_cmail_l_pane_ParamLimits

0x8438,	// (0x000938c7) cell_cmail_l_pane

0xe67e,	// (0x00099b0d) cell_cmail_l_pane_g1_ParamLimits

0xe67e,	// (0x00099b0d) cell_cmail_l_pane_g1

0xe68a,	// (0x00099b19) cell_cmail_l_pane_t1_ParamLimits

0xe68a,	// (0x00099b19) cell_cmail_l_pane_t1

0xe6a0,	// (0x00099b2f) cell_cmail_l_pane_t2_ParamLimits

0xe6a0,	// (0x00099b2f) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x0009b140) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x0009b140) cell_cmail_l_pane_t

0xa54e,	// (0x000959dd) grid_highlight_pane_cp018_ParamLimits

0xa54e,	// (0x000959dd) grid_highlight_pane_cp018

0x0fe5,	// (0x0008c474) main2_pane_ParamLimits

0x0fe5,	// (0x0008c474) main2_pane

0xa94d,	// (0x00095ddc) popup_sp_fs_action_menu_bg_pane_g1

0xa955,	// (0x00095de4) popup_sp_fs_action_menu_bg_pane_g2

0xa95d,	// (0x00095dec) popup_sp_fs_action_menu_bg_pane_g3

0xa965,	// (0x00095df4) popup_sp_fs_action_menu_bg_pane_g4

0xa96d,	// (0x00095dfc) popup_sp_fs_action_menu_bg_pane_g5

0xa975,	// (0x00095e04) popup_sp_fs_action_menu_bg_pane_g6

0xa97d,	// (0x00095e0c) popup_sp_fs_action_menu_bg_pane_g7

0xa985,	// (0x00095e14) popup_sp_fs_action_menu_bg_pane_g8

0xa98d,	// (0x00095e1c) popup_sp_fs_action_menu_bg_pane_g9

0xa995,	// (0x00095e24) popup_sp_fs_action_menu_bg_pane_g10

0xa995,	// (0x00095e24) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0009a5fe) popup_sp_fs_action_menu_bg_pane_g

0x006d,	// (0x0008b4fc) list_medium_line_x2_t3_g3_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x2_t3_g3_g1

0x1f03,	// (0x0008d392) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1f03,	// (0x0008d392) list_medium_line_x2_t3_g3_g2

0x0079,	// (0x0008b508) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0079,	// (0x0008b508) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0009a6ac) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0009a6ac) list_medium_line_x2_t3_g3_g

0x0085,	// (0x0008b514) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0085,	// (0x0008b514) list_medium_line_x2_t3_g3_t1

0x009a,	// (0x0008b529) list_medium_line_x2_t3_g3_t2_ParamLimits

0x009a,	// (0x0008b529) list_medium_line_x2_t3_g3_t2

0x00ae,	// (0x0008b53d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x00ae,	// (0x0008b53d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0009a6b3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0009a6b3) list_medium_line_x2_t3_g3_t

0x006d,	// (0x0008b4fc) list_medium_line_x2_t3_g2_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x2_t3_g2_g1

0x0079,	// (0x0008b508) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0079,	// (0x0008b508) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0009a6ba) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0009a6ba) list_medium_line_x2_t3_g2_g

0x00c3,	// (0x0008b552) list_medium_line_x2_t3_g2_t1_ParamLimits

0x00c3,	// (0x0008b552) list_medium_line_x2_t3_g2_t1

0x00d9,	// (0x0008b568) list_medium_line_x2_t3_g2_t2_ParamLimits

0x00d9,	// (0x0008b568) list_medium_line_x2_t3_g2_t2

0x00ae,	// (0x0008b53d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x00ae,	// (0x0008b53d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0009a6bf) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0009a6bf) list_medium_line_x2_t3_g2_t

0x006d,	// (0x0008b4fc) list_medium_line_x2_t4_g4_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x2_t4_g4_g1

0x1f0f,	// (0x0008d39e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1f0f,	// (0x0008d39e) list_medium_line_x2_t4_g4_g2

0x1f03,	// (0x0008d392) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1f03,	// (0x0008d392) list_medium_line_x2_t4_g4_g3

0x00eb,	// (0x0008b57a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x00eb,	// (0x0008b57a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0009a6c6) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0009a6c6) list_medium_line_x2_t4_g4_g

0x00f7,	// (0x0008b586) list_medium_line_x2_t4_g4_t1_ParamLimits

0x00f7,	// (0x0008b586) list_medium_line_x2_t4_g4_t1

0x0111,	// (0x0008b5a0) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0111,	// (0x0008b5a0) list_medium_line_x2_t4_g4_t2

0x0127,	// (0x0008b5b6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0127,	// (0x0008b5b6) list_medium_line_x2_t4_g4_t3

0x013c,	// (0x0008b5cb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x013c,	// (0x0008b5cb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0009a6cf) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0009a6cf) list_medium_line_x2_t4_g4_t

0x006d,	// (0x0008b4fc) list_medium_line_x2_t2_g4_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x2_t2_g4_g1

0x1f0f,	// (0x0008d39e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1f0f,	// (0x0008d39e) list_medium_line_x2_t2_g4_g2

0x1f03,	// (0x0008d392) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1f03,	// (0x0008d392) list_medium_line_x2_t2_g4_g3

0x0079,	// (0x0008b508) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0079,	// (0x0008b508) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0009a736) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0009a736) list_medium_line_x2_t2_g4_g

0x014e,	// (0x0008b5dd) list_medium_line_x2_t2_g4_t1_ParamLimits

0x014e,	// (0x0008b5dd) list_medium_line_x2_t2_g4_t1

0x00ae,	// (0x0008b53d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x00ae,	// (0x0008b53d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0009a73f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0009a73f) list_medium_line_x2_t2_g4_t

0x006d,	// (0x0008b4fc) list_medium_line_x2_t2_g3_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x2_t2_g3_g1

0x1f03,	// (0x0008d392) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1f03,	// (0x0008d392) list_medium_line_x2_t2_g3_g2

0x0079,	// (0x0008b508) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0079,	// (0x0008b508) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0009a6ac) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0009a6ac) list_medium_line_x2_t2_g3_g

0x0163,	// (0x0008b5f2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0163,	// (0x0008b5f2) list_medium_line_x2_t2_g3_t1

0x00ae,	// (0x0008b53d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x00ae,	// (0x0008b53d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0009a744) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0009a744) list_medium_line_x2_t2_g3_t

0x2f99,	// (0x0008e428) main_sp_fs_list_pane_ParamLimits

0x2f99,	// (0x0008e428) main_sp_fs_list_pane

0xc08e,	// (0x0009751d) sp_fs_scroll_pane_ParamLimits

0xc08e,	// (0x0009751d) sp_fs_scroll_pane

0x0178,	// (0x0008b607) list_medium_line_x2_t3_t1

0x0188,	// (0x0008b617) list_medium_line_x2_t3_t2

0x0196,	// (0x0008b625) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0009a78f) list_medium_line_x2_t3_t

0x01a4,	// (0x0008b633) list_medium_line_x3_t4_t1

0x01b4,	// (0x0008b643) list_medium_line_x3_t4_t2

0x01c2,	// (0x0008b651) list_medium_line_x3_t4_t3

0x0196,	// (0x0008b625) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0009a796) list_medium_line_x3_t4_t

0x01d0,	// (0x0008b65f) list_medium_line_x4_t5_t1

0x01e0,	// (0x0008b66f) list_medium_line_x4_t5_t2

0x01c2,	// (0x0008b651) list_medium_line_x4_t5_t3

0x01ee,	// (0x0008b67d) list_medium_line_x4_t5_t4

0x0196,	// (0x0008b625) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0009a79f) list_medium_line_x4_t5_t

0x006d,	// (0x0008b4fc) list_medium_line_t4_g4_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_t4_g4_g1

0x01fc,	// (0x0008b68b) list_medium_line_t4_g4_g2_ParamLimits

0x01fc,	// (0x0008b68b) list_medium_line_t4_g4_g2

0x0208,	// (0x0008b697) list_medium_line_t4_g4_g3_ParamLimits

0x0208,	// (0x0008b697) list_medium_line_t4_g4_g3

0x0079,	// (0x0008b508) list_medium_line_t4_g4_g4_ParamLimits

0x0079,	// (0x0008b508) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0009a7aa) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0009a7aa) list_medium_line_t4_g4_g

0x0214,	// (0x0008b6a3) list_medium_line_t4_g4_t1_ParamLimits

0x0214,	// (0x0008b6a3) list_medium_line_t4_g4_t1

0x0229,	// (0x0008b6b8) list_medium_line_t4_g4_t2_ParamLimits

0x0229,	// (0x0008b6b8) list_medium_line_t4_g4_t2

0x023e,	// (0x0008b6cd) list_medium_line_t4_g4_t3_ParamLimits

0x023e,	// (0x0008b6cd) list_medium_line_t4_g4_t3

0x00ae,	// (0x0008b53d) list_medium_line_t4_g4_t4_ParamLimits

0x00ae,	// (0x0008b53d) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0009a7b3) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0009a7b3) list_medium_line_t4_g4_t

0x3058,	// (0x0008e4e7) chi_dic_find_pane_g1

0x401e,	// (0x0008f4ad) main_tport_pane

0x043d,	// (0x0008b8cc) list_medium_line_plain_t1

0x044b,	// (0x0008b8da) list_medium_line_t2_g2_g1_ParamLimits

0x044b,	// (0x0008b8da) list_medium_line_t2_g2_g1

0x0457,	// (0x0008b8e6) list_medium_line_t2_g2_g2_ParamLimits

0x0457,	// (0x0008b8e6) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0009ae78) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0009ae78) list_medium_line_t2_g2_g

0x0463,	// (0x0008b8f2) list_medium_line_t2_g2_t1_ParamLimits

0x0463,	// (0x0008b8f2) list_medium_line_t2_g2_t1

0x047d,	// (0x0008b90c) list_medium_line_t2_g2_t2_ParamLimits

0x047d,	// (0x0008b90c) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0009ae7d) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0009ae7d) list_medium_line_t2_g2_t

0x75a0,	// (0x00092a2f) aid_sp_fs_list_icon_a_sm

0xa3a6,	// (0x00095835) aid_sp_fs_list_icon_d

0xb284,	// (0x00096713) aid_sp_fs_text_primary

0x75a8,	// (0x00092a37) aid_sp_fs_text_secondary

0x75b1,	// (0x00092a40) list_medium_line

0x75b1,	// (0x00092a40) list_medium_line_g2

0x75b1,	// (0x00092a40) list_medium_line_g3

0x75b1,	// (0x00092a40) list_medium_line_plain

0x75b1,	// (0x00092a40) list_medium_line_plain_t2

0x75b1,	// (0x00092a40) list_medium_line_plain_t3

0x75b1,	// (0x00092a40) list_medium_line_right_icon

0x75b1,	// (0x00092a40) list_medium_line_right_iconx2

0x75b1,	// (0x00092a40) list_medium_line_t2

0x75b1,	// (0x00092a40) list_medium_line_t2_g2

0x75b1,	// (0x00092a40) list_medium_line_t2_g3

0x75b1,	// (0x00092a40) list_medium_line_t2_right_icon

0x75b1,	// (0x00092a40) list_medium_line_t2_right_iconx2

0x75b1,	// (0x00092a40) list_medium_line_t3

0x75b1,	// (0x00092a40) list_medium_line_t3_g2

0x75b1,	// (0x00092a40) list_medium_line_t3_g3

0x75b1,	// (0x00092a40) list_medium_line_t3_right_iconx2

0x75ba,	// (0x00092a49) list_medium_line_t4_g4

0x75b1,	// (0x00092a40) list_medium_line_x2

0x75b1,	// (0x00092a40) list_medium_line_x2_t2_g2

0x75b1,	// (0x00092a40) list_medium_line_x2_t2_g3

0x75b1,	// (0x00092a40) list_medium_line_x2_t2_g4

0x75b1,	// (0x00092a40) list_medium_line_x2_t3

0x75b1,	// (0x00092a40) list_medium_line_x2_t3_g2

0x75b1,	// (0x00092a40) list_medium_line_x2_t3_g3

0x75b1,	// (0x00092a40) list_medium_line_x2_t3_g4

0x75b1,	// (0x00092a40) list_medium_line_x2_t4_g2

0x75b1,	// (0x00092a40) list_medium_line_x2_t4_g4

0x75c3,	// (0x00092a52) list_medium_line_x3

0x75c3,	// (0x00092a52) list_medium_line_x3_t4

0x75c3,	// (0x00092a52) list_medium_line_x3_t4_g4

0x75ba,	// (0x00092a49) list_medium_line_x4_t4

0x75ba,	// (0x00092a49) list_medium_line_x4_t4_g7

0x75ba,	// (0x00092a49) list_medium_line_x4_t5

0x0609,	// (0x0008ba98) list_single_fs_dyc_pane_ParamLimits

0x0609,	// (0x0008ba98) list_single_fs_dyc_pane

0x006d,	// (0x0008b4fc) list_medium_line_x4_t4_g7_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x4_t4_g7_g1

0x0641,	// (0x0008bad0) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0641,	// (0x0008bad0) list_medium_line_x4_t4_g7_g2

0x7cf0,	// (0x0009317f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7cf0,	// (0x0009317f) list_medium_line_x4_t4_g7_g3

0x7cff,	// (0x0009318e) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7cff,	// (0x0009318e) list_medium_line_x4_t4_g7_g4

0x064d,	// (0x0008badc) list_medium_line_x4_t4_g7_g5_ParamLimits

0x064d,	// (0x0008badc) list_medium_line_x4_t4_g7_g5

0x065c,	// (0x0008baeb) list_medium_line_x4_t4_g7_g6_ParamLimits

0x065c,	// (0x0008baeb) list_medium_line_x4_t4_g7_g6

0x066b,	// (0x0008bafa) list_medium_line_x4_t4_g7_g7_ParamLimits

0x066b,	// (0x0008bafa) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x0009b048) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x0009b048) list_medium_line_x4_t4_g7_g

0x0677,	// (0x0008bb06) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0677,	// (0x0008bb06) list_medium_line_x4_t4_g7_t1

0x068c,	// (0x0008bb1b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x068c,	// (0x0008bb1b) list_medium_line_x4_t4_g7_t2

0x06a1,	// (0x0008bb30) list_medium_line_x4_t4_g7_t3_ParamLimits

0x06a1,	// (0x0008bb30) list_medium_line_x4_t4_g7_t3

0x06b6,	// (0x0008bb45) list_medium_line_x4_t4_g7_t4_ParamLimits

0x06b6,	// (0x0008bb45) list_medium_line_x4_t4_g7_t4

0x06c8,	// (0x0008bb57) list_medium_line_x4_t4_g7_t5_ParamLimits

0x06c8,	// (0x0008bb57) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x0009b057) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x0009b057) list_medium_line_x4_t4_g7_t

0x06da,	// (0x0008bb69) list_single_dyc_row_pane_ParamLimits

0x06da,	// (0x0008bb69) list_single_dyc_row_pane

0x8391,	// (0x00093820) call5_gesture_pane_ParamLimits

0x8391,	// (0x00093820) call5_gesture_pane

0x83e7,	// (0x00093876) call5_windows_pane_ParamLimits

0x83e7,	// (0x00093876) call5_windows_pane

0x8452,	// (0x000938e1) call5_swipe_1_pane_cp_ParamLimits

0x8452,	// (0x000938e1) call5_swipe_1_pane_cp

0x845e,	// (0x000938ed) call5_swipe_2_pane_cp_ParamLimits

0x845e,	// (0x000938ed) call5_swipe_2_pane_cp

0xaa79,	// (0x00095f08) call5_image_pane_cp

0x846a,	// (0x000938f9) popup_call5_audio_first_window_cp_ParamLimits

0x846a,	// (0x000938f9) popup_call5_audio_first_window_cp

0xe650,	// (0x00099adf) call5_swipe_1_pane_g1_cp_ParamLimits

0xe650,	// (0x00099adf) call5_swipe_1_pane_g1_cp

0xe6bd,	// (0x00099b4c) call5_swipe_1_pane_g2_cp

0xe669,	// (0x00099af8) call5_swipe_1_pane_t1_cp_ParamLimits

0xe669,	// (0x00099af8) call5_swipe_1_pane_t1_cp

0xe650,	// (0x00099adf) call5_swipe_2_pane_g1_cp_ParamLimits

0xe650,	// (0x00099adf) call5_swipe_2_pane_g1_cp

0xe6c5,	// (0x00099b54) call5_swipe_2_pane_g2_cp

0xe6cd,	// (0x00099b5c) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6cd,	// (0x00099b5c) call5_swipe_2_pane_t1_cp

0xa54e,	// (0x000959dd) main_sp_fs_email_pane

0xe6e2,	// (0x00099b71) main_sp_fs_listscroll_pane_te

0x8478,	// (0x00093907) popup_sp_fs_action_menu_pane_ParamLimits

0x8478,	// (0x00093907) popup_sp_fs_action_menu_pane

0xcd11,	// (0x000981a0) bg_sp_fs_ctrlbar_pane_g1

0xe6eb,	// (0x00099b7a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f4,	// (0x00099b83) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6fd,	// (0x00099b8c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd11,	// (0x000981a0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x0009b145) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaf6,	// (0x00097f85) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaf6,	// (0x00097f85) bg_sp_fs_ctrlbar_ddmenu_pane

0xe706,	// (0x00099b95) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe706,	// (0x00099b95) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe712,	// (0x00099ba1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe712,	// (0x00099ba1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x0009b14e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x0009b14e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71e,	// (0x00099bad) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71e,	// (0x00099bad) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0778,	// (0x0008bc07) list_medium_line_t2_right_icon_g1

0x0780,	// (0x0008bc0f) list_medium_line_t2_right_icon_t1

0x0790,	// (0x0008bc1f) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x0009b153) list_medium_line_t2_right_icon_t

0xc909,	// (0x00097d98) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc909,	// (0x00097d98) bg_sp_fs_ctrlbar_pane

0x8504,	// (0x00093993) main_sp_fs_ctrlbar_button_pane_cp01

0x850e,	// (0x0009399d) main_sp_fs_ctrlbar_ddmenu_pane

0xe770,	// (0x00099bff) main_sp_fs_ctrlbar_pane_g1

0xe77c,	// (0x00099c0b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x0009b158) main_sp_fs_ctrlbar_pane_g

0x854c,	// (0x000939db) main_sp_fs_ctrlbar_pane_t1

0x858b,	// (0x00093a1a) main_sp_fs_ctrlbar_pane

0x85af,	// (0x00093a3e) main_sp_fs_listscroll_pane_te_cp01

0x07a2,	// (0x0008bc31) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x07a2,	// (0x0008bc31) popup_sp_fs_action_menu_pane_cp01

0xa54e,	// (0x000959dd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa54e,	// (0x000959dd) bg_sp_fs_highlight_list_pane_cp01

0x85cf,	// (0x00093a5e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x85cf,	// (0x00093a5e) sp_fs_action_menu_list_gene_pane_g1

0xe7a3,	// (0x00099c32) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7a3,	// (0x00099c32) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x0009b166) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x0009b166) sp_fs_action_menu_list_gene_pane_g

0x85de,	// (0x00093a6d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x85de,	// (0x00093a6d) sp_fs_action_menu_list_gene_pane_t1

0x85f6,	// (0x00093a85) sp_fs_action_menu_list_gene_pane_ParamLimits

0x85f6,	// (0x00093a85) sp_fs_action_menu_list_gene_pane

0xe7b0,	// (0x00099c3f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7b0,	// (0x00099c3f) popup_sp_fs_action_menu_bg_pane

0x8617,	// (0x00093aa6) sp_fs_action_menu_list_pane_ParamLimits

0x8617,	// (0x00093aa6) sp_fs_action_menu_list_pane

0xa3bc,	// (0x0009584b) sp_fs_scroll_pane_cp01_ParamLimits

0xa3bc,	// (0x0009584b) sp_fs_scroll_pane_cp01

0x07d2,	// (0x0008bc61) list_medium_line_plain_t2_t1

0x07e2,	// (0x0008bc71) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x0009b16b) list_medium_line_plain_t2_t

0x07f2,	// (0x0008bc81) list_medium_line_plain_t3_t1

0x0802,	// (0x0008bc91) list_medium_line_plain_t3_t2

0x0810,	// (0x0008bc9f) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x0009b170) list_medium_line_plain_t3_t

0x006d,	// (0x0008b4fc) list_medium_line_x2_t2_g2_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x2_t2_g2_g1

0x0079,	// (0x0008b508) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0079,	// (0x0008b508) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0009a6ba) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0009a6ba) list_medium_line_x2_t2_g2_g

0x0214,	// (0x0008b6a3) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0214,	// (0x0008b6a3) list_medium_line_x2_t2_g2_t1

0x00ae,	// (0x0008b53d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x00ae,	// (0x0008b53d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x0009b177) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x0009b177) list_medium_line_x2_t2_g2_t

0x006d,	// (0x0008b4fc) list_medium_line_x2_t4_g2_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x2_t4_g2_g1

0x081e,	// (0x0008bcad) list_medium_line_x2_t4_g2_g2_ParamLimits

0x081e,	// (0x0008bcad) list_medium_line_x2_t4_g2_g2

0x0001,

0xfced,	// (0x0009b17c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfced,	// (0x0009b17c) list_medium_line_x2_t4_g2_g

0x0830,	// (0x0008bcbf) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0830,	// (0x0008bcbf) list_medium_line_x2_t4_g2_t1

0x084a,	// (0x0008bcd9) list_medium_line_x2_t4_g2_t2_ParamLimits

0x084a,	// (0x0008bcd9) list_medium_line_x2_t4_g2_t2

0x0860,	// (0x0008bcef) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0860,	// (0x0008bcef) list_medium_line_x2_t4_g2_t3

0x00ae,	// (0x0008b53d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x00ae,	// (0x0008b53d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf2,	// (0x0009b181) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf2,	// (0x0009b181) list_medium_line_x2_t4_g2_t

0x0875,	// (0x0008bd04) list_medium_line_t3_right_iconx2_g1

0x0778,	// (0x0008bc07) list_medium_line_t3_right_iconx2_g2

0x087d,	// (0x0008bd0c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcfb,	// (0x0009b18a) list_medium_line_t3_right_iconx2_g

0x0887,	// (0x0008bd16) list_medium_line_t3_right_iconx2_t1

0x0897,	// (0x0008bd26) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd02,	// (0x0009b191) list_medium_line_t3_right_iconx2_t

0x006d,	// (0x0008b4fc) list_medium_line_x3_t4_g4_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x3_t4_g4_g1

0x1f03,	// (0x0008d392) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1f03,	// (0x0008d392) list_medium_line_x3_t4_g4_g2

0x01fc,	// (0x0008b68b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x01fc,	// (0x0008b68b) list_medium_line_x3_t4_g4_g3

0x8639,	// (0x00093ac8) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8639,	// (0x00093ac8) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd07,	// (0x0009b196) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd07,	// (0x0009b196) list_medium_line_x3_t4_g4_g

0x08a5,	// (0x0008bd34) list_medium_line_x3_t4_g4_t1_ParamLimits

0x08a5,	// (0x0008bd34) list_medium_line_x3_t4_g4_t1

0x08bc,	// (0x0008bd4b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x08bc,	// (0x0008bd4b) list_medium_line_x3_t4_g4_t2

0x0229,	// (0x0008b6b8) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0229,	// (0x0008b6b8) list_medium_line_x3_t4_g4_t3

0x08d7,	// (0x0008bd66) list_medium_line_x3_t4_g4_t4_ParamLimits

0x08d7,	// (0x0008bd66) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd10,	// (0x0009b19f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd10,	// (0x0009b19f) list_medium_line_x3_t4_g4_t

0x08f4,	// (0x0008bd83) list_single_dyc_row_text_pane_t1_ParamLimits

0x08f4,	// (0x0008bd83) list_single_dyc_row_text_pane_t1

0x093d,	// (0x0008bdcc) list_single_dyc_row_text_pane_t2_ParamLimits

0x093d,	// (0x0008bdcc) list_single_dyc_row_text_pane_t2

0x8645,	// (0x00093ad4) list_single_dyc_row_text_pane_t3_ParamLimits

0x8645,	// (0x00093ad4) list_single_dyc_row_text_pane_t3

0x0005,

0xfd19,	// (0x0009b1a8) list_single_dyc_row_text_pane_t_ParamLimits

0xfd19,	// (0x0009b1a8) list_single_dyc_row_text_pane_t

0x8669,	// (0x00093af8) list_single_dyc_row_pane_g1_ParamLimits

0x8669,	// (0x00093af8) list_single_dyc_row_pane_g1

0x8675,	// (0x00093b04) list_single_dyc_row_pane_g2_ParamLimits

0x8675,	// (0x00093b04) list_single_dyc_row_pane_g2

0x8681,	// (0x00093b10) list_single_dyc_row_pane_g3_ParamLimits

0x8681,	// (0x00093b10) list_single_dyc_row_pane_g3

0x868d,	// (0x00093b1c) list_single_dyc_row_pane_g4_ParamLimits

0x868d,	// (0x00093b1c) list_single_dyc_row_pane_g4

0x0003,

0xfd26,	// (0x0009b1b5) list_single_dyc_row_pane_g_ParamLimits

0xfd26,	// (0x0009b1b5) list_single_dyc_row_pane_g

0x8699,	// (0x00093b28) list_single_dyc_row_text_pane_ParamLimits

0x8699,	// (0x00093b28) list_single_dyc_row_text_pane

0x97e8,	// (0x00094c77) bg_sp_fs_scroll_pane

0xe7be,	// (0x00099c4d) thumb_sp_fs_scroll_pane

0x044b,	// (0x0008b8da) list_medium_line_g1_ParamLimits

0x044b,	// (0x0008b8da) list_medium_line_g1

0x0a72,	// (0x0008bf01) list_medium_line_t1_ParamLimits

0x0a72,	// (0x0008bf01) list_medium_line_t1

0x006d,	// (0x0008b4fc) list_medium_line_x2_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x2_g1

0x1f03,	// (0x0008d392) list_medium_line_x2_g2_ParamLimits

0x1f03,	// (0x0008d392) list_medium_line_x2_g2

0x0001,

0xfd2f,	// (0x0009b1be) list_medium_line_x2_g_ParamLimits

0xfd2f,	// (0x0009b1be) list_medium_line_x2_g

0x86b8,	// (0x00093b47) list_medium_line_x2_t1_ParamLimits

0x86b8,	// (0x00093b47) list_medium_line_x2_t1

0x006d,	// (0x0008b4fc) list_medium_line_x3_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x3_g1

0x1f03,	// (0x0008d392) list_medium_line_x3_g2_ParamLimits

0x1f03,	// (0x0008d392) list_medium_line_x3_g2

0x0001,

0xfd2f,	// (0x0009b1be) list_medium_line_x3_g_ParamLimits

0xfd2f,	// (0x0009b1be) list_medium_line_x3_g

0x86b8,	// (0x00093b47) list_medium_line_x3_t1_ParamLimits

0x86b8,	// (0x00093b47) list_medium_line_x3_t1

0xe7c7,	// (0x00099c56) thumb_sp_fs_scroll_pane_g1

0xe7d0,	// (0x00099c5f) thumb_sp_fs_scroll_pane_g2

0xe7d9,	// (0x00099c68) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0009b1c3) thumb_sp_fs_scroll_pane_g

0xe7c7,	// (0x00099c56) bg_sp_fs_scroll_pane_g1

0xe7d0,	// (0x00099c5f) bg_sp_fs_scroll_pane_g2

0xe7d9,	// (0x00099c68) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0009b1c3) bg_sp_fs_scroll_pane_g

0x006d,	// (0x0008b4fc) list_medium_line_x2_t3_g4_g1_ParamLimits

0x006d,	// (0x0008b4fc) list_medium_line_x2_t3_g4_g1

0x1f0f,	// (0x0008d39e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1f0f,	// (0x0008d39e) list_medium_line_x2_t3_g4_g2

0x1f03,	// (0x0008d392) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1f03,	// (0x0008d392) list_medium_line_x2_t3_g4_g3

0x0079,	// (0x0008b508) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0079,	// (0x0008b508) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0009a736) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0009a736) list_medium_line_x2_t3_g4_g

0x0a87,	// (0x0008bf16) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0a87,	// (0x0008bf16) list_medium_line_x2_t3_g4_t1

0x0a9f,	// (0x0008bf2e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0a9f,	// (0x0008bf2e) list_medium_line_x2_t3_g4_t2

0x00ae,	// (0x0008b53d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x00ae,	// (0x0008b53d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd3b,	// (0x0009b1ca) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd3b,	// (0x0009b1ca) list_medium_line_x2_t3_g4_t

0x044b,	// (0x0008b8da) list_medium_line_g2_g1_ParamLimits

0x044b,	// (0x0008b8da) list_medium_line_g2_g1

0x0457,	// (0x0008b8e6) list_medium_line_g2_g2_ParamLimits

0x0457,	// (0x0008b8e6) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0009ae78) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0009ae78) list_medium_line_g2_g

0x0ab9,	// (0x0008bf48) list_medium_line_g2_t1_ParamLimits

0x0ab9,	// (0x0008bf48) list_medium_line_g2_t1

0x044b,	// (0x0008b8da) list_medium_line_t3_g2_g1_ParamLimits

0x044b,	// (0x0008b8da) list_medium_line_t3_g2_g1

0x0457,	// (0x0008b8e6) list_medium_line_t3_g2_g2_ParamLimits

0x0457,	// (0x0008b8e6) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0009ae78) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0009ae78) list_medium_line_t3_g2_g

0x0ace,	// (0x0008bf5d) list_medium_line_t3_g2_t1_ParamLimits

0x0ace,	// (0x0008bf5d) list_medium_line_t3_g2_t1

0x0ae8,	// (0x0008bf77) list_medium_line_t3_g2_t2_ParamLimits

0x0ae8,	// (0x0008bf77) list_medium_line_t3_g2_t2

0x0afe,	// (0x0008bf8d) list_medium_line_t3_g2_t3_ParamLimits

0x0afe,	// (0x0008bf8d) list_medium_line_t3_g2_t3

0x0002,

0xfd42,	// (0x0009b1d1) list_medium_line_t3_g2_t_ParamLimits

0xfd42,	// (0x0009b1d1) list_medium_line_t3_g2_t

0x0778,	// (0x0008bc07) list_medium_line_right_icon_g1

0x0b18,	// (0x0008bfa7) list_medium_line_right_icon_t1

0x044b,	// (0x0008b8da) list_medium_line_t2_g1_ParamLimits

0x044b,	// (0x0008b8da) list_medium_line_t2_g1

0x0b26,	// (0x0008bfb5) list_medium_line_t2_t1_ParamLimits

0x0b26,	// (0x0008bfb5) list_medium_line_t2_t1

0x0b40,	// (0x0008bfcf) list_medium_line_t2_t2_ParamLimits

0x0b40,	// (0x0008bfcf) list_medium_line_t2_t2

0x0001,

0xfd49,	// (0x0009b1d8) list_medium_line_t2_t_ParamLimits

0xfd49,	// (0x0009b1d8) list_medium_line_t2_t

0x044b,	// (0x0008b8da) list_medium_line_t3_g1_ParamLimits

0x044b,	// (0x0008b8da) list_medium_line_t3_g1

0x0b59,	// (0x0008bfe8) list_medium_line_t3_t1_ParamLimits

0x0b59,	// (0x0008bfe8) list_medium_line_t3_t1

0x0b73,	// (0x0008c002) list_medium_line_t3_t2_ParamLimits

0x0b73,	// (0x0008c002) list_medium_line_t3_t2

0x0b89,	// (0x0008c018) list_medium_line_t3_t3_ParamLimits

0x0b89,	// (0x0008c018) list_medium_line_t3_t3

0x0002,

0xfd4e,	// (0x0009b1dd) list_medium_line_t3_t_ParamLimits

0xfd4e,	// (0x0009b1dd) list_medium_line_t3_t

0x044b,	// (0x0008b8da) list_medium_line_g3_g1_ParamLimits

0x044b,	// (0x0008b8da) list_medium_line_g3_g1

0x0b9e,	// (0x0008c02d) list_medium_line_g3_g2_ParamLimits

0x0b9e,	// (0x0008c02d) list_medium_line_g3_g2

0x0457,	// (0x0008b8e6) list_medium_line_g3_g3_ParamLimits

0x0457,	// (0x0008b8e6) list_medium_line_g3_g3

0x0002,

0xfd55,	// (0x0009b1e4) list_medium_line_g3_g_ParamLimits

0xfd55,	// (0x0009b1e4) list_medium_line_g3_g

0x0baa,	// (0x0008c039) list_medium_line_g3_t1_ParamLimits

0x0baa,	// (0x0008c039) list_medium_line_g3_t1

0x044b,	// (0x0008b8da) list_medium_line_t2_g3_g1_ParamLimits

0x044b,	// (0x0008b8da) list_medium_line_t2_g3_g1

0x0b9e,	// (0x0008c02d) list_medium_line_t2_g3_g2_ParamLimits

0x0b9e,	// (0x0008c02d) list_medium_line_t2_g3_g2

0x0457,	// (0x0008b8e6) list_medium_line_t2_g3_g3_ParamLimits

0x0457,	// (0x0008b8e6) list_medium_line_t2_g3_g3

0x0002,

0xfd55,	// (0x0009b1e4) list_medium_line_t2_g3_g_ParamLimits

0xfd55,	// (0x0009b1e4) list_medium_line_t2_g3_g

0x0bbf,	// (0x0008c04e) list_medium_line_t2_g3_t1_ParamLimits

0x0bbf,	// (0x0008c04e) list_medium_line_t2_g3_t1

0x0bd9,	// (0x0008c068) list_medium_line_t2_g3_t2_ParamLimits

0x0bd9,	// (0x0008c068) list_medium_line_t2_g3_t2

0x0001,

0xfd5c,	// (0x0009b1eb) list_medium_line_t2_g3_t_ParamLimits

0xfd5c,	// (0x0009b1eb) list_medium_line_t2_g3_t

0x044b,	// (0x0008b8da) list_medium_line_t3_g3_g1_ParamLimits

0x044b,	// (0x0008b8da) list_medium_line_t3_g3_g1

0x0b9e,	// (0x0008c02d) list_medium_line_t3_g3_g2_ParamLimits

0x0b9e,	// (0x0008c02d) list_medium_line_t3_g3_g2

0x0457,	// (0x0008b8e6) list_medium_line_t3_g3_g3_ParamLimits

0x0457,	// (0x0008b8e6) list_medium_line_t3_g3_g3

0x0002,

0xfd55,	// (0x0009b1e4) list_medium_line_t3_g3_g_ParamLimits

0xfd55,	// (0x0009b1e4) list_medium_line_t3_g3_g

0x0bf5,	// (0x0008c084) list_medium_line_t3_g3_t1_ParamLimits

0x0bf5,	// (0x0008c084) list_medium_line_t3_g3_t1

0x0c0e,	// (0x0008c09d) list_medium_line_t3_g3_t2_ParamLimits

0x0c0e,	// (0x0008c09d) list_medium_line_t3_g3_t2

0x0c24,	// (0x0008c0b3) list_medium_line_t3_g3_t3_ParamLimits

0x0c24,	// (0x0008c0b3) list_medium_line_t3_g3_t3

0x0002,

0xfd61,	// (0x0009b1f0) list_medium_line_t3_g3_t_ParamLimits

0xfd61,	// (0x0009b1f0) list_medium_line_t3_g3_t

0x0875,	// (0x0008bd04) list_medium_line_right_iconx2_g1

0x0778,	// (0x0008bc07) list_medium_line_right_iconx2_g2

0x0001,

0xfd68,	// (0x0009b1f7) list_medium_line_right_iconx2_g

0x0c3e,	// (0x0008c0cd) list_medium_line_right_iconx2_t1

0x0875,	// (0x0008bd04) list_medium_line_t2_right_iconx2_g1

0x0778,	// (0x0008bc07) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd68,	// (0x0009b1f7) list_medium_line_t2_right_iconx2_g

0x0c4c,	// (0x0008c0db) list_medium_line_t2_right_iconx2_t1

0x0c5c,	// (0x0008c0eb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd6d,	// (0x0009b1fc) list_medium_line_t2_right_iconx2_t

0x0c6e,	// (0x0008c0fd) list_medium_line_x4_t4_t1

0x0c7c,	// (0x0008c10b) list_medium_line_x4_t4_t2

0x0c8c,	// (0x0008c11b) list_medium_line_x4_t4_t3

0x0c9c,	// (0x0008c12b) list_medium_line_x4_t4_t4

0x0003,

0xfd72,	// (0x0009b201) list_medium_line_x4_t4_t

0x8711,	// (0x00093ba0) tport_appsw_pane_ParamLimits

0x8711,	// (0x00093ba0) tport_appsw_pane

0x8729,	// (0x00093bb8) tport_contact_pane_ParamLimits

0x8729,	// (0x00093bb8) tport_contact_pane

0x8741,	// (0x00093bd0) tport_listscroll_pane_ParamLimits

0x8741,	// (0x00093bd0) tport_listscroll_pane

0x875b,	// (0x00093bea) cell_tport_appsw_pane_ParamLimits

0x875b,	// (0x00093bea) cell_tport_appsw_pane

0xd6c8,	// (0x00098b57) tport_appsw_pane_g1_ParamLimits

0xd6c8,	// (0x00098b57) tport_appsw_pane_g1

0xe7e2,	// (0x00099c71) tport_contact_pane_g1

0xe1a2,	// (0x00099631) tport_contact_pane_t1

0xe7eb,	// (0x00099c7a) tport_contact_pane_t2

0x0001,

0xfd7b,	// (0x0009b20a) tport_contact_pane_t

0xe7f9,	// (0x00099c88) list_tport_pane

0xe802,	// (0x00099c91) scroll_pane_cp_030

0x87a3,	// (0x00093c32) cell_tport_appsw_pane_g1

0x87b3,	// (0x00093c42) cell_tport_appsw_pane_t1

0x87c1,	// (0x00093c50) grid_highlight_pane_cp019

0x87c9,	// (0x00093c58) list_tport_double_graphic_pane_ParamLimits

0x87c9,	// (0x00093c58) list_tport_double_graphic_pane

0xa54e,	// (0x000959dd) list_highlight_pane_cp023_ParamLimits

0xa54e,	// (0x000959dd) list_highlight_pane_cp023

0x87d6,	// (0x00093c65) list_tport_double_graphic_pane_g1_ParamLimits

0x87d6,	// (0x00093c65) list_tport_double_graphic_pane_g1

0x87e3,	// (0x00093c72) list_tport_double_graphic_pane_t1_ParamLimits

0x87e3,	// (0x00093c72) list_tport_double_graphic_pane_t1

0x87f8,	// (0x00093c87) list_tport_double_graphic_pane_t2_ParamLimits

0x87f8,	// (0x00093c87) list_tport_double_graphic_pane_t2

0x0001,

0xfd87,	// (0x0009b216) list_tport_double_graphic_pane_t_ParamLimits

0xfd87,	// (0x0009b216) list_tport_double_graphic_pane_t

0x97e8,	// (0x00094c77) main_cale_note_pane

0x67de,	// (0x00091c6d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67de,	// (0x00091c6d) cell_vitu2_function_top_wide_pane_cp01

0x808a,	// (0x00093519) wait_bar_pane_cp05_ParamLimits

0xa54e,	// (0x000959dd) listscroll_cmail_pane

0xe80b,	// (0x00099c9a) list_cmail_pane

0x880a,	// (0x00093c99) list_cmail_body_pane

0x881f,	// (0x00093cae) list_single_cmail_header_caption_pane

0x8835,	// (0x00093cc4) list_single_cmail_header_detail_pane_ParamLimits

0x8835,	// (0x00093cc4) list_single_cmail_header_detail_pane

0xe81b,	// (0x00099caa) list_single_cmail_header_caption_pane_t1

0x0cac,	// (0x0008c13b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0cac,	// (0x0008c13b) list_single_cmail_header_detail_pane_g1

0xa3e2,	// (0x00095871) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa3e2,	// (0x00095871) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8c,	// (0x0009b21b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8c,	// (0x0009b21b) list_single_cmail_header_detail_pane_g

0x885e,	// (0x00093ced) list_single_cmail_header_detail_pane_t1_ParamLimits

0x885e,	// (0x00093ced) list_single_cmail_header_detail_pane_t1

0x88be,	// (0x00093d4d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x88be,	// (0x00093d4d) list_single_cmail_header_editor_pane_bg

0xe2ff,	// (0x0009978e) list_cmail_body_pane_g1

0xe83f,	// (0x00099cce) list_cmail_body_pane_t1

0xd6e8,	// (0x00098b77) list_single_cmail_header_editor_pane_bg_g1

0xacd2,	// (0x00096161) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6f8,	// (0x00098b87) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6f0,	// (0x00098b7f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd90c,	// (0x00098d9b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd718,	// (0x00098ba7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd708,	// (0x00098b97) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd710,	// (0x00098b9f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacb2,	// (0x00096141) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x88d5,	// (0x00093d64) calenote_gesture_pane_ParamLimits

0x88d5,	// (0x00093d64) calenote_gesture_pane

0x88f5,	// (0x00093d84) calenote_window_pane_ParamLimits

0x88f5,	// (0x00093d84) calenote_window_pane

0xe84d,	// (0x00099cdc) popup_note_window_cp01

0x8911,	// (0x00093da0) calenote_swipe_1_pane_ParamLimits

0x8911,	// (0x00093da0) calenote_swipe_1_pane

0x845e,	// (0x000938ed) calenote_swipe_2_pane_ParamLimits

0x845e,	// (0x000938ed) calenote_swipe_2_pane

0xe650,	// (0x00099adf) calenote_swipe_1_pane_g1_ParamLimits

0xe650,	// (0x00099adf) calenote_swipe_1_pane_g1

0xe65d,	// (0x00099aec) calenote_swipe_1_pane_g2_ParamLimits

0xe65d,	// (0x00099aec) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x0009b13b) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x0009b13b) calenote_swipe_1_pane_g

0xe85f,	// (0x00099cee) calenote_swipe_1_pane_t1_ParamLimits

0xe85f,	// (0x00099cee) calenote_swipe_1_pane_t1

0xe650,	// (0x00099adf) calenote_swipe_2_pane_g1_ParamLimits

0xe650,	// (0x00099adf) calenote_swipe_2_pane_g1

0xe87e,	// (0x00099d0d) calenote_swipe_2_pane_g2_ParamLimits

0xe87e,	// (0x00099d0d) calenote_swipe_2_pane_g2

0x0001,

0xfd98,	// (0x0009b227) calenote_swipe_2_pane_g_ParamLimits

0xfd98,	// (0x0009b227) calenote_swipe_2_pane_g

0xe88a,	// (0x00099d19) calenote_swipe_2_pane_t1_ParamLimits

0xe88a,	// (0x00099d19) calenote_swipe_2_pane_t1

0x97e8,	// (0x00094c77) main_mup_navstr_pane

0x541f,	// (0x000908ae) main_mup3_pane_t7_ParamLimits

0x541f,	// (0x000908ae) main_mup3_pane_t7

0x9fb7,	// (0x00095446) main_mp4_pane_g6_ParamLimits

0x9fb7,	// (0x00095446) main_mp4_pane_g6

0xa179,	// (0x00095608) main_image3_pane_t4_ParamLimits

0xa179,	// (0x00095608) main_image3_pane_t4

0x8926,	// (0x00093db5) popup_navstr_preview_pane_ParamLimits

0x8926,	// (0x00093db5) popup_navstr_preview_pane

0x893a,	// (0x00093dc9) scroll_navstr_pane_ParamLimits

0x893a,	// (0x00093dc9) scroll_navstr_pane

0x97e8,	// (0x00094c77) bg_popup_preview_window_pane_cp04

0xe8b1,	// (0x00099d40) popup_navstr_preview_pane_t1

0x894e,	// (0x00093ddd) scroll_navstr_pane_g1_ParamLimits

0x894e,	// (0x00093ddd) scroll_navstr_pane_g1

0x8962,	// (0x00093df1) scroll_navstr_pane_t1_ParamLimits

0x8962,	// (0x00093df1) scroll_navstr_pane_t1

0xe856,	// (0x00099ce5) bg_button_pane_cp014

0xe856,	// (0x00099ce5) bg_button_pane_cp030

0x071e,	// (0x0008bbad) list_double_fisheye_pane_g4_ParamLimits

0x071e,	// (0x0008bbad) list_double_fisheye_pane_g4

0x072a,	// (0x0008bbb9) list_double_fisheye_pane_g5_ParamLimits

0x072a,	// (0x0008bbb9) list_double_fisheye_pane_g5

0xc08e,	// (0x0009751d) sp_fs_scroll_pane_cp03

0xe770,	// (0x00099bff) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe77c,	// (0x00099c0b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x0009b158) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x854c,	// (0x000939db) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe813,	// (0x00099ca2) sp_fs_scroll_pane_cp02

0xa9b8,	// (0x00095e47) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9b8,	// (0x00095e47) popup_sp_fs_calendar_preview_list_single_pane

0x97e8,	// (0x00094c77) main_cam6_pano_pane

0xa54e,	// (0x000959dd) main_mup3_pane_ParamLimits

0x97e8,	// (0x00094c77) main_phacti_pane

0x7f5d,	// (0x000933ec) bg_button_pane_cp11

0x7f77,	// (0x00093406) main_mobtv_info_pane_g2_ParamLimits

0x7f77,	// (0x00093406) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x0009b0b8) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x0009b0b8) main_mobtv_info_pane_g

0x8154,	// (0x000935e3) sc_clock_pane_t5_ParamLimits

0x8154,	// (0x000935e3) sc_clock_pane_t5

0x821c,	// (0x000936ab) main_radioblah_pane_g1_ParamLimits

0xe59c,	// (0x00099a2b) main_radioblah_pane_t3_ParamLimits

0xe59c,	// (0x00099a2b) main_radioblah_pane_t3

0xe5b4,	// (0x00099a43) main_radioblah_pane_t4_ParamLimits

0xe5b4,	// (0x00099a43) main_radioblah_pane_t4

0x8244,	// (0x000936d3) main_radioblah_text_pane_ParamLimits

0x8244,	// (0x000936d3) main_radioblah_text_pane

0x8256,	// (0x000936e5) main_radioblah_info_pane_g1_ParamLimits

0x82ef,	// (0x0009377e) main_radioblah_info_pane_t4_ParamLimits

0x82ef,	// (0x0009377e) main_radioblah_info_pane_t4

0xa54e,	// (0x000959dd) main_sp_fs_calendar_pane

0x8979,	// (0x00093e08) main_phacti_pane_g1

0x8981,	// (0x00093e10) phacti_note_pane_ParamLimits

0x8981,	// (0x00093e10) phacti_note_pane

0xe8c8,	// (0x00099d57) phacti_term_pane_ParamLimits

0xe8c8,	// (0x00099d57) phacti_term_pane

0xe8dd,	// (0x00099d6c) phacti_note_pane_t1_ParamLimits

0xe8dd,	// (0x00099d6c) phacti_note_pane_t1

0x8995,	// (0x00093e24) phacti_term_pane_g1

0x899d,	// (0x00093e2c) phacti_term_pane_t1_ParamLimits

0x899d,	// (0x00093e2c) phacti_term_pane_t1

0xe8f4,	// (0x00099d83) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa57,	// (0x00095ee6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda2,	// (0x0009b231) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8fc,	// (0x00099d8b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8fc,	// (0x00099d8b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe912,	// (0x00099da1) aid_popup_sp_fs_bg_corner_pane

0xcd11,	// (0x000981a0) popup_sp_fs_calendar_preview_bg_pane_g1

0x97e8,	// (0x00094c77) popup_sp_fs_calendar_preview_bg_pane

0xe91a,	// (0x00099da9) popup_sp_fs_calendar_preview_list_pane

0xc909,	// (0x00097d98) bg_main_sp_fs_cale_pane_ParamLimits

0xc909,	// (0x00097d98) bg_main_sp_fs_cale_pane

0x8a28,	// (0x00093eb7) listscroll_cale_mrui_pane_ParamLimits

0x8a28,	// (0x00093eb7) listscroll_cale_mrui_pane

0x8a3d,	// (0x00093ecc) listscroll_sp_fs_schedule_track_pane

0x8a46,	// (0x00093ed5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8a46,	// (0x00093ed5) main_sp_fs_ctrlbar_pane_cp01

0xe922,	// (0x00099db1) main_sp_fs_ribbon_pane

0x8a59,	// (0x00093ee8) popup_sp_fs_cale_preview_window

0x8a6b,	// (0x00093efa) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a6b,	// (0x00093efa) list_single_sp_fs_schedule_track_pane

0xa54e,	// (0x000959dd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa54e,	// (0x000959dd) bg_sp_fs_highlight_list_pane_cp03

0x8a7e,	// (0x00093f0d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8a7e,	// (0x00093f0d) list_single_sp_fs_schedule_track_pane_g1

0x8a8a,	// (0x00093f19) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a8a,	// (0x00093f19) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda7,	// (0x0009b236) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda7,	// (0x0009b236) list_single_sp_fs_schedule_track_pane_g

0x8a96,	// (0x00093f25) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8a96,	// (0x00093f25) list_single_sp_fs_schedule_track_pane_t1

0x8ab0,	// (0x00093f3f) sp_fs_schedule_track_pane_ParamLimits

0x8ab0,	// (0x00093f3f) sp_fs_schedule_track_pane

0xe92a,	// (0x00099db9) sp_fs_schedule_track_pane_g1

0xe932,	// (0x00099dc1) sp_fs_schedule_track_pane_g2

0xe93a,	// (0x00099dc9) sp_fs_schedule_track_pane_g3

0xe942,	// (0x00099dd1) sp_fs_schedule_track_pane_g4

0xe94a,	// (0x00099dd9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdac,	// (0x0009b23b) sp_fs_schedule_track_pane_g

0xd6e8,	// (0x00098b77) bg_sp_fs_schedule_viewer_highlight_g1

0xacd2,	// (0x00096161) bg_sp_fs_schedule_viewer_highlight_g2

0xd6f0,	// (0x00098b7f) bg_sp_fs_schedule_viewer_highlight_g3

0xd6f8,	// (0x00098b87) bg_sp_fs_schedule_viewer_highlight_g4

0xd90c,	// (0x00098d9b) bg_sp_fs_schedule_viewer_highlight_g5

0xd708,	// (0x00098b97) bg_sp_fs_schedule_viewer_highlight_g6

0xd710,	// (0x00098b9f) bg_sp_fs_schedule_viewer_highlight_g7

0xd718,	// (0x00098ba7) bg_sp_fs_schedule_viewer_highlight_g8

0xacb2,	// (0x00096141) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb7,	// (0x0009b246) bg_sp_fs_schedule_viewer_highlight_g

0x97e8,	// (0x00094c77) bg_main_sp_fs_ribbon_pane

0x8ac1,	// (0x00093f50) main_sp_fs_ribbon_pane_g1

0xe952,	// (0x00099de1) main_sp_fs_ribbon_pane_t1

0x8aca,	// (0x00093f59) main_sp_fs_ribbon_pane_t2

0xe961,	// (0x00099df0) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdca,	// (0x0009b259) main_sp_fs_ribbon_pane_t

0xe970,	// (0x00099dff) main_sp_fs_ribbon_scheduler_pane

0xe978,	// (0x00099e07) bg_main_sp_fs_ribbon_pane_g1

0xe981,	// (0x00099e10) bg_main_sp_fs_ribbon_pane_g2

0xe98a,	// (0x00099e19) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd1,	// (0x0009b260) bg_main_sp_fs_ribbon_pane_g

0xe992,	// (0x00099e21) main_sp_fs_ribbon_scheduler_pane_g1

0xe99b,	// (0x00099e2a) main_sp_fs_ribbon_scheduler_pane_g2

0xe9a4,	// (0x00099e33) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd8,	// (0x0009b267) main_sp_fs_ribbon_scheduler_pane_g

0xe9ad,	// (0x00099e3c) list_cale_mrui_pane

0x8ad9,	// (0x00093f68) sp_fs_scroll_pane_cp07_ParamLimits

0x8ad9,	// (0x00093f68) sp_fs_scroll_pane_cp07

0x8af5,	// (0x00093f84) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8af5,	// (0x00093f84) bg_sp_fs_schedule_viewer_highlight

0xe9ba,	// (0x00099e49) list_single_sp_fs_schedule_track_pane_cp01

0xe9c2,	// (0x00099e51) list_sp_fs_schedule_track_pane

0xe9ca,	// (0x00099e59) sp_fs_scroll_pane_cp06_ParamLimits

0xe9ca,	// (0x00099e59) sp_fs_scroll_pane_cp06

0xcd11,	// (0x000981a0) bgmain_sp_fs_calendar_pane_g1

0x0cc4,	// (0x0008c153) list_single_cale_mrui_pane_ParamLimits

0x0cc4,	// (0x0008c153) list_single_cale_mrui_pane

0x8b05,	// (0x00093f94) list_single_cale_mrui_row_pane_ParamLimits

0x8b05,	// (0x00093f94) list_single_cale_mrui_row_pane

0xa3f7,	// (0x00095886) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa3f7,	// (0x00095886) list_single_cale_mrui_row_pane_g1

0xa42f,	// (0x000958be) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa42f,	// (0x000958be) list_single_cale_mrui_row_pane_t1

0x0ce5,	// (0x0008c174) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0ce5,	// (0x0008c174) list_single_cale_mrui_row_pane_t2

0xa441,	// (0x000958d0) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa441,	// (0x000958d0) list_single_cale_mrui_row_pane_t3

0xa470,	// (0x000958ff) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa470,	// (0x000958ff) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde6,	// (0x0009b275) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde6,	// (0x0009b275) list_single_cale_mrui_row_pane_t

0x0d4d,	// (0x0008c1dc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0d4d,	// (0x0008c1dc) list_single_cmail_header_editor_pane_bg_cp01

0x0d73,	// (0x0008c202) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0d73,	// (0x0008c202) list_single_cmail_header_editor_pane_bg_cp02

0x8b12,	// (0x00093fa1) main_radioblah_text_pane_t1_ParamLimits

0x8b12,	// (0x00093fa1) main_radioblah_text_pane_t1

0xe9e9,	// (0x00099e78) cam6_indi_pane_cp01

0xe9f1,	// (0x00099e80) cam6_mode_pane_cp01

0xe9f9,	// (0x00099e88) cam6_pano_pane

0xea02,	// (0x00099e91) cam6_zoom_pane_cp01

0xea0a,	// (0x00099e99) cam6_pano_image_pane

0xea15,	// (0x00099ea4) cam6_pano_pane_g1

0xe2ff,	// (0x0009978e) cam6_pano_pane_g2

0xea1e,	// (0x00099ead) cam6_pano_pane_g3

0xea27,	// (0x00099eb6) cam6_pano_pane_g4

0xd2f4,	// (0x00098783) cam6_pano_pane_g5

0xea30,	// (0x00099ebf) cam6_pano_pane_g6

0xea3a,	// (0x00099ec9) cam6_pano_pane_g7

0xea42,	// (0x00099ed1) cam6_pano_pane_g8

0xea4b,	// (0x00099eda) cam6_pano_pane_g9

0x0008,

0xfdef,	// (0x0009b27e) cam6_pano_pane_g

0x97e8,	// (0x00094c77) main_browser_tag_pane

0xe8a9,	// (0x00099d38) grid_navstr_albumart_pane

0xea56,	// (0x00099ee5) cell_navstr_albumart_pane_ParamLimits

0xea56,	// (0x00099ee5) cell_navstr_albumart_pane

0xea76,	// (0x00099f05) cell_navstr_albumart_pane_g1

0xc71a,	// (0x00097ba9) cell_navstr_albumart_pane_g2

0xc72a,	// (0x00097bb9) cell_navstr_albumart_pane_g3

0xc722,	// (0x00097bb1) cell_navstr_albumart_pane_g4

0x0003,

0xfe02,	// (0x0009b291) cell_navstr_albumart_pane_g

0x8b2c,	// (0x00093fbb) bt_list_pane_ParamLimits

0x8b2c,	// (0x00093fbb) bt_list_pane

0x8b40,	// (0x00093fcf) bt_list_pane_t1

0x8b4f,	// (0x00093fde) bt_list_pane_t2

0x0001,

0xfe0b,	// (0x0009b29a) bt_list_pane_t

0x97e8,	// (0x00094c77) main_cale_prevew_pane

0x8b5e,	// (0x00093fed) popup_cale_preview_window_ParamLimits

0x8b5e,	// (0x00093fed) popup_cale_preview_window

0xa54e,	// (0x000959dd) bg_popup_preview_window_pane_cp05_ParamLimits

0xa54e,	// (0x000959dd) bg_popup_preview_window_pane_cp05

0xea7e,	// (0x00099f0d) list_cale_preview_pane_ParamLimits

0xea7e,	// (0x00099f0d) list_cale_preview_pane

0x8b79,	// (0x00094008) list_double_cale_preview_pane_ParamLimits

0x8b79,	// (0x00094008) list_double_cale_preview_pane

0x8b8b,	// (0x0009401a) list_single_cale_preview_pane_ParamLimits

0x8b8b,	// (0x0009401a) list_single_cale_preview_pane

0x8ba1,	// (0x00094030) list_single_cale_preview_pane_g1

0x8ba9,	// (0x00094038) list_single_cale_preview_pane_t1_ParamLimits

0x8ba9,	// (0x00094038) list_single_cale_preview_pane_t1

0x8bbe,	// (0x0009404d) list_double_cale_preview_pane_g1

0x8bc6,	// (0x00094055) list_double_cale_preview_pane_t1_ParamLimits

0x8bc6,	// (0x00094055) list_double_cale_preview_pane_t1

0x8bdb,	// (0x0009406a) list_double_cale_preview_pane_t2_ParamLimits

0x8bdb,	// (0x0009406a) list_double_cale_preview_pane_t2

0x0001,

0xfe10,	// (0x0009b29f) list_double_cale_preview_pane_t_ParamLimits

0xfe10,	// (0x0009b29f) list_double_cale_preview_pane_t

0x97e8,	// (0x00094c77) main_ezdial_pane

0xa54e,	// (0x000959dd) main_sp_fs_email_pane_ParamLimits

0x84bc,	// (0x0009394b) cmail_ddmenu_btn01_pane_ParamLimits

0x84bc,	// (0x0009394b) cmail_ddmenu_btn01_pane

0x84cf,	// (0x0009395e) cmail_ddmenu_btn02_pane_ParamLimits

0x84cf,	// (0x0009395e) cmail_ddmenu_btn02_pane

0x84f2,	// (0x00093981) cmail_ddmenu_btn03_pane_ParamLimits

0x84f2,	// (0x00093981) cmail_ddmenu_btn03_pane

0x858b,	// (0x00093a1a) main_sp_fs_ctrlbar_pane_ParamLimits

0x85af,	// (0x00093a3e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x880a,	// (0x00093c99) list_cmail_body_pane_ParamLimits

0xe829,	// (0x00099cb8) bg_button_pane_cp12

0xe832,	// (0x00099cc1) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe832,	// (0x00099cc1) list_single_cmail_header_detail_pane_g3

0x889a,	// (0x00093d29) list_single_cmail_header_detail_pane_t2_ParamLimits

0x889a,	// (0x00093d29) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd93,	// (0x0009b222) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd93,	// (0x0009b222) list_single_cmail_header_detail_pane_t

0x89b2,	// (0x00093e41) phacti_term_pane_t2_ParamLimits

0x89b2,	// (0x00093e41) phacti_term_pane_t2

0x0001,

0xfd9d,	// (0x0009b22c) phacti_term_pane_t_ParamLimits

0xfd9d,	// (0x0009b22c) phacti_term_pane_t

0xea8a,	// (0x00099f19) aid_size_list_single_double

0x8bf3,	// (0x00094082) popup_ezdial_listscroll_window

0x8c0f,	// (0x0009409e) popup_number_entry_window_cp01

0xaa79,	// (0x00095f08) bg_popup_call_pane_cp09

0xea96,	// (0x00099f25) ezdial_list_pane

0xea9e,	// (0x00099f2d) scroll_pane_cp23

0xc909,	// (0x00097d98) bg_button_pane_cp028_ParamLimits

0xc909,	// (0x00097d98) bg_button_pane_cp028

0x8c1d,	// (0x000940ac) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c1d,	// (0x000940ac) cmail_ddmenu_btn01_pane_g1

0x8c29,	// (0x000940b8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c29,	// (0x000940b8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe15,	// (0x0009b2a4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe15,	// (0x0009b2a4) cmail_ddmenu_btn01_pane_g

0xeaa6,	// (0x00099f35) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaa6,	// (0x00099f35) cmail_ddmenu_btn01_pane_t1

0xc909,	// (0x00097d98) bg_button_pane_cp029_ParamLimits

0xc909,	// (0x00097d98) bg_button_pane_cp029

0x8c35,	// (0x000940c4) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c35,	// (0x000940c4) cmail_ddmenu_btn02_pane_g1

0x8c4d,	// (0x000940dc) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c4d,	// (0x000940dc) cmail_ddmenu_btn02_pane_t1

0xa54e,	// (0x000959dd) bg_button_pane_cp031_ParamLimits

0xa54e,	// (0x000959dd) bg_button_pane_cp031

0x8c35,	// (0x000940c4) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c35,	// (0x000940c4) cmail_ddmenu_btn03_pane_g1

0x8c4d,	// (0x000940dc) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c4d,	// (0x000940dc) cmail_ddmenu_btn03_pane_t1

0x5fc6,	// (0x00091455) cell_dialer2_keypad_pane_t1_ParamLimits

0x5fe0,	// (0x0009146f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5fe0,	// (0x0009146f) cell_dialer2_keypad_pane_t1_copy1

0x7d80,	// (0x0009320f) ncimui_group_button_pane

0xa54e,	// (0x000959dd) main_sp_fs_calendar_pane_ParamLimits

0x881f,	// (0x00093cae) list_single_cmail_header_caption_pane_ParamLimits

0xa3ee,	// (0x0009587d) aid_recal_txt_sm_pane

0x97e8,	// (0x00094c77) mian_recal_day_pane

0x8a59,	// (0x00093ee8) popup_sp_fs_cale_preview_window_ParamLimits

0xeabb,	// (0x00099f4a) list_recal_day_pane

0xa4ba,	// (0x00095949) list_single_recal_day_pane_ParamLimits

0xa4ba,	// (0x00095949) list_single_recal_day_pane

0xeae2,	// (0x00099f71) list_single_recal_day_pane_g1_ParamLimits

0xeae2,	// (0x00099f71) list_single_recal_day_pane_g1

0xa4cc,	// (0x0009595b) list_single_recal_day_pane_g2_ParamLimits

0xa4cc,	// (0x0009595b) list_single_recal_day_pane_g2

0xa4d8,	// (0x00095967) list_single_recal_day_pane_g3_ParamLimits

0xa4d8,	// (0x00095967) list_single_recal_day_pane_g3

0x0d93,	// (0x0008c222) list_single_recal_day_pane_g4_ParamLimits

0x0d93,	// (0x0008c222) list_single_recal_day_pane_g4

0xa4e4,	// (0x00095973) list_single_recal_day_pane_g5_ParamLimits

0xa4e4,	// (0x00095973) list_single_recal_day_pane_g5

0xa4f0,	// (0x0009597f) list_single_recal_day_pane_g6_ParamLimits

0xa4f0,	// (0x0009597f) list_single_recal_day_pane_g6

0x0004,

0xfe24,	// (0x0009b2b3) list_single_recal_day_pane_g_ParamLimits

0xfe24,	// (0x0009b2b3) list_single_recal_day_pane_g

0xa504,	// (0x00095993) list_single_recal_day_pane_t1

0xa516,	// (0x000959a5) list_single_recal_day_pane_t2

0x0001,

0xfe2f,	// (0x0009b2be) list_single_recal_day_pane_t

0x8c71,	// (0x00094100) ncimui_query_button_pane_ParamLimits

0x8c71,	// (0x00094100) ncimui_query_button_pane

0x8c81,	// (0x00094110) ncimui_query_button_pane_t1_ParamLimits

0x8c81,	// (0x00094110) ncimui_query_button_pane_t1

0xeaee,	// (0x00099f7d) ncimui_query_button_pane_t2_ParamLimits

0xeaee,	// (0x00099f7d) ncimui_query_button_pane_t2

0x0001,

0xfe34,	// (0x0009b2c3) ncimui_query_button_pane_t_ParamLimits

0xfe34,	// (0x0009b2c3) ncimui_query_button_pane_t

0x8c94,	// (0x00094123) query_button_pane_ParamLimits

0x8c94,	// (0x00094123) query_button_pane

0x97e8,	// (0x00094c77) bg_button_pane_cp0028

0xeb01,	// (0x00099f90) query_button_pane_t1

0x401e,	// (0x0008f4ad) main_tport_pane_ParamLimits

0x86ce,	// (0x00093b5d) bg_popup_window_pane_cp01_ParamLimits

0x86ce,	// (0x00093b5d) bg_popup_window_pane_cp01

0x86e9,	// (0x00093b78) heading_pane_cp08_ParamLimits

0x86e9,	// (0x00093b78) heading_pane_cp08

0x86fc,	// (0x00093b8b) heading_pane_cp07_ParamLimits

0x86fc,	// (0x00093b8b) heading_pane_cp07

0x87a3,	// (0x00093c32) cell_tport_appsw_pane_g2

0x0002,

0xfd80,	// (0x0009b20f) cell_tport_appsw_pane_g

0x026b,	// (0x0008b6fa) input_candi_list_open_g1

0xae95,	// (0x00096324) list_cale_time_pane_g6_ParamLimits

0xae95,	// (0x00096324) list_cale_time_pane_g6

0x4de7,	// (0x00090276) aid_size_touch_calib_1_ParamLimits

0x4de7,	// (0x00090276) aid_size_touch_calib_1

0x4df9,	// (0x00090288) aid_size_touch_calib_2_ParamLimits

0x4df9,	// (0x00090288) aid_size_touch_calib_2

0x4e11,	// (0x000902a0) aid_size_touch_calib_3_ParamLimits

0x4e11,	// (0x000902a0) aid_size_touch_calib_3

0x4e2f,	// (0x000902be) aid_size_touch_calib_4_ParamLimits

0x4e2f,	// (0x000902be) aid_size_touch_calib_4

0x4e47,	// (0x000902d6) main_touch_calib_button_group_pane_ParamLimits

0x4e47,	// (0x000902d6) main_touch_calib_button_group_pane

0x4e5f,	// (0x000902ee) main_touch_calib_pane_g1_ParamLimits

0x4e71,	// (0x00090300) main_touch_calib_pane_g2_ParamLimits

0x4e83,	// (0x00090312) main_touch_calib_pane_g3_ParamLimits

0x4e95,	// (0x00090324) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0009abc5) main_touch_calib_pane_g_ParamLimits

0x4ea7,	// (0x00090336) main_touch_calib_pane_t1_ParamLimits

0x4ec1,	// (0x00090350) main_touch_calib_pane_t2_ParamLimits

0x4edb,	// (0x0009036a) main_touch_calib_pane_t3_ParamLimits

0x4eef,	// (0x0009037e) main_touch_calib_pane_t4_ParamLimits

0x4f03,	// (0x00090392) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0009abce) main_touch_calib_pane_t_ParamLimits

0xd094,	// (0x00098523) list_single_fp_cale_pane_g3_ParamLimits

0xd094,	// (0x00098523) list_single_fp_cale_pane_g3

0xa54e,	// (0x000959dd) bg_button_pane_cp012_ParamLimits

0xa54e,	// (0x000959dd) bg_vkb2_func_pane_cp03_ParamLimits

0x6fd3,	// (0x00092462) cell_vitu2_function_top_pane_g1_ParamLimits

0xa54e,	// (0x000959dd) bg_vkb2_func_pane_cp04_ParamLimits

0x7d0b,	// (0x0009319a) main_ncimui_button_group_pane_ParamLimits

0x7d0b,	// (0x0009319a) main_ncimui_button_group_pane

0x7d6b,	// (0x000931fa) main_ncimui_pane_t3_ParamLimits

0x7d6b,	// (0x000931fa) main_ncimui_pane_t3

0xe8bf,	// (0x00099d4e) phacti_button_group_pane

0xea8a,	// (0x00099f19) aid_size_list_single_double_ParamLimits

0x8bf3,	// (0x00094082) popup_ezdial_listscroll_window_ParamLimits

0x8c0f,	// (0x0009409e) popup_number_entry_window_cp01_ParamLimits

0x8ca7,	// (0x00094136) phacti_button_pane_ParamLimits

0x8ca7,	// (0x00094136) phacti_button_pane

0x97e8,	// (0x00094c77) bg_button_pane_cp14

0xeb0f,	// (0x00099f9e) phacti_button_pane_t1

0x8cb8,	// (0x00094147) main_touch_calib_button_pane_ParamLimits

0x8cb8,	// (0x00094147) main_touch_calib_button_pane

0xa8ab,	// (0x00095d3a) bg_button_pane_cp18_ParamLimits

0xa8ab,	// (0x00095d3a) bg_button_pane_cp18

0xeb1d,	// (0x00099fac) main_touch_calib_button_pane_t1_ParamLimits

0xeb1d,	// (0x00099fac) main_touch_calib_button_pane_t1

0xeb33,	// (0x00099fc2) main_touch_calib_button_pane_t2_ParamLimits

0xeb33,	// (0x00099fc2) main_touch_calib_button_pane_t2

0x0001,

0xfe39,	// (0x0009b2c8) main_touch_calib_button_pane_t_ParamLimits

0xfe39,	// (0x0009b2c8) main_touch_calib_button_pane_t

0x97e8,	// (0x00094c77) cell_ncimui_button_pane

0x97e8,	// (0x00094c77) bg_button_pane_cp032

0xeb51,	// (0x00099fe0) cell_ncimui_button_pane_t1

0xa159,	// (0x000955e8) image3_infobar_pane_ParamLimits

0xa159,	// (0x000955e8) image3_infobar_pane

0x8180,	// (0x0009360f) fs_bigclock_status_pane_ParamLimits

0x8180,	// (0x0009360f) fs_bigclock_status_pane

0x818d,	// (0x0009361c) main_fs_bigclock_clock_pane_ParamLimits

0x818d,	// (0x0009361c) main_fs_bigclock_clock_pane

0x81ab,	// (0x0009363a) main_fs_bigclock_indi_pane_ParamLimits

0x81ab,	// (0x0009363a) main_fs_bigclock_indi_pane

0x81dd,	// (0x0009366c) main_fs_bigclock_swipe_pane_ParamLimits

0x81dd,	// (0x0009366c) main_fs_bigclock_swipe_pane

0x97e8,	// (0x00094c77) main_fs_clock_dumped_data

0xe40c,	// (0x0009989b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe40c,	// (0x0009989b) list_single_fs_bigclock_indicator_pane_g1

0xe427,	// (0x000998b6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe427,	// (0x000998b6) list_single_fs_bigclock_indicator_pane_g2

0xe441,	// (0x000998d0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe441,	// (0x000998d0) list_single_fs_bigclock_indicator_pane_g3

0xe45b,	// (0x000998ea) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe45b,	// (0x000998ea) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x0009b0ec) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x0009b0ec) list_single_fs_bigclock_indicator_pane_g

0xe486,	// (0x00099915) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe486,	// (0x00099915) list_single_fs_bigclock_indicator_pane_t1

0xe4ae,	// (0x0009993d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ae,	// (0x0009993d) list_single_fs_bigclock_indicator_pane_t2

0xe4d6,	// (0x00099965) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4d6,	// (0x00099965) list_single_fs_bigclock_indicator_pane_t3

0xe4fe,	// (0x0009998d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4fe,	// (0x0009998d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x0009b0f7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x0009b0f7) list_single_fs_bigclock_indicator_pane_t

0xeb5f,	// (0x00099fee) image3_infobar_fav_pane_ParamLimits

0xeb5f,	// (0x00099fee) image3_infobar_fav_pane

0xeb6f,	// (0x00099ffe) image3_infobar_loc_pane_ParamLimits

0xeb6f,	// (0x00099ffe) image3_infobar_loc_pane

0xeb83,	// (0x0009a012) image3_infobar_time_pane_ParamLimits

0xeb83,	// (0x0009a012) image3_infobar_time_pane

0xcd11,	// (0x000981a0) image3_infobar_time_pane_g1

0xeb93,	// (0x0009a022) image3_infobar_time_pane_t1

0xcd11,	// (0x000981a0) image3_infobar_loc_pane_g1

0xeba1,	// (0x0009a030) image3_infobar_loc_pane_g2

0x0001,

0xfe3e,	// (0x0009b2cd) image3_infobar_loc_pane_g

0xeba9,	// (0x0009a038) image3_infobar_loc_pane_t1

0xcd11,	// (0x000981a0) image3_infobar_fav_pane_g1

0xebb7,	// (0x0009a046) image3_infobar_fav_pane_g2

0x0001,

0xfe43,	// (0x0009b2d2) image3_infobar_fav_pane_g

0xebbf,	// (0x0009a04e) fs_bigclock_status_battery_pane

0xebc8,	// (0x0009a057) fs_bigclock_status_signal_pane

0xebd1,	// (0x0009a060) fs_bigclock_status_title_pane

0xebda,	// (0x0009a069) fs_bigclock_status_signal_pane_g1

0xebe3,	// (0x0009a072) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe48,	// (0x0009b2d7) fs_bigclock_status_signal_pane_g

0xebeb,	// (0x0009a07a) fs_bigclock_status_battery_pane_g1

0xebf4,	// (0x0009a083) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe4d,	// (0x0009b2dc) fs_bigclock_status_battery_pane_g

0xebfc,	// (0x0009a08b) fs_bigclock_status_title_pane_t1

0x8ccd,	// (0x0009415c) main_fs_bigclock_clock_pane_g1

0x8ccd,	// (0x0009415c) main_fs_bigclock_clock_pane_g2

0x8cde,	// (0x0009416d) main_fs_bigclock_clock_pane_g3

0x8cde,	// (0x0009416d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe52,	// (0x0009b2e1) main_fs_bigclock_clock_pane_g

0x8cf1,	// (0x00094180) main_fs_bigclock_clock_pane_t1

0x8d07,	// (0x00094196) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5b,	// (0x0009b2ea) main_fs_bigclock_clock_pane_t

0xec0a,	// (0x0009a099) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec0a,	// (0x0009a099) list_single_fs_bigclock_indicator_pane

0xec1b,	// (0x0009a0aa) list_single_fs_bigclock_pane_ParamLimits

0xec1b,	// (0x0009a0aa) list_single_fs_bigclock_pane

0xec41,	// (0x0009a0d0) main_fs_bigclock_indicator_pane_t1

0xec50,	// (0x0009a0df) list_single_fs_bigclock_pane_g1

0xec58,	// (0x0009a0e7) list_single_fs_bigclock_pane_t1

0xcd11,	// (0x000981a0) main_fs_bigclock_swipe_pane_g1

0xec9b,	// (0x0009a12a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6c,	// (0x0009b2fb) main_fs_bigclock_swipe_pane_g

0xeca3,	// (0x0009a132) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca3,	// (0x0009a132) main_fs_bigclock_swipe_pane_t1

0x2fa5,	// (0x0008e434) call_type_pane_ParamLimits

0x97e8,	// (0x00094c77) main_btmg_pane

0xa423,	// (0x000958b2) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa423,	// (0x000958b2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfddf,	// (0x0009b26e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfddf,	// (0x0009b26e) list_single_cale_mrui_row_pane_g

0xa4a9,	// (0x00095938) list_recal_vselct_arw_lo_pane

0xeada,	// (0x00099f69) list_recal_vselct_arw_up_pane

0xa4b1,	// (0x00095940) list_recal_vselct_pane

0x8d61,	// (0x000941f0) btmg_button_pane

0x8d6b,	// (0x000941fa) main_btmg_pane_g1

0x97e8,	// (0x00094c77) bg_button_pane_cp044

0xecc0,	// (0x0009a14f) btmg_button_pane_t1

0xc8f5,	// (0x00097d84) aid_listscroll_gen

0xa54e,	// (0x000959dd) main_cntbar_detail_pane

0xe80b,	// (0x00099c9a) list_cmail_folder_pane

0xc08e,	// (0x0009751d) sp_fs_scroll_pane_cp03_ParamLimits

0x0dab,	// (0x0008c23a) list_single_fs_dyc_pane_cp01_ParamLimits

0x0dab,	// (0x0008c23a) list_single_fs_dyc_pane_cp01

0xecce,	// (0x0009a15d) aid_size_cmail_indent

0xa528,	// (0x000959b7) list_single_dyc_row_pane_cp01

0x8da7,	// (0x00094236) cntbar_detail_list_pane_ParamLimits

0x8da7,	// (0x00094236) cntbar_detail_list_pane

0x8df3,	// (0x00094282) main_cntbar_detail_cont_pane_ParamLimits

0x8df3,	// (0x00094282) main_cntbar_detail_cont_pane

0xc08e,	// (0x0009751d) scroll_pane_cp032_ParamLimits

0xc08e,	// (0x0009751d) scroll_pane_cp032

0x8e07,	// (0x00094296) cntbar_detail_list_event_pane_ParamLimits

0x8e07,	// (0x00094296) cntbar_detail_list_event_pane

0x8db7,	// (0x00094246) cntbar_detail_list_shct_pane

0xad20,	// (0x000961af) aid_list_gen

0xecd7,	// (0x0009a166) aid_scroll

0xece0,	// (0x0009a16f) aid_size_touch_scroll_bar

0x75b1,	// (0x00092a40) aid_list_double

0x8e17,	// (0x000942a6) aid_list_single

0x75b1,	// (0x00092a40) aid_list_single_lg

0x0dc0,	// (0x0008c24f) aid_list_z_g_a_sm

0x8e20,	// (0x000942af) aid_list_z_g_d

0x0dc8,	// (0x0008c257) aid_txt_z_prm

0x0dd6,	// (0x0008c265) aid_txt_z_prm_cp01

0x0de4,	// (0x0008c273) aid_txt_z_sec

0x8e28,	// (0x000942b7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e28,	// (0x000942b7) main_cntbar_detail_cont_pane_g1

0x8e3c,	// (0x000942cb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e3c,	// (0x000942cb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe71,	// (0x0009b300) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe71,	// (0x0009b300) main_cntbar_detail_cont_pane_g

0xece9,	// (0x0009a178) main_cntbar_detail_cont_pane_t1

0xecf7,	// (0x0009a186) main_cntbar_detail_cont_pane_t2

0xed05,	// (0x0009a194) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe76,	// (0x0009b305) main_cntbar_detail_cont_pane_t

0x8e4c,	// (0x000942db) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8e4c,	// (0x000942db) cell_cntbar_detail_list_shct_pane

0xed13,	// (0x0009a1a2) cntbar_detail_list_shct_pane_g1

0xed1c,	// (0x0009a1ab) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe7d,	// (0x0009b30c) cntbar_detail_list_shct_pane_g

0x8e60,	// (0x000942ef) cntbar_detail_list_event_pane_g1_ParamLimits

0x8e60,	// (0x000942ef) cntbar_detail_list_event_pane_g1

0x8e6c,	// (0x000942fb) cntbar_detail_list_event_pane_g2_ParamLimits

0x8e6c,	// (0x000942fb) cntbar_detail_list_event_pane_g2

0x0005,

0xfe82,	// (0x0009b311) cntbar_detail_list_event_pane_g_ParamLimits

0xfe82,	// (0x0009b311) cntbar_detail_list_event_pane_g

0x8ed8,	// (0x00094367) cntbar_detail_list_event_pane_t1_ParamLimits

0x8ed8,	// (0x00094367) cntbar_detail_list_event_pane_t1

0x8eed,	// (0x0009437c) cntbar_detail_list_event_pane_t2_ParamLimits

0x8eed,	// (0x0009437c) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8f,	// (0x0009b31e) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8f,	// (0x0009b31e) cntbar_detail_list_event_pane_t

0xcd11,	// (0x000981a0) cell_cntbar_detail_list_shct_pane_g1

0xb4b7,	// (0x00096946) navi_pane_mv_g3

0xa54e,	// (0x000959dd) main_cntbar_detail_pane_ParamLimits

0x97e8,	// (0x00094c77) main_notif_wgt_pane

0x9f45,	// (0x000953d4) aid_tch_main_mp4_pane_g4

0xa151,	// (0x000955e0) popup_slider_window_cp02

0xa49f,	// (0x0009592e) list_recal_day_event_pane

0x8d75,	// (0x00094204) cntbar_detail_btn_pane_ParamLimits

0x8d75,	// (0x00094204) cntbar_detail_btn_pane

0x8d8e,	// (0x0009421d) cntbar_detail_btn_pane_cp01_ParamLimits

0x8d8e,	// (0x0009421d) cntbar_detail_btn_pane_cp01

0x8db7,	// (0x00094246) cntbar_detail_list_shct_pane_ParamLimits

0x8dc7,	// (0x00094256) cntbar_detail_pane_g1_ParamLimits

0x8dc7,	// (0x00094256) cntbar_detail_pane_g1

0x8dd7,	// (0x00094266) cntbar_detail_pane_t1_ParamLimits

0x8dd7,	// (0x00094266) cntbar_detail_pane_t1

0x8e78,	// (0x00094307) cntbar_detail_list_event_pane_g3_ParamLimits

0x8e78,	// (0x00094307) cntbar_detail_list_event_pane_g3

0x8e90,	// (0x0009431f) cntbar_detail_list_event_pane_g4_ParamLimits

0x8e90,	// (0x0009431f) cntbar_detail_list_event_pane_g4

0x8ea8,	// (0x00094337) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ea8,	// (0x00094337) cntbar_detail_list_event_pane_g5

0x8ec0,	// (0x0009434f) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ec0,	// (0x0009434f) cntbar_detail_list_event_pane_g6

0x8f02,	// (0x00094391) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f02,	// (0x00094391) cntbar_detail_list_event_pane_t3

0x8f14,	// (0x000943a3) popup_notif_wgt_window_ParamLimits

0x8f14,	// (0x000943a3) popup_notif_wgt_window

0x8f2d,	// (0x000943bc) popup_submenu_window_cp01_ParamLimits

0x8f2d,	// (0x000943bc) popup_submenu_window_cp01

0xaa79,	// (0x00095f08) bg_popup_window_pane_cp10

0xed25,	// (0x0009a1b4) listscroll_notif_wgt_pane

0xed37,	// (0x0009a1c6) list_notif_wgt_window

0xed40,	// (0x0009a1cf) scroll_pane_cp033

0x8f43,	// (0x000943d2) list_notif_wgt_row_pane_ParamLimits

0x8f43,	// (0x000943d2) list_notif_wgt_row_pane

0xed49,	// (0x0009a1d8) aid_size_list_notif_wgt_del

0xed56,	// (0x0009a1e5) list_notif_wgt_row_pane_g1

0xed62,	// (0x0009a1f1) list_notif_wgt_row_pane_g2

0xed71,	// (0x0009a200) list_notif_wgt_row_pane_g3

0x0002,

0xfe96,	// (0x0009b325) list_notif_wgt_row_pane_g

0xed7e,	// (0x0009a20d) list_notif_wgt_row_pane_t1

0xed94,	// (0x0009a223) list_notif_wgt_row_pane_t2

0xeda6,	// (0x0009a235) list_notif_wgt_row_pane_t3

0x0002,

0xfe9d,	// (0x0009b32c) list_notif_wgt_row_pane_t

0xd914,	// (0x00098da3) list_recal_day_event_pane_g1

0xedb8,	// (0x0009a247) list_recal_day_event_pane_t1

0x97e8,	// (0x00094c77) bg_button_pane_cp045

0x8f53,	// (0x000943e2) cntbar_detail_btn_pane_t1

0xc909,	// (0x00097d98) main_callh_pane_ParamLimits

0xc909,	// (0x00097d98) main_callh_pane

0x97e8,	// (0x00094c77) main_coverflow0_pane

0x97e8,	// (0x00094c77) main_wgtman_pane

0x81f5,	// (0x00093684) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81f5,	// (0x00093684) main_fs_bigclock_unlock_btn_pane

0x879b,	// (0x00093c2a) bg_button_pane_cp16

0x87ab,	// (0x00093c3a) cell_tport_appsw_pane_g3

0x8f61,	// (0x000943f0) cf0_flow_pane_ParamLimits

0x8f61,	// (0x000943f0) cf0_flow_pane

0xedc7,	// (0x0009a256) listscroll_cf0_pane

0xedd2,	// (0x0009a261) main_cf0_pane_g1

0x8f76,	// (0x00094405) main_cf0_pane_t1_ParamLimits

0x8f76,	// (0x00094405) main_cf0_pane_t1

0x8f8d,	// (0x0009441c) main_cf0_pane_t2_ParamLimits

0x8f8d,	// (0x0009441c) main_cf0_pane_t2

0x0001,

0xfea9,	// (0x0009b338) main_cf0_pane_t_ParamLimits

0xfea9,	// (0x0009b338) main_cf0_pane_t

0xede4,	// (0x0009a273) scroll_pane_cp11

0x8fa4,	// (0x00094433) cf0_flow_pane_g1

0x8fac,	// (0x0009443b) cf0_flow_pane_g2

0x0001,

0xfeae,	// (0x0009b33d) cf0_flow_pane_g

0x8fb4,	// (0x00094443) cf0_flow_pane_t1

0x97e8,	// (0x00094c77) main_call6_pane

0x97e8,	// (0x00094c77) main_calllock_pane

0x8fc2,	// (0x00094451) call6_btn_grp_pane_ParamLimits

0x8fc2,	// (0x00094451) call6_btn_grp_pane

0x8fdc,	// (0x0009446b) call6_pane_g1_ParamLimits

0x8fdc,	// (0x0009446b) call6_pane_g1

0x8ff2,	// (0x00094481) popup_call6_1st_window_ParamLimits

0x8ff2,	// (0x00094481) popup_call6_1st_window

0x9003,	// (0x00094492) popup_call6_2nd_window_ParamLimits

0x9003,	// (0x00094492) popup_call6_2nd_window

0x9014,	// (0x000944a3) cell_call6_btn_pane_ParamLimits

0x9014,	// (0x000944a3) cell_call6_btn_pane

0xaa79,	// (0x00095f08) bg_popup_call2_in_pane_cp03

0xedef,	// (0x0009a27e) popup_call6_1st_window_g1

0xedf7,	// (0x0009a286) popup_call6_1st_window_g2

0xedff,	// (0x0009a28e) popup_call6_1st_window_g3

0x0002,

0xfeb3,	// (0x0009b342) popup_call6_1st_window_g

0xee07,	// (0x0009a296) popup_call6_1st_window_t1

0xee16,	// (0x0009a2a5) popup_call6_1st_window_t2

0xee24,	// (0x0009a2b3) popup_call6_1st_window_t3

0x0002,

0xfeba,	// (0x0009b349) popup_call6_1st_window_t

0xaa79,	// (0x00095f08) bg_popup_call2_in_pane_cp04

0xedef,	// (0x0009a27e) popup_call6_2nd_window_g1

0xedf7,	// (0x0009a286) popup_call6_2nd_window_g2

0xedff,	// (0x0009a28e) popup_call6_2nd_window_g3

0x0002,

0xfeb3,	// (0x0009b342) popup_call6_2nd_window_g

0xee07,	// (0x0009a296) popup_call6_2nd_window_t1

0x97e8,	// (0x00094c77) bg_button_pane_cp15

0xee32,	// (0x0009a2c1) cell_call6_btn_pane_g1

0xa531,	// (0x000959c0) cell_call6_btn_pane_t1

0x9027,	// (0x000944b6) listscroll_wgtman_pane_ParamLimits

0x9027,	// (0x000944b6) listscroll_wgtman_pane

0x9048,	// (0x000944d7) wgtman_btn_pane_ParamLimits

0x9048,	// (0x000944d7) wgtman_btn_pane

0xb2be,	// (0x0009674d) aid_scroll_copy1

0xee3b,	// (0x0009a2ca) list_wgtman_pane

0x908b,	// (0x0009451a) wgtman_btn_pane_g1_ParamLimits

0x908b,	// (0x0009451a) wgtman_btn_pane_g1

0x90b7,	// (0x00094546) wgtman_btn_pane_t1_ParamLimits

0x90b7,	// (0x00094546) wgtman_btn_pane_t1

0xee45,	// (0x0009a2d4) wgtman_btn_pane_t2_ParamLimits

0xee45,	// (0x0009a2d4) wgtman_btn_pane_t2

0x0001,

0xfec1,	// (0x0009b350) wgtman_btn_pane_t_ParamLimits

0xfec1,	// (0x0009b350) wgtman_btn_pane_t

0x90f4,	// (0x00094583) listrow_wgtman_pane_ParamLimits

0x90f4,	// (0x00094583) listrow_wgtman_pane

0x9106,	// (0x00094595) listrow_wgtman_pane_g1

0x9113,	// (0x000945a2) listrow_wgtman_pane_g2

0x0001,

0xfec6,	// (0x0009b355) listrow_wgtman_pane_g

0x0df2,	// (0x0008c281) listrow_wgtman_pane_t1

0x0e0a,	// (0x0008c299) listrow_wgtman_pane_t2

0x0001,

0xfecb,	// (0x0009b35a) listrow_wgtman_pane_t

0x0e30,	// (0x0008c2bf) wait_bar_pane_cp09

0xee5c,	// (0x0009a2eb) main_calllock_btn_pane

0xee66,	// (0x0009a2f5) main_calllock_pane_g1

0x97e8,	// (0x00094c77) bg_button_pane_cp17

0xee32,	// (0x0009a2c1) main_calllock_btn_pane_g1

0xee72,	// (0x0009a301) main_calllock_btn_pane_t1

0x97e8,	// (0x00094c77) main_dialer3_pane

0x97e8,	// (0x00094c77) main_fmrd2_pane

0xcd11,	// (0x000981a0) main_fs_bigclock_unlock_btn_pane_g1

0x9139,	// (0x000945c8) main_fs_bigclock_unlock_btn_pane_t1

0x9147,	// (0x000945d6) area_fmrd2_info_pane_ParamLimits

0x9147,	// (0x000945d6) area_fmrd2_info_pane

0x9158,	// (0x000945e7) area_fmrd2_visual_pane_ParamLimits

0x9158,	// (0x000945e7) area_fmrd2_visual_pane

0x9166,	// (0x000945f5) fmrd2_indi_pane_ParamLimits

0x9166,	// (0x000945f5) fmrd2_indi_pane

0x9173,	// (0x00094602) area_fmrd2_visual_pane_g1

0x917b,	// (0x0009460a) area_fmrd2_visual_pane_t1

0x918b,	// (0x0009461a) area_fmrd2_visual_pane_t2

0x919b,	// (0x0009462a) area_fmrd2_visual_pane_t3

0x0002,

0xfed5,	// (0x0009b364) area_fmrd2_visual_pane_t

0x91ab,	// (0x0009463a) area_fmrd2_info_pane_g1

0x91b3,	// (0x00094642) area_fmrd2_info_pane_t1

0x91c3,	// (0x00094652) area_fmrd2_info_pane_t2

0x91d3,	// (0x00094662) area_fmrd2_info_pane_t3

0x91e3,	// (0x00094672) area_fmrd2_info_pane_t4

0x0003,

0xfedc,	// (0x0009b36b) area_fmrd2_info_pane_t

0x91f1,	// (0x00094680) fmrd2_indi_pane_t1

0x9201,	// (0x00094690) fmrd2_indi_pane_t2

0x9211,	// (0x000946a0) fmrd2_indi_pane_t3

0x0002,

0xfee5,	// (0x0009b374) fmrd2_indi_pane_t

0xe46a,	// (0x000998f9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe46a,	// (0x000998f9) list_single_fs_bigclock_indicator_pane_g5

0xe51b,	// (0x000999aa) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe51b,	// (0x000999aa) list_single_fs_bigclock_indicator_pane_t5

0x89c7,	// (0x00093e56) aid_cell_bcale_month_pane_ParamLimits

0x89c7,	// (0x00093e56) aid_cell_bcale_month_pane

0x89e5,	// (0x00093e74) bcale_month_pane_ParamLimits

0x89e5,	// (0x00093e74) bcale_month_pane

0x8a09,	// (0x00093e98) bcale_preview_pane_ParamLimits

0x8a09,	// (0x00093e98) bcale_preview_pane

0xec58,	// (0x0009a0e7) list_single_fs_bigclock_pane_t1_ParamLimits

0xec77,	// (0x0009a106) list_single_fs_bigclock_pane_t2_ParamLimits

0xec77,	// (0x0009a106) list_single_fs_bigclock_pane_t2

0x0001,

0xfe67,	// (0x0009b2f6) list_single_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x0009b2f6) list_single_fs_bigclock_pane_t

0x9131,	// (0x000945c0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed0,	// (0x0009b35f) main_fs_bigclock_unlock_btn_pane_g

0x9221,	// (0x000946b0) aid_dia3_key_size_ParamLimits

0x9221,	// (0x000946b0) aid_dia3_key_size

0x9230,	// (0x000946bf) aid_dia3_listrow_size_ParamLimits

0x9230,	// (0x000946bf) aid_dia3_listrow_size

0x9245,	// (0x000946d4) dia3_keypad_fun_pane_ParamLimits

0x9245,	// (0x000946d4) dia3_keypad_fun_pane

0x9261,	// (0x000946f0) dia3_keypad_num_pane_ParamLimits

0x9261,	// (0x000946f0) dia3_keypad_num_pane

0x927c,	// (0x0009470b) dia3_listscroll_pane_ParamLimits

0x927c,	// (0x0009470b) dia3_listscroll_pane

0x928f,	// (0x0009471e) dia3_numentry_pane_ParamLimits

0x928f,	// (0x0009471e) dia3_numentry_pane

0xee81,	// (0x0009a310) dia3_list_pane

0xee8c,	// (0x0009a31b) scroll_pane_cp12

0x97e8,	// (0x00094c77) bg_dia3_numentry_pane

0x92a3,	// (0x00094732) dia3_numentry_pane_t1

0x92b2,	// (0x00094741) cell_dia3_key_num_pane

0x92ba,	// (0x00094749) cell_dia3_key0_fun_pane_ParamLimits

0x92ba,	// (0x00094749) cell_dia3_key0_fun_pane

0x92ce,	// (0x0009475d) cell_dia3_key1_fun_pane_ParamLimits

0x92ce,	// (0x0009475d) cell_dia3_key1_fun_pane

0x92e6,	// (0x00094775) dia3_listrow_pane

0xe1bd,	// (0x0009964c) bg_dia3_numentry_pane_g1

0x97e8,	// (0x00094c77) bg_button_pane_cp21

0xee97,	// (0x0009a326) cell_dia3_key_num_pane_t1

0xeea5,	// (0x0009a334) cell_dia3_key_num_pane_t2

0xeeb4,	// (0x0009a343) cell_dia3_key_num_pane_t3

0xeec3,	// (0x0009a352) cell_dia3_key_num_pane_t4

0x0003,

0xfeec,	// (0x0009b37b) cell_dia3_key_num_pane_t

0x97e8,	// (0x00094c77) bg_button_pane_cp19

0x92f8,	// (0x00094787) cell_dia3_key0_fun_pane_g1

0x97e8,	// (0x00094c77) bg_button_pane_cp20

0x9300,	// (0x0009478f) cell_dia3_key1_fun_pane_g1

0x9308,	// (0x00094797) area_left_week_number_pane

0x9314,	// (0x000947a3) area_top_day_name_pane

0x9327,	// (0x000947b6) frame_month_view_pane

0xeed2,	// (0x0009a361) grid_month_view_pane

0x933a,	// (0x000947c9) cell_top_day_name_pane_ParamLimits

0x933a,	// (0x000947c9) cell_top_day_name_pane

0x9367,	// (0x000947f6) cell_area_left_week_number_pane_ParamLimits

0x9367,	// (0x000947f6) cell_area_left_week_number_pane

0x937b,	// (0x0009480a) cell_month_view_pane_ParamLimits

0x937b,	// (0x0009480a) cell_month_view_pane

0xeee0,	// (0x0009a36f) frm_month_g1

0x93a8,	// (0x00094837) frm_month_g2

0x93bb,	// (0x0009484a) frm_month_g3

0x93ce,	// (0x0009485d) frm_month_g4

0x93e1,	// (0x00094870) frm_month_g5

0x93f4,	// (0x00094883) frm_month_g6

0x9407,	// (0x00094896) frm_month_g7

0xeeed,	// (0x0009a37c) frm_month_g8

0x941a,	// (0x000948a9) frm_month_g9

0x942a,	// (0x000948b9) frm_month_g10

0x943a,	// (0x000948c9) frm_month_g11

0x944a,	// (0x000948d9) frm_month_g12

0x945c,	// (0x000948eb) frm_month_g13

0x946e,	// (0x000948fd) frm_month_g14

0x9482,	// (0x00094911) frm_month_g15

0x9496,	// (0x00094925) frm_month_g16

0x000f,

0xfef5,	// (0x0009b384) frm_month_g

0xeefa,	// (0x0009a389) cell_top_day_name_pane_t1

0x94aa,	// (0x00094939) cell_area_left_week_number_pane_g1

0x94b6,	// (0x00094945) cell_area_left_week_number_pane_t1

0xcf74,	// (0x00098403) cell_month_view_pane_g1

0x94c9,	// (0x00094958) cell_month_view_pane_t1

0x97e8,	// (0x00094c77) main_fps_pane

0xe738,	// (0x00099bc7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe738,	// (0x00099bc7) cmail_ddmenu_btn02_pane_cp1

0xe754,	// (0x00099be3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe754,	// (0x00099be3) cmail_ddmenu_btn02_pane_cp2

0x8c41,	// (0x000940d0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c41,	// (0x000940d0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe1a,	// (0x0009b2a9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe1a,	// (0x0009b2a9) cmail_ddmenu_btn02_pane_g

0x8c5f,	// (0x000940ee) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c5f,	// (0x000940ee) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1f,	// (0x0009b2ae) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1f,	// (0x0009b2ae) cmail_ddmenu_btn02_pane_t

0x94dc,	// (0x0009496b) fps_text_pane_ParamLimits

0x94dc,	// (0x0009496b) fps_text_pane

0x94f3,	// (0x00094982) main_fps_pane_g1_ParamLimits

0x94f3,	// (0x00094982) main_fps_pane_g1

0x950d,	// (0x0009499c) wait_bar_pane_cp010_ParamLimits

0x950d,	// (0x0009499c) wait_bar_pane_cp010

0x951e,	// (0x000949ad) fps_text_pane_t1_ParamLimits

0x951e,	// (0x000949ad) fps_text_pane_t1

0xdb45,	// (0x00098fd4) cam4_image_uncrop_pane_g1

0xdb4e,	// (0x00098fdd) cam4_image_uncrop_pane_g2

0x64fb,	// (0x0009198a) cam4_image_uncrop_pane_g3

0x6504,	// (0x00091993) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0009ad66) cam4_image_uncrop_pane_g

0x92e6,	// (0x00094775) dia3_listrow_pane_ParamLimits

0x97e8,	// (0x00094c77) main_phob2_pane

0x876c,	// (0x00093bfb) cell_tport_appsw_pane_cp02_ParamLimits

0x876c,	// (0x00093bfb) cell_tport_appsw_pane_cp02

0x8780,	// (0x00093c0f) cell_tport_appsw_pane_cp03_ParamLimits

0x8780,	// (0x00093c0f) cell_tport_appsw_pane_cp03

0x97e8,	// (0x00094c77) phob2_contact_card_pane

0x97e8,	// (0x00094c77) phob2_listscroll_pane

0xef0d,	// (0x0009a39c) phob2_list_pane

0xef15,	// (0x0009a3a4) scroll_pane_cp034

0x9536,	// (0x000949c5) phob2_cc_data_pane_ParamLimits

0x9536,	// (0x000949c5) phob2_cc_data_pane

0x9555,	// (0x000949e4) phob2_cc_listscroll_pane_ParamLimits

0x9555,	// (0x000949e4) phob2_cc_listscroll_pane

0x90f4,	// (0x00094583) list_double_large_graphic_phob2_pane_ParamLimits

0x90f4,	// (0x00094583) list_double_large_graphic_phob2_pane

0x9573,	// (0x00094a02) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9573,	// (0x00094a02) list_double_large_graphic_phob2_pane_g1

0x0e42,	// (0x0008c2d1) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0e42,	// (0x0008c2d1) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff16,	// (0x0009b3a5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff16,	// (0x0009b3a5) list_double_large_graphic_phob2_pane_g

0x0e4e,	// (0x0008c2dd) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0e4e,	// (0x0008c2dd) list_double_large_graphic_phob2_pane_t1

0x0e63,	// (0x0008c2f2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0e63,	// (0x0008c2f2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff1b,	// (0x0009b3aa) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff1b,	// (0x0009b3aa) list_double_large_graphic_phob2_pane_t

0x97e8,	// (0x00094c77) list_highlight_pane_cp024

0x9589,	// (0x00094a18) phob2_cc_button_pane

0x9591,	// (0x00094a20) phob2_cc_data_pane_g1_ParamLimits

0x9591,	// (0x00094a20) phob2_cc_data_pane_g1

0x95a6,	// (0x00094a35) phob2_cc_data_pane_g2_ParamLimits

0x95a6,	// (0x00094a35) phob2_cc_data_pane_g2

0x0001,

0xff20,	// (0x0009b3af) phob2_cc_data_pane_g_ParamLimits

0xff20,	// (0x0009b3af) phob2_cc_data_pane_g

0x95b6,	// (0x00094a45) phob2_cc_data_pane_t1_ParamLimits

0x95b6,	// (0x00094a45) phob2_cc_data_pane_t1

0x95ce,	// (0x00094a5d) phob2_cc_data_pane_t2_ParamLimits

0x95ce,	// (0x00094a5d) phob2_cc_data_pane_t2

0x95e6,	// (0x00094a75) phob2_cc_data_pane_t3_ParamLimits

0x95e6,	// (0x00094a75) phob2_cc_data_pane_t3

0x0002,

0xff25,	// (0x0009b3b4) phob2_cc_data_pane_t_ParamLimits

0xff25,	// (0x0009b3b4) phob2_cc_data_pane_t

0xef1d,	// (0x0009a3ac) phob2_cc_list_pane_ParamLimits

0xef1d,	// (0x0009a3ac) phob2_cc_list_pane

0xd9bd,	// (0x00098e4c) scroll_pane_cp035_ParamLimits

0xd9bd,	// (0x00098e4c) scroll_pane_cp035

0xa54e,	// (0x000959dd) bg_button_pane_cp033

0xef29,	// (0x0009a3b8) phob2_cc_button_pane_g1

0xef35,	// (0x0009a3c4) phob2_cc_button_pane_t1

0xef4a,	// (0x0009a3d9) phob2_cc_button_pane_t2

0x0001,

0xff2c,	// (0x0009b3bb) phob2_cc_button_pane_t

0x95fe,	// (0x00094a8d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x95fe,	// (0x00094a8d) list_double_large_graphic_phob2_cc_pane

0x962e,	// (0x00094abd) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x962e,	// (0x00094abd) list_double_large_graphic_phob2_cc_pane_g1

0x0e75,	// (0x0008c304) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0e75,	// (0x0008c304) list_double_large_graphic_phob2_cc_pane_g2

0x0e81,	// (0x0008c310) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0e81,	// (0x0008c310) list_double_large_graphic_phob2_cc_pane_g3

0x0e8d,	// (0x0008c31c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0e8d,	// (0x0008c31c) list_double_large_graphic_phob2_cc_pane_g4

0x0e99,	// (0x0008c328) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0e99,	// (0x0008c328) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff31,	// (0x0009b3c0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff31,	// (0x0009b3c0) list_double_large_graphic_phob2_cc_pane_g

0x0ea5,	// (0x0008c334) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0ea5,	// (0x0008c334) list_double_large_graphic_phob2_cc_pane_t1

0x0ece,	// (0x0008c35d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0ece,	// (0x0008c35d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff3c,	// (0x0009b3cb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff3c,	// (0x0009b3cb) list_double_large_graphic_phob2_cc_pane_t

0xef5c,	// (0x0009a3eb) list_highlight_pane_cp025_ParamLimits

0xef5c,	// (0x0009a3eb) list_highlight_pane_cp025

0xa54e,	// (0x000959dd) bg_button_pane_cp033_ParamLimits

0xef29,	// (0x0009a3b8) phob2_cc_button_pane_g1_ParamLimits

0xef35,	// (0x0009a3c4) phob2_cc_button_pane_t1_ParamLimits

0xef4a,	// (0x0009a3d9) phob2_cc_button_pane_t2_ParamLimits

0xff2c,	// (0x0009b3bb) phob2_cc_button_pane_t_ParamLimits

0x1140,	// (0x0008c5cf) popup_wgtman_window

0xd802,	// (0x00098c91) scroll_pane_cp038

0x906d,	// (0x000944fc) wgtman_btn_pane_cp_01_ParamLimits

0x906d,	// (0x000944fc) wgtman_btn_pane_cp_01

0xef6a,	// (0x0009a3f9) wgtman_content_pane

0xef73,	// (0x0009a402) wgtman_heading_pane

0x97e8,	// (0x00094c77) bg_heading_pane_cp02

0xef7c,	// (0x0009a40b) wgtman_heading_pane_g1

0xef84,	// (0x0009a413) wgtman_heading_pane_t1

0xef92,	// (0x0009a421) scroll_pane_cp036

0xef9a,	// (0x0009a429) wgtman_list_pane

0xefa2,	// (0x0009a431) wgtman_list_pane_t1_ParamLimits

0xefa2,	// (0x0009a431) wgtman_list_pane_t1

0xa1dd,	// (0x0009566c) cam4_grid_pane

0x049b,	// (0x0008b92a) bg_button_pane_cp015_ParamLimits

0x716b,	// (0x000925fa) bg_button_pane_cp016_ParamLimits

0x717e,	// (0x0009260d) bg_button_pane_cp017_ParamLimits

0x04e1,	// (0x0008b970) popup_vitu2_query_window_g3_ParamLimits

0x04e1,	// (0x0008b970) popup_vitu2_query_window_g3

0x055c,	// (0x0008b9eb) popup_vitu2_query_window_t6_ParamLimits

0x055c,	// (0x0008b9eb) popup_vitu2_query_window_t6

0x0587,	// (0x0008ba16) popup_vitu2_query_window_t7_ParamLimits

0x0587,	// (0x0008ba16) popup_vitu2_query_window_t7

0xdb45,	// (0x00098fd4) cam4_grid_pane_g1

0xdb4e,	// (0x00098fdd) cam4_grid_pane_g2

0xefbc,	// (0x0009a44b) cam4_grid_pane_g3

0xefc5,	// (0x0009a454) cam4_grid_pane_g4

0x0003,

0xff41,	// (0x0009b3d0) cam4_grid_pane_g

0x1f8c,	// (0x0008d41b) aid_placing_vt_slider_lsc_ParamLimits

0x2297,	// (0x0008d726) vidtel_button_pane_ParamLimits

0x2297,	// (0x0008d726) vidtel_button_pane

0x97e8,	// (0x00094c77) bg_button_pane_cp034

0xefd0,	// (0x0009a45f) vidtel_button_pane_g1

0xefd8,	// (0x0009a467) vidtel_button_pane_t1

0xd904,	// (0x00098d93) aid_size_vtel_slider_touch

0xd9bd,	// (0x00098e4c) scroll_pane_cp039

0x7ee9,	// (0x00093378) ncim_query_button_pane_cp01_ParamLimits

0x7f08,	// (0x00093397) ncimui_query_pane_g1_ParamLimits

0xa54e,	// (0x000959dd) input_focus_pane_cp012_ParamLimits

0xe1fb,	// (0x0009968a) ncim_query_entry_pane_t1_ParamLimits

0xd9bd,	// (0x00098e4c) scroll_pane_cp039_ParamLimits

0xb3a2,	// (0x00096831) navi_pane_bcale_mc_g1

0xb3aa,	// (0x00096839) navi_pane_bcale_mc_t1

0xe788,	// (0x00099c17) main_sp_fs_email_pane_g1

0xe794,	// (0x00099c23) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x0009b161) main_sp_fs_email_pane_g

0xe9dc,	// (0x00099e6b) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9dc,	// (0x00099e6b) list_single_cale_mrui_row_pane_g3

0x0da1,	// (0x0008c230) list_single_recal_day_pane_g5_event_pane

0xa4fc,	// (0x0009598b) list_single_recal_day_pane_g7

0xefee,	// (0x0009a47d) list_recal_day_event_pane_cp01

0xeff7,	// (0x0009a486) list_recal_vselct_arw_lo_pane_cp01

0xefff,	// (0x0009a48e) list_recal_vselct_arw_up_pane_cp01

0xf007,	// (0x0009a496) list_recal_vselct_pane_cp01

0xd914,	// (0x00098da3) list_recal_day_event_pane_cp01_g1

0xa540,	// (0x000959cf) list_recal_day_event_pane_cp01_t1

0xa504,	// (0x00095993) list_single_recal_day_pane_t1_ParamLimits

0xa516,	// (0x000959a5) list_single_recal_day_pane_t2_ParamLimits

0xfe2f,	// (0x0009b2be) list_single_recal_day_pane_t_ParamLimits

0xa7e6,	// (0x00095c75) bg_notes_pane_ParamLimits

0xa889,	// (0x00095d18) list_notes_pane_ParamLimits

0x1486,	// (0x0008c915) scroll_pane_cp06_ParamLimits

0xa8ab,	// (0x00095d3a) main_notes_pane_ParamLimits

0xa54e,	// (0x000959dd) main_welc_pane

0x9651,	// (0x00094ae0) main_welc_body_pane_ParamLimits

0x9651,	// (0x00094ae0) main_welc_body_pane

0x966f,	// (0x00094afe) main_welc_opti_pane_ParamLimits

0x966f,	// (0x00094afe) main_welc_opti_pane

0x96c3,	// (0x00094b52) main_welc_pane_t1_ParamLimits

0x96c3,	// (0x00094b52) main_welc_pane_t1

0x973e,	// (0x00094bcd) main_welc_body_row_pane_ParamLimits

0x973e,	// (0x00094bcd) main_welc_body_row_pane

0xf011,	// (0x0009a4a0) main_welc_opti_row_pane_ParamLimits

0xf011,	// (0x0009a4a0) main_welc_opti_row_pane

0xf01f,	// (0x0009a4ae) main_welc_opti_row_pane_g1

0x9752,	// (0x00094be1) main_welc_opti_row_pane_t1

0xf027,	// (0x0009a4b6) main_welc_body_row_pane_t1

0xed2f,	// (0x0009a1be) popup_notif_wgt_heading_pane

0xed49,	// (0x0009a1d8) aid_size_list_notif_wgt_del_ParamLimits

0xed56,	// (0x0009a1e5) list_notif_wgt_row_pane_g1_ParamLimits

0xed62,	// (0x0009a1f1) list_notif_wgt_row_pane_g2_ParamLimits

0xed71,	// (0x0009a200) list_notif_wgt_row_pane_g3_ParamLimits

0xfe96,	// (0x0009b325) list_notif_wgt_row_pane_g_ParamLimits

0xed7e,	// (0x0009a20d) list_notif_wgt_row_pane_t1_ParamLimits

0xed94,	// (0x0009a223) list_notif_wgt_row_pane_t2_ParamLimits

0xeda6,	// (0x0009a235) list_notif_wgt_row_pane_t3_ParamLimits

0xfe9d,	// (0x0009b32c) list_notif_wgt_row_pane_t_ParamLimits

0x9106,	// (0x00094595) listrow_wgtman_pane_g1_ParamLimits

0x9113,	// (0x000945a2) listrow_wgtman_pane_g2_ParamLimits

0xfec6,	// (0x0009b355) listrow_wgtman_pane_g_ParamLimits

0x0df2,	// (0x0008c281) listrow_wgtman_pane_t1_ParamLimits

0x0e0a,	// (0x0008c299) listrow_wgtman_pane_t2_ParamLimits

0xfecb,	// (0x0009b35a) listrow_wgtman_pane_t_ParamLimits

0x0e30,	// (0x0008c2bf) wait_bar_pane_cp09_ParamLimits

0x97e8,	// (0x00094c77) bg_popup_heading_pane_cp02

0xf036,	// (0x0009a4c5) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0009a4cd) popup_notif_wgt_heading_pane_t1

0x97e8,	// (0x00094c77) main_vids_pane

0x97e8,	// (0x00094c77) vids_listscroll_pane

0x9761,	// (0x00094bf0) scroll_pane_cp040

0x97e8,	// (0x00094c77) vids_list_pane

0x976c,	// (0x00094bfb) vids_list_double_pane_ParamLimits

0x976c,	// (0x00094bfb) vids_list_double_pane

0x977d,	// (0x00094c0c) vids_list_double_pane_g1

0x9786,	// (0x00094c15) vids_list_double_pane_t1

0x9796,	// (0x00094c25) vids_list_double_pane_t2

0x0001,

0xff58,	// (0x0009b3e7) vids_list_double_pane_t

0xa54e,	// (0x000959dd) main_ncimui_pane_ParamLimits

0x7d1f,	// (0x000931ae) main_ncimui_pane_g1_ParamLimits

0x7d2b,	// (0x000931ba) main_ncimui_pane_g2_ParamLimits

0x7d2b,	// (0x000931ba) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x0009b062) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x0009b062) main_ncimui_pane_g

0x968a,	// (0x00094b19) main_welc_pane_g1_ParamLimits

0x968a,	// (0x00094b19) main_welc_pane_g1

0x969f,	// (0x00094b2e) main_welc_pane_g2_ParamLimits

0x969f,	// (0x00094b2e) main_welc_pane_g2

0x0002,

0xff4a,	// (0x0009b3d9) main_welc_pane_g_ParamLimits

0xff4a,	// (0x0009b3d9) main_welc_pane_g

0xa7e6,	// (0x00095c75) listscroll_mce_pane_ParamLimits

0xb4f7,	// (0x00096986) wait_bar_pane_cp10

0xc8fd,	// (0x00097d8c) main_cale_day_pane_ParamLimits

0xc8fd,	// (0x00097d8c) main_cale_week_pane_ParamLimits

0xa7e6,	// (0x00095c75) main_messa_pane_ParamLimits

0x57a8,	// (0x00090c37) main_clock2_btn_pane_ParamLimits

0x57a8,	// (0x00090c37) main_clock2_btn_pane

0xd11c,	// (0x000985ab) main_clock2_btn_pane_cp01_ParamLimits

0xd11c,	// (0x000985ab) main_clock2_btn_pane_cp01

0xe9ad,	// (0x00099e3c) list_cale_mrui_pane_ParamLimits

0xeddc,	// (0x0009a26b) main_cf0_pane_g2

0x0001,

0xfea4,	// (0x0009b333) main_cf0_pane_g

0x9308,	// (0x00094797) area_left_week_number_pane_ParamLimits

0x9314,	// (0x000947a3) area_top_day_name_pane_ParamLimits

0x9327,	// (0x000947b6) frame_month_view_pane_ParamLimits

0xeed2,	// (0x0009a361) grid_month_view_pane_ParamLimits

0xeee0,	// (0x0009a36f) frm_month_g1_ParamLimits

0x93a8,	// (0x00094837) frm_month_g2_ParamLimits

0x93bb,	// (0x0009484a) frm_month_g3_ParamLimits

0x93ce,	// (0x0009485d) frm_month_g4_ParamLimits

0x93e1,	// (0x00094870) frm_month_g5_ParamLimits

0x93f4,	// (0x00094883) frm_month_g6_ParamLimits

0x9407,	// (0x00094896) frm_month_g7_ParamLimits

0xeeed,	// (0x0009a37c) frm_month_g8_ParamLimits

0x941a,	// (0x000948a9) frm_month_g9_ParamLimits

0x942a,	// (0x000948b9) frm_month_g10_ParamLimits

0x943a,	// (0x000948c9) frm_month_g11_ParamLimits

0x944a,	// (0x000948d9) frm_month_g12_ParamLimits

0x945c,	// (0x000948eb) frm_month_g13_ParamLimits

0x946e,	// (0x000948fd) frm_month_g14_ParamLimits

0x9482,	// (0x00094911) frm_month_g15_ParamLimits

0x9496,	// (0x00094925) frm_month_g16_ParamLimits

0xfef5,	// (0x0009b384) frm_month_g_ParamLimits

0xeefa,	// (0x0009a389) cell_top_day_name_pane_t1_ParamLimits

0x94aa,	// (0x00094939) cell_area_left_week_number_pane_g1_ParamLimits

0x94b6,	// (0x00094945) cell_area_left_week_number_pane_t1_ParamLimits

0xcf74,	// (0x00098403) cell_month_view_pane_g1_ParamLimits

0x94c9,	// (0x00094958) cell_month_view_pane_t1_ParamLimits

0xa7de,	// (0x00095c6d) main_clock2_btn_pane_g1

0xf04c,	// (0x0009a4db) main_clock2_btn_pane_t1

0xa54e,	// (0x000959dd) listscroll_cmail_pane_ParamLimits

0xe788,	// (0x00099c17) main_sp_fs_email_pane_g1_ParamLimits

0xe794,	// (0x00099c23) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x0009b161) main_sp_fs_email_pane_g_ParamLimits

0xeabb,	// (0x00099f4a) list_recal_day_pane_ParamLimits

0xeacc,	// (0x00099f5b) mian_recal_day_pane_t1

0x09b3,	// (0x0008be42) list_single_dyc_row_text_pane_t4_ParamLimits

0x09b3,	// (0x0008be42) list_single_dyc_row_text_pane_t4

0x09fc,	// (0x0008be8b) list_single_dyc_row_text_pane_t5_ParamLimits

0x09fc,	// (0x0008be8b) list_single_dyc_row_text_pane_t5

0x8657,	// (0x00093ae6) list_single_dyc_row_text_pane_t6_ParamLimits

0x8657,	// (0x00093ae6) list_single_dyc_row_text_pane_t6

0x2eeb,	// (0x0008e37a) aid_mgn_list_cale_time_pane

0xa54e,	// (0x000959dd) main_gallery2_pane_ParamLimits

0xd132,	// (0x000985c1) main_clock2_pane_cp01_t1

0xd142,	// (0x000985d1) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0009ac38) main_clock2_pane_cp01_t

0x1832,	// (0x0008ccc1) cale_week_scroll_pane_g16_ParamLimits

0x1832,	// (0x0008ccc1) cale_week_scroll_pane_g16

0xaa79,	// (0x00095f08) vorec_slider_pane

0xefd8,	// (0x0009a467) vidtel_button_pane_t1_ParamLimits

0x8ccd,	// (0x0009415c) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8ccd,	// (0x0009415c) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8cde,	// (0x0009416d) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8cde,	// (0x0009416d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe52,	// (0x0009b2e1) main_fs_bigclock_clock_pane_g_ParamLimits

0x8cf1,	// (0x00094180) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8d07,	// (0x00094196) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe5b,	// (0x0009b2ea) main_fs_bigclock_clock_pane_t_ParamLimits

0x4f9f,	// (0x0009042e) main_mup3_lyrics_pane_ParamLimits

0x4f9f,	// (0x0009042e) main_mup3_lyrics_pane

0x97cc,	// (0x00094c5b) main_mup3_lyrics_pane_t1_ParamLimits

0x97cc,	// (0x00094c5b) main_mup3_lyrics_pane_t1

0x9f2f,	// (0x000953be) aid_main_mp4_pane_t1_area

0x9f39,	// (0x000953c8) aid_main_mp4_pane_t2_area

0x9fe5,	// (0x00095474) main_mp4_pane_g7_ParamLimits

0x9fe5,	// (0x00095474) main_mp4_pane_g7

0x9ff1,	// (0x00095480) main_mp4_pane_g8_ParamLimits

0x9ff1,	// (0x00095480) main_mp4_pane_g8

0x62ce,	// (0x0009175d) aid_call6_pane_g1_size

0x9618,	// (0x00094aa7) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9618,	// (0x00094aa7) list_double_large_graphic_phob2_other_pane

0xae34,	// (0x000962c3) list_double_large_graphic_phob2_other_pane_g1

0x97e8,	// (0x00094c77) list_highlight_pane_cp026

0xa54e,	// (0x000959dd) main_welc_pane_ParamLimits

0x8518,	// (0x000939a7) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8518,	// (0x000939a7) main_sp_fs_ctrlbar_pane_g3

0x8532,	// (0x000939c1) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8532,	// (0x000939c1) main_sp_fs_ctrlbar_pane_g4

0x8566,	// (0x000939f5) toolbar2_fixed_button_pane_cp01

0x8571,	// (0x00093a00) toolbar2_fixed_button_pane_cp02

0x857e,	// (0x00093a0d) toolbar2_fixed_button_pane_cp03

0x963a,	// (0x00094ac9) list_welc_entry_pane_ParamLimits

0x963a,	// (0x00094ac9) list_welc_entry_pane

0x96b4,	// (0x00094b43) main_welc_pane_g3_ParamLimits

0x96b4,	// (0x00094b43) main_welc_pane_g3

0x96e1,	// (0x00094b70) main_welc_pane_t2_ParamLimits

0x96e1,	// (0x00094b70) main_welc_pane_t2

0x96fb,	// (0x00094b8a) main_welc_pane_t3_ParamLimits

0x96fb,	// (0x00094b8a) main_welc_pane_t3

0x0002,

0xff51,	// (0x0009b3e0) main_welc_pane_t_ParamLimits

0xff51,	// (0x0009b3e0) main_welc_pane_t

0x9712,	// (0x00094ba1) welc_button_pane_ParamLimits

0x9712,	// (0x00094ba1) welc_button_pane

0x9729,	// (0x00094bb8) welc_service_logo_pane_ParamLimits

0x9729,	// (0x00094bb8) welc_service_logo_pane

0xf05a,	// (0x0009a4e9) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0009a4e9) list_single_welc_entry_pane

0xf06b,	// (0x0009a4fa) list_single_welc_entry_pane_g1

0xf073,	// (0x0009a502) list_single_welc_entry_pane_t1

0xf081,	// (0x0009a510) list_single_welc_entry_pane_t2

0x0001,

0xff5d,	// (0x0009b3ec) list_single_welc_entry_pane_t

0x97e8,	// (0x00094c77) bg_button_pane_cp035

0xf08f,	// (0x0009a51e) welc_button_pane_t1

0xf09d,	// (0x0009a52c) welc_service_logo_pane_g1

0xf0a6,	// (0x0009a535) welc_service_logo_pane_g2

0x0001,

0xff62,	// (0x0009b3f1) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
