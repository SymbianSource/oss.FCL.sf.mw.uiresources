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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000a4f9e };

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
0x021b,	// (0x000a51b9) Screen

0x0227,	// (0x000a51c5) application_window

0x028f,	// (0x000a522d) area_bottom_pane_ParamLimits

0x028f,	// (0x000a522d) area_bottom_pane

0x02c8,	// (0x000a5266) area_top_pane_ParamLimits

0x02c8,	// (0x000a5266) area_top_pane

0x94c9,	// (0x000ae467) call_video_uplink_pane_ParamLimits

0x94c9,	// (0x000ae467) call_video_uplink_pane

0x0356,	// (0x000a52f4) main_pane_ParamLimits

0x0356,	// (0x000a52f4) main_pane

0xba3b,	// (0x000b09d9) context_pane

0x39c5,	// (0x000a8963) navi_pane

0x39f7,	// (0x000a8995) popup_cale_events_window_ParamLimits

0x39f7,	// (0x000a8995) popup_cale_events_window

0xba4e,	// (0x000b09ec) popup_mup_playback_window

0x3a0f,	// (0x000a89ad) signal_pane

0xece3,	// (0x000b3c81) main_browser_pane

0xeea8,	// (0x000b3e46) main_burst_pane

0x3713,	// (0x000a86b1) main_calc_pane

0xba21,	// (0x000b09bf) main_cale_day_pane

0x3727,	// (0x000a86c5) main_cale_month_pane

0xba21,	// (0x000b09bf) main_cale_week_pane

0xeea8,	// (0x000b3e46) main_call_pane

0xe9c3,	// (0x000b3961) main_call_poc_pane

0xeea8,	// (0x000b3e46) main_camera_pane

0xeea8,	// (0x000b3e46) main_chi_dic_pane

0xa3a0,	// (0x000af33e) main_clock_pane

0xe9c3,	// (0x000b3961) main_fmradio_pane

0xeea8,	// (0x000b3e46) main_graph_messa_pane

0xe9c3,	// (0x000b3961) main_help_pane

0xece3,	// (0x000b3c81) main_im_pane

0xec1e,	// (0x000b3bbc) main_image_pane_ParamLimits

0xec1e,	// (0x000b3bbc) main_image_pane

0xe9c3,	// (0x000b3961) main_location2_pane

0xeea8,	// (0x000b3e46) main_location_pane

0xec1e,	// (0x000b3bbc) main_messa_pane

0xe9c3,	// (0x000b3961) main_mp2_pane

0xeea8,	// (0x000b3e46) main_mp_pane

0xe9c3,	// (0x000b3961) main_msg_pane

0xe9c3,	// (0x000b3961) main_mup_eq_pane

0xe9c3,	// (0x000b3961) main_mup_pane

0xece3,	// (0x000b3c81) main_notes_pane

0xe9c3,	// (0x000b3961) main_pec_pane

0xe9c3,	// (0x000b3961) main_phob_pane

0xe9c3,	// (0x000b3961) main_pinb_pane

0xe9c3,	// (0x000b3961) main_postcard_pane

0xe9c3,	// (0x000b3961) main_qdial_pane

0xeea8,	// (0x000b3e46) main_skin_pane

0xe9c3,	// (0x000b3961) main_smil2_pane

0xeea8,	// (0x000b3e46) main_smil_pane

0xeea8,	// (0x000b3e46) main_video_pane

0xeea8,	// (0x000b3e46) main_video_tele_pane

0xec1e,	// (0x000b3bbc) main_viewer_pane_ParamLimits

0xec1e,	// (0x000b3bbc) main_viewer_pane

0xeea8,	// (0x000b3e46) main_vorec_pane

0x3779,	// (0x000a8717) popup_blid_sat_info_window_ParamLimits

0x3779,	// (0x000a8717) popup_blid_sat_info_window

0x37d1,	// (0x000a876f) popup_dyc_status_message_window_ParamLimits

0x37d1,	// (0x000a876f) popup_dyc_status_message_window

0x37eb,	// (0x000a8789) popup_grid_large_graphic_window_ParamLimits

0x37eb,	// (0x000a8789) popup_grid_large_graphic_window

0x38a7,	// (0x000a8845) popup_loc_request_window_ParamLimits

0x38a7,	// (0x000a8845) popup_loc_request_window

0x399d,	// (0x000a893b) popup_wml_address_window_ParamLimits

0x399d,	// (0x000a893b) popup_wml_address_window

0x354d,	// (0x000a84eb) call_muted_g1

0x3202,	// (0x000a81a0) popup_call_audio_conf_window_ParamLimits

0x3202,	// (0x000a81a0) popup_call_audio_conf_window

0x3561,	// (0x000a84ff) popup_call_audio_first_window_ParamLimits

0x3561,	// (0x000a84ff) popup_call_audio_first_window

0x35d7,	// (0x000a8575) popup_call_audio_in_window_ParamLimits

0x35d7,	// (0x000a8575) popup_call_audio_in_window

0x3613,	// (0x000a85b1) popup_call_audio_out_window_ParamLimits

0x3613,	// (0x000a85b1) popup_call_audio_out_window

0x364d,	// (0x000a85eb) popup_call_audio_second_window_ParamLimits

0x364d,	// (0x000a85eb) popup_call_audio_second_window

0x36a3,	// (0x000a8641) popup_call_audio_wait_window_ParamLimits

0x36a3,	// (0x000a8641) popup_call_audio_wait_window

0x36d8,	// (0x000a8676) popup_number_entry_window_ParamLimits

0x36d8,	// (0x000a8676) popup_number_entry_window

0xe5b0,	// (0x000b354e) bg_popup_call_pane_cp05_ParamLimits

0xe5b0,	// (0x000b354e) bg_popup_call_pane_cp05

0xe5d0,	// (0x000b356e) popup_number_entry_window_t1

0xe5e3,	// (0x000b3581) popup_number_entry_window_t2

0xe5f5,	// (0x000b3593) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000b4068) popup_number_entry_window_t

0xe607,	// (0x000b35a5) text_title_cp2

0xe61a,	// (0x000b35b8) bg_popup_call_pane_cp_ParamLimits

0xe61a,	// (0x000b35b8) bg_popup_call_pane_cp

0xe628,	// (0x000b35c6) call_thumbnail_pane

0xe630,	// (0x000b35ce) popup_call_audio_in_window_g1_ParamLimits

0xe630,	// (0x000b35ce) popup_call_audio_in_window_g1

0xe63c,	// (0x000b35da) popup_call_audio_in_window_g2_ParamLimits

0xe63c,	// (0x000b35da) popup_call_audio_in_window_g2

0xe648,	// (0x000b35e6) popup_call_audio_in_window_g3_ParamLimits

0xe648,	// (0x000b35e6) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000b4071) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000b4071) popup_call_audio_in_window_g

0xe654,	// (0x000b35f2) popup_call_audio_in_window_t1_ParamLimits

0xe654,	// (0x000b35f2) popup_call_audio_in_window_t1

0xe670,	// (0x000b360e) popup_call_audio_in_window_t2_ParamLimits

0xe670,	// (0x000b360e) popup_call_audio_in_window_t2

0xe68c,	// (0x000b362a) popup_call_audio_in_window_t3_ParamLimits

0xe68c,	// (0x000b362a) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000b4078) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000b4078) popup_call_audio_in_window_t

0xe61a,	// (0x000b35b8) bg_popup_call_pane_cp01_ParamLimits

0xe61a,	// (0x000b35b8) bg_popup_call_pane_cp01

0xe628,	// (0x000b35c6) call_thumbnail_pane_cp02

0xe69f,	// (0x000b363d) call_type_pane_cp022

0xe6a7,	// (0x000b3645) popup_call_audio_out_window_g1_ParamLimits

0xe6a7,	// (0x000b3645) popup_call_audio_out_window_g1

0xe6b9,	// (0x000b3657) popup_call_audio_out_window_g2_ParamLimits

0xe6b9,	// (0x000b3657) popup_call_audio_out_window_g2

0xe6c5,	// (0x000b3663) popup_call_audio_out_window_g3_ParamLimits

0xe6c5,	// (0x000b3663) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000b407f) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000b407f) popup_call_audio_out_window_g

0xe6d7,	// (0x000b3675) popup_call_audio_out_window_t1_ParamLimits

0xe6d7,	// (0x000b3675) popup_call_audio_out_window_t1

0xe6ef,	// (0x000b368d) popup_call_audio_out_window_t2_ParamLimits

0xe6ef,	// (0x000b368d) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000b4086) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000b4086) popup_call_audio_out_window_t

0xe704,	// (0x000b36a2) bg_popup_call_pane_ParamLimits

0xe704,	// (0x000b36a2) bg_popup_call_pane

0x0512,	// (0x000a54b0) call_thumbnail_pane_cp_ParamLimits

0x0512,	// (0x000a54b0) call_thumbnail_pane_cp

0xe788,	// (0x000b3726) call_type_pane_cp01_ParamLimits

0xe788,	// (0x000b3726) call_type_pane_cp01

0xe7cc,	// (0x000b376a) popup_call_audio_first_window_g1_ParamLimits

0xe7cc,	// (0x000b376a) popup_call_audio_first_window_g1

0xe818,	// (0x000b37b6) popup_call_audio_first_window_g2_ParamLimits

0xe818,	// (0x000b37b6) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000b408b) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000b408b) popup_call_audio_first_window_g

0xe85c,	// (0x000b37fa) popup_call_audio_first_window_t1_ParamLimits

0xe85c,	// (0x000b37fa) popup_call_audio_first_window_t1

0xe908,	// (0x000b38a6) popup_call_audio_first_window_t4_ParamLimits

0xe908,	// (0x000b38a6) popup_call_audio_first_window_t4

0xe994,	// (0x000b3932) popup_call_audio_first_window_t5_ParamLimits

0xe994,	// (0x000b3932) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000b4090) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000b4090) popup_call_audio_first_window_t

0xe9c3,	// (0x000b3961) bg_popup_call_pane_cp02

0xe9cd,	// (0x000b396b) call_type_pane_cp023

0xe9d5,	// (0x000b3973) popup_call_audio_wait_window_g1

0xe9dd,	// (0x000b397b) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b4097) popup_call_audio_wait_window_g

0xe9e5,	// (0x000b3983) popup_call_audio_wait_window_t3

0xe9f3,	// (0x000b3991) bg_popup_call_pane_cp03_ParamLimits

0xe9f3,	// (0x000b3991) bg_popup_call_pane_cp03

0xea53,	// (0x000b39f1) call_thumbnail_pane_cp011_ParamLimits

0xea53,	// (0x000b39f1) call_thumbnail_pane_cp011

0xea5f,	// (0x000b39fd) call_type_pane_cp034_ParamLimits

0xea5f,	// (0x000b39fd) call_type_pane_cp034

0xea9b,	// (0x000b3a39) popup_call_audio_second_window_g1_ParamLimits

0xea9b,	// (0x000b3a39) popup_call_audio_second_window_g1

0xead7,	// (0x000b3a75) popup_call_audio_second_window_g2_ParamLimits

0xead7,	// (0x000b3a75) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000b409c) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000b409c) popup_call_audio_second_window_g

0xeb13,	// (0x000b3ab1) popup_call_audio_second_window_t1_ParamLimits

0xeb13,	// (0x000b3ab1) popup_call_audio_second_window_t1

0xeb94,	// (0x000b3b32) popup_call_audio_second_window_t2_ParamLimits

0xeb94,	// (0x000b3b32) popup_call_audio_second_window_t2

0xebca,	// (0x000b3b68) popup_call_audio_second_window_t3_ParamLimits

0xebca,	// (0x000b3b68) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000b40a1) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000b40a1) popup_call_audio_second_window_t

0xe9c3,	// (0x000b3961) bg_popup_call_pane_cp04

0xec00,	// (0x000b3b9e) list_conf_pane

0xec08,	// (0x000b3ba6) popup_call_audio_conf_window_t1

0xec16,	// (0x000b3bb4) call_thumbnail_pane_g1

0xec1e,	// (0x000b3bbc) bg_pinb_pane_ParamLimits

0xec1e,	// (0x000b3bbc) bg_pinb_pane

0xec2c,	// (0x000b3bca) find_pinb_pane

0xec35,	// (0x000b3bd3) listscroll_pinb_pane_ParamLimits

0xec35,	// (0x000b3bd3) listscroll_pinb_pane

0xec44,	// (0x000b3be2) pinb_bg_pane_g1

0x0536,	// (0x000a54d4) pinb_bg_pane_g2

0x0542,	// (0x000a54e0) pinb_bg_pane_g3

0x054e,	// (0x000a54ec) pinb_bg_pane_g4

0x055a,	// (0x000a54f8) pinb_bg_pane_g5

0x0566,	// (0x000a5504) pinb_bg_pane_g6

0x0571,	// (0x000a550f) pinb_bg_pane_g7

0x057c,	// (0x000a551a) pinb_bg_pane_g8

0x0587,	// (0x000a5525) pinb_bg_pane_g9

0x0591,	// (0x000a552f) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000b40a8) pinb_bg_pane_g

0x05ae,	// (0x000a554c) grid_pinb_pane

0x05b7,	// (0x000a5555) list_pinb_pane

0x05c0,	// (0x000a555e) scroll_pane_cp01_ParamLimits

0x05c0,	// (0x000a555e) scroll_pane_cp01

0xec4e,	// (0x000b3bec) find_pinb_pane_g1_ParamLimits

0xec4e,	// (0x000b3bec) find_pinb_pane_g1

0xec66,	// (0x000b3c04) find_pinb_pane_t1

0xec78,	// (0x000b3c16) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000b40c2) find_pinb_pane_t

0xec8d,	// (0x000b3c2b) input_focus_pane_cp01_ParamLimits

0xec8d,	// (0x000b3c2b) input_focus_pane_cp01

0x05d2,	// (0x000a5570) cell_pinb_pane_ParamLimits

0x05d2,	// (0x000a5570) cell_pinb_pane

0x05fb,	// (0x000a5599) cell_pinb_pane_g1_ParamLimits

0x05fb,	// (0x000a5599) cell_pinb_pane_g1

0x060b,	// (0x000a55a9) cell_pinb_pane_g2_ParamLimits

0x060b,	// (0x000a55a9) cell_pinb_pane_g2

0xec99,	// (0x000b3c37) cell_pinb_pane_g3_ParamLimits

0xec99,	// (0x000b3c37) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000b40c7) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000b40c7) cell_pinb_pane_g

0xe9c3,	// (0x000b3961) grid_highlight_pane_cp01

0x0617,	// (0x000a55b5) list_pinb_item_pane_ParamLimits

0x0617,	// (0x000a55b5) list_pinb_item_pane

0xe9c3,	// (0x000b3961) list_highlight_pane_cp02

0x0629,	// (0x000a55c7) list_pinb_item_pane_g1_ParamLimits

0x0629,	// (0x000a55c7) list_pinb_item_pane_g1

0x0636,	// (0x000a55d4) list_pinb_item_pane_g2_ParamLimits

0x0636,	// (0x000a55d4) list_pinb_item_pane_g2

0x0642,	// (0x000a55e0) list_pinb_item_pane_g3_ParamLimits

0x0642,	// (0x000a55e0) list_pinb_item_pane_g3

0x0653,	// (0x000a55f1) list_pinb_item_pane_g4_ParamLimits

0x0653,	// (0x000a55f1) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000b40ce) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000b40ce) list_pinb_item_pane_g

0x065f,	// (0x000a55fd) list_pinb_item_pane_t1_ParamLimits

0x065f,	// (0x000a55fd) list_pinb_item_pane_t1

0x0694,	// (0x000a5632) calc_display_pane

0x06bc,	// (0x000a565a) calc_paper_pane

0x06df,	// (0x000a567d) grid_calc_pane

0xe9c3,	// (0x000b3961) bg_list_pane_cp01

0x070d,	// (0x000a56ab) clock_g1

0x0715,	// (0x000a56b3) clock_g2

0x0001,

0xf139,	// (0x000b40d7) clock_g

0x071d,	// (0x000a56bb) clock_t1_ParamLimits

0x071d,	// (0x000a56bb) clock_t1

0x0732,	// (0x000a56d0) clock_t2_ParamLimits

0x0732,	// (0x000a56d0) clock_t2

0x0744,	// (0x000a56e2) clock_t3_ParamLimits

0x0744,	// (0x000a56e2) clock_t3

0x0756,	// (0x000a56f4) clock_t4_ParamLimits

0x0756,	// (0x000a56f4) clock_t4

0x0768,	// (0x000a5706) clock_t5_ParamLimits

0x0768,	// (0x000a5706) clock_t5

0x077d,	// (0x000a571b) clock_t6_ParamLimits

0x077d,	// (0x000a571b) clock_t6

0x078f,	// (0x000a572d) clock_t7_ParamLimits

0x078f,	// (0x000a572d) clock_t7

0x07a1,	// (0x000a573f) clock_t8_ParamLimits

0x07a1,	// (0x000a573f) clock_t8

0x07b5,	// (0x000a5753) clock_t9_ParamLimits

0x07b5,	// (0x000a5753) clock_t9

0x0008,

0xf13e,	// (0x000b40dc) clock_t_ParamLimits

0xf13e,	// (0x000b40dc) clock_t

0xeca5,	// (0x000b3c43) popup_clock_analogue_window_cp02

0xeca5,	// (0x000b3c43) popup_clock_digital_window_cp01

0xecad,	// (0x000b3c4b) listscroll_help_pane

0xe9c3,	// (0x000b3961) phob_pre_status_pane

0xecb7,	// (0x000b3c55) grid_qdial_pane

0xec1e,	// (0x000b3bbc) listscroll_mce_pane

0xec1e,	// (0x000b3bbc) bg_notes_pane

0xecc1,	// (0x000b3c5f) list_notes_pane

0x07c9,	// (0x000a5767) scroll_pane_cp06

0xeccf,	// (0x000b3c6d) bg_calc_paper_pane

0x9507,	// (0x000ae4a5) list_calc_pane

0xece3,	// (0x000b3c81) bg_calc_display_pane

0x07dd,	// (0x000a577b) calc_display_pane_t1

0x07ef,	// (0x000a578d) calc_display_pane_t2

0x9521,	// (0x000ae4bf) calc_display_pane_t3

0x0002,

0xf151,	// (0x000b40ef) calc_display_pane_t

0x0801,	// (0x000a579f) cell_calc_pane_ParamLimits

0x0801,	// (0x000a579f) cell_calc_pane

0xecef,	// (0x000b3c8d) bg_calc_paper_pane_g1

0xecfb,	// (0x000b3c99) bg_calc_paper_pane_g2

0xed07,	// (0x000b3ca5) bg_calc_paper_pane_g3

0xed13,	// (0x000b3cb1) bg_calc_paper_pane_g4

0xed1f,	// (0x000b3cbd) bg_calc_paper_pane_g5

0x0836,	// (0x000a57d4) bg_calc_paper_pane_g6

0x0845,	// (0x000a57e3) bg_calc_paper_pane_g7

0x0854,	// (0x000a57f2) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000b40f6) bg_calc_paper_pane_g

0x0867,	// (0x000a5805) calc_bg_paper_pane_g9

0x087a,	// (0x000a5818) list_calc_item_pane_ParamLimits

0x087a,	// (0x000a5818) list_calc_item_pane

0xed2b,	// (0x000b3cc9) list_calc_item_pane_g1

0x9533,	// (0x000ae4d1) list_calc_item_pane_t1_ParamLimits

0x9533,	// (0x000ae4d1) list_calc_item_pane_t1

0x088f,	// (0x000a582d) list_calc_item_pane_t2_ParamLimits

0x088f,	// (0x000a582d) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000b4107) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000b4107) list_calc_item_pane_t

0xed38,	// (0x000b3cd6) cell_calc_pane_g1

0xed42,	// (0x000b3ce0) grid_highlight_pane_cp02

0x08c1,	// (0x000a585f) bg_calc_display_pane_g1

0x08ca,	// (0x000a5868) bg_calc_display_pane_g2

0x08d4,	// (0x000a5872) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000b4111) bg_calc_display_pane_g

0x08dd,	// (0x000a587b) cell_qdial_pane_ParamLimits

0x08dd,	// (0x000a587b) cell_qdial_pane

0x08f1,	// (0x000a588f) cell_qdial_pane_g1_ParamLimits

0x08f1,	// (0x000a588f) cell_qdial_pane_g1

0x0907,	// (0x000a58a5) cell_qdial_pane_g2_ParamLimits

0x0907,	// (0x000a58a5) cell_qdial_pane_g2

0xed64,	// (0x000b3d02) cell_qdial_pane_g3_ParamLimits

0xed64,	// (0x000b3d02) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000b4118) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000b4118) cell_qdial_pane_g

0x092e,	// (0x000a58cc) cell_qdial_pane_t1_ParamLimits

0x092e,	// (0x000a58cc) cell_qdial_pane_t1

0x0946,	// (0x000a58e4) cell_qdial_pane_t2_ParamLimits

0x0946,	// (0x000a58e4) cell_qdial_pane_t2

0x0959,	// (0x000a58f7) cell_qdial_pane_t3_ParamLimits

0x0959,	// (0x000a58f7) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000b4121) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000b4121) cell_qdial_pane_t

0xe9c3,	// (0x000b3961) grid_highlight_pane_cp04

0xed70,	// (0x000b3d0e) thumbnail_qdial_pane_ParamLimits

0xed70,	// (0x000b3d0e) thumbnail_qdial_pane

0xedcc,	// (0x000b3d6a) list_help_pane

0xedd5,	// (0x000b3d73) scroll_pane_cp02

0x096c,	// (0x000a590a) help_list_pane_t1_ParamLimits

0x096c,	// (0x000a590a) help_list_pane_t1

0x9545,	// (0x000ae4e3) bg_notes_pane_g2

0x954d,	// (0x000ae4eb) bg_notes_pane_g3

0x9555,	// (0x000ae4f3) notes_bg_pane_g1

0x955d,	// (0x000ae4fb) notes_bg_pane_g4

0x9565,	// (0x000ae503) notes_bg_pane_g5

0x956d,	// (0x000ae50b) notes_bg_pane_g6

0x9575,	// (0x000ae513) notes_bg_pane_g7

0x957d,	// (0x000ae51b) notes_bg_pane_g8

0x9585,	// (0x000ae523) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000b413f) notes_bg_pane_g

0x0989,	// (0x000a5927) list_notes_text_pane_ParamLimits

0x0989,	// (0x000a5927) list_notes_text_pane

0xedde,	// (0x000b3d7c) list_notes_text_pane_g1

0x099e,	// (0x000a593c) list_notes_text_pane_t1

0x09ac,	// (0x000a594a) listscroll_cale_week_pane

0x09d8,	// (0x000a5976) bg_cale_heading_pane

0xee01,	// (0x000b3d9f) bg_cale_pane_cp01

0x09f0,	// (0x000a598e) cale_week_corner_pane

0x0a0f,	// (0x000a59ad) cale_week_day_heading_pane

0x0a2c,	// (0x000a59ca) cale_week_scroll_pane_g1

0x0a3f,	// (0x000a59dd) cale_week_scroll_pane_g2

0x0a57,	// (0x000a59f5) cale_week_scroll_pane_g3

0x0a6f,	// (0x000a5a0d) cale_week_scroll_pane_g4

0x0a87,	// (0x000a5a25) cale_week_scroll_pane_g5

0x0aa7,	// (0x000a5a45) cale_week_scroll_pane_g6

0x0ac7,	// (0x000a5a65) cale_week_scroll_pane_g7

0x0ae7,	// (0x000a5a85) cale_week_scroll_pane_g8

0x0b0b,	// (0x000a5aa9) cale_week_scroll_pane_g9

0x0b23,	// (0x000a5ac1) cale_week_scroll_pane_g10

0x0b3b,	// (0x000a5ad9) cale_week_scroll_pane_g11

0x0b53,	// (0x000a5af1) cale_week_scroll_pane_g12

0x0b6b,	// (0x000a5b09) cale_week_scroll_pane_g13

0x0b6b,	// (0x000a5b09) cale_week_scroll_pane_g14

0x0b6b,	// (0x000a5b09) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000b414e) cale_week_scroll_pane_g

0x0ba7,	// (0x000a5b45) cale_week_time_pane

0x0bcb,	// (0x000a5b69) grid_cale_week_pane

0xee30,	// (0x000b3dce) scroll_pane_cp08

0x0bf1,	// (0x000a5b8f) cell_cale_week_pane_ParamLimits

0x0bf1,	// (0x000a5b8f) cell_cale_week_pane

0x0c7f,	// (0x000a5c1d) cale_week_day_heading_pane_t1

0x0cc4,	// (0x000a5c62) cale_week_day_heading_pane_t2

0x0d0e,	// (0x000a5cac) cale_week_day_heading_pane_t3

0x0d58,	// (0x000a5cf6) cale_week_day_heading_pane_t4

0x0da2,	// (0x000a5d40) cale_week_day_heading_pane_t5

0x0df4,	// (0x000a5d92) cale_week_day_heading_pane_t6

0x0e46,	// (0x000a5de4) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000b416f) cale_week_day_heading_pane_t

0xee4d,	// (0x000b3deb) bg_cale_side_pane

0x0e8b,	// (0x000a5e29) cale_week_time_pane_t1

0x0ea5,	// (0x000a5e43) cale_week_time_pane_t2

0x0ebf,	// (0x000a5e5d) cale_week_time_pane_t3

0x0ed9,	// (0x000a5e77) cale_week_time_pane_t4

0x0ef3,	// (0x000a5e91) cale_week_time_pane_t5

0x0f0d,	// (0x000a5eab) cale_week_time_pane_t6

0x0f27,	// (0x000a5ec5) cale_week_time_pane_t7

0x0f41,	// (0x000a5edf) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000b417e) cale_week_time_pane_t

0x0f61,	// (0x000a5eff) cell_cale_week_pane_g2

0x0f80,	// (0x000a5f1e) cell_cale_week_pane_g3_ParamLimits

0x0f80,	// (0x000a5f1e) cell_cale_week_pane_g3

0xee5b,	// (0x000b3df9) grid_highlight_pane_cp07

0xee63,	// (0x000b3e01) listscroll_gms_pane

0xee6d,	// (0x000b3e0b) grid_gms_pane

0xee76,	// (0x000b3e14) listscroll_gms_pane_g1

0xee7e,	// (0x000b3e1c) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000b418f) listscroll_gms_pane_g

0x0f98,	// (0x000a5f36) scroll_pane_cp010

0x0fa3,	// (0x000a5f41) cell_gms_pane_ParamLimits

0x0fa3,	// (0x000a5f41) cell_gms_pane

0x0fb6,	// (0x000a5f54) cell_gms_pane_g1

0xee86,	// (0x000b3e24) cell_gms_pane_g2

0xee8e,	// (0x000b3e2c) cell_gms_pane_g3

0xee97,	// (0x000b3e35) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000b4194) cell_gms_pane_g

0xeea0,	// (0x000b3e3e) grid_highlight_pane_cp09

0x34f7,	// (0x000a8495) phob_pre_status_pane_g1

0x34ff,	// (0x000a849d) phob_pre_status_pane_g2

0x3507,	// (0x000a84a5) phob_pre_status_pane_g3

0x350f,	// (0x000a84ad) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000b457f) phob_pre_status_pane_g

0x351f,	// (0x000a84bd) phob_pre_status_pane_t1

0x352d,	// (0x000a84cb) phob_pre_status_pane_t2

0x353d,	// (0x000a84db) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000b458a) phob_pre_status_pane_t

0xeea8,	// (0x000b3e46) bg_list_pane_cp05

0x0fc6,	// (0x000a5f64) grid_vorec_pane

0x0fce,	// (0x000a5f6c) vorec_t1

0x0fdc,	// (0x000a5f7a) vorec_t2

0x0fea,	// (0x000a5f88) vorec_t3

0x0ff8,	// (0x000a5f96) vorec_t4

0x947f,	// (0x000ae41d) vorec_t5

0x948d,	// (0x000ae42b) vorec_t6

0x0004,

0xf1ff,	// (0x000b419d) vorec_t

0x949b,	// (0x000ae439) wait_bar_pane_cp01

0x1014,	// (0x000a5fb2) cell_vorec_pane_ParamLimits

0x1014,	// (0x000a5fb2) cell_vorec_pane

0x958d,	// (0x000ae52b) cell_vorec_pane_g1

0xe9c3,	// (0x000b3961) grid_highlight_pane_cp05

0x103c,	// (0x000a5fda) cams_zoom_pane

0x104b,	// (0x000a5fe9) image_vga_pane

0x1065,	// (0x000a6003) main_camera_pane_g1

0x1077,	// (0x000a6015) main_camera_pane_g2

0x1087,	// (0x000a6025) main_camera_pane_g3

0x1097,	// (0x000a6035) main_camera_pane_g4

0x10a7,	// (0x000a6045) main_camera_pane_g5

0x10b7,	// (0x000a6055) main_camera_pane_g6

0x10c9,	// (0x000a6067) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000b41a8) main_camera_pane_g

0x10d9,	// (0x000a6077) main_camera_pane_t1

0x10ef,	// (0x000a608d) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000b41b9) main_camera_pane_t

0x1129,	// (0x000a60c7) cams_zoom_pane_cp_ParamLimits

0x1129,	// (0x000a60c7) cams_zoom_pane_cp

0x1151,	// (0x000a60ef) image_cif_pane_ParamLimits

0x1151,	// (0x000a60ef) image_cif_pane

0x1187,	// (0x000a6125) image_subqcif_pane

0x118f,	// (0x000a612d) main_video_pane_g1_ParamLimits

0x118f,	// (0x000a612d) main_video_pane_g1

0x11b3,	// (0x000a6151) main_video_pane_g2_ParamLimits

0x11b3,	// (0x000a6151) main_video_pane_g2

0x11e7,	// (0x000a6185) main_video_pane_g3_ParamLimits

0x11e7,	// (0x000a6185) main_video_pane_g3

0x1215,	// (0x000a61b3) main_video_pane_g4_ParamLimits

0x1215,	// (0x000a61b3) main_video_pane_g4

0x1243,	// (0x000a61e1) main_video_pane_g5_ParamLimits

0x1243,	// (0x000a61e1) main_video_pane_g5

0xeebc,	// (0x000b3e5a) main_video_pane_g6_ParamLimits

0xeebc,	// (0x000b3e5a) main_video_pane_g6

0x0006,

0xf220,	// (0x000b41be) main_video_pane_g_ParamLimits

0xf220,	// (0x000b41be) main_video_pane_g

0x126c,	// (0x000a620a) main_video_pane_t1_ParamLimits

0x126c,	// (0x000a620a) main_video_pane_t1

0xeed6,	// (0x000b3e74) cams_zoom_pane_g1

0xeedf,	// (0x000b3e7d) cams_zoom_pane_g2

0xeee8,	// (0x000b3e86) cams_zoom_pane_g3

0x9597,	// (0x000ae535) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000b41cd) cams_zoom_pane_g

0x12c9,	// (0x000a6267) grid_cams_pane

0x12e3,	// (0x000a6281) linegrid_cams_pane

0x12f7,	// (0x000a6295) cell_cams_pane_ParamLimits

0x12f7,	// (0x000a6295) cell_cams_pane

0x95a0,	// (0x000ae53e) cams_burst_image_pane

0x95a8,	// (0x000ae546) cell_cams_pane_g1

0xe9c3,	// (0x000b3961) grid_highlight_pane_cp03

0xed38,	// (0x000b3cd6) mp_bg_pane_g1

0xe9c3,	// (0x000b3961) bg_list_pane_cp03

0xb946,	// (0x000b08e4) bg_mp_pane

0xb94e,	// (0x000b08ec) grid_mp_pane

0xb956,	// (0x000b08f4) media_player_g1

0xb95e,	// (0x000b08fc) media_player_t1

0xb96c,	// (0x000b090a) media_player_t2

0xb97a,	// (0x000b0918) media_player_t3

0xb988,	// (0x000b0926) media_player_t4

0xb996,	// (0x000b0934) media_player_t5

0xb9a4,	// (0x000b0942) media_player_t6

0xb9b2,	// (0x000b0950) media_player_t7

0x0006,

0xf5cb,	// (0x000b4569) media_player_t

0xb9c0,	// (0x000b095e) wait_bar_pane_cp02

0xf5b0,	// (0x000b454e) main_usb_pane_t

0x34ee,	// (0x000a848c) cell_mp_pane

0xed38,	// (0x000b3cd6) cell_mp_pane_g1

0xe9c3,	// (0x000b3961) grid_highlight_pane_cp06

0x95b0,	// (0x000ae54e) grid_skin_colour_pane

0x95b8,	// (0x000ae556) list_highlight_pane_cp03

0x1410,	// (0x000a63ae) skin_g1

0x95c0,	// (0x000ae55e) skin_t1

0x95cf,	// (0x000ae56d) skin_t2

0x0001,

0xf264,	// (0x000b4202) skin_t

0x1418,	// (0x000a63b6) cell_skin_colour_pane_ParamLimits

0x1418,	// (0x000a63b6) cell_skin_colour_pane

0x95dd,	// (0x000ae57b) cell_skin_colour_pane_g1

0x1491,	// (0x000a642f) call_video_g1_ParamLimits

0x1491,	// (0x000a642f) call_video_g1

0x14ad,	// (0x000a644b) call_video_g2_ParamLimits

0x14ad,	// (0x000a644b) call_video_g2

0x0001,

0xf269,	// (0x000b4207) call_video_g_ParamLimits

0xf269,	// (0x000b4207) call_video_g

0x14ff,	// (0x000a649d) call_video_uplink_pane_cp1_ParamLimits

0x14ff,	// (0x000a649d) call_video_uplink_pane_cp1

0x95ef,	// (0x000ae58d) call_video_uplink_pane_cp2

0x159e,	// (0x000a653c) video_down_crop_pane_ParamLimits

0x159e,	// (0x000a653c) video_down_crop_pane

0x1695,	// (0x000a6633) video_down_pane_ParamLimits

0x1695,	// (0x000a6633) video_down_pane

0x95f7,	// (0x000ae595) video_down_subqcif_pane_ParamLimits

0x95f7,	// (0x000ae595) video_down_subqcif_pane

0x960f,	// (0x000ae5ad) video_down_subqcif_pane_cp_ParamLimits

0x960f,	// (0x000ae5ad) video_down_subqcif_pane_cp

0x9635,	// (0x000ae5d3) im_reading_pane_ParamLimits

0x9635,	// (0x000ae5d3) im_reading_pane

0x17a3,	// (0x000a6741) im_writing_pane_ParamLimits

0x17a3,	// (0x000a6741) im_writing_pane

0x17b9,	// (0x000a6757) im_reading_pane_t1

0x964f,	// (0x000ae5ed) list_im_pane

0x9660,	// (0x000ae5fe) scroll_pane_cp07

0x17f2,	// (0x000a6790) im_writing_pane_t1_ParamLimits

0x17f2,	// (0x000a6790) im_writing_pane_t1

0x9679,	// (0x000ae617) im_writing_pane_t2_ParamLimits

0x9679,	// (0x000ae617) im_writing_pane_t2

0x0001,

0xf273,	// (0x000b4211) im_writing_pane_t_ParamLimits

0xf273,	// (0x000b4211) im_writing_pane_t

0xe9c3,	// (0x000b3961) input_focus_pane_cp04

0xe9c3,	// (0x000b3961) input_focus_pane_cp05

0x1807,	// (0x000a67a5) list_im_single_pane_ParamLimits

0x1807,	// (0x000a67a5) list_im_single_pane

0x181b,	// (0x000a67b9) list_single_im_pane_t1

0x34ae,	// (0x000a844c) blid_accuracy_pane

0x34b6,	// (0x000a8454) blid_compass_pane

0x34c0,	// (0x000a845e) main_location_t1

0x34d0,	// (0x000a846e) main_location_t2

0x34e0,	// (0x000a847e) main_location_t3

0x0002,

0xf5da,	// (0x000b4578) main_location_t

0xe9c3,	// (0x000b3961) aid_levels_location

0xed38,	// (0x000b3cd6) blid_accuracy_pane_g1

0xed38,	// (0x000b3cd6) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000b4273) blid_accuracy_pane_g

0x96c1,	// (0x000ae65f) wml_content_pane

0x96ff,	// (0x000ae69d) wml_button_pane_ParamLimits

0x96ff,	// (0x000ae69d) wml_button_pane

0x182a,	// (0x000a67c8) wml_list_single_large_pane_ParamLimits

0x182a,	// (0x000a67c8) wml_list_single_large_pane

0x183f,	// (0x000a67dd) wml_list_single_medium_pane_ParamLimits

0x183f,	// (0x000a67dd) wml_list_single_medium_pane

0x1855,	// (0x000a67f3) wml_list_single_small_pane_ParamLimits

0x1855,	// (0x000a67f3) wml_list_single_small_pane

0x9713,	// (0x000ae6b1) wml_selection_box_pane_ParamLimits

0x9713,	// (0x000ae6b1) wml_selection_box_pane

0x9726,	// (0x000ae6c4) wml_list_single_pane_t1

0x9735,	// (0x000ae6d3) wml_list_single_medium_pane_t1

0x9744,	// (0x000ae6e2) wml_list_single_large_pane_t1

0x9753,	// (0x000ae6f1) input_focus_pane_cp02_ParamLimits

0x9753,	// (0x000ae6f1) input_focus_pane_cp02

0x9766,	// (0x000ae704) wml_selection_box_pane_g1

0x976f,	// (0x000ae70d) wml_selection_box_pane_t1_ParamLimits

0x976f,	// (0x000ae70d) wml_selection_box_pane_t1

0xec1e,	// (0x000b3bbc) bg_wml_button_pane_ParamLimits

0xec1e,	// (0x000b3bbc) bg_wml_button_pane

0x9787,	// (0x000ae725) wml_button_pane_g1

0x978f,	// (0x000ae72d) wml_button_pane_t1

0x9787,	// (0x000ae725) wml_button_bg_pane_g1

0x979f,	// (0x000ae73d) wml_button_bg_pane_g2

0x97a7,	// (0x000ae745) wml_button_bg_pane_g3

0x97af,	// (0x000ae74d) wml_button_bg_pane_g4

0x97b7,	// (0x000ae755) wml_button_bg_pane_g5

0x97bf,	// (0x000ae75d) wml_button_bg_pane_g6

0x97c7,	// (0x000ae765) wml_button_bg_pane_g7

0x97cf,	// (0x000ae76d) wml_button_bg_pane_g8

0x97d7,	// (0x000ae775) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000b4216) wml_button_bg_pane_g

0x186d,	// (0x000a680b) bg_list_pane_cp02

0x97df,	// (0x000ae77d) mce_header_pane_ParamLimits

0x97df,	// (0x000ae77d) mce_header_pane

0x97f5,	// (0x000ae793) mce_icon_pane

0x97f5,	// (0x000ae793) mce_image_pane

0x97fe,	// (0x000ae79c) mce_text_pane_ParamLimits

0x97fe,	// (0x000ae79c) mce_text_pane

0x1875,	// (0x000a6813) scroll_pane_cp03

0x96f7,	// (0x000ae695) scroll_pane_cp04

0x9811,	// (0x000ae7af) scroll_pane_cp05_ParamLimits

0x9811,	// (0x000ae7af) scroll_pane_cp05

0x187f,	// (0x000a681d) mce_header_field_pane_ParamLimits

0x187f,	// (0x000a681d) mce_header_field_pane

0x1896,	// (0x000a6834) mce_header_field_pane_2_ParamLimits

0x1896,	// (0x000a6834) mce_header_field_pane_2

0x18ac,	// (0x000a684a) mce_header_field_pane_3

0x18b4,	// (0x000a6852) list_single_mce_message_pane_ParamLimits

0x18b4,	// (0x000a6852) list_single_mce_message_pane

0x18c9,	// (0x000a6867) list_single_mce_smart_pane_ParamLimits

0x18c9,	// (0x000a6867) list_single_mce_smart_pane

0x981d,	// (0x000ae7bb) input_focus_pane_cp03

0x9826,	// (0x000ae7c4) list_header_data_pane

0x18e9,	// (0x000a6887) mce_header_field_pane_t1

0x18f9,	// (0x000a6897) list_single_mce_header_pane_ParamLimits

0x18f9,	// (0x000a6897) list_single_mce_header_pane

0x982e,	// (0x000ae7cc) list_single_mce_header_pane_t1

0x983d,	// (0x000ae7db) list_single_mce_message_pane_g1

0x9845,	// (0x000ae7e3) list_single_mce_message_pane_t1

0x1933,	// (0x000a68d1) bg_cale_heading_pane_cp01_ParamLimits

0x1933,	// (0x000a68d1) bg_cale_heading_pane_cp01

0x9853,	// (0x000ae7f1) bg_cale_pane_cp02_ParamLimits

0x9853,	// (0x000ae7f1) bg_cale_pane_cp02

0x1962,	// (0x000a6900) cale_month_corner_pane

0x1981,	// (0x000a691f) cale_month_day_heading_pane_ParamLimits

0x1981,	// (0x000a691f) cale_month_day_heading_pane

0x19c8,	// (0x000a6966) cale_month_pane_g1_ParamLimits

0x19c8,	// (0x000a6966) cale_month_pane_g1

0x19ec,	// (0x000a698a) cale_month_pane_g2_ParamLimits

0x19ec,	// (0x000a698a) cale_month_pane_g2

0x1a1c,	// (0x000a69ba) cale_month_pane_g3_ParamLimits

0x1a1c,	// (0x000a69ba) cale_month_pane_g3

0x1a58,	// (0x000a69f6) cale_month_pane_g4_ParamLimits

0x1a58,	// (0x000a69f6) cale_month_pane_g4

0x1a94,	// (0x000a6a32) cale_month_pane_g5_ParamLimits

0x1a94,	// (0x000a6a32) cale_month_pane_g5

0x1adc,	// (0x000a6a7a) cale_month_pane_g6_ParamLimits

0x1adc,	// (0x000a6a7a) cale_month_pane_g6

0x1b28,	// (0x000a6ac6) cale_month_pane_g7_ParamLimits

0x1b28,	// (0x000a6ac6) cale_month_pane_g7

0x1b7c,	// (0x000a6b1a) cale_month_pane_g8_ParamLimits

0x1b7c,	// (0x000a6b1a) cale_month_pane_g8

0x1bd0,	// (0x000a6b6e) cale_month_pane_g9_ParamLimits

0x1bd0,	// (0x000a6b6e) cale_month_pane_g9

0x1c22,	// (0x000a6bc0) cale_month_pane_g10_ParamLimits

0x1c22,	// (0x000a6bc0) cale_month_pane_g10

0x1c74,	// (0x000a6c12) cale_month_pane_g11_ParamLimits

0x1c74,	// (0x000a6c12) cale_month_pane_g11

0x1cc6,	// (0x000a6c64) cale_month_pane_g12_ParamLimits

0x1cc6,	// (0x000a6c64) cale_month_pane_g12

0x1d18,	// (0x000a6cb6) cale_month_pane_g13_ParamLimits

0x1d18,	// (0x000a6cb6) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000b4229) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000b4229) cale_month_pane_g

0x1d6a,	// (0x000a6d08) cale_month_week_pane

0x1d8e,	// (0x000a6d2c) grid_cale_month_pane_ParamLimits

0x1d8e,	// (0x000a6d2c) grid_cale_month_pane

0x1dcc,	// (0x000a6d6a) cale_month_day_heading_pane_t1

0x1e52,	// (0x000a6df0) cale_month_day_heading_pane_t2

0x1ee3,	// (0x000a6e81) cale_month_day_heading_pane_t3

0x1f74,	// (0x000a6f12) cale_month_day_heading_pane_t4

0x2009,	// (0x000a6fa7) cale_month_day_heading_pane_t5

0x20aa,	// (0x000a7048) cale_month_day_heading_pane_t6

0x214b,	// (0x000a70e9) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000b4244) cale_month_day_heading_pane_t

0xee4d,	// (0x000b3deb) bg_cale_side_pane_cp01

0x21f4,	// (0x000a7192) cale_month_week_pane_t1

0x220d,	// (0x000a71ab) cale_month_week_pane_t2

0x2226,	// (0x000a71c4) cale_month_week_pane_t3

0x223f,	// (0x000a71dd) cale_month_week_pane_t4

0x2258,	// (0x000a71f6) cale_month_week_pane_t5

0x2271,	// (0x000a720f) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000b4253) cale_month_week_pane_t

0x228a,	// (0x000a7228) cell_cale_month_pane_ParamLimits

0x228a,	// (0x000a7228) cell_cale_month_pane

0x9892,	// (0x000ae830) cell_cale_month_pane_g1

0x23de,	// (0x000a737c) cell_cale_month_pane_t1_ParamLimits

0x23de,	// (0x000a737c) cell_cale_month_pane_t1

0xee5b,	// (0x000b3df9) grid_highlight_pane_cp08

0xed38,	// (0x000b3cd6) main_smil_g1

0x240a,	// (0x000a73a8) smil_status_pane

0x989e,	// (0x000ae83c) smil_text_pane

0xb866,	// (0x000b0804) bg_popup_call3_rect_pane_g8

0xb86e,	// (0x000b080c) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000b450c) bg_popup_call3_rect_pane_g

0xbab5,	// (0x000b0a53) smil_status_volume_pane_g1

0x98a8,	// (0x000ae846) smil_status_pane_t1

0x9d15,	// (0x000aecb3) volume_smil_pane

0x98bf,	// (0x000ae85d) list_smil_text_pane

0x241d,	// (0x000a73bb) scroll_pane_cp011

0x2428,	// (0x000a73c6) smil_text_list_pane_t1_ParamLimits

0x2428,	// (0x000a73c6) smil_text_list_pane_t1

0x98c9,	// (0x000ae867) aid_volume_smil_ParamLimits

0x98c9,	// (0x000ae867) aid_volume_smil

0xed38,	// (0x000b3cd6) smil_volume_pane_g1

0xed38,	// (0x000b3cd6) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000b4273) smil_volume_pane_g

0x09ac,	// (0x000a594a) listscroll_cale_day_pane

0x98eb,	// (0x000ae889) bg_cale_pane

0x9903,	// (0x000ae8a1) list_cale_pane

0x9926,	// (0x000ae8c4) scroll_pane_cp09

0x9937,	// (0x000ae8d5) cale_bg_pane_g1

0x993f,	// (0x000ae8dd) cale_bg_pane_g2

0x9947,	// (0x000ae8e5) cale_bg_pane_g3

0x994f,	// (0x000ae8ed) cale_bg_pane_g4

0x9957,	// (0x000ae8f5) cale_bg_pane_g5

0x995f,	// (0x000ae8fd) cale_bg_pane_g6

0x9967,	// (0x000ae905) cale_bg_pane_g7

0x996f,	// (0x000ae90d) cale_bg_pane_g8

0x9977,	// (0x000ae915) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000b4278) cale_bg_pane_g

0x246c,	// (0x000a740a) list_cale_time_pane_ParamLimits

0x246c,	// (0x000a740a) list_cale_time_pane

0x997f,	// (0x000ae91d) list_cale_time_pane_g1_ParamLimits

0x997f,	// (0x000ae91d) list_cale_time_pane_g1

0x998b,	// (0x000ae929) list_cale_time_pane_g2_ParamLimits

0x998b,	// (0x000ae929) list_cale_time_pane_g2

0x2481,	// (0x000a741f) list_cale_time_pane_g3_ParamLimits

0x2481,	// (0x000a741f) list_cale_time_pane_g3

0x248f,	// (0x000a742d) list_cale_time_pane_g4_ParamLimits

0x248f,	// (0x000a742d) list_cale_time_pane_g4

0x249d,	// (0x000a743b) list_cale_time_pane_g5_ParamLimits

0x249d,	// (0x000a743b) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000b428b) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000b428b) list_cale_time_pane_g

0x99a5,	// (0x000ae943) list_cale_time_pane_t1_ParamLimits

0x99a5,	// (0x000ae943) list_cale_time_pane_t1

0x99cd,	// (0x000ae96b) list_cale_time_pane_t2_ParamLimits

0x99cd,	// (0x000ae96b) list_cale_time_pane_t2

0x27fe,	// (0x000a779c) aid_blid_cardinal_pane

0x283c,	// (0x000a77da) compass_pane_t4

0x99f5,	// (0x000ae993) list_cale_time_pane_t4_ParamLimits

0x99f5,	// (0x000ae993) list_cale_time_pane_t4

0x284a,	// (0x000a77e8) compass_pane_t5

0x2858,	// (0x000a77f6) compass_pane_t6

0x2866,	// (0x000a7804) compass_pane_t7

0xa4e5,	// (0x000af483) navi_pane_cc_t1

0xa6c2,	// (0x000af660) aid_phob_thumbnail_center_pane

0x2ec6,	// (0x000a7e64) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000b4298) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000b4298) list_cale_time_pane_t

0xe61a,	// (0x000b35b8) bg_popup_window_pane_cp02_ParamLimits

0xe61a,	// (0x000b35b8) bg_popup_window_pane_cp02

0x9a1d,	// (0x000ae9bb) heading_pane_cp01_ParamLimits

0x9a1d,	// (0x000ae9bb) heading_pane_cp01

0x9a29,	// (0x000ae9c7) loc_req_pane_ParamLimits

0x9a29,	// (0x000ae9c7) loc_req_pane

0x9a39,	// (0x000ae9d7) loc_type_pane_ParamLimits

0x9a39,	// (0x000ae9d7) loc_type_pane

0x9a4b,	// (0x000ae9e9) loc_type_pane_t1_ParamLimits

0x9a4b,	// (0x000ae9e9) loc_type_pane_t1

0x9a5d,	// (0x000ae9fb) loc_type_pane_t2_ParamLimits

0x9a5d,	// (0x000ae9fb) loc_type_pane_t2

0x9a6f,	// (0x000aea0d) loc_type_pane_t3_ParamLimits

0x9a6f,	// (0x000aea0d) loc_type_pane_t3

0x0002,

0xf301,	// (0x000b429f) loc_type_pane_t_ParamLimits

0xf301,	// (0x000b429f) loc_type_pane_t

0x9a81,	// (0x000aea1f) list_loc_req_pane

0x9a8b,	// (0x000aea29) scroll_pane_cp012

0x24ab,	// (0x000a7449) list_single_loc_request_popup_menu_pane_ParamLimits

0x24ab,	// (0x000a7449) list_single_loc_request_popup_menu_pane

0x9a96,	// (0x000aea34) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x9a96,	// (0x000aea34) list_single_loc_request_popup_menu_pane_g1

0x9aa2,	// (0x000aea40) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x9aa2,	// (0x000aea40) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000b42a6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000b42a6) list_single_loc_request_popup_menu_pane_g

0x9aae,	// (0x000aea4c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x9aae,	// (0x000aea4c) list_single_loc_request_popup_menu_pane_t1

0xec1e,	// (0x000b3bbc) bg_popup_window_pane_cp03_ParamLimits

0xec1e,	// (0x000b3bbc) bg_popup_window_pane_cp03

0xafd1,	// (0x000aff6f) heading_loc_req_pane_ParamLimits

0xafd1,	// (0x000aff6f) heading_loc_req_pane

0x24b8,	// (0x000a7456) popup_dyc_status_message_window_g1_ParamLimits

0x24b8,	// (0x000a7456) popup_dyc_status_message_window_g1

0x24cc,	// (0x000a746a) popup_dyc_status_message_window_t1_ParamLimits

0x24cc,	// (0x000a746a) popup_dyc_status_message_window_t1

0x24e1,	// (0x000a747f) popup_dyc_status_message_window_t2_ParamLimits

0x24e1,	// (0x000a747f) popup_dyc_status_message_window_t2

0x24f6,	// (0x000a7494) popup_dyc_status_message_window_t3_ParamLimits

0x24f6,	// (0x000a7494) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000b42ab) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000b42ab) popup_dyc_status_message_window_t

0xe9c3,	// (0x000b3961) bg_heading_pane_cp01

0x9ac4,	// (0x000aea62) heading_loc_req_pane_g1

0x9acc,	// (0x000aea6a) heading_loc_req_pane_g2

0x9ad4,	// (0x000aea72) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000b42b2) heading_loc_req_pane_g

0x9adc,	// (0x000aea7a) heading_loc_req_pane_t1

0x9aeb,	// (0x000aea89) bg_popup_sub_pane_cp01_ParamLimits

0x9aeb,	// (0x000aea89) bg_popup_sub_pane_cp01

0x9af9,	// (0x000aea97) popup_cale_events_window_g1_ParamLimits

0x9af9,	// (0x000aea97) popup_cale_events_window_g1

0x9b19,	// (0x000aeab7) popup_cale_events_window_g2_ParamLimits

0x9b19,	// (0x000aeab7) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000b42e6) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000b42e6) popup_cale_events_window_g

0x9b39,	// (0x000aead7) popup_cale_events_window_t1_ParamLimits

0x9b39,	// (0x000aead7) popup_cale_events_window_t1

0x9b4b,	// (0x000aeae9) popup_cale_events_window_t2_ParamLimits

0x9b4b,	// (0x000aeae9) popup_cale_events_window_t2

0x9b89,	// (0x000aeb27) popup_cale_events_window_t3_ParamLimits

0x9b89,	// (0x000aeb27) popup_cale_events_window_t3

0x9bc3,	// (0x000aeb61) popup_cale_events_window_t4_ParamLimits

0x9bc3,	// (0x000aeb61) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000b42eb) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000b42eb) popup_cale_events_window_t

0x25f9,	// (0x000a7597) call_type_pane

0x2609,	// (0x000a75a7) popup_call_status_window_g1

0x261d,	// (0x000a75bb) popup_call_status_window_g2

0x2631,	// (0x000a75cf) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000b42f4) popup_call_status_window_g

0xa246,	// (0x000af1e4) call_type_pane_g1

0xa24f,	// (0x000af1ed) call_type_pane_g2

0x0001,

0xf35d,	// (0x000b42fb) call_type_pane_g

0xe9c3,	// (0x000b3961) bg_popup_sub_pane_cp02

0xa258,	// (0x000af1f6) listscroll_popup_wml_pane

0xa260,	// (0x000af1fe) list_wml_pane

0xa26a,	// (0x000af208) scroll_pane_cp013

0xa275,	// (0x000af213) list_single_graphic_popup_wml_pane_ParamLimits

0xa275,	// (0x000af213) list_single_graphic_popup_wml_pane

0xed38,	// (0x000b3cd6) list_single_graphic_popup_wml_pane_g1

0xa289,	// (0x000af227) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000b4300) list_single_graphic_popup_wml_pane_g

0xa291,	// (0x000af22f) list_single_graphic_popup_wml_pane_t1

0xa2a7,	// (0x000af245) aid_call_pane

0xec16,	// (0x000b3bb4) popup_clock_analogue_window_g1

0xec16,	// (0x000b3bb4) popup_clock_analogue_window_g2

0x9bf9,	// (0x000aeb97) popup_clock_analogue_window_g3

0x9bf9,	// (0x000aeb97) popup_clock_analogue_window_g4

0xed38,	// (0x000b3cd6) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000b4305) popup_clock_analogue_window_g

0x9c01,	// (0x000aeb9f) popup_clock_analogue_window_t1

0x9c0f,	// (0x000aebad) clock_digital_number_pane_ParamLimits

0x9c0f,	// (0x000aebad) clock_digital_number_pane

0x9c1b,	// (0x000aebb9) clock_digital_number_pane_cp02_ParamLimits

0x9c1b,	// (0x000aebb9) clock_digital_number_pane_cp02

0x9c27,	// (0x000aebc5) clock_digital_number_pane_cp03_ParamLimits

0x9c27,	// (0x000aebc5) clock_digital_number_pane_cp03

0x9c33,	// (0x000aebd1) clock_digital_number_pane_cp04_ParamLimits

0x9c33,	// (0x000aebd1) clock_digital_number_pane_cp04

0x9c43,	// (0x000aebe1) clock_digital_separator_pane_ParamLimits

0x9c43,	// (0x000aebe1) clock_digital_separator_pane

0x9c4f,	// (0x000aebed) popup_clock_digital_window_t1

0xed38,	// (0x000b3cd6) clock_digital_number_pane_g1

0xed38,	// (0x000b3cd6) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000b4273) clock_digital_number_pane_g

0xed38,	// (0x000b3cd6) clock_digital_separator_pane_g1

0xed38,	// (0x000b3cd6) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000b4273) clock_digital_separator_pane_g

0xe9c3,	// (0x000b3961) bg_popup_window_pane_cp04

0xa2af,	// (0x000af24d) heading_pane_cp03

0xa2b7,	// (0x000af255) listscroll_popup_gms_pane

0xa2bf,	// (0x000af25d) grid_large_graphic_popup_pane

0xa2c9,	// (0x000af267) listscroll_popup_gms_pane_g1

0xa2d1,	// (0x000af26f) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000b4310) listscroll_popup_gms_pane_g

0x96f7,	// (0x000ae695) scroll_pane_cp014

0x2640,	// (0x000a75de) cell_large_graphic_popup_pane_ParamLimits

0x2640,	// (0x000a75de) cell_large_graphic_popup_pane

0x2658,	// (0x000a75f6) cell_large_graphic_popup_pane_g1_ParamLimits

0x2658,	// (0x000a75f6) cell_large_graphic_popup_pane_g1

0xa2d9,	// (0x000af277) cell_large_graphic_popup_pane_g2_ParamLimits

0xa2d9,	// (0x000af277) cell_large_graphic_popup_pane_g2

0xa2e5,	// (0x000af283) cell_large_graphic_popup_pane_g3_ParamLimits

0xa2e5,	// (0x000af283) cell_large_graphic_popup_pane_g3

0xa2f2,	// (0x000af290) cell_large_graphic_popup_pane_g4_ParamLimits

0xa2f2,	// (0x000af290) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000b4315) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000b4315) cell_large_graphic_popup_pane_g

0xa302,	// (0x000af2a0) grid_highlight_pane_cp010

0xed38,	// (0x000b3cd6) bg_popup_call_pane_g1

0xa30c,	// (0x000af2aa) list_single_graphic_popup_conf_pane_ParamLimits

0xa30c,	// (0x000af2aa) list_single_graphic_popup_conf_pane

0xa31f,	// (0x000af2bd) list_highlight_pane_cp01

0xa328,	// (0x000af2c6) list_single_graphic_popup_conf_pane_g1

0xa330,	// (0x000af2ce) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000b431e) list_single_graphic_popup_conf_pane_g

0xa338,	// (0x000af2d6) list_single_graphic_popup_conf_pane_t1

0xa346,	// (0x000af2e4) linegrid_cams_pane_g1

0x2664,	// (0x000a7602) linegrid_cams_pane_g2

0xee8e,	// (0x000b3e2c) linegrid_cams_pane_g3

0xa34f,	// (0x000af2ed) linegrid_cams_pane_g4

0x266d,	// (0x000a760b) linegrid_cams_pane_g5

0x2676,	// (0x000a7614) linegrid_cams_pane_g6

0xee97,	// (0x000b3e35) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000b4323) linegrid_cams_pane_g

0xa358,	// (0x000af2f6) popup_clock_analogue_window

0xa358,	// (0x000af2f6) popup_clock_digital_window

0xe9c3,	// (0x000b3961) popup_phob_thumbnail_window

0xed38,	// (0x000b3cd6) call_video_uplink_pane_g1

0xa361,	// (0x000af2ff) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000b4332) call_video_uplink_pane_g

0xa369,	// (0x000af307) video_uplink_pane

0xa371,	// (0x000af30f) mce_image_pane_g1

0x2681,	// (0x000a761f) mce_image_pane_g2

0x268b,	// (0x000a7629) mce_image_pane_g3

0x2693,	// (0x000a7631) mce_image_pane_g4

0x269b,	// (0x000a7639) mce_image_pane_g5

0x0004,

0xf399,	// (0x000b4337) mce_image_pane_g

0xa37b,	// (0x000af319) control_top_pane_stacon_cp01_ParamLimits

0xa37b,	// (0x000af319) control_top_pane_stacon_cp01

0xa38f,	// (0x000af32d) uni_indicator_pane_stacon_cp01_ParamLimits

0xa38f,	// (0x000af32d) uni_indicator_pane_stacon_cp01

0xa3a0,	// (0x000af33e) bg_popup_sub_pane_cp03

0xa3aa,	// (0x000af348) chi_dic_find_pane

0x26a3,	// (0x000a7641) listscroll_chi_dic_pane

0xa3b2,	// (0x000af350) main_pane_chidic_g1

0xa3ba,	// (0x000af358) chi_dic_find_pane_t1

0xa3c8,	// (0x000af366) find_chidic_pane

0xa3d1,	// (0x000af36f) chi_dic_list_pane_ParamLimits

0xa3d1,	// (0x000af36f) chi_dic_list_pane

0xa3e2,	// (0x000af380) scroll_pane_cp020

0xa3ea,	// (0x000af388) find_chidic_pane_t1

0xe9c3,	// (0x000b3961) input_focus_pane_cp06

0x26b7,	// (0x000a7655) list_chi_dic_pane_ParamLimits

0x26b7,	// (0x000a7655) list_chi_dic_pane

0x26c9,	// (0x000a7667) list_chi_dic_pane_t1_ParamLimits

0x26c9,	// (0x000a7667) list_chi_dic_pane_t1

0xe9c3,	// (0x000b3961) list_highlight_pane_cp020

0xa3f9,	// (0x000af397) bg_cale_heading_pane_g1

0x26dc,	// (0x000a767a) bg_cale_heading_pane_g2

0x26e4,	// (0x000a7682) bg_cale_heading_pane_g3

0x26ec,	// (0x000a768a) bg_cale_heading_pane_g4

0x26f6,	// (0x000a7694) bg_cale_heading_pane_g5

0x2700,	// (0x000a769e) bg_cale_heading_pane_g6

0x2708,	// (0x000a76a6) bg_cale_heading_pane_g7

0x2710,	// (0x000a76ae) bg_cale_heading_pane_g8

0x271a,	// (0x000a76b8) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000b4342) bg_cale_heading_pane_g

0xa3f9,	// (0x000af397) bg_cale_side_pane_g1

0x2724,	// (0x000a76c2) bg_cale_side_pane_g2

0x272c,	// (0x000a76ca) bg_cale_side_pane_g3

0x2734,	// (0x000a76d2) bg_cale_side_pane_g4

0x273c,	// (0x000a76da) bg_cale_side_pane_g5

0x2744,	// (0x000a76e2) bg_cale_side_pane_g6

0x274c,	// (0x000a76ea) bg_cale_side_pane_g7

0x2754,	// (0x000a76f2) bg_cale_side_pane_g8

0x275c,	// (0x000a76fa) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000b4355) bg_cale_side_pane_g

0x2764,	// (0x000a7702) popup_call_status_window_ParamLimits

0x2764,	// (0x000a7702) popup_call_status_window

0xa401,	// (0x000af39f) stacon_top_pane

0xa409,	// (0x000af3a7) status_pane_ParamLimits

0xa409,	// (0x000af3a7) status_pane

0xa41e,	// (0x000af3bc) status_small_pane

0xa426,	// (0x000af3c4) control_pane

0xe9c3,	// (0x000b3961) stacon_bottom_pane

0xa42e,	// (0x000af3cc) list_single_mce_smart_pane_t1_ParamLimits

0xa42e,	// (0x000af3cc) list_single_mce_smart_pane_t1

0xa441,	// (0x000af3df) list_single_mce_smart_pane_t2_ParamLimits

0xa441,	// (0x000af3df) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000b4368) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000b4368) list_single_mce_smart_pane_t

0x27ad,	// (0x000a774b) compass_pane

0x27b6,	// (0x000a7754) main_location2_pane_t1

0x27c8,	// (0x000a7766) main_location2_pane_t2

0x27da,	// (0x000a7778) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000b436d) main_location2_pane_t

0xa460,	// (0x000af3fe) compass_pane_g1_ParamLimits

0xa460,	// (0x000af3fe) compass_pane_g1

0x281e,	// (0x000a77bc) compass_pane_t1

0x282d,	// (0x000a77cb) compass_pane_t2

0x0005,

0xf3d8,	// (0x000b4376) compass_pane_t

0x2874,	// (0x000a7812) text_secondary_cp61

0xa4dc,	// (0x000af47a) navi_pane_cams_g5

0xa558,	// (0x000af4f6) navi_pane_im_t1

0xa566,	// (0x000af504) navi_pane_mp_g1_ParamLimits

0xa566,	// (0x000af504) navi_pane_mp_g1

0xa57a,	// (0x000af518) navi_pane_mp_g2_ParamLimits

0xa57a,	// (0x000af518) navi_pane_mp_g2

0xa586,	// (0x000af524) navi_pane_mp_g3_ParamLimits

0xa586,	// (0x000af524) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000b438a) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000b438a) navi_pane_mp_g

0xa592,	// (0x000af530) navi_pane_mp_t1

0xa5a0,	// (0x000af53e) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000b4391) navi_pane_mp_t

0xa60b,	// (0x000af5a9) navi_pane_vt_g1

0xa592,	// (0x000af530) navi_pane_vt_t1

0xa613,	// (0x000af5b1) navi_slider_pane

0xeea8,	// (0x000b3e46) zooming_pane

0xa623,	// (0x000af5c1) navi_slider_pane_g1

0x9c6c,	// (0x000aec0a) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000b4398) navi_slider_pane_g

0xa647,	// (0x000af5e5) aid_levels_zoom

0xa64f,	// (0x000af5ed) zooming_pane_g1

0xa657,	// (0x000af5f5) zooming_pane_g2

0xa657,	// (0x000af5f5) zooming_pane_g3

0x0002,

0xf409,	// (0x000b43a7) zooming_pane_g

0xa65f,	// (0x000af5fd) level_10_zoom

0xa668,	// (0x000af606) level_11_zoom

0xa671,	// (0x000af60f) level_1_zoom

0xa67a,	// (0x000af618) level_2_zoom

0xa683,	// (0x000af621) level_3_zoom

0xa68c,	// (0x000af62a) level_4_zoom

0xa695,	// (0x000af633) level_5_zoom

0xa69e,	// (0x000af63c) level_6_zoom

0xa6a7,	// (0x000af645) level_7_zoom

0xa6b0,	// (0x000af64e) level_8_zoom

0xa6b9,	// (0x000af657) level_9_zoom

0xa6ca,	// (0x000af668) popup_phob_thumbnail_window_g1

0xa6d2,	// (0x000af670) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000b43ae) popup_phob_thumbnail_window_g

0xb9c8,	// (0x000b0966) level_1_location

0xb9d0,	// (0x000b096e) level_2_location

0xb9d8,	// (0x000b0976) level_3_location

0xb9e0,	// (0x000b097e) level_4_location

0xeea8,	// (0x000b3e46) level_5_location

0x28c5,	// (0x000a7863) mce_icon_pane_g1

0x28cf,	// (0x000a786d) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000b43b3) mce_icon_pane_g

0x28d7,	// (0x000a7875) main_mup_pane_g1_ParamLimits

0x28d7,	// (0x000a7875) main_mup_pane_g1

0x28ed,	// (0x000a788b) main_mup_pane_g2_ParamLimits

0x28ed,	// (0x000a788b) main_mup_pane_g2

0x2905,	// (0x000a78a3) main_mup_pane_g3_ParamLimits

0x2905,	// (0x000a78a3) main_mup_pane_g3

0x291d,	// (0x000a78bb) main_mup_pane_g4_ParamLimits

0x291d,	// (0x000a78bb) main_mup_pane_g4

0x2935,	// (0x000a78d3) main_mup_pane_g5_ParamLimits

0x2935,	// (0x000a78d3) main_mup_pane_g5

0x2951,	// (0x000a78ef) main_mup_pane_g6_ParamLimits

0x2951,	// (0x000a78ef) main_mup_pane_g6

0x2969,	// (0x000a7907) main_mup_pane_g7_ParamLimits

0x2969,	// (0x000a7907) main_mup_pane_g7

0x2981,	// (0x000a791f) main_mup_pane_g8_ParamLimits

0x2981,	// (0x000a791f) main_mup_pane_g8

0x299b,	// (0x000a7939) main_mup_pane_g9_ParamLimits

0x299b,	// (0x000a7939) main_mup_pane_g9

0x29b5,	// (0x000a7953) main_mup_pane_g10_ParamLimits

0x29b5,	// (0x000a7953) main_mup_pane_g10

0x29cf,	// (0x000a796d) main_mup_pane_g11_ParamLimits

0x29cf,	// (0x000a796d) main_mup_pane_g11

0x29e3,	// (0x000a7981) main_mup_pane_g12_ParamLimits

0x29e3,	// (0x000a7981) main_mup_pane_g12

0x29f9,	// (0x000a7997) main_mup_pane_g13_ParamLimits

0x29f9,	// (0x000a7997) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000b43b8) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000b43b8) main_mup_pane_g

0x2a0d,	// (0x000a79ab) main_mup_pane_t1_ParamLimits

0x2a0d,	// (0x000a79ab) main_mup_pane_t1

0x2a27,	// (0x000a79c5) main_mup_pane_t2_ParamLimits

0x2a27,	// (0x000a79c5) main_mup_pane_t2

0x2a3f,	// (0x000a79dd) main_mup_pane_t3_ParamLimits

0x2a3f,	// (0x000a79dd) main_mup_pane_t3

0x2a57,	// (0x000a79f5) main_mup_pane_t4_ParamLimits

0x2a57,	// (0x000a79f5) main_mup_pane_t4

0x2a75,	// (0x000a7a13) main_mup_pane_t5_ParamLimits

0x2a75,	// (0x000a7a13) main_mup_pane_t5

0x2a8a,	// (0x000a7a28) main_mup_pane_t6_ParamLimits

0x2a8a,	// (0x000a7a28) main_mup_pane_t6

0x0005,

0xf435,	// (0x000b43d3) main_mup_pane_t_ParamLimits

0xf435,	// (0x000b43d3) main_mup_pane_t

0x2a9c,	// (0x000a7a3a) mup_progress_pane_ParamLimits

0x2a9c,	// (0x000a7a3a) mup_progress_pane

0x2aa8,	// (0x000a7a46) mup_visualizer_pane_ParamLimits

0x2aa8,	// (0x000a7a46) mup_visualizer_pane

0x2ad8,	// (0x000a7a76) mup_volume_pane_ParamLimits

0x2ad8,	// (0x000a7a76) mup_volume_pane

0xa6da,	// (0x000af678) mup_visualizer_pane_g1_ParamLimits

0xa6da,	// (0x000af678) mup_visualizer_pane_g1

0xa6da,	// (0x000af678) mup_visualizer_pane_g2_ParamLimits

0xa6da,	// (0x000af678) mup_visualizer_pane_g2

0xa460,	// (0x000af3fe) mup_visualizer_pane_g3_ParamLimits

0xa460,	// (0x000af3fe) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000b43e0) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000b43e0) mup_visualizer_pane_g

0xed38,	// (0x000b3cd6) mup_volume_pane_g1

0xa6f0,	// (0x000af68e) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000b43e7) mup_volume_pane_g

0xed38,	// (0x000b3cd6) mup_progress_pane_g1

0xa6f9,	// (0x000af697) mup_progress_pane_g2

0xa702,	// (0x000af6a0) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000b43ec) mup_progress_pane_g

0xe9c3,	// (0x000b3961) bg_popup_window_pane_cp05

0xa70b,	// (0x000af6a9) heading_pane_cp02_ParamLimits

0xa70b,	// (0x000af6a9) heading_pane_cp02

0xa725,	// (0x000af6c3) list_popup_blid_pane

0xa72d,	// (0x000af6cb) list_blid_sat_info_pane_ParamLimits

0xa72d,	// (0x000af6cb) list_blid_sat_info_pane

0xa740,	// (0x000af6de) list_blid_sat_info_pane_g1

0xa748,	// (0x000af6e6) list_blid_sat_info_pane_t1

0x2bee,	// (0x000a7b8c) mup_equalizer_pane_ParamLimits

0x2bee,	// (0x000a7b8c) mup_equalizer_pane

0x2c07,	// (0x000a7ba5) mup_equalizer_pane_cp1_ParamLimits

0x2c07,	// (0x000a7ba5) mup_equalizer_pane_cp1

0x2c24,	// (0x000a7bc2) mup_equalizer_pane_cp2_ParamLimits

0x2c24,	// (0x000a7bc2) mup_equalizer_pane_cp2

0x2c41,	// (0x000a7bdf) mup_equalizer_pane_cp3_ParamLimits

0x2c41,	// (0x000a7bdf) mup_equalizer_pane_cp3

0x2c62,	// (0x000a7c00) mup_equalizer_pane_cp4_ParamLimits

0x2c62,	// (0x000a7c00) mup_equalizer_pane_cp4

0x2c83,	// (0x000a7c21) mup_equalizer_pane_cp5

0x2c97,	// (0x000a7c35) mup_equalizer_pane_cp6

0x2cab,	// (0x000a7c49) mup_equalizer_pane_cp7

0xb8e6,	// (0x000b0884) bg_popup_call_poc_act_pane_g9

0xb8ee,	// (0x000b088c) bg_popup_call_poc_act_pane_g10

0xb8f6,	// (0x000b0894) bg_popup_call_poc_act_pane_g11

0x000a,

0xec1e,	// (0x000b3bbc) mup_scale_pane

0xed38,	// (0x000b3cd6) mup_scale_pane_g1

0xa756,	// (0x000af6f4) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000b4408) mup_scale_pane_g

0xa77a,	// (0x000af718) msg_data_pane

0xa782,	// (0x000af720) scroll_pane_cp017

0x2cd1,	// (0x000a7c6f) bg_list_pane_cp04_ParamLimits

0x2cd1,	// (0x000a7c6f) bg_list_pane_cp04

0xa78a,	// (0x000af728) msg_data_pane_g1

0x2cf1,	// (0x000a7c8f) msg_data_pane_g2

0x2cfb,	// (0x000a7c99) msg_data_pane_g3

0x2d03,	// (0x000a7ca1) msg_data_pane_g4

0x2d0b,	// (0x000a7ca9) msg_data_pane_g5

0x2d13,	// (0x000a7cb1) msg_data_pane_g6

0x2d1b,	// (0x000a7cb9) msg_data_pane_g7

0x0006,

0xf479,	// (0x000b4417) msg_data_pane_g

0x2d23,	// (0x000a7cc1) msg_text_pane_ParamLimits

0x2d23,	// (0x000a7cc1) msg_text_pane

0x2d45,	// (0x000a7ce3) qrid_highlight_pane_cp011_ParamLimits

0x2d45,	// (0x000a7ce3) qrid_highlight_pane_cp011

0xe9c3,	// (0x000b3961) msg_body_pane

0xe9c3,	// (0x000b3961) msg_header_pane

0xa79b,	// (0x000af739) input_focus_pane_cp07

0x2d69,	// (0x000a7d07) msg_header_pane_t1_ParamLimits

0x2d69,	// (0x000a7d07) msg_header_pane_t1

0x2d7b,	// (0x000a7d19) msg_header_pane_t2_ParamLimits

0x2d7b,	// (0x000a7d19) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000b442b) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000b442b) msg_header_pane_t

0xa7b0,	// (0x000af74e) msg_body_pane_g1

0x2d8d,	// (0x000a7d2b) msg_body_pane_t1_ParamLimits

0x2d8d,	// (0x000a7d2b) msg_body_pane_t1

0x2dbe,	// (0x000a7d5c) msg_body_pane_t2_ParamLimits

0x2dbe,	// (0x000a7d5c) msg_body_pane_t2

0x2dd0,	// (0x000a7d6e) msg_body_pane_t3_ParamLimits

0x2dd0,	// (0x000a7d6e) msg_body_pane_t3

0x0002,

0xf492,	// (0x000b4430) msg_body_pane_t_ParamLimits

0xf492,	// (0x000b4430) msg_body_pane_t

0x2e1c,	// (0x000a7dba) main_viewer_pane_g1_ParamLimits

0x2e1c,	// (0x000a7dba) main_viewer_pane_g1

0x2e2a,	// (0x000a7dc8) main_viewer_pane_g2_ParamLimits

0x2e2a,	// (0x000a7dc8) main_viewer_pane_g2

0x2e38,	// (0x000a7dd6) main_viewer_pane_g3_ParamLimits

0x2e38,	// (0x000a7dd6) main_viewer_pane_g3

0x2e47,	// (0x000a7de5) main_viewer_pane_g4_ParamLimits

0x2e47,	// (0x000a7de5) main_viewer_pane_g4

0x9c96,	// (0x000aec34) main_viewer_pane_g5_ParamLimits

0x9c96,	// (0x000aec34) main_viewer_pane_g5

0x9c96,	// (0x000aec34) main_viewer_pane_g7_ParamLimits

0x9c96,	// (0x000aec34) main_viewer_pane_g7

0x9a96,	// (0x000aea34) main_viewer_pane_g8_ParamLimits

0x9a96,	// (0x000aea34) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000b4440) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000b4440) main_viewer_pane_g

0xa7b8,	// (0x000af756) viewer_content_pane_ParamLimits

0xa7b8,	// (0x000af756) viewer_content_pane

0x2e83,	// (0x000a7e21) main_postcard_pane_g1_ParamLimits

0x2e83,	// (0x000a7e21) main_postcard_pane_g1

0x2e99,	// (0x000a7e37) main_postcard_pane_g2_ParamLimits

0x2e99,	// (0x000a7e37) main_postcard_pane_g2

0x2eaf,	// (0x000a7e4d) main_postcard_pane_g3_ParamLimits

0x2eaf,	// (0x000a7e4d) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000b4451) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000b4451) main_postcard_pane_g

0x2ec6,	// (0x000a7e64) main_postcard_pane_g4

0xbac8,	// (0x000b0a66) smil_status_volume_pane_g2

0x2f09,	// (0x000a7ea7) postcard_pane_ParamLimits

0x2f09,	// (0x000a7ea7) postcard_pane

0xa7c6,	// (0x000af764) postcard_pane_g1_ParamLimits

0xa7c6,	// (0x000af764) postcard_pane_g1

0x2f4b,	// (0x000a7ee9) postcard_pane_g2_ParamLimits

0x2f4b,	// (0x000a7ee9) postcard_pane_g2

0x2f57,	// (0x000a7ef5) postcard_pane_g3_ParamLimits

0x2f57,	// (0x000a7ef5) postcard_pane_g3

0xa7d4,	// (0x000af772) postcard_pane_g4_ParamLimits

0xa7d4,	// (0x000af772) postcard_pane_g4

0x2f63,	// (0x000a7f01) postcard_pane_g5_ParamLimits

0x2f63,	// (0x000a7f01) postcard_pane_g5

0x2f78,	// (0x000a7f16) postcard_pane_g6_ParamLimits

0x2f78,	// (0x000a7f16) postcard_pane_g6

0xa7c6,	// (0x000af764) postcard_pane_g7_ParamLimits

0xa7c6,	// (0x000af764) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000b445e) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000b445e) postcard_pane_g

0x2f8c,	// (0x000a7f2a) main_mp2_pane_g1_ParamLimits

0x2f8c,	// (0x000a7f2a) main_mp2_pane_g1

0x2f98,	// (0x000a7f36) main_mp2_pane_g2_ParamLimits

0x2f98,	// (0x000a7f36) main_mp2_pane_g2

0x2fa4,	// (0x000a7f42) main_mp2_pane_g3_ParamLimits

0x2fa4,	// (0x000a7f42) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000b446d) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000b446d) main_mp2_pane_g

0x2fb0,	// (0x000a7f4e) main_mp2_pane_t1_ParamLimits

0x2fb0,	// (0x000a7f4e) main_mp2_pane_t1

0x2fc5,	// (0x000a7f63) main_mp2_pane_t2_ParamLimits

0x2fc5,	// (0x000a7f63) main_mp2_pane_t2

0x2fd7,	// (0x000a7f75) main_mp2_pane_t3_ParamLimits

0x2fd7,	// (0x000a7f75) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000b4474) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000b4474) main_mp2_pane_t

0xa7e2,	// (0x000af780) pec_content_pane_ParamLimits

0xa7e2,	// (0x000af780) pec_content_pane

0x96f7,	// (0x000ae695) scroll_pane_cp015

0xa7f4,	// (0x000af792) pec_attribute_pane_ParamLimits

0xa7f4,	// (0x000af792) pec_attribute_pane

0x2fe9,	// (0x000a7f87) pec_content_pane_g1_ParamLimits

0x2fe9,	// (0x000a7f87) pec_content_pane_g1

0xa804,	// (0x000af7a2) pec_content_pane_t1_ParamLimits

0xa804,	// (0x000af7a2) pec_content_pane_t1

0xa816,	// (0x000af7b4) pec_content_pane_t2_ParamLimits

0xa816,	// (0x000af7b4) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000b447b) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000b447b) pec_content_pane_t

0x2ff5,	// (0x000a7f93) list_single_graphic_pane_cp01_ParamLimits

0x2ff5,	// (0x000a7f93) list_single_graphic_pane_cp01

0xec1e,	// (0x000b3bbc) bg_popup_sub_pane_cp04

0xa828,	// (0x000af7c6) popup_mup_playback_window_g1

0xa834,	// (0x000af7d2) popup_mup_playback_window_t1

0xa849,	// (0x000af7e7) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000b4480) popup_mup_playback_window_t

0xa880,	// (0x000af81e) main_image_pane_g1_ParamLimits

0xa880,	// (0x000af81e) main_image_pane_g1

0xa8c3,	// (0x000af861) scroll_pane_cp018_ParamLimits

0xa8c3,	// (0x000af861) scroll_pane_cp018

0xa8db,	// (0x000af879) scroll_pane_cp016_ParamLimits

0xa8db,	// (0x000af879) scroll_pane_cp016

0x30c2,	// (0x000a8060) smil2_image_pane_ParamLimits

0x30c2,	// (0x000a8060) smil2_image_pane

0x30f2,	// (0x000a8090) smil2_root_pane_ParamLimits

0x30f2,	// (0x000a8090) smil2_root_pane

0x312a,	// (0x000a80c8) smil2_text_pane_ParamLimits

0x312a,	// (0x000a80c8) smil2_text_pane

0xe9c3,	// (0x000b3961) bg_list_pane_cp06

0xa917,	// (0x000af8b5) grid_radio_pane

0xe9c3,	// (0x000b3961) bg_popup_window_pane_cp06

0xa91f,	// (0x000af8bd) main_fmradio_pane_t1

0xa2af,	// (0x000af24d) heading_pane_cp04

0xa92d,	// (0x000af8cb) main_fmradio_pane_t2

0xb8fe,	// (0x000b089c) popup_cale_lunar_info_window_g1

0xa93b,	// (0x000af8d9) main_fmradio_pane_t3

0xb906,	// (0x000b08a4) popup_cale_lunar_info_window_g2

0xa949,	// (0x000af8e7) main_fmradio_pane_t4

0x0001,

0xa957,	// (0x000af8f5) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000b455b) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000b4495) main_fmradio_pane_t

0xa965,	// (0x000af903) wait_bar_pane_cp03

0xa96d,	// (0x000af90b) cell_fmradio_pane_ParamLimits

0xa96d,	// (0x000af90b) cell_fmradio_pane

0xa7c6,	// (0x000af764) cell_fmradio_pane_g1_ParamLimits

0xa7c6,	// (0x000af764) cell_fmradio_pane_g1

0xe9c3,	// (0x000b3961) grid_highlight_pane_cp011

0xa980,	// (0x000af91e) poc_content_pane_ParamLimits

0xa980,	// (0x000af91e) poc_content_pane

0xa992,	// (0x000af930) scroll_pane_cp019

0x31aa,	// (0x000a8148) popup_call_poc_act_window_ParamLimits

0x31aa,	// (0x000a8148) popup_call_poc_act_window

0x31ce,	// (0x000a816c) popup_call_poc_inact_window_ParamLimits

0x31ce,	// (0x000a816c) popup_call_poc_inact_window

0xf594,	// (0x000b4532) bg_popup_call_poc_act_pane_g

0xb876,	// (0x000b0814) bg_popup_call_poc_inact_pane_g1

0xb87e,	// (0x000b081c) bg_popup_call_poc_inact_pane_g2

0xa99a,	// (0x000af938) popup_call_poc_act_window_g2

0xb886,	// (0x000b0824) bg_popup_call_poc_inact_pane_g3

0xb88e,	// (0x000b082c) bg_popup_call_poc_inact_pane_g4

0xb896,	// (0x000b0834) bg_popup_call_poc_inact_pane_g5

0xa9a2,	// (0x000af940) popup_call_poc_act_window_t1_ParamLimits

0xa9a2,	// (0x000af940) popup_call_poc_act_window_t1

0xa9ca,	// (0x000af968) popup_call_poc_act_window_t2_ParamLimits

0xa9ca,	// (0x000af968) popup_call_poc_act_window_t2

0xa9f2,	// (0x000af990) popup_call_poc_act_window_t3_ParamLimits

0xa9f2,	// (0x000af990) popup_call_poc_act_window_t3

0xaa1a,	// (0x000af9b8) popup_call_poc_act_window_t4_ParamLimits

0xaa1a,	// (0x000af9b8) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000b44a0) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000b44a0) popup_call_poc_act_window_t

0xb89e,	// (0x000b083c) bg_popup_call_poc_inact_pane_g6

0xb8a6,	// (0x000b0844) bg_popup_call_poc_inact_pane_g7

0xb8ae,	// (0x000b084c) bg_popup_call_poc_inact_pane_g8

0xaa2c,	// (0x000af9ca) popup_call_poc_inact_window_g2

0xb8b6,	// (0x000b0854) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000b451f) bg_popup_call_poc_inact_pane_g

0xaa34,	// (0x000af9d2) popup_call_poc_inact_window_t1_ParamLimits

0xaa34,	// (0x000af9d2) popup_call_poc_inact_window_t1

0xaa49,	// (0x000af9e7) popup_call_poc_inact_window_t2_ParamLimits

0xaa49,	// (0x000af9e7) popup_call_poc_inact_window_t2

0xaa5e,	// (0x000af9fc) popup_call_poc_inact_window_t3_ParamLimits

0xaa5e,	// (0x000af9fc) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000b44a9) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000b44a9) popup_call_poc_inact_window_t

0xba3b,	// (0x000b09d9) context_pane_ParamLimits

0x3a0f,	// (0x000a89ad) signal_pane_ParamLimits

0xeea8,	// (0x000b3e46) main_call2_pane

0x9ce1,	// (0x000aec7f) popup_phob_thumbnail2_window_ParamLimits

0x9ce1,	// (0x000aec7f) popup_phob_thumbnail2_window

0x9c7e,	// (0x000aec1c) aid_hotspot_pointer_arrow_pane

0x9c86,	// (0x000aec24) aid_hotspot_pointer_hand_pane

0x3517,	// (0x000a84b5) phob_pre_status_pane_g5

0x103c,	// (0x000a5fda) cams_zoom_pane_ParamLimits

0x104b,	// (0x000a5fe9) image_vga_pane_ParamLimits

0x1065,	// (0x000a6003) main_camera_pane_g1_ParamLimits

0x1077,	// (0x000a6015) main_camera_pane_g2_ParamLimits

0x1087,	// (0x000a6025) main_camera_pane_g3_ParamLimits

0x1097,	// (0x000a6035) main_camera_pane_g4_ParamLimits

0x10a7,	// (0x000a6045) main_camera_pane_g5_ParamLimits

0x10b7,	// (0x000a6055) main_camera_pane_g6_ParamLimits

0x10c9,	// (0x000a6067) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000b41a8) main_camera_pane_g_ParamLimits

0x10d9,	// (0x000a6077) main_camera_pane_t1_ParamLimits

0x10ef,	// (0x000a608d) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000b41b9) main_camera_pane_t_ParamLimits

0xec1e,	// (0x000b3bbc) bg_popup_preview_window_pane_cp01_ParamLimits

0xec1e,	// (0x000b3bbc) bg_popup_preview_window_pane_cp01

0xaa73,	// (0x000afa11) popup_phob_thumbnail2_window_g1_ParamLimits

0xaa73,	// (0x000afa11) popup_phob_thumbnail2_window_g1

0xe9c3,	// (0x000b3961) call2_cli_visual_pane

0x3202,	// (0x000a81a0) popup_call2_audio_conf_window_ParamLimits

0x3202,	// (0x000a81a0) popup_call2_audio_conf_window

0x3222,	// (0x000a81c0) popup_call2_audio_first_window_ParamLimits

0x3222,	// (0x000a81c0) popup_call2_audio_first_window

0x32b8,	// (0x000a8256) popup_call2_audio_in_window_ParamLimits

0x32b8,	// (0x000a8256) popup_call2_audio_in_window

0x3300,	// (0x000a829e) popup_call2_audio_out_window_ParamLimits

0x3300,	// (0x000a829e) popup_call2_audio_out_window

0x336a,	// (0x000a8308) popup_call2_audio_second_window_ParamLimits

0x336a,	// (0x000a8308) popup_call2_audio_second_window

0x33d0,	// (0x000a836e) popup_call2_audio_wait_window_ParamLimits

0x33d0,	// (0x000a836e) popup_call2_audio_wait_window

0xe9c3,	// (0x000b3961) bg_popup_call2_act_pane_cp03

0xec00,	// (0x000b3b9e) list_conf_pane_cp

0xaa7f,	// (0x000afa1d) popup_call2_audio_conf_window_t1

0xa30c,	// (0x000af2aa) list_single_graphic_popup_conf2_pane_ParamLimits

0xa30c,	// (0x000af2aa) list_single_graphic_popup_conf2_pane

0xa31f,	// (0x000af2bd) list_highlight_pane_cp04

0xaa8d,	// (0x000afa2b) list_single_graphic_popup_conf2_pane_g1

0xa330,	// (0x000af2ce) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000b44b0) list_single_graphic_popup_conf2_pane_g

0xaa97,	// (0x000afa35) list_single_graphic_popup_conf2_pane_t1

0xaaa5,	// (0x000afa43) bg_popup_call2_act_pane_cp01_ParamLimits

0xaaa5,	// (0x000afa43) bg_popup_call2_act_pane_cp01

0xab2f,	// (0x000afacd) call_type_pane_cp05_ParamLimits

0xab2f,	// (0x000afacd) call_type_pane_cp05

0xab83,	// (0x000afb21) popup_call2_audio_second_window_g1_ParamLimits

0xab83,	// (0x000afb21) popup_call2_audio_second_window_g1

0xabd7,	// (0x000afb75) popup_call2_audio_second_window_g2_ParamLimits

0xabd7,	// (0x000afb75) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000b44b5) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000b44b5) popup_call2_audio_second_window_g

0xac3c,	// (0x000afbda) popup_call2_audio_second_window_t1_ParamLimits

0xac3c,	// (0x000afbda) popup_call2_audio_second_window_t1

0xacf7,	// (0x000afc95) popup_call2_audio_second_window_t2_ParamLimits

0xacf7,	// (0x000afc95) popup_call2_audio_second_window_t2

0xad4a,	// (0x000afce8) popup_call2_audio_second_window_t3_ParamLimits

0xad4a,	// (0x000afce8) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000b44bc) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000b44bc) popup_call2_audio_second_window_t

0xe9c3,	// (0x000b3961) bg_popup_call2_in_pane_cp02

0xe9cd,	// (0x000b396b) call_type_pane_cp04

0xe9d5,	// (0x000b3973) popup_call2_audio_wait_window_g1

0xe9dd,	// (0x000b397b) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b4097) popup_call2_audio_wait_window_g

0xe9e5,	// (0x000b3983) popup_call2_audio_wait_window_t3

0xae3d,	// (0x000afddb) bg_popup_call2_act_pane_ParamLimits

0xae3d,	// (0x000afddb) bg_popup_call2_act_pane

0xaefd,	// (0x000afe9b) call_type_pane_cp03_ParamLimits

0xaefd,	// (0x000afe9b) call_type_pane_cp03

0xaf61,	// (0x000afeff) popup_call2_audio_first_window_g1_ParamLimits

0xaf61,	// (0x000afeff) popup_call2_audio_first_window_g1

0xafdd,	// (0x000aff7b) popup_call2_audio_first_window_g2_ParamLimits

0xafdd,	// (0x000aff7b) popup_call2_audio_first_window_g2

0xa6da,	// (0x000af678) popup_call2_audio_first_window_g3_ParamLimits

0xa6da,	// (0x000af678) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000b44c5) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000b44c5) popup_call2_audio_first_window_g

0xb0bb,	// (0x000b0059) popup_call2_audio_first_window_t1_ParamLimits

0xb0bb,	// (0x000b0059) popup_call2_audio_first_window_t1

0xb1be,	// (0x000b015c) popup_call2_audio_first_window_t4_ParamLimits

0xb1be,	// (0x000b015c) popup_call2_audio_first_window_t4

0xb2a1,	// (0x000b023f) popup_call2_audio_first_window_t5_ParamLimits

0xb2a1,	// (0x000b023f) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000b44d0) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000b44d0) popup_call2_audio_first_window_t

0xec16,	// (0x000b3bb4) bg_popup_call2_act_pane_g1

0xb90e,	// (0x000b08ac) popup_cale_lunar_info_window_t1

0xb91c,	// (0x000b08ba) popup_cale_lunar_info_window_t2

0xb92a,	// (0x000b08c8) popup_cale_lunar_info_window_t3

0xe9c3,	// (0x000b3961) bg_popup_call2_bubble_pane

0xb3a2,	// (0x000b0340) bg_popup_call2_in_pane_cp01_ParamLimits

0xb3a2,	// (0x000b0340) bg_popup_call2_in_pane_cp01

0xe69f,	// (0x000b363d) call_type_pane_cp02

0xb3ea,	// (0x000b0388) popup_call2_audio_out_window_g1_ParamLimits

0xb3ea,	// (0x000b0388) popup_call2_audio_out_window_g1

0xb416,	// (0x000b03b4) popup_call2_audio_out_window_g2_ParamLimits

0xb416,	// (0x000b03b4) popup_call2_audio_out_window_g2

0xb43e,	// (0x000b03dc) popup_call2_audio_out_window_g3_ParamLimits

0xb43e,	// (0x000b03dc) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000b44d9) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000b44d9) popup_call2_audio_out_window_g

0xb479,	// (0x000b0417) popup_call2_audio_out_window_t1_ParamLimits

0xb479,	// (0x000b0417) popup_call2_audio_out_window_t1

0xb4d8,	// (0x000b0476) popup_call2_audio_out_window_t2_ParamLimits

0xb4d8,	// (0x000b0476) popup_call2_audio_out_window_t2

0xb52c,	// (0x000b04ca) popup_call2_audio_out_window_t3_ParamLimits

0xb52c,	// (0x000b04ca) popup_call2_audio_out_window_t3

0xb542,	// (0x000b04e0) popup_call2_audio_out_window_t4_ParamLimits

0xb542,	// (0x000b04e0) popup_call2_audio_out_window_t4

0xb558,	// (0x000b04f6) popup_call2_audio_out_window_t5_ParamLimits

0xb558,	// (0x000b04f6) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000b44e2) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000b44e2) popup_call2_audio_out_window_t

0xb5bc,	// (0x000b055a) bg_popup_call2_in_pane_ParamLimits

0xb5bc,	// (0x000b055a) bg_popup_call2_in_pane

0xb618,	// (0x000b05b6) popup_call2_audio_in_window_g1_ParamLimits

0xb618,	// (0x000b05b6) popup_call2_audio_in_window_g1

0xb650,	// (0x000b05ee) popup_call2_audio_in_window_g2_ParamLimits

0xb650,	// (0x000b05ee) popup_call2_audio_in_window_g2

0xb688,	// (0x000b0626) popup_call2_audio_in_window_g3_ParamLimits

0xb688,	// (0x000b0626) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000b44ef) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000b44ef) popup_call2_audio_in_window_g

0xb6e0,	// (0x000b067e) popup_call2_audio_in_window_t1_ParamLimits

0xb6e0,	// (0x000b067e) popup_call2_audio_in_window_t1

0xb760,	// (0x000b06fe) popup_call2_audio_in_window_t2_ParamLimits

0xb760,	// (0x000b06fe) popup_call2_audio_in_window_t2

0xb7e0,	// (0x000b077e) popup_call2_audio_in_window_t3_ParamLimits

0xb7e0,	// (0x000b077e) popup_call2_audio_in_window_t3

0xb7fa,	// (0x000b0798) popup_call2_audio_in_window_t4_ParamLimits

0xb7fa,	// (0x000b0798) popup_call2_audio_in_window_t4

0xb80c,	// (0x000b07aa) popup_call2_audio_in_window_t5_ParamLimits

0xb80c,	// (0x000b07aa) popup_call2_audio_in_window_t5

0xb821,	// (0x000b07bf) popup_call2_audio_in_window_t6_ParamLimits

0xb821,	// (0x000b07bf) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000b44f8) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000b44f8) popup_call2_audio_in_window_t

0xec16,	// (0x000b3bb4) bg_popup_call2_in_pane_g1

0xb938,	// (0x000b08d6) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000b4560) popup_cale_lunar_info_window_t

0xec1e,	// (0x000b3bbc) bg_popup_call2_rect_pane_ParamLimits

0xec1e,	// (0x000b3bbc) bg_popup_call2_rect_pane

0xe9c3,	// (0x000b3961) call2_cli_visual_graphic_pane

0xe9c3,	// (0x000b3961) call2_cli_visual_text_pane

0x9d08,	// (0x000aeca6) smil_status_volume_pane_g3

0x0002,

0xed38,	// (0x000b3cd6) call2_cli_visual_graphic_pane_g1

0xed38,	// (0x000b3cd6) call2_cli_visual_graphic_pane_g2

0xed38,	// (0x000b3cd6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000b4505) call2_cli_visual_graphic_pane_g

0xb836,	// (0x000b07d4) bg_popup_call2_rect_pane_g1

0xedc4,	// (0x000b3d62) bg_popup_call2_rect_pane_g2

0xb83e,	// (0x000b07dc) bg_popup_call2_rect_pane_g3

0xb846,	// (0x000b07e4) bg_popup_call2_rect_pane_g4

0xb84e,	// (0x000b07ec) bg_popup_call2_rect_pane_g5

0xb856,	// (0x000b07f4) bg_popup_call2_rect_pane_g6

0xb85e,	// (0x000b07fc) bg_popup_call2_rect_pane_g7

0xb866,	// (0x000b0804) bg_popup_call2_rect_pane_g8

0xb86e,	// (0x000b080c) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000b450c) bg_popup_call2_rect_pane_g

0xb876,	// (0x000b0814) bg_popup_call2_bubble_pane_g1

0xb87e,	// (0x000b081c) bg_popup_call2_bubble_pane_g2

0xb886,	// (0x000b0824) bg_popup_call2_bubble_pane_g3

0xb88e,	// (0x000b082c) bg_popup_call2_bubble_pane_g4

0xb896,	// (0x000b0834) bg_popup_call2_bubble_pane_g5

0xb89e,	// (0x000b083c) bg_popup_call2_bubble_pane_g6

0xb8a6,	// (0x000b0844) bg_popup_call2_bubble_pane_g7

0xb8ae,	// (0x000b084c) bg_popup_call2_bubble_pane_g8

0xb8b6,	// (0x000b0854) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000b451f) bg_popup_call2_bubble_pane_g

0x09be,	// (0x000a595c) aid_cale_week_size_cell_pane

0x1105,	// (0x000a60a3) aid_cams_cif_uncrop_pane_ParamLimits

0x1105,	// (0x000a60a3) aid_cams_cif_uncrop_pane

0x12b5,	// (0x000a6253) aid_cams_size_cell_ParamLimits

0x12b5,	// (0x000a6253) aid_cams_size_cell

0x12c9,	// (0x000a6267) grid_cams_pane_ParamLimits

0x12e3,	// (0x000a6281) linegrid_cams_pane_ParamLimits

0x14c3,	// (0x000a6461) call_video_pane_t1

0x14e1,	// (0x000a647f) call_video_pane_t2

0x0001,

0xf26e,	// (0x000b420c) call_video_pane_t

0x190d,	// (0x000a68ab) aid_cale_month_size_cell_pane_ParamLimits

0x190d,	// (0x000a68ab) aid_cale_month_size_cell_pane

0xf60b,	// (0x000b45a9) smil_status_volume_pane_g

0x9d15,	// (0x000aecb3) volume_smil_pane_ParamLimits

0x023b,	// (0x000a51d9) aid_popup2_width_pane

0x0918,	// (0x000a58b6) cell_qdial_pane_g4_ParamLimits

0x0918,	// (0x000a58b6) cell_qdial_pane_g4

0x27fe,	// (0x000a779c) aid_blid_cardinal_pane_ParamLimits

0x280a,	// (0x000a77a8) aid_blid_destination_pane_ParamLimits

0x280a,	// (0x000a77a8) aid_blid_destination_pane

0xec1e,	// (0x000b3bbc) bg_popup_call_poc_act_pane_ParamLimits

0xec1e,	// (0x000b3bbc) bg_popup_call_poc_act_pane

0xec1e,	// (0x000b3bbc) bg_popup_call_poc_inact_pane_ParamLimits

0xec1e,	// (0x000b3bbc) bg_popup_call_poc_inact_pane

0xb8be,	// (0x000b085c) bg_popup_call_poc_act_pane_g1

0xb8c6,	// (0x000b0864) bg_popup_call_poc_act_pane_g2

0xb8ce,	// (0x000b086c) bg_popup_call_poc_act_pane_g3

0xb88e,	// (0x000b082c) bg_popup_call_poc_act_pane_g4

0xb896,	// (0x000b0834) bg_popup_call_poc_act_pane_g5

0xb8d6,	// (0x000b0874) bg_popup_call_poc_act_pane_g6

0xb8a6,	// (0x000b0844) bg_popup_call_poc_act_pane_g7

0xb8de,	// (0x000b087c) bg_popup_call_poc_act_pane_g8

0xe9c3,	// (0x000b3961) main_usb_pane

0x9cbc,	// (0x000aec5a) popup_cale_lunar_info_window

0x17b9,	// (0x000a6757) im_reading_pane_t1_ParamLimits

0x964f,	// (0x000ae5ed) list_im_pane_ParamLimits

0x9660,	// (0x000ae5fe) scroll_pane_cp07_ParamLimits

0xe9c3,	// (0x000b3961) grid_highlight_pane_cp012

0xec1e,	// (0x000b3bbc) mup_scale_pane_ParamLimits

0xa7c6,	// (0x000af764) main_usb_pane_g1_ParamLimits

0xa7c6,	// (0x000af764) main_usb_pane_g1

0x342c,	// (0x000a83ca) main_usb_pane_g2_ParamLimits

0x342c,	// (0x000a83ca) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000b4549) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000b4549) main_usb_pane_g

0x3442,	// (0x000a83e0) main_usb_pane_t1_ParamLimits

0x3442,	// (0x000a83e0) main_usb_pane_t1

0x3454,	// (0x000a83f2) main_usb_pane_t2_ParamLimits

0x3454,	// (0x000a83f2) main_usb_pane_t2

0x3466,	// (0x000a8404) main_usb_pane_t3_ParamLimits

0x3466,	// (0x000a8404) main_usb_pane_t3

0x3478,	// (0x000a8416) main_usb_pane_t4_ParamLimits

0x3478,	// (0x000a8416) main_usb_pane_t4

0x348a,	// (0x000a8428) main_usb_pane_t5_ParamLimits

0x348a,	// (0x000a8428) main_usb_pane_t5

0x349c,	// (0x000a843a) main_usb_pane_t6_ParamLimits

0x349c,	// (0x000a843a) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000b454e) main_usb_pane_t_ParamLimits

0x27ad,	// (0x000a774b) aid_text_placing

0x27b6,	// (0x000a7754) main_location2_pane_t1_ParamLimits

0x27c8,	// (0x000a7766) main_location2_pane_t2_ParamLimits

0x27da,	// (0x000a7778) main_location2_pane_t3_ParamLimits

0x27ec,	// (0x000a778a) main_location2_pane_t4_ParamLimits

0x27ec,	// (0x000a778a) main_location2_pane_t4

0xf3cf,	// (0x000b436d) main_location2_pane_t_ParamLimits

0xec5a,	// (0x000b3bf8) find_pinb_pane_g2_ParamLimits

0xec5a,	// (0x000b3bf8) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000b40bd) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000b40bd) find_pinb_pane_g

0xec66,	// (0x000b3c04) find_pinb_pane_t1_ParamLimits

0xec78,	// (0x000b3c16) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000b40c2) find_pinb_pane_t_ParamLimits

0xe9c3,	// (0x000b3961) main_call3_pane

0x1dcc,	// (0x000a6d6a) cale_month_day_heading_pane_t1_ParamLimits

0x1e52,	// (0x000a6df0) cale_month_day_heading_pane_t2_ParamLimits

0x1ee3,	// (0x000a6e81) cale_month_day_heading_pane_t3_ParamLimits

0x1f74,	// (0x000a6f12) cale_month_day_heading_pane_t4_ParamLimits

0x2009,	// (0x000a6fa7) cale_month_day_heading_pane_t5_ParamLimits

0x20aa,	// (0x000a7048) cale_month_day_heading_pane_t6_ParamLimits

0x214b,	// (0x000a70e9) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000b4244) cale_month_day_heading_pane_t_ParamLimits

0x98b6,	// (0x000ae854) smil_status_volume_pane

0x2f27,	// (0x000a7ec5) postcard_address_pane_ParamLimits

0x2f27,	// (0x000a7ec5) postcard_address_pane

0x2f39,	// (0x000a7ed7) postcard_message_pane_ParamLimits

0x2f39,	// (0x000a7ed7) postcard_message_pane

0x340a,	// (0x000a83a8) call2_cli_visual_pane_t1_ParamLimits

0x340a,	// (0x000a83a8) call2_cli_visual_pane_t1

0x3c3c,	// (0x000a8bda) postcard_message_pane_t1_ParamLimits

0x3c3c,	// (0x000a8bda) postcard_message_pane_t1

0x3c25,	// (0x000a8bc3) postcard_address_pane_t1_ParamLimits

0x3c25,	// (0x000a8bc3) postcard_address_pane_t1

0x3c11,	// (0x000a8baf) popup_call3_audio_in_window_ParamLimits

0x3c11,	// (0x000a8baf) popup_call3_audio_in_window

0x3a9c,	// (0x000a8a3a) bg_popup_call3_in_pane_ParamLimits

0x3a9c,	// (0x000a8a3a) bg_popup_call3_in_pane

0x3b12,	// (0x000a8ab0) popup_call3_audio_in_window_g1_ParamLimits

0x3b12,	// (0x000a8ab0) popup_call3_audio_in_window_g1

0x3b32,	// (0x000a8ad0) popup_call3_audio_in_window_g2_ParamLimits

0x3b32,	// (0x000a8ad0) popup_call3_audio_in_window_g2

0x3b52,	// (0x000a8af0) popup_call3_audio_in_window_g3_ParamLimits

0x3b52,	// (0x000a8af0) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000b45b0) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000b45b0) popup_call3_audio_in_window_g

0x3b83,	// (0x000a8b21) popup_call3_audio_in_window_t1_ParamLimits

0x3b83,	// (0x000a8b21) popup_call3_audio_in_window_t1

0x3bc1,	// (0x000a8b5f) popup_call3_audio_in_window_t2_ParamLimits

0x3bc1,	// (0x000a8b5f) popup_call3_audio_in_window_t2

0x3bff,	// (0x000a8b9d) popup_call3_audio_in_window_t3_ParamLimits

0x3bff,	// (0x000a8b9d) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000b45b9) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000b45b9) popup_call3_audio_in_window_t

0xeea8,	// (0x000b3e46) bg_popup_call3_rect_pane

0xb836,	// (0x000b07d4) bg_popup_call3_rect_pane_g1

0xedc4,	// (0x000b3d62) bg_popup_call3_rect_pane_g2

0xb83e,	// (0x000b07dc) bg_popup_call3_rect_pane_g3

0xb846,	// (0x000b07e4) bg_popup_call3_rect_pane_g4

0xb84e,	// (0x000b07ec) bg_popup_call3_rect_pane_g5

0xb856,	// (0x000b07f4) bg_popup_call3_rect_pane_g6

0xb85e,	// (0x000b07fc) bg_popup_call3_rect_pane_g7

0x2aee,	// (0x000a7a8c) mup_visualizer_osc_pane

0xa6e8,	// (0x000af686) mup_visualizer_spec_pane

0x3acc,	// (0x000a8a6a) call3_video_qcif_pane_ParamLimits

0x3acc,	// (0x000a8a6a) call3_video_qcif_pane

0x3adf,	// (0x000a8a7d) call3_video_qcif_uncrop_pane_ParamLimits

0x3adf,	// (0x000a8a7d) call3_video_qcif_uncrop_pane

0x3aed,	// (0x000a8a8b) call3_video_subqcif_pane_ParamLimits

0x3aed,	// (0x000a8a8b) call3_video_subqcif_pane

0x3b01,	// (0x000a8a9f) call3_video_subqcif_uncrop_pane_ParamLimits

0x3b01,	// (0x000a8a9f) call3_video_subqcif_uncrop_pane

0x3b72,	// (0x000a8b10) popup_call3_audio_in_window_g4_ParamLimits

0x3b72,	// (0x000a8b10) popup_call3_audio_in_window_g4

0x3a8b,	// (0x000a8a29) mup_spec_half_pane

0x3a94,	// (0x000a8a32) mup_spec_half_pane_cp

0xba9b,	// (0x000b0a39) mup_osc_middle_pane

0xbaa4,	// (0x000b0a42) mup_visualizer_osc_pane_g1

0x3a6b,	// (0x000a8a09) mup_spec_bar_pane_ParamLimits

0x3a6b,	// (0x000a8a09) mup_spec_bar_pane

0xba88,	// (0x000b0a26) mup_spec_bar_pane_g1

0xba92,	// (0x000b0a30) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b45a4) mup_spec_bar_pane_g

0x09be,	// (0x000a595c) aid_cale_week_size_cell_pane_ParamLimits

0x09d8,	// (0x000a5976) bg_cale_heading_pane_ParamLimits

0xee01,	// (0x000b3d9f) bg_cale_pane_cp01_ParamLimits

0x09f0,	// (0x000a598e) cale_week_corner_pane_ParamLimits

0x0a0f,	// (0x000a59ad) cale_week_day_heading_pane_ParamLimits

0x0a2c,	// (0x000a59ca) cale_week_scroll_pane_g1_ParamLimits

0x0a3f,	// (0x000a59dd) cale_week_scroll_pane_g2_ParamLimits

0x0a57,	// (0x000a59f5) cale_week_scroll_pane_g3_ParamLimits

0x0a6f,	// (0x000a5a0d) cale_week_scroll_pane_g4_ParamLimits

0x0a87,	// (0x000a5a25) cale_week_scroll_pane_g5_ParamLimits

0x0aa7,	// (0x000a5a45) cale_week_scroll_pane_g6_ParamLimits

0x0ac7,	// (0x000a5a65) cale_week_scroll_pane_g7_ParamLimits

0x0ae7,	// (0x000a5a85) cale_week_scroll_pane_g8_ParamLimits

0x0b0b,	// (0x000a5aa9) cale_week_scroll_pane_g9_ParamLimits

0x0b23,	// (0x000a5ac1) cale_week_scroll_pane_g10_ParamLimits

0x0b3b,	// (0x000a5ad9) cale_week_scroll_pane_g11_ParamLimits

0x0b53,	// (0x000a5af1) cale_week_scroll_pane_g12_ParamLimits

0x0b6b,	// (0x000a5b09) cale_week_scroll_pane_g13_ParamLimits

0x0b6b,	// (0x000a5b09) cale_week_scroll_pane_g14_ParamLimits

0x0b6b,	// (0x000a5b09) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000b414e) cale_week_scroll_pane_g_ParamLimits

0x0ba7,	// (0x000a5b45) cale_week_time_pane_ParamLimits

0x0bcb,	// (0x000a5b69) grid_cale_week_pane_ParamLimits

0xee1e,	// (0x000b3dbc) listscroll_cale_week_pane_t1

0xee30,	// (0x000b3dce) scroll_pane_cp08_ParamLimits

0x1962,	// (0x000a6900) cale_month_corner_pane_ParamLimits

0x9880,	// (0x000ae81e) cale_month_pane_t1

0x1d6a,	// (0x000a6d08) cale_month_week_pane_ParamLimits

0x2609,	// (0x000a75a7) popup_call_status_window_g1_ParamLimits

0x261d,	// (0x000a75bb) popup_call_status_window_g2_ParamLimits

0x2631,	// (0x000a75cf) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000b42f4) popup_call_status_window_g_ParamLimits

0xa29f,	// (0x000af23d) aid_call2_pane

0x2d5b,	// (0x000a7cf9) msg_header_pane_g1

0x2f27,	// (0x000a7ec5) postcard_address2_pane_ParamLimits

0x2f27,	// (0x000a7ec5) postcard_address2_pane

0x2f39,	// (0x000a7ed7) postcard_message2_pane_ParamLimits

0x2f39,	// (0x000a7ed7) postcard_message2_pane

0x3a1d,	// (0x000a89bb) message2_row_pane_ParamLimits

0x3a1d,	// (0x000a89bb) message2_row_pane

0x3a39,	// (0x000a89d7) address2_row_pane_ParamLimits

0x3a39,	// (0x000a89d7) address2_row_pane

0xba56,	// (0x000b09f4) postcard_message2_row_pane_g1

0xba5e,	// (0x000b09fc) postcard_message2_row_pane_t1

0xba56,	// (0x000b09f4) address2_row_pane_g1

0xba5e,	// (0x000b09fc) address2_row_pane_t1

0x0fbe,	// (0x000a5f5c) aid_size_cell_vorec

0xe9c3,	// (0x000b3961) main_rss_pane

0x3a4c,	// (0x000a89ea) rss_list_single_pane_ParamLimits

0x3a4c,	// (0x000a89ea) rss_list_single_pane

0xba6c,	// (0x000b0a0a) rss_list_single_pane_t1

0xba7a,	// (0x000b0a18) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000b459f) rss_list_single_pane_t

0xe9c3,	// (0x000b3961) main_camera2_pane

0xe9c3,	// (0x000b3961) main_video2_pane

0x3cb5,	// (0x000a8c53) cams_zoom_pane_cp2_ParamLimits

0x3cb5,	// (0x000a8c53) cams_zoom_pane_cp2

0x3cd5,	// (0x000a8c73) image2_vga_pane_ParamLimits

0x3cd5,	// (0x000a8c73) image2_vga_pane

0x3d26,	// (0x000a8cc4) main_camera2_pane_g1_ParamLimits

0x3d26,	// (0x000a8cc4) main_camera2_pane_g1

0x3d46,	// (0x000a8ce4) main_camera2_pane_g2_ParamLimits

0x3d46,	// (0x000a8ce4) main_camera2_pane_g2

0x3d66,	// (0x000a8d04) main_camera2_pane_g3_ParamLimits

0x3d66,	// (0x000a8d04) main_camera2_pane_g3

0x3d86,	// (0x000a8d24) main_camera2_pane_g4_ParamLimits

0x3d86,	// (0x000a8d24) main_camera2_pane_g4

0x3da6,	// (0x000a8d44) main_camera2_pane_g5_ParamLimits

0x3da6,	// (0x000a8d44) main_camera2_pane_g5

0x3dc6,	// (0x000a8d64) main_camera2_pane_g6_ParamLimits

0x3dc6,	// (0x000a8d64) main_camera2_pane_g6

0x3de6,	// (0x000a8d84) main_camera2_pane_g7_ParamLimits

0x3de6,	// (0x000a8d84) main_camera2_pane_g7

0x3e06,	// (0x000a8da4) main_camera2_pane_g8_ParamLimits

0x3e06,	// (0x000a8da4) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000b45c0) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000b45c0) main_camera2_pane_g

0x3e46,	// (0x000a8de4) main_camera2_pane_t1_ParamLimits

0x3e46,	// (0x000a8de4) main_camera2_pane_t1

0x3e7b,	// (0x000a8e19) main_camera2_pane_t2_ParamLimits

0x3e7b,	// (0x000a8e19) main_camera2_pane_t2

0x3ea1,	// (0x000a8e3f) main_camera2_pane_t3_ParamLimits

0x3ea1,	// (0x000a8e3f) main_camera2_pane_t3

0x3eff,	// (0x000a8e9d) main_camera2_pane_t4_ParamLimits

0x3eff,	// (0x000a8e9d) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000b45d3) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000b45d3) main_camera2_pane_t

0x3f91,	// (0x000a8f2f) cams_zoom_pane_cp4_ParamLimits

0x3f91,	// (0x000a8f2f) cams_zoom_pane_cp4

0x3fa7,	// (0x000a8f45) image2_cif_pane_ParamLimits

0x3fa7,	// (0x000a8f45) image2_cif_pane

0x3fd2,	// (0x000a8f70) image2_subqcif_pane_ParamLimits

0x3fd2,	// (0x000a8f70) image2_subqcif_pane

0x3fec,	// (0x000a8f8a) main_video2_pane_g1_ParamLimits

0x3fec,	// (0x000a8f8a) main_video2_pane_g1

0x4006,	// (0x000a8fa4) main_video2_pane_g2_ParamLimits

0x4006,	// (0x000a8fa4) main_video2_pane_g2

0x401c,	// (0x000a8fba) main_video2_pane_g3_ParamLimits

0x401c,	// (0x000a8fba) main_video2_pane_g3

0x4032,	// (0x000a8fd0) main_video2_pane_g4_ParamLimits

0x4032,	// (0x000a8fd0) main_video2_pane_g4

0x4048,	// (0x000a8fe6) main_video2_pane_g5_ParamLimits

0x4048,	// (0x000a8fe6) main_video2_pane_g5

0x405e,	// (0x000a8ffc) main_video2_pane_g6_ParamLimits

0x405e,	// (0x000a8ffc) main_video2_pane_g6

0x0005,

0xf644,	// (0x000b45e2) main_video2_pane_g_ParamLimits

0xf644,	// (0x000b45e2) main_video2_pane_g

0x4078,	// (0x000a9016) main_video2_pane_t1_ParamLimits

0x4078,	// (0x000a9016) main_video2_pane_t1

0x409c,	// (0x000a903a) main_video2_pane_t2_ParamLimits

0x409c,	// (0x000a903a) main_video2_pane_t2

0x40ea,	// (0x000a9088) main_video2_pane_t3_ParamLimits

0x40ea,	// (0x000a9088) main_video2_pane_t3

0x0002,

0xf651,	// (0x000b45ef) main_video2_pane_t_ParamLimits

0xf651,	// (0x000b45ef) main_video2_pane_t

0x3557,	// (0x000a84f5) call_muted_g2

0x0001,

0xf5f3,	// (0x000b4591) call_muted_g

0xe9c3,	// (0x000b3961) main_mup2_pane

0x412e,	// (0x000a90cc) main_mup2_pane_g1_ParamLimits

0x412e,	// (0x000a90cc) main_mup2_pane_g1

0x413a,	// (0x000a90d8) main_mup2_pane_g2_ParamLimits

0x413a,	// (0x000a90d8) main_mup2_pane_g2

0x9d83,	// (0x000aed21) main_mup_pane_g13_cp1

0x9d8b,	// (0x000aed29) mup_volume_pane_cp1

0x4156,	// (0x000a90f4) main_mup2_pane_g4_ParamLimits

0x4156,	// (0x000a90f4) main_mup2_pane_g4

0x4168,	// (0x000a9106) main_mup2_pane_g5_ParamLimits

0x4168,	// (0x000a9106) main_mup2_pane_g5

0x417a,	// (0x000a9118) main_mup2_pane_g6_ParamLimits

0x417a,	// (0x000a9118) main_mup2_pane_g6

0x418c,	// (0x000a912a) main_mup2_pane_g7_ParamLimits

0x418c,	// (0x000a912a) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000b45f6) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000b45f6) main_mup2_pane_g

0x41a4,	// (0x000a9142) main_mup2_pane_t1_ParamLimits

0x41a4,	// (0x000a9142) main_mup2_pane_t1

0x41ba,	// (0x000a9158) main_mup2_pane_t2_ParamLimits

0x41ba,	// (0x000a9158) main_mup2_pane_t2

0x41d0,	// (0x000a916e) main_mup2_pane_t3_ParamLimits

0x41d0,	// (0x000a916e) main_mup2_pane_t3

0x41e6,	// (0x000a9184) main_mup2_pane_t4_ParamLimits

0x41e6,	// (0x000a9184) main_mup2_pane_t4

0x41fe,	// (0x000a919c) main_mup2_pane_t5_ParamLimits

0x41fe,	// (0x000a919c) main_mup2_pane_t5

0x4216,	// (0x000a91b4) main_mup2_pane_t6_ParamLimits

0x4216,	// (0x000a91b4) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000b4605) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000b4605) main_mup2_pane_t

0x4246,	// (0x000a91e4) mup2_visualizer_pane_ParamLimits

0x4246,	// (0x000a91e4) mup2_visualizer_pane

0x4274,	// (0x000a9212) mup_progress_pane_cp_ParamLimits

0x4274,	// (0x000a9212) mup_progress_pane_cp

0x9d6e,	// (0x000aed0c) mup_volume_pane_cp_ParamLimits

0x9d6e,	// (0x000aed0c) mup_volume_pane_cp

0x4288,	// (0x000a9226) mup2_visualizer_pane_g1_ParamLimits

0x4288,	// (0x000a9226) mup2_visualizer_pane_g1

0xbadb,	// (0x000b0a79) mup2_visualizer_pane_g2_ParamLimits

0xbadb,	// (0x000b0a79) mup2_visualizer_pane_g2

0x429f,	// (0x000a923d) mup2_visualizer_pane_g3_ParamLimits

0x429f,	// (0x000a923d) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000b4612) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000b4612) mup2_visualizer_pane_g

0xa90f,	// (0x000af8ad) aid_size_cell_fmradio

0x3709,	// (0x000a86a7) aid_height_parent_landcape

0x96de,	// (0x000ae67c) wml_content_pane_cp

0x96e6,	// (0x000ae684) wml_tabs_pane

0x96ef,	// (0x000ae68d) popup_wml_miniature_window

0x96f7,	// (0x000ae695) scroll_pane_cp021

0x970b,	// (0x000ae6a9) wml_content_pane_comp8

0xe9c3,	// (0x000b3961) bg_popup_sub_pane_cp05

0xbaf9,	// (0x000b0a97) popup_wml_miniature_window_g1

0xbb01,	// (0x000b0a9f) wml_miniature_view_pane

0x42ab,	// (0x000a9249) aid_size_wml_view

0x42b3,	// (0x000a9251) wml_miniature_view_pane_g1

0x42bc,	// (0x000a925a) wml_miniature_view_pane_g2

0x42c5,	// (0x000a9263) wml_miniature_view_pane_g3

0x42cd,	// (0x000a926b) wml_miniature_view_pane_g4

0x42d5,	// (0x000a9273) wml_miniature_view_pane_g5

0x42dd,	// (0x000a927b) wml_miniature_view_pane_g6

0x42e5,	// (0x000a9283) wml_miniature_view_pane_g7

0x42ed,	// (0x000a928b) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000b4619) wml_miniature_view_pane_g

0xbb09,	// (0x000b0aa7) background_graphic_ParamLimits

0xbb09,	// (0x000b0aa7) background_graphic

0xbb15,	// (0x000b0ab3) wml_tabs_2_pane

0xbb1e,	// (0x000b0abc) wml_tabs_3_pane_ParamLimits

0xbb1e,	// (0x000b0abc) wml_tabs_3_pane

0xbb30,	// (0x000b0ace) wml_tabs_4_pane_ParamLimits

0xbb30,	// (0x000b0ace) wml_tabs_4_pane

0xbb46,	// (0x000b0ae4) wml_tabs_5_pane_ParamLimits

0xbb46,	// (0x000b0ae4) wml_tabs_5_pane

0xbb60,	// (0x000b0afe) wml_tabs_pane_g2_ParamLimits

0xbb60,	// (0x000b0afe) wml_tabs_pane_g2

0xbb74,	// (0x000b0b12) wml_tabs_pane_g3_ParamLimits

0xbb74,	// (0x000b0b12) wml_tabs_pane_g3

0x42f5,	// (0x000a9293) wml_tabs_2_active_pane_ParamLimits

0x42f5,	// (0x000a9293) wml_tabs_2_active_pane

0x4309,	// (0x000a92a7) wml_tabs_2_passive_pane_ParamLimits

0x4309,	// (0x000a92a7) wml_tabs_2_passive_pane

0x431d,	// (0x000a92bb) wml_tabs_3_active_pane_cp_ParamLimits

0x431d,	// (0x000a92bb) wml_tabs_3_active_pane_cp

0x4332,	// (0x000a92d0) wml_tabs_3_passive_pane_ParamLimits

0x4332,	// (0x000a92d0) wml_tabs_3_passive_pane

0x4345,	// (0x000a92e3) wml_tabs_3_passive_pane_cp_ParamLimits

0x4345,	// (0x000a92e3) wml_tabs_3_passive_pane_cp

0x435c,	// (0x000a92fa) tabs_4_active_pane

0x4364,	// (0x000a9302) tabs_4_passive_pane

0x436e,	// (0x000a930c) tabs_4_passive_pane_cp

0x4376,	// (0x000a9314) tabs_4_passive_pane_cp2

0x3424,	// (0x000a83c2) aid_height_text

0x2ac4,	// (0x000a7a62) mup_volume_cont_pane_ParamLimits

0x2ac4,	// (0x000a7a62) mup_volume_cont_pane

0x059c,	// (0x000a553a) aid_size_cell_pinb

0x05a6,	// (0x000a5544) aid_size_list_pinb

0x4260,	// (0x000a91fe) mup2_volume_cont_pane_ParamLimits

0x4260,	// (0x000a91fe) mup2_volume_cont_pane

0x9d5a,	// (0x000aecf8) mup2_volume_cont_pane_g1_ParamLimits

0x9d5a,	// (0x000aecf8) mup2_volume_cont_pane_g1

0x0247,	// (0x000a51e5) aid_size_cell_touch_ParamLimits

0x0247,	// (0x000a51e5) aid_size_cell_touch

0x048c,	// (0x000a542a) touch_pane_ParamLimits

0x048c,	// (0x000a542a) touch_pane

0x94f5,	// (0x000ae493) main_rss2_pane

0xbb91,	// (0x000b0b2f) listscroll_rss2_pane

0xbb9a,	// (0x000b0b38) rss2_navigation_pane

0xbba2,	// (0x000b0b40) list_rss2_pane

0xa3e2,	// (0x000af380) scroll_pane_cp22

0xbbaa,	// (0x000b0b48) rss2_navigation_pane_g1

0xbbb3,	// (0x000b0b51) rss2_navigation_pane_g2

0xbbbb,	// (0x000b0b59) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000b462a) rss2_navigation_pane_g

0xbbc3,	// (0x000b0b61) rss2_navigation_pane_t1

0x4380,	// (0x000a931e) rss2_list_single_pane_ParamLimits

0x4380,	// (0x000a931e) rss2_list_single_pane

0xbbd1,	// (0x000b0b6f) rss2_list_single_pane_t2

0xbbdf,	// (0x000b0b7d) rss2_list_single_pane_t3_ParamLimits

0xbbdf,	// (0x000b0b7d) rss2_list_single_pane_t3

0xbbfc,	// (0x000b0b9a) rss2_list_single_pane_t4

0x2413,	// (0x000a73b1) smil_status_pane_g1

0x94e7,	// (0x000ae485) main_image2_pane_ParamLimits

0x94e7,	// (0x000ae485) main_image2_pane

0x3e26,	// (0x000a8dc4) main_camera2_pane_g9_ParamLimits

0x3e26,	// (0x000a8dc4) main_camera2_pane_g9

0x3f54,	// (0x000a8ef2) main_camera2_pane_t5_ParamLimits

0x3f54,	// (0x000a8ef2) main_camera2_pane_t5

0x9d2a,	// (0x000aecc8) main_camera2_pane_t6_ParamLimits

0x9d2a,	// (0x000aecc8) main_camera2_pane_t6

0x4395,	// (0x000a9333) main_image2_pane_g1_ParamLimits

0x4395,	// (0x000a9333) main_image2_pane_g1

0x3160,	// (0x000a80fe) smil2_video_pane_ParamLimits

0x3160,	// (0x000a80fe) smil2_video_pane

0x0287,	// (0x000a5225) aid_zoom_text_primary_cp

0x94dd,	// (0x000ae47b) popup_preview_fixed_window

0x9647,	// (0x000ae5e5) im_reading_pane_g1

0x3c9d,	// (0x000a8c3b) cams2_bc_adjust_pane_cp_ParamLimits

0x3c9d,	// (0x000a8c3b) cams2_bc_adjust_pane_cp

0x3f83,	// (0x000a8f21) cams2_bc_adjust_pane_ParamLimits

0x3f83,	// (0x000a8f21) cams2_bc_adjust_pane

0xcabc,	// (0x000b1a5a) cams2_bc_adjust_pane_g1

0x9d93,	// (0x000aed31) cams2_slider_pane

0x9d9c,	// (0x000aed3a) cams2_slider_pane_g1

0x9da5,	// (0x000aed43) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000b4631) cams2_slider_pane_g

0x0694,	// (0x000a5632) calc_display_pane_ParamLimits

0x06bc,	// (0x000a565a) calc_paper_pane_ParamLimits

0x06df,	// (0x000a567d) grid_calc_pane_ParamLimits

0x9c4f,	// (0x000aebed) popup_clock_digital_window_t1_ParamLimits

0xa8ac,	// (0x000af84a) main_image_pane_t1

0x0676,	// (0x000a5614) aid_size_cell_calc_ParamLimits

0x0676,	// (0x000a5614) aid_size_cell_calc

0x3761,	// (0x000a86ff) popup_blid_sat_info2_window_ParamLimits

0x3761,	// (0x000a86ff) popup_blid_sat_info2_window

0xbc12,	// (0x000b0bb0) aid_size_cell_blid

0xbc1a,	// (0x000b0bb8) bg_popup_window_pane_cp07

0xbc3d,	// (0x000b0bdb) grid_popup_blid_pane

0xbc47,	// (0x000b0be5) heading_pane_cp05_ParamLimits

0xbc47,	// (0x000b0be5) heading_pane_cp05

0xbd11,	// (0x000b0caf) cell_popup_blid_pane_ParamLimits

0xbd11,	// (0x000b0caf) cell_popup_blid_pane

0xbd35,	// (0x000b0cd3) cell_popup_blid_pane_g1

0xbd52,	// (0x000b0cf0) cell_popup_blid_pane_t1

0x4230,	// (0x000a91ce) mup2_indicator_pane_ParamLimits

0x4230,	// (0x000a91ce) mup2_indicator_pane

0xeea8,	// (0x000b3e46) mup2_visualizer_osc_pane

0xbae7,	// (0x000b0a85) mup2_visualizer_spec_pane_ParamLimits

0xbae7,	// (0x000b0a85) mup2_visualizer_spec_pane

0x43ab,	// (0x000a9349) mup2_spec_half_pane

0x43b4,	// (0x000a9352) mup2_spec_half_pane_cp

0x43bc,	// (0x000a935a) mup2_spec_bar_pane_ParamLimits

0x43bc,	// (0x000a935a) mup2_spec_bar_pane

0xba88,	// (0x000b0a26) mup2_spec_bar_pane_g1

0xba92,	// (0x000b0a30) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b45a4) mup2_spec_bar_pane_g

0x43dc,	// (0x000a937a) mup2_osc_middle_pane

0xbaa4,	// (0x000b0a42) mup2_visualizer_osc_pane_g1

0xe5d0,	// (0x000b356e) popup_number_entry_window_t1_ParamLimits

0xe5e3,	// (0x000b3581) popup_number_entry_window_t2_ParamLimits

0xe5f5,	// (0x000b3593) popup_number_entry_window_t3_ParamLimits

0x04de,	// (0x000a547c) popup_number_entry_window_t5_ParamLimits

0x04de,	// (0x000a547c) popup_number_entry_window_t5

0xf0ca,	// (0x000b4068) popup_number_entry_window_t_ParamLimits

0xe607,	// (0x000b35a5) text_title_cp2_ParamLimits

0x9c8e,	// (0x000aec2c) aid_hotspot_pointer_text2_pane

0x9ca8,	// (0x000aec46) main_viewer_pane_g9_ParamLimits

0x9ca8,	// (0x000aec46) main_viewer_pane_g9

0x9880,	// (0x000ae81e) cale_month_pane_t1_ParamLimits

0x98eb,	// (0x000ae889) bg_cale_pane_ParamLimits

0x9903,	// (0x000ae8a1) list_cale_pane_ParamLimits

0x9914,	// (0x000ae8b2) listscroll_cale_day_pane_t1

0x9926,	// (0x000ae8c4) scroll_pane_cp09_ParamLimits

0x2af6,	// (0x000a7a94) main_mup_eq_pane_t1_ParamLimits

0x2af6,	// (0x000a7a94) main_mup_eq_pane_t1

0x2b10,	// (0x000a7aae) main_mup_eq_pane_t2_ParamLimits

0x2b10,	// (0x000a7aae) main_mup_eq_pane_t2

0x2b2a,	// (0x000a7ac8) main_mup_eq_pane_t3_ParamLimits

0x2b2a,	// (0x000a7ac8) main_mup_eq_pane_t3

0x2b46,	// (0x000a7ae4) main_mup_eq_pane_t4_ParamLimits

0x2b46,	// (0x000a7ae4) main_mup_eq_pane_t4

0x2b62,	// (0x000a7b00) main_mup_eq_pane_t5_ParamLimits

0x2b62,	// (0x000a7b00) main_mup_eq_pane_t5

0x2b7e,	// (0x000a7b1c) main_mup_eq_pane_t6_ParamLimits

0x2b7e,	// (0x000a7b1c) main_mup_eq_pane_t6

0x2b92,	// (0x000a7b30) main_mup_eq_pane_t7_ParamLimits

0x2b92,	// (0x000a7b30) main_mup_eq_pane_t7

0x2ba6,	// (0x000a7b44) main_mup_eq_pane_t8_ParamLimits

0x2ba6,	// (0x000a7b44) main_mup_eq_pane_t8

0x2bba,	// (0x000a7b58) main_mup_eq_pane_t9_ParamLimits

0x2bba,	// (0x000a7b58) main_mup_eq_pane_t9

0x2bd4,	// (0x000a7b72) main_mup_eq_pane_t10_ParamLimits

0x2bd4,	// (0x000a7b72) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000b43f3) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000b43f3) main_mup_eq_pane_t

0x2c83,	// (0x000a7c21) mup_equalizer_pane_cp5_ParamLimits

0x2c97,	// (0x000a7c35) mup_equalizer_pane_cp6_ParamLimits

0x2cab,	// (0x000a7c49) mup_equalizer_pane_cp7_ParamLimits

0x94f5,	// (0x000ae493) main_gallery_pane

0xbaad,	// (0x000b0a4b) smil2_volume_pane

0xbab5,	// (0x000b0a53) smil_status_volume_pane_g1_ParamLimits

0xbac8,	// (0x000b0a66) smil_status_volume_pane_g2_ParamLimits

0x9d08,	// (0x000aeca6) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000b45a9) smil_status_volume_pane_g_ParamLimits

0xbc1a,	// (0x000b0bb8) bg_popup_window_pane_cp07_ParamLimits

0xbc28,	// (0x000b0bc6) blid_firmament_pane

0x43e5,	// (0x000a9383) aid_size_cell_gallery_ParamLimits

0x43e5,	// (0x000a9383) aid_size_cell_gallery

0x43fb,	// (0x000a9399) grid_gallery_pane_ParamLimits

0x43fb,	// (0x000a9399) grid_gallery_pane

0x4414,	// (0x000a93b2) cell_gallery_pane_ParamLimits

0x4414,	// (0x000a93b2) cell_gallery_pane

0xbd60,	// (0x000b0cfe) bg_cell_gallery_focus_pane_ParamLimits

0xbd60,	// (0x000b0cfe) bg_cell_gallery_focus_pane

0xbd72,	// (0x000b0d10) cell_gallery_pane_g1_ParamLimits

0xbd72,	// (0x000b0d10) cell_gallery_pane_g1

0x445d,	// (0x000a93fb) cell_gallery_pane_g2_ParamLimits

0x445d,	// (0x000a93fb) cell_gallery_pane_g2

0x446a,	// (0x000a9408) cell_gallery_pane_g3_ParamLimits

0x446a,	// (0x000a9408) cell_gallery_pane_g3

0xbd7e,	// (0x000b0d1c) cell_gallery_pane_g4_ParamLimits

0xbd7e,	// (0x000b0d1c) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000b4657) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000b4657) cell_gallery_pane_g

0xbd8a,	// (0x000b0d28) bg_cell_gallery_focus_pane_g1

0xbd92,	// (0x000b0d30) bg_cell_gallery_focus_pane_g2

0xbd9a,	// (0x000b0d38) bg_cell_gallery_focus_pane_g3

0xbda2,	// (0x000b0d40) bg_cell_gallery_focus_pane_g4

0xbdaa,	// (0x000b0d48) bg_cell_gallery_focus_pane_g5

0xbdb2,	// (0x000b0d50) bg_cell_gallery_focus_pane_g6

0xbdba,	// (0x000b0d58) bg_cell_gallery_focus_pane_g7

0xbdc2,	// (0x000b0d60) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000b4660) bg_cell_gallery_focus_pane_g

0xbdca,	// (0x000b0d68) aid_firma_cardinal

0xbdde,	// (0x000b0d7c) blid_firmament_pane_t1

0xbdf5,	// (0x000b0d93) blid_firmament_pane_t2

0xbe0c,	// (0x000b0daa) blid_firmament_pane_t3

0xbe23,	// (0x000b0dc1) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000b4671) blid_firmament_pane_t

0xbe3a,	// (0x000b0dd8) blid_sat_info_pane

0xbe4a,	// (0x000b0de8) blid_sat_info_pane_g1

0xbe4a,	// (0x000b0de8) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000b467a) blid_sat_info_pane_g

0xbe54,	// (0x000b0df2) blid_sat_info_pane_t1

0xbe62,	// (0x000b0e00) smil2_volume_content_pane

0xbe6b,	// (0x000b0e09) smil2_volume_pane_g1

0xbe73,	// (0x000b0e11) smil2_volume_content_pane_g1

0xbe7c,	// (0x000b0e1a) smil2_volume_content_pane_g2

0xbe85,	// (0x000b0e23) smil2_volume_content_pane_g3

0xbe8e,	// (0x000b0e2c) smil2_volume_content_pane_g4

0xbe97,	// (0x000b0e35) smil2_volume_content_pane_g5

0xbea0,	// (0x000b0e3e) smil2_volume_content_pane_g6

0xbea9,	// (0x000b0e47) smil2_volume_content_pane_g7

0xbeb2,	// (0x000b0e50) smil2_volume_content_pane_g8

0xbebb,	// (0x000b0e59) smil2_volume_content_pane_g9

0xbec4,	// (0x000b0e62) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000b467f) smil2_volume_content_pane_g

0x0c7f,	// (0x000a5c1d) cale_week_day_heading_pane_t1_ParamLimits

0x0cc4,	// (0x000a5c62) cale_week_day_heading_pane_t2_ParamLimits

0x0d0e,	// (0x000a5cac) cale_week_day_heading_pane_t3_ParamLimits

0x0d58,	// (0x000a5cf6) cale_week_day_heading_pane_t4_ParamLimits

0x0da2,	// (0x000a5d40) cale_week_day_heading_pane_t5_ParamLimits

0x0df4,	// (0x000a5d92) cale_week_day_heading_pane_t6_ParamLimits

0x0e46,	// (0x000a5de4) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000b416f) cale_week_day_heading_pane_t_ParamLimits

0xee4d,	// (0x000b3deb) bg_cale_side_pane_ParamLimits

0x0e8b,	// (0x000a5e29) cale_week_time_pane_t1_ParamLimits

0x0ea5,	// (0x000a5e43) cale_week_time_pane_t2_ParamLimits

0x0ebf,	// (0x000a5e5d) cale_week_time_pane_t3_ParamLimits

0x0ed9,	// (0x000a5e77) cale_week_time_pane_t4_ParamLimits

0x0ef3,	// (0x000a5e91) cale_week_time_pane_t5_ParamLimits

0x0f0d,	// (0x000a5eab) cale_week_time_pane_t6_ParamLimits

0x0f27,	// (0x000a5ec5) cale_week_time_pane_t7_ParamLimits

0x0f41,	// (0x000a5edf) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000b417e) cale_week_time_pane_t_ParamLimits

0x0f61,	// (0x000a5eff) cell_cale_week_pane_g2_ParamLimits

0xee4d,	// (0x000b3deb) bg_cale_side_pane_cp01_ParamLimits

0x21f4,	// (0x000a7192) cale_month_week_pane_t1_ParamLimits

0x220d,	// (0x000a71ab) cale_month_week_pane_t2_ParamLimits

0x2226,	// (0x000a71c4) cale_month_week_pane_t3_ParamLimits

0x223f,	// (0x000a71dd) cale_month_week_pane_t4_ParamLimits

0x2258,	// (0x000a71f6) cale_month_week_pane_t5_ParamLimits

0x2271,	// (0x000a720f) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000b4253) cale_month_week_pane_t_ParamLimits

0x9892,	// (0x000ae830) cell_cale_month_pane_g1_ParamLimits

0x94f5,	// (0x000ae493) main_cale_event_viewer_pane

0xe5a6,	// (0x000b3544) listscroll_cale_event_viewer_pane

0xbecd,	// (0x000b0e6b) list_cale_ev_pane

0xbed5,	// (0x000b0e73) scroll_pane_cp023

0xbee1,	// (0x000b0e7f) field_cale_ev_pane_ParamLimits

0xbee1,	// (0x000b0e7f) field_cale_ev_pane

0xbeff,	// (0x000b0e9d) field_cale_ev_content_pane_ParamLimits

0xbeff,	// (0x000b0e9d) field_cale_ev_content_pane

0xbf0b,	// (0x000b0ea9) field_cale_ev_pane_g1_ParamLimits

0xbf0b,	// (0x000b0ea9) field_cale_ev_pane_g1

0xbf17,	// (0x000b0eb5) field_cale_ev_pane_g2_ParamLimits

0xbf17,	// (0x000b0eb5) field_cale_ev_pane_g2

0xbf2f,	// (0x000b0ecd) field_cale_ev_pane_g3_ParamLimits

0xbf2f,	// (0x000b0ecd) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000b4694) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000b4694) field_cale_ev_pane_g

0xbf47,	// (0x000b0ee5) field_cale_ev_pane_t1_ParamLimits

0xbf47,	// (0x000b0ee5) field_cale_ev_pane_t1

0xbf5e,	// (0x000b0efc) field_cale_ev_content_pane_t1_ParamLimits

0xbf5e,	// (0x000b0efc) field_cale_ev_content_pane_t1

0xa792,	// (0x000af730) bg_button_pane_cp01

0x09ac,	// (0x000a594a) listscroll_cale_week_pane_ParamLimits

0xedf8,	// (0x000b3d96) popup_toolbar_window_cp01

0xee1e,	// (0x000b3dbc) listscroll_cale_week_pane_t1_ParamLimits

0x09ac,	// (0x000a594a) listscroll_cale_day_pane_ParamLimits

0xedf8,	// (0x000b3d96) popup_toolbar_window_cp02

0x9914,	// (0x000ae8b2) listscroll_cale_day_pane_t1_ParamLimits

0x3727,	// (0x000a86c5) main_cale_month_pane_ParamLimits

0x9cf3,	// (0x000aec91) popup_toolbar_window_cp03_ParamLimits

0x9cf3,	// (0x000aec91) popup_toolbar_window_cp03

0x3028,	// (0x000a7fc6) main_image_pane_g2_ParamLimits

0x3028,	// (0x000a7fc6) main_image_pane_g2

0x3039,	// (0x000a7fd7) main_image_pane_g3_ParamLimits

0x3039,	// (0x000a7fd7) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000b4485) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000b4485) main_image_pane_g

0xa8ac,	// (0x000af84a) main_image_pane_t1_ParamLimits

0x304a,	// (0x000a7fe8) main_image_pane_t2_ParamLimits

0x304a,	// (0x000a7fe8) main_image_pane_t2

0x305c,	// (0x000a7ffa) main_image_pane_t3_ParamLimits

0x305c,	// (0x000a7ffa) main_image_pane_t3

0x3084,	// (0x000a8022) main_image_pane_t4_ParamLimits

0x3084,	// (0x000a8022) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000b448c) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000b448c) main_image_pane_t

0x30a4,	// (0x000a8042) popup_image_details_window_cp01

0x30ae,	// (0x000a804c) popup_toobar_trans_pane_cp01_ParamLimits

0x30ae,	// (0x000a804c) popup_toobar_trans_pane_cp01

0x3840,	// (0x000a87de) popup_image_details_window_ParamLimits

0x3840,	// (0x000a87de) popup_image_details_window

0x9cc6,	// (0x000aec64) popup_image_focus_window

0x3c57,	// (0x000a8bf5) camera2_autofocus_pane_ParamLimits

0x3c57,	// (0x000a8bf5) camera2_autofocus_pane

0xe5a6,	// (0x000b3544) bg_popup_sub_pane_cp06

0xbf7c,	// (0x000b0f1a) popup_image_focus_window_g1

0xbf84,	// (0x000b0f22) popup_image_focus_window_g2

0xbf8c,	// (0x000b0f2a) popup_image_focus_window_g3

0xbf94,	// (0x000b0f32) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000b469b) popup_image_focus_window_g

0xbf9c,	// (0x000b0f3a) popup_image_focus_window_t1

0xbfaa,	// (0x000b0f48) popup_image_focus_window_t2

0xbfba,	// (0x000b0f58) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000b46a4) popup_image_focus_window_t

0xbfc8,	// (0x000b0f66) camera2_autofocus_pane_g1

0xeef1,	// (0x000b3e8f) bg_tb_trans_pane_cp01

0xbfd6,	// (0x000b0f74) popup_image_details_window_g1

0xbfe9,	// (0x000b0f87) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000b46b6) popup_image_details_window_g

0xc012,	// (0x000b0fb0) popup_image_details_window_t1

0xc024,	// (0x000b0fc2) popup_image_details_window_t2

0xc03d,	// (0x000b0fdb) popup_image_details_window_t3

0xc051,	// (0x000b0fef) popup_image_details_window_t4

0xc06c,	// (0x000b100a) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000b46bd) popup_image_details_window_t

0xeccf,	// (0x000b3c6d) bg_calc_paper_pane_ParamLimits

0x94f5,	// (0x000ae493) grid_highlight_pane_cp013

0x9507,	// (0x000ae4a5) list_calc_pane_ParamLimits

0x9519,	// (0x000ae4b7) scroll_pane_cp024

0xece3,	// (0x000b3c81) bg_calc_display_pane_ParamLimits

0x07dd,	// (0x000a577b) calc_display_pane_t1_ParamLimits

0x07ef,	// (0x000a578d) calc_display_pane_t2_ParamLimits

0x9521,	// (0x000ae4bf) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000b40ef) calc_display_pane_t_ParamLimits

0x08a9,	// (0x000a5847) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000b410c) cell_calc_pane_g

0x08b2,	// (0x000a5850) cell_calc_pane_t1

0xed42,	// (0x000b3ce0) grid_highlight_pane_cp02_ParamLimits

0xed58,	// (0x000b3cf6) toolbar_button_pane_cp01_ParamLimits

0xed58,	// (0x000b3cf6) toolbar_button_pane_cp01

0xa8f1,	// (0x000af88f) temp_image_control_pane_ParamLimits

0xa8f1,	// (0x000af88f) temp_image_control_pane

0x94e7,	// (0x000ae485) main_mp3_pane

0xc086,	// (0x000b1024) temp_image_control_pane_g1_ParamLimits

0xc086,	// (0x000b1024) temp_image_control_pane_g1

0xc094,	// (0x000b1032) temp_image_control_pane_g2_ParamLimits

0xc094,	// (0x000b1032) temp_image_control_pane_g2

0xc0a6,	// (0x000b1044) temp_image_control_pane_g3_ParamLimits

0xc0a6,	// (0x000b1044) temp_image_control_pane_g3

0x44a7,	// (0x000a9445) temp_image_control_pane_g4_ParamLimits

0x44a7,	// (0x000a9445) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000b46c8) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000b46c8) temp_image_control_pane_g

0xc086,	// (0x000b1024) main_mp3_pane_g1

0x44ba,	// (0x000a9458) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000b46d1) main_mp3_pane_g

0xc0e9,	// (0x000b1087) main_mp3_pane_t1

0xeeb0,	// (0x000b3e4e) main_camera_pane_g8_ParamLimits

0xeeb0,	// (0x000b3e4e) main_camera_pane_g8

0x125b,	// (0x000a61f9) main_video_pane_g7_ParamLimits

0x125b,	// (0x000a61f9) main_video_pane_g7

0x9d48,	// (0x000aece6) main_camera2_pane_t7_ParamLimits

0x9d48,	// (0x000aece6) main_camera2_pane_t7

0x969e,	// (0x000ae63c) scroll_pane_cp025_ParamLimits

0x969e,	// (0x000ae63c) scroll_pane_cp025

0x96b2,	// (0x000ae650) scroll_pane_cp026_ParamLimits

0x96b2,	// (0x000ae650) scroll_pane_cp026

0x96c1,	// (0x000ae65f) wml_content_pane_ParamLimits

0x94f5,	// (0x000ae493) main_touch_calib_pane

0x458e,	// (0x000a952c) main_touch_calib_pane_g1

0x45a0,	// (0x000a953e) main_touch_calib_pane_g2

0x45b2,	// (0x000a9550) main_touch_calib_pane_g3

0x45c4,	// (0x000a9562) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000b46ef) main_touch_calib_pane_g

0x45d6,	// (0x000a9574) main_touch_calib_pane_t1

0x45f0,	// (0x000a958e) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000b46f8) main_touch_calib_pane_t

0xa4be,	// (0x000af45c) mup_progress_pane_cp02

0xa4f3,	// (0x000af491) navi_pane_g1

0xa5ae,	// (0x000af54c) navi_pane_mp_t3

0x94e7,	// (0x000ae485) main_mp3_pane_ParamLimits

0x39c5,	// (0x000a8963) navi_pane_ParamLimits

0xc086,	// (0x000b1024) main_mp3_pane_g1_ParamLimits

0x44ba,	// (0x000a9458) main_mp3_pane_g2_ParamLimits

0x44c8,	// (0x000a9466) main_mp3_pane_g3_ParamLimits

0x44c8,	// (0x000a9466) main_mp3_pane_g3

0x44d6,	// (0x000a9474) main_mp3_pane_g4_ParamLimits

0x44d6,	// (0x000a9474) main_mp3_pane_g4

0xc0b6,	// (0x000b1054) main_mp3_pane_g5_ParamLimits

0xc0b6,	// (0x000b1054) main_mp3_pane_g5

0xc0c4,	// (0x000b1062) main_mp3_pane_g6_ParamLimits

0xc0c4,	// (0x000b1062) main_mp3_pane_g6

0xc0d1,	// (0x000b106f) main_mp3_pane_g7_ParamLimits

0xc0d1,	// (0x000b106f) main_mp3_pane_g7

0xc0dd,	// (0x000b107b) main_mp3_pane_g8_ParamLimits

0xc0dd,	// (0x000b107b) main_mp3_pane_g8

0xf733,	// (0x000b46d1) main_mp3_pane_g_ParamLimits

0x44e2,	// (0x000a9480) main_mp3_pane_t2

0x44f0,	// (0x000a948e) main_mp3_pane_t3

0xc0f7,	// (0x000b1095) main_mp3_pane_t4

0xc105,	// (0x000b10a3) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000b46e2) main_mp3_pane_t

0xc113,	// (0x000b10b1) mup_progress_pane_cp01

0x0287,	// (0x000a5225) aid_zoom_text_secondary2

0xbecd,	// (0x000b0e6b) list_cale_ev2_pane

0xbed5,	// (0x000b0e73) scroll_pane_cp023_ParamLimits

0x4646,	// (0x000a95e4) field_cale_ev2_pane_ParamLimits

0x4646,	// (0x000a95e4) field_cale_ev2_pane

0x4666,	// (0x000a9604) field_cale_ev2_pane_g1_ParamLimits

0x4666,	// (0x000a9604) field_cale_ev2_pane_g1

0x4672,	// (0x000a9610) field_cale_ev2_pane_g2_ParamLimits

0x4672,	// (0x000a9610) field_cale_ev2_pane_g2

0x468a,	// (0x000a9628) field_cale_ev2_pane_g3_ParamLimits

0x468a,	// (0x000a9628) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000b4703) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000b4703) field_cale_ev2_pane_g

0xc127,	// (0x000b10c5) field_cale_ev2_pane_t1_ParamLimits

0xc127,	// (0x000b10c5) field_cale_ev2_pane_t1

0xc13e,	// (0x000b10dc) field_cale_ev2_pane_t2_ParamLimits

0xc13e,	// (0x000b10dc) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000b470c) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000b470c) field_cale_ev2_pane_t

0x2edd,	// (0x000a7e7b) main_postcard_pane_g5_ParamLimits

0x2edd,	// (0x000a7e7b) main_postcard_pane_g5

0x2ef3,	// (0x000a7e91) main_postcard_pane_g6_ParamLimits

0x2ef3,	// (0x000a7e91) main_postcard_pane_g6

0x1027,	// (0x000a5fc5) camera2_autofocus_pane_cp_ParamLimits

0x1027,	// (0x000a5fc5) camera2_autofocus_pane_cp

0x94e7,	// (0x000ae485) main_mup3_pane

0x46a2,	// (0x000a9640) main_mup3_pane_g1_ParamLimits

0x46a2,	// (0x000a9640) main_mup3_pane_g1

0x46c4,	// (0x000a9662) main_mup3_pane_g2_ParamLimits

0x46c4,	// (0x000a9662) main_mup3_pane_g2

0x4742,	// (0x000a96e0) main_mup3_pane_g3_ParamLimits

0x4742,	// (0x000a96e0) main_mup3_pane_g3

0x4788,	// (0x000a9726) main_mup3_pane_g4_ParamLimits

0x4788,	// (0x000a9726) main_mup3_pane_g4

0x47ce,	// (0x000a976c) main_mup3_pane_g5_ParamLimits

0x47ce,	// (0x000a976c) main_mup3_pane_g5

0x4814,	// (0x000a97b2) main_mup3_pane_g6_ParamLimits

0x4814,	// (0x000a97b2) main_mup3_pane_g6

0xc173,	// (0x000b1111) main_mup3_pane_g7_ParamLimits

0xc173,	// (0x000b1111) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000b471c) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000b471c) main_mup3_pane_g

0x4892,	// (0x000a9830) main_mup3_pane_t1_ParamLimits

0x4892,	// (0x000a9830) main_mup3_pane_t1

0x4906,	// (0x000a98a4) main_mup3_pane_t2_ParamLimits

0x4906,	// (0x000a98a4) main_mup3_pane_t2

0x49da,	// (0x000a9978) main_mup3_pane_t4_ParamLimits

0x49da,	// (0x000a9978) main_mup3_pane_t4

0x4a30,	// (0x000a99ce) main_mup3_pane_t5_ParamLimits

0x4a30,	// (0x000a99ce) main_mup3_pane_t5

0x4aec,	// (0x000a9a8a) main_mup3_pane_t6_ParamLimits

0x4aec,	// (0x000a9a8a) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000b472d) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000b472d) main_mup3_pane_t

0x4ba4,	// (0x000a9b42) mup3_progress_pane_ParamLimits

0x4ba4,	// (0x000a9b42) mup3_progress_pane

0x4c3a,	// (0x000a9bd8) popup_mup3_control_window_ParamLimits

0x4c3a,	// (0x000a9bd8) popup_mup3_control_window

0xc181,	// (0x000b111f) popup_mup3_text_window

0x4c6c,	// (0x000a9c0a) mup3_progress_pane_t1

0x4c8b,	// (0x000a9c29) mup3_progress_pane_t2

0xc189,	// (0x000b1127) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000b473a) mup3_progress_pane_t

0xc1a6,	// (0x000b1144) mup_progress_pane_cp03

0xe5a6,	// (0x000b3544) bg_tb_trans_pane_cp04

0x4caa,	// (0x000a9c48) mup3_volume_pane

0x4cb2,	// (0x000a9c50) popup_mup3_control_window_g1

0x4cbb,	// (0x000a9c59) mup3_volume_pane_g1

0x4cc4,	// (0x000a9c62) mup3_volume_pane_g2

0x4ccd,	// (0x000a9c6b) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000b4741) mup3_volume_pane_g

0xe5a6,	// (0x000b3544) bg_tb_trans_pane_cp03

0xc1b6,	// (0x000b1154) popup_mup3_text_window_g1

0xc1be,	// (0x000b115c) popup_mup3_text_window_t1

0xed2b,	// (0x000b3cc9) list_calc_item_pane_g1_ParamLimits

0xbb88,	// (0x000b0b26) mup_volume_pane_cp_g1

0x460a,	// (0x000a95a8) main_touch_calib_pane_t3

0x461e,	// (0x000a95bc) main_touch_calib_pane_t4

0x4632,	// (0x000a95d0) main_touch_calib_pane_t5

0x0233,	// (0x000a51d1) aid_cell_size_toolbar2

0x023b,	// (0x000a51d9) aid_popup3_width_pane

0x0277,	// (0x000a5215) aid_zoom_text_msg_primary

0x1006,	// (0x000a5fa4) vorec_t7

0xecef,	// (0x000b3c8d) bg_calc_paper_pane_g1_ParamLimits

0xecfb,	// (0x000b3c99) bg_calc_paper_pane_g2_ParamLimits

0xed07,	// (0x000b3ca5) bg_calc_paper_pane_g3_ParamLimits

0xed13,	// (0x000b3cb1) bg_calc_paper_pane_g4_ParamLimits

0xed1f,	// (0x000b3cbd) bg_calc_paper_pane_g5_ParamLimits

0x0836,	// (0x000a57d4) bg_calc_paper_pane_g6_ParamLimits

0x0845,	// (0x000a57e3) bg_calc_paper_pane_g7_ParamLimits

0x0854,	// (0x000a57f2) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000b40f6) bg_calc_paper_pane_g_ParamLimits

0x0867,	// (0x000a5805) calc_bg_paper_pane_g9_ParamLimits

0x1172,	// (0x000a6110) image_qvga_pane_ParamLimits

0x1172,	// (0x000a6110) image_qvga_pane

0xec1e,	// (0x000b3bbc) bg_popup_sub_pane_cp04_ParamLimits

0xa828,	// (0x000af7c6) popup_mup_playback_window_g1_ParamLimits

0xa834,	// (0x000af7d2) popup_mup_playback_window_t1_ParamLimits

0xa849,	// (0x000af7e7) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000b4480) popup_mup_playback_window_t_ParamLimits

0x414a,	// (0x000a90e8) main_mup2_pane_g3_ParamLimits

0x414a,	// (0x000a90e8) main_mup2_pane_g3

0x1564,	// (0x000a6502) popup_toolbar_window_cp04

0xac2b,	// (0x000afbc9) popup_call2_audio_second_window_g3_ParamLimits

0xac2b,	// (0x000afbc9) popup_call2_audio_second_window_g3

0xb041,	// (0x000affdf) popup_call2_audio_first_window_g4_ParamLimits

0xb041,	// (0x000affdf) popup_call2_audio_first_window_g4

0xb6c0,	// (0x000b065e) popup_call2_audio_in_window_g4_ParamLimits

0xb6c0,	// (0x000b065e) popup_call2_audio_in_window_g4

0x300a,	// (0x000a7fa8) aid_area_sk_bg_cut_ParamLimits

0x300a,	// (0x000a7fa8) aid_area_sk_bg_cut

0xa85e,	// (0x000af7fc) aid_area_sk_bg_cut_2_ParamLimits

0xa85e,	// (0x000af7fc) aid_area_sk_bg_cut_2

0x444d,	// (0x000a93eb) aid_placing_details_win

0x4455,	// (0x000a93f3) aid_placing_details_win_2

0xbfc8,	// (0x000b0f66) camera2_autofocus_pane_g1_ParamLimits

0x0425,	// (0x000a53c3) popup_fixed_preview_cale_window_ParamLimits

0x0425,	// (0x000a53c3) popup_fixed_preview_cale_window

0xa62c,	// (0x000af5ca) navi_slider_pane_g3

0xa635,	// (0x000af5d3) navi_slider_pane_g4

0xa63e,	// (0x000af5dc) navi_slider_pane_g5

0xa62c,	// (0x000af5ca) navi_slider_pane_g6

0x9c75,	// (0x000aec13) navi_slider_pane_g7

0xa75f,	// (0x000af6fd) mup_scale_pane_g3

0xa768,	// (0x000af706) mup_scale_pane_g4

0xa771,	// (0x000af70f) mup_scale_pane_g5

0x2cbf,	// (0x000a7c5d) mup_scale_pane_g6

0x2cc8,	// (0x000a7c66) mup_scale_pane_g7

0xa62c,	// (0x000af5ca) cams2_slider_pane_g3

0xbc0a,	// (0x000b0ba8) cams2_slider_pane_g4

0x9dae,	// (0x000aed4c) cams2_slider_pane_g5

0xa62c,	// (0x000af5ca) cams2_slider_pane_g6

0x9db6,	// (0x000aed54) cams2_slider_pane_g7

0xbe4a,	// (0x000b0de8) camera2_autofocus_pane_cp_g1

0xba21,	// (0x000b09bf) bg_popup_preview_window_pane_cp02_ParamLimits

0xba21,	// (0x000b09bf) bg_popup_preview_window_pane_cp02

0xc1cc,	// (0x000b116a) list_fp_cale_pane_ParamLimits

0xc1cc,	// (0x000b116a) list_fp_cale_pane

0xc1d8,	// (0x000b1176) popup_fixed_preview_cale_window_t1_ParamLimits

0xc1d8,	// (0x000b1176) popup_fixed_preview_cale_window_t1

0x4cd6,	// (0x000a9c74) popup_fixed_preview_cale_window_t2_ParamLimits

0x4cd6,	// (0x000a9c74) popup_fixed_preview_cale_window_t2

0x4ceb,	// (0x000a9c89) popup_fixed_preview_cale_window_t3_ParamLimits

0x4ceb,	// (0x000a9c89) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000b4748) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000b4748) popup_fixed_preview_cale_window_t

0x4d00,	// (0x000a9c9e) list_single_fp_cale_pane_ParamLimits

0x4d00,	// (0x000a9c9e) list_single_fp_cale_pane

0xc1f6,	// (0x000b1194) list_single_fp_cale_pane_g1_ParamLimits

0xc1f6,	// (0x000b1194) list_single_fp_cale_pane_g1

0xc202,	// (0x000b11a0) list_single_fp_cale_pane_g2_ParamLimits

0xc202,	// (0x000b11a0) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000b474f) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000b474f) list_single_fp_cale_pane_g

0xc21b,	// (0x000b11b9) list_single_fp_cale_pane_t1_ParamLimits

0xc21b,	// (0x000b11b9) list_single_fp_cale_pane_t1

0xc22d,	// (0x000b11cb) list_single_fp_cale_pane_t2_ParamLimits

0xc22d,	// (0x000b11cb) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000b4756) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000b4756) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x94f5,	// (0x000ae493) main_dialer_pane

0x4d15,	// (0x000a9cb3) aid_cell_size_keypad

0x4d1f,	// (0x000a9cbd) dialer_ne_pane

0x4d27,	// (0x000a9cc5) grid_dialer_command_1_pane

0x4d2f,	// (0x000a9ccd) grid_dialer_command_2_pane

0x4d37,	// (0x000a9cd5) grid_dialer_keypad_pane

0x4d49,	// (0x000a9ce7) bg_popup_call_pane_cp06_ParamLimits

0x4d49,	// (0x000a9ce7) bg_popup_call_pane_cp06

0x4d55,	// (0x000a9cf3) dialer_ne_clear_pane_ParamLimits

0x4d55,	// (0x000a9cf3) dialer_ne_clear_pane

0xc260,	// (0x000b11fe) dialer_ne_pane_g1

0xc268,	// (0x000b1206) dialer_ne_pane_t1_ParamLimits

0xc268,	// (0x000b1206) dialer_ne_pane_t1

0x4d61,	// (0x000a9cff) dialer_ne_pane_t2_ParamLimits

0x4d61,	// (0x000a9cff) dialer_ne_pane_t2

0x4d8b,	// (0x000a9d29) dialer_ne_pane_t3_ParamLimits

0x4d8b,	// (0x000a9d29) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000b475b) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000b475b) dialer_ne_pane_t

0x4dbb,	// (0x000a9d59) dialer_ne_pane_t3_copy1_ParamLimits

0x4dbb,	// (0x000a9d59) dialer_ne_pane_t3_copy1

0x4dea,	// (0x000a9d88) cell_dialer_keypad_pane_ParamLimits

0x4dea,	// (0x000a9d88) cell_dialer_keypad_pane

0x4e01,	// (0x000a9d9f) cell_dialer_command_1_pane_ParamLimits

0x4e01,	// (0x000a9d9f) cell_dialer_command_1_pane

0x4e17,	// (0x000a9db5) cell_dialer_command_2_pane_ParamLimits

0x4e17,	// (0x000a9db5) cell_dialer_command_2_pane

0xc27a,	// (0x000b1218) bg_button_pane_cp02_ParamLimits

0xc27a,	// (0x000b1218) bg_button_pane_cp02

0x4e26,	// (0x000a9dc4) cell_dialer_keypad_pane_g1_ParamLimits

0x4e26,	// (0x000a9dc4) cell_dialer_keypad_pane_g1

0xc27a,	// (0x000b1218) bg_button_pane_cp03_ParamLimits

0xc27a,	// (0x000b1218) bg_button_pane_cp03

0x4e3a,	// (0x000a9dd8) cell_dialer_command_1_pane_g1_ParamLimits

0x4e3a,	// (0x000a9dd8) cell_dialer_command_1_pane_g1

0xc286,	// (0x000b1224) bg_button_pane_cp04

0x4e4e,	// (0x000a9dec) cell_dialer_command_2_pane_g1

0xeea8,	// (0x000b3e46) bg_button_pane_cp06

0xc28e,	// (0x000b122c) dialer_ne_clear_pane_g1

0xa4ff,	// (0x000af49d) navi_pane_g2

0xa52d,	// (0x000af4cb) navi_pane_g3

0x0002,

0xf3e5,	// (0x000b4383) navi_pane_g

0xa5bc,	// (0x000af55a) navi_pane_mv_g2

0xa5e3,	// (0x000af581) navi_pane_mv_g5

0x2883,	// (0x000a7821) navi_pane_mv_t1

0xece3,	// (0x000b3c81) main_clock2_pane

0x4e99,	// (0x000a9e37) main_clock2_list_pane_ParamLimits

0x4e99,	// (0x000a9e37) main_clock2_list_pane

0x4ecf,	// (0x000a9e6d) main_clock2_pane_t1_ParamLimits

0x4ecf,	// (0x000a9e6d) main_clock2_pane_t1

0x4f0b,	// (0x000a9ea9) main_clock2_pane_t2_ParamLimits

0x4f0b,	// (0x000a9ea9) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000b4767) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000b4767) main_clock2_pane_t

0x4fa9,	// (0x000a9f47) popup_clock_analogue_window_cp03_ParamLimits

0x4fa9,	// (0x000a9f47) popup_clock_analogue_window_cp03

0x4fce,	// (0x000a9f6c) popup_clock_digital_window_cp02_ParamLimits

0x4fce,	// (0x000a9f6c) popup_clock_digital_window_cp02

0x503f,	// (0x000a9fdd) main_clock2_list_single_pane_ParamLimits

0x503f,	// (0x000a9fdd) main_clock2_list_single_pane

0xeea8,	// (0x000b3e46) list_highlight_pane_cp05

0xc2cc,	// (0x000b126a) main_clock2_list_single_pane_t1

0x1564,	// (0x000a6502) popup_toolbar_window_cp04_ParamLimits

0x4477,	// (0x000a9415) camera2_autofocus_pane_g2_ParamLimits

0x4477,	// (0x000a9415) camera2_autofocus_pane_g2

0x4483,	// (0x000a9421) camera2_autofocus_pane_g3_ParamLimits

0x4483,	// (0x000a9421) camera2_autofocus_pane_g3

0x448f,	// (0x000a942d) camera2_autofocus_pane_g4_ParamLimits

0x448f,	// (0x000a942d) camera2_autofocus_pane_g4

0x449b,	// (0x000a9439) camera2_autofocus_pane_g5_ParamLimits

0x449b,	// (0x000a9439) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000b46ab) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000b46ab) camera2_autofocus_pane_g

0xc153,	// (0x000b10f1) camera2_autofocus_pane_cp_g2

0xc15b,	// (0x000b10f9) camera2_autofocus_pane_cp_g3

0xc163,	// (0x000b1101) camera2_autofocus_pane_cp_g4

0xc16b,	// (0x000b1109) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000b4711) camera2_autofocus_pane_cp_g

0x4d41,	// (0x000a9cdf) popup_dialer_spcha_window

0xe5a6,	// (0x000b3544) bg_popup_sub_pane_cp07

0xc2da,	// (0x000b1278) list_spcha_pane

0xc2e2,	// (0x000b1280) list_single_spcha_pane_ParamLimits

0xc2e2,	// (0x000b1280) list_single_spcha_pane

0xe5a6,	// (0x000b3544) list_highlight_pane_cp06

0xc2f3,	// (0x000b1291) list_single_spcha_pane_t1

0xb46a,	// (0x000b0408) popup_call2_audio_out_window_g4_ParamLimits

0xb46a,	// (0x000b0408) popup_call2_audio_out_window_g4

0x94f5,	// (0x000ae493) main_imed2_pane

0x9cce,	// (0x000aec6c) popup_imed_adjust2_window

0x3858,	// (0x000a87f6) popup_imed_trans_window_ParamLimits

0x3858,	// (0x000a87f6) popup_imed_trans_window

0xbc73,	// (0x000b0c11) popup_blid_sat_info2_window_t1

0xbc81,	// (0x000b0c1f) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000b4640) popup_blid_sat_info2_window_t

0x50e9,	// (0x000aa087) aid_size_cell_colour_35

0x5109,	// (0x000aa0a7) aid_size_cell_colour_112

0x5129,	// (0x000aa0c7) aid_size_cell_effect

0xba2d,	// (0x000b09cb) bg_tb_trans_pane_cp02

0x9a1d,	// (0x000ae9bb) heading_imed_pane

0x5149,	// (0x000aa0e7) listscroll_imed_pane

0xc301,	// (0x000b129f) heading_imed_pane_g1

0xc309,	// (0x000b12a7) heading_imed_pane_t1

0xc317,	// (0x000b12b5) grid_imed_colour_35_pane_ParamLimits

0xc317,	// (0x000b12b5) grid_imed_colour_35_pane

0x5155,	// (0x000aa0f3) grid_imed_effect_pane

0xc32e,	// (0x000b12cc) list_imed_aspect_pane

0x516b,	// (0x000aa109) scroll_pane_cp027_ParamLimits

0x516b,	// (0x000aa109) scroll_pane_cp027

0x517c,	// (0x000aa11a) cell_imed_effect_pane_ParamLimits

0x517c,	// (0x000aa11a) cell_imed_effect_pane

0xc336,	// (0x000b12d4) cell_imed_colour_pane_ParamLimits

0xc336,	// (0x000b12d4) cell_imed_colour_pane

0xc378,	// (0x000b1316) cell_imed_colour_pane_g1_ParamLimits

0xc378,	// (0x000b1316) cell_imed_colour_pane_g1

0xc389,	// (0x000b1327) hgihlgiht_grid_pane_cp016_ParamLimits

0xc389,	// (0x000b1327) hgihlgiht_grid_pane_cp016

0x51a3,	// (0x000aa141) cell_imed_effect_pane_g1

0x51ab,	// (0x000aa149) grid_highlight_pane_cp017

0xc39a,	// (0x000b1338) list_imed_single_pane_ParamLimits

0xc39a,	// (0x000b1338) list_imed_single_pane

0xe5a6,	// (0x000b3544) list_highlight_pane_cp07

0xc3af,	// (0x000b134d) list_imed_aspect_pane_comp1_t1

0xba2d,	// (0x000b09cb) bg_tb_trans_pane_cp05

0xc3d1,	// (0x000b136f) popup_imed_adjust2_window_g1

0xc3f8,	// (0x000b1396) popup_imed_adjust2_window_t1

0xc410,	// (0x000b13ae) slider_imed_adjust_pane

0xc424,	// (0x000b13c2) slider_imed_adjust_pane_g1

0xc434,	// (0x000b13d2) slider_imed_adjust_pane_g2

0xc444,	// (0x000b13e2) slider_imed_adjust_pane_g3

0xc455,	// (0x000b13f3) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000b4784) slider_imed_adjust_pane_g

0x51b4,	// (0x000aa152) aid_size_cell_clipart2

0x51c0,	// (0x000aa15e) grid_imed_clipart_pane

0xc466,	// (0x000b1404) scroll_pane_cp031

0x51ca,	// (0x000aa168) cell_imed_clipart_pane_ParamLimits

0x51ca,	// (0x000aa168) cell_imed_clipart_pane

0x51ec,	// (0x000aa18a) cell_imed_clipart_pane_g1

0xe5a6,	// (0x000b3544) grid_highlight_pane_cp014

0x4eae,	// (0x000a9e4c) main_clock2_pane_g1_ParamLimits

0x4eae,	// (0x000a9e4c) main_clock2_pane_g1

0x4fea,	// (0x000a9f88) aid_call2_pane_cp10

0x4ffc,	// (0x000a9f9a) aid_call_pane_cp10

0xa460,	// (0x000af3fe) popup_clock_analogue_window_cp10_g1

0xa460,	// (0x000af3fe) popup_clock_analogue_window_cp10_g2

0x500e,	// (0x000a9fac) popup_clock_analogue_window_cp10_g3

0x500e,	// (0x000a9fac) popup_clock_analogue_window_cp10_g4

0xa460,	// (0x000af3fe) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000b4772) popup_clock_analogue_window_cp10_g

0x5020,	// (0x000a9fbe) popup_clock_analogue_window_cp10_t1

0x5051,	// (0x000a9fef) clock_digital_number_pane_cp10_ParamLimits

0x5051,	// (0x000a9fef) clock_digital_number_pane_cp10

0x5069,	// (0x000aa007) clock_digital_number_pane_cp11_ParamLimits

0x5069,	// (0x000aa007) clock_digital_number_pane_cp11

0x5081,	// (0x000aa01f) clock_digital_number_pane_cp12_ParamLimits

0x5081,	// (0x000aa01f) clock_digital_number_pane_cp12

0x5099,	// (0x000aa037) clock_digital_number_pane_cp13_ParamLimits

0x5099,	// (0x000aa037) clock_digital_number_pane_cp13

0x50b1,	// (0x000aa04f) clock_digital_separator_pane_cp10_ParamLimits

0x50b1,	// (0x000aa04f) clock_digital_separator_pane_cp10

0x50c9,	// (0x000aa067) popup_clock_digital_window_cp02_t1_ParamLimits

0x50c9,	// (0x000aa067) popup_clock_digital_window_cp02_t1

0xec16,	// (0x000b3bb4) clock_digital_number_pane_cp10_g1

0xec16,	// (0x000b3bb4) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000b478d) clock_digital_number_pane_cp10_g

0xec16,	// (0x000b3bb4) clock_digital_separator_pane_cp10_g1

0xec16,	// (0x000b3bb4) clock_digital_separator_pane_g2_cp10

0xa5eb,	// (0x000af589) navi_pane_vded_g4

0xa5f4,	// (0x000af592) navi_pane_vded_g5

0xa5fd,	// (0x000af59b) navi_pane_vded_t1

0x94f5,	// (0x000ae493) main_vded_pane

0x51f5,	// (0x000aa193) main_vded_pane_g1

0x51ff,	// (0x000aa19d) main_vded_pane_g2

0x5209,	// (0x000aa1a7) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000b4792) main_vded_pane_g

0x5213,	// (0x000aa1b1) main_vded_pane_t1

0x5221,	// (0x000aa1bf) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000b4799) main_vded_pane_t

0x522f,	// (0x000aa1cd) vded_slider_pane

0x5237,	// (0x000aa1d5) vded_video_pane

0xc46e,	// (0x000b140c) vded_video_pane_g1

0x523f,	// (0x000aa1dd) vded_video_pane_g2

0xbe4a,	// (0x000b0de8) vded_video_pane_g3

0x0002,

0xf800,	// (0x000b479e) vded_video_pane_g

0xc478,	// (0x000b1416) vded_slider_pane_g1

0xbb88,	// (0x000b0b26) vded_slider_pane_g2

0xc481,	// (0x000b141f) vded_slider_pane_g3

0xc48a,	// (0x000b1428) vded_slider_pane_g4

0xc493,	// (0x000b1431) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000b47a5) vded_slider_pane_g

0x4c22,	// (0x000a9bc0) mup3_rocker_pane_ParamLimits

0x4c22,	// (0x000a9bc0) mup3_rocker_pane

0x5248,	// (0x000aa1e6) mup3_control_keys_pane_g1

0x5250,	// (0x000aa1ee) mup3_control_keys_pane_g2

0x5258,	// (0x000aa1f6) mup3_control_keys_pane_g3

0x5260,	// (0x000aa1fe) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000b47b0) mup3_control_keys_pane_g

0x045c,	// (0x000a53fa) popup_toolbar2_fixed_window_cp01_ParamLimits

0x045c,	// (0x000a53fa) popup_toolbar2_fixed_window_cp01

0x4c56,	// (0x000a9bf4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4c56,	// (0x000a9bf4) popup_toolbar2_fixed_window_cp02

0xad9d,	// (0x000afd3b) popup_call2_audio_second_window_t4_ParamLimits

0xad9d,	// (0x000afd3b) popup_call2_audio_second_window_t4

0xb2d7,	// (0x000b0275) popup_call2_audio_first_window_t6_ParamLimits

0xb2d7,	// (0x000b0275) popup_call2_audio_first_window_t6

0xb56d,	// (0x000b050b) popup_call2_audio_out_window_t6_ParamLimits

0xb56d,	// (0x000b050b) popup_call2_audio_out_window_t6

0x94f5,	// (0x000ae493) main_vitu_pane

0x5270,	// (0x000aa20e) aid_size_cell_itu_ParamLimits

0x5270,	// (0x000aa20e) aid_size_cell_itu

0xeef1,	// (0x000b3e8f) bg_popup_window_pane_cp08_ParamLimits

0xeef1,	// (0x000b3e8f) bg_popup_window_pane_cp08

0x5286,	// (0x000aa224) field_vitu_entry_pane_ParamLimits

0x5286,	// (0x000aa224) field_vitu_entry_pane

0x529d,	// (0x000aa23b) grid_vitu_function_pane_ParamLimits

0x529d,	// (0x000aa23b) grid_vitu_function_pane

0x52b8,	// (0x000aa256) grid_vitu_itu_pane_ParamLimits

0x52b8,	// (0x000aa256) grid_vitu_itu_pane

0x52d6,	// (0x000aa274) cell_vitu_itu_pane_ParamLimits

0x52d6,	// (0x000aa274) cell_vitu_itu_pane

0x52f8,	// (0x000aa296) cell_vitu_function_pane_ParamLimits

0x52f8,	// (0x000aa296) cell_vitu_function_pane

0xeef1,	// (0x000b3e8f) bg_popup_sub_pane_cp08_ParamLimits

0xeef1,	// (0x000b3e8f) bg_popup_sub_pane_cp08

0x5311,	// (0x000aa2af) field_vitu_entry_pane_t1_ParamLimits

0x5311,	// (0x000aa2af) field_vitu_entry_pane_t1

0xc4b4,	// (0x000b1452) field_vitu_entry_pane_t2_ParamLimits

0xc4b4,	// (0x000b1452) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000b47be) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000b47be) field_vitu_entry_pane_t

0xc4d1,	// (0x000b146f) bg_button_pane_cp05_ParamLimits

0xc4d1,	// (0x000b146f) bg_button_pane_cp05

0x532f,	// (0x000aa2cd) cell_vitu_itu_pane_g1

0x5347,	// (0x000aa2e5) cell_vitu_itu_pane_t1_ParamLimits

0x5347,	// (0x000aa2e5) cell_vitu_itu_pane_t1

0x5359,	// (0x000aa2f7) cell_vitu_itu_pane_t2_ParamLimits

0x5359,	// (0x000aa2f7) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000b47c3) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000b47c3) cell_vitu_itu_pane_t

0xc4df,	// (0x000b147d) bg_button_pane_cp07

0x538e,	// (0x000aa32c) cell_vitu_function_pane_g1

0x94ff,	// (0x000ae49d) main_calc_pane_g1

0x026b,	// (0x000a5209) aid_visual_content_pane

0x94f5,	// (0x000ae493) main_vradio_pane

0x5397,	// (0x000aa335) main_vradio_pane_g1_ParamLimits

0x5397,	// (0x000aa335) main_vradio_pane_g1

0xc4e9,	// (0x000b1487) main_vradio_pane_g2_ParamLimits

0xc4e9,	// (0x000b1487) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000b47ca) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000b47ca) main_vradio_pane_g

0x53b0,	// (0x000aa34e) main_vradio_pane_t1_ParamLimits

0x53b0,	// (0x000aa34e) main_vradio_pane_t1

0x53c5,	// (0x000aa363) main_vradio_pane_t2_ParamLimits

0x53c5,	// (0x000aa363) main_vradio_pane_t2

0xc4f6,	// (0x000b1494) main_vradio_pane_t3_ParamLimits

0xc4f6,	// (0x000b1494) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000b47cf) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000b47cf) main_vradio_pane_t

0x53da,	// (0x000aa378) vradio_rocker_control_pane_ParamLimits

0x53da,	// (0x000aa378) vradio_rocker_control_pane

0x53ec,	// (0x000aa38a) vradio_station_info_pane_ParamLimits

0x53ec,	// (0x000aa38a) vradio_station_info_pane

0xc50a,	// (0x000b14a8) vradio_frequency_info_pane_ParamLimits

0xc50a,	// (0x000b14a8) vradio_frequency_info_pane

0xbe4a,	// (0x000b0de8) vradio_station_info_pane_g1

0xc519,	// (0x000b14b7) vradio_station_info_pane_t1_ParamLimits

0xc519,	// (0x000b14b7) vradio_station_info_pane_t1

0xc53b,	// (0x000b14d9) vradio_station_info_pane_t2_ParamLimits

0xc53b,	// (0x000b14d9) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000b47d6) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000b47d6) vradio_station_info_pane_t

0xc54d,	// (0x000b14eb) vradio_tuning_pane

0xc555,	// (0x000b14f3) vradio_rocker_control_pane_g1

0xc55d,	// (0x000b14fb) vradio_rocker_control_pane_g2

0xc565,	// (0x000b1503) vradio_rocker_control_pane_g3

0xc56d,	// (0x000b150b) vradio_rocker_control_pane_g4

0xc575,	// (0x000b1513) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000b47db) vradio_rocker_control_pane_g

0x53fe,	// (0x000aa39c) vradio_frequency_info_pane_g1

0xc57d,	// (0x000b151b) vradio_frequency_info_pane_t1_ParamLimits

0xc57d,	// (0x000b151b) vradio_frequency_info_pane_t1

0x5408,	// (0x000aa3a6) vradio_tuning_pane_g1

0x5413,	// (0x000aa3b1) vradio_tuning_pane_t1

0x94a5,	// (0x000ae443) area_side_right_pane_ParamLimits

0x94a5,	// (0x000ae443) area_side_right_pane

0xb9e8,	// (0x000b0986) status_small_pane_g1

0xb9f0,	// (0x000b098e) status_small_pane_g2

0xb9f9,	// (0x000b0997) status_small_pane_g3

0xba02,	// (0x000b09a0) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000b4596) status_small_pane_g

0xba0b,	// (0x000b09a9) status_small_pane_t1

0x94f5,	// (0x000ae493) main_video3_pane

0xc591,	// (0x000b152f) cams_zoom_vslider_pane

0xc599,	// (0x000b1537) image3_wide_pane_ParamLimits

0xc599,	// (0x000b1537) image3_wide_pane

0xc5b3,	// (0x000b1551) image3_wide_small_pane

0xc5bf,	// (0x000b155d) main_video3_pane_g1_ParamLimits

0xc5bf,	// (0x000b155d) main_video3_pane_g1

0xc5db,	// (0x000b1579) main_video3_pane_g2_ParamLimits

0xc5db,	// (0x000b1579) main_video3_pane_g2

0x0001,

0xf848,	// (0x000b47e6) main_video3_pane_g_ParamLimits

0xf848,	// (0x000b47e6) main_video3_pane_g

0xc5f7,	// (0x000b1595) main_video3_pane_t1_ParamLimits

0xc5f7,	// (0x000b1595) main_video3_pane_t1

0xc622,	// (0x000b15c0) main_video3_pane_t2_ParamLimits

0xc622,	// (0x000b15c0) main_video3_pane_t2

0xc64d,	// (0x000b15eb) main_video3_pane_t3_ParamLimits

0xc64d,	// (0x000b15eb) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000b47eb) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000b47eb) main_video3_pane_t

0xc67a,	// (0x000b1618) cams_zoom_vslider_pane_g1

0xc683,	// (0x000b1621) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000b47f2) cams_zoom_vslider_pane_g

0xc68b,	// (0x000b1629) small_slider_vertical_pane

0xbe4a,	// (0x000b0de8) small_slider_vertical_pane_g1

0xbe4a,	// (0x000b0de8) small_slider_vertical_pane_g2

0xc693,	// (0x000b1631) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000b47f7) small_slider_vertical_pane_g

0x94f5,	// (0x000ae493) main_hwr_training_pane

0xc69c,	// (0x000b163a) hwr_training_instruct_pane_ParamLimits

0xc69c,	// (0x000b163a) hwr_training_instruct_pane

0x5422,	// (0x000aa3c0) hwr_training_navi_pane_ParamLimits

0x5422,	// (0x000aa3c0) hwr_training_navi_pane

0x5441,	// (0x000aa3df) hwr_training_write_pane_ParamLimits

0x5441,	// (0x000aa3df) hwr_training_write_pane

0xe5a6,	// (0x000b3544) bg_frame_shadow_pane

0xc6d3,	// (0x000b1671) hwr_training_write_pane_g1

0xc6db,	// (0x000b1679) hwr_training_write_pane_g2

0xc6e3,	// (0x000b1681) hwr_training_write_pane_g3

0xc6eb,	// (0x000b1689) hwr_training_write_pane_g4

0xc6f3,	// (0x000b1691) hwr_training_write_pane_g5

0xc6fb,	// (0x000b1699) hwr_training_write_pane_g6

0xc703,	// (0x000b16a1) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000b47fe) hwr_training_write_pane_g

0x9dbf,	// (0x000aed5d) hwr_training_navi_pane_g1_ParamLimits

0x9dbf,	// (0x000aed5d) hwr_training_navi_pane_g1

0x9dd1,	// (0x000aed6f) hwr_training_navi_pane_g2_ParamLimits

0x9dd1,	// (0x000aed6f) hwr_training_navi_pane_g2

0x9de3,	// (0x000aed81) hwr_training_navi_pane_g3_ParamLimits

0x9de3,	// (0x000aed81) hwr_training_navi_pane_g3

0x9df3,	// (0x000aed91) hwr_training_navi_pane_g4_ParamLimits

0x9df3,	// (0x000aed91) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000b480d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000b480d) hwr_training_navi_pane_g

0x9e00,	// (0x000aed9e) hwr_training_navi_pane_t1

0x5489,	// (0x000aa427) list_single_hwr_training_instruct_pane_ParamLimits

0x5489,	// (0x000aa427) list_single_hwr_training_instruct_pane

0xc70b,	// (0x000b16a9) list_single_hwr_training_instruct_pane_t1

0xbd8a,	// (0x000b0d28) bg_frame_shadow_pane_g1

0xc71a,	// (0x000b16b8) bg_frame_shadow_pane_g2

0xc722,	// (0x000b16c0) bg_frame_shadow_pane_g3

0xc72a,	// (0x000b16c8) bg_frame_shadow_pane_g4

0xc732,	// (0x000b16d0) bg_frame_shadow_pane_g5

0xc73a,	// (0x000b16d8) bg_frame_shadow_pane_g6

0xc742,	// (0x000b16e0) bg_frame_shadow_pane_g7

0xed9c,	// (0x000b3d3a) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000b4818) bg_frame_shadow_pane_g

0x94f5,	// (0x000ae493) main_video_tele_dialer_pane

0x549e,	// (0x000aa43c) aid_size_cell_video_keypad_ParamLimits

0x549e,	// (0x000aa43c) aid_size_cell_video_keypad

0x54b8,	// (0x000aa456) grid_video_dialer_keypad_pane_ParamLimits

0x54b8,	// (0x000aa456) grid_video_dialer_keypad_pane

0x5504,	// (0x000aa4a2) video_down_pane_cp_ParamLimits

0x5504,	// (0x000aa4a2) video_down_pane_cp

0x5536,	// (0x000aa4d4) cell_video_dialer_keypad_pane_ParamLimits

0x5536,	// (0x000aa4d4) cell_video_dialer_keypad_pane

0xc74a,	// (0x000b16e8) bg_button_pane_cp08_ParamLimits

0xc74a,	// (0x000b16e8) bg_button_pane_cp08

0x5558,	// (0x000aa4f6) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5558,	// (0x000aa4f6) cell_video_dialer_keypad_pane_g1

0x4c0c,	// (0x000a9baa) mup3_rocker2_pane_ParamLimits

0x4c0c,	// (0x000a9baa) mup3_rocker2_pane

0xbe4a,	// (0x000b0de8) mup3_rocker2_pane_g1

0x3739,	// (0x000a86d7) main_dialer2_pane

0x94f5,	// (0x000ae493) main_mp4_pane

0x9e16,	// (0x000aedb4) main_mp4_pane_g1_ParamLimits

0x9e16,	// (0x000aedb4) main_mp4_pane_g1

0x9e16,	// (0x000aedb4) main_mp4_pane_g2_ParamLimits

0x9e16,	// (0x000aedb4) main_mp4_pane_g2

0x558f,	// (0x000aa52d) main_mp4_pane_g3_ParamLimits

0x558f,	// (0x000aa52d) main_mp4_pane_g3

0x9e24,	// (0x000aedc2) main_mp4_pane_g4_ParamLimits

0x9e24,	// (0x000aedc2) main_mp4_pane_g4

0x9e4c,	// (0x000aedea) main_mp4_pane_g5_ParamLimits

0x9e4c,	// (0x000aedea) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000b4838) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000b4838) main_mp4_pane_g

0x9e9c,	// (0x000aee3a) main_mp4_pane_t1_ParamLimits

0x9e9c,	// (0x000aee3a) main_mp4_pane_t1

0x9ef8,	// (0x000aee96) main_mp4_pane_t2_ParamLimits

0x9ef8,	// (0x000aee96) main_mp4_pane_t2

0xc756,	// (0x000b16f4) main_mp4_pane_t3_ParamLimits

0xc756,	// (0x000b16f4) main_mp4_pane_t3

0x9f4a,	// (0x000aeee8) main_mp4_pane_t4_ParamLimits

0x9f4a,	// (0x000aeee8) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000b4845) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000b4845) main_mp4_pane_t

0x9f8e,	// (0x000aef2c) mp4_progress_pane_ParamLimits

0x9f8e,	// (0x000aef2c) mp4_progress_pane

0x9fd8,	// (0x000aef76) mp4_rocker_pane_ParamLimits

0x9fd8,	// (0x000aef76) mp4_rocker_pane

0xc77e,	// (0x000b171c) mp4_progress_pane_t1

0xc797,	// (0x000b1735) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000b484e) mp4_progress_pane_t

0xc7b0,	// (0x000b174e) mup_progress_pane_cp04

0xcac4,	// (0x000b1a62) mp4_rocker_pane_g1

0x55cb,	// (0x000aa569) aid_cell_size_keypad2_ParamLimits

0x55cb,	// (0x000aa569) aid_cell_size_keypad2

0x55e1,	// (0x000aa57f) dialer2_ne_pane_ParamLimits

0x55e1,	// (0x000aa57f) dialer2_ne_pane

0x55fb,	// (0x000aa599) grid_dialer2_keypad_pane_ParamLimits

0x55fb,	// (0x000aa599) grid_dialer2_keypad_pane

0xbc1a,	// (0x000b0bb8) bg_popup_call_pane_cp07_ParamLimits

0xbc1a,	// (0x000b0bb8) bg_popup_call_pane_cp07

0x5617,	// (0x000aa5b5) dialer2_ne_pane_t1_ParamLimits

0x5617,	// (0x000aa5b5) dialer2_ne_pane_t1

0x5652,	// (0x000aa5f0) cell_dialer2_keypad_pane_ParamLimits

0x5652,	// (0x000aa5f0) cell_dialer2_keypad_pane

0xc7ce,	// (0x000b176c) bg_button_pane_pane_cp04_ParamLimits

0xc7ce,	// (0x000b176c) bg_button_pane_pane_cp04

0x5674,	// (0x000aa612) cell_dialer2_keypad_pane_g1_ParamLimits

0x5674,	// (0x000aa612) cell_dialer2_keypad_pane_g1

0x1438,	// (0x000a63d6) aid_placing_vt_set_content_ParamLimits

0x1438,	// (0x000a63d6) aid_placing_vt_set_content

0x1460,	// (0x000a63fe) aid_placing_vt_set_title_ParamLimits

0x1460,	// (0x000a63fe) aid_placing_vt_set_title

0x94f5,	// (0x000ae493) main_image3_pane

0x573a,	// (0x000aa6d8) area_side_right_pane_cp01_ParamLimits

0x573a,	// (0x000aa6d8) area_side_right_pane_cp01

0x9e16,	// (0x000aedb4) main_image3_pane_g1_ParamLimits

0x9e16,	// (0x000aedb4) main_image3_pane_g1

0x5751,	// (0x000aa6ef) main_image3_pane_g2_ParamLimits

0x5751,	// (0x000aa6ef) main_image3_pane_g2

0x5779,	// (0x000aa717) main_image3_pane_g3_ParamLimits

0x5779,	// (0x000aa717) main_image3_pane_g3

0x57a3,	// (0x000aa741) main_image3_pane_g4_ParamLimits

0x57a3,	// (0x000aa741) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000b485d) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000b485d) main_image3_pane_g

0x57cd,	// (0x000aa76b) main_image3_pane_t1_ParamLimits

0x57cd,	// (0x000aa76b) main_image3_pane_t1

0x5825,	// (0x000aa7c3) main_image3_pane_t2_ParamLimits

0x5825,	// (0x000aa7c3) main_image3_pane_t2

0x5877,	// (0x000aa815) main_image3_pane_t3_ParamLimits

0x5877,	// (0x000aa815) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000b4866) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000b4866) main_image3_pane_t

0xeef1,	// (0x000b3e8f) grid_sctrl_middle_pane_cp01_ParamLimits

0xeef1,	// (0x000b3e8f) grid_sctrl_middle_pane_cp01

0x58ff,	// (0x000aa89d) cell_sctrl_middle_pane_cp01_ParamLimits

0x58ff,	// (0x000aa89d) cell_sctrl_middle_pane_cp01

0x591c,	// (0x000aa8ba) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x591c,	// (0x000aa8ba) cell_sctrl_middle_pane_cp01_g1

0x94f5,	// (0x000ae493) main_call4_pane

0x5932,	// (0x000aa8d0) aid_size_button_call4_ParamLimits

0x5932,	// (0x000aa8d0) aid_size_button_call4

0x5963,	// (0x000aa901) call4_windows_pane_ParamLimits

0x5963,	// (0x000aa901) call4_windows_pane

0x5983,	// (0x000aa921) grid_call4_button_pane_ParamLimits

0x5983,	// (0x000aa921) grid_call4_button_pane

0xc7da,	// (0x000b1778) call4_windows_conf_pane

0xc7f1,	// (0x000b178f) popup_call4_audio_first_window_ParamLimits

0xc7f1,	// (0x000b178f) popup_call4_audio_first_window

0xc83d,	// (0x000b17db) popup_call4_audio_second_window_ParamLimits

0xc83d,	// (0x000b17db) popup_call4_audio_second_window

0xc851,	// (0x000b17ef) popup_call4_audio_wait_window_ParamLimits

0xc851,	// (0x000b17ef) popup_call4_audio_wait_window

0x59b0,	// (0x000aa94e) cell_call4_button_pane_ParamLimits

0x59b0,	// (0x000aa94e) cell_call4_button_pane

0x59d9,	// (0x000aa977) bg_button_pane_cp09_ParamLimits

0x59d9,	// (0x000aa977) bg_button_pane_cp09

0x59e5,	// (0x000aa983) cell_call4_button_pane_g1_ParamLimits

0x59e5,	// (0x000aa983) cell_call4_button_pane_g1

0x5a0b,	// (0x000aa9a9) cell_call4_button_pane_t1_ParamLimits

0x5a0b,	// (0x000aa9a9) cell_call4_button_pane_t1

0xc899,	// (0x000b1837) popup_call4_audio_conf_window_ParamLimits

0xc899,	// (0x000b1837) popup_call4_audio_conf_window

0x4c6c,	// (0x000a9c0a) mup3_progress_pane_t1_ParamLimits

0x4c8b,	// (0x000a9c29) mup3_progress_pane_t2_ParamLimits

0xc189,	// (0x000b1127) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000b473a) mup3_progress_pane_t_ParamLimits

0xc1a6,	// (0x000b1144) mup_progress_pane_cp03_ParamLimits

0x5268,	// (0x000aa206) mup3_control_keys_pane_g4_copy1

0x9fbc,	// (0x000aef5a) mp4_rocker2_pane_ParamLimits

0x9fbc,	// (0x000aef5a) mp4_rocker2_pane

0xc8ad,	// (0x000b184b) mp4_rocker2_pane_g1

0xc8b5,	// (0x000b1853) mp4_rocker2_pane_g2

0xa02a,	// (0x000aefc8) mp4_rocker2_pane_g3

0xa032,	// (0x000aefd0) mp4_rocker2_pane_g4

0xa03a,	// (0x000aefd8) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000b486f) mp4_rocker2_pane_g

0x94f5,	// (0x000ae493) main_camera4_pane

0x94f5,	// (0x000ae493) main_video4_pane

0x54d2,	// (0x000aa470) main_video_tele_dialer_pane_t1_ParamLimits

0x54d2,	// (0x000aa470) main_video_tele_dialer_pane_t1

0x54eb,	// (0x000aa489) main_video_tele_dialer_pane_t2_ParamLimits

0x54eb,	// (0x000aa489) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000b4829) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000b4829) main_video_tele_dialer_pane_t

0x5a49,	// (0x000aa9e7) cam4_autofocus_pane_ParamLimits

0x5a49,	// (0x000aa9e7) cam4_autofocus_pane

0x5a5f,	// (0x000aa9fd) cam4_image_uncrop_pane_ParamLimits

0x5a5f,	// (0x000aa9fd) cam4_image_uncrop_pane

0x5a79,	// (0x000aaa17) cam4_indicators_pane_ParamLimits

0x5a79,	// (0x000aaa17) cam4_indicators_pane

0x5aa4,	// (0x000aaa42) main_camera4_pane_g1_ParamLimits

0x5aa4,	// (0x000aaa42) main_camera4_pane_g1

0x5ab6,	// (0x000aaa54) main_camera4_pane_g2_ParamLimits

0x5ab6,	// (0x000aaa54) main_camera4_pane_g2

0x5ac9,	// (0x000aaa67) main_camera4_pane_g3_ParamLimits

0x5ac9,	// (0x000aaa67) main_camera4_pane_g3

0x5adc,	// (0x000aaa7a) main_camera4_pane_g4_ParamLimits

0x5adc,	// (0x000aaa7a) main_camera4_pane_g4

0x5aef,	// (0x000aaa8d) main_camera4_pane_g5_ParamLimits

0x5aef,	// (0x000aaa8d) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000b487a) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000b487a) main_camera4_pane_g

0x5b13,	// (0x000aaab1) main_camera4_pane_t1_ParamLimits

0x5b13,	// (0x000aaab1) main_camera4_pane_t1

0xa05e,	// (0x000aeffc) bg_tb_trans_pane_cp06

0xa074,	// (0x000af012) cam4_indicators_pane_g1

0xa085,	// (0x000af023) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000b4895) cam4_indicators_pane_g

0xa0a3,	// (0x000af041) cam4_indicators_pane_t1

0x5b77,	// (0x000aab15) main_video4_pane_g1_ParamLimits

0x5b77,	// (0x000aab15) main_video4_pane_g1

0x5b86,	// (0x000aab24) main_video4_pane_g2_ParamLimits

0x5b86,	// (0x000aab24) main_video4_pane_g2

0x5b95,	// (0x000aab33) main_video4_pane_g3_ParamLimits

0x5b95,	// (0x000aab33) main_video4_pane_g3

0x5ba4,	// (0x000aab42) main_video4_pane_g4_ParamLimits

0x5ba4,	// (0x000aab42) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000b489c) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000b489c) main_video4_pane_g

0x5bc2,	// (0x000aab60) vid4_indicators_pane_ParamLimits

0x5bc2,	// (0x000aab60) vid4_indicators_pane

0x5bf0,	// (0x000aab8e) video4_image_uncrop_cif_pane_ParamLimits

0x5bf0,	// (0x000aab8e) video4_image_uncrop_cif_pane

0x5c0a,	// (0x000aaba8) video4_image_uncrop_nhd_pane_ParamLimits

0x5c0a,	// (0x000aaba8) video4_image_uncrop_nhd_pane

0x5a5f,	// (0x000aa9fd) video4_image_uncrop_vga_pane_ParamLimits

0x5a5f,	// (0x000aa9fd) video4_image_uncrop_vga_pane

0x94e7,	// (0x000ae485) bg_tb_trans_pane_cp07

0xa0cf,	// (0x000af06d) vid4_indicators_pane_g1

0xa0e3,	// (0x000af081) vid4_indicators_pane_g2

0xa0f7,	// (0x000af095) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000b48a7) vid4_indicators_pane_g

0xa126,	// (0x000af0c4) vid4_indicators_pane_t1

0x5c1e,	// (0x000aabbc) cam4_autofocus_pane_g1

0x5c26,	// (0x000aabc4) cam4_autofocus_pane_g2

0x5c2e,	// (0x000aabcc) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000b48b2) cam4_autofocus_pane_g

0x5c36,	// (0x000aabd4) cam4_autofocus_pane_g3_copy1

0x551a,	// (0x000aa4b8) video_down_pane_cp_t1

0x5528,	// (0x000aa4c6) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000b482e) video_down_pane_cp_t

0x94e7,	// (0x000ae485) popup_vitu2_window_ParamLimits

0x94e7,	// (0x000ae485) popup_vitu2_window

0x5c3e,	// (0x000aabdc) aid_size_cell2_itu2_ParamLimits

0x5c3e,	// (0x000aabdc) aid_size_cell2_itu2

0x5c64,	// (0x000aac02) aid_size_cell_itu2_ParamLimits

0x5c64,	// (0x000aac02) aid_size_cell_itu2

0x5cc0,	// (0x000aac5e) bg_popup_window_pane_cp09_ParamLimits

0x5cc0,	// (0x000aac5e) bg_popup_window_pane_cp09

0x5cce,	// (0x000aac6c) field_vitu2_entry_pane_ParamLimits

0x5cce,	// (0x000aac6c) field_vitu2_entry_pane

0x5cf4,	// (0x000aac92) grid_vitu2_function_pane_ParamLimits

0x5cf4,	// (0x000aac92) grid_vitu2_function_pane

0x5d45,	// (0x000aace3) grid_vitu2_itu_pane_ParamLimits

0x5d45,	// (0x000aace3) grid_vitu2_itu_pane

0x5ddd,	// (0x000aad7b) cell_vitu2_itu_pane_ParamLimits

0x5ddd,	// (0x000aad7b) cell_vitu2_itu_pane

0x5e09,	// (0x000aada7) cell_vitu2_function_pane_ParamLimits

0x5e09,	// (0x000aada7) cell_vitu2_function_pane

0xc8cf,	// (0x000b186d) bg_popup_call_pane_cp08_ParamLimits

0xc8cf,	// (0x000b186d) bg_popup_call_pane_cp08

0xc8e6,	// (0x000b1884) field_vitu2_entry_pane_g1

0xc8f2,	// (0x000b1890) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000b48b9) field_vitu2_entry_pane_g

0x5e48,	// (0x000aade6) field_vitu2_entry_pane_t1_ParamLimits

0x5e48,	// (0x000aade6) field_vitu2_entry_pane_t1

0xc90c,	// (0x000b18aa) field_vitu2_entry_pane_t2_ParamLimits

0xc90c,	// (0x000b18aa) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000b48c0) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000b48c0) field_vitu2_entry_pane_t

0x5e76,	// (0x000aae14) bg_button_pane_cp010_ParamLimits

0x5e76,	// (0x000aae14) bg_button_pane_cp010

0xa13d,	// (0x000af0db) cell_vitu2_itu_pane_g1

0x5e92,	// (0x000aae30) cell_vitu2_itu_pane_t1_ParamLimits

0x5e92,	// (0x000aae30) cell_vitu2_itu_pane_t1

0x012f,	// (0x000a50cd) cell_vitu2_itu_pane_t2_ParamLimits

0x012f,	// (0x000a50cd) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000b48ca) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000b48ca) cell_vitu2_itu_pane_t

0x94e7,	// (0x000ae485) bg_button_pane_cp011

0x5ef0,	// (0x000aae8e) cell_vitu2_function_pane_g1

0x94f5,	// (0x000ae493) main_myfav_hc_pane

0x58c7,	// (0x000aa865) popup_image3_note_pane_ParamLimits

0x58c7,	// (0x000aa865) popup_image3_note_pane

0x58e3,	// (0x000aa881) popup_image3_tool_bar_pane_ParamLimits

0x58e3,	// (0x000aa881) popup_image3_tool_bar_pane

0x01bd,	// (0x000a515b) cell_vitu2_itu_pane_t3_ParamLimits

0x01bd,	// (0x000a515b) cell_vitu2_itu_pane_t3

0xe5a6,	// (0x000b3544) bg_popup_trans_pane

0xc931,	// (0x000b18cf) grid_image3_tool_bar_pane

0xc93b,	// (0x000b18d9) bg_popup_trans_pane_g1

0x97a7,	// (0x000ae745) bg_popup_trans_pane_g2

0xc943,	// (0x000b18e1) bg_popup_trans_pane_g3

0xc94b,	// (0x000b18e9) bg_popup_trans_pane_g4

0xc953,	// (0x000b18f1) bg_popup_trans_pane_g5

0xc95b,	// (0x000b18f9) bg_popup_trans_pane_g6

0xc963,	// (0x000b1901) bg_popup_trans_pane_g7

0xc96b,	// (0x000b1909) bg_popup_trans_pane_g8

0x9787,	// (0x000ae725) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000b48d1) bg_popup_trans_pane_g

0xc973,	// (0x000b1911) cell_image3_tool_bar_pane_ParamLimits

0xc973,	// (0x000b1911) cell_image3_tool_bar_pane

0xbe4a,	// (0x000b0de8) cell_image3_tool_bar_pane_g1

0xe5a6,	// (0x000b3544) bg_popup_trans_pane_cp1

0xc987,	// (0x000b1925) popup_image3_note_pane_t1

0xc995,	// (0x000b1933) popup_image3_note_pane_t2

0xc9a3,	// (0x000b1941) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000b48e4) popup_image3_note_pane_t

0xc9b1,	// (0x000b194f) popup_image3_note_pane_t3_copy1

0x5f04,	// (0x000aaea2) bg_myfav_hc_instruction_pane_ParamLimits

0x5f04,	// (0x000aaea2) bg_myfav_hc_instruction_pane

0x5f18,	// (0x000aaeb6) cell_myfav_contact_pane_ParamLimits

0x5f18,	// (0x000aaeb6) cell_myfav_contact_pane

0x5f36,	// (0x000aaed4) cell_myfav_contact_pane_cp1_ParamLimits

0x5f36,	// (0x000aaed4) cell_myfav_contact_pane_cp1

0x5f4e,	// (0x000aaeec) cell_myfav_contact_pane_cp2_ParamLimits

0x5f4e,	// (0x000aaeec) cell_myfav_contact_pane_cp2

0x5f66,	// (0x000aaf04) cell_myfav_contact_pane_cp3_ParamLimits

0x5f66,	// (0x000aaf04) cell_myfav_contact_pane_cp3

0x5f7d,	// (0x000aaf1b) cell_myfav_contact_pane_cp4_ParamLimits

0x5f7d,	// (0x000aaf1b) cell_myfav_contact_pane_cp4

0x5f95,	// (0x000aaf33) cell_myfav_contact_pane_cp5_ParamLimits

0x5f95,	// (0x000aaf33) cell_myfav_contact_pane_cp5

0x5fa9,	// (0x000aaf47) cell_myfav_contact_pane_cp6_ParamLimits

0x5fa9,	// (0x000aaf47) cell_myfav_contact_pane_cp6

0x5fbf,	// (0x000aaf5d) cell_myfav_contact_pane_cp7_ParamLimits

0x5fbf,	// (0x000aaf5d) cell_myfav_contact_pane_cp7

0xc9bf,	// (0x000b195d) listscroll_gen_pane_cp05

0x5fd9,	// (0x000aaf77) main_myfav_hc_pane_g1_ParamLimits

0x5fd9,	// (0x000aaf77) main_myfav_hc_pane_g1

0x5ff3,	// (0x000aaf91) main_myfav_hc_pane_g2_ParamLimits

0x5ff3,	// (0x000aaf91) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000b48eb) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000b48eb) main_myfav_hc_pane_g

0x6025,	// (0x000aafc3) main_myfav_hc_pane_t1_ParamLimits

0x6025,	// (0x000aafc3) main_myfav_hc_pane_t1

0xc9c8,	// (0x000b1966) main_myfav_hc_pane_t2_ParamLimits

0xc9c8,	// (0x000b1966) main_myfav_hc_pane_t2

0xc9da,	// (0x000b1978) main_myfav_hc_pane_t3_ParamLimits

0xc9da,	// (0x000b1978) main_myfav_hc_pane_t3

0x603c,	// (0x000aafda) main_myfav_hc_pane_t4_ParamLimits

0x603c,	// (0x000aafda) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000b48f2) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000b48f2) main_myfav_hc_pane_t

0xbe4a,	// (0x000b0de8) bg_myfav_hc_instruction_pane_g1

0xc9ec,	// (0x000b198a) cell_myfav_contact_pane_g1_ParamLimits

0xc9ec,	// (0x000b198a) cell_myfav_contact_pane_g1

0xc9ec,	// (0x000b198a) cell_myfav_contact_pane_g2_ParamLimits

0xc9ec,	// (0x000b198a) cell_myfav_contact_pane_g2

0xc9f8,	// (0x000b1996) cell_myfav_contact_pane_g3_ParamLimits

0xc9f8,	// (0x000b1996) cell_myfav_contact_pane_g3

0xc173,	// (0x000b1111) cell_myfav_contact_pane_g4_ParamLimits

0xc173,	// (0x000b1111) cell_myfav_contact_pane_g4

0xca05,	// (0x000b19a3) cell_myfav_contact_pane_g5_ParamLimits

0xca05,	// (0x000b19a3) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000b48fd) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000b48fd) cell_myfav_contact_pane_g

0x600d,	// (0x000aafab) main_myfav_hc_pane_g3_ParamLimits

0x600d,	// (0x000aafab) main_myfav_hc_pane_g3

0x03be,	// (0x000a535c) popup_adpt_find_window

0x6064,	// (0x000ab002) afind_page_pane_ParamLimits

0x6064,	// (0x000ab002) afind_page_pane

0x6079,	// (0x000ab017) aid_size_cell_afind_ParamLimits

0x6079,	// (0x000ab017) aid_size_cell_afind

0x6097,	// (0x000ab035) bg_popup_sub_pane_cp09_ParamLimits

0x6097,	// (0x000ab035) bg_popup_sub_pane_cp09

0x60a4,	// (0x000ab042) find_pane_cp01_ParamLimits

0x60a4,	// (0x000ab042) find_pane_cp01

0xca11,	// (0x000b19af) grid_afind_control_pane_ParamLimits

0xca11,	// (0x000b19af) grid_afind_control_pane

0x60b1,	// (0x000ab04f) grid_afind_pane_ParamLimits

0x60b1,	// (0x000ab04f) grid_afind_pane

0x60d3,	// (0x000ab071) cell_afind_pane_ParamLimits

0x60d3,	// (0x000ab071) cell_afind_pane

0xbe4a,	// (0x000b0de8) afind_page_pane_g1

0x613a,	// (0x000ab0d8) afind_page_pane_g2

0x6143,	// (0x000ab0e1) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000b4908) afind_page_pane_g

0x614c,	// (0x000ab0ea) afind_page_pane_t1

0xca25,	// (0x000b19c3) cell_afind_grid_control_pane_ParamLimits

0xca25,	// (0x000b19c3) cell_afind_grid_control_pane

0xc7ce,	// (0x000b176c) bg_button_pane_cp69_ParamLimits

0xc7ce,	// (0x000b176c) bg_button_pane_cp69

0x616c,	// (0x000ab10a) cell_afind_pane_g1_ParamLimits

0x616c,	// (0x000ab10a) cell_afind_pane_g1

0x6179,	// (0x000ab117) cell_afind_pane_t1_ParamLimits

0x6179,	// (0x000ab117) cell_afind_pane_t1

0x95a0,	// (0x000ae53e) bg_button_pane_cp72

0xca34,	// (0x000b19d2) cell_afind_grid_control_pane_g1

0x31e7,	// (0x000a8185) aid_image_placing_area_ParamLimits

0x31e7,	// (0x000a8185) aid_image_placing_area

0xc49c,	// (0x000b143a) field_vitu_entry_pane_g1_ParamLimits

0xc49c,	// (0x000b143a) field_vitu_entry_pane_g1

0xc4a8,	// (0x000b1446) field_vitu_entry_pane_g2_ParamLimits

0xc4a8,	// (0x000b1446) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000b47b9) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000b47b9) field_vitu_entry_pane_g

0x532f,	// (0x000aa2cd) cell_vitu_itu_pane_g1_ParamLimits

0x5371,	// (0x000aa30f) cell_vitu_itu_pane_t3_ParamLimits

0x5371,	// (0x000aa30f) cell_vitu_itu_pane_t3

0xc77e,	// (0x000b171c) mp4_progress_pane_t1_ParamLimits

0xc797,	// (0x000b1735) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000b484e) mp4_progress_pane_t_ParamLimits

0xc7b0,	// (0x000b174e) mup_progress_pane_cp04_ParamLimits

0x6050,	// (0x000aafee) main_myfav_hc_pane_t5_ParamLimits

0x6050,	// (0x000aafee) main_myfav_hc_pane_t5

0x027f,	// (0x000a521d) aid_zoom_text_primary

0x03be,	// (0x000a535c) popup_adpt_find_window_ParamLimits

0x94e7,	// (0x000ae485) main_cam_set_pane

0x5a90,	// (0x000aaa2e) cam4_zoom_pane_ParamLimits

0x5a90,	// (0x000aaa2e) cam4_zoom_pane

0x618b,	// (0x000ab129) main_cam_set_pane_g1_ParamLimits

0x618b,	// (0x000ab129) main_cam_set_pane_g1

0x6199,	// (0x000ab137) main_cam_set_pane_g2_ParamLimits

0x6199,	// (0x000ab137) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000b490f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000b490f) main_cam_set_pane_g

0x61ba,	// (0x000ab158) main_cam_set_pane_t1_ParamLimits

0x61ba,	// (0x000ab158) main_cam_set_pane_t1

0x61d5,	// (0x000ab173) main_cset_listscroll_pane_ParamLimits

0x61d5,	// (0x000ab173) main_cset_listscroll_pane

0x61f5,	// (0x000ab193) main_cset_slider_pane_ParamLimits

0x61f5,	// (0x000ab193) main_cset_slider_pane

0xca45,	// (0x000b19e3) main_cset_list_pane_ParamLimits

0xca45,	// (0x000b19e3) main_cset_list_pane

0xca55,	// (0x000b19f3) scroll_pane_cp028

0x621b,	// (0x000ab1b9) aid_area_touch_slider

0x6237,	// (0x000ab1d5) cset_slider_pane

0x6261,	// (0x000ab1ff) main_cset_slider_pane_g1

0x6276,	// (0x000ab214) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000b4914) main_cset_slider_pane_g

0xca8e,	// (0x000b1a2c) main_cset_slider_pane_t1

0x6332,	// (0x000ab2d0) main_cset_slider_pane_t2

0x634c,	// (0x000ab2ea) main_cset_slider_pane_t3

0x6366,	// (0x000ab304) main_cset_slider_pane_t4

0x6380,	// (0x000ab31e) main_cset_slider_pane_t5

0x639a,	// (0x000ab338) main_cset_slider_pane_t6

0x63af,	// (0x000ab34d) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000b4939) main_cset_slider_pane_t

0x64b3,	// (0x000ab451) cset_list_set_pane_ParamLimits

0x64b3,	// (0x000ab451) cset_list_set_pane

0x64c5,	// (0x000ab463) aid_position_infowindow_above

0x64cd,	// (0x000ab46b) aid_position_infowindow_below

0xeeff,	// (0x000b3e9d) cset_list_set_pane_g1_ParamLimits

0xeeff,	// (0x000b3e9d) cset_list_set_pane_g1

0xcb40,	// (0x000b1ade) cset_list_set_pane_g3_ParamLimits

0xcb40,	// (0x000b1ade) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000b4958) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000b4958) cset_list_set_pane_g

0xcb4f,	// (0x000b1aed) cset_list_set_pane_t1_ParamLimits

0xcb4f,	// (0x000b1aed) cset_list_set_pane_t1

0xeef1,	// (0x000b3e8f) list_highlight_pane_cp021_ParamLimits

0xeef1,	// (0x000b3e8f) list_highlight_pane_cp021

0xa75f,	// (0x000af6fd) cset_slider_pane_g1

0xa771,	// (0x000af70f) cset_slider_pane_g2

0xa768,	// (0x000af706) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000b495d) cset_slider_pane_g

0xa14f,	// (0x000af0ed) aid_area_touch_cam4_zoom

0xa157,	// (0x000af0f5) cam4_zoom_cont_pane

0xa15f,	// (0x000af0fd) cam4_zoom_pane_g1

0xa167,	// (0x000af105) cam4_zoom_pane_g2

0x64d5,	// (0x000ab473) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000b4964) cam4_zoom_pane_g

0xa16f,	// (0x000af10d) cam4_zoom_cont_pane_g1

0xa178,	// (0x000af116) cam4_zoom_cont_pane_g2

0xa181,	// (0x000af11f) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000b496b) cam4_zoom_cont_pane_g

0x5950,	// (0x000aa8ee) call4_image_pane_ParamLimits

0x5950,	// (0x000aa8ee) call4_image_pane

0xc7da,	// (0x000b1778) call4_windows_conf_pane_ParamLimits

0xc81b,	// (0x000b17b9) popup_call4_audio_in_window_ParamLimits

0xc81b,	// (0x000b17b9) popup_call4_audio_in_window

0xe5a6,	// (0x000b3544) bg_popup_call2_act_pane_cp02

0xc891,	// (0x000b182f) call4_list_conf_pane

0xbe4a,	// (0x000b0de8) call4_image_pane_g1

0xbe4a,	// (0x000b0de8) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000b467a) call4_image_pane_g

0xcb64,	// (0x000b1b02) list_single_graphic_popup_conf4_pane_ParamLimits

0xcb64,	// (0x000b1b02) list_single_graphic_popup_conf4_pane

0xe5a6,	// (0x000b3544) list_highlight_pane_cp022

0xcb77,	// (0x000b1b15) list_single_graphic_popup_conf4_pane_g1

0xa330,	// (0x000af2ce) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000b4972) list_single_graphic_popup_conf4_pane_g

0xcb7f,	// (0x000b1b1d) list_single_graphic_popup_conf4_pane_t1

0x1584,	// (0x000a6522) popup_vtel_slider_window_ParamLimits

0x1584,	// (0x000a6522) popup_vtel_slider_window

0xc7bc,	// (0x000b175a) dialer2_ne_pane_t2_ParamLimits

0xc7bc,	// (0x000b175a) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000b4853) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000b4853) dialer2_ne_pane_t

0xbc1a,	// (0x000b0bb8) bg_popup_sub_pane_cp010_ParamLimits

0xbc1a,	// (0x000b0bb8) bg_popup_sub_pane_cp010

0x64dd,	// (0x000ab47b) popup_vtel_slider_window_g1_ParamLimits

0x64dd,	// (0x000ab47b) popup_vtel_slider_window_g1

0x64f0,	// (0x000ab48e) popup_vtel_slider_window_g2_ParamLimits

0x64f0,	// (0x000ab48e) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000b4977) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000b4977) popup_vtel_slider_window_g

0x6546,	// (0x000ab4e4) vtel_slider_pane_ParamLimits

0x6546,	// (0x000ab4e4) vtel_slider_pane

0x6568,	// (0x000ab506) vtel_slider_pane_g1_ParamLimits

0x6568,	// (0x000ab506) vtel_slider_pane_g1

0x657c,	// (0x000ab51a) vtel_slider_pane_g2_ParamLimits

0x657c,	// (0x000ab51a) vtel_slider_pane_g2

0x6594,	// (0x000ab532) vtel_slider_pane_g3_ParamLimits

0x6594,	// (0x000ab532) vtel_slider_pane_g3

0x6568,	// (0x000ab506) vtel_slider_pane_g4_ParamLimits

0x6568,	// (0x000ab506) vtel_slider_pane_g4

0x65aa,	// (0x000ab548) vtel_slider_pane_g5_ParamLimits

0x65aa,	// (0x000ab548) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000b4980) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000b4980) vtel_slider_pane_g

0x94e7,	// (0x000ae485) main_gallery2_pane

0x5c90,	// (0x000aac2e) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c90,	// (0x000aac2e) aid_size_row_itut2_dropdow_list

0x5d1c,	// (0x000aacba) grid_vitu2_function_top_pane_ParamLimits

0x5d1c,	// (0x000aacba) grid_vitu2_function_top_pane

0x5d86,	// (0x000aad24) popup_vitu2_dropdown_list_window_ParamLimits

0x5d86,	// (0x000aad24) popup_vitu2_dropdown_list_window

0x5daf,	// (0x000aad4d) popup_vitu2_match_list_window

0x65ce,	// (0x000ab56c) cell_vitu2_function_top_pane_ParamLimits

0x65ce,	// (0x000ab56c) cell_vitu2_function_top_pane

0x65e6,	// (0x000ab584) cell_vitu2_function_top_pane_cp01_ParamLimits

0x65e6,	// (0x000ab584) cell_vitu2_function_top_pane_cp01

0x6602,	// (0x000ab5a0) cell_vitu2_function_top_wide_pane_ParamLimits

0x6602,	// (0x000ab5a0) cell_vitu2_function_top_wide_pane

0x94e7,	// (0x000ae485) bg_button_pane_cp012

0x661e,	// (0x000ab5bc) cell_vitu2_function_top_pane_g1

0xa18a,	// (0x000af128) bg_button_pane_cp013_ParamLimits

0xa18a,	// (0x000af128) bg_button_pane_cp013

0x6632,	// (0x000ab5d0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6632,	// (0x000ab5d0) cell_vitu2_function_top_wide_pane_g1

0x94e7,	// (0x000ae485) bg_popup_sub_pane_cp20

0x664a,	// (0x000ab5e8) list_vitu2_match_list_pane

0xc93b,	// (0x000b18d9) bg_popup_sub_pane_cp20_g1

0xc943,	// (0x000b18e1) bg_popup_sub_pane_cp20_g2

0x97a7,	// (0x000ae745) bg_popup_sub_pane_cp20_g3

0xc94b,	// (0x000b18e9) bg_popup_sub_pane_cp20_g4

0x9787,	// (0x000ae725) bg_popup_sub_pane_cp20_g5

0xcb95,	// (0x000b1b33) bg_popup_sub_pane_cp20_g6

0xc95b,	// (0x000b18f9) bg_popup_sub_pane_cp20_g7

0xc963,	// (0x000b1901) bg_popup_sub_pane_cp20_g8

0xc96b,	// (0x000b1909) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000b498b) bg_popup_sub_pane_cp20_g

0xa1a6,	// (0x000af144) list_vitu2_match_list_item_pane_ParamLimits

0xa1a6,	// (0x000af144) list_vitu2_match_list_item_pane

0xa1b8,	// (0x000af156) list_vitu2_match_list_item_pane_t1

0x94f5,	// (0x000ae493) bg_popup_sub_pane_cp21

0xa1c6,	// (0x000af164) grid_vitu2_dropdown_list_pane

0x66b8,	// (0x000ab656) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x66b8,	// (0x000ab656) cell_vitu2_dropdown_list_char_pane

0x66d9,	// (0x000ab677) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x66d9,	// (0x000ab677) cell_vitu2_dropdown_list_ctrl_pane

0xcb9d,	// (0x000b1b3b) cell_vitu2_dropdown_list_char_pane_g1

0xcba6,	// (0x000b1b44) cell_vitu2_dropdown_list_char_pane_g2

0xcbaf,	// (0x000b1b4d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000b49a8) cell_vitu2_dropdown_list_char_pane_g

0x6705,	// (0x000ab6a3) cell_vitu2_dropdown_list_char_pane_t1

0x6713,	// (0x000ab6b1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6713,	// (0x000ab6b1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6720,	// (0x000ab6be) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6720,	// (0x000ab6be) cell_vitu2_dropdown_list_ctrl_pane_g2

0x672d,	// (0x000ab6cb) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x672d,	// (0x000ab6cb) cell_vitu2_dropdown_list_ctrl_pane_g3

0x673a,	// (0x000ab6d8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x673a,	// (0x000ab6d8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa05e,	// (0x000aeffc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa05e,	// (0x000aeffc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000b49af) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000b49af) cell_vitu2_dropdown_list_ctrl_pane_g

0x6756,	// (0x000ab6f4) aid_size_cell_gallery2_ParamLimits

0x6756,	// (0x000ab6f4) aid_size_cell_gallery2

0x6774,	// (0x000ab712) grid_gallery2_pane_ParamLimits

0x6774,	// (0x000ab712) grid_gallery2_pane

0x678e,	// (0x000ab72c) scroll_pane_cp029_ParamLimits

0x678e,	// (0x000ab72c) scroll_pane_cp029

0x679a,	// (0x000ab738) cell_gallery2_pane_ParamLimits

0x679a,	// (0x000ab738) cell_gallery2_pane

0xcbb8,	// (0x000b1b56) cell_gallery2_pane_g2

0x67f6,	// (0x000ab794) cell_gallery2_pane_g3

0xcbc0,	// (0x000b1b5e) cell_gallery2_pane_g4

0xcbc8,	// (0x000b1b66) cell_gallery2_pane_g5

0xeea8,	// (0x000b3e46) grid_highlight_pane_cp10

0x5daf,	// (0x000aad4d) popup_vitu2_match_list_window_ParamLimits

0x5dc6,	// (0x000aad64) popup_vitu2_query_window_ParamLimits

0x5dc6,	// (0x000aad64) popup_vitu2_query_window

0x94f5,	// (0x000ae493) bg_vitu2_candi_button_pane

0xcb9d,	// (0x000b1b3b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcba6,	// (0x000b1b44) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcbaf,	// (0x000b1b4d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x67fe,	// (0x000ab79c) bg_button_pane_cp015

0x6810,	// (0x000ab7ae) bg_button_pane_cp016

0x6823,	// (0x000ab7c1) bg_button_pane_cp017

0xba2d,	// (0x000b09cb) bg_popup_sub_pane_cp22

0xcbd0,	// (0x000b1b6e) popup_vitu2_query_window_g1

0x6868,	// (0x000ab806) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000b49ba) popup_vitu2_query_window_g

0x6887,	// (0x000ab825) popup_vitu2_query_window_t1_ParamLimits

0x6887,	// (0x000ab825) popup_vitu2_query_window_t1

0x68bc,	// (0x000ab85a) popup_vitu2_query_window_t2_ParamLimits

0x68bc,	// (0x000ab85a) popup_vitu2_query_window_t2

0x68ce,	// (0x000ab86c) popup_vitu2_query_window_t3_ParamLimits

0x68ce,	// (0x000ab86c) popup_vitu2_query_window_t3

0x68f6,	// (0x000ab894) popup_vitu2_query_window_t4_ParamLimits

0x68f6,	// (0x000ab894) popup_vitu2_query_window_t4

0x6917,	// (0x000ab8b5) popup_vitu2_query_window_t5_ParamLimits

0x6917,	// (0x000ab8b5) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000b49c1) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000b49c1) popup_vitu2_query_window_t

0xca3d,	// (0x000b19db) main_cset_text_pane

0x621b,	// (0x000ab1b9) aid_area_touch_slider_ParamLimits

0x6237,	// (0x000ab1d5) cset_slider_pane_ParamLimits

0x6261,	// (0x000ab1ff) main_cset_slider_pane_g1_ParamLimits

0x6276,	// (0x000ab214) main_cset_slider_pane_g2_ParamLimits

0xca5e,	// (0x000b19fc) main_cset_slider_pane_g3_ParamLimits

0xca5e,	// (0x000b19fc) main_cset_slider_pane_g3

0x628b,	// (0x000ab229) main_cset_slider_pane_g4_ParamLimits

0x628b,	// (0x000ab229) main_cset_slider_pane_g4

0x629a,	// (0x000ab238) main_cset_slider_pane_g5_ParamLimits

0x629a,	// (0x000ab238) main_cset_slider_pane_g5

0x62a6,	// (0x000ab244) main_cset_slider_pane_g6_ParamLimits

0x62a6,	// (0x000ab244) main_cset_slider_pane_g6

0xf976,	// (0x000b4914) main_cset_slider_pane_g_ParamLimits

0xca8e,	// (0x000b1a2c) main_cset_slider_pane_t1_ParamLimits

0x6332,	// (0x000ab2d0) main_cset_slider_pane_t2_ParamLimits

0x634c,	// (0x000ab2ea) main_cset_slider_pane_t3_ParamLimits

0x6366,	// (0x000ab304) main_cset_slider_pane_t4_ParamLimits

0x6380,	// (0x000ab31e) main_cset_slider_pane_t5_ParamLimits

0x639a,	// (0x000ab338) main_cset_slider_pane_t6_ParamLimits

0x63af,	// (0x000ab34d) main_cset_slider_pane_t7_ParamLimits

0x63d9,	// (0x000ab377) main_cset_slider_pane_t8_ParamLimits

0x63d9,	// (0x000ab377) main_cset_slider_pane_t8

0x6401,	// (0x000ab39f) main_cset_slider_pane_t9_ParamLimits

0x6401,	// (0x000ab39f) main_cset_slider_pane_t9

0x6429,	// (0x000ab3c7) main_cset_slider_pane_t10_ParamLimits

0x6429,	// (0x000ab3c7) main_cset_slider_pane_t10

0x6451,	// (0x000ab3ef) main_cset_slider_pane_t11_ParamLimits

0x6451,	// (0x000ab3ef) main_cset_slider_pane_t11

0x6479,	// (0x000ab417) main_cset_slider_pane_t12_ParamLimits

0x6479,	// (0x000ab417) main_cset_slider_pane_t12

0x6496,	// (0x000ab434) main_cset_slider_pane_t13_ParamLimits

0x6496,	// (0x000ab434) main_cset_slider_pane_t13

0xf99b,	// (0x000b4939) main_cset_slider_pane_t_ParamLimits

0xe5a6,	// (0x000b3544) bg_popup_sub_pane_cp011

0xcbdc,	// (0x000b1b7a) main_cset_text_pane_g1

0xcbe4,	// (0x000b1b82) main_cset_text_pane_t1

0xcbf2,	// (0x000b1b90) main_cset_text_pane_t2

0xcc00,	// (0x000b1b9e) main_cset_text_pane_t3

0xcc0e,	// (0x000b1bac) main_cset_text_pane_t4

0xcc1c,	// (0x000b1bba) main_cset_text_pane_t5

0xcc2a,	// (0x000b1bc8) main_cset_text_pane_t6

0xcc38,	// (0x000b1bd6) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000b49d0) main_cset_text_pane_t

0x94f5,	// (0x000ae493) main_cam4_burst_pane

0x94f5,	// (0x000ae493) main_cam5_pane

0x615a,	// (0x000ab0f8) bg_button_pane_cp019

0x6163,	// (0x000ab101) bg_button_pane_cp020

0xca6a,	// (0x000b1a08) main_cset_slider_pane_g7_ParamLimits

0xca6a,	// (0x000b1a08) main_cset_slider_pane_g7

0xca76,	// (0x000b1a14) main_cset_slider_pane_g8_ParamLimits

0xca76,	// (0x000b1a14) main_cset_slider_pane_g8

0x62ba,	// (0x000ab258) main_cset_slider_pane_g9_ParamLimits

0x62ba,	// (0x000ab258) main_cset_slider_pane_g9

0x62c6,	// (0x000ab264) main_cset_slider_pane_g10_ParamLimits

0x62c6,	// (0x000ab264) main_cset_slider_pane_g10

0x62d2,	// (0x000ab270) main_cset_slider_pane_g11_ParamLimits

0x62d2,	// (0x000ab270) main_cset_slider_pane_g11

0x62de,	// (0x000ab27c) main_cset_slider_pane_g12_ParamLimits

0x62de,	// (0x000ab27c) main_cset_slider_pane_g12

0x62ea,	// (0x000ab288) main_cset_slider_pane_g13_ParamLimits

0x62ea,	// (0x000ab288) main_cset_slider_pane_g13

0x62f6,	// (0x000ab294) main_cset_slider_pane_g14_ParamLimits

0x62f6,	// (0x000ab294) main_cset_slider_pane_g14

0x6302,	// (0x000ab2a0) main_cset_slider_pane_g15_ParamLimits

0x6302,	// (0x000ab2a0) main_cset_slider_pane_g15

0xcace,	// (0x000b1a6c) main_cset_slider_pane_t14_ParamLimits

0xcace,	// (0x000b1a6c) main_cset_slider_pane_t14

0xcb07,	// (0x000b1aa5) main_cset_slider_pane_t15_ParamLimits

0xcb07,	// (0x000b1aa5) main_cset_slider_pane_t15

0x698e,	// (0x000ab92c) aid_cam4_burst_size_cell_ParamLimits

0x698e,	// (0x000ab92c) aid_cam4_burst_size_cell

0x69ae,	// (0x000ab94c) grid_cam4_burst_pane_ParamLimits

0x69ae,	// (0x000ab94c) grid_cam4_burst_pane

0x69e6,	// (0x000ab984) linegrid_cam4_burst_pane_ParamLimits

0x69e6,	// (0x000ab984) linegrid_cam4_burst_pane

0xcc46,	// (0x000b1be4) scroll_pane_cp30_ParamLimits

0xcc46,	// (0x000b1be4) scroll_pane_cp30

0x6a0a,	// (0x000ab9a8) cell_cam4_burst_pane_ParamLimits

0x6a0a,	// (0x000ab9a8) cell_cam4_burst_pane

0xcc52,	// (0x000b1bf0) linegrid_cam4_burst_pane_g1_ParamLimits

0xcc52,	// (0x000b1bf0) linegrid_cam4_burst_pane_g1

0x6a57,	// (0x000ab9f5) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a57,	// (0x000ab9f5) linegrid_cam4_burst_pane_g2

0xcc5f,	// (0x000b1bfd) linegrid_cam4_burst_pane_g3_ParamLimits

0xcc5f,	// (0x000b1bfd) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000b49df) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000b49df) linegrid_cam4_burst_pane_g

0x6a68,	// (0x000aba06) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a68,	// (0x000aba06) linegrid_cam4_burst_pane_g3_copy1

0xcc6c,	// (0x000b1c0a) linegrid_cam4_burst_pane_g4_ParamLimits

0xcc6c,	// (0x000b1c0a) linegrid_cam4_burst_pane_g4

0x6a82,	// (0x000aba20) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a82,	// (0x000aba20) linegrid_cam4_burst_pane_g5

0x6a93,	// (0x000aba31) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a93,	// (0x000aba31) linegrid_cam4_burst_pane_g6

0xcc79,	// (0x000b1c17) linegrid_cam4_burst_pane_g7_ParamLimits

0xcc79,	// (0x000b1c17) linegrid_cam4_burst_pane_g7

0x6aaa,	// (0x000aba48) cell_cam4_burst_pane_g1

0xcc92,	// (0x000b1c30) main_cam5_pane_t1_ParamLimits

0xcc92,	// (0x000b1c30) main_cam5_pane_t1

0xcca4,	// (0x000b1c42) main_cam5_pane_t2_ParamLimits

0xcca4,	// (0x000b1c42) main_cam5_pane_t2

0xccb6,	// (0x000b1c54) main_cam5_pane_t3_ParamLimits

0xccb6,	// (0x000b1c54) main_cam5_pane_t3

0xccc8,	// (0x000b1c66) main_cam5_pane_t4_ParamLimits

0xccc8,	// (0x000b1c66) main_cam5_pane_t4

0xcce0,	// (0x000b1c7e) main_cam5_pane_t5_ParamLimits

0xcce0,	// (0x000b1c7e) main_cam5_pane_t5

0xccf4,	// (0x000b1c92) main_cam5_pane_t6_ParamLimits

0xccf4,	// (0x000b1c92) main_cam5_pane_t6

0xcd08,	// (0x000b1ca6) main_cam5_pane_t7_ParamLimits

0xcd08,	// (0x000b1ca6) main_cam5_pane_t7

0xcd1a,	// (0x000b1cb8) main_cam5_pane_t8_ParamLimits

0xcd1a,	// (0x000b1cb8) main_cam5_pane_t8

0xcd36,	// (0x000b1cd4) main_cam5_pane_t9_ParamLimits

0xcd36,	// (0x000b1cd4) main_cam5_pane_t9

0xcd48,	// (0x000b1ce6) main_cam5_pane_t10_ParamLimits

0xcd48,	// (0x000b1ce6) main_cam5_pane_t10

0xcd5a,	// (0x000b1cf8) main_cam5_pane_t11_ParamLimits

0xcd5a,	// (0x000b1cf8) main_cam5_pane_t11

0xcd6c,	// (0x000b1d0a) main_cam5_pane_t12_ParamLimits

0xcd6c,	// (0x000b1d0a) main_cam5_pane_t12

0xcd81,	// (0x000b1d1f) main_cam5_pane_t13_ParamLimits

0xcd81,	// (0x000b1d1f) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000b49eb) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000b49eb) main_cam5_pane_t

0x0440,	// (0x000a53de) popup_scut_keymap_window_ParamLimits

0x0440,	// (0x000a53de) popup_scut_keymap_window

0x6abd,	// (0x000aba5b) aid_size_cell_brow_shortcut

0xeea8,	// (0x000b3e46) bg_popup_window_pane_cp010

0x6ac9,	// (0x000aba67) grid_scut_pane

0x6ad5,	// (0x000aba73) cell_scut_pane_ParamLimits

0x6ad5,	// (0x000aba73) cell_scut_pane

0x6aec,	// (0x000aba8a) cell_scut_pane_g1

0xcd9e,	// (0x000b1d3c) cell_scut_pane_t1

0xcdad,	// (0x000b1d4b) cell_scut_pane_t2

0x6af5,	// (0x000aba93) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000b4a06) cell_scut_pane_t

0x4825,	// (0x000a97c3) main_mup3_pane_g8_ParamLimits

0x4825,	// (0x000a97c3) main_mup3_pane_g8

0x5ca8,	// (0x000aac46) area_vitu2_query_pane_ParamLimits

0x5ca8,	// (0x000aac46) area_vitu2_query_pane

0x6836,	// (0x000ab7d4) input_focus_pane_cp08

0xcdbc,	// (0x000b1d5a) area_vitu2_query_pane_g1

0x6b03,	// (0x000abaa1) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000b4a0d) area_vitu2_query_pane_g

0x6b14,	// (0x000abab2) area_vitu2_query_pane_t1_ParamLimits

0x6b14,	// (0x000abab2) area_vitu2_query_pane_t1

0x6b28,	// (0x000abac6) area_vitu2_query_pane_t2_ParamLimits

0x6b28,	// (0x000abac6) area_vitu2_query_pane_t2

0x6b3c,	// (0x000abada) area_vitu2_query_pane_t3_ParamLimits

0x6b3c,	// (0x000abada) area_vitu2_query_pane_t3

0xcdc8,	// (0x000b1d66) area_vitu2_query_pane_t4_ParamLimits

0xcdc8,	// (0x000b1d66) area_vitu2_query_pane_t4

0xcdf0,	// (0x000b1d8e) area_vitu2_query_pane_t5_ParamLimits

0xcdf0,	// (0x000b1d8e) area_vitu2_query_pane_t5

0xce18,	// (0x000b1db6) area_vitu2_query_pane_t6_ParamLimits

0xce18,	// (0x000b1db6) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000b4a12) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000b4a12) area_vitu2_query_pane_t

0x6b64,	// (0x000abb02) bg_button_pane_cp018

0x6b72,	// (0x000abb10) bg_button_pane_cp021

0x6b7e,	// (0x000abb1c) bg_button_pane_cp022

0x6b8d,	// (0x000abb2b) input_focus_pane_cp09

0xa46c,	// (0x000af40a) aid_size_touch_mv_arrow_left

0xa495,	// (0x000af433) aid_size_touch_mv_arrow_right

0x631a,	// (0x000ab2b8) main_cset_slider_pane_g16_ParamLimits

0x631a,	// (0x000ab2b8) main_cset_slider_pane_g16

0x6326,	// (0x000ab2c4) main_cset_slider_pane_g17_ParamLimits

0x6326,	// (0x000ab2c4) main_cset_slider_pane_g17

0x6aaa,	// (0x000aba48) cell_cam4_burst_pane_g1_ParamLimits

0xe5a6,	// (0x000b3544) compa_mode_pane

0x6500,	// (0x000ab49e) popup_vtel_slider_window_g3_ParamLimits

0x6500,	// (0x000ab49e) popup_vtel_slider_window_g3

0x6517,	// (0x000ab4b5) popup_vtel_slider_window_g4_ParamLimits

0x6517,	// (0x000ab4b5) popup_vtel_slider_window_g4

0x652e,	// (0x000ab4cc) popup_vtel_slider_window_t1_ParamLimits

0x652e,	// (0x000ab4cc) popup_vtel_slider_window_t1

0x94f5,	// (0x000ae493) main_cl_pane

0x9cce,	// (0x000aec6c) popup_imed_adjust2_window_ParamLimits

0xba2d,	// (0x000b09cb) bg_tb_trans_pane_cp05_ParamLimits

0xc3d1,	// (0x000b136f) popup_imed_adjust2_window_g1_ParamLimits

0xc3e0,	// (0x000b137e) popup_imed_adjust2_window_g2_ParamLimits

0xc3e0,	// (0x000b137e) popup_imed_adjust2_window_g2

0xc3ec,	// (0x000b138a) popup_imed_adjust2_window_g3_ParamLimits

0xc3ec,	// (0x000b138a) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000b477d) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000b477d) popup_imed_adjust2_window_g

0xc3f8,	// (0x000b1396) popup_imed_adjust2_window_t1_ParamLimits

0xc410,	// (0x000b13ae) slider_imed_adjust_pane_ParamLimits

0xc424,	// (0x000b13c2) slider_imed_adjust_pane_g1_ParamLimits

0xc434,	// (0x000b13d2) slider_imed_adjust_pane_g2_ParamLimits

0xc444,	// (0x000b13e2) slider_imed_adjust_pane_g3_ParamLimits

0xc455,	// (0x000b13f3) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000b4784) slider_imed_adjust_pane_g_ParamLimits

0x5a31,	// (0x000aa9cf) aid_touch_area_cam4_ParamLimits

0x5a31,	// (0x000aa9cf) aid_touch_area_cam4

0xa042,	// (0x000aefe0) battery_pane_cp01

0x5b00,	// (0x000aaa9e) main_camera4_pane_g6_ParamLimits

0x5b00,	// (0x000aaa9e) main_camera4_pane_g6

0x5b2a,	// (0x000aaac8) main_camera4_pane_t2_ParamLimits

0x5b2a,	// (0x000aaac8) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000b4887) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000b4887) main_camera4_pane_t

0x5b5f,	// (0x000aaafd) aid_touch_area_vid4_ParamLimits

0x5b5f,	// (0x000aaafd) aid_touch_area_vid4

0x5bb3,	// (0x000aab51) main_video4_pane_g5_ParamLimits

0x5bb3,	// (0x000aab51) main_video4_pane_g5

0x5bd8,	// (0x000aab76) vid4_progress_pane_ParamLimits

0x5bd8,	// (0x000aab76) vid4_progress_pane

0xca82,	// (0x000b1a20) main_cset_slider_pane_g18_ParamLimits

0xca82,	// (0x000b1a20) main_cset_slider_pane_g18

0xcc86,	// (0x000b1c24) cell_cam4_burst_pane_g2_ParamLimits

0xcc86,	// (0x000b1c24) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000b49e6) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000b49e6) cell_cam4_burst_pane_g

0xece3,	// (0x000b3c81) bg_cl_pane_ParamLimits

0xece3,	// (0x000b3c81) bg_cl_pane

0x6b9c,	// (0x000abb3a) cl_header_pane_ParamLimits

0x6b9c,	// (0x000abb3a) cl_header_pane

0x6bb0,	// (0x000abb4e) cl_listscroll_pane_ParamLimits

0x6bb0,	// (0x000abb4e) cl_listscroll_pane

0xce64,	// (0x000b1e02) bg_cl_pane_g1

0xce6c,	// (0x000b1e0a) bg_cl_pane_g2

0xce74,	// (0x000b1e12) bg_cl_pane_g3

0xce7c,	// (0x000b1e1a) bg_cl_pane_g4

0xce84,	// (0x000b1e22) bg_cl_pane_g5

0xce8c,	// (0x000b1e2a) bg_cl_pane_g6

0xce94,	// (0x000b1e32) bg_cl_pane_g7

0xce9c,	// (0x000b1e3a) bg_cl_pane_g8

0xcea4,	// (0x000b1e42) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000b4a21) bg_cl_pane_g

0x6bc0,	// (0x000abb5e) aid_height_cl_leading_ParamLimits

0x6bc0,	// (0x000abb5e) aid_height_cl_leading

0x6bcc,	// (0x000abb6a) aid_height_cl_text_ParamLimits

0x6bcc,	// (0x000abb6a) aid_height_cl_text

0xeef1,	// (0x000b3e8f) bg_cl_header_pane_ParamLimits

0xeef1,	// (0x000b3e8f) bg_cl_header_pane

0x6beb,	// (0x000abb89) cl_header_pane_g1_ParamLimits

0x6beb,	// (0x000abb89) cl_header_pane_g1

0x6c01,	// (0x000abb9f) cl_header_pane_t1_ParamLimits

0x6c01,	// (0x000abb9f) cl_header_pane_t1

0xceac,	// (0x000b1e4a) cl_list_pane

0xca55,	// (0x000b19f3) hc_scroll_pane_cp01

0x9787,	// (0x000ae725) bg_cl_header_pane_g1

0xc93b,	// (0x000b18d9) bg_cl_header_pane_g2

0x97a7,	// (0x000ae745) bg_cl_header_pane_g3

0xc94b,	// (0x000b18e9) bg_cl_header_pane_g4

0xc943,	// (0x000b18e1) bg_cl_header_pane_g5

0xcb95,	// (0x000b1b33) bg_cl_header_pane_g6

0xc963,	// (0x000b1901) bg_cl_header_pane_g7

0xc96b,	// (0x000b1909) bg_cl_header_pane_g8

0xc95b,	// (0x000b18f9) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000b4a34) bg_cl_header_pane_g

0x6c1a,	// (0x000abbb8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c1a,	// (0x000abbb8) hc_cl_list_double_graphic_heading_pane

0x6c2b,	// (0x000abbc9) hc_cl_list_single_graphic_pane_ParamLimits

0x6c2b,	// (0x000abbc9) hc_cl_list_single_graphic_pane

0x6c41,	// (0x000abbdf) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c41,	// (0x000abbdf) hc_cl_list_single_graphic_pane_g1

0x6c4d,	// (0x000abbeb) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c4d,	// (0x000abbeb) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000b4a47) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000b4a47) hc_cl_list_single_graphic_pane_g

0x6c61,	// (0x000abbff) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c61,	// (0x000abbff) hc_cl_list_single_graphic_pane_t1

0x6c41,	// (0x000abbdf) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c41,	// (0x000abbdf) hc_cl_list_double_graphic_heading_pane_g1

0x6c76,	// (0x000abc14) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c76,	// (0x000abc14) hc_cl_list_double_graphic_heading_pane_g2

0x6c8a,	// (0x000abc28) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c8a,	// (0x000abc28) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000b4a4c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000b4a4c) hc_cl_list_double_graphic_heading_pane_g

0x6c9e,	// (0x000abc3c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c9e,	// (0x000abc3c) hc_cl_list_double_graphic_heading_pane_t1

0x6cb3,	// (0x000abc51) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6cb3,	// (0x000abc51) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000b4a53) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000b4a53) hc_cl_list_double_graphic_heading_pane_t

0xa1d6,	// (0x000af174) vid4_progress_pane_g1

0xa1e6,	// (0x000af184) vid4_progress_pane_g2

0x6cc8,	// (0x000abc66) vid4_progress_pane_g3

0xa1f6,	// (0x000af194) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000b4a58) vid4_progress_pane_g

0x6cda,	// (0x000abc78) vid4_progress_pane_t1

0xa20e,	// (0x000af1ac) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000b4a63) vid4_progress_pane_t

0x6cf2,	// (0x000abc90) wait_bar_pane_cp07

0xbc28,	// (0x000b0bc6) blid_firmament_pane_ParamLimits

0xbc6b,	// (0x000b0c09) popup_blid_sat_info2_window_g1

0xbc8f,	// (0x000b0c2d) popup_blid_sat_info2_window_t3

0xbc9d,	// (0x000b0c3b) popup_blid_sat_info2_window_t4

0xbcab,	// (0x000b0c49) popup_blid_sat_info2_window_t5

0xbcb9,	// (0x000b0c57) popup_blid_sat_info2_window_t6

0xbcc9,	// (0x000b0c67) popup_blid_sat_info2_window_t7

0xbcd7,	// (0x000b0c75) popup_blid_sat_info2_window_t8

0xbce5,	// (0x000b0c83) popup_blid_sat_info2_window_t9

0xbcf3,	// (0x000b0c91) popup_blid_sat_info2_window_t10

0xbdca,	// (0x000b0d68) aid_firma_cardinal_ParamLimits

0xbdde,	// (0x000b0d7c) blid_firmament_pane_t1_ParamLimits

0xbdf5,	// (0x000b0d93) blid_firmament_pane_t2_ParamLimits

0xbe0c,	// (0x000b0daa) blid_firmament_pane_t3_ParamLimits

0xbe23,	// (0x000b0dc1) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000b4671) blid_firmament_pane_t_ParamLimits

0xbe3a,	// (0x000b0dd8) blid_sat_info_pane_ParamLimits

0x94e7,	// (0x000ae485) main_cam_set_pane_ParamLimits

0x50e9,	// (0x000aa087) aid_size_cell_colour_35_ParamLimits

0x5109,	// (0x000aa0a7) aid_size_cell_colour_112_ParamLimits

0x5129,	// (0x000aa0c7) aid_size_cell_effect_ParamLimits

0xba2d,	// (0x000b09cb) bg_tb_trans_pane_cp02_ParamLimits

0x9a1d,	// (0x000ae9bb) heading_imed_pane_ParamLimits

0x5149,	// (0x000aa0e7) listscroll_imed_pane_ParamLimits

0xb053,	// (0x000afff1) popup_call2_audio_first_window_g5_ParamLimits

0xb053,	// (0x000afff1) popup_call2_audio_first_window_g5

0x56dc,	// (0x000aa67a) aid_size_touch_image3_arrow_left_ParamLimits

0x56dc,	// (0x000aa67a) aid_size_touch_image3_arrow_left

0x5708,	// (0x000aa6a6) aid_size_touch_image3_arrow_right_ParamLimits

0x5708,	// (0x000aa6a6) aid_size_touch_image3_arrow_right

0xa223,	// (0x000af1c1) vid4_progress_pane_t3

0x545c,	// (0x000aa3fa) main_hwr_training_symbol_option_pane_ParamLimits

0x545c,	// (0x000aa3fa) main_hwr_training_symbol_option_pane

0xc6be,	// (0x000b165c) popup_hwr_training_preview_window_ParamLimits

0xc6be,	// (0x000b165c) popup_hwr_training_preview_window

0x547c,	// (0x000aa41a) hwr_training_navi_pane_g5_ParamLimits

0x547c,	// (0x000aa41a) hwr_training_navi_pane_g5

0xc929,	// (0x000b18c7) popup_char_count_window

0x94e7,	// (0x000ae485) bg_popup_sub_pane_cp20_ParamLimits

0x664a,	// (0x000ab5e8) list_vitu2_match_list_pane_ParamLimits

0x6659,	// (0x000ab5f7) vitu2_page_scroll_pane_ParamLimits

0x6659,	// (0x000ab5f7) vitu2_page_scroll_pane

0xcec6,	// (0x000b1e64) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcec6,	// (0x000b1e64) list_single_hwr_training_symbol_option_pane

0xced9,	// (0x000b1e77) list_single_hwr_training_symbol_option_pane_g1

0xcee1,	// (0x000b1e7f) list_single_hwr_training_symbol_option_pane_t1

0xceef,	// (0x000b1e8d) bg_button_pane_cp023

0xcef8,	// (0x000b1e96) bg_button_pane_cp024

0x6d34,	// (0x000abcd2) vitu2_page_scroll_pane_g1

0x6d3c,	// (0x000abcda) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000b4a6a) vitu2_page_scroll_pane_g

0x6d44,	// (0x000abce2) vitu2_page_scroll_pane_t1

0xbb88,	// (0x000b0b26) popup_char_count_window_g1

0xcf2b,	// (0x000b1ec9) popup_char_count_window_g2

0xcf34,	// (0x000b1ed2) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000b4a6f) popup_char_count_window_g

0xcf3d,	// (0x000b1edb) popup_char_count_window_t1

0x94f5,	// (0x000ae493) main_vded2_pane

0xc3bd,	// (0x000b135b) aid_size_cell_imed_line

0xc3c7,	// (0x000b1365) grid_imed_line_width_pane

0xa108,	// (0x000af0a6) vid4_indicators_pane_g4

0xcf4b,	// (0x000b1ee9) cell_imed_line_width_pane_ParamLimits

0xcf4b,	// (0x000b1ee9) cell_imed_line_width_pane

0xcf5f,	// (0x000b1efd) cell_imed_line_width_pane_g1

0xcabc,	// (0x000b1a5a) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000b4a76) cell_imed_line_width_pane_g

0x6d53,	// (0x000abcf1) main_vded2_pane_g1_ParamLimits

0x6d53,	// (0x000abcf1) main_vded2_pane_g1

0x6d69,	// (0x000abd07) main_vded2_pane_g2_ParamLimits

0x6d69,	// (0x000abd07) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000b4a7b) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000b4a7b) main_vded2_pane_g

0x6d7b,	// (0x000abd19) vded2_slider_pane_ParamLimits

0x6d7b,	// (0x000abd19) vded2_slider_pane

0x6d8b,	// (0x000abd29) aid_size_touch_vded2_end

0x6d95,	// (0x000abd33) aid_size_touch_vded2_playhead

0xcf68,	// (0x000b1f06) aid_size_touch_vded2_start

0xcf70,	// (0x000b1f0e) vded2_slider_bg_pane

0xcf79,	// (0x000b1f17) vded2_slider_pane_g1

0xcf82,	// (0x000b1f20) vded2_slider_pane_g2

0x6d9f,	// (0x000abd3d) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000b4a80) vded2_slider_pane_g

0xcf8a,	// (0x000b1f28) vded2_slider_bg_pane_g1

0xcf93,	// (0x000b1f31) vded2_slider_bg_pane_g2

0xcf9c,	// (0x000b1f3a) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000b4a87) vded2_slider_bg_pane_g

0x2e56,	// (0x000a7df4) aid_postcard_touch_down_pane_ParamLimits

0x2e56,	// (0x000a7df4) aid_postcard_touch_down_pane

0x2e6c,	// (0x000a7e0a) aid_postcard_touch_up_pane_ParamLimits

0x2e6c,	// (0x000a7e0a) aid_postcard_touch_up_pane

0x94f5,	// (0x000ae493) main_blid2_pane

0x9cb4,	// (0x000aec52) popup_blid2_search_window

0xe5a6,	// (0x000b3544) blid2_gps_pane

0xe5a6,	// (0x000b3544) blid2_navig_pane

0xe5a6,	// (0x000b3544) blid2_search_pane

0xe5a6,	// (0x000b3544) blid2_tripm_pane

0x6daa,	// (0x000abd48) blid2_search_pane_g1_ParamLimits

0x6daa,	// (0x000abd48) blid2_search_pane_g1

0x6dc4,	// (0x000abd62) blid2_search_pane_t1_ParamLimits

0x6dc4,	// (0x000abd62) blid2_search_pane_t1

0x6dd6,	// (0x000abd74) aid_size_cell_blid2_gps_ParamLimits

0x6dd6,	// (0x000abd74) aid_size_cell_blid2_gps

0x6dee,	// (0x000abd8c) blid2_gps_pane_g1_ParamLimits

0x6dee,	// (0x000abd8c) blid2_gps_pane_g1

0x6e02,	// (0x000abda0) grid_blid2_satellite_pane_ParamLimits

0x6e02,	// (0x000abda0) grid_blid2_satellite_pane

0x6e1c,	// (0x000abdba) blid2_navig_pane_g1_ParamLimits

0x6e1c,	// (0x000abdba) blid2_navig_pane_g1

0x6e28,	// (0x000abdc6) blid2_navig_pane_t1_ParamLimits

0x6e28,	// (0x000abdc6) blid2_navig_pane_t1

0x6e43,	// (0x000abde1) blid2_navig_pane_t2_ParamLimits

0x6e43,	// (0x000abde1) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000b4a8e) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000b4a8e) blid2_navig_pane_t

0x6e5e,	// (0x000abdfc) blid2_navig_ring_pane_ParamLimits

0x6e5e,	// (0x000abdfc) blid2_navig_ring_pane

0x6e77,	// (0x000abe15) blid2_speed_pane_ParamLimits

0x6e77,	// (0x000abe15) blid2_speed_pane

0x6e83,	// (0x000abe21) blid2_tripm_pane_g1_ParamLimits

0x6e83,	// (0x000abe21) blid2_tripm_pane_g1

0x6e9c,	// (0x000abe3a) blid2_tripm_pane_g2_ParamLimits

0x6e9c,	// (0x000abe3a) blid2_tripm_pane_g2

0x6eb0,	// (0x000abe4e) blid2_tripm_pane_g3_ParamLimits

0x6eb0,	// (0x000abe4e) blid2_tripm_pane_g3

0x6ec4,	// (0x000abe62) blid2_tripm_pane_g4_ParamLimits

0x6ec4,	// (0x000abe62) blid2_tripm_pane_g4

0x6ed8,	// (0x000abe76) blid2_tripm_pane_g5_ParamLimits

0x6ed8,	// (0x000abe76) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000b4a93) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000b4a93) blid2_tripm_pane_g

0x6efe,	// (0x000abe9c) blid2_tripm_pane_t1_ParamLimits

0x6efe,	// (0x000abe9c) blid2_tripm_pane_t1

0x6f19,	// (0x000abeb7) blid2_tripm_pane_t2_ParamLimits

0x6f19,	// (0x000abeb7) blid2_tripm_pane_t2

0x6f32,	// (0x000abed0) blid2_tripm_pane_t3_ParamLimits

0x6f32,	// (0x000abed0) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000b4aa0) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000b4aa0) blid2_tripm_pane_t

0x6f79,	// (0x000abf17) cell_blid2_satellite_pane_ParamLimits

0x6f79,	// (0x000abf17) cell_blid2_satellite_pane

0x6f97,	// (0x000abf35) cell_blid2_satellite_pane_g1

0xcfa5,	// (0x000b1f43) cell_blid2_satellite_pane_t1

0xbe4a,	// (0x000b0de8) blid2_speed_pane_g1

0xcfb3,	// (0x000b1f51) blid2_speed_pane_t1

0xcfc1,	// (0x000b1f5f) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000b4aa9) blid2_speed_pane_t

0xbe4a,	// (0x000b0de8) blid2_navig_ring_pane_g1

0x6fa0,	// (0x000abf3e) blid2_navig_ring_pane_g2

0x6fa8,	// (0x000abf46) blid2_navig_ring_pane_g3

0x6fb0,	// (0x000abf4e) blid2_navig_ring_pane_g4

0x6fb8,	// (0x000abf56) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000b4aae) blid2_navig_ring_pane_g

0xe5a6,	// (0x000b3544) bg_popup_window_pane_cp011

0xcfcf,	// (0x000b1f6d) popup_blid2_search_window_g1

0xcfd7,	// (0x000b1f75) popup_blid2_search_window_t1

0xcfe5,	// (0x000b1f83) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000b4ab9) popup_blid2_search_window_t

0x9696,	// (0x000ae634) main_browser_pane_g1

0xece3,	// (0x000b3c81) main_browser_pane_ParamLimits

0x94e7,	// (0x000ae485) bg_button_pane_cp011_ParamLimits

0x5ef0,	// (0x000aae8e) cell_vitu2_function_pane_g1_ParamLimits

0xba2d,	// (0x000b09cb) bg_popup_sub_pane_cp22_ParamLimits

0x6836,	// (0x000ab7d4) input_focus_pane_cp08_ParamLimits

0x684d,	// (0x000ab7eb) popup_vitu2_query_button_pane_ParamLimits

0x684d,	// (0x000ab7eb) popup_vitu2_query_button_pane

0x685e,	// (0x000ab7fc) popup_vitu2_query_input_button_pane

0xcbd0,	// (0x000b1b6e) popup_vitu2_query_window_g1_ParamLimits

0x6868,	// (0x000ab806) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000b49ba) popup_vitu2_query_window_g_ParamLimits

0xe5a6,	// (0x000b3544) bg_button_pane_cp026

0x6fc0,	// (0x000abf5e) popup_vitu2_query_input_button_pane_g1

0xe5a6,	// (0x000b3544) bg_button_pane_cp025

0xcff3,	// (0x000b1f91) popup_vitu2_query_button_pane_t1

0x44fe,	// (0x000a949c) main_mp3_pane_t6

0x450c,	// (0x000a94aa) popup_slider_window_cp01

0xa06c,	// (0x000af00a) cam4_battery_pane

0xa0c5,	// (0x000af063) cam4_battery_pane_cp02

0xa1ce,	// (0x000af16c) cam4_battery_pane_cp01

0xa1ce,	// (0x000af16c) cam4_battery_pane_cp03

0xcac4,	// (0x000b1a62) cam4_battery_pane_g1

0xbe4a,	// (0x000b0de8) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000b4abe) cam4_battery_pane_g

0xbd01,	// (0x000b0c9f) popup_blid_sat_info2_window_t11

0xa46c,	// (0x000af40a) aid_size_touch_mv_arrow_left_ParamLimits

0xa495,	// (0x000af433) aid_size_touch_mv_arrow_right_ParamLimits

0xa4f3,	// (0x000af491) navi_pane_g1_ParamLimits

0xa4ff,	// (0x000af49d) navi_pane_g2_ParamLimits

0xa52d,	// (0x000af4cb) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000b4383) navi_pane_g_ParamLimits

0x2883,	// (0x000a7821) navi_pane_mv_t1_ParamLimits

0x5155,	// (0x000aa0f3) grid_imed_effect_pane_ParamLimits

0x1481,	// (0x000a641f) aid_placing_vt_slider_lsc

0x95e5,	// (0x000ae583) aid_placing_vt_slider_prt

0xeef1,	// (0x000b3e8f) bg_tb_trans_pane_cp01_ParamLimits

0xbfd6,	// (0x000b0f74) popup_image_details_window_g1_ParamLimits

0xbfe9,	// (0x000b0f87) popup_image_details_window_g2_ParamLimits

0xbffe,	// (0x000b0f9c) popup_image_details_window_g3_ParamLimits

0xbffe,	// (0x000b0f9c) popup_image_details_window_g3

0xf718,	// (0x000b46b6) popup_image_details_window_g_ParamLimits

0xc012,	// (0x000b0fb0) popup_image_details_window_t1_ParamLimits

0xc024,	// (0x000b0fc2) popup_image_details_window_t2_ParamLimits

0xc03d,	// (0x000b0fdb) popup_image_details_window_t3_ParamLimits

0xc051,	// (0x000b0fef) popup_image_details_window_t4_ParamLimits

0xc06c,	// (0x000b100a) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000b46bd) popup_image_details_window_t_ParamLimits

0x6bd8,	// (0x000abb76) cl_header_name_pane_ParamLimits

0x6bd8,	// (0x000abb76) cl_header_name_pane

0x6fc8,	// (0x000abf66) cl_header_name_pane_t1_ParamLimits

0x6fc8,	// (0x000abf66) cl_header_name_pane_t1

0x6fe9,	// (0x000abf87) cl_header_name_pane_t2_ParamLimits

0x6fe9,	// (0x000abf87) cl_header_name_pane_t2

0x702b,	// (0x000abfc9) cl_header_name_pane_t3_ParamLimits

0x702b,	// (0x000abfc9) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000b4ac3) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000b4ac3) cl_header_name_pane_t

0xa5bc,	// (0x000af55a) navi_pane_mv_g2_ParamLimits

0xc8e6,	// (0x000b1884) field_vitu2_entry_pane_g1_ParamLimits

0xc8f2,	// (0x000b1890) field_vitu2_entry_pane_g2_ParamLimits

0xc8fe,	// (0x000b189c) field_vitu2_entry_pane_g3_ParamLimits

0xc8fe,	// (0x000b189c) field_vitu2_entry_pane_g3

0xf91b,	// (0x000b48b9) field_vitu2_entry_pane_g_ParamLimits

0xa13d,	// (0x000af0db) cell_vitu2_itu_pane_g1_ParamLimits

0x5e84,	// (0x000aae22) cell_vitu2_itu_pane_g2_ParamLimits

0x5e84,	// (0x000aae22) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000b48c5) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000b48c5) cell_vitu2_itu_pane_g

0x94e7,	// (0x000ae485) bg_vkb2_func_pane_cp05_ParamLimits

0x94e7,	// (0x000ae485) bg_vkb2_func_pane_cp05

0x94e7,	// (0x000ae485) bg_vkb2_func_pane_cp03

0x94e7,	// (0x000ae485) bg_vkb2_func_pane_cp04

0x94e7,	// (0x000ae485) bg_vkb2_func_pane_cp10_ParamLimits

0x94e7,	// (0x000ae485) bg_vkb2_func_pane_cp10

0x6b7e,	// (0x000abb1c) bg_vkb2_func_pane_cp08

0x6b64,	// (0x000abb02) bg_vkb2_func_pane_cp06

0x6b72,	// (0x000abb10) bg_vkb2_func_pane_cp07

0xcf01,	// (0x000b1e9f) bg_vkb2_func_pane_cp11_ParamLimits

0xcf01,	// (0x000b1e9f) bg_vkb2_func_pane_cp11

0xcf16,	// (0x000b1eb4) bg_vkb2_func_pane_cp12_ParamLimits

0xcf16,	// (0x000b1eb4) bg_vkb2_func_pane_cp12

0xe5a6,	// (0x000b3544) bg_vkb2_func_pane_cp09

0xc93b,	// (0x000b18d9) bg_vkb2_func_pane_g1

0x97a7,	// (0x000ae745) bg_vkb2_func_pane_g2

0xc943,	// (0x000b18e1) bg_vkb2_func_pane_g3

0xc94b,	// (0x000b18e9) bg_vkb2_func_pane_g4

0xcb95,	// (0x000b1b33) bg_vkb2_func_pane_g5

0xc963,	// (0x000b1901) bg_vkb2_func_pane_g6

0xc96b,	// (0x000b1909) bg_vkb2_func_pane_g7

0xc95b,	// (0x000b18f9) bg_vkb2_func_pane_g8

0x9787,	// (0x000ae725) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000b4aca) bg_vkb2_func_pane_g

0x6eec,	// (0x000abe8a) blid2_tripm_pane_g6_ParamLimits

0x6eec,	// (0x000abe8a) blid2_tripm_pane_g6

0xc776,	// (0x000b1714) mp4_progress_pane_g1

0x6f65,	// (0x000abf03) blid2_tripm_values_pane_ParamLimits

0x6f65,	// (0x000abf03) blid2_tripm_values_pane

0x705c,	// (0x000abffa) blid2_tripm_values_pane_t1

0x706a,	// (0x000ac008) blid2_tripm_values_pane_t2

0x7078,	// (0x000ac016) blid2_tripm_values_pane_t3

0x7086,	// (0x000ac024) blid2_tripm_values_pane_t4

0x7094,	// (0x000ac032) blid2_tripm_values_pane_t5

0x70a2,	// (0x000ac040) blid2_tripm_values_pane_t6

0x70b0,	// (0x000ac04e) blid2_tripm_values_pane_t7

0x70be,	// (0x000ac05c) blid2_tripm_values_pane_t8

0x70cc,	// (0x000ac06a) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000b4add) blid2_tripm_values_pane_t

0x14c3,	// (0x000a6461) call_video_pane_t1_ParamLimits

0x14e1,	// (0x000a647f) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000b420c) call_video_pane_t_ParamLimits

0x2d5b,	// (0x000a7cf9) msg_header_pane_g1_ParamLimits

0xa7a4,	// (0x000af742) msg_header_pane_g2_ParamLimits

0xa7a4,	// (0x000af742) msg_header_pane_g2

0x0001,

0xf488,	// (0x000b4426) msg_header_pane_g_ParamLimits

0xf488,	// (0x000b4426) msg_header_pane_g

0xece3,	// (0x000b3c81) main_clock2_pane_ParamLimits

0x4e56,	// (0x000a9df4) grid_clock2_toolbar_pane_ParamLimits

0x4e56,	// (0x000a9df4) grid_clock2_toolbar_pane

0x4e56,	// (0x000a9df4) listscroll_clock2_pane_ParamLimits

0x4e56,	// (0x000a9df4) listscroll_clock2_pane

0x4f49,	// (0x000a9ee7) main_clock2_pane_t3_ParamLimits

0x4f49,	// (0x000a9ee7) main_clock2_pane_t3

0x4f6d,	// (0x000a9f0b) main_clock2_pane_t4_ParamLimits

0x4f6d,	// (0x000a9f0b) main_clock2_pane_t4

0xd001,	// (0x000b1f9f) cell_clock2_toolbar_pane

0xd009,	// (0x000b1fa7) cell_clock2_toolbar_pane_cp01

0xd009,	// (0x000b1fa7) cell_clock2_toolbar_pane_cp02

0xd011,	// (0x000b1faf) cell_clock2_toolbar_pane_cp03

0xd019,	// (0x000b1fb7) list_clock2_pane

0xa3e2,	// (0x000af380) scroll_pane_cp10

0xd021,	// (0x000b1fbf) list_single_clock2_pane_ParamLimits

0xd021,	// (0x000b1fbf) list_single_clock2_pane

0xeea8,	// (0x000b3e46) list_highlight_pane_cp08

0xd02e,	// (0x000b1fcc) list_single_clock2_pane_t1

0xd03c,	// (0x000b1fda) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000b4af0) list_single_clock2_pane_t

0xe5a6,	// (0x000b3544) bg_button_pane_cp10

0xd04a,	// (0x000b1fe8) cell_clock2_toolbar_pane_g1

0x2de2,	// (0x000a7d80) aid_main_viewer_pane_g1_ParamLimits

0x2de2,	// (0x000a7d80) aid_main_viewer_pane_g1

0x2df0,	// (0x000a7d8e) aid_main_viewer_pane_g2_ParamLimits

0x2df0,	// (0x000a7d8e) aid_main_viewer_pane_g2

0x2dfe,	// (0x000a7d9c) aid_main_viewer_pane_g3_ParamLimits

0x2dfe,	// (0x000a7d9c) aid_main_viewer_pane_g3

0x2e0d,	// (0x000a7dab) aid_main_viewer_pane_g4_ParamLimits

0x2e0d,	// (0x000a7dab) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000b4437) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000b4437) aid_main_viewer_pane_g

0x3713,	// (0x000a86b1) main_calc_pane_ParamLimits

0x3739,	// (0x000a86d7) main_dialer2_pane_ParamLimits

0x94f5,	// (0x000ae493) main_cam6_pane

0x94f5,	// (0x000ae493) main_vid6_pane

0x4e62,	// (0x000a9e00) listscroll_gen_pane_cp06_ParamLimits

0x4e62,	// (0x000a9e00) listscroll_gen_pane_cp06

0x4f90,	// (0x000a9f2e) main_clock2_pane_t5_ParamLimits

0x4f90,	// (0x000a9f2e) main_clock2_pane_t5

0x4fea,	// (0x000a9f88) aid_call2_pane_cp10_ParamLimits

0x4ffc,	// (0x000a9f9a) aid_call_pane_cp10_ParamLimits

0xa460,	// (0x000af3fe) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa460,	// (0x000af3fe) popup_clock_analogue_window_cp10_g2_ParamLimits

0x500e,	// (0x000a9fac) popup_clock_analogue_window_cp10_g3_ParamLimits

0x500e,	// (0x000a9fac) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa460,	// (0x000af3fe) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000b4772) popup_clock_analogue_window_cp10_g_ParamLimits

0x5020,	// (0x000a9fbe) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5689,	// (0x000aa627) cell_dialer2_keypad_pane_g2_ParamLimits

0x5689,	// (0x000aa627) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000b4858) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000b4858) cell_dialer2_keypad_pane_g

0x56a5,	// (0x000aa643) cell_dialer2_keypad_pane_t1

0x620d,	// (0x000ab1ab) main_cset_text2_pane_ParamLimits

0x620d,	// (0x000ab1ab) main_cset_text2_pane

0xcdbc,	// (0x000b1d5a) area_vitu2_query_pane_g1_ParamLimits

0x6b03,	// (0x000abaa1) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000b4a0d) area_vitu2_query_pane_g_ParamLimits

0xce40,	// (0x000b1dde) area_vitu2_query_pane_t7_ParamLimits

0xce40,	// (0x000b1dde) area_vitu2_query_pane_t7

0x6b64,	// (0x000abb02) bg_button_pane_cp018_ParamLimits

0x6b72,	// (0x000abb10) bg_button_pane_cp021_ParamLimits

0x6b7e,	// (0x000abb1c) bg_button_pane_cp022_ParamLimits

0x6b7e,	// (0x000abb1c) bg_vkb2_func_pane_cp08_ParamLimits

0x6b64,	// (0x000abb02) bg_vkb2_func_pane_cp06_ParamLimits

0x6b72,	// (0x000abb10) bg_vkb2_func_pane_cp07_ParamLimits

0x6b8d,	// (0x000abb2b) input_focus_pane_cp09_ParamLimits

0xa238,	// (0x000af1d6) cam6_autofocus_pane_ParamLimits

0xa238,	// (0x000af1d6) cam6_autofocus_pane

0x70da,	// (0x000ac078) cam6_image_uncrop_pane_ParamLimits

0x70da,	// (0x000ac078) cam6_image_uncrop_pane

0x70e9,	// (0x000ac087) cam6_indi_pane_ParamLimits

0x70e9,	// (0x000ac087) cam6_indi_pane

0x70ff,	// (0x000ac09d) cam6_mode_pane_ParamLimits

0x70ff,	// (0x000ac09d) cam6_mode_pane

0x7111,	// (0x000ac0af) cam6_timer_pane_ParamLimits

0x7111,	// (0x000ac0af) cam6_timer_pane

0x711d,	// (0x000ac0bb) cam6_zoom_pane_ParamLimits

0x711d,	// (0x000ac0bb) cam6_zoom_pane

0x7129,	// (0x000ac0c7) cam6_mode_pane_g1_ParamLimits

0x7129,	// (0x000ac0c7) cam6_mode_pane_g1

0x7139,	// (0x000ac0d7) cam6_mode_pane_g2_ParamLimits

0x7139,	// (0x000ac0d7) cam6_mode_pane_g2

0x7149,	// (0x000ac0e7) cam6_mode_pane_g3_ParamLimits

0x7149,	// (0x000ac0e7) cam6_mode_pane_g3

0x7159,	// (0x000ac0f7) cam6_mode_pane_g4_ParamLimits

0x7159,	// (0x000ac0f7) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000b4af5) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000b4af5) cam6_mode_pane_g

0xd052,	// (0x000b1ff0) bg_tb_trans_pane_cp08_ParamLimits

0xd052,	// (0x000b1ff0) bg_tb_trans_pane_cp08

0xd060,	// (0x000b1ffe) cam6_battery_pane_ParamLimits

0xd060,	// (0x000b1ffe) cam6_battery_pane

0xd076,	// (0x000b2014) cam6_indi_pane_g1_ParamLimits

0xd076,	// (0x000b2014) cam6_indi_pane_g1

0xd088,	// (0x000b2026) cam6_indi_pane_g2_ParamLimits

0xd088,	// (0x000b2026) cam6_indi_pane_g2

0xd09a,	// (0x000b2038) cam6_indi_pane_g3_ParamLimits

0xd09a,	// (0x000b2038) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000b4afe) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000b4afe) cam6_indi_pane_g

0xd0ac,	// (0x000b204a) cam6_indi_pane_t1_ParamLimits

0xd0ac,	// (0x000b204a) cam6_indi_pane_t1

0x7169,	// (0x000ac107) cam6_autofocus_pane_g1

0x7171,	// (0x000ac10f) cam6_autofocus_pane_g2

0x7179,	// (0x000ac117) cam6_autofocus_pane_g3

0x7181,	// (0x000ac11f) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000b4b05) cam6_autofocus_pane_g

0xd0d2,	// (0x000b2070) cam6_timer_pane_g1

0xd0da,	// (0x000b2078) cam6_timer_pane_t1

0xd0e8,	// (0x000b2086) cam6_zoom_cont_pane

0xd0f0,	// (0x000b208e) cam6_zoom_pane_g1

0xd0f8,	// (0x000b2096) cam6_zoom_pane_g2

0x7189,	// (0x000ac127) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000b4b0e) cam6_zoom_pane_g

0xbe4a,	// (0x000b0de8) cam6_battery_pane_g1

0xbe4a,	// (0x000b0de8) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000b467a) cam6_battery_pane_g

0xd100,	// (0x000b209e) cam6_zoom_cont_pane_g1

0xd109,	// (0x000b20a7) cam6_zoom_cont_pane_g2

0xd112,	// (0x000b20b0) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000b4b15) cam6_zoom_cont_pane_g

0x71a6,	// (0x000ac144) cam6_mode_pane_cp_ParamLimits

0x71a6,	// (0x000ac144) cam6_mode_pane_cp

0x71b8,	// (0x000ac156) cam6_zoom_pane_cp_ParamLimits

0x71b8,	// (0x000ac156) cam6_zoom_pane_cp

0x71c4,	// (0x000ac162) vid6_image_uncrop_cif_pane_ParamLimits

0x71c4,	// (0x000ac162) vid6_image_uncrop_cif_pane

0x71d4,	// (0x000ac172) vid6_image_uncrop_nhd_pane_ParamLimits

0x71d4,	// (0x000ac172) vid6_image_uncrop_nhd_pane

0x71e3,	// (0x000ac181) vid6_image_uncrop_vga_pane_ParamLimits

0x71e3,	// (0x000ac181) vid6_image_uncrop_vga_pane

0x71f2,	// (0x000ac190) vid6_image_uncrop_wvga_pane_ParamLimits

0x71f2,	// (0x000ac190) vid6_image_uncrop_wvga_pane

0x7201,	// (0x000ac19f) vid6_indi_pane_ParamLimits

0x7201,	// (0x000ac19f) vid6_indi_pane

0xd052,	// (0x000b1ff0) bg_tb_trans_pane_cp09_ParamLimits

0xd052,	// (0x000b1ff0) bg_tb_trans_pane_cp09

0xd12a,	// (0x000b20c8) cam6_battery_pane_cp_ParamLimits

0xd12a,	// (0x000b20c8) cam6_battery_pane_cp

0xd136,	// (0x000b20d4) vid6_indi_pane_g1_ParamLimits

0xd136,	// (0x000b20d4) vid6_indi_pane_g1

0xd148,	// (0x000b20e6) vid6_indi_pane_g2_ParamLimits

0xd148,	// (0x000b20e6) vid6_indi_pane_g2

0xd15a,	// (0x000b20f8) vid6_indi_pane_g3_ParamLimits

0xd15a,	// (0x000b20f8) vid6_indi_pane_g3

0xd16f,	// (0x000b210d) vid6_indi_pane_g4_ParamLimits

0xd16f,	// (0x000b210d) vid6_indi_pane_g4

0xd184,	// (0x000b2122) vid6_indi_pane_g5_ParamLimits

0xd184,	// (0x000b2122) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000b4b1c) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000b4b1c) vid6_indi_pane_g

0xd19e,	// (0x000b213c) vid6_indi_pane_t1_ParamLimits

0xd19e,	// (0x000b213c) vid6_indi_pane_t1

0xd1b4,	// (0x000b2152) vid6_indi_pane_t2_ParamLimits

0xd1b4,	// (0x000b2152) vid6_indi_pane_t2

0xd1dc,	// (0x000b217a) vid6_indi_pane_t3_ParamLimits

0xd1dc,	// (0x000b217a) vid6_indi_pane_t3

0xd204,	// (0x000b21a2) vid6_indi_pane_t4_ParamLimits

0xd204,	// (0x000b21a2) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000b4b27) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000b4b27) vid6_indi_pane_t

0xd228,	// (0x000b21c6) wait_bar_pane_cp08

0x7219,	// (0x000ac1b7) main_cset_text2_pane_t1_ParamLimits

0x7219,	// (0x000ac1b7) main_cset_text2_pane_t1

0x7191,	// (0x000ac12f) listscroll_gen_pane_cp06_t1_ParamLimits

0x7191,	// (0x000ac12f) listscroll_gen_pane_cp06_t1

0x94f5,	// (0x000ae493) main_cam6_set_pane

0xa05e,	// (0x000aeffc) bg_tb_trans_pane_cp06_ParamLimits

0xa074,	// (0x000af012) cam4_indicators_pane_g1_ParamLimits

0xa085,	// (0x000af023) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000b4895) cam4_indicators_pane_g_ParamLimits

0xa0a3,	// (0x000af041) cam4_indicators_pane_t1_ParamLimits

0x94e7,	// (0x000ae485) bg_tb_trans_pane_cp07_ParamLimits

0xa0cf,	// (0x000af06d) vid4_indicators_pane_g1_ParamLimits

0xa0e3,	// (0x000af081) vid4_indicators_pane_g2_ParamLimits

0xa0f7,	// (0x000af095) vid4_indicators_pane_g3_ParamLimits

0xa108,	// (0x000af0a6) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000b48a7) vid4_indicators_pane_g_ParamLimits

0xa126,	// (0x000af0c4) vid4_indicators_pane_t1_ParamLimits

0xa1d6,	// (0x000af174) vid4_progress_pane_g1_ParamLimits

0xa1e6,	// (0x000af184) vid4_progress_pane_g2_ParamLimits

0x6cc8,	// (0x000abc66) vid4_progress_pane_g3_ParamLimits

0xa1f6,	// (0x000af194) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000b4a58) vid4_progress_pane_g_ParamLimits

0x6cda,	// (0x000abc78) vid4_progress_pane_t1_ParamLimits

0xa20e,	// (0x000af1ac) vid4_progress_pane_t2_ParamLimits

0xa223,	// (0x000af1c1) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000b4a63) vid4_progress_pane_t_ParamLimits

0x6cf2,	// (0x000abc90) wait_bar_pane_cp07_ParamLimits

0x7236,	// (0x000ac1d4) main_cam6_set_pane_g2_ParamLimits

0x7236,	// (0x000ac1d4) main_cam6_set_pane_g2

0x725a,	// (0x000ac1f8) main_cset6_listscroll_pane_ParamLimits

0x725a,	// (0x000ac1f8) main_cset6_listscroll_pane

0x727a,	// (0x000ac218) main_cset6_slider_pane_ParamLimits

0x727a,	// (0x000ac218) main_cset6_slider_pane

0x7290,	// (0x000ac22e) main_cset6_text2_pane_ParamLimits

0x7290,	// (0x000ac22e) main_cset6_text2_pane

0xd237,	// (0x000b21d5) main_cset6_text_pane

0xd23f,	// (0x000b21dd) main_cset_list_pane_copy1_ParamLimits

0xd23f,	// (0x000b21dd) main_cset_list_pane_copy1

0xd24f,	// (0x000b21ed) scroll_pane_cp028_copy1

0x729e,	// (0x000ac23c) cset_list_set_pane_copy1

0x72af,	// (0x000ac24d) aid_position_infowindow_above_copy1

0x72b7,	// (0x000ac255) aid_position_infowindow_below_copy1

0x72bf,	// (0x000ac25d) cset_list_set_pane_g1_copy1

0x72c7,	// (0x000ac265) cset_list_set_pane_g3_copy1_ParamLimits

0x72c7,	// (0x000ac265) cset_list_set_pane_g3_copy1

0x72d6,	// (0x000ac274) cset_list_set_pane_t1_copy1_ParamLimits

0x72d6,	// (0x000ac274) cset_list_set_pane_t1_copy1

0xeef1,	// (0x000b3e8f) list_highlight_pane_cp021_copy1_ParamLimits

0xeef1,	// (0x000b3e8f) list_highlight_pane_cp021_copy1

0xd258,	// (0x000b21f6) cset6_slider_pane_ParamLimits

0xd258,	// (0x000b21f6) cset6_slider_pane

0xd284,	// (0x000b2222) main_cset6_slider_pane_g1_ParamLimits

0xd284,	// (0x000b2222) main_cset6_slider_pane_g1

0x72eb,	// (0x000ac289) main_cset6_slider_pane_g2_ParamLimits

0x72eb,	// (0x000ac289) main_cset6_slider_pane_g2

0xd2ac,	// (0x000b224a) main_cset6_slider_pane_g3_ParamLimits

0xd2ac,	// (0x000b224a) main_cset6_slider_pane_g3

0x7313,	// (0x000ac2b1) main_cset6_slider_pane_g4_ParamLimits

0x7313,	// (0x000ac2b1) main_cset6_slider_pane_g4

0x731f,	// (0x000ac2bd) main_cset6_slider_pane_g5_ParamLimits

0x731f,	// (0x000ac2bd) main_cset6_slider_pane_g5

0xca6a,	// (0x000b1a08) main_cset6_slider_pane_g7_ParamLimits

0xca6a,	// (0x000b1a08) main_cset6_slider_pane_g7

0xca76,	// (0x000b1a14) main_cset6_slider_pane_g8_ParamLimits

0xca76,	// (0x000b1a14) main_cset6_slider_pane_g8

0x62ba,	// (0x000ab258) main_cset6_slider_pane_g9_ParamLimits

0x62ba,	// (0x000ab258) main_cset6_slider_pane_g9

0x62c6,	// (0x000ab264) main_cset6_slider_pane_g10_ParamLimits

0x62c6,	// (0x000ab264) main_cset6_slider_pane_g10

0x62d2,	// (0x000ab270) main_cset6_slider_pane_g11_ParamLimits

0x62d2,	// (0x000ab270) main_cset6_slider_pane_g11

0x62de,	// (0x000ab27c) main_cset6_slider_pane_g12_ParamLimits

0x62de,	// (0x000ab27c) main_cset6_slider_pane_g12

0x62ea,	// (0x000ab288) main_cset6_slider_pane_g13_ParamLimits

0x62ea,	// (0x000ab288) main_cset6_slider_pane_g13

0x62f6,	// (0x000ab294) main_cset6_slider_pane_g14_ParamLimits

0x62f6,	// (0x000ab294) main_cset6_slider_pane_g14

0x732b,	// (0x000ac2c9) main_cset6_slider_pane_g15_ParamLimits

0x732b,	// (0x000ac2c9) main_cset6_slider_pane_g15

0x631a,	// (0x000ab2b8) main_cset6_slider_pane_g16_ParamLimits

0x631a,	// (0x000ab2b8) main_cset6_slider_pane_g16

0x6326,	// (0x000ab2c4) main_cset6_slider_pane_g17_ParamLimits

0x6326,	// (0x000ab2c4) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000b4b30) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000b4b30) main_cset6_slider_pane_g

0xd2b8,	// (0x000b2256) main_cset6_slider_pane_t1_ParamLimits

0xd2b8,	// (0x000b2256) main_cset6_slider_pane_t1

0x735b,	// (0x000ac2f9) main_cset6_slider_pane_t2_ParamLimits

0x735b,	// (0x000ac2f9) main_cset6_slider_pane_t2

0x7386,	// (0x000ac324) main_cset6_slider_pane_t3_ParamLimits

0x7386,	// (0x000ac324) main_cset6_slider_pane_t3

0x73b1,	// (0x000ac34f) main_cset6_slider_pane_t4_ParamLimits

0x73b1,	// (0x000ac34f) main_cset6_slider_pane_t4

0x73dc,	// (0x000ac37a) main_cset6_slider_pane_t5_ParamLimits

0x73dc,	// (0x000ac37a) main_cset6_slider_pane_t5

0xd2f9,	// (0x000b2297) main_cset6_slider_pane_t7_ParamLimits

0xd2f9,	// (0x000b2297) main_cset6_slider_pane_t7

0x7407,	// (0x000ac3a5) main_cset6_slider_pane_t8_ParamLimits

0x7407,	// (0x000ac3a5) main_cset6_slider_pane_t8

0x742b,	// (0x000ac3c9) main_cset6_slider_pane_t9_ParamLimits

0x742b,	// (0x000ac3c9) main_cset6_slider_pane_t9

0x744f,	// (0x000ac3ed) main_cset6_slider_pane_t10_ParamLimits

0x744f,	// (0x000ac3ed) main_cset6_slider_pane_t10

0x7473,	// (0x000ac411) main_cset6_slider_pane_t11_ParamLimits

0x7473,	// (0x000ac411) main_cset6_slider_pane_t11

0xd32f,	// (0x000b22cd) main_cset6_slider_pane_t14_ParamLimits

0xd32f,	// (0x000b22cd) main_cset6_slider_pane_t14

0xd368,	// (0x000b2306) main_cset6_slider_pane_t15_ParamLimits

0xd368,	// (0x000b2306) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000b4b55) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000b4b55) main_cset6_slider_pane_t

0xd3a1,	// (0x000b233f) cset_slider_pane_g1_copy1

0xd3aa,	// (0x000b2348) cset_slider_pane_g2_copy1

0xd3b3,	// (0x000b2351) cset_slider_pane_g3_copy1

0xe5a6,	// (0x000b3544) bg_popup_sub_pane_cp011_copy1

0xd3bc,	// (0x000b235a) main_cset_text_pane_g1_copy1

0xcbe4,	// (0x000b1b82) main_cset_text_pane_t1_copy1

0xcbf2,	// (0x000b1b90) main_cset_text_pane_t2_copy1

0xcc00,	// (0x000b1b9e) main_cset_text_pane_t3_copy1

0xcc0e,	// (0x000b1bac) main_cset_text_pane_t4_copy1

0xcc1c,	// (0x000b1bba) main_cset_text_pane_t5_copy1

0xd3c4,	// (0x000b2362) main_cset_text_pane_t6_copy1

0xd3d2,	// (0x000b2370) main_cset_text_pane_t7_copy1

0x7219,	// (0x000ac1b7) main_cset_text2_pane_t1_copy1

0x94e7,	// (0x000ae485) main_ncimui_pane

0x3983,	// (0x000a8921) popup_query_ncimui_window_ParamLimits

0x3983,	// (0x000a8921) popup_query_ncimui_window

0xc11b,	// (0x000b10b9) field_cale_ev2_pane_g4_ParamLimits

0xc11b,	// (0x000b10b9) field_cale_ev2_pane_g4

0x5569,	// (0x000aa507) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5569,	// (0x000aa507) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000b4833) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000b4833) cell_video_dialer_keypad_pane_g

0x5581,	// (0x000aa51f) cell_video_dialer_keypad_pane_t1

0xe5a6,	// (0x000b3544) bg_popup_window_pane_cp012

0xa2af,	// (0x000af24d) heading_pane_cp06

0xd3fe,	// (0x000b239c) ncim_query_content_pane

0xe5a6,	// (0x000b3544) bg_popup_heading_pane_cp01

0xd406,	// (0x000b23a4) ncim_heading_pane_t1

0xd414,	// (0x000b23b2) ncim_indicator_popup_pane

0xd426,	// (0x000b23c4) ncim_query_button_pane

0xd43a,	// (0x000b23d8) ncim_query_content_pane_t1

0xd44c,	// (0x000b23ea) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000b4b99) ncim_query_content_pane_t

0xd486,	// (0x000b2424) ncim_query_list_pane

0xd498,	// (0x000b2436) ncim_query_popup_pane

0xd414,	// (0x000b23b2) ncim_indicator_popup_pane_ParamLimits

0x768d,	// (0x000ac62b) ncim_query_content_pane_g1_ParamLimits

0x768d,	// (0x000ac62b) ncim_query_content_pane_g1

0xd43a,	// (0x000b23d8) ncim_query_content_pane_t1_ParamLimits

0xd44c,	// (0x000b23ea) ncim_query_content_pane_t2_ParamLimits

0x7699,	// (0x000ac637) ncim_query_content_pane_t3_ParamLimits

0x7699,	// (0x000ac637) ncim_query_content_pane_t3

0x76c1,	// (0x000ac65f) ncim_query_content_pane_t4_ParamLimits

0x76c1,	// (0x000ac65f) ncim_query_content_pane_t4

0x76e9,	// (0x000ac687) ncim_query_content_pane_t5_ParamLimits

0x76e9,	// (0x000ac687) ncim_query_content_pane_t5

0xd45e,	// (0x000b23fc) ncim_query_content_pane_t6_ParamLimits

0xd45e,	// (0x000b23fc) ncim_query_content_pane_t6

0xfbfb,	// (0x000b4b99) ncim_query_content_pane_t_ParamLimits

0xd486,	// (0x000b2424) ncim_query_list_pane_ParamLimits

0xd498,	// (0x000b2436) ncim_query_popup_pane_ParamLimits

0xd4ac,	// (0x000b244a) wait_bar_pane_cp04

0xe5a6,	// (0x000b3544) input_focus_pane_cp011

0xd4b4,	// (0x000b2452) ncim_query_popup_pane_t1

0xd4c2,	// (0x000b2460) ncim_list_query_list_pane_ParamLimits

0xd4c2,	// (0x000b2460) ncim_list_query_list_pane

0xe5a6,	// (0x000b3544) bg_button_pane_cp027

0xd4cf,	// (0x000b246d) ncim_query_button_pane_g1

0xe5a6,	// (0x000b3544) list_highlight_pane_cp012

0xd4d9,	// (0x000b2477) ncim_list_query_list_pane_g1

0xd4e1,	// (0x000b247f) ncim_list_query_list_pane_t1

0xa094,	// (0x000af032) cam4_indicators_pane_g3_ParamLimits

0xa094,	// (0x000af032) cam4_indicators_pane_g3

0xa114,	// (0x000af0b2) vid4_indicators_pane_g5_ParamLimits

0xa114,	// (0x000af0b2) vid4_indicators_pane_g5

0xa202,	// (0x000af1a0) vid4_progress_pane_g5_ParamLimits

0xa202,	// (0x000af1a0) vid4_progress_pane_g5

0x757b,	// (0x000ac519) main_ncimui_pane_g1

0x75e1,	// (0x000ac57f) ncimui_group_query_pane_ParamLimits

0x75e1,	// (0x000ac57f) ncimui_group_query_pane

0x7629,	// (0x000ac5c7) ncimui_list_pane_ParamLimits

0x7629,	// (0x000ac5c7) ncimui_list_pane

0x7650,	// (0x000ac5ee) ncimui_text_pane_ParamLimits

0x7650,	// (0x000ac5ee) ncimui_text_pane

0x7711,	// (0x000ac6af) ncimui_text_pane_t1_ParamLimits

0x7711,	// (0x000ac6af) ncimui_text_pane_t1

0xd4ef,	// (0x000b248d) ncimui_list_single_graphic_pane_ParamLimits

0xd4ef,	// (0x000b248d) ncimui_list_single_graphic_pane

0x772f,	// (0x000ac6cd) ncimui_query_pane_ParamLimits

0x772f,	// (0x000ac6cd) ncimui_query_pane

0xe5a6,	// (0x000b3544) list_highlight_pane_cp013

0xd4ff,	// (0x000b249d) ncim_list_query_list_pane_t1_copy1

0xd4d9,	// (0x000b2477) ncim_list_single_graphic_pane_g1

0xd50d,	// (0x000b24ab) ncim_query_button_pane_cp01

0xd519,	// (0x000b24b7) ncim_query_entry_pane_ParamLimits

0xd519,	// (0x000b24b7) ncim_query_entry_pane

0xd52c,	// (0x000b24ca) ncimui_query_pane_g1

0xd538,	// (0x000b24d6) ncimui_query_pane_t1_ParamLimits

0xd538,	// (0x000b24d6) ncimui_query_pane_t1

0xeef1,	// (0x000b3e8f) input_focus_pane_cp012

0xd551,	// (0x000b24ef) ncim_query_entry_pane_t1

0xece3,	// (0x000b3c81) main_im_pane_ParamLimits

0x94e7,	// (0x000ae485) main_mobtv_pane_ParamLimits

0x94e7,	// (0x000ae485) main_mobtv_pane

0x7343,	// (0x000ac2e1) main_cset6_slider_pane_g18_ParamLimits

0x7343,	// (0x000ac2e1) main_cset6_slider_pane_g18

0x734f,	// (0x000ac2ed) main_cset6_slider_pane_g19_ParamLimits

0x734f,	// (0x000ac2ed) main_cset6_slider_pane_g19

0x7742,	// (0x000ac6e0) bg_main_mobtv_pane_ParamLimits

0x7742,	// (0x000ac6e0) bg_main_mobtv_pane

0x7750,	// (0x000ac6ee) main_mobtv_info_pane

0x7759,	// (0x000ac6f7) main_mobtv_loading_pane_ParamLimits

0x7759,	// (0x000ac6f7) main_mobtv_loading_pane

0xd563,	// (0x000b2501) main_mobtv_pg_channel_list_pane

0xd56d,	// (0x000b250b) main_mobtv_pg_hdr_pane

0x7766,	// (0x000ac704) main_mobtv_programe_curr_pane_ParamLimits

0x7766,	// (0x000ac704) main_mobtv_programe_curr_pane

0x7773,	// (0x000ac711) main_mobtv_programe_next_pane_ParamLimits

0x7773,	// (0x000ac711) main_mobtv_programe_next_pane

0xd576,	// (0x000b2514) popup_mobtv_noti_window

0xbe4a,	// (0x000b0de8) main_tv_pg_hdr_pane_g1

0xd57e,	// (0x000b251c) main_tv_pg_hdr_pane_g2

0xd586,	// (0x000b2524) main_tv_pg_hdr_pane_g3

0xd58e,	// (0x000b252c) main_tv_pg_hdr_pane_g4

0xd596,	// (0x000b2534) main_tv_pg_hdr_pane_g5

0xd5a0,	// (0x000b253e) main_tv_pg_hdr_pane_g6

0xd5aa,	// (0x000b2548) main_tv_pg_hdr_pane_g7

0xd5b4,	// (0x000b2552) main_tv_pg_hdr_pane_g8

0xd5be,	// (0x000b255c) main_tv_pg_hdr_pane_g9

0xd5c8,	// (0x000b2566) main_tv_pg_hdr_pane_g10

0xd5d2,	// (0x000b2570) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000b4ba6) main_tv_pg_hdr_pane_g

0xd5dc,	// (0x000b257a) main_tv_pg_hdr_pane_t1

0xd5ea,	// (0x000b2588) main_tv_pg_hdr_pane_t2

0xd5f8,	// (0x000b2596) main_tv_pg_hdr_pane_t3

0xd608,	// (0x000b25a6) main_tv_pg_hdr_pane_t4

0xd618,	// (0x000b25b6) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000b4bbd) main_tv_pg_hdr_pane_t

0xd628,	// (0x000b25c6) single_mobtv_pg_channel_pane_ParamLimits

0xd628,	// (0x000b25c6) single_mobtv_pg_channel_pane

0xd63a,	// (0x000b25d8) single_mobtv_pg_channel_table_pane

0xd643,	// (0x000b25e1) single_mobtv_pg_channel_thumb_pane

0xd64c,	// (0x000b25ea) single_tv_pg_channel_pane_g1

0xd655,	// (0x000b25f3) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000b4bc8) single_tv_pg_channel_pane_g

0xc0b6,	// (0x000b1054) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc0b6,	// (0x000b1054) bg_single_mobtv_pg_channel_thumb_pane

0xd65e,	// (0x000b25fc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd65e,	// (0x000b25fc) single_mobtv_pg_channel_thumb_pane_g1

0xd66c,	// (0x000b260a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd66c,	// (0x000b260a) single_mobtv_pg_channel_thumb_pane_g2

0xd678,	// (0x000b2616) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd678,	// (0x000b2616) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000b4bcd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000b4bcd) single_mobtv_pg_channel_thumb_pane_g

0xd684,	// (0x000b2622) single_mobtv_pg_channel_thumb_pane_t1

0xd692,	// (0x000b2630) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000b4bd4) single_mobtv_pg_channel_thumb_pane_t

0xbe4a,	// (0x000b0de8) bg_single_mobtv_pg_channel_table_pane_g1

0xbe4a,	// (0x000b0de8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000b467a) bg_single_mobtv_pg_channel_table_pane_g

0xd6a0,	// (0x000b263e) single_mobtv_pg_channel_table_pane_t1

0xd6ae,	// (0x000b264c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000b4bd9) single_mobtv_pg_channel_table_pane_t

0x7788,	// (0x000ac726) main_mobtv_info_pane_g1_ParamLimits

0x7788,	// (0x000ac726) main_mobtv_info_pane_g1

0x77a6,	// (0x000ac744) main_mobtv_info_pane_t1_ParamLimits

0x77a6,	// (0x000ac744) main_mobtv_info_pane_t1

0x781e,	// (0x000ac7bc) main_mobtv_info_pane_t2_ParamLimits

0x781e,	// (0x000ac7bc) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000b4be3) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000b4be3) main_mobtv_info_pane_t

0x78ad,	// (0x000ac84b) wait_bar_pane_cp05

0x78bf,	// (0x000ac85d) main_mobtv_loading_pane_g1_ParamLimits

0x78bf,	// (0x000ac85d) main_mobtv_loading_pane_g1

0x78d2,	// (0x000ac870) main_mobtv_loading_pane_g2_ParamLimits

0x78d2,	// (0x000ac870) main_mobtv_loading_pane_g2

0x78de,	// (0x000ac87c) main_mobtv_loading_pane_g3_ParamLimits

0x78de,	// (0x000ac87c) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000b4bea) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000b4bea) main_mobtv_loading_pane_g

0xd6bc,	// (0x000b265a) main_mobtv_loading_pane_t1_ParamLimits

0xd6bc,	// (0x000b265a) main_mobtv_loading_pane_t1

0xd6d4,	// (0x000b2672) main_mobtv_loading_pane_t2_ParamLimits

0xd6d4,	// (0x000b2672) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000b4bf1) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000b4bf1) main_mobtv_loading_pane_t

0x78f1,	// (0x000ac88f) wait_bar_pane_cp06_ParamLimits

0x78f1,	// (0x000ac88f) wait_bar_pane_cp06

0xd6f8,	// (0x000b2696) main_mobtv_programe_curr_pane_t1

0xd706,	// (0x000b26a4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000b4bf6) main_mobtv_programe_curr_pane_t

0xd714,	// (0x000b26b2) main_mobtv_programe_next_pane_t1

0xd722,	// (0x000b26c0) main_mobtv_programe_next_pane_t2

0xd730,	// (0x000b26ce) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000b4bfb) main_mobtv_programe_next_pane_t

0xe5a6,	// (0x000b3544) bg_popup_mobtv_noti_window_pane

0xd73e,	// (0x000b26dc) popup_mobtv_noti_window_g1

0xd746,	// (0x000b26e4) popup_mobtv_noti_window_t1

0xd754,	// (0x000b26f2) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000b4c02) popup_mobtv_noti_window_t

0xbe4a,	// (0x000b0de8) bg_popup_mobtv_noti_window_pane_g1

0x94f5,	// (0x000ae493) sc_clock_pane

0x94f5,	// (0x000ae493) main_fs_bigclock_pane

0x6f4f,	// (0x000abeed) blid2_tripm_pane_t4_ParamLimits

0x6f4f,	// (0x000abeed) blid2_tripm_pane_t4

0x7900,	// (0x000ac89e) sc_clock_pane_g1_ParamLimits

0x7900,	// (0x000ac89e) sc_clock_pane_g1

0x7912,	// (0x000ac8b0) sc_clock_pane_t1_ParamLimits

0x7912,	// (0x000ac8b0) sc_clock_pane_t1

0x7934,	// (0x000ac8d2) sc_clock_pane_t2_ParamLimits

0x7934,	// (0x000ac8d2) sc_clock_pane_t2

0x794c,	// (0x000ac8ea) sc_clock_pane_t3_ParamLimits

0x794c,	// (0x000ac8ea) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000b4c07) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000b4c07) sc_clock_pane_t

0x8959,	// (0x000ad8f7) main_fs_bigclock_indicator_pane_ParamLimits

0x8959,	// (0x000ad8f7) main_fs_bigclock_indicator_pane

0x79ec,	// (0x000ac98a) main_fs_bigclock_pane_g1_ParamLimits

0x79ec,	// (0x000ac98a) main_fs_bigclock_pane_g1

0x8965,	// (0x000ad903) main_fs_bigclock_pane_t1_ParamLimits

0x8965,	// (0x000ad903) main_fs_bigclock_pane_t1

0x8977,	// (0x000ad915) main_fs_bigclock_pane_t2_ParamLimits

0x8977,	// (0x000ad915) main_fs_bigclock_pane_t2

0x898b,	// (0x000ad929) main_fs_bigclock_pane_t3_ParamLimits

0x898b,	// (0x000ad929) main_fs_bigclock_pane_t3

0x0002,

0xfe5f,	// (0x000b4dfd) main_fs_bigclock_pane_t_ParamLimits

0xfe5f,	// (0x000b4dfd) main_fs_bigclock_pane_t

0xe2b1,	// (0x000b324f) main_fs_bigclock_indicator_pane_g1

0xd42e,	// (0x000b23cc) ncim_query_content_pane_g2_ParamLimits

0xd42e,	// (0x000b23cc) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000b4b94) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000b4b94) ncim_query_content_pane_g

0x7965,	// (0x000ac903) sc_clock_pane_t4_ParamLimits

0x7965,	// (0x000ac903) sc_clock_pane_t4

0x94e7,	// (0x000ae485) main_radioblah_pane

0xc85f,	// (0x000b17fd) cell_call4_button_pane_t1_copy1_ParamLimits

0xc85f,	// (0x000b17fd) cell_call4_button_pane_t1_copy1

0x7593,	// (0x000ac531) main_ncimui_pane_t1_ParamLimits

0x7593,	// (0x000ac531) main_ncimui_pane_t1

0x75ad,	// (0x000ac54b) main_ncimui_pane_t2_ParamLimits

0x75ad,	// (0x000ac54b) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000b4b8d) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000b4b8d) main_ncimui_pane_t

0xd898,	// (0x000b2836) main_radioblah_anim_pane_ParamLimits

0xd898,	// (0x000b2836) main_radioblah_anim_pane

0xd8a9,	// (0x000b2847) main_radioblah_info_pane_ParamLimits

0xd8a9,	// (0x000b2847) main_radioblah_info_pane

0xd8bd,	// (0x000b285b) main_radioblah_pane_t1_ParamLimits

0xd8bd,	// (0x000b285b) main_radioblah_pane_t1

0xd8d9,	// (0x000b2877) main_radioblah_pane_t2_ParamLimits

0xd8d9,	// (0x000b2877) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000b4c28) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000b4c28) main_radioblah_pane_t

0x7a44,	// (0x000ac9e2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a44,	// (0x000ac9e2) main_radioblah_rocker_ctrl_pane

0xd921,	// (0x000b28bf) main_radioblah_info_pane_t1_ParamLimits

0xd921,	// (0x000b28bf) main_radioblah_info_pane_t1

0x7a9c,	// (0x000aca3a) main_radioblah_info_pane_t2_ParamLimits

0x7a9c,	// (0x000aca3a) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000b4c31) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000b4c31) main_radioblah_info_pane_t

0xbe4a,	// (0x000b0de8) main_radioblah_rocker_ctrl_pane_g1

0x7b4c,	// (0x000acaea) main_radioblah_rocker_ctrl_pane_g2

0x7b54,	// (0x000acaf2) main_radioblah_rocker_ctrl_pane_g3

0x7b5c,	// (0x000acafa) main_radioblah_rocker_ctrl_pane_g4

0x7b64,	// (0x000acb02) main_radioblah_rocker_ctrl_pane_g5

0x7b6c,	// (0x000acb0a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000b4c3a) main_radioblah_rocker_ctrl_pane_g

0x7219,	// (0x000ac1b7) main_cset_text2_pane_t1_copy1_ParamLimits

0xa056,	// (0x000aeff4) cam4_image_uncrop_qvga_pane

0xa0bd,	// (0x000af05b) vid4_image_uncrop_qcif_pane

0xa238,	// (0x000af1d6) cam6_image_uncrop_qvga_pane_ParamLimits

0xa238,	// (0x000af1d6) cam6_image_uncrop_qvga_pane

0xd11a,	// (0x000b20b8) vid6_image_uncrop_qcif_pane_ParamLimits

0xd11a,	// (0x000b20b8) vid6_image_uncrop_qcif_pane

0xe5a6,	// (0x000b3544) bg_popup_preview_window_pane_cp03

0xd3e0,	// (0x000b237e) list_cset_text2_pane

0xd3e8,	// (0x000b2386) main_cset6_text2_pane_g1

0xd3f0,	// (0x000b238e) main_cset6_text2_pane_t1

0x7b74,	// (0x000acb12) list_cset_text2_pane_t1_ParamLimits

0x7b74,	// (0x000acb12) list_cset_text2_pane_t1

0x94e7,	// (0x000ae485) main_radioblah_pane_ParamLimits

0x7899,	// (0x000ac837) main_mobtv_info_pane_t3_ParamLimits

0x7899,	// (0x000ac837) main_mobtv_info_pane_t3

0x7a32,	// (0x000ac9d0) main_radioblah_pane_g1

0x7a6c,	// (0x000aca0a) main_radioblah_info_pane_g1

0x7af1,	// (0x000aca8f) main_radioblah_info_pane_t3_ParamLimits

0x7af1,	// (0x000aca8f) main_radioblah_info_pane_t3

0x238e,	// (0x000a732c) highlight_cell_cale_month_pane_ParamLimits

0x238e,	// (0x000a732c) highlight_cell_cale_month_pane

0x94f5,	// (0x000ae493) main_phob_fisheye_pane

0xc1ea,	// (0x000b1188) scroll_pane_cp0031_ParamLimits

0xc1ea,	// (0x000b1188) scroll_pane_cp0031

0xd228,	// (0x000b21c6) wait_bar_pane_cp08_ParamLimits

0x729e,	// (0x000ac23c) cset_list_set_pane_copy1_ParamLimits

0xd95b,	// (0x000b28f9) highlight_cell_cale_month_pane_g1

0x7b8d,	// (0x000acb2b) highlight_cell_cale_month_pane_t1

0xceac,	// (0x000b1e4a) list_gen_pane_cp01

0xca55,	// (0x000b19f3) scroll_pane_01

0xef13,	// (0x000b3eb1) list_single_double_fisheye_pane

0x7b9b,	// (0x000acb39) list_double_fisheye_pane_g1_ParamLimits

0x7b9b,	// (0x000acb39) list_double_fisheye_pane_g1

0x7ba7,	// (0x000acb45) list_double_fisheye_pane_g2_ParamLimits

0x7ba7,	// (0x000acb45) list_double_fisheye_pane_g2

0x7bbb,	// (0x000acb59) list_double_fisheye_pane_g3_ParamLimits

0x7bbb,	// (0x000acb59) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000b4c47) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000b4c47) list_double_fisheye_pane_g

0x7be4,	// (0x000acb82) list_double_fisheye_pane_t1_ParamLimits

0x7be4,	// (0x000acb82) list_double_fisheye_pane_t1

0x7bff,	// (0x000acb9d) list_double_fisheye_pane_t2_ParamLimits

0x7bff,	// (0x000acb9d) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000b4c52) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000b4c52) list_double_fisheye_pane_t

0x94f5,	// (0x000ae493) main_call5_pane

0x7990,	// (0x000ac92e) sc_swipe_pane_ParamLimits

0x7990,	// (0x000ac92e) sc_swipe_pane

0x7c34,	// (0x000acbd2) call5_image_pane_ParamLimits

0x7c34,	// (0x000acbd2) call5_image_pane

0x7c51,	// (0x000acbef) call5_swipe_1_pane_ParamLimits

0x7c51,	// (0x000acbef) call5_swipe_1_pane

0x7c64,	// (0x000acc02) call5_swipe_2_pane_ParamLimits

0x7c64,	// (0x000acc02) call5_swipe_2_pane

0x7c8f,	// (0x000acc2d) popup_call5_audio_first_window_ParamLimits

0x7c8f,	// (0x000acc2d) popup_call5_audio_first_window

0xc0b6,	// (0x000b1054) call5_swipe_1_pane_g1_ParamLimits

0xc0b6,	// (0x000b1054) call5_swipe_1_pane_g1

0xd963,	// (0x000b2901) call5_swipe_1_pane_g2_ParamLimits

0xd963,	// (0x000b2901) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000b4c57) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000b4c57) call5_swipe_1_pane_g

0xd96f,	// (0x000b290d) call5_swipe_1_pane_t1_ParamLimits

0xd96f,	// (0x000b290d) call5_swipe_1_pane_t1

0xc0b6,	// (0x000b1054) call5_swipe_2_pane_g1_ParamLimits

0xc0b6,	// (0x000b1054) call5_swipe_2_pane_g1

0xd984,	// (0x000b2922) call5_swipe_2_pane_g2_ParamLimits

0xd984,	// (0x000b2922) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000b4c5c) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000b4c5c) call5_swipe_2_pane_g

0xd990,	// (0x000b292e) call5_swipe_2_pane_t1_ParamLimits

0xd990,	// (0x000b292e) call5_swipe_2_pane_t1

0xd9a5,	// (0x000b2943) sc_swipe_pane_g1_ParamLimits

0xd9a5,	// (0x000b2943) sc_swipe_pane_g1

0xd9b2,	// (0x000b2950) sc_swipe_pane_g2_ParamLimits

0xd9b2,	// (0x000b2950) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000b4c61) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000b4c61) sc_swipe_pane_g

0xd9be,	// (0x000b295c) sc_swipe_pane_t1_ParamLimits

0xd9be,	// (0x000b295c) sc_swipe_pane_t1

0x94f5,	// (0x000ae493) main_cmail_launcher_pane

0x7ca0,	// (0x000acc3e) aid_size_cell_cmail_l_ParamLimits

0x7ca0,	// (0x000acc3e) aid_size_cell_cmail_l

0x7cba,	// (0x000acc58) grid_cmail_l_pane_ParamLimits

0x7cba,	// (0x000acc58) grid_cmail_l_pane

0x7cd5,	// (0x000acc73) cell_cmail_l_pane_ParamLimits

0x7cd5,	// (0x000acc73) cell_cmail_l_pane

0x7cfb,	// (0x000acc99) cell_cmail_l_pane_g1_ParamLimits

0x7cfb,	// (0x000acc99) cell_cmail_l_pane_g1

0x7d07,	// (0x000acca5) cell_cmail_l_pane_t1_ParamLimits

0x7d07,	// (0x000acca5) cell_cmail_l_pane_t1

0xd9d3,	// (0x000b2971) cell_cmail_l_pane_t2_ParamLimits

0xd9d3,	// (0x000b2971) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000b4c66) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000b4c66) cell_cmail_l_pane_t

0xeef1,	// (0x000b3e8f) grid_highlight_pane_cp018_ParamLimits

0xeef1,	// (0x000b3e8f) grid_highlight_pane_cp018

0x0325,	// (0x000a52c3) main2_pane_ParamLimits

0x0325,	// (0x000a52c3) main2_pane

0xed7c,	// (0x000b3d1a) popup_sp_fs_action_menu_bg_pane_g1

0xed84,	// (0x000b3d22) popup_sp_fs_action_menu_bg_pane_g2

0xed8c,	// (0x000b3d2a) popup_sp_fs_action_menu_bg_pane_g3

0xed94,	// (0x000b3d32) popup_sp_fs_action_menu_bg_pane_g4

0xed9c,	// (0x000b3d3a) popup_sp_fs_action_menu_bg_pane_g5

0xeda4,	// (0x000b3d42) popup_sp_fs_action_menu_bg_pane_g6

0xedac,	// (0x000b3d4a) popup_sp_fs_action_menu_bg_pane_g7

0xedb4,	// (0x000b3d52) popup_sp_fs_action_menu_bg_pane_g8

0xedbc,	// (0x000b3d5a) popup_sp_fs_action_menu_bg_pane_g9

0xedc4,	// (0x000b3d62) popup_sp_fs_action_menu_bg_pane_g10

0xedc4,	// (0x000b3d62) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000b4128) popup_sp_fs_action_menu_bg_pane_g

0x1317,	// (0x000a62b5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x2_t3_g3_g1

0x1323,	// (0x000a62c1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1323,	// (0x000a62c1) list_medium_line_x2_t3_g3_g2

0x132f,	// (0x000a62cd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x132f,	// (0x000a62cd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000b41d6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000b41d6) list_medium_line_x2_t3_g3_g

0x133b,	// (0x000a62d9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x133b,	// (0x000a62d9) list_medium_line_x2_t3_g3_t1

0x1350,	// (0x000a62ee) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1350,	// (0x000a62ee) list_medium_line_x2_t3_g3_t2

0x1364,	// (0x000a6302) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1364,	// (0x000a6302) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000b41dd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000b41dd) list_medium_line_x2_t3_g3_t

0x1317,	// (0x000a62b5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x2_t3_g2_g1

0x132f,	// (0x000a62cd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x132f,	// (0x000a62cd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000b41e4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000b41e4) list_medium_line_x2_t3_g2_g

0x1379,	// (0x000a6317) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1379,	// (0x000a6317) list_medium_line_x2_t3_g2_t1

0x138f,	// (0x000a632d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x138f,	// (0x000a632d) list_medium_line_x2_t3_g2_t2

0x1364,	// (0x000a6302) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1364,	// (0x000a6302) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000b41e9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000b41e9) list_medium_line_x2_t3_g2_t

0x1317,	// (0x000a62b5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x2_t4_g4_g1

0x13a1,	// (0x000a633f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x13a1,	// (0x000a633f) list_medium_line_x2_t4_g4_g2

0x1323,	// (0x000a62c1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1323,	// (0x000a62c1) list_medium_line_x2_t4_g4_g3

0x13ad,	// (0x000a634b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x13ad,	// (0x000a634b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000b41f0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000b41f0) list_medium_line_x2_t4_g4_g

0x13b9,	// (0x000a6357) list_medium_line_x2_t4_g4_t1_ParamLimits

0x13b9,	// (0x000a6357) list_medium_line_x2_t4_g4_t1

0x13d3,	// (0x000a6371) list_medium_line_x2_t4_g4_t2_ParamLimits

0x13d3,	// (0x000a6371) list_medium_line_x2_t4_g4_t2

0x13e9,	// (0x000a6387) list_medium_line_x2_t4_g4_t3_ParamLimits

0x13e9,	// (0x000a6387) list_medium_line_x2_t4_g4_t3

0x13fe,	// (0x000a639c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x13fe,	// (0x000a639c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000b41f9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000b41f9) list_medium_line_x2_t4_g4_t

0x1317,	// (0x000a62b5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x2_t2_g4_g1

0x13a1,	// (0x000a633f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x13a1,	// (0x000a633f) list_medium_line_x2_t2_g4_g2

0x1323,	// (0x000a62c1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1323,	// (0x000a62c1) list_medium_line_x2_t2_g4_g3

0x132f,	// (0x000a62cd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x132f,	// (0x000a62cd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000b4260) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000b4260) list_medium_line_x2_t2_g4_g

0x23b4,	// (0x000a7352) list_medium_line_x2_t2_g4_t1_ParamLimits

0x23b4,	// (0x000a7352) list_medium_line_x2_t2_g4_t1

0x1364,	// (0x000a6302) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1364,	// (0x000a6302) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000b4269) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000b4269) list_medium_line_x2_t2_g4_t

0x1317,	// (0x000a62b5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x2_t2_g3_g1

0x1323,	// (0x000a62c1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1323,	// (0x000a62c1) list_medium_line_x2_t2_g3_g2

0x132f,	// (0x000a62cd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x132f,	// (0x000a62cd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000b41d6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000b41d6) list_medium_line_x2_t2_g3_g

0x23c9,	// (0x000a7367) list_medium_line_x2_t2_g3_t1_ParamLimits

0x23c9,	// (0x000a7367) list_medium_line_x2_t2_g3_t1

0x1364,	// (0x000a6302) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1364,	// (0x000a6302) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000b426e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000b426e) list_medium_line_x2_t2_g3_t

0x2512,	// (0x000a74b0) main_sp_fs_list_pane_ParamLimits

0x2512,	// (0x000a74b0) main_sp_fs_list_pane

0xbd46,	// (0x000b0ce4) sp_fs_scroll_pane_ParamLimits

0xbd46,	// (0x000b0ce4) sp_fs_scroll_pane

0x251e,	// (0x000a74bc) list_medium_line_x2_t3_t1

0x252e,	// (0x000a74cc) list_medium_line_x2_t3_t2

0x253c,	// (0x000a74da) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000b42b9) list_medium_line_x2_t3_t

0x254a,	// (0x000a74e8) list_medium_line_x3_t4_t1

0x255a,	// (0x000a74f8) list_medium_line_x3_t4_t2

0x2568,	// (0x000a7506) list_medium_line_x3_t4_t3

0x253c,	// (0x000a74da) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000b42c0) list_medium_line_x3_t4_t

0x2576,	// (0x000a7514) list_medium_line_x4_t5_t1

0x2586,	// (0x000a7524) list_medium_line_x4_t5_t2

0x2568,	// (0x000a7506) list_medium_line_x4_t5_t3

0x2594,	// (0x000a7532) list_medium_line_x4_t5_t4

0x253c,	// (0x000a74da) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000b42c9) list_medium_line_x4_t5_t

0x1317,	// (0x000a62b5) list_medium_line_t4_g4_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_t4_g4_g1

0x25a2,	// (0x000a7540) list_medium_line_t4_g4_g2_ParamLimits

0x25a2,	// (0x000a7540) list_medium_line_t4_g4_g2

0x25ae,	// (0x000a754c) list_medium_line_t4_g4_g3_ParamLimits

0x25ae,	// (0x000a754c) list_medium_line_t4_g4_g3

0x132f,	// (0x000a62cd) list_medium_line_t4_g4_g4_ParamLimits

0x132f,	// (0x000a62cd) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000b42d4) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000b42d4) list_medium_line_t4_g4_g

0x25ba,	// (0x000a7558) list_medium_line_t4_g4_t1_ParamLimits

0x25ba,	// (0x000a7558) list_medium_line_t4_g4_t1

0x25cf,	// (0x000a756d) list_medium_line_t4_g4_t2_ParamLimits

0x25cf,	// (0x000a756d) list_medium_line_t4_g4_t2

0x25e4,	// (0x000a7582) list_medium_line_t4_g4_t3_ParamLimits

0x25e4,	// (0x000a7582) list_medium_line_t4_g4_t3

0x1364,	// (0x000a6302) list_medium_line_t4_g4_t4_ParamLimits

0x1364,	// (0x000a6302) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000b42dd) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000b42dd) list_medium_line_t4_g4_t

0x26ac,	// (0x000a764a) chi_dic_find_pane_g1

0x374d,	// (0x000a86eb) main_tport_pane

0x65c0,	// (0x000ab55e) list_medium_line_plain_t1

0x6668,	// (0x000ab606) list_medium_line_t2_g2_g1_ParamLimits

0x6668,	// (0x000ab606) list_medium_line_t2_g2_g1

0x6674,	// (0x000ab612) list_medium_line_t2_g2_g2_ParamLimits

0x6674,	// (0x000ab612) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000b499e) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000b499e) list_medium_line_t2_g2_g

0x6680,	// (0x000ab61e) list_medium_line_t2_g2_t1_ParamLimits

0x6680,	// (0x000ab61e) list_medium_line_t2_g2_t1

0x669a,	// (0x000ab638) list_medium_line_t2_g2_t2_ParamLimits

0x669a,	// (0x000ab638) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000b49a3) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000b49a3) list_medium_line_t2_g2_t

0xceb5,	// (0x000b1e53) aid_sp_fs_list_icon_a_sm

0xef0b,	// (0x000b3ea9) aid_sp_fs_list_icon_d

0xbd3d,	// (0x000b0cdb) aid_sp_fs_text_primary

0xcebd,	// (0x000b1e5b) aid_sp_fs_text_secondary

0x6d05,	// (0x000abca3) list_medium_line

0x6d05,	// (0x000abca3) list_medium_line_g2

0x6d05,	// (0x000abca3) list_medium_line_g3

0x6d05,	// (0x000abca3) list_medium_line_plain

0x6d05,	// (0x000abca3) list_medium_line_plain_t2

0x6d05,	// (0x000abca3) list_medium_line_plain_t3

0x6d05,	// (0x000abca3) list_medium_line_right_icon

0x6d05,	// (0x000abca3) list_medium_line_right_iconx2

0x6d05,	// (0x000abca3) list_medium_line_t2

0x6d05,	// (0x000abca3) list_medium_line_t2_g2

0x6d05,	// (0x000abca3) list_medium_line_t2_g3

0x6d05,	// (0x000abca3) list_medium_line_t2_right_icon

0x6d05,	// (0x000abca3) list_medium_line_t2_right_iconx2

0x6d05,	// (0x000abca3) list_medium_line_t3

0x6d05,	// (0x000abca3) list_medium_line_t3_g2

0x6d05,	// (0x000abca3) list_medium_line_t3_g3

0x6d05,	// (0x000abca3) list_medium_line_t3_right_iconx2

0x6d0e,	// (0x000abcac) list_medium_line_t4_g4

0x6d05,	// (0x000abca3) list_medium_line_x2

0x6d05,	// (0x000abca3) list_medium_line_x2_t2_g2

0x6d05,	// (0x000abca3) list_medium_line_x2_t2_g3

0x6d05,	// (0x000abca3) list_medium_line_x2_t2_g4

0x6d05,	// (0x000abca3) list_medium_line_x2_t3

0x6d05,	// (0x000abca3) list_medium_line_x2_t3_g2

0x6d05,	// (0x000abca3) list_medium_line_x2_t3_g3

0x6d05,	// (0x000abca3) list_medium_line_x2_t3_g4

0x6d05,	// (0x000abca3) list_medium_line_x2_t4_g2

0x6d05,	// (0x000abca3) list_medium_line_x2_t4_g4

0x6d17,	// (0x000abcb5) list_medium_line_x3

0x6d17,	// (0x000abcb5) list_medium_line_x3_t4

0x6d17,	// (0x000abcb5) list_medium_line_x3_t4_g4

0x6d0e,	// (0x000abcac) list_medium_line_x4_t4

0x6d0e,	// (0x000abcac) list_medium_line_x4_t4_g7

0x6d0e,	// (0x000abcac) list_medium_line_x4_t5

0x6d20,	// (0x000abcbe) list_single_fs_dyc_pane_ParamLimits

0x6d20,	// (0x000abcbe) list_single_fs_dyc_pane

0x1317,	// (0x000a62b5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x4_t4_g7_g1

0x7497,	// (0x000ac435) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7497,	// (0x000ac435) list_medium_line_x4_t4_g7_g2

0x74a3,	// (0x000ac441) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74a3,	// (0x000ac441) list_medium_line_x4_t4_g7_g3

0x74b2,	// (0x000ac450) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74b2,	// (0x000ac450) list_medium_line_x4_t4_g7_g4

0x74be,	// (0x000ac45c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74be,	// (0x000ac45c) list_medium_line_x4_t4_g7_g5

0x74cd,	// (0x000ac46b) list_medium_line_x4_t4_g7_g6_ParamLimits

0x74cd,	// (0x000ac46b) list_medium_line_x4_t4_g7_g6

0x74dc,	// (0x000ac47a) list_medium_line_x4_t4_g7_g7_ParamLimits

0x74dc,	// (0x000ac47a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000b4b6e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000b4b6e) list_medium_line_x4_t4_g7_g

0x74e8,	// (0x000ac486) list_medium_line_x4_t4_g7_t1_ParamLimits

0x74e8,	// (0x000ac486) list_medium_line_x4_t4_g7_t1

0x74fd,	// (0x000ac49b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x74fd,	// (0x000ac49b) list_medium_line_x4_t4_g7_t2

0x7512,	// (0x000ac4b0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7512,	// (0x000ac4b0) list_medium_line_x4_t4_g7_t3

0x7527,	// (0x000ac4c5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7527,	// (0x000ac4c5) list_medium_line_x4_t4_g7_t4

0x7539,	// (0x000ac4d7) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7539,	// (0x000ac4d7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000b4b7d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000b4b7d) list_medium_line_x4_t4_g7_t

0x754b,	// (0x000ac4e9) list_single_dyc_row_pane_ParamLimits

0x754b,	// (0x000ac4e9) list_single_dyc_row_pane

0x7c21,	// (0x000acbbf) call5_gesture_pane_ParamLimits

0x7c21,	// (0x000acbbf) call5_gesture_pane

0x7c77,	// (0x000acc15) call5_windows_pane_ParamLimits

0x7c77,	// (0x000acc15) call5_windows_pane

0x7d1d,	// (0x000accbb) call5_swipe_1_pane_cp_ParamLimits

0x7d1d,	// (0x000accbb) call5_swipe_1_pane_cp

0x7d29,	// (0x000accc7) call5_swipe_2_pane_cp_ParamLimits

0x7d29,	// (0x000accc7) call5_swipe_2_pane_cp

0xeea8,	// (0x000b3e46) call5_image_pane_cp

0x7d35,	// (0x000accd3) popup_call5_audio_first_window_cp_ParamLimits

0x7d35,	// (0x000accd3) popup_call5_audio_first_window_cp

0xd9a5,	// (0x000b2943) call5_swipe_1_pane_g1_cp_ParamLimits

0xd9a5,	// (0x000b2943) call5_swipe_1_pane_g1_cp

0xd9e5,	// (0x000b2983) call5_swipe_1_pane_g2_cp

0xd9be,	// (0x000b295c) call5_swipe_1_pane_t1_cp_ParamLimits

0xd9be,	// (0x000b295c) call5_swipe_1_pane_t1_cp

0xd9a5,	// (0x000b2943) call5_swipe_2_pane_g1_cp_ParamLimits

0xd9a5,	// (0x000b2943) call5_swipe_2_pane_g1_cp

0xd9ed,	// (0x000b298b) call5_swipe_2_pane_g2_cp

0xd9f5,	// (0x000b2993) call5_swipe_2_pane_t1_cp_ParamLimits

0xd9f5,	// (0x000b2993) call5_swipe_2_pane_t1_cp

0xeef1,	// (0x000b3e8f) main_sp_fs_email_pane

0xda0a,	// (0x000b29a8) main_sp_fs_listscroll_pane_te

0x7d43,	// (0x000acce1) popup_sp_fs_action_menu_pane_ParamLimits

0x7d43,	// (0x000acce1) popup_sp_fs_action_menu_pane

0xbe4a,	// (0x000b0de8) bg_sp_fs_ctrlbar_pane_g1

0xda13,	// (0x000b29b1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xda1c,	// (0x000b29ba) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xda25,	// (0x000b29c3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbe4a,	// (0x000b0de8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000b4c6b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbc1a,	// (0x000b0bb8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbc1a,	// (0x000b0bb8) bg_sp_fs_ctrlbar_ddmenu_pane

0xda2e,	// (0x000b29cc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xda2e,	// (0x000b29cc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xda3a,	// (0x000b29d8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xda3a,	// (0x000b29d8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000b4c74) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000b4c74) main_sp_fs_ctrlbar_ddmenu_pane_g

0xda46,	// (0x000b29e4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xda46,	// (0x000b29e4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d87,	// (0x000acd25) list_medium_line_t2_right_icon_g1

0x7d8f,	// (0x000acd2d) list_medium_line_t2_right_icon_t1

0x7d9f,	// (0x000acd3d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000b4c79) list_medium_line_t2_right_icon_t

0xba2d,	// (0x000b09cb) bg_sp_fs_ctrlbar_pane_ParamLimits

0xba2d,	// (0x000b09cb) bg_sp_fs_ctrlbar_pane

0x7df9,	// (0x000acd97) main_sp_fs_ctrlbar_button_pane_cp01

0x7e03,	// (0x000acda1) main_sp_fs_ctrlbar_ddmenu_pane

0xda98,	// (0x000b2a36) main_sp_fs_ctrlbar_pane_g1

0xdaa4,	// (0x000b2a42) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000b4c7e) main_sp_fs_ctrlbar_pane_g

0xdab0,	// (0x000b2a4e) main_sp_fs_ctrlbar_pane_t1

0x7e0d,	// (0x000acdab) main_sp_fs_ctrlbar_pane

0x7e31,	// (0x000acdcf) main_sp_fs_listscroll_pane_te_cp01

0x7e51,	// (0x000acdef) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e51,	// (0x000acdef) popup_sp_fs_action_menu_pane_cp01

0xeef1,	// (0x000b3e8f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xeef1,	// (0x000b3e8f) bg_sp_fs_highlight_list_pane_cp01

0xdae0,	// (0x000b2a7e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdae0,	// (0x000b2a7e) sp_fs_action_menu_list_gene_pane_g1

0xdaef,	// (0x000b2a8d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdaef,	// (0x000b2a8d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000b4c88) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000b4c88) sp_fs_action_menu_list_gene_pane_g

0xdafc,	// (0x000b2a9a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdafc,	// (0x000b2a9a) sp_fs_action_menu_list_gene_pane_t1

0xdb14,	// (0x000b2ab2) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdb14,	// (0x000b2ab2) sp_fs_action_menu_list_gene_pane

0xdb35,	// (0x000b2ad3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdb35,	// (0x000b2ad3) popup_sp_fs_action_menu_bg_pane

0xdb43,	// (0x000b2ae1) sp_fs_action_menu_list_pane_ParamLimits

0xdb43,	// (0x000b2ae1) sp_fs_action_menu_list_pane

0xef1c,	// (0x000b3eba) sp_fs_scroll_pane_cp01_ParamLimits

0xef1c,	// (0x000b3eba) sp_fs_scroll_pane_cp01

0x7e81,	// (0x000ace1f) list_medium_line_plain_t2_t1

0x7e91,	// (0x000ace2f) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000b4c8d) list_medium_line_plain_t2_t

0x7ea1,	// (0x000ace3f) list_medium_line_plain_t3_t1

0x7eb1,	// (0x000ace4f) list_medium_line_plain_t3_t2

0x7ebf,	// (0x000ace5d) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000b4c92) list_medium_line_plain_t3_t

0x1317,	// (0x000a62b5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x2_t2_g2_g1

0x132f,	// (0x000a62cd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x132f,	// (0x000a62cd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000b41e4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000b41e4) list_medium_line_x2_t2_g2_g

0x25ba,	// (0x000a7558) list_medium_line_x2_t2_g2_t1_ParamLimits

0x25ba,	// (0x000a7558) list_medium_line_x2_t2_g2_t1

0x1364,	// (0x000a6302) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1364,	// (0x000a6302) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000b4c99) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000b4c99) list_medium_line_x2_t2_g2_t

0x1317,	// (0x000a62b5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x2_t4_g2_g1

0x7ecd,	// (0x000ace6b) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7ecd,	// (0x000ace6b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000b4c9e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000b4c9e) list_medium_line_x2_t4_g2_g

0x7edf,	// (0x000ace7d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7edf,	// (0x000ace7d) list_medium_line_x2_t4_g2_t1

0x7ef6,	// (0x000ace94) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7ef6,	// (0x000ace94) list_medium_line_x2_t4_g2_t2

0x7f0b,	// (0x000acea9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f0b,	// (0x000acea9) list_medium_line_x2_t4_g2_t3

0x1364,	// (0x000a6302) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1364,	// (0x000a6302) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000b4ca3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000b4ca3) list_medium_line_x2_t4_g2_t

0x7f1d,	// (0x000acebb) list_medium_line_t3_right_iconx2_g1

0x7d87,	// (0x000acd25) list_medium_line_t3_right_iconx2_g2

0x7f25,	// (0x000acec3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000b4cac) list_medium_line_t3_right_iconx2_g

0x7f2f,	// (0x000acecd) list_medium_line_t3_right_iconx2_t1

0x7f3f,	// (0x000acedd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000b4cb3) list_medium_line_t3_right_iconx2_t

0x1317,	// (0x000a62b5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x3_t4_g4_g1

0x1323,	// (0x000a62c1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1323,	// (0x000a62c1) list_medium_line_x3_t4_g4_g2

0x25a2,	// (0x000a7540) list_medium_line_x3_t4_g4_g3_ParamLimits

0x25a2,	// (0x000a7540) list_medium_line_x3_t4_g4_g3

0x7f4d,	// (0x000aceeb) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f4d,	// (0x000aceeb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000b4cb8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000b4cb8) list_medium_line_x3_t4_g4_g

0x7f59,	// (0x000acef7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f59,	// (0x000acef7) list_medium_line_x3_t4_g4_t1

0x7f70,	// (0x000acf0e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f70,	// (0x000acf0e) list_medium_line_x3_t4_g4_t2

0x25cf,	// (0x000a756d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x25cf,	// (0x000a756d) list_medium_line_x3_t4_g4_t3

0x7f8b,	// (0x000acf29) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f8b,	// (0x000acf29) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000b4cc1) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000b4cc1) list_medium_line_x3_t4_g4_t

0x7fa8,	// (0x000acf46) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fa8,	// (0x000acf46) list_single_dyc_row_text_pane_t1

0x7ff1,	// (0x000acf8f) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ff1,	// (0x000acf8f) list_single_dyc_row_text_pane_t2

0xdb65,	// (0x000b2b03) list_single_dyc_row_text_pane_t3_ParamLimits

0xdb65,	// (0x000b2b03) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000b4cca) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000b4cca) list_single_dyc_row_text_pane_t

0xdb89,	// (0x000b2b27) list_single_dyc_row_pane_g1_ParamLimits

0xdb89,	// (0x000b2b27) list_single_dyc_row_pane_g1

0xdb95,	// (0x000b2b33) list_single_dyc_row_pane_g2_ParamLimits

0xdb95,	// (0x000b2b33) list_single_dyc_row_pane_g2

0xdba1,	// (0x000b2b3f) list_single_dyc_row_pane_g3_ParamLimits

0xdba1,	// (0x000b2b3f) list_single_dyc_row_pane_g3

0xdbad,	// (0x000b2b4b) list_single_dyc_row_pane_g4_ParamLimits

0xdbad,	// (0x000b2b4b) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000b4cd7) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000b4cd7) list_single_dyc_row_pane_g

0xdbb9,	// (0x000b2b57) list_single_dyc_row_text_pane_ParamLimits

0xdbb9,	// (0x000b2b57) list_single_dyc_row_text_pane

0xe5a6,	// (0x000b3544) bg_sp_fs_scroll_pane

0xdbd8,	// (0x000b2b76) thumb_sp_fs_scroll_pane

0x6668,	// (0x000ab606) list_medium_line_g1_ParamLimits

0x6668,	// (0x000ab606) list_medium_line_g1

0x8126,	// (0x000ad0c4) list_medium_line_t1_ParamLimits

0x8126,	// (0x000ad0c4) list_medium_line_t1

0x1317,	// (0x000a62b5) list_medium_line_x2_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x2_g1

0x1323,	// (0x000a62c1) list_medium_line_x2_g2_ParamLimits

0x1323,	// (0x000a62c1) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000b4ce0) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000b4ce0) list_medium_line_x2_g

0xdbe1,	// (0x000b2b7f) list_medium_line_x2_t1_ParamLimits

0xdbe1,	// (0x000b2b7f) list_medium_line_x2_t1

0x1317,	// (0x000a62b5) list_medium_line_x3_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x3_g1

0x1323,	// (0x000a62c1) list_medium_line_x3_g2_ParamLimits

0x1323,	// (0x000a62c1) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000b4ce0) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000b4ce0) list_medium_line_x3_g

0xdbe1,	// (0x000b2b7f) list_medium_line_x3_t1_ParamLimits

0xdbe1,	// (0x000b2b7f) list_medium_line_x3_t1

0xdbf7,	// (0x000b2b95) thumb_sp_fs_scroll_pane_g1

0xdc00,	// (0x000b2b9e) thumb_sp_fs_scroll_pane_g2

0xdc09,	// (0x000b2ba7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b4ce5) thumb_sp_fs_scroll_pane_g

0xdbf7,	// (0x000b2b95) bg_sp_fs_scroll_pane_g1

0xdc00,	// (0x000b2b9e) bg_sp_fs_scroll_pane_g2

0xdc09,	// (0x000b2ba7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b4ce5) bg_sp_fs_scroll_pane_g

0x1317,	// (0x000a62b5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1317,	// (0x000a62b5) list_medium_line_x2_t3_g4_g1

0x13a1,	// (0x000a633f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x13a1,	// (0x000a633f) list_medium_line_x2_t3_g4_g2

0x1323,	// (0x000a62c1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1323,	// (0x000a62c1) list_medium_line_x2_t3_g4_g3

0x132f,	// (0x000a62cd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x132f,	// (0x000a62cd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000b4260) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000b4260) list_medium_line_x2_t3_g4_g

0x813b,	// (0x000ad0d9) list_medium_line_x2_t3_g4_t1_ParamLimits

0x813b,	// (0x000ad0d9) list_medium_line_x2_t3_g4_t1

0x8155,	// (0x000ad0f3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8155,	// (0x000ad0f3) list_medium_line_x2_t3_g4_t2

0x1364,	// (0x000a6302) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1364,	// (0x000a6302) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000b4cec) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000b4cec) list_medium_line_x2_t3_g4_t

0x6668,	// (0x000ab606) list_medium_line_g2_g1_ParamLimits

0x6668,	// (0x000ab606) list_medium_line_g2_g1

0x6674,	// (0x000ab612) list_medium_line_g2_g2_ParamLimits

0x6674,	// (0x000ab612) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000b499e) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000b499e) list_medium_line_g2_g

0x816e,	// (0x000ad10c) list_medium_line_g2_t1_ParamLimits

0x816e,	// (0x000ad10c) list_medium_line_g2_t1

0x6668,	// (0x000ab606) list_medium_line_t3_g2_g1_ParamLimits

0x6668,	// (0x000ab606) list_medium_line_t3_g2_g1

0x6674,	// (0x000ab612) list_medium_line_t3_g2_g2_ParamLimits

0x6674,	// (0x000ab612) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000b499e) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000b499e) list_medium_line_t3_g2_g

0x8183,	// (0x000ad121) list_medium_line_t3_g2_t1_ParamLimits

0x8183,	// (0x000ad121) list_medium_line_t3_g2_t1

0x819d,	// (0x000ad13b) list_medium_line_t3_g2_t2_ParamLimits

0x819d,	// (0x000ad13b) list_medium_line_t3_g2_t2

0x81b3,	// (0x000ad151) list_medium_line_t3_g2_t3_ParamLimits

0x81b3,	// (0x000ad151) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000b4cf3) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000b4cf3) list_medium_line_t3_g2_t

0x7d87,	// (0x000acd25) list_medium_line_right_icon_g1

0x81ca,	// (0x000ad168) list_medium_line_right_icon_t1

0x6668,	// (0x000ab606) list_medium_line_t2_g1_ParamLimits

0x6668,	// (0x000ab606) list_medium_line_t2_g1

0x81d8,	// (0x000ad176) list_medium_line_t2_t1_ParamLimits

0x81d8,	// (0x000ad176) list_medium_line_t2_t1

0x81f2,	// (0x000ad190) list_medium_line_t2_t2_ParamLimits

0x81f2,	// (0x000ad190) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000b4cfa) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000b4cfa) list_medium_line_t2_t

0x6668,	// (0x000ab606) list_medium_line_t3_g1_ParamLimits

0x6668,	// (0x000ab606) list_medium_line_t3_g1

0x820b,	// (0x000ad1a9) list_medium_line_t3_t1_ParamLimits

0x820b,	// (0x000ad1a9) list_medium_line_t3_t1

0x8222,	// (0x000ad1c0) list_medium_line_t3_t2_ParamLimits

0x8222,	// (0x000ad1c0) list_medium_line_t3_t2

0x8237,	// (0x000ad1d5) list_medium_line_t3_t3_ParamLimits

0x8237,	// (0x000ad1d5) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000b4cff) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000b4cff) list_medium_line_t3_t

0x6668,	// (0x000ab606) list_medium_line_g3_g1_ParamLimits

0x6668,	// (0x000ab606) list_medium_line_g3_g1

0x8249,	// (0x000ad1e7) list_medium_line_g3_g2_ParamLimits

0x8249,	// (0x000ad1e7) list_medium_line_g3_g2

0x6674,	// (0x000ab612) list_medium_line_g3_g3_ParamLimits

0x6674,	// (0x000ab612) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000b4d06) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000b4d06) list_medium_line_g3_g

0x8255,	// (0x000ad1f3) list_medium_line_g3_t1_ParamLimits

0x8255,	// (0x000ad1f3) list_medium_line_g3_t1

0x6668,	// (0x000ab606) list_medium_line_t2_g3_g1_ParamLimits

0x6668,	// (0x000ab606) list_medium_line_t2_g3_g1

0x8249,	// (0x000ad1e7) list_medium_line_t2_g3_g2_ParamLimits

0x8249,	// (0x000ad1e7) list_medium_line_t2_g3_g2

0x6674,	// (0x000ab612) list_medium_line_t2_g3_g3_ParamLimits

0x6674,	// (0x000ab612) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000b4d06) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000b4d06) list_medium_line_t2_g3_g

0x826a,	// (0x000ad208) list_medium_line_t2_g3_t1_ParamLimits

0x826a,	// (0x000ad208) list_medium_line_t2_g3_t1

0x8284,	// (0x000ad222) list_medium_line_t2_g3_t2_ParamLimits

0x8284,	// (0x000ad222) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000b4d0d) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000b4d0d) list_medium_line_t2_g3_t

0x6668,	// (0x000ab606) list_medium_line_t3_g3_g1_ParamLimits

0x6668,	// (0x000ab606) list_medium_line_t3_g3_g1

0x8249,	// (0x000ad1e7) list_medium_line_t3_g3_g2_ParamLimits

0x8249,	// (0x000ad1e7) list_medium_line_t3_g3_g2

0x6674,	// (0x000ab612) list_medium_line_t3_g3_g3_ParamLimits

0x6674,	// (0x000ab612) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000b4d06) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000b4d06) list_medium_line_t3_g3_g

0x82a2,	// (0x000ad240) list_medium_line_t3_g3_t1_ParamLimits

0x82a2,	// (0x000ad240) list_medium_line_t3_g3_t1

0x82bb,	// (0x000ad259) list_medium_line_t3_g3_t2_ParamLimits

0x82bb,	// (0x000ad259) list_medium_line_t3_g3_t2

0x82d1,	// (0x000ad26f) list_medium_line_t3_g3_t3_ParamLimits

0x82d1,	// (0x000ad26f) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000b4d12) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000b4d12) list_medium_line_t3_g3_t

0x7f1d,	// (0x000acebb) list_medium_line_right_iconx2_g1

0x7d87,	// (0x000acd25) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b4d19) list_medium_line_right_iconx2_g

0x82eb,	// (0x000ad289) list_medium_line_right_iconx2_t1

0x7f1d,	// (0x000acebb) list_medium_line_t2_right_iconx2_g1

0x7d87,	// (0x000acd25) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b4d19) list_medium_line_t2_right_iconx2_g

0x82f9,	// (0x000ad297) list_medium_line_t2_right_iconx2_t1

0x8309,	// (0x000ad2a7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000b4d1e) list_medium_line_t2_right_iconx2_t

0x831b,	// (0x000ad2b9) list_medium_line_x4_t4_t1

0x8329,	// (0x000ad2c7) list_medium_line_x4_t4_t2

0x8339,	// (0x000ad2d7) list_medium_line_x4_t4_t3

0x8349,	// (0x000ad2e7) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000b4d23) list_medium_line_x4_t4_t

0x839c,	// (0x000ad33a) tport_appsw_pane_ParamLimits

0x839c,	// (0x000ad33a) tport_appsw_pane

0x83b4,	// (0x000ad352) tport_contact_pane_ParamLimits

0x83b4,	// (0x000ad352) tport_contact_pane

0x83cc,	// (0x000ad36a) tport_listscroll_pane_ParamLimits

0x83cc,	// (0x000ad36a) tport_listscroll_pane

0x83e6,	// (0x000ad384) cell_tport_appsw_pane_ParamLimits

0x83e6,	// (0x000ad384) cell_tport_appsw_pane

0xc8fe,	// (0x000b189c) tport_appsw_pane_g1_ParamLimits

0xc8fe,	// (0x000b189c) tport_appsw_pane_g1

0xdc12,	// (0x000b2bb0) tport_contact_pane_g1

0xd4b4,	// (0x000b2452) tport_contact_pane_t1

0xdc1b,	// (0x000b2bb9) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000b4d2c) tport_contact_pane_t

0xdc29,	// (0x000b2bc7) list_tport_pane

0xdc32,	// (0x000b2bd0) scroll_pane_cp_030

0x842e,	// (0x000ad3cc) cell_tport_appsw_pane_g1

0x843e,	// (0x000ad3dc) cell_tport_appsw_pane_t1

0x844c,	// (0x000ad3ea) grid_highlight_pane_cp019

0x8454,	// (0x000ad3f2) list_tport_double_graphic_pane_ParamLimits

0x8454,	// (0x000ad3f2) list_tport_double_graphic_pane

0xeef1,	// (0x000b3e8f) list_highlight_pane_cp023_ParamLimits

0xeef1,	// (0x000b3e8f) list_highlight_pane_cp023

0x8461,	// (0x000ad3ff) list_tport_double_graphic_pane_g1_ParamLimits

0x8461,	// (0x000ad3ff) list_tport_double_graphic_pane_g1

0x846e,	// (0x000ad40c) list_tport_double_graphic_pane_t1_ParamLimits

0x846e,	// (0x000ad40c) list_tport_double_graphic_pane_t1

0x8483,	// (0x000ad421) list_tport_double_graphic_pane_t2_ParamLimits

0x8483,	// (0x000ad421) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000b4d38) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000b4d38) list_tport_double_graphic_pane_t

0xe5a6,	// (0x000b3544) main_cale_note_pane

0x5e2e,	// (0x000aadcc) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e2e,	// (0x000aadcc) cell_vitu2_function_top_wide_pane_cp01

0x78ad,	// (0x000ac84b) wait_bar_pane_cp05_ParamLimits

0xeef1,	// (0x000b3e8f) listscroll_cmail_pane

0xdc3b,	// (0x000b2bd9) list_cmail_pane

0xcb64,	// (0x000b1b02) list_cmail_body_pane

0x8495,	// (0x000ad433) list_single_cmail_header_caption_pane

0x84ab,	// (0x000ad449) list_single_cmail_header_detail_pane_ParamLimits

0x84ab,	// (0x000ad449) list_single_cmail_header_detail_pane

0xdc4b,	// (0x000b2be9) list_single_cmail_header_caption_pane_t1

0x84d4,	// (0x000ad472) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84d4,	// (0x000ad472) list_single_cmail_header_detail_pane_g1

0xef42,	// (0x000b3ee0) list_single_cmail_header_detail_pane_g2_ParamLimits

0xef42,	// (0x000b3ee0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000b4d3d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000b4d3d) list_single_cmail_header_detail_pane_g

0xdc6f,	// (0x000b2c0d) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdc6f,	// (0x000b2c0d) list_single_cmail_header_detail_pane_t1

0xdccf,	// (0x000b2c6d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdccf,	// (0x000b2c6d) list_single_cmail_header_editor_pane_bg

0xd655,	// (0x000b25f3) list_cmail_body_pane_g1

0xdce6,	// (0x000b2c84) list_cmail_body_pane_t1

0xc93b,	// (0x000b18d9) list_single_cmail_header_editor_pane_bg_g1

0x97a7,	// (0x000ae745) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc94b,	// (0x000b18e9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc943,	// (0x000b18e1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcb95,	// (0x000b1b33) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc96b,	// (0x000b1909) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc95b,	// (0x000b18f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc963,	// (0x000b1901) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9787,	// (0x000ae725) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84ec,	// (0x000ad48a) calenote_gesture_pane_ParamLimits

0x84ec,	// (0x000ad48a) calenote_gesture_pane

0x850c,	// (0x000ad4aa) calenote_window_pane_ParamLimits

0x850c,	// (0x000ad4aa) calenote_window_pane

0xdcf4,	// (0x000b2c92) popup_note_window_cp01

0x8528,	// (0x000ad4c6) calenote_swipe_1_pane_ParamLimits

0x8528,	// (0x000ad4c6) calenote_swipe_1_pane

0x7d29,	// (0x000accc7) calenote_swipe_2_pane_ParamLimits

0x7d29,	// (0x000accc7) calenote_swipe_2_pane

0xd9a5,	// (0x000b2943) calenote_swipe_1_pane_g1_ParamLimits

0xd9a5,	// (0x000b2943) calenote_swipe_1_pane_g1

0xd9b2,	// (0x000b2950) calenote_swipe_1_pane_g2_ParamLimits

0xd9b2,	// (0x000b2950) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000b4c61) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000b4c61) calenote_swipe_1_pane_g

0xdd06,	// (0x000b2ca4) calenote_swipe_1_pane_t1_ParamLimits

0xdd06,	// (0x000b2ca4) calenote_swipe_1_pane_t1

0xd9a5,	// (0x000b2943) calenote_swipe_2_pane_g1_ParamLimits

0xd9a5,	// (0x000b2943) calenote_swipe_2_pane_g1

0xdd25,	// (0x000b2cc3) calenote_swipe_2_pane_g2_ParamLimits

0xdd25,	// (0x000b2cc3) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000b4d49) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000b4d49) calenote_swipe_2_pane_g

0xdd31,	// (0x000b2ccf) calenote_swipe_2_pane_t1_ParamLimits

0xdd31,	// (0x000b2ccf) calenote_swipe_2_pane_t1

0xe5a6,	// (0x000b3544) main_mup_navstr_pane

0x4afe,	// (0x000a9a9c) main_mup3_pane_t7_ParamLimits

0x4afe,	// (0x000a9a9c) main_mup3_pane_t7

0x9e74,	// (0x000aee12) main_mp4_pane_g6_ParamLimits

0x9e74,	// (0x000aee12) main_mp4_pane_g6

0xa018,	// (0x000aefb6) main_image3_pane_t4_ParamLimits

0xa018,	// (0x000aefb6) main_image3_pane_t4

0x853d,	// (0x000ad4db) popup_navstr_preview_pane_ParamLimits

0x853d,	// (0x000ad4db) popup_navstr_preview_pane

0x8551,	// (0x000ad4ef) scroll_navstr_pane_ParamLimits

0x8551,	// (0x000ad4ef) scroll_navstr_pane

0xe5a6,	// (0x000b3544) bg_popup_preview_window_pane_cp04

0xdd58,	// (0x000b2cf6) popup_navstr_preview_pane_t1

0x8565,	// (0x000ad503) scroll_navstr_pane_g1_ParamLimits

0x8565,	// (0x000ad503) scroll_navstr_pane_g1

0x8579,	// (0x000ad517) scroll_navstr_pane_t1_ParamLimits

0x8579,	// (0x000ad517) scroll_navstr_pane_t1

0xdcfd,	// (0x000b2c9b) bg_button_pane_cp014

0xdcfd,	// (0x000b2c9b) bg_button_pane_cp030

0x7bc7,	// (0x000acb65) list_double_fisheye_pane_g4_ParamLimits

0x7bc7,	// (0x000acb65) list_double_fisheye_pane_g4

0x7bd3,	// (0x000acb71) list_double_fisheye_pane_g5_ParamLimits

0x7bd3,	// (0x000acb71) list_double_fisheye_pane_g5

0xbd46,	// (0x000b0ce4) sp_fs_scroll_pane_cp03

0xda98,	// (0x000b2a36) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdaa4,	// (0x000b2a42) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000b4c7e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdab0,	// (0x000b2a4e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdc43,	// (0x000b2be1) sp_fs_scroll_pane_cp02

0xede7,	// (0x000b3d85) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xede7,	// (0x000b3d85) popup_sp_fs_calendar_preview_list_single_pane

0xe5a6,	// (0x000b3544) main_cam6_pano_pane

0x94e7,	// (0x000ae485) main_mup3_pane_ParamLimits

0xe5a6,	// (0x000b3544) main_phacti_pane

0x7780,	// (0x000ac71e) bg_button_pane_cp11

0x779a,	// (0x000ac738) main_mobtv_info_pane_g2_ParamLimits

0x779a,	// (0x000ac738) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000b4bde) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000b4bde) main_mobtv_info_pane_g

0x7977,	// (0x000ac915) sc_clock_pane_t5_ParamLimits

0x7977,	// (0x000ac915) sc_clock_pane_t5

0x7a32,	// (0x000ac9d0) main_radioblah_pane_g1_ParamLimits

0xd8f1,	// (0x000b288f) main_radioblah_pane_t3_ParamLimits

0xd8f1,	// (0x000b288f) main_radioblah_pane_t3

0xd909,	// (0x000b28a7) main_radioblah_pane_t4_ParamLimits

0xd909,	// (0x000b28a7) main_radioblah_pane_t4

0x7a5a,	// (0x000ac9f8) main_radioblah_text_pane_ParamLimits

0x7a5a,	// (0x000ac9f8) main_radioblah_text_pane

0x7a6c,	// (0x000aca0a) main_radioblah_info_pane_g1_ParamLimits

0x7b05,	// (0x000acaa3) main_radioblah_info_pane_t4_ParamLimits

0x7b05,	// (0x000acaa3) main_radioblah_info_pane_t4

0xeef1,	// (0x000b3e8f) main_sp_fs_calendar_pane

0x8590,	// (0x000ad52e) main_phacti_pane_g1

0x8598,	// (0x000ad536) phacti_note_pane_ParamLimits

0x8598,	// (0x000ad536) phacti_note_pane

0xdd6f,	// (0x000b2d0d) phacti_term_pane_ParamLimits

0xdd6f,	// (0x000b2d0d) phacti_term_pane

0xdd84,	// (0x000b2d22) phacti_note_pane_t1_ParamLimits

0xdd84,	// (0x000b2d22) phacti_note_pane_t1

0xdd9b,	// (0x000b2d39) phacti_term_pane_g1

0xdda3,	// (0x000b2d41) phacti_term_pane_t1_ParamLimits

0xdda3,	// (0x000b2d41) phacti_term_pane_t1

0xddcd,	// (0x000b2d6b) popup_sp_fs_calendar_preview_list_single_pane_g1

0x95a8,	// (0x000ae546) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000b4d53) popup_sp_fs_calendar_preview_list_single_pane_g

0xddd5,	// (0x000b2d73) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xddd5,	// (0x000b2d73) popup_sp_fs_calendar_preview_list_single_pane_t1

0xddeb,	// (0x000b2d89) aid_popup_sp_fs_bg_corner_pane

0xbe4a,	// (0x000b0de8) popup_sp_fs_calendar_preview_bg_pane_g1

0xe5a6,	// (0x000b3544) popup_sp_fs_calendar_preview_bg_pane

0xddf3,	// (0x000b2d91) popup_sp_fs_calendar_preview_list_pane

0xba2d,	// (0x000b09cb) bg_main_sp_fs_cale_pane_ParamLimits

0xba2d,	// (0x000b09cb) bg_main_sp_fs_cale_pane

0xddfb,	// (0x000b2d99) listscroll_cale_mrui_pane_ParamLimits

0xddfb,	// (0x000b2d99) listscroll_cale_mrui_pane

0xde10,	// (0x000b2dae) listscroll_sp_fs_schedule_track_pane

0xde19,	// (0x000b2db7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xde19,	// (0x000b2db7) main_sp_fs_ctrlbar_pane_cp01

0xde2c,	// (0x000b2dca) main_sp_fs_ribbon_pane

0xde34,	// (0x000b2dd2) popup_sp_fs_cale_preview_window

0x860d,	// (0x000ad5ab) list_single_sp_fs_schedule_track_pane_ParamLimits

0x860d,	// (0x000ad5ab) list_single_sp_fs_schedule_track_pane

0xeef1,	// (0x000b3e8f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeef1,	// (0x000b3e8f) bg_sp_fs_highlight_list_pane_cp03

0x8620,	// (0x000ad5be) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8620,	// (0x000ad5be) list_single_sp_fs_schedule_track_pane_g1

0x862c,	// (0x000ad5ca) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x862c,	// (0x000ad5ca) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000b4d58) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000b4d58) list_single_sp_fs_schedule_track_pane_g

0x8638,	// (0x000ad5d6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8638,	// (0x000ad5d6) list_single_sp_fs_schedule_track_pane_t1

0x8652,	// (0x000ad5f0) sp_fs_schedule_track_pane_ParamLimits

0x8652,	// (0x000ad5f0) sp_fs_schedule_track_pane

0xde46,	// (0x000b2de4) sp_fs_schedule_track_pane_g1

0xde4e,	// (0x000b2dec) sp_fs_schedule_track_pane_g2

0xde56,	// (0x000b2df4) sp_fs_schedule_track_pane_g3

0xde5e,	// (0x000b2dfc) sp_fs_schedule_track_pane_g4

0xde66,	// (0x000b2e04) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000b4d5d) sp_fs_schedule_track_pane_g

0xc93b,	// (0x000b18d9) bg_sp_fs_schedule_viewer_highlight_g1

0x97a7,	// (0x000ae745) bg_sp_fs_schedule_viewer_highlight_g2

0xc943,	// (0x000b18e1) bg_sp_fs_schedule_viewer_highlight_g3

0xc94b,	// (0x000b18e9) bg_sp_fs_schedule_viewer_highlight_g4

0xcb95,	// (0x000b1b33) bg_sp_fs_schedule_viewer_highlight_g5

0xc95b,	// (0x000b18f9) bg_sp_fs_schedule_viewer_highlight_g6

0xc963,	// (0x000b1901) bg_sp_fs_schedule_viewer_highlight_g7

0xc96b,	// (0x000b1909) bg_sp_fs_schedule_viewer_highlight_g8

0x9787,	// (0x000ae725) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000b4d68) bg_sp_fs_schedule_viewer_highlight_g

0xe5a6,	// (0x000b3544) bg_main_sp_fs_ribbon_pane

0x8663,	// (0x000ad601) main_sp_fs_ribbon_pane_g1

0xde6e,	// (0x000b2e0c) main_sp_fs_ribbon_pane_t1

0x866c,	// (0x000ad60a) main_sp_fs_ribbon_pane_t2

0xde7d,	// (0x000b2e1b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000b4d7b) main_sp_fs_ribbon_pane_t

0xde8c,	// (0x000b2e2a) main_sp_fs_ribbon_scheduler_pane

0xde94,	// (0x000b2e32) bg_main_sp_fs_ribbon_pane_g1

0xde9d,	// (0x000b2e3b) bg_main_sp_fs_ribbon_pane_g2

0xdea6,	// (0x000b2e44) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000b4d82) bg_main_sp_fs_ribbon_pane_g

0xdeae,	// (0x000b2e4c) main_sp_fs_ribbon_scheduler_pane_g1

0xdeb7,	// (0x000b2e55) main_sp_fs_ribbon_scheduler_pane_g2

0xdec0,	// (0x000b2e5e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000b4d89) main_sp_fs_ribbon_scheduler_pane_g

0xdec9,	// (0x000b2e67) list_cale_mrui_pane

0x867b,	// (0x000ad619) sp_fs_scroll_pane_cp07_ParamLimits

0x867b,	// (0x000ad619) sp_fs_scroll_pane_cp07

0x8697,	// (0x000ad635) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8697,	// (0x000ad635) bg_sp_fs_schedule_viewer_highlight

0xded6,	// (0x000b2e74) list_single_sp_fs_schedule_track_pane_cp01

0xdede,	// (0x000b2e7c) list_sp_fs_schedule_track_pane

0xdee6,	// (0x000b2e84) sp_fs_scroll_pane_cp06_ParamLimits

0xdee6,	// (0x000b2e84) sp_fs_scroll_pane_cp06

0xbe4a,	// (0x000b0de8) bgmain_sp_fs_calendar_pane_g1

0x86a7,	// (0x000ad645) list_single_cale_mrui_pane_ParamLimits

0x86a7,	// (0x000ad645) list_single_cale_mrui_pane

0xdef8,	// (0x000b2e96) list_single_cale_mrui_row_pane_ParamLimits

0xdef8,	// (0x000b2e96) list_single_cale_mrui_row_pane

0xdf05,	// (0x000b2ea3) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdf05,	// (0x000b2ea3) list_single_cale_mrui_row_pane_g1

0xdf4a,	// (0x000b2ee8) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdf4a,	// (0x000b2ee8) list_single_cale_mrui_row_pane_t1

0x86c8,	// (0x000ad666) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86c8,	// (0x000ad666) list_single_cale_mrui_row_pane_t2

0xdf5c,	// (0x000b2efa) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdf5c,	// (0x000b2efa) list_single_cale_mrui_row_pane_t3

0xdf8b,	// (0x000b2f29) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdf8b,	// (0x000b2f29) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000b4d97) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000b4d97) list_single_cale_mrui_row_pane_t

0x8730,	// (0x000ad6ce) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8730,	// (0x000ad6ce) list_single_cmail_header_editor_pane_bg_cp01

0x8756,	// (0x000ad6f4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8756,	// (0x000ad6f4) list_single_cmail_header_editor_pane_bg_cp02

0x8776,	// (0x000ad714) main_radioblah_text_pane_t1_ParamLimits

0x8776,	// (0x000ad714) main_radioblah_text_pane_t1

0xdfba,	// (0x000b2f58) cam6_indi_pane_cp01

0xdfc2,	// (0x000b2f60) cam6_mode_pane_cp01

0xdfca,	// (0x000b2f68) cam6_pano_pane

0xdfd3,	// (0x000b2f71) cam6_zoom_pane_cp01

0xdfdb,	// (0x000b2f79) cam6_pano_image_pane

0xdfe6,	// (0x000b2f84) cam6_pano_pane_g1

0xd655,	// (0x000b25f3) cam6_pano_pane_g2

0xdfef,	// (0x000b2f8d) cam6_pano_pane_g3

0xdff8,	// (0x000b2f96) cam6_pano_pane_g4

0xc46e,	// (0x000b140c) cam6_pano_pane_g5

0xe001,	// (0x000b2f9f) cam6_pano_pane_g6

0xe00b,	// (0x000b2fa9) cam6_pano_pane_g7

0xe013,	// (0x000b2fb1) cam6_pano_pane_g8

0xe01c,	// (0x000b2fba) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000b4da0) cam6_pano_pane_g

0xe5a6,	// (0x000b3544) main_browser_tag_pane

0xdd50,	// (0x000b2cee) grid_navstr_albumart_pane

0xe027,	// (0x000b2fc5) cell_navstr_albumart_pane_ParamLimits

0xe027,	// (0x000b2fc5) cell_navstr_albumart_pane

0xe047,	// (0x000b2fe5) cell_navstr_albumart_pane_g1

0xb83e,	// (0x000b07dc) cell_navstr_albumart_pane_g2

0xb84e,	// (0x000b07ec) cell_navstr_albumart_pane_g3

0xb846,	// (0x000b07e4) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000b4db3) cell_navstr_albumart_pane_g

0x8790,	// (0x000ad72e) bt_list_pane_ParamLimits

0x8790,	// (0x000ad72e) bt_list_pane

0x87a4,	// (0x000ad742) bt_list_pane_t1

0x87b3,	// (0x000ad751) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000b4dbc) bt_list_pane_t

0xe5a6,	// (0x000b3544) main_cale_prevew_pane

0x87c2,	// (0x000ad760) popup_cale_preview_window_ParamLimits

0x87c2,	// (0x000ad760) popup_cale_preview_window

0xeef1,	// (0x000b3e8f) bg_popup_preview_window_pane_cp05_ParamLimits

0xeef1,	// (0x000b3e8f) bg_popup_preview_window_pane_cp05

0xe04f,	// (0x000b2fed) list_cale_preview_pane_ParamLimits

0xe04f,	// (0x000b2fed) list_cale_preview_pane

0x87dd,	// (0x000ad77b) list_double_cale_preview_pane_ParamLimits

0x87dd,	// (0x000ad77b) list_double_cale_preview_pane

0x87ef,	// (0x000ad78d) list_single_cale_preview_pane_ParamLimits

0x87ef,	// (0x000ad78d) list_single_cale_preview_pane

0x8805,	// (0x000ad7a3) list_single_cale_preview_pane_g1

0x880d,	// (0x000ad7ab) list_single_cale_preview_pane_t1_ParamLimits

0x880d,	// (0x000ad7ab) list_single_cale_preview_pane_t1

0x8822,	// (0x000ad7c0) list_double_cale_preview_pane_g1

0x882a,	// (0x000ad7c8) list_double_cale_preview_pane_t1_ParamLimits

0x882a,	// (0x000ad7c8) list_double_cale_preview_pane_t1

0x883f,	// (0x000ad7dd) list_double_cale_preview_pane_t2_ParamLimits

0x883f,	// (0x000ad7dd) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000b4dc1) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000b4dc1) list_double_cale_preview_pane_t

0xe5a6,	// (0x000b3544) main_ezdial_pane

0xeef1,	// (0x000b3e8f) main_sp_fs_email_pane_ParamLimits

0x7db1,	// (0x000acd4f) cmail_ddmenu_btn01_pane_ParamLimits

0x7db1,	// (0x000acd4f) cmail_ddmenu_btn01_pane

0x7dc4,	// (0x000acd62) cmail_ddmenu_btn02_pane_ParamLimits

0x7dc4,	// (0x000acd62) cmail_ddmenu_btn02_pane

0x7de7,	// (0x000acd85) cmail_ddmenu_btn03_pane_ParamLimits

0x7de7,	// (0x000acd85) cmail_ddmenu_btn03_pane

0x7e0d,	// (0x000acdab) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e31,	// (0x000acdcf) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcb64,	// (0x000b1b02) list_cmail_body_pane_ParamLimits

0xdc59,	// (0x000b2bf7) bg_button_pane_cp12

0xdc62,	// (0x000b2c00) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdc62,	// (0x000b2c00) list_single_cmail_header_detail_pane_g3

0xdcab,	// (0x000b2c49) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdcab,	// (0x000b2c49) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000b4d44) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000b4d44) list_single_cmail_header_detail_pane_t

0xddb8,	// (0x000b2d56) phacti_term_pane_t2_ParamLimits

0xddb8,	// (0x000b2d56) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000b4d4e) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000b4d4e) phacti_term_pane_t

0xe05b,	// (0x000b2ff9) aid_size_list_single_double

0x8857,	// (0x000ad7f5) popup_ezdial_listscroll_window

0x8873,	// (0x000ad811) popup_number_entry_window_cp01

0xeea8,	// (0x000b3e46) bg_popup_call_pane_cp09

0xe067,	// (0x000b3005) ezdial_list_pane

0xe06f,	// (0x000b300d) scroll_pane_cp23

0xba2d,	// (0x000b09cb) bg_button_pane_cp028_ParamLimits

0xba2d,	// (0x000b09cb) bg_button_pane_cp028

0x8881,	// (0x000ad81f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8881,	// (0x000ad81f) cmail_ddmenu_btn01_pane_g1

0x888d,	// (0x000ad82b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x888d,	// (0x000ad82b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000b4dc6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000b4dc6) cmail_ddmenu_btn01_pane_g

0xe077,	// (0x000b3015) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe077,	// (0x000b3015) cmail_ddmenu_btn01_pane_t1

0xba2d,	// (0x000b09cb) bg_button_pane_cp029_ParamLimits

0xba2d,	// (0x000b09cb) bg_button_pane_cp029

0x8899,	// (0x000ad837) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8899,	// (0x000ad837) cmail_ddmenu_btn02_pane_g1

0x88b2,	// (0x000ad850) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88b2,	// (0x000ad850) cmail_ddmenu_btn02_pane_t1

0xeef1,	// (0x000b3e8f) bg_button_pane_cp031_ParamLimits

0xeef1,	// (0x000b3e8f) bg_button_pane_cp031

0x8899,	// (0x000ad837) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8899,	// (0x000ad837) cmail_ddmenu_btn03_pane_g1

0x88b2,	// (0x000ad850) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88b2,	// (0x000ad850) cmail_ddmenu_btn03_pane_t1

0x56a5,	// (0x000aa643) cell_dialer2_keypad_pane_t1_ParamLimits

0x56bf,	// (0x000aa65d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x56bf,	// (0x000aa65d) cell_dialer2_keypad_pane_t1_copy1

0x75d9,	// (0x000ac577) ncimui_group_button_pane

0xeef1,	// (0x000b3e8f) main_sp_fs_calendar_pane_ParamLimits

0x8495,	// (0x000ad433) list_single_cmail_header_caption_pane_ParamLimits

0xef4e,	// (0x000b3eec) aid_recal_txt_sm_pane

0xe5a6,	// (0x000b3544) mian_recal_day_pane

0xde34,	// (0x000b2dd2) popup_sp_fs_cale_preview_window_ParamLimits

0xe08c,	// (0x000b302a) list_recal_day_pane

0xe0ce,	// (0x000b306c) list_single_recal_day_pane_ParamLimits

0xe0ce,	// (0x000b306c) list_single_recal_day_pane

0xe0e0,	// (0x000b307e) list_single_recal_day_pane_g1_ParamLimits

0xe0e0,	// (0x000b307e) list_single_recal_day_pane_g1

0xe0ec,	// (0x000b308a) list_single_recal_day_pane_g2_ParamLimits

0xe0ec,	// (0x000b308a) list_single_recal_day_pane_g2

0xe0f8,	// (0x000b3096) list_single_recal_day_pane_g3_ParamLimits

0xe0f8,	// (0x000b3096) list_single_recal_day_pane_g3

0x88d6,	// (0x000ad874) list_single_recal_day_pane_g4_ParamLimits

0x88d6,	// (0x000ad874) list_single_recal_day_pane_g4

0xe104,	// (0x000b30a2) list_single_recal_day_pane_g5_ParamLimits

0xe104,	// (0x000b30a2) list_single_recal_day_pane_g5

0xe110,	// (0x000b30ae) list_single_recal_day_pane_g6_ParamLimits

0xe110,	// (0x000b30ae) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000b4dd5) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000b4dd5) list_single_recal_day_pane_g

0xe124,	// (0x000b30c2) list_single_recal_day_pane_t1

0xe136,	// (0x000b30d4) list_single_recal_day_pane_t2

0x0001,

0x000a,	// (0x000a4fa8) list_single_recal_day_pane_t

0x88ee,	// (0x000ad88c) ncimui_query_button_pane_ParamLimits

0x88ee,	// (0x000ad88c) ncimui_query_button_pane

0x88fe,	// (0x000ad89c) ncimui_query_button_pane_t1_ParamLimits

0x88fe,	// (0x000ad89c) ncimui_query_button_pane_t1

0xe148,	// (0x000b30e6) ncimui_query_button_pane_t2_ParamLimits

0xe148,	// (0x000b30e6) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x000b4de0) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x000b4de0) ncimui_query_button_pane_t

0x8911,	// (0x000ad8af) query_button_pane_ParamLimits

0x8911,	// (0x000ad8af) query_button_pane

0xe5a6,	// (0x000b3544) bg_button_pane_cp0028

0xe15b,	// (0x000b30f9) query_button_pane_t1

0x374d,	// (0x000a86eb) main_tport_pane_ParamLimits

0x8359,	// (0x000ad2f7) bg_popup_window_pane_cp01_ParamLimits

0x8359,	// (0x000ad2f7) bg_popup_window_pane_cp01

0x8374,	// (0x000ad312) heading_pane_cp08_ParamLimits

0x8374,	// (0x000ad312) heading_pane_cp08

0x8387,	// (0x000ad325) heading_pane_cp07_ParamLimits

0x8387,	// (0x000ad325) heading_pane_cp07

0x842e,	// (0x000ad3cc) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000b4d31) cell_tport_appsw_pane_g

0x2ce9,	// (0x000a7c87) input_candi_list_open_g1

0x9998,	// (0x000ae936) list_cale_time_pane_g6_ParamLimits

0x9998,	// (0x000ae936) list_cale_time_pane_g6

0x4516,	// (0x000a94b4) aid_size_touch_calib_1_ParamLimits

0x4516,	// (0x000a94b4) aid_size_touch_calib_1

0x4528,	// (0x000a94c6) aid_size_touch_calib_2_ParamLimits

0x4528,	// (0x000a94c6) aid_size_touch_calib_2

0x4540,	// (0x000a94de) aid_size_touch_calib_3_ParamLimits

0x4540,	// (0x000a94de) aid_size_touch_calib_3

0x455e,	// (0x000a94fc) aid_size_touch_calib_4_ParamLimits

0x455e,	// (0x000a94fc) aid_size_touch_calib_4

0x4576,	// (0x000a9514) main_touch_calib_button_group_pane_ParamLimits

0x4576,	// (0x000a9514) main_touch_calib_button_group_pane

0x458e,	// (0x000a952c) main_touch_calib_pane_g1_ParamLimits

0x45a0,	// (0x000a953e) main_touch_calib_pane_g2_ParamLimits

0x45b2,	// (0x000a9550) main_touch_calib_pane_g3_ParamLimits

0x45c4,	// (0x000a9562) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000b46ef) main_touch_calib_pane_g_ParamLimits

0x45d6,	// (0x000a9574) main_touch_calib_pane_t1_ParamLimits

0x45f0,	// (0x000a958e) main_touch_calib_pane_t2_ParamLimits

0x460a,	// (0x000a95a8) main_touch_calib_pane_t3_ParamLimits

0x461e,	// (0x000a95bc) main_touch_calib_pane_t4_ParamLimits

0x4632,	// (0x000a95d0) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000b46f8) main_touch_calib_pane_t_ParamLimits

0xc20e,	// (0x000b11ac) list_single_fp_cale_pane_g3_ParamLimits

0xc20e,	// (0x000b11ac) list_single_fp_cale_pane_g3

0x94e7,	// (0x000ae485) bg_button_pane_cp012_ParamLimits

0x94e7,	// (0x000ae485) bg_vkb2_func_pane_cp03_ParamLimits

0x661e,	// (0x000ab5bc) cell_vitu2_function_top_pane_g1_ParamLimits

0x94e7,	// (0x000ae485) bg_vkb2_func_pane_cp04_ParamLimits

0x7567,	// (0x000ac505) main_ncimui_button_group_pane_ParamLimits

0x7567,	// (0x000ac505) main_ncimui_button_group_pane

0x75c7,	// (0x000ac565) main_ncimui_pane_t3_ParamLimits

0x75c7,	// (0x000ac565) main_ncimui_pane_t3

0xdd66,	// (0x000b2d04) phacti_button_group_pane

0xe05b,	// (0x000b2ff9) aid_size_list_single_double_ParamLimits

0x8857,	// (0x000ad7f5) popup_ezdial_listscroll_window_ParamLimits

0x8873,	// (0x000ad811) popup_number_entry_window_cp01_ParamLimits

0x8924,	// (0x000ad8c2) phacti_button_pane_ParamLimits

0x8924,	// (0x000ad8c2) phacti_button_pane

0xe5a6,	// (0x000b3544) bg_button_pane_cp14

0xe169,	// (0x000b3107) phacti_button_pane_t1

0x8935,	// (0x000ad8d3) main_touch_calib_button_pane_ParamLimits

0x8935,	// (0x000ad8d3) main_touch_calib_button_pane

0xece3,	// (0x000b3c81) bg_button_pane_cp18_ParamLimits

0xece3,	// (0x000b3c81) bg_button_pane_cp18

0xe177,	// (0x000b3115) main_touch_calib_button_pane_t1_ParamLimits

0xe177,	// (0x000b3115) main_touch_calib_button_pane_t1

0xe18d,	// (0x000b312b) main_touch_calib_button_pane_t2_ParamLimits

0xe18d,	// (0x000b312b) main_touch_calib_button_pane_t2

0x0001,

0x0014,	// (0x000a4fb2) main_touch_calib_button_pane_t_ParamLimits

0x0014,	// (0x000a4fb2) main_touch_calib_button_pane_t

0xe5a6,	// (0x000b3544) cell_ncimui_button_pane

0xe5a6,	// (0x000b3544) bg_button_pane_cp032

0xe1ab,	// (0x000b3149) cell_ncimui_button_pane_t1

0x9ff8,	// (0x000aef96) image3_infobar_pane_ParamLimits

0x9ff8,	// (0x000aef96) image3_infobar_pane

0x79a3,	// (0x000ac941) fs_bigclock_status_pane_ParamLimits

0x79a3,	// (0x000ac941) fs_bigclock_status_pane

0x79b0,	// (0x000ac94e) main_fs_bigclock_clock_pane_ParamLimits

0x79b0,	// (0x000ac94e) main_fs_bigclock_clock_pane

0x79d0,	// (0x000ac96e) main_fs_bigclock_indi_pane_ParamLimits

0x79d0,	// (0x000ac96e) main_fs_bigclock_indi_pane

0x79fa,	// (0x000ac998) main_fs_bigclock_swipe_pane_ParamLimits

0x79fa,	// (0x000ac998) main_fs_bigclock_swipe_pane

0xe5a6,	// (0x000b3544) main_fs_clock_dumped_data

0xd762,	// (0x000b2700) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd762,	// (0x000b2700) list_single_fs_bigclock_indicator_pane_g1

0xd77d,	// (0x000b271b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd77d,	// (0x000b271b) list_single_fs_bigclock_indicator_pane_g2

0xd797,	// (0x000b2735) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd797,	// (0x000b2735) list_single_fs_bigclock_indicator_pane_g3

0xd7b1,	// (0x000b274f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd7b1,	// (0x000b274f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000b4c12) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000b4c12) list_single_fs_bigclock_indicator_pane_g

0xd7dc,	// (0x000b277a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd7dc,	// (0x000b277a) list_single_fs_bigclock_indicator_pane_t1

0xd804,	// (0x000b27a2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd804,	// (0x000b27a2) list_single_fs_bigclock_indicator_pane_t2

0xd82c,	// (0x000b27ca) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd82c,	// (0x000b27ca) list_single_fs_bigclock_indicator_pane_t3

0xd854,	// (0x000b27f2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd854,	// (0x000b27f2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000b4c1d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000b4c1d) list_single_fs_bigclock_indicator_pane_t

0xe1b9,	// (0x000b3157) image3_infobar_fav_pane_ParamLimits

0xe1b9,	// (0x000b3157) image3_infobar_fav_pane

0xe1c9,	// (0x000b3167) image3_infobar_loc_pane_ParamLimits

0xe1c9,	// (0x000b3167) image3_infobar_loc_pane

0xe1dd,	// (0x000b317b) image3_infobar_time_pane_ParamLimits

0xe1dd,	// (0x000b317b) image3_infobar_time_pane

0xbe4a,	// (0x000b0de8) image3_infobar_time_pane_g1

0xe1ed,	// (0x000b318b) image3_infobar_time_pane_t1

0xbe4a,	// (0x000b0de8) image3_infobar_loc_pane_g1

0xe1fb,	// (0x000b3199) image3_infobar_loc_pane_g2

0x0001,

0xfe47,	// (0x000b4de5) image3_infobar_loc_pane_g

0xe203,	// (0x000b31a1) image3_infobar_loc_pane_t1

0xbe4a,	// (0x000b0de8) image3_infobar_fav_pane_g1

0xe211,	// (0x000b31af) image3_infobar_fav_pane_g2

0x0001,

0xfe4c,	// (0x000b4dea) image3_infobar_fav_pane_g

0xe219,	// (0x000b31b7) fs_bigclock_status_battery_pane

0xe222,	// (0x000b31c0) fs_bigclock_status_signal_pane

0xe22b,	// (0x000b31c9) fs_bigclock_status_title_pane

0xe234,	// (0x000b31d2) fs_bigclock_status_signal_pane_g1

0xe23d,	// (0x000b31db) fs_bigclock_status_signal_pane_g2

0x0001,

0x0023,	// (0x000a4fc1) fs_bigclock_status_signal_pane_g

0xe245,	// (0x000b31e3) fs_bigclock_status_battery_pane_g1

0xe24e,	// (0x000b31ec) fs_bigclock_status_battery_pane_g2

0x0001,

0x0028,	// (0x000a4fc6) fs_bigclock_status_battery_pane_g

0xe256,	// (0x000b31f4) fs_bigclock_status_title_pane_t1

0xbe4a,	// (0x000b0de8) main_fs_bigclock_clock_pane_g1

0xe264,	// (0x000b3202) main_fs_bigclock_clock_pane_g2

0xe26d,	// (0x000b320b) main_fs_bigclock_clock_pane_g3

0xe26d,	// (0x000b320b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe51,	// (0x000b4def) main_fs_bigclock_clock_pane_g

0xe275,	// (0x000b3213) main_fs_bigclock_clock_pane_t1

0x894a,	// (0x000ad8e8) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5a,	// (0x000b4df8) main_fs_bigclock_clock_pane_t

0xe283,	// (0x000b3221) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe283,	// (0x000b3221) list_single_fs_bigclock_indicator_pane

0xe294,	// (0x000b3232) list_single_fs_bigclock_pane_ParamLimits

0xe294,	// (0x000b3232) list_single_fs_bigclock_pane

0xe2ba,	// (0x000b3258) main_fs_bigclock_indicator_pane_t1

0xe2c9,	// (0x000b3267) list_single_fs_bigclock_pane_g1

0xe2d1,	// (0x000b326f) list_single_fs_bigclock_pane_t1

0xbe4a,	// (0x000b0de8) main_fs_bigclock_swipe_pane_g1

0xe314,	// (0x000b32b2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe66,	// (0x000b4e04) main_fs_bigclock_swipe_pane_g

0xe31c,	// (0x000b32ba) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe31c,	// (0x000b32ba) main_fs_bigclock_swipe_pane_t1

0x25f9,	// (0x000a7597) call_type_pane_ParamLimits

0xe5a6,	// (0x000b3544) main_btmg_pane

0xdf31,	// (0x000b2ecf) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdf31,	// (0x000b2ecf) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000b4d90) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000b4d90) list_single_cale_mrui_row_pane_g

0xe0b5,	// (0x000b3053) list_recal_vselct_arw_lo_pane

0xe0bd,	// (0x000b305b) list_recal_vselct_arw_up_pane

0xe0c5,	// (0x000b3063) list_recal_vselct_pane

0x899d,	// (0x000ad93b) btmg_button_pane

0x89a7,	// (0x000ad945) main_btmg_pane_g1

0xe5a6,	// (0x000b3544) bg_button_pane_cp044

0xe339,	// (0x000b32d7) btmg_button_pane_t1

0xba19,	// (0x000b09b7) aid_listscroll_gen

0xeef1,	// (0x000b3e8f) main_cntbar_detail_pane

0xdc3b,	// (0x000b2bd9) list_cmail_folder_pane

0xbd46,	// (0x000b0ce4) sp_fs_scroll_pane_cp03_ParamLimits

0x89b1,	// (0x000ad94f) list_single_fs_dyc_pane_cp01_ParamLimits

0x89b1,	// (0x000ad94f) list_single_fs_dyc_pane_cp01

0xe347,	// (0x000b32e5) aid_size_cmail_indent

0xe350,	// (0x000b32ee) list_single_dyc_row_pane_cp01

0x89f8,	// (0x000ad996) cntbar_detail_list_pane_ParamLimits

0x89f8,	// (0x000ad996) cntbar_detail_list_pane

0x8a44,	// (0x000ad9e2) main_cntbar_detail_cont_pane_ParamLimits

0x8a44,	// (0x000ad9e2) main_cntbar_detail_cont_pane

0xbd46,	// (0x000b0ce4) scroll_pane_cp032_ParamLimits

0xbd46,	// (0x000b0ce4) scroll_pane_cp032

0x8a58,	// (0x000ad9f6) cntbar_detail_list_event_pane_ParamLimits

0x8a58,	// (0x000ad9f6) cntbar_detail_list_event_pane

0x8a08,	// (0x000ad9a6) cntbar_detail_list_shct_pane

0x97f5,	// (0x000ae793) aid_list_gen

0xe359,	// (0x000b32f7) aid_scroll

0xe362,	// (0x000b3300) aid_size_touch_scroll_bar

0x6d05,	// (0x000abca3) aid_list_double

0x8a68,	// (0x000ada06) aid_list_single

0x6d05,	// (0x000abca3) aid_list_single_lg

0x8a71,	// (0x000ada0f) aid_list_z_g_a_sm

0x8a79,	// (0x000ada17) aid_list_z_g_d

0x8a81,	// (0x000ada1f) aid_txt_z_prm

0x8a8f,	// (0x000ada2d) aid_txt_z_prm_cp01

0x8a9d,	// (0x000ada3b) aid_txt_z_sec

0x8aab,	// (0x000ada49) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8aab,	// (0x000ada49) main_cntbar_detail_cont_pane_g1

0x8abf,	// (0x000ada5d) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8abf,	// (0x000ada5d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6b,	// (0x000b4e09) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6b,	// (0x000b4e09) main_cntbar_detail_cont_pane_g

0xe36b,	// (0x000b3309) main_cntbar_detail_cont_pane_t1

0xe379,	// (0x000b3317) main_cntbar_detail_cont_pane_t2

0xe387,	// (0x000b3325) main_cntbar_detail_cont_pane_t3

0x0002,

0x0051,	// (0x000a4fef) main_cntbar_detail_cont_pane_t

0x8acf,	// (0x000ada6d) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8acf,	// (0x000ada6d) cell_cntbar_detail_list_shct_pane

0xe395,	// (0x000b3333) cntbar_detail_list_shct_pane_g1

0xe39e,	// (0x000b333c) cntbar_detail_list_shct_pane_g2

0x0001,

0x0058,	// (0x000a4ff6) cntbar_detail_list_shct_pane_g

0x8ae3,	// (0x000ada81) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ae3,	// (0x000ada81) cntbar_detail_list_event_pane_g1

0x8aef,	// (0x000ada8d) cntbar_detail_list_event_pane_g2_ParamLimits

0x8aef,	// (0x000ada8d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe70,	// (0x000b4e0e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe70,	// (0x000b4e0e) cntbar_detail_list_event_pane_g

0x8b5b,	// (0x000adaf9) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b5b,	// (0x000adaf9) cntbar_detail_list_event_pane_t1

0x8b70,	// (0x000adb0e) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b70,	// (0x000adb0e) cntbar_detail_list_event_pane_t2

0x0002,

0xfe7d,	// (0x000b4e1b) cntbar_detail_list_event_pane_t_ParamLimits

0xfe7d,	// (0x000b4e1b) cntbar_detail_list_event_pane_t

0xbe4a,	// (0x000b0de8) cell_cntbar_detail_list_shct_pane_g1

0xa5db,	// (0x000af579) navi_pane_mv_g3

0xeef1,	// (0x000b3e8f) main_cntbar_detail_pane_ParamLimits

0xe5a6,	// (0x000b3544) main_notif_wgt_pane

0x9e0e,	// (0x000aedac) aid_tch_main_mp4_pane_g4

0x9ff0,	// (0x000aef8e) popup_slider_window_cp02

0xe0ab,	// (0x000b3049) list_recal_day_event_pane

0x89c6,	// (0x000ad964) cntbar_detail_btn_pane_ParamLimits

0x89c6,	// (0x000ad964) cntbar_detail_btn_pane

0x89df,	// (0x000ad97d) cntbar_detail_btn_pane_cp01_ParamLimits

0x89df,	// (0x000ad97d) cntbar_detail_btn_pane_cp01

0x8a08,	// (0x000ad9a6) cntbar_detail_list_shct_pane_ParamLimits

0x8a18,	// (0x000ad9b6) cntbar_detail_pane_g1_ParamLimits

0x8a18,	// (0x000ad9b6) cntbar_detail_pane_g1

0x8a28,	// (0x000ad9c6) cntbar_detail_pane_t1_ParamLimits

0x8a28,	// (0x000ad9c6) cntbar_detail_pane_t1

0x8afb,	// (0x000ada99) cntbar_detail_list_event_pane_g3_ParamLimits

0x8afb,	// (0x000ada99) cntbar_detail_list_event_pane_g3

0x8b13,	// (0x000adab1) cntbar_detail_list_event_pane_g4_ParamLimits

0x8b13,	// (0x000adab1) cntbar_detail_list_event_pane_g4

0x8b2b,	// (0x000adac9) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b2b,	// (0x000adac9) cntbar_detail_list_event_pane_g5

0x8b43,	// (0x000adae1) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b43,	// (0x000adae1) cntbar_detail_list_event_pane_g6

0x8b85,	// (0x000adb23) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b85,	// (0x000adb23) cntbar_detail_list_event_pane_t3

0x8b97,	// (0x000adb35) popup_notif_wgt_window_ParamLimits

0x8b97,	// (0x000adb35) popup_notif_wgt_window

0x8bb0,	// (0x000adb4e) popup_submenu_window_cp01_ParamLimits

0x8bb0,	// (0x000adb4e) popup_submenu_window_cp01

0xeea8,	// (0x000b3e46) bg_popup_window_pane_cp10

0xe3a7,	// (0x000b3345) listscroll_notif_wgt_pane

0xe3b9,	// (0x000b3357) list_notif_wgt_window

0xe3c2,	// (0x000b3360) scroll_pane_cp033

0x8bc6,	// (0x000adb64) list_notif_wgt_row_pane_ParamLimits

0x8bc6,	// (0x000adb64) list_notif_wgt_row_pane

0xe3cb,	// (0x000b3369) aid_size_list_notif_wgt_del

0xe3d8,	// (0x000b3376) list_notif_wgt_row_pane_g1

0xe3e4,	// (0x000b3382) list_notif_wgt_row_pane_g2

0xe3f8,	// (0x000b3396) list_notif_wgt_row_pane_g3

0x0002,

0x0071,	// (0x000a500f) list_notif_wgt_row_pane_g

0xe405,	// (0x000b33a3) list_notif_wgt_row_pane_t1

0xe41b,	// (0x000b33b9) list_notif_wgt_row_pane_t2

0xe42d,	// (0x000b33cb) list_notif_wgt_row_pane_t3

0x0002,

0x0078,	// (0x000a5016) list_notif_wgt_row_pane_t

0xcbaf,	// (0x000b1b4d) list_recal_day_event_pane_g1

0xe43f,	// (0x000b33dd) list_recal_day_event_pane_t1

0xe5a6,	// (0x000b3544) bg_button_pane_cp045

0x8bd6,	// (0x000adb74) cntbar_detail_btn_pane_t1

0xba2d,	// (0x000b09cb) main_callh_pane_ParamLimits

0xba2d,	// (0x000b09cb) main_callh_pane

0xe5a6,	// (0x000b3544) main_coverflow0_pane

0xe5a6,	// (0x000b3544) main_wgtman_pane

0x7a12,	// (0x000ac9b0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a12,	// (0x000ac9b0) main_fs_bigclock_unlock_btn_pane

0x8426,	// (0x000ad3c4) bg_button_pane_cp16

0x8436,	// (0x000ad3d4) cell_tport_appsw_pane_g3

0x8be4,	// (0x000adb82) cf0_flow_pane_ParamLimits

0x8be4,	// (0x000adb82) cf0_flow_pane

0xe44e,	// (0x000b33ec) listscroll_cf0_pane

0xe459,	// (0x000b33f7) main_cf0_pane_g1

0x8bf9,	// (0x000adb97) main_cf0_pane_t1_ParamLimits

0x8bf9,	// (0x000adb97) main_cf0_pane_t1

0x8c10,	// (0x000adbae) main_cf0_pane_t2_ParamLimits

0x8c10,	// (0x000adbae) main_cf0_pane_t2

0x0001,

0xfe84,	// (0x000b4e22) main_cf0_pane_t_ParamLimits

0xfe84,	// (0x000b4e22) main_cf0_pane_t

0xe46b,	// (0x000b3409) scroll_pane_cp11

0x8c27,	// (0x000adbc5) cf0_flow_pane_g1

0x8c2f,	// (0x000adbcd) cf0_flow_pane_g2

0x0001,

0xfe89,	// (0x000b4e27) cf0_flow_pane_g

0x8c37,	// (0x000adbd5) cf0_flow_pane_t1

0xe5a6,	// (0x000b3544) main_call6_pane

0xe5a6,	// (0x000b3544) main_calllock_pane

0x8c45,	// (0x000adbe3) call6_btn_grp_pane_ParamLimits

0x8c45,	// (0x000adbe3) call6_btn_grp_pane

0x8c5f,	// (0x000adbfd) call6_pane_g1_ParamLimits

0x8c5f,	// (0x000adbfd) call6_pane_g1

0x8c74,	// (0x000adc12) popup_call6_1st_window_ParamLimits

0x8c74,	// (0x000adc12) popup_call6_1st_window

0x8c85,	// (0x000adc23) popup_call6_2nd_window_ParamLimits

0x8c85,	// (0x000adc23) popup_call6_2nd_window

0x8c96,	// (0x000adc34) cell_call6_btn_pane_ParamLimits

0x8c96,	// (0x000adc34) cell_call6_btn_pane

0xeea8,	// (0x000b3e46) bg_popup_call2_in_pane_cp03

0xe476,	// (0x000b3414) popup_call6_1st_window_g1

0xe47e,	// (0x000b341c) popup_call6_1st_window_g2

0xe486,	// (0x000b3424) popup_call6_1st_window_g3

0x0002,

0x008e,	// (0x000a502c) popup_call6_1st_window_g

0xe48e,	// (0x000b342c) popup_call6_1st_window_t1

0xe49d,	// (0x000b343b) popup_call6_1st_window_t2

0xe4ad,	// (0x000b344b) popup_call6_1st_window_t3

0x0002,

0x0095,	// (0x000a5033) popup_call6_1st_window_t

0xeea8,	// (0x000b3e46) bg_popup_call2_in_pane_cp04

0xe476,	// (0x000b3414) popup_call6_2nd_window_g1

0xe47e,	// (0x000b341c) popup_call6_2nd_window_g2

0xe486,	// (0x000b3424) popup_call6_2nd_window_g3

0x0002,

0x008e,	// (0x000a502c) popup_call6_2nd_window_g

0xe48e,	// (0x000b342c) popup_call6_2nd_window_t1

0xe5a6,	// (0x000b3544) bg_button_pane_cp15

0xe4bd,	// (0x000b345b) cell_call6_btn_pane_g1

0xe4c6,	// (0x000b3464) cell_call6_btn_pane_t1

0x8caa,	// (0x000adc48) listscroll_wgtman_pane_ParamLimits

0x8caa,	// (0x000adc48) listscroll_wgtman_pane

0x8ccb,	// (0x000adc69) wgtman_btn_pane_ParamLimits

0x8ccb,	// (0x000adc69) wgtman_btn_pane

0xa3e2,	// (0x000af380) aid_scroll_copy1

0xe4d5,	// (0x000b3473) list_wgtman_pane

0x8d0e,	// (0x000adcac) wgtman_btn_pane_g1_ParamLimits

0x8d0e,	// (0x000adcac) wgtman_btn_pane_g1

0x8d3a,	// (0x000adcd8) wgtman_btn_pane_t1_ParamLimits

0x8d3a,	// (0x000adcd8) wgtman_btn_pane_t1

0xe4df,	// (0x000b347d) wgtman_btn_pane_t2_ParamLimits

0xe4df,	// (0x000b347d) wgtman_btn_pane_t2

0x0001,

0xfe8e,	// (0x000b4e2c) wgtman_btn_pane_t_ParamLimits

0xfe8e,	// (0x000b4e2c) wgtman_btn_pane_t

0x8d77,	// (0x000add15) listrow_wgtman_pane_ParamLimits

0x8d77,	// (0x000add15) listrow_wgtman_pane

0x8d89,	// (0x000add27) listrow_wgtman_pane_g1

0x8d96,	// (0x000add34) listrow_wgtman_pane_g2

0x0001,

0xfe93,	// (0x000b4e31) listrow_wgtman_pane_g

0x8db4,	// (0x000add52) listrow_wgtman_pane_t1

0x8dcc,	// (0x000add6a) listrow_wgtman_pane_t2

0x0001,

0xfe98,	// (0x000b4e36) listrow_wgtman_pane_t

0x8df2,	// (0x000add90) wait_bar_pane_cp09

0xe4f6,	// (0x000b3494) main_calllock_btn_pane

0xe500,	// (0x000b349e) main_calllock_pane_g1

0xe5a6,	// (0x000b3544) bg_button_pane_cp17

0xe50c,	// (0x000b34aa) main_calllock_btn_pane_g1

0xe515,	// (0x000b34b3) main_calllock_btn_pane_t1

0xe5a6,	// (0x000b3544) main_dialer3_pane

0xe5a6,	// (0x000b3544) main_fmrd2_pane

0xbe4a,	// (0x000b0de8) main_fs_bigclock_unlock_btn_pane_g1

0xe52c,	// (0x000b34ca) main_fs_bigclock_unlock_btn_pane_t1

0x8e04,	// (0x000adda2) area_fmrd2_info_pane_ParamLimits

0x8e04,	// (0x000adda2) area_fmrd2_info_pane

0x8e15,	// (0x000addb3) area_fmrd2_visual_pane_ParamLimits

0x8e15,	// (0x000addb3) area_fmrd2_visual_pane

0x8e23,	// (0x000addc1) fmrd2_indi_pane_ParamLimits

0x8e23,	// (0x000addc1) fmrd2_indi_pane

0x8e30,	// (0x000addce) area_fmrd2_visual_pane_g1

0x8e38,	// (0x000addd6) area_fmrd2_visual_pane_t1

0x8e48,	// (0x000adde6) area_fmrd2_visual_pane_t2

0x8e58,	// (0x000addf6) area_fmrd2_visual_pane_t3

0x0002,

0xfea2,	// (0x000b4e40) area_fmrd2_visual_pane_t

0x8e68,	// (0x000ade06) area_fmrd2_info_pane_g1

0x8e70,	// (0x000ade0e) area_fmrd2_info_pane_t1

0x8e80,	// (0x000ade1e) area_fmrd2_info_pane_t2

0x8e90,	// (0x000ade2e) area_fmrd2_info_pane_t3

0x8ea0,	// (0x000ade3e) area_fmrd2_info_pane_t4

0x0003,

0xfea9,	// (0x000b4e47) area_fmrd2_info_pane_t

0x8eae,	// (0x000ade4c) fmrd2_indi_pane_t1

0x8ebe,	// (0x000ade5c) fmrd2_indi_pane_t2

0x8ece,	// (0x000ade6c) fmrd2_indi_pane_t3

0x0002,

0xfeb2,	// (0x000b4e50) fmrd2_indi_pane_t

0xd7c0,	// (0x000b275e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd7c0,	// (0x000b275e) list_single_fs_bigclock_indicator_pane_g5

0xd870,	// (0x000b280e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd870,	// (0x000b280e) list_single_fs_bigclock_indicator_pane_t5

0x85ac,	// (0x000ad54a) aid_cell_bcale_month_pane_ParamLimits

0x85ac,	// (0x000ad54a) aid_cell_bcale_month_pane

0x85ca,	// (0x000ad568) bcale_month_pane_ParamLimits

0x85ca,	// (0x000ad568) bcale_month_pane

0x85ee,	// (0x000ad58c) bcale_preview_pane_ParamLimits

0x85ee,	// (0x000ad58c) bcale_preview_pane

0xe2d1,	// (0x000b326f) list_single_fs_bigclock_pane_t1_ParamLimits

0xe2f0,	// (0x000b328e) list_single_fs_bigclock_pane_t2_ParamLimits

0xe2f0,	// (0x000b328e) list_single_fs_bigclock_pane_t2

0x0001,

0x0042,	// (0x000a4fe0) list_single_fs_bigclock_pane_t_ParamLimits

0x0042,	// (0x000a4fe0) list_single_fs_bigclock_pane_t

0xe524,	// (0x000b34c2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe9d,	// (0x000b4e3b) main_fs_bigclock_unlock_btn_pane_g

0x8ede,	// (0x000ade7c) aid_dia3_key_size_ParamLimits

0x8ede,	// (0x000ade7c) aid_dia3_key_size

0x8eed,	// (0x000ade8b) aid_dia3_listrow_size_ParamLimits

0x8eed,	// (0x000ade8b) aid_dia3_listrow_size

0x8f02,	// (0x000adea0) dia3_keypad_fun_pane_ParamLimits

0x8f02,	// (0x000adea0) dia3_keypad_fun_pane

0x8f1e,	// (0x000adebc) dia3_keypad_num_pane_ParamLimits

0x8f1e,	// (0x000adebc) dia3_keypad_num_pane

0x8f39,	// (0x000aded7) dia3_listscroll_pane_ParamLimits

0x8f39,	// (0x000aded7) dia3_listscroll_pane

0x8f4c,	// (0x000adeea) dia3_numentry_pane_ParamLimits

0x8f4c,	// (0x000adeea) dia3_numentry_pane

0xe53a,	// (0x000b34d8) dia3_list_pane

0xe545,	// (0x000b34e3) scroll_pane_cp12

0xe5a6,	// (0x000b3544) bg_dia3_numentry_pane

0x8f60,	// (0x000adefe) dia3_numentry_pane_t1

0x8f6f,	// (0x000adf0d) cell_dia3_key_num_pane

0x8f77,	// (0x000adf15) cell_dia3_key0_fun_pane_ParamLimits

0x8f77,	// (0x000adf15) cell_dia3_key0_fun_pane

0x8f8b,	// (0x000adf29) cell_dia3_key1_fun_pane_ParamLimits

0x8f8b,	// (0x000adf29) cell_dia3_key1_fun_pane

0x8fa3,	// (0x000adf41) dia3_listrow_pane

0xd4cf,	// (0x000b246d) bg_dia3_numentry_pane_g1

0xe5a6,	// (0x000b3544) bg_button_pane_cp21

0xe550,	// (0x000b34ee) cell_dia3_key_num_pane_t1

0xe55e,	// (0x000b34fc) cell_dia3_key_num_pane_t2

0xe56d,	// (0x000b350b) cell_dia3_key_num_pane_t3

0xe57c,	// (0x000b351a) cell_dia3_key_num_pane_t4

0x0003,

0x00c7,	// (0x000a5065) cell_dia3_key_num_pane_t

0xe5a6,	// (0x000b3544) bg_button_pane_cp19

0x8fb5,	// (0x000adf53) cell_dia3_key0_fun_pane_g1

0xe5a6,	// (0x000b3544) bg_button_pane_cp20

0x8fbd,	// (0x000adf5b) cell_dia3_key1_fun_pane_g1

0x8fc5,	// (0x000adf63) area_left_week_number_pane

0x8fd1,	// (0x000adf6f) area_top_day_name_pane

0x8fe4,	// (0x000adf82) frame_month_view_pane

0xe58b,	// (0x000b3529) grid_month_view_pane

0x8ff7,	// (0x000adf95) cell_top_day_name_pane_ParamLimits

0x8ff7,	// (0x000adf95) cell_top_day_name_pane

0x9024,	// (0x000adfc2) cell_area_left_week_number_pane_ParamLimits

0x9024,	// (0x000adfc2) cell_area_left_week_number_pane

0x9038,	// (0x000adfd6) cell_month_view_pane_ParamLimits

0x9038,	// (0x000adfd6) cell_month_view_pane

0xe599,	// (0x000b3537) frm_month_g1

0x9065,	// (0x000ae003) frm_month_g2

0x9078,	// (0x000ae016) frm_month_g3

0x908b,	// (0x000ae029) frm_month_g4

0x909e,	// (0x000ae03c) frm_month_g5

0x90b1,	// (0x000ae04f) frm_month_g6

0x90c4,	// (0x000ae062) frm_month_g7

0xef57,	// (0x000b3ef5) frm_month_g8

0x90d7,	// (0x000ae075) frm_month_g9

0x90e7,	// (0x000ae085) frm_month_g10

0x90f7,	// (0x000ae095) frm_month_g11

0x9107,	// (0x000ae0a5) frm_month_g12

0x9119,	// (0x000ae0b7) frm_month_g13

0x912b,	// (0x000ae0c9) frm_month_g14

0x913f,	// (0x000ae0dd) frm_month_g15

0x9153,	// (0x000ae0f1) frm_month_g16

0x000f,

0xfeb9,	// (0x000b4e57) frm_month_g

0xef64,	// (0x000b3f02) cell_top_day_name_pane_t1

0x9167,	// (0x000ae105) cell_area_left_week_number_pane_g1

0x9173,	// (0x000ae111) cell_area_left_week_number_pane_t1

0xc0b6,	// (0x000b1054) cell_month_view_pane_g1

0x9186,	// (0x000ae124) cell_month_view_pane_t1

0xe5a6,	// (0x000b3544) main_fps_pane

0xda60,	// (0x000b29fe) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xda60,	// (0x000b29fe) cmail_ddmenu_btn02_pane_cp1

0xda7c,	// (0x000b2a1a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xda7c,	// (0x000b2a1a) cmail_ddmenu_btn02_pane_cp2

0x88a5,	// (0x000ad843) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88a5,	// (0x000ad843) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000b4dcb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000b4dcb) cmail_ddmenu_btn02_pane_g

0x88c4,	// (0x000ad862) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88c4,	// (0x000ad862) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000b4dd0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000b4dd0) cmail_ddmenu_btn02_pane_t

0x9199,	// (0x000ae137) fps_text_pane_ParamLimits

0x9199,	// (0x000ae137) fps_text_pane

0x91b0,	// (0x000ae14e) main_fps_pane_g1_ParamLimits

0x91b0,	// (0x000ae14e) main_fps_pane_g1

0x91ca,	// (0x000ae168) wait_bar_pane_cp010_ParamLimits

0x91ca,	// (0x000ae168) wait_bar_pane_cp010

0x91db,	// (0x000ae179) fps_text_pane_t1_ParamLimits

0x91db,	// (0x000ae179) fps_text_pane_t1

0xc8bd,	// (0x000b185b) cam4_image_uncrop_pane_g1

0xc8c6,	// (0x000b1864) cam4_image_uncrop_pane_g2

0x5b4b,	// (0x000aaae9) cam4_image_uncrop_pane_g3

0x5b54,	// (0x000aaaf2) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000b488c) cam4_image_uncrop_pane_g

0x8fa3,	// (0x000adf41) dia3_listrow_pane_ParamLimits

0xe5a6,	// (0x000b3544) main_phob2_pane

0x83f7,	// (0x000ad395) cell_tport_appsw_pane_cp02_ParamLimits

0x83f7,	// (0x000ad395) cell_tport_appsw_pane_cp02

0x840b,	// (0x000ad3a9) cell_tport_appsw_pane_cp03_ParamLimits

0x840b,	// (0x000ad3a9) cell_tport_appsw_pane_cp03

0xe5a6,	// (0x000b3544) phob2_contact_card_pane

0xe5a6,	// (0x000b3544) phob2_listscroll_pane

0xef77,	// (0x000b3f15) phob2_list_pane

0xef7f,	// (0x000b3f1d) scroll_pane_cp034

0x91f3,	// (0x000ae191) phob2_cc_data_pane_ParamLimits

0x91f3,	// (0x000ae191) phob2_cc_data_pane

0x9212,	// (0x000ae1b0) phob2_cc_listscroll_pane_ParamLimits

0x9212,	// (0x000ae1b0) phob2_cc_listscroll_pane

0x8d77,	// (0x000add15) list_double_large_graphic_phob2_pane_ParamLimits

0x8d77,	// (0x000add15) list_double_large_graphic_phob2_pane

0x9230,	// (0x000ae1ce) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9230,	// (0x000ae1ce) list_double_large_graphic_phob2_pane_g1

0x9246,	// (0x000ae1e4) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9246,	// (0x000ae1e4) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfeda,	// (0x000b4e78) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfeda,	// (0x000b4e78) list_double_large_graphic_phob2_pane_g

0x9252,	// (0x000ae1f0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9252,	// (0x000ae1f0) list_double_large_graphic_phob2_pane_t1

0x9267,	// (0x000ae205) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9267,	// (0x000ae205) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfedf,	// (0x000b4e7d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfedf,	// (0x000b4e7d) list_double_large_graphic_phob2_pane_t

0xe5a6,	// (0x000b3544) list_highlight_pane_cp024

0x9279,	// (0x000ae217) phob2_cc_button_pane

0x9281,	// (0x000ae21f) phob2_cc_data_pane_g1_ParamLimits

0x9281,	// (0x000ae21f) phob2_cc_data_pane_g1

0x9296,	// (0x000ae234) phob2_cc_data_pane_g2_ParamLimits

0x9296,	// (0x000ae234) phob2_cc_data_pane_g2

0x0001,

0xfee4,	// (0x000b4e82) phob2_cc_data_pane_g_ParamLimits

0xfee4,	// (0x000b4e82) phob2_cc_data_pane_g

0x92a6,	// (0x000ae244) phob2_cc_data_pane_t1_ParamLimits

0x92a6,	// (0x000ae244) phob2_cc_data_pane_t1

0x92be,	// (0x000ae25c) phob2_cc_data_pane_t2_ParamLimits

0x92be,	// (0x000ae25c) phob2_cc_data_pane_t2

0x92d6,	// (0x000ae274) phob2_cc_data_pane_t3_ParamLimits

0x92d6,	// (0x000ae274) phob2_cc_data_pane_t3

0x0002,

0xfee9,	// (0x000b4e87) phob2_cc_data_pane_t_ParamLimits

0xfee9,	// (0x000b4e87) phob2_cc_data_pane_t

0xef87,	// (0x000b3f25) phob2_cc_list_pane_ParamLimits

0xef87,	// (0x000b3f25) phob2_cc_list_pane

0xcc46,	// (0x000b1be4) scroll_pane_cp035_ParamLimits

0xcc46,	// (0x000b1be4) scroll_pane_cp035

0xeef1,	// (0x000b3e8f) bg_button_pane_cp033

0xef93,	// (0x000b3f31) phob2_cc_button_pane_g1

0xef9f,	// (0x000b3f3d) phob2_cc_button_pane_t1

0xefb4,	// (0x000b3f52) phob2_cc_button_pane_t2

0x0001,

0xfef0,	// (0x000b4e8e) phob2_cc_button_pane_t

0x92ee,	// (0x000ae28c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92ee,	// (0x000ae28c) list_double_large_graphic_phob2_cc_pane

0x9300,	// (0x000ae29e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9300,	// (0x000ae29e) list_double_large_graphic_phob2_cc_pane_g1

0x930c,	// (0x000ae2aa) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x930c,	// (0x000ae2aa) list_double_large_graphic_phob2_cc_pane_g2

0x9318,	// (0x000ae2b6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9318,	// (0x000ae2b6) list_double_large_graphic_phob2_cc_pane_g3

0x9324,	// (0x000ae2c2) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9324,	// (0x000ae2c2) list_double_large_graphic_phob2_cc_pane_g4

0x9330,	// (0x000ae2ce) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9330,	// (0x000ae2ce) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfef5,	// (0x000b4e93) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfef5,	// (0x000b4e93) list_double_large_graphic_phob2_cc_pane_g

0x933c,	// (0x000ae2da) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x933c,	// (0x000ae2da) list_double_large_graphic_phob2_cc_pane_t1

0x9365,	// (0x000ae303) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9365,	// (0x000ae303) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff00,	// (0x000b4e9e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff00,	// (0x000b4e9e) list_double_large_graphic_phob2_cc_pane_t

0xefc6,	// (0x000b3f64) list_highlight_pane_cp025_ParamLimits

0xefc6,	// (0x000b3f64) list_highlight_pane_cp025

0xeef1,	// (0x000b3e8f) bg_button_pane_cp033_ParamLimits

0xef93,	// (0x000b3f31) phob2_cc_button_pane_g1_ParamLimits

0xef9f,	// (0x000b3f3d) phob2_cc_button_pane_t1_ParamLimits

0xefb4,	// (0x000b3f52) phob2_cc_button_pane_t2_ParamLimits

0xfef0,	// (0x000b4e8e) phob2_cc_button_pane_t_ParamLimits

0x0480,	// (0x000a541e) popup_wgtman_window

0xca55,	// (0x000b19f3) scroll_pane_cp038

0x8cf0,	// (0x000adc8e) wgtman_btn_pane_cp_01_ParamLimits

0x8cf0,	// (0x000adc8e) wgtman_btn_pane_cp_01

0xefd4,	// (0x000b3f72) wgtman_content_pane

0xefdd,	// (0x000b3f7b) wgtman_heading_pane

0xe5a6,	// (0x000b3544) bg_heading_pane_cp02

0xefe6,	// (0x000b3f84) wgtman_heading_pane_g1

0xefee,	// (0x000b3f8c) wgtman_heading_pane_t1

0xeffc,	// (0x000b3f9a) scroll_pane_cp036

0xf004,	// (0x000b3fa2) wgtman_list_pane

0xf00c,	// (0x000b3faa) wgtman_list_pane_t1_ParamLimits

0xf00c,	// (0x000b3faa) wgtman_list_pane_t1

0xa04a,	// (0x000aefe8) cam4_grid_pane

0x67fe,	// (0x000ab79c) bg_button_pane_cp015_ParamLimits

0x6810,	// (0x000ab7ae) bg_button_pane_cp016_ParamLimits

0x6823,	// (0x000ab7c1) bg_button_pane_cp017_ParamLimits

0x687b,	// (0x000ab819) popup_vitu2_query_window_g3_ParamLimits

0x687b,	// (0x000ab819) popup_vitu2_query_window_g3

0x6938,	// (0x000ab8d6) popup_vitu2_query_window_t6_ParamLimits

0x6938,	// (0x000ab8d6) popup_vitu2_query_window_t6

0x6963,	// (0x000ab901) popup_vitu2_query_window_t7_ParamLimits

0x6963,	// (0x000ab901) popup_vitu2_query_window_t7

0xc8bd,	// (0x000b185b) cam4_grid_pane_g1

0xc8c6,	// (0x000b1864) cam4_grid_pane_g2

0xf026,	// (0x000b3fc4) cam4_grid_pane_g3

0xf02f,	// (0x000b3fcd) cam4_grid_pane_g4

0x0003,

0xff05,	// (0x000b4ea3) cam4_grid_pane_g

0x1481,	// (0x000a641f) aid_placing_vt_slider_lsc_ParamLimits

0x178c,	// (0x000a672a) vidtel_button_pane_ParamLimits

0x178c,	// (0x000a672a) vidtel_button_pane

0xe5a6,	// (0x000b3544) bg_button_pane_cp034

0x938e,	// (0x000ae32c) vidtel_button_pane_g1

0xf03a,	// (0x000b3fd8) vidtel_button_pane_t1

0xcb8d,	// (0x000b1b2b) aid_size_vtel_slider_touch

0xcc46,	// (0x000b1be4) scroll_pane_cp039

0xd50d,	// (0x000b24ab) ncim_query_button_pane_cp01_ParamLimits

0xd52c,	// (0x000b24ca) ncimui_query_pane_g1_ParamLimits

0xeef1,	// (0x000b3e8f) input_focus_pane_cp012_ParamLimits

0xd551,	// (0x000b24ef) ncim_query_entry_pane_t1_ParamLimits

0xcc46,	// (0x000b1be4) scroll_pane_cp039_ParamLimits

0xa4c6,	// (0x000af464) navi_pane_bcale_mc_g1

0xa4ce,	// (0x000af46c) navi_pane_bcale_mc_t1

0xdac5,	// (0x000b2a63) main_sp_fs_email_pane_g1

0xdad1,	// (0x000b2a6f) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000b4c83) main_sp_fs_email_pane_g

0xdf3d,	// (0x000b2edb) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdf3d,	// (0x000b2edb) list_single_cale_mrui_row_pane_g3

0x88e4,	// (0x000ad882) list_single_recal_day_pane_g5_event_pane

0xe11c,	// (0x000b30ba) list_single_recal_day_pane_g7

0xf050,	// (0x000b3fee) list_recal_day_event_pane_cp01

0xf059,	// (0x000b3ff7) list_recal_vselct_arw_lo_pane_cp01

0xf061,	// (0x000b3fff) list_recal_vselct_arw_up_pane_cp01

0xf069,	// (0x000b4007) list_recal_vselct_pane_cp01

0xcbaf,	// (0x000b1b4d) list_recal_day_event_pane_cp01_g1

0xf073,	// (0x000b4011) list_recal_day_event_pane_cp01_t1

0xe124,	// (0x000b30c2) list_single_recal_day_pane_t1_ParamLimits

0xe136,	// (0x000b30d4) list_single_recal_day_pane_t2_ParamLimits

0x000a,	// (0x000a4fa8) list_single_recal_day_pane_t_ParamLimits

0xec1e,	// (0x000b3bbc) bg_notes_pane_ParamLimits

0xecc1,	// (0x000b3c5f) list_notes_pane_ParamLimits

0x07c9,	// (0x000a5767) scroll_pane_cp06_ParamLimits

0xece3,	// (0x000b3c81) main_notes_pane_ParamLimits

0xe5a6,	// (0x000b3544) main_welc_pane

0x9396,	// (0x000ae334) main_welc_body_pane_ParamLimits

0x9396,	// (0x000ae334) main_welc_body_pane

0x93b4,	// (0x000ae352) main_welc_opti_pane_ParamLimits

0x93b4,	// (0x000ae352) main_welc_opti_pane

0x93f9,	// (0x000ae397) main_welc_pane_t1_ParamLimits

0x93f9,	// (0x000ae397) main_welc_pane_t1

0x9417,	// (0x000ae3b5) main_welc_body_row_pane_ParamLimits

0x9417,	// (0x000ae3b5) main_welc_body_row_pane

0xf081,	// (0x000b401f) main_welc_opti_row_pane_ParamLimits

0xf081,	// (0x000b401f) main_welc_opti_row_pane

0xf08f,	// (0x000b402d) main_welc_opti_row_pane_g1

0x942b,	// (0x000ae3c9) main_welc_opti_row_pane_t1

0xf097,	// (0x000b4035) main_welc_body_row_pane_t1

0xe3b1,	// (0x000b334f) popup_notif_wgt_heading_pane

0xe3cb,	// (0x000b3369) aid_size_list_notif_wgt_del_ParamLimits

0xe3d8,	// (0x000b3376) list_notif_wgt_row_pane_g1_ParamLimits

0xe3e4,	// (0x000b3382) list_notif_wgt_row_pane_g2_ParamLimits

0xe3f8,	// (0x000b3396) list_notif_wgt_row_pane_g3_ParamLimits

0x0071,	// (0x000a500f) list_notif_wgt_row_pane_g_ParamLimits

0xe405,	// (0x000b33a3) list_notif_wgt_row_pane_t1_ParamLimits

0xe41b,	// (0x000b33b9) list_notif_wgt_row_pane_t2_ParamLimits

0xe42d,	// (0x000b33cb) list_notif_wgt_row_pane_t3_ParamLimits

0x0078,	// (0x000a5016) list_notif_wgt_row_pane_t_ParamLimits

0x8d89,	// (0x000add27) listrow_wgtman_pane_g1_ParamLimits

0x8d96,	// (0x000add34) listrow_wgtman_pane_g2_ParamLimits

0xfe93,	// (0x000b4e31) listrow_wgtman_pane_g_ParamLimits

0x8db4,	// (0x000add52) listrow_wgtman_pane_t1_ParamLimits

0x8dcc,	// (0x000add6a) listrow_wgtman_pane_t2_ParamLimits

0xfe98,	// (0x000b4e36) listrow_wgtman_pane_t_ParamLimits

0x8df2,	// (0x000add90) wait_bar_pane_cp09_ParamLimits

0xe5a6,	// (0x000b3544) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000b4044) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000b404c) popup_notif_wgt_heading_pane_t1

0xe5a6,	// (0x000b3544) main_vids_pane

0xe5a6,	// (0x000b3544) vids_listscroll_pane

0x943a,	// (0x000ae3d8) scroll_pane_cp040

0xe5a6,	// (0x000b3544) vids_list_pane

0x9445,	// (0x000ae3e3) vids_list_double_pane_ParamLimits

0x9445,	// (0x000ae3e3) vids_list_double_pane

0x9456,	// (0x000ae3f4) vids_list_double_pane_g1

0x945f,	// (0x000ae3fd) vids_list_double_pane_t1

0x946f,	// (0x000ae40d) vids_list_double_pane_t2

0x0001,

0xff13,	// (0x000b4eb1) vids_list_double_pane_t

0x94e7,	// (0x000ae485) main_ncimui_pane_ParamLimits

0x757b,	// (0x000ac519) main_ncimui_pane_g1_ParamLimits

0x7587,	// (0x000ac525) main_ncimui_pane_g2_ParamLimits

0x7587,	// (0x000ac525) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000b4b88) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000b4b88) main_ncimui_pane_g

0x93cf,	// (0x000ae36d) main_welc_pane_g1_ParamLimits

0x93cf,	// (0x000ae36d) main_welc_pane_g1

0x93e4,	// (0x000ae382) main_welc_pane_g2_ParamLimits

0x93e4,	// (0x000ae382) main_welc_pane_g2

0x0001,

0xff0e,	// (0x000b4eac) main_welc_pane_g_ParamLimits

0xff0e,	// (0x000b4eac) main_welc_pane_g

0xec1e,	// (0x000b3bbc) listscroll_mce_pane_ParamLimits

0xa61b,	// (0x000af5b9) wait_bar_pane_cp10

0xba21,	// (0x000b09bf) main_cale_day_pane_ParamLimits

0xba21,	// (0x000b09bf) main_cale_week_pane_ParamLimits

0xec1e,	// (0x000b3bbc) main_messa_pane_ParamLimits

0x4e87,	// (0x000a9e25) main_clock2_btn_pane_ParamLimits

0x4e87,	// (0x000a9e25) main_clock2_btn_pane

0xc296,	// (0x000b1234) main_clock2_btn_pane_cp01_ParamLimits

0xc296,	// (0x000b1234) main_clock2_btn_pane_cp01

0xdec9,	// (0x000b2e67) list_cale_mrui_pane_ParamLimits

0xe463,	// (0x000b3401) main_cf0_pane_g2

0x0001,

0x007f,	// (0x000a501d) main_cf0_pane_g

0x8fc5,	// (0x000adf63) area_left_week_number_pane_ParamLimits

0x8fd1,	// (0x000adf6f) area_top_day_name_pane_ParamLimits

0x8fe4,	// (0x000adf82) frame_month_view_pane_ParamLimits

0xe58b,	// (0x000b3529) grid_month_view_pane_ParamLimits

0xe599,	// (0x000b3537) frm_month_g1_ParamLimits

0x9065,	// (0x000ae003) frm_month_g2_ParamLimits

0x9078,	// (0x000ae016) frm_month_g3_ParamLimits

0x908b,	// (0x000ae029) frm_month_g4_ParamLimits

0x909e,	// (0x000ae03c) frm_month_g5_ParamLimits

0x90b1,	// (0x000ae04f) frm_month_g6_ParamLimits

0x90c4,	// (0x000ae062) frm_month_g7_ParamLimits

0xef57,	// (0x000b3ef5) frm_month_g8_ParamLimits

0x90d7,	// (0x000ae075) frm_month_g9_ParamLimits

0x90e7,	// (0x000ae085) frm_month_g10_ParamLimits

0x90f7,	// (0x000ae095) frm_month_g11_ParamLimits

0x9107,	// (0x000ae0a5) frm_month_g12_ParamLimits

0x9119,	// (0x000ae0b7) frm_month_g13_ParamLimits

0x912b,	// (0x000ae0c9) frm_month_g14_ParamLimits

0x913f,	// (0x000ae0dd) frm_month_g15_ParamLimits

0x9153,	// (0x000ae0f1) frm_month_g16_ParamLimits

0xfeb9,	// (0x000b4e57) frm_month_g_ParamLimits

0xef64,	// (0x000b3f02) cell_top_day_name_pane_t1_ParamLimits

0x9167,	// (0x000ae105) cell_area_left_week_number_pane_g1_ParamLimits

0x9173,	// (0x000ae111) cell_area_left_week_number_pane_t1_ParamLimits

0xc0b6,	// (0x000b1054) cell_month_view_pane_g1_ParamLimits

0x9186,	// (0x000ae124) cell_month_view_pane_t1_ParamLimits

0xec16,	// (0x000b3bb4) main_clock2_btn_pane_g1

0xf0bc,	// (0x000b405a) main_clock2_btn_pane_t1

0xeef1,	// (0x000b3e8f) listscroll_cmail_pane_ParamLimits

0xdac5,	// (0x000b2a63) main_sp_fs_email_pane_g1_ParamLimits

0xdad1,	// (0x000b2a6f) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000b4c83) main_sp_fs_email_pane_g_ParamLimits

0xe08c,	// (0x000b302a) list_recal_day_pane_ParamLimits

0xe09d,	// (0x000b303b) mian_recal_day_pane_t1

0x8067,	// (0x000ad005) list_single_dyc_row_text_pane_t4_ParamLimits

0x8067,	// (0x000ad005) list_single_dyc_row_text_pane_t4

0x80b0,	// (0x000ad04e) list_single_dyc_row_text_pane_t5_ParamLimits

0x80b0,	// (0x000ad04e) list_single_dyc_row_text_pane_t5

0xdb77,	// (0x000b2b15) list_single_dyc_row_text_pane_t6_ParamLimits

0xdb77,	// (0x000b2b15) list_single_dyc_row_text_pane_t6

0x2464,	// (0x000a7402) aid_mgn_list_cale_time_pane

0x94e7,	// (0x000ae485) main_gallery2_pane_ParamLimits

0xc2ac,	// (0x000b124a) main_clock2_pane_cp01_t1

0xc2bc,	// (0x000b125a) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000b4762) main_clock2_pane_cp01_t

0x0b83,	// (0x000a5b21) cale_week_scroll_pane_g16_ParamLimits

0x0b83,	// (0x000a5b21) cale_week_scroll_pane_g16

0xeea8,	// (0x000b3e46) vorec_slider_pane

0xf03a,	// (0x000b3fd8) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
