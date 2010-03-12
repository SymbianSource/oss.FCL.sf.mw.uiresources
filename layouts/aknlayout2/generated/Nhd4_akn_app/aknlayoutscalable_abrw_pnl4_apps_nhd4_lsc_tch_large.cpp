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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00094f42 };

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
0x09ee,	// (0x00095930) Screen

0x09fa,	// (0x0009593c) application_window

0x0a36,	// (0x00095978) area_bottom_pane_ParamLimits

0x0a36,	// (0x00095978) area_bottom_pane

0x0a6f,	// (0x000959b1) area_top_pane_ParamLimits

0x0a6f,	// (0x000959b1) area_top_pane

0xa138,	// (0x0009f07a) call_video_uplink_pane_ParamLimits

0xa138,	// (0x0009f07a) call_video_uplink_pane

0x0ae4,	// (0x00095a26) main_pane_ParamLimits

0x0ae4,	// (0x00095a26) main_pane

0xa67f,	// (0x0009f5c1) context_pane

0x4b0a,	// (0x00099a4c) navi_pane

0x4b32,	// (0x00099a74) popup_cale_events_window_ParamLimits

0x4b32,	// (0x00099a74) popup_cale_events_window

0xa692,	// (0x0009f5d4) popup_mup_playback_window

0x4b4a,	// (0x00099a8c) signal_pane

0xe31e,	// (0x000a3260) main_browser_pane

0xef05,	// (0x000a3e47) main_burst_pane

0x486a,	// (0x000997ac) main_calc_pane

0xef05,	// (0x000a3e47) main_cale_day_pane

0xe31e,	// (0x000a3260) main_cale_month_pane

0xef05,	// (0x000a3e47) main_cale_week_pane

0xef05,	// (0x000a3e47) main_call_pane

0xdfac,	// (0x000a2eee) main_call_poc_pane

0xef05,	// (0x000a3e47) main_camera_pane

0xef05,	// (0x000a3e47) main_chi_dic_pane

0xed94,	// (0x000a3cd6) main_clock_pane

0xdfac,	// (0x000a2eee) main_fmradio_pane

0xef05,	// (0x000a3e47) main_graph_messa_pane

0xdfac,	// (0x000a2eee) main_help_pane

0xe31e,	// (0x000a3260) main_im_pane

0xe207,	// (0x000a3149) main_image_pane_ParamLimits

0xe207,	// (0x000a3149) main_image_pane

0xdfac,	// (0x000a2eee) main_location2_pane

0xef05,	// (0x000a3e47) main_location_pane

0xdfac,	// (0x000a2eee) main_messa_pane

0xdfac,	// (0x000a2eee) main_mp2_pane

0xef05,	// (0x000a3e47) main_mp_pane

0xdfac,	// (0x000a2eee) main_msg_pane

0xdfac,	// (0x000a2eee) main_mup_eq_pane

0xdfac,	// (0x000a2eee) main_mup_pane

0xe31e,	// (0x000a3260) main_notes_pane

0xdfac,	// (0x000a2eee) main_pec_pane

0xdfac,	// (0x000a2eee) main_phob_pane

0xdfac,	// (0x000a2eee) main_pinb_pane

0xdfac,	// (0x000a2eee) main_postcard_pane

0xdfac,	// (0x000a2eee) main_qdial_pane

0xef05,	// (0x000a3e47) main_skin_pane

0xdfac,	// (0x000a2eee) main_smil2_pane

0xef05,	// (0x000a3e47) main_smil_pane

0xef05,	// (0x000a3e47) main_video_pane

0xef05,	// (0x000a3e47) main_video_tele_pane

0xe207,	// (0x000a3149) main_viewer_pane_ParamLimits

0xe207,	// (0x000a3149) main_viewer_pane

0xef05,	// (0x000a3e47) main_vorec_pane

0x48be,	// (0x00099800) popup_blid_sat_info_window_ParamLimits

0x48be,	// (0x00099800) popup_blid_sat_info_window

0x4916,	// (0x00099858) popup_dyc_status_message_window_ParamLimits

0x4916,	// (0x00099858) popup_dyc_status_message_window

0x492e,	// (0x00099870) popup_grid_large_graphic_window_ParamLimits

0x492e,	// (0x00099870) popup_grid_large_graphic_window

0x49e4,	// (0x00099926) popup_loc_request_window_ParamLimits

0x49e4,	// (0x00099926) popup_loc_request_window

0x4ae2,	// (0x00099a24) popup_wml_address_window_ParamLimits

0x4ae2,	// (0x00099a24) popup_wml_address_window

0x46a4,	// (0x000995e6) call_muted_g1

0x3674,	// (0x000985b6) popup_call_audio_conf_window_ParamLimits

0x3674,	// (0x000985b6) popup_call_audio_conf_window

0x46b8,	// (0x000995fa) popup_call_audio_first_window_ParamLimits

0x46b8,	// (0x000995fa) popup_call_audio_first_window

0x472e,	// (0x00099670) popup_call_audio_in_window_ParamLimits

0x472e,	// (0x00099670) popup_call_audio_in_window

0x476a,	// (0x000996ac) popup_call_audio_out_window_ParamLimits

0x476a,	// (0x000996ac) popup_call_audio_out_window

0x47a4,	// (0x000996e6) popup_call_audio_second_window_ParamLimits

0x47a4,	// (0x000996e6) popup_call_audio_second_window

0x47fa,	// (0x0009973c) popup_call_audio_wait_window_ParamLimits

0x47fa,	// (0x0009973c) popup_call_audio_wait_window

0x482f,	// (0x00099771) popup_number_entry_window_ParamLimits

0x482f,	// (0x00099771) popup_number_entry_window

0xc989,	// (0x000a18cb) bg_popup_call_pane_cp05_ParamLimits

0xc989,	// (0x000a18cb) bg_popup_call_pane_cp05

0xc9a9,	// (0x000a18eb) popup_number_entry_window_t1

0xc9bc,	// (0x000a18fe) popup_number_entry_window_t2

0xc9ce,	// (0x000a1910) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x000a401a) popup_number_entry_window_t

0xc9e0,	// (0x000a1922) text_title_cp2

0xc9f3,	// (0x000a1935) bg_popup_call_pane_cp_ParamLimits

0xc9f3,	// (0x000a1935) bg_popup_call_pane_cp

0xca01,	// (0x000a1943) call_thumbnail_pane

0xca09,	// (0x000a194b) popup_call_audio_in_window_g1_ParamLimits

0xca09,	// (0x000a194b) popup_call_audio_in_window_g1

0xca15,	// (0x000a1957) popup_call_audio_in_window_g2_ParamLimits

0xca15,	// (0x000a1957) popup_call_audio_in_window_g2

0xca21,	// (0x000a1963) popup_call_audio_in_window_g3_ParamLimits

0xca21,	// (0x000a1963) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x000a4023) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x000a4023) popup_call_audio_in_window_g

0xca2d,	// (0x000a196f) popup_call_audio_in_window_t1_ParamLimits

0xca2d,	// (0x000a196f) popup_call_audio_in_window_t1

0xca48,	// (0x000a198a) popup_call_audio_in_window_t2_ParamLimits

0xca48,	// (0x000a198a) popup_call_audio_in_window_t2

0xca63,	// (0x000a19a5) popup_call_audio_in_window_t3_ParamLimits

0xca63,	// (0x000a19a5) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x000a402a) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x000a402a) popup_call_audio_in_window_t

0xc9f3,	// (0x000a1935) bg_popup_call_pane_cp01_ParamLimits

0xc9f3,	// (0x000a1935) bg_popup_call_pane_cp01

0xca01,	// (0x000a1943) call_thumbnail_pane_cp02

0xca76,	// (0x000a19b8) call_type_pane_cp022

0xca7e,	// (0x000a19c0) popup_call_audio_out_window_g1_ParamLimits

0xca7e,	// (0x000a19c0) popup_call_audio_out_window_g1

0xca90,	// (0x000a19d2) popup_call_audio_out_window_g2_ParamLimits

0xca90,	// (0x000a19d2) popup_call_audio_out_window_g2

0xca9c,	// (0x000a19de) popup_call_audio_out_window_g3_ParamLimits

0xca9c,	// (0x000a19de) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x000a4031) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x000a4031) popup_call_audio_out_window_g

0xcaae,	// (0x000a19f0) popup_call_audio_out_window_t1_ParamLimits

0xcaae,	// (0x000a19f0) popup_call_audio_out_window_t1

0xcac6,	// (0x000a1a08) popup_call_audio_out_window_t2_ParamLimits

0xcac6,	// (0x000a1a08) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x000a4038) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x000a4038) popup_call_audio_out_window_t

0xcadb,	// (0x000a1a1d) bg_popup_call_pane_ParamLimits

0xcadb,	// (0x000a1a1d) bg_popup_call_pane

0x0c9c,	// (0x00095bde) call_thumbnail_pane_cp_ParamLimits

0x0c9c,	// (0x00095bde) call_thumbnail_pane_cp

0xcb5f,	// (0x000a1aa1) call_type_pane_cp01_ParamLimits

0xcb5f,	// (0x000a1aa1) call_type_pane_cp01

0xcba3,	// (0x000a1ae5) popup_call_audio_first_window_g1_ParamLimits

0xcba3,	// (0x000a1ae5) popup_call_audio_first_window_g1

0xcbef,	// (0x000a1b31) popup_call_audio_first_window_g2_ParamLimits

0xcbef,	// (0x000a1b31) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x000a403d) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x000a403d) popup_call_audio_first_window_g

0xcc33,	// (0x000a1b75) popup_call_audio_first_window_t1_ParamLimits

0xcc33,	// (0x000a1b75) popup_call_audio_first_window_t1

0xda04,	// (0x000a2946) popup_call_audio_first_window_t4_ParamLimits

0xda04,	// (0x000a2946) popup_call_audio_first_window_t4

0xda90,	// (0x000a29d2) popup_call_audio_first_window_t5_ParamLimits

0xda90,	// (0x000a29d2) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x000a4042) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x000a4042) popup_call_audio_first_window_t

0xdfac,	// (0x000a2eee) bg_popup_call_pane_cp02

0xdfb6,	// (0x000a2ef8) call_type_pane_cp023

0xdfbe,	// (0x000a2f00) popup_call_audio_wait_window_g1

0xdfc6,	// (0x000a2f08) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x000a4049) popup_call_audio_wait_window_g

0xdfce,	// (0x000a2f10) popup_call_audio_wait_window_t3

0xdfdc,	// (0x000a2f1e) bg_popup_call_pane_cp03_ParamLimits

0xdfdc,	// (0x000a2f1e) bg_popup_call_pane_cp03

0xe03c,	// (0x000a2f7e) call_thumbnail_pane_cp011_ParamLimits

0xe03c,	// (0x000a2f7e) call_thumbnail_pane_cp011

0xe048,	// (0x000a2f8a) call_type_pane_cp034_ParamLimits

0xe048,	// (0x000a2f8a) call_type_pane_cp034

0xe084,	// (0x000a2fc6) popup_call_audio_second_window_g1_ParamLimits

0xe084,	// (0x000a2fc6) popup_call_audio_second_window_g1

0xe0c0,	// (0x000a3002) popup_call_audio_second_window_g2_ParamLimits

0xe0c0,	// (0x000a3002) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x000a404e) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x000a404e) popup_call_audio_second_window_g

0xe0fc,	// (0x000a303e) popup_call_audio_second_window_t1_ParamLimits

0xe0fc,	// (0x000a303e) popup_call_audio_second_window_t1

0xe17d,	// (0x000a30bf) popup_call_audio_second_window_t2_ParamLimits

0xe17d,	// (0x000a30bf) popup_call_audio_second_window_t2

0xe1b3,	// (0x000a30f5) popup_call_audio_second_window_t3_ParamLimits

0xe1b3,	// (0x000a30f5) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x000a4053) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x000a4053) popup_call_audio_second_window_t

0xdfac,	// (0x000a2eee) bg_popup_call_pane_cp04

0xe1e9,	// (0x000a312b) list_conf_pane

0xe1f1,	// (0x000a3133) popup_call_audio_conf_window_t1

0xe1ff,	// (0x000a3141) call_thumbnail_pane_g1

0xe207,	// (0x000a3149) bg_pinb_pane_ParamLimits

0xe207,	// (0x000a3149) bg_pinb_pane

0xe215,	// (0x000a3157) find_pinb_pane

0xe21e,	// (0x000a3160) listscroll_pinb_pane_ParamLimits

0xe21e,	// (0x000a3160) listscroll_pinb_pane

0xe22d,	// (0x000a316f) pinb_bg_pane_g1

0x0cc0,	// (0x00095c02) pinb_bg_pane_g2

0x0ccc,	// (0x00095c0e) pinb_bg_pane_g3

0x0cd8,	// (0x00095c1a) pinb_bg_pane_g4

0x0ce4,	// (0x00095c26) pinb_bg_pane_g5

0x0cf0,	// (0x00095c32) pinb_bg_pane_g6

0x0cfb,	// (0x00095c3d) pinb_bg_pane_g7

0x0d06,	// (0x00095c48) pinb_bg_pane_g8

0x0d11,	// (0x00095c53) pinb_bg_pane_g9

0x0d1b,	// (0x00095c5d) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x000a405a) pinb_bg_pane_g

0x0d30,	// (0x00095c72) grid_pinb_pane

0x0d39,	// (0x00095c7b) list_pinb_pane

0x0d42,	// (0x00095c84) scroll_pane_cp01_ParamLimits

0x0d42,	// (0x00095c84) scroll_pane_cp01

0xe23f,	// (0x000a3181) find_pinb_pane_g1_ParamLimits

0xe23f,	// (0x000a3181) find_pinb_pane_g1

0xe257,	// (0x000a3199) find_pinb_pane_t1

0xe269,	// (0x000a31ab) find_pinb_pane_t2

0x0001,

0xf132,	// (0x000a4074) find_pinb_pane_t

0xe27e,	// (0x000a31c0) input_focus_pane_cp01_ParamLimits

0xe27e,	// (0x000a31c0) input_focus_pane_cp01

0x0d54,	// (0x00095c96) cell_pinb_pane_ParamLimits

0x0d54,	// (0x00095c96) cell_pinb_pane

0x0d86,	// (0x00095cc8) cell_pinb_pane_g1_ParamLimits

0x0d86,	// (0x00095cc8) cell_pinb_pane_g1

0x0d96,	// (0x00095cd8) cell_pinb_pane_g2_ParamLimits

0x0d96,	// (0x00095cd8) cell_pinb_pane_g2

0xe28a,	// (0x000a31cc) cell_pinb_pane_g3_ParamLimits

0xe28a,	// (0x000a31cc) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x000a4079) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x000a4079) cell_pinb_pane_g

0xdfac,	// (0x000a2eee) grid_highlight_pane_cp01

0x0da2,	// (0x00095ce4) list_pinb_item_pane_ParamLimits

0x0da2,	// (0x00095ce4) list_pinb_item_pane

0xdfac,	// (0x000a2eee) list_highlight_pane_cp02

0xe296,	// (0x000a31d8) list_pinb_item_pane_g1_ParamLimits

0xe296,	// (0x000a31d8) list_pinb_item_pane_g1

0xe2a3,	// (0x000a31e5) list_pinb_item_pane_g2_ParamLimits

0xe2a3,	// (0x000a31e5) list_pinb_item_pane_g2

0x0db6,	// (0x00095cf8) list_pinb_item_pane_g3_ParamLimits

0x0db6,	// (0x00095cf8) list_pinb_item_pane_g3

0xe2af,	// (0x000a31f1) list_pinb_item_pane_g4_ParamLimits

0xe2af,	// (0x000a31f1) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x000a4080) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x000a4080) list_pinb_item_pane_g

0xe2bb,	// (0x000a31fd) list_pinb_item_pane_t1_ParamLimits

0xe2bb,	// (0x000a31fd) list_pinb_item_pane_t1

0x0de5,	// (0x00095d27) calc_display_pane

0x0e0d,	// (0x00095d4f) calc_paper_pane

0x0e30,	// (0x00095d72) grid_calc_pane

0xdfac,	// (0x000a2eee) bg_list_pane_cp01

0x0e5e,	// (0x00095da0) clock_g1

0x0e66,	// (0x00095da8) clock_g2

0x0001,

0xf147,	// (0x000a4089) clock_g

0x0e6e,	// (0x00095db0) clock_t1_ParamLimits

0x0e6e,	// (0x00095db0) clock_t1

0x0e83,	// (0x00095dc5) clock_t2_ParamLimits

0x0e83,	// (0x00095dc5) clock_t2

0x0e95,	// (0x00095dd7) clock_t3_ParamLimits

0x0e95,	// (0x00095dd7) clock_t3

0x0ea7,	// (0x00095de9) clock_t4_ParamLimits

0x0ea7,	// (0x00095de9) clock_t4

0x0eb9,	// (0x00095dfb) clock_t5_ParamLimits

0x0eb9,	// (0x00095dfb) clock_t5

0x0ece,	// (0x00095e10) clock_t6_ParamLimits

0x0ece,	// (0x00095e10) clock_t6

0x0ee0,	// (0x00095e22) clock_t7_ParamLimits

0x0ee0,	// (0x00095e22) clock_t7

0x0ef2,	// (0x00095e34) clock_t8_ParamLimits

0x0ef2,	// (0x00095e34) clock_t8

0x0f06,	// (0x00095e48) clock_t9_ParamLimits

0x0f06,	// (0x00095e48) clock_t9

0x0008,

0xf14c,	// (0x000a408e) clock_t_ParamLimits

0xf14c,	// (0x000a408e) clock_t

0xe2d2,	// (0x000a3214) popup_clock_analogue_window_cp02

0xe2d2,	// (0x000a3214) popup_clock_digital_window_cp01

0xe2da,	// (0x000a321c) listscroll_help_pane

0xdfac,	// (0x000a2eee) phob_pre_status_pane

0xe2e4,	// (0x000a3226) grid_qdial_pane

0xdfac,	// (0x000a2eee) listscroll_mce_pane

0xe2ee,	// (0x000a3230) bg_notes_pane

0xe2fc,	// (0x000a323e) list_notes_pane

0x0f1a,	// (0x00095e5c) scroll_pane_cp06

0xe30a,	// (0x000a324c) bg_calc_paper_pane

0xa176,	// (0x0009f0b8) list_calc_pane

0xe31e,	// (0x000a3260) bg_calc_display_pane

0x0f2e,	// (0x00095e70) calc_display_pane_t1

0x0f40,	// (0x00095e82) calc_display_pane_t2

0xa190,	// (0x0009f0d2) calc_display_pane_t3

0x0002,

0xf15f,	// (0x000a40a1) calc_display_pane_t

0x0f52,	// (0x00095e94) cell_calc_pane_ParamLimits

0x0f52,	// (0x00095e94) cell_calc_pane

0xe32a,	// (0x000a326c) bg_calc_paper_pane_g1

0xe336,	// (0x000a3278) bg_calc_paper_pane_g2

0xe342,	// (0x000a3284) bg_calc_paper_pane_g3

0xe34e,	// (0x000a3290) bg_calc_paper_pane_g4

0xe35a,	// (0x000a329c) bg_calc_paper_pane_g5

0x0f89,	// (0x00095ecb) bg_calc_paper_pane_g6

0x0f9a,	// (0x00095edc) bg_calc_paper_pane_g7

0x0fab,	// (0x00095eed) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x000a40a8) bg_calc_paper_pane_g

0x0fbe,	// (0x00095f00) calc_bg_paper_pane_g9

0x0fd1,	// (0x00095f13) list_calc_item_pane_ParamLimits

0x0fd1,	// (0x00095f13) list_calc_item_pane

0xe366,	// (0x000a32a8) list_calc_item_pane_g1

0xa1a2,	// (0x0009f0e4) list_calc_item_pane_t1_ParamLimits

0xa1a2,	// (0x0009f0e4) list_calc_item_pane_t1

0x0fe9,	// (0x00095f2b) list_calc_item_pane_t2_ParamLimits

0x0fe9,	// (0x00095f2b) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x000a40b9) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x000a40b9) list_calc_item_pane_t

0xe373,	// (0x000a32b5) cell_calc_pane_g1

0xe37d,	// (0x000a32bf) grid_highlight_pane_cp02

0xe39f,	// (0x000a32e1) bg_calc_display_pane_g1

0xa1b4,	// (0x0009f0f6) bg_calc_display_pane_g2

0xe3a8,	// (0x000a32ea) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x000a40c3) bg_calc_display_pane_g

0x101b,	// (0x00095f5d) cell_qdial_pane_ParamLimits

0x101b,	// (0x00095f5d) cell_qdial_pane

0x102f,	// (0x00095f71) cell_qdial_pane_g1_ParamLimits

0x102f,	// (0x00095f71) cell_qdial_pane_g1

0x1045,	// (0x00095f87) cell_qdial_pane_g2_ParamLimits

0x1045,	// (0x00095f87) cell_qdial_pane_g2

0xe3b1,	// (0x000a32f3) cell_qdial_pane_g3_ParamLimits

0xe3b1,	// (0x000a32f3) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x000a40ca) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x000a40ca) cell_qdial_pane_g

0x106c,	// (0x00095fae) cell_qdial_pane_t1_ParamLimits

0x106c,	// (0x00095fae) cell_qdial_pane_t1

0x1084,	// (0x00095fc6) cell_qdial_pane_t2_ParamLimits

0x1084,	// (0x00095fc6) cell_qdial_pane_t2

0x1097,	// (0x00095fd9) cell_qdial_pane_t3_ParamLimits

0x1097,	// (0x00095fd9) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x000a40d3) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x000a40d3) cell_qdial_pane_t

0xdfac,	// (0x000a2eee) grid_highlight_pane_cp04

0xe3bd,	// (0x000a32ff) thumbnail_qdial_pane_ParamLimits

0xe3bd,	// (0x000a32ff) thumbnail_qdial_pane

0xe419,	// (0x000a335b) list_help_pane

0xe422,	// (0x000a3364) scroll_pane_cp02

0x10aa,	// (0x00095fec) help_list_pane_t1_ParamLimits

0x10aa,	// (0x00095fec) help_list_pane_t1

0xa1be,	// (0x0009f100) bg_notes_pane_g2

0xa1c6,	// (0x0009f108) bg_notes_pane_g3

0xa1ce,	// (0x0009f110) notes_bg_pane_g1

0xa1d6,	// (0x0009f118) notes_bg_pane_g4

0xa1de,	// (0x0009f120) notes_bg_pane_g5

0xa1e6,	// (0x0009f128) notes_bg_pane_g6

0xa1ee,	// (0x0009f130) notes_bg_pane_g7

0xa1f6,	// (0x0009f138) notes_bg_pane_g8

0xa1fe,	// (0x0009f140) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x000a40f1) notes_bg_pane_g

0x10ca,	// (0x0009600c) list_notes_text_pane_ParamLimits

0x10ca,	// (0x0009600c) list_notes_text_pane

0xe42b,	// (0x000a336d) list_notes_text_pane_g1

0x10e1,	// (0x00096023) list_notes_text_pane_t1

0xe31e,	// (0x000a3260) listscroll_cale_week_pane

0x110c,	// (0x0009604e) bg_cale_heading_pane

0xe445,	// (0x000a3387) bg_cale_pane_cp01

0x1124,	// (0x00096066) cale_week_corner_pane

0x1135,	// (0x00096077) cale_week_day_heading_pane

0x114d,	// (0x0009608f) cale_week_scroll_pane_g1

0x1162,	// (0x000960a4) cale_week_scroll_pane_g2

0x1173,	// (0x000960b5) cale_week_scroll_pane_g3

0x1184,	// (0x000960c6) cale_week_scroll_pane_g4

0x1195,	// (0x000960d7) cale_week_scroll_pane_g5

0x11a8,	// (0x000960ea) cale_week_scroll_pane_g6

0x11bb,	// (0x000960fd) cale_week_scroll_pane_g7

0x11ce,	// (0x00096110) cale_week_scroll_pane_g8

0x11e1,	// (0x00096123) cale_week_scroll_pane_g9

0x11f2,	// (0x00096134) cale_week_scroll_pane_g10

0x1203,	// (0x00096145) cale_week_scroll_pane_g11

0x1214,	// (0x00096156) cale_week_scroll_pane_g12

0x1225,	// (0x00096167) cale_week_scroll_pane_g13

0x1236,	// (0x00096178) cale_week_scroll_pane_g14

0x1247,	// (0x00096189) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x000a4100) cale_week_scroll_pane_g

0x125c,	// (0x0009619e) cale_week_time_pane

0x126f,	// (0x000961b1) grid_cale_week_pane

0x1284,	// (0x000961c6) scroll_pane_cp08

0x129e,	// (0x000961e0) cell_cale_week_pane_ParamLimits

0x129e,	// (0x000961e0) cell_cale_week_pane

0x12de,	// (0x00096220) cale_week_day_heading_pane_t1

0x12f2,	// (0x00096234) cale_week_day_heading_pane_t2

0x1306,	// (0x00096248) cale_week_day_heading_pane_t3

0x131a,	// (0x0009625c) cale_week_day_heading_pane_t4

0x132e,	// (0x00096270) cale_week_day_heading_pane_t5

0x1342,	// (0x00096284) cale_week_day_heading_pane_t6

0x1358,	// (0x0009629a) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x000a411f) cale_week_day_heading_pane_t

0xe470,	// (0x000a33b2) bg_cale_side_pane

0x136c,	// (0x000962ae) cale_week_time_pane_t1

0x1384,	// (0x000962c6) cale_week_time_pane_t2

0x139c,	// (0x000962de) cale_week_time_pane_t3

0x13b4,	// (0x000962f6) cale_week_time_pane_t4

0x13cc,	// (0x0009630e) cale_week_time_pane_t5

0x13e4,	// (0x00096326) cale_week_time_pane_t6

0x13fc,	// (0x0009633e) cale_week_time_pane_t7

0x1414,	// (0x00096356) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x000a412e) cale_week_time_pane_t

0x142c,	// (0x0009636e) cell_cale_week_pane_g2

0x1445,	// (0x00096387) cell_cale_week_pane_g3_ParamLimits

0x1445,	// (0x00096387) cell_cale_week_pane_g3

0xe47e,	// (0x000a33c0) grid_highlight_pane_cp07

0xe486,	// (0x000a33c8) listscroll_gms_pane

0xe490,	// (0x000a33d2) grid_gms_pane

0xe499,	// (0x000a33db) listscroll_gms_pane_g1

0xe4a1,	// (0x000a33e3) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x000a413f) listscroll_gms_pane_g

0x145d,	// (0x0009639f) scroll_pane_cp010

0x1468,	// (0x000963aa) cell_gms_pane_ParamLimits

0x1468,	// (0x000963aa) cell_gms_pane

0x147a,	// (0x000963bc) cell_gms_pane_g1

0xe4a9,	// (0x000a33eb) cell_gms_pane_g2

0xe42b,	// (0x000a336d) cell_gms_pane_g3

0xe4b1,	// (0x000a33f3) cell_gms_pane_g4

0x0003,

0xf202,	// (0x000a4144) cell_gms_pane_g

0xe4ba,	// (0x000a33fc) grid_highlight_pane_cp09

0x464c,	// (0x0009958e) phob_pre_status_pane_g1

0x4654,	// (0x00099596) phob_pre_status_pane_g2

0x465c,	// (0x0009959e) phob_pre_status_pane_g3

0x4664,	// (0x000995a6) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x000a4533) phob_pre_status_pane_g

0x4676,	// (0x000995b8) phob_pre_status_pane_t1

0x4684,	// (0x000995c6) phob_pre_status_pane_t2

0x4694,	// (0x000995d6) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x000a453e) phob_pre_status_pane_t

0xdfac,	// (0x000a2eee) bg_list_pane_cp05

0x1482,	// (0x000963c4) grid_vorec_pane

0xa20e,	// (0x0009f150) vorec_t1

0xa21c,	// (0x0009f15e) vorec_t2

0xa22a,	// (0x0009f16c) vorec_t3

0xa238,	// (0x0009f17a) vorec_t4

0xa246,	// (0x0009f188) vorec_t5

0xa254,	// (0x0009f196) vorec_t6

0x0006,

0xf20b,	// (0x000a414d) vorec_t

0xa270,	// (0x0009f1b2) wait_bar_pane_cp01

0xe4c2,	// (0x000a3404) cell_vorec_pane_ParamLimits

0xe4c2,	// (0x000a3404) cell_vorec_pane

0xe4d5,	// (0x000a3417) cell_vorec_pane_g1

0xdfac,	// (0x000a2eee) grid_highlight_pane_cp05

0x14a4,	// (0x000963e6) cams_zoom_pane

0x14b3,	// (0x000963f5) image_vga_pane

0x14cd,	// (0x0009640f) main_camera_pane_g1

0x14df,	// (0x00096421) main_camera_pane_g2

0x14f1,	// (0x00096433) main_camera_pane_g3

0x1503,	// (0x00096445) main_camera_pane_g4

0x1515,	// (0x00096457) main_camera_pane_g5

0x1527,	// (0x00096469) main_camera_pane_g6

0x1539,	// (0x0009647b) main_camera_pane_g7

0x0007,

0xf21a,	// (0x000a415c) main_camera_pane_g

0x154b,	// (0x0009648d) main_camera_pane_t1

0x1561,	// (0x000964a3) main_camera_pane_t2

0x0001,

0xf22b,	// (0x000a416d) main_camera_pane_t

0x159d,	// (0x000964df) cams_zoom_pane_cp_ParamLimits

0x159d,	// (0x000964df) cams_zoom_pane_cp

0x15c5,	// (0x00096507) image_cif_pane_ParamLimits

0x15c5,	// (0x00096507) image_cif_pane

0x1600,	// (0x00096542) image_subqcif_pane

0x1608,	// (0x0009654a) main_video_pane_g1_ParamLimits

0x1608,	// (0x0009654a) main_video_pane_g1

0x162c,	// (0x0009656e) main_video_pane_g2_ParamLimits

0x162c,	// (0x0009656e) main_video_pane_g2

0x1662,	// (0x000965a4) main_video_pane_g3_ParamLimits

0x1662,	// (0x000965a4) main_video_pane_g3

0x1692,	// (0x000965d4) main_video_pane_g4_ParamLimits

0x1692,	// (0x000965d4) main_video_pane_g4

0x16c2,	// (0x00096604) main_video_pane_g5_ParamLimits

0x16c2,	// (0x00096604) main_video_pane_g5

0xe4eb,	// (0x000a342d) main_video_pane_g6_ParamLimits

0xe4eb,	// (0x000a342d) main_video_pane_g6

0x0006,

0xf230,	// (0x000a4172) main_video_pane_g_ParamLimits

0xf230,	// (0x000a4172) main_video_pane_g

0x16ed,	// (0x0009662f) main_video_pane_t1_ParamLimits

0x16ed,	// (0x0009662f) main_video_pane_t1

0xe505,	// (0x000a3447) cams_zoom_pane_g1

0xe50e,	// (0x000a3450) cams_zoom_pane_g2

0xe517,	// (0x000a3459) cams_zoom_pane_g3

0xe520,	// (0x000a3462) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x000a4181) cams_zoom_pane_g

0x174a,	// (0x0009668c) grid_cams_pane

0x1764,	// (0x000966a6) linegrid_cams_pane

0x1777,	// (0x000966b9) cell_cams_pane_ParamLimits

0x1777,	// (0x000966b9) cell_cams_pane

0xe529,	// (0x000a346b) cams_burst_image_pane

0xe531,	// (0x000a3473) cell_cams_pane_g1

0xdfac,	// (0x000a2eee) grid_highlight_pane_cp03

0xe373,	// (0x000a32b5) mp_bg_pane_g1

0xdfac,	// (0x000a2eee) bg_list_pane_cp03

0xa557,	// (0x0009f499) bg_mp_pane

0xa55f,	// (0x0009f4a1) grid_mp_pane

0xa567,	// (0x0009f4a9) media_player_g1

0xa56f,	// (0x0009f4b1) media_player_t1

0xa57d,	// (0x0009f4bf) media_player_t2

0xa58b,	// (0x0009f4cd) media_player_t3

0xa599,	// (0x0009f4db) media_player_t4

0xa5a7,	// (0x0009f4e9) media_player_t5

0xa5b5,	// (0x0009f4f7) media_player_t6

0xa5c3,	// (0x0009f505) media_player_t7

0x0006,

0xf5db,	// (0x000a451d) media_player_t

0xa5d1,	// (0x0009f513) wait_bar_pane_cp02

0xf5c0,	// (0x000a4502) main_usb_pane_t

0x4643,	// (0x00099585) cell_mp_pane

0xe373,	// (0x000a32b5) cell_mp_pane_g1

0xdfac,	// (0x000a2eee) grid_highlight_pane_cp06

0xe5f7,	// (0x000a3539) grid_skin_colour_pane

0xe5ff,	// (0x000a3541) list_highlight_pane_cp03

0x17e9,	// (0x0009672b) skin_g1

0xe607,	// (0x000a3549) skin_t1

0xe616,	// (0x000a3558) skin_t2

0x0001,

0xf274,	// (0x000a41b6) skin_t

0x17f1,	// (0x00096733) cell_skin_colour_pane_ParamLimits

0x17f1,	// (0x00096733) cell_skin_colour_pane

0xe624,	// (0x000a3566) cell_skin_colour_pane_g1

0x186a,	// (0x000967ac) call_video_g1_ParamLimits

0x186a,	// (0x000967ac) call_video_g1

0x1886,	// (0x000967c8) call_video_g2_ParamLimits

0x1886,	// (0x000967c8) call_video_g2

0x0001,

0xf279,	// (0x000a41bb) call_video_g_ParamLimits

0xf279,	// (0x000a41bb) call_video_g

0x18d8,	// (0x0009681a) call_video_uplink_pane_cp1_ParamLimits

0x18d8,	// (0x0009681a) call_video_uplink_pane_cp1

0xe636,	// (0x000a3578) call_video_uplink_pane_cp2

0x1977,	// (0x000968b9) video_down_crop_pane_ParamLimits

0x1977,	// (0x000968b9) video_down_crop_pane

0x1a60,	// (0x000969a2) video_down_pane_ParamLimits

0x1a60,	// (0x000969a2) video_down_pane

0xe63e,	// (0x000a3580) video_down_subqcif_pane_ParamLimits

0xe63e,	// (0x000a3580) video_down_subqcif_pane

0xe656,	// (0x000a3598) video_down_subqcif_pane_cp_ParamLimits

0xe656,	// (0x000a3598) video_down_subqcif_pane_cp

0xe67c,	// (0x000a35be) im_reading_pane_ParamLimits

0xe67c,	// (0x000a35be) im_reading_pane

0x1b6e,	// (0x00096ab0) im_writing_pane_ParamLimits

0x1b6e,	// (0x00096ab0) im_writing_pane

0x1b84,	// (0x00096ac6) im_reading_pane_t1

0xe696,	// (0x000a35d8) list_im_pane

0xe6a7,	// (0x000a35e9) scroll_pane_cp07

0x1bc0,	// (0x00096b02) im_writing_pane_t1_ParamLimits

0x1bc0,	// (0x00096b02) im_writing_pane_t1

0xe6c0,	// (0x000a3602) im_writing_pane_t2_ParamLimits

0xe6c0,	// (0x000a3602) im_writing_pane_t2

0x0001,

0xf283,	// (0x000a41c5) im_writing_pane_t_ParamLimits

0xf283,	// (0x000a41c5) im_writing_pane_t

0xdfac,	// (0x000a2eee) input_focus_pane_cp04

0xdfac,	// (0x000a2eee) input_focus_pane_cp05

0x1bd5,	// (0x00096b17) list_im_single_pane_ParamLimits

0x1bd5,	// (0x00096b17) list_im_single_pane

0x1beb,	// (0x00096b2d) list_single_im_pane_t1

0x4603,	// (0x00099545) blid_accuracy_pane

0x460b,	// (0x0009954d) blid_compass_pane

0x4615,	// (0x00099557) main_location_t1

0x4625,	// (0x00099567) main_location_t2

0x4635,	// (0x00099577) main_location_t3

0x0002,

0xf5ea,	// (0x000a452c) main_location_t

0xdfac,	// (0x000a2eee) aid_levels_location

0xe373,	// (0x000a32b5) blid_accuracy_pane_g1

0xe373,	// (0x000a32b5) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x000a4227) blid_accuracy_pane_g

0xe708,	// (0x000a364a) wml_content_pane

0xe746,	// (0x000a3688) wml_button_pane_ParamLimits

0xe746,	// (0x000a3688) wml_button_pane

0x1bfa,	// (0x00096b3c) wml_list_single_large_pane_ParamLimits

0x1bfa,	// (0x00096b3c) wml_list_single_large_pane

0x1c11,	// (0x00096b53) wml_list_single_medium_pane_ParamLimits

0x1c11,	// (0x00096b53) wml_list_single_medium_pane

0x1c29,	// (0x00096b6b) wml_list_single_small_pane_ParamLimits

0x1c29,	// (0x00096b6b) wml_list_single_small_pane

0xe75a,	// (0x000a369c) wml_selection_box_pane_ParamLimits

0xe75a,	// (0x000a369c) wml_selection_box_pane

0xe76d,	// (0x000a36af) wml_list_single_pane_t1

0xe77c,	// (0x000a36be) wml_list_single_medium_pane_t1

0xe78b,	// (0x000a36cd) wml_list_single_large_pane_t1

0xe79a,	// (0x000a36dc) input_focus_pane_cp02_ParamLimits

0xe79a,	// (0x000a36dc) input_focus_pane_cp02

0xe7ad,	// (0x000a36ef) wml_selection_box_pane_g1

0xe7b6,	// (0x000a36f8) wml_selection_box_pane_t1_ParamLimits

0xe7b6,	// (0x000a36f8) wml_selection_box_pane_t1

0xe207,	// (0x000a3149) bg_wml_button_pane_ParamLimits

0xe207,	// (0x000a3149) bg_wml_button_pane

0xe7ce,	// (0x000a3710) wml_button_pane_g1

0xe7d6,	// (0x000a3718) wml_button_pane_t1

0xe7ce,	// (0x000a3710) wml_button_bg_pane_g1

0xe7e6,	// (0x000a3728) wml_button_bg_pane_g2

0xe7ee,	// (0x000a3730) wml_button_bg_pane_g3

0xe7f6,	// (0x000a3738) wml_button_bg_pane_g4

0xe7fe,	// (0x000a3740) wml_button_bg_pane_g5

0xe806,	// (0x000a3748) wml_button_bg_pane_g6

0xe80e,	// (0x000a3750) wml_button_bg_pane_g7

0xe816,	// (0x000a3758) wml_button_bg_pane_g8

0xe81e,	// (0x000a3760) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x000a41ca) wml_button_bg_pane_g

0x1c47,	// (0x00096b89) bg_list_pane_cp02

0xe826,	// (0x000a3768) mce_header_pane_ParamLimits

0xe826,	// (0x000a3768) mce_header_pane

0xe83c,	// (0x000a377e) mce_icon_pane

0xe83c,	// (0x000a377e) mce_image_pane

0xe845,	// (0x000a3787) mce_text_pane_ParamLimits

0xe845,	// (0x000a3787) mce_text_pane

0x1c4f,	// (0x00096b91) scroll_pane_cp03

0xe73e,	// (0x000a3680) scroll_pane_cp04

0xe858,	// (0x000a379a) scroll_pane_cp05_ParamLimits

0xe858,	// (0x000a379a) scroll_pane_cp05

0x1c59,	// (0x00096b9b) mce_header_field_pane_ParamLimits

0x1c59,	// (0x00096b9b) mce_header_field_pane

0x1c70,	// (0x00096bb2) mce_header_field_pane_2_ParamLimits

0x1c70,	// (0x00096bb2) mce_header_field_pane_2

0x1c86,	// (0x00096bc8) mce_header_field_pane_3

0x1c8e,	// (0x00096bd0) list_single_mce_message_pane_ParamLimits

0x1c8e,	// (0x00096bd0) list_single_mce_message_pane

0x1ca6,	// (0x00096be8) list_single_mce_smart_pane_ParamLimits

0x1ca6,	// (0x00096be8) list_single_mce_smart_pane

0xe864,	// (0x000a37a6) input_focus_pane_cp03

0xe86d,	// (0x000a37af) list_header_data_pane

0x1cc9,	// (0x00096c0b) mce_header_field_pane_t1

0x1cd9,	// (0x00096c1b) list_single_mce_header_pane_ParamLimits

0x1cd9,	// (0x00096c1b) list_single_mce_header_pane

0xe875,	// (0x000a37b7) list_single_mce_header_pane_t1

0xe884,	// (0x000a37c6) list_single_mce_message_pane_g1

0xe88c,	// (0x000a37ce) list_single_mce_message_pane_t1

0x1d0b,	// (0x00096c4d) bg_cale_heading_pane_cp01_ParamLimits

0x1d0b,	// (0x00096c4d) bg_cale_heading_pane_cp01

0xe89a,	// (0x000a37dc) bg_cale_pane_cp02_ParamLimits

0xe89a,	// (0x000a37dc) bg_cale_pane_cp02

0x1d2e,	// (0x00096c70) cale_month_corner_pane

0x1d44,	// (0x00096c86) cale_month_day_heading_pane_ParamLimits

0x1d44,	// (0x00096c86) cale_month_day_heading_pane

0x1d77,	// (0x00096cb9) cale_month_pane_g1_ParamLimits

0x1d77,	// (0x00096cb9) cale_month_pane_g1

0x1d93,	// (0x00096cd5) cale_month_pane_g2_ParamLimits

0x1d93,	// (0x00096cd5) cale_month_pane_g2

0x1dae,	// (0x00096cf0) cale_month_pane_g3_ParamLimits

0x1dae,	// (0x00096cf0) cale_month_pane_g3

0x1dda,	// (0x00096d1c) cale_month_pane_g4_ParamLimits

0x1dda,	// (0x00096d1c) cale_month_pane_g4

0x1e06,	// (0x00096d48) cale_month_pane_g5_ParamLimits

0x1e06,	// (0x00096d48) cale_month_pane_g5

0x1e3a,	// (0x00096d7c) cale_month_pane_g6_ParamLimits

0x1e3a,	// (0x00096d7c) cale_month_pane_g6

0x1e76,	// (0x00096db8) cale_month_pane_g7_ParamLimits

0x1e76,	// (0x00096db8) cale_month_pane_g7

0x1eb2,	// (0x00096df4) cale_month_pane_g8_ParamLimits

0x1eb2,	// (0x00096df4) cale_month_pane_g8

0x1eee,	// (0x00096e30) cale_month_pane_g9_ParamLimits

0x1eee,	// (0x00096e30) cale_month_pane_g9

0x1f28,	// (0x00096e6a) cale_month_pane_g10_ParamLimits

0x1f28,	// (0x00096e6a) cale_month_pane_g10

0x1f62,	// (0x00096ea4) cale_month_pane_g11_ParamLimits

0x1f62,	// (0x00096ea4) cale_month_pane_g11

0x1f9c,	// (0x00096ede) cale_month_pane_g12_ParamLimits

0x1f9c,	// (0x00096ede) cale_month_pane_g12

0x1fd6,	// (0x00096f18) cale_month_pane_g13_ParamLimits

0x1fd6,	// (0x00096f18) cale_month_pane_g13

0x000c,

0xf29b,	// (0x000a41dd) cale_month_pane_g_ParamLimits

0xf29b,	// (0x000a41dd) cale_month_pane_g

0x2010,	// (0x00096f52) cale_month_week_pane

0x2023,	// (0x00096f65) grid_cale_month_pane_ParamLimits

0x2023,	// (0x00096f65) grid_cale_month_pane

0x2051,	// (0x00096f93) cale_month_day_heading_pane_t1

0x20af,	// (0x00096ff1) cale_month_day_heading_pane_t2

0x2114,	// (0x00097056) cale_month_day_heading_pane_t3

0x2179,	// (0x000970bb) cale_month_day_heading_pane_t4

0x21de,	// (0x00097120) cale_month_day_heading_pane_t5

0x2253,	// (0x00097195) cale_month_day_heading_pane_t6

0x22c8,	// (0x0009720a) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x000a41f8) cale_month_day_heading_pane_t

0xe470,	// (0x000a33b2) bg_cale_side_pane_cp01

0x233d,	// (0x0009727f) cale_month_week_pane_t1

0x2354,	// (0x00097296) cale_month_week_pane_t2

0x236b,	// (0x000972ad) cale_month_week_pane_t3

0x2382,	// (0x000972c4) cale_month_week_pane_t4

0x2399,	// (0x000972db) cale_month_week_pane_t5

0x23b0,	// (0x000972f2) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x000a4207) cale_month_week_pane_t

0x23c7,	// (0x00097309) cell_cale_month_pane_ParamLimits

0x23c7,	// (0x00097309) cell_cale_month_pane

0xa278,	// (0x0009f1ba) cell_cale_month_pane_g1

0x249d,	// (0x000973df) cell_cale_month_pane_t1_ParamLimits

0x249d,	// (0x000973df) cell_cale_month_pane_t1

0xe47e,	// (0x000a33c0) grid_highlight_pane_cp08

0xe373,	// (0x000a32b5) main_smil_g1

0x24b9,	// (0x000973fb) smil_status_pane

0xe8f9,	// (0x000a383b) smil_text_pane

0xa46f,	// (0x0009f3b1) bg_popup_call3_rect_pane_g8

0xa477,	// (0x0009f3b9) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x000a44c0) bg_popup_call3_rect_pane_g

0xa6f9,	// (0x0009f63b) smil_status_volume_pane_g1

0xe903,	// (0x000a3845) smil_status_pane_t1

0xa72c,	// (0x0009f66e) volume_smil_pane

0xe91a,	// (0x000a385c) list_smil_text_pane

0x24ce,	// (0x00097410) scroll_pane_cp011

0x24d9,	// (0x0009741b) smil_text_list_pane_t1_ParamLimits

0x24d9,	// (0x0009741b) smil_text_list_pane_t1

0xa284,	// (0x0009f1c6) aid_volume_smil_ParamLimits

0xa284,	// (0x0009f1c6) aid_volume_smil

0xe373,	// (0x000a32b5) smil_volume_pane_g1

0xe373,	// (0x000a32b5) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x000a4227) smil_volume_pane_g

0xe31e,	// (0x000a3260) listscroll_cale_day_pane

0xe924,	// (0x000a3866) bg_cale_pane

0xe93c,	// (0x000a387e) list_cale_pane

0xe94d,	// (0x000a388f) scroll_pane_cp09

0xe95e,	// (0x000a38a0) cale_bg_pane_g1

0xe966,	// (0x000a38a8) cale_bg_pane_g2

0xe96e,	// (0x000a38b0) cale_bg_pane_g3

0xe976,	// (0x000a38b8) cale_bg_pane_g4

0xe97e,	// (0x000a38c0) cale_bg_pane_g5

0xe986,	// (0x000a38c8) cale_bg_pane_g6

0xe98e,	// (0x000a38d0) cale_bg_pane_g7

0xe996,	// (0x000a38d8) cale_bg_pane_g8

0xe99e,	// (0x000a38e0) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x000a422c) cale_bg_pane_g

0x252d,	// (0x0009746f) list_cale_time_pane_ParamLimits

0x252d,	// (0x0009746f) list_cale_time_pane

0x2542,	// (0x00097484) list_cale_time_pane_g1_ParamLimits

0x2542,	// (0x00097484) list_cale_time_pane_g1

0xe9a6,	// (0x000a38e8) list_cale_time_pane_g2_ParamLimits

0xe9a6,	// (0x000a38e8) list_cale_time_pane_g2

0x254e,	// (0x00097490) list_cale_time_pane_g3_ParamLimits

0x254e,	// (0x00097490) list_cale_time_pane_g3

0x256a,	// (0x000974ac) list_cale_time_pane_g4_ParamLimits

0x256a,	// (0x000974ac) list_cale_time_pane_g4

0x2578,	// (0x000974ba) list_cale_time_pane_g5_ParamLimits

0x2578,	// (0x000974ba) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x000a423f) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x000a423f) list_cale_time_pane_g

0x2586,	// (0x000974c8) list_cale_time_pane_t1_ParamLimits

0x2586,	// (0x000974c8) list_cale_time_pane_t1

0x25ae,	// (0x000974f0) list_cale_time_pane_t2_ParamLimits

0x25ae,	// (0x000974f0) list_cale_time_pane_t2

0x28db,	// (0x0009781d) aid_blid_cardinal_pane

0x2919,	// (0x0009785b) compass_pane_t4

0x25d6,	// (0x00097518) list_cale_time_pane_t4_ParamLimits

0x25d6,	// (0x00097518) list_cale_time_pane_t4

0x2927,	// (0x00097869) compass_pane_t5

0x2935,	// (0x00097877) compass_pane_t6

0x2943,	// (0x00097885) compass_pane_t7

0xee57,	// (0x000a3d99) navi_pane_cc_t1

0xefac,	// (0x000a3eee) aid_phob_thumbnail_center_pane

0x3076,	// (0x00097fb8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x000a424c) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x000a424c) list_cale_time_pane_t

0xc9f3,	// (0x000a1935) bg_popup_window_pane_cp02_ParamLimits

0xc9f3,	// (0x000a1935) bg_popup_window_pane_cp02

0xe9c0,	// (0x000a3902) heading_pane_cp01_ParamLimits

0xe9c0,	// (0x000a3902) heading_pane_cp01

0xe9cc,	// (0x000a390e) loc_req_pane_ParamLimits

0xe9cc,	// (0x000a390e) loc_req_pane

0xe9dc,	// (0x000a391e) loc_type_pane_ParamLimits

0xe9dc,	// (0x000a391e) loc_type_pane

0xe9ee,	// (0x000a3930) loc_type_pane_t1_ParamLimits

0xe9ee,	// (0x000a3930) loc_type_pane_t1

0xea00,	// (0x000a3942) loc_type_pane_t2_ParamLimits

0xea00,	// (0x000a3942) loc_type_pane_t2

0xea12,	// (0x000a3954) loc_type_pane_t3_ParamLimits

0xea12,	// (0x000a3954) loc_type_pane_t3

0x0002,

0xf311,	// (0x000a4253) loc_type_pane_t_ParamLimits

0xf311,	// (0x000a4253) loc_type_pane_t

0xea24,	// (0x000a3966) list_loc_req_pane

0xea2e,	// (0x000a3970) scroll_pane_cp012

0x25fe,	// (0x00097540) list_single_loc_request_popup_menu_pane_ParamLimits

0x25fe,	// (0x00097540) list_single_loc_request_popup_menu_pane

0xea39,	// (0x000a397b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xea39,	// (0x000a397b) list_single_loc_request_popup_menu_pane_g1

0xea45,	// (0x000a3987) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xea45,	// (0x000a3987) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x000a425a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x000a425a) list_single_loc_request_popup_menu_pane_g

0xea51,	// (0x000a3993) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xea51,	// (0x000a3993) list_single_loc_request_popup_menu_pane_t1

0xe207,	// (0x000a3149) bg_popup_window_pane_cp03_ParamLimits

0xe207,	// (0x000a3149) bg_popup_window_pane_cp03

0xeaaa,	// (0x000a39ec) heading_loc_req_pane_ParamLimits

0xeaaa,	// (0x000a39ec) heading_loc_req_pane

0x260b,	// (0x0009754d) popup_dyc_status_message_window_g1_ParamLimits

0x260b,	// (0x0009754d) popup_dyc_status_message_window_g1

0x261f,	// (0x00097561) popup_dyc_status_message_window_t1_ParamLimits

0x261f,	// (0x00097561) popup_dyc_status_message_window_t1

0x2634,	// (0x00097576) popup_dyc_status_message_window_t2_ParamLimits

0x2634,	// (0x00097576) popup_dyc_status_message_window_t2

0x2649,	// (0x0009758b) popup_dyc_status_message_window_t3_ParamLimits

0x2649,	// (0x0009758b) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x000a425f) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x000a425f) popup_dyc_status_message_window_t

0xdfac,	// (0x000a2eee) bg_heading_pane_cp01

0xea67,	// (0x000a39a9) heading_loc_req_pane_g1

0xea6f,	// (0x000a39b1) heading_loc_req_pane_g2

0xea77,	// (0x000a39b9) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x000a4266) heading_loc_req_pane_g

0xea7f,	// (0x000a39c1) heading_loc_req_pane_t1

0xeb11,	// (0x000a3a53) bg_popup_sub_pane_cp01_ParamLimits

0xeb11,	// (0x000a3a53) bg_popup_sub_pane_cp01

0xeb1f,	// (0x000a3a61) popup_cale_events_window_g1_ParamLimits

0xeb1f,	// (0x000a3a61) popup_cale_events_window_g1

0xeb3f,	// (0x000a3a81) popup_cale_events_window_g2_ParamLimits

0xeb3f,	// (0x000a3a81) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x000a429a) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x000a429a) popup_cale_events_window_g

0xeb5f,	// (0x000a3aa1) popup_cale_events_window_t1_ParamLimits

0xeb5f,	// (0x000a3aa1) popup_cale_events_window_t1

0xeb71,	// (0x000a3ab3) popup_cale_events_window_t2_ParamLimits

0xeb71,	// (0x000a3ab3) popup_cale_events_window_t2

0xebaf,	// (0x000a3af1) popup_cale_events_window_t3_ParamLimits

0xebaf,	// (0x000a3af1) popup_cale_events_window_t3

0xebe9,	// (0x000a3b2b) popup_cale_events_window_t4_ParamLimits

0xebe9,	// (0x000a3b2b) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x000a429f) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x000a429f) popup_cale_events_window_t

0x26d7,	// (0x00097619) call_type_pane

0x26e7,	// (0x00097629) popup_call_status_window_g1

0x26fb,	// (0x0009763d) popup_call_status_window_g2

0x270f,	// (0x00097651) popup_call_status_window_g3

0x0002,

0xf366,	// (0x000a42a8) popup_call_status_window_g

0xec1f,	// (0x000a3b61) call_type_pane_g1

0xec28,	// (0x000a3b6a) call_type_pane_g2

0x0001,

0xf36d,	// (0x000a42af) call_type_pane_g

0xdfac,	// (0x000a2eee) bg_popup_sub_pane_cp02

0xec31,	// (0x000a3b73) listscroll_popup_wml_pane

0xec39,	// (0x000a3b7b) list_wml_pane

0xec43,	// (0x000a3b85) scroll_pane_cp013

0xec4e,	// (0x000a3b90) list_single_graphic_popup_wml_pane_ParamLimits

0xec4e,	// (0x000a3b90) list_single_graphic_popup_wml_pane

0xe373,	// (0x000a32b5) list_single_graphic_popup_wml_pane_g1

0xec62,	// (0x000a3ba4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x000a42b4) list_single_graphic_popup_wml_pane_g

0xec6a,	// (0x000a3bac) list_single_graphic_popup_wml_pane_t1

0xec80,	// (0x000a3bc2) aid_call_pane

0xe1ff,	// (0x000a3141) popup_clock_analogue_window_g1

0xe1ff,	// (0x000a3141) popup_clock_analogue_window_g2

0xa2a6,	// (0x0009f1e8) popup_clock_analogue_window_g3

0xa2a6,	// (0x0009f1e8) popup_clock_analogue_window_g4

0xe373,	// (0x000a32b5) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x000a42b9) popup_clock_analogue_window_g

0xa2ae,	// (0x0009f1f0) popup_clock_analogue_window_t1

0xa2bc,	// (0x0009f1fe) clock_digital_number_pane_ParamLimits

0xa2bc,	// (0x0009f1fe) clock_digital_number_pane

0xa2c8,	// (0x0009f20a) clock_digital_number_pane_cp02_ParamLimits

0xa2c8,	// (0x0009f20a) clock_digital_number_pane_cp02

0xa2d4,	// (0x0009f216) clock_digital_number_pane_cp03_ParamLimits

0xa2d4,	// (0x0009f216) clock_digital_number_pane_cp03

0xa2e0,	// (0x0009f222) clock_digital_number_pane_cp04_ParamLimits

0xa2e0,	// (0x0009f222) clock_digital_number_pane_cp04

0xa2ec,	// (0x0009f22e) clock_digital_separator_pane_ParamLimits

0xa2ec,	// (0x0009f22e) clock_digital_separator_pane

0xa2f8,	// (0x0009f23a) popup_clock_digital_window_t1

0xe373,	// (0x000a32b5) clock_digital_number_pane_g1

0xe373,	// (0x000a32b5) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x000a4227) clock_digital_number_pane_g

0xe373,	// (0x000a32b5) clock_digital_separator_pane_g1

0xe373,	// (0x000a32b5) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x000a4227) clock_digital_separator_pane_g

0xdfac,	// (0x000a2eee) bg_popup_window_pane_cp04

0xec88,	// (0x000a3bca) heading_pane_cp03

0xec90,	// (0x000a3bd2) listscroll_popup_gms_pane

0xec98,	// (0x000a3bda) grid_large_graphic_popup_pane

0xeca2,	// (0x000a3be4) listscroll_popup_gms_pane_g1

0xecaa,	// (0x000a3bec) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x000a42c4) listscroll_popup_gms_pane_g

0xe73e,	// (0x000a3680) scroll_pane_cp014

0xecb2,	// (0x000a3bf4) cell_large_graphic_popup_pane_ParamLimits

0xecb2,	// (0x000a3bf4) cell_large_graphic_popup_pane

0xecca,	// (0x000a3c0c) cell_large_graphic_popup_pane_g1_ParamLimits

0xecca,	// (0x000a3c0c) cell_large_graphic_popup_pane_g1

0xecd6,	// (0x000a3c18) cell_large_graphic_popup_pane_g2_ParamLimits

0xecd6,	// (0x000a3c18) cell_large_graphic_popup_pane_g2

0xece2,	// (0x000a3c24) cell_large_graphic_popup_pane_g3_ParamLimits

0xece2,	// (0x000a3c24) cell_large_graphic_popup_pane_g3

0xecef,	// (0x000a3c31) cell_large_graphic_popup_pane_g4_ParamLimits

0xecef,	// (0x000a3c31) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x000a42c9) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x000a42c9) cell_large_graphic_popup_pane_g

0xecff,	// (0x000a3c41) grid_highlight_pane_cp010

0xe373,	// (0x000a32b5) bg_popup_call_pane_g1

0xed09,	// (0x000a3c4b) list_single_graphic_popup_conf_pane_ParamLimits

0xed09,	// (0x000a3c4b) list_single_graphic_popup_conf_pane

0xed1b,	// (0x000a3c5d) list_highlight_pane_cp01

0xed24,	// (0x000a3c66) list_single_graphic_popup_conf_pane_g1

0xed2c,	// (0x000a3c6e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x000a42d2) list_single_graphic_popup_conf_pane_g

0xed34,	// (0x000a3c76) list_single_graphic_popup_conf_pane_t1

0xed42,	// (0x000a3c84) linegrid_cams_pane_g1

0x271f,	// (0x00097661) linegrid_cams_pane_g2

0xe42b,	// (0x000a336d) linegrid_cams_pane_g3

0xed4b,	// (0x000a3c8d) linegrid_cams_pane_g4

0x2728,	// (0x0009766a) linegrid_cams_pane_g5

0x2731,	// (0x00097673) linegrid_cams_pane_g6

0xe4b1,	// (0x000a33f3) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x000a42d7) linegrid_cams_pane_g

0xed54,	// (0x000a3c96) popup_clock_analogue_window

0xed54,	// (0x000a3c96) popup_clock_digital_window

0xdfac,	// (0x000a2eee) popup_phob_thumbnail_window

0xe373,	// (0x000a32b5) call_video_uplink_pane_g1

0xed5d,	// (0x000a3c9f) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x000a42e6) call_video_uplink_pane_g

0xe47e,	// (0x000a33c0) video_uplink_pane

0xed65,	// (0x000a3ca7) mce_image_pane_g1

0x273c,	// (0x0009767e) mce_image_pane_g2

0x2744,	// (0x00097686) mce_image_pane_g3

0x274c,	// (0x0009768e) mce_image_pane_g4

0x2754,	// (0x00097696) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x000a42eb) mce_image_pane_g

0xed6f,	// (0x000a3cb1) control_top_pane_stacon_cp01_ParamLimits

0xed6f,	// (0x000a3cb1) control_top_pane_stacon_cp01

0xed83,	// (0x000a3cc5) uni_indicator_pane_stacon_cp01_ParamLimits

0xed83,	// (0x000a3cc5) uni_indicator_pane_stacon_cp01

0xed94,	// (0x000a3cd6) bg_popup_sub_pane_cp03

0x275c,	// (0x0009769e) chi_dic_find_pane

0x2764,	// (0x000976a6) listscroll_chi_dic_pane

0x276d,	// (0x000976af) main_pane_chidic_g1

0x2780,	// (0x000976c2) chi_dic_find_pane_t1

0xed9e,	// (0x000a3ce0) find_chidic_pane

0xeda7,	// (0x000a3ce9) chi_dic_list_pane_ParamLimits

0xeda7,	// (0x000a3ce9) chi_dic_list_pane

0xedb8,	// (0x000a3cfa) scroll_pane_cp020

0x278e,	// (0x000976d0) find_chidic_pane_t1

0xdfac,	// (0x000a2eee) input_focus_pane_cp06

0x279d,	// (0x000976df) list_chi_dic_pane_ParamLimits

0x279d,	// (0x000976df) list_chi_dic_pane

0xedc0,	// (0x000a3d02) list_chi_dic_pane_t1_ParamLimits

0xedc0,	// (0x000a3d02) list_chi_dic_pane_t1

0xdfac,	// (0x000a2eee) list_highlight_pane_cp020

0xedd3,	// (0x000a3d15) bg_cale_heading_pane_g1

0x27b1,	// (0x000976f3) bg_cale_heading_pane_g2

0x27b9,	// (0x000976fb) bg_cale_heading_pane_g3

0x27c1,	// (0x00097703) bg_cale_heading_pane_g4

0x27cb,	// (0x0009770d) bg_cale_heading_pane_g5

0x27d5,	// (0x00097717) bg_cale_heading_pane_g6

0x27dd,	// (0x0009771f) bg_cale_heading_pane_g7

0x27e5,	// (0x00097727) bg_cale_heading_pane_g8

0x27ef,	// (0x00097731) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x000a42f6) bg_cale_heading_pane_g

0xedd3,	// (0x000a3d15) bg_cale_side_pane_g1

0x27f9,	// (0x0009773b) bg_cale_side_pane_g2

0x2801,	// (0x00097743) bg_cale_side_pane_g3

0x2809,	// (0x0009774b) bg_cale_side_pane_g4

0x2811,	// (0x00097753) bg_cale_side_pane_g5

0x2819,	// (0x0009775b) bg_cale_side_pane_g6

0x2821,	// (0x00097763) bg_cale_side_pane_g7

0x2829,	// (0x0009776b) bg_cale_side_pane_g8

0x2831,	// (0x00097773) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x000a4309) bg_cale_side_pane_g

0x2839,	// (0x0009777b) popup_call_status_window_ParamLimits

0x2839,	// (0x0009777b) popup_call_status_window

0xeddb,	// (0x000a3d1d) stacon_top_pane

0xede3,	// (0x000a3d25) status_pane_ParamLimits

0xede3,	// (0x000a3d25) status_pane

0xedf8,	// (0x000a3d3a) status_small_pane

0xee00,	// (0x000a3d42) control_pane

0xdfac,	// (0x000a2eee) stacon_bottom_pane

0xee08,	// (0x000a3d4a) list_single_mce_smart_pane_t1_ParamLimits

0xee08,	// (0x000a3d4a) list_single_mce_smart_pane_t1

0xee1b,	// (0x000a3d5d) list_single_mce_smart_pane_t2_ParamLimits

0xee1b,	// (0x000a3d5d) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x000a431c) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x000a431c) list_single_mce_smart_pane_t

0x2880,	// (0x000977c2) compass_pane

0x2889,	// (0x000977cb) main_location2_pane_t1

0x289d,	// (0x000977df) main_location2_pane_t2

0x28b1,	// (0x000977f3) main_location2_pane_t3

0x0003,

0xf3df,	// (0x000a4321) main_location2_pane_t

0xee3a,	// (0x000a3d7c) compass_pane_g1_ParamLimits

0xee3a,	// (0x000a3d7c) compass_pane_g1

0x28fb,	// (0x0009783d) compass_pane_t1

0x290a,	// (0x0009784c) compass_pane_t2

0x0005,

0xf3e8,	// (0x000a432a) compass_pane_t

0x2951,	// (0x00097893) text_secondary_cp61

0xee4e,	// (0x000a3d90) navi_pane_cams_g5

0xee71,	// (0x000a3db3) navi_pane_im_t1

0xee7f,	// (0x000a3dc1) navi_pane_mp_g1_ParamLimits

0xee7f,	// (0x000a3dc1) navi_pane_mp_g1

0xee93,	// (0x000a3dd5) navi_pane_mp_g2_ParamLimits

0xee93,	// (0x000a3dd5) navi_pane_mp_g2

0xee9f,	// (0x000a3de1) navi_pane_mp_g3_ParamLimits

0xee9f,	// (0x000a3de1) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x000a433e) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x000a433e) navi_pane_mp_g

0xeeab,	// (0x000a3ded) navi_pane_mp_t1

0xeeb9,	// (0x000a3dfb) navi_pane_mp_t2

0x0002,

0xf403,	// (0x000a4345) navi_pane_mp_t

0xeef5,	// (0x000a3e37) navi_pane_vt_g1

0xeeab,	// (0x000a3ded) navi_pane_vt_t1

0xeefd,	// (0x000a3e3f) navi_slider_pane

0xef05,	// (0x000a3e47) zooming_pane

0xef0d,	// (0x000a3e4f) navi_slider_pane_g1

0xa315,	// (0x0009f257) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x000a434c) navi_slider_pane_g

0xef31,	// (0x000a3e73) aid_levels_zoom

0xef39,	// (0x000a3e7b) zooming_pane_g1

0xef41,	// (0x000a3e83) zooming_pane_g2

0xef41,	// (0x000a3e83) zooming_pane_g3

0x0002,

0xf419,	// (0x000a435b) zooming_pane_g

0xef49,	// (0x000a3e8b) level_10_zoom

0xef52,	// (0x000a3e94) level_11_zoom

0xef5b,	// (0x000a3e9d) level_1_zoom

0xef64,	// (0x000a3ea6) level_2_zoom

0xef6d,	// (0x000a3eaf) level_3_zoom

0xef76,	// (0x000a3eb8) level_4_zoom

0xef7f,	// (0x000a3ec1) level_5_zoom

0xef88,	// (0x000a3eca) level_6_zoom

0xef91,	// (0x000a3ed3) level_7_zoom

0xef9a,	// (0x000a3edc) level_8_zoom

0xefa3,	// (0x000a3ee5) level_9_zoom

0xefb4,	// (0x000a3ef6) popup_phob_thumbnail_window_g1

0xefbc,	// (0x000a3efe) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x000a4362) popup_phob_thumbnail_window_g

0xa5d9,	// (0x0009f51b) level_1_location

0xa5e1,	// (0x0009f523) level_2_location

0xa5e9,	// (0x0009f52b) level_3_location

0xa5f1,	// (0x0009f533) level_4_location

0xef05,	// (0x000a3e47) level_5_location

0x2a90,	// (0x000979d2) mce_icon_pane_g1

0x2a98,	// (0x000979da) mce_icon_pane_g2

0x0001,

0xf425,	// (0x000a4367) mce_icon_pane_g

0x2aa0,	// (0x000979e2) main_mup_pane_g1_ParamLimits

0x2aa0,	// (0x000979e2) main_mup_pane_g1

0x2ab6,	// (0x000979f8) main_mup_pane_g2_ParamLimits

0x2ab6,	// (0x000979f8) main_mup_pane_g2

0x2ace,	// (0x00097a10) main_mup_pane_g3_ParamLimits

0x2ace,	// (0x00097a10) main_mup_pane_g3

0x2ae6,	// (0x00097a28) main_mup_pane_g4_ParamLimits

0x2ae6,	// (0x00097a28) main_mup_pane_g4

0x2afe,	// (0x00097a40) main_mup_pane_g5_ParamLimits

0x2afe,	// (0x00097a40) main_mup_pane_g5

0x2b1a,	// (0x00097a5c) main_mup_pane_g6_ParamLimits

0x2b1a,	// (0x00097a5c) main_mup_pane_g6

0x2b32,	// (0x00097a74) main_mup_pane_g7_ParamLimits

0x2b32,	// (0x00097a74) main_mup_pane_g7

0x2b4a,	// (0x00097a8c) main_mup_pane_g8_ParamLimits

0x2b4a,	// (0x00097a8c) main_mup_pane_g8

0x2b62,	// (0x00097aa4) main_mup_pane_g9_ParamLimits

0x2b62,	// (0x00097aa4) main_mup_pane_g9

0x2b7c,	// (0x00097abe) main_mup_pane_g10_ParamLimits

0x2b7c,	// (0x00097abe) main_mup_pane_g10

0x2b96,	// (0x00097ad8) main_mup_pane_g11_ParamLimits

0x2b96,	// (0x00097ad8) main_mup_pane_g11

0x2baa,	// (0x00097aec) main_mup_pane_g12_ParamLimits

0x2baa,	// (0x00097aec) main_mup_pane_g12

0x2bc0,	// (0x00097b02) main_mup_pane_g13_ParamLimits

0x2bc0,	// (0x00097b02) main_mup_pane_g13

0x000c,

0xf42a,	// (0x000a436c) main_mup_pane_g_ParamLimits

0xf42a,	// (0x000a436c) main_mup_pane_g

0x2bd4,	// (0x00097b16) main_mup_pane_t1_ParamLimits

0x2bd4,	// (0x00097b16) main_mup_pane_t1

0x2bee,	// (0x00097b30) main_mup_pane_t2_ParamLimits

0x2bee,	// (0x00097b30) main_mup_pane_t2

0x2c06,	// (0x00097b48) main_mup_pane_t3_ParamLimits

0x2c06,	// (0x00097b48) main_mup_pane_t3

0x2c1e,	// (0x00097b60) main_mup_pane_t4_ParamLimits

0x2c1e,	// (0x00097b60) main_mup_pane_t4

0x2c3c,	// (0x00097b7e) main_mup_pane_t5_ParamLimits

0x2c3c,	// (0x00097b7e) main_mup_pane_t5

0x2c51,	// (0x00097b93) main_mup_pane_t6_ParamLimits

0x2c51,	// (0x00097b93) main_mup_pane_t6

0x0005,

0xf445,	// (0x000a4387) main_mup_pane_t_ParamLimits

0xf445,	// (0x000a4387) main_mup_pane_t

0x2c63,	// (0x00097ba5) mup_progress_pane_ParamLimits

0x2c63,	// (0x00097ba5) mup_progress_pane

0x2c6f,	// (0x00097bb1) mup_visualizer_pane_ParamLimits

0x2c6f,	// (0x00097bb1) mup_visualizer_pane

0x2ca3,	// (0x00097be5) mup_volume_pane_ParamLimits

0x2ca3,	// (0x00097be5) mup_volume_pane

0xefc4,	// (0x000a3f06) mup_visualizer_pane_g1_ParamLimits

0xefc4,	// (0x000a3f06) mup_visualizer_pane_g1

0xefc4,	// (0x000a3f06) mup_visualizer_pane_g2_ParamLimits

0xefc4,	// (0x000a3f06) mup_visualizer_pane_g2

0xee3a,	// (0x000a3d7c) mup_visualizer_pane_g3_ParamLimits

0xee3a,	// (0x000a3d7c) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x000a4394) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x000a4394) mup_visualizer_pane_g

0xe373,	// (0x000a32b5) mup_volume_pane_g1

0xefda,	// (0x000a3f1c) mup_volume_pane_g2

0x0001,

0xf459,	// (0x000a439b) mup_volume_pane_g

0xe373,	// (0x000a32b5) mup_progress_pane_g1

0xefe3,	// (0x000a3f25) mup_progress_pane_g2

0xefec,	// (0x000a3f2e) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x000a43a0) mup_progress_pane_g

0xdfac,	// (0x000a2eee) bg_popup_window_pane_cp05

0xeff5,	// (0x000a3f37) heading_pane_cp02_ParamLimits

0xeff5,	// (0x000a3f37) heading_pane_cp02

0xf00f,	// (0x000a3f51) list_popup_blid_pane

0xf017,	// (0x000a3f59) list_blid_sat_info_pane_ParamLimits

0xf017,	// (0x000a3f59) list_blid_sat_info_pane

0xf02a,	// (0x000a3f6c) list_blid_sat_info_pane_g1

0xf032,	// (0x000a3f74) list_blid_sat_info_pane_t1

0x2dc9,	// (0x00097d0b) mup_equalizer_pane_ParamLimits

0x2dc9,	// (0x00097d0b) mup_equalizer_pane

0x2de2,	// (0x00097d24) mup_equalizer_pane_cp1_ParamLimits

0x2de2,	// (0x00097d24) mup_equalizer_pane_cp1

0x2dff,	// (0x00097d41) mup_equalizer_pane_cp2_ParamLimits

0x2dff,	// (0x00097d41) mup_equalizer_pane_cp2

0x2e1c,	// (0x00097d5e) mup_equalizer_pane_cp3_ParamLimits

0x2e1c,	// (0x00097d5e) mup_equalizer_pane_cp3

0x2e3d,	// (0x00097d7f) mup_equalizer_pane_cp4_ParamLimits

0x2e3d,	// (0x00097d7f) mup_equalizer_pane_cp4

0x2e5e,	// (0x00097da0) mup_equalizer_pane_cp5

0x2e72,	// (0x00097db4) mup_equalizer_pane_cp6

0x2e86,	// (0x00097dc8) mup_equalizer_pane_cp7

0xa4f7,	// (0x0009f439) bg_popup_call_poc_act_pane_g9

0xa4ff,	// (0x0009f441) bg_popup_call_poc_act_pane_g10

0xa507,	// (0x0009f449) bg_popup_call_poc_act_pane_g11

0x000a,

0xe207,	// (0x000a3149) mup_scale_pane

0xe373,	// (0x000a32b5) mup_scale_pane_g1

0xf040,	// (0x000a3f82) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x000a43bc) mup_scale_pane_g

0xf064,	// (0x000a3fa6) msg_data_pane

0xf06c,	// (0x000a3fae) scroll_pane_cp017

0x2eac,	// (0x00097dee) bg_list_pane_cp04_ParamLimits

0x2eac,	// (0x00097dee) bg_list_pane_cp04

0xf074,	// (0x000a3fb6) msg_data_pane_g1

0x2ecc,	// (0x00097e0e) msg_data_pane_g2

0x2744,	// (0x00097686) msg_data_pane_g3

0x2ed4,	// (0x00097e16) msg_data_pane_g4

0x2edc,	// (0x00097e1e) msg_data_pane_g5

0x2ee4,	// (0x00097e26) msg_data_pane_g6

0x2eec,	// (0x00097e2e) msg_data_pane_g7

0x0006,

0xf489,	// (0x000a43cb) msg_data_pane_g

0x2ef4,	// (0x00097e36) msg_text_pane_ParamLimits

0x2ef4,	// (0x00097e36) msg_text_pane

0x2f1b,	// (0x00097e5d) qrid_highlight_pane_cp011_ParamLimits

0x2f1b,	// (0x00097e5d) qrid_highlight_pane_cp011

0xdfac,	// (0x000a2eee) msg_body_pane

0xdfac,	// (0x000a2eee) msg_header_pane

0xf085,	// (0x000a3fc7) input_focus_pane_cp07

0x2f3f,	// (0x00097e81) msg_header_pane_t1_ParamLimits

0x2f3f,	// (0x00097e81) msg_header_pane_t1

0xf09a,	// (0x000a3fdc) msg_header_pane_t2_ParamLimits

0xf09a,	// (0x000a3fdc) msg_header_pane_t2

0x0001,

0xf49d,	// (0x000a43df) msg_header_pane_t_ParamLimits

0xf49d,	// (0x000a43df) msg_header_pane_t

0xf0ac,	// (0x000a3fee) msg_body_pane_g1

0x2f53,	// (0x00097e95) msg_body_pane_t1_ParamLimits

0x2f53,	// (0x00097e95) msg_body_pane_t1

0xf0b4,	// (0x000a3ff6) msg_body_pane_t2_ParamLimits

0xf0b4,	// (0x000a3ff6) msg_body_pane_t2

0xf0c6,	// (0x000a4008) msg_body_pane_t3_ParamLimits

0xf0c6,	// (0x000a4008) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x000a43e4) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x000a43e4) msg_body_pane_t

0x2fbe,	// (0x00097f00) main_viewer_pane_g1_ParamLimits

0x2fbe,	// (0x00097f00) main_viewer_pane_g1

0x2fcc,	// (0x00097f0e) main_viewer_pane_g2_ParamLimits

0x2fcc,	// (0x00097f0e) main_viewer_pane_g2

0x2fda,	// (0x00097f1c) main_viewer_pane_g3_ParamLimits

0x2fda,	// (0x00097f1c) main_viewer_pane_g3

0x2fe9,	// (0x00097f2b) main_viewer_pane_g4_ParamLimits

0x2fe9,	// (0x00097f2b) main_viewer_pane_g4

0xa33f,	// (0x0009f281) main_viewer_pane_g5_ParamLimits

0xa33f,	// (0x0009f281) main_viewer_pane_g5

0xa33f,	// (0x0009f281) main_viewer_pane_g7_ParamLimits

0xa33f,	// (0x0009f281) main_viewer_pane_g7

0xa351,	// (0x0009f293) main_viewer_pane_g8_ParamLimits

0xa351,	// (0x0009f293) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x000a43f4) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x000a43f4) main_viewer_pane_g

0x2ff8,	// (0x00097f3a) viewer_content_pane_ParamLimits

0x2ff8,	// (0x00097f3a) viewer_content_pane

0x3033,	// (0x00097f75) main_postcard_pane_g1_ParamLimits

0x3033,	// (0x00097f75) main_postcard_pane_g1

0x3049,	// (0x00097f8b) main_postcard_pane_g2_ParamLimits

0x3049,	// (0x00097f8b) main_postcard_pane_g2

0x305f,	// (0x00097fa1) main_postcard_pane_g3_ParamLimits

0x305f,	// (0x00097fa1) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x000a4405) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x000a4405) main_postcard_pane_g

0x3076,	// (0x00097fb8) main_postcard_pane_g4

0xa70c,	// (0x0009f64e) smil_status_volume_pane_g2

0x30b9,	// (0x00097ffb) postcard_pane_ParamLimits

0x30b9,	// (0x00097ffb) postcard_pane

0x30fb,	// (0x0009803d) postcard_pane_g1_ParamLimits

0x30fb,	// (0x0009803d) postcard_pane_g1

0x3109,	// (0x0009804b) postcard_pane_g2_ParamLimits

0x3109,	// (0x0009804b) postcard_pane_g2

0x3115,	// (0x00098057) postcard_pane_g3_ParamLimits

0x3115,	// (0x00098057) postcard_pane_g3

0x3121,	// (0x00098063) postcard_pane_g4_ParamLimits

0x3121,	// (0x00098063) postcard_pane_g4

0x312f,	// (0x00098071) postcard_pane_g5_ParamLimits

0x312f,	// (0x00098071) postcard_pane_g5

0x3144,	// (0x00098086) postcard_pane_g6_ParamLimits

0x3144,	// (0x00098086) postcard_pane_g6

0x30fb,	// (0x0009803d) postcard_pane_g7_ParamLimits

0x30fb,	// (0x0009803d) postcard_pane_g7

0x0006,

0xf4d0,	// (0x000a4412) postcard_pane_g_ParamLimits

0xf4d0,	// (0x000a4412) postcard_pane_g

0x3158,	// (0x0009809a) main_mp2_pane_g1_ParamLimits

0x3158,	// (0x0009809a) main_mp2_pane_g1

0x3164,	// (0x000980a6) main_mp2_pane_g2_ParamLimits

0x3164,	// (0x000980a6) main_mp2_pane_g2

0x3170,	// (0x000980b2) main_mp2_pane_g3_ParamLimits

0x3170,	// (0x000980b2) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x000a4421) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x000a4421) main_mp2_pane_g

0x317c,	// (0x000980be) main_mp2_pane_t1_ParamLimits

0x317c,	// (0x000980be) main_mp2_pane_t1

0x3191,	// (0x000980d3) main_mp2_pane_t2_ParamLimits

0x3191,	// (0x000980d3) main_mp2_pane_t2

0x31a3,	// (0x000980e5) main_mp2_pane_t3_ParamLimits

0x31a3,	// (0x000980e5) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x000a4428) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x000a4428) main_mp2_pane_t

0x31b5,	// (0x000980f7) pec_content_pane_ParamLimits

0x31b5,	// (0x000980f7) pec_content_pane

0xe73e,	// (0x000a3680) scroll_pane_cp015

0x31c7,	// (0x00098109) pec_attribute_pane_ParamLimits

0x31c7,	// (0x00098109) pec_attribute_pane

0x31d7,	// (0x00098119) pec_content_pane_g1_ParamLimits

0x31d7,	// (0x00098119) pec_content_pane_g1

0x31e5,	// (0x00098127) pec_content_pane_t1_ParamLimits

0x31e5,	// (0x00098127) pec_content_pane_t1

0x31f7,	// (0x00098139) pec_content_pane_t2_ParamLimits

0x31f7,	// (0x00098139) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x000a442f) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x000a442f) pec_content_pane_t

0x3209,	// (0x0009814b) list_single_graphic_pane_cp01_ParamLimits

0x3209,	// (0x0009814b) list_single_graphic_pane_cp01

0xe207,	// (0x000a3149) bg_popup_sub_pane_cp04

0x3221,	// (0x00098163) popup_mup_playback_window_g1

0x322d,	// (0x0009816f) popup_mup_playback_window_t1

0x3242,	// (0x00098184) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x000a4434) popup_mup_playback_window_t

0x3297,	// (0x000981d9) main_image_pane_g1_ParamLimits

0x3297,	// (0x000981d9) main_image_pane_g1

0x3374,	// (0x000982b6) scroll_pane_cp018_ParamLimits

0x3374,	// (0x000982b6) scroll_pane_cp018

0x338c,	// (0x000982ce) scroll_pane_cp016_ParamLimits

0x338c,	// (0x000982ce) scroll_pane_cp016

0x33c0,	// (0x00098302) smil2_image_pane_ParamLimits

0x33c0,	// (0x00098302) smil2_image_pane

0x33f4,	// (0x00098336) smil2_root_pane_ParamLimits

0x33f4,	// (0x00098336) smil2_root_pane

0x342c,	// (0x0009836e) smil2_text_pane_ParamLimits

0x342c,	// (0x0009836e) smil2_text_pane

0xdfac,	// (0x000a2eee) bg_list_pane_cp06

0x34b4,	// (0x000983f6) grid_radio_pane

0xdfac,	// (0x000a2eee) bg_popup_window_pane_cp06

0x34bc,	// (0x000983fe) main_fmradio_pane_t1

0xec88,	// (0x000a3bca) heading_pane_cp04

0x34ca,	// (0x0009840c) main_fmradio_pane_t2

0xa50f,	// (0x0009f451) popup_cale_lunar_info_window_g1

0x34d8,	// (0x0009841a) main_fmradio_pane_t3

0xa517,	// (0x0009f459) popup_cale_lunar_info_window_g2

0x34e6,	// (0x00098428) main_fmradio_pane_t4

0x0001,

0x34f4,	// (0x00098436) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x000a450f) popup_cale_lunar_info_window_g

0xf507,	// (0x000a4449) main_fmradio_pane_t

0x3502,	// (0x00098444) wait_bar_pane_cp03

0x350a,	// (0x0009844c) cell_fmradio_pane_ParamLimits

0x350a,	// (0x0009844c) cell_fmradio_pane

0x30fb,	// (0x0009803d) cell_fmradio_pane_g1_ParamLimits

0x30fb,	// (0x0009803d) cell_fmradio_pane_g1

0xdfac,	// (0x000a2eee) grid_highlight_pane_cp011

0x351d,	// (0x0009845f) poc_content_pane_ParamLimits

0x351d,	// (0x0009845f) poc_content_pane

0x352f,	// (0x00098471) scroll_pane_cp019

0x3537,	// (0x00098479) popup_call_poc_act_window_ParamLimits

0x3537,	// (0x00098479) popup_call_poc_act_window

0x355b,	// (0x0009849d) popup_call_poc_inact_window_ParamLimits

0x355b,	// (0x0009849d) popup_call_poc_inact_window

0xf5a4,	// (0x000a44e6) bg_popup_call_poc_act_pane_g

0xa47f,	// (0x0009f3c1) bg_popup_call_poc_inact_pane_g1

0xa487,	// (0x0009f3c9) bg_popup_call_poc_inact_pane_g2

0x3574,	// (0x000984b6) popup_call_poc_act_window_g2

0xa48f,	// (0x0009f3d1) bg_popup_call_poc_inact_pane_g3

0xa497,	// (0x0009f3d9) bg_popup_call_poc_inact_pane_g4

0xa49f,	// (0x0009f3e1) bg_popup_call_poc_inact_pane_g5

0x357c,	// (0x000984be) popup_call_poc_act_window_t1_ParamLimits

0x357c,	// (0x000984be) popup_call_poc_act_window_t1

0x35a4,	// (0x000984e6) popup_call_poc_act_window_t2_ParamLimits

0x35a4,	// (0x000984e6) popup_call_poc_act_window_t2

0x35cc,	// (0x0009850e) popup_call_poc_act_window_t3_ParamLimits

0x35cc,	// (0x0009850e) popup_call_poc_act_window_t3

0x35f4,	// (0x00098536) popup_call_poc_act_window_t4_ParamLimits

0x35f4,	// (0x00098536) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x000a4454) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x000a4454) popup_call_poc_act_window_t

0xa4a7,	// (0x0009f3e9) bg_popup_call_poc_inact_pane_g6

0xa4af,	// (0x0009f3f1) bg_popup_call_poc_inact_pane_g7

0xa4b7,	// (0x0009f3f9) bg_popup_call_poc_inact_pane_g8

0x3606,	// (0x00098548) popup_call_poc_inact_window_g2

0xa4bf,	// (0x0009f401) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x000a44d3) bg_popup_call_poc_inact_pane_g

0x360e,	// (0x00098550) popup_call_poc_inact_window_t1_ParamLimits

0x360e,	// (0x00098550) popup_call_poc_inact_window_t1

0x3623,	// (0x00098565) popup_call_poc_inact_window_t2_ParamLimits

0x3623,	// (0x00098565) popup_call_poc_inact_window_t2

0x3638,	// (0x0009857a) popup_call_poc_inact_window_t3_ParamLimits

0x3638,	// (0x0009857a) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x000a445d) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x000a445d) popup_call_poc_inact_window_t

0xa67f,	// (0x0009f5c1) context_pane_ParamLimits

0x4b4a,	// (0x00099a8c) signal_pane_ParamLimits

0xef05,	// (0x000a3e47) main_call2_pane

0xa66d,	// (0x0009f5af) popup_phob_thumbnail2_window_ParamLimits

0xa66d,	// (0x0009f5af) popup_phob_thumbnail2_window

0xa327,	// (0x0009f269) aid_hotspot_pointer_arrow_pane

0xa32f,	// (0x0009f271) aid_hotspot_pointer_hand_pane

0x466e,	// (0x000995b0) phob_pre_status_pane_g5

0x14a4,	// (0x000963e6) cams_zoom_pane_ParamLimits

0x14b3,	// (0x000963f5) image_vga_pane_ParamLimits

0x14cd,	// (0x0009640f) main_camera_pane_g1_ParamLimits

0x14df,	// (0x00096421) main_camera_pane_g2_ParamLimits

0x14f1,	// (0x00096433) main_camera_pane_g3_ParamLimits

0x1503,	// (0x00096445) main_camera_pane_g4_ParamLimits

0x1515,	// (0x00096457) main_camera_pane_g5_ParamLimits

0x1527,	// (0x00096469) main_camera_pane_g6_ParamLimits

0x1539,	// (0x0009647b) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x000a415c) main_camera_pane_g_ParamLimits

0x154b,	// (0x0009648d) main_camera_pane_t1_ParamLimits

0x1561,	// (0x000964a3) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x000a416d) main_camera_pane_t_ParamLimits

0xe207,	// (0x000a3149) bg_popup_preview_window_pane_cp01_ParamLimits

0xe207,	// (0x000a3149) bg_popup_preview_window_pane_cp01

0x364d,	// (0x0009858f) popup_phob_thumbnail2_window_g1_ParamLimits

0x364d,	// (0x0009858f) popup_phob_thumbnail2_window_g1

0xdfac,	// (0x000a2eee) call2_cli_visual_pane

0x3674,	// (0x000985b6) popup_call2_audio_conf_window_ParamLimits

0x3674,	// (0x000985b6) popup_call2_audio_conf_window

0x3694,	// (0x000985d6) popup_call2_audio_first_window_ParamLimits

0x3694,	// (0x000985d6) popup_call2_audio_first_window

0x372a,	// (0x0009866c) popup_call2_audio_in_window_ParamLimits

0x372a,	// (0x0009866c) popup_call2_audio_in_window

0x3772,	// (0x000986b4) popup_call2_audio_out_window_ParamLimits

0x3772,	// (0x000986b4) popup_call2_audio_out_window

0x37dc,	// (0x0009871e) popup_call2_audio_second_window_ParamLimits

0x37dc,	// (0x0009871e) popup_call2_audio_second_window

0x3842,	// (0x00098784) popup_call2_audio_wait_window_ParamLimits

0x3842,	// (0x00098784) popup_call2_audio_wait_window

0xdfac,	// (0x000a2eee) bg_popup_call2_act_pane_cp03

0xe1e9,	// (0x000a312b) list_conf_pane_cp

0x387c,	// (0x000987be) popup_call2_audio_conf_window_t1

0x388a,	// (0x000987cc) list_single_graphic_popup_conf2_pane_ParamLimits

0x388a,	// (0x000987cc) list_single_graphic_popup_conf2_pane

0xed1b,	// (0x000a3c5d) list_highlight_pane_cp04

0x389d,	// (0x000987df) list_single_graphic_popup_conf2_pane_g1

0xed2c,	// (0x000a3c6e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x000a4464) list_single_graphic_popup_conf2_pane_g

0x38a7,	// (0x000987e9) list_single_graphic_popup_conf2_pane_t1

0x38b5,	// (0x000987f7) bg_popup_call2_act_pane_cp01_ParamLimits

0x38b5,	// (0x000987f7) bg_popup_call2_act_pane_cp01

0x393f,	// (0x00098881) call_type_pane_cp05_ParamLimits

0x393f,	// (0x00098881) call_type_pane_cp05

0x3993,	// (0x000988d5) popup_call2_audio_second_window_g1_ParamLimits

0x3993,	// (0x000988d5) popup_call2_audio_second_window_g1

0x39e7,	// (0x00098929) popup_call2_audio_second_window_g2_ParamLimits

0x39e7,	// (0x00098929) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x000a4469) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x000a4469) popup_call2_audio_second_window_g

0x3a4c,	// (0x0009898e) popup_call2_audio_second_window_t1_ParamLimits

0x3a4c,	// (0x0009898e) popup_call2_audio_second_window_t1

0x3b07,	// (0x00098a49) popup_call2_audio_second_window_t2_ParamLimits

0x3b07,	// (0x00098a49) popup_call2_audio_second_window_t2

0x3b5a,	// (0x00098a9c) popup_call2_audio_second_window_t3_ParamLimits

0x3b5a,	// (0x00098a9c) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x000a4470) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x000a4470) popup_call2_audio_second_window_t

0xdfac,	// (0x000a2eee) bg_popup_call2_in_pane_cp02

0xdfb6,	// (0x000a2ef8) call_type_pane_cp04

0xdfbe,	// (0x000a2f00) popup_call2_audio_wait_window_g1

0xdfc6,	// (0x000a2f08) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x000a4049) popup_call2_audio_wait_window_g

0xdfce,	// (0x000a2f10) popup_call2_audio_wait_window_t3

0x3c4d,	// (0x00098b8f) bg_popup_call2_act_pane_ParamLimits

0x3c4d,	// (0x00098b8f) bg_popup_call2_act_pane

0x3d0d,	// (0x00098c4f) call_type_pane_cp03_ParamLimits

0x3d0d,	// (0x00098c4f) call_type_pane_cp03

0x3d71,	// (0x00098cb3) popup_call2_audio_first_window_g1_ParamLimits

0x3d71,	// (0x00098cb3) popup_call2_audio_first_window_g1

0x3de1,	// (0x00098d23) popup_call2_audio_first_window_g2_ParamLimits

0x3de1,	// (0x00098d23) popup_call2_audio_first_window_g2

0xefc4,	// (0x000a3f06) popup_call2_audio_first_window_g3_ParamLimits

0xefc4,	// (0x000a3f06) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x000a4479) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x000a4479) popup_call2_audio_first_window_g

0x3ebf,	// (0x00098e01) popup_call2_audio_first_window_t1_ParamLimits

0x3ebf,	// (0x00098e01) popup_call2_audio_first_window_t1

0x3fc2,	// (0x00098f04) popup_call2_audio_first_window_t4_ParamLimits

0x3fc2,	// (0x00098f04) popup_call2_audio_first_window_t4

0x40a5,	// (0x00098fe7) popup_call2_audio_first_window_t5_ParamLimits

0x40a5,	// (0x00098fe7) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x000a4484) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x000a4484) popup_call2_audio_first_window_t

0xe1ff,	// (0x000a3141) bg_popup_call2_act_pane_g1

0xa51f,	// (0x0009f461) popup_cale_lunar_info_window_t1

0xa52d,	// (0x0009f46f) popup_cale_lunar_info_window_t2

0xa53b,	// (0x0009f47d) popup_cale_lunar_info_window_t3

0xdfac,	// (0x000a2eee) bg_popup_call2_bubble_pane

0x41a6,	// (0x000990e8) bg_popup_call2_in_pane_cp01_ParamLimits

0x41a6,	// (0x000990e8) bg_popup_call2_in_pane_cp01

0xca76,	// (0x000a19b8) call_type_pane_cp02

0x41ee,	// (0x00099130) popup_call2_audio_out_window_g1_ParamLimits

0x41ee,	// (0x00099130) popup_call2_audio_out_window_g1

0x421a,	// (0x0009915c) popup_call2_audio_out_window_g2_ParamLimits

0x421a,	// (0x0009915c) popup_call2_audio_out_window_g2

0x4242,	// (0x00099184) popup_call2_audio_out_window_g3_ParamLimits

0x4242,	// (0x00099184) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x000a448d) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x000a448d) popup_call2_audio_out_window_g

0x427d,	// (0x000991bf) popup_call2_audio_out_window_t1_ParamLimits

0x427d,	// (0x000991bf) popup_call2_audio_out_window_t1

0x42dc,	// (0x0009921e) popup_call2_audio_out_window_t2_ParamLimits

0x42dc,	// (0x0009921e) popup_call2_audio_out_window_t2

0x4330,	// (0x00099272) popup_call2_audio_out_window_t3_ParamLimits

0x4330,	// (0x00099272) popup_call2_audio_out_window_t3

0x4346,	// (0x00099288) popup_call2_audio_out_window_t4_ParamLimits

0x4346,	// (0x00099288) popup_call2_audio_out_window_t4

0x435c,	// (0x0009929e) popup_call2_audio_out_window_t5_ParamLimits

0x435c,	// (0x0009929e) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x000a4496) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x000a4496) popup_call2_audio_out_window_t

0x43c0,	// (0x00099302) bg_popup_call2_in_pane_ParamLimits

0x43c0,	// (0x00099302) bg_popup_call2_in_pane

0x441c,	// (0x0009935e) popup_call2_audio_in_window_g1_ParamLimits

0x441c,	// (0x0009935e) popup_call2_audio_in_window_g1

0x4454,	// (0x00099396) popup_call2_audio_in_window_g2_ParamLimits

0x4454,	// (0x00099396) popup_call2_audio_in_window_g2

0x448c,	// (0x000993ce) popup_call2_audio_in_window_g3_ParamLimits

0x448c,	// (0x000993ce) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x000a44a3) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x000a44a3) popup_call2_audio_in_window_g

0x44e4,	// (0x00099426) popup_call2_audio_in_window_t1_ParamLimits

0x44e4,	// (0x00099426) popup_call2_audio_in_window_t1

0xa369,	// (0x0009f2ab) popup_call2_audio_in_window_t2_ParamLimits

0xa369,	// (0x0009f2ab) popup_call2_audio_in_window_t2

0xa3e9,	// (0x0009f32b) popup_call2_audio_in_window_t3_ParamLimits

0xa3e9,	// (0x0009f32b) popup_call2_audio_in_window_t3

0xa403,	// (0x0009f345) popup_call2_audio_in_window_t4_ParamLimits

0xa403,	// (0x0009f345) popup_call2_audio_in_window_t4

0xa415,	// (0x0009f357) popup_call2_audio_in_window_t5_ParamLimits

0xa415,	// (0x0009f357) popup_call2_audio_in_window_t5

0xa42a,	// (0x0009f36c) popup_call2_audio_in_window_t6_ParamLimits

0xa42a,	// (0x0009f36c) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x000a44ac) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x000a44ac) popup_call2_audio_in_window_t

0xe1ff,	// (0x000a3141) bg_popup_call2_in_pane_g1

0xa549,	// (0x0009f48b) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x000a4514) popup_cale_lunar_info_window_t

0xe207,	// (0x000a3149) bg_popup_call2_rect_pane_ParamLimits

0xe207,	// (0x000a3149) bg_popup_call2_rect_pane

0xdfac,	// (0x000a2eee) call2_cli_visual_graphic_pane

0xdfac,	// (0x000a2eee) call2_cli_visual_text_pane

0xa71f,	// (0x0009f661) smil_status_volume_pane_g3

0x0002,

0xe373,	// (0x000a32b5) call2_cli_visual_graphic_pane_g1

0xe373,	// (0x000a32b5) call2_cli_visual_graphic_pane_g2

0xe373,	// (0x000a32b5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x000a44b9) call2_cli_visual_graphic_pane_g

0xa43f,	// (0x0009f381) bg_popup_call2_rect_pane_g1

0xe411,	// (0x000a3353) bg_popup_call2_rect_pane_g2

0xa447,	// (0x0009f389) bg_popup_call2_rect_pane_g3

0xa44f,	// (0x0009f391) bg_popup_call2_rect_pane_g4

0xa457,	// (0x0009f399) bg_popup_call2_rect_pane_g5

0xa45f,	// (0x0009f3a1) bg_popup_call2_rect_pane_g6

0xa467,	// (0x0009f3a9) bg_popup_call2_rect_pane_g7

0xa46f,	// (0x0009f3b1) bg_popup_call2_rect_pane_g8

0xa477,	// (0x0009f3b9) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x000a44c0) bg_popup_call2_rect_pane_g

0xa47f,	// (0x0009f3c1) bg_popup_call2_bubble_pane_g1

0xa487,	// (0x0009f3c9) bg_popup_call2_bubble_pane_g2

0xa48f,	// (0x0009f3d1) bg_popup_call2_bubble_pane_g3

0xa497,	// (0x0009f3d9) bg_popup_call2_bubble_pane_g4

0xa49f,	// (0x0009f3e1) bg_popup_call2_bubble_pane_g5

0xa4a7,	// (0x0009f3e9) bg_popup_call2_bubble_pane_g6

0xa4af,	// (0x0009f3f1) bg_popup_call2_bubble_pane_g7

0xa4b7,	// (0x0009f3f9) bg_popup_call2_bubble_pane_g8

0xa4bf,	// (0x0009f401) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x000a44d3) bg_popup_call2_bubble_pane_g

0x10f9,	// (0x0009603b) aid_cale_week_size_cell_pane

0x1579,	// (0x000964bb) aid_cams_cif_uncrop_pane_ParamLimits

0x1579,	// (0x000964bb) aid_cams_cif_uncrop_pane

0x1736,	// (0x00096678) aid_cams_size_cell_ParamLimits

0x1736,	// (0x00096678) aid_cams_size_cell

0x174a,	// (0x0009668c) grid_cams_pane_ParamLimits

0x1764,	// (0x000966a6) linegrid_cams_pane_ParamLimits

0x189c,	// (0x000967de) call_video_pane_t1

0x18ba,	// (0x000967fc) call_video_pane_t2

0x0001,

0xf27e,	// (0x000a41c0) call_video_pane_t

0x1ced,	// (0x00096c2f) aid_cale_month_size_cell_pane_ParamLimits

0x1ced,	// (0x00096c2f) aid_cale_month_size_cell_pane

0xf61b,	// (0x000a455d) smil_status_volume_pane_g

0xa72c,	// (0x0009f66e) volume_smil_pane_ParamLimits

0xa0f0,	// (0x0009f032) aid_popup2_width_pane

0x1056,	// (0x00095f98) cell_qdial_pane_g4_ParamLimits

0x1056,	// (0x00095f98) cell_qdial_pane_g4

0x28db,	// (0x0009781d) aid_blid_cardinal_pane_ParamLimits

0x28e7,	// (0x00097829) aid_blid_destination_pane_ParamLimits

0x28e7,	// (0x00097829) aid_blid_destination_pane

0xe207,	// (0x000a3149) bg_popup_call_poc_act_pane_ParamLimits

0xe207,	// (0x000a3149) bg_popup_call_poc_act_pane

0xe207,	// (0x000a3149) bg_popup_call_poc_inact_pane_ParamLimits

0xe207,	// (0x000a3149) bg_popup_call_poc_inact_pane

0xa4cf,	// (0x0009f411) bg_popup_call_poc_act_pane_g1

0xa4d7,	// (0x0009f419) bg_popup_call_poc_act_pane_g2

0xa4df,	// (0x0009f421) bg_popup_call_poc_act_pane_g3

0xa497,	// (0x0009f3d9) bg_popup_call_poc_act_pane_g4

0xa49f,	// (0x0009f3e1) bg_popup_call_poc_act_pane_g5

0xa4e7,	// (0x0009f429) bg_popup_call_poc_act_pane_g6

0xa4af,	// (0x0009f3f1) bg_popup_call_poc_act_pane_g7

0xa4ef,	// (0x0009f431) bg_popup_call_poc_act_pane_g8

0xdfac,	// (0x000a2eee) main_usb_pane

0xa648,	// (0x0009f58a) popup_cale_lunar_info_window

0x1b84,	// (0x00096ac6) im_reading_pane_t1_ParamLimits

0xe696,	// (0x000a35d8) list_im_pane_ParamLimits

0xe6a7,	// (0x000a35e9) scroll_pane_cp07_ParamLimits

0xdfac,	// (0x000a2eee) grid_highlight_pane_cp012

0xe207,	// (0x000a3149) mup_scale_pane_ParamLimits

0x30fb,	// (0x0009803d) main_usb_pane_g1_ParamLimits

0x30fb,	// (0x0009803d) main_usb_pane_g1

0x4581,	// (0x000994c3) main_usb_pane_g2_ParamLimits

0x4581,	// (0x000994c3) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x000a44fd) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x000a44fd) main_usb_pane_g

0x4597,	// (0x000994d9) main_usb_pane_t1_ParamLimits

0x4597,	// (0x000994d9) main_usb_pane_t1

0x45a9,	// (0x000994eb) main_usb_pane_t2_ParamLimits

0x45a9,	// (0x000994eb) main_usb_pane_t2

0x45bb,	// (0x000994fd) main_usb_pane_t3_ParamLimits

0x45bb,	// (0x000994fd) main_usb_pane_t3

0x45cd,	// (0x0009950f) main_usb_pane_t4_ParamLimits

0x45cd,	// (0x0009950f) main_usb_pane_t4

0x45df,	// (0x00099521) main_usb_pane_t5_ParamLimits

0x45df,	// (0x00099521) main_usb_pane_t5

0x45f1,	// (0x00099533) main_usb_pane_t6_ParamLimits

0x45f1,	// (0x00099533) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x000a4502) main_usb_pane_t_ParamLimits

0x2880,	// (0x000977c2) aid_text_placing

0x2889,	// (0x000977cb) main_location2_pane_t1_ParamLimits

0x289d,	// (0x000977df) main_location2_pane_t2_ParamLimits

0x28b1,	// (0x000977f3) main_location2_pane_t3_ParamLimits

0x28c7,	// (0x00097809) main_location2_pane_t4_ParamLimits

0x28c7,	// (0x00097809) main_location2_pane_t4

0xf3df,	// (0x000a4321) main_location2_pane_t_ParamLimits

0xe24b,	// (0x000a318d) find_pinb_pane_g2_ParamLimits

0xe24b,	// (0x000a318d) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x000a406f) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x000a406f) find_pinb_pane_g

0xe257,	// (0x000a3199) find_pinb_pane_t1_ParamLimits

0xe269,	// (0x000a31ab) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x000a4074) find_pinb_pane_t_ParamLimits

0xdfac,	// (0x000a2eee) main_call3_pane

0x2051,	// (0x00096f93) cale_month_day_heading_pane_t1_ParamLimits

0x20af,	// (0x00096ff1) cale_month_day_heading_pane_t2_ParamLimits

0x2114,	// (0x00097056) cale_month_day_heading_pane_t3_ParamLimits

0x2179,	// (0x000970bb) cale_month_day_heading_pane_t4_ParamLimits

0x21de,	// (0x00097120) cale_month_day_heading_pane_t5_ParamLimits

0x2253,	// (0x00097195) cale_month_day_heading_pane_t6_ParamLimits

0x22c8,	// (0x0009720a) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x000a41f8) cale_month_day_heading_pane_t_ParamLimits

0xe911,	// (0x000a3853) smil_status_volume_pane

0x30d7,	// (0x00098019) postcard_address_pane_ParamLimits

0x30d7,	// (0x00098019) postcard_address_pane

0x30e9,	// (0x0009802b) postcard_message_pane_ParamLimits

0x30e9,	// (0x0009802b) postcard_message_pane

0x4564,	// (0x000994a6) call2_cli_visual_pane_t1_ParamLimits

0x4564,	// (0x000994a6) call2_cli_visual_pane_t1

0x4d78,	// (0x00099cba) postcard_message_pane_t1_ParamLimits

0x4d78,	// (0x00099cba) postcard_message_pane_t1

0x4d61,	// (0x00099ca3) postcard_address_pane_t1_ParamLimits

0x4d61,	// (0x00099ca3) postcard_address_pane_t1

0x4d4d,	// (0x00099c8f) popup_call3_audio_in_window_ParamLimits

0x4d4d,	// (0x00099c8f) popup_call3_audio_in_window

0x4bdc,	// (0x00099b1e) bg_popup_call3_in_pane_ParamLimits

0x4bdc,	// (0x00099b1e) bg_popup_call3_in_pane

0x4c4e,	// (0x00099b90) popup_call3_audio_in_window_g1_ParamLimits

0x4c4e,	// (0x00099b90) popup_call3_audio_in_window_g1

0x4c6e,	// (0x00099bb0) popup_call3_audio_in_window_g2_ParamLimits

0x4c6e,	// (0x00099bb0) popup_call3_audio_in_window_g2

0x4c8e,	// (0x00099bd0) popup_call3_audio_in_window_g3_ParamLimits

0x4c8e,	// (0x00099bd0) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x000a4564) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x000a4564) popup_call3_audio_in_window_g

0x4cbf,	// (0x00099c01) popup_call3_audio_in_window_t1_ParamLimits

0x4cbf,	// (0x00099c01) popup_call3_audio_in_window_t1

0x4cfd,	// (0x00099c3f) popup_call3_audio_in_window_t2_ParamLimits

0x4cfd,	// (0x00099c3f) popup_call3_audio_in_window_t2

0x4d3b,	// (0x00099c7d) popup_call3_audio_in_window_t3_ParamLimits

0x4d3b,	// (0x00099c7d) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x000a456d) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x000a456d) popup_call3_audio_in_window_t

0xef05,	// (0x000a3e47) bg_popup_call3_rect_pane

0xa43f,	// (0x0009f381) bg_popup_call3_rect_pane_g1

0xe411,	// (0x000a3353) bg_popup_call3_rect_pane_g2

0xa447,	// (0x0009f389) bg_popup_call3_rect_pane_g3

0xa44f,	// (0x0009f391) bg_popup_call3_rect_pane_g4

0xa457,	// (0x0009f399) bg_popup_call3_rect_pane_g5

0xa45f,	// (0x0009f3a1) bg_popup_call3_rect_pane_g6

0xa467,	// (0x0009f3a9) bg_popup_call3_rect_pane_g7

0x2cb9,	// (0x00097bfb) mup_visualizer_osc_pane

0xefd2,	// (0x000a3f14) mup_visualizer_spec_pane

0x4c0c,	// (0x00099b4e) call3_video_qcif_pane_ParamLimits

0x4c0c,	// (0x00099b4e) call3_video_qcif_pane

0x4c1d,	// (0x00099b5f) call3_video_qcif_uncrop_pane_ParamLimits

0x4c1d,	// (0x00099b5f) call3_video_qcif_uncrop_pane

0x4c29,	// (0x00099b6b) call3_video_subqcif_pane_ParamLimits

0x4c29,	// (0x00099b6b) call3_video_subqcif_pane

0x4c3d,	// (0x00099b7f) call3_video_subqcif_uncrop_pane_ParamLimits

0x4c3d,	// (0x00099b7f) call3_video_subqcif_uncrop_pane

0x4cae,	// (0x00099bf0) popup_call3_audio_in_window_g4_ParamLimits

0x4cae,	// (0x00099bf0) popup_call3_audio_in_window_g4

0x4bcb,	// (0x00099b0d) mup_spec_half_pane

0x4bd4,	// (0x00099b16) mup_spec_half_pane_cp

0xa6df,	// (0x0009f621) mup_osc_middle_pane

0xa6e8,	// (0x0009f62a) mup_visualizer_osc_pane_g1

0x4bab,	// (0x00099aed) mup_spec_bar_pane_ParamLimits

0x4bab,	// (0x00099aed) mup_spec_bar_pane

0xa6cc,	// (0x0009f60e) mup_spec_bar_pane_g1

0xa6d6,	// (0x0009f618) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x000a4558) mup_spec_bar_pane_g

0x10f9,	// (0x0009603b) aid_cale_week_size_cell_pane_ParamLimits

0x110c,	// (0x0009604e) bg_cale_heading_pane_ParamLimits

0xe445,	// (0x000a3387) bg_cale_pane_cp01_ParamLimits

0x1124,	// (0x00096066) cale_week_corner_pane_ParamLimits

0x1135,	// (0x00096077) cale_week_day_heading_pane_ParamLimits

0x114d,	// (0x0009608f) cale_week_scroll_pane_g1_ParamLimits

0x1162,	// (0x000960a4) cale_week_scroll_pane_g2_ParamLimits

0x1173,	// (0x000960b5) cale_week_scroll_pane_g3_ParamLimits

0x1184,	// (0x000960c6) cale_week_scroll_pane_g4_ParamLimits

0x1195,	// (0x000960d7) cale_week_scroll_pane_g5_ParamLimits

0x11a8,	// (0x000960ea) cale_week_scroll_pane_g6_ParamLimits

0x11bb,	// (0x000960fd) cale_week_scroll_pane_g7_ParamLimits

0x11ce,	// (0x00096110) cale_week_scroll_pane_g8_ParamLimits

0x11e1,	// (0x00096123) cale_week_scroll_pane_g9_ParamLimits

0x11f2,	// (0x00096134) cale_week_scroll_pane_g10_ParamLimits

0x1203,	// (0x00096145) cale_week_scroll_pane_g11_ParamLimits

0x1214,	// (0x00096156) cale_week_scroll_pane_g12_ParamLimits

0x1225,	// (0x00096167) cale_week_scroll_pane_g13_ParamLimits

0x1236,	// (0x00096178) cale_week_scroll_pane_g14_ParamLimits

0x1247,	// (0x00096189) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x000a4100) cale_week_scroll_pane_g_ParamLimits

0x125c,	// (0x0009619e) cale_week_time_pane_ParamLimits

0x126f,	// (0x000961b1) grid_cale_week_pane_ParamLimits

0xe45e,	// (0x000a33a0) listscroll_cale_week_pane_t1

0x1284,	// (0x000961c6) scroll_pane_cp08_ParamLimits

0x1d2e,	// (0x00096c70) cale_month_corner_pane_ParamLimits

0xe8bd,	// (0x000a37ff) cale_month_pane_t1

0x2010,	// (0x00096f52) cale_month_week_pane_ParamLimits

0x26e7,	// (0x00097629) popup_call_status_window_g1_ParamLimits

0x26fb,	// (0x0009763d) popup_call_status_window_g2_ParamLimits

0x270f,	// (0x00097651) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x000a42a8) popup_call_status_window_g_ParamLimits

0xec78,	// (0x000a3bba) aid_call2_pane

0x2f31,	// (0x00097e73) msg_header_pane_g1

0x30d7,	// (0x00098019) postcard_address2_pane_ParamLimits

0x30d7,	// (0x00098019) postcard_address2_pane

0x30e9,	// (0x0009802b) postcard_message2_pane_ParamLimits

0x30e9,	// (0x0009802b) postcard_message2_pane

0x4b58,	// (0x00099a9a) message2_row_pane_ParamLimits

0x4b58,	// (0x00099a9a) message2_row_pane

0x4b77,	// (0x00099ab9) address2_row_pane_ParamLimits

0x4b77,	// (0x00099ab9) address2_row_pane

0xa69a,	// (0x0009f5dc) postcard_message2_row_pane_g1

0xa6a2,	// (0x0009f5e4) postcard_message2_row_pane_t1

0xa69a,	// (0x0009f5dc) address2_row_pane_g1

0xa6a2,	// (0x0009f5e4) address2_row_pane_t1

0xa206,	// (0x0009f148) aid_size_cell_vorec

0xdfac,	// (0x000a2eee) main_rss_pane

0x4b8a,	// (0x00099acc) rss_list_single_pane_ParamLimits

0x4b8a,	// (0x00099acc) rss_list_single_pane

0xa6b0,	// (0x0009f5f2) rss_list_single_pane_t1

0xa6be,	// (0x0009f600) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x000a4553) rss_list_single_pane_t

0xdfac,	// (0x000a2eee) main_camera2_pane

0xdfac,	// (0x000a2eee) main_video2_pane

0x4df1,	// (0x00099d33) cams_zoom_pane_cp2_ParamLimits

0x4df1,	// (0x00099d33) cams_zoom_pane_cp2

0x4e11,	// (0x00099d53) image2_vga_pane_ParamLimits

0x4e11,	// (0x00099d53) image2_vga_pane

0x4e62,	// (0x00099da4) main_camera2_pane_g1_ParamLimits

0x4e62,	// (0x00099da4) main_camera2_pane_g1

0x4e82,	// (0x00099dc4) main_camera2_pane_g2_ParamLimits

0x4e82,	// (0x00099dc4) main_camera2_pane_g2

0x4ea2,	// (0x00099de4) main_camera2_pane_g3_ParamLimits

0x4ea2,	// (0x00099de4) main_camera2_pane_g3

0x4ec2,	// (0x00099e04) main_camera2_pane_g4_ParamLimits

0x4ec2,	// (0x00099e04) main_camera2_pane_g4

0x4ee2,	// (0x00099e24) main_camera2_pane_g5_ParamLimits

0x4ee2,	// (0x00099e24) main_camera2_pane_g5

0x4f02,	// (0x00099e44) main_camera2_pane_g6_ParamLimits

0x4f02,	// (0x00099e44) main_camera2_pane_g6

0x4f22,	// (0x00099e64) main_camera2_pane_g7_ParamLimits

0x4f22,	// (0x00099e64) main_camera2_pane_g7

0x4f42,	// (0x00099e84) main_camera2_pane_g8_ParamLimits

0x4f42,	// (0x00099e84) main_camera2_pane_g8

0x0008,

0xf632,	// (0x000a4574) main_camera2_pane_g_ParamLimits

0xf632,	// (0x000a4574) main_camera2_pane_g

0x4f82,	// (0x00099ec4) main_camera2_pane_t1_ParamLimits

0x4f82,	// (0x00099ec4) main_camera2_pane_t1

0x4fb7,	// (0x00099ef9) main_camera2_pane_t2_ParamLimits

0x4fb7,	// (0x00099ef9) main_camera2_pane_t2

0x4fdd,	// (0x00099f1f) main_camera2_pane_t3_ParamLimits

0x4fdd,	// (0x00099f1f) main_camera2_pane_t3

0x503b,	// (0x00099f7d) main_camera2_pane_t4_ParamLimits

0x503b,	// (0x00099f7d) main_camera2_pane_t4

0x0006,

0xf645,	// (0x000a4587) main_camera2_pane_t_ParamLimits

0xf645,	// (0x000a4587) main_camera2_pane_t

0x50cd,	// (0x0009a00f) cams_zoom_pane_cp4_ParamLimits

0x50cd,	// (0x0009a00f) cams_zoom_pane_cp4

0x50e3,	// (0x0009a025) image2_cif_pane_ParamLimits

0x50e3,	// (0x0009a025) image2_cif_pane

0x510e,	// (0x0009a050) image2_subqcif_pane_ParamLimits

0x510e,	// (0x0009a050) image2_subqcif_pane

0x5128,	// (0x0009a06a) main_video2_pane_g1_ParamLimits

0x5128,	// (0x0009a06a) main_video2_pane_g1

0x5142,	// (0x0009a084) main_video2_pane_g2_ParamLimits

0x5142,	// (0x0009a084) main_video2_pane_g2

0x5158,	// (0x0009a09a) main_video2_pane_g3_ParamLimits

0x5158,	// (0x0009a09a) main_video2_pane_g3

0x516e,	// (0x0009a0b0) main_video2_pane_g4_ParamLimits

0x516e,	// (0x0009a0b0) main_video2_pane_g4

0x5184,	// (0x0009a0c6) main_video2_pane_g5_ParamLimits

0x5184,	// (0x0009a0c6) main_video2_pane_g5

0x519a,	// (0x0009a0dc) main_video2_pane_g6_ParamLimits

0x519a,	// (0x0009a0dc) main_video2_pane_g6

0x0005,

0xf654,	// (0x000a4596) main_video2_pane_g_ParamLimits

0xf654,	// (0x000a4596) main_video2_pane_g

0x51b4,	// (0x0009a0f6) main_video2_pane_t1_ParamLimits

0x51b4,	// (0x0009a0f6) main_video2_pane_t1

0x51d8,	// (0x0009a11a) main_video2_pane_t2_ParamLimits

0x51d8,	// (0x0009a11a) main_video2_pane_t2

0x5226,	// (0x0009a168) main_video2_pane_t3_ParamLimits

0x5226,	// (0x0009a168) main_video2_pane_t3

0x0002,

0xf661,	// (0x000a45a3) main_video2_pane_t_ParamLimits

0xf661,	// (0x000a45a3) main_video2_pane_t

0x46ae,	// (0x000995f0) call_muted_g2

0x0001,

0xf603,	// (0x000a4545) call_muted_g

0xdfac,	// (0x000a2eee) main_mup2_pane

0x526e,	// (0x0009a1b0) main_mup2_pane_g1_ParamLimits

0x526e,	// (0x0009a1b0) main_mup2_pane_g1

0x527a,	// (0x0009a1bc) main_mup2_pane_g2_ParamLimits

0x527a,	// (0x0009a1bc) main_mup2_pane_g2

0xa850,	// (0x0009f792) main_mup_pane_g13_cp1

0xa858,	// (0x0009f79a) mup_volume_pane_cp1

0x5296,	// (0x0009a1d8) main_mup2_pane_g4_ParamLimits

0x5296,	// (0x0009a1d8) main_mup2_pane_g4

0x52a8,	// (0x0009a1ea) main_mup2_pane_g5_ParamLimits

0x52a8,	// (0x0009a1ea) main_mup2_pane_g5

0x52ba,	// (0x0009a1fc) main_mup2_pane_g6_ParamLimits

0x52ba,	// (0x0009a1fc) main_mup2_pane_g6

0x52cc,	// (0x0009a20e) main_mup2_pane_g7_ParamLimits

0x52cc,	// (0x0009a20e) main_mup2_pane_g7

0x0006,

0xf668,	// (0x000a45aa) main_mup2_pane_g_ParamLimits

0xf668,	// (0x000a45aa) main_mup2_pane_g

0x52e4,	// (0x0009a226) main_mup2_pane_t1_ParamLimits

0x52e4,	// (0x0009a226) main_mup2_pane_t1

0x52fa,	// (0x0009a23c) main_mup2_pane_t2_ParamLimits

0x52fa,	// (0x0009a23c) main_mup2_pane_t2

0x5310,	// (0x0009a252) main_mup2_pane_t3_ParamLimits

0x5310,	// (0x0009a252) main_mup2_pane_t3

0x5326,	// (0x0009a268) main_mup2_pane_t4_ParamLimits

0x5326,	// (0x0009a268) main_mup2_pane_t4

0x533e,	// (0x0009a280) main_mup2_pane_t5_ParamLimits

0x533e,	// (0x0009a280) main_mup2_pane_t5

0x5356,	// (0x0009a298) main_mup2_pane_t6_ParamLimits

0x5356,	// (0x0009a298) main_mup2_pane_t6

0x0005,

0xf677,	// (0x000a45b9) main_mup2_pane_t_ParamLimits

0xf677,	// (0x000a45b9) main_mup2_pane_t

0x5386,	// (0x0009a2c8) mup2_visualizer_pane_ParamLimits

0x5386,	// (0x0009a2c8) mup2_visualizer_pane

0x53b4,	// (0x0009a2f6) mup_progress_pane_cp_ParamLimits

0x53b4,	// (0x0009a2f6) mup_progress_pane_cp

0xa832,	// (0x0009f774) mup_volume_pane_cp_ParamLimits

0xa832,	// (0x0009f774) mup_volume_pane_cp

0x53c8,	// (0x0009a30a) mup2_visualizer_pane_g1_ParamLimits

0x53c8,	// (0x0009a30a) mup2_visualizer_pane_g1

0xa771,	// (0x0009f6b3) mup2_visualizer_pane_g2_ParamLimits

0xa771,	// (0x0009f6b3) mup2_visualizer_pane_g2

0x53df,	// (0x0009a321) mup2_visualizer_pane_g3_ParamLimits

0x53df,	// (0x0009a321) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x000a45c6) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x000a45c6) mup2_visualizer_pane_g

0x34ac,	// (0x000983ee) aid_size_cell_fmradio

0x4860,	// (0x000997a2) aid_height_parent_landcape

0xe725,	// (0x000a3667) wml_content_pane_cp

0xe72d,	// (0x000a366f) wml_tabs_pane

0xe736,	// (0x000a3678) popup_wml_miniature_window

0xe73e,	// (0x000a3680) scroll_pane_cp021

0xe752,	// (0x000a3694) wml_content_pane_comp8

0xdfac,	// (0x000a2eee) bg_popup_sub_pane_cp05

0xa78f,	// (0x0009f6d1) popup_wml_miniature_window_g1

0xa797,	// (0x0009f6d9) wml_miniature_view_pane

0x53eb,	// (0x0009a32d) aid_size_wml_view

0x53f3,	// (0x0009a335) wml_miniature_view_pane_g1

0x53fc,	// (0x0009a33e) wml_miniature_view_pane_g2

0x5405,	// (0x0009a347) wml_miniature_view_pane_g3

0x540d,	// (0x0009a34f) wml_miniature_view_pane_g4

0x5415,	// (0x0009a357) wml_miniature_view_pane_g5

0x541d,	// (0x0009a35f) wml_miniature_view_pane_g6

0x5425,	// (0x0009a367) wml_miniature_view_pane_g7

0x542d,	// (0x0009a36f) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x000a45cd) wml_miniature_view_pane_g

0xa79f,	// (0x0009f6e1) background_graphic_ParamLimits

0xa79f,	// (0x0009f6e1) background_graphic

0xa7ab,	// (0x0009f6ed) wml_tabs_2_pane

0xa7b4,	// (0x0009f6f6) wml_tabs_3_pane_ParamLimits

0xa7b4,	// (0x0009f6f6) wml_tabs_3_pane

0xa7c6,	// (0x0009f708) wml_tabs_4_pane_ParamLimits

0xa7c6,	// (0x0009f708) wml_tabs_4_pane

0xa7dc,	// (0x0009f71e) wml_tabs_5_pane_ParamLimits

0xa7dc,	// (0x0009f71e) wml_tabs_5_pane

0xa7f6,	// (0x0009f738) wml_tabs_pane_g2_ParamLimits

0xa7f6,	// (0x0009f738) wml_tabs_pane_g2

0xa80a,	// (0x0009f74c) wml_tabs_pane_g3_ParamLimits

0xa80a,	// (0x0009f74c) wml_tabs_pane_g3

0x5435,	// (0x0009a377) wml_tabs_2_active_pane_ParamLimits

0x5435,	// (0x0009a377) wml_tabs_2_active_pane

0x5449,	// (0x0009a38b) wml_tabs_2_passive_pane_ParamLimits

0x5449,	// (0x0009a38b) wml_tabs_2_passive_pane

0x545d,	// (0x0009a39f) wml_tabs_3_active_pane_cp_ParamLimits

0x545d,	// (0x0009a39f) wml_tabs_3_active_pane_cp

0x5472,	// (0x0009a3b4) wml_tabs_3_passive_pane_ParamLimits

0x5472,	// (0x0009a3b4) wml_tabs_3_passive_pane

0x5485,	// (0x0009a3c7) wml_tabs_3_passive_pane_cp_ParamLimits

0x5485,	// (0x0009a3c7) wml_tabs_3_passive_pane_cp

0x549c,	// (0x0009a3de) tabs_4_active_pane

0x54a4,	// (0x0009a3e6) tabs_4_passive_pane

0x54ae,	// (0x0009a3f0) tabs_4_passive_pane_cp

0x54b6,	// (0x0009a3f8) tabs_4_passive_pane_cp2

0xa4c7,	// (0x0009f409) aid_height_text

0x2c8b,	// (0x00097bcd) mup_volume_cont_pane_ParamLimits

0x2c8b,	// (0x00097bcd) mup_volume_cont_pane

0x0d26,	// (0x00095c68) aid_size_cell_pinb

0xe237,	// (0x000a3179) aid_size_list_pinb

0x53a0,	// (0x0009a2e2) mup2_volume_cont_pane_ParamLimits

0x53a0,	// (0x0009a2e2) mup2_volume_cont_pane

0xa81e,	// (0x0009f760) mup2_volume_cont_pane_g1_ParamLimits

0xa81e,	// (0x0009f760) mup2_volume_cont_pane_g1

0x0a06,	// (0x00095948) aid_size_cell_touch_ParamLimits

0x0a06,	// (0x00095948) aid_size_cell_touch

0x0c14,	// (0x00095b56) touch_pane_ParamLimits

0x0c14,	// (0x00095b56) touch_pane

0xa164,	// (0x0009f0a6) main_rss2_pane

0xa860,	// (0x0009f7a2) listscroll_rss2_pane

0xa869,	// (0x0009f7ab) rss2_navigation_pane

0xa871,	// (0x0009f7b3) list_rss2_pane

0xedb8,	// (0x000a3cfa) scroll_pane_cp22

0xa879,	// (0x0009f7bb) rss2_navigation_pane_g1

0xa882,	// (0x0009f7c4) rss2_navigation_pane_g2

0xa88a,	// (0x0009f7cc) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x000a45de) rss2_navigation_pane_g

0xa892,	// (0x0009f7d4) rss2_navigation_pane_t1

0x54c0,	// (0x0009a402) rss2_list_single_pane_ParamLimits

0x54c0,	// (0x0009a402) rss2_list_single_pane

0xa8a0,	// (0x0009f7e2) rss2_list_single_pane_t2

0xa8ae,	// (0x0009f7f0) rss2_list_single_pane_t3_ParamLimits

0xa8ae,	// (0x0009f7f0) rss2_list_single_pane_t3

0xa8cb,	// (0x0009f80d) rss2_list_single_pane_t4

0x24c4,	// (0x00097406) smil_status_pane_g1

0xa156,	// (0x0009f098) main_image2_pane_ParamLimits

0xa156,	// (0x0009f098) main_image2_pane

0x4f62,	// (0x00099ea4) main_camera2_pane_g9_ParamLimits

0x4f62,	// (0x00099ea4) main_camera2_pane_g9

0x5090,	// (0x00099fd2) main_camera2_pane_t5_ParamLimits

0x5090,	// (0x00099fd2) main_camera2_pane_t5

0xa741,	// (0x0009f683) main_camera2_pane_t6_ParamLimits

0xa741,	// (0x0009f683) main_camera2_pane_t6

0x54d8,	// (0x0009a41a) main_image2_pane_g1_ParamLimits

0x54d8,	// (0x0009a41a) main_image2_pane_g1

0x3462,	// (0x000983a4) smil2_video_pane_ParamLimits

0x3462,	// (0x000983a4) smil2_video_pane

0xa10c,	// (0x0009f04e) aid_zoom_text_primary_cp

0xa14c,	// (0x0009f08e) popup_preview_fixed_window

0xe68e,	// (0x000a35d0) im_reading_pane_g1

0x4dd9,	// (0x00099d1b) cams2_bc_adjust_pane_cp_ParamLimits

0x4dd9,	// (0x00099d1b) cams2_bc_adjust_pane_cp

0x50bf,	// (0x0009a001) cams2_bc_adjust_pane_ParamLimits

0x50bf,	// (0x0009a001) cams2_bc_adjust_pane

0xa8d9,	// (0x0009f81b) cams2_bc_adjust_pane_g1

0xa8e1,	// (0x0009f823) cams2_slider_pane

0xa8ea,	// (0x0009f82c) cams2_slider_pane_g1

0xa8f3,	// (0x0009f835) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x000a45e5) cams2_slider_pane_g

0x0de5,	// (0x00095d27) calc_display_pane_ParamLimits

0x0e0d,	// (0x00095d4f) calc_paper_pane_ParamLimits

0x0e30,	// (0x00095d72) grid_calc_pane_ParamLimits

0xa2f8,	// (0x0009f23a) popup_clock_digital_window_t1_ParamLimits

0x32e5,	// (0x00098227) main_image_pane_t1

0x0dc7,	// (0x00095d09) aid_size_cell_calc_ParamLimits

0x0dc7,	// (0x00095d09) aid_size_cell_calc

0x48a6,	// (0x000997e8) popup_blid_sat_info2_window_ParamLimits

0x48a6,	// (0x000997e8) popup_blid_sat_info2_window

0xa915,	// (0x0009f857) aid_size_cell_blid

0xa91d,	// (0x0009f85f) bg_popup_window_pane_cp07

0xa940,	// (0x0009f882) grid_popup_blid_pane

0xa94a,	// (0x0009f88c) heading_pane_cp05_ParamLimits

0xa94a,	// (0x0009f88c) heading_pane_cp05

0xaa14,	// (0x0009f956) cell_popup_blid_pane_ParamLimits

0xaa14,	// (0x0009f956) cell_popup_blid_pane

0xaa3a,	// (0x0009f97c) cell_popup_blid_pane_g1

0xaa42,	// (0x0009f984) cell_popup_blid_pane_t1

0x5370,	// (0x0009a2b2) mup2_indicator_pane_ParamLimits

0x5370,	// (0x0009a2b2) mup2_indicator_pane

0xef05,	// (0x000a3e47) mup2_visualizer_osc_pane

0xa77d,	// (0x0009f6bf) mup2_visualizer_spec_pane_ParamLimits

0xa77d,	// (0x0009f6bf) mup2_visualizer_spec_pane

0x54ee,	// (0x0009a430) mup2_spec_half_pane

0x54f7,	// (0x0009a439) mup2_spec_half_pane_cp

0x54ff,	// (0x0009a441) mup2_spec_bar_pane_ParamLimits

0x54ff,	// (0x0009a441) mup2_spec_bar_pane

0xa6cc,	// (0x0009f60e) mup2_spec_bar_pane_g1

0xa6d6,	// (0x0009f618) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x000a4558) mup2_spec_bar_pane_g

0x551f,	// (0x0009a461) mup2_osc_middle_pane

0xa6e8,	// (0x0009f62a) mup2_visualizer_osc_pane_g1

0xc9a9,	// (0x000a18eb) popup_number_entry_window_t1_ParamLimits

0xc9bc,	// (0x000a18fe) popup_number_entry_window_t2_ParamLimits

0xc9ce,	// (0x000a1910) popup_number_entry_window_t3_ParamLimits

0x0c66,	// (0x00095ba8) popup_number_entry_window_t5_ParamLimits

0x0c66,	// (0x00095ba8) popup_number_entry_window_t5

0xf0d8,	// (0x000a401a) popup_number_entry_window_t_ParamLimits

0xc9e0,	// (0x000a1922) text_title_cp2_ParamLimits

0xa337,	// (0x0009f279) aid_hotspot_pointer_text2_pane

0xa35d,	// (0x0009f29f) main_viewer_pane_g9_ParamLimits

0xa35d,	// (0x0009f29f) main_viewer_pane_g9

0xe8bd,	// (0x000a37ff) cale_month_pane_t1_ParamLimits

0xe924,	// (0x000a3866) bg_cale_pane_ParamLimits

0xe93c,	// (0x000a387e) list_cale_pane_ParamLimits

0xe45e,	// (0x000a33a0) listscroll_cale_day_pane_t1

0xe94d,	// (0x000a388f) scroll_pane_cp09_ParamLimits

0x2cc1,	// (0x00097c03) main_mup_eq_pane_t1_ParamLimits

0x2cc1,	// (0x00097c03) main_mup_eq_pane_t1

0x2cdd,	// (0x00097c1f) main_mup_eq_pane_t2_ParamLimits

0x2cdd,	// (0x00097c1f) main_mup_eq_pane_t2

0x2cf9,	// (0x00097c3b) main_mup_eq_pane_t3_ParamLimits

0x2cf9,	// (0x00097c3b) main_mup_eq_pane_t3

0x2d17,	// (0x00097c59) main_mup_eq_pane_t4_ParamLimits

0x2d17,	// (0x00097c59) main_mup_eq_pane_t4

0x2d35,	// (0x00097c77) main_mup_eq_pane_t5_ParamLimits

0x2d35,	// (0x00097c77) main_mup_eq_pane_t5

0x2d53,	// (0x00097c95) main_mup_eq_pane_t6_ParamLimits

0x2d53,	// (0x00097c95) main_mup_eq_pane_t6

0x2d69,	// (0x00097cab) main_mup_eq_pane_t7_ParamLimits

0x2d69,	// (0x00097cab) main_mup_eq_pane_t7

0x2d7f,	// (0x00097cc1) main_mup_eq_pane_t8_ParamLimits

0x2d7f,	// (0x00097cc1) main_mup_eq_pane_t8

0x2d95,	// (0x00097cd7) main_mup_eq_pane_t9_ParamLimits

0x2d95,	// (0x00097cd7) main_mup_eq_pane_t9

0x2daf,	// (0x00097cf1) main_mup_eq_pane_t10_ParamLimits

0x2daf,	// (0x00097cf1) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x000a43a7) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x000a43a7) main_mup_eq_pane_t

0x2e5e,	// (0x00097da0) mup_equalizer_pane_cp5_ParamLimits

0x2e72,	// (0x00097db4) mup_equalizer_pane_cp6_ParamLimits

0x2e86,	// (0x00097dc8) mup_equalizer_pane_cp7_ParamLimits

0xa164,	// (0x0009f0a6) main_gallery_pane

0xa6f1,	// (0x0009f633) smil2_volume_pane

0xa6f9,	// (0x0009f63b) smil_status_volume_pane_g1_ParamLimits

0xa70c,	// (0x0009f64e) smil_status_volume_pane_g2_ParamLimits

0xa71f,	// (0x0009f661) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x000a455d) smil_status_volume_pane_g_ParamLimits

0xa91d,	// (0x0009f85f) bg_popup_window_pane_cp07_ParamLimits

0xa92b,	// (0x0009f86d) blid_firmament_pane

0x5528,	// (0x0009a46a) aid_size_cell_gallery_ParamLimits

0x5528,	// (0x0009a46a) aid_size_cell_gallery

0x553e,	// (0x0009a480) grid_gallery_pane_ParamLimits

0x553e,	// (0x0009a480) grid_gallery_pane

0x5557,	// (0x0009a499) cell_gallery_pane_ParamLimits

0x5557,	// (0x0009a499) cell_gallery_pane

0xaa50,	// (0x0009f992) bg_cell_gallery_focus_pane_ParamLimits

0xaa50,	// (0x0009f992) bg_cell_gallery_focus_pane

0xaa62,	// (0x0009f9a4) cell_gallery_pane_g1_ParamLimits

0xaa62,	// (0x0009f9a4) cell_gallery_pane_g1

0x55a0,	// (0x0009a4e2) cell_gallery_pane_g2_ParamLimits

0x55a0,	// (0x0009a4e2) cell_gallery_pane_g2

0x55ad,	// (0x0009a4ef) cell_gallery_pane_g3_ParamLimits

0x55ad,	// (0x0009a4ef) cell_gallery_pane_g3

0xaa6e,	// (0x0009f9b0) cell_gallery_pane_g4_ParamLimits

0xaa6e,	// (0x0009f9b0) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x000a460b) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x000a460b) cell_gallery_pane_g

0xaa7a,	// (0x0009f9bc) bg_cell_gallery_focus_pane_g1

0xaa82,	// (0x0009f9c4) bg_cell_gallery_focus_pane_g2

0xaa8a,	// (0x0009f9cc) bg_cell_gallery_focus_pane_g3

0xaa92,	// (0x0009f9d4) bg_cell_gallery_focus_pane_g4

0xaa9a,	// (0x0009f9dc) bg_cell_gallery_focus_pane_g5

0xaaa2,	// (0x0009f9e4) bg_cell_gallery_focus_pane_g6

0xaaaa,	// (0x0009f9ec) bg_cell_gallery_focus_pane_g7

0xaab2,	// (0x0009f9f4) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x000a4614) bg_cell_gallery_focus_pane_g

0xaaba,	// (0x0009f9fc) aid_firma_cardinal

0xaace,	// (0x0009fa10) blid_firmament_pane_t1

0xaae5,	// (0x0009fa27) blid_firmament_pane_t2

0xaafc,	// (0x0009fa3e) blid_firmament_pane_t3

0xab13,	// (0x0009fa55) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x000a4625) blid_firmament_pane_t

0xab2a,	// (0x0009fa6c) blid_sat_info_pane

0xab3a,	// (0x0009fa7c) blid_sat_info_pane_g1

0xab3a,	// (0x0009fa7c) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x000a462e) blid_sat_info_pane_g

0xab44,	// (0x0009fa86) blid_sat_info_pane_t1

0xab52,	// (0x0009fa94) smil2_volume_content_pane

0xab5b,	// (0x0009fa9d) smil2_volume_pane_g1

0xab63,	// (0x0009faa5) smil2_volume_content_pane_g1

0xab6c,	// (0x0009faae) smil2_volume_content_pane_g2

0xab75,	// (0x0009fab7) smil2_volume_content_pane_g3

0xab7e,	// (0x0009fac0) smil2_volume_content_pane_g4

0xab87,	// (0x0009fac9) smil2_volume_content_pane_g5

0xab90,	// (0x0009fad2) smil2_volume_content_pane_g6

0xab99,	// (0x0009fadb) smil2_volume_content_pane_g7

0xaba2,	// (0x0009fae4) smil2_volume_content_pane_g8

0xabab,	// (0x0009faed) smil2_volume_content_pane_g9

0xabb4,	// (0x0009faf6) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x000a4633) smil2_volume_content_pane_g

0x12de,	// (0x00096220) cale_week_day_heading_pane_t1_ParamLimits

0x12f2,	// (0x00096234) cale_week_day_heading_pane_t2_ParamLimits

0x1306,	// (0x00096248) cale_week_day_heading_pane_t3_ParamLimits

0x131a,	// (0x0009625c) cale_week_day_heading_pane_t4_ParamLimits

0x132e,	// (0x00096270) cale_week_day_heading_pane_t5_ParamLimits

0x1342,	// (0x00096284) cale_week_day_heading_pane_t6_ParamLimits

0x1358,	// (0x0009629a) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x000a411f) cale_week_day_heading_pane_t_ParamLimits

0xe470,	// (0x000a33b2) bg_cale_side_pane_ParamLimits

0x136c,	// (0x000962ae) cale_week_time_pane_t1_ParamLimits

0x1384,	// (0x000962c6) cale_week_time_pane_t2_ParamLimits

0x139c,	// (0x000962de) cale_week_time_pane_t3_ParamLimits

0x13b4,	// (0x000962f6) cale_week_time_pane_t4_ParamLimits

0x13cc,	// (0x0009630e) cale_week_time_pane_t5_ParamLimits

0x13e4,	// (0x00096326) cale_week_time_pane_t6_ParamLimits

0x13fc,	// (0x0009633e) cale_week_time_pane_t7_ParamLimits

0x1414,	// (0x00096356) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x000a412e) cale_week_time_pane_t_ParamLimits

0x142c,	// (0x0009636e) cell_cale_week_pane_g2_ParamLimits

0xe470,	// (0x000a33b2) bg_cale_side_pane_cp01_ParamLimits

0x233d,	// (0x0009727f) cale_month_week_pane_t1_ParamLimits

0x2354,	// (0x00097296) cale_month_week_pane_t2_ParamLimits

0x236b,	// (0x000972ad) cale_month_week_pane_t3_ParamLimits

0x2382,	// (0x000972c4) cale_month_week_pane_t4_ParamLimits

0x2399,	// (0x000972db) cale_month_week_pane_t5_ParamLimits

0x23b0,	// (0x000972f2) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x000a4207) cale_month_week_pane_t_ParamLimits

0xa278,	// (0x0009f1ba) cell_cale_month_pane_g1_ParamLimits

0xa164,	// (0x0009f0a6) main_cale_event_viewer_pane

0xc97f,	// (0x000a18c1) listscroll_cale_event_viewer_pane

0xabbd,	// (0x0009faff) list_cale_ev_pane

0xabc5,	// (0x0009fb07) scroll_pane_cp023

0xabd1,	// (0x0009fb13) field_cale_ev_pane_ParamLimits

0xabd1,	// (0x0009fb13) field_cale_ev_pane

0xabeb,	// (0x0009fb2d) field_cale_ev_content_pane_ParamLimits

0xabeb,	// (0x0009fb2d) field_cale_ev_content_pane

0xabf7,	// (0x0009fb39) field_cale_ev_pane_g1_ParamLimits

0xabf7,	// (0x0009fb39) field_cale_ev_pane_g1

0xac03,	// (0x0009fb45) field_cale_ev_pane_g2_ParamLimits

0xac03,	// (0x0009fb45) field_cale_ev_pane_g2

0xac1b,	// (0x0009fb5d) field_cale_ev_pane_g3_ParamLimits

0xac1b,	// (0x0009fb5d) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x000a4648) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x000a4648) field_cale_ev_pane_g

0xac33,	// (0x0009fb75) field_cale_ev_pane_t1_ParamLimits

0xac33,	// (0x0009fb75) field_cale_ev_pane_t1

0xac4a,	// (0x0009fb8c) field_cale_ev_content_pane_t1_ParamLimits

0xac4a,	// (0x0009fb8c) field_cale_ev_content_pane_t1

0xf07c,	// (0x000a3fbe) bg_button_pane_cp01

0xe31e,	// (0x000a3260) listscroll_cale_week_pane_ParamLimits

0x10ef,	// (0x00096031) popup_toolbar_window_cp01

0xe45e,	// (0x000a33a0) listscroll_cale_week_pane_t1_ParamLimits

0xe31e,	// (0x000a3260) listscroll_cale_day_pane_ParamLimits

0x2523,	// (0x00097465) popup_toolbar_window_cp02

0xe45e,	// (0x000a33a0) listscroll_cale_day_pane_t1_ParamLimits

0xe31e,	// (0x000a3260) main_cale_month_pane_ParamLimits

0x4acc,	// (0x00099a0e) popup_toolbar_window_cp03_ParamLimits

0x4acc,	// (0x00099a0e) popup_toolbar_window_cp03

0x32c3,	// (0x00098205) main_image_pane_g2_ParamLimits

0x32c3,	// (0x00098205) main_image_pane_g2

0x32d4,	// (0x00098216) main_image_pane_g3_ParamLimits

0x32d4,	// (0x00098216) main_image_pane_g3

0x0002,

0xf4f7,	// (0x000a4439) main_image_pane_g_ParamLimits

0xf4f7,	// (0x000a4439) main_image_pane_g

0x32e5,	// (0x00098227) main_image_pane_t1_ParamLimits

0x32fc,	// (0x0009823e) main_image_pane_t2_ParamLimits

0x32fc,	// (0x0009823e) main_image_pane_t2

0x330e,	// (0x00098250) main_image_pane_t3_ParamLimits

0x330e,	// (0x00098250) main_image_pane_t3

0x3336,	// (0x00098278) main_image_pane_t4_ParamLimits

0x3336,	// (0x00098278) main_image_pane_t4

0x0003,

0xf4fe,	// (0x000a4440) main_image_pane_t_ParamLimits

0xf4fe,	// (0x000a4440) main_image_pane_t

0x3356,	// (0x00098298) popup_image_details_window_cp01

0x3360,	// (0x000982a2) popup_toobar_trans_pane_cp01_ParamLimits

0x3360,	// (0x000982a2) popup_toobar_trans_pane_cp01

0x497d,	// (0x000998bf) popup_image_details_window_ParamLimits

0x497d,	// (0x000998bf) popup_image_details_window

0xa652,	// (0x0009f594) popup_image_focus_window

0x4d93,	// (0x00099cd5) camera2_autofocus_pane_ParamLimits

0x4d93,	// (0x00099cd5) camera2_autofocus_pane

0xc97f,	// (0x000a18c1) bg_popup_sub_pane_cp06

0xac67,	// (0x0009fba9) popup_image_focus_window_g1

0xac6f,	// (0x0009fbb1) popup_image_focus_window_g2

0xac77,	// (0x0009fbb9) popup_image_focus_window_g3

0xac7f,	// (0x0009fbc1) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x000a464f) popup_image_focus_window_g

0xac87,	// (0x0009fbc9) popup_image_focus_window_t1

0xac95,	// (0x0009fbd7) popup_image_focus_window_t2

0xaca5,	// (0x0009fbe7) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x000a4658) popup_image_focus_window_t

0xacb3,	// (0x0009fbf5) camera2_autofocus_pane_g1

0xdabf,	// (0x000a2a01) bg_tb_trans_pane_cp01

0xacc1,	// (0x0009fc03) popup_image_details_window_g1

0xacd4,	// (0x0009fc16) popup_image_details_window_g2

0x0002,

0xf728,	// (0x000a466a) popup_image_details_window_g

0xacfd,	// (0x0009fc3f) popup_image_details_window_t1

0xad0f,	// (0x0009fc51) popup_image_details_window_t2

0xad28,	// (0x0009fc6a) popup_image_details_window_t3

0xad3c,	// (0x0009fc7e) popup_image_details_window_t4

0xad57,	// (0x0009fc99) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x000a4671) popup_image_details_window_t

0xe30a,	// (0x000a324c) bg_calc_paper_pane_ParamLimits

0xa164,	// (0x0009f0a6) grid_highlight_pane_cp013

0xa176,	// (0x0009f0b8) list_calc_pane_ParamLimits

0xa188,	// (0x0009f0ca) scroll_pane_cp024

0xe31e,	// (0x000a3260) bg_calc_display_pane_ParamLimits

0x0f2e,	// (0x00095e70) calc_display_pane_t1_ParamLimits

0x0f40,	// (0x00095e82) calc_display_pane_t2_ParamLimits

0xa190,	// (0x0009f0d2) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x000a40a1) calc_display_pane_t_ParamLimits

0x1003,	// (0x00095f45) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x000a40be) cell_calc_pane_g

0x100c,	// (0x00095f4e) cell_calc_pane_t1

0xe37d,	// (0x000a32bf) grid_highlight_pane_cp02_ParamLimits

0xe393,	// (0x000a32d5) toolbar_button_pane_cp01_ParamLimits

0xe393,	// (0x000a32d5) toolbar_button_pane_cp01

0x33a2,	// (0x000982e4) temp_image_control_pane_ParamLimits

0x33a2,	// (0x000982e4) temp_image_control_pane

0xa156,	// (0x0009f098) main_mp3_pane

0xad71,	// (0x0009fcb3) temp_image_control_pane_g1_ParamLimits

0xad71,	// (0x0009fcb3) temp_image_control_pane_g1

0xad7f,	// (0x0009fcc1) temp_image_control_pane_g2_ParamLimits

0xad7f,	// (0x0009fcc1) temp_image_control_pane_g2

0xad91,	// (0x0009fcd3) temp_image_control_pane_g3_ParamLimits

0xad91,	// (0x0009fcd3) temp_image_control_pane_g3

0x55ea,	// (0x0009a52c) temp_image_control_pane_g4_ParamLimits

0x55ea,	// (0x0009a52c) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x000a467c) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x000a467c) temp_image_control_pane_g

0xad71,	// (0x0009fcb3) main_mp3_pane_g1

0x55fd,	// (0x0009a53f) main_mp3_pane_g2

0x0007,

0xf743,	// (0x000a4685) main_mp3_pane_g

0xadd4,	// (0x0009fd16) main_mp3_pane_t1

0xe4df,	// (0x000a3421) main_camera_pane_g8_ParamLimits

0xe4df,	// (0x000a3421) main_camera_pane_g8

0x16dc,	// (0x0009661e) main_video_pane_g7_ParamLimits

0x16dc,	// (0x0009661e) main_video_pane_g7

0xa75f,	// (0x0009f6a1) main_camera2_pane_t7_ParamLimits

0xa75f,	// (0x0009f6a1) main_camera2_pane_t7

0xe6e5,	// (0x000a3627) scroll_pane_cp025_ParamLimits

0xe6e5,	// (0x000a3627) scroll_pane_cp025

0xe6f9,	// (0x000a363b) scroll_pane_cp026_ParamLimits

0xe6f9,	// (0x000a363b) scroll_pane_cp026

0xe708,	// (0x000a364a) wml_content_pane_ParamLimits

0xa164,	// (0x0009f0a6) main_touch_calib_pane

0x56c9,	// (0x0009a60b) main_touch_calib_pane_g1

0x56d5,	// (0x0009a617) main_touch_calib_pane_g2

0x56e1,	// (0x0009a623) main_touch_calib_pane_g3

0x56ed,	// (0x0009a62f) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x000a46a3) main_touch_calib_pane_g

0x56f9,	// (0x0009a63b) main_touch_calib_pane_t1

0x5713,	// (0x0009a655) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x000a46ac) main_touch_calib_pane_t

0xee46,	// (0x000a3d88) mup_progress_pane_cp02

0xee65,	// (0x000a3da7) navi_pane_g1

0xeec7,	// (0x000a3e09) navi_pane_mp_t3

0xa156,	// (0x0009f098) main_mp3_pane_ParamLimits

0x4b0a,	// (0x00099a4c) navi_pane_ParamLimits

0xad71,	// (0x0009fcb3) main_mp3_pane_g1_ParamLimits

0x55fd,	// (0x0009a53f) main_mp3_pane_g2_ParamLimits

0x560b,	// (0x0009a54d) main_mp3_pane_g3_ParamLimits

0x560b,	// (0x0009a54d) main_mp3_pane_g3

0x5619,	// (0x0009a55b) main_mp3_pane_g4_ParamLimits

0x5619,	// (0x0009a55b) main_mp3_pane_g4

0xada1,	// (0x0009fce3) main_mp3_pane_g5_ParamLimits

0xada1,	// (0x0009fce3) main_mp3_pane_g5

0xadaf,	// (0x0009fcf1) main_mp3_pane_g6_ParamLimits

0xadaf,	// (0x0009fcf1) main_mp3_pane_g6

0xadbc,	// (0x0009fcfe) main_mp3_pane_g7_ParamLimits

0xadbc,	// (0x0009fcfe) main_mp3_pane_g7

0xadc8,	// (0x0009fd0a) main_mp3_pane_g8_ParamLimits

0xadc8,	// (0x0009fd0a) main_mp3_pane_g8

0xf743,	// (0x000a4685) main_mp3_pane_g_ParamLimits

0x5627,	// (0x0009a569) main_mp3_pane_t2

0x5635,	// (0x0009a577) main_mp3_pane_t3

0xade2,	// (0x0009fd24) main_mp3_pane_t4

0xadf0,	// (0x0009fd32) main_mp3_pane_t5

0x0005,

0xf754,	// (0x000a4696) main_mp3_pane_t

0xadfe,	// (0x0009fd40) mup_progress_pane_cp01

0xa10c,	// (0x0009f04e) aid_zoom_text_secondary2

0xabbd,	// (0x0009faff) list_cale_ev2_pane

0xabc5,	// (0x0009fb07) scroll_pane_cp023_ParamLimits

0x5769,	// (0x0009a6ab) field_cale_ev2_pane_ParamLimits

0x5769,	// (0x0009a6ab) field_cale_ev2_pane

0x578f,	// (0x0009a6d1) field_cale_ev2_pane_g1_ParamLimits

0x578f,	// (0x0009a6d1) field_cale_ev2_pane_g1

0x579b,	// (0x0009a6dd) field_cale_ev2_pane_g2_ParamLimits

0x579b,	// (0x0009a6dd) field_cale_ev2_pane_g2

0x57b3,	// (0x0009a6f5) field_cale_ev2_pane_g3_ParamLimits

0x57b3,	// (0x0009a6f5) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x000a46b7) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x000a46b7) field_cale_ev2_pane_g

0xae12,	// (0x0009fd54) field_cale_ev2_pane_t1_ParamLimits

0xae12,	// (0x0009fd54) field_cale_ev2_pane_t1

0xae29,	// (0x0009fd6b) field_cale_ev2_pane_t2_ParamLimits

0xae29,	// (0x0009fd6b) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x000a46c0) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x000a46c0) field_cale_ev2_pane_t

0x308d,	// (0x00097fcf) main_postcard_pane_g5_ParamLimits

0x308d,	// (0x00097fcf) main_postcard_pane_g5

0x30a3,	// (0x00097fe5) main_postcard_pane_g6_ParamLimits

0x30a3,	// (0x00097fe5) main_postcard_pane_g6

0x148c,	// (0x000963ce) camera2_autofocus_pane_cp_ParamLimits

0x148c,	// (0x000963ce) camera2_autofocus_pane_cp

0xa156,	// (0x0009f098) main_mup3_pane

0x57eb,	// (0x0009a72d) main_mup3_pane_g1_ParamLimits

0x57eb,	// (0x0009a72d) main_mup3_pane_g1

0x580d,	// (0x0009a74f) main_mup3_pane_g2_ParamLimits

0x580d,	// (0x0009a74f) main_mup3_pane_g2

0x5892,	// (0x0009a7d4) main_mup3_pane_g3_ParamLimits

0x5892,	// (0x0009a7d4) main_mup3_pane_g3

0x58d8,	// (0x0009a81a) main_mup3_pane_g4_ParamLimits

0x58d8,	// (0x0009a81a) main_mup3_pane_g4

0x591e,	// (0x0009a860) main_mup3_pane_g5_ParamLimits

0x591e,	// (0x0009a860) main_mup3_pane_g5

0x5966,	// (0x0009a8a8) main_mup3_pane_g6_ParamLimits

0x5966,	// (0x0009a8a8) main_mup3_pane_g6

0xae3e,	// (0x0009fd80) main_mup3_pane_g7_ParamLimits

0xae3e,	// (0x0009fd80) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x000a46d0) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x000a46d0) main_mup3_pane_g

0x59e6,	// (0x0009a928) main_mup3_pane_t1_ParamLimits

0x59e6,	// (0x0009a928) main_mup3_pane_t1

0x5a5a,	// (0x0009a99c) main_mup3_pane_t2_ParamLimits

0x5a5a,	// (0x0009a99c) main_mup3_pane_t2

0x5b2e,	// (0x0009aa70) main_mup3_pane_t4_ParamLimits

0x5b2e,	// (0x0009aa70) main_mup3_pane_t4

0x5b8c,	// (0x0009aace) main_mup3_pane_t5_ParamLimits

0x5b8c,	// (0x0009aace) main_mup3_pane_t5

0x5c48,	// (0x0009ab8a) main_mup3_pane_t6_ParamLimits

0x5c48,	// (0x0009ab8a) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x000a46e1) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x000a46e1) main_mup3_pane_t

0x5d00,	// (0x0009ac42) mup3_progress_pane_ParamLimits

0x5d00,	// (0x0009ac42) mup3_progress_pane

0x5d8c,	// (0x0009acce) popup_mup3_control_window_ParamLimits

0x5d8c,	// (0x0009acce) popup_mup3_control_window

0xae4c,	// (0x0009fd8e) popup_mup3_text_window

0x5dbe,	// (0x0009ad00) mup3_progress_pane_t1

0x5ddd,	// (0x0009ad1f) mup3_progress_pane_t2

0xae54,	// (0x0009fd96) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x000a46ee) mup3_progress_pane_t

0xae71,	// (0x0009fdb3) mup_progress_pane_cp03

0xc97f,	// (0x000a18c1) bg_tb_trans_pane_cp04

0x5dfc,	// (0x0009ad3e) mup3_volume_pane

0x5e04,	// (0x0009ad46) popup_mup3_control_window_g1

0x5e0d,	// (0x0009ad4f) mup3_volume_pane_g1

0x5e16,	// (0x0009ad58) mup3_volume_pane_g2

0x5e1f,	// (0x0009ad61) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x000a46f5) mup3_volume_pane_g

0xc97f,	// (0x000a18c1) bg_tb_trans_pane_cp03

0xae81,	// (0x0009fdc3) popup_mup3_text_window_g1

0xae89,	// (0x0009fdcb) popup_mup3_text_window_t1

0xe366,	// (0x000a32a8) list_calc_item_pane_g1_ParamLimits

0xa847,	// (0x0009f789) mup_volume_pane_cp_g1

0x572d,	// (0x0009a66f) main_touch_calib_pane_t3

0x5741,	// (0x0009a683) main_touch_calib_pane_t4

0x5755,	// (0x0009a697) main_touch_calib_pane_t5

0xa0e8,	// (0x0009f02a) aid_cell_size_toolbar2

0xa0f0,	// (0x0009f032) aid_popup3_width_pane

0xa0fc,	// (0x0009f03e) aid_zoom_text_msg_primary

0xa262,	// (0x0009f1a4) vorec_t7

0xe32a,	// (0x000a326c) bg_calc_paper_pane_g1_ParamLimits

0xe336,	// (0x000a3278) bg_calc_paper_pane_g2_ParamLimits

0xe342,	// (0x000a3284) bg_calc_paper_pane_g3_ParamLimits

0xe34e,	// (0x000a3290) bg_calc_paper_pane_g4_ParamLimits

0xe35a,	// (0x000a329c) bg_calc_paper_pane_g5_ParamLimits

0x0f89,	// (0x00095ecb) bg_calc_paper_pane_g6_ParamLimits

0x0f9a,	// (0x00095edc) bg_calc_paper_pane_g7_ParamLimits

0x0fab,	// (0x00095eed) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x000a40a8) bg_calc_paper_pane_g_ParamLimits

0x0fbe,	// (0x00095f00) calc_bg_paper_pane_g9_ParamLimits

0x15e6,	// (0x00096528) image_qvga_pane_ParamLimits

0x15e6,	// (0x00096528) image_qvga_pane

0xe207,	// (0x000a3149) bg_popup_sub_pane_cp04_ParamLimits

0x3221,	// (0x00098163) popup_mup_playback_window_g1_ParamLimits

0x322d,	// (0x0009816f) popup_mup_playback_window_t1_ParamLimits

0x3242,	// (0x00098184) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x000a4434) popup_mup_playback_window_t_ParamLimits

0x528a,	// (0x0009a1cc) main_mup2_pane_g3_ParamLimits

0x528a,	// (0x0009a1cc) main_mup2_pane_g3

0x193d,	// (0x0009687f) popup_toolbar_window_cp04

0x3a3b,	// (0x0009897d) popup_call2_audio_second_window_g3_ParamLimits

0x3a3b,	// (0x0009897d) popup_call2_audio_second_window_g3

0x3e45,	// (0x00098d87) popup_call2_audio_first_window_g4_ParamLimits

0x3e45,	// (0x00098d87) popup_call2_audio_first_window_g4

0x44c4,	// (0x00099406) popup_call2_audio_in_window_g4_ParamLimits

0x44c4,	// (0x00099406) popup_call2_audio_in_window_g4

0x3257,	// (0x00098199) aid_area_sk_bg_cut_ParamLimits

0x3257,	// (0x00098199) aid_area_sk_bg_cut

0x3275,	// (0x000981b7) aid_area_sk_bg_cut_2_ParamLimits

0x3275,	// (0x000981b7) aid_area_sk_bg_cut_2

0x5590,	// (0x0009a4d2) aid_placing_details_win

0x5598,	// (0x0009a4da) aid_placing_details_win_2

0xacb3,	// (0x0009fbf5) camera2_autofocus_pane_g1_ParamLimits

0x0bb3,	// (0x00095af5) popup_fixed_preview_cale_window_ParamLimits

0x0bb3,	// (0x00095af5) popup_fixed_preview_cale_window

0xef16,	// (0x000a3e58) navi_slider_pane_g3

0xef1f,	// (0x000a3e61) navi_slider_pane_g4

0xef28,	// (0x000a3e6a) navi_slider_pane_g5

0xef16,	// (0x000a3e58) navi_slider_pane_g6

0xa31e,	// (0x0009f260) navi_slider_pane_g7

0xf049,	// (0x000a3f8b) mup_scale_pane_g3

0xf052,	// (0x000a3f94) mup_scale_pane_g4

0xf05b,	// (0x000a3f9d) mup_scale_pane_g5

0x2e9a,	// (0x00097ddc) mup_scale_pane_g6

0x2ea3,	// (0x00097de5) mup_scale_pane_g7

0xef16,	// (0x000a3e58) cams2_slider_pane_g3

0xa8fc,	// (0x0009f83e) cams2_slider_pane_g4

0xa904,	// (0x0009f846) cams2_slider_pane_g5

0xef16,	// (0x000a3e58) cams2_slider_pane_g6

0xa90c,	// (0x0009f84e) cams2_slider_pane_g7

0xab3a,	// (0x0009fa7c) camera2_autofocus_pane_cp_g1

0xae97,	// (0x0009fdd9) bg_popup_preview_window_pane_cp02_ParamLimits

0xae97,	// (0x0009fdd9) bg_popup_preview_window_pane_cp02

0xaea3,	// (0x0009fde5) list_fp_cale_pane_ParamLimits

0xaea3,	// (0x0009fde5) list_fp_cale_pane

0xaeaf,	// (0x0009fdf1) popup_fixed_preview_cale_window_t1_ParamLimits

0xaeaf,	// (0x0009fdf1) popup_fixed_preview_cale_window_t1

0x5e28,	// (0x0009ad6a) popup_fixed_preview_cale_window_t2_ParamLimits

0x5e28,	// (0x0009ad6a) popup_fixed_preview_cale_window_t2

0x5e3d,	// (0x0009ad7f) popup_fixed_preview_cale_window_t3_ParamLimits

0x5e3d,	// (0x0009ad7f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x000a46fc) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x000a46fc) popup_fixed_preview_cale_window_t

0x5e52,	// (0x0009ad94) list_single_fp_cale_pane_ParamLimits

0x5e52,	// (0x0009ad94) list_single_fp_cale_pane

0xaecd,	// (0x0009fe0f) list_single_fp_cale_pane_g1_ParamLimits

0xaecd,	// (0x0009fe0f) list_single_fp_cale_pane_g1

0xaed9,	// (0x0009fe1b) list_single_fp_cale_pane_g2_ParamLimits

0xaed9,	// (0x0009fe1b) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x000a4703) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x000a4703) list_single_fp_cale_pane_g

0xaef2,	// (0x0009fe34) list_single_fp_cale_pane_t1_ParamLimits

0xaef2,	// (0x0009fe34) list_single_fp_cale_pane_t1

0xaf04,	// (0x0009fe46) list_single_fp_cale_pane_t2_ParamLimits

0xaf04,	// (0x0009fe46) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x000a470a) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x000a470a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa164,	// (0x0009f0a6) main_dialer_pane

0x5e6a,	// (0x0009adac) aid_cell_size_keypad

0x5e74,	// (0x0009adb6) dialer_ne_pane

0x5e7c,	// (0x0009adbe) grid_dialer_command_1_pane

0x5e84,	// (0x0009adc6) grid_dialer_command_2_pane

0x5e8c,	// (0x0009adce) grid_dialer_keypad_pane

0x5e9e,	// (0x0009ade0) bg_popup_call_pane_cp06_ParamLimits

0x5e9e,	// (0x0009ade0) bg_popup_call_pane_cp06

0x5eaa,	// (0x0009adec) dialer_ne_clear_pane_ParamLimits

0x5eaa,	// (0x0009adec) dialer_ne_clear_pane

0xaf37,	// (0x0009fe79) dialer_ne_pane_g1

0xaf3f,	// (0x0009fe81) dialer_ne_pane_t1_ParamLimits

0xaf3f,	// (0x0009fe81) dialer_ne_pane_t1

0x5eb6,	// (0x0009adf8) dialer_ne_pane_t2_ParamLimits

0x5eb6,	// (0x0009adf8) dialer_ne_pane_t2

0x5ee0,	// (0x0009ae22) dialer_ne_pane_t3_ParamLimits

0x5ee0,	// (0x0009ae22) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x000a470f) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x000a470f) dialer_ne_pane_t

0x5f10,	// (0x0009ae52) dialer_ne_pane_t3_copy1_ParamLimits

0x5f10,	// (0x0009ae52) dialer_ne_pane_t3_copy1

0x5f3f,	// (0x0009ae81) cell_dialer_keypad_pane_ParamLimits

0x5f3f,	// (0x0009ae81) cell_dialer_keypad_pane

0x5f56,	// (0x0009ae98) cell_dialer_command_1_pane_ParamLimits

0x5f56,	// (0x0009ae98) cell_dialer_command_1_pane

0x5f6c,	// (0x0009aeae) cell_dialer_command_2_pane_ParamLimits

0x5f6c,	// (0x0009aeae) cell_dialer_command_2_pane

0xaf51,	// (0x0009fe93) bg_button_pane_cp02_ParamLimits

0xaf51,	// (0x0009fe93) bg_button_pane_cp02

0x5f7b,	// (0x0009aebd) cell_dialer_keypad_pane_g1_ParamLimits

0x5f7b,	// (0x0009aebd) cell_dialer_keypad_pane_g1

0xaf51,	// (0x0009fe93) bg_button_pane_cp03_ParamLimits

0xaf51,	// (0x0009fe93) bg_button_pane_cp03

0x5f90,	// (0x0009aed2) cell_dialer_command_1_pane_g1_ParamLimits

0x5f90,	// (0x0009aed2) cell_dialer_command_1_pane_g1

0xaf5d,	// (0x0009fe9f) bg_button_pane_cp04

0x5fa4,	// (0x0009aee6) cell_dialer_command_2_pane_g1

0xef05,	// (0x000a3e47) bg_button_pane_cp06

0xaf65,	// (0x0009fea7) dialer_ne_clear_pane_g1

0x29c8,	// (0x0009790a) navi_pane_g2

0x29f6,	// (0x00097938) navi_pane_g3

0x0002,

0xf3f5,	// (0x000a4337) navi_pane_g

0x2a1f,	// (0x00097961) navi_pane_mv_g2

0x2a46,	// (0x00097988) navi_pane_mv_g5

0x2a4e,	// (0x00097990) navi_pane_mv_t1

0xe31e,	// (0x000a3260) main_clock2_pane

0x5fde,	// (0x0009af20) main_clock2_list_pane_ParamLimits

0x5fde,	// (0x0009af20) main_clock2_list_pane

0x6018,	// (0x0009af5a) main_clock2_pane_t1_ParamLimits

0x6018,	// (0x0009af5a) main_clock2_pane_t1

0x6056,	// (0x0009af98) main_clock2_pane_t2_ParamLimits

0x6056,	// (0x0009af98) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x000a4716) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x000a4716) main_clock2_pane_t

0x60f3,	// (0x0009b035) popup_clock_analogue_window_cp03_ParamLimits

0x60f3,	// (0x0009b035) popup_clock_analogue_window_cp03

0x611a,	// (0x0009b05c) popup_clock_digital_window_cp02_ParamLimits

0x611a,	// (0x0009b05c) popup_clock_digital_window_cp02

0x618f,	// (0x0009b0d1) main_clock2_list_single_pane_ParamLimits

0x618f,	// (0x0009b0d1) main_clock2_list_single_pane

0xef05,	// (0x000a3e47) list_highlight_pane_cp05

0xaf6d,	// (0x0009feaf) main_clock2_list_single_pane_t1

0x193d,	// (0x0009687f) popup_toolbar_window_cp04_ParamLimits

0x55ba,	// (0x0009a4fc) camera2_autofocus_pane_g2_ParamLimits

0x55ba,	// (0x0009a4fc) camera2_autofocus_pane_g2

0x55c6,	// (0x0009a508) camera2_autofocus_pane_g3_ParamLimits

0x55c6,	// (0x0009a508) camera2_autofocus_pane_g3

0x55d2,	// (0x0009a514) camera2_autofocus_pane_g4_ParamLimits

0x55d2,	// (0x0009a514) camera2_autofocus_pane_g4

0x55de,	// (0x0009a520) camera2_autofocus_pane_g5_ParamLimits

0x55de,	// (0x0009a520) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x000a465f) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x000a465f) camera2_autofocus_pane_g

0x57cb,	// (0x0009a70d) camera2_autofocus_pane_cp_g2

0x57d3,	// (0x0009a715) camera2_autofocus_pane_cp_g3

0x57db,	// (0x0009a71d) camera2_autofocus_pane_cp_g4

0x57e3,	// (0x0009a725) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x000a46c5) camera2_autofocus_pane_cp_g

0x5e96,	// (0x0009add8) popup_dialer_spcha_window

0xc97f,	// (0x000a18c1) bg_popup_sub_pane_cp07

0xaf7b,	// (0x0009febd) list_spcha_pane

0xaf83,	// (0x0009fec5) list_single_spcha_pane_ParamLimits

0xaf83,	// (0x0009fec5) list_single_spcha_pane

0xc97f,	// (0x000a18c1) list_highlight_pane_cp06

0xaf94,	// (0x0009fed6) list_single_spcha_pane_t1

0x426e,	// (0x000991b0) popup_call2_audio_out_window_g4_ParamLimits

0x426e,	// (0x000991b0) popup_call2_audio_out_window_g4

0xa164,	// (0x0009f0a6) main_imed2_pane

0xa65a,	// (0x0009f59c) popup_imed_adjust2_window

0x4995,	// (0x000998d7) popup_imed_trans_window_ParamLimits

0x4995,	// (0x000998d7) popup_imed_trans_window

0xa976,	// (0x0009f8b8) popup_blid_sat_info2_window_t1

0xa984,	// (0x0009f8c6) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x000a45f4) popup_blid_sat_info2_window_t

0x6237,	// (0x0009b179) aid_size_cell_colour_35

0x6257,	// (0x0009b199) aid_size_cell_colour_112

0x6277,	// (0x0009b1b9) aid_size_cell_effect

0xa632,	// (0x0009f574) bg_tb_trans_pane_cp02

0xe9c0,	// (0x000a3902) heading_imed_pane

0x6297,	// (0x0009b1d9) listscroll_imed_pane

0xafa2,	// (0x0009fee4) heading_imed_pane_g1

0xafaa,	// (0x0009feec) heading_imed_pane_t1

0xafb8,	// (0x0009fefa) grid_imed_colour_35_pane_ParamLimits

0xafb8,	// (0x0009fefa) grid_imed_colour_35_pane

0x62a3,	// (0x0009b1e5) grid_imed_effect_pane

0xafd3,	// (0x0009ff15) list_imed_aspect_pane

0x62b8,	// (0x0009b1fa) scroll_pane_cp027_ParamLimits

0x62b8,	// (0x0009b1fa) scroll_pane_cp027

0x62c9,	// (0x0009b20b) cell_imed_effect_pane_ParamLimits

0x62c9,	// (0x0009b20b) cell_imed_effect_pane

0xafdb,	// (0x0009ff1d) cell_imed_colour_pane_ParamLimits

0xafdb,	// (0x0009ff1d) cell_imed_colour_pane

0xb01d,	// (0x0009ff5f) cell_imed_colour_pane_g1_ParamLimits

0xb01d,	// (0x0009ff5f) cell_imed_colour_pane_g1

0xb02e,	// (0x0009ff70) hgihlgiht_grid_pane_cp016_ParamLimits

0xb02e,	// (0x0009ff70) hgihlgiht_grid_pane_cp016

0x62f0,	// (0x0009b232) cell_imed_effect_pane_g1

0x62f8,	// (0x0009b23a) grid_highlight_pane_cp017

0xb03f,	// (0x0009ff81) list_imed_single_pane_ParamLimits

0xb03f,	// (0x0009ff81) list_imed_single_pane

0xc97f,	// (0x000a18c1) list_highlight_pane_cp07

0xb056,	// (0x0009ff98) list_imed_aspect_pane_comp1_t1

0xa632,	// (0x0009f574) bg_tb_trans_pane_cp05

0xb078,	// (0x0009ffba) popup_imed_adjust2_window_g1

0xb09f,	// (0x0009ffe1) popup_imed_adjust2_window_t1

0xb0b7,	// (0x0009fff9) slider_imed_adjust_pane

0xb0cb,	// (0x000a000d) slider_imed_adjust_pane_g1

0xb0db,	// (0x000a001d) slider_imed_adjust_pane_g2

0xb0eb,	// (0x000a002d) slider_imed_adjust_pane_g3

0xb0fc,	// (0x000a003e) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x000a4733) slider_imed_adjust_pane_g

0x6301,	// (0x0009b243) aid_size_cell_clipart2

0x630d,	// (0x0009b24f) grid_imed_clipart_pane

0xb10d,	// (0x000a004f) scroll_pane_cp031

0x6317,	// (0x0009b259) cell_imed_clipart_pane_ParamLimits

0x6317,	// (0x0009b259) cell_imed_clipart_pane

0x633e,	// (0x0009b280) cell_imed_clipart_pane_g1

0xc97f,	// (0x000a18c1) grid_highlight_pane_cp014

0x5ff3,	// (0x0009af35) main_clock2_pane_g1_ParamLimits

0x5ff3,	// (0x0009af35) main_clock2_pane_g1

0x613a,	// (0x0009b07c) aid_call2_pane_cp10

0x614c,	// (0x0009b08e) aid_call_pane_cp10

0xee3a,	// (0x000a3d7c) popup_clock_analogue_window_cp10_g1

0xee3a,	// (0x000a3d7c) popup_clock_analogue_window_cp10_g2

0x615e,	// (0x0009b0a0) popup_clock_analogue_window_cp10_g3

0x615e,	// (0x0009b0a0) popup_clock_analogue_window_cp10_g4

0xee3a,	// (0x000a3d7c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x000a4721) popup_clock_analogue_window_cp10_g

0x6170,	// (0x0009b0b2) popup_clock_analogue_window_cp10_t1

0x61a1,	// (0x0009b0e3) clock_digital_number_pane_cp10_ParamLimits

0x61a1,	// (0x0009b0e3) clock_digital_number_pane_cp10

0x61b9,	// (0x0009b0fb) clock_digital_number_pane_cp11_ParamLimits

0x61b9,	// (0x0009b0fb) clock_digital_number_pane_cp11

0x61d1,	// (0x0009b113) clock_digital_number_pane_cp12_ParamLimits

0x61d1,	// (0x0009b113) clock_digital_number_pane_cp12

0x61e9,	// (0x0009b12b) clock_digital_number_pane_cp13_ParamLimits

0x61e9,	// (0x0009b12b) clock_digital_number_pane_cp13

0x6201,	// (0x0009b143) clock_digital_separator_pane_cp10_ParamLimits

0x6201,	// (0x0009b143) clock_digital_separator_pane_cp10

0x6219,	// (0x0009b15b) popup_clock_digital_window_cp02_t1_ParamLimits

0x6219,	// (0x0009b15b) popup_clock_digital_window_cp02_t1

0xe1ff,	// (0x000a3141) clock_digital_number_pane_cp10_g1

0xe1ff,	// (0x000a3141) clock_digital_number_pane_cp10_g2

0x0001,

0x01a5,	// (0x000950e7) clock_digital_number_pane_cp10_g

0xe1ff,	// (0x000a3141) clock_digital_separator_pane_cp10_g1

0xe1ff,	// (0x000a3141) clock_digital_separator_pane_g2_cp10

0xeed5,	// (0x000a3e17) navi_pane_vded_g4

0xeede,	// (0x000a3e20) navi_pane_vded_g5

0xeee7,	// (0x000a3e29) navi_pane_vded_t1

0xa164,	// (0x0009f0a6) main_vded_pane

0x6347,	// (0x0009b289) main_vded_pane_g1

0x6353,	// (0x0009b295) main_vded_pane_g2

0x635d,	// (0x0009b29f) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x000a473c) main_vded_pane_g

0x6367,	// (0x0009b2a9) main_vded_pane_t1

0x6375,	// (0x0009b2b7) main_vded_pane_t2

0x0001,

0xf801,	// (0x000a4743) main_vded_pane_t

0x6383,	// (0x0009b2c5) vded_slider_pane

0x638d,	// (0x0009b2cf) vded_video_pane

0xb115,	// (0x000a0057) vded_video_pane_g1

0x6397,	// (0x0009b2d9) vded_video_pane_g2

0xab3a,	// (0x0009fa7c) vded_video_pane_g3

0x0002,

0xf806,	// (0x000a4748) vded_video_pane_g

0xb11f,	// (0x000a0061) vded_slider_pane_g1

0xa847,	// (0x0009f789) vded_slider_pane_g2

0xb128,	// (0x000a006a) vded_slider_pane_g3

0xb131,	// (0x000a0073) vded_slider_pane_g4

0xb13a,	// (0x000a007c) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x000a474f) vded_slider_pane_g

0x5d74,	// (0x0009acb6) mup3_rocker_pane_ParamLimits

0x5d74,	// (0x0009acb6) mup3_rocker_pane

0x63a0,	// (0x0009b2e2) mup3_control_keys_pane_g1

0x63a8,	// (0x0009b2ea) mup3_control_keys_pane_g2

0x63b0,	// (0x0009b2f2) mup3_control_keys_pane_g3

0x63b8,	// (0x0009b2fa) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x000a475a) mup3_control_keys_pane_g

0x0bea,	// (0x00095b2c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0bea,	// (0x00095b2c) popup_toolbar2_fixed_window_cp01

0x5da8,	// (0x0009acea) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5da8,	// (0x0009acea) popup_toolbar2_fixed_window_cp02

0x3bad,	// (0x00098aef) popup_call2_audio_second_window_t4_ParamLimits

0x3bad,	// (0x00098aef) popup_call2_audio_second_window_t4

0x40db,	// (0x0009901d) popup_call2_audio_first_window_t6_ParamLimits

0x40db,	// (0x0009901d) popup_call2_audio_first_window_t6

0x4371,	// (0x000992b3) popup_call2_audio_out_window_t6_ParamLimits

0x4371,	// (0x000992b3) popup_call2_audio_out_window_t6

0xa164,	// (0x0009f0a6) main_vitu_pane

0x63c8,	// (0x0009b30a) aid_size_cell_itu_ParamLimits

0x63c8,	// (0x0009b30a) aid_size_cell_itu

0xdabf,	// (0x000a2a01) bg_popup_window_pane_cp08_ParamLimits

0xdabf,	// (0x000a2a01) bg_popup_window_pane_cp08

0x63de,	// (0x0009b320) field_vitu_entry_pane_ParamLimits

0x63de,	// (0x0009b320) field_vitu_entry_pane

0x63f5,	// (0x0009b337) grid_vitu_function_pane_ParamLimits

0x63f5,	// (0x0009b337) grid_vitu_function_pane

0x6410,	// (0x0009b352) grid_vitu_itu_pane_ParamLimits

0x6410,	// (0x0009b352) grid_vitu_itu_pane

0x642e,	// (0x0009b370) cell_vitu_itu_pane_ParamLimits

0x642e,	// (0x0009b370) cell_vitu_itu_pane

0x6452,	// (0x0009b394) cell_vitu_function_pane_ParamLimits

0x6452,	// (0x0009b394) cell_vitu_function_pane

0xdabf,	// (0x000a2a01) bg_popup_sub_pane_cp08_ParamLimits

0xdabf,	// (0x000a2a01) bg_popup_sub_pane_cp08

0x646d,	// (0x0009b3af) field_vitu_entry_pane_t1_ParamLimits

0x646d,	// (0x0009b3af) field_vitu_entry_pane_t1

0xb15b,	// (0x000a009d) field_vitu_entry_pane_t2_ParamLimits

0xb15b,	// (0x000a009d) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x000a4768) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x000a4768) field_vitu_entry_pane_t

0xb178,	// (0x000a00ba) bg_button_pane_cp05_ParamLimits

0xb178,	// (0x000a00ba) bg_button_pane_cp05

0x648d,	// (0x0009b3cf) cell_vitu_itu_pane_g1

0x64a5,	// (0x0009b3e7) cell_vitu_itu_pane_t1_ParamLimits

0x64a5,	// (0x0009b3e7) cell_vitu_itu_pane_t1

0x64b7,	// (0x0009b3f9) cell_vitu_itu_pane_t2_ParamLimits

0x64b7,	// (0x0009b3f9) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x000a476d) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x000a476d) cell_vitu_itu_pane_t

0xb186,	// (0x000a00c8) bg_button_pane_cp07

0x64ec,	// (0x0009b42e) cell_vitu_function_pane_g1

0xa16e,	// (0x0009f0b0) main_calc_pane_g1

0x0a2a,	// (0x0009596c) aid_visual_content_pane

0xa164,	// (0x0009f0a6) main_vradio_pane

0x64f5,	// (0x0009b437) main_vradio_pane_g1_ParamLimits

0x64f5,	// (0x0009b437) main_vradio_pane_g1

0xb190,	// (0x000a00d2) main_vradio_pane_g2_ParamLimits

0xb190,	// (0x000a00d2) main_vradio_pane_g2

0x0001,

0xf832,	// (0x000a4774) main_vradio_pane_g_ParamLimits

0xf832,	// (0x000a4774) main_vradio_pane_g

0x650e,	// (0x0009b450) main_vradio_pane_t1_ParamLimits

0x650e,	// (0x0009b450) main_vradio_pane_t1

0x6523,	// (0x0009b465) main_vradio_pane_t2_ParamLimits

0x6523,	// (0x0009b465) main_vradio_pane_t2

0xb19d,	// (0x000a00df) main_vradio_pane_t3_ParamLimits

0xb19d,	// (0x000a00df) main_vradio_pane_t3

0x0002,

0xf837,	// (0x000a4779) main_vradio_pane_t_ParamLimits

0xf837,	// (0x000a4779) main_vradio_pane_t

0x6538,	// (0x0009b47a) vradio_rocker_control_pane_ParamLimits

0x6538,	// (0x0009b47a) vradio_rocker_control_pane

0x654a,	// (0x0009b48c) vradio_station_info_pane_ParamLimits

0x654a,	// (0x0009b48c) vradio_station_info_pane

0xb1b1,	// (0x000a00f3) vradio_frequency_info_pane_ParamLimits

0xb1b1,	// (0x000a00f3) vradio_frequency_info_pane

0xab3a,	// (0x0009fa7c) vradio_station_info_pane_g1

0xb1c0,	// (0x000a0102) vradio_station_info_pane_t1_ParamLimits

0xb1c0,	// (0x000a0102) vradio_station_info_pane_t1

0xb1e2,	// (0x000a0124) vradio_station_info_pane_t2_ParamLimits

0xb1e2,	// (0x000a0124) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x000a4780) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x000a4780) vradio_station_info_pane_t

0xb1f4,	// (0x000a0136) vradio_tuning_pane

0xb1fc,	// (0x000a013e) vradio_rocker_control_pane_g1

0xb204,	// (0x000a0146) vradio_rocker_control_pane_g2

0xb20c,	// (0x000a014e) vradio_rocker_control_pane_g3

0xb214,	// (0x000a0156) vradio_rocker_control_pane_g4

0xb21c,	// (0x000a015e) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x000a4785) vradio_rocker_control_pane_g

0x655c,	// (0x0009b49e) vradio_frequency_info_pane_g1

0xb224,	// (0x000a0166) vradio_frequency_info_pane_t1_ParamLimits

0xb224,	// (0x000a0166) vradio_frequency_info_pane_t1

0x6566,	// (0x0009b4a8) vradio_tuning_pane_g1

0x6571,	// (0x0009b4b3) vradio_tuning_pane_t1

0xa114,	// (0x0009f056) area_side_right_pane_ParamLimits

0xa114,	// (0x0009f056) area_side_right_pane

0xa5f9,	// (0x0009f53b) status_small_pane_g1

0xa601,	// (0x0009f543) status_small_pane_g2

0xa60a,	// (0x0009f54c) status_small_pane_g3

0xa613,	// (0x0009f555) status_small_pane_g4

0x0003,

0xf608,	// (0x000a454a) status_small_pane_g

0xa61c,	// (0x0009f55e) status_small_pane_t1

0xa164,	// (0x0009f0a6) main_video3_pane

0xb238,	// (0x000a017a) cams_zoom_vslider_pane

0xb240,	// (0x000a0182) image3_wide_pane_ParamLimits

0xb240,	// (0x000a0182) image3_wide_pane

0xb25a,	// (0x000a019c) image3_wide_small_pane

0xb266,	// (0x000a01a8) main_video3_pane_g1_ParamLimits

0xb266,	// (0x000a01a8) main_video3_pane_g1

0xb282,	// (0x000a01c4) main_video3_pane_g2_ParamLimits

0xb282,	// (0x000a01c4) main_video3_pane_g2

0x0001,

0xf84e,	// (0x000a4790) main_video3_pane_g_ParamLimits

0xf84e,	// (0x000a4790) main_video3_pane_g

0xb29e,	// (0x000a01e0) main_video3_pane_t1_ParamLimits

0xb29e,	// (0x000a01e0) main_video3_pane_t1

0xb2c9,	// (0x000a020b) main_video3_pane_t2_ParamLimits

0xb2c9,	// (0x000a020b) main_video3_pane_t2

0xb2f4,	// (0x000a0236) main_video3_pane_t3_ParamLimits

0xb2f4,	// (0x000a0236) main_video3_pane_t3

0x0002,

0xf853,	// (0x000a4795) main_video3_pane_t_ParamLimits

0xf853,	// (0x000a4795) main_video3_pane_t

0xb321,	// (0x000a0263) cams_zoom_vslider_pane_g1

0xb32a,	// (0x000a026c) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x000a479c) cams_zoom_vslider_pane_g

0xb332,	// (0x000a0274) small_slider_vertical_pane

0xab3a,	// (0x0009fa7c) small_slider_vertical_pane_g1

0xab3a,	// (0x0009fa7c) small_slider_vertical_pane_g2

0xb33a,	// (0x000a027c) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x000a47a1) small_slider_vertical_pane_g

0xa164,	// (0x0009f0a6) main_hwr_training_pane

0xb343,	// (0x000a0285) hwr_training_instruct_pane_ParamLimits

0xb343,	// (0x000a0285) hwr_training_instruct_pane

0x6580,	// (0x0009b4c2) hwr_training_navi_pane_ParamLimits

0x6580,	// (0x0009b4c2) hwr_training_navi_pane

0x659f,	// (0x0009b4e1) hwr_training_write_pane_ParamLimits

0x659f,	// (0x0009b4e1) hwr_training_write_pane

0xc97f,	// (0x000a18c1) bg_frame_shadow_pane

0xb37a,	// (0x000a02bc) hwr_training_write_pane_g1

0xb382,	// (0x000a02c4) hwr_training_write_pane_g2

0xb38a,	// (0x000a02cc) hwr_training_write_pane_g3

0xb392,	// (0x000a02d4) hwr_training_write_pane_g4

0xb39a,	// (0x000a02dc) hwr_training_write_pane_g5

0xb3a2,	// (0x000a02e4) hwr_training_write_pane_g6

0xb3aa,	// (0x000a02ec) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x000a47a8) hwr_training_write_pane_g

0xb3b2,	// (0x000a02f4) hwr_training_navi_pane_g1_ParamLimits

0xb3b2,	// (0x000a02f4) hwr_training_navi_pane_g1

0xb3c4,	// (0x000a0306) hwr_training_navi_pane_g2_ParamLimits

0xb3c4,	// (0x000a0306) hwr_training_navi_pane_g2

0xb3d6,	// (0x000a0318) hwr_training_navi_pane_g3_ParamLimits

0xb3d6,	// (0x000a0318) hwr_training_navi_pane_g3

0xb3e6,	// (0x000a0328) hwr_training_navi_pane_g4_ParamLimits

0xb3e6,	// (0x000a0328) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x000a47b7) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x000a47b7) hwr_training_navi_pane_g

0xb3f3,	// (0x000a0335) hwr_training_navi_pane_t1

0x65e9,	// (0x0009b52b) list_single_hwr_training_instruct_pane_ParamLimits

0x65e9,	// (0x0009b52b) list_single_hwr_training_instruct_pane

0xccdf,	// (0x000a1c21) list_single_hwr_training_instruct_pane_t1

0xaa7a,	// (0x0009f9bc) bg_frame_shadow_pane_g1

0xccee,	// (0x000a1c30) bg_frame_shadow_pane_g2

0xccf6,	// (0x000a1c38) bg_frame_shadow_pane_g3

0xccfe,	// (0x000a1c40) bg_frame_shadow_pane_g4

0xcd06,	// (0x000a1c48) bg_frame_shadow_pane_g5

0xcd0e,	// (0x000a1c50) bg_frame_shadow_pane_g6

0xcd16,	// (0x000a1c58) bg_frame_shadow_pane_g7

0xe3e9,	// (0x000a332b) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x000a47c2) bg_frame_shadow_pane_g

0xa164,	// (0x0009f0a6) main_video_tele_dialer_pane

0x6606,	// (0x0009b548) aid_size_cell_video_keypad_ParamLimits

0x6606,	// (0x0009b548) aid_size_cell_video_keypad

0x6620,	// (0x0009b562) grid_video_dialer_keypad_pane_ParamLimits

0x6620,	// (0x0009b562) grid_video_dialer_keypad_pane

0x666c,	// (0x0009b5ae) video_down_pane_cp_ParamLimits

0x666c,	// (0x0009b5ae) video_down_pane_cp

0x669c,	// (0x0009b5de) cell_video_dialer_keypad_pane_ParamLimits

0x669c,	// (0x0009b5de) cell_video_dialer_keypad_pane

0xcd1e,	// (0x000a1c60) bg_button_pane_cp08_ParamLimits

0xcd1e,	// (0x000a1c60) bg_button_pane_cp08

0x66be,	// (0x0009b600) cell_video_dialer_keypad_pane_g1_ParamLimits

0x66be,	// (0x0009b600) cell_video_dialer_keypad_pane_g1

0x5d5e,	// (0x0009aca0) mup3_rocker2_pane_ParamLimits

0x5d5e,	// (0x0009aca0) mup3_rocker2_pane

0xab3a,	// (0x0009fa7c) mup3_rocker2_pane_g1

0x487e,	// (0x000997c0) main_dialer2_pane

0xa164,	// (0x0009f0a6) main_mp4_pane

0xb409,	// (0x000a034b) main_mp4_pane_g1_ParamLimits

0xb409,	// (0x000a034b) main_mp4_pane_g1

0xb409,	// (0x000a034b) main_mp4_pane_g2_ParamLimits

0xb409,	// (0x000a034b) main_mp4_pane_g2

0x66f9,	// (0x0009b63b) main_mp4_pane_g3_ParamLimits

0x66f9,	// (0x0009b63b) main_mp4_pane_g3

0xb417,	// (0x000a0359) main_mp4_pane_g4_ParamLimits

0xb417,	// (0x000a0359) main_mp4_pane_g4

0xb43f,	// (0x000a0381) main_mp4_pane_g5_ParamLimits

0xb43f,	// (0x000a0381) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x000a47e2) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x000a47e2) main_mp4_pane_g

0xb48f,	// (0x000a03d1) main_mp4_pane_t1_ParamLimits

0xb48f,	// (0x000a03d1) main_mp4_pane_t1

0xb4eb,	// (0x000a042d) main_mp4_pane_t2_ParamLimits

0xb4eb,	// (0x000a042d) main_mp4_pane_t2

0xcd2a,	// (0x000a1c6c) main_mp4_pane_t3_ParamLimits

0xcd2a,	// (0x000a1c6c) main_mp4_pane_t3

0xb53d,	// (0x000a047f) main_mp4_pane_t4_ParamLimits

0xb53d,	// (0x000a047f) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x000a47ef) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x000a47ef) main_mp4_pane_t

0xb581,	// (0x000a04c3) mp4_progress_pane_ParamLimits

0xb581,	// (0x000a04c3) mp4_progress_pane

0xb5cb,	// (0x000a050d) mp4_rocker_pane_ParamLimits

0xb5cb,	// (0x000a050d) mp4_rocker_pane

0xcd52,	// (0x000a1c94) mp4_progress_pane_t1

0xcd6b,	// (0x000a1cad) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x000a47f8) mp4_progress_pane_t

0xcd84,	// (0x000a1cc6) mup_progress_pane_cp04

0xcd90,	// (0x000a1cd2) mp4_rocker_pane_g1

0x6735,	// (0x0009b677) aid_cell_size_keypad2_ParamLimits

0x6735,	// (0x0009b677) aid_cell_size_keypad2

0x674b,	// (0x0009b68d) dialer2_ne_pane_ParamLimits

0x674b,	// (0x0009b68d) dialer2_ne_pane

0x6765,	// (0x0009b6a7) grid_dialer2_keypad_pane_ParamLimits

0x6765,	// (0x0009b6a7) grid_dialer2_keypad_pane

0xa91d,	// (0x0009f85f) bg_popup_call_pane_cp07_ParamLimits

0xa91d,	// (0x0009f85f) bg_popup_call_pane_cp07

0x6783,	// (0x0009b6c5) dialer2_ne_pane_t1_ParamLimits

0x6783,	// (0x0009b6c5) dialer2_ne_pane_t1

0x67c2,	// (0x0009b704) cell_dialer2_keypad_pane_ParamLimits

0x67c2,	// (0x0009b704) cell_dialer2_keypad_pane

0xcdac,	// (0x000a1cee) bg_button_pane_pane_cp04_ParamLimits

0xcdac,	// (0x000a1cee) bg_button_pane_pane_cp04

0x67e6,	// (0x0009b728) cell_dialer2_keypad_pane_g1_ParamLimits

0x67e6,	// (0x0009b728) cell_dialer2_keypad_pane_g1

0x1811,	// (0x00096753) aid_placing_vt_set_content_ParamLimits

0x1811,	// (0x00096753) aid_placing_vt_set_content

0x1839,	// (0x0009677b) aid_placing_vt_set_title_ParamLimits

0x1839,	// (0x0009677b) aid_placing_vt_set_title

0xa164,	// (0x0009f0a6) main_image3_pane

0x68ac,	// (0x0009b7ee) area_side_right_pane_cp01_ParamLimits

0x68ac,	// (0x0009b7ee) area_side_right_pane_cp01

0xb409,	// (0x000a034b) main_image3_pane_g1_ParamLimits

0xb409,	// (0x000a034b) main_image3_pane_g1

0x68c3,	// (0x0009b805) main_image3_pane_g2_ParamLimits

0x68c3,	// (0x0009b805) main_image3_pane_g2

0x68eb,	// (0x0009b82d) main_image3_pane_g3_ParamLimits

0x68eb,	// (0x0009b82d) main_image3_pane_g3

0x6915,	// (0x0009b857) main_image3_pane_g4_ParamLimits

0x6915,	// (0x0009b857) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x000a4807) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x000a4807) main_image3_pane_g

0x693f,	// (0x0009b881) main_image3_pane_t1_ParamLimits

0x693f,	// (0x0009b881) main_image3_pane_t1

0x6997,	// (0x0009b8d9) main_image3_pane_t2_ParamLimits

0x6997,	// (0x0009b8d9) main_image3_pane_t2

0x69e9,	// (0x0009b92b) main_image3_pane_t3_ParamLimits

0x69e9,	// (0x0009b92b) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x000a4810) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x000a4810) main_image3_pane_t

0xdabf,	// (0x000a2a01) grid_sctrl_middle_pane_cp01_ParamLimits

0xdabf,	// (0x000a2a01) grid_sctrl_middle_pane_cp01

0x6a71,	// (0x0009b9b3) cell_sctrl_middle_pane_cp01_ParamLimits

0x6a71,	// (0x0009b9b3) cell_sctrl_middle_pane_cp01

0x6a8e,	// (0x0009b9d0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6a8e,	// (0x0009b9d0) cell_sctrl_middle_pane_cp01_g1

0xa164,	// (0x0009f0a6) main_call4_pane

0x6aa4,	// (0x0009b9e6) aid_size_button_call4_ParamLimits

0x6aa4,	// (0x0009b9e6) aid_size_button_call4

0x6ad5,	// (0x0009ba17) call4_windows_pane_ParamLimits

0x6ad5,	// (0x0009ba17) call4_windows_pane

0x6af5,	// (0x0009ba37) grid_call4_button_pane_ParamLimits

0x6af5,	// (0x0009ba37) grid_call4_button_pane

0xcdb8,	// (0x000a1cfa) call4_windows_conf_pane

0xcdcd,	// (0x000a1d0f) popup_call4_audio_first_window_ParamLimits

0xcdcd,	// (0x000a1d0f) popup_call4_audio_first_window

0xce19,	// (0x000a1d5b) popup_call4_audio_second_window_ParamLimits

0xce19,	// (0x000a1d5b) popup_call4_audio_second_window

0xce2d,	// (0x000a1d6f) popup_call4_audio_wait_window_ParamLimits

0xce2d,	// (0x000a1d6f) popup_call4_audio_wait_window

0x6b22,	// (0x0009ba64) cell_call4_button_pane_ParamLimits

0x6b22,	// (0x0009ba64) cell_call4_button_pane

0x6b4b,	// (0x0009ba8d) bg_button_pane_cp09_ParamLimits

0x6b4b,	// (0x0009ba8d) bg_button_pane_cp09

0x6b57,	// (0x0009ba99) cell_call4_button_pane_g1_ParamLimits

0x6b57,	// (0x0009ba99) cell_call4_button_pane_g1

0x6b7d,	// (0x0009babf) cell_call4_button_pane_t1_ParamLimits

0x6b7d,	// (0x0009babf) cell_call4_button_pane_t1

0xcf07,	// (0x000a1e49) popup_call4_audio_conf_window_ParamLimits

0xcf07,	// (0x000a1e49) popup_call4_audio_conf_window

0x5dbe,	// (0x0009ad00) mup3_progress_pane_t1_ParamLimits

0x5ddd,	// (0x0009ad1f) mup3_progress_pane_t2_ParamLimits

0xae54,	// (0x0009fd96) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x000a46ee) mup3_progress_pane_t_ParamLimits

0xae71,	// (0x0009fdb3) mup_progress_pane_cp03_ParamLimits

0x63c0,	// (0x0009b302) mup3_control_keys_pane_g4_copy1

0xb5af,	// (0x000a04f1) mp4_rocker2_pane_ParamLimits

0xb5af,	// (0x000a04f1) mp4_rocker2_pane

0xcf1b,	// (0x000a1e5d) mp4_rocker2_pane_g1

0xcf23,	// (0x000a1e65) mp4_rocker2_pane_g2

0xb61d,	// (0x000a055f) mp4_rocker2_pane_g3

0xb625,	// (0x000a0567) mp4_rocker2_pane_g4

0xb62d,	// (0x000a056f) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x000a4819) mp4_rocker2_pane_g

0xa164,	// (0x0009f0a6) main_camera4_pane

0xa164,	// (0x0009f0a6) main_video4_pane

0x663a,	// (0x0009b57c) main_video_tele_dialer_pane_t1_ParamLimits

0x663a,	// (0x0009b57c) main_video_tele_dialer_pane_t1

0x6653,	// (0x0009b595) main_video_tele_dialer_pane_t2_ParamLimits

0x6653,	// (0x0009b595) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x000a47d3) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x000a47d3) main_video_tele_dialer_pane_t

0x6bbf,	// (0x0009bb01) cam4_autofocus_pane_ParamLimits

0x6bbf,	// (0x0009bb01) cam4_autofocus_pane

0x6bd5,	// (0x0009bb17) cam4_image_uncrop_pane_ParamLimits

0x6bd5,	// (0x0009bb17) cam4_image_uncrop_pane

0x6bef,	// (0x0009bb31) cam4_indicators_pane_ParamLimits

0x6bef,	// (0x0009bb31) cam4_indicators_pane

0x6c1a,	// (0x0009bb5c) main_camera4_pane_g1_ParamLimits

0x6c1a,	// (0x0009bb5c) main_camera4_pane_g1

0x6c2c,	// (0x0009bb6e) main_camera4_pane_g2_ParamLimits

0x6c2c,	// (0x0009bb6e) main_camera4_pane_g2

0x6c3f,	// (0x0009bb81) main_camera4_pane_g3_ParamLimits

0x6c3f,	// (0x0009bb81) main_camera4_pane_g3

0x6c52,	// (0x0009bb94) main_camera4_pane_g4_ParamLimits

0x6c52,	// (0x0009bb94) main_camera4_pane_g4

0x6c65,	// (0x0009bba7) main_camera4_pane_g5_ParamLimits

0x6c65,	// (0x0009bba7) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x000a4824) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x000a4824) main_camera4_pane_g

0x6c89,	// (0x0009bbcb) main_camera4_pane_t1_ParamLimits

0x6c89,	// (0x0009bbcb) main_camera4_pane_t1

0xb651,	// (0x000a0593) bg_tb_trans_pane_cp06

0xb667,	// (0x000a05a9) cam4_indicators_pane_g1

0xb678,	// (0x000a05ba) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x000a483f) cam4_indicators_pane_g

0xb696,	// (0x000a05d8) cam4_indicators_pane_t1

0x6ced,	// (0x0009bc2f) main_video4_pane_g1_ParamLimits

0x6ced,	// (0x0009bc2f) main_video4_pane_g1

0x6cfc,	// (0x0009bc3e) main_video4_pane_g2_ParamLimits

0x6cfc,	// (0x0009bc3e) main_video4_pane_g2

0x6d0b,	// (0x0009bc4d) main_video4_pane_g3_ParamLimits

0x6d0b,	// (0x0009bc4d) main_video4_pane_g3

0x6d1a,	// (0x0009bc5c) main_video4_pane_g4_ParamLimits

0x6d1a,	// (0x0009bc5c) main_video4_pane_g4

0x0004,

0xf904,	// (0x000a4846) main_video4_pane_g_ParamLimits

0xf904,	// (0x000a4846) main_video4_pane_g

0x6d38,	// (0x0009bc7a) vid4_indicators_pane_ParamLimits

0x6d38,	// (0x0009bc7a) vid4_indicators_pane

0x6d68,	// (0x0009bcaa) video4_image_uncrop_cif_pane_ParamLimits

0x6d68,	// (0x0009bcaa) video4_image_uncrop_cif_pane

0x6d82,	// (0x0009bcc4) video4_image_uncrop_nhd_pane_ParamLimits

0x6d82,	// (0x0009bcc4) video4_image_uncrop_nhd_pane

0x6bd5,	// (0x0009bb17) video4_image_uncrop_vga_pane_ParamLimits

0x6bd5,	// (0x0009bb17) video4_image_uncrop_vga_pane

0xa156,	// (0x0009f098) bg_tb_trans_pane_cp07

0xb6c0,	// (0x000a0602) vid4_indicators_pane_g1

0xb6d4,	// (0x000a0616) vid4_indicators_pane_g2

0xb6e8,	// (0x000a062a) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x000a4851) vid4_indicators_pane_g

0xb715,	// (0x000a0657) vid4_indicators_pane_t1

0x6d96,	// (0x0009bcd8) cam4_autofocus_pane_g1

0x6d9e,	// (0x0009bce0) cam4_autofocus_pane_g2

0x6da6,	// (0x0009bce8) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x000a485c) cam4_autofocus_pane_g

0x6dae,	// (0x0009bcf0) cam4_autofocus_pane_g3_copy1

0x6680,	// (0x0009b5c2) video_down_pane_cp_t1

0x668e,	// (0x0009b5d0) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x000a47d8) video_down_pane_cp_t

0xa156,	// (0x0009f098) popup_vitu2_window_ParamLimits

0xa156,	// (0x0009f098) popup_vitu2_window

0x6db6,	// (0x0009bcf8) aid_size_cell2_itu2_ParamLimits

0x6db6,	// (0x0009bcf8) aid_size_cell2_itu2

0x6ddc,	// (0x0009bd1e) aid_size_cell_itu2_ParamLimits

0x6ddc,	// (0x0009bd1e) aid_size_cell_itu2

0x6e38,	// (0x0009bd7a) bg_popup_window_pane_cp09_ParamLimits

0x6e38,	// (0x0009bd7a) bg_popup_window_pane_cp09

0x6e46,	// (0x0009bd88) field_vitu2_entry_pane_ParamLimits

0x6e46,	// (0x0009bd88) field_vitu2_entry_pane

0x6e6c,	// (0x0009bdae) grid_vitu2_function_pane_ParamLimits

0x6e6c,	// (0x0009bdae) grid_vitu2_function_pane

0x6ebd,	// (0x0009bdff) grid_vitu2_itu_pane_ParamLimits

0x6ebd,	// (0x0009bdff) grid_vitu2_itu_pane

0x6f4e,	// (0x0009be90) cell_vitu2_itu_pane_ParamLimits

0x6f4e,	// (0x0009be90) cell_vitu2_itu_pane

0x6f72,	// (0x0009beb4) cell_vitu2_function_pane_ParamLimits

0x6f72,	// (0x0009beb4) cell_vitu2_function_pane

0xcf2b,	// (0x000a1e6d) bg_popup_call_pane_cp08_ParamLimits

0xcf2b,	// (0x000a1e6d) bg_popup_call_pane_cp08

0xcf44,	// (0x000a1e86) field_vitu2_entry_pane_g1

0xcf50,	// (0x000a1e92) field_vitu2_entry_pane_g2

0x0002,

0x02d1,	// (0x00095213) field_vitu2_entry_pane_g

0x6fb1,	// (0x0009bef3) field_vitu2_entry_pane_t1_ParamLimits

0x6fb1,	// (0x0009bef3) field_vitu2_entry_pane_t1

0xb72c,	// (0x000a066e) field_vitu2_entry_pane_t2_ParamLimits

0xb72c,	// (0x000a066e) field_vitu2_entry_pane_t2

0x0001,

0xf921,	// (0x000a4863) field_vitu2_entry_pane_t_ParamLimits

0xf921,	// (0x000a4863) field_vitu2_entry_pane_t

0x6fe2,	// (0x0009bf24) bg_button_pane_cp010_ParamLimits

0x6fe2,	// (0x0009bf24) bg_button_pane_cp010

0x6ff0,	// (0x0009bf32) cell_vitu2_itu_pane_g1

0x700e,	// (0x0009bf50) cell_vitu2_itu_pane_t1_ParamLimits

0x700e,	// (0x0009bf50) cell_vitu2_itu_pane_t1

0x0912,	// (0x00095854) cell_vitu2_itu_pane_t2_ParamLimits

0x0912,	// (0x00095854) cell_vitu2_itu_pane_t2

0x0002,

0xf92b,	// (0x000a486d) cell_vitu2_itu_pane_t_ParamLimits

0xf92b,	// (0x000a486d) cell_vitu2_itu_pane_t

0xa156,	// (0x0009f098) bg_button_pane_cp011

0x7074,	// (0x0009bfb6) cell_vitu2_function_pane_g1

0xa164,	// (0x0009f0a6) main_myfav_hc_pane

0x6a39,	// (0x0009b97b) popup_image3_note_pane_ParamLimits

0x6a39,	// (0x0009b97b) popup_image3_note_pane

0x6a55,	// (0x0009b997) popup_image3_tool_bar_pane_ParamLimits

0x6a55,	// (0x0009b997) popup_image3_tool_bar_pane

0x0996,	// (0x000958d8) cell_vitu2_itu_pane_t3_ParamLimits

0x0996,	// (0x000958d8) cell_vitu2_itu_pane_t3

0xc97f,	// (0x000a18c1) bg_popup_trans_pane

0xcf72,	// (0x000a1eb4) grid_image3_tool_bar_pane

0xcf7c,	// (0x000a1ebe) bg_popup_trans_pane_g1

0xe7ee,	// (0x000a3730) bg_popup_trans_pane_g2

0xcf84,	// (0x000a1ec6) bg_popup_trans_pane_g3

0xcf8c,	// (0x000a1ece) bg_popup_trans_pane_g4

0xcf94,	// (0x000a1ed6) bg_popup_trans_pane_g5

0xcf9c,	// (0x000a1ede) bg_popup_trans_pane_g6

0xcfa4,	// (0x000a1ee6) bg_popup_trans_pane_g7

0xcfac,	// (0x000a1eee) bg_popup_trans_pane_g8

0xe7ce,	// (0x000a3710) bg_popup_trans_pane_g9

0x0008,

0x02e9,	// (0x0009522b) bg_popup_trans_pane_g

0xcfb4,	// (0x000a1ef6) cell_image3_tool_bar_pane_ParamLimits

0xcfb4,	// (0x000a1ef6) cell_image3_tool_bar_pane

0xab3a,	// (0x0009fa7c) cell_image3_tool_bar_pane_g1

0xc97f,	// (0x000a18c1) bg_popup_trans_pane_cp1

0xcfc8,	// (0x000a1f0a) popup_image3_note_pane_t1

0xcfd6,	// (0x000a1f18) popup_image3_note_pane_t2

0xcfe4,	// (0x000a1f26) popup_image3_note_pane_t3

0x0002,

0x02fc,	// (0x0009523e) popup_image3_note_pane_t

0xcff2,	// (0x000a1f34) popup_image3_note_pane_t3_copy1

0x7088,	// (0x0009bfca) bg_myfav_hc_instruction_pane_ParamLimits

0x7088,	// (0x0009bfca) bg_myfav_hc_instruction_pane

0x709e,	// (0x0009bfe0) cell_myfav_contact_pane_ParamLimits

0x709e,	// (0x0009bfe0) cell_myfav_contact_pane

0x70ba,	// (0x0009bffc) cell_myfav_contact_pane_cp1_ParamLimits

0x70ba,	// (0x0009bffc) cell_myfav_contact_pane_cp1

0x70d2,	// (0x0009c014) cell_myfav_contact_pane_cp2_ParamLimits

0x70d2,	// (0x0009c014) cell_myfav_contact_pane_cp2

0x70ea,	// (0x0009c02c) cell_myfav_contact_pane_cp3_ParamLimits

0x70ea,	// (0x0009c02c) cell_myfav_contact_pane_cp3

0x7101,	// (0x0009c043) cell_myfav_contact_pane_cp4_ParamLimits

0x7101,	// (0x0009c043) cell_myfav_contact_pane_cp4

0x7119,	// (0x0009c05b) cell_myfav_contact_pane_cp5_ParamLimits

0x7119,	// (0x0009c05b) cell_myfav_contact_pane_cp5

0x712d,	// (0x0009c06f) cell_myfav_contact_pane_cp6_ParamLimits

0x712d,	// (0x0009c06f) cell_myfav_contact_pane_cp6

0x7143,	// (0x0009c085) cell_myfav_contact_pane_cp7_ParamLimits

0x7143,	// (0x0009c085) cell_myfav_contact_pane_cp7

0xd000,	// (0x000a1f42) listscroll_gen_pane_cp05

0x715d,	// (0x0009c09f) main_myfav_hc_pane_g1_ParamLimits

0x715d,	// (0x0009c09f) main_myfav_hc_pane_g1

0x7177,	// (0x0009c0b9) main_myfav_hc_pane_g2_ParamLimits

0x7177,	// (0x0009c0b9) main_myfav_hc_pane_g2

0x0002,

0xf932,	// (0x000a4874) main_myfav_hc_pane_g_ParamLimits

0xf932,	// (0x000a4874) main_myfav_hc_pane_g

0x71a9,	// (0x0009c0eb) main_myfav_hc_pane_t1_ParamLimits

0x71a9,	// (0x0009c0eb) main_myfav_hc_pane_t1

0xd009,	// (0x000a1f4b) main_myfav_hc_pane_t2_ParamLimits

0xd009,	// (0x000a1f4b) main_myfav_hc_pane_t2

0xd01b,	// (0x000a1f5d) main_myfav_hc_pane_t3_ParamLimits

0xd01b,	// (0x000a1f5d) main_myfav_hc_pane_t3

0x71c0,	// (0x0009c102) main_myfav_hc_pane_t4_ParamLimits

0x71c0,	// (0x0009c102) main_myfav_hc_pane_t4

0x0004,

0xf939,	// (0x000a487b) main_myfav_hc_pane_t_ParamLimits

0xf939,	// (0x000a487b) main_myfav_hc_pane_t

0xab3a,	// (0x0009fa7c) bg_myfav_hc_instruction_pane_g1

0xd02d,	// (0x000a1f6f) cell_myfav_contact_pane_g1_ParamLimits

0xd02d,	// (0x000a1f6f) cell_myfav_contact_pane_g1

0xd02d,	// (0x000a1f6f) cell_myfav_contact_pane_g2_ParamLimits

0xd02d,	// (0x000a1f6f) cell_myfav_contact_pane_g2

0xd039,	// (0x000a1f7b) cell_myfav_contact_pane_g3_ParamLimits

0xd039,	// (0x000a1f7b) cell_myfav_contact_pane_g3

0xae3e,	// (0x0009fd80) cell_myfav_contact_pane_g4_ParamLimits

0xae3e,	// (0x0009fd80) cell_myfav_contact_pane_g4

0xd046,	// (0x000a1f88) cell_myfav_contact_pane_g5_ParamLimits

0xd046,	// (0x000a1f88) cell_myfav_contact_pane_g5

0x0004,

0xf944,	// (0x000a4886) cell_myfav_contact_pane_g_ParamLimits

0xf944,	// (0x000a4886) cell_myfav_contact_pane_g

0x7191,	// (0x0009c0d3) main_myfav_hc_pane_g3_ParamLimits

0x7191,	// (0x0009c0d3) main_myfav_hc_pane_g3

0x0b4c,	// (0x00095a8e) popup_adpt_find_window

0x71e8,	// (0x0009c12a) afind_page_pane_ParamLimits

0x71e8,	// (0x0009c12a) afind_page_pane

0x71fd,	// (0x0009c13f) aid_size_cell_afind_ParamLimits

0x71fd,	// (0x0009c13f) aid_size_cell_afind

0x721b,	// (0x0009c15d) bg_popup_sub_pane_cp09_ParamLimits

0x721b,	// (0x0009c15d) bg_popup_sub_pane_cp09

0x7228,	// (0x0009c16a) find_pane_cp01_ParamLimits

0x7228,	// (0x0009c16a) find_pane_cp01

0xd052,	// (0x000a1f94) grid_afind_control_pane_ParamLimits

0xd052,	// (0x000a1f94) grid_afind_control_pane

0x7235,	// (0x0009c177) grid_afind_pane_ParamLimits

0x7235,	// (0x0009c177) grid_afind_pane

0x7257,	// (0x0009c199) cell_afind_pane_ParamLimits

0x7257,	// (0x0009c199) cell_afind_pane

0xab3a,	// (0x0009fa7c) afind_page_pane_g1

0x72b8,	// (0x0009c1fa) afind_page_pane_g2

0x72c1,	// (0x0009c203) afind_page_pane_g3

0x0002,

0xf94f,	// (0x000a4891) afind_page_pane_g

0x72ca,	// (0x0009c20c) afind_page_pane_t1

0xd066,	// (0x000a1fa8) cell_afind_grid_control_pane_ParamLimits

0xd066,	// (0x000a1fa8) cell_afind_grid_control_pane

0xcdac,	// (0x000a1cee) bg_button_pane_cp69_ParamLimits

0xcdac,	// (0x000a1cee) bg_button_pane_cp69

0x72ea,	// (0x0009c22c) cell_afind_pane_g1_ParamLimits

0x72ea,	// (0x0009c22c) cell_afind_pane_g1

0x72f7,	// (0x0009c239) cell_afind_pane_t1_ParamLimits

0x72f7,	// (0x0009c239) cell_afind_pane_t1

0xe529,	// (0x000a346b) bg_button_pane_cp72

0xd075,	// (0x000a1fb7) cell_afind_grid_control_pane_g1

0x3659,	// (0x0009859b) aid_image_placing_area_ParamLimits

0x3659,	// (0x0009859b) aid_image_placing_area

0xb143,	// (0x000a0085) field_vitu_entry_pane_g1_ParamLimits

0xb143,	// (0x000a0085) field_vitu_entry_pane_g1

0xb14f,	// (0x000a0091) field_vitu_entry_pane_g2_ParamLimits

0xb14f,	// (0x000a0091) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x000a4763) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x000a4763) field_vitu_entry_pane_g

0x648d,	// (0x0009b3cf) cell_vitu_itu_pane_g1_ParamLimits

0x64cf,	// (0x0009b411) cell_vitu_itu_pane_t3_ParamLimits

0x64cf,	// (0x0009b411) cell_vitu_itu_pane_t3

0xcd52,	// (0x000a1c94) mp4_progress_pane_t1_ParamLimits

0xcd6b,	// (0x000a1cad) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x000a47f8) mp4_progress_pane_t_ParamLimits

0xcd84,	// (0x000a1cc6) mup_progress_pane_cp04_ParamLimits

0x71d4,	// (0x0009c116) main_myfav_hc_pane_t5_ParamLimits

0x71d4,	// (0x0009c116) main_myfav_hc_pane_t5

0xa104,	// (0x0009f046) aid_zoom_text_primary

0x0b4c,	// (0x00095a8e) popup_adpt_find_window_ParamLimits

0xa156,	// (0x0009f098) main_cam_set_pane

0x6c06,	// (0x0009bb48) cam4_zoom_pane_ParamLimits

0x6c06,	// (0x0009bb48) cam4_zoom_pane

0x7309,	// (0x0009c24b) main_cam_set_pane_g1_ParamLimits

0x7309,	// (0x0009c24b) main_cam_set_pane_g1

0x7317,	// (0x0009c259) main_cam_set_pane_g2_ParamLimits

0x7317,	// (0x0009c259) main_cam_set_pane_g2

0x0001,

0xf956,	// (0x000a4898) main_cam_set_pane_g_ParamLimits

0xf956,	// (0x000a4898) main_cam_set_pane_g

0x7338,	// (0x0009c27a) main_cam_set_pane_t1_ParamLimits

0x7338,	// (0x0009c27a) main_cam_set_pane_t1

0x7353,	// (0x0009c295) main_cset_listscroll_pane_ParamLimits

0x7353,	// (0x0009c295) main_cset_listscroll_pane

0x7373,	// (0x0009c2b5) main_cset_slider_pane_ParamLimits

0x7373,	// (0x0009c2b5) main_cset_slider_pane

0xd086,	// (0x000a1fc8) main_cset_list_pane_ParamLimits

0xd086,	// (0x000a1fc8) main_cset_list_pane

0xd096,	// (0x000a1fd8) scroll_pane_cp028

0x7399,	// (0x0009c2db) aid_area_touch_slider

0x73b5,	// (0x0009c2f7) cset_slider_pane

0x73df,	// (0x0009c321) main_cset_slider_pane_g1

0x73f4,	// (0x0009c336) main_cset_slider_pane_g2

0x0011,

0xf95b,	// (0x000a489d) main_cset_slider_pane_g

0xd0cf,	// (0x000a2011) main_cset_slider_pane_t1

0x74b0,	// (0x0009c3f2) main_cset_slider_pane_t2

0x74ca,	// (0x0009c40c) main_cset_slider_pane_t3

0x74e4,	// (0x0009c426) main_cset_slider_pane_t4

0x74fe,	// (0x0009c440) main_cset_slider_pane_t5

0x751a,	// (0x0009c45c) main_cset_slider_pane_t6

0x752f,	// (0x0009c471) main_cset_slider_pane_t7

0x000e,

0xf980,	// (0x000a48c2) main_cset_slider_pane_t

0x7633,	// (0x0009c575) cset_list_set_pane_ParamLimits

0x7633,	// (0x0009c575) cset_list_set_pane

0x7647,	// (0x0009c589) aid_position_infowindow_above

0x764f,	// (0x0009c591) aid_position_infowindow_below

0x7657,	// (0x0009c599) cset_list_set_pane_g1_ParamLimits

0x7657,	// (0x0009c599) cset_list_set_pane_g1

0x7663,	// (0x0009c5a5) cset_list_set_pane_g3_ParamLimits

0x7663,	// (0x0009c5a5) cset_list_set_pane_g3

0x0001,

0xf99f,	// (0x000a48e1) cset_list_set_pane_g_ParamLimits

0xf99f,	// (0x000a48e1) cset_list_set_pane_g

0x7672,	// (0x0009c5b4) cset_list_set_pane_t1_ParamLimits

0x7672,	// (0x0009c5b4) cset_list_set_pane_t1

0xdabf,	// (0x000a2a01) list_highlight_pane_cp021_ParamLimits

0xdabf,	// (0x000a2a01) list_highlight_pane_cp021

0xf049,	// (0x000a3f8b) cset_slider_pane_g1

0xf05b,	// (0x000a3f9d) cset_slider_pane_g2

0xf052,	// (0x000a3f94) cset_slider_pane_g3

0x0002,

0x0375,	// (0x000952b7) cset_slider_pane_g

0xb749,	// (0x000a068b) aid_area_touch_cam4_zoom

0xb751,	// (0x000a0693) cam4_zoom_cont_pane

0xb759,	// (0x000a069b) cam4_zoom_pane_g1

0xb761,	// (0x000a06a3) cam4_zoom_pane_g2

0x7687,	// (0x0009c5c9) cam4_zoom_pane_g3

0x0002,

0xf9a4,	// (0x000a48e6) cam4_zoom_pane_g

0xb769,	// (0x000a06ab) cam4_zoom_cont_pane_g1

0xb772,	// (0x000a06b4) cam4_zoom_cont_pane_g2

0xb77b,	// (0x000a06bd) cam4_zoom_cont_pane_g3

0x0002,

0xf9ab,	// (0x000a48ed) cam4_zoom_cont_pane_g

0x6ac2,	// (0x0009ba04) call4_image_pane_ParamLimits

0x6ac2,	// (0x0009ba04) call4_image_pane

0xcdb8,	// (0x000a1cfa) call4_windows_conf_pane_ParamLimits

0xcdf7,	// (0x000a1d39) popup_call4_audio_in_window_ParamLimits

0xcdf7,	// (0x000a1d39) popup_call4_audio_in_window

0xc97f,	// (0x000a18c1) bg_popup_call2_act_pane_cp02

0xceff,	// (0x000a1e41) call4_list_conf_pane

0xab3a,	// (0x0009fa7c) call4_image_pane_g1

0xab3a,	// (0x0009fa7c) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x000a462e) call4_image_pane_g

0xd16f,	// (0x000a20b1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd16f,	// (0x000a20b1) list_single_graphic_popup_conf4_pane

0xc97f,	// (0x000a18c1) list_highlight_pane_cp022

0xd182,	// (0x000a20c4) list_single_graphic_popup_conf4_pane_g1

0xed2c,	// (0x000a3c6e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0x038a,	// (0x000952cc) list_single_graphic_popup_conf4_pane_g

0xd18a,	// (0x000a20cc) list_single_graphic_popup_conf4_pane_t1

0x195d,	// (0x0009689f) popup_vtel_slider_window_ParamLimits

0x195d,	// (0x0009689f) popup_vtel_slider_window

0xcd9a,	// (0x000a1cdc) dialer2_ne_pane_t2_ParamLimits

0xcd9a,	// (0x000a1cdc) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x000a47fd) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x000a47fd) dialer2_ne_pane_t

0xa91d,	// (0x0009f85f) bg_popup_sub_pane_cp010_ParamLimits

0xa91d,	// (0x0009f85f) bg_popup_sub_pane_cp010

0x768f,	// (0x0009c5d1) popup_vtel_slider_window_g1_ParamLimits

0x768f,	// (0x0009c5d1) popup_vtel_slider_window_g1

0x76a2,	// (0x0009c5e4) popup_vtel_slider_window_g2_ParamLimits

0x76a2,	// (0x0009c5e4) popup_vtel_slider_window_g2

0x0003,

0xf9b2,	// (0x000a48f4) popup_vtel_slider_window_g_ParamLimits

0xf9b2,	// (0x000a48f4) popup_vtel_slider_window_g

0x76f8,	// (0x0009c63a) vtel_slider_pane_ParamLimits

0x76f8,	// (0x0009c63a) vtel_slider_pane

0x771a,	// (0x0009c65c) vtel_slider_pane_g1_ParamLimits

0x771a,	// (0x0009c65c) vtel_slider_pane_g1

0x772e,	// (0x0009c670) vtel_slider_pane_g2_ParamLimits

0x772e,	// (0x0009c670) vtel_slider_pane_g2

0x7746,	// (0x0009c688) vtel_slider_pane_g3_ParamLimits

0x7746,	// (0x0009c688) vtel_slider_pane_g3

0x771a,	// (0x0009c65c) vtel_slider_pane_g4_ParamLimits

0x771a,	// (0x0009c65c) vtel_slider_pane_g4

0x775c,	// (0x0009c69e) vtel_slider_pane_g5_ParamLimits

0x775c,	// (0x0009c69e) vtel_slider_pane_g5

0x0004,

0xf9bb,	// (0x000a48fd) vtel_slider_pane_g_ParamLimits

0xf9bb,	// (0x000a48fd) vtel_slider_pane_g

0xa164,	// (0x0009f0a6) main_gallery2_pane

0x6e08,	// (0x0009bd4a) aid_size_row_itut2_dropdow_list_ParamLimits

0x6e08,	// (0x0009bd4a) aid_size_row_itut2_dropdow_list

0x6e94,	// (0x0009bdd6) grid_vitu2_function_top_pane_ParamLimits

0x6e94,	// (0x0009bdd6) grid_vitu2_function_top_pane

0x6ef9,	// (0x0009be3b) popup_vitu2_dropdown_list_window_ParamLimits

0x6ef9,	// (0x0009be3b) popup_vitu2_dropdown_list_window

0x6f22,	// (0x0009be64) popup_vitu2_match_list_window

0x7772,	// (0x0009c6b4) cell_vitu2_function_top_pane_ParamLimits

0x7772,	// (0x0009c6b4) cell_vitu2_function_top_pane

0x7790,	// (0x0009c6d2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7790,	// (0x0009c6d2) cell_vitu2_function_top_pane_cp01

0x77ae,	// (0x0009c6f0) cell_vitu2_function_top_wide_pane_ParamLimits

0x77ae,	// (0x0009c6f0) cell_vitu2_function_top_wide_pane

0xa156,	// (0x0009f098) bg_button_pane_cp012

0x77cc,	// (0x0009c70e) cell_vitu2_function_top_pane_g1

0xb792,	// (0x000a06d4) bg_button_pane_cp013_ParamLimits

0xb792,	// (0x000a06d4) bg_button_pane_cp013

0x77e0,	// (0x0009c722) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x77e0,	// (0x0009c722) cell_vitu2_function_top_wide_pane_g1

0xa156,	// (0x0009f098) bg_popup_sub_pane_cp20

0x77f8,	// (0x0009c73a) list_vitu2_match_list_pane

0xcf7c,	// (0x000a1ebe) bg_popup_sub_pane_cp20_g1

0xcf84,	// (0x000a1ec6) bg_popup_sub_pane_cp20_g2

0xe7ee,	// (0x000a3730) bg_popup_sub_pane_cp20_g3

0xcf8c,	// (0x000a1ece) bg_popup_sub_pane_cp20_g4

0xe7ce,	// (0x000a3710) bg_popup_sub_pane_cp20_g5

0xd1a0,	// (0x000a20e2) bg_popup_sub_pane_cp20_g6

0xcf9c,	// (0x000a1ede) bg_popup_sub_pane_cp20_g7

0xcfa4,	// (0x000a1ee6) bg_popup_sub_pane_cp20_g8

0xcfac,	// (0x000a1eee) bg_popup_sub_pane_cp20_g9

0x0008,

0x03a3,	// (0x000952e5) bg_popup_sub_pane_cp20_g

0xb7ae,	// (0x000a06f0) list_vitu2_match_list_item_pane_ParamLimits

0xb7ae,	// (0x000a06f0) list_vitu2_match_list_item_pane

0xb7c0,	// (0x000a0702) list_vitu2_match_list_item_pane_t1

0xa164,	// (0x0009f0a6) bg_popup_sub_pane_cp21

0xb7e6,	// (0x000a0728) grid_vitu2_dropdown_list_pane

0x784b,	// (0x0009c78d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x784b,	// (0x0009c78d) cell_vitu2_dropdown_list_char_pane

0x786c,	// (0x0009c7ae) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x786c,	// (0x0009c7ae) cell_vitu2_dropdown_list_ctrl_pane

0xd1a8,	// (0x000a20ea) cell_vitu2_dropdown_list_char_pane_g1

0xd1b1,	// (0x000a20f3) cell_vitu2_dropdown_list_char_pane_g2

0xd1ba,	// (0x000a20fc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x03c0,	// (0x00095302) cell_vitu2_dropdown_list_char_pane_g

0x7898,	// (0x0009c7da) cell_vitu2_dropdown_list_char_pane_t1

0x78a6,	// (0x0009c7e8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x78a6,	// (0x0009c7e8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x78b6,	// (0x0009c7f8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x78b6,	// (0x0009c7f8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x78c7,	// (0x0009c809) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x78c7,	// (0x0009c809) cell_vitu2_dropdown_list_ctrl_pane_g3

0x78d7,	// (0x0009c819) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x78d7,	// (0x0009c819) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb651,	// (0x000a0593) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb651,	// (0x000a0593) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9d0,	// (0x000a4912) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9d0,	// (0x000a4912) cell_vitu2_dropdown_list_ctrl_pane_g

0x78f3,	// (0x0009c835) aid_size_cell_gallery2_ParamLimits

0x78f3,	// (0x0009c835) aid_size_cell_gallery2

0x7909,	// (0x0009c84b) grid_gallery2_pane_ParamLimits

0x7909,	// (0x0009c84b) grid_gallery2_pane

0x791d,	// (0x0009c85f) scroll_pane_cp029_ParamLimits

0x791d,	// (0x0009c85f) scroll_pane_cp029

0x7929,	// (0x0009c86b) cell_gallery2_pane_ParamLimits

0x7929,	// (0x0009c86b) cell_gallery2_pane

0xd1c3,	// (0x000a2105) cell_gallery2_pane_g2

0x795f,	// (0x0009c8a1) cell_gallery2_pane_g3

0xd1cd,	// (0x000a210f) cell_gallery2_pane_g4

0xd1d5,	// (0x000a2117) cell_gallery2_pane_g5

0xef05,	// (0x000a3e47) grid_highlight_pane_cp10

0x6f22,	// (0x0009be64) popup_vitu2_match_list_window_ParamLimits

0x6f37,	// (0x0009be79) popup_vitu2_query_window_ParamLimits

0x6f37,	// (0x0009be79) popup_vitu2_query_window

0xa164,	// (0x0009f0a6) bg_vitu2_candi_button_pane

0xd1a8,	// (0x000a20ea) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd1b1,	// (0x000a20f3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd1ba,	// (0x000a20fc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7967,	// (0x0009c8a9) bg_button_pane_cp015

0x797b,	// (0x0009c8bd) bg_button_pane_cp016

0x798e,	// (0x0009c8d0) bg_button_pane_cp017

0xa632,	// (0x0009f574) bg_popup_sub_pane_cp22

0xd1dd,	// (0x000a211f) popup_vitu2_query_window_g1

0x79d3,	// (0x0009c915) popup_vitu2_query_window_g2

0x0002,

0xf9db,	// (0x000a491d) popup_vitu2_query_window_g

0x79f2,	// (0x0009c934) popup_vitu2_query_window_t1_ParamLimits

0x79f2,	// (0x0009c934) popup_vitu2_query_window_t1

0x7a27,	// (0x0009c969) popup_vitu2_query_window_t2_ParamLimits

0x7a27,	// (0x0009c969) popup_vitu2_query_window_t2

0x7a39,	// (0x0009c97b) popup_vitu2_query_window_t3_ParamLimits

0x7a39,	// (0x0009c97b) popup_vitu2_query_window_t3

0x7a61,	// (0x0009c9a3) popup_vitu2_query_window_t4_ParamLimits

0x7a61,	// (0x0009c9a3) popup_vitu2_query_window_t4

0x7a82,	// (0x0009c9c4) popup_vitu2_query_window_t5_ParamLimits

0x7a82,	// (0x0009c9c4) popup_vitu2_query_window_t5

0x0006,

0xf9e2,	// (0x000a4924) popup_vitu2_query_window_t_ParamLimits

0xf9e2,	// (0x000a4924) popup_vitu2_query_window_t

0xd07e,	// (0x000a1fc0) main_cset_text_pane

0x7399,	// (0x0009c2db) aid_area_touch_slider_ParamLimits

0x73b5,	// (0x0009c2f7) cset_slider_pane_ParamLimits

0x73df,	// (0x0009c321) main_cset_slider_pane_g1_ParamLimits

0x73f4,	// (0x0009c336) main_cset_slider_pane_g2_ParamLimits

0xd09f,	// (0x000a1fe1) main_cset_slider_pane_g3_ParamLimits

0xd09f,	// (0x000a1fe1) main_cset_slider_pane_g3

0x7409,	// (0x0009c34b) main_cset_slider_pane_g4_ParamLimits

0x7409,	// (0x0009c34b) main_cset_slider_pane_g4

0x7418,	// (0x0009c35a) main_cset_slider_pane_g5_ParamLimits

0x7418,	// (0x0009c35a) main_cset_slider_pane_g5

0x7424,	// (0x0009c366) main_cset_slider_pane_g6_ParamLimits

0x7424,	// (0x0009c366) main_cset_slider_pane_g6

0xf95b,	// (0x000a489d) main_cset_slider_pane_g_ParamLimits

0xd0cf,	// (0x000a2011) main_cset_slider_pane_t1_ParamLimits

0x74b0,	// (0x0009c3f2) main_cset_slider_pane_t2_ParamLimits

0x74ca,	// (0x0009c40c) main_cset_slider_pane_t3_ParamLimits

0x74e4,	// (0x0009c426) main_cset_slider_pane_t4_ParamLimits

0x74fe,	// (0x0009c440) main_cset_slider_pane_t5_ParamLimits

0x751a,	// (0x0009c45c) main_cset_slider_pane_t6_ParamLimits

0x752f,	// (0x0009c471) main_cset_slider_pane_t7_ParamLimits

0x7559,	// (0x0009c49b) main_cset_slider_pane_t8_ParamLimits

0x7559,	// (0x0009c49b) main_cset_slider_pane_t8

0x7581,	// (0x0009c4c3) main_cset_slider_pane_t9_ParamLimits

0x7581,	// (0x0009c4c3) main_cset_slider_pane_t9

0x75a9,	// (0x0009c4eb) main_cset_slider_pane_t10_ParamLimits

0x75a9,	// (0x0009c4eb) main_cset_slider_pane_t10

0x75d1,	// (0x0009c513) main_cset_slider_pane_t11_ParamLimits

0x75d1,	// (0x0009c513) main_cset_slider_pane_t11

0x75f9,	// (0x0009c53b) main_cset_slider_pane_t12_ParamLimits

0x75f9,	// (0x0009c53b) main_cset_slider_pane_t12

0x7616,	// (0x0009c558) main_cset_slider_pane_t13_ParamLimits

0x7616,	// (0x0009c558) main_cset_slider_pane_t13

0xf980,	// (0x000a48c2) main_cset_slider_pane_t_ParamLimits

0xc97f,	// (0x000a18c1) bg_popup_sub_pane_cp011

0xd1e9,	// (0x000a212b) main_cset_text_pane_g1

0xd1f1,	// (0x000a2133) main_cset_text_pane_t1

0xd1ff,	// (0x000a2141) main_cset_text_pane_t2

0xd20d,	// (0x000a214f) main_cset_text_pane_t3

0xd21b,	// (0x000a215d) main_cset_text_pane_t4

0xd229,	// (0x000a216b) main_cset_text_pane_t5

0xd237,	// (0x000a2179) main_cset_text_pane_t6

0xd245,	// (0x000a2187) main_cset_text_pane_t7

0x0006,

0x03e8,	// (0x0009532a) main_cset_text_pane_t

0xa164,	// (0x0009f0a6) main_cam4_burst_pane

0xa164,	// (0x0009f0a6) main_cam5_pane

0x72d8,	// (0x0009c21a) bg_button_pane_cp019

0x72e1,	// (0x0009c223) bg_button_pane_cp020

0xd0ab,	// (0x000a1fed) main_cset_slider_pane_g7_ParamLimits

0xd0ab,	// (0x000a1fed) main_cset_slider_pane_g7

0xd0b7,	// (0x000a1ff9) main_cset_slider_pane_g8_ParamLimits

0xd0b7,	// (0x000a1ff9) main_cset_slider_pane_g8

0x7438,	// (0x0009c37a) main_cset_slider_pane_g9_ParamLimits

0x7438,	// (0x0009c37a) main_cset_slider_pane_g9

0x7444,	// (0x0009c386) main_cset_slider_pane_g10_ParamLimits

0x7444,	// (0x0009c386) main_cset_slider_pane_g10

0x7450,	// (0x0009c392) main_cset_slider_pane_g11_ParamLimits

0x7450,	// (0x0009c392) main_cset_slider_pane_g11

0x745c,	// (0x0009c39e) main_cset_slider_pane_g12_ParamLimits

0x745c,	// (0x0009c39e) main_cset_slider_pane_g12

0x7468,	// (0x0009c3aa) main_cset_slider_pane_g13_ParamLimits

0x7468,	// (0x0009c3aa) main_cset_slider_pane_g13

0x7474,	// (0x0009c3b6) main_cset_slider_pane_g14_ParamLimits

0x7474,	// (0x0009c3b6) main_cset_slider_pane_g14

0x7480,	// (0x0009c3c2) main_cset_slider_pane_g15_ParamLimits

0x7480,	// (0x0009c3c2) main_cset_slider_pane_g15

0xd0fd,	// (0x000a203f) main_cset_slider_pane_t14_ParamLimits

0xd0fd,	// (0x000a203f) main_cset_slider_pane_t14

0xd136,	// (0x000a2078) main_cset_slider_pane_t15_ParamLimits

0xd136,	// (0x000a2078) main_cset_slider_pane_t15

0x7af9,	// (0x0009ca3b) aid_cam4_burst_size_cell_ParamLimits

0x7af9,	// (0x0009ca3b) aid_cam4_burst_size_cell

0x7b19,	// (0x0009ca5b) grid_cam4_burst_pane_ParamLimits

0x7b19,	// (0x0009ca5b) grid_cam4_burst_pane

0x7b51,	// (0x0009ca93) linegrid_cam4_burst_pane_ParamLimits

0x7b51,	// (0x0009ca93) linegrid_cam4_burst_pane

0xd484,	// (0x000a23c6) scroll_pane_cp30_ParamLimits

0xd484,	// (0x000a23c6) scroll_pane_cp30

0x7b77,	// (0x0009cab9) cell_cam4_burst_pane_ParamLimits

0x7b77,	// (0x0009cab9) cell_cam4_burst_pane

0xd253,	// (0x000a2195) linegrid_cam4_burst_pane_g1_ParamLimits

0xd253,	// (0x000a2195) linegrid_cam4_burst_pane_g1

0x7bc4,	// (0x0009cb06) linegrid_cam4_burst_pane_g2_ParamLimits

0x7bc4,	// (0x0009cb06) linegrid_cam4_burst_pane_g2

0xd260,	// (0x000a21a2) linegrid_cam4_burst_pane_g3_ParamLimits

0xd260,	// (0x000a21a2) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f1,	// (0x000a4933) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f1,	// (0x000a4933) linegrid_cam4_burst_pane_g

0x7bd5,	// (0x0009cb17) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7bd5,	// (0x0009cb17) linegrid_cam4_burst_pane_g3_copy1

0xd26d,	// (0x000a21af) linegrid_cam4_burst_pane_g4_ParamLimits

0xd26d,	// (0x000a21af) linegrid_cam4_burst_pane_g4

0x7bef,	// (0x0009cb31) linegrid_cam4_burst_pane_g5_ParamLimits

0x7bef,	// (0x0009cb31) linegrid_cam4_burst_pane_g5

0x7c00,	// (0x0009cb42) linegrid_cam4_burst_pane_g6_ParamLimits

0x7c00,	// (0x0009cb42) linegrid_cam4_burst_pane_g6

0xd27a,	// (0x000a21bc) linegrid_cam4_burst_pane_g7_ParamLimits

0xd27a,	// (0x000a21bc) linegrid_cam4_burst_pane_g7

0x7c17,	// (0x0009cb59) cell_cam4_burst_pane_g1

0xd293,	// (0x000a21d5) main_cam5_pane_t1_ParamLimits

0xd293,	// (0x000a21d5) main_cam5_pane_t1

0xd2a5,	// (0x000a21e7) main_cam5_pane_t2_ParamLimits

0xd2a5,	// (0x000a21e7) main_cam5_pane_t2

0xd2b7,	// (0x000a21f9) main_cam5_pane_t3_ParamLimits

0xd2b7,	// (0x000a21f9) main_cam5_pane_t3

0xd2c9,	// (0x000a220b) main_cam5_pane_t4_ParamLimits

0xd2c9,	// (0x000a220b) main_cam5_pane_t4

0xd2df,	// (0x000a2221) main_cam5_pane_t5_ParamLimits

0xd2df,	// (0x000a2221) main_cam5_pane_t5

0xd2f1,	// (0x000a2233) main_cam5_pane_t6_ParamLimits

0xd2f1,	// (0x000a2233) main_cam5_pane_t6

0xd305,	// (0x000a2247) main_cam5_pane_t7_ParamLimits

0xd305,	// (0x000a2247) main_cam5_pane_t7

0xd317,	// (0x000a2259) main_cam5_pane_t8_ParamLimits

0xd317,	// (0x000a2259) main_cam5_pane_t8

0xd333,	// (0x000a2275) main_cam5_pane_t9_ParamLimits

0xd333,	// (0x000a2275) main_cam5_pane_t9

0xd345,	// (0x000a2287) main_cam5_pane_t10_ParamLimits

0xd345,	// (0x000a2287) main_cam5_pane_t10

0xd357,	// (0x000a2299) main_cam5_pane_t11_ParamLimits

0xd357,	// (0x000a2299) main_cam5_pane_t11

0xd369,	// (0x000a22ab) main_cam5_pane_t12_ParamLimits

0xd369,	// (0x000a22ab) main_cam5_pane_t12

0xd37e,	// (0x000a22c0) main_cam5_pane_t13_ParamLimits

0xd37e,	// (0x000a22c0) main_cam5_pane_t13

0x000c,

0x0403,	// (0x00095345) main_cam5_pane_t_ParamLimits

0x0403,	// (0x00095345) main_cam5_pane_t

0x0bce,	// (0x00095b10) popup_scut_keymap_window_ParamLimits

0x0bce,	// (0x00095b10) popup_scut_keymap_window

0x7c2c,	// (0x0009cb6e) aid_size_cell_brow_shortcut

0xef05,	// (0x000a3e47) bg_popup_window_pane_cp010

0x7c38,	// (0x0009cb7a) grid_scut_pane

0x7c44,	// (0x0009cb86) cell_scut_pane_ParamLimits

0x7c44,	// (0x0009cb86) cell_scut_pane

0x7c5b,	// (0x0009cb9d) cell_scut_pane_g1

0xd39b,	// (0x000a22dd) cell_scut_pane_t1

0xd3aa,	// (0x000a22ec) cell_scut_pane_t2

0x7c64,	// (0x0009cba6) cell_scut_pane_t3

0x0002,

0xf9fd,	// (0x000a493f) cell_scut_pane_t

0x5979,	// (0x0009a8bb) main_mup3_pane_g8_ParamLimits

0x5979,	// (0x0009a8bb) main_mup3_pane_g8

0x6e20,	// (0x0009bd62) area_vitu2_query_pane_ParamLimits

0x6e20,	// (0x0009bd62) area_vitu2_query_pane

0x79a1,	// (0x0009c8e3) input_focus_pane_cp08

0xd3b9,	// (0x000a22fb) area_vitu2_query_pane_g1

0x7c72,	// (0x0009cbb4) area_vitu2_query_pane_g2

0x0001,

0xfa04,	// (0x000a4946) area_vitu2_query_pane_g

0x7c83,	// (0x0009cbc5) area_vitu2_query_pane_t1_ParamLimits

0x7c83,	// (0x0009cbc5) area_vitu2_query_pane_t1

0x7c97,	// (0x0009cbd9) area_vitu2_query_pane_t2_ParamLimits

0x7c97,	// (0x0009cbd9) area_vitu2_query_pane_t2

0x7cab,	// (0x0009cbed) area_vitu2_query_pane_t3_ParamLimits

0x7cab,	// (0x0009cbed) area_vitu2_query_pane_t3

0xb7ee,	// (0x000a0730) area_vitu2_query_pane_t4_ParamLimits

0xb7ee,	// (0x000a0730) area_vitu2_query_pane_t4

0xb816,	// (0x000a0758) area_vitu2_query_pane_t5_ParamLimits

0xb816,	// (0x000a0758) area_vitu2_query_pane_t5

0xb83e,	// (0x000a0780) area_vitu2_query_pane_t6_ParamLimits

0xb83e,	// (0x000a0780) area_vitu2_query_pane_t6

0x0006,

0xfa09,	// (0x000a494b) area_vitu2_query_pane_t_ParamLimits

0xfa09,	// (0x000a494b) area_vitu2_query_pane_t

0x7cd3,	// (0x0009cc15) bg_button_pane_cp018

0x7ce1,	// (0x0009cc23) bg_button_pane_cp021

0x7ced,	// (0x0009cc2f) bg_button_pane_cp022

0x7cfe,	// (0x0009cc40) input_focus_pane_cp09

0x2960,	// (0x000978a2) aid_size_touch_mv_arrow_left

0x2989,	// (0x000978cb) aid_size_touch_mv_arrow_right

0x7498,	// (0x0009c3da) main_cset_slider_pane_g16_ParamLimits

0x7498,	// (0x0009c3da) main_cset_slider_pane_g16

0x74a4,	// (0x0009c3e6) main_cset_slider_pane_g17_ParamLimits

0x74a4,	// (0x0009c3e6) main_cset_slider_pane_g17

0x7c17,	// (0x0009cb59) cell_cam4_burst_pane_g1_ParamLimits

0xc97f,	// (0x000a18c1) compa_mode_pane

0x76b2,	// (0x0009c5f4) popup_vtel_slider_window_g3_ParamLimits

0x76b2,	// (0x0009c5f4) popup_vtel_slider_window_g3

0x76c9,	// (0x0009c60b) popup_vtel_slider_window_g4_ParamLimits

0x76c9,	// (0x0009c60b) popup_vtel_slider_window_g4

0x76e0,	// (0x0009c622) popup_vtel_slider_window_t1_ParamLimits

0x76e0,	// (0x0009c622) popup_vtel_slider_window_t1

0xa164,	// (0x0009f0a6) main_cl_pane

0xa65a,	// (0x0009f59c) popup_imed_adjust2_window_ParamLimits

0xa632,	// (0x0009f574) bg_tb_trans_pane_cp05_ParamLimits

0xb078,	// (0x0009ffba) popup_imed_adjust2_window_g1_ParamLimits

0xb087,	// (0x0009ffc9) popup_imed_adjust2_window_g2_ParamLimits

0xb087,	// (0x0009ffc9) popup_imed_adjust2_window_g2

0xb093,	// (0x0009ffd5) popup_imed_adjust2_window_g3_ParamLimits

0xb093,	// (0x0009ffd5) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x000a472c) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x000a472c) popup_imed_adjust2_window_g

0xb09f,	// (0x0009ffe1) popup_imed_adjust2_window_t1_ParamLimits

0xb0b7,	// (0x0009fff9) slider_imed_adjust_pane_ParamLimits

0xb0cb,	// (0x000a000d) slider_imed_adjust_pane_g1_ParamLimits

0xb0db,	// (0x000a001d) slider_imed_adjust_pane_g2_ParamLimits

0xb0eb,	// (0x000a002d) slider_imed_adjust_pane_g3_ParamLimits

0xb0fc,	// (0x000a003e) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x000a4733) slider_imed_adjust_pane_g_ParamLimits

0x6ba7,	// (0x0009bae9) aid_touch_area_cam4_ParamLimits

0x6ba7,	// (0x0009bae9) aid_touch_area_cam4

0xb635,	// (0x000a0577) battery_pane_cp01

0x6c76,	// (0x0009bbb8) main_camera4_pane_g6_ParamLimits

0x6c76,	// (0x0009bbb8) main_camera4_pane_g6

0x6ca0,	// (0x0009bbe2) main_camera4_pane_t2_ParamLimits

0x6ca0,	// (0x0009bbe2) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x000a4831) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x000a4831) main_camera4_pane_t

0x6cd5,	// (0x0009bc17) aid_touch_area_vid4_ParamLimits

0x6cd5,	// (0x0009bc17) aid_touch_area_vid4

0x6d29,	// (0x0009bc6b) main_video4_pane_g5_ParamLimits

0x6d29,	// (0x0009bc6b) main_video4_pane_g5

0x6d4e,	// (0x0009bc90) vid4_progress_pane_ParamLimits

0x6d4e,	// (0x0009bc90) vid4_progress_pane

0xd0c3,	// (0x000a2005) main_cset_slider_pane_g18_ParamLimits

0xd0c3,	// (0x000a2005) main_cset_slider_pane_g18

0xd287,	// (0x000a21c9) cell_cam4_burst_pane_g2_ParamLimits

0xd287,	// (0x000a21c9) cell_cam4_burst_pane_g2

0x0001,

0xf9f8,	// (0x000a493a) cell_cam4_burst_pane_g_ParamLimits

0xf9f8,	// (0x000a493a) cell_cam4_burst_pane_g

0xe31e,	// (0x000a3260) bg_cl_pane_ParamLimits

0xe31e,	// (0x000a3260) bg_cl_pane

0x7d0f,	// (0x0009cc51) cl_header_pane_ParamLimits

0x7d0f,	// (0x0009cc51) cl_header_pane

0x7d23,	// (0x0009cc65) cl_listscroll_pane_ParamLimits

0x7d23,	// (0x0009cc65) cl_listscroll_pane

0xd3c5,	// (0x000a2307) bg_cl_pane_g1

0xd3cd,	// (0x000a230f) bg_cl_pane_g2

0xd3d5,	// (0x000a2317) bg_cl_pane_g3

0xd3dd,	// (0x000a231f) bg_cl_pane_g4

0xd3e5,	// (0x000a2327) bg_cl_pane_g5

0xd3ed,	// (0x000a232f) bg_cl_pane_g6

0xd3f5,	// (0x000a2337) bg_cl_pane_g7

0xd3fd,	// (0x000a233f) bg_cl_pane_g8

0xd405,	// (0x000a2347) bg_cl_pane_g9

0x0008,

0x0439,	// (0x0009537b) bg_cl_pane_g

0x7d33,	// (0x0009cc75) aid_height_cl_leading_ParamLimits

0x7d33,	// (0x0009cc75) aid_height_cl_leading

0x7d3f,	// (0x0009cc81) aid_height_cl_text_ParamLimits

0x7d3f,	// (0x0009cc81) aid_height_cl_text

0xdabf,	// (0x000a2a01) bg_cl_header_pane_ParamLimits

0xdabf,	// (0x000a2a01) bg_cl_header_pane

0x7d5e,	// (0x0009cca0) cl_header_pane_g1_ParamLimits

0x7d5e,	// (0x0009cca0) cl_header_pane_g1

0x7d74,	// (0x0009ccb6) cl_header_pane_t1_ParamLimits

0x7d74,	// (0x0009ccb6) cl_header_pane_t1

0xd40d,	// (0x000a234f) cl_list_pane

0xd096,	// (0x000a1fd8) hc_scroll_pane_cp01

0xe7ce,	// (0x000a3710) bg_cl_header_pane_g1

0xcf7c,	// (0x000a1ebe) bg_cl_header_pane_g2

0xe7ee,	// (0x000a3730) bg_cl_header_pane_g3

0xcf8c,	// (0x000a1ece) bg_cl_header_pane_g4

0xcf84,	// (0x000a1ec6) bg_cl_header_pane_g5

0xd1a0,	// (0x000a20e2) bg_cl_header_pane_g6

0xcfa4,	// (0x000a1ee6) bg_cl_header_pane_g7

0xcfac,	// (0x000a1eee) bg_cl_header_pane_g8

0xcf9c,	// (0x000a1ede) bg_cl_header_pane_g9

0x0008,

0x044c,	// (0x0009538e) bg_cl_header_pane_g

0x7d8d,	// (0x0009cccf) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7d8d,	// (0x0009cccf) hc_cl_list_double_graphic_heading_pane

0x7da1,	// (0x0009cce3) hc_cl_list_single_graphic_pane_ParamLimits

0x7da1,	// (0x0009cce3) hc_cl_list_single_graphic_pane

0x7dbb,	// (0x0009ccfd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7dbb,	// (0x0009ccfd) hc_cl_list_single_graphic_pane_g1

0x7dc7,	// (0x0009cd09) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7dc7,	// (0x0009cd09) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa18,	// (0x000a495a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa18,	// (0x000a495a) hc_cl_list_single_graphic_pane_g

0x7ddb,	// (0x0009cd1d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7ddb,	// (0x0009cd1d) hc_cl_list_single_graphic_pane_t1

0x7dbb,	// (0x0009ccfd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7dbb,	// (0x0009ccfd) hc_cl_list_double_graphic_heading_pane_g1

0x7df0,	// (0x0009cd32) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7df0,	// (0x0009cd32) hc_cl_list_double_graphic_heading_pane_g2

0x7e04,	// (0x0009cd46) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7e04,	// (0x0009cd46) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa1d,	// (0x000a495f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa1d,	// (0x000a495f) hc_cl_list_double_graphic_heading_pane_g

0x7e18,	// (0x0009cd5a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7e18,	// (0x0009cd5a) hc_cl_list_double_graphic_heading_pane_t1

0x7e2d,	// (0x0009cd6f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7e2d,	// (0x0009cd6f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa24,	// (0x000a4966) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa24,	// (0x000a4966) hc_cl_list_double_graphic_heading_pane_t

0x7e42,	// (0x0009cd84) vid4_progress_pane_g1

0x7e54,	// (0x0009cd96) vid4_progress_pane_g2

0xea39,	// (0x000a397b) vid4_progress_pane_g3

0xce75,	// (0x000a1db7) vid4_progress_pane_g4

0x0004,

0xfa29,	// (0x000a496b) vid4_progress_pane_g

0xce93,	// (0x000a1dd5) vid4_progress_pane_t1

0xcea8,	// (0x000a1dea) vid4_progress_pane_t2

0x0002,

0xfa34,	// (0x000a4976) vid4_progress_pane_t

0xced3,	// (0x000a1e15) wait_bar_pane_cp07

0xa92b,	// (0x0009f86d) blid_firmament_pane_ParamLimits

0xa96e,	// (0x0009f8b0) popup_blid_sat_info2_window_g1

0xa992,	// (0x0009f8d4) popup_blid_sat_info2_window_t3

0xa9a0,	// (0x0009f8e2) popup_blid_sat_info2_window_t4

0xa9ae,	// (0x0009f8f0) popup_blid_sat_info2_window_t5

0xa9bc,	// (0x0009f8fe) popup_blid_sat_info2_window_t6

0xa9cc,	// (0x0009f90e) popup_blid_sat_info2_window_t7

0xa9da,	// (0x0009f91c) popup_blid_sat_info2_window_t8

0xa9e8,	// (0x0009f92a) popup_blid_sat_info2_window_t9

0xa9f6,	// (0x0009f938) popup_blid_sat_info2_window_t10

0xaaba,	// (0x0009f9fc) aid_firma_cardinal_ParamLimits

0xaace,	// (0x0009fa10) blid_firmament_pane_t1_ParamLimits

0xaae5,	// (0x0009fa27) blid_firmament_pane_t2_ParamLimits

0xaafc,	// (0x0009fa3e) blid_firmament_pane_t3_ParamLimits

0xab13,	// (0x0009fa55) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x000a4625) blid_firmament_pane_t_ParamLimits

0xab2a,	// (0x0009fa6c) blid_sat_info_pane_ParamLimits

0xa156,	// (0x0009f098) main_cam_set_pane_ParamLimits

0x6237,	// (0x0009b179) aid_size_cell_colour_35_ParamLimits

0x6257,	// (0x0009b199) aid_size_cell_colour_112_ParamLimits

0x6277,	// (0x0009b1b9) aid_size_cell_effect_ParamLimits

0xa632,	// (0x0009f574) bg_tb_trans_pane_cp02_ParamLimits

0xe9c0,	// (0x000a3902) heading_imed_pane_ParamLimits

0x6297,	// (0x0009b1d9) listscroll_imed_pane_ParamLimits

0x3e57,	// (0x00098d99) popup_call2_audio_first_window_g5_ParamLimits

0x3e57,	// (0x00098d99) popup_call2_audio_first_window_g5

0x684e,	// (0x0009b790) aid_size_touch_image3_arrow_left_ParamLimits

0x684e,	// (0x0009b790) aid_size_touch_image3_arrow_left

0x687a,	// (0x0009b7bc) aid_size_touch_image3_arrow_right_ParamLimits

0x687a,	// (0x0009b7bc) aid_size_touch_image3_arrow_right

0xcebe,	// (0x000a1e00) vid4_progress_pane_t3

0x65ba,	// (0x0009b4fc) main_hwr_training_symbol_option_pane_ParamLimits

0x65ba,	// (0x0009b4fc) main_hwr_training_symbol_option_pane

0xb365,	// (0x000a02a7) popup_hwr_training_preview_window_ParamLimits

0xb365,	// (0x000a02a7) popup_hwr_training_preview_window

0x65da,	// (0x0009b51c) hwr_training_navi_pane_g5_ParamLimits

0x65da,	// (0x0009b51c) hwr_training_navi_pane_g5

0xcf6a,	// (0x000a1eac) popup_char_count_window

0xa156,	// (0x0009f098) bg_popup_sub_pane_cp20_ParamLimits

0x77f8,	// (0x0009c73a) list_vitu2_match_list_pane_ParamLimits

0x7807,	// (0x0009c749) vitu2_page_scroll_pane_ParamLimits

0x7807,	// (0x0009c749) vitu2_page_scroll_pane

0xd416,	// (0x000a2358) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd416,	// (0x000a2358) list_single_hwr_training_symbol_option_pane

0xd429,	// (0x000a236b) list_single_hwr_training_symbol_option_pane_g1

0xd431,	// (0x000a2373) list_single_hwr_training_symbol_option_pane_t1

0xd43f,	// (0x000a2381) bg_button_pane_cp023

0xd448,	// (0x000a238a) bg_button_pane_cp024

0x7e66,	// (0x0009cda8) vitu2_page_scroll_pane_g1

0x7e6e,	// (0x0009cdb0) vitu2_page_scroll_pane_g2

0x0001,

0xfa3b,	// (0x000a497d) vitu2_page_scroll_pane_g

0x7e76,	// (0x0009cdb8) vitu2_page_scroll_pane_t1

0xa847,	// (0x0009f789) popup_char_count_window_g1

0xd47b,	// (0x000a23bd) popup_char_count_window_g2

0xd490,	// (0x000a23d2) popup_char_count_window_g3

0x0002,

0xfa40,	// (0x000a4982) popup_char_count_window_g

0xd499,	// (0x000a23db) popup_char_count_window_t1

0xa164,	// (0x0009f0a6) main_vded2_pane

0xb064,	// (0x0009ffa6) aid_size_cell_imed_line

0xb06e,	// (0x0009ffb0) grid_imed_line_width_pane

0xb6f9,	// (0x000a063b) vid4_indicators_pane_g4

0xd4a7,	// (0x000a23e9) cell_imed_line_width_pane_ParamLimits

0xd4a7,	// (0x000a23e9) cell_imed_line_width_pane

0xd4bb,	// (0x000a23fd) cell_imed_line_width_pane_g1

0xa8d9,	// (0x0009f81b) cell_imed_line_width_pane_g2

0x0001,

0xfa47,	// (0x000a4989) cell_imed_line_width_pane_g

0x7e85,	// (0x0009cdc7) main_vded2_pane_g1_ParamLimits

0x7e85,	// (0x0009cdc7) main_vded2_pane_g1

0x7e9d,	// (0x0009cddf) main_vded2_pane_g2_ParamLimits

0x7e9d,	// (0x0009cddf) main_vded2_pane_g2

0x0001,

0xfa4c,	// (0x000a498e) main_vded2_pane_g_ParamLimits

0xfa4c,	// (0x000a498e) main_vded2_pane_g

0x7eaf,	// (0x0009cdf1) vded2_slider_pane_ParamLimits

0x7eaf,	// (0x0009cdf1) vded2_slider_pane

0x7ebf,	// (0x0009ce01) aid_size_touch_vded2_end

0x7ec9,	// (0x0009ce0b) aid_size_touch_vded2_playhead

0xd4c4,	// (0x000a2406) aid_size_touch_vded2_start

0xd4cc,	// (0x000a240e) vded2_slider_bg_pane

0xd4d5,	// (0x000a2417) vded2_slider_pane_g1

0xd4de,	// (0x000a2420) vded2_slider_pane_g2

0x7ed3,	// (0x0009ce15) vded2_slider_pane_g3

0x0002,

0xfa51,	// (0x000a4993) vded2_slider_pane_g

0xd4e6,	// (0x000a2428) vded2_slider_bg_pane_g1

0xd4ef,	// (0x000a2431) vded2_slider_bg_pane_g2

0xd4f8,	// (0x000a243a) vded2_slider_bg_pane_g3

0x0002,

0xfa58,	// (0x000a499a) vded2_slider_bg_pane_g

0x3006,	// (0x00097f48) aid_postcard_touch_down_pane_ParamLimits

0x3006,	// (0x00097f48) aid_postcard_touch_down_pane

0x301c,	// (0x00097f5e) aid_postcard_touch_up_pane_ParamLimits

0x301c,	// (0x00097f5e) aid_postcard_touch_up_pane

0xa164,	// (0x0009f0a6) main_blid2_pane

0xa640,	// (0x0009f582) popup_blid2_search_window

0xc97f,	// (0x000a18c1) blid2_gps_pane

0xc97f,	// (0x000a18c1) blid2_navig_pane

0xc97f,	// (0x000a18c1) blid2_search_pane

0xc97f,	// (0x000a18c1) blid2_tripm_pane

0x7ede,	// (0x0009ce20) blid2_search_pane_g1_ParamLimits

0x7ede,	// (0x0009ce20) blid2_search_pane_g1

0x7ef6,	// (0x0009ce38) blid2_search_pane_t1_ParamLimits

0x7ef6,	// (0x0009ce38) blid2_search_pane_t1

0x7f08,	// (0x0009ce4a) aid_size_cell_blid2_gps_ParamLimits

0x7f08,	// (0x0009ce4a) aid_size_cell_blid2_gps

0x7f20,	// (0x0009ce62) blid2_gps_pane_g1_ParamLimits

0x7f20,	// (0x0009ce62) blid2_gps_pane_g1

0x7f34,	// (0x0009ce76) grid_blid2_satellite_pane_ParamLimits

0x7f34,	// (0x0009ce76) grid_blid2_satellite_pane

0x7f4e,	// (0x0009ce90) blid2_navig_pane_g1_ParamLimits

0x7f4e,	// (0x0009ce90) blid2_navig_pane_g1

0x7f5a,	// (0x0009ce9c) blid2_navig_pane_t1_ParamLimits

0x7f5a,	// (0x0009ce9c) blid2_navig_pane_t1

0x7f75,	// (0x0009ceb7) blid2_navig_pane_t2_ParamLimits

0x7f75,	// (0x0009ceb7) blid2_navig_pane_t2

0x0001,

0xfa5f,	// (0x000a49a1) blid2_navig_pane_t_ParamLimits

0xfa5f,	// (0x000a49a1) blid2_navig_pane_t

0x7f90,	// (0x0009ced2) blid2_navig_ring_pane_ParamLimits

0x7f90,	// (0x0009ced2) blid2_navig_ring_pane

0x7fa9,	// (0x0009ceeb) blid2_speed_pane_ParamLimits

0x7fa9,	// (0x0009ceeb) blid2_speed_pane

0x7fb5,	// (0x0009cef7) blid2_tripm_pane_g1_ParamLimits

0x7fb5,	// (0x0009cef7) blid2_tripm_pane_g1

0x7fd0,	// (0x0009cf12) blid2_tripm_pane_g2_ParamLimits

0x7fd0,	// (0x0009cf12) blid2_tripm_pane_g2

0x7fe4,	// (0x0009cf26) blid2_tripm_pane_g3_ParamLimits

0x7fe4,	// (0x0009cf26) blid2_tripm_pane_g3

0x7ff8,	// (0x0009cf3a) blid2_tripm_pane_g4_ParamLimits

0x7ff8,	// (0x0009cf3a) blid2_tripm_pane_g4

0x800c,	// (0x0009cf4e) blid2_tripm_pane_g5_ParamLimits

0x800c,	// (0x0009cf4e) blid2_tripm_pane_g5

0x0005,

0xfa64,	// (0x000a49a6) blid2_tripm_pane_g_ParamLimits

0xfa64,	// (0x000a49a6) blid2_tripm_pane_g

0x8032,	// (0x0009cf74) blid2_tripm_pane_t1_ParamLimits

0x8032,	// (0x0009cf74) blid2_tripm_pane_t1

0x804d,	// (0x0009cf8f) blid2_tripm_pane_t2_ParamLimits

0x804d,	// (0x0009cf8f) blid2_tripm_pane_t2

0x8068,	// (0x0009cfaa) blid2_tripm_pane_t3_ParamLimits

0x8068,	// (0x0009cfaa) blid2_tripm_pane_t3

0x0003,

0xfa71,	// (0x000a49b3) blid2_tripm_pane_t_ParamLimits

0xfa71,	// (0x000a49b3) blid2_tripm_pane_t

0x80af,	// (0x0009cff1) cell_blid2_satellite_pane_ParamLimits

0x80af,	// (0x0009cff1) cell_blid2_satellite_pane

0x80cd,	// (0x0009d00f) cell_blid2_satellite_pane_g1

0xd501,	// (0x000a2443) cell_blid2_satellite_pane_t1

0xab3a,	// (0x0009fa7c) blid2_speed_pane_g1

0xd50f,	// (0x000a2451) blid2_speed_pane_t1

0xd51d,	// (0x000a245f) blid2_speed_pane_t2

0x0001,

0xfa7a,	// (0x000a49bc) blid2_speed_pane_t

0xab3a,	// (0x0009fa7c) blid2_navig_ring_pane_g1

0x80d6,	// (0x0009d018) blid2_navig_ring_pane_g2

0x80de,	// (0x0009d020) blid2_navig_ring_pane_g3

0x80e6,	// (0x0009d028) blid2_navig_ring_pane_g4

0x80ee,	// (0x0009d030) blid2_navig_ring_pane_g5

0x0004,

0xfa7f,	// (0x000a49c1) blid2_navig_ring_pane_g

0xc97f,	// (0x000a18c1) bg_popup_window_pane_cp011

0xd52b,	// (0x000a246d) popup_blid2_search_window_g1

0xd533,	// (0x000a2475) popup_blid2_search_window_t1

0xd541,	// (0x000a2483) popup_blid2_search_window_t2

0x0001,

0xfa8a,	// (0x000a49cc) popup_blid2_search_window_t

0xe6dd,	// (0x000a361f) main_browser_pane_g1

0xe31e,	// (0x000a3260) main_browser_pane_ParamLimits

0xa156,	// (0x0009f098) bg_button_pane_cp011_ParamLimits

0x7074,	// (0x0009bfb6) cell_vitu2_function_pane_g1_ParamLimits

0xa632,	// (0x0009f574) bg_popup_sub_pane_cp22_ParamLimits

0x79a1,	// (0x0009c8e3) input_focus_pane_cp08_ParamLimits

0x79b8,	// (0x0009c8fa) popup_vitu2_query_button_pane_ParamLimits

0x79b8,	// (0x0009c8fa) popup_vitu2_query_button_pane

0x79c9,	// (0x0009c90b) popup_vitu2_query_input_button_pane

0xd1dd,	// (0x000a211f) popup_vitu2_query_window_g1_ParamLimits

0x79d3,	// (0x0009c915) popup_vitu2_query_window_g2_ParamLimits

0xf9db,	// (0x000a491d) popup_vitu2_query_window_g_ParamLimits

0xc97f,	// (0x000a18c1) bg_button_pane_cp026

0x80f6,	// (0x0009d038) popup_vitu2_query_input_button_pane_g1

0xc97f,	// (0x000a18c1) bg_button_pane_cp025

0xd54f,	// (0x000a2491) popup_vitu2_query_button_pane_t1

0x5643,	// (0x0009a585) main_mp3_pane_t6

0x5651,	// (0x0009a593) popup_slider_window_cp01

0xb65f,	// (0x000a05a1) cam4_battery_pane

0xb6b8,	// (0x000a05fa) cam4_battery_pane_cp02

0xce6d,	// (0x000a1daf) cam4_battery_pane_cp01

0xce6d,	// (0x000a1daf) cam4_battery_pane_cp03

0xcd90,	// (0x000a1cd2) cam4_battery_pane_g1

0xab3a,	// (0x0009fa7c) cam4_battery_pane_g2

0x0001,

0xfa8f,	// (0x000a49d1) cam4_battery_pane_g

0xaa04,	// (0x0009f946) popup_blid_sat_info2_window_t11

0x2960,	// (0x000978a2) aid_size_touch_mv_arrow_left_ParamLimits

0x2989,	// (0x000978cb) aid_size_touch_mv_arrow_right_ParamLimits

0xee65,	// (0x000a3da7) navi_pane_g1_ParamLimits

0x29c8,	// (0x0009790a) navi_pane_g2_ParamLimits

0x29f6,	// (0x00097938) navi_pane_g3_ParamLimits

0xf3f5,	// (0x000a4337) navi_pane_g_ParamLimits

0x2a4e,	// (0x00097990) navi_pane_mv_t1_ParamLimits

0x62a3,	// (0x0009b1e5) grid_imed_effect_pane_ParamLimits

0x185a,	// (0x0009679c) aid_placing_vt_slider_lsc

0xe62c,	// (0x000a356e) aid_placing_vt_slider_prt

0xdabf,	// (0x000a2a01) bg_tb_trans_pane_cp01_ParamLimits

0xacc1,	// (0x0009fc03) popup_image_details_window_g1_ParamLimits

0xacd4,	// (0x0009fc16) popup_image_details_window_g2_ParamLimits

0xace9,	// (0x0009fc2b) popup_image_details_window_g3_ParamLimits

0xace9,	// (0x0009fc2b) popup_image_details_window_g3

0xf728,	// (0x000a466a) popup_image_details_window_g_ParamLimits

0xacfd,	// (0x0009fc3f) popup_image_details_window_t1_ParamLimits

0xad0f,	// (0x0009fc51) popup_image_details_window_t2_ParamLimits

0xad28,	// (0x0009fc6a) popup_image_details_window_t3_ParamLimits

0xad3c,	// (0x0009fc7e) popup_image_details_window_t4_ParamLimits

0xad57,	// (0x0009fc99) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x000a4671) popup_image_details_window_t_ParamLimits

0x7d4b,	// (0x0009cc8d) cl_header_name_pane_ParamLimits

0x7d4b,	// (0x0009cc8d) cl_header_name_pane

0x80fe,	// (0x0009d040) cl_header_name_pane_t1_ParamLimits

0x80fe,	// (0x0009d040) cl_header_name_pane_t1

0x811f,	// (0x0009d061) cl_header_name_pane_t2_ParamLimits

0x811f,	// (0x0009d061) cl_header_name_pane_t2

0x8161,	// (0x0009d0a3) cl_header_name_pane_t3_ParamLimits

0x8161,	// (0x0009d0a3) cl_header_name_pane_t3

0x0002,

0xfa94,	// (0x000a49d6) cl_header_name_pane_t_ParamLimits

0xfa94,	// (0x000a49d6) cl_header_name_pane_t

0x2a1f,	// (0x00097961) navi_pane_mv_g2_ParamLimits

0xcf44,	// (0x000a1e86) field_vitu2_entry_pane_g1_ParamLimits

0xcf50,	// (0x000a1e92) field_vitu2_entry_pane_g2_ParamLimits

0xcf5c,	// (0x000a1e9e) field_vitu2_entry_pane_g3_ParamLimits

0xcf5c,	// (0x000a1e9e) field_vitu2_entry_pane_g3

0x02d1,	// (0x00095213) field_vitu2_entry_pane_g_ParamLimits

0x6ff0,	// (0x0009bf32) cell_vitu2_itu_pane_g1_ParamLimits

0x7000,	// (0x0009bf42) cell_vitu2_itu_pane_g2_ParamLimits

0x7000,	// (0x0009bf42) cell_vitu2_itu_pane_g2

0x0001,

0xf926,	// (0x000a4868) cell_vitu2_itu_pane_g_ParamLimits

0xf926,	// (0x000a4868) cell_vitu2_itu_pane_g

0xa156,	// (0x0009f098) bg_vkb2_func_pane_cp05_ParamLimits

0xa156,	// (0x0009f098) bg_vkb2_func_pane_cp05

0xa156,	// (0x0009f098) bg_vkb2_func_pane_cp03

0xa156,	// (0x0009f098) bg_vkb2_func_pane_cp04

0xa156,	// (0x0009f098) bg_vkb2_func_pane_cp10_ParamLimits

0xa156,	// (0x0009f098) bg_vkb2_func_pane_cp10

0x7ced,	// (0x0009cc2f) bg_vkb2_func_pane_cp08

0x7cd3,	// (0x0009cc15) bg_vkb2_func_pane_cp06

0x7ce1,	// (0x0009cc23) bg_vkb2_func_pane_cp07

0xd451,	// (0x000a2393) bg_vkb2_func_pane_cp11_ParamLimits

0xd451,	// (0x000a2393) bg_vkb2_func_pane_cp11

0xd466,	// (0x000a23a8) bg_vkb2_func_pane_cp12_ParamLimits

0xd466,	// (0x000a23a8) bg_vkb2_func_pane_cp12

0xc97f,	// (0x000a18c1) bg_vkb2_func_pane_cp09

0xcf7c,	// (0x000a1ebe) bg_vkb2_func_pane_g1

0xe7ee,	// (0x000a3730) bg_vkb2_func_pane_g2

0xcf84,	// (0x000a1ec6) bg_vkb2_func_pane_g3

0xcf8c,	// (0x000a1ece) bg_vkb2_func_pane_g4

0xd1a0,	// (0x000a20e2) bg_vkb2_func_pane_g5

0xcfa4,	// (0x000a1ee6) bg_vkb2_func_pane_g6

0xcfac,	// (0x000a1eee) bg_vkb2_func_pane_g7

0xcf9c,	// (0x000a1ede) bg_vkb2_func_pane_g8

0xe7ce,	// (0x000a3710) bg_vkb2_func_pane_g9

0x0008,

0x04e2,	// (0x00095424) bg_vkb2_func_pane_g

0x8020,	// (0x0009cf62) blid2_tripm_pane_g6_ParamLimits

0x8020,	// (0x0009cf62) blid2_tripm_pane_g6

0xcd4a,	// (0x000a1c8c) mp4_progress_pane_g1

0x809b,	// (0x0009cfdd) blid2_tripm_values_pane_ParamLimits

0x809b,	// (0x0009cfdd) blid2_tripm_values_pane

0x8192,	// (0x0009d0d4) blid2_tripm_values_pane_t1

0x81a0,	// (0x0009d0e2) blid2_tripm_values_pane_t2

0x81ae,	// (0x0009d0f0) blid2_tripm_values_pane_t3

0x81bc,	// (0x0009d0fe) blid2_tripm_values_pane_t4

0x81ca,	// (0x0009d10c) blid2_tripm_values_pane_t5

0x81d8,	// (0x0009d11a) blid2_tripm_values_pane_t6

0x81e6,	// (0x0009d128) blid2_tripm_values_pane_t7

0x81f4,	// (0x0009d136) blid2_tripm_values_pane_t8

0x8202,	// (0x0009d144) blid2_tripm_values_pane_t9

0x0008,

0xfa9b,	// (0x000a49dd) blid2_tripm_values_pane_t

0x189c,	// (0x000967de) call_video_pane_t1_ParamLimits

0x18ba,	// (0x000967fc) call_video_pane_t2_ParamLimits

0xf27e,	// (0x000a41c0) call_video_pane_t_ParamLimits

0x2f31,	// (0x00097e73) msg_header_pane_g1_ParamLimits

0xf08e,	// (0x000a3fd0) msg_header_pane_g2_ParamLimits

0xf08e,	// (0x000a3fd0) msg_header_pane_g2

0x0001,

0xf498,	// (0x000a43da) msg_header_pane_g_ParamLimits

0xf498,	// (0x000a43da) msg_header_pane_g

0xe31e,	// (0x000a3260) main_clock2_pane_ParamLimits

0x5fac,	// (0x0009aeee) grid_clock2_toolbar_pane_ParamLimits

0x5fac,	// (0x0009aeee) grid_clock2_toolbar_pane

0x5fac,	// (0x0009aeee) listscroll_clock2_pane_ParamLimits

0x5fac,	// (0x0009aeee) listscroll_clock2_pane

0x6094,	// (0x0009afd6) main_clock2_pane_t3_ParamLimits

0x6094,	// (0x0009afd6) main_clock2_pane_t3

0x60b7,	// (0x0009aff9) main_clock2_pane_t4_ParamLimits

0x60b7,	// (0x0009aff9) main_clock2_pane_t4

0xd55d,	// (0x000a249f) cell_clock2_toolbar_pane

0xd565,	// (0x000a24a7) cell_clock2_toolbar_pane_cp01

0xd565,	// (0x000a24a7) cell_clock2_toolbar_pane_cp02

0xd56d,	// (0x000a24af) cell_clock2_toolbar_pane_cp03

0xd575,	// (0x000a24b7) list_clock2_pane

0xedb8,	// (0x000a3cfa) scroll_pane_cp10

0xd57d,	// (0x000a24bf) list_single_clock2_pane_ParamLimits

0xd57d,	// (0x000a24bf) list_single_clock2_pane

0xef05,	// (0x000a3e47) list_highlight_pane_cp08

0xd58a,	// (0x000a24cc) list_single_clock2_pane_t1

0xd598,	// (0x000a24da) list_single_clock2_pane_t2

0x0001,

0xfaae,	// (0x000a49f0) list_single_clock2_pane_t

0xc97f,	// (0x000a18c1) bg_button_pane_cp10

0xd5a6,	// (0x000a24e8) cell_clock2_toolbar_pane_g1

0x2f84,	// (0x00097ec6) aid_main_viewer_pane_g1_ParamLimits

0x2f84,	// (0x00097ec6) aid_main_viewer_pane_g1

0x2f92,	// (0x00097ed4) aid_main_viewer_pane_g2_ParamLimits

0x2f92,	// (0x00097ed4) aid_main_viewer_pane_g2

0x2fa0,	// (0x00097ee2) aid_main_viewer_pane_g3_ParamLimits

0x2fa0,	// (0x00097ee2) aid_main_viewer_pane_g3

0x2faf,	// (0x00097ef1) aid_main_viewer_pane_g4_ParamLimits

0x2faf,	// (0x00097ef1) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x000a43eb) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x000a43eb) aid_main_viewer_pane_g

0x486a,	// (0x000997ac) main_calc_pane_ParamLimits

0x487e,	// (0x000997c0) main_dialer2_pane_ParamLimits

0xa164,	// (0x0009f0a6) main_cam6_pane

0xa164,	// (0x0009f0a6) main_vid6_pane

0x5fb8,	// (0x0009aefa) listscroll_gen_pane_cp06_ParamLimits

0x5fb8,	// (0x0009aefa) listscroll_gen_pane_cp06

0x60da,	// (0x0009b01c) main_clock2_pane_t5_ParamLimits

0x60da,	// (0x0009b01c) main_clock2_pane_t5

0x613a,	// (0x0009b07c) aid_call2_pane_cp10_ParamLimits

0x614c,	// (0x0009b08e) aid_call_pane_cp10_ParamLimits

0xee3a,	// (0x000a3d7c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xee3a,	// (0x000a3d7c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x615e,	// (0x0009b0a0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x615e,	// (0x0009b0a0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xee3a,	// (0x000a3d7c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x000a4721) popup_clock_analogue_window_cp10_g_ParamLimits

0x6170,	// (0x0009b0b2) popup_clock_analogue_window_cp10_t1_ParamLimits

0x67fb,	// (0x0009b73d) cell_dialer2_keypad_pane_g2_ParamLimits

0x67fb,	// (0x0009b73d) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x000a4802) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x000a4802) cell_dialer2_keypad_pane_g

0x6817,	// (0x0009b759) cell_dialer2_keypad_pane_t1

0x738b,	// (0x0009c2cd) main_cset_text2_pane_ParamLimits

0x738b,	// (0x0009c2cd) main_cset_text2_pane

0xd3b9,	// (0x000a22fb) area_vitu2_query_pane_g1_ParamLimits

0x7c72,	// (0x0009cbb4) area_vitu2_query_pane_g2_ParamLimits

0xfa04,	// (0x000a4946) area_vitu2_query_pane_g_ParamLimits

0xb866,	// (0x000a07a8) area_vitu2_query_pane_t7_ParamLimits

0xb866,	// (0x000a07a8) area_vitu2_query_pane_t7

0x7cd3,	// (0x0009cc15) bg_button_pane_cp018_ParamLimits

0x7ce1,	// (0x0009cc23) bg_button_pane_cp021_ParamLimits

0x7ced,	// (0x0009cc2f) bg_button_pane_cp022_ParamLimits

0x7ced,	// (0x0009cc2f) bg_vkb2_func_pane_cp08_ParamLimits

0x7cd3,	// (0x0009cc15) bg_vkb2_func_pane_cp06_ParamLimits

0x7ce1,	// (0x0009cc23) bg_vkb2_func_pane_cp07_ParamLimits

0x7cfe,	// (0x0009cc40) input_focus_pane_cp09_ParamLimits

0xcee3,	// (0x000a1e25) cam6_autofocus_pane_ParamLimits

0xcee3,	// (0x000a1e25) cam6_autofocus_pane

0x8210,	// (0x0009d152) cam6_image_uncrop_pane_ParamLimits

0x8210,	// (0x0009d152) cam6_image_uncrop_pane

0x821f,	// (0x0009d161) cam6_indi_pane_ParamLimits

0x821f,	// (0x0009d161) cam6_indi_pane

0x8235,	// (0x0009d177) cam6_mode_pane_ParamLimits

0x8235,	// (0x0009d177) cam6_mode_pane

0x8247,	// (0x0009d189) cam6_timer_pane_ParamLimits

0x8247,	// (0x0009d189) cam6_timer_pane

0x8253,	// (0x0009d195) cam6_zoom_pane_ParamLimits

0x8253,	// (0x0009d195) cam6_zoom_pane

0x825f,	// (0x0009d1a1) cam6_mode_pane_g1_ParamLimits

0x825f,	// (0x0009d1a1) cam6_mode_pane_g1

0x826f,	// (0x0009d1b1) cam6_mode_pane_g2_ParamLimits

0x826f,	// (0x0009d1b1) cam6_mode_pane_g2

0x827f,	// (0x0009d1c1) cam6_mode_pane_g3_ParamLimits

0x827f,	// (0x0009d1c1) cam6_mode_pane_g3

0x828f,	// (0x0009d1d1) cam6_mode_pane_g4_ParamLimits

0x828f,	// (0x0009d1d1) cam6_mode_pane_g4

0x0003,

0xfab3,	// (0x000a49f5) cam6_mode_pane_g_ParamLimits

0xfab3,	// (0x000a49f5) cam6_mode_pane_g

0xcef1,	// (0x000a1e33) bg_tb_trans_pane_cp08_ParamLimits

0xcef1,	// (0x000a1e33) bg_tb_trans_pane_cp08

0xd5ae,	// (0x000a24f0) cam6_battery_pane_ParamLimits

0xd5ae,	// (0x000a24f0) cam6_battery_pane

0xd5c4,	// (0x000a2506) cam6_indi_pane_g1_ParamLimits

0xd5c4,	// (0x000a2506) cam6_indi_pane_g1

0xd5d6,	// (0x000a2518) cam6_indi_pane_g2_ParamLimits

0xd5d6,	// (0x000a2518) cam6_indi_pane_g2

0xd5e8,	// (0x000a252a) cam6_indi_pane_g3_ParamLimits

0xd5e8,	// (0x000a252a) cam6_indi_pane_g3

0x0002,

0xfabc,	// (0x000a49fe) cam6_indi_pane_g_ParamLimits

0xfabc,	// (0x000a49fe) cam6_indi_pane_g

0xd5fa,	// (0x000a253c) cam6_indi_pane_t1_ParamLimits

0xd5fa,	// (0x000a253c) cam6_indi_pane_t1

0x829f,	// (0x0009d1e1) cam6_autofocus_pane_g1

0x82a7,	// (0x0009d1e9) cam6_autofocus_pane_g2

0x82af,	// (0x0009d1f1) cam6_autofocus_pane_g3

0x82b7,	// (0x0009d1f9) cam6_autofocus_pane_g4

0x0003,

0xfac3,	// (0x000a4a05) cam6_autofocus_pane_g

0xd620,	// (0x000a2562) cam6_timer_pane_g1

0xd628,	// (0x000a256a) cam6_timer_pane_t1

0xd636,	// (0x000a2578) cam6_zoom_cont_pane

0xd63e,	// (0x000a2580) cam6_zoom_pane_g1

0xd646,	// (0x000a2588) cam6_zoom_pane_g2

0x82bf,	// (0x0009d201) cam6_zoom_pane_g3

0x0002,

0xfacc,	// (0x000a4a0e) cam6_zoom_pane_g

0xab3a,	// (0x0009fa7c) cam6_battery_pane_g1

0xab3a,	// (0x0009fa7c) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x000a462e) cam6_battery_pane_g

0xd64e,	// (0x000a2590) cam6_zoom_cont_pane_g1

0xd657,	// (0x000a2599) cam6_zoom_cont_pane_g2

0xd660,	// (0x000a25a2) cam6_zoom_cont_pane_g3

0x0002,

0xfad3,	// (0x000a4a15) cam6_zoom_cont_pane_g

0x82dc,	// (0x0009d21e) cam6_mode_pane_cp_ParamLimits

0x82dc,	// (0x0009d21e) cam6_mode_pane_cp

0x82ee,	// (0x0009d230) cam6_zoom_pane_cp_ParamLimits

0x82ee,	// (0x0009d230) cam6_zoom_pane_cp

0x82fa,	// (0x0009d23c) vid6_image_uncrop_cif_pane_ParamLimits

0x82fa,	// (0x0009d23c) vid6_image_uncrop_cif_pane

0x830a,	// (0x0009d24c) vid6_image_uncrop_nhd_pane_ParamLimits

0x830a,	// (0x0009d24c) vid6_image_uncrop_nhd_pane

0x8319,	// (0x0009d25b) vid6_image_uncrop_vga_pane_ParamLimits

0x8319,	// (0x0009d25b) vid6_image_uncrop_vga_pane

0x8328,	// (0x0009d26a) vid6_image_uncrop_wvga_pane_ParamLimits

0x8328,	// (0x0009d26a) vid6_image_uncrop_wvga_pane

0x8337,	// (0x0009d279) vid6_indi_pane_ParamLimits

0x8337,	// (0x0009d279) vid6_indi_pane

0xcef1,	// (0x000a1e33) bg_tb_trans_pane_cp09_ParamLimits

0xcef1,	// (0x000a1e33) bg_tb_trans_pane_cp09

0xd678,	// (0x000a25ba) cam6_battery_pane_cp_ParamLimits

0xd678,	// (0x000a25ba) cam6_battery_pane_cp

0xd684,	// (0x000a25c6) vid6_indi_pane_g1_ParamLimits

0xd684,	// (0x000a25c6) vid6_indi_pane_g1

0xd696,	// (0x000a25d8) vid6_indi_pane_g2_ParamLimits

0xd696,	// (0x000a25d8) vid6_indi_pane_g2

0xd6a8,	// (0x000a25ea) vid6_indi_pane_g3_ParamLimits

0xd6a8,	// (0x000a25ea) vid6_indi_pane_g3

0xd6bd,	// (0x000a25ff) vid6_indi_pane_g4_ParamLimits

0xd6bd,	// (0x000a25ff) vid6_indi_pane_g4

0xd6d2,	// (0x000a2614) vid6_indi_pane_g5_ParamLimits

0xd6d2,	// (0x000a2614) vid6_indi_pane_g5

0x0004,

0xfada,	// (0x000a4a1c) vid6_indi_pane_g_ParamLimits

0xfada,	// (0x000a4a1c) vid6_indi_pane_g

0xd6ec,	// (0x000a262e) vid6_indi_pane_t1_ParamLimits

0xd6ec,	// (0x000a262e) vid6_indi_pane_t1

0xd702,	// (0x000a2644) vid6_indi_pane_t2_ParamLimits

0xd702,	// (0x000a2644) vid6_indi_pane_t2

0xd72a,	// (0x000a266c) vid6_indi_pane_t3_ParamLimits

0xd72a,	// (0x000a266c) vid6_indi_pane_t3

0xd752,	// (0x000a2694) vid6_indi_pane_t4_ParamLimits

0xd752,	// (0x000a2694) vid6_indi_pane_t4

0x0003,

0xfae5,	// (0x000a4a27) vid6_indi_pane_t_ParamLimits

0xfae5,	// (0x000a4a27) vid6_indi_pane_t

0xd776,	// (0x000a26b8) wait_bar_pane_cp08

0x834f,	// (0x0009d291) main_cset_text2_pane_t1_ParamLimits

0x834f,	// (0x0009d291) main_cset_text2_pane_t1

0x82c7,	// (0x0009d209) listscroll_gen_pane_cp06_t1_ParamLimits

0x82c7,	// (0x0009d209) listscroll_gen_pane_cp06_t1

0xa164,	// (0x0009f0a6) main_cam6_set_pane

0xb651,	// (0x000a0593) bg_tb_trans_pane_cp06_ParamLimits

0xb667,	// (0x000a05a9) cam4_indicators_pane_g1_ParamLimits

0xb678,	// (0x000a05ba) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x000a483f) cam4_indicators_pane_g_ParamLimits

0xb696,	// (0x000a05d8) cam4_indicators_pane_t1_ParamLimits

0xa156,	// (0x0009f098) bg_tb_trans_pane_cp07_ParamLimits

0xb6c0,	// (0x000a0602) vid4_indicators_pane_g1_ParamLimits

0xb6d4,	// (0x000a0616) vid4_indicators_pane_g2_ParamLimits

0xb6e8,	// (0x000a062a) vid4_indicators_pane_g3_ParamLimits

0xb6f9,	// (0x000a063b) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x000a4851) vid4_indicators_pane_g_ParamLimits

0xb715,	// (0x000a0657) vid4_indicators_pane_t1_ParamLimits

0x7e42,	// (0x0009cd84) vid4_progress_pane_g1_ParamLimits

0x7e54,	// (0x0009cd96) vid4_progress_pane_g2_ParamLimits

0xea39,	// (0x000a397b) vid4_progress_pane_g3_ParamLimits

0xce75,	// (0x000a1db7) vid4_progress_pane_g4_ParamLimits

0xfa29,	// (0x000a496b) vid4_progress_pane_g_ParamLimits

0xce93,	// (0x000a1dd5) vid4_progress_pane_t1_ParamLimits

0xcea8,	// (0x000a1dea) vid4_progress_pane_t2_ParamLimits

0xcebe,	// (0x000a1e00) vid4_progress_pane_t3_ParamLimits

0xfa34,	// (0x000a4976) vid4_progress_pane_t_ParamLimits

0xced3,	// (0x000a1e15) wait_bar_pane_cp07_ParamLimits

0x836f,	// (0x0009d2b1) main_cam6_set_pane_g2_ParamLimits

0x836f,	// (0x0009d2b1) main_cam6_set_pane_g2

0x8393,	// (0x0009d2d5) main_cset6_listscroll_pane_ParamLimits

0x8393,	// (0x0009d2d5) main_cset6_listscroll_pane

0x83af,	// (0x0009d2f1) main_cset6_slider_pane_ParamLimits

0x83af,	// (0x0009d2f1) main_cset6_slider_pane

0x83c5,	// (0x0009d307) main_cset6_text2_pane_ParamLimits

0x83c5,	// (0x0009d307) main_cset6_text2_pane

0xd785,	// (0x000a26c7) main_cset6_text_pane

0xd78d,	// (0x000a26cf) main_cset_list_pane_copy1_ParamLimits

0xd78d,	// (0x000a26cf) main_cset_list_pane_copy1

0xd79d,	// (0x000a26df) scroll_pane_cp028_copy1

0x83d3,	// (0x0009d315) cset_list_set_pane_copy1

0x83e6,	// (0x0009d328) aid_position_infowindow_above_copy1

0x83ee,	// (0x0009d330) aid_position_infowindow_below_copy1

0xb8e4,	// (0x000a0826) cset_list_set_pane_g1_copy1

0xb8ec,	// (0x000a082e) cset_list_set_pane_g3_copy1_ParamLimits

0xb8ec,	// (0x000a082e) cset_list_set_pane_g3_copy1

0xb8fb,	// (0x000a083d) cset_list_set_pane_t1_copy1_ParamLimits

0xb8fb,	// (0x000a083d) cset_list_set_pane_t1_copy1

0xdabf,	// (0x000a2a01) list_highlight_pane_cp021_copy1_ParamLimits

0xdabf,	// (0x000a2a01) list_highlight_pane_cp021_copy1

0xd7a6,	// (0x000a26e8) cset6_slider_pane_ParamLimits

0xd7a6,	// (0x000a26e8) cset6_slider_pane

0xd7d2,	// (0x000a2714) main_cset6_slider_pane_g1_ParamLimits

0xd7d2,	// (0x000a2714) main_cset6_slider_pane_g1

0x83f6,	// (0x0009d338) main_cset6_slider_pane_g2_ParamLimits

0x83f6,	// (0x0009d338) main_cset6_slider_pane_g2

0xd0ab,	// (0x000a1fed) main_cset6_slider_pane_g3_ParamLimits

0xd0ab,	// (0x000a1fed) main_cset6_slider_pane_g3

0x7450,	// (0x0009c392) main_cset6_slider_pane_g4_ParamLimits

0x7450,	// (0x0009c392) main_cset6_slider_pane_g4

0x7498,	// (0x0009c3da) main_cset6_slider_pane_g5_ParamLimits

0x7498,	// (0x0009c3da) main_cset6_slider_pane_g5

0xd0ab,	// (0x000a1fed) main_cset6_slider_pane_g7_ParamLimits

0xd0ab,	// (0x000a1fed) main_cset6_slider_pane_g7

0xd0b7,	// (0x000a1ff9) main_cset6_slider_pane_g8_ParamLimits

0xd0b7,	// (0x000a1ff9) main_cset6_slider_pane_g8

0x7438,	// (0x0009c37a) main_cset6_slider_pane_g9_ParamLimits

0x7438,	// (0x0009c37a) main_cset6_slider_pane_g9

0x7444,	// (0x0009c386) main_cset6_slider_pane_g10_ParamLimits

0x7444,	// (0x0009c386) main_cset6_slider_pane_g10

0x7450,	// (0x0009c392) main_cset6_slider_pane_g11_ParamLimits

0x7450,	// (0x0009c392) main_cset6_slider_pane_g11

0x745c,	// (0x0009c39e) main_cset6_slider_pane_g12_ParamLimits

0x745c,	// (0x0009c39e) main_cset6_slider_pane_g12

0x7468,	// (0x0009c3aa) main_cset6_slider_pane_g13_ParamLimits

0x7468,	// (0x0009c3aa) main_cset6_slider_pane_g13

0x7474,	// (0x0009c3b6) main_cset6_slider_pane_g14_ParamLimits

0x7474,	// (0x0009c3b6) main_cset6_slider_pane_g14

0x841e,	// (0x0009d360) main_cset6_slider_pane_g15_ParamLimits

0x841e,	// (0x0009d360) main_cset6_slider_pane_g15

0x7498,	// (0x0009c3da) main_cset6_slider_pane_g16_ParamLimits

0x7498,	// (0x0009c3da) main_cset6_slider_pane_g16

0x74a4,	// (0x0009c3e6) main_cset6_slider_pane_g17_ParamLimits

0x74a4,	// (0x0009c3e6) main_cset6_slider_pane_g17

0x0011,

0xfaee,	// (0x000a4a30) main_cset6_slider_pane_g_ParamLimits

0xfaee,	// (0x000a4a30) main_cset6_slider_pane_g

0xd7fa,	// (0x000a273c) main_cset6_slider_pane_t1_ParamLimits

0xd7fa,	// (0x000a273c) main_cset6_slider_pane_t1

0x8436,	// (0x0009d378) main_cset6_slider_pane_t2_ParamLimits

0x8436,	// (0x0009d378) main_cset6_slider_pane_t2

0x8461,	// (0x0009d3a3) main_cset6_slider_pane_t3_ParamLimits

0x8461,	// (0x0009d3a3) main_cset6_slider_pane_t3

0x848c,	// (0x0009d3ce) main_cset6_slider_pane_t4_ParamLimits

0x848c,	// (0x0009d3ce) main_cset6_slider_pane_t4

0x84b7,	// (0x0009d3f9) main_cset6_slider_pane_t5_ParamLimits

0x84b7,	// (0x0009d3f9) main_cset6_slider_pane_t5

0xd83b,	// (0x000a277d) main_cset6_slider_pane_t7_ParamLimits

0xd83b,	// (0x000a277d) main_cset6_slider_pane_t7

0x84e2,	// (0x0009d424) main_cset6_slider_pane_t8_ParamLimits

0x84e2,	// (0x0009d424) main_cset6_slider_pane_t8

0x8506,	// (0x0009d448) main_cset6_slider_pane_t9_ParamLimits

0x8506,	// (0x0009d448) main_cset6_slider_pane_t9

0x852a,	// (0x0009d46c) main_cset6_slider_pane_t10_ParamLimits

0x852a,	// (0x0009d46c) main_cset6_slider_pane_t10

0x854e,	// (0x0009d490) main_cset6_slider_pane_t11_ParamLimits

0x854e,	// (0x0009d490) main_cset6_slider_pane_t11

0xd871,	// (0x000a27b3) main_cset6_slider_pane_t14_ParamLimits

0xd871,	// (0x000a27b3) main_cset6_slider_pane_t14

0xd8aa,	// (0x000a27ec) main_cset6_slider_pane_t15_ParamLimits

0xd8aa,	// (0x000a27ec) main_cset6_slider_pane_t15

0x000b,

0xfb13,	// (0x000a4a55) main_cset6_slider_pane_t_ParamLimits

0xfb13,	// (0x000a4a55) main_cset6_slider_pane_t

0xd8e3,	// (0x000a2825) cset_slider_pane_g1_copy1

0xd8ec,	// (0x000a282e) cset_slider_pane_g2_copy1

0xd8f5,	// (0x000a2837) cset_slider_pane_g3_copy1

0xc97f,	// (0x000a18c1) bg_popup_sub_pane_cp011_copy1

0xd8fe,	// (0x000a2840) main_cset_text_pane_g1_copy1

0xd1f1,	// (0x000a2133) main_cset_text_pane_t1_copy1

0xd1ff,	// (0x000a2141) main_cset_text_pane_t2_copy1

0xd20d,	// (0x000a214f) main_cset_text_pane_t3_copy1

0xd21b,	// (0x000a215d) main_cset_text_pane_t4_copy1

0xd229,	// (0x000a216b) main_cset_text_pane_t5_copy1

0xd906,	// (0x000a2848) main_cset_text_pane_t6_copy1

0xd914,	// (0x000a2856) main_cset_text_pane_t7_copy1

0x834f,	// (0x0009d291) main_cset_text2_pane_t1_copy1

0xa156,	// (0x0009f098) main_ncimui_pane

0x4ab4,	// (0x000999f6) popup_query_ncimui_window_ParamLimits

0x4ab4,	// (0x000999f6) popup_query_ncimui_window

0xae06,	// (0x0009fd48) field_cale_ev2_pane_g4_ParamLimits

0xae06,	// (0x0009fd48) field_cale_ev2_pane_g4

0x66d3,	// (0x0009b615) cell_video_dialer_keypad_pane_g2_ParamLimits

0x66d3,	// (0x0009b615) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x000a47dd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x000a47dd) cell_video_dialer_keypad_pane_g

0x66eb,	// (0x0009b62d) cell_video_dialer_keypad_pane_t1

0xc97f,	// (0x000a18c1) bg_popup_window_pane_cp012

0xec88,	// (0x000a3bca) heading_pane_cp06

0xd940,	// (0x000a2882) ncim_query_content_pane

0xc97f,	// (0x000a18c1) bg_popup_heading_pane_cp01

0xd948,	// (0x000a288a) ncim_heading_pane_t1

0xd956,	// (0x000a2898) ncim_indicator_popup_pane

0xd968,	// (0x000a28aa) ncim_query_button_pane

0xd97c,	// (0x000a28be) ncim_query_content_pane_t1

0xd98e,	// (0x000a28d0) ncim_query_content_pane_t2

0x0005,

0xfb57,	// (0x000a4a99) ncim_query_content_pane_t

0xd9c8,	// (0x000a290a) ncim_query_list_pane

0xd9da,	// (0x000a291c) ncim_query_popup_pane

0xd956,	// (0x000a2898) ncim_indicator_popup_pane_ParamLimits

0x8698,	// (0x0009d5da) ncim_query_content_pane_g1_ParamLimits

0x8698,	// (0x0009d5da) ncim_query_content_pane_g1

0xd97c,	// (0x000a28be) ncim_query_content_pane_t1_ParamLimits

0xd98e,	// (0x000a28d0) ncim_query_content_pane_t2_ParamLimits

0x86a4,	// (0x0009d5e6) ncim_query_content_pane_t3_ParamLimits

0x86a4,	// (0x0009d5e6) ncim_query_content_pane_t3

0x86cc,	// (0x0009d60e) ncim_query_content_pane_t4_ParamLimits

0x86cc,	// (0x0009d60e) ncim_query_content_pane_t4

0x86f4,	// (0x0009d636) ncim_query_content_pane_t5_ParamLimits

0x86f4,	// (0x0009d636) ncim_query_content_pane_t5

0xd9a0,	// (0x000a28e2) ncim_query_content_pane_t6_ParamLimits

0xd9a0,	// (0x000a28e2) ncim_query_content_pane_t6

0xfb57,	// (0x000a4a99) ncim_query_content_pane_t_ParamLimits

0xd9c8,	// (0x000a290a) ncim_query_list_pane_ParamLimits

0xd9da,	// (0x000a291c) ncim_query_popup_pane_ParamLimits

0xd9ee,	// (0x000a2930) wait_bar_pane_cp04

0xc97f,	// (0x000a18c1) input_focus_pane_cp011

0xd9f6,	// (0x000a2938) ncim_query_popup_pane_t1

0xdadf,	// (0x000a2a21) ncim_list_query_list_pane_ParamLimits

0xdadf,	// (0x000a2a21) ncim_list_query_list_pane

0xc97f,	// (0x000a18c1) bg_button_pane_cp027

0xdaf2,	// (0x000a2a34) ncim_query_button_pane_g1

0xc97f,	// (0x000a18c1) list_highlight_pane_cp012

0xdafc,	// (0x000a2a3e) ncim_list_query_list_pane_g1

0xdb04,	// (0x000a2a46) ncim_list_query_list_pane_t1

0xb687,	// (0x000a05c9) cam4_indicators_pane_g3_ParamLimits

0xb687,	// (0x000a05c9) cam4_indicators_pane_g3

0xb705,	// (0x000a0647) vid4_indicators_pane_g5_ParamLimits

0xb705,	// (0x000a0647) vid4_indicators_pane_g5

0xce84,	// (0x000a1dc6) vid4_progress_pane_g5_ParamLimits

0xce84,	// (0x000a1dc6) vid4_progress_pane_g5

0x8586,	// (0x0009d4c8) main_ncimui_pane_g1

0x85ec,	// (0x0009d52e) ncimui_group_query_pane_ParamLimits

0x85ec,	// (0x0009d52e) ncimui_group_query_pane

0x8634,	// (0x0009d576) ncimui_list_pane_ParamLimits

0x8634,	// (0x0009d576) ncimui_list_pane

0x865b,	// (0x0009d59d) ncimui_text_pane_ParamLimits

0x865b,	// (0x0009d59d) ncimui_text_pane

0x871c,	// (0x0009d65e) ncimui_text_pane_t1_ParamLimits

0x871c,	// (0x0009d65e) ncimui_text_pane_t1

0xdb12,	// (0x000a2a54) ncimui_list_single_graphic_pane_ParamLimits

0xdb12,	// (0x000a2a54) ncimui_list_single_graphic_pane

0x873a,	// (0x0009d67c) ncimui_query_pane_ParamLimits

0x873a,	// (0x0009d67c) ncimui_query_pane

0xc97f,	// (0x000a18c1) list_highlight_pane_cp013

0xdb22,	// (0x000a2a64) ncim_list_query_list_pane_t1_copy1

0xdafc,	// (0x000a2a3e) ncim_list_single_graphic_pane_g1

0xdb30,	// (0x000a2a72) ncim_query_button_pane_cp01

0xdb3c,	// (0x000a2a7e) ncim_query_entry_pane_ParamLimits

0xdb3c,	// (0x000a2a7e) ncim_query_entry_pane

0xdb4f,	// (0x000a2a91) ncimui_query_pane_g1

0xdb5b,	// (0x000a2a9d) ncimui_query_pane_t1_ParamLimits

0xdb5b,	// (0x000a2a9d) ncimui_query_pane_t1

0xdabf,	// (0x000a2a01) input_focus_pane_cp012

0xdb74,	// (0x000a2ab6) ncim_query_entry_pane_t1

0xe31e,	// (0x000a3260) main_im_pane_ParamLimits

0xa156,	// (0x0009f098) main_mobtv_pane_ParamLimits

0xa156,	// (0x0009f098) main_mobtv_pane

0x7438,	// (0x0009c37a) main_cset6_slider_pane_g18_ParamLimits

0x7438,	// (0x0009c37a) main_cset6_slider_pane_g18

0x7468,	// (0x0009c3aa) main_cset6_slider_pane_g19_ParamLimits

0x7468,	// (0x0009c3aa) main_cset6_slider_pane_g19

0x874d,	// (0x0009d68f) bg_main_mobtv_pane_ParamLimits

0x874d,	// (0x0009d68f) bg_main_mobtv_pane

0x875b,	// (0x0009d69d) main_mobtv_info_pane

0x8764,	// (0x0009d6a6) main_mobtv_loading_pane_ParamLimits

0x8764,	// (0x0009d6a6) main_mobtv_loading_pane

0xdb86,	// (0x000a2ac8) main_mobtv_pg_channel_list_pane

0xdb90,	// (0x000a2ad2) main_mobtv_pg_hdr_pane

0x8771,	// (0x0009d6b3) main_mobtv_programe_curr_pane_ParamLimits

0x8771,	// (0x0009d6b3) main_mobtv_programe_curr_pane

0x877e,	// (0x0009d6c0) main_mobtv_programe_next_pane_ParamLimits

0x877e,	// (0x0009d6c0) main_mobtv_programe_next_pane

0xdb99,	// (0x000a2adb) popup_mobtv_noti_window

0xab3a,	// (0x0009fa7c) main_tv_pg_hdr_pane_g1

0xdba1,	// (0x000a2ae3) main_tv_pg_hdr_pane_g2

0xdba9,	// (0x000a2aeb) main_tv_pg_hdr_pane_g3

0xdbb1,	// (0x000a2af3) main_tv_pg_hdr_pane_g4

0xdbb9,	// (0x000a2afb) main_tv_pg_hdr_pane_g5

0xdbc3,	// (0x000a2b05) main_tv_pg_hdr_pane_g6

0xdbcd,	// (0x000a2b0f) main_tv_pg_hdr_pane_g7

0xdbd7,	// (0x000a2b19) main_tv_pg_hdr_pane_g8

0xdbe1,	// (0x000a2b23) main_tv_pg_hdr_pane_g9

0xdbeb,	// (0x000a2b2d) main_tv_pg_hdr_pane_g10

0xdbf5,	// (0x000a2b37) main_tv_pg_hdr_pane_g11

0x000a,

0xfb64,	// (0x000a4aa6) main_tv_pg_hdr_pane_g

0xdbff,	// (0x000a2b41) main_tv_pg_hdr_pane_t1

0xdc0d,	// (0x000a2b4f) main_tv_pg_hdr_pane_t2

0xdc1b,	// (0x000a2b5d) main_tv_pg_hdr_pane_t3

0xdc2b,	// (0x000a2b6d) main_tv_pg_hdr_pane_t4

0xdc3b,	// (0x000a2b7d) main_tv_pg_hdr_pane_t5

0x0004,

0xfb7b,	// (0x000a4abd) main_tv_pg_hdr_pane_t

0xdc4b,	// (0x000a2b8d) single_mobtv_pg_channel_pane_ParamLimits

0xdc4b,	// (0x000a2b8d) single_mobtv_pg_channel_pane

0xdc5d,	// (0x000a2b9f) single_mobtv_pg_channel_table_pane

0xdc66,	// (0x000a2ba8) single_mobtv_pg_channel_thumb_pane

0xdc6f,	// (0x000a2bb1) single_tv_pg_channel_pane_g1

0xdc78,	// (0x000a2bba) single_tv_pg_channel_pane_g2

0x0001,

0xfb86,	// (0x000a4ac8) single_tv_pg_channel_pane_g

0xada1,	// (0x0009fce3) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xada1,	// (0x0009fce3) bg_single_mobtv_pg_channel_thumb_pane

0xdc81,	// (0x000a2bc3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc81,	// (0x000a2bc3) single_mobtv_pg_channel_thumb_pane_g1

0xdc8f,	// (0x000a2bd1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc8f,	// (0x000a2bd1) single_mobtv_pg_channel_thumb_pane_g2

0xdc9b,	// (0x000a2bdd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc9b,	// (0x000a2bdd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb8b,	// (0x000a4acd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb8b,	// (0x000a4acd) single_mobtv_pg_channel_thumb_pane_g

0xdca7,	// (0x000a2be9) single_mobtv_pg_channel_thumb_pane_t1

0xdcb5,	// (0x000a2bf7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb92,	// (0x000a4ad4) single_mobtv_pg_channel_thumb_pane_t

0xab3a,	// (0x0009fa7c) bg_single_mobtv_pg_channel_table_pane_g1

0xab3a,	// (0x0009fa7c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x000a462e) bg_single_mobtv_pg_channel_table_pane_g

0xdcc3,	// (0x000a2c05) single_mobtv_pg_channel_table_pane_t1

0xdcd1,	// (0x000a2c13) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb97,	// (0x000a4ad9) single_mobtv_pg_channel_table_pane_t

0x8793,	// (0x0009d6d5) main_mobtv_info_pane_g1_ParamLimits

0x8793,	// (0x0009d6d5) main_mobtv_info_pane_g1

0x87b1,	// (0x0009d6f3) main_mobtv_info_pane_t1_ParamLimits

0x87b1,	// (0x0009d6f3) main_mobtv_info_pane_t1

0x8829,	// (0x0009d76b) main_mobtv_info_pane_t2_ParamLimits

0x8829,	// (0x0009d76b) main_mobtv_info_pane_t2

0x0002,

0xfba1,	// (0x000a4ae3) main_mobtv_info_pane_t_ParamLimits

0xfba1,	// (0x000a4ae3) main_mobtv_info_pane_t

0x88b8,	// (0x0009d7fa) wait_bar_pane_cp05

0x88ca,	// (0x0009d80c) main_mobtv_loading_pane_g1_ParamLimits

0x88ca,	// (0x0009d80c) main_mobtv_loading_pane_g1

0x88dd,	// (0x0009d81f) main_mobtv_loading_pane_g2_ParamLimits

0x88dd,	// (0x0009d81f) main_mobtv_loading_pane_g2

0x88e9,	// (0x0009d82b) main_mobtv_loading_pane_g3_ParamLimits

0x88e9,	// (0x0009d82b) main_mobtv_loading_pane_g3

0x0002,

0xfba8,	// (0x000a4aea) main_mobtv_loading_pane_g_ParamLimits

0xfba8,	// (0x000a4aea) main_mobtv_loading_pane_g

0xdcdf,	// (0x000a2c21) main_mobtv_loading_pane_t1_ParamLimits

0xdcdf,	// (0x000a2c21) main_mobtv_loading_pane_t1

0xdcf7,	// (0x000a2c39) main_mobtv_loading_pane_t2_ParamLimits

0xdcf7,	// (0x000a2c39) main_mobtv_loading_pane_t2

0x0001,

0xfbaf,	// (0x000a4af1) main_mobtv_loading_pane_t_ParamLimits

0xfbaf,	// (0x000a4af1) main_mobtv_loading_pane_t

0x88fc,	// (0x0009d83e) wait_bar_pane_cp06_ParamLimits

0x88fc,	// (0x0009d83e) wait_bar_pane_cp06

0xdd1b,	// (0x000a2c5d) main_mobtv_programe_curr_pane_t1

0xdd29,	// (0x000a2c6b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbb4,	// (0x000a4af6) main_mobtv_programe_curr_pane_t

0xdd37,	// (0x000a2c79) main_mobtv_programe_next_pane_t1

0xdd45,	// (0x000a2c87) main_mobtv_programe_next_pane_t2

0xdd53,	// (0x000a2c95) main_mobtv_programe_next_pane_t3

0x0002,

0xfbb9,	// (0x000a4afb) main_mobtv_programe_next_pane_t

0xc97f,	// (0x000a18c1) bg_popup_mobtv_noti_window_pane

0xdd61,	// (0x000a2ca3) popup_mobtv_noti_window_g1

0xdd69,	// (0x000a2cab) popup_mobtv_noti_window_t1

0xdd77,	// (0x000a2cb9) popup_mobtv_noti_window_t2

0x0001,

0xfbc0,	// (0x000a4b02) popup_mobtv_noti_window_t

0xab3a,	// (0x0009fa7c) bg_popup_mobtv_noti_window_pane_g1

0xa164,	// (0x0009f0a6) sc_clock_pane

0xa164,	// (0x0009f0a6) main_fs_bigclock_pane

0x8085,	// (0x0009cfc7) blid2_tripm_pane_t4_ParamLimits

0x8085,	// (0x0009cfc7) blid2_tripm_pane_t4

0x890b,	// (0x0009d84d) sc_clock_pane_g1_ParamLimits

0x890b,	// (0x0009d84d) sc_clock_pane_g1

0x891d,	// (0x0009d85f) sc_clock_pane_t1_ParamLimits

0x891d,	// (0x0009d85f) sc_clock_pane_t1

0x893f,	// (0x0009d881) sc_clock_pane_t2_ParamLimits

0x893f,	// (0x0009d881) sc_clock_pane_t2

0x8957,	// (0x0009d899) sc_clock_pane_t3_ParamLimits

0x8957,	// (0x0009d899) sc_clock_pane_t3

0x0004,

0xfbc5,	// (0x000a4b07) sc_clock_pane_t_ParamLimits

0xfbc5,	// (0x000a4b07) sc_clock_pane_t

0x9704,	// (0x0009e646) main_fs_bigclock_indicator_pane_ParamLimits

0x9704,	// (0x0009e646) main_fs_bigclock_indicator_pane

0xad71,	// (0x0009fcb3) main_fs_bigclock_pane_g1_ParamLimits

0xad71,	// (0x0009fcb3) main_fs_bigclock_pane_g1

0x9710,	// (0x0009e652) main_fs_bigclock_pane_t1_ParamLimits

0x9710,	// (0x0009e652) main_fs_bigclock_pane_t1

0x9722,	// (0x0009e664) main_fs_bigclock_pane_t2_ParamLimits

0x9722,	// (0x0009e664) main_fs_bigclock_pane_t2

0x9734,	// (0x0009e676) main_fs_bigclock_pane_t3_ParamLimits

0x9734,	// (0x0009e676) main_fs_bigclock_pane_t3

0x0002,

0xfdac,	// (0x000a4cee) main_fs_bigclock_pane_t_ParamLimits

0xfdac,	// (0x000a4cee) main_fs_bigclock_pane_t

0xc4ac,	// (0x000a13ee) main_fs_bigclock_indicator_pane_g1

0xd970,	// (0x000a28b2) ncim_query_content_pane_g2_ParamLimits

0xd970,	// (0x000a28b2) ncim_query_content_pane_g2

0x0001,

0xfb52,	// (0x000a4a94) ncim_query_content_pane_g_ParamLimits

0xfb52,	// (0x000a4a94) ncim_query_content_pane_g

0x8970,	// (0x0009d8b2) sc_clock_pane_t4_ParamLimits

0x8970,	// (0x0009d8b2) sc_clock_pane_t4

0xa156,	// (0x0009f098) main_radioblah_pane

0xce3b,	// (0x000a1d7d) cell_call4_button_pane_t1_copy1_ParamLimits

0xce3b,	// (0x000a1d7d) cell_call4_button_pane_t1_copy1

0x859e,	// (0x0009d4e0) main_ncimui_pane_t1_ParamLimits

0x859e,	// (0x0009d4e0) main_ncimui_pane_t1

0x85b8,	// (0x0009d4fa) main_ncimui_pane_t2_ParamLimits

0x85b8,	// (0x0009d4fa) main_ncimui_pane_t2

0x0002,

0xfb4b,	// (0x000a4a8d) main_ncimui_pane_t_ParamLimits

0xfb4b,	// (0x000a4a8d) main_ncimui_pane_t

0xdec0,	// (0x000a2e02) main_radioblah_anim_pane_ParamLimits

0xdec0,	// (0x000a2e02) main_radioblah_anim_pane

0xded1,	// (0x000a2e13) main_radioblah_info_pane_ParamLimits

0xded1,	// (0x000a2e13) main_radioblah_info_pane

0xdee5,	// (0x000a2e27) main_radioblah_pane_t1_ParamLimits

0xdee5,	// (0x000a2e27) main_radioblah_pane_t1

0xdf01,	// (0x000a2e43) main_radioblah_pane_t2_ParamLimits

0xdf01,	// (0x000a2e43) main_radioblah_pane_t2

0x0003,

0xfbe6,	// (0x000a4b28) main_radioblah_pane_t_ParamLimits

0xfbe6,	// (0x000a4b28) main_radioblah_pane_t

0x8a1f,	// (0x0009d961) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8a1f,	// (0x0009d961) main_radioblah_rocker_ctrl_pane

0xdf49,	// (0x000a2e8b) main_radioblah_info_pane_t1_ParamLimits

0xdf49,	// (0x000a2e8b) main_radioblah_info_pane_t1

0x8a77,	// (0x0009d9b9) main_radioblah_info_pane_t2_ParamLimits

0x8a77,	// (0x0009d9b9) main_radioblah_info_pane_t2

0x0003,

0xfbef,	// (0x000a4b31) main_radioblah_info_pane_t_ParamLimits

0xfbef,	// (0x000a4b31) main_radioblah_info_pane_t

0xab3a,	// (0x0009fa7c) main_radioblah_rocker_ctrl_pane_g1

0x8b29,	// (0x0009da6b) main_radioblah_rocker_ctrl_pane_g2

0x8b31,	// (0x0009da73) main_radioblah_rocker_ctrl_pane_g3

0x8b39,	// (0x0009da7b) main_radioblah_rocker_ctrl_pane_g4

0x8b41,	// (0x0009da83) main_radioblah_rocker_ctrl_pane_g5

0x8b49,	// (0x0009da8b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbf8,	// (0x000a4b3a) main_radioblah_rocker_ctrl_pane_g

0x834f,	// (0x0009d291) main_cset_text2_pane_t1_copy1_ParamLimits

0xb649,	// (0x000a058b) cam4_image_uncrop_qvga_pane

0xb6b0,	// (0x000a05f2) vid4_image_uncrop_qcif_pane

0xcee3,	// (0x000a1e25) cam6_image_uncrop_qvga_pane_ParamLimits

0xcee3,	// (0x000a1e25) cam6_image_uncrop_qvga_pane

0xd668,	// (0x000a25aa) vid6_image_uncrop_qcif_pane_ParamLimits

0xd668,	// (0x000a25aa) vid6_image_uncrop_qcif_pane

0xc97f,	// (0x000a18c1) bg_popup_preview_window_pane_cp03

0xd922,	// (0x000a2864) list_cset_text2_pane

0xd92a,	// (0x000a286c) main_cset6_text2_pane_g1

0xd932,	// (0x000a2874) main_cset6_text2_pane_t1

0x8b51,	// (0x0009da93) list_cset_text2_pane_t1_ParamLimits

0x8b51,	// (0x0009da93) list_cset_text2_pane_t1

0xa156,	// (0x0009f098) main_radioblah_pane_ParamLimits

0x88a4,	// (0x0009d7e6) main_mobtv_info_pane_t3_ParamLimits

0x88a4,	// (0x0009d7e6) main_mobtv_info_pane_t3

0x8a0d,	// (0x0009d94f) main_radioblah_pane_g1

0x8a47,	// (0x0009d989) main_radioblah_info_pane_g1

0x8ace,	// (0x0009da10) main_radioblah_info_pane_t3_ParamLimits

0x8ace,	// (0x0009da10) main_radioblah_info_pane_t3

0x247f,	// (0x000973c1) highlight_cell_cale_month_pane_ParamLimits

0x247f,	// (0x000973c1) highlight_cell_cale_month_pane

0xa164,	// (0x0009f0a6) main_phob_fisheye_pane

0xaec1,	// (0x0009fe03) scroll_pane_cp0031_ParamLimits

0xaec1,	// (0x0009fe03) scroll_pane_cp0031

0xd776,	// (0x000a26b8) wait_bar_pane_cp08_ParamLimits

0x83d3,	// (0x0009d315) cset_list_set_pane_copy1_ParamLimits

0xdf83,	// (0x000a2ec5) highlight_cell_cale_month_pane_g1

0x8b6e,	// (0x0009dab0) highlight_cell_cale_month_pane_t1

0xd40d,	// (0x000a234f) list_gen_pane_cp01

0xd096,	// (0x000a1fd8) scroll_pane_01

0xb9e1,	// (0x000a0923) list_single_double_fisheye_pane

0xb9ea,	// (0x000a092c) list_double_fisheye_pane_g1_ParamLimits

0xb9ea,	// (0x000a092c) list_double_fisheye_pane_g1

0xb9f6,	// (0x000a0938) list_double_fisheye_pane_g2_ParamLimits

0xb9f6,	// (0x000a0938) list_double_fisheye_pane_g2

0xba0a,	// (0x000a094c) list_double_fisheye_pane_g3_ParamLimits

0xba0a,	// (0x000a094c) list_double_fisheye_pane_g3

0x0004,

0xfc05,	// (0x000a4b47) list_double_fisheye_pane_g_ParamLimits

0xfc05,	// (0x000a4b47) list_double_fisheye_pane_g

0xba33,	// (0x000a0975) list_double_fisheye_pane_t1_ParamLimits

0xba33,	// (0x000a0975) list_double_fisheye_pane_t1

0xba4e,	// (0x000a0990) list_double_fisheye_pane_t2_ParamLimits

0xba4e,	// (0x000a0990) list_double_fisheye_pane_t2

0x0001,

0xfc10,	// (0x000a4b52) list_double_fisheye_pane_t_ParamLimits

0xfc10,	// (0x000a4b52) list_double_fisheye_pane_t

0xa164,	// (0x0009f0a6) main_call5_pane

0x899b,	// (0x0009d8dd) sc_swipe_pane_ParamLimits

0x899b,	// (0x0009d8dd) sc_swipe_pane

0x8b8f,	// (0x0009dad1) call5_image_pane_ParamLimits

0x8b8f,	// (0x0009dad1) call5_image_pane

0x8bac,	// (0x0009daee) call5_swipe_1_pane_ParamLimits

0x8bac,	// (0x0009daee) call5_swipe_1_pane

0x8bbf,	// (0x0009db01) call5_swipe_2_pane_ParamLimits

0x8bbf,	// (0x0009db01) call5_swipe_2_pane

0x8bea,	// (0x0009db2c) popup_call5_audio_first_window_ParamLimits

0x8bea,	// (0x0009db2c) popup_call5_audio_first_window

0xada1,	// (0x0009fce3) call5_swipe_1_pane_g1_ParamLimits

0xada1,	// (0x0009fce3) call5_swipe_1_pane_g1

0xdf8b,	// (0x000a2ecd) call5_swipe_1_pane_g2_ParamLimits

0xdf8b,	// (0x000a2ecd) call5_swipe_1_pane_g2

0x0001,

0xfc15,	// (0x000a4b57) call5_swipe_1_pane_g_ParamLimits

0xfc15,	// (0x000a4b57) call5_swipe_1_pane_g

0xdf97,	// (0x000a2ed9) call5_swipe_1_pane_t1_ParamLimits

0xdf97,	// (0x000a2ed9) call5_swipe_1_pane_t1

0xada1,	// (0x0009fce3) call5_swipe_2_pane_g1_ParamLimits

0xada1,	// (0x0009fce3) call5_swipe_2_pane_g1

0xba70,	// (0x000a09b2) call5_swipe_2_pane_g2_ParamLimits

0xba70,	// (0x000a09b2) call5_swipe_2_pane_g2

0x0001,

0xfc1a,	// (0x000a4b5c) call5_swipe_2_pane_g_ParamLimits

0xfc1a,	// (0x000a4b5c) call5_swipe_2_pane_g

0xba7c,	// (0x000a09be) call5_swipe_2_pane_t1_ParamLimits

0xba7c,	// (0x000a09be) call5_swipe_2_pane_t1

0xba91,	// (0x000a09d3) sc_swipe_pane_g1_ParamLimits

0xba91,	// (0x000a09d3) sc_swipe_pane_g1

0xba9e,	// (0x000a09e0) sc_swipe_pane_g2_ParamLimits

0xba9e,	// (0x000a09e0) sc_swipe_pane_g2

0x0001,

0xfc1f,	// (0x000a4b61) sc_swipe_pane_g_ParamLimits

0xfc1f,	// (0x000a4b61) sc_swipe_pane_g

0xbaaa,	// (0x000a09ec) sc_swipe_pane_t1_ParamLimits

0xbaaa,	// (0x000a09ec) sc_swipe_pane_t1

0xa164,	// (0x0009f0a6) main_cmail_launcher_pane

0x8bfb,	// (0x0009db3d) aid_size_cell_cmail_l_ParamLimits

0x8bfb,	// (0x0009db3d) aid_size_cell_cmail_l

0x8c15,	// (0x0009db57) grid_cmail_l_pane_ParamLimits

0x8c15,	// (0x0009db57) grid_cmail_l_pane

0x8c30,	// (0x0009db72) cell_cmail_l_pane_ParamLimits

0x8c30,	// (0x0009db72) cell_cmail_l_pane

0x8c56,	// (0x0009db98) cell_cmail_l_pane_g1_ParamLimits

0x8c56,	// (0x0009db98) cell_cmail_l_pane_g1

0x8c62,	// (0x0009dba4) cell_cmail_l_pane_t1_ParamLimits

0x8c62,	// (0x0009dba4) cell_cmail_l_pane_t1

0xbabf,	// (0x000a0a01) cell_cmail_l_pane_t2_ParamLimits

0xbabf,	// (0x000a0a01) cell_cmail_l_pane_t2

0x0001,

0xfc24,	// (0x000a4b66) cell_cmail_l_pane_t_ParamLimits

0xfc24,	// (0x000a4b66) cell_cmail_l_pane_t

0xdabf,	// (0x000a2a01) grid_highlight_pane_cp018_ParamLimits

0xdabf,	// (0x000a2a01) grid_highlight_pane_cp018

0x0acc,	// (0x00095a0e) main2_pane_ParamLimits

0x0acc,	// (0x00095a0e) main2_pane

0xe3c9,	// (0x000a330b) popup_sp_fs_action_menu_bg_pane_g1

0xe3d1,	// (0x000a3313) popup_sp_fs_action_menu_bg_pane_g2

0xe3d9,	// (0x000a331b) popup_sp_fs_action_menu_bg_pane_g3

0xe3e1,	// (0x000a3323) popup_sp_fs_action_menu_bg_pane_g4

0xe3e9,	// (0x000a332b) popup_sp_fs_action_menu_bg_pane_g5

0xe3f1,	// (0x000a3333) popup_sp_fs_action_menu_bg_pane_g6

0xe3f9,	// (0x000a333b) popup_sp_fs_action_menu_bg_pane_g7

0xe401,	// (0x000a3343) popup_sp_fs_action_menu_bg_pane_g8

0xe409,	// (0x000a334b) popup_sp_fs_action_menu_bg_pane_g9

0xe411,	// (0x000a3353) popup_sp_fs_action_menu_bg_pane_g10

0xe411,	// (0x000a3353) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x000a40da) popup_sp_fs_action_menu_bg_pane_g

0xe539,	// (0x000a347b) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x2_t3_g3_g1

0xe545,	// (0x000a3487) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe545,	// (0x000a3487) list_medium_line_x2_t3_g3_g2

0xe551,	// (0x000a3493) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe551,	// (0x000a3493) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x000a418a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x000a418a) list_medium_line_x2_t3_g3_g

0xe55d,	// (0x000a349f) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe55d,	// (0x000a349f) list_medium_line_x2_t3_g3_t1

0x1797,	// (0x000966d9) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1797,	// (0x000966d9) list_medium_line_x2_t3_g3_t2

0xe572,	// (0x000a34b4) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe572,	// (0x000a34b4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x000a4191) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x000a4191) list_medium_line_x2_t3_g3_t

0xe539,	// (0x000a347b) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x2_t3_g2_g1

0xe551,	// (0x000a3493) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe551,	// (0x000a3493) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x000a4198) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x000a4198) list_medium_line_x2_t3_g2_g

0xe587,	// (0x000a34c9) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe587,	// (0x000a34c9) list_medium_line_x2_t3_g2_t1

0xe59d,	// (0x000a34df) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe59d,	// (0x000a34df) list_medium_line_x2_t3_g2_t2

0xe5af,	// (0x000a34f1) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe5af,	// (0x000a34f1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x000a419d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x000a419d) list_medium_line_x2_t3_g2_t

0xe539,	// (0x000a347b) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x2_t4_g4_g1

0xe5cd,	// (0x000a350f) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe5cd,	// (0x000a350f) list_medium_line_x2_t4_g4_g2

0xe545,	// (0x000a3487) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe545,	// (0x000a3487) list_medium_line_x2_t4_g4_g3

0xe5d9,	// (0x000a351b) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe5d9,	// (0x000a351b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x000a41a4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x000a41a4) list_medium_line_x2_t4_g4_g

0x17ab,	// (0x000966ed) list_medium_line_x2_t4_g4_t1_ParamLimits

0x17ab,	// (0x000966ed) list_medium_line_x2_t4_g4_t1

0x17c2,	// (0x00096704) list_medium_line_x2_t4_g4_t2_ParamLimits

0x17c2,	// (0x00096704) list_medium_line_x2_t4_g4_t2

0x17d7,	// (0x00096719) list_medium_line_x2_t4_g4_t3_ParamLimits

0x17d7,	// (0x00096719) list_medium_line_x2_t4_g4_t3

0xe5e5,	// (0x000a3527) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe5e5,	// (0x000a3527) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x000a41ad) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x000a41ad) list_medium_line_x2_t4_g4_t

0xe539,	// (0x000a347b) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x2_t2_g4_g1

0xe5cd,	// (0x000a350f) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe5cd,	// (0x000a350f) list_medium_line_x2_t2_g4_g2

0xe545,	// (0x000a3487) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe545,	// (0x000a3487) list_medium_line_x2_t2_g4_g3

0xe551,	// (0x000a3493) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe551,	// (0x000a3493) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x000a4214) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x000a4214) list_medium_line_x2_t2_g4_g

0xe8cf,	// (0x000a3811) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe8cf,	// (0x000a3811) list_medium_line_x2_t2_g4_t1

0xe572,	// (0x000a34b4) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe572,	// (0x000a34b4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x000a421d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x000a421d) list_medium_line_x2_t2_g4_t

0xe539,	// (0x000a347b) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x2_t2_g3_g1

0xe545,	// (0x000a3487) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe545,	// (0x000a3487) list_medium_line_x2_t2_g3_g2

0xe551,	// (0x000a3493) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe551,	// (0x000a3493) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x000a418a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x000a418a) list_medium_line_x2_t2_g3_g

0xe8e4,	// (0x000a3826) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe8e4,	// (0x000a3826) list_medium_line_x2_t2_g3_t1

0xe572,	// (0x000a34b4) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe572,	// (0x000a34b4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x000a4222) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x000a4222) list_medium_line_x2_t2_g3_t

0x2665,	// (0x000975a7) main_sp_fs_list_pane_ParamLimits

0x2665,	// (0x000975a7) main_sp_fs_list_pane

0x2671,	// (0x000975b3) sp_fs_scroll_pane_ParamLimits

0x2671,	// (0x000975b3) sp_fs_scroll_pane

0x267d,	// (0x000975bf) list_medium_line_x2_t3_t1

0x268d,	// (0x000975cf) list_medium_line_x2_t3_t2

0xea8e,	// (0x000a39d0) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x000a426d) list_medium_line_x2_t3_t

0x269b,	// (0x000975dd) list_medium_line_x3_t4_t1

0x26ab,	// (0x000975ed) list_medium_line_x3_t4_t2

0xea9c,	// (0x000a39de) list_medium_line_x3_t4_t3

0xea8e,	// (0x000a39d0) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x000a4274) list_medium_line_x3_t4_t

0x26b9,	// (0x000975fb) list_medium_line_x4_t5_t1

0x26c9,	// (0x0009760b) list_medium_line_x4_t5_t2

0xea9c,	// (0x000a39de) list_medium_line_x4_t5_t3

0xeab6,	// (0x000a39f8) list_medium_line_x4_t5_t4

0xea8e,	// (0x000a39d0) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x000a427d) list_medium_line_x4_t5_t

0xe539,	// (0x000a347b) list_medium_line_t4_g4_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_t4_g4_g1

0xe5d9,	// (0x000a351b) list_medium_line_t4_g4_g2_ParamLimits

0xe5d9,	// (0x000a351b) list_medium_line_t4_g4_g2

0xeac4,	// (0x000a3a06) list_medium_line_t4_g4_g3_ParamLimits

0xeac4,	// (0x000a3a06) list_medium_line_t4_g4_g3

0xe551,	// (0x000a3493) list_medium_line_t4_g4_g4_ParamLimits

0xe551,	// (0x000a3493) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x000a4288) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x000a4288) list_medium_line_t4_g4_g

0xead0,	// (0x000a3a12) list_medium_line_t4_g4_t1_ParamLimits

0xead0,	// (0x000a3a12) list_medium_line_t4_g4_t1

0xeae5,	// (0x000a3a27) list_medium_line_t4_g4_t2_ParamLimits

0xeae5,	// (0x000a3a27) list_medium_line_t4_g4_t2

0xeafb,	// (0x000a3a3d) list_medium_line_t4_g4_t3_ParamLimits

0xeafb,	// (0x000a3a3d) list_medium_line_t4_g4_t3

0xe572,	// (0x000a34b4) list_medium_line_t4_g4_t4_ParamLimits

0xe572,	// (0x000a34b4) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x000a4291) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x000a4291) list_medium_line_t4_g4_t

0x2775,	// (0x000976b7) chi_dic_find_pane_g1

0x4892,	// (0x000997d4) main_tport_pane

0xb784,	// (0x000a06c6) list_medium_line_plain_t1

0xb7ce,	// (0x000a0710) list_medium_line_t2_g2_g1_ParamLimits

0xb7ce,	// (0x000a0710) list_medium_line_t2_g2_g1

0xb7da,	// (0x000a071c) list_medium_line_t2_g2_g2_ParamLimits

0xb7da,	// (0x000a071c) list_medium_line_t2_g2_g2

0x0001,

0xf9c6,	// (0x000a4908) list_medium_line_t2_g2_g_ParamLimits

0xf9c6,	// (0x000a4908) list_medium_line_t2_g2_g

0x7816,	// (0x0009c758) list_medium_line_t2_g2_t1_ParamLimits

0x7816,	// (0x0009c758) list_medium_line_t2_g2_t1

0x7830,	// (0x0009c772) list_medium_line_t2_g2_t2_ParamLimits

0x7830,	// (0x0009c772) list_medium_line_t2_g2_t2

0x0001,

0xf9cb,	// (0x000a490d) list_medium_line_t2_g2_t_ParamLimits

0xf9cb,	// (0x000a490d) list_medium_line_t2_g2_t

0xb88a,	// (0x000a07cc) aid_sp_fs_list_icon_a_sm

0xb892,	// (0x000a07d4) aid_sp_fs_list_icon_d

0xb89a,	// (0x000a07dc) aid_sp_fs_text_primary

0xb8a3,	// (0x000a07e5) aid_sp_fs_text_secondary

0xb8ac,	// (0x000a07ee) list_medium_line

0xb8ac,	// (0x000a07ee) list_medium_line_g2

0xb8ac,	// (0x000a07ee) list_medium_line_g3

0xb8ac,	// (0x000a07ee) list_medium_line_plain

0xb8ac,	// (0x000a07ee) list_medium_line_plain_t2

0xb8ac,	// (0x000a07ee) list_medium_line_plain_t3

0xb8ac,	// (0x000a07ee) list_medium_line_right_icon

0xb8ac,	// (0x000a07ee) list_medium_line_right_iconx2

0xb8ac,	// (0x000a07ee) list_medium_line_t2

0xb8ac,	// (0x000a07ee) list_medium_line_t2_g2

0xb8ac,	// (0x000a07ee) list_medium_line_t2_g3

0xb8ac,	// (0x000a07ee) list_medium_line_t2_right_icon

0xb8ac,	// (0x000a07ee) list_medium_line_t2_right_iconx2

0xb8ac,	// (0x000a07ee) list_medium_line_t3

0xb8ac,	// (0x000a07ee) list_medium_line_t3_g2

0xb8ac,	// (0x000a07ee) list_medium_line_t3_g3

0xb8ac,	// (0x000a07ee) list_medium_line_t3_right_iconx2

0xb8b5,	// (0x000a07f7) list_medium_line_t4_g4

0xb8be,	// (0x000a0800) list_medium_line_x2

0xb8be,	// (0x000a0800) list_medium_line_x2_t2_g2

0xb8be,	// (0x000a0800) list_medium_line_x2_t2_g3

0xb8be,	// (0x000a0800) list_medium_line_x2_t2_g4

0xb8be,	// (0x000a0800) list_medium_line_x2_t3

0xb8be,	// (0x000a0800) list_medium_line_x2_t3_g2

0xb8be,	// (0x000a0800) list_medium_line_x2_t3_g3

0xb8be,	// (0x000a0800) list_medium_line_x2_t3_g4

0xb8be,	// (0x000a0800) list_medium_line_x2_t4_g2

0xb8be,	// (0x000a0800) list_medium_line_x2_t4_g4

0xb8c7,	// (0x000a0809) list_medium_line_x3

0xb8c7,	// (0x000a0809) list_medium_line_x3_t4

0xb8c7,	// (0x000a0809) list_medium_line_x3_t4_g4

0xb8b5,	// (0x000a07f7) list_medium_line_x4_t4

0xb8b5,	// (0x000a07f7) list_medium_line_x4_t4_g7

0xb8b5,	// (0x000a07f7) list_medium_line_x4_t5

0xb8d0,	// (0x000a0812) list_single_fs_dyc_pane_ParamLimits

0xb8d0,	// (0x000a0812) list_single_fs_dyc_pane

0xe539,	// (0x000a347b) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x4_t4_g7_g1

0xb910,	// (0x000a0852) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb910,	// (0x000a0852) list_medium_line_x4_t4_g7_g2

0xb91c,	// (0x000a085e) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb91c,	// (0x000a085e) list_medium_line_x4_t4_g7_g3

0xb92b,	// (0x000a086d) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb92b,	// (0x000a086d) list_medium_line_x4_t4_g7_g4

0xb937,	// (0x000a0879) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb937,	// (0x000a0879) list_medium_line_x4_t4_g7_g5

0xb946,	// (0x000a0888) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb946,	// (0x000a0888) list_medium_line_x4_t4_g7_g6

0xb955,	// (0x000a0897) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb955,	// (0x000a0897) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb2c,	// (0x000a4a6e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb2c,	// (0x000a4a6e) list_medium_line_x4_t4_g7_g

0xb961,	// (0x000a08a3) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb961,	// (0x000a08a3) list_medium_line_x4_t4_g7_t1

0xb976,	// (0x000a08b8) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb976,	// (0x000a08b8) list_medium_line_x4_t4_g7_t2

0xb98b,	// (0x000a08cd) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb98b,	// (0x000a08cd) list_medium_line_x4_t4_g7_t3

0xb9a0,	// (0x000a08e2) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb9a0,	// (0x000a08e2) list_medium_line_x4_t4_g7_t4

0xb9b2,	// (0x000a08f4) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb9b2,	// (0x000a08f4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb3b,	// (0x000a4a7d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb3b,	// (0x000a4a7d) list_medium_line_x4_t4_g7_t

0xb9c4,	// (0x000a0906) list_single_dyc_row_pane_ParamLimits

0xb9c4,	// (0x000a0906) list_single_dyc_row_pane

0x8b7c,	// (0x0009dabe) call5_gesture_pane_ParamLimits

0x8b7c,	// (0x0009dabe) call5_gesture_pane

0x8bd2,	// (0x0009db14) call5_windows_pane_ParamLimits

0x8bd2,	// (0x0009db14) call5_windows_pane

0x8c78,	// (0x0009dbba) call5_swipe_1_pane_cp_ParamLimits

0x8c78,	// (0x0009dbba) call5_swipe_1_pane_cp

0x8c84,	// (0x0009dbc6) call5_swipe_2_pane_cp_ParamLimits

0x8c84,	// (0x0009dbc6) call5_swipe_2_pane_cp

0xef05,	// (0x000a3e47) call5_image_pane_cp

0x8c90,	// (0x0009dbd2) popup_call5_audio_first_window_cp_ParamLimits

0x8c90,	// (0x0009dbd2) popup_call5_audio_first_window_cp

0xba91,	// (0x000a09d3) call5_swipe_1_pane_g1_cp_ParamLimits

0xba91,	// (0x000a09d3) call5_swipe_1_pane_g1_cp

0xbad1,	// (0x000a0a13) call5_swipe_1_pane_g2_cp

0xbaaa,	// (0x000a09ec) call5_swipe_1_pane_t1_cp_ParamLimits

0xbaaa,	// (0x000a09ec) call5_swipe_1_pane_t1_cp

0xba91,	// (0x000a09d3) call5_swipe_2_pane_g1_cp_ParamLimits

0xba91,	// (0x000a09d3) call5_swipe_2_pane_g1_cp

0xbad9,	// (0x000a0a1b) call5_swipe_2_pane_g2_cp

0xbae1,	// (0x000a0a23) call5_swipe_2_pane_t1_cp_ParamLimits

0xbae1,	// (0x000a0a23) call5_swipe_2_pane_t1_cp

0xdabf,	// (0x000a2a01) main_sp_fs_email_pane

0xbaf6,	// (0x000a0a38) main_sp_fs_listscroll_pane_te

0xbaff,	// (0x000a0a41) popup_sp_fs_action_menu_pane_ParamLimits

0xbaff,	// (0x000a0a41) popup_sp_fs_action_menu_pane

0xab3a,	// (0x0009fa7c) bg_sp_fs_ctrlbar_pane_g1

0xbb41,	// (0x000a0a83) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xbb4a,	// (0x000a0a8c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbb53,	// (0x000a0a95) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xab3a,	// (0x0009fa7c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc29,	// (0x000a4b6b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xa91d,	// (0x0009f85f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xa91d,	// (0x0009f85f) bg_sp_fs_ctrlbar_ddmenu_pane

0xbb5c,	// (0x000a0a9e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xbb5c,	// (0x000a0a9e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xbb68,	// (0x000a0aaa) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xbb68,	// (0x000a0aaa) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc32,	// (0x000a4b74) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc32,	// (0x000a4b74) main_sp_fs_ctrlbar_ddmenu_pane_g

0xbb74,	// (0x000a0ab6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xbb74,	// (0x000a0ab6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbb8e,	// (0x000a0ad0) list_medium_line_t2_right_icon_g1

0x8c9c,	// (0x0009dbde) list_medium_line_t2_right_icon_t1

0x8cac,	// (0x0009dbee) list_medium_line_t2_right_icon_t2

0x0001,

0xfc37,	// (0x000a4b79) list_medium_line_t2_right_icon_t

0xa632,	// (0x0009f574) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa632,	// (0x0009f574) bg_sp_fs_ctrlbar_pane

0x8d09,	// (0x0009dc4b) main_sp_fs_ctrlbar_button_pane_cp01

0x8d13,	// (0x0009dc55) main_sp_fs_ctrlbar_ddmenu_pane

0xbbce,	// (0x000a0b10) main_sp_fs_ctrlbar_pane_g1

0xbbda,	// (0x000a0b1c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc3c,	// (0x000a4b7e) main_sp_fs_ctrlbar_pane_g

0xbbe6,	// (0x000a0b28) main_sp_fs_ctrlbar_pane_t1

0x8d1d,	// (0x0009dc5f) main_sp_fs_ctrlbar_pane

0x8d41,	// (0x0009dc83) main_sp_fs_listscroll_pane_te_cp01

0x8d61,	// (0x0009dca3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8d61,	// (0x0009dca3) popup_sp_fs_action_menu_pane_cp01

0xdabf,	// (0x000a2a01) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdabf,	// (0x000a2a01) bg_sp_fs_highlight_list_pane_cp01

0xbc0b,	// (0x000a0b4d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xbc0b,	// (0x000a0b4d) sp_fs_action_menu_list_gene_pane_g1

0xbc1a,	// (0x000a0b5c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xbc1a,	// (0x000a0b5c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc46,	// (0x000a4b88) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc46,	// (0x000a4b88) sp_fs_action_menu_list_gene_pane_g

0xbc27,	// (0x000a0b69) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xbc27,	// (0x000a0b69) sp_fs_action_menu_list_gene_pane_t1

0xbc3f,	// (0x000a0b81) sp_fs_action_menu_list_gene_pane_ParamLimits

0xbc3f,	// (0x000a0b81) sp_fs_action_menu_list_gene_pane

0xbc5e,	// (0x000a0ba0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xbc5e,	// (0x000a0ba0) popup_sp_fs_action_menu_bg_pane

0xbc6c,	// (0x000a0bae) sp_fs_action_menu_list_pane_ParamLimits

0xbc6c,	// (0x000a0bae) sp_fs_action_menu_list_pane

0xbc8c,	// (0x000a0bce) sp_fs_scroll_pane_cp01_ParamLimits

0xbc8c,	// (0x000a0bce) sp_fs_scroll_pane_cp01

0x8d91,	// (0x0009dcd3) list_medium_line_plain_t2_t1

0x8da1,	// (0x0009dce3) list_medium_line_plain_t2_t2

0x0001,

0xfc4b,	// (0x000a4b8d) list_medium_line_plain_t2_t

0x8db1,	// (0x0009dcf3) list_medium_line_plain_t3_t1

0x8dc1,	// (0x0009dd03) list_medium_line_plain_t3_t2

0x8dcf,	// (0x0009dd11) list_medium_line_plain_t3_t3

0x0002,

0xfc50,	// (0x000a4b92) list_medium_line_plain_t3_t

0xe539,	// (0x000a347b) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x2_t2_g2_g1

0xe551,	// (0x000a3493) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe551,	// (0x000a3493) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x000a4198) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x000a4198) list_medium_line_x2_t2_g2_g

0xead0,	// (0x000a3a12) list_medium_line_x2_t2_g2_t1_ParamLimits

0xead0,	// (0x000a3a12) list_medium_line_x2_t2_g2_t1

0xe572,	// (0x000a34b4) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe572,	// (0x000a34b4) list_medium_line_x2_t2_g2_t2

0x0001,

0x06b1,	// (0x000955f3) list_medium_line_x2_t2_g2_t_ParamLimits

0x06b1,	// (0x000955f3) list_medium_line_x2_t2_g2_t

0xe539,	// (0x000a347b) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x2_t4_g2_g1

0xbcb2,	// (0x000a0bf4) list_medium_line_x2_t4_g2_g2_ParamLimits

0xbcb2,	// (0x000a0bf4) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc57,	// (0x000a4b99) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc57,	// (0x000a4b99) list_medium_line_x2_t4_g2_g

0x8ddd,	// (0x0009dd1f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8ddd,	// (0x0009dd1f) list_medium_line_x2_t4_g2_t1

0x8df4,	// (0x0009dd36) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8df4,	// (0x0009dd36) list_medium_line_x2_t4_g2_t2

0x8e09,	// (0x0009dd4b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8e09,	// (0x0009dd4b) list_medium_line_x2_t4_g2_t3

0xe572,	// (0x000a34b4) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe572,	// (0x000a34b4) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc5c,	// (0x000a4b9e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc5c,	// (0x000a4b9e) list_medium_line_x2_t4_g2_t

0xbcc4,	// (0x000a0c06) list_medium_line_t3_right_iconx2_g1

0xbb8e,	// (0x000a0ad0) list_medium_line_t3_right_iconx2_g2

0x8e1b,	// (0x0009dd5d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc65,	// (0x000a4ba7) list_medium_line_t3_right_iconx2_g

0x8e25,	// (0x0009dd67) list_medium_line_t3_right_iconx2_t1

0x8e35,	// (0x0009dd77) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6c,	// (0x000a4bae) list_medium_line_t3_right_iconx2_t

0xe539,	// (0x000a347b) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x3_t4_g4_g1

0xe545,	// (0x000a3487) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe545,	// (0x000a3487) list_medium_line_x3_t4_g4_g2

0xe5d9,	// (0x000a351b) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe5d9,	// (0x000a351b) list_medium_line_x3_t4_g4_g3

0xbccc,	// (0x000a0c0e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbccc,	// (0x000a0c0e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc71,	// (0x000a4bb3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc71,	// (0x000a4bb3) list_medium_line_x3_t4_g4_g

0x8e43,	// (0x0009dd85) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8e43,	// (0x0009dd85) list_medium_line_x3_t4_g4_t1

0x8e5a,	// (0x0009dd9c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8e5a,	// (0x0009dd9c) list_medium_line_x3_t4_g4_t2

0xbcd8,	// (0x000a0c1a) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbcd8,	// (0x000a0c1a) list_medium_line_x3_t4_g4_t3

0xbced,	// (0x000a0c2f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbced,	// (0x000a0c2f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc7a,	// (0x000a4bbc) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc7a,	// (0x000a4bbc) list_medium_line_x3_t4_g4_t

0x8e75,	// (0x0009ddb7) list_single_dyc_row_text_pane_t1_ParamLimits

0x8e75,	// (0x0009ddb7) list_single_dyc_row_text_pane_t1

0x8ebe,	// (0x0009de00) list_single_dyc_row_text_pane_t2_ParamLimits

0x8ebe,	// (0x0009de00) list_single_dyc_row_text_pane_t2

0xbd0a,	// (0x000a0c4c) list_single_dyc_row_text_pane_t3_ParamLimits

0xbd0a,	// (0x000a0c4c) list_single_dyc_row_text_pane_t3

0x0002,

0xfc83,	// (0x000a4bc5) list_single_dyc_row_text_pane_t_ParamLimits

0xfc83,	// (0x000a4bc5) list_single_dyc_row_text_pane_t

0xbd1c,	// (0x000a0c5e) list_single_dyc_row_pane_g1_ParamLimits

0xbd1c,	// (0x000a0c5e) list_single_dyc_row_pane_g1

0xbd28,	// (0x000a0c6a) list_single_dyc_row_pane_g2_ParamLimits

0xbd28,	// (0x000a0c6a) list_single_dyc_row_pane_g2

0xbd34,	// (0x000a0c76) list_single_dyc_row_pane_g3_ParamLimits

0xbd34,	// (0x000a0c76) list_single_dyc_row_pane_g3

0xbd40,	// (0x000a0c82) list_single_dyc_row_pane_g4_ParamLimits

0xbd40,	// (0x000a0c82) list_single_dyc_row_pane_g4

0x0003,

0xfc8a,	// (0x000a4bcc) list_single_dyc_row_pane_g_ParamLimits

0xfc8a,	// (0x000a4bcc) list_single_dyc_row_pane_g

0xbd4c,	// (0x000a0c8e) list_single_dyc_row_text_pane_ParamLimits

0xbd4c,	// (0x000a0c8e) list_single_dyc_row_text_pane

0xc97f,	// (0x000a18c1) bg_sp_fs_scroll_pane

0xbd6b,	// (0x000a0cad) thumb_sp_fs_scroll_pane

0xb7ce,	// (0x000a0710) list_medium_line_g1_ParamLimits

0xb7ce,	// (0x000a0710) list_medium_line_g1

0xbd74,	// (0x000a0cb6) list_medium_line_t1_ParamLimits

0xbd74,	// (0x000a0cb6) list_medium_line_t1

0xe539,	// (0x000a347b) list_medium_line_x2_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x2_g1

0xe545,	// (0x000a3487) list_medium_line_x2_g2_ParamLimits

0xe545,	// (0x000a3487) list_medium_line_x2_g2

0x0001,

0x06f2,	// (0x00095634) list_medium_line_x2_g_ParamLimits

0x06f2,	// (0x00095634) list_medium_line_x2_g

0xbd89,	// (0x000a0ccb) list_medium_line_x2_t1_ParamLimits

0xbd89,	// (0x000a0ccb) list_medium_line_x2_t1

0xe539,	// (0x000a347b) list_medium_line_x3_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x3_g1

0xe545,	// (0x000a3487) list_medium_line_x3_g2_ParamLimits

0xe545,	// (0x000a3487) list_medium_line_x3_g2

0x0001,

0x06f2,	// (0x00095634) list_medium_line_x3_g_ParamLimits

0x06f2,	// (0x00095634) list_medium_line_x3_g

0xbd89,	// (0x000a0ccb) list_medium_line_x3_t1_ParamLimits

0xbd89,	// (0x000a0ccb) list_medium_line_x3_t1

0xbd9f,	// (0x000a0ce1) thumb_sp_fs_scroll_pane_g1

0xbda8,	// (0x000a0cea) thumb_sp_fs_scroll_pane_g2

0xbdb1,	// (0x000a0cf3) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc93,	// (0x000a4bd5) thumb_sp_fs_scroll_pane_g

0xbd9f,	// (0x000a0ce1) bg_sp_fs_scroll_pane_g1

0xbda8,	// (0x000a0cea) bg_sp_fs_scroll_pane_g2

0xbdb1,	// (0x000a0cf3) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc93,	// (0x000a4bd5) bg_sp_fs_scroll_pane_g

0xe539,	// (0x000a347b) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe539,	// (0x000a347b) list_medium_line_x2_t3_g4_g1

0xe5cd,	// (0x000a350f) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe5cd,	// (0x000a350f) list_medium_line_x2_t3_g4_g2

0xe545,	// (0x000a3487) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe545,	// (0x000a3487) list_medium_line_x2_t3_g4_g3

0xe551,	// (0x000a3493) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe551,	// (0x000a3493) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x000a4214) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x000a4214) list_medium_line_x2_t3_g4_g

0x8f18,	// (0x0009de5a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8f18,	// (0x0009de5a) list_medium_line_x2_t3_g4_t1

0x8f32,	// (0x0009de74) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8f32,	// (0x0009de74) list_medium_line_x2_t3_g4_t2

0xe572,	// (0x000a34b4) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe572,	// (0x000a34b4) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc9a,	// (0x000a4bdc) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc9a,	// (0x000a4bdc) list_medium_line_x2_t3_g4_t

0xb7ce,	// (0x000a0710) list_medium_line_g2_g1_ParamLimits

0xb7ce,	// (0x000a0710) list_medium_line_g2_g1

0xb7da,	// (0x000a071c) list_medium_line_g2_g2_ParamLimits

0xb7da,	// (0x000a071c) list_medium_line_g2_g2

0x0001,

0xf9c6,	// (0x000a4908) list_medium_line_g2_g_ParamLimits

0xf9c6,	// (0x000a4908) list_medium_line_g2_g

0xbdba,	// (0x000a0cfc) list_medium_line_g2_t1_ParamLimits

0xbdba,	// (0x000a0cfc) list_medium_line_g2_t1

0xb7ce,	// (0x000a0710) list_medium_line_t3_g2_g1_ParamLimits

0xb7ce,	// (0x000a0710) list_medium_line_t3_g2_g1

0xb7da,	// (0x000a071c) list_medium_line_t3_g2_g2_ParamLimits

0xb7da,	// (0x000a071c) list_medium_line_t3_g2_g2

0x0001,

0xf9c6,	// (0x000a4908) list_medium_line_t3_g2_g_ParamLimits

0xf9c6,	// (0x000a4908) list_medium_line_t3_g2_g

0x8f4b,	// (0x0009de8d) list_medium_line_t3_g2_t1_ParamLimits

0x8f4b,	// (0x0009de8d) list_medium_line_t3_g2_t1

0x8f62,	// (0x0009dea4) list_medium_line_t3_g2_t2_ParamLimits

0x8f62,	// (0x0009dea4) list_medium_line_t3_g2_t2

0x8f77,	// (0x0009deb9) list_medium_line_t3_g2_t3_ParamLimits

0x8f77,	// (0x0009deb9) list_medium_line_t3_g2_t3

0x0002,

0xfca1,	// (0x000a4be3) list_medium_line_t3_g2_t_ParamLimits

0xfca1,	// (0x000a4be3) list_medium_line_t3_g2_t

0xbb8e,	// (0x000a0ad0) list_medium_line_right_icon_g1

0xbdcf,	// (0x000a0d11) list_medium_line_right_icon_t1

0xb7ce,	// (0x000a0710) list_medium_line_t2_g1_ParamLimits

0xb7ce,	// (0x000a0710) list_medium_line_t2_g1

0x8f90,	// (0x0009ded2) list_medium_line_t2_t1_ParamLimits

0x8f90,	// (0x0009ded2) list_medium_line_t2_t1

0x8faa,	// (0x0009deec) list_medium_line_t2_t2_ParamLimits

0x8faa,	// (0x0009deec) list_medium_line_t2_t2

0x0001,

0xfca8,	// (0x000a4bea) list_medium_line_t2_t_ParamLimits

0xfca8,	// (0x000a4bea) list_medium_line_t2_t

0xb7ce,	// (0x000a0710) list_medium_line_t3_g1_ParamLimits

0xb7ce,	// (0x000a0710) list_medium_line_t3_g1

0x8fc3,	// (0x0009df05) list_medium_line_t3_t1_ParamLimits

0x8fc3,	// (0x0009df05) list_medium_line_t3_t1

0x8fdd,	// (0x0009df1f) list_medium_line_t3_t2_ParamLimits

0x8fdd,	// (0x0009df1f) list_medium_line_t3_t2

0x8ff2,	// (0x0009df34) list_medium_line_t3_t3_ParamLimits

0x8ff2,	// (0x0009df34) list_medium_line_t3_t3

0x0002,

0xfcad,	// (0x000a4bef) list_medium_line_t3_t_ParamLimits

0xfcad,	// (0x000a4bef) list_medium_line_t3_t

0xb7ce,	// (0x000a0710) list_medium_line_g3_g1_ParamLimits

0xb7ce,	// (0x000a0710) list_medium_line_g3_g1

0xbddd,	// (0x000a0d1f) list_medium_line_g3_g2_ParamLimits

0xbddd,	// (0x000a0d1f) list_medium_line_g3_g2

0xb7da,	// (0x000a071c) list_medium_line_g3_g3_ParamLimits

0xb7da,	// (0x000a071c) list_medium_line_g3_g3

0x0002,

0xfcb4,	// (0x000a4bf6) list_medium_line_g3_g_ParamLimits

0xfcb4,	// (0x000a4bf6) list_medium_line_g3_g

0xbde9,	// (0x000a0d2b) list_medium_line_g3_t1_ParamLimits

0xbde9,	// (0x000a0d2b) list_medium_line_g3_t1

0xb7ce,	// (0x000a0710) list_medium_line_t2_g3_g1_ParamLimits

0xb7ce,	// (0x000a0710) list_medium_line_t2_g3_g1

0xbddd,	// (0x000a0d1f) list_medium_line_t2_g3_g2_ParamLimits

0xbddd,	// (0x000a0d1f) list_medium_line_t2_g3_g2

0xb7da,	// (0x000a071c) list_medium_line_t2_g3_g3_ParamLimits

0xb7da,	// (0x000a071c) list_medium_line_t2_g3_g3

0x0002,

0xfcb4,	// (0x000a4bf6) list_medium_line_t2_g3_g_ParamLimits

0xfcb4,	// (0x000a4bf6) list_medium_line_t2_g3_g

0x9007,	// (0x0009df49) list_medium_line_t2_g3_t1_ParamLimits

0x9007,	// (0x0009df49) list_medium_line_t2_g3_t1

0x901e,	// (0x0009df60) list_medium_line_t2_g3_t2_ParamLimits

0x901e,	// (0x0009df60) list_medium_line_t2_g3_t2

0x0001,

0xfcbb,	// (0x000a4bfd) list_medium_line_t2_g3_t_ParamLimits

0xfcbb,	// (0x000a4bfd) list_medium_line_t2_g3_t

0xb7ce,	// (0x000a0710) list_medium_line_t3_g3_g1_ParamLimits

0xb7ce,	// (0x000a0710) list_medium_line_t3_g3_g1

0xbddd,	// (0x000a0d1f) list_medium_line_t3_g3_g2_ParamLimits

0xbddd,	// (0x000a0d1f) list_medium_line_t3_g3_g2

0xb7da,	// (0x000a071c) list_medium_line_t3_g3_g3_ParamLimits

0xb7da,	// (0x000a071c) list_medium_line_t3_g3_g3

0x0002,

0xfcb4,	// (0x000a4bf6) list_medium_line_t3_g3_g_ParamLimits

0xfcb4,	// (0x000a4bf6) list_medium_line_t3_g3_g

0x9039,	// (0x0009df7b) list_medium_line_t3_g3_t1_ParamLimits

0x9039,	// (0x0009df7b) list_medium_line_t3_g3_t1

0x9052,	// (0x0009df94) list_medium_line_t3_g3_t2_ParamLimits

0x9052,	// (0x0009df94) list_medium_line_t3_g3_t2

0x9068,	// (0x0009dfaa) list_medium_line_t3_g3_t3_ParamLimits

0x9068,	// (0x0009dfaa) list_medium_line_t3_g3_t3

0x0002,

0xfcc0,	// (0x000a4c02) list_medium_line_t3_g3_t_ParamLimits

0xfcc0,	// (0x000a4c02) list_medium_line_t3_g3_t

0xbcc4,	// (0x000a0c06) list_medium_line_right_iconx2_g1

0xbb8e,	// (0x000a0ad0) list_medium_line_right_iconx2_g2

0x0001,

0xfcc7,	// (0x000a4c09) list_medium_line_right_iconx2_g

0xbdfe,	// (0x000a0d40) list_medium_line_right_iconx2_t1

0xbcc4,	// (0x000a0c06) list_medium_line_t2_right_iconx2_g1

0xbb8e,	// (0x000a0ad0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcc7,	// (0x000a4c09) list_medium_line_t2_right_iconx2_g

0x9082,	// (0x0009dfc4) list_medium_line_t2_right_iconx2_t1

0x9092,	// (0x0009dfd4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfccc,	// (0x000a4c0e) list_medium_line_t2_right_iconx2_t

0xbe0c,	// (0x000a0d4e) list_medium_line_x4_t4_t1

0x90a4,	// (0x0009dfe6) list_medium_line_x4_t4_t2

0x90b4,	// (0x0009dff6) list_medium_line_x4_t4_t3

0x90c4,	// (0x0009e006) list_medium_line_x4_t4_t4

0x0003,

0xfcd1,	// (0x000a4c13) list_medium_line_x4_t4_t

0x9117,	// (0x0009e059) tport_appsw_pane_ParamLimits

0x9117,	// (0x0009e059) tport_appsw_pane

0x9128,	// (0x0009e06a) tport_contact_pane_ParamLimits

0x9128,	// (0x0009e06a) tport_contact_pane

0x9141,	// (0x0009e083) tport_listscroll_pane_ParamLimits

0x9141,	// (0x0009e083) tport_listscroll_pane

0x915c,	// (0x0009e09e) cell_tport_appsw_pane_ParamLimits

0x915c,	// (0x0009e09e) cell_tport_appsw_pane

0xcf5c,	// (0x000a1e9e) tport_appsw_pane_g1_ParamLimits

0xcf5c,	// (0x000a1e9e) tport_appsw_pane_g1

0xbe1a,	// (0x000a0d5c) tport_contact_pane_g1

0xbe23,	// (0x000a0d65) tport_contact_pane_t1

0xbe31,	// (0x000a0d73) tport_contact_pane_t2

0x0001,

0xfcda,	// (0x000a4c1c) tport_contact_pane_t

0xbe3f,	// (0x000a0d81) list_tport_pane

0xbe48,	// (0x000a0d8a) scroll_pane_cp_030

0xbe59,	// (0x000a0d9b) cell_tport_appsw_pane_g1

0xbe69,	// (0x000a0dab) cell_tport_appsw_pane_t1

0xc97f,	// (0x000a18c1) grid_highlight_pane_cp019

0x919c,	// (0x0009e0de) list_tport_double_graphic_pane_ParamLimits

0x919c,	// (0x0009e0de) list_tport_double_graphic_pane

0xdabf,	// (0x000a2a01) list_highlight_pane_cp023_ParamLimits

0xdabf,	// (0x000a2a01) list_highlight_pane_cp023

0x91a9,	// (0x0009e0eb) list_tport_double_graphic_pane_g1_ParamLimits

0x91a9,	// (0x0009e0eb) list_tport_double_graphic_pane_g1

0x91b6,	// (0x0009e0f8) list_tport_double_graphic_pane_t1_ParamLimits

0x91b6,	// (0x0009e0f8) list_tport_double_graphic_pane_t1

0x91cb,	// (0x0009e10d) list_tport_double_graphic_pane_t2_ParamLimits

0x91cb,	// (0x0009e10d) list_tport_double_graphic_pane_t2

0x0001,

0xfce6,	// (0x000a4c28) list_tport_double_graphic_pane_t_ParamLimits

0xfce6,	// (0x000a4c28) list_tport_double_graphic_pane_t

0xc97f,	// (0x000a18c1) main_cale_note_pane

0x6f97,	// (0x0009bed9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6f97,	// (0x0009bed9) cell_vitu2_function_top_wide_pane_cp01

0x88b8,	// (0x0009d7fa) wait_bar_pane_cp05_ParamLimits

0xc97f,	// (0x000a18c1) listscroll_cmail_pane

0xbe7f,	// (0x000a0dc1) list_cmail_pane

0x91e7,	// (0x0009e129) list_cmail_body_pane

0x91fc,	// (0x0009e13e) list_single_cmail_header_caption_pane

0x9215,	// (0x0009e157) list_single_cmail_header_detail_pane_ParamLimits

0x9215,	// (0x0009e157) list_single_cmail_header_detail_pane

0x923e,	// (0x0009e180) list_single_cmail_header_caption_pane_t1

0x924e,	// (0x0009e190) list_single_cmail_header_detail_pane_g1_ParamLimits

0x924e,	// (0x0009e190) list_single_cmail_header_detail_pane_g1

0xbe9f,	// (0x000a0de1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xbe9f,	// (0x000a0de1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfceb,	// (0x000a4c2d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfceb,	// (0x000a4c2d) list_single_cmail_header_detail_pane_g

0xbeb8,	// (0x000a0dfa) list_single_cmail_header_detail_pane_t1_ParamLimits

0xbeb8,	// (0x000a0dfa) list_single_cmail_header_detail_pane_t1

0xbeea,	// (0x000a0e2c) list_single_cmail_header_editor_pane_bg_ParamLimits

0xbeea,	// (0x000a0e2c) list_single_cmail_header_editor_pane_bg

0xbefc,	// (0x000a0e3e) list_cmail_body_pane_g1

0xbf05,	// (0x000a0e47) list_cmail_body_pane_t1

0xcf7c,	// (0x000a1ebe) list_single_cmail_header_editor_pane_bg_g1

0xe7ee,	// (0x000a3730) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf8c,	// (0x000a1ece) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf84,	// (0x000a1ec6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1a0,	// (0x000a20e2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcfac,	// (0x000a1eee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf9c,	// (0x000a1ede) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcfa4,	// (0x000a1ee6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe7ce,	// (0x000a3710) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x928c,	// (0x0009e1ce) calenote_gesture_pane_ParamLimits

0x928c,	// (0x0009e1ce) calenote_gesture_pane

0x92ac,	// (0x0009e1ee) calenote_window_pane_ParamLimits

0x92ac,	// (0x0009e1ee) calenote_window_pane

0xbf13,	// (0x000a0e55) popup_note_window_cp01

0x92c8,	// (0x0009e20a) calenote_swipe_1_pane_ParamLimits

0x92c8,	// (0x0009e20a) calenote_swipe_1_pane

0x8c84,	// (0x0009dbc6) calenote_swipe_2_pane_ParamLimits

0x8c84,	// (0x0009dbc6) calenote_swipe_2_pane

0xba91,	// (0x000a09d3) calenote_swipe_1_pane_g1_ParamLimits

0xba91,	// (0x000a09d3) calenote_swipe_1_pane_g1

0xba9e,	// (0x000a09e0) calenote_swipe_1_pane_g2_ParamLimits

0xba9e,	// (0x000a09e0) calenote_swipe_1_pane_g2

0x0001,

0xfc1f,	// (0x000a4b61) calenote_swipe_1_pane_g_ParamLimits

0xfc1f,	// (0x000a4b61) calenote_swipe_1_pane_g

0xbf25,	// (0x000a0e67) calenote_swipe_1_pane_t1_ParamLimits

0xbf25,	// (0x000a0e67) calenote_swipe_1_pane_t1

0xba91,	// (0x000a09d3) calenote_swipe_2_pane_g1_ParamLimits

0xba91,	// (0x000a09d3) calenote_swipe_2_pane_g1

0xbf44,	// (0x000a0e86) calenote_swipe_2_pane_g2_ParamLimits

0xbf44,	// (0x000a0e86) calenote_swipe_2_pane_g2

0x0001,

0xfcf7,	// (0x000a4c39) calenote_swipe_2_pane_g_ParamLimits

0xfcf7,	// (0x000a4c39) calenote_swipe_2_pane_g

0xbf50,	// (0x000a0e92) calenote_swipe_2_pane_t1_ParamLimits

0xbf50,	// (0x000a0e92) calenote_swipe_2_pane_t1

0xc97f,	// (0x000a18c1) main_mup_navstr_pane

0x5c5a,	// (0x0009ab9c) main_mup3_pane_t7_ParamLimits

0x5c5a,	// (0x0009ab9c) main_mup3_pane_t7

0xb467,	// (0x000a03a9) main_mp4_pane_g6_ParamLimits

0xb467,	// (0x000a03a9) main_mp4_pane_g6

0xb60b,	// (0x000a054d) main_image3_pane_t4_ParamLimits

0xb60b,	// (0x000a054d) main_image3_pane_t4

0x92dd,	// (0x0009e21f) popup_navstr_preview_pane_ParamLimits

0x92dd,	// (0x0009e21f) popup_navstr_preview_pane

0x92f1,	// (0x0009e233) scroll_navstr_pane_ParamLimits

0x92f1,	// (0x0009e233) scroll_navstr_pane

0xc97f,	// (0x000a18c1) bg_popup_preview_window_pane_cp04

0xbf77,	// (0x000a0eb9) popup_navstr_preview_pane_t1

0x9305,	// (0x0009e247) scroll_navstr_pane_g1_ParamLimits

0x9305,	// (0x0009e247) scroll_navstr_pane_g1

0x9319,	// (0x0009e25b) scroll_navstr_pane_t1_ParamLimits

0x9319,	// (0x0009e25b) scroll_navstr_pane_t1

0xbf1c,	// (0x000a0e5e) bg_button_pane_cp014

0xbf1c,	// (0x000a0e5e) bg_button_pane_cp030

0xba16,	// (0x000a0958) list_double_fisheye_pane_g4_ParamLimits

0xba16,	// (0x000a0958) list_double_fisheye_pane_g4

0xba22,	// (0x000a0964) list_double_fisheye_pane_g5_ParamLimits

0xba22,	// (0x000a0964) list_double_fisheye_pane_g5

0xbe87,	// (0x000a0dc9) sp_fs_scroll_pane_cp03

0xbbce,	// (0x000a0b10) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xbbda,	// (0x000a0b1c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc3c,	// (0x000a4b7e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xbbe6,	// (0x000a0b28) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x91dd,	// (0x0009e11f) sp_fs_scroll_pane_cp02

0xe434,	// (0x000a3376) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe434,	// (0x000a3376) popup_sp_fs_calendar_preview_list_single_pane

0xc97f,	// (0x000a18c1) main_cam6_pano_pane

0xa156,	// (0x0009f098) main_mup3_pane_ParamLimits

0xc97f,	// (0x000a18c1) main_phacti_pane

0x878b,	// (0x0009d6cd) bg_button_pane_cp11

0x87a5,	// (0x0009d6e7) main_mobtv_info_pane_g2_ParamLimits

0x87a5,	// (0x0009d6e7) main_mobtv_info_pane_g2

0x0001,

0xfb9c,	// (0x000a4ade) main_mobtv_info_pane_g_ParamLimits

0xfb9c,	// (0x000a4ade) main_mobtv_info_pane_g

0x8982,	// (0x0009d8c4) sc_clock_pane_t5_ParamLimits

0x8982,	// (0x0009d8c4) sc_clock_pane_t5

0x8a0d,	// (0x0009d94f) main_radioblah_pane_g1_ParamLimits

0xdf19,	// (0x000a2e5b) main_radioblah_pane_t3_ParamLimits

0xdf19,	// (0x000a2e5b) main_radioblah_pane_t3

0xdf31,	// (0x000a2e73) main_radioblah_pane_t4_ParamLimits

0xdf31,	// (0x000a2e73) main_radioblah_pane_t4

0x8a35,	// (0x0009d977) main_radioblah_text_pane_ParamLimits

0x8a35,	// (0x0009d977) main_radioblah_text_pane

0x8a47,	// (0x0009d989) main_radioblah_info_pane_g1_ParamLimits

0x8ae2,	// (0x0009da24) main_radioblah_info_pane_t4_ParamLimits

0x8ae2,	// (0x0009da24) main_radioblah_info_pane_t4

0xdabf,	// (0x000a2a01) main_sp_fs_calendar_pane

0x932f,	// (0x0009e271) main_phacti_pane_g1

0x9337,	// (0x0009e279) phacti_note_pane_ParamLimits

0x9337,	// (0x0009e279) phacti_note_pane

0xbf8e,	// (0x000a0ed0) phacti_term_pane_ParamLimits

0xbf8e,	// (0x000a0ed0) phacti_term_pane

0xbfa3,	// (0x000a0ee5) phacti_note_pane_t1_ParamLimits

0xbfa3,	// (0x000a0ee5) phacti_note_pane_t1

0xbfba,	// (0x000a0efc) phacti_term_pane_g1

0xbfc2,	// (0x000a0f04) phacti_term_pane_t1_ParamLimits

0xbfc2,	// (0x000a0f04) phacti_term_pane_t1

0xbfec,	// (0x000a0f2e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbff4,	// (0x000a0f36) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd01,	// (0x000a4c43) popup_sp_fs_calendar_preview_list_single_pane_g

0xbffc,	// (0x000a0f3e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xbffc,	// (0x000a0f3e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc012,	// (0x000a0f54) aid_popup_sp_fs_bg_corner_pane

0xab3a,	// (0x0009fa7c) popup_sp_fs_calendar_preview_bg_pane_g1

0xc97f,	// (0x000a18c1) popup_sp_fs_calendar_preview_bg_pane

0xc01a,	// (0x000a0f5c) popup_sp_fs_calendar_preview_list_pane

0xdabf,	// (0x000a2a01) bg_main_sp_fs_cale_pane_ParamLimits

0xdabf,	// (0x000a2a01) bg_main_sp_fs_cale_pane

0xc02b,	// (0x000a0f6d) listscroll_cale_mrui_pane_ParamLimits

0xc02b,	// (0x000a0f6d) listscroll_cale_mrui_pane

0xc03f,	// (0x000a0f81) listscroll_sp_fs_schedule_track_pane

0xc048,	// (0x000a0f8a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xc048,	// (0x000a0f8a) main_sp_fs_ctrlbar_pane_cp01

0xc059,	// (0x000a0f9b) main_sp_fs_ribbon_pane

0xc061,	// (0x000a0fa3) popup_sp_fs_cale_preview_window

0x9398,	// (0x0009e2da) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9398,	// (0x0009e2da) list_single_sp_fs_schedule_track_pane

0xdabf,	// (0x000a2a01) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdabf,	// (0x000a2a01) bg_sp_fs_highlight_list_pane_cp03

0x93ad,	// (0x0009e2ef) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x93ad,	// (0x0009e2ef) list_single_sp_fs_schedule_track_pane_g1

0x93b9,	// (0x0009e2fb) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x93b9,	// (0x0009e2fb) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd06,	// (0x000a4c48) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd06,	// (0x000a4c48) list_single_sp_fs_schedule_track_pane_g

0x93c5,	// (0x0009e307) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x93c5,	// (0x0009e307) list_single_sp_fs_schedule_track_pane_t1

0x93df,	// (0x0009e321) sp_fs_schedule_track_pane_ParamLimits

0x93df,	// (0x0009e321) sp_fs_schedule_track_pane

0xc073,	// (0x000a0fb5) sp_fs_schedule_track_pane_g1

0xc07b,	// (0x000a0fbd) sp_fs_schedule_track_pane_g2

0xc083,	// (0x000a0fc5) sp_fs_schedule_track_pane_g3

0xc08b,	// (0x000a0fcd) sp_fs_schedule_track_pane_g4

0xc093,	// (0x000a0fd5) sp_fs_schedule_track_pane_g5

0x0004,

0xfd0b,	// (0x000a4c4d) sp_fs_schedule_track_pane_g

0xcf7c,	// (0x000a1ebe) bg_sp_fs_schedule_viewer_highlight_g1

0xe7ee,	// (0x000a3730) bg_sp_fs_schedule_viewer_highlight_g2

0xcf84,	// (0x000a1ec6) bg_sp_fs_schedule_viewer_highlight_g3

0xcf8c,	// (0x000a1ece) bg_sp_fs_schedule_viewer_highlight_g4

0xd1a0,	// (0x000a20e2) bg_sp_fs_schedule_viewer_highlight_g5

0xcf9c,	// (0x000a1ede) bg_sp_fs_schedule_viewer_highlight_g6

0xcfa4,	// (0x000a1ee6) bg_sp_fs_schedule_viewer_highlight_g7

0xcfac,	// (0x000a1eee) bg_sp_fs_schedule_viewer_highlight_g8

0xe7ce,	// (0x000a3710) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0x077a,	// (0x000956bc) bg_sp_fs_schedule_viewer_highlight_g

0xc97f,	// (0x000a18c1) bg_main_sp_fs_ribbon_pane

0x93f0,	// (0x0009e332) main_sp_fs_ribbon_pane_g1

0xc09b,	// (0x000a0fdd) main_sp_fs_ribbon_pane_t1

0x93f9,	// (0x0009e33b) main_sp_fs_ribbon_pane_t2

0xc0aa,	// (0x000a0fec) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd16,	// (0x000a4c58) main_sp_fs_ribbon_pane_t

0xc0b9,	// (0x000a0ffb) main_sp_fs_ribbon_scheduler_pane

0xc0c1,	// (0x000a1003) bg_main_sp_fs_ribbon_pane_g1

0xc0ca,	// (0x000a100c) bg_main_sp_fs_ribbon_pane_g2

0xc0d3,	// (0x000a1015) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd1d,	// (0x000a4c5f) bg_main_sp_fs_ribbon_pane_g

0xc0db,	// (0x000a101d) main_sp_fs_ribbon_scheduler_pane_g1

0xc0e4,	// (0x000a1026) main_sp_fs_ribbon_scheduler_pane_g2

0xc0ed,	// (0x000a102f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd24,	// (0x000a4c66) main_sp_fs_ribbon_scheduler_pane_g

0xc0f6,	// (0x000a1038) list_cale_mrui_pane

0x9408,	// (0x0009e34a) sp_fs_scroll_pane_cp07_ParamLimits

0x9408,	// (0x0009e34a) sp_fs_scroll_pane_cp07

0x941c,	// (0x0009e35e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x941c,	// (0x0009e35e) bg_sp_fs_schedule_viewer_highlight

0xc0ff,	// (0x000a1041) list_single_sp_fs_schedule_track_pane_cp01

0xc107,	// (0x000a1049) list_sp_fs_schedule_track_pane

0xc10f,	// (0x000a1051) sp_fs_scroll_pane_cp06_ParamLimits

0xc10f,	// (0x000a1051) sp_fs_scroll_pane_cp06

0xab3a,	// (0x0009fa7c) bgmain_sp_fs_calendar_pane_g1

0x942c,	// (0x0009e36e) list_single_cale_mrui_pane_ParamLimits

0x942c,	// (0x0009e36e) list_single_cale_mrui_pane

0xc121,	// (0x000a1063) list_single_cale_mrui_row_pane_ParamLimits

0xc121,	// (0x000a1063) list_single_cale_mrui_row_pane

0xc12e,	// (0x000a1070) list_single_cale_mrui_row_pane_g1_ParamLimits

0xc12e,	// (0x000a1070) list_single_cale_mrui_row_pane_g1

0xc173,	// (0x000a10b5) list_single_cale_mrui_row_pane_t1_ParamLimits

0xc173,	// (0x000a10b5) list_single_cale_mrui_row_pane_t1

0x944e,	// (0x0009e390) list_single_cale_mrui_row_pane_t2_ParamLimits

0x944e,	// (0x0009e390) list_single_cale_mrui_row_pane_t2

0xc185,	// (0x000a10c7) list_single_cale_mrui_row_pane_t3_ParamLimits

0xc185,	// (0x000a10c7) list_single_cale_mrui_row_pane_t3

0xc1b4,	// (0x000a10f6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xc1b4,	// (0x000a10f6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd32,	// (0x000a4c74) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd32,	// (0x000a4c74) list_single_cale_mrui_row_pane_t

0x94b6,	// (0x0009e3f8) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x94b6,	// (0x0009e3f8) list_single_cmail_header_editor_pane_bg_cp01

0x94dc,	// (0x0009e41e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x94dc,	// (0x0009e41e) list_single_cmail_header_editor_pane_bg_cp02

0x94fc,	// (0x0009e43e) main_radioblah_text_pane_t1_ParamLimits

0x94fc,	// (0x0009e43e) main_radioblah_text_pane_t1

0xc1e3,	// (0x000a1125) cam6_indi_pane_cp01

0xc1eb,	// (0x000a112d) cam6_mode_pane_cp01

0xc1f3,	// (0x000a1135) cam6_pano_pane

0xc1fc,	// (0x000a113e) cam6_zoom_pane_cp01

0xc204,	// (0x000a1146) cam6_pano_image_pane

0xc20f,	// (0x000a1151) cam6_pano_pane_g1

0xdc78,	// (0x000a2bba) cam6_pano_pane_g2

0xc218,	// (0x000a115a) cam6_pano_pane_g3

0xc221,	// (0x000a1163) cam6_pano_pane_g4

0xb115,	// (0x000a0057) cam6_pano_pane_g5

0xc22a,	// (0x000a116c) cam6_pano_pane_g6

0xc234,	// (0x000a1176) cam6_pano_pane_g7

0xc23c,	// (0x000a117e) cam6_pano_pane_g8

0xc245,	// (0x000a1187) cam6_pano_pane_g9

0x0008,

0xfd3b,	// (0x000a4c7d) cam6_pano_pane_g

0xc97f,	// (0x000a18c1) main_browser_tag_pane

0xbf6f,	// (0x000a0eb1) grid_navstr_albumart_pane

0xc250,	// (0x000a1192) cell_navstr_albumart_pane_ParamLimits

0xc250,	// (0x000a1192) cell_navstr_albumart_pane

0xf074,	// (0x000a3fb6) cell_navstr_albumart_pane_g1

0xa447,	// (0x0009f389) cell_navstr_albumart_pane_g2

0xa457,	// (0x0009f399) cell_navstr_albumart_pane_g3

0xa44f,	// (0x0009f391) cell_navstr_albumart_pane_g4

0x0003,

0xfd4e,	// (0x000a4c90) cell_navstr_albumart_pane_g

0x9517,	// (0x0009e459) bt_list_pane_ParamLimits

0x9517,	// (0x0009e459) bt_list_pane

0x952c,	// (0x0009e46e) bt_list_pane_t1

0x953b,	// (0x0009e47d) bt_list_pane_t2

0x0001,

0xfd57,	// (0x000a4c99) bt_list_pane_t

0xc97f,	// (0x000a18c1) main_cale_prevew_pane

0x954a,	// (0x0009e48c) popup_cale_preview_window_ParamLimits

0x954a,	// (0x0009e48c) popup_cale_preview_window

0xdabf,	// (0x000a2a01) bg_popup_preview_window_pane_cp05_ParamLimits

0xdabf,	// (0x000a2a01) bg_popup_preview_window_pane_cp05

0xc272,	// (0x000a11b4) list_cale_preview_pane_ParamLimits

0xc272,	// (0x000a11b4) list_cale_preview_pane

0x9561,	// (0x0009e4a3) list_double_cale_preview_pane_ParamLimits

0x9561,	// (0x0009e4a3) list_double_cale_preview_pane

0x9573,	// (0x0009e4b5) list_single_cale_preview_pane_ParamLimits

0x9573,	// (0x0009e4b5) list_single_cale_preview_pane

0x9587,	// (0x0009e4c9) list_single_cale_preview_pane_g1

0x958f,	// (0x0009e4d1) list_single_cale_preview_pane_t1_ParamLimits

0x958f,	// (0x0009e4d1) list_single_cale_preview_pane_t1

0x95a4,	// (0x0009e4e6) list_double_cale_preview_pane_g1

0x95ac,	// (0x0009e4ee) list_double_cale_preview_pane_t1_ParamLimits

0x95ac,	// (0x0009e4ee) list_double_cale_preview_pane_t1

0x95c1,	// (0x0009e503) list_double_cale_preview_pane_t2_ParamLimits

0x95c1,	// (0x0009e503) list_double_cale_preview_pane_t2

0x0001,

0xfd5c,	// (0x000a4c9e) list_double_cale_preview_pane_t_ParamLimits

0xfd5c,	// (0x000a4c9e) list_double_cale_preview_pane_t

0xc97f,	// (0x000a18c1) main_ezdial_pane

0xdabf,	// (0x000a2a01) main_sp_fs_email_pane_ParamLimits

0x8cbe,	// (0x0009dc00) cmail_ddmenu_btn01_pane_ParamLimits

0x8cbe,	// (0x0009dc00) cmail_ddmenu_btn01_pane

0x8cd1,	// (0x0009dc13) cmail_ddmenu_btn02_pane_ParamLimits

0x8cd1,	// (0x0009dc13) cmail_ddmenu_btn02_pane

0x8cf4,	// (0x0009dc36) cmail_ddmenu_btn03_pane_ParamLimits

0x8cf4,	// (0x0009dc36) cmail_ddmenu_btn03_pane

0x8d1d,	// (0x0009dc5f) main_sp_fs_ctrlbar_pane_ParamLimits

0x8d41,	// (0x0009dc83) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x91e7,	// (0x0009e129) list_cmail_body_pane_ParamLimits

0xbe96,	// (0x000a0dd8) bg_button_pane_cp12

0xbeab,	// (0x000a0ded) list_single_cmail_header_detail_pane_g3_ParamLimits

0xbeab,	// (0x000a0ded) list_single_cmail_header_detail_pane_g3

0x9266,	// (0x0009e1a8) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9266,	// (0x0009e1a8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf2,	// (0x000a4c34) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf2,	// (0x000a4c34) list_single_cmail_header_detail_pane_t

0xbfd7,	// (0x000a0f19) phacti_term_pane_t2_ParamLimits

0xbfd7,	// (0x000a0f19) phacti_term_pane_t2

0x0001,

0xfcfc,	// (0x000a4c3e) phacti_term_pane_t_ParamLimits

0xfcfc,	// (0x000a4c3e) phacti_term_pane_t

0xc27e,	// (0x000a11c0) aid_size_list_single_double

0x95d9,	// (0x0009e51b) popup_ezdial_listscroll_window

0x95f5,	// (0x0009e537) popup_number_entry_window_cp01

0xef05,	// (0x000a3e47) bg_popup_call_pane_cp09

0xc28a,	// (0x000a11cc) ezdial_list_pane

0xc292,	// (0x000a11d4) scroll_pane_cp23

0xa632,	// (0x0009f574) bg_button_pane_cp028_ParamLimits

0xa632,	// (0x0009f574) bg_button_pane_cp028

0x9603,	// (0x0009e545) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9603,	// (0x0009e545) cmail_ddmenu_btn01_pane_g1

0x9612,	// (0x0009e554) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9612,	// (0x0009e554) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd61,	// (0x000a4ca3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd61,	// (0x000a4ca3) cmail_ddmenu_btn01_pane_g

0xc29a,	// (0x000a11dc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc29a,	// (0x000a11dc) cmail_ddmenu_btn01_pane_t1

0xa632,	// (0x0009f574) bg_button_pane_cp029_ParamLimits

0xa632,	// (0x0009f574) bg_button_pane_cp029

0x9622,	// (0x0009e564) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9622,	// (0x0009e564) cmail_ddmenu_btn02_pane_g1

0x963d,	// (0x0009e57f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x963d,	// (0x0009e57f) cmail_ddmenu_btn02_pane_t1

0xdabf,	// (0x000a2a01) bg_button_pane_cp031_ParamLimits

0xdabf,	// (0x000a2a01) bg_button_pane_cp031

0x9622,	// (0x0009e564) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9622,	// (0x0009e564) cmail_ddmenu_btn03_pane_g1

0x963d,	// (0x0009e57f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x963d,	// (0x0009e57f) cmail_ddmenu_btn03_pane_t1

0x6817,	// (0x0009b759) cell_dialer2_keypad_pane_t1_ParamLimits

0x6831,	// (0x0009b773) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6831,	// (0x0009b773) cell_dialer2_keypad_pane_t1_copy1

0x85e4,	// (0x0009d526) ncimui_group_button_pane

0xdabf,	// (0x000a2a01) main_sp_fs_calendar_pane_ParamLimits

0x91fc,	// (0x0009e13e) list_single_cmail_header_caption_pane_ParamLimits

0xc022,	// (0x000a0f64) aid_recal_txt_sm_pane

0xc97f,	// (0x000a18c1) mian_recal_day_pane

0xc061,	// (0x000a0fa3) popup_sp_fs_cale_preview_window_ParamLimits

0xc97f,	// (0x000a18c1) list_recal_day_pane

0xc2d2,	// (0x000a1214) list_single_recal_day_pane_ParamLimits

0xc2d2,	// (0x000a1214) list_single_recal_day_pane

0xc2e4,	// (0x000a1226) list_single_recal_day_pane_g1_ParamLimits

0xc2e4,	// (0x000a1226) list_single_recal_day_pane_g1

0xc2f0,	// (0x000a1232) list_single_recal_day_pane_g2_ParamLimits

0xc2f0,	// (0x000a1232) list_single_recal_day_pane_g2

0xc300,	// (0x000a1242) list_single_recal_day_pane_g3_ParamLimits

0xc300,	// (0x000a1242) list_single_recal_day_pane_g3

0x9664,	// (0x0009e5a6) list_single_recal_day_pane_g4_ParamLimits

0x9664,	// (0x0009e5a6) list_single_recal_day_pane_g4

0xc30c,	// (0x000a124e) list_single_recal_day_pane_g5_ParamLimits

0xc30c,	// (0x000a124e) list_single_recal_day_pane_g5

0xc31c,	// (0x000a125e) list_single_recal_day_pane_g6_ParamLimits

0xc31c,	// (0x000a125e) list_single_recal_day_pane_g6

0x0004,

0xfd70,	// (0x000a4cb2) list_single_recal_day_pane_g_ParamLimits

0xfd70,	// (0x000a4cb2) list_single_recal_day_pane_g

0xc333,	// (0x000a1275) list_single_recal_day_pane_t1

0xc345,	// (0x000a1287) list_single_recal_day_pane_t2

0x0001,

0xfd7b,	// (0x000a4cbd) list_single_recal_day_pane_t

0x9684,	// (0x0009e5c6) ncimui_query_button_pane_ParamLimits

0x9684,	// (0x0009e5c6) ncimui_query_button_pane

0x9694,	// (0x0009e5d6) ncimui_query_button_pane_t1_ParamLimits

0x9694,	// (0x0009e5d6) ncimui_query_button_pane_t1

0xc35a,	// (0x000a129c) ncimui_query_button_pane_t2_ParamLimits

0xc35a,	// (0x000a129c) ncimui_query_button_pane_t2

0x0001,

0xfd80,	// (0x000a4cc2) ncimui_query_button_pane_t_ParamLimits

0xfd80,	// (0x000a4cc2) ncimui_query_button_pane_t

0x96a7,	// (0x0009e5e9) query_button_pane_ParamLimits

0x96a7,	// (0x0009e5e9) query_button_pane

0xc97f,	// (0x000a18c1) bg_button_pane_cp0028

0xc36d,	// (0x000a12af) query_button_pane_t1

0x4892,	// (0x000997d4) main_tport_pane_ParamLimits

0x90d4,	// (0x0009e016) bg_popup_window_pane_cp01_ParamLimits

0x90d4,	// (0x0009e016) bg_popup_window_pane_cp01

0x90ee,	// (0x0009e030) heading_pane_cp08_ParamLimits

0x90ee,	// (0x0009e030) heading_pane_cp08

0x9102,	// (0x0009e044) heading_pane_cp07_ParamLimits

0x9102,	// (0x0009e044) heading_pane_cp07

0xbe59,	// (0x000a0d9b) cell_tport_appsw_pane_g2

0x0002,

0xfcdf,	// (0x000a4c21) cell_tport_appsw_pane_g

0x2ec4,	// (0x00097e06) input_candi_list_open_g1

0xe9b3,	// (0x000a38f5) list_cale_time_pane_g6_ParamLimits

0xe9b3,	// (0x000a38f5) list_cale_time_pane_g6

0x565b,	// (0x0009a59d) aid_size_touch_calib_1_ParamLimits

0x565b,	// (0x0009a59d) aid_size_touch_calib_1

0x5667,	// (0x0009a5a9) aid_size_touch_calib_2_ParamLimits

0x5667,	// (0x0009a5a9) aid_size_touch_calib_2

0x567d,	// (0x0009a5bf) aid_size_touch_calib_3_ParamLimits

0x567d,	// (0x0009a5bf) aid_size_touch_calib_3

0x569b,	// (0x0009a5dd) aid_size_touch_calib_4_ParamLimits

0x569b,	// (0x0009a5dd) aid_size_touch_calib_4

0x56b1,	// (0x0009a5f3) main_touch_calib_button_group_pane_ParamLimits

0x56b1,	// (0x0009a5f3) main_touch_calib_button_group_pane

0x56c9,	// (0x0009a60b) main_touch_calib_pane_g1_ParamLimits

0x56d5,	// (0x0009a617) main_touch_calib_pane_g2_ParamLimits

0x56e1,	// (0x0009a623) main_touch_calib_pane_g3_ParamLimits

0x56ed,	// (0x0009a62f) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x000a46a3) main_touch_calib_pane_g_ParamLimits

0x56f9,	// (0x0009a63b) main_touch_calib_pane_t1_ParamLimits

0x5713,	// (0x0009a655) main_touch_calib_pane_t2_ParamLimits

0x572d,	// (0x0009a66f) main_touch_calib_pane_t3_ParamLimits

0x5741,	// (0x0009a683) main_touch_calib_pane_t4_ParamLimits

0x5755,	// (0x0009a697) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x000a46ac) main_touch_calib_pane_t_ParamLimits

0xaee5,	// (0x0009fe27) list_single_fp_cale_pane_g3_ParamLimits

0xaee5,	// (0x0009fe27) list_single_fp_cale_pane_g3

0xa156,	// (0x0009f098) bg_button_pane_cp012_ParamLimits

0xa156,	// (0x0009f098) bg_vkb2_func_pane_cp03_ParamLimits

0x77cc,	// (0x0009c70e) cell_vitu2_function_top_pane_g1_ParamLimits

0xa156,	// (0x0009f098) bg_vkb2_func_pane_cp04_ParamLimits

0x8572,	// (0x0009d4b4) main_ncimui_button_group_pane_ParamLimits

0x8572,	// (0x0009d4b4) main_ncimui_button_group_pane

0x85d2,	// (0x0009d514) main_ncimui_pane_t3_ParamLimits

0x85d2,	// (0x0009d514) main_ncimui_pane_t3

0xbf85,	// (0x000a0ec7) phacti_button_group_pane

0xc27e,	// (0x000a11c0) aid_size_list_single_double_ParamLimits

0x95d9,	// (0x0009e51b) popup_ezdial_listscroll_window_ParamLimits

0x95f5,	// (0x0009e537) popup_number_entry_window_cp01_ParamLimits

0x96ba,	// (0x0009e5fc) phacti_button_pane_ParamLimits

0x96ba,	// (0x0009e5fc) phacti_button_pane

0xc97f,	// (0x000a18c1) bg_button_pane_cp14

0xc37b,	// (0x000a12bd) phacti_button_pane_t1

0x96cb,	// (0x0009e60d) main_touch_calib_button_pane_ParamLimits

0x96cb,	// (0x0009e60d) main_touch_calib_button_pane

0xe31e,	// (0x000a3260) bg_button_pane_cp18_ParamLimits

0xe31e,	// (0x000a3260) bg_button_pane_cp18

0xc389,	// (0x000a12cb) main_touch_calib_button_pane_t1_ParamLimits

0xc389,	// (0x000a12cb) main_touch_calib_button_pane_t1

0xc39f,	// (0x000a12e1) main_touch_calib_button_pane_t2_ParamLimits

0xc39f,	// (0x000a12e1) main_touch_calib_button_pane_t2

0x0001,

0xfd85,	// (0x000a4cc7) main_touch_calib_button_pane_t_ParamLimits

0xfd85,	// (0x000a4cc7) main_touch_calib_button_pane_t

0xc97f,	// (0x000a18c1) cell_ncimui_button_pane

0xc97f,	// (0x000a18c1) bg_button_pane_cp032

0xc3bd,	// (0x000a12ff) cell_ncimui_button_pane_t1

0xb5eb,	// (0x000a052d) image3_infobar_pane_ParamLimits

0xb5eb,	// (0x000a052d) image3_infobar_pane

0x89ae,	// (0x0009d8f0) fs_bigclock_status_pane_ParamLimits

0x89ae,	// (0x0009d8f0) fs_bigclock_status_pane

0x89bb,	// (0x0009d8fd) main_fs_bigclock_clock_pane_ParamLimits

0x89bb,	// (0x0009d8fd) main_fs_bigclock_clock_pane

0x89cf,	// (0x0009d911) main_fs_bigclock_indi_pane_ParamLimits

0x89cf,	// (0x0009d911) main_fs_bigclock_indi_pane

0x89e7,	// (0x0009d929) main_fs_bigclock_swipe_pane_ParamLimits

0x89e7,	// (0x0009d929) main_fs_bigclock_swipe_pane

0xc97f,	// (0x000a18c1) main_fs_clock_dumped_data

0xdd85,	// (0x000a2cc7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdd85,	// (0x000a2cc7) list_single_fs_bigclock_indicator_pane_g1

0xddae,	// (0x000a2cf0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xddae,	// (0x000a2cf0) list_single_fs_bigclock_indicator_pane_g2

0xddc8,	// (0x000a2d0a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xddc8,	// (0x000a2d0a) list_single_fs_bigclock_indicator_pane_g3

0xdde2,	// (0x000a2d24) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdde2,	// (0x000a2d24) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd0,	// (0x000a4b12) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd0,	// (0x000a4b12) list_single_fs_bigclock_indicator_pane_g

0xde0b,	// (0x000a2d4d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xde0b,	// (0x000a2d4d) list_single_fs_bigclock_indicator_pane_t1

0xde33,	// (0x000a2d75) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde33,	// (0x000a2d75) list_single_fs_bigclock_indicator_pane_t2

0xde5b,	// (0x000a2d9d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xde5b,	// (0x000a2d9d) list_single_fs_bigclock_indicator_pane_t3

0xde83,	// (0x000a2dc5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xde83,	// (0x000a2dc5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbdb,	// (0x000a4b1d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbdb,	// (0x000a4b1d) list_single_fs_bigclock_indicator_pane_t

0xc3cb,	// (0x000a130d) image3_infobar_fav_pane_ParamLimits

0xc3cb,	// (0x000a130d) image3_infobar_fav_pane

0xc3db,	// (0x000a131d) image3_infobar_loc_pane_ParamLimits

0xc3db,	// (0x000a131d) image3_infobar_loc_pane

0xc3ef,	// (0x000a1331) image3_infobar_time_pane_ParamLimits

0xc3ef,	// (0x000a1331) image3_infobar_time_pane

0xab3a,	// (0x0009fa7c) image3_infobar_time_pane_g1

0xc3ff,	// (0x000a1341) image3_infobar_time_pane_t1

0xab3a,	// (0x0009fa7c) image3_infobar_loc_pane_g1

0xc40d,	// (0x000a134f) image3_infobar_loc_pane_g2

0x0001,

0xfd8a,	// (0x000a4ccc) image3_infobar_loc_pane_g

0xc415,	// (0x000a1357) image3_infobar_loc_pane_t1

0xab3a,	// (0x0009fa7c) image3_infobar_fav_pane_g1

0xc423,	// (0x000a1365) image3_infobar_fav_pane_g2

0x0001,

0xfd8f,	// (0x000a4cd1) image3_infobar_fav_pane_g

0xc42b,	// (0x000a136d) fs_bigclock_status_battery_pane

0xc434,	// (0x000a1376) fs_bigclock_status_signal_pane

0xc43d,	// (0x000a137f) fs_bigclock_status_title_pane

0xc446,	// (0x000a1388) fs_bigclock_status_signal_pane_g1

0xc44f,	// (0x000a1391) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd94,	// (0x000a4cd6) fs_bigclock_status_signal_pane_g

0xc457,	// (0x000a1399) fs_bigclock_status_battery_pane_g1

0xc460,	// (0x000a13a2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd99,	// (0x000a4cdb) fs_bigclock_status_battery_pane_g

0xc468,	// (0x000a13aa) fs_bigclock_status_title_pane_t1

0xab3a,	// (0x0009fa7c) main_fs_bigclock_clock_pane_g1

0xc476,	// (0x000a13b8) main_fs_bigclock_clock_pane_g2

0xc476,	// (0x000a13b8) main_fs_bigclock_clock_pane_g3

0xc476,	// (0x000a13b8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd9e,	// (0x000a4ce0) main_fs_bigclock_clock_pane_g

0xc47e,	// (0x000a13c0) main_fs_bigclock_clock_pane_t1

0xc48c,	// (0x000a13ce) main_fs_bigclock_clock_pane_t2

0x0001,

0xfda7,	// (0x000a4ce9) main_fs_bigclock_clock_pane_t

0xc49b,	// (0x000a13dd) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc49b,	// (0x000a13dd) list_single_fs_bigclock_indicator_pane

0x96e0,	// (0x0009e622) list_single_fs_bigclock_pane_ParamLimits

0x96e0,	// (0x0009e622) list_single_fs_bigclock_pane

0xc4b5,	// (0x000a13f7) main_fs_bigclock_indicator_pane_t1

0xc4c4,	// (0x000a1406) list_single_fs_bigclock_pane_g1

0xc4cc,	// (0x000a140e) list_single_fs_bigclock_pane_t1

0xab3a,	// (0x0009fa7c) main_fs_bigclock_swipe_pane_g1

0xc50f,	// (0x000a1451) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdb8,	// (0x000a4cfa) main_fs_bigclock_swipe_pane_g

0xc517,	// (0x000a1459) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc517,	// (0x000a1459) main_fs_bigclock_swipe_pane_t1

0x26d7,	// (0x00097619) call_type_pane_ParamLimits

0xc97f,	// (0x000a18c1) main_btmg_pane

0xc15a,	// (0x000a109c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xc15a,	// (0x000a109c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd2b,	// (0x000a4c6d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd2b,	// (0x000a4c6d) list_single_cale_mrui_row_pane_g

0xc2b9,	// (0x000a11fb) list_recal_vselct_arw_lo_pane

0xc2c1,	// (0x000a1203) list_recal_vselct_arw_up_pane

0xc2c9,	// (0x000a120b) list_recal_vselct_pane

0x9746,	// (0x0009e688) btmg_button_pane

0x9750,	// (0x0009e692) main_btmg_pane_g1

0xc97f,	// (0x000a18c1) bg_button_pane_cp044

0xc534,	// (0x000a1476) btmg_button_pane_t1

0xa62a,	// (0x0009f56c) aid_listscroll_gen

0xdabf,	// (0x000a2a01) main_cntbar_detail_pane

0xbe77,	// (0x000a0db9) list_cmail_folder_pane

0xbe87,	// (0x000a0dc9) sp_fs_scroll_pane_cp03_ParamLimits

0x975a,	// (0x0009e69c) list_single_fs_dyc_pane_cp01_ParamLimits

0x975a,	// (0x0009e69c) list_single_fs_dyc_pane_cp01

0xc542,	// (0x000a1484) aid_size_cmail_indent

0xc54b,	// (0x000a148d) list_single_dyc_row_pane_cp01

0x97a0,	// (0x0009e6e2) cntbar_detail_list_pane_ParamLimits

0x97a0,	// (0x0009e6e2) cntbar_detail_list_pane

0x97ec,	// (0x0009e72e) main_cntbar_detail_cont_pane_ParamLimits

0x97ec,	// (0x0009e72e) main_cntbar_detail_cont_pane

0x2671,	// (0x000975b3) scroll_pane_cp032_ParamLimits

0x2671,	// (0x000975b3) scroll_pane_cp032

0x9800,	// (0x0009e742) cntbar_detail_list_event_pane_ParamLimits

0x9800,	// (0x0009e742) cntbar_detail_list_event_pane

0x97b0,	// (0x0009e6f2) cntbar_detail_list_shct_pane

0xe83c,	// (0x000a377e) aid_list_gen

0xc554,	// (0x000a1496) aid_scroll

0xc55d,	// (0x000a149f) aid_size_touch_scroll_bar

0xc566,	// (0x000a14a8) aid_list_double

0xc56f,	// (0x000a14b1) aid_list_single

0xc578,	// (0x000a14ba) aid_list_single_lg

0xc581,	// (0x000a14c3) aid_list_z_g_a_sm

0xc589,	// (0x000a14cb) aid_list_z_g_d

0xc591,	// (0x000a14d3) aid_txt_z_prm

0x9810,	// (0x0009e752) aid_txt_z_prm_cp01

0x981e,	// (0x0009e760) aid_txt_z_sec

0x982c,	// (0x0009e76e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x982c,	// (0x0009e76e) main_cntbar_detail_cont_pane_g1

0x9840,	// (0x0009e782) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9840,	// (0x0009e782) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdbd,	// (0x000a4cff) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdbd,	// (0x000a4cff) main_cntbar_detail_cont_pane_g

0xc59f,	// (0x000a14e1) main_cntbar_detail_cont_pane_t1

0xc5ad,	// (0x000a14ef) main_cntbar_detail_cont_pane_t2

0xc5bb,	// (0x000a14fd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdc2,	// (0x000a4d04) main_cntbar_detail_cont_pane_t

0x9850,	// (0x0009e792) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9850,	// (0x0009e792) cell_cntbar_detail_list_shct_pane

0xc5c9,	// (0x000a150b) cntbar_detail_list_shct_pane_g1

0xc5d2,	// (0x000a1514) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdc9,	// (0x000a4d0b) cntbar_detail_list_shct_pane_g

0x9864,	// (0x0009e7a6) cntbar_detail_list_event_pane_g1_ParamLimits

0x9864,	// (0x0009e7a6) cntbar_detail_list_event_pane_g1

0x9870,	// (0x0009e7b2) cntbar_detail_list_event_pane_g2_ParamLimits

0x9870,	// (0x0009e7b2) cntbar_detail_list_event_pane_g2

0x0005,

0xfdce,	// (0x000a4d10) cntbar_detail_list_event_pane_g_ParamLimits

0xfdce,	// (0x000a4d10) cntbar_detail_list_event_pane_g

0x98dc,	// (0x0009e81e) cntbar_detail_list_event_pane_t1_ParamLimits

0x98dc,	// (0x0009e81e) cntbar_detail_list_event_pane_t1

0x98f1,	// (0x0009e833) cntbar_detail_list_event_pane_t2_ParamLimits

0x98f1,	// (0x0009e833) cntbar_detail_list_event_pane_t2

0x0002,

0xfddb,	// (0x000a4d1d) cntbar_detail_list_event_pane_t_ParamLimits

0xfddb,	// (0x000a4d1d) cntbar_detail_list_event_pane_t

0xab3a,	// (0x0009fa7c) cell_cntbar_detail_list_shct_pane_g1

0x2a3e,	// (0x00097980) navi_pane_mv_g3

0xdabf,	// (0x000a2a01) main_cntbar_detail_pane_ParamLimits

0xc97f,	// (0x000a18c1) main_notif_wgt_pane

0xb401,	// (0x000a0343) aid_tch_main_mp4_pane_g4

0xb5e3,	// (0x000a0525) popup_slider_window_cp02

0xc2af,	// (0x000a11f1) list_recal_day_event_pane

0x9774,	// (0x0009e6b6) cntbar_detail_btn_pane_ParamLimits

0x9774,	// (0x0009e6b6) cntbar_detail_btn_pane

0x978a,	// (0x0009e6cc) cntbar_detail_btn_pane_cp01_ParamLimits

0x978a,	// (0x0009e6cc) cntbar_detail_btn_pane_cp01

0x97b0,	// (0x0009e6f2) cntbar_detail_list_shct_pane_ParamLimits

0x97c0,	// (0x0009e702) cntbar_detail_pane_g1_ParamLimits

0x97c0,	// (0x0009e702) cntbar_detail_pane_g1

0x97d0,	// (0x0009e712) cntbar_detail_pane_t1_ParamLimits

0x97d0,	// (0x0009e712) cntbar_detail_pane_t1

0x987c,	// (0x0009e7be) cntbar_detail_list_event_pane_g3_ParamLimits

0x987c,	// (0x0009e7be) cntbar_detail_list_event_pane_g3

0x9894,	// (0x0009e7d6) cntbar_detail_list_event_pane_g4_ParamLimits

0x9894,	// (0x0009e7d6) cntbar_detail_list_event_pane_g4

0x98ac,	// (0x0009e7ee) cntbar_detail_list_event_pane_g5_ParamLimits

0x98ac,	// (0x0009e7ee) cntbar_detail_list_event_pane_g5

0x98c4,	// (0x0009e806) cntbar_detail_list_event_pane_g6_ParamLimits

0x98c4,	// (0x0009e806) cntbar_detail_list_event_pane_g6

0x9906,	// (0x0009e848) cntbar_detail_list_event_pane_t3_ParamLimits

0x9906,	// (0x0009e848) cntbar_detail_list_event_pane_t3

0x9918,	// (0x0009e85a) popup_notif_wgt_window_ParamLimits

0x9918,	// (0x0009e85a) popup_notif_wgt_window

0x9931,	// (0x0009e873) popup_submenu_window_cp01_ParamLimits

0x9931,	// (0x0009e873) popup_submenu_window_cp01

0xef05,	// (0x000a3e47) bg_popup_window_pane_cp10

0xc5db,	// (0x000a151d) listscroll_notif_wgt_pane

0xc5ec,	// (0x000a152e) list_notif_wgt_window

0xc5f5,	// (0x000a1537) scroll_pane_cp033

0x9943,	// (0x0009e885) list_notif_wgt_row_pane_ParamLimits

0x9943,	// (0x0009e885) list_notif_wgt_row_pane

0xc5fe,	// (0x000a1540) aid_size_list_notif_wgt_del

0xc60b,	// (0x000a154d) list_notif_wgt_row_pane_g1

0xc617,	// (0x000a1559) list_notif_wgt_row_pane_g2

0xc623,	// (0x000a1565) list_notif_wgt_row_pane_g3

0x0002,

0xfde2,	// (0x000a4d24) list_notif_wgt_row_pane_g

0xc630,	// (0x000a1572) list_notif_wgt_row_pane_t1

0xc645,	// (0x000a1587) list_notif_wgt_row_pane_t2

0xc657,	// (0x000a1599) list_notif_wgt_row_pane_t3

0x0002,

0xfde9,	// (0x000a4d2b) list_notif_wgt_row_pane_t

0xd1ba,	// (0x000a20fc) list_recal_day_event_pane_g1

0xc669,	// (0x000a15ab) list_recal_day_event_pane_t1

0xc97f,	// (0x000a18c1) bg_button_pane_cp045

0xc678,	// (0x000a15ba) cntbar_detail_btn_pane_t1

0xa632,	// (0x0009f574) main_callh_pane_ParamLimits

0xa632,	// (0x0009f574) main_callh_pane

0xc97f,	// (0x000a18c1) main_coverflow0_pane

0xc97f,	// (0x000a18c1) main_wgtman_pane

0x89f5,	// (0x0009d937) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x89f5,	// (0x0009d937) main_fs_bigclock_unlock_btn_pane

0xbe51,	// (0x000a0d93) bg_button_pane_cp16

0xbe61,	// (0x000a0da3) cell_tport_appsw_pane_g3

0x9953,	// (0x0009e895) cf0_flow_pane_ParamLimits

0x9953,	// (0x0009e895) cf0_flow_pane

0xc686,	// (0x000a15c8) listscroll_cf0_pane

0xc691,	// (0x000a15d3) main_cf0_pane_g1

0x9968,	// (0x0009e8aa) main_cf0_pane_t1_ParamLimits

0x9968,	// (0x0009e8aa) main_cf0_pane_t1

0x997f,	// (0x0009e8c1) main_cf0_pane_t2_ParamLimits

0x997f,	// (0x0009e8c1) main_cf0_pane_t2

0x0001,

0xfdf0,	// (0x000a4d32) main_cf0_pane_t_ParamLimits

0xfdf0,	// (0x000a4d32) main_cf0_pane_t

0xc69b,	// (0x000a15dd) scroll_pane_cp11

0x9996,	// (0x0009e8d8) cf0_flow_pane_g1

0x999e,	// (0x0009e8e0) cf0_flow_pane_g2

0x0001,

0xfdf5,	// (0x000a4d37) cf0_flow_pane_g

0x99a6,	// (0x0009e8e8) cf0_flow_pane_t1

0xc97f,	// (0x000a18c1) main_call6_pane

0xc97f,	// (0x000a18c1) main_calllock_pane

0x99b4,	// (0x0009e8f6) call6_btn_grp_pane_ParamLimits

0x99b4,	// (0x0009e8f6) call6_btn_grp_pane

0x99ce,	// (0x0009e910) call6_pane_g1_ParamLimits

0x99ce,	// (0x0009e910) call6_pane_g1

0x99e3,	// (0x0009e925) popup_call6_1st_window_ParamLimits

0x99e3,	// (0x0009e925) popup_call6_1st_window

0x99f4,	// (0x0009e936) popup_call6_2nd_window_ParamLimits

0x99f4,	// (0x0009e936) popup_call6_2nd_window

0x9a05,	// (0x0009e947) cell_call6_btn_pane_ParamLimits

0x9a05,	// (0x0009e947) cell_call6_btn_pane

0xef05,	// (0x000a3e47) bg_popup_call2_in_pane_cp03

0xc6a6,	// (0x000a15e8) popup_call6_1st_window_g1

0xc6ae,	// (0x000a15f0) popup_call6_1st_window_g2

0xc6b6,	// (0x000a15f8) popup_call6_1st_window_g3

0x0002,

0xfdfa,	// (0x000a4d3c) popup_call6_1st_window_g

0xc6be,	// (0x000a1600) popup_call6_1st_window_t1

0xc6cd,	// (0x000a160f) popup_call6_1st_window_t2

0xc6dd,	// (0x000a161f) popup_call6_1st_window_t3

0x0002,

0xfe01,	// (0x000a4d43) popup_call6_1st_window_t

0xef05,	// (0x000a3e47) bg_popup_call2_in_pane_cp04

0xc6a6,	// (0x000a15e8) popup_call6_2nd_window_g1

0xc6ae,	// (0x000a15f0) popup_call6_2nd_window_g2

0xc6b6,	// (0x000a15f8) popup_call6_2nd_window_g3

0x0002,

0xfdfa,	// (0x000a4d3c) popup_call6_2nd_window_g

0xc6be,	// (0x000a1600) popup_call6_2nd_window_t1

0xc97f,	// (0x000a18c1) bg_button_pane_cp15

0xc6ed,	// (0x000a162f) cell_call6_btn_pane_g1

0xc6f6,	// (0x000a1638) cell_call6_btn_pane_t1

0x9a19,	// (0x0009e95b) listscroll_wgtman_pane_ParamLimits

0x9a19,	// (0x0009e95b) listscroll_wgtman_pane

0x9a3c,	// (0x0009e97e) wgtman_btn_pane_ParamLimits

0x9a3c,	// (0x0009e97e) wgtman_btn_pane

0xedb8,	// (0x000a3cfa) aid_scroll_copy1

0xc705,	// (0x000a1647) list_wgtman_pane

0x9a7f,	// (0x0009e9c1) wgtman_btn_pane_g1_ParamLimits

0x9a7f,	// (0x0009e9c1) wgtman_btn_pane_g1

0x9aab,	// (0x0009e9ed) wgtman_btn_pane_t1_ParamLimits

0x9aab,	// (0x0009e9ed) wgtman_btn_pane_t1

0xc70f,	// (0x000a1651) wgtman_btn_pane_t2_ParamLimits

0xc70f,	// (0x000a1651) wgtman_btn_pane_t2

0x0001,

0xfe08,	// (0x000a4d4a) wgtman_btn_pane_t_ParamLimits

0xfe08,	// (0x000a4d4a) wgtman_btn_pane_t

0x9ae8,	// (0x0009ea2a) listrow_wgtman_pane_ParamLimits

0x9ae8,	// (0x0009ea2a) listrow_wgtman_pane

0x9afb,	// (0x0009ea3d) listrow_wgtman_pane_g1

0x9b08,	// (0x0009ea4a) listrow_wgtman_pane_g2

0x0001,

0xfe0d,	// (0x000a4d4f) listrow_wgtman_pane_g

0x9b26,	// (0x0009ea68) listrow_wgtman_pane_t1

0x9b3e,	// (0x0009ea80) listrow_wgtman_pane_t2

0x0001,

0xfe12,	// (0x000a4d54) listrow_wgtman_pane_t

0x9b64,	// (0x0009eaa6) wait_bar_pane_cp09

0xc726,	// (0x000a1668) main_calllock_btn_pane

0xc730,	// (0x000a1672) main_calllock_pane_g1

0xc97f,	// (0x000a18c1) bg_button_pane_cp17

0xc73b,	// (0x000a167d) main_calllock_btn_pane_g1

0xc744,	// (0x000a1686) main_calllock_btn_pane_t1

0xc97f,	// (0x000a18c1) main_dialer3_pane

0xc97f,	// (0x000a18c1) main_fmrd2_pane

0xab3a,	// (0x0009fa7c) main_fs_bigclock_unlock_btn_pane_g1

0xc75b,	// (0x000a169d) main_fs_bigclock_unlock_btn_pane_t1

0x9b76,	// (0x0009eab8) area_fmrd2_info_pane_ParamLimits

0x9b76,	// (0x0009eab8) area_fmrd2_info_pane

0x9b87,	// (0x0009eac9) area_fmrd2_visual_pane_ParamLimits

0x9b87,	// (0x0009eac9) area_fmrd2_visual_pane

0x9b95,	// (0x0009ead7) fmrd2_indi_pane_ParamLimits

0x9b95,	// (0x0009ead7) fmrd2_indi_pane

0x9ba2,	// (0x0009eae4) area_fmrd2_visual_pane_g1

0x9baa,	// (0x0009eaec) area_fmrd2_visual_pane_t1

0x9bba,	// (0x0009eafc) area_fmrd2_visual_pane_t2

0x9bca,	// (0x0009eb0c) area_fmrd2_visual_pane_t3

0x0002,

0xfe1c,	// (0x000a4d5e) area_fmrd2_visual_pane_t

0x9bda,	// (0x0009eb1c) area_fmrd2_info_pane_g1

0x9be2,	// (0x0009eb24) area_fmrd2_info_pane_t1

0x9bf2,	// (0x0009eb34) area_fmrd2_info_pane_t2

0x9c02,	// (0x0009eb44) area_fmrd2_info_pane_t3

0x9c12,	// (0x0009eb54) area_fmrd2_info_pane_t4

0x0003,

0xfe23,	// (0x000a4d65) area_fmrd2_info_pane_t

0x9c20,	// (0x0009eb62) fmrd2_indi_pane_t1

0x9c30,	// (0x0009eb72) fmrd2_indi_pane_t2

0x9c40,	// (0x0009eb82) fmrd2_indi_pane_t3

0x0002,

0xfe2c,	// (0x000a4d6e) fmrd2_indi_pane_t

0xddf1,	// (0x000a2d33) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xddf1,	// (0x000a2d33) list_single_fs_bigclock_indicator_pane_g5

0xde98,	// (0x000a2dda) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xde98,	// (0x000a2dda) list_single_fs_bigclock_indicator_pane_t5

0x934b,	// (0x0009e28d) aid_cell_bcale_month_pane_ParamLimits

0x934b,	// (0x0009e28d) aid_cell_bcale_month_pane

0x9363,	// (0x0009e2a5) bcale_month_pane_ParamLimits

0x9363,	// (0x0009e2a5) bcale_month_pane

0x937a,	// (0x0009e2bc) bcale_preview_pane_ParamLimits

0x937a,	// (0x0009e2bc) bcale_preview_pane

0xc4cc,	// (0x000a140e) list_single_fs_bigclock_pane_t1_ParamLimits

0xc4eb,	// (0x000a142d) list_single_fs_bigclock_pane_t2_ParamLimits

0xc4eb,	// (0x000a142d) list_single_fs_bigclock_pane_t2

0x0001,

0xfdb3,	// (0x000a4cf5) list_single_fs_bigclock_pane_t_ParamLimits

0xfdb3,	// (0x000a4cf5) list_single_fs_bigclock_pane_t

0xc753,	// (0x000a1695) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe17,	// (0x000a4d59) main_fs_bigclock_unlock_btn_pane_g

0x9c50,	// (0x0009eb92) aid_dia3_key_size_ParamLimits

0x9c50,	// (0x0009eb92) aid_dia3_key_size

0x9c5f,	// (0x0009eba1) aid_dia3_listrow_size_ParamLimits

0x9c5f,	// (0x0009eba1) aid_dia3_listrow_size

0x9c74,	// (0x0009ebb6) dia3_keypad_fun_pane_ParamLimits

0x9c74,	// (0x0009ebb6) dia3_keypad_fun_pane

0x9c90,	// (0x0009ebd2) dia3_keypad_num_pane_ParamLimits

0x9c90,	// (0x0009ebd2) dia3_keypad_num_pane

0x9cab,	// (0x0009ebed) dia3_listscroll_pane_ParamLimits

0x9cab,	// (0x0009ebed) dia3_listscroll_pane

0x9cbe,	// (0x0009ec00) dia3_numentry_pane_ParamLimits

0x9cbe,	// (0x0009ec00) dia3_numentry_pane

0xc769,	// (0x000a16ab) dia3_list_pane

0xc774,	// (0x000a16b6) scroll_pane_cp12

0xc97f,	// (0x000a18c1) bg_dia3_numentry_pane

0x9cd2,	// (0x0009ec14) dia3_numentry_pane_t1

0x9ce1,	// (0x0009ec23) cell_dia3_key_num_pane

0x9ce9,	// (0x0009ec2b) cell_dia3_key0_fun_pane_ParamLimits

0x9ce9,	// (0x0009ec2b) cell_dia3_key0_fun_pane

0x9cfd,	// (0x0009ec3f) cell_dia3_key1_fun_pane_ParamLimits

0x9cfd,	// (0x0009ec3f) cell_dia3_key1_fun_pane

0x9d15,	// (0x0009ec57) dia3_listrow_pane

0xdaf2,	// (0x000a2a34) bg_dia3_numentry_pane_g1

0xc97f,	// (0x000a18c1) bg_button_pane_cp21

0xc77f,	// (0x000a16c1) cell_dia3_key_num_pane_t1

0xc78d,	// (0x000a16cf) cell_dia3_key_num_pane_t2

0xc79c,	// (0x000a16de) cell_dia3_key_num_pane_t3

0xc7ab,	// (0x000a16ed) cell_dia3_key_num_pane_t4

0x0003,

0xfe33,	// (0x000a4d75) cell_dia3_key_num_pane_t

0xc97f,	// (0x000a18c1) bg_button_pane_cp19

0x9d27,	// (0x0009ec69) cell_dia3_key0_fun_pane_g1

0xc97f,	// (0x000a18c1) bg_button_pane_cp20

0x9d2f,	// (0x0009ec71) cell_dia3_key1_fun_pane_g1

0x9d37,	// (0x0009ec79) area_left_week_number_pane

0x9d41,	// (0x0009ec83) area_top_day_name_pane

0x9d4d,	// (0x0009ec8f) frame_month_view_pane

0x9d57,	// (0x0009ec99) grid_month_view_pane

0xc7ba,	// (0x000a16fc) cell_top_day_name_pane_ParamLimits

0xc7ba,	// (0x000a16fc) cell_top_day_name_pane

0x9d61,	// (0x0009eca3) cell_area_left_week_number_pane_ParamLimits

0x9d61,	// (0x0009eca3) cell_area_left_week_number_pane

0x9d75,	// (0x0009ecb7) cell_month_view_pane_ParamLimits

0x9d75,	// (0x0009ecb7) cell_month_view_pane

0xc7d4,	// (0x000a1716) frm_month_g1

0x9d92,	// (0x0009ecd4) frm_month_g2

0x9d9c,	// (0x0009ecde) frm_month_g3

0x9da6,	// (0x0009ece8) frm_month_g4

0x9db0,	// (0x0009ecf2) frm_month_g5

0x9dba,	// (0x0009ecfc) frm_month_g6

0x9dc4,	// (0x0009ed06) frm_month_g7

0xc7dd,	// (0x000a171f) frm_month_g8

0xc7e6,	// (0x000a1728) frm_month_g9

0xc7ef,	// (0x000a1731) frm_month_g10

0xc7f8,	// (0x000a173a) frm_month_g11

0xc801,	// (0x000a1743) frm_month_g12

0xc80a,	// (0x000a174c) frm_month_g13

0xc813,	// (0x000a1755) frm_month_g14

0xc81e,	// (0x000a1760) frm_month_g15

0xc829,	// (0x000a176b) frm_month_g16

0x000f,

0xfe3c,	// (0x000a4d7e) frm_month_g

0x9dce,	// (0x0009ed10) cell_top_day_name_pane_t1

0x9ddd,	// (0x0009ed1f) cell_area_left_week_number_pane_g1

0x9de5,	// (0x0009ed27) cell_area_left_week_number_pane_t1

0xab3a,	// (0x0009fa7c) cell_month_view_pane_g1

0x9df4,	// (0x0009ed36) cell_month_view_pane_t1

0xc97f,	// (0x000a18c1) main_fps_pane

0xbb96,	// (0x000a0ad8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xbb96,	// (0x000a0ad8) cmail_ddmenu_btn02_pane_cp1

0xbbb2,	// (0x000a0af4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xbbb2,	// (0x000a0af4) cmail_ddmenu_btn02_pane_cp2

0x9631,	// (0x0009e573) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9631,	// (0x0009e573) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd66,	// (0x000a4ca8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd66,	// (0x000a4ca8) cmail_ddmenu_btn02_pane_g

0x9652,	// (0x0009e594) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9652,	// (0x0009e594) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd6b,	// (0x000a4cad) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd6b,	// (0x000a4cad) cmail_ddmenu_btn02_pane_t

0x9e03,	// (0x0009ed45) fps_text_pane_ParamLimits

0x9e03,	// (0x0009ed45) fps_text_pane

0x9e1a,	// (0x0009ed5c) main_fps_pane_g1_ParamLimits

0x9e1a,	// (0x0009ed5c) main_fps_pane_g1

0x9e34,	// (0x0009ed76) wait_bar_pane_cp010_ParamLimits

0x9e34,	// (0x0009ed76) wait_bar_pane_cp010

0x9e45,	// (0x0009ed87) fps_text_pane_t1_ParamLimits

0x9e45,	// (0x0009ed87) fps_text_pane_t1

0xdacd,	// (0x000a2a0f) cam4_image_uncrop_pane_g1

0xdad6,	// (0x000a2a18) cam4_image_uncrop_pane_g2

0x6cc1,	// (0x0009bc03) cam4_image_uncrop_pane_g3

0x6cca,	// (0x0009bc0c) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x000a4836) cam4_image_uncrop_pane_g

0x9d15,	// (0x0009ec57) dia3_listrow_pane_ParamLimits

0xc97f,	// (0x000a18c1) main_phob2_pane

0x916d,	// (0x0009e0af) cell_tport_appsw_pane_cp02_ParamLimits

0x916d,	// (0x0009e0af) cell_tport_appsw_pane_cp02

0x9181,	// (0x0009e0c3) cell_tport_appsw_pane_cp03_ParamLimits

0x9181,	// (0x0009e0c3) cell_tport_appsw_pane_cp03

0xc97f,	// (0x000a18c1) phob2_contact_card_pane

0xc97f,	// (0x000a18c1) phob2_listscroll_pane

0xc834,	// (0x000a1776) phob2_list_pane

0xc83c,	// (0x000a177e) scroll_pane_cp034

0x9e5d,	// (0x0009ed9f) phob2_cc_data_pane_ParamLimits

0x9e5d,	// (0x0009ed9f) phob2_cc_data_pane

0x9e7c,	// (0x0009edbe) phob2_cc_listscroll_pane_ParamLimits

0x9e7c,	// (0x0009edbe) phob2_cc_listscroll_pane

0xcfb4,	// (0x000a1ef6) list_double_large_graphic_phob2_pane_ParamLimits

0xcfb4,	// (0x000a1ef6) list_double_large_graphic_phob2_pane

0x9e9a,	// (0x0009eddc) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9e9a,	// (0x0009eddc) list_double_large_graphic_phob2_pane_g1

0x9ea7,	// (0x0009ede9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9ea7,	// (0x0009ede9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe5d,	// (0x000a4d9f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe5d,	// (0x000a4d9f) list_double_large_graphic_phob2_pane_g

0x9eb3,	// (0x0009edf5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9eb3,	// (0x0009edf5) list_double_large_graphic_phob2_pane_t1

0x9ec8,	// (0x0009ee0a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9ec8,	// (0x0009ee0a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe62,	// (0x000a4da4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe62,	// (0x000a4da4) list_double_large_graphic_phob2_pane_t

0xc97f,	// (0x000a18c1) list_highlight_pane_cp024

0xc844,	// (0x000a1786) phob2_cc_button_pane

0x9eda,	// (0x0009ee1c) phob2_cc_data_pane_g1_ParamLimits

0x9eda,	// (0x0009ee1c) phob2_cc_data_pane_g1

0x9eef,	// (0x0009ee31) phob2_cc_data_pane_g2_ParamLimits

0x9eef,	// (0x0009ee31) phob2_cc_data_pane_g2

0x0001,

0xfe67,	// (0x000a4da9) phob2_cc_data_pane_g_ParamLimits

0xfe67,	// (0x000a4da9) phob2_cc_data_pane_g

0x9f01,	// (0x0009ee43) phob2_cc_data_pane_t1_ParamLimits

0x9f01,	// (0x0009ee43) phob2_cc_data_pane_t1

0x9f19,	// (0x0009ee5b) phob2_cc_data_pane_t2_ParamLimits

0x9f19,	// (0x0009ee5b) phob2_cc_data_pane_t2

0x9f31,	// (0x0009ee73) phob2_cc_data_pane_t3_ParamLimits

0x9f31,	// (0x0009ee73) phob2_cc_data_pane_t3

0x0002,

0xfe6c,	// (0x000a4dae) phob2_cc_data_pane_t_ParamLimits

0xfe6c,	// (0x000a4dae) phob2_cc_data_pane_t

0xc84c,	// (0x000a178e) phob2_cc_list_pane_ParamLimits

0xc84c,	// (0x000a178e) phob2_cc_list_pane

0xd484,	// (0x000a23c6) scroll_pane_cp035_ParamLimits

0xd484,	// (0x000a23c6) scroll_pane_cp035

0xdabf,	// (0x000a2a01) bg_button_pane_cp033

0xc858,	// (0x000a179a) phob2_cc_button_pane_g1

0xc864,	// (0x000a17a6) phob2_cc_button_pane_t1

0xc879,	// (0x000a17bb) phob2_cc_button_pane_t2

0x0001,

0xfe73,	// (0x000a4db5) phob2_cc_button_pane_t

0x9f4b,	// (0x0009ee8d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9f4b,	// (0x0009ee8d) list_double_large_graphic_phob2_cc_pane

0x9f5f,	// (0x0009eea1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9f5f,	// (0x0009eea1) list_double_large_graphic_phob2_cc_pane_g1

0x9f6b,	// (0x0009eead) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9f6b,	// (0x0009eead) list_double_large_graphic_phob2_cc_pane_g2

0x9f77,	// (0x0009eeb9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9f77,	// (0x0009eeb9) list_double_large_graphic_phob2_cc_pane_g3

0x9f83,	// (0x0009eec5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9f83,	// (0x0009eec5) list_double_large_graphic_phob2_cc_pane_g4

0x9f8f,	// (0x0009eed1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9f8f,	// (0x0009eed1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe78,	// (0x000a4dba) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe78,	// (0x000a4dba) list_double_large_graphic_phob2_cc_pane_g

0x9f9b,	// (0x0009eedd) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9f9b,	// (0x0009eedd) list_double_large_graphic_phob2_cc_pane_t1

0x9fc4,	// (0x0009ef06) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9fc4,	// (0x0009ef06) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe83,	// (0x000a4dc5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe83,	// (0x000a4dc5) list_double_large_graphic_phob2_cc_pane_t

0xc88b,	// (0x000a17cd) list_highlight_pane_cp025_ParamLimits

0xc88b,	// (0x000a17cd) list_highlight_pane_cp025

0xdabf,	// (0x000a2a01) bg_button_pane_cp033_ParamLimits

0xc858,	// (0x000a179a) phob2_cc_button_pane_g1_ParamLimits

0xc864,	// (0x000a17a6) phob2_cc_button_pane_t1_ParamLimits

0xc879,	// (0x000a17bb) phob2_cc_button_pane_t2_ParamLimits

0xfe73,	// (0x000a4db5) phob2_cc_button_pane_t_ParamLimits

0x0c08,	// (0x00095b4a) popup_wgtman_window

0xd096,	// (0x000a1fd8) scroll_pane_cp038

0x9a61,	// (0x0009e9a3) wgtman_btn_pane_cp_01_ParamLimits

0x9a61,	// (0x0009e9a3) wgtman_btn_pane_cp_01

0xc899,	// (0x000a17db) wgtman_content_pane

0xc566,	// (0x000a14a8) wgtman_heading_pane

0xc97f,	// (0x000a18c1) bg_heading_pane_cp02

0xc8a2,	// (0x000a17e4) wgtman_heading_pane_g1

0xc8aa,	// (0x000a17ec) wgtman_heading_pane_t1

0xc8b8,	// (0x000a17fa) scroll_pane_cp036

0xc8c0,	// (0x000a1802) wgtman_list_pane

0xc8c8,	// (0x000a180a) wgtman_list_pane_t1_ParamLimits

0xc8c8,	// (0x000a180a) wgtman_list_pane_t1

0xb63d,	// (0x000a057f) cam4_grid_pane

0x7967,	// (0x0009c8a9) bg_button_pane_cp015_ParamLimits

0x797b,	// (0x0009c8bd) bg_button_pane_cp016_ParamLimits

0x798e,	// (0x0009c8d0) bg_button_pane_cp017_ParamLimits

0x79e6,	// (0x0009c928) popup_vitu2_query_window_g3_ParamLimits

0x79e6,	// (0x0009c928) popup_vitu2_query_window_g3

0x7aa3,	// (0x0009c9e5) popup_vitu2_query_window_t6_ParamLimits

0x7aa3,	// (0x0009c9e5) popup_vitu2_query_window_t6

0x7ace,	// (0x0009ca10) popup_vitu2_query_window_t7_ParamLimits

0x7ace,	// (0x0009ca10) popup_vitu2_query_window_t7

0xdacd,	// (0x000a2a0f) cam4_grid_pane_g1

0xdad6,	// (0x000a2a18) cam4_grid_pane_g2

0xc8e6,	// (0x000a1828) cam4_grid_pane_g3

0xc8ef,	// (0x000a1831) cam4_grid_pane_g4

0x0003,

0xfe88,	// (0x000a4dca) cam4_grid_pane_g

0x185a,	// (0x0009679c) aid_placing_vt_slider_lsc_ParamLimits

0x1b57,	// (0x00096a99) vidtel_button_pane_ParamLimits

0x1b57,	// (0x00096a99) vidtel_button_pane

0xc8fa,	// (0x000a183c) bg_button_pane_cp034

0x9fed,	// (0x0009ef2f) vidtel_button_pane_g1

0xc904,	// (0x000a1846) vidtel_button_pane_t1

0xd198,	// (0x000a20da) aid_size_vtel_slider_touch

0xd484,	// (0x000a23c6) scroll_pane_cp039

0xdb30,	// (0x000a2a72) ncim_query_button_pane_cp01_ParamLimits

0xdb4f,	// (0x000a2a91) ncimui_query_pane_g1_ParamLimits

0xdabf,	// (0x000a2a01) input_focus_pane_cp012_ParamLimits

0xdb74,	// (0x000a2ab6) ncim_query_entry_pane_t1_ParamLimits

0xd484,	// (0x000a23c6) scroll_pane_cp039_ParamLimits

0x29b2,	// (0x000978f4) navi_pane_bcale_mc_g1

0x29ba,	// (0x000978fc) navi_pane_bcale_mc_t1

0xbbfb,	// (0x000a0b3d) main_sp_fs_email_pane_g1

0xbc03,	// (0x000a0b45) main_sp_fs_email_pane_g2

0x0001,

0xfc41,	// (0x000a4b83) main_sp_fs_email_pane_g

0xc166,	// (0x000a10a8) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc166,	// (0x000a10a8) list_single_cale_mrui_row_pane_g3

0x967a,	// (0x0009e5bc) list_single_recal_day_pane_g5_event_pane

0xc32b,	// (0x000a126d) list_single_recal_day_pane_g7

0xc912,	// (0x000a1854) list_recal_day_event_pane_cp01

0xc91b,	// (0x000a185d) list_recal_vselct_arw_lo_pane_cp01

0xc923,	// (0x000a1865) list_recal_vselct_arw_up_pane_cp01

0xc92b,	// (0x000a186d) list_recal_vselct_pane_cp01

0xd1ba,	// (0x000a20fc) list_recal_day_event_pane_cp01_g1

0xc935,	// (0x000a1877) list_recal_day_event_pane_cp01_t1

0xc333,	// (0x000a1275) list_single_recal_day_pane_t1_ParamLimits

0xc345,	// (0x000a1287) list_single_recal_day_pane_t2_ParamLimits

0xfd7b,	// (0x000a4cbd) list_single_recal_day_pane_t_ParamLimits

0xe2ee,	// (0x000a3230) bg_notes_pane_ParamLimits

0xe2fc,	// (0x000a323e) list_notes_pane_ParamLimits

0x0f1a,	// (0x00095e5c) scroll_pane_cp06_ParamLimits

0xe31e,	// (0x000a3260) main_notes_pane_ParamLimits

0xc97f,	// (0x000a18c1) main_welc_pane

0x9ff5,	// (0x0009ef37) main_welc_body_pane_ParamLimits

0x9ff5,	// (0x0009ef37) main_welc_body_pane

0xa012,	// (0x0009ef54) main_welc_opti_pane_ParamLimits

0xa012,	// (0x0009ef54) main_welc_opti_pane

0xa05b,	// (0x0009ef9d) main_welc_pane_t1_ParamLimits

0xa05b,	// (0x0009ef9d) main_welc_pane_t1

0xa07d,	// (0x0009efbf) main_welc_body_row_pane_ParamLimits

0xa07d,	// (0x0009efbf) main_welc_body_row_pane

0xa094,	// (0x0009efd6) main_welc_opti_row_pane_ParamLimits

0xa094,	// (0x0009efd6) main_welc_opti_row_pane

0xc943,	// (0x000a1885) main_welc_opti_row_pane_g1

0xc94b,	// (0x000a188d) main_welc_opti_row_pane_t1

0xc95a,	// (0x000a189c) main_welc_body_row_pane_t1

0xc5e4,	// (0x000a1526) popup_notif_wgt_heading_pane

0xc5fe,	// (0x000a1540) aid_size_list_notif_wgt_del_ParamLimits

0xc60b,	// (0x000a154d) list_notif_wgt_row_pane_g1_ParamLimits

0xc617,	// (0x000a1559) list_notif_wgt_row_pane_g2_ParamLimits

0xc623,	// (0x000a1565) list_notif_wgt_row_pane_g3_ParamLimits

0xfde2,	// (0x000a4d24) list_notif_wgt_row_pane_g_ParamLimits

0xc630,	// (0x000a1572) list_notif_wgt_row_pane_t1_ParamLimits

0xc645,	// (0x000a1587) list_notif_wgt_row_pane_t2_ParamLimits

0xc657,	// (0x000a1599) list_notif_wgt_row_pane_t3_ParamLimits

0xfde9,	// (0x000a4d2b) list_notif_wgt_row_pane_t_ParamLimits

0x9afb,	// (0x0009ea3d) listrow_wgtman_pane_g1_ParamLimits

0x9b08,	// (0x0009ea4a) listrow_wgtman_pane_g2_ParamLimits

0xfe0d,	// (0x000a4d4f) listrow_wgtman_pane_g_ParamLimits

0x9b26,	// (0x0009ea68) listrow_wgtman_pane_t1_ParamLimits

0x9b3e,	// (0x0009ea80) listrow_wgtman_pane_t2_ParamLimits

0xfe12,	// (0x000a4d54) listrow_wgtman_pane_t_ParamLimits

0x9b64,	// (0x0009eaa6) wait_bar_pane_cp09_ParamLimits

0xc97f,	// (0x000a18c1) bg_popup_heading_pane_cp02

0xc969,	// (0x000a18ab) popup_notif_wgt_heading_pane_g1

0xc971,	// (0x000a18b3) popup_notif_wgt_heading_pane_t1

0xc97f,	// (0x000a18c1) main_vids_pane

0xc97f,	// (0x000a18c1) vids_listscroll_pane

0xa0a4,	// (0x0009efe6) scroll_pane_cp040

0xc97f,	// (0x000a18c1) vids_list_pane

0xa0af,	// (0x0009eff1) vids_list_double_pane_ParamLimits

0xa0af,	// (0x0009eff1) vids_list_double_pane

0xa0c0,	// (0x0009f002) vids_list_double_pane_g1

0xa0c9,	// (0x0009f00b) vids_list_double_pane_t1

0xa0d8,	// (0x0009f01a) vids_list_double_pane_t2

0x0001,

0xfe96,	// (0x000a4dd8) vids_list_double_pane_t

0xa156,	// (0x0009f098) main_ncimui_pane_ParamLimits

0x8586,	// (0x0009d4c8) main_ncimui_pane_g1_ParamLimits

0x8592,	// (0x0009d4d4) main_ncimui_pane_g2_ParamLimits

0x8592,	// (0x0009d4d4) main_ncimui_pane_g2

0x0001,

0xfb46,	// (0x000a4a88) main_ncimui_pane_g_ParamLimits

0xfb46,	// (0x000a4a88) main_ncimui_pane_g

0xa031,	// (0x0009ef73) main_welc_pane_g1_ParamLimits

0xa031,	// (0x0009ef73) main_welc_pane_g1

0xa046,	// (0x0009ef88) main_welc_pane_g2_ParamLimits

0xa046,	// (0x0009ef88) main_welc_pane_g2

0x0001,

0xfe91,	// (0x000a4dd3) main_welc_pane_g_ParamLimits

0xfe91,	// (0x000a4dd3) main_welc_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
