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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0009b488 };

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
0x0454,	// (0x0009b8dc) Screen

0x0460,	// (0x0009b8e8) application_window

0x04a6,	// (0x0009b92e) area_bottom_pane_ParamLimits

0x04a6,	// (0x0009b92e) area_bottom_pane

0x04df,	// (0x0009b967) area_top_pane_ParamLimits

0x04df,	// (0x0009b967) area_top_pane

0x9fc5,	// (0x000a544d) call_video_uplink_pane_ParamLimits

0x9fc5,	// (0x000a544d) call_video_uplink_pane

0x056d,	// (0x0009b9f5) main_pane_ParamLimits

0x056d,	// (0x0009b9f5) main_pane

0xc89a,	// (0x000a7d22) context_pane

0x345c,	// (0x0009e8e4) navi_pane

0x348e,	// (0x0009e916) popup_cale_events_window_ParamLimits

0x348e,	// (0x0009e916) popup_cale_events_window

0xc8ad,	// (0x000a7d35) popup_mup_playback_window

0x34a6,	// (0x0009e92e) signal_pane

0xa758,	// (0x000a5be0) main_browser_pane

0xa99d,	// (0x000a5e25) main_burst_pane

0x31aa,	// (0x0009e632) main_calc_pane

0xc83a,	// (0x000a7cc2) main_cale_day_pane

0x31be,	// (0x0009e646) main_cale_month_pane

0xc83a,	// (0x000a7cc2) main_cale_week_pane

0xa99d,	// (0x000a5e25) main_call_pane

0xa3ee,	// (0x000a5876) main_call_poc_pane

0xa99d,	// (0x000a5e25) main_camera_pane

0xa99d,	// (0x000a5e25) main_chi_dic_pane

0xb231,	// (0x000a66b9) main_clock_pane

0xa3ee,	// (0x000a5876) main_fmradio_pane

0xa99d,	// (0x000a5e25) main_graph_messa_pane

0xa3ee,	// (0x000a5876) main_help_pane

0xa758,	// (0x000a5be0) main_im_pane

0xa649,	// (0x000a5ad1) main_image_pane_ParamLimits

0xa649,	// (0x000a5ad1) main_image_pane

0xa3ee,	// (0x000a5876) main_location2_pane

0xa99d,	// (0x000a5e25) main_location_pane

0xa649,	// (0x000a5ad1) main_messa_pane

0xa3ee,	// (0x000a5876) main_mp2_pane

0xa99d,	// (0x000a5e25) main_mp_pane

0xa3ee,	// (0x000a5876) main_msg_pane

0xa3ee,	// (0x000a5876) main_mup_eq_pane

0xa3ee,	// (0x000a5876) main_mup_pane

0xa758,	// (0x000a5be0) main_notes_pane

0xa3ee,	// (0x000a5876) main_pec_pane

0xa3ee,	// (0x000a5876) main_phob_pane

0xa3ee,	// (0x000a5876) main_pinb_pane

0xa3ee,	// (0x000a5876) main_postcard_pane

0xa3ee,	// (0x000a5876) main_qdial_pane

0xa99d,	// (0x000a5e25) main_skin_pane

0xa3ee,	// (0x000a5876) main_smil2_pane

0xa99d,	// (0x000a5e25) main_smil_pane

0xa99d,	// (0x000a5e25) main_video_pane

0xa99d,	// (0x000a5e25) main_video_tele_pane

0xa649,	// (0x000a5ad1) main_viewer_pane_ParamLimits

0xa649,	// (0x000a5ad1) main_viewer_pane

0xa99d,	// (0x000a5e25) main_vorec_pane

0x3210,	// (0x0009e698) popup_blid_sat_info_window_ParamLimits

0x3210,	// (0x0009e698) popup_blid_sat_info_window

0x3268,	// (0x0009e6f0) popup_dyc_status_message_window_ParamLimits

0x3268,	// (0x0009e6f0) popup_dyc_status_message_window

0x3282,	// (0x0009e70a) popup_grid_large_graphic_window_ParamLimits

0x3282,	// (0x0009e70a) popup_grid_large_graphic_window

0x333e,	// (0x0009e7c6) popup_loc_request_window_ParamLimits

0x333e,	// (0x0009e7c6) popup_loc_request_window

0x3434,	// (0x0009e8bc) popup_wml_address_window_ParamLimits

0x3434,	// (0x0009e8bc) popup_wml_address_window

0x2fe4,	// (0x0009e46c) call_muted_g1

0x2c58,	// (0x0009e0e0) popup_call_audio_conf_window_ParamLimits

0x2c58,	// (0x0009e0e0) popup_call_audio_conf_window

0x2ff8,	// (0x0009e480) popup_call_audio_first_window_ParamLimits

0x2ff8,	// (0x0009e480) popup_call_audio_first_window

0x306e,	// (0x0009e4f6) popup_call_audio_in_window_ParamLimits

0x306e,	// (0x0009e4f6) popup_call_audio_in_window

0x30aa,	// (0x0009e532) popup_call_audio_out_window_ParamLimits

0x30aa,	// (0x0009e532) popup_call_audio_out_window

0x30e4,	// (0x0009e56c) popup_call_audio_second_window_ParamLimits

0x30e4,	// (0x0009e56c) popup_call_audio_second_window

0x313a,	// (0x0009e5c2) popup_call_audio_wait_window_ParamLimits

0x313a,	// (0x0009e5c2) popup_call_audio_wait_window

0x316f,	// (0x0009e5f7) popup_number_entry_window_ParamLimits

0x316f,	// (0x0009e5f7) popup_number_entry_window

0x06f4,	// (0x0009bb7c) bg_popup_call_pane_cp05_ParamLimits

0x06f4,	// (0x0009bb7c) bg_popup_call_pane_cp05

0x9ffb,	// (0x000a5483) popup_number_entry_window_t1

0xa00e,	// (0x000a5496) popup_number_entry_window_t2

0xa020,	// (0x000a54a8) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x000aa4cd) popup_number_entry_window_t

0xa032,	// (0x000a54ba) text_title_cp2

0xa045,	// (0x000a54cd) bg_popup_call_pane_cp_ParamLimits

0xa045,	// (0x000a54cd) bg_popup_call_pane_cp

0xa053,	// (0x000a54db) call_thumbnail_pane

0xa05b,	// (0x000a54e3) popup_call_audio_in_window_g1_ParamLimits

0xa05b,	// (0x000a54e3) popup_call_audio_in_window_g1

0xa067,	// (0x000a54ef) popup_call_audio_in_window_g2_ParamLimits

0xa067,	// (0x000a54ef) popup_call_audio_in_window_g2

0xa073,	// (0x000a54fb) popup_call_audio_in_window_g3_ParamLimits

0xa073,	// (0x000a54fb) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x000aa4d6) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x000aa4d6) popup_call_audio_in_window_g

0xa07f,	// (0x000a5507) popup_call_audio_in_window_t1_ParamLimits

0xa07f,	// (0x000a5507) popup_call_audio_in_window_t1

0xa09b,	// (0x000a5523) popup_call_audio_in_window_t2_ParamLimits

0xa09b,	// (0x000a5523) popup_call_audio_in_window_t2

0xa0b7,	// (0x000a553f) popup_call_audio_in_window_t3_ParamLimits

0xa0b7,	// (0x000a553f) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x000aa4dd) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x000aa4dd) popup_call_audio_in_window_t

0xa045,	// (0x000a54cd) bg_popup_call_pane_cp01_ParamLimits

0xa045,	// (0x000a54cd) bg_popup_call_pane_cp01

0xa053,	// (0x000a54db) call_thumbnail_pane_cp02

0xa0ca,	// (0x000a5552) call_type_pane_cp022

0xa0d2,	// (0x000a555a) popup_call_audio_out_window_g1_ParamLimits

0xa0d2,	// (0x000a555a) popup_call_audio_out_window_g1

0xa0e4,	// (0x000a556c) popup_call_audio_out_window_g2_ParamLimits

0xa0e4,	// (0x000a556c) popup_call_audio_out_window_g2

0xa0f0,	// (0x000a5578) popup_call_audio_out_window_g3_ParamLimits

0xa0f0,	// (0x000a5578) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x000aa4e4) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x000aa4e4) popup_call_audio_out_window_g

0xa102,	// (0x000a558a) popup_call_audio_out_window_t1_ParamLimits

0xa102,	// (0x000a558a) popup_call_audio_out_window_t1

0xa11a,	// (0x000a55a2) popup_call_audio_out_window_t2_ParamLimits

0xa11a,	// (0x000a55a2) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x000aa4eb) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x000aa4eb) popup_call_audio_out_window_t

0xa12f,	// (0x000a55b7) bg_popup_call_pane_ParamLimits

0xa12f,	// (0x000a55b7) bg_popup_call_pane

0x0748,	// (0x0009bbd0) call_thumbnail_pane_cp_ParamLimits

0x0748,	// (0x0009bbd0) call_thumbnail_pane_cp

0xa1b3,	// (0x000a563b) call_type_pane_cp01_ParamLimits

0xa1b3,	// (0x000a563b) call_type_pane_cp01

0xa1f7,	// (0x000a567f) popup_call_audio_first_window_g1_ParamLimits

0xa1f7,	// (0x000a567f) popup_call_audio_first_window_g1

0xa243,	// (0x000a56cb) popup_call_audio_first_window_g2_ParamLimits

0xa243,	// (0x000a56cb) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x000aa4f0) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x000aa4f0) popup_call_audio_first_window_g

0xa287,	// (0x000a570f) popup_call_audio_first_window_t1_ParamLimits

0xa287,	// (0x000a570f) popup_call_audio_first_window_t1

0xa333,	// (0x000a57bb) popup_call_audio_first_window_t4_ParamLimits

0xa333,	// (0x000a57bb) popup_call_audio_first_window_t4

0xa3bf,	// (0x000a5847) popup_call_audio_first_window_t5_ParamLimits

0xa3bf,	// (0x000a5847) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x000aa4f5) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x000aa4f5) popup_call_audio_first_window_t

0xa3ee,	// (0x000a5876) bg_popup_call_pane_cp02

0xa3f8,	// (0x000a5880) call_type_pane_cp023

0xa400,	// (0x000a5888) popup_call_audio_wait_window_g1

0xa408,	// (0x000a5890) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x000aa4fc) popup_call_audio_wait_window_g

0xa410,	// (0x000a5898) popup_call_audio_wait_window_t3

0xa41e,	// (0x000a58a6) bg_popup_call_pane_cp03_ParamLimits

0xa41e,	// (0x000a58a6) bg_popup_call_pane_cp03

0xa47e,	// (0x000a5906) call_thumbnail_pane_cp011_ParamLimits

0xa47e,	// (0x000a5906) call_thumbnail_pane_cp011

0xa48a,	// (0x000a5912) call_type_pane_cp034_ParamLimits

0xa48a,	// (0x000a5912) call_type_pane_cp034

0xa4c6,	// (0x000a594e) popup_call_audio_second_window_g1_ParamLimits

0xa4c6,	// (0x000a594e) popup_call_audio_second_window_g1

0xa502,	// (0x000a598a) popup_call_audio_second_window_g2_ParamLimits

0xa502,	// (0x000a598a) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x000aa501) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x000aa501) popup_call_audio_second_window_g

0xa53e,	// (0x000a59c6) popup_call_audio_second_window_t1_ParamLimits

0xa53e,	// (0x000a59c6) popup_call_audio_second_window_t1

0xa5bf,	// (0x000a5a47) popup_call_audio_second_window_t2_ParamLimits

0xa5bf,	// (0x000a5a47) popup_call_audio_second_window_t2

0xa5f5,	// (0x000a5a7d) popup_call_audio_second_window_t3_ParamLimits

0xa5f5,	// (0x000a5a7d) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x000aa506) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x000aa506) popup_call_audio_second_window_t

0xa3ee,	// (0x000a5876) bg_popup_call_pane_cp04

0xa62b,	// (0x000a5ab3) list_conf_pane

0xa633,	// (0x000a5abb) popup_call_audio_conf_window_t1

0xa641,	// (0x000a5ac9) call_thumbnail_pane_g1

0xa649,	// (0x000a5ad1) bg_pinb_pane_ParamLimits

0xa649,	// (0x000a5ad1) bg_pinb_pane

0xa657,	// (0x000a5adf) find_pinb_pane

0xa649,	// (0x000a5ad1) listscroll_pinb_pane_ParamLimits

0xa649,	// (0x000a5ad1) listscroll_pinb_pane

0xa661,	// (0x000a5ae9) pinb_bg_pane_g1

0xa661,	// (0x000a5ae9) pinb_bg_pane_g2

0xa661,	// (0x000a5ae9) pinb_bg_pane_g3

0xa661,	// (0x000a5ae9) pinb_bg_pane_g4

0xa661,	// (0x000a5ae9) pinb_bg_pane_g5

0xa661,	// (0x000a5ae9) pinb_bg_pane_g6

0xa661,	// (0x000a5ae9) pinb_bg_pane_g7

0xa661,	// (0x000a5ae9) pinb_bg_pane_g8

0xa661,	// (0x000a5ae9) pinb_bg_pane_g9

0xa661,	// (0x000a5ae9) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x000aa50d) pinb_bg_pane_g

0x046c,	// (0x0009b8f4) grid_pinb_pane

0x046c,	// (0x0009b8f4) list_pinb_pane

0x076c,	// (0x0009bbf4) scroll_pane_cp01_ParamLimits

0x076c,	// (0x0009bbf4) scroll_pane_cp01

0xa66b,	// (0x000a5af3) find_pinb_pane_g1_ParamLimits

0xa66b,	// (0x000a5af3) find_pinb_pane_g1

0xa683,	// (0x000a5b0b) find_pinb_pane_t1

0xa695,	// (0x000a5b1d) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x000aa527) find_pinb_pane_t

0xa6aa,	// (0x000a5b32) input_focus_pane_cp01_ParamLimits

0xa6aa,	// (0x000a5b32) input_focus_pane_cp01

0xa6b6,	// (0x000a5b3e) cell_pinb_pane_ParamLimits

0xa6b6,	// (0x000a5b3e) cell_pinb_pane

0xa6c4,	// (0x000a5b4c) cell_pinb_pane_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) cell_pinb_pane_g1

0xa6d2,	// (0x000a5b5a) cell_pinb_pane_g2_ParamLimits

0xa6d2,	// (0x000a5b5a) cell_pinb_pane_g2

0xa6d2,	// (0x000a5b5a) cell_pinb_pane_g3_ParamLimits

0xa6d2,	// (0x000a5b5a) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x000aa52c) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x000aa52c) cell_pinb_pane_g

0xa3ee,	// (0x000a5876) grid_highlight_pane_cp01

0xa6b6,	// (0x000a5b3e) list_pinb_item_pane_ParamLimits

0xa6b6,	// (0x000a5b3e) list_pinb_item_pane

0x046c,	// (0x0009b8f4) list_highlight_pane_cp02

0xa6e0,	// (0x000a5b68) list_pinb_item_pane_g1_ParamLimits

0xa6e0,	// (0x000a5b68) list_pinb_item_pane_g1

0xa6d2,	// (0x000a5b5a) list_pinb_item_pane_g2_ParamLimits

0xa6d2,	// (0x000a5b5a) list_pinb_item_pane_g2

0xa6c4,	// (0x000a5b4c) list_pinb_item_pane_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_pinb_item_pane_g3

0xa6d2,	// (0x000a5b5a) list_pinb_item_pane_g4_ParamLimits

0xa6d2,	// (0x000a5b5a) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x000aa533) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x000aa533) list_pinb_item_pane_g

0xa6ee,	// (0x000a5b76) list_pinb_item_pane_t1_ParamLimits

0xa6ee,	// (0x000a5b76) list_pinb_item_pane_t1

0x0798,	// (0x0009bc20) calc_display_pane

0x07bd,	// (0x0009bc45) calc_paper_pane

0x07e0,	// (0x0009bc68) grid_calc_pane

0xa3ee,	// (0x000a5876) bg_list_pane_cp01

0x080e,	// (0x0009bc96) clock_g1

0x0816,	// (0x0009bc9e) clock_g2

0x0001,

0xf0b4,	// (0x000aa53c) clock_g

0x081e,	// (0x0009bca6) clock_t1_ParamLimits

0x081e,	// (0x0009bca6) clock_t1

0x0833,	// (0x0009bcbb) clock_t2_ParamLimits

0x0833,	// (0x0009bcbb) clock_t2

0x0845,	// (0x0009bccd) clock_t3_ParamLimits

0x0845,	// (0x0009bccd) clock_t3

0x0857,	// (0x0009bcdf) clock_t4_ParamLimits

0x0857,	// (0x0009bcdf) clock_t4

0x0869,	// (0x0009bcf1) clock_t5_ParamLimits

0x0869,	// (0x0009bcf1) clock_t5

0x087e,	// (0x0009bd06) clock_t6_ParamLimits

0x087e,	// (0x0009bd06) clock_t6

0x0890,	// (0x0009bd18) clock_t7_ParamLimits

0x0890,	// (0x0009bd18) clock_t7

0x08a2,	// (0x0009bd2a) clock_t8_ParamLimits

0x08a2,	// (0x0009bd2a) clock_t8

0x08b6,	// (0x0009bd3e) clock_t9_ParamLimits

0x08b6,	// (0x0009bd3e) clock_t9

0x0008,

0xf0b9,	// (0x000aa541) clock_t_ParamLimits

0xf0b9,	// (0x000aa541) clock_t

0xa70a,	// (0x000a5b92) popup_clock_analogue_window_cp02

0xa70a,	// (0x000a5b92) popup_clock_digital_window_cp01

0xa3ee,	// (0x000a5876) listscroll_help_pane

0xa3ee,	// (0x000a5876) phob_pre_status_pane

0xa712,	// (0x000a5b9a) grid_qdial_pane

0xa649,	// (0x000a5ad1) listscroll_mce_pane

0xa649,	// (0x000a5ad1) bg_notes_pane

0xa71c,	// (0x000a5ba4) list_notes_pane

0x08ca,	// (0x0009bd52) scroll_pane_cp06

0xa72a,	// (0x000a5bb2) bg_calc_paper_pane

0xa73e,	// (0x000a5bc6) list_calc_pane

0xa758,	// (0x000a5be0) bg_calc_display_pane

0x08de,	// (0x0009bd66) calc_display_pane_t1

0x08f3,	// (0x0009bd7b) calc_display_pane_t2

0xa764,	// (0x000a5bec) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x000aa554) calc_display_pane_t

0x0908,	// (0x0009bd90) cell_calc_pane_ParamLimits

0x0908,	// (0x0009bd90) cell_calc_pane

0xa776,	// (0x000a5bfe) bg_calc_paper_pane_g1

0xa782,	// (0x000a5c0a) bg_calc_paper_pane_g2

0xa78e,	// (0x000a5c16) bg_calc_paper_pane_g3

0xa79a,	// (0x000a5c22) bg_calc_paper_pane_g4

0xa7a6,	// (0x000a5c2e) bg_calc_paper_pane_g5

0x093d,	// (0x0009bdc5) bg_calc_paper_pane_g6

0x094c,	// (0x0009bdd4) bg_calc_paper_pane_g7

0x095b,	// (0x0009bde3) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x000aa55b) bg_calc_paper_pane_g

0x096e,	// (0x0009bdf6) calc_bg_paper_pane_g9

0x0981,	// (0x0009be09) list_calc_item_pane_ParamLimits

0x0981,	// (0x0009be09) list_calc_item_pane

0xa7b2,	// (0x000a5c3a) list_calc_item_pane_g1

0xa7bf,	// (0x000a5c47) list_calc_item_pane_t1_ParamLimits

0xa7bf,	// (0x000a5c47) list_calc_item_pane_t1

0x0999,	// (0x0009be21) list_calc_item_pane_t2_ParamLimits

0x0999,	// (0x0009be21) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x000aa56c) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x000aa56c) list_calc_item_pane_t

0xa661,	// (0x000a5ae9) cell_calc_pane_g1

0xa7d1,	// (0x000a5c59) grid_highlight_pane_cp02

0x09cb,	// (0x0009be53) bg_calc_display_pane_g1

0x09d4,	// (0x0009be5c) bg_calc_display_pane_g2

0xa7f3,	// (0x000a5c7b) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x000aa576) bg_calc_display_pane_g

0x09de,	// (0x0009be66) cell_qdial_pane_ParamLimits

0x09de,	// (0x0009be66) cell_qdial_pane

0x09f2,	// (0x0009be7a) cell_qdial_pane_g1_ParamLimits

0x09f2,	// (0x0009be7a) cell_qdial_pane_g1

0x0a08,	// (0x0009be90) cell_qdial_pane_g2_ParamLimits

0x0a08,	// (0x0009be90) cell_qdial_pane_g2

0xa7fc,	// (0x000a5c84) cell_qdial_pane_g3_ParamLimits

0xa7fc,	// (0x000a5c84) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x000aa57d) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x000aa57d) cell_qdial_pane_g

0x0a2f,	// (0x0009beb7) cell_qdial_pane_t1_ParamLimits

0x0a2f,	// (0x0009beb7) cell_qdial_pane_t1

0x0a47,	// (0x0009becf) cell_qdial_pane_t2_ParamLimits

0x0a47,	// (0x0009becf) cell_qdial_pane_t2

0x0a5a,	// (0x0009bee2) cell_qdial_pane_t3_ParamLimits

0x0a5a,	// (0x0009bee2) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x000aa586) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x000aa586) cell_qdial_pane_t

0xa3ee,	// (0x000a5876) grid_highlight_pane_cp04

0xa808,	// (0x000a5c90) thumbnail_qdial_pane_ParamLimits

0xa808,	// (0x000a5c90) thumbnail_qdial_pane

0xa864,	// (0x000a5cec) list_help_pane

0xa86d,	// (0x000a5cf5) scroll_pane_cp02

0xa876,	// (0x000a5cfe) help_list_pane_t1_ParamLimits

0xa876,	// (0x000a5cfe) help_list_pane_t1

0xa894,	// (0x000a5d1c) bg_notes_pane_g2

0xa89c,	// (0x000a5d24) bg_notes_pane_g3

0xa8a4,	// (0x000a5d2c) notes_bg_pane_g1

0xa8ac,	// (0x000a5d34) notes_bg_pane_g4

0xa8b4,	// (0x000a5d3c) notes_bg_pane_g5

0xa8bc,	// (0x000a5d44) notes_bg_pane_g6

0xa8c4,	// (0x000a5d4c) notes_bg_pane_g7

0xa8cc,	// (0x000a5d54) notes_bg_pane_g8

0xa8d4,	// (0x000a5d5c) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x000aa5a4) notes_bg_pane_g

0x0a6d,	// (0x0009bef5) list_notes_text_pane_ParamLimits

0x0a6d,	// (0x0009bef5) list_notes_text_pane

0xa8dc,	// (0x000a5d64) list_notes_text_pane_g1

0x0a82,	// (0x0009bf0a) list_notes_text_pane_t1

0x0a90,	// (0x0009bf18) listscroll_cale_week_pane

0x0abc,	// (0x0009bf44) bg_cale_heading_pane

0xa8ff,	// (0x000a5d87) bg_cale_pane_cp01

0x0ad4,	// (0x0009bf5c) cale_week_corner_pane

0x0af3,	// (0x0009bf7b) cale_week_day_heading_pane

0x0b10,	// (0x0009bf98) cale_week_scroll_pane_g1

0x0b23,	// (0x0009bfab) cale_week_scroll_pane_g2

0x0b3b,	// (0x0009bfc3) cale_week_scroll_pane_g3

0x0b53,	// (0x0009bfdb) cale_week_scroll_pane_g4

0x0b6b,	// (0x0009bff3) cale_week_scroll_pane_g5

0x0b8b,	// (0x0009c013) cale_week_scroll_pane_g6

0x0bab,	// (0x0009c033) cale_week_scroll_pane_g7

0x0bcb,	// (0x0009c053) cale_week_scroll_pane_g8

0x0bef,	// (0x0009c077) cale_week_scroll_pane_g9

0x0c07,	// (0x0009c08f) cale_week_scroll_pane_g10

0x0c1f,	// (0x0009c0a7) cale_week_scroll_pane_g11

0x0c37,	// (0x0009c0bf) cale_week_scroll_pane_g12

0x0c4f,	// (0x0009c0d7) cale_week_scroll_pane_g13

0x0c4f,	// (0x0009c0d7) cale_week_scroll_pane_g14

0x0c4f,	// (0x0009c0d7) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x000aa5b3) cale_week_scroll_pane_g

0x0c8b,	// (0x0009c113) cale_week_time_pane

0x0caf,	// (0x0009c137) grid_cale_week_pane

0xa92e,	// (0x000a5db6) scroll_pane_cp08

0x0cd5,	// (0x0009c15d) cell_cale_week_pane_ParamLimits

0x0cd5,	// (0x0009c15d) cell_cale_week_pane

0x0d63,	// (0x0009c1eb) cale_week_day_heading_pane_t1

0x0d8d,	// (0x0009c215) cale_week_day_heading_pane_t2

0x0dbc,	// (0x0009c244) cale_week_day_heading_pane_t3

0x0deb,	// (0x0009c273) cale_week_day_heading_pane_t4

0x0e1a,	// (0x0009c2a2) cale_week_day_heading_pane_t5

0x0e51,	// (0x0009c2d9) cale_week_day_heading_pane_t6

0x0e88,	// (0x0009c310) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x000aa5d4) cale_week_day_heading_pane_t

0xa94b,	// (0x000a5dd3) bg_cale_side_pane

0x0eb2,	// (0x0009c33a) cale_week_time_pane_t1

0x0ecc,	// (0x0009c354) cale_week_time_pane_t2

0x0ee6,	// (0x0009c36e) cale_week_time_pane_t3

0x0f00,	// (0x0009c388) cale_week_time_pane_t4

0x0f1a,	// (0x0009c3a2) cale_week_time_pane_t5

0x0f34,	// (0x0009c3bc) cale_week_time_pane_t6

0x0f4e,	// (0x0009c3d6) cale_week_time_pane_t7

0x0f68,	// (0x0009c3f0) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x000aa5e3) cale_week_time_pane_t

0x0f82,	// (0x0009c40a) cell_cale_week_pane_g2

0x0fa1,	// (0x0009c429) cell_cale_week_pane_g3_ParamLimits

0x0fa1,	// (0x0009c429) cell_cale_week_pane_g3

0xa959,	// (0x000a5de1) grid_highlight_pane_cp07

0xa961,	// (0x000a5de9) listscroll_gms_pane

0xa96b,	// (0x000a5df3) grid_gms_pane

0xa974,	// (0x000a5dfc) listscroll_gms_pane_g1

0xa97c,	// (0x000a5e04) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x000aa5f4) listscroll_gms_pane_g

0x0fb9,	// (0x0009c441) scroll_pane_cp010

0x0fc4,	// (0x0009c44c) cell_gms_pane_ParamLimits

0x0fc4,	// (0x0009c44c) cell_gms_pane

0x0fd7,	// (0x0009c45f) cell_gms_pane_g1

0xa984,	// (0x000a5e0c) cell_gms_pane_g2

0xa8dc,	// (0x000a5d64) cell_gms_pane_g3

0xa98c,	// (0x000a5e14) cell_gms_pane_g4

0x0003,

0xf171,	// (0x000aa5f9) cell_gms_pane_g

0xa995,	// (0x000a5e1d) grid_highlight_pane_cp09

0x2f6c,	// (0x0009e3f4) phob_pre_status_pane_g1

0x2f74,	// (0x0009e3fc) phob_pre_status_pane_g2

0x2f7c,	// (0x0009e404) phob_pre_status_pane_g3

0x2f84,	// (0x0009e40c) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x000aa9bd) phob_pre_status_pane_g

0x2f94,	// (0x0009e41c) phob_pre_status_pane_t1

0x2fa2,	// (0x0009e42a) phob_pre_status_pane_t2

0x2fb2,	// (0x0009e43a) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x000aa9c8) phob_pre_status_pane_t

0xa99d,	// (0x000a5e25) bg_list_pane_cp05

0x0fe7,	// (0x0009c46f) grid_vorec_pane

0x0fef,	// (0x0009c477) vorec_t1

0x0ffd,	// (0x0009c485) vorec_t2

0x100b,	// (0x0009c493) vorec_t3

0x1019,	// (0x0009c4a1) vorec_t4

0xeecc,	// (0x000aa354) vorec_t5

0x929c,	// (0x000a4724) vorec_t6

0x0004,

0xf17a,	// (0x000aa602) vorec_t

0x92aa,	// (0x000a4732) wait_bar_pane_cp01

0x1035,	// (0x0009c4bd) cell_vorec_pane_ParamLimits

0x1035,	// (0x0009c4bd) cell_vorec_pane

0xa9a5,	// (0x000a5e2d) cell_vorec_pane_g1

0xa3ee,	// (0x000a5876) grid_highlight_pane_cp05

0x076c,	// (0x0009bbf4) cams_zoom_pane

0x076c,	// (0x0009bbf4) image_vga_pane

0xa6c4,	// (0x000a5b4c) main_camera_pane_g1

0xa6c4,	// (0x000a5b4c) main_camera_pane_g2

0xa6c4,	// (0x000a5b4c) main_camera_pane_g3

0xa6c4,	// (0x000a5b4c) main_camera_pane_g4

0xa6c4,	// (0x000a5b4c) main_camera_pane_g5

0xa6c4,	// (0x000a5b4c) main_camera_pane_g6

0xa6c4,	// (0x000a5b4c) main_camera_pane_g7

0x0007,

0xf185,	// (0x000aa60d) main_camera_pane_g

0xa9af,	// (0x000a5e37) main_camera_pane_t1

0xa9af,	// (0x000a5e37) main_camera_pane_t2

0x0001,

0xf196,	// (0x000aa61e) main_camera_pane_t

0x105c,	// (0x0009c4e4) cams_zoom_pane_cp_ParamLimits

0x105c,	// (0x0009c4e4) cams_zoom_pane_cp

0x1090,	// (0x0009c518) image_cif_pane_ParamLimits

0x1090,	// (0x0009c518) image_cif_pane

0x046c,	// (0x0009b8f4) image_subqcif_pane

0x10a2,	// (0x0009c52a) main_video_pane_g1_ParamLimits

0x10a2,	// (0x0009c52a) main_video_pane_g1

0x10d0,	// (0x0009c558) main_video_pane_g2_ParamLimits

0x10d0,	// (0x0009c558) main_video_pane_g2

0x110a,	// (0x0009c592) main_video_pane_g3_ParamLimits

0x110a,	// (0x0009c592) main_video_pane_g3

0x110a,	// (0x0009c592) main_video_pane_g4_ParamLimits

0x110a,	// (0x0009c592) main_video_pane_g4

0x113e,	// (0x0009c5c6) main_video_pane_g5_ParamLimits

0x113e,	// (0x0009c5c6) main_video_pane_g5

0xa9c3,	// (0x000a5e4b) main_video_pane_g6_ParamLimits

0xa9c3,	// (0x000a5e4b) main_video_pane_g6

0x0006,

0xf19b,	// (0x000aa623) main_video_pane_g_ParamLimits

0xf19b,	// (0x000aa623) main_video_pane_g

0x115a,	// (0x0009c5e2) main_video_pane_t1_ParamLimits

0x115a,	// (0x0009c5e2) main_video_pane_t1

0xa9dd,	// (0x000a5e65) cams_zoom_pane_g1

0xa9dd,	// (0x000a5e65) cams_zoom_pane_g2

0xa9dd,	// (0x000a5e65) cams_zoom_pane_g3

0xa9dd,	// (0x000a5e65) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x000aa632) cams_zoom_pane_g

0x11b2,	// (0x0009c63a) grid_cams_pane

0x11cc,	// (0x0009c654) linegrid_cams_pane

0x11e0,	// (0x0009c668) cell_cams_pane_ParamLimits

0x11e0,	// (0x0009c668) cell_cams_pane

0xa9e7,	// (0x000a5e6f) cams_burst_image_pane

0xa9ef,	// (0x000a5e77) cell_cams_pane_g1

0xa3ee,	// (0x000a5876) grid_highlight_pane_cp03

0xa661,	// (0x000a5ae9) mp_bg_pane_g1

0x046c,	// (0x0009b8f4) bg_list_pane_cp03

0x046c,	// (0x0009b8f4) bg_mp_pane

0x046c,	// (0x0009b8f4) grid_mp_pane

0xa9dd,	// (0x000a5e65) media_player_g1

0xaf52,	// (0x000a63da) media_player_t1

0xaf52,	// (0x000a63da) media_player_t2

0xaf52,	// (0x000a63da) media_player_t3

0xaf52,	// (0x000a63da) media_player_t4

0xaf52,	// (0x000a63da) media_player_t5

0xaf52,	// (0x000a63da) media_player_t6

0xaf52,	// (0x000a63da) media_player_t7

0x0006,

0xf51f,	// (0x000aa9a7) media_player_t

0x046c,	// (0x0009b8f4) wait_bar_pane_cp02

0xf504,	// (0x000aa98c) main_usb_pane_t

0xb231,	// (0x000a66b9) cell_mp_pane

0xa661,	// (0x000a5ae9) cell_mp_pane_g1

0xa3ee,	// (0x000a5876) grid_highlight_pane_cp06

0xa9f7,	// (0x000a5e7f) grid_skin_colour_pane

0xa9ff,	// (0x000a5e87) list_highlight_pane_cp03

0x1200,	// (0x0009c688) skin_g1

0xaa07,	// (0x000a5e8f) skin_t1

0xaa16,	// (0x000a5e9e) skin_t2

0x0001,

0xf1d8,	// (0x000aa660) skin_t

0x1208,	// (0x0009c690) cell_skin_colour_pane_ParamLimits

0x1208,	// (0x0009c690) cell_skin_colour_pane

0xaa24,	// (0x000a5eac) cell_skin_colour_pane_g1

0x1281,	// (0x0009c709) call_video_g1_ParamLimits

0x1281,	// (0x0009c709) call_video_g1

0x129d,	// (0x0009c725) call_video_g2_ParamLimits

0x129d,	// (0x0009c725) call_video_g2

0x0001,

0xf1dd,	// (0x000aa665) call_video_g_ParamLimits

0xf1dd,	// (0x000aa665) call_video_g

0x12ef,	// (0x0009c777) call_video_uplink_pane_cp1_ParamLimits

0x12ef,	// (0x0009c777) call_video_uplink_pane_cp1

0xaa36,	// (0x000a5ebe) call_video_uplink_pane_cp2

0x138e,	// (0x0009c816) video_down_crop_pane_ParamLimits

0x138e,	// (0x0009c816) video_down_crop_pane

0x1485,	// (0x0009c90d) video_down_pane_ParamLimits

0x1485,	// (0x0009c90d) video_down_pane

0xaa3e,	// (0x000a5ec6) video_down_subqcif_pane_ParamLimits

0xaa3e,	// (0x000a5ec6) video_down_subqcif_pane

0xaa56,	// (0x000a5ede) video_down_subqcif_pane_cp_ParamLimits

0xaa56,	// (0x000a5ede) video_down_subqcif_pane_cp

0xaa7c,	// (0x000a5f04) im_reading_pane_ParamLimits

0xaa7c,	// (0x000a5f04) im_reading_pane

0x1595,	// (0x0009ca1d) im_writing_pane_ParamLimits

0x1595,	// (0x0009ca1d) im_writing_pane

0x15ab,	// (0x0009ca33) im_reading_pane_t1

0xaa96,	// (0x000a5f1e) list_im_pane

0xaaa7,	// (0x000a5f2f) scroll_pane_cp07

0x15e4,	// (0x0009ca6c) im_writing_pane_t1_ParamLimits

0x15e4,	// (0x0009ca6c) im_writing_pane_t1

0xaac0,	// (0x000a5f48) im_writing_pane_t2_ParamLimits

0xaac0,	// (0x000a5f48) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x000aa66f) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x000aa66f) im_writing_pane_t

0xa3ee,	// (0x000a5876) input_focus_pane_cp04

0xa3ee,	// (0x000a5876) input_focus_pane_cp05

0x15f9,	// (0x0009ca81) list_im_single_pane_ParamLimits

0x15f9,	// (0x0009ca81) list_im_single_pane

0x160d,	// (0x0009ca95) list_single_im_pane_t1

0xa99d,	// (0x000a5e25) blid_accuracy_pane

0xa99d,	// (0x000a5e25) blid_compass_pane

0xc7f2,	// (0x000a7c7a) main_location_t1

0xc7f2,	// (0x000a7c7a) main_location_t2

0xc7f2,	// (0x000a7c7a) main_location_t3

0x0002,

0xf52e,	// (0x000aa9b6) main_location_t

0xa3ee,	// (0x000a5876) aid_levels_location

0xa661,	// (0x000a5ae9) blid_accuracy_pane_g1

0xa661,	// (0x000a5ae9) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x000aa6be) blid_accuracy_pane_g

0xab08,	// (0x000a5f90) wml_content_pane

0xab46,	// (0x000a5fce) wml_button_pane_ParamLimits

0xab46,	// (0x000a5fce) wml_button_pane

0x161c,	// (0x0009caa4) wml_list_single_large_pane_ParamLimits

0x161c,	// (0x0009caa4) wml_list_single_large_pane

0x1631,	// (0x0009cab9) wml_list_single_medium_pane_ParamLimits

0x1631,	// (0x0009cab9) wml_list_single_medium_pane

0x1647,	// (0x0009cacf) wml_list_single_small_pane_ParamLimits

0x1647,	// (0x0009cacf) wml_list_single_small_pane

0xab5a,	// (0x000a5fe2) wml_selection_box_pane_ParamLimits

0xab5a,	// (0x000a5fe2) wml_selection_box_pane

0xab6d,	// (0x000a5ff5) wml_list_single_pane_t1

0xab7c,	// (0x000a6004) wml_list_single_medium_pane_t1

0xab8b,	// (0x000a6013) wml_list_single_large_pane_t1

0xab9a,	// (0x000a6022) input_focus_pane_cp02_ParamLimits

0xab9a,	// (0x000a6022) input_focus_pane_cp02

0xabad,	// (0x000a6035) wml_selection_box_pane_g1

0xabb6,	// (0x000a603e) wml_selection_box_pane_t1_ParamLimits

0xabb6,	// (0x000a603e) wml_selection_box_pane_t1

0xa649,	// (0x000a5ad1) bg_wml_button_pane_ParamLimits

0xa649,	// (0x000a5ad1) bg_wml_button_pane

0xabce,	// (0x000a6056) wml_button_pane_g1

0xabd6,	// (0x000a605e) wml_button_pane_t1

0xabce,	// (0x000a6056) wml_button_bg_pane_g1

0xabe6,	// (0x000a606e) wml_button_bg_pane_g2

0xabee,	// (0x000a6076) wml_button_bg_pane_g3

0xabf6,	// (0x000a607e) wml_button_bg_pane_g4

0xabfe,	// (0x000a6086) wml_button_bg_pane_g5

0xac06,	// (0x000a608e) wml_button_bg_pane_g6

0xac0e,	// (0x000a6096) wml_button_bg_pane_g7

0xac16,	// (0x000a609e) wml_button_bg_pane_g8

0xac1e,	// (0x000a60a6) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x000aa674) wml_button_bg_pane_g

0x165f,	// (0x0009cae7) bg_list_pane_cp02

0xac26,	// (0x000a60ae) mce_header_pane_ParamLimits

0xac26,	// (0x000a60ae) mce_header_pane

0xac3c,	// (0x000a60c4) mce_icon_pane

0xac3c,	// (0x000a60c4) mce_image_pane

0xac45,	// (0x000a60cd) mce_text_pane_ParamLimits

0xac45,	// (0x000a60cd) mce_text_pane

0x1667,	// (0x0009caef) scroll_pane_cp03

0xab3e,	// (0x000a5fc6) scroll_pane_cp04

0xac58,	// (0x000a60e0) scroll_pane_cp05_ParamLimits

0xac58,	// (0x000a60e0) scroll_pane_cp05

0x1671,	// (0x0009caf9) mce_header_field_pane_ParamLimits

0x1671,	// (0x0009caf9) mce_header_field_pane

0x1688,	// (0x0009cb10) mce_header_field_pane_2_ParamLimits

0x1688,	// (0x0009cb10) mce_header_field_pane_2

0x169e,	// (0x0009cb26) mce_header_field_pane_3

0x16a6,	// (0x0009cb2e) list_single_mce_message_pane_ParamLimits

0x16a6,	// (0x0009cb2e) list_single_mce_message_pane

0x16bb,	// (0x0009cb43) list_single_mce_smart_pane_ParamLimits

0x16bb,	// (0x0009cb43) list_single_mce_smart_pane

0xac64,	// (0x000a60ec) input_focus_pane_cp03

0xac6d,	// (0x000a60f5) list_header_data_pane

0x16db,	// (0x0009cb63) mce_header_field_pane_t1

0x16eb,	// (0x0009cb73) list_single_mce_header_pane_ParamLimits

0x16eb,	// (0x0009cb73) list_single_mce_header_pane

0xac75,	// (0x000a60fd) list_single_mce_header_pane_t1

0xac84,	// (0x000a610c) list_single_mce_message_pane_g1

0xac8c,	// (0x000a6114) list_single_mce_message_pane_t1

0x1725,	// (0x0009cbad) bg_cale_heading_pane_cp01_ParamLimits

0x1725,	// (0x0009cbad) bg_cale_heading_pane_cp01

0xac9a,	// (0x000a6122) bg_cale_pane_cp02_ParamLimits

0xac9a,	// (0x000a6122) bg_cale_pane_cp02

0x175f,	// (0x0009cbe7) cale_month_corner_pane

0x177e,	// (0x0009cc06) cale_month_day_heading_pane_ParamLimits

0x177e,	// (0x0009cc06) cale_month_day_heading_pane

0x17d0,	// (0x0009cc58) cale_month_pane_g1_ParamLimits

0x17d0,	// (0x0009cc58) cale_month_pane_g1

0x17ff,	// (0x0009cc87) cale_month_pane_g2_ParamLimits

0x17ff,	// (0x0009cc87) cale_month_pane_g2

0x182f,	// (0x0009ccb7) cale_month_pane_g3_ParamLimits

0x182f,	// (0x0009ccb7) cale_month_pane_g3

0x186b,	// (0x0009ccf3) cale_month_pane_g4_ParamLimits

0x186b,	// (0x0009ccf3) cale_month_pane_g4

0x18a7,	// (0x0009cd2f) cale_month_pane_g5_ParamLimits

0x18a7,	// (0x0009cd2f) cale_month_pane_g5

0x18ef,	// (0x0009cd77) cale_month_pane_g6_ParamLimits

0x18ef,	// (0x0009cd77) cale_month_pane_g6

0x193b,	// (0x0009cdc3) cale_month_pane_g7_ParamLimits

0x193b,	// (0x0009cdc3) cale_month_pane_g7

0x198f,	// (0x0009ce17) cale_month_pane_g8_ParamLimits

0x198f,	// (0x0009ce17) cale_month_pane_g8

0x19e3,	// (0x0009ce6b) cale_month_pane_g9_ParamLimits

0x19e3,	// (0x0009ce6b) cale_month_pane_g9

0x1a35,	// (0x0009cebd) cale_month_pane_g10_ParamLimits

0x1a35,	// (0x0009cebd) cale_month_pane_g10

0x1a87,	// (0x0009cf0f) cale_month_pane_g11_ParamLimits

0x1a87,	// (0x0009cf0f) cale_month_pane_g11

0x1ad9,	// (0x0009cf61) cale_month_pane_g12_ParamLimits

0x1ad9,	// (0x0009cf61) cale_month_pane_g12

0x1b2b,	// (0x0009cfb3) cale_month_pane_g13_ParamLimits

0x1b2b,	// (0x0009cfb3) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x000aa687) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x000aa687) cale_month_pane_g

0x1b7d,	// (0x0009d005) cale_month_week_pane

0x1ba1,	// (0x0009d029) grid_cale_month_pane_ParamLimits

0x1ba1,	// (0x0009d029) grid_cale_month_pane

0x1bea,	// (0x0009d072) cale_month_day_heading_pane_t1

0x1c70,	// (0x0009d0f8) cale_month_day_heading_pane_t2

0x1ce9,	// (0x0009d171) cale_month_day_heading_pane_t3

0x1d62,	// (0x0009d1ea) cale_month_day_heading_pane_t4

0x1de3,	// (0x0009d26b) cale_month_day_heading_pane_t5

0x1e6c,	// (0x0009d2f4) cale_month_day_heading_pane_t6

0x1ef5,	// (0x0009d37d) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x000aa6a2) cale_month_day_heading_pane_t

0xa94b,	// (0x000a5dd3) bg_cale_side_pane_cp01

0x1f86,	// (0x0009d40e) cale_month_week_pane_t1

0x1f9f,	// (0x0009d427) cale_month_week_pane_t2

0x1fb8,	// (0x0009d440) cale_month_week_pane_t3

0x1fd1,	// (0x0009d459) cale_month_week_pane_t4

0x1fea,	// (0x0009d472) cale_month_week_pane_t5

0x2003,	// (0x0009d48b) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x000aa6b1) cale_month_week_pane_t

0x201c,	// (0x0009d4a4) cell_cale_month_pane_ParamLimits

0x201c,	// (0x0009d4a4) cell_cale_month_pane

0xacd9,	// (0x000a6161) cell_cale_month_pane_g1

0x214a,	// (0x0009d5d2) cell_cale_month_pane_t1_ParamLimits

0x214a,	// (0x0009d5d2) cell_cale_month_pane_t1

0xa959,	// (0x000a5de1) grid_highlight_pane_cp08

0xa661,	// (0x000a5ae9) main_smil_g1

0x2176,	// (0x0009d5fe) smil_status_pane

0xace5,	// (0x000a616d) smil_text_pane

0xc70a,	// (0x000a7b92) bg_popup_call3_rect_pane_g8

0xc712,	// (0x000a7b9a) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x000aa94a) bg_popup_call3_rect_pane_g

0xc90f,	// (0x000a7d97) smil_status_volume_pane_g1

0xacef,	// (0x000a6177) smil_status_pane_t1

0xc942,	// (0x000a7dca) volume_smil_pane

0xad06,	// (0x000a618e) list_smil_text_pane

0x2189,	// (0x0009d611) scroll_pane_cp011

0x2194,	// (0x0009d61c) smil_text_list_pane_t1_ParamLimits

0x2194,	// (0x0009d61c) smil_text_list_pane_t1

0xad10,	// (0x000a6198) aid_volume_smil_ParamLimits

0xad10,	// (0x000a6198) aid_volume_smil

0xa661,	// (0x000a5ae9) smil_volume_pane_g1

0xa661,	// (0x000a5ae9) smil_volume_pane_g2

0x0001,

0xf236,	// (0x000aa6be) smil_volume_pane_g

0x0a90,	// (0x0009bf18) listscroll_cale_day_pane

0xad32,	// (0x000a61ba) bg_cale_pane

0xad4a,	// (0x000a61d2) list_cale_pane

0xad6d,	// (0x000a61f5) scroll_pane_cp09

0xad7e,	// (0x000a6206) cale_bg_pane_g1

0xad86,	// (0x000a620e) cale_bg_pane_g2

0xad8e,	// (0x000a6216) cale_bg_pane_g3

0xad96,	// (0x000a621e) cale_bg_pane_g4

0xad9e,	// (0x000a6226) cale_bg_pane_g5

0xada6,	// (0x000a622e) cale_bg_pane_g6

0xadae,	// (0x000a6236) cale_bg_pane_g7

0xadb6,	// (0x000a623e) cale_bg_pane_g8

0xadbe,	// (0x000a6246) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x000aa6c3) cale_bg_pane_g

0x21d0,	// (0x0009d658) list_cale_time_pane_ParamLimits

0x21d0,	// (0x0009d658) list_cale_time_pane

0xadce,	// (0x000a6256) list_cale_time_pane_g1_ParamLimits

0xadce,	// (0x000a6256) list_cale_time_pane_g1

0xadda,	// (0x000a6262) list_cale_time_pane_g2_ParamLimits

0xadda,	// (0x000a6262) list_cale_time_pane_g2

0x21e5,	// (0x0009d66d) list_cale_time_pane_g3_ParamLimits

0x21e5,	// (0x0009d66d) list_cale_time_pane_g3

0x21f3,	// (0x0009d67b) list_cale_time_pane_g4_ParamLimits

0x21f3,	// (0x0009d67b) list_cale_time_pane_g4

0x2201,	// (0x0009d689) list_cale_time_pane_g5_ParamLimits

0x2201,	// (0x0009d689) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x000aa6d6) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x000aa6d6) list_cale_time_pane_g

0xadf4,	// (0x000a627c) list_cale_time_pane_t1_ParamLimits

0xadf4,	// (0x000a627c) list_cale_time_pane_t1

0xae1c,	// (0x000a62a4) list_cale_time_pane_t2_ParamLimits

0xae1c,	// (0x000a62a4) list_cale_time_pane_t2

0x2463,	// (0x0009d8eb) aid_blid_cardinal_pane

0x24a1,	// (0x0009d929) compass_pane_t4

0xae44,	// (0x000a62cc) list_cale_time_pane_t4_ParamLimits

0xae44,	// (0x000a62cc) list_cale_time_pane_t4

0x24af,	// (0x0009d937) compass_pane_t5

0x24bd,	// (0x0009d945) compass_pane_t6

0x24cb,	// (0x0009d953) compass_pane_t7

0xb376,	// (0x000a67fe) navi_pane_cc_t1

0xb565,	// (0x000a69ed) aid_phob_thumbnail_center_pane

0x291c,	// (0x0009dda4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x000aa6e3) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x000aa6e3) list_cale_time_pane_t

0xa045,	// (0x000a54cd) bg_popup_window_pane_cp02_ParamLimits

0xa045,	// (0x000a54cd) bg_popup_window_pane_cp02

0xae6c,	// (0x000a62f4) heading_pane_cp01_ParamLimits

0xae6c,	// (0x000a62f4) heading_pane_cp01

0xae78,	// (0x000a6300) loc_req_pane_ParamLimits

0xae78,	// (0x000a6300) loc_req_pane

0xae88,	// (0x000a6310) loc_type_pane_ParamLimits

0xae88,	// (0x000a6310) loc_type_pane

0xae9a,	// (0x000a6322) loc_type_pane_t1_ParamLimits

0xae9a,	// (0x000a6322) loc_type_pane_t1

0xaeac,	// (0x000a6334) loc_type_pane_t2_ParamLimits

0xaeac,	// (0x000a6334) loc_type_pane_t2

0xaebe,	// (0x000a6346) loc_type_pane_t3_ParamLimits

0xaebe,	// (0x000a6346) loc_type_pane_t3

0x0002,

0xf262,	// (0x000aa6ea) loc_type_pane_t_ParamLimits

0xf262,	// (0x000aa6ea) loc_type_pane_t

0xaed0,	// (0x000a6358) list_loc_req_pane

0xaeda,	// (0x000a6362) scroll_pane_cp012

0x220f,	// (0x0009d697) list_single_loc_request_popup_menu_pane_ParamLimits

0x220f,	// (0x0009d697) list_single_loc_request_popup_menu_pane

0xaee5,	// (0x000a636d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaee5,	// (0x000a636d) list_single_loc_request_popup_menu_pane_g1

0xaef1,	// (0x000a6379) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaef1,	// (0x000a6379) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x000aa6f1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x000aa6f1) list_single_loc_request_popup_menu_pane_g

0xaefd,	// (0x000a6385) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaefd,	// (0x000a6385) list_single_loc_request_popup_menu_pane_t1

0xa649,	// (0x000a5ad1) bg_popup_window_pane_cp03_ParamLimits

0xa649,	// (0x000a5ad1) bg_popup_window_pane_cp03

0xaf13,	// (0x000a639b) heading_loc_req_pane_ParamLimits

0xaf13,	// (0x000a639b) heading_loc_req_pane

0x221c,	// (0x0009d6a4) popup_dyc_status_message_window_g1_ParamLimits

0x221c,	// (0x0009d6a4) popup_dyc_status_message_window_g1

0x2230,	// (0x0009d6b8) popup_dyc_status_message_window_t1_ParamLimits

0x2230,	// (0x0009d6b8) popup_dyc_status_message_window_t1

0x2245,	// (0x0009d6cd) popup_dyc_status_message_window_t2_ParamLimits

0x2245,	// (0x0009d6cd) popup_dyc_status_message_window_t2

0x225a,	// (0x0009d6e2) popup_dyc_status_message_window_t3_ParamLimits

0x225a,	// (0x0009d6e2) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x000aa6f6) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x000aa6f6) popup_dyc_status_message_window_t

0xa3ee,	// (0x000a5876) bg_heading_pane_cp01

0xaf1f,	// (0x000a63a7) heading_loc_req_pane_g1

0xaf27,	// (0x000a63af) heading_loc_req_pane_g2

0xaf2f,	// (0x000a63b7) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x000aa6fd) heading_loc_req_pane_g

0xaf37,	// (0x000a63bf) heading_loc_req_pane_t1

0xaf62,	// (0x000a63ea) bg_popup_sub_pane_cp01_ParamLimits

0xaf62,	// (0x000a63ea) bg_popup_sub_pane_cp01

0xaf70,	// (0x000a63f8) popup_cale_events_window_g1_ParamLimits

0xaf70,	// (0x000a63f8) popup_cale_events_window_g1

0xaf90,	// (0x000a6418) popup_cale_events_window_g2_ParamLimits

0xaf90,	// (0x000a6418) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x000aa71f) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x000aa71f) popup_cale_events_window_g

0xafb0,	// (0x000a6438) popup_cale_events_window_t1_ParamLimits

0xafb0,	// (0x000a6438) popup_cale_events_window_t1

0xafc2,	// (0x000a644a) popup_cale_events_window_t2_ParamLimits

0xafc2,	// (0x000a644a) popup_cale_events_window_t2

0xb000,	// (0x000a6488) popup_cale_events_window_t3_ParamLimits

0xb000,	// (0x000a6488) popup_cale_events_window_t3

0xb03a,	// (0x000a64c2) popup_cale_events_window_t4_ParamLimits

0xb03a,	// (0x000a64c2) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x000aa724) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x000aa724) popup_cale_events_window_t

0x2282,	// (0x0009d70a) call_type_pane

0x2292,	// (0x0009d71a) popup_call_status_window_g1

0x22a6,	// (0x0009d72e) popup_call_status_window_g2

0x22ba,	// (0x0009d742) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x000aa72d) popup_call_status_window_g

0xb070,	// (0x000a64f8) call_type_pane_g1

0xb079,	// (0x000a6501) call_type_pane_g2

0x0001,

0xf2ac,	// (0x000aa734) call_type_pane_g

0xa3ee,	// (0x000a5876) bg_popup_sub_pane_cp02

0xb082,	// (0x000a650a) listscroll_popup_wml_pane

0xb08a,	// (0x000a6512) list_wml_pane

0xb094,	// (0x000a651c) scroll_pane_cp013

0xb09f,	// (0x000a6527) list_single_graphic_popup_wml_pane_ParamLimits

0xb09f,	// (0x000a6527) list_single_graphic_popup_wml_pane

0xa661,	// (0x000a5ae9) list_single_graphic_popup_wml_pane_g1

0xb0b3,	// (0x000a653b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x000aa739) list_single_graphic_popup_wml_pane_g

0xb0bb,	// (0x000a6543) list_single_graphic_popup_wml_pane_t1

0xb0d1,	// (0x000a6559) aid_call_pane

0xa641,	// (0x000a5ac9) popup_clock_analogue_window_g1

0xa641,	// (0x000a5ac9) popup_clock_analogue_window_g2

0xb0d9,	// (0x000a6561) popup_clock_analogue_window_g3

0xb0d9,	// (0x000a6561) popup_clock_analogue_window_g4

0xa661,	// (0x000a5ae9) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x000aa73e) popup_clock_analogue_window_g

0xb0e1,	// (0x000a6569) popup_clock_analogue_window_t1

0xb0ef,	// (0x000a6577) clock_digital_number_pane_ParamLimits

0xb0ef,	// (0x000a6577) clock_digital_number_pane

0xb0fb,	// (0x000a6583) clock_digital_number_pane_cp02_ParamLimits

0xb0fb,	// (0x000a6583) clock_digital_number_pane_cp02

0xb107,	// (0x000a658f) clock_digital_number_pane_cp03_ParamLimits

0xb107,	// (0x000a658f) clock_digital_number_pane_cp03

0xb113,	// (0x000a659b) clock_digital_number_pane_cp04_ParamLimits

0xb113,	// (0x000a659b) clock_digital_number_pane_cp04

0xb123,	// (0x000a65ab) clock_digital_separator_pane_ParamLimits

0xb123,	// (0x000a65ab) clock_digital_separator_pane

0xb12f,	// (0x000a65b7) popup_clock_digital_window_t1

0xa661,	// (0x000a5ae9) clock_digital_number_pane_g1

0xa661,	// (0x000a5ae9) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x000aa6be) clock_digital_number_pane_g

0xa661,	// (0x000a5ae9) clock_digital_separator_pane_g1

0xa661,	// (0x000a5ae9) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x000aa6be) clock_digital_separator_pane_g

0xa3ee,	// (0x000a5876) bg_popup_window_pane_cp04

0xb14c,	// (0x000a65d4) heading_pane_cp03

0xa99d,	// (0x000a5e25) listscroll_popup_gms_pane

0xa3ee,	// (0x000a5876) grid_large_graphic_popup_pane

0xb155,	// (0x000a65dd) listscroll_popup_gms_pane_g1

0xb15e,	// (0x000a65e6) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x000aa749) listscroll_popup_gms_pane_g

0xb167,	// (0x000a65ef) scroll_pane_cp014

0xa6b6,	// (0x000a5b3e) cell_large_graphic_popup_pane_ParamLimits

0xa6b6,	// (0x000a5b3e) cell_large_graphic_popup_pane

0xa6c4,	// (0x000a5b4c) cell_large_graphic_popup_pane_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) cell_large_graphic_popup_pane_g1

0xb170,	// (0x000a65f8) cell_large_graphic_popup_pane_g2_ParamLimits

0xb170,	// (0x000a65f8) cell_large_graphic_popup_pane_g2

0xb17e,	// (0x000a6606) cell_large_graphic_popup_pane_g3_ParamLimits

0xb17e,	// (0x000a6606) cell_large_graphic_popup_pane_g3

0xb18c,	// (0x000a6614) cell_large_graphic_popup_pane_g4_ParamLimits

0xb18c,	// (0x000a6614) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x000aa74e) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x000aa74e) cell_large_graphic_popup_pane_g

0xa3ee,	// (0x000a5876) grid_highlight_pane_cp010

0xa661,	// (0x000a5ae9) bg_popup_call_pane_g1

0xb19d,	// (0x000a6625) list_single_graphic_popup_conf_pane_ParamLimits

0xb19d,	// (0x000a6625) list_single_graphic_popup_conf_pane

0xb1b0,	// (0x000a6638) list_highlight_pane_cp01

0xb1b9,	// (0x000a6641) list_single_graphic_popup_conf_pane_g1

0xb1c1,	// (0x000a6649) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x000aa757) list_single_graphic_popup_conf_pane_g

0xb1c9,	// (0x000a6651) list_single_graphic_popup_conf_pane_t1

0xb1d7,	// (0x000a665f) linegrid_cams_pane_g1

0x22c9,	// (0x0009d751) linegrid_cams_pane_g2

0xa8dc,	// (0x000a5d64) linegrid_cams_pane_g3

0xb1e0,	// (0x000a6668) linegrid_cams_pane_g4

0x22d2,	// (0x0009d75a) linegrid_cams_pane_g5

0x22db,	// (0x0009d763) linegrid_cams_pane_g6

0xa98c,	// (0x000a5e14) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x000aa75c) linegrid_cams_pane_g

0xb1e9,	// (0x000a6671) popup_clock_analogue_window

0xb1e9,	// (0x000a6671) popup_clock_digital_window

0xa3ee,	// (0x000a5876) popup_phob_thumbnail_window

0xa661,	// (0x000a5ae9) call_video_uplink_pane_g1

0xb1f2,	// (0x000a667a) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x000aa76b) call_video_uplink_pane_g

0xb1fa,	// (0x000a6682) video_uplink_pane

0xb202,	// (0x000a668a) mce_image_pane_g1

0x22e6,	// (0x0009d76e) mce_image_pane_g2

0x22f0,	// (0x0009d778) mce_image_pane_g3

0x22f8,	// (0x0009d780) mce_image_pane_g4

0x2300,	// (0x0009d788) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x000aa770) mce_image_pane_g

0xb20c,	// (0x000a6694) control_top_pane_stacon_cp01_ParamLimits

0xb20c,	// (0x000a6694) control_top_pane_stacon_cp01

0xb220,	// (0x000a66a8) uni_indicator_pane_stacon_cp01_ParamLimits

0xb220,	// (0x000a66a8) uni_indicator_pane_stacon_cp01

0xb231,	// (0x000a66b9) bg_popup_sub_pane_cp03

0xb23b,	// (0x000a66c3) chi_dic_find_pane

0x2308,	// (0x0009d790) listscroll_chi_dic_pane

0xb243,	// (0x000a66cb) main_pane_chidic_g1

0xb24b,	// (0x000a66d3) chi_dic_find_pane_t1

0xb259,	// (0x000a66e1) find_chidic_pane

0xb262,	// (0x000a66ea) chi_dic_list_pane_ParamLimits

0xb262,	// (0x000a66ea) chi_dic_list_pane

0xb273,	// (0x000a66fb) scroll_pane_cp020

0xb27b,	// (0x000a6703) find_chidic_pane_t1

0xa3ee,	// (0x000a5876) input_focus_pane_cp06

0x231c,	// (0x0009d7a4) list_chi_dic_pane_ParamLimits

0x231c,	// (0x0009d7a4) list_chi_dic_pane

0x232e,	// (0x0009d7b6) list_chi_dic_pane_t1_ParamLimits

0x232e,	// (0x0009d7b6) list_chi_dic_pane_t1

0xa3ee,	// (0x000a5876) list_highlight_pane_cp020

0xb28a,	// (0x000a6712) bg_cale_heading_pane_g1

0x2341,	// (0x0009d7c9) bg_cale_heading_pane_g2

0x2349,	// (0x0009d7d1) bg_cale_heading_pane_g3

0x2351,	// (0x0009d7d9) bg_cale_heading_pane_g4

0x235b,	// (0x0009d7e3) bg_cale_heading_pane_g5

0x2365,	// (0x0009d7ed) bg_cale_heading_pane_g6

0x236d,	// (0x0009d7f5) bg_cale_heading_pane_g7

0x2375,	// (0x0009d7fd) bg_cale_heading_pane_g8

0x237f,	// (0x0009d807) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x000aa77b) bg_cale_heading_pane_g

0xb28a,	// (0x000a6712) bg_cale_side_pane_g1

0x2389,	// (0x0009d811) bg_cale_side_pane_g2

0x2391,	// (0x0009d819) bg_cale_side_pane_g3

0x2399,	// (0x0009d821) bg_cale_side_pane_g4

0x23a1,	// (0x0009d829) bg_cale_side_pane_g5

0x23a9,	// (0x0009d831) bg_cale_side_pane_g6

0x23b1,	// (0x0009d839) bg_cale_side_pane_g7

0x23b9,	// (0x0009d841) bg_cale_side_pane_g8

0x23c1,	// (0x0009d849) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x000aa78e) bg_cale_side_pane_g

0x23c9,	// (0x0009d851) popup_call_status_window_ParamLimits

0x23c9,	// (0x0009d851) popup_call_status_window

0xb292,	// (0x000a671a) stacon_top_pane

0xb29a,	// (0x000a6722) status_pane_ParamLimits

0xb29a,	// (0x000a6722) status_pane

0xb2af,	// (0x000a6737) status_small_pane

0xb2b7,	// (0x000a673f) control_pane

0xa3ee,	// (0x000a5876) stacon_bottom_pane

0xb2bf,	// (0x000a6747) list_single_mce_smart_pane_t1_ParamLimits

0xb2bf,	// (0x000a6747) list_single_mce_smart_pane_t1

0xb2d2,	// (0x000a675a) list_single_mce_smart_pane_t2_ParamLimits

0xb2d2,	// (0x000a675a) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x000aa7a1) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x000aa7a1) list_single_mce_smart_pane_t

0x2412,	// (0x0009d89a) compass_pane

0x241b,	// (0x0009d8a3) main_location2_pane_t1

0x242d,	// (0x0009d8b5) main_location2_pane_t2

0x243f,	// (0x0009d8c7) main_location2_pane_t3

0x0003,

0xf31e,	// (0x000aa7a6) main_location2_pane_t

0xb2f1,	// (0x000a6779) compass_pane_g1_ParamLimits

0xb2f1,	// (0x000a6779) compass_pane_g1

0x2483,	// (0x0009d90b) compass_pane_t1

0x2492,	// (0x0009d91a) compass_pane_t2

0x0005,

0xf327,	// (0x000aa7af) compass_pane_t

0x24d9,	// (0x0009d961) text_secondary_cp61

0xb36d,	// (0x000a67f5) navi_pane_cams_g5

0xb3e9,	// (0x000a6871) navi_pane_im_t1

0xb3f7,	// (0x000a687f) navi_pane_mp_g1_ParamLimits

0xb3f7,	// (0x000a687f) navi_pane_mp_g1

0xb40b,	// (0x000a6893) navi_pane_mp_g2_ParamLimits

0xb40b,	// (0x000a6893) navi_pane_mp_g2

0xb417,	// (0x000a689f) navi_pane_mp_g3_ParamLimits

0xb417,	// (0x000a689f) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x000aa7c3) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x000aa7c3) navi_pane_mp_g

0xb423,	// (0x000a68ab) navi_pane_mp_t1

0xb431,	// (0x000a68b9) navi_pane_mp_t2

0x0002,

0xf342,	// (0x000aa7ca) navi_pane_mp_t

0xb49c,	// (0x000a6924) navi_pane_vt_g1

0xb423,	// (0x000a68ab) navi_pane_vt_t1

0xb4a4,	// (0x000a692c) navi_slider_pane

0xa99d,	// (0x000a5e25) zooming_pane

0xb4b4,	// (0x000a693c) navi_slider_pane_g1

0xb4bd,	// (0x000a6945) navi_slider_pane_g2

0x0006,

0xf349,	// (0x000aa7d1) navi_slider_pane_g

0xb4ea,	// (0x000a6972) aid_levels_zoom

0xb4f2,	// (0x000a697a) zooming_pane_g1

0xb4fa,	// (0x000a6982) zooming_pane_g2

0xb4fa,	// (0x000a6982) zooming_pane_g3

0x0002,

0xf358,	// (0x000aa7e0) zooming_pane_g

0xb502,	// (0x000a698a) level_10_zoom

0xb50b,	// (0x000a6993) level_11_zoom

0xb514,	// (0x000a699c) level_1_zoom

0xb51d,	// (0x000a69a5) level_2_zoom

0xb526,	// (0x000a69ae) level_3_zoom

0xb52f,	// (0x000a69b7) level_4_zoom

0xb538,	// (0x000a69c0) level_5_zoom

0xb541,	// (0x000a69c9) level_6_zoom

0xb54a,	// (0x000a69d2) level_7_zoom

0xb553,	// (0x000a69db) level_8_zoom

0xb55c,	// (0x000a69e4) level_9_zoom

0xb56d,	// (0x000a69f5) popup_phob_thumbnail_window_g1

0xb575,	// (0x000a69fd) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x000aa7e7) popup_phob_thumbnail_window_g

0x2fc2,	// (0x0009e44a) level_1_location

0x2fca,	// (0x0009e452) level_2_location

0x2fd2,	// (0x0009e45a) level_3_location

0x2fda,	// (0x0009e462) level_4_location

0xa99d,	// (0x000a5e25) level_5_location

0x252a,	// (0x0009d9b2) mce_icon_pane_g1

0x2534,	// (0x0009d9bc) mce_icon_pane_g2

0x0001,

0xf364,	// (0x000aa7ec) mce_icon_pane_g

0xb57d,	// (0x000a6a05) main_mup_pane_g1_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g1

0xb57d,	// (0x000a6a05) main_mup_pane_g2_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g2

0xb57d,	// (0x000a6a05) main_mup_pane_g3_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g3

0xb57d,	// (0x000a6a05) main_mup_pane_g4_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g4

0xb57d,	// (0x000a6a05) main_mup_pane_g5_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g5

0xb57d,	// (0x000a6a05) main_mup_pane_g6_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g6

0xb57d,	// (0x000a6a05) main_mup_pane_g7_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g7

0xb57d,	// (0x000a6a05) main_mup_pane_g8_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g8

0xb57d,	// (0x000a6a05) main_mup_pane_g9_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g9

0xb57d,	// (0x000a6a05) main_mup_pane_g10_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g10

0xb57d,	// (0x000a6a05) main_mup_pane_g11_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g11

0xa6c4,	// (0x000a5b4c) main_mup_pane_g12_ParamLimits

0xa6c4,	// (0x000a5b4c) main_mup_pane_g12

0xb57d,	// (0x000a6a05) main_mup_pane_g13_ParamLimits

0xb57d,	// (0x000a6a05) main_mup_pane_g13

0x000c,

0xf369,	// (0x000aa7f1) main_mup_pane_g_ParamLimits

0xf369,	// (0x000aa7f1) main_mup_pane_g

0xb58b,	// (0x000a6a13) main_mup_pane_t1_ParamLimits

0xb58b,	// (0x000a6a13) main_mup_pane_t1

0xb58b,	// (0x000a6a13) main_mup_pane_t2_ParamLimits

0xb58b,	// (0x000a6a13) main_mup_pane_t2

0xb58b,	// (0x000a6a13) main_mup_pane_t3_ParamLimits

0xb58b,	// (0x000a6a13) main_mup_pane_t3

0xa9af,	// (0x000a5e37) main_mup_pane_t4_ParamLimits

0xa9af,	// (0x000a5e37) main_mup_pane_t4

0xa9af,	// (0x000a5e37) main_mup_pane_t5_ParamLimits

0xa9af,	// (0x000a5e37) main_mup_pane_t5

0xb59f,	// (0x000a6a27) main_mup_pane_t6_ParamLimits

0xb59f,	// (0x000a6a27) main_mup_pane_t6

0x0005,

0xf384,	// (0x000aa80c) main_mup_pane_t_ParamLimits

0xf384,	// (0x000aa80c) main_mup_pane_t

0xa6b6,	// (0x000a5b3e) mup_progress_pane_ParamLimits

0xa6b6,	// (0x000a5b3e) mup_progress_pane

0xb5b3,	// (0x000a6a3b) mup_visualizer_pane_ParamLimits

0xb5b3,	// (0x000a6a3b) mup_visualizer_pane

0xb5b3,	// (0x000a6a3b) mup_volume_pane_ParamLimits

0xb5b3,	// (0x000a6a3b) mup_volume_pane

0xa6d2,	// (0x000a5b5a) mup_visualizer_pane_g1_ParamLimits

0xa6d2,	// (0x000a5b5a) mup_visualizer_pane_g1

0xb5c1,	// (0x000a6a49) mup_visualizer_pane_g2_ParamLimits

0xb5c1,	// (0x000a6a49) mup_visualizer_pane_g2

0xa6c4,	// (0x000a5b4c) mup_visualizer_pane_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x000aa819) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x000aa819) mup_visualizer_pane_g

0xa9dd,	// (0x000a5e65) mup_volume_pane_g1

0xa9dd,	// (0x000a5e65) mup_volume_pane_g2

0x0001,

0xf398,	// (0x000aa820) mup_volume_pane_g

0xa9dd,	// (0x000a5e65) mup_progress_pane_g1

0xa9dd,	// (0x000a5e65) mup_progress_pane_g2

0xa9dd,	// (0x000a5e65) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x000aa825) mup_progress_pane_g

0xa3ee,	// (0x000a5876) bg_popup_window_pane_cp05

0xb5cf,	// (0x000a6a57) heading_pane_cp02_ParamLimits

0xb5cf,	// (0x000a6a57) heading_pane_cp02

0xb5e9,	// (0x000a6a71) list_popup_blid_pane

0xb5f1,	// (0x000a6a79) list_blid_sat_info_pane_ParamLimits

0xb5f1,	// (0x000a6a79) list_blid_sat_info_pane

0xb604,	// (0x000a6a8c) list_blid_sat_info_pane_g1

0xb60c,	// (0x000a6a94) list_blid_sat_info_pane_t1

0x2634,	// (0x0009dabc) mup_equalizer_pane_ParamLimits

0x2634,	// (0x0009dabc) mup_equalizer_pane

0x264d,	// (0x0009dad5) mup_equalizer_pane_cp1_ParamLimits

0x264d,	// (0x0009dad5) mup_equalizer_pane_cp1

0x266a,	// (0x0009daf2) mup_equalizer_pane_cp2_ParamLimits

0x266a,	// (0x0009daf2) mup_equalizer_pane_cp2

0x2687,	// (0x0009db0f) mup_equalizer_pane_cp3_ParamLimits

0x2687,	// (0x0009db0f) mup_equalizer_pane_cp3

0x26a8,	// (0x0009db30) mup_equalizer_pane_cp4_ParamLimits

0x26a8,	// (0x0009db30) mup_equalizer_pane_cp4

0x26c9,	// (0x0009db51) mup_equalizer_pane_cp5

0x26dd,	// (0x0009db65) mup_equalizer_pane_cp6

0x26f1,	// (0x0009db79) mup_equalizer_pane_cp7

0xc78a,	// (0x000a7c12) bg_popup_call_poc_act_pane_g9

0xc792,	// (0x000a7c1a) bg_popup_call_poc_act_pane_g10

0xc79a,	// (0x000a7c22) bg_popup_call_poc_act_pane_g11

0x000a,

0xa649,	// (0x000a5ad1) mup_scale_pane

0xa661,	// (0x000a5ae9) mup_scale_pane_g1

0xb61a,	// (0x000a6aa2) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x000aa841) mup_scale_pane_g

0xb63e,	// (0x000a6ac6) msg_data_pane

0xb646,	// (0x000a6ace) scroll_pane_cp017

0x2717,	// (0x0009db9f) bg_list_pane_cp04_ParamLimits

0x2717,	// (0x0009db9f) bg_list_pane_cp04

0xb64e,	// (0x000a6ad6) msg_data_pane_g1

0x2737,	// (0x0009dbbf) msg_data_pane_g2

0x2741,	// (0x0009dbc9) msg_data_pane_g3

0x2749,	// (0x0009dbd1) msg_data_pane_g4

0x2751,	// (0x0009dbd9) msg_data_pane_g5

0x2759,	// (0x0009dbe1) msg_data_pane_g6

0x2761,	// (0x0009dbe9) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x000aa850) msg_data_pane_g

0x2769,	// (0x0009dbf1) msg_text_pane_ParamLimits

0x2769,	// (0x0009dbf1) msg_text_pane

0x2792,	// (0x0009dc1a) qrid_highlight_pane_cp011_ParamLimits

0x2792,	// (0x0009dc1a) qrid_highlight_pane_cp011

0xa3ee,	// (0x000a5876) msg_body_pane

0xa3ee,	// (0x000a5876) msg_header_pane

0xb65f,	// (0x000a6ae7) input_focus_pane_cp07

0x27b6,	// (0x0009dc3e) msg_header_pane_t1_ParamLimits

0x27b6,	// (0x0009dc3e) msg_header_pane_t1

0x27cc,	// (0x0009dc54) msg_header_pane_t2_ParamLimits

0x27cc,	// (0x0009dc54) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x000aa864) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x000aa864) msg_header_pane_t

0xb674,	// (0x000a6afc) msg_body_pane_g1

0x27e3,	// (0x0009dc6b) msg_body_pane_t1_ParamLimits

0x27e3,	// (0x0009dc6b) msg_body_pane_t1

0x2814,	// (0x0009dc9c) msg_body_pane_t2_ParamLimits

0x2814,	// (0x0009dc9c) msg_body_pane_t2

0x2826,	// (0x0009dcae) msg_body_pane_t3_ParamLimits

0x2826,	// (0x0009dcae) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x000aa869) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x000aa869) msg_body_pane_t

0x2872,	// (0x0009dcfa) main_viewer_pane_g1_ParamLimits

0x2872,	// (0x0009dcfa) main_viewer_pane_g1

0x2880,	// (0x0009dd08) main_viewer_pane_g2_ParamLimits

0x2880,	// (0x0009dd08) main_viewer_pane_g2

0x288e,	// (0x0009dd16) main_viewer_pane_g3_ParamLimits

0x288e,	// (0x0009dd16) main_viewer_pane_g3

0x289d,	// (0x0009dd25) main_viewer_pane_g4_ParamLimits

0x289d,	// (0x0009dd25) main_viewer_pane_g4

0xb694,	// (0x000a6b1c) main_viewer_pane_g5_ParamLimits

0xb694,	// (0x000a6b1c) main_viewer_pane_g5

0xb694,	// (0x000a6b1c) main_viewer_pane_g7_ParamLimits

0xb694,	// (0x000a6b1c) main_viewer_pane_g7

0xaee5,	// (0x000a636d) main_viewer_pane_g8_ParamLimits

0xaee5,	// (0x000a636d) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x000aa879) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x000aa879) main_viewer_pane_g

0xb6b2,	// (0x000a6b3a) viewer_content_pane_ParamLimits

0xb6b2,	// (0x000a6b3a) viewer_content_pane

0x28d9,	// (0x0009dd61) main_postcard_pane_g1_ParamLimits

0x28d9,	// (0x0009dd61) main_postcard_pane_g1

0x28ef,	// (0x0009dd77) main_postcard_pane_g2_ParamLimits

0x28ef,	// (0x0009dd77) main_postcard_pane_g2

0x2905,	// (0x0009dd8d) main_postcard_pane_g3_ParamLimits

0x2905,	// (0x0009dd8d) main_postcard_pane_g3

0x0005,

0xf402,	// (0x000aa88a) main_postcard_pane_g_ParamLimits

0xf402,	// (0x000aa88a) main_postcard_pane_g

0x291c,	// (0x0009dda4) main_postcard_pane_g4

0xc922,	// (0x000a7daa) smil_status_volume_pane_g2

0x295f,	// (0x0009dde7) postcard_pane_ParamLimits

0x295f,	// (0x0009dde7) postcard_pane

0xb6c0,	// (0x000a6b48) postcard_pane_g1_ParamLimits

0xb6c0,	// (0x000a6b48) postcard_pane_g1

0x29a1,	// (0x0009de29) postcard_pane_g2_ParamLimits

0x29a1,	// (0x0009de29) postcard_pane_g2

0x29ad,	// (0x0009de35) postcard_pane_g3_ParamLimits

0x29ad,	// (0x0009de35) postcard_pane_g3

0xb6ce,	// (0x000a6b56) postcard_pane_g4_ParamLimits

0xb6ce,	// (0x000a6b56) postcard_pane_g4

0x29b9,	// (0x0009de41) postcard_pane_g5_ParamLimits

0x29b9,	// (0x0009de41) postcard_pane_g5

0x29ce,	// (0x0009de56) postcard_pane_g6_ParamLimits

0x29ce,	// (0x0009de56) postcard_pane_g6

0xb6c0,	// (0x000a6b48) postcard_pane_g7_ParamLimits

0xb6c0,	// (0x000a6b48) postcard_pane_g7

0x0006,

0xf40f,	// (0x000aa897) postcard_pane_g_ParamLimits

0xf40f,	// (0x000aa897) postcard_pane_g

0x29e2,	// (0x0009de6a) main_mp2_pane_g1_ParamLimits

0x29e2,	// (0x0009de6a) main_mp2_pane_g1

0x29ee,	// (0x0009de76) main_mp2_pane_g2_ParamLimits

0x29ee,	// (0x0009de76) main_mp2_pane_g2

0x29fa,	// (0x0009de82) main_mp2_pane_g3_ParamLimits

0x29fa,	// (0x0009de82) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x000aa8a6) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x000aa8a6) main_mp2_pane_g

0x2a06,	// (0x0009de8e) main_mp2_pane_t1_ParamLimits

0x2a06,	// (0x0009de8e) main_mp2_pane_t1

0x2a1b,	// (0x0009dea3) main_mp2_pane_t2_ParamLimits

0x2a1b,	// (0x0009dea3) main_mp2_pane_t2

0x2a2d,	// (0x0009deb5) main_mp2_pane_t3_ParamLimits

0x2a2d,	// (0x0009deb5) main_mp2_pane_t3

0x0002,

0xf425,	// (0x000aa8ad) main_mp2_pane_t_ParamLimits

0xf425,	// (0x000aa8ad) main_mp2_pane_t

0xb6dc,	// (0x000a6b64) pec_content_pane_ParamLimits

0xb6dc,	// (0x000a6b64) pec_content_pane

0xab3e,	// (0x000a5fc6) scroll_pane_cp015

0xb6ee,	// (0x000a6b76) pec_attribute_pane_ParamLimits

0xb6ee,	// (0x000a6b76) pec_attribute_pane

0x2a3f,	// (0x0009dec7) pec_content_pane_g1_ParamLimits

0x2a3f,	// (0x0009dec7) pec_content_pane_g1

0xb6fe,	// (0x000a6b86) pec_content_pane_t1_ParamLimits

0xb6fe,	// (0x000a6b86) pec_content_pane_t1

0xb710,	// (0x000a6b98) pec_content_pane_t2_ParamLimits

0xb710,	// (0x000a6b98) pec_content_pane_t2

0x0001,

0xf42c,	// (0x000aa8b4) pec_content_pane_t_ParamLimits

0xf42c,	// (0x000aa8b4) pec_content_pane_t

0x2a4b,	// (0x0009ded3) list_single_graphic_pane_cp01_ParamLimits

0x2a4b,	// (0x0009ded3) list_single_graphic_pane_cp01

0xa649,	// (0x000a5ad1) bg_popup_sub_pane_cp04

0xb722,	// (0x000a6baa) popup_mup_playback_window_g1

0xb72e,	// (0x000a6bb6) popup_mup_playback_window_t1

0xb743,	// (0x000a6bcb) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x000aa8b9) popup_mup_playback_window_t

0xb77a,	// (0x000a6c02) main_image_pane_g1_ParamLimits

0xb77a,	// (0x000a6c02) main_image_pane_g1

0xb7bd,	// (0x000a6c45) scroll_pane_cp018_ParamLimits

0xb7bd,	// (0x000a6c45) scroll_pane_cp018

0xb7d5,	// (0x000a6c5d) scroll_pane_cp016_ParamLimits

0xb7d5,	// (0x000a6c5d) scroll_pane_cp016

0x2b18,	// (0x0009dfa0) smil2_image_pane_ParamLimits

0x2b18,	// (0x0009dfa0) smil2_image_pane

0x2b48,	// (0x0009dfd0) smil2_root_pane_ParamLimits

0x2b48,	// (0x0009dfd0) smil2_root_pane

0x2b80,	// (0x0009e008) smil2_text_pane_ParamLimits

0x2b80,	// (0x0009e008) smil2_text_pane

0xa3ee,	// (0x000a5876) bg_list_pane_cp06

0xb811,	// (0x000a6c99) grid_radio_pane

0xa3ee,	// (0x000a5876) bg_popup_window_pane_cp06

0xb819,	// (0x000a6ca1) main_fmradio_pane_t1

0xc7a2,	// (0x000a7c2a) heading_pane_cp04

0xb827,	// (0x000a6caf) main_fmradio_pane_t2

0xc7aa,	// (0x000a7c32) popup_cale_lunar_info_window_g1

0xb835,	// (0x000a6cbd) main_fmradio_pane_t3

0xc7b2,	// (0x000a7c3a) popup_cale_lunar_info_window_g2

0xb843,	// (0x000a6ccb) main_fmradio_pane_t4

0x0001,

0xb851,	// (0x000a6cd9) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x000aa999) popup_cale_lunar_info_window_g

0xf446,	// (0x000aa8ce) main_fmradio_pane_t

0xb85f,	// (0x000a6ce7) wait_bar_pane_cp03

0xb867,	// (0x000a6cef) cell_fmradio_pane_ParamLimits

0xb867,	// (0x000a6cef) cell_fmradio_pane

0xb6c0,	// (0x000a6b48) cell_fmradio_pane_g1_ParamLimits

0xb6c0,	// (0x000a6b48) cell_fmradio_pane_g1

0xa3ee,	// (0x000a5876) grid_highlight_pane_cp011

0xb87a,	// (0x000a6d02) poc_content_pane_ParamLimits

0xb87a,	// (0x000a6d02) poc_content_pane

0xb88c,	// (0x000a6d14) scroll_pane_cp019

0x2c00,	// (0x0009e088) popup_call_poc_act_window_ParamLimits

0x2c00,	// (0x0009e088) popup_call_poc_act_window

0x2c24,	// (0x0009e0ac) popup_call_poc_inact_window_ParamLimits

0x2c24,	// (0x0009e0ac) popup_call_poc_inact_window

0xf4e8,	// (0x000aa970) bg_popup_call_poc_act_pane_g

0xc71a,	// (0x000a7ba2) bg_popup_call_poc_inact_pane_g1

0xc722,	// (0x000a7baa) bg_popup_call_poc_inact_pane_g2

0xb894,	// (0x000a6d1c) popup_call_poc_act_window_g2

0xc72a,	// (0x000a7bb2) bg_popup_call_poc_inact_pane_g3

0xc732,	// (0x000a7bba) bg_popup_call_poc_inact_pane_g4

0xc73a,	// (0x000a7bc2) bg_popup_call_poc_inact_pane_g5

0xb89c,	// (0x000a6d24) popup_call_poc_act_window_t1_ParamLimits

0xb89c,	// (0x000a6d24) popup_call_poc_act_window_t1

0xb8c4,	// (0x000a6d4c) popup_call_poc_act_window_t2_ParamLimits

0xb8c4,	// (0x000a6d4c) popup_call_poc_act_window_t2

0xb8ec,	// (0x000a6d74) popup_call_poc_act_window_t3_ParamLimits

0xb8ec,	// (0x000a6d74) popup_call_poc_act_window_t3

0xb914,	// (0x000a6d9c) popup_call_poc_act_window_t4_ParamLimits

0xb914,	// (0x000a6d9c) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x000aa8d9) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x000aa8d9) popup_call_poc_act_window_t

0xc742,	// (0x000a7bca) bg_popup_call_poc_inact_pane_g6

0xc74a,	// (0x000a7bd2) bg_popup_call_poc_inact_pane_g7

0xc752,	// (0x000a7bda) bg_popup_call_poc_inact_pane_g8

0xb926,	// (0x000a6dae) popup_call_poc_inact_window_g2

0xc75a,	// (0x000a7be2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x000aa95d) bg_popup_call_poc_inact_pane_g

0xb92e,	// (0x000a6db6) popup_call_poc_inact_window_t1_ParamLimits

0xb92e,	// (0x000a6db6) popup_call_poc_inact_window_t1

0xb943,	// (0x000a6dcb) popup_call_poc_inact_window_t2_ParamLimits

0xb943,	// (0x000a6dcb) popup_call_poc_inact_window_t2

0xb958,	// (0x000a6de0) popup_call_poc_inact_window_t3_ParamLimits

0xb958,	// (0x000a6de0) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x000aa8e2) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x000aa8e2) popup_call_poc_inact_window_t

0xc89a,	// (0x000a7d22) context_pane_ParamLimits

0x34a6,	// (0x0009e92e) signal_pane_ParamLimits

0xa99d,	// (0x000a5e25) main_call2_pane

0xc873,	// (0x000a7cfb) popup_phob_thumbnail2_window_ParamLimits

0xc873,	// (0x000a7cfb) popup_phob_thumbnail2_window

0xb67c,	// (0x000a6b04) aid_hotspot_pointer_arrow_pane

0xb684,	// (0x000a6b0c) aid_hotspot_pointer_hand_pane

0x2f8c,	// (0x0009e414) phob_pre_status_pane_g5

0x076c,	// (0x0009bbf4) cams_zoom_pane_ParamLimits

0x076c,	// (0x0009bbf4) image_vga_pane_ParamLimits

0xa6c4,	// (0x000a5b4c) main_camera_pane_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) main_camera_pane_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) main_camera_pane_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) main_camera_pane_g4_ParamLimits

0xa6c4,	// (0x000a5b4c) main_camera_pane_g5_ParamLimits

0xa6c4,	// (0x000a5b4c) main_camera_pane_g6_ParamLimits

0xa6c4,	// (0x000a5b4c) main_camera_pane_g7_ParamLimits

0xf185,	// (0x000aa60d) main_camera_pane_g_ParamLimits

0xa9af,	// (0x000a5e37) main_camera_pane_t1_ParamLimits

0xa9af,	// (0x000a5e37) main_camera_pane_t2_ParamLimits

0xf196,	// (0x000aa61e) main_camera_pane_t_ParamLimits

0xa649,	// (0x000a5ad1) bg_popup_preview_window_pane_cp01_ParamLimits

0xa649,	// (0x000a5ad1) bg_popup_preview_window_pane_cp01

0xb96d,	// (0x000a6df5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb96d,	// (0x000a6df5) popup_phob_thumbnail2_window_g1

0xa3ee,	// (0x000a5876) call2_cli_visual_pane

0x2c58,	// (0x0009e0e0) popup_call2_audio_conf_window_ParamLimits

0x2c58,	// (0x0009e0e0) popup_call2_audio_conf_window

0x2c78,	// (0x0009e100) popup_call2_audio_first_window_ParamLimits

0x2c78,	// (0x0009e100) popup_call2_audio_first_window

0x2d0e,	// (0x0009e196) popup_call2_audio_in_window_ParamLimits

0x2d0e,	// (0x0009e196) popup_call2_audio_in_window

0x2d56,	// (0x0009e1de) popup_call2_audio_out_window_ParamLimits

0x2d56,	// (0x0009e1de) popup_call2_audio_out_window

0x2dc0,	// (0x0009e248) popup_call2_audio_second_window_ParamLimits

0x2dc0,	// (0x0009e248) popup_call2_audio_second_window

0x2e26,	// (0x0009e2ae) popup_call2_audio_wait_window_ParamLimits

0x2e26,	// (0x0009e2ae) popup_call2_audio_wait_window

0xa3ee,	// (0x000a5876) bg_popup_call2_act_pane_cp03

0xa62b,	// (0x000a5ab3) list_conf_pane_cp

0xb979,	// (0x000a6e01) popup_call2_audio_conf_window_t1

0xb19d,	// (0x000a6625) list_single_graphic_popup_conf2_pane_ParamLimits

0xb19d,	// (0x000a6625) list_single_graphic_popup_conf2_pane

0xb1b0,	// (0x000a6638) list_highlight_pane_cp04

0xb987,	// (0x000a6e0f) list_single_graphic_popup_conf2_pane_g1

0xb1c1,	// (0x000a6649) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x000aa8e9) list_single_graphic_popup_conf2_pane_g

0xb991,	// (0x000a6e19) list_single_graphic_popup_conf2_pane_t1

0xb99f,	// (0x000a6e27) bg_popup_call2_act_pane_cp01_ParamLimits

0xb99f,	// (0x000a6e27) bg_popup_call2_act_pane_cp01

0xba29,	// (0x000a6eb1) call_type_pane_cp05_ParamLimits

0xba29,	// (0x000a6eb1) call_type_pane_cp05

0xba7d,	// (0x000a6f05) popup_call2_audio_second_window_g1_ParamLimits

0xba7d,	// (0x000a6f05) popup_call2_audio_second_window_g1

0xbad1,	// (0x000a6f59) popup_call2_audio_second_window_g2_ParamLimits

0xbad1,	// (0x000a6f59) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x000aa8ee) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x000aa8ee) popup_call2_audio_second_window_g

0xbb36,	// (0x000a6fbe) popup_call2_audio_second_window_t1_ParamLimits

0xbb36,	// (0x000a6fbe) popup_call2_audio_second_window_t1

0xbbf1,	// (0x000a7079) popup_call2_audio_second_window_t2_ParamLimits

0xbbf1,	// (0x000a7079) popup_call2_audio_second_window_t2

0xbc44,	// (0x000a70cc) popup_call2_audio_second_window_t3_ParamLimits

0xbc44,	// (0x000a70cc) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x000aa8f5) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x000aa8f5) popup_call2_audio_second_window_t

0xa3ee,	// (0x000a5876) bg_popup_call2_in_pane_cp02

0xa3f8,	// (0x000a5880) call_type_pane_cp04

0x2e60,	// (0x0009e2e8) popup_call2_audio_wait_window_g1

0x2e68,	// (0x0009e2f0) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x000aa8fe) popup_call2_audio_wait_window_g

0xa410,	// (0x000a5898) popup_call2_audio_wait_window_t3

0xbd37,	// (0x000a71bf) bg_popup_call2_act_pane_ParamLimits

0xbd37,	// (0x000a71bf) bg_popup_call2_act_pane

0xbdf7,	// (0x000a727f) call_type_pane_cp03_ParamLimits

0xbdf7,	// (0x000a727f) call_type_pane_cp03

0xbe5b,	// (0x000a72e3) popup_call2_audio_first_window_g1_ParamLimits

0xbe5b,	// (0x000a72e3) popup_call2_audio_first_window_g1

0xbecb,	// (0x000a7353) popup_call2_audio_first_window_g2_ParamLimits

0xbecb,	// (0x000a7353) popup_call2_audio_first_window_g2

0xbf2f,	// (0x000a73b7) popup_call2_audio_first_window_g3_ParamLimits

0xbf2f,	// (0x000a73b7) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x000aa903) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x000aa903) popup_call2_audio_first_window_g

0xbfb7,	// (0x000a743f) popup_call2_audio_first_window_t1_ParamLimits

0xbfb7,	// (0x000a743f) popup_call2_audio_first_window_t1

0xc0ba,	// (0x000a7542) popup_call2_audio_first_window_t4_ParamLimits

0xc0ba,	// (0x000a7542) popup_call2_audio_first_window_t4

0xc19d,	// (0x000a7625) popup_call2_audio_first_window_t5_ParamLimits

0xc19d,	// (0x000a7625) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x000aa90e) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x000aa90e) popup_call2_audio_first_window_t

0xa641,	// (0x000a5ac9) bg_popup_call2_act_pane_g1

0xc7ba,	// (0x000a7c42) popup_cale_lunar_info_window_t1

0xc7c8,	// (0x000a7c50) popup_cale_lunar_info_window_t2

0xc7d6,	// (0x000a7c5e) popup_cale_lunar_info_window_t3

0xa3ee,	// (0x000a5876) bg_popup_call2_bubble_pane

0xc29e,	// (0x000a7726) bg_popup_call2_in_pane_cp01_ParamLimits

0xc29e,	// (0x000a7726) bg_popup_call2_in_pane_cp01

0xa0ca,	// (0x000a5552) call_type_pane_cp02

0x2e70,	// (0x0009e2f8) popup_call2_audio_out_window_g1_ParamLimits

0x2e70,	// (0x0009e2f8) popup_call2_audio_out_window_g1

0xc2e6,	// (0x000a776e) popup_call2_audio_out_window_g2_ParamLimits

0xc2e6,	// (0x000a776e) popup_call2_audio_out_window_g2

0x2e9c,	// (0x0009e324) popup_call2_audio_out_window_g3_ParamLimits

0x2e9c,	// (0x0009e324) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x000aa917) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x000aa917) popup_call2_audio_out_window_g

0xc31d,	// (0x000a77a5) popup_call2_audio_out_window_t1_ParamLimits

0xc31d,	// (0x000a77a5) popup_call2_audio_out_window_t1

0xc37c,	// (0x000a7804) popup_call2_audio_out_window_t2_ParamLimits

0xc37c,	// (0x000a7804) popup_call2_audio_out_window_t2

0xc3d0,	// (0x000a7858) popup_call2_audio_out_window_t3_ParamLimits

0xc3d0,	// (0x000a7858) popup_call2_audio_out_window_t3

0xc3e6,	// (0x000a786e) popup_call2_audio_out_window_t4_ParamLimits

0xc3e6,	// (0x000a786e) popup_call2_audio_out_window_t4

0xc3fc,	// (0x000a7884) popup_call2_audio_out_window_t5_ParamLimits

0xc3fc,	// (0x000a7884) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x000aa920) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x000aa920) popup_call2_audio_out_window_t

0xc460,	// (0x000a78e8) bg_popup_call2_in_pane_ParamLimits

0xc460,	// (0x000a78e8) bg_popup_call2_in_pane

0xc4bc,	// (0x000a7944) popup_call2_audio_in_window_g1_ParamLimits

0xc4bc,	// (0x000a7944) popup_call2_audio_in_window_g1

0xc4f4,	// (0x000a797c) popup_call2_audio_in_window_g2_ParamLimits

0xc4f4,	// (0x000a797c) popup_call2_audio_in_window_g2

0xc52c,	// (0x000a79b4) popup_call2_audio_in_window_g3_ParamLimits

0xc52c,	// (0x000a79b4) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x000aa92d) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x000aa92d) popup_call2_audio_in_window_g

0xc584,	// (0x000a7a0c) popup_call2_audio_in_window_t1_ParamLimits

0xc584,	// (0x000a7a0c) popup_call2_audio_in_window_t1

0xc604,	// (0x000a7a8c) popup_call2_audio_in_window_t2_ParamLimits

0xc604,	// (0x000a7a8c) popup_call2_audio_in_window_t2

0xc684,	// (0x000a7b0c) popup_call2_audio_in_window_t3_ParamLimits

0xc684,	// (0x000a7b0c) popup_call2_audio_in_window_t3

0xc69e,	// (0x000a7b26) popup_call2_audio_in_window_t4_ParamLimits

0xc69e,	// (0x000a7b26) popup_call2_audio_in_window_t4

0xc6b0,	// (0x000a7b38) popup_call2_audio_in_window_t5_ParamLimits

0xc6b0,	// (0x000a7b38) popup_call2_audio_in_window_t5

0xc6c5,	// (0x000a7b4d) popup_call2_audio_in_window_t6_ParamLimits

0xc6c5,	// (0x000a7b4d) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x000aa936) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x000aa936) popup_call2_audio_in_window_t

0xa641,	// (0x000a5ac9) bg_popup_call2_in_pane_g1

0xc7e4,	// (0x000a7c6c) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x000aa99e) popup_cale_lunar_info_window_t

0xa649,	// (0x000a5ad1) bg_popup_call2_rect_pane_ParamLimits

0xa649,	// (0x000a5ad1) bg_popup_call2_rect_pane

0xa3ee,	// (0x000a5876) call2_cli_visual_graphic_pane

0xa3ee,	// (0x000a5876) call2_cli_visual_text_pane

0xc935,	// (0x000a7dbd) smil_status_volume_pane_g3

0x0002,

0xa661,	// (0x000a5ae9) call2_cli_visual_graphic_pane_g1

0xa661,	// (0x000a5ae9) call2_cli_visual_graphic_pane_g2

0xa661,	// (0x000a5ae9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x000aa943) call2_cli_visual_graphic_pane_g

0xc6da,	// (0x000a7b62) bg_popup_call2_rect_pane_g1

0xa85c,	// (0x000a5ce4) bg_popup_call2_rect_pane_g2

0xc6e2,	// (0x000a7b6a) bg_popup_call2_rect_pane_g3

0xc6ea,	// (0x000a7b72) bg_popup_call2_rect_pane_g4

0xc6f2,	// (0x000a7b7a) bg_popup_call2_rect_pane_g5

0xc6fa,	// (0x000a7b82) bg_popup_call2_rect_pane_g6

0xc702,	// (0x000a7b8a) bg_popup_call2_rect_pane_g7

0xc70a,	// (0x000a7b92) bg_popup_call2_rect_pane_g8

0xc712,	// (0x000a7b9a) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x000aa94a) bg_popup_call2_rect_pane_g

0xc71a,	// (0x000a7ba2) bg_popup_call2_bubble_pane_g1

0xc722,	// (0x000a7baa) bg_popup_call2_bubble_pane_g2

0xc72a,	// (0x000a7bb2) bg_popup_call2_bubble_pane_g3

0xc732,	// (0x000a7bba) bg_popup_call2_bubble_pane_g4

0xc73a,	// (0x000a7bc2) bg_popup_call2_bubble_pane_g5

0xc742,	// (0x000a7bca) bg_popup_call2_bubble_pane_g6

0xc74a,	// (0x000a7bd2) bg_popup_call2_bubble_pane_g7

0xc752,	// (0x000a7bda) bg_popup_call2_bubble_pane_g8

0xc75a,	// (0x000a7be2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x000aa95d) bg_popup_call2_bubble_pane_g

0x0aa2,	// (0x0009bf2a) aid_cale_week_size_cell_pane

0x1048,	// (0x0009c4d0) aid_cams_cif_uncrop_pane_ParamLimits

0x1048,	// (0x0009c4d0) aid_cams_cif_uncrop_pane

0x119e,	// (0x0009c626) aid_cams_size_cell_ParamLimits

0x119e,	// (0x0009c626) aid_cams_size_cell

0x11b2,	// (0x0009c63a) grid_cams_pane_ParamLimits

0x11cc,	// (0x0009c654) linegrid_cams_pane_ParamLimits

0x12b3,	// (0x0009c73b) call_video_pane_t1

0x12d1,	// (0x0009c759) call_video_pane_t2

0x0001,

0xf1e2,	// (0x000aa66a) call_video_pane_t

0x16ff,	// (0x0009cb87) aid_cale_month_size_cell_pane_ParamLimits

0x16ff,	// (0x0009cb87) aid_cale_month_size_cell_pane

0xf55a,	// (0x000aa9e2) smil_status_volume_pane_g

0xc942,	// (0x000a7dca) volume_smil_pane_ParamLimits

0x9f7e,	// (0x000a5406) aid_popup2_width_pane

0x0a19,	// (0x0009bea1) cell_qdial_pane_g4_ParamLimits

0x0a19,	// (0x0009bea1) cell_qdial_pane_g4

0x2463,	// (0x0009d8eb) aid_blid_cardinal_pane_ParamLimits

0x246f,	// (0x0009d8f7) aid_blid_destination_pane_ParamLimits

0x246f,	// (0x0009d8f7) aid_blid_destination_pane

0xa649,	// (0x000a5ad1) bg_popup_call_poc_act_pane_ParamLimits

0xa649,	// (0x000a5ad1) bg_popup_call_poc_act_pane

0xa649,	// (0x000a5ad1) bg_popup_call_poc_inact_pane_ParamLimits

0xa649,	// (0x000a5ad1) bg_popup_call_poc_inact_pane

0xc762,	// (0x000a7bea) bg_popup_call_poc_act_pane_g1

0xc76a,	// (0x000a7bf2) bg_popup_call_poc_act_pane_g2

0xc772,	// (0x000a7bfa) bg_popup_call_poc_act_pane_g3

0xc732,	// (0x000a7bba) bg_popup_call_poc_act_pane_g4

0xc73a,	// (0x000a7bc2) bg_popup_call_poc_act_pane_g5

0xc77a,	// (0x000a7c02) bg_popup_call_poc_act_pane_g6

0xc74a,	// (0x000a7bd2) bg_popup_call_poc_act_pane_g7

0xc782,	// (0x000a7c0a) bg_popup_call_poc_act_pane_g8

0xa3ee,	// (0x000a5876) main_usb_pane

0xc84e,	// (0x000a7cd6) popup_cale_lunar_info_window

0x15ab,	// (0x0009ca33) im_reading_pane_t1_ParamLimits

0xaa96,	// (0x000a5f1e) list_im_pane_ParamLimits

0xaaa7,	// (0x000a5f2f) scroll_pane_cp07_ParamLimits

0xa3ee,	// (0x000a5876) grid_highlight_pane_cp012

0xa649,	// (0x000a5ad1) mup_scale_pane_ParamLimits

0xb6c0,	// (0x000a6b48) main_usb_pane_g1_ParamLimits

0xb6c0,	// (0x000a6b48) main_usb_pane_g1

0x2eea,	// (0x0009e372) main_usb_pane_g2_ParamLimits

0x2eea,	// (0x0009e372) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x000aa987) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x000aa987) main_usb_pane_g

0x2f00,	// (0x0009e388) main_usb_pane_t1_ParamLimits

0x2f00,	// (0x0009e388) main_usb_pane_t1

0x2f12,	// (0x0009e39a) main_usb_pane_t2_ParamLimits

0x2f12,	// (0x0009e39a) main_usb_pane_t2

0x2f24,	// (0x0009e3ac) main_usb_pane_t3_ParamLimits

0x2f24,	// (0x0009e3ac) main_usb_pane_t3

0x2f36,	// (0x0009e3be) main_usb_pane_t4_ParamLimits

0x2f36,	// (0x0009e3be) main_usb_pane_t4

0x2f48,	// (0x0009e3d0) main_usb_pane_t5_ParamLimits

0x2f48,	// (0x0009e3d0) main_usb_pane_t5

0x2f5a,	// (0x0009e3e2) main_usb_pane_t6_ParamLimits

0x2f5a,	// (0x0009e3e2) main_usb_pane_t6

0x0005,

0xf504,	// (0x000aa98c) main_usb_pane_t_ParamLimits

0x2412,	// (0x0009d89a) aid_text_placing

0x241b,	// (0x0009d8a3) main_location2_pane_t1_ParamLimits

0x242d,	// (0x0009d8b5) main_location2_pane_t2_ParamLimits

0x243f,	// (0x0009d8c7) main_location2_pane_t3_ParamLimits

0x2451,	// (0x0009d8d9) main_location2_pane_t4_ParamLimits

0x2451,	// (0x0009d8d9) main_location2_pane_t4

0xf31e,	// (0x000aa7a6) main_location2_pane_t_ParamLimits

0xa677,	// (0x000a5aff) find_pinb_pane_g2_ParamLimits

0xa677,	// (0x000a5aff) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x000aa522) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x000aa522) find_pinb_pane_g

0xa683,	// (0x000a5b0b) find_pinb_pane_t1_ParamLimits

0xa695,	// (0x000a5b1d) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x000aa527) find_pinb_pane_t_ParamLimits

0xa3ee,	// (0x000a5876) main_call3_pane

0x1bea,	// (0x0009d072) cale_month_day_heading_pane_t1_ParamLimits

0x1c70,	// (0x0009d0f8) cale_month_day_heading_pane_t2_ParamLimits

0x1ce9,	// (0x0009d171) cale_month_day_heading_pane_t3_ParamLimits

0x1d62,	// (0x0009d1ea) cale_month_day_heading_pane_t4_ParamLimits

0x1de3,	// (0x0009d26b) cale_month_day_heading_pane_t5_ParamLimits

0x1e6c,	// (0x0009d2f4) cale_month_day_heading_pane_t6_ParamLimits

0x1ef5,	// (0x0009d37d) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x000aa6a2) cale_month_day_heading_pane_t_ParamLimits

0xacfd,	// (0x000a6185) smil_status_volume_pane

0x297d,	// (0x0009de05) postcard_address_pane_ParamLimits

0x297d,	// (0x0009de05) postcard_address_pane

0x298f,	// (0x0009de17) postcard_message_pane_ParamLimits

0x298f,	// (0x0009de17) postcard_message_pane

0x2ec8,	// (0x0009e350) call2_cli_visual_pane_t1_ParamLimits

0x2ec8,	// (0x0009e350) call2_cli_visual_pane_t1

0xc96f,	// (0x000a7df7) postcard_message_pane_t1_ParamLimits

0xc96f,	// (0x000a7df7) postcard_message_pane_t1

0xc957,	// (0x000a7ddf) postcard_address_pane_t1_ParamLimits

0xc957,	// (0x000a7ddf) postcard_address_pane_t1

0x3658,	// (0x0009eae0) popup_call3_audio_in_window_ParamLimits

0x3658,	// (0x0009eae0) popup_call3_audio_in_window

0x34e3,	// (0x0009e96b) bg_popup_call3_in_pane_ParamLimits

0x34e3,	// (0x0009e96b) bg_popup_call3_in_pane

0x3559,	// (0x0009e9e1) popup_call3_audio_in_window_g1_ParamLimits

0x3559,	// (0x0009e9e1) popup_call3_audio_in_window_g1

0x3579,	// (0x0009ea01) popup_call3_audio_in_window_g2_ParamLimits

0x3579,	// (0x0009ea01) popup_call3_audio_in_window_g2

0x3599,	// (0x0009ea21) popup_call3_audio_in_window_g3_ParamLimits

0x3599,	// (0x0009ea21) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x000aa9e9) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x000aa9e9) popup_call3_audio_in_window_g

0x35ca,	// (0x0009ea52) popup_call3_audio_in_window_t1_ParamLimits

0x35ca,	// (0x0009ea52) popup_call3_audio_in_window_t1

0x3608,	// (0x0009ea90) popup_call3_audio_in_window_t2_ParamLimits

0x3608,	// (0x0009ea90) popup_call3_audio_in_window_t2

0x3646,	// (0x0009eace) popup_call3_audio_in_window_t3_ParamLimits

0x3646,	// (0x0009eace) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x000aa9f2) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x000aa9f2) popup_call3_audio_in_window_t

0xa99d,	// (0x000a5e25) bg_popup_call3_rect_pane

0xc6da,	// (0x000a7b62) bg_popup_call3_rect_pane_g1

0xa85c,	// (0x000a5ce4) bg_popup_call3_rect_pane_g2

0xc6e2,	// (0x000a7b6a) bg_popup_call3_rect_pane_g3

0xc6ea,	// (0x000a7b72) bg_popup_call3_rect_pane_g4

0xc6f2,	// (0x000a7b7a) bg_popup_call3_rect_pane_g5

0xc6fa,	// (0x000a7b82) bg_popup_call3_rect_pane_g6

0xc702,	// (0x000a7b8a) bg_popup_call3_rect_pane_g7

0x046c,	// (0x0009b8f4) mup_visualizer_osc_pane

0x046c,	// (0x0009b8f4) mup_visualizer_spec_pane

0x3513,	// (0x0009e99b) call3_video_qcif_pane_ParamLimits

0x3513,	// (0x0009e99b) call3_video_qcif_pane

0x3526,	// (0x0009e9ae) call3_video_qcif_uncrop_pane_ParamLimits

0x3526,	// (0x0009e9ae) call3_video_qcif_uncrop_pane

0x3534,	// (0x0009e9bc) call3_video_subqcif_pane_ParamLimits

0x3534,	// (0x0009e9bc) call3_video_subqcif_pane

0x3548,	// (0x0009e9d0) call3_video_subqcif_uncrop_pane_ParamLimits

0x3548,	// (0x0009e9d0) call3_video_subqcif_uncrop_pane

0x35b9,	// (0x0009ea41) popup_call3_audio_in_window_g4_ParamLimits

0x35b9,	// (0x0009ea41) popup_call3_audio_in_window_g4

0x046c,	// (0x0009b8f4) mup_spec_half_pane

0x046c,	// (0x0009b8f4) mup_spec_half_pane_cp

0x046c,	// (0x0009b8f4) mup_osc_middle_pane

0xa9dd,	// (0x000a5e65) mup_visualizer_osc_pane_g1

0xc8e8,	// (0x000a7d70) mup_spec_bar_pane_ParamLimits

0xc8e8,	// (0x000a7d70) mup_spec_bar_pane

0xa9dd,	// (0x000a5e65) mup_spec_bar_pane_g1

0xa9dd,	// (0x000a5e65) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x000aa820) mup_spec_bar_pane_g

0x0aa2,	// (0x0009bf2a) aid_cale_week_size_cell_pane_ParamLimits

0x0abc,	// (0x0009bf44) bg_cale_heading_pane_ParamLimits

0xa8ff,	// (0x000a5d87) bg_cale_pane_cp01_ParamLimits

0x0ad4,	// (0x0009bf5c) cale_week_corner_pane_ParamLimits

0x0af3,	// (0x0009bf7b) cale_week_day_heading_pane_ParamLimits

0x0b10,	// (0x0009bf98) cale_week_scroll_pane_g1_ParamLimits

0x0b23,	// (0x0009bfab) cale_week_scroll_pane_g2_ParamLimits

0x0b3b,	// (0x0009bfc3) cale_week_scroll_pane_g3_ParamLimits

0x0b53,	// (0x0009bfdb) cale_week_scroll_pane_g4_ParamLimits

0x0b6b,	// (0x0009bff3) cale_week_scroll_pane_g5_ParamLimits

0x0b8b,	// (0x0009c013) cale_week_scroll_pane_g6_ParamLimits

0x0bab,	// (0x0009c033) cale_week_scroll_pane_g7_ParamLimits

0x0bcb,	// (0x0009c053) cale_week_scroll_pane_g8_ParamLimits

0x0bef,	// (0x0009c077) cale_week_scroll_pane_g9_ParamLimits

0x0c07,	// (0x0009c08f) cale_week_scroll_pane_g10_ParamLimits

0x0c1f,	// (0x0009c0a7) cale_week_scroll_pane_g11_ParamLimits

0x0c37,	// (0x0009c0bf) cale_week_scroll_pane_g12_ParamLimits

0x0c4f,	// (0x0009c0d7) cale_week_scroll_pane_g13_ParamLimits

0x0c4f,	// (0x0009c0d7) cale_week_scroll_pane_g14_ParamLimits

0x0c4f,	// (0x0009c0d7) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x000aa5b3) cale_week_scroll_pane_g_ParamLimits

0x0c8b,	// (0x0009c113) cale_week_time_pane_ParamLimits

0x0caf,	// (0x0009c137) grid_cale_week_pane_ParamLimits

0xa91c,	// (0x000a5da4) listscroll_cale_week_pane_t1

0xa92e,	// (0x000a5db6) scroll_pane_cp08_ParamLimits

0x175f,	// (0x0009cbe7) cale_month_corner_pane_ParamLimits

0xacc7,	// (0x000a614f) cale_month_pane_t1

0x1b7d,	// (0x0009d005) cale_month_week_pane_ParamLimits

0x2292,	// (0x0009d71a) popup_call_status_window_g1_ParamLimits

0x22a6,	// (0x0009d72e) popup_call_status_window_g2_ParamLimits

0x22ba,	// (0x0009d742) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x000aa72d) popup_call_status_window_g_ParamLimits

0xb0c9,	// (0x000a6551) aid_call2_pane

0x27a8,	// (0x0009dc30) msg_header_pane_g1

0x297d,	// (0x0009de05) postcard_address2_pane_ParamLimits

0x297d,	// (0x0009de05) postcard_address2_pane

0x298f,	// (0x0009de17) postcard_message2_pane_ParamLimits

0x298f,	// (0x0009de17) postcard_message2_pane

0x34b4,	// (0x0009e93c) message2_row_pane_ParamLimits

0x34b4,	// (0x0009e93c) message2_row_pane

0x34d0,	// (0x0009e958) address2_row_pane_ParamLimits

0x34d0,	// (0x0009e958) address2_row_pane

0xc8b5,	// (0x000a7d3d) postcard_message2_row_pane_g1

0xc8bd,	// (0x000a7d45) postcard_message2_row_pane_t1

0xc8b5,	// (0x000a7d3d) address2_row_pane_g1

0xc8bd,	// (0x000a7d45) address2_row_pane_t1

0x0fdf,	// (0x0009c467) aid_size_cell_vorec

0xa3ee,	// (0x000a5876) main_rss_pane

0xc8cb,	// (0x000a7d53) rss_list_single_pane_ParamLimits

0xc8cb,	// (0x000a7d53) rss_list_single_pane

0xc8d9,	// (0x000a7d61) rss_list_single_pane_t1

0xc8d9,	// (0x000a7d61) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x000aa9dd) rss_list_single_pane_t

0xa3ee,	// (0x000a5876) main_camera2_pane

0xa3ee,	// (0x000a5876) main_video2_pane

0xc98b,	// (0x000a7e13) cams_zoom_pane_cp2_ParamLimits

0xc98b,	// (0x000a7e13) cams_zoom_pane_cp2

0xc98b,	// (0x000a7e13) image2_vga_pane_ParamLimits

0xc98b,	// (0x000a7e13) image2_vga_pane

0xc999,	// (0x000a7e21) main_camera2_pane_g1_ParamLimits

0xc999,	// (0x000a7e21) main_camera2_pane_g1

0xc999,	// (0x000a7e21) main_camera2_pane_g2_ParamLimits

0xc999,	// (0x000a7e21) main_camera2_pane_g2

0xc999,	// (0x000a7e21) main_camera2_pane_g3_ParamLimits

0xc999,	// (0x000a7e21) main_camera2_pane_g3

0xc999,	// (0x000a7e21) main_camera2_pane_g4_ParamLimits

0xc999,	// (0x000a7e21) main_camera2_pane_g4

0xc999,	// (0x000a7e21) main_camera2_pane_g5_ParamLimits

0xc999,	// (0x000a7e21) main_camera2_pane_g5

0xc999,	// (0x000a7e21) main_camera2_pane_g6_ParamLimits

0xc999,	// (0x000a7e21) main_camera2_pane_g6

0xc999,	// (0x000a7e21) main_camera2_pane_g7_ParamLimits

0xc999,	// (0x000a7e21) main_camera2_pane_g7

0xc999,	// (0x000a7e21) main_camera2_pane_g8_ParamLimits

0xc999,	// (0x000a7e21) main_camera2_pane_g8

0x0008,

0xf571,	// (0x000aa9f9) main_camera2_pane_g_ParamLimits

0xf571,	// (0x000aa9f9) main_camera2_pane_g

0x367a,	// (0x0009eb02) main_camera2_pane_t1_ParamLimits

0x367a,	// (0x0009eb02) main_camera2_pane_t1

0x367a,	// (0x0009eb02) main_camera2_pane_t2_ParamLimits

0x367a,	// (0x0009eb02) main_camera2_pane_t2

0x367a,	// (0x0009eb02) main_camera2_pane_t3_ParamLimits

0x367a,	// (0x0009eb02) main_camera2_pane_t3

0x367a,	// (0x0009eb02) main_camera2_pane_t4_ParamLimits

0x367a,	// (0x0009eb02) main_camera2_pane_t4

0x0006,

0xf584,	// (0x000aaa0c) main_camera2_pane_t_ParamLimits

0xf584,	// (0x000aaa0c) main_camera2_pane_t

0xc9dd,	// (0x000a7e65) cams_zoom_pane_cp4_ParamLimits

0xc9dd,	// (0x000a7e65) cams_zoom_pane_cp4

0x368e,	// (0x0009eb16) image2_cif_pane_ParamLimits

0x368e,	// (0x0009eb16) image2_cif_pane

0x9fe3,	// (0x000a546b) image2_subqcif_pane_ParamLimits

0x9fe3,	// (0x000a546b) image2_subqcif_pane

0x369c,	// (0x0009eb24) main_video2_pane_g1_ParamLimits

0x369c,	// (0x0009eb24) main_video2_pane_g1

0x369c,	// (0x0009eb24) main_video2_pane_g2_ParamLimits

0x369c,	// (0x0009eb24) main_video2_pane_g2

0x369c,	// (0x0009eb24) main_video2_pane_g3_ParamLimits

0x369c,	// (0x0009eb24) main_video2_pane_g3

0x369c,	// (0x0009eb24) main_video2_pane_g4_ParamLimits

0x369c,	// (0x0009eb24) main_video2_pane_g4

0x369c,	// (0x0009eb24) main_video2_pane_g5_ParamLimits

0x369c,	// (0x0009eb24) main_video2_pane_g5

0x369c,	// (0x0009eb24) main_video2_pane_g6_ParamLimits

0x369c,	// (0x0009eb24) main_video2_pane_g6

0x0005,

0xf593,	// (0x000aaa1b) main_video2_pane_g_ParamLimits

0xf593,	// (0x000aaa1b) main_video2_pane_g

0x36aa,	// (0x0009eb32) main_video2_pane_t1_ParamLimits

0x36aa,	// (0x0009eb32) main_video2_pane_t1

0x36aa,	// (0x0009eb32) main_video2_pane_t2_ParamLimits

0x36aa,	// (0x0009eb32) main_video2_pane_t2

0x36aa,	// (0x0009eb32) main_video2_pane_t3_ParamLimits

0x36aa,	// (0x0009eb32) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x000aaa28) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x000aaa28) main_video2_pane_t

0x2fee,	// (0x0009e476) call_muted_g2

0x0001,

0xf547,	// (0x000aa9cf) call_muted_g

0xa3ee,	// (0x000a5876) main_mup2_pane

0xb57d,	// (0x000a6a05) main_mup2_pane_g1_ParamLimits

0xb57d,	// (0x000a6a05) main_mup2_pane_g1

0xb57d,	// (0x000a6a05) main_mup2_pane_g2_ParamLimits

0xb57d,	// (0x000a6a05) main_mup2_pane_g2

0x376b,	// (0x0009ebf3) main_mup_pane_g13_cp1

0x9ff1,	// (0x000a5479) mup_volume_pane_cp1

0xb57d,	// (0x000a6a05) main_mup2_pane_g4_ParamLimits

0xb57d,	// (0x000a6a05) main_mup2_pane_g4

0xb57d,	// (0x000a6a05) main_mup2_pane_g5_ParamLimits

0xb57d,	// (0x000a6a05) main_mup2_pane_g5

0xb57d,	// (0x000a6a05) main_mup2_pane_g6_ParamLimits

0xb57d,	// (0x000a6a05) main_mup2_pane_g6

0xb57d,	// (0x000a6a05) main_mup2_pane_g7_ParamLimits

0xb57d,	// (0x000a6a05) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x000aaa2f) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x000aaa2f) main_mup2_pane_g

0xb58b,	// (0x000a6a13) main_mup2_pane_t1_ParamLimits

0xb58b,	// (0x000a6a13) main_mup2_pane_t1

0xb58b,	// (0x000a6a13) main_mup2_pane_t2_ParamLimits

0xb58b,	// (0x000a6a13) main_mup2_pane_t2

0xb58b,	// (0x000a6a13) main_mup2_pane_t3_ParamLimits

0xb58b,	// (0x000a6a13) main_mup2_pane_t3

0xb58b,	// (0x000a6a13) main_mup2_pane_t4_ParamLimits

0xb58b,	// (0x000a6a13) main_mup2_pane_t4

0xb58b,	// (0x000a6a13) main_mup2_pane_t5_ParamLimits

0xb58b,	// (0x000a6a13) main_mup2_pane_t5

0xb58b,	// (0x000a6a13) main_mup2_pane_t6_ParamLimits

0xb58b,	// (0x000a6a13) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x000aaa3e) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x000aaa3e) main_mup2_pane_t

0xb5b3,	// (0x000a6a3b) mup2_visualizer_pane_ParamLimits

0xb5b3,	// (0x000a6a3b) mup2_visualizer_pane

0xb5b3,	// (0x000a6a3b) mup_progress_pane_cp_ParamLimits

0xb5b3,	// (0x000a6a3b) mup_progress_pane_cp

0xcab6,	// (0x000a7f3e) mup_volume_pane_cp_ParamLimits

0xcab6,	// (0x000a7f3e) mup_volume_pane_cp

0xa6c4,	// (0x000a5b4c) mup2_visualizer_pane_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) mup2_visualizer_pane_g1

0xa6d2,	// (0x000a5b5a) mup2_visualizer_pane_g2_ParamLimits

0xa6d2,	// (0x000a5b5a) mup2_visualizer_pane_g2

0xa6d2,	// (0x000a5b5a) mup2_visualizer_pane_g3_ParamLimits

0xa6d2,	// (0x000a5b5a) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x000aa52c) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x000aa52c) mup2_visualizer_pane_g

0xb809,	// (0x000a6c91) aid_size_cell_fmradio

0x31a0,	// (0x0009e628) aid_height_parent_landcape

0xab25,	// (0x000a5fad) wml_content_pane_cp

0xab2d,	// (0x000a5fb5) wml_tabs_pane

0xab36,	// (0x000a5fbe) popup_wml_miniature_window

0xab3e,	// (0x000a5fc6) scroll_pane_cp021

0xab52,	// (0x000a5fda) wml_content_pane_comp8

0xa3ee,	// (0x000a5876) bg_popup_sub_pane_cp05

0xca01,	// (0x000a7e89) popup_wml_miniature_window_g1

0xca09,	// (0x000a7e91) wml_miniature_view_pane

0x36be,	// (0x0009eb46) aid_size_wml_view

0x36c6,	// (0x0009eb4e) wml_miniature_view_pane_g1

0x36cf,	// (0x0009eb57) wml_miniature_view_pane_g2

0x36d8,	// (0x0009eb60) wml_miniature_view_pane_g3

0x36e0,	// (0x0009eb68) wml_miniature_view_pane_g4

0x36e8,	// (0x0009eb70) wml_miniature_view_pane_g5

0x36f0,	// (0x0009eb78) wml_miniature_view_pane_g6

0x36f8,	// (0x0009eb80) wml_miniature_view_pane_g7

0x3700,	// (0x0009eb88) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x000aaa4b) wml_miniature_view_pane_g

0xca11,	// (0x000a7e99) background_graphic_ParamLimits

0xca11,	// (0x000a7e99) background_graphic

0xca1d,	// (0x000a7ea5) wml_tabs_2_pane

0xca26,	// (0x000a7eae) wml_tabs_3_pane_ParamLimits

0xca26,	// (0x000a7eae) wml_tabs_3_pane

0xca38,	// (0x000a7ec0) wml_tabs_4_pane_ParamLimits

0xca38,	// (0x000a7ec0) wml_tabs_4_pane

0xca4e,	// (0x000a7ed6) wml_tabs_5_pane_ParamLimits

0xca4e,	// (0x000a7ed6) wml_tabs_5_pane

0xca68,	// (0x000a7ef0) wml_tabs_pane_g2_ParamLimits

0xca68,	// (0x000a7ef0) wml_tabs_pane_g2

0xca7d,	// (0x000a7f05) wml_tabs_pane_g3_ParamLimits

0xca7d,	// (0x000a7f05) wml_tabs_pane_g3

0xca92,	// (0x000a7f1a) wml_tabs_2_active_pane_ParamLimits

0xca92,	// (0x000a7f1a) wml_tabs_2_active_pane

0xca92,	// (0x000a7f1a) wml_tabs_2_passive_pane_ParamLimits

0xca92,	// (0x000a7f1a) wml_tabs_2_passive_pane

0x3708,	// (0x0009eb90) wml_tabs_3_active_pane_cp_ParamLimits

0x3708,	// (0x0009eb90) wml_tabs_3_active_pane_cp

0x371d,	// (0x0009eba5) wml_tabs_3_passive_pane_ParamLimits

0x371d,	// (0x0009eba5) wml_tabs_3_passive_pane

0x3730,	// (0x0009ebb8) wml_tabs_3_passive_pane_cp_ParamLimits

0x3730,	// (0x0009ebb8) wml_tabs_3_passive_pane_cp

0x3747,	// (0x0009ebcf) tabs_4_active_pane

0x374f,	// (0x0009ebd7) tabs_4_passive_pane

0x3759,	// (0x0009ebe1) tabs_4_passive_pane_cp

0x3761,	// (0x0009ebe9) tabs_4_passive_pane_cp2

0x2ee2,	// (0x0009e36a) aid_height_text

0xb5b3,	// (0x000a6a3b) mup_volume_cont_pane_ParamLimits

0xb5b3,	// (0x000a6a3b) mup_volume_cont_pane

0x046c,	// (0x0009b8f4) aid_size_cell_pinb

0x046c,	// (0x0009b8f4) aid_size_list_pinb

0xb5b3,	// (0x000a6a3b) mup2_volume_cont_pane_ParamLimits

0xb5b3,	// (0x000a6a3b) mup2_volume_cont_pane

0xcaa0,	// (0x000a7f28) mup2_volume_cont_pane_g1_ParamLimits

0xcaa0,	// (0x000a7f28) mup2_volume_cont_pane_g1

0x0476,	// (0x0009b8fe) aid_size_cell_touch_ParamLimits

0x0476,	// (0x0009b8fe) aid_size_cell_touch

0x06a2,	// (0x0009bb2a) touch_pane_ParamLimits

0x06a2,	// (0x0009bb2a) touch_pane

0x9ff1,	// (0x000a5479) main_rss2_pane

0xcad5,	// (0x000a7f5d) listscroll_rss2_pane

0xcade,	// (0x000a7f66) rss2_navigation_pane

0xcae6,	// (0x000a7f6e) list_rss2_pane

0xb273,	// (0x000a66fb) scroll_pane_cp22

0xcaee,	// (0x000a7f76) rss2_navigation_pane_g1

0xcaf7,	// (0x000a7f7f) rss2_navigation_pane_g2

0xcaff,	// (0x000a7f87) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x000aaa5c) rss2_navigation_pane_g

0xcb07,	// (0x000a7f8f) rss2_navigation_pane_t1

0x3775,	// (0x0009ebfd) rss2_list_single_pane_ParamLimits

0x3775,	// (0x0009ebfd) rss2_list_single_pane

0xcb15,	// (0x000a7f9d) rss2_list_single_pane_t2

0xcb23,	// (0x000a7fab) rss2_list_single_pane_t3_ParamLimits

0xcb23,	// (0x000a7fab) rss2_list_single_pane_t3

0xcb40,	// (0x000a7fc8) rss2_list_single_pane_t4

0x217f,	// (0x0009d607) smil_status_pane_g1

0x9fe3,	// (0x000a546b) main_image2_pane_ParamLimits

0x9fe3,	// (0x000a546b) main_image2_pane

0xc999,	// (0x000a7e21) main_camera2_pane_g9_ParamLimits

0xc999,	// (0x000a7e21) main_camera2_pane_g9

0x367a,	// (0x0009eb02) main_camera2_pane_t5_ParamLimits

0x367a,	// (0x0009eb02) main_camera2_pane_t5

0xc9a7,	// (0x000a7e2f) main_camera2_pane_t6_ParamLimits

0xc9a7,	// (0x000a7e2f) main_camera2_pane_t6

0x378a,	// (0x0009ec12) main_image2_pane_g1_ParamLimits

0x378a,	// (0x0009ec12) main_image2_pane_g1

0x2bb6,	// (0x0009e03e) smil2_video_pane_ParamLimits

0x2bb6,	// (0x0009e03e) smil2_video_pane

0x9f9a,	// (0x000a5422) aid_zoom_text_primary_cp

0x9fd9,	// (0x000a5461) popup_preview_fixed_window

0xaa8e,	// (0x000a5f16) im_reading_pane_g1

0x366c,	// (0x0009eaf4) cams2_bc_adjust_pane_cp_ParamLimits

0x366c,	// (0x0009eaf4) cams2_bc_adjust_pane_cp

0xc9cf,	// (0x000a7e57) cams2_bc_adjust_pane_ParamLimits

0xc9cf,	// (0x000a7e57) cams2_bc_adjust_pane

0x376b,	// (0x0009ebf3) cams2_bc_adjust_pane_g1

0x9ff1,	// (0x000a5479) cams2_slider_pane

0x376b,	// (0x0009ebf3) cams2_slider_pane_g1

0x376b,	// (0x0009ebf3) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x000aaa63) cams2_slider_pane_g

0x0798,	// (0x0009bc20) calc_display_pane_ParamLimits

0x07bd,	// (0x0009bc45) calc_paper_pane_ParamLimits

0x07e0,	// (0x0009bc68) grid_calc_pane_ParamLimits

0xb12f,	// (0x000a65b7) popup_clock_digital_window_t1_ParamLimits

0xb7a6,	// (0x000a6c2e) main_image_pane_t1

0x077a,	// (0x0009bc02) aid_size_cell_calc_ParamLimits

0x077a,	// (0x0009bc02) aid_size_cell_calc

0x31f8,	// (0x0009e680) popup_blid_sat_info2_window_ParamLimits

0x31f8,	// (0x0009e680) popup_blid_sat_info2_window

0xcb4e,	// (0x000a7fd6) aid_size_cell_blid

0xcb56,	// (0x000a7fde) bg_popup_window_pane_cp07

0xcb79,	// (0x000a8001) grid_popup_blid_pane

0xcb83,	// (0x000a800b) heading_pane_cp05_ParamLimits

0xcb83,	// (0x000a800b) heading_pane_cp05

0xcc4d,	// (0x000a80d5) cell_popup_blid_pane_ParamLimits

0xcc4d,	// (0x000a80d5) cell_popup_blid_pane

0xcc71,	// (0x000a80f9) cell_popup_blid_pane_g1

0xcc79,	// (0x000a8101) cell_popup_blid_pane_t1

0xb5b3,	// (0x000a6a3b) mup2_indicator_pane_ParamLimits

0xb5b3,	// (0x000a6a3b) mup2_indicator_pane

0x046c,	// (0x0009b8f4) mup2_visualizer_osc_pane

0xc9eb,	// (0x000a7e73) mup2_visualizer_spec_pane_ParamLimits

0xc9eb,	// (0x000a7e73) mup2_visualizer_spec_pane

0x046c,	// (0x0009b8f4) mup2_spec_half_pane

0x046c,	// (0x0009b8f4) mup2_spec_half_pane_cp

0xcc87,	// (0x000a810f) mup2_spec_bar_pane_ParamLimits

0xcc87,	// (0x000a810f) mup2_spec_bar_pane

0xa9dd,	// (0x000a5e65) mup2_spec_bar_pane_g1

0xcca6,	// (0x000a812e) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x000aaa89) mup2_spec_bar_pane_g

0x046c,	// (0x0009b8f4) mup2_osc_middle_pane

0xa9dd,	// (0x000a5e65) mup2_visualizer_osc_pane_g1

0x9ffb,	// (0x000a5483) popup_number_entry_window_t1_ParamLimits

0xa00e,	// (0x000a5496) popup_number_entry_window_t2_ParamLimits

0xa020,	// (0x000a54a8) popup_number_entry_window_t3_ParamLimits

0x0714,	// (0x0009bb9c) popup_number_entry_window_t5_ParamLimits

0x0714,	// (0x0009bb9c) popup_number_entry_window_t5

0xf045,	// (0x000aa4cd) popup_number_entry_window_t_ParamLimits

0xa032,	// (0x000a54ba) text_title_cp2_ParamLimits

0xb68c,	// (0x000a6b14) aid_hotspot_pointer_text2_pane

0xb6a6,	// (0x000a6b2e) main_viewer_pane_g9_ParamLimits

0xb6a6,	// (0x000a6b2e) main_viewer_pane_g9

0xacc7,	// (0x000a614f) cale_month_pane_t1_ParamLimits

0xad32,	// (0x000a61ba) bg_cale_pane_ParamLimits

0xad4a,	// (0x000a61d2) list_cale_pane_ParamLimits

0xad5b,	// (0x000a61e3) listscroll_cale_day_pane_t1

0xad6d,	// (0x000a61f5) scroll_pane_cp09_ParamLimits

0x253c,	// (0x0009d9c4) main_mup_eq_pane_t1_ParamLimits

0x253c,	// (0x0009d9c4) main_mup_eq_pane_t1

0x2556,	// (0x0009d9de) main_mup_eq_pane_t2_ParamLimits

0x2556,	// (0x0009d9de) main_mup_eq_pane_t2

0x2570,	// (0x0009d9f8) main_mup_eq_pane_t3_ParamLimits

0x2570,	// (0x0009d9f8) main_mup_eq_pane_t3

0x258c,	// (0x0009da14) main_mup_eq_pane_t4_ParamLimits

0x258c,	// (0x0009da14) main_mup_eq_pane_t4

0x25a8,	// (0x0009da30) main_mup_eq_pane_t5_ParamLimits

0x25a8,	// (0x0009da30) main_mup_eq_pane_t5

0x25c4,	// (0x0009da4c) main_mup_eq_pane_t6_ParamLimits

0x25c4,	// (0x0009da4c) main_mup_eq_pane_t6

0x25d8,	// (0x0009da60) main_mup_eq_pane_t7_ParamLimits

0x25d8,	// (0x0009da60) main_mup_eq_pane_t7

0x25ec,	// (0x0009da74) main_mup_eq_pane_t8_ParamLimits

0x25ec,	// (0x0009da74) main_mup_eq_pane_t8

0x2600,	// (0x0009da88) main_mup_eq_pane_t9_ParamLimits

0x2600,	// (0x0009da88) main_mup_eq_pane_t9

0x261a,	// (0x0009daa2) main_mup_eq_pane_t10_ParamLimits

0x261a,	// (0x0009daa2) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x000aa82c) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x000aa82c) main_mup_eq_pane_t

0x26c9,	// (0x0009db51) mup_equalizer_pane_cp5_ParamLimits

0x26dd,	// (0x0009db65) mup_equalizer_pane_cp6_ParamLimits

0x26f1,	// (0x0009db79) mup_equalizer_pane_cp7_ParamLimits

0x9ff1,	// (0x000a5479) main_gallery_pane

0xc907,	// (0x000a7d8f) smil2_volume_pane

0xc90f,	// (0x000a7d97) smil_status_volume_pane_g1_ParamLimits

0xc922,	// (0x000a7daa) smil_status_volume_pane_g2_ParamLimits

0xc935,	// (0x000a7dbd) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x000aa9e2) smil_status_volume_pane_g_ParamLimits

0xcb56,	// (0x000a7fde) bg_popup_window_pane_cp07_ParamLimits

0xcb64,	// (0x000a7fec) blid_firmament_pane

0x076c,	// (0x0009bbf4) aid_size_cell_gallery_ParamLimits

0x076c,	// (0x0009bbf4) aid_size_cell_gallery

0x076c,	// (0x0009bbf4) grid_gallery_pane_ParamLimits

0x076c,	// (0x0009bbf4) grid_gallery_pane

0xcb56,	// (0x000a7fde) cell_gallery_pane_ParamLimits

0xcb56,	// (0x000a7fde) cell_gallery_pane

0x076c,	// (0x0009bbf4) bg_cell_gallery_focus_pane_ParamLimits

0x076c,	// (0x0009bbf4) bg_cell_gallery_focus_pane

0xa6c4,	// (0x000a5b4c) cell_gallery_pane_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) cell_gallery_pane_g1

0xa6c4,	// (0x000a5b4c) cell_gallery_pane_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) cell_gallery_pane_g2

0xa6c4,	// (0x000a5b4c) cell_gallery_pane_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) cell_gallery_pane_g3

0xa6d2,	// (0x000a5b5a) cell_gallery_pane_g4_ParamLimits

0xa6d2,	// (0x000a5b5a) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x000aaa8e) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x000aaa8e) cell_gallery_pane_g

0xccb0,	// (0x000a8138) bg_cell_gallery_focus_pane_g1

0xccb8,	// (0x000a8140) bg_cell_gallery_focus_pane_g2

0xccc0,	// (0x000a8148) bg_cell_gallery_focus_pane_g3

0xccc8,	// (0x000a8150) bg_cell_gallery_focus_pane_g4

0xccd0,	// (0x000a8158) bg_cell_gallery_focus_pane_g5

0xccd8,	// (0x000a8160) bg_cell_gallery_focus_pane_g6

0xcce0,	// (0x000a8168) bg_cell_gallery_focus_pane_g7

0xcce8,	// (0x000a8170) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x000aaa97) bg_cell_gallery_focus_pane_g

0xccf0,	// (0x000a8178) aid_firma_cardinal

0xcd04,	// (0x000a818c) blid_firmament_pane_t1

0xcd1b,	// (0x000a81a3) blid_firmament_pane_t2

0xcd32,	// (0x000a81ba) blid_firmament_pane_t3

0xcd49,	// (0x000a81d1) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x000aaaa8) blid_firmament_pane_t

0xcd60,	// (0x000a81e8) blid_sat_info_pane

0xa9dd,	// (0x000a5e65) blid_sat_info_pane_g1

0xa9dd,	// (0x000a5e65) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x000aa820) blid_sat_info_pane_g

0xcd70,	// (0x000a81f8) blid_sat_info_pane_t1

0xcd7e,	// (0x000a8206) smil2_volume_content_pane

0xcd87,	// (0x000a820f) smil2_volume_pane_g1

0xa7f3,	// (0x000a5c7b) smil2_volume_content_pane_g1

0xcd8f,	// (0x000a8217) smil2_volume_content_pane_g2

0xcd98,	// (0x000a8220) smil2_volume_content_pane_g3

0xcda1,	// (0x000a8229) smil2_volume_content_pane_g4

0xcdaa,	// (0x000a8232) smil2_volume_content_pane_g5

0xcdb3,	// (0x000a823b) smil2_volume_content_pane_g6

0xcdbc,	// (0x000a8244) smil2_volume_content_pane_g7

0xcdc5,	// (0x000a824d) smil2_volume_content_pane_g8

0xcdce,	// (0x000a8256) smil2_volume_content_pane_g9

0xcdd7,	// (0x000a825f) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x000aaab1) smil2_volume_content_pane_g

0x0d63,	// (0x0009c1eb) cale_week_day_heading_pane_t1_ParamLimits

0x0d8d,	// (0x0009c215) cale_week_day_heading_pane_t2_ParamLimits

0x0dbc,	// (0x0009c244) cale_week_day_heading_pane_t3_ParamLimits

0x0deb,	// (0x0009c273) cale_week_day_heading_pane_t4_ParamLimits

0x0e1a,	// (0x0009c2a2) cale_week_day_heading_pane_t5_ParamLimits

0x0e51,	// (0x0009c2d9) cale_week_day_heading_pane_t6_ParamLimits

0x0e88,	// (0x0009c310) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x000aa5d4) cale_week_day_heading_pane_t_ParamLimits

0xa94b,	// (0x000a5dd3) bg_cale_side_pane_ParamLimits

0x0eb2,	// (0x0009c33a) cale_week_time_pane_t1_ParamLimits

0x0ecc,	// (0x0009c354) cale_week_time_pane_t2_ParamLimits

0x0ee6,	// (0x0009c36e) cale_week_time_pane_t3_ParamLimits

0x0f00,	// (0x0009c388) cale_week_time_pane_t4_ParamLimits

0x0f1a,	// (0x0009c3a2) cale_week_time_pane_t5_ParamLimits

0x0f34,	// (0x0009c3bc) cale_week_time_pane_t6_ParamLimits

0x0f4e,	// (0x0009c3d6) cale_week_time_pane_t7_ParamLimits

0x0f68,	// (0x0009c3f0) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x000aa5e3) cale_week_time_pane_t_ParamLimits

0x0f82,	// (0x0009c40a) cell_cale_week_pane_g2_ParamLimits

0xa94b,	// (0x000a5dd3) bg_cale_side_pane_cp01_ParamLimits

0x1f86,	// (0x0009d40e) cale_month_week_pane_t1_ParamLimits

0x1f9f,	// (0x0009d427) cale_month_week_pane_t2_ParamLimits

0x1fb8,	// (0x0009d440) cale_month_week_pane_t3_ParamLimits

0x1fd1,	// (0x0009d459) cale_month_week_pane_t4_ParamLimits

0x1fea,	// (0x0009d472) cale_month_week_pane_t5_ParamLimits

0x2003,	// (0x0009d48b) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x000aa6b1) cale_month_week_pane_t_ParamLimits

0xacd9,	// (0x000a6161) cell_cale_month_pane_g1_ParamLimits

0x9ff1,	// (0x000a5479) main_cale_event_viewer_pane

0x046c,	// (0x0009b8f4) listscroll_cale_event_viewer_pane

0xcde0,	// (0x000a8268) list_cale_ev_pane

0xcde8,	// (0x000a8270) scroll_pane_cp023

0xcdf4,	// (0x000a827c) field_cale_ev_pane_ParamLimits

0xcdf4,	// (0x000a827c) field_cale_ev_pane

0xce12,	// (0x000a829a) field_cale_ev_content_pane_ParamLimits

0xce12,	// (0x000a829a) field_cale_ev_content_pane

0xce1e,	// (0x000a82a6) field_cale_ev_pane_g1_ParamLimits

0xce1e,	// (0x000a82a6) field_cale_ev_pane_g1

0xce2a,	// (0x000a82b2) field_cale_ev_pane_g2_ParamLimits

0xce2a,	// (0x000a82b2) field_cale_ev_pane_g2

0xce42,	// (0x000a82ca) field_cale_ev_pane_g3_ParamLimits

0xce42,	// (0x000a82ca) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x000aaac6) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x000aaac6) field_cale_ev_pane_g

0xce5a,	// (0x000a82e2) field_cale_ev_pane_t1_ParamLimits

0xce5a,	// (0x000a82e2) field_cale_ev_pane_t1

0xa876,	// (0x000a5cfe) field_cale_ev_content_pane_t1_ParamLimits

0xa876,	// (0x000a5cfe) field_cale_ev_content_pane_t1

0xb656,	// (0x000a6ade) bg_button_pane_cp01

0x0a90,	// (0x0009bf18) listscroll_cale_week_pane_ParamLimits

0xa8f6,	// (0x000a5d7e) popup_toolbar_window_cp01

0xa91c,	// (0x000a5da4) listscroll_cale_week_pane_t1_ParamLimits

0x0a90,	// (0x0009bf18) listscroll_cale_day_pane_ParamLimits

0xa8f6,	// (0x000a5d7e) popup_toolbar_window_cp02

0xad5b,	// (0x000a61e3) listscroll_cale_day_pane_t1_ParamLimits

0x31be,	// (0x0009e646) main_cale_month_pane_ParamLimits

0xc885,	// (0x000a7d0d) popup_toolbar_window_cp03_ParamLimits

0xc885,	// (0x000a7d0d) popup_toolbar_window_cp03

0x2a7e,	// (0x0009df06) main_image_pane_g2_ParamLimits

0x2a7e,	// (0x0009df06) main_image_pane_g2

0x2a8f,	// (0x0009df17) main_image_pane_g3_ParamLimits

0x2a8f,	// (0x0009df17) main_image_pane_g3

0x0002,

0xf436,	// (0x000aa8be) main_image_pane_g_ParamLimits

0xf436,	// (0x000aa8be) main_image_pane_g

0xb7a6,	// (0x000a6c2e) main_image_pane_t1_ParamLimits

0x2aa0,	// (0x0009df28) main_image_pane_t2_ParamLimits

0x2aa0,	// (0x0009df28) main_image_pane_t2

0x2ab2,	// (0x0009df3a) main_image_pane_t3_ParamLimits

0x2ab2,	// (0x0009df3a) main_image_pane_t3

0x2ada,	// (0x0009df62) main_image_pane_t4_ParamLimits

0x2ada,	// (0x0009df62) main_image_pane_t4

0x0003,

0xf43d,	// (0x000aa8c5) main_image_pane_t_ParamLimits

0xf43d,	// (0x000aa8c5) main_image_pane_t

0x2afa,	// (0x0009df82) popup_image_details_window_cp01

0x2b04,	// (0x0009df8c) popup_toobar_trans_pane_cp01_ParamLimits

0x2b04,	// (0x0009df8c) popup_toobar_trans_pane_cp01

0x32d7,	// (0x0009e75f) popup_image_details_window_ParamLimits

0x32d7,	// (0x0009e75f) popup_image_details_window

0xc858,	// (0x000a7ce0) popup_image_focus_window

0xc98b,	// (0x000a7e13) camera2_autofocus_pane_ParamLimits

0xc98b,	// (0x000a7e13) camera2_autofocus_pane

0x046c,	// (0x0009b8f4) bg_popup_sub_pane_cp06

0xce71,	// (0x000a82f9) popup_image_focus_window_g1

0xce79,	// (0x000a8301) popup_image_focus_window_g2

0xce81,	// (0x000a8309) popup_image_focus_window_g3

0xce89,	// (0x000a8311) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x000aaacd) popup_image_focus_window_g

0xce91,	// (0x000a8319) popup_image_focus_window_t1

0xce9f,	// (0x000a8327) popup_image_focus_window_t2

0xceaf,	// (0x000a8337) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x000aaad6) popup_image_focus_window_t

0xa6c4,	// (0x000a5b4c) camera2_autofocus_pane_g1

0x076c,	// (0x0009bbf4) bg_tb_trans_pane_cp01

0xcebd,	// (0x000a8345) popup_image_details_window_g1

0xced0,	// (0x000a8358) popup_image_details_window_g2

0x0002,

0xf660,	// (0x000aaae8) popup_image_details_window_g

0xcef9,	// (0x000a8381) popup_image_details_window_t1

0xcf0b,	// (0x000a8393) popup_image_details_window_t2

0xcf24,	// (0x000a83ac) popup_image_details_window_t3

0xcf38,	// (0x000a83c0) popup_image_details_window_t4

0xcf53,	// (0x000a83db) popup_image_details_window_t5

0x0004,

0xf667,	// (0x000aaaef) popup_image_details_window_t

0xa72a,	// (0x000a5bb2) bg_calc_paper_pane_ParamLimits

0x9ff1,	// (0x000a5479) grid_highlight_pane_cp013

0xa73e,	// (0x000a5bc6) list_calc_pane_ParamLimits

0xa750,	// (0x000a5bd8) scroll_pane_cp024

0xa758,	// (0x000a5be0) bg_calc_display_pane_ParamLimits

0x08de,	// (0x0009bd66) calc_display_pane_t1_ParamLimits

0x08f3,	// (0x0009bd7b) calc_display_pane_t2_ParamLimits

0xa764,	// (0x000a5bec) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x000aa554) calc_display_pane_t_ParamLimits

0x09b3,	// (0x0009be3b) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x000aa571) cell_calc_pane_g

0x09bc,	// (0x0009be44) cell_calc_pane_t1

0xa7d1,	// (0x000a5c59) grid_highlight_pane_cp02_ParamLimits

0xa7e7,	// (0x000a5c6f) toolbar_button_pane_cp01_ParamLimits

0xa7e7,	// (0x000a5c6f) toolbar_button_pane_cp01

0xb7eb,	// (0x000a6c73) temp_image_control_pane_ParamLimits

0xb7eb,	// (0x000a6c73) temp_image_control_pane

0x9fe3,	// (0x000a546b) main_mp3_pane

0xcf6d,	// (0x000a83f5) temp_image_control_pane_g1_ParamLimits

0xcf6d,	// (0x000a83f5) temp_image_control_pane_g1

0xcf7b,	// (0x000a8403) temp_image_control_pane_g2_ParamLimits

0xcf7b,	// (0x000a8403) temp_image_control_pane_g2

0xcf8d,	// (0x000a8415) temp_image_control_pane_g3_ParamLimits

0xcf8d,	// (0x000a8415) temp_image_control_pane_g3

0x37a0,	// (0x0009ec28) temp_image_control_pane_g4_ParamLimits

0x37a0,	// (0x0009ec28) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x000aaafa) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x000aaafa) temp_image_control_pane_g

0xcf6d,	// (0x000a83f5) main_mp3_pane_g1

0x37b3,	// (0x0009ec3b) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x000aab03) main_mp3_pane_g

0xcfc2,	// (0x000a844a) main_mp3_pane_t1

0xa6d2,	// (0x000a5b5a) main_camera_pane_g8_ParamLimits

0xa6d2,	// (0x000a5b5a) main_camera_pane_g8

0x114c,	// (0x0009c5d4) main_video_pane_g7_ParamLimits

0x114c,	// (0x0009c5d4) main_video_pane_g7

0xc9bb,	// (0x000a7e43) main_camera2_pane_t7_ParamLimits

0xc9bb,	// (0x000a7e43) main_camera2_pane_t7

0xaae5,	// (0x000a5f6d) scroll_pane_cp025_ParamLimits

0xaae5,	// (0x000a5f6d) scroll_pane_cp025

0xaaf9,	// (0x000a5f81) scroll_pane_cp026_ParamLimits

0xaaf9,	// (0x000a5f81) scroll_pane_cp026

0xab08,	// (0x000a5f90) wml_content_pane_ParamLimits

0x9ff1,	// (0x000a5479) main_touch_calib_pane

0x3887,	// (0x0009ed0f) main_touch_calib_pane_g1

0x3899,	// (0x0009ed21) main_touch_calib_pane_g2

0x38ab,	// (0x0009ed33) main_touch_calib_pane_g3

0x38bd,	// (0x0009ed45) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x000aab21) main_touch_calib_pane_g

0x38cf,	// (0x0009ed57) main_touch_calib_pane_t1

0x38e9,	// (0x0009ed71) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x000aab2a) main_touch_calib_pane_t

0xb34f,	// (0x000a67d7) mup_progress_pane_cp02

0xb384,	// (0x000a680c) navi_pane_g1

0xb43f,	// (0x000a68c7) navi_pane_mp_t3

0x9fe3,	// (0x000a546b) main_mp3_pane_ParamLimits

0x345c,	// (0x0009e8e4) navi_pane_ParamLimits

0xcf6d,	// (0x000a83f5) main_mp3_pane_g1_ParamLimits

0x37b3,	// (0x0009ec3b) main_mp3_pane_g2_ParamLimits

0x37c1,	// (0x0009ec49) main_mp3_pane_g3_ParamLimits

0x37c1,	// (0x0009ec49) main_mp3_pane_g3

0x37cf,	// (0x0009ec57) main_mp3_pane_g4_ParamLimits

0x37cf,	// (0x0009ec57) main_mp3_pane_g4

0xa6c4,	// (0x000a5b4c) main_mp3_pane_g5_ParamLimits

0xa6c4,	// (0x000a5b4c) main_mp3_pane_g5

0xcf9d,	// (0x000a8425) main_mp3_pane_g6_ParamLimits

0xcf9d,	// (0x000a8425) main_mp3_pane_g6

0xcfaa,	// (0x000a8432) main_mp3_pane_g7_ParamLimits

0xcfaa,	// (0x000a8432) main_mp3_pane_g7

0xcfb6,	// (0x000a843e) main_mp3_pane_g8_ParamLimits

0xcfb6,	// (0x000a843e) main_mp3_pane_g8

0xf67b,	// (0x000aab03) main_mp3_pane_g_ParamLimits

0x37db,	// (0x0009ec63) main_mp3_pane_t2

0x37e9,	// (0x0009ec71) main_mp3_pane_t3

0xcfd0,	// (0x000a8458) main_mp3_pane_t4

0xcfde,	// (0x000a8466) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x000aab14) main_mp3_pane_t

0xcfec,	// (0x000a8474) mup_progress_pane_cp01

0x9f9a,	// (0x000a5422) aid_zoom_text_secondary2

0xcde0,	// (0x000a8268) list_cale_ev2_pane

0xcde8,	// (0x000a8270) scroll_pane_cp023_ParamLimits

0x393f,	// (0x0009edc7) field_cale_ev2_pane_ParamLimits

0x393f,	// (0x0009edc7) field_cale_ev2_pane

0x395f,	// (0x0009ede7) field_cale_ev2_pane_g1_ParamLimits

0x395f,	// (0x0009ede7) field_cale_ev2_pane_g1

0x396b,	// (0x0009edf3) field_cale_ev2_pane_g2_ParamLimits

0x396b,	// (0x0009edf3) field_cale_ev2_pane_g2

0x3983,	// (0x0009ee0b) field_cale_ev2_pane_g3_ParamLimits

0x3983,	// (0x0009ee0b) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x000aab35) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x000aab35) field_cale_ev2_pane_g

0xeee6,	// (0x000aa36e) field_cale_ev2_pane_t1_ParamLimits

0xeee6,	// (0x000aa36e) field_cale_ev2_pane_t1

0xeefd,	// (0x000aa385) field_cale_ev2_pane_t2_ParamLimits

0xeefd,	// (0x000aa385) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x000aab3e) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x000aab3e) field_cale_ev2_pane_t

0x2933,	// (0x0009ddbb) main_postcard_pane_g5_ParamLimits

0x2933,	// (0x0009ddbb) main_postcard_pane_g5

0x2949,	// (0x0009ddd1) main_postcard_pane_g6_ParamLimits

0x2949,	// (0x0009ddd1) main_postcard_pane_g6

0x076c,	// (0x0009bbf4) camera2_autofocus_pane_cp_ParamLimits

0x076c,	// (0x0009bbf4) camera2_autofocus_pane_cp

0x9fe3,	// (0x000a546b) main_mup3_pane

0x39df,	// (0x0009ee67) main_mup3_pane_g1_ParamLimits

0x39df,	// (0x0009ee67) main_mup3_pane_g1

0x3a01,	// (0x0009ee89) main_mup3_pane_g2_ParamLimits

0x3a01,	// (0x0009ee89) main_mup3_pane_g2

0x3a7f,	// (0x0009ef07) main_mup3_pane_g3_ParamLimits

0x3a7f,	// (0x0009ef07) main_mup3_pane_g3

0x3ac5,	// (0x0009ef4d) main_mup3_pane_g4_ParamLimits

0x3ac5,	// (0x0009ef4d) main_mup3_pane_g4

0x3b0b,	// (0x0009ef93) main_mup3_pane_g5_ParamLimits

0x3b0b,	// (0x0009ef93) main_mup3_pane_g5

0x3b51,	// (0x0009efd9) main_mup3_pane_g6_ParamLimits

0x3b51,	// (0x0009efd9) main_mup3_pane_g6

0xa6d2,	// (0x000a5b5a) main_mup3_pane_g7_ParamLimits

0xa6d2,	// (0x000a5b5a) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x000aab4e) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x000aab4e) main_mup3_pane_g

0x3bcf,	// (0x0009f057) main_mup3_pane_t1_ParamLimits

0x3bcf,	// (0x0009f057) main_mup3_pane_t1

0x3c43,	// (0x0009f0cb) main_mup3_pane_t2_ParamLimits

0x3c43,	// (0x0009f0cb) main_mup3_pane_t2

0x3d17,	// (0x0009f19f) main_mup3_pane_t4_ParamLimits

0x3d17,	// (0x0009f19f) main_mup3_pane_t4

0x3d6d,	// (0x0009f1f5) main_mup3_pane_t5_ParamLimits

0x3d6d,	// (0x0009f1f5) main_mup3_pane_t5

0x3e29,	// (0x0009f2b1) main_mup3_pane_t6_ParamLimits

0x3e29,	// (0x0009f2b1) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x000aab5f) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x000aab5f) main_mup3_pane_t

0x3ee1,	// (0x0009f369) mup3_progress_pane_ParamLimits

0x3ee1,	// (0x0009f369) mup3_progress_pane

0x3f77,	// (0x0009f3ff) popup_mup3_control_window_ParamLimits

0x3f77,	// (0x0009f3ff) popup_mup3_control_window

0xe3c2,	// (0x000a984a) popup_mup3_text_window

0x3fa9,	// (0x0009f431) mup3_progress_pane_t1

0x3fc8,	// (0x0009f450) mup3_progress_pane_t2

0xe3ca,	// (0x000a9852) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x000aab6c) mup3_progress_pane_t

0xe3e7,	// (0x000a986f) mup_progress_pane_cp03

0x046c,	// (0x0009b8f4) bg_tb_trans_pane_cp04

0x3fe7,	// (0x0009f46f) mup3_volume_pane

0x3fef,	// (0x0009f477) popup_mup3_control_window_g1

0x3ff8,	// (0x0009f480) mup3_volume_pane_g1

0x4001,	// (0x0009f489) mup3_volume_pane_g2

0x400a,	// (0x0009f492) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x000aab73) mup3_volume_pane_g

0x046c,	// (0x0009b8f4) bg_tb_trans_pane_cp03

0xe3f7,	// (0x000a987f) popup_mup3_text_window_g1

0xe3ff,	// (0x000a9887) popup_mup3_text_window_t1

0xa7b2,	// (0x000a5c3a) list_calc_item_pane_g1_ParamLimits

0xcacc,	// (0x000a7f54) mup_volume_pane_cp_g1

0x3903,	// (0x0009ed8b) main_touch_calib_pane_t3

0x3917,	// (0x0009ed9f) main_touch_calib_pane_t4

0x392b,	// (0x0009edb3) main_touch_calib_pane_t5

0x9f76,	// (0x000a53fe) aid_cell_size_toolbar2

0x9f7e,	// (0x000a5406) aid_popup3_width_pane

0x9f8a,	// (0x000a5412) aid_zoom_text_msg_primary

0x1027,	// (0x0009c4af) vorec_t7

0xa776,	// (0x000a5bfe) bg_calc_paper_pane_g1_ParamLimits

0xa782,	// (0x000a5c0a) bg_calc_paper_pane_g2_ParamLimits

0xa78e,	// (0x000a5c16) bg_calc_paper_pane_g3_ParamLimits

0xa79a,	// (0x000a5c22) bg_calc_paper_pane_g4_ParamLimits

0xa7a6,	// (0x000a5c2e) bg_calc_paper_pane_g5_ParamLimits

0x093d,	// (0x0009bdc5) bg_calc_paper_pane_g6_ParamLimits

0x094c,	// (0x0009bdd4) bg_calc_paper_pane_g7_ParamLimits

0x095b,	// (0x0009bde3) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x000aa55b) bg_calc_paper_pane_g_ParamLimits

0x096e,	// (0x0009bdf6) calc_bg_paper_pane_g9_ParamLimits

0x076c,	// (0x0009bbf4) image_qvga_pane_ParamLimits

0x076c,	// (0x0009bbf4) image_qvga_pane

0xa649,	// (0x000a5ad1) bg_popup_sub_pane_cp04_ParamLimits

0xb722,	// (0x000a6baa) popup_mup_playback_window_g1_ParamLimits

0xb72e,	// (0x000a6bb6) popup_mup_playback_window_t1_ParamLimits

0xb743,	// (0x000a6bcb) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x000aa8b9) popup_mup_playback_window_t_ParamLimits

0xa6d2,	// (0x000a5b5a) main_mup2_pane_g3_ParamLimits

0xa6d2,	// (0x000a5b5a) main_mup2_pane_g3

0x1354,	// (0x0009c7dc) popup_toolbar_window_cp04

0xbb25,	// (0x000a6fad) popup_call2_audio_second_window_g3_ParamLimits

0xbb25,	// (0x000a6fad) popup_call2_audio_second_window_g3

0xbf3d,	// (0x000a73c5) popup_call2_audio_first_window_g4_ParamLimits

0xbf3d,	// (0x000a73c5) popup_call2_audio_first_window_g4

0xc564,	// (0x000a79ec) popup_call2_audio_in_window_g4_ParamLimits

0xc564,	// (0x000a79ec) popup_call2_audio_in_window_g4

0x2a60,	// (0x0009dee8) aid_area_sk_bg_cut_ParamLimits

0x2a60,	// (0x0009dee8) aid_area_sk_bg_cut

0xb758,	// (0x000a6be0) aid_area_sk_bg_cut_2_ParamLimits

0xb758,	// (0x000a6be0) aid_area_sk_bg_cut_2

0x046c,	// (0x0009b8f4) aid_placing_details_win

0x046c,	// (0x0009b8f4) aid_placing_details_win_2

0xa6c4,	// (0x000a5b4c) camera2_autofocus_pane_g1_ParamLimits

0x063b,	// (0x0009bac3) popup_fixed_preview_cale_window_ParamLimits

0x063b,	// (0x0009bac3) popup_fixed_preview_cale_window

0xb4c6,	// (0x000a694e) navi_slider_pane_g3

0xb4cf,	// (0x000a6957) navi_slider_pane_g4

0xb4d8,	// (0x000a6960) navi_slider_pane_g5

0xb4c6,	// (0x000a694e) navi_slider_pane_g6

0xb4e1,	// (0x000a6969) navi_slider_pane_g7

0xb623,	// (0x000a6aab) mup_scale_pane_g3

0xb62c,	// (0x000a6ab4) mup_scale_pane_g4

0xb635,	// (0x000a6abd) mup_scale_pane_g5

0x2705,	// (0x0009db8d) mup_scale_pane_g6

0x270e,	// (0x0009db96) mup_scale_pane_g7

0x376b,	// (0x0009ebf3) cams2_slider_pane_g3

0x376b,	// (0x0009ebf3) cams2_slider_pane_g4

0x376b,	// (0x0009ebf3) cams2_slider_pane_g5

0x376b,	// (0x0009ebf3) cams2_slider_pane_g6

0x376b,	// (0x0009ebf3) cams2_slider_pane_g7

0xa9dd,	// (0x000a5e65) camera2_autofocus_pane_cp_g1

0xc83a,	// (0x000a7cc2) bg_popup_preview_window_pane_cp02_ParamLimits

0xc83a,	// (0x000a7cc2) bg_popup_preview_window_pane_cp02

0xe40d,	// (0x000a9895) list_fp_cale_pane_ParamLimits

0xe40d,	// (0x000a9895) list_fp_cale_pane

0xe419,	// (0x000a98a1) popup_fixed_preview_cale_window_t1_ParamLimits

0xe419,	// (0x000a98a1) popup_fixed_preview_cale_window_t1

0x4013,	// (0x0009f49b) popup_fixed_preview_cale_window_t2_ParamLimits

0x4013,	// (0x0009f49b) popup_fixed_preview_cale_window_t2

0x4028,	// (0x0009f4b0) popup_fixed_preview_cale_window_t3_ParamLimits

0x4028,	// (0x0009f4b0) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x000aab7a) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x000aab7a) popup_fixed_preview_cale_window_t

0x403d,	// (0x0009f4c5) list_single_fp_cale_pane_ParamLimits

0x403d,	// (0x0009f4c5) list_single_fp_cale_pane

0xe437,	// (0x000a98bf) list_single_fp_cale_pane_g1_ParamLimits

0xe437,	// (0x000a98bf) list_single_fp_cale_pane_g1

0xe443,	// (0x000a98cb) list_single_fp_cale_pane_g2_ParamLimits

0xe443,	// (0x000a98cb) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x000aab81) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x000aab81) list_single_fp_cale_pane_g

0xe45c,	// (0x000a98e4) list_single_fp_cale_pane_t1_ParamLimits

0xe45c,	// (0x000a98e4) list_single_fp_cale_pane_t1

0xe46e,	// (0x000a98f6) list_single_fp_cale_pane_t2_ParamLimits

0xe46e,	// (0x000a98f6) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x000aab88) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x000aab88) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9ff1,	// (0x000a5479) main_dialer_pane

0x046c,	// (0x0009b8f4) aid_cell_size_keypad

0x046c,	// (0x0009b8f4) dialer_ne_pane

0x046c,	// (0x0009b8f4) grid_dialer_command_1_pane

0x046c,	// (0x0009b8f4) grid_dialer_command_2_pane

0x046c,	// (0x0009b8f4) grid_dialer_keypad_pane

0x4052,	// (0x0009f4da) bg_popup_call_pane_cp06_ParamLimits

0x4052,	// (0x0009f4da) bg_popup_call_pane_cp06

0x4052,	// (0x0009f4da) dialer_ne_clear_pane_ParamLimits

0x4052,	// (0x0009f4da) dialer_ne_clear_pane

0xa9dd,	// (0x000a5e65) dialer_ne_pane_g1

0xb59f,	// (0x000a6a27) dialer_ne_pane_t1_ParamLimits

0xb59f,	// (0x000a6a27) dialer_ne_pane_t1

0x4060,	// (0x0009f4e8) dialer_ne_pane_t2_ParamLimits

0x4060,	// (0x0009f4e8) dialer_ne_pane_t2

0x4088,	// (0x0009f510) dialer_ne_pane_t3_ParamLimits

0x4088,	// (0x0009f510) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x000aab8d) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x000aab8d) dialer_ne_pane_t

0x4088,	// (0x0009f510) dialer_ne_pane_t3_copy1_ParamLimits

0x4088,	// (0x0009f510) dialer_ne_pane_t3_copy1

0xe4a1,	// (0x000a9929) cell_dialer_keypad_pane_ParamLimits

0xe4a1,	// (0x000a9929) cell_dialer_keypad_pane

0x076c,	// (0x0009bbf4) cell_dialer_command_1_pane_ParamLimits

0x076c,	// (0x0009bbf4) cell_dialer_command_1_pane

0xe4b8,	// (0x000a9940) cell_dialer_command_2_pane_ParamLimits

0xe4b8,	// (0x000a9940) cell_dialer_command_2_pane

0x076c,	// (0x0009bbf4) bg_button_pane_cp02_ParamLimits

0x076c,	// (0x0009bbf4) bg_button_pane_cp02

0xa6c4,	// (0x000a5b4c) cell_dialer_keypad_pane_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) cell_dialer_keypad_pane_g1

0x076c,	// (0x0009bbf4) bg_button_pane_cp03_ParamLimits

0x076c,	// (0x0009bbf4) bg_button_pane_cp03

0xa6c4,	// (0x000a5b4c) cell_dialer_command_1_pane_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) cell_dialer_command_1_pane_g1

0x046c,	// (0x0009b8f4) bg_button_pane_cp04

0xa9dd,	// (0x000a5e65) cell_dialer_command_2_pane_g1

0x046c,	// (0x0009b8f4) bg_button_pane_cp06

0xa9dd,	// (0x000a5e65) dialer_ne_clear_pane_g1

0xb390,	// (0x000a6818) navi_pane_g2

0xb3be,	// (0x000a6846) navi_pane_g3

0x0002,

0xf334,	// (0x000aa7bc) navi_pane_g

0xb44d,	// (0x000a68d5) navi_pane_mv_g2

0xb474,	// (0x000a68fc) navi_pane_mv_g5

0x24e8,	// (0x0009d970) navi_pane_mv_t1

0xa758,	// (0x000a5be0) main_clock2_pane

0x076c,	// (0x0009bbf4) main_clock2_list_pane_ParamLimits

0x076c,	// (0x0009bbf4) main_clock2_list_pane

0x411e,	// (0x0009f5a6) main_clock2_pane_t1_ParamLimits

0x411e,	// (0x0009f5a6) main_clock2_pane_t1

0x4159,	// (0x0009f5e1) main_clock2_pane_t2_ParamLimits

0x4159,	// (0x0009f5e1) main_clock2_pane_t2

0x0004,

0xf711,	// (0x000aab99) main_clock2_pane_t_ParamLimits

0xf711,	// (0x000aab99) main_clock2_pane_t

0x41f9,	// (0x0009f681) popup_clock_analogue_window_cp03_ParamLimits

0x41f9,	// (0x0009f681) popup_clock_analogue_window_cp03

0x421e,	// (0x0009f6a6) popup_clock_digital_window_cp02_ParamLimits

0x421e,	// (0x0009f6a6) popup_clock_digital_window_cp02

0x4297,	// (0x0009f71f) main_clock2_list_single_pane_ParamLimits

0x4297,	// (0x0009f71f) main_clock2_list_single_pane

0xa99d,	// (0x000a5e25) list_highlight_pane_cp05

0xe4ff,	// (0x000a9987) main_clock2_list_single_pane_t1

0x1354,	// (0x0009c7dc) popup_toolbar_window_cp04_ParamLimits

0xa6d2,	// (0x000a5b5a) camera2_autofocus_pane_g2_ParamLimits

0xa6d2,	// (0x000a5b5a) camera2_autofocus_pane_g2

0xa6d2,	// (0x000a5b5a) camera2_autofocus_pane_g3_ParamLimits

0xa6d2,	// (0x000a5b5a) camera2_autofocus_pane_g3

0xa6d2,	// (0x000a5b5a) camera2_autofocus_pane_g4_ParamLimits

0xa6d2,	// (0x000a5b5a) camera2_autofocus_pane_g4

0xa6d2,	// (0x000a5b5a) camera2_autofocus_pane_g5_ParamLimits

0xa6d2,	// (0x000a5b5a) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x000aaadd) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x000aaadd) camera2_autofocus_pane_g

0x399b,	// (0x0009ee23) camera2_autofocus_pane_cp_g2

0x39a3,	// (0x0009ee2b) camera2_autofocus_pane_cp_g3

0x39ab,	// (0x0009ee33) camera2_autofocus_pane_cp_g4

0x39b3,	// (0x0009ee3b) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x000aab43) camera2_autofocus_pane_cp_g

0x046c,	// (0x0009b8f4) popup_dialer_spcha_window

0x046c,	// (0x0009b8f4) bg_popup_sub_pane_cp07

0x046c,	// (0x0009b8f4) list_spcha_pane

0xe50d,	// (0x000a9995) list_single_spcha_pane_ParamLimits

0xe50d,	// (0x000a9995) list_single_spcha_pane

0x046c,	// (0x0009b8f4) list_highlight_pane_cp06

0xaf52,	// (0x000a63da) list_single_spcha_pane_t1

0xc30e,	// (0x000a7796) popup_call2_audio_out_window_g4_ParamLimits

0xc30e,	// (0x000a7796) popup_call2_audio_out_window_g4

0x9ff1,	// (0x000a5479) main_imed2_pane

0xc860,	// (0x000a7ce8) popup_imed_adjust2_window

0x32ef,	// (0x0009e777) popup_imed_trans_window_ParamLimits

0x32ef,	// (0x0009e777) popup_imed_trans_window

0xcbaf,	// (0x000a8037) popup_blid_sat_info2_window_t1

0xcbbd,	// (0x000a8045) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x000aaa72) popup_blid_sat_info2_window_t

0x4348,	// (0x0009f7d0) aid_size_cell_colour_35

0x4368,	// (0x0009f7f0) aid_size_cell_colour_112

0x4388,	// (0x0009f810) aid_size_cell_effect

0xb5b3,	// (0x000a6a3b) bg_tb_trans_pane_cp02

0xae6c,	// (0x000a62f4) heading_imed_pane

0x43a8,	// (0x0009f830) listscroll_imed_pane

0xe51f,	// (0x000a99a7) heading_imed_pane_g1

0xe527,	// (0x000a99af) heading_imed_pane_t1

0xe535,	// (0x000a99bd) grid_imed_colour_35_pane_ParamLimits

0xe535,	// (0x000a99bd) grid_imed_colour_35_pane

0x43b4,	// (0x0009f83c) grid_imed_effect_pane

0xe54c,	// (0x000a99d4) list_imed_aspect_pane

0x43ca,	// (0x0009f852) scroll_pane_cp027_ParamLimits

0x43ca,	// (0x0009f852) scroll_pane_cp027

0x43db,	// (0x0009f863) cell_imed_effect_pane_ParamLimits

0x43db,	// (0x0009f863) cell_imed_effect_pane

0xe554,	// (0x000a99dc) cell_imed_colour_pane_ParamLimits

0xe554,	// (0x000a99dc) cell_imed_colour_pane

0xe596,	// (0x000a9a1e) cell_imed_colour_pane_g1_ParamLimits

0xe596,	// (0x000a9a1e) cell_imed_colour_pane_g1

0xe5a7,	// (0x000a9a2f) hgihlgiht_grid_pane_cp016_ParamLimits

0xe5a7,	// (0x000a9a2f) hgihlgiht_grid_pane_cp016

0x4402,	// (0x0009f88a) cell_imed_effect_pane_g1

0x440a,	// (0x0009f892) grid_highlight_pane_cp017

0xe5b8,	// (0x000a9a40) list_imed_single_pane_ParamLimits

0xe5b8,	// (0x000a9a40) list_imed_single_pane

0x046c,	// (0x0009b8f4) list_highlight_pane_cp07

0xe5cd,	// (0x000a9a55) list_imed_aspect_pane_comp1_t1

0xb5b3,	// (0x000a6a3b) bg_tb_trans_pane_cp05

0xe5ef,	// (0x000a9a77) popup_imed_adjust2_window_g1

0xe616,	// (0x000a9a9e) popup_imed_adjust2_window_t1

0xe62e,	// (0x000a9ab6) slider_imed_adjust_pane

0xe642,	// (0x000a9aca) slider_imed_adjust_pane_g1

0xe652,	// (0x000a9ada) slider_imed_adjust_pane_g2

0xe662,	// (0x000a9aea) slider_imed_adjust_pane_g3

0xe673,	// (0x000a9afb) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x000aabb6) slider_imed_adjust_pane_g

0x4413,	// (0x0009f89b) aid_size_cell_clipart2

0x441f,	// (0x0009f8a7) grid_imed_clipart_pane

0xe684,	// (0x000a9b0c) scroll_pane_cp031

0x4429,	// (0x0009f8b1) cell_imed_clipart_pane_ParamLimits

0x4429,	// (0x0009f8b1) cell_imed_clipart_pane

0x444b,	// (0x0009f8d3) cell_imed_clipart_pane_g1

0x046c,	// (0x0009b8f4) grid_highlight_pane_cp014

0x40fa,	// (0x0009f582) main_clock2_pane_g1_ParamLimits

0x40fa,	// (0x0009f582) main_clock2_pane_g1

0x423e,	// (0x0009f6c6) aid_call2_pane_cp10

0x4250,	// (0x0009f6d8) aid_call_pane_cp10

0xb2f1,	// (0x000a6779) popup_clock_analogue_window_cp10_g1

0xb2f1,	// (0x000a6779) popup_clock_analogue_window_cp10_g2

0x4262,	// (0x0009f6ea) popup_clock_analogue_window_cp10_g3

0x4262,	// (0x0009f6ea) popup_clock_analogue_window_cp10_g4

0xb2f1,	// (0x000a6779) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x000aaba4) popup_clock_analogue_window_cp10_g

0x4278,	// (0x0009f700) popup_clock_analogue_window_cp10_t1

0x42a9,	// (0x0009f731) clock_digital_number_pane_cp10_ParamLimits

0x42a9,	// (0x0009f731) clock_digital_number_pane_cp10

0x42c1,	// (0x0009f749) clock_digital_number_pane_cp11_ParamLimits

0x42c1,	// (0x0009f749) clock_digital_number_pane_cp11

0x42d9,	// (0x0009f761) clock_digital_number_pane_cp12_ParamLimits

0x42d9,	// (0x0009f761) clock_digital_number_pane_cp12

0x42f3,	// (0x0009f77b) clock_digital_number_pane_cp13_ParamLimits

0x42f3,	// (0x0009f77b) clock_digital_number_pane_cp13

0x430d,	// (0x0009f795) clock_digital_separator_pane_cp10_ParamLimits

0x430d,	// (0x0009f795) clock_digital_separator_pane_cp10

0x4327,	// (0x0009f7af) popup_clock_digital_window_cp02_t1_ParamLimits

0x4327,	// (0x0009f7af) popup_clock_digital_window_cp02_t1

0xa641,	// (0x000a5ac9) clock_digital_number_pane_cp10_g1

0xa641,	// (0x000a5ac9) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x000aabbf) clock_digital_number_pane_cp10_g

0xa641,	// (0x000a5ac9) clock_digital_separator_pane_cp10_g1

0xa641,	// (0x000a5ac9) clock_digital_separator_pane_g2_cp10

0xb47c,	// (0x000a6904) navi_pane_vded_g4

0xb485,	// (0x000a690d) navi_pane_vded_g5

0xb48e,	// (0x000a6916) navi_pane_vded_t1

0x9ff1,	// (0x000a5479) main_vded_pane

0x4454,	// (0x0009f8dc) main_vded_pane_g1

0x445e,	// (0x0009f8e6) main_vded_pane_g2

0x4468,	// (0x0009f8f0) main_vded_pane_g3

0x0002,

0xf73c,	// (0x000aabc4) main_vded_pane_g

0x4472,	// (0x0009f8fa) main_vded_pane_t1

0x4480,	// (0x0009f908) main_vded_pane_t2

0x0001,

0xf743,	// (0x000aabcb) main_vded_pane_t

0x448e,	// (0x0009f916) vded_slider_pane

0x4496,	// (0x0009f91e) vded_video_pane

0xe68c,	// (0x000a9b14) vded_video_pane_g1

0x449e,	// (0x0009f926) vded_video_pane_g2

0xa9dd,	// (0x000a5e65) vded_video_pane_g3

0x0002,

0xf748,	// (0x000aabd0) vded_video_pane_g

0xe696,	// (0x000a9b1e) vded_slider_pane_g1

0xcacc,	// (0x000a7f54) vded_slider_pane_g2

0xe69f,	// (0x000a9b27) vded_slider_pane_g3

0xe6a8,	// (0x000a9b30) vded_slider_pane_g4

0xe6b1,	// (0x000a9b39) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x000aabd7) vded_slider_pane_g

0x3f5f,	// (0x0009f3e7) mup3_rocker_pane_ParamLimits

0x3f5f,	// (0x0009f3e7) mup3_rocker_pane

0x44a7,	// (0x0009f92f) mup3_control_keys_pane_g1

0x44af,	// (0x0009f937) mup3_control_keys_pane_g2

0x44b7,	// (0x0009f93f) mup3_control_keys_pane_g3

0x44bf,	// (0x0009f947) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x000aabe2) mup3_control_keys_pane_g

0x0672,	// (0x0009bafa) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0672,	// (0x0009bafa) popup_toolbar2_fixed_window_cp01

0x3f93,	// (0x0009f41b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x3f93,	// (0x0009f41b) popup_toolbar2_fixed_window_cp02

0xbc97,	// (0x000a711f) popup_call2_audio_second_window_t4_ParamLimits

0xbc97,	// (0x000a711f) popup_call2_audio_second_window_t4

0xc1d3,	// (0x000a765b) popup_call2_audio_first_window_t6_ParamLimits

0xc1d3,	// (0x000a765b) popup_call2_audio_first_window_t6

0xc411,	// (0x000a7899) popup_call2_audio_out_window_t6_ParamLimits

0xc411,	// (0x000a7899) popup_call2_audio_out_window_t6

0x9ff1,	// (0x000a5479) main_vitu_pane

0x076c,	// (0x0009bbf4) aid_size_cell_itu_ParamLimits

0x076c,	// (0x0009bbf4) aid_size_cell_itu

0x076c,	// (0x0009bbf4) bg_popup_window_pane_cp08_ParamLimits

0x076c,	// (0x0009bbf4) bg_popup_window_pane_cp08

0x076c,	// (0x0009bbf4) field_vitu_entry_pane_ParamLimits

0x076c,	// (0x0009bbf4) field_vitu_entry_pane

0x076c,	// (0x0009bbf4) grid_vitu_function_pane_ParamLimits

0x076c,	// (0x0009bbf4) grid_vitu_function_pane

0x076c,	// (0x0009bbf4) grid_vitu_itu_pane_ParamLimits

0x076c,	// (0x0009bbf4) grid_vitu_itu_pane

0x076c,	// (0x0009bbf4) cell_vitu_itu_pane_ParamLimits

0x076c,	// (0x0009bbf4) cell_vitu_itu_pane

0x076c,	// (0x0009bbf4) cell_vitu_function_pane_ParamLimits

0x076c,	// (0x0009bbf4) cell_vitu_function_pane

0x076c,	// (0x0009bbf4) bg_popup_sub_pane_cp08_ParamLimits

0x076c,	// (0x0009bbf4) bg_popup_sub_pane_cp08

0xa9af,	// (0x000a5e37) field_vitu_entry_pane_t1_ParamLimits

0xa9af,	// (0x000a5e37) field_vitu_entry_pane_t1

0xe6ba,	// (0x000a9b42) field_vitu_entry_pane_t2_ParamLimits

0xe6ba,	// (0x000a9b42) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x000aabeb) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x000aabeb) field_vitu_entry_pane_t

0xcb56,	// (0x000a7fde) bg_button_pane_cp05_ParamLimits

0xcb56,	// (0x000a7fde) bg_button_pane_cp05

0xe6d7,	// (0x000a9b5f) cell_vitu_itu_pane_g1

0xb58b,	// (0x000a6a13) cell_vitu_itu_pane_t1_ParamLimits

0xb58b,	// (0x000a6a13) cell_vitu_itu_pane_t1

0xb58b,	// (0x000a6a13) cell_vitu_itu_pane_t2_ParamLimits

0xb58b,	// (0x000a6a13) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x000aabf0) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x000aabf0) cell_vitu_itu_pane_t

0x046c,	// (0x0009b8f4) bg_button_pane_cp07

0xa9dd,	// (0x000a5e65) cell_vitu_function_pane_g1

0xa702,	// (0x000a5b8a) main_calc_pane_g1

0x049a,	// (0x0009b922) aid_visual_content_pane

0x9ff1,	// (0x000a5479) main_vradio_pane

0xa6c4,	// (0x000a5b4c) main_vradio_pane_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) main_vradio_pane_g1

0xa6d2,	// (0x000a5b5a) main_vradio_pane_g2_ParamLimits

0xa6d2,	// (0x000a5b5a) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x000aabf7) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x000aabf7) main_vradio_pane_g

0xa9af,	// (0x000a5e37) main_vradio_pane_t1_ParamLimits

0xa9af,	// (0x000a5e37) main_vradio_pane_t1

0xa9af,	// (0x000a5e37) main_vradio_pane_t2_ParamLimits

0xa9af,	// (0x000a5e37) main_vradio_pane_t2

0xb59f,	// (0x000a6a27) main_vradio_pane_t3_ParamLimits

0xb59f,	// (0x000a6a27) main_vradio_pane_t3

0x0002,

0xf774,	// (0x000aabfc) main_vradio_pane_t_ParamLimits

0xf774,	// (0x000aabfc) main_vradio_pane_t

0x076c,	// (0x0009bbf4) vradio_rocker_control_pane_ParamLimits

0x076c,	// (0x0009bbf4) vradio_rocker_control_pane

0x076c,	// (0x0009bbf4) vradio_station_info_pane_ParamLimits

0x076c,	// (0x0009bbf4) vradio_station_info_pane

0x076c,	// (0x0009bbf4) vradio_frequency_info_pane_ParamLimits

0x076c,	// (0x0009bbf4) vradio_frequency_info_pane

0xa9dd,	// (0x000a5e65) vradio_station_info_pane_g1

0xb58b,	// (0x000a6a13) vradio_station_info_pane_t1_ParamLimits

0xb58b,	// (0x000a6a13) vradio_station_info_pane_t1

0xb59f,	// (0x000a6a27) vradio_station_info_pane_t2_ParamLimits

0xb59f,	// (0x000a6a27) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x000aac03) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x000aac03) vradio_station_info_pane_t

0x046c,	// (0x0009b8f4) vradio_tuning_pane

0x44cf,	// (0x0009f957) vradio_rocker_control_pane_g1

0xe6f3,	// (0x000a9b7b) vradio_rocker_control_pane_g2

0x44d9,	// (0x0009f961) vradio_rocker_control_pane_g3

0x44e3,	// (0x0009f96b) vradio_rocker_control_pane_g4

0x44ed,	// (0x0009f975) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x000aac08) vradio_rocker_control_pane_g

0xa9dd,	// (0x000a5e65) vradio_frequency_info_pane_g1

0xa9af,	// (0x000a5e37) vradio_frequency_info_pane_t1_ParamLimits

0xa9af,	// (0x000a5e37) vradio_frequency_info_pane_t1

0x44f7,	// (0x0009f97f) vradio_tuning_pane_g1

0x4504,	// (0x0009f98c) vradio_tuning_pane_t1

0x9fa2,	// (0x000a542a) area_side_right_pane_ParamLimits

0x9fa2,	// (0x000a542a) area_side_right_pane

0xc801,	// (0x000a7c89) status_small_pane_g1

0xc809,	// (0x000a7c91) status_small_pane_g2

0xc812,	// (0x000a7c9a) status_small_pane_g3

0xc81b,	// (0x000a7ca3) status_small_pane_g4

0x0003,

0xf54c,	// (0x000aa9d4) status_small_pane_g

0xc824,	// (0x000a7cac) status_small_pane_t1

0x9ff1,	// (0x000a5479) main_video3_pane

0xe6fb,	// (0x000a9b83) cams_zoom_vslider_pane

0xe703,	// (0x000a9b8b) image3_wide_pane_ParamLimits

0xe703,	// (0x000a9b8b) image3_wide_pane

0xe71d,	// (0x000a9ba5) image3_wide_small_pane

0xe729,	// (0x000a9bb1) main_video3_pane_g1_ParamLimits

0xe729,	// (0x000a9bb1) main_video3_pane_g1

0xe745,	// (0x000a9bcd) main_video3_pane_g2_ParamLimits

0xe745,	// (0x000a9bcd) main_video3_pane_g2

0x0001,

0xf78b,	// (0x000aac13) main_video3_pane_g_ParamLimits

0xf78b,	// (0x000aac13) main_video3_pane_g

0xe761,	// (0x000a9be9) main_video3_pane_t1_ParamLimits

0xe761,	// (0x000a9be9) main_video3_pane_t1

0xe78c,	// (0x000a9c14) main_video3_pane_t2_ParamLimits

0xe78c,	// (0x000a9c14) main_video3_pane_t2

0xe7b7,	// (0x000a9c3f) main_video3_pane_t3_ParamLimits

0xe7b7,	// (0x000a9c3f) main_video3_pane_t3

0x0002,

0xf790,	// (0x000aac18) main_video3_pane_t_ParamLimits

0xf790,	// (0x000aac18) main_video3_pane_t

0xe7e4,	// (0x000a9c6c) cams_zoom_vslider_pane_g1

0xe7ed,	// (0x000a9c75) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x000aac1f) cams_zoom_vslider_pane_g

0xe7f5,	// (0x000a9c7d) small_slider_vertical_pane

0xa9dd,	// (0x000a5e65) small_slider_vertical_pane_g1

0xa9dd,	// (0x000a5e65) small_slider_vertical_pane_g2

0xe7fd,	// (0x000a9c85) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x000aac24) small_slider_vertical_pane_g

0x9ff1,	// (0x000a5479) main_hwr_training_pane

0xe806,	// (0x000a9c8e) hwr_training_instruct_pane_ParamLimits

0xe806,	// (0x000a9c8e) hwr_training_instruct_pane

0x4513,	// (0x0009f99b) hwr_training_navi_pane_ParamLimits

0x4513,	// (0x0009f99b) hwr_training_navi_pane

0x4532,	// (0x0009f9ba) hwr_training_write_pane_ParamLimits

0x4532,	// (0x0009f9ba) hwr_training_write_pane

0x046c,	// (0x0009b8f4) bg_frame_shadow_pane

0xe83d,	// (0x000a9cc5) hwr_training_write_pane_g1

0xe845,	// (0x000a9ccd) hwr_training_write_pane_g2

0xe84d,	// (0x000a9cd5) hwr_training_write_pane_g3

0xe855,	// (0x000a9cdd) hwr_training_write_pane_g4

0xe85d,	// (0x000a9ce5) hwr_training_write_pane_g5

0xe865,	// (0x000a9ced) hwr_training_write_pane_g6

0xe86d,	// (0x000a9cf5) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x000aac2b) hwr_training_write_pane_g

0xcff4,	// (0x000a847c) hwr_training_navi_pane_g1_ParamLimits

0xcff4,	// (0x000a847c) hwr_training_navi_pane_g1

0xd006,	// (0x000a848e) hwr_training_navi_pane_g2_ParamLimits

0xd006,	// (0x000a848e) hwr_training_navi_pane_g2

0xd018,	// (0x000a84a0) hwr_training_navi_pane_g3_ParamLimits

0xd018,	// (0x000a84a0) hwr_training_navi_pane_g3

0xd028,	// (0x000a84b0) hwr_training_navi_pane_g4_ParamLimits

0xd028,	// (0x000a84b0) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x000aac3a) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x000aac3a) hwr_training_navi_pane_g

0xd035,	// (0x000a84bd) hwr_training_navi_pane_t1

0x457a,	// (0x0009fa02) list_single_hwr_training_instruct_pane_ParamLimits

0x457a,	// (0x0009fa02) list_single_hwr_training_instruct_pane

0xe875,	// (0x000a9cfd) list_single_hwr_training_instruct_pane_t1

0xccb0,	// (0x000a8138) bg_frame_shadow_pane_g1

0xe884,	// (0x000a9d0c) bg_frame_shadow_pane_g2

0xe88c,	// (0x000a9d14) bg_frame_shadow_pane_g3

0xe894,	// (0x000a9d1c) bg_frame_shadow_pane_g4

0xe89c,	// (0x000a9d24) bg_frame_shadow_pane_g5

0xe8a4,	// (0x000a9d2c) bg_frame_shadow_pane_g6

0xe8ac,	// (0x000a9d34) bg_frame_shadow_pane_g7

0xa834,	// (0x000a5cbc) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x000aac45) bg_frame_shadow_pane_g

0x9ff1,	// (0x000a5479) main_video_tele_dialer_pane

0x458f,	// (0x0009fa17) aid_size_cell_video_keypad_ParamLimits

0x458f,	// (0x0009fa17) aid_size_cell_video_keypad

0x45a9,	// (0x0009fa31) grid_video_dialer_keypad_pane_ParamLimits

0x45a9,	// (0x0009fa31) grid_video_dialer_keypad_pane

0x45f5,	// (0x0009fa7d) video_down_pane_cp_ParamLimits

0x45f5,	// (0x0009fa7d) video_down_pane_cp

0x4627,	// (0x0009faaf) cell_video_dialer_keypad_pane_ParamLimits

0x4627,	// (0x0009faaf) cell_video_dialer_keypad_pane

0xe8b4,	// (0x000a9d3c) bg_button_pane_cp08_ParamLimits

0xe8b4,	// (0x000a9d3c) bg_button_pane_cp08

0x4649,	// (0x0009fad1) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4649,	// (0x0009fad1) cell_video_dialer_keypad_pane_g1

0x3f49,	// (0x0009f3d1) mup3_rocker2_pane_ParamLimits

0x3f49,	// (0x0009f3d1) mup3_rocker2_pane

0xa9dd,	// (0x000a5e65) mup3_rocker2_pane_g1

0x31d0,	// (0x0009e658) main_dialer2_pane

0x9ff1,	// (0x000a5479) main_mp4_pane

0xd061,	// (0x000a84e9) main_mp4_pane_g1_ParamLimits

0xd061,	// (0x000a84e9) main_mp4_pane_g1

0xd061,	// (0x000a84e9) main_mp4_pane_g2_ParamLimits

0xd061,	// (0x000a84e9) main_mp4_pane_g2

0x4680,	// (0x0009fb08) main_mp4_pane_g3_ParamLimits

0x4680,	// (0x0009fb08) main_mp4_pane_g3

0xd06f,	// (0x000a84f7) main_mp4_pane_g4_ParamLimits

0xd06f,	// (0x000a84f7) main_mp4_pane_g4

0xd09d,	// (0x000a8525) main_mp4_pane_g5_ParamLimits

0xd09d,	// (0x000a8525) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x000aac65) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x000aac65) main_mp4_pane_g

0xd111,	// (0x000a8599) main_mp4_pane_t1_ParamLimits

0xd111,	// (0x000a8599) main_mp4_pane_t1

0xd16d,	// (0x000a85f5) main_mp4_pane_t2_ParamLimits

0xd16d,	// (0x000a85f5) main_mp4_pane_t2

0xe8c0,	// (0x000a9d48) main_mp4_pane_t3_ParamLimits

0xe8c0,	// (0x000a9d48) main_mp4_pane_t3

0xd1bf,	// (0x000a8647) main_mp4_pane_t4_ParamLimits

0xd1bf,	// (0x000a8647) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x000aac76) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x000aac76) main_mp4_pane_t

0xd203,	// (0x000a868b) mp4_progress_pane_ParamLimits

0xd203,	// (0x000a868b) mp4_progress_pane

0xd24d,	// (0x000a86d5) mp4_rocker_pane_ParamLimits

0xd24d,	// (0x000a86d5) mp4_rocker_pane

0xe8ee,	// (0x000a9d76) mp4_progress_pane_t1

0xe907,	// (0x000a9d8f) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x000aac7f) mp4_progress_pane_t

0xe920,	// (0x000a9da8) mup_progress_pane_cp04

0x376b,	// (0x0009ebf3) mp4_rocker_pane_g1

0x46bc,	// (0x0009fb44) aid_cell_size_keypad2_ParamLimits

0x46bc,	// (0x0009fb44) aid_cell_size_keypad2

0x46d2,	// (0x0009fb5a) dialer2_ne_pane_ParamLimits

0x46d2,	// (0x0009fb5a) dialer2_ne_pane

0x46ec,	// (0x0009fb74) grid_dialer2_keypad_pane_ParamLimits

0x46ec,	// (0x0009fb74) grid_dialer2_keypad_pane

0xcb56,	// (0x000a7fde) bg_popup_call_pane_cp07_ParamLimits

0xcb56,	// (0x000a7fde) bg_popup_call_pane_cp07

0x4708,	// (0x0009fb90) dialer2_ne_pane_t1_ParamLimits

0x4708,	// (0x0009fb90) dialer2_ne_pane_t1

0x4743,	// (0x0009fbcb) cell_dialer2_keypad_pane_ParamLimits

0x4743,	// (0x0009fbcb) cell_dialer2_keypad_pane

0xe945,	// (0x000a9dcd) bg_button_pane_pane_cp04_ParamLimits

0xe945,	// (0x000a9dcd) bg_button_pane_pane_cp04

0x4765,	// (0x0009fbed) cell_dialer2_keypad_pane_g1_ParamLimits

0x4765,	// (0x0009fbed) cell_dialer2_keypad_pane_g1

0x1228,	// (0x0009c6b0) aid_placing_vt_set_content_ParamLimits

0x1228,	// (0x0009c6b0) aid_placing_vt_set_content

0x1250,	// (0x0009c6d8) aid_placing_vt_set_title_ParamLimits

0x1250,	// (0x0009c6d8) aid_placing_vt_set_title

0x9ff1,	// (0x000a5479) main_image3_pane

0x482b,	// (0x0009fcb3) area_side_right_pane_cp01_ParamLimits

0x482b,	// (0x0009fcb3) area_side_right_pane_cp01

0xd061,	// (0x000a84e9) main_image3_pane_g1_ParamLimits

0xd061,	// (0x000a84e9) main_image3_pane_g1

0x4842,	// (0x0009fcca) main_image3_pane_g2_ParamLimits

0x4842,	// (0x0009fcca) main_image3_pane_g2

0x486a,	// (0x0009fcf2) main_image3_pane_g3_ParamLimits

0x486a,	// (0x0009fcf2) main_image3_pane_g3

0x4894,	// (0x0009fd1c) main_image3_pane_g4_ParamLimits

0x4894,	// (0x0009fd1c) main_image3_pane_g4

0x0003,

0xf806,	// (0x000aac8e) main_image3_pane_g_ParamLimits

0xf806,	// (0x000aac8e) main_image3_pane_g

0x48be,	// (0x0009fd46) main_image3_pane_t1_ParamLimits

0x48be,	// (0x0009fd46) main_image3_pane_t1

0x4916,	// (0x0009fd9e) main_image3_pane_t2_ParamLimits

0x4916,	// (0x0009fd9e) main_image3_pane_t2

0x4968,	// (0x0009fdf0) main_image3_pane_t3_ParamLimits

0x4968,	// (0x0009fdf0) main_image3_pane_t3

0x0003,

0xf80f,	// (0x000aac97) main_image3_pane_t_ParamLimits

0xf80f,	// (0x000aac97) main_image3_pane_t

0x076c,	// (0x0009bbf4) grid_sctrl_middle_pane_cp01_ParamLimits

0x076c,	// (0x0009bbf4) grid_sctrl_middle_pane_cp01

0x49f0,	// (0x0009fe78) cell_sctrl_middle_pane_cp01_ParamLimits

0x49f0,	// (0x0009fe78) cell_sctrl_middle_pane_cp01

0x4a0d,	// (0x0009fe95) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4a0d,	// (0x0009fe95) cell_sctrl_middle_pane_cp01_g1

0x9ff1,	// (0x000a5479) main_call4_pane

0x4a23,	// (0x0009feab) aid_size_button_call4_ParamLimits

0x4a23,	// (0x0009feab) aid_size_button_call4

0x4a56,	// (0x0009fede) call4_windows_pane_ParamLimits

0x4a56,	// (0x0009fede) call4_windows_pane

0x4a75,	// (0x0009fefd) grid_call4_button_pane_ParamLimits

0x4a75,	// (0x0009fefd) grid_call4_button_pane

0x4aa8,	// (0x0009ff30) call4_windows_conf_pane

0x4abf,	// (0x0009ff47) popup_call4_audio_first_window_ParamLimits

0x4abf,	// (0x0009ff47) popup_call4_audio_first_window

0x4b0f,	// (0x0009ff97) popup_call4_audio_second_window_ParamLimits

0x4b0f,	// (0x0009ff97) popup_call4_audio_second_window

0x4b26,	// (0x0009ffae) popup_call4_audio_wait_window_ParamLimits

0x4b26,	// (0x0009ffae) popup_call4_audio_wait_window

0x4b34,	// (0x0009ffbc) cell_call4_button_pane_ParamLimits

0x4b34,	// (0x0009ffbc) cell_call4_button_pane

0x4b59,	// (0x0009ffe1) bg_button_pane_cp09_ParamLimits

0x4b59,	// (0x0009ffe1) bg_button_pane_cp09

0x4b65,	// (0x0009ffed) cell_call4_button_pane_g1_ParamLimits

0x4b65,	// (0x0009ffed) cell_call4_button_pane_g1

0x4b8b,	// (0x000a0013) cell_call4_button_pane_t1_ParamLimits

0x4b8b,	// (0x000a0013) cell_call4_button_pane_t1

0xe959,	// (0x000a9de1) popup_call4_audio_conf_window_ParamLimits

0xe959,	// (0x000a9de1) popup_call4_audio_conf_window

0x3fa9,	// (0x0009f431) mup3_progress_pane_t1_ParamLimits

0x3fc8,	// (0x0009f450) mup3_progress_pane_t2_ParamLimits

0xe3ca,	// (0x000a9852) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x000aab6c) mup3_progress_pane_t_ParamLimits

0xe3e7,	// (0x000a986f) mup_progress_pane_cp03_ParamLimits

0x44c7,	// (0x0009f94f) mup3_control_keys_pane_g4_copy1

0xd231,	// (0x000a86b9) mp4_rocker2_pane_ParamLimits

0xd231,	// (0x000a86b9) mp4_rocker2_pane

0xe96d,	// (0x000a9df5) mp4_rocker2_pane_g1

0xe975,	// (0x000a9dfd) mp4_rocker2_pane_g2

0xd2d1,	// (0x000a8759) mp4_rocker2_pane_g3

0xd2d9,	// (0x000a8761) mp4_rocker2_pane_g4

0xd2e1,	// (0x000a8769) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x000aaca0) mp4_rocker2_pane_g

0x9ff1,	// (0x000a5479) main_camera4_pane

0x9ff1,	// (0x000a5479) main_video4_pane

0x45c3,	// (0x0009fa4b) main_video_tele_dialer_pane_t1_ParamLimits

0x45c3,	// (0x0009fa4b) main_video_tele_dialer_pane_t1

0x45dc,	// (0x0009fa64) main_video_tele_dialer_pane_t2_ParamLimits

0x45dc,	// (0x0009fa64) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x000aac56) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x000aac56) main_video_tele_dialer_pane_t

0x4bc9,	// (0x000a0051) cam4_autofocus_pane_ParamLimits

0x4bc9,	// (0x000a0051) cam4_autofocus_pane

0x4bdf,	// (0x000a0067) cam4_image_uncrop_pane_ParamLimits

0x4bdf,	// (0x000a0067) cam4_image_uncrop_pane

0x4bf9,	// (0x000a0081) cam4_indicators_pane_ParamLimits

0x4bf9,	// (0x000a0081) cam4_indicators_pane

0x4c24,	// (0x000a00ac) main_camera4_pane_g1_ParamLimits

0x4c24,	// (0x000a00ac) main_camera4_pane_g1

0x4c36,	// (0x000a00be) main_camera4_pane_g2_ParamLimits

0x4c36,	// (0x000a00be) main_camera4_pane_g2

0x4c49,	// (0x000a00d1) main_camera4_pane_g3_ParamLimits

0x4c49,	// (0x000a00d1) main_camera4_pane_g3

0x4c5c,	// (0x000a00e4) main_camera4_pane_g4_ParamLimits

0x4c5c,	// (0x000a00e4) main_camera4_pane_g4

0x4c6f,	// (0x000a00f7) main_camera4_pane_g5_ParamLimits

0x4c6f,	// (0x000a00f7) main_camera4_pane_g5

0x0005,

0xf823,	// (0x000aacab) main_camera4_pane_g_ParamLimits

0xf823,	// (0x000aacab) main_camera4_pane_g

0x4c93,	// (0x000a011b) main_camera4_pane_t1_ParamLimits

0x4c93,	// (0x000a011b) main_camera4_pane_t1

0xd317,	// (0x000a879f) bg_tb_trans_pane_cp06

0xd32d,	// (0x000a87b5) cam4_indicators_pane_g1

0xd33e,	// (0x000a87c6) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x000aacc6) cam4_indicators_pane_g

0xd35c,	// (0x000a87e4) cam4_indicators_pane_t1

0x4cf7,	// (0x000a017f) main_video4_pane_g1_ParamLimits

0x4cf7,	// (0x000a017f) main_video4_pane_g1

0x4d06,	// (0x000a018e) main_video4_pane_g2_ParamLimits

0x4d06,	// (0x000a018e) main_video4_pane_g2

0x4d15,	// (0x000a019d) main_video4_pane_g3_ParamLimits

0x4d15,	// (0x000a019d) main_video4_pane_g3

0x4d24,	// (0x000a01ac) main_video4_pane_g4_ParamLimits

0x4d24,	// (0x000a01ac) main_video4_pane_g4

0x0004,

0xf845,	// (0x000aaccd) main_video4_pane_g_ParamLimits

0xf845,	// (0x000aaccd) main_video4_pane_g

0x4d42,	// (0x000a01ca) vid4_indicators_pane_ParamLimits

0x4d42,	// (0x000a01ca) vid4_indicators_pane

0x4d70,	// (0x000a01f8) video4_image_uncrop_cif_pane_ParamLimits

0x4d70,	// (0x000a01f8) video4_image_uncrop_cif_pane

0x4d8a,	// (0x000a0212) video4_image_uncrop_nhd_pane_ParamLimits

0x4d8a,	// (0x000a0212) video4_image_uncrop_nhd_pane

0x4bdf,	// (0x000a0067) video4_image_uncrop_vga_pane_ParamLimits

0x4bdf,	// (0x000a0067) video4_image_uncrop_vga_pane

0x9fe3,	// (0x000a546b) bg_tb_trans_pane_cp07

0xd388,	// (0x000a8810) vid4_indicators_pane_g1

0xd39c,	// (0x000a8824) vid4_indicators_pane_g2

0xd3b0,	// (0x000a8838) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x000aacd8) vid4_indicators_pane_g

0xd3df,	// (0x000a8867) vid4_indicators_pane_t1

0x4d9e,	// (0x000a0226) cam4_autofocus_pane_g1

0x4da6,	// (0x000a022e) cam4_autofocus_pane_g2

0x4dae,	// (0x000a0236) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x000aace3) cam4_autofocus_pane_g

0x4db6,	// (0x000a023e) cam4_autofocus_pane_g3_copy1

0x460b,	// (0x0009fa93) video_down_pane_cp_t1

0x4619,	// (0x0009faa1) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x000aac5b) video_down_pane_cp_t

0x9fe3,	// (0x000a546b) popup_vitu2_window_ParamLimits

0x9fe3,	// (0x000a546b) popup_vitu2_window

0x4dbe,	// (0x000a0246) aid_size_cell2_itu2_ParamLimits

0x4dbe,	// (0x000a0246) aid_size_cell2_itu2

0x4de4,	// (0x000a026c) aid_size_cell_itu2_ParamLimits

0x4de4,	// (0x000a026c) aid_size_cell_itu2

0x4e40,	// (0x000a02c8) bg_popup_window_pane_cp09_ParamLimits

0x4e40,	// (0x000a02c8) bg_popup_window_pane_cp09

0x4e4e,	// (0x000a02d6) field_vitu2_entry_pane_ParamLimits

0x4e4e,	// (0x000a02d6) field_vitu2_entry_pane

0x4e74,	// (0x000a02fc) grid_vitu2_function_pane_ParamLimits

0x4e74,	// (0x000a02fc) grid_vitu2_function_pane

0x4ec5,	// (0x000a034d) grid_vitu2_itu_pane_ParamLimits

0x4ec5,	// (0x000a034d) grid_vitu2_itu_pane

0x4f5b,	// (0x000a03e3) cell_vitu2_itu_pane_ParamLimits

0x4f5b,	// (0x000a03e3) cell_vitu2_itu_pane

0x4f87,	// (0x000a040f) cell_vitu2_function_pane_ParamLimits

0x4f87,	// (0x000a040f) cell_vitu2_function_pane

0xe97d,	// (0x000a9e05) bg_popup_call_pane_cp08_ParamLimits

0xe97d,	// (0x000a9e05) bg_popup_call_pane_cp08

0xe994,	// (0x000a9e1c) field_vitu2_entry_pane_g1

0xe9a0,	// (0x000a9e28) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x000aacea) field_vitu2_entry_pane_g

0x4fc6,	// (0x000a044e) field_vitu2_entry_pane_t1_ParamLimits

0x4fc6,	// (0x000a044e) field_vitu2_entry_pane_t1

0xef12,	// (0x000aa39a) field_vitu2_entry_pane_t2_ParamLimits

0xef12,	// (0x000aa39a) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x000aacf1) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x000aacf1) field_vitu2_entry_pane_t

0x4ff5,	// (0x000a047d) bg_button_pane_cp010_ParamLimits

0x4ff5,	// (0x000a047d) bg_button_pane_cp010

0x5003,	// (0x000a048b) cell_vitu2_itu_pane_g1

0x5029,	// (0x000a04b1) cell_vitu2_itu_pane_t1_ParamLimits

0x5029,	// (0x000a04b1) cell_vitu2_itu_pane_t1

0x0368,	// (0x0009b7f0) cell_vitu2_itu_pane_t2_ParamLimits

0x0368,	// (0x0009b7f0) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x000aacfb) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x000aacfb) cell_vitu2_itu_pane_t

0x9fe3,	// (0x000a546b) bg_button_pane_cp011

0x5087,	// (0x000a050f) cell_vitu2_function_pane_g1

0x9ff1,	// (0x000a5479) main_myfav_hc_pane

0x49b8,	// (0x0009fe40) popup_image3_note_pane_ParamLimits

0x49b8,	// (0x0009fe40) popup_image3_note_pane

0x49d4,	// (0x0009fe5c) popup_image3_tool_bar_pane_ParamLimits

0x49d4,	// (0x0009fe5c) popup_image3_tool_bar_pane

0x03f6,	// (0x0009b87e) cell_vitu2_itu_pane_t3_ParamLimits

0x03f6,	// (0x0009b87e) cell_vitu2_itu_pane_t3

0x046c,	// (0x0009b8f4) bg_popup_trans_pane

0xe9b4,	// (0x000a9e3c) grid_image3_tool_bar_pane

0xe9be,	// (0x000a9e46) bg_popup_trans_pane_g1

0xabee,	// (0x000a6076) bg_popup_trans_pane_g2

0xe9c6,	// (0x000a9e4e) bg_popup_trans_pane_g3

0xe9ce,	// (0x000a9e56) bg_popup_trans_pane_g4

0xe9d6,	// (0x000a9e5e) bg_popup_trans_pane_g5

0xe9de,	// (0x000a9e66) bg_popup_trans_pane_g6

0xe9e6,	// (0x000a9e6e) bg_popup_trans_pane_g7

0xe9ee,	// (0x000a9e76) bg_popup_trans_pane_g8

0xabce,	// (0x000a6056) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x000aad02) bg_popup_trans_pane_g

0xe9f6,	// (0x000a9e7e) cell_image3_tool_bar_pane_ParamLimits

0xe9f6,	// (0x000a9e7e) cell_image3_tool_bar_pane

0xa9dd,	// (0x000a5e65) cell_image3_tool_bar_pane_g1

0x046c,	// (0x0009b8f4) bg_popup_trans_pane_cp1

0xea0a,	// (0x000a9e92) popup_image3_note_pane_t1

0xea18,	// (0x000a9ea0) popup_image3_note_pane_t2

0xea26,	// (0x000a9eae) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x000aad15) popup_image3_note_pane_t

0xea34,	// (0x000a9ebc) popup_image3_note_pane_t3_copy1

0x509b,	// (0x000a0523) bg_myfav_hc_instruction_pane_ParamLimits

0x509b,	// (0x000a0523) bg_myfav_hc_instruction_pane

0x50af,	// (0x000a0537) cell_myfav_contact_pane_ParamLimits

0x50af,	// (0x000a0537) cell_myfav_contact_pane

0x50cd,	// (0x000a0555) cell_myfav_contact_pane_cp1_ParamLimits

0x50cd,	// (0x000a0555) cell_myfav_contact_pane_cp1

0x50e5,	// (0x000a056d) cell_myfav_contact_pane_cp2_ParamLimits

0x50e5,	// (0x000a056d) cell_myfav_contact_pane_cp2

0x50fd,	// (0x000a0585) cell_myfav_contact_pane_cp3_ParamLimits

0x50fd,	// (0x000a0585) cell_myfav_contact_pane_cp3

0x5114,	// (0x000a059c) cell_myfav_contact_pane_cp4_ParamLimits

0x5114,	// (0x000a059c) cell_myfav_contact_pane_cp4

0x512c,	// (0x000a05b4) cell_myfav_contact_pane_cp5_ParamLimits

0x512c,	// (0x000a05b4) cell_myfav_contact_pane_cp5

0x5140,	// (0x000a05c8) cell_myfav_contact_pane_cp6_ParamLimits

0x5140,	// (0x000a05c8) cell_myfav_contact_pane_cp6

0x5156,	// (0x000a05de) cell_myfav_contact_pane_cp7_ParamLimits

0x5156,	// (0x000a05de) cell_myfav_contact_pane_cp7

0xea42,	// (0x000a9eca) listscroll_gen_pane_cp05

0x5170,	// (0x000a05f8) main_myfav_hc_pane_g1_ParamLimits

0x5170,	// (0x000a05f8) main_myfav_hc_pane_g1

0x518a,	// (0x000a0612) main_myfav_hc_pane_g2_ParamLimits

0x518a,	// (0x000a0612) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x000aad1c) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x000aad1c) main_myfav_hc_pane_g

0x51bc,	// (0x000a0644) main_myfav_hc_pane_t1_ParamLimits

0x51bc,	// (0x000a0644) main_myfav_hc_pane_t1

0xea4b,	// (0x000a9ed3) main_myfav_hc_pane_t2_ParamLimits

0xea4b,	// (0x000a9ed3) main_myfav_hc_pane_t2

0xea5d,	// (0x000a9ee5) main_myfav_hc_pane_t3_ParamLimits

0xea5d,	// (0x000a9ee5) main_myfav_hc_pane_t3

0x51d3,	// (0x000a065b) main_myfav_hc_pane_t4_ParamLimits

0x51d3,	// (0x000a065b) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x000aad23) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x000aad23) main_myfav_hc_pane_t

0xa9dd,	// (0x000a5e65) bg_myfav_hc_instruction_pane_g1

0xea6f,	// (0x000a9ef7) cell_myfav_contact_pane_g1_ParamLimits

0xea6f,	// (0x000a9ef7) cell_myfav_contact_pane_g1

0xea6f,	// (0x000a9ef7) cell_myfav_contact_pane_g2_ParamLimits

0xea6f,	// (0x000a9ef7) cell_myfav_contact_pane_g2

0xea7b,	// (0x000a9f03) cell_myfav_contact_pane_g3_ParamLimits

0xea7b,	// (0x000a9f03) cell_myfav_contact_pane_g3

0xa6d2,	// (0x000a5b5a) cell_myfav_contact_pane_g4_ParamLimits

0xa6d2,	// (0x000a5b5a) cell_myfav_contact_pane_g4

0xea88,	// (0x000a9f10) cell_myfav_contact_pane_g5_ParamLimits

0xea88,	// (0x000a9f10) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x000aad2e) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x000aad2e) cell_myfav_contact_pane_g

0x51a4,	// (0x000a062c) main_myfav_hc_pane_g3_ParamLimits

0x51a4,	// (0x000a062c) main_myfav_hc_pane_g3

0x05d5,	// (0x0009ba5d) popup_adpt_find_window

0x51fb,	// (0x000a0683) afind_page_pane_ParamLimits

0x51fb,	// (0x000a0683) afind_page_pane

0x5210,	// (0x000a0698) aid_size_cell_afind_ParamLimits

0x5210,	// (0x000a0698) aid_size_cell_afind

0x522e,	// (0x000a06b6) bg_popup_sub_pane_cp09_ParamLimits

0x522e,	// (0x000a06b6) bg_popup_sub_pane_cp09

0x523b,	// (0x000a06c3) find_pane_cp01_ParamLimits

0x523b,	// (0x000a06c3) find_pane_cp01

0xea94,	// (0x000a9f1c) grid_afind_control_pane_ParamLimits

0xea94,	// (0x000a9f1c) grid_afind_control_pane

0x5248,	// (0x000a06d0) grid_afind_pane_ParamLimits

0x5248,	// (0x000a06d0) grid_afind_pane

0x526a,	// (0x000a06f2) cell_afind_pane_ParamLimits

0x526a,	// (0x000a06f2) cell_afind_pane

0xa9dd,	// (0x000a5e65) afind_page_pane_g1

0x52d1,	// (0x000a0759) afind_page_pane_g2

0x52d9,	// (0x000a0761) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x000aad39) afind_page_pane_g

0x52e1,	// (0x000a0769) afind_page_pane_t1

0xeaba,	// (0x000a9f42) cell_afind_grid_control_pane_ParamLimits

0xeaba,	// (0x000a9f42) cell_afind_grid_control_pane

0xe945,	// (0x000a9dcd) bg_button_pane_cp69_ParamLimits

0xe945,	// (0x000a9dcd) bg_button_pane_cp69

0x52ef,	// (0x000a0777) cell_afind_pane_g1_ParamLimits

0x52ef,	// (0x000a0777) cell_afind_pane_g1

0x52fc,	// (0x000a0784) cell_afind_pane_t1_ParamLimits

0x52fc,	// (0x000a0784) cell_afind_pane_t1

0xa9e7,	// (0x000a5e6f) bg_button_pane_cp72

0xeac9,	// (0x000a9f51) cell_afind_grid_control_pane_g1

0x2c3d,	// (0x0009e0c5) aid_image_placing_area_ParamLimits

0x2c3d,	// (0x0009e0c5) aid_image_placing_area

0xa6c4,	// (0x000a5b4c) field_vitu_entry_pane_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) field_vitu_entry_pane_g1

0xa6c4,	// (0x000a5b4c) field_vitu_entry_pane_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x000aa649) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x000aa649) field_vitu_entry_pane_g

0xe6d7,	// (0x000a9b5f) cell_vitu_itu_pane_g1_ParamLimits

0xe6ba,	// (0x000a9b42) cell_vitu_itu_pane_t3_ParamLimits

0xe6ba,	// (0x000a9b42) cell_vitu_itu_pane_t3

0xe8ee,	// (0x000a9d76) mp4_progress_pane_t1_ParamLimits

0xe907,	// (0x000a9d8f) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x000aac7f) mp4_progress_pane_t_ParamLimits

0xe920,	// (0x000a9da8) mup_progress_pane_cp04_ParamLimits

0x51e7,	// (0x000a066f) main_myfav_hc_pane_t5_ParamLimits

0x51e7,	// (0x000a066f) main_myfav_hc_pane_t5

0x9f92,	// (0x000a541a) aid_zoom_text_primary

0x05d5,	// (0x0009ba5d) popup_adpt_find_window_ParamLimits

0x9fe3,	// (0x000a546b) main_cam_set_pane

0x4c10,	// (0x000a0098) cam4_zoom_pane_ParamLimits

0x4c10,	// (0x000a0098) cam4_zoom_pane

0x530e,	// (0x000a0796) main_cam_set_pane_g1_ParamLimits

0x530e,	// (0x000a0796) main_cam_set_pane_g1

0x531c,	// (0x000a07a4) main_cam_set_pane_g2_ParamLimits

0x531c,	// (0x000a07a4) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x000aad40) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x000aad40) main_cam_set_pane_g

0x533d,	// (0x000a07c5) main_cam_set_pane_t1_ParamLimits

0x533d,	// (0x000a07c5) main_cam_set_pane_t1

0x5358,	// (0x000a07e0) main_cset_listscroll_pane_ParamLimits

0x5358,	// (0x000a07e0) main_cset_listscroll_pane

0x537e,	// (0x000a0806) main_cset_slider_pane_ParamLimits

0x537e,	// (0x000a0806) main_cset_slider_pane

0xeada,	// (0x000a9f62) main_cset_list_pane_ParamLimits

0xeada,	// (0x000a9f62) main_cset_list_pane

0xeaea,	// (0x000a9f72) scroll_pane_cp028

0x53a4,	// (0x000a082c) aid_area_touch_slider

0x53c0,	// (0x000a0848) cset_slider_pane

0x53e3,	// (0x000a086b) main_cset_slider_pane_g1

0x53f8,	// (0x000a0880) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x000aad45) main_cset_slider_pane_g

0xeb23,	// (0x000a9fab) main_cset_slider_pane_t1

0x54b4,	// (0x000a093c) main_cset_slider_pane_t2

0x54ce,	// (0x000a0956) main_cset_slider_pane_t3

0x54e8,	// (0x000a0970) main_cset_slider_pane_t4

0x5502,	// (0x000a098a) main_cset_slider_pane_t5

0x551c,	// (0x000a09a4) main_cset_slider_pane_t6

0x5531,	// (0x000a09b9) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x000aad6a) main_cset_slider_pane_t

0x5635,	// (0x000a0abd) cset_list_set_pane_ParamLimits

0x5635,	// (0x000a0abd) cset_list_set_pane

0xebbd,	// (0x000aa045) aid_position_infowindow_above

0xebc5,	// (0x000aa04d) aid_position_infowindow_below

0xef2f,	// (0x000aa3b7) cset_list_set_pane_g1_ParamLimits

0xef2f,	// (0x000aa3b7) cset_list_set_pane_g1

0xef3b,	// (0x000aa3c3) cset_list_set_pane_g3_ParamLimits

0xef3b,	// (0x000aa3c3) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x000aad89) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x000aad89) cset_list_set_pane_g

0xef4a,	// (0x000aa3d2) cset_list_set_pane_t1_ParamLimits

0xef4a,	// (0x000aa3d2) cset_list_set_pane_t1

0x076c,	// (0x0009bbf4) list_highlight_pane_cp021_ParamLimits

0x076c,	// (0x0009bbf4) list_highlight_pane_cp021

0xb623,	// (0x000a6aab) cset_slider_pane_g1

0xb635,	// (0x000a6abd) cset_slider_pane_g2

0xb62c,	// (0x000a6ab4) cset_slider_pane_g3

0x0002,

0xf906,	// (0x000aad8e) cset_slider_pane_g

0xebcd,	// (0x000aa055) aid_area_touch_cam4_zoom

0xebd5,	// (0x000aa05d) cam4_zoom_cont_pane

0xebdd,	// (0x000aa065) cam4_zoom_pane_g1

0xebe5,	// (0x000aa06d) cam4_zoom_pane_g2

0x5647,	// (0x000a0acf) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x000aad95) cam4_zoom_pane_g

0xebed,	// (0x000aa075) cam4_zoom_cont_pane_g1

0xebf6,	// (0x000aa07e) cam4_zoom_cont_pane_g2

0xebff,	// (0x000aa087) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x000aad9c) cam4_zoom_cont_pane_g

0x4a41,	// (0x0009fec9) call4_image_pane_ParamLimits

0x4a41,	// (0x0009fec9) call4_image_pane

0x4aa8,	// (0x0009ff30) call4_windows_conf_pane_ParamLimits

0x4aed,	// (0x0009ff75) popup_call4_audio_in_window_ParamLimits

0x4aed,	// (0x0009ff75) popup_call4_audio_in_window

0x046c,	// (0x0009b8f4) bg_popup_call2_act_pane_cp02

0xe951,	// (0x000a9dd9) call4_list_conf_pane

0xa9dd,	// (0x000a5e65) call4_image_pane_g1

0xa9dd,	// (0x000a5e65) call4_image_pane_g2

0x0001,

0xf398,	// (0x000aa820) call4_image_pane_g

0xec08,	// (0x000aa090) list_single_graphic_popup_conf4_pane_ParamLimits

0xec08,	// (0x000aa090) list_single_graphic_popup_conf4_pane

0x046c,	// (0x0009b8f4) list_highlight_pane_cp022

0xec1b,	// (0x000aa0a3) list_single_graphic_popup_conf4_pane_g1

0xb1c1,	// (0x000a6649) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x000aada3) list_single_graphic_popup_conf4_pane_g

0xec23,	// (0x000aa0ab) list_single_graphic_popup_conf4_pane_t1

0x1374,	// (0x0009c7fc) popup_vtel_slider_window_ParamLimits

0x1374,	// (0x0009c7fc) popup_vtel_slider_window

0xe933,	// (0x000a9dbb) dialer2_ne_pane_t2_ParamLimits

0xe933,	// (0x000a9dbb) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x000aac84) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x000aac84) dialer2_ne_pane_t

0xcb56,	// (0x000a7fde) bg_popup_sub_pane_cp010_ParamLimits

0xcb56,	// (0x000a7fde) bg_popup_sub_pane_cp010

0x564f,	// (0x000a0ad7) popup_vtel_slider_window_g1_ParamLimits

0x564f,	// (0x000a0ad7) popup_vtel_slider_window_g1

0x5662,	// (0x000a0aea) popup_vtel_slider_window_g2_ParamLimits

0x5662,	// (0x000a0aea) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x000aada8) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x000aada8) popup_vtel_slider_window_g

0x56b8,	// (0x000a0b40) vtel_slider_pane_ParamLimits

0x56b8,	// (0x000a0b40) vtel_slider_pane

0x56da,	// (0x000a0b62) vtel_slider_pane_g1_ParamLimits

0x56da,	// (0x000a0b62) vtel_slider_pane_g1

0x56ee,	// (0x000a0b76) vtel_slider_pane_g2_ParamLimits

0x56ee,	// (0x000a0b76) vtel_slider_pane_g2

0x5706,	// (0x000a0b8e) vtel_slider_pane_g3_ParamLimits

0x5706,	// (0x000a0b8e) vtel_slider_pane_g3

0x56da,	// (0x000a0b62) vtel_slider_pane_g4_ParamLimits

0x56da,	// (0x000a0b62) vtel_slider_pane_g4

0x571c,	// (0x000a0ba4) vtel_slider_pane_g5_ParamLimits

0x571c,	// (0x000a0ba4) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x000aadb1) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x000aadb1) vtel_slider_pane_g

0x9fe3,	// (0x000a546b) main_gallery2_pane

0x4e10,	// (0x000a0298) aid_size_row_itut2_dropdow_list_ParamLimits

0x4e10,	// (0x000a0298) aid_size_row_itut2_dropdow_list

0x4e9c,	// (0x000a0324) grid_vitu2_function_top_pane_ParamLimits

0x4e9c,	// (0x000a0324) grid_vitu2_function_top_pane

0x4f06,	// (0x000a038e) popup_vitu2_dropdown_list_window_ParamLimits

0x4f06,	// (0x000a038e) popup_vitu2_dropdown_list_window

0x4f2d,	// (0x000a03b5) popup_vitu2_match_list_window

0x5732,	// (0x000a0bba) cell_vitu2_function_top_pane_ParamLimits

0x5732,	// (0x000a0bba) cell_vitu2_function_top_pane

0x574a,	// (0x000a0bd2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x574a,	// (0x000a0bd2) cell_vitu2_function_top_pane_cp01

0x5766,	// (0x000a0bee) cell_vitu2_function_top_wide_pane_ParamLimits

0x5766,	// (0x000a0bee) cell_vitu2_function_top_wide_pane

0x9fe3,	// (0x000a546b) bg_button_pane_cp012

0x5784,	// (0x000a0c0c) cell_vitu2_function_top_pane_g1

0xec39,	// (0x000aa0c1) bg_button_pane_cp013_ParamLimits

0xec39,	// (0x000aa0c1) bg_button_pane_cp013

0x5798,	// (0x000a0c20) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5798,	// (0x000a0c20) cell_vitu2_function_top_wide_pane_g1

0x9fe3,	// (0x000a546b) bg_popup_sub_pane_cp20

0x57b0,	// (0x000a0c38) list_vitu2_match_list_pane

0xe9be,	// (0x000a9e46) bg_popup_sub_pane_cp20_g1

0xe9c6,	// (0x000a9e4e) bg_popup_sub_pane_cp20_g2

0xabee,	// (0x000a6076) bg_popup_sub_pane_cp20_g3

0xe9ce,	// (0x000a9e56) bg_popup_sub_pane_cp20_g4

0xabce,	// (0x000a6056) bg_popup_sub_pane_cp20_g5

0xec55,	// (0x000aa0dd) bg_popup_sub_pane_cp20_g6

0xe9de,	// (0x000a9e66) bg_popup_sub_pane_cp20_g7

0xe9e6,	// (0x000a9e6e) bg_popup_sub_pane_cp20_g8

0xe9ee,	// (0x000a9e76) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x000aadbc) bg_popup_sub_pane_cp20_g

0xec5d,	// (0x000aa0e5) list_vitu2_match_list_item_pane_ParamLimits

0xec5d,	// (0x000aa0e5) list_vitu2_match_list_item_pane

0xec6f,	// (0x000aa0f7) list_vitu2_match_list_item_pane_t1

0x9ff1,	// (0x000a5479) bg_popup_sub_pane_cp21

0xa99d,	// (0x000a5e25) grid_vitu2_dropdown_list_pane

0x57c8,	// (0x000a0c50) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x57c8,	// (0x000a0c50) cell_vitu2_dropdown_list_char_pane

0x57e8,	// (0x000a0c70) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x57e8,	// (0x000a0c70) cell_vitu2_dropdown_list_ctrl_pane

0xec7d,	// (0x000aa105) cell_vitu2_dropdown_list_char_pane_g1

0xec86,	// (0x000aa10e) cell_vitu2_dropdown_list_char_pane_g2

0xec8f,	// (0x000aa117) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x000aadcf) cell_vitu2_dropdown_list_char_pane_g

0x5810,	// (0x000a0c98) cell_vitu2_dropdown_list_char_pane_t1

0x581e,	// (0x000a0ca6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x581e,	// (0x000a0ca6) cell_vitu2_dropdown_list_ctrl_pane_g1

0x582b,	// (0x000a0cb3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x582b,	// (0x000a0cb3) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5838,	// (0x000a0cc0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5838,	// (0x000a0cc0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5845,	// (0x000a0ccd) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5845,	// (0x000a0ccd) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd317,	// (0x000a879f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd317,	// (0x000a879f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x000aadd6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x000aadd6) cell_vitu2_dropdown_list_ctrl_pane_g

0x5861,	// (0x000a0ce9) aid_size_cell_gallery2_ParamLimits

0x5861,	// (0x000a0ce9) aid_size_cell_gallery2

0x587f,	// (0x000a0d07) grid_gallery2_pane_ParamLimits

0x587f,	// (0x000a0d07) grid_gallery2_pane

0x5899,	// (0x000a0d21) scroll_pane_cp029_ParamLimits

0x5899,	// (0x000a0d21) scroll_pane_cp029

0x58aa,	// (0x000a0d32) cell_gallery2_pane_ParamLimits

0x58aa,	// (0x000a0d32) cell_gallery2_pane

0xec98,	// (0x000aa120) cell_gallery2_pane_g2

0x5909,	// (0x000a0d91) cell_gallery2_pane_g3

0xeca0,	// (0x000aa128) cell_gallery2_pane_g4

0xeca8,	// (0x000aa130) cell_gallery2_pane_g5

0xa99d,	// (0x000a5e25) grid_highlight_pane_cp10

0x4f2d,	// (0x000a03b5) popup_vitu2_match_list_window_ParamLimits

0x4f42,	// (0x000a03ca) popup_vitu2_query_window_ParamLimits

0x4f42,	// (0x000a03ca) popup_vitu2_query_window

0x9ff1,	// (0x000a5479) bg_vitu2_candi_button_pane

0xec7d,	// (0x000aa105) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xec86,	// (0x000aa10e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xec8f,	// (0x000aa117) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5911,	// (0x000a0d99) bg_button_pane_cp015

0x5922,	// (0x000a0daa) bg_button_pane_cp016

0x592e,	// (0x000a0db6) bg_button_pane_cp017

0xb5b3,	// (0x000a6a3b) bg_popup_sub_pane_cp22

0xecb0,	// (0x000aa138) popup_vitu2_query_window_g1

0x596c,	// (0x000a0df4) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x000aade1) popup_vitu2_query_window_g

0x598e,	// (0x000a0e16) popup_vitu2_query_window_t1_ParamLimits

0x598e,	// (0x000a0e16) popup_vitu2_query_window_t1

0x59c1,	// (0x000a0e49) popup_vitu2_query_window_t2_ParamLimits

0x59c1,	// (0x000a0e49) popup_vitu2_query_window_t2

0x59d3,	// (0x000a0e5b) popup_vitu2_query_window_t3_ParamLimits

0x59d3,	// (0x000a0e5b) popup_vitu2_query_window_t3

0x59fb,	// (0x000a0e83) popup_vitu2_query_window_t4_ParamLimits

0x59fb,	// (0x000a0e83) popup_vitu2_query_window_t4

0x5a0f,	// (0x000a0e97) popup_vitu2_query_window_t5_ParamLimits

0x5a0f,	// (0x000a0e97) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x000aade8) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x000aade8) popup_vitu2_query_window_t

0xead2,	// (0x000a9f5a) main_cset_text_pane

0x53a4,	// (0x000a082c) aid_area_touch_slider_ParamLimits

0x53c0,	// (0x000a0848) cset_slider_pane_ParamLimits

0x53e3,	// (0x000a086b) main_cset_slider_pane_g1_ParamLimits

0x53f8,	// (0x000a0880) main_cset_slider_pane_g2_ParamLimits

0xeaf3,	// (0x000a9f7b) main_cset_slider_pane_g3_ParamLimits

0xeaf3,	// (0x000a9f7b) main_cset_slider_pane_g3

0x540d,	// (0x000a0895) main_cset_slider_pane_g4_ParamLimits

0x540d,	// (0x000a0895) main_cset_slider_pane_g4

0x541c,	// (0x000a08a4) main_cset_slider_pane_g5_ParamLimits

0x541c,	// (0x000a08a4) main_cset_slider_pane_g5

0x5428,	// (0x000a08b0) main_cset_slider_pane_g6_ParamLimits

0x5428,	// (0x000a08b0) main_cset_slider_pane_g6

0xf8bd,	// (0x000aad45) main_cset_slider_pane_g_ParamLimits

0xeb23,	// (0x000a9fab) main_cset_slider_pane_t1_ParamLimits

0x54b4,	// (0x000a093c) main_cset_slider_pane_t2_ParamLimits

0x54ce,	// (0x000a0956) main_cset_slider_pane_t3_ParamLimits

0x54e8,	// (0x000a0970) main_cset_slider_pane_t4_ParamLimits

0x5502,	// (0x000a098a) main_cset_slider_pane_t5_ParamLimits

0x551c,	// (0x000a09a4) main_cset_slider_pane_t6_ParamLimits

0x5531,	// (0x000a09b9) main_cset_slider_pane_t7_ParamLimits

0x555b,	// (0x000a09e3) main_cset_slider_pane_t8_ParamLimits

0x555b,	// (0x000a09e3) main_cset_slider_pane_t8

0x5583,	// (0x000a0a0b) main_cset_slider_pane_t9_ParamLimits

0x5583,	// (0x000a0a0b) main_cset_slider_pane_t9

0x55ab,	// (0x000a0a33) main_cset_slider_pane_t10_ParamLimits

0x55ab,	// (0x000a0a33) main_cset_slider_pane_t10

0x55d3,	// (0x000a0a5b) main_cset_slider_pane_t11_ParamLimits

0x55d3,	// (0x000a0a5b) main_cset_slider_pane_t11

0x55fb,	// (0x000a0a83) main_cset_slider_pane_t12_ParamLimits

0x55fb,	// (0x000a0a83) main_cset_slider_pane_t12

0x5618,	// (0x000a0aa0) main_cset_slider_pane_t13_ParamLimits

0x5618,	// (0x000a0aa0) main_cset_slider_pane_t13

0xf8e2,	// (0x000aad6a) main_cset_slider_pane_t_ParamLimits

0x046c,	// (0x0009b8f4) bg_popup_sub_pane_cp011

0xecbc,	// (0x000aa144) main_cset_text_pane_g1

0xecc4,	// (0x000aa14c) main_cset_text_pane_t1

0xecd2,	// (0x000aa15a) main_cset_text_pane_t2

0xece0,	// (0x000aa168) main_cset_text_pane_t3

0xecee,	// (0x000aa176) main_cset_text_pane_t4

0xecfc,	// (0x000aa184) main_cset_text_pane_t5

0xed0a,	// (0x000aa192) main_cset_text_pane_t6

0xed18,	// (0x000aa1a0) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x000aadf7) main_cset_text_pane_t

0x9ff1,	// (0x000a5479) main_cam4_burst_pane

0x9ff1,	// (0x000a5479) main_cam5_pane

0xeaa8,	// (0x000a9f30) bg_button_pane_cp019

0xeab1,	// (0x000a9f39) bg_button_pane_cp020

0xeaff,	// (0x000a9f87) main_cset_slider_pane_g7_ParamLimits

0xeaff,	// (0x000a9f87) main_cset_slider_pane_g7

0xeb0b,	// (0x000a9f93) main_cset_slider_pane_g8_ParamLimits

0xeb0b,	// (0x000a9f93) main_cset_slider_pane_g8

0x543c,	// (0x000a08c4) main_cset_slider_pane_g9_ParamLimits

0x543c,	// (0x000a08c4) main_cset_slider_pane_g9

0x5448,	// (0x000a08d0) main_cset_slider_pane_g10_ParamLimits

0x5448,	// (0x000a08d0) main_cset_slider_pane_g10

0x5454,	// (0x000a08dc) main_cset_slider_pane_g11_ParamLimits

0x5454,	// (0x000a08dc) main_cset_slider_pane_g11

0x5460,	// (0x000a08e8) main_cset_slider_pane_g12_ParamLimits

0x5460,	// (0x000a08e8) main_cset_slider_pane_g12

0x546c,	// (0x000a08f4) main_cset_slider_pane_g13_ParamLimits

0x546c,	// (0x000a08f4) main_cset_slider_pane_g13

0x5478,	// (0x000a0900) main_cset_slider_pane_g14_ParamLimits

0x5478,	// (0x000a0900) main_cset_slider_pane_g14

0x5484,	// (0x000a090c) main_cset_slider_pane_g15_ParamLimits

0x5484,	// (0x000a090c) main_cset_slider_pane_g15

0xeb4b,	// (0x000a9fd3) main_cset_slider_pane_t14_ParamLimits

0xeb4b,	// (0x000a9fd3) main_cset_slider_pane_t14

0xeb84,	// (0x000aa00c) main_cset_slider_pane_t15_ParamLimits

0xeb84,	// (0x000aa00c) main_cset_slider_pane_t15

0x5a79,	// (0x000a0f01) aid_cam4_burst_size_cell_ParamLimits

0x5a79,	// (0x000a0f01) aid_cam4_burst_size_cell

0x5a99,	// (0x000a0f21) grid_cam4_burst_pane_ParamLimits

0x5a99,	// (0x000a0f21) grid_cam4_burst_pane

0x5ad1,	// (0x000a0f59) linegrid_cam4_burst_pane_ParamLimits

0x5ad1,	// (0x000a0f59) linegrid_cam4_burst_pane

0xef5f,	// (0x000aa3e7) scroll_pane_cp30_ParamLimits

0xef5f,	// (0x000aa3e7) scroll_pane_cp30

0x5af5,	// (0x000a0f7d) cell_cam4_burst_pane_ParamLimits

0x5af5,	// (0x000a0f7d) cell_cam4_burst_pane

0xed26,	// (0x000aa1ae) linegrid_cam4_burst_pane_g1_ParamLimits

0xed26,	// (0x000aa1ae) linegrid_cam4_burst_pane_g1

0x5b42,	// (0x000a0fca) linegrid_cam4_burst_pane_g2_ParamLimits

0x5b42,	// (0x000a0fca) linegrid_cam4_burst_pane_g2

0xed33,	// (0x000aa1bb) linegrid_cam4_burst_pane_g3_ParamLimits

0xed33,	// (0x000aa1bb) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x000aae06) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x000aae06) linegrid_cam4_burst_pane_g

0x5b53,	// (0x000a0fdb) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5b53,	// (0x000a0fdb) linegrid_cam4_burst_pane_g3_copy1

0xed40,	// (0x000aa1c8) linegrid_cam4_burst_pane_g4_ParamLimits

0xed40,	// (0x000aa1c8) linegrid_cam4_burst_pane_g4

0x5b6d,	// (0x000a0ff5) linegrid_cam4_burst_pane_g5_ParamLimits

0x5b6d,	// (0x000a0ff5) linegrid_cam4_burst_pane_g5

0x5b7e,	// (0x000a1006) linegrid_cam4_burst_pane_g6_ParamLimits

0x5b7e,	// (0x000a1006) linegrid_cam4_burst_pane_g6

0xed4d,	// (0x000aa1d5) linegrid_cam4_burst_pane_g7_ParamLimits

0xed4d,	// (0x000aa1d5) linegrid_cam4_burst_pane_g7

0x5b95,	// (0x000a101d) cell_cam4_burst_pane_g1

0xed66,	// (0x000aa1ee) main_cam5_pane_t1_ParamLimits

0xed66,	// (0x000aa1ee) main_cam5_pane_t1

0xed78,	// (0x000aa200) main_cam5_pane_t2_ParamLimits

0xed78,	// (0x000aa200) main_cam5_pane_t2

0xed8a,	// (0x000aa212) main_cam5_pane_t3_ParamLimits

0xed8a,	// (0x000aa212) main_cam5_pane_t3

0xed9c,	// (0x000aa224) main_cam5_pane_t4_ParamLimits

0xed9c,	// (0x000aa224) main_cam5_pane_t4

0xedb4,	// (0x000aa23c) main_cam5_pane_t5_ParamLimits

0xedb4,	// (0x000aa23c) main_cam5_pane_t5

0xedc8,	// (0x000aa250) main_cam5_pane_t6_ParamLimits

0xedc8,	// (0x000aa250) main_cam5_pane_t6

0xeddc,	// (0x000aa264) main_cam5_pane_t7_ParamLimits

0xeddc,	// (0x000aa264) main_cam5_pane_t7

0xedee,	// (0x000aa276) main_cam5_pane_t8_ParamLimits

0xedee,	// (0x000aa276) main_cam5_pane_t8

0xee0a,	// (0x000aa292) main_cam5_pane_t9_ParamLimits

0xee0a,	// (0x000aa292) main_cam5_pane_t9

0xee1c,	// (0x000aa2a4) main_cam5_pane_t10_ParamLimits

0xee1c,	// (0x000aa2a4) main_cam5_pane_t10

0xef6b,	// (0x000aa3f3) main_cam5_pane_t11_ParamLimits

0xef6b,	// (0x000aa3f3) main_cam5_pane_t11

0xef7d,	// (0x000aa405) main_cam5_pane_t12_ParamLimits

0xef7d,	// (0x000aa405) main_cam5_pane_t12

0xef92,	// (0x000aa41a) main_cam5_pane_t13_ParamLimits

0xef92,	// (0x000aa41a) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x000aae12) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x000aae12) main_cam5_pane_t

0x0656,	// (0x0009bade) popup_scut_keymap_window_ParamLimits

0x0656,	// (0x0009bade) popup_scut_keymap_window

0x5ba8,	// (0x000a1030) aid_size_cell_brow_shortcut

0xa99d,	// (0x000a5e25) bg_popup_window_pane_cp010

0x5bb4,	// (0x000a103c) grid_scut_pane

0x5bc0,	// (0x000a1048) cell_scut_pane_ParamLimits

0x5bc0,	// (0x000a1048) cell_scut_pane

0x5bd7,	// (0x000a105f) cell_scut_pane_g1

0xefaf,	// (0x000aa437) cell_scut_pane_t1

0xefbe,	// (0x000aa446) cell_scut_pane_t2

0x5be0,	// (0x000a1068) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x000aae2d) cell_scut_pane_t

0x3b62,	// (0x0009efea) main_mup3_pane_g8_ParamLimits

0x3b62,	// (0x0009efea) main_mup3_pane_g8

0x4e28,	// (0x000a02b0) area_vitu2_query_pane_ParamLimits

0x4e28,	// (0x000a02b0) area_vitu2_query_pane

0x593a,	// (0x000a0dc2) input_focus_pane_cp08

0xefcd,	// (0x000aa455) area_vitu2_query_pane_g1

0x5bee,	// (0x000a1076) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x000aae34) area_vitu2_query_pane_g

0x5bfd,	// (0x000a1085) area_vitu2_query_pane_t1_ParamLimits

0x5bfd,	// (0x000a1085) area_vitu2_query_pane_t1

0x5c11,	// (0x000a1099) area_vitu2_query_pane_t2_ParamLimits

0x5c11,	// (0x000a1099) area_vitu2_query_pane_t2

0x5c25,	// (0x000a10ad) area_vitu2_query_pane_t3_ParamLimits

0x5c25,	// (0x000a10ad) area_vitu2_query_pane_t3

0x5c4d,	// (0x000a10d5) area_vitu2_query_pane_t4_ParamLimits

0x5c4d,	// (0x000a10d5) area_vitu2_query_pane_t4

0x5c75,	// (0x000a10fd) area_vitu2_query_pane_t5_ParamLimits

0x5c75,	// (0x000a10fd) area_vitu2_query_pane_t5

0x5c9d,	// (0x000a1125) area_vitu2_query_pane_t6_ParamLimits

0x5c9d,	// (0x000a1125) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x000aae39) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x000aae39) area_vitu2_query_pane_t

0x5ce9,	// (0x000a1171) bg_button_pane_cp018

0x5cf5,	// (0x000a117d) bg_button_pane_cp021

0x5d01,	// (0x000a1189) bg_button_pane_cp022

0x5d20,	// (0x000a11a8) input_focus_pane_cp09

0xb2fd,	// (0x000a6785) aid_size_touch_mv_arrow_left

0xb326,	// (0x000a67ae) aid_size_touch_mv_arrow_right

0x549c,	// (0x000a0924) main_cset_slider_pane_g16_ParamLimits

0x549c,	// (0x000a0924) main_cset_slider_pane_g16

0x54a8,	// (0x000a0930) main_cset_slider_pane_g17_ParamLimits

0x54a8,	// (0x000a0930) main_cset_slider_pane_g17

0x5b95,	// (0x000a101d) cell_cam4_burst_pane_g1_ParamLimits

0x046c,	// (0x0009b8f4) compa_mode_pane

0x5672,	// (0x000a0afa) popup_vtel_slider_window_g3_ParamLimits

0x5672,	// (0x000a0afa) popup_vtel_slider_window_g3

0x5689,	// (0x000a0b11) popup_vtel_slider_window_g4_ParamLimits

0x5689,	// (0x000a0b11) popup_vtel_slider_window_g4

0x56a0,	// (0x000a0b28) popup_vtel_slider_window_t1_ParamLimits

0x56a0,	// (0x000a0b28) popup_vtel_slider_window_t1

0x9ff1,	// (0x000a5479) main_cl_pane

0xc860,	// (0x000a7ce8) popup_imed_adjust2_window_ParamLimits

0xb5b3,	// (0x000a6a3b) bg_tb_trans_pane_cp05_ParamLimits

0xe5ef,	// (0x000a9a77) popup_imed_adjust2_window_g1_ParamLimits

0xe5fe,	// (0x000a9a86) popup_imed_adjust2_window_g2_ParamLimits

0xe5fe,	// (0x000a9a86) popup_imed_adjust2_window_g2

0xe60a,	// (0x000a9a92) popup_imed_adjust2_window_g3_ParamLimits

0xe60a,	// (0x000a9a92) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x000aabaf) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x000aabaf) popup_imed_adjust2_window_g

0xe616,	// (0x000a9a9e) popup_imed_adjust2_window_t1_ParamLimits

0xe62e,	// (0x000a9ab6) slider_imed_adjust_pane_ParamLimits

0xe642,	// (0x000a9aca) slider_imed_adjust_pane_g1_ParamLimits

0xe652,	// (0x000a9ada) slider_imed_adjust_pane_g2_ParamLimits

0xe662,	// (0x000a9aea) slider_imed_adjust_pane_g3_ParamLimits

0xe673,	// (0x000a9afb) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x000aabb6) slider_imed_adjust_pane_g_ParamLimits

0x4bb1,	// (0x000a0039) aid_touch_area_cam4_ParamLimits

0x4bb1,	// (0x000a0039) aid_touch_area_cam4

0xd2e9,	// (0x000a8771) battery_pane_cp01

0x4c80,	// (0x000a0108) main_camera4_pane_g6_ParamLimits

0x4c80,	// (0x000a0108) main_camera4_pane_g6

0x4caa,	// (0x000a0132) main_camera4_pane_t2_ParamLimits

0x4caa,	// (0x000a0132) main_camera4_pane_t2

0x0001,

0xf830,	// (0x000aacb8) main_camera4_pane_t_ParamLimits

0xf830,	// (0x000aacb8) main_camera4_pane_t

0x4cdf,	// (0x000a0167) aid_touch_area_vid4_ParamLimits

0x4cdf,	// (0x000a0167) aid_touch_area_vid4

0x4d33,	// (0x000a01bb) main_video4_pane_g5_ParamLimits

0x4d33,	// (0x000a01bb) main_video4_pane_g5

0x4d58,	// (0x000a01e0) vid4_progress_pane_ParamLimits

0x4d58,	// (0x000a01e0) vid4_progress_pane

0xeb17,	// (0x000a9f9f) main_cset_slider_pane_g18_ParamLimits

0xeb17,	// (0x000a9f9f) main_cset_slider_pane_g18

0xed5a,	// (0x000aa1e2) cell_cam4_burst_pane_g2_ParamLimits

0xed5a,	// (0x000aa1e2) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x000aae0d) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x000aae0d) cell_cam4_burst_pane_g

0xa758,	// (0x000a5be0) bg_cl_pane_ParamLimits

0xa758,	// (0x000a5be0) bg_cl_pane

0x5d30,	// (0x000a11b8) cl_header_pane_ParamLimits

0x5d30,	// (0x000a11b8) cl_header_pane

0x5d44,	// (0x000a11cc) cl_listscroll_pane_ParamLimits

0x5d44,	// (0x000a11cc) cl_listscroll_pane

0xefd9,	// (0x000aa461) bg_cl_pane_g1

0xefe1,	// (0x000aa469) bg_cl_pane_g2

0xefe9,	// (0x000aa471) bg_cl_pane_g3

0xeff1,	// (0x000aa479) bg_cl_pane_g4

0xeff9,	// (0x000aa481) bg_cl_pane_g5

0xf001,	// (0x000aa489) bg_cl_pane_g6

0xf009,	// (0x000aa491) bg_cl_pane_g7

0xf011,	// (0x000aa499) bg_cl_pane_g8

0xf019,	// (0x000aa4a1) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x000aae48) bg_cl_pane_g

0x5d54,	// (0x000a11dc) aid_height_cl_leading_ParamLimits

0x5d54,	// (0x000a11dc) aid_height_cl_leading

0x5d60,	// (0x000a11e8) aid_height_cl_text_ParamLimits

0x5d60,	// (0x000a11e8) aid_height_cl_text

0x076c,	// (0x0009bbf4) bg_cl_header_pane_ParamLimits

0x076c,	// (0x0009bbf4) bg_cl_header_pane

0x5d7f,	// (0x000a1207) cl_header_pane_g1_ParamLimits

0x5d7f,	// (0x000a1207) cl_header_pane_g1

0x5d95,	// (0x000a121d) cl_header_pane_t1_ParamLimits

0x5d95,	// (0x000a121d) cl_header_pane_t1

0xf021,	// (0x000aa4a9) cl_list_pane

0xeaea,	// (0x000a9f72) hc_scroll_pane_cp01

0xabce,	// (0x000a6056) bg_cl_header_pane_g1

0xe9be,	// (0x000a9e46) bg_cl_header_pane_g2

0xabee,	// (0x000a6076) bg_cl_header_pane_g3

0xe9ce,	// (0x000a9e56) bg_cl_header_pane_g4

0xe9c6,	// (0x000a9e4e) bg_cl_header_pane_g5

0xec55,	// (0x000aa0dd) bg_cl_header_pane_g6

0xe9e6,	// (0x000a9e6e) bg_cl_header_pane_g7

0xe9ee,	// (0x000a9e76) bg_cl_header_pane_g8

0xe9de,	// (0x000a9e66) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x000aae5b) bg_cl_header_pane_g

0x5dae,	// (0x000a1236) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5dae,	// (0x000a1236) hc_cl_list_double_graphic_heading_pane

0x5dbf,	// (0x000a1247) hc_cl_list_single_graphic_pane_ParamLimits

0x5dbf,	// (0x000a1247) hc_cl_list_single_graphic_pane

0x5dd5,	// (0x000a125d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5dd5,	// (0x000a125d) hc_cl_list_single_graphic_pane_g1

0x5de1,	// (0x000a1269) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5de1,	// (0x000a1269) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x000aae6e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x000aae6e) hc_cl_list_single_graphic_pane_g

0x5df5,	// (0x000a127d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5df5,	// (0x000a127d) hc_cl_list_single_graphic_pane_t1

0x5dd5,	// (0x000a125d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5dd5,	// (0x000a125d) hc_cl_list_double_graphic_heading_pane_g1

0x5e0a,	// (0x000a1292) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5e0a,	// (0x000a1292) hc_cl_list_double_graphic_heading_pane_g2

0x5e1e,	// (0x000a12a6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5e1e,	// (0x000a12a6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x000aae73) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x000aae73) hc_cl_list_double_graphic_heading_pane_g

0x5e32,	// (0x000a12ba) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5e32,	// (0x000a12ba) hc_cl_list_double_graphic_heading_pane_t1

0x5e47,	// (0x000a12cf) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5e47,	// (0x000a12cf) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x000aae7a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x000aae7a) hc_cl_list_double_graphic_heading_pane_t

0xee36,	// (0x000aa2be) vid4_progress_pane_g1

0xee46,	// (0x000aa2ce) vid4_progress_pane_g2

0x5e5c,	// (0x000a12e4) vid4_progress_pane_g3

0xee56,	// (0x000aa2de) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x000aae7f) vid4_progress_pane_g

0x5e6e,	// (0x000a12f6) vid4_progress_pane_t1

0xee6e,	// (0x000aa2f6) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x000aae8a) vid4_progress_pane_t

0x5e86,	// (0x000a130e) wait_bar_pane_cp07

0xcb64,	// (0x000a7fec) blid_firmament_pane_ParamLimits

0xcba7,	// (0x000a802f) popup_blid_sat_info2_window_g1

0xcbcb,	// (0x000a8053) popup_blid_sat_info2_window_t3

0xcbd9,	// (0x000a8061) popup_blid_sat_info2_window_t4

0xcbe7,	// (0x000a806f) popup_blid_sat_info2_window_t5

0xcbf5,	// (0x000a807d) popup_blid_sat_info2_window_t6

0xcc05,	// (0x000a808d) popup_blid_sat_info2_window_t7

0xcc13,	// (0x000a809b) popup_blid_sat_info2_window_t8

0xcc21,	// (0x000a80a9) popup_blid_sat_info2_window_t9

0xcc2f,	// (0x000a80b7) popup_blid_sat_info2_window_t10

0xccf0,	// (0x000a8178) aid_firma_cardinal_ParamLimits

0xcd04,	// (0x000a818c) blid_firmament_pane_t1_ParamLimits

0xcd1b,	// (0x000a81a3) blid_firmament_pane_t2_ParamLimits

0xcd32,	// (0x000a81ba) blid_firmament_pane_t3_ParamLimits

0xcd49,	// (0x000a81d1) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x000aaaa8) blid_firmament_pane_t_ParamLimits

0xcd60,	// (0x000a81e8) blid_sat_info_pane_ParamLimits

0x9fe3,	// (0x000a546b) main_cam_set_pane_ParamLimits

0x4348,	// (0x0009f7d0) aid_size_cell_colour_35_ParamLimits

0x4368,	// (0x0009f7f0) aid_size_cell_colour_112_ParamLimits

0x4388,	// (0x0009f810) aid_size_cell_effect_ParamLimits

0xb5b3,	// (0x000a6a3b) bg_tb_trans_pane_cp02_ParamLimits

0xae6c,	// (0x000a62f4) heading_imed_pane_ParamLimits

0x43a8,	// (0x0009f830) listscroll_imed_pane_ParamLimits

0xbf4f,	// (0x000a73d7) popup_call2_audio_first_window_g5_ParamLimits

0xbf4f,	// (0x000a73d7) popup_call2_audio_first_window_g5

0x47cd,	// (0x0009fc55) aid_size_touch_image3_arrow_left_ParamLimits

0x47cd,	// (0x0009fc55) aid_size_touch_image3_arrow_left

0x47f9,	// (0x0009fc81) aid_size_touch_image3_arrow_right_ParamLimits

0x47f9,	// (0x0009fc81) aid_size_touch_image3_arrow_right

0xee83,	// (0x000aa30b) vid4_progress_pane_t3

0x454d,	// (0x0009f9d5) main_hwr_training_symbol_option_pane_ParamLimits

0x454d,	// (0x0009f9d5) main_hwr_training_symbol_option_pane

0xe828,	// (0x000a9cb0) popup_hwr_training_preview_window_ParamLimits

0xe828,	// (0x000a9cb0) popup_hwr_training_preview_window

0x456d,	// (0x0009f9f5) hwr_training_navi_pane_g5_ParamLimits

0x456d,	// (0x0009f9f5) hwr_training_navi_pane_g5

0xe9ac,	// (0x000a9e34) popup_char_count_window

0x9fe3,	// (0x000a546b) bg_popup_sub_pane_cp20_ParamLimits

0x57b0,	// (0x000a0c38) list_vitu2_match_list_pane_ParamLimits

0x57bc,	// (0x000a0c44) vitu2_page_scroll_pane_ParamLimits

0x57bc,	// (0x000a0c44) vitu2_page_scroll_pane

0x5ecf,	// (0x000a1357) list_single_hwr_training_symbol_option_pane_ParamLimits

0x5ecf,	// (0x000a1357) list_single_hwr_training_symbol_option_pane

0x5ee2,	// (0x000a136a) list_single_hwr_training_symbol_option_pane_g1

0x5eea,	// (0x000a1372) list_single_hwr_training_symbol_option_pane_t1

0x5ef8,	// (0x000a1380) bg_button_pane_cp023

0x5f01,	// (0x000a1389) bg_button_pane_cp024

0x5f34,	// (0x000a13bc) vitu2_page_scroll_pane_g1

0x5f3c,	// (0x000a13c4) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x000aae91) vitu2_page_scroll_pane_g

0x5f44,	// (0x000a13cc) vitu2_page_scroll_pane_t1

0xcacc,	// (0x000a7f54) popup_char_count_window_g1

0x5f53,	// (0x000a13db) popup_char_count_window_g2

0x5f5c,	// (0x000a13e4) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x000aae96) popup_char_count_window_g

0x5f65,	// (0x000a13ed) popup_char_count_window_t1

0x9ff1,	// (0x000a5479) main_vded2_pane

0xe5db,	// (0x000a9a63) aid_size_cell_imed_line

0xe5e5,	// (0x000a9a6d) grid_imed_line_width_pane

0xd3c1,	// (0x000a8849) vid4_indicators_pane_g4

0x5f73,	// (0x000a13fb) cell_imed_line_width_pane_ParamLimits

0x5f73,	// (0x000a13fb) cell_imed_line_width_pane

0x5f87,	// (0x000a140f) cell_imed_line_width_pane_g1

0x5f90,	// (0x000a1418) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x000aae9d) cell_imed_line_width_pane_g

0x5f98,	// (0x000a1420) main_vded2_pane_g1_ParamLimits

0x5f98,	// (0x000a1420) main_vded2_pane_g1

0x5fae,	// (0x000a1436) main_vded2_pane_g2_ParamLimits

0x5fae,	// (0x000a1436) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x000aaea2) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x000aaea2) main_vded2_pane_g

0x5fc0,	// (0x000a1448) vded2_slider_pane_ParamLimits

0x5fc0,	// (0x000a1448) vded2_slider_pane

0x5fd0,	// (0x000a1458) aid_size_touch_vded2_end

0x5fda,	// (0x000a1462) aid_size_touch_vded2_playhead

0x5fe4,	// (0x000a146c) aid_size_touch_vded2_start

0x5fec,	// (0x000a1474) vded2_slider_bg_pane

0x5ff5,	// (0x000a147d) vded2_slider_pane_g1

0x5ffe,	// (0x000a1486) vded2_slider_pane_g2

0x6006,	// (0x000a148e) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x000aaea7) vded2_slider_pane_g

0x6011,	// (0x000a1499) vded2_slider_bg_pane_g1

0x601a,	// (0x000a14a2) vded2_slider_bg_pane_g2

0x6023,	// (0x000a14ab) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x000aaeae) vded2_slider_bg_pane_g

0x28ac,	// (0x0009dd34) aid_postcard_touch_down_pane_ParamLimits

0x28ac,	// (0x0009dd34) aid_postcard_touch_down_pane

0x28c2,	// (0x0009dd4a) aid_postcard_touch_up_pane_ParamLimits

0x28c2,	// (0x0009dd4a) aid_postcard_touch_up_pane

0x9ff1,	// (0x000a5479) main_blid2_pane

0xc846,	// (0x000a7cce) popup_blid2_search_window

0x046c,	// (0x0009b8f4) blid2_gps_pane

0x046c,	// (0x0009b8f4) blid2_navig_pane

0x046c,	// (0x0009b8f4) blid2_search_pane

0x046c,	// (0x0009b8f4) blid2_tripm_pane

0x602c,	// (0x000a14b4) blid2_search_pane_g1_ParamLimits

0x602c,	// (0x000a14b4) blid2_search_pane_g1

0x6046,	// (0x000a14ce) blid2_search_pane_t1_ParamLimits

0x6046,	// (0x000a14ce) blid2_search_pane_t1

0x6058,	// (0x000a14e0) aid_size_cell_blid2_gps_ParamLimits

0x6058,	// (0x000a14e0) aid_size_cell_blid2_gps

0x6070,	// (0x000a14f8) blid2_gps_pane_g1_ParamLimits

0x6070,	// (0x000a14f8) blid2_gps_pane_g1

0x6084,	// (0x000a150c) grid_blid2_satellite_pane_ParamLimits

0x6084,	// (0x000a150c) grid_blid2_satellite_pane

0x609e,	// (0x000a1526) blid2_navig_pane_g1_ParamLimits

0x609e,	// (0x000a1526) blid2_navig_pane_g1

0x60aa,	// (0x000a1532) blid2_navig_pane_t1_ParamLimits

0x60aa,	// (0x000a1532) blid2_navig_pane_t1

0x60c5,	// (0x000a154d) blid2_navig_pane_t2_ParamLimits

0x60c5,	// (0x000a154d) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x000aaeb5) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x000aaeb5) blid2_navig_pane_t

0x60e0,	// (0x000a1568) blid2_navig_ring_pane_ParamLimits

0x60e0,	// (0x000a1568) blid2_navig_ring_pane

0x60f9,	// (0x000a1581) blid2_speed_pane_ParamLimits

0x60f9,	// (0x000a1581) blid2_speed_pane

0x6105,	// (0x000a158d) blid2_tripm_pane_g1_ParamLimits

0x6105,	// (0x000a158d) blid2_tripm_pane_g1

0x611e,	// (0x000a15a6) blid2_tripm_pane_g2_ParamLimits

0x611e,	// (0x000a15a6) blid2_tripm_pane_g2

0x6132,	// (0x000a15ba) blid2_tripm_pane_g3_ParamLimits

0x6132,	// (0x000a15ba) blid2_tripm_pane_g3

0x6146,	// (0x000a15ce) blid2_tripm_pane_g4_ParamLimits

0x6146,	// (0x000a15ce) blid2_tripm_pane_g4

0x615a,	// (0x000a15e2) blid2_tripm_pane_g5_ParamLimits

0x615a,	// (0x000a15e2) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x000aaeba) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x000aaeba) blid2_tripm_pane_g

0x6180,	// (0x000a1608) blid2_tripm_pane_t1_ParamLimits

0x6180,	// (0x000a1608) blid2_tripm_pane_t1

0x619b,	// (0x000a1623) blid2_tripm_pane_t2_ParamLimits

0x619b,	// (0x000a1623) blid2_tripm_pane_t2

0x61b4,	// (0x000a163c) blid2_tripm_pane_t3_ParamLimits

0x61b4,	// (0x000a163c) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x000aaec7) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x000aaec7) blid2_tripm_pane_t

0x61fb,	// (0x000a1683) cell_blid2_satellite_pane_ParamLimits

0x61fb,	// (0x000a1683) cell_blid2_satellite_pane

0x6219,	// (0x000a16a1) cell_blid2_satellite_pane_g1

0x6222,	// (0x000a16aa) cell_blid2_satellite_pane_t1

0xa9dd,	// (0x000a5e65) blid2_speed_pane_g1

0x6230,	// (0x000a16b8) blid2_speed_pane_t1

0x623e,	// (0x000a16c6) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x000aaed0) blid2_speed_pane_t

0xa9dd,	// (0x000a5e65) blid2_navig_ring_pane_g1

0x624c,	// (0x000a16d4) blid2_navig_ring_pane_g2

0x6254,	// (0x000a16dc) blid2_navig_ring_pane_g3

0x625c,	// (0x000a16e4) blid2_navig_ring_pane_g4

0x6264,	// (0x000a16ec) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x000aaed5) blid2_navig_ring_pane_g

0x046c,	// (0x0009b8f4) bg_popup_window_pane_cp011

0x626c,	// (0x000a16f4) popup_blid2_search_window_g1

0x6274,	// (0x000a16fc) popup_blid2_search_window_t1

0x6282,	// (0x000a170a) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x000aaee0) popup_blid2_search_window_t

0xaadd,	// (0x000a5f65) main_browser_pane_g1

0xa758,	// (0x000a5be0) main_browser_pane_ParamLimits

0x9fe3,	// (0x000a546b) bg_button_pane_cp011_ParamLimits

0x5087,	// (0x000a050f) cell_vitu2_function_pane_g1_ParamLimits

0xb5b3,	// (0x000a6a3b) bg_popup_sub_pane_cp22_ParamLimits

0x593a,	// (0x000a0dc2) input_focus_pane_cp08_ParamLimits

0x5955,	// (0x000a0ddd) popup_vitu2_query_button_pane_ParamLimits

0x5955,	// (0x000a0ddd) popup_vitu2_query_button_pane

0x5964,	// (0x000a0dec) popup_vitu2_query_input_button_pane

0xecb0,	// (0x000aa138) popup_vitu2_query_window_g1_ParamLimits

0x596c,	// (0x000a0df4) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x000aade1) popup_vitu2_query_window_g_ParamLimits

0x046c,	// (0x0009b8f4) bg_button_pane_cp026

0x6290,	// (0x000a1718) popup_vitu2_query_input_button_pane_g1

0x046c,	// (0x0009b8f4) bg_button_pane_cp025

0x6298,	// (0x000a1720) popup_vitu2_query_button_pane_t1

0x37f7,	// (0x0009ec7f) main_mp3_pane_t6

0x3805,	// (0x0009ec8d) popup_slider_window_cp01

0xd325,	// (0x000a87ad) cam4_battery_pane

0xd37e,	// (0x000a8806) cam4_battery_pane_cp02

0xee2e,	// (0x000aa2b6) cam4_battery_pane_cp01

0xee2e,	// (0x000aa2b6) cam4_battery_pane_cp03

0x376b,	// (0x0009ebf3) cam4_battery_pane_g1

0xa9dd,	// (0x000a5e65) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x000aaee5) cam4_battery_pane_g

0xcc3d,	// (0x000a80c5) popup_blid_sat_info2_window_t11

0xb2fd,	// (0x000a6785) aid_size_touch_mv_arrow_left_ParamLimits

0xb326,	// (0x000a67ae) aid_size_touch_mv_arrow_right_ParamLimits

0xb384,	// (0x000a680c) navi_pane_g1_ParamLimits

0xb390,	// (0x000a6818) navi_pane_g2_ParamLimits

0xb3be,	// (0x000a6846) navi_pane_g3_ParamLimits

0xf334,	// (0x000aa7bc) navi_pane_g_ParamLimits

0x24e8,	// (0x0009d970) navi_pane_mv_t1_ParamLimits

0x43b4,	// (0x0009f83c) grid_imed_effect_pane_ParamLimits

0x1271,	// (0x0009c6f9) aid_placing_vt_slider_lsc

0xaa2c,	// (0x000a5eb4) aid_placing_vt_slider_prt

0x076c,	// (0x0009bbf4) bg_tb_trans_pane_cp01_ParamLimits

0xcebd,	// (0x000a8345) popup_image_details_window_g1_ParamLimits

0xced0,	// (0x000a8358) popup_image_details_window_g2_ParamLimits

0xcee5,	// (0x000a836d) popup_image_details_window_g3_ParamLimits

0xcee5,	// (0x000a836d) popup_image_details_window_g3

0xf660,	// (0x000aaae8) popup_image_details_window_g_ParamLimits

0xcef9,	// (0x000a8381) popup_image_details_window_t1_ParamLimits

0xcf0b,	// (0x000a8393) popup_image_details_window_t2_ParamLimits

0xcf24,	// (0x000a83ac) popup_image_details_window_t3_ParamLimits

0xcf38,	// (0x000a83c0) popup_image_details_window_t4_ParamLimits

0xcf53,	// (0x000a83db) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x000aaaef) popup_image_details_window_t_ParamLimits

0x5d6c,	// (0x000a11f4) cl_header_name_pane_ParamLimits

0x5d6c,	// (0x000a11f4) cl_header_name_pane

0x62a6,	// (0x000a172e) cl_header_name_pane_t1_ParamLimits

0x62a6,	// (0x000a172e) cl_header_name_pane_t1

0x62c7,	// (0x000a174f) cl_header_name_pane_t2_ParamLimits

0x62c7,	// (0x000a174f) cl_header_name_pane_t2

0x6309,	// (0x000a1791) cl_header_name_pane_t3_ParamLimits

0x6309,	// (0x000a1791) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x000aaeea) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x000aaeea) cl_header_name_pane_t

0xb44d,	// (0x000a68d5) navi_pane_mv_g2_ParamLimits

0xe994,	// (0x000a9e1c) field_vitu2_entry_pane_g1_ParamLimits

0xe9a0,	// (0x000a9e28) field_vitu2_entry_pane_g2_ParamLimits

0xb57d,	// (0x000a6a05) field_vitu2_entry_pane_g3_ParamLimits

0xb57d,	// (0x000a6a05) field_vitu2_entry_pane_g3

0xf862,	// (0x000aacea) field_vitu2_entry_pane_g_ParamLimits

0x5003,	// (0x000a048b) cell_vitu2_itu_pane_g1_ParamLimits

0x501b,	// (0x000a04a3) cell_vitu2_itu_pane_g2_ParamLimits

0x501b,	// (0x000a04a3) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x000aacf6) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x000aacf6) cell_vitu2_itu_pane_g

0x9fe3,	// (0x000a546b) bg_vkb2_func_pane_cp05_ParamLimits

0x9fe3,	// (0x000a546b) bg_vkb2_func_pane_cp05

0x9fe3,	// (0x000a546b) bg_vkb2_func_pane_cp03

0x9fe3,	// (0x000a546b) bg_vkb2_func_pane_cp04

0x9fe3,	// (0x000a546b) bg_vkb2_func_pane_cp10_ParamLimits

0x9fe3,	// (0x000a546b) bg_vkb2_func_pane_cp10

0x5d10,	// (0x000a1198) bg_vkb2_func_pane_cp08

0x5ce9,	// (0x000a1171) bg_vkb2_func_pane_cp06

0x5cf5,	// (0x000a117d) bg_vkb2_func_pane_cp07

0x5f0a,	// (0x000a1392) bg_vkb2_func_pane_cp11_ParamLimits

0x5f0a,	// (0x000a1392) bg_vkb2_func_pane_cp11

0x5f1f,	// (0x000a13a7) bg_vkb2_func_pane_cp12_ParamLimits

0x5f1f,	// (0x000a13a7) bg_vkb2_func_pane_cp12

0x046c,	// (0x0009b8f4) bg_vkb2_func_pane_cp09

0xe9be,	// (0x000a9e46) bg_vkb2_func_pane_g1

0xabee,	// (0x000a6076) bg_vkb2_func_pane_g2

0xe9c6,	// (0x000a9e4e) bg_vkb2_func_pane_g3

0xe9ce,	// (0x000a9e56) bg_vkb2_func_pane_g4

0xec55,	// (0x000aa0dd) bg_vkb2_func_pane_g5

0xe9e6,	// (0x000a9e6e) bg_vkb2_func_pane_g6

0xe9ee,	// (0x000a9e76) bg_vkb2_func_pane_g7

0xe9de,	// (0x000a9e66) bg_vkb2_func_pane_g8

0xabce,	// (0x000a6056) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x000aaef1) bg_vkb2_func_pane_g

0x616e,	// (0x000a15f6) blid2_tripm_pane_g6_ParamLimits

0x616e,	// (0x000a15f6) blid2_tripm_pane_g6

0xe8e6,	// (0x000a9d6e) mp4_progress_pane_g1

0x61e7,	// (0x000a166f) blid2_tripm_values_pane_ParamLimits

0x61e7,	// (0x000a166f) blid2_tripm_values_pane

0x633a,	// (0x000a17c2) blid2_tripm_values_pane_t1

0x6348,	// (0x000a17d0) blid2_tripm_values_pane_t2

0x6356,	// (0x000a17de) blid2_tripm_values_pane_t3

0x6364,	// (0x000a17ec) blid2_tripm_values_pane_t4

0x6372,	// (0x000a17fa) blid2_tripm_values_pane_t5

0x6380,	// (0x000a1808) blid2_tripm_values_pane_t6

0x638e,	// (0x000a1816) blid2_tripm_values_pane_t7

0x639c,	// (0x000a1824) blid2_tripm_values_pane_t8

0x63aa,	// (0x000a1832) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x000aaf04) blid2_tripm_values_pane_t

0x12b3,	// (0x0009c73b) call_video_pane_t1_ParamLimits

0x12d1,	// (0x0009c759) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x000aa66a) call_video_pane_t_ParamLimits

0x27a8,	// (0x0009dc30) msg_header_pane_g1_ParamLimits

0xb668,	// (0x000a6af0) msg_header_pane_g2_ParamLimits

0xb668,	// (0x000a6af0) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x000aa85f) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x000aa85f) msg_header_pane_g

0xa758,	// (0x000a5be0) main_clock2_pane_ParamLimits

0x40b5,	// (0x0009f53d) grid_clock2_toolbar_pane_ParamLimits

0x40b5,	// (0x0009f53d) grid_clock2_toolbar_pane

0x40b5,	// (0x0009f53d) listscroll_clock2_pane_ParamLimits

0x40b5,	// (0x0009f53d) listscroll_clock2_pane

0x4199,	// (0x0009f621) main_clock2_pane_t3_ParamLimits

0x4199,	// (0x0009f621) main_clock2_pane_t3

0x41bd,	// (0x0009f645) main_clock2_pane_t4_ParamLimits

0x41bd,	// (0x0009f645) main_clock2_pane_t4

0x63b8,	// (0x000a1840) cell_clock2_toolbar_pane

0x63c0,	// (0x000a1848) cell_clock2_toolbar_pane_cp01

0x63c0,	// (0x000a1848) cell_clock2_toolbar_pane_cp02

0x63c8,	// (0x000a1850) cell_clock2_toolbar_pane_cp03

0x63d0,	// (0x000a1858) list_clock2_pane

0xb273,	// (0x000a66fb) scroll_pane_cp10

0x63d8,	// (0x000a1860) list_single_clock2_pane_ParamLimits

0x63d8,	// (0x000a1860) list_single_clock2_pane

0xa99d,	// (0x000a5e25) list_highlight_pane_cp08

0x63e5,	// (0x000a186d) list_single_clock2_pane_t1

0x63f3,	// (0x000a187b) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x000aaf17) list_single_clock2_pane_t

0x046c,	// (0x0009b8f4) bg_button_pane_cp10

0x6401,	// (0x000a1889) cell_clock2_toolbar_pane_g1

0x2838,	// (0x0009dcc0) aid_main_viewer_pane_g1_ParamLimits

0x2838,	// (0x0009dcc0) aid_main_viewer_pane_g1

0x2846,	// (0x0009dcce) aid_main_viewer_pane_g2_ParamLimits

0x2846,	// (0x0009dcce) aid_main_viewer_pane_g2

0x2854,	// (0x0009dcdc) aid_main_viewer_pane_g3_ParamLimits

0x2854,	// (0x0009dcdc) aid_main_viewer_pane_g3

0x2863,	// (0x0009dceb) aid_main_viewer_pane_g4_ParamLimits

0x2863,	// (0x0009dceb) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x000aa870) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x000aa870) aid_main_viewer_pane_g

0x31aa,	// (0x0009e632) main_calc_pane_ParamLimits

0x31d0,	// (0x0009e658) main_dialer2_pane_ParamLimits

0x9ff1,	// (0x000a5479) main_cam6_pane

0x9ff1,	// (0x000a5479) main_vid6_pane

0x40c1,	// (0x0009f549) listscroll_gen_pane_cp06_ParamLimits

0x40c1,	// (0x0009f549) listscroll_gen_pane_cp06

0x41e0,	// (0x0009f668) main_clock2_pane_t5_ParamLimits

0x41e0,	// (0x0009f668) main_clock2_pane_t5

0x423e,	// (0x0009f6c6) aid_call2_pane_cp10_ParamLimits

0x4250,	// (0x0009f6d8) aid_call_pane_cp10_ParamLimits

0xb2f1,	// (0x000a6779) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2f1,	// (0x000a6779) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4262,	// (0x0009f6ea) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4262,	// (0x0009f6ea) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2f1,	// (0x000a6779) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x000aaba4) popup_clock_analogue_window_cp10_g_ParamLimits

0x4278,	// (0x0009f700) popup_clock_analogue_window_cp10_t1_ParamLimits

0x477a,	// (0x0009fc02) cell_dialer2_keypad_pane_g2_ParamLimits

0x477a,	// (0x0009fc02) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x000aac89) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x000aac89) cell_dialer2_keypad_pane_g

0x4796,	// (0x0009fc1e) cell_dialer2_keypad_pane_t1

0x5396,	// (0x000a081e) main_cset_text2_pane_ParamLimits

0x5396,	// (0x000a081e) main_cset_text2_pane

0xefcd,	// (0x000aa455) area_vitu2_query_pane_g1_ParamLimits

0x5bee,	// (0x000a1076) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x000aae34) area_vitu2_query_pane_g_ParamLimits

0x5cc5,	// (0x000a114d) area_vitu2_query_pane_t7_ParamLimits

0x5cc5,	// (0x000a114d) area_vitu2_query_pane_t7

0x5ce9,	// (0x000a1171) bg_button_pane_cp018_ParamLimits

0x5cf5,	// (0x000a117d) bg_button_pane_cp021_ParamLimits

0x5d01,	// (0x000a1189) bg_button_pane_cp022_ParamLimits

0x5d10,	// (0x000a1198) bg_vkb2_func_pane_cp08_ParamLimits

0x5ce9,	// (0x000a1171) bg_vkb2_func_pane_cp06_ParamLimits

0x5cf5,	// (0x000a117d) bg_vkb2_func_pane_cp07_ParamLimits

0x5d20,	// (0x000a11a8) input_focus_pane_cp09_ParamLimits

0x6409,	// (0x000a1891) cam6_autofocus_pane_ParamLimits

0x6409,	// (0x000a1891) cam6_autofocus_pane

0x6415,	// (0x000a189d) cam6_image_uncrop_pane_ParamLimits

0x6415,	// (0x000a189d) cam6_image_uncrop_pane

0x6425,	// (0x000a18ad) cam6_indi_pane_ParamLimits

0x6425,	// (0x000a18ad) cam6_indi_pane

0x643b,	// (0x000a18c3) cam6_mode_pane_ParamLimits

0x643b,	// (0x000a18c3) cam6_mode_pane

0x644d,	// (0x000a18d5) cam6_timer_pane_ParamLimits

0x644d,	// (0x000a18d5) cam6_timer_pane

0x6459,	// (0x000a18e1) cam6_zoom_pane_ParamLimits

0x6459,	// (0x000a18e1) cam6_zoom_pane

0x6466,	// (0x000a18ee) cam6_mode_pane_g1_ParamLimits

0x6466,	// (0x000a18ee) cam6_mode_pane_g1

0x6476,	// (0x000a18fe) cam6_mode_pane_g2_ParamLimits

0x6476,	// (0x000a18fe) cam6_mode_pane_g2

0x6486,	// (0x000a190e) cam6_mode_pane_g3_ParamLimits

0x6486,	// (0x000a190e) cam6_mode_pane_g3

0x6496,	// (0x000a191e) cam6_mode_pane_g4_ParamLimits

0x6496,	// (0x000a191e) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x000aaf1c) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x000aaf1c) cam6_mode_pane_g

0xeea6,	// (0x000aa32e) bg_tb_trans_pane_cp08_ParamLimits

0xeea6,	// (0x000aa32e) bg_tb_trans_pane_cp08

0x64a6,	// (0x000a192e) cam6_battery_pane_ParamLimits

0x64a6,	// (0x000a192e) cam6_battery_pane

0x64bc,	// (0x000a1944) cam6_indi_pane_g1_ParamLimits

0x64bc,	// (0x000a1944) cam6_indi_pane_g1

0x64ce,	// (0x000a1956) cam6_indi_pane_g2_ParamLimits

0x64ce,	// (0x000a1956) cam6_indi_pane_g2

0x64e0,	// (0x000a1968) cam6_indi_pane_g3_ParamLimits

0x64e0,	// (0x000a1968) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x000aaf25) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x000aaf25) cam6_indi_pane_g

0x64f2,	// (0x000a197a) cam6_indi_pane_t1_ParamLimits

0x64f2,	// (0x000a197a) cam6_indi_pane_t1

0x4da6,	// (0x000a022e) cam6_autofocus_pane_g1

0x4d9e,	// (0x000a0226) cam6_autofocus_pane_g2

0x4db6,	// (0x000a023e) cam6_autofocus_pane_g3

0x4dae,	// (0x000a0236) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x000aaf2c) cam6_autofocus_pane_g

0x6518,	// (0x000a19a0) cam6_timer_pane_g1

0x6520,	// (0x000a19a8) cam6_timer_pane_t1

0x652e,	// (0x000a19b6) cam6_zoom_cont_pane

0x6536,	// (0x000a19be) cam6_zoom_pane_g1

0x653f,	// (0x000a19c7) cam6_zoom_pane_g2

0x6548,	// (0x000a19d0) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x000aaf35) cam6_zoom_pane_g

0xa9dd,	// (0x000a5e65) cam6_battery_pane_g1

0xa9dd,	// (0x000a5e65) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x000aa820) cam6_battery_pane_g

0x6536,	// (0x000a19be) cam6_zoom_cont_pane_g1

0x653f,	// (0x000a19c7) cam6_zoom_cont_pane_g2

0x6551,	// (0x000a19d9) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x000aaf3c) cam6_zoom_cont_pane_g

0x656b,	// (0x000a19f3) cam6_mode_pane_cp_ParamLimits

0x656b,	// (0x000a19f3) cam6_mode_pane_cp

0x657d,	// (0x000a1a05) cam6_zoom_pane_cp_ParamLimits

0x657d,	// (0x000a1a05) cam6_zoom_pane_cp

0x6589,	// (0x000a1a11) vid6_image_uncrop_cif_pane_ParamLimits

0x6589,	// (0x000a1a11) vid6_image_uncrop_cif_pane

0x6599,	// (0x000a1a21) vid6_image_uncrop_nhd_pane_ParamLimits

0x6599,	// (0x000a1a21) vid6_image_uncrop_nhd_pane

0x65b8,	// (0x000a1a40) vid6_image_uncrop_vga_pane_ParamLimits

0x65b8,	// (0x000a1a40) vid6_image_uncrop_vga_pane

0x65c7,	// (0x000a1a4f) vid6_image_uncrop_wvga_pane_ParamLimits

0x65c7,	// (0x000a1a4f) vid6_image_uncrop_wvga_pane

0x65d6,	// (0x000a1a5e) vid6_indi_pane_ParamLimits

0x65d6,	// (0x000a1a5e) vid6_indi_pane

0xeea6,	// (0x000aa32e) bg_tb_trans_pane_cp09_ParamLimits

0xeea6,	// (0x000aa32e) bg_tb_trans_pane_cp09

0x65ee,	// (0x000a1a76) cam6_battery_pane_cp_ParamLimits

0x65ee,	// (0x000a1a76) cam6_battery_pane_cp

0x65fa,	// (0x000a1a82) vid6_indi_pane_g1_ParamLimits

0x65fa,	// (0x000a1a82) vid6_indi_pane_g1

0x660c,	// (0x000a1a94) vid6_indi_pane_g2_ParamLimits

0x660c,	// (0x000a1a94) vid6_indi_pane_g2

0x661e,	// (0x000a1aa6) vid6_indi_pane_g3_ParamLimits

0x661e,	// (0x000a1aa6) vid6_indi_pane_g3

0x6633,	// (0x000a1abb) vid6_indi_pane_g4_ParamLimits

0x6633,	// (0x000a1abb) vid6_indi_pane_g4

0x6648,	// (0x000a1ad0) vid6_indi_pane_g5_ParamLimits

0x6648,	// (0x000a1ad0) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x000aaf43) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x000aaf43) vid6_indi_pane_g

0x6662,	// (0x000a1aea) vid6_indi_pane_t1_ParamLimits

0x6662,	// (0x000a1aea) vid6_indi_pane_t1

0x6678,	// (0x000a1b00) vid6_indi_pane_t2_ParamLimits

0x6678,	// (0x000a1b00) vid6_indi_pane_t2

0x66a0,	// (0x000a1b28) vid6_indi_pane_t3_ParamLimits

0x66a0,	// (0x000a1b28) vid6_indi_pane_t3

0x66c8,	// (0x000a1b50) vid6_indi_pane_t4_ParamLimits

0x66c8,	// (0x000a1b50) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x000aaf4e) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x000aaf4e) vid6_indi_pane_t

0x66ec,	// (0x000a1b74) wait_bar_pane_cp08

0x66fb,	// (0x000a1b83) main_cset_text2_pane_t1_ParamLimits

0x66fb,	// (0x000a1b83) main_cset_text2_pane_t1

0x6559,	// (0x000a19e1) listscroll_gen_pane_cp06_t1_ParamLimits

0x6559,	// (0x000a19e1) listscroll_gen_pane_cp06_t1

0x9ff1,	// (0x000a5479) main_cam6_set_pane

0xd317,	// (0x000a879f) bg_tb_trans_pane_cp06_ParamLimits

0xd32d,	// (0x000a87b5) cam4_indicators_pane_g1_ParamLimits

0xd33e,	// (0x000a87c6) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x000aacc6) cam4_indicators_pane_g_ParamLimits

0xd35c,	// (0x000a87e4) cam4_indicators_pane_t1_ParamLimits

0x9fe3,	// (0x000a546b) bg_tb_trans_pane_cp07_ParamLimits

0xd388,	// (0x000a8810) vid4_indicators_pane_g1_ParamLimits

0xd39c,	// (0x000a8824) vid4_indicators_pane_g2_ParamLimits

0xd3b0,	// (0x000a8838) vid4_indicators_pane_g3_ParamLimits

0xd3c1,	// (0x000a8849) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x000aacd8) vid4_indicators_pane_g_ParamLimits

0xd3df,	// (0x000a8867) vid4_indicators_pane_t1_ParamLimits

0xee36,	// (0x000aa2be) vid4_progress_pane_g1_ParamLimits

0xee46,	// (0x000aa2ce) vid4_progress_pane_g2_ParamLimits

0x5e5c,	// (0x000a12e4) vid4_progress_pane_g3_ParamLimits

0xee56,	// (0x000aa2de) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x000aae7f) vid4_progress_pane_g_ParamLimits

0x5e6e,	// (0x000a12f6) vid4_progress_pane_t1_ParamLimits

0xee6e,	// (0x000aa2f6) vid4_progress_pane_t2_ParamLimits

0xee83,	// (0x000aa30b) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x000aae8a) vid4_progress_pane_t_ParamLimits

0x5e86,	// (0x000a130e) wait_bar_pane_cp07_ParamLimits

0x6718,	// (0x000a1ba0) main_cam6_set_pane_g2_ParamLimits

0x6718,	// (0x000a1ba0) main_cam6_set_pane_g2

0x673c,	// (0x000a1bc4) main_cset6_listscroll_pane_ParamLimits

0x673c,	// (0x000a1bc4) main_cset6_listscroll_pane

0x675c,	// (0x000a1be4) main_cset6_slider_pane_ParamLimits

0x675c,	// (0x000a1be4) main_cset6_slider_pane

0x6772,	// (0x000a1bfa) main_cset6_text2_pane_ParamLimits

0x6772,	// (0x000a1bfa) main_cset6_text2_pane

0x6780,	// (0x000a1c08) main_cset6_text_pane

0x6788,	// (0x000a1c10) main_cset_list_pane_copy1_ParamLimits

0x6788,	// (0x000a1c10) main_cset_list_pane_copy1

0x6798,	// (0x000a1c20) scroll_pane_cp028_copy1

0x67a1,	// (0x000a1c29) cset_list_set_pane_copy1

0x67b2,	// (0x000a1c3a) aid_position_infowindow_above_copy1

0x67ba,	// (0x000a1c42) aid_position_infowindow_below_copy1

0x67c2,	// (0x000a1c4a) cset_list_set_pane_g1_copy1

0x67ca,	// (0x000a1c52) cset_list_set_pane_g3_copy1_ParamLimits

0x67ca,	// (0x000a1c52) cset_list_set_pane_g3_copy1

0x67d9,	// (0x000a1c61) cset_list_set_pane_t1_copy1_ParamLimits

0x67d9,	// (0x000a1c61) cset_list_set_pane_t1_copy1

0x076c,	// (0x0009bbf4) list_highlight_pane_cp021_copy1_ParamLimits

0x076c,	// (0x0009bbf4) list_highlight_pane_cp021_copy1

0x67ee,	// (0x000a1c76) cset6_slider_pane_ParamLimits

0x67ee,	// (0x000a1c76) cset6_slider_pane

0x681a,	// (0x000a1ca2) main_cset6_slider_pane_g1_ParamLimits

0x681a,	// (0x000a1ca2) main_cset6_slider_pane_g1

0x6842,	// (0x000a1cca) main_cset6_slider_pane_g2_ParamLimits

0x6842,	// (0x000a1cca) main_cset6_slider_pane_g2

0x686a,	// (0x000a1cf2) main_cset6_slider_pane_g3_ParamLimits

0x686a,	// (0x000a1cf2) main_cset6_slider_pane_g3

0x6876,	// (0x000a1cfe) main_cset6_slider_pane_g4_ParamLimits

0x6876,	// (0x000a1cfe) main_cset6_slider_pane_g4

0x6882,	// (0x000a1d0a) main_cset6_slider_pane_g5_ParamLimits

0x6882,	// (0x000a1d0a) main_cset6_slider_pane_g5

0xeaff,	// (0x000a9f87) main_cset6_slider_pane_g7_ParamLimits

0xeaff,	// (0x000a9f87) main_cset6_slider_pane_g7

0xeb0b,	// (0x000a9f93) main_cset6_slider_pane_g8_ParamLimits

0xeb0b,	// (0x000a9f93) main_cset6_slider_pane_g8

0x543c,	// (0x000a08c4) main_cset6_slider_pane_g9_ParamLimits

0x543c,	// (0x000a08c4) main_cset6_slider_pane_g9

0x5448,	// (0x000a08d0) main_cset6_slider_pane_g10_ParamLimits

0x5448,	// (0x000a08d0) main_cset6_slider_pane_g10

0x5454,	// (0x000a08dc) main_cset6_slider_pane_g11_ParamLimits

0x5454,	// (0x000a08dc) main_cset6_slider_pane_g11

0x5460,	// (0x000a08e8) main_cset6_slider_pane_g12_ParamLimits

0x5460,	// (0x000a08e8) main_cset6_slider_pane_g12

0x546c,	// (0x000a08f4) main_cset6_slider_pane_g13_ParamLimits

0x546c,	// (0x000a08f4) main_cset6_slider_pane_g13

0x5478,	// (0x000a0900) main_cset6_slider_pane_g14_ParamLimits

0x5478,	// (0x000a0900) main_cset6_slider_pane_g14

0x688e,	// (0x000a1d16) main_cset6_slider_pane_g15_ParamLimits

0x688e,	// (0x000a1d16) main_cset6_slider_pane_g15

0x549c,	// (0x000a0924) main_cset6_slider_pane_g16_ParamLimits

0x549c,	// (0x000a0924) main_cset6_slider_pane_g16

0x54a8,	// (0x000a0930) main_cset6_slider_pane_g17_ParamLimits

0x54a8,	// (0x000a0930) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x000aaf57) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x000aaf57) main_cset6_slider_pane_g

0x68be,	// (0x000a1d46) main_cset6_slider_pane_t1_ParamLimits

0x68be,	// (0x000a1d46) main_cset6_slider_pane_t1

0x68ff,	// (0x000a1d87) main_cset6_slider_pane_t2_ParamLimits

0x68ff,	// (0x000a1d87) main_cset6_slider_pane_t2

0x692a,	// (0x000a1db2) main_cset6_slider_pane_t3_ParamLimits

0x692a,	// (0x000a1db2) main_cset6_slider_pane_t3

0x6955,	// (0x000a1ddd) main_cset6_slider_pane_t4_ParamLimits

0x6955,	// (0x000a1ddd) main_cset6_slider_pane_t4

0x6980,	// (0x000a1e08) main_cset6_slider_pane_t5_ParamLimits

0x6980,	// (0x000a1e08) main_cset6_slider_pane_t5

0x69ab,	// (0x000a1e33) main_cset6_slider_pane_t7_ParamLimits

0x69ab,	// (0x000a1e33) main_cset6_slider_pane_t7

0x69e1,	// (0x000a1e69) main_cset6_slider_pane_t8_ParamLimits

0x69e1,	// (0x000a1e69) main_cset6_slider_pane_t8

0x6a05,	// (0x000a1e8d) main_cset6_slider_pane_t9_ParamLimits

0x6a05,	// (0x000a1e8d) main_cset6_slider_pane_t9

0x6a29,	// (0x000a1eb1) main_cset6_slider_pane_t10_ParamLimits

0x6a29,	// (0x000a1eb1) main_cset6_slider_pane_t10

0x6a4d,	// (0x000a1ed5) main_cset6_slider_pane_t11_ParamLimits

0x6a4d,	// (0x000a1ed5) main_cset6_slider_pane_t11

0x6a71,	// (0x000a1ef9) main_cset6_slider_pane_t14_ParamLimits

0x6a71,	// (0x000a1ef9) main_cset6_slider_pane_t14

0x6aaa,	// (0x000a1f32) main_cset6_slider_pane_t15_ParamLimits

0x6aaa,	// (0x000a1f32) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x000aaf7c) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x000aaf7c) main_cset6_slider_pane_t

0xf02a,	// (0x000aa4b2) cset_slider_pane_g1_copy1

0xf033,	// (0x000aa4bb) cset_slider_pane_g2_copy1

0xf03c,	// (0x000aa4c4) cset_slider_pane_g3_copy1

0x046c,	// (0x0009b8f4) bg_popup_sub_pane_cp011_copy1

0x6b00,	// (0x000a1f88) main_cset_text_pane_g1_copy1

0xecc4,	// (0x000aa14c) main_cset_text_pane_t1_copy1

0xecd2,	// (0x000aa15a) main_cset_text_pane_t2_copy1

0xece0,	// (0x000aa168) main_cset_text_pane_t3_copy1

0xecee,	// (0x000aa176) main_cset_text_pane_t4_copy1

0xecfc,	// (0x000aa184) main_cset_text_pane_t5_copy1

0x6b08,	// (0x000a1f90) main_cset_text_pane_t6_copy1

0x6b16,	// (0x000a1f9e) main_cset_text_pane_t7_copy1

0x66fb,	// (0x000a1b83) main_cset_text2_pane_t1_copy1

0x9fe3,	// (0x000a546b) main_ncimui_pane

0x341a,	// (0x0009e8a2) popup_query_ncimui_window_ParamLimits

0x341a,	// (0x0009e8a2) popup_query_ncimui_window

0xeeda,	// (0x000aa362) field_cale_ev2_pane_g4_ParamLimits

0xeeda,	// (0x000aa362) field_cale_ev2_pane_g4

0x465a,	// (0x0009fae2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x465a,	// (0x0009fae2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x000aac60) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x000aac60) cell_video_dialer_keypad_pane_g

0x4672,	// (0x0009fafa) cell_video_dialer_keypad_pane_t1

0x046c,	// (0x0009b8f4) bg_popup_window_pane_cp012

0xc7a2,	// (0x000a7c2a) heading_pane_cp06

0x6c6b,	// (0x000a20f3) ncim_query_content_pane

0x046c,	// (0x0009b8f4) bg_popup_heading_pane_cp01

0x6c73,	// (0x000a20fb) ncim_heading_pane_t1

0x6c81,	// (0x000a2109) ncim_indicator_popup_pane

0x6c93,	// (0x000a211b) ncim_query_button_pane

0x6cb3,	// (0x000a213b) ncim_query_content_pane_t1

0x6cc5,	// (0x000a214d) ncim_query_content_pane_t2

0x0005,

0xfb38,	// (0x000aafc0) ncim_query_content_pane_t

0x6d77,	// (0x000a21ff) ncim_query_list_pane

0x6d89,	// (0x000a2211) ncim_query_popup_pane

0x6c81,	// (0x000a2109) ncim_indicator_popup_pane_ParamLimits

0x6c9b,	// (0x000a2123) ncim_query_content_pane_g1_ParamLimits

0x6c9b,	// (0x000a2123) ncim_query_content_pane_g1

0x6cb3,	// (0x000a213b) ncim_query_content_pane_t1_ParamLimits

0x6cc5,	// (0x000a214d) ncim_query_content_pane_t2_ParamLimits

0x6cd7,	// (0x000a215f) ncim_query_content_pane_t3_ParamLimits

0x6cd7,	// (0x000a215f) ncim_query_content_pane_t3

0x6cff,	// (0x000a2187) ncim_query_content_pane_t4_ParamLimits

0x6cff,	// (0x000a2187) ncim_query_content_pane_t4

0x6d27,	// (0x000a21af) ncim_query_content_pane_t5_ParamLimits

0x6d27,	// (0x000a21af) ncim_query_content_pane_t5

0x6d4f,	// (0x000a21d7) ncim_query_content_pane_t6_ParamLimits

0x6d4f,	// (0x000a21d7) ncim_query_content_pane_t6

0xfb38,	// (0x000aafc0) ncim_query_content_pane_t_ParamLimits

0x6d77,	// (0x000a21ff) ncim_query_list_pane_ParamLimits

0x6d89,	// (0x000a2211) ncim_query_popup_pane_ParamLimits

0x6d9d,	// (0x000a2225) wait_bar_pane_cp04

0x046c,	// (0x0009b8f4) input_focus_pane_cp011

0x6da5,	// (0x000a222d) ncim_query_popup_pane_t1

0x6db3,	// (0x000a223b) ncim_list_query_list_pane_ParamLimits

0x6db3,	// (0x000a223b) ncim_list_query_list_pane

0x046c,	// (0x0009b8f4) bg_button_pane_cp027

0x6dc0,	// (0x000a2248) ncim_query_button_pane_g1

0x046c,	// (0x0009b8f4) list_highlight_pane_cp012

0x6dca,	// (0x000a2252) ncim_list_query_list_pane_g1

0x6dd2,	// (0x000a225a) ncim_list_query_list_pane_t1

0xd34d,	// (0x000a87d5) cam4_indicators_pane_g3_ParamLimits

0xd34d,	// (0x000a87d5) cam4_indicators_pane_g3

0xd3cd,	// (0x000a8855) vid4_indicators_pane_g5_ParamLimits

0xd3cd,	// (0x000a8855) vid4_indicators_pane_g5

0xee62,	// (0x000aa2ea) vid4_progress_pane_g5_ParamLimits

0xee62,	// (0x000aa2ea) vid4_progress_pane_g5

0x6b56,	// (0x000a1fde) main_ncimui_pane_g1

0x6bbf,	// (0x000a2047) ncimui_group_query_pane_ParamLimits

0x6bbf,	// (0x000a2047) ncimui_group_query_pane

0x6c07,	// (0x000a208f) ncimui_list_pane_ParamLimits

0x6c07,	// (0x000a208f) ncimui_list_pane

0x6c2e,	// (0x000a20b6) ncimui_text_pane_ParamLimits

0x6c2e,	// (0x000a20b6) ncimui_text_pane

0x6de0,	// (0x000a2268) ncimui_text_pane_t1_ParamLimits

0x6de0,	// (0x000a2268) ncimui_text_pane_t1

0x6dfe,	// (0x000a2286) ncimui_list_single_graphic_pane_ParamLimits

0x6dfe,	// (0x000a2286) ncimui_list_single_graphic_pane

0x6e0e,	// (0x000a2296) ncimui_query_pane_ParamLimits

0x6e0e,	// (0x000a2296) ncimui_query_pane

0x046c,	// (0x0009b8f4) list_highlight_pane_cp013

0x6e21,	// (0x000a22a9) ncim_list_query_list_pane_t1_copy1

0x6dca,	// (0x000a2252) ncim_list_single_graphic_pane_g1

0x6e2f,	// (0x000a22b7) ncim_query_button_pane_cp01

0x6e3b,	// (0x000a22c3) ncim_query_entry_pane_ParamLimits

0x6e3b,	// (0x000a22c3) ncim_query_entry_pane

0x6e4e,	// (0x000a22d6) ncimui_query_pane_g1

0x6e5a,	// (0x000a22e2) ncimui_query_pane_t1_ParamLimits

0x6e5a,	// (0x000a22e2) ncimui_query_pane_t1

0x076c,	// (0x0009bbf4) input_focus_pane_cp012

0x6e73,	// (0x000a22fb) ncim_query_entry_pane_t1

0xa758,	// (0x000a5be0) main_im_pane_ParamLimits

0x9fe3,	// (0x000a546b) main_mobtv_pane_ParamLimits

0x9fe3,	// (0x000a546b) main_mobtv_pane

0x68a6,	// (0x000a1d2e) main_cset6_slider_pane_g18_ParamLimits

0x68a6,	// (0x000a1d2e) main_cset6_slider_pane_g18

0x68b2,	// (0x000a1d3a) main_cset6_slider_pane_g19_ParamLimits

0x68b2,	// (0x000a1d3a) main_cset6_slider_pane_g19

0xa6e0,	// (0x000a5b68) bg_main_mobtv_pane_ParamLimits

0xa6e0,	// (0x000a5b68) bg_main_mobtv_pane

0x6e85,	// (0x000a230d) main_mobtv_info_pane

0x6e8e,	// (0x000a2316) main_mobtv_loading_pane_ParamLimits

0x6e8e,	// (0x000a2316) main_mobtv_loading_pane

0x6e9b,	// (0x000a2323) main_mobtv_pg_channel_list_pane

0x6ea5,	// (0x000a232d) main_mobtv_pg_hdr_pane

0x6eae,	// (0x000a2336) main_mobtv_programe_curr_pane_ParamLimits

0x6eae,	// (0x000a2336) main_mobtv_programe_curr_pane

0x6ebb,	// (0x000a2343) main_mobtv_programe_next_pane_ParamLimits

0x6ebb,	// (0x000a2343) main_mobtv_programe_next_pane

0x6ec8,	// (0x000a2350) popup_mobtv_noti_window

0xa9dd,	// (0x000a5e65) main_tv_pg_hdr_pane_g1

0x6ed0,	// (0x000a2358) main_tv_pg_hdr_pane_g2

0x6ed8,	// (0x000a2360) main_tv_pg_hdr_pane_g3

0x6ee0,	// (0x000a2368) main_tv_pg_hdr_pane_g4

0x6ee8,	// (0x000a2370) main_tv_pg_hdr_pane_g5

0x6ef2,	// (0x000a237a) main_tv_pg_hdr_pane_g6

0x6efc,	// (0x000a2384) main_tv_pg_hdr_pane_g7

0x6f06,	// (0x000a238e) main_tv_pg_hdr_pane_g8

0x6f10,	// (0x000a2398) main_tv_pg_hdr_pane_g9

0x6f1a,	// (0x000a23a2) main_tv_pg_hdr_pane_g10

0x6f24,	// (0x000a23ac) main_tv_pg_hdr_pane_g11

0x000a,

0xfb45,	// (0x000aafcd) main_tv_pg_hdr_pane_g

0x6f2e,	// (0x000a23b6) main_tv_pg_hdr_pane_t1

0x6f3c,	// (0x000a23c4) main_tv_pg_hdr_pane_t2

0x6f4a,	// (0x000a23d2) main_tv_pg_hdr_pane_t3

0x6f5a,	// (0x000a23e2) main_tv_pg_hdr_pane_t4

0x6f6a,	// (0x000a23f2) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5c,	// (0x000aafe4) main_tv_pg_hdr_pane_t

0x6f7a,	// (0x000a2402) single_mobtv_pg_channel_pane_ParamLimits

0x6f7a,	// (0x000a2402) single_mobtv_pg_channel_pane

0x6f8c,	// (0x000a2414) single_mobtv_pg_channel_table_pane

0x6f95,	// (0x000a241d) single_mobtv_pg_channel_thumb_pane

0x6f9e,	// (0x000a2426) single_tv_pg_channel_pane_g1

0x6fa7,	// (0x000a242f) single_tv_pg_channel_pane_g2

0x0001,

0xfb67,	// (0x000aafef) single_tv_pg_channel_pane_g

0xa6c4,	// (0x000a5b4c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa6c4,	// (0x000a5b4c) bg_single_mobtv_pg_channel_thumb_pane

0x6fb0,	// (0x000a2438) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x6fb0,	// (0x000a2438) single_mobtv_pg_channel_thumb_pane_g1

0x6fbe,	// (0x000a2446) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x6fbe,	// (0x000a2446) single_mobtv_pg_channel_thumb_pane_g2

0x6fca,	// (0x000a2452) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x6fca,	// (0x000a2452) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6c,	// (0x000aaff4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6c,	// (0x000aaff4) single_mobtv_pg_channel_thumb_pane_g

0x6fd6,	// (0x000a245e) single_mobtv_pg_channel_thumb_pane_t1

0x6fe4,	// (0x000a246c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb73,	// (0x000aaffb) single_mobtv_pg_channel_thumb_pane_t

0xa9dd,	// (0x000a5e65) bg_single_mobtv_pg_channel_table_pane_g1

0xa9dd,	// (0x000a5e65) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x000aa820) bg_single_mobtv_pg_channel_table_pane_g

0x6ff2,	// (0x000a247a) single_mobtv_pg_channel_table_pane_t1

0x7000,	// (0x000a2488) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb78,	// (0x000ab000) single_mobtv_pg_channel_table_pane_t

0x7016,	// (0x000a249e) main_mobtv_info_pane_g1_ParamLimits

0x7016,	// (0x000a249e) main_mobtv_info_pane_g1

0x7034,	// (0x000a24bc) main_mobtv_info_pane_t1_ParamLimits

0x7034,	// (0x000a24bc) main_mobtv_info_pane_t1

0x70ac,	// (0x000a2534) main_mobtv_info_pane_t2_ParamLimits

0x70ac,	// (0x000a2534) main_mobtv_info_pane_t2

0x0002,

0xfb82,	// (0x000ab00a) main_mobtv_info_pane_t_ParamLimits

0xfb82,	// (0x000ab00a) main_mobtv_info_pane_t

0x713b,	// (0x000a25c3) wait_bar_pane_cp05

0x714d,	// (0x000a25d5) main_mobtv_loading_pane_g1_ParamLimits

0x714d,	// (0x000a25d5) main_mobtv_loading_pane_g1

0x7160,	// (0x000a25e8) main_mobtv_loading_pane_g2_ParamLimits

0x7160,	// (0x000a25e8) main_mobtv_loading_pane_g2

0x716c,	// (0x000a25f4) main_mobtv_loading_pane_g3_ParamLimits

0x716c,	// (0x000a25f4) main_mobtv_loading_pane_g3

0x0002,

0xfb89,	// (0x000ab011) main_mobtv_loading_pane_g_ParamLimits

0xfb89,	// (0x000ab011) main_mobtv_loading_pane_g

0x717f,	// (0x000a2607) main_mobtv_loading_pane_t1_ParamLimits

0x717f,	// (0x000a2607) main_mobtv_loading_pane_t1

0x7197,	// (0x000a261f) main_mobtv_loading_pane_t2_ParamLimits

0x7197,	// (0x000a261f) main_mobtv_loading_pane_t2

0x0001,

0xfb90,	// (0x000ab018) main_mobtv_loading_pane_t_ParamLimits

0xfb90,	// (0x000ab018) main_mobtv_loading_pane_t

0x71bb,	// (0x000a2643) wait_bar_pane_cp06_ParamLimits

0x71bb,	// (0x000a2643) wait_bar_pane_cp06

0x71ca,	// (0x000a2652) main_mobtv_programe_curr_pane_t1

0x71d8,	// (0x000a2660) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb95,	// (0x000ab01d) main_mobtv_programe_curr_pane_t

0x71e6,	// (0x000a266e) main_mobtv_programe_next_pane_t1

0x71f4,	// (0x000a267c) main_mobtv_programe_next_pane_t2

0x7202,	// (0x000a268a) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9a,	// (0x000ab022) main_mobtv_programe_next_pane_t

0x046c,	// (0x0009b8f4) bg_popup_mobtv_noti_window_pane

0x7210,	// (0x000a2698) popup_mobtv_noti_window_g1

0x7218,	// (0x000a26a0) popup_mobtv_noti_window_t1

0x7226,	// (0x000a26ae) popup_mobtv_noti_window_t2

0x0001,

0xfba1,	// (0x000ab029) popup_mobtv_noti_window_t

0xa9dd,	// (0x000a5e65) bg_popup_mobtv_noti_window_pane_g1

0x9ff1,	// (0x000a5479) sc_clock_pane

0x9ff1,	// (0x000a5479) main_fs_bigclock_pane

0x61d1,	// (0x000a1659) blid2_tripm_pane_t4_ParamLimits

0x61d1,	// (0x000a1659) blid2_tripm_pane_t4

0x7234,	// (0x000a26bc) sc_clock_pane_g1_ParamLimits

0x7234,	// (0x000a26bc) sc_clock_pane_g1

0x7246,	// (0x000a26ce) sc_clock_pane_t1_ParamLimits

0x7246,	// (0x000a26ce) sc_clock_pane_t1

0x7268,	// (0x000a26f0) sc_clock_pane_t2_ParamLimits

0x7268,	// (0x000a26f0) sc_clock_pane_t2

0x7280,	// (0x000a2708) sc_clock_pane_t3_ParamLimits

0x7280,	// (0x000a2708) sc_clock_pane_t3

0x0004,

0xfba6,	// (0x000ab02e) sc_clock_pane_t_ParamLimits

0xfba6,	// (0x000ab02e) sc_clock_pane_t

0x84fc,	// (0x000a3984) main_fs_bigclock_indicator_pane_ParamLimits

0x84fc,	// (0x000a3984) main_fs_bigclock_indicator_pane

0x7326,	// (0x000a27ae) main_fs_bigclock_pane_g1_ParamLimits

0x7326,	// (0x000a27ae) main_fs_bigclock_pane_g1

0x8508,	// (0x000a3990) main_fs_bigclock_pane_t1_ParamLimits

0x8508,	// (0x000a3990) main_fs_bigclock_pane_t1

0x851a,	// (0x000a39a2) main_fs_bigclock_pane_t2_ParamLimits

0x851a,	// (0x000a39a2) main_fs_bigclock_pane_t2

0x852e,	// (0x000a39b6) main_fs_bigclock_pane_t3_ParamLimits

0x852e,	// (0x000a39b6) main_fs_bigclock_pane_t3

0x0002,

0xfd37,	// (0x000ab1bf) main_fs_bigclock_pane_t_ParamLimits

0xfd37,	// (0x000ab1bf) main_fs_bigclock_pane_t

0xda44,	// (0x000a8ecc) main_fs_bigclock_indicator_pane_g1

0x6ca7,	// (0x000a212f) ncim_query_content_pane_g2_ParamLimits

0x6ca7,	// (0x000a212f) ncim_query_content_pane_g2

0x0001,

0xfb33,	// (0x000aafbb) ncim_query_content_pane_g_ParamLimits

0xfb33,	// (0x000aafbb) ncim_query_content_pane_g

0x7299,	// (0x000a2721) sc_clock_pane_t4_ParamLimits

0x7299,	// (0x000a2721) sc_clock_pane_t4

0x9fe3,	// (0x000a546b) main_radioblah_pane

0xd29f,	// (0x000a8727) cell_call4_button_pane_t1_copy1_ParamLimits

0xd29f,	// (0x000a8727) cell_call4_button_pane_t1_copy1

0x6b6e,	// (0x000a1ff6) main_ncimui_pane_t1_ParamLimits

0x6b6e,	// (0x000a1ff6) main_ncimui_pane_t1

0x6b88,	// (0x000a2010) main_ncimui_pane_t2_ParamLimits

0x6b88,	// (0x000a2010) main_ncimui_pane_t2

0x0002,

0xfb2c,	// (0x000aafb4) main_ncimui_pane_t_ParamLimits

0xfb2c,	// (0x000aafb4) main_ncimui_pane_t

0x74aa,	// (0x000a2932) main_radioblah_anim_pane_ParamLimits

0x74aa,	// (0x000a2932) main_radioblah_anim_pane

0x74bb,	// (0x000a2943) main_radioblah_info_pane_ParamLimits

0x74bb,	// (0x000a2943) main_radioblah_info_pane

0x74e1,	// (0x000a2969) main_radioblah_pane_t1_ParamLimits

0x74e1,	// (0x000a2969) main_radioblah_pane_t1

0x74fd,	// (0x000a2985) main_radioblah_pane_t2_ParamLimits

0x74fd,	// (0x000a2985) main_radioblah_pane_t2

0x0003,

0xfbc7,	// (0x000ab04f) main_radioblah_pane_t_ParamLimits

0xfbc7,	// (0x000ab04f) main_radioblah_pane_t

0x7545,	// (0x000a29cd) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7545,	// (0x000a29cd) main_radioblah_rocker_ctrl_pane

0x759d,	// (0x000a2a25) main_radioblah_info_pane_t1_ParamLimits

0x759d,	// (0x000a2a25) main_radioblah_info_pane_t1

0x75d7,	// (0x000a2a5f) main_radioblah_info_pane_t2_ParamLimits

0x75d7,	// (0x000a2a5f) main_radioblah_info_pane_t2

0x0003,

0xfbd0,	// (0x000ab058) main_radioblah_info_pane_t_ParamLimits

0xfbd0,	// (0x000ab058) main_radioblah_info_pane_t

0xa9dd,	// (0x000a5e65) main_radioblah_rocker_ctrl_pane_g1

0x7687,	// (0x000a2b0f) main_radioblah_rocker_ctrl_pane_g2

0x768f,	// (0x000a2b17) main_radioblah_rocker_ctrl_pane_g3

0x7697,	// (0x000a2b1f) main_radioblah_rocker_ctrl_pane_g4

0x769f,	// (0x000a2b27) main_radioblah_rocker_ctrl_pane_g5

0x76a7,	// (0x000a2b2f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd9,	// (0x000ab061) main_radioblah_rocker_ctrl_pane_g

0x66fb,	// (0x000a1b83) main_cset_text2_pane_t1_copy1_ParamLimits

0xd2fd,	// (0x000a8785) cam4_image_uncrop_qvga_pane

0xd376,	// (0x000a87fe) vid4_image_uncrop_qcif_pane

0xee98,	// (0x000aa320) cam6_image_uncrop_qvga_pane_ParamLimits

0xee98,	// (0x000aa320) cam6_image_uncrop_qvga_pane

0x65a8,	// (0x000a1a30) vid6_image_uncrop_qcif_pane_ParamLimits

0x65a8,	// (0x000a1a30) vid6_image_uncrop_qcif_pane

0x046c,	// (0x0009b8f4) bg_popup_preview_window_pane_cp03

0x6b24,	// (0x000a1fac) list_cset_text2_pane

0x6b2c,	// (0x000a1fb4) main_cset6_text2_pane_g1

0x6b34,	// (0x000a1fbc) main_cset6_text2_pane_t1

0x76af,	// (0x000a2b37) list_cset_text2_pane_t1_ParamLimits

0x76af,	// (0x000a2b37) list_cset_text2_pane_t1

0x9fe3,	// (0x000a546b) main_radioblah_pane_ParamLimits

0x7127,	// (0x000a25af) main_mobtv_info_pane_t3_ParamLimits

0x7127,	// (0x000a25af) main_mobtv_info_pane_t3

0x74cf,	// (0x000a2957) main_radioblah_pane_g1

0x756d,	// (0x000a29f5) main_radioblah_info_pane_g1

0x762c,	// (0x000a2ab4) main_radioblah_info_pane_t3_ParamLimits

0x762c,	// (0x000a2ab4) main_radioblah_info_pane_t3

0x2124,	// (0x0009d5ac) highlight_cell_cale_month_pane_ParamLimits

0x2124,	// (0x0009d5ac) highlight_cell_cale_month_pane

0x9ff1,	// (0x000a5479) main_phob_fisheye_pane

0xe42b,	// (0x000a98b3) scroll_pane_cp0031_ParamLimits

0xe42b,	// (0x000a98b3) scroll_pane_cp0031

0x66ec,	// (0x000a1b74) wait_bar_pane_cp08_ParamLimits

0x67a1,	// (0x000a1c29) cset_list_set_pane_copy1_ParamLimits

0xd3f6,	// (0x000a887e) highlight_cell_cale_month_pane_g1

0x76c8,	// (0x000a2b50) highlight_cell_cale_month_pane_t1

0xf021,	// (0x000aa4a9) list_gen_pane_cp01

0xeaea,	// (0x000a9f72) scroll_pane_01

0x76d6,	// (0x000a2b5e) list_single_double_fisheye_pane

0x76df,	// (0x000a2b67) list_double_fisheye_pane_g1_ParamLimits

0x76df,	// (0x000a2b67) list_double_fisheye_pane_g1

0x76eb,	// (0x000a2b73) list_double_fisheye_pane_g2_ParamLimits

0x76eb,	// (0x000a2b73) list_double_fisheye_pane_g2

0x76ff,	// (0x000a2b87) list_double_fisheye_pane_g3_ParamLimits

0x76ff,	// (0x000a2b87) list_double_fisheye_pane_g3

0x0004,

0xfbe6,	// (0x000ab06e) list_double_fisheye_pane_g_ParamLimits

0xfbe6,	// (0x000ab06e) list_double_fisheye_pane_g

0x7728,	// (0x000a2bb0) list_double_fisheye_pane_t1_ParamLimits

0x7728,	// (0x000a2bb0) list_double_fisheye_pane_t1

0x7743,	// (0x000a2bcb) list_double_fisheye_pane_t2_ParamLimits

0x7743,	// (0x000a2bcb) list_double_fisheye_pane_t2

0x0001,

0xfbf1,	// (0x000ab079) list_double_fisheye_pane_t_ParamLimits

0xfbf1,	// (0x000ab079) list_double_fisheye_pane_t

0x9ff1,	// (0x000a5479) main_call5_pane

0x72c4,	// (0x000a274c) sc_swipe_pane_ParamLimits

0x72c4,	// (0x000a274c) sc_swipe_pane

0x7778,	// (0x000a2c00) call5_image_pane_ParamLimits

0x7778,	// (0x000a2c00) call5_image_pane

0x7795,	// (0x000a2c1d) call5_swipe_1_pane_ParamLimits

0x7795,	// (0x000a2c1d) call5_swipe_1_pane

0x77a8,	// (0x000a2c30) call5_swipe_2_pane_ParamLimits

0x77a8,	// (0x000a2c30) call5_swipe_2_pane

0x77d3,	// (0x000a2c5b) popup_call5_audio_first_window_ParamLimits

0x77d3,	// (0x000a2c5b) popup_call5_audio_first_window

0xa6c4,	// (0x000a5b4c) call5_swipe_1_pane_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) call5_swipe_1_pane_g1

0xd3fe,	// (0x000a8886) call5_swipe_1_pane_g2_ParamLimits

0xd3fe,	// (0x000a8886) call5_swipe_1_pane_g2

0x0001,

0xfbf6,	// (0x000ab07e) call5_swipe_1_pane_g_ParamLimits

0xfbf6,	// (0x000ab07e) call5_swipe_1_pane_g

0xd40a,	// (0x000a8892) call5_swipe_1_pane_t1_ParamLimits

0xd40a,	// (0x000a8892) call5_swipe_1_pane_t1

0xa6c4,	// (0x000a5b4c) call5_swipe_2_pane_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) call5_swipe_2_pane_g1

0xd41f,	// (0x000a88a7) call5_swipe_2_pane_g2_ParamLimits

0xd41f,	// (0x000a88a7) call5_swipe_2_pane_g2

0x0001,

0xfbfb,	// (0x000ab083) call5_swipe_2_pane_g_ParamLimits

0xfbfb,	// (0x000ab083) call5_swipe_2_pane_g

0xd42b,	// (0x000a88b3) call5_swipe_2_pane_t1_ParamLimits

0xd42b,	// (0x000a88b3) call5_swipe_2_pane_t1

0xd440,	// (0x000a88c8) sc_swipe_pane_g1_ParamLimits

0xd440,	// (0x000a88c8) sc_swipe_pane_g1

0xd44d,	// (0x000a88d5) sc_swipe_pane_g2_ParamLimits

0xd44d,	// (0x000a88d5) sc_swipe_pane_g2

0x0001,

0xfc00,	// (0x000ab088) sc_swipe_pane_g_ParamLimits

0xfc00,	// (0x000ab088) sc_swipe_pane_g

0xd459,	// (0x000a88e1) sc_swipe_pane_t1_ParamLimits

0xd459,	// (0x000a88e1) sc_swipe_pane_t1

0x9ff1,	// (0x000a5479) main_cmail_launcher_pane

0x77e4,	// (0x000a2c6c) aid_size_cell_cmail_l_ParamLimits

0x77e4,	// (0x000a2c6c) aid_size_cell_cmail_l

0x77f2,	// (0x000a2c7a) grid_cmail_l_pane_ParamLimits

0x77f2,	// (0x000a2c7a) grid_cmail_l_pane

0x780c,	// (0x000a2c94) cell_cmail_l_pane_ParamLimits

0x780c,	// (0x000a2c94) cell_cmail_l_pane

0xd46e,	// (0x000a88f6) cell_cmail_l_pane_g1_ParamLimits

0xd46e,	// (0x000a88f6) cell_cmail_l_pane_g1

0xd47a,	// (0x000a8902) cell_cmail_l_pane_t1_ParamLimits

0xd47a,	// (0x000a8902) cell_cmail_l_pane_t1

0xd490,	// (0x000a8918) cell_cmail_l_pane_t2_ParamLimits

0xd490,	// (0x000a8918) cell_cmail_l_pane_t2

0x0001,

0xfc05,	// (0x000ab08d) cell_cmail_l_pane_t_ParamLimits

0xfc05,	// (0x000ab08d) cell_cmail_l_pane_t

0x076c,	// (0x0009bbf4) grid_highlight_pane_cp018_ParamLimits

0x076c,	// (0x0009bbf4) grid_highlight_pane_cp018

0x053c,	// (0x0009b9c4) main2_pane_ParamLimits

0x053c,	// (0x0009b9c4) main2_pane

0xa814,	// (0x000a5c9c) popup_sp_fs_action_menu_bg_pane_g1

0xa81c,	// (0x000a5ca4) popup_sp_fs_action_menu_bg_pane_g2

0xa824,	// (0x000a5cac) popup_sp_fs_action_menu_bg_pane_g3

0xa82c,	// (0x000a5cb4) popup_sp_fs_action_menu_bg_pane_g4

0xa834,	// (0x000a5cbc) popup_sp_fs_action_menu_bg_pane_g5

0xa83c,	// (0x000a5cc4) popup_sp_fs_action_menu_bg_pane_g6

0xa844,	// (0x000a5ccc) popup_sp_fs_action_menu_bg_pane_g7

0xa84c,	// (0x000a5cd4) popup_sp_fs_action_menu_bg_pane_g8

0xa854,	// (0x000a5cdc) popup_sp_fs_action_menu_bg_pane_g9

0xa85c,	// (0x000a5ce4) popup_sp_fs_action_menu_bg_pane_g10

0xa85c,	// (0x000a5ce4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x000aa58d) popup_sp_fs_action_menu_bg_pane_g

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g3_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g3_g2

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x000aa63b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x000aa63b) list_medium_line_x2_t3_g3_g

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g3_t1

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g3_t2

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x000aa642) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x000aa642) list_medium_line_x2_t3_g3_t

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g2_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x000aa649) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x000aa649) list_medium_line_x2_t3_g2_g

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g2_t1

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g2_t2

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x000aa642) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x000aa642) list_medium_line_x2_t3_g2_t

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g4_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g4_g2

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g4_g3

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x000aa64e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x000aa64e) list_medium_line_x2_t4_g4_g

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g4_t1

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g4_t2

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g4_t3

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x000aa657) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x000aa657) list_medium_line_x2_t4_g4_t

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g4_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g4_g2

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g4_g3

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x000aa64e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x000aa64e) list_medium_line_x2_t2_g4_g

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g4_t1

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x000aa61e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x000aa61e) list_medium_line_x2_t2_g4_t

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g3_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g3_g2

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x000aa63b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x000aa63b) list_medium_line_x2_t2_g3_g

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g3_t1

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x000aa61e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x000aa61e) list_medium_line_x2_t2_g3_t

0x2276,	// (0x0009d6fe) main_sp_fs_list_pane_ParamLimits

0x2276,	// (0x0009d6fe) main_sp_fs_list_pane

0xaf46,	// (0x000a63ce) sp_fs_scroll_pane_ParamLimits

0xaf46,	// (0x000a63ce) sp_fs_scroll_pane

0xaf52,	// (0x000a63da) list_medium_line_x2_t3_t1

0xaf52,	// (0x000a63da) list_medium_line_x2_t3_t2

0xaf52,	// (0x000a63da) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x000aa704) list_medium_line_x2_t3_t

0xaf52,	// (0x000a63da) list_medium_line_x3_t4_t1

0xaf52,	// (0x000a63da) list_medium_line_x3_t4_t2

0xaf52,	// (0x000a63da) list_medium_line_x3_t4_t3

0xaf52,	// (0x000a63da) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x000aa70b) list_medium_line_x3_t4_t

0xaf52,	// (0x000a63da) list_medium_line_x4_t5_t1

0xaf52,	// (0x000a63da) list_medium_line_x4_t5_t2

0xaf52,	// (0x000a63da) list_medium_line_x4_t5_t3

0xaf52,	// (0x000a63da) list_medium_line_x4_t5_t4

0xaf52,	// (0x000a63da) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x000aa714) list_medium_line_x4_t5_t

0xa6c4,	// (0x000a5b4c) list_medium_line_t4_g4_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t4_g4_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_t4_g4_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t4_g4_g2

0xa6c4,	// (0x000a5b4c) list_medium_line_t4_g4_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t4_g4_g3

0xa6c4,	// (0x000a5b4c) list_medium_line_t4_g4_g4_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x000aa64e) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x000aa64e) list_medium_line_t4_g4_g

0xa9af,	// (0x000a5e37) list_medium_line_t4_g4_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t4_g4_t1

0xa9af,	// (0x000a5e37) list_medium_line_t4_g4_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t4_g4_t2

0xa9af,	// (0x000a5e37) list_medium_line_t4_g4_t3_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t4_g4_t3

0xa9af,	// (0x000a5e37) list_medium_line_t4_g4_t4_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x000aa657) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x000aa657) list_medium_line_t4_g4_t

0x2311,	// (0x0009d799) chi_dic_find_pane_g1

0x31e4,	// (0x0009e66c) main_tport_pane

0xaf52,	// (0x000a63da) list_medium_line_plain_t1

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g2_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g2_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g2_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x000aa649) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x000aa649) list_medium_line_t2_g2_g

0xa9af,	// (0x000a5e37) list_medium_line_t2_g2_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t2_g2_t1

0xa9af,	// (0x000a5e37) list_medium_line_t2_g2_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x000aa61e) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x000aa61e) list_medium_line_t2_g2_t

0x5e99,	// (0x000a1321) aid_sp_fs_list_icon_a_sm

0x5ea1,	// (0x000a1329) aid_sp_fs_list_icon_d

0x5ea9,	// (0x000a1331) aid_sp_fs_text_primary

0x5eb2,	// (0x000a133a) aid_sp_fs_text_secondary

0x046c,	// (0x0009b8f4) list_medium_line

0x046c,	// (0x0009b8f4) list_medium_line_g2

0x046c,	// (0x0009b8f4) list_medium_line_g3

0x046c,	// (0x0009b8f4) list_medium_line_plain

0x046c,	// (0x0009b8f4) list_medium_line_plain_t2

0x046c,	// (0x0009b8f4) list_medium_line_plain_t3

0x046c,	// (0x0009b8f4) list_medium_line_right_icon

0x046c,	// (0x0009b8f4) list_medium_line_right_iconx2

0x046c,	// (0x0009b8f4) list_medium_line_t2

0x046c,	// (0x0009b8f4) list_medium_line_t2_g2

0x046c,	// (0x0009b8f4) list_medium_line_t2_g3

0x046c,	// (0x0009b8f4) list_medium_line_t2_right_icon

0x046c,	// (0x0009b8f4) list_medium_line_t2_right_iconx2

0x046c,	// (0x0009b8f4) list_medium_line_t3

0x046c,	// (0x0009b8f4) list_medium_line_t3_g2

0x046c,	// (0x0009b8f4) list_medium_line_t3_g3

0x046c,	// (0x0009b8f4) list_medium_line_t3_right_iconx2

0x046c,	// (0x0009b8f4) list_medium_line_t4_g4

0x046c,	// (0x0009b8f4) list_medium_line_x2

0x046c,	// (0x0009b8f4) list_medium_line_x2_t2_g2

0x046c,	// (0x0009b8f4) list_medium_line_x2_t2_g3

0x046c,	// (0x0009b8f4) list_medium_line_x2_t2_g4

0x046c,	// (0x0009b8f4) list_medium_line_x2_t3

0x046c,	// (0x0009b8f4) list_medium_line_x2_t3_g2

0x046c,	// (0x0009b8f4) list_medium_line_x2_t3_g3

0x046c,	// (0x0009b8f4) list_medium_line_x2_t3_g4

0x046c,	// (0x0009b8f4) list_medium_line_x2_t4_g2

0x046c,	// (0x0009b8f4) list_medium_line_x2_t4_g4

0x046c,	// (0x0009b8f4) list_medium_line_x3

0x046c,	// (0x0009b8f4) list_medium_line_x3_t4

0x046c,	// (0x0009b8f4) list_medium_line_x3_t4_g4

0x046c,	// (0x0009b8f4) list_medium_line_x4_t4

0x046c,	// (0x0009b8f4) list_medium_line_x4_t4_g7

0x046c,	// (0x0009b8f4) list_medium_line_x4_t5

0x5ebb,	// (0x000a1343) list_single_fs_dyc_pane_ParamLimits

0x5ebb,	// (0x000a1343) list_single_fs_dyc_pane

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g2

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g3

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g4

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g5

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x4_t4_g7_g6

0xa6d2,	// (0x000a5b5a) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa6d2,	// (0x000a5b5a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0d,	// (0x000aaf95) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0d,	// (0x000aaf95) list_medium_line_x4_t4_g7_g

0xa9af,	// (0x000a5e37) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x4_t4_g7_t1

0xa9af,	// (0x000a5e37) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x4_t4_g7_t2

0xa9af,	// (0x000a5e37) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x4_t4_g7_t3

0xb59f,	// (0x000a6a27) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb59f,	// (0x000a6a27) list_medium_line_x4_t4_g7_t4

0xb59f,	// (0x000a6a27) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb59f,	// (0x000a6a27) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1c,	// (0x000aafa4) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1c,	// (0x000aafa4) list_medium_line_x4_t4_g7_t

0x6ae3,	// (0x000a1f6b) list_single_dyc_row_pane_ParamLimits

0x6ae3,	// (0x000a1f6b) list_single_dyc_row_pane

0x7765,	// (0x000a2bed) call5_gesture_pane_ParamLimits

0x7765,	// (0x000a2bed) call5_gesture_pane

0x77bb,	// (0x000a2c43) call5_windows_pane_ParamLimits

0x77bb,	// (0x000a2c43) call5_windows_pane

0x7826,	// (0x000a2cae) call5_swipe_1_pane_cp_ParamLimits

0x7826,	// (0x000a2cae) call5_swipe_1_pane_cp

0x7832,	// (0x000a2cba) call5_swipe_2_pane_cp_ParamLimits

0x7832,	// (0x000a2cba) call5_swipe_2_pane_cp

0xa99d,	// (0x000a5e25) call5_image_pane_cp

0x783e,	// (0x000a2cc6) popup_call5_audio_first_window_cp_ParamLimits

0x783e,	// (0x000a2cc6) popup_call5_audio_first_window_cp

0xd440,	// (0x000a88c8) call5_swipe_1_pane_g1_cp_ParamLimits

0xd440,	// (0x000a88c8) call5_swipe_1_pane_g1_cp

0xd4ad,	// (0x000a8935) call5_swipe_1_pane_g2_cp

0xd459,	// (0x000a88e1) call5_swipe_1_pane_t1_cp_ParamLimits

0xd459,	// (0x000a88e1) call5_swipe_1_pane_t1_cp

0xd440,	// (0x000a88c8) call5_swipe_2_pane_g1_cp_ParamLimits

0xd440,	// (0x000a88c8) call5_swipe_2_pane_g1_cp

0xd4b5,	// (0x000a893d) call5_swipe_2_pane_g2_cp

0xd4bd,	// (0x000a8945) call5_swipe_2_pane_t1_cp_ParamLimits

0xd4bd,	// (0x000a8945) call5_swipe_2_pane_t1_cp

0x076c,	// (0x0009bbf4) main_sp_fs_email_pane

0xd4d2,	// (0x000a895a) main_sp_fs_listscroll_pane_te

0x784c,	// (0x000a2cd4) popup_sp_fs_action_menu_pane_ParamLimits

0x784c,	// (0x000a2cd4) popup_sp_fs_action_menu_pane

0xa9dd,	// (0x000a5e65) bg_sp_fs_ctrlbar_pane_g1

0xd4db,	// (0x000a8963) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd4e4,	// (0x000a896c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd4ed,	// (0x000a8975) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa9dd,	// (0x000a5e65) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0a,	// (0x000ab092) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb56,	// (0x000a7fde) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb56,	// (0x000a7fde) bg_sp_fs_ctrlbar_ddmenu_pane

0xd4f6,	// (0x000a897e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd4f6,	// (0x000a897e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd502,	// (0x000a898a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd502,	// (0x000a898a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc13,	// (0x000ab09b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc13,	// (0x000ab09b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd50e,	// (0x000a8996) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd50e,	// (0x000a8996) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa9dd,	// (0x000a5e65) list_medium_line_t2_right_icon_g1

0xaf52,	// (0x000a63da) list_medium_line_t2_right_icon_t1

0xaf52,	// (0x000a63da) list_medium_line_t2_right_icon_t2

0x0001,

0xfc18,	// (0x000ab0a0) list_medium_line_t2_right_icon_t

0xb5b3,	// (0x000a6a3b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb5b3,	// (0x000a6a3b) bg_sp_fs_ctrlbar_pane

0x78d8,	// (0x000a2d60) main_sp_fs_ctrlbar_button_pane_cp01

0x78e2,	// (0x000a2d6a) main_sp_fs_ctrlbar_ddmenu_pane

0xd560,	// (0x000a89e8) main_sp_fs_ctrlbar_pane_g1

0xd56c,	// (0x000a89f4) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1d,	// (0x000ab0a5) main_sp_fs_ctrlbar_pane_g

0x7920,	// (0x000a2da8) main_sp_fs_ctrlbar_pane_t1

0x795f,	// (0x000a2de7) main_sp_fs_ctrlbar_pane

0x7983,	// (0x000a2e0b) main_sp_fs_listscroll_pane_te_cp01

0x79a3,	// (0x000a2e2b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x79a3,	// (0x000a2e2b) popup_sp_fs_action_menu_pane_cp01

0x076c,	// (0x0009bbf4) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x076c,	// (0x0009bbf4) bg_sp_fs_highlight_list_pane_cp01

0x79c8,	// (0x000a2e50) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x79c8,	// (0x000a2e50) sp_fs_action_menu_list_gene_pane_g1

0xd593,	// (0x000a8a1b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd593,	// (0x000a8a1b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2b,	// (0x000ab0b3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2b,	// (0x000ab0b3) sp_fs_action_menu_list_gene_pane_g

0x79d7,	// (0x000a2e5f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x79d7,	// (0x000a2e5f) sp_fs_action_menu_list_gene_pane_t1

0x79ef,	// (0x000a2e77) sp_fs_action_menu_list_gene_pane_ParamLimits

0x79ef,	// (0x000a2e77) sp_fs_action_menu_list_gene_pane

0xd5a0,	// (0x000a8a28) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd5a0,	// (0x000a8a28) popup_sp_fs_action_menu_bg_pane

0x7a10,	// (0x000a2e98) sp_fs_action_menu_list_pane_ParamLimits

0x7a10,	// (0x000a2e98) sp_fs_action_menu_list_pane

0x7a32,	// (0x000a2eba) sp_fs_scroll_pane_cp01_ParamLimits

0x7a32,	// (0x000a2eba) sp_fs_scroll_pane_cp01

0xaf52,	// (0x000a63da) list_medium_line_plain_t2_t1

0xaf52,	// (0x000a63da) list_medium_line_plain_t2_t2

0x0001,

0xfc18,	// (0x000ab0a0) list_medium_line_plain_t2_t

0xaf52,	// (0x000a63da) list_medium_line_plain_t3_t1

0xaf52,	// (0x000a63da) list_medium_line_plain_t3_t2

0xaf52,	// (0x000a63da) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x000aa704) list_medium_line_plain_t3_t

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g2_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x000aa649) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x000aa649) list_medium_line_x2_t2_g2_g

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g2_t1

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x000aa61e) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x000aa61e) list_medium_line_x2_t2_g2_t

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g2_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x000aa649) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x000aa649) list_medium_line_x2_t4_g2_g

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g2_t1

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g2_t2

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g2_t3

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x000aa657) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x000aa657) list_medium_line_x2_t4_g2_t

0xa9dd,	// (0x000a5e65) list_medium_line_t3_right_iconx2_g1

0xa9dd,	// (0x000a5e65) list_medium_line_t3_right_iconx2_g2

0xa9dd,	// (0x000a5e65) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x000aa825) list_medium_line_t3_right_iconx2_g

0xaf52,	// (0x000a63da) list_medium_line_t3_right_iconx2_t1

0xaf52,	// (0x000a63da) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc18,	// (0x000ab0a0) list_medium_line_t3_right_iconx2_t

0xa6c4,	// (0x000a5b4c) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x3_t4_g4_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x3_t4_g4_g2

0xa6c4,	// (0x000a5b4c) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x3_t4_g4_g3

0xa6c4,	// (0x000a5b4c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x000aa64e) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x000aa64e) list_medium_line_x3_t4_g4_g

0xa9af,	// (0x000a5e37) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x3_t4_g4_t1

0xa9af,	// (0x000a5e37) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x3_t4_g4_t2

0xa9af,	// (0x000a5e37) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x3_t4_g4_t3

0xa9af,	// (0x000a5e37) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x000aa657) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x000aa657) list_medium_line_x3_t4_g4_t

0x7a58,	// (0x000a2ee0) list_single_dyc_row_text_pane_t1_ParamLimits

0x7a58,	// (0x000a2ee0) list_single_dyc_row_text_pane_t1

0x7aa1,	// (0x000a2f29) list_single_dyc_row_text_pane_t2_ParamLimits

0x7aa1,	// (0x000a2f29) list_single_dyc_row_text_pane_t2

0x7b17,	// (0x000a2f9f) list_single_dyc_row_text_pane_t3_ParamLimits

0x7b17,	// (0x000a2f9f) list_single_dyc_row_text_pane_t3

0x0005,

0xfc30,	// (0x000ab0b8) list_single_dyc_row_text_pane_t_ParamLimits

0xfc30,	// (0x000ab0b8) list_single_dyc_row_text_pane_t

0x7bfa,	// (0x000a3082) list_single_dyc_row_pane_g1_ParamLimits

0x7bfa,	// (0x000a3082) list_single_dyc_row_pane_g1

0x7c06,	// (0x000a308e) list_single_dyc_row_pane_g2_ParamLimits

0x7c06,	// (0x000a308e) list_single_dyc_row_pane_g2

0x7c12,	// (0x000a309a) list_single_dyc_row_pane_g3_ParamLimits

0x7c12,	// (0x000a309a) list_single_dyc_row_pane_g3

0x7c1e,	// (0x000a30a6) list_single_dyc_row_pane_g4_ParamLimits

0x7c1e,	// (0x000a30a6) list_single_dyc_row_pane_g4

0x0003,

0xfc3d,	// (0x000ab0c5) list_single_dyc_row_pane_g_ParamLimits

0xfc3d,	// (0x000ab0c5) list_single_dyc_row_pane_g

0x7c2a,	// (0x000a30b2) list_single_dyc_row_text_pane_ParamLimits

0x7c2a,	// (0x000a30b2) list_single_dyc_row_text_pane

0x046c,	// (0x0009b8f4) bg_sp_fs_scroll_pane

0xd5ae,	// (0x000a8a36) thumb_sp_fs_scroll_pane

0xa6c4,	// (0x000a5b4c) list_medium_line_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_g1

0xa9af,	// (0x000a5e37) list_medium_line_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t1

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x000aa649) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x000aa649) list_medium_line_x2_g

0xa9af,	// (0x000a5e37) list_medium_line_x2_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t1

0xa6c4,	// (0x000a5b4c) list_medium_line_x3_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x3_g1

0xd317,	// (0x000a879f) list_medium_line_x3_g2_ParamLimits

0xd317,	// (0x000a879f) list_medium_line_x3_g2

0x0001,

0xfc46,	// (0x000ab0ce) list_medium_line_x3_g_ParamLimits

0xfc46,	// (0x000ab0ce) list_medium_line_x3_g

0xd5b7,	// (0x000a8a3f) list_medium_line_x3_t1_ParamLimits

0xd5b7,	// (0x000a8a3f) list_medium_line_x3_t1

0xd5cb,	// (0x000a8a53) thumb_sp_fs_scroll_pane_g1

0xd5d4,	// (0x000a8a5c) thumb_sp_fs_scroll_pane_g2

0xd5dd,	// (0x000a8a65) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x000ab0d3) thumb_sp_fs_scroll_pane_g

0xd5cb,	// (0x000a8a53) bg_sp_fs_scroll_pane_g1

0xd5d4,	// (0x000a8a5c) bg_sp_fs_scroll_pane_g2

0xd5dd,	// (0x000a8a65) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x000ab0d3) bg_sp_fs_scroll_pane_g

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g4_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g4_g2

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g4_g3

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x000aa64e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x000aa64e) list_medium_line_x2_t3_g4_g

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g4_t1

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g4_t2

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x000aa642) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x000aa642) list_medium_line_x2_t3_g4_t

0xa6c4,	// (0x000a5b4c) list_medium_line_g2_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_g2_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_g2_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x000aa649) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x000aa649) list_medium_line_g2_g

0xa9af,	// (0x000a5e37) list_medium_line_g2_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_g2_t1

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g2_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g2_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g2_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x000aa649) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x000aa649) list_medium_line_t3_g2_g

0xa9af,	// (0x000a5e37) list_medium_line_t3_g2_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t3_g2_t1

0xa9af,	// (0x000a5e37) list_medium_line_t3_g2_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t3_g2_t2

0xa9af,	// (0x000a5e37) list_medium_line_t3_g2_t3_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x000aa642) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x000aa642) list_medium_line_t3_g2_t

0xa9dd,	// (0x000a5e65) list_medium_line_right_icon_g1

0xaf52,	// (0x000a63da) list_medium_line_right_icon_t1

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g1

0xa9af,	// (0x000a5e37) list_medium_line_t2_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t2_t1

0xa9af,	// (0x000a5e37) list_medium_line_t2_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x000aa61e) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x000aa61e) list_medium_line_t2_t

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g1

0xa9af,	// (0x000a5e37) list_medium_line_t3_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t3_t1

0xa9af,	// (0x000a5e37) list_medium_line_t3_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t3_t2

0xa9af,	// (0x000a5e37) list_medium_line_t3_t3_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x000aa642) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x000aa642) list_medium_line_t3_t

0xa6c4,	// (0x000a5b4c) list_medium_line_g3_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_g3_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_g3_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_g3_g2

0xa6c4,	// (0x000a5b4c) list_medium_line_g3_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x000aa63b) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x000aa63b) list_medium_line_g3_g

0xa9af,	// (0x000a5e37) list_medium_line_g3_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_g3_t1

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g3_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g3_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g3_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g3_g2

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g3_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x000aa63b) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x000aa63b) list_medium_line_t2_g3_g

0xa9af,	// (0x000a5e37) list_medium_line_t2_g3_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t2_g3_t1

0xa9af,	// (0x000a5e37) list_medium_line_t2_g3_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x000aa61e) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x000aa61e) list_medium_line_t2_g3_t

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g3_g1_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g3_g1

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g3_g2_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g3_g2

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g3_g3_ParamLimits

0xa6c4,	// (0x000a5b4c) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x000aa63b) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x000aa63b) list_medium_line_t3_g3_g

0xa9af,	// (0x000a5e37) list_medium_line_t3_g3_t1_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t3_g3_t1

0xa9af,	// (0x000a5e37) list_medium_line_t3_g3_t2_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t3_g3_t2

0xa9af,	// (0x000a5e37) list_medium_line_t3_g3_t3_ParamLimits

0xa9af,	// (0x000a5e37) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x000aa642) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x000aa642) list_medium_line_t3_g3_t

0xa9dd,	// (0x000a5e65) list_medium_line_right_iconx2_g1

0xa9dd,	// (0x000a5e65) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x000aa820) list_medium_line_right_iconx2_g

0xaf52,	// (0x000a63da) list_medium_line_right_iconx2_t1

0xa9dd,	// (0x000a5e65) list_medium_line_t2_right_iconx2_g1

0xa9dd,	// (0x000a5e65) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x000aa820) list_medium_line_t2_right_iconx2_g

0xaf52,	// (0x000a63da) list_medium_line_t2_right_iconx2_t1

0xaf52,	// (0x000a63da) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc18,	// (0x000ab0a0) list_medium_line_t2_right_iconx2_t

0xaf52,	// (0x000a63da) list_medium_line_x4_t4_t1

0xaf52,	// (0x000a63da) list_medium_line_x4_t4_t2

0xaf52,	// (0x000a63da) list_medium_line_x4_t4_t3

0xaf52,	// (0x000a63da) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x000aa70b) list_medium_line_x4_t4_t

0x7c8c,	// (0x000a3114) tport_appsw_pane_ParamLimits

0x7c8c,	// (0x000a3114) tport_appsw_pane

0x7ca4,	// (0x000a312c) tport_contact_pane_ParamLimits

0x7ca4,	// (0x000a312c) tport_contact_pane

0x7cbc,	// (0x000a3144) tport_listscroll_pane_ParamLimits

0x7cbc,	// (0x000a3144) tport_listscroll_pane

0x7cd6,	// (0x000a315e) cell_tport_appsw_pane_ParamLimits

0x7cd6,	// (0x000a315e) cell_tport_appsw_pane

0xb57d,	// (0x000a6a05) tport_appsw_pane_g1_ParamLimits

0xb57d,	// (0x000a6a05) tport_appsw_pane_g1

0xd5e6,	// (0x000a8a6e) tport_contact_pane_g1

0x6da5,	// (0x000a222d) tport_contact_pane_t1

0xd5ef,	// (0x000a8a77) tport_contact_pane_t2

0x0001,

0xfc52,	// (0x000ab0da) tport_contact_pane_t

0xd5fd,	// (0x000a8a85) list_tport_pane

0xd606,	// (0x000a8a8e) scroll_pane_cp_030

0x7d1e,	// (0x000a31a6) cell_tport_appsw_pane_g1

0x7d2e,	// (0x000a31b6) cell_tport_appsw_pane_t1

0x7d3c,	// (0x000a31c4) grid_highlight_pane_cp019

0x7d44,	// (0x000a31cc) list_tport_double_graphic_pane_ParamLimits

0x7d44,	// (0x000a31cc) list_tport_double_graphic_pane

0x076c,	// (0x0009bbf4) list_highlight_pane_cp023_ParamLimits

0x076c,	// (0x0009bbf4) list_highlight_pane_cp023

0x7d51,	// (0x000a31d9) list_tport_double_graphic_pane_g1_ParamLimits

0x7d51,	// (0x000a31d9) list_tport_double_graphic_pane_g1

0x7d5e,	// (0x000a31e6) list_tport_double_graphic_pane_t1_ParamLimits

0x7d5e,	// (0x000a31e6) list_tport_double_graphic_pane_t1

0x7d73,	// (0x000a31fb) list_tport_double_graphic_pane_t2_ParamLimits

0x7d73,	// (0x000a31fb) list_tport_double_graphic_pane_t2

0x0001,

0xfc5e,	// (0x000ab0e6) list_tport_double_graphic_pane_t_ParamLimits

0xfc5e,	// (0x000ab0e6) list_tport_double_graphic_pane_t

0x046c,	// (0x0009b8f4) main_cale_note_pane

0x4fac,	// (0x000a0434) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4fac,	// (0x000a0434) cell_vitu2_function_top_wide_pane_cp01

0x713b,	// (0x000a25c3) wait_bar_pane_cp05_ParamLimits

0x076c,	// (0x0009bbf4) listscroll_cmail_pane

0xd617,	// (0x000a8a9f) list_cmail_pane

0x7d85,	// (0x000a320d) list_cmail_body_pane

0x7d9a,	// (0x000a3222) list_single_cmail_header_caption_pane

0x7db0,	// (0x000a3238) list_single_cmail_header_detail_pane_ParamLimits

0x7db0,	// (0x000a3238) list_single_cmail_header_detail_pane

0xd62e,	// (0x000a8ab6) list_single_cmail_header_caption_pane_t1

0x7ddd,	// (0x000a3265) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7ddd,	// (0x000a3265) list_single_cmail_header_detail_pane_g1

0x7df5,	// (0x000a327d) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7df5,	// (0x000a327d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc63,	// (0x000ab0eb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc63,	// (0x000ab0eb) list_single_cmail_header_detail_pane_g

0x7e01,	// (0x000a3289) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7e01,	// (0x000a3289) list_single_cmail_header_detail_pane_t1

0x7e63,	// (0x000a32eb) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7e63,	// (0x000a32eb) list_single_cmail_header_editor_pane_bg

0x6fa7,	// (0x000a242f) list_cmail_body_pane_g1

0xd652,	// (0x000a8ada) list_cmail_body_pane_t1

0xe9be,	// (0x000a9e46) list_single_cmail_header_editor_pane_bg_g1

0xabee,	// (0x000a6076) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe9ce,	// (0x000a9e56) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe9c6,	// (0x000a9e4e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xec55,	// (0x000aa0dd) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe9ee,	// (0x000a9e76) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe9de,	// (0x000a9e66) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe9e6,	// (0x000a9e6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xabce,	// (0x000a6056) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7e7c,	// (0x000a3304) calenote_gesture_pane_ParamLimits

0x7e7c,	// (0x000a3304) calenote_gesture_pane

0x7e9c,	// (0x000a3324) calenote_window_pane_ParamLimits

0x7e9c,	// (0x000a3324) calenote_window_pane

0xd660,	// (0x000a8ae8) popup_note_window_cp01

0x7eb8,	// (0x000a3340) calenote_swipe_1_pane_ParamLimits

0x7eb8,	// (0x000a3340) calenote_swipe_1_pane

0x7832,	// (0x000a2cba) calenote_swipe_2_pane_ParamLimits

0x7832,	// (0x000a2cba) calenote_swipe_2_pane

0xd440,	// (0x000a88c8) calenote_swipe_1_pane_g1_ParamLimits

0xd440,	// (0x000a88c8) calenote_swipe_1_pane_g1

0xd44d,	// (0x000a88d5) calenote_swipe_1_pane_g2_ParamLimits

0xd44d,	// (0x000a88d5) calenote_swipe_1_pane_g2

0x0001,

0xfc00,	// (0x000ab088) calenote_swipe_1_pane_g_ParamLimits

0xfc00,	// (0x000ab088) calenote_swipe_1_pane_g

0xd672,	// (0x000a8afa) calenote_swipe_1_pane_t1_ParamLimits

0xd672,	// (0x000a8afa) calenote_swipe_1_pane_t1

0xd440,	// (0x000a88c8) calenote_swipe_2_pane_g1_ParamLimits

0xd440,	// (0x000a88c8) calenote_swipe_2_pane_g1

0xd691,	// (0x000a8b19) calenote_swipe_2_pane_g2_ParamLimits

0xd691,	// (0x000a8b19) calenote_swipe_2_pane_g2

0x0001,

0xfc6f,	// (0x000ab0f7) calenote_swipe_2_pane_g_ParamLimits

0xfc6f,	// (0x000ab0f7) calenote_swipe_2_pane_g

0xd69d,	// (0x000a8b25) calenote_swipe_2_pane_t1_ParamLimits

0xd69d,	// (0x000a8b25) calenote_swipe_2_pane_t1

0x046c,	// (0x0009b8f4) main_mup_navstr_pane

0x3e3b,	// (0x0009f2c3) main_mup3_pane_t7_ParamLimits

0x3e3b,	// (0x0009f2c3) main_mup3_pane_t7

0xd0cb,	// (0x000a8553) main_mp4_pane_g6_ParamLimits

0xd0cb,	// (0x000a8553) main_mp4_pane_g6

0xd28d,	// (0x000a8715) main_image3_pane_t4_ParamLimits

0xd28d,	// (0x000a8715) main_image3_pane_t4

0x7ecd,	// (0x000a3355) popup_navstr_preview_pane_ParamLimits

0x7ecd,	// (0x000a3355) popup_navstr_preview_pane

0x7ee1,	// (0x000a3369) scroll_navstr_pane_ParamLimits

0x7ee1,	// (0x000a3369) scroll_navstr_pane

0x046c,	// (0x0009b8f4) bg_popup_preview_window_pane_cp04

0xd6c4,	// (0x000a8b4c) popup_navstr_preview_pane_t1

0x7ef5,	// (0x000a337d) scroll_navstr_pane_g1_ParamLimits

0x7ef5,	// (0x000a337d) scroll_navstr_pane_g1

0x7f09,	// (0x000a3391) scroll_navstr_pane_t1_ParamLimits

0x7f09,	// (0x000a3391) scroll_navstr_pane_t1

0xd669,	// (0x000a8af1) bg_button_pane_cp014

0xd669,	// (0x000a8af1) bg_button_pane_cp030

0x770b,	// (0x000a2b93) list_double_fisheye_pane_g4_ParamLimits

0x770b,	// (0x000a2b93) list_double_fisheye_pane_g4

0x7717,	// (0x000a2b9f) list_double_fisheye_pane_g5_ParamLimits

0x7717,	// (0x000a2b9f) list_double_fisheye_pane_g5

0xaf46,	// (0x000a63ce) sp_fs_scroll_pane_cp03

0xd560,	// (0x000a89e8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd56c,	// (0x000a89f4) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1d,	// (0x000ab0a5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7920,	// (0x000a2da8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xd626,	// (0x000a8aae) sp_fs_scroll_pane_cp02

0xa8e5,	// (0x000a5d6d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8e5,	// (0x000a5d6d) popup_sp_fs_calendar_preview_list_single_pane

0x046c,	// (0x0009b8f4) main_cam6_pano_pane

0x9fe3,	// (0x000a546b) main_mup3_pane_ParamLimits

0x046c,	// (0x0009b8f4) main_phacti_pane

0x700e,	// (0x000a2496) bg_button_pane_cp11

0x7028,	// (0x000a24b0) main_mobtv_info_pane_g2_ParamLimits

0x7028,	// (0x000a24b0) main_mobtv_info_pane_g2

0x0001,

0xfb7d,	// (0x000ab005) main_mobtv_info_pane_g_ParamLimits

0xfb7d,	// (0x000ab005) main_mobtv_info_pane_g

0x72ab,	// (0x000a2733) sc_clock_pane_t5_ParamLimits

0x72ab,	// (0x000a2733) sc_clock_pane_t5

0x74cf,	// (0x000a2957) main_radioblah_pane_g1_ParamLimits

0x7515,	// (0x000a299d) main_radioblah_pane_t3_ParamLimits

0x7515,	// (0x000a299d) main_radioblah_pane_t3

0x752d,	// (0x000a29b5) main_radioblah_pane_t4_ParamLimits

0x752d,	// (0x000a29b5) main_radioblah_pane_t4

0x755b,	// (0x000a29e3) main_radioblah_text_pane_ParamLimits

0x755b,	// (0x000a29e3) main_radioblah_text_pane

0x756d,	// (0x000a29f5) main_radioblah_info_pane_g1_ParamLimits

0x7640,	// (0x000a2ac8) main_radioblah_info_pane_t4_ParamLimits

0x7640,	// (0x000a2ac8) main_radioblah_info_pane_t4

0x076c,	// (0x0009bbf4) main_sp_fs_calendar_pane

0x7f20,	// (0x000a33a8) main_phacti_pane_g1

0x7f28,	// (0x000a33b0) phacti_note_pane_ParamLimits

0x7f28,	// (0x000a33b0) phacti_note_pane

0xd6db,	// (0x000a8b63) phacti_term_pane_ParamLimits

0xd6db,	// (0x000a8b63) phacti_term_pane

0xd6f0,	// (0x000a8b78) phacti_note_pane_t1_ParamLimits

0xd6f0,	// (0x000a8b78) phacti_note_pane_t1

0x7f3c,	// (0x000a33c4) phacti_term_pane_g1

0x7f44,	// (0x000a33cc) phacti_term_pane_t1_ParamLimits

0x7f44,	// (0x000a33cc) phacti_term_pane_t1

0xd707,	// (0x000a8b8f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa984,	// (0x000a5e0c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc79,	// (0x000ab101) popup_sp_fs_calendar_preview_list_single_pane_g

0xd70f,	// (0x000a8b97) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd70f,	// (0x000a8b97) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd725,	// (0x000a8bad) aid_popup_sp_fs_bg_corner_pane

0xa9dd,	// (0x000a5e65) popup_sp_fs_calendar_preview_bg_pane_g1

0x046c,	// (0x0009b8f4) popup_sp_fs_calendar_preview_bg_pane

0xd72d,	// (0x000a8bb5) popup_sp_fs_calendar_preview_list_pane

0xb5b3,	// (0x000a6a3b) bg_main_sp_fs_cale_pane_ParamLimits

0xb5b3,	// (0x000a6a3b) bg_main_sp_fs_cale_pane

0x7fd8,	// (0x000a3460) listscroll_cale_mrui_pane_ParamLimits

0x7fd8,	// (0x000a3460) listscroll_cale_mrui_pane

0x7fed,	// (0x000a3475) listscroll_sp_fs_schedule_track_pane

0x7ff6,	// (0x000a347e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7ff6,	// (0x000a347e) main_sp_fs_ctrlbar_pane_cp01

0xd735,	// (0x000a8bbd) main_sp_fs_ribbon_pane

0x8009,	// (0x000a3491) popup_sp_fs_cale_preview_window

0x801b,	// (0x000a34a3) list_single_sp_fs_schedule_track_pane_ParamLimits

0x801b,	// (0x000a34a3) list_single_sp_fs_schedule_track_pane

0x076c,	// (0x0009bbf4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x076c,	// (0x0009bbf4) bg_sp_fs_highlight_list_pane_cp03

0x802e,	// (0x000a34b6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x802e,	// (0x000a34b6) list_single_sp_fs_schedule_track_pane_g1

0x803a,	// (0x000a34c2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x803a,	// (0x000a34c2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7e,	// (0x000ab106) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7e,	// (0x000ab106) list_single_sp_fs_schedule_track_pane_g

0x8046,	// (0x000a34ce) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8046,	// (0x000a34ce) list_single_sp_fs_schedule_track_pane_t1

0x8060,	// (0x000a34e8) sp_fs_schedule_track_pane_ParamLimits

0x8060,	// (0x000a34e8) sp_fs_schedule_track_pane

0xd73d,	// (0x000a8bc5) sp_fs_schedule_track_pane_g1

0xd745,	// (0x000a8bcd) sp_fs_schedule_track_pane_g2

0xd74d,	// (0x000a8bd5) sp_fs_schedule_track_pane_g3

0xd755,	// (0x000a8bdd) sp_fs_schedule_track_pane_g4

0xd75d,	// (0x000a8be5) sp_fs_schedule_track_pane_g5

0x0004,

0xfc83,	// (0x000ab10b) sp_fs_schedule_track_pane_g

0xe9be,	// (0x000a9e46) bg_sp_fs_schedule_viewer_highlight_g1

0xabee,	// (0x000a6076) bg_sp_fs_schedule_viewer_highlight_g2

0xe9c6,	// (0x000a9e4e) bg_sp_fs_schedule_viewer_highlight_g3

0xe9ce,	// (0x000a9e56) bg_sp_fs_schedule_viewer_highlight_g4

0xec55,	// (0x000aa0dd) bg_sp_fs_schedule_viewer_highlight_g5

0xe9de,	// (0x000a9e66) bg_sp_fs_schedule_viewer_highlight_g6

0xe9e6,	// (0x000a9e6e) bg_sp_fs_schedule_viewer_highlight_g7

0xe9ee,	// (0x000a9e76) bg_sp_fs_schedule_viewer_highlight_g8

0xabce,	// (0x000a6056) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8e,	// (0x000ab116) bg_sp_fs_schedule_viewer_highlight_g

0x046c,	// (0x0009b8f4) bg_main_sp_fs_ribbon_pane

0x8071,	// (0x000a34f9) main_sp_fs_ribbon_pane_g1

0xd765,	// (0x000a8bed) main_sp_fs_ribbon_pane_t1

0x807a,	// (0x000a3502) main_sp_fs_ribbon_pane_t2

0xd774,	// (0x000a8bfc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca1,	// (0x000ab129) main_sp_fs_ribbon_pane_t

0xd783,	// (0x000a8c0b) main_sp_fs_ribbon_scheduler_pane

0xd78b,	// (0x000a8c13) bg_main_sp_fs_ribbon_pane_g1

0xd794,	// (0x000a8c1c) bg_main_sp_fs_ribbon_pane_g2

0xd79d,	// (0x000a8c25) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca8,	// (0x000ab130) bg_main_sp_fs_ribbon_pane_g

0xd7a5,	// (0x000a8c2d) main_sp_fs_ribbon_scheduler_pane_g1

0xd7ae,	// (0x000a8c36) main_sp_fs_ribbon_scheduler_pane_g2

0xd7b7,	// (0x000a8c3f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcaf,	// (0x000ab137) main_sp_fs_ribbon_scheduler_pane_g

0xd7c0,	// (0x000a8c48) list_cale_mrui_pane

0x8089,	// (0x000a3511) sp_fs_scroll_pane_cp07_ParamLimits

0x8089,	// (0x000a3511) sp_fs_scroll_pane_cp07

0x80a5,	// (0x000a352d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x80a5,	// (0x000a352d) bg_sp_fs_schedule_viewer_highlight

0xd7cd,	// (0x000a8c55) list_single_sp_fs_schedule_track_pane_cp01

0xd7d5,	// (0x000a8c5d) list_sp_fs_schedule_track_pane

0xd7dd,	// (0x000a8c65) sp_fs_scroll_pane_cp06_ParamLimits

0xd7dd,	// (0x000a8c65) sp_fs_scroll_pane_cp06

0xa9dd,	// (0x000a5e65) bgmain_sp_fs_calendar_pane_g1

0x80b5,	// (0x000a353d) list_single_cale_mrui_pane_ParamLimits

0x80b5,	// (0x000a353d) list_single_cale_mrui_pane

0x80d5,	// (0x000a355d) list_single_cale_mrui_row_pane_ParamLimits

0x80d5,	// (0x000a355d) list_single_cale_mrui_row_pane

0x80e2,	// (0x000a356a) list_single_cale_mrui_row_pane_g1_ParamLimits

0x80e2,	// (0x000a356a) list_single_cale_mrui_row_pane_g1

0x811a,	// (0x000a35a2) list_single_cale_mrui_row_pane_t1_ParamLimits

0x811a,	// (0x000a35a2) list_single_cale_mrui_row_pane_t1

0x812c,	// (0x000a35b4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x812c,	// (0x000a35b4) list_single_cale_mrui_row_pane_t2

0x8194,	// (0x000a361c) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8194,	// (0x000a361c) list_single_cale_mrui_row_pane_t3

0x81c3,	// (0x000a364b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x81c3,	// (0x000a364b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbd,	// (0x000ab145) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbd,	// (0x000ab145) list_single_cale_mrui_row_pane_t

0x81f2,	// (0x000a367a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x81f2,	// (0x000a367a) list_single_cmail_header_editor_pane_bg_cp01

0x8220,	// (0x000a36a8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8220,	// (0x000a36a8) list_single_cmail_header_editor_pane_bg_cp02

0x8240,	// (0x000a36c8) main_radioblah_text_pane_t1_ParamLimits

0x8240,	// (0x000a36c8) main_radioblah_text_pane_t1

0xd7fc,	// (0x000a8c84) cam6_indi_pane_cp01

0xd804,	// (0x000a8c8c) cam6_mode_pane_cp01

0xd80c,	// (0x000a8c94) cam6_pano_pane

0xd815,	// (0x000a8c9d) cam6_zoom_pane_cp01

0xd81d,	// (0x000a8ca5) cam6_pano_image_pane

0xd828,	// (0x000a8cb0) cam6_pano_pane_g1

0x6fa7,	// (0x000a242f) cam6_pano_pane_g2

0xd831,	// (0x000a8cb9) cam6_pano_pane_g3

0xd83a,	// (0x000a8cc2) cam6_pano_pane_g4

0xe68c,	// (0x000a9b14) cam6_pano_pane_g5

0xd843,	// (0x000a8ccb) cam6_pano_pane_g6

0x825a,	// (0x000a36e2) cam6_pano_pane_g7

0xd84d,	// (0x000a8cd5) cam6_pano_pane_g8

0xd856,	// (0x000a8cde) cam6_pano_pane_g9

0x0008,

0xfcc6,	// (0x000ab14e) cam6_pano_pane_g

0x046c,	// (0x0009b8f4) main_browser_tag_pane

0xd6bc,	// (0x000a8b44) grid_navstr_albumart_pane

0xd861,	// (0x000a8ce9) cell_navstr_albumart_pane_ParamLimits

0xd861,	// (0x000a8ce9) cell_navstr_albumart_pane

0xd881,	// (0x000a8d09) cell_navstr_albumart_pane_g1

0xc6e2,	// (0x000a7b6a) cell_navstr_albumart_pane_g2

0xc6f2,	// (0x000a7b7a) cell_navstr_albumart_pane_g3

0xc6ea,	// (0x000a7b72) cell_navstr_albumart_pane_g4

0x0003,

0xfcd9,	// (0x000ab161) cell_navstr_albumart_pane_g

0x8262,	// (0x000a36ea) bt_list_pane_ParamLimits

0x8262,	// (0x000a36ea) bt_list_pane

0x8276,	// (0x000a36fe) bt_list_pane_t1

0x8285,	// (0x000a370d) bt_list_pane_t2

0x0001,

0xfce2,	// (0x000ab16a) bt_list_pane_t

0x046c,	// (0x0009b8f4) main_cale_prevew_pane

0x8294,	// (0x000a371c) popup_cale_preview_window_ParamLimits

0x8294,	// (0x000a371c) popup_cale_preview_window

0x076c,	// (0x0009bbf4) bg_popup_preview_window_pane_cp05_ParamLimits

0x076c,	// (0x0009bbf4) bg_popup_preview_window_pane_cp05

0xd889,	// (0x000a8d11) list_cale_preview_pane_ParamLimits

0xd889,	// (0x000a8d11) list_cale_preview_pane

0x82af,	// (0x000a3737) list_double_cale_preview_pane_ParamLimits

0x82af,	// (0x000a3737) list_double_cale_preview_pane

0x82c1,	// (0x000a3749) list_single_cale_preview_pane_ParamLimits

0x82c1,	// (0x000a3749) list_single_cale_preview_pane

0x82d7,	// (0x000a375f) list_single_cale_preview_pane_g1

0x82df,	// (0x000a3767) list_single_cale_preview_pane_t1_ParamLimits

0x82df,	// (0x000a3767) list_single_cale_preview_pane_t1

0x82f4,	// (0x000a377c) list_double_cale_preview_pane_g1

0x82fc,	// (0x000a3784) list_double_cale_preview_pane_t1_ParamLimits

0x82fc,	// (0x000a3784) list_double_cale_preview_pane_t1

0x8311,	// (0x000a3799) list_double_cale_preview_pane_t2_ParamLimits

0x8311,	// (0x000a3799) list_double_cale_preview_pane_t2

0x0001,

0xfce7,	// (0x000ab16f) list_double_cale_preview_pane_t_ParamLimits

0xfce7,	// (0x000ab16f) list_double_cale_preview_pane_t

0x046c,	// (0x0009b8f4) main_ezdial_pane

0x076c,	// (0x0009bbf4) main_sp_fs_email_pane_ParamLimits

0x7890,	// (0x000a2d18) cmail_ddmenu_btn01_pane_ParamLimits

0x7890,	// (0x000a2d18) cmail_ddmenu_btn01_pane

0x78a3,	// (0x000a2d2b) cmail_ddmenu_btn02_pane_ParamLimits

0x78a3,	// (0x000a2d2b) cmail_ddmenu_btn02_pane

0x78c6,	// (0x000a2d4e) cmail_ddmenu_btn03_pane_ParamLimits

0x78c6,	// (0x000a2d4e) cmail_ddmenu_btn03_pane

0x795f,	// (0x000a2de7) main_sp_fs_ctrlbar_pane_ParamLimits

0x7983,	// (0x000a2e0b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7d85,	// (0x000a320d) list_cmail_body_pane_ParamLimits

0xd63c,	// (0x000a8ac4) bg_button_pane_cp12

0xd645,	// (0x000a8acd) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd645,	// (0x000a8acd) list_single_cmail_header_detail_pane_g3

0x7e3f,	// (0x000a32c7) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7e3f,	// (0x000a32c7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6a,	// (0x000ab0f2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6a,	// (0x000ab0f2) list_single_cmail_header_detail_pane_t

0x7f59,	// (0x000a33e1) phacti_term_pane_t2_ParamLimits

0x7f59,	// (0x000a33e1) phacti_term_pane_t2

0x0001,

0xfc74,	// (0x000ab0fc) phacti_term_pane_t_ParamLimits

0xfc74,	// (0x000ab0fc) phacti_term_pane_t

0xd895,	// (0x000a8d1d) aid_size_list_single_double

0x8329,	// (0x000a37b1) popup_ezdial_listscroll_window

0x8345,	// (0x000a37cd) popup_number_entry_window_cp01

0xa99d,	// (0x000a5e25) bg_popup_call_pane_cp09

0xd8a1,	// (0x000a8d29) ezdial_list_pane

0xd8a9,	// (0x000a8d31) scroll_pane_cp23

0xb5b3,	// (0x000a6a3b) bg_button_pane_cp028_ParamLimits

0xb5b3,	// (0x000a6a3b) bg_button_pane_cp028

0x8353,	// (0x000a37db) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8353,	// (0x000a37db) cmail_ddmenu_btn01_pane_g1

0x835f,	// (0x000a37e7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x835f,	// (0x000a37e7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcec,	// (0x000ab174) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcec,	// (0x000ab174) cmail_ddmenu_btn01_pane_g

0xd8b1,	// (0x000a8d39) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd8b1,	// (0x000a8d39) cmail_ddmenu_btn01_pane_t1

0xb5b3,	// (0x000a6a3b) bg_button_pane_cp029_ParamLimits

0xb5b3,	// (0x000a6a3b) bg_button_pane_cp029

0x8373,	// (0x000a37fb) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8373,	// (0x000a37fb) cmail_ddmenu_btn02_pane_g1

0x838b,	// (0x000a3813) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x838b,	// (0x000a3813) cmail_ddmenu_btn02_pane_t1

0x076c,	// (0x0009bbf4) bg_button_pane_cp031_ParamLimits

0x076c,	// (0x0009bbf4) bg_button_pane_cp031

0x8373,	// (0x000a37fb) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8373,	// (0x000a37fb) cmail_ddmenu_btn03_pane_g1

0x838b,	// (0x000a3813) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x838b,	// (0x000a3813) cmail_ddmenu_btn03_pane_t1

0x4796,	// (0x0009fc1e) cell_dialer2_keypad_pane_t1_ParamLimits

0x47b0,	// (0x0009fc38) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x47b0,	// (0x0009fc38) cell_dialer2_keypad_pane_t1_copy1

0x6bb7,	// (0x000a203f) ncimui_group_button_pane

0x076c,	// (0x0009bbf4) main_sp_fs_calendar_pane_ParamLimits

0x7d9a,	// (0x000a3222) list_single_cmail_header_caption_pane_ParamLimits

0x7f8c,	// (0x000a3414) aid_recal_txt_sm_pane

0x046c,	// (0x0009b8f4) mian_recal_day_pane

0x8009,	// (0x000a3491) popup_sp_fs_cale_preview_window_ParamLimits

0xd8c7,	// (0x000a8d4f) list_recal_day_pane

0x83ca,	// (0x000a3852) list_single_recal_day_pane_ParamLimits

0x83ca,	// (0x000a3852) list_single_recal_day_pane

0xd8ee,	// (0x000a8d76) list_single_recal_day_pane_g1_ParamLimits

0xd8ee,	// (0x000a8d76) list_single_recal_day_pane_g1

0x83dc,	// (0x000a3864) list_single_recal_day_pane_g2_ParamLimits

0x83dc,	// (0x000a3864) list_single_recal_day_pane_g2

0x83e8,	// (0x000a3870) list_single_recal_day_pane_g3_ParamLimits

0x83e8,	// (0x000a3870) list_single_recal_day_pane_g3

0x83f4,	// (0x000a387c) list_single_recal_day_pane_g4_ParamLimits

0x83f4,	// (0x000a387c) list_single_recal_day_pane_g4

0x8402,	// (0x000a388a) list_single_recal_day_pane_g5_ParamLimits

0x8402,	// (0x000a388a) list_single_recal_day_pane_g5

0x8418,	// (0x000a38a0) list_single_recal_day_pane_g6_ParamLimits

0x8418,	// (0x000a38a0) list_single_recal_day_pane_g6

0x0004,

0xfcfb,	// (0x000ab183) list_single_recal_day_pane_g_ParamLimits

0xfcfb,	// (0x000ab183) list_single_recal_day_pane_g

0x842c,	// (0x000a38b4) list_single_recal_day_pane_t1

0x843e,	// (0x000a38c6) list_single_recal_day_pane_t2

0x0001,

0xfd06,	// (0x000ab18e) list_single_recal_day_pane_t

0x8450,	// (0x000a38d8) ncimui_query_button_pane_ParamLimits

0x8450,	// (0x000a38d8) ncimui_query_button_pane

0x8460,	// (0x000a38e8) ncimui_query_button_pane_t1_ParamLimits

0x8460,	// (0x000a38e8) ncimui_query_button_pane_t1

0xd8fa,	// (0x000a8d82) ncimui_query_button_pane_t2_ParamLimits

0xd8fa,	// (0x000a8d82) ncimui_query_button_pane_t2

0x0001,

0xfd0b,	// (0x000ab193) ncimui_query_button_pane_t_ParamLimits

0xfd0b,	// (0x000ab193) ncimui_query_button_pane_t

0x8473,	// (0x000a38fb) query_button_pane_ParamLimits

0x8473,	// (0x000a38fb) query_button_pane

0x046c,	// (0x0009b8f4) bg_button_pane_cp0028

0xd90d,	// (0x000a8d95) query_button_pane_t1

0x31e4,	// (0x0009e66c) main_tport_pane_ParamLimits

0x7c49,	// (0x000a30d1) bg_popup_window_pane_cp01_ParamLimits

0x7c49,	// (0x000a30d1) bg_popup_window_pane_cp01

0x7c64,	// (0x000a30ec) heading_pane_cp08_ParamLimits

0x7c64,	// (0x000a30ec) heading_pane_cp08

0x7c77,	// (0x000a30ff) heading_pane_cp07_ParamLimits

0x7c77,	// (0x000a30ff) heading_pane_cp07

0x7d1e,	// (0x000a31a6) cell_tport_appsw_pane_g2

0x0002,

0xfc57,	// (0x000ab0df) cell_tport_appsw_pane_g

0x272f,	// (0x0009dbb7) input_candi_list_open_g1

0xade7,	// (0x000a626f) list_cale_time_pane_g6_ParamLimits

0xade7,	// (0x000a626f) list_cale_time_pane_g6

0x380f,	// (0x0009ec97) aid_size_touch_calib_1_ParamLimits

0x380f,	// (0x0009ec97) aid_size_touch_calib_1

0x3821,	// (0x0009eca9) aid_size_touch_calib_2_ParamLimits

0x3821,	// (0x0009eca9) aid_size_touch_calib_2

0x3839,	// (0x0009ecc1) aid_size_touch_calib_3_ParamLimits

0x3839,	// (0x0009ecc1) aid_size_touch_calib_3

0x3857,	// (0x0009ecdf) aid_size_touch_calib_4_ParamLimits

0x3857,	// (0x0009ecdf) aid_size_touch_calib_4

0x386f,	// (0x0009ecf7) main_touch_calib_button_group_pane_ParamLimits

0x386f,	// (0x0009ecf7) main_touch_calib_button_group_pane

0x3887,	// (0x0009ed0f) main_touch_calib_pane_g1_ParamLimits

0x3899,	// (0x0009ed21) main_touch_calib_pane_g2_ParamLimits

0x38ab,	// (0x0009ed33) main_touch_calib_pane_g3_ParamLimits

0x38bd,	// (0x0009ed45) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x000aab21) main_touch_calib_pane_g_ParamLimits

0x38cf,	// (0x0009ed57) main_touch_calib_pane_t1_ParamLimits

0x38e9,	// (0x0009ed71) main_touch_calib_pane_t2_ParamLimits

0x3903,	// (0x0009ed8b) main_touch_calib_pane_t3_ParamLimits

0x3917,	// (0x0009ed9f) main_touch_calib_pane_t4_ParamLimits

0x392b,	// (0x0009edb3) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x000aab2a) main_touch_calib_pane_t_ParamLimits

0xe44f,	// (0x000a98d7) list_single_fp_cale_pane_g3_ParamLimits

0xe44f,	// (0x000a98d7) list_single_fp_cale_pane_g3

0x9fe3,	// (0x000a546b) bg_button_pane_cp012_ParamLimits

0x9fe3,	// (0x000a546b) bg_vkb2_func_pane_cp03_ParamLimits

0x5784,	// (0x000a0c0c) cell_vitu2_function_top_pane_g1_ParamLimits

0x9fe3,	// (0x000a546b) bg_vkb2_func_pane_cp04_ParamLimits

0x6b42,	// (0x000a1fca) main_ncimui_button_group_pane_ParamLimits

0x6b42,	// (0x000a1fca) main_ncimui_button_group_pane

0x6ba2,	// (0x000a202a) main_ncimui_pane_t3_ParamLimits

0x6ba2,	// (0x000a202a) main_ncimui_pane_t3

0xd6d2,	// (0x000a8b5a) phacti_button_group_pane

0xd895,	// (0x000a8d1d) aid_size_list_single_double_ParamLimits

0x8329,	// (0x000a37b1) popup_ezdial_listscroll_window_ParamLimits

0x8345,	// (0x000a37cd) popup_number_entry_window_cp01_ParamLimits

0x8486,	// (0x000a390e) phacti_button_pane_ParamLimits

0x8486,	// (0x000a390e) phacti_button_pane

0x046c,	// (0x0009b8f4) bg_button_pane_cp14

0xd91b,	// (0x000a8da3) phacti_button_pane_t1

0x8497,	// (0x000a391f) main_touch_calib_button_pane_ParamLimits

0x8497,	// (0x000a391f) main_touch_calib_button_pane

0xa758,	// (0x000a5be0) bg_button_pane_cp18_ParamLimits

0xa758,	// (0x000a5be0) bg_button_pane_cp18

0xd929,	// (0x000a8db1) main_touch_calib_button_pane_t1_ParamLimits

0xd929,	// (0x000a8db1) main_touch_calib_button_pane_t1

0xd93f,	// (0x000a8dc7) main_touch_calib_button_pane_t2_ParamLimits

0xd93f,	// (0x000a8dc7) main_touch_calib_button_pane_t2

0x0001,

0xfd10,	// (0x000ab198) main_touch_calib_button_pane_t_ParamLimits

0xfd10,	// (0x000ab198) main_touch_calib_button_pane_t

0x046c,	// (0x0009b8f4) cell_ncimui_button_pane

0x046c,	// (0x0009b8f4) bg_button_pane_cp032

0xd95d,	// (0x000a8de5) cell_ncimui_button_pane_t1

0xd26d,	// (0x000a86f5) image3_infobar_pane_ParamLimits

0xd26d,	// (0x000a86f5) image3_infobar_pane

0x72d7,	// (0x000a275f) fs_bigclock_status_pane_ParamLimits

0x72d7,	// (0x000a275f) fs_bigclock_status_pane

0x72e4,	// (0x000a276c) main_fs_bigclock_clock_pane_ParamLimits

0x72e4,	// (0x000a276c) main_fs_bigclock_clock_pane

0x7302,	// (0x000a278a) main_fs_bigclock_indi_pane_ParamLimits

0x7302,	// (0x000a278a) main_fs_bigclock_indi_pane

0x7334,	// (0x000a27bc) main_fs_bigclock_swipe_pane_ParamLimits

0x7334,	// (0x000a27bc) main_fs_bigclock_swipe_pane

0x046c,	// (0x0009b8f4) main_fs_clock_dumped_data

0x7373,	// (0x000a27fb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7373,	// (0x000a27fb) list_single_fs_bigclock_indicator_pane_g1

0x738e,	// (0x000a2816) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x738e,	// (0x000a2816) list_single_fs_bigclock_indicator_pane_g2

0x73a8,	// (0x000a2830) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x73a8,	// (0x000a2830) list_single_fs_bigclock_indicator_pane_g3

0x73c2,	// (0x000a284a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x73c2,	// (0x000a284a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb1,	// (0x000ab039) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb1,	// (0x000ab039) list_single_fs_bigclock_indicator_pane_g

0x73ed,	// (0x000a2875) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x73ed,	// (0x000a2875) list_single_fs_bigclock_indicator_pane_t1

0x7415,	// (0x000a289d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7415,	// (0x000a289d) list_single_fs_bigclock_indicator_pane_t2

0x743d,	// (0x000a28c5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x743d,	// (0x000a28c5) list_single_fs_bigclock_indicator_pane_t3

0x7465,	// (0x000a28ed) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7465,	// (0x000a28ed) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbbc,	// (0x000ab044) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbbc,	// (0x000ab044) list_single_fs_bigclock_indicator_pane_t

0xd96b,	// (0x000a8df3) image3_infobar_fav_pane_ParamLimits

0xd96b,	// (0x000a8df3) image3_infobar_fav_pane

0xd97b,	// (0x000a8e03) image3_infobar_loc_pane_ParamLimits

0xd97b,	// (0x000a8e03) image3_infobar_loc_pane

0xd98f,	// (0x000a8e17) image3_infobar_time_pane_ParamLimits

0xd98f,	// (0x000a8e17) image3_infobar_time_pane

0xa9dd,	// (0x000a5e65) image3_infobar_time_pane_g1

0xd99f,	// (0x000a8e27) image3_infobar_time_pane_t1

0xa9dd,	// (0x000a5e65) image3_infobar_loc_pane_g1

0xd9ad,	// (0x000a8e35) image3_infobar_loc_pane_g2

0x0001,

0xfd15,	// (0x000ab19d) image3_infobar_loc_pane_g

0xd9b5,	// (0x000a8e3d) image3_infobar_loc_pane_t1

0xa9dd,	// (0x000a5e65) image3_infobar_fav_pane_g1

0xd9c3,	// (0x000a8e4b) image3_infobar_fav_pane_g2

0x0001,

0xfd1a,	// (0x000ab1a2) image3_infobar_fav_pane_g

0xd9cb,	// (0x000a8e53) fs_bigclock_status_battery_pane

0xd9d4,	// (0x000a8e5c) fs_bigclock_status_signal_pane

0xd9dd,	// (0x000a8e65) fs_bigclock_status_title_pane

0xd9e6,	// (0x000a8e6e) fs_bigclock_status_signal_pane_g1

0xd9ef,	// (0x000a8e77) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1f,	// (0x000ab1a7) fs_bigclock_status_signal_pane_g

0xd9f7,	// (0x000a8e7f) fs_bigclock_status_battery_pane_g1

0xda00,	// (0x000a8e88) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd24,	// (0x000ab1ac) fs_bigclock_status_battery_pane_g

0xda08,	// (0x000a8e90) fs_bigclock_status_title_pane_t1

0x84ac,	// (0x000a3934) main_fs_bigclock_clock_pane_g1

0x84ac,	// (0x000a3934) main_fs_bigclock_clock_pane_g2

0x84bd,	// (0x000a3945) main_fs_bigclock_clock_pane_g3

0x84bd,	// (0x000a3945) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd29,	// (0x000ab1b1) main_fs_bigclock_clock_pane_g

0x84d0,	// (0x000a3958) main_fs_bigclock_clock_pane_t1

0x84e6,	// (0x000a396e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd32,	// (0x000ab1ba) main_fs_bigclock_clock_pane_t

0xda16,	// (0x000a8e9e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xda16,	// (0x000a8e9e) list_single_fs_bigclock_indicator_pane

0xda27,	// (0x000a8eaf) list_single_fs_bigclock_pane_ParamLimits

0xda27,	// (0x000a8eaf) list_single_fs_bigclock_pane

0xda4d,	// (0x000a8ed5) main_fs_bigclock_indicator_pane_t1

0xda5c,	// (0x000a8ee4) list_single_fs_bigclock_pane_g1

0xda64,	// (0x000a8eec) list_single_fs_bigclock_pane_t1

0xa9dd,	// (0x000a5e65) main_fs_bigclock_swipe_pane_g1

0xdaa7,	// (0x000a8f2f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd43,	// (0x000ab1cb) main_fs_bigclock_swipe_pane_g

0xdaaf,	// (0x000a8f37) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xdaaf,	// (0x000a8f37) main_fs_bigclock_swipe_pane_t1

0x2282,	// (0x0009d70a) call_type_pane_ParamLimits

0x046c,	// (0x0009b8f4) main_btmg_pane

0x810e,	// (0x000a3596) list_single_cale_mrui_row_pane_g2_ParamLimits

0x810e,	// (0x000a3596) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb6,	// (0x000ab13e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb6,	// (0x000ab13e) list_single_cale_mrui_row_pane_g

0x83b9,	// (0x000a3841) list_recal_vselct_arw_lo_pane

0xd8e6,	// (0x000a8d6e) list_recal_vselct_arw_up_pane

0x83c1,	// (0x000a3849) list_recal_vselct_pane

0x8540,	// (0x000a39c8) btmg_button_pane

0x854a,	// (0x000a39d2) main_btmg_pane_g1

0x046c,	// (0x0009b8f4) bg_button_pane_cp044

0xdacc,	// (0x000a8f54) btmg_button_pane_t1

0xc832,	// (0x000a7cba) aid_listscroll_gen

0x076c,	// (0x0009bbf4) main_cntbar_detail_pane

0xd60f,	// (0x000a8a97) list_cmail_folder_pane

0xaf46,	// (0x000a63ce) sp_fs_scroll_pane_cp03_ParamLimits

0x8554,	// (0x000a39dc) list_single_fs_dyc_pane_cp01_ParamLimits

0x8554,	// (0x000a39dc) list_single_fs_dyc_pane_cp01

0xdada,	// (0x000a8f62) aid_size_cmail_indent

0x8569,	// (0x000a39f1) list_single_dyc_row_pane_cp01

0x859e,	// (0x000a3a26) cntbar_detail_list_pane_ParamLimits

0x859e,	// (0x000a3a26) cntbar_detail_list_pane

0x85ea,	// (0x000a3a72) main_cntbar_detail_cont_pane_ParamLimits

0x85ea,	// (0x000a3a72) main_cntbar_detail_cont_pane

0xaf46,	// (0x000a63ce) scroll_pane_cp032_ParamLimits

0xaf46,	// (0x000a63ce) scroll_pane_cp032

0x85fe,	// (0x000a3a86) cntbar_detail_list_event_pane_ParamLimits

0x85fe,	// (0x000a3a86) cntbar_detail_list_event_pane

0x85ae,	// (0x000a3a36) cntbar_detail_list_shct_pane

0xac3c,	// (0x000a60c4) aid_list_gen

0xdae3,	// (0x000a8f6b) aid_scroll

0xdaec,	// (0x000a8f74) aid_size_touch_scroll_bar

0x76d6,	// (0x000a2b5e) aid_list_double

0xdaf5,	// (0x000a8f7d) aid_list_single

0xdaf5,	// (0x000a8f7d) aid_list_single_lg

0x860e,	// (0x000a3a96) aid_list_z_g_a_sm

0x8616,	// (0x000a3a9e) aid_list_z_g_d

0x861e,	// (0x000a3aa6) aid_txt_z_prm

0x862c,	// (0x000a3ab4) aid_txt_z_prm_cp01

0x863a,	// (0x000a3ac2) aid_txt_z_sec

0x8648,	// (0x000a3ad0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8648,	// (0x000a3ad0) main_cntbar_detail_cont_pane_g1

0x865c,	// (0x000a3ae4) main_cntbar_detail_cont_pane_g2_ParamLimits

0x865c,	// (0x000a3ae4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd48,	// (0x000ab1d0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd48,	// (0x000ab1d0) main_cntbar_detail_cont_pane_g

0xdafe,	// (0x000a8f86) main_cntbar_detail_cont_pane_t1

0xdb0c,	// (0x000a8f94) main_cntbar_detail_cont_pane_t2

0xdb1a,	// (0x000a8fa2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4d,	// (0x000ab1d5) main_cntbar_detail_cont_pane_t

0x866c,	// (0x000a3af4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x866c,	// (0x000a3af4) cell_cntbar_detail_list_shct_pane

0xdb28,	// (0x000a8fb0) cntbar_detail_list_shct_pane_g1

0xdb31,	// (0x000a8fb9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd54,	// (0x000ab1dc) cntbar_detail_list_shct_pane_g

0x8680,	// (0x000a3b08) cntbar_detail_list_event_pane_g1_ParamLimits

0x8680,	// (0x000a3b08) cntbar_detail_list_event_pane_g1

0x868c,	// (0x000a3b14) cntbar_detail_list_event_pane_g2_ParamLimits

0x868c,	// (0x000a3b14) cntbar_detail_list_event_pane_g2

0x0005,

0xfd59,	// (0x000ab1e1) cntbar_detail_list_event_pane_g_ParamLimits

0xfd59,	// (0x000ab1e1) cntbar_detail_list_event_pane_g

0x86f8,	// (0x000a3b80) cntbar_detail_list_event_pane_t1_ParamLimits

0x86f8,	// (0x000a3b80) cntbar_detail_list_event_pane_t1

0x870d,	// (0x000a3b95) cntbar_detail_list_event_pane_t2_ParamLimits

0x870d,	// (0x000a3b95) cntbar_detail_list_event_pane_t2

0x0002,

0xfd66,	// (0x000ab1ee) cntbar_detail_list_event_pane_t_ParamLimits

0xfd66,	// (0x000ab1ee) cntbar_detail_list_event_pane_t

0xa9dd,	// (0x000a5e65) cell_cntbar_detail_list_shct_pane_g1

0xb46c,	// (0x000a68f4) navi_pane_mv_g3

0x076c,	// (0x0009bbf4) main_cntbar_detail_pane_ParamLimits

0x046c,	// (0x0009b8f4) main_notif_wgt_pane

0xd059,	// (0x000a84e1) aid_tch_main_mp4_pane_g4

0xd265,	// (0x000a86ed) popup_slider_window_cp02

0x83af,	// (0x000a3837) list_recal_day_event_pane

0x8572,	// (0x000a39fa) cntbar_detail_btn_pane_ParamLimits

0x8572,	// (0x000a39fa) cntbar_detail_btn_pane

0x8588,	// (0x000a3a10) cntbar_detail_btn_pane_cp01_ParamLimits

0x8588,	// (0x000a3a10) cntbar_detail_btn_pane_cp01

0x85ae,	// (0x000a3a36) cntbar_detail_list_shct_pane_ParamLimits

0x85be,	// (0x000a3a46) cntbar_detail_pane_g1_ParamLimits

0x85be,	// (0x000a3a46) cntbar_detail_pane_g1

0x85ce,	// (0x000a3a56) cntbar_detail_pane_t1_ParamLimits

0x85ce,	// (0x000a3a56) cntbar_detail_pane_t1

0x8698,	// (0x000a3b20) cntbar_detail_list_event_pane_g3_ParamLimits

0x8698,	// (0x000a3b20) cntbar_detail_list_event_pane_g3

0x86b0,	// (0x000a3b38) cntbar_detail_list_event_pane_g4_ParamLimits

0x86b0,	// (0x000a3b38) cntbar_detail_list_event_pane_g4

0x86c8,	// (0x000a3b50) cntbar_detail_list_event_pane_g5_ParamLimits

0x86c8,	// (0x000a3b50) cntbar_detail_list_event_pane_g5

0x86e0,	// (0x000a3b68) cntbar_detail_list_event_pane_g6_ParamLimits

0x86e0,	// (0x000a3b68) cntbar_detail_list_event_pane_g6

0x8722,	// (0x000a3baa) cntbar_detail_list_event_pane_t3_ParamLimits

0x8722,	// (0x000a3baa) cntbar_detail_list_event_pane_t3

0x8734,	// (0x000a3bbc) popup_notif_wgt_window_ParamLimits

0x8734,	// (0x000a3bbc) popup_notif_wgt_window

0x874d,	// (0x000a3bd5) popup_submenu_window_cp01_ParamLimits

0x874d,	// (0x000a3bd5) popup_submenu_window_cp01

0xa99d,	// (0x000a5e25) bg_popup_window_pane_cp10

0xdb3a,	// (0x000a8fc2) listscroll_notif_wgt_pane

0xdb4c,	// (0x000a8fd4) list_notif_wgt_window

0xdb55,	// (0x000a8fdd) scroll_pane_cp033

0x8763,	// (0x000a3beb) list_notif_wgt_row_pane_ParamLimits

0x8763,	// (0x000a3beb) list_notif_wgt_row_pane

0xdb5e,	// (0x000a8fe6) aid_size_list_notif_wgt_del

0xdb6b,	// (0x000a8ff3) list_notif_wgt_row_pane_g1

0xdb77,	// (0x000a8fff) list_notif_wgt_row_pane_g2

0xdb86,	// (0x000a900e) list_notif_wgt_row_pane_g3

0x0002,

0xfd6d,	// (0x000ab1f5) list_notif_wgt_row_pane_g

0xdb93,	// (0x000a901b) list_notif_wgt_row_pane_t1

0xdba9,	// (0x000a9031) list_notif_wgt_row_pane_t2

0xdbbb,	// (0x000a9043) list_notif_wgt_row_pane_t3

0x0002,

0xfd74,	// (0x000ab1fc) list_notif_wgt_row_pane_t

0xec8f,	// (0x000aa117) list_recal_day_event_pane_g1

0xdbcd,	// (0x000a9055) list_recal_day_event_pane_t1

0x046c,	// (0x0009b8f4) bg_button_pane_cp045

0xdbdc,	// (0x000a9064) cntbar_detail_btn_pane_t1

0xb5b3,	// (0x000a6a3b) main_callh_pane_ParamLimits

0xb5b3,	// (0x000a6a3b) main_callh_pane

0x046c,	// (0x0009b8f4) main_coverflow0_pane

0x046c,	// (0x0009b8f4) main_wgtman_pane

0x734c,	// (0x000a27d4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x734c,	// (0x000a27d4) main_fs_bigclock_unlock_btn_pane

0x7d16,	// (0x000a319e) bg_button_pane_cp16

0x7d26,	// (0x000a31ae) cell_tport_appsw_pane_g3

0x8773,	// (0x000a3bfb) cf0_flow_pane_ParamLimits

0x8773,	// (0x000a3bfb) cf0_flow_pane

0xdbea,	// (0x000a9072) listscroll_cf0_pane

0xdbf5,	// (0x000a907d) main_cf0_pane_g1

0x8788,	// (0x000a3c10) main_cf0_pane_t1_ParamLimits

0x8788,	// (0x000a3c10) main_cf0_pane_t1

0x879f,	// (0x000a3c27) main_cf0_pane_t2_ParamLimits

0x879f,	// (0x000a3c27) main_cf0_pane_t2

0x0001,

0xfd80,	// (0x000ab208) main_cf0_pane_t_ParamLimits

0xfd80,	// (0x000ab208) main_cf0_pane_t

0xdc07,	// (0x000a908f) scroll_pane_cp11

0x87b6,	// (0x000a3c3e) cf0_flow_pane_g1

0x87be,	// (0x000a3c46) cf0_flow_pane_g2

0x0001,

0xfd85,	// (0x000ab20d) cf0_flow_pane_g

0x87c6,	// (0x000a3c4e) cf0_flow_pane_t1

0x046c,	// (0x0009b8f4) main_call6_pane

0x046c,	// (0x0009b8f4) main_calllock_pane

0x87d4,	// (0x000a3c5c) call6_btn_grp_pane_ParamLimits

0x87d4,	// (0x000a3c5c) call6_btn_grp_pane

0x87ee,	// (0x000a3c76) call6_pane_g1_ParamLimits

0x87ee,	// (0x000a3c76) call6_pane_g1

0x8804,	// (0x000a3c8c) popup_call6_1st_window_ParamLimits

0x8804,	// (0x000a3c8c) popup_call6_1st_window

0x8815,	// (0x000a3c9d) popup_call6_2nd_window_ParamLimits

0x8815,	// (0x000a3c9d) popup_call6_2nd_window

0x8826,	// (0x000a3cae) cell_call6_btn_pane_ParamLimits

0x8826,	// (0x000a3cae) cell_call6_btn_pane

0xa99d,	// (0x000a5e25) bg_popup_call2_in_pane_cp03

0xdc12,	// (0x000a909a) popup_call6_1st_window_g1

0xdc1a,	// (0x000a90a2) popup_call6_1st_window_g2

0xdc22,	// (0x000a90aa) popup_call6_1st_window_g3

0x0002,

0xfd8a,	// (0x000ab212) popup_call6_1st_window_g

0xdc2a,	// (0x000a90b2) popup_call6_1st_window_t1

0xdc39,	// (0x000a90c1) popup_call6_1st_window_t2

0xdc47,	// (0x000a90cf) popup_call6_1st_window_t3

0x0002,

0xfd91,	// (0x000ab219) popup_call6_1st_window_t

0xa99d,	// (0x000a5e25) bg_popup_call2_in_pane_cp04

0xdc55,	// (0x000a90dd) popup_call6_2nd_window_g1

0xdc5d,	// (0x000a90e5) popup_call6_2nd_window_g2

0xdc65,	// (0x000a90ed) popup_call6_2nd_window_g3

0x0002,

0xfd98,	// (0x000ab220) popup_call6_2nd_window_g

0xdc6d,	// (0x000a90f5) popup_call6_2nd_window_t1

0x9ff1,	// (0x000a5479) bg_button_pane_cp15

0xeeb4,	// (0x000aa33c) cell_call6_btn_pane_g1

0xeebd,	// (0x000aa345) cell_call6_btn_pane_t1

0x8839,	// (0x000a3cc1) listscroll_wgtman_pane_ParamLimits

0x8839,	// (0x000a3cc1) listscroll_wgtman_pane

0x885a,	// (0x000a3ce2) wgtman_btn_pane_ParamLimits

0x885a,	// (0x000a3ce2) wgtman_btn_pane

0xb273,	// (0x000a66fb) aid_scroll_copy1

0xdc7c,	// (0x000a9104) list_wgtman_pane

0x889d,	// (0x000a3d25) wgtman_btn_pane_g1_ParamLimits

0x889d,	// (0x000a3d25) wgtman_btn_pane_g1

0x88c9,	// (0x000a3d51) wgtman_btn_pane_t1_ParamLimits

0x88c9,	// (0x000a3d51) wgtman_btn_pane_t1

0xdc86,	// (0x000a910e) wgtman_btn_pane_t2_ParamLimits

0xdc86,	// (0x000a910e) wgtman_btn_pane_t2

0x0001,

0xfd9f,	// (0x000ab227) wgtman_btn_pane_t_ParamLimits

0xfd9f,	// (0x000ab227) wgtman_btn_pane_t

0x8906,	// (0x000a3d8e) listrow_wgtman_pane_ParamLimits

0x8906,	// (0x000a3d8e) listrow_wgtman_pane

0x8918,	// (0x000a3da0) listrow_wgtman_pane_g1

0x8925,	// (0x000a3dad) listrow_wgtman_pane_g2

0x0001,

0xfda4,	// (0x000ab22c) listrow_wgtman_pane_g

0x8943,	// (0x000a3dcb) listrow_wgtman_pane_t1

0x895b,	// (0x000a3de3) listrow_wgtman_pane_t2

0x0001,

0xfda9,	// (0x000ab231) listrow_wgtman_pane_t

0x8981,	// (0x000a3e09) wait_bar_pane_cp09

0xdc9d,	// (0x000a9125) main_calllock_btn_pane

0xdca7,	// (0x000a912f) main_calllock_pane_g1

0x046c,	// (0x0009b8f4) bg_button_pane_cp17

0xdcaf,	// (0x000a9137) main_calllock_btn_pane_g1

0xdcb8,	// (0x000a9140) main_calllock_btn_pane_t1

0x046c,	// (0x0009b8f4) main_dialer3_pane

0x046c,	// (0x0009b8f4) main_fmrd2_pane

0xa9dd,	// (0x000a5e65) main_fs_bigclock_unlock_btn_pane_g1

0x899b,	// (0x000a3e23) main_fs_bigclock_unlock_btn_pane_t1

0x89a9,	// (0x000a3e31) area_fmrd2_info_pane_ParamLimits

0x89a9,	// (0x000a3e31) area_fmrd2_info_pane

0x89ba,	// (0x000a3e42) area_fmrd2_visual_pane_ParamLimits

0x89ba,	// (0x000a3e42) area_fmrd2_visual_pane

0x89c8,	// (0x000a3e50) fmrd2_indi_pane_ParamLimits

0x89c8,	// (0x000a3e50) fmrd2_indi_pane

0x89d5,	// (0x000a3e5d) area_fmrd2_visual_pane_g1

0x89dd,	// (0x000a3e65) area_fmrd2_visual_pane_t1

0x89ed,	// (0x000a3e75) area_fmrd2_visual_pane_t2

0x89fd,	// (0x000a3e85) area_fmrd2_visual_pane_t3

0x0002,

0xfdb3,	// (0x000ab23b) area_fmrd2_visual_pane_t

0x8a0d,	// (0x000a3e95) area_fmrd2_info_pane_g1

0x8a15,	// (0x000a3e9d) area_fmrd2_info_pane_t1

0x8a25,	// (0x000a3ead) area_fmrd2_info_pane_t2

0x8a35,	// (0x000a3ebd) area_fmrd2_info_pane_t3

0x8a45,	// (0x000a3ecd) area_fmrd2_info_pane_t4

0x0003,

0xfdba,	// (0x000ab242) area_fmrd2_info_pane_t

0x8a53,	// (0x000a3edb) fmrd2_indi_pane_t1

0x8a63,	// (0x000a3eeb) fmrd2_indi_pane_t2

0x8a73,	// (0x000a3efb) fmrd2_indi_pane_t3

0x0002,

0xfdc3,	// (0x000ab24b) fmrd2_indi_pane_t

0x73d1,	// (0x000a2859) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x73d1,	// (0x000a2859) list_single_fs_bigclock_indicator_pane_g5

0x7482,	// (0x000a290a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7482,	// (0x000a290a) list_single_fs_bigclock_indicator_pane_t5

0x7f6e,	// (0x000a33f6) aid_cell_bcale_month_pane_ParamLimits

0x7f6e,	// (0x000a33f6) aid_cell_bcale_month_pane

0x7f95,	// (0x000a341d) bcale_month_pane_ParamLimits

0x7f95,	// (0x000a341d) bcale_month_pane

0x7fb9,	// (0x000a3441) bcale_preview_pane_ParamLimits

0x7fb9,	// (0x000a3441) bcale_preview_pane

0xda64,	// (0x000a8eec) list_single_fs_bigclock_pane_t1_ParamLimits

0xda83,	// (0x000a8f0b) list_single_fs_bigclock_pane_t2_ParamLimits

0xda83,	// (0x000a8f0b) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3e,	// (0x000ab1c6) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3e,	// (0x000ab1c6) list_single_fs_bigclock_pane_t

0x8993,	// (0x000a3e1b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdae,	// (0x000ab236) main_fs_bigclock_unlock_btn_pane_g

0x8a83,	// (0x000a3f0b) aid_dia3_key_size_ParamLimits

0x8a83,	// (0x000a3f0b) aid_dia3_key_size

0x8a92,	// (0x000a3f1a) aid_dia3_listrow_size_ParamLimits

0x8a92,	// (0x000a3f1a) aid_dia3_listrow_size

0x8aa7,	// (0x000a3f2f) dia3_keypad_fun_pane_ParamLimits

0x8aa7,	// (0x000a3f2f) dia3_keypad_fun_pane

0x8ac3,	// (0x000a3f4b) dia3_keypad_num_pane_ParamLimits

0x8ac3,	// (0x000a3f4b) dia3_keypad_num_pane

0x8ade,	// (0x000a3f66) dia3_listscroll_pane_ParamLimits

0x8ade,	// (0x000a3f66) dia3_listscroll_pane

0x8af1,	// (0x000a3f79) dia3_numentry_pane_ParamLimits

0x8af1,	// (0x000a3f79) dia3_numentry_pane

0xdcc7,	// (0x000a914f) dia3_list_pane

0xdcd2,	// (0x000a915a) scroll_pane_cp12

0x046c,	// (0x0009b8f4) bg_dia3_numentry_pane

0x8b09,	// (0x000a3f91) dia3_numentry_pane_t1

0x8b18,	// (0x000a3fa0) cell_dia3_key_num_pane

0x8b20,	// (0x000a3fa8) cell_dia3_key0_fun_pane_ParamLimits

0x8b20,	// (0x000a3fa8) cell_dia3_key0_fun_pane

0x8b34,	// (0x000a3fbc) cell_dia3_key1_fun_pane_ParamLimits

0x8b34,	// (0x000a3fbc) cell_dia3_key1_fun_pane

0x8b4c,	// (0x000a3fd4) dia3_listrow_pane

0x6dc0,	// (0x000a2248) bg_dia3_numentry_pane_g1

0x046c,	// (0x0009b8f4) bg_button_pane_cp21

0xdcdd,	// (0x000a9165) cell_dia3_key_num_pane_t1

0xdceb,	// (0x000a9173) cell_dia3_key_num_pane_t2

0xdcfa,	// (0x000a9182) cell_dia3_key_num_pane_t3

0xdd09,	// (0x000a9191) cell_dia3_key_num_pane_t4

0x0003,

0xfdca,	// (0x000ab252) cell_dia3_key_num_pane_t

0x046c,	// (0x0009b8f4) bg_button_pane_cp19

0x8b5e,	// (0x000a3fe6) cell_dia3_key0_fun_pane_g1

0x046c,	// (0x0009b8f4) bg_button_pane_cp20

0x8b66,	// (0x000a3fee) cell_dia3_key1_fun_pane_g1

0x8b6e,	// (0x000a3ff6) area_left_week_number_pane

0x8b7a,	// (0x000a4002) area_top_day_name_pane

0x8b8d,	// (0x000a4015) frame_month_view_pane

0xdd18,	// (0x000a91a0) grid_month_view_pane

0x8ba0,	// (0x000a4028) cell_top_day_name_pane_ParamLimits

0x8ba0,	// (0x000a4028) cell_top_day_name_pane

0x8bcd,	// (0x000a4055) cell_area_left_week_number_pane_ParamLimits

0x8bcd,	// (0x000a4055) cell_area_left_week_number_pane

0x8be1,	// (0x000a4069) cell_month_view_pane_ParamLimits

0x8be1,	// (0x000a4069) cell_month_view_pane

0xdd26,	// (0x000a91ae) frm_month_g1

0x8c0e,	// (0x000a4096) frm_month_g2

0x8c21,	// (0x000a40a9) frm_month_g3

0x8c34,	// (0x000a40bc) frm_month_g4

0x8c47,	// (0x000a40cf) frm_month_g5

0x8c5a,	// (0x000a40e2) frm_month_g6

0x8c6d,	// (0x000a40f5) frm_month_g7

0xdd33,	// (0x000a91bb) frm_month_g8

0x8c80,	// (0x000a4108) frm_month_g9

0x8c90,	// (0x000a4118) frm_month_g10

0x8ca0,	// (0x000a4128) frm_month_g11

0x8cb0,	// (0x000a4138) frm_month_g12

0x8cc2,	// (0x000a414a) frm_month_g13

0x8cd4,	// (0x000a415c) frm_month_g14

0x8ce8,	// (0x000a4170) frm_month_g15

0x8cfc,	// (0x000a4184) frm_month_g16

0x000f,

0xfdd3,	// (0x000ab25b) frm_month_g

0xdd40,	// (0x000a91c8) cell_top_day_name_pane_t1

0x8d10,	// (0x000a4198) cell_area_left_week_number_pane_g1

0x8d1c,	// (0x000a41a4) cell_area_left_week_number_pane_t1

0xa6c4,	// (0x000a5b4c) cell_month_view_pane_g1

0x8d2f,	// (0x000a41b7) cell_month_view_pane_t1

0x046c,	// (0x0009b8f4) main_fps_pane

0xd528,	// (0x000a89b0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd528,	// (0x000a89b0) cmail_ddmenu_btn02_pane_cp1

0xd544,	// (0x000a89cc) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd544,	// (0x000a89cc) cmail_ddmenu_btn02_pane_cp2

0x837f,	// (0x000a3807) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x837f,	// (0x000a3807) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf1,	// (0x000ab179) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf1,	// (0x000ab179) cmail_ddmenu_btn02_pane_g

0x839d,	// (0x000a3825) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x839d,	// (0x000a3825) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf6,	// (0x000ab17e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf6,	// (0x000ab17e) cmail_ddmenu_btn02_pane_t

0x8d42,	// (0x000a41ca) fps_text_pane_ParamLimits

0x8d42,	// (0x000a41ca) fps_text_pane

0x8d59,	// (0x000a41e1) main_fps_pane_g1_ParamLimits

0x8d59,	// (0x000a41e1) main_fps_pane_g1

0x8d73,	// (0x000a41fb) wait_bar_pane_cp010_ParamLimits

0x8d73,	// (0x000a41fb) wait_bar_pane_cp010

0x8d84,	// (0x000a420c) fps_text_pane_t1_ParamLimits

0x8d84,	// (0x000a420c) fps_text_pane_t1

0xd305,	// (0x000a878d) cam4_image_uncrop_pane_g1

0xd30e,	// (0x000a8796) cam4_image_uncrop_pane_g2

0x4ccb,	// (0x000a0153) cam4_image_uncrop_pane_g3

0x4cd4,	// (0x000a015c) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x000aacbd) cam4_image_uncrop_pane_g

0x8b4c,	// (0x000a3fd4) dia3_listrow_pane_ParamLimits

0x046c,	// (0x0009b8f4) main_phob2_pane

0x7ce7,	// (0x000a316f) cell_tport_appsw_pane_cp02_ParamLimits

0x7ce7,	// (0x000a316f) cell_tport_appsw_pane_cp02

0x7cfb,	// (0x000a3183) cell_tport_appsw_pane_cp03_ParamLimits

0x7cfb,	// (0x000a3183) cell_tport_appsw_pane_cp03

0x046c,	// (0x0009b8f4) phob2_contact_card_pane

0x046c,	// (0x0009b8f4) phob2_listscroll_pane

0xdd53,	// (0x000a91db) phob2_list_pane

0xdd5b,	// (0x000a91e3) scroll_pane_cp034

0x8d9c,	// (0x000a4224) phob2_cc_data_pane_ParamLimits

0x8d9c,	// (0x000a4224) phob2_cc_data_pane

0x8dbb,	// (0x000a4243) phob2_cc_listscroll_pane_ParamLimits

0x8dbb,	// (0x000a4243) phob2_cc_listscroll_pane

0x8906,	// (0x000a3d8e) list_double_large_graphic_phob2_pane_ParamLimits

0x8906,	// (0x000a3d8e) list_double_large_graphic_phob2_pane

0x8dd9,	// (0x000a4261) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8dd9,	// (0x000a4261) list_double_large_graphic_phob2_pane_g1

0x8de6,	// (0x000a426e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8de6,	// (0x000a426e) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf4,	// (0x000ab27c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf4,	// (0x000ab27c) list_double_large_graphic_phob2_pane_g

0x8e0c,	// (0x000a4294) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8e0c,	// (0x000a4294) list_double_large_graphic_phob2_pane_t1

0x8e21,	// (0x000a42a9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8e21,	// (0x000a42a9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfd,	// (0x000ab285) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfd,	// (0x000ab285) list_double_large_graphic_phob2_pane_t

0x046c,	// (0x0009b8f4) list_highlight_pane_cp024

0xdd63,	// (0x000a91eb) phob2_cc_button_pane

0x8e36,	// (0x000a42be) phob2_cc_data_pane_g1_ParamLimits

0x8e36,	// (0x000a42be) phob2_cc_data_pane_g1

0x8e4d,	// (0x000a42d5) phob2_cc_data_pane_g2_ParamLimits

0x8e4d,	// (0x000a42d5) phob2_cc_data_pane_g2

0x0001,

0xfe02,	// (0x000ab28a) phob2_cc_data_pane_g_ParamLimits

0xfe02,	// (0x000ab28a) phob2_cc_data_pane_g

0x8e5f,	// (0x000a42e7) phob2_cc_data_pane_t1_ParamLimits

0x8e5f,	// (0x000a42e7) phob2_cc_data_pane_t1

0x8e77,	// (0x000a42ff) phob2_cc_data_pane_t2_ParamLimits

0x8e77,	// (0x000a42ff) phob2_cc_data_pane_t2

0x8e8f,	// (0x000a4317) phob2_cc_data_pane_t3_ParamLimits

0x8e8f,	// (0x000a4317) phob2_cc_data_pane_t3

0x0002,

0xfe07,	// (0x000ab28f) phob2_cc_data_pane_t_ParamLimits

0xfe07,	// (0x000ab28f) phob2_cc_data_pane_t

0xdd6b,	// (0x000a91f3) phob2_cc_list_pane_ParamLimits

0xdd6b,	// (0x000a91f3) phob2_cc_list_pane

0xef5f,	// (0x000aa3e7) scroll_pane_cp035_ParamLimits

0xef5f,	// (0x000aa3e7) scroll_pane_cp035

0x076c,	// (0x0009bbf4) bg_button_pane_cp033

0xdd77,	// (0x000a91ff) phob2_cc_button_pane_g1

0xdd83,	// (0x000a920b) phob2_cc_button_pane_t1

0xdd98,	// (0x000a9220) phob2_cc_button_pane_t2

0x0001,

0xfe0e,	// (0x000ab296) phob2_cc_button_pane_t

0x8ea7,	// (0x000a432f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8ea7,	// (0x000a432f) list_double_large_graphic_phob2_cc_pane

0x8ed7,	// (0x000a435f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8ed7,	// (0x000a435f) list_double_large_graphic_phob2_cc_pane_g1

0x8ee3,	// (0x000a436b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8ee3,	// (0x000a436b) list_double_large_graphic_phob2_cc_pane_g2

0x8eef,	// (0x000a4377) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8eef,	// (0x000a4377) list_double_large_graphic_phob2_cc_pane_g3

0x8efb,	// (0x000a4383) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8efb,	// (0x000a4383) list_double_large_graphic_phob2_cc_pane_g4

0x8f07,	// (0x000a438f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8f07,	// (0x000a438f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe13,	// (0x000ab29b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe13,	// (0x000ab29b) list_double_large_graphic_phob2_cc_pane_g

0x8f13,	// (0x000a439b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8f13,	// (0x000a439b) list_double_large_graphic_phob2_cc_pane_t1

0x8f3c,	// (0x000a43c4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8f3c,	// (0x000a43c4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1e,	// (0x000ab2a6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1e,	// (0x000ab2a6) list_double_large_graphic_phob2_cc_pane_t

0xddaa,	// (0x000a9232) list_highlight_pane_cp025_ParamLimits

0xddaa,	// (0x000a9232) list_highlight_pane_cp025

0x076c,	// (0x0009bbf4) bg_button_pane_cp033_ParamLimits

0xdd77,	// (0x000a91ff) phob2_cc_button_pane_g1_ParamLimits

0xdd83,	// (0x000a920b) phob2_cc_button_pane_t1_ParamLimits

0xdd98,	// (0x000a9220) phob2_cc_button_pane_t2_ParamLimits

0xfe0e,	// (0x000ab296) phob2_cc_button_pane_t_ParamLimits

0x0696,	// (0x0009bb1e) popup_wgtman_window

0xeaea,	// (0x000a9f72) scroll_pane_cp038

0x887f,	// (0x000a3d07) wgtman_btn_pane_cp_01_ParamLimits

0x887f,	// (0x000a3d07) wgtman_btn_pane_cp_01

0xddb8,	// (0x000a9240) wgtman_content_pane

0xddc1,	// (0x000a9249) wgtman_heading_pane

0x046c,	// (0x0009b8f4) bg_heading_pane_cp02

0xddca,	// (0x000a9252) wgtman_heading_pane_g1

0xddd2,	// (0x000a925a) wgtman_heading_pane_t1

0xdde0,	// (0x000a9268) scroll_pane_cp036

0xdde8,	// (0x000a9270) wgtman_list_pane

0xddf0,	// (0x000a9278) wgtman_list_pane_t1_ParamLimits

0xddf0,	// (0x000a9278) wgtman_list_pane_t1

0xd2f1,	// (0x000a8779) cam4_grid_pane

0x5911,	// (0x000a0d99) bg_button_pane_cp015_ParamLimits

0x5922,	// (0x000a0daa) bg_button_pane_cp016_ParamLimits

0x592e,	// (0x000a0db6) bg_button_pane_cp017_ParamLimits

0x5982,	// (0x000a0e0a) popup_vitu2_query_window_g3_ParamLimits

0x5982,	// (0x000a0e0a) popup_vitu2_query_window_g3

0x5a23,	// (0x000a0eab) popup_vitu2_query_window_t6_ParamLimits

0x5a23,	// (0x000a0eab) popup_vitu2_query_window_t6

0x5a4e,	// (0x000a0ed6) popup_vitu2_query_window_t7_ParamLimits

0x5a4e,	// (0x000a0ed6) popup_vitu2_query_window_t7

0xd305,	// (0x000a878d) cam4_grid_pane_g1

0xd30e,	// (0x000a8796) cam4_grid_pane_g2

0xde0a,	// (0x000a9292) cam4_grid_pane_g3

0xde13,	// (0x000a929b) cam4_grid_pane_g4

0x0003,

0xfe23,	// (0x000ab2ab) cam4_grid_pane_g

0x1271,	// (0x0009c6f9) aid_placing_vt_slider_lsc_ParamLimits

0x157c,	// (0x0009ca04) vidtel_button_pane_ParamLimits

0x157c,	// (0x0009ca04) vidtel_button_pane

0x046c,	// (0x0009b8f4) bg_button_pane_cp034

0xde1e,	// (0x000a92a6) vidtel_button_pane_g1

0xde26,	// (0x000a92ae) vidtel_button_pane_t1

0xec31,	// (0x000aa0b9) aid_size_vtel_slider_touch

0xef5f,	// (0x000aa3e7) scroll_pane_cp039

0x6e2f,	// (0x000a22b7) ncim_query_button_pane_cp01_ParamLimits

0x6e4e,	// (0x000a22d6) ncimui_query_pane_g1_ParamLimits

0x076c,	// (0x0009bbf4) input_focus_pane_cp012_ParamLimits

0x6e73,	// (0x000a22fb) ncim_query_entry_pane_t1_ParamLimits

0xef5f,	// (0x000aa3e7) scroll_pane_cp039_ParamLimits

0xb357,	// (0x000a67df) navi_pane_bcale_mc_g1

0xb35f,	// (0x000a67e7) navi_pane_bcale_mc_t1

0xd578,	// (0x000a8a00) main_sp_fs_email_pane_g1

0xd584,	// (0x000a8a0c) main_sp_fs_email_pane_g2

0x0001,

0xfc26,	// (0x000ab0ae) main_sp_fs_email_pane_g

0xd7ef,	// (0x000a8c77) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd7ef,	// (0x000a8c77) list_single_cale_mrui_row_pane_g3

0x840e,	// (0x000a3896) list_single_recal_day_pane_g5_event_pane

0x8424,	// (0x000a38ac) list_single_recal_day_pane_g7

0xde3c,	// (0x000a92c4) list_recal_day_event_pane_cp01

0xde45,	// (0x000a92cd) list_recal_vselct_arw_lo_pane_cp01

0xde4d,	// (0x000a92d5) list_recal_vselct_arw_up_pane_cp01

0xde55,	// (0x000a92dd) list_recal_vselct_pane_cp01

0xec8f,	// (0x000aa117) list_recal_day_event_pane_cp01_g1

0x8f65,	// (0x000a43ed) list_recal_day_event_pane_cp01_t1

0x842c,	// (0x000a38b4) list_single_recal_day_pane_t1_ParamLimits

0x843e,	// (0x000a38c6) list_single_recal_day_pane_t2_ParamLimits

0xfd06,	// (0x000ab18e) list_single_recal_day_pane_t_ParamLimits

0xa649,	// (0x000a5ad1) bg_notes_pane_ParamLimits

0xa71c,	// (0x000a5ba4) list_notes_pane_ParamLimits

0x08ca,	// (0x0009bd52) scroll_pane_cp06_ParamLimits

0xa758,	// (0x000a5be0) main_notes_pane_ParamLimits

0x076c,	// (0x0009bbf4) main_welc_pane

0x8fa0,	// (0x000a4428) main_welc_body_pane_ParamLimits

0x8fa0,	// (0x000a4428) main_welc_body_pane

0x8fbe,	// (0x000a4446) main_welc_opti_pane_ParamLimits

0x8fbe,	// (0x000a4446) main_welc_opti_pane

0x903c,	// (0x000a44c4) main_welc_pane_t1_ParamLimits

0x903c,	// (0x000a44c4) main_welc_pane_t1

0x9234,	// (0x000a46bc) main_welc_body_row_pane_ParamLimits

0x9234,	// (0x000a46bc) main_welc_body_row_pane

0xa6b6,	// (0x000a5b3e) main_welc_opti_row_pane_ParamLimits

0xa6b6,	// (0x000a5b3e) main_welc_opti_row_pane

0xde6f,	// (0x000a92f7) main_welc_opti_row_pane_g1

0x9248,	// (0x000a46d0) main_welc_opti_row_pane_t1

0xde77,	// (0x000a92ff) main_welc_body_row_pane_t1

0xdb44,	// (0x000a8fcc) popup_notif_wgt_heading_pane

0xdb5e,	// (0x000a8fe6) aid_size_list_notif_wgt_del_ParamLimits

0xdb6b,	// (0x000a8ff3) list_notif_wgt_row_pane_g1_ParamLimits

0xdb77,	// (0x000a8fff) list_notif_wgt_row_pane_g2_ParamLimits

0xdb86,	// (0x000a900e) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6d,	// (0x000ab1f5) list_notif_wgt_row_pane_g_ParamLimits

0xdb93,	// (0x000a901b) list_notif_wgt_row_pane_t1_ParamLimits

0xdba9,	// (0x000a9031) list_notif_wgt_row_pane_t2_ParamLimits

0xdbbb,	// (0x000a9043) list_notif_wgt_row_pane_t3_ParamLimits

0xfd74,	// (0x000ab1fc) list_notif_wgt_row_pane_t_ParamLimits

0x8918,	// (0x000a3da0) listrow_wgtman_pane_g1_ParamLimits

0x8925,	// (0x000a3dad) listrow_wgtman_pane_g2_ParamLimits

0xfda4,	// (0x000ab22c) listrow_wgtman_pane_g_ParamLimits

0x8943,	// (0x000a3dcb) listrow_wgtman_pane_t1_ParamLimits

0x895b,	// (0x000a3de3) listrow_wgtman_pane_t2_ParamLimits

0xfda9,	// (0x000ab231) listrow_wgtman_pane_t_ParamLimits

0x8981,	// (0x000a3e09) wait_bar_pane_cp09_ParamLimits

0x046c,	// (0x0009b8f4) bg_popup_heading_pane_cp02

0xde86,	// (0x000a930e) popup_notif_wgt_heading_pane_g1

0xde8e,	// (0x000a9316) popup_notif_wgt_heading_pane_t1

0x046c,	// (0x0009b8f4) main_vids_pane

0x046c,	// (0x0009b8f4) vids_listscroll_pane

0x9257,	// (0x000a46df) scroll_pane_cp040

0x046c,	// (0x0009b8f4) vids_list_pane

0x9262,	// (0x000a46ea) vids_list_double_pane_ParamLimits

0x9262,	// (0x000a46ea) vids_list_double_pane

0x9273,	// (0x000a46fb) vids_list_double_pane_g1

0x927c,	// (0x000a4704) vids_list_double_pane_t1

0x928c,	// (0x000a4714) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x000ab2ca) vids_list_double_pane_t

0x9fe3,	// (0x000a546b) main_ncimui_pane_ParamLimits

0x6b56,	// (0x000a1fde) main_ncimui_pane_g1_ParamLimits

0x6b62,	// (0x000a1fea) main_ncimui_pane_g2_ParamLimits

0x6b62,	// (0x000a1fea) main_ncimui_pane_g2

0x0001,

0xfb27,	// (0x000aafaf) main_ncimui_pane_g_ParamLimits

0xfb27,	// (0x000aafaf) main_ncimui_pane_g

0x8fd9,	// (0x000a4461) main_welc_pane_g1_ParamLimits

0x8fd9,	// (0x000a4461) main_welc_pane_g1

0x8fee,	// (0x000a4476) main_welc_pane_g2_ParamLimits

0x8fee,	// (0x000a4476) main_welc_pane_g2

0x0003,

0xfe2c,	// (0x000ab2b4) main_welc_pane_g_ParamLimits

0xfe2c,	// (0x000ab2b4) main_welc_pane_g

0xa649,	// (0x000a5ad1) listscroll_mce_pane_ParamLimits

0xb4ac,	// (0x000a6934) wait_bar_pane_cp10

0xc83a,	// (0x000a7cc2) main_cale_day_pane_ParamLimits

0xc83a,	// (0x000a7cc2) main_cale_week_pane_ParamLimits

0xa649,	// (0x000a5ad1) main_messa_pane_ParamLimits

0x40e6,	// (0x0009f56e) main_clock2_btn_pane_ParamLimits

0x40e6,	// (0x0009f56e) main_clock2_btn_pane

0xe4c9,	// (0x000a9951) main_clock2_btn_pane_cp01_ParamLimits

0xe4c9,	// (0x000a9951) main_clock2_btn_pane_cp01

0xd7c0,	// (0x000a8c48) list_cale_mrui_pane_ParamLimits

0xdbff,	// (0x000a9087) main_cf0_pane_g2

0x0001,

0xfd7b,	// (0x000ab203) main_cf0_pane_g

0x8b6e,	// (0x000a3ff6) area_left_week_number_pane_ParamLimits

0x8b7a,	// (0x000a4002) area_top_day_name_pane_ParamLimits

0x8b8d,	// (0x000a4015) frame_month_view_pane_ParamLimits

0xdd18,	// (0x000a91a0) grid_month_view_pane_ParamLimits

0xdd26,	// (0x000a91ae) frm_month_g1_ParamLimits

0x8c0e,	// (0x000a4096) frm_month_g2_ParamLimits

0x8c21,	// (0x000a40a9) frm_month_g3_ParamLimits

0x8c34,	// (0x000a40bc) frm_month_g4_ParamLimits

0x8c47,	// (0x000a40cf) frm_month_g5_ParamLimits

0x8c5a,	// (0x000a40e2) frm_month_g6_ParamLimits

0x8c6d,	// (0x000a40f5) frm_month_g7_ParamLimits

0xdd33,	// (0x000a91bb) frm_month_g8_ParamLimits

0x8c80,	// (0x000a4108) frm_month_g9_ParamLimits

0x8c90,	// (0x000a4118) frm_month_g10_ParamLimits

0x8ca0,	// (0x000a4128) frm_month_g11_ParamLimits

0x8cb0,	// (0x000a4138) frm_month_g12_ParamLimits

0x8cc2,	// (0x000a414a) frm_month_g13_ParamLimits

0x8cd4,	// (0x000a415c) frm_month_g14_ParamLimits

0x8ce8,	// (0x000a4170) frm_month_g15_ParamLimits

0x8cfc,	// (0x000a4184) frm_month_g16_ParamLimits

0xfdd3,	// (0x000ab25b) frm_month_g_ParamLimits

0xdd40,	// (0x000a91c8) cell_top_day_name_pane_t1_ParamLimits

0x8d10,	// (0x000a4198) cell_area_left_week_number_pane_g1_ParamLimits

0x8d1c,	// (0x000a41a4) cell_area_left_week_number_pane_t1_ParamLimits

0xa6c4,	// (0x000a5b4c) cell_month_view_pane_g1_ParamLimits

0x8d2f,	// (0x000a41b7) cell_month_view_pane_t1_ParamLimits

0xa641,	// (0x000a5ac9) main_clock2_btn_pane_g1

0xde9c,	// (0x000a9324) main_clock2_btn_pane_t1

0x076c,	// (0x0009bbf4) listscroll_cmail_pane_ParamLimits

0xd578,	// (0x000a8a00) main_sp_fs_email_pane_g1_ParamLimits

0xd584,	// (0x000a8a0c) main_sp_fs_email_pane_g2_ParamLimits

0xfc26,	// (0x000ab0ae) main_sp_fs_email_pane_g_ParamLimits

0xd8c7,	// (0x000a8d4f) list_recal_day_pane_ParamLimits

0xd8d8,	// (0x000a8d60) mian_recal_day_pane_t1

0x7b29,	// (0x000a2fb1) list_single_dyc_row_text_pane_t4_ParamLimits

0x7b29,	// (0x000a2fb1) list_single_dyc_row_text_pane_t4

0x7b72,	// (0x000a2ffa) list_single_dyc_row_text_pane_t5_ParamLimits

0x7b72,	// (0x000a2ffa) list_single_dyc_row_text_pane_t5

0x7be8,	// (0x000a3070) list_single_dyc_row_text_pane_t6_ParamLimits

0x7be8,	// (0x000a3070) list_single_dyc_row_text_pane_t6

0xadc6,	// (0x000a624e) aid_mgn_list_cale_time_pane

0x9fe3,	// (0x000a546b) main_gallery2_pane_ParamLimits

0xe4df,	// (0x000a9967) main_clock2_pane_cp01_t1

0xe4ef,	// (0x000a9977) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x000aab94) main_clock2_pane_cp01_t

0x0c67,	// (0x0009c0ef) cale_week_scroll_pane_g16_ParamLimits

0x0c67,	// (0x0009c0ef) cale_week_scroll_pane_g16

0xa99d,	// (0x000a5e25) vorec_slider_pane

0xde26,	// (0x000a92ae) vidtel_button_pane_t1_ParamLimits

0x84ac,	// (0x000a3934) main_fs_bigclock_clock_pane_g1_ParamLimits

0x84ac,	// (0x000a3934) main_fs_bigclock_clock_pane_g2_ParamLimits

0x84bd,	// (0x000a3945) main_fs_bigclock_clock_pane_g3_ParamLimits

0x84bd,	// (0x000a3945) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd29,	// (0x000ab1b1) main_fs_bigclock_clock_pane_g_ParamLimits

0x84d0,	// (0x000a3958) main_fs_bigclock_clock_pane_t1_ParamLimits

0x84e6,	// (0x000a396e) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd32,	// (0x000ab1ba) main_fs_bigclock_clock_pane_t_ParamLimits

0x39bb,	// (0x0009ee43) main_mup3_lyrics_pane_ParamLimits

0x39bb,	// (0x0009ee43) main_mup3_lyrics_pane

0x92b4,	// (0x000a473c) main_mup3_lyrics_pane_t1_ParamLimits

0x92b4,	// (0x000a473c) main_mup3_lyrics_pane_t1

0xd043,	// (0x000a84cb) aid_main_mp4_pane_t1_area

0xd04d,	// (0x000a84d5) aid_main_mp4_pane_t2_area

0xd0f9,	// (0x000a8581) main_mp4_pane_g7_ParamLimits

0xd0f9,	// (0x000a8581) main_mp4_pane_g7

0xd105,	// (0x000a858d) main_mp4_pane_g8_ParamLimits

0xd105,	// (0x000a858d) main_mp4_pane_g8

0x4a9e,	// (0x0009ff26) aid_call6_pane_g1_size

0x8ec1,	// (0x000a4349) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8ec1,	// (0x000a4349) list_double_large_graphic_phob2_other_pane

0xad7e,	// (0x000a6206) list_double_large_graphic_phob2_other_pane_g1

0x046c,	// (0x0009b8f4) list_highlight_pane_cp026

0x076c,	// (0x0009bbf4) main_welc_pane_ParamLimits

0x78ec,	// (0x000a2d74) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x78ec,	// (0x000a2d74) main_sp_fs_ctrlbar_pane_g3

0x7906,	// (0x000a2d8e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7906,	// (0x000a2d8e) main_sp_fs_ctrlbar_pane_g4

0x793a,	// (0x000a2dc2) toolbar2_fixed_button_pane_cp01

0x7945,	// (0x000a2dcd) toolbar2_fixed_button_pane_cp02

0x7952,	// (0x000a2dda) toolbar2_fixed_button_pane_cp03

0x8f86,	// (0x000a440e) list_welc_entry_pane_ParamLimits

0x8f86,	// (0x000a440e) list_welc_entry_pane

0x9003,	// (0x000a448b) main_welc_pane_g3_ParamLimits

0x9003,	// (0x000a448b) main_welc_pane_g3

0x905a,	// (0x000a44e2) main_welc_pane_t2_ParamLimits

0x905a,	// (0x000a44e2) main_welc_pane_t2

0x9075,	// (0x000a44fd) main_welc_pane_t3_ParamLimits

0x9075,	// (0x000a44fd) main_welc_pane_t3

0x0005,

0xfe35,	// (0x000ab2bd) main_welc_pane_t_ParamLimits

0xfe35,	// (0x000ab2bd) main_welc_pane_t

0x91a5,	// (0x000a462d) welc_button_pane_ParamLimits

0x91a5,	// (0x000a462d) welc_button_pane

0x921f,	// (0x000a46a7) welc_service_logo_pane_ParamLimits

0x921f,	// (0x000a46a7) welc_service_logo_pane

0x92d0,	// (0x000a4758) list_single_welc_entry_pane_ParamLimits

0x92d0,	// (0x000a4758) list_single_welc_entry_pane

0x92e1,	// (0x000a4769) list_single_welc_entry_pane_g1

0x92e9,	// (0x000a4771) list_single_welc_entry_pane_t1

0x92f7,	// (0x000a477f) list_single_welc_entry_pane_t2

0x0001,

0xfe47,	// (0x000ab2cf) list_single_welc_entry_pane_t

0x046c,	// (0x0009b8f4) bg_button_pane_cp035

0x9305,	// (0x000a478d) welc_button_pane_t1

0xdeaa,	// (0x000a9332) welc_service_logo_pane_g1

0xdeb3,	// (0x000a933b) welc_service_logo_pane_g2

0x0001,

0xfe4c,	// (0x000ab2d4) welc_service_logo_pane_g

0x9ff1,	// (0x000a5479) main_int_radio_pane

0xa7f3,	// (0x000a5c7b) list_single_fs_dyc_pane_g1

0x8df2,	// (0x000a427a) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8df2,	// (0x000a427a) list_double_large_graphic_phob2_pane_g3

0x8dfe,	// (0x000a4286) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8dfe,	// (0x000a4286) list_double_large_graphic_phob2_pane_g4

0x9313,	// (0x000a479b) main_int_radio1_pane_ParamLimits

0x9313,	// (0x000a479b) main_int_radio1_pane

0xdebc,	// (0x000a9344) find_pane_cp02

0x9330,	// (0x000a47b8) input_focus_pane_cp12_ParamLimits

0x9330,	// (0x000a47b8) input_focus_pane_cp12

0x9340,	// (0x000a47c8) input_focus_pane_cp13_ParamLimits

0x9340,	// (0x000a47c8) input_focus_pane_cp13

0x9354,	// (0x000a47dc) input_focus_pane_cp14_ParamLimits

0x9354,	// (0x000a47dc) input_focus_pane_cp14

0xdec5,	// (0x000a934d) int_radio1_listscroll_pane

0x9368,	// (0x000a47f0) main_int_radio1_pane_g1_ParamLimits

0x9368,	// (0x000a47f0) main_int_radio1_pane_g1

0x9380,	// (0x000a4808) main_int_radio1_pane_t1_ParamLimits

0x9380,	// (0x000a4808) main_int_radio1_pane_t1

0x939b,	// (0x000a4823) main_int_radio1_pane_t2_ParamLimits

0x939b,	// (0x000a4823) main_int_radio1_pane_t2

0x93b6,	// (0x000a483e) main_int_radio1_pane_t3_ParamLimits

0x93b6,	// (0x000a483e) main_int_radio1_pane_t3

0x93d1,	// (0x000a4859) main_int_radio1_pane_t4_ParamLimits

0x93d1,	// (0x000a4859) main_int_radio1_pane_t4

0xdecf,	// (0x000a9357) main_int_radio1_pane_t5_ParamLimits

0xdecf,	// (0x000a9357) main_int_radio1_pane_t5

0x93e3,	// (0x000a486b) main_int_radio1_pane_t6_ParamLimits

0x93e3,	// (0x000a486b) main_int_radio1_pane_t6

0x93f8,	// (0x000a4880) main_int_radio1_pane_t7_ParamLimits

0x93f8,	// (0x000a4880) main_int_radio1_pane_t7

0x940d,	// (0x000a4895) main_int_radio1_pane_t8_ParamLimits

0x940d,	// (0x000a4895) main_int_radio1_pane_t8

0x942c,	// (0x000a48b4) main_int_radio1_pane_t9_ParamLimits

0x942c,	// (0x000a48b4) main_int_radio1_pane_t9

0x943e,	// (0x000a48c6) main_int_radio1_pane_t10_ParamLimits

0x943e,	// (0x000a48c6) main_int_radio1_pane_t10

0x9464,	// (0x000a48ec) main_int_radio1_pane_t11_ParamLimits

0x9464,	// (0x000a48ec) main_int_radio1_pane_t11

0x948a,	// (0x000a4912) main_int_radio1_pane_t12_ParamLimits

0x948a,	// (0x000a4912) main_int_radio1_pane_t12

0x000b,

0xfe51,	// (0x000ab2d9) main_int_radio1_pane_t_ParamLimits

0xfe51,	// (0x000ab2d9) main_int_radio1_pane_t

0xdee1,	// (0x000a9369) int_radio_list_pane

0xdd5b,	// (0x000a91e3) scroll_pane_cp037

0xdee9,	// (0x000a9371) list_double_large_graphic_int_radio_pane_ParamLimits

0xdee9,	// (0x000a9371) list_double_large_graphic_int_radio_pane

0xdf01,	// (0x000a9389) list_double_large_graphic_int_radio_pane_g1

0x949c,	// (0x000a4924) list_double_large_graphic_int_radio_pane_t1

0x94aa,	// (0x000a4932) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6a,	// (0x000ab2f2) list_double_large_graphic_int_radio_pane_t

0x046c,	// (0x0009b8f4) list_highlight_pane_cp027

0xde5f,	// (0x000a92e7) main_button_pane_4

0x9016,	// (0x000a449e) main_welc_pane_g4_ParamLimits

0x9016,	// (0x000a449e) main_welc_pane_g4

0x908e,	// (0x000a4516) main_welc_pane_t4_ParamLimits

0x908e,	// (0x000a4516) main_welc_pane_t4

0x90a5,	// (0x000a452d) main_welc_pane_t5_ParamLimits

0x90a5,	// (0x000a452d) main_welc_pane_t5

0x90e2,	// (0x000a456a) main_welc_pane_t6_ParamLimits

0x90e2,	// (0x000a456a) main_welc_pane_t6

0x91bc,	// (0x000a4644) welc_button_pane_2_ParamLimits

0x91bc,	// (0x000a4644) welc_button_pane_2

0x91d8,	// (0x000a4660) welc_button_pane_3_ParamLimits

0x91d8,	// (0x000a4660) welc_button_pane_3

0xde67,	// (0x000a92ef) welc_button_pane_4

0x91f7,	// (0x000a467f) welc_button_pane_5_ParamLimits

0x91f7,	// (0x000a467f) welc_button_pane_5

0x049a,	// (0x0009b922) main_popup_welc_pane

0xdf19,	// (0x000a93a1) main_welc_sk_g3

0xdf23,	// (0x000a93ab) main_welc_sk_g4

0xdf2d,	// (0x000a93b5) main_welc_sk_t3

0xdf3d,	// (0x000a93c5) main_welc_sk_t4

0xdf4d,	// (0x000a93d5) popup_welc_pane_t4

0xdf5b,	// (0x000a93e3) popup_welc_pane_t5

0xdf69,	// (0x000a93f1) popup_welc_pane_t6

0x9ff1,	// (0x000a5479) main_acti_pane

0x046c,	// (0x0009b8f4) main_sso_pane

0x94b8,	// (0x000a4940) sso_body_pane_ParamLimits

0x94b8,	// (0x000a4940) sso_body_pane

0x94cc,	// (0x000a4954) sso_logo_pane_ParamLimits

0x94cc,	// (0x000a4954) sso_logo_pane

0x94fc,	// (0x000a4984) sso_sk_pane_ParamLimits

0x94fc,	// (0x000a4984) sso_sk_pane

0xa9dd,	// (0x000a5e65) main_sso_logo_pane_g1

0x950e,	// (0x000a4996) sso_sk_pane_t1_ParamLimits

0x950e,	// (0x000a4996) sso_sk_pane_t1

0x9528,	// (0x000a49b0) sso_sk_pane_t2_ParamLimits

0x9528,	// (0x000a49b0) sso_sk_pane_t2

0x0001,

0xfe6f,	// (0x000ab2f7) sso_sk_pane_t_ParamLimits

0xfe6f,	// (0x000ab2f7) sso_sk_pane_t

0xdfa7,	// (0x000a942f) aid_sso_gap

0xdfb0,	// (0x000a9438) aid_sso_txt1

0xdfba,	// (0x000a9442) aid_sso_txt2

0xdfc4,	// (0x000a944c) aid_sso_txt3

0x0002,

0xfe74,	// (0x000ab2fc) aid_sso_txt

0xdfce,	// (0x000a9456) aid_sso_widget

0x9592,	// (0x000a4a1a) sso_btn_pane_ParamLimits

0x9592,	// (0x000a4a1a) sso_btn_pane

0x961a,	// (0x000a4aa2) sso_option_pane_ParamLimits

0x961a,	// (0x000a4aa2) sso_option_pane

0x969a,	// (0x000a4b22) sso_query_pane_ParamLimits

0x969a,	// (0x000a4b22) sso_query_pane

0x96f0,	// (0x000a4b78) sso_query_pane_cp01_ParamLimits

0x96f0,	// (0x000a4b78) sso_query_pane_cp01

0x974a,	// (0x000a4bd2) sso_t_hdr_pane_ParamLimits

0x974a,	// (0x000a4bd2) sso_t_hdr_pane

0x9774,	// (0x000a4bfc) sso_t_nml_pane_ParamLimits

0x9774,	// (0x000a4bfc) sso_t_nml_pane

0xdfd8,	// (0x000a9460) sso_t_sub_pane

0x94d9,	// (0x000a4961) sso_popup_window_ParamLimits

0x94d9,	// (0x000a4961) sso_popup_window

0x953e,	// (0x000a49c6) sso_apps_pane_ParamLimits

0x953e,	// (0x000a49c6) sso_apps_pane

0x9568,	// (0x000a49f0) sso_body_pane_g1

0x9572,	// (0x000a49fa) sso_body_pane_t1

0x9582,	// (0x000a4a0a) sso_body_pane_t2

0x0001,

0xfe7b,	// (0x000ab303) sso_body_pane_t

0x95e4,	// (0x000a4a6c) sso_btn_pane_cp01_ParamLimits

0x95e4,	// (0x000a4a6c) sso_btn_pane_cp01

0x966e,	// (0x000a4af6) sso_prog_pane_ParamLimits

0x966e,	// (0x000a4af6) sso_prog_pane

0x97ca,	// (0x000a4c52) sso_t_hdr_pane_t1_ParamLimits

0x97ca,	// (0x000a4c52) sso_t_hdr_pane_t1

0xdfed,	// (0x000a9475) input_focus_pane_cp10_ParamLimits

0xdfed,	// (0x000a9475) input_focus_pane_cp10

0xe007,	// (0x000a948f) sso_query_pane_t1_ParamLimits

0xe007,	// (0x000a948f) sso_query_pane_t1

0xe01a,	// (0x000a94a2) sso_query_pane_t2_ParamLimits

0xe01a,	// (0x000a94a2) sso_query_pane_t2

0xe035,	// (0x000a94bd) sso_query_pane_t3_ParamLimits

0xe035,	// (0x000a94bd) sso_query_pane_t3

0xe05f,	// (0x000a94e7) sso_query_pane_t4_ParamLimits

0xe05f,	// (0x000a94e7) sso_query_pane_t4

0x0003,

0xfe80,	// (0x000ab308) sso_query_pane_t_ParamLimits

0xfe80,	// (0x000ab308) sso_query_pane_t

0x046c,	// (0x0009b8f4) bg_button_pane_cp22

0xdf0a,	// (0x000a9392) sso_btn_pane_t1

0x97dd,	// (0x000a4c65) sso_t_nml_pane_t1_ParamLimits

0x97dd,	// (0x000a4c65) sso_t_nml_pane_t1

0xe083,	// (0x000a950b) sso_option_row_pane_ParamLimits

0xe083,	// (0x000a950b) sso_option_row_pane

0xe096,	// (0x000a951e) sso_t_sub_pane_t1_ParamLimits

0xe096,	// (0x000a951e) sso_t_sub_pane_t1

0x076c,	// (0x0009bbf4) bg_popup_window_pane_cp11_ParamLimits

0x076c,	// (0x0009bbf4) bg_popup_window_pane_cp11

0xe0b3,	// (0x000a953b) popup_sk_window_cp01_ParamLimits

0xe0b3,	// (0x000a953b) popup_sk_window_cp01

0xe0c0,	// (0x000a9548) sso_popup_body_pane_ParamLimits

0xe0c0,	// (0x000a9548) sso_popup_body_pane

0xe0cd,	// (0x000a9555) scroll_pane_cp21_ParamLimits

0xe0cd,	// (0x000a9555) scroll_pane_cp21

0xe0da,	// (0x000a9562) sso_popup_body_t_pane_ParamLimits

0xe0da,	// (0x000a9562) sso_popup_body_t_pane

0xe0e7,	// (0x000a956f) sso_popup_body_t_hdr_pane_ParamLimits

0xe0e7,	// (0x000a956f) sso_popup_body_t_hdr_pane

0xe0fa,	// (0x000a9582) sso_popup_body_t_nml_pane_ParamLimits

0xe0fa,	// (0x000a9582) sso_popup_body_t_nml_pane

0xe118,	// (0x000a95a0) sso_popup_body_t_sub_pane_ParamLimits

0xe118,	// (0x000a95a0) sso_popup_body_t_sub_pane

0xe13b,	// (0x000a95c3) sso_popup_body_t_hdr_pane_t1

0x97f8,	// (0x000a4c80) sso_popup_body_t_nml_pane_t1_ParamLimits

0x97f8,	// (0x000a4c80) sso_popup_body_t_nml_pane_t1

0xe14b,	// (0x000a95d3) sso_popup_body_t_sub_pane_t1_ParamLimits

0xe14b,	// (0x000a95d3) sso_popup_body_t_sub_pane_t1

0xa9dd,	// (0x000a5e65) sso_prog_pane_g1

0x9831,	// (0x000a4cb9) sso_apps_pane_comp1_ParamLimits

0x9831,	// (0x000a4cb9) sso_apps_pane_comp1

0xe170,	// (0x000a95f8) sso_apps_pane_comp1_g1

0xe178,	// (0x000a9600) sso_apps_pane_comp1_t1

0xe194,	// (0x000a961c) sso_option_row_pane_g1

0xe19c,	// (0x000a9624) sso_option_row_pane_t1

0x8f73,	// (0x000a43fb) bg_welc_area_ParamLimits

0x8f73,	// (0x000a43fb) bg_welc_area

0x9120,	// (0x000a45a8) sso_t_hdr_pane_a_t1_ParamLimits

0x9120,	// (0x000a45a8) sso_t_hdr_pane_a_t1

0x913b,	// (0x000a45c3) sso_t_nml_pane_a_t1_ParamLimits

0x913b,	// (0x000a45c3) sso_t_nml_pane_a_t1

0x916a,	// (0x000a45f2) sso_t_sub_pane_a_t1_ParamLimits

0x916a,	// (0x000a45f2) sso_t_sub_pane_a_t1

0xdf0a,	// (0x000a9392) sso_btn_pane_t1_copy1

0x046c,	// (0x0009b8f4) welc_button_pane_2_comp1

0xdf77,	// (0x000a93ff) sso_t_hdr_pane_p_t1

0xdf87,	// (0x000a940f) sso_t_nml_pane_p_t1

0xdf97,	// (0x000a941f) sso_t_sub_pane_p_t1

0xd617,	// (0x000a8a9f) list_cmail_pane_ParamLimits

0x920d,	// (0x000a4695) welc_button_pane_cp01_ParamLimits

0x920d,	// (0x000a4695) welc_button_pane_cp01

0x046c,	// (0x0009b8f4) main_att_pane

0xe186,	// (0x000a960e) input_focus_pane_cp10_t1

0xe19c,	// (0x000a9624) sso_option_row_pane_t1_ParamLimits

0x984b,	// (0x000a4cd3) main_att_body_pane_ParamLimits

0x984b,	// (0x000a4cd3) main_att_body_pane

0x9880,	// (0x000a4d08) att_btn_pane_ParamLimits

0x9880,	// (0x000a4d08) att_btn_pane

0x98a5,	// (0x000a4d2d) att_btn_pane_cp01_ParamLimits

0x98a5,	// (0x000a4d2d) att_btn_pane_cp01

0x98c5,	// (0x000a4d4d) att_li_srv_pane_ParamLimits

0x98c5,	// (0x000a4d4d) att_li_srv_pane

0x98e2,	// (0x000a4d6a) att_opt_pane_ParamLimits

0x98e2,	// (0x000a4d6a) att_opt_pane

0x992e,	// (0x000a4db6) att_query_pane_ParamLimits

0x992e,	// (0x000a4db6) att_query_pane

0x997a,	// (0x000a4e02) att_query_pane_cp01_ParamLimits

0x997a,	// (0x000a4e02) att_query_pane_cp01

0x99c6,	// (0x000a4e4e) att_t_hdr_pane_ParamLimits

0x99c6,	// (0x000a4e4e) att_t_hdr_pane

0x9a1e,	// (0x000a4ea6) att_t_nml_pane_ParamLimits

0x9a1e,	// (0x000a4ea6) att_t_nml_pane

0x9a57,	// (0x000a4edf) att_t_nml_pane_cp01_ParamLimits

0x9a57,	// (0x000a4edf) att_t_nml_pane_cp01

0x9a83,	// (0x000a4f0b) att_t_nmlb_pane_ParamLimits

0x9a83,	// (0x000a4f0b) att_t_nmlb_pane

0x9aa0,	// (0x000a4f28) att_term_pane_ParamLimits

0x9aa0,	// (0x000a4f28) att_term_pane

0x9aec,	// (0x000a4f74) main_att_body_pane_g1_ParamLimits

0x9aec,	// (0x000a4f74) main_att_body_pane_g1

0xe1b2,	// (0x000a963a) att_t_hdr_pane_t1_ParamLimits

0xe1b2,	// (0x000a963a) att_t_hdr_pane_t1

0xe1cb,	// (0x000a9653) att_t_nml_pane_t1_ParamLimits

0xe1cb,	// (0x000a9653) att_t_nml_pane_t1

0xe1f0,	// (0x000a9678) att_btn_pane_t1

0x046c,	// (0x0009b8f4) bg_button_pane_cp23

0x9b23,	// (0x000a4fab) att_li_srv_row_pane_ParamLimits

0x9b23,	// (0x000a4fab) att_li_srv_row_pane

0xe200,	// (0x000a9688) att_t_nmlb_pane_t1_ParamLimits

0xe200,	// (0x000a9688) att_t_nmlb_pane_t1

0xe219,	// (0x000a96a1) att_query_pane_t1

0xe228,	// (0x000a96b0) att_query_pane_t2

0xe237,	// (0x000a96bf) att_query_pane_t3

0x0002,

0xfe89,	// (0x000ab311) att_query_pane_t

0xe246,	// (0x000a96ce) input_focus_pane_cp11

0xe24f,	// (0x000a96d7) att_term_pane_t1_ParamLimits

0xe24f,	// (0x000a96d7) att_term_pane_t1

0x046c,	// (0x0009b8f4) att_opt_row_pane

0xe26c,	// (0x000a96f4) att_opt_row_pane_g1

0xe274,	// (0x000a96fc) att_opt_row_pane_t1_ParamLimits

0xe274,	// (0x000a96fc) att_opt_row_pane_t1

0x9b33,	// (0x000a4fbb) att_li_srv_row_pane_g1

0x9b3b,	// (0x000a4fc3) att_li_srv_row_pane_t1

0x9b50,	// (0x000a4fd8) att_li_srv_row_pane_t2

0x0001,

0xfe90,	// (0x000ab318) att_li_srv_row_pane_t

0x046c,	// (0x0009b8f4) main_call7_pane

0x046c,	// (0x0009b8f4) main_vod_pane

0xdfd8,	// (0x000a9460) sso_t_sub_pane_ParamLimits

0x9861,	// (0x000a4ce9) att_btn_emg_pane_ParamLimits

0x9861,	// (0x000a4ce9) att_btn_emg_pane

0x9b3b,	// (0x000a4fc3) att_li_srv_row_pane_t1_ParamLimits

0x9b50,	// (0x000a4fd8) att_li_srv_row_pane_t2_ParamLimits

0xfe90,	// (0x000ab318) att_li_srv_row_pane_t_ParamLimits

0xe28d,	// (0x000a9715) att_btn_close_pane_g1

0x046c,	// (0x0009b8f4) bg_button_pane_cp24

0x9b65,	// (0x000a4fed) main_vod_body_pane_ParamLimits

0x9b65,	// (0x000a4fed) main_vod_body_pane

0x9b79,	// (0x000a5001) main_vod_body_pane_g1_ParamLimits

0x9b79,	// (0x000a5001) main_vod_body_pane_g1

0x9bad,	// (0x000a5035) scroll_pane_cp24_ParamLimits

0x9bad,	// (0x000a5035) scroll_pane_cp24

0x9bfb,	// (0x000a5083) vod_btn_pane_ParamLimits

0x9bfb,	// (0x000a5083) vod_btn_pane

0x9c3f,	// (0x000a50c7) vod_det_pane_ParamLimits

0x9c3f,	// (0x000a50c7) vod_det_pane

0x9c71,	// (0x000a50f9) vod_logo_g1_ParamLimits

0x9c71,	// (0x000a50f9) vod_logo_g1

0x9caf,	// (0x000a5137) vod_opt_pane_ParamLimits

0x9caf,	// (0x000a5137) vod_opt_pane

0x9ce2,	// (0x000a516a) vod_opt_pane_cp01_ParamLimits

0x9ce2,	// (0x000a516a) vod_opt_pane_cp01

0x9d0e,	// (0x000a5196) vod_query_pane_ParamLimits

0x9d0e,	// (0x000a5196) vod_query_pane

0x9d3b,	// (0x000a51c3) vod_query_pane_cp01_ParamLimits

0x9d3b,	// (0x000a51c3) vod_query_pane_cp01

0x9d47,	// (0x000a51cf) vod_t_nml_pane_ParamLimits

0x9d47,	// (0x000a51cf) vod_t_nml_pane

0x9df4,	// (0x000a527c) vod_t_nml_pane_cp01_ParamLimits

0x9df4,	// (0x000a527c) vod_t_nml_pane_cp01

0x9e30,	// (0x000a52b8) vod_t_sub_pane_ParamLimits

0x9e30,	// (0x000a52b8) vod_t_sub_pane

0x9e65,	// (0x000a52ed) vod_t_sub_pane_cp01_ParamLimits

0x9e65,	// (0x000a52ed) vod_t_sub_pane_cp01

0xe246,	// (0x000a96ce) vod_query_field_pane

0xe219,	// (0x000a96a1) vod_query_pane_t1

0x046c,	// (0x0009b8f4) bg_button_pane_cp25

0xe1f0,	// (0x000a9678) sso_btn_pane_t1_copy2

0x9e91,	// (0x000a5319) vod_t_nml_pane_t1_ParamLimits

0x9e91,	// (0x000a5319) vod_t_nml_pane_t1

0xe295,	// (0x000a971d) vod_opt_row_pane_ParamLimits

0xe295,	// (0x000a971d) vod_opt_row_pane

0xe2a7,	// (0x000a972f) vod_t_sub_pane_t1_ParamLimits

0xe2a7,	// (0x000a972f) vod_t_sub_pane_t1

0x9ec2,	// (0x000a534a) vod_det_cell_pane_ParamLimits

0x9ec2,	// (0x000a534a) vod_det_cell_pane

0x046c,	// (0x0009b8f4) input_focus_pane_cp15

0xe2c0,	// (0x000a9748) vod_query_field_pane_t1

0xe2ce,	// (0x000a9756) vod_opt_row_pane_g1_ParamLimits

0xe2ce,	// (0x000a9756) vod_opt_row_pane_g1

0xe2da,	// (0x000a9762) vod_opt_row_pane_t1_ParamLimits

0xe2da,	// (0x000a9762) vod_opt_row_pane_t1

0xe2ff,	// (0x000a9787) vod_det_cell_field_pane

0xe308,	// (0x000a9790) vod_det_cell_pane_g1

0xe219,	// (0x000a96a1) vod_det_cell_pane_t1

0x046c,	// (0x0009b8f4) input_focus_pane_cp16

0xe2c0,	// (0x000a9748) vod_det_cell_field_pane_t1

0x9ed6,	// (0x000a535e) call7_btn_grp_pane_ParamLimits

0x9ed6,	// (0x000a535e) call7_btn_grp_pane

0x9ef0,	// (0x000a5378) call7_bubble_pane_ParamLimits

0x9ef0,	// (0x000a5378) call7_bubble_pane

0x9f07,	// (0x000a538f) cell_call7_btn_pane_ParamLimits

0x9f07,	// (0x000a538f) cell_call7_btn_pane

0x9f1a,	// (0x000a53a2) call7_pane_g1_ParamLimits

0x9f1a,	// (0x000a53a2) call7_pane_g1

0x9f29,	// (0x000a53b1) call7_windows_conf_pane_ParamLimits

0x9f29,	// (0x000a53b1) call7_windows_conf_pane

0x9f43,	// (0x000a53cb) popup_call7_1st_window_ParamLimits

0x9f43,	// (0x000a53cb) popup_call7_1st_window

0x9f54,	// (0x000a53dc) popup_call7_2nd_window_ParamLimits

0x9f54,	// (0x000a53dc) popup_call7_2nd_window

0x9f65,	// (0x000a53ed) popup_call7_3rd_window_ParamLimits

0x9f65,	// (0x000a53ed) popup_call7_3rd_window

0x046c,	// (0x0009b8f4) bg_button_pane_cp26

0xdcaf,	// (0x000a9137) cell_call7_btn_pane_g1

0xe310,	// (0x000a9798) cell_call7_btn_pane_t1

0x046c,	// (0x0009b8f4) bg_popup_window_pane_cp12

0xe31f,	// (0x000a97a7) popup_call7_1st_window_g1

0xe327,	// (0x000a97af) popup_call7_1st_window_g2

0xe32f,	// (0x000a97b7) popup_call7_1st_window_g3

0x0002,

0xfe95,	// (0x000ab31d) popup_call7_1st_window_g

0xe337,	// (0x000a97bf) popup_call7_1st_window_t1

0xe346,	// (0x000a97ce) popup_call7_1st_window_t2

0xe354,	// (0x000a97dc) popup_call7_1st_window_t3

0x0002,

0xfe9c,	// (0x000ab324) popup_call7_1st_window_t

0x046c,	// (0x0009b8f4) bg_popup_window_pane_cp13

0xe362,	// (0x000a97ea) popup_call7_2nd_window_g1

0xe36a,	// (0x000a97f2) popup_call7_2nd_window_g2

0xe372,	// (0x000a97fa) popup_call7_2nd_window_g3

0x0002,

0xfea3,	// (0x000ab32b) popup_call7_2nd_window_g

0xe37a,	// (0x000a9802) popup_call7_2nd_window_t1

0x046c,	// (0x0009b8f4) bg_popup_window_pane_cp14

0xe389,	// (0x000a9811) call7_list_conf_pane

0xe391,	// (0x000a9819) call7_list_conf_row_pane_ParamLimits

0xe391,	// (0x000a9819) call7_list_conf_row_pane

0xe3a4,	// (0x000a982c) call7_list_conf_row_pane_g1

0xe3ac,	// (0x000a9834) call7_list_conf_row_pane_g2

0x0001,

0xfeaa,	// (0x000ab332) call7_list_conf_row_pane_g

0xe3b4,	// (0x000a983c) call7_list_conf_row_pane_t1

0x046c,	// (0x0009b8f4) list_highlight_pane_cp22
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
