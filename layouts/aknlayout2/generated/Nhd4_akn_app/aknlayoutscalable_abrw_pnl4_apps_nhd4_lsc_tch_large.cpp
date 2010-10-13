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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00097b2a };

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
0x09b7,	// (0x000984e1) Screen

0x09c3,	// (0x000984ed) application_window

0x09ff,	// (0x00098529) area_bottom_pane_ParamLimits

0x09ff,	// (0x00098529) area_bottom_pane

0x0a38,	// (0x00098562) area_top_pane_ParamLimits

0x0a38,	// (0x00098562) area_top_pane

0x9db6,	// (0x000a18e0) call_video_uplink_pane_ParamLimits

0x9db6,	// (0x000a18e0) call_video_uplink_pane

0x0ac6,	// (0x000985f0) main_pane_ParamLimits

0x0ac6,	// (0x000985f0) main_pane

0xe490,	// (0x000a5fba) context_pane

0x35c2,	// (0x0009b0ec) navi_pane

0x35f4,	// (0x0009b11e) popup_cale_events_window_ParamLimits

0x35f4,	// (0x0009b11e) popup_cale_events_window

0xe4a3,	// (0x000a5fcd) popup_mup_playback_window

0x360c,	// (0x0009b136) signal_pane

0xc49d,	// (0x000a3fc7) main_browser_pane

0xc6ed,	// (0x000a4217) main_burst_pane

0x3318,	// (0x0009ae42) main_calc_pane

0xe484,	// (0x000a5fae) main_cale_day_pane

0x332c,	// (0x0009ae56) main_cale_month_pane

0xe484,	// (0x000a5fae) main_cale_week_pane

0xc6ed,	// (0x000a4217) main_call_pane

0xc12b,	// (0x000a3c55) main_call_poc_pane

0xc6ed,	// (0x000a4217) main_camera_pane

0xc6ed,	// (0x000a4217) main_chi_dic_pane

0xce94,	// (0x000a49be) main_clock_pane

0xc12b,	// (0x000a3c55) main_fmradio_pane

0xc6ed,	// (0x000a4217) main_graph_messa_pane

0xc12b,	// (0x000a3c55) main_help_pane

0xc49d,	// (0x000a3fc7) main_im_pane

0xc386,	// (0x000a3eb0) main_image_pane_ParamLimits

0xc386,	// (0x000a3eb0) main_image_pane

0xc12b,	// (0x000a3c55) main_location2_pane

0xc6ed,	// (0x000a4217) main_location_pane

0xc386,	// (0x000a3eb0) main_messa_pane

0xc12b,	// (0x000a3c55) main_mp2_pane

0xc6ed,	// (0x000a4217) main_mp_pane

0xc12b,	// (0x000a3c55) main_msg_pane

0xc12b,	// (0x000a3c55) main_mup_eq_pane

0xc12b,	// (0x000a3c55) main_mup_pane

0xc49d,	// (0x000a3fc7) main_notes_pane

0xc12b,	// (0x000a3c55) main_pec_pane

0xc12b,	// (0x000a3c55) main_phob_pane

0xc12b,	// (0x000a3c55) main_pinb_pane

0xc12b,	// (0x000a3c55) main_postcard_pane

0xc12b,	// (0x000a3c55) main_qdial_pane

0xc6ed,	// (0x000a4217) main_skin_pane

0xc12b,	// (0x000a3c55) main_smil2_pane

0xc6ed,	// (0x000a4217) main_smil_pane

0xc6ed,	// (0x000a4217) main_video_pane

0xc6ed,	// (0x000a4217) main_video_tele_pane

0xc386,	// (0x000a3eb0) main_viewer_pane_ParamLimits

0xc386,	// (0x000a3eb0) main_viewer_pane

0xc6ed,	// (0x000a4217) main_vorec_pane

0x337e,	// (0x0009aea8) popup_blid_sat_info_window_ParamLimits

0x337e,	// (0x0009aea8) popup_blid_sat_info_window

0x33d6,	// (0x0009af00) popup_dyc_status_message_window_ParamLimits

0x33d6,	// (0x0009af00) popup_dyc_status_message_window

0x33ee,	// (0x0009af18) popup_grid_large_graphic_window_ParamLimits

0x33ee,	// (0x0009af18) popup_grid_large_graphic_window

0x349e,	// (0x0009afc8) popup_loc_request_window_ParamLimits

0x349e,	// (0x0009afc8) popup_loc_request_window

0x359a,	// (0x0009b0c4) popup_wml_address_window_ParamLimits

0x359a,	// (0x0009b0c4) popup_wml_address_window

0x3152,	// (0x0009ac7c) call_muted_g1

0x2e47,	// (0x0009a971) popup_call_audio_conf_window_ParamLimits

0x2e47,	// (0x0009a971) popup_call_audio_conf_window

0x3166,	// (0x0009ac90) popup_call_audio_first_window_ParamLimits

0x3166,	// (0x0009ac90) popup_call_audio_first_window

0x31dc,	// (0x0009ad06) popup_call_audio_in_window_ParamLimits

0x31dc,	// (0x0009ad06) popup_call_audio_in_window

0x3218,	// (0x0009ad42) popup_call_audio_out_window_ParamLimits

0x3218,	// (0x0009ad42) popup_call_audio_out_window

0x3252,	// (0x0009ad7c) popup_call_audio_second_window_ParamLimits

0x3252,	// (0x0009ad7c) popup_call_audio_second_window

0x32a8,	// (0x0009add2) popup_call_audio_wait_window_ParamLimits

0x32a8,	// (0x0009add2) popup_call_audio_wait_window

0x32dd,	// (0x0009ae07) popup_number_entry_window_ParamLimits

0x32dd,	// (0x0009ae07) popup_number_entry_window

0xaa53,	// (0x000a257d) bg_popup_call_pane_cp05_ParamLimits

0xaa53,	// (0x000a257d) bg_popup_call_pane_cp05

0xbb51,	// (0x000a367b) popup_number_entry_window_t1

0xbb64,	// (0x000a368e) popup_number_entry_window_t2

0xbb76,	// (0x000a36a0) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x000a6b6a) popup_number_entry_window_t

0xbb88,	// (0x000a36b2) text_title_cp2

0xbb9b,	// (0x000a36c5) bg_popup_call_pane_cp_ParamLimits

0xbb9b,	// (0x000a36c5) bg_popup_call_pane_cp

0xbba9,	// (0x000a36d3) call_thumbnail_pane

0xbbb1,	// (0x000a36db) popup_call_audio_in_window_g1_ParamLimits

0xbbb1,	// (0x000a36db) popup_call_audio_in_window_g1

0xbbbd,	// (0x000a36e7) popup_call_audio_in_window_g2_ParamLimits

0xbbbd,	// (0x000a36e7) popup_call_audio_in_window_g2

0xbbc9,	// (0x000a36f3) popup_call_audio_in_window_g3_ParamLimits

0xbbc9,	// (0x000a36f3) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x000a6b73) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x000a6b73) popup_call_audio_in_window_g

0xbbd5,	// (0x000a36ff) popup_call_audio_in_window_t1_ParamLimits

0xbbd5,	// (0x000a36ff) popup_call_audio_in_window_t1

0xbbf1,	// (0x000a371b) popup_call_audio_in_window_t2_ParamLimits

0xbbf1,	// (0x000a371b) popup_call_audio_in_window_t2

0xbc0d,	// (0x000a3737) popup_call_audio_in_window_t3_ParamLimits

0xbc0d,	// (0x000a3737) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x000a6b7a) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x000a6b7a) popup_call_audio_in_window_t

0xbb9b,	// (0x000a36c5) bg_popup_call_pane_cp01_ParamLimits

0xbb9b,	// (0x000a36c5) bg_popup_call_pane_cp01

0xbba9,	// (0x000a36d3) call_thumbnail_pane_cp02

0xbc20,	// (0x000a374a) call_type_pane_cp022

0xbc28,	// (0x000a3752) popup_call_audio_out_window_g1_ParamLimits

0xbc28,	// (0x000a3752) popup_call_audio_out_window_g1

0xbc3a,	// (0x000a3764) popup_call_audio_out_window_g2_ParamLimits

0xbc3a,	// (0x000a3764) popup_call_audio_out_window_g2

0xbc46,	// (0x000a3770) popup_call_audio_out_window_g3_ParamLimits

0xbc46,	// (0x000a3770) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x000a6b81) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x000a6b81) popup_call_audio_out_window_g

0xbc58,	// (0x000a3782) popup_call_audio_out_window_t1_ParamLimits

0xbc58,	// (0x000a3782) popup_call_audio_out_window_t1

0xbc70,	// (0x000a379a) popup_call_audio_out_window_t2_ParamLimits

0xbc70,	// (0x000a379a) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x000a6b88) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x000a6b88) popup_call_audio_out_window_t

0xbc85,	// (0x000a37af) bg_popup_call_pane_ParamLimits

0xbc85,	// (0x000a37af) bg_popup_call_pane

0x0c82,	// (0x000987ac) call_thumbnail_pane_cp_ParamLimits

0x0c82,	// (0x000987ac) call_thumbnail_pane_cp

0xbd09,	// (0x000a3833) call_type_pane_cp01_ParamLimits

0xbd09,	// (0x000a3833) call_type_pane_cp01

0xbd4d,	// (0x000a3877) popup_call_audio_first_window_g1_ParamLimits

0xbd4d,	// (0x000a3877) popup_call_audio_first_window_g1

0xbd99,	// (0x000a38c3) popup_call_audio_first_window_g2_ParamLimits

0xbd99,	// (0x000a38c3) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x000a6b8d) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x000a6b8d) popup_call_audio_first_window_g

0xbddd,	// (0x000a3907) popup_call_audio_first_window_t1_ParamLimits

0xbddd,	// (0x000a3907) popup_call_audio_first_window_t1

0xbe89,	// (0x000a39b3) popup_call_audio_first_window_t4_ParamLimits

0xbe89,	// (0x000a39b3) popup_call_audio_first_window_t4

0xc0fc,	// (0x000a3c26) popup_call_audio_first_window_t5_ParamLimits

0xc0fc,	// (0x000a3c26) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x000a6b92) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x000a6b92) popup_call_audio_first_window_t

0xc12b,	// (0x000a3c55) bg_popup_call_pane_cp02

0xc135,	// (0x000a3c5f) call_type_pane_cp023

0xc13d,	// (0x000a3c67) popup_call_audio_wait_window_g1

0xc145,	// (0x000a3c6f) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x000a6b99) popup_call_audio_wait_window_g

0xc14d,	// (0x000a3c77) popup_call_audio_wait_window_t3

0xc15b,	// (0x000a3c85) bg_popup_call_pane_cp03_ParamLimits

0xc15b,	// (0x000a3c85) bg_popup_call_pane_cp03

0xc1bb,	// (0x000a3ce5) call_thumbnail_pane_cp011_ParamLimits

0xc1bb,	// (0x000a3ce5) call_thumbnail_pane_cp011

0xc1c7,	// (0x000a3cf1) call_type_pane_cp034_ParamLimits

0xc1c7,	// (0x000a3cf1) call_type_pane_cp034

0xc203,	// (0x000a3d2d) popup_call_audio_second_window_g1_ParamLimits

0xc203,	// (0x000a3d2d) popup_call_audio_second_window_g1

0xc23f,	// (0x000a3d69) popup_call_audio_second_window_g2_ParamLimits

0xc23f,	// (0x000a3d69) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x000a6b9e) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x000a6b9e) popup_call_audio_second_window_g

0xc27b,	// (0x000a3da5) popup_call_audio_second_window_t1_ParamLimits

0xc27b,	// (0x000a3da5) popup_call_audio_second_window_t1

0xc2fc,	// (0x000a3e26) popup_call_audio_second_window_t2_ParamLimits

0xc2fc,	// (0x000a3e26) popup_call_audio_second_window_t2

0xc332,	// (0x000a3e5c) popup_call_audio_second_window_t3_ParamLimits

0xc332,	// (0x000a3e5c) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x000a6ba3) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x000a6ba3) popup_call_audio_second_window_t

0xc12b,	// (0x000a3c55) bg_popup_call_pane_cp04

0xc368,	// (0x000a3e92) list_conf_pane

0xc370,	// (0x000a3e9a) popup_call_audio_conf_window_t1

0xc37e,	// (0x000a3ea8) call_thumbnail_pane_g1

0xc386,	// (0x000a3eb0) bg_pinb_pane_ParamLimits

0xc386,	// (0x000a3eb0) bg_pinb_pane

0xc394,	// (0x000a3ebe) find_pinb_pane

0xc386,	// (0x000a3eb0) listscroll_pinb_pane_ParamLimits

0xc386,	// (0x000a3eb0) listscroll_pinb_pane

0xc39e,	// (0x000a3ec8) pinb_bg_pane_g1

0xc39e,	// (0x000a3ec8) pinb_bg_pane_g2

0xc39e,	// (0x000a3ec8) pinb_bg_pane_g3

0xc39e,	// (0x000a3ec8) pinb_bg_pane_g4

0xc39e,	// (0x000a3ec8) pinb_bg_pane_g5

0xc39e,	// (0x000a3ec8) pinb_bg_pane_g6

0xc39e,	// (0x000a3ec8) pinb_bg_pane_g7

0xc39e,	// (0x000a3ec8) pinb_bg_pane_g8

0xc39e,	// (0x000a3ec8) pinb_bg_pane_g9

0xc39e,	// (0x000a3ec8) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x000a6baa) pinb_bg_pane_g

0xaa49,	// (0x000a2573) grid_pinb_pane

0xaa49,	// (0x000a2573) list_pinb_pane

0xbf15,	// (0x000a3a3f) scroll_pane_cp01_ParamLimits

0xbf15,	// (0x000a3a3f) scroll_pane_cp01

0xc3a8,	// (0x000a3ed2) find_pinb_pane_g1_ParamLimits

0xc3a8,	// (0x000a3ed2) find_pinb_pane_g1

0xc3c0,	// (0x000a3eea) find_pinb_pane_t1

0xc3d2,	// (0x000a3efc) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x000a6bc4) find_pinb_pane_t

0xc3e7,	// (0x000a3f11) input_focus_pane_cp01_ParamLimits

0xc3e7,	// (0x000a3f11) input_focus_pane_cp01

0xc3f3,	// (0x000a3f1d) cell_pinb_pane_ParamLimits

0xc3f3,	// (0x000a3f1d) cell_pinb_pane

0xc401,	// (0x000a3f2b) cell_pinb_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) cell_pinb_pane_g1

0xc40f,	// (0x000a3f39) cell_pinb_pane_g2_ParamLimits

0xc40f,	// (0x000a3f39) cell_pinb_pane_g2

0xc40f,	// (0x000a3f39) cell_pinb_pane_g3_ParamLimits

0xc40f,	// (0x000a3f39) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x000a6bc9) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x000a6bc9) cell_pinb_pane_g

0xc12b,	// (0x000a3c55) grid_highlight_pane_cp01

0xc3f3,	// (0x000a3f1d) list_pinb_item_pane_ParamLimits

0xc3f3,	// (0x000a3f1d) list_pinb_item_pane

0xaa49,	// (0x000a2573) list_highlight_pane_cp02

0xc41d,	// (0x000a3f47) list_pinb_item_pane_g1_ParamLimits

0xc41d,	// (0x000a3f47) list_pinb_item_pane_g1

0xc40f,	// (0x000a3f39) list_pinb_item_pane_g2_ParamLimits

0xc40f,	// (0x000a3f39) list_pinb_item_pane_g2

0xc401,	// (0x000a3f2b) list_pinb_item_pane_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_pinb_item_pane_g3

0xc40f,	// (0x000a3f39) list_pinb_item_pane_g4_ParamLimits

0xc40f,	// (0x000a3f39) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x000a6bd0) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x000a6bd0) list_pinb_item_pane_g

0xc42b,	// (0x000a3f55) list_pinb_item_pane_t1_ParamLimits

0xc42b,	// (0x000a3f55) list_pinb_item_pane_t1

0x0cc4,	// (0x000987ee) calc_display_pane

0x0ce9,	// (0x00098813) calc_paper_pane

0x0d0c,	// (0x00098836) grid_calc_pane

0xaa49,	// (0x000a2573) bg_list_pane_cp01

0xc43f,	// (0x000a3f69) clock_g1

0xc43f,	// (0x000a3f69) clock_g2

0x0001,

0xf0af,	// (0x000a6bd9) clock_g

0xc449,	// (0x000a3f73) clock_t1_ParamLimits

0xc449,	// (0x000a3f73) clock_t1

0xc45d,	// (0x000a3f87) clock_t2_ParamLimits

0xc45d,	// (0x000a3f87) clock_t2

0xc45d,	// (0x000a3f87) clock_t3_ParamLimits

0xc45d,	// (0x000a3f87) clock_t3

0xc45d,	// (0x000a3f87) clock_t4_ParamLimits

0xc45d,	// (0x000a3f87) clock_t4

0xc449,	// (0x000a3f73) clock_t5_ParamLimits

0xc449,	// (0x000a3f73) clock_t5

0xc45d,	// (0x000a3f87) clock_t6_ParamLimits

0xc45d,	// (0x000a3f87) clock_t6

0xc45d,	// (0x000a3f87) clock_t7_ParamLimits

0xc45d,	// (0x000a3f87) clock_t7

0xc45d,	// (0x000a3f87) clock_t8_ParamLimits

0xc45d,	// (0x000a3f87) clock_t8

0xc45d,	// (0x000a3f87) clock_t9_ParamLimits

0xc45d,	// (0x000a3f87) clock_t9

0x0008,

0xf0b4,	// (0x000a6bde) clock_t_ParamLimits

0xf0b4,	// (0x000a6bde) clock_t

0xaa49,	// (0x000a2573) popup_clock_analogue_window_cp02

0xaa49,	// (0x000a2573) popup_clock_digital_window_cp01

0xc12b,	// (0x000a3c55) listscroll_help_pane

0xc12b,	// (0x000a3c55) phob_pre_status_pane

0xc471,	// (0x000a3f9b) grid_qdial_pane

0xc386,	// (0x000a3eb0) listscroll_mce_pane

0xc386,	// (0x000a3eb0) bg_notes_pane

0xc47b,	// (0x000a3fa5) list_notes_pane

0x0d3a,	// (0x00098864) scroll_pane_cp06

0xc489,	// (0x000a3fb3) bg_calc_paper_pane

0x9df4,	// (0x000a191e) list_calc_pane

0xc49d,	// (0x000a3fc7) bg_calc_display_pane

0x0d4e,	// (0x00098878) calc_display_pane_t1

0x0d60,	// (0x0009888a) calc_display_pane_t2

0x9e0e,	// (0x000a1938) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x000a6bf1) calc_display_pane_t

0x0d72,	// (0x0009889c) cell_calc_pane_ParamLimits

0x0d72,	// (0x0009889c) cell_calc_pane

0xc4a9,	// (0x000a3fd3) bg_calc_paper_pane_g1

0xc4b5,	// (0x000a3fdf) bg_calc_paper_pane_g2

0xc4c1,	// (0x000a3feb) bg_calc_paper_pane_g3

0xc4cd,	// (0x000a3ff7) bg_calc_paper_pane_g4

0xc4d9,	// (0x000a4003) bg_calc_paper_pane_g5

0x0da7,	// (0x000988d1) bg_calc_paper_pane_g6

0x0db6,	// (0x000988e0) bg_calc_paper_pane_g7

0x0dc5,	// (0x000988ef) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x000a6bf8) bg_calc_paper_pane_g

0x0dd8,	// (0x00098902) calc_bg_paper_pane_g9

0x0deb,	// (0x00098915) list_calc_item_pane_ParamLimits

0x0deb,	// (0x00098915) list_calc_item_pane

0xc4e5,	// (0x000a400f) list_calc_item_pane_g1

0x9e20,	// (0x000a194a) list_calc_item_pane_t1_ParamLimits

0x9e20,	// (0x000a194a) list_calc_item_pane_t1

0x0e00,	// (0x0009892a) list_calc_item_pane_t2_ParamLimits

0x0e00,	// (0x0009892a) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x000a6c09) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x000a6c09) list_calc_item_pane_t

0xc39e,	// (0x000a3ec8) cell_calc_pane_g1

0xc4f2,	// (0x000a401c) grid_highlight_pane_cp02

0x0e32,	// (0x0009895c) bg_calc_display_pane_g1

0x0e3b,	// (0x00098965) bg_calc_display_pane_g2

0xc514,	// (0x000a403e) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x000a6c13) bg_calc_display_pane_g

0x0e45,	// (0x0009896f) cell_qdial_pane_ParamLimits

0x0e45,	// (0x0009896f) cell_qdial_pane

0x0e59,	// (0x00098983) cell_qdial_pane_g1_ParamLimits

0x0e59,	// (0x00098983) cell_qdial_pane_g1

0x0e6f,	// (0x00098999) cell_qdial_pane_g2_ParamLimits

0x0e6f,	// (0x00098999) cell_qdial_pane_g2

0xc51d,	// (0x000a4047) cell_qdial_pane_g3_ParamLimits

0xc51d,	// (0x000a4047) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x000a6c1a) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x000a6c1a) cell_qdial_pane_g

0x0e95,	// (0x000989bf) cell_qdial_pane_t1_ParamLimits

0x0e95,	// (0x000989bf) cell_qdial_pane_t1

0x0ead,	// (0x000989d7) cell_qdial_pane_t2_ParamLimits

0x0ead,	// (0x000989d7) cell_qdial_pane_t2

0x0ec0,	// (0x000989ea) cell_qdial_pane_t3_ParamLimits

0x0ec0,	// (0x000989ea) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x000a6c23) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x000a6c23) cell_qdial_pane_t

0xc12b,	// (0x000a3c55) grid_highlight_pane_cp04

0xc529,	// (0x000a4053) thumbnail_qdial_pane_ParamLimits

0xc529,	// (0x000a4053) thumbnail_qdial_pane

0xc585,	// (0x000a40af) list_help_pane

0xc58e,	// (0x000a40b8) scroll_pane_cp02

0x0ed3,	// (0x000989fd) help_list_pane_t1_ParamLimits

0x0ed3,	// (0x000989fd) help_list_pane_t1

0x9e32,	// (0x000a195c) bg_notes_pane_g2

0x9e3a,	// (0x000a1964) bg_notes_pane_g3

0x9e42,	// (0x000a196c) notes_bg_pane_g1

0x9e4a,	// (0x000a1974) notes_bg_pane_g4

0x9e52,	// (0x000a197c) notes_bg_pane_g5

0x9e5a,	// (0x000a1984) notes_bg_pane_g6

0x9e62,	// (0x000a198c) notes_bg_pane_g7

0x9e6a,	// (0x000a1994) notes_bg_pane_g8

0x9e72,	// (0x000a199c) notes_bg_pane_g9

0x0006,

0xf117,	// (0x000a6c41) notes_bg_pane_g

0x0ef2,	// (0x00098a1c) list_notes_text_pane_ParamLimits

0x0ef2,	// (0x00098a1c) list_notes_text_pane

0xc597,	// (0x000a40c1) list_notes_text_pane_g1

0xc5a0,	// (0x000a40ca) list_notes_text_pane_t1

0x0f08,	// (0x00098a32) listscroll_cale_week_pane

0x0f34,	// (0x00098a5e) bg_cale_heading_pane

0xc5c8,	// (0x000a40f2) bg_cale_pane_cp01

0x0f4c,	// (0x00098a76) cale_week_corner_pane

0x0f6b,	// (0x00098a95) cale_week_day_heading_pane

0x0f88,	// (0x00098ab2) cale_week_scroll_pane_g1

0x0f9b,	// (0x00098ac5) cale_week_scroll_pane_g2

0x0fb3,	// (0x00098add) cale_week_scroll_pane_g3

0x0fcb,	// (0x00098af5) cale_week_scroll_pane_g4

0x0fe3,	// (0x00098b0d) cale_week_scroll_pane_g5

0x1003,	// (0x00098b2d) cale_week_scroll_pane_g6

0x1023,	// (0x00098b4d) cale_week_scroll_pane_g7

0x1043,	// (0x00098b6d) cale_week_scroll_pane_g8

0x1067,	// (0x00098b91) cale_week_scroll_pane_g9

0x107f,	// (0x00098ba9) cale_week_scroll_pane_g10

0x1097,	// (0x00098bc1) cale_week_scroll_pane_g11

0x10af,	// (0x00098bd9) cale_week_scroll_pane_g12

0x10c7,	// (0x00098bf1) cale_week_scroll_pane_g13

0x10c7,	// (0x00098bf1) cale_week_scroll_pane_g14

0x10c7,	// (0x00098bf1) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x000a6c50) cale_week_scroll_pane_g

0x1103,	// (0x00098c2d) cale_week_time_pane

0x1127,	// (0x00098c51) grid_cale_week_pane

0xc5f7,	// (0x000a4121) scroll_pane_cp08

0x114d,	// (0x00098c77) cell_cale_week_pane_ParamLimits

0x114d,	// (0x00098c77) cell_cale_week_pane

0x11db,	// (0x00098d05) cale_week_day_heading_pane_t1

0x1205,	// (0x00098d2f) cale_week_day_heading_pane_t2

0x1234,	// (0x00098d5e) cale_week_day_heading_pane_t3

0x1263,	// (0x00098d8d) cale_week_day_heading_pane_t4

0x1292,	// (0x00098dbc) cale_week_day_heading_pane_t5

0x12c9,	// (0x00098df3) cale_week_day_heading_pane_t6

0x1300,	// (0x00098e2a) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x000a6c71) cale_week_day_heading_pane_t

0xc614,	// (0x000a413e) bg_cale_side_pane

0x132a,	// (0x00098e54) cale_week_time_pane_t1

0x1344,	// (0x00098e6e) cale_week_time_pane_t2

0x135e,	// (0x00098e88) cale_week_time_pane_t3

0x1378,	// (0x00098ea2) cale_week_time_pane_t4

0x1392,	// (0x00098ebc) cale_week_time_pane_t5

0x13ac,	// (0x00098ed6) cale_week_time_pane_t6

0x13c6,	// (0x00098ef0) cale_week_time_pane_t7

0x13e0,	// (0x00098f0a) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x000a6c80) cale_week_time_pane_t

0x1400,	// (0x00098f2a) cell_cale_week_pane_g2

0x1424,	// (0x00098f4e) cell_cale_week_pane_g3_ParamLimits

0x1424,	// (0x00098f4e) cell_cale_week_pane_g3

0xc6a9,	// (0x000a41d3) grid_highlight_pane_cp07

0xc6b1,	// (0x000a41db) listscroll_gms_pane

0xc6bb,	// (0x000a41e5) grid_gms_pane

0xc6c4,	// (0x000a41ee) listscroll_gms_pane_g1

0xc6cc,	// (0x000a41f6) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x000a6c91) listscroll_gms_pane_g

0x143c,	// (0x00098f66) scroll_pane_cp010

0x1447,	// (0x00098f71) cell_gms_pane_ParamLimits

0x1447,	// (0x00098f71) cell_gms_pane

0x1459,	// (0x00098f83) cell_gms_pane_g1

0xc6d4,	// (0x000a41fe) cell_gms_pane_g2

0xc597,	// (0x000a40c1) cell_gms_pane_g3

0xc6dc,	// (0x000a4206) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x000a6c96) cell_gms_pane_g

0xc6e5,	// (0x000a420f) grid_highlight_pane_cp09

0x30da,	// (0x0009ac04) phob_pre_status_pane_g1

0x30e2,	// (0x0009ac0c) phob_pre_status_pane_g2

0x30ea,	// (0x0009ac14) phob_pre_status_pane_g3

0x30f2,	// (0x0009ac1c) phob_pre_status_pane_g4

0x0004,

0xf52e,	// (0x000a7058) phob_pre_status_pane_g

0x3102,	// (0x0009ac2c) phob_pre_status_pane_t1

0x3110,	// (0x0009ac3a) phob_pre_status_pane_t2

0x3120,	// (0x0009ac4a) phob_pre_status_pane_t3

0x0002,

0xf539,	// (0x000a7063) phob_pre_status_pane_t

0xc6ed,	// (0x000a4217) bg_list_pane_cp05

0x1469,	// (0x00098f93) grid_vorec_pane

0x1471,	// (0x00098f9b) vorec_t1

0x147f,	// (0x00098fa9) vorec_t2

0x148d,	// (0x00098fb7) vorec_t3

0x149b,	// (0x00098fc5) vorec_t4

0xaa3b,	// (0x000a2565) vorec_t5

0x8b02,	// (0x000a062c) vorec_t6

0x0004,

0xf175,	// (0x000a6c9f) vorec_t

0x8b10,	// (0x000a063a) wait_bar_pane_cp01

0x14b7,	// (0x00098fe1) cell_vorec_pane_ParamLimits

0x14b7,	// (0x00098fe1) cell_vorec_pane

0x9e7a,	// (0x000a19a4) cell_vorec_pane_g1

0xc12b,	// (0x000a3c55) grid_highlight_pane_cp05

0xbf15,	// (0x000a3a3f) cams_zoom_pane

0xbf15,	// (0x000a3a3f) image_vga_pane

0xc401,	// (0x000a3f2b) main_camera_pane_g1

0xc401,	// (0x000a3f2b) main_camera_pane_g2

0xc401,	// (0x000a3f2b) main_camera_pane_g3

0xc401,	// (0x000a3f2b) main_camera_pane_g4

0xc401,	// (0x000a3f2b) main_camera_pane_g5

0xc401,	// (0x000a3f2b) main_camera_pane_g6

0xc401,	// (0x000a3f2b) main_camera_pane_g7

0x0007,

0xf180,	// (0x000a6caa) main_camera_pane_g

0xc449,	// (0x000a3f73) main_camera_pane_t1

0xc449,	// (0x000a3f73) main_camera_pane_t2

0x0001,

0xf191,	// (0x000a6cbb) main_camera_pane_t

0x14de,	// (0x00099008) cams_zoom_pane_cp_ParamLimits

0x14de,	// (0x00099008) cams_zoom_pane_cp

0x1512,	// (0x0009903c) image_cif_pane_ParamLimits

0x1512,	// (0x0009903c) image_cif_pane

0xaa49,	// (0x000a2573) image_subqcif_pane

0x1524,	// (0x0009904e) main_video_pane_g1_ParamLimits

0x1524,	// (0x0009904e) main_video_pane_g1

0x1552,	// (0x0009907c) main_video_pane_g2_ParamLimits

0x1552,	// (0x0009907c) main_video_pane_g2

0x158c,	// (0x000990b6) main_video_pane_g3_ParamLimits

0x158c,	// (0x000990b6) main_video_pane_g3

0x158c,	// (0x000990b6) main_video_pane_g4_ParamLimits

0x158c,	// (0x000990b6) main_video_pane_g4

0x15c0,	// (0x000990ea) main_video_pane_g5_ParamLimits

0x15c0,	// (0x000990ea) main_video_pane_g5

0xc6f5,	// (0x000a421f) main_video_pane_g6_ParamLimits

0xc6f5,	// (0x000a421f) main_video_pane_g6

0x0006,

0xf196,	// (0x000a6cc0) main_video_pane_g_ParamLimits

0xf196,	// (0x000a6cc0) main_video_pane_g

0x15dc,	// (0x00099106) main_video_pane_t1_ParamLimits

0x15dc,	// (0x00099106) main_video_pane_t1

0xc43f,	// (0x000a3f69) cams_zoom_pane_g1

0xc43f,	// (0x000a3f69) cams_zoom_pane_g2

0xc43f,	// (0x000a3f69) cams_zoom_pane_g3

0xc43f,	// (0x000a3f69) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x000a6ccf) cams_zoom_pane_g

0xbf15,	// (0x000a3a3f) grid_cams_pane

0xbf15,	// (0x000a3a3f) linegrid_cams_pane

0x1620,	// (0x0009914a) cell_cams_pane_ParamLimits

0x1620,	// (0x0009914a) cell_cams_pane

0xaa49,	// (0x000a2573) cams_burst_image_pane

0xc43f,	// (0x000a3f69) cell_cams_pane_g1

0xaa49,	// (0x000a2573) grid_highlight_pane_cp03

0xc39e,	// (0x000a3ec8) mp_bg_pane_g1

0xaa49,	// (0x000a2573) bg_list_pane_cp03

0xaa49,	// (0x000a2573) bg_mp_pane

0xaa49,	// (0x000a2573) grid_mp_pane

0xc43f,	// (0x000a3f69) media_player_g1

0xcc1c,	// (0x000a4746) media_player_t1

0xcc1c,	// (0x000a4746) media_player_t2

0xcc1c,	// (0x000a4746) media_player_t3

0xcc1c,	// (0x000a4746) media_player_t4

0xcc1c,	// (0x000a4746) media_player_t5

0xcc1c,	// (0x000a4746) media_player_t6

0xcc1c,	// (0x000a4746) media_player_t7

0x0006,

0xf518,	// (0x000a7042) media_player_t

0xaa49,	// (0x000a2573) wait_bar_pane_cp02

0xf4fd,	// (0x000a7027) main_usb_pane_t

0xce94,	// (0x000a49be) cell_mp_pane

0xc39e,	// (0x000a3ec8) cell_mp_pane_g1

0xc12b,	// (0x000a3c55) grid_highlight_pane_cp06

0xc70f,	// (0x000a4239) grid_skin_colour_pane

0xc717,	// (0x000a4241) list_highlight_pane_cp03

0x1635,	// (0x0009915f) skin_g1

0xc71f,	// (0x000a4249) skin_t1

0xc72e,	// (0x000a4258) skin_t2

0x0001,

0xf1d3,	// (0x000a6cfd) skin_t

0x163d,	// (0x00099167) cell_skin_colour_pane_ParamLimits

0x163d,	// (0x00099167) cell_skin_colour_pane

0xc73c,	// (0x000a4266) cell_skin_colour_pane_g1

0x16b6,	// (0x000991e0) call_video_g1_ParamLimits

0x16b6,	// (0x000991e0) call_video_g1

0x16d2,	// (0x000991fc) call_video_g2_ParamLimits

0x16d2,	// (0x000991fc) call_video_g2

0x0001,

0xf1d8,	// (0x000a6d02) call_video_g_ParamLimits

0xf1d8,	// (0x000a6d02) call_video_g

0x1724,	// (0x0009924e) call_video_uplink_pane_cp1_ParamLimits

0x1724,	// (0x0009924e) call_video_uplink_pane_cp1

0xc74e,	// (0x000a4278) call_video_uplink_pane_cp2

0x17c3,	// (0x000992ed) video_down_crop_pane_ParamLimits

0x17c3,	// (0x000992ed) video_down_crop_pane

0x18ac,	// (0x000993d6) video_down_pane_ParamLimits

0x18ac,	// (0x000993d6) video_down_pane

0xc756,	// (0x000a4280) video_down_subqcif_pane_ParamLimits

0xc756,	// (0x000a4280) video_down_subqcif_pane

0xc76e,	// (0x000a4298) video_down_subqcif_pane_cp_ParamLimits

0xc76e,	// (0x000a4298) video_down_subqcif_pane_cp

0xc794,	// (0x000a42be) im_reading_pane_ParamLimits

0xc794,	// (0x000a42be) im_reading_pane

0x19bc,	// (0x000994e6) im_writing_pane_ParamLimits

0x19bc,	// (0x000994e6) im_writing_pane

0x19d2,	// (0x000994fc) im_reading_pane_t1

0xc7ae,	// (0x000a42d8) list_im_pane

0xc7bf,	// (0x000a42e9) scroll_pane_cp07

0x1a0c,	// (0x00099536) im_writing_pane_t1_ParamLimits

0x1a0c,	// (0x00099536) im_writing_pane_t1

0xc7d8,	// (0x000a4302) im_writing_pane_t2_ParamLimits

0xc7d8,	// (0x000a4302) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x000a6d0c) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x000a6d0c) im_writing_pane_t

0xc12b,	// (0x000a3c55) input_focus_pane_cp04

0xc12b,	// (0x000a3c55) input_focus_pane_cp05

0x1a21,	// (0x0009954b) list_im_single_pane_ParamLimits

0x1a21,	// (0x0009954b) list_im_single_pane

0x1a36,	// (0x00099560) list_single_im_pane_t1

0xc6ed,	// (0x000a4217) blid_accuracy_pane

0xc6ed,	// (0x000a4217) blid_compass_pane

0xe43c,	// (0x000a5f66) main_location_t1

0xe43c,	// (0x000a5f66) main_location_t2

0xe43c,	// (0x000a5f66) main_location_t3

0x0002,

0xf527,	// (0x000a7051) main_location_t

0xc12b,	// (0x000a3c55) aid_levels_location

0xc39e,	// (0x000a3ec8) blid_accuracy_pane_g1

0xc39e,	// (0x000a3ec8) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x000a6d5b) blid_accuracy_pane_g

0xc820,	// (0x000a434a) wml_content_pane

0xc85e,	// (0x000a4388) wml_button_pane_ParamLimits

0xc85e,	// (0x000a4388) wml_button_pane

0x1a45,	// (0x0009956f) wml_list_single_large_pane_ParamLimits

0x1a45,	// (0x0009956f) wml_list_single_large_pane

0x1a5a,	// (0x00099584) wml_list_single_medium_pane_ParamLimits

0x1a5a,	// (0x00099584) wml_list_single_medium_pane

0x1a71,	// (0x0009959b) wml_list_single_small_pane_ParamLimits

0x1a71,	// (0x0009959b) wml_list_single_small_pane

0xc872,	// (0x000a439c) wml_selection_box_pane_ParamLimits

0xc872,	// (0x000a439c) wml_selection_box_pane

0xc885,	// (0x000a43af) wml_list_single_pane_t1

0xc894,	// (0x000a43be) wml_list_single_medium_pane_t1

0xc8a3,	// (0x000a43cd) wml_list_single_large_pane_t1

0xc8b2,	// (0x000a43dc) input_focus_pane_cp02_ParamLimits

0xc8b2,	// (0x000a43dc) input_focus_pane_cp02

0xc8c5,	// (0x000a43ef) wml_selection_box_pane_g1

0xc8ce,	// (0x000a43f8) wml_selection_box_pane_t1_ParamLimits

0xc8ce,	// (0x000a43f8) wml_selection_box_pane_t1

0xc386,	// (0x000a3eb0) bg_wml_button_pane_ParamLimits

0xc386,	// (0x000a3eb0) bg_wml_button_pane

0xc8e6,	// (0x000a4410) wml_button_pane_g1

0xc8ee,	// (0x000a4418) wml_button_pane_t1

0xc8e6,	// (0x000a4410) wml_button_bg_pane_g1

0xc8fe,	// (0x000a4428) wml_button_bg_pane_g2

0xc906,	// (0x000a4430) wml_button_bg_pane_g3

0xc90e,	// (0x000a4438) wml_button_bg_pane_g4

0xc916,	// (0x000a4440) wml_button_bg_pane_g5

0xc91e,	// (0x000a4448) wml_button_bg_pane_g6

0xc926,	// (0x000a4450) wml_button_bg_pane_g7

0xc92e,	// (0x000a4458) wml_button_bg_pane_g8

0xc936,	// (0x000a4460) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x000a6d11) wml_button_bg_pane_g

0x1a8a,	// (0x000995b4) bg_list_pane_cp02

0xc93e,	// (0x000a4468) mce_header_pane_ParamLimits

0xc93e,	// (0x000a4468) mce_header_pane

0xc954,	// (0x000a447e) mce_icon_pane

0xc954,	// (0x000a447e) mce_image_pane

0xc95d,	// (0x000a4487) mce_text_pane_ParamLimits

0xc95d,	// (0x000a4487) mce_text_pane

0x1a92,	// (0x000995bc) scroll_pane_cp03

0xc856,	// (0x000a4380) scroll_pane_cp04

0xc970,	// (0x000a449a) scroll_pane_cp05_ParamLimits

0xc970,	// (0x000a449a) scroll_pane_cp05

0x1a9c,	// (0x000995c6) mce_header_field_pane_ParamLimits

0x1a9c,	// (0x000995c6) mce_header_field_pane

0x1ab3,	// (0x000995dd) mce_header_field_pane_2_ParamLimits

0x1ab3,	// (0x000995dd) mce_header_field_pane_2

0x1ac9,	// (0x000995f3) mce_header_field_pane_3

0x1ad1,	// (0x000995fb) list_single_mce_message_pane_ParamLimits

0x1ad1,	// (0x000995fb) list_single_mce_message_pane

0x1ae7,	// (0x00099611) list_single_mce_smart_pane_ParamLimits

0x1ae7,	// (0x00099611) list_single_mce_smart_pane

0xc97c,	// (0x000a44a6) input_focus_pane_cp03

0xc985,	// (0x000a44af) list_header_data_pane

0x1b08,	// (0x00099632) mce_header_field_pane_t1

0x1b18,	// (0x00099642) list_single_mce_header_pane_ParamLimits

0x1b18,	// (0x00099642) list_single_mce_header_pane

0xc98d,	// (0x000a44b7) list_single_mce_header_pane_t1

0xc99c,	// (0x000a44c6) list_single_mce_message_pane_g1

0xc9a4,	// (0x000a44ce) list_single_mce_message_pane_t1

0x1b52,	// (0x0009967c) bg_cale_heading_pane_cp01_ParamLimits

0x1b52,	// (0x0009967c) bg_cale_heading_pane_cp01

0xc9b2,	// (0x000a44dc) bg_cale_pane_cp02_ParamLimits

0xc9b2,	// (0x000a44dc) bg_cale_pane_cp02

0x1b8c,	// (0x000996b6) cale_month_corner_pane

0x1bab,	// (0x000996d5) cale_month_day_heading_pane_ParamLimits

0x1bab,	// (0x000996d5) cale_month_day_heading_pane

0x1bfd,	// (0x00099727) cale_month_pane_g1_ParamLimits

0x1bfd,	// (0x00099727) cale_month_pane_g1

0x1c2c,	// (0x00099756) cale_month_pane_g2_ParamLimits

0x1c2c,	// (0x00099756) cale_month_pane_g2

0x1c5c,	// (0x00099786) cale_month_pane_g3_ParamLimits

0x1c5c,	// (0x00099786) cale_month_pane_g3

0x1c98,	// (0x000997c2) cale_month_pane_g4_ParamLimits

0x1c98,	// (0x000997c2) cale_month_pane_g4

0x1cd4,	// (0x000997fe) cale_month_pane_g5_ParamLimits

0x1cd4,	// (0x000997fe) cale_month_pane_g5

0x1d1c,	// (0x00099846) cale_month_pane_g6_ParamLimits

0x1d1c,	// (0x00099846) cale_month_pane_g6

0x1d68,	// (0x00099892) cale_month_pane_g7_ParamLimits

0x1d68,	// (0x00099892) cale_month_pane_g7

0x1db8,	// (0x000998e2) cale_month_pane_g8_ParamLimits

0x1db8,	// (0x000998e2) cale_month_pane_g8

0x1e0c,	// (0x00099936) cale_month_pane_g9_ParamLimits

0x1e0c,	// (0x00099936) cale_month_pane_g9

0x1e5e,	// (0x00099988) cale_month_pane_g10_ParamLimits

0x1e5e,	// (0x00099988) cale_month_pane_g10

0x1eb0,	// (0x000999da) cale_month_pane_g11_ParamLimits

0x1eb0,	// (0x000999da) cale_month_pane_g11

0x1f02,	// (0x00099a2c) cale_month_pane_g12_ParamLimits

0x1f02,	// (0x00099a2c) cale_month_pane_g12

0x1f54,	// (0x00099a7e) cale_month_pane_g13_ParamLimits

0x1f54,	// (0x00099a7e) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x000a6d24) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x000a6d24) cale_month_pane_g

0x1fa6,	// (0x00099ad0) cale_month_week_pane

0x1fca,	// (0x00099af4) grid_cale_month_pane_ParamLimits

0x1fca,	// (0x00099af4) grid_cale_month_pane

0x2013,	// (0x00099b3d) cale_month_day_heading_pane_t1

0x2055,	// (0x00099b7f) cale_month_day_heading_pane_t2

0x208a,	// (0x00099bb4) cale_month_day_heading_pane_t3

0x20bf,	// (0x00099be9) cale_month_day_heading_pane_t4

0x20fc,	// (0x00099c26) cale_month_day_heading_pane_t5

0x2141,	// (0x00099c6b) cale_month_day_heading_pane_t6

0x2186,	// (0x00099cb0) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x000a6d3f) cale_month_day_heading_pane_t

0xc614,	// (0x000a413e) bg_cale_side_pane_cp01

0x21d3,	// (0x00099cfd) cale_month_week_pane_t1

0x21ec,	// (0x00099d16) cale_month_week_pane_t2

0x2205,	// (0x00099d2f) cale_month_week_pane_t3

0x221e,	// (0x00099d48) cale_month_week_pane_t4

0x2237,	// (0x00099d61) cale_month_week_pane_t5

0x2250,	// (0x00099d7a) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x000a6d4e) cale_month_week_pane_t

0x2269,	// (0x00099d93) cell_cale_month_pane_ParamLimits

0x2269,	// (0x00099d93) cell_cale_month_pane

0x9e84,	// (0x000a19ae) cell_cale_month_pane_g1

0x2397,	// (0x00099ec1) cell_cale_month_pane_t1_ParamLimits

0x2397,	// (0x00099ec1) cell_cale_month_pane_t1

0xc6a9,	// (0x000a41d3) grid_highlight_pane_cp08

0xc39e,	// (0x000a3ec8) main_smil_g1

0x23c3,	// (0x00099eed) smil_status_pane

0xc9f1,	// (0x000a451b) smil_text_pane

0xe314,	// (0x000a5e3e) bg_popup_call3_rect_pane_g8

0xe31c,	// (0x000a5e46) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x000a6fd7) bg_popup_call3_rect_pane_g

0xe505,	// (0x000a602f) smil_status_volume_pane_g1

0xc9fb,	// (0x000a4525) smil_status_pane_t1

0x9fd6,	// (0x000a1b00) volume_smil_pane

0xca12,	// (0x000a453c) list_smil_text_pane

0x23d8,	// (0x00099f02) scroll_pane_cp011

0x23e3,	// (0x00099f0d) smil_text_list_pane_t1_ParamLimits

0x23e3,	// (0x00099f0d) smil_text_list_pane_t1

0x9e90,	// (0x000a19ba) aid_volume_smil_ParamLimits

0x9e90,	// (0x000a19ba) aid_volume_smil

0xc39e,	// (0x000a3ec8) smil_volume_pane_g1

0xc39e,	// (0x000a3ec8) smil_volume_pane_g2

0x0001,

0xf231,	// (0x000a6d5b) smil_volume_pane_g

0x0f08,	// (0x00098a32) listscroll_cale_day_pane

0xca1c,	// (0x000a4546) bg_cale_pane

0xca34,	// (0x000a455e) list_cale_pane

0xca57,	// (0x000a4581) scroll_pane_cp09

0xca68,	// (0x000a4592) cale_bg_pane_g1

0xca70,	// (0x000a459a) cale_bg_pane_g2

0xca78,	// (0x000a45a2) cale_bg_pane_g3

0xca80,	// (0x000a45aa) cale_bg_pane_g4

0xca88,	// (0x000a45b2) cale_bg_pane_g5

0xca90,	// (0x000a45ba) cale_bg_pane_g6

0xca98,	// (0x000a45c2) cale_bg_pane_g7

0xcaa0,	// (0x000a45ca) cale_bg_pane_g8

0xcaa8,	// (0x000a45d2) cale_bg_pane_g9

0x0008,

0xf236,	// (0x000a6d60) cale_bg_pane_g

0x242f,	// (0x00099f59) list_cale_time_pane_ParamLimits

0x242f,	// (0x00099f59) list_cale_time_pane

0xcab0,	// (0x000a45da) list_cale_time_pane_g1_ParamLimits

0xcab0,	// (0x000a45da) list_cale_time_pane_g1

0xcabc,	// (0x000a45e6) list_cale_time_pane_g2_ParamLimits

0xcabc,	// (0x000a45e6) list_cale_time_pane_g2

0x2445,	// (0x00099f6f) list_cale_time_pane_g3_ParamLimits

0x2445,	// (0x00099f6f) list_cale_time_pane_g3

0x2453,	// (0x00099f7d) list_cale_time_pane_g4_ParamLimits

0x2453,	// (0x00099f7d) list_cale_time_pane_g4

0x2461,	// (0x00099f8b) list_cale_time_pane_g5_ParamLimits

0x2461,	// (0x00099f8b) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x000a6d73) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x000a6d73) list_cale_time_pane_g

0xcad6,	// (0x000a4600) list_cale_time_pane_t1_ParamLimits

0xcad6,	// (0x000a4600) list_cale_time_pane_t1

0xcafe,	// (0x000a4628) list_cale_time_pane_t2_ParamLimits

0xcafe,	// (0x000a4628) list_cale_time_pane_t2

0x26ee,	// (0x0009a218) aid_blid_cardinal_pane

0x272c,	// (0x0009a256) compass_pane_t4

0xcb26,	// (0x000a4650) list_cale_time_pane_t4_ParamLimits

0xcb26,	// (0x000a4650) list_cale_time_pane_t4

0x273a,	// (0x0009a264) compass_pane_t5

0x2748,	// (0x0009a272) compass_pane_t6

0x2756,	// (0x0009a280) compass_pane_t7

0xcfae,	// (0x000a4ad8) navi_pane_cc_t1

0xd18b,	// (0x000a4cb5) aid_phob_thumbnail_center_pane

0x2b2c,	// (0x0009a656) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x000a6d80) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x000a6d80) list_cale_time_pane_t

0xbb9b,	// (0x000a36c5) bg_popup_window_pane_cp02_ParamLimits

0xbb9b,	// (0x000a36c5) bg_popup_window_pane_cp02

0xcb4e,	// (0x000a4678) heading_pane_cp01_ParamLimits

0xcb4e,	// (0x000a4678) heading_pane_cp01

0xcb5a,	// (0x000a4684) loc_req_pane_ParamLimits

0xcb5a,	// (0x000a4684) loc_req_pane

0xcb6a,	// (0x000a4694) loc_type_pane_ParamLimits

0xcb6a,	// (0x000a4694) loc_type_pane

0xcb7c,	// (0x000a46a6) loc_type_pane_t1_ParamLimits

0xcb7c,	// (0x000a46a6) loc_type_pane_t1

0xcb8e,	// (0x000a46b8) loc_type_pane_t2_ParamLimits

0xcb8e,	// (0x000a46b8) loc_type_pane_t2

0xcba0,	// (0x000a46ca) loc_type_pane_t3_ParamLimits

0xcba0,	// (0x000a46ca) loc_type_pane_t3

0x0002,

0xf25d,	// (0x000a6d87) loc_type_pane_t_ParamLimits

0xf25d,	// (0x000a6d87) loc_type_pane_t

0xcbb2,	// (0x000a46dc) list_loc_req_pane

0xcbbc,	// (0x000a46e6) scroll_pane_cp012

0x246f,	// (0x00099f99) list_single_loc_request_popup_menu_pane_ParamLimits

0x246f,	// (0x00099f99) list_single_loc_request_popup_menu_pane

0xcbc7,	// (0x000a46f1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcbc7,	// (0x000a46f1) list_single_loc_request_popup_menu_pane_g1

0xcbd3,	// (0x000a46fd) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbd3,	// (0x000a46fd) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x000a6d8e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x000a6d8e) list_single_loc_request_popup_menu_pane_g

0xcbdf,	// (0x000a4709) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbdf,	// (0x000a4709) list_single_loc_request_popup_menu_pane_t1

0xc386,	// (0x000a3eb0) bg_popup_window_pane_cp03_ParamLimits

0xc386,	// (0x000a3eb0) bg_popup_window_pane_cp03

0xcc5a,	// (0x000a4784) heading_loc_req_pane_ParamLimits

0xcc5a,	// (0x000a4784) heading_loc_req_pane

0x247c,	// (0x00099fa6) popup_dyc_status_message_window_g1_ParamLimits

0x247c,	// (0x00099fa6) popup_dyc_status_message_window_g1

0x2490,	// (0x00099fba) popup_dyc_status_message_window_t1_ParamLimits

0x2490,	// (0x00099fba) popup_dyc_status_message_window_t1

0x24a5,	// (0x00099fcf) popup_dyc_status_message_window_t2_ParamLimits

0x24a5,	// (0x00099fcf) popup_dyc_status_message_window_t2

0x24ba,	// (0x00099fe4) popup_dyc_status_message_window_t3_ParamLimits

0x24ba,	// (0x00099fe4) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x000a6d93) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x000a6d93) popup_dyc_status_message_window_t

0xc12b,	// (0x000a3c55) bg_heading_pane_cp01

0xcbf5,	// (0x000a471f) heading_loc_req_pane_g1

0xcbfd,	// (0x000a4727) heading_loc_req_pane_g2

0xcc05,	// (0x000a472f) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x000a6d9a) heading_loc_req_pane_g

0xcc0d,	// (0x000a4737) heading_loc_req_pane_t1

0xcc2c,	// (0x000a4756) bg_popup_sub_pane_cp01_ParamLimits

0xcc2c,	// (0x000a4756) bg_popup_sub_pane_cp01

0xcc3a,	// (0x000a4764) popup_cale_events_window_g1_ParamLimits

0xcc3a,	// (0x000a4764) popup_cale_events_window_g1

0xcc66,	// (0x000a4790) popup_cale_events_window_g2_ParamLimits

0xcc66,	// (0x000a4790) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x000a6dbc) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x000a6dbc) popup_cale_events_window_g

0xcc86,	// (0x000a47b0) popup_cale_events_window_t1_ParamLimits

0xcc86,	// (0x000a47b0) popup_cale_events_window_t1

0xcc98,	// (0x000a47c2) popup_cale_events_window_t2_ParamLimits

0xcc98,	// (0x000a47c2) popup_cale_events_window_t2

0xccd6,	// (0x000a4800) popup_cale_events_window_t3_ParamLimits

0xccd6,	// (0x000a4800) popup_cale_events_window_t3

0xcd10,	// (0x000a483a) popup_cale_events_window_t4_ParamLimits

0xcd10,	// (0x000a483a) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x000a6dc1) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x000a6dc1) popup_cale_events_window_t

0x24e2,	// (0x0009a00c) call_type_pane

0x24f2,	// (0x0009a01c) popup_call_status_window_g1

0x2506,	// (0x0009a030) popup_call_status_window_g2

0x251a,	// (0x0009a044) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x000a6dca) popup_call_status_window_g

0xcd46,	// (0x000a4870) call_type_pane_g1

0xcd4f,	// (0x000a4879) call_type_pane_g2

0x0001,

0xf2a7,	// (0x000a6dd1) call_type_pane_g

0xc12b,	// (0x000a3c55) bg_popup_sub_pane_cp02

0xcd58,	// (0x000a4882) listscroll_popup_wml_pane

0xcd60,	// (0x000a488a) list_wml_pane

0xcd6a,	// (0x000a4894) scroll_pane_cp013

0xcd75,	// (0x000a489f) list_single_graphic_popup_wml_pane_ParamLimits

0xcd75,	// (0x000a489f) list_single_graphic_popup_wml_pane

0xc39e,	// (0x000a3ec8) list_single_graphic_popup_wml_pane_g1

0xcd89,	// (0x000a48b3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x000a6dd6) list_single_graphic_popup_wml_pane_g

0xcd91,	// (0x000a48bb) list_single_graphic_popup_wml_pane_t1

0xcda7,	// (0x000a48d1) aid_call_pane

0xc37e,	// (0x000a3ea8) popup_clock_analogue_window_g1

0xc37e,	// (0x000a3ea8) popup_clock_analogue_window_g2

0x9ebe,	// (0x000a19e8) popup_clock_analogue_window_g3

0x9ebe,	// (0x000a19e8) popup_clock_analogue_window_g4

0xc39e,	// (0x000a3ec8) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x000a6ddb) popup_clock_analogue_window_g

0x9ec6,	// (0x000a19f0) popup_clock_analogue_window_t1

0x9ed4,	// (0x000a19fe) clock_digital_number_pane_ParamLimits

0x9ed4,	// (0x000a19fe) clock_digital_number_pane

0x9ee0,	// (0x000a1a0a) clock_digital_number_pane_cp02_ParamLimits

0x9ee0,	// (0x000a1a0a) clock_digital_number_pane_cp02

0x9eec,	// (0x000a1a16) clock_digital_number_pane_cp03_ParamLimits

0x9eec,	// (0x000a1a16) clock_digital_number_pane_cp03

0x9ef8,	// (0x000a1a22) clock_digital_number_pane_cp04_ParamLimits

0x9ef8,	// (0x000a1a22) clock_digital_number_pane_cp04

0x9f04,	// (0x000a1a2e) clock_digital_separator_pane_ParamLimits

0x9f04,	// (0x000a1a2e) clock_digital_separator_pane

0x9f10,	// (0x000a1a3a) popup_clock_digital_window_t1

0xc39e,	// (0x000a3ec8) clock_digital_number_pane_g1

0xc39e,	// (0x000a3ec8) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x000a6d5b) clock_digital_number_pane_g

0xc39e,	// (0x000a3ec8) clock_digital_separator_pane_g1

0xc39e,	// (0x000a3ec8) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x000a6d5b) clock_digital_separator_pane_g

0xc12b,	// (0x000a3c55) bg_popup_window_pane_cp04

0xcdaf,	// (0x000a48d9) heading_pane_cp03

0xc6ed,	// (0x000a4217) listscroll_popup_gms_pane

0xc12b,	// (0x000a3c55) grid_large_graphic_popup_pane

0xcdb8,	// (0x000a48e2) listscroll_popup_gms_pane_g1

0xcdc1,	// (0x000a48eb) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x000a6de6) listscroll_popup_gms_pane_g

0xcdca,	// (0x000a48f4) scroll_pane_cp014

0xc3f3,	// (0x000a3f1d) cell_large_graphic_popup_pane_ParamLimits

0xc3f3,	// (0x000a3f1d) cell_large_graphic_popup_pane

0xc401,	// (0x000a3f2b) cell_large_graphic_popup_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) cell_large_graphic_popup_pane_g1

0xcdd3,	// (0x000a48fd) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdd3,	// (0x000a48fd) cell_large_graphic_popup_pane_g2

0xcde1,	// (0x000a490b) cell_large_graphic_popup_pane_g3_ParamLimits

0xcde1,	// (0x000a490b) cell_large_graphic_popup_pane_g3

0xcdef,	// (0x000a4919) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdef,	// (0x000a4919) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x000a6deb) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x000a6deb) cell_large_graphic_popup_pane_g

0xc12b,	// (0x000a3c55) grid_highlight_pane_cp010

0xc39e,	// (0x000a3ec8) bg_popup_call_pane_g1

0xce00,	// (0x000a492a) list_single_graphic_popup_conf_pane_ParamLimits

0xce00,	// (0x000a492a) list_single_graphic_popup_conf_pane

0xce13,	// (0x000a493d) list_highlight_pane_cp01

0xce1c,	// (0x000a4946) list_single_graphic_popup_conf_pane_g1

0xce24,	// (0x000a494e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x000a6df4) list_single_graphic_popup_conf_pane_g

0xce2c,	// (0x000a4956) list_single_graphic_popup_conf_pane_t1

0xce3a,	// (0x000a4964) linegrid_cams_pane_g1

0x2529,	// (0x0009a053) linegrid_cams_pane_g2

0xc597,	// (0x000a40c1) linegrid_cams_pane_g3

0xce43,	// (0x000a496d) linegrid_cams_pane_g4

0x2532,	// (0x0009a05c) linegrid_cams_pane_g5

0x253b,	// (0x0009a065) linegrid_cams_pane_g6

0xc6dc,	// (0x000a4206) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x000a6df9) linegrid_cams_pane_g

0xce4c,	// (0x000a4976) popup_clock_analogue_window

0xce4c,	// (0x000a4976) popup_clock_digital_window

0xc12b,	// (0x000a3c55) popup_phob_thumbnail_window

0xc39e,	// (0x000a3ec8) call_video_uplink_pane_g1

0xce55,	// (0x000a497f) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x000a6e08) call_video_uplink_pane_g

0xce5d,	// (0x000a4987) video_uplink_pane

0xce65,	// (0x000a498f) mce_image_pane_g1

0x2546,	// (0x0009a070) mce_image_pane_g2

0x254e,	// (0x0009a078) mce_image_pane_g3

0x2556,	// (0x0009a080) mce_image_pane_g4

0x2560,	// (0x0009a08a) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x000a6e0d) mce_image_pane_g

0xce6f,	// (0x000a4999) control_top_pane_stacon_cp01_ParamLimits

0xce6f,	// (0x000a4999) control_top_pane_stacon_cp01

0xce83,	// (0x000a49ad) uni_indicator_pane_stacon_cp01_ParamLimits

0xce83,	// (0x000a49ad) uni_indicator_pane_stacon_cp01

0xce94,	// (0x000a49be) bg_popup_sub_pane_cp03

0x2568,	// (0x0009a092) chi_dic_find_pane

0x2570,	// (0x0009a09a) listscroll_chi_dic_pane

0x2579,	// (0x0009a0a3) main_pane_chidic_g1

0x258c,	// (0x0009a0b6) chi_dic_find_pane_t1

0xce9e,	// (0x000a49c8) find_chidic_pane

0xcea7,	// (0x000a49d1) chi_dic_list_pane_ParamLimits

0xcea7,	// (0x000a49d1) chi_dic_list_pane

0xceb8,	// (0x000a49e2) scroll_pane_cp020

0x259a,	// (0x0009a0c4) find_chidic_pane_t1

0xc12b,	// (0x000a3c55) input_focus_pane_cp06

0x25a9,	// (0x0009a0d3) list_chi_dic_pane_ParamLimits

0x25a9,	// (0x0009a0d3) list_chi_dic_pane

0x25bb,	// (0x0009a0e5) list_chi_dic_pane_t1_ParamLimits

0x25bb,	// (0x0009a0e5) list_chi_dic_pane_t1

0xc12b,	// (0x000a3c55) list_highlight_pane_cp020

0xcec0,	// (0x000a49ea) bg_cale_heading_pane_g1

0x25ce,	// (0x0009a0f8) bg_cale_heading_pane_g2

0x25d6,	// (0x0009a100) bg_cale_heading_pane_g3

0x25de,	// (0x0009a108) bg_cale_heading_pane_g4

0x25e8,	// (0x0009a112) bg_cale_heading_pane_g5

0x25f2,	// (0x0009a11c) bg_cale_heading_pane_g6

0x25fa,	// (0x0009a124) bg_cale_heading_pane_g7

0x2602,	// (0x0009a12c) bg_cale_heading_pane_g8

0x260c,	// (0x0009a136) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x000a6e18) bg_cale_heading_pane_g

0xcec0,	// (0x000a49ea) bg_cale_side_pane_g1

0x2616,	// (0x0009a140) bg_cale_side_pane_g2

0x261e,	// (0x0009a148) bg_cale_side_pane_g3

0x2626,	// (0x0009a150) bg_cale_side_pane_g4

0x262e,	// (0x0009a158) bg_cale_side_pane_g5

0x2636,	// (0x0009a160) bg_cale_side_pane_g6

0x263e,	// (0x0009a168) bg_cale_side_pane_g7

0x2646,	// (0x0009a170) bg_cale_side_pane_g8

0x264e,	// (0x0009a178) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x000a6e2b) bg_cale_side_pane_g

0x2656,	// (0x0009a180) popup_call_status_window_ParamLimits

0x2656,	// (0x0009a180) popup_call_status_window

0xcec8,	// (0x000a49f2) stacon_top_pane

0xced0,	// (0x000a49fa) status_pane_ParamLimits

0xced0,	// (0x000a49fa) status_pane

0xcee5,	// (0x000a4a0f) status_small_pane

0xceed,	// (0x000a4a17) control_pane

0xc12b,	// (0x000a3c55) stacon_bottom_pane

0xcef5,	// (0x000a4a1f) list_single_mce_smart_pane_t1_ParamLimits

0xcef5,	// (0x000a4a1f) list_single_mce_smart_pane_t1

0xcf08,	// (0x000a4a32) list_single_mce_smart_pane_t2_ParamLimits

0xcf08,	// (0x000a4a32) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x000a6e3e) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x000a6e3e) list_single_mce_smart_pane_t

0x269d,	// (0x0009a1c7) compass_pane

0x26a6,	// (0x0009a1d0) main_location2_pane_t1

0x26b8,	// (0x0009a1e2) main_location2_pane_t2

0x26ca,	// (0x0009a1f4) main_location2_pane_t3

0x0003,

0xf319,	// (0x000a6e43) main_location2_pane_t

0xcf27,	// (0x000a4a51) compass_pane_g1_ParamLimits

0xcf27,	// (0x000a4a51) compass_pane_g1

0x270e,	// (0x0009a238) compass_pane_t1

0x271d,	// (0x0009a247) compass_pane_t2

0x0005,

0xf322,	// (0x000a6e4c) compass_pane_t

0x2764,	// (0x0009a28e) text_secondary_cp61

0xcfa5,	// (0x000a4acf) navi_pane_cams_g5

0xd021,	// (0x000a4b4b) navi_pane_im_t1

0xd02f,	// (0x000a4b59) navi_pane_mp_g1_ParamLimits

0xd02f,	// (0x000a4b59) navi_pane_mp_g1

0xd043,	// (0x000a4b6d) navi_pane_mp_g2_ParamLimits

0xd043,	// (0x000a4b6d) navi_pane_mp_g2

0xd04f,	// (0x000a4b79) navi_pane_mp_g3_ParamLimits

0xd04f,	// (0x000a4b79) navi_pane_mp_g3

0x0002,

0xf336,	// (0x000a6e60) navi_pane_mp_g_ParamLimits

0xf336,	// (0x000a6e60) navi_pane_mp_g

0xd05b,	// (0x000a4b85) navi_pane_mp_t1

0xd069,	// (0x000a4b93) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x000a6e67) navi_pane_mp_t

0xd0d4,	// (0x000a4bfe) navi_pane_vt_g1

0xd05b,	// (0x000a4b85) navi_pane_vt_t1

0xd0dc,	// (0x000a4c06) navi_slider_pane

0xc6ed,	// (0x000a4217) zooming_pane

0xd0ec,	// (0x000a4c16) navi_slider_pane_g1

0x9f2d,	// (0x000a1a57) navi_slider_pane_g2

0x0006,

0xf344,	// (0x000a6e6e) navi_slider_pane_g

0xd110,	// (0x000a4c3a) aid_levels_zoom

0xd118,	// (0x000a4c42) zooming_pane_g1

0xd120,	// (0x000a4c4a) zooming_pane_g2

0xd120,	// (0x000a4c4a) zooming_pane_g3

0x0002,

0xf353,	// (0x000a6e7d) zooming_pane_g

0xd128,	// (0x000a4c52) level_10_zoom

0xd131,	// (0x000a4c5b) level_11_zoom

0xd13a,	// (0x000a4c64) level_1_zoom

0xd143,	// (0x000a4c6d) level_2_zoom

0xd14c,	// (0x000a4c76) level_3_zoom

0xd155,	// (0x000a4c7f) level_4_zoom

0xd15e,	// (0x000a4c88) level_5_zoom

0xd167,	// (0x000a4c91) level_6_zoom

0xd170,	// (0x000a4c9a) level_7_zoom

0xd179,	// (0x000a4ca3) level_8_zoom

0xd182,	// (0x000a4cac) level_9_zoom

0xd193,	// (0x000a4cbd) popup_phob_thumbnail_window_g1

0xd19b,	// (0x000a4cc5) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x000a6e84) popup_phob_thumbnail_window_g

0x3130,	// (0x0009ac5a) level_1_location

0x3138,	// (0x0009ac62) level_2_location

0x3140,	// (0x0009ac6a) level_3_location

0x3148,	// (0x0009ac72) level_4_location

0xc6ed,	// (0x000a4217) level_5_location

0x27b5,	// (0x0009a2df) mce_icon_pane_g1

0x27bf,	// (0x0009a2e9) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x000a6e89) mce_icon_pane_g

0xd205,	// (0x000a4d2f) main_mup_pane_g1_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g1

0xd205,	// (0x000a4d2f) main_mup_pane_g2_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g2

0xd205,	// (0x000a4d2f) main_mup_pane_g3_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g3

0xd205,	// (0x000a4d2f) main_mup_pane_g4_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g4

0xd205,	// (0x000a4d2f) main_mup_pane_g5_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g5

0xd205,	// (0x000a4d2f) main_mup_pane_g6_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g6

0xd205,	// (0x000a4d2f) main_mup_pane_g7_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g7

0xd205,	// (0x000a4d2f) main_mup_pane_g8_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g8

0xd205,	// (0x000a4d2f) main_mup_pane_g9_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g9

0xd205,	// (0x000a4d2f) main_mup_pane_g10_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g10

0xd205,	// (0x000a4d2f) main_mup_pane_g11_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g11

0xc401,	// (0x000a3f2b) main_mup_pane_g12_ParamLimits

0xc401,	// (0x000a3f2b) main_mup_pane_g12

0xd205,	// (0x000a4d2f) main_mup_pane_g13_ParamLimits

0xd205,	// (0x000a4d2f) main_mup_pane_g13

0x000c,

0xf364,	// (0x000a6e8e) main_mup_pane_g_ParamLimits

0xf364,	// (0x000a6e8e) main_mup_pane_g

0xd213,	// (0x000a4d3d) main_mup_pane_t1_ParamLimits

0xd213,	// (0x000a4d3d) main_mup_pane_t1

0xd213,	// (0x000a4d3d) main_mup_pane_t2_ParamLimits

0xd213,	// (0x000a4d3d) main_mup_pane_t2

0xd213,	// (0x000a4d3d) main_mup_pane_t3_ParamLimits

0xd213,	// (0x000a4d3d) main_mup_pane_t3

0xc449,	// (0x000a3f73) main_mup_pane_t4_ParamLimits

0xc449,	// (0x000a3f73) main_mup_pane_t4

0xc449,	// (0x000a3f73) main_mup_pane_t5_ParamLimits

0xc449,	// (0x000a3f73) main_mup_pane_t5

0xc45d,	// (0x000a3f87) main_mup_pane_t6_ParamLimits

0xc45d,	// (0x000a3f87) main_mup_pane_t6

0x0005,

0xf37f,	// (0x000a6ea9) main_mup_pane_t_ParamLimits

0xf37f,	// (0x000a6ea9) main_mup_pane_t

0xc3f3,	// (0x000a3f1d) mup_progress_pane_ParamLimits

0xc3f3,	// (0x000a3f1d) mup_progress_pane

0xd227,	// (0x000a4d51) mup_visualizer_pane_ParamLimits

0xd227,	// (0x000a4d51) mup_visualizer_pane

0xd227,	// (0x000a4d51) mup_volume_pane_ParamLimits

0xd227,	// (0x000a4d51) mup_volume_pane

0xc40f,	// (0x000a3f39) mup_visualizer_pane_g1_ParamLimits

0xc40f,	// (0x000a3f39) mup_visualizer_pane_g1

0xd1a3,	// (0x000a4ccd) mup_visualizer_pane_g2_ParamLimits

0xd1a3,	// (0x000a4ccd) mup_visualizer_pane_g2

0xc401,	// (0x000a3f2b) mup_visualizer_pane_g3_ParamLimits

0xc401,	// (0x000a3f2b) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x000a6eb6) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x000a6eb6) mup_visualizer_pane_g

0xc43f,	// (0x000a3f69) mup_volume_pane_g1

0xc43f,	// (0x000a3f69) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x000a6bd9) mup_volume_pane_g

0xc43f,	// (0x000a3f69) mup_progress_pane_g1

0xc43f,	// (0x000a3f69) mup_progress_pane_g2

0xc43f,	// (0x000a3f69) mup_progress_pane_g3

0x0002,

0xf393,	// (0x000a6ebd) mup_progress_pane_g

0xc12b,	// (0x000a3c55) bg_popup_window_pane_cp05

0xd1b1,	// (0x000a4cdb) heading_pane_cp02_ParamLimits

0xd1b1,	// (0x000a4cdb) heading_pane_cp02

0xd1cb,	// (0x000a4cf5) list_popup_blid_pane

0xd1d3,	// (0x000a4cfd) list_blid_sat_info_pane_ParamLimits

0xd1d3,	// (0x000a4cfd) list_blid_sat_info_pane

0xd1e6,	// (0x000a4d10) list_blid_sat_info_pane_g1

0xd1ee,	// (0x000a4d18) list_blid_sat_info_pane_t1

0x28bf,	// (0x0009a3e9) mup_equalizer_pane_ParamLimits

0x28bf,	// (0x0009a3e9) mup_equalizer_pane

0x28d8,	// (0x0009a402) mup_equalizer_pane_cp1_ParamLimits

0x28d8,	// (0x0009a402) mup_equalizer_pane_cp1

0x28f5,	// (0x0009a41f) mup_equalizer_pane_cp2_ParamLimits

0x28f5,	// (0x0009a41f) mup_equalizer_pane_cp2

0x2912,	// (0x0009a43c) mup_equalizer_pane_cp3_ParamLimits

0x2912,	// (0x0009a43c) mup_equalizer_pane_cp3

0x2933,	// (0x0009a45d) mup_equalizer_pane_cp4_ParamLimits

0x2933,	// (0x0009a45d) mup_equalizer_pane_cp4

0x2954,	// (0x0009a47e) mup_equalizer_pane_cp5

0x2968,	// (0x0009a492) mup_equalizer_pane_cp6

0x297c,	// (0x0009a4a6) mup_equalizer_pane_cp7

0xe394,	// (0x000a5ebe) bg_popup_call_poc_act_pane_g9

0xe39c,	// (0x000a5ec6) bg_popup_call_poc_act_pane_g10

0xe3a4,	// (0x000a5ece) bg_popup_call_poc_act_pane_g11

0x000a,

0xc386,	// (0x000a3eb0) mup_scale_pane

0xc39e,	// (0x000a3ec8) mup_scale_pane_g1

0xd1fc,	// (0x000a4d26) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x000a6ed9) mup_scale_pane_g

0xd250,	// (0x000a4d7a) msg_data_pane

0xd258,	// (0x000a4d82) scroll_pane_cp017

0x29a2,	// (0x0009a4cc) bg_list_pane_cp04_ParamLimits

0x29a2,	// (0x0009a4cc) bg_list_pane_cp04

0xd268,	// (0x000a4d92) msg_data_pane_g1

0x29c0,	// (0x0009a4ea) msg_data_pane_g2

0x29c8,	// (0x0009a4f2) msg_data_pane_g3

0x29d0,	// (0x0009a4fa) msg_data_pane_g4

0x29d8,	// (0x0009a502) msg_data_pane_g5

0x29e0,	// (0x0009a50a) msg_data_pane_g6

0x29e8,	// (0x0009a512) msg_data_pane_g7

0x0006,

0xf3be,	// (0x000a6ee8) msg_data_pane_g

0x29f0,	// (0x0009a51a) msg_text_pane_ParamLimits

0x29f0,	// (0x0009a51a) msg_text_pane

0x2a24,	// (0x0009a54e) qrid_highlight_pane_cp011_ParamLimits

0x2a24,	// (0x0009a54e) qrid_highlight_pane_cp011

0xc12b,	// (0x000a3c55) msg_body_pane

0xc386,	// (0x000a3eb0) msg_header_pane

0xd284,	// (0x000a4dae) input_focus_pane_cp07

0xd2a5,	// (0x000a4dcf) msg_header_pane_t1_ParamLimits

0xd2a5,	// (0x000a4dcf) msg_header_pane_t1

0xd2c1,	// (0x000a4deb) msg_header_pane_t2_ParamLimits

0xd2c1,	// (0x000a4deb) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x000a6efc) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x000a6efc) msg_header_pane_t

0xd2e1,	// (0x000a4e0b) msg_body_pane_g1

0xd2e9,	// (0x000a4e13) msg_body_pane_t1_ParamLimits

0xd2e9,	// (0x000a4e13) msg_body_pane_t1

0xd31a,	// (0x000a4e44) msg_body_pane_t2_ParamLimits

0xd31a,	// (0x000a4e44) msg_body_pane_t2

0xd32c,	// (0x000a4e56) msg_body_pane_t3_ParamLimits

0xd32c,	// (0x000a4e56) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x000a6f01) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x000a6f01) msg_body_pane_t

0x2a82,	// (0x0009a5ac) main_viewer_pane_g1_ParamLimits

0x2a82,	// (0x0009a5ac) main_viewer_pane_g1

0x2a90,	// (0x0009a5ba) main_viewer_pane_g2_ParamLimits

0x2a90,	// (0x0009a5ba) main_viewer_pane_g2

0x2a9e,	// (0x0009a5c8) main_viewer_pane_g3_ParamLimits

0x2a9e,	// (0x0009a5c8) main_viewer_pane_g3

0x2aad,	// (0x0009a5d7) main_viewer_pane_g4_ParamLimits

0x2aad,	// (0x0009a5d7) main_viewer_pane_g4

0x9f57,	// (0x000a1a81) main_viewer_pane_g5_ParamLimits

0x9f57,	// (0x000a1a81) main_viewer_pane_g5

0x9f57,	// (0x000a1a81) main_viewer_pane_g7_ParamLimits

0x9f57,	// (0x000a1a81) main_viewer_pane_g7

0xcbc7,	// (0x000a46f1) main_viewer_pane_g8_ParamLimits

0xcbc7,	// (0x000a46f1) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x000a6f11) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x000a6f11) main_viewer_pane_g

0xd33e,	// (0x000a4e68) viewer_content_pane_ParamLimits

0xd33e,	// (0x000a4e68) viewer_content_pane

0x2ae9,	// (0x0009a613) main_postcard_pane_g1_ParamLimits

0x2ae9,	// (0x0009a613) main_postcard_pane_g1

0x2aff,	// (0x0009a629) main_postcard_pane_g2_ParamLimits

0x2aff,	// (0x0009a629) main_postcard_pane_g2

0x2b15,	// (0x0009a63f) main_postcard_pane_g3_ParamLimits

0x2b15,	// (0x0009a63f) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x000a6f22) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x000a6f22) main_postcard_pane_g

0x2b2c,	// (0x0009a656) main_postcard_pane_g4

0xe518,	// (0x000a6042) smil_status_volume_pane_g2

0x2b6f,	// (0x0009a699) postcard_pane_ParamLimits

0x2b6f,	// (0x0009a699) postcard_pane

0xd34c,	// (0x000a4e76) postcard_pane_g1_ParamLimits

0xd34c,	// (0x000a4e76) postcard_pane_g1

0x2bb1,	// (0x0009a6db) postcard_pane_g2_ParamLimits

0x2bb1,	// (0x0009a6db) postcard_pane_g2

0x2bbd,	// (0x0009a6e7) postcard_pane_g3_ParamLimits

0x2bbd,	// (0x0009a6e7) postcard_pane_g3

0xd35a,	// (0x000a4e84) postcard_pane_g4_ParamLimits

0xd35a,	// (0x000a4e84) postcard_pane_g4

0x2bc9,	// (0x0009a6f3) postcard_pane_g5_ParamLimits

0x2bc9,	// (0x0009a6f3) postcard_pane_g5

0x2bde,	// (0x0009a708) postcard_pane_g6_ParamLimits

0x2bde,	// (0x0009a708) postcard_pane_g6

0xd34c,	// (0x000a4e76) postcard_pane_g7_ParamLimits

0xd34c,	// (0x000a4e76) postcard_pane_g7

0x0006,

0xf405,	// (0x000a6f2f) postcard_pane_g_ParamLimits

0xf405,	// (0x000a6f2f) postcard_pane_g

0x2bf2,	// (0x0009a71c) main_mp2_pane_g1_ParamLimits

0x2bf2,	// (0x0009a71c) main_mp2_pane_g1

0x2bfe,	// (0x0009a728) main_mp2_pane_g2_ParamLimits

0x2bfe,	// (0x0009a728) main_mp2_pane_g2

0x2c0a,	// (0x0009a734) main_mp2_pane_g3_ParamLimits

0x2c0a,	// (0x0009a734) main_mp2_pane_g3

0x0002,

0xf414,	// (0x000a6f3e) main_mp2_pane_g_ParamLimits

0xf414,	// (0x000a6f3e) main_mp2_pane_g

0x2c16,	// (0x0009a740) main_mp2_pane_t1_ParamLimits

0x2c16,	// (0x0009a740) main_mp2_pane_t1

0x2c2b,	// (0x0009a755) main_mp2_pane_t2_ParamLimits

0x2c2b,	// (0x0009a755) main_mp2_pane_t2

0x2c3d,	// (0x0009a767) main_mp2_pane_t3_ParamLimits

0x2c3d,	// (0x0009a767) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x000a6f45) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x000a6f45) main_mp2_pane_t

0xbf15,	// (0x000a3a3f) pec_content_pane_ParamLimits

0xbf15,	// (0x000a3a3f) pec_content_pane

0xaa49,	// (0x000a2573) scroll_pane_cp015

0xd227,	// (0x000a4d51) pec_attribute_pane_ParamLimits

0xd227,	// (0x000a4d51) pec_attribute_pane

0xc401,	// (0x000a3f2b) pec_content_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) pec_content_pane_g1

0xd368,	// (0x000a4e92) pec_content_pane_t1_ParamLimits

0xd368,	// (0x000a4e92) pec_content_pane_t1

0xd37c,	// (0x000a4ea6) pec_content_pane_t2_ParamLimits

0xd37c,	// (0x000a4ea6) pec_content_pane_t2

0x0001,

0xf422,	// (0x000a6f4c) pec_content_pane_t_ParamLimits

0xf422,	// (0x000a6f4c) pec_content_pane_t

0xc3f3,	// (0x000a3f1d) list_single_graphic_pane_cp01_ParamLimits

0xc3f3,	// (0x000a3f1d) list_single_graphic_pane_cp01

0xc386,	// (0x000a3eb0) bg_popup_sub_pane_cp04

0xd390,	// (0x000a4eba) popup_mup_playback_window_g1

0xd39c,	// (0x000a4ec6) popup_mup_playback_window_t1

0xd3b1,	// (0x000a4edb) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x000a6f51) popup_mup_playback_window_t

0xd3e8,	// (0x000a4f12) main_image_pane_g1_ParamLimits

0xd3e8,	// (0x000a4f12) main_image_pane_g1

0xd42b,	// (0x000a4f55) scroll_pane_cp018_ParamLimits

0xd42b,	// (0x000a4f55) scroll_pane_cp018

0xd443,	// (0x000a4f6d) scroll_pane_cp016_ParamLimits

0xd443,	// (0x000a4f6d) scroll_pane_cp016

0x2d07,	// (0x0009a831) smil2_image_pane_ParamLimits

0x2d07,	// (0x0009a831) smil2_image_pane

0x2d37,	// (0x0009a861) smil2_root_pane_ParamLimits

0x2d37,	// (0x0009a861) smil2_root_pane

0x2d6f,	// (0x0009a899) smil2_text_pane_ParamLimits

0x2d6f,	// (0x0009a899) smil2_text_pane

0xaa49,	// (0x000a2573) bg_list_pane_cp06

0xaa49,	// (0x000a2573) grid_radio_pane

0xc12b,	// (0x000a3c55) bg_popup_window_pane_cp06

0xcc1c,	// (0x000a4746) main_fmradio_pane_t1

0xe3ec,	// (0x000a5f16) heading_pane_cp04

0xcc1c,	// (0x000a4746) main_fmradio_pane_t2

0xe3f4,	// (0x000a5f1e) popup_cale_lunar_info_window_g1

0xcc1c,	// (0x000a4746) main_fmradio_pane_t3

0xe3fc,	// (0x000a5f26) popup_cale_lunar_info_window_g2

0xcc1c,	// (0x000a4746) main_fmradio_pane_t4

0x0001,

0xcc1c,	// (0x000a4746) main_fmradio_pane_t5

0x0004,

0xf50a,	// (0x000a7034) popup_cale_lunar_info_window_g

0xf287,	// (0x000a6db1) main_fmradio_pane_t

0xaa49,	// (0x000a2573) wait_bar_pane_cp03

0xc3f3,	// (0x000a3f1d) cell_fmradio_pane_ParamLimits

0xc3f3,	// (0x000a3f1d) cell_fmradio_pane

0xc401,	// (0x000a3f2b) cell_fmradio_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) cell_fmradio_pane_g1

0xaa49,	// (0x000a2573) grid_highlight_pane_cp011

0xd477,	// (0x000a4fa1) poc_content_pane_ParamLimits

0xd477,	// (0x000a4fa1) poc_content_pane

0xd489,	// (0x000a4fb3) scroll_pane_cp019

0x2def,	// (0x0009a919) popup_call_poc_act_window_ParamLimits

0x2def,	// (0x0009a919) popup_call_poc_act_window

0x2e13,	// (0x0009a93d) popup_call_poc_inact_window_ParamLimits

0x2e13,	// (0x0009a93d) popup_call_poc_inact_window

0xf4d3,	// (0x000a6ffd) bg_popup_call_poc_act_pane_g

0xe3ac,	// (0x000a5ed6) bg_popup_call_poc_inact_pane_g1

0xe3b4,	// (0x000a5ede) bg_popup_call_poc_inact_pane_g2

0xd491,	// (0x000a4fbb) popup_call_poc_act_window_g2

0xe3bc,	// (0x000a5ee6) bg_popup_call_poc_inact_pane_g3

0xe33c,	// (0x000a5e66) bg_popup_call_poc_inact_pane_g4

0xe3c4,	// (0x000a5eee) bg_popup_call_poc_inact_pane_g5

0xd499,	// (0x000a4fc3) popup_call_poc_act_window_t1_ParamLimits

0xd499,	// (0x000a4fc3) popup_call_poc_act_window_t1

0xd4c1,	// (0x000a4feb) popup_call_poc_act_window_t2_ParamLimits

0xd4c1,	// (0x000a4feb) popup_call_poc_act_window_t2

0xd4e9,	// (0x000a5013) popup_call_poc_act_window_t3_ParamLimits

0xd4e9,	// (0x000a5013) popup_call_poc_act_window_t3

0xd511,	// (0x000a503b) popup_call_poc_act_window_t4_ParamLimits

0xd511,	// (0x000a503b) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x000a6f66) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x000a6f66) popup_call_poc_act_window_t

0xe3cc,	// (0x000a5ef6) bg_popup_call_poc_inact_pane_g6

0xe3d4,	// (0x000a5efe) bg_popup_call_poc_inact_pane_g7

0xe3dc,	// (0x000a5f06) bg_popup_call_poc_inact_pane_g8

0xd523,	// (0x000a504d) popup_call_poc_inact_window_g2

0xe3e4,	// (0x000a5f0e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ea,	// (0x000a7014) bg_popup_call_poc_inact_pane_g

0xd52b,	// (0x000a5055) popup_call_poc_inact_window_t1_ParamLimits

0xd52b,	// (0x000a5055) popup_call_poc_inact_window_t1

0xd540,	// (0x000a506a) popup_call_poc_inact_window_t2_ParamLimits

0xd540,	// (0x000a506a) popup_call_poc_inact_window_t2

0xd555,	// (0x000a507f) popup_call_poc_inact_window_t3_ParamLimits

0xd555,	// (0x000a507f) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x000a6f6f) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x000a6f6f) popup_call_poc_inact_window_t

0xe490,	// (0x000a5fba) context_pane_ParamLimits

0x360c,	// (0x0009b136) signal_pane_ParamLimits

0xc6ed,	// (0x000a4217) main_call2_pane

0x9fa2,	// (0x000a1acc) popup_phob_thumbnail2_window_ParamLimits

0x9fa2,	// (0x000a1acc) popup_phob_thumbnail2_window

0x9f3f,	// (0x000a1a69) aid_hotspot_pointer_arrow_pane

0x9f47,	// (0x000a1a71) aid_hotspot_pointer_hand_pane

0x30fa,	// (0x0009ac24) phob_pre_status_pane_g5

0xbf15,	// (0x000a3a3f) cams_zoom_pane_ParamLimits

0xbf15,	// (0x000a3a3f) image_vga_pane_ParamLimits

0xc401,	// (0x000a3f2b) main_camera_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) main_camera_pane_g2_ParamLimits

0xc401,	// (0x000a3f2b) main_camera_pane_g3_ParamLimits

0xc401,	// (0x000a3f2b) main_camera_pane_g4_ParamLimits

0xc401,	// (0x000a3f2b) main_camera_pane_g5_ParamLimits

0xc401,	// (0x000a3f2b) main_camera_pane_g6_ParamLimits

0xc401,	// (0x000a3f2b) main_camera_pane_g7_ParamLimits

0xf180,	// (0x000a6caa) main_camera_pane_g_ParamLimits

0xc449,	// (0x000a3f73) main_camera_pane_t1_ParamLimits

0xc449,	// (0x000a3f73) main_camera_pane_t2_ParamLimits

0xf191,	// (0x000a6cbb) main_camera_pane_t_ParamLimits

0xc386,	// (0x000a3eb0) bg_popup_preview_window_pane_cp01_ParamLimits

0xc386,	// (0x000a3eb0) bg_popup_preview_window_pane_cp01

0xd56a,	// (0x000a5094) popup_phob_thumbnail2_window_g1_ParamLimits

0xd56a,	// (0x000a5094) popup_phob_thumbnail2_window_g1

0xc12b,	// (0x000a3c55) call2_cli_visual_pane

0x2e47,	// (0x0009a971) popup_call2_audio_conf_window_ParamLimits

0x2e47,	// (0x0009a971) popup_call2_audio_conf_window

0x2e67,	// (0x0009a991) popup_call2_audio_first_window_ParamLimits

0x2e67,	// (0x0009a991) popup_call2_audio_first_window

0x2efd,	// (0x0009aa27) popup_call2_audio_in_window_ParamLimits

0x2efd,	// (0x0009aa27) popup_call2_audio_in_window

0x2f45,	// (0x0009aa6f) popup_call2_audio_out_window_ParamLimits

0x2f45,	// (0x0009aa6f) popup_call2_audio_out_window

0x2faf,	// (0x0009aad9) popup_call2_audio_second_window_ParamLimits

0x2faf,	// (0x0009aad9) popup_call2_audio_second_window

0x3015,	// (0x0009ab3f) popup_call2_audio_wait_window_ParamLimits

0x3015,	// (0x0009ab3f) popup_call2_audio_wait_window

0xc12b,	// (0x000a3c55) bg_popup_call2_act_pane_cp03

0xc368,	// (0x000a3e92) list_conf_pane_cp

0xd576,	// (0x000a50a0) popup_call2_audio_conf_window_t1

0xd584,	// (0x000a50ae) list_single_graphic_popup_conf2_pane_ParamLimits

0xd584,	// (0x000a50ae) list_single_graphic_popup_conf2_pane

0xce13,	// (0x000a493d) list_highlight_pane_cp04

0xd597,	// (0x000a50c1) list_single_graphic_popup_conf2_pane_g1

0xce24,	// (0x000a494e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x000a6f76) list_single_graphic_popup_conf2_pane_g

0xd5a1,	// (0x000a50cb) list_single_graphic_popup_conf2_pane_t1

0xd5af,	// (0x000a50d9) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5af,	// (0x000a50d9) bg_popup_call2_act_pane_cp01

0xd639,	// (0x000a5163) call_type_pane_cp05_ParamLimits

0xd639,	// (0x000a5163) call_type_pane_cp05

0xd68d,	// (0x000a51b7) popup_call2_audio_second_window_g1_ParamLimits

0xd68d,	// (0x000a51b7) popup_call2_audio_second_window_g1

0xd6e1,	// (0x000a520b) popup_call2_audio_second_window_g2_ParamLimits

0xd6e1,	// (0x000a520b) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x000a6f7b) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x000a6f7b) popup_call2_audio_second_window_g

0xd746,	// (0x000a5270) popup_call2_audio_second_window_t1_ParamLimits

0xd746,	// (0x000a5270) popup_call2_audio_second_window_t1

0xd801,	// (0x000a532b) popup_call2_audio_second_window_t2_ParamLimits

0xd801,	// (0x000a532b) popup_call2_audio_second_window_t2

0xd854,	// (0x000a537e) popup_call2_audio_second_window_t3_ParamLimits

0xd854,	// (0x000a537e) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x000a6f82) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x000a6f82) popup_call2_audio_second_window_t

0xc12b,	// (0x000a3c55) bg_popup_call2_in_pane_cp02

0xc135,	// (0x000a3c5f) call_type_pane_cp04

0x304f,	// (0x0009ab79) popup_call2_audio_wait_window_g1

0x3057,	// (0x0009ab81) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x000a6f8b) popup_call2_audio_wait_window_g

0xc14d,	// (0x000a3c77) popup_call2_audio_wait_window_t3

0xd947,	// (0x000a5471) bg_popup_call2_act_pane_ParamLimits

0xd947,	// (0x000a5471) bg_popup_call2_act_pane

0xda07,	// (0x000a5531) call_type_pane_cp03_ParamLimits

0xda07,	// (0x000a5531) call_type_pane_cp03

0xda6b,	// (0x000a5595) popup_call2_audio_first_window_g1_ParamLimits

0xda6b,	// (0x000a5595) popup_call2_audio_first_window_g1

0xdadb,	// (0x000a5605) popup_call2_audio_first_window_g2_ParamLimits

0xdadb,	// (0x000a5605) popup_call2_audio_first_window_g2

0xdb3f,	// (0x000a5669) popup_call2_audio_first_window_g3_ParamLimits

0xdb3f,	// (0x000a5669) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x000a6f90) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x000a6f90) popup_call2_audio_first_window_g

0xdbc7,	// (0x000a56f1) popup_call2_audio_first_window_t1_ParamLimits

0xdbc7,	// (0x000a56f1) popup_call2_audio_first_window_t1

0xdcca,	// (0x000a57f4) popup_call2_audio_first_window_t4_ParamLimits

0xdcca,	// (0x000a57f4) popup_call2_audio_first_window_t4

0xddad,	// (0x000a58d7) popup_call2_audio_first_window_t5_ParamLimits

0xddad,	// (0x000a58d7) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x000a6f9b) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x000a6f9b) popup_call2_audio_first_window_t

0xc37e,	// (0x000a3ea8) bg_popup_call2_act_pane_g1

0xe404,	// (0x000a5f2e) popup_cale_lunar_info_window_t1

0xe412,	// (0x000a5f3c) popup_cale_lunar_info_window_t2

0xe420,	// (0x000a5f4a) popup_cale_lunar_info_window_t3

0xc12b,	// (0x000a3c55) bg_popup_call2_bubble_pane

0xdeae,	// (0x000a59d8) bg_popup_call2_in_pane_cp01_ParamLimits

0xdeae,	// (0x000a59d8) bg_popup_call2_in_pane_cp01

0xbc20,	// (0x000a374a) call_type_pane_cp02

0x305f,	// (0x0009ab89) popup_call2_audio_out_window_g1_ParamLimits

0x305f,	// (0x0009ab89) popup_call2_audio_out_window_g1

0xdef6,	// (0x000a5a20) popup_call2_audio_out_window_g2_ParamLimits

0xdef6,	// (0x000a5a20) popup_call2_audio_out_window_g2

0x308b,	// (0x0009abb5) popup_call2_audio_out_window_g3_ParamLimits

0x308b,	// (0x0009abb5) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x000a6fa4) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x000a6fa4) popup_call2_audio_out_window_g

0xdf2d,	// (0x000a5a57) popup_call2_audio_out_window_t1_ParamLimits

0xdf2d,	// (0x000a5a57) popup_call2_audio_out_window_t1

0xdf8c,	// (0x000a5ab6) popup_call2_audio_out_window_t2_ParamLimits

0xdf8c,	// (0x000a5ab6) popup_call2_audio_out_window_t2

0xdfe0,	// (0x000a5b0a) popup_call2_audio_out_window_t3_ParamLimits

0xdfe0,	// (0x000a5b0a) popup_call2_audio_out_window_t3

0xdff6,	// (0x000a5b20) popup_call2_audio_out_window_t4_ParamLimits

0xdff6,	// (0x000a5b20) popup_call2_audio_out_window_t4

0xe00c,	// (0x000a5b36) popup_call2_audio_out_window_t5_ParamLimits

0xe00c,	// (0x000a5b36) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x000a6fad) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x000a6fad) popup_call2_audio_out_window_t

0xe070,	// (0x000a5b9a) bg_popup_call2_in_pane_ParamLimits

0xe070,	// (0x000a5b9a) bg_popup_call2_in_pane

0xe0cc,	// (0x000a5bf6) popup_call2_audio_in_window_g1_ParamLimits

0xe0cc,	// (0x000a5bf6) popup_call2_audio_in_window_g1

0xe104,	// (0x000a5c2e) popup_call2_audio_in_window_g2_ParamLimits

0xe104,	// (0x000a5c2e) popup_call2_audio_in_window_g2

0xe13c,	// (0x000a5c66) popup_call2_audio_in_window_g3_ParamLimits

0xe13c,	// (0x000a5c66) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x000a6fba) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x000a6fba) popup_call2_audio_in_window_g

0xe194,	// (0x000a5cbe) popup_call2_audio_in_window_t1_ParamLimits

0xe194,	// (0x000a5cbe) popup_call2_audio_in_window_t1

0xe214,	// (0x000a5d3e) popup_call2_audio_in_window_t2_ParamLimits

0xe214,	// (0x000a5d3e) popup_call2_audio_in_window_t2

0xe294,	// (0x000a5dbe) popup_call2_audio_in_window_t3_ParamLimits

0xe294,	// (0x000a5dbe) popup_call2_audio_in_window_t3

0xe2ae,	// (0x000a5dd8) popup_call2_audio_in_window_t4_ParamLimits

0xe2ae,	// (0x000a5dd8) popup_call2_audio_in_window_t4

0xe2c0,	// (0x000a5dea) popup_call2_audio_in_window_t5_ParamLimits

0xe2c0,	// (0x000a5dea) popup_call2_audio_in_window_t5

0xe2d2,	// (0x000a5dfc) popup_call2_audio_in_window_t6_ParamLimits

0xe2d2,	// (0x000a5dfc) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x000a6fc3) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x000a6fc3) popup_call2_audio_in_window_t

0xc37e,	// (0x000a3ea8) bg_popup_call2_in_pane_g1

0xe42e,	// (0x000a5f58) popup_cale_lunar_info_window_t4

0x0003,

0xf50f,	// (0x000a7039) popup_cale_lunar_info_window_t

0xc386,	// (0x000a3eb0) bg_popup_call2_rect_pane_ParamLimits

0xc386,	// (0x000a3eb0) bg_popup_call2_rect_pane

0xc12b,	// (0x000a3c55) call2_cli_visual_graphic_pane

0xc12b,	// (0x000a3c55) call2_cli_visual_text_pane

0x9fc9,	// (0x000a1af3) smil_status_volume_pane_g3

0x0002,

0xc39e,	// (0x000a3ec8) call2_cli_visual_graphic_pane_g1

0xc39e,	// (0x000a3ec8) call2_cli_visual_graphic_pane_g2

0xc39e,	// (0x000a3ec8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x000a6fd0) call2_cli_visual_graphic_pane_g

0xe2e4,	// (0x000a5e0e) bg_popup_call2_rect_pane_g1

0xc57d,	// (0x000a40a7) bg_popup_call2_rect_pane_g2

0xe2ec,	// (0x000a5e16) bg_popup_call2_rect_pane_g3

0xe2f4,	// (0x000a5e1e) bg_popup_call2_rect_pane_g4

0xe2fc,	// (0x000a5e26) bg_popup_call2_rect_pane_g5

0xe304,	// (0x000a5e2e) bg_popup_call2_rect_pane_g6

0xe30c,	// (0x000a5e36) bg_popup_call2_rect_pane_g7

0xe314,	// (0x000a5e3e) bg_popup_call2_rect_pane_g8

0xe31c,	// (0x000a5e46) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x000a6fd7) bg_popup_call2_rect_pane_g

0xe324,	// (0x000a5e4e) bg_popup_call2_bubble_pane_g1

0xe32c,	// (0x000a5e56) bg_popup_call2_bubble_pane_g2

0xe334,	// (0x000a5e5e) bg_popup_call2_bubble_pane_g3

0xe33c,	// (0x000a5e66) bg_popup_call2_bubble_pane_g4

0xe344,	// (0x000a5e6e) bg_popup_call2_bubble_pane_g5

0xe34c,	// (0x000a5e76) bg_popup_call2_bubble_pane_g6

0xe354,	// (0x000a5e7e) bg_popup_call2_bubble_pane_g7

0xe35c,	// (0x000a5e86) bg_popup_call2_bubble_pane_g8

0xe364,	// (0x000a5e8e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x000a6fea) bg_popup_call2_bubble_pane_g

0x0f1a,	// (0x00098a44) aid_cale_week_size_cell_pane

0x14ca,	// (0x00098ff4) aid_cams_cif_uncrop_pane_ParamLimits

0x14ca,	// (0x00098ff4) aid_cams_cif_uncrop_pane

0xbf15,	// (0x000a3a3f) aid_cams_size_cell_ParamLimits

0xbf15,	// (0x000a3a3f) aid_cams_size_cell

0xbf15,	// (0x000a3a3f) grid_cams_pane_ParamLimits

0xbf15,	// (0x000a3a3f) linegrid_cams_pane_ParamLimits

0x16e8,	// (0x00099212) call_video_pane_t1

0x1706,	// (0x00099230) call_video_pane_t2

0x0001,

0xf1dd,	// (0x000a6d07) call_video_pane_t

0x1b2c,	// (0x00099656) aid_cale_month_size_cell_pane_ParamLimits

0x1b2c,	// (0x00099656) aid_cale_month_size_cell_pane

0xf553,	// (0x000a707d) smil_status_volume_pane_g

0x9fd6,	// (0x000a1b00) volume_smil_pane_ParamLimits

0x9d6f,	// (0x000a1899) aid_popup2_width_pane

0x0e7f,	// (0x000989a9) cell_qdial_pane_g4_ParamLimits

0x0e7f,	// (0x000989a9) cell_qdial_pane_g4

0x26ee,	// (0x0009a218) aid_blid_cardinal_pane_ParamLimits

0x26fa,	// (0x0009a224) aid_blid_destination_pane_ParamLimits

0x26fa,	// (0x0009a224) aid_blid_destination_pane

0xc386,	// (0x000a3eb0) bg_popup_call_poc_act_pane_ParamLimits

0xc386,	// (0x000a3eb0) bg_popup_call_poc_act_pane

0xc386,	// (0x000a3eb0) bg_popup_call_poc_inact_pane_ParamLimits

0xc386,	// (0x000a3eb0) bg_popup_call_poc_inact_pane

0xe36c,	// (0x000a5e96) bg_popup_call_poc_act_pane_g1

0xe374,	// (0x000a5e9e) bg_popup_call_poc_act_pane_g2

0xe37c,	// (0x000a5ea6) bg_popup_call_poc_act_pane_g3

0xe33c,	// (0x000a5e66) bg_popup_call_poc_act_pane_g4

0xe344,	// (0x000a5e6e) bg_popup_call_poc_act_pane_g5

0xe384,	// (0x000a5eae) bg_popup_call_poc_act_pane_g6

0xe354,	// (0x000a5e7e) bg_popup_call_poc_act_pane_g7

0xe38c,	// (0x000a5eb6) bg_popup_call_poc_act_pane_g8

0xc12b,	// (0x000a3c55) main_usb_pane

0x9f7d,	// (0x000a1aa7) popup_cale_lunar_info_window

0x19d2,	// (0x000994fc) im_reading_pane_t1_ParamLimits

0xc7ae,	// (0x000a42d8) list_im_pane_ParamLimits

0xc7bf,	// (0x000a42e9) scroll_pane_cp07_ParamLimits

0xc12b,	// (0x000a3c55) grid_highlight_pane_cp012

0xc386,	// (0x000a3eb0) mup_scale_pane_ParamLimits

0xc401,	// (0x000a3f2b) main_usb_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) main_usb_pane_g1

0xc401,	// (0x000a3f2b) main_usb_pane_g2_ParamLimits

0xc401,	// (0x000a3f2b) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x000a6ce6) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x000a6ce6) main_usb_pane_g

0xc449,	// (0x000a3f73) main_usb_pane_t1_ParamLimits

0xc449,	// (0x000a3f73) main_usb_pane_t1

0xc449,	// (0x000a3f73) main_usb_pane_t2_ParamLimits

0xc449,	// (0x000a3f73) main_usb_pane_t2

0xc449,	// (0x000a3f73) main_usb_pane_t3_ParamLimits

0xc449,	// (0x000a3f73) main_usb_pane_t3

0xc449,	// (0x000a3f73) main_usb_pane_t4_ParamLimits

0xc449,	// (0x000a3f73) main_usb_pane_t4

0xc449,	// (0x000a3f73) main_usb_pane_t5_ParamLimits

0xc449,	// (0x000a3f73) main_usb_pane_t5

0xc449,	// (0x000a3f73) main_usb_pane_t6_ParamLimits

0xc449,	// (0x000a3f73) main_usb_pane_t6

0x0005,

0xf4fd,	// (0x000a7027) main_usb_pane_t_ParamLimits

0x269d,	// (0x0009a1c7) aid_text_placing

0x26a6,	// (0x0009a1d0) main_location2_pane_t1_ParamLimits

0x26b8,	// (0x0009a1e2) main_location2_pane_t2_ParamLimits

0x26ca,	// (0x0009a1f4) main_location2_pane_t3_ParamLimits

0x26dc,	// (0x0009a206) main_location2_pane_t4_ParamLimits

0x26dc,	// (0x0009a206) main_location2_pane_t4

0xf319,	// (0x000a6e43) main_location2_pane_t_ParamLimits

0xc3b4,	// (0x000a3ede) find_pinb_pane_g2_ParamLimits

0xc3b4,	// (0x000a3ede) find_pinb_pane_g2

0x0001,

0xf095,	// (0x000a6bbf) find_pinb_pane_g_ParamLimits

0xf095,	// (0x000a6bbf) find_pinb_pane_g

0xc3c0,	// (0x000a3eea) find_pinb_pane_t1_ParamLimits

0xc3d2,	// (0x000a3efc) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x000a6bc4) find_pinb_pane_t_ParamLimits

0xc12b,	// (0x000a3c55) main_call3_pane

0x2013,	// (0x00099b3d) cale_month_day_heading_pane_t1_ParamLimits

0x2055,	// (0x00099b7f) cale_month_day_heading_pane_t2_ParamLimits

0x208a,	// (0x00099bb4) cale_month_day_heading_pane_t3_ParamLimits

0x20bf,	// (0x00099be9) cale_month_day_heading_pane_t4_ParamLimits

0x20fc,	// (0x00099c26) cale_month_day_heading_pane_t5_ParamLimits

0x2141,	// (0x00099c6b) cale_month_day_heading_pane_t6_ParamLimits

0x2186,	// (0x00099cb0) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x000a6d3f) cale_month_day_heading_pane_t_ParamLimits

0xca09,	// (0x000a4533) smil_status_volume_pane

0x2b8d,	// (0x0009a6b7) postcard_address_pane_ParamLimits

0x2b8d,	// (0x0009a6b7) postcard_address_pane

0x2b9f,	// (0x0009a6c9) postcard_message_pane_ParamLimits

0x2b9f,	// (0x0009a6c9) postcard_message_pane

0x30b7,	// (0x0009abe1) call2_cli_visual_pane_t1_ParamLimits

0x30b7,	// (0x0009abe1) call2_cli_visual_pane_t1

0xe543,	// (0x000a606d) postcard_message_pane_t1_ParamLimits

0xe543,	// (0x000a606d) postcard_message_pane_t1

0xe52b,	// (0x000a6055) postcard_address_pane_t1_ParamLimits

0xe52b,	// (0x000a6055) postcard_address_pane_t1

0x37bf,	// (0x0009b2e9) popup_call3_audio_in_window_ParamLimits

0x37bf,	// (0x0009b2e9) popup_call3_audio_in_window

0x364a,	// (0x0009b174) bg_popup_call3_in_pane_ParamLimits

0x364a,	// (0x0009b174) bg_popup_call3_in_pane

0x36c0,	// (0x0009b1ea) popup_call3_audio_in_window_g1_ParamLimits

0x36c0,	// (0x0009b1ea) popup_call3_audio_in_window_g1

0x36e0,	// (0x0009b20a) popup_call3_audio_in_window_g2_ParamLimits

0x36e0,	// (0x0009b20a) popup_call3_audio_in_window_g2

0x3700,	// (0x0009b22a) popup_call3_audio_in_window_g3_ParamLimits

0x3700,	// (0x0009b22a) popup_call3_audio_in_window_g3

0x0003,

0xf55a,	// (0x000a7084) popup_call3_audio_in_window_g_ParamLimits

0xf55a,	// (0x000a7084) popup_call3_audio_in_window_g

0x3731,	// (0x0009b25b) popup_call3_audio_in_window_t1_ParamLimits

0x3731,	// (0x0009b25b) popup_call3_audio_in_window_t1

0x376f,	// (0x0009b299) popup_call3_audio_in_window_t2_ParamLimits

0x376f,	// (0x0009b299) popup_call3_audio_in_window_t2

0x37ad,	// (0x0009b2d7) popup_call3_audio_in_window_t3_ParamLimits

0x37ad,	// (0x0009b2d7) popup_call3_audio_in_window_t3

0x0002,

0xf563,	// (0x000a708d) popup_call3_audio_in_window_t_ParamLimits

0xf563,	// (0x000a708d) popup_call3_audio_in_window_t

0xc6ed,	// (0x000a4217) bg_popup_call3_rect_pane

0xe2e4,	// (0x000a5e0e) bg_popup_call3_rect_pane_g1

0xc57d,	// (0x000a40a7) bg_popup_call3_rect_pane_g2

0xe2ec,	// (0x000a5e16) bg_popup_call3_rect_pane_g3

0xe2f4,	// (0x000a5e1e) bg_popup_call3_rect_pane_g4

0xe2fc,	// (0x000a5e26) bg_popup_call3_rect_pane_g5

0xe304,	// (0x000a5e2e) bg_popup_call3_rect_pane_g6

0xe30c,	// (0x000a5e36) bg_popup_call3_rect_pane_g7

0xaa49,	// (0x000a2573) mup_visualizer_osc_pane

0xaa49,	// (0x000a2573) mup_visualizer_spec_pane

0x367a,	// (0x0009b1a4) call3_video_qcif_pane_ParamLimits

0x367a,	// (0x0009b1a4) call3_video_qcif_pane

0x368d,	// (0x0009b1b7) call3_video_qcif_uncrop_pane_ParamLimits

0x368d,	// (0x0009b1b7) call3_video_qcif_uncrop_pane

0x369b,	// (0x0009b1c5) call3_video_subqcif_pane_ParamLimits

0x369b,	// (0x0009b1c5) call3_video_subqcif_pane

0x36af,	// (0x0009b1d9) call3_video_subqcif_uncrop_pane_ParamLimits

0x36af,	// (0x0009b1d9) call3_video_subqcif_uncrop_pane

0x3720,	// (0x0009b24a) popup_call3_audio_in_window_g4_ParamLimits

0x3720,	// (0x0009b24a) popup_call3_audio_in_window_g4

0xaa49,	// (0x000a2573) mup_spec_half_pane

0xaa49,	// (0x000a2573) mup_spec_half_pane_cp

0xaa49,	// (0x000a2573) mup_osc_middle_pane

0xc43f,	// (0x000a3f69) mup_visualizer_osc_pane_g1

0xe4de,	// (0x000a6008) mup_spec_bar_pane_ParamLimits

0xe4de,	// (0x000a6008) mup_spec_bar_pane

0xc43f,	// (0x000a3f69) mup_spec_bar_pane_g1

0xc43f,	// (0x000a3f69) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x000a6bd9) mup_spec_bar_pane_g

0x0f1a,	// (0x00098a44) aid_cale_week_size_cell_pane_ParamLimits

0x0f34,	// (0x00098a5e) bg_cale_heading_pane_ParamLimits

0xc5c8,	// (0x000a40f2) bg_cale_pane_cp01_ParamLimits

0x0f4c,	// (0x00098a76) cale_week_corner_pane_ParamLimits

0x0f6b,	// (0x00098a95) cale_week_day_heading_pane_ParamLimits

0x0f88,	// (0x00098ab2) cale_week_scroll_pane_g1_ParamLimits

0x0f9b,	// (0x00098ac5) cale_week_scroll_pane_g2_ParamLimits

0x0fb3,	// (0x00098add) cale_week_scroll_pane_g3_ParamLimits

0x0fcb,	// (0x00098af5) cale_week_scroll_pane_g4_ParamLimits

0x0fe3,	// (0x00098b0d) cale_week_scroll_pane_g5_ParamLimits

0x1003,	// (0x00098b2d) cale_week_scroll_pane_g6_ParamLimits

0x1023,	// (0x00098b4d) cale_week_scroll_pane_g7_ParamLimits

0x1043,	// (0x00098b6d) cale_week_scroll_pane_g8_ParamLimits

0x1067,	// (0x00098b91) cale_week_scroll_pane_g9_ParamLimits

0x107f,	// (0x00098ba9) cale_week_scroll_pane_g10_ParamLimits

0x1097,	// (0x00098bc1) cale_week_scroll_pane_g11_ParamLimits

0x10af,	// (0x00098bd9) cale_week_scroll_pane_g12_ParamLimits

0x10c7,	// (0x00098bf1) cale_week_scroll_pane_g13_ParamLimits

0x10c7,	// (0x00098bf1) cale_week_scroll_pane_g14_ParamLimits

0x10c7,	// (0x00098bf1) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x000a6c50) cale_week_scroll_pane_g_ParamLimits

0x1103,	// (0x00098c2d) cale_week_time_pane_ParamLimits

0x1127,	// (0x00098c51) grid_cale_week_pane_ParamLimits

0xc5e5,	// (0x000a410f) listscroll_cale_week_pane_t1

0xc5f7,	// (0x000a4121) scroll_pane_cp08_ParamLimits

0x1b8c,	// (0x000996b6) cale_month_corner_pane_ParamLimits

0xc9df,	// (0x000a4509) cale_month_pane_t1

0x1fa6,	// (0x00099ad0) cale_month_week_pane_ParamLimits

0x24f2,	// (0x0009a01c) popup_call_status_window_g1_ParamLimits

0x2506,	// (0x0009a030) popup_call_status_window_g2_ParamLimits

0x251a,	// (0x0009a044) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x000a6dca) popup_call_status_window_g_ParamLimits

0xcd9f,	// (0x000a48c9) aid_call2_pane

0x2a3a,	// (0x0009a564) msg_header_pane_g1

0x2b8d,	// (0x0009a6b7) postcard_address2_pane_ParamLimits

0x2b8d,	// (0x0009a6b7) postcard_address2_pane

0x2b9f,	// (0x0009a6c9) postcard_message2_pane_ParamLimits

0x2b9f,	// (0x0009a6c9) postcard_message2_pane

0x361a,	// (0x0009b144) message2_row_pane_ParamLimits

0x361a,	// (0x0009b144) message2_row_pane

0x3637,	// (0x0009b161) address2_row_pane_ParamLimits

0x3637,	// (0x0009b161) address2_row_pane

0xe4ab,	// (0x000a5fd5) postcard_message2_row_pane_g1

0xe4b3,	// (0x000a5fdd) postcard_message2_row_pane_t1

0xe4ab,	// (0x000a5fd5) address2_row_pane_g1

0xe4b3,	// (0x000a5fdd) address2_row_pane_t1

0x1461,	// (0x00098f8b) aid_size_cell_vorec

0xc12b,	// (0x000a3c55) main_rss_pane

0xe4c1,	// (0x000a5feb) rss_list_single_pane_ParamLimits

0xe4c1,	// (0x000a5feb) rss_list_single_pane

0xe4cf,	// (0x000a5ff9) rss_list_single_pane_t1

0xe4cf,	// (0x000a5ff9) rss_list_single_pane_t2

0x0001,

0xf54e,	// (0x000a7078) rss_list_single_pane_t

0xc12b,	// (0x000a3c55) main_camera2_pane

0xc12b,	// (0x000a3c55) main_video2_pane

0x9feb,	// (0x000a1b15) cams_zoom_pane_cp2_ParamLimits

0x9feb,	// (0x000a1b15) cams_zoom_pane_cp2

0x9feb,	// (0x000a1b15) image2_vga_pane_ParamLimits

0x9feb,	// (0x000a1b15) image2_vga_pane

0x9ff9,	// (0x000a1b23) main_camera2_pane_g1_ParamLimits

0x9ff9,	// (0x000a1b23) main_camera2_pane_g1

0x9ff9,	// (0x000a1b23) main_camera2_pane_g2_ParamLimits

0x9ff9,	// (0x000a1b23) main_camera2_pane_g2

0x9ff9,	// (0x000a1b23) main_camera2_pane_g3_ParamLimits

0x9ff9,	// (0x000a1b23) main_camera2_pane_g3

0x9ff9,	// (0x000a1b23) main_camera2_pane_g4_ParamLimits

0x9ff9,	// (0x000a1b23) main_camera2_pane_g4

0x9ff9,	// (0x000a1b23) main_camera2_pane_g5_ParamLimits

0x9ff9,	// (0x000a1b23) main_camera2_pane_g5

0x9ff9,	// (0x000a1b23) main_camera2_pane_g6_ParamLimits

0x9ff9,	// (0x000a1b23) main_camera2_pane_g6

0x9ff9,	// (0x000a1b23) main_camera2_pane_g7_ParamLimits

0x9ff9,	// (0x000a1b23) main_camera2_pane_g7

0x9ff9,	// (0x000a1b23) main_camera2_pane_g8_ParamLimits

0x9ff9,	// (0x000a1b23) main_camera2_pane_g8

0x0008,

0xf56a,	// (0x000a7094) main_camera2_pane_g_ParamLimits

0xf56a,	// (0x000a7094) main_camera2_pane_g

0x37e1,	// (0x0009b30b) main_camera2_pane_t1_ParamLimits

0x37e1,	// (0x0009b30b) main_camera2_pane_t1

0x37e1,	// (0x0009b30b) main_camera2_pane_t2_ParamLimits

0x37e1,	// (0x0009b30b) main_camera2_pane_t2

0x37e1,	// (0x0009b30b) main_camera2_pane_t3_ParamLimits

0x37e1,	// (0x0009b30b) main_camera2_pane_t3

0x37e1,	// (0x0009b30b) main_camera2_pane_t4_ParamLimits

0x37e1,	// (0x0009b30b) main_camera2_pane_t4

0x0006,

0xf57d,	// (0x000a70a7) main_camera2_pane_t_ParamLimits

0xf57d,	// (0x000a70a7) main_camera2_pane_t

0xa03d,	// (0x000a1b67) cams_zoom_pane_cp4_ParamLimits

0xa03d,	// (0x000a1b67) cams_zoom_pane_cp4

0x37f5,	// (0x0009b31f) image2_cif_pane_ParamLimits

0x37f5,	// (0x0009b31f) image2_cif_pane

0x9dd4,	// (0x000a18fe) image2_subqcif_pane_ParamLimits

0x9dd4,	// (0x000a18fe) image2_subqcif_pane

0x3803,	// (0x0009b32d) main_video2_pane_g1_ParamLimits

0x3803,	// (0x0009b32d) main_video2_pane_g1

0x3803,	// (0x0009b32d) main_video2_pane_g2_ParamLimits

0x3803,	// (0x0009b32d) main_video2_pane_g2

0x3803,	// (0x0009b32d) main_video2_pane_g3_ParamLimits

0x3803,	// (0x0009b32d) main_video2_pane_g3

0x3803,	// (0x0009b32d) main_video2_pane_g4_ParamLimits

0x3803,	// (0x0009b32d) main_video2_pane_g4

0x3803,	// (0x0009b32d) main_video2_pane_g5_ParamLimits

0x3803,	// (0x0009b32d) main_video2_pane_g5

0x3803,	// (0x0009b32d) main_video2_pane_g6_ParamLimits

0x3803,	// (0x0009b32d) main_video2_pane_g6

0x0005,

0xf58c,	// (0x000a70b6) main_video2_pane_g_ParamLimits

0xf58c,	// (0x000a70b6) main_video2_pane_g

0x3811,	// (0x0009b33b) main_video2_pane_t1_ParamLimits

0x3811,	// (0x0009b33b) main_video2_pane_t1

0x3811,	// (0x0009b33b) main_video2_pane_t2_ParamLimits

0x3811,	// (0x0009b33b) main_video2_pane_t2

0x3811,	// (0x0009b33b) main_video2_pane_t3_ParamLimits

0x3811,	// (0x0009b33b) main_video2_pane_t3

0x0002,

0xf599,	// (0x000a70c3) main_video2_pane_t_ParamLimits

0xf599,	// (0x000a70c3) main_video2_pane_t

0x315c,	// (0x0009ac86) call_muted_g2

0x0001,

0xf540,	// (0x000a706a) call_muted_g

0xc12b,	// (0x000a3c55) main_mup2_pane

0xd205,	// (0x000a4d2f) main_mup2_pane_g1_ParamLimits

0xd205,	// (0x000a4d2f) main_mup2_pane_g1

0xd205,	// (0x000a4d2f) main_mup2_pane_g2_ParamLimits

0xd205,	// (0x000a4d2f) main_mup2_pane_g2

0xa077,	// (0x000a1ba1) main_mup_pane_g13_cp1

0x9de2,	// (0x000a190c) mup_volume_pane_cp1

0xd205,	// (0x000a4d2f) main_mup2_pane_g4_ParamLimits

0xd205,	// (0x000a4d2f) main_mup2_pane_g4

0xd205,	// (0x000a4d2f) main_mup2_pane_g5_ParamLimits

0xd205,	// (0x000a4d2f) main_mup2_pane_g5

0xd205,	// (0x000a4d2f) main_mup2_pane_g6_ParamLimits

0xd205,	// (0x000a4d2f) main_mup2_pane_g6

0xd205,	// (0x000a4d2f) main_mup2_pane_g7_ParamLimits

0xd205,	// (0x000a4d2f) main_mup2_pane_g7

0x0006,

0xf5a0,	// (0x000a70ca) main_mup2_pane_g_ParamLimits

0xf5a0,	// (0x000a70ca) main_mup2_pane_g

0xd213,	// (0x000a4d3d) main_mup2_pane_t1_ParamLimits

0xd213,	// (0x000a4d3d) main_mup2_pane_t1

0xd213,	// (0x000a4d3d) main_mup2_pane_t2_ParamLimits

0xd213,	// (0x000a4d3d) main_mup2_pane_t2

0xd213,	// (0x000a4d3d) main_mup2_pane_t3_ParamLimits

0xd213,	// (0x000a4d3d) main_mup2_pane_t3

0xd213,	// (0x000a4d3d) main_mup2_pane_t4_ParamLimits

0xd213,	// (0x000a4d3d) main_mup2_pane_t4

0xd213,	// (0x000a4d3d) main_mup2_pane_t5_ParamLimits

0xd213,	// (0x000a4d3d) main_mup2_pane_t5

0xd213,	// (0x000a4d3d) main_mup2_pane_t6_ParamLimits

0xd213,	// (0x000a4d3d) main_mup2_pane_t6

0x0005,

0xf5af,	// (0x000a70d9) main_mup2_pane_t_ParamLimits

0xf5af,	// (0x000a70d9) main_mup2_pane_t

0xd227,	// (0x000a4d51) mup2_visualizer_pane_ParamLimits

0xd227,	// (0x000a4d51) mup2_visualizer_pane

0xd227,	// (0x000a4d51) mup_progress_pane_cp_ParamLimits

0xd227,	// (0x000a4d51) mup_progress_pane_cp

0xa061,	// (0x000a1b8b) mup_volume_pane_cp_ParamLimits

0xa061,	// (0x000a1b8b) mup_volume_pane_cp

0xc401,	// (0x000a3f2b) mup2_visualizer_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) mup2_visualizer_pane_g1

0xc40f,	// (0x000a3f39) mup2_visualizer_pane_g2_ParamLimits

0xc40f,	// (0x000a3f39) mup2_visualizer_pane_g2

0xc40f,	// (0x000a3f39) mup2_visualizer_pane_g3_ParamLimits

0xc40f,	// (0x000a3f39) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x000a6bc9) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x000a6bc9) mup2_visualizer_pane_g

0xaa49,	// (0x000a2573) aid_size_cell_fmradio

0x330e,	// (0x0009ae38) aid_height_parent_landcape

0xc83d,	// (0x000a4367) wml_content_pane_cp

0xc845,	// (0x000a436f) wml_tabs_pane

0xc84e,	// (0x000a4378) popup_wml_miniature_window

0xc856,	// (0x000a4380) scroll_pane_cp021

0xc86a,	// (0x000a4394) wml_content_pane_comp8

0xc12b,	// (0x000a3c55) bg_popup_sub_pane_cp05

0xe575,	// (0x000a609f) popup_wml_miniature_window_g1

0xe57d,	// (0x000a60a7) wml_miniature_view_pane

0x3825,	// (0x0009b34f) aid_size_wml_view

0x382d,	// (0x0009b357) wml_miniature_view_pane_g1

0x3836,	// (0x0009b360) wml_miniature_view_pane_g2

0x383f,	// (0x0009b369) wml_miniature_view_pane_g3

0x3847,	// (0x0009b371) wml_miniature_view_pane_g4

0x384f,	// (0x0009b379) wml_miniature_view_pane_g5

0x3857,	// (0x0009b381) wml_miniature_view_pane_g6

0x385f,	// (0x0009b389) wml_miniature_view_pane_g7

0x3867,	// (0x0009b391) wml_miniature_view_pane_g8

0x0007,

0xf5bc,	// (0x000a70e6) wml_miniature_view_pane_g

0xe585,	// (0x000a60af) background_graphic_ParamLimits

0xe585,	// (0x000a60af) background_graphic

0xe591,	// (0x000a60bb) wml_tabs_2_pane

0xe59a,	// (0x000a60c4) wml_tabs_3_pane_ParamLimits

0xe59a,	// (0x000a60c4) wml_tabs_3_pane

0xe5ac,	// (0x000a60d6) wml_tabs_4_pane_ParamLimits

0xe5ac,	// (0x000a60d6) wml_tabs_4_pane

0xe5c2,	// (0x000a60ec) wml_tabs_5_pane_ParamLimits

0xe5c2,	// (0x000a60ec) wml_tabs_5_pane

0xe5dc,	// (0x000a6106) wml_tabs_pane_g2_ParamLimits

0xe5dc,	// (0x000a6106) wml_tabs_pane_g2

0xe5f1,	// (0x000a611b) wml_tabs_pane_g3_ParamLimits

0xe5f1,	// (0x000a611b) wml_tabs_pane_g3

0xe606,	// (0x000a6130) wml_tabs_2_active_pane_ParamLimits

0xe606,	// (0x000a6130) wml_tabs_2_active_pane

0xe606,	// (0x000a6130) wml_tabs_2_passive_pane_ParamLimits

0xe606,	// (0x000a6130) wml_tabs_2_passive_pane

0x386f,	// (0x0009b399) wml_tabs_3_active_pane_cp_ParamLimits

0x386f,	// (0x0009b399) wml_tabs_3_active_pane_cp

0x3884,	// (0x0009b3ae) wml_tabs_3_passive_pane_ParamLimits

0x3884,	// (0x0009b3ae) wml_tabs_3_passive_pane

0x3897,	// (0x0009b3c1) wml_tabs_3_passive_pane_cp_ParamLimits

0x3897,	// (0x0009b3c1) wml_tabs_3_passive_pane_cp

0x38ae,	// (0x0009b3d8) tabs_4_active_pane

0x38b6,	// (0x0009b3e0) tabs_4_passive_pane

0x38c0,	// (0x0009b3ea) tabs_4_passive_pane_cp

0x38c8,	// (0x0009b3f2) tabs_4_passive_pane_cp2

0x30d2,	// (0x0009abfc) aid_height_text

0xd227,	// (0x000a4d51) mup_volume_cont_pane_ParamLimits

0xd227,	// (0x000a4d51) mup_volume_cont_pane

0xaa49,	// (0x000a2573) aid_size_cell_pinb

0xaa49,	// (0x000a2573) aid_size_list_pinb

0xd227,	// (0x000a4d51) mup2_volume_cont_pane_ParamLimits

0xd227,	// (0x000a4d51) mup2_volume_cont_pane

0xa04b,	// (0x000a1b75) mup2_volume_cont_pane_g1_ParamLimits

0xa04b,	// (0x000a1b75) mup2_volume_cont_pane_g1

0x09cf,	// (0x000984f9) aid_size_cell_touch_ParamLimits

0x09cf,	// (0x000984f9) aid_size_cell_touch

0x0bfb,	// (0x00098725) touch_pane_ParamLimits

0x0bfb,	// (0x00098725) touch_pane

0x9de2,	// (0x000a190c) main_rss2_pane

0xe61d,	// (0x000a6147) listscroll_rss2_pane

0xe626,	// (0x000a6150) rss2_navigation_pane

0xe62e,	// (0x000a6158) list_rss2_pane

0xceb8,	// (0x000a49e2) scroll_pane_cp22

0xe636,	// (0x000a6160) rss2_navigation_pane_g1

0xe63f,	// (0x000a6169) rss2_navigation_pane_g2

0xe647,	// (0x000a6171) rss2_navigation_pane_g3

0x0002,

0xf5cd,	// (0x000a70f7) rss2_navigation_pane_g

0xe64f,	// (0x000a6179) rss2_navigation_pane_t1

0x38d2,	// (0x0009b3fc) rss2_list_single_pane_ParamLimits

0x38d2,	// (0x0009b3fc) rss2_list_single_pane

0xe65d,	// (0x000a6187) rss2_list_single_pane_t2

0xe66b,	// (0x000a6195) rss2_list_single_pane_t3_ParamLimits

0xe66b,	// (0x000a6195) rss2_list_single_pane_t3

0xe688,	// (0x000a61b2) rss2_list_single_pane_t4

0x23ce,	// (0x00099ef8) smil_status_pane_g1

0x9dd4,	// (0x000a18fe) main_image2_pane_ParamLimits

0x9dd4,	// (0x000a18fe) main_image2_pane

0x9ff9,	// (0x000a1b23) main_camera2_pane_g9_ParamLimits

0x9ff9,	// (0x000a1b23) main_camera2_pane_g9

0x37e1,	// (0x0009b30b) main_camera2_pane_t5_ParamLimits

0x37e1,	// (0x0009b30b) main_camera2_pane_t5

0xa007,	// (0x000a1b31) main_camera2_pane_t6_ParamLimits

0xa007,	// (0x000a1b31) main_camera2_pane_t6

0x38e8,	// (0x0009b412) main_image2_pane_g1_ParamLimits

0x38e8,	// (0x0009b412) main_image2_pane_g1

0x2da5,	// (0x0009a8cf) smil2_video_pane_ParamLimits

0x2da5,	// (0x0009a8cf) smil2_video_pane

0x9d8b,	// (0x000a18b5) aid_zoom_text_primary_cp

0x9dca,	// (0x000a18f4) popup_preview_fixed_window

0xc7a6,	// (0x000a42d0) im_reading_pane_g1

0x37d3,	// (0x0009b2fd) cams2_bc_adjust_pane_cp_ParamLimits

0x37d3,	// (0x0009b2fd) cams2_bc_adjust_pane_cp

0xa02f,	// (0x000a1b59) cams2_bc_adjust_pane_ParamLimits

0xa02f,	// (0x000a1b59) cams2_bc_adjust_pane

0xa077,	// (0x000a1ba1) cams2_bc_adjust_pane_g1

0x9de2,	// (0x000a190c) cams2_slider_pane

0xa077,	// (0x000a1ba1) cams2_slider_pane_g1

0xa077,	// (0x000a1ba1) cams2_slider_pane_g2

0x0006,

0xf5d4,	// (0x000a70fe) cams2_slider_pane_g

0x0cc4,	// (0x000987ee) calc_display_pane_ParamLimits

0x0ce9,	// (0x00098813) calc_paper_pane_ParamLimits

0x0d0c,	// (0x00098836) grid_calc_pane_ParamLimits

0x9f10,	// (0x000a1a3a) popup_clock_digital_window_t1_ParamLimits

0xd414,	// (0x000a4f3e) main_image_pane_t1

0x0ca6,	// (0x000987d0) aid_size_cell_calc_ParamLimits

0x0ca6,	// (0x000987d0) aid_size_cell_calc

0x3366,	// (0x0009ae90) popup_blid_sat_info2_window_ParamLimits

0x3366,	// (0x0009ae90) popup_blid_sat_info2_window

0xe696,	// (0x000a61c0) aid_size_cell_blid

0xe69e,	// (0x000a61c8) bg_popup_window_pane_cp07

0xe6c1,	// (0x000a61eb) grid_popup_blid_pane

0xe6cb,	// (0x000a61f5) heading_pane_cp05_ParamLimits

0xe6cb,	// (0x000a61f5) heading_pane_cp05

0xe795,	// (0x000a62bf) cell_popup_blid_pane_ParamLimits

0xe795,	// (0x000a62bf) cell_popup_blid_pane

0xe7b9,	// (0x000a62e3) cell_popup_blid_pane_g1

0xe7c1,	// (0x000a62eb) cell_popup_blid_pane_t1

0xd227,	// (0x000a4d51) mup2_indicator_pane_ParamLimits

0xd227,	// (0x000a4d51) mup2_indicator_pane

0xaa49,	// (0x000a2573) mup2_visualizer_osc_pane

0xe55f,	// (0x000a6089) mup2_visualizer_spec_pane_ParamLimits

0xe55f,	// (0x000a6089) mup2_visualizer_spec_pane

0xaa49,	// (0x000a2573) mup2_spec_half_pane

0xaa49,	// (0x000a2573) mup2_spec_half_pane_cp

0xe7cf,	// (0x000a62f9) mup2_spec_bar_pane_ParamLimits

0xe7cf,	// (0x000a62f9) mup2_spec_bar_pane

0xc43f,	// (0x000a3f69) mup2_spec_bar_pane_g1

0xe7ee,	// (0x000a6318) mup2_spec_bar_pane_g2

0x0001,

0xf5fa,	// (0x000a7124) mup2_spec_bar_pane_g

0xaa49,	// (0x000a2573) mup2_osc_middle_pane

0xc43f,	// (0x000a3f69) mup2_visualizer_osc_pane_g1

0xbb51,	// (0x000a367b) popup_number_entry_window_t1_ParamLimits

0xbb64,	// (0x000a368e) popup_number_entry_window_t2_ParamLimits

0xbb76,	// (0x000a36a0) popup_number_entry_window_t3_ParamLimits

0x0c4d,	// (0x00098777) popup_number_entry_window_t5_ParamLimits

0x0c4d,	// (0x00098777) popup_number_entry_window_t5

0xf040,	// (0x000a6b6a) popup_number_entry_window_t_ParamLimits

0xbb88,	// (0x000a36b2) text_title_cp2_ParamLimits

0x9f4f,	// (0x000a1a79) aid_hotspot_pointer_text2_pane

0x9f69,	// (0x000a1a93) main_viewer_pane_g9_ParamLimits

0x9f69,	// (0x000a1a93) main_viewer_pane_g9

0xc9df,	// (0x000a4509) cale_month_pane_t1_ParamLimits

0xca1c,	// (0x000a4546) bg_cale_pane_ParamLimits

0xca34,	// (0x000a455e) list_cale_pane_ParamLimits

0xca45,	// (0x000a456f) listscroll_cale_day_pane_t1

0xca57,	// (0x000a4581) scroll_pane_cp09_ParamLimits

0x27c7,	// (0x0009a2f1) main_mup_eq_pane_t1_ParamLimits

0x27c7,	// (0x0009a2f1) main_mup_eq_pane_t1

0x27e1,	// (0x0009a30b) main_mup_eq_pane_t2_ParamLimits

0x27e1,	// (0x0009a30b) main_mup_eq_pane_t2

0x27fb,	// (0x0009a325) main_mup_eq_pane_t3_ParamLimits

0x27fb,	// (0x0009a325) main_mup_eq_pane_t3

0x2817,	// (0x0009a341) main_mup_eq_pane_t4_ParamLimits

0x2817,	// (0x0009a341) main_mup_eq_pane_t4

0x2833,	// (0x0009a35d) main_mup_eq_pane_t5_ParamLimits

0x2833,	// (0x0009a35d) main_mup_eq_pane_t5

0x284f,	// (0x0009a379) main_mup_eq_pane_t6_ParamLimits

0x284f,	// (0x0009a379) main_mup_eq_pane_t6

0x2863,	// (0x0009a38d) main_mup_eq_pane_t7_ParamLimits

0x2863,	// (0x0009a38d) main_mup_eq_pane_t7

0x2877,	// (0x0009a3a1) main_mup_eq_pane_t8_ParamLimits

0x2877,	// (0x0009a3a1) main_mup_eq_pane_t8

0x288b,	// (0x0009a3b5) main_mup_eq_pane_t9_ParamLimits

0x288b,	// (0x0009a3b5) main_mup_eq_pane_t9

0x28a5,	// (0x0009a3cf) main_mup_eq_pane_t10_ParamLimits

0x28a5,	// (0x0009a3cf) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x000a6ec4) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x000a6ec4) main_mup_eq_pane_t

0x2954,	// (0x0009a47e) mup_equalizer_pane_cp5_ParamLimits

0x2968,	// (0x0009a492) mup_equalizer_pane_cp6_ParamLimits

0x297c,	// (0x0009a4a6) mup_equalizer_pane_cp7_ParamLimits

0x9de2,	// (0x000a190c) main_gallery_pane

0xe4fd,	// (0x000a6027) smil2_volume_pane

0xe505,	// (0x000a602f) smil_status_volume_pane_g1_ParamLimits

0xe518,	// (0x000a6042) smil_status_volume_pane_g2_ParamLimits

0x9fc9,	// (0x000a1af3) smil_status_volume_pane_g3_ParamLimits

0xf553,	// (0x000a707d) smil_status_volume_pane_g_ParamLimits

0xe69e,	// (0x000a61c8) bg_popup_window_pane_cp07_ParamLimits

0xe6ac,	// (0x000a61d6) blid_firmament_pane

0xbf15,	// (0x000a3a3f) aid_size_cell_gallery_ParamLimits

0xbf15,	// (0x000a3a3f) aid_size_cell_gallery

0xbf15,	// (0x000a3a3f) grid_gallery_pane_ParamLimits

0xbf15,	// (0x000a3a3f) grid_gallery_pane

0xe69e,	// (0x000a61c8) cell_gallery_pane_ParamLimits

0xe69e,	// (0x000a61c8) cell_gallery_pane

0xbf15,	// (0x000a3a3f) bg_cell_gallery_focus_pane_ParamLimits

0xbf15,	// (0x000a3a3f) bg_cell_gallery_focus_pane

0xc401,	// (0x000a3f2b) cell_gallery_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) cell_gallery_pane_g1

0xc401,	// (0x000a3f2b) cell_gallery_pane_g2_ParamLimits

0xc401,	// (0x000a3f2b) cell_gallery_pane_g2

0xc401,	// (0x000a3f2b) cell_gallery_pane_g3_ParamLimits

0xc401,	// (0x000a3f2b) cell_gallery_pane_g3

0xc40f,	// (0x000a3f39) cell_gallery_pane_g4_ParamLimits

0xc40f,	// (0x000a3f39) cell_gallery_pane_g4

0x0003,

0xf5ff,	// (0x000a7129) cell_gallery_pane_g_ParamLimits

0xf5ff,	// (0x000a7129) cell_gallery_pane_g

0xe7f8,	// (0x000a6322) bg_cell_gallery_focus_pane_g1

0xe800,	// (0x000a632a) bg_cell_gallery_focus_pane_g2

0xe808,	// (0x000a6332) bg_cell_gallery_focus_pane_g3

0xe810,	// (0x000a633a) bg_cell_gallery_focus_pane_g4

0xe818,	// (0x000a6342) bg_cell_gallery_focus_pane_g5

0xe820,	// (0x000a634a) bg_cell_gallery_focus_pane_g6

0xe828,	// (0x000a6352) bg_cell_gallery_focus_pane_g7

0xe830,	// (0x000a635a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf608,	// (0x000a7132) bg_cell_gallery_focus_pane_g

0xe838,	// (0x000a6362) aid_firma_cardinal

0xe84c,	// (0x000a6376) blid_firmament_pane_t1

0xe863,	// (0x000a638d) blid_firmament_pane_t2

0xe87a,	// (0x000a63a4) blid_firmament_pane_t3

0xe891,	// (0x000a63bb) blid_firmament_pane_t4

0x0003,

0xf619,	// (0x000a7143) blid_firmament_pane_t

0xe8a8,	// (0x000a63d2) blid_sat_info_pane

0xc43f,	// (0x000a3f69) blid_sat_info_pane_g1

0xc43f,	// (0x000a3f69) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x000a6bd9) blid_sat_info_pane_g

0xe8b8,	// (0x000a63e2) blid_sat_info_pane_t1

0xe8c6,	// (0x000a63f0) smil2_volume_content_pane

0xe8cf,	// (0x000a63f9) smil2_volume_pane_g1

0xc514,	// (0x000a403e) smil2_volume_content_pane_g1

0xe8d7,	// (0x000a6401) smil2_volume_content_pane_g2

0xe902,	// (0x000a642c) smil2_volume_content_pane_g3

0xe90b,	// (0x000a6435) smil2_volume_content_pane_g4

0xe914,	// (0x000a643e) smil2_volume_content_pane_g5

0xe91d,	// (0x000a6447) smil2_volume_content_pane_g6

0xe926,	// (0x000a6450) smil2_volume_content_pane_g7

0xe92f,	// (0x000a6459) smil2_volume_content_pane_g8

0xe938,	// (0x000a6462) smil2_volume_content_pane_g9

0xe941,	// (0x000a646b) smil2_volume_content_pane_g10

0x0009,

0xf622,	// (0x000a714c) smil2_volume_content_pane_g

0x11db,	// (0x00098d05) cale_week_day_heading_pane_t1_ParamLimits

0x1205,	// (0x00098d2f) cale_week_day_heading_pane_t2_ParamLimits

0x1234,	// (0x00098d5e) cale_week_day_heading_pane_t3_ParamLimits

0x1263,	// (0x00098d8d) cale_week_day_heading_pane_t4_ParamLimits

0x1292,	// (0x00098dbc) cale_week_day_heading_pane_t5_ParamLimits

0x12c9,	// (0x00098df3) cale_week_day_heading_pane_t6_ParamLimits

0x1300,	// (0x00098e2a) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x000a6c71) cale_week_day_heading_pane_t_ParamLimits

0xc614,	// (0x000a413e) bg_cale_side_pane_ParamLimits

0x132a,	// (0x00098e54) cale_week_time_pane_t1_ParamLimits

0x1344,	// (0x00098e6e) cale_week_time_pane_t2_ParamLimits

0x135e,	// (0x00098e88) cale_week_time_pane_t3_ParamLimits

0x1378,	// (0x00098ea2) cale_week_time_pane_t4_ParamLimits

0x1392,	// (0x00098ebc) cale_week_time_pane_t5_ParamLimits

0x13ac,	// (0x00098ed6) cale_week_time_pane_t6_ParamLimits

0x13c6,	// (0x00098ef0) cale_week_time_pane_t7_ParamLimits

0x13e0,	// (0x00098f0a) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x000a6c80) cale_week_time_pane_t_ParamLimits

0x1400,	// (0x00098f2a) cell_cale_week_pane_g2_ParamLimits

0xc614,	// (0x000a413e) bg_cale_side_pane_cp01_ParamLimits

0x21d3,	// (0x00099cfd) cale_month_week_pane_t1_ParamLimits

0x21ec,	// (0x00099d16) cale_month_week_pane_t2_ParamLimits

0x2205,	// (0x00099d2f) cale_month_week_pane_t3_ParamLimits

0x221e,	// (0x00099d48) cale_month_week_pane_t4_ParamLimits

0x2237,	// (0x00099d61) cale_month_week_pane_t5_ParamLimits

0x2250,	// (0x00099d7a) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x000a6d4e) cale_month_week_pane_t_ParamLimits

0x9e84,	// (0x000a19ae) cell_cale_month_pane_g1_ParamLimits

0x9de2,	// (0x000a190c) main_cale_event_viewer_pane

0xaa49,	// (0x000a2573) listscroll_cale_event_viewer_pane

0xe94a,	// (0x000a6474) list_cale_ev_pane

0xe952,	// (0x000a647c) scroll_pane_cp023

0xe95e,	// (0x000a6488) field_cale_ev_pane_ParamLimits

0xe95e,	// (0x000a6488) field_cale_ev_pane

0xe97c,	// (0x000a64a6) field_cale_ev_content_pane_ParamLimits

0xe97c,	// (0x000a64a6) field_cale_ev_content_pane

0xe988,	// (0x000a64b2) field_cale_ev_pane_g1_ParamLimits

0xe988,	// (0x000a64b2) field_cale_ev_pane_g1

0xe994,	// (0x000a64be) field_cale_ev_pane_g2_ParamLimits

0xe994,	// (0x000a64be) field_cale_ev_pane_g2

0xe9ac,	// (0x000a64d6) field_cale_ev_pane_g3_ParamLimits

0xe9ac,	// (0x000a64d6) field_cale_ev_pane_g3

0x0002,

0x005a,	// (0x00097b84) field_cale_ev_pane_g_ParamLimits

0x005a,	// (0x00097b84) field_cale_ev_pane_g

0xe9c4,	// (0x000a64ee) field_cale_ev_pane_t1_ParamLimits

0xe9c4,	// (0x000a64ee) field_cale_ev_pane_t1

0xe9db,	// (0x000a6505) field_cale_ev_content_pane_t1_ParamLimits

0xe9db,	// (0x000a6505) field_cale_ev_content_pane_t1

0xd270,	// (0x000a4d9a) bg_button_pane_cp01

0x0f08,	// (0x00098a32) listscroll_cale_week_pane_ParamLimits

0xc5bf,	// (0x000a40e9) popup_toolbar_window_cp01

0xc5e5,	// (0x000a410f) listscroll_cale_week_pane_t1_ParamLimits

0x0f08,	// (0x00098a32) listscroll_cale_day_pane_ParamLimits

0xc5bf,	// (0x000a40e9) popup_toolbar_window_cp02

0xca45,	// (0x000a456f) listscroll_cale_day_pane_t1_ParamLimits

0x332c,	// (0x0009ae56) main_cale_month_pane_ParamLimits

0x9fb4,	// (0x000a1ade) popup_toolbar_window_cp03_ParamLimits

0x9fb4,	// (0x000a1ade) popup_toolbar_window_cp03

0x2c6d,	// (0x0009a797) main_image_pane_g2_ParamLimits

0x2c6d,	// (0x0009a797) main_image_pane_g2

0x2c7e,	// (0x0009a7a8) main_image_pane_g3_ParamLimits

0x2c7e,	// (0x0009a7a8) main_image_pane_g3

0x0002,

0xf42c,	// (0x000a6f56) main_image_pane_g_ParamLimits

0xf42c,	// (0x000a6f56) main_image_pane_g

0xd414,	// (0x000a4f3e) main_image_pane_t1_ParamLimits

0x2c8f,	// (0x0009a7b9) main_image_pane_t2_ParamLimits

0x2c8f,	// (0x0009a7b9) main_image_pane_t2

0x2ca1,	// (0x0009a7cb) main_image_pane_t3_ParamLimits

0x2ca1,	// (0x0009a7cb) main_image_pane_t3

0x2cc9,	// (0x0009a7f3) main_image_pane_t4_ParamLimits

0x2cc9,	// (0x0009a7f3) main_image_pane_t4

0x0003,

0xf433,	// (0x000a6f5d) main_image_pane_t_ParamLimits

0xf433,	// (0x000a6f5d) main_image_pane_t

0x2ce9,	// (0x0009a813) popup_image_details_window_cp01

0x2cf3,	// (0x0009a81d) popup_toobar_trans_pane_cp01_ParamLimits

0x2cf3,	// (0x0009a81d) popup_toobar_trans_pane_cp01

0x3437,	// (0x0009af61) popup_image_details_window_ParamLimits

0x3437,	// (0x0009af61) popup_image_details_window

0x9f87,	// (0x000a1ab1) popup_image_focus_window

0x9feb,	// (0x000a1b15) camera2_autofocus_pane_ParamLimits

0x9feb,	// (0x000a1b15) camera2_autofocus_pane

0xaa49,	// (0x000a2573) bg_popup_sub_pane_cp06

0xe9f9,	// (0x000a6523) popup_image_focus_window_g1

0xea01,	// (0x000a652b) popup_image_focus_window_g2

0xea09,	// (0x000a6533) popup_image_focus_window_g3

0xea11,	// (0x000a653b) popup_image_focus_window_g4

0x0003,

0x0061,	// (0x00097b8b) popup_image_focus_window_g

0xea19,	// (0x000a6543) popup_image_focus_window_t1

0xea27,	// (0x000a6551) popup_image_focus_window_t2

0xea37,	// (0x000a6561) popup_image_focus_window_t3

0x0002,

0x006a,	// (0x00097b94) popup_image_focus_window_t

0xc401,	// (0x000a3f2b) camera2_autofocus_pane_g1

0xbf15,	// (0x000a3a3f) bg_tb_trans_pane_cp01

0xea45,	// (0x000a656f) popup_image_details_window_g1

0xea58,	// (0x000a6582) popup_image_details_window_g2

0x0002,

0x007c,	// (0x00097ba6) popup_image_details_window_g

0xea81,	// (0x000a65ab) popup_image_details_window_t1

0xea93,	// (0x000a65bd) popup_image_details_window_t2

0xeaac,	// (0x000a65d6) popup_image_details_window_t3

0xeac0,	// (0x000a65ea) popup_image_details_window_t4

0xeadb,	// (0x000a6605) popup_image_details_window_t5

0x0004,

0x0083,	// (0x00097bad) popup_image_details_window_t

0xc489,	// (0x000a3fb3) bg_calc_paper_pane_ParamLimits

0x9de2,	// (0x000a190c) grid_highlight_pane_cp013

0x9df4,	// (0x000a191e) list_calc_pane_ParamLimits

0x9e06,	// (0x000a1930) scroll_pane_cp024

0xc49d,	// (0x000a3fc7) bg_calc_display_pane_ParamLimits

0x0d4e,	// (0x00098878) calc_display_pane_t1_ParamLimits

0x0d60,	// (0x0009888a) calc_display_pane_t2_ParamLimits

0x9e0e,	// (0x000a1938) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x000a6bf1) calc_display_pane_t_ParamLimits

0x0e1a,	// (0x00098944) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x000a6c0e) cell_calc_pane_g

0x0e23,	// (0x0009894d) cell_calc_pane_t1

0xc4f2,	// (0x000a401c) grid_highlight_pane_cp02_ParamLimits

0xc508,	// (0x000a4032) toolbar_button_pane_cp01_ParamLimits

0xc508,	// (0x000a4032) toolbar_button_pane_cp01

0xd459,	// (0x000a4f83) temp_image_control_pane_ParamLimits

0xd459,	// (0x000a4f83) temp_image_control_pane

0x9dd4,	// (0x000a18fe) main_mp3_pane

0xeaf5,	// (0x000a661f) temp_image_control_pane_g1_ParamLimits

0xeaf5,	// (0x000a661f) temp_image_control_pane_g1

0xeb03,	// (0x000a662d) temp_image_control_pane_g2_ParamLimits

0xeb03,	// (0x000a662d) temp_image_control_pane_g2

0xeb15,	// (0x000a663f) temp_image_control_pane_g3_ParamLimits

0xeb15,	// (0x000a663f) temp_image_control_pane_g3

0x38fe,	// (0x0009b428) temp_image_control_pane_g4_ParamLimits

0x38fe,	// (0x0009b428) temp_image_control_pane_g4

0x0003,

0xf642,	// (0x000a716c) temp_image_control_pane_g_ParamLimits

0xf642,	// (0x000a716c) temp_image_control_pane_g

0xeaf5,	// (0x000a661f) main_mp3_pane_g1

0x3911,	// (0x0009b43b) main_mp3_pane_g2

0x0007,

0xf64b,	// (0x000a7175) main_mp3_pane_g

0xeb4a,	// (0x000a6674) main_mp3_pane_t1

0xc40f,	// (0x000a3f39) main_camera_pane_g8_ParamLimits

0xc40f,	// (0x000a3f39) main_camera_pane_g8

0x15ce,	// (0x000990f8) main_video_pane_g7_ParamLimits

0x15ce,	// (0x000990f8) main_video_pane_g7

0xa01b,	// (0x000a1b45) main_camera2_pane_t7_ParamLimits

0xa01b,	// (0x000a1b45) main_camera2_pane_t7

0xc7fd,	// (0x000a4327) scroll_pane_cp025_ParamLimits

0xc7fd,	// (0x000a4327) scroll_pane_cp025

0xc811,	// (0x000a433b) scroll_pane_cp026_ParamLimits

0xc811,	// (0x000a433b) scroll_pane_cp026

0xc820,	// (0x000a434a) wml_content_pane_ParamLimits

0x9de2,	// (0x000a190c) main_touch_calib_pane

0x39e5,	// (0x0009b50f) main_touch_calib_pane_g1

0x39f7,	// (0x0009b521) main_touch_calib_pane_g2

0x3a09,	// (0x0009b533) main_touch_calib_pane_g3

0x3a1b,	// (0x0009b545) main_touch_calib_pane_g4

0x0003,

0xf669,	// (0x000a7193) main_touch_calib_pane_g

0x3a2d,	// (0x0009b557) main_touch_calib_pane_t1

0x3a47,	// (0x0009b571) main_touch_calib_pane_t2

0x0004,

0xf672,	// (0x000a719c) main_touch_calib_pane_t

0xcf87,	// (0x000a4ab1) mup_progress_pane_cp02

0xcfbc,	// (0x000a4ae6) navi_pane_g1

0xd077,	// (0x000a4ba1) navi_pane_mp_t3

0x9dd4,	// (0x000a18fe) main_mp3_pane_ParamLimits

0x35c2,	// (0x0009b0ec) navi_pane_ParamLimits

0xeaf5,	// (0x000a661f) main_mp3_pane_g1_ParamLimits

0x3911,	// (0x0009b43b) main_mp3_pane_g2_ParamLimits

0x391f,	// (0x0009b449) main_mp3_pane_g3_ParamLimits

0x391f,	// (0x0009b449) main_mp3_pane_g3

0x392d,	// (0x0009b457) main_mp3_pane_g4_ParamLimits

0x392d,	// (0x0009b457) main_mp3_pane_g4

0xc401,	// (0x000a3f2b) main_mp3_pane_g5_ParamLimits

0xc401,	// (0x000a3f2b) main_mp3_pane_g5

0xeb25,	// (0x000a664f) main_mp3_pane_g6_ParamLimits

0xeb25,	// (0x000a664f) main_mp3_pane_g6

0xeb32,	// (0x000a665c) main_mp3_pane_g7_ParamLimits

0xeb32,	// (0x000a665c) main_mp3_pane_g7

0xeb3e,	// (0x000a6668) main_mp3_pane_g8_ParamLimits

0xeb3e,	// (0x000a6668) main_mp3_pane_g8

0xf64b,	// (0x000a7175) main_mp3_pane_g_ParamLimits

0x3939,	// (0x0009b463) main_mp3_pane_t2

0x3947,	// (0x0009b471) main_mp3_pane_t3

0xeb58,	// (0x000a6682) main_mp3_pane_t4

0xeb66,	// (0x000a6690) main_mp3_pane_t5

0x0005,

0xf65c,	// (0x000a7186) main_mp3_pane_t

0xeb74,	// (0x000a669e) mup_progress_pane_cp01

0x9d8b,	// (0x000a18b5) aid_zoom_text_secondary2

0xe94a,	// (0x000a6474) list_cale_ev2_pane

0xe952,	// (0x000a647c) scroll_pane_cp023_ParamLimits

0x3a9d,	// (0x0009b5c7) field_cale_ev2_pane_ParamLimits

0x3a9d,	// (0x0009b5c7) field_cale_ev2_pane

0xeb7c,	// (0x000a66a6) field_cale_ev2_pane_g1_ParamLimits

0xeb7c,	// (0x000a66a6) field_cale_ev2_pane_g1

0xeb88,	// (0x000a66b2) field_cale_ev2_pane_g2_ParamLimits

0xeb88,	// (0x000a66b2) field_cale_ev2_pane_g2

0xeba0,	// (0x000a66ca) field_cale_ev2_pane_g3_ParamLimits

0xeba0,	// (0x000a66ca) field_cale_ev2_pane_g3

0x0003,

0x00c9,	// (0x00097bf3) field_cale_ev2_pane_g_ParamLimits

0x00c9,	// (0x00097bf3) field_cale_ev2_pane_g

0xebc4,	// (0x000a66ee) field_cale_ev2_pane_t1_ParamLimits

0xebc4,	// (0x000a66ee) field_cale_ev2_pane_t1

0xebdb,	// (0x000a6705) field_cale_ev2_pane_t2_ParamLimits

0xebdb,	// (0x000a6705) field_cale_ev2_pane_t2

0x0001,

0x00d2,	// (0x00097bfc) field_cale_ev2_pane_t_ParamLimits

0x00d2,	// (0x00097bfc) field_cale_ev2_pane_t

0x2b43,	// (0x0009a66d) main_postcard_pane_g5_ParamLimits

0x2b43,	// (0x0009a66d) main_postcard_pane_g5

0x2b59,	// (0x0009a683) main_postcard_pane_g6_ParamLimits

0x2b59,	// (0x0009a683) main_postcard_pane_g6

0xbf15,	// (0x000a3a3f) camera2_autofocus_pane_cp_ParamLimits

0xbf15,	// (0x000a3a3f) camera2_autofocus_pane_cp

0x9dd4,	// (0x000a18fe) main_mup3_pane

0x3b02,	// (0x0009b62c) main_mup3_pane_g1_ParamLimits

0x3b02,	// (0x0009b62c) main_mup3_pane_g1

0x3b24,	// (0x0009b64e) main_mup3_pane_g2_ParamLimits

0x3b24,	// (0x0009b64e) main_mup3_pane_g2

0x3ba4,	// (0x0009b6ce) main_mup3_pane_g3_ParamLimits

0x3ba4,	// (0x0009b6ce) main_mup3_pane_g3

0x3bea,	// (0x0009b714) main_mup3_pane_g4_ParamLimits

0x3bea,	// (0x0009b714) main_mup3_pane_g4

0x3c30,	// (0x0009b75a) main_mup3_pane_g5_ParamLimits

0x3c30,	// (0x0009b75a) main_mup3_pane_g5

0x3c76,	// (0x0009b7a0) main_mup3_pane_g6_ParamLimits

0x3c76,	// (0x0009b7a0) main_mup3_pane_g6

0xc40f,	// (0x000a3f39) main_mup3_pane_g7_ParamLimits

0xc40f,	// (0x000a3f39) main_mup3_pane_g7

0x0007,

0xf688,	// (0x000a71b2) main_mup3_pane_g_ParamLimits

0xf688,	// (0x000a71b2) main_mup3_pane_g

0x3cf4,	// (0x0009b81e) main_mup3_pane_t1_ParamLimits

0x3cf4,	// (0x0009b81e) main_mup3_pane_t1

0x3d68,	// (0x0009b892) main_mup3_pane_t2_ParamLimits

0x3d68,	// (0x0009b892) main_mup3_pane_t2

0x3e3c,	// (0x0009b966) main_mup3_pane_t4_ParamLimits

0x3e3c,	// (0x0009b966) main_mup3_pane_t4

0x3e92,	// (0x0009b9bc) main_mup3_pane_t5_ParamLimits

0x3e92,	// (0x0009b9bc) main_mup3_pane_t5

0x3f4e,	// (0x0009ba78) main_mup3_pane_t6_ParamLimits

0x3f4e,	// (0x0009ba78) main_mup3_pane_t6

0x0005,

0xf699,	// (0x000a71c3) main_mup3_pane_t_ParamLimits

0xf699,	// (0x000a71c3) main_mup3_pane_t

0x4006,	// (0x0009bb30) mup3_progress_pane_ParamLimits

0x4006,	// (0x0009bb30) mup3_progress_pane

0x4092,	// (0x0009bbbc) popup_mup3_control_window_ParamLimits

0x4092,	// (0x0009bbbc) popup_mup3_control_window

0xebf0,	// (0x000a671a) popup_mup3_text_window

0x40c4,	// (0x0009bbee) mup3_progress_pane_t1

0x40e3,	// (0x0009bc0d) mup3_progress_pane_t2

0xebf8,	// (0x000a6722) mup3_progress_pane_t3

0x0002,

0xf6a6,	// (0x000a71d0) mup3_progress_pane_t

0xec15,	// (0x000a673f) mup_progress_pane_cp03

0xaa49,	// (0x000a2573) bg_tb_trans_pane_cp04

0x4102,	// (0x0009bc2c) mup3_volume_pane

0x410a,	// (0x0009bc34) popup_mup3_control_window_g1

0x4113,	// (0x0009bc3d) mup3_volume_pane_g1

0x411c,	// (0x0009bc46) mup3_volume_pane_g2

0x4125,	// (0x0009bc4f) mup3_volume_pane_g3

0x0002,

0xf6ad,	// (0x000a71d7) mup3_volume_pane_g

0xaa49,	// (0x000a2573) bg_tb_trans_pane_cp03

0xec25,	// (0x000a674f) popup_mup3_text_window_g1

0xec2d,	// (0x000a6757) popup_mup3_text_window_t1

0xc4e5,	// (0x000a400f) list_calc_item_pane_g1_ParamLimits

0xe614,	// (0x000a613e) mup_volume_pane_cp_g1

0x3a61,	// (0x0009b58b) main_touch_calib_pane_t3

0x3a75,	// (0x0009b59f) main_touch_calib_pane_t4

0x3a89,	// (0x0009b5b3) main_touch_calib_pane_t5

0x9d67,	// (0x000a1891) aid_cell_size_toolbar2

0x9d6f,	// (0x000a1899) aid_popup3_width_pane

0x9d7b,	// (0x000a18a5) aid_zoom_text_msg_primary

0x14a9,	// (0x00098fd3) vorec_t7

0xc4a9,	// (0x000a3fd3) bg_calc_paper_pane_g1_ParamLimits

0xc4b5,	// (0x000a3fdf) bg_calc_paper_pane_g2_ParamLimits

0xc4c1,	// (0x000a3feb) bg_calc_paper_pane_g3_ParamLimits

0xc4cd,	// (0x000a3ff7) bg_calc_paper_pane_g4_ParamLimits

0xc4d9,	// (0x000a4003) bg_calc_paper_pane_g5_ParamLimits

0x0da7,	// (0x000988d1) bg_calc_paper_pane_g6_ParamLimits

0x0db6,	// (0x000988e0) bg_calc_paper_pane_g7_ParamLimits

0x0dc5,	// (0x000988ef) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x000a6bf8) bg_calc_paper_pane_g_ParamLimits

0x0dd8,	// (0x00098902) calc_bg_paper_pane_g9_ParamLimits

0xbf15,	// (0x000a3a3f) image_qvga_pane_ParamLimits

0xbf15,	// (0x000a3a3f) image_qvga_pane

0xc386,	// (0x000a3eb0) bg_popup_sub_pane_cp04_ParamLimits

0xd390,	// (0x000a4eba) popup_mup_playback_window_g1_ParamLimits

0xd39c,	// (0x000a4ec6) popup_mup_playback_window_t1_ParamLimits

0xd3b1,	// (0x000a4edb) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x000a6f51) popup_mup_playback_window_t_ParamLimits

0xc40f,	// (0x000a3f39) main_mup2_pane_g3_ParamLimits

0xc40f,	// (0x000a3f39) main_mup2_pane_g3

0x1789,	// (0x000992b3) popup_toolbar_window_cp04

0xd735,	// (0x000a525f) popup_call2_audio_second_window_g3_ParamLimits

0xd735,	// (0x000a525f) popup_call2_audio_second_window_g3

0xdb4d,	// (0x000a5677) popup_call2_audio_first_window_g4_ParamLimits

0xdb4d,	// (0x000a5677) popup_call2_audio_first_window_g4

0xe174,	// (0x000a5c9e) popup_call2_audio_in_window_g4_ParamLimits

0xe174,	// (0x000a5c9e) popup_call2_audio_in_window_g4

0x2c4f,	// (0x0009a779) aid_area_sk_bg_cut_ParamLimits

0x2c4f,	// (0x0009a779) aid_area_sk_bg_cut

0xd3c6,	// (0x000a4ef0) aid_area_sk_bg_cut_2_ParamLimits

0xd3c6,	// (0x000a4ef0) aid_area_sk_bg_cut_2

0xaa49,	// (0x000a2573) aid_placing_details_win

0xaa49,	// (0x000a2573) aid_placing_details_win_2

0xc401,	// (0x000a3f2b) camera2_autofocus_pane_g1_ParamLimits

0x0b94,	// (0x000986be) popup_fixed_preview_cale_window_ParamLimits

0x0b94,	// (0x000986be) popup_fixed_preview_cale_window

0xd0f5,	// (0x000a4c1f) navi_slider_pane_g3

0xd0fe,	// (0x000a4c28) navi_slider_pane_g4

0xd107,	// (0x000a4c31) navi_slider_pane_g5

0xd0f5,	// (0x000a4c1f) navi_slider_pane_g6

0x9f36,	// (0x000a1a60) navi_slider_pane_g7

0xd235,	// (0x000a4d5f) mup_scale_pane_g3

0xd23e,	// (0x000a4d68) mup_scale_pane_g4

0xd247,	// (0x000a4d71) mup_scale_pane_g5

0x2990,	// (0x0009a4ba) mup_scale_pane_g6

0x2999,	// (0x0009a4c3) mup_scale_pane_g7

0xa077,	// (0x000a1ba1) cams2_slider_pane_g3

0xa077,	// (0x000a1ba1) cams2_slider_pane_g4

0xa077,	// (0x000a1ba1) cams2_slider_pane_g5

0xa077,	// (0x000a1ba1) cams2_slider_pane_g6

0xa077,	// (0x000a1ba1) cams2_slider_pane_g7

0xc43f,	// (0x000a3f69) camera2_autofocus_pane_cp_g1

0xe484,	// (0x000a5fae) bg_popup_preview_window_pane_cp02_ParamLimits

0xe484,	// (0x000a5fae) bg_popup_preview_window_pane_cp02

0xec3b,	// (0x000a6765) list_fp_cale_pane_ParamLimits

0xec3b,	// (0x000a6765) list_fp_cale_pane

0xec47,	// (0x000a6771) popup_fixed_preview_cale_window_t1_ParamLimits

0xec47,	// (0x000a6771) popup_fixed_preview_cale_window_t1

0x412e,	// (0x0009bc58) popup_fixed_preview_cale_window_t2_ParamLimits

0x412e,	// (0x0009bc58) popup_fixed_preview_cale_window_t2

0x4143,	// (0x0009bc6d) popup_fixed_preview_cale_window_t3_ParamLimits

0x4143,	// (0x0009bc6d) popup_fixed_preview_cale_window_t3

0x0002,

0xf6b4,	// (0x000a71de) popup_fixed_preview_cale_window_t_ParamLimits

0xf6b4,	// (0x000a71de) popup_fixed_preview_cale_window_t

0x4158,	// (0x0009bc82) list_single_fp_cale_pane_ParamLimits

0x4158,	// (0x0009bc82) list_single_fp_cale_pane

0xec65,	// (0x000a678f) list_single_fp_cale_pane_g1_ParamLimits

0xec65,	// (0x000a678f) list_single_fp_cale_pane_g1

0xec71,	// (0x000a679b) list_single_fp_cale_pane_g2_ParamLimits

0xec71,	// (0x000a679b) list_single_fp_cale_pane_g2

0x0002,

0x0115,	// (0x00097c3f) list_single_fp_cale_pane_g_ParamLimits

0x0115,	// (0x00097c3f) list_single_fp_cale_pane_g

0xec8a,	// (0x000a67b4) list_single_fp_cale_pane_t1_ParamLimits

0xec8a,	// (0x000a67b4) list_single_fp_cale_pane_t1

0xec9c,	// (0x000a67c6) list_single_fp_cale_pane_t2_ParamLimits

0xec9c,	// (0x000a67c6) list_single_fp_cale_pane_t2

0x0001,

0x011c,	// (0x00097c46) list_single_fp_cale_pane_t_ParamLimits

0x011c,	// (0x00097c46) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9de2,	// (0x000a190c) main_dialer_pane

0xaa49,	// (0x000a2573) aid_cell_size_keypad

0xaa49,	// (0x000a2573) dialer_ne_pane

0xaa49,	// (0x000a2573) grid_dialer_command_1_pane

0xaa49,	// (0x000a2573) grid_dialer_command_2_pane

0xaa49,	// (0x000a2573) grid_dialer_keypad_pane

0x416e,	// (0x0009bc98) bg_popup_call_pane_cp06_ParamLimits

0x416e,	// (0x0009bc98) bg_popup_call_pane_cp06

0x416e,	// (0x0009bc98) dialer_ne_clear_pane_ParamLimits

0x416e,	// (0x0009bc98) dialer_ne_clear_pane

0xc43f,	// (0x000a3f69) dialer_ne_pane_g1

0xc45d,	// (0x000a3f87) dialer_ne_pane_t1_ParamLimits

0xc45d,	// (0x000a3f87) dialer_ne_pane_t1

0x417c,	// (0x0009bca6) dialer_ne_pane_t2_ParamLimits

0x417c,	// (0x0009bca6) dialer_ne_pane_t2

0x41a4,	// (0x0009bcce) dialer_ne_pane_t3_ParamLimits

0x41a4,	// (0x0009bcce) dialer_ne_pane_t3

0x0002,

0xf6bb,	// (0x000a71e5) dialer_ne_pane_t_ParamLimits

0xf6bb,	// (0x000a71e5) dialer_ne_pane_t

0x41a4,	// (0x0009bcce) dialer_ne_pane_t3_copy1_ParamLimits

0x41a4,	// (0x0009bcce) dialer_ne_pane_t3_copy1

0xeccf,	// (0x000a67f9) cell_dialer_keypad_pane_ParamLimits

0xeccf,	// (0x000a67f9) cell_dialer_keypad_pane

0xbf15,	// (0x000a3a3f) cell_dialer_command_1_pane_ParamLimits

0xbf15,	// (0x000a3a3f) cell_dialer_command_1_pane

0xece6,	// (0x000a6810) cell_dialer_command_2_pane_ParamLimits

0xece6,	// (0x000a6810) cell_dialer_command_2_pane

0xbf15,	// (0x000a3a3f) bg_button_pane_cp02_ParamLimits

0xbf15,	// (0x000a3a3f) bg_button_pane_cp02

0xc401,	// (0x000a3f2b) cell_dialer_keypad_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) cell_dialer_keypad_pane_g1

0xbf15,	// (0x000a3a3f) bg_button_pane_cp03_ParamLimits

0xbf15,	// (0x000a3a3f) bg_button_pane_cp03

0xc401,	// (0x000a3f2b) cell_dialer_command_1_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) cell_dialer_command_1_pane_g1

0xaa49,	// (0x000a2573) bg_button_pane_cp04

0xc43f,	// (0x000a3f69) cell_dialer_command_2_pane_g1

0xaa49,	// (0x000a2573) bg_button_pane_cp06

0xc43f,	// (0x000a3f69) dialer_ne_clear_pane_g1

0xcfc8,	// (0x000a4af2) navi_pane_g2

0xcff6,	// (0x000a4b20) navi_pane_g3

0x0002,

0xf32f,	// (0x000a6e59) navi_pane_g

0xd085,	// (0x000a4baf) navi_pane_mv_g2

0xd0ac,	// (0x000a4bd6) navi_pane_mv_g5

0x2773,	// (0x0009a29d) navi_pane_mv_t1

0xc49d,	// (0x000a3fc7) main_clock2_pane

0xbf15,	// (0x000a3a3f) main_clock2_list_pane_ParamLimits

0xbf15,	// (0x000a3a3f) main_clock2_list_pane

0x423a,	// (0x0009bd64) main_clock2_pane_t1_ParamLimits

0x423a,	// (0x0009bd64) main_clock2_pane_t1

0x4275,	// (0x0009bd9f) main_clock2_pane_t2_ParamLimits

0x4275,	// (0x0009bd9f) main_clock2_pane_t2

0x0004,

0xf6c2,	// (0x000a71ec) main_clock2_pane_t_ParamLimits

0xf6c2,	// (0x000a71ec) main_clock2_pane_t

0x4315,	// (0x0009be3f) popup_clock_analogue_window_cp03_ParamLimits

0x4315,	// (0x0009be3f) popup_clock_analogue_window_cp03

0x433a,	// (0x0009be64) popup_clock_digital_window_cp02_ParamLimits

0x433a,	// (0x0009be64) popup_clock_digital_window_cp02

0x43b3,	// (0x0009bedd) main_clock2_list_single_pane_ParamLimits

0x43b3,	// (0x0009bedd) main_clock2_list_single_pane

0xc6ed,	// (0x000a4217) list_highlight_pane_cp05

0xed29,	// (0x000a6853) main_clock2_list_single_pane_t1

0x1789,	// (0x000992b3) popup_toolbar_window_cp04_ParamLimits

0xc40f,	// (0x000a3f39) camera2_autofocus_pane_g2_ParamLimits

0xc40f,	// (0x000a3f39) camera2_autofocus_pane_g2

0xc40f,	// (0x000a3f39) camera2_autofocus_pane_g3_ParamLimits

0xc40f,	// (0x000a3f39) camera2_autofocus_pane_g3

0xc40f,	// (0x000a3f39) camera2_autofocus_pane_g4_ParamLimits

0xc40f,	// (0x000a3f39) camera2_autofocus_pane_g4

0xc40f,	// (0x000a3f39) camera2_autofocus_pane_g5_ParamLimits

0xc40f,	// (0x000a3f39) camera2_autofocus_pane_g5

0x0004,

0xf637,	// (0x000a7161) camera2_autofocus_pane_g_ParamLimits

0xf637,	// (0x000a7161) camera2_autofocus_pane_g

0x3abe,	// (0x0009b5e8) camera2_autofocus_pane_cp_g2

0x3ac6,	// (0x0009b5f0) camera2_autofocus_pane_cp_g3

0x3ace,	// (0x0009b5f8) camera2_autofocus_pane_cp_g4

0x3ad6,	// (0x0009b600) camera2_autofocus_pane_cp_g5

0x0004,

0xf67d,	// (0x000a71a7) camera2_autofocus_pane_cp_g

0xaa49,	// (0x000a2573) popup_dialer_spcha_window

0xaa49,	// (0x000a2573) bg_popup_sub_pane_cp07

0xaa49,	// (0x000a2573) list_spcha_pane

0xed37,	// (0x000a6861) list_single_spcha_pane_ParamLimits

0xed37,	// (0x000a6861) list_single_spcha_pane

0xaa49,	// (0x000a2573) list_highlight_pane_cp06

0xcc1c,	// (0x000a4746) list_single_spcha_pane_t1

0xdf1e,	// (0x000a5a48) popup_call2_audio_out_window_g4_ParamLimits

0xdf1e,	// (0x000a5a48) popup_call2_audio_out_window_g4

0x9de2,	// (0x000a190c) main_imed2_pane

0x9f8f,	// (0x000a1ab9) popup_imed_adjust2_window

0x344f,	// (0x0009af79) popup_imed_trans_window_ParamLimits

0x344f,	// (0x0009af79) popup_imed_trans_window

0xe6f7,	// (0x000a6221) popup_blid_sat_info2_window_t1

0xe705,	// (0x000a622f) popup_blid_sat_info2_window_t2

0x000a,

0xf5e3,	// (0x000a710d) popup_blid_sat_info2_window_t

0x4464,	// (0x0009bf8e) aid_size_cell_colour_35

0x4484,	// (0x0009bfae) aid_size_cell_colour_112

0x44a4,	// (0x0009bfce) aid_size_cell_effect

0xd227,	// (0x000a4d51) bg_tb_trans_pane_cp02

0xcb4e,	// (0x000a4678) heading_imed_pane

0x44c4,	// (0x0009bfee) listscroll_imed_pane

0xed49,	// (0x000a6873) heading_imed_pane_g1

0xed51,	// (0x000a687b) heading_imed_pane_t1

0xed5f,	// (0x000a6889) grid_imed_colour_35_pane_ParamLimits

0xed5f,	// (0x000a6889) grid_imed_colour_35_pane

0x44d0,	// (0x0009bffa) grid_imed_effect_pane

0xed77,	// (0x000a68a1) list_imed_aspect_pane

0x44e6,	// (0x0009c010) scroll_pane_cp027_ParamLimits

0x44e6,	// (0x0009c010) scroll_pane_cp027

0x44f7,	// (0x0009c021) cell_imed_effect_pane_ParamLimits

0x44f7,	// (0x0009c021) cell_imed_effect_pane

0xed7f,	// (0x000a68a9) cell_imed_colour_pane_ParamLimits

0xed7f,	// (0x000a68a9) cell_imed_colour_pane

0xedc1,	// (0x000a68eb) cell_imed_colour_pane_g1_ParamLimits

0xedc1,	// (0x000a68eb) cell_imed_colour_pane_g1

0xedd2,	// (0x000a68fc) hgihlgiht_grid_pane_cp016_ParamLimits

0xedd2,	// (0x000a68fc) hgihlgiht_grid_pane_cp016

0x451e,	// (0x0009c048) cell_imed_effect_pane_g1

0x4526,	// (0x0009c050) grid_highlight_pane_cp017

0xede3,	// (0x000a690d) list_imed_single_pane_ParamLimits

0xede3,	// (0x000a690d) list_imed_single_pane

0xaa49,	// (0x000a2573) list_highlight_pane_cp07

0xedf8,	// (0x000a6922) list_imed_aspect_pane_comp1_t1

0xd227,	// (0x000a4d51) bg_tb_trans_pane_cp05

0xee1a,	// (0x000a6944) popup_imed_adjust2_window_g1

0xee41,	// (0x000a696b) popup_imed_adjust2_window_t1

0xee59,	// (0x000a6983) slider_imed_adjust_pane

0xee6d,	// (0x000a6997) slider_imed_adjust_pane_g1

0xee7d,	// (0x000a69a7) slider_imed_adjust_pane_g2

0xeeaa,	// (0x000a69d4) slider_imed_adjust_pane_g3

0xeebb,	// (0x000a69e5) slider_imed_adjust_pane_g4

0x0003,

0xf6df,	// (0x000a7209) slider_imed_adjust_pane_g

0x452f,	// (0x0009c059) aid_size_cell_clipart2

0x453b,	// (0x0009c065) grid_imed_clipart_pane

0xd258,	// (0x000a4d82) scroll_pane_cp031

0x4545,	// (0x0009c06f) cell_imed_clipart_pane_ParamLimits

0x4545,	// (0x0009c06f) cell_imed_clipart_pane

0x4567,	// (0x0009c091) cell_imed_clipart_pane_g1

0xaa49,	// (0x000a2573) grid_highlight_pane_cp014

0x4216,	// (0x0009bd40) main_clock2_pane_g1_ParamLimits

0x4216,	// (0x0009bd40) main_clock2_pane_g1

0x435a,	// (0x0009be84) aid_call2_pane_cp10

0x436c,	// (0x0009be96) aid_call_pane_cp10

0xcf27,	// (0x000a4a51) popup_clock_analogue_window_cp10_g1

0xcf27,	// (0x000a4a51) popup_clock_analogue_window_cp10_g2

0x437e,	// (0x0009bea8) popup_clock_analogue_window_cp10_g3

0x437e,	// (0x0009bea8) popup_clock_analogue_window_cp10_g4

0xcf27,	// (0x000a4a51) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6cd,	// (0x000a71f7) popup_clock_analogue_window_cp10_g

0x4394,	// (0x0009bebe) popup_clock_analogue_window_cp10_t1

0x43c5,	// (0x0009beef) clock_digital_number_pane_cp10_ParamLimits

0x43c5,	// (0x0009beef) clock_digital_number_pane_cp10

0x43dd,	// (0x0009bf07) clock_digital_number_pane_cp11_ParamLimits

0x43dd,	// (0x0009bf07) clock_digital_number_pane_cp11

0x43f5,	// (0x0009bf1f) clock_digital_number_pane_cp12_ParamLimits

0x43f5,	// (0x0009bf1f) clock_digital_number_pane_cp12

0x440f,	// (0x0009bf39) clock_digital_number_pane_cp13_ParamLimits

0x440f,	// (0x0009bf39) clock_digital_number_pane_cp13

0x4429,	// (0x0009bf53) clock_digital_separator_pane_cp10_ParamLimits

0x4429,	// (0x0009bf53) clock_digital_separator_pane_cp10

0x4443,	// (0x0009bf6d) popup_clock_digital_window_cp02_t1_ParamLimits

0x4443,	// (0x0009bf6d) popup_clock_digital_window_cp02_t1

0xc37e,	// (0x000a3ea8) clock_digital_number_pane_cp10_g1

0xc37e,	// (0x000a3ea8) clock_digital_number_pane_cp10_g2

0x0001,

0xf6e8,	// (0x000a7212) clock_digital_number_pane_cp10_g

0xc37e,	// (0x000a3ea8) clock_digital_separator_pane_cp10_g1

0xc37e,	// (0x000a3ea8) clock_digital_separator_pane_g2_cp10

0xd0b4,	// (0x000a4bde) navi_pane_vded_g4

0xd0bd,	// (0x000a4be7) navi_pane_vded_g5

0xd0c6,	// (0x000a4bf0) navi_pane_vded_t1

0x9de2,	// (0x000a190c) main_vded_pane

0x4570,	// (0x0009c09a) main_vded_pane_g1

0x457a,	// (0x0009c0a4) main_vded_pane_g2

0x4584,	// (0x0009c0ae) main_vded_pane_g3

0x0002,

0xf6ed,	// (0x000a7217) main_vded_pane_g

0x458e,	// (0x0009c0b8) main_vded_pane_t1

0x459c,	// (0x0009c0c6) main_vded_pane_t2

0x0001,

0xf6f4,	// (0x000a721e) main_vded_pane_t

0x45aa,	// (0x0009c0d4) vded_slider_pane

0x45b2,	// (0x0009c0dc) vded_video_pane

0xeecc,	// (0x000a69f6) vded_video_pane_g1

0x45ba,	// (0x0009c0e4) vded_video_pane_g2

0xc43f,	// (0x000a3f69) vded_video_pane_g3

0x0002,

0xf6f9,	// (0x000a7223) vded_video_pane_g

0xeed6,	// (0x000a6a00) vded_slider_pane_g1

0xe614,	// (0x000a613e) vded_slider_pane_g2

0xeedf,	// (0x000a6a09) vded_slider_pane_g3

0xeee8,	// (0x000a6a12) vded_slider_pane_g4

0xeef1,	// (0x000a6a1b) vded_slider_pane_g5

0x0004,

0xf700,	// (0x000a722a) vded_slider_pane_g

0x407a,	// (0x0009bba4) mup3_rocker_pane_ParamLimits

0x407a,	// (0x0009bba4) mup3_rocker_pane

0x45c3,	// (0x0009c0ed) mup3_control_keys_pane_g1

0x45cb,	// (0x0009c0f5) mup3_control_keys_pane_g2

0x45d3,	// (0x0009c0fd) mup3_control_keys_pane_g3

0x45db,	// (0x0009c105) mup3_control_keys_pane_g4

0x0003,

0xf70b,	// (0x000a7235) mup3_control_keys_pane_g

0x0bcb,	// (0x000986f5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0bcb,	// (0x000986f5) popup_toolbar2_fixed_window_cp01

0x40ae,	// (0x0009bbd8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x40ae,	// (0x0009bbd8) popup_toolbar2_fixed_window_cp02

0xd8a7,	// (0x000a53d1) popup_call2_audio_second_window_t4_ParamLimits

0xd8a7,	// (0x000a53d1) popup_call2_audio_second_window_t4

0xdde3,	// (0x000a590d) popup_call2_audio_first_window_t6_ParamLimits

0xdde3,	// (0x000a590d) popup_call2_audio_first_window_t6

0xe021,	// (0x000a5b4b) popup_call2_audio_out_window_t6_ParamLimits

0xe021,	// (0x000a5b4b) popup_call2_audio_out_window_t6

0x9de2,	// (0x000a190c) main_vitu_pane

0xbf15,	// (0x000a3a3f) aid_size_cell_itu_ParamLimits

0xbf15,	// (0x000a3a3f) aid_size_cell_itu

0xbf15,	// (0x000a3a3f) bg_popup_window_pane_cp08_ParamLimits

0xbf15,	// (0x000a3a3f) bg_popup_window_pane_cp08

0xbf15,	// (0x000a3a3f) field_vitu_entry_pane_ParamLimits

0xbf15,	// (0x000a3a3f) field_vitu_entry_pane

0xbf15,	// (0x000a3a3f) grid_vitu_function_pane_ParamLimits

0xbf15,	// (0x000a3a3f) grid_vitu_function_pane

0xbf15,	// (0x000a3a3f) grid_vitu_itu_pane_ParamLimits

0xbf15,	// (0x000a3a3f) grid_vitu_itu_pane

0xbf15,	// (0x000a3a3f) cell_vitu_itu_pane_ParamLimits

0xbf15,	// (0x000a3a3f) cell_vitu_itu_pane

0xbf15,	// (0x000a3a3f) cell_vitu_function_pane_ParamLimits

0xbf15,	// (0x000a3a3f) cell_vitu_function_pane

0xbf15,	// (0x000a3a3f) bg_popup_sub_pane_cp08_ParamLimits

0xbf15,	// (0x000a3a3f) bg_popup_sub_pane_cp08

0xc449,	// (0x000a3f73) field_vitu_entry_pane_t1_ParamLimits

0xc449,	// (0x000a3f73) field_vitu_entry_pane_t1

0xee8d,	// (0x000a69b7) field_vitu_entry_pane_t2_ParamLimits

0xee8d,	// (0x000a69b7) field_vitu_entry_pane_t2

0x0001,

0xf714,	// (0x000a723e) field_vitu_entry_pane_t_ParamLimits

0xf714,	// (0x000a723e) field_vitu_entry_pane_t

0xe69e,	// (0x000a61c8) bg_button_pane_cp05_ParamLimits

0xe69e,	// (0x000a61c8) bg_button_pane_cp05

0xeefa,	// (0x000a6a24) cell_vitu_itu_pane_g1

0xd213,	// (0x000a4d3d) cell_vitu_itu_pane_t1_ParamLimits

0xd213,	// (0x000a4d3d) cell_vitu_itu_pane_t1

0xd213,	// (0x000a4d3d) cell_vitu_itu_pane_t2_ParamLimits

0xd213,	// (0x000a4d3d) cell_vitu_itu_pane_t2

0x0002,

0xf719,	// (0x000a7243) cell_vitu_itu_pane_t_ParamLimits

0xf719,	// (0x000a7243) cell_vitu_itu_pane_t

0xaa49,	// (0x000a2573) bg_button_pane_cp07

0xc43f,	// (0x000a3f69) cell_vitu_function_pane_g1

0x9dec,	// (0x000a1916) main_calc_pane_g1

0x09f3,	// (0x0009851d) aid_visual_content_pane

0x9de2,	// (0x000a190c) main_vradio_pane

0xc401,	// (0x000a3f2b) main_vradio_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) main_vradio_pane_g1

0xc40f,	// (0x000a3f39) main_vradio_pane_g2_ParamLimits

0xc40f,	// (0x000a3f39) main_vradio_pane_g2

0x0001,

0xf720,	// (0x000a724a) main_vradio_pane_g_ParamLimits

0xf720,	// (0x000a724a) main_vradio_pane_g

0xc449,	// (0x000a3f73) main_vradio_pane_t1_ParamLimits

0xc449,	// (0x000a3f73) main_vradio_pane_t1

0xc449,	// (0x000a3f73) main_vradio_pane_t2_ParamLimits

0xc449,	// (0x000a3f73) main_vradio_pane_t2

0xc45d,	// (0x000a3f87) main_vradio_pane_t3_ParamLimits

0xc45d,	// (0x000a3f87) main_vradio_pane_t3

0x0002,

0xf725,	// (0x000a724f) main_vradio_pane_t_ParamLimits

0xf725,	// (0x000a724f) main_vradio_pane_t

0xbf15,	// (0x000a3a3f) vradio_rocker_control_pane_ParamLimits

0xbf15,	// (0x000a3a3f) vradio_rocker_control_pane

0xbf15,	// (0x000a3a3f) vradio_station_info_pane_ParamLimits

0xbf15,	// (0x000a3a3f) vradio_station_info_pane

0xbf15,	// (0x000a3a3f) vradio_frequency_info_pane_ParamLimits

0xbf15,	// (0x000a3a3f) vradio_frequency_info_pane

0xc43f,	// (0x000a3f69) vradio_station_info_pane_g1

0xd213,	// (0x000a4d3d) vradio_station_info_pane_t1_ParamLimits

0xd213,	// (0x000a4d3d) vradio_station_info_pane_t1

0xc45d,	// (0x000a3f87) vradio_station_info_pane_t2_ParamLimits

0xc45d,	// (0x000a3f87) vradio_station_info_pane_t2

0x0001,

0xf72c,	// (0x000a7256) vradio_station_info_pane_t_ParamLimits

0xf72c,	// (0x000a7256) vradio_station_info_pane_t

0xaa49,	// (0x000a2573) vradio_tuning_pane

0x45eb,	// (0x0009c115) vradio_rocker_control_pane_g1

0xef16,	// (0x000a6a40) vradio_rocker_control_pane_g2

0x45f5,	// (0x0009c11f) vradio_rocker_control_pane_g3

0x45ff,	// (0x0009c129) vradio_rocker_control_pane_g4

0x4609,	// (0x0009c133) vradio_rocker_control_pane_g5

0x0004,

0xf731,	// (0x000a725b) vradio_rocker_control_pane_g

0xc43f,	// (0x000a3f69) vradio_frequency_info_pane_g1

0xc449,	// (0x000a3f73) vradio_frequency_info_pane_t1_ParamLimits

0xc449,	// (0x000a3f73) vradio_frequency_info_pane_t1

0x4613,	// (0x0009c13d) vradio_tuning_pane_g1

0x461e,	// (0x0009c148) vradio_tuning_pane_t1

0x9d93,	// (0x000a18bd) area_side_right_pane_ParamLimits

0x9d93,	// (0x000a18bd) area_side_right_pane

0xe44b,	// (0x000a5f75) status_small_pane_g1

0xe453,	// (0x000a5f7d) status_small_pane_g2

0xe45c,	// (0x000a5f86) status_small_pane_g3

0xe465,	// (0x000a5f8f) status_small_pane_g4

0x0003,

0xf545,	// (0x000a706f) status_small_pane_g

0xe46e,	// (0x000a5f98) status_small_pane_t1

0x9de2,	// (0x000a190c) main_video3_pane

0xaa49,	// (0x000a2573) cams_zoom_vslider_pane

0xef1e,	// (0x000a6a48) image3_wide_pane_ParamLimits

0xef1e,	// (0x000a6a48) image3_wide_pane

0xaa49,	// (0x000a2573) image3_wide_small_pane

0xef38,	// (0x000a6a62) main_video3_pane_g1_ParamLimits

0xef38,	// (0x000a6a62) main_video3_pane_g1

0xef38,	// (0x000a6a62) main_video3_pane_g2_ParamLimits

0xef38,	// (0x000a6a62) main_video3_pane_g2

0x0001,

0x01a2,	// (0x00097ccc) main_video3_pane_g_ParamLimits

0x01a2,	// (0x00097ccc) main_video3_pane_g

0xef56,	// (0x000a6a80) main_video3_pane_t1_ParamLimits

0xef56,	// (0x000a6a80) main_video3_pane_t1

0xef56,	// (0x000a6a80) main_video3_pane_t2_ParamLimits

0xef56,	// (0x000a6a80) main_video3_pane_t2

0xef56,	// (0x000a6a80) main_video3_pane_t3_ParamLimits

0xef56,	// (0x000a6a80) main_video3_pane_t3

0x0002,

0x01a7,	// (0x00097cd1) main_video3_pane_t_ParamLimits

0x01a7,	// (0x00097cd1) main_video3_pane_t

0xc43f,	// (0x000a3f69) cams_zoom_vslider_pane_g1

0xc43f,	// (0x000a3f69) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x000a6bd9) cams_zoom_vslider_pane_g

0xaa49,	// (0x000a2573) small_slider_vertical_pane

0xc43f,	// (0x000a3f69) small_slider_vertical_pane_g1

0xc43f,	// (0x000a3f69) small_slider_vertical_pane_g2

0xef7d,	// (0x000a6aa7) small_slider_vertical_pane_g3

0x0002,

0xf73c,	// (0x000a7266) small_slider_vertical_pane_g

0x9de2,	// (0x000a190c) main_hwr_training_pane

0xef86,	// (0x000a6ab0) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x000a6ab0) hwr_training_instruct_pane

0x462d,	// (0x0009c157) hwr_training_navi_pane_ParamLimits

0x462d,	// (0x0009c157) hwr_training_navi_pane

0x464c,	// (0x0009c176) hwr_training_write_pane_ParamLimits

0x464c,	// (0x0009c176) hwr_training_write_pane

0xaa49,	// (0x000a2573) bg_frame_shadow_pane

0xefbd,	// (0x000a6ae7) hwr_training_write_pane_g1

0xefc5,	// (0x000a6aef) hwr_training_write_pane_g2

0xefcd,	// (0x000a6af7) hwr_training_write_pane_g3

0xefd5,	// (0x000a6aff) hwr_training_write_pane_g4

0xefdd,	// (0x000a6b07) hwr_training_write_pane_g5

0xefe5,	// (0x000a6b0f) hwr_training_write_pane_g6

0xefed,	// (0x000a6b17) hwr_training_write_pane_g7

0x0006,

0x01b5,	// (0x00097cdf) hwr_training_write_pane_g

0xa081,	// (0x000a1bab) hwr_training_navi_pane_g1_ParamLimits

0xa081,	// (0x000a1bab) hwr_training_navi_pane_g1

0xa093,	// (0x000a1bbd) hwr_training_navi_pane_g2_ParamLimits

0xa093,	// (0x000a1bbd) hwr_training_navi_pane_g2

0xa0a5,	// (0x000a1bcf) hwr_training_navi_pane_g3_ParamLimits

0xa0a5,	// (0x000a1bcf) hwr_training_navi_pane_g3

0xa0b5,	// (0x000a1bdf) hwr_training_navi_pane_g4_ParamLimits

0xa0b5,	// (0x000a1bdf) hwr_training_navi_pane_g4

0x0004,

0xf743,	// (0x000a726d) hwr_training_navi_pane_g_ParamLimits

0xf743,	// (0x000a726d) hwr_training_navi_pane_g

0xa0c2,	// (0x000a1bec) hwr_training_navi_pane_t1

0x4696,	// (0x0009c1c0) list_single_hwr_training_instruct_pane_ParamLimits

0x4696,	// (0x0009c1c0) list_single_hwr_training_instruct_pane

0xeff5,	// (0x000a6b1f) list_single_hwr_training_instruct_pane_t1

0xe7f8,	// (0x000a6322) bg_frame_shadow_pane_g1

0xf004,	// (0x000a6b2e) bg_frame_shadow_pane_g2

0xf00c,	// (0x000a6b36) bg_frame_shadow_pane_g3

0xf014,	// (0x000a6b3e) bg_frame_shadow_pane_g4

0xf01c,	// (0x000a6b46) bg_frame_shadow_pane_g5

0xf024,	// (0x000a6b4e) bg_frame_shadow_pane_g6

0xf02c,	// (0x000a6b56) bg_frame_shadow_pane_g7

0xc555,	// (0x000a407f) bg_frame_shadow_pane_g8

0x0007,

0xf74e,	// (0x000a7278) bg_frame_shadow_pane_g

0x9de2,	// (0x000a190c) main_video_tele_dialer_pane

0x46ac,	// (0x0009c1d6) aid_size_cell_video_keypad_ParamLimits

0x46ac,	// (0x0009c1d6) aid_size_cell_video_keypad

0x46c6,	// (0x0009c1f0) grid_video_dialer_keypad_pane_ParamLimits

0x46c6,	// (0x0009c1f0) grid_video_dialer_keypad_pane

0x4714,	// (0x0009c23e) video_down_pane_cp_ParamLimits

0x4714,	// (0x0009c23e) video_down_pane_cp

0x4746,	// (0x0009c270) cell_video_dialer_keypad_pane_ParamLimits

0x4746,	// (0x0009c270) cell_video_dialer_keypad_pane

0xf034,	// (0x000a6b5e) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x000a6b5e) bg_button_pane_cp08

0x4768,	// (0x0009c292) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4768,	// (0x0009c292) cell_video_dialer_keypad_pane_g1

0x4064,	// (0x0009bb8e) mup3_rocker2_pane_ParamLimits

0x4064,	// (0x0009bb8e) mup3_rocker2_pane

0xc43f,	// (0x000a3f69) mup3_rocker2_pane_g1

0x333e,	// (0x0009ae68) main_dialer2_pane

0x9de2,	// (0x000a190c) main_mp4_pane

0xa0ee,	// (0x000a1c18) main_mp4_pane_g1_ParamLimits

0xa0ee,	// (0x000a1c18) main_mp4_pane_g1

0xa0ee,	// (0x000a1c18) main_mp4_pane_g2_ParamLimits

0xa0ee,	// (0x000a1c18) main_mp4_pane_g2

0x47a2,	// (0x0009c2cc) main_mp4_pane_g3_ParamLimits

0x47a2,	// (0x0009c2cc) main_mp4_pane_g3

0xa10c,	// (0x000a1c36) main_mp4_pane_g4_ParamLimits

0xa10c,	// (0x000a1c36) main_mp4_pane_g4

0xa134,	// (0x000a1c5e) main_mp4_pane_g5_ParamLimits

0xa134,	// (0x000a1c5e) main_mp4_pane_g5

0x0007,

0xf76e,	// (0x000a7298) main_mp4_pane_g_ParamLimits

0xf76e,	// (0x000a7298) main_mp4_pane_g

0xa19c,	// (0x000a1cc6) main_mp4_pane_t1_ParamLimits

0xa19c,	// (0x000a1cc6) main_mp4_pane_t1

0xa1fe,	// (0x000a1d28) main_mp4_pane_t2_ParamLimits

0xa1fe,	// (0x000a1d28) main_mp4_pane_t2

0xa262,	// (0x000a1d8c) main_mp4_pane_t3_ParamLimits

0xa262,	// (0x000a1d8c) main_mp4_pane_t3

0xa2c0,	// (0x000a1dea) main_mp4_pane_t4_ParamLimits

0xa2c0,	// (0x000a1dea) main_mp4_pane_t4

0x0003,

0xf77f,	// (0x000a72a9) main_mp4_pane_t_ParamLimits

0xf77f,	// (0x000a72a9) main_mp4_pane_t

0xa31e,	// (0x000a1e48) mp4_progress_pane_ParamLimits

0xa31e,	// (0x000a1e48) mp4_progress_pane

0xa352,	// (0x000a1e7c) mp4_rocker_pane_ParamLimits

0xa352,	// (0x000a1e7c) mp4_rocker_pane

0x47da,	// (0x0009c304) mp4_progress_pane_t1

0x47fc,	// (0x0009c326) mp4_progress_pane_t2

0x0001,

0xf788,	// (0x000a72b2) mp4_progress_pane_t

0x481e,	// (0x0009c348) mup_progress_pane_cp04

0xa077,	// (0x000a1ba1) mp4_rocker_pane_g1

0x9dd4,	// (0x000a18fe) aid_cell_size_keypad2_ParamLimits

0x9dd4,	// (0x000a18fe) aid_cell_size_keypad2

0x9dd4,	// (0x000a18fe) dialer2_ne_pane_ParamLimits

0x9dd4,	// (0x000a18fe) dialer2_ne_pane

0x9dd4,	// (0x000a18fe) grid_dialer2_keypad_pane_ParamLimits

0x9dd4,	// (0x000a18fe) grid_dialer2_keypad_pane

0xe69e,	// (0x000a61c8) bg_popup_call_pane_cp07_ParamLimits

0xe69e,	// (0x000a61c8) bg_popup_call_pane_cp07

0x4831,	// (0x0009c35b) dialer2_ne_pane_t1_ParamLimits

0x4831,	// (0x0009c35b) dialer2_ne_pane_t1

0x4882,	// (0x0009c3ac) cell_dialer2_keypad_pane_ParamLimits

0x4882,	// (0x0009c3ac) cell_dialer2_keypad_pane

0xe69e,	// (0x000a61c8) bg_button_pane_pane_cp04_ParamLimits

0xe69e,	// (0x000a61c8) bg_button_pane_pane_cp04

0xc401,	// (0x000a3f2b) cell_dialer2_keypad_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) cell_dialer2_keypad_pane_g1

0x165d,	// (0x00099187) aid_placing_vt_set_content_ParamLimits

0x165d,	// (0x00099187) aid_placing_vt_set_content

0x1685,	// (0x000991af) aid_placing_vt_set_title_ParamLimits

0x1685,	// (0x000991af) aid_placing_vt_set_title

0x9de2,	// (0x000a190c) main_image3_pane

0x4913,	// (0x0009c43d) area_side_right_pane_cp01_ParamLimits

0x4913,	// (0x0009c43d) area_side_right_pane_cp01

0x492a,	// (0x0009c454) main_image3_pane_g1_ParamLimits

0x492a,	// (0x0009c454) main_image3_pane_g1

0x4938,	// (0x0009c462) main_image3_pane_g2_ParamLimits

0x4938,	// (0x0009c462) main_image3_pane_g2

0x4960,	// (0x0009c48a) main_image3_pane_g3_ParamLimits

0x4960,	// (0x0009c48a) main_image3_pane_g3

0x498a,	// (0x0009c4b4) main_image3_pane_g4_ParamLimits

0x498a,	// (0x0009c4b4) main_image3_pane_g4

0x0003,

0xf797,	// (0x000a72c1) main_image3_pane_g_ParamLimits

0xf797,	// (0x000a72c1) main_image3_pane_g

0x49b4,	// (0x0009c4de) main_image3_pane_t1_ParamLimits

0x49b4,	// (0x0009c4de) main_image3_pane_t1

0x4a0c,	// (0x0009c536) main_image3_pane_t2_ParamLimits

0x4a0c,	// (0x0009c536) main_image3_pane_t2

0x4a5e,	// (0x0009c588) main_image3_pane_t3_ParamLimits

0x4a5e,	// (0x0009c588) main_image3_pane_t3

0x0003,

0xf7a0,	// (0x000a72ca) main_image3_pane_t_ParamLimits

0xf7a0,	// (0x000a72ca) main_image3_pane_t

0xbf15,	// (0x000a3a3f) grid_sctrl_middle_pane_cp01_ParamLimits

0xbf15,	// (0x000a3a3f) grid_sctrl_middle_pane_cp01

0x4ae6,	// (0x0009c610) cell_sctrl_middle_pane_cp01_ParamLimits

0x4ae6,	// (0x0009c610) cell_sctrl_middle_pane_cp01

0x4b03,	// (0x0009c62d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4b03,	// (0x0009c62d) cell_sctrl_middle_pane_cp01_g1

0x9de2,	// (0x000a190c) main_call4_pane

0x4b19,	// (0x0009c643) aid_size_button_call4_ParamLimits

0x4b19,	// (0x0009c643) aid_size_button_call4

0x4b4c,	// (0x0009c676) call4_windows_pane_ParamLimits

0x4b4c,	// (0x0009c676) call4_windows_pane

0x4b6b,	// (0x0009c695) grid_call4_button_pane_ParamLimits

0x4b6b,	// (0x0009c695) grid_call4_button_pane

0x4b9e,	// (0x0009c6c8) call4_windows_conf_pane

0x4bb3,	// (0x0009c6dd) popup_call4_audio_first_window_ParamLimits

0x4bb3,	// (0x0009c6dd) popup_call4_audio_first_window

0x4c03,	// (0x0009c72d) popup_call4_audio_second_window_ParamLimits

0x4c03,	// (0x0009c72d) popup_call4_audio_second_window

0x4c1a,	// (0x0009c744) popup_call4_audio_wait_window_ParamLimits

0x4c1a,	// (0x0009c744) popup_call4_audio_wait_window

0x4c28,	// (0x0009c752) cell_call4_button_pane_ParamLimits

0x4c28,	// (0x0009c752) cell_call4_button_pane

0x4c4d,	// (0x0009c777) bg_button_pane_cp09_ParamLimits

0x4c4d,	// (0x0009c777) bg_button_pane_cp09

0x4c59,	// (0x0009c783) cell_call4_button_pane_g1_ParamLimits

0x4c59,	// (0x0009c783) cell_call4_button_pane_g1

0x4c7f,	// (0x0009c7a9) cell_call4_button_pane_t1_ParamLimits

0x4c7f,	// (0x0009c7a9) cell_call4_button_pane_t1

0x4cb1,	// (0x0009c7db) popup_call4_audio_conf_window_ParamLimits

0x4cb1,	// (0x0009c7db) popup_call4_audio_conf_window

0x40c4,	// (0x0009bbee) mup3_progress_pane_t1_ParamLimits

0x40e3,	// (0x0009bc0d) mup3_progress_pane_t2_ParamLimits

0xebf8,	// (0x000a6722) mup3_progress_pane_t3_ParamLimits

0xf6a6,	// (0x000a71d0) mup3_progress_pane_t_ParamLimits

0xec15,	// (0x000a673f) mup_progress_pane_cp03_ParamLimits

0x45e3,	// (0x0009c10d) mup3_control_keys_pane_g4_copy1

0xa352,	// (0x000a1e7c) mp4_rocker2_pane_ParamLimits

0xa352,	// (0x000a1e7c) mp4_rocker2_pane

0xa3ca,	// (0x000a1ef4) mp4_rocker2_pane_g1

0xa3ca,	// (0x000a1ef4) mp4_rocker2_pane_g2

0xa3ca,	// (0x000a1ef4) mp4_rocker2_pane_g3

0xa3ca,	// (0x000a1ef4) mp4_rocker2_pane_g4

0xa3ca,	// (0x000a1ef4) mp4_rocker2_pane_g5

0x0004,

0xf7a9,	// (0x000a72d3) mp4_rocker2_pane_g

0x9de2,	// (0x000a190c) main_camera4_pane

0x9de2,	// (0x000a190c) main_video4_pane

0x46e2,	// (0x0009c20c) main_video_tele_dialer_pane_t1_ParamLimits

0x46e2,	// (0x0009c20c) main_video_tele_dialer_pane_t1

0x46fb,	// (0x0009c225) main_video_tele_dialer_pane_t2_ParamLimits

0x46fb,	// (0x0009c225) main_video_tele_dialer_pane_t2

0x0001,

0xf75f,	// (0x000a7289) main_video_tele_dialer_pane_t_ParamLimits

0xf75f,	// (0x000a7289) main_video_tele_dialer_pane_t

0x4cdd,	// (0x0009c807) cam4_autofocus_pane_ParamLimits

0x4cdd,	// (0x0009c807) cam4_autofocus_pane

0x4cf3,	// (0x0009c81d) cam4_image_uncrop_pane_ParamLimits

0x4cf3,	// (0x0009c81d) cam4_image_uncrop_pane

0x4d0d,	// (0x0009c837) cam4_indicators_pane_ParamLimits

0x4d0d,	// (0x0009c837) cam4_indicators_pane

0x4d38,	// (0x0009c862) main_camera4_pane_g1_ParamLimits

0x4d38,	// (0x0009c862) main_camera4_pane_g1

0x4d4a,	// (0x0009c874) main_camera4_pane_g2_ParamLimits

0x4d4a,	// (0x0009c874) main_camera4_pane_g2

0x4d5d,	// (0x0009c887) main_camera4_pane_g3_ParamLimits

0x4d5d,	// (0x0009c887) main_camera4_pane_g3

0x4d70,	// (0x0009c89a) main_camera4_pane_g4_ParamLimits

0x4d70,	// (0x0009c89a) main_camera4_pane_g4

0x4d83,	// (0x0009c8ad) main_camera4_pane_g5_ParamLimits

0x4d83,	// (0x0009c8ad) main_camera4_pane_g5

0x0005,

0xf7b4,	// (0x000a72de) main_camera4_pane_g_ParamLimits

0xf7b4,	// (0x000a72de) main_camera4_pane_g

0x4da7,	// (0x0009c8d1) main_camera4_pane_t1_ParamLimits

0x4da7,	// (0x0009c8d1) main_camera4_pane_t1

0xaa73,	// (0x000a259d) bg_tb_trans_pane_cp06

0xa3f6,	// (0x000a1f20) cam4_indicators_pane_g1

0xa407,	// (0x000a1f31) cam4_indicators_pane_g2

0x0002,

0xf7cf,	// (0x000a72f9) cam4_indicators_pane_g

0xa41f,	// (0x000a1f49) cam4_indicators_pane_t1

0x4e0b,	// (0x0009c935) main_video4_pane_g1_ParamLimits

0x4e0b,	// (0x0009c935) main_video4_pane_g1

0x4e1a,	// (0x0009c944) main_video4_pane_g2_ParamLimits

0x4e1a,	// (0x0009c944) main_video4_pane_g2

0x4e29,	// (0x0009c953) main_video4_pane_g3_ParamLimits

0x4e29,	// (0x0009c953) main_video4_pane_g3

0x4e38,	// (0x0009c962) main_video4_pane_g4_ParamLimits

0x4e38,	// (0x0009c962) main_video4_pane_g4

0x0004,

0xf7d6,	// (0x000a7300) main_video4_pane_g_ParamLimits

0xf7d6,	// (0x000a7300) main_video4_pane_g

0x4e56,	// (0x0009c980) vid4_indicators_pane_ParamLimits

0x4e56,	// (0x0009c980) vid4_indicators_pane

0x4e84,	// (0x0009c9ae) video4_image_uncrop_cif_pane_ParamLimits

0x4e84,	// (0x0009c9ae) video4_image_uncrop_cif_pane

0x4e9e,	// (0x0009c9c8) video4_image_uncrop_nhd_pane_ParamLimits

0x4e9e,	// (0x0009c9c8) video4_image_uncrop_nhd_pane

0x4cf3,	// (0x0009c81d) video4_image_uncrop_vga_pane_ParamLimits

0x4cf3,	// (0x0009c81d) video4_image_uncrop_vga_pane

0x9dd4,	// (0x000a18fe) bg_tb_trans_pane_cp07

0xa449,	// (0x000a1f73) vid4_indicators_pane_g1

0xa45d,	// (0x000a1f87) vid4_indicators_pane_g2

0xa471,	// (0x000a1f9b) vid4_indicators_pane_g3

0x0004,

0xf7e1,	// (0x000a730b) vid4_indicators_pane_g

0xa49e,	// (0x000a1fc8) vid4_indicators_pane_t1

0x4eb2,	// (0x0009c9dc) cam4_autofocus_pane_g1

0x4eba,	// (0x0009c9e4) cam4_autofocus_pane_g2

0x4ec2,	// (0x0009c9ec) cam4_autofocus_pane_g3

0x0002,

0xf7ec,	// (0x000a7316) cam4_autofocus_pane_g

0x4eca,	// (0x0009c9f4) cam4_autofocus_pane_g3_copy1

0x472a,	// (0x0009c254) video_down_pane_cp_t1

0x4738,	// (0x0009c262) video_down_pane_cp_t2

0x0001,

0xf764,	// (0x000a728e) video_down_pane_cp_t

0x9dd4,	// (0x000a18fe) popup_vitu2_window_ParamLimits

0x9dd4,	// (0x000a18fe) popup_vitu2_window

0x4ed2,	// (0x0009c9fc) aid_size_cell2_itu2_ParamLimits

0x4ed2,	// (0x0009c9fc) aid_size_cell2_itu2

0x4ef8,	// (0x0009ca22) aid_size_cell_itu2_ParamLimits

0x4ef8,	// (0x0009ca22) aid_size_cell_itu2

0x4f54,	// (0x0009ca7e) bg_popup_window_pane_cp09_ParamLimits

0x4f54,	// (0x0009ca7e) bg_popup_window_pane_cp09

0x4f62,	// (0x0009ca8c) field_vitu2_entry_pane_ParamLimits

0x4f62,	// (0x0009ca8c) field_vitu2_entry_pane

0x4f88,	// (0x0009cab2) grid_vitu2_function_pane_ParamLimits

0x4f88,	// (0x0009cab2) grid_vitu2_function_pane

0x4fd5,	// (0x0009caff) grid_vitu2_itu_pane_ParamLimits

0x4fd5,	// (0x0009caff) grid_vitu2_itu_pane

0x5067,	// (0x0009cb91) cell_vitu2_itu_pane_ParamLimits

0x5067,	// (0x0009cb91) cell_vitu2_itu_pane

0x5093,	// (0x0009cbbd) cell_vitu2_function_pane_ParamLimits

0x5093,	// (0x0009cbbd) cell_vitu2_function_pane

0x50d2,	// (0x0009cbfc) bg_popup_call_pane_cp08_ParamLimits

0x50d2,	// (0x0009cbfc) bg_popup_call_pane_cp08

0x50e9,	// (0x0009cc13) field_vitu2_entry_pane_g1

0x50f5,	// (0x0009cc1f) field_vitu2_entry_pane_g2

0x0002,

0xf7f3,	// (0x000a731d) field_vitu2_entry_pane_g

0x5101,	// (0x0009cc2b) field_vitu2_entry_pane_t1_ParamLimits

0x5101,	// (0x0009cc2b) field_vitu2_entry_pane_t1

0x5131,	// (0x0009cc5b) field_vitu2_entry_pane_t2_ParamLimits

0x5131,	// (0x0009cc5b) field_vitu2_entry_pane_t2

0x0001,

0xf7fa,	// (0x000a7324) field_vitu2_entry_pane_t_ParamLimits

0xf7fa,	// (0x000a7324) field_vitu2_entry_pane_t

0x5156,	// (0x0009cc80) bg_button_pane_cp010_ParamLimits

0x5156,	// (0x0009cc80) bg_button_pane_cp010

0x5164,	// (0x0009cc8e) cell_vitu2_itu_pane_g1

0x518a,	// (0x0009ccb4) cell_vitu2_itu_pane_t1_ParamLimits

0x518a,	// (0x0009ccb4) cell_vitu2_itu_pane_t1

0x08cb,	// (0x000983f5) cell_vitu2_itu_pane_t2_ParamLimits

0x08cb,	// (0x000983f5) cell_vitu2_itu_pane_t2

0x0002,

0xf804,	// (0x000a732e) cell_vitu2_itu_pane_t_ParamLimits

0xf804,	// (0x000a732e) cell_vitu2_itu_pane_t

0x9dd4,	// (0x000a18fe) bg_button_pane_cp011

0x51e8,	// (0x0009cd12) cell_vitu2_function_pane_g1

0x9de2,	// (0x000a190c) main_myfav_hc_pane

0x4aae,	// (0x0009c5d8) popup_image3_note_pane_ParamLimits

0x4aae,	// (0x0009c5d8) popup_image3_note_pane

0x4aca,	// (0x0009c5f4) popup_image3_tool_bar_pane_ParamLimits

0x4aca,	// (0x0009c5f4) popup_image3_tool_bar_pane

0x0959,	// (0x00098483) cell_vitu2_itu_pane_t3_ParamLimits

0x0959,	// (0x00098483) cell_vitu2_itu_pane_t3

0xaa49,	// (0x000a2573) bg_popup_trans_pane

0x51fb,	// (0x0009cd25) grid_image3_tool_bar_pane

0x5205,	// (0x0009cd2f) bg_popup_trans_pane_g1

0xc906,	// (0x000a4430) bg_popup_trans_pane_g2

0x520d,	// (0x0009cd37) bg_popup_trans_pane_g3

0x5215,	// (0x0009cd3f) bg_popup_trans_pane_g4

0x521d,	// (0x0009cd47) bg_popup_trans_pane_g5

0x5225,	// (0x0009cd4f) bg_popup_trans_pane_g6

0x522d,	// (0x0009cd57) bg_popup_trans_pane_g7

0x5235,	// (0x0009cd5f) bg_popup_trans_pane_g8

0xc8e6,	// (0x000a4410) bg_popup_trans_pane_g9

0x0008,

0xf80b,	// (0x000a7335) bg_popup_trans_pane_g

0x523d,	// (0x0009cd67) cell_image3_tool_bar_pane_ParamLimits

0x523d,	// (0x0009cd67) cell_image3_tool_bar_pane

0xc43f,	// (0x000a3f69) cell_image3_tool_bar_pane_g1

0xaa49,	// (0x000a2573) bg_popup_trans_pane_cp1

0x5251,	// (0x0009cd7b) popup_image3_note_pane_t1

0x525f,	// (0x0009cd89) popup_image3_note_pane_t2

0x526d,	// (0x0009cd97) popup_image3_note_pane_t3

0x0002,

0xf81e,	// (0x000a7348) popup_image3_note_pane_t

0x527b,	// (0x0009cda5) popup_image3_note_pane_t3_copy1

0x5289,	// (0x0009cdb3) bg_myfav_hc_instruction_pane_ParamLimits

0x5289,	// (0x0009cdb3) bg_myfav_hc_instruction_pane

0x529d,	// (0x0009cdc7) cell_myfav_contact_pane_ParamLimits

0x529d,	// (0x0009cdc7) cell_myfav_contact_pane

0x52bb,	// (0x0009cde5) cell_myfav_contact_pane_cp1_ParamLimits

0x52bb,	// (0x0009cde5) cell_myfav_contact_pane_cp1

0x52d3,	// (0x0009cdfd) cell_myfav_contact_pane_cp2_ParamLimits

0x52d3,	// (0x0009cdfd) cell_myfav_contact_pane_cp2

0x52eb,	// (0x0009ce15) cell_myfav_contact_pane_cp3_ParamLimits

0x52eb,	// (0x0009ce15) cell_myfav_contact_pane_cp3

0x5302,	// (0x0009ce2c) cell_myfav_contact_pane_cp4_ParamLimits

0x5302,	// (0x0009ce2c) cell_myfav_contact_pane_cp4

0x531a,	// (0x0009ce44) cell_myfav_contact_pane_cp5_ParamLimits

0x531a,	// (0x0009ce44) cell_myfav_contact_pane_cp5

0x532e,	// (0x0009ce58) cell_myfav_contact_pane_cp6_ParamLimits

0x532e,	// (0x0009ce58) cell_myfav_contact_pane_cp6

0x5344,	// (0x0009ce6e) cell_myfav_contact_pane_cp7_ParamLimits

0x5344,	// (0x0009ce6e) cell_myfav_contact_pane_cp7

0x535e,	// (0x0009ce88) listscroll_gen_pane_cp05

0x5367,	// (0x0009ce91) main_myfav_hc_pane_g1_ParamLimits

0x5367,	// (0x0009ce91) main_myfav_hc_pane_g1

0x5381,	// (0x0009ceab) main_myfav_hc_pane_g2_ParamLimits

0x5381,	// (0x0009ceab) main_myfav_hc_pane_g2

0x0002,

0xf825,	// (0x000a734f) main_myfav_hc_pane_g_ParamLimits

0xf825,	// (0x000a734f) main_myfav_hc_pane_g

0x53b3,	// (0x0009cedd) main_myfav_hc_pane_t1_ParamLimits

0x53b3,	// (0x0009cedd) main_myfav_hc_pane_t1

0x53ca,	// (0x0009cef4) main_myfav_hc_pane_t2_ParamLimits

0x53ca,	// (0x0009cef4) main_myfav_hc_pane_t2

0x53dc,	// (0x0009cf06) main_myfav_hc_pane_t3_ParamLimits

0x53dc,	// (0x0009cf06) main_myfav_hc_pane_t3

0x53ee,	// (0x0009cf18) main_myfav_hc_pane_t4_ParamLimits

0x53ee,	// (0x0009cf18) main_myfav_hc_pane_t4

0x0004,

0xf82c,	// (0x000a7356) main_myfav_hc_pane_t_ParamLimits

0xf82c,	// (0x000a7356) main_myfav_hc_pane_t

0xc43f,	// (0x000a3f69) bg_myfav_hc_instruction_pane_g1

0x5416,	// (0x0009cf40) cell_myfav_contact_pane_g1_ParamLimits

0x5416,	// (0x0009cf40) cell_myfav_contact_pane_g1

0x5416,	// (0x0009cf40) cell_myfav_contact_pane_g2_ParamLimits

0x5416,	// (0x0009cf40) cell_myfav_contact_pane_g2

0x5422,	// (0x0009cf4c) cell_myfav_contact_pane_g3_ParamLimits

0x5422,	// (0x0009cf4c) cell_myfav_contact_pane_g3

0xc40f,	// (0x000a3f39) cell_myfav_contact_pane_g4_ParamLimits

0xc40f,	// (0x000a3f39) cell_myfav_contact_pane_g4

0x542f,	// (0x0009cf59) cell_myfav_contact_pane_g5_ParamLimits

0x542f,	// (0x0009cf59) cell_myfav_contact_pane_g5

0x0004,

0xf837,	// (0x000a7361) cell_myfav_contact_pane_g_ParamLimits

0xf837,	// (0x000a7361) cell_myfav_contact_pane_g

0x539b,	// (0x0009cec5) main_myfav_hc_pane_g3_ParamLimits

0x539b,	// (0x0009cec5) main_myfav_hc_pane_g3

0x0b2e,	// (0x00098658) popup_adpt_find_window

0x543b,	// (0x0009cf65) afind_page_pane_ParamLimits

0x543b,	// (0x0009cf65) afind_page_pane

0x5451,	// (0x0009cf7b) aid_size_cell_afind_ParamLimits

0x5451,	// (0x0009cf7b) aid_size_cell_afind

0x546f,	// (0x0009cf99) bg_popup_sub_pane_cp09_ParamLimits

0x546f,	// (0x0009cf99) bg_popup_sub_pane_cp09

0x5481,	// (0x0009cfab) find_pane_cp01_ParamLimits

0x5481,	// (0x0009cfab) find_pane_cp01

0x5495,	// (0x0009cfbf) grid_afind_control_pane_ParamLimits

0x5495,	// (0x0009cfbf) grid_afind_control_pane

0x54a9,	// (0x0009cfd3) grid_afind_pane_ParamLimits

0x54a9,	// (0x0009cfd3) grid_afind_pane

0x54cb,	// (0x0009cff5) cell_afind_pane_ParamLimits

0x54cb,	// (0x0009cff5) cell_afind_pane

0xc43f,	// (0x000a3f69) afind_page_pane_g1

0x5532,	// (0x0009d05c) afind_page_pane_g2

0x553a,	// (0x0009d064) afind_page_pane_g3

0x0002,

0xf842,	// (0x000a736c) afind_page_pane_g

0x5542,	// (0x0009d06c) afind_page_pane_t1

0x5562,	// (0x0009d08c) cell_afind_grid_control_pane_ParamLimits

0x5562,	// (0x0009d08c) cell_afind_grid_control_pane

0x5571,	// (0x0009d09b) bg_button_pane_cp69_ParamLimits

0x5571,	// (0x0009d09b) bg_button_pane_cp69

0x557d,	// (0x0009d0a7) cell_afind_pane_g1_ParamLimits

0x557d,	// (0x0009d0a7) cell_afind_pane_g1

0x558a,	// (0x0009d0b4) cell_afind_pane_t1_ParamLimits

0x558a,	// (0x0009d0b4) cell_afind_pane_t1

0x559c,	// (0x0009d0c6) bg_button_pane_cp72

0x55a4,	// (0x0009d0ce) cell_afind_grid_control_pane_g1

0x2e2c,	// (0x0009a956) aid_image_placing_area_ParamLimits

0x2e2c,	// (0x0009a956) aid_image_placing_area

0xc401,	// (0x000a3f2b) field_vitu_entry_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) field_vitu_entry_pane_g1

0xc401,	// (0x000a3f2b) field_vitu_entry_pane_g2_ParamLimits

0xc401,	// (0x000a3f2b) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x000a6ce6) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x000a6ce6) field_vitu_entry_pane_g

0xeefa,	// (0x000a6a24) cell_vitu_itu_pane_g1_ParamLimits

0xee8d,	// (0x000a69b7) cell_vitu_itu_pane_t3_ParamLimits

0xee8d,	// (0x000a69b7) cell_vitu_itu_pane_t3

0x47da,	// (0x0009c304) mp4_progress_pane_t1_ParamLimits

0x47fc,	// (0x0009c326) mp4_progress_pane_t2_ParamLimits

0xf788,	// (0x000a72b2) mp4_progress_pane_t_ParamLimits

0x481e,	// (0x0009c348) mup_progress_pane_cp04_ParamLimits

0x5402,	// (0x0009cf2c) main_myfav_hc_pane_t5_ParamLimits

0x5402,	// (0x0009cf2c) main_myfav_hc_pane_t5

0x9d83,	// (0x000a18ad) aid_zoom_text_primary

0x0b2e,	// (0x00098658) popup_adpt_find_window_ParamLimits

0x9dd4,	// (0x000a18fe) main_cam_set_pane

0x4d24,	// (0x0009c84e) cam4_zoom_pane_ParamLimits

0x4d24,	// (0x0009c84e) cam4_zoom_pane

0x55ad,	// (0x0009d0d7) main_cam_set_pane_g1_ParamLimits

0x55ad,	// (0x0009d0d7) main_cam_set_pane_g1

0x55bb,	// (0x0009d0e5) main_cam_set_pane_g2_ParamLimits

0x55bb,	// (0x0009d0e5) main_cam_set_pane_g2

0x0001,

0xf849,	// (0x000a7373) main_cam_set_pane_g_ParamLimits

0xf849,	// (0x000a7373) main_cam_set_pane_g

0x55dc,	// (0x0009d106) main_cam_set_pane_t1_ParamLimits

0x55dc,	// (0x0009d106) main_cam_set_pane_t1

0x55f7,	// (0x0009d121) main_cset_listscroll_pane_ParamLimits

0x55f7,	// (0x0009d121) main_cset_listscroll_pane

0x561d,	// (0x0009d147) main_cset_slider_pane_ParamLimits

0x561d,	// (0x0009d147) main_cset_slider_pane

0x564b,	// (0x0009d175) main_cset_list_pane_ParamLimits

0x564b,	// (0x0009d175) main_cset_list_pane

0x565b,	// (0x0009d185) scroll_pane_cp028

0x5664,	// (0x0009d18e) aid_area_touch_slider

0x5680,	// (0x0009d1aa) cset_slider_pane

0x56a3,	// (0x0009d1cd) main_cset_slider_pane_g1

0x56b8,	// (0x0009d1e2) main_cset_slider_pane_g2

0x0011,

0xf84e,	// (0x000a7378) main_cset_slider_pane_g

0x578c,	// (0x0009d2b6) main_cset_slider_pane_t1

0x57b4,	// (0x0009d2de) main_cset_slider_pane_t2

0x57ce,	// (0x0009d2f8) main_cset_slider_pane_t3

0x57e8,	// (0x0009d312) main_cset_slider_pane_t4

0x5802,	// (0x0009d32c) main_cset_slider_pane_t5

0x581c,	// (0x0009d346) main_cset_slider_pane_t6

0x5831,	// (0x0009d35b) main_cset_slider_pane_t7

0x000e,

0xf873,	// (0x000a739d) main_cset_slider_pane_t

0x59a7,	// (0x0009d4d1) cset_list_set_pane_ParamLimits

0x59a7,	// (0x0009d4d1) cset_list_set_pane

0x59b9,	// (0x0009d4e3) aid_position_infowindow_above

0x59c1,	// (0x0009d4eb) aid_position_infowindow_below

0x59c9,	// (0x0009d4f3) cset_list_set_pane_g1_ParamLimits

0x59c9,	// (0x0009d4f3) cset_list_set_pane_g1

0x59d5,	// (0x0009d4ff) cset_list_set_pane_g3_ParamLimits

0x59d5,	// (0x0009d4ff) cset_list_set_pane_g3

0x0001,

0xf892,	// (0x000a73bc) cset_list_set_pane_g_ParamLimits

0xf892,	// (0x000a73bc) cset_list_set_pane_g

0x59e4,	// (0x0009d50e) cset_list_set_pane_t1_ParamLimits

0x59e4,	// (0x0009d50e) cset_list_set_pane_t1

0xbf15,	// (0x000a3a3f) list_highlight_pane_cp021_ParamLimits

0xbf15,	// (0x000a3a3f) list_highlight_pane_cp021

0xd235,	// (0x000a4d5f) cset_slider_pane_g1

0xd247,	// (0x000a4d71) cset_slider_pane_g2

0xd23e,	// (0x000a4d68) cset_slider_pane_g3

0x0002,

0xf897,	// (0x000a73c1) cset_slider_pane_g

0xa4b5,	// (0x000a1fdf) aid_area_touch_cam4_zoom

0xa4bd,	// (0x000a1fe7) cam4_zoom_cont_pane

0xa4c5,	// (0x000a1fef) cam4_zoom_pane_g1

0xa4cd,	// (0x000a1ff7) cam4_zoom_pane_g2

0x59f9,	// (0x0009d523) cam4_zoom_pane_g3

0x0002,

0xf89e,	// (0x000a73c8) cam4_zoom_pane_g

0xa4d5,	// (0x000a1fff) cam4_zoom_cont_pane_g1

0xa4de,	// (0x000a2008) cam4_zoom_cont_pane_g2

0xa4e7,	// (0x000a2011) cam4_zoom_cont_pane_g3

0x0002,

0xf8a5,	// (0x000a73cf) cam4_zoom_cont_pane_g

0x4b37,	// (0x0009c661) call4_image_pane_ParamLimits

0x4b37,	// (0x0009c661) call4_image_pane

0x4b9e,	// (0x0009c6c8) call4_windows_conf_pane_ParamLimits

0x4be1,	// (0x0009c70b) popup_call4_audio_in_window_ParamLimits

0x4be1,	// (0x0009c70b) popup_call4_audio_in_window

0xaa49,	// (0x000a2573) bg_popup_call2_act_pane_cp02

0x4ca9,	// (0x0009c7d3) call4_list_conf_pane

0xc43f,	// (0x000a3f69) call4_image_pane_g1

0xc43f,	// (0x000a3f69) call4_image_pane_g2

0x0001,

0xf0af,	// (0x000a6bd9) call4_image_pane_g

0x5a01,	// (0x0009d52b) list_single_graphic_popup_conf4_pane_ParamLimits

0x5a01,	// (0x0009d52b) list_single_graphic_popup_conf4_pane

0xaa49,	// (0x000a2573) list_highlight_pane_cp022

0x5a14,	// (0x0009d53e) list_single_graphic_popup_conf4_pane_g1

0xce24,	// (0x000a494e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8ac,	// (0x000a73d6) list_single_graphic_popup_conf4_pane_g

0x5a1c,	// (0x0009d546) list_single_graphic_popup_conf4_pane_t1

0x17a9,	// (0x000992d3) popup_vtel_slider_window_ParamLimits

0x17a9,	// (0x000992d3) popup_vtel_slider_window

0x4870,	// (0x0009c39a) dialer2_ne_pane_t2_ParamLimits

0x4870,	// (0x0009c39a) dialer2_ne_pane_t2

0x0001,

0xf78d,	// (0x000a72b7) dialer2_ne_pane_t_ParamLimits

0xf78d,	// (0x000a72b7) dialer2_ne_pane_t

0xe69e,	// (0x000a61c8) bg_popup_sub_pane_cp010_ParamLimits

0xe69e,	// (0x000a61c8) bg_popup_sub_pane_cp010

0x5a32,	// (0x0009d55c) popup_vtel_slider_window_g1_ParamLimits

0x5a32,	// (0x0009d55c) popup_vtel_slider_window_g1

0x5a45,	// (0x0009d56f) popup_vtel_slider_window_g2_ParamLimits

0x5a45,	// (0x0009d56f) popup_vtel_slider_window_g2

0x0003,

0xf8b1,	// (0x000a73db) popup_vtel_slider_window_g_ParamLimits

0xf8b1,	// (0x000a73db) popup_vtel_slider_window_g

0x5a9b,	// (0x0009d5c5) vtel_slider_pane_ParamLimits

0x5a9b,	// (0x0009d5c5) vtel_slider_pane

0x5abd,	// (0x0009d5e7) vtel_slider_pane_g1_ParamLimits

0x5abd,	// (0x0009d5e7) vtel_slider_pane_g1

0x5ad1,	// (0x0009d5fb) vtel_slider_pane_g2_ParamLimits

0x5ad1,	// (0x0009d5fb) vtel_slider_pane_g2

0x5ae9,	// (0x0009d613) vtel_slider_pane_g3_ParamLimits

0x5ae9,	// (0x0009d613) vtel_slider_pane_g3

0x5abd,	// (0x0009d5e7) vtel_slider_pane_g4_ParamLimits

0x5abd,	// (0x0009d5e7) vtel_slider_pane_g4

0x5aff,	// (0x0009d629) vtel_slider_pane_g5_ParamLimits

0x5aff,	// (0x0009d629) vtel_slider_pane_g5

0x0004,

0xf8ba,	// (0x000a73e4) vtel_slider_pane_g_ParamLimits

0xf8ba,	// (0x000a73e4) vtel_slider_pane_g

0x9dd4,	// (0x000a18fe) main_gallery2_pane

0x4f24,	// (0x0009ca4e) aid_size_row_itut2_dropdow_list_ParamLimits

0x4f24,	// (0x0009ca4e) aid_size_row_itut2_dropdow_list

0x4fac,	// (0x0009cad6) grid_vitu2_function_top_pane_ParamLimits

0x4fac,	// (0x0009cad6) grid_vitu2_function_top_pane

0x5010,	// (0x0009cb3a) popup_vitu2_dropdown_list_window_ParamLimits

0x5010,	// (0x0009cb3a) popup_vitu2_dropdown_list_window

0x503b,	// (0x0009cb65) popup_vitu2_match_list_window

0x5b15,	// (0x0009d63f) cell_vitu2_function_top_pane_ParamLimits

0x5b15,	// (0x0009d63f) cell_vitu2_function_top_pane

0x5b2d,	// (0x0009d657) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5b2d,	// (0x0009d657) cell_vitu2_function_top_pane_cp01

0x5b49,	// (0x0009d673) cell_vitu2_function_top_wide_pane_ParamLimits

0x5b49,	// (0x0009d673) cell_vitu2_function_top_wide_pane

0x9dd4,	// (0x000a18fe) bg_button_pane_cp012

0x5b67,	// (0x0009d691) cell_vitu2_function_top_pane_g1

0xa4f0,	// (0x000a201a) bg_button_pane_cp013_ParamLimits

0xa4f0,	// (0x000a201a) bg_button_pane_cp013

0x5b7b,	// (0x0009d6a5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5b7b,	// (0x0009d6a5) cell_vitu2_function_top_wide_pane_g1

0x9dd4,	// (0x000a18fe) bg_popup_sub_pane_cp20

0x5b93,	// (0x0009d6bd) list_vitu2_match_list_pane

0x5205,	// (0x0009cd2f) bg_popup_sub_pane_cp20_g1

0x520d,	// (0x0009cd37) bg_popup_sub_pane_cp20_g2

0xc906,	// (0x000a4430) bg_popup_sub_pane_cp20_g3

0x5215,	// (0x0009cd3f) bg_popup_sub_pane_cp20_g4

0xc8e6,	// (0x000a4410) bg_popup_sub_pane_cp20_g5

0x5bab,	// (0x0009d6d5) bg_popup_sub_pane_cp20_g6

0x5225,	// (0x0009cd4f) bg_popup_sub_pane_cp20_g7

0x522d,	// (0x0009cd57) bg_popup_sub_pane_cp20_g8

0x5235,	// (0x0009cd5f) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8c5,	// (0x000a73ef) bg_popup_sub_pane_cp20_g

0xa50c,	// (0x000a2036) list_vitu2_match_list_item_pane_ParamLimits

0xa50c,	// (0x000a2036) list_vitu2_match_list_item_pane

0xa51e,	// (0x000a2048) list_vitu2_match_list_item_pane_t1

0x9de2,	// (0x000a190c) bg_popup_sub_pane_cp21

0xc6ed,	// (0x000a4217) grid_vitu2_dropdown_list_pane

0x5bb3,	// (0x0009d6dd) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5bb3,	// (0x0009d6dd) cell_vitu2_dropdown_list_char_pane

0x5bd3,	// (0x0009d6fd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5bd3,	// (0x0009d6fd) cell_vitu2_dropdown_list_ctrl_pane

0x5bfb,	// (0x0009d725) cell_vitu2_dropdown_list_char_pane_g1

0x5c04,	// (0x0009d72e) cell_vitu2_dropdown_list_char_pane_g2

0x5c0d,	// (0x0009d737) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8d8,	// (0x000a7402) cell_vitu2_dropdown_list_char_pane_g

0x5c16,	// (0x0009d740) cell_vitu2_dropdown_list_char_pane_t1

0x5c24,	// (0x0009d74e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5c24,	// (0x0009d74e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5c31,	// (0x0009d75b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5c31,	// (0x0009d75b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5c3e,	// (0x0009d768) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5c3e,	// (0x0009d768) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5c4b,	// (0x0009d775) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5c4b,	// (0x0009d775) cell_vitu2_dropdown_list_ctrl_pane_g4

0xaa73,	// (0x000a259d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xaa73,	// (0x000a259d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8df,	// (0x000a7409) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8df,	// (0x000a7409) cell_vitu2_dropdown_list_ctrl_pane_g

0x5c67,	// (0x0009d791) aid_size_cell_gallery2_ParamLimits

0x5c67,	// (0x0009d791) aid_size_cell_gallery2

0x5c85,	// (0x0009d7af) grid_gallery2_pane_ParamLimits

0x5c85,	// (0x0009d7af) grid_gallery2_pane

0x5c9f,	// (0x0009d7c9) scroll_pane_cp029_ParamLimits

0x5c9f,	// (0x0009d7c9) scroll_pane_cp029

0x5cb0,	// (0x0009d7da) cell_gallery2_pane_ParamLimits

0x5cb0,	// (0x0009d7da) cell_gallery2_pane

0x5d0f,	// (0x0009d839) cell_gallery2_pane_g2

0x5d17,	// (0x0009d841) cell_gallery2_pane_g3

0x5d1f,	// (0x0009d849) cell_gallery2_pane_g4

0x5d27,	// (0x0009d851) cell_gallery2_pane_g5

0xc6ed,	// (0x000a4217) grid_highlight_pane_cp10

0x503b,	// (0x0009cb65) popup_vitu2_match_list_window_ParamLimits

0x5050,	// (0x0009cb7a) popup_vitu2_query_window_ParamLimits

0x5050,	// (0x0009cb7a) popup_vitu2_query_window

0x9de2,	// (0x000a190c) bg_vitu2_candi_button_pane

0x5bfb,	// (0x0009d725) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5c04,	// (0x0009d72e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5c0d,	// (0x0009d737) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5d2f,	// (0x0009d859) bg_button_pane_cp015

0x5d40,	// (0x0009d86a) bg_button_pane_cp016

0x5d4c,	// (0x0009d876) bg_button_pane_cp017

0xd227,	// (0x000a4d51) bg_popup_sub_pane_cp22

0x5d8a,	// (0x0009d8b4) popup_vitu2_query_window_g1

0x5d96,	// (0x0009d8c0) popup_vitu2_query_window_g2

0x0002,

0xf8ea,	// (0x000a7414) popup_vitu2_query_window_g

0x5db8,	// (0x0009d8e2) popup_vitu2_query_window_t1_ParamLimits

0x5db8,	// (0x0009d8e2) popup_vitu2_query_window_t1

0x5deb,	// (0x0009d915) popup_vitu2_query_window_t2_ParamLimits

0x5deb,	// (0x0009d915) popup_vitu2_query_window_t2

0x5dfd,	// (0x0009d927) popup_vitu2_query_window_t3_ParamLimits

0x5dfd,	// (0x0009d927) popup_vitu2_query_window_t3

0x5e25,	// (0x0009d94f) popup_vitu2_query_window_t4_ParamLimits

0x5e25,	// (0x0009d94f) popup_vitu2_query_window_t4

0x5e39,	// (0x0009d963) popup_vitu2_query_window_t5_ParamLimits

0x5e39,	// (0x0009d963) popup_vitu2_query_window_t5

0x0006,

0xf8f1,	// (0x000a741b) popup_vitu2_query_window_t_ParamLimits

0xf8f1,	// (0x000a741b) popup_vitu2_query_window_t

0x5643,	// (0x0009d16d) main_cset_text_pane

0x5664,	// (0x0009d18e) aid_area_touch_slider_ParamLimits

0x5680,	// (0x0009d1aa) cset_slider_pane_ParamLimits

0x56a3,	// (0x0009d1cd) main_cset_slider_pane_g1_ParamLimits

0x56b8,	// (0x0009d1e2) main_cset_slider_pane_g2_ParamLimits

0x56cd,	// (0x0009d1f7) main_cset_slider_pane_g3_ParamLimits

0x56cd,	// (0x0009d1f7) main_cset_slider_pane_g3

0x56d9,	// (0x0009d203) main_cset_slider_pane_g4_ParamLimits

0x56d9,	// (0x0009d203) main_cset_slider_pane_g4

0x56e8,	// (0x0009d212) main_cset_slider_pane_g5_ParamLimits

0x56e8,	// (0x0009d212) main_cset_slider_pane_g5

0x56f4,	// (0x0009d21e) main_cset_slider_pane_g6_ParamLimits

0x56f4,	// (0x0009d21e) main_cset_slider_pane_g6

0xf84e,	// (0x000a7378) main_cset_slider_pane_g_ParamLimits

0x578c,	// (0x0009d2b6) main_cset_slider_pane_t1_ParamLimits

0x57b4,	// (0x0009d2de) main_cset_slider_pane_t2_ParamLimits

0x57ce,	// (0x0009d2f8) main_cset_slider_pane_t3_ParamLimits

0x57e8,	// (0x0009d312) main_cset_slider_pane_t4_ParamLimits

0x5802,	// (0x0009d32c) main_cset_slider_pane_t5_ParamLimits

0x581c,	// (0x0009d346) main_cset_slider_pane_t6_ParamLimits

0x5831,	// (0x0009d35b) main_cset_slider_pane_t7_ParamLimits

0x585b,	// (0x0009d385) main_cset_slider_pane_t8_ParamLimits

0x585b,	// (0x0009d385) main_cset_slider_pane_t8

0x5883,	// (0x0009d3ad) main_cset_slider_pane_t9_ParamLimits

0x5883,	// (0x0009d3ad) main_cset_slider_pane_t9

0x58ab,	// (0x0009d3d5) main_cset_slider_pane_t10_ParamLimits

0x58ab,	// (0x0009d3d5) main_cset_slider_pane_t10

0x58d3,	// (0x0009d3fd) main_cset_slider_pane_t11_ParamLimits

0x58d3,	// (0x0009d3fd) main_cset_slider_pane_t11

0x58fb,	// (0x0009d425) main_cset_slider_pane_t12_ParamLimits

0x58fb,	// (0x0009d425) main_cset_slider_pane_t12

0x5918,	// (0x0009d442) main_cset_slider_pane_t13_ParamLimits

0x5918,	// (0x0009d442) main_cset_slider_pane_t13

0xf873,	// (0x000a739d) main_cset_slider_pane_t_ParamLimits

0xaa49,	// (0x000a2573) bg_popup_sub_pane_cp011

0x5ea3,	// (0x0009d9cd) main_cset_text_pane_g1

0x5eab,	// (0x0009d9d5) main_cset_text_pane_t1

0x5eb9,	// (0x0009d9e3) main_cset_text_pane_t2

0x5ec7,	// (0x0009d9f1) main_cset_text_pane_t3

0x5ed5,	// (0x0009d9ff) main_cset_text_pane_t4

0x5ee3,	// (0x0009da0d) main_cset_text_pane_t5

0x5ef1,	// (0x0009da1b) main_cset_text_pane_t6

0x5eff,	// (0x0009da29) main_cset_text_pane_t7

0x0006,

0xf900,	// (0x000a742a) main_cset_text_pane_t

0x9de2,	// (0x000a190c) main_cam4_burst_pane

0x9de2,	// (0x000a190c) main_cam5_pane

0x5550,	// (0x0009d07a) bg_button_pane_cp019

0x5559,	// (0x0009d083) bg_button_pane_cp020

0x5708,	// (0x0009d232) main_cset_slider_pane_g7_ParamLimits

0x5708,	// (0x0009d232) main_cset_slider_pane_g7

0x5714,	// (0x0009d23e) main_cset_slider_pane_g8_ParamLimits

0x5714,	// (0x0009d23e) main_cset_slider_pane_g8

0x5720,	// (0x0009d24a) main_cset_slider_pane_g9_ParamLimits

0x5720,	// (0x0009d24a) main_cset_slider_pane_g9

0x572c,	// (0x0009d256) main_cset_slider_pane_g10_ParamLimits

0x572c,	// (0x0009d256) main_cset_slider_pane_g10

0x5738,	// (0x0009d262) main_cset_slider_pane_g11_ParamLimits

0x5738,	// (0x0009d262) main_cset_slider_pane_g11

0x5744,	// (0x0009d26e) main_cset_slider_pane_g12_ParamLimits

0x5744,	// (0x0009d26e) main_cset_slider_pane_g12

0x5750,	// (0x0009d27a) main_cset_slider_pane_g13_ParamLimits

0x5750,	// (0x0009d27a) main_cset_slider_pane_g13

0x575c,	// (0x0009d286) main_cset_slider_pane_g14_ParamLimits

0x575c,	// (0x0009d286) main_cset_slider_pane_g14

0x5768,	// (0x0009d292) main_cset_slider_pane_g15_ParamLimits

0x5768,	// (0x0009d292) main_cset_slider_pane_g15

0x5935,	// (0x0009d45f) main_cset_slider_pane_t14_ParamLimits

0x5935,	// (0x0009d45f) main_cset_slider_pane_t14

0x596e,	// (0x0009d498) main_cset_slider_pane_t15_ParamLimits

0x596e,	// (0x0009d498) main_cset_slider_pane_t15

0x5f0d,	// (0x0009da37) aid_cam4_burst_size_cell_ParamLimits

0x5f0d,	// (0x0009da37) aid_cam4_burst_size_cell

0x5f2d,	// (0x0009da57) grid_cam4_burst_pane_ParamLimits

0x5f2d,	// (0x0009da57) grid_cam4_burst_pane

0x5f65,	// (0x0009da8f) linegrid_cam4_burst_pane_ParamLimits

0x5f65,	// (0x0009da8f) linegrid_cam4_burst_pane

0xaa99,	// (0x000a25c3) scroll_pane_cp30_ParamLimits

0xaa99,	// (0x000a25c3) scroll_pane_cp30

0x5f89,	// (0x0009dab3) cell_cam4_burst_pane_ParamLimits

0x5f89,	// (0x0009dab3) cell_cam4_burst_pane

0x5fd6,	// (0x0009db00) linegrid_cam4_burst_pane_g1_ParamLimits

0x5fd6,	// (0x0009db00) linegrid_cam4_burst_pane_g1

0x5fe3,	// (0x0009db0d) linegrid_cam4_burst_pane_g2_ParamLimits

0x5fe3,	// (0x0009db0d) linegrid_cam4_burst_pane_g2

0x5ff4,	// (0x0009db1e) linegrid_cam4_burst_pane_g3_ParamLimits

0x5ff4,	// (0x0009db1e) linegrid_cam4_burst_pane_g3

0x0002,

0xf90f,	// (0x000a7439) linegrid_cam4_burst_pane_g_ParamLimits

0xf90f,	// (0x000a7439) linegrid_cam4_burst_pane_g

0x6001,	// (0x0009db2b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6001,	// (0x0009db2b) linegrid_cam4_burst_pane_g3_copy1

0x601b,	// (0x0009db45) linegrid_cam4_burst_pane_g4_ParamLimits

0x601b,	// (0x0009db45) linegrid_cam4_burst_pane_g4

0x6028,	// (0x0009db52) linegrid_cam4_burst_pane_g5_ParamLimits

0x6028,	// (0x0009db52) linegrid_cam4_burst_pane_g5

0x6039,	// (0x0009db63) linegrid_cam4_burst_pane_g6_ParamLimits

0x6039,	// (0x0009db63) linegrid_cam4_burst_pane_g6

0x6050,	// (0x0009db7a) linegrid_cam4_burst_pane_g7_ParamLimits

0x6050,	// (0x0009db7a) linegrid_cam4_burst_pane_g7

0x605d,	// (0x0009db87) cell_cam4_burst_pane_g1

0xa52c,	// (0x000a2056) main_cam5_pane_t1_ParamLimits

0xa52c,	// (0x000a2056) main_cam5_pane_t1

0xa53e,	// (0x000a2068) main_cam5_pane_t2_ParamLimits

0xa53e,	// (0x000a2068) main_cam5_pane_t2

0xa550,	// (0x000a207a) main_cam5_pane_t3_ParamLimits

0xa550,	// (0x000a207a) main_cam5_pane_t3

0xa562,	// (0x000a208c) main_cam5_pane_t4_ParamLimits

0xa562,	// (0x000a208c) main_cam5_pane_t4

0xa57a,	// (0x000a20a4) main_cam5_pane_t5_ParamLimits

0xa57a,	// (0x000a20a4) main_cam5_pane_t5

0xa58e,	// (0x000a20b8) main_cam5_pane_t6_ParamLimits

0xa58e,	// (0x000a20b8) main_cam5_pane_t6

0xa5a2,	// (0x000a20cc) main_cam5_pane_t7_ParamLimits

0xa5a2,	// (0x000a20cc) main_cam5_pane_t7

0xa5b4,	// (0x000a20de) main_cam5_pane_t8_ParamLimits

0xa5b4,	// (0x000a20de) main_cam5_pane_t8

0xa5d0,	// (0x000a20fa) main_cam5_pane_t9_ParamLimits

0xa5d0,	// (0x000a20fa) main_cam5_pane_t9

0xa5e2,	// (0x000a210c) main_cam5_pane_t10_ParamLimits

0xa5e2,	// (0x000a210c) main_cam5_pane_t10

0xa5f4,	// (0x000a211e) main_cam5_pane_t11_ParamLimits

0xa5f4,	// (0x000a211e) main_cam5_pane_t11

0xa606,	// (0x000a2130) main_cam5_pane_t12_ParamLimits

0xa606,	// (0x000a2130) main_cam5_pane_t12

0xa61b,	// (0x000a2145) main_cam5_pane_t13_ParamLimits

0xa61b,	// (0x000a2145) main_cam5_pane_t13

0x000c,

0xf91b,	// (0x000a7445) main_cam5_pane_t_ParamLimits

0xf91b,	// (0x000a7445) main_cam5_pane_t

0x0baf,	// (0x000986d9) popup_scut_keymap_window_ParamLimits

0x0baf,	// (0x000986d9) popup_scut_keymap_window

0x607c,	// (0x0009dba6) aid_size_cell_brow_shortcut

0xc6ed,	// (0x000a4217) bg_popup_window_pane_cp010

0x6088,	// (0x0009dbb2) grid_scut_pane

0x6094,	// (0x0009dbbe) cell_scut_pane_ParamLimits

0x6094,	// (0x0009dbbe) cell_scut_pane

0x60ab,	// (0x0009dbd5) cell_scut_pane_g1

0xa638,	// (0x000a2162) cell_scut_pane_t1

0xa647,	// (0x000a2171) cell_scut_pane_t2

0x60b4,	// (0x0009dbde) cell_scut_pane_t3

0x0002,

0xf936,	// (0x000a7460) cell_scut_pane_t

0x3c87,	// (0x0009b7b1) main_mup3_pane_g8_ParamLimits

0x3c87,	// (0x0009b7b1) main_mup3_pane_g8

0x4f3e,	// (0x0009ca68) area_vitu2_query_pane_ParamLimits

0x4f3e,	// (0x0009ca68) area_vitu2_query_pane

0x5d58,	// (0x0009d882) input_focus_pane_cp08

0xa656,	// (0x000a2180) area_vitu2_query_pane_g1

0x60c2,	// (0x0009dbec) area_vitu2_query_pane_g2

0x0001,

0xf93d,	// (0x000a7467) area_vitu2_query_pane_g

0x60d1,	// (0x0009dbfb) area_vitu2_query_pane_t1_ParamLimits

0x60d1,	// (0x0009dbfb) area_vitu2_query_pane_t1

0x60e5,	// (0x0009dc0f) area_vitu2_query_pane_t2_ParamLimits

0x60e5,	// (0x0009dc0f) area_vitu2_query_pane_t2

0x60f9,	// (0x0009dc23) area_vitu2_query_pane_t3_ParamLimits

0x60f9,	// (0x0009dc23) area_vitu2_query_pane_t3

0x6121,	// (0x0009dc4b) area_vitu2_query_pane_t4_ParamLimits

0x6121,	// (0x0009dc4b) area_vitu2_query_pane_t4

0x6149,	// (0x0009dc73) area_vitu2_query_pane_t5_ParamLimits

0x6149,	// (0x0009dc73) area_vitu2_query_pane_t5

0x6171,	// (0x0009dc9b) area_vitu2_query_pane_t6_ParamLimits

0x6171,	// (0x0009dc9b) area_vitu2_query_pane_t6

0x0006,

0xf942,	// (0x000a746c) area_vitu2_query_pane_t_ParamLimits

0xf942,	// (0x000a746c) area_vitu2_query_pane_t

0x61bd,	// (0x0009dce7) bg_button_pane_cp018

0x61c9,	// (0x0009dcf3) bg_button_pane_cp021

0x61d5,	// (0x0009dcff) bg_button_pane_cp022

0x61f4,	// (0x0009dd1e) input_focus_pane_cp09

0xcf33,	// (0x000a4a5d) aid_size_touch_mv_arrow_left

0xcf5e,	// (0x000a4a88) aid_size_touch_mv_arrow_right

0xaa81,	// (0x000a25ab) main_cset_slider_pane_g16_ParamLimits

0xaa81,	// (0x000a25ab) main_cset_slider_pane_g16

0xaa8d,	// (0x000a25b7) main_cset_slider_pane_g17_ParamLimits

0xaa8d,	// (0x000a25b7) main_cset_slider_pane_g17

0x605d,	// (0x0009db87) cell_cam4_burst_pane_g1_ParamLimits

0xaa49,	// (0x000a2573) compa_mode_pane

0x5a55,	// (0x0009d57f) popup_vtel_slider_window_g3_ParamLimits

0x5a55,	// (0x0009d57f) popup_vtel_slider_window_g3

0x5a6c,	// (0x0009d596) popup_vtel_slider_window_g4_ParamLimits

0x5a6c,	// (0x0009d596) popup_vtel_slider_window_g4

0x5a83,	// (0x0009d5ad) popup_vtel_slider_window_t1_ParamLimits

0x5a83,	// (0x0009d5ad) popup_vtel_slider_window_t1

0x9de2,	// (0x000a190c) main_cl_pane

0x9f8f,	// (0x000a1ab9) popup_imed_adjust2_window_ParamLimits

0xd227,	// (0x000a4d51) bg_tb_trans_pane_cp05_ParamLimits

0xee1a,	// (0x000a6944) popup_imed_adjust2_window_g1_ParamLimits

0xee29,	// (0x000a6953) popup_imed_adjust2_window_g2_ParamLimits

0xee29,	// (0x000a6953) popup_imed_adjust2_window_g2

0xee35,	// (0x000a695f) popup_imed_adjust2_window_g3_ParamLimits

0xee35,	// (0x000a695f) popup_imed_adjust2_window_g3

0x0002,

0xf6d8,	// (0x000a7202) popup_imed_adjust2_window_g_ParamLimits

0xf6d8,	// (0x000a7202) popup_imed_adjust2_window_g

0xee41,	// (0x000a696b) popup_imed_adjust2_window_t1_ParamLimits

0xee59,	// (0x000a6983) slider_imed_adjust_pane_ParamLimits

0xee6d,	// (0x000a6997) slider_imed_adjust_pane_g1_ParamLimits

0xee7d,	// (0x000a69a7) slider_imed_adjust_pane_g2_ParamLimits

0xeeaa,	// (0x000a69d4) slider_imed_adjust_pane_g3_ParamLimits

0xeebb,	// (0x000a69e5) slider_imed_adjust_pane_g4_ParamLimits

0xf6df,	// (0x000a7209) slider_imed_adjust_pane_g_ParamLimits

0x4cc5,	// (0x0009c7ef) aid_touch_area_cam4_ParamLimits

0x4cc5,	// (0x0009c7ef) aid_touch_area_cam4

0xa3d2,	// (0x000a1efc) battery_pane_cp01

0x4d94,	// (0x0009c8be) main_camera4_pane_g6_ParamLimits

0x4d94,	// (0x0009c8be) main_camera4_pane_g6

0x4dbe,	// (0x0009c8e8) main_camera4_pane_t2_ParamLimits

0x4dbe,	// (0x0009c8e8) main_camera4_pane_t2

0x0001,

0xf7c1,	// (0x000a72eb) main_camera4_pane_t_ParamLimits

0xf7c1,	// (0x000a72eb) main_camera4_pane_t

0x4df3,	// (0x0009c91d) aid_touch_area_vid4_ParamLimits

0x4df3,	// (0x0009c91d) aid_touch_area_vid4

0x4e47,	// (0x0009c971) main_video4_pane_g5_ParamLimits

0x4e47,	// (0x0009c971) main_video4_pane_g5

0x4e6c,	// (0x0009c996) vid4_progress_pane_ParamLimits

0x4e6c,	// (0x0009c996) vid4_progress_pane

0x5780,	// (0x0009d2aa) main_cset_slider_pane_g18_ParamLimits

0x5780,	// (0x0009d2aa) main_cset_slider_pane_g18

0x6070,	// (0x0009db9a) cell_cam4_burst_pane_g2_ParamLimits

0x6070,	// (0x0009db9a) cell_cam4_burst_pane_g2

0x0001,

0xf916,	// (0x000a7440) cell_cam4_burst_pane_g_ParamLimits

0xf916,	// (0x000a7440) cell_cam4_burst_pane_g

0xc49d,	// (0x000a3fc7) bg_cl_pane_ParamLimits

0xc49d,	// (0x000a3fc7) bg_cl_pane

0x6204,	// (0x0009dd2e) cl_header_pane_ParamLimits

0x6204,	// (0x0009dd2e) cl_header_pane

0x6218,	// (0x0009dd42) cl_listscroll_pane_ParamLimits

0x6218,	// (0x0009dd42) cl_listscroll_pane

0xa662,	// (0x000a218c) bg_cl_pane_g1

0xa66a,	// (0x000a2194) bg_cl_pane_g2

0xa672,	// (0x000a219c) bg_cl_pane_g3

0xa67a,	// (0x000a21a4) bg_cl_pane_g4

0xa682,	// (0x000a21ac) bg_cl_pane_g5

0xa68a,	// (0x000a21b4) bg_cl_pane_g6

0xa692,	// (0x000a21bc) bg_cl_pane_g7

0xa69a,	// (0x000a21c4) bg_cl_pane_g8

0xa6a2,	// (0x000a21cc) bg_cl_pane_g9

0x0008,

0xf951,	// (0x000a747b) bg_cl_pane_g

0x6228,	// (0x0009dd52) aid_height_cl_leading_ParamLimits

0x6228,	// (0x0009dd52) aid_height_cl_leading

0x6234,	// (0x0009dd5e) aid_height_cl_text_ParamLimits

0x6234,	// (0x0009dd5e) aid_height_cl_text

0xbf15,	// (0x000a3a3f) bg_cl_header_pane_ParamLimits

0xbf15,	// (0x000a3a3f) bg_cl_header_pane

0x6253,	// (0x0009dd7d) cl_header_pane_g1_ParamLimits

0x6253,	// (0x0009dd7d) cl_header_pane_g1

0x6269,	// (0x0009dd93) cl_header_pane_t1_ParamLimits

0x6269,	// (0x0009dd93) cl_header_pane_t1

0xa6aa,	// (0x000a21d4) cl_list_pane

0x565b,	// (0x0009d185) hc_scroll_pane_cp01

0xc8e6,	// (0x000a4410) bg_cl_header_pane_g1

0x5205,	// (0x0009cd2f) bg_cl_header_pane_g2

0xc906,	// (0x000a4430) bg_cl_header_pane_g3

0x5215,	// (0x0009cd3f) bg_cl_header_pane_g4

0x520d,	// (0x0009cd37) bg_cl_header_pane_g5

0x5bab,	// (0x0009d6d5) bg_cl_header_pane_g6

0x522d,	// (0x0009cd57) bg_cl_header_pane_g7

0x5235,	// (0x0009cd5f) bg_cl_header_pane_g8

0x5225,	// (0x0009cd4f) bg_cl_header_pane_g9

0x0008,

0xf964,	// (0x000a748e) bg_cl_header_pane_g

0x6282,	// (0x0009ddac) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6282,	// (0x0009ddac) hc_cl_list_double_graphic_heading_pane

0x6293,	// (0x0009ddbd) hc_cl_list_single_graphic_pane_ParamLimits

0x6293,	// (0x0009ddbd) hc_cl_list_single_graphic_pane

0x62ac,	// (0x0009ddd6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x62ac,	// (0x0009ddd6) hc_cl_list_single_graphic_pane_g1

0x62b8,	// (0x0009dde2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x62b8,	// (0x0009dde2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf977,	// (0x000a74a1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf977,	// (0x000a74a1) hc_cl_list_single_graphic_pane_g

0x62cc,	// (0x0009ddf6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x62cc,	// (0x0009ddf6) hc_cl_list_single_graphic_pane_t1

0x62ac,	// (0x0009ddd6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x62ac,	// (0x0009ddd6) hc_cl_list_double_graphic_heading_pane_g1

0x62e1,	// (0x0009de0b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x62e1,	// (0x0009de0b) hc_cl_list_double_graphic_heading_pane_g2

0x62f5,	// (0x0009de1f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x62f5,	// (0x0009de1f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf97c,	// (0x000a74a6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf97c,	// (0x000a74a6) hc_cl_list_double_graphic_heading_pane_g

0x6309,	// (0x0009de33) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6309,	// (0x0009de33) hc_cl_list_double_graphic_heading_pane_t1

0x631e,	// (0x0009de48) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x631e,	// (0x0009de48) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf983,	// (0x000a74ad) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf983,	// (0x000a74ad) hc_cl_list_double_graphic_heading_pane_t

0xa6bb,	// (0x000a21e5) vid4_progress_pane_g1

0xa6cb,	// (0x000a21f5) vid4_progress_pane_g2

0x6333,	// (0x0009de5d) vid4_progress_pane_g3

0xa6db,	// (0x000a2205) vid4_progress_pane_g4

0x0004,

0xf988,	// (0x000a74b2) vid4_progress_pane_g

0x6345,	// (0x0009de6f) vid4_progress_pane_t1

0xa6f3,	// (0x000a221d) vid4_progress_pane_t2

0x0002,

0xf993,	// (0x000a74bd) vid4_progress_pane_t

0x635b,	// (0x0009de85) wait_bar_pane_cp07

0xe6ac,	// (0x000a61d6) blid_firmament_pane_ParamLimits

0xe6ef,	// (0x000a6219) popup_blid_sat_info2_window_g1

0xe713,	// (0x000a623d) popup_blid_sat_info2_window_t3

0xe721,	// (0x000a624b) popup_blid_sat_info2_window_t4

0xe72f,	// (0x000a6259) popup_blid_sat_info2_window_t5

0xe73d,	// (0x000a6267) popup_blid_sat_info2_window_t6

0xe74d,	// (0x000a6277) popup_blid_sat_info2_window_t7

0xe75b,	// (0x000a6285) popup_blid_sat_info2_window_t8

0xe769,	// (0x000a6293) popup_blid_sat_info2_window_t9

0xe777,	// (0x000a62a1) popup_blid_sat_info2_window_t10

0xe838,	// (0x000a6362) aid_firma_cardinal_ParamLimits

0xe84c,	// (0x000a6376) blid_firmament_pane_t1_ParamLimits

0xe863,	// (0x000a638d) blid_firmament_pane_t2_ParamLimits

0xe87a,	// (0x000a63a4) blid_firmament_pane_t3_ParamLimits

0xe891,	// (0x000a63bb) blid_firmament_pane_t4_ParamLimits

0xf619,	// (0x000a7143) blid_firmament_pane_t_ParamLimits

0xe8a8,	// (0x000a63d2) blid_sat_info_pane_ParamLimits

0x9dd4,	// (0x000a18fe) main_cam_set_pane_ParamLimits

0x4464,	// (0x0009bf8e) aid_size_cell_colour_35_ParamLimits

0x4484,	// (0x0009bfae) aid_size_cell_colour_112_ParamLimits

0x44a4,	// (0x0009bfce) aid_size_cell_effect_ParamLimits

0xd227,	// (0x000a4d51) bg_tb_trans_pane_cp02_ParamLimits

0xcb4e,	// (0x000a4678) heading_imed_pane_ParamLimits

0x44c4,	// (0x0009bfee) listscroll_imed_pane_ParamLimits

0xdb5f,	// (0x000a5689) popup_call2_audio_first_window_g5_ParamLimits

0xdb5f,	// (0x000a5689) popup_call2_audio_first_window_g5

0x48b5,	// (0x0009c3df) aid_size_touch_image3_arrow_left_ParamLimits

0x48b5,	// (0x0009c3df) aid_size_touch_image3_arrow_left

0x48e1,	// (0x0009c40b) aid_size_touch_image3_arrow_right_ParamLimits

0x48e1,	// (0x0009c40b) aid_size_touch_image3_arrow_right

0xa708,	// (0x000a2232) vid4_progress_pane_t3

0x4667,	// (0x0009c191) main_hwr_training_symbol_option_pane_ParamLimits

0x4667,	// (0x0009c191) main_hwr_training_symbol_option_pane

0xefa8,	// (0x000a6ad2) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x000a6ad2) popup_hwr_training_preview_window

0x4687,	// (0x0009c1b1) hwr_training_navi_pane_g5_ParamLimits

0x4687,	// (0x0009c1b1) hwr_training_navi_pane_g5

0x514e,	// (0x0009cc78) popup_char_count_window

0x9dd4,	// (0x000a18fe) bg_popup_sub_pane_cp20_ParamLimits

0x5b93,	// (0x0009d6bd) list_vitu2_match_list_pane_ParamLimits

0x5b9f,	// (0x0009d6c9) vitu2_page_scroll_pane_ParamLimits

0x5b9f,	// (0x0009d6c9) vitu2_page_scroll_pane

0xa727,	// (0x000a2251) list_single_hwr_training_symbol_option_pane_ParamLimits

0xa727,	// (0x000a2251) list_single_hwr_training_symbol_option_pane

0xa73a,	// (0x000a2264) list_single_hwr_training_symbol_option_pane_g1

0xa742,	// (0x000a226c) list_single_hwr_training_symbol_option_pane_t1

0xa750,	// (0x000a227a) bg_button_pane_cp023

0xa759,	// (0x000a2283) bg_button_pane_cp024

0xa78c,	// (0x000a22b6) vitu2_page_scroll_pane_g1

0xa794,	// (0x000a22be) vitu2_page_scroll_pane_g2

0x0001,

0xf99a,	// (0x000a74c4) vitu2_page_scroll_pane_g

0xa79c,	// (0x000a22c6) vitu2_page_scroll_pane_t1

0xc514,	// (0x000a403e) popup_char_count_window_g1

0xa7ab,	// (0x000a22d5) popup_char_count_window_g2

0x0e32,	// (0x0009895c) popup_char_count_window_g3

0x0002,

0xf99f,	// (0x000a74c9) popup_char_count_window_g

0xa7b4,	// (0x000a22de) popup_char_count_window_t1

0x9de2,	// (0x000a190c) main_vded2_pane

0xee06,	// (0x000a6930) aid_size_cell_imed_line

0xee10,	// (0x000a693a) grid_imed_line_width_pane

0xa482,	// (0x000a1fac) vid4_indicators_pane_g4

0xa7c2,	// (0x000a22ec) cell_imed_line_width_pane_ParamLimits

0xa7c2,	// (0x000a22ec) cell_imed_line_width_pane

0xa7d6,	// (0x000a2300) cell_imed_line_width_pane_g1

0xa7df,	// (0x000a2309) cell_imed_line_width_pane_g2

0x0001,

0xf9a6,	// (0x000a74d0) cell_imed_line_width_pane_g

0x6399,	// (0x0009dec3) main_vded2_pane_g1_ParamLimits

0x6399,	// (0x0009dec3) main_vded2_pane_g1

0x63af,	// (0x0009ded9) main_vded2_pane_g2_ParamLimits

0x63af,	// (0x0009ded9) main_vded2_pane_g2

0x0001,

0xf9ab,	// (0x000a74d5) main_vded2_pane_g_ParamLimits

0xf9ab,	// (0x000a74d5) main_vded2_pane_g

0x63c1,	// (0x0009deeb) vded2_slider_pane_ParamLimits

0x63c1,	// (0x0009deeb) vded2_slider_pane

0x63d1,	// (0x0009defb) aid_size_touch_vded2_end

0x63db,	// (0x0009df05) aid_size_touch_vded2_playhead

0xa7e7,	// (0x000a2311) aid_size_touch_vded2_start

0xa7ef,	// (0x000a2319) vded2_slider_bg_pane

0xa7f8,	// (0x000a2322) vded2_slider_pane_g1

0xa801,	// (0x000a232b) vded2_slider_pane_g2

0x63e5,	// (0x0009df0f) vded2_slider_pane_g3

0x0002,

0xf9b0,	// (0x000a74da) vded2_slider_pane_g

0xa809,	// (0x000a2333) vded2_slider_bg_pane_g1

0xa812,	// (0x000a233c) vded2_slider_bg_pane_g2

0xa81b,	// (0x000a2345) vded2_slider_bg_pane_g3

0x0002,

0xf9b7,	// (0x000a74e1) vded2_slider_bg_pane_g

0x2abc,	// (0x0009a5e6) aid_postcard_touch_down_pane_ParamLimits

0x2abc,	// (0x0009a5e6) aid_postcard_touch_down_pane

0x2ad2,	// (0x0009a5fc) aid_postcard_touch_up_pane_ParamLimits

0x2ad2,	// (0x0009a5fc) aid_postcard_touch_up_pane

0x9de2,	// (0x000a190c) main_blid2_pane

0x9f75,	// (0x000a1a9f) popup_blid2_search_window

0xaa49,	// (0x000a2573) blid2_gps_pane

0xaa49,	// (0x000a2573) blid2_navig_pane

0xaa49,	// (0x000a2573) blid2_search_pane

0xaa49,	// (0x000a2573) blid2_tripm_pane

0x63f0,	// (0x0009df1a) blid2_search_pane_g1_ParamLimits

0x63f0,	// (0x0009df1a) blid2_search_pane_g1

0x6408,	// (0x0009df32) blid2_search_pane_t1_ParamLimits

0x6408,	// (0x0009df32) blid2_search_pane_t1

0x641a,	// (0x0009df44) aid_size_cell_blid2_gps_ParamLimits

0x641a,	// (0x0009df44) aid_size_cell_blid2_gps

0x6432,	// (0x0009df5c) blid2_gps_pane_g1_ParamLimits

0x6432,	// (0x0009df5c) blid2_gps_pane_g1

0x6446,	// (0x0009df70) grid_blid2_satellite_pane_ParamLimits

0x6446,	// (0x0009df70) grid_blid2_satellite_pane

0x6460,	// (0x0009df8a) blid2_navig_pane_g1_ParamLimits

0x6460,	// (0x0009df8a) blid2_navig_pane_g1

0x646c,	// (0x0009df96) blid2_navig_pane_t1_ParamLimits

0x646c,	// (0x0009df96) blid2_navig_pane_t1

0x6487,	// (0x0009dfb1) blid2_navig_pane_t2_ParamLimits

0x6487,	// (0x0009dfb1) blid2_navig_pane_t2

0x0001,

0xf9be,	// (0x000a74e8) blid2_navig_pane_t_ParamLimits

0xf9be,	// (0x000a74e8) blid2_navig_pane_t

0x64a2,	// (0x0009dfcc) blid2_navig_ring_pane_ParamLimits

0x64a2,	// (0x0009dfcc) blid2_navig_ring_pane

0x64bb,	// (0x0009dfe5) blid2_speed_pane_ParamLimits

0x64bb,	// (0x0009dfe5) blid2_speed_pane

0x64c7,	// (0x0009dff1) blid2_tripm_pane_g1_ParamLimits

0x64c7,	// (0x0009dff1) blid2_tripm_pane_g1

0x64e2,	// (0x0009e00c) blid2_tripm_pane_g2_ParamLimits

0x64e2,	// (0x0009e00c) blid2_tripm_pane_g2

0x64f6,	// (0x0009e020) blid2_tripm_pane_g3_ParamLimits

0x64f6,	// (0x0009e020) blid2_tripm_pane_g3

0x650a,	// (0x0009e034) blid2_tripm_pane_g4_ParamLimits

0x650a,	// (0x0009e034) blid2_tripm_pane_g4

0x651e,	// (0x0009e048) blid2_tripm_pane_g5_ParamLimits

0x651e,	// (0x0009e048) blid2_tripm_pane_g5

0x0005,

0xf9c3,	// (0x000a74ed) blid2_tripm_pane_g_ParamLimits

0xf9c3,	// (0x000a74ed) blid2_tripm_pane_g

0x6544,	// (0x0009e06e) blid2_tripm_pane_t1_ParamLimits

0x6544,	// (0x0009e06e) blid2_tripm_pane_t1

0x655f,	// (0x0009e089) blid2_tripm_pane_t2_ParamLimits

0x655f,	// (0x0009e089) blid2_tripm_pane_t2

0x6578,	// (0x0009e0a2) blid2_tripm_pane_t3_ParamLimits

0x6578,	// (0x0009e0a2) blid2_tripm_pane_t3

0x0003,

0xf9d0,	// (0x000a74fa) blid2_tripm_pane_t_ParamLimits

0xf9d0,	// (0x000a74fa) blid2_tripm_pane_t

0x65bf,	// (0x0009e0e9) cell_blid2_satellite_pane_ParamLimits

0x65bf,	// (0x0009e0e9) cell_blid2_satellite_pane

0x65dd,	// (0x0009e107) cell_blid2_satellite_pane_g1

0xa824,	// (0x000a234e) cell_blid2_satellite_pane_t1

0xc43f,	// (0x000a3f69) blid2_speed_pane_g1

0xa832,	// (0x000a235c) blid2_speed_pane_t1

0xa840,	// (0x000a236a) blid2_speed_pane_t2

0x0001,

0xf9d9,	// (0x000a7503) blid2_speed_pane_t

0xc43f,	// (0x000a3f69) blid2_navig_ring_pane_g1

0x65e6,	// (0x0009e110) blid2_navig_ring_pane_g2

0x65ee,	// (0x0009e118) blid2_navig_ring_pane_g3

0x65f6,	// (0x0009e120) blid2_navig_ring_pane_g4

0x65fe,	// (0x0009e128) blid2_navig_ring_pane_g5

0x0004,

0xf9de,	// (0x000a7508) blid2_navig_ring_pane_g

0xaa49,	// (0x000a2573) bg_popup_window_pane_cp011

0xa84e,	// (0x000a2378) popup_blid2_search_window_g1

0xa856,	// (0x000a2380) popup_blid2_search_window_t1

0xa864,	// (0x000a238e) popup_blid2_search_window_t2

0x0001,

0xf9e9,	// (0x000a7513) popup_blid2_search_window_t

0xc7f5,	// (0x000a431f) main_browser_pane_g1

0xc49d,	// (0x000a3fc7) main_browser_pane_ParamLimits

0x9dd4,	// (0x000a18fe) bg_button_pane_cp011_ParamLimits

0x51e8,	// (0x0009cd12) cell_vitu2_function_pane_g1_ParamLimits

0xd227,	// (0x000a4d51) bg_popup_sub_pane_cp22_ParamLimits

0x5d58,	// (0x0009d882) input_focus_pane_cp08_ParamLimits

0x5d73,	// (0x0009d89d) popup_vitu2_query_button_pane_ParamLimits

0x5d73,	// (0x0009d89d) popup_vitu2_query_button_pane

0x5d82,	// (0x0009d8ac) popup_vitu2_query_input_button_pane

0x5d8a,	// (0x0009d8b4) popup_vitu2_query_window_g1_ParamLimits

0x5d96,	// (0x0009d8c0) popup_vitu2_query_window_g2_ParamLimits

0xf8ea,	// (0x000a7414) popup_vitu2_query_window_g_ParamLimits

0xaa49,	// (0x000a2573) bg_button_pane_cp026

0x6606,	// (0x0009e130) popup_vitu2_query_input_button_pane_g1

0xaa49,	// (0x000a2573) bg_button_pane_cp025

0xa872,	// (0x000a239c) popup_vitu2_query_button_pane_t1

0x3955,	// (0x0009b47f) main_mp3_pane_t6

0x3963,	// (0x0009b48d) popup_slider_window_cp01

0xa3ee,	// (0x000a1f18) cam4_battery_pane

0xa441,	// (0x000a1f6b) cam4_battery_pane_cp02

0xa6b3,	// (0x000a21dd) cam4_battery_pane_cp01

0xa6b3,	// (0x000a21dd) cam4_battery_pane_cp03

0xa077,	// (0x000a1ba1) cam4_battery_pane_g1

0xc43f,	// (0x000a3f69) cam4_battery_pane_g2

0x0001,

0xf9ee,	// (0x000a7518) cam4_battery_pane_g

0xe785,	// (0x000a62af) popup_blid_sat_info2_window_t11

0xcf33,	// (0x000a4a5d) aid_size_touch_mv_arrow_left_ParamLimits

0xcf5e,	// (0x000a4a88) aid_size_touch_mv_arrow_right_ParamLimits

0xcfbc,	// (0x000a4ae6) navi_pane_g1_ParamLimits

0xcfc8,	// (0x000a4af2) navi_pane_g2_ParamLimits

0xcff6,	// (0x000a4b20) navi_pane_g3_ParamLimits

0xf32f,	// (0x000a6e59) navi_pane_g_ParamLimits

0x2773,	// (0x0009a29d) navi_pane_mv_t1_ParamLimits

0x44d0,	// (0x0009bffa) grid_imed_effect_pane_ParamLimits

0x16a6,	// (0x000991d0) aid_placing_vt_slider_lsc

0xc744,	// (0x000a426e) aid_placing_vt_slider_prt

0xbf15,	// (0x000a3a3f) bg_tb_trans_pane_cp01_ParamLimits

0xea45,	// (0x000a656f) popup_image_details_window_g1_ParamLimits

0xea58,	// (0x000a6582) popup_image_details_window_g2_ParamLimits

0xea6d,	// (0x000a6597) popup_image_details_window_g3_ParamLimits

0xea6d,	// (0x000a6597) popup_image_details_window_g3

0x007c,	// (0x00097ba6) popup_image_details_window_g_ParamLimits

0xea81,	// (0x000a65ab) popup_image_details_window_t1_ParamLimits

0xea93,	// (0x000a65bd) popup_image_details_window_t2_ParamLimits

0xeaac,	// (0x000a65d6) popup_image_details_window_t3_ParamLimits

0xeac0,	// (0x000a65ea) popup_image_details_window_t4_ParamLimits

0xeadb,	// (0x000a6605) popup_image_details_window_t5_ParamLimits

0x0083,	// (0x00097bad) popup_image_details_window_t_ParamLimits

0x6240,	// (0x0009dd6a) cl_header_name_pane_ParamLimits

0x6240,	// (0x0009dd6a) cl_header_name_pane

0x660e,	// (0x0009e138) cl_header_name_pane_t1_ParamLimits

0x660e,	// (0x0009e138) cl_header_name_pane_t1

0x662f,	// (0x0009e159) cl_header_name_pane_t2_ParamLimits

0x662f,	// (0x0009e159) cl_header_name_pane_t2

0x6671,	// (0x0009e19b) cl_header_name_pane_t3_ParamLimits

0x6671,	// (0x0009e19b) cl_header_name_pane_t3

0x0002,

0xf9f3,	// (0x000a751d) cl_header_name_pane_t_ParamLimits

0xf9f3,	// (0x000a751d) cl_header_name_pane_t

0xd085,	// (0x000a4baf) navi_pane_mv_g2_ParamLimits

0x50e9,	// (0x0009cc13) field_vitu2_entry_pane_g1_ParamLimits

0x50f5,	// (0x0009cc1f) field_vitu2_entry_pane_g2_ParamLimits

0xd205,	// (0x000a4d2f) field_vitu2_entry_pane_g3_ParamLimits

0xd205,	// (0x000a4d2f) field_vitu2_entry_pane_g3

0xf7f3,	// (0x000a731d) field_vitu2_entry_pane_g_ParamLimits

0x5164,	// (0x0009cc8e) cell_vitu2_itu_pane_g1_ParamLimits

0x517c,	// (0x0009cca6) cell_vitu2_itu_pane_g2_ParamLimits

0x517c,	// (0x0009cca6) cell_vitu2_itu_pane_g2

0x0001,

0xf7ff,	// (0x000a7329) cell_vitu2_itu_pane_g_ParamLimits

0xf7ff,	// (0x000a7329) cell_vitu2_itu_pane_g

0x9dd4,	// (0x000a18fe) bg_vkb2_func_pane_cp05_ParamLimits

0x9dd4,	// (0x000a18fe) bg_vkb2_func_pane_cp05

0x9dd4,	// (0x000a18fe) bg_vkb2_func_pane_cp03

0x9dd4,	// (0x000a18fe) bg_vkb2_func_pane_cp04

0x9dd4,	// (0x000a18fe) bg_vkb2_func_pane_cp10_ParamLimits

0x9dd4,	// (0x000a18fe) bg_vkb2_func_pane_cp10

0x61e4,	// (0x0009dd0e) bg_vkb2_func_pane_cp08

0x61bd,	// (0x0009dce7) bg_vkb2_func_pane_cp06

0x61c9,	// (0x0009dcf3) bg_vkb2_func_pane_cp07

0xa762,	// (0x000a228c) bg_vkb2_func_pane_cp11_ParamLimits

0xa762,	// (0x000a228c) bg_vkb2_func_pane_cp11

0xa777,	// (0x000a22a1) bg_vkb2_func_pane_cp12_ParamLimits

0xa777,	// (0x000a22a1) bg_vkb2_func_pane_cp12

0xaa49,	// (0x000a2573) bg_vkb2_func_pane_cp09

0x5205,	// (0x0009cd2f) bg_vkb2_func_pane_g1

0xc906,	// (0x000a4430) bg_vkb2_func_pane_g2

0x520d,	// (0x0009cd37) bg_vkb2_func_pane_g3

0x5215,	// (0x0009cd3f) bg_vkb2_func_pane_g4

0x5bab,	// (0x0009d6d5) bg_vkb2_func_pane_g5

0x522d,	// (0x0009cd57) bg_vkb2_func_pane_g6

0x5235,	// (0x0009cd5f) bg_vkb2_func_pane_g7

0x5225,	// (0x0009cd4f) bg_vkb2_func_pane_g8

0xc8e6,	// (0x000a4410) bg_vkb2_func_pane_g9

0x0008,

0xf9fa,	// (0x000a7524) bg_vkb2_func_pane_g

0x6532,	// (0x0009e05c) blid2_tripm_pane_g6_ParamLimits

0x6532,	// (0x0009e05c) blid2_tripm_pane_g6

0x47d2,	// (0x0009c2fc) mp4_progress_pane_g1

0x65ab,	// (0x0009e0d5) blid2_tripm_values_pane_ParamLimits

0x65ab,	// (0x0009e0d5) blid2_tripm_values_pane

0x66a2,	// (0x0009e1cc) blid2_tripm_values_pane_t1

0x66b0,	// (0x0009e1da) blid2_tripm_values_pane_t2

0x66be,	// (0x0009e1e8) blid2_tripm_values_pane_t3

0x66cc,	// (0x0009e1f6) blid2_tripm_values_pane_t4

0x66da,	// (0x0009e204) blid2_tripm_values_pane_t5

0x66e8,	// (0x0009e212) blid2_tripm_values_pane_t6

0x66f6,	// (0x0009e220) blid2_tripm_values_pane_t7

0x6704,	// (0x0009e22e) blid2_tripm_values_pane_t8

0x6712,	// (0x0009e23c) blid2_tripm_values_pane_t9

0x0008,

0xfa0d,	// (0x000a7537) blid2_tripm_values_pane_t

0x16e8,	// (0x00099212) call_video_pane_t1_ParamLimits

0x1706,	// (0x00099230) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x000a6d07) call_video_pane_t_ParamLimits

0x2a3a,	// (0x0009a564) msg_header_pane_g1_ParamLimits

0xd299,	// (0x000a4dc3) msg_header_pane_g2_ParamLimits

0xd299,	// (0x000a4dc3) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x000a6ef7) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x000a6ef7) msg_header_pane_g

0xc49d,	// (0x000a3fc7) main_clock2_pane_ParamLimits

0x41d1,	// (0x0009bcfb) grid_clock2_toolbar_pane_ParamLimits

0x41d1,	// (0x0009bcfb) grid_clock2_toolbar_pane

0x41d1,	// (0x0009bcfb) listscroll_clock2_pane_ParamLimits

0x41d1,	// (0x0009bcfb) listscroll_clock2_pane

0x42b5,	// (0x0009bddf) main_clock2_pane_t3_ParamLimits

0x42b5,	// (0x0009bddf) main_clock2_pane_t3

0x42d9,	// (0x0009be03) main_clock2_pane_t4_ParamLimits

0x42d9,	// (0x0009be03) main_clock2_pane_t4

0xa880,	// (0x000a23aa) cell_clock2_toolbar_pane

0xa888,	// (0x000a23b2) cell_clock2_toolbar_pane_cp01

0xa888,	// (0x000a23b2) cell_clock2_toolbar_pane_cp02

0xa890,	// (0x000a23ba) cell_clock2_toolbar_pane_cp03

0xa898,	// (0x000a23c2) list_clock2_pane

0xceb8,	// (0x000a49e2) scroll_pane_cp10

0xa8a0,	// (0x000a23ca) list_single_clock2_pane_ParamLimits

0xa8a0,	// (0x000a23ca) list_single_clock2_pane

0xc6ed,	// (0x000a4217) list_highlight_pane_cp08

0xa8ad,	// (0x000a23d7) list_single_clock2_pane_t1

0xa8bb,	// (0x000a23e5) list_single_clock2_pane_t2

0x0001,

0xfa20,	// (0x000a754a) list_single_clock2_pane_t

0xaa49,	// (0x000a2573) bg_button_pane_cp10

0xa8c9,	// (0x000a23f3) cell_clock2_toolbar_pane_g1

0x2a48,	// (0x0009a572) aid_main_viewer_pane_g1_ParamLimits

0x2a48,	// (0x0009a572) aid_main_viewer_pane_g1

0x2a56,	// (0x0009a580) aid_main_viewer_pane_g2_ParamLimits

0x2a56,	// (0x0009a580) aid_main_viewer_pane_g2

0x2a64,	// (0x0009a58e) aid_main_viewer_pane_g3_ParamLimits

0x2a64,	// (0x0009a58e) aid_main_viewer_pane_g3

0x2a73,	// (0x0009a59d) aid_main_viewer_pane_g4_ParamLimits

0x2a73,	// (0x0009a59d) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x000a6f08) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x000a6f08) aid_main_viewer_pane_g

0x3318,	// (0x0009ae42) main_calc_pane_ParamLimits

0x333e,	// (0x0009ae68) main_dialer2_pane_ParamLimits

0x9de2,	// (0x000a190c) main_cam6_pane

0x9de2,	// (0x000a190c) main_vid6_pane

0x41dd,	// (0x0009bd07) listscroll_gen_pane_cp06_ParamLimits

0x41dd,	// (0x0009bd07) listscroll_gen_pane_cp06

0x42fc,	// (0x0009be26) main_clock2_pane_t5_ParamLimits

0x42fc,	// (0x0009be26) main_clock2_pane_t5

0x435a,	// (0x0009be84) aid_call2_pane_cp10_ParamLimits

0x436c,	// (0x0009be96) aid_call_pane_cp10_ParamLimits

0xcf27,	// (0x000a4a51) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf27,	// (0x000a4a51) popup_clock_analogue_window_cp10_g2_ParamLimits

0x437e,	// (0x0009bea8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x437e,	// (0x0009bea8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf27,	// (0x000a4a51) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6cd,	// (0x000a71f7) popup_clock_analogue_window_cp10_g_ParamLimits

0x4394,	// (0x0009bebe) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4899,	// (0x0009c3c3) cell_dialer2_keypad_pane_g2_ParamLimits

0x4899,	// (0x0009c3c3) cell_dialer2_keypad_pane_g2

0x0001,

0xf792,	// (0x000a72bc) cell_dialer2_keypad_pane_g_ParamLimits

0xf792,	// (0x000a72bc) cell_dialer2_keypad_pane_g

0xc449,	// (0x000a3f73) cell_dialer2_keypad_pane_t1

0x5635,	// (0x0009d15f) main_cset_text2_pane_ParamLimits

0x5635,	// (0x0009d15f) main_cset_text2_pane

0xa656,	// (0x000a2180) area_vitu2_query_pane_g1_ParamLimits

0x60c2,	// (0x0009dbec) area_vitu2_query_pane_g2_ParamLimits

0xf93d,	// (0x000a7467) area_vitu2_query_pane_g_ParamLimits

0x6199,	// (0x0009dcc3) area_vitu2_query_pane_t7_ParamLimits

0x6199,	// (0x0009dcc3) area_vitu2_query_pane_t7

0x61bd,	// (0x0009dce7) bg_button_pane_cp018_ParamLimits

0x61c9,	// (0x0009dcf3) bg_button_pane_cp021_ParamLimits

0x61d5,	// (0x0009dcff) bg_button_pane_cp022_ParamLimits

0x61e4,	// (0x0009dd0e) bg_vkb2_func_pane_cp08_ParamLimits

0x61bd,	// (0x0009dce7) bg_vkb2_func_pane_cp06_ParamLimits

0x61c9,	// (0x0009dcf3) bg_vkb2_func_pane_cp07_ParamLimits

0x61f4,	// (0x0009dd1e) input_focus_pane_cp09_ParamLimits

0x6720,	// (0x0009e24a) cam6_autofocus_pane_ParamLimits

0x6720,	// (0x0009e24a) cam6_autofocus_pane

0x672c,	// (0x0009e256) cam6_image_uncrop_pane_ParamLimits

0x672c,	// (0x0009e256) cam6_image_uncrop_pane

0x673c,	// (0x0009e266) cam6_indi_pane_ParamLimits

0x673c,	// (0x0009e266) cam6_indi_pane

0x6752,	// (0x0009e27c) cam6_mode_pane_ParamLimits

0x6752,	// (0x0009e27c) cam6_mode_pane

0x6764,	// (0x0009e28e) cam6_timer_pane_ParamLimits

0x6764,	// (0x0009e28e) cam6_timer_pane

0x6770,	// (0x0009e29a) cam6_zoom_pane_ParamLimits

0x6770,	// (0x0009e29a) cam6_zoom_pane

0x677d,	// (0x0009e2a7) cam6_mode_pane_g1_ParamLimits

0x677d,	// (0x0009e2a7) cam6_mode_pane_g1

0x678d,	// (0x0009e2b7) cam6_mode_pane_g2_ParamLimits

0x678d,	// (0x0009e2b7) cam6_mode_pane_g2

0x679d,	// (0x0009e2c7) cam6_mode_pane_g3_ParamLimits

0x679d,	// (0x0009e2c7) cam6_mode_pane_g3

0x67ad,	// (0x0009e2d7) cam6_mode_pane_g4_ParamLimits

0x67ad,	// (0x0009e2d7) cam6_mode_pane_g4

0x0003,

0xfa25,	// (0x000a754f) cam6_mode_pane_g_ParamLimits

0xfa25,	// (0x000a754f) cam6_mode_pane_g

0xe8e0,	// (0x000a640a) bg_tb_trans_pane_cp08_ParamLimits

0xe8e0,	// (0x000a640a) bg_tb_trans_pane_cp08

0xa8df,	// (0x000a2409) cam6_battery_pane_ParamLimits

0xa8df,	// (0x000a2409) cam6_battery_pane

0xa8f5,	// (0x000a241f) cam6_indi_pane_g1_ParamLimits

0xa8f5,	// (0x000a241f) cam6_indi_pane_g1

0xa907,	// (0x000a2431) cam6_indi_pane_g2_ParamLimits

0xa907,	// (0x000a2431) cam6_indi_pane_g2

0xa919,	// (0x000a2443) cam6_indi_pane_g3_ParamLimits

0xa919,	// (0x000a2443) cam6_indi_pane_g3

0x0002,

0xfa2e,	// (0x000a7558) cam6_indi_pane_g_ParamLimits

0xfa2e,	// (0x000a7558) cam6_indi_pane_g

0xa92b,	// (0x000a2455) cam6_indi_pane_t1_ParamLimits

0xa92b,	// (0x000a2455) cam6_indi_pane_t1

0x4eba,	// (0x0009c9e4) cam6_autofocus_pane_g1

0x4eb2,	// (0x0009c9dc) cam6_autofocus_pane_g2

0x4eca,	// (0x0009c9f4) cam6_autofocus_pane_g3

0x4ec2,	// (0x0009c9ec) cam6_autofocus_pane_g4

0x0003,

0xfa35,	// (0x000a755f) cam6_autofocus_pane_g

0xa951,	// (0x000a247b) cam6_timer_pane_g1

0xa959,	// (0x000a2483) cam6_timer_pane_t1

0xa967,	// (0x000a2491) cam6_zoom_cont_pane

0xa96f,	// (0x000a2499) cam6_zoom_pane_g1

0xa978,	// (0x000a24a2) cam6_zoom_pane_g2

0x67bd,	// (0x0009e2e7) cam6_zoom_pane_g3

0x0002,

0xfa3e,	// (0x000a7568) cam6_zoom_pane_g

0xc43f,	// (0x000a3f69) cam6_battery_pane_g1

0xc43f,	// (0x000a3f69) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x000a6bd9) cam6_battery_pane_g

0xa96f,	// (0x000a2499) cam6_zoom_cont_pane_g1

0xa978,	// (0x000a24a2) cam6_zoom_cont_pane_g2

0xa981,	// (0x000a24ab) cam6_zoom_cont_pane_g3

0x0002,

0xfa45,	// (0x000a756f) cam6_zoom_cont_pane_g

0x67db,	// (0x0009e305) cam6_mode_pane_cp_ParamLimits

0x67db,	// (0x0009e305) cam6_mode_pane_cp

0x67ed,	// (0x0009e317) cam6_zoom_pane_cp_ParamLimits

0x67ed,	// (0x0009e317) cam6_zoom_pane_cp

0x67f9,	// (0x0009e323) vid6_image_uncrop_cif_pane_ParamLimits

0x67f9,	// (0x0009e323) vid6_image_uncrop_cif_pane

0x6809,	// (0x0009e333) vid6_image_uncrop_nhd_pane_ParamLimits

0x6809,	// (0x0009e333) vid6_image_uncrop_nhd_pane

0x6818,	// (0x0009e342) vid6_image_uncrop_vga_pane_ParamLimits

0x6818,	// (0x0009e342) vid6_image_uncrop_vga_pane

0x6827,	// (0x0009e351) vid6_image_uncrop_wvga_pane_ParamLimits

0x6827,	// (0x0009e351) vid6_image_uncrop_wvga_pane

0x6836,	// (0x0009e360) vid6_indi_pane_ParamLimits

0x6836,	// (0x0009e360) vid6_indi_pane

0xe8e0,	// (0x000a640a) bg_tb_trans_pane_cp09_ParamLimits

0xe8e0,	// (0x000a640a) bg_tb_trans_pane_cp09

0xa999,	// (0x000a24c3) cam6_battery_pane_cp_ParamLimits

0xa999,	// (0x000a24c3) cam6_battery_pane_cp

0xa9a5,	// (0x000a24cf) vid6_indi_pane_g1_ParamLimits

0xa9a5,	// (0x000a24cf) vid6_indi_pane_g1

0xa9b7,	// (0x000a24e1) vid6_indi_pane_g2_ParamLimits

0xa9b7,	// (0x000a24e1) vid6_indi_pane_g2

0xa9c9,	// (0x000a24f3) vid6_indi_pane_g3_ParamLimits

0xa9c9,	// (0x000a24f3) vid6_indi_pane_g3

0xa9de,	// (0x000a2508) vid6_indi_pane_g4_ParamLimits

0xa9de,	// (0x000a2508) vid6_indi_pane_g4

0xa9f3,	// (0x000a251d) vid6_indi_pane_g5_ParamLimits

0xa9f3,	// (0x000a251d) vid6_indi_pane_g5

0x0004,

0xfa4c,	// (0x000a7576) vid6_indi_pane_g_ParamLimits

0xfa4c,	// (0x000a7576) vid6_indi_pane_g

0xaa0d,	// (0x000a2537) vid6_indi_pane_t1_ParamLimits

0xaa0d,	// (0x000a2537) vid6_indi_pane_t1

0xaaa5,	// (0x000a25cf) vid6_indi_pane_t2_ParamLimits

0xaaa5,	// (0x000a25cf) vid6_indi_pane_t2

0xaacd,	// (0x000a25f7) vid6_indi_pane_t3_ParamLimits

0xaacd,	// (0x000a25f7) vid6_indi_pane_t3

0xaaf5,	// (0x000a261f) vid6_indi_pane_t4_ParamLimits

0xaaf5,	// (0x000a261f) vid6_indi_pane_t4

0x0003,

0xfa57,	// (0x000a7581) vid6_indi_pane_t_ParamLimits

0xfa57,	// (0x000a7581) vid6_indi_pane_t

0xab19,	// (0x000a2643) wait_bar_pane_cp08

0x684e,	// (0x0009e378) main_cset_text2_pane_t1_ParamLimits

0x684e,	// (0x0009e378) main_cset_text2_pane_t1

0x67c6,	// (0x0009e2f0) listscroll_gen_pane_cp06_t1_ParamLimits

0x67c6,	// (0x0009e2f0) listscroll_gen_pane_cp06_t1

0x9de2,	// (0x000a190c) main_cam6_set_pane

0xaa73,	// (0x000a259d) bg_tb_trans_pane_cp06_ParamLimits

0xa3f6,	// (0x000a1f20) cam4_indicators_pane_g1_ParamLimits

0xa407,	// (0x000a1f31) cam4_indicators_pane_g2_ParamLimits

0xf7cf,	// (0x000a72f9) cam4_indicators_pane_g_ParamLimits

0xa41f,	// (0x000a1f49) cam4_indicators_pane_t1_ParamLimits

0x9dd4,	// (0x000a18fe) bg_tb_trans_pane_cp07_ParamLimits

0xa449,	// (0x000a1f73) vid4_indicators_pane_g1_ParamLimits

0xa45d,	// (0x000a1f87) vid4_indicators_pane_g2_ParamLimits

0xa471,	// (0x000a1f9b) vid4_indicators_pane_g3_ParamLimits

0xa482,	// (0x000a1fac) vid4_indicators_pane_g4_ParamLimits

0xf7e1,	// (0x000a730b) vid4_indicators_pane_g_ParamLimits

0xa49e,	// (0x000a1fc8) vid4_indicators_pane_t1_ParamLimits

0xa6bb,	// (0x000a21e5) vid4_progress_pane_g1_ParamLimits

0xa6cb,	// (0x000a21f5) vid4_progress_pane_g2_ParamLimits

0x6333,	// (0x0009de5d) vid4_progress_pane_g3_ParamLimits

0xa6db,	// (0x000a2205) vid4_progress_pane_g4_ParamLimits

0xf988,	// (0x000a74b2) vid4_progress_pane_g_ParamLimits

0x6345,	// (0x0009de6f) vid4_progress_pane_t1_ParamLimits

0xa6f3,	// (0x000a221d) vid4_progress_pane_t2_ParamLimits

0xa708,	// (0x000a2232) vid4_progress_pane_t3_ParamLimits

0xf993,	// (0x000a74bd) vid4_progress_pane_t_ParamLimits

0x635b,	// (0x0009de85) wait_bar_pane_cp07_ParamLimits

0x686c,	// (0x0009e396) main_cam6_set_pane_g2_ParamLimits

0x686c,	// (0x0009e396) main_cam6_set_pane_g2

0x6890,	// (0x0009e3ba) main_cset6_listscroll_pane_ParamLimits

0x6890,	// (0x0009e3ba) main_cset6_listscroll_pane

0x68ac,	// (0x0009e3d6) main_cset6_slider_pane_ParamLimits

0x68ac,	// (0x0009e3d6) main_cset6_slider_pane

0x68c2,	// (0x0009e3ec) main_cset6_text2_pane_ParamLimits

0x68c2,	// (0x0009e3ec) main_cset6_text2_pane

0xab28,	// (0x000a2652) main_cset6_text_pane

0xab30,	// (0x000a265a) main_cset_list_pane_copy1_ParamLimits

0xab30,	// (0x000a265a) main_cset_list_pane_copy1

0xab40,	// (0x000a266a) scroll_pane_cp028_copy1

0x68d0,	// (0x0009e3fa) cset_list_set_pane_copy1

0x68e2,	// (0x0009e40c) aid_position_infowindow_above_copy1

0x68ea,	// (0x0009e414) aid_position_infowindow_below_copy1

0x68f2,	// (0x0009e41c) cset_list_set_pane_g1_copy1

0x68fa,	// (0x0009e424) cset_list_set_pane_g3_copy1_ParamLimits

0x68fa,	// (0x0009e424) cset_list_set_pane_g3_copy1

0x6909,	// (0x0009e433) cset_list_set_pane_t1_copy1_ParamLimits

0x6909,	// (0x0009e433) cset_list_set_pane_t1_copy1

0xbf15,	// (0x000a3a3f) list_highlight_pane_cp021_copy1_ParamLimits

0xbf15,	// (0x000a3a3f) list_highlight_pane_cp021_copy1

0xab49,	// (0x000a2673) cset6_slider_pane_ParamLimits

0xab49,	// (0x000a2673) cset6_slider_pane

0xab75,	// (0x000a269f) main_cset6_slider_pane_g1_ParamLimits

0xab75,	// (0x000a269f) main_cset6_slider_pane_g1

0x691e,	// (0x0009e448) main_cset6_slider_pane_g2_ParamLimits

0x691e,	// (0x0009e448) main_cset6_slider_pane_g2

0xab9d,	// (0x000a26c7) main_cset6_slider_pane_g3_ParamLimits

0xab9d,	// (0x000a26c7) main_cset6_slider_pane_g3

0x6946,	// (0x0009e470) main_cset6_slider_pane_g4_ParamLimits

0x6946,	// (0x0009e470) main_cset6_slider_pane_g4

0xaba9,	// (0x000a26d3) main_cset6_slider_pane_g5_ParamLimits

0xaba9,	// (0x000a26d3) main_cset6_slider_pane_g5

0x5708,	// (0x0009d232) main_cset6_slider_pane_g7_ParamLimits

0x5708,	// (0x0009d232) main_cset6_slider_pane_g7

0x5714,	// (0x0009d23e) main_cset6_slider_pane_g8_ParamLimits

0x5714,	// (0x0009d23e) main_cset6_slider_pane_g8

0x5720,	// (0x0009d24a) main_cset6_slider_pane_g9_ParamLimits

0x5720,	// (0x0009d24a) main_cset6_slider_pane_g9

0x572c,	// (0x0009d256) main_cset6_slider_pane_g10_ParamLimits

0x572c,	// (0x0009d256) main_cset6_slider_pane_g10

0x5738,	// (0x0009d262) main_cset6_slider_pane_g11_ParamLimits

0x5738,	// (0x0009d262) main_cset6_slider_pane_g11

0x5744,	// (0x0009d26e) main_cset6_slider_pane_g12_ParamLimits

0x5744,	// (0x0009d26e) main_cset6_slider_pane_g12

0x5750,	// (0x0009d27a) main_cset6_slider_pane_g13_ParamLimits

0x5750,	// (0x0009d27a) main_cset6_slider_pane_g13

0x575c,	// (0x0009d286) main_cset6_slider_pane_g14_ParamLimits

0x575c,	// (0x0009d286) main_cset6_slider_pane_g14

0x6952,	// (0x0009e47c) main_cset6_slider_pane_g15_ParamLimits

0x6952,	// (0x0009e47c) main_cset6_slider_pane_g15

0xaa81,	// (0x000a25ab) main_cset6_slider_pane_g16_ParamLimits

0xaa81,	// (0x000a25ab) main_cset6_slider_pane_g16

0xaa8d,	// (0x000a25b7) main_cset6_slider_pane_g17_ParamLimits

0xaa8d,	// (0x000a25b7) main_cset6_slider_pane_g17

0x0011,

0xfa60,	// (0x000a758a) main_cset6_slider_pane_g_ParamLimits

0xfa60,	// (0x000a758a) main_cset6_slider_pane_g

0xabb5,	// (0x000a26df) main_cset6_slider_pane_t1_ParamLimits

0xabb5,	// (0x000a26df) main_cset6_slider_pane_t1

0x6982,	// (0x0009e4ac) main_cset6_slider_pane_t2_ParamLimits

0x6982,	// (0x0009e4ac) main_cset6_slider_pane_t2

0x69ad,	// (0x0009e4d7) main_cset6_slider_pane_t3_ParamLimits

0x69ad,	// (0x0009e4d7) main_cset6_slider_pane_t3

0x69d8,	// (0x0009e502) main_cset6_slider_pane_t4_ParamLimits

0x69d8,	// (0x0009e502) main_cset6_slider_pane_t4

0x6a03,	// (0x0009e52d) main_cset6_slider_pane_t5_ParamLimits

0x6a03,	// (0x0009e52d) main_cset6_slider_pane_t5

0xabf6,	// (0x000a2720) main_cset6_slider_pane_t7_ParamLimits

0xabf6,	// (0x000a2720) main_cset6_slider_pane_t7

0x6a2e,	// (0x0009e558) main_cset6_slider_pane_t8_ParamLimits

0x6a2e,	// (0x0009e558) main_cset6_slider_pane_t8

0x6a52,	// (0x0009e57c) main_cset6_slider_pane_t9_ParamLimits

0x6a52,	// (0x0009e57c) main_cset6_slider_pane_t9

0x6a76,	// (0x0009e5a0) main_cset6_slider_pane_t10_ParamLimits

0x6a76,	// (0x0009e5a0) main_cset6_slider_pane_t10

0x6a9a,	// (0x0009e5c4) main_cset6_slider_pane_t11_ParamLimits

0x6a9a,	// (0x0009e5c4) main_cset6_slider_pane_t11

0xac2c,	// (0x000a2756) main_cset6_slider_pane_t14_ParamLimits

0xac2c,	// (0x000a2756) main_cset6_slider_pane_t14

0xac65,	// (0x000a278f) main_cset6_slider_pane_t15_ParamLimits

0xac65,	// (0x000a278f) main_cset6_slider_pane_t15

0x000b,

0xfa85,	// (0x000a75af) main_cset6_slider_pane_t_ParamLimits

0xfa85,	// (0x000a75af) main_cset6_slider_pane_t

0x6abe,	// (0x0009e5e8) cset_slider_pane_g1_copy1

0x6ac7,	// (0x0009e5f1) cset_slider_pane_g2_copy1

0x6ad0,	// (0x0009e5fa) cset_slider_pane_g3_copy1

0xaa49,	// (0x000a2573) bg_popup_sub_pane_cp011_copy1

0xaca7,	// (0x000a27d1) main_cset_text_pane_g1_copy1

0x5eab,	// (0x0009d9d5) main_cset_text_pane_t1_copy1

0x5eb9,	// (0x0009d9e3) main_cset_text_pane_t2_copy1

0x5ec7,	// (0x0009d9f1) main_cset_text_pane_t3_copy1

0x5ed5,	// (0x0009d9ff) main_cset_text_pane_t4_copy1

0x5ee3,	// (0x0009da0d) main_cset_text_pane_t5_copy1

0xacaf,	// (0x000a27d9) main_cset_text_pane_t6_copy1

0xacbd,	// (0x000a27e7) main_cset_text_pane_t7_copy1

0x684e,	// (0x0009e378) main_cset_text2_pane_t1_copy1

0x9dd4,	// (0x000a18fe) main_ncimui_pane

0x3582,	// (0x0009b0ac) popup_query_ncimui_window_ParamLimits

0x3582,	// (0x0009b0ac) popup_query_ncimui_window

0xebb8,	// (0x000a66e2) field_cale_ev2_pane_g4_ParamLimits

0xebb8,	// (0x000a66e2) field_cale_ev2_pane_g4

0x477c,	// (0x0009c2a6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x477c,	// (0x0009c2a6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf769,	// (0x000a7293) cell_video_dialer_keypad_pane_g_ParamLimits

0xf769,	// (0x000a7293) cell_video_dialer_keypad_pane_g

0x4794,	// (0x0009c2be) cell_video_dialer_keypad_pane_t1

0xaa49,	// (0x000a2573) bg_popup_window_pane_cp012

0xe3ec,	// (0x000a5f16) heading_pane_cp06

0xace9,	// (0x000a2813) ncim_query_content_pane

0xaa49,	// (0x000a2573) bg_popup_heading_pane_cp01

0xacf1,	// (0x000a281b) ncim_heading_pane_t1

0xacff,	// (0x000a2829) ncim_indicator_popup_pane

0xad11,	// (0x000a283b) ncim_query_button_pane

0xad25,	// (0x000a284f) ncim_query_content_pane_t1

0xad37,	// (0x000a2861) ncim_query_content_pane_t2

0x0005,

0xfac9,	// (0x000a75f3) ncim_query_content_pane_t

0xad71,	// (0x000a289b) ncim_query_list_pane

0xad83,	// (0x000a28ad) ncim_query_popup_pane

0xacff,	// (0x000a2829) ncim_indicator_popup_pane_ParamLimits

0x6c1f,	// (0x0009e749) ncim_query_content_pane_g1_ParamLimits

0x6c1f,	// (0x0009e749) ncim_query_content_pane_g1

0xad25,	// (0x000a284f) ncim_query_content_pane_t1_ParamLimits

0xad37,	// (0x000a2861) ncim_query_content_pane_t2_ParamLimits

0x6c2b,	// (0x0009e755) ncim_query_content_pane_t3_ParamLimits

0x6c2b,	// (0x0009e755) ncim_query_content_pane_t3

0x6c53,	// (0x0009e77d) ncim_query_content_pane_t4_ParamLimits

0x6c53,	// (0x0009e77d) ncim_query_content_pane_t4

0x6c7b,	// (0x0009e7a5) ncim_query_content_pane_t5_ParamLimits

0x6c7b,	// (0x0009e7a5) ncim_query_content_pane_t5

0xad49,	// (0x000a2873) ncim_query_content_pane_t6_ParamLimits

0xad49,	// (0x000a2873) ncim_query_content_pane_t6

0xfac9,	// (0x000a75f3) ncim_query_content_pane_t_ParamLimits

0xad71,	// (0x000a289b) ncim_query_list_pane_ParamLimits

0xad83,	// (0x000a28ad) ncim_query_popup_pane_ParamLimits

0xad97,	// (0x000a28c1) wait_bar_pane_cp04

0xaa49,	// (0x000a2573) input_focus_pane_cp011

0xad9f,	// (0x000a28c9) ncim_query_popup_pane_t1

0xadad,	// (0x000a28d7) ncim_list_query_list_pane_ParamLimits

0xadad,	// (0x000a28d7) ncim_list_query_list_pane

0xaa49,	// (0x000a2573) bg_button_pane_cp027

0xadba,	// (0x000a28e4) ncim_query_button_pane_g1

0xaa49,	// (0x000a2573) list_highlight_pane_cp012

0xadc4,	// (0x000a28ee) ncim_list_query_list_pane_g1

0xadcc,	// (0x000a28f6) ncim_list_query_list_pane_t1

0xa413,	// (0x000a1f3d) cam4_indicators_pane_g3_ParamLimits

0xa413,	// (0x000a1f3d) cam4_indicators_pane_g3

0xa48e,	// (0x000a1fb8) vid4_indicators_pane_g5_ParamLimits

0xa48e,	// (0x000a1fb8) vid4_indicators_pane_g5

0xa6e7,	// (0x000a2211) vid4_progress_pane_g5_ParamLimits

0xa6e7,	// (0x000a2211) vid4_progress_pane_g5

0x6b0a,	// (0x0009e634) main_ncimui_pane_g1

0x6b73,	// (0x0009e69d) ncimui_group_query_pane_ParamLimits

0x6b73,	// (0x0009e69d) ncimui_group_query_pane

0x6bbb,	// (0x0009e6e5) ncimui_list_pane_ParamLimits

0x6bbb,	// (0x0009e6e5) ncimui_list_pane

0x6be2,	// (0x0009e70c) ncimui_text_pane_ParamLimits

0x6be2,	// (0x0009e70c) ncimui_text_pane

0x6ca3,	// (0x0009e7cd) ncimui_text_pane_t1_ParamLimits

0x6ca3,	// (0x0009e7cd) ncimui_text_pane_t1

0xadda,	// (0x000a2904) ncimui_list_single_graphic_pane_ParamLimits

0xadda,	// (0x000a2904) ncimui_list_single_graphic_pane

0x6cc1,	// (0x0009e7eb) ncimui_query_pane_ParamLimits

0x6cc1,	// (0x0009e7eb) ncimui_query_pane

0xaa49,	// (0x000a2573) list_highlight_pane_cp013

0xadea,	// (0x000a2914) ncim_list_query_list_pane_t1_copy1

0xadf8,	// (0x000a2922) ncim_list_single_graphic_pane_g1

0x6cd4,	// (0x0009e7fe) ncim_query_button_pane_cp01

0x6ce0,	// (0x0009e80a) ncim_query_entry_pane_ParamLimits

0x6ce0,	// (0x0009e80a) ncim_query_entry_pane

0x6cf3,	// (0x0009e81d) ncimui_query_pane_g1

0x6cff,	// (0x0009e829) ncimui_query_pane_t1_ParamLimits

0x6cff,	// (0x0009e829) ncimui_query_pane_t1

0xbf15,	// (0x000a3a3f) input_focus_pane_cp012

0xae00,	// (0x000a292a) ncim_query_entry_pane_t1

0xc49d,	// (0x000a3fc7) main_im_pane_ParamLimits

0x9dd4,	// (0x000a18fe) main_mobtv_pane_ParamLimits

0x9dd4,	// (0x000a18fe) main_mobtv_pane

0x696a,	// (0x0009e494) main_cset6_slider_pane_g18_ParamLimits

0x696a,	// (0x0009e494) main_cset6_slider_pane_g18

0x6976,	// (0x0009e4a0) main_cset6_slider_pane_g19_ParamLimits

0x6976,	// (0x0009e4a0) main_cset6_slider_pane_g19

0xc41d,	// (0x000a3f47) bg_main_mobtv_pane_ParamLimits

0xc41d,	// (0x000a3f47) bg_main_mobtv_pane

0x6d18,	// (0x0009e842) main_mobtv_info_pane

0x6d21,	// (0x0009e84b) main_mobtv_loading_pane_ParamLimits

0x6d21,	// (0x0009e84b) main_mobtv_loading_pane

0xae12,	// (0x000a293c) main_mobtv_pg_channel_list_pane

0xae1c,	// (0x000a2946) main_mobtv_pg_hdr_pane

0x6d2e,	// (0x0009e858) main_mobtv_programe_curr_pane_ParamLimits

0x6d2e,	// (0x0009e858) main_mobtv_programe_curr_pane

0x6d3b,	// (0x0009e865) main_mobtv_programe_next_pane_ParamLimits

0x6d3b,	// (0x0009e865) main_mobtv_programe_next_pane

0xae25,	// (0x000a294f) popup_mobtv_noti_window

0xc43f,	// (0x000a3f69) main_tv_pg_hdr_pane_g1

0xae2d,	// (0x000a2957) main_tv_pg_hdr_pane_g2

0xae35,	// (0x000a295f) main_tv_pg_hdr_pane_g3

0xae3d,	// (0x000a2967) main_tv_pg_hdr_pane_g4

0xae45,	// (0x000a296f) main_tv_pg_hdr_pane_g5

0xae4f,	// (0x000a2979) main_tv_pg_hdr_pane_g6

0xae59,	// (0x000a2983) main_tv_pg_hdr_pane_g7

0xae63,	// (0x000a298d) main_tv_pg_hdr_pane_g8

0xae6d,	// (0x000a2997) main_tv_pg_hdr_pane_g9

0xae77,	// (0x000a29a1) main_tv_pg_hdr_pane_g10

0xae81,	// (0x000a29ab) main_tv_pg_hdr_pane_g11

0x000a,

0xfad6,	// (0x000a7600) main_tv_pg_hdr_pane_g

0xae8b,	// (0x000a29b5) main_tv_pg_hdr_pane_t1

0xae99,	// (0x000a29c3) main_tv_pg_hdr_pane_t2

0xaea7,	// (0x000a29d1) main_tv_pg_hdr_pane_t3

0xaeb7,	// (0x000a29e1) main_tv_pg_hdr_pane_t4

0xaec7,	// (0x000a29f1) main_tv_pg_hdr_pane_t5

0x0004,

0x056e,	// (0x00098098) main_tv_pg_hdr_pane_t

0xaed7,	// (0x000a2a01) single_mobtv_pg_channel_pane_ParamLimits

0xaed7,	// (0x000a2a01) single_mobtv_pg_channel_pane

0xaee9,	// (0x000a2a13) single_mobtv_pg_channel_table_pane

0xca09,	// (0x000a4533) single_mobtv_pg_channel_thumb_pane

0xaef2,	// (0x000a2a1c) single_tv_pg_channel_pane_g1

0xaefb,	// (0x000a2a25) single_tv_pg_channel_pane_g2

0x0001,

0x0579,	// (0x000980a3) single_tv_pg_channel_pane_g

0xc401,	// (0x000a3f2b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc401,	// (0x000a3f2b) bg_single_mobtv_pg_channel_thumb_pane

0xaf04,	// (0x000a2a2e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xaf04,	// (0x000a2a2e) single_mobtv_pg_channel_thumb_pane_g1

0xaf12,	// (0x000a2a3c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xaf12,	// (0x000a2a3c) single_mobtv_pg_channel_thumb_pane_g2

0xaf1e,	// (0x000a2a48) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xaf1e,	// (0x000a2a48) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x057e,	// (0x000980a8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x057e,	// (0x000980a8) single_mobtv_pg_channel_thumb_pane_g

0xaf2a,	// (0x000a2a54) single_mobtv_pg_channel_thumb_pane_t1

0xaf38,	// (0x000a2a62) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0585,	// (0x000980af) single_mobtv_pg_channel_thumb_pane_t

0xc43f,	// (0x000a3f69) bg_single_mobtv_pg_channel_table_pane_g1

0xc43f,	// (0x000a3f69) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x000a6bd9) bg_single_mobtv_pg_channel_table_pane_g

0xaf46,	// (0x000a2a70) single_mobtv_pg_channel_table_pane_t1

0xaf54,	// (0x000a2a7e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x058a,	// (0x000980b4) single_mobtv_pg_channel_table_pane_t

0x6d50,	// (0x0009e87a) main_mobtv_info_pane_g1_ParamLimits

0x6d50,	// (0x0009e87a) main_mobtv_info_pane_g1

0x6d6e,	// (0x0009e898) main_mobtv_info_pane_t1_ParamLimits

0x6d6e,	// (0x0009e898) main_mobtv_info_pane_t1

0x6de6,	// (0x0009e910) main_mobtv_info_pane_t2_ParamLimits

0x6de6,	// (0x0009e910) main_mobtv_info_pane_t2

0x0002,

0xfaf2,	// (0x000a761c) main_mobtv_info_pane_t_ParamLimits

0xfaf2,	// (0x000a761c) main_mobtv_info_pane_t

0x6e75,	// (0x0009e99f) wait_bar_pane_cp05

0x6e87,	// (0x0009e9b1) main_mobtv_loading_pane_g1_ParamLimits

0x6e87,	// (0x0009e9b1) main_mobtv_loading_pane_g1

0x6e9a,	// (0x0009e9c4) main_mobtv_loading_pane_g2_ParamLimits

0x6e9a,	// (0x0009e9c4) main_mobtv_loading_pane_g2

0x6ea6,	// (0x0009e9d0) main_mobtv_loading_pane_g3_ParamLimits

0x6ea6,	// (0x0009e9d0) main_mobtv_loading_pane_g3

0x0002,

0xfaf9,	// (0x000a7623) main_mobtv_loading_pane_g_ParamLimits

0xfaf9,	// (0x000a7623) main_mobtv_loading_pane_g

0xaf62,	// (0x000a2a8c) main_mobtv_loading_pane_t1_ParamLimits

0xaf62,	// (0x000a2a8c) main_mobtv_loading_pane_t1

0xaf7a,	// (0x000a2aa4) main_mobtv_loading_pane_t2_ParamLimits

0xaf7a,	// (0x000a2aa4) main_mobtv_loading_pane_t2

0x0001,

0x05a2,	// (0x000980cc) main_mobtv_loading_pane_t_ParamLimits

0x05a2,	// (0x000980cc) main_mobtv_loading_pane_t

0x6eb9,	// (0x0009e9e3) wait_bar_pane_cp06_ParamLimits

0x6eb9,	// (0x0009e9e3) wait_bar_pane_cp06

0xaf9e,	// (0x000a2ac8) main_mobtv_programe_curr_pane_t1

0xafac,	// (0x000a2ad6) main_mobtv_programe_curr_pane_t2

0x0001,

0x05a7,	// (0x000980d1) main_mobtv_programe_curr_pane_t

0xafba,	// (0x000a2ae4) main_mobtv_programe_next_pane_t1

0xafc8,	// (0x000a2af2) main_mobtv_programe_next_pane_t2

0xafd6,	// (0x000a2b00) main_mobtv_programe_next_pane_t3

0x0002,

0x05ac,	// (0x000980d6) main_mobtv_programe_next_pane_t

0xaa49,	// (0x000a2573) bg_popup_mobtv_noti_window_pane

0xafe4,	// (0x000a2b0e) popup_mobtv_noti_window_g1

0xafec,	// (0x000a2b16) popup_mobtv_noti_window_t1

0xaffa,	// (0x000a2b24) popup_mobtv_noti_window_t2

0x0001,

0x05b3,	// (0x000980dd) popup_mobtv_noti_window_t

0xc43f,	// (0x000a3f69) bg_popup_mobtv_noti_window_pane_g1

0x9de2,	// (0x000a190c) sc_clock_pane

0x9de2,	// (0x000a190c) main_fs_bigclock_pane

0x6595,	// (0x0009e0bf) blid2_tripm_pane_t4_ParamLimits

0x6595,	// (0x0009e0bf) blid2_tripm_pane_t4

0xc401,	// (0x000a3f2b) sc_clock_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) sc_clock_pane_g1

0xc449,	// (0x000a3f73) sc_clock_pane_t1_ParamLimits

0xc449,	// (0x000a3f73) sc_clock_pane_t1

0xc449,	// (0x000a3f73) sc_clock_pane_t2_ParamLimits

0xc449,	// (0x000a3f73) sc_clock_pane_t2

0xc449,	// (0x000a3f73) sc_clock_pane_t3_ParamLimits

0xc449,	// (0x000a3f73) sc_clock_pane_t3

0x0004,

0xfb00,	// (0x000a762a) sc_clock_pane_t_ParamLimits

0xfb00,	// (0x000a762a) sc_clock_pane_t

0x7d4c,	// (0x0009f876) main_fs_bigclock_indicator_pane_ParamLimits

0x7d4c,	// (0x0009f876) main_fs_bigclock_indicator_pane

0x6f17,	// (0x0009ea41) main_fs_bigclock_pane_g1_ParamLimits

0x6f17,	// (0x0009ea41) main_fs_bigclock_pane_g1

0x7d58,	// (0x0009f882) main_fs_bigclock_pane_t1_ParamLimits

0x7d58,	// (0x0009f882) main_fs_bigclock_pane_t1

0x7d6a,	// (0x0009f894) main_fs_bigclock_pane_t2_ParamLimits

0x7d6a,	// (0x0009f894) main_fs_bigclock_pane_t2

0x7d7e,	// (0x0009f8a8) main_fs_bigclock_pane_t3_ParamLimits

0x7d7e,	// (0x0009f8a8) main_fs_bigclock_pane_t3

0x0002,

0xfc08,	// (0x000a7732) main_fs_bigclock_pane_t_ParamLimits

0xfc08,	// (0x000a7732) main_fs_bigclock_pane_t

0xb848,	// (0x000a3372) main_fs_bigclock_indicator_pane_g1

0xad19,	// (0x000a2843) ncim_query_content_pane_g2_ParamLimits

0xad19,	// (0x000a2843) ncim_query_content_pane_g2

0x0001,

0xfac4,	// (0x000a75ee) ncim_query_content_pane_g_ParamLimits

0xfac4,	// (0x000a75ee) ncim_query_content_pane_g

0xc449,	// (0x000a3f73) sc_clock_pane_t4_ParamLimits

0xc449,	// (0x000a3f73) sc_clock_pane_t4

0x9dd4,	// (0x000a18fe) main_radioblah_pane

0xa398,	// (0x000a1ec2) cell_call4_button_pane_t1_copy1_ParamLimits

0xa398,	// (0x000a1ec2) cell_call4_button_pane_t1_copy1

0x6b22,	// (0x0009e64c) main_ncimui_pane_t1_ParamLimits

0x6b22,	// (0x0009e64c) main_ncimui_pane_t1

0x6b3c,	// (0x0009e666) main_ncimui_pane_t2_ParamLimits

0x6b3c,	// (0x0009e666) main_ncimui_pane_t2

0x0002,

0xfabd,	// (0x000a75e7) main_ncimui_pane_t_ParamLimits

0xfabd,	// (0x000a75e7) main_ncimui_pane_t

0xd227,	// (0x000a4d51) main_radioblah_anim_pane_ParamLimits

0xd227,	// (0x000a4d51) main_radioblah_anim_pane

0xd227,	// (0x000a4d51) main_radioblah_info_pane_ParamLimits

0xd227,	// (0x000a4d51) main_radioblah_info_pane

0xd213,	// (0x000a4d3d) main_radioblah_pane_t1_ParamLimits

0xd213,	// (0x000a4d3d) main_radioblah_pane_t1

0xd213,	// (0x000a4d3d) main_radioblah_pane_t2_ParamLimits

0xd213,	// (0x000a4d3d) main_radioblah_pane_t2

0x0003,

0xfb0b,	// (0x000a7635) main_radioblah_pane_t_ParamLimits

0xfb0b,	// (0x000a7635) main_radioblah_pane_t

0xbf15,	// (0x000a3a3f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbf15,	// (0x000a3a3f) main_radioblah_rocker_ctrl_pane

0xe8ee,	// (0x000a6418) main_radioblah_info_pane_t1_ParamLimits

0xe8ee,	// (0x000a6418) main_radioblah_info_pane_t1

0xb170,	// (0x000a2c9a) main_radioblah_info_pane_t2_ParamLimits

0xb170,	// (0x000a2c9a) main_radioblah_info_pane_t2

0x0003,

0xfb14,	// (0x000a763e) main_radioblah_info_pane_t_ParamLimits

0xfb14,	// (0x000a763e) main_radioblah_info_pane_t

0xc43f,	// (0x000a3f69) main_radioblah_rocker_ctrl_pane_g1

0xc43f,	// (0x000a3f69) main_radioblah_rocker_ctrl_pane_g2

0xc43f,	// (0x000a3f69) main_radioblah_rocker_ctrl_pane_g3

0xc43f,	// (0x000a3f69) main_radioblah_rocker_ctrl_pane_g4

0xc43f,	// (0x000a3f69) main_radioblah_rocker_ctrl_pane_g5

0xc43f,	// (0x000a3f69) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb1d,	// (0x000a7647) main_radioblah_rocker_ctrl_pane_g

0x684e,	// (0x0009e378) main_cset_text2_pane_t1_copy1_ParamLimits

0xa3e6,	// (0x000a1f10) cam4_image_uncrop_qvga_pane

0xa439,	// (0x000a1f63) vid4_image_uncrop_qcif_pane

0xa8d1,	// (0x000a23fb) cam6_image_uncrop_qvga_pane_ParamLimits

0xa8d1,	// (0x000a23fb) cam6_image_uncrop_qvga_pane

0xa989,	// (0x000a24b3) vid6_image_uncrop_qcif_pane_ParamLimits

0xa989,	// (0x000a24b3) vid6_image_uncrop_qcif_pane

0xaa49,	// (0x000a2573) bg_popup_preview_window_pane_cp03

0xaccb,	// (0x000a27f5) list_cset_text2_pane

0xacd3,	// (0x000a27fd) main_cset6_text2_pane_g1

0xacdb,	// (0x000a2805) main_cset6_text2_pane_t1

0xbf35,	// (0x000a3a5f) list_cset_text2_pane_t1_ParamLimits

0xbf35,	// (0x000a3a5f) list_cset_text2_pane_t1

0x9dd4,	// (0x000a18fe) main_radioblah_pane_ParamLimits

0x6e61,	// (0x0009e98b) main_mobtv_info_pane_t3_ParamLimits

0x6e61,	// (0x0009e98b) main_mobtv_info_pane_t3

0xd205,	// (0x000a4d2f) main_radioblah_pane_g1

0xb140,	// (0x000a2c6a) main_radioblah_info_pane_g1

0xc45d,	// (0x000a3f87) main_radioblah_info_pane_t3_ParamLimits

0xc45d,	// (0x000a3f87) main_radioblah_info_pane_t3

0x2371,	// (0x00099e9b) highlight_cell_cale_month_pane_ParamLimits

0x2371,	// (0x00099e9b) highlight_cell_cale_month_pane

0x9de2,	// (0x000a190c) main_phob_fisheye_pane

0xec59,	// (0x000a6783) scroll_pane_cp0031_ParamLimits

0xec59,	// (0x000a6783) scroll_pane_cp0031

0xab19,	// (0x000a2643) wait_bar_pane_cp08_ParamLimits

0x68d0,	// (0x0009e3fa) cset_list_set_pane_copy1_ParamLimits

0xb1bf,	// (0x000a2ce9) highlight_cell_cale_month_pane_g1

0x6f64,	// (0x0009ea8e) highlight_cell_cale_month_pane_t1

0xa6aa,	// (0x000a21d4) list_gen_pane_cp01

0x565b,	// (0x0009d185) scroll_pane_01

0x6f72,	// (0x0009ea9c) list_single_double_fisheye_pane

0x6f7b,	// (0x0009eaa5) list_double_fisheye_pane_g1_ParamLimits

0x6f7b,	// (0x0009eaa5) list_double_fisheye_pane_g1

0x6f87,	// (0x0009eab1) list_double_fisheye_pane_g2_ParamLimits

0x6f87,	// (0x0009eab1) list_double_fisheye_pane_g2

0x6f9b,	// (0x0009eac5) list_double_fisheye_pane_g3_ParamLimits

0x6f9b,	// (0x0009eac5) list_double_fisheye_pane_g3

0x0004,

0xfb2a,	// (0x000a7654) list_double_fisheye_pane_g_ParamLimits

0xfb2a,	// (0x000a7654) list_double_fisheye_pane_g

0x6fc4,	// (0x0009eaee) list_double_fisheye_pane_t1_ParamLimits

0x6fc4,	// (0x0009eaee) list_double_fisheye_pane_t1

0x6fdf,	// (0x0009eb09) list_double_fisheye_pane_t2_ParamLimits

0x6fdf,	// (0x0009eb09) list_double_fisheye_pane_t2

0x0001,

0xfb35,	// (0x000a765f) list_double_fisheye_pane_t_ParamLimits

0xfb35,	// (0x000a765f) list_double_fisheye_pane_t

0x9de2,	// (0x000a190c) main_call5_pane

0xbf15,	// (0x000a3a3f) sc_swipe_pane_ParamLimits

0xbf15,	// (0x000a3a3f) sc_swipe_pane

0x7014,	// (0x0009eb3e) call5_image_pane_ParamLimits

0x7014,	// (0x0009eb3e) call5_image_pane

0x7031,	// (0x0009eb5b) call5_swipe_1_pane_ParamLimits

0x7031,	// (0x0009eb5b) call5_swipe_1_pane

0x7044,	// (0x0009eb6e) call5_swipe_2_pane_ParamLimits

0x7044,	// (0x0009eb6e) call5_swipe_2_pane

0x706f,	// (0x0009eb99) popup_call5_audio_first_window_ParamLimits

0x706f,	// (0x0009eb99) popup_call5_audio_first_window

0xc401,	// (0x000a3f2b) call5_swipe_1_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) call5_swipe_1_pane_g1

0xb1c7,	// (0x000a2cf1) call5_swipe_1_pane_g2_ParamLimits

0xb1c7,	// (0x000a2cf1) call5_swipe_1_pane_g2

0x0001,

0xfb3a,	// (0x000a7664) call5_swipe_1_pane_g_ParamLimits

0xfb3a,	// (0x000a7664) call5_swipe_1_pane_g

0xb1d3,	// (0x000a2cfd) call5_swipe_1_pane_t1_ParamLimits

0xb1d3,	// (0x000a2cfd) call5_swipe_1_pane_t1

0xc401,	// (0x000a3f2b) call5_swipe_2_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) call5_swipe_2_pane_g1

0xb1e8,	// (0x000a2d12) call5_swipe_2_pane_g2_ParamLimits

0xb1e8,	// (0x000a2d12) call5_swipe_2_pane_g2

0x0001,

0xfb3f,	// (0x000a7669) call5_swipe_2_pane_g_ParamLimits

0xfb3f,	// (0x000a7669) call5_swipe_2_pane_g

0xb1f4,	// (0x000a2d1e) call5_swipe_2_pane_t1_ParamLimits

0xb1f4,	// (0x000a2d1e) call5_swipe_2_pane_t1

0xc401,	// (0x000a3f2b) sc_swipe_pane_g1_ParamLimits

0xc401,	// (0x000a3f2b) sc_swipe_pane_g1

0xc40f,	// (0x000a3f39) sc_swipe_pane_g2_ParamLimits

0xc40f,	// (0x000a3f39) sc_swipe_pane_g2

0x0001,

0xf720,	// (0x000a724a) sc_swipe_pane_g_ParamLimits

0xf720,	// (0x000a724a) sc_swipe_pane_g

0xc449,	// (0x000a3f73) sc_swipe_pane_t1_ParamLimits

0xc449,	// (0x000a3f73) sc_swipe_pane_t1

0x9de2,	// (0x000a190c) main_cmail_launcher_pane

0x7080,	// (0x0009ebaa) aid_size_cell_cmail_l_ParamLimits

0x7080,	// (0x0009ebaa) aid_size_cell_cmail_l

0x708e,	// (0x0009ebb8) grid_cmail_l_pane_ParamLimits

0x708e,	// (0x0009ebb8) grid_cmail_l_pane

0x70a8,	// (0x0009ebd2) cell_cmail_l_pane_ParamLimits

0x70a8,	// (0x0009ebd2) cell_cmail_l_pane

0xb209,	// (0x000a2d33) cell_cmail_l_pane_g1_ParamLimits

0xb209,	// (0x000a2d33) cell_cmail_l_pane_g1

0xb215,	// (0x000a2d3f) cell_cmail_l_pane_t1_ParamLimits

0xb215,	// (0x000a2d3f) cell_cmail_l_pane_t1

0xb22b,	// (0x000a2d55) cell_cmail_l_pane_t2_ParamLimits

0xb22b,	// (0x000a2d55) cell_cmail_l_pane_t2

0x0001,

0x0617,	// (0x00098141) cell_cmail_l_pane_t_ParamLimits

0x0617,	// (0x00098141) cell_cmail_l_pane_t

0xbf15,	// (0x000a3a3f) grid_highlight_pane_cp018_ParamLimits

0xbf15,	// (0x000a3a3f) grid_highlight_pane_cp018

0x0a95,	// (0x000985bf) main2_pane_ParamLimits

0x0a95,	// (0x000985bf) main2_pane

0xc535,	// (0x000a405f) popup_sp_fs_action_menu_bg_pane_g1

0xc53d,	// (0x000a4067) popup_sp_fs_action_menu_bg_pane_g2

0xc545,	// (0x000a406f) popup_sp_fs_action_menu_bg_pane_g3

0xc54d,	// (0x000a4077) popup_sp_fs_action_menu_bg_pane_g4

0xc555,	// (0x000a407f) popup_sp_fs_action_menu_bg_pane_g5

0xc55d,	// (0x000a4087) popup_sp_fs_action_menu_bg_pane_g6

0xc565,	// (0x000a408f) popup_sp_fs_action_menu_bg_pane_g7

0xc56d,	// (0x000a4097) popup_sp_fs_action_menu_bg_pane_g8

0xc575,	// (0x000a409f) popup_sp_fs_action_menu_bg_pane_g9

0xc57d,	// (0x000a40a7) popup_sp_fs_action_menu_bg_pane_g10

0xc57d,	// (0x000a40a7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x000a6c2a) popup_sp_fs_action_menu_bg_pane_g

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g3_g1

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g3_g2

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x000a6cd8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x000a6cd8) list_medium_line_x2_t3_g3_g

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g3_t1

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g3_t2

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x000a6cdf) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x000a6cdf) list_medium_line_x2_t3_g3_t

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g2_g1

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x000a6ce6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x000a6ce6) list_medium_line_x2_t3_g2_g

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g2_t1

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g2_t2

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x000a6cdf) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x000a6cdf) list_medium_line_x2_t3_g2_t

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g4_g1

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g4_g2

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g4_g3

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x000a6ceb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x000a6ceb) list_medium_line_x2_t4_g4_g

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g4_t1

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g4_t2

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g4_t3

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x000a6cf4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x000a6cf4) list_medium_line_x2_t4_g4_t

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g4_g1

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g4_g2

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g4_g3

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x000a6ceb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x000a6ceb) list_medium_line_x2_t2_g4_g

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g4_t1

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x000a6cbb) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x000a6cbb) list_medium_line_x2_t2_g4_t

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g3_g1

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g3_g2

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x000a6cd8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x000a6cd8) list_medium_line_x2_t2_g3_g

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g3_t1

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x000a6cbb) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x000a6cbb) list_medium_line_x2_t2_g3_t

0x24d6,	// (0x0009a000) main_sp_fs_list_pane_ParamLimits

0x24d6,	// (0x0009a000) main_sp_fs_list_pane

0x9eb2,	// (0x000a19dc) sp_fs_scroll_pane_ParamLimits

0x9eb2,	// (0x000a19dc) sp_fs_scroll_pane

0xcc1c,	// (0x000a4746) list_medium_line_x2_t3_t1

0xcc1c,	// (0x000a4746) list_medium_line_x2_t3_t2

0xcc1c,	// (0x000a4746) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x000a6da1) list_medium_line_x2_t3_t

0xcc1c,	// (0x000a4746) list_medium_line_x3_t4_t1

0xcc1c,	// (0x000a4746) list_medium_line_x3_t4_t2

0xcc1c,	// (0x000a4746) list_medium_line_x3_t4_t3

0xcc1c,	// (0x000a4746) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x000a6da8) list_medium_line_x3_t4_t

0xcc1c,	// (0x000a4746) list_medium_line_x4_t5_t1

0xcc1c,	// (0x000a4746) list_medium_line_x4_t5_t2

0xcc1c,	// (0x000a4746) list_medium_line_x4_t5_t3

0xcc1c,	// (0x000a4746) list_medium_line_x4_t5_t4

0xcc1c,	// (0x000a4746) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x000a6db1) list_medium_line_x4_t5_t

0xc401,	// (0x000a3f2b) list_medium_line_t4_g4_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t4_g4_g1

0xc401,	// (0x000a3f2b) list_medium_line_t4_g4_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t4_g4_g2

0xc401,	// (0x000a3f2b) list_medium_line_t4_g4_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t4_g4_g3

0xc401,	// (0x000a3f2b) list_medium_line_t4_g4_g4_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x000a6ceb) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x000a6ceb) list_medium_line_t4_g4_g

0xc449,	// (0x000a3f73) list_medium_line_t4_g4_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t4_g4_t1

0xc449,	// (0x000a3f73) list_medium_line_t4_g4_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t4_g4_t2

0xc449,	// (0x000a3f73) list_medium_line_t4_g4_t3_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t4_g4_t3

0xc449,	// (0x000a3f73) list_medium_line_t4_g4_t4_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x000a6cf4) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x000a6cf4) list_medium_line_t4_g4_t

0x2581,	// (0x0009a0ab) chi_dic_find_pane_g1

0x3352,	// (0x0009ae7c) main_tport_pane

0xcc1c,	// (0x000a4746) list_medium_line_plain_t1

0xc401,	// (0x000a3f2b) list_medium_line_t2_g2_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t2_g2_g1

0xc401,	// (0x000a3f2b) list_medium_line_t2_g2_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x000a6ce6) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x000a6ce6) list_medium_line_t2_g2_g

0xc449,	// (0x000a3f73) list_medium_line_t2_g2_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t2_g2_t1

0xc449,	// (0x000a3f73) list_medium_line_t2_g2_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x000a6cbb) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x000a6cbb) list_medium_line_t2_g2_t

0x636c,	// (0x0009de96) aid_sp_fs_list_icon_a_sm

0x6374,	// (0x0009de9e) aid_sp_fs_list_icon_d

0x637c,	// (0x0009dea6) aid_sp_fs_text_primary

0xa71e,	// (0x000a2248) aid_sp_fs_text_secondary

0xaa49,	// (0x000a2573) list_medium_line

0xaa49,	// (0x000a2573) list_medium_line_g2

0xaa49,	// (0x000a2573) list_medium_line_g3

0xaa49,	// (0x000a2573) list_medium_line_plain

0xaa49,	// (0x000a2573) list_medium_line_plain_t2

0xaa49,	// (0x000a2573) list_medium_line_plain_t3

0xaa49,	// (0x000a2573) list_medium_line_right_icon

0xaa49,	// (0x000a2573) list_medium_line_right_iconx2

0xaa49,	// (0x000a2573) list_medium_line_t2

0xaa49,	// (0x000a2573) list_medium_line_t2_g2

0xaa49,	// (0x000a2573) list_medium_line_t2_g3

0xaa49,	// (0x000a2573) list_medium_line_t2_right_icon

0xaa49,	// (0x000a2573) list_medium_line_t2_right_iconx2

0xaa49,	// (0x000a2573) list_medium_line_t3

0xaa49,	// (0x000a2573) list_medium_line_t3_g2

0xaa49,	// (0x000a2573) list_medium_line_t3_g3

0xaa49,	// (0x000a2573) list_medium_line_t3_right_iconx2

0xaa49,	// (0x000a2573) list_medium_line_t4_g4

0xaa49,	// (0x000a2573) list_medium_line_x2

0xaa49,	// (0x000a2573) list_medium_line_x2_t2_g2

0xaa49,	// (0x000a2573) list_medium_line_x2_t2_g3

0xaa49,	// (0x000a2573) list_medium_line_x2_t2_g4

0xaa49,	// (0x000a2573) list_medium_line_x2_t3

0xaa49,	// (0x000a2573) list_medium_line_x2_t3_g2

0xaa49,	// (0x000a2573) list_medium_line_x2_t3_g3

0xaa49,	// (0x000a2573) list_medium_line_x2_t3_g4

0xaa49,	// (0x000a2573) list_medium_line_x2_t4_g2

0xaa49,	// (0x000a2573) list_medium_line_x2_t4_g4

0xaa49,	// (0x000a2573) list_medium_line_x3

0xaa49,	// (0x000a2573) list_medium_line_x3_t4

0xaa49,	// (0x000a2573) list_medium_line_x3_t4_g4

0xaa49,	// (0x000a2573) list_medium_line_x4_t4

0xaa49,	// (0x000a2573) list_medium_line_x4_t4_g7

0xaa49,	// (0x000a2573) list_medium_line_x4_t5

0x6385,	// (0x0009deaf) list_single_fs_dyc_pane_ParamLimits

0x6385,	// (0x0009deaf) list_single_fs_dyc_pane

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g1

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g2

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g3

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g4

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g5

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x4_t4_g7_g6

0xc40f,	// (0x000a3f39) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc40f,	// (0x000a3f39) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa9e,	// (0x000a75c8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa9e,	// (0x000a75c8) list_medium_line_x4_t4_g7_g

0xc449,	// (0x000a3f73) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x4_t4_g7_t1

0xc449,	// (0x000a3f73) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x4_t4_g7_t2

0xc449,	// (0x000a3f73) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x4_t4_g7_t3

0xc45d,	// (0x000a3f87) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc45d,	// (0x000a3f87) list_medium_line_x4_t4_g7_t4

0xc45d,	// (0x000a3f87) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc45d,	// (0x000a3f87) list_medium_line_x4_t4_g7_t5

0x0004,

0xfaad,	// (0x000a75d7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfaad,	// (0x000a75d7) list_medium_line_x4_t4_g7_t

0x6ad9,	// (0x0009e603) list_single_dyc_row_pane_ParamLimits

0x6ad9,	// (0x0009e603) list_single_dyc_row_pane

0x7001,	// (0x0009eb2b) call5_gesture_pane_ParamLimits

0x7001,	// (0x0009eb2b) call5_gesture_pane

0x7057,	// (0x0009eb81) call5_windows_pane_ParamLimits

0x7057,	// (0x0009eb81) call5_windows_pane

0x70c2,	// (0x0009ebec) call5_swipe_1_pane_cp_ParamLimits

0x70c2,	// (0x0009ebec) call5_swipe_1_pane_cp

0x70ce,	// (0x0009ebf8) call5_swipe_2_pane_cp_ParamLimits

0x70ce,	// (0x0009ebf8) call5_swipe_2_pane_cp

0xc6ed,	// (0x000a4217) call5_image_pane_cp

0x70da,	// (0x0009ec04) popup_call5_audio_first_window_cp_ParamLimits

0x70da,	// (0x0009ec04) popup_call5_audio_first_window_cp

0xb248,	// (0x000a2d72) call5_swipe_1_pane_g1_cp_ParamLimits

0xb248,	// (0x000a2d72) call5_swipe_1_pane_g1_cp

0xb255,	// (0x000a2d7f) call5_swipe_1_pane_g2_cp

0xb25d,	// (0x000a2d87) call5_swipe_1_pane_t1_cp_ParamLimits

0xb25d,	// (0x000a2d87) call5_swipe_1_pane_t1_cp

0xb248,	// (0x000a2d72) call5_swipe_2_pane_g1_cp_ParamLimits

0xb248,	// (0x000a2d72) call5_swipe_2_pane_g1_cp

0xb272,	// (0x000a2d9c) call5_swipe_2_pane_g2_cp

0xb27a,	// (0x000a2da4) call5_swipe_2_pane_t1_cp_ParamLimits

0xb27a,	// (0x000a2da4) call5_swipe_2_pane_t1_cp

0xbf15,	// (0x000a3a3f) main_sp_fs_email_pane

0xb28f,	// (0x000a2db9) main_sp_fs_listscroll_pane_te

0x70e8,	// (0x0009ec12) popup_sp_fs_action_menu_pane_ParamLimits

0x70e8,	// (0x0009ec12) popup_sp_fs_action_menu_pane

0xc43f,	// (0x000a3f69) bg_sp_fs_ctrlbar_pane_g1

0xb298,	// (0x000a2dc2) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xb2a1,	// (0x000a2dcb) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe465,	// (0x000a5f8f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc43f,	// (0x000a3f69) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb44,	// (0x000a766e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe69e,	// (0x000a61c8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe69e,	// (0x000a61c8) bg_sp_fs_ctrlbar_ddmenu_pane

0xb2aa,	// (0x000a2dd4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xb2aa,	// (0x000a2dd4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xb2b6,	// (0x000a2de0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xb2b6,	// (0x000a2de0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0625,	// (0x0009814f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0625,	// (0x0009814f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xb2c2,	// (0x000a2dec) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xb2c2,	// (0x000a2dec) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc43f,	// (0x000a3f69) list_medium_line_t2_right_icon_g1

0xcc1c,	// (0x000a4746) list_medium_line_t2_right_icon_t1

0xcc1c,	// (0x000a4746) list_medium_line_t2_right_icon_t2

0x0001,

0x062a,	// (0x00098154) list_medium_line_t2_right_icon_t

0xd227,	// (0x000a4d51) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd227,	// (0x000a4d51) bg_sp_fs_ctrlbar_pane

0x7172,	// (0x0009ec9c) main_sp_fs_ctrlbar_button_pane_cp01

0x717c,	// (0x0009eca6) main_sp_fs_ctrlbar_ddmenu_pane

0xb314,	// (0x000a2e3e) main_sp_fs_ctrlbar_pane_g1

0xb320,	// (0x000a2e4a) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb4d,	// (0x000a7677) main_sp_fs_ctrlbar_pane_g

0x71ba,	// (0x0009ece4) main_sp_fs_ctrlbar_pane_t1

0x71f9,	// (0x0009ed23) main_sp_fs_ctrlbar_pane

0x721d,	// (0x0009ed47) main_sp_fs_listscroll_pane_te_cp01

0x7247,	// (0x0009ed71) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7247,	// (0x0009ed71) popup_sp_fs_action_menu_pane_cp01

0xbf15,	// (0x000a3a3f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbf15,	// (0x000a3a3f) bg_sp_fs_highlight_list_pane_cp01

0x726c,	// (0x0009ed96) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x726c,	// (0x0009ed96) sp_fs_action_menu_list_gene_pane_g1

0xb347,	// (0x000a2e71) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb347,	// (0x000a2e71) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb56,	// (0x000a7680) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb56,	// (0x000a7680) sp_fs_action_menu_list_gene_pane_g

0x727b,	// (0x0009eda5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x727b,	// (0x0009eda5) sp_fs_action_menu_list_gene_pane_t1

0x7293,	// (0x0009edbd) sp_fs_action_menu_list_gene_pane_ParamLimits

0x7293,	// (0x0009edbd) sp_fs_action_menu_list_gene_pane

0xb354,	// (0x000a2e7e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb354,	// (0x000a2e7e) popup_sp_fs_action_menu_bg_pane

0x72b2,	// (0x0009eddc) sp_fs_action_menu_list_pane_ParamLimits

0x72b2,	// (0x0009eddc) sp_fs_action_menu_list_pane

0x72d2,	// (0x0009edfc) sp_fs_scroll_pane_cp01_ParamLimits

0x72d2,	// (0x0009edfc) sp_fs_scroll_pane_cp01

0xcc1c,	// (0x000a4746) list_medium_line_plain_t2_t1

0xcc1c,	// (0x000a4746) list_medium_line_plain_t2_t2

0x0001,

0x062a,	// (0x00098154) list_medium_line_plain_t2_t

0xcc1c,	// (0x000a4746) list_medium_line_plain_t3_t1

0xcc1c,	// (0x000a4746) list_medium_line_plain_t3_t2

0xcc1c,	// (0x000a4746) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x000a6da1) list_medium_line_plain_t3_t

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g2_g1

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x000a6ce6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x000a6ce6) list_medium_line_x2_t2_g2_g

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g2_t1

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x000a6cbb) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x000a6cbb) list_medium_line_x2_t2_g2_t

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g2_g1

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x000a6ce6) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x000a6ce6) list_medium_line_x2_t4_g2_g

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g2_t1

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g2_t2

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g2_t3

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x000a6cf4) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x000a6cf4) list_medium_line_x2_t4_g2_t

0xc43f,	// (0x000a3f69) list_medium_line_t3_right_iconx2_g1

0xc43f,	// (0x000a3f69) list_medium_line_t3_right_iconx2_g2

0xc43f,	// (0x000a3f69) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x000a6ebd) list_medium_line_t3_right_iconx2_g

0xcc1c,	// (0x000a4746) list_medium_line_t3_right_iconx2_t1

0xcc1c,	// (0x000a4746) list_medium_line_t3_right_iconx2_t2

0x0001,

0x062a,	// (0x00098154) list_medium_line_t3_right_iconx2_t

0xc401,	// (0x000a3f2b) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x3_t4_g4_g1

0xc401,	// (0x000a3f2b) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x3_t4_g4_g2

0xc401,	// (0x000a3f2b) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x3_t4_g4_g3

0xc401,	// (0x000a3f2b) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x000a6ceb) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x000a6ceb) list_medium_line_x3_t4_g4_g

0xc449,	// (0x000a3f73) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x3_t4_g4_t1

0xc449,	// (0x000a3f73) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x3_t4_g4_t2

0xc449,	// (0x000a3f73) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x3_t4_g4_t3

0xc449,	// (0x000a3f73) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x000a6cf4) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x000a6cf4) list_medium_line_x3_t4_g4_t

0x72f8,	// (0x0009ee22) list_single_dyc_row_text_pane_t1_ParamLimits

0x72f8,	// (0x0009ee22) list_single_dyc_row_text_pane_t1

0x7341,	// (0x0009ee6b) list_single_dyc_row_text_pane_t2_ParamLimits

0x7341,	// (0x0009ee6b) list_single_dyc_row_text_pane_t2

0x73b7,	// (0x0009eee1) list_single_dyc_row_text_pane_t3_ParamLimits

0x73b7,	// (0x0009eee1) list_single_dyc_row_text_pane_t3

0x0005,

0xfb5b,	// (0x000a7685) list_single_dyc_row_text_pane_t_ParamLimits

0xfb5b,	// (0x000a7685) list_single_dyc_row_text_pane_t

0x749a,	// (0x0009efc4) list_single_dyc_row_pane_g1_ParamLimits

0x749a,	// (0x0009efc4) list_single_dyc_row_pane_g1

0x74a6,	// (0x0009efd0) list_single_dyc_row_pane_g2_ParamLimits

0x74a6,	// (0x0009efd0) list_single_dyc_row_pane_g2

0x74b2,	// (0x0009efdc) list_single_dyc_row_pane_g3_ParamLimits

0x74b2,	// (0x0009efdc) list_single_dyc_row_pane_g3

0x74be,	// (0x0009efe8) list_single_dyc_row_pane_g4_ParamLimits

0x74be,	// (0x0009efe8) list_single_dyc_row_pane_g4

0x0003,

0xfb68,	// (0x000a7692) list_single_dyc_row_pane_g_ParamLimits

0xfb68,	// (0x000a7692) list_single_dyc_row_pane_g

0x74ca,	// (0x0009eff4) list_single_dyc_row_text_pane_ParamLimits

0x74ca,	// (0x0009eff4) list_single_dyc_row_text_pane

0xaa49,	// (0x000a2573) bg_sp_fs_scroll_pane

0xb362,	// (0x000a2e8c) thumb_sp_fs_scroll_pane

0xc401,	// (0x000a3f2b) list_medium_line_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_g1

0xc449,	// (0x000a3f73) list_medium_line_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t1

0xc401,	// (0x000a3f2b) list_medium_line_x2_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_g1

0xc401,	// (0x000a3f2b) list_medium_line_x2_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x000a6ce6) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x000a6ce6) list_medium_line_x2_g

0xc449,	// (0x000a3f73) list_medium_line_x2_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t1

0xc401,	// (0x000a3f2b) list_medium_line_x3_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x3_g1

0xaa73,	// (0x000a259d) list_medium_line_x3_g2_ParamLimits

0xaa73,	// (0x000a259d) list_medium_line_x3_g2

0x0001,

0xfb71,	// (0x000a769b) list_medium_line_x3_g_ParamLimits

0xfb71,	// (0x000a769b) list_medium_line_x3_g

0xb36b,	// (0x000a2e95) list_medium_line_x3_t1_ParamLimits

0xb36b,	// (0x000a2e95) list_medium_line_x3_t1

0xb37f,	// (0x000a2ea9) thumb_sp_fs_scroll_pane_g1

0xb388,	// (0x000a2eb2) thumb_sp_fs_scroll_pane_g2

0xb391,	// (0x000a2ebb) thumb_sp_fs_scroll_pane_g3

0x0002,

0x065d,	// (0x00098187) thumb_sp_fs_scroll_pane_g

0xb37f,	// (0x000a2ea9) bg_sp_fs_scroll_pane_g1

0xb388,	// (0x000a2eb2) bg_sp_fs_scroll_pane_g2

0xb391,	// (0x000a2ebb) bg_sp_fs_scroll_pane_g3

0x0002,

0x065d,	// (0x00098187) bg_sp_fs_scroll_pane_g

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g4_g1

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g4_g2

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g4_g3

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x000a6ceb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x000a6ceb) list_medium_line_x2_t3_g4_g

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g4_t1

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g4_t2

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x000a6cdf) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x000a6cdf) list_medium_line_x2_t3_g4_t

0xc401,	// (0x000a3f2b) list_medium_line_g2_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_g2_g1

0xc401,	// (0x000a3f2b) list_medium_line_g2_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x000a6ce6) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x000a6ce6) list_medium_line_g2_g

0xc449,	// (0x000a3f73) list_medium_line_g2_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_g2_t1

0xc401,	// (0x000a3f2b) list_medium_line_t3_g2_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t3_g2_g1

0xc401,	// (0x000a3f2b) list_medium_line_t3_g2_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x000a6ce6) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x000a6ce6) list_medium_line_t3_g2_g

0xc449,	// (0x000a3f73) list_medium_line_t3_g2_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t3_g2_t1

0xc449,	// (0x000a3f73) list_medium_line_t3_g2_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t3_g2_t2

0xc449,	// (0x000a3f73) list_medium_line_t3_g2_t3_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x000a6cdf) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x000a6cdf) list_medium_line_t3_g2_t

0xc43f,	// (0x000a3f69) list_medium_line_right_icon_g1

0xcc1c,	// (0x000a4746) list_medium_line_right_icon_t1

0xc401,	// (0x000a3f2b) list_medium_line_t2_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t2_g1

0xc449,	// (0x000a3f73) list_medium_line_t2_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t2_t1

0xc449,	// (0x000a3f73) list_medium_line_t2_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x000a6cbb) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x000a6cbb) list_medium_line_t2_t

0xc401,	// (0x000a3f2b) list_medium_line_t3_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t3_g1

0xc449,	// (0x000a3f73) list_medium_line_t3_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t3_t1

0xc449,	// (0x000a3f73) list_medium_line_t3_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t3_t2

0xc449,	// (0x000a3f73) list_medium_line_t3_t3_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x000a6cdf) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x000a6cdf) list_medium_line_t3_t

0xc401,	// (0x000a3f2b) list_medium_line_g3_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_g3_g1

0xc401,	// (0x000a3f2b) list_medium_line_g3_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_g3_g2

0xc401,	// (0x000a3f2b) list_medium_line_g3_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x000a6cd8) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x000a6cd8) list_medium_line_g3_g

0xc449,	// (0x000a3f73) list_medium_line_g3_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_g3_t1

0xc401,	// (0x000a3f2b) list_medium_line_t2_g3_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t2_g3_g1

0xc401,	// (0x000a3f2b) list_medium_line_t2_g3_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t2_g3_g2

0xc401,	// (0x000a3f2b) list_medium_line_t2_g3_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x000a6cd8) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x000a6cd8) list_medium_line_t2_g3_g

0xc449,	// (0x000a3f73) list_medium_line_t2_g3_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t2_g3_t1

0xc449,	// (0x000a3f73) list_medium_line_t2_g3_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x000a6cbb) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x000a6cbb) list_medium_line_t2_g3_t

0xc401,	// (0x000a3f2b) list_medium_line_t3_g3_g1_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t3_g3_g1

0xc401,	// (0x000a3f2b) list_medium_line_t3_g3_g2_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t3_g3_g2

0xc401,	// (0x000a3f2b) list_medium_line_t3_g3_g3_ParamLimits

0xc401,	// (0x000a3f2b) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x000a6cd8) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x000a6cd8) list_medium_line_t3_g3_g

0xc449,	// (0x000a3f73) list_medium_line_t3_g3_t1_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t3_g3_t1

0xc449,	// (0x000a3f73) list_medium_line_t3_g3_t2_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t3_g3_t2

0xc449,	// (0x000a3f73) list_medium_line_t3_g3_t3_ParamLimits

0xc449,	// (0x000a3f73) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x000a6cdf) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x000a6cdf) list_medium_line_t3_g3_t

0xc43f,	// (0x000a3f69) list_medium_line_right_iconx2_g1

0xc43f,	// (0x000a3f69) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x000a6bd9) list_medium_line_right_iconx2_g

0xcc1c,	// (0x000a4746) list_medium_line_right_iconx2_t1

0xc43f,	// (0x000a3f69) list_medium_line_t2_right_iconx2_g1

0xc43f,	// (0x000a3f69) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x000a6bd9) list_medium_line_t2_right_iconx2_g

0xcc1c,	// (0x000a4746) list_medium_line_t2_right_iconx2_t1

0xcc1c,	// (0x000a4746) list_medium_line_t2_right_iconx2_t2

0x0001,

0x062a,	// (0x00098154) list_medium_line_t2_right_iconx2_t

0xcc1c,	// (0x000a4746) list_medium_line_x4_t4_t1

0xcc1c,	// (0x000a4746) list_medium_line_x4_t4_t2

0xcc1c,	// (0x000a4746) list_medium_line_x4_t4_t3

0xcc1c,	// (0x000a4746) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x000a6da8) list_medium_line_x4_t4_t

0x752c,	// (0x0009f056) tport_appsw_pane_ParamLimits

0x752c,	// (0x0009f056) tport_appsw_pane

0x7544,	// (0x0009f06e) tport_contact_pane_ParamLimits

0x7544,	// (0x0009f06e) tport_contact_pane

0x755c,	// (0x0009f086) tport_listscroll_pane_ParamLimits

0x755c,	// (0x0009f086) tport_listscroll_pane

0x7576,	// (0x0009f0a0) cell_tport_appsw_pane_ParamLimits

0x7576,	// (0x0009f0a0) cell_tport_appsw_pane

0xd205,	// (0x000a4d2f) tport_appsw_pane_g1_ParamLimits

0xd205,	// (0x000a4d2f) tport_appsw_pane_g1

0xb39a,	// (0x000a2ec4) tport_contact_pane_g1

0xb3a3,	// (0x000a2ecd) tport_contact_pane_t1

0xb3b1,	// (0x000a2edb) tport_contact_pane_t2

0x0001,

0x0664,	// (0x0009818e) tport_contact_pane_t

0xb3bf,	// (0x000a2ee9) list_tport_pane

0xb3c8,	// (0x000a2ef2) scroll_pane_cp_030

0x75be,	// (0x0009f0e8) cell_tport_appsw_pane_g1

0x75ce,	// (0x0009f0f8) cell_tport_appsw_pane_t1

0x75dc,	// (0x0009f106) grid_highlight_pane_cp019

0x75e4,	// (0x0009f10e) list_tport_double_graphic_pane_ParamLimits

0x75e4,	// (0x0009f10e) list_tport_double_graphic_pane

0xbf15,	// (0x000a3a3f) list_highlight_pane_cp023_ParamLimits

0xbf15,	// (0x000a3a3f) list_highlight_pane_cp023

0x75f1,	// (0x0009f11b) list_tport_double_graphic_pane_g1_ParamLimits

0x75f1,	// (0x0009f11b) list_tport_double_graphic_pane_g1

0x75fe,	// (0x0009f128) list_tport_double_graphic_pane_t1_ParamLimits

0x75fe,	// (0x0009f128) list_tport_double_graphic_pane_t1

0x7613,	// (0x0009f13d) list_tport_double_graphic_pane_t2_ParamLimits

0x7613,	// (0x0009f13d) list_tport_double_graphic_pane_t2

0x0001,

0xfb7d,	// (0x000a76a7) list_tport_double_graphic_pane_t_ParamLimits

0xfb7d,	// (0x000a76a7) list_tport_double_graphic_pane_t

0xaa49,	// (0x000a2573) main_cale_note_pane

0x50b8,	// (0x0009cbe2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x50b8,	// (0x0009cbe2) cell_vitu2_function_top_wide_pane_cp01

0x6e75,	// (0x0009e99f) wait_bar_pane_cp05_ParamLimits

0xbf15,	// (0x000a3a3f) listscroll_cmail_pane

0xb3d9,	// (0x000a2f03) list_cmail_pane

0x7625,	// (0x0009f14f) list_cmail_body_pane

0x763b,	// (0x0009f165) list_single_cmail_header_caption_pane

0x7652,	// (0x0009f17c) list_single_cmail_header_detail_pane_ParamLimits

0x7652,	// (0x0009f17c) list_single_cmail_header_detail_pane

0xb3f0,	// (0x000a2f1a) list_single_cmail_header_caption_pane_t1

0x7680,	// (0x0009f1aa) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7680,	// (0x0009f1aa) list_single_cmail_header_detail_pane_g1

0x7698,	// (0x0009f1c2) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7698,	// (0x0009f1c2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb82,	// (0x000a76ac) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb82,	// (0x000a76ac) list_single_cmail_header_detail_pane_g

0x76a4,	// (0x0009f1ce) list_single_cmail_header_detail_pane_t1_ParamLimits

0x76a4,	// (0x0009f1ce) list_single_cmail_header_detail_pane_t1

0x7706,	// (0x0009f230) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7706,	// (0x0009f230) list_single_cmail_header_editor_pane_bg

0xaefb,	// (0x000a2a25) list_cmail_body_pane_g1

0xb414,	// (0x000a2f3e) list_cmail_body_pane_t1

0x5205,	// (0x0009cd2f) list_single_cmail_header_editor_pane_bg_g1

0xc906,	// (0x000a4430) list_single_cmail_header_editor_pane_bg_g1_copy1

0x5215,	// (0x0009cd3f) list_single_cmail_header_editor_pane_bg_g1_copy2

0x520d,	// (0x0009cd37) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5bab,	// (0x0009d6d5) list_single_cmail_header_editor_pane_bg_g1_copy4

0x5235,	// (0x0009cd5f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x5225,	// (0x0009cd4f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x522d,	// (0x0009cd57) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc8e6,	// (0x000a4410) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x771f,	// (0x0009f249) calenote_gesture_pane_ParamLimits

0x771f,	// (0x0009f249) calenote_gesture_pane

0x773f,	// (0x0009f269) calenote_window_pane_ParamLimits

0x773f,	// (0x0009f269) calenote_window_pane

0xb422,	// (0x000a2f4c) popup_note_window_cp01

0x775b,	// (0x0009f285) calenote_swipe_1_pane_ParamLimits

0x775b,	// (0x0009f285) calenote_swipe_1_pane

0x70ce,	// (0x0009ebf8) calenote_swipe_2_pane_ParamLimits

0x70ce,	// (0x0009ebf8) calenote_swipe_2_pane

0xb248,	// (0x000a2d72) calenote_swipe_1_pane_g1_ParamLimits

0xb248,	// (0x000a2d72) calenote_swipe_1_pane_g1

0xb434,	// (0x000a2f5e) calenote_swipe_1_pane_g2_ParamLimits

0xb434,	// (0x000a2f5e) calenote_swipe_1_pane_g2

0x0001,

0x0681,	// (0x000981ab) calenote_swipe_1_pane_g_ParamLimits

0x0681,	// (0x000981ab) calenote_swipe_1_pane_g

0xb440,	// (0x000a2f6a) calenote_swipe_1_pane_t1_ParamLimits

0xb440,	// (0x000a2f6a) calenote_swipe_1_pane_t1

0xb248,	// (0x000a2d72) calenote_swipe_2_pane_g1_ParamLimits

0xb248,	// (0x000a2d72) calenote_swipe_2_pane_g1

0xb45f,	// (0x000a2f89) calenote_swipe_2_pane_g2_ParamLimits

0xb45f,	// (0x000a2f89) calenote_swipe_2_pane_g2

0x0001,

0x0686,	// (0x000981b0) calenote_swipe_2_pane_g_ParamLimits

0x0686,	// (0x000981b0) calenote_swipe_2_pane_g

0xb46b,	// (0x000a2f95) calenote_swipe_2_pane_t1_ParamLimits

0xb46b,	// (0x000a2f95) calenote_swipe_2_pane_t1

0xaa49,	// (0x000a2573) main_mup_navstr_pane

0x3f60,	// (0x0009ba8a) main_mup3_pane_t7_ParamLimits

0x3f60,	// (0x0009ba8a) main_mup3_pane_t7

0xa15c,	// (0x000a1c86) main_mp4_pane_g6_ParamLimits

0xa15c,	// (0x000a1c86) main_mp4_pane_g6

0xa386,	// (0x000a1eb0) main_image3_pane_t4_ParamLimits

0xa386,	// (0x000a1eb0) main_image3_pane_t4

0x7770,	// (0x0009f29a) popup_navstr_preview_pane_ParamLimits

0x7770,	// (0x0009f29a) popup_navstr_preview_pane

0x7784,	// (0x0009f2ae) scroll_navstr_pane_ParamLimits

0x7784,	// (0x0009f2ae) scroll_navstr_pane

0xaa49,	// (0x000a2573) bg_popup_preview_window_pane_cp04

0xb492,	// (0x000a2fbc) popup_navstr_preview_pane_t1

0x7798,	// (0x0009f2c2) scroll_navstr_pane_g1_ParamLimits

0x7798,	// (0x0009f2c2) scroll_navstr_pane_g1

0x77ac,	// (0x0009f2d6) scroll_navstr_pane_t1_ParamLimits

0x77ac,	// (0x0009f2d6) scroll_navstr_pane_t1

0xb42b,	// (0x000a2f55) bg_button_pane_cp014

0xb42b,	// (0x000a2f55) bg_button_pane_cp030

0x6fa7,	// (0x0009ead1) list_double_fisheye_pane_g4_ParamLimits

0x6fa7,	// (0x0009ead1) list_double_fisheye_pane_g4

0x6fb3,	// (0x0009eadd) list_double_fisheye_pane_g5_ParamLimits

0x6fb3,	// (0x0009eadd) list_double_fisheye_pane_g5

0x9eb2,	// (0x000a19dc) sp_fs_scroll_pane_cp03

0xb314,	// (0x000a2e3e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb320,	// (0x000a2e4a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb4d,	// (0x000a7677) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x71ba,	// (0x0009ece4) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb3e8,	// (0x000a2f12) sp_fs_scroll_pane_cp02

0xc5ae,	// (0x000a40d8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc5ae,	// (0x000a40d8) popup_sp_fs_calendar_preview_list_single_pane

0xaa49,	// (0x000a2573) main_cam6_pano_pane

0x9dd4,	// (0x000a18fe) main_mup3_pane_ParamLimits

0xaa49,	// (0x000a2573) main_phacti_pane

0x6d48,	// (0x0009e872) bg_button_pane_cp11

0x6d62,	// (0x0009e88c) main_mobtv_info_pane_g2_ParamLimits

0x6d62,	// (0x0009e88c) main_mobtv_info_pane_g2

0x0001,

0xfaed,	// (0x000a7617) main_mobtv_info_pane_g_ParamLimits

0xfaed,	// (0x000a7617) main_mobtv_info_pane_g

0xc449,	// (0x000a3f73) sc_clock_pane_t5_ParamLimits

0xc449,	// (0x000a3f73) sc_clock_pane_t5

0xd205,	// (0x000a4d2f) main_radioblah_pane_g1_ParamLimits

0xd213,	// (0x000a4d3d) main_radioblah_pane_t3_ParamLimits

0xd213,	// (0x000a4d3d) main_radioblah_pane_t3

0xd213,	// (0x000a4d3d) main_radioblah_pane_t4_ParamLimits

0xd213,	// (0x000a4d3d) main_radioblah_pane_t4

0xbf15,	// (0x000a3a3f) main_radioblah_text_pane_ParamLimits

0xbf15,	// (0x000a3a3f) main_radioblah_text_pane

0xb140,	// (0x000a2c6a) main_radioblah_info_pane_g1_ParamLimits

0xb184,	// (0x000a2cae) main_radioblah_info_pane_t4_ParamLimits

0xb184,	// (0x000a2cae) main_radioblah_info_pane_t4

0xbf15,	// (0x000a3a3f) main_sp_fs_calendar_pane

0x77c3,	// (0x0009f2ed) main_phacti_pane_g1

0x77cb,	// (0x0009f2f5) phacti_note_pane_ParamLimits

0x77cb,	// (0x0009f2f5) phacti_note_pane

0xb4a9,	// (0x000a2fd3) phacti_term_pane_ParamLimits

0xb4a9,	// (0x000a2fd3) phacti_term_pane

0xb4be,	// (0x000a2fe8) phacti_note_pane_t1_ParamLimits

0xb4be,	// (0x000a2fe8) phacti_note_pane_t1

0x77df,	// (0x0009f309) phacti_term_pane_g1

0x77e7,	// (0x0009f311) phacti_term_pane_t1_ParamLimits

0x77e7,	// (0x0009f311) phacti_term_pane_t1

0xb4d5,	// (0x000a2fff) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb4dd,	// (0x000a3007) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0690,	// (0x000981ba) popup_sp_fs_calendar_preview_list_single_pane_g

0xb4e5,	// (0x000a300f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb4e5,	// (0x000a300f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb4fb,	// (0x000a3025) aid_popup_sp_fs_bg_corner_pane

0xc43f,	// (0x000a3f69) popup_sp_fs_calendar_preview_bg_pane_g1

0xaa49,	// (0x000a2573) popup_sp_fs_calendar_preview_bg_pane

0xb503,	// (0x000a302d) popup_sp_fs_calendar_preview_list_pane

0xd227,	// (0x000a4d51) bg_main_sp_fs_cale_pane_ParamLimits

0xd227,	// (0x000a4d51) bg_main_sp_fs_cale_pane

0x787b,	// (0x0009f3a5) listscroll_cale_mrui_pane_ParamLimits

0x787b,	// (0x0009f3a5) listscroll_cale_mrui_pane

0x7890,	// (0x0009f3ba) listscroll_sp_fs_schedule_track_pane

0x7899,	// (0x0009f3c3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7899,	// (0x0009f3c3) main_sp_fs_ctrlbar_pane_cp01

0xb50b,	// (0x000a3035) main_sp_fs_ribbon_pane

0x78ac,	// (0x0009f3d6) popup_sp_fs_cale_preview_window

0x78be,	// (0x0009f3e8) list_single_sp_fs_schedule_track_pane_ParamLimits

0x78be,	// (0x0009f3e8) list_single_sp_fs_schedule_track_pane

0xbf15,	// (0x000a3a3f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbf15,	// (0x000a3a3f) bg_sp_fs_highlight_list_pane_cp03

0x78d2,	// (0x0009f3fc) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x78d2,	// (0x0009f3fc) list_single_sp_fs_schedule_track_pane_g1

0x78de,	// (0x0009f408) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x78de,	// (0x0009f408) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb93,	// (0x000a76bd) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb93,	// (0x000a76bd) list_single_sp_fs_schedule_track_pane_g

0x78ea,	// (0x0009f414) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x78ea,	// (0x0009f414) list_single_sp_fs_schedule_track_pane_t1

0x7904,	// (0x0009f42e) sp_fs_schedule_track_pane_ParamLimits

0x7904,	// (0x0009f42e) sp_fs_schedule_track_pane

0xb513,	// (0x000a303d) sp_fs_schedule_track_pane_g1

0xb51b,	// (0x000a3045) sp_fs_schedule_track_pane_g2

0xb523,	// (0x000a304d) sp_fs_schedule_track_pane_g3

0xb52b,	// (0x000a3055) sp_fs_schedule_track_pane_g4

0xb533,	// (0x000a305d) sp_fs_schedule_track_pane_g5

0x0004,

0x069a,	// (0x000981c4) sp_fs_schedule_track_pane_g

0x5205,	// (0x0009cd2f) bg_sp_fs_schedule_viewer_highlight_g1

0xc906,	// (0x000a4430) bg_sp_fs_schedule_viewer_highlight_g2

0x520d,	// (0x0009cd37) bg_sp_fs_schedule_viewer_highlight_g3

0x5215,	// (0x0009cd3f) bg_sp_fs_schedule_viewer_highlight_g4

0x5bab,	// (0x0009d6d5) bg_sp_fs_schedule_viewer_highlight_g5

0x5225,	// (0x0009cd4f) bg_sp_fs_schedule_viewer_highlight_g6

0x522d,	// (0x0009cd57) bg_sp_fs_schedule_viewer_highlight_g7

0x5235,	// (0x0009cd5f) bg_sp_fs_schedule_viewer_highlight_g8

0xc8e6,	// (0x000a4410) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb98,	// (0x000a76c2) bg_sp_fs_schedule_viewer_highlight_g

0xaa49,	// (0x000a2573) bg_main_sp_fs_ribbon_pane

0x7915,	// (0x0009f43f) main_sp_fs_ribbon_pane_g1

0xb53b,	// (0x000a3065) main_sp_fs_ribbon_pane_t1

0x791e,	// (0x0009f448) main_sp_fs_ribbon_pane_t2

0xb54a,	// (0x000a3074) main_sp_fs_ribbon_pane_t3

0x0002,

0xfbab,	// (0x000a76d5) main_sp_fs_ribbon_pane_t

0xb559,	// (0x000a3083) main_sp_fs_ribbon_scheduler_pane

0xb561,	// (0x000a308b) bg_main_sp_fs_ribbon_pane_g1

0xb56a,	// (0x000a3094) bg_main_sp_fs_ribbon_pane_g2

0xb573,	// (0x000a309d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x06bf,	// (0x000981e9) bg_main_sp_fs_ribbon_pane_g

0xb57b,	// (0x000a30a5) main_sp_fs_ribbon_scheduler_pane_g1

0xb584,	// (0x000a30ae) main_sp_fs_ribbon_scheduler_pane_g2

0xb58d,	// (0x000a30b7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x06c6,	// (0x000981f0) main_sp_fs_ribbon_scheduler_pane_g

0xb596,	// (0x000a30c0) list_cale_mrui_pane

0x792d,	// (0x0009f457) sp_fs_scroll_pane_cp07_ParamLimits

0x792d,	// (0x0009f457) sp_fs_scroll_pane_cp07

0x7949,	// (0x0009f473) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7949,	// (0x0009f473) bg_sp_fs_schedule_viewer_highlight

0xb5a3,	// (0x000a30cd) list_single_sp_fs_schedule_track_pane_cp01

0xb5ab,	// (0x000a30d5) list_sp_fs_schedule_track_pane

0xb5b3,	// (0x000a30dd) sp_fs_scroll_pane_cp06_ParamLimits

0xb5b3,	// (0x000a30dd) sp_fs_scroll_pane_cp06

0xc43f,	// (0x000a3f69) bgmain_sp_fs_calendar_pane_g1

0x7959,	// (0x0009f483) list_single_cale_mrui_pane_ParamLimits

0x7959,	// (0x0009f483) list_single_cale_mrui_pane

0x797a,	// (0x0009f4a4) list_single_cale_mrui_row_pane_ParamLimits

0x797a,	// (0x0009f4a4) list_single_cale_mrui_row_pane

0x7987,	// (0x0009f4b1) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7987,	// (0x0009f4b1) list_single_cale_mrui_row_pane_g1

0x79bf,	// (0x0009f4e9) list_single_cale_mrui_row_pane_t1_ParamLimits

0x79bf,	// (0x0009f4e9) list_single_cale_mrui_row_pane_t1

0x79d1,	// (0x0009f4fb) list_single_cale_mrui_row_pane_t2_ParamLimits

0x79d1,	// (0x0009f4fb) list_single_cale_mrui_row_pane_t2

0x7a39,	// (0x0009f563) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7a39,	// (0x0009f563) list_single_cale_mrui_row_pane_t3

0x7a68,	// (0x0009f592) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7a68,	// (0x0009f592) list_single_cale_mrui_row_pane_t4

0x0003,

0xfbb9,	// (0x000a76e3) list_single_cale_mrui_row_pane_t_ParamLimits

0xfbb9,	// (0x000a76e3) list_single_cale_mrui_row_pane_t

0x7a97,	// (0x0009f5c1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7a97,	// (0x0009f5c1) list_single_cmail_header_editor_pane_bg_cp01

0x7ac5,	// (0x0009f5ef) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7ac5,	// (0x0009f5ef) list_single_cmail_header_editor_pane_bg_cp02

0xb5d2,	// (0x000a30fc) main_radioblah_text_pane_t1_ParamLimits

0xb5d2,	// (0x000a30fc) main_radioblah_text_pane_t1

0xb5ec,	// (0x000a3116) cam6_indi_pane_cp01

0xb5f4,	// (0x000a311e) cam6_mode_pane_cp01

0xb5fc,	// (0x000a3126) cam6_pano_pane

0xb605,	// (0x000a312f) cam6_zoom_pane_cp01

0xb60d,	// (0x000a3137) cam6_pano_image_pane

0xb618,	// (0x000a3142) cam6_pano_pane_g1

0xaefb,	// (0x000a2a25) cam6_pano_pane_g2

0xb621,	// (0x000a314b) cam6_pano_pane_g3

0xb62a,	// (0x000a3154) cam6_pano_pane_g4

0xeecc,	// (0x000a69f6) cam6_pano_pane_g5

0xb633,	// (0x000a315d) cam6_pano_pane_g6

0xb63d,	// (0x000a3167) cam6_pano_pane_g7

0xb645,	// (0x000a316f) cam6_pano_pane_g8

0xb64e,	// (0x000a3178) cam6_pano_pane_g9

0x0008,

0x06dd,	// (0x00098207) cam6_pano_pane_g

0xaa49,	// (0x000a2573) main_browser_tag_pane

0xb48a,	// (0x000a2fb4) grid_navstr_albumart_pane

0xb659,	// (0x000a3183) cell_navstr_albumart_pane_ParamLimits

0xb659,	// (0x000a3183) cell_navstr_albumart_pane

0xb679,	// (0x000a31a3) cell_navstr_albumart_pane_g1

0xe2ec,	// (0x000a5e16) cell_navstr_albumart_pane_g2

0xe2fc,	// (0x000a5e26) cell_navstr_albumart_pane_g3

0xe2f4,	// (0x000a5e1e) cell_navstr_albumart_pane_g4

0x0003,

0x06f0,	// (0x0009821a) cell_navstr_albumart_pane_g

0x7ae5,	// (0x0009f60f) bt_list_pane_ParamLimits

0x7ae5,	// (0x0009f60f) bt_list_pane

0x7af9,	// (0x0009f623) bt_list_pane_t1

0x7b08,	// (0x0009f632) bt_list_pane_t2

0x0001,

0xfbc2,	// (0x000a76ec) bt_list_pane_t

0xaa49,	// (0x000a2573) main_cale_prevew_pane

0x7b17,	// (0x0009f641) popup_cale_preview_window_ParamLimits

0x7b17,	// (0x0009f641) popup_cale_preview_window

0xbf15,	// (0x000a3a3f) bg_popup_preview_window_pane_cp05_ParamLimits

0xbf15,	// (0x000a3a3f) bg_popup_preview_window_pane_cp05

0xb681,	// (0x000a31ab) list_cale_preview_pane_ParamLimits

0xb681,	// (0x000a31ab) list_cale_preview_pane

0x7b30,	// (0x0009f65a) list_double_cale_preview_pane_ParamLimits

0x7b30,	// (0x0009f65a) list_double_cale_preview_pane

0x523d,	// (0x0009cd67) list_single_cale_preview_pane_ParamLimits

0x523d,	// (0x0009cd67) list_single_cale_preview_pane

0x7b42,	// (0x0009f66c) list_single_cale_preview_pane_g1

0x7b4a,	// (0x0009f674) list_single_cale_preview_pane_t1_ParamLimits

0x7b4a,	// (0x0009f674) list_single_cale_preview_pane_t1

0x7b5f,	// (0x0009f689) list_double_cale_preview_pane_g1

0x7b67,	// (0x0009f691) list_double_cale_preview_pane_t1_ParamLimits

0x7b67,	// (0x0009f691) list_double_cale_preview_pane_t1

0x7b7c,	// (0x0009f6a6) list_double_cale_preview_pane_t2_ParamLimits

0x7b7c,	// (0x0009f6a6) list_double_cale_preview_pane_t2

0x0001,

0xfbc7,	// (0x000a76f1) list_double_cale_preview_pane_t_ParamLimits

0xfbc7,	// (0x000a76f1) list_double_cale_preview_pane_t

0xaa49,	// (0x000a2573) main_ezdial_pane

0xbf15,	// (0x000a3a3f) main_sp_fs_email_pane_ParamLimits

0x712a,	// (0x0009ec54) cmail_ddmenu_btn01_pane_ParamLimits

0x712a,	// (0x0009ec54) cmail_ddmenu_btn01_pane

0x713d,	// (0x0009ec67) cmail_ddmenu_btn02_pane_ParamLimits

0x713d,	// (0x0009ec67) cmail_ddmenu_btn02_pane

0x7160,	// (0x0009ec8a) cmail_ddmenu_btn03_pane_ParamLimits

0x7160,	// (0x0009ec8a) cmail_ddmenu_btn03_pane

0x71f9,	// (0x0009ed23) main_sp_fs_ctrlbar_pane_ParamLimits

0x721d,	// (0x0009ed47) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7625,	// (0x0009f14f) list_cmail_body_pane_ParamLimits

0xb3fe,	// (0x000a2f28) bg_button_pane_cp12

0xb407,	// (0x000a2f31) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb407,	// (0x000a2f31) list_single_cmail_header_detail_pane_g3

0x76e2,	// (0x0009f20c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x76e2,	// (0x0009f20c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb89,	// (0x000a76b3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb89,	// (0x000a76b3) list_single_cmail_header_detail_pane_t

0x77fc,	// (0x0009f326) phacti_term_pane_t2_ParamLimits

0x77fc,	// (0x0009f326) phacti_term_pane_t2

0x0001,

0xfb8e,	// (0x000a76b8) phacti_term_pane_t_ParamLimits

0xfb8e,	// (0x000a76b8) phacti_term_pane_t

0xb68d,	// (0x000a31b7) aid_size_list_single_double

0x7b94,	// (0x0009f6be) popup_ezdial_listscroll_window

0xb699,	// (0x000a31c3) popup_number_entry_window_cp01

0xc6ed,	// (0x000a4217) bg_popup_call_pane_cp09

0xb6a6,	// (0x000a31d0) ezdial_list_pane

0xb6ae,	// (0x000a31d8) scroll_pane_cp23

0xd227,	// (0x000a4d51) bg_button_pane_cp028_ParamLimits

0xd227,	// (0x000a4d51) bg_button_pane_cp028

0x7bab,	// (0x0009f6d5) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7bab,	// (0x0009f6d5) cmail_ddmenu_btn01_pane_g1

0x7bb7,	// (0x0009f6e1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7bb7,	// (0x0009f6e1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfbcc,	// (0x000a76f6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfbcc,	// (0x000a76f6) cmail_ddmenu_btn01_pane_g

0xb6b6,	// (0x000a31e0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb6b6,	// (0x000a31e0) cmail_ddmenu_btn01_pane_t1

0xd227,	// (0x000a4d51) bg_button_pane_cp029_ParamLimits

0xd227,	// (0x000a4d51) bg_button_pane_cp029

0x7bc3,	// (0x0009f6ed) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7bc3,	// (0x0009f6ed) cmail_ddmenu_btn02_pane_g1

0x7bdb,	// (0x0009f705) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7bdb,	// (0x0009f705) cmail_ddmenu_btn02_pane_t1

0xbf15,	// (0x000a3a3f) bg_button_pane_cp031_ParamLimits

0xbf15,	// (0x000a3a3f) bg_button_pane_cp031

0x7bc3,	// (0x0009f6ed) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7bc3,	// (0x0009f6ed) cmail_ddmenu_btn03_pane_g1

0x7bdb,	// (0x0009f705) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7bdb,	// (0x0009f705) cmail_ddmenu_btn03_pane_t1

0xc449,	// (0x000a3f73) cell_dialer2_keypad_pane_t1_ParamLimits

0xee8d,	// (0x000a69b7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xee8d,	// (0x000a69b7) cell_dialer2_keypad_pane_t1_copy1

0x6b6b,	// (0x0009e695) ncimui_group_button_pane

0xbf15,	// (0x000a3a3f) main_sp_fs_calendar_pane_ParamLimits

0x763b,	// (0x0009f165) list_single_cmail_header_caption_pane_ParamLimits

0x782f,	// (0x0009f359) aid_recal_txt_sm_pane

0xaa49,	// (0x000a2573) mian_recal_day_pane

0x78ac,	// (0x0009f3d6) popup_sp_fs_cale_preview_window_ParamLimits

0xb6cb,	// (0x000a31f5) list_recal_day_pane

0x7c1a,	// (0x0009f744) list_single_recal_day_pane_ParamLimits

0x7c1a,	// (0x0009f744) list_single_recal_day_pane

0xb6f2,	// (0x000a321c) list_single_recal_day_pane_g1_ParamLimits

0xb6f2,	// (0x000a321c) list_single_recal_day_pane_g1

0x7c2c,	// (0x0009f756) list_single_recal_day_pane_g2_ParamLimits

0x7c2c,	// (0x0009f756) list_single_recal_day_pane_g2

0x7c38,	// (0x0009f762) list_single_recal_day_pane_g3_ParamLimits

0x7c38,	// (0x0009f762) list_single_recal_day_pane_g3

0x7c44,	// (0x0009f76e) list_single_recal_day_pane_g4_ParamLimits

0x7c44,	// (0x0009f76e) list_single_recal_day_pane_g4

0x7c52,	// (0x0009f77c) list_single_recal_day_pane_g5_ParamLimits

0x7c52,	// (0x0009f77c) list_single_recal_day_pane_g5

0x7c68,	// (0x0009f792) list_single_recal_day_pane_g6_ParamLimits

0x7c68,	// (0x0009f792) list_single_recal_day_pane_g6

0x0004,

0xfbdb,	// (0x000a7705) list_single_recal_day_pane_g_ParamLimits

0xfbdb,	// (0x000a7705) list_single_recal_day_pane_g

0x7c7c,	// (0x0009f7a6) list_single_recal_day_pane_t1

0x7c8e,	// (0x0009f7b8) list_single_recal_day_pane_t2

0x0001,

0xfbe6,	// (0x000a7710) list_single_recal_day_pane_t

0x7ca0,	// (0x0009f7ca) ncimui_query_button_pane_ParamLimits

0x7ca0,	// (0x0009f7ca) ncimui_query_button_pane

0x7cb0,	// (0x0009f7da) ncimui_query_button_pane_t1_ParamLimits

0x7cb0,	// (0x0009f7da) ncimui_query_button_pane_t1

0xb6fe,	// (0x000a3228) ncimui_query_button_pane_t2_ParamLimits

0xb6fe,	// (0x000a3228) ncimui_query_button_pane_t2

0x0001,

0xfbeb,	// (0x000a7715) ncimui_query_button_pane_t_ParamLimits

0xfbeb,	// (0x000a7715) ncimui_query_button_pane_t

0x7cc3,	// (0x0009f7ed) query_button_pane_ParamLimits

0x7cc3,	// (0x0009f7ed) query_button_pane

0xaa49,	// (0x000a2573) bg_button_pane_cp0028

0xb711,	// (0x000a323b) query_button_pane_t1

0x3352,	// (0x0009ae7c) main_tport_pane_ParamLimits

0x74e9,	// (0x0009f013) bg_popup_window_pane_cp01_ParamLimits

0x74e9,	// (0x0009f013) bg_popup_window_pane_cp01

0x7504,	// (0x0009f02e) heading_pane_cp08_ParamLimits

0x7504,	// (0x0009f02e) heading_pane_cp08

0x7517,	// (0x0009f041) heading_pane_cp07_ParamLimits

0x7517,	// (0x0009f041) heading_pane_cp07

0x75be,	// (0x0009f0e8) cell_tport_appsw_pane_g2

0x0002,

0xfb76,	// (0x000a76a0) cell_tport_appsw_pane_g

0xd260,	// (0x000a4d8a) input_candi_list_open_g1

0xcac9,	// (0x000a45f3) list_cale_time_pane_g6_ParamLimits

0xcac9,	// (0x000a45f3) list_cale_time_pane_g6

0x396d,	// (0x0009b497) aid_size_touch_calib_1_ParamLimits

0x396d,	// (0x0009b497) aid_size_touch_calib_1

0x397f,	// (0x0009b4a9) aid_size_touch_calib_2_ParamLimits

0x397f,	// (0x0009b4a9) aid_size_touch_calib_2

0x3997,	// (0x0009b4c1) aid_size_touch_calib_3_ParamLimits

0x3997,	// (0x0009b4c1) aid_size_touch_calib_3

0x39b5,	// (0x0009b4df) aid_size_touch_calib_4_ParamLimits

0x39b5,	// (0x0009b4df) aid_size_touch_calib_4

0x39cd,	// (0x0009b4f7) main_touch_calib_button_group_pane_ParamLimits

0x39cd,	// (0x0009b4f7) main_touch_calib_button_group_pane

0x39e5,	// (0x0009b50f) main_touch_calib_pane_g1_ParamLimits

0x39f7,	// (0x0009b521) main_touch_calib_pane_g2_ParamLimits

0x3a09,	// (0x0009b533) main_touch_calib_pane_g3_ParamLimits

0x3a1b,	// (0x0009b545) main_touch_calib_pane_g4_ParamLimits

0xf669,	// (0x000a7193) main_touch_calib_pane_g_ParamLimits

0x3a2d,	// (0x0009b557) main_touch_calib_pane_t1_ParamLimits

0x3a47,	// (0x0009b571) main_touch_calib_pane_t2_ParamLimits

0x3a61,	// (0x0009b58b) main_touch_calib_pane_t3_ParamLimits

0x3a75,	// (0x0009b59f) main_touch_calib_pane_t4_ParamLimits

0x3a89,	// (0x0009b5b3) main_touch_calib_pane_t5_ParamLimits

0xf672,	// (0x000a719c) main_touch_calib_pane_t_ParamLimits

0xec7d,	// (0x000a67a7) list_single_fp_cale_pane_g3_ParamLimits

0xec7d,	// (0x000a67a7) list_single_fp_cale_pane_g3

0x9dd4,	// (0x000a18fe) bg_button_pane_cp012_ParamLimits

0x9dd4,	// (0x000a18fe) bg_vkb2_func_pane_cp03_ParamLimits

0x5b67,	// (0x0009d691) cell_vitu2_function_top_pane_g1_ParamLimits

0x9dd4,	// (0x000a18fe) bg_vkb2_func_pane_cp04_ParamLimits

0x6af6,	// (0x0009e620) main_ncimui_button_group_pane_ParamLimits

0x6af6,	// (0x0009e620) main_ncimui_button_group_pane

0x6b56,	// (0x0009e680) main_ncimui_pane_t3_ParamLimits

0x6b56,	// (0x0009e680) main_ncimui_pane_t3

0xb4a0,	// (0x000a2fca) phacti_button_group_pane

0xb68d,	// (0x000a31b7) aid_size_list_single_double_ParamLimits

0x7b94,	// (0x0009f6be) popup_ezdial_listscroll_window_ParamLimits

0xb699,	// (0x000a31c3) popup_number_entry_window_cp01_ParamLimits

0x7cd6,	// (0x0009f800) phacti_button_pane_ParamLimits

0x7cd6,	// (0x0009f800) phacti_button_pane

0xaa49,	// (0x000a2573) bg_button_pane_cp14

0xb71f,	// (0x000a3249) phacti_button_pane_t1

0x7ce7,	// (0x0009f811) main_touch_calib_button_pane_ParamLimits

0x7ce7,	// (0x0009f811) main_touch_calib_button_pane

0xc49d,	// (0x000a3fc7) bg_button_pane_cp18_ParamLimits

0xc49d,	// (0x000a3fc7) bg_button_pane_cp18

0xb72d,	// (0x000a3257) main_touch_calib_button_pane_t1_ParamLimits

0xb72d,	// (0x000a3257) main_touch_calib_button_pane_t1

0xb743,	// (0x000a326d) main_touch_calib_button_pane_t2_ParamLimits

0xb743,	// (0x000a326d) main_touch_calib_button_pane_t2

0x0001,

0x0727,	// (0x00098251) main_touch_calib_button_pane_t_ParamLimits

0x0727,	// (0x00098251) main_touch_calib_button_pane_t

0xaa49,	// (0x000a2573) cell_ncimui_button_pane

0xaa49,	// (0x000a2573) bg_button_pane_cp032

0xb761,	// (0x000a328b) cell_ncimui_button_pane_t1

0xa366,	// (0x000a1e90) image3_infobar_pane_ParamLimits

0xa366,	// (0x000a1e90) image3_infobar_pane

0x6ec8,	// (0x0009e9f2) fs_bigclock_status_pane_ParamLimits

0x6ec8,	// (0x0009e9f2) fs_bigclock_status_pane

0x6ed5,	// (0x0009e9ff) main_fs_bigclock_clock_pane_ParamLimits

0x6ed5,	// (0x0009e9ff) main_fs_bigclock_clock_pane

0x6ef3,	// (0x0009ea1d) main_fs_bigclock_indi_pane_ParamLimits

0x6ef3,	// (0x0009ea1d) main_fs_bigclock_indi_pane

0x6f25,	// (0x0009ea4f) main_fs_bigclock_swipe_pane_ParamLimits

0x6f25,	// (0x0009ea4f) main_fs_bigclock_swipe_pane

0xaa49,	// (0x000a2573) main_fs_clock_dumped_data

0xb008,	// (0x000a2b32) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb008,	// (0x000a2b32) list_single_fs_bigclock_indicator_pane_g1

0xb024,	// (0x000a2b4e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb024,	// (0x000a2b4e) list_single_fs_bigclock_indicator_pane_g2

0xb03e,	// (0x000a2b68) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb03e,	// (0x000a2b68) list_single_fs_bigclock_indicator_pane_g3

0xb058,	// (0x000a2b82) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb058,	// (0x000a2b82) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x05c3,	// (0x000980ed) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x05c3,	// (0x000980ed) list_single_fs_bigclock_indicator_pane_g

0xb083,	// (0x000a2bad) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb083,	// (0x000a2bad) list_single_fs_bigclock_indicator_pane_t1

0xb0ab,	// (0x000a2bd5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb0ab,	// (0x000a2bd5) list_single_fs_bigclock_indicator_pane_t2

0xb0d3,	// (0x000a2bfd) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb0d3,	// (0x000a2bfd) list_single_fs_bigclock_indicator_pane_t3

0xb0fb,	// (0x000a2c25) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb0fb,	// (0x000a2c25) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x05ce,	// (0x000980f8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x05ce,	// (0x000980f8) list_single_fs_bigclock_indicator_pane_t

0xb76f,	// (0x000a3299) image3_infobar_fav_pane_ParamLimits

0xb76f,	// (0x000a3299) image3_infobar_fav_pane

0xb77f,	// (0x000a32a9) image3_infobar_loc_pane_ParamLimits

0xb77f,	// (0x000a32a9) image3_infobar_loc_pane

0xb793,	// (0x000a32bd) image3_infobar_time_pane_ParamLimits

0xb793,	// (0x000a32bd) image3_infobar_time_pane

0xc43f,	// (0x000a3f69) image3_infobar_time_pane_g1

0xb7a3,	// (0x000a32cd) image3_infobar_time_pane_t1

0xc43f,	// (0x000a3f69) image3_infobar_loc_pane_g1

0xb7b1,	// (0x000a32db) image3_infobar_loc_pane_g2

0x0001,

0xfbf0,	// (0x000a771a) image3_infobar_loc_pane_g

0xb7b9,	// (0x000a32e3) image3_infobar_loc_pane_t1

0xc43f,	// (0x000a3f69) image3_infobar_fav_pane_g1

0xb7c7,	// (0x000a32f1) image3_infobar_fav_pane_g2

0x0001,

0xfbf5,	// (0x000a771f) image3_infobar_fav_pane_g

0xb7cf,	// (0x000a32f9) fs_bigclock_status_battery_pane

0xb7d8,	// (0x000a3302) fs_bigclock_status_signal_pane

0xb7e1,	// (0x000a330b) fs_bigclock_status_title_pane

0xb7ea,	// (0x000a3314) fs_bigclock_status_signal_pane_g1

0xb7f3,	// (0x000a331d) fs_bigclock_status_signal_pane_g2

0x0001,

0x0736,	// (0x00098260) fs_bigclock_status_signal_pane_g

0xb7fb,	// (0x000a3325) fs_bigclock_status_battery_pane_g1

0xb804,	// (0x000a332e) fs_bigclock_status_battery_pane_g2

0x0001,

0x073b,	// (0x00098265) fs_bigclock_status_battery_pane_g

0xb80c,	// (0x000a3336) fs_bigclock_status_title_pane_t1

0x7cfc,	// (0x0009f826) main_fs_bigclock_clock_pane_g1

0x7cfc,	// (0x0009f826) main_fs_bigclock_clock_pane_g2

0x7d0d,	// (0x0009f837) main_fs_bigclock_clock_pane_g3

0x7d0d,	// (0x0009f837) main_fs_bigclock_clock_pane_g4

0x0003,

0xfbfa,	// (0x000a7724) main_fs_bigclock_clock_pane_g

0x7d20,	// (0x0009f84a) main_fs_bigclock_clock_pane_t1

0x7d36,	// (0x0009f860) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc03,	// (0x000a772d) main_fs_bigclock_clock_pane_t

0xb81a,	// (0x000a3344) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb81a,	// (0x000a3344) list_single_fs_bigclock_indicator_pane

0xb82b,	// (0x000a3355) list_single_fs_bigclock_pane_ParamLimits

0xb82b,	// (0x000a3355) list_single_fs_bigclock_pane

0xb851,	// (0x000a337b) main_fs_bigclock_indicator_pane_t1

0xb860,	// (0x000a338a) list_single_fs_bigclock_pane_g1

0xb868,	// (0x000a3392) list_single_fs_bigclock_pane_t1

0xc43f,	// (0x000a3f69) main_fs_bigclock_swipe_pane_g1

0xb8ab,	// (0x000a33d5) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfc0f,	// (0x000a7739) main_fs_bigclock_swipe_pane_g

0xb8b3,	// (0x000a33dd) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb8b3,	// (0x000a33dd) main_fs_bigclock_swipe_pane_t1

0x24e2,	// (0x0009a00c) call_type_pane_ParamLimits

0xaa49,	// (0x000a2573) main_btmg_pane

0x79b3,	// (0x0009f4dd) list_single_cale_mrui_row_pane_g2_ParamLimits

0x79b3,	// (0x0009f4dd) list_single_cale_mrui_row_pane_g2

0x0002,

0xfbb2,	// (0x000a76dc) list_single_cale_mrui_row_pane_g_ParamLimits

0xfbb2,	// (0x000a76dc) list_single_cale_mrui_row_pane_g

0x7c09,	// (0x0009f733) list_recal_vselct_arw_lo_pane

0xb6ea,	// (0x000a3214) list_recal_vselct_arw_up_pane

0x7c11,	// (0x0009f73b) list_recal_vselct_pane

0x7d90,	// (0x0009f8ba) btmg_button_pane

0x7d9a,	// (0x0009f8c4) main_btmg_pane_g1

0xaa49,	// (0x000a2573) bg_button_pane_cp044

0xb8d0,	// (0x000a33fa) btmg_button_pane_t1

0xe47c,	// (0x000a5fa6) aid_listscroll_gen

0xbf15,	// (0x000a3a3f) main_cntbar_detail_pane

0xb3d1,	// (0x000a2efb) list_cmail_folder_pane

0x9eb2,	// (0x000a19dc) sp_fs_scroll_pane_cp03_ParamLimits

0x7da4,	// (0x0009f8ce) list_single_fs_dyc_pane_cp01_ParamLimits

0x7da4,	// (0x0009f8ce) list_single_fs_dyc_pane_cp01

0xb8de,	// (0x000a3408) aid_size_cmail_indent

0x7dba,	// (0x0009f8e4) list_single_dyc_row_pane_cp01

0x7df5,	// (0x0009f91f) cntbar_detail_list_pane_ParamLimits

0x7df5,	// (0x0009f91f) cntbar_detail_list_pane

0x7e41,	// (0x0009f96b) main_cntbar_detail_cont_pane_ParamLimits

0x7e41,	// (0x0009f96b) main_cntbar_detail_cont_pane

0x9eb2,	// (0x000a19dc) scroll_pane_cp032_ParamLimits

0x9eb2,	// (0x000a19dc) scroll_pane_cp032

0x7e55,	// (0x0009f97f) cntbar_detail_list_event_pane_ParamLimits

0x7e55,	// (0x0009f97f) cntbar_detail_list_event_pane

0x7e05,	// (0x0009f92f) cntbar_detail_list_shct_pane

0xc954,	// (0x000a447e) aid_list_gen

0xb8e7,	// (0x000a3411) aid_scroll

0xb8f0,	// (0x000a341a) aid_size_touch_scroll_bar

0x6f72,	// (0x0009ea9c) aid_list_double

0x7e65,	// (0x0009f98f) aid_list_single

0xb8f9,	// (0x000a3423) aid_list_single_lg

0x7e6e,	// (0x0009f998) aid_list_z_g_a_sm

0x7e76,	// (0x0009f9a0) aid_list_z_g_d

0x7e7e,	// (0x0009f9a8) aid_txt_z_prm

0x7e8c,	// (0x0009f9b6) aid_txt_z_prm_cp01

0x7e9a,	// (0x0009f9c4) aid_txt_z_sec

0x7ea8,	// (0x0009f9d2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x7ea8,	// (0x0009f9d2) main_cntbar_detail_cont_pane_g1

0x7ebc,	// (0x0009f9e6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7ebc,	// (0x0009f9e6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfc14,	// (0x000a773e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfc14,	// (0x000a773e) main_cntbar_detail_cont_pane_g

0xb902,	// (0x000a342c) main_cntbar_detail_cont_pane_t1

0xb910,	// (0x000a343a) main_cntbar_detail_cont_pane_t2

0xb91e,	// (0x000a3448) main_cntbar_detail_cont_pane_t3

0x0002,

0x0764,	// (0x0009828e) main_cntbar_detail_cont_pane_t

0x7ecc,	// (0x0009f9f6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7ecc,	// (0x0009f9f6) cell_cntbar_detail_list_shct_pane

0xb92c,	// (0x000a3456) cntbar_detail_list_shct_pane_g1

0xb935,	// (0x000a345f) cntbar_detail_list_shct_pane_g2

0x0001,

0x076b,	// (0x00098295) cntbar_detail_list_shct_pane_g

0x7ee0,	// (0x0009fa0a) cntbar_detail_list_event_pane_g1_ParamLimits

0x7ee0,	// (0x0009fa0a) cntbar_detail_list_event_pane_g1

0x7eec,	// (0x0009fa16) cntbar_detail_list_event_pane_g2_ParamLimits

0x7eec,	// (0x0009fa16) cntbar_detail_list_event_pane_g2

0x0005,

0xfc19,	// (0x000a7743) cntbar_detail_list_event_pane_g_ParamLimits

0xfc19,	// (0x000a7743) cntbar_detail_list_event_pane_g

0x7f58,	// (0x0009fa82) cntbar_detail_list_event_pane_t1_ParamLimits

0x7f58,	// (0x0009fa82) cntbar_detail_list_event_pane_t1

0x7f6d,	// (0x0009fa97) cntbar_detail_list_event_pane_t2_ParamLimits

0x7f6d,	// (0x0009fa97) cntbar_detail_list_event_pane_t2

0x0002,

0xfc26,	// (0x000a7750) cntbar_detail_list_event_pane_t_ParamLimits

0xfc26,	// (0x000a7750) cntbar_detail_list_event_pane_t

0xc43f,	// (0x000a3f69) cell_cntbar_detail_list_shct_pane_g1

0xd0a4,	// (0x000a4bce) navi_pane_mv_g3

0xbf15,	// (0x000a3a3f) main_cntbar_detail_pane_ParamLimits

0xaa49,	// (0x000a2573) main_notif_wgt_pane

0xa0e6,	// (0x000a1c10) aid_tch_main_mp4_pane_g4

0xa35e,	// (0x000a1e88) popup_slider_window_cp02

0x7bff,	// (0x0009f729) list_recal_day_event_pane

0x7dc3,	// (0x0009f8ed) cntbar_detail_btn_pane_ParamLimits

0x7dc3,	// (0x0009f8ed) cntbar_detail_btn_pane

0x7ddc,	// (0x0009f906) cntbar_detail_btn_pane_cp01_ParamLimits

0x7ddc,	// (0x0009f906) cntbar_detail_btn_pane_cp01

0x7e05,	// (0x0009f92f) cntbar_detail_list_shct_pane_ParamLimits

0x7e15,	// (0x0009f93f) cntbar_detail_pane_g1_ParamLimits

0x7e15,	// (0x0009f93f) cntbar_detail_pane_g1

0x7e25,	// (0x0009f94f) cntbar_detail_pane_t1_ParamLimits

0x7e25,	// (0x0009f94f) cntbar_detail_pane_t1

0x7ef8,	// (0x0009fa22) cntbar_detail_list_event_pane_g3_ParamLimits

0x7ef8,	// (0x0009fa22) cntbar_detail_list_event_pane_g3

0x7f10,	// (0x0009fa3a) cntbar_detail_list_event_pane_g4_ParamLimits

0x7f10,	// (0x0009fa3a) cntbar_detail_list_event_pane_g4

0x7f28,	// (0x0009fa52) cntbar_detail_list_event_pane_g5_ParamLimits

0x7f28,	// (0x0009fa52) cntbar_detail_list_event_pane_g5

0x7f40,	// (0x0009fa6a) cntbar_detail_list_event_pane_g6_ParamLimits

0x7f40,	// (0x0009fa6a) cntbar_detail_list_event_pane_g6

0x7f82,	// (0x0009faac) cntbar_detail_list_event_pane_t3_ParamLimits

0x7f82,	// (0x0009faac) cntbar_detail_list_event_pane_t3

0x7f94,	// (0x0009fabe) popup_notif_wgt_window_ParamLimits

0x7f94,	// (0x0009fabe) popup_notif_wgt_window

0x7fad,	// (0x0009fad7) popup_submenu_window_cp01_ParamLimits

0x7fad,	// (0x0009fad7) popup_submenu_window_cp01

0xc6ed,	// (0x000a4217) bg_popup_window_pane_cp10

0xb93e,	// (0x000a3468) listscroll_notif_wgt_pane

0xb950,	// (0x000a347a) list_notif_wgt_window

0xb959,	// (0x000a3483) scroll_pane_cp033

0x7fbf,	// (0x0009fae9) list_notif_wgt_row_pane_ParamLimits

0x7fbf,	// (0x0009fae9) list_notif_wgt_row_pane

0xb962,	// (0x000a348c) aid_size_list_notif_wgt_del

0xb96f,	// (0x000a3499) list_notif_wgt_row_pane_g1

0xb97b,	// (0x000a34a5) list_notif_wgt_row_pane_g2

0xb98a,	// (0x000a34b4) list_notif_wgt_row_pane_g3

0x0002,

0x0784,	// (0x000982ae) list_notif_wgt_row_pane_g

0xb997,	// (0x000a34c1) list_notif_wgt_row_pane_t1

0xb9ad,	// (0x000a34d7) list_notif_wgt_row_pane_t2

0xb9bf,	// (0x000a34e9) list_notif_wgt_row_pane_t3

0x0002,

0x078b,	// (0x000982b5) list_notif_wgt_row_pane_t

0x5c0d,	// (0x0009d737) list_recal_day_event_pane_g1

0xb9d1,	// (0x000a34fb) list_recal_day_event_pane_t1

0xaa49,	// (0x000a2573) bg_button_pane_cp045

0x7fcf,	// (0x0009faf9) cntbar_detail_btn_pane_t1

0xd227,	// (0x000a4d51) main_callh_pane_ParamLimits

0xd227,	// (0x000a4d51) main_callh_pane

0xaa49,	// (0x000a2573) main_coverflow0_pane

0xaa49,	// (0x000a2573) main_wgtman_pane

0x6f3d,	// (0x0009ea67) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6f3d,	// (0x0009ea67) main_fs_bigclock_unlock_btn_pane

0x75b6,	// (0x0009f0e0) bg_button_pane_cp16

0x75c6,	// (0x0009f0f0) cell_tport_appsw_pane_g3

0x7fdd,	// (0x0009fb07) cf0_flow_pane_ParamLimits

0x7fdd,	// (0x0009fb07) cf0_flow_pane

0xb9e0,	// (0x000a350a) listscroll_cf0_pane

0xb9eb,	// (0x000a3515) main_cf0_pane_g1

0x7ff2,	// (0x0009fb1c) main_cf0_pane_t1_ParamLimits

0x7ff2,	// (0x0009fb1c) main_cf0_pane_t1

0x8009,	// (0x0009fb33) main_cf0_pane_t2_ParamLimits

0x8009,	// (0x0009fb33) main_cf0_pane_t2

0x0001,

0xfc2d,	// (0x000a7757) main_cf0_pane_t_ParamLimits

0xfc2d,	// (0x000a7757) main_cf0_pane_t

0xb9fd,	// (0x000a3527) scroll_pane_cp11

0x8020,	// (0x0009fb4a) cf0_flow_pane_g1

0x8028,	// (0x0009fb52) cf0_flow_pane_g2

0x0001,

0xfc32,	// (0x000a775c) cf0_flow_pane_g

0x8030,	// (0x0009fb5a) cf0_flow_pane_t1

0xaa49,	// (0x000a2573) main_call6_pane

0xaa49,	// (0x000a2573) main_calllock_pane

0x803e,	// (0x0009fb68) call6_btn_grp_pane_ParamLimits

0x803e,	// (0x0009fb68) call6_btn_grp_pane

0x8058,	// (0x0009fb82) call6_pane_g1_ParamLimits

0x8058,	// (0x0009fb82) call6_pane_g1

0x806e,	// (0x0009fb98) popup_call6_1st_window_ParamLimits

0x806e,	// (0x0009fb98) popup_call6_1st_window

0x807f,	// (0x0009fba9) popup_call6_2nd_window_ParamLimits

0x807f,	// (0x0009fba9) popup_call6_2nd_window

0x8090,	// (0x0009fbba) cell_call6_btn_pane_ParamLimits

0x8090,	// (0x0009fbba) cell_call6_btn_pane

0xc6ed,	// (0x000a4217) bg_popup_call2_in_pane_cp03

0xba08,	// (0x000a3532) popup_call6_1st_window_g1

0xba10,	// (0x000a353a) popup_call6_1st_window_g2

0xba18,	// (0x000a3542) popup_call6_1st_window_g3

0x0002,

0x07a1,	// (0x000982cb) popup_call6_1st_window_g

0xba20,	// (0x000a354a) popup_call6_1st_window_t1

0xba2f,	// (0x000a3559) popup_call6_1st_window_t2

0xba3d,	// (0x000a3567) popup_call6_1st_window_t3

0x0002,

0x07a8,	// (0x000982d2) popup_call6_1st_window_t

0xc6ed,	// (0x000a4217) bg_popup_call2_in_pane_cp04

0xba4b,	// (0x000a3575) popup_call6_2nd_window_g1

0xba53,	// (0x000a357d) popup_call6_2nd_window_g2

0xba5b,	// (0x000a3585) popup_call6_2nd_window_g3

0x0002,

0x07af,	// (0x000982d9) popup_call6_2nd_window_g

0xba63,	// (0x000a358d) popup_call6_2nd_window_t1

0x9de2,	// (0x000a190c) bg_button_pane_cp15

0xaa23,	// (0x000a254d) cell_call6_btn_pane_g1

0xaa2c,	// (0x000a2556) cell_call6_btn_pane_t1

0x80a4,	// (0x0009fbce) listscroll_wgtman_pane_ParamLimits

0x80a4,	// (0x0009fbce) listscroll_wgtman_pane

0x80c5,	// (0x0009fbef) wgtman_btn_pane_ParamLimits

0x80c5,	// (0x0009fbef) wgtman_btn_pane

0xceb8,	// (0x000a49e2) aid_scroll_copy1

0xba72,	// (0x000a359c) list_wgtman_pane

0x8108,	// (0x0009fc32) wgtman_btn_pane_g1_ParamLimits

0x8108,	// (0x0009fc32) wgtman_btn_pane_g1

0x8134,	// (0x0009fc5e) wgtman_btn_pane_t1_ParamLimits

0x8134,	// (0x0009fc5e) wgtman_btn_pane_t1

0xba7c,	// (0x000a35a6) wgtman_btn_pane_t2_ParamLimits

0xba7c,	// (0x000a35a6) wgtman_btn_pane_t2

0x0001,

0xfc37,	// (0x000a7761) wgtman_btn_pane_t_ParamLimits

0xfc37,	// (0x000a7761) wgtman_btn_pane_t

0x8171,	// (0x0009fc9b) listrow_wgtman_pane_ParamLimits

0x8171,	// (0x0009fc9b) listrow_wgtman_pane

0x8184,	// (0x0009fcae) listrow_wgtman_pane_g1

0x8191,	// (0x0009fcbb) listrow_wgtman_pane_g2

0x0001,

0xfc3c,	// (0x000a7766) listrow_wgtman_pane_g

0x81af,	// (0x0009fcd9) listrow_wgtman_pane_t1

0x81c7,	// (0x0009fcf1) listrow_wgtman_pane_t2

0x0001,

0xfc41,	// (0x000a776b) listrow_wgtman_pane_t

0x81ed,	// (0x0009fd17) wait_bar_pane_cp09

0xba93,	// (0x000a35bd) main_calllock_btn_pane

0xba9d,	// (0x000a35c7) main_calllock_pane_g1

0xaa49,	// (0x000a2573) bg_button_pane_cp17

0xbaa5,	// (0x000a35cf) main_calllock_btn_pane_g1

0xbaae,	// (0x000a35d8) main_calllock_btn_pane_t1

0xaa49,	// (0x000a2573) main_dialer3_pane

0xaa49,	// (0x000a2573) main_fmrd2_pane

0xc43f,	// (0x000a3f69) main_fs_bigclock_unlock_btn_pane_g1

0x8207,	// (0x0009fd31) main_fs_bigclock_unlock_btn_pane_t1

0x8215,	// (0x0009fd3f) area_fmrd2_info_pane_ParamLimits

0x8215,	// (0x0009fd3f) area_fmrd2_info_pane

0x8226,	// (0x0009fd50) area_fmrd2_visual_pane_ParamLimits

0x8226,	// (0x0009fd50) area_fmrd2_visual_pane

0x8234,	// (0x0009fd5e) fmrd2_indi_pane_ParamLimits

0x8234,	// (0x0009fd5e) fmrd2_indi_pane

0x8241,	// (0x0009fd6b) area_fmrd2_visual_pane_g1

0x8249,	// (0x0009fd73) area_fmrd2_visual_pane_t1

0x8259,	// (0x0009fd83) area_fmrd2_visual_pane_t2

0x8269,	// (0x0009fd93) area_fmrd2_visual_pane_t3

0x0002,

0xfc4b,	// (0x000a7775) area_fmrd2_visual_pane_t

0x8279,	// (0x0009fda3) area_fmrd2_info_pane_g1

0x8281,	// (0x0009fdab) area_fmrd2_info_pane_t1

0x8291,	// (0x0009fdbb) area_fmrd2_info_pane_t2

0x82a1,	// (0x0009fdcb) area_fmrd2_info_pane_t3

0x82b1,	// (0x0009fddb) area_fmrd2_info_pane_t4

0x0003,

0xfc52,	// (0x000a777c) area_fmrd2_info_pane_t

0x82bf,	// (0x0009fde9) fmrd2_indi_pane_t1

0x82cf,	// (0x0009fdf9) fmrd2_indi_pane_t2

0x82df,	// (0x0009fe09) fmrd2_indi_pane_t3

0x0002,

0xfc5b,	// (0x000a7785) fmrd2_indi_pane_t

0xb067,	// (0x000a2b91) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb067,	// (0x000a2b91) list_single_fs_bigclock_indicator_pane_g5

0xb118,	// (0x000a2c42) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb118,	// (0x000a2c42) list_single_fs_bigclock_indicator_pane_t5

0x7811,	// (0x0009f33b) aid_cell_bcale_month_pane_ParamLimits

0x7811,	// (0x0009f33b) aid_cell_bcale_month_pane

0x7838,	// (0x0009f362) bcale_month_pane_ParamLimits

0x7838,	// (0x0009f362) bcale_month_pane

0x785c,	// (0x0009f386) bcale_preview_pane_ParamLimits

0x785c,	// (0x0009f386) bcale_preview_pane

0xb868,	// (0x000a3392) list_single_fs_bigclock_pane_t1_ParamLimits

0xb887,	// (0x000a33b1) list_single_fs_bigclock_pane_t2_ParamLimits

0xb887,	// (0x000a33b1) list_single_fs_bigclock_pane_t2

0x0001,

0x0755,	// (0x0009827f) list_single_fs_bigclock_pane_t_ParamLimits

0x0755,	// (0x0009827f) list_single_fs_bigclock_pane_t

0x81ff,	// (0x0009fd29) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc46,	// (0x000a7770) main_fs_bigclock_unlock_btn_pane_g

0x82ef,	// (0x0009fe19) aid_dia3_key_size_ParamLimits

0x82ef,	// (0x0009fe19) aid_dia3_key_size

0x82fe,	// (0x0009fe28) aid_dia3_listrow_size_ParamLimits

0x82fe,	// (0x0009fe28) aid_dia3_listrow_size

0x8313,	// (0x0009fe3d) dia3_keypad_fun_pane_ParamLimits

0x8313,	// (0x0009fe3d) dia3_keypad_fun_pane

0x832f,	// (0x0009fe59) dia3_keypad_num_pane_ParamLimits

0x832f,	// (0x0009fe59) dia3_keypad_num_pane

0x834a,	// (0x0009fe74) dia3_listscroll_pane_ParamLimits

0x834a,	// (0x0009fe74) dia3_listscroll_pane

0x835d,	// (0x0009fe87) dia3_numentry_pane_ParamLimits

0x835d,	// (0x0009fe87) dia3_numentry_pane

0xbabd,	// (0x000a35e7) dia3_list_pane

0xbac8,	// (0x000a35f2) scroll_pane_cp12

0xaa49,	// (0x000a2573) bg_dia3_numentry_pane

0x8375,	// (0x0009fe9f) dia3_numentry_pane_t1

0x8384,	// (0x0009feae) cell_dia3_key_num_pane

0x838c,	// (0x0009feb6) cell_dia3_key0_fun_pane_ParamLimits

0x838c,	// (0x0009feb6) cell_dia3_key0_fun_pane

0x83a0,	// (0x0009feca) cell_dia3_key1_fun_pane_ParamLimits

0x83a0,	// (0x0009feca) cell_dia3_key1_fun_pane

0x83b8,	// (0x0009fee2) dia3_listrow_pane

0xadba,	// (0x000a28e4) bg_dia3_numentry_pane_g1

0xaa49,	// (0x000a2573) bg_button_pane_cp21

0xbad3,	// (0x000a35fd) cell_dia3_key_num_pane_t1

0xbae1,	// (0x000a360b) cell_dia3_key_num_pane_t2

0xbaf0,	// (0x000a361a) cell_dia3_key_num_pane_t3

0xbaff,	// (0x000a3629) cell_dia3_key_num_pane_t4

0x0003,

0x07e1,	// (0x0009830b) cell_dia3_key_num_pane_t

0xaa49,	// (0x000a2573) bg_button_pane_cp19

0x83ca,	// (0x0009fef4) cell_dia3_key0_fun_pane_g1

0xaa49,	// (0x000a2573) bg_button_pane_cp20

0x83d2,	// (0x0009fefc) cell_dia3_key1_fun_pane_g1

0x83da,	// (0x0009ff04) area_left_week_number_pane

0x83e6,	// (0x0009ff10) area_top_day_name_pane

0x83f9,	// (0x0009ff23) frame_month_view_pane

0xbb0e,	// (0x000a3638) grid_month_view_pane

0x840c,	// (0x0009ff36) cell_top_day_name_pane_ParamLimits

0x840c,	// (0x0009ff36) cell_top_day_name_pane

0x8439,	// (0x0009ff63) cell_area_left_week_number_pane_ParamLimits

0x8439,	// (0x0009ff63) cell_area_left_week_number_pane

0x844d,	// (0x0009ff77) cell_month_view_pane_ParamLimits

0x844d,	// (0x0009ff77) cell_month_view_pane

0xbb1c,	// (0x000a3646) frm_month_g1

0x847a,	// (0x0009ffa4) frm_month_g2

0x848d,	// (0x0009ffb7) frm_month_g3

0x84a0,	// (0x0009ffca) frm_month_g4

0x84b3,	// (0x0009ffdd) frm_month_g5

0x84c6,	// (0x0009fff0) frm_month_g6

0x84d9,	// (0x000a0003) frm_month_g7

0xbb29,	// (0x000a3653) frm_month_g8

0x84ec,	// (0x000a0016) frm_month_g9

0x84fc,	// (0x000a0026) frm_month_g10

0x850c,	// (0x000a0036) frm_month_g11

0x851c,	// (0x000a0046) frm_month_g12

0x852e,	// (0x000a0058) frm_month_g13

0x8540,	// (0x000a006a) frm_month_g14

0x8554,	// (0x000a007e) frm_month_g15

0x8568,	// (0x000a0092) frm_month_g16

0x000f,

0xfc62,	// (0x000a778c) frm_month_g

0xbb36,	// (0x000a3660) cell_top_day_name_pane_t1

0x857c,	// (0x000a00a6) cell_area_left_week_number_pane_g1

0x8588,	// (0x000a00b2) cell_area_left_week_number_pane_t1

0xc401,	// (0x000a3f2b) cell_month_view_pane_g1

0x859b,	// (0x000a00c5) cell_month_view_pane_t1

0xaa49,	// (0x000a2573) main_fps_pane

0xb2dc,	// (0x000a2e06) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xb2dc,	// (0x000a2e06) cmail_ddmenu_btn02_pane_cp1

0xb2f8,	// (0x000a2e22) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xb2f8,	// (0x000a2e22) cmail_ddmenu_btn02_pane_cp2

0x7bcf,	// (0x0009f6f9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7bcf,	// (0x0009f6f9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfbd1,	// (0x000a76fb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfbd1,	// (0x000a76fb) cmail_ddmenu_btn02_pane_g

0x7bed,	// (0x0009f717) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7bed,	// (0x0009f717) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfbd6,	// (0x000a7700) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfbd6,	// (0x000a7700) cmail_ddmenu_btn02_pane_t

0x85ae,	// (0x000a00d8) fps_text_pane_ParamLimits

0x85ae,	// (0x000a00d8) fps_text_pane

0x85c5,	// (0x000a00ef) main_fps_pane_g1_ParamLimits

0x85c5,	// (0x000a00ef) main_fps_pane_g1

0x85df,	// (0x000a0109) wait_bar_pane_cp010_ParamLimits

0x85df,	// (0x000a0109) wait_bar_pane_cp010

0x85f0,	// (0x000a011a) fps_text_pane_t1_ParamLimits

0x85f0,	// (0x000a011a) fps_text_pane_t1

0xbf23,	// (0x000a3a4d) cam4_image_uncrop_pane_g1

0xbf2c,	// (0x000a3a56) cam4_image_uncrop_pane_g2

0x4ddf,	// (0x0009c909) cam4_image_uncrop_pane_g3

0x4de8,	// (0x0009c912) cam4_image_uncrop_pane_g4

0x0003,

0xf7c6,	// (0x000a72f0) cam4_image_uncrop_pane_g

0x83b8,	// (0x0009fee2) dia3_listrow_pane_ParamLimits

0xaa49,	// (0x000a2573) main_phob2_pane

0x7587,	// (0x0009f0b1) cell_tport_appsw_pane_cp02_ParamLimits

0x7587,	// (0x0009f0b1) cell_tport_appsw_pane_cp02

0x759b,	// (0x0009f0c5) cell_tport_appsw_pane_cp03_ParamLimits

0x759b,	// (0x0009f0c5) cell_tport_appsw_pane_cp03

0xaa49,	// (0x000a2573) phob2_contact_card_pane

0xaa49,	// (0x000a2573) phob2_listscroll_pane

0xbb49,	// (0x000a3673) phob2_list_pane

0xb6ae,	// (0x000a31d8) scroll_pane_cp034

0x8608,	// (0x000a0132) phob2_cc_data_pane_ParamLimits

0x8608,	// (0x000a0132) phob2_cc_data_pane

0x8627,	// (0x000a0151) phob2_cc_listscroll_pane_ParamLimits

0x8627,	// (0x000a0151) phob2_cc_listscroll_pane

0x8171,	// (0x0009fc9b) list_double_large_graphic_phob2_pane_ParamLimits

0x8171,	// (0x0009fc9b) list_double_large_graphic_phob2_pane

0x8645,	// (0x000a016f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8645,	// (0x000a016f) list_double_large_graphic_phob2_pane_g1

0x8652,	// (0x000a017c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8652,	// (0x000a017c) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfc83,	// (0x000a77ad) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc83,	// (0x000a77ad) list_double_large_graphic_phob2_pane_g

0x8678,	// (0x000a01a2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8678,	// (0x000a01a2) list_double_large_graphic_phob2_pane_t1

0x868d,	// (0x000a01b7) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x868d,	// (0x000a01b7) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc8c,	// (0x000a77b6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc8c,	// (0x000a77b6) list_double_large_graphic_phob2_pane_t

0xaa49,	// (0x000a2573) list_highlight_pane_cp024

0xbf50,	// (0x000a3a7a) phob2_cc_button_pane

0x86a2,	// (0x000a01cc) phob2_cc_data_pane_g1_ParamLimits

0x86a2,	// (0x000a01cc) phob2_cc_data_pane_g1

0x86b9,	// (0x000a01e3) phob2_cc_data_pane_g2_ParamLimits

0x86b9,	// (0x000a01e3) phob2_cc_data_pane_g2

0x0001,

0xfc91,	// (0x000a77bb) phob2_cc_data_pane_g_ParamLimits

0xfc91,	// (0x000a77bb) phob2_cc_data_pane_g

0x86cb,	// (0x000a01f5) phob2_cc_data_pane_t1_ParamLimits

0x86cb,	// (0x000a01f5) phob2_cc_data_pane_t1

0x86e3,	// (0x000a020d) phob2_cc_data_pane_t2_ParamLimits

0x86e3,	// (0x000a020d) phob2_cc_data_pane_t2

0x86fb,	// (0x000a0225) phob2_cc_data_pane_t3_ParamLimits

0x86fb,	// (0x000a0225) phob2_cc_data_pane_t3

0x0002,

0xfc96,	// (0x000a77c0) phob2_cc_data_pane_t_ParamLimits

0xfc96,	// (0x000a77c0) phob2_cc_data_pane_t

0xbf58,	// (0x000a3a82) phob2_cc_list_pane_ParamLimits

0xbf58,	// (0x000a3a82) phob2_cc_list_pane

0xaa99,	// (0x000a25c3) scroll_pane_cp035_ParamLimits

0xaa99,	// (0x000a25c3) scroll_pane_cp035

0xbf15,	// (0x000a3a3f) bg_button_pane_cp033

0xbf64,	// (0x000a3a8e) phob2_cc_button_pane_g1

0xbf70,	// (0x000a3a9a) phob2_cc_button_pane_t1

0xbf85,	// (0x000a3aaf) phob2_cc_button_pane_t2

0x0001,

0xfc9d,	// (0x000a77c7) phob2_cc_button_pane_t

0x8713,	// (0x000a023d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8713,	// (0x000a023d) list_double_large_graphic_phob2_cc_pane

0x8745,	// (0x000a026f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8745,	// (0x000a026f) list_double_large_graphic_phob2_cc_pane_g1

0x8751,	// (0x000a027b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8751,	// (0x000a027b) list_double_large_graphic_phob2_cc_pane_g2

0x875d,	// (0x000a0287) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x875d,	// (0x000a0287) list_double_large_graphic_phob2_cc_pane_g3

0x8769,	// (0x000a0293) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8769,	// (0x000a0293) list_double_large_graphic_phob2_cc_pane_g4

0x8775,	// (0x000a029f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8775,	// (0x000a029f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfca2,	// (0x000a77cc) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfca2,	// (0x000a77cc) list_double_large_graphic_phob2_cc_pane_g

0x8781,	// (0x000a02ab) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8781,	// (0x000a02ab) list_double_large_graphic_phob2_cc_pane_t1

0x87aa,	// (0x000a02d4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x87aa,	// (0x000a02d4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfcad,	// (0x000a77d7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfcad,	// (0x000a77d7) list_double_large_graphic_phob2_cc_pane_t

0xbf97,	// (0x000a3ac1) list_highlight_pane_cp025_ParamLimits

0xbf97,	// (0x000a3ac1) list_highlight_pane_cp025

0xbf15,	// (0x000a3a3f) bg_button_pane_cp033_ParamLimits

0xbf64,	// (0x000a3a8e) phob2_cc_button_pane_g1_ParamLimits

0xbf70,	// (0x000a3a9a) phob2_cc_button_pane_t1_ParamLimits

0xbf85,	// (0x000a3aaf) phob2_cc_button_pane_t2_ParamLimits

0xfc9d,	// (0x000a77c7) phob2_cc_button_pane_t_ParamLimits

0x0bef,	// (0x00098719) popup_wgtman_window

0x565b,	// (0x0009d185) scroll_pane_cp038

0x80ea,	// (0x0009fc14) wgtman_btn_pane_cp_01_ParamLimits

0x80ea,	// (0x0009fc14) wgtman_btn_pane_cp_01

0xbfa5,	// (0x000a3acf) wgtman_content_pane

0xbfae,	// (0x000a3ad8) wgtman_heading_pane

0xaa49,	// (0x000a2573) bg_heading_pane_cp02

0xbfb7,	// (0x000a3ae1) wgtman_heading_pane_g1

0xbfbf,	// (0x000a3ae9) wgtman_heading_pane_t1

0xbfcd,	// (0x000a3af7) scroll_pane_cp036

0xbfd5,	// (0x000a3aff) wgtman_list_pane

0xbf35,	// (0x000a3a5f) wgtman_list_pane_t1_ParamLimits

0xbf35,	// (0x000a3a5f) wgtman_list_pane_t1

0xa3da,	// (0x000a1f04) cam4_grid_pane

0x5d2f,	// (0x0009d859) bg_button_pane_cp015_ParamLimits

0x5d40,	// (0x0009d86a) bg_button_pane_cp016_ParamLimits

0x5d4c,	// (0x0009d876) bg_button_pane_cp017_ParamLimits

0x5dac,	// (0x0009d8d6) popup_vitu2_query_window_g3_ParamLimits

0x5dac,	// (0x0009d8d6) popup_vitu2_query_window_g3

0x5e4d,	// (0x0009d977) popup_vitu2_query_window_t6_ParamLimits

0x5e4d,	// (0x0009d977) popup_vitu2_query_window_t6

0x5e78,	// (0x0009d9a2) popup_vitu2_query_window_t7_ParamLimits

0x5e78,	// (0x0009d9a2) popup_vitu2_query_window_t7

0xbf23,	// (0x000a3a4d) cam4_grid_pane_g1

0xbf2c,	// (0x000a3a56) cam4_grid_pane_g2

0xbfdd,	// (0x000a3b07) cam4_grid_pane_g3

0xbfe6,	// (0x000a3b10) cam4_grid_pane_g4

0x0003,

0xfcb2,	// (0x000a77dc) cam4_grid_pane_g

0x16a6,	// (0x000991d0) aid_placing_vt_slider_lsc_ParamLimits

0x19a3,	// (0x000994cd) vidtel_button_pane_ParamLimits

0x19a3,	// (0x000994cd) vidtel_button_pane

0xaa49,	// (0x000a2573) bg_button_pane_cp034

0xbff1,	// (0x000a3b1b) vidtel_button_pane_g1

0xbff9,	// (0x000a3b23) vidtel_button_pane_t1

0x5a2a,	// (0x0009d554) aid_size_vtel_slider_touch

0xaa99,	// (0x000a25c3) scroll_pane_cp039

0x6cd4,	// (0x0009e7fe) ncim_query_button_pane_cp01_ParamLimits

0x6cf3,	// (0x0009e81d) ncimui_query_pane_g1_ParamLimits

0xbf15,	// (0x000a3a3f) input_focus_pane_cp012_ParamLimits

0xae00,	// (0x000a292a) ncim_query_entry_pane_t1_ParamLimits

0xaa99,	// (0x000a25c3) scroll_pane_cp039_ParamLimits

0xcf8f,	// (0x000a4ab9) navi_pane_bcale_mc_g1

0xcf97,	// (0x000a4ac1) navi_pane_bcale_mc_t1

0xb32c,	// (0x000a2e56) main_sp_fs_email_pane_g1

0xb338,	// (0x000a2e62) main_sp_fs_email_pane_g2

0x0001,

0x0638,	// (0x00098162) main_sp_fs_email_pane_g

0xb5c5,	// (0x000a30ef) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb5c5,	// (0x000a30ef) list_single_cale_mrui_row_pane_g3

0x7c5e,	// (0x0009f788) list_single_recal_day_pane_g5_event_pane

0x7c74,	// (0x0009f79e) list_single_recal_day_pane_g7

0xc00f,	// (0x000a3b39) list_recal_day_event_pane_cp01

0xc018,	// (0x000a3b42) list_recal_vselct_arw_lo_pane_cp01

0xc020,	// (0x000a3b4a) list_recal_vselct_arw_up_pane_cp01

0xc028,	// (0x000a3b52) list_recal_vselct_pane_cp01

0x5c0d,	// (0x0009d737) list_recal_day_event_pane_cp01_g1

0x87d3,	// (0x000a02fd) list_recal_day_event_pane_cp01_t1

0x7c7c,	// (0x0009f7a6) list_single_recal_day_pane_t1_ParamLimits

0x7c8e,	// (0x0009f7b8) list_single_recal_day_pane_t2_ParamLimits

0xfbe6,	// (0x000a7710) list_single_recal_day_pane_t_ParamLimits

0xc386,	// (0x000a3eb0) bg_notes_pane_ParamLimits

0xc47b,	// (0x000a3fa5) list_notes_pane_ParamLimits

0x0d3a,	// (0x00098864) scroll_pane_cp06_ParamLimits

0xc49d,	// (0x000a3fc7) main_notes_pane_ParamLimits

0xbf15,	// (0x000a3a3f) main_welc_pane

0x880e,	// (0x000a0338) main_welc_body_pane_ParamLimits

0x880e,	// (0x000a0338) main_welc_body_pane

0x882b,	// (0x000a0355) main_welc_opti_pane_ParamLimits

0x882b,	// (0x000a0355) main_welc_opti_pane

0x88a2,	// (0x000a03cc) main_welc_pane_t1_ParamLimits

0x88a2,	// (0x000a03cc) main_welc_pane_t1

0x8a9a,	// (0x000a05c4) main_welc_body_row_pane_ParamLimits

0x8a9a,	// (0x000a05c4) main_welc_body_row_pane

0xc3f3,	// (0x000a3f1d) main_welc_opti_row_pane_ParamLimits

0xc3f3,	// (0x000a3f1d) main_welc_opti_row_pane

0xc042,	// (0x000a3b6c) main_welc_opti_row_pane_g1

0x8aaf,	// (0x000a05d9) main_welc_opti_row_pane_t1

0xc04a,	// (0x000a3b74) main_welc_body_row_pane_t1

0xb948,	// (0x000a3472) popup_notif_wgt_heading_pane

0xb962,	// (0x000a348c) aid_size_list_notif_wgt_del_ParamLimits

0xb96f,	// (0x000a3499) list_notif_wgt_row_pane_g1_ParamLimits

0xb97b,	// (0x000a34a5) list_notif_wgt_row_pane_g2_ParamLimits

0xb98a,	// (0x000a34b4) list_notif_wgt_row_pane_g3_ParamLimits

0x0784,	// (0x000982ae) list_notif_wgt_row_pane_g_ParamLimits

0xb997,	// (0x000a34c1) list_notif_wgt_row_pane_t1_ParamLimits

0xb9ad,	// (0x000a34d7) list_notif_wgt_row_pane_t2_ParamLimits

0xb9bf,	// (0x000a34e9) list_notif_wgt_row_pane_t3_ParamLimits

0x078b,	// (0x000982b5) list_notif_wgt_row_pane_t_ParamLimits

0x8184,	// (0x0009fcae) listrow_wgtman_pane_g1_ParamLimits

0x8191,	// (0x0009fcbb) listrow_wgtman_pane_g2_ParamLimits

0xfc3c,	// (0x000a7766) listrow_wgtman_pane_g_ParamLimits

0x81af,	// (0x0009fcd9) listrow_wgtman_pane_t1_ParamLimits

0x81c7,	// (0x0009fcf1) listrow_wgtman_pane_t2_ParamLimits

0xfc41,	// (0x000a776b) listrow_wgtman_pane_t_ParamLimits

0x81ed,	// (0x0009fd17) wait_bar_pane_cp09_ParamLimits

0xaa49,	// (0x000a2573) bg_popup_heading_pane_cp02

0xc059,	// (0x000a3b83) popup_notif_wgt_heading_pane_g1

0xc061,	// (0x000a3b8b) popup_notif_wgt_heading_pane_t1

0xaa49,	// (0x000a2573) main_vids_pane

0xaa49,	// (0x000a2573) vids_listscroll_pane

0x8abe,	// (0x000a05e8) scroll_pane_cp040

0xaa49,	// (0x000a2573) vids_list_pane

0x8ac9,	// (0x000a05f3) vids_list_double_pane_ParamLimits

0x8ac9,	// (0x000a05f3) vids_list_double_pane

0x8ada,	// (0x000a0604) vids_list_double_pane_g1

0x8ae3,	// (0x000a060d) vids_list_double_pane_t1

0x8af2,	// (0x000a061c) vids_list_double_pane_t2

0x0001,

0xfcd1,	// (0x000a77fb) vids_list_double_pane_t

0x9dd4,	// (0x000a18fe) main_ncimui_pane_ParamLimits

0x6b0a,	// (0x0009e634) main_ncimui_pane_g1_ParamLimits

0x6b16,	// (0x0009e640) main_ncimui_pane_g2_ParamLimits

0x6b16,	// (0x0009e640) main_ncimui_pane_g2

0x0001,

0xfab8,	// (0x000a75e2) main_ncimui_pane_g_ParamLimits

0xfab8,	// (0x000a75e2) main_ncimui_pane_g

0x8846,	// (0x000a0370) main_welc_pane_g1_ParamLimits

0x8846,	// (0x000a0370) main_welc_pane_g1

0x885b,	// (0x000a0385) main_welc_pane_g2_ParamLimits

0x885b,	// (0x000a0385) main_welc_pane_g2

0x0003,

0xfcbb,	// (0x000a77e5) main_welc_pane_g_ParamLimits

0xfcbb,	// (0x000a77e5) main_welc_pane_g

0xc386,	// (0x000a3eb0) listscroll_mce_pane_ParamLimits

0xd0e4,	// (0x000a4c0e) wait_bar_pane_cp10

0xe484,	// (0x000a5fae) main_cale_day_pane_ParamLimits

0xe484,	// (0x000a5fae) main_cale_week_pane_ParamLimits

0xc386,	// (0x000a3eb0) main_messa_pane_ParamLimits

0x4202,	// (0x0009bd2c) main_clock2_btn_pane_ParamLimits

0x4202,	// (0x0009bd2c) main_clock2_btn_pane

0xecf7,	// (0x000a6821) main_clock2_btn_pane_cp01_ParamLimits

0xecf7,	// (0x000a6821) main_clock2_btn_pane_cp01

0xb596,	// (0x000a30c0) list_cale_mrui_pane_ParamLimits

0xb9f5,	// (0x000a351f) main_cf0_pane_g2

0x0001,

0x0792,	// (0x000982bc) main_cf0_pane_g

0x83da,	// (0x0009ff04) area_left_week_number_pane_ParamLimits

0x83e6,	// (0x0009ff10) area_top_day_name_pane_ParamLimits

0x83f9,	// (0x0009ff23) frame_month_view_pane_ParamLimits

0xbb0e,	// (0x000a3638) grid_month_view_pane_ParamLimits

0xbb1c,	// (0x000a3646) frm_month_g1_ParamLimits

0x847a,	// (0x0009ffa4) frm_month_g2_ParamLimits

0x848d,	// (0x0009ffb7) frm_month_g3_ParamLimits

0x84a0,	// (0x0009ffca) frm_month_g4_ParamLimits

0x84b3,	// (0x0009ffdd) frm_month_g5_ParamLimits

0x84c6,	// (0x0009fff0) frm_month_g6_ParamLimits

0x84d9,	// (0x000a0003) frm_month_g7_ParamLimits

0xbb29,	// (0x000a3653) frm_month_g8_ParamLimits

0x84ec,	// (0x000a0016) frm_month_g9_ParamLimits

0x84fc,	// (0x000a0026) frm_month_g10_ParamLimits

0x850c,	// (0x000a0036) frm_month_g11_ParamLimits

0x851c,	// (0x000a0046) frm_month_g12_ParamLimits

0x852e,	// (0x000a0058) frm_month_g13_ParamLimits

0x8540,	// (0x000a006a) frm_month_g14_ParamLimits

0x8554,	// (0x000a007e) frm_month_g15_ParamLimits

0x8568,	// (0x000a0092) frm_month_g16_ParamLimits

0xfc62,	// (0x000a778c) frm_month_g_ParamLimits

0xbb36,	// (0x000a3660) cell_top_day_name_pane_t1_ParamLimits

0x857c,	// (0x000a00a6) cell_area_left_week_number_pane_g1_ParamLimits

0x8588,	// (0x000a00b2) cell_area_left_week_number_pane_t1_ParamLimits

0xc401,	// (0x000a3f2b) cell_month_view_pane_g1_ParamLimits

0x859b,	// (0x000a00c5) cell_month_view_pane_t1_ParamLimits

0xc37e,	// (0x000a3ea8) main_clock2_btn_pane_g1

0xc06f,	// (0x000a3b99) main_clock2_btn_pane_t1

0xbf15,	// (0x000a3a3f) listscroll_cmail_pane_ParamLimits

0xb32c,	// (0x000a2e56) main_sp_fs_email_pane_g1_ParamLimits

0xb338,	// (0x000a2e62) main_sp_fs_email_pane_g2_ParamLimits

0x0638,	// (0x00098162) main_sp_fs_email_pane_g_ParamLimits

0xb6cb,	// (0x000a31f5) list_recal_day_pane_ParamLimits

0xb6dc,	// (0x000a3206) mian_recal_day_pane_t1

0x73c9,	// (0x0009eef3) list_single_dyc_row_text_pane_t4_ParamLimits

0x73c9,	// (0x0009eef3) list_single_dyc_row_text_pane_t4

0x7412,	// (0x0009ef3c) list_single_dyc_row_text_pane_t5_ParamLimits

0x7412,	// (0x0009ef3c) list_single_dyc_row_text_pane_t5

0x7488,	// (0x0009efb2) list_single_dyc_row_text_pane_t6_ParamLimits

0x7488,	// (0x0009efb2) list_single_dyc_row_text_pane_t6

0x2427,	// (0x00099f51) aid_mgn_list_cale_time_pane

0x9dd4,	// (0x000a18fe) main_gallery2_pane_ParamLimits

0xed0d,	// (0x000a6837) main_clock2_pane_cp01_t1

0xed1b,	// (0x000a6845) main_clock2_pane_cp01_t3

0x0001,

0x0128,	// (0x00097c52) main_clock2_pane_cp01_t

0x10df,	// (0x00098c09) cale_week_scroll_pane_g16_ParamLimits

0x10df,	// (0x00098c09) cale_week_scroll_pane_g16

0xc6ed,	// (0x000a4217) vorec_slider_pane

0xbff9,	// (0x000a3b23) vidtel_button_pane_t1_ParamLimits

0x7cfc,	// (0x0009f826) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7cfc,	// (0x0009f826) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7d0d,	// (0x0009f837) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7d0d,	// (0x0009f837) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfbfa,	// (0x000a7724) main_fs_bigclock_clock_pane_g_ParamLimits

0x7d20,	// (0x0009f84a) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7d36,	// (0x0009f860) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc03,	// (0x000a772d) main_fs_bigclock_clock_pane_t_ParamLimits

0x3ade,	// (0x0009b608) main_mup3_lyrics_pane_ParamLimits

0x3ade,	// (0x0009b608) main_mup3_lyrics_pane

0x8b1a,	// (0x000a0644) main_mup3_lyrics_pane_t1_ParamLimits

0x8b1a,	// (0x000a0644) main_mup3_lyrics_pane_t1

0xa0d0,	// (0x000a1bfa) aid_main_mp4_pane_t1_area

0xa0da,	// (0x000a1c04) aid_main_mp4_pane_t2_area

0xa184,	// (0x000a1cae) main_mp4_pane_g7_ParamLimits

0xa184,	// (0x000a1cae) main_mp4_pane_g7

0xa190,	// (0x000a1cba) main_mp4_pane_g8_ParamLimits

0xa190,	// (0x000a1cba) main_mp4_pane_g8

0x4b94,	// (0x0009c6be) aid_call6_pane_g1_size

0x872e,	// (0x000a0258) list_double_large_graphic_phob2_other_pane_ParamLimits

0x872e,	// (0x000a0258) list_double_large_graphic_phob2_other_pane

0xcec0,	// (0x000a49ea) list_double_large_graphic_phob2_other_pane_g1

0xaa49,	// (0x000a2573) list_highlight_pane_cp026

0xbf15,	// (0x000a3a3f) main_welc_pane_ParamLimits

0x7186,	// (0x0009ecb0) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7186,	// (0x0009ecb0) main_sp_fs_ctrlbar_pane_g3

0x71a0,	// (0x0009ecca) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x71a0,	// (0x0009ecca) main_sp_fs_ctrlbar_pane_g4

0x71d4,	// (0x0009ecfe) toolbar2_fixed_button_pane_cp01

0x71df,	// (0x0009ed09) toolbar2_fixed_button_pane_cp02

0x71ec,	// (0x0009ed16) toolbar2_fixed_button_pane_cp03

0x87f4,	// (0x000a031e) list_welc_entry_pane_ParamLimits

0x87f4,	// (0x000a031e) list_welc_entry_pane

0x8870,	// (0x000a039a) main_welc_pane_g3_ParamLimits

0x8870,	// (0x000a039a) main_welc_pane_g3

0x88c0,	// (0x000a03ea) main_welc_pane_t2_ParamLimits

0x88c0,	// (0x000a03ea) main_welc_pane_t2

0x88db,	// (0x000a0405) main_welc_pane_t3_ParamLimits

0x88db,	// (0x000a0405) main_welc_pane_t3

0x0005,

0xfcc4,	// (0x000a77ee) main_welc_pane_t_ParamLimits

0xfcc4,	// (0x000a77ee) main_welc_pane_t

0x8a0b,	// (0x000a0535) welc_button_pane_ParamLimits

0x8a0b,	// (0x000a0535) welc_button_pane

0x8a85,	// (0x000a05af) welc_service_logo_pane_ParamLimits

0x8a85,	// (0x000a05af) welc_service_logo_pane

0x8b36,	// (0x000a0660) list_single_welc_entry_pane_ParamLimits

0x8b36,	// (0x000a0660) list_single_welc_entry_pane

0x8b47,	// (0x000a0671) list_single_welc_entry_pane_g1

0x8b4f,	// (0x000a0679) list_single_welc_entry_pane_t1

0x8b5d,	// (0x000a0687) list_single_welc_entry_pane_t2

0x0001,

0xfcd6,	// (0x000a7800) list_single_welc_entry_pane_t

0xaa49,	// (0x000a2573) bg_button_pane_cp035

0x8b6b,	// (0x000a0695) welc_button_pane_t1

0xc07d,	// (0x000a3ba7) welc_service_logo_pane_g1

0xc086,	// (0x000a3bb0) welc_service_logo_pane_g2

0x0001,

0xfcdb,	// (0x000a7805) welc_service_logo_pane_g

0x9de2,	// (0x000a190c) main_int_radio_pane

0xac9e,	// (0x000a27c8) list_single_fs_dyc_pane_g1

0x865e,	// (0x000a0188) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x865e,	// (0x000a0188) list_double_large_graphic_phob2_pane_g3

0x866a,	// (0x000a0194) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x866a,	// (0x000a0194) list_double_large_graphic_phob2_pane_g4

0x8b79,	// (0x000a06a3) main_int_radio1_pane_ParamLimits

0x8b79,	// (0x000a06a3) main_int_radio1_pane

0xc08f,	// (0x000a3bb9) find_pane_cp02

0x8b96,	// (0x000a06c0) input_focus_pane_cp12_ParamLimits

0x8b96,	// (0x000a06c0) input_focus_pane_cp12

0x8ba6,	// (0x000a06d0) input_focus_pane_cp13_ParamLimits

0x8ba6,	// (0x000a06d0) input_focus_pane_cp13

0x8bba,	// (0x000a06e4) input_focus_pane_cp14_ParamLimits

0x8bba,	// (0x000a06e4) input_focus_pane_cp14

0xc098,	// (0x000a3bc2) int_radio1_listscroll_pane

0x8bce,	// (0x000a06f8) main_int_radio1_pane_g1_ParamLimits

0x8bce,	// (0x000a06f8) main_int_radio1_pane_g1

0x8be6,	// (0x000a0710) main_int_radio1_pane_t1_ParamLimits

0x8be6,	// (0x000a0710) main_int_radio1_pane_t1

0x8c01,	// (0x000a072b) main_int_radio1_pane_t2_ParamLimits

0x8c01,	// (0x000a072b) main_int_radio1_pane_t2

0x8c1c,	// (0x000a0746) main_int_radio1_pane_t3_ParamLimits

0x8c1c,	// (0x000a0746) main_int_radio1_pane_t3

0x8c37,	// (0x000a0761) main_int_radio1_pane_t4_ParamLimits

0x8c37,	// (0x000a0761) main_int_radio1_pane_t4

0xc0a2,	// (0x000a3bcc) main_int_radio1_pane_t5_ParamLimits

0xc0a2,	// (0x000a3bcc) main_int_radio1_pane_t5

0x8c49,	// (0x000a0773) main_int_radio1_pane_t6_ParamLimits

0x8c49,	// (0x000a0773) main_int_radio1_pane_t6

0x8c5e,	// (0x000a0788) main_int_radio1_pane_t7_ParamLimits

0x8c5e,	// (0x000a0788) main_int_radio1_pane_t7

0x8c73,	// (0x000a079d) main_int_radio1_pane_t8_ParamLimits

0x8c73,	// (0x000a079d) main_int_radio1_pane_t8

0x8c92,	// (0x000a07bc) main_int_radio1_pane_t9_ParamLimits

0x8c92,	// (0x000a07bc) main_int_radio1_pane_t9

0x8ca4,	// (0x000a07ce) main_int_radio1_pane_t10_ParamLimits

0x8ca4,	// (0x000a07ce) main_int_radio1_pane_t10

0x8cca,	// (0x000a07f4) main_int_radio1_pane_t11_ParamLimits

0x8cca,	// (0x000a07f4) main_int_radio1_pane_t11

0x8cf0,	// (0x000a081a) main_int_radio1_pane_t12_ParamLimits

0x8cf0,	// (0x000a081a) main_int_radio1_pane_t12

0x000b,

0xfce0,	// (0x000a780a) main_int_radio1_pane_t_ParamLimits

0xfce0,	// (0x000a780a) main_int_radio1_pane_t

0xc0b4,	// (0x000a3bde) int_radio_list_pane

0xb6ae,	// (0x000a31d8) scroll_pane_cp037

0xc0bc,	// (0x000a3be6) list_double_large_graphic_int_radio_pane_ParamLimits

0xc0bc,	// (0x000a3be6) list_double_large_graphic_int_radio_pane

0xc0d5,	// (0x000a3bff) list_double_large_graphic_int_radio_pane_g1

0x8d02,	// (0x000a082c) list_double_large_graphic_int_radio_pane_t1

0x8d10,	// (0x000a083a) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfcf9,	// (0x000a7823) list_double_large_graphic_int_radio_pane_t

0xaa49,	// (0x000a2573) list_highlight_pane_cp027

0xc032,	// (0x000a3b5c) main_button_pane_4

0x8883,	// (0x000a03ad) main_welc_pane_g4_ParamLimits

0x8883,	// (0x000a03ad) main_welc_pane_g4

0x88f4,	// (0x000a041e) main_welc_pane_t4_ParamLimits

0x88f4,	// (0x000a041e) main_welc_pane_t4

0x890b,	// (0x000a0435) main_welc_pane_t5_ParamLimits

0x890b,	// (0x000a0435) main_welc_pane_t5

0x8948,	// (0x000a0472) main_welc_pane_t6_ParamLimits

0x8948,	// (0x000a0472) main_welc_pane_t6

0x8a22,	// (0x000a054c) welc_button_pane_2_ParamLimits

0x8a22,	// (0x000a054c) welc_button_pane_2

0x8a3e,	// (0x000a0568) welc_button_pane_3_ParamLimits

0x8a3e,	// (0x000a0568) welc_button_pane_3

0xc03a,	// (0x000a3b64) welc_button_pane_4

0x8a5d,	// (0x000a0587) welc_button_pane_5_ParamLimits

0x8a5d,	// (0x000a0587) welc_button_pane_5

0x09f3,	// (0x0009851d) main_popup_welc_pane

0xc62b,	// (0x000a4155) main_welc_sk_g3

0xc635,	// (0x000a415f) main_welc_sk_g4

0xc63f,	// (0x000a4169) main_welc_sk_t3

0xc64f,	// (0x000a4179) main_welc_sk_t4

0xc65f,	// (0x000a4189) popup_welc_pane_t4

0xc66d,	// (0x000a4197) popup_welc_pane_t5

0xc67b,	// (0x000a41a5) popup_welc_pane_t6

0x9de2,	// (0x000a190c) main_acti_pane

0xaa49,	// (0x000a2573) main_sso_pane

0x8d2e,	// (0x000a0858) sso_body_pane_ParamLimits

0x8d2e,	// (0x000a0858) sso_body_pane

0x8d42,	// (0x000a086c) sso_logo_pane_ParamLimits

0x8d42,	// (0x000a086c) sso_logo_pane

0x8d7b,	// (0x000a08a5) sso_sk_pane_ParamLimits

0x8d7b,	// (0x000a08a5) sso_sk_pane

0x8d8d,	// (0x000a08b7) main_sso_logo_pane_g1

0x8d98,	// (0x000a08c2) sso_sk_pane_t1_ParamLimits

0x8d98,	// (0x000a08c2) sso_sk_pane_t1

0x8db2,	// (0x000a08dc) sso_sk_pane_t2_ParamLimits

0x8db2,	// (0x000a08dc) sso_sk_pane_t2

0x0001,

0xfcfe,	// (0x000a7828) sso_sk_pane_t_ParamLimits

0xfcfe,	// (0x000a7828) sso_sk_pane_t

0x8dc8,	// (0x000a08f2) aid_sso_gap

0x8dd1,	// (0x000a08fb) aid_sso_txt1

0x8ddb,	// (0x000a0905) aid_sso_txt2

0x8de5,	// (0x000a090f) aid_sso_txt3

0x0002,

0xfd03,	// (0x000a782d) aid_sso_txt

0x8def,	// (0x000a0919) aid_sso_widget

0x8e4d,	// (0x000a0977) sso_btn_pane_ParamLimits

0x8e4d,	// (0x000a0977) sso_btn_pane

0x8ed1,	// (0x000a09fb) sso_option_pane_ParamLimits

0x8ed1,	// (0x000a09fb) sso_option_pane

0x8f87,	// (0x000a0ab1) sso_query_pane_ParamLimits

0x8f87,	// (0x000a0ab1) sso_query_pane

0x8fdd,	// (0x000a0b07) sso_query_pane_cp01_ParamLimits

0x8fdd,	// (0x000a0b07) sso_query_pane_cp01

0x9037,	// (0x000a0b61) sso_t_hdr_pane_ParamLimits

0x9037,	// (0x000a0b61) sso_t_hdr_pane

0x9061,	// (0x000a0b8b) sso_t_nml_pane_ParamLimits

0x9061,	// (0x000a0b8b) sso_t_nml_pane

0x90b7,	// (0x000a0be1) sso_t_sub_pane

0x8d4f,	// (0x000a0879) sso_popup_window_ParamLimits

0x8d4f,	// (0x000a0879) sso_popup_window

0x8df9,	// (0x000a0923) sso_apps_pane_ParamLimits

0x8df9,	// (0x000a0923) sso_apps_pane

0x8e23,	// (0x000a094d) sso_body_pane_g1

0x8e2d,	// (0x000a0957) sso_body_pane_t1

0x8e3d,	// (0x000a0967) sso_body_pane_t2

0x0001,

0xfd0a,	// (0x000a7834) sso_body_pane_t

0x8e99,	// (0x000a09c3) sso_btn_pane_cp01_ParamLimits

0x8e99,	// (0x000a09c3) sso_btn_pane_cp01

0x8f5b,	// (0x000a0a85) sso_prog_pane_ParamLimits

0x8f5b,	// (0x000a0a85) sso_prog_pane

0x90cc,	// (0x000a0bf6) sso_t_hdr_pane_t1_ParamLimits

0x90cc,	// (0x000a0bf6) sso_t_hdr_pane_t1

0x90df,	// (0x000a0c09) input_focus_pane_cp10_ParamLimits

0x90df,	// (0x000a0c09) input_focus_pane_cp10

0x90f3,	// (0x000a0c1d) sso_query_pane_t1_ParamLimits

0x90f3,	// (0x000a0c1d) sso_query_pane_t1

0x9106,	// (0x000a0c30) sso_query_pane_t2_ParamLimits

0x9106,	// (0x000a0c30) sso_query_pane_t2

0x911f,	// (0x000a0c49) sso_query_pane_t3_ParamLimits

0x911f,	// (0x000a0c49) sso_query_pane_t3

0x9149,	// (0x000a0c73) sso_query_pane_t4_ParamLimits

0x9149,	// (0x000a0c73) sso_query_pane_t4

0x0003,

0xfd0f,	// (0x000a7839) sso_query_pane_t_ParamLimits

0xfd0f,	// (0x000a7839) sso_query_pane_t

0xc622,	// (0x000a414c) bg_button_pane_cp22

0xc0de,	// (0x000a3c08) sso_btn_pane_t1

0x916d,	// (0x000a0c97) sso_t_nml_pane_t1_ParamLimits

0x916d,	// (0x000a0c97) sso_t_nml_pane_t1

0x9188,	// (0x000a0cb2) sso_option_row_pane_ParamLimits

0x9188,	// (0x000a0cb2) sso_option_row_pane

0x9195,	// (0x000a0cbf) sso_t_sub_pane_t1_ParamLimits

0x9195,	// (0x000a0cbf) sso_t_sub_pane_t1

0xbf15,	// (0x000a3a3f) bg_popup_window_pane_cp11_ParamLimits

0xbf15,	// (0x000a3a3f) bg_popup_window_pane_cp11

0x91b2,	// (0x000a0cdc) popup_sk_window_cp01_ParamLimits

0x91b2,	// (0x000a0cdc) popup_sk_window_cp01

0x91bf,	// (0x000a0ce9) sso_popup_body_pane_ParamLimits

0x91bf,	// (0x000a0ce9) sso_popup_body_pane

0x91cc,	// (0x000a0cf6) scroll_pane_cp21_ParamLimits

0x91cc,	// (0x000a0cf6) scroll_pane_cp21

0x91d9,	// (0x000a0d03) sso_popup_body_t_pane_ParamLimits

0x91d9,	// (0x000a0d03) sso_popup_body_t_pane

0x91e6,	// (0x000a0d10) sso_popup_body_t_hdr_pane_ParamLimits

0x91e6,	// (0x000a0d10) sso_popup_body_t_hdr_pane

0x91f8,	// (0x000a0d22) sso_popup_body_t_nml_pane_ParamLimits

0x91f8,	// (0x000a0d22) sso_popup_body_t_nml_pane

0x921f,	// (0x000a0d49) sso_popup_body_t_sub_pane_ParamLimits

0x921f,	// (0x000a0d49) sso_popup_body_t_sub_pane

0x9242,	// (0x000a0d6c) sso_popup_body_t_hdr_pane_t1

0x9252,	// (0x000a0d7c) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9252,	// (0x000a0d7c) sso_popup_body_t_nml_pane_t1

0x928b,	// (0x000a0db5) sso_popup_body_t_sub_pane_t1_ParamLimits

0x928b,	// (0x000a0db5) sso_popup_body_t_sub_pane_t1

0xc43f,	// (0x000a3f69) sso_prog_pane_g1

0x92b0,	// (0x000a0dda) sso_apps_pane_comp1_ParamLimits

0x92b0,	// (0x000a0dda) sso_apps_pane_comp1

0x92ca,	// (0x000a0df4) sso_apps_pane_comp1_g1

0x92d2,	// (0x000a0dfc) sso_apps_pane_comp1_t1

0x92ee,	// (0x000a0e18) sso_option_row_pane_g1

0x92f6,	// (0x000a0e20) sso_option_row_pane_t1

0xb3d9,	// (0x000a2f03) list_cmail_pane_ParamLimits

0xaa49,	// (0x000a2573) main_call7_pane

0x87e1,	// (0x000a030b) bg_welc_area_ParamLimits

0x87e1,	// (0x000a030b) bg_welc_area

0x8986,	// (0x000a04b0) sso_t_hdr_pane_a_t1_ParamLimits

0x8986,	// (0x000a04b0) sso_t_hdr_pane_a_t1

0x89a1,	// (0x000a04cb) sso_t_nml_pane_a_t1_ParamLimits

0x89a1,	// (0x000a04cb) sso_t_nml_pane_a_t1

0x89d0,	// (0x000a04fa) sso_t_sub_pane_a_t1_ParamLimits

0x89d0,	// (0x000a04fa) sso_t_sub_pane_a_t1

0x8a73,	// (0x000a059d) welc_button_pane_cp01_ParamLimits

0x8a73,	// (0x000a059d) welc_button_pane_cp01

0xc0de,	// (0x000a3c08) sso_btn_pane_t1_copy1

0xc622,	// (0x000a414c) welc_button_pane_2_comp1

0xc689,	// (0x000a41b3) sso_t_hdr_pane_p_t1

0xc699,	// (0x000a41c3) sso_t_nml_pane_p_t1

0x8d1e,	// (0x000a0848) sso_t_sub_pane_p_t1

0xaa49,	// (0x000a2573) main_att_pane

0xaa49,	// (0x000a2573) main_vod_pane

0x90b7,	// (0x000a0be1) sso_t_sub_pane_ParamLimits

0x92e0,	// (0x000a0e0a) input_focus_pane_cp10_t1

0x92f6,	// (0x000a0e20) sso_option_row_pane_t1_ParamLimits

0x930f,	// (0x000a0e39) main_att_body_pane_ParamLimits

0x930f,	// (0x000a0e39) main_att_body_pane

0x9325,	// (0x000a0e4f) att_btn_emg_pane_ParamLimits

0x9325,	// (0x000a0e4f) att_btn_emg_pane

0x9344,	// (0x000a0e6e) att_btn_pane_ParamLimits

0x9344,	// (0x000a0e6e) att_btn_pane

0x93b5,	// (0x000a0edf) att_btn_pane_cp01_ParamLimits

0x93b5,	// (0x000a0edf) att_btn_pane_cp01

0x93d5,	// (0x000a0eff) att_li_srv_pane_ParamLimits

0x93d5,	// (0x000a0eff) att_li_srv_pane

0x93f2,	// (0x000a0f1c) att_opt_pane_ParamLimits

0x93f2,	// (0x000a0f1c) att_opt_pane

0x943c,	// (0x000a0f66) att_query_pane_ParamLimits

0x943c,	// (0x000a0f66) att_query_pane

0x94b5,	// (0x000a0fdf) att_query_pane_cp01_ParamLimits

0x94b5,	// (0x000a0fdf) att_query_pane_cp01

0x9501,	// (0x000a102b) att_t_hdr_pane_ParamLimits

0x9501,	// (0x000a102b) att_t_hdr_pane

0x956d,	// (0x000a1097) att_t_nml_pane_ParamLimits

0x956d,	// (0x000a1097) att_t_nml_pane

0x95dd,	// (0x000a1107) att_t_nml_pane_cp01_ParamLimits

0x95dd,	// (0x000a1107) att_t_nml_pane_cp01

0x9609,	// (0x000a1133) att_t_nmlb_pane_ParamLimits

0x9609,	// (0x000a1133) att_t_nmlb_pane

0x9676,	// (0x000a11a0) att_term_pane_ParamLimits

0x9676,	// (0x000a11a0) att_term_pane

0x96c0,	// (0x000a11ea) main_att_body_pane_g1_ParamLimits

0x96c0,	// (0x000a11ea) main_att_body_pane_g1

0x96ec,	// (0x000a1216) att_t_hdr_pane_t1_ParamLimits

0x96ec,	// (0x000a1216) att_t_hdr_pane_t1

0x9705,	// (0x000a122f) att_t_nml_pane_t1_ParamLimits

0x9705,	// (0x000a122f) att_t_nml_pane_t1

0x972a,	// (0x000a1254) att_btn_pane_t1

0xc622,	// (0x000a414c) bg_button_pane_cp23

0x973a,	// (0x000a1264) att_li_srv_row_pane_ParamLimits

0x973a,	// (0x000a1264) att_li_srv_row_pane

0x974a,	// (0x000a1274) att_t_nmlb_pane_t1_ParamLimits

0x974a,	// (0x000a1274) att_t_nmlb_pane_t1

0x9768,	// (0x000a1292) att_query_pane_t1

0x9777,	// (0x000a12a1) att_query_pane_t2

0x9786,	// (0x000a12b0) att_query_pane_t3

0x0002,

0xfd18,	// (0x000a7842) att_query_pane_t

0x9795,	// (0x000a12bf) input_focus_pane_cp11

0x979e,	// (0x000a12c8) att_term_pane_t1_ParamLimits

0x979e,	// (0x000a12c8) att_term_pane_t1

0xaa49,	// (0x000a2573) att_opt_row_pane

0x92ee,	// (0x000a0e18) att_opt_row_pane_g1

0x97bb,	// (0x000a12e5) att_opt_row_pane_t1_ParamLimits

0x97bb,	// (0x000a12e5) att_opt_row_pane_t1

0x97d4,	// (0x000a12fe) att_li_srv_row_pane_g1

0x97dc,	// (0x000a1306) att_li_srv_row_pane_t1_ParamLimits

0x97dc,	// (0x000a1306) att_li_srv_row_pane_t1

0x97f1,	// (0x000a131b) att_li_srv_row_pane_t2_ParamLimits

0x97f1,	// (0x000a131b) att_li_srv_row_pane_t2

0x0001,

0xfd1f,	// (0x000a7849) att_li_srv_row_pane_t_ParamLimits

0xfd1f,	// (0x000a7849) att_li_srv_row_pane_t

0x9806,	// (0x000a1330) att_btn_close_pane_g1

0xaa49,	// (0x000a2573) bg_button_pane_cp24

0x980e,	// (0x000a1338) main_vod_body_pane_ParamLimits

0x980e,	// (0x000a1338) main_vod_body_pane

0x9822,	// (0x000a134c) main_vod_body_pane_g1_ParamLimits

0x9822,	// (0x000a134c) main_vod_body_pane_g1

0x9856,	// (0x000a1380) scroll_pane_cp24_ParamLimits

0x9856,	// (0x000a1380) scroll_pane_cp24

0x98a4,	// (0x000a13ce) vod_btn_pane_ParamLimits

0x98a4,	// (0x000a13ce) vod_btn_pane

0x98e6,	// (0x000a1410) vod_det_pane_ParamLimits

0x98e6,	// (0x000a1410) vod_det_pane

0x9916,	// (0x000a1440) vod_logo_g1_ParamLimits

0x9916,	// (0x000a1440) vod_logo_g1

0x9954,	// (0x000a147e) vod_opt_pane_ParamLimits

0x9954,	// (0x000a147e) vod_opt_pane

0x9987,	// (0x000a14b1) vod_opt_pane_cp01_ParamLimits

0x9987,	// (0x000a14b1) vod_opt_pane_cp01

0x99b3,	// (0x000a14dd) vod_query_pane_ParamLimits

0x99b3,	// (0x000a14dd) vod_query_pane

0x99de,	// (0x000a1508) vod_query_pane_cp01_ParamLimits

0x99de,	// (0x000a1508) vod_query_pane_cp01

0x99ea,	// (0x000a1514) vod_t_nml_pane_ParamLimits

0x99ea,	// (0x000a1514) vod_t_nml_pane

0x9a93,	// (0x000a15bd) vod_t_nml_pane_cp01_ParamLimits

0x9a93,	// (0x000a15bd) vod_t_nml_pane_cp01

0x9acf,	// (0x000a15f9) vod_t_sub_pane_ParamLimits

0x9acf,	// (0x000a15f9) vod_t_sub_pane

0x9b00,	// (0x000a162a) vod_t_sub_pane_cp01_ParamLimits

0x9b00,	// (0x000a162a) vod_t_sub_pane_cp01

0x9795,	// (0x000a12bf) vod_query_field_pane

0x9b2c,	// (0x000a1656) vod_query_pane_t1

0xc622,	// (0x000a414c) bg_button_pane_cp25

0xc0de,	// (0x000a3c08) sso_btn_pane_t1_copy2

0x9b3b,	// (0x000a1665) vod_t_nml_pane_t1_ParamLimits

0x9b3b,	// (0x000a1665) vod_t_nml_pane_t1

0x9b6a,	// (0x000a1694) vod_opt_row_pane_ParamLimits

0x9b6a,	// (0x000a1694) vod_opt_row_pane

0x9b7c,	// (0x000a16a6) vod_t_sub_pane_t1_ParamLimits

0x9b7c,	// (0x000a16a6) vod_t_sub_pane_t1

0x9b95,	// (0x000a16bf) vod_det_cell_pane_ParamLimits

0x9b95,	// (0x000a16bf) vod_det_cell_pane

0xaa49,	// (0x000a2573) input_focus_pane_cp15

0x9ba6,	// (0x000a16d0) vod_query_field_pane_t1

0x9bb4,	// (0x000a16de) vod_opt_row_pane_g1_ParamLimits

0x9bb4,	// (0x000a16de) vod_opt_row_pane_g1

0x9bc0,	// (0x000a16ea) vod_opt_row_pane_t1_ParamLimits

0x9bc0,	// (0x000a16ea) vod_opt_row_pane_t1

0x9bdf,	// (0x000a1709) vod_det_cell_field_pane

0x9be8,	// (0x000a1712) vod_det_cell_pane_g1

0x9bf0,	// (0x000a171a) vod_det_cell_pane_t1

0xaa49,	// (0x000a2573) input_focus_pane_cp16

0x9bff,	// (0x000a1729) vod_det_cell_field_pane_t1

0x9c0d,	// (0x000a1737) call7_btn_grp_pane_ParamLimits

0x9c0d,	// (0x000a1737) call7_btn_grp_pane

0x9c27,	// (0x000a1751) call7_bubble_pane_ParamLimits

0x9c27,	// (0x000a1751) call7_bubble_pane

0x9c3e,	// (0x000a1768) cell_call7_btn_pane_ParamLimits

0x9c3e,	// (0x000a1768) cell_call7_btn_pane

0x9c52,	// (0x000a177c) call7_pane_g1_ParamLimits

0x9c52,	// (0x000a177c) call7_pane_g1

0x9c61,	// (0x000a178b) call7_windows_conf_pane_ParamLimits

0x9c61,	// (0x000a178b) call7_windows_conf_pane

0x9c7b,	// (0x000a17a5) popup_call7_1st_window_ParamLimits

0x9c7b,	// (0x000a17a5) popup_call7_1st_window

0x9c8c,	// (0x000a17b6) popup_call7_2nd_window_ParamLimits

0x9c8c,	// (0x000a17b6) popup_call7_2nd_window

0x9c9d,	// (0x000a17c7) popup_call7_3rd_window_ParamLimits

0x9c9d,	// (0x000a17c7) popup_call7_3rd_window

0xaa49,	// (0x000a2573) bg_button_pane_cp26

0xbaa5,	// (0x000a35cf) cell_call7_btn_pane_g1

0xc0ed,	// (0x000a3c17) cell_call7_btn_pane_t1

0xaa49,	// (0x000a2573) bg_popup_window_pane_cp12

0x9cae,	// (0x000a17d8) popup_call7_1st_window_g1

0x9cb6,	// (0x000a17e0) popup_call7_1st_window_g2

0x9cbe,	// (0x000a17e8) popup_call7_1st_window_g3

0x0002,

0xfd24,	// (0x000a784e) popup_call7_1st_window_g

0x9cc6,	// (0x000a17f0) popup_call7_1st_window_t1

0x9cd5,	// (0x000a17ff) popup_call7_1st_window_t2

0x9ce3,	// (0x000a180d) popup_call7_1st_window_t3

0x0002,

0xfd2b,	// (0x000a7855) popup_call7_1st_window_t

0xaa49,	// (0x000a2573) bg_popup_window_pane_cp13

0x9cf1,	// (0x000a181b) popup_call7_2nd_window_g1

0x9cf9,	// (0x000a1823) popup_call7_2nd_window_g2

0x9d01,	// (0x000a182b) popup_call7_2nd_window_g3

0x0002,

0xfd32,	// (0x000a785c) popup_call7_2nd_window_g

0x9d09,	// (0x000a1833) popup_call7_2nd_window_t1

0xaa49,	// (0x000a2573) bg_popup_window_pane_cp14

0x9d18,	// (0x000a1842) call7_list_conf_pane

0x9d20,	// (0x000a184a) call7_list_conf_row_pane_ParamLimits

0x9d20,	// (0x000a184a) call7_list_conf_row_pane

0x9d33,	// (0x000a185d) call7_list_conf_row_pane_g1

0x9d3b,	// (0x000a1865) call7_list_conf_row_pane_g2

0x0001,

0xfd39,	// (0x000a7863) call7_list_conf_row_pane_g

0x9d43,	// (0x000a186d) call7_list_conf_row_pane_t1

0xaa49,	// (0x000a2573) list_highlight_pane_cp22

0x8f27,	// (0x000a0a51) sso_option_pane_cp01_ParamLimits

0x8f27,	// (0x000a0a51) sso_option_pane_cp01

0xc386,	// (0x000a3eb0) msg_header_pane_ParamLimits

0xd270,	// (0x000a4d9a) bg_button_pane_cp01_ParamLimits

0xd284,	// (0x000a4dae) input_focus_pane_cp07_ParamLimits

0x723d,	// (0x0009ed67) popup_email_progress_window

0xc43f,	// (0x000a3f69) popup_email_progress_window_g1

0x9d51,	// (0x000a187b) popup_email_progress_window_g2

0x0001,

0xfd3e,	// (0x000a7868) popup_email_progress_window_g

0x9d59,	// (0x000a1883) popup_email_progress_window_t1
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
