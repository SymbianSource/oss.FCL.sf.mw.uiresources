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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00097d90 };

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
0x0822,	// (0x000985b2) Screen

0x082e,	// (0x000985be) application_window

0x086a,	// (0x000985fa) area_bottom_pane_ParamLimits

0x086a,	// (0x000985fa) area_bottom_pane

0x08a3,	// (0x00098633) area_top_pane_ParamLimits

0x08a3,	// (0x00098633) area_top_pane

0x9e8e,	// (0x000a1c1e) call_video_uplink_pane_ParamLimits

0x9e8e,	// (0x000a1c1e) call_video_uplink_pane

0x0931,	// (0x000986c1) main_pane_ParamLimits

0x0931,	// (0x000986c1) main_pane

0xe4e7,	// (0x000a6277) context_pane

0x3662,	// (0x0009b3f2) navi_pane

0x3694,	// (0x0009b424) popup_cale_events_window_ParamLimits

0x3694,	// (0x0009b424) popup_cale_events_window

0xe4fa,	// (0x000a628a) popup_mup_playback_window

0x36ac,	// (0x0009b43c) signal_pane

0xc61e,	// (0x000a43ae) main_browser_pane

0xc7d0,	// (0x000a4560) main_burst_pane

0x33b0,	// (0x0009b140) main_calc_pane

0xe4db,	// (0x000a626b) main_cale_day_pane

0x33c4,	// (0x0009b154) main_cale_month_pane

0xe4db,	// (0x000a626b) main_cale_week_pane

0xc7d0,	// (0x000a4560) main_call_pane

0xc29e,	// (0x000a402e) main_call_poc_pane

0xc7d0,	// (0x000a4560) main_camera_pane

0xc7d0,	// (0x000a4560) main_chi_dic_pane

0xcfa6,	// (0x000a4d36) main_clock_pane

0xc29e,	// (0x000a402e) main_fmradio_pane

0xc7d0,	// (0x000a4560) main_graph_messa_pane

0xc29e,	// (0x000a402e) main_help_pane

0xc61e,	// (0x000a43ae) main_im_pane

0xc4f9,	// (0x000a4289) main_image_pane_ParamLimits

0xc4f9,	// (0x000a4289) main_image_pane

0xc29e,	// (0x000a402e) main_location2_pane

0xc7d0,	// (0x000a4560) main_location_pane

0xc4f9,	// (0x000a4289) main_messa_pane

0xc29e,	// (0x000a402e) main_mp2_pane

0xc7d0,	// (0x000a4560) main_mp_pane

0xc29e,	// (0x000a402e) main_msg_pane

0xc29e,	// (0x000a402e) main_mup_eq_pane

0xc29e,	// (0x000a402e) main_mup_pane

0xc61e,	// (0x000a43ae) main_notes_pane

0xc29e,	// (0x000a402e) main_pec_pane

0xc29e,	// (0x000a402e) main_phob_pane

0xc29e,	// (0x000a402e) main_pinb_pane

0xc29e,	// (0x000a402e) main_postcard_pane

0xc29e,	// (0x000a402e) main_qdial_pane

0xc7d0,	// (0x000a4560) main_skin_pane

0xc29e,	// (0x000a402e) main_smil2_pane

0xc7d0,	// (0x000a4560) main_smil_pane

0xc7d0,	// (0x000a4560) main_video_pane

0xc7d0,	// (0x000a4560) main_video_tele_pane

0xc4f9,	// (0x000a4289) main_viewer_pane_ParamLimits

0xc4f9,	// (0x000a4289) main_viewer_pane

0xc7d0,	// (0x000a4560) main_vorec_pane

0x3416,	// (0x0009b1a6) popup_blid_sat_info_window_ParamLimits

0x3416,	// (0x0009b1a6) popup_blid_sat_info_window

0x346e,	// (0x0009b1fe) popup_dyc_status_message_window_ParamLimits

0x346e,	// (0x0009b1fe) popup_dyc_status_message_window

0x3488,	// (0x0009b218) popup_grid_large_graphic_window_ParamLimits

0x3488,	// (0x0009b218) popup_grid_large_graphic_window

0x3544,	// (0x0009b2d4) popup_loc_request_window_ParamLimits

0x3544,	// (0x0009b2d4) popup_loc_request_window

0x363a,	// (0x0009b3ca) popup_wml_address_window_ParamLimits

0x363a,	// (0x0009b3ca) popup_wml_address_window

0x31ea,	// (0x0009af7a) call_muted_g1

0x2ee0,	// (0x0009ac70) popup_call_audio_conf_window_ParamLimits

0x2ee0,	// (0x0009ac70) popup_call_audio_conf_window

0x31fe,	// (0x0009af8e) popup_call_audio_first_window_ParamLimits

0x31fe,	// (0x0009af8e) popup_call_audio_first_window

0x3274,	// (0x0009b004) popup_call_audio_in_window_ParamLimits

0x3274,	// (0x0009b004) popup_call_audio_in_window

0x32b0,	// (0x0009b040) popup_call_audio_out_window_ParamLimits

0x32b0,	// (0x0009b040) popup_call_audio_out_window

0x32ea,	// (0x0009b07a) popup_call_audio_second_window_ParamLimits

0x32ea,	// (0x0009b07a) popup_call_audio_second_window

0x3340,	// (0x0009b0d0) popup_call_audio_wait_window_ParamLimits

0x3340,	// (0x0009b0d0) popup_call_audio_wait_window

0x3375,	// (0x0009b105) popup_number_entry_window_ParamLimits

0x3375,	// (0x0009b105) popup_number_entry_window

0xac20,	// (0x000a29b0) bg_popup_call_pane_cp05_ParamLimits

0xac20,	// (0x000a29b0) bg_popup_call_pane_cp05

0xac40,	// (0x000a29d0) popup_number_entry_window_t1

0xba7f,	// (0x000a380f) popup_number_entry_window_t2

0xba91,	// (0x000a3821) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x000a6dd0) popup_number_entry_window_t

0xbaa3,	// (0x000a3833) text_title_cp2

0xbab6,	// (0x000a3846) bg_popup_call_pane_cp_ParamLimits

0xbab6,	// (0x000a3846) bg_popup_call_pane_cp

0xbac4,	// (0x000a3854) call_thumbnail_pane

0xbacc,	// (0x000a385c) popup_call_audio_in_window_g1_ParamLimits

0xbacc,	// (0x000a385c) popup_call_audio_in_window_g1

0xbad8,	// (0x000a3868) popup_call_audio_in_window_g2_ParamLimits

0xbad8,	// (0x000a3868) popup_call_audio_in_window_g2

0xbae4,	// (0x000a3874) popup_call_audio_in_window_g3_ParamLimits

0xbae4,	// (0x000a3874) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x000a6dd9) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x000a6dd9) popup_call_audio_in_window_g

0xbaf0,	// (0x000a3880) popup_call_audio_in_window_t1_ParamLimits

0xbaf0,	// (0x000a3880) popup_call_audio_in_window_t1

0xbb0c,	// (0x000a389c) popup_call_audio_in_window_t2_ParamLimits

0xbb0c,	// (0x000a389c) popup_call_audio_in_window_t2

0xbb28,	// (0x000a38b8) popup_call_audio_in_window_t3_ParamLimits

0xbb28,	// (0x000a38b8) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x000a6de0) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x000a6de0) popup_call_audio_in_window_t

0xbab6,	// (0x000a3846) bg_popup_call_pane_cp01_ParamLimits

0xbab6,	// (0x000a3846) bg_popup_call_pane_cp01

0xbac4,	// (0x000a3854) call_thumbnail_pane_cp02

0xbb3b,	// (0x000a38cb) call_type_pane_cp022

0xbb43,	// (0x000a38d3) popup_call_audio_out_window_g1_ParamLimits

0xbb43,	// (0x000a38d3) popup_call_audio_out_window_g1

0xbb55,	// (0x000a38e5) popup_call_audio_out_window_g2_ParamLimits

0xbb55,	// (0x000a38e5) popup_call_audio_out_window_g2

0xbb61,	// (0x000a38f1) popup_call_audio_out_window_g3_ParamLimits

0xbb61,	// (0x000a38f1) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x000a6de7) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x000a6de7) popup_call_audio_out_window_g

0xbb73,	// (0x000a3903) popup_call_audio_out_window_t1_ParamLimits

0xbb73,	// (0x000a3903) popup_call_audio_out_window_t1

0xbb8b,	// (0x000a391b) popup_call_audio_out_window_t2_ParamLimits

0xbb8b,	// (0x000a391b) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x000a6dee) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x000a6dee) popup_call_audio_out_window_t

0xbba0,	// (0x000a3930) bg_popup_call_pane_ParamLimits

0xbba0,	// (0x000a3930) bg_popup_call_pane

0x0aec,	// (0x0009887c) call_thumbnail_pane_cp_ParamLimits

0x0aec,	// (0x0009887c) call_thumbnail_pane_cp

0xbc24,	// (0x000a39b4) call_type_pane_cp01_ParamLimits

0xbc24,	// (0x000a39b4) call_type_pane_cp01

0xbc68,	// (0x000a39f8) popup_call_audio_first_window_g1_ParamLimits

0xbc68,	// (0x000a39f8) popup_call_audio_first_window_g1

0xbcb4,	// (0x000a3a44) popup_call_audio_first_window_g2_ParamLimits

0xbcb4,	// (0x000a3a44) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x000a6df3) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x000a6df3) popup_call_audio_first_window_g

0xbcf8,	// (0x000a3a88) popup_call_audio_first_window_t1_ParamLimits

0xbcf8,	// (0x000a3a88) popup_call_audio_first_window_t1

0xc1e3,	// (0x000a3f73) popup_call_audio_first_window_t4_ParamLimits

0xc1e3,	// (0x000a3f73) popup_call_audio_first_window_t4

0xc26f,	// (0x000a3fff) popup_call_audio_first_window_t5_ParamLimits

0xc26f,	// (0x000a3fff) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x000a6df8) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x000a6df8) popup_call_audio_first_window_t

0xc29e,	// (0x000a402e) bg_popup_call_pane_cp02

0xc2a8,	// (0x000a4038) call_type_pane_cp023

0xc2b0,	// (0x000a4040) popup_call_audio_wait_window_g1

0xc2b8,	// (0x000a4048) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x000a6dff) popup_call_audio_wait_window_g

0xc2c0,	// (0x000a4050) popup_call_audio_wait_window_t3

0xc2ce,	// (0x000a405e) bg_popup_call_pane_cp03_ParamLimits

0xc2ce,	// (0x000a405e) bg_popup_call_pane_cp03

0xc32e,	// (0x000a40be) call_thumbnail_pane_cp011_ParamLimits

0xc32e,	// (0x000a40be) call_thumbnail_pane_cp011

0xc33a,	// (0x000a40ca) call_type_pane_cp034_ParamLimits

0xc33a,	// (0x000a40ca) call_type_pane_cp034

0xc376,	// (0x000a4106) popup_call_audio_second_window_g1_ParamLimits

0xc376,	// (0x000a4106) popup_call_audio_second_window_g1

0xc3b2,	// (0x000a4142) popup_call_audio_second_window_g2_ParamLimits

0xc3b2,	// (0x000a4142) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x000a6e04) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x000a6e04) popup_call_audio_second_window_g

0xc3ee,	// (0x000a417e) popup_call_audio_second_window_t1_ParamLimits

0xc3ee,	// (0x000a417e) popup_call_audio_second_window_t1

0xc46f,	// (0x000a41ff) popup_call_audio_second_window_t2_ParamLimits

0xc46f,	// (0x000a41ff) popup_call_audio_second_window_t2

0xc4a5,	// (0x000a4235) popup_call_audio_second_window_t3_ParamLimits

0xc4a5,	// (0x000a4235) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x000a6e09) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x000a6e09) popup_call_audio_second_window_t

0xc29e,	// (0x000a402e) bg_popup_call_pane_cp04

0xc4db,	// (0x000a426b) list_conf_pane

0xc4e3,	// (0x000a4273) popup_call_audio_conf_window_t1

0xc4f1,	// (0x000a4281) call_thumbnail_pane_g1

0xc4f9,	// (0x000a4289) bg_pinb_pane_ParamLimits

0xc4f9,	// (0x000a4289) bg_pinb_pane

0xc507,	// (0x000a4297) find_pinb_pane

0xc4f9,	// (0x000a4289) listscroll_pinb_pane_ParamLimits

0xc4f9,	// (0x000a4289) listscroll_pinb_pane

0xc511,	// (0x000a42a1) pinb_bg_pane_g1

0xc511,	// (0x000a42a1) pinb_bg_pane_g2

0xc511,	// (0x000a42a1) pinb_bg_pane_g3

0xc511,	// (0x000a42a1) pinb_bg_pane_g4

0xc511,	// (0x000a42a1) pinb_bg_pane_g5

0xc511,	// (0x000a42a1) pinb_bg_pane_g6

0xc511,	// (0x000a42a1) pinb_bg_pane_g7

0xc511,	// (0x000a42a1) pinb_bg_pane_g8

0xc511,	// (0x000a42a1) pinb_bg_pane_g9

0xc511,	// (0x000a42a1) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x000a6e10) pinb_bg_pane_g

0xac16,	// (0x000a29a6) grid_pinb_pane

0xac16,	// (0x000a29a6) list_pinb_pane

0xc51b,	// (0x000a42ab) scroll_pane_cp01_ParamLimits

0xc51b,	// (0x000a42ab) scroll_pane_cp01

0xc529,	// (0x000a42b9) find_pinb_pane_g1_ParamLimits

0xc529,	// (0x000a42b9) find_pinb_pane_g1

0xc541,	// (0x000a42d1) find_pinb_pane_t1

0xc553,	// (0x000a42e3) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x000a6e2a) find_pinb_pane_t

0xc568,	// (0x000a42f8) input_focus_pane_cp01_ParamLimits

0xc568,	// (0x000a42f8) input_focus_pane_cp01

0xc574,	// (0x000a4304) cell_pinb_pane_ParamLimits

0xc574,	// (0x000a4304) cell_pinb_pane

0xc582,	// (0x000a4312) cell_pinb_pane_g1_ParamLimits

0xc582,	// (0x000a4312) cell_pinb_pane_g1

0xc590,	// (0x000a4320) cell_pinb_pane_g2_ParamLimits

0xc590,	// (0x000a4320) cell_pinb_pane_g2

0xc590,	// (0x000a4320) cell_pinb_pane_g3_ParamLimits

0xc590,	// (0x000a4320) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x000a6e2f) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x000a6e2f) cell_pinb_pane_g

0xc29e,	// (0x000a402e) grid_highlight_pane_cp01

0xc574,	// (0x000a4304) list_pinb_item_pane_ParamLimits

0xc574,	// (0x000a4304) list_pinb_item_pane

0xac16,	// (0x000a29a6) list_highlight_pane_cp02

0xc59e,	// (0x000a432e) list_pinb_item_pane_g1_ParamLimits

0xc59e,	// (0x000a432e) list_pinb_item_pane_g1

0xc590,	// (0x000a4320) list_pinb_item_pane_g2_ParamLimits

0xc590,	// (0x000a4320) list_pinb_item_pane_g2

0xc582,	// (0x000a4312) list_pinb_item_pane_g3_ParamLimits

0xc582,	// (0x000a4312) list_pinb_item_pane_g3

0xc590,	// (0x000a4320) list_pinb_item_pane_g4_ParamLimits

0xc590,	// (0x000a4320) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x000a6e36) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x000a6e36) list_pinb_item_pane_g

0xc5ac,	// (0x000a433c) list_pinb_item_pane_t1_ParamLimits

0xc5ac,	// (0x000a433c) list_pinb_item_pane_t1

0x0b2e,	// (0x000988be) calc_display_pane

0x0b53,	// (0x000988e3) calc_paper_pane

0x0b76,	// (0x00098906) grid_calc_pane

0xac16,	// (0x000a29a6) bg_list_pane_cp01

0xc5c0,	// (0x000a4350) clock_g1

0xc5c0,	// (0x000a4350) clock_g2

0x0001,

0xf0af,	// (0x000a6e3f) clock_g

0xc5ca,	// (0x000a435a) clock_t1_ParamLimits

0xc5ca,	// (0x000a435a) clock_t1

0xc5de,	// (0x000a436e) clock_t2_ParamLimits

0xc5de,	// (0x000a436e) clock_t2

0xc5de,	// (0x000a436e) clock_t3_ParamLimits

0xc5de,	// (0x000a436e) clock_t3

0xc5de,	// (0x000a436e) clock_t4_ParamLimits

0xc5de,	// (0x000a436e) clock_t4

0xc5ca,	// (0x000a435a) clock_t5_ParamLimits

0xc5ca,	// (0x000a435a) clock_t5

0xc5de,	// (0x000a436e) clock_t6_ParamLimits

0xc5de,	// (0x000a436e) clock_t6

0xc5de,	// (0x000a436e) clock_t7_ParamLimits

0xc5de,	// (0x000a436e) clock_t7

0xc5de,	// (0x000a436e) clock_t8_ParamLimits

0xc5de,	// (0x000a436e) clock_t8

0xc5de,	// (0x000a436e) clock_t9_ParamLimits

0xc5de,	// (0x000a436e) clock_t9

0x0008,

0xf0b4,	// (0x000a6e44) clock_t_ParamLimits

0xf0b4,	// (0x000a6e44) clock_t

0xac16,	// (0x000a29a6) popup_clock_analogue_window_cp02

0xac16,	// (0x000a29a6) popup_clock_digital_window_cp01

0xc29e,	// (0x000a402e) listscroll_help_pane

0xc29e,	// (0x000a402e) phob_pre_status_pane

0xc5f2,	// (0x000a4382) grid_qdial_pane

0xc4f9,	// (0x000a4289) listscroll_mce_pane

0xc4f9,	// (0x000a4289) bg_notes_pane

0xc5fc,	// (0x000a438c) list_notes_pane

0x0ba4,	// (0x00098934) scroll_pane_cp06

0xc60a,	// (0x000a439a) bg_calc_paper_pane

0x9ecc,	// (0x000a1c5c) list_calc_pane

0xc61e,	// (0x000a43ae) bg_calc_display_pane

0x0bb8,	// (0x00098948) calc_display_pane_t1

0x0bcd,	// (0x0009895d) calc_display_pane_t2

0x9ee6,	// (0x000a1c76) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x000a6e57) calc_display_pane_t

0x0be2,	// (0x00098972) cell_calc_pane_ParamLimits

0x0be2,	// (0x00098972) cell_calc_pane

0xc62a,	// (0x000a43ba) bg_calc_paper_pane_g1

0xc636,	// (0x000a43c6) bg_calc_paper_pane_g2

0xc642,	// (0x000a43d2) bg_calc_paper_pane_g3

0xc64e,	// (0x000a43de) bg_calc_paper_pane_g4

0xc65a,	// (0x000a43ea) bg_calc_paper_pane_g5

0x0c17,	// (0x000989a7) bg_calc_paper_pane_g6

0x0c26,	// (0x000989b6) bg_calc_paper_pane_g7

0x0c35,	// (0x000989c5) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x000a6e5e) bg_calc_paper_pane_g

0x0c48,	// (0x000989d8) calc_bg_paper_pane_g9

0x0c5b,	// (0x000989eb) list_calc_item_pane_ParamLimits

0x0c5b,	// (0x000989eb) list_calc_item_pane

0xc666,	// (0x000a43f6) list_calc_item_pane_g1

0x9ef8,	// (0x000a1c88) list_calc_item_pane_t1_ParamLimits

0x9ef8,	// (0x000a1c88) list_calc_item_pane_t1

0x0c73,	// (0x00098a03) list_calc_item_pane_t2_ParamLimits

0x0c73,	// (0x00098a03) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x000a6e6f) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x000a6e6f) list_calc_item_pane_t

0xc511,	// (0x000a42a1) cell_calc_pane_g1

0xc673,	// (0x000a4403) grid_highlight_pane_cp02

0x0ca5,	// (0x00098a35) bg_calc_display_pane_g1

0x0cae,	// (0x00098a3e) bg_calc_display_pane_g2

0xc920,	// (0x000a46b0) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x000a6e79) bg_calc_display_pane_g

0x0cb8,	// (0x00098a48) cell_qdial_pane_ParamLimits

0x0cb8,	// (0x00098a48) cell_qdial_pane

0x0ccc,	// (0x00098a5c) cell_qdial_pane_g1_ParamLimits

0x0ccc,	// (0x00098a5c) cell_qdial_pane_g1

0x0ce2,	// (0x00098a72) cell_qdial_pane_g2_ParamLimits

0x0ce2,	// (0x00098a72) cell_qdial_pane_g2

0xc695,	// (0x000a4425) cell_qdial_pane_g3_ParamLimits

0xc695,	// (0x000a4425) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x000a6e80) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x000a6e80) cell_qdial_pane_g

0x0d09,	// (0x00098a99) cell_qdial_pane_t1_ParamLimits

0x0d09,	// (0x00098a99) cell_qdial_pane_t1

0x0d21,	// (0x00098ab1) cell_qdial_pane_t2_ParamLimits

0x0d21,	// (0x00098ab1) cell_qdial_pane_t2

0x0d34,	// (0x00098ac4) cell_qdial_pane_t3_ParamLimits

0x0d34,	// (0x00098ac4) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x000a6e89) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x000a6e89) cell_qdial_pane_t

0xc29e,	// (0x000a402e) grid_highlight_pane_cp04

0xc6a1,	// (0x000a4431) thumbnail_qdial_pane_ParamLimits

0xc6a1,	// (0x000a4431) thumbnail_qdial_pane

0xc6fd,	// (0x000a448d) list_help_pane

0xc706,	// (0x000a4496) scroll_pane_cp02

0xc929,	// (0x000a46b9) help_list_pane_t1_ParamLimits

0xc929,	// (0x000a46b9) help_list_pane_t1

0x9f0a,	// (0x000a1c9a) bg_notes_pane_g2

0x9f12,	// (0x000a1ca2) bg_notes_pane_g3

0x9f1a,	// (0x000a1caa) notes_bg_pane_g1

0x9f22,	// (0x000a1cb2) notes_bg_pane_g4

0x9f2a,	// (0x000a1cba) notes_bg_pane_g5

0x9f32,	// (0x000a1cc2) notes_bg_pane_g6

0x9f3a,	// (0x000a1cca) notes_bg_pane_g7

0x9f42,	// (0x000a1cd2) notes_bg_pane_g8

0x9f4a,	// (0x000a1cda) notes_bg_pane_g9

0x0006,

0xf117,	// (0x000a6ea7) notes_bg_pane_g

0x0d47,	// (0x00098ad7) list_notes_text_pane_ParamLimits

0x0d47,	// (0x00098ad7) list_notes_text_pane

0xc70f,	// (0x000a449f) list_notes_text_pane_g1

0x0d5c,	// (0x00098aec) list_notes_text_pane_t1

0x0d6a,	// (0x00098afa) listscroll_cale_week_pane

0x0d96,	// (0x00098b26) bg_cale_heading_pane

0xc732,	// (0x000a44c2) bg_cale_pane_cp01

0x0dae,	// (0x00098b3e) cale_week_corner_pane

0x0dcd,	// (0x00098b5d) cale_week_day_heading_pane

0x0dea,	// (0x00098b7a) cale_week_scroll_pane_g1

0x0dfd,	// (0x00098b8d) cale_week_scroll_pane_g2

0x0e15,	// (0x00098ba5) cale_week_scroll_pane_g3

0x0e2d,	// (0x00098bbd) cale_week_scroll_pane_g4

0x0e45,	// (0x00098bd5) cale_week_scroll_pane_g5

0x0e65,	// (0x00098bf5) cale_week_scroll_pane_g6

0x0e85,	// (0x00098c15) cale_week_scroll_pane_g7

0x0ea5,	// (0x00098c35) cale_week_scroll_pane_g8

0x0ec9,	// (0x00098c59) cale_week_scroll_pane_g9

0x0ee1,	// (0x00098c71) cale_week_scroll_pane_g10

0x0ef9,	// (0x00098c89) cale_week_scroll_pane_g11

0x0f11,	// (0x00098ca1) cale_week_scroll_pane_g12

0x0f29,	// (0x00098cb9) cale_week_scroll_pane_g13

0x0f29,	// (0x00098cb9) cale_week_scroll_pane_g14

0x0f29,	// (0x00098cb9) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x000a6eb6) cale_week_scroll_pane_g

0x0f65,	// (0x00098cf5) cale_week_time_pane

0x0f89,	// (0x00098d19) grid_cale_week_pane

0xc761,	// (0x000a44f1) scroll_pane_cp08

0x0faf,	// (0x00098d3f) cell_cale_week_pane_ParamLimits

0x0faf,	// (0x00098d3f) cell_cale_week_pane

0x103d,	// (0x00098dcd) cale_week_day_heading_pane_t1

0x1067,	// (0x00098df7) cale_week_day_heading_pane_t2

0x1096,	// (0x00098e26) cale_week_day_heading_pane_t3

0x10c5,	// (0x00098e55) cale_week_day_heading_pane_t4

0x10f4,	// (0x00098e84) cale_week_day_heading_pane_t5

0x112b,	// (0x00098ebb) cale_week_day_heading_pane_t6

0x1162,	// (0x00098ef2) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x000a6ed7) cale_week_day_heading_pane_t

0xc77e,	// (0x000a450e) bg_cale_side_pane

0x118c,	// (0x00098f1c) cale_week_time_pane_t1

0x11a6,	// (0x00098f36) cale_week_time_pane_t2

0x11c0,	// (0x00098f50) cale_week_time_pane_t3

0x11da,	// (0x00098f6a) cale_week_time_pane_t4

0x11f4,	// (0x00098f84) cale_week_time_pane_t5

0x120e,	// (0x00098f9e) cale_week_time_pane_t6

0x1228,	// (0x00098fb8) cale_week_time_pane_t7

0x1242,	// (0x00098fd2) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x000a6ee6) cale_week_time_pane_t

0x125c,	// (0x00098fec) cell_cale_week_pane_g2

0x127b,	// (0x0009900b) cell_cale_week_pane_g3_ParamLimits

0x127b,	// (0x0009900b) cell_cale_week_pane_g3

0xc78c,	// (0x000a451c) grid_highlight_pane_cp07

0xc794,	// (0x000a4524) listscroll_gms_pane

0xc79e,	// (0x000a452e) grid_gms_pane

0xc7a7,	// (0x000a4537) listscroll_gms_pane_g1

0xc7af,	// (0x000a453f) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x000a6ef7) listscroll_gms_pane_g

0x1293,	// (0x00099023) scroll_pane_cp010

0x129e,	// (0x0009902e) cell_gms_pane_ParamLimits

0x129e,	// (0x0009902e) cell_gms_pane

0x12b1,	// (0x00099041) cell_gms_pane_g1

0xc7b7,	// (0x000a4547) cell_gms_pane_g2

0xc70f,	// (0x000a449f) cell_gms_pane_g3

0xc7bf,	// (0x000a454f) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x000a6efc) cell_gms_pane_g

0xc7c8,	// (0x000a4558) grid_highlight_pane_cp09

0x3172,	// (0x0009af02) phob_pre_status_pane_g1

0x317a,	// (0x0009af0a) phob_pre_status_pane_g2

0x3182,	// (0x0009af12) phob_pre_status_pane_g3

0x318a,	// (0x0009af1a) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x000a72ab) phob_pre_status_pane_g

0x319a,	// (0x0009af2a) phob_pre_status_pane_t1

0x31a8,	// (0x0009af38) phob_pre_status_pane_t2

0x31b8,	// (0x0009af48) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x000a72b6) phob_pre_status_pane_t

0xc7d0,	// (0x000a4560) bg_list_pane_cp05

0x12c1,	// (0x00099051) grid_vorec_pane

0x12c9,	// (0x00099059) vorec_t1

0x12d7,	// (0x00099067) vorec_t2

0x12e5,	// (0x00099075) vorec_t3

0x12f3,	// (0x00099083) vorec_t4

0xac08,	// (0x000a2998) vorec_t5

0x8aeb,	// (0x000a087b) vorec_t6

0x0004,

0xf175,	// (0x000a6f05) vorec_t

0x8af9,	// (0x000a0889) wait_bar_pane_cp01

0x130f,	// (0x0009909f) cell_vorec_pane_ParamLimits

0x130f,	// (0x0009909f) cell_vorec_pane

0x9f52,	// (0x000a1ce2) cell_vorec_pane_g1

0xc29e,	// (0x000a402e) grid_highlight_pane_cp05

0xc51b,	// (0x000a42ab) cams_zoom_pane

0xc51b,	// (0x000a42ab) image_vga_pane

0xc582,	// (0x000a4312) main_camera_pane_g1

0xc582,	// (0x000a4312) main_camera_pane_g2

0xc582,	// (0x000a4312) main_camera_pane_g3

0xc582,	// (0x000a4312) main_camera_pane_g4

0xc582,	// (0x000a4312) main_camera_pane_g5

0xc582,	// (0x000a4312) main_camera_pane_g6

0xc582,	// (0x000a4312) main_camera_pane_g7

0x0007,

0xf180,	// (0x000a6f10) main_camera_pane_g

0xc5ca,	// (0x000a435a) main_camera_pane_t1

0xc5ca,	// (0x000a435a) main_camera_pane_t2

0x0001,

0xf191,	// (0x000a6f21) main_camera_pane_t

0x1336,	// (0x000990c6) cams_zoom_pane_cp_ParamLimits

0x1336,	// (0x000990c6) cams_zoom_pane_cp

0x136a,	// (0x000990fa) image_cif_pane_ParamLimits

0x136a,	// (0x000990fa) image_cif_pane

0xac16,	// (0x000a29a6) image_subqcif_pane

0x137c,	// (0x0009910c) main_video_pane_g1_ParamLimits

0x137c,	// (0x0009910c) main_video_pane_g1

0x13aa,	// (0x0009913a) main_video_pane_g2_ParamLimits

0x13aa,	// (0x0009913a) main_video_pane_g2

0x13e4,	// (0x00099174) main_video_pane_g3_ParamLimits

0x13e4,	// (0x00099174) main_video_pane_g3

0x13e4,	// (0x00099174) main_video_pane_g4_ParamLimits

0x13e4,	// (0x00099174) main_video_pane_g4

0x1418,	// (0x000991a8) main_video_pane_g5_ParamLimits

0x1418,	// (0x000991a8) main_video_pane_g5

0xc7d8,	// (0x000a4568) main_video_pane_g6_ParamLimits

0xc7d8,	// (0x000a4568) main_video_pane_g6

0x0006,

0xf196,	// (0x000a6f26) main_video_pane_g_ParamLimits

0xf196,	// (0x000a6f26) main_video_pane_g

0x1434,	// (0x000991c4) main_video_pane_t1_ParamLimits

0x1434,	// (0x000991c4) main_video_pane_t1

0xc5c0,	// (0x000a4350) cams_zoom_pane_g1

0xc5c0,	// (0x000a4350) cams_zoom_pane_g2

0xc5c0,	// (0x000a4350) cams_zoom_pane_g3

0xc5c0,	// (0x000a4350) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x000a6f35) cams_zoom_pane_g

0xc51b,	// (0x000a42ab) grid_cams_pane

0xc51b,	// (0x000a42ab) linegrid_cams_pane

0x1478,	// (0x00099208) cell_cams_pane_ParamLimits

0x1478,	// (0x00099208) cell_cams_pane

0xac16,	// (0x000a29a6) cams_burst_image_pane

0xc5c0,	// (0x000a4350) cell_cams_pane_g1

0xac16,	// (0x000a29a6) grid_highlight_pane_cp03

0xc511,	// (0x000a42a1) mp_bg_pane_g1

0xac16,	// (0x000a29a6) bg_list_pane_cp03

0xac16,	// (0x000a29a6) bg_mp_pane

0xac16,	// (0x000a29a6) grid_mp_pane

0xc5c0,	// (0x000a4350) media_player_g1

0xcd3a,	// (0x000a4aca) media_player_t1

0xcd3a,	// (0x000a4aca) media_player_t2

0xcd3a,	// (0x000a4aca) media_player_t3

0xcd3a,	// (0x000a4aca) media_player_t4

0xcd3a,	// (0x000a4aca) media_player_t5

0xcd3a,	// (0x000a4aca) media_player_t6

0xcd3a,	// (0x000a4aca) media_player_t7

0x0006,

0xf505,	// (0x000a7295) media_player_t

0xac16,	// (0x000a29a6) wait_bar_pane_cp02

0xf4ea,	// (0x000a727a) main_usb_pane_t

0xcfa6,	// (0x000a4d36) cell_mp_pane

0xc511,	// (0x000a42a1) cell_mp_pane_g1

0xc29e,	// (0x000a402e) grid_highlight_pane_cp06

0xc7f2,	// (0x000a4582) grid_skin_colour_pane

0xc7fa,	// (0x000a458a) list_highlight_pane_cp03

0x148d,	// (0x0009921d) skin_g1

0xc802,	// (0x000a4592) skin_t1

0xc811,	// (0x000a45a1) skin_t2

0x0001,

0xf1d3,	// (0x000a6f63) skin_t

0x1495,	// (0x00099225) cell_skin_colour_pane_ParamLimits

0x1495,	// (0x00099225) cell_skin_colour_pane

0xc81f,	// (0x000a45af) cell_skin_colour_pane_g1

0x150e,	// (0x0009929e) call_video_g1_ParamLimits

0x150e,	// (0x0009929e) call_video_g1

0x152a,	// (0x000992ba) call_video_g2_ParamLimits

0x152a,	// (0x000992ba) call_video_g2

0x0001,

0xf1d8,	// (0x000a6f68) call_video_g_ParamLimits

0xf1d8,	// (0x000a6f68) call_video_g

0x157c,	// (0x0009930c) call_video_uplink_pane_cp1_ParamLimits

0x157c,	// (0x0009930c) call_video_uplink_pane_cp1

0xc831,	// (0x000a45c1) call_video_uplink_pane_cp2

0x161b,	// (0x000993ab) video_down_crop_pane_ParamLimits

0x161b,	// (0x000993ab) video_down_crop_pane

0x1712,	// (0x000994a2) video_down_pane_ParamLimits

0x1712,	// (0x000994a2) video_down_pane

0xc839,	// (0x000a45c9) video_down_subqcif_pane_ParamLimits

0xc839,	// (0x000a45c9) video_down_subqcif_pane

0xc851,	// (0x000a45e1) video_down_subqcif_pane_cp_ParamLimits

0xc851,	// (0x000a45e1) video_down_subqcif_pane_cp

0xc877,	// (0x000a4607) im_reading_pane_ParamLimits

0xc877,	// (0x000a4607) im_reading_pane

0x1822,	// (0x000995b2) im_writing_pane_ParamLimits

0x1822,	// (0x000995b2) im_writing_pane

0x1838,	// (0x000995c8) im_reading_pane_t1

0xc891,	// (0x000a4621) list_im_pane

0xc8a2,	// (0x000a4632) scroll_pane_cp07

0x1871,	// (0x00099601) im_writing_pane_t1_ParamLimits

0x1871,	// (0x00099601) im_writing_pane_t1

0xc8bb,	// (0x000a464b) im_writing_pane_t2_ParamLimits

0xc8bb,	// (0x000a464b) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x000a6f72) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x000a6f72) im_writing_pane_t

0xc29e,	// (0x000a402e) input_focus_pane_cp04

0xc29e,	// (0x000a402e) input_focus_pane_cp05

0x1886,	// (0x00099616) list_im_single_pane_ParamLimits

0x1886,	// (0x00099616) list_im_single_pane

0x189a,	// (0x0009962a) list_single_im_pane_t1

0xc7d0,	// (0x000a4560) blid_accuracy_pane

0xc7d0,	// (0x000a4560) blid_compass_pane

0xe493,	// (0x000a6223) main_location_t1

0xe493,	// (0x000a6223) main_location_t2

0xe493,	// (0x000a6223) main_location_t3

0x0002,

0xf514,	// (0x000a72a4) main_location_t

0xc29e,	// (0x000a402e) aid_levels_location

0xc511,	// (0x000a42a1) blid_accuracy_pane_g1

0xc511,	// (0x000a42a1) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x000a6fc1) blid_accuracy_pane_g

0xc903,	// (0x000a4693) wml_content_pane

0xc968,	// (0x000a46f8) wml_button_pane_ParamLimits

0xc968,	// (0x000a46f8) wml_button_pane

0x18a9,	// (0x00099639) wml_list_single_large_pane_ParamLimits

0x18a9,	// (0x00099639) wml_list_single_large_pane

0x18be,	// (0x0009964e) wml_list_single_medium_pane_ParamLimits

0x18be,	// (0x0009964e) wml_list_single_medium_pane

0x18d4,	// (0x00099664) wml_list_single_small_pane_ParamLimits

0x18d4,	// (0x00099664) wml_list_single_small_pane

0xc97c,	// (0x000a470c) wml_selection_box_pane_ParamLimits

0xc97c,	// (0x000a470c) wml_selection_box_pane

0xc98f,	// (0x000a471f) wml_list_single_pane_t1

0xc99e,	// (0x000a472e) wml_list_single_medium_pane_t1

0xc9ad,	// (0x000a473d) wml_list_single_large_pane_t1

0xc9bc,	// (0x000a474c) input_focus_pane_cp02_ParamLimits

0xc9bc,	// (0x000a474c) input_focus_pane_cp02

0xc9cf,	// (0x000a475f) wml_selection_box_pane_g1

0xc9d8,	// (0x000a4768) wml_selection_box_pane_t1_ParamLimits

0xc9d8,	// (0x000a4768) wml_selection_box_pane_t1

0xc4f9,	// (0x000a4289) bg_wml_button_pane_ParamLimits

0xc4f9,	// (0x000a4289) bg_wml_button_pane

0xc9f0,	// (0x000a4780) wml_button_pane_g1

0xc9f8,	// (0x000a4788) wml_button_pane_t1

0xc9f0,	// (0x000a4780) wml_button_bg_pane_g1

0xca08,	// (0x000a4798) wml_button_bg_pane_g2

0xca10,	// (0x000a47a0) wml_button_bg_pane_g3

0xca18,	// (0x000a47a8) wml_button_bg_pane_g4

0xca20,	// (0x000a47b0) wml_button_bg_pane_g5

0xca28,	// (0x000a47b8) wml_button_bg_pane_g6

0xca30,	// (0x000a47c0) wml_button_bg_pane_g7

0xca38,	// (0x000a47c8) wml_button_bg_pane_g8

0xca40,	// (0x000a47d0) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x000a6f77) wml_button_bg_pane_g

0x18ec,	// (0x0009967c) bg_list_pane_cp02

0xca48,	// (0x000a47d8) mce_header_pane_ParamLimits

0xca48,	// (0x000a47d8) mce_header_pane

0xca5e,	// (0x000a47ee) mce_icon_pane

0xca5e,	// (0x000a47ee) mce_image_pane

0xca67,	// (0x000a47f7) mce_text_pane_ParamLimits

0xca67,	// (0x000a47f7) mce_text_pane

0x18f4,	// (0x00099684) scroll_pane_cp03

0xc960,	// (0x000a46f0) scroll_pane_cp04

0xca7a,	// (0x000a480a) scroll_pane_cp05_ParamLimits

0xca7a,	// (0x000a480a) scroll_pane_cp05

0x18fe,	// (0x0009968e) mce_header_field_pane_ParamLimits

0x18fe,	// (0x0009968e) mce_header_field_pane

0x1915,	// (0x000996a5) mce_header_field_pane_2_ParamLimits

0x1915,	// (0x000996a5) mce_header_field_pane_2

0x192b,	// (0x000996bb) mce_header_field_pane_3

0x1933,	// (0x000996c3) list_single_mce_message_pane_ParamLimits

0x1933,	// (0x000996c3) list_single_mce_message_pane

0x1948,	// (0x000996d8) list_single_mce_smart_pane_ParamLimits

0x1948,	// (0x000996d8) list_single_mce_smart_pane

0xca86,	// (0x000a4816) input_focus_pane_cp03

0xca8f,	// (0x000a481f) list_header_data_pane

0x1968,	// (0x000996f8) mce_header_field_pane_t1

0x1978,	// (0x00099708) list_single_mce_header_pane_ParamLimits

0x1978,	// (0x00099708) list_single_mce_header_pane

0xca97,	// (0x000a4827) list_single_mce_header_pane_t1

0xcaa6,	// (0x000a4836) list_single_mce_message_pane_g1

0xcaae,	// (0x000a483e) list_single_mce_message_pane_t1

0x19b2,	// (0x00099742) bg_cale_heading_pane_cp01_ParamLimits

0x19b2,	// (0x00099742) bg_cale_heading_pane_cp01

0xcabc,	// (0x000a484c) bg_cale_pane_cp02_ParamLimits

0xcabc,	// (0x000a484c) bg_cale_pane_cp02

0x19ec,	// (0x0009977c) cale_month_corner_pane

0x1a0b,	// (0x0009979b) cale_month_day_heading_pane_ParamLimits

0x1a0b,	// (0x0009979b) cale_month_day_heading_pane

0x1a5d,	// (0x000997ed) cale_month_pane_g1_ParamLimits

0x1a5d,	// (0x000997ed) cale_month_pane_g1

0x1a8c,	// (0x0009981c) cale_month_pane_g2_ParamLimits

0x1a8c,	// (0x0009981c) cale_month_pane_g2

0x1abc,	// (0x0009984c) cale_month_pane_g3_ParamLimits

0x1abc,	// (0x0009984c) cale_month_pane_g3

0x1af8,	// (0x00099888) cale_month_pane_g4_ParamLimits

0x1af8,	// (0x00099888) cale_month_pane_g4

0x1b34,	// (0x000998c4) cale_month_pane_g5_ParamLimits

0x1b34,	// (0x000998c4) cale_month_pane_g5

0x1b7c,	// (0x0009990c) cale_month_pane_g6_ParamLimits

0x1b7c,	// (0x0009990c) cale_month_pane_g6

0x1bc8,	// (0x00099958) cale_month_pane_g7_ParamLimits

0x1bc8,	// (0x00099958) cale_month_pane_g7

0x1c1c,	// (0x000999ac) cale_month_pane_g8_ParamLimits

0x1c1c,	// (0x000999ac) cale_month_pane_g8

0x1c70,	// (0x00099a00) cale_month_pane_g9_ParamLimits

0x1c70,	// (0x00099a00) cale_month_pane_g9

0x1cc2,	// (0x00099a52) cale_month_pane_g10_ParamLimits

0x1cc2,	// (0x00099a52) cale_month_pane_g10

0x1d14,	// (0x00099aa4) cale_month_pane_g11_ParamLimits

0x1d14,	// (0x00099aa4) cale_month_pane_g11

0x1d66,	// (0x00099af6) cale_month_pane_g12_ParamLimits

0x1d66,	// (0x00099af6) cale_month_pane_g12

0x1db8,	// (0x00099b48) cale_month_pane_g13_ParamLimits

0x1db8,	// (0x00099b48) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x000a6f8a) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x000a6f8a) cale_month_pane_g

0x1e0a,	// (0x00099b9a) cale_month_week_pane

0x1e2e,	// (0x00099bbe) grid_cale_month_pane_ParamLimits

0x1e2e,	// (0x00099bbe) grid_cale_month_pane

0x1e77,	// (0x00099c07) cale_month_day_heading_pane_t1

0x1efd,	// (0x00099c8d) cale_month_day_heading_pane_t2

0x1f76,	// (0x00099d06) cale_month_day_heading_pane_t3

0x1fef,	// (0x00099d7f) cale_month_day_heading_pane_t4

0x2070,	// (0x00099e00) cale_month_day_heading_pane_t5

0x20f9,	// (0x00099e89) cale_month_day_heading_pane_t6

0x2182,	// (0x00099f12) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x000a6fa5) cale_month_day_heading_pane_t

0xc77e,	// (0x000a450e) bg_cale_side_pane_cp01

0x2213,	// (0x00099fa3) cale_month_week_pane_t1

0x222c,	// (0x00099fbc) cale_month_week_pane_t2

0x2245,	// (0x00099fd5) cale_month_week_pane_t3

0x225e,	// (0x00099fee) cale_month_week_pane_t4

0x2277,	// (0x0009a007) cale_month_week_pane_t5

0x2290,	// (0x0009a020) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x000a6fb4) cale_month_week_pane_t

0x22a9,	// (0x0009a039) cell_cale_month_pane_ParamLimits

0x22a9,	// (0x0009a039) cell_cale_month_pane

0x9f5c,	// (0x000a1cec) cell_cale_month_pane_g1

0x23d7,	// (0x0009a167) cell_cale_month_pane_t1_ParamLimits

0x23d7,	// (0x0009a167) cell_cale_month_pane_t1

0xc78c,	// (0x000a451c) grid_highlight_pane_cp08

0xc511,	// (0x000a42a1) main_smil_g1

0x2403,	// (0x0009a193) smil_status_pane

0xcafb,	// (0x000a488b) smil_text_pane

0xe3ab,	// (0x000a613b) bg_popup_call3_rect_pane_g8

0xe3b3,	// (0x000a6143) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x000a723d) bg_popup_call3_rect_pane_g

0xe55c,	// (0x000a62ec) smil_status_volume_pane_g1

0xcb05,	// (0x000a4895) smil_status_pane_t1

0xa0b2,	// (0x000a1e42) volume_smil_pane

0xcb1c,	// (0x000a48ac) list_smil_text_pane

0x2416,	// (0x0009a1a6) scroll_pane_cp011

0x2421,	// (0x0009a1b1) smil_text_list_pane_t1_ParamLimits

0x2421,	// (0x0009a1b1) smil_text_list_pane_t1

0x9f68,	// (0x000a1cf8) aid_volume_smil_ParamLimits

0x9f68,	// (0x000a1cf8) aid_volume_smil

0xc511,	// (0x000a42a1) smil_volume_pane_g1

0xc511,	// (0x000a42a1) smil_volume_pane_g2

0x0001,

0xf231,	// (0x000a6fc1) smil_volume_pane_g

0x0d6a,	// (0x00098afa) listscroll_cale_day_pane

0xcb26,	// (0x000a48b6) bg_cale_pane

0xcb3e,	// (0x000a48ce) list_cale_pane

0xcb61,	// (0x000a48f1) scroll_pane_cp09

0xcb72,	// (0x000a4902) cale_bg_pane_g1

0xcb7a,	// (0x000a490a) cale_bg_pane_g2

0xcb82,	// (0x000a4912) cale_bg_pane_g3

0xcb8a,	// (0x000a491a) cale_bg_pane_g4

0xcb92,	// (0x000a4922) cale_bg_pane_g5

0xcb9a,	// (0x000a492a) cale_bg_pane_g6

0xcba2,	// (0x000a4932) cale_bg_pane_g7

0xcbaa,	// (0x000a493a) cale_bg_pane_g8

0xcbb2,	// (0x000a4942) cale_bg_pane_g9

0x0008,

0xf236,	// (0x000a6fc6) cale_bg_pane_g

0x245d,	// (0x0009a1ed) list_cale_time_pane_ParamLimits

0x245d,	// (0x0009a1ed) list_cale_time_pane

0xcbc2,	// (0x000a4952) list_cale_time_pane_g1_ParamLimits

0xcbc2,	// (0x000a4952) list_cale_time_pane_g1

0xcbce,	// (0x000a495e) list_cale_time_pane_g2_ParamLimits

0xcbce,	// (0x000a495e) list_cale_time_pane_g2

0x2472,	// (0x0009a202) list_cale_time_pane_g3_ParamLimits

0x2472,	// (0x0009a202) list_cale_time_pane_g3

0x2480,	// (0x0009a210) list_cale_time_pane_g4_ParamLimits

0x2480,	// (0x0009a210) list_cale_time_pane_g4

0x248e,	// (0x0009a21e) list_cale_time_pane_g5_ParamLimits

0x248e,	// (0x0009a21e) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x000a6fd9) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x000a6fd9) list_cale_time_pane_g

0xcbe8,	// (0x000a4978) list_cale_time_pane_t1_ParamLimits

0xcbe8,	// (0x000a4978) list_cale_time_pane_t1

0xcc10,	// (0x000a49a0) list_cale_time_pane_t2_ParamLimits

0xcc10,	// (0x000a49a0) list_cale_time_pane_t2

0x26f0,	// (0x0009a480) aid_blid_cardinal_pane

0x272e,	// (0x0009a4be) compass_pane_t4

0xcc38,	// (0x000a49c8) list_cale_time_pane_t4_ParamLimits

0xcc38,	// (0x000a49c8) list_cale_time_pane_t4

0x273c,	// (0x0009a4cc) compass_pane_t5

0x274a,	// (0x0009a4da) compass_pane_t6

0x2758,	// (0x0009a4e8) compass_pane_t7

0xd0eb,	// (0x000a4e7b) navi_pane_cc_t1

0xd2c8,	// (0x000a5058) aid_phob_thumbnail_center_pane

0x2bc5,	// (0x0009a955) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x000a6fe6) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x000a6fe6) list_cale_time_pane_t

0xbab6,	// (0x000a3846) bg_popup_window_pane_cp02_ParamLimits

0xbab6,	// (0x000a3846) bg_popup_window_pane_cp02

0xcc60,	// (0x000a49f0) heading_pane_cp01_ParamLimits

0xcc60,	// (0x000a49f0) heading_pane_cp01

0xcc6c,	// (0x000a49fc) loc_req_pane_ParamLimits

0xcc6c,	// (0x000a49fc) loc_req_pane

0xcc7c,	// (0x000a4a0c) loc_type_pane_ParamLimits

0xcc7c,	// (0x000a4a0c) loc_type_pane

0xcc8e,	// (0x000a4a1e) loc_type_pane_t1_ParamLimits

0xcc8e,	// (0x000a4a1e) loc_type_pane_t1

0xcca0,	// (0x000a4a30) loc_type_pane_t2_ParamLimits

0xcca0,	// (0x000a4a30) loc_type_pane_t2

0xccb2,	// (0x000a4a42) loc_type_pane_t3_ParamLimits

0xccb2,	// (0x000a4a42) loc_type_pane_t3

0x0002,

0xf25d,	// (0x000a6fed) loc_type_pane_t_ParamLimits

0xf25d,	// (0x000a6fed) loc_type_pane_t

0xccc4,	// (0x000a4a54) list_loc_req_pane

0xccce,	// (0x000a4a5e) scroll_pane_cp012

0x249c,	// (0x0009a22c) list_single_loc_request_popup_menu_pane_ParamLimits

0x249c,	// (0x0009a22c) list_single_loc_request_popup_menu_pane

0xccd9,	// (0x000a4a69) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xccd9,	// (0x000a4a69) list_single_loc_request_popup_menu_pane_g1

0xcce5,	// (0x000a4a75) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcce5,	// (0x000a4a75) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x000a6ff4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x000a6ff4) list_single_loc_request_popup_menu_pane_g

0xccf1,	// (0x000a4a81) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xccf1,	// (0x000a4a81) list_single_loc_request_popup_menu_pane_t1

0xc4f9,	// (0x000a4289) bg_popup_window_pane_cp03_ParamLimits

0xc4f9,	// (0x000a4289) bg_popup_window_pane_cp03

0xcd07,	// (0x000a4a97) heading_loc_req_pane_ParamLimits

0xcd07,	// (0x000a4a97) heading_loc_req_pane

0x24a9,	// (0x0009a239) popup_dyc_status_message_window_g1_ParamLimits

0x24a9,	// (0x0009a239) popup_dyc_status_message_window_g1

0x24bd,	// (0x0009a24d) popup_dyc_status_message_window_t1_ParamLimits

0x24bd,	// (0x0009a24d) popup_dyc_status_message_window_t1

0x24d2,	// (0x0009a262) popup_dyc_status_message_window_t2_ParamLimits

0x24d2,	// (0x0009a262) popup_dyc_status_message_window_t2

0x24e7,	// (0x0009a277) popup_dyc_status_message_window_t3_ParamLimits

0x24e7,	// (0x0009a277) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x000a6ff9) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x000a6ff9) popup_dyc_status_message_window_t

0xc29e,	// (0x000a402e) bg_heading_pane_cp01

0xcd13,	// (0x000a4aa3) heading_loc_req_pane_g1

0xcd1b,	// (0x000a4aab) heading_loc_req_pane_g2

0xcd23,	// (0x000a4ab3) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x000a7000) heading_loc_req_pane_g

0xcd2b,	// (0x000a4abb) heading_loc_req_pane_t1

0xcd4a,	// (0x000a4ada) bg_popup_sub_pane_cp01_ParamLimits

0xcd4a,	// (0x000a4ada) bg_popup_sub_pane_cp01

0xcd58,	// (0x000a4ae8) popup_cale_events_window_g1_ParamLimits

0xcd58,	// (0x000a4ae8) popup_cale_events_window_g1

0xcd78,	// (0x000a4b08) popup_cale_events_window_g2_ParamLimits

0xcd78,	// (0x000a4b08) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x000a7022) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x000a7022) popup_cale_events_window_g

0xcd98,	// (0x000a4b28) popup_cale_events_window_t1_ParamLimits

0xcd98,	// (0x000a4b28) popup_cale_events_window_t1

0xcdaa,	// (0x000a4b3a) popup_cale_events_window_t2_ParamLimits

0xcdaa,	// (0x000a4b3a) popup_cale_events_window_t2

0xcde8,	// (0x000a4b78) popup_cale_events_window_t3_ParamLimits

0xcde8,	// (0x000a4b78) popup_cale_events_window_t3

0xce22,	// (0x000a4bb2) popup_cale_events_window_t4_ParamLimits

0xce22,	// (0x000a4bb2) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x000a7027) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x000a7027) popup_cale_events_window_t

0x250f,	// (0x0009a29f) call_type_pane

0x251f,	// (0x0009a2af) popup_call_status_window_g1

0x2533,	// (0x0009a2c3) popup_call_status_window_g2

0x2547,	// (0x0009a2d7) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x000a7030) popup_call_status_window_g

0xce58,	// (0x000a4be8) call_type_pane_g1

0xce61,	// (0x000a4bf1) call_type_pane_g2

0x0001,

0xf2a7,	// (0x000a7037) call_type_pane_g

0xc29e,	// (0x000a402e) bg_popup_sub_pane_cp02

0xce6a,	// (0x000a4bfa) listscroll_popup_wml_pane

0xce72,	// (0x000a4c02) list_wml_pane

0xce7c,	// (0x000a4c0c) scroll_pane_cp013

0xce87,	// (0x000a4c17) list_single_graphic_popup_wml_pane_ParamLimits

0xce87,	// (0x000a4c17) list_single_graphic_popup_wml_pane

0xc511,	// (0x000a42a1) list_single_graphic_popup_wml_pane_g1

0xce9b,	// (0x000a4c2b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x000a703c) list_single_graphic_popup_wml_pane_g

0xcea3,	// (0x000a4c33) list_single_graphic_popup_wml_pane_t1

0xceb9,	// (0x000a4c49) aid_call_pane

0xc4f1,	// (0x000a4281) popup_clock_analogue_window_g1

0xc4f1,	// (0x000a4281) popup_clock_analogue_window_g2

0x9f96,	// (0x000a1d26) popup_clock_analogue_window_g3

0x9f96,	// (0x000a1d26) popup_clock_analogue_window_g4

0xc511,	// (0x000a42a1) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x000a7041) popup_clock_analogue_window_g

0x9f9e,	// (0x000a1d2e) popup_clock_analogue_window_t1

0x9fac,	// (0x000a1d3c) clock_digital_number_pane_ParamLimits

0x9fac,	// (0x000a1d3c) clock_digital_number_pane

0x9fb8,	// (0x000a1d48) clock_digital_number_pane_cp02_ParamLimits

0x9fb8,	// (0x000a1d48) clock_digital_number_pane_cp02

0x9fc4,	// (0x000a1d54) clock_digital_number_pane_cp03_ParamLimits

0x9fc4,	// (0x000a1d54) clock_digital_number_pane_cp03

0x9fd0,	// (0x000a1d60) clock_digital_number_pane_cp04_ParamLimits

0x9fd0,	// (0x000a1d60) clock_digital_number_pane_cp04

0x9fe0,	// (0x000a1d70) clock_digital_separator_pane_ParamLimits

0x9fe0,	// (0x000a1d70) clock_digital_separator_pane

0x9fec,	// (0x000a1d7c) popup_clock_digital_window_t1

0xc511,	// (0x000a42a1) clock_digital_number_pane_g1

0xc511,	// (0x000a42a1) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x000a6fc1) clock_digital_number_pane_g

0xc511,	// (0x000a42a1) clock_digital_separator_pane_g1

0xc511,	// (0x000a42a1) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x000a6fc1) clock_digital_separator_pane_g

0xc29e,	// (0x000a402e) bg_popup_window_pane_cp04

0xcec1,	// (0x000a4c51) heading_pane_cp03

0xc7d0,	// (0x000a4560) listscroll_popup_gms_pane

0xc29e,	// (0x000a402e) grid_large_graphic_popup_pane

0xceca,	// (0x000a4c5a) listscroll_popup_gms_pane_g1

0xced3,	// (0x000a4c63) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x000a704c) listscroll_popup_gms_pane_g

0xcedc,	// (0x000a4c6c) scroll_pane_cp014

0xc574,	// (0x000a4304) cell_large_graphic_popup_pane_ParamLimits

0xc574,	// (0x000a4304) cell_large_graphic_popup_pane

0xc582,	// (0x000a4312) cell_large_graphic_popup_pane_g1_ParamLimits

0xc582,	// (0x000a4312) cell_large_graphic_popup_pane_g1

0xcee5,	// (0x000a4c75) cell_large_graphic_popup_pane_g2_ParamLimits

0xcee5,	// (0x000a4c75) cell_large_graphic_popup_pane_g2

0xcef3,	// (0x000a4c83) cell_large_graphic_popup_pane_g3_ParamLimits

0xcef3,	// (0x000a4c83) cell_large_graphic_popup_pane_g3

0xcf01,	// (0x000a4c91) cell_large_graphic_popup_pane_g4_ParamLimits

0xcf01,	// (0x000a4c91) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x000a7051) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x000a7051) cell_large_graphic_popup_pane_g

0xc29e,	// (0x000a402e) grid_highlight_pane_cp010

0xc511,	// (0x000a42a1) bg_popup_call_pane_g1

0xcf12,	// (0x000a4ca2) list_single_graphic_popup_conf_pane_ParamLimits

0xcf12,	// (0x000a4ca2) list_single_graphic_popup_conf_pane

0xcf25,	// (0x000a4cb5) list_highlight_pane_cp01

0xcf2e,	// (0x000a4cbe) list_single_graphic_popup_conf_pane_g1

0xcf36,	// (0x000a4cc6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x000a705a) list_single_graphic_popup_conf_pane_g

0xcf3e,	// (0x000a4cce) list_single_graphic_popup_conf_pane_t1

0xcf4c,	// (0x000a4cdc) linegrid_cams_pane_g1

0x2556,	// (0x0009a2e6) linegrid_cams_pane_g2

0xc70f,	// (0x000a449f) linegrid_cams_pane_g3

0xcf55,	// (0x000a4ce5) linegrid_cams_pane_g4

0x255f,	// (0x0009a2ef) linegrid_cams_pane_g5

0x2568,	// (0x0009a2f8) linegrid_cams_pane_g6

0xc7bf,	// (0x000a454f) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x000a705f) linegrid_cams_pane_g

0xcf5e,	// (0x000a4cee) popup_clock_analogue_window

0xcf5e,	// (0x000a4cee) popup_clock_digital_window

0xc29e,	// (0x000a402e) popup_phob_thumbnail_window

0xc511,	// (0x000a42a1) call_video_uplink_pane_g1

0xcf67,	// (0x000a4cf7) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x000a706e) call_video_uplink_pane_g

0xcf6f,	// (0x000a4cff) video_uplink_pane

0xcf77,	// (0x000a4d07) mce_image_pane_g1

0x2573,	// (0x0009a303) mce_image_pane_g2

0x257d,	// (0x0009a30d) mce_image_pane_g3

0x2585,	// (0x0009a315) mce_image_pane_g4

0x258d,	// (0x0009a31d) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x000a7073) mce_image_pane_g

0xcf81,	// (0x000a4d11) control_top_pane_stacon_cp01_ParamLimits

0xcf81,	// (0x000a4d11) control_top_pane_stacon_cp01

0xcf95,	// (0x000a4d25) uni_indicator_pane_stacon_cp01_ParamLimits

0xcf95,	// (0x000a4d25) uni_indicator_pane_stacon_cp01

0xcfa6,	// (0x000a4d36) bg_popup_sub_pane_cp03

0xcfb0,	// (0x000a4d40) chi_dic_find_pane

0x2595,	// (0x0009a325) listscroll_chi_dic_pane

0xcfb8,	// (0x000a4d48) main_pane_chidic_g1

0xcfc0,	// (0x000a4d50) chi_dic_find_pane_t1

0xcfce,	// (0x000a4d5e) find_chidic_pane

0xcfd7,	// (0x000a4d67) chi_dic_list_pane_ParamLimits

0xcfd7,	// (0x000a4d67) chi_dic_list_pane

0xcfe8,	// (0x000a4d78) scroll_pane_cp020

0xcff0,	// (0x000a4d80) find_chidic_pane_t1

0xc29e,	// (0x000a402e) input_focus_pane_cp06

0x25a9,	// (0x0009a339) list_chi_dic_pane_ParamLimits

0x25a9,	// (0x0009a339) list_chi_dic_pane

0x25bb,	// (0x0009a34b) list_chi_dic_pane_t1_ParamLimits

0x25bb,	// (0x0009a34b) list_chi_dic_pane_t1

0xc29e,	// (0x000a402e) list_highlight_pane_cp020

0xcfff,	// (0x000a4d8f) bg_cale_heading_pane_g1

0x25ce,	// (0x0009a35e) bg_cale_heading_pane_g2

0x25d6,	// (0x0009a366) bg_cale_heading_pane_g3

0x25de,	// (0x0009a36e) bg_cale_heading_pane_g4

0x25e8,	// (0x0009a378) bg_cale_heading_pane_g5

0x25f2,	// (0x0009a382) bg_cale_heading_pane_g6

0x25fa,	// (0x0009a38a) bg_cale_heading_pane_g7

0x2602,	// (0x0009a392) bg_cale_heading_pane_g8

0x260c,	// (0x0009a39c) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x000a707e) bg_cale_heading_pane_g

0xcfff,	// (0x000a4d8f) bg_cale_side_pane_g1

0x2616,	// (0x0009a3a6) bg_cale_side_pane_g2

0x261e,	// (0x0009a3ae) bg_cale_side_pane_g3

0x2626,	// (0x0009a3b6) bg_cale_side_pane_g4

0x262e,	// (0x0009a3be) bg_cale_side_pane_g5

0x2636,	// (0x0009a3c6) bg_cale_side_pane_g6

0x263e,	// (0x0009a3ce) bg_cale_side_pane_g7

0x2646,	// (0x0009a3d6) bg_cale_side_pane_g8

0x264e,	// (0x0009a3de) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x000a7091) bg_cale_side_pane_g

0x2656,	// (0x0009a3e6) popup_call_status_window_ParamLimits

0x2656,	// (0x0009a3e6) popup_call_status_window

0xd007,	// (0x000a4d97) stacon_top_pane

0xd00f,	// (0x000a4d9f) status_pane_ParamLimits

0xd00f,	// (0x000a4d9f) status_pane

0xd024,	// (0x000a4db4) status_small_pane

0xd02c,	// (0x000a4dbc) control_pane

0xc29e,	// (0x000a402e) stacon_bottom_pane

0xd034,	// (0x000a4dc4) list_single_mce_smart_pane_t1_ParamLimits

0xd034,	// (0x000a4dc4) list_single_mce_smart_pane_t1

0xd047,	// (0x000a4dd7) list_single_mce_smart_pane_t2_ParamLimits

0xd047,	// (0x000a4dd7) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x000a70a4) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x000a70a4) list_single_mce_smart_pane_t

0x269f,	// (0x0009a42f) compass_pane

0x26a8,	// (0x0009a438) main_location2_pane_t1

0x26ba,	// (0x0009a44a) main_location2_pane_t2

0x26cc,	// (0x0009a45c) main_location2_pane_t3

0x0003,

0xf319,	// (0x000a70a9) main_location2_pane_t

0xd066,	// (0x000a4df6) compass_pane_g1_ParamLimits

0xd066,	// (0x000a4df6) compass_pane_g1

0x2710,	// (0x0009a4a0) compass_pane_t1

0x271f,	// (0x0009a4af) compass_pane_t2

0x0005,

0xf322,	// (0x000a70b2) compass_pane_t

0x2766,	// (0x0009a4f6) text_secondary_cp61

0xd0e2,	// (0x000a4e72) navi_pane_cams_g5

0xd15e,	// (0x000a4eee) navi_pane_im_t1

0xd16c,	// (0x000a4efc) navi_pane_mp_g1_ParamLimits

0xd16c,	// (0x000a4efc) navi_pane_mp_g1

0xd180,	// (0x000a4f10) navi_pane_mp_g2_ParamLimits

0xd180,	// (0x000a4f10) navi_pane_mp_g2

0xd18c,	// (0x000a4f1c) navi_pane_mp_g3_ParamLimits

0xd18c,	// (0x000a4f1c) navi_pane_mp_g3

0x0002,

0xf336,	// (0x000a70c6) navi_pane_mp_g_ParamLimits

0xf336,	// (0x000a70c6) navi_pane_mp_g

0xd198,	// (0x000a4f28) navi_pane_mp_t1

0xd1a6,	// (0x000a4f36) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x000a70cd) navi_pane_mp_t

0xd211,	// (0x000a4fa1) navi_pane_vt_g1

0xd198,	// (0x000a4f28) navi_pane_vt_t1

0xd219,	// (0x000a4fa9) navi_slider_pane

0xc7d0,	// (0x000a4560) zooming_pane

0xd229,	// (0x000a4fb9) navi_slider_pane_g1

0xa009,	// (0x000a1d99) navi_slider_pane_g2

0x0006,

0xf344,	// (0x000a70d4) navi_slider_pane_g

0xd24d,	// (0x000a4fdd) aid_levels_zoom

0xd255,	// (0x000a4fe5) zooming_pane_g1

0xd25d,	// (0x000a4fed) zooming_pane_g2

0xd25d,	// (0x000a4fed) zooming_pane_g3

0x0002,

0xf353,	// (0x000a70e3) zooming_pane_g

0xd265,	// (0x000a4ff5) level_10_zoom

0xd26e,	// (0x000a4ffe) level_11_zoom

0xd277,	// (0x000a5007) level_1_zoom

0xd280,	// (0x000a5010) level_2_zoom

0xd289,	// (0x000a5019) level_3_zoom

0xd292,	// (0x000a5022) level_4_zoom

0xd29b,	// (0x000a502b) level_5_zoom

0xd2a4,	// (0x000a5034) level_6_zoom

0xd2ad,	// (0x000a503d) level_7_zoom

0xd2b6,	// (0x000a5046) level_8_zoom

0xd2bf,	// (0x000a504f) level_9_zoom

0xd2d0,	// (0x000a5060) popup_phob_thumbnail_window_g1

0xd2d8,	// (0x000a5068) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x000a70ea) popup_phob_thumbnail_window_g

0x31c8,	// (0x0009af58) level_1_location

0x31d0,	// (0x0009af60) level_2_location

0x31d8,	// (0x0009af68) level_3_location

0x31e0,	// (0x0009af70) level_4_location

0xc7d0,	// (0x000a4560) level_5_location

0x27b7,	// (0x0009a547) mce_icon_pane_g1

0x27c1,	// (0x0009a551) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x000a70ef) mce_icon_pane_g

0xd2e0,	// (0x000a5070) main_mup_pane_g1_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g1

0xd2e0,	// (0x000a5070) main_mup_pane_g2_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g2

0xd2e0,	// (0x000a5070) main_mup_pane_g3_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g3

0xd2e0,	// (0x000a5070) main_mup_pane_g4_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g4

0xd2e0,	// (0x000a5070) main_mup_pane_g5_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g5

0xd2e0,	// (0x000a5070) main_mup_pane_g6_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g6

0xd2e0,	// (0x000a5070) main_mup_pane_g7_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g7

0xd2e0,	// (0x000a5070) main_mup_pane_g8_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g8

0xd2e0,	// (0x000a5070) main_mup_pane_g9_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g9

0xd2e0,	// (0x000a5070) main_mup_pane_g10_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g10

0xd2e0,	// (0x000a5070) main_mup_pane_g11_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g11

0xc582,	// (0x000a4312) main_mup_pane_g12_ParamLimits

0xc582,	// (0x000a4312) main_mup_pane_g12

0xd2e0,	// (0x000a5070) main_mup_pane_g13_ParamLimits

0xd2e0,	// (0x000a5070) main_mup_pane_g13

0x000c,

0xf364,	// (0x000a70f4) main_mup_pane_g_ParamLimits

0xf364,	// (0x000a70f4) main_mup_pane_g

0xd2ee,	// (0x000a507e) main_mup_pane_t1_ParamLimits

0xd2ee,	// (0x000a507e) main_mup_pane_t1

0xd2ee,	// (0x000a507e) main_mup_pane_t2_ParamLimits

0xd2ee,	// (0x000a507e) main_mup_pane_t2

0xd2ee,	// (0x000a507e) main_mup_pane_t3_ParamLimits

0xd2ee,	// (0x000a507e) main_mup_pane_t3

0xc5ca,	// (0x000a435a) main_mup_pane_t4_ParamLimits

0xc5ca,	// (0x000a435a) main_mup_pane_t4

0xc5ca,	// (0x000a435a) main_mup_pane_t5_ParamLimits

0xc5ca,	// (0x000a435a) main_mup_pane_t5

0xc5de,	// (0x000a436e) main_mup_pane_t6_ParamLimits

0xc5de,	// (0x000a436e) main_mup_pane_t6

0x0005,

0xf37f,	// (0x000a710f) main_mup_pane_t_ParamLimits

0xf37f,	// (0x000a710f) main_mup_pane_t

0xc574,	// (0x000a4304) mup_progress_pane_ParamLimits

0xc574,	// (0x000a4304) mup_progress_pane

0xd302,	// (0x000a5092) mup_visualizer_pane_ParamLimits

0xd302,	// (0x000a5092) mup_visualizer_pane

0xd302,	// (0x000a5092) mup_volume_pane_ParamLimits

0xd302,	// (0x000a5092) mup_volume_pane

0xc590,	// (0x000a4320) mup_visualizer_pane_g1_ParamLimits

0xc590,	// (0x000a4320) mup_visualizer_pane_g1

0xd310,	// (0x000a50a0) mup_visualizer_pane_g2_ParamLimits

0xd310,	// (0x000a50a0) mup_visualizer_pane_g2

0xc582,	// (0x000a4312) mup_visualizer_pane_g3_ParamLimits

0xc582,	// (0x000a4312) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x000a711c) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x000a711c) mup_visualizer_pane_g

0xc5c0,	// (0x000a4350) mup_volume_pane_g1

0xc5c0,	// (0x000a4350) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x000a6e3f) mup_volume_pane_g

0xc5c0,	// (0x000a4350) mup_progress_pane_g1

0xc5c0,	// (0x000a4350) mup_progress_pane_g2

0xc5c0,	// (0x000a4350) mup_progress_pane_g3

0x0002,

0xf393,	// (0x000a7123) mup_progress_pane_g

0xc29e,	// (0x000a402e) bg_popup_window_pane_cp05

0xd31e,	// (0x000a50ae) heading_pane_cp02_ParamLimits

0xd31e,	// (0x000a50ae) heading_pane_cp02

0xd338,	// (0x000a50c8) list_popup_blid_pane

0xd340,	// (0x000a50d0) list_blid_sat_info_pane_ParamLimits

0xd340,	// (0x000a50d0) list_blid_sat_info_pane

0xd353,	// (0x000a50e3) list_blid_sat_info_pane_g1

0xd35b,	// (0x000a50eb) list_blid_sat_info_pane_t1

0x28c1,	// (0x0009a651) mup_equalizer_pane_ParamLimits

0x28c1,	// (0x0009a651) mup_equalizer_pane

0x28da,	// (0x0009a66a) mup_equalizer_pane_cp1_ParamLimits

0x28da,	// (0x0009a66a) mup_equalizer_pane_cp1

0x28f7,	// (0x0009a687) mup_equalizer_pane_cp2_ParamLimits

0x28f7,	// (0x0009a687) mup_equalizer_pane_cp2

0x2914,	// (0x0009a6a4) mup_equalizer_pane_cp3_ParamLimits

0x2914,	// (0x0009a6a4) mup_equalizer_pane_cp3

0x2935,	// (0x0009a6c5) mup_equalizer_pane_cp4_ParamLimits

0x2935,	// (0x0009a6c5) mup_equalizer_pane_cp4

0x2956,	// (0x0009a6e6) mup_equalizer_pane_cp5

0x296a,	// (0x0009a6fa) mup_equalizer_pane_cp6

0x297e,	// (0x0009a70e) mup_equalizer_pane_cp7

0xe42b,	// (0x000a61bb) bg_popup_call_poc_act_pane_g9

0xe433,	// (0x000a61c3) bg_popup_call_poc_act_pane_g10

0xe43b,	// (0x000a61cb) bg_popup_call_poc_act_pane_g11

0x000a,

0xc4f9,	// (0x000a4289) mup_scale_pane

0xc511,	// (0x000a42a1) mup_scale_pane_g1

0xd369,	// (0x000a50f9) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x000a713f) mup_scale_pane_g

0xd38d,	// (0x000a511d) msg_data_pane

0xd395,	// (0x000a5125) scroll_pane_cp017

0x29a4,	// (0x0009a734) bg_list_pane_cp04_ParamLimits

0x29a4,	// (0x0009a734) bg_list_pane_cp04

0xd39d,	// (0x000a512d) msg_data_pane_g1

0x29ca,	// (0x0009a75a) msg_data_pane_g2

0x29d4,	// (0x0009a764) msg_data_pane_g3

0x29dc,	// (0x0009a76c) msg_data_pane_g4

0x29e4,	// (0x0009a774) msg_data_pane_g5

0x29ec,	// (0x0009a77c) msg_data_pane_g6

0x29f4,	// (0x0009a784) msg_data_pane_g7

0x0006,

0xf3be,	// (0x000a714e) msg_data_pane_g

0x29fc,	// (0x0009a78c) msg_text_pane_ParamLimits

0x29fc,	// (0x0009a78c) msg_text_pane

0x2a2c,	// (0x0009a7bc) qrid_highlight_pane_cp011_ParamLimits

0x2a2c,	// (0x0009a7bc) qrid_highlight_pane_cp011

0xc29e,	// (0x000a402e) msg_body_pane

0xc4f9,	// (0x000a4289) msg_header_pane

0xd3b9,	// (0x000a5149) input_focus_pane_cp07

0x2a50,	// (0x0009a7e0) msg_header_pane_t1_ParamLimits

0x2a50,	// (0x0009a7e0) msg_header_pane_t1

0x2a6c,	// (0x0009a7fc) msg_header_pane_t2_ParamLimits

0x2a6c,	// (0x0009a7fc) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x000a7162) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x000a7162) msg_header_pane_t

0xd3da,	// (0x000a516a) msg_body_pane_g1

0x2a8c,	// (0x0009a81c) msg_body_pane_t1_ParamLimits

0x2a8c,	// (0x0009a81c) msg_body_pane_t1

0x2abd,	// (0x0009a84d) msg_body_pane_t2_ParamLimits

0x2abd,	// (0x0009a84d) msg_body_pane_t2

0x2acf,	// (0x0009a85f) msg_body_pane_t3_ParamLimits

0x2acf,	// (0x0009a85f) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x000a7167) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x000a7167) msg_body_pane_t

0x2b1b,	// (0x0009a8ab) main_viewer_pane_g1_ParamLimits

0x2b1b,	// (0x0009a8ab) main_viewer_pane_g1

0x2b29,	// (0x0009a8b9) main_viewer_pane_g2_ParamLimits

0x2b29,	// (0x0009a8b9) main_viewer_pane_g2

0x2b37,	// (0x0009a8c7) main_viewer_pane_g3_ParamLimits

0x2b37,	// (0x0009a8c7) main_viewer_pane_g3

0x2b46,	// (0x0009a8d6) main_viewer_pane_g4_ParamLimits

0x2b46,	// (0x0009a8d6) main_viewer_pane_g4

0xa033,	// (0x000a1dc3) main_viewer_pane_g5_ParamLimits

0xa033,	// (0x000a1dc3) main_viewer_pane_g5

0xa033,	// (0x000a1dc3) main_viewer_pane_g7_ParamLimits

0xa033,	// (0x000a1dc3) main_viewer_pane_g7

0xccd9,	// (0x000a4a69) main_viewer_pane_g8_ParamLimits

0xccd9,	// (0x000a4a69) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x000a7177) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x000a7177) main_viewer_pane_g

0xd3e2,	// (0x000a5172) viewer_content_pane_ParamLimits

0xd3e2,	// (0x000a5172) viewer_content_pane

0x2b82,	// (0x0009a912) main_postcard_pane_g1_ParamLimits

0x2b82,	// (0x0009a912) main_postcard_pane_g1

0x2b98,	// (0x0009a928) main_postcard_pane_g2_ParamLimits

0x2b98,	// (0x0009a928) main_postcard_pane_g2

0x2bae,	// (0x0009a93e) main_postcard_pane_g3_ParamLimits

0x2bae,	// (0x0009a93e) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x000a7188) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x000a7188) main_postcard_pane_g

0x2bc5,	// (0x0009a955) main_postcard_pane_g4

0xe56f,	// (0x000a62ff) smil_status_volume_pane_g2

0x2c08,	// (0x0009a998) postcard_pane_ParamLimits

0x2c08,	// (0x0009a998) postcard_pane

0xd3f0,	// (0x000a5180) postcard_pane_g1_ParamLimits

0xd3f0,	// (0x000a5180) postcard_pane_g1

0x2c4a,	// (0x0009a9da) postcard_pane_g2_ParamLimits

0x2c4a,	// (0x0009a9da) postcard_pane_g2

0x2c56,	// (0x0009a9e6) postcard_pane_g3_ParamLimits

0x2c56,	// (0x0009a9e6) postcard_pane_g3

0xd3fe,	// (0x000a518e) postcard_pane_g4_ParamLimits

0xd3fe,	// (0x000a518e) postcard_pane_g4

0x2c62,	// (0x0009a9f2) postcard_pane_g5_ParamLimits

0x2c62,	// (0x0009a9f2) postcard_pane_g5

0x2c77,	// (0x0009aa07) postcard_pane_g6_ParamLimits

0x2c77,	// (0x0009aa07) postcard_pane_g6

0xd3f0,	// (0x000a5180) postcard_pane_g7_ParamLimits

0xd3f0,	// (0x000a5180) postcard_pane_g7

0x0006,

0xf405,	// (0x000a7195) postcard_pane_g_ParamLimits

0xf405,	// (0x000a7195) postcard_pane_g

0x2c8b,	// (0x0009aa1b) main_mp2_pane_g1_ParamLimits

0x2c8b,	// (0x0009aa1b) main_mp2_pane_g1

0x2c97,	// (0x0009aa27) main_mp2_pane_g2_ParamLimits

0x2c97,	// (0x0009aa27) main_mp2_pane_g2

0x2ca3,	// (0x0009aa33) main_mp2_pane_g3_ParamLimits

0x2ca3,	// (0x0009aa33) main_mp2_pane_g3

0x0002,

0xf414,	// (0x000a71a4) main_mp2_pane_g_ParamLimits

0xf414,	// (0x000a71a4) main_mp2_pane_g

0x2caf,	// (0x0009aa3f) main_mp2_pane_t1_ParamLimits

0x2caf,	// (0x0009aa3f) main_mp2_pane_t1

0x2cc4,	// (0x0009aa54) main_mp2_pane_t2_ParamLimits

0x2cc4,	// (0x0009aa54) main_mp2_pane_t2

0x2cd6,	// (0x0009aa66) main_mp2_pane_t3_ParamLimits

0x2cd6,	// (0x0009aa66) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x000a71ab) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x000a71ab) main_mp2_pane_t

0xc51b,	// (0x000a42ab) pec_content_pane_ParamLimits

0xc51b,	// (0x000a42ab) pec_content_pane

0xac16,	// (0x000a29a6) scroll_pane_cp015

0xd302,	// (0x000a5092) pec_attribute_pane_ParamLimits

0xd302,	// (0x000a5092) pec_attribute_pane

0xc582,	// (0x000a4312) pec_content_pane_g1_ParamLimits

0xc582,	// (0x000a4312) pec_content_pane_g1

0xd40c,	// (0x000a519c) pec_content_pane_t1_ParamLimits

0xd40c,	// (0x000a519c) pec_content_pane_t1

0xd420,	// (0x000a51b0) pec_content_pane_t2_ParamLimits

0xd420,	// (0x000a51b0) pec_content_pane_t2

0x0001,

0xf422,	// (0x000a71b2) pec_content_pane_t_ParamLimits

0xf422,	// (0x000a71b2) pec_content_pane_t

0xc574,	// (0x000a4304) list_single_graphic_pane_cp01_ParamLimits

0xc574,	// (0x000a4304) list_single_graphic_pane_cp01

0xc4f9,	// (0x000a4289) bg_popup_sub_pane_cp04

0xd434,	// (0x000a51c4) popup_mup_playback_window_g1

0xd440,	// (0x000a51d0) popup_mup_playback_window_t1

0xd455,	// (0x000a51e5) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x000a71b7) popup_mup_playback_window_t

0xd48c,	// (0x000a521c) main_image_pane_g1_ParamLimits

0xd48c,	// (0x000a521c) main_image_pane_g1

0xd4cf,	// (0x000a525f) scroll_pane_cp018_ParamLimits

0xd4cf,	// (0x000a525f) scroll_pane_cp018

0xd4e7,	// (0x000a5277) scroll_pane_cp016_ParamLimits

0xd4e7,	// (0x000a5277) scroll_pane_cp016

0x2da0,	// (0x0009ab30) smil2_image_pane_ParamLimits

0x2da0,	// (0x0009ab30) smil2_image_pane

0x2dd0,	// (0x0009ab60) smil2_root_pane_ParamLimits

0x2dd0,	// (0x0009ab60) smil2_root_pane

0x2e08,	// (0x0009ab98) smil2_text_pane_ParamLimits

0x2e08,	// (0x0009ab98) smil2_text_pane

0xac16,	// (0x000a29a6) bg_list_pane_cp06

0xac16,	// (0x000a29a6) grid_radio_pane

0xc29e,	// (0x000a402e) bg_popup_window_pane_cp06

0xcd3a,	// (0x000a4aca) main_fmradio_pane_t1

0xe443,	// (0x000a61d3) heading_pane_cp04

0xcd3a,	// (0x000a4aca) main_fmradio_pane_t2

0xe44b,	// (0x000a61db) popup_cale_lunar_info_window_g1

0xcd3a,	// (0x000a4aca) main_fmradio_pane_t3

0xe453,	// (0x000a61e3) popup_cale_lunar_info_window_g2

0xcd3a,	// (0x000a4aca) main_fmradio_pane_t4

0x0001,

0xcd3a,	// (0x000a4aca) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x000a7287) popup_cale_lunar_info_window_g

0xf287,	// (0x000a7017) main_fmradio_pane_t

0xac16,	// (0x000a29a6) wait_bar_pane_cp03

0xc574,	// (0x000a4304) cell_fmradio_pane_ParamLimits

0xc574,	// (0x000a4304) cell_fmradio_pane

0xc582,	// (0x000a4312) cell_fmradio_pane_g1_ParamLimits

0xc582,	// (0x000a4312) cell_fmradio_pane_g1

0xac16,	// (0x000a29a6) grid_highlight_pane_cp011

0xd51b,	// (0x000a52ab) poc_content_pane_ParamLimits

0xd51b,	// (0x000a52ab) poc_content_pane

0xd52d,	// (0x000a52bd) scroll_pane_cp019

0x2e88,	// (0x0009ac18) popup_call_poc_act_window_ParamLimits

0x2e88,	// (0x0009ac18) popup_call_poc_act_window

0x2eac,	// (0x0009ac3c) popup_call_poc_inact_window_ParamLimits

0x2eac,	// (0x0009ac3c) popup_call_poc_inact_window

0xf4d3,	// (0x000a7263) bg_popup_call_poc_act_pane_g

0xe3bb,	// (0x000a614b) bg_popup_call_poc_inact_pane_g1

0xe3c3,	// (0x000a6153) bg_popup_call_poc_inact_pane_g2

0xd535,	// (0x000a52c5) popup_call_poc_act_window_g2

0xe3cb,	// (0x000a615b) bg_popup_call_poc_inact_pane_g3

0xe3d3,	// (0x000a6163) bg_popup_call_poc_inact_pane_g4

0xe3db,	// (0x000a616b) bg_popup_call_poc_inact_pane_g5

0xd53d,	// (0x000a52cd) popup_call_poc_act_window_t1_ParamLimits

0xd53d,	// (0x000a52cd) popup_call_poc_act_window_t1

0xd565,	// (0x000a52f5) popup_call_poc_act_window_t2_ParamLimits

0xd565,	// (0x000a52f5) popup_call_poc_act_window_t2

0xd58d,	// (0x000a531d) popup_call_poc_act_window_t3_ParamLimits

0xd58d,	// (0x000a531d) popup_call_poc_act_window_t3

0xd5b5,	// (0x000a5345) popup_call_poc_act_window_t4_ParamLimits

0xd5b5,	// (0x000a5345) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x000a71cc) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x000a71cc) popup_call_poc_act_window_t

0xe3e3,	// (0x000a6173) bg_popup_call_poc_inact_pane_g6

0xe3eb,	// (0x000a617b) bg_popup_call_poc_inact_pane_g7

0xe3f3,	// (0x000a6183) bg_popup_call_poc_inact_pane_g8

0xd5c7,	// (0x000a5357) popup_call_poc_inact_window_g2

0xe3fb,	// (0x000a618b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x000a7250) bg_popup_call_poc_inact_pane_g

0xd5cf,	// (0x000a535f) popup_call_poc_inact_window_t1_ParamLimits

0xd5cf,	// (0x000a535f) popup_call_poc_inact_window_t1

0xd5e4,	// (0x000a5374) popup_call_poc_inact_window_t2_ParamLimits

0xd5e4,	// (0x000a5374) popup_call_poc_inact_window_t2

0xd5f9,	// (0x000a5389) popup_call_poc_inact_window_t3_ParamLimits

0xd5f9,	// (0x000a5389) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x000a71d5) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x000a71d5) popup_call_poc_inact_window_t

0xe4e7,	// (0x000a6277) context_pane_ParamLimits

0x36ac,	// (0x0009b43c) signal_pane_ParamLimits

0xc7d0,	// (0x000a4560) main_call2_pane

0xa07e,	// (0x000a1e0e) popup_phob_thumbnail2_window_ParamLimits

0xa07e,	// (0x000a1e0e) popup_phob_thumbnail2_window

0xa01b,	// (0x000a1dab) aid_hotspot_pointer_arrow_pane

0xa023,	// (0x000a1db3) aid_hotspot_pointer_hand_pane

0x3192,	// (0x0009af22) phob_pre_status_pane_g5

0xc51b,	// (0x000a42ab) cams_zoom_pane_ParamLimits

0xc51b,	// (0x000a42ab) image_vga_pane_ParamLimits

0xc582,	// (0x000a4312) main_camera_pane_g1_ParamLimits

0xc582,	// (0x000a4312) main_camera_pane_g2_ParamLimits

0xc582,	// (0x000a4312) main_camera_pane_g3_ParamLimits

0xc582,	// (0x000a4312) main_camera_pane_g4_ParamLimits

0xc582,	// (0x000a4312) main_camera_pane_g5_ParamLimits

0xc582,	// (0x000a4312) main_camera_pane_g6_ParamLimits

0xc582,	// (0x000a4312) main_camera_pane_g7_ParamLimits

0xf180,	// (0x000a6f10) main_camera_pane_g_ParamLimits

0xc5ca,	// (0x000a435a) main_camera_pane_t1_ParamLimits

0xc5ca,	// (0x000a435a) main_camera_pane_t2_ParamLimits

0xf191,	// (0x000a6f21) main_camera_pane_t_ParamLimits

0xc4f9,	// (0x000a4289) bg_popup_preview_window_pane_cp01_ParamLimits

0xc4f9,	// (0x000a4289) bg_popup_preview_window_pane_cp01

0xd60e,	// (0x000a539e) popup_phob_thumbnail2_window_g1_ParamLimits

0xd60e,	// (0x000a539e) popup_phob_thumbnail2_window_g1

0xc29e,	// (0x000a402e) call2_cli_visual_pane

0x2ee0,	// (0x0009ac70) popup_call2_audio_conf_window_ParamLimits

0x2ee0,	// (0x0009ac70) popup_call2_audio_conf_window

0x2f00,	// (0x0009ac90) popup_call2_audio_first_window_ParamLimits

0x2f00,	// (0x0009ac90) popup_call2_audio_first_window

0x2f96,	// (0x0009ad26) popup_call2_audio_in_window_ParamLimits

0x2f96,	// (0x0009ad26) popup_call2_audio_in_window

0x2fde,	// (0x0009ad6e) popup_call2_audio_out_window_ParamLimits

0x2fde,	// (0x0009ad6e) popup_call2_audio_out_window

0x3048,	// (0x0009add8) popup_call2_audio_second_window_ParamLimits

0x3048,	// (0x0009add8) popup_call2_audio_second_window

0x30ae,	// (0x0009ae3e) popup_call2_audio_wait_window_ParamLimits

0x30ae,	// (0x0009ae3e) popup_call2_audio_wait_window

0xc29e,	// (0x000a402e) bg_popup_call2_act_pane_cp03

0xc4db,	// (0x000a426b) list_conf_pane_cp

0xd61a,	// (0x000a53aa) popup_call2_audio_conf_window_t1

0xcf12,	// (0x000a4ca2) list_single_graphic_popup_conf2_pane_ParamLimits

0xcf12,	// (0x000a4ca2) list_single_graphic_popup_conf2_pane

0xcf25,	// (0x000a4cb5) list_highlight_pane_cp04

0xd628,	// (0x000a53b8) list_single_graphic_popup_conf2_pane_g1

0xcf36,	// (0x000a4cc6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x000a71dc) list_single_graphic_popup_conf2_pane_g

0xd632,	// (0x000a53c2) list_single_graphic_popup_conf2_pane_t1

0xd640,	// (0x000a53d0) bg_popup_call2_act_pane_cp01_ParamLimits

0xd640,	// (0x000a53d0) bg_popup_call2_act_pane_cp01

0xd6ca,	// (0x000a545a) call_type_pane_cp05_ParamLimits

0xd6ca,	// (0x000a545a) call_type_pane_cp05

0xd71e,	// (0x000a54ae) popup_call2_audio_second_window_g1_ParamLimits

0xd71e,	// (0x000a54ae) popup_call2_audio_second_window_g1

0xd772,	// (0x000a5502) popup_call2_audio_second_window_g2_ParamLimits

0xd772,	// (0x000a5502) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x000a71e1) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x000a71e1) popup_call2_audio_second_window_g

0xd7d7,	// (0x000a5567) popup_call2_audio_second_window_t1_ParamLimits

0xd7d7,	// (0x000a5567) popup_call2_audio_second_window_t1

0xd892,	// (0x000a5622) popup_call2_audio_second_window_t2_ParamLimits

0xd892,	// (0x000a5622) popup_call2_audio_second_window_t2

0xd8e5,	// (0x000a5675) popup_call2_audio_second_window_t3_ParamLimits

0xd8e5,	// (0x000a5675) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x000a71e8) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x000a71e8) popup_call2_audio_second_window_t

0xc29e,	// (0x000a402e) bg_popup_call2_in_pane_cp02

0xc2a8,	// (0x000a4038) call_type_pane_cp04

0x30e8,	// (0x0009ae78) popup_call2_audio_wait_window_g1

0x30f0,	// (0x0009ae80) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x000a71f1) popup_call2_audio_wait_window_g

0xc2c0,	// (0x000a4050) popup_call2_audio_wait_window_t3

0xd9d8,	// (0x000a5768) bg_popup_call2_act_pane_ParamLimits

0xd9d8,	// (0x000a5768) bg_popup_call2_act_pane

0xda98,	// (0x000a5828) call_type_pane_cp03_ParamLimits

0xda98,	// (0x000a5828) call_type_pane_cp03

0xdafc,	// (0x000a588c) popup_call2_audio_first_window_g1_ParamLimits

0xdafc,	// (0x000a588c) popup_call2_audio_first_window_g1

0xdb6c,	// (0x000a58fc) popup_call2_audio_first_window_g2_ParamLimits

0xdb6c,	// (0x000a58fc) popup_call2_audio_first_window_g2

0xdbd0,	// (0x000a5960) popup_call2_audio_first_window_g3_ParamLimits

0xdbd0,	// (0x000a5960) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x000a71f6) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x000a71f6) popup_call2_audio_first_window_g

0xdc58,	// (0x000a59e8) popup_call2_audio_first_window_t1_ParamLimits

0xdc58,	// (0x000a59e8) popup_call2_audio_first_window_t1

0xdd5b,	// (0x000a5aeb) popup_call2_audio_first_window_t4_ParamLimits

0xdd5b,	// (0x000a5aeb) popup_call2_audio_first_window_t4

0xde3e,	// (0x000a5bce) popup_call2_audio_first_window_t5_ParamLimits

0xde3e,	// (0x000a5bce) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x000a7201) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x000a7201) popup_call2_audio_first_window_t

0xc4f1,	// (0x000a4281) bg_popup_call2_act_pane_g1

0xe45b,	// (0x000a61eb) popup_cale_lunar_info_window_t1

0xe469,	// (0x000a61f9) popup_cale_lunar_info_window_t2

0xe477,	// (0x000a6207) popup_cale_lunar_info_window_t3

0xc29e,	// (0x000a402e) bg_popup_call2_bubble_pane

0xdf3f,	// (0x000a5ccf) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf3f,	// (0x000a5ccf) bg_popup_call2_in_pane_cp01

0xbb3b,	// (0x000a38cb) call_type_pane_cp02

0x30f8,	// (0x0009ae88) popup_call2_audio_out_window_g1_ParamLimits

0x30f8,	// (0x0009ae88) popup_call2_audio_out_window_g1

0xdf87,	// (0x000a5d17) popup_call2_audio_out_window_g2_ParamLimits

0xdf87,	// (0x000a5d17) popup_call2_audio_out_window_g2

0x3124,	// (0x0009aeb4) popup_call2_audio_out_window_g3_ParamLimits

0x3124,	// (0x0009aeb4) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x000a720a) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x000a720a) popup_call2_audio_out_window_g

0xdfbe,	// (0x000a5d4e) popup_call2_audio_out_window_t1_ParamLimits

0xdfbe,	// (0x000a5d4e) popup_call2_audio_out_window_t1

0xe01d,	// (0x000a5dad) popup_call2_audio_out_window_t2_ParamLimits

0xe01d,	// (0x000a5dad) popup_call2_audio_out_window_t2

0xe071,	// (0x000a5e01) popup_call2_audio_out_window_t3_ParamLimits

0xe071,	// (0x000a5e01) popup_call2_audio_out_window_t3

0xe087,	// (0x000a5e17) popup_call2_audio_out_window_t4_ParamLimits

0xe087,	// (0x000a5e17) popup_call2_audio_out_window_t4

0xe09d,	// (0x000a5e2d) popup_call2_audio_out_window_t5_ParamLimits

0xe09d,	// (0x000a5e2d) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x000a7213) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x000a7213) popup_call2_audio_out_window_t

0xe101,	// (0x000a5e91) bg_popup_call2_in_pane_ParamLimits

0xe101,	// (0x000a5e91) bg_popup_call2_in_pane

0xe15d,	// (0x000a5eed) popup_call2_audio_in_window_g1_ParamLimits

0xe15d,	// (0x000a5eed) popup_call2_audio_in_window_g1

0xe195,	// (0x000a5f25) popup_call2_audio_in_window_g2_ParamLimits

0xe195,	// (0x000a5f25) popup_call2_audio_in_window_g2

0xe1cd,	// (0x000a5f5d) popup_call2_audio_in_window_g3_ParamLimits

0xe1cd,	// (0x000a5f5d) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x000a7220) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x000a7220) popup_call2_audio_in_window_g

0xe225,	// (0x000a5fb5) popup_call2_audio_in_window_t1_ParamLimits

0xe225,	// (0x000a5fb5) popup_call2_audio_in_window_t1

0xe2a5,	// (0x000a6035) popup_call2_audio_in_window_t2_ParamLimits

0xe2a5,	// (0x000a6035) popup_call2_audio_in_window_t2

0xe325,	// (0x000a60b5) popup_call2_audio_in_window_t3_ParamLimits

0xe325,	// (0x000a60b5) popup_call2_audio_in_window_t3

0xe33f,	// (0x000a60cf) popup_call2_audio_in_window_t4_ParamLimits

0xe33f,	// (0x000a60cf) popup_call2_audio_in_window_t4

0xe351,	// (0x000a60e1) popup_call2_audio_in_window_t5_ParamLimits

0xe351,	// (0x000a60e1) popup_call2_audio_in_window_t5

0xe366,	// (0x000a60f6) popup_call2_audio_in_window_t6_ParamLimits

0xe366,	// (0x000a60f6) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x000a7229) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x000a7229) popup_call2_audio_in_window_t

0xc4f1,	// (0x000a4281) bg_popup_call2_in_pane_g1

0xe485,	// (0x000a6215) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x000a728c) popup_cale_lunar_info_window_t

0xc4f9,	// (0x000a4289) bg_popup_call2_rect_pane_ParamLimits

0xc4f9,	// (0x000a4289) bg_popup_call2_rect_pane

0xc29e,	// (0x000a402e) call2_cli_visual_graphic_pane

0xc29e,	// (0x000a402e) call2_cli_visual_text_pane

0xa0a5,	// (0x000a1e35) smil_status_volume_pane_g3

0x0002,

0xc511,	// (0x000a42a1) call2_cli_visual_graphic_pane_g1

0xc511,	// (0x000a42a1) call2_cli_visual_graphic_pane_g2

0xc511,	// (0x000a42a1) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x000a7236) call2_cli_visual_graphic_pane_g

0xe37b,	// (0x000a610b) bg_popup_call2_rect_pane_g1

0xc6f5,	// (0x000a4485) bg_popup_call2_rect_pane_g2

0xe383,	// (0x000a6113) bg_popup_call2_rect_pane_g3

0xe38b,	// (0x000a611b) bg_popup_call2_rect_pane_g4

0xe393,	// (0x000a6123) bg_popup_call2_rect_pane_g5

0xe39b,	// (0x000a612b) bg_popup_call2_rect_pane_g6

0xe3a3,	// (0x000a6133) bg_popup_call2_rect_pane_g7

0xe3ab,	// (0x000a613b) bg_popup_call2_rect_pane_g8

0xe3b3,	// (0x000a6143) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x000a723d) bg_popup_call2_rect_pane_g

0xe3bb,	// (0x000a614b) bg_popup_call2_bubble_pane_g1

0xe3c3,	// (0x000a6153) bg_popup_call2_bubble_pane_g2

0xe3cb,	// (0x000a615b) bg_popup_call2_bubble_pane_g3

0xe3d3,	// (0x000a6163) bg_popup_call2_bubble_pane_g4

0xe3db,	// (0x000a616b) bg_popup_call2_bubble_pane_g5

0xe3e3,	// (0x000a6173) bg_popup_call2_bubble_pane_g6

0xe3eb,	// (0x000a617b) bg_popup_call2_bubble_pane_g7

0xe3f3,	// (0x000a6183) bg_popup_call2_bubble_pane_g8

0xe3fb,	// (0x000a618b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x000a7250) bg_popup_call2_bubble_pane_g

0x0d7c,	// (0x00098b0c) aid_cale_week_size_cell_pane

0x1322,	// (0x000990b2) aid_cams_cif_uncrop_pane_ParamLimits

0x1322,	// (0x000990b2) aid_cams_cif_uncrop_pane

0xc51b,	// (0x000a42ab) aid_cams_size_cell_ParamLimits

0xc51b,	// (0x000a42ab) aid_cams_size_cell

0xc51b,	// (0x000a42ab) grid_cams_pane_ParamLimits

0xc51b,	// (0x000a42ab) linegrid_cams_pane_ParamLimits

0x1540,	// (0x000992d0) call_video_pane_t1

0x155e,	// (0x000992ee) call_video_pane_t2

0x0001,

0xf1dd,	// (0x000a6f6d) call_video_pane_t

0x198c,	// (0x0009971c) aid_cale_month_size_cell_pane_ParamLimits

0x198c,	// (0x0009971c) aid_cale_month_size_cell_pane

0xf540,	// (0x000a72d0) smil_status_volume_pane_g

0xa0b2,	// (0x000a1e42) volume_smil_pane_ParamLimits

0x9e47,	// (0x000a1bd7) aid_popup2_width_pane

0x0cf3,	// (0x00098a83) cell_qdial_pane_g4_ParamLimits

0x0cf3,	// (0x00098a83) cell_qdial_pane_g4

0x26f0,	// (0x0009a480) aid_blid_cardinal_pane_ParamLimits

0x26fc,	// (0x0009a48c) aid_blid_destination_pane_ParamLimits

0x26fc,	// (0x0009a48c) aid_blid_destination_pane

0xc4f9,	// (0x000a4289) bg_popup_call_poc_act_pane_ParamLimits

0xc4f9,	// (0x000a4289) bg_popup_call_poc_act_pane

0xc4f9,	// (0x000a4289) bg_popup_call_poc_inact_pane_ParamLimits

0xc4f9,	// (0x000a4289) bg_popup_call_poc_inact_pane

0xe403,	// (0x000a6193) bg_popup_call_poc_act_pane_g1

0xe40b,	// (0x000a619b) bg_popup_call_poc_act_pane_g2

0xe413,	// (0x000a61a3) bg_popup_call_poc_act_pane_g3

0xe3d3,	// (0x000a6163) bg_popup_call_poc_act_pane_g4

0xe3db,	// (0x000a616b) bg_popup_call_poc_act_pane_g5

0xe41b,	// (0x000a61ab) bg_popup_call_poc_act_pane_g6

0xe3eb,	// (0x000a617b) bg_popup_call_poc_act_pane_g7

0xe423,	// (0x000a61b3) bg_popup_call_poc_act_pane_g8

0xc29e,	// (0x000a402e) main_usb_pane

0xa059,	// (0x000a1de9) popup_cale_lunar_info_window

0x1838,	// (0x000995c8) im_reading_pane_t1_ParamLimits

0xc891,	// (0x000a4621) list_im_pane_ParamLimits

0xc8a2,	// (0x000a4632) scroll_pane_cp07_ParamLimits

0xc29e,	// (0x000a402e) grid_highlight_pane_cp012

0xc4f9,	// (0x000a4289) mup_scale_pane_ParamLimits

0xc582,	// (0x000a4312) main_usb_pane_g1_ParamLimits

0xc582,	// (0x000a4312) main_usb_pane_g1

0xc582,	// (0x000a4312) main_usb_pane_g2_ParamLimits

0xc582,	// (0x000a4312) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x000a6f4c) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x000a6f4c) main_usb_pane_g

0xc5ca,	// (0x000a435a) main_usb_pane_t1_ParamLimits

0xc5ca,	// (0x000a435a) main_usb_pane_t1

0xc5ca,	// (0x000a435a) main_usb_pane_t2_ParamLimits

0xc5ca,	// (0x000a435a) main_usb_pane_t2

0xc5ca,	// (0x000a435a) main_usb_pane_t3_ParamLimits

0xc5ca,	// (0x000a435a) main_usb_pane_t3

0xc5ca,	// (0x000a435a) main_usb_pane_t4_ParamLimits

0xc5ca,	// (0x000a435a) main_usb_pane_t4

0xc5ca,	// (0x000a435a) main_usb_pane_t5_ParamLimits

0xc5ca,	// (0x000a435a) main_usb_pane_t5

0xc5ca,	// (0x000a435a) main_usb_pane_t6_ParamLimits

0xc5ca,	// (0x000a435a) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x000a727a) main_usb_pane_t_ParamLimits

0x269f,	// (0x0009a42f) aid_text_placing

0x26a8,	// (0x0009a438) main_location2_pane_t1_ParamLimits

0x26ba,	// (0x0009a44a) main_location2_pane_t2_ParamLimits

0x26cc,	// (0x0009a45c) main_location2_pane_t3_ParamLimits

0x26de,	// (0x0009a46e) main_location2_pane_t4_ParamLimits

0x26de,	// (0x0009a46e) main_location2_pane_t4

0xf319,	// (0x000a70a9) main_location2_pane_t_ParamLimits

0xc535,	// (0x000a42c5) find_pinb_pane_g2_ParamLimits

0xc535,	// (0x000a42c5) find_pinb_pane_g2

0x0001,

0xf095,	// (0x000a6e25) find_pinb_pane_g_ParamLimits

0xf095,	// (0x000a6e25) find_pinb_pane_g

0xc541,	// (0x000a42d1) find_pinb_pane_t1_ParamLimits

0xc553,	// (0x000a42e3) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x000a6e2a) find_pinb_pane_t_ParamLimits

0xc29e,	// (0x000a402e) main_call3_pane

0x1e77,	// (0x00099c07) cale_month_day_heading_pane_t1_ParamLimits

0x1efd,	// (0x00099c8d) cale_month_day_heading_pane_t2_ParamLimits

0x1f76,	// (0x00099d06) cale_month_day_heading_pane_t3_ParamLimits

0x1fef,	// (0x00099d7f) cale_month_day_heading_pane_t4_ParamLimits

0x2070,	// (0x00099e00) cale_month_day_heading_pane_t5_ParamLimits

0x20f9,	// (0x00099e89) cale_month_day_heading_pane_t6_ParamLimits

0x2182,	// (0x00099f12) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x000a6fa5) cale_month_day_heading_pane_t_ParamLimits

0xcb13,	// (0x000a48a3) smil_status_volume_pane

0x2c26,	// (0x0009a9b6) postcard_address_pane_ParamLimits

0x2c26,	// (0x0009a9b6) postcard_address_pane

0x2c38,	// (0x0009a9c8) postcard_message_pane_ParamLimits

0x2c38,	// (0x0009a9c8) postcard_message_pane

0x3150,	// (0x0009aee0) call2_cli_visual_pane_t1_ParamLimits

0x3150,	// (0x0009aee0) call2_cli_visual_pane_t1

0xe59a,	// (0x000a632a) postcard_message_pane_t1_ParamLimits

0xe59a,	// (0x000a632a) postcard_message_pane_t1

0xe582,	// (0x000a6312) postcard_address_pane_t1_ParamLimits

0xe582,	// (0x000a6312) postcard_address_pane_t1

0x385e,	// (0x0009b5ee) popup_call3_audio_in_window_ParamLimits

0x385e,	// (0x0009b5ee) popup_call3_audio_in_window

0x36e9,	// (0x0009b479) bg_popup_call3_in_pane_ParamLimits

0x36e9,	// (0x0009b479) bg_popup_call3_in_pane

0x375f,	// (0x0009b4ef) popup_call3_audio_in_window_g1_ParamLimits

0x375f,	// (0x0009b4ef) popup_call3_audio_in_window_g1

0x377f,	// (0x0009b50f) popup_call3_audio_in_window_g2_ParamLimits

0x377f,	// (0x0009b50f) popup_call3_audio_in_window_g2

0x379f,	// (0x0009b52f) popup_call3_audio_in_window_g3_ParamLimits

0x379f,	// (0x0009b52f) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x000a72d7) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x000a72d7) popup_call3_audio_in_window_g

0x37d0,	// (0x0009b560) popup_call3_audio_in_window_t1_ParamLimits

0x37d0,	// (0x0009b560) popup_call3_audio_in_window_t1

0x380e,	// (0x0009b59e) popup_call3_audio_in_window_t2_ParamLimits

0x380e,	// (0x0009b59e) popup_call3_audio_in_window_t2

0x384c,	// (0x0009b5dc) popup_call3_audio_in_window_t3_ParamLimits

0x384c,	// (0x0009b5dc) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x000a72e0) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x000a72e0) popup_call3_audio_in_window_t

0xc7d0,	// (0x000a4560) bg_popup_call3_rect_pane

0xe37b,	// (0x000a610b) bg_popup_call3_rect_pane_g1

0xc6f5,	// (0x000a4485) bg_popup_call3_rect_pane_g2

0xe383,	// (0x000a6113) bg_popup_call3_rect_pane_g3

0xe38b,	// (0x000a611b) bg_popup_call3_rect_pane_g4

0xe393,	// (0x000a6123) bg_popup_call3_rect_pane_g5

0xe39b,	// (0x000a612b) bg_popup_call3_rect_pane_g6

0xe3a3,	// (0x000a6133) bg_popup_call3_rect_pane_g7

0xac16,	// (0x000a29a6) mup_visualizer_osc_pane

0xac16,	// (0x000a29a6) mup_visualizer_spec_pane

0x3719,	// (0x0009b4a9) call3_video_qcif_pane_ParamLimits

0x3719,	// (0x0009b4a9) call3_video_qcif_pane

0x372c,	// (0x0009b4bc) call3_video_qcif_uncrop_pane_ParamLimits

0x372c,	// (0x0009b4bc) call3_video_qcif_uncrop_pane

0x373a,	// (0x0009b4ca) call3_video_subqcif_pane_ParamLimits

0x373a,	// (0x0009b4ca) call3_video_subqcif_pane

0x374e,	// (0x0009b4de) call3_video_subqcif_uncrop_pane_ParamLimits

0x374e,	// (0x0009b4de) call3_video_subqcif_uncrop_pane

0x37bf,	// (0x0009b54f) popup_call3_audio_in_window_g4_ParamLimits

0x37bf,	// (0x0009b54f) popup_call3_audio_in_window_g4

0xac16,	// (0x000a29a6) mup_spec_half_pane

0xac16,	// (0x000a29a6) mup_spec_half_pane_cp

0xac16,	// (0x000a29a6) mup_osc_middle_pane

0xc5c0,	// (0x000a4350) mup_visualizer_osc_pane_g1

0xe535,	// (0x000a62c5) mup_spec_bar_pane_ParamLimits

0xe535,	// (0x000a62c5) mup_spec_bar_pane

0xc5c0,	// (0x000a4350) mup_spec_bar_pane_g1

0xc5c0,	// (0x000a4350) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x000a6e3f) mup_spec_bar_pane_g

0x0d7c,	// (0x00098b0c) aid_cale_week_size_cell_pane_ParamLimits

0x0d96,	// (0x00098b26) bg_cale_heading_pane_ParamLimits

0xc732,	// (0x000a44c2) bg_cale_pane_cp01_ParamLimits

0x0dae,	// (0x00098b3e) cale_week_corner_pane_ParamLimits

0x0dcd,	// (0x00098b5d) cale_week_day_heading_pane_ParamLimits

0x0dea,	// (0x00098b7a) cale_week_scroll_pane_g1_ParamLimits

0x0dfd,	// (0x00098b8d) cale_week_scroll_pane_g2_ParamLimits

0x0e15,	// (0x00098ba5) cale_week_scroll_pane_g3_ParamLimits

0x0e2d,	// (0x00098bbd) cale_week_scroll_pane_g4_ParamLimits

0x0e45,	// (0x00098bd5) cale_week_scroll_pane_g5_ParamLimits

0x0e65,	// (0x00098bf5) cale_week_scroll_pane_g6_ParamLimits

0x0e85,	// (0x00098c15) cale_week_scroll_pane_g7_ParamLimits

0x0ea5,	// (0x00098c35) cale_week_scroll_pane_g8_ParamLimits

0x0ec9,	// (0x00098c59) cale_week_scroll_pane_g9_ParamLimits

0x0ee1,	// (0x00098c71) cale_week_scroll_pane_g10_ParamLimits

0x0ef9,	// (0x00098c89) cale_week_scroll_pane_g11_ParamLimits

0x0f11,	// (0x00098ca1) cale_week_scroll_pane_g12_ParamLimits

0x0f29,	// (0x00098cb9) cale_week_scroll_pane_g13_ParamLimits

0x0f29,	// (0x00098cb9) cale_week_scroll_pane_g14_ParamLimits

0x0f29,	// (0x00098cb9) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x000a6eb6) cale_week_scroll_pane_g_ParamLimits

0x0f65,	// (0x00098cf5) cale_week_time_pane_ParamLimits

0x0f89,	// (0x00098d19) grid_cale_week_pane_ParamLimits

0xc74f,	// (0x000a44df) listscroll_cale_week_pane_t1

0xc761,	// (0x000a44f1) scroll_pane_cp08_ParamLimits

0x19ec,	// (0x0009977c) cale_month_corner_pane_ParamLimits

0xcae9,	// (0x000a4879) cale_month_pane_t1

0x1e0a,	// (0x00099b9a) cale_month_week_pane_ParamLimits

0x251f,	// (0x0009a2af) popup_call_status_window_g1_ParamLimits

0x2533,	// (0x0009a2c3) popup_call_status_window_g2_ParamLimits

0x2547,	// (0x0009a2d7) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x000a7030) popup_call_status_window_g_ParamLimits

0xceb1,	// (0x000a4c41) aid_call2_pane

0x2a42,	// (0x0009a7d2) msg_header_pane_g1

0x2c26,	// (0x0009a9b6) postcard_address2_pane_ParamLimits

0x2c26,	// (0x0009a9b6) postcard_address2_pane

0x2c38,	// (0x0009a9c8) postcard_message2_pane_ParamLimits

0x2c38,	// (0x0009a9c8) postcard_message2_pane

0x36ba,	// (0x0009b44a) message2_row_pane_ParamLimits

0x36ba,	// (0x0009b44a) message2_row_pane

0x36d6,	// (0x0009b466) address2_row_pane_ParamLimits

0x36d6,	// (0x0009b466) address2_row_pane

0xe502,	// (0x000a6292) postcard_message2_row_pane_g1

0xe50a,	// (0x000a629a) postcard_message2_row_pane_t1

0xe502,	// (0x000a6292) address2_row_pane_g1

0xe50a,	// (0x000a629a) address2_row_pane_t1

0x12b9,	// (0x00099049) aid_size_cell_vorec

0xc29e,	// (0x000a402e) main_rss_pane

0xe518,	// (0x000a62a8) rss_list_single_pane_ParamLimits

0xe518,	// (0x000a62a8) rss_list_single_pane

0xe526,	// (0x000a62b6) rss_list_single_pane_t1

0xe526,	// (0x000a62b6) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x000a72cb) rss_list_single_pane_t

0xc29e,	// (0x000a402e) main_camera2_pane

0xc29e,	// (0x000a402e) main_video2_pane

0xa0c7,	// (0x000a1e57) cams_zoom_pane_cp2_ParamLimits

0xa0c7,	// (0x000a1e57) cams_zoom_pane_cp2

0xa0c7,	// (0x000a1e57) image2_vga_pane_ParamLimits

0xa0c7,	// (0x000a1e57) image2_vga_pane

0xa0d5,	// (0x000a1e65) main_camera2_pane_g1_ParamLimits

0xa0d5,	// (0x000a1e65) main_camera2_pane_g1

0xa0d5,	// (0x000a1e65) main_camera2_pane_g2_ParamLimits

0xa0d5,	// (0x000a1e65) main_camera2_pane_g2

0xa0d5,	// (0x000a1e65) main_camera2_pane_g3_ParamLimits

0xa0d5,	// (0x000a1e65) main_camera2_pane_g3

0xa0d5,	// (0x000a1e65) main_camera2_pane_g4_ParamLimits

0xa0d5,	// (0x000a1e65) main_camera2_pane_g4

0xa0d5,	// (0x000a1e65) main_camera2_pane_g5_ParamLimits

0xa0d5,	// (0x000a1e65) main_camera2_pane_g5

0xa0d5,	// (0x000a1e65) main_camera2_pane_g6_ParamLimits

0xa0d5,	// (0x000a1e65) main_camera2_pane_g6

0xa0d5,	// (0x000a1e65) main_camera2_pane_g7_ParamLimits

0xa0d5,	// (0x000a1e65) main_camera2_pane_g7

0xa0d5,	// (0x000a1e65) main_camera2_pane_g8_ParamLimits

0xa0d5,	// (0x000a1e65) main_camera2_pane_g8

0x0008,

0xf557,	// (0x000a72e7) main_camera2_pane_g_ParamLimits

0xf557,	// (0x000a72e7) main_camera2_pane_g

0x3880,	// (0x0009b610) main_camera2_pane_t1_ParamLimits

0x3880,	// (0x0009b610) main_camera2_pane_t1

0x3880,	// (0x0009b610) main_camera2_pane_t2_ParamLimits

0x3880,	// (0x0009b610) main_camera2_pane_t2

0x3880,	// (0x0009b610) main_camera2_pane_t3_ParamLimits

0x3880,	// (0x0009b610) main_camera2_pane_t3

0x3880,	// (0x0009b610) main_camera2_pane_t4_ParamLimits

0x3880,	// (0x0009b610) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x000a72fa) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x000a72fa) main_camera2_pane_t

0xa119,	// (0x000a1ea9) cams_zoom_pane_cp4_ParamLimits

0xa119,	// (0x000a1ea9) cams_zoom_pane_cp4

0x3894,	// (0x0009b624) image2_cif_pane_ParamLimits

0x3894,	// (0x0009b624) image2_cif_pane

0x9eac,	// (0x000a1c3c) image2_subqcif_pane_ParamLimits

0x9eac,	// (0x000a1c3c) image2_subqcif_pane

0x38a2,	// (0x0009b632) main_video2_pane_g1_ParamLimits

0x38a2,	// (0x0009b632) main_video2_pane_g1

0x38a2,	// (0x0009b632) main_video2_pane_g2_ParamLimits

0x38a2,	// (0x0009b632) main_video2_pane_g2

0x38a2,	// (0x0009b632) main_video2_pane_g3_ParamLimits

0x38a2,	// (0x0009b632) main_video2_pane_g3

0x38a2,	// (0x0009b632) main_video2_pane_g4_ParamLimits

0x38a2,	// (0x0009b632) main_video2_pane_g4

0x38a2,	// (0x0009b632) main_video2_pane_g5_ParamLimits

0x38a2,	// (0x0009b632) main_video2_pane_g5

0x38a2,	// (0x0009b632) main_video2_pane_g6_ParamLimits

0x38a2,	// (0x0009b632) main_video2_pane_g6

0x0005,

0xf579,	// (0x000a7309) main_video2_pane_g_ParamLimits

0xf579,	// (0x000a7309) main_video2_pane_g

0x38b0,	// (0x0009b640) main_video2_pane_t1_ParamLimits

0x38b0,	// (0x0009b640) main_video2_pane_t1

0x38b0,	// (0x0009b640) main_video2_pane_t2_ParamLimits

0x38b0,	// (0x0009b640) main_video2_pane_t2

0x38b0,	// (0x0009b640) main_video2_pane_t3_ParamLimits

0x38b0,	// (0x0009b640) main_video2_pane_t3

0x0002,

0xf586,	// (0x000a7316) main_video2_pane_t_ParamLimits

0xf586,	// (0x000a7316) main_video2_pane_t

0x31f4,	// (0x0009af84) call_muted_g2

0x0001,

0xf52d,	// (0x000a72bd) call_muted_g

0xc29e,	// (0x000a402e) main_mup2_pane

0xd2e0,	// (0x000a5070) main_mup2_pane_g1_ParamLimits

0xd2e0,	// (0x000a5070) main_mup2_pane_g1

0xd2e0,	// (0x000a5070) main_mup2_pane_g2_ParamLimits

0xd2e0,	// (0x000a5070) main_mup2_pane_g2

0xa153,	// (0x000a1ee3) main_mup_pane_g13_cp1

0x9eba,	// (0x000a1c4a) mup_volume_pane_cp1

0xd2e0,	// (0x000a5070) main_mup2_pane_g4_ParamLimits

0xd2e0,	// (0x000a5070) main_mup2_pane_g4

0xd2e0,	// (0x000a5070) main_mup2_pane_g5_ParamLimits

0xd2e0,	// (0x000a5070) main_mup2_pane_g5

0xd2e0,	// (0x000a5070) main_mup2_pane_g6_ParamLimits

0xd2e0,	// (0x000a5070) main_mup2_pane_g6

0xd2e0,	// (0x000a5070) main_mup2_pane_g7_ParamLimits

0xd2e0,	// (0x000a5070) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x000a731d) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x000a731d) main_mup2_pane_g

0xd2ee,	// (0x000a507e) main_mup2_pane_t1_ParamLimits

0xd2ee,	// (0x000a507e) main_mup2_pane_t1

0xd2ee,	// (0x000a507e) main_mup2_pane_t2_ParamLimits

0xd2ee,	// (0x000a507e) main_mup2_pane_t2

0xd2ee,	// (0x000a507e) main_mup2_pane_t3_ParamLimits

0xd2ee,	// (0x000a507e) main_mup2_pane_t3

0xd2ee,	// (0x000a507e) main_mup2_pane_t4_ParamLimits

0xd2ee,	// (0x000a507e) main_mup2_pane_t4

0xd2ee,	// (0x000a507e) main_mup2_pane_t5_ParamLimits

0xd2ee,	// (0x000a507e) main_mup2_pane_t5

0xd2ee,	// (0x000a507e) main_mup2_pane_t6_ParamLimits

0xd2ee,	// (0x000a507e) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x000a732c) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x000a732c) main_mup2_pane_t

0xd302,	// (0x000a5092) mup2_visualizer_pane_ParamLimits

0xd302,	// (0x000a5092) mup2_visualizer_pane

0xd302,	// (0x000a5092) mup_progress_pane_cp_ParamLimits

0xd302,	// (0x000a5092) mup_progress_pane_cp

0xa13d,	// (0x000a1ecd) mup_volume_pane_cp_ParamLimits

0xa13d,	// (0x000a1ecd) mup_volume_pane_cp

0xc582,	// (0x000a4312) mup2_visualizer_pane_g1_ParamLimits

0xc582,	// (0x000a4312) mup2_visualizer_pane_g1

0xc590,	// (0x000a4320) mup2_visualizer_pane_g2_ParamLimits

0xc590,	// (0x000a4320) mup2_visualizer_pane_g2

0xc590,	// (0x000a4320) mup2_visualizer_pane_g3_ParamLimits

0xc590,	// (0x000a4320) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x000a6e2f) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x000a6e2f) mup2_visualizer_pane_g

0xac16,	// (0x000a29a6) aid_size_cell_fmradio

0x33a6,	// (0x0009b136) aid_height_parent_landcape

0xc947,	// (0x000a46d7) wml_content_pane_cp

0xc94f,	// (0x000a46df) wml_tabs_pane

0xc958,	// (0x000a46e8) popup_wml_miniature_window

0xc960,	// (0x000a46f0) scroll_pane_cp021

0xc974,	// (0x000a4704) wml_content_pane_comp8

0xc29e,	// (0x000a402e) bg_popup_sub_pane_cp05

0xe5cc,	// (0x000a635c) popup_wml_miniature_window_g1

0xe5d4,	// (0x000a6364) wml_miniature_view_pane

0x38c4,	// (0x0009b654) aid_size_wml_view

0x38cc,	// (0x0009b65c) wml_miniature_view_pane_g1

0x38d5,	// (0x0009b665) wml_miniature_view_pane_g2

0x38de,	// (0x0009b66e) wml_miniature_view_pane_g3

0x38e6,	// (0x0009b676) wml_miniature_view_pane_g4

0x38ee,	// (0x0009b67e) wml_miniature_view_pane_g5

0x38f6,	// (0x0009b686) wml_miniature_view_pane_g6

0x38fe,	// (0x0009b68e) wml_miniature_view_pane_g7

0x3906,	// (0x0009b696) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x000a7339) wml_miniature_view_pane_g

0xe5dc,	// (0x000a636c) background_graphic_ParamLimits

0xe5dc,	// (0x000a636c) background_graphic

0xe5e8,	// (0x000a6378) wml_tabs_2_pane

0xe5f1,	// (0x000a6381) wml_tabs_3_pane_ParamLimits

0xe5f1,	// (0x000a6381) wml_tabs_3_pane

0xe603,	// (0x000a6393) wml_tabs_4_pane_ParamLimits

0xe603,	// (0x000a6393) wml_tabs_4_pane

0xe619,	// (0x000a63a9) wml_tabs_5_pane_ParamLimits

0xe619,	// (0x000a63a9) wml_tabs_5_pane

0xe633,	// (0x000a63c3) wml_tabs_pane_g2_ParamLimits

0xe633,	// (0x000a63c3) wml_tabs_pane_g2

0xe678,	// (0x000a6408) wml_tabs_pane_g3_ParamLimits

0xe678,	// (0x000a6408) wml_tabs_pane_g3

0xe68d,	// (0x000a641d) wml_tabs_2_active_pane_ParamLimits

0xe68d,	// (0x000a641d) wml_tabs_2_active_pane

0xe68d,	// (0x000a641d) wml_tabs_2_passive_pane_ParamLimits

0xe68d,	// (0x000a641d) wml_tabs_2_passive_pane

0x390e,	// (0x0009b69e) wml_tabs_3_active_pane_cp_ParamLimits

0x390e,	// (0x0009b69e) wml_tabs_3_active_pane_cp

0x3923,	// (0x0009b6b3) wml_tabs_3_passive_pane_ParamLimits

0x3923,	// (0x0009b6b3) wml_tabs_3_passive_pane

0x3936,	// (0x0009b6c6) wml_tabs_3_passive_pane_cp_ParamLimits

0x3936,	// (0x0009b6c6) wml_tabs_3_passive_pane_cp

0x394d,	// (0x0009b6dd) tabs_4_active_pane

0x3955,	// (0x0009b6e5) tabs_4_passive_pane

0x395f,	// (0x0009b6ef) tabs_4_passive_pane_cp

0x3967,	// (0x0009b6f7) tabs_4_passive_pane_cp2

0x316a,	// (0x0009aefa) aid_height_text

0xd302,	// (0x000a5092) mup_volume_cont_pane_ParamLimits

0xd302,	// (0x000a5092) mup_volume_cont_pane

0xac16,	// (0x000a29a6) aid_size_cell_pinb

0xac16,	// (0x000a29a6) aid_size_list_pinb

0xd302,	// (0x000a5092) mup2_volume_cont_pane_ParamLimits

0xd302,	// (0x000a5092) mup2_volume_cont_pane

0xa127,	// (0x000a1eb7) mup2_volume_cont_pane_g1_ParamLimits

0xa127,	// (0x000a1eb7) mup2_volume_cont_pane_g1

0x083a,	// (0x000985ca) aid_size_cell_touch_ParamLimits

0x083a,	// (0x000985ca) aid_size_cell_touch

0x0a66,	// (0x000987f6) touch_pane_ParamLimits

0x0a66,	// (0x000987f6) touch_pane

0x9eba,	// (0x000a1c4a) main_rss2_pane

0xe6a4,	// (0x000a6434) listscroll_rss2_pane

0xe6ad,	// (0x000a643d) rss2_navigation_pane

0xe6b5,	// (0x000a6445) list_rss2_pane

0xcfe8,	// (0x000a4d78) scroll_pane_cp22

0xe6bd,	// (0x000a644d) rss2_navigation_pane_g1

0xe6c6,	// (0x000a6456) rss2_navigation_pane_g2

0xe6ce,	// (0x000a645e) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x000a734a) rss2_navigation_pane_g

0xe6d6,	// (0x000a6466) rss2_navigation_pane_t1

0x3971,	// (0x0009b701) rss2_list_single_pane_ParamLimits

0x3971,	// (0x0009b701) rss2_list_single_pane

0xe6e4,	// (0x000a6474) rss2_list_single_pane_t2

0xe6f2,	// (0x000a6482) rss2_list_single_pane_t3_ParamLimits

0xe6f2,	// (0x000a6482) rss2_list_single_pane_t3

0xe70f,	// (0x000a649f) rss2_list_single_pane_t4

0x240c,	// (0x0009a19c) smil_status_pane_g1

0x9eac,	// (0x000a1c3c) main_image2_pane_ParamLimits

0x9eac,	// (0x000a1c3c) main_image2_pane

0xa0d5,	// (0x000a1e65) main_camera2_pane_g9_ParamLimits

0xa0d5,	// (0x000a1e65) main_camera2_pane_g9

0x3880,	// (0x0009b610) main_camera2_pane_t5_ParamLimits

0x3880,	// (0x0009b610) main_camera2_pane_t5

0xa0e3,	// (0x000a1e73) main_camera2_pane_t6_ParamLimits

0xa0e3,	// (0x000a1e73) main_camera2_pane_t6

0x3986,	// (0x0009b716) main_image2_pane_g1_ParamLimits

0x3986,	// (0x0009b716) main_image2_pane_g1

0x2e3e,	// (0x0009abce) smil2_video_pane_ParamLimits

0x2e3e,	// (0x0009abce) smil2_video_pane

0x9e63,	// (0x000a1bf3) aid_zoom_text_primary_cp

0x9ea2,	// (0x000a1c32) popup_preview_fixed_window

0xc889,	// (0x000a4619) im_reading_pane_g1

0x3872,	// (0x0009b602) cams2_bc_adjust_pane_cp_ParamLimits

0x3872,	// (0x0009b602) cams2_bc_adjust_pane_cp

0xa10b,	// (0x000a1e9b) cams2_bc_adjust_pane_ParamLimits

0xa10b,	// (0x000a1e9b) cams2_bc_adjust_pane

0xa153,	// (0x000a1ee3) cams2_bc_adjust_pane_g1

0x9eba,	// (0x000a1c4a) cams2_slider_pane

0xa153,	// (0x000a1ee3) cams2_slider_pane_g1

0xa153,	// (0x000a1ee3) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x000a7351) cams2_slider_pane_g

0x0b2e,	// (0x000988be) calc_display_pane_ParamLimits

0x0b53,	// (0x000988e3) calc_paper_pane_ParamLimits

0x0b76,	// (0x00098906) grid_calc_pane_ParamLimits

0x9fec,	// (0x000a1d7c) popup_clock_digital_window_t1_ParamLimits

0xd4b8,	// (0x000a5248) main_image_pane_t1

0x0b10,	// (0x000988a0) aid_size_cell_calc_ParamLimits

0x0b10,	// (0x000988a0) aid_size_cell_calc

0x33fe,	// (0x0009b18e) popup_blid_sat_info2_window_ParamLimits

0x33fe,	// (0x0009b18e) popup_blid_sat_info2_window

0xe71d,	// (0x000a64ad) aid_size_cell_blid

0xe648,	// (0x000a63d8) bg_popup_window_pane_cp07

0xe73a,	// (0x000a64ca) grid_popup_blid_pane

0xe744,	// (0x000a64d4) heading_pane_cp05_ParamLimits

0xe744,	// (0x000a64d4) heading_pane_cp05

0xe80e,	// (0x000a659e) cell_popup_blid_pane_ParamLimits

0xe80e,	// (0x000a659e) cell_popup_blid_pane

0xe832,	// (0x000a65c2) cell_popup_blid_pane_g1

0xe83a,	// (0x000a65ca) cell_popup_blid_pane_t1

0xd302,	// (0x000a5092) mup2_indicator_pane_ParamLimits

0xd302,	// (0x000a5092) mup2_indicator_pane

0xac16,	// (0x000a29a6) mup2_visualizer_osc_pane

0xe5b6,	// (0x000a6346) mup2_visualizer_spec_pane_ParamLimits

0xe5b6,	// (0x000a6346) mup2_visualizer_spec_pane

0xac16,	// (0x000a29a6) mup2_spec_half_pane

0xac16,	// (0x000a29a6) mup2_spec_half_pane_cp

0xe848,	// (0x000a65d8) mup2_spec_bar_pane_ParamLimits

0xe848,	// (0x000a65d8) mup2_spec_bar_pane

0xc5c0,	// (0x000a4350) mup2_spec_bar_pane_g1

0xe867,	// (0x000a65f7) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x000a7377) mup2_spec_bar_pane_g

0xac16,	// (0x000a29a6) mup2_osc_middle_pane

0xc5c0,	// (0x000a4350) mup2_visualizer_osc_pane_g1

0xac40,	// (0x000a29d0) popup_number_entry_window_t1_ParamLimits

0xba7f,	// (0x000a380f) popup_number_entry_window_t2_ParamLimits

0xba91,	// (0x000a3821) popup_number_entry_window_t3_ParamLimits

0x0ab8,	// (0x00098848) popup_number_entry_window_t5_ParamLimits

0x0ab8,	// (0x00098848) popup_number_entry_window_t5

0xf040,	// (0x000a6dd0) popup_number_entry_window_t_ParamLimits

0xbaa3,	// (0x000a3833) text_title_cp2_ParamLimits

0xa02b,	// (0x000a1dbb) aid_hotspot_pointer_text2_pane

0xa045,	// (0x000a1dd5) main_viewer_pane_g9_ParamLimits

0xa045,	// (0x000a1dd5) main_viewer_pane_g9

0xcae9,	// (0x000a4879) cale_month_pane_t1_ParamLimits

0xcb26,	// (0x000a48b6) bg_cale_pane_ParamLimits

0xcb3e,	// (0x000a48ce) list_cale_pane_ParamLimits

0xcb4f,	// (0x000a48df) listscroll_cale_day_pane_t1

0xcb61,	// (0x000a48f1) scroll_pane_cp09_ParamLimits

0x27c9,	// (0x0009a559) main_mup_eq_pane_t1_ParamLimits

0x27c9,	// (0x0009a559) main_mup_eq_pane_t1

0x27e3,	// (0x0009a573) main_mup_eq_pane_t2_ParamLimits

0x27e3,	// (0x0009a573) main_mup_eq_pane_t2

0x27fd,	// (0x0009a58d) main_mup_eq_pane_t3_ParamLimits

0x27fd,	// (0x0009a58d) main_mup_eq_pane_t3

0x2819,	// (0x0009a5a9) main_mup_eq_pane_t4_ParamLimits

0x2819,	// (0x0009a5a9) main_mup_eq_pane_t4

0x2835,	// (0x0009a5c5) main_mup_eq_pane_t5_ParamLimits

0x2835,	// (0x0009a5c5) main_mup_eq_pane_t5

0x2851,	// (0x0009a5e1) main_mup_eq_pane_t6_ParamLimits

0x2851,	// (0x0009a5e1) main_mup_eq_pane_t6

0x2865,	// (0x0009a5f5) main_mup_eq_pane_t7_ParamLimits

0x2865,	// (0x0009a5f5) main_mup_eq_pane_t7

0x2879,	// (0x0009a609) main_mup_eq_pane_t8_ParamLimits

0x2879,	// (0x0009a609) main_mup_eq_pane_t8

0x288d,	// (0x0009a61d) main_mup_eq_pane_t9_ParamLimits

0x288d,	// (0x0009a61d) main_mup_eq_pane_t9

0x28a7,	// (0x0009a637) main_mup_eq_pane_t10_ParamLimits

0x28a7,	// (0x0009a637) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x000a712a) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x000a712a) main_mup_eq_pane_t

0x2956,	// (0x0009a6e6) mup_equalizer_pane_cp5_ParamLimits

0x296a,	// (0x0009a6fa) mup_equalizer_pane_cp6_ParamLimits

0x297e,	// (0x0009a70e) mup_equalizer_pane_cp7_ParamLimits

0x9eba,	// (0x000a1c4a) main_gallery_pane

0xe554,	// (0x000a62e4) smil2_volume_pane

0xe55c,	// (0x000a62ec) smil_status_volume_pane_g1_ParamLimits

0xe56f,	// (0x000a62ff) smil_status_volume_pane_g2_ParamLimits

0xa0a5,	// (0x000a1e35) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x000a72d0) smil_status_volume_pane_g_ParamLimits

0xe648,	// (0x000a63d8) bg_popup_window_pane_cp07_ParamLimits

0xe725,	// (0x000a64b5) blid_firmament_pane

0xc51b,	// (0x000a42ab) aid_size_cell_gallery_ParamLimits

0xc51b,	// (0x000a42ab) aid_size_cell_gallery

0xc51b,	// (0x000a42ab) grid_gallery_pane_ParamLimits

0xc51b,	// (0x000a42ab) grid_gallery_pane

0xe648,	// (0x000a63d8) cell_gallery_pane_ParamLimits

0xe648,	// (0x000a63d8) cell_gallery_pane

0xc51b,	// (0x000a42ab) bg_cell_gallery_focus_pane_ParamLimits

0xc51b,	// (0x000a42ab) bg_cell_gallery_focus_pane

0xc582,	// (0x000a4312) cell_gallery_pane_g1_ParamLimits

0xc582,	// (0x000a4312) cell_gallery_pane_g1

0xc582,	// (0x000a4312) cell_gallery_pane_g2_ParamLimits

0xc582,	// (0x000a4312) cell_gallery_pane_g2

0xc582,	// (0x000a4312) cell_gallery_pane_g3_ParamLimits

0xc582,	// (0x000a4312) cell_gallery_pane_g3

0xc590,	// (0x000a4320) cell_gallery_pane_g4_ParamLimits

0xc590,	// (0x000a4320) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x000a737c) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x000a737c) cell_gallery_pane_g

0xe871,	// (0x000a6601) bg_cell_gallery_focus_pane_g1

0xe879,	// (0x000a6609) bg_cell_gallery_focus_pane_g2

0xe881,	// (0x000a6611) bg_cell_gallery_focus_pane_g3

0xe889,	// (0x000a6619) bg_cell_gallery_focus_pane_g4

0xe891,	// (0x000a6621) bg_cell_gallery_focus_pane_g5

0xe899,	// (0x000a6629) bg_cell_gallery_focus_pane_g6

0xe8a1,	// (0x000a6631) bg_cell_gallery_focus_pane_g7

0xe8a9,	// (0x000a6639) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x000a7385) bg_cell_gallery_focus_pane_g

0xe8b1,	// (0x000a6641) aid_firma_cardinal

0xe8c5,	// (0x000a6655) blid_firmament_pane_t1

0xe8dc,	// (0x000a666c) blid_firmament_pane_t2

0xe8f3,	// (0x000a6683) blid_firmament_pane_t3

0xe90a,	// (0x000a669a) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x000a7396) blid_firmament_pane_t

0xe921,	// (0x000a66b1) blid_sat_info_pane

0xc5c0,	// (0x000a4350) blid_sat_info_pane_g1

0xc5c0,	// (0x000a4350) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x000a6e3f) blid_sat_info_pane_g

0xe931,	// (0x000a66c1) blid_sat_info_pane_t1

0xe93f,	// (0x000a66cf) smil2_volume_content_pane

0xe948,	// (0x000a66d8) smil2_volume_pane_g1

0xc920,	// (0x000a46b0) smil2_volume_content_pane_g1

0xe950,	// (0x000a66e0) smil2_volume_content_pane_g2

0xe959,	// (0x000a66e9) smil2_volume_content_pane_g3

0xe962,	// (0x000a66f2) smil2_volume_content_pane_g4

0xe96b,	// (0x000a66fb) smil2_volume_content_pane_g5

0xe974,	// (0x000a6704) smil2_volume_content_pane_g6

0xe97d,	// (0x000a670d) smil2_volume_content_pane_g7

0xe986,	// (0x000a6716) smil2_volume_content_pane_g8

0xe98f,	// (0x000a671f) smil2_volume_content_pane_g9

0xe998,	// (0x000a6728) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x000a739f) smil2_volume_content_pane_g

0x103d,	// (0x00098dcd) cale_week_day_heading_pane_t1_ParamLimits

0x1067,	// (0x00098df7) cale_week_day_heading_pane_t2_ParamLimits

0x1096,	// (0x00098e26) cale_week_day_heading_pane_t3_ParamLimits

0x10c5,	// (0x00098e55) cale_week_day_heading_pane_t4_ParamLimits

0x10f4,	// (0x00098e84) cale_week_day_heading_pane_t5_ParamLimits

0x112b,	// (0x00098ebb) cale_week_day_heading_pane_t6_ParamLimits

0x1162,	// (0x00098ef2) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x000a6ed7) cale_week_day_heading_pane_t_ParamLimits

0xc77e,	// (0x000a450e) bg_cale_side_pane_ParamLimits

0x118c,	// (0x00098f1c) cale_week_time_pane_t1_ParamLimits

0x11a6,	// (0x00098f36) cale_week_time_pane_t2_ParamLimits

0x11c0,	// (0x00098f50) cale_week_time_pane_t3_ParamLimits

0x11da,	// (0x00098f6a) cale_week_time_pane_t4_ParamLimits

0x11f4,	// (0x00098f84) cale_week_time_pane_t5_ParamLimits

0x120e,	// (0x00098f9e) cale_week_time_pane_t6_ParamLimits

0x1228,	// (0x00098fb8) cale_week_time_pane_t7_ParamLimits

0x1242,	// (0x00098fd2) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x000a6ee6) cale_week_time_pane_t_ParamLimits

0x125c,	// (0x00098fec) cell_cale_week_pane_g2_ParamLimits

0xc77e,	// (0x000a450e) bg_cale_side_pane_cp01_ParamLimits

0x2213,	// (0x00099fa3) cale_month_week_pane_t1_ParamLimits

0x222c,	// (0x00099fbc) cale_month_week_pane_t2_ParamLimits

0x2245,	// (0x00099fd5) cale_month_week_pane_t3_ParamLimits

0x225e,	// (0x00099fee) cale_month_week_pane_t4_ParamLimits

0x2277,	// (0x0009a007) cale_month_week_pane_t5_ParamLimits

0x2290,	// (0x0009a020) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x000a6fb4) cale_month_week_pane_t_ParamLimits

0x9f5c,	// (0x000a1cec) cell_cale_month_pane_g1_ParamLimits

0x9eba,	// (0x000a1c4a) main_cale_event_viewer_pane

0xac16,	// (0x000a29a6) listscroll_cale_event_viewer_pane

0xe9a1,	// (0x000a6731) list_cale_ev_pane

0xe9a9,	// (0x000a6739) scroll_pane_cp023

0xe9b5,	// (0x000a6745) field_cale_ev_pane_ParamLimits

0xe9b5,	// (0x000a6745) field_cale_ev_pane

0xe9d3,	// (0x000a6763) field_cale_ev_content_pane_ParamLimits

0xe9d3,	// (0x000a6763) field_cale_ev_content_pane

0xe9df,	// (0x000a676f) field_cale_ev_pane_g1_ParamLimits

0xe9df,	// (0x000a676f) field_cale_ev_pane_g1

0xe9eb,	// (0x000a677b) field_cale_ev_pane_g2_ParamLimits

0xe9eb,	// (0x000a677b) field_cale_ev_pane_g2

0xea03,	// (0x000a6793) field_cale_ev_pane_g3_ParamLimits

0xea03,	// (0x000a6793) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x000a73b4) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x000a73b4) field_cale_ev_pane_g

0xea1b,	// (0x000a67ab) field_cale_ev_pane_t1_ParamLimits

0xea1b,	// (0x000a67ab) field_cale_ev_pane_t1

0xc929,	// (0x000a46b9) field_cale_ev_content_pane_t1_ParamLimits

0xc929,	// (0x000a46b9) field_cale_ev_content_pane_t1

0xd3a5,	// (0x000a5135) bg_button_pane_cp01

0x0d6a,	// (0x00098afa) listscroll_cale_week_pane_ParamLimits

0xc729,	// (0x000a44b9) popup_toolbar_window_cp01

0xc74f,	// (0x000a44df) listscroll_cale_week_pane_t1_ParamLimits

0x0d6a,	// (0x00098afa) listscroll_cale_day_pane_ParamLimits

0xc729,	// (0x000a44b9) popup_toolbar_window_cp02

0xcb4f,	// (0x000a48df) listscroll_cale_day_pane_t1_ParamLimits

0x33c4,	// (0x0009b154) main_cale_month_pane_ParamLimits

0xa090,	// (0x000a1e20) popup_toolbar_window_cp03_ParamLimits

0xa090,	// (0x000a1e20) popup_toolbar_window_cp03

0x2d06,	// (0x0009aa96) main_image_pane_g2_ParamLimits

0x2d06,	// (0x0009aa96) main_image_pane_g2

0x2d17,	// (0x0009aaa7) main_image_pane_g3_ParamLimits

0x2d17,	// (0x0009aaa7) main_image_pane_g3

0x0002,

0xf42c,	// (0x000a71bc) main_image_pane_g_ParamLimits

0xf42c,	// (0x000a71bc) main_image_pane_g

0xd4b8,	// (0x000a5248) main_image_pane_t1_ParamLimits

0x2d28,	// (0x0009aab8) main_image_pane_t2_ParamLimits

0x2d28,	// (0x0009aab8) main_image_pane_t2

0x2d3a,	// (0x0009aaca) main_image_pane_t3_ParamLimits

0x2d3a,	// (0x0009aaca) main_image_pane_t3

0x2d62,	// (0x0009aaf2) main_image_pane_t4_ParamLimits

0x2d62,	// (0x0009aaf2) main_image_pane_t4

0x0003,

0xf433,	// (0x000a71c3) main_image_pane_t_ParamLimits

0xf433,	// (0x000a71c3) main_image_pane_t

0x2d82,	// (0x0009ab12) popup_image_details_window_cp01

0x2d8c,	// (0x0009ab1c) popup_toobar_trans_pane_cp01_ParamLimits

0x2d8c,	// (0x0009ab1c) popup_toobar_trans_pane_cp01

0x34dd,	// (0x0009b26d) popup_image_details_window_ParamLimits

0x34dd,	// (0x0009b26d) popup_image_details_window

0xa063,	// (0x000a1df3) popup_image_focus_window

0xa0c7,	// (0x000a1e57) camera2_autofocus_pane_ParamLimits

0xa0c7,	// (0x000a1e57) camera2_autofocus_pane

0xac16,	// (0x000a29a6) bg_popup_sub_pane_cp06

0xea32,	// (0x000a67c2) popup_image_focus_window_g1

0xea3a,	// (0x000a67ca) popup_image_focus_window_g2

0xea42,	// (0x000a67d2) popup_image_focus_window_g3

0xea4a,	// (0x000a67da) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x000a73bb) popup_image_focus_window_g

0xea52,	// (0x000a67e2) popup_image_focus_window_t1

0xea60,	// (0x000a67f0) popup_image_focus_window_t2

0xea70,	// (0x000a6800) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x000a73c4) popup_image_focus_window_t

0xc582,	// (0x000a4312) camera2_autofocus_pane_g1

0xc51b,	// (0x000a42ab) bg_tb_trans_pane_cp01

0xea7e,	// (0x000a680e) popup_image_details_window_g1

0xea91,	// (0x000a6821) popup_image_details_window_g2

0x0002,

0xf646,	// (0x000a73d6) popup_image_details_window_g

0xeaba,	// (0x000a684a) popup_image_details_window_t1

0xeacc,	// (0x000a685c) popup_image_details_window_t2

0xeae5,	// (0x000a6875) popup_image_details_window_t3

0xeaf9,	// (0x000a6889) popup_image_details_window_t4

0xeb14,	// (0x000a68a4) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x000a73dd) popup_image_details_window_t

0xc60a,	// (0x000a439a) bg_calc_paper_pane_ParamLimits

0x9eba,	// (0x000a1c4a) grid_highlight_pane_cp013

0x9ecc,	// (0x000a1c5c) list_calc_pane_ParamLimits

0x9ede,	// (0x000a1c6e) scroll_pane_cp024

0xc61e,	// (0x000a43ae) bg_calc_display_pane_ParamLimits

0x0bb8,	// (0x00098948) calc_display_pane_t1_ParamLimits

0x0bcd,	// (0x0009895d) calc_display_pane_t2_ParamLimits

0x9ee6,	// (0x000a1c76) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x000a6e57) calc_display_pane_t_ParamLimits

0x0c8d,	// (0x00098a1d) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x000a6e74) cell_calc_pane_g

0x0c96,	// (0x00098a26) cell_calc_pane_t1

0xc673,	// (0x000a4403) grid_highlight_pane_cp02_ParamLimits

0xc689,	// (0x000a4419) toolbar_button_pane_cp01_ParamLimits

0xc689,	// (0x000a4419) toolbar_button_pane_cp01

0xd4fd,	// (0x000a528d) temp_image_control_pane_ParamLimits

0xd4fd,	// (0x000a528d) temp_image_control_pane

0x9eac,	// (0x000a1c3c) main_mp3_pane

0xeb2e,	// (0x000a68be) temp_image_control_pane_g1_ParamLimits

0xeb2e,	// (0x000a68be) temp_image_control_pane_g1

0xeb3c,	// (0x000a68cc) temp_image_control_pane_g2_ParamLimits

0xeb3c,	// (0x000a68cc) temp_image_control_pane_g2

0xeb4e,	// (0x000a68de) temp_image_control_pane_g3_ParamLimits

0xeb4e,	// (0x000a68de) temp_image_control_pane_g3

0x399c,	// (0x0009b72c) temp_image_control_pane_g4_ParamLimits

0x399c,	// (0x0009b72c) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x000a73e8) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x000a73e8) temp_image_control_pane_g

0xeb2e,	// (0x000a68be) main_mp3_pane_g1

0x39af,	// (0x0009b73f) main_mp3_pane_g2

0x0007,

0xf661,	// (0x000a73f1) main_mp3_pane_g

0xeb83,	// (0x000a6913) main_mp3_pane_t1

0xc590,	// (0x000a4320) main_camera_pane_g8_ParamLimits

0xc590,	// (0x000a4320) main_camera_pane_g8

0x1426,	// (0x000991b6) main_video_pane_g7_ParamLimits

0x1426,	// (0x000991b6) main_video_pane_g7

0xa0f7,	// (0x000a1e87) main_camera2_pane_t7_ParamLimits

0xa0f7,	// (0x000a1e87) main_camera2_pane_t7

0xc8e0,	// (0x000a4670) scroll_pane_cp025_ParamLimits

0xc8e0,	// (0x000a4670) scroll_pane_cp025

0xc8f4,	// (0x000a4684) scroll_pane_cp026_ParamLimits

0xc8f4,	// (0x000a4684) scroll_pane_cp026

0xc903,	// (0x000a4693) wml_content_pane_ParamLimits

0x9eba,	// (0x000a1c4a) main_touch_calib_pane

0x3a83,	// (0x0009b813) main_touch_calib_pane_g1

0x3a95,	// (0x0009b825) main_touch_calib_pane_g2

0x3aa7,	// (0x0009b837) main_touch_calib_pane_g3

0x3ab9,	// (0x0009b849) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x000a740f) main_touch_calib_pane_g

0x3acb,	// (0x0009b85b) main_touch_calib_pane_t1

0x3ae5,	// (0x0009b875) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x000a7418) main_touch_calib_pane_t

0xd0c4,	// (0x000a4e54) mup_progress_pane_cp02

0xd0f9,	// (0x000a4e89) navi_pane_g1

0xd1b4,	// (0x000a4f44) navi_pane_mp_t3

0x9eac,	// (0x000a1c3c) main_mp3_pane_ParamLimits

0x3662,	// (0x0009b3f2) navi_pane_ParamLimits

0xeb2e,	// (0x000a68be) main_mp3_pane_g1_ParamLimits

0x39af,	// (0x0009b73f) main_mp3_pane_g2_ParamLimits

0x39bd,	// (0x0009b74d) main_mp3_pane_g3_ParamLimits

0x39bd,	// (0x0009b74d) main_mp3_pane_g3

0x39cb,	// (0x0009b75b) main_mp3_pane_g4_ParamLimits

0x39cb,	// (0x0009b75b) main_mp3_pane_g4

0xc582,	// (0x000a4312) main_mp3_pane_g5_ParamLimits

0xc582,	// (0x000a4312) main_mp3_pane_g5

0xeb5e,	// (0x000a68ee) main_mp3_pane_g6_ParamLimits

0xeb5e,	// (0x000a68ee) main_mp3_pane_g6

0xeb6b,	// (0x000a68fb) main_mp3_pane_g7_ParamLimits

0xeb6b,	// (0x000a68fb) main_mp3_pane_g7

0xeb77,	// (0x000a6907) main_mp3_pane_g8_ParamLimits

0xeb77,	// (0x000a6907) main_mp3_pane_g8

0xf661,	// (0x000a73f1) main_mp3_pane_g_ParamLimits

0x39d7,	// (0x0009b767) main_mp3_pane_t2

0x39e5,	// (0x0009b775) main_mp3_pane_t3

0xeb91,	// (0x000a6921) main_mp3_pane_t4

0xeb9f,	// (0x000a692f) main_mp3_pane_t5

0x0005,

0xf672,	// (0x000a7402) main_mp3_pane_t

0xebad,	// (0x000a693d) mup_progress_pane_cp01

0x9e63,	// (0x000a1bf3) aid_zoom_text_secondary2

0xe9a1,	// (0x000a6731) list_cale_ev2_pane

0xe9a9,	// (0x000a6739) scroll_pane_cp023_ParamLimits

0x3b3b,	// (0x0009b8cb) field_cale_ev2_pane_ParamLimits

0x3b3b,	// (0x0009b8cb) field_cale_ev2_pane

0x3b5b,	// (0x0009b8eb) field_cale_ev2_pane_g1_ParamLimits

0x3b5b,	// (0x0009b8eb) field_cale_ev2_pane_g1

0x3b67,	// (0x0009b8f7) field_cale_ev2_pane_g2_ParamLimits

0x3b67,	// (0x0009b8f7) field_cale_ev2_pane_g2

0x3b7f,	// (0x0009b90f) field_cale_ev2_pane_g3_ParamLimits

0x3b7f,	// (0x0009b90f) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x000a7423) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x000a7423) field_cale_ev2_pane_g

0xebc1,	// (0x000a6951) field_cale_ev2_pane_t1_ParamLimits

0xebc1,	// (0x000a6951) field_cale_ev2_pane_t1

0xebd8,	// (0x000a6968) field_cale_ev2_pane_t2_ParamLimits

0xebd8,	// (0x000a6968) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x000a742c) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x000a742c) field_cale_ev2_pane_t

0x2bdc,	// (0x0009a96c) main_postcard_pane_g5_ParamLimits

0x2bdc,	// (0x0009a96c) main_postcard_pane_g5

0x2bf2,	// (0x0009a982) main_postcard_pane_g6_ParamLimits

0x2bf2,	// (0x0009a982) main_postcard_pane_g6

0xc51b,	// (0x000a42ab) camera2_autofocus_pane_cp_ParamLimits

0xc51b,	// (0x000a42ab) camera2_autofocus_pane_cp

0x9eac,	// (0x000a1c3c) main_mup3_pane

0x3bdb,	// (0x0009b96b) main_mup3_pane_g1_ParamLimits

0x3bdb,	// (0x0009b96b) main_mup3_pane_g1

0x3bfd,	// (0x0009b98d) main_mup3_pane_g2_ParamLimits

0x3bfd,	// (0x0009b98d) main_mup3_pane_g2

0x3c7b,	// (0x0009ba0b) main_mup3_pane_g3_ParamLimits

0x3c7b,	// (0x0009ba0b) main_mup3_pane_g3

0x3cc1,	// (0x0009ba51) main_mup3_pane_g4_ParamLimits

0x3cc1,	// (0x0009ba51) main_mup3_pane_g4

0x3d07,	// (0x0009ba97) main_mup3_pane_g5_ParamLimits

0x3d07,	// (0x0009ba97) main_mup3_pane_g5

0x3d4d,	// (0x0009badd) main_mup3_pane_g6_ParamLimits

0x3d4d,	// (0x0009badd) main_mup3_pane_g6

0xc590,	// (0x000a4320) main_mup3_pane_g7_ParamLimits

0xc590,	// (0x000a4320) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x000a743c) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x000a743c) main_mup3_pane_g

0x3dcb,	// (0x0009bb5b) main_mup3_pane_t1_ParamLimits

0x3dcb,	// (0x0009bb5b) main_mup3_pane_t1

0x3e3f,	// (0x0009bbcf) main_mup3_pane_t2_ParamLimits

0x3e3f,	// (0x0009bbcf) main_mup3_pane_t2

0x3f13,	// (0x0009bca3) main_mup3_pane_t4_ParamLimits

0x3f13,	// (0x0009bca3) main_mup3_pane_t4

0x3f69,	// (0x0009bcf9) main_mup3_pane_t5_ParamLimits

0x3f69,	// (0x0009bcf9) main_mup3_pane_t5

0x4025,	// (0x0009bdb5) main_mup3_pane_t6_ParamLimits

0x4025,	// (0x0009bdb5) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x000a744d) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x000a744d) main_mup3_pane_t

0x40dd,	// (0x0009be6d) mup3_progress_pane_ParamLimits

0x40dd,	// (0x0009be6d) mup3_progress_pane

0x4173,	// (0x0009bf03) popup_mup3_control_window_ParamLimits

0x4173,	// (0x0009bf03) popup_mup3_control_window

0xebed,	// (0x000a697d) popup_mup3_text_window

0x41a5,	// (0x0009bf35) mup3_progress_pane_t1

0x41c4,	// (0x0009bf54) mup3_progress_pane_t2

0xebf5,	// (0x000a6985) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x000a745a) mup3_progress_pane_t

0xec12,	// (0x000a69a2) mup_progress_pane_cp03

0xac16,	// (0x000a29a6) bg_tb_trans_pane_cp04

0x41e3,	// (0x0009bf73) mup3_volume_pane

0x41eb,	// (0x0009bf7b) popup_mup3_control_window_g1

0x41f4,	// (0x0009bf84) mup3_volume_pane_g1

0x41fd,	// (0x0009bf8d) mup3_volume_pane_g2

0x4206,	// (0x0009bf96) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x000a7461) mup3_volume_pane_g

0xac16,	// (0x000a29a6) bg_tb_trans_pane_cp03

0xec22,	// (0x000a69b2) popup_mup3_text_window_g1

0xec2a,	// (0x000a69ba) popup_mup3_text_window_t1

0xc666,	// (0x000a43f6) list_calc_item_pane_g1_ParamLimits

0xe69b,	// (0x000a642b) mup_volume_pane_cp_g1

0x3aff,	// (0x0009b88f) main_touch_calib_pane_t3

0x3b13,	// (0x0009b8a3) main_touch_calib_pane_t4

0x3b27,	// (0x0009b8b7) main_touch_calib_pane_t5

0x9e3f,	// (0x000a1bcf) aid_cell_size_toolbar2

0x9e47,	// (0x000a1bd7) aid_popup3_width_pane

0x9e53,	// (0x000a1be3) aid_zoom_text_msg_primary

0x1301,	// (0x00099091) vorec_t7

0xc62a,	// (0x000a43ba) bg_calc_paper_pane_g1_ParamLimits

0xc636,	// (0x000a43c6) bg_calc_paper_pane_g2_ParamLimits

0xc642,	// (0x000a43d2) bg_calc_paper_pane_g3_ParamLimits

0xc64e,	// (0x000a43de) bg_calc_paper_pane_g4_ParamLimits

0xc65a,	// (0x000a43ea) bg_calc_paper_pane_g5_ParamLimits

0x0c17,	// (0x000989a7) bg_calc_paper_pane_g6_ParamLimits

0x0c26,	// (0x000989b6) bg_calc_paper_pane_g7_ParamLimits

0x0c35,	// (0x000989c5) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x000a6e5e) bg_calc_paper_pane_g_ParamLimits

0x0c48,	// (0x000989d8) calc_bg_paper_pane_g9_ParamLimits

0xc51b,	// (0x000a42ab) image_qvga_pane_ParamLimits

0xc51b,	// (0x000a42ab) image_qvga_pane

0xc4f9,	// (0x000a4289) bg_popup_sub_pane_cp04_ParamLimits

0xd434,	// (0x000a51c4) popup_mup_playback_window_g1_ParamLimits

0xd440,	// (0x000a51d0) popup_mup_playback_window_t1_ParamLimits

0xd455,	// (0x000a51e5) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x000a71b7) popup_mup_playback_window_t_ParamLimits

0xc590,	// (0x000a4320) main_mup2_pane_g3_ParamLimits

0xc590,	// (0x000a4320) main_mup2_pane_g3

0x15e1,	// (0x00099371) popup_toolbar_window_cp04

0xd7c6,	// (0x000a5556) popup_call2_audio_second_window_g3_ParamLimits

0xd7c6,	// (0x000a5556) popup_call2_audio_second_window_g3

0xdbde,	// (0x000a596e) popup_call2_audio_first_window_g4_ParamLimits

0xdbde,	// (0x000a596e) popup_call2_audio_first_window_g4

0xe205,	// (0x000a5f95) popup_call2_audio_in_window_g4_ParamLimits

0xe205,	// (0x000a5f95) popup_call2_audio_in_window_g4

0x2ce8,	// (0x0009aa78) aid_area_sk_bg_cut_ParamLimits

0x2ce8,	// (0x0009aa78) aid_area_sk_bg_cut

0xd46a,	// (0x000a51fa) aid_area_sk_bg_cut_2_ParamLimits

0xd46a,	// (0x000a51fa) aid_area_sk_bg_cut_2

0xac16,	// (0x000a29a6) aid_placing_details_win

0xac16,	// (0x000a29a6) aid_placing_details_win_2

0xc582,	// (0x000a4312) camera2_autofocus_pane_g1_ParamLimits

0x09ff,	// (0x0009878f) popup_fixed_preview_cale_window_ParamLimits

0x09ff,	// (0x0009878f) popup_fixed_preview_cale_window

0xd232,	// (0x000a4fc2) navi_slider_pane_g3

0xd23b,	// (0x000a4fcb) navi_slider_pane_g4

0xd244,	// (0x000a4fd4) navi_slider_pane_g5

0xd232,	// (0x000a4fc2) navi_slider_pane_g6

0xa012,	// (0x000a1da2) navi_slider_pane_g7

0xd372,	// (0x000a5102) mup_scale_pane_g3

0xd37b,	// (0x000a510b) mup_scale_pane_g4

0xd384,	// (0x000a5114) mup_scale_pane_g5

0x2992,	// (0x0009a722) mup_scale_pane_g6

0x299b,	// (0x0009a72b) mup_scale_pane_g7

0xa153,	// (0x000a1ee3) cams2_slider_pane_g3

0xa153,	// (0x000a1ee3) cams2_slider_pane_g4

0xa153,	// (0x000a1ee3) cams2_slider_pane_g5

0xa153,	// (0x000a1ee3) cams2_slider_pane_g6

0xa153,	// (0x000a1ee3) cams2_slider_pane_g7

0xc5c0,	// (0x000a4350) camera2_autofocus_pane_cp_g1

0xe4db,	// (0x000a626b) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4db,	// (0x000a626b) bg_popup_preview_window_pane_cp02

0xec38,	// (0x000a69c8) list_fp_cale_pane_ParamLimits

0xec38,	// (0x000a69c8) list_fp_cale_pane

0xec44,	// (0x000a69d4) popup_fixed_preview_cale_window_t1_ParamLimits

0xec44,	// (0x000a69d4) popup_fixed_preview_cale_window_t1

0x420f,	// (0x0009bf9f) popup_fixed_preview_cale_window_t2_ParamLimits

0x420f,	// (0x0009bf9f) popup_fixed_preview_cale_window_t2

0x4224,	// (0x0009bfb4) popup_fixed_preview_cale_window_t3_ParamLimits

0x4224,	// (0x0009bfb4) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x000a7468) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x000a7468) popup_fixed_preview_cale_window_t

0x4239,	// (0x0009bfc9) list_single_fp_cale_pane_ParamLimits

0x4239,	// (0x0009bfc9) list_single_fp_cale_pane

0xec62,	// (0x000a69f2) list_single_fp_cale_pane_g1_ParamLimits

0xec62,	// (0x000a69f2) list_single_fp_cale_pane_g1

0xec6e,	// (0x000a69fe) list_single_fp_cale_pane_g2_ParamLimits

0xec6e,	// (0x000a69fe) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x000a746f) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x000a746f) list_single_fp_cale_pane_g

0xec87,	// (0x000a6a17) list_single_fp_cale_pane_t1_ParamLimits

0xec87,	// (0x000a6a17) list_single_fp_cale_pane_t1

0xec99,	// (0x000a6a29) list_single_fp_cale_pane_t2_ParamLimits

0xec99,	// (0x000a6a29) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x000a7476) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x000a7476) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9eba,	// (0x000a1c4a) main_dialer_pane

0xac16,	// (0x000a29a6) aid_cell_size_keypad

0xac16,	// (0x000a29a6) dialer_ne_pane

0xac16,	// (0x000a29a6) grid_dialer_command_1_pane

0xac16,	// (0x000a29a6) grid_dialer_command_2_pane

0xac16,	// (0x000a29a6) grid_dialer_keypad_pane

0x424e,	// (0x0009bfde) bg_popup_call_pane_cp06_ParamLimits

0x424e,	// (0x0009bfde) bg_popup_call_pane_cp06

0x424e,	// (0x0009bfde) dialer_ne_clear_pane_ParamLimits

0x424e,	// (0x0009bfde) dialer_ne_clear_pane

0xc5c0,	// (0x000a4350) dialer_ne_pane_g1

0xc5de,	// (0x000a436e) dialer_ne_pane_t1_ParamLimits

0xc5de,	// (0x000a436e) dialer_ne_pane_t1

0x425c,	// (0x0009bfec) dialer_ne_pane_t2_ParamLimits

0x425c,	// (0x0009bfec) dialer_ne_pane_t2

0x4284,	// (0x0009c014) dialer_ne_pane_t3_ParamLimits

0x4284,	// (0x0009c014) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x000a747b) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x000a747b) dialer_ne_pane_t

0x4284,	// (0x0009c014) dialer_ne_pane_t3_copy1_ParamLimits

0x4284,	// (0x0009c014) dialer_ne_pane_t3_copy1

0xeccc,	// (0x000a6a5c) cell_dialer_keypad_pane_ParamLimits

0xeccc,	// (0x000a6a5c) cell_dialer_keypad_pane

0xc51b,	// (0x000a42ab) cell_dialer_command_1_pane_ParamLimits

0xc51b,	// (0x000a42ab) cell_dialer_command_1_pane

0xece3,	// (0x000a6a73) cell_dialer_command_2_pane_ParamLimits

0xece3,	// (0x000a6a73) cell_dialer_command_2_pane

0xc51b,	// (0x000a42ab) bg_button_pane_cp02_ParamLimits

0xc51b,	// (0x000a42ab) bg_button_pane_cp02

0xc582,	// (0x000a4312) cell_dialer_keypad_pane_g1_ParamLimits

0xc582,	// (0x000a4312) cell_dialer_keypad_pane_g1

0xc51b,	// (0x000a42ab) bg_button_pane_cp03_ParamLimits

0xc51b,	// (0x000a42ab) bg_button_pane_cp03

0xc582,	// (0x000a4312) cell_dialer_command_1_pane_g1_ParamLimits

0xc582,	// (0x000a4312) cell_dialer_command_1_pane_g1

0xac16,	// (0x000a29a6) bg_button_pane_cp04

0xc5c0,	// (0x000a4350) cell_dialer_command_2_pane_g1

0xac16,	// (0x000a29a6) bg_button_pane_cp06

0xc5c0,	// (0x000a4350) dialer_ne_clear_pane_g1

0xd105,	// (0x000a4e95) navi_pane_g2

0xd133,	// (0x000a4ec3) navi_pane_g3

0x0002,

0xf32f,	// (0x000a70bf) navi_pane_g

0xd1c2,	// (0x000a4f52) navi_pane_mv_g2

0xd1e9,	// (0x000a4f79) navi_pane_mv_g5

0x2775,	// (0x0009a505) navi_pane_mv_t1

0xc61e,	// (0x000a43ae) main_clock2_pane

0xc51b,	// (0x000a42ab) main_clock2_list_pane_ParamLimits

0xc51b,	// (0x000a42ab) main_clock2_list_pane

0x431a,	// (0x0009c0aa) main_clock2_pane_t1_ParamLimits

0x431a,	// (0x0009c0aa) main_clock2_pane_t1

0x4355,	// (0x0009c0e5) main_clock2_pane_t2_ParamLimits

0x4355,	// (0x0009c0e5) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x000a7487) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x000a7487) main_clock2_pane_t

0x43f5,	// (0x0009c185) popup_clock_analogue_window_cp03_ParamLimits

0x43f5,	// (0x0009c185) popup_clock_analogue_window_cp03

0x441a,	// (0x0009c1aa) popup_clock_digital_window_cp02_ParamLimits

0x441a,	// (0x0009c1aa) popup_clock_digital_window_cp02

0x4493,	// (0x0009c223) main_clock2_list_single_pane_ParamLimits

0x4493,	// (0x0009c223) main_clock2_list_single_pane

0xc7d0,	// (0x000a4560) list_highlight_pane_cp05

0xed2a,	// (0x000a6aba) main_clock2_list_single_pane_t1

0x15e1,	// (0x00099371) popup_toolbar_window_cp04_ParamLimits

0xc590,	// (0x000a4320) camera2_autofocus_pane_g2_ParamLimits

0xc590,	// (0x000a4320) camera2_autofocus_pane_g2

0xc590,	// (0x000a4320) camera2_autofocus_pane_g3_ParamLimits

0xc590,	// (0x000a4320) camera2_autofocus_pane_g3

0xc590,	// (0x000a4320) camera2_autofocus_pane_g4_ParamLimits

0xc590,	// (0x000a4320) camera2_autofocus_pane_g4

0xc590,	// (0x000a4320) camera2_autofocus_pane_g5_ParamLimits

0xc590,	// (0x000a4320) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x000a73cb) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x000a73cb) camera2_autofocus_pane_g

0x3b97,	// (0x0009b927) camera2_autofocus_pane_cp_g2

0x3b9f,	// (0x0009b92f) camera2_autofocus_pane_cp_g3

0x3ba7,	// (0x0009b937) camera2_autofocus_pane_cp_g4

0x3baf,	// (0x0009b93f) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x000a7431) camera2_autofocus_pane_cp_g

0xac16,	// (0x000a29a6) popup_dialer_spcha_window

0xac16,	// (0x000a29a6) bg_popup_sub_pane_cp07

0xac16,	// (0x000a29a6) list_spcha_pane

0xed38,	// (0x000a6ac8) list_single_spcha_pane_ParamLimits

0xed38,	// (0x000a6ac8) list_single_spcha_pane

0xac16,	// (0x000a29a6) list_highlight_pane_cp06

0xcd3a,	// (0x000a4aca) list_single_spcha_pane_t1

0xdfaf,	// (0x000a5d3f) popup_call2_audio_out_window_g4_ParamLimits

0xdfaf,	// (0x000a5d3f) popup_call2_audio_out_window_g4

0x9eba,	// (0x000a1c4a) main_imed2_pane

0xa06b,	// (0x000a1dfb) popup_imed_adjust2_window

0x34f5,	// (0x0009b285) popup_imed_trans_window_ParamLimits

0x34f5,	// (0x0009b285) popup_imed_trans_window

0xe770,	// (0x000a6500) popup_blid_sat_info2_window_t1

0xe77e,	// (0x000a650e) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x000a7360) popup_blid_sat_info2_window_t

0x4544,	// (0x0009c2d4) aid_size_cell_colour_35

0x4564,	// (0x0009c2f4) aid_size_cell_colour_112

0x4584,	// (0x0009c314) aid_size_cell_effect

0xd302,	// (0x000a5092) bg_tb_trans_pane_cp02

0xcc60,	// (0x000a49f0) heading_imed_pane

0x45a4,	// (0x0009c334) listscroll_imed_pane

0xed4a,	// (0x000a6ada) heading_imed_pane_g1

0xed52,	// (0x000a6ae2) heading_imed_pane_t1

0xed60,	// (0x000a6af0) grid_imed_colour_35_pane_ParamLimits

0xed60,	// (0x000a6af0) grid_imed_colour_35_pane

0x45b0,	// (0x0009c340) grid_imed_effect_pane

0xed77,	// (0x000a6b07) list_imed_aspect_pane

0x45c6,	// (0x0009c356) scroll_pane_cp027_ParamLimits

0x45c6,	// (0x0009c356) scroll_pane_cp027

0x45d7,	// (0x0009c367) cell_imed_effect_pane_ParamLimits

0x45d7,	// (0x0009c367) cell_imed_effect_pane

0xed7f,	// (0x000a6b0f) cell_imed_colour_pane_ParamLimits

0xed7f,	// (0x000a6b0f) cell_imed_colour_pane

0xedc1,	// (0x000a6b51) cell_imed_colour_pane_g1_ParamLimits

0xedc1,	// (0x000a6b51) cell_imed_colour_pane_g1

0xedd2,	// (0x000a6b62) hgihlgiht_grid_pane_cp016_ParamLimits

0xedd2,	// (0x000a6b62) hgihlgiht_grid_pane_cp016

0x45fe,	// (0x0009c38e) cell_imed_effect_pane_g1

0x4606,	// (0x0009c396) grid_highlight_pane_cp017

0xede3,	// (0x000a6b73) list_imed_single_pane_ParamLimits

0xede3,	// (0x000a6b73) list_imed_single_pane

0xac16,	// (0x000a29a6) list_highlight_pane_cp07

0xedf8,	// (0x000a6b88) list_imed_aspect_pane_comp1_t1

0xd302,	// (0x000a5092) bg_tb_trans_pane_cp05

0xee1a,	// (0x000a6baa) popup_imed_adjust2_window_g1

0xee41,	// (0x000a6bd1) popup_imed_adjust2_window_t1

0xee59,	// (0x000a6be9) slider_imed_adjust_pane

0xee6d,	// (0x000a6bfd) slider_imed_adjust_pane_g1

0xee7d,	// (0x000a6c0d) slider_imed_adjust_pane_g2

0xee8d,	// (0x000a6c1d) slider_imed_adjust_pane_g3

0xee9e,	// (0x000a6c2e) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x000a74a4) slider_imed_adjust_pane_g

0x460f,	// (0x0009c39f) aid_size_cell_clipart2

0x461b,	// (0x0009c3ab) grid_imed_clipart_pane

0xd395,	// (0x000a5125) scroll_pane_cp031

0x4625,	// (0x0009c3b5) cell_imed_clipart_pane_ParamLimits

0x4625,	// (0x0009c3b5) cell_imed_clipart_pane

0x4647,	// (0x0009c3d7) cell_imed_clipart_pane_g1

0xac16,	// (0x000a29a6) grid_highlight_pane_cp014

0x42f6,	// (0x0009c086) main_clock2_pane_g1_ParamLimits

0x42f6,	// (0x0009c086) main_clock2_pane_g1

0x443a,	// (0x0009c1ca) aid_call2_pane_cp10

0x444c,	// (0x0009c1dc) aid_call_pane_cp10

0xd066,	// (0x000a4df6) popup_clock_analogue_window_cp10_g1

0xd066,	// (0x000a4df6) popup_clock_analogue_window_cp10_g2

0x445e,	// (0x0009c1ee) popup_clock_analogue_window_cp10_g3

0x445e,	// (0x0009c1ee) popup_clock_analogue_window_cp10_g4

0xd066,	// (0x000a4df6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x000a7492) popup_clock_analogue_window_cp10_g

0x4474,	// (0x0009c204) popup_clock_analogue_window_cp10_t1

0x44a5,	// (0x0009c235) clock_digital_number_pane_cp10_ParamLimits

0x44a5,	// (0x0009c235) clock_digital_number_pane_cp10

0x44bd,	// (0x0009c24d) clock_digital_number_pane_cp11_ParamLimits

0x44bd,	// (0x0009c24d) clock_digital_number_pane_cp11

0x44d5,	// (0x0009c265) clock_digital_number_pane_cp12_ParamLimits

0x44d5,	// (0x0009c265) clock_digital_number_pane_cp12

0x44ef,	// (0x0009c27f) clock_digital_number_pane_cp13_ParamLimits

0x44ef,	// (0x0009c27f) clock_digital_number_pane_cp13

0x4509,	// (0x0009c299) clock_digital_separator_pane_cp10_ParamLimits

0x4509,	// (0x0009c299) clock_digital_separator_pane_cp10

0x4523,	// (0x0009c2b3) popup_clock_digital_window_cp02_t1_ParamLimits

0x4523,	// (0x0009c2b3) popup_clock_digital_window_cp02_t1

0xc4f1,	// (0x000a4281) clock_digital_number_pane_cp10_g1

0xc4f1,	// (0x000a4281) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x000a74ad) clock_digital_number_pane_cp10_g

0xc4f1,	// (0x000a4281) clock_digital_separator_pane_cp10_g1

0xc4f1,	// (0x000a4281) clock_digital_separator_pane_g2_cp10

0xd1f1,	// (0x000a4f81) navi_pane_vded_g4

0xd1fa,	// (0x000a4f8a) navi_pane_vded_g5

0xd203,	// (0x000a4f93) navi_pane_vded_t1

0x9eba,	// (0x000a1c4a) main_vded_pane

0x4650,	// (0x0009c3e0) main_vded_pane_g1

0x465a,	// (0x0009c3ea) main_vded_pane_g2

0x4664,	// (0x0009c3f4) main_vded_pane_g3

0x0002,

0xf722,	// (0x000a74b2) main_vded_pane_g

0x466e,	// (0x0009c3fe) main_vded_pane_t1

0x467c,	// (0x0009c40c) main_vded_pane_t2

0x0001,

0xf729,	// (0x000a74b9) main_vded_pane_t

0x468a,	// (0x0009c41a) vded_slider_pane

0x4692,	// (0x0009c422) vded_video_pane

0xeeaf,	// (0x000a6c3f) vded_video_pane_g1

0x469a,	// (0x0009c42a) vded_video_pane_g2

0xc5c0,	// (0x000a4350) vded_video_pane_g3

0x0002,

0xf72e,	// (0x000a74be) vded_video_pane_g

0xeeb9,	// (0x000a6c49) vded_slider_pane_g1

0xe69b,	// (0x000a642b) vded_slider_pane_g2

0xeec2,	// (0x000a6c52) vded_slider_pane_g3

0xeecb,	// (0x000a6c5b) vded_slider_pane_g4

0xeed4,	// (0x000a6c64) vded_slider_pane_g5

0x0004,

0xf735,	// (0x000a74c5) vded_slider_pane_g

0x415b,	// (0x0009beeb) mup3_rocker_pane_ParamLimits

0x415b,	// (0x0009beeb) mup3_rocker_pane

0x46a3,	// (0x0009c433) mup3_control_keys_pane_g1

0x46ab,	// (0x0009c43b) mup3_control_keys_pane_g2

0x46b3,	// (0x0009c443) mup3_control_keys_pane_g3

0x46bb,	// (0x0009c44b) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x000a74d0) mup3_control_keys_pane_g

0x0a36,	// (0x000987c6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0a36,	// (0x000987c6) popup_toolbar2_fixed_window_cp01

0x418f,	// (0x0009bf1f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x418f,	// (0x0009bf1f) popup_toolbar2_fixed_window_cp02

0xd938,	// (0x000a56c8) popup_call2_audio_second_window_t4_ParamLimits

0xd938,	// (0x000a56c8) popup_call2_audio_second_window_t4

0xde74,	// (0x000a5c04) popup_call2_audio_first_window_t6_ParamLimits

0xde74,	// (0x000a5c04) popup_call2_audio_first_window_t6

0xe0b2,	// (0x000a5e42) popup_call2_audio_out_window_t6_ParamLimits

0xe0b2,	// (0x000a5e42) popup_call2_audio_out_window_t6

0x9eba,	// (0x000a1c4a) main_vitu_pane

0xc51b,	// (0x000a42ab) aid_size_cell_itu_ParamLimits

0xc51b,	// (0x000a42ab) aid_size_cell_itu

0xc51b,	// (0x000a42ab) bg_popup_window_pane_cp08_ParamLimits

0xc51b,	// (0x000a42ab) bg_popup_window_pane_cp08

0xc51b,	// (0x000a42ab) field_vitu_entry_pane_ParamLimits

0xc51b,	// (0x000a42ab) field_vitu_entry_pane

0xc51b,	// (0x000a42ab) grid_vitu_function_pane_ParamLimits

0xc51b,	// (0x000a42ab) grid_vitu_function_pane

0xc51b,	// (0x000a42ab) grid_vitu_itu_pane_ParamLimits

0xc51b,	// (0x000a42ab) grid_vitu_itu_pane

0xc51b,	// (0x000a42ab) cell_vitu_itu_pane_ParamLimits

0xc51b,	// (0x000a42ab) cell_vitu_itu_pane

0xc51b,	// (0x000a42ab) cell_vitu_function_pane_ParamLimits

0xc51b,	// (0x000a42ab) cell_vitu_function_pane

0xc51b,	// (0x000a42ab) bg_popup_sub_pane_cp08_ParamLimits

0xc51b,	// (0x000a42ab) bg_popup_sub_pane_cp08

0xc5ca,	// (0x000a435a) field_vitu_entry_pane_t1_ParamLimits

0xc5ca,	// (0x000a435a) field_vitu_entry_pane_t1

0xeedd,	// (0x000a6c6d) field_vitu_entry_pane_t2_ParamLimits

0xeedd,	// (0x000a6c6d) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x000a74d9) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x000a74d9) field_vitu_entry_pane_t

0xe648,	// (0x000a63d8) bg_button_pane_cp05_ParamLimits

0xe648,	// (0x000a63d8) bg_button_pane_cp05

0xeefa,	// (0x000a6c8a) cell_vitu_itu_pane_g1

0xd2ee,	// (0x000a507e) cell_vitu_itu_pane_t1_ParamLimits

0xd2ee,	// (0x000a507e) cell_vitu_itu_pane_t1

0xd2ee,	// (0x000a507e) cell_vitu_itu_pane_t2_ParamLimits

0xd2ee,	// (0x000a507e) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x000a74de) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x000a74de) cell_vitu_itu_pane_t

0xac16,	// (0x000a29a6) bg_button_pane_cp07

0xc5c0,	// (0x000a4350) cell_vitu_function_pane_g1

0x9ec4,	// (0x000a1c54) main_calc_pane_g1

0x085e,	// (0x000985ee) aid_visual_content_pane

0x9eba,	// (0x000a1c4a) main_vradio_pane

0xc582,	// (0x000a4312) main_vradio_pane_g1_ParamLimits

0xc582,	// (0x000a4312) main_vradio_pane_g1

0xc590,	// (0x000a4320) main_vradio_pane_g2_ParamLimits

0xc590,	// (0x000a4320) main_vradio_pane_g2

0x0001,

0x047d,	// (0x0009820d) main_vradio_pane_g_ParamLimits

0x047d,	// (0x0009820d) main_vradio_pane_g

0xc5ca,	// (0x000a435a) main_vradio_pane_t1_ParamLimits

0xc5ca,	// (0x000a435a) main_vradio_pane_t1

0xc5ca,	// (0x000a435a) main_vradio_pane_t2_ParamLimits

0xc5ca,	// (0x000a435a) main_vradio_pane_t2

0xc5de,	// (0x000a436e) main_vradio_pane_t3_ParamLimits

0xc5de,	// (0x000a436e) main_vradio_pane_t3

0x0002,

0xf755,	// (0x000a74e5) main_vradio_pane_t_ParamLimits

0xf755,	// (0x000a74e5) main_vradio_pane_t

0xc51b,	// (0x000a42ab) vradio_rocker_control_pane_ParamLimits

0xc51b,	// (0x000a42ab) vradio_rocker_control_pane

0xc51b,	// (0x000a42ab) vradio_station_info_pane_ParamLimits

0xc51b,	// (0x000a42ab) vradio_station_info_pane

0xc51b,	// (0x000a42ab) vradio_frequency_info_pane_ParamLimits

0xc51b,	// (0x000a42ab) vradio_frequency_info_pane

0xc5c0,	// (0x000a4350) vradio_station_info_pane_g1

0xd2ee,	// (0x000a507e) vradio_station_info_pane_t1_ParamLimits

0xd2ee,	// (0x000a507e) vradio_station_info_pane_t1

0xc5de,	// (0x000a436e) vradio_station_info_pane_t2_ParamLimits

0xc5de,	// (0x000a436e) vradio_station_info_pane_t2

0x0001,

0xf75c,	// (0x000a74ec) vradio_station_info_pane_t_ParamLimits

0xf75c,	// (0x000a74ec) vradio_station_info_pane_t

0xac16,	// (0x000a29a6) vradio_tuning_pane

0x46cb,	// (0x0009c45b) vradio_rocker_control_pane_g1

0xef16,	// (0x000a6ca6) vradio_rocker_control_pane_g2

0x46d5,	// (0x0009c465) vradio_rocker_control_pane_g3

0x46df,	// (0x0009c46f) vradio_rocker_control_pane_g4

0x46e9,	// (0x0009c479) vradio_rocker_control_pane_g5

0x0004,

0xf761,	// (0x000a74f1) vradio_rocker_control_pane_g

0xc5c0,	// (0x000a4350) vradio_frequency_info_pane_g1

0xc5ca,	// (0x000a435a) vradio_frequency_info_pane_t1_ParamLimits

0xc5ca,	// (0x000a435a) vradio_frequency_info_pane_t1

0x46f3,	// (0x0009c483) vradio_tuning_pane_g1

0x4700,	// (0x0009c490) vradio_tuning_pane_t1

0x9e6b,	// (0x000a1bfb) area_side_right_pane_ParamLimits

0x9e6b,	// (0x000a1bfb) area_side_right_pane

0xe4a2,	// (0x000a6232) status_small_pane_g1

0xe4aa,	// (0x000a623a) status_small_pane_g2

0xe4b3,	// (0x000a6243) status_small_pane_g3

0xe4bc,	// (0x000a624c) status_small_pane_g4

0x0003,

0xf532,	// (0x000a72c2) status_small_pane_g

0xe4c5,	// (0x000a6255) status_small_pane_t1

0x9eba,	// (0x000a1c4a) main_video3_pane

0xac16,	// (0x000a29a6) cams_zoom_vslider_pane

0xef1e,	// (0x000a6cae) image3_wide_pane_ParamLimits

0xef1e,	// (0x000a6cae) image3_wide_pane

0xac16,	// (0x000a29a6) image3_wide_small_pane

0xef38,	// (0x000a6cc8) main_video3_pane_g1_ParamLimits

0xef38,	// (0x000a6cc8) main_video3_pane_g1

0xef38,	// (0x000a6cc8) main_video3_pane_g2_ParamLimits

0xef38,	// (0x000a6cc8) main_video3_pane_g2

0x0001,

0x000d,	// (0x00097d9d) main_video3_pane_g_ParamLimits

0x000d,	// (0x00097d9d) main_video3_pane_g

0xef56,	// (0x000a6ce6) main_video3_pane_t1_ParamLimits

0xef56,	// (0x000a6ce6) main_video3_pane_t1

0xef56,	// (0x000a6ce6) main_video3_pane_t2_ParamLimits

0xef56,	// (0x000a6ce6) main_video3_pane_t2

0xef56,	// (0x000a6ce6) main_video3_pane_t3_ParamLimits

0xef56,	// (0x000a6ce6) main_video3_pane_t3

0x0002,

0x0012,	// (0x00097da2) main_video3_pane_t_ParamLimits

0x0012,	// (0x00097da2) main_video3_pane_t

0xc5c0,	// (0x000a4350) cams_zoom_vslider_pane_g1

0xc5c0,	// (0x000a4350) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x000a6e3f) cams_zoom_vslider_pane_g

0xac16,	// (0x000a29a6) small_slider_vertical_pane

0xc5c0,	// (0x000a4350) small_slider_vertical_pane_g1

0xc5c0,	// (0x000a4350) small_slider_vertical_pane_g2

0xef7d,	// (0x000a6d0d) small_slider_vertical_pane_g3

0x0002,

0x0019,	// (0x00097da9) small_slider_vertical_pane_g

0x9eba,	// (0x000a1c4a) main_hwr_training_pane

0xef86,	// (0x000a6d16) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x000a6d16) hwr_training_instruct_pane

0x470f,	// (0x0009c49f) hwr_training_navi_pane_ParamLimits

0x470f,	// (0x0009c49f) hwr_training_navi_pane

0x472e,	// (0x0009c4be) hwr_training_write_pane_ParamLimits

0x472e,	// (0x0009c4be) hwr_training_write_pane

0xac16,	// (0x000a29a6) bg_frame_shadow_pane

0xefbd,	// (0x000a6d4d) hwr_training_write_pane_g1

0xefc5,	// (0x000a6d55) hwr_training_write_pane_g2

0xefcd,	// (0x000a6d5d) hwr_training_write_pane_g3

0xefd5,	// (0x000a6d65) hwr_training_write_pane_g4

0xefdd,	// (0x000a6d6d) hwr_training_write_pane_g5

0xefe5,	// (0x000a6d75) hwr_training_write_pane_g6

0xefed,	// (0x000a6d7d) hwr_training_write_pane_g7

0x0006,

0x0020,	// (0x00097db0) hwr_training_write_pane_g

0xa15d,	// (0x000a1eed) hwr_training_navi_pane_g1_ParamLimits

0xa15d,	// (0x000a1eed) hwr_training_navi_pane_g1

0xa16f,	// (0x000a1eff) hwr_training_navi_pane_g2_ParamLimits

0xa16f,	// (0x000a1eff) hwr_training_navi_pane_g2

0xa181,	// (0x000a1f11) hwr_training_navi_pane_g3_ParamLimits

0xa181,	// (0x000a1f11) hwr_training_navi_pane_g3

0xa191,	// (0x000a1f21) hwr_training_navi_pane_g4_ParamLimits

0xa191,	// (0x000a1f21) hwr_training_navi_pane_g4

0x0004,

0xf76c,	// (0x000a74fc) hwr_training_navi_pane_g_ParamLimits

0xf76c,	// (0x000a74fc) hwr_training_navi_pane_g

0xa19e,	// (0x000a1f2e) hwr_training_navi_pane_t1

0x4776,	// (0x0009c506) list_single_hwr_training_instruct_pane_ParamLimits

0x4776,	// (0x0009c506) list_single_hwr_training_instruct_pane

0xeff5,	// (0x000a6d85) list_single_hwr_training_instruct_pane_t1

0xe871,	// (0x000a6601) bg_frame_shadow_pane_g1

0xf004,	// (0x000a6d94) bg_frame_shadow_pane_g2

0xf00c,	// (0x000a6d9c) bg_frame_shadow_pane_g3

0xf014,	// (0x000a6da4) bg_frame_shadow_pane_g4

0xf01c,	// (0x000a6dac) bg_frame_shadow_pane_g5

0xf024,	// (0x000a6db4) bg_frame_shadow_pane_g6

0xf02c,	// (0x000a6dbc) bg_frame_shadow_pane_g7

0xc6cd,	// (0x000a445d) bg_frame_shadow_pane_g8

0x0007,

0x003a,	// (0x00097dca) bg_frame_shadow_pane_g

0x9eba,	// (0x000a1c4a) main_video_tele_dialer_pane

0x478b,	// (0x0009c51b) aid_size_cell_video_keypad_ParamLimits

0x478b,	// (0x0009c51b) aid_size_cell_video_keypad

0x47a5,	// (0x0009c535) grid_video_dialer_keypad_pane_ParamLimits

0x47a5,	// (0x0009c535) grid_video_dialer_keypad_pane

0x47f1,	// (0x0009c581) video_down_pane_cp_ParamLimits

0x47f1,	// (0x0009c581) video_down_pane_cp

0x4823,	// (0x0009c5b3) cell_video_dialer_keypad_pane_ParamLimits

0x4823,	// (0x0009c5b3) cell_video_dialer_keypad_pane

0xf034,	// (0x000a6dc4) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x000a6dc4) bg_button_pane_cp08

0x4845,	// (0x0009c5d5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4845,	// (0x0009c5d5) cell_video_dialer_keypad_pane_g1

0x4145,	// (0x0009bed5) mup3_rocker2_pane_ParamLimits

0x4145,	// (0x0009bed5) mup3_rocker2_pane

0xc5c0,	// (0x000a4350) mup3_rocker2_pane_g1

0x33d6,	// (0x0009b166) main_dialer2_pane

0x9eba,	// (0x000a1c4a) main_mp4_pane

0xa1ca,	// (0x000a1f5a) main_mp4_pane_g1_ParamLimits

0xa1ca,	// (0x000a1f5a) main_mp4_pane_g1

0xa1ca,	// (0x000a1f5a) main_mp4_pane_g2_ParamLimits

0xa1ca,	// (0x000a1f5a) main_mp4_pane_g2

0x487c,	// (0x0009c60c) main_mp4_pane_g3_ParamLimits

0x487c,	// (0x0009c60c) main_mp4_pane_g3

0xa1e8,	// (0x000a1f78) main_mp4_pane_g4_ParamLimits

0xa1e8,	// (0x000a1f78) main_mp4_pane_g4

0xa210,	// (0x000a1fa0) main_mp4_pane_g5_ParamLimits

0xa210,	// (0x000a1fa0) main_mp4_pane_g5

0x0007,

0xf786,	// (0x000a7516) main_mp4_pane_g_ParamLimits

0xf786,	// (0x000a7516) main_mp4_pane_g

0xa278,	// (0x000a2008) main_mp4_pane_t1_ParamLimits

0xa278,	// (0x000a2008) main_mp4_pane_t1

0xa2da,	// (0x000a206a) main_mp4_pane_t2_ParamLimits

0xa2da,	// (0x000a206a) main_mp4_pane_t2

0xa33e,	// (0x000a20ce) main_mp4_pane_t3_ParamLimits

0xa33e,	// (0x000a20ce) main_mp4_pane_t3

0xa39c,	// (0x000a212c) main_mp4_pane_t4_ParamLimits

0xa39c,	// (0x000a212c) main_mp4_pane_t4

0x0003,

0xf797,	// (0x000a7527) main_mp4_pane_t_ParamLimits

0xf797,	// (0x000a7527) main_mp4_pane_t

0xa3fa,	// (0x000a218a) mp4_progress_pane_ParamLimits

0xa3fa,	// (0x000a218a) mp4_progress_pane

0xa42e,	// (0x000a21be) mp4_rocker_pane_ParamLimits

0xa42e,	// (0x000a21be) mp4_rocker_pane

0x48b4,	// (0x0009c644) mp4_progress_pane_t1

0x48d6,	// (0x0009c666) mp4_progress_pane_t2

0x0001,

0xf7a0,	// (0x000a7530) mp4_progress_pane_t

0x48f8,	// (0x0009c688) mup_progress_pane_cp04

0xa153,	// (0x000a1ee3) mp4_rocker_pane_g1

0x9eac,	// (0x000a1c3c) aid_cell_size_keypad2_ParamLimits

0x9eac,	// (0x000a1c3c) aid_cell_size_keypad2

0x9eac,	// (0x000a1c3c) dialer2_ne_pane_ParamLimits

0x9eac,	// (0x000a1c3c) dialer2_ne_pane

0x9eac,	// (0x000a1c3c) grid_dialer2_keypad_pane_ParamLimits

0x9eac,	// (0x000a1c3c) grid_dialer2_keypad_pane

0xe648,	// (0x000a63d8) bg_popup_call_pane_cp07_ParamLimits

0xe648,	// (0x000a63d8) bg_popup_call_pane_cp07

0x490b,	// (0x0009c69b) dialer2_ne_pane_t1_ParamLimits

0x490b,	// (0x0009c69b) dialer2_ne_pane_t1

0x495b,	// (0x0009c6eb) cell_dialer2_keypad_pane_ParamLimits

0x495b,	// (0x0009c6eb) cell_dialer2_keypad_pane

0xe648,	// (0x000a63d8) bg_button_pane_pane_cp04_ParamLimits

0xe648,	// (0x000a63d8) bg_button_pane_pane_cp04

0xc582,	// (0x000a4312) cell_dialer2_keypad_pane_g1_ParamLimits

0xc582,	// (0x000a4312) cell_dialer2_keypad_pane_g1

0x14b5,	// (0x00099245) aid_placing_vt_set_content_ParamLimits

0x14b5,	// (0x00099245) aid_placing_vt_set_content

0x14dd,	// (0x0009926d) aid_placing_vt_set_title_ParamLimits

0x14dd,	// (0x0009926d) aid_placing_vt_set_title

0x9eba,	// (0x000a1c4a) main_image3_pane

0x49ec,	// (0x0009c77c) area_side_right_pane_cp01_ParamLimits

0x49ec,	// (0x0009c77c) area_side_right_pane_cp01

0x4a03,	// (0x0009c793) main_image3_pane_g1_ParamLimits

0x4a03,	// (0x0009c793) main_image3_pane_g1

0x4a11,	// (0x0009c7a1) main_image3_pane_g2_ParamLimits

0x4a11,	// (0x0009c7a1) main_image3_pane_g2

0x4a39,	// (0x0009c7c9) main_image3_pane_g3_ParamLimits

0x4a39,	// (0x0009c7c9) main_image3_pane_g3

0x4a63,	// (0x0009c7f3) main_image3_pane_g4_ParamLimits

0x4a63,	// (0x0009c7f3) main_image3_pane_g4

0x0003,

0xf7af,	// (0x000a753f) main_image3_pane_g_ParamLimits

0xf7af,	// (0x000a753f) main_image3_pane_g

0x4a8d,	// (0x0009c81d) main_image3_pane_t1_ParamLimits

0x4a8d,	// (0x0009c81d) main_image3_pane_t1

0x4ae5,	// (0x0009c875) main_image3_pane_t2_ParamLimits

0x4ae5,	// (0x0009c875) main_image3_pane_t2

0x4b37,	// (0x0009c8c7) main_image3_pane_t3_ParamLimits

0x4b37,	// (0x0009c8c7) main_image3_pane_t3

0x0003,

0xf7b8,	// (0x000a7548) main_image3_pane_t_ParamLimits

0xf7b8,	// (0x000a7548) main_image3_pane_t

0xc51b,	// (0x000a42ab) grid_sctrl_middle_pane_cp01_ParamLimits

0xc51b,	// (0x000a42ab) grid_sctrl_middle_pane_cp01

0x4bbf,	// (0x0009c94f) cell_sctrl_middle_pane_cp01_ParamLimits

0x4bbf,	// (0x0009c94f) cell_sctrl_middle_pane_cp01

0x4bdc,	// (0x0009c96c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4bdc,	// (0x0009c96c) cell_sctrl_middle_pane_cp01_g1

0x9eba,	// (0x000a1c4a) main_call4_pane

0x4bf2,	// (0x0009c982) aid_size_button_call4_ParamLimits

0x4bf2,	// (0x0009c982) aid_size_button_call4

0x4c25,	// (0x0009c9b5) call4_windows_pane_ParamLimits

0x4c25,	// (0x0009c9b5) call4_windows_pane

0x4c44,	// (0x0009c9d4) grid_call4_button_pane_ParamLimits

0x4c44,	// (0x0009c9d4) grid_call4_button_pane

0x4c77,	// (0x0009ca07) call4_windows_conf_pane

0x4c8e,	// (0x0009ca1e) popup_call4_audio_first_window_ParamLimits

0x4c8e,	// (0x0009ca1e) popup_call4_audio_first_window

0x4cde,	// (0x0009ca6e) popup_call4_audio_second_window_ParamLimits

0x4cde,	// (0x0009ca6e) popup_call4_audio_second_window

0x4cf5,	// (0x0009ca85) popup_call4_audio_wait_window_ParamLimits

0x4cf5,	// (0x0009ca85) popup_call4_audio_wait_window

0x4d03,	// (0x0009ca93) cell_call4_button_pane_ParamLimits

0x4d03,	// (0x0009ca93) cell_call4_button_pane

0x4d28,	// (0x0009cab8) bg_button_pane_cp09_ParamLimits

0x4d28,	// (0x0009cab8) bg_button_pane_cp09

0x4d34,	// (0x0009cac4) cell_call4_button_pane_g1_ParamLimits

0x4d34,	// (0x0009cac4) cell_call4_button_pane_g1

0x4d5a,	// (0x0009caea) cell_call4_button_pane_t1_ParamLimits

0x4d5a,	// (0x0009caea) cell_call4_button_pane_t1

0x4d88,	// (0x0009cb18) popup_call4_audio_conf_window_ParamLimits

0x4d88,	// (0x0009cb18) popup_call4_audio_conf_window

0x41a5,	// (0x0009bf35) mup3_progress_pane_t1_ParamLimits

0x41c4,	// (0x0009bf54) mup3_progress_pane_t2_ParamLimits

0xebf5,	// (0x000a6985) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x000a745a) mup3_progress_pane_t_ParamLimits

0xec12,	// (0x000a69a2) mup_progress_pane_cp03_ParamLimits

0x46c3,	// (0x0009c453) mup3_control_keys_pane_g4_copy1

0xa42e,	// (0x000a21be) mp4_rocker2_pane_ParamLimits

0xa42e,	// (0x000a21be) mp4_rocker2_pane

0xa4a6,	// (0x000a2236) mp4_rocker2_pane_g1

0xa4a6,	// (0x000a2236) mp4_rocker2_pane_g2

0xa4a6,	// (0x000a2236) mp4_rocker2_pane_g3

0xa4a6,	// (0x000a2236) mp4_rocker2_pane_g4

0xa4a6,	// (0x000a2236) mp4_rocker2_pane_g5

0x0004,

0xf7c1,	// (0x000a7551) mp4_rocker2_pane_g

0x9eba,	// (0x000a1c4a) main_camera4_pane

0x9eba,	// (0x000a1c4a) main_video4_pane

0x47bf,	// (0x0009c54f) main_video_tele_dialer_pane_t1_ParamLimits

0x47bf,	// (0x0009c54f) main_video_tele_dialer_pane_t1

0x47d8,	// (0x0009c568) main_video_tele_dialer_pane_t2_ParamLimits

0x47d8,	// (0x0009c568) main_video_tele_dialer_pane_t2

0x0001,

0xf777,	// (0x000a7507) main_video_tele_dialer_pane_t_ParamLimits

0xf777,	// (0x000a7507) main_video_tele_dialer_pane_t

0x4db4,	// (0x0009cb44) cam4_autofocus_pane_ParamLimits

0x4db4,	// (0x0009cb44) cam4_autofocus_pane

0x4dca,	// (0x0009cb5a) cam4_image_uncrop_pane_ParamLimits

0x4dca,	// (0x0009cb5a) cam4_image_uncrop_pane

0x4de4,	// (0x0009cb74) cam4_indicators_pane_ParamLimits

0x4de4,	// (0x0009cb74) cam4_indicators_pane

0x4e0f,	// (0x0009cb9f) main_camera4_pane_g1_ParamLimits

0x4e0f,	// (0x0009cb9f) main_camera4_pane_g1

0x4e21,	// (0x0009cbb1) main_camera4_pane_g2_ParamLimits

0x4e21,	// (0x0009cbb1) main_camera4_pane_g2

0x4e34,	// (0x0009cbc4) main_camera4_pane_g3_ParamLimits

0x4e34,	// (0x0009cbc4) main_camera4_pane_g3

0x4e47,	// (0x0009cbd7) main_camera4_pane_g4_ParamLimits

0x4e47,	// (0x0009cbd7) main_camera4_pane_g4

0x4e5a,	// (0x0009cbea) main_camera4_pane_g5_ParamLimits

0x4e5a,	// (0x0009cbea) main_camera4_pane_g5

0x0005,

0xf7cc,	// (0x000a755c) main_camera4_pane_g_ParamLimits

0xf7cc,	// (0x000a755c) main_camera4_pane_g

0x4e7e,	// (0x0009cc0e) main_camera4_pane_t1_ParamLimits

0x4e7e,	// (0x0009cc0e) main_camera4_pane_t1

0xac53,	// (0x000a29e3) bg_tb_trans_pane_cp06

0xa4d2,	// (0x000a2262) cam4_indicators_pane_g1

0xa4e3,	// (0x000a2273) cam4_indicators_pane_g2

0x0002,

0xf7e7,	// (0x000a7577) cam4_indicators_pane_g

0xa501,	// (0x000a2291) cam4_indicators_pane_t1

0x4ee2,	// (0x0009cc72) main_video4_pane_g1_ParamLimits

0x4ee2,	// (0x0009cc72) main_video4_pane_g1

0x4ef1,	// (0x0009cc81) main_video4_pane_g2_ParamLimits

0x4ef1,	// (0x0009cc81) main_video4_pane_g2

0x4f00,	// (0x0009cc90) main_video4_pane_g3_ParamLimits

0x4f00,	// (0x0009cc90) main_video4_pane_g3

0x4f0f,	// (0x0009cc9f) main_video4_pane_g4_ParamLimits

0x4f0f,	// (0x0009cc9f) main_video4_pane_g4

0x0004,

0xf7ee,	// (0x000a757e) main_video4_pane_g_ParamLimits

0xf7ee,	// (0x000a757e) main_video4_pane_g

0x4f2d,	// (0x0009ccbd) vid4_indicators_pane_ParamLimits

0x4f2d,	// (0x0009ccbd) vid4_indicators_pane

0x4f5b,	// (0x0009cceb) video4_image_uncrop_cif_pane_ParamLimits

0x4f5b,	// (0x0009cceb) video4_image_uncrop_cif_pane

0x4f75,	// (0x0009cd05) video4_image_uncrop_nhd_pane_ParamLimits

0x4f75,	// (0x0009cd05) video4_image_uncrop_nhd_pane

0x4dca,	// (0x0009cb5a) video4_image_uncrop_vga_pane_ParamLimits

0x4dca,	// (0x0009cb5a) video4_image_uncrop_vga_pane

0x9eac,	// (0x000a1c3c) bg_tb_trans_pane_cp07

0xa52d,	// (0x000a22bd) vid4_indicators_pane_g1

0xa541,	// (0x000a22d1) vid4_indicators_pane_g2

0xa555,	// (0x000a22e5) vid4_indicators_pane_g3

0x0004,

0xf7f9,	// (0x000a7589) vid4_indicators_pane_g

0xa584,	// (0x000a2314) vid4_indicators_pane_t1

0x4f89,	// (0x0009cd19) cam4_autofocus_pane_g1

0x4f91,	// (0x0009cd21) cam4_autofocus_pane_g2

0x4f99,	// (0x0009cd29) cam4_autofocus_pane_g3

0x0002,

0xf804,	// (0x000a7594) cam4_autofocus_pane_g

0x4fa1,	// (0x0009cd31) cam4_autofocus_pane_g3_copy1

0x4807,	// (0x0009c597) video_down_pane_cp_t1

0x4815,	// (0x0009c5a5) video_down_pane_cp_t2

0x0001,

0xf77c,	// (0x000a750c) video_down_pane_cp_t

0x9eac,	// (0x000a1c3c) popup_vitu2_window_ParamLimits

0x9eac,	// (0x000a1c3c) popup_vitu2_window

0x4fa9,	// (0x0009cd39) aid_size_cell2_itu2_ParamLimits

0x4fa9,	// (0x0009cd39) aid_size_cell2_itu2

0x4fcf,	// (0x0009cd5f) aid_size_cell_itu2_ParamLimits

0x4fcf,	// (0x0009cd5f) aid_size_cell_itu2

0x502b,	// (0x0009cdbb) bg_popup_window_pane_cp09_ParamLimits

0x502b,	// (0x0009cdbb) bg_popup_window_pane_cp09

0x5039,	// (0x0009cdc9) field_vitu2_entry_pane_ParamLimits

0x5039,	// (0x0009cdc9) field_vitu2_entry_pane

0x505f,	// (0x0009cdef) grid_vitu2_function_pane_ParamLimits

0x505f,	// (0x0009cdef) grid_vitu2_function_pane

0x50b0,	// (0x0009ce40) grid_vitu2_itu_pane_ParamLimits

0x50b0,	// (0x0009ce40) grid_vitu2_itu_pane

0x5146,	// (0x0009ced6) cell_vitu2_itu_pane_ParamLimits

0x5146,	// (0x0009ced6) cell_vitu2_itu_pane

0x5172,	// (0x0009cf02) cell_vitu2_function_pane_ParamLimits

0x5172,	// (0x0009cf02) cell_vitu2_function_pane

0x51b1,	// (0x0009cf41) bg_popup_call_pane_cp08_ParamLimits

0x51b1,	// (0x0009cf41) bg_popup_call_pane_cp08

0x51c8,	// (0x0009cf58) field_vitu2_entry_pane_g1

0x51d4,	// (0x0009cf64) field_vitu2_entry_pane_g2

0x0002,

0xf80b,	// (0x000a759b) field_vitu2_entry_pane_g

0x51e0,	// (0x0009cf70) field_vitu2_entry_pane_t1_ParamLimits

0x51e0,	// (0x0009cf70) field_vitu2_entry_pane_t1

0x520f,	// (0x0009cf9f) field_vitu2_entry_pane_t2_ParamLimits

0x520f,	// (0x0009cf9f) field_vitu2_entry_pane_t2

0x0001,

0xf812,	// (0x000a75a2) field_vitu2_entry_pane_t_ParamLimits

0xf812,	// (0x000a75a2) field_vitu2_entry_pane_t

0x5234,	// (0x0009cfc4) bg_button_pane_cp010_ParamLimits

0x5234,	// (0x0009cfc4) bg_button_pane_cp010

0x5242,	// (0x0009cfd2) cell_vitu2_itu_pane_g1

0x5268,	// (0x0009cff8) cell_vitu2_itu_pane_t1_ParamLimits

0x5268,	// (0x0009cff8) cell_vitu2_itu_pane_t1

0x0736,	// (0x000984c6) cell_vitu2_itu_pane_t2_ParamLimits

0x0736,	// (0x000984c6) cell_vitu2_itu_pane_t2

0x0002,

0xf81c,	// (0x000a75ac) cell_vitu2_itu_pane_t_ParamLimits

0xf81c,	// (0x000a75ac) cell_vitu2_itu_pane_t

0x9eac,	// (0x000a1c3c) bg_button_pane_cp011

0x52c6,	// (0x0009d056) cell_vitu2_function_pane_g1

0x9eba,	// (0x000a1c4a) main_myfav_hc_pane

0x4b87,	// (0x0009c917) popup_image3_note_pane_ParamLimits

0x4b87,	// (0x0009c917) popup_image3_note_pane

0x4ba3,	// (0x0009c933) popup_image3_tool_bar_pane_ParamLimits

0x4ba3,	// (0x0009c933) popup_image3_tool_bar_pane

0x07c4,	// (0x00098554) cell_vitu2_itu_pane_t3_ParamLimits

0x07c4,	// (0x00098554) cell_vitu2_itu_pane_t3

0xac16,	// (0x000a29a6) bg_popup_trans_pane

0x52da,	// (0x0009d06a) grid_image3_tool_bar_pane

0x52e4,	// (0x0009d074) bg_popup_trans_pane_g1

0xca10,	// (0x000a47a0) bg_popup_trans_pane_g2

0x52ec,	// (0x0009d07c) bg_popup_trans_pane_g3

0x52f4,	// (0x0009d084) bg_popup_trans_pane_g4

0x52fc,	// (0x0009d08c) bg_popup_trans_pane_g5

0x5304,	// (0x0009d094) bg_popup_trans_pane_g6

0x530c,	// (0x0009d09c) bg_popup_trans_pane_g7

0x5314,	// (0x0009d0a4) bg_popup_trans_pane_g8

0xc9f0,	// (0x000a4780) bg_popup_trans_pane_g9

0x0008,

0xf823,	// (0x000a75b3) bg_popup_trans_pane_g

0x531c,	// (0x0009d0ac) cell_image3_tool_bar_pane_ParamLimits

0x531c,	// (0x0009d0ac) cell_image3_tool_bar_pane

0xc5c0,	// (0x000a4350) cell_image3_tool_bar_pane_g1

0xac16,	// (0x000a29a6) bg_popup_trans_pane_cp1

0x5330,	// (0x0009d0c0) popup_image3_note_pane_t1

0x533e,	// (0x0009d0ce) popup_image3_note_pane_t2

0x534c,	// (0x0009d0dc) popup_image3_note_pane_t3

0x0002,

0xf836,	// (0x000a75c6) popup_image3_note_pane_t

0x535a,	// (0x0009d0ea) popup_image3_note_pane_t3_copy1

0x5368,	// (0x0009d0f8) bg_myfav_hc_instruction_pane_ParamLimits

0x5368,	// (0x0009d0f8) bg_myfav_hc_instruction_pane

0x537c,	// (0x0009d10c) cell_myfav_contact_pane_ParamLimits

0x537c,	// (0x0009d10c) cell_myfav_contact_pane

0x539a,	// (0x0009d12a) cell_myfav_contact_pane_cp1_ParamLimits

0x539a,	// (0x0009d12a) cell_myfav_contact_pane_cp1

0x53b2,	// (0x0009d142) cell_myfav_contact_pane_cp2_ParamLimits

0x53b2,	// (0x0009d142) cell_myfav_contact_pane_cp2

0x53ca,	// (0x0009d15a) cell_myfav_contact_pane_cp3_ParamLimits

0x53ca,	// (0x0009d15a) cell_myfav_contact_pane_cp3

0x53e1,	// (0x0009d171) cell_myfav_contact_pane_cp4_ParamLimits

0x53e1,	// (0x0009d171) cell_myfav_contact_pane_cp4

0x53f9,	// (0x0009d189) cell_myfav_contact_pane_cp5_ParamLimits

0x53f9,	// (0x0009d189) cell_myfav_contact_pane_cp5

0x540d,	// (0x0009d19d) cell_myfav_contact_pane_cp6_ParamLimits

0x540d,	// (0x0009d19d) cell_myfav_contact_pane_cp6

0x5423,	// (0x0009d1b3) cell_myfav_contact_pane_cp7_ParamLimits

0x5423,	// (0x0009d1b3) cell_myfav_contact_pane_cp7

0x543d,	// (0x0009d1cd) listscroll_gen_pane_cp05

0x5446,	// (0x0009d1d6) main_myfav_hc_pane_g1_ParamLimits

0x5446,	// (0x0009d1d6) main_myfav_hc_pane_g1

0x5460,	// (0x0009d1f0) main_myfav_hc_pane_g2_ParamLimits

0x5460,	// (0x0009d1f0) main_myfav_hc_pane_g2

0x0002,

0xf83d,	// (0x000a75cd) main_myfav_hc_pane_g_ParamLimits

0xf83d,	// (0x000a75cd) main_myfav_hc_pane_g

0x5492,	// (0x0009d222) main_myfav_hc_pane_t1_ParamLimits

0x5492,	// (0x0009d222) main_myfav_hc_pane_t1

0x54a9,	// (0x0009d239) main_myfav_hc_pane_t2_ParamLimits

0x54a9,	// (0x0009d239) main_myfav_hc_pane_t2

0x54bb,	// (0x0009d24b) main_myfav_hc_pane_t3_ParamLimits

0x54bb,	// (0x0009d24b) main_myfav_hc_pane_t3

0x54cd,	// (0x0009d25d) main_myfav_hc_pane_t4_ParamLimits

0x54cd,	// (0x0009d25d) main_myfav_hc_pane_t4

0x0004,

0xf844,	// (0x000a75d4) main_myfav_hc_pane_t_ParamLimits

0xf844,	// (0x000a75d4) main_myfav_hc_pane_t

0xc5c0,	// (0x000a4350) bg_myfav_hc_instruction_pane_g1

0x54f5,	// (0x0009d285) cell_myfav_contact_pane_g1_ParamLimits

0x54f5,	// (0x0009d285) cell_myfav_contact_pane_g1

0x54f5,	// (0x0009d285) cell_myfav_contact_pane_g2_ParamLimits

0x54f5,	// (0x0009d285) cell_myfav_contact_pane_g2

0x5501,	// (0x0009d291) cell_myfav_contact_pane_g3_ParamLimits

0x5501,	// (0x0009d291) cell_myfav_contact_pane_g3

0xc590,	// (0x000a4320) cell_myfav_contact_pane_g4_ParamLimits

0xc590,	// (0x000a4320) cell_myfav_contact_pane_g4

0x550e,	// (0x0009d29e) cell_myfav_contact_pane_g5_ParamLimits

0x550e,	// (0x0009d29e) cell_myfav_contact_pane_g5

0x0004,

0xf84f,	// (0x000a75df) cell_myfav_contact_pane_g_ParamLimits

0xf84f,	// (0x000a75df) cell_myfav_contact_pane_g

0x547a,	// (0x0009d20a) main_myfav_hc_pane_g3_ParamLimits

0x547a,	// (0x0009d20a) main_myfav_hc_pane_g3

0x0999,	// (0x00098729) popup_adpt_find_window

0x551a,	// (0x0009d2aa) afind_page_pane_ParamLimits

0x551a,	// (0x0009d2aa) afind_page_pane

0x552f,	// (0x0009d2bf) aid_size_cell_afind_ParamLimits

0x552f,	// (0x0009d2bf) aid_size_cell_afind

0x554d,	// (0x0009d2dd) bg_popup_sub_pane_cp09_ParamLimits

0x554d,	// (0x0009d2dd) bg_popup_sub_pane_cp09

0x555a,	// (0x0009d2ea) find_pane_cp01_ParamLimits

0x555a,	// (0x0009d2ea) find_pane_cp01

0x5567,	// (0x0009d2f7) grid_afind_control_pane_ParamLimits

0x5567,	// (0x0009d2f7) grid_afind_control_pane

0x557b,	// (0x0009d30b) grid_afind_pane_ParamLimits

0x557b,	// (0x0009d30b) grid_afind_pane

0x559d,	// (0x0009d32d) cell_afind_pane_ParamLimits

0x559d,	// (0x0009d32d) cell_afind_pane

0xc5c0,	// (0x000a4350) afind_page_pane_g1

0x5604,	// (0x0009d394) afind_page_pane_g2

0x560c,	// (0x0009d39c) afind_page_pane_g3

0x0002,

0xf85a,	// (0x000a75ea) afind_page_pane_g

0x5614,	// (0x0009d3a4) afind_page_pane_t1

0x5634,	// (0x0009d3c4) cell_afind_grid_control_pane_ParamLimits

0x5634,	// (0x0009d3c4) cell_afind_grid_control_pane

0x5643,	// (0x0009d3d3) bg_button_pane_cp69_ParamLimits

0x5643,	// (0x0009d3d3) bg_button_pane_cp69

0x564f,	// (0x0009d3df) cell_afind_pane_g1_ParamLimits

0x564f,	// (0x0009d3df) cell_afind_pane_g1

0x565c,	// (0x0009d3ec) cell_afind_pane_t1_ParamLimits

0x565c,	// (0x0009d3ec) cell_afind_pane_t1

0x566e,	// (0x0009d3fe) bg_button_pane_cp72

0x5676,	// (0x0009d406) cell_afind_grid_control_pane_g1

0x2ec5,	// (0x0009ac55) aid_image_placing_area_ParamLimits

0x2ec5,	// (0x0009ac55) aid_image_placing_area

0xc582,	// (0x000a4312) field_vitu_entry_pane_g1_ParamLimits

0xc582,	// (0x000a4312) field_vitu_entry_pane_g1

0xc582,	// (0x000a4312) field_vitu_entry_pane_g2_ParamLimits

0xc582,	// (0x000a4312) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x000a6f4c) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x000a6f4c) field_vitu_entry_pane_g

0xeefa,	// (0x000a6c8a) cell_vitu_itu_pane_g1_ParamLimits

0xeedd,	// (0x000a6c6d) cell_vitu_itu_pane_t3_ParamLimits

0xeedd,	// (0x000a6c6d) cell_vitu_itu_pane_t3

0x48b4,	// (0x0009c644) mp4_progress_pane_t1_ParamLimits

0x48d6,	// (0x0009c666) mp4_progress_pane_t2_ParamLimits

0xf7a0,	// (0x000a7530) mp4_progress_pane_t_ParamLimits

0x48f8,	// (0x0009c688) mup_progress_pane_cp04_ParamLimits

0x54e1,	// (0x0009d271) main_myfav_hc_pane_t5_ParamLimits

0x54e1,	// (0x0009d271) main_myfav_hc_pane_t5

0x9e5b,	// (0x000a1beb) aid_zoom_text_primary

0x0999,	// (0x00098729) popup_adpt_find_window_ParamLimits

0x9eac,	// (0x000a1c3c) main_cam_set_pane

0x4dfb,	// (0x0009cb8b) cam4_zoom_pane_ParamLimits

0x4dfb,	// (0x0009cb8b) cam4_zoom_pane

0x567f,	// (0x0009d40f) main_cam_set_pane_g1_ParamLimits

0x567f,	// (0x0009d40f) main_cam_set_pane_g1

0x568d,	// (0x0009d41d) main_cam_set_pane_g2_ParamLimits

0x568d,	// (0x0009d41d) main_cam_set_pane_g2

0x0001,

0xf861,	// (0x000a75f1) main_cam_set_pane_g_ParamLimits

0xf861,	// (0x000a75f1) main_cam_set_pane_g

0x56ae,	// (0x0009d43e) main_cam_set_pane_t1_ParamLimits

0x56ae,	// (0x0009d43e) main_cam_set_pane_t1

0x56c9,	// (0x0009d459) main_cset_listscroll_pane_ParamLimits

0x56c9,	// (0x0009d459) main_cset_listscroll_pane

0x56ef,	// (0x0009d47f) main_cset_slider_pane_ParamLimits

0x56ef,	// (0x0009d47f) main_cset_slider_pane

0x571d,	// (0x0009d4ad) main_cset_list_pane_ParamLimits

0x571d,	// (0x0009d4ad) main_cset_list_pane

0x572d,	// (0x0009d4bd) scroll_pane_cp028

0x5736,	// (0x0009d4c6) aid_area_touch_slider

0x5752,	// (0x0009d4e2) cset_slider_pane

0x5775,	// (0x0009d505) main_cset_slider_pane_g1

0x578a,	// (0x0009d51a) main_cset_slider_pane_g2

0x0011,

0xf866,	// (0x000a75f6) main_cset_slider_pane_g

0x5876,	// (0x0009d606) main_cset_slider_pane_t1

0x589e,	// (0x0009d62e) main_cset_slider_pane_t2

0x58b8,	// (0x0009d648) main_cset_slider_pane_t3

0x58d2,	// (0x0009d662) main_cset_slider_pane_t4

0x58ec,	// (0x0009d67c) main_cset_slider_pane_t5

0x5906,	// (0x0009d696) main_cset_slider_pane_t6

0x591b,	// (0x0009d6ab) main_cset_slider_pane_t7

0x000e,

0xf88b,	// (0x000a761b) main_cset_slider_pane_t

0x5a91,	// (0x0009d821) cset_list_set_pane_ParamLimits

0x5a91,	// (0x0009d821) cset_list_set_pane

0x5aa3,	// (0x0009d833) aid_position_infowindow_above

0x5aab,	// (0x0009d83b) aid_position_infowindow_below

0x5ab3,	// (0x0009d843) cset_list_set_pane_g1_ParamLimits

0x5ab3,	// (0x0009d843) cset_list_set_pane_g1

0x5abf,	// (0x0009d84f) cset_list_set_pane_g3_ParamLimits

0x5abf,	// (0x0009d84f) cset_list_set_pane_g3

0x0001,

0xf8aa,	// (0x000a763a) cset_list_set_pane_g_ParamLimits

0xf8aa,	// (0x000a763a) cset_list_set_pane_g

0x5ace,	// (0x0009d85e) cset_list_set_pane_t1_ParamLimits

0x5ace,	// (0x0009d85e) cset_list_set_pane_t1

0xc51b,	// (0x000a42ab) list_highlight_pane_cp021_ParamLimits

0xc51b,	// (0x000a42ab) list_highlight_pane_cp021

0xd372,	// (0x000a5102) cset_slider_pane_g1

0xd384,	// (0x000a5114) cset_slider_pane_g2

0xd37b,	// (0x000a510b) cset_slider_pane_g3

0x0002,

0xf8af,	// (0x000a763f) cset_slider_pane_g

0xa59b,	// (0x000a232b) aid_area_touch_cam4_zoom

0xa5a3,	// (0x000a2333) cam4_zoom_cont_pane

0xa5ab,	// (0x000a233b) cam4_zoom_pane_g1

0xa5b3,	// (0x000a2343) cam4_zoom_pane_g2

0x5ae3,	// (0x0009d873) cam4_zoom_pane_g3

0x0002,

0xf8b6,	// (0x000a7646) cam4_zoom_pane_g

0xa5bb,	// (0x000a234b) cam4_zoom_cont_pane_g1

0xa5c4,	// (0x000a2354) cam4_zoom_cont_pane_g2

0xa5cd,	// (0x000a235d) cam4_zoom_cont_pane_g3

0x0002,

0xf8bd,	// (0x000a764d) cam4_zoom_cont_pane_g

0x4c10,	// (0x0009c9a0) call4_image_pane_ParamLimits

0x4c10,	// (0x0009c9a0) call4_image_pane

0x4c77,	// (0x0009ca07) call4_windows_conf_pane_ParamLimits

0x4cbc,	// (0x0009ca4c) popup_call4_audio_in_window_ParamLimits

0x4cbc,	// (0x0009ca4c) popup_call4_audio_in_window

0xac16,	// (0x000a29a6) bg_popup_call2_act_pane_cp02

0x4d80,	// (0x0009cb10) call4_list_conf_pane

0xc5c0,	// (0x000a4350) call4_image_pane_g1

0xc5c0,	// (0x000a4350) call4_image_pane_g2

0x0001,

0xf0af,	// (0x000a6e3f) call4_image_pane_g

0xa5d6,	// (0x000a2366) list_single_graphic_popup_conf4_pane_ParamLimits

0xa5d6,	// (0x000a2366) list_single_graphic_popup_conf4_pane

0xac16,	// (0x000a29a6) list_highlight_pane_cp022

0xa5e9,	// (0x000a2379) list_single_graphic_popup_conf4_pane_g1

0xcf36,	// (0x000a4cc6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8c4,	// (0x000a7654) list_single_graphic_popup_conf4_pane_g

0xa5f1,	// (0x000a2381) list_single_graphic_popup_conf4_pane_t1

0x1601,	// (0x00099391) popup_vtel_slider_window_ParamLimits

0x1601,	// (0x00099391) popup_vtel_slider_window

0x4949,	// (0x0009c6d9) dialer2_ne_pane_t2_ParamLimits

0x4949,	// (0x0009c6d9) dialer2_ne_pane_t2

0x0001,

0xf7a5,	// (0x000a7535) dialer2_ne_pane_t_ParamLimits

0xf7a5,	// (0x000a7535) dialer2_ne_pane_t

0xe648,	// (0x000a63d8) bg_popup_sub_pane_cp010_ParamLimits

0xe648,	// (0x000a63d8) bg_popup_sub_pane_cp010

0x5aeb,	// (0x0009d87b) popup_vtel_slider_window_g1_ParamLimits

0x5aeb,	// (0x0009d87b) popup_vtel_slider_window_g1

0x5afe,	// (0x0009d88e) popup_vtel_slider_window_g2_ParamLimits

0x5afe,	// (0x0009d88e) popup_vtel_slider_window_g2

0x0003,

0xf8c9,	// (0x000a7659) popup_vtel_slider_window_g_ParamLimits

0xf8c9,	// (0x000a7659) popup_vtel_slider_window_g

0x5b54,	// (0x0009d8e4) vtel_slider_pane_ParamLimits

0x5b54,	// (0x0009d8e4) vtel_slider_pane

0x5b76,	// (0x0009d906) vtel_slider_pane_g1_ParamLimits

0x5b76,	// (0x0009d906) vtel_slider_pane_g1

0x5b8a,	// (0x0009d91a) vtel_slider_pane_g2_ParamLimits

0x5b8a,	// (0x0009d91a) vtel_slider_pane_g2

0x5ba2,	// (0x0009d932) vtel_slider_pane_g3_ParamLimits

0x5ba2,	// (0x0009d932) vtel_slider_pane_g3

0x5b76,	// (0x0009d906) vtel_slider_pane_g4_ParamLimits

0x5b76,	// (0x0009d906) vtel_slider_pane_g4

0x5bb8,	// (0x0009d948) vtel_slider_pane_g5_ParamLimits

0x5bb8,	// (0x0009d948) vtel_slider_pane_g5

0x0004,

0xf8d2,	// (0x000a7662) vtel_slider_pane_g_ParamLimits

0xf8d2,	// (0x000a7662) vtel_slider_pane_g

0x9eac,	// (0x000a1c3c) main_gallery2_pane

0x4ffb,	// (0x0009cd8b) aid_size_row_itut2_dropdow_list_ParamLimits

0x4ffb,	// (0x0009cd8b) aid_size_row_itut2_dropdow_list

0x5087,	// (0x0009ce17) grid_vitu2_function_top_pane_ParamLimits

0x5087,	// (0x0009ce17) grid_vitu2_function_top_pane

0x50f1,	// (0x0009ce81) popup_vitu2_dropdown_list_window_ParamLimits

0x50f1,	// (0x0009ce81) popup_vitu2_dropdown_list_window

0x5118,	// (0x0009cea8) popup_vitu2_match_list_window

0x5bce,	// (0x0009d95e) cell_vitu2_function_top_pane_ParamLimits

0x5bce,	// (0x0009d95e) cell_vitu2_function_top_pane

0x5be6,	// (0x0009d976) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5be6,	// (0x0009d976) cell_vitu2_function_top_pane_cp01

0x5c02,	// (0x0009d992) cell_vitu2_function_top_wide_pane_ParamLimits

0x5c02,	// (0x0009d992) cell_vitu2_function_top_wide_pane

0x9eac,	// (0x000a1c3c) bg_button_pane_cp012

0x5c20,	// (0x0009d9b0) cell_vitu2_function_top_pane_g1

0xa607,	// (0x000a2397) bg_button_pane_cp013_ParamLimits

0xa607,	// (0x000a2397) bg_button_pane_cp013

0x5c34,	// (0x0009d9c4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5c34,	// (0x0009d9c4) cell_vitu2_function_top_wide_pane_g1

0x9eac,	// (0x000a1c3c) bg_popup_sub_pane_cp20

0x5c4c,	// (0x0009d9dc) list_vitu2_match_list_pane

0x52e4,	// (0x0009d074) bg_popup_sub_pane_cp20_g1

0x52ec,	// (0x0009d07c) bg_popup_sub_pane_cp20_g2

0xca10,	// (0x000a47a0) bg_popup_sub_pane_cp20_g3

0x52f4,	// (0x0009d084) bg_popup_sub_pane_cp20_g4

0xc9f0,	// (0x000a4780) bg_popup_sub_pane_cp20_g5

0xa623,	// (0x000a23b3) bg_popup_sub_pane_cp20_g6

0x5304,	// (0x0009d094) bg_popup_sub_pane_cp20_g7

0x530c,	// (0x0009d09c) bg_popup_sub_pane_cp20_g8

0x5314,	// (0x0009d0a4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8dd,	// (0x000a766d) bg_popup_sub_pane_cp20_g

0xa62b,	// (0x000a23bb) list_vitu2_match_list_item_pane_ParamLimits

0xa62b,	// (0x000a23bb) list_vitu2_match_list_item_pane

0xa63d,	// (0x000a23cd) list_vitu2_match_list_item_pane_t1

0x9eba,	// (0x000a1c4a) bg_popup_sub_pane_cp21

0xc7d0,	// (0x000a4560) grid_vitu2_dropdown_list_pane

0x5c64,	// (0x0009d9f4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5c64,	// (0x0009d9f4) cell_vitu2_dropdown_list_char_pane

0x5c84,	// (0x0009da14) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5c84,	// (0x0009da14) cell_vitu2_dropdown_list_ctrl_pane

0xa64b,	// (0x000a23db) cell_vitu2_dropdown_list_char_pane_g1

0xa654,	// (0x000a23e4) cell_vitu2_dropdown_list_char_pane_g2

0xa65d,	// (0x000a23ed) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f0,	// (0x000a7680) cell_vitu2_dropdown_list_char_pane_g

0x5cac,	// (0x0009da3c) cell_vitu2_dropdown_list_char_pane_t1

0x5cba,	// (0x0009da4a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5cba,	// (0x0009da4a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5cc7,	// (0x0009da57) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5cc7,	// (0x0009da57) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5cd4,	// (0x0009da64) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5cd4,	// (0x0009da64) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5ce1,	// (0x0009da71) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5ce1,	// (0x0009da71) cell_vitu2_dropdown_list_ctrl_pane_g4

0xac53,	// (0x000a29e3) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xac53,	// (0x000a29e3) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8f7,	// (0x000a7687) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8f7,	// (0x000a7687) cell_vitu2_dropdown_list_ctrl_pane_g

0x5cfd,	// (0x0009da8d) aid_size_cell_gallery2_ParamLimits

0x5cfd,	// (0x0009da8d) aid_size_cell_gallery2

0x5d1b,	// (0x0009daab) grid_gallery2_pane_ParamLimits

0x5d1b,	// (0x0009daab) grid_gallery2_pane

0x5d35,	// (0x0009dac5) scroll_pane_cp029_ParamLimits

0x5d35,	// (0x0009dac5) scroll_pane_cp029

0x5d46,	// (0x0009dad6) cell_gallery2_pane_ParamLimits

0x5d46,	// (0x0009dad6) cell_gallery2_pane

0xa666,	// (0x000a23f6) cell_gallery2_pane_g2

0x5da5,	// (0x0009db35) cell_gallery2_pane_g3

0xa66e,	// (0x000a23fe) cell_gallery2_pane_g4

0xa676,	// (0x000a2406) cell_gallery2_pane_g5

0xc7d0,	// (0x000a4560) grid_highlight_pane_cp10

0x5118,	// (0x0009cea8) popup_vitu2_match_list_window_ParamLimits

0x512d,	// (0x0009cebd) popup_vitu2_query_window_ParamLimits

0x512d,	// (0x0009cebd) popup_vitu2_query_window

0x9eba,	// (0x000a1c4a) bg_vitu2_candi_button_pane

0xa64b,	// (0x000a23db) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xa654,	// (0x000a23e4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xa65d,	// (0x000a23ed) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5dad,	// (0x0009db3d) bg_button_pane_cp015

0x5dbe,	// (0x0009db4e) bg_button_pane_cp016

0x5dca,	// (0x0009db5a) bg_button_pane_cp017

0xd302,	// (0x000a5092) bg_popup_sub_pane_cp22

0xa67e,	// (0x000a240e) popup_vitu2_query_window_g1

0x5e08,	// (0x0009db98) popup_vitu2_query_window_g2

0x0002,

0xf902,	// (0x000a7692) popup_vitu2_query_window_g

0x5e2a,	// (0x0009dbba) popup_vitu2_query_window_t1_ParamLimits

0x5e2a,	// (0x0009dbba) popup_vitu2_query_window_t1

0x5e5d,	// (0x0009dbed) popup_vitu2_query_window_t2_ParamLimits

0x5e5d,	// (0x0009dbed) popup_vitu2_query_window_t2

0x5e6f,	// (0x0009dbff) popup_vitu2_query_window_t3_ParamLimits

0x5e6f,	// (0x0009dbff) popup_vitu2_query_window_t3

0x5e97,	// (0x0009dc27) popup_vitu2_query_window_t4_ParamLimits

0x5e97,	// (0x0009dc27) popup_vitu2_query_window_t4

0x5eab,	// (0x0009dc3b) popup_vitu2_query_window_t5_ParamLimits

0x5eab,	// (0x0009dc3b) popup_vitu2_query_window_t5

0x0006,

0xf909,	// (0x000a7699) popup_vitu2_query_window_t_ParamLimits

0xf909,	// (0x000a7699) popup_vitu2_query_window_t

0x5715,	// (0x0009d4a5) main_cset_text_pane

0x5736,	// (0x0009d4c6) aid_area_touch_slider_ParamLimits

0x5752,	// (0x0009d4e2) cset_slider_pane_ParamLimits

0x5775,	// (0x0009d505) main_cset_slider_pane_g1_ParamLimits

0x578a,	// (0x0009d51a) main_cset_slider_pane_g2_ParamLimits

0x579f,	// (0x0009d52f) main_cset_slider_pane_g3_ParamLimits

0x579f,	// (0x0009d52f) main_cset_slider_pane_g3

0x57ab,	// (0x0009d53b) main_cset_slider_pane_g4_ParamLimits

0x57ab,	// (0x0009d53b) main_cset_slider_pane_g4

0x57ba,	// (0x0009d54a) main_cset_slider_pane_g5_ParamLimits

0x57ba,	// (0x0009d54a) main_cset_slider_pane_g5

0x57c6,	// (0x0009d556) main_cset_slider_pane_g6_ParamLimits

0x57c6,	// (0x0009d556) main_cset_slider_pane_g6

0xf866,	// (0x000a75f6) main_cset_slider_pane_g_ParamLimits

0x5876,	// (0x0009d606) main_cset_slider_pane_t1_ParamLimits

0x589e,	// (0x0009d62e) main_cset_slider_pane_t2_ParamLimits

0x58b8,	// (0x0009d648) main_cset_slider_pane_t3_ParamLimits

0x58d2,	// (0x0009d662) main_cset_slider_pane_t4_ParamLimits

0x58ec,	// (0x0009d67c) main_cset_slider_pane_t5_ParamLimits

0x5906,	// (0x0009d696) main_cset_slider_pane_t6_ParamLimits

0x591b,	// (0x0009d6ab) main_cset_slider_pane_t7_ParamLimits

0x5945,	// (0x0009d6d5) main_cset_slider_pane_t8_ParamLimits

0x5945,	// (0x0009d6d5) main_cset_slider_pane_t8

0x596d,	// (0x0009d6fd) main_cset_slider_pane_t9_ParamLimits

0x596d,	// (0x0009d6fd) main_cset_slider_pane_t9

0x5995,	// (0x0009d725) main_cset_slider_pane_t10_ParamLimits

0x5995,	// (0x0009d725) main_cset_slider_pane_t10

0x59bd,	// (0x0009d74d) main_cset_slider_pane_t11_ParamLimits

0x59bd,	// (0x0009d74d) main_cset_slider_pane_t11

0x59e5,	// (0x0009d775) main_cset_slider_pane_t12_ParamLimits

0x59e5,	// (0x0009d775) main_cset_slider_pane_t12

0x5a02,	// (0x0009d792) main_cset_slider_pane_t13_ParamLimits

0x5a02,	// (0x0009d792) main_cset_slider_pane_t13

0xf88b,	// (0x000a761b) main_cset_slider_pane_t_ParamLimits

0xac16,	// (0x000a29a6) bg_popup_sub_pane_cp011

0xa68a,	// (0x000a241a) main_cset_text_pane_g1

0xa692,	// (0x000a2422) main_cset_text_pane_t1

0xa6a0,	// (0x000a2430) main_cset_text_pane_t2

0xa6ae,	// (0x000a243e) main_cset_text_pane_t3

0xa6bc,	// (0x000a244c) main_cset_text_pane_t4

0xa6ca,	// (0x000a245a) main_cset_text_pane_t5

0xa6d8,	// (0x000a2468) main_cset_text_pane_t6

0xa6e6,	// (0x000a2476) main_cset_text_pane_t7

0x0006,

0xf918,	// (0x000a76a8) main_cset_text_pane_t

0x9eba,	// (0x000a1c4a) main_cam4_burst_pane

0x9eba,	// (0x000a1c4a) main_cam5_pane

0x5622,	// (0x0009d3b2) bg_button_pane_cp019

0x562b,	// (0x0009d3bb) bg_button_pane_cp020

0x57da,	// (0x0009d56a) main_cset_slider_pane_g7_ParamLimits

0x57da,	// (0x0009d56a) main_cset_slider_pane_g7

0x57e6,	// (0x0009d576) main_cset_slider_pane_g8_ParamLimits

0x57e6,	// (0x0009d576) main_cset_slider_pane_g8

0x57f2,	// (0x0009d582) main_cset_slider_pane_g9_ParamLimits

0x57f2,	// (0x0009d582) main_cset_slider_pane_g9

0x57fe,	// (0x0009d58e) main_cset_slider_pane_g10_ParamLimits

0x57fe,	// (0x0009d58e) main_cset_slider_pane_g10

0x580a,	// (0x0009d59a) main_cset_slider_pane_g11_ParamLimits

0x580a,	// (0x0009d59a) main_cset_slider_pane_g11

0x5816,	// (0x0009d5a6) main_cset_slider_pane_g12_ParamLimits

0x5816,	// (0x0009d5a6) main_cset_slider_pane_g12

0x5822,	// (0x0009d5b2) main_cset_slider_pane_g13_ParamLimits

0x5822,	// (0x0009d5b2) main_cset_slider_pane_g13

0x582e,	// (0x0009d5be) main_cset_slider_pane_g14_ParamLimits

0x582e,	// (0x0009d5be) main_cset_slider_pane_g14

0x583a,	// (0x0009d5ca) main_cset_slider_pane_g15_ParamLimits

0x583a,	// (0x0009d5ca) main_cset_slider_pane_g15

0x5a1f,	// (0x0009d7af) main_cset_slider_pane_t14_ParamLimits

0x5a1f,	// (0x0009d7af) main_cset_slider_pane_t14

0x5a58,	// (0x0009d7e8) main_cset_slider_pane_t15_ParamLimits

0x5a58,	// (0x0009d7e8) main_cset_slider_pane_t15

0x5f15,	// (0x0009dca5) aid_cam4_burst_size_cell_ParamLimits

0x5f15,	// (0x0009dca5) aid_cam4_burst_size_cell

0x5f35,	// (0x0009dcc5) grid_cam4_burst_pane_ParamLimits

0x5f35,	// (0x0009dcc5) grid_cam4_burst_pane

0x5f6d,	// (0x0009dcfd) linegrid_cam4_burst_pane_ParamLimits

0x5f6d,	// (0x0009dcfd) linegrid_cam4_burst_pane

0xa6f4,	// (0x000a2484) scroll_pane_cp30_ParamLimits

0xa6f4,	// (0x000a2484) scroll_pane_cp30

0x5f91,	// (0x0009dd21) cell_cam4_burst_pane_ParamLimits

0x5f91,	// (0x0009dd21) cell_cam4_burst_pane

0xa700,	// (0x000a2490) linegrid_cam4_burst_pane_g1_ParamLimits

0xa700,	// (0x000a2490) linegrid_cam4_burst_pane_g1

0x5fde,	// (0x0009dd6e) linegrid_cam4_burst_pane_g2_ParamLimits

0x5fde,	// (0x0009dd6e) linegrid_cam4_burst_pane_g2

0xa70d,	// (0x000a249d) linegrid_cam4_burst_pane_g3_ParamLimits

0xa70d,	// (0x000a249d) linegrid_cam4_burst_pane_g3

0x0002,

0xf927,	// (0x000a76b7) linegrid_cam4_burst_pane_g_ParamLimits

0xf927,	// (0x000a76b7) linegrid_cam4_burst_pane_g

0x5fef,	// (0x0009dd7f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5fef,	// (0x0009dd7f) linegrid_cam4_burst_pane_g3_copy1

0xa71a,	// (0x000a24aa) linegrid_cam4_burst_pane_g4_ParamLimits

0xa71a,	// (0x000a24aa) linegrid_cam4_burst_pane_g4

0x6009,	// (0x0009dd99) linegrid_cam4_burst_pane_g5_ParamLimits

0x6009,	// (0x0009dd99) linegrid_cam4_burst_pane_g5

0x601a,	// (0x0009ddaa) linegrid_cam4_burst_pane_g6_ParamLimits

0x601a,	// (0x0009ddaa) linegrid_cam4_burst_pane_g6

0xa727,	// (0x000a24b7) linegrid_cam4_burst_pane_g7_ParamLimits

0xa727,	// (0x000a24b7) linegrid_cam4_burst_pane_g7

0x6031,	// (0x0009ddc1) cell_cam4_burst_pane_g1

0xa740,	// (0x000a24d0) main_cam5_pane_t1_ParamLimits

0xa740,	// (0x000a24d0) main_cam5_pane_t1

0xa752,	// (0x000a24e2) main_cam5_pane_t2_ParamLimits

0xa752,	// (0x000a24e2) main_cam5_pane_t2

0xa764,	// (0x000a24f4) main_cam5_pane_t3_ParamLimits

0xa764,	// (0x000a24f4) main_cam5_pane_t3

0xa776,	// (0x000a2506) main_cam5_pane_t4_ParamLimits

0xa776,	// (0x000a2506) main_cam5_pane_t4

0xa78e,	// (0x000a251e) main_cam5_pane_t5_ParamLimits

0xa78e,	// (0x000a251e) main_cam5_pane_t5

0xa7a2,	// (0x000a2532) main_cam5_pane_t6_ParamLimits

0xa7a2,	// (0x000a2532) main_cam5_pane_t6

0xa7b6,	// (0x000a2546) main_cam5_pane_t7_ParamLimits

0xa7b6,	// (0x000a2546) main_cam5_pane_t7

0xa7c8,	// (0x000a2558) main_cam5_pane_t8_ParamLimits

0xa7c8,	// (0x000a2558) main_cam5_pane_t8

0xa7e4,	// (0x000a2574) main_cam5_pane_t9_ParamLimits

0xa7e4,	// (0x000a2574) main_cam5_pane_t9

0xa7f6,	// (0x000a2586) main_cam5_pane_t10_ParamLimits

0xa7f6,	// (0x000a2586) main_cam5_pane_t10

0xa808,	// (0x000a2598) main_cam5_pane_t11_ParamLimits

0xa808,	// (0x000a2598) main_cam5_pane_t11

0xa81a,	// (0x000a25aa) main_cam5_pane_t12_ParamLimits

0xa81a,	// (0x000a25aa) main_cam5_pane_t12

0xa82f,	// (0x000a25bf) main_cam5_pane_t13_ParamLimits

0xa82f,	// (0x000a25bf) main_cam5_pane_t13

0x000c,

0xf933,	// (0x000a76c3) main_cam5_pane_t_ParamLimits

0xf933,	// (0x000a76c3) main_cam5_pane_t

0x0a1a,	// (0x000987aa) popup_scut_keymap_window_ParamLimits

0x0a1a,	// (0x000987aa) popup_scut_keymap_window

0x6044,	// (0x0009ddd4) aid_size_cell_brow_shortcut

0xc7d0,	// (0x000a4560) bg_popup_window_pane_cp010

0x6050,	// (0x0009dde0) grid_scut_pane

0x605c,	// (0x0009ddec) cell_scut_pane_ParamLimits

0x605c,	// (0x0009ddec) cell_scut_pane

0x6073,	// (0x0009de03) cell_scut_pane_g1

0xa84c,	// (0x000a25dc) cell_scut_pane_t1

0xa85b,	// (0x000a25eb) cell_scut_pane_t2

0x607c,	// (0x0009de0c) cell_scut_pane_t3

0x0002,

0xf94e,	// (0x000a76de) cell_scut_pane_t

0x3d5e,	// (0x0009baee) main_mup3_pane_g8_ParamLimits

0x3d5e,	// (0x0009baee) main_mup3_pane_g8

0x5013,	// (0x0009cda3) area_vitu2_query_pane_ParamLimits

0x5013,	// (0x0009cda3) area_vitu2_query_pane

0x5dd6,	// (0x0009db66) input_focus_pane_cp08

0xa86a,	// (0x000a25fa) area_vitu2_query_pane_g1

0x608a,	// (0x0009de1a) area_vitu2_query_pane_g2

0x0001,

0xf955,	// (0x000a76e5) area_vitu2_query_pane_g

0x6099,	// (0x0009de29) area_vitu2_query_pane_t1_ParamLimits

0x6099,	// (0x0009de29) area_vitu2_query_pane_t1

0x60ad,	// (0x0009de3d) area_vitu2_query_pane_t2_ParamLimits

0x60ad,	// (0x0009de3d) area_vitu2_query_pane_t2

0x60c1,	// (0x0009de51) area_vitu2_query_pane_t3_ParamLimits

0x60c1,	// (0x0009de51) area_vitu2_query_pane_t3

0x60e9,	// (0x0009de79) area_vitu2_query_pane_t4_ParamLimits

0x60e9,	// (0x0009de79) area_vitu2_query_pane_t4

0x6111,	// (0x0009dea1) area_vitu2_query_pane_t5_ParamLimits

0x6111,	// (0x0009dea1) area_vitu2_query_pane_t5

0x6139,	// (0x0009dec9) area_vitu2_query_pane_t6_ParamLimits

0x6139,	// (0x0009dec9) area_vitu2_query_pane_t6

0x0006,

0xf95a,	// (0x000a76ea) area_vitu2_query_pane_t_ParamLimits

0xf95a,	// (0x000a76ea) area_vitu2_query_pane_t

0x6185,	// (0x0009df15) bg_button_pane_cp018

0x6191,	// (0x0009df21) bg_button_pane_cp021

0x619d,	// (0x0009df2d) bg_button_pane_cp022

0x61bc,	// (0x0009df4c) input_focus_pane_cp09

0xd072,	// (0x000a4e02) aid_size_touch_mv_arrow_left

0xd09b,	// (0x000a4e2b) aid_size_touch_mv_arrow_right

0x5852,	// (0x0009d5e2) main_cset_slider_pane_g16_ParamLimits

0x5852,	// (0x0009d5e2) main_cset_slider_pane_g16

0x585e,	// (0x0009d5ee) main_cset_slider_pane_g17_ParamLimits

0x585e,	// (0x0009d5ee) main_cset_slider_pane_g17

0x6031,	// (0x0009ddc1) cell_cam4_burst_pane_g1_ParamLimits

0xac16,	// (0x000a29a6) compa_mode_pane

0x5b0e,	// (0x0009d89e) popup_vtel_slider_window_g3_ParamLimits

0x5b0e,	// (0x0009d89e) popup_vtel_slider_window_g3

0x5b25,	// (0x0009d8b5) popup_vtel_slider_window_g4_ParamLimits

0x5b25,	// (0x0009d8b5) popup_vtel_slider_window_g4

0x5b3c,	// (0x0009d8cc) popup_vtel_slider_window_t1_ParamLimits

0x5b3c,	// (0x0009d8cc) popup_vtel_slider_window_t1

0x9eba,	// (0x000a1c4a) main_cl_pane

0xa06b,	// (0x000a1dfb) popup_imed_adjust2_window_ParamLimits

0xd302,	// (0x000a5092) bg_tb_trans_pane_cp05_ParamLimits

0xee1a,	// (0x000a6baa) popup_imed_adjust2_window_g1_ParamLimits

0xee29,	// (0x000a6bb9) popup_imed_adjust2_window_g2_ParamLimits

0xee29,	// (0x000a6bb9) popup_imed_adjust2_window_g2

0xee35,	// (0x000a6bc5) popup_imed_adjust2_window_g3_ParamLimits

0xee35,	// (0x000a6bc5) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x000a749d) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x000a749d) popup_imed_adjust2_window_g

0xee41,	// (0x000a6bd1) popup_imed_adjust2_window_t1_ParamLimits

0xee59,	// (0x000a6be9) slider_imed_adjust_pane_ParamLimits

0xee6d,	// (0x000a6bfd) slider_imed_adjust_pane_g1_ParamLimits

0xee7d,	// (0x000a6c0d) slider_imed_adjust_pane_g2_ParamLimits

0xee8d,	// (0x000a6c1d) slider_imed_adjust_pane_g3_ParamLimits

0xee9e,	// (0x000a6c2e) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x000a74a4) slider_imed_adjust_pane_g_ParamLimits

0x4d9c,	// (0x0009cb2c) aid_touch_area_cam4_ParamLimits

0x4d9c,	// (0x0009cb2c) aid_touch_area_cam4

0xa4ae,	// (0x000a223e) battery_pane_cp01

0x4e6b,	// (0x0009cbfb) main_camera4_pane_g6_ParamLimits

0x4e6b,	// (0x0009cbfb) main_camera4_pane_g6

0x4e95,	// (0x0009cc25) main_camera4_pane_t2_ParamLimits

0x4e95,	// (0x0009cc25) main_camera4_pane_t2

0x0001,

0xf7d9,	// (0x000a7569) main_camera4_pane_t_ParamLimits

0xf7d9,	// (0x000a7569) main_camera4_pane_t

0x4eca,	// (0x0009cc5a) aid_touch_area_vid4_ParamLimits

0x4eca,	// (0x0009cc5a) aid_touch_area_vid4

0x4f1e,	// (0x0009ccae) main_video4_pane_g5_ParamLimits

0x4f1e,	// (0x0009ccae) main_video4_pane_g5

0x4f43,	// (0x0009ccd3) vid4_progress_pane_ParamLimits

0x4f43,	// (0x0009ccd3) vid4_progress_pane

0x586a,	// (0x0009d5fa) main_cset_slider_pane_g18_ParamLimits

0x586a,	// (0x0009d5fa) main_cset_slider_pane_g18

0xa734,	// (0x000a24c4) cell_cam4_burst_pane_g2_ParamLimits

0xa734,	// (0x000a24c4) cell_cam4_burst_pane_g2

0x0001,

0xf92e,	// (0x000a76be) cell_cam4_burst_pane_g_ParamLimits

0xf92e,	// (0x000a76be) cell_cam4_burst_pane_g

0xc61e,	// (0x000a43ae) bg_cl_pane_ParamLimits

0xc61e,	// (0x000a43ae) bg_cl_pane

0x61cc,	// (0x0009df5c) cl_header_pane_ParamLimits

0x61cc,	// (0x0009df5c) cl_header_pane

0x61e0,	// (0x0009df70) cl_listscroll_pane_ParamLimits

0x61e0,	// (0x0009df70) cl_listscroll_pane

0xa876,	// (0x000a2606) bg_cl_pane_g1

0xa87e,	// (0x000a260e) bg_cl_pane_g2

0xa886,	// (0x000a2616) bg_cl_pane_g3

0xa88e,	// (0x000a261e) bg_cl_pane_g4

0xa896,	// (0x000a2626) bg_cl_pane_g5

0xa89e,	// (0x000a262e) bg_cl_pane_g6

0xa8a6,	// (0x000a2636) bg_cl_pane_g7

0xa8ae,	// (0x000a263e) bg_cl_pane_g8

0xa8b6,	// (0x000a2646) bg_cl_pane_g9

0x0008,

0xf969,	// (0x000a76f9) bg_cl_pane_g

0x61f0,	// (0x0009df80) aid_height_cl_leading_ParamLimits

0x61f0,	// (0x0009df80) aid_height_cl_leading

0x61fc,	// (0x0009df8c) aid_height_cl_text_ParamLimits

0x61fc,	// (0x0009df8c) aid_height_cl_text

0xc51b,	// (0x000a42ab) bg_cl_header_pane_ParamLimits

0xc51b,	// (0x000a42ab) bg_cl_header_pane

0x621b,	// (0x0009dfab) cl_header_pane_g1_ParamLimits

0x621b,	// (0x0009dfab) cl_header_pane_g1

0x6231,	// (0x0009dfc1) cl_header_pane_t1_ParamLimits

0x6231,	// (0x0009dfc1) cl_header_pane_t1

0xa8be,	// (0x000a264e) cl_list_pane

0x572d,	// (0x0009d4bd) hc_scroll_pane_cp01

0xc9f0,	// (0x000a4780) bg_cl_header_pane_g1

0x52e4,	// (0x0009d074) bg_cl_header_pane_g2

0xca10,	// (0x000a47a0) bg_cl_header_pane_g3

0x52f4,	// (0x0009d084) bg_cl_header_pane_g4

0x52ec,	// (0x0009d07c) bg_cl_header_pane_g5

0xa623,	// (0x000a23b3) bg_cl_header_pane_g6

0x530c,	// (0x0009d09c) bg_cl_header_pane_g7

0x5314,	// (0x0009d0a4) bg_cl_header_pane_g8

0x5304,	// (0x0009d094) bg_cl_header_pane_g9

0x0008,

0xf97c,	// (0x000a770c) bg_cl_header_pane_g

0x624a,	// (0x0009dfda) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x624a,	// (0x0009dfda) hc_cl_list_double_graphic_heading_pane

0x625b,	// (0x0009dfeb) hc_cl_list_single_graphic_pane_ParamLimits

0x625b,	// (0x0009dfeb) hc_cl_list_single_graphic_pane

0x6271,	// (0x0009e001) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6271,	// (0x0009e001) hc_cl_list_single_graphic_pane_g1

0x627d,	// (0x0009e00d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x627d,	// (0x0009e00d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf98f,	// (0x000a771f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf98f,	// (0x000a771f) hc_cl_list_single_graphic_pane_g

0x6291,	// (0x0009e021) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6291,	// (0x0009e021) hc_cl_list_single_graphic_pane_t1

0x6271,	// (0x0009e001) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6271,	// (0x0009e001) hc_cl_list_double_graphic_heading_pane_g1

0x62a6,	// (0x0009e036) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x62a6,	// (0x0009e036) hc_cl_list_double_graphic_heading_pane_g2

0x62ba,	// (0x0009e04a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x62ba,	// (0x0009e04a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf994,	// (0x000a7724) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf994,	// (0x000a7724) hc_cl_list_double_graphic_heading_pane_g

0x62ce,	// (0x0009e05e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x62ce,	// (0x0009e05e) hc_cl_list_double_graphic_heading_pane_t1

0x62e3,	// (0x0009e073) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x62e3,	// (0x0009e073) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf99b,	// (0x000a772b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf99b,	// (0x000a772b) hc_cl_list_double_graphic_heading_pane_t

0xa8cf,	// (0x000a265f) vid4_progress_pane_g1

0xa8df,	// (0x000a266f) vid4_progress_pane_g2

0x62f8,	// (0x0009e088) vid4_progress_pane_g3

0xa8ef,	// (0x000a267f) vid4_progress_pane_g4

0x0004,

0xf9a0,	// (0x000a7730) vid4_progress_pane_g

0x630a,	// (0x0009e09a) vid4_progress_pane_t1

0xa907,	// (0x000a2697) vid4_progress_pane_t2

0x0002,

0xf9ab,	// (0x000a773b) vid4_progress_pane_t

0x6322,	// (0x0009e0b2) wait_bar_pane_cp07

0xe725,	// (0x000a64b5) blid_firmament_pane_ParamLimits

0xe768,	// (0x000a64f8) popup_blid_sat_info2_window_g1

0xe78c,	// (0x000a651c) popup_blid_sat_info2_window_t3

0xe79a,	// (0x000a652a) popup_blid_sat_info2_window_t4

0xe7a8,	// (0x000a6538) popup_blid_sat_info2_window_t5

0xe7b6,	// (0x000a6546) popup_blid_sat_info2_window_t6

0xe7c6,	// (0x000a6556) popup_blid_sat_info2_window_t7

0xe7d4,	// (0x000a6564) popup_blid_sat_info2_window_t8

0xe7e2,	// (0x000a6572) popup_blid_sat_info2_window_t9

0xe7f0,	// (0x000a6580) popup_blid_sat_info2_window_t10

0xe8b1,	// (0x000a6641) aid_firma_cardinal_ParamLimits

0xe8c5,	// (0x000a6655) blid_firmament_pane_t1_ParamLimits

0xe8dc,	// (0x000a666c) blid_firmament_pane_t2_ParamLimits

0xe8f3,	// (0x000a6683) blid_firmament_pane_t3_ParamLimits

0xe90a,	// (0x000a669a) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x000a7396) blid_firmament_pane_t_ParamLimits

0xe921,	// (0x000a66b1) blid_sat_info_pane_ParamLimits

0x9eac,	// (0x000a1c3c) main_cam_set_pane_ParamLimits

0x4544,	// (0x0009c2d4) aid_size_cell_colour_35_ParamLimits

0x4564,	// (0x0009c2f4) aid_size_cell_colour_112_ParamLimits

0x4584,	// (0x0009c314) aid_size_cell_effect_ParamLimits

0xd302,	// (0x000a5092) bg_tb_trans_pane_cp02_ParamLimits

0xcc60,	// (0x000a49f0) heading_imed_pane_ParamLimits

0x45a4,	// (0x0009c334) listscroll_imed_pane_ParamLimits

0xdbf0,	// (0x000a5980) popup_call2_audio_first_window_g5_ParamLimits

0xdbf0,	// (0x000a5980) popup_call2_audio_first_window_g5

0x498e,	// (0x0009c71e) aid_size_touch_image3_arrow_left_ParamLimits

0x498e,	// (0x0009c71e) aid_size_touch_image3_arrow_left

0x49ba,	// (0x0009c74a) aid_size_touch_image3_arrow_right_ParamLimits

0x49ba,	// (0x0009c74a) aid_size_touch_image3_arrow_right

0xa91c,	// (0x000a26ac) vid4_progress_pane_t3

0x4749,	// (0x0009c4d9) main_hwr_training_symbol_option_pane_ParamLimits

0x4749,	// (0x0009c4d9) main_hwr_training_symbol_option_pane

0xefa8,	// (0x000a6d38) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x000a6d38) popup_hwr_training_preview_window

0x4769,	// (0x0009c4f9) hwr_training_navi_pane_g5_ParamLimits

0x4769,	// (0x0009c4f9) hwr_training_navi_pane_g5

0x522c,	// (0x0009cfbc) popup_char_count_window

0x9eac,	// (0x000a1c3c) bg_popup_sub_pane_cp20_ParamLimits

0x5c4c,	// (0x0009d9dc) list_vitu2_match_list_pane_ParamLimits

0x5c58,	// (0x0009d9e8) vitu2_page_scroll_pane_ParamLimits

0x5c58,	// (0x0009d9e8) vitu2_page_scroll_pane

0xa942,	// (0x000a26d2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xa942,	// (0x000a26d2) list_single_hwr_training_symbol_option_pane

0xa955,	// (0x000a26e5) list_single_hwr_training_symbol_option_pane_g1

0xa95d,	// (0x000a26ed) list_single_hwr_training_symbol_option_pane_t1

0xa96b,	// (0x000a26fb) bg_button_pane_cp023

0xa974,	// (0x000a2704) bg_button_pane_cp024

0xa9a7,	// (0x000a2737) vitu2_page_scroll_pane_g1

0xa9af,	// (0x000a273f) vitu2_page_scroll_pane_g2

0x0001,

0xf9b2,	// (0x000a7742) vitu2_page_scroll_pane_g

0xa9b7,	// (0x000a2747) vitu2_page_scroll_pane_t1

0xe69b,	// (0x000a642b) popup_char_count_window_g1

0xa9c6,	// (0x000a2756) popup_char_count_window_g2

0xa9cf,	// (0x000a275f) popup_char_count_window_g3

0x0002,

0xf9b7,	// (0x000a7747) popup_char_count_window_g

0xa9d8,	// (0x000a2768) popup_char_count_window_t1

0x9eba,	// (0x000a1c4a) main_vded2_pane

0xee06,	// (0x000a6b96) aid_size_cell_imed_line

0xee10,	// (0x000a6ba0) grid_imed_line_width_pane

0xa566,	// (0x000a22f6) vid4_indicators_pane_g4

0xa9e6,	// (0x000a2776) cell_imed_line_width_pane_ParamLimits

0xa9e6,	// (0x000a2776) cell_imed_line_width_pane

0xa9fa,	// (0x000a278a) cell_imed_line_width_pane_g1

0xaa03,	// (0x000a2793) cell_imed_line_width_pane_g2

0x0001,

0xf9be,	// (0x000a774e) cell_imed_line_width_pane_g

0x635a,	// (0x0009e0ea) main_vded2_pane_g1_ParamLimits

0x635a,	// (0x0009e0ea) main_vded2_pane_g1

0x6370,	// (0x0009e100) main_vded2_pane_g2_ParamLimits

0x6370,	// (0x0009e100) main_vded2_pane_g2

0x0001,

0xf9c3,	// (0x000a7753) main_vded2_pane_g_ParamLimits

0xf9c3,	// (0x000a7753) main_vded2_pane_g

0x6382,	// (0x0009e112) vded2_slider_pane_ParamLimits

0x6382,	// (0x0009e112) vded2_slider_pane

0x6392,	// (0x0009e122) aid_size_touch_vded2_end

0x639c,	// (0x0009e12c) aid_size_touch_vded2_playhead

0xaa0b,	// (0x000a279b) aid_size_touch_vded2_start

0xaa13,	// (0x000a27a3) vded2_slider_bg_pane

0xaa1c,	// (0x000a27ac) vded2_slider_pane_g1

0xaa25,	// (0x000a27b5) vded2_slider_pane_g2

0x63a6,	// (0x0009e136) vded2_slider_pane_g3

0x0002,

0xf9c8,	// (0x000a7758) vded2_slider_pane_g

0xaa2d,	// (0x000a27bd) vded2_slider_bg_pane_g1

0xaa36,	// (0x000a27c6) vded2_slider_bg_pane_g2

0xaa3f,	// (0x000a27cf) vded2_slider_bg_pane_g3

0x0002,

0xf9cf,	// (0x000a775f) vded2_slider_bg_pane_g

0x2b55,	// (0x0009a8e5) aid_postcard_touch_down_pane_ParamLimits

0x2b55,	// (0x0009a8e5) aid_postcard_touch_down_pane

0x2b6b,	// (0x0009a8fb) aid_postcard_touch_up_pane_ParamLimits

0x2b6b,	// (0x0009a8fb) aid_postcard_touch_up_pane

0x9eba,	// (0x000a1c4a) main_blid2_pane

0xa051,	// (0x000a1de1) popup_blid2_search_window

0xac16,	// (0x000a29a6) blid2_gps_pane

0xac16,	// (0x000a29a6) blid2_navig_pane

0xac16,	// (0x000a29a6) blid2_search_pane

0xac16,	// (0x000a29a6) blid2_tripm_pane

0x63b1,	// (0x0009e141) blid2_search_pane_g1_ParamLimits

0x63b1,	// (0x0009e141) blid2_search_pane_g1

0x63cb,	// (0x0009e15b) blid2_search_pane_t1_ParamLimits

0x63cb,	// (0x0009e15b) blid2_search_pane_t1

0x63dd,	// (0x0009e16d) aid_size_cell_blid2_gps_ParamLimits

0x63dd,	// (0x0009e16d) aid_size_cell_blid2_gps

0x63f5,	// (0x0009e185) blid2_gps_pane_g1_ParamLimits

0x63f5,	// (0x0009e185) blid2_gps_pane_g1

0x6409,	// (0x0009e199) grid_blid2_satellite_pane_ParamLimits

0x6409,	// (0x0009e199) grid_blid2_satellite_pane

0x6423,	// (0x0009e1b3) blid2_navig_pane_g1_ParamLimits

0x6423,	// (0x0009e1b3) blid2_navig_pane_g1

0x642f,	// (0x0009e1bf) blid2_navig_pane_t1_ParamLimits

0x642f,	// (0x0009e1bf) blid2_navig_pane_t1

0x644a,	// (0x0009e1da) blid2_navig_pane_t2_ParamLimits

0x644a,	// (0x0009e1da) blid2_navig_pane_t2

0x0001,

0xf9d6,	// (0x000a7766) blid2_navig_pane_t_ParamLimits

0xf9d6,	// (0x000a7766) blid2_navig_pane_t

0x6465,	// (0x0009e1f5) blid2_navig_ring_pane_ParamLimits

0x6465,	// (0x0009e1f5) blid2_navig_ring_pane

0x647e,	// (0x0009e20e) blid2_speed_pane_ParamLimits

0x647e,	// (0x0009e20e) blid2_speed_pane

0x648a,	// (0x0009e21a) blid2_tripm_pane_g1_ParamLimits

0x648a,	// (0x0009e21a) blid2_tripm_pane_g1

0x64a3,	// (0x0009e233) blid2_tripm_pane_g2_ParamLimits

0x64a3,	// (0x0009e233) blid2_tripm_pane_g2

0x64b7,	// (0x0009e247) blid2_tripm_pane_g3_ParamLimits

0x64b7,	// (0x0009e247) blid2_tripm_pane_g3

0x64cb,	// (0x0009e25b) blid2_tripm_pane_g4_ParamLimits

0x64cb,	// (0x0009e25b) blid2_tripm_pane_g4

0x64df,	// (0x0009e26f) blid2_tripm_pane_g5_ParamLimits

0x64df,	// (0x0009e26f) blid2_tripm_pane_g5

0x0005,

0xf9db,	// (0x000a776b) blid2_tripm_pane_g_ParamLimits

0xf9db,	// (0x000a776b) blid2_tripm_pane_g

0x6505,	// (0x0009e295) blid2_tripm_pane_t1_ParamLimits

0x6505,	// (0x0009e295) blid2_tripm_pane_t1

0x6520,	// (0x0009e2b0) blid2_tripm_pane_t2_ParamLimits

0x6520,	// (0x0009e2b0) blid2_tripm_pane_t2

0x6539,	// (0x0009e2c9) blid2_tripm_pane_t3_ParamLimits

0x6539,	// (0x0009e2c9) blid2_tripm_pane_t3

0x0003,

0xf9e8,	// (0x000a7778) blid2_tripm_pane_t_ParamLimits

0xf9e8,	// (0x000a7778) blid2_tripm_pane_t

0x6580,	// (0x0009e310) cell_blid2_satellite_pane_ParamLimits

0x6580,	// (0x0009e310) cell_blid2_satellite_pane

0x659e,	// (0x0009e32e) cell_blid2_satellite_pane_g1

0xaa48,	// (0x000a27d8) cell_blid2_satellite_pane_t1

0xc5c0,	// (0x000a4350) blid2_speed_pane_g1

0xaa56,	// (0x000a27e6) blid2_speed_pane_t1

0xaa64,	// (0x000a27f4) blid2_speed_pane_t2

0x0001,

0xf9f1,	// (0x000a7781) blid2_speed_pane_t

0xc5c0,	// (0x000a4350) blid2_navig_ring_pane_g1

0x65a7,	// (0x0009e337) blid2_navig_ring_pane_g2

0x65af,	// (0x0009e33f) blid2_navig_ring_pane_g3

0x65b7,	// (0x0009e347) blid2_navig_ring_pane_g4

0x65bf,	// (0x0009e34f) blid2_navig_ring_pane_g5

0x0004,

0xf9f6,	// (0x000a7786) blid2_navig_ring_pane_g

0xac16,	// (0x000a29a6) bg_popup_window_pane_cp011

0xaa72,	// (0x000a2802) popup_blid2_search_window_g1

0xaa7a,	// (0x000a280a) popup_blid2_search_window_t1

0xaa88,	// (0x000a2818) popup_blid2_search_window_t2

0x0001,

0xfa01,	// (0x000a7791) popup_blid2_search_window_t

0xc8d8,	// (0x000a4668) main_browser_pane_g1

0xc61e,	// (0x000a43ae) main_browser_pane_ParamLimits

0x9eac,	// (0x000a1c3c) bg_button_pane_cp011_ParamLimits

0x52c6,	// (0x0009d056) cell_vitu2_function_pane_g1_ParamLimits

0xd302,	// (0x000a5092) bg_popup_sub_pane_cp22_ParamLimits

0x5dd6,	// (0x0009db66) input_focus_pane_cp08_ParamLimits

0x5df1,	// (0x0009db81) popup_vitu2_query_button_pane_ParamLimits

0x5df1,	// (0x0009db81) popup_vitu2_query_button_pane

0x5e00,	// (0x0009db90) popup_vitu2_query_input_button_pane

0xa67e,	// (0x000a240e) popup_vitu2_query_window_g1_ParamLimits

0x5e08,	// (0x0009db98) popup_vitu2_query_window_g2_ParamLimits

0xf902,	// (0x000a7692) popup_vitu2_query_window_g_ParamLimits

0xac16,	// (0x000a29a6) bg_button_pane_cp026

0x65c7,	// (0x0009e357) popup_vitu2_query_input_button_pane_g1

0xac16,	// (0x000a29a6) bg_button_pane_cp025

0xaa96,	// (0x000a2826) popup_vitu2_query_button_pane_t1

0x39f3,	// (0x0009b783) main_mp3_pane_t6

0x3a01,	// (0x0009b791) popup_slider_window_cp01

0xa4ca,	// (0x000a225a) cam4_battery_pane

0xa523,	// (0x000a22b3) cam4_battery_pane_cp02

0xa8c7,	// (0x000a2657) cam4_battery_pane_cp01

0xa8c7,	// (0x000a2657) cam4_battery_pane_cp03

0xa153,	// (0x000a1ee3) cam4_battery_pane_g1

0xc5c0,	// (0x000a4350) cam4_battery_pane_g2

0x0001,

0xfa06,	// (0x000a7796) cam4_battery_pane_g

0xe7fe,	// (0x000a658e) popup_blid_sat_info2_window_t11

0xd072,	// (0x000a4e02) aid_size_touch_mv_arrow_left_ParamLimits

0xd09b,	// (0x000a4e2b) aid_size_touch_mv_arrow_right_ParamLimits

0xd0f9,	// (0x000a4e89) navi_pane_g1_ParamLimits

0xd105,	// (0x000a4e95) navi_pane_g2_ParamLimits

0xd133,	// (0x000a4ec3) navi_pane_g3_ParamLimits

0xf32f,	// (0x000a70bf) navi_pane_g_ParamLimits

0x2775,	// (0x0009a505) navi_pane_mv_t1_ParamLimits

0x45b0,	// (0x0009c340) grid_imed_effect_pane_ParamLimits

0x14fe,	// (0x0009928e) aid_placing_vt_slider_lsc

0xc827,	// (0x000a45b7) aid_placing_vt_slider_prt

0xc51b,	// (0x000a42ab) bg_tb_trans_pane_cp01_ParamLimits

0xea7e,	// (0x000a680e) popup_image_details_window_g1_ParamLimits

0xea91,	// (0x000a6821) popup_image_details_window_g2_ParamLimits

0xeaa6,	// (0x000a6836) popup_image_details_window_g3_ParamLimits

0xeaa6,	// (0x000a6836) popup_image_details_window_g3

0xf646,	// (0x000a73d6) popup_image_details_window_g_ParamLimits

0xeaba,	// (0x000a684a) popup_image_details_window_t1_ParamLimits

0xeacc,	// (0x000a685c) popup_image_details_window_t2_ParamLimits

0xeae5,	// (0x000a6875) popup_image_details_window_t3_ParamLimits

0xeaf9,	// (0x000a6889) popup_image_details_window_t4_ParamLimits

0xeb14,	// (0x000a68a4) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x000a73dd) popup_image_details_window_t_ParamLimits

0x6208,	// (0x0009df98) cl_header_name_pane_ParamLimits

0x6208,	// (0x0009df98) cl_header_name_pane

0x65cf,	// (0x0009e35f) cl_header_name_pane_t1_ParamLimits

0x65cf,	// (0x0009e35f) cl_header_name_pane_t1

0x65f0,	// (0x0009e380) cl_header_name_pane_t2_ParamLimits

0x65f0,	// (0x0009e380) cl_header_name_pane_t2

0x6632,	// (0x0009e3c2) cl_header_name_pane_t3_ParamLimits

0x6632,	// (0x0009e3c2) cl_header_name_pane_t3

0x0002,

0xfa0b,	// (0x000a779b) cl_header_name_pane_t_ParamLimits

0xfa0b,	// (0x000a779b) cl_header_name_pane_t

0xd1c2,	// (0x000a4f52) navi_pane_mv_g2_ParamLimits

0x51c8,	// (0x0009cf58) field_vitu2_entry_pane_g1_ParamLimits

0x51d4,	// (0x0009cf64) field_vitu2_entry_pane_g2_ParamLimits

0xd2e0,	// (0x000a5070) field_vitu2_entry_pane_g3_ParamLimits

0xd2e0,	// (0x000a5070) field_vitu2_entry_pane_g3

0xf80b,	// (0x000a759b) field_vitu2_entry_pane_g_ParamLimits

0x5242,	// (0x0009cfd2) cell_vitu2_itu_pane_g1_ParamLimits

0x525a,	// (0x0009cfea) cell_vitu2_itu_pane_g2_ParamLimits

0x525a,	// (0x0009cfea) cell_vitu2_itu_pane_g2

0x0001,

0xf817,	// (0x000a75a7) cell_vitu2_itu_pane_g_ParamLimits

0xf817,	// (0x000a75a7) cell_vitu2_itu_pane_g

0x9eac,	// (0x000a1c3c) bg_vkb2_func_pane_cp05_ParamLimits

0x9eac,	// (0x000a1c3c) bg_vkb2_func_pane_cp05

0x9eac,	// (0x000a1c3c) bg_vkb2_func_pane_cp03

0x9eac,	// (0x000a1c3c) bg_vkb2_func_pane_cp04

0x9eac,	// (0x000a1c3c) bg_vkb2_func_pane_cp10_ParamLimits

0x9eac,	// (0x000a1c3c) bg_vkb2_func_pane_cp10

0x61ac,	// (0x0009df3c) bg_vkb2_func_pane_cp08

0x6185,	// (0x0009df15) bg_vkb2_func_pane_cp06

0x6191,	// (0x0009df21) bg_vkb2_func_pane_cp07

0xa97d,	// (0x000a270d) bg_vkb2_func_pane_cp11_ParamLimits

0xa97d,	// (0x000a270d) bg_vkb2_func_pane_cp11

0xa992,	// (0x000a2722) bg_vkb2_func_pane_cp12_ParamLimits

0xa992,	// (0x000a2722) bg_vkb2_func_pane_cp12

0xac16,	// (0x000a29a6) bg_vkb2_func_pane_cp09

0x52e4,	// (0x0009d074) bg_vkb2_func_pane_g1

0xca10,	// (0x000a47a0) bg_vkb2_func_pane_g2

0x52ec,	// (0x0009d07c) bg_vkb2_func_pane_g3

0x52f4,	// (0x0009d084) bg_vkb2_func_pane_g4

0xa623,	// (0x000a23b3) bg_vkb2_func_pane_g5

0x530c,	// (0x0009d09c) bg_vkb2_func_pane_g6

0x5314,	// (0x0009d0a4) bg_vkb2_func_pane_g7

0x5304,	// (0x0009d094) bg_vkb2_func_pane_g8

0xc9f0,	// (0x000a4780) bg_vkb2_func_pane_g9

0x0008,

0xfa12,	// (0x000a77a2) bg_vkb2_func_pane_g

0x64f3,	// (0x0009e283) blid2_tripm_pane_g6_ParamLimits

0x64f3,	// (0x0009e283) blid2_tripm_pane_g6

0x48ac,	// (0x0009c63c) mp4_progress_pane_g1

0x656c,	// (0x0009e2fc) blid2_tripm_values_pane_ParamLimits

0x656c,	// (0x0009e2fc) blid2_tripm_values_pane

0x6663,	// (0x0009e3f3) blid2_tripm_values_pane_t1

0x6671,	// (0x0009e401) blid2_tripm_values_pane_t2

0x667f,	// (0x0009e40f) blid2_tripm_values_pane_t3

0x668d,	// (0x0009e41d) blid2_tripm_values_pane_t4

0x669b,	// (0x0009e42b) blid2_tripm_values_pane_t5

0x66a9,	// (0x0009e439) blid2_tripm_values_pane_t6

0x66b7,	// (0x0009e447) blid2_tripm_values_pane_t7

0x66c5,	// (0x0009e455) blid2_tripm_values_pane_t8

0x66d3,	// (0x0009e463) blid2_tripm_values_pane_t9

0x0008,

0xfa25,	// (0x000a77b5) blid2_tripm_values_pane_t

0x1540,	// (0x000992d0) call_video_pane_t1_ParamLimits

0x155e,	// (0x000992ee) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x000a6f6d) call_video_pane_t_ParamLimits

0x2a42,	// (0x0009a7d2) msg_header_pane_g1_ParamLimits

0xd3ce,	// (0x000a515e) msg_header_pane_g2_ParamLimits

0xd3ce,	// (0x000a515e) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x000a715d) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x000a715d) msg_header_pane_g

0xc61e,	// (0x000a43ae) main_clock2_pane_ParamLimits

0x42b1,	// (0x0009c041) grid_clock2_toolbar_pane_ParamLimits

0x42b1,	// (0x0009c041) grid_clock2_toolbar_pane

0x42b1,	// (0x0009c041) listscroll_clock2_pane_ParamLimits

0x42b1,	// (0x0009c041) listscroll_clock2_pane

0x4395,	// (0x0009c125) main_clock2_pane_t3_ParamLimits

0x4395,	// (0x0009c125) main_clock2_pane_t3

0x43b9,	// (0x0009c149) main_clock2_pane_t4_ParamLimits

0x43b9,	// (0x0009c149) main_clock2_pane_t4

0xaaa4,	// (0x000a2834) cell_clock2_toolbar_pane

0xaaac,	// (0x000a283c) cell_clock2_toolbar_pane_cp01

0xaaac,	// (0x000a283c) cell_clock2_toolbar_pane_cp02

0xaab4,	// (0x000a2844) cell_clock2_toolbar_pane_cp03

0xaabc,	// (0x000a284c) list_clock2_pane

0xcfe8,	// (0x000a4d78) scroll_pane_cp10

0xaac4,	// (0x000a2854) list_single_clock2_pane_ParamLimits

0xaac4,	// (0x000a2854) list_single_clock2_pane

0xc7d0,	// (0x000a4560) list_highlight_pane_cp08

0xaad1,	// (0x000a2861) list_single_clock2_pane_t1

0xaadf,	// (0x000a286f) list_single_clock2_pane_t2

0x0001,

0xfa38,	// (0x000a77c8) list_single_clock2_pane_t

0xac16,	// (0x000a29a6) bg_button_pane_cp10

0xaaed,	// (0x000a287d) cell_clock2_toolbar_pane_g1

0x2ae1,	// (0x0009a871) aid_main_viewer_pane_g1_ParamLimits

0x2ae1,	// (0x0009a871) aid_main_viewer_pane_g1

0x2aef,	// (0x0009a87f) aid_main_viewer_pane_g2_ParamLimits

0x2aef,	// (0x0009a87f) aid_main_viewer_pane_g2

0x2afd,	// (0x0009a88d) aid_main_viewer_pane_g3_ParamLimits

0x2afd,	// (0x0009a88d) aid_main_viewer_pane_g3

0x2b0c,	// (0x0009a89c) aid_main_viewer_pane_g4_ParamLimits

0x2b0c,	// (0x0009a89c) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x000a716e) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x000a716e) aid_main_viewer_pane_g

0x33b0,	// (0x0009b140) main_calc_pane_ParamLimits

0x33d6,	// (0x0009b166) main_dialer2_pane_ParamLimits

0x9eba,	// (0x000a1c4a) main_cam6_pane

0x9eba,	// (0x000a1c4a) main_vid6_pane

0x42bd,	// (0x0009c04d) listscroll_gen_pane_cp06_ParamLimits

0x42bd,	// (0x0009c04d) listscroll_gen_pane_cp06

0x43dc,	// (0x0009c16c) main_clock2_pane_t5_ParamLimits

0x43dc,	// (0x0009c16c) main_clock2_pane_t5

0x443a,	// (0x0009c1ca) aid_call2_pane_cp10_ParamLimits

0x444c,	// (0x0009c1dc) aid_call_pane_cp10_ParamLimits

0xd066,	// (0x000a4df6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd066,	// (0x000a4df6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x445e,	// (0x0009c1ee) popup_clock_analogue_window_cp10_g3_ParamLimits

0x445e,	// (0x0009c1ee) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd066,	// (0x000a4df6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x000a7492) popup_clock_analogue_window_cp10_g_ParamLimits

0x4474,	// (0x0009c204) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4972,	// (0x0009c702) cell_dialer2_keypad_pane_g2_ParamLimits

0x4972,	// (0x0009c702) cell_dialer2_keypad_pane_g2

0x0001,

0xf7aa,	// (0x000a753a) cell_dialer2_keypad_pane_g_ParamLimits

0xf7aa,	// (0x000a753a) cell_dialer2_keypad_pane_g

0xc5ca,	// (0x000a435a) cell_dialer2_keypad_pane_t1

0x5707,	// (0x0009d497) main_cset_text2_pane_ParamLimits

0x5707,	// (0x0009d497) main_cset_text2_pane

0xa86a,	// (0x000a25fa) area_vitu2_query_pane_g1_ParamLimits

0x608a,	// (0x0009de1a) area_vitu2_query_pane_g2_ParamLimits

0xf955,	// (0x000a76e5) area_vitu2_query_pane_g_ParamLimits

0x6161,	// (0x0009def1) area_vitu2_query_pane_t7_ParamLimits

0x6161,	// (0x0009def1) area_vitu2_query_pane_t7

0x6185,	// (0x0009df15) bg_button_pane_cp018_ParamLimits

0x6191,	// (0x0009df21) bg_button_pane_cp021_ParamLimits

0x619d,	// (0x0009df2d) bg_button_pane_cp022_ParamLimits

0x61ac,	// (0x0009df3c) bg_vkb2_func_pane_cp08_ParamLimits

0x6185,	// (0x0009df15) bg_vkb2_func_pane_cp06_ParamLimits

0x6191,	// (0x0009df21) bg_vkb2_func_pane_cp07_ParamLimits

0x61bc,	// (0x0009df4c) input_focus_pane_cp09_ParamLimits

0x66e1,	// (0x0009e471) cam6_autofocus_pane_ParamLimits

0x66e1,	// (0x0009e471) cam6_autofocus_pane

0x66ed,	// (0x0009e47d) cam6_image_uncrop_pane_ParamLimits

0x66ed,	// (0x0009e47d) cam6_image_uncrop_pane

0x66fd,	// (0x0009e48d) cam6_indi_pane_ParamLimits

0x66fd,	// (0x0009e48d) cam6_indi_pane

0x6713,	// (0x0009e4a3) cam6_mode_pane_ParamLimits

0x6713,	// (0x0009e4a3) cam6_mode_pane

0x6725,	// (0x0009e4b5) cam6_timer_pane_ParamLimits

0x6725,	// (0x0009e4b5) cam6_timer_pane

0x6731,	// (0x0009e4c1) cam6_zoom_pane_ParamLimits

0x6731,	// (0x0009e4c1) cam6_zoom_pane

0x673e,	// (0x0009e4ce) cam6_mode_pane_g1_ParamLimits

0x673e,	// (0x0009e4ce) cam6_mode_pane_g1

0x674e,	// (0x0009e4de) cam6_mode_pane_g2_ParamLimits

0x674e,	// (0x0009e4de) cam6_mode_pane_g2

0x675e,	// (0x0009e4ee) cam6_mode_pane_g3_ParamLimits

0x675e,	// (0x0009e4ee) cam6_mode_pane_g3

0x676e,	// (0x0009e4fe) cam6_mode_pane_g4_ParamLimits

0x676e,	// (0x0009e4fe) cam6_mode_pane_g4

0x0003,

0xfa3d,	// (0x000a77cd) cam6_mode_pane_g_ParamLimits

0xfa3d,	// (0x000a77cd) cam6_mode_pane_g

0xe656,	// (0x000a63e6) bg_tb_trans_pane_cp08_ParamLimits

0xe656,	// (0x000a63e6) bg_tb_trans_pane_cp08

0xab03,	// (0x000a2893) cam6_battery_pane_ParamLimits

0xab03,	// (0x000a2893) cam6_battery_pane

0xab19,	// (0x000a28a9) cam6_indi_pane_g1_ParamLimits

0xab19,	// (0x000a28a9) cam6_indi_pane_g1

0xab2b,	// (0x000a28bb) cam6_indi_pane_g2_ParamLimits

0xab2b,	// (0x000a28bb) cam6_indi_pane_g2

0xab3d,	// (0x000a28cd) cam6_indi_pane_g3_ParamLimits

0xab3d,	// (0x000a28cd) cam6_indi_pane_g3

0x0002,

0xfa46,	// (0x000a77d6) cam6_indi_pane_g_ParamLimits

0xfa46,	// (0x000a77d6) cam6_indi_pane_g

0xab4f,	// (0x000a28df) cam6_indi_pane_t1_ParamLimits

0xab4f,	// (0x000a28df) cam6_indi_pane_t1

0x4f91,	// (0x0009cd21) cam6_autofocus_pane_g1

0x4f89,	// (0x0009cd19) cam6_autofocus_pane_g2

0x4fa1,	// (0x0009cd31) cam6_autofocus_pane_g3

0x4f99,	// (0x0009cd29) cam6_autofocus_pane_g4

0x0003,

0xfa4d,	// (0x000a77dd) cam6_autofocus_pane_g

0xac61,	// (0x000a29f1) cam6_timer_pane_g1

0xac69,	// (0x000a29f9) cam6_timer_pane_t1

0xac77,	// (0x000a2a07) cam6_zoom_cont_pane

0xac7f,	// (0x000a2a0f) cam6_zoom_pane_g1

0xac88,	// (0x000a2a18) cam6_zoom_pane_g2

0x677e,	// (0x0009e50e) cam6_zoom_pane_g3

0x0002,

0xfa56,	// (0x000a77e6) cam6_zoom_pane_g

0xc5c0,	// (0x000a4350) cam6_battery_pane_g1

0xc5c0,	// (0x000a4350) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x000a6e3f) cam6_battery_pane_g

0xac7f,	// (0x000a2a0f) cam6_zoom_cont_pane_g1

0xac88,	// (0x000a2a18) cam6_zoom_cont_pane_g2

0xac91,	// (0x000a2a21) cam6_zoom_cont_pane_g3

0x0002,

0x0331,	// (0x000980c1) cam6_zoom_cont_pane_g

0x6799,	// (0x0009e529) cam6_mode_pane_cp_ParamLimits

0x6799,	// (0x0009e529) cam6_mode_pane_cp

0x67ab,	// (0x0009e53b) cam6_zoom_pane_cp_ParamLimits

0x67ab,	// (0x0009e53b) cam6_zoom_pane_cp

0x67b7,	// (0x0009e547) vid6_image_uncrop_cif_pane_ParamLimits

0x67b7,	// (0x0009e547) vid6_image_uncrop_cif_pane

0x67c7,	// (0x0009e557) vid6_image_uncrop_nhd_pane_ParamLimits

0x67c7,	// (0x0009e557) vid6_image_uncrop_nhd_pane

0x67d6,	// (0x0009e566) vid6_image_uncrop_vga_pane_ParamLimits

0x67d6,	// (0x0009e566) vid6_image_uncrop_vga_pane

0x67e5,	// (0x0009e575) vid6_image_uncrop_wvga_pane_ParamLimits

0x67e5,	// (0x0009e575) vid6_image_uncrop_wvga_pane

0x67f4,	// (0x0009e584) vid6_indi_pane_ParamLimits

0x67f4,	// (0x0009e584) vid6_indi_pane

0xe656,	// (0x000a63e6) bg_tb_trans_pane_cp09_ParamLimits

0xe656,	// (0x000a63e6) bg_tb_trans_pane_cp09

0xaca9,	// (0x000a2a39) cam6_battery_pane_cp_ParamLimits

0xaca9,	// (0x000a2a39) cam6_battery_pane_cp

0xacb5,	// (0x000a2a45) vid6_indi_pane_g1_ParamLimits

0xacb5,	// (0x000a2a45) vid6_indi_pane_g1

0xacc7,	// (0x000a2a57) vid6_indi_pane_g2_ParamLimits

0xacc7,	// (0x000a2a57) vid6_indi_pane_g2

0xacd9,	// (0x000a2a69) vid6_indi_pane_g3_ParamLimits

0xacd9,	// (0x000a2a69) vid6_indi_pane_g3

0xacee,	// (0x000a2a7e) vid6_indi_pane_g4_ParamLimits

0xacee,	// (0x000a2a7e) vid6_indi_pane_g4

0xad03,	// (0x000a2a93) vid6_indi_pane_g5_ParamLimits

0xad03,	// (0x000a2a93) vid6_indi_pane_g5

0x0004,

0x0338,	// (0x000980c8) vid6_indi_pane_g_ParamLimits

0x0338,	// (0x000980c8) vid6_indi_pane_g

0xad1d,	// (0x000a2aad) vid6_indi_pane_t1_ParamLimits

0xad1d,	// (0x000a2aad) vid6_indi_pane_t1

0xad33,	// (0x000a2ac3) vid6_indi_pane_t2_ParamLimits

0xad33,	// (0x000a2ac3) vid6_indi_pane_t2

0xad5b,	// (0x000a2aeb) vid6_indi_pane_t3_ParamLimits

0xad5b,	// (0x000a2aeb) vid6_indi_pane_t3

0xad83,	// (0x000a2b13) vid6_indi_pane_t4_ParamLimits

0xad83,	// (0x000a2b13) vid6_indi_pane_t4

0x0003,

0x0343,	// (0x000980d3) vid6_indi_pane_t_ParamLimits

0x0343,	// (0x000980d3) vid6_indi_pane_t

0xada7,	// (0x000a2b37) wait_bar_pane_cp08

0x680c,	// (0x0009e59c) main_cset_text2_pane_t1_ParamLimits

0x680c,	// (0x0009e59c) main_cset_text2_pane_t1

0x6787,	// (0x0009e517) listscroll_gen_pane_cp06_t1_ParamLimits

0x6787,	// (0x0009e517) listscroll_gen_pane_cp06_t1

0x9eba,	// (0x000a1c4a) main_cam6_set_pane

0xac53,	// (0x000a29e3) bg_tb_trans_pane_cp06_ParamLimits

0xa4d2,	// (0x000a2262) cam4_indicators_pane_g1_ParamLimits

0xa4e3,	// (0x000a2273) cam4_indicators_pane_g2_ParamLimits

0xf7e7,	// (0x000a7577) cam4_indicators_pane_g_ParamLimits

0xa501,	// (0x000a2291) cam4_indicators_pane_t1_ParamLimits

0x9eac,	// (0x000a1c3c) bg_tb_trans_pane_cp07_ParamLimits

0xa52d,	// (0x000a22bd) vid4_indicators_pane_g1_ParamLimits

0xa541,	// (0x000a22d1) vid4_indicators_pane_g2_ParamLimits

0xa555,	// (0x000a22e5) vid4_indicators_pane_g3_ParamLimits

0xa566,	// (0x000a22f6) vid4_indicators_pane_g4_ParamLimits

0xf7f9,	// (0x000a7589) vid4_indicators_pane_g_ParamLimits

0xa584,	// (0x000a2314) vid4_indicators_pane_t1_ParamLimits

0xa8cf,	// (0x000a265f) vid4_progress_pane_g1_ParamLimits

0xa8df,	// (0x000a266f) vid4_progress_pane_g2_ParamLimits

0x62f8,	// (0x0009e088) vid4_progress_pane_g3_ParamLimits

0xa8ef,	// (0x000a267f) vid4_progress_pane_g4_ParamLimits

0xf9a0,	// (0x000a7730) vid4_progress_pane_g_ParamLimits

0x630a,	// (0x0009e09a) vid4_progress_pane_t1_ParamLimits

0xa907,	// (0x000a2697) vid4_progress_pane_t2_ParamLimits

0xa91c,	// (0x000a26ac) vid4_progress_pane_t3_ParamLimits

0xf9ab,	// (0x000a773b) vid4_progress_pane_t_ParamLimits

0x6322,	// (0x0009e0b2) wait_bar_pane_cp07_ParamLimits

0x6829,	// (0x0009e5b9) main_cam6_set_pane_g2_ParamLimits

0x6829,	// (0x0009e5b9) main_cam6_set_pane_g2

0x684d,	// (0x0009e5dd) main_cset6_listscroll_pane_ParamLimits

0x684d,	// (0x0009e5dd) main_cset6_listscroll_pane

0x686d,	// (0x0009e5fd) main_cset6_slider_pane_ParamLimits

0x686d,	// (0x0009e5fd) main_cset6_slider_pane

0x6883,	// (0x0009e613) main_cset6_text2_pane_ParamLimits

0x6883,	// (0x0009e613) main_cset6_text2_pane

0xadb6,	// (0x000a2b46) main_cset6_text_pane

0xadbe,	// (0x000a2b4e) main_cset_list_pane_copy1_ParamLimits

0xadbe,	// (0x000a2b4e) main_cset_list_pane_copy1

0xadce,	// (0x000a2b5e) scroll_pane_cp028_copy1

0x6891,	// (0x0009e621) cset_list_set_pane_copy1

0x68a2,	// (0x0009e632) aid_position_infowindow_above_copy1

0x68aa,	// (0x0009e63a) aid_position_infowindow_below_copy1

0x68b2,	// (0x0009e642) cset_list_set_pane_g1_copy1

0x68ba,	// (0x0009e64a) cset_list_set_pane_g3_copy1_ParamLimits

0x68ba,	// (0x0009e64a) cset_list_set_pane_g3_copy1

0x68c9,	// (0x0009e659) cset_list_set_pane_t1_copy1_ParamLimits

0x68c9,	// (0x0009e659) cset_list_set_pane_t1_copy1

0xc51b,	// (0x000a42ab) list_highlight_pane_cp021_copy1_ParamLimits

0xc51b,	// (0x000a42ab) list_highlight_pane_cp021_copy1

0xadd7,	// (0x000a2b67) cset6_slider_pane_ParamLimits

0xadd7,	// (0x000a2b67) cset6_slider_pane

0xae03,	// (0x000a2b93) main_cset6_slider_pane_g1_ParamLimits

0xae03,	// (0x000a2b93) main_cset6_slider_pane_g1

0x68de,	// (0x0009e66e) main_cset6_slider_pane_g2_ParamLimits

0x68de,	// (0x0009e66e) main_cset6_slider_pane_g2

0xae2b,	// (0x000a2bbb) main_cset6_slider_pane_g3_ParamLimits

0xae2b,	// (0x000a2bbb) main_cset6_slider_pane_g3

0x6906,	// (0x0009e696) main_cset6_slider_pane_g4_ParamLimits

0x6906,	// (0x0009e696) main_cset6_slider_pane_g4

0x6912,	// (0x0009e6a2) main_cset6_slider_pane_g5_ParamLimits

0x6912,	// (0x0009e6a2) main_cset6_slider_pane_g5

0x57da,	// (0x0009d56a) main_cset6_slider_pane_g7_ParamLimits

0x57da,	// (0x0009d56a) main_cset6_slider_pane_g7

0x57e6,	// (0x0009d576) main_cset6_slider_pane_g8_ParamLimits

0x57e6,	// (0x0009d576) main_cset6_slider_pane_g8

0x57f2,	// (0x0009d582) main_cset6_slider_pane_g9_ParamLimits

0x57f2,	// (0x0009d582) main_cset6_slider_pane_g9

0x57fe,	// (0x0009d58e) main_cset6_slider_pane_g10_ParamLimits

0x57fe,	// (0x0009d58e) main_cset6_slider_pane_g10

0x580a,	// (0x0009d59a) main_cset6_slider_pane_g11_ParamLimits

0x580a,	// (0x0009d59a) main_cset6_slider_pane_g11

0x5816,	// (0x0009d5a6) main_cset6_slider_pane_g12_ParamLimits

0x5816,	// (0x0009d5a6) main_cset6_slider_pane_g12

0x5822,	// (0x0009d5b2) main_cset6_slider_pane_g13_ParamLimits

0x5822,	// (0x0009d5b2) main_cset6_slider_pane_g13

0x582e,	// (0x0009d5be) main_cset6_slider_pane_g14_ParamLimits

0x582e,	// (0x0009d5be) main_cset6_slider_pane_g14

0x691e,	// (0x0009e6ae) main_cset6_slider_pane_g15_ParamLimits

0x691e,	// (0x0009e6ae) main_cset6_slider_pane_g15

0x5852,	// (0x0009d5e2) main_cset6_slider_pane_g16_ParamLimits

0x5852,	// (0x0009d5e2) main_cset6_slider_pane_g16

0x585e,	// (0x0009d5ee) main_cset6_slider_pane_g17_ParamLimits

0x585e,	// (0x0009d5ee) main_cset6_slider_pane_g17

0x0011,

0xfa5d,	// (0x000a77ed) main_cset6_slider_pane_g_ParamLimits

0xfa5d,	// (0x000a77ed) main_cset6_slider_pane_g

0xae37,	// (0x000a2bc7) main_cset6_slider_pane_t1_ParamLimits

0xae37,	// (0x000a2bc7) main_cset6_slider_pane_t1

0x694e,	// (0x0009e6de) main_cset6_slider_pane_t2_ParamLimits

0x694e,	// (0x0009e6de) main_cset6_slider_pane_t2

0x6979,	// (0x0009e709) main_cset6_slider_pane_t3_ParamLimits

0x6979,	// (0x0009e709) main_cset6_slider_pane_t3

0x69a4,	// (0x0009e734) main_cset6_slider_pane_t4_ParamLimits

0x69a4,	// (0x0009e734) main_cset6_slider_pane_t4

0x69cf,	// (0x0009e75f) main_cset6_slider_pane_t5_ParamLimits

0x69cf,	// (0x0009e75f) main_cset6_slider_pane_t5

0xae78,	// (0x000a2c08) main_cset6_slider_pane_t7_ParamLimits

0xae78,	// (0x000a2c08) main_cset6_slider_pane_t7

0x69fa,	// (0x0009e78a) main_cset6_slider_pane_t8_ParamLimits

0x69fa,	// (0x0009e78a) main_cset6_slider_pane_t8

0x6a1e,	// (0x0009e7ae) main_cset6_slider_pane_t9_ParamLimits

0x6a1e,	// (0x0009e7ae) main_cset6_slider_pane_t9

0x6a42,	// (0x0009e7d2) main_cset6_slider_pane_t10_ParamLimits

0x6a42,	// (0x0009e7d2) main_cset6_slider_pane_t10

0x6a66,	// (0x0009e7f6) main_cset6_slider_pane_t11_ParamLimits

0x6a66,	// (0x0009e7f6) main_cset6_slider_pane_t11

0xaeae,	// (0x000a2c3e) main_cset6_slider_pane_t14_ParamLimits

0xaeae,	// (0x000a2c3e) main_cset6_slider_pane_t14

0xaee7,	// (0x000a2c77) main_cset6_slider_pane_t15_ParamLimits

0xaee7,	// (0x000a2c77) main_cset6_slider_pane_t15

0x000b,

0xfa82,	// (0x000a7812) main_cset6_slider_pane_t_ParamLimits

0xfa82,	// (0x000a7812) main_cset6_slider_pane_t

0xab75,	// (0x000a2905) cset_slider_pane_g1_copy1

0xab7e,	// (0x000a290e) cset_slider_pane_g2_copy1

0xab87,	// (0x000a2917) cset_slider_pane_g3_copy1

0xac16,	// (0x000a29a6) bg_popup_sub_pane_cp011_copy1

0xaf20,	// (0x000a2cb0) main_cset_text_pane_g1_copy1

0xa692,	// (0x000a2422) main_cset_text_pane_t1_copy1

0xa6a0,	// (0x000a2430) main_cset_text_pane_t2_copy1

0xa6ae,	// (0x000a243e) main_cset_text_pane_t3_copy1

0xa6bc,	// (0x000a244c) main_cset_text_pane_t4_copy1

0xa6ca,	// (0x000a245a) main_cset_text_pane_t5_copy1

0xaf28,	// (0x000a2cb8) main_cset_text_pane_t6_copy1

0xaf36,	// (0x000a2cc6) main_cset_text_pane_t7_copy1

0x680c,	// (0x0009e59c) main_cset_text2_pane_t1_copy1

0x9eac,	// (0x000a1c3c) main_ncimui_pane

0x3620,	// (0x0009b3b0) popup_query_ncimui_window_ParamLimits

0x3620,	// (0x0009b3b0) popup_query_ncimui_window

0xebb5,	// (0x000a6945) field_cale_ev2_pane_g4_ParamLimits

0xebb5,	// (0x000a6945) field_cale_ev2_pane_g4

0x4856,	// (0x0009c5e6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4856,	// (0x0009c5e6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf781,	// (0x000a7511) cell_video_dialer_keypad_pane_g_ParamLimits

0xf781,	// (0x000a7511) cell_video_dialer_keypad_pane_g

0x486e,	// (0x0009c5fe) cell_video_dialer_keypad_pane_t1

0xac16,	// (0x000a29a6) bg_popup_window_pane_cp012

0xe443,	// (0x000a61d3) heading_pane_cp06

0xaf62,	// (0x000a2cf2) ncim_query_content_pane

0xac16,	// (0x000a29a6) bg_popup_heading_pane_cp01

0xaf6a,	// (0x000a2cfa) ncim_heading_pane_t1

0xaf78,	// (0x000a2d08) ncim_indicator_popup_pane

0xaf8a,	// (0x000a2d1a) ncim_query_button_pane

0xaf9e,	// (0x000a2d2e) ncim_query_content_pane_t1

0xafb0,	// (0x000a2d40) ncim_query_content_pane_t2

0x0005,

0xfaac,	// (0x000a783c) ncim_query_content_pane_t

0xafea,	// (0x000a2d7a) ncim_query_list_pane

0xaffc,	// (0x000a2d8c) ncim_query_popup_pane

0xaf78,	// (0x000a2d08) ncim_indicator_popup_pane_ParamLimits

0x6bd0,	// (0x0009e960) ncim_query_content_pane_g1_ParamLimits

0x6bd0,	// (0x0009e960) ncim_query_content_pane_g1

0xaf9e,	// (0x000a2d2e) ncim_query_content_pane_t1_ParamLimits

0xafb0,	// (0x000a2d40) ncim_query_content_pane_t2_ParamLimits

0x6bdc,	// (0x0009e96c) ncim_query_content_pane_t3_ParamLimits

0x6bdc,	// (0x0009e96c) ncim_query_content_pane_t3

0x6c04,	// (0x0009e994) ncim_query_content_pane_t4_ParamLimits

0x6c04,	// (0x0009e994) ncim_query_content_pane_t4

0x6c2c,	// (0x0009e9bc) ncim_query_content_pane_t5_ParamLimits

0x6c2c,	// (0x0009e9bc) ncim_query_content_pane_t5

0xafc2,	// (0x000a2d52) ncim_query_content_pane_t6_ParamLimits

0xafc2,	// (0x000a2d52) ncim_query_content_pane_t6

0xfaac,	// (0x000a783c) ncim_query_content_pane_t_ParamLimits

0xafea,	// (0x000a2d7a) ncim_query_list_pane_ParamLimits

0xaffc,	// (0x000a2d8c) ncim_query_popup_pane_ParamLimits

0xb010,	// (0x000a2da0) wait_bar_pane_cp04

0xac16,	// (0x000a29a6) input_focus_pane_cp011

0xb018,	// (0x000a2da8) ncim_query_popup_pane_t1

0xb026,	// (0x000a2db6) ncim_list_query_list_pane_ParamLimits

0xb026,	// (0x000a2db6) ncim_list_query_list_pane

0xac16,	// (0x000a29a6) bg_button_pane_cp027

0xb033,	// (0x000a2dc3) ncim_query_button_pane_g1

0xac16,	// (0x000a29a6) list_highlight_pane_cp012

0xb03d,	// (0x000a2dcd) ncim_list_query_list_pane_g1

0xb045,	// (0x000a2dd5) ncim_list_query_list_pane_t1

0xa4f2,	// (0x000a2282) cam4_indicators_pane_g3_ParamLimits

0xa4f2,	// (0x000a2282) cam4_indicators_pane_g3

0xa572,	// (0x000a2302) vid4_indicators_pane_g5_ParamLimits

0xa572,	// (0x000a2302) vid4_indicators_pane_g5

0xa8fb,	// (0x000a268b) vid4_progress_pane_g5_ParamLimits

0xa8fb,	// (0x000a268b) vid4_progress_pane_g5

0x6abb,	// (0x0009e84b) main_ncimui_pane_g1

0x6b24,	// (0x0009e8b4) ncimui_group_query_pane_ParamLimits

0x6b24,	// (0x0009e8b4) ncimui_group_query_pane

0x6b6c,	// (0x0009e8fc) ncimui_list_pane_ParamLimits

0x6b6c,	// (0x0009e8fc) ncimui_list_pane

0x6b93,	// (0x0009e923) ncimui_text_pane_ParamLimits

0x6b93,	// (0x0009e923) ncimui_text_pane

0x6c54,	// (0x0009e9e4) ncimui_text_pane_t1_ParamLimits

0x6c54,	// (0x0009e9e4) ncimui_text_pane_t1

0xb053,	// (0x000a2de3) ncimui_list_single_graphic_pane_ParamLimits

0xb053,	// (0x000a2de3) ncimui_list_single_graphic_pane

0x6c72,	// (0x0009ea02) ncimui_query_pane_ParamLimits

0x6c72,	// (0x0009ea02) ncimui_query_pane

0xac16,	// (0x000a29a6) list_highlight_pane_cp013

0xb063,	// (0x000a2df3) ncim_list_query_list_pane_t1_copy1

0xb03d,	// (0x000a2dcd) ncim_list_single_graphic_pane_g1

0x6c85,	// (0x0009ea15) ncim_query_button_pane_cp01

0x6c91,	// (0x0009ea21) ncim_query_entry_pane_ParamLimits

0x6c91,	// (0x0009ea21) ncim_query_entry_pane

0x6ca4,	// (0x0009ea34) ncimui_query_pane_g1

0x6cb0,	// (0x0009ea40) ncimui_query_pane_t1_ParamLimits

0x6cb0,	// (0x0009ea40) ncimui_query_pane_t1

0xc51b,	// (0x000a42ab) input_focus_pane_cp012

0xb071,	// (0x000a2e01) ncim_query_entry_pane_t1

0xc61e,	// (0x000a43ae) main_im_pane_ParamLimits

0x9eac,	// (0x000a1c3c) main_mobtv_pane_ParamLimits

0x9eac,	// (0x000a1c3c) main_mobtv_pane

0x6936,	// (0x0009e6c6) main_cset6_slider_pane_g18_ParamLimits

0x6936,	// (0x0009e6c6) main_cset6_slider_pane_g18

0x6942,	// (0x0009e6d2) main_cset6_slider_pane_g19_ParamLimits

0x6942,	// (0x0009e6d2) main_cset6_slider_pane_g19

0xc59e,	// (0x000a432e) bg_main_mobtv_pane_ParamLimits

0xc59e,	// (0x000a432e) bg_main_mobtv_pane

0x6cc9,	// (0x0009ea59) main_mobtv_info_pane

0x6cd2,	// (0x0009ea62) main_mobtv_loading_pane_ParamLimits

0x6cd2,	// (0x0009ea62) main_mobtv_loading_pane

0xb083,	// (0x000a2e13) main_mobtv_pg_channel_list_pane

0xb08d,	// (0x000a2e1d) main_mobtv_pg_hdr_pane

0x6cdf,	// (0x0009ea6f) main_mobtv_programe_curr_pane_ParamLimits

0x6cdf,	// (0x0009ea6f) main_mobtv_programe_curr_pane

0x6cec,	// (0x0009ea7c) main_mobtv_programe_next_pane_ParamLimits

0x6cec,	// (0x0009ea7c) main_mobtv_programe_next_pane

0xb096,	// (0x000a2e26) popup_mobtv_noti_window

0xc5c0,	// (0x000a4350) main_tv_pg_hdr_pane_g1

0xb09e,	// (0x000a2e2e) main_tv_pg_hdr_pane_g2

0xb0a6,	// (0x000a2e36) main_tv_pg_hdr_pane_g3

0xb0ae,	// (0x000a2e3e) main_tv_pg_hdr_pane_g4

0xb0b6,	// (0x000a2e46) main_tv_pg_hdr_pane_g5

0xb0c0,	// (0x000a2e50) main_tv_pg_hdr_pane_g6

0xb0ca,	// (0x000a2e5a) main_tv_pg_hdr_pane_g7

0xb0d4,	// (0x000a2e64) main_tv_pg_hdr_pane_g8

0xb0de,	// (0x000a2e6e) main_tv_pg_hdr_pane_g9

0xb0e8,	// (0x000a2e78) main_tv_pg_hdr_pane_g10

0xb0f2,	// (0x000a2e82) main_tv_pg_hdr_pane_g11

0x000a,

0x03c2,	// (0x00098152) main_tv_pg_hdr_pane_g

0xb0fc,	// (0x000a2e8c) main_tv_pg_hdr_pane_t1

0xb10a,	// (0x000a2e9a) main_tv_pg_hdr_pane_t2

0xb118,	// (0x000a2ea8) main_tv_pg_hdr_pane_t3

0xb128,	// (0x000a2eb8) main_tv_pg_hdr_pane_t4

0xb138,	// (0x000a2ec8) main_tv_pg_hdr_pane_t5

0x0004,

0x03d9,	// (0x00098169) main_tv_pg_hdr_pane_t

0xb148,	// (0x000a2ed8) single_mobtv_pg_channel_pane_ParamLimits

0xb148,	// (0x000a2ed8) single_mobtv_pg_channel_pane

0xb15a,	// (0x000a2eea) single_mobtv_pg_channel_table_pane

0xb163,	// (0x000a2ef3) single_mobtv_pg_channel_thumb_pane

0xb16c,	// (0x000a2efc) single_tv_pg_channel_pane_g1

0xb175,	// (0x000a2f05) single_tv_pg_channel_pane_g2

0x0001,

0x03e4,	// (0x00098174) single_tv_pg_channel_pane_g

0xc582,	// (0x000a4312) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc582,	// (0x000a4312) bg_single_mobtv_pg_channel_thumb_pane

0xb17e,	// (0x000a2f0e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xb17e,	// (0x000a2f0e) single_mobtv_pg_channel_thumb_pane_g1

0xb18c,	// (0x000a2f1c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xb18c,	// (0x000a2f1c) single_mobtv_pg_channel_thumb_pane_g2

0xb198,	// (0x000a2f28) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xb198,	// (0x000a2f28) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x03e9,	// (0x00098179) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x03e9,	// (0x00098179) single_mobtv_pg_channel_thumb_pane_g

0xb1a4,	// (0x000a2f34) single_mobtv_pg_channel_thumb_pane_t1

0xb1b2,	// (0x000a2f42) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x03f0,	// (0x00098180) single_mobtv_pg_channel_thumb_pane_t

0xc5c0,	// (0x000a4350) bg_single_mobtv_pg_channel_table_pane_g1

0xc5c0,	// (0x000a4350) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x000a6e3f) bg_single_mobtv_pg_channel_table_pane_g

0xb1c0,	// (0x000a2f50) single_mobtv_pg_channel_table_pane_t1

0xb1ce,	// (0x000a2f5e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x03f5,	// (0x00098185) single_mobtv_pg_channel_table_pane_t

0x6d01,	// (0x0009ea91) main_mobtv_info_pane_g1_ParamLimits

0x6d01,	// (0x0009ea91) main_mobtv_info_pane_g1

0x6d1f,	// (0x0009eaaf) main_mobtv_info_pane_t1_ParamLimits

0x6d1f,	// (0x0009eaaf) main_mobtv_info_pane_t1

0x6d97,	// (0x0009eb27) main_mobtv_info_pane_t2_ParamLimits

0x6d97,	// (0x0009eb27) main_mobtv_info_pane_t2

0x0002,

0xfabe,	// (0x000a784e) main_mobtv_info_pane_t_ParamLimits

0xfabe,	// (0x000a784e) main_mobtv_info_pane_t

0x6e26,	// (0x0009ebb6) wait_bar_pane_cp05

0x6e38,	// (0x0009ebc8) main_mobtv_loading_pane_g1_ParamLimits

0x6e38,	// (0x0009ebc8) main_mobtv_loading_pane_g1

0x6e4b,	// (0x0009ebdb) main_mobtv_loading_pane_g2_ParamLimits

0x6e4b,	// (0x0009ebdb) main_mobtv_loading_pane_g2

0x6e57,	// (0x0009ebe7) main_mobtv_loading_pane_g3_ParamLimits

0x6e57,	// (0x0009ebe7) main_mobtv_loading_pane_g3

0x0002,

0xfac5,	// (0x000a7855) main_mobtv_loading_pane_g_ParamLimits

0xfac5,	// (0x000a7855) main_mobtv_loading_pane_g

0xb1dc,	// (0x000a2f6c) main_mobtv_loading_pane_t1_ParamLimits

0xb1dc,	// (0x000a2f6c) main_mobtv_loading_pane_t1

0xb1f4,	// (0x000a2f84) main_mobtv_loading_pane_t2_ParamLimits

0xb1f4,	// (0x000a2f84) main_mobtv_loading_pane_t2

0x0001,

0x040d,	// (0x0009819d) main_mobtv_loading_pane_t_ParamLimits

0x040d,	// (0x0009819d) main_mobtv_loading_pane_t

0x6e6a,	// (0x0009ebfa) wait_bar_pane_cp06_ParamLimits

0x6e6a,	// (0x0009ebfa) wait_bar_pane_cp06

0xb218,	// (0x000a2fa8) main_mobtv_programe_curr_pane_t1

0xb226,	// (0x000a2fb6) main_mobtv_programe_curr_pane_t2

0x0001,

0x0412,	// (0x000981a2) main_mobtv_programe_curr_pane_t

0xb234,	// (0x000a2fc4) main_mobtv_programe_next_pane_t1

0xb242,	// (0x000a2fd2) main_mobtv_programe_next_pane_t2

0xb250,	// (0x000a2fe0) main_mobtv_programe_next_pane_t3

0x0002,

0x0417,	// (0x000981a7) main_mobtv_programe_next_pane_t

0xac16,	// (0x000a29a6) bg_popup_mobtv_noti_window_pane

0xb25e,	// (0x000a2fee) popup_mobtv_noti_window_g1

0xb266,	// (0x000a2ff6) popup_mobtv_noti_window_t1

0xb274,	// (0x000a3004) popup_mobtv_noti_window_t2

0x0001,

0x041e,	// (0x000981ae) popup_mobtv_noti_window_t

0xc5c0,	// (0x000a4350) bg_popup_mobtv_noti_window_pane_g1

0x9eba,	// (0x000a1c4a) sc_clock_pane

0x9eba,	// (0x000a1c4a) main_fs_bigclock_pane

0x6556,	// (0x0009e2e6) blid2_tripm_pane_t4_ParamLimits

0x6556,	// (0x0009e2e6) blid2_tripm_pane_t4

0xc582,	// (0x000a4312) sc_clock_pane_g1_ParamLimits

0xc582,	// (0x000a4312) sc_clock_pane_g1

0xc5ca,	// (0x000a435a) sc_clock_pane_t1_ParamLimits

0xc5ca,	// (0x000a435a) sc_clock_pane_t1

0xc5ca,	// (0x000a435a) sc_clock_pane_t2_ParamLimits

0xc5ca,	// (0x000a435a) sc_clock_pane_t2

0xc5ca,	// (0x000a435a) sc_clock_pane_t3_ParamLimits

0xc5ca,	// (0x000a435a) sc_clock_pane_t3

0x0004,

0xfacc,	// (0x000a785c) sc_clock_pane_t_ParamLimits

0xfacc,	// (0x000a785c) sc_clock_pane_t

0x7ce7,	// (0x0009fa77) main_fs_bigclock_indicator_pane_ParamLimits

0x7ce7,	// (0x0009fa77) main_fs_bigclock_indicator_pane

0x6ec8,	// (0x0009ec58) main_fs_bigclock_pane_g1_ParamLimits

0x6ec8,	// (0x0009ec58) main_fs_bigclock_pane_g1

0x7cf3,	// (0x0009fa83) main_fs_bigclock_pane_t1_ParamLimits

0x7cf3,	// (0x0009fa83) main_fs_bigclock_pane_t1

0x7d05,	// (0x0009fa95) main_fs_bigclock_pane_t2_ParamLimits

0x7d05,	// (0x0009fa95) main_fs_bigclock_pane_t2

0x7d19,	// (0x0009faa9) main_fs_bigclock_pane_t3_ParamLimits

0x7d19,	// (0x0009faa9) main_fs_bigclock_pane_t3

0x0002,

0xfbbd,	// (0x000a794d) main_fs_bigclock_pane_t_ParamLimits

0xfbbd,	// (0x000a794d) main_fs_bigclock_pane_t

0xbde4,	// (0x000a3b74) main_fs_bigclock_indicator_pane_g1

0xaf92,	// (0x000a2d22) ncim_query_content_pane_g2_ParamLimits

0xaf92,	// (0x000a2d22) ncim_query_content_pane_g2

0x0001,

0xfaa7,	// (0x000a7837) ncim_query_content_pane_g_ParamLimits

0xfaa7,	// (0x000a7837) ncim_query_content_pane_g

0xc5ca,	// (0x000a435a) sc_clock_pane_t4_ParamLimits

0xc5ca,	// (0x000a435a) sc_clock_pane_t4

0x9eac,	// (0x000a1c3c) main_radioblah_pane

0xa474,	// (0x000a2204) cell_call4_button_pane_t1_copy1_ParamLimits

0xa474,	// (0x000a2204) cell_call4_button_pane_t1_copy1

0x6ad3,	// (0x0009e863) main_ncimui_pane_t1_ParamLimits

0x6ad3,	// (0x0009e863) main_ncimui_pane_t1

0x6aed,	// (0x0009e87d) main_ncimui_pane_t2_ParamLimits

0x6aed,	// (0x0009e87d) main_ncimui_pane_t2

0x0002,

0xfaa0,	// (0x000a7830) main_ncimui_pane_t_ParamLimits

0xfaa0,	// (0x000a7830) main_ncimui_pane_t

0xd302,	// (0x000a5092) main_radioblah_anim_pane_ParamLimits

0xd302,	// (0x000a5092) main_radioblah_anim_pane

0xd302,	// (0x000a5092) main_radioblah_info_pane_ParamLimits

0xd302,	// (0x000a5092) main_radioblah_info_pane

0xd2ee,	// (0x000a507e) main_radioblah_pane_t1_ParamLimits

0xd2ee,	// (0x000a507e) main_radioblah_pane_t1

0xd2ee,	// (0x000a507e) main_radioblah_pane_t2_ParamLimits

0xd2ee,	// (0x000a507e) main_radioblah_pane_t2

0x0003,

0xfad7,	// (0x000a7867) main_radioblah_pane_t_ParamLimits

0xfad7,	// (0x000a7867) main_radioblah_pane_t

0xc51b,	// (0x000a42ab) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc51b,	// (0x000a42ab) main_radioblah_rocker_ctrl_pane

0xe664,	// (0x000a63f4) main_radioblah_info_pane_t1_ParamLimits

0xe664,	// (0x000a63f4) main_radioblah_info_pane_t1

0xb3e9,	// (0x000a3179) main_radioblah_info_pane_t2_ParamLimits

0xb3e9,	// (0x000a3179) main_radioblah_info_pane_t2

0x0003,

0xfae0,	// (0x000a7870) main_radioblah_info_pane_t_ParamLimits

0xfae0,	// (0x000a7870) main_radioblah_info_pane_t

0xc5c0,	// (0x000a4350) main_radioblah_rocker_ctrl_pane_g1

0xc5c0,	// (0x000a4350) main_radioblah_rocker_ctrl_pane_g2

0xc5c0,	// (0x000a4350) main_radioblah_rocker_ctrl_pane_g3

0xc5c0,	// (0x000a4350) main_radioblah_rocker_ctrl_pane_g4

0xc5c0,	// (0x000a4350) main_radioblah_rocker_ctrl_pane_g5

0xc5c0,	// (0x000a4350) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0x0456,	// (0x000981e6) main_radioblah_rocker_ctrl_pane_g

0x680c,	// (0x0009e59c) main_cset_text2_pane_t1_copy1_ParamLimits

0xa4c2,	// (0x000a2252) cam4_image_uncrop_qvga_pane

0xa51b,	// (0x000a22ab) vid4_image_uncrop_qcif_pane

0xaaf5,	// (0x000a2885) cam6_image_uncrop_qvga_pane_ParamLimits

0xaaf5,	// (0x000a2885) cam6_image_uncrop_qvga_pane

0xac99,	// (0x000a2a29) vid6_image_uncrop_qcif_pane_ParamLimits

0xac99,	// (0x000a2a29) vid6_image_uncrop_qcif_pane

0xac16,	// (0x000a29a6) bg_popup_preview_window_pane_cp03

0xaf44,	// (0x000a2cd4) list_cset_text2_pane

0xaf4c,	// (0x000a2cdc) main_cset6_text2_pane_g1

0xaf54,	// (0x000a2ce4) main_cset6_text2_pane_t1

0x6f15,	// (0x0009eca5) list_cset_text2_pane_t1_ParamLimits

0x6f15,	// (0x0009eca5) list_cset_text2_pane_t1

0x9eac,	// (0x000a1c3c) main_radioblah_pane_ParamLimits

0x6e12,	// (0x0009eba2) main_mobtv_info_pane_t3_ParamLimits

0x6e12,	// (0x0009eba2) main_mobtv_info_pane_t3

0xd2e0,	// (0x000a5070) main_radioblah_pane_g1

0xb3b9,	// (0x000a3149) main_radioblah_info_pane_g1

0xc5de,	// (0x000a436e) main_radioblah_info_pane_t3_ParamLimits

0xc5de,	// (0x000a436e) main_radioblah_info_pane_t3

0x23b1,	// (0x0009a141) highlight_cell_cale_month_pane_ParamLimits

0x23b1,	// (0x0009a141) highlight_cell_cale_month_pane

0x9eba,	// (0x000a1c4a) main_phob_fisheye_pane

0xec56,	// (0x000a69e6) scroll_pane_cp0031_ParamLimits

0xec56,	// (0x000a69e6) scroll_pane_cp0031

0xada7,	// (0x000a2b37) wait_bar_pane_cp08_ParamLimits

0x6891,	// (0x0009e621) cset_list_set_pane_copy1_ParamLimits

0xb438,	// (0x000a31c8) highlight_cell_cale_month_pane_g1

0x6f2e,	// (0x0009ecbe) highlight_cell_cale_month_pane_t1

0xa8be,	// (0x000a264e) list_gen_pane_cp01

0x572d,	// (0x0009d4bd) scroll_pane_01

0x6f3c,	// (0x0009eccc) list_single_double_fisheye_pane

0x6f45,	// (0x0009ecd5) list_double_fisheye_pane_g1_ParamLimits

0x6f45,	// (0x0009ecd5) list_double_fisheye_pane_g1

0x6f51,	// (0x0009ece1) list_double_fisheye_pane_g2_ParamLimits

0x6f51,	// (0x0009ece1) list_double_fisheye_pane_g2

0x6f65,	// (0x0009ecf5) list_double_fisheye_pane_g3_ParamLimits

0x6f65,	// (0x0009ecf5) list_double_fisheye_pane_g3

0x0004,

0xfae9,	// (0x000a7879) list_double_fisheye_pane_g_ParamLimits

0xfae9,	// (0x000a7879) list_double_fisheye_pane_g

0x6f8e,	// (0x0009ed1e) list_double_fisheye_pane_t1_ParamLimits

0x6f8e,	// (0x0009ed1e) list_double_fisheye_pane_t1

0x6fa9,	// (0x0009ed39) list_double_fisheye_pane_t2_ParamLimits

0x6fa9,	// (0x0009ed39) list_double_fisheye_pane_t2

0x0001,

0xfaf4,	// (0x000a7884) list_double_fisheye_pane_t_ParamLimits

0xfaf4,	// (0x000a7884) list_double_fisheye_pane_t

0x9eba,	// (0x000a1c4a) main_call5_pane

0xc51b,	// (0x000a42ab) sc_swipe_pane_ParamLimits

0xc51b,	// (0x000a42ab) sc_swipe_pane

0x6fde,	// (0x0009ed6e) call5_image_pane_ParamLimits

0x6fde,	// (0x0009ed6e) call5_image_pane

0x6ffb,	// (0x0009ed8b) call5_swipe_1_pane_ParamLimits

0x6ffb,	// (0x0009ed8b) call5_swipe_1_pane

0x700e,	// (0x0009ed9e) call5_swipe_2_pane_ParamLimits

0x700e,	// (0x0009ed9e) call5_swipe_2_pane

0x7039,	// (0x0009edc9) popup_call5_audio_first_window_ParamLimits

0x7039,	// (0x0009edc9) popup_call5_audio_first_window

0xc582,	// (0x000a4312) call5_swipe_1_pane_g1_ParamLimits

0xc582,	// (0x000a4312) call5_swipe_1_pane_g1

0xb440,	// (0x000a31d0) call5_swipe_1_pane_g2_ParamLimits

0xb440,	// (0x000a31d0) call5_swipe_1_pane_g2

0x0001,

0x0473,	// (0x00098203) call5_swipe_1_pane_g_ParamLimits

0x0473,	// (0x00098203) call5_swipe_1_pane_g

0xb44c,	// (0x000a31dc) call5_swipe_1_pane_t1_ParamLimits

0xb44c,	// (0x000a31dc) call5_swipe_1_pane_t1

0xc582,	// (0x000a4312) call5_swipe_2_pane_g1_ParamLimits

0xc582,	// (0x000a4312) call5_swipe_2_pane_g1

0xb461,	// (0x000a31f1) call5_swipe_2_pane_g2_ParamLimits

0xb461,	// (0x000a31f1) call5_swipe_2_pane_g2

0x0001,

0x0478,	// (0x00098208) call5_swipe_2_pane_g_ParamLimits

0x0478,	// (0x00098208) call5_swipe_2_pane_g

0xb46d,	// (0x000a31fd) call5_swipe_2_pane_t1_ParamLimits

0xb46d,	// (0x000a31fd) call5_swipe_2_pane_t1

0xc582,	// (0x000a4312) sc_swipe_pane_g1_ParamLimits

0xc582,	// (0x000a4312) sc_swipe_pane_g1

0xc590,	// (0x000a4320) sc_swipe_pane_g2_ParamLimits

0xc590,	// (0x000a4320) sc_swipe_pane_g2

0x0001,

0x047d,	// (0x0009820d) sc_swipe_pane_g_ParamLimits

0x047d,	// (0x0009820d) sc_swipe_pane_g

0xc5ca,	// (0x000a435a) sc_swipe_pane_t1_ParamLimits

0xc5ca,	// (0x000a435a) sc_swipe_pane_t1

0x9eba,	// (0x000a1c4a) main_cmail_launcher_pane

0x704a,	// (0x0009edda) aid_size_cell_cmail_l_ParamLimits

0x704a,	// (0x0009edda) aid_size_cell_cmail_l

0x7058,	// (0x0009ede8) grid_cmail_l_pane_ParamLimits

0x7058,	// (0x0009ede8) grid_cmail_l_pane

0x7072,	// (0x0009ee02) cell_cmail_l_pane_ParamLimits

0x7072,	// (0x0009ee02) cell_cmail_l_pane

0xb482,	// (0x000a3212) cell_cmail_l_pane_g1_ParamLimits

0xb482,	// (0x000a3212) cell_cmail_l_pane_g1

0xb48e,	// (0x000a321e) cell_cmail_l_pane_t1_ParamLimits

0xb48e,	// (0x000a321e) cell_cmail_l_pane_t1

0xb4a4,	// (0x000a3234) cell_cmail_l_pane_t2_ParamLimits

0xb4a4,	// (0x000a3234) cell_cmail_l_pane_t2

0x0001,

0x0482,	// (0x00098212) cell_cmail_l_pane_t_ParamLimits

0x0482,	// (0x00098212) cell_cmail_l_pane_t

0xc51b,	// (0x000a42ab) grid_highlight_pane_cp018_ParamLimits

0xc51b,	// (0x000a42ab) grid_highlight_pane_cp018

0x0900,	// (0x00098690) main2_pane_ParamLimits

0x0900,	// (0x00098690) main2_pane

0xc6ad,	// (0x000a443d) popup_sp_fs_action_menu_bg_pane_g1

0xc6b5,	// (0x000a4445) popup_sp_fs_action_menu_bg_pane_g2

0xc6bd,	// (0x000a444d) popup_sp_fs_action_menu_bg_pane_g3

0xc6c5,	// (0x000a4455) popup_sp_fs_action_menu_bg_pane_g4

0xc6cd,	// (0x000a445d) popup_sp_fs_action_menu_bg_pane_g5

0xc6d5,	// (0x000a4465) popup_sp_fs_action_menu_bg_pane_g6

0xc6dd,	// (0x000a446d) popup_sp_fs_action_menu_bg_pane_g7

0xc6e5,	// (0x000a4475) popup_sp_fs_action_menu_bg_pane_g8

0xc6ed,	// (0x000a447d) popup_sp_fs_action_menu_bg_pane_g9

0xc6f5,	// (0x000a4485) popup_sp_fs_action_menu_bg_pane_g10

0xc6f5,	// (0x000a4485) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x000a6e90) popup_sp_fs_action_menu_bg_pane_g

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g3_g1

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g3_g2

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x000a6f3e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x000a6f3e) list_medium_line_x2_t3_g3_g

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g3_t1

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g3_t2

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x000a6f45) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x000a6f45) list_medium_line_x2_t3_g3_t

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g2_g1

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x000a6f4c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x000a6f4c) list_medium_line_x2_t3_g2_g

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g2_t1

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g2_t2

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x000a6f45) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x000a6f45) list_medium_line_x2_t3_g2_t

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g4_g1

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g4_g2

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g4_g3

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x000a6f51) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x000a6f51) list_medium_line_x2_t4_g4_g

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g4_t1

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g4_t2

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g4_t3

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x000a6f5a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x000a6f5a) list_medium_line_x2_t4_g4_t

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g4_g1

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g4_g2

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g4_g3

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x000a6f51) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x000a6f51) list_medium_line_x2_t2_g4_g

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g4_t1

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x000a6f21) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x000a6f21) list_medium_line_x2_t2_g4_t

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g3_g1

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g3_g2

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x000a6f3e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x000a6f3e) list_medium_line_x2_t2_g3_g

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g3_t1

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x000a6f21) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x000a6f21) list_medium_line_x2_t2_g3_t

0x2503,	// (0x0009a293) main_sp_fs_list_pane_ParamLimits

0x2503,	// (0x0009a293) main_sp_fs_list_pane

0x9f8a,	// (0x000a1d1a) sp_fs_scroll_pane_ParamLimits

0x9f8a,	// (0x000a1d1a) sp_fs_scroll_pane

0xcd3a,	// (0x000a4aca) list_medium_line_x2_t3_t1

0xcd3a,	// (0x000a4aca) list_medium_line_x2_t3_t2

0xcd3a,	// (0x000a4aca) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x000a7007) list_medium_line_x2_t3_t

0xcd3a,	// (0x000a4aca) list_medium_line_x3_t4_t1

0xcd3a,	// (0x000a4aca) list_medium_line_x3_t4_t2

0xcd3a,	// (0x000a4aca) list_medium_line_x3_t4_t3

0xcd3a,	// (0x000a4aca) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x000a700e) list_medium_line_x3_t4_t

0xcd3a,	// (0x000a4aca) list_medium_line_x4_t5_t1

0xcd3a,	// (0x000a4aca) list_medium_line_x4_t5_t2

0xcd3a,	// (0x000a4aca) list_medium_line_x4_t5_t3

0xcd3a,	// (0x000a4aca) list_medium_line_x4_t5_t4

0xcd3a,	// (0x000a4aca) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x000a7017) list_medium_line_x4_t5_t

0xc582,	// (0x000a4312) list_medium_line_t4_g4_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t4_g4_g1

0xc582,	// (0x000a4312) list_medium_line_t4_g4_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t4_g4_g2

0xc582,	// (0x000a4312) list_medium_line_t4_g4_g3_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t4_g4_g3

0xc582,	// (0x000a4312) list_medium_line_t4_g4_g4_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x000a6f51) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x000a6f51) list_medium_line_t4_g4_g

0xc5ca,	// (0x000a435a) list_medium_line_t4_g4_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t4_g4_t1

0xc5ca,	// (0x000a435a) list_medium_line_t4_g4_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t4_g4_t2

0xc5ca,	// (0x000a435a) list_medium_line_t4_g4_t3_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t4_g4_t3

0xc5ca,	// (0x000a435a) list_medium_line_t4_g4_t4_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x000a6f5a) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x000a6f5a) list_medium_line_t4_g4_t

0x259e,	// (0x0009a32e) chi_dic_find_pane_g1

0x33ea,	// (0x0009b17a) main_tport_pane

0xcd3a,	// (0x000a4aca) list_medium_line_plain_t1

0xc582,	// (0x000a4312) list_medium_line_t2_g2_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t2_g2_g1

0xc582,	// (0x000a4312) list_medium_line_t2_g2_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x000a6f4c) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x000a6f4c) list_medium_line_t2_g2_g

0xc5ca,	// (0x000a435a) list_medium_line_t2_g2_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t2_g2_t1

0xc5ca,	// (0x000a435a) list_medium_line_t2_g2_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x000a6f21) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x000a6f21) list_medium_line_t2_g2_t

0x6335,	// (0x0009e0c5) aid_sp_fs_list_icon_a_sm

0xa931,	// (0x000a26c1) aid_sp_fs_list_icon_d

0xa939,	// (0x000a26c9) aid_sp_fs_text_primary

0x633d,	// (0x0009e0cd) aid_sp_fs_text_secondary

0xac16,	// (0x000a29a6) list_medium_line

0xac16,	// (0x000a29a6) list_medium_line_g2

0xac16,	// (0x000a29a6) list_medium_line_g3

0xac16,	// (0x000a29a6) list_medium_line_plain

0xac16,	// (0x000a29a6) list_medium_line_plain_t2

0xac16,	// (0x000a29a6) list_medium_line_plain_t3

0xac16,	// (0x000a29a6) list_medium_line_right_icon

0xac16,	// (0x000a29a6) list_medium_line_right_iconx2

0xac16,	// (0x000a29a6) list_medium_line_t2

0xac16,	// (0x000a29a6) list_medium_line_t2_g2

0xac16,	// (0x000a29a6) list_medium_line_t2_g3

0xac16,	// (0x000a29a6) list_medium_line_t2_right_icon

0xac16,	// (0x000a29a6) list_medium_line_t2_right_iconx2

0xac16,	// (0x000a29a6) list_medium_line_t3

0xac16,	// (0x000a29a6) list_medium_line_t3_g2

0xac16,	// (0x000a29a6) list_medium_line_t3_g3

0xac16,	// (0x000a29a6) list_medium_line_t3_right_iconx2

0xac16,	// (0x000a29a6) list_medium_line_t4_g4

0xac16,	// (0x000a29a6) list_medium_line_x2

0xac16,	// (0x000a29a6) list_medium_line_x2_t2_g2

0xac16,	// (0x000a29a6) list_medium_line_x2_t2_g3

0xac16,	// (0x000a29a6) list_medium_line_x2_t2_g4

0xac16,	// (0x000a29a6) list_medium_line_x2_t3

0xac16,	// (0x000a29a6) list_medium_line_x2_t3_g2

0xac16,	// (0x000a29a6) list_medium_line_x2_t3_g3

0xac16,	// (0x000a29a6) list_medium_line_x2_t3_g4

0xac16,	// (0x000a29a6) list_medium_line_x2_t4_g2

0xac16,	// (0x000a29a6) list_medium_line_x2_t4_g4

0xac16,	// (0x000a29a6) list_medium_line_x3

0xac16,	// (0x000a29a6) list_medium_line_x3_t4

0xac16,	// (0x000a29a6) list_medium_line_x3_t4_g4

0xac16,	// (0x000a29a6) list_medium_line_x4_t4

0xac16,	// (0x000a29a6) list_medium_line_x4_t4_g7

0xac16,	// (0x000a29a6) list_medium_line_x4_t5

0x6346,	// (0x0009e0d6) list_single_fs_dyc_pane_ParamLimits

0x6346,	// (0x0009e0d6) list_single_fs_dyc_pane

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g1

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g2

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g3

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g4

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g5

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x4_t4_g7_g6

0xc590,	// (0x000a4320) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc590,	// (0x000a4320) list_medium_line_x4_t4_g7_g7

0x0006,

0x038a,	// (0x0009811a) list_medium_line_x4_t4_g7_g_ParamLimits

0x038a,	// (0x0009811a) list_medium_line_x4_t4_g7_g

0xc5ca,	// (0x000a435a) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x4_t4_g7_t1

0xc5ca,	// (0x000a435a) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x4_t4_g7_t2

0xc5ca,	// (0x000a435a) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x4_t4_g7_t3

0xc5de,	// (0x000a436e) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc5de,	// (0x000a436e) list_medium_line_x4_t4_g7_t4

0xc5de,	// (0x000a436e) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc5de,	// (0x000a436e) list_medium_line_x4_t4_g7_t5

0x0004,

0x0399,	// (0x00098129) list_medium_line_x4_t4_g7_t_ParamLimits

0x0399,	// (0x00098129) list_medium_line_x4_t4_g7_t

0x6a8a,	// (0x0009e81a) list_single_dyc_row_pane_ParamLimits

0x6a8a,	// (0x0009e81a) list_single_dyc_row_pane

0x6fcb,	// (0x0009ed5b) call5_gesture_pane_ParamLimits

0x6fcb,	// (0x0009ed5b) call5_gesture_pane

0x7021,	// (0x0009edb1) call5_windows_pane_ParamLimits

0x7021,	// (0x0009edb1) call5_windows_pane

0x708c,	// (0x0009ee1c) call5_swipe_1_pane_cp_ParamLimits

0x708c,	// (0x0009ee1c) call5_swipe_1_pane_cp

0x7098,	// (0x0009ee28) call5_swipe_2_pane_cp_ParamLimits

0x7098,	// (0x0009ee28) call5_swipe_2_pane_cp

0xc7d0,	// (0x000a4560) call5_image_pane_cp

0x70a4,	// (0x0009ee34) popup_call5_audio_first_window_cp_ParamLimits

0x70a4,	// (0x0009ee34) popup_call5_audio_first_window_cp

0xb4c1,	// (0x000a3251) call5_swipe_1_pane_g1_cp_ParamLimits

0xb4c1,	// (0x000a3251) call5_swipe_1_pane_g1_cp

0xb4ce,	// (0x000a325e) call5_swipe_1_pane_g2_cp

0xb4d6,	// (0x000a3266) call5_swipe_1_pane_t1_cp_ParamLimits

0xb4d6,	// (0x000a3266) call5_swipe_1_pane_t1_cp

0xb4c1,	// (0x000a3251) call5_swipe_2_pane_g1_cp_ParamLimits

0xb4c1,	// (0x000a3251) call5_swipe_2_pane_g1_cp

0xb4eb,	// (0x000a327b) call5_swipe_2_pane_g2_cp

0xb4f3,	// (0x000a3283) call5_swipe_2_pane_t1_cp_ParamLimits

0xb4f3,	// (0x000a3283) call5_swipe_2_pane_t1_cp

0xc51b,	// (0x000a42ab) main_sp_fs_email_pane

0xb508,	// (0x000a3298) main_sp_fs_listscroll_pane_te

0xab90,	// (0x000a2920) popup_sp_fs_action_menu_pane_ParamLimits

0xab90,	// (0x000a2920) popup_sp_fs_action_menu_pane

0xc5c0,	// (0x000a4350) bg_sp_fs_ctrlbar_pane_g1

0xb511,	// (0x000a32a1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xb51a,	// (0x000a32aa) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xb523,	// (0x000a32b3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc5c0,	// (0x000a4350) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0487,	// (0x00098217) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe648,	// (0x000a63d8) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe648,	// (0x000a63d8) bg_sp_fs_ctrlbar_ddmenu_pane

0xb52c,	// (0x000a32bc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xb52c,	// (0x000a32bc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xb538,	// (0x000a32c8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xb538,	// (0x000a32c8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0490,	// (0x00098220) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0490,	// (0x00098220) main_sp_fs_ctrlbar_ddmenu_pane_g

0xb544,	// (0x000a32d4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xb544,	// (0x000a32d4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc5c0,	// (0x000a4350) list_medium_line_t2_right_icon_g1

0xcd3a,	// (0x000a4aca) list_medium_line_t2_right_icon_t1

0xcd3a,	// (0x000a4aca) list_medium_line_t2_right_icon_t2

0x0001,

0xfaf9,	// (0x000a7889) list_medium_line_t2_right_icon_t

0xd302,	// (0x000a5092) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd302,	// (0x000a5092) bg_sp_fs_ctrlbar_pane

0x70fa,	// (0x0009ee8a) main_sp_fs_ctrlbar_button_pane_cp01

0x7104,	// (0x0009ee94) main_sp_fs_ctrlbar_ddmenu_pane

0xb596,	// (0x000a3326) main_sp_fs_ctrlbar_pane_g1

0xb5a2,	// (0x000a3332) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfafe,	// (0x000a788e) main_sp_fs_ctrlbar_pane_g

0x7142,	// (0x0009eed2) main_sp_fs_ctrlbar_pane_t1

0x7181,	// (0x0009ef11) main_sp_fs_ctrlbar_pane

0x71a5,	// (0x0009ef35) main_sp_fs_listscroll_pane_te_cp01

0x71cf,	// (0x0009ef5f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x71cf,	// (0x0009ef5f) popup_sp_fs_action_menu_pane_cp01

0xc51b,	// (0x000a42ab) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc51b,	// (0x000a42ab) bg_sp_fs_highlight_list_pane_cp01

0x71f4,	// (0x0009ef84) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x71f4,	// (0x0009ef84) sp_fs_action_menu_list_gene_pane_g1

0xb5c9,	// (0x000a3359) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb5c9,	// (0x000a3359) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb07,	// (0x000a7897) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb07,	// (0x000a7897) sp_fs_action_menu_list_gene_pane_g

0x7203,	// (0x0009ef93) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7203,	// (0x0009ef93) sp_fs_action_menu_list_gene_pane_t1

0x721b,	// (0x0009efab) sp_fs_action_menu_list_gene_pane_ParamLimits

0x721b,	// (0x0009efab) sp_fs_action_menu_list_gene_pane

0xb5d6,	// (0x000a3366) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb5d6,	// (0x000a3366) popup_sp_fs_action_menu_bg_pane

0x723c,	// (0x0009efcc) sp_fs_action_menu_list_pane_ParamLimits

0x723c,	// (0x0009efcc) sp_fs_action_menu_list_pane

0x725e,	// (0x0009efee) sp_fs_scroll_pane_cp01_ParamLimits

0x725e,	// (0x0009efee) sp_fs_scroll_pane_cp01

0xcd3a,	// (0x000a4aca) list_medium_line_plain_t2_t1

0xcd3a,	// (0x000a4aca) list_medium_line_plain_t2_t2

0x0001,

0xfaf9,	// (0x000a7889) list_medium_line_plain_t2_t

0xcd3a,	// (0x000a4aca) list_medium_line_plain_t3_t1

0xcd3a,	// (0x000a4aca) list_medium_line_plain_t3_t2

0xcd3a,	// (0x000a4aca) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x000a7007) list_medium_line_plain_t3_t

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g2_g1

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x000a6f4c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x000a6f4c) list_medium_line_x2_t2_g2_g

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g2_t1

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x000a6f21) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x000a6f21) list_medium_line_x2_t2_g2_t

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g2_g1

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x000a6f4c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x000a6f4c) list_medium_line_x2_t4_g2_g

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g2_t1

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g2_t2

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g2_t3

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x000a6f5a) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x000a6f5a) list_medium_line_x2_t4_g2_t

0xc5c0,	// (0x000a4350) list_medium_line_t3_right_iconx2_g1

0xc5c0,	// (0x000a4350) list_medium_line_t3_right_iconx2_g2

0xc5c0,	// (0x000a4350) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x000a7123) list_medium_line_t3_right_iconx2_g

0xcd3a,	// (0x000a4aca) list_medium_line_t3_right_iconx2_t1

0xcd3a,	// (0x000a4aca) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfaf9,	// (0x000a7889) list_medium_line_t3_right_iconx2_t

0xc582,	// (0x000a4312) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x3_t4_g4_g1

0xc582,	// (0x000a4312) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x3_t4_g4_g2

0xc582,	// (0x000a4312) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x3_t4_g4_g3

0xc582,	// (0x000a4312) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x000a6f51) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x000a6f51) list_medium_line_x3_t4_g4_g

0xc5ca,	// (0x000a435a) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x3_t4_g4_t1

0xc5ca,	// (0x000a435a) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x3_t4_g4_t2

0xc5ca,	// (0x000a435a) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x3_t4_g4_t3

0xc5ca,	// (0x000a435a) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x000a6f5a) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x000a6f5a) list_medium_line_x3_t4_g4_t

0x7284,	// (0x0009f014) list_single_dyc_row_text_pane_t1_ParamLimits

0x7284,	// (0x0009f014) list_single_dyc_row_text_pane_t1

0x72cd,	// (0x0009f05d) list_single_dyc_row_text_pane_t2_ParamLimits

0x72cd,	// (0x0009f05d) list_single_dyc_row_text_pane_t2

0x7343,	// (0x0009f0d3) list_single_dyc_row_text_pane_t3_ParamLimits

0x7343,	// (0x0009f0d3) list_single_dyc_row_text_pane_t3

0x0005,

0xfb0c,	// (0x000a789c) list_single_dyc_row_text_pane_t_ParamLimits

0xfb0c,	// (0x000a789c) list_single_dyc_row_text_pane_t

0x7426,	// (0x0009f1b6) list_single_dyc_row_pane_g1_ParamLimits

0x7426,	// (0x0009f1b6) list_single_dyc_row_pane_g1

0x7432,	// (0x0009f1c2) list_single_dyc_row_pane_g2_ParamLimits

0x7432,	// (0x0009f1c2) list_single_dyc_row_pane_g2

0x743e,	// (0x0009f1ce) list_single_dyc_row_pane_g3_ParamLimits

0x743e,	// (0x0009f1ce) list_single_dyc_row_pane_g3

0x744a,	// (0x0009f1da) list_single_dyc_row_pane_g4_ParamLimits

0x744a,	// (0x0009f1da) list_single_dyc_row_pane_g4

0x0003,

0xfb19,	// (0x000a78a9) list_single_dyc_row_pane_g_ParamLimits

0xfb19,	// (0x000a78a9) list_single_dyc_row_pane_g

0x7456,	// (0x0009f1e6) list_single_dyc_row_text_pane_ParamLimits

0x7456,	// (0x0009f1e6) list_single_dyc_row_text_pane

0xac16,	// (0x000a29a6) bg_sp_fs_scroll_pane

0xb5e4,	// (0x000a3374) thumb_sp_fs_scroll_pane

0xc582,	// (0x000a4312) list_medium_line_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_g1

0xc5ca,	// (0x000a435a) list_medium_line_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t1

0xc582,	// (0x000a4312) list_medium_line_x2_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_g1

0xc582,	// (0x000a4312) list_medium_line_x2_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x000a6f4c) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x000a6f4c) list_medium_line_x2_g

0xc5ca,	// (0x000a435a) list_medium_line_x2_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t1

0xc582,	// (0x000a4312) list_medium_line_x3_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x3_g1

0xac53,	// (0x000a29e3) list_medium_line_x3_g2_ParamLimits

0xac53,	// (0x000a29e3) list_medium_line_x3_g2

0x0001,

0x04c3,	// (0x00098253) list_medium_line_x3_g_ParamLimits

0x04c3,	// (0x00098253) list_medium_line_x3_g

0xb5ed,	// (0x000a337d) list_medium_line_x3_t1_ParamLimits

0xb5ed,	// (0x000a337d) list_medium_line_x3_t1

0xb601,	// (0x000a3391) thumb_sp_fs_scroll_pane_g1

0xb60a,	// (0x000a339a) thumb_sp_fs_scroll_pane_g2

0xb613,	// (0x000a33a3) thumb_sp_fs_scroll_pane_g3

0x0002,

0x04c8,	// (0x00098258) thumb_sp_fs_scroll_pane_g

0xb601,	// (0x000a3391) bg_sp_fs_scroll_pane_g1

0xb60a,	// (0x000a339a) bg_sp_fs_scroll_pane_g2

0xb613,	// (0x000a33a3) bg_sp_fs_scroll_pane_g3

0x0002,

0x04c8,	// (0x00098258) bg_sp_fs_scroll_pane_g

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g4_g1

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g4_g2

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g4_g3

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x000a6f51) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x000a6f51) list_medium_line_x2_t3_g4_g

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g4_t1

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g4_t2

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x000a6f45) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x000a6f45) list_medium_line_x2_t3_g4_t

0xc582,	// (0x000a4312) list_medium_line_g2_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_g2_g1

0xc582,	// (0x000a4312) list_medium_line_g2_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x000a6f4c) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x000a6f4c) list_medium_line_g2_g

0xc5ca,	// (0x000a435a) list_medium_line_g2_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_g2_t1

0xc582,	// (0x000a4312) list_medium_line_t3_g2_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t3_g2_g1

0xc582,	// (0x000a4312) list_medium_line_t3_g2_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x000a6f4c) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x000a6f4c) list_medium_line_t3_g2_g

0xc5ca,	// (0x000a435a) list_medium_line_t3_g2_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t3_g2_t1

0xc5ca,	// (0x000a435a) list_medium_line_t3_g2_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t3_g2_t2

0xc5ca,	// (0x000a435a) list_medium_line_t3_g2_t3_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x000a6f45) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x000a6f45) list_medium_line_t3_g2_t

0xc5c0,	// (0x000a4350) list_medium_line_right_icon_g1

0xcd3a,	// (0x000a4aca) list_medium_line_right_icon_t1

0xc582,	// (0x000a4312) list_medium_line_t2_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t2_g1

0xc5ca,	// (0x000a435a) list_medium_line_t2_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t2_t1

0xc5ca,	// (0x000a435a) list_medium_line_t2_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x000a6f21) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x000a6f21) list_medium_line_t2_t

0xc582,	// (0x000a4312) list_medium_line_t3_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t3_g1

0xc5ca,	// (0x000a435a) list_medium_line_t3_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t3_t1

0xc5ca,	// (0x000a435a) list_medium_line_t3_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t3_t2

0xc5ca,	// (0x000a435a) list_medium_line_t3_t3_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x000a6f45) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x000a6f45) list_medium_line_t3_t

0xc582,	// (0x000a4312) list_medium_line_g3_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_g3_g1

0xc582,	// (0x000a4312) list_medium_line_g3_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_g3_g2

0xc582,	// (0x000a4312) list_medium_line_g3_g3_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x000a6f3e) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x000a6f3e) list_medium_line_g3_g

0xc5ca,	// (0x000a435a) list_medium_line_g3_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_g3_t1

0xc582,	// (0x000a4312) list_medium_line_t2_g3_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t2_g3_g1

0xc582,	// (0x000a4312) list_medium_line_t2_g3_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t2_g3_g2

0xc582,	// (0x000a4312) list_medium_line_t2_g3_g3_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x000a6f3e) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x000a6f3e) list_medium_line_t2_g3_g

0xc5ca,	// (0x000a435a) list_medium_line_t2_g3_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t2_g3_t1

0xc5ca,	// (0x000a435a) list_medium_line_t2_g3_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x000a6f21) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x000a6f21) list_medium_line_t2_g3_t

0xc582,	// (0x000a4312) list_medium_line_t3_g3_g1_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t3_g3_g1

0xc582,	// (0x000a4312) list_medium_line_t3_g3_g2_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t3_g3_g2

0xc582,	// (0x000a4312) list_medium_line_t3_g3_g3_ParamLimits

0xc582,	// (0x000a4312) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x000a6f3e) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x000a6f3e) list_medium_line_t3_g3_g

0xc5ca,	// (0x000a435a) list_medium_line_t3_g3_t1_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t3_g3_t1

0xc5ca,	// (0x000a435a) list_medium_line_t3_g3_t2_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t3_g3_t2

0xc5ca,	// (0x000a435a) list_medium_line_t3_g3_t3_ParamLimits

0xc5ca,	// (0x000a435a) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x000a6f45) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x000a6f45) list_medium_line_t3_g3_t

0xc5c0,	// (0x000a4350) list_medium_line_right_iconx2_g1

0xc5c0,	// (0x000a4350) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x000a6e3f) list_medium_line_right_iconx2_g

0xcd3a,	// (0x000a4aca) list_medium_line_right_iconx2_t1

0xc5c0,	// (0x000a4350) list_medium_line_t2_right_iconx2_g1

0xc5c0,	// (0x000a4350) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x000a6e3f) list_medium_line_t2_right_iconx2_g

0xcd3a,	// (0x000a4aca) list_medium_line_t2_right_iconx2_t1

0xcd3a,	// (0x000a4aca) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfaf9,	// (0x000a7889) list_medium_line_t2_right_iconx2_t

0xcd3a,	// (0x000a4aca) list_medium_line_x4_t4_t1

0xcd3a,	// (0x000a4aca) list_medium_line_x4_t4_t2

0xcd3a,	// (0x000a4aca) list_medium_line_x4_t4_t3

0xcd3a,	// (0x000a4aca) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x000a700e) list_medium_line_x4_t4_t

0x74b8,	// (0x0009f248) tport_appsw_pane_ParamLimits

0x74b8,	// (0x0009f248) tport_appsw_pane

0x74d0,	// (0x0009f260) tport_contact_pane_ParamLimits

0x74d0,	// (0x0009f260) tport_contact_pane

0x74e8,	// (0x0009f278) tport_listscroll_pane_ParamLimits

0x74e8,	// (0x0009f278) tport_listscroll_pane

0x7502,	// (0x0009f292) cell_tport_appsw_pane_ParamLimits

0x7502,	// (0x0009f292) cell_tport_appsw_pane

0xd2e0,	// (0x000a5070) tport_appsw_pane_g1_ParamLimits

0xd2e0,	// (0x000a5070) tport_appsw_pane_g1

0xb61c,	// (0x000a33ac) tport_contact_pane_g1

0xb018,	// (0x000a2da8) tport_contact_pane_t1

0xb625,	// (0x000a33b5) tport_contact_pane_t2

0x0001,

0x04cf,	// (0x0009825f) tport_contact_pane_t

0xb633,	// (0x000a33c3) list_tport_pane

0xb63c,	// (0x000a33cc) scroll_pane_cp_030

0x754a,	// (0x0009f2da) cell_tport_appsw_pane_g1

0x755a,	// (0x0009f2ea) cell_tport_appsw_pane_t1

0x7568,	// (0x0009f2f8) grid_highlight_pane_cp019

0x7570,	// (0x0009f300) list_tport_double_graphic_pane_ParamLimits

0x7570,	// (0x0009f300) list_tport_double_graphic_pane

0xc51b,	// (0x000a42ab) list_highlight_pane_cp023_ParamLimits

0xc51b,	// (0x000a42ab) list_highlight_pane_cp023

0x757d,	// (0x0009f30d) list_tport_double_graphic_pane_g1_ParamLimits

0x757d,	// (0x0009f30d) list_tport_double_graphic_pane_g1

0x758a,	// (0x0009f31a) list_tport_double_graphic_pane_t1_ParamLimits

0x758a,	// (0x0009f31a) list_tport_double_graphic_pane_t1

0x759f,	// (0x0009f32f) list_tport_double_graphic_pane_t2_ParamLimits

0x759f,	// (0x0009f32f) list_tport_double_graphic_pane_t2

0x0001,

0xfb29,	// (0x000a78b9) list_tport_double_graphic_pane_t_ParamLimits

0xfb29,	// (0x000a78b9) list_tport_double_graphic_pane_t

0xac16,	// (0x000a29a6) main_cale_note_pane

0x5197,	// (0x0009cf27) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5197,	// (0x0009cf27) cell_vitu2_function_top_wide_pane_cp01

0x6e26,	// (0x0009ebb6) wait_bar_pane_cp05_ParamLimits

0xc51b,	// (0x000a42ab) listscroll_cmail_pane

0xb64d,	// (0x000a33dd) list_cmail_pane

0x75b1,	// (0x0009f341) list_cmail_body_pane

0x75c6,	// (0x0009f356) list_single_cmail_header_caption_pane

0x75dc,	// (0x0009f36c) list_single_cmail_header_detail_pane_ParamLimits

0x75dc,	// (0x0009f36c) list_single_cmail_header_detail_pane

0xb664,	// (0x000a33f4) list_single_cmail_header_caption_pane_t1

0x7609,	// (0x0009f399) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7609,	// (0x0009f399) list_single_cmail_header_detail_pane_g1

0xabd4,	// (0x000a2964) list_single_cmail_header_detail_pane_g2_ParamLimits

0xabd4,	// (0x000a2964) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb2e,	// (0x000a78be) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb2e,	// (0x000a78be) list_single_cmail_header_detail_pane_g

0x7621,	// (0x0009f3b1) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7621,	// (0x0009f3b1) list_single_cmail_header_detail_pane_t1

0x7683,	// (0x0009f413) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7683,	// (0x0009f413) list_single_cmail_header_editor_pane_bg

0xb175,	// (0x000a2f05) list_cmail_body_pane_g1

0xb688,	// (0x000a3418) list_cmail_body_pane_t1

0x52e4,	// (0x0009d074) list_single_cmail_header_editor_pane_bg_g1

0xca10,	// (0x000a47a0) list_single_cmail_header_editor_pane_bg_g1_copy1

0x52f4,	// (0x0009d084) list_single_cmail_header_editor_pane_bg_g1_copy2

0x52ec,	// (0x0009d07c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xa623,	// (0x000a23b3) list_single_cmail_header_editor_pane_bg_g1_copy4

0x5314,	// (0x0009d0a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x5304,	// (0x0009d094) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x530c,	// (0x0009d09c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc9f0,	// (0x000a4780) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x769c,	// (0x0009f42c) calenote_gesture_pane_ParamLimits

0x769c,	// (0x0009f42c) calenote_gesture_pane

0x76bc,	// (0x0009f44c) calenote_window_pane_ParamLimits

0x76bc,	// (0x0009f44c) calenote_window_pane

0xb696,	// (0x000a3426) popup_note_window_cp01

0x76d8,	// (0x0009f468) calenote_swipe_1_pane_ParamLimits

0x76d8,	// (0x0009f468) calenote_swipe_1_pane

0x7098,	// (0x0009ee28) calenote_swipe_2_pane_ParamLimits

0x7098,	// (0x0009ee28) calenote_swipe_2_pane

0xb4c1,	// (0x000a3251) calenote_swipe_1_pane_g1_ParamLimits

0xb4c1,	// (0x000a3251) calenote_swipe_1_pane_g1

0xb6a8,	// (0x000a3438) calenote_swipe_1_pane_g2_ParamLimits

0xb6a8,	// (0x000a3438) calenote_swipe_1_pane_g2

0x0001,

0x04ec,	// (0x0009827c) calenote_swipe_1_pane_g_ParamLimits

0x04ec,	// (0x0009827c) calenote_swipe_1_pane_g

0xb6b4,	// (0x000a3444) calenote_swipe_1_pane_t1_ParamLimits

0xb6b4,	// (0x000a3444) calenote_swipe_1_pane_t1

0xb4c1,	// (0x000a3251) calenote_swipe_2_pane_g1_ParamLimits

0xb4c1,	// (0x000a3251) calenote_swipe_2_pane_g1

0xb6d3,	// (0x000a3463) calenote_swipe_2_pane_g2_ParamLimits

0xb6d3,	// (0x000a3463) calenote_swipe_2_pane_g2

0x0001,

0x04f1,	// (0x00098281) calenote_swipe_2_pane_g_ParamLimits

0x04f1,	// (0x00098281) calenote_swipe_2_pane_g

0xb6df,	// (0x000a346f) calenote_swipe_2_pane_t1_ParamLimits

0xb6df,	// (0x000a346f) calenote_swipe_2_pane_t1

0xac16,	// (0x000a29a6) main_mup_navstr_pane

0x4037,	// (0x0009bdc7) main_mup3_pane_t7_ParamLimits

0x4037,	// (0x0009bdc7) main_mup3_pane_t7

0xa238,	// (0x000a1fc8) main_mp4_pane_g6_ParamLimits

0xa238,	// (0x000a1fc8) main_mp4_pane_g6

0xa462,	// (0x000a21f2) main_image3_pane_t4_ParamLimits

0xa462,	// (0x000a21f2) main_image3_pane_t4

0x76ed,	// (0x0009f47d) popup_navstr_preview_pane_ParamLimits

0x76ed,	// (0x0009f47d) popup_navstr_preview_pane

0x7701,	// (0x0009f491) scroll_navstr_pane_ParamLimits

0x7701,	// (0x0009f491) scroll_navstr_pane

0xac16,	// (0x000a29a6) bg_popup_preview_window_pane_cp04

0xb706,	// (0x000a3496) popup_navstr_preview_pane_t1

0x7715,	// (0x0009f4a5) scroll_navstr_pane_g1_ParamLimits

0x7715,	// (0x0009f4a5) scroll_navstr_pane_g1

0x7729,	// (0x0009f4b9) scroll_navstr_pane_t1_ParamLimits

0x7729,	// (0x0009f4b9) scroll_navstr_pane_t1

0xb69f,	// (0x000a342f) bg_button_pane_cp014

0xb69f,	// (0x000a342f) bg_button_pane_cp030

0x6f71,	// (0x0009ed01) list_double_fisheye_pane_g4_ParamLimits

0x6f71,	// (0x0009ed01) list_double_fisheye_pane_g4

0x6f7d,	// (0x0009ed0d) list_double_fisheye_pane_g5_ParamLimits

0x6f7d,	// (0x0009ed0d) list_double_fisheye_pane_g5

0x9f8a,	// (0x000a1d1a) sp_fs_scroll_pane_cp03

0xb596,	// (0x000a3326) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb5a2,	// (0x000a3332) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfafe,	// (0x000a788e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7142,	// (0x0009eed2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb65c,	// (0x000a33ec) sp_fs_scroll_pane_cp02

0xc718,	// (0x000a44a8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc718,	// (0x000a44a8) popup_sp_fs_calendar_preview_list_single_pane

0xac16,	// (0x000a29a6) main_cam6_pano_pane

0x9eac,	// (0x000a1c3c) main_mup3_pane_ParamLimits

0xac16,	// (0x000a29a6) main_phacti_pane

0x6cf9,	// (0x0009ea89) bg_button_pane_cp11

0x6d13,	// (0x0009eaa3) main_mobtv_info_pane_g2_ParamLimits

0x6d13,	// (0x0009eaa3) main_mobtv_info_pane_g2

0x0001,

0xfab9,	// (0x000a7849) main_mobtv_info_pane_g_ParamLimits

0xfab9,	// (0x000a7849) main_mobtv_info_pane_g

0xc5ca,	// (0x000a435a) sc_clock_pane_t5_ParamLimits

0xc5ca,	// (0x000a435a) sc_clock_pane_t5

0xd2e0,	// (0x000a5070) main_radioblah_pane_g1_ParamLimits

0xd2ee,	// (0x000a507e) main_radioblah_pane_t3_ParamLimits

0xd2ee,	// (0x000a507e) main_radioblah_pane_t3

0xd2ee,	// (0x000a507e) main_radioblah_pane_t4_ParamLimits

0xd2ee,	// (0x000a507e) main_radioblah_pane_t4

0xc51b,	// (0x000a42ab) main_radioblah_text_pane_ParamLimits

0xc51b,	// (0x000a42ab) main_radioblah_text_pane

0xb3b9,	// (0x000a3149) main_radioblah_info_pane_g1_ParamLimits

0xb3fd,	// (0x000a318d) main_radioblah_info_pane_t4_ParamLimits

0xb3fd,	// (0x000a318d) main_radioblah_info_pane_t4

0xc51b,	// (0x000a42ab) main_sp_fs_calendar_pane

0x7740,	// (0x0009f4d0) main_phacti_pane_g1

0x7748,	// (0x0009f4d8) phacti_note_pane_ParamLimits

0x7748,	// (0x0009f4d8) phacti_note_pane

0xb71d,	// (0x000a34ad) phacti_term_pane_ParamLimits

0xb71d,	// (0x000a34ad) phacti_term_pane

0xb732,	// (0x000a34c2) phacti_note_pane_t1_ParamLimits

0xb732,	// (0x000a34c2) phacti_note_pane_t1

0x775c,	// (0x0009f4ec) phacti_term_pane_g1

0x7764,	// (0x0009f4f4) phacti_term_pane_t1_ParamLimits

0x7764,	// (0x0009f4f4) phacti_term_pane_t1

0xb749,	// (0x000a34d9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc7b7,	// (0x000a4547) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x04fb,	// (0x0009828b) popup_sp_fs_calendar_preview_list_single_pane_g

0xb751,	// (0x000a34e1) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb751,	// (0x000a34e1) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb767,	// (0x000a34f7) aid_popup_sp_fs_bg_corner_pane

0xc5c0,	// (0x000a4350) popup_sp_fs_calendar_preview_bg_pane_g1

0xac16,	// (0x000a29a6) popup_sp_fs_calendar_preview_bg_pane

0xb76f,	// (0x000a34ff) popup_sp_fs_calendar_preview_list_pane

0xd302,	// (0x000a5092) bg_main_sp_fs_cale_pane_ParamLimits

0xd302,	// (0x000a5092) bg_main_sp_fs_cale_pane

0x77f8,	// (0x0009f588) listscroll_cale_mrui_pane_ParamLimits

0x77f8,	// (0x0009f588) listscroll_cale_mrui_pane

0x780d,	// (0x0009f59d) listscroll_sp_fs_schedule_track_pane

0x7816,	// (0x0009f5a6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7816,	// (0x0009f5a6) main_sp_fs_ctrlbar_pane_cp01

0xb777,	// (0x000a3507) main_sp_fs_ribbon_pane

0x7829,	// (0x0009f5b9) popup_sp_fs_cale_preview_window

0x783b,	// (0x0009f5cb) list_single_sp_fs_schedule_track_pane_ParamLimits

0x783b,	// (0x0009f5cb) list_single_sp_fs_schedule_track_pane

0xc51b,	// (0x000a42ab) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc51b,	// (0x000a42ab) bg_sp_fs_highlight_list_pane_cp03

0x784e,	// (0x0009f5de) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x784e,	// (0x0009f5de) list_single_sp_fs_schedule_track_pane_g1

0x785a,	// (0x0009f5ea) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x785a,	// (0x0009f5ea) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb3f,	// (0x000a78cf) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb3f,	// (0x000a78cf) list_single_sp_fs_schedule_track_pane_g

0x7866,	// (0x0009f5f6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7866,	// (0x0009f5f6) list_single_sp_fs_schedule_track_pane_t1

0x7880,	// (0x0009f610) sp_fs_schedule_track_pane_ParamLimits

0x7880,	// (0x0009f610) sp_fs_schedule_track_pane

0xb77f,	// (0x000a350f) sp_fs_schedule_track_pane_g1

0xb787,	// (0x000a3517) sp_fs_schedule_track_pane_g2

0xb78f,	// (0x000a351f) sp_fs_schedule_track_pane_g3

0xb797,	// (0x000a3527) sp_fs_schedule_track_pane_g4

0xb79f,	// (0x000a352f) sp_fs_schedule_track_pane_g5

0x0004,

0x0505,	// (0x00098295) sp_fs_schedule_track_pane_g

0x52e4,	// (0x0009d074) bg_sp_fs_schedule_viewer_highlight_g1

0xca10,	// (0x000a47a0) bg_sp_fs_schedule_viewer_highlight_g2

0x52ec,	// (0x0009d07c) bg_sp_fs_schedule_viewer_highlight_g3

0x52f4,	// (0x0009d084) bg_sp_fs_schedule_viewer_highlight_g4

0xa623,	// (0x000a23b3) bg_sp_fs_schedule_viewer_highlight_g5

0x5304,	// (0x0009d094) bg_sp_fs_schedule_viewer_highlight_g6

0x530c,	// (0x0009d09c) bg_sp_fs_schedule_viewer_highlight_g7

0x5314,	// (0x0009d0a4) bg_sp_fs_schedule_viewer_highlight_g8

0xc9f0,	// (0x000a4780) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb44,	// (0x000a78d4) bg_sp_fs_schedule_viewer_highlight_g

0xac16,	// (0x000a29a6) bg_main_sp_fs_ribbon_pane

0x7891,	// (0x0009f621) main_sp_fs_ribbon_pane_g1

0xb7a7,	// (0x000a3537) main_sp_fs_ribbon_pane_t1

0x789a,	// (0x0009f62a) main_sp_fs_ribbon_pane_t2

0xb7b6,	// (0x000a3546) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb57,	// (0x000a78e7) main_sp_fs_ribbon_pane_t

0xb7c5,	// (0x000a3555) main_sp_fs_ribbon_scheduler_pane

0xb7cd,	// (0x000a355d) bg_main_sp_fs_ribbon_pane_g1

0xb7d6,	// (0x000a3566) bg_main_sp_fs_ribbon_pane_g2

0xb7df,	// (0x000a356f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x052a,	// (0x000982ba) bg_main_sp_fs_ribbon_pane_g

0xb7e7,	// (0x000a3577) main_sp_fs_ribbon_scheduler_pane_g1

0xb7f0,	// (0x000a3580) main_sp_fs_ribbon_scheduler_pane_g2

0xb7f9,	// (0x000a3589) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0531,	// (0x000982c1) main_sp_fs_ribbon_scheduler_pane_g

0xb802,	// (0x000a3592) list_cale_mrui_pane

0x78a9,	// (0x0009f639) sp_fs_scroll_pane_cp07_ParamLimits

0x78a9,	// (0x0009f639) sp_fs_scroll_pane_cp07

0x78c5,	// (0x0009f655) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x78c5,	// (0x0009f655) bg_sp_fs_schedule_viewer_highlight

0xb80f,	// (0x000a359f) list_single_sp_fs_schedule_track_pane_cp01

0xb817,	// (0x000a35a7) list_sp_fs_schedule_track_pane

0xb81f,	// (0x000a35af) sp_fs_scroll_pane_cp06_ParamLimits

0xb81f,	// (0x000a35af) sp_fs_scroll_pane_cp06

0xc5c0,	// (0x000a4350) bgmain_sp_fs_calendar_pane_g1

0x78d5,	// (0x0009f665) list_single_cale_mrui_pane_ParamLimits

0x78d5,	// (0x0009f665) list_single_cale_mrui_pane

0x78f5,	// (0x0009f685) list_single_cale_mrui_row_pane_ParamLimits

0x78f5,	// (0x0009f685) list_single_cale_mrui_row_pane

0x7902,	// (0x0009f692) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7902,	// (0x0009f692) list_single_cale_mrui_row_pane_g1

0x793a,	// (0x0009f6ca) list_single_cale_mrui_row_pane_t1_ParamLimits

0x793a,	// (0x0009f6ca) list_single_cale_mrui_row_pane_t1

0x794c,	// (0x0009f6dc) list_single_cale_mrui_row_pane_t2_ParamLimits

0x794c,	// (0x0009f6dc) list_single_cale_mrui_row_pane_t2

0x79b4,	// (0x0009f744) list_single_cale_mrui_row_pane_t3_ParamLimits

0x79b4,	// (0x0009f744) list_single_cale_mrui_row_pane_t3

0x79e3,	// (0x0009f773) list_single_cale_mrui_row_pane_t4_ParamLimits

0x79e3,	// (0x0009f773) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb65,	// (0x000a78f5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb65,	// (0x000a78f5) list_single_cale_mrui_row_pane_t

0x7a12,	// (0x0009f7a2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7a12,	// (0x0009f7a2) list_single_cmail_header_editor_pane_bg_cp01

0x7a40,	// (0x0009f7d0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7a40,	// (0x0009f7d0) list_single_cmail_header_editor_pane_bg_cp02

0xb83e,	// (0x000a35ce) main_radioblah_text_pane_t1_ParamLimits

0xb83e,	// (0x000a35ce) main_radioblah_text_pane_t1

0xb858,	// (0x000a35e8) cam6_indi_pane_cp01

0xb860,	// (0x000a35f0) cam6_mode_pane_cp01

0xb868,	// (0x000a35f8) cam6_pano_pane

0xb871,	// (0x000a3601) cam6_zoom_pane_cp01

0xb879,	// (0x000a3609) cam6_pano_image_pane

0xb884,	// (0x000a3614) cam6_pano_pane_g1

0xb175,	// (0x000a2f05) cam6_pano_pane_g2

0xb88d,	// (0x000a361d) cam6_pano_pane_g3

0xb896,	// (0x000a3626) cam6_pano_pane_g4

0xeeaf,	// (0x000a6c3f) cam6_pano_pane_g5

0xb89f,	// (0x000a362f) cam6_pano_pane_g6

0xabe0,	// (0x000a2970) cam6_pano_pane_g7

0xb8a9,	// (0x000a3639) cam6_pano_pane_g8

0xb8b2,	// (0x000a3642) cam6_pano_pane_g9

0x0008,

0xfb6e,	// (0x000a78fe) cam6_pano_pane_g

0xac16,	// (0x000a29a6) main_browser_tag_pane

0xb6fe,	// (0x000a348e) grid_navstr_albumart_pane

0xb8bd,	// (0x000a364d) cell_navstr_albumart_pane_ParamLimits

0xb8bd,	// (0x000a364d) cell_navstr_albumart_pane

0xb8dd,	// (0x000a366d) cell_navstr_albumart_pane_g1

0xe383,	// (0x000a6113) cell_navstr_albumart_pane_g2

0xe393,	// (0x000a6123) cell_navstr_albumart_pane_g3

0xe38b,	// (0x000a611b) cell_navstr_albumart_pane_g4

0x0003,

0x055b,	// (0x000982eb) cell_navstr_albumart_pane_g

0x7a60,	// (0x0009f7f0) bt_list_pane_ParamLimits

0x7a60,	// (0x0009f7f0) bt_list_pane

0x7a74,	// (0x0009f804) bt_list_pane_t1

0x7a83,	// (0x0009f813) bt_list_pane_t2

0x0001,

0xfb81,	// (0x000a7911) bt_list_pane_t

0xac16,	// (0x000a29a6) main_cale_prevew_pane

0x7a92,	// (0x0009f822) popup_cale_preview_window_ParamLimits

0x7a92,	// (0x0009f822) popup_cale_preview_window

0xc51b,	// (0x000a42ab) bg_popup_preview_window_pane_cp05_ParamLimits

0xc51b,	// (0x000a42ab) bg_popup_preview_window_pane_cp05

0xb8e5,	// (0x000a3675) list_cale_preview_pane_ParamLimits

0xb8e5,	// (0x000a3675) list_cale_preview_pane

0x7aad,	// (0x0009f83d) list_double_cale_preview_pane_ParamLimits

0x7aad,	// (0x0009f83d) list_double_cale_preview_pane

0x7abf,	// (0x0009f84f) list_single_cale_preview_pane_ParamLimits

0x7abf,	// (0x0009f84f) list_single_cale_preview_pane

0x7ad5,	// (0x0009f865) list_single_cale_preview_pane_g1

0x7add,	// (0x0009f86d) list_single_cale_preview_pane_t1_ParamLimits

0x7add,	// (0x0009f86d) list_single_cale_preview_pane_t1

0x7af2,	// (0x0009f882) list_double_cale_preview_pane_g1

0x7afa,	// (0x0009f88a) list_double_cale_preview_pane_t1_ParamLimits

0x7afa,	// (0x0009f88a) list_double_cale_preview_pane_t1

0x7b0f,	// (0x0009f89f) list_double_cale_preview_pane_t2_ParamLimits

0x7b0f,	// (0x0009f89f) list_double_cale_preview_pane_t2

0x0001,

0xfb86,	// (0x000a7916) list_double_cale_preview_pane_t_ParamLimits

0xfb86,	// (0x000a7916) list_double_cale_preview_pane_t

0xac16,	// (0x000a29a6) main_ezdial_pane

0xc51b,	// (0x000a42ab) main_sp_fs_email_pane_ParamLimits

0x70b2,	// (0x0009ee42) cmail_ddmenu_btn01_pane_ParamLimits

0x70b2,	// (0x0009ee42) cmail_ddmenu_btn01_pane

0x70c5,	// (0x0009ee55) cmail_ddmenu_btn02_pane_ParamLimits

0x70c5,	// (0x0009ee55) cmail_ddmenu_btn02_pane

0x70e8,	// (0x0009ee78) cmail_ddmenu_btn03_pane_ParamLimits

0x70e8,	// (0x0009ee78) cmail_ddmenu_btn03_pane

0x7181,	// (0x0009ef11) main_sp_fs_ctrlbar_pane_ParamLimits

0x71a5,	// (0x0009ef35) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x75b1,	// (0x0009f341) list_cmail_body_pane_ParamLimits

0xb672,	// (0x000a3402) bg_button_pane_cp12

0xb67b,	// (0x000a340b) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb67b,	// (0x000a340b) list_single_cmail_header_detail_pane_g3

0x765f,	// (0x0009f3ef) list_single_cmail_header_detail_pane_t2_ParamLimits

0x765f,	// (0x0009f3ef) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb35,	// (0x000a78c5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb35,	// (0x000a78c5) list_single_cmail_header_detail_pane_t

0x7779,	// (0x0009f509) phacti_term_pane_t2_ParamLimits

0x7779,	// (0x0009f509) phacti_term_pane_t2

0x0001,

0xfb3a,	// (0x000a78ca) phacti_term_pane_t_ParamLimits

0xfb3a,	// (0x000a78ca) phacti_term_pane_t

0xb8f1,	// (0x000a3681) aid_size_list_single_double

0x7b27,	// (0x0009f8b7) popup_ezdial_listscroll_window

0xb8fd,	// (0x000a368d) popup_number_entry_window_cp01

0xc7d0,	// (0x000a4560) bg_popup_call_pane_cp09

0xb90a,	// (0x000a369a) ezdial_list_pane

0xb912,	// (0x000a36a2) scroll_pane_cp23

0xd302,	// (0x000a5092) bg_button_pane_cp028_ParamLimits

0xd302,	// (0x000a5092) bg_button_pane_cp028

0x7b3e,	// (0x0009f8ce) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7b3e,	// (0x0009f8ce) cmail_ddmenu_btn01_pane_g1

0x7b4a,	// (0x0009f8da) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7b4a,	// (0x0009f8da) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb8b,	// (0x000a791b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb8b,	// (0x000a791b) cmail_ddmenu_btn01_pane_g

0xb91a,	// (0x000a36aa) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb91a,	// (0x000a36aa) cmail_ddmenu_btn01_pane_t1

0xd302,	// (0x000a5092) bg_button_pane_cp029_ParamLimits

0xd302,	// (0x000a5092) bg_button_pane_cp029

0x7b5e,	// (0x0009f8ee) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7b5e,	// (0x0009f8ee) cmail_ddmenu_btn02_pane_g1

0x7b76,	// (0x0009f906) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7b76,	// (0x0009f906) cmail_ddmenu_btn02_pane_t1

0xc51b,	// (0x000a42ab) bg_button_pane_cp031_ParamLimits

0xc51b,	// (0x000a42ab) bg_button_pane_cp031

0x7b5e,	// (0x0009f8ee) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7b5e,	// (0x0009f8ee) cmail_ddmenu_btn03_pane_g1

0x7b76,	// (0x0009f906) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7b76,	// (0x0009f906) cmail_ddmenu_btn03_pane_t1

0xc5ca,	// (0x000a435a) cell_dialer2_keypad_pane_t1_ParamLimits

0xeedd,	// (0x000a6c6d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xeedd,	// (0x000a6c6d) cell_dialer2_keypad_pane_t1_copy1

0x6b1c,	// (0x0009e8ac) ncimui_group_button_pane

0xc51b,	// (0x000a42ab) main_sp_fs_calendar_pane_ParamLimits

0x75c6,	// (0x0009f356) list_single_cmail_header_caption_pane_ParamLimits

0x77ac,	// (0x0009f53c) aid_recal_txt_sm_pane

0xac16,	// (0x000a29a6) mian_recal_day_pane

0x7829,	// (0x0009f5b9) popup_sp_fs_cale_preview_window_ParamLimits

0xb930,	// (0x000a36c0) list_recal_day_pane

0x7bb5,	// (0x0009f945) list_single_recal_day_pane_ParamLimits

0x7bb5,	// (0x0009f945) list_single_recal_day_pane

0xb957,	// (0x000a36e7) list_single_recal_day_pane_g1_ParamLimits

0xb957,	// (0x000a36e7) list_single_recal_day_pane_g1

0x7bc7,	// (0x0009f957) list_single_recal_day_pane_g2_ParamLimits

0x7bc7,	// (0x0009f957) list_single_recal_day_pane_g2

0x7bd3,	// (0x0009f963) list_single_recal_day_pane_g3_ParamLimits

0x7bd3,	// (0x0009f963) list_single_recal_day_pane_g3

0x7bdf,	// (0x0009f96f) list_single_recal_day_pane_g4_ParamLimits

0x7bdf,	// (0x0009f96f) list_single_recal_day_pane_g4

0x7bed,	// (0x0009f97d) list_single_recal_day_pane_g5_ParamLimits

0x7bed,	// (0x0009f97d) list_single_recal_day_pane_g5

0x7c03,	// (0x0009f993) list_single_recal_day_pane_g6_ParamLimits

0x7c03,	// (0x0009f993) list_single_recal_day_pane_g6

0x0004,

0xfb9a,	// (0x000a792a) list_single_recal_day_pane_g_ParamLimits

0xfb9a,	// (0x000a792a) list_single_recal_day_pane_g

0x7c17,	// (0x0009f9a7) list_single_recal_day_pane_t1

0x7c29,	// (0x0009f9b9) list_single_recal_day_pane_t2

0x0001,

0xfba5,	// (0x000a7935) list_single_recal_day_pane_t

0x7c3b,	// (0x0009f9cb) ncimui_query_button_pane_ParamLimits

0x7c3b,	// (0x0009f9cb) ncimui_query_button_pane

0x7c4b,	// (0x0009f9db) ncimui_query_button_pane_t1_ParamLimits

0x7c4b,	// (0x0009f9db) ncimui_query_button_pane_t1

0xb963,	// (0x000a36f3) ncimui_query_button_pane_t2_ParamLimits

0xb963,	// (0x000a36f3) ncimui_query_button_pane_t2

0x0001,

0xfbaa,	// (0x000a793a) ncimui_query_button_pane_t_ParamLimits

0xfbaa,	// (0x000a793a) ncimui_query_button_pane_t

0x7c5e,	// (0x0009f9ee) query_button_pane_ParamLimits

0x7c5e,	// (0x0009f9ee) query_button_pane

0xac16,	// (0x000a29a6) bg_button_pane_cp0028

0xb976,	// (0x000a3706) query_button_pane_t1

0x33ea,	// (0x0009b17a) main_tport_pane_ParamLimits

0x7475,	// (0x0009f205) bg_popup_window_pane_cp01_ParamLimits

0x7475,	// (0x0009f205) bg_popup_window_pane_cp01

0x7490,	// (0x0009f220) heading_pane_cp08_ParamLimits

0x7490,	// (0x0009f220) heading_pane_cp08

0x74a3,	// (0x0009f233) heading_pane_cp07_ParamLimits

0x74a3,	// (0x0009f233) heading_pane_cp07

0x754a,	// (0x0009f2da) cell_tport_appsw_pane_g2

0x0002,

0xfb22,	// (0x000a78b2) cell_tport_appsw_pane_g

0x29c2,	// (0x0009a752) input_candi_list_open_g1

0xcbdb,	// (0x000a496b) list_cale_time_pane_g6_ParamLimits

0xcbdb,	// (0x000a496b) list_cale_time_pane_g6

0x3a0b,	// (0x0009b79b) aid_size_touch_calib_1_ParamLimits

0x3a0b,	// (0x0009b79b) aid_size_touch_calib_1

0x3a1d,	// (0x0009b7ad) aid_size_touch_calib_2_ParamLimits

0x3a1d,	// (0x0009b7ad) aid_size_touch_calib_2

0x3a35,	// (0x0009b7c5) aid_size_touch_calib_3_ParamLimits

0x3a35,	// (0x0009b7c5) aid_size_touch_calib_3

0x3a53,	// (0x0009b7e3) aid_size_touch_calib_4_ParamLimits

0x3a53,	// (0x0009b7e3) aid_size_touch_calib_4

0x3a6b,	// (0x0009b7fb) main_touch_calib_button_group_pane_ParamLimits

0x3a6b,	// (0x0009b7fb) main_touch_calib_button_group_pane

0x3a83,	// (0x0009b813) main_touch_calib_pane_g1_ParamLimits

0x3a95,	// (0x0009b825) main_touch_calib_pane_g2_ParamLimits

0x3aa7,	// (0x0009b837) main_touch_calib_pane_g3_ParamLimits

0x3ab9,	// (0x0009b849) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x000a740f) main_touch_calib_pane_g_ParamLimits

0x3acb,	// (0x0009b85b) main_touch_calib_pane_t1_ParamLimits

0x3ae5,	// (0x0009b875) main_touch_calib_pane_t2_ParamLimits

0x3aff,	// (0x0009b88f) main_touch_calib_pane_t3_ParamLimits

0x3b13,	// (0x0009b8a3) main_touch_calib_pane_t4_ParamLimits

0x3b27,	// (0x0009b8b7) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x000a7418) main_touch_calib_pane_t_ParamLimits

0xec7a,	// (0x000a6a0a) list_single_fp_cale_pane_g3_ParamLimits

0xec7a,	// (0x000a6a0a) list_single_fp_cale_pane_g3

0x9eac,	// (0x000a1c3c) bg_button_pane_cp012_ParamLimits

0x9eac,	// (0x000a1c3c) bg_vkb2_func_pane_cp03_ParamLimits

0x5c20,	// (0x0009d9b0) cell_vitu2_function_top_pane_g1_ParamLimits

0x9eac,	// (0x000a1c3c) bg_vkb2_func_pane_cp04_ParamLimits

0x6aa7,	// (0x0009e837) main_ncimui_button_group_pane_ParamLimits

0x6aa7,	// (0x0009e837) main_ncimui_button_group_pane

0x6b07,	// (0x0009e897) main_ncimui_pane_t3_ParamLimits

0x6b07,	// (0x0009e897) main_ncimui_pane_t3

0xb714,	// (0x000a34a4) phacti_button_group_pane

0xb8f1,	// (0x000a3681) aid_size_list_single_double_ParamLimits

0x7b27,	// (0x0009f8b7) popup_ezdial_listscroll_window_ParamLimits

0xb8fd,	// (0x000a368d) popup_number_entry_window_cp01_ParamLimits

0x7c71,	// (0x0009fa01) phacti_button_pane_ParamLimits

0x7c71,	// (0x0009fa01) phacti_button_pane

0xac16,	// (0x000a29a6) bg_button_pane_cp14

0xb984,	// (0x000a3714) phacti_button_pane_t1

0x7c82,	// (0x0009fa12) main_touch_calib_button_pane_ParamLimits

0x7c82,	// (0x0009fa12) main_touch_calib_button_pane

0xc61e,	// (0x000a43ae) bg_button_pane_cp18_ParamLimits

0xc61e,	// (0x000a43ae) bg_button_pane_cp18

0xb992,	// (0x000a3722) main_touch_calib_button_pane_t1_ParamLimits

0xb992,	// (0x000a3722) main_touch_calib_button_pane_t1

0xb9a8,	// (0x000a3738) main_touch_calib_button_pane_t2_ParamLimits

0xb9a8,	// (0x000a3738) main_touch_calib_button_pane_t2

0x0001,

0x0592,	// (0x00098322) main_touch_calib_button_pane_t_ParamLimits

0x0592,	// (0x00098322) main_touch_calib_button_pane_t

0xac16,	// (0x000a29a6) cell_ncimui_button_pane

0xac16,	// (0x000a29a6) bg_button_pane_cp032

0xb9c6,	// (0x000a3756) cell_ncimui_button_pane_t1

0xa442,	// (0x000a21d2) image3_infobar_pane_ParamLimits

0xa442,	// (0x000a21d2) image3_infobar_pane

0x6e79,	// (0x0009ec09) fs_bigclock_status_pane_ParamLimits

0x6e79,	// (0x0009ec09) fs_bigclock_status_pane

0x6e86,	// (0x0009ec16) main_fs_bigclock_clock_pane_ParamLimits

0x6e86,	// (0x0009ec16) main_fs_bigclock_clock_pane

0x6ea4,	// (0x0009ec34) main_fs_bigclock_indi_pane_ParamLimits

0x6ea4,	// (0x0009ec34) main_fs_bigclock_indi_pane

0x6ed6,	// (0x0009ec66) main_fs_bigclock_swipe_pane_ParamLimits

0x6ed6,	// (0x0009ec66) main_fs_bigclock_swipe_pane

0xac16,	// (0x000a29a6) main_fs_clock_dumped_data

0xb282,	// (0x000a3012) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb282,	// (0x000a3012) list_single_fs_bigclock_indicator_pane_g1

0xb29d,	// (0x000a302d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb29d,	// (0x000a302d) list_single_fs_bigclock_indicator_pane_g2

0xb2b7,	// (0x000a3047) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb2b7,	// (0x000a3047) list_single_fs_bigclock_indicator_pane_g3

0xb2d1,	// (0x000a3061) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb2d1,	// (0x000a3061) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x042e,	// (0x000981be) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x042e,	// (0x000981be) list_single_fs_bigclock_indicator_pane_g

0xb2fc,	// (0x000a308c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb2fc,	// (0x000a308c) list_single_fs_bigclock_indicator_pane_t1

0xb324,	// (0x000a30b4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb324,	// (0x000a30b4) list_single_fs_bigclock_indicator_pane_t2

0xb34c,	// (0x000a30dc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb34c,	// (0x000a30dc) list_single_fs_bigclock_indicator_pane_t3

0xb374,	// (0x000a3104) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb374,	// (0x000a3104) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0439,	// (0x000981c9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0439,	// (0x000981c9) list_single_fs_bigclock_indicator_pane_t

0xb9d4,	// (0x000a3764) image3_infobar_fav_pane_ParamLimits

0xb9d4,	// (0x000a3764) image3_infobar_fav_pane

0xb9e4,	// (0x000a3774) image3_infobar_loc_pane_ParamLimits

0xb9e4,	// (0x000a3774) image3_infobar_loc_pane

0xb9f8,	// (0x000a3788) image3_infobar_time_pane_ParamLimits

0xb9f8,	// (0x000a3788) image3_infobar_time_pane

0xc5c0,	// (0x000a4350) image3_infobar_time_pane_g1

0xba08,	// (0x000a3798) image3_infobar_time_pane_t1

0xc5c0,	// (0x000a4350) image3_infobar_loc_pane_g1

0xba16,	// (0x000a37a6) image3_infobar_loc_pane_g2

0x0001,

0x0597,	// (0x00098327) image3_infobar_loc_pane_g

0xba1e,	// (0x000a37ae) image3_infobar_loc_pane_t1

0xc5c0,	// (0x000a4350) image3_infobar_fav_pane_g1

0xba2c,	// (0x000a37bc) image3_infobar_fav_pane_g2

0x0001,

0x059c,	// (0x0009832c) image3_infobar_fav_pane_g

0xba34,	// (0x000a37c4) fs_bigclock_status_battery_pane

0xba3d,	// (0x000a37cd) fs_bigclock_status_signal_pane

0xba46,	// (0x000a37d6) fs_bigclock_status_title_pane

0xba4f,	// (0x000a37df) fs_bigclock_status_signal_pane_g1

0xba58,	// (0x000a37e8) fs_bigclock_status_signal_pane_g2

0x0001,

0x05a1,	// (0x00098331) fs_bigclock_status_signal_pane_g

0xba60,	// (0x000a37f0) fs_bigclock_status_battery_pane_g1

0xba69,	// (0x000a37f9) fs_bigclock_status_battery_pane_g2

0x0001,

0x05a6,	// (0x00098336) fs_bigclock_status_battery_pane_g

0xba71,	// (0x000a3801) fs_bigclock_status_title_pane_t1

0x7c97,	// (0x0009fa27) main_fs_bigclock_clock_pane_g1

0x7c97,	// (0x0009fa27) main_fs_bigclock_clock_pane_g2

0x7ca8,	// (0x0009fa38) main_fs_bigclock_clock_pane_g3

0x7ca8,	// (0x0009fa38) main_fs_bigclock_clock_pane_g4

0x0003,

0xfbaf,	// (0x000a793f) main_fs_bigclock_clock_pane_g

0x7cbb,	// (0x0009fa4b) main_fs_bigclock_clock_pane_t1

0x7cd1,	// (0x0009fa61) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbb8,	// (0x000a7948) main_fs_bigclock_clock_pane_t

0xbdb6,	// (0x000a3b46) list_single_fs_bigclock_indicator_pane_ParamLimits

0xbdb6,	// (0x000a3b46) list_single_fs_bigclock_indicator_pane

0xbdc7,	// (0x000a3b57) list_single_fs_bigclock_pane_ParamLimits

0xbdc7,	// (0x000a3b57) list_single_fs_bigclock_pane

0xbded,	// (0x000a3b7d) main_fs_bigclock_indicator_pane_t1

0xbdfc,	// (0x000a3b8c) list_single_fs_bigclock_pane_g1

0xbe04,	// (0x000a3b94) list_single_fs_bigclock_pane_t1

0xc5c0,	// (0x000a4350) main_fs_bigclock_swipe_pane_g1

0xbe47,	// (0x000a3bd7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfbc9,	// (0x000a7959) main_fs_bigclock_swipe_pane_g

0xbe4f,	// (0x000a3bdf) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xbe4f,	// (0x000a3bdf) main_fs_bigclock_swipe_pane_t1

0x250f,	// (0x0009a29f) call_type_pane_ParamLimits

0xac16,	// (0x000a29a6) main_btmg_pane

0x792e,	// (0x0009f6be) list_single_cale_mrui_row_pane_g2_ParamLimits

0x792e,	// (0x0009f6be) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb5e,	// (0x000a78ee) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb5e,	// (0x000a78ee) list_single_cale_mrui_row_pane_g

0x7ba4,	// (0x0009f934) list_recal_vselct_arw_lo_pane

0xb94f,	// (0x000a36df) list_recal_vselct_arw_up_pane

0x7bac,	// (0x0009f93c) list_recal_vselct_pane

0x7d2b,	// (0x0009fabb) btmg_button_pane

0x7d35,	// (0x0009fac5) main_btmg_pane_g1

0xac16,	// (0x000a29a6) bg_button_pane_cp044

0xbe6c,	// (0x000a3bfc) btmg_button_pane_t1

0xe4d3,	// (0x000a6263) aid_listscroll_gen

0xc51b,	// (0x000a42ab) main_cntbar_detail_pane

0xb645,	// (0x000a33d5) list_cmail_folder_pane

0x9f8a,	// (0x000a1d1a) sp_fs_scroll_pane_cp03_ParamLimits

0x7d3f,	// (0x0009facf) list_single_fs_dyc_pane_cp01_ParamLimits

0x7d3f,	// (0x0009facf) list_single_fs_dyc_pane_cp01

0xbe7a,	// (0x000a3c0a) aid_size_cmail_indent

0x7d54,	// (0x0009fae4) list_single_dyc_row_pane_cp01

0x7d89,	// (0x0009fb19) cntbar_detail_list_pane_ParamLimits

0x7d89,	// (0x0009fb19) cntbar_detail_list_pane

0x7dd5,	// (0x0009fb65) main_cntbar_detail_cont_pane_ParamLimits

0x7dd5,	// (0x0009fb65) main_cntbar_detail_cont_pane

0x9f8a,	// (0x000a1d1a) scroll_pane_cp032_ParamLimits

0x9f8a,	// (0x000a1d1a) scroll_pane_cp032

0x7de9,	// (0x0009fb79) cntbar_detail_list_event_pane_ParamLimits

0x7de9,	// (0x0009fb79) cntbar_detail_list_event_pane

0x7d99,	// (0x0009fb29) cntbar_detail_list_shct_pane

0xca5e,	// (0x000a47ee) aid_list_gen

0xbe83,	// (0x000a3c13) aid_scroll

0xbe8c,	// (0x000a3c1c) aid_size_touch_scroll_bar

0x6f3c,	// (0x0009eccc) aid_list_double

0xbe95,	// (0x000a3c25) aid_list_single

0xbe95,	// (0x000a3c25) aid_list_single_lg

0x7df9,	// (0x0009fb89) aid_list_z_g_a_sm

0xabe8,	// (0x000a2978) aid_list_z_g_d

0x7e01,	// (0x0009fb91) aid_txt_z_prm

0x7e0f,	// (0x0009fb9f) aid_txt_z_prm_cp01

0x7e1d,	// (0x0009fbad) aid_txt_z_sec

0x7e2b,	// (0x0009fbbb) main_cntbar_detail_cont_pane_g1_ParamLimits

0x7e2b,	// (0x0009fbbb) main_cntbar_detail_cont_pane_g1

0x7e3f,	// (0x0009fbcf) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7e3f,	// (0x0009fbcf) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbce,	// (0x000a795e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbce,	// (0x000a795e) main_cntbar_detail_cont_pane_g

0xbe9e,	// (0x000a3c2e) main_cntbar_detail_cont_pane_t1

0xbeac,	// (0x000a3c3c) main_cntbar_detail_cont_pane_t2

0xbeba,	// (0x000a3c4a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfbd3,	// (0x000a7963) main_cntbar_detail_cont_pane_t

0x7e4f,	// (0x0009fbdf) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7e4f,	// (0x0009fbdf) cell_cntbar_detail_list_shct_pane

0xbec8,	// (0x000a3c58) cntbar_detail_list_shct_pane_g1

0xbed1,	// (0x000a3c61) cntbar_detail_list_shct_pane_g2

0x0001,

0xfbda,	// (0x000a796a) cntbar_detail_list_shct_pane_g

0x7e63,	// (0x0009fbf3) cntbar_detail_list_event_pane_g1_ParamLimits

0x7e63,	// (0x0009fbf3) cntbar_detail_list_event_pane_g1

0x7e6f,	// (0x0009fbff) cntbar_detail_list_event_pane_g2_ParamLimits

0x7e6f,	// (0x0009fbff) cntbar_detail_list_event_pane_g2

0x0005,

0xfbdf,	// (0x000a796f) cntbar_detail_list_event_pane_g_ParamLimits

0xfbdf,	// (0x000a796f) cntbar_detail_list_event_pane_g

0x7edb,	// (0x0009fc6b) cntbar_detail_list_event_pane_t1_ParamLimits

0x7edb,	// (0x0009fc6b) cntbar_detail_list_event_pane_t1

0x7ef0,	// (0x0009fc80) cntbar_detail_list_event_pane_t2_ParamLimits

0x7ef0,	// (0x0009fc80) cntbar_detail_list_event_pane_t2

0x0002,

0xfbec,	// (0x000a797c) cntbar_detail_list_event_pane_t_ParamLimits

0xfbec,	// (0x000a797c) cntbar_detail_list_event_pane_t

0xc5c0,	// (0x000a4350) cell_cntbar_detail_list_shct_pane_g1

0xd1e1,	// (0x000a4f71) navi_pane_mv_g3

0xc51b,	// (0x000a42ab) main_cntbar_detail_pane_ParamLimits

0xac16,	// (0x000a29a6) main_notif_wgt_pane

0xa1c2,	// (0x000a1f52) aid_tch_main_mp4_pane_g4

0xa43a,	// (0x000a21ca) popup_slider_window_cp02

0x7b9a,	// (0x0009f92a) list_recal_day_event_pane

0x7d5d,	// (0x0009faed) cntbar_detail_btn_pane_ParamLimits

0x7d5d,	// (0x0009faed) cntbar_detail_btn_pane

0x7d73,	// (0x0009fb03) cntbar_detail_btn_pane_cp01_ParamLimits

0x7d73,	// (0x0009fb03) cntbar_detail_btn_pane_cp01

0x7d99,	// (0x0009fb29) cntbar_detail_list_shct_pane_ParamLimits

0x7da9,	// (0x0009fb39) cntbar_detail_pane_g1_ParamLimits

0x7da9,	// (0x0009fb39) cntbar_detail_pane_g1

0x7db9,	// (0x0009fb49) cntbar_detail_pane_t1_ParamLimits

0x7db9,	// (0x0009fb49) cntbar_detail_pane_t1

0x7e7b,	// (0x0009fc0b) cntbar_detail_list_event_pane_g3_ParamLimits

0x7e7b,	// (0x0009fc0b) cntbar_detail_list_event_pane_g3

0x7e93,	// (0x0009fc23) cntbar_detail_list_event_pane_g4_ParamLimits

0x7e93,	// (0x0009fc23) cntbar_detail_list_event_pane_g4

0x7eab,	// (0x0009fc3b) cntbar_detail_list_event_pane_g5_ParamLimits

0x7eab,	// (0x0009fc3b) cntbar_detail_list_event_pane_g5

0x7ec3,	// (0x0009fc53) cntbar_detail_list_event_pane_g6_ParamLimits

0x7ec3,	// (0x0009fc53) cntbar_detail_list_event_pane_g6

0x7f05,	// (0x0009fc95) cntbar_detail_list_event_pane_t3_ParamLimits

0x7f05,	// (0x0009fc95) cntbar_detail_list_event_pane_t3

0x7f17,	// (0x0009fca7) popup_notif_wgt_window_ParamLimits

0x7f17,	// (0x0009fca7) popup_notif_wgt_window

0x7f30,	// (0x0009fcc0) popup_submenu_window_cp01_ParamLimits

0x7f30,	// (0x0009fcc0) popup_submenu_window_cp01

0xc7d0,	// (0x000a4560) bg_popup_window_pane_cp10

0xbeda,	// (0x000a3c6a) listscroll_notif_wgt_pane

0xbeec,	// (0x000a3c7c) list_notif_wgt_window

0xbef5,	// (0x000a3c85) scroll_pane_cp033

0x7f46,	// (0x0009fcd6) list_notif_wgt_row_pane_ParamLimits

0x7f46,	// (0x0009fcd6) list_notif_wgt_row_pane

0xbefe,	// (0x000a3c8e) aid_size_list_notif_wgt_del

0xbf0b,	// (0x000a3c9b) list_notif_wgt_row_pane_g1

0xbf17,	// (0x000a3ca7) list_notif_wgt_row_pane_g2

0xbf26,	// (0x000a3cb6) list_notif_wgt_row_pane_g3

0x0002,

0xfbf3,	// (0x000a7983) list_notif_wgt_row_pane_g

0xbf33,	// (0x000a3cc3) list_notif_wgt_row_pane_t1

0xbf49,	// (0x000a3cd9) list_notif_wgt_row_pane_t2

0xbf5b,	// (0x000a3ceb) list_notif_wgt_row_pane_t3

0x0002,

0xfbfa,	// (0x000a798a) list_notif_wgt_row_pane_t

0xa65d,	// (0x000a23ed) list_recal_day_event_pane_g1

0xbf6d,	// (0x000a3cfd) list_recal_day_event_pane_t1

0xac16,	// (0x000a29a6) bg_button_pane_cp045

0xbf7c,	// (0x000a3d0c) cntbar_detail_btn_pane_t1

0xd302,	// (0x000a5092) main_callh_pane_ParamLimits

0xd302,	// (0x000a5092) main_callh_pane

0xac16,	// (0x000a29a6) main_coverflow0_pane

0xac16,	// (0x000a29a6) main_wgtman_pane

0x6eee,	// (0x0009ec7e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6eee,	// (0x0009ec7e) main_fs_bigclock_unlock_btn_pane

0x7542,	// (0x0009f2d2) bg_button_pane_cp16

0x7552,	// (0x0009f2e2) cell_tport_appsw_pane_g3

0x7f56,	// (0x0009fce6) cf0_flow_pane_ParamLimits

0x7f56,	// (0x0009fce6) cf0_flow_pane

0xbf8a,	// (0x000a3d1a) listscroll_cf0_pane

0xbf95,	// (0x000a3d25) main_cf0_pane_g1

0x7f6b,	// (0x0009fcfb) main_cf0_pane_t1_ParamLimits

0x7f6b,	// (0x0009fcfb) main_cf0_pane_t1

0x7f82,	// (0x0009fd12) main_cf0_pane_t2_ParamLimits

0x7f82,	// (0x0009fd12) main_cf0_pane_t2

0x0001,

0xfc06,	// (0x000a7996) main_cf0_pane_t_ParamLimits

0xfc06,	// (0x000a7996) main_cf0_pane_t

0xbfa7,	// (0x000a3d37) scroll_pane_cp11

0x7f99,	// (0x0009fd29) cf0_flow_pane_g1

0x7fa1,	// (0x0009fd31) cf0_flow_pane_g2

0x0001,

0xfc0b,	// (0x000a799b) cf0_flow_pane_g

0x7fa9,	// (0x0009fd39) cf0_flow_pane_t1

0xac16,	// (0x000a29a6) main_call6_pane

0xac16,	// (0x000a29a6) main_calllock_pane

0x7fb7,	// (0x0009fd47) call6_btn_grp_pane_ParamLimits

0x7fb7,	// (0x0009fd47) call6_btn_grp_pane

0x7fd1,	// (0x0009fd61) call6_pane_g1_ParamLimits

0x7fd1,	// (0x0009fd61) call6_pane_g1

0x7fe7,	// (0x0009fd77) popup_call6_1st_window_ParamLimits

0x7fe7,	// (0x0009fd77) popup_call6_1st_window

0x7ff8,	// (0x0009fd88) popup_call6_2nd_window_ParamLimits

0x7ff8,	// (0x0009fd88) popup_call6_2nd_window

0x8009,	// (0x0009fd99) cell_call6_btn_pane_ParamLimits

0x8009,	// (0x0009fd99) cell_call6_btn_pane

0xc7d0,	// (0x000a4560) bg_popup_call2_in_pane_cp03

0xbfb2,	// (0x000a3d42) popup_call6_1st_window_g1

0xbfba,	// (0x000a3d4a) popup_call6_1st_window_g2

0xbfc2,	// (0x000a3d52) popup_call6_1st_window_g3

0x0002,

0xfc10,	// (0x000a79a0) popup_call6_1st_window_g

0xbfca,	// (0x000a3d5a) popup_call6_1st_window_t1

0xbfd9,	// (0x000a3d69) popup_call6_1st_window_t2

0xbfe7,	// (0x000a3d77) popup_call6_1st_window_t3

0x0002,

0xfc17,	// (0x000a79a7) popup_call6_1st_window_t

0xc7d0,	// (0x000a4560) bg_popup_call2_in_pane_cp04

0xbff5,	// (0x000a3d85) popup_call6_2nd_window_g1

0xbffd,	// (0x000a3d8d) popup_call6_2nd_window_g2

0xc005,	// (0x000a3d95) popup_call6_2nd_window_g3

0x0002,

0xfc1e,	// (0x000a79ae) popup_call6_2nd_window_g

0xc00d,	// (0x000a3d9d) popup_call6_2nd_window_t1

0x9eba,	// (0x000a1c4a) bg_button_pane_cp15

0xabf0,	// (0x000a2980) cell_call6_btn_pane_g1

0xabf9,	// (0x000a2989) cell_call6_btn_pane_t1

0x801c,	// (0x0009fdac) listscroll_wgtman_pane_ParamLimits

0x801c,	// (0x0009fdac) listscroll_wgtman_pane

0x803d,	// (0x0009fdcd) wgtman_btn_pane_ParamLimits

0x803d,	// (0x0009fdcd) wgtman_btn_pane

0xcfe8,	// (0x000a4d78) aid_scroll_copy1

0xc01c,	// (0x000a3dac) list_wgtman_pane

0x8080,	// (0x0009fe10) wgtman_btn_pane_g1_ParamLimits

0x8080,	// (0x0009fe10) wgtman_btn_pane_g1

0x80ac,	// (0x0009fe3c) wgtman_btn_pane_t1_ParamLimits

0x80ac,	// (0x0009fe3c) wgtman_btn_pane_t1

0xc026,	// (0x000a3db6) wgtman_btn_pane_t2_ParamLimits

0xc026,	// (0x000a3db6) wgtman_btn_pane_t2

0x0001,

0xfc25,	// (0x000a79b5) wgtman_btn_pane_t_ParamLimits

0xfc25,	// (0x000a79b5) wgtman_btn_pane_t

0x80e9,	// (0x0009fe79) listrow_wgtman_pane_ParamLimits

0x80e9,	// (0x0009fe79) listrow_wgtman_pane

0x80fb,	// (0x0009fe8b) listrow_wgtman_pane_g1

0x8108,	// (0x0009fe98) listrow_wgtman_pane_g2

0x0001,

0xfc2a,	// (0x000a79ba) listrow_wgtman_pane_g

0x8126,	// (0x0009feb6) listrow_wgtman_pane_t1

0x813e,	// (0x0009fece) listrow_wgtman_pane_t2

0x0001,

0xfc2f,	// (0x000a79bf) listrow_wgtman_pane_t

0x8164,	// (0x0009fef4) wait_bar_pane_cp09

0xc03d,	// (0x000a3dcd) main_calllock_btn_pane

0xc047,	// (0x000a3dd7) main_calllock_pane_g1

0xac16,	// (0x000a29a6) bg_button_pane_cp17

0xc04f,	// (0x000a3ddf) main_calllock_btn_pane_g1

0xc058,	// (0x000a3de8) main_calllock_btn_pane_t1

0xac16,	// (0x000a29a6) main_dialer3_pane

0xac16,	// (0x000a29a6) main_fmrd2_pane

0xc5c0,	// (0x000a4350) main_fs_bigclock_unlock_btn_pane_g1

0x817e,	// (0x0009ff0e) main_fs_bigclock_unlock_btn_pane_t1

0x818c,	// (0x0009ff1c) area_fmrd2_info_pane_ParamLimits

0x818c,	// (0x0009ff1c) area_fmrd2_info_pane

0x819d,	// (0x0009ff2d) area_fmrd2_visual_pane_ParamLimits

0x819d,	// (0x0009ff2d) area_fmrd2_visual_pane

0x81ab,	// (0x0009ff3b) fmrd2_indi_pane_ParamLimits

0x81ab,	// (0x0009ff3b) fmrd2_indi_pane

0x81b8,	// (0x0009ff48) area_fmrd2_visual_pane_g1

0x81c0,	// (0x0009ff50) area_fmrd2_visual_pane_t1

0x81d0,	// (0x0009ff60) area_fmrd2_visual_pane_t2

0x81e0,	// (0x0009ff70) area_fmrd2_visual_pane_t3

0x0002,

0xfc39,	// (0x000a79c9) area_fmrd2_visual_pane_t

0x81f0,	// (0x0009ff80) area_fmrd2_info_pane_g1

0x81f8,	// (0x0009ff88) area_fmrd2_info_pane_t1

0x8208,	// (0x0009ff98) area_fmrd2_info_pane_t2

0x8218,	// (0x0009ffa8) area_fmrd2_info_pane_t3

0x8228,	// (0x0009ffb8) area_fmrd2_info_pane_t4

0x0003,

0xfc40,	// (0x000a79d0) area_fmrd2_info_pane_t

0x8236,	// (0x0009ffc6) fmrd2_indi_pane_t1

0x8246,	// (0x0009ffd6) fmrd2_indi_pane_t2

0x8256,	// (0x0009ffe6) fmrd2_indi_pane_t3

0x0002,

0xfc49,	// (0x000a79d9) fmrd2_indi_pane_t

0xb2e0,	// (0x000a3070) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb2e0,	// (0x000a3070) list_single_fs_bigclock_indicator_pane_g5

0xb391,	// (0x000a3121) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb391,	// (0x000a3121) list_single_fs_bigclock_indicator_pane_t5

0x778e,	// (0x0009f51e) aid_cell_bcale_month_pane_ParamLimits

0x778e,	// (0x0009f51e) aid_cell_bcale_month_pane

0x77b5,	// (0x0009f545) bcale_month_pane_ParamLimits

0x77b5,	// (0x0009f545) bcale_month_pane

0x77d9,	// (0x0009f569) bcale_preview_pane_ParamLimits

0x77d9,	// (0x0009f569) bcale_preview_pane

0xbe04,	// (0x000a3b94) list_single_fs_bigclock_pane_t1_ParamLimits

0xbe23,	// (0x000a3bb3) list_single_fs_bigclock_pane_t2_ParamLimits

0xbe23,	// (0x000a3bb3) list_single_fs_bigclock_pane_t2

0x0001,

0xfbc4,	// (0x000a7954) list_single_fs_bigclock_pane_t_ParamLimits

0xfbc4,	// (0x000a7954) list_single_fs_bigclock_pane_t

0x8176,	// (0x0009ff06) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc34,	// (0x000a79c4) main_fs_bigclock_unlock_btn_pane_g

0x8266,	// (0x0009fff6) aid_dia3_key_size_ParamLimits

0x8266,	// (0x0009fff6) aid_dia3_key_size

0x8275,	// (0x000a0005) aid_dia3_listrow_size_ParamLimits

0x8275,	// (0x000a0005) aid_dia3_listrow_size

0x828a,	// (0x000a001a) dia3_keypad_fun_pane_ParamLimits

0x828a,	// (0x000a001a) dia3_keypad_fun_pane

0x82a6,	// (0x000a0036) dia3_keypad_num_pane_ParamLimits

0x82a6,	// (0x000a0036) dia3_keypad_num_pane

0x82c1,	// (0x000a0051) dia3_listscroll_pane_ParamLimits

0x82c1,	// (0x000a0051) dia3_listscroll_pane

0x82d4,	// (0x000a0064) dia3_numentry_pane_ParamLimits

0x82d4,	// (0x000a0064) dia3_numentry_pane

0xc067,	// (0x000a3df7) dia3_list_pane

0xc072,	// (0x000a3e02) scroll_pane_cp12

0xac16,	// (0x000a29a6) bg_dia3_numentry_pane

0x82ec,	// (0x000a007c) dia3_numentry_pane_t1

0x82fb,	// (0x000a008b) cell_dia3_key_num_pane

0x8303,	// (0x000a0093) cell_dia3_key0_fun_pane_ParamLimits

0x8303,	// (0x000a0093) cell_dia3_key0_fun_pane

0x8317,	// (0x000a00a7) cell_dia3_key1_fun_pane_ParamLimits

0x8317,	// (0x000a00a7) cell_dia3_key1_fun_pane

0x832f,	// (0x000a00bf) dia3_listrow_pane

0xb033,	// (0x000a2dc3) bg_dia3_numentry_pane_g1

0xac16,	// (0x000a29a6) bg_button_pane_cp21

0xc07d,	// (0x000a3e0d) cell_dia3_key_num_pane_t1

0xc08b,	// (0x000a3e1b) cell_dia3_key_num_pane_t2

0xc09a,	// (0x000a3e2a) cell_dia3_key_num_pane_t3

0xc0a9,	// (0x000a3e39) cell_dia3_key_num_pane_t4

0x0003,

0xfc50,	// (0x000a79e0) cell_dia3_key_num_pane_t

0xac16,	// (0x000a29a6) bg_button_pane_cp19

0x8341,	// (0x000a00d1) cell_dia3_key0_fun_pane_g1

0xac16,	// (0x000a29a6) bg_button_pane_cp20

0x8349,	// (0x000a00d9) cell_dia3_key1_fun_pane_g1

0x8351,	// (0x000a00e1) area_left_week_number_pane

0x835d,	// (0x000a00ed) area_top_day_name_pane

0x8370,	// (0x000a0100) frame_month_view_pane

0xc0b8,	// (0x000a3e48) grid_month_view_pane

0x8383,	// (0x000a0113) cell_top_day_name_pane_ParamLimits

0x8383,	// (0x000a0113) cell_top_day_name_pane

0x83b0,	// (0x000a0140) cell_area_left_week_number_pane_ParamLimits

0x83b0,	// (0x000a0140) cell_area_left_week_number_pane

0x83c4,	// (0x000a0154) cell_month_view_pane_ParamLimits

0x83c4,	// (0x000a0154) cell_month_view_pane

0xc0c6,	// (0x000a3e56) frm_month_g1

0x83f1,	// (0x000a0181) frm_month_g2

0x8404,	// (0x000a0194) frm_month_g3

0x8417,	// (0x000a01a7) frm_month_g4

0x842a,	// (0x000a01ba) frm_month_g5

0x843d,	// (0x000a01cd) frm_month_g6

0x8450,	// (0x000a01e0) frm_month_g7

0xc0d3,	// (0x000a3e63) frm_month_g8

0x8463,	// (0x000a01f3) frm_month_g9

0x8473,	// (0x000a0203) frm_month_g10

0x8483,	// (0x000a0213) frm_month_g11

0x8493,	// (0x000a0223) frm_month_g12

0x84a5,	// (0x000a0235) frm_month_g13

0x84b7,	// (0x000a0247) frm_month_g14

0x84cb,	// (0x000a025b) frm_month_g15

0x84df,	// (0x000a026f) frm_month_g16

0x000f,

0xfc59,	// (0x000a79e9) frm_month_g

0xc0e0,	// (0x000a3e70) cell_top_day_name_pane_t1

0x84f3,	// (0x000a0283) cell_area_left_week_number_pane_g1

0x84ff,	// (0x000a028f) cell_area_left_week_number_pane_t1

0xc582,	// (0x000a4312) cell_month_view_pane_g1

0x8512,	// (0x000a02a2) cell_month_view_pane_t1

0xac16,	// (0x000a29a6) main_fps_pane

0xb55e,	// (0x000a32ee) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xb55e,	// (0x000a32ee) cmail_ddmenu_btn02_pane_cp1

0xb57a,	// (0x000a330a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xb57a,	// (0x000a330a) cmail_ddmenu_btn02_pane_cp2

0x7b6a,	// (0x0009f8fa) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7b6a,	// (0x0009f8fa) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb90,	// (0x000a7920) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb90,	// (0x000a7920) cmail_ddmenu_btn02_pane_g

0x7b88,	// (0x0009f918) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7b88,	// (0x0009f918) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb95,	// (0x000a7925) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb95,	// (0x000a7925) cmail_ddmenu_btn02_pane_t

0x8525,	// (0x000a02b5) fps_text_pane_ParamLimits

0x8525,	// (0x000a02b5) fps_text_pane

0x853c,	// (0x000a02cc) main_fps_pane_g1_ParamLimits

0x853c,	// (0x000a02cc) main_fps_pane_g1

0x8556,	// (0x000a02e6) wait_bar_pane_cp010_ParamLimits

0x8556,	// (0x000a02e6) wait_bar_pane_cp010

0x8567,	// (0x000a02f7) fps_text_pane_t1_ParamLimits

0x8567,	// (0x000a02f7) fps_text_pane_t1

0xbda4,	// (0x000a3b34) cam4_image_uncrop_pane_g1

0xbdad,	// (0x000a3b3d) cam4_image_uncrop_pane_g2

0x4eb6,	// (0x0009cc46) cam4_image_uncrop_pane_g3

0x4ebf,	// (0x0009cc4f) cam4_image_uncrop_pane_g4

0x0003,

0xf7de,	// (0x000a756e) cam4_image_uncrop_pane_g

0x832f,	// (0x000a00bf) dia3_listrow_pane_ParamLimits

0xac16,	// (0x000a29a6) main_phob2_pane

0x7513,	// (0x0009f2a3) cell_tport_appsw_pane_cp02_ParamLimits

0x7513,	// (0x0009f2a3) cell_tport_appsw_pane_cp02

0x7527,	// (0x0009f2b7) cell_tport_appsw_pane_cp03_ParamLimits

0x7527,	// (0x0009f2b7) cell_tport_appsw_pane_cp03

0xac16,	// (0x000a29a6) phob2_contact_card_pane

0xac16,	// (0x000a29a6) phob2_listscroll_pane

0xc0f3,	// (0x000a3e83) phob2_list_pane

0xb912,	// (0x000a36a2) scroll_pane_cp034

0x857f,	// (0x000a030f) phob2_cc_data_pane_ParamLimits

0x857f,	// (0x000a030f) phob2_cc_data_pane

0x859e,	// (0x000a032e) phob2_cc_listscroll_pane_ParamLimits

0x859e,	// (0x000a032e) phob2_cc_listscroll_pane

0x80e9,	// (0x0009fe79) list_double_large_graphic_phob2_pane_ParamLimits

0x80e9,	// (0x0009fe79) list_double_large_graphic_phob2_pane

0x85bc,	// (0x000a034c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x85bc,	// (0x000a034c) list_double_large_graphic_phob2_pane_g1

0x85c9,	// (0x000a0359) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x85c9,	// (0x000a0359) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfc7a,	// (0x000a7a0a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc7a,	// (0x000a7a0a) list_double_large_graphic_phob2_pane_g

0x85ef,	// (0x000a037f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x85ef,	// (0x000a037f) list_double_large_graphic_phob2_pane_t1

0x8604,	// (0x000a0394) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8604,	// (0x000a0394) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc83,	// (0x000a7a13) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc83,	// (0x000a7a13) list_double_large_graphic_phob2_pane_t

0xac16,	// (0x000a29a6) list_highlight_pane_cp024

0xc0fb,	// (0x000a3e8b) phob2_cc_button_pane

0x8619,	// (0x000a03a9) phob2_cc_data_pane_g1_ParamLimits

0x8619,	// (0x000a03a9) phob2_cc_data_pane_g1

0x8630,	// (0x000a03c0) phob2_cc_data_pane_g2_ParamLimits

0x8630,	// (0x000a03c0) phob2_cc_data_pane_g2

0x0001,

0xfc88,	// (0x000a7a18) phob2_cc_data_pane_g_ParamLimits

0xfc88,	// (0x000a7a18) phob2_cc_data_pane_g

0x8642,	// (0x000a03d2) phob2_cc_data_pane_t1_ParamLimits

0x8642,	// (0x000a03d2) phob2_cc_data_pane_t1

0x865a,	// (0x000a03ea) phob2_cc_data_pane_t2_ParamLimits

0x865a,	// (0x000a03ea) phob2_cc_data_pane_t2

0x8672,	// (0x000a0402) phob2_cc_data_pane_t3_ParamLimits

0x8672,	// (0x000a0402) phob2_cc_data_pane_t3

0x0002,

0xfc8d,	// (0x000a7a1d) phob2_cc_data_pane_t_ParamLimits

0xfc8d,	// (0x000a7a1d) phob2_cc_data_pane_t

0xc103,	// (0x000a3e93) phob2_cc_list_pane_ParamLimits

0xc103,	// (0x000a3e93) phob2_cc_list_pane

0xa6f4,	// (0x000a2484) scroll_pane_cp035_ParamLimits

0xa6f4,	// (0x000a2484) scroll_pane_cp035

0xc51b,	// (0x000a42ab) bg_button_pane_cp033

0xc10f,	// (0x000a3e9f) phob2_cc_button_pane_g1

0xc11b,	// (0x000a3eab) phob2_cc_button_pane_t1

0xc130,	// (0x000a3ec0) phob2_cc_button_pane_t2

0x0001,

0xfc94,	// (0x000a7a24) phob2_cc_button_pane_t

0x868a,	// (0x000a041a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x868a,	// (0x000a041a) list_double_large_graphic_phob2_cc_pane

0x86ba,	// (0x000a044a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x86ba,	// (0x000a044a) list_double_large_graphic_phob2_cc_pane_g1

0x86c6,	// (0x000a0456) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x86c6,	// (0x000a0456) list_double_large_graphic_phob2_cc_pane_g2

0x86d2,	// (0x000a0462) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x86d2,	// (0x000a0462) list_double_large_graphic_phob2_cc_pane_g3

0x86de,	// (0x000a046e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x86de,	// (0x000a046e) list_double_large_graphic_phob2_cc_pane_g4

0x86ea,	// (0x000a047a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x86ea,	// (0x000a047a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc99,	// (0x000a7a29) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc99,	// (0x000a7a29) list_double_large_graphic_phob2_cc_pane_g

0x86f6,	// (0x000a0486) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x86f6,	// (0x000a0486) list_double_large_graphic_phob2_cc_pane_t1

0x871f,	// (0x000a04af) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x871f,	// (0x000a04af) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfca4,	// (0x000a7a34) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfca4,	// (0x000a7a34) list_double_large_graphic_phob2_cc_pane_t

0xc142,	// (0x000a3ed2) list_highlight_pane_cp025_ParamLimits

0xc142,	// (0x000a3ed2) list_highlight_pane_cp025

0xc51b,	// (0x000a42ab) bg_button_pane_cp033_ParamLimits

0xc10f,	// (0x000a3e9f) phob2_cc_button_pane_g1_ParamLimits

0xc11b,	// (0x000a3eab) phob2_cc_button_pane_t1_ParamLimits

0xc130,	// (0x000a3ec0) phob2_cc_button_pane_t2_ParamLimits

0xfc94,	// (0x000a7a24) phob2_cc_button_pane_t_ParamLimits

0x0a5a,	// (0x000987ea) popup_wgtman_window

0x572d,	// (0x0009d4bd) scroll_pane_cp038

0x8062,	// (0x0009fdf2) wgtman_btn_pane_cp_01_ParamLimits

0x8062,	// (0x0009fdf2) wgtman_btn_pane_cp_01

0xc150,	// (0x000a3ee0) wgtman_content_pane

0xc159,	// (0x000a3ee9) wgtman_heading_pane

0xac16,	// (0x000a29a6) bg_heading_pane_cp02

0xc162,	// (0x000a3ef2) wgtman_heading_pane_g1

0xc16a,	// (0x000a3efa) wgtman_heading_pane_t1

0xc178,	// (0x000a3f08) scroll_pane_cp036

0xc180,	// (0x000a3f10) wgtman_list_pane

0xc188,	// (0x000a3f18) wgtman_list_pane_t1_ParamLimits

0xc188,	// (0x000a3f18) wgtman_list_pane_t1

0xa4b6,	// (0x000a2246) cam4_grid_pane

0x5dad,	// (0x0009db3d) bg_button_pane_cp015_ParamLimits

0x5dbe,	// (0x0009db4e) bg_button_pane_cp016_ParamLimits

0x5dca,	// (0x0009db5a) bg_button_pane_cp017_ParamLimits

0x5e1e,	// (0x0009dbae) popup_vitu2_query_window_g3_ParamLimits

0x5e1e,	// (0x0009dbae) popup_vitu2_query_window_g3

0x5ebf,	// (0x0009dc4f) popup_vitu2_query_window_t6_ParamLimits

0x5ebf,	// (0x0009dc4f) popup_vitu2_query_window_t6

0x5eea,	// (0x0009dc7a) popup_vitu2_query_window_t7_ParamLimits

0x5eea,	// (0x0009dc7a) popup_vitu2_query_window_t7

0xbda4,	// (0x000a3b34) cam4_grid_pane_g1

0xbdad,	// (0x000a3b3d) cam4_grid_pane_g2

0xc1a2,	// (0x000a3f32) cam4_grid_pane_g3

0xc1ab,	// (0x000a3f3b) cam4_grid_pane_g4

0x0003,

0xfca9,	// (0x000a7a39) cam4_grid_pane_g

0x14fe,	// (0x0009928e) aid_placing_vt_slider_lsc_ParamLimits

0x1809,	// (0x00099599) vidtel_button_pane_ParamLimits

0x1809,	// (0x00099599) vidtel_button_pane

0xac16,	// (0x000a29a6) bg_button_pane_cp034

0xc1b6,	// (0x000a3f46) vidtel_button_pane_g1

0xc1be,	// (0x000a3f4e) vidtel_button_pane_t1

0xa5ff,	// (0x000a238f) aid_size_vtel_slider_touch

0xa6f4,	// (0x000a2484) scroll_pane_cp039

0x6c85,	// (0x0009ea15) ncim_query_button_pane_cp01_ParamLimits

0x6ca4,	// (0x0009ea34) ncimui_query_pane_g1_ParamLimits

0xc51b,	// (0x000a42ab) input_focus_pane_cp012_ParamLimits

0xb071,	// (0x000a2e01) ncim_query_entry_pane_t1_ParamLimits

0xa6f4,	// (0x000a2484) scroll_pane_cp039_ParamLimits

0xd0cc,	// (0x000a4e5c) navi_pane_bcale_mc_g1

0xd0d4,	// (0x000a4e64) navi_pane_bcale_mc_t1

0xb5ae,	// (0x000a333e) main_sp_fs_email_pane_g1

0xb5ba,	// (0x000a334a) main_sp_fs_email_pane_g2

0x0001,

0x04a3,	// (0x00098233) main_sp_fs_email_pane_g

0xb831,	// (0x000a35c1) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb831,	// (0x000a35c1) list_single_cale_mrui_row_pane_g3

0x7bf9,	// (0x0009f989) list_single_recal_day_pane_g5_event_pane

0x7c0f,	// (0x0009f99f) list_single_recal_day_pane_g7

0x8748,	// (0x000a04d8) list_recal_day_event_pane_cp01

0x8751,	// (0x000a04e1) list_recal_vselct_arw_lo_pane_cp01

0x8759,	// (0x000a04e9) list_recal_vselct_arw_up_pane_cp01

0x8761,	// (0x000a04f1) list_recal_vselct_pane_cp01

0xa65d,	// (0x000a23ed) list_recal_day_event_pane_cp01_g1

0x876b,	// (0x000a04fb) list_recal_day_event_pane_cp01_t1

0x7c17,	// (0x0009f9a7) list_single_recal_day_pane_t1_ParamLimits

0x7c29,	// (0x0009f9b9) list_single_recal_day_pane_t2_ParamLimits

0xfba5,	// (0x000a7935) list_single_recal_day_pane_t_ParamLimits

0xc4f9,	// (0x000a4289) bg_notes_pane_ParamLimits

0xc5fc,	// (0x000a438c) list_notes_pane_ParamLimits

0x0ba4,	// (0x00098934) scroll_pane_cp06_ParamLimits

0xc61e,	// (0x000a43ae) main_notes_pane_ParamLimits

0xc51b,	// (0x000a42ab) main_welc_pane

0x87ae,	// (0x000a053e) main_welc_body_pane_ParamLimits

0x87ae,	// (0x000a053e) main_welc_body_pane

0x87cc,	// (0x000a055c) main_welc_opti_pane_ParamLimits

0x87cc,	// (0x000a055c) main_welc_opti_pane

0x8848,	// (0x000a05d8) main_welc_pane_t1_ParamLimits

0x8848,	// (0x000a05d8) main_welc_pane_t1

0x8a48,	// (0x000a07d8) main_welc_body_row_pane_ParamLimits

0x8a48,	// (0x000a07d8) main_welc_body_row_pane

0xc574,	// (0x000a4304) main_welc_opti_row_pane_ParamLimits

0xc574,	// (0x000a4304) main_welc_opti_row_pane

0x8a5c,	// (0x000a07ec) main_welc_opti_row_pane_g1

0x8a64,	// (0x000a07f4) main_welc_opti_row_pane_t1

0x8a73,	// (0x000a0803) main_welc_body_row_pane_t1

0xbee4,	// (0x000a3c74) popup_notif_wgt_heading_pane

0xbefe,	// (0x000a3c8e) aid_size_list_notif_wgt_del_ParamLimits

0xbf0b,	// (0x000a3c9b) list_notif_wgt_row_pane_g1_ParamLimits

0xbf17,	// (0x000a3ca7) list_notif_wgt_row_pane_g2_ParamLimits

0xbf26,	// (0x000a3cb6) list_notif_wgt_row_pane_g3_ParamLimits

0xfbf3,	// (0x000a7983) list_notif_wgt_row_pane_g_ParamLimits

0xbf33,	// (0x000a3cc3) list_notif_wgt_row_pane_t1_ParamLimits

0xbf49,	// (0x000a3cd9) list_notif_wgt_row_pane_t2_ParamLimits

0xbf5b,	// (0x000a3ceb) list_notif_wgt_row_pane_t3_ParamLimits

0xfbfa,	// (0x000a798a) list_notif_wgt_row_pane_t_ParamLimits

0x80fb,	// (0x0009fe8b) listrow_wgtman_pane_g1_ParamLimits

0x8108,	// (0x0009fe98) listrow_wgtman_pane_g2_ParamLimits

0xfc2a,	// (0x000a79ba) listrow_wgtman_pane_g_ParamLimits

0x8126,	// (0x0009feb6) listrow_wgtman_pane_t1_ParamLimits

0x813e,	// (0x0009fece) listrow_wgtman_pane_t2_ParamLimits

0xfc2f,	// (0x000a79bf) listrow_wgtman_pane_t_ParamLimits

0x8164,	// (0x0009fef4) wait_bar_pane_cp09_ParamLimits

0xac16,	// (0x000a29a6) bg_popup_heading_pane_cp02

0x8a82,	// (0x000a0812) popup_notif_wgt_heading_pane_g1

0x8a8a,	// (0x000a081a) popup_notif_wgt_heading_pane_t1

0xac16,	// (0x000a29a6) main_vids_pane

0xac16,	// (0x000a29a6) vids_listscroll_pane

0x8a98,	// (0x000a0828) scroll_pane_cp040

0xac16,	// (0x000a29a6) vids_list_pane

0x8aa3,	// (0x000a0833) vids_list_double_pane_ParamLimits

0x8aa3,	// (0x000a0833) vids_list_double_pane

0x8ab4,	// (0x000a0844) vids_list_double_pane_g1

0x8abd,	// (0x000a084d) vids_list_double_pane_t1

0x8acd,	// (0x000a085d) vids_list_double_pane_t2

0x0001,

0xfcc8,	// (0x000a7a58) vids_list_double_pane_t

0x9eac,	// (0x000a1c3c) main_ncimui_pane_ParamLimits

0x6abb,	// (0x0009e84b) main_ncimui_pane_g1_ParamLimits

0x6ac7,	// (0x0009e857) main_ncimui_pane_g2_ParamLimits

0x6ac7,	// (0x0009e857) main_ncimui_pane_g2

0x0001,

0xfa9b,	// (0x000a782b) main_ncimui_pane_g_ParamLimits

0xfa9b,	// (0x000a782b) main_ncimui_pane_g

0x87e7,	// (0x000a0577) main_welc_pane_g1_ParamLimits

0x87e7,	// (0x000a0577) main_welc_pane_g1

0x87fc,	// (0x000a058c) main_welc_pane_g2_ParamLimits

0x87fc,	// (0x000a058c) main_welc_pane_g2

0x0003,

0xfcb2,	// (0x000a7a42) main_welc_pane_g_ParamLimits

0xfcb2,	// (0x000a7a42) main_welc_pane_g

0xc4f9,	// (0x000a4289) listscroll_mce_pane_ParamLimits

0xd221,	// (0x000a4fb1) wait_bar_pane_cp10

0xe4db,	// (0x000a626b) main_cale_day_pane_ParamLimits

0xe4db,	// (0x000a626b) main_cale_week_pane_ParamLimits

0xc4f9,	// (0x000a4289) main_messa_pane_ParamLimits

0x42e2,	// (0x0009c072) main_clock2_btn_pane_ParamLimits

0x42e2,	// (0x0009c072) main_clock2_btn_pane

0xecf4,	// (0x000a6a84) main_clock2_btn_pane_cp01_ParamLimits

0xecf4,	// (0x000a6a84) main_clock2_btn_pane_cp01

0xb802,	// (0x000a3592) list_cale_mrui_pane_ParamLimits

0xbf9f,	// (0x000a3d2f) main_cf0_pane_g2

0x0001,

0xfc01,	// (0x000a7991) main_cf0_pane_g

0x8351,	// (0x000a00e1) area_left_week_number_pane_ParamLimits

0x835d,	// (0x000a00ed) area_top_day_name_pane_ParamLimits

0x8370,	// (0x000a0100) frame_month_view_pane_ParamLimits

0xc0b8,	// (0x000a3e48) grid_month_view_pane_ParamLimits

0xc0c6,	// (0x000a3e56) frm_month_g1_ParamLimits

0x83f1,	// (0x000a0181) frm_month_g2_ParamLimits

0x8404,	// (0x000a0194) frm_month_g3_ParamLimits

0x8417,	// (0x000a01a7) frm_month_g4_ParamLimits

0x842a,	// (0x000a01ba) frm_month_g5_ParamLimits

0x843d,	// (0x000a01cd) frm_month_g6_ParamLimits

0x8450,	// (0x000a01e0) frm_month_g7_ParamLimits

0xc0d3,	// (0x000a3e63) frm_month_g8_ParamLimits

0x8463,	// (0x000a01f3) frm_month_g9_ParamLimits

0x8473,	// (0x000a0203) frm_month_g10_ParamLimits

0x8483,	// (0x000a0213) frm_month_g11_ParamLimits

0x8493,	// (0x000a0223) frm_month_g12_ParamLimits

0x84a5,	// (0x000a0235) frm_month_g13_ParamLimits

0x84b7,	// (0x000a0247) frm_month_g14_ParamLimits

0x84cb,	// (0x000a025b) frm_month_g15_ParamLimits

0x84df,	// (0x000a026f) frm_month_g16_ParamLimits

0xfc59,	// (0x000a79e9) frm_month_g_ParamLimits

0xc0e0,	// (0x000a3e70) cell_top_day_name_pane_t1_ParamLimits

0x84f3,	// (0x000a0283) cell_area_left_week_number_pane_g1_ParamLimits

0x84ff,	// (0x000a028f) cell_area_left_week_number_pane_t1_ParamLimits

0xc582,	// (0x000a4312) cell_month_view_pane_g1_ParamLimits

0x8512,	// (0x000a02a2) cell_month_view_pane_t1_ParamLimits

0xc4f1,	// (0x000a4281) main_clock2_btn_pane_g1

0x8add,	// (0x000a086d) main_clock2_btn_pane_t1

0xc51b,	// (0x000a42ab) listscroll_cmail_pane_ParamLimits

0xb5ae,	// (0x000a333e) main_sp_fs_email_pane_g1_ParamLimits

0xb5ba,	// (0x000a334a) main_sp_fs_email_pane_g2_ParamLimits

0x04a3,	// (0x00098233) main_sp_fs_email_pane_g_ParamLimits

0xb930,	// (0x000a36c0) list_recal_day_pane_ParamLimits

0xb941,	// (0x000a36d1) mian_recal_day_pane_t1

0x7355,	// (0x0009f0e5) list_single_dyc_row_text_pane_t4_ParamLimits

0x7355,	// (0x0009f0e5) list_single_dyc_row_text_pane_t4

0x739e,	// (0x0009f12e) list_single_dyc_row_text_pane_t5_ParamLimits

0x739e,	// (0x0009f12e) list_single_dyc_row_text_pane_t5

0x7414,	// (0x0009f1a4) list_single_dyc_row_text_pane_t6_ParamLimits

0x7414,	// (0x0009f1a4) list_single_dyc_row_text_pane_t6

0xcbba,	// (0x000a494a) aid_mgn_list_cale_time_pane

0x9eac,	// (0x000a1c3c) main_gallery2_pane_ParamLimits

0xed0a,	// (0x000a6a9a) main_clock2_pane_cp01_t1

0xed1a,	// (0x000a6aaa) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x000a7482) main_clock2_pane_cp01_t

0x0f41,	// (0x00098cd1) cale_week_scroll_pane_g16_ParamLimits

0x0f41,	// (0x00098cd1) cale_week_scroll_pane_g16

0xc7d0,	// (0x000a4560) vorec_slider_pane

0xc1be,	// (0x000a3f4e) vidtel_button_pane_t1_ParamLimits

0x7c97,	// (0x0009fa27) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7c97,	// (0x0009fa27) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7ca8,	// (0x0009fa38) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7ca8,	// (0x0009fa38) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfbaf,	// (0x000a793f) main_fs_bigclock_clock_pane_g_ParamLimits

0x7cbb,	// (0x0009fa4b) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7cd1,	// (0x0009fa61) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfbb8,	// (0x000a7948) main_fs_bigclock_clock_pane_t_ParamLimits

0x3bb7,	// (0x0009b947) main_mup3_lyrics_pane_ParamLimits

0x3bb7,	// (0x0009b947) main_mup3_lyrics_pane

0x8b03,	// (0x000a0893) main_mup3_lyrics_pane_t1_ParamLimits

0x8b03,	// (0x000a0893) main_mup3_lyrics_pane_t1

0xa1ac,	// (0x000a1f3c) aid_main_mp4_pane_t1_area

0xa1b6,	// (0x000a1f46) aid_main_mp4_pane_t2_area

0xa260,	// (0x000a1ff0) main_mp4_pane_g7_ParamLimits

0xa260,	// (0x000a1ff0) main_mp4_pane_g7

0xa26c,	// (0x000a1ffc) main_mp4_pane_g8_ParamLimits

0xa26c,	// (0x000a1ffc) main_mp4_pane_g8

0x4c6d,	// (0x0009c9fd) aid_call6_pane_g1_size

0x86a4,	// (0x000a0434) list_double_large_graphic_phob2_other_pane_ParamLimits

0x86a4,	// (0x000a0434) list_double_large_graphic_phob2_other_pane

0xcb72,	// (0x000a4902) list_double_large_graphic_phob2_other_pane_g1

0xac16,	// (0x000a29a6) list_highlight_pane_cp026

0xc51b,	// (0x000a42ab) main_welc_pane_ParamLimits

0x710e,	// (0x0009ee9e) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x710e,	// (0x0009ee9e) main_sp_fs_ctrlbar_pane_g3

0x7128,	// (0x0009eeb8) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7128,	// (0x0009eeb8) main_sp_fs_ctrlbar_pane_g4

0x715c,	// (0x0009eeec) toolbar2_fixed_button_pane_cp01

0x7167,	// (0x0009eef7) toolbar2_fixed_button_pane_cp02

0x7174,	// (0x0009ef04) toolbar2_fixed_button_pane_cp03

0x878c,	// (0x000a051c) list_welc_entry_pane_ParamLimits

0x878c,	// (0x000a051c) list_welc_entry_pane

0x8811,	// (0x000a05a1) main_welc_pane_g3_ParamLimits

0x8811,	// (0x000a05a1) main_welc_pane_g3

0x8866,	// (0x000a05f6) main_welc_pane_t2_ParamLimits

0x8866,	// (0x000a05f6) main_welc_pane_t2

0x8881,	// (0x000a0611) main_welc_pane_t3_ParamLimits

0x8881,	// (0x000a0611) main_welc_pane_t3

0x0005,

0xfcbb,	// (0x000a7a4b) main_welc_pane_t_ParamLimits

0xfcbb,	// (0x000a7a4b) main_welc_pane_t

0x89b1,	// (0x000a0741) welc_button_pane_ParamLimits

0x89b1,	// (0x000a0741) welc_button_pane

0x8a33,	// (0x000a07c3) welc_service_logo_pane_ParamLimits

0x8a33,	// (0x000a07c3) welc_service_logo_pane

0x8b1f,	// (0x000a08af) list_single_welc_entry_pane_ParamLimits

0x8b1f,	// (0x000a08af) list_single_welc_entry_pane

0x8b30,	// (0x000a08c0) list_single_welc_entry_pane_g1

0x8b38,	// (0x000a08c8) list_single_welc_entry_pane_t1

0x8b46,	// (0x000a08d6) list_single_welc_entry_pane_t2

0x0001,

0xfccd,	// (0x000a7a5d) list_single_welc_entry_pane_t

0xac16,	// (0x000a29a6) bg_button_pane_cp035

0x8b54,	// (0x000a08e4) welc_button_pane_t1

0x8b62,	// (0x000a08f2) welc_service_logo_pane_g1

0x8b6b,	// (0x000a08fb) welc_service_logo_pane_g2

0x0001,

0xfcd2,	// (0x000a7a62) welc_service_logo_pane_g

0x9eba,	// (0x000a1c4a) main_int_radio_pane

0xc920,	// (0x000a46b0) list_single_fs_dyc_pane_g1

0x85d5,	// (0x000a0365) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x85d5,	// (0x000a0365) list_double_large_graphic_phob2_pane_g3

0x85e1,	// (0x000a0371) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x85e1,	// (0x000a0371) list_double_large_graphic_phob2_pane_g4

0x8b74,	// (0x000a0904) main_int_radio1_pane_ParamLimits

0x8b74,	// (0x000a0904) main_int_radio1_pane

0x8b91,	// (0x000a0921) find_pane_cp02

0x8b9a,	// (0x000a092a) input_focus_pane_cp12_ParamLimits

0x8b9a,	// (0x000a092a) input_focus_pane_cp12

0x8baa,	// (0x000a093a) input_focus_pane_cp13_ParamLimits

0x8baa,	// (0x000a093a) input_focus_pane_cp13

0x8bbe,	// (0x000a094e) input_focus_pane_cp14_ParamLimits

0x8bbe,	// (0x000a094e) input_focus_pane_cp14

0x8bd2,	// (0x000a0962) int_radio1_listscroll_pane

0x8bdc,	// (0x000a096c) main_int_radio1_pane_g1_ParamLimits

0x8bdc,	// (0x000a096c) main_int_radio1_pane_g1

0x8bf4,	// (0x000a0984) main_int_radio1_pane_t1_ParamLimits

0x8bf4,	// (0x000a0984) main_int_radio1_pane_t1

0x8c0f,	// (0x000a099f) main_int_radio1_pane_t2_ParamLimits

0x8c0f,	// (0x000a099f) main_int_radio1_pane_t2

0x8c2a,	// (0x000a09ba) main_int_radio1_pane_t3_ParamLimits

0x8c2a,	// (0x000a09ba) main_int_radio1_pane_t3

0x8c45,	// (0x000a09d5) main_int_radio1_pane_t4_ParamLimits

0x8c45,	// (0x000a09d5) main_int_radio1_pane_t4

0x8c57,	// (0x000a09e7) main_int_radio1_pane_t5_ParamLimits

0x8c57,	// (0x000a09e7) main_int_radio1_pane_t5

0x8c69,	// (0x000a09f9) main_int_radio1_pane_t6_ParamLimits

0x8c69,	// (0x000a09f9) main_int_radio1_pane_t6

0x8c7e,	// (0x000a0a0e) main_int_radio1_pane_t7_ParamLimits

0x8c7e,	// (0x000a0a0e) main_int_radio1_pane_t7

0x8c93,	// (0x000a0a23) main_int_radio1_pane_t8_ParamLimits

0x8c93,	// (0x000a0a23) main_int_radio1_pane_t8

0x8cb2,	// (0x000a0a42) main_int_radio1_pane_t9_ParamLimits

0x8cb2,	// (0x000a0a42) main_int_radio1_pane_t9

0x8cc4,	// (0x000a0a54) main_int_radio1_pane_t10_ParamLimits

0x8cc4,	// (0x000a0a54) main_int_radio1_pane_t10

0x8cea,	// (0x000a0a7a) main_int_radio1_pane_t11_ParamLimits

0x8cea,	// (0x000a0a7a) main_int_radio1_pane_t11

0x8d10,	// (0x000a0aa0) main_int_radio1_pane_t12_ParamLimits

0x8d10,	// (0x000a0aa0) main_int_radio1_pane_t12

0x000b,

0xfcd7,	// (0x000a7a67) main_int_radio1_pane_t_ParamLimits

0xfcd7,	// (0x000a7a67) main_int_radio1_pane_t

0x8d22,	// (0x000a0ab2) int_radio_list_pane

0xb912,	// (0x000a36a2) scroll_pane_cp037

0x8d2a,	// (0x000a0aba) list_double_large_graphic_int_radio_pane_ParamLimits

0x8d2a,	// (0x000a0aba) list_double_large_graphic_int_radio_pane

0x8d42,	// (0x000a0ad2) list_double_large_graphic_int_radio_pane_g1

0x8d4b,	// (0x000a0adb) list_double_large_graphic_int_radio_pane_t1

0x8d59,	// (0x000a0ae9) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfcf0,	// (0x000a7a80) list_double_large_graphic_int_radio_pane_t

0xac16,	// (0x000a29a6) list_highlight_pane_cp027

0x87a6,	// (0x000a0536) main_button_pane_4

0x8824,	// (0x000a05b4) main_welc_pane_g4_ParamLimits

0x8824,	// (0x000a05b4) main_welc_pane_g4

0x889a,	// (0x000a062a) main_welc_pane_t4_ParamLimits

0x889a,	// (0x000a062a) main_welc_pane_t4

0x88b1,	// (0x000a0641) main_welc_pane_t5_ParamLimits

0x88b1,	// (0x000a0641) main_welc_pane_t5

0x88ee,	// (0x000a067e) main_welc_pane_t6_ParamLimits

0x88ee,	// (0x000a067e) main_welc_pane_t6

0x89c8,	// (0x000a0758) welc_button_pane_2_ParamLimits

0x89c8,	// (0x000a0758) welc_button_pane_2

0x89e4,	// (0x000a0774) welc_button_pane_3_ParamLimits

0x89e4,	// (0x000a0774) welc_button_pane_3

0x8a03,	// (0x000a0793) welc_button_pane_4

0x8a0b,	// (0x000a079b) welc_button_pane_5_ParamLimits

0x8a0b,	// (0x000a079b) welc_button_pane_5

0x085e,	// (0x000985ee) main_popup_welc_pane

0x8d7f,	// (0x000a0b0f) main_welc_sk_g3

0x8d89,	// (0x000a0b19) main_welc_sk_g4

0x8d93,	// (0x000a0b23) main_welc_sk_t3

0x8da3,	// (0x000a0b33) main_welc_sk_t4

0x8db3,	// (0x000a0b43) popup_welc_pane_t4

0x8dc1,	// (0x000a0b51) popup_welc_pane_t5

0x8dcf,	// (0x000a0b5f) popup_welc_pane_t6

0x9eba,	// (0x000a1c4a) main_acti_pane

0xac16,	// (0x000a29a6) main_sso_pane

0x8e0d,	// (0x000a0b9d) sso_body_pane_ParamLimits

0x8e0d,	// (0x000a0b9d) sso_body_pane

0x8e21,	// (0x000a0bb1) sso_logo_pane_ParamLimits

0x8e21,	// (0x000a0bb1) sso_logo_pane

0x8e5a,	// (0x000a0bea) sso_sk_pane_ParamLimits

0x8e5a,	// (0x000a0bea) sso_sk_pane

0x8e6c,	// (0x000a0bfc) main_sso_logo_pane_g1

0x8e77,	// (0x000a0c07) sso_sk_pane_t1_ParamLimits

0x8e77,	// (0x000a0c07) sso_sk_pane_t1

0x8e91,	// (0x000a0c21) sso_sk_pane_t2_ParamLimits

0x8e91,	// (0x000a0c21) sso_sk_pane_t2

0x0001,

0xfcf5,	// (0x000a7a85) sso_sk_pane_t_ParamLimits

0xfcf5,	// (0x000a7a85) sso_sk_pane_t

0x8ea7,	// (0x000a0c37) aid_sso_gap

0x8eb0,	// (0x000a0c40) aid_sso_txt1

0x8eba,	// (0x000a0c4a) aid_sso_txt2

0x8ec4,	// (0x000a0c54) aid_sso_txt3

0x0002,

0xfcfa,	// (0x000a7a8a) aid_sso_txt

0x8ece,	// (0x000a0c5e) aid_sso_widget

0x8f2c,	// (0x000a0cbc) sso_btn_pane_ParamLimits

0x8f2c,	// (0x000a0cbc) sso_btn_pane

0x8fb0,	// (0x000a0d40) sso_option_pane_ParamLimits

0x8fb0,	// (0x000a0d40) sso_option_pane

0x9066,	// (0x000a0df6) sso_query_pane_ParamLimits

0x9066,	// (0x000a0df6) sso_query_pane

0x90bc,	// (0x000a0e4c) sso_query_pane_cp01_ParamLimits

0x90bc,	// (0x000a0e4c) sso_query_pane_cp01

0x9116,	// (0x000a0ea6) sso_t_hdr_pane_ParamLimits

0x9116,	// (0x000a0ea6) sso_t_hdr_pane

0x9140,	// (0x000a0ed0) sso_t_nml_pane_ParamLimits

0x9140,	// (0x000a0ed0) sso_t_nml_pane

0x9196,	// (0x000a0f26) sso_t_sub_pane

0x8e2e,	// (0x000a0bbe) sso_popup_window_ParamLimits

0x8e2e,	// (0x000a0bbe) sso_popup_window

0x8ed8,	// (0x000a0c68) sso_apps_pane_ParamLimits

0x8ed8,	// (0x000a0c68) sso_apps_pane

0x8f02,	// (0x000a0c92) sso_body_pane_g1

0x8f0c,	// (0x000a0c9c) sso_body_pane_t1

0x8f1c,	// (0x000a0cac) sso_body_pane_t2

0x0001,

0xfd01,	// (0x000a7a91) sso_body_pane_t

0x8f78,	// (0x000a0d08) sso_btn_pane_cp01_ParamLimits

0x8f78,	// (0x000a0d08) sso_btn_pane_cp01

0x903a,	// (0x000a0dca) sso_prog_pane_ParamLimits

0x903a,	// (0x000a0dca) sso_prog_pane

0x91ab,	// (0x000a0f3b) sso_t_hdr_pane_t1_ParamLimits

0x91ab,	// (0x000a0f3b) sso_t_hdr_pane_t1

0x91be,	// (0x000a0f4e) input_focus_pane_cp10_ParamLimits

0x91be,	// (0x000a0f4e) input_focus_pane_cp10

0x91d2,	// (0x000a0f62) sso_query_pane_t1_ParamLimits

0x91d2,	// (0x000a0f62) sso_query_pane_t1

0x91e5,	// (0x000a0f75) sso_query_pane_t2_ParamLimits

0x91e5,	// (0x000a0f75) sso_query_pane_t2

0x91fe,	// (0x000a0f8e) sso_query_pane_t3_ParamLimits

0x91fe,	// (0x000a0f8e) sso_query_pane_t3

0x9228,	// (0x000a0fb8) sso_query_pane_t4_ParamLimits

0x9228,	// (0x000a0fb8) sso_query_pane_t4

0x0003,

0xfd06,	// (0x000a7a96) sso_query_pane_t_ParamLimits

0xfd06,	// (0x000a7a96) sso_query_pane_t

0x8d76,	// (0x000a0b06) bg_button_pane_cp22

0x8d67,	// (0x000a0af7) sso_btn_pane_t1

0x924c,	// (0x000a0fdc) sso_t_nml_pane_t1_ParamLimits

0x924c,	// (0x000a0fdc) sso_t_nml_pane_t1

0x9267,	// (0x000a0ff7) sso_option_row_pane_ParamLimits

0x9267,	// (0x000a0ff7) sso_option_row_pane

0x9274,	// (0x000a1004) sso_t_sub_pane_t1_ParamLimits

0x9274,	// (0x000a1004) sso_t_sub_pane_t1

0xc51b,	// (0x000a42ab) bg_popup_window_pane_cp11_ParamLimits

0xc51b,	// (0x000a42ab) bg_popup_window_pane_cp11

0x9291,	// (0x000a1021) popup_sk_window_cp01_ParamLimits

0x9291,	// (0x000a1021) popup_sk_window_cp01

0x929e,	// (0x000a102e) sso_popup_body_pane_ParamLimits

0x929e,	// (0x000a102e) sso_popup_body_pane

0x92ab,	// (0x000a103b) scroll_pane_cp21_ParamLimits

0x92ab,	// (0x000a103b) scroll_pane_cp21

0x92b8,	// (0x000a1048) sso_popup_body_t_pane_ParamLimits

0x92b8,	// (0x000a1048) sso_popup_body_t_pane

0x92c5,	// (0x000a1055) sso_popup_body_t_hdr_pane_ParamLimits

0x92c5,	// (0x000a1055) sso_popup_body_t_hdr_pane

0x92d7,	// (0x000a1067) sso_popup_body_t_nml_pane_ParamLimits

0x92d7,	// (0x000a1067) sso_popup_body_t_nml_pane

0x92fe,	// (0x000a108e) sso_popup_body_t_sub_pane_ParamLimits

0x92fe,	// (0x000a108e) sso_popup_body_t_sub_pane

0x9321,	// (0x000a10b1) sso_popup_body_t_hdr_pane_t1

0x9331,	// (0x000a10c1) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9331,	// (0x000a10c1) sso_popup_body_t_nml_pane_t1

0x9369,	// (0x000a10f9) sso_popup_body_t_sub_pane_t1_ParamLimits

0x9369,	// (0x000a10f9) sso_popup_body_t_sub_pane_t1

0xc5c0,	// (0x000a4350) sso_prog_pane_g1

0x938e,	// (0x000a111e) sso_apps_pane_comp1_ParamLimits

0x938e,	// (0x000a111e) sso_apps_pane_comp1

0x93a8,	// (0x000a1138) sso_apps_pane_comp1_g1

0x93b0,	// (0x000a1140) sso_apps_pane_comp1_t1

0x93cc,	// (0x000a115c) sso_option_row_pane_g1

0x93d4,	// (0x000a1164) sso_option_row_pane_t1

0xb64d,	// (0x000a33dd) list_cmail_pane_ParamLimits

0xac16,	// (0x000a29a6) main_call7_pane

0x8779,	// (0x000a0509) bg_welc_area_ParamLimits

0x8779,	// (0x000a0509) bg_welc_area

0x892c,	// (0x000a06bc) sso_t_hdr_pane_a_t1_ParamLimits

0x892c,	// (0x000a06bc) sso_t_hdr_pane_a_t1

0x8947,	// (0x000a06d7) sso_t_nml_pane_a_t1_ParamLimits

0x8947,	// (0x000a06d7) sso_t_nml_pane_a_t1

0x8976,	// (0x000a0706) sso_t_sub_pane_a_t1_ParamLimits

0x8976,	// (0x000a0706) sso_t_sub_pane_a_t1

0x8a21,	// (0x000a07b1) welc_button_pane_cp01_ParamLimits

0x8a21,	// (0x000a07b1) welc_button_pane_cp01

0x8d67,	// (0x000a0af7) sso_btn_pane_t1_copy1

0x8d76,	// (0x000a0b06) welc_button_pane_2_comp1

0x8ddd,	// (0x000a0b6d) sso_t_hdr_pane_p_t1

0x8ded,	// (0x000a0b7d) sso_t_nml_pane_p_t1

0x8dfd,	// (0x000a0b8d) sso_t_sub_pane_p_t1

0xac16,	// (0x000a29a6) main_att_pane

0xac16,	// (0x000a29a6) main_vod_pane

0x9196,	// (0x000a0f26) sso_t_sub_pane_ParamLimits

0x93be,	// (0x000a114e) input_focus_pane_cp10_t1

0x93d4,	// (0x000a1164) sso_option_row_pane_t1_ParamLimits

0x93ed,	// (0x000a117d) main_att_body_pane_ParamLimits

0x93ed,	// (0x000a117d) main_att_body_pane

0x9403,	// (0x000a1193) att_btn_emg_pane_ParamLimits

0x9403,	// (0x000a1193) att_btn_emg_pane

0x9422,	// (0x000a11b2) att_btn_pane_ParamLimits

0x9422,	// (0x000a11b2) att_btn_pane

0x9493,	// (0x000a1223) att_btn_pane_cp01_ParamLimits

0x9493,	// (0x000a1223) att_btn_pane_cp01

0x94b3,	// (0x000a1243) att_li_srv_pane_ParamLimits

0x94b3,	// (0x000a1243) att_li_srv_pane

0x94d0,	// (0x000a1260) att_opt_pane_ParamLimits

0x94d0,	// (0x000a1260) att_opt_pane

0x951a,	// (0x000a12aa) att_query_pane_ParamLimits

0x951a,	// (0x000a12aa) att_query_pane

0x9593,	// (0x000a1323) att_query_pane_cp01_ParamLimits

0x9593,	// (0x000a1323) att_query_pane_cp01

0x95df,	// (0x000a136f) att_t_hdr_pane_ParamLimits

0x95df,	// (0x000a136f) att_t_hdr_pane

0x964b,	// (0x000a13db) att_t_nml_pane_ParamLimits

0x964b,	// (0x000a13db) att_t_nml_pane

0x96bb,	// (0x000a144b) att_t_nml_pane_cp01_ParamLimits

0x96bb,	// (0x000a144b) att_t_nml_pane_cp01

0x96e7,	// (0x000a1477) att_t_nmlb_pane_ParamLimits

0x96e7,	// (0x000a1477) att_t_nmlb_pane

0x9754,	// (0x000a14e4) att_term_pane_ParamLimits

0x9754,	// (0x000a14e4) att_term_pane

0x979e,	// (0x000a152e) main_att_body_pane_g1_ParamLimits

0x979e,	// (0x000a152e) main_att_body_pane_g1

0x97ca,	// (0x000a155a) att_t_hdr_pane_t1_ParamLimits

0x97ca,	// (0x000a155a) att_t_hdr_pane_t1

0x97e3,	// (0x000a1573) att_t_nml_pane_t1_ParamLimits

0x97e3,	// (0x000a1573) att_t_nml_pane_t1

0x9808,	// (0x000a1598) att_btn_pane_t1

0x8d76,	// (0x000a0b06) bg_button_pane_cp23

0x9818,	// (0x000a15a8) att_li_srv_row_pane_ParamLimits

0x9818,	// (0x000a15a8) att_li_srv_row_pane

0x9828,	// (0x000a15b8) att_t_nmlb_pane_t1_ParamLimits

0x9828,	// (0x000a15b8) att_t_nmlb_pane_t1

0x9846,	// (0x000a15d6) att_query_pane_t1

0x9855,	// (0x000a15e5) att_query_pane_t2

0x9864,	// (0x000a15f4) att_query_pane_t3

0x0002,

0xfd0f,	// (0x000a7a9f) att_query_pane_t

0x9873,	// (0x000a1603) input_focus_pane_cp11

0x987c,	// (0x000a160c) att_term_pane_t1_ParamLimits

0x987c,	// (0x000a160c) att_term_pane_t1

0xac16,	// (0x000a29a6) att_opt_row_pane

0x93cc,	// (0x000a115c) att_opt_row_pane_g1

0x9899,	// (0x000a1629) att_opt_row_pane_t1_ParamLimits

0x9899,	// (0x000a1629) att_opt_row_pane_t1

0x98b2,	// (0x000a1642) att_li_srv_row_pane_g1

0x98ba,	// (0x000a164a) att_li_srv_row_pane_t1_ParamLimits

0x98ba,	// (0x000a164a) att_li_srv_row_pane_t1

0x98cf,	// (0x000a165f) att_li_srv_row_pane_t2_ParamLimits

0x98cf,	// (0x000a165f) att_li_srv_row_pane_t2

0x0001,

0xfd16,	// (0x000a7aa6) att_li_srv_row_pane_t_ParamLimits

0xfd16,	// (0x000a7aa6) att_li_srv_row_pane_t

0x98e4,	// (0x000a1674) att_btn_close_pane_g1

0xac16,	// (0x000a29a6) bg_button_pane_cp24

0x98ec,	// (0x000a167c) main_vod_body_pane_ParamLimits

0x98ec,	// (0x000a167c) main_vod_body_pane

0x9900,	// (0x000a1690) main_vod_body_pane_g1_ParamLimits

0x9900,	// (0x000a1690) main_vod_body_pane_g1

0x9934,	// (0x000a16c4) scroll_pane_cp24_ParamLimits

0x9934,	// (0x000a16c4) scroll_pane_cp24

0x9982,	// (0x000a1712) vod_btn_pane_ParamLimits

0x9982,	// (0x000a1712) vod_btn_pane

0x99c4,	// (0x000a1754) vod_det_pane_ParamLimits

0x99c4,	// (0x000a1754) vod_det_pane

0x99f8,	// (0x000a1788) vod_logo_g1_ParamLimits

0x99f8,	// (0x000a1788) vod_logo_g1

0x9a36,	// (0x000a17c6) vod_opt_pane_ParamLimits

0x9a36,	// (0x000a17c6) vod_opt_pane

0x9a69,	// (0x000a17f9) vod_opt_pane_cp01_ParamLimits

0x9a69,	// (0x000a17f9) vod_opt_pane_cp01

0x9a95,	// (0x000a1825) vod_query_pane_ParamLimits

0x9a95,	// (0x000a1825) vod_query_pane

0x9ac0,	// (0x000a1850) vod_query_pane_cp01_ParamLimits

0x9ac0,	// (0x000a1850) vod_query_pane_cp01

0x9acc,	// (0x000a185c) vod_t_nml_pane_ParamLimits

0x9acc,	// (0x000a185c) vod_t_nml_pane

0x9b79,	// (0x000a1909) vod_t_nml_pane_cp01_ParamLimits

0x9b79,	// (0x000a1909) vod_t_nml_pane_cp01

0x9bb5,	// (0x000a1945) vod_t_sub_pane_ParamLimits

0x9bb5,	// (0x000a1945) vod_t_sub_pane

0x9be6,	// (0x000a1976) vod_t_sub_pane_cp01_ParamLimits

0x9be6,	// (0x000a1976) vod_t_sub_pane_cp01

0x9873,	// (0x000a1603) vod_query_field_pane

0x9c12,	// (0x000a19a2) vod_query_pane_t1

0x8d76,	// (0x000a0b06) bg_button_pane_cp25

0x8d67,	// (0x000a0af7) sso_btn_pane_t1_copy2

0x9c21,	// (0x000a19b1) vod_t_nml_pane_t1_ParamLimits

0x9c21,	// (0x000a19b1) vod_t_nml_pane_t1

0x9c52,	// (0x000a19e2) vod_opt_row_pane_ParamLimits

0x9c52,	// (0x000a19e2) vod_opt_row_pane

0x9c64,	// (0x000a19f4) vod_t_sub_pane_t1_ParamLimits

0x9c64,	// (0x000a19f4) vod_t_sub_pane_t1

0x9c7d,	// (0x000a1a0d) vod_det_cell_pane_ParamLimits

0x9c7d,	// (0x000a1a0d) vod_det_cell_pane

0xac16,	// (0x000a29a6) input_focus_pane_cp15

0x9c8e,	// (0x000a1a1e) vod_query_field_pane_t1

0x9c9c,	// (0x000a1a2c) vod_opt_row_pane_g1_ParamLimits

0x9c9c,	// (0x000a1a2c) vod_opt_row_pane_g1

0x9ca8,	// (0x000a1a38) vod_opt_row_pane_t1_ParamLimits

0x9ca8,	// (0x000a1a38) vod_opt_row_pane_t1

0x9cc7,	// (0x000a1a57) vod_det_cell_field_pane

0x9cd0,	// (0x000a1a60) vod_det_cell_pane_g1

0x9cd8,	// (0x000a1a68) vod_det_cell_pane_t1

0xac16,	// (0x000a29a6) input_focus_pane_cp16

0x9ce7,	// (0x000a1a77) vod_det_cell_field_pane_t1

0x9cf5,	// (0x000a1a85) call7_btn_grp_pane_ParamLimits

0x9cf5,	// (0x000a1a85) call7_btn_grp_pane

0x9d0f,	// (0x000a1a9f) call7_bubble_pane_ParamLimits

0x9d0f,	// (0x000a1a9f) call7_bubble_pane

0x9d26,	// (0x000a1ab6) cell_call7_btn_pane_ParamLimits

0x9d26,	// (0x000a1ab6) cell_call7_btn_pane

0x9d39,	// (0x000a1ac9) call7_pane_g1_ParamLimits

0x9d39,	// (0x000a1ac9) call7_pane_g1

0x9d48,	// (0x000a1ad8) call7_windows_conf_pane_ParamLimits

0x9d48,	// (0x000a1ad8) call7_windows_conf_pane

0x9d62,	// (0x000a1af2) popup_call7_1st_window_ParamLimits

0x9d62,	// (0x000a1af2) popup_call7_1st_window

0x9d73,	// (0x000a1b03) popup_call7_2nd_window_ParamLimits

0x9d73,	// (0x000a1b03) popup_call7_2nd_window

0x9d84,	// (0x000a1b14) popup_call7_3rd_window_ParamLimits

0x9d84,	// (0x000a1b14) popup_call7_3rd_window

0xac16,	// (0x000a29a6) bg_button_pane_cp26

0xc04f,	// (0x000a3ddf) cell_call7_btn_pane_g1

0xc1d4,	// (0x000a3f64) cell_call7_btn_pane_t1

0xac16,	// (0x000a29a6) bg_popup_window_pane_cp12

0x9d95,	// (0x000a1b25) popup_call7_1st_window_g1

0x9d9d,	// (0x000a1b2d) popup_call7_1st_window_g2

0x9da5,	// (0x000a1b35) popup_call7_1st_window_g3

0x0002,

0xfd1b,	// (0x000a7aab) popup_call7_1st_window_g

0x9dad,	// (0x000a1b3d) popup_call7_1st_window_t1

0x9dbc,	// (0x000a1b4c) popup_call7_1st_window_t2

0x9dca,	// (0x000a1b5a) popup_call7_1st_window_t3

0x0002,

0xfd22,	// (0x000a7ab2) popup_call7_1st_window_t

0xac16,	// (0x000a29a6) bg_popup_window_pane_cp13

0x9dd8,	// (0x000a1b68) popup_call7_2nd_window_g1

0x9de0,	// (0x000a1b70) popup_call7_2nd_window_g2

0x9de8,	// (0x000a1b78) popup_call7_2nd_window_g3

0x0002,

0xfd29,	// (0x000a7ab9) popup_call7_2nd_window_g

0x9dad,	// (0x000a1b3d) popup_call7_2nd_window_t1

0xac16,	// (0x000a29a6) bg_popup_window_pane_cp14

0x9df0,	// (0x000a1b80) call7_list_conf_pane

0x9df8,	// (0x000a1b88) call7_list_conf_row_pane_ParamLimits

0x9df8,	// (0x000a1b88) call7_list_conf_row_pane

0x9e0b,	// (0x000a1b9b) call7_list_conf_row_pane_g1

0x9e13,	// (0x000a1ba3) call7_list_conf_row_pane_g2

0x0001,

0xfd30,	// (0x000a7ac0) call7_list_conf_row_pane_g

0x9e1b,	// (0x000a1bab) call7_list_conf_row_pane_t1

0xac16,	// (0x000a29a6) list_highlight_pane_cp22

0x9006,	// (0x000a0d96) sso_option_pane_cp01_ParamLimits

0x9006,	// (0x000a0d96) sso_option_pane_cp01

0xc4f9,	// (0x000a4289) msg_header_pane_ParamLimits

0xd3a5,	// (0x000a5135) bg_button_pane_cp01_ParamLimits

0xd3b9,	// (0x000a5149) input_focus_pane_cp07_ParamLimits

0x71c5,	// (0x0009ef55) popup_email_progress_window

0xc5c0,	// (0x000a4350) popup_email_progress_window_g1

0x9e29,	// (0x000a1bb9) popup_email_progress_window_g2

0x0001,

0xfd35,	// (0x000a7ac5) popup_email_progress_window_g

0x9e31,	// (0x000a1bc1) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
